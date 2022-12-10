#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lgc.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lmem.c"

UpVal * luaF_newupval(lua_State * L); // 0x1402904F0
UpVal * luaF_findupval(lua_State * L, lua_TValue * level); // 0x140290590
void luaF_close(lua_State * L, lua_TValue * level); // 0x140290630
Proto * luaF_newproto(lua_State * L); // 0x140290760
void luaF_freeproto(lua_State * L, Proto * f); // 0x140290830
const char * luaF_getlocalname(const Proto * f, long local_number, long pc); // 0x1402908F0void __fastcall luaF_close(lua_State *L, lua_TValue *level)
{
  global_State *l_G; // rbx
  GCObject *openupval; // rax
  Table **p_env; // r8
  unsigned __int64 len; // rdx
  unsigned __int8 marked; // dl
  unsigned __int64 v9; // rdx
  GCObject *v10; // rdx

  l_G = L->l_G;
  while ( L->openupval )
  {
    openupval = L->openupval;
    if ( openupval->ts.tsv.len < (unsigned __int64)level )
      break;
    p_env = &openupval->u.uv.env;
    L->openupval = openupval->gch.next;
    if ( ((l_G->currentwhite ^ 3) & (openupval->gch.marked ^ 3)) != 0 )
    {
      *(_QWORD *)(openupval->u.uv.len + 24) = *p_env;
      (*p_env)->node = openupval->h.node;
      len = openupval->ts.tsv.len;
      *p_env = *(Table **)len;
      openupval->cl.c.upvalue[0].value_.b = *(_DWORD *)(len + 8);
      openupval->ts.tsv.len = (unsigned __int64)p_env;
      openupval->gch.next = l_G->allgc;
      l_G->allgc = openupval;
      marked = openupval->gch.marked;
      if ( (marked & 7) == 0 )
      {
        if ( l_G->gckind == 2 || l_G->gcstate <= 1u )
        {
          openupval->gch.marked = marked & 0xBB | 4;
          v9 = openupval->ts.tsv.len;
          if ( (*(_BYTE *)(v9 + 8) & 0x40) != 0 )
          {
            v10 = *(GCObject **)v9;
            if ( (v10->gch.marked & 3) != 0 )
              reallymarkobject(l_G, v10);
          }
        }
        else
        {
          openupval->gch.marked = l_G->currentwhite & 3 | marked & 0xB8;
        }
      }
    }
    else
    {
      if ( (Table **)openupval->ts.tsv.len != p_env )
      {
        *(_QWORD *)(openupval->u.uv.len + 24) = *p_env;
        (*p_env)->node = openupval->h.node;
      }
      luaM_realloc_(L, openupval, 0x28ui64, 0i64);
    }
  }
}

GCObject *__fastcall luaF_findupval(lua_State *L, lua_TValue *level)
{
  GCObject **p_openupval; // r9
  global_State *l_G; // rdi
  GCObject *result; // rax
  lua_TValue *k; // r8
  UpVal *next; // rcx
  unsigned __int8 v8; // dl
  int v9; // [rsp+20h] [rbp-18h]

  p_openupval = &L->openupval;
  l_G = L->l_G;
  if ( L->openupval )
  {
    do
    {
      result = *p_openupval;
      k = (*p_openupval)->p.k;
      if ( k < level )
        break;
      if ( k == level )
      {
        v8 = result->gch.marked ^ 3;
        if ( ((l_G->currentwhite ^ 3) & v8) == 0 )
          result->gch.marked = v8;
        return result;
      }
      p_openupval = (GCObject **)*p_openupval;
    }
    while ( result->gch.next );
  }
  result = luaC_newobj(L, 10, 0x28ui64, p_openupval, v9);
  result->ts.tsv.len = (unsigned __int64)level;
  result->u.uv.env = (Table *)&l_G->uvhead;
  next = l_G->uvhead.u.l.next;
  result->u.uv.len = (unsigned __int64)next;
  next->u.value.value_.gc = result;
  l_G->uvhead.u.l.next = (UpVal *)result;
  return result;
}

void __fastcall luaF_freeproto(lua_State *L, Proto *f)
{
  luaM_realloc_(L, f->code, 4i64 * f->sizecode, 0i64);
  luaM_realloc_(L, f->p, 8i64 * f->sizep, 0i64);
  luaM_realloc_(L, f->k, 16i64 * f->sizek, 0i64);
  luaM_realloc_(L, f->lineinfo, 4i64 * f->sizelineinfo, 0i64);
  luaM_realloc_(L, f->locvars, 16i64 * f->sizelocvars, 0i64);
  luaM_realloc_(L, f->upvalues, 16i64 * f->sizeupvalues, 0i64);
  luaM_realloc_(L, f, 0x80ui64, 0i64);
}

TString *__fastcall luaF_getlocalname(const Proto *f, int local_number, int pc)
{
  int v3; // er9
  LocVar *locvars; // r11
  __int64 sizelocvars; // r10
  __int64 v6; // rcx
  int *i; // rax

  v3 = 0;
  if ( f->sizelocvars > 0 )
  {
    locvars = f->locvars;
    sizelocvars = f->sizelocvars;
    v6 = 0i64;
    for ( i = &locvars->endpc; *(i - 1) <= pc; i += 4 )
    {
      if ( pc < *i && !--local_number )
        return locvars[v3].varname + 1;
      ++v3;
      if ( ++v6 >= sizelocvars )
        return 0i64;
    }
  }
  return 0i64;
}

Proto *__fastcall luaF_newproto(lua_State *L)
{
  global_State *l_G; // rbx
  __int64 v3; // rdx
  unsigned __int8 currentwhite; // al

  l_G = L->l_G;
  v3 = (__int64)l_G->frealloc(l_G->ud, 0i64, 9ui64, 128ui64);
  if ( !v3 )
  {
    if ( !l_G->gcrunning || (luaC_fullgc(L, 1), (v3 = (__int64)l_G->frealloc(l_G->ud, 0i64, 9ui64, 128ui64)) == 0) )
      luaD_throw(L, 4);
  }
  l_G->GCdebt += 128i64;
  currentwhite = l_G->currentwhite;
  *(_BYTE *)(v3 + 8) = 9;
  *(_BYTE *)(v3 + 9) = currentwhite & 3;
  *(_QWORD *)v3 = l_G->allgc;
  l_G->allgc = (GCObject *)v3;
  *(_QWORD *)(v3 + 16) = 0i64;
  *(_QWORD *)(v3 + 84) = 0i64;
  *(_QWORD *)(v3 + 32) = 0i64;
  *(_QWORD *)(v3 + 92) = 0i64;
  *(_QWORD *)(v3 + 24) = 0i64;
  *(_QWORD *)(v3 + 64) = 0i64;
  *(_QWORD *)(v3 + 40) = 0i64;
  *(_QWORD *)(v3 + 56) = 0i64;
  *(_DWORD *)(v3 + 80) = 0;
  *(_WORD *)(v3 + 120) = 0;
  *(_BYTE *)(v3 + 122) = 0;
  *(_QWORD *)(v3 + 48) = 0i64;
  *(_QWORD *)(v3 + 100) = 0i64;
  *(_DWORD *)(v3 + 108) = 0;
  *(_QWORD *)(v3 + 72) = 0i64;
  return (Proto *)v3;
}

UpVal *__fastcall luaF_newupval(lua_State *L)
{
  global_State *l_G; // rbx
  __int64 v3; // rdx
  char v4; // al

  l_G = L->l_G;
  v3 = (__int64)l_G->frealloc(l_G->ud, 0i64, 10ui64, 40ui64);
  if ( !v3 )
  {
    if ( !l_G->gcrunning || (luaC_fullgc(L, 1), (v3 = (__int64)l_G->frealloc(l_G->ud, 0i64, 10ui64, 40ui64)) == 0) )
      luaD_throw(L, 4);
  }
  l_G->GCdebt += 40i64;
  v4 = l_G->currentwhite & 3;
  *(_BYTE *)(v3 + 8) = 10;
  *(_BYTE *)(v3 + 9) = v4;
  *(_QWORD *)v3 = l_G->allgc;
  l_G->allgc = (GCObject *)v3;
  *(_QWORD *)(v3 + 16) = v3 + 24;
  *(_DWORD *)(v3 + 32) = 0;
  return (UpVal *)v3;
}

