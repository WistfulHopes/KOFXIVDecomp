#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lgc.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/ltable.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lvm.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstring.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/ldo.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstate.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lmem.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lfunc.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lzio.c"

lua_TValue * index2addr(lua_State * L, long idx); // 0x140282ED0
void growstack(lua_State * L, void * ud); // 0x140282F40
long lua_checkstack(lua_State * L, long size); // 0x140282F50
void lua_xmove(lua_State * from, lua_State * to, long n); // 0x140282FF0
long lua_absindex(lua_State * L, long idx); // 0x140283050
void lua_settop(lua_State * L, long idx); // 0x140283080
void lua_remove(lua_State * L, long idx); // 0x1402830D0
void lua_insert(lua_State * L, long idx); // 0x140283120
void moveto(lua_State * L, lua_TValue * fr, long idx); // 0x140283170
long lua_type(lua_State * L, long idx); // 0x1402831F0
long lua_isnumber(lua_State * L, long idx); // 0x140283220
long lua_isstring(lua_State * L, long idx); // 0x140283270
long lua_toboolean(lua_State * L, long idx); // 0x1402832B0
const char * lua_tolstring(lua_State * L, long idx, unsigned long long * len); // 0x1402832E0
const void * lua_topointer(lua_State * L, long idx); // 0x1402833A0
const char * lua_pushlstring(lua_State * L, const char * s, unsigned long long len); // 0x140283450
const char * lua_pushstring(lua_State * L, const char * s); // 0x1402834D0
const char * lua_pushfstring(lua_State * L, const char * fmt, ...); // 0x140283570
void lua_pushcclosure(lua_State * L, long(*fn)(lua_State *), long n); // 0x1402835D0
void lua_getglobal(lua_State * L, const char * var); // 0x1402836D0
void lua_getfield(lua_State * L, long idx, const char * k); // 0x1402837B0
void lua_rawgeti(lua_State * L, long idx, long n); // 0x140283830
void lua_rawgetp(lua_State * L, long idx, const void * p); // 0x1402838C0
void lua_getuservalue(lua_State * L, long idx); // 0x140283910
void lua_setglobal(lua_State * L, const char * var); // 0x140283960
void lua_setfield(lua_State * L, long idx, const char * k); // 0x140283A50
void lua_rawset(lua_State * L, long idx); // 0x140283AD0
void lua_rawseti(lua_State * L, long idx, long n); // 0x140283B90
void lua_rawsetp(lua_State * L, long idx, const void * p); // 0x140283C10
long lua_setmetatable(lua_State * L, long objindex); // 0x140283CE0
void lua_setuservalue(lua_State * L, long idx); // 0x140283DE0
void lua_callk(lua_State * L, long nargs, long nresults, long ctx, long(*k)(lua_State *)); // 0x140283E70
struct CallS
{
	lua_TValue * func; // 0x0
	long nresults; // 0x8
};
void f_call(lua_State * L, void * ud); // 0x140283FA0
long lua_pcallk(lua_State * L, long nargs, long nresults, long errfunc, long ctx, long(*k)(lua_State *)); // 0x140284020
long lua_load(lua_State * L, const char *(*reader)(lua_State *, void *, unsigned long long *), void * data, const char * chunkname, const char * mode); // 0x1402841E0
long lua_gc(lua_State * L, long what, long data); // 0x1402842D0
void lua_concat(lua_State * L, long n); // 0x140284540
void * lua_newuserdata(lua_State * L, unsigned long long size); // 0x1402845E0
const char * lua_setupvalue(lua_State * L, long funcindex, long n); // 0x140284680
void lua_upvaluejoin(lua_State * L, long fidx1, long n1, long fidx2, long n2); // 0x1402847A0void __fastcall f_call(lua_State *L, void *ud)
{
  __int64 v2; // r8
  lua_TValue *v4; // rdx
  unsigned __int16 v5; // ax

  v2 = *((unsigned int *)ud + 2);
  v4 = *(lua_TValue **)ud;
  v5 = ++L->nCcalls;
  if ( v5 >= 0xC8u )
  {
    if ( v5 == 200 )
      luaG_runerror(L, "C stack overflow", v2);
    if ( v5 >= 0xE1u )
      luaD_throw(L, 6);
  }
  ++L->nny;
  if ( !luaD_precall(L, v4, v2) )
    luaV_execute(L);
  --L->nny;
  --L->nCcalls;
}

void __fastcall growstack(lua_State *L, void *ud)
{
  luaD_growstack(L, *(_DWORD *)ud);
}

lua_TValue *__fastcall index2addr(lua_State *L, int idx)
{
  CallInfo *ci; // r9
  lua_TValue *result; // rax
  int v4; // ecx
  Value v5; // rdx

  ci = L->ci;
  if ( idx <= 0 )
  {
    if ( idx > -1001000 )
      return &L->top[idx];
    if ( idx == -1001000 )
      return &L->l_G->l_registry;
    v4 = -1001000 - idx;
    if ( ci->func->tt_ != 22 )
    {
      v5.gc = ci->func->value_.gc;
      if ( v4 <= v5.gc->ts.tsv.extra )
        return (lua_TValue *)&(&v5.gc->th.top)[2 * v4];
    }
  }
  else
  {
    result = &ci->func[idx];
    if ( result < L->top )
      return result;
  }
  return (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
}

__int64 __fastcall lua_absindex(lua_State *L, int idx)
{
  if ( (unsigned int)idx >= 0xFFF0B9D9 || idx == 0 )
    return idx + (unsigned int)(L->top - L->ci->func);
  else
    return (unsigned int)idx;
}

void __fastcall lua_callk(lua_State *L, int nargs, __int64 nresults, __int64 ctx, int (__fastcall *k)(lua_State *))
{
  int v6; // edi
  lua_TValue *v7; // r10
  unsigned __int16 v8; // cx
  unsigned __int16 v9; // cx
  CallInfo *ci; // rax
  lua_TValue *top; // rcx

  v6 = nresults;
  v7 = &L->top[-nargs - 1];
  if ( !k || L->nny )
  {
    v9 = ++L->nCcalls;
    if ( v9 >= 0xC8u )
    {
      if ( v9 == 200 )
        luaG_runerror(L, "C stack overflow", nresults, ctx);
      if ( v9 >= 0xE1u )
        luaD_throw(L, 6);
    }
    ++L->nny;
    if ( !luaD_precall(L, v7, nresults) )
      luaV_execute(L);
    --L->nny;
  }
  else
  {
    L->ci->u.l.savedpc = (const unsigned int *)k;
    L->ci->u.c.ctx = ctx;
    v8 = ++L->nCcalls;
    if ( v8 >= 0xC8u )
    {
      if ( v8 == 200 )
        luaG_runerror(L, "C stack overflow");
      if ( v8 >= 0xE1u )
        luaD_throw(L, 6);
    }
    if ( !luaD_precall(L, v7, nresults) )
      luaV_execute(L);
  }
  --L->nCcalls;
  if ( v6 == -1 )
  {
    ci = L->ci;
    top = L->top;
    if ( ci->top < top )
      ci->top = top;
  }
}

_BOOL8 __fastcall lua_checkstack(lua_State *L, int size)
{
  lua_TValue *top; // r9
  CallInfo *ci; // rdi
  int v5; // er10
  BOOL v6; // edx
  _BOOL8 result; // rax
  int v8; // eax
  lua_TValue *v9; // r8
  int ud; // [rsp+38h] [rbp+10h] BYREF

  ud = size;
  top = L->top;
  ci = L->ci;
  v5 = size;
  if ( L->stack_last - top > size )
  {
    v6 = 1;
    goto LABEL_9;
  }
  if ( (int)(top - L->stack + 5) > 1000000 - size )
    return 0;
  v8 = luaD_rawrunprotected(L, growstack, &ud);
  v6 = v8 == 0;
  if ( v8 )
    return v6;
  v5 = ud;
LABEL_9:
  result = v6;
  v9 = &L->top[v5];
  if ( ci->top < v9 )
    ci->top = v9;
  return result;
}

void __fastcall lua_concat(lua_State *L, int n)
{
  global_State *l_G; // r8
  __int64 v5; // rax
  lua_TValue *top; // rbx
  TString *v7; // rax

  if ( n < 2 )
  {
    if ( !n )
    {
      top = L->top;
      v7 = internshrstr(L, &pnewText, 0i64);
      top->value_.gc = (GCObject *)v7;
      top->tt_ = v7->tsv.tt | 0x40;
      ++L->top;
    }
  }
  else
  {
    l_G = L->l_G;
    if ( l_G->GCdebt > 0 )
    {
      if ( l_G->gcrunning )
      {
        luaC_forcestep(L);
        luaV_concat(L, n);
        return;
      }
      v5 = l_G->GCdebt + 2400;
      l_G->GCdebt = -2400i64;
      l_G->totalbytes += v5;
    }
    luaV_concat(L, n);
  }
}

__int64 __fastcall lua_gc(lua_State *L, int what, int data, __int64 a4, int a5)
{
  __int64 result; // rax
  BOOL v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rax
  global_State *l_G; // rbx
  global_State *v13; // rax

  switch ( a5 )
  {
    case 0:
      *(_BYTE *)(a4 + 87) = 0;
      result = (unsigned int)data;
      break;
    case 1:
      *(_QWORD *)(a4 + 16) += *(_QWORD *)(a4 + 24);
      *(_BYTE *)(a4 + 87) = 1;
      *(_QWORD *)(a4 + 24) = 0i64;
      result = (unsigned int)data;
      break;
    case 2:
      luaC_fullgc(L, 0);
      result = (unsigned int)data;
      break;
    case 3:
      result = (unsigned int)((*(_QWORD *)(a4 + 16) + *(_QWORD *)(a4 + 24)) >> 10);
      break;
    case 4:
      result = (*(_DWORD *)(a4 + 16) + *(_DWORD *)(a4 + 24)) & 0x3FF;
      break;
    case 5:
      if ( *(_BYTE *)(a4 + 86) == 2 )
      {
        v9 = *(_QWORD *)(a4 + 40) == 0i64;
        luaC_forcestep(L);
        result = v9;
      }
      else
      {
        v10 = ((__int64)what << 10) - 2400;
        if ( *(_BYTE *)(a4 + 87) )
          v10 += *(_QWORD *)(a4 + 24);
        v11 = *(_QWORD *)(a4 + 24) - v10;
        *(_QWORD *)(a4 + 24) = v10;
        *(_QWORD *)(a4 + 16) += v11;
        luaC_forcestep(L);
        if ( *(_BYTE *)(a4 + 85) != 5 )
          goto LABEL_21;
        result = 1i64;
      }
      break;
    case 6:
      result = *(unsigned int *)(a4 + 240);
      *(_DWORD *)(a4 + 240) = what;
      break;
    case 7:
      result = *(unsigned int *)(a4 + 248);
      *(_DWORD *)(a4 + 248) = what;
      break;
    case 8:
      result = *(unsigned int *)(a4 + 244);
      *(_DWORD *)(a4 + 244) = what;
      break;
    case 9:
      result = *(unsigned __int8 *)(a4 + 87);
      break;
    case 10:
      l_G = L->l_G;
      if ( l_G->gckind == 2 )
        goto LABEL_21;
      luaC_runtilstate(L, 1);
      l_G->GCestimate = l_G->totalbytes + l_G->GCdebt;
      result = (unsigned int)data;
      l_G->gckind = 2;
      break;
    case 11:
      v13 = L->l_G;
      if ( v13->gckind )
      {
        v13->gckind = 0;
        entersweep(L);
        luaC_runtilstate(L, -29);
        result = (unsigned int)data;
      }
      else
      {
LABEL_21:
        result = (unsigned int)data;
      }
      break;
  }
  return result;
}

void __fastcall lua_getfield(lua_State *L, int idx, const char *k)
{
  lua_TValue *v4; // rax
  const char *v5; // r10
  lua_TValue *top; // rdi
  const lua_TValue *v7; // rsi
  unsigned __int64 v8; // r8
  TString *v9; // rax

  v4 = index2addr(L, idx);
  top = L->top;
  v7 = v4;
  v8 = -1i64;
  do
    ++v8;
  while ( v5[v8] );
  v9 = luaS_newlstr(L, v5, v8);
  top->value_.gc = (GCObject *)v9;
  top->tt_ = v9->tsv.tt | 0x40;
  ++L->top;
  luaV_gettable(L, v7, L->top - 1, L->top - 1);
}

void __fastcall lua_getglobal(lua_State *L, const char *var)
{
  const Table *gc; // rcx
  Node *next; // rbx
  lua_TValue *top; // r14
  unsigned __int64 v7; // r8
  TString *v8; // rax

  gc = (const Table *)L->l_G->l_registry.value_.gc;
  if ( gc->sizearray <= 1u )
  {
    next = hashnum(gc, 2.0);
    while ( next->i_key.nk.tt_ != 3 || next->i_key.nk.value_.n != 2.0 )
    {
      next = next->i_key.nk.next;
      if ( !next )
      {
        next = (Node *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
        break;
      }
    }
  }
  else
  {
    next = (Node *)&gc->array[1];
  }
  top = L->top;
  v7 = -1i64;
  L->top = top + 1;
  do
    ++v7;
  while ( var[v7] );
  v8 = luaS_newlstr(L, var, v7);
  top->value_.gc = (GCObject *)v8;
  top->tt_ = v8->tsv.tt | 0x40;
  luaV_gettable(L, &next->i_val, L->top - 1, L->top - 1);
}

void __fastcall lua_getuservalue(lua_State *L, int idx)
{
  Value v2; // rdx
  __int64 v3; // r10
  __int64 v4; // rax
  Table *env; // rcx

  v2.gc = (GCObject *)index2addr(L, idx)->value_;
  v4 = *(_QWORD *)(v3 + 16);
  env = v2.gc->u.uv.env;
  if ( env )
  {
    *(_QWORD *)v4 = env;
    *(_DWORD *)(v4 + 8) = 69;
  }
  else
  {
    *(_DWORD *)(v4 + 8) = 0;
  }
  *(_QWORD *)(v3 + 16) += 16i64;
}

void __fastcall lua_insert(lua_State *L, int idx)
{
  lua_TValue *v2; // rax
  __int64 v3; // r11
  unsigned __int64 i; // rdx
  Value *v5; // rcx

  v2 = index2addr(L, idx);
  for ( i = *(_QWORD *)(v3 + 16); i > (unsigned __int64)v2; i -= 16i64 )
  {
    *(_QWORD *)i = *(_QWORD *)(i - 16);
    *(_DWORD *)(i + 8) = *(_DWORD *)(i - 8);
  }
  v5 = *(Value **)(v3 + 16);
  v2->value_ = (Value)v5->gc;
  v2->tt_ = v5[1].b;
}

_BOOL8 __fastcall lua_isnumber(lua_State *L, int idx)
{
  lua_TValue *v2; // rax
  int tt; // ecx
  float result; // [rsp+40h] [rbp+18h] BYREF

  v2 = index2addr(L, idx);
  tt = v2->tt_;
  return tt == 3
      || (tt & 0xF) == 4 && luaO_str2d((const char *)&v2->value_.gc->th.l_G, v2->value_.gc->ts.tsv.len, &result);
}

_BOOL8 __fastcall lua_isstring(lua_State *L, int idx)
{
  const extension::gfxi_detail::TranslatorImpl *v2; // rax

  v2 = (const extension::gfxi_detail::TranslatorImpl *)index2addr(L, idx);
  return v2 != (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
      && (v2->RefCount & 0xFu) - 3 <= 1;
}

int __fastcall lua_load(
        lua_State *L,
        const char *(__fastcall *reader)(lua_State *, void *, unsigned __int64 *),
        void *data,
        const char *chunkname,
        const char *mode)
{
  const char *v5; // r8
  int result; // eax
  Value v8; // rdi
  const lua_TValue *v9; // rax
  GCObject *gc; // rdx
  unsigned __int64 len; // r8
  global_State *l_G; // rax
  Zio v13; // [rsp+20h] [rbp-38h] BYREF

  v13.data = data;
  v13.reader = reader;
  v5 = "?";
  v13.L = L;
  if ( chunkname )
    v5 = chunkname;
  v13.n = 0i64;
  v13.p = 0i64;
  result = luaD_protectedparser(L, &v13, v5, mode);
  if ( !result )
  {
    v8.gc = (GCObject *)L->top[-1].value_;
    if ( v8.gc->ts.tsv.extra == 1 )
    {
      v9 = luaH_getint((Table *)L->l_G->l_registry.value_.gc, 2);
      *(lua_TValue *)*(_QWORD *)(v8.gc->u.uv.len + 16) = *v9;
      if ( (v9->tt_ & 0x40) != 0 )
      {
        gc = v9->value_.gc;
        if ( (v9->value_.gc->gch.marked & 3) != 0 )
        {
          len = v8.gc->u.uv.len;
          if ( (*(_BYTE *)(len + 9) & 4) != 0 )
          {
            l_G = L->l_G;
            if ( l_G->gcstate <= 1u )
            {
              reallymarkobject(L->l_G, gc);
              return 0;
            }
            *(_BYTE *)(len + 9) = *(_BYTE *)(len + 9) & 0xB8 | l_G->currentwhite & 3;
          }
        }
      }
      return 0;
    }
  }
  return result;
}

const unsigned int **__fastcall lua_newuserdata(lua_State *L, unsigned __int64 size)
{
  global_State *l_G; // r8
  __int64 v5; // rax
  GCObject *v6; // rax
  lua_TValue *top; // rcx
  int v9; // [rsp+20h] [rbp-18h]

  l_G = L->l_G;
  if ( l_G->GCdebt > 0 )
  {
    if ( l_G->gcrunning )
    {
      luaC_forcestep(L);
    }
    else
    {
      v5 = l_G->GCdebt + 2400;
      l_G->GCdebt = -2400i64;
      l_G->totalbytes += v5;
    }
  }
  if ( size > 0xFFFFFFFFFFFFFFD5ui64 )
    luaG_runerror(L, "memory allocation error: block too big");
  v6 = luaC_newobj(L, 7, size + 40, 0i64, v9);
  v6->u.uv.len = size;
  v6->ts.tsv.len = 0i64;
  v6->u.uv.env = 0i64;
  top = L->top;
  top->value_.gc = v6;
  top->tt_ = 71;
  ++L->top;
  return &v6->th.oldpc;
}

__int64 __fastcall lua_pcallk(
        lua_State *L,
        int nargs,
        int nresults,
        int errfunc,
        int ctx,
        int (__fastcall *k)(lua_State *))
{
  unsigned int v6; // esi
  int v8; // er10
  __int64 v10; // r9
  lua_TValue *v11; // rbx
  CallInfo *v12; // rbx
  unsigned __int16 v13; // ax
  __int64 old_errfunc; // rax
  signed __int64 v15; // rbx
  unsigned __int8 allowhook; // r12
  unsigned __int16 nny; // r13
  __int64 v18; // r14
  CallInfo *ci; // r15
  lua_TValue *v20; // rbx
  CallInfo *v21; // rax
  lua_TValue *top; // rcx
  lua_TValue *func; // [rsp+20h] [rbp-38h] BYREF
  int v25; // [rsp+28h] [rbp-30h]

  v6 = 0;
  v8 = nargs;
  if ( errfunc )
    v10 = (char *)index2addr(L, errfunc) - (char *)L->stack;
  else
    v10 = 0i64;
  v11 = &L->top[-v8 - 1];
  func = v11;
  if ( !k || L->nny )
  {
    v15 = (char *)v11 - (char *)L->stack;
    allowhook = L->allowhook;
    nny = L->nny;
    v18 = L->errfunc;
    ci = L->ci;
    L->errfunc = v10;
    v25 = nresults;
    v6 = luaD_rawrunprotected(L, f_call, &func);
    if ( v6 )
    {
      v20 = (lua_TValue *)((char *)L->stack + v15);
      luaF_close(L, v20);
      seterrorobj(L, v6, v20);
      L->ci = ci;
      L->allowhook = allowhook;
      L->nny = nny;
      luaD_shrinkstack(L);
    }
    L->errfunc = v18;
  }
  else
  {
    v12 = L->ci;
    v12->u.l.savedpc = (const unsigned int *)k;
    v12->u.c.ctx = 0;
    v12->extra = (char *)func - (char *)L->stack;
    v12->u.c.old_allowhook = L->allowhook;
    v12->u.c.old_errfunc = L->errfunc;
    L->errfunc = v10;
    v12->callstatus |= 0x10u;
    v13 = ++L->nCcalls;
    if ( v13 >= 0xC8u )
    {
      if ( v13 == 200 )
        luaG_runerror(L, "C stack overflow");
      if ( v13 >= 0xE1u )
        luaD_throw(L, 6);
    }
    if ( !luaD_precall(L, func, nresults) )
      luaV_execute(L);
    --L->nCcalls;
    old_errfunc = v12->u.c.old_errfunc;
    v12->callstatus &= ~0x10u;
    L->errfunc = old_errfunc;
  }
  if ( nresults == -1 )
  {
    v21 = L->ci;
    top = L->top;
    if ( v21->top < top )
      v21->top = top;
  }
  return v6;
}

void __fastcall lua_pushcclosure(lua_State *L, int (__fastcall *fn)(lua_State *), int n)
{
  __int64 v3; // rdi
  lua_TValue *v6; // rax
  global_State *l_G; // rcx
  __int64 v8; // rax
  GCObject *v9; // r9
  unsigned __int64 *v10; // rcx
  char *v11; // rdx
  lua_TValue *top; // rax
  int v13; // [rsp+20h] [rbp-18h]

  v3 = n;
  if ( n )
  {
    l_G = L->l_G;
    if ( l_G->GCdebt > 0 )
    {
      if ( l_G->gcrunning )
      {
        luaC_forcestep(L);
      }
      else
      {
        v8 = l_G->GCdebt + 2400;
        l_G->GCdebt = -2400i64;
        l_G->totalbytes += v8;
      }
    }
    v9 = luaC_newobj(L, 38, 16 * ((int)v3 + 2), 0i64, v13);
    v9->ts.tsv.extra = v3;
    v9->u.uv.env = (Table *)fn;
    L->top -= v3;
    v10 = &v9->u.uv.len + 2 * v3;
    do
    {
      v10 -= 2;
      v11 = (char *)L->top + (unsigned __int64)v10 - 32 - (_QWORD)v9;
      *v10 = *(_QWORD *)v11;
      *((_DWORD *)v10 + 2) = *((_DWORD *)v11 + 2);
      LODWORD(v3) = v3 - 1;
    }
    while ( (_DWORD)v3 );
    top = L->top;
    top->value_.gc = v9;
    top->tt_ = 102;
    ++L->top;
  }
  else
  {
    v6 = L->top;
    v6->value_.gc = (GCObject *)fn;
    v6->tt_ = 22;
    ++L->top;
  }
}

const char *lua_pushfstring(lua_State *L, const char *fmt, ...)
{
  global_State *l_G; // rdx
  __int64 v4; // rax
  va_list argp; // [rsp+40h] [rbp+18h] BYREF

  va_start(argp, fmt);
  l_G = L->l_G;
  if ( l_G->GCdebt > 0 )
  {
    if ( l_G->gcrunning )
    {
      luaC_forcestep(L);
    }
    else
    {
      v4 = l_G->GCdebt + 2400;
      l_G->GCdebt = -2400i64;
      l_G->totalbytes += v4;
    }
  }
  return luaO_pushvfstring(L, fmt, argp);
}

TString *__fastcall lua_pushlstring(lua_State *L, const char *s, unsigned __int64 len)
{
  global_State *l_G; // r9
  __int64 v7; // rax
  TString *v8; // rax
  lua_TValue *top; // rdx

  l_G = L->l_G;
  if ( l_G->GCdebt > 0 )
  {
    if ( l_G->gcrunning )
    {
      luaC_forcestep(L);
    }
    else
    {
      v7 = l_G->GCdebt + 2400;
      l_G->GCdebt = -2400i64;
      l_G->totalbytes += v7;
    }
  }
  v8 = luaS_newlstr(L, s, len);
  top = L->top;
  top->value_.gc = (GCObject *)v8;
  top->tt_ = v8->tsv.tt | 0x40;
  ++L->top;
  return v8 + 1;
}

TString *__fastcall lua_pushstring(lua_State *L, const char *s)
{
  global_State *l_G; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // r8
  TString *v8; // rax
  lua_TValue *top; // rdx

  if ( s )
  {
    l_G = L->l_G;
    if ( l_G->GCdebt > 0 )
    {
      if ( l_G->gcrunning )
      {
        luaC_forcestep(L);
      }
      else
      {
        v6 = l_G->GCdebt + 2400;
        l_G->GCdebt = -2400i64;
        l_G->totalbytes += v6;
      }
    }
    v7 = -1i64;
    do
      ++v7;
    while ( s[v7] );
    v8 = luaS_newlstr(L, s, v7);
    top = L->top;
    top->value_.gc = (GCObject *)v8;
    top->tt_ = v8->tsv.tt | 0x40;
    ++L->top;
    return v8 + 1;
  }
  else
  {
    L->top->tt_ = 0;
    ++L->top;
    return 0i64;
  }
}

void __fastcall lua_rawgeti(lua_State *L, int idx, int n)
{
  lua_TValue *v4; // rax
  int v5; // er10
  const Table *gc; // rcx
  char *v7; // rdx
  float v8; // xmm6_4
  lua_TValue *top; // rcx

  v4 = index2addr(L, idx);
  gc = (const Table *)v4->value_.gc;
  if ( (unsigned int)(v5 - 1) >= v4->value_.gc->h.sizearray )
  {
    v8 = (float)v5;
    v7 = (char *)hashnum(gc, (float)v5);
    while ( *((_DWORD *)v7 + 6) != 3 || *((float *)v7 + 4) != v8 )
    {
      v7 = (char *)*((_QWORD *)v7 + 4);
      if ( !v7 )
      {
        v7 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
        break;
      }
    }
  }
  else
  {
    v7 = (char *)&gc->array[v5 - 1];
  }
  top = L->top;
  top->value_.gc = *(GCObject **)v7;
  top->tt_ = *((_DWORD *)v7 + 2);
  ++L->top;
}

void __fastcall lua_rawgetp(lua_State *L, int idx, const void *p)
{
  Table **v4; // rax
  Value v5; // r10
  lua_TValue key; // [rsp+20h] [rbp-18h] BYREF

  v4 = (Table **)index2addr(L, -1001000);
  key.value_ = v5;
  key.tt_ = 2;
  *L->top++ = *luaH_get(*v4, &key);
}

void __fastcall lua_rawset(lua_State *L, int idx)
{
  Table **v3; // rax
  lua_TValue *top; // rsi
  Table **v5; // rdi
  Table *v6; // r14
  lua_TValue *v7; // rax
  lua_TValue *v8; // rax
  GCObject *v9; // rdx
  global_State *l_G; // rcx

  v3 = (Table **)index2addr(L, idx);
  top = L->top;
  v5 = v3;
  v6 = *v3;
  v7 = (lua_TValue *)luaH_get(*v3, top - 2);
  if ( v7 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
    v7 = luaH_newkey(L, v6, top - 2);
  v7->value_.gc = top[-1].value_.gc;
  v7->tt_ = top[-1].tt_;
  (*v5)->flags = 0;
  v8 = L->top;
  if ( (v8[-1].tt_ & 0x40) != 0 && (v8[-1].value_.gc->gch.marked & 3) != 0 )
  {
    v9 = (GCObject *)*v5;
    if ( ((*v5)->marked & 4) != 0 )
    {
      l_G = L->l_G;
      v9->gch.marked &= ~4u;
      v9->h.gclist = l_G->grayagain;
      l_G->grayagain = v9;
    }
  }
  L->top -= 2;
}

void __fastcall lua_rawseti(lua_State *L, int idx, int n)
{
  Table **v4; // rdi
  int v5; // er10
  lua_TValue *top; // rcx
  Table *v7; // rdx
  global_State *l_G; // rcx

  v4 = (Table **)index2addr(L, idx);
  luaH_setint(L, *v4, v5, L->top - 1);
  top = L->top;
  if ( (top[-1].tt_ & 0x40) != 0 && (top[-1].value_.gc->gch.marked & 3) != 0 )
  {
    v7 = *v4;
    if ( ((*v4)->marked & 4) != 0 )
    {
      l_G = L->l_G;
      v7->marked &= ~4u;
      v7->gclist = l_G->grayagain;
      l_G->grayagain = (GCObject *)v7;
    }
  }
  --L->top;
}

void __fastcall lua_rawsetp(lua_State *L, int idx, const void *p)
{
  Table **v4; // rax
  lua_TValue *top; // rdi
  Value v6; // r10
  Table **v7; // rsi
  Table *v8; // rbp
  lua_TValue *v9; // rax
  lua_TValue *v10; // rax
  GCObject *v11; // rdx
  global_State *l_G; // rcx
  lua_TValue key; // [rsp+20h] [rbp-18h] BYREF

  v4 = (Table **)index2addr(L, -1001000);
  top = L->top;
  key.value_ = v6;
  v7 = v4;
  key.tt_ = 2;
  v8 = *v4;
  v9 = (lua_TValue *)luaH_get(*v4, &key);
  if ( v9 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
    v9 = luaH_newkey(L, v8, &key);
  v9->value_.gc = top[-1].value_.gc;
  v9->tt_ = top[-1].tt_;
  v10 = L->top;
  if ( (v10[-1].tt_ & 0x40) != 0 && (v10[-1].value_.gc->gch.marked & 3) != 0 )
  {
    v11 = (GCObject *)*v7;
    if ( ((*v7)->marked & 4) != 0 )
    {
      l_G = L->l_G;
      v11->gch.marked &= ~4u;
      v11->h.gclist = l_G->grayagain;
      l_G->grayagain = v11;
    }
  }
  --L->top;
}

void __fastcall lua_remove(lua_State *L, int idx)
{
  lua_TValue *i; // rax
  __int64 v3; // r10

  for ( i = index2addr(L, idx) + 1; (unsigned __int64)i < *(_QWORD *)(v3 + 16); ++i )
  {
    i[-1].value_.gc = i->value_.gc;
    i[-1].tt_ = i->tt_;
  }
  *(_QWORD *)(v3 + 16) -= 16i64;
}

void __fastcall lua_setfield(lua_State *L, int idx, const char *k)
{
  lua_TValue *v4; // rax
  const char *v5; // r10
  lua_TValue *top; // rdi
  const lua_TValue *v7; // rsi
  unsigned __int64 v8; // r8
  TString *v9; // rax

  v4 = index2addr(L, idx);
  top = L->top;
  v7 = v4;
  v8 = -1i64;
  L->top = top + 1;
  do
    ++v8;
  while ( v5[v8] );
  v9 = luaS_newlstr(L, v5, v8);
  top->value_.gc = (GCObject *)v9;
  top->tt_ = v9->tsv.tt | 0x40;
  luaV_settable(L, v7, L->top - 1, L->top - 2);
  L->top -= 2;
}

void __fastcall lua_setglobal(lua_State *L, const char *var)
{
  const Table *gc; // rcx
  Node *next; // rbx
  lua_TValue *top; // r14
  unsigned __int64 v7; // r8
  TString *v8; // rax

  gc = (const Table *)L->l_G->l_registry.value_.gc;
  if ( gc->sizearray <= 1u )
  {
    next = hashnum(gc, 2.0);
    while ( next->i_key.nk.tt_ != 3 || next->i_key.nk.value_.n != 2.0 )
    {
      next = next->i_key.nk.next;
      if ( !next )
      {
        next = (Node *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
        break;
      }
    }
  }
  else
  {
    next = (Node *)&gc->array[1];
  }
  top = L->top;
  v7 = -1i64;
  L->top = top + 1;
  do
    ++v7;
  while ( var[v7] );
  v8 = luaS_newlstr(L, var, v7);
  top->value_.gc = (GCObject *)v8;
  top->tt_ = v8->tsv.tt | 0x40;
  luaV_settable(L, &next->i_val, L->top - 1, L->top - 2);
  L->top -= 2;
}

__int64 __fastcall lua_setmetatable(lua_State *L, int objindex)
{
  lua_TValue *v3; // rax
  lua_TValue *top; // r9
  GCObject **p_gc; // r10
  GCObject *gc; // r9
  int tt; // ecx
  __int64 result; // rax
  global_State *v9; // rax
  GCObject *v10; // rdx
  global_State *l_G; // rcx

  v3 = index2addr(L, objindex);
  top = L->top;
  p_gc = &v3->value_.gc;
  if ( top[-1].tt_ )
    gc = top[-1].value_.gc;
  else
    gc = 0i64;
  tt = v3->tt_;
  if ( (tt & 0xF) == 5 )
  {
    v3->value_.gc->ts.tsv.len = (unsigned __int64)gc;
    if ( gc )
    {
      if ( (gc->gch.marked & 3) != 0 )
      {
        v10 = v3->value_.gc;
        if ( (v3->value_.gc->gch.marked & 4) != 0 )
        {
          l_G = L->l_G;
          v10->gch.marked &= ~4u;
          v10->h.gclist = l_G->grayagain;
          l_G->grayagain = v10;
        }
      }
      goto LABEL_17;
    }
  }
  else
  {
    if ( (tt & 0xF) != 7 )
    {
      L->l_G->mt[tt & 0xF] = (Table *)gc;
      result = 1i64;
      --L->top;
      return result;
    }
    v3->value_.gc->ts.tsv.len = (unsigned __int64)gc;
    if ( gc )
    {
      if ( (gc->gch.marked & 3) != 0 && (v3->value_.gc->gch.marked & 4) != 0 )
      {
        v9 = L->l_G;
        if ( v9->gcstate > 1u )
          (*p_gc)->gch.marked = (*p_gc)->gch.marked & 0xB8 | v9->currentwhite & 3;
        else
          reallymarkobject(L->l_G, gc);
      }
LABEL_17:
      luaC_checkfinalizer(L, *p_gc, (Table *)gc);
    }
  }
  --L->top;
  return 1i64;
}

void __fastcall lua_settop(lua_State *L, int idx)
{
  lua_TValue *i; // rdx

  if ( idx < 0 )
  {
    L->top += idx + 1;
  }
  else
  {
    for ( i = &L->ci->func[idx + 1]; L->top < i; ++L->top )
      L->top->tt_ = 0;
    L->top = i;
  }
}

const char *__fastcall lua_setupvalue(lua_State *L, int funcindex, int n)
{
  lua_TValue *v3; // rax
  int v4; // er10
  __int64 v5; // r11
  int v6; // ecx
  Value v7; // rdx
  const char *v8; // r9
  unsigned __int64 *len; // r8
  Table *env; // r9
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rcx
  GCObject *v15; // rcx
  unsigned __int8 marked; // r8
  __int64 v17; // rax

  v3 = index2addr(L, funcindex);
  v6 = v3->tt_ & 0x3F;
  if ( v6 == 6 )
  {
    env = v3->value_.gc->u.uv.env;
    if ( v4 >= 1 && v4 <= SLODWORD(env[1].metatable) )
    {
      v11 = v4 - 1;
      v7.gc = *(&v3->value_.gc->cl.c.upvalue[0].value_.gc + v11);
      v12 = *(_QWORD *)(*(_QWORD *)&env->sizearray + 16 * v11);
      len = (unsigned __int64 *)v7.gc->ts.tsv.len;
      if ( !v12 )
      {
        v8 = &pnewText;
        goto LABEL_11;
      }
      v8 = (const char *)(v12 + 24);
      if ( v8 )
        goto LABEL_11;
      return v8;
    }
    return 0i64;
  }
  if ( v6 != 38 )
    return 0i64;
  v7.gc = (GCObject *)v3->value_;
  if ( v4 < 1 || v4 > v7.gc->ts.tsv.extra )
    return 0i64;
  v8 = &pnewText;
  len = &v7.gc->ts.tsv.len + 2 * v4;
LABEL_11:
  *(_QWORD *)(v5 + 16) -= 16i64;
  v13 = *(_QWORD *)(v5 + 16);
  *len = *(_QWORD *)v13;
  *((_DWORD *)len + 2) = *(_DWORD *)(v13 + 8);
  v14 = *(_QWORD *)(v5 + 16);
  if ( (*(_BYTE *)(v14 + 8) & 0x40) == 0 )
    return v8;
  v15 = *(GCObject **)v14;
  if ( (v15->gch.marked & 3) == 0 )
    return v8;
  marked = v7.gc->gch.marked;
  if ( (marked & 4) == 0 )
    return v8;
  v17 = *(_QWORD *)(v5 + 24);
  if ( *(_BYTE *)(v17 + 85) > 1u )
    v7.gc->gch.marked = marked & 0xB8 | *(_BYTE *)(v17 + 84) & 3;
  else
    reallymarkobject(*(global_State **)(v5 + 24), v15);
  return v8;
}

void __fastcall lua_setuservalue(lua_State *L, int idx)
{
  lua_TValue *v2; // r8
  __int64 v3; // r10
  __int64 v4; // rax
  GCObject *v5; // rdx
  Value v6; // r8
  __int64 v7; // rax
  __int64 v8; // r10

  v2 = index2addr(L, idx);
  v4 = *(_QWORD *)(v3 + 16);
  if ( !*(_DWORD *)(v4 - 8) )
  {
    v2->value_.gc->u.uv.env = 0i64;
    *(_QWORD *)(v3 + 16) -= 16i64;
    return;
  }
  v2->value_.gc->u.uv.env = *(Table **)(v4 - 16);
  v5 = *(GCObject **)(*(_QWORD *)(v3 + 16) - 16i64);
  if ( (v5->gch.marked & 3) != 0 )
  {
    v6.gc = (GCObject *)v2->value_;
    if ( (v6.gc->gch.marked & 4) != 0 )
    {
      v7 = *(_QWORD *)(v3 + 24);
      if ( *(_BYTE *)(v7 + 85) <= 1u )
      {
        reallymarkobject(*(global_State **)(v3 + 24), v5);
        *(_QWORD *)(v8 + 16) -= 16i64;
        return;
      }
      v6.gc->gch.marked = v6.gc->gch.marked & 0xB8 | *(_BYTE *)(v7 + 84) & 3;
    }
  }
  *(_QWORD *)(v3 + 16) -= 16i64;
}

_BOOL8 __fastcall lua_toboolean(lua_State *L, int idx)
{
  lua_TValue *v2; // rax
  int tt; // ecx

  v2 = index2addr(L, idx);
  tt = v2->tt_;
  return tt && (tt != 1 || v2->value_.b);
}

global_State **__fastcall lua_tolstring(lua_State *L, int idx, unsigned __int64 *len)
{
  lua_TValue *v6; // rax
  lua_TValue *v7; // r10
  global_State *l_G; // rcx
  __int64 v10; // rax

  v6 = index2addr(L, idx);
  v7 = v6;
  if ( (v6->tt_ & 0xF) != 4 )
  {
    if ( !luaV_tostring(L, v6) )
    {
      if ( len )
        *len = 0i64;
      return 0i64;
    }
    l_G = L->l_G;
    if ( l_G->GCdebt > 0 )
    {
      if ( l_G->gcrunning )
      {
        luaC_forcestep(L);
      }
      else
      {
        v10 = l_G->GCdebt + 2400;
        l_G->GCdebt = -2400i64;
        l_G->totalbytes += v10;
      }
    }
    v7 = index2addr(L, idx);
  }
  if ( len )
    *len = v7->value_.gc->ts.tsv.len;
  return &v7->value_.gc->th.l_G;
}

const unsigned int **__fastcall lua_topointer(lua_State *L, int idx)
{
  lua_TValue *v2; // rax
  int v3; // er10
  lua_State *v4; // r11
  const unsigned int **result; // rax
  int v6; // ecx

  v2 = index2addr(L, idx);
  switch ( v2->tt_ & 0x3F )
  {
    case 2:
    case 7:
      v2 = index2addr(v4, v3);
      v6 = v2->tt_ & 0xF;
      if ( v6 == 2 )
        goto $LN4_26;
      if ( v6 != 7 )
        goto LABEL_6;
      result = &v2->value_.gc->th.oldpc;
      break;
    case 5:
    case 6:
    case 8:
    case 0x16:
    case 0x26:
$LN4_26:
      result = (const unsigned int **)v2->value_.gc;
      break;
    default:
LABEL_6:
      result = 0i64;
      break;
  }
  return result;
}

__int64 __fastcall lua_type(lua_State *L, int idx)
{
  const extension::gfxi_detail::TranslatorImpl *v2; // rax

  v2 = (const extension::gfxi_detail::TranslatorImpl *)index2addr(L, idx);
  if ( v2 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
    return 0xFFFFFFFFi64;
  else
    return v2->RefCount & 0xF;
}

void __fastcall lua_upvaluejoin(lua_State *L, int fidx1, int n1, int fidx2, int n2)
{
  char *v6; // rdx
  __int64 v7; // r11
  int v8; // er10
  GCObject *v9; // rdx
  char v10; // r8
  global_State *l_G; // rax

  index2addr(L, 1);
  v6 = (char *)index2addr(L, 3)->value_.gc + 8 * n2 - 8;
  *(_QWORD *)(v7 + 8i64 * (v8 - 1) + 32) = *((_QWORD *)v6 + 4);
  v9 = (GCObject *)*((_QWORD *)v6 + 4);
  if ( (v9->gch.marked & 3) != 0 )
  {
    v10 = *(_BYTE *)(v7 + 9);
    if ( (v10 & 4) != 0 )
    {
      l_G = L->l_G;
      if ( l_G->gcstate > 1u )
        *(_BYTE *)(v7 + 9) = v10 & 0xB8 | l_G->currentwhite & 3;
      else
        reallymarkobject(L->l_G, v9);
    }
  }
}

void __fastcall lua_xmove(lua_State *from, lua_State *to, int n)
{
  __int64 v5; // r9
  __int64 v6; // r8
  lua_TValue *top; // rcx
  lua_TValue *v8; // rdx

  if ( from != to )
  {
    v5 = n;
    from->top -= n;
    if ( n > 0 )
    {
      v6 = 0i64;
      do
      {
        top = from->top;
        ++v6;
        v8 = to->top;
        to->top = v8 + 1;
        v8->value_.gc = top[v6 - 1].value_.gc;
        v8->tt_ = top[v6 - 1].tt_;
        --v5;
      }
      while ( v5 );
    }
  }
}

void __fastcall moveto(lua_State *L, lua_TValue *fr, int idx)
{
  lua_TValue *v4; // rax
  __int64 v5; // r11
  int v6; // er10
  Value v7; // r8
  global_State *l_G; // rax

  v4 = index2addr(L, idx);
  *v4 = *(lua_TValue *)v5;
  if ( v6 < -1001000 && (*(_BYTE *)(v5 + 8) & 0x40) != 0 && (*(_BYTE *)(*(_QWORD *)v5 + 9i64) & 3) != 0 )
  {
    v7.gc = L->ci->func->value_.gc;
    if ( (v7.gc->gch.marked & 4) != 0 )
    {
      l_G = L->l_G;
      if ( l_G->gcstate > 1u )
        v7.gc->gch.marked = v7.gc->gch.marked & 0xB8 | l_G->currentwhite & 3;
      else
        reallymarkobject(L->l_G, *(GCObject **)v5);
    }
  }
}

