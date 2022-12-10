#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstate.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/ltable.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/ltm.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lfunc.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/ldo.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lmem.c"

GCObject * luaC_newobj(lua_State * L, long tt, unsigned long long sz, GCObject * * list, long offset); // 0x140290950
void reallymarkobject(global_State * g, GCObject * o); // 0x140290A10
void markmt(global_State * g); // 0x140290BB0
void markbeingfnz(global_State * g); // 0x140290D40
void restartcollection(global_State * g); // 0x140290EB0
void traverseweakvalue(global_State * g, Table * h); // 0x140290F30
long traverseephemeron(global_State * g, Table * h); // 0x140291040
void traversestrongtable(global_State * g, Table * h); // 0x1402911B0
unsigned long long traversetable(global_State * g, Table * h); // 0x140291290
long traverseproto(global_State * g, Proto * f); // 0x1402913F0
unsigned long long traverseCclosure(global_State * g, CClosure * cl); // 0x140291560
unsigned long long traverseLclosure(global_State * g, LClosure * cl); // 0x140291710
unsigned long long traversestack(global_State * g, lua_State * th); // 0x1402918D0
void propagatemark(global_State * g); // 0x140291980
void propagateall(global_State * g); // 0x140291A60
void retraversegrays(global_State * g); // 0x140291B60
void convergeephemerons(global_State * g); // 0x140291BF0
void clearkeys(global_State * g, GCObject * l, GCObject * f); // 0x140291C70
void clearvalues(global_State * g, GCObject * l, GCObject * f); // 0x140291D30
void freeobj(lua_State * L, GCObject * o); // 0x140291E60
GCObject * * sweeplist(lua_State * L, GCObject * * p, unsigned long long count); // 0x140292020
GCObject * * sweeptolive(lua_State * L, GCObject * * p, long * n); // 0x1402921B0
void dothecall(lua_State * L, void * ud); // 0x1402923B0
void GCTM(lua_State * L, long propagateerrors); // 0x140292430
void luaC_checkfinalizer(lua_State * L, GCObject * o, Table * mt); // 0x140292600
void setpause(global_State * g, long long estimate); // 0x1402926D0
long entersweep(lua_State * L); // 0x140292740
void luaC_freeallobjects(lua_State * L); // 0x1402927A0
long long atomic(lua_State * L); // 0x1402928B0
unsigned long long singlestep(lua_State * L); // 0x140292A90
void luaC_runtilstate(lua_State * L, long statesmask); // 0x140292CC0
void generationalcollection(lua_State * L); // 0x140292ED0
void incstep(lua_State * L); // 0x140292FB0
void luaC_forcestep(lua_State * L); // 0x140293090
void luaC_step(lua_State * L); // 0x140293100
void luaC_fullgc(lua_State * L, long isemergency); // 0x140293130void __fastcall GCTM(lua_State *L, int propagateerrors)
{
  global_State *l_G; // rbp
  GCObject *tobefnz; // r8
  int v6; // er10
  int v7; // eax
  Table *metatable; // rdx
  TString *v9; // r9
  char *v10; // rax
  unsigned __int8 gcrunning; // bl
  unsigned __int8 allowhook; // di
  lua_TValue *top; // rax
  int v14; // eax
  lua_TValue *v15; // r8
  const char *p_l_G; // r8

  l_G = L->l_G;
  tobefnz = l_G->tobefnz;
  l_G->tobefnz = tobefnz->gch.next;
  tobefnz->gch.next = l_G->allgc;
  l_G->allgc = tobefnz;
  tobefnz->gch.marked &= ~0x10u;
  if ( l_G->gcstate > 1u )
    tobefnz->gch.marked = tobefnz->gch.marked & 0xB8 | l_G->currentwhite & 3;
  v6 = tobefnz->gch.tt | 0x40;
  v7 = tobefnz->gch.tt & 0xF;
  if ( v7 == 5 || v7 == 7 )
    metatable = tobefnz->u.uv.metatable;
  else
    metatable = L->l_G->mt[tobefnz->gch.tt & 0xF];
  if ( metatable )
  {
    v9 = L->l_G->tmname[2];
    v10 = (char *)&metatable->node[(int)v9->tsv.hash & (unsigned __int64)((1 << metatable->lsizenode) - 1)];
    while ( *((_DWORD *)v10 + 6) != 68 || *((TString **)v10 + 2) != v9 )
    {
      v10 = (char *)*((_QWORD *)v10 + 4);
      if ( !v10 )
        goto LABEL_12;
    }
  }
  else
  {
LABEL_12:
    v10 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  }
  if ( v10 )
  {
    if ( (v10[8] & 0xF) == 6 )
    {
      gcrunning = l_G->gcrunning;
      allowhook = L->allowhook;
      L->allowhook = 0;
      l_G->gcrunning = 0;
      *L->top = *(lua_TValue *)v10;
      top = L->top;
      top[1].value_.gc = tobefnz;
      top[1].tt_ = v6;
      L->top += 2;
      v14 = luaD_pcall(L, dothecall, 0i64, (char *)L->top - (char *)L->stack - 32, 0i64);
      L->allowhook = allowhook;
      l_G->gcrunning = gcrunning;
      if ( v14 )
      {
        if ( propagateerrors )
        {
          if ( v14 == 2 )
          {
            v15 = L->top;
            if ( (v15[-1].tt_ & 0xF) == 4 )
              p_l_G = (const char *)&v15[-1].value_.gc->th.l_G;
            else
              p_l_G = "no message";
            luaO_pushfstring(L, "error in __gc metamethod (%s)", p_l_G);
            v14 = 5;
          }
          luaD_throw(L, v14);
        }
      }
    }
  }
}

unsigned __int64 __fastcall atomic(lua_State *L)
{
  global_State *l_G; // rbx
  unsigned __int64 GCmemtrav; // rbp
  GCObject *gc; // rdx
  UpVal *next; // r9
  UpVal *i; // r10
  lua_TValue *v; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rsi
  global_State *v10; // rax
  unsigned __int64 v11; // rsi
  GCObject *weak; // rbp
  GCObject *allweak; // r14
  GCObject **p_tobefnz; // rdx
  GCObject **p_finobj; // r8
  GCObject *j; // rax
  GCObject *k; // rax
  unsigned __int8 marked; // cl
  unsigned __int64 v19; // rsi
  GCObject *v20; // r8
  GCObject *v21; // r8
  unsigned __int64 v22; // rax

  l_G = L->l_G;
  GCmemtrav = l_G->GCmemtrav;
  if ( (L->marked & 3) != 0 )
    reallymarkobject(L->l_G, (GCObject *)L);
  if ( (l_G->l_registry.tt_ & 0x40) != 0 )
  {
    gc = l_G->l_registry.value_.gc;
    if ( (gc->gch.marked & 3) != 0 )
      reallymarkobject(l_G, gc);
  }
  markmt(l_G);
  next = l_G->uvhead.u.l.next;
  for ( i = &l_G->uvhead; next != i; next = next->u.l.next )
  {
    if ( (next->marked & 7) == 0 )
    {
      v = next->v;
      if ( (v->tt_ & 0x40) != 0 && (v->value_.gc->gch.marked & 3) != 0 )
        reallymarkobject(l_G, v->value_.gc);
    }
  }
  propagateall(l_G);
  v8 = l_G->GCmemtrav - GCmemtrav;
  retraversegrays(l_G);
  v9 = v8 - l_G->GCmemtrav;
  convergeephemerons(l_G);
  clearvalues(l_G, l_G->weak, 0i64);
  clearvalues(l_G, l_G->allweak, 0i64);
  v10 = L->l_G;
  v11 = l_G->GCmemtrav + v9;
  weak = l_G->weak;
  allweak = l_G->allweak;
  p_tobefnz = &v10->tobefnz;
  p_finobj = &v10->finobj;
  for ( j = v10->tobefnz; j; j = j->gch.next )
    p_tobefnz = &j->gch.next;
  for ( k = *p_finobj; *p_finobj; k = *p_finobj )
  {
    marked = k->gch.marked;
    if ( (marked & 3) != 0 )
    {
      k->gch.marked = marked | 8;
      *p_finobj = k->gch.next;
      k->gch.next = *p_tobefnz;
      *p_tobefnz = k;
      p_tobefnz = &k->gch.next;
    }
    else
    {
      p_finobj = &k->gch.next;
    }
  }
  markbeingfnz(l_G);
  propagateall(l_G);
  v19 = v11 - l_G->GCmemtrav;
  convergeephemerons(l_G);
  clearkeys(l_G, l_G->ephemeron, v20);
  clearkeys(l_G, l_G->allweak, v21);
  clearvalues(l_G, l_G->weak, weak);
  clearvalues(l_G, l_G->allweak, allweak);
  v22 = l_G->GCmemtrav;
  l_G->currentwhite ^= 3u;
  return v19 + v22;
}

void __fastcall clearkeys(global_State *g, GCObject *l, GCObject *f)
{
  GCObject *gclist; // r11
  unsigned __int64 len; // r9
  unsigned __int64 i; // r10
  int v7; // eax
  GCObject *v8; // rdx
  __int64 v9; // rax
  bool v10; // zf

  if ( l )
  {
    gclist = l;
    do
    {
      len = gclist->u.uv.len;
      for ( i = len + 40i64 * (1 << gclist->h.lsizenode); len < i; len += 40i64 )
      {
        if ( *(_DWORD *)(len + 8) )
        {
          v7 = *(_DWORD *)(len + 24);
          if ( (v7 & 0x40) != 0 )
          {
            if ( (v7 & 0xF) == 4 )
            {
              v8 = *(GCObject **)(len + 16);
              if ( v8 )
              {
                if ( (v8->gch.marked & 3) != 0 )
                  reallymarkobject(g, v8);
              }
            }
            else
            {
              v9 = *(_QWORD *)(len + 16);
              if ( (*(_BYTE *)(v9 + 9) & 3) != 0 )
              {
                v10 = (*(_BYTE *)(len + 24) & 0x40) == 0;
                *(_DWORD *)(len + 8) = 0;
                if ( !v10 && (*(_BYTE *)(v9 + 9) & 3) != 0 )
                  *(_DWORD *)(len + 24) = 11;
              }
            }
          }
        }
      }
      gclist = gclist->h.gclist;
    }
    while ( gclist );
  }
}

void __fastcall clearvalues(global_State *g, GCObject *l, GCObject *f)
{
  GCObject *gclist; // r11
  int v6; // er9
  unsigned __int64 v7; // rdi
  __int64 v8; // r10
  _DWORD *v9; // rdx
  int v10; // eax
  GCObject *v11; // rdx
  unsigned __int64 i; // r9
  int v13; // eax
  GCObject *v14; // rdx
  bool v15; // zf

  if ( l != f )
  {
    gclist = l;
    do
    {
      v6 = 0;
      v7 = gclist->u.uv.len + 40i64 * (1 << gclist->h.lsizenode);
      if ( gclist->h.sizearray > 0 )
      {
        v8 = 0i64;
        do
        {
          v9 = (_DWORD *)((char *)gclist->u.uv.env + v8);
          v10 = v9[2];
          if ( (v10 & 0x40) != 0 )
          {
            if ( (v10 & 0xF) == 4 )
            {
              v11 = *(GCObject **)v9;
              if ( v11 && (v11->gch.marked & 3) != 0 )
                reallymarkobject(g, v11);
            }
            else if ( (*(_BYTE *)(*(_QWORD *)v9 + 9i64) & 3) != 0 )
            {
              v9[2] = 0;
            }
          }
          ++v6;
          v8 += 16i64;
        }
        while ( v6 < gclist->h.sizearray );
      }
      for ( i = gclist->u.uv.len; i < v7; i += 40i64 )
      {
        v13 = *(_DWORD *)(i + 8);
        if ( v13 && (v13 & 0x40) != 0 )
        {
          if ( (v13 & 0xF) == 4 )
          {
            v14 = *(GCObject **)i;
            if ( *(_QWORD *)i )
            {
              if ( (v14->gch.marked & 3) != 0 )
                reallymarkobject(g, v14);
            }
          }
          else if ( (*(_BYTE *)(*(_QWORD *)i + 9i64) & 3) != 0 )
          {
            v15 = (*(_BYTE *)(i + 24) & 0x40) == 0;
            *(_DWORD *)(i + 8) = 0;
            if ( !v15 && (*(_BYTE *)(*(_QWORD *)(i + 16) + 9i64) & 3) != 0 )
              *(_DWORD *)(i + 24) = 11;
          }
        }
      }
      gclist = gclist->h.gclist;
    }
    while ( gclist != f );
  }
}

void __fastcall convergeephemerons(global_State *g)
{
  GCObject *ephemeron; // rbx
  int v3; // esi
  Table *v4; // rdx

  do
  {
    ephemeron = g->ephemeron;
    v3 = 0;
    g->ephemeron = 0i64;
    v4 = (Table *)ephemeron;
    if ( !ephemeron )
      break;
    do
    {
      ephemeron = ephemeron->h.gclist;
      if ( traverseephemeron(g, v4) )
      {
        propagateall(g);
        v3 = 1;
      }
      v4 = (Table *)ephemeron;
    }
    while ( ephemeron );
  }
  while ( v3 );
}

void __fastcall dothecall(lua_State *L, void *ud)
{
  unsigned __int16 v3; // ax
  lua_TValue *v4; // rdx

  v3 = ++L->nCcalls;
  v4 = L->top - 2;
  if ( v3 >= 0xC8u )
  {
    if ( v3 == 200 )
      luaG_runerror(L, "C stack overflow");
    if ( v3 >= 0xE1u )
      luaD_throw(L, 6);
  }
  ++L->nny;
  if ( !(unsigned int)luaD_precall(L, v4, 0) )
    luaV_execute(L);
  --L->nny;
  --L->nCcalls;
}

__int64 __fastcall entersweep(lua_State *L)
{
  global_State *l_G; // rdi
  int n; // [rsp+30h] [rbp+8h] BYREF

  l_G = L->l_G;
  n = 0;
  l_G->gcstate = 2;
  l_G->sweepstrgc = 0;
  l_G->sweepfin = sweeptolive(L, &l_G->finobj, &n);
  l_G->sweepgc = sweeptolive(L, &l_G->allgc, &n);
  return (unsigned int)n;
}

void __fastcall freeobj(lua_State *L, GCObject *o)
{
  GCObject *v2; // rbx
  unsigned __int64 v4; // r8
  Table **p_env; // rdx
  extension::gfxi_detail::TranslatorImpl *len; // rdx

  v2 = o;
  switch ( o->gch.tt )
  {
    case 4u:
      --L->l_G->strt.nuse;
      goto $LN12_75;
    case 5u:
      len = (extension::gfxi_detail::TranslatorImpl *)o->u.uv.len;
      if ( len != (extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[9][192] )
        luaM_realloc_(L, len, 40i64 * (1 << v2->h.lsizenode), 0i64);
      luaM_realloc_(L, v2->u.uv.env, 16i64 * v2->h.sizearray, 0i64);
      v4 = 64i64;
      o = v2;
      goto LABEL_17;
    case 6u:
      v4 = 8i64 * o->ts.tsv.extra + 32;
      goto LABEL_17;
    case 7u:
      v4 = o->u.uv.len + 40;
      goto LABEL_17;
    case 8u:
      luaF_close((lua_State *)o, o->th.stack);
      if ( v2->p.upvalues )
      {
        v2->u.uv.len = (unsigned __int64)&v2->th.base_ci;
        luaE_freeCI((lua_State *)v2);
        luaM_realloc_((lua_State *)v2, v2->p.upvalues, 16i64 * v2->th.stacksize, 0i64);
      }
      v4 = 208i64;
      o = v2;
      goto LABEL_17;
    case 9u:
      luaF_freeproto(L, (Proto *)o);
      return;
    case 0xAu:
      p_env = &o->u.uv.env;
      if ( (Table **)v2->ts.tsv.len != p_env )
      {
        *(_QWORD *)(v2->u.uv.len + 24) = *p_env;
        (*p_env)->node = v2->h.node;
      }
      v4 = 40i64;
      o = v2;
      goto LABEL_17;
    case 0x14u:
$LN12_75:
      v4 = o->ts.tsv.len + 25;
      goto LABEL_17;
    case 0x26u:
      v4 = 16 * (o->ts.tsv.extra + 2i64);
LABEL_17:
      luaM_realloc_(L, o, v4, 0i64);
      break;
    default:
      return;
  }
}

void __fastcall generationalcollection(lua_State *L)
{
  global_State *l_G; // rbx
  unsigned __int64 GCestimate; // rdi
  signed __int64 v3; // r8
  __int64 gcmajorinc; // rax
  __int64 gcpause; // rcx
  __int64 v6; // rcx

  l_G = L->l_G;
  GCestimate = l_G->GCestimate;
  if ( GCestimate )
  {
    luaC_runtilstate(L, 32);
    v3 = l_G->totalbytes + l_G->GCdebt;
    gcmajorinc = l_G->gcmajorinc;
    l_G->gcstate = 0;
    if ( v3 > gcmajorinc * (GCestimate / 0x64) )
      GCestimate = 0i64;
    l_G->GCestimate = GCestimate;
  }
  else
  {
    luaC_fullgc(L, 0);
    v3 = l_G->totalbytes + l_G->GCdebt;
    l_G->GCestimate = v3;
  }
  gcpause = l_G->gcpause;
  if ( gcpause >= 0x7FFFFFFFFFFFFFFCi64 / (v3 / 100) )
    v6 = 0x7FFFFFFFFFFFFFFCi64;
  else
    v6 = v3 / 100 * gcpause;
  l_G->GCdebt = v3 - v6;
  l_G->totalbytes = v6;
}

void __fastcall incstep(lua_State *L)
{
  global_State *l_G; // rdi
  int gcstepmul; // er9
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax

  l_G = L->l_G;
  gcstepmul = l_G->gcstepmul;
  if ( gcstepmul < 40 )
    gcstepmul = 40;
  v4 = gcstepmul;
  v5 = ((__int64)(l_G->GCdebt + ((unsigned __int128)(l_G->GCdebt * (__int128)(__int64)0xA3D70A3D70A3D70Bui64) >> 64)) >> 7)
     + 1
     + ((unsigned __int64)(l_G->GCdebt
                         + ((unsigned __int128)(l_G->GCdebt * (__int128)(__int64)0xA3D70A3D70A3D70Bui64) >> 64)) >> 63);
  if ( v5 >= 0x7FFFFFFFFFFFFFFCi64 / gcstepmul )
    v6 = 0x7FFFFFFFFFFFFFFCi64;
  else
    v6 = gcstepmul * v5;
  do
    v6 -= singlestep(L);
  while ( v6 > -2400 && l_G->gcstate != 5 );
  if ( l_G->gcstate == 5 )
  {
    setpause(l_G, l_G->GCestimate);
  }
  else
  {
    v7 = 200 * (v6 / v4);
    v8 = l_G->GCdebt - v7;
    l_G->GCdebt = v7;
    l_G->totalbytes += v8;
  }
}

void __fastcall luaC_checkfinalizer(lua_State *L, GCObject *o, Table *mt)
{
  global_State *l_G; // rdi
  lua_State *v5; // r11
  GCObject *sweepgc; // rdx
  GCObject *allgc; // rax
  GCObject *i; // rcx
  unsigned __int8 marked; // cl

  l_G = L->l_G;
  if ( (o->gch.marked & 0x18) == 0 && mt && (mt->flags & 4) == 0 && luaT_gettm(mt, TM_GC, l_G->tmname[2]) )
  {
    sweepgc = (GCObject *)l_G->sweepgc;
    if ( sweepgc == o )
      l_G->sweepgc = sweeptolive(v5, &sweepgc->gch.next, 0i64);
    allgc = l_G->allgc;
    for ( i = (GCObject *)&l_G->allgc; allgc != o; allgc = allgc->gch.next )
      i = allgc;
    i->gch.next = o->gch.next;
    o->gch.next = l_G->finobj;
    l_G->finobj = o;
    o->gch.marked |= 0x10u;
    marked = o->gch.marked;
    if ( l_G->gcstate <= 1u )
      o->gch.marked = marked & 0xBF;
    else
      o->gch.marked = marked & 0xB8 | l_G->currentwhite & 3;
  }
}

void __fastcall luaC_forcestep(lua_State *L)
{
  global_State *l_G; // rdi
  int i; // ebx

  l_G = L->l_G;
  if ( l_G->gckind == 2 )
    generationalcollection(L);
  else
    incstep(L);
  for ( i = 0; l_G->tobefnz; ++i )
  {
    if ( i >= 4 && l_G->gcstate != 5 )
      break;
    GCTM(L, 1);
  }
}

void __fastcall luaC_freeallobjects(lua_State *L)
{
  global_State *l_G; // rbx
  GCObject **p_tobefnz; // rdx
  GCObject *i; // rax
  GCObject *j; // rcx
  GCObject *next; // rax
  global_State *v7; // rdi
  int k; // edi

  l_G = L->l_G;
  p_tobefnz = &l_G->tobefnz;
  for ( i = l_G->tobefnz; i; i = i->gch.next )
    p_tobefnz = &i->gch.next;
  for ( j = l_G->finobj; j; j = l_G->finobj )
  {
    next = j->gch.next;
    j->gch.marked |= 8u;
    l_G->finobj = next;
    j->gch.next = *p_tobefnz;
    *p_tobefnz = j;
    p_tobefnz = &j->gch.next;
  }
  v7 = L->l_G;
  while ( v7->tobefnz )
  {
    v7->tobefnz->gch.marked &= ~0x40u;
    GCTM(L, 0);
  }
  l_G->currentwhite = 3;
  l_G->gckind = 0;
  sweeplist(L, &l_G->finobj, 0xFFFFFFFFFFFFFFFDui64);
  sweeplist(L, &l_G->allgc, 0xFFFFFFFFFFFFFFFDui64);
  for ( k = 0; k < l_G->strt.size; ++k )
    sweeplist(L, &l_G->strt.hash[k], 0xFFFFFFFFFFFFFFFDui64);
}

void __fastcall luaC_fullgc(lua_State *L, int isemergency)
{
  global_State *l_G; // rsi
  int gckind; // er14
  global_State *v6; // rdi
  global_State *v7; // rdi
  signed __int64 v8; // r8
  __int64 gcpause; // rcx
  __int64 v10; // rcx
  global_State *v11; // rdi
  int n; // [rsp+48h] [rbp+10h] BYREF

  l_G = L->l_G;
  gckind = l_G->gckind;
  if ( isemergency )
  {
    l_G->gckind = 1;
  }
  else
  {
    l_G->gckind = 0;
    v6 = L->l_G;
    while ( v6->tobefnz )
    {
      v6->tobefnz->gch.marked &= ~0x40u;
      GCTM(L, 1);
    }
  }
  if ( l_G->gckind == 2 || l_G->gcstate <= 1u )
  {
    v7 = L->l_G;
    n = 0;
    v7->gcstate = 2;
    v7->sweepstrgc = 0;
    v7->sweepfin = sweeptolive(L, &v7->finobj, &n);
    v7->sweepgc = sweeptolive(L, &v7->allgc, &n);
  }
  luaC_runtilstate(L, 32);
  luaC_runtilstate(L, -33);
  luaC_runtilstate(L, 32);
  if ( gckind == 2 )
    luaC_runtilstate(L, 1);
  v8 = l_G->GCdebt + l_G->totalbytes;
  gcpause = l_G->gcpause;
  l_G->gckind = gckind;
  if ( gcpause >= 0x7FFFFFFFFFFFFFFCi64 / (v8 / 100) )
    v10 = 0x7FFFFFFFFFFFFFFCi64;
  else
    v10 = v8 / 100 * gcpause;
  l_G->GCdebt = v8 - v10;
  l_G->totalbytes = v10;
  if ( !isemergency )
  {
    v11 = L->l_G;
    while ( v11->tobefnz )
    {
      v11->tobefnz->gch.marked &= ~0x40u;
      GCTM(L, 1);
    }
  }
}

GCObject *__fastcall luaC_newobj(lua_State *L, int tt, unsigned __int64 sz, GCObject **list)
{
  global_State *l_G; // rbx
  unsigned __int8 v7; // r15
  unsigned int v9; // er14
  GCObject *v10; // rdx
  GCObject *result; // rax

  l_G = L->l_G;
  v7 = tt;
  v9 = tt & 0xF;
  v10 = (GCObject *)l_G->frealloc(l_G->ud, 0i64, tt & 0xF, sz);
  if ( !v10 )
  {
    if ( sz )
    {
      if ( !l_G->gcrunning || (luaC_fullgc(L, 1), (v10 = (GCObject *)l_G->frealloc(l_G->ud, 0i64, v9, sz)) == 0i64) )
        luaD_throw(L, 4);
    }
  }
  l_G->GCdebt += sz;
  if ( !list )
    list = &l_G->allgc;
  v10->gch.marked = l_G->currentwhite & 3;
  v10->gch.tt = v7;
  v10->gch.next = *list;
  result = v10;
  *list = v10;
  return result;
}

void __fastcall luaC_runtilstate(lua_State *L, int statesmask)
{
  global_State *l_G; // r14
  global_State *v5; // rbx
  global_State *v6; // rcx
  GCObject **sweepgc; // rdx
  GCObject **v8; // rax
  global_State *v9; // rdi
  unsigned int v10; // eax
  GCObject **sweepfin; // rdx
  int i; // edi
  int sweepstrgc; // eax
  GCObject *p; // [rsp+50h] [rbp+8h] BYREF
  int n; // [rsp+58h] [rbp+10h] BYREF

  l_G = L->l_G;
  if ( !_bittest(&statesmask, l_G->gcstate) )
  {
    while ( 1 )
    {
      v5 = L->l_G;
      if ( v5->gcstate )
        break;
      if ( !v5->gray )
      {
        v5->GCestimate = v5->GCmemtrav;
        v5->gcstate = 1;
        v5->GCestimate += atomic(L);
        v5 = L->l_G;
        n = 0;
        v5->gcstate = 2;
        v5->sweepstrgc = 0;
        v5->sweepfin = sweeptolive(L, &v5->finobj, &n);
        v8 = sweeptolive(L, &v5->allgc, &n);
LABEL_26:
        v5->sweepgc = v8;
        goto LABEL_27;
      }
      propagatemark(L->l_G);
LABEL_27:
      if ( _bittest(&statesmask, l_G->gcstate) )
        return;
    }
    if ( v5->gcstate == 2 )
    {
      for ( i = 0; i < 85; ++i )
      {
        sweepstrgc = v5->sweepstrgc;
        if ( i + sweepstrgc >= v5->strt.size )
          break;
        sweeplist(L, &v5->strt.hash[i] + sweepstrgc, 0xFFFFFFFFFFFFFFFDui64);
      }
      v5->sweepstrgc += i;
      if ( v5->sweepstrgc >= v5->strt.size )
        v5->gcstate = 3;
      goto LABEL_27;
    }
    if ( v5->gcstate == 3 )
    {
      sweepfin = v5->sweepfin;
      if ( sweepfin )
        v5->sweepfin = sweeplist(L, sweepfin, 0x55ui64);
      else
        v5->gcstate = 4;
      goto LABEL_27;
    }
    if ( v5->gcstate != 4 )
    {
      if ( v5->gcstate == 5 )
      {
        v6 = L->l_G;
        v5->GCmemtrav = 8i64 * v5->strt.size;
        restartcollection(v6);
        v5->gcstate = 0;
      }
      goto LABEL_27;
    }
    sweepgc = v5->sweepgc;
    if ( !sweepgc )
    {
      p = (GCObject *)v5->mainthread;
      sweeplist(L, &p, 1ui64);
      v9 = L->l_G;
      if ( v9->gckind != 1 )
      {
        v10 = v9->strt.size / 2;
        if ( v9->strt.nuse < v10 )
          luaS_resize(L, v10);
        v9->buff.buffer = (char *)luaM_realloc_(L, v9->buff.buffer, v9->buff.buffsize, 0i64);
        v9->buff.buffsize = 0i64;
      }
      v5->gcstate = 5;
      goto LABEL_27;
    }
    v8 = sweeplist(L, sweepgc, 0x55ui64);
    goto LABEL_26;
  }
}

void __fastcall luaC_step(lua_State *L)
{
  global_State *l_G; // rdx
  __int64 v2; // rax

  l_G = L->l_G;
  if ( l_G->gcrunning )
  {
    luaC_forcestep(L);
  }
  else
  {
    v2 = l_G->GCdebt + 2400;
    l_G->GCdebt = -2400i64;
    l_G->totalbytes += v2;
  }
}

void __fastcall markbeingfnz(global_State *g)
{
  GCObject *tobefnz; // r9
  global_State *i; // r10
  int tt; // eax
  unsigned __int64 len; // rax
  GCObject *gclist; // rdx
  GCObject *gc; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax

  tobefnz = g->tobefnz;
  for ( i = g; tobefnz; tobefnz = tobefnz->gch.next )
  {
    tt = tobefnz->gch.tt;
    tobefnz->gch.marked &= 0xB8u;
    switch ( tt )
    {
      case 4:
      case 20:
        len = tobefnz->ts.tsv.len;
        tobefnz->gch.marked |= 4u;
        i->GCmemtrav += len + 25;
        continue;
      case 5:
        tobefnz->h.gclist = i->gray;
        goto LABEL_20;
      case 6:
      case 38:
        tobefnz->ts.tsv.len = (unsigned __int64)i->gray;
        goto LABEL_20;
      case 7:
        gclist = tobefnz->cl.c.gclist;
        if ( gclist && (gclist->gch.marked & 3) != 0 )
          reallymarkobject(i, gclist);
        gc = tobefnz->uv.u.value.value_.gc;
        if ( gc )
        {
          if ( (gc->gch.marked & 3) != 0 )
            reallymarkobject(i, gc);
        }
        v7 = tobefnz->u.uv.len;
        tobefnz->gch.marked |= 4u;
        i->GCmemtrav += v7 + 40;
        continue;
      case 8:
        tobefnz->th.gclist = i->gray;
        goto LABEL_20;
      case 9:
        tobefnz->p.gclist = i->gray;
LABEL_20:
        i->gray = tobefnz;
        break;
      case 10:
        v8 = tobefnz->ts.tsv.len;
        if ( (*(_BYTE *)(v8 + 8) & 0x40) != 0 && (*(_BYTE *)(*(_QWORD *)v8 + 9i64) & 3) != 0 )
          reallymarkobject(i, *(GCObject **)v8);
        if ( tobefnz->cl.c.gclist == (GCObject *)&tobefnz->th.l_G )
        {
          tobefnz->gch.marked |= 4u;
          i->GCmemtrav += 40i64;
        }
        break;
      default:
        continue;
    }
  }
}

void __fastcall markmt(global_State *g)
{
  global_State *v1; // r11
  Table **mt; // r10
  __int64 v3; // rbx
  GCObject *v4; // r9
  int tt; // eax
  unsigned __int64 len; // rax
  GCObject *gclist; // rdx
  GCObject *gc; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax

  v1 = g;
  mt = g->mt;
  v3 = 9i64;
  do
  {
    v4 = (GCObject *)*mt;
    if ( *mt && (v4->gch.marked & 3) != 0 )
    {
      tt = v4->gch.tt;
      v4->gch.marked &= 0xFCu;
      switch ( tt )
      {
        case 4:
        case 20:
          len = v4->ts.tsv.len;
          v4->gch.marked |= 4u;
          v1->GCmemtrav += len + 25;
          break;
        case 5:
          v4->h.gclist = v1->gray;
          goto LABEL_22;
        case 6:
        case 38:
          v4->ts.tsv.len = (unsigned __int64)v1->gray;
          goto LABEL_22;
        case 7:
          gclist = v4->cl.c.gclist;
          if ( gclist && (gclist->gch.marked & 3) != 0 )
            reallymarkobject(v1, gclist);
          gc = v4->uv.u.value.value_.gc;
          if ( gc )
          {
            if ( (gc->gch.marked & 3) != 0 )
              reallymarkobject(v1, gc);
          }
          v9 = v4->u.uv.len;
          v4->gch.marked |= 4u;
          v1->GCmemtrav += v9 + 40;
          break;
        case 8:
          v4->th.gclist = v1->gray;
          goto LABEL_22;
        case 9:
          v4->p.gclist = v1->gray;
LABEL_22:
          v1->gray = v4;
          break;
        case 10:
          v10 = v4->ts.tsv.len;
          if ( (*(_BYTE *)(v10 + 8) & 0x40) != 0 && (*(_BYTE *)(*(_QWORD *)v10 + 9i64) & 3) != 0 )
            reallymarkobject(v1, *(GCObject **)v10);
          if ( v4->cl.c.gclist == (GCObject *)&v4->th.l_G )
          {
            v4->gch.marked |= 4u;
            v1->GCmemtrav += 40i64;
          }
          break;
        default:
          break;
      }
    }
    ++mt;
    --v3;
  }
  while ( v3 );
}

void __fastcall propagateall(global_State *g)
{
  GCObject *gray; // rcx
  unsigned __int64 v3; // rax

  if ( g->gray )
  {
    while ( 1 )
    {
      gray = g->gray;
      gray->gch.marked |= 4u;
      switch ( gray->gch.tt )
      {
        case 5u:
          g->gray = gray->h.gclist;
          v3 = traversetable(g, (Table *)gray);
          goto LABEL_12;
        case 6u:
          g->gray = gray->cl.c.gclist;
          v3 = traverseLclosure(g, (LClosure *)gray);
          goto LABEL_12;
        case 8u:
          g->gray = gray->th.gclist;
          gray->th.gclist = g->grayagain;
          g->grayagain = gray;
          gray->gch.marked &= ~4u;
          v3 = traversestack(g, (lua_State *)gray);
          goto LABEL_12;
      }
      if ( gray->gch.tt == 9 )
        break;
      if ( gray->gch.tt == 38 )
      {
        g->gray = gray->cl.c.gclist;
        v3 = traverseCclosure(g, (CClosure *)gray);
LABEL_12:
        g->GCmemtrav += v3;
      }
      if ( !g->gray )
        return;
    }
    g->gray = gray->p.gclist;
    v3 = traverseproto(g, (Proto *)gray);
    goto LABEL_12;
  }
}

void __fastcall propagatemark(global_State *g)
{
  GCObject *gray; // rdx

  gray = g->gray;
  gray->gch.marked |= 4u;
  switch ( gray->gch.tt )
  {
    case 5u:
      g->gray = gray->h.gclist;
      g->GCmemtrav += traversetable(g, (Table *)gray);
      break;
    case 6u:
      g->gray = gray->cl.c.gclist;
      g->GCmemtrav += traverseLclosure(g, (LClosure *)gray);
      break;
    case 8u:
      g->gray = gray->th.gclist;
      gray->th.gclist = g->grayagain;
      g->grayagain = gray;
      gray->gch.marked &= ~4u;
      g->GCmemtrav += traversestack(g, (lua_State *)gray);
      break;
    case 9u:
      g->gray = gray->p.gclist;
      g->GCmemtrav += traverseproto(g, (Proto *)gray);
      break;
    case 0x26u:
      g->gray = gray->cl.c.gclist;
      g->GCmemtrav += traverseCclosure(g, (CClosure *)gray);
      break;
  }
}

void __fastcall reallymarkobject(global_State *g, GCObject *o)
{
  int tt; // eax
  unsigned __int64 len; // rax
  GCObject *gclist; // rdx
  GCObject *gc; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax

  tt = o->gch.tt;
  o->gch.marked &= 0xFCu;
  switch ( tt )
  {
    case 4:
    case 20:
      len = o->ts.tsv.len;
      o->gch.marked |= 4u;
      g->GCmemtrav += len + 25;
      break;
    case 5:
      o->h.gclist = g->gray;
      g->gray = o;
      break;
    case 6:
    case 38:
      o->ts.tsv.len = (unsigned __int64)g->gray;
      g->gray = o;
      break;
    case 7:
      gclist = o->cl.c.gclist;
      if ( gclist && (gclist->gch.marked & 3) != 0 )
        reallymarkobject(g, gclist);
      gc = o->uv.u.value.value_.gc;
      if ( gc )
      {
        if ( (gc->gch.marked & 3) != 0 )
          reallymarkobject(g, gc);
      }
      v8 = o->u.uv.len;
      o->gch.marked |= 4u;
      g->GCmemtrav += v8 + 40;
      break;
    case 8:
      o->th.gclist = g->gray;
      g->gray = o;
      break;
    case 9:
      o->p.gclist = g->gray;
      g->gray = o;
      break;
    case 10:
      v9 = o->ts.tsv.len;
      if ( (*(_BYTE *)(v9 + 8) & 0x40) != 0 && (*(_BYTE *)(*(_QWORD *)v9 + 9i64) & 3) != 0 )
        reallymarkobject(g, *(GCObject **)v9);
      if ( o->cl.c.gclist == (GCObject *)&o->th.l_G )
      {
        o->gch.marked |= 4u;
        g->GCmemtrav += 40i64;
      }
      break;
    default:
      return;
  }
}

void __fastcall restartcollection(global_State *g)
{
  GCObject *mainthread; // rdx
  GCObject *gc; // rdx

  mainthread = (GCObject *)g->mainthread;
  g->grayagain = 0i64;
  g->gray = 0i64;
  g->ephemeron = 0i64;
  g->allweak = 0i64;
  g->weak = 0i64;
  if ( mainthread && (mainthread->gch.marked & 3) != 0 )
    reallymarkobject(g, mainthread);
  if ( (g->l_registry.tt_ & 0x40) != 0 )
  {
    gc = g->l_registry.value_.gc;
    if ( (gc->gch.marked & 3) != 0 )
      reallymarkobject(g, gc);
  }
  markmt(g);
  markbeingfnz(g);
}

void __fastcall retraversegrays(global_State *g)
{
  GCObject *weak; // rsi
  GCObject *grayagain; // rbx
  GCObject *ephemeron; // rdi

  weak = g->weak;
  grayagain = g->grayagain;
  ephemeron = g->ephemeron;
  g->ephemeron = 0i64;
  g->grayagain = 0i64;
  g->weak = 0i64;
  propagateall(g);
  g->gray = grayagain;
  propagateall(g);
  g->gray = weak;
  propagateall(g);
  g->gray = ephemeron;
  propagateall(g);
}

void __fastcall setpause(global_State *g, __int64 estimate)
{
  __int64 gcpause; // r8
  __int64 v3; // r8
  __int64 v4; // rax
  unsigned __int64 v5; // rdx

  gcpause = g->gcpause;
  if ( gcpause >= 0x7FFFFFFFFFFFFFFCi64 / (estimate / 100) )
    v3 = 0x7FFFFFFFFFFFFFFCi64;
  else
    v3 = estimate / 100 * gcpause;
  v4 = g->GCdebt + g->totalbytes - v3;
  v5 = g->GCdebt + g->totalbytes - v4;
  g->GCdebt = v4;
  g->totalbytes = v5;
}

__int64 __fastcall singlestep(lua_State *L)
{
  global_State *l_G; // rdi
  __int64 result; // rax
  GCObject **sweepgc; // rdx
  global_State *v5; // rbp
  unsigned int v6; // eax
  GCObject **sweepfin; // rdx
  int i; // ebx
  int sweepstrgc; // eax
  unsigned __int64 GCmemtrav; // rbx
  unsigned __int64 v11; // rax
  GCObject *p; // [rsp+30h] [rbp+8h] BYREF

  l_G = L->l_G;
  if ( l_G->gcstate )
  {
    switch ( l_G->gcstate )
    {
      case 2u:
        for ( i = 0; i < 85; ++i )
        {
          sweepstrgc = l_G->sweepstrgc;
          if ( i + sweepstrgc >= l_G->strt.size )
            break;
          sweeplist(L, &l_G->strt.hash[i] + sweepstrgc, 0xFFFFFFFFFFFFFFFDui64);
        }
        l_G->sweepstrgc += i;
        if ( l_G->sweepstrgc >= l_G->strt.size )
          l_G->gcstate = 3;
        return 7i64 * i;
      case 3u:
        sweepfin = l_G->sweepfin;
        if ( sweepfin )
        {
          l_G->sweepfin = sweeplist(L, sweepfin, 0x55ui64);
          return 595i64;
        }
        l_G->gcstate = 4;
        return 0i64;
      case 4u:
        sweepgc = l_G->sweepgc;
        if ( sweepgc )
        {
          l_G->sweepgc = sweeplist(L, sweepgc, 0x55ui64);
          return 595i64;
        }
        else
        {
          p = (GCObject *)l_G->mainthread;
          sweeplist(L, &p, 1ui64);
          v5 = L->l_G;
          if ( v5->gckind != 1 )
          {
            v6 = v5->strt.size / 2;
            if ( v5->strt.nuse < v6 )
              luaS_resize(L, v6);
            v5->buff.buffer = (char *)luaM_realloc_(L, v5->buff.buffer, v5->buff.buffsize, 0i64);
            v5->buff.buffsize = 0i64;
          }
          result = 7i64;
          l_G->gcstate = 5;
        }
        break;
      case 5u:
        l_G->GCmemtrav = 8i64 * l_G->strt.size;
        restartcollection(l_G);
        result = l_G->GCmemtrav;
        l_G->gcstate = 0;
        return result;
      default:
        return 0i64;
    }
  }
  else if ( l_G->gray )
  {
    GCmemtrav = l_G->GCmemtrav;
    propagatemark(l_G);
    return l_G->GCmemtrav - GCmemtrav;
  }
  else
  {
    l_G->GCestimate = l_G->GCmemtrav;
    l_G->gcstate = 1;
    v11 = atomic(L);
    l_G->GCestimate += v11;
    return v11 + 7i64 * (int)entersweep(L);
  }
  return result;
}

GCObject **__fastcall sweeplist(lua_State *L, GCObject **p, unsigned __int64 count)
{
  global_State *l_G; // rax
  int v6; // er8
  int v7; // er9
  char v8; // dl
  bool v9; // zf
  GCObject *v11; // rbx
  int marked; // esi
  GCObject *v13; // rdx
  unsigned __int64 len; // rax
  _QWORD *v15; // rdi
  void *i; // rdx
  int v18; // [rsp+20h] [rbp-28h]
  int v19; // [rsp+24h] [rbp-24h]
  lua_State *v20; // [rsp+50h] [rbp+8h]
  char v21; // [rsp+58h] [rbp+10h]
  char v22; // [rsp+68h] [rbp+20h]

  v20 = L;
  l_G = L->l_G;
  v6 = 0;
  v7 = l_G->currentwhite ^ 3;
  v19 = v7;
  if ( l_G->gckind == 2 )
  {
    v8 = 64;
    v22 = -1;
    v6 = 64;
  }
  else
  {
    v22 = -72;
    v8 = l_G->currentwhite & 3;
  }
  v9 = *p == 0i64;
  v18 = v6;
  v21 = v8;
  if ( *p )
  {
    while ( 1 )
    {
      if ( !count-- )
      {
LABEL_18:
        v9 = *p == 0i64;
        break;
      }
      v11 = *p;
      marked = (*p)->gch.marked;
      if ( ((marked ^ 3) & v7) != 0 )
      {
        if ( (marked & v6) != 0 )
          return 0i64;
        if ( v11->gch.tt == 8 && v11->p.upvalues )
        {
          sweeplist(L, &v11->th.openupval, 0xFFFFFFFFFFFFFFFDui64);
          len = v11->u.uv.len;
          v15 = *(_QWORD **)(len + 24);
          *(_QWORD *)(len + 24) = 0i64;
          for ( i = v15; v15; i = v15 )
          {
            v15 = (_QWORD *)v15[3];
            luaM_realloc_((lua_State *)v11, i, 0x50ui64, 0i64);
          }
          if ( v20->l_G->gckind != 1 )
            luaD_shrinkstack((lua_State *)v11);
          v8 = v21;
        }
        p = &v11->gch.next;
        v11->gch.marked = v8 | marked & v22;
      }
      else
      {
        v13 = *p;
        *p = v11->gch.next;
        freeobj(L, v13);
        v8 = v21;
      }
      L = v20;
      v6 = v18;
      v7 = v19;
      if ( !*p )
        goto LABEL_18;
    }
  }
  if ( v9 )
    return 0i64;
  return p;
}

GCObject **__fastcall sweeptolive(lua_State *L, GCObject **p, int *n)
{
  GCObject **v4; // r8
  int v5; // ecx
  global_State *l_G; // rax
  __int64 v7; // rbp
  GCObject **p_next; // rdi
  int v9; // er12
  char v10; // r15
  int v11; // er13
  lua_State *v13; // rbx
  int marked; // esi
  GCObject *v15; // rdx
  CallInfo *ci; // rax
  CallInfo *next; // rdi
  CallInfo *i; // rdx
  CallInfo *v19; // rdx
  lua_TValue *j; // rax
  __int64 v21; // rax
  bool v22; // sf
  int v23; // eax
  int v24; // ecx
  int v25; // edx
  int v27; // [rsp+70h] [rbp+8h]
  char v28; // [rsp+78h] [rbp+10h]
  GCObject **v30; // [rsp+88h] [rbp+20h]

  v30 = p;
  v4 = p;
  v5 = 0;
  do
  {
    l_G = L->l_G;
    v27 = ++v5;
    v7 = 1i64;
    p_next = p;
    v9 = l_G->currentwhite ^ 3;
    if ( l_G->gckind == 2 )
    {
      v10 = 64;
      v28 = -1;
      v11 = 64;
    }
    else
    {
      v28 = -72;
      v10 = l_G->currentwhite & 3;
      v11 = 0;
    }
    if ( *p )
    {
      while ( 1 )
      {
        if ( !v7-- )
        {
LABEL_28:
          v4 = v30;
          v5 = v27;
          break;
        }
        v13 = (lua_State *)*p_next;
        marked = (*p_next)->gch.marked;
        if ( ((marked ^ 3) & v9) != 0 )
        {
          if ( (marked & v11) != 0 )
          {
            v5 = v27;
            v4 = v30;
            p = 0i64;
            goto LABEL_31;
          }
          if ( v13->tt == 8 && v13->stack )
          {
            sweeplist(L, &v13->openupval, 0xFFFFFFFFFFFFFFFDui64);
            ci = v13->ci;
            next = ci->next;
            ci->next = 0i64;
            for ( i = next; next; i = next )
            {
              next = next->next;
              luaM_realloc_(v13, i, 0x50ui64, 0i64);
            }
            if ( L->l_G->gckind != 1 )
            {
              v19 = v13->ci;
              for ( j = v13->top; v19; v19 = v19->previous )
              {
                if ( j < v19->top )
                  j = v19->top;
              }
              v21 = j - v13->stack;
              v22 = (int)v21 + 1 < 0;
              v23 = v21 + 1;
              v24 = v23;
              if ( v22 )
                v24 = v23 + 7;
              v25 = (v24 >> 3) + v23 + 10;
              if ( v25 > 1000000 )
                v25 = 1000000;
              if ( v23 <= 1000000 && v25 < v13->stacksize )
                luaD_reallocstack(v13, v25);
            }
          }
          p_next = &v13->next;
          v13->marked = v10 | marked & v28;
        }
        else
        {
          v15 = *p_next;
          *p_next = v13->next;
          freeobj(L, v15);
        }
        if ( !*p_next )
          goto LABEL_28;
      }
    }
    p = p_next;
    if ( !*p_next )
      p = 0i64;
LABEL_31:
    ;
  }
  while ( p == v4 );
  if ( n )
    *n += v5;
  return p;
}

__int64 __fastcall traverseCclosure(global_State *g, CClosure *cl)
{
  int v2; // ebx
  global_State *v4; // r11
  lua_TValue *upvalue; // r10
  GCObject *gc; // r9
  int tt; // eax
  unsigned __int64 len; // rax
  GCObject *gclist; // rdx
  GCObject *v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax

  v2 = 0;
  v4 = g;
  if ( cl->nupvalues )
  {
    upvalue = cl->upvalue;
    do
    {
      if ( (upvalue->tt_ & 0x40) != 0 )
      {
        gc = upvalue->value_.gc;
        if ( (upvalue->value_.gc->gch.marked & 3) != 0 )
        {
          tt = gc->gch.tt;
          gc->gch.marked &= 0xFCu;
          switch ( tt )
          {
            case 4:
            case 20:
              len = gc->ts.tsv.len;
              gc->gch.marked |= 4u;
              v4->GCmemtrav += len + 25;
              break;
            case 5:
              gc->h.gclist = v4->gray;
              goto LABEL_23;
            case 6:
            case 38:
              gc->ts.tsv.len = (unsigned __int64)v4->gray;
              goto LABEL_23;
            case 7:
              gclist = gc->cl.c.gclist;
              if ( gclist && (gclist->gch.marked & 3) != 0 )
                reallymarkobject(v4, gclist);
              v10 = gc->uv.u.value.value_.gc;
              if ( v10 && (v10->gch.marked & 3) != 0 )
                reallymarkobject(v4, v10);
              v11 = gc->u.uv.len;
              gc->gch.marked |= 4u;
              v4->GCmemtrav += v11 + 40;
              break;
            case 8:
              gc->th.gclist = v4->gray;
              goto LABEL_23;
            case 9:
              gc->p.gclist = v4->gray;
LABEL_23:
              v4->gray = gc;
              break;
            case 10:
              v12 = gc->ts.tsv.len;
              if ( (*(_BYTE *)(v12 + 8) & 0x40) != 0 && (*(_BYTE *)(*(_QWORD *)v12 + 9i64) & 3) != 0 )
                reallymarkobject(v4, *(GCObject **)v12);
              if ( gc->cl.c.gclist == (GCObject *)&gc->th.l_G )
              {
                gc->gch.marked |= 4u;
                v4->GCmemtrav += 40i64;
              }
              break;
            default:
              break;
          }
        }
      }
      ++v2;
      ++upvalue;
    }
    while ( v2 < cl->nupvalues );
  }
  return 16 * (cl->nupvalues + 2i64);
}

__int64 __fastcall traverseLclosure(global_State *g, LClosure *cl)
{
  global_State *v3; // r10
  GCObject *p; // rdx
  int v5; // ebx
  UpVal **upvals; // r11
  GCObject *v7; // r9
  int tt; // eax
  unsigned __int64 len; // rax
  GCObject *gclist; // rdx
  GCObject *gc; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax

  v3 = g;
  p = (GCObject *)cl->p;
  if ( p && (p->gch.marked & 3) != 0 )
    reallymarkobject(g, p);
  v5 = 0;
  if ( cl->nupvalues )
  {
    upvals = cl->upvals;
    do
    {
      v7 = (GCObject *)*upvals;
      if ( *upvals && (v7->gch.marked & 3) != 0 )
      {
        tt = v7->gch.tt;
        v7->gch.marked &= 0xFCu;
        switch ( tt )
        {
          case 4:
          case 20:
            len = v7->ts.tsv.len;
            v7->gch.marked |= 4u;
            v3->GCmemtrav += len + 25;
            break;
          case 5:
            v7->h.gclist = v3->gray;
            goto LABEL_26;
          case 6:
          case 38:
            v7->ts.tsv.len = (unsigned __int64)v3->gray;
            goto LABEL_26;
          case 7:
            gclist = v7->cl.c.gclist;
            if ( gclist && (gclist->gch.marked & 3) != 0 )
              reallymarkobject(v3, gclist);
            gc = v7->uv.u.value.value_.gc;
            if ( gc && (gc->gch.marked & 3) != 0 )
              reallymarkobject(v3, gc);
            v12 = v7->u.uv.len;
            v7->gch.marked |= 4u;
            v3->GCmemtrav += v12 + 40;
            break;
          case 8:
            v7->th.gclist = v3->gray;
            goto LABEL_26;
          case 9:
            v7->p.gclist = v3->gray;
LABEL_26:
            v3->gray = v7;
            break;
          case 10:
            v13 = v7->ts.tsv.len;
            if ( (*(_BYTE *)(v13 + 8) & 0x40) != 0 && (*(_BYTE *)(*(_QWORD *)v13 + 9i64) & 3) != 0 )
              reallymarkobject(v3, *(GCObject **)v13);
            if ( v7->cl.c.gclist == (GCObject *)&v7->th.l_G )
            {
              v7->gch.marked |= 4u;
              v3->GCmemtrav += 40i64;
            }
            break;
          default:
            break;
        }
      }
      ++v5;
      ++upvals;
    }
    while ( v5 < cl->nupvalues );
  }
  return 8i64 * cl->nupvalues + 32;
}

__int64 __fastcall traverseephemeron(global_State *g, Table *h)
{
  unsigned int v2; // edi
  global_State *v3; // r11
  int v5; // er14
  int v6; // esi
  int v7; // er10
  Node *v8; // rbp
  __int64 v9; // r9
  lua_TValue *array; // rax
  GCObject *gc; // rdx
  Node *node; // r9
  int tt; // edx
  int v14; // eax
  GCObject *v15; // rdx

  v2 = 0;
  v3 = g;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = &h->node[1 << h->lsizenode];
  if ( h->sizearray > 0 )
  {
    v9 = 0i64;
    do
    {
      array = h->array;
      if ( (array[v9].tt_ & 0x40) != 0 )
      {
        gc = array[v9].value_.gc;
        if ( (gc->gch.marked & 3) != 0 )
        {
          v2 = 1;
          reallymarkobject(v3, gc);
        }
      }
      ++v7;
      ++v9;
    }
    while ( v7 < h->sizearray );
  }
  node = h->node;
  if ( node >= v8 )
    goto LABEL_29;
  do
  {
    tt = node->i_val.tt_;
    if ( !tt )
    {
      if ( (node->i_key.tvk.tt_ & 0x40) != 0 && (node->i_key.nk.value_.gc->gch.marked & 3) != 0 )
        node->i_key.nk.tt_ = 11;
      goto LABEL_20;
    }
    v14 = node->i_key.nk.tt_;
    if ( (v14 & 0x40) == 0 )
      goto LABEL_17;
    if ( (v14 & 0xF) == 4 )
    {
      v15 = node->i_key.nk.value_.gc;
      if ( v15 && (v15->gch.marked & 3) != 0 )
        reallymarkobject(v3, v15);
LABEL_17:
      if ( (node->i_val.tt_ & 0x40) != 0 && (node->i_val.value_.gc->gch.marked & 3) != 0 )
      {
        v2 = 1;
        reallymarkobject(v3, node->i_val.value_.gc);
      }
      goto LABEL_20;
    }
    if ( (node->i_key.nk.value_.gc->gch.marked & 3) == 0 )
      goto LABEL_17;
    v5 = 1;
    if ( (tt & 0x40) != 0 && (node->i_val.value_.gc->gch.marked & 3) != 0 )
      v6 = 1;
LABEL_20:
    ++node;
  }
  while ( node < v8 );
  if ( !v6 )
  {
    if ( v5 )
    {
      h->gclist = v3->allweak;
      v3->allweak = (GCObject *)h;
      return v2;
    }
LABEL_29:
    h->gclist = v3->grayagain;
    v3->grayagain = (GCObject *)h;
    return v2;
  }
  h->gclist = v3->ephemeron;
  v3->ephemeron = (GCObject *)h;
  return v2;
}

unsigned __int64 __fastcall traverseproto(global_State *g, Proto *f)
{
  Closure *cache; // rax
  __int64 v3; // r10
  Proto *v4; // r9
  GCObject *source; // rdx
  int v7; // er11
  __int64 v8; // rbx
  lua_TValue *k; // rax
  GCObject *v10; // rdx
  int v11; // er11
  __int64 v12; // rbx
  GCObject *v13; // rdx
  int v14; // er11
  __int64 v15; // rbx
  GCObject *v16; // rdx
  __int64 v17; // r11
  GCObject *v18; // rdx

  cache = f->cache;
  v3 = 0i64;
  v4 = f;
  if ( cache && (cache->c.marked & 3) != 0 )
    f->cache = 0i64;
  source = (GCObject *)f->source;
  if ( source && (source->gch.marked & 3) != 0 )
    reallymarkobject(g, source);
  v7 = v3;
  if ( v4->sizek > (int)v3 )
  {
    v8 = v3;
    do
    {
      k = v4->k;
      if ( (*((_BYTE *)&k->tt_ + v8) & 0x40) != 0 )
      {
        v10 = *(GCObject **)((char *)&k->value_.gc + v8);
        if ( (v10->gch.marked & 3) != 0 )
          reallymarkobject(g, v10);
      }
      ++v7;
      v8 += 16i64;
    }
    while ( v7 < v4->sizek );
  }
  v11 = v3;
  if ( v4->sizeupvalues > (int)v3 )
  {
    v12 = v3;
    do
    {
      v13 = *(GCObject **)((char *)&v4->upvalues->name + v12);
      if ( v13 && (v13->gch.marked & 3) != 0 )
        reallymarkobject(g, v13);
      ++v11;
      v12 += 16i64;
    }
    while ( v11 < v4->sizeupvalues );
  }
  v14 = v3;
  if ( v4->sizep > (int)v3 )
  {
    v15 = v3;
    do
    {
      v16 = *(GCObject **)((char *)v4->p + v15);
      if ( v16 && (v16->gch.marked & 3) != 0 )
        reallymarkobject(g, v16);
      ++v14;
      v15 += 8i64;
    }
    while ( v14 < v4->sizep );
  }
  if ( v4->sizelocvars > (int)v3 )
  {
    v17 = v3;
    do
    {
      v18 = *(GCObject **)((char *)&v4->locvars->varname + v17);
      if ( v18 && (v18->gch.marked & 3) != 0 )
        reallymarkobject(g, v18);
      LODWORD(v3) = v3 + 1;
      v17 += 16i64;
    }
    while ( (int)v3 < v4->sizelocvars );
  }
  return 4
       * ((unsigned int)v4->sizecode
        + (unsigned int)v4->sizelineinfo
        + 2
        * ((unsigned int)v4->sizep
         + 16i64
         + 2
         * ((unsigned int)v4->sizeupvalues + (unsigned int)v4->sizelocvars + (unsigned __int64)(unsigned int)v4->sizek)));
}

__int64 __fastcall traversestack(global_State *g, lua_State *th)
{
  lua_TValue *stack; // r9
  int v3; // er10
  lua_State *v4; // r11
  unsigned __int64 i; // rax
  CallInfo *ci; // rcx
  CallInfo *j; // rax

  stack = th->stack;
  v3 = 0;
  v4 = th;
  if ( !stack )
    return 1i64;
  if ( stack < th->top )
  {
    do
    {
      if ( (stack->tt_ & 0x40) != 0 && (stack->value_.gc->gch.marked & 3) != 0 )
        reallymarkobject(g, stack->value_.gc);
      ++stack;
    }
    while ( stack < v4->top );
  }
  if ( g->gcstate == 1 )
  {
    for ( i = (unsigned __int64)&v4->stack[v4->stacksize]; (unsigned __int64)stack < i; ++stack )
      stack->tt_ = v3;
  }
  else
  {
    ci = v4->ci;
    for ( j = &v4->base_ci; j != ci; ++v3 )
      j = j->next;
  }
  return 16 * (v4->stacksize + 13i64 + 5i64 * v3);
}

void __fastcall traversestrongtable(global_State *g, Table *h)
{
  int v3; // er9
  Table *v4; // r11
  Node *v5; // rdi
  __int64 v6; // r10
  lua_TValue *array; // rax
  GCObject *gc; // rdx
  Node *i; // r9
  GCObject *v10; // rdx

  v3 = 0;
  v4 = h;
  v5 = &h->node[1 << h->lsizenode];
  if ( h->sizearray > 0 )
  {
    v6 = 0i64;
    do
    {
      array = v4->array;
      if ( (array[v6].tt_ & 0x40) != 0 )
      {
        gc = array[v6].value_.gc;
        if ( (gc->gch.marked & 3) != 0 )
          reallymarkobject(g, gc);
      }
      ++v3;
      ++v6;
    }
    while ( v3 < v4->sizearray );
  }
  for ( i = v4->node; i < v5; ++i )
  {
    if ( i->i_val.tt_ )
    {
      if ( (i->i_key.tvk.tt_ & 0x40) != 0 )
      {
        v10 = i->i_key.nk.value_.gc;
        if ( (v10->gch.marked & 3) != 0 )
          reallymarkobject(g, v10);
      }
      if ( (i->i_val.tt_ & 0x40) != 0 && (i->i_val.value_.gc->gch.marked & 3) != 0 )
        reallymarkobject(g, i->i_val.value_.gc);
    }
    else if ( (i->i_key.tvk.tt_ & 0x40) != 0 && (i->i_key.nk.value_.gc->gch.marked & 3) != 0 )
    {
      i->i_key.nk.tt_ = 11;
    }
  }
}

__int64 __fastcall traversetable(global_State *g, Table *h)
{
  Table *metatable; // rdx
  TString *v5; // r8
  char *v6; // rbx
  GCObject *v7; // rdx
  char *v8; // rbp
  char *v9; // rax

  metatable = h->metatable;
  if ( !metatable || (metatable->flags & 8) != 0 )
    goto LABEL_10;
  v5 = g->tmname[3];
  v6 = (char *)&metatable->node[(int)v5->tsv.hash & (unsigned __int64)((1 << metatable->lsizenode) - 1)];
  while ( *((_DWORD *)v6 + 6) != 68 || *((TString **)v6 + 2) != v5 )
  {
    v6 = (char *)*((_QWORD *)v6 + 4);
    if ( !v6 )
    {
      v6 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
      break;
    }
  }
  if ( !*((_DWORD *)v6 + 2) )
  {
    metatable->flags |= 8u;
LABEL_10:
    v6 = 0i64;
  }
  v7 = (GCObject *)h->metatable;
  if ( v7 && (v7->gch.marked & 3) != 0 )
    reallymarkobject(g, v7);
  if ( v6
    && (*((_DWORD *)v6 + 2) & 0xF) == 4
    && ((v8 = strchr((const char *)(*(_QWORD *)v6 + 24i64), 107),
         v9 = strchr((const char *)(*(_QWORD *)v6 + 24i64), 118),
         v8)
     || v9) )
  {
    h->marked &= ~4u;
    if ( v8 )
    {
      if ( v9 )
      {
        h->gclist = g->allweak;
        g->allweak = (GCObject *)h;
      }
      else
      {
        traverseephemeron(g, h);
      }
    }
    else
    {
      traverseweakvalue(g, h);
    }
  }
  else
  {
    traversestrongtable(g, h);
  }
  return 16 * (h->sizearray + 4i64) + 40i64 * (1 << h->lsizenode);
}

void __fastcall traverseweakvalue(global_State *g, Table *h)
{
  Node *node; // r9
  global_State *v3; // r11
  BOOL v5; // er10
  Node *i; // rdi
  GCObject *gc; // rdx
  int tt; // eax
  GCObject *v9; // rdx

  node = h->node;
  v3 = g;
  v5 = h->sizearray > 0;
  for ( i = &node[1 << h->lsizenode]; node < i; ++node )
  {
    if ( node->i_val.tt_ )
    {
      if ( (node->i_key.tvk.tt_ & 0x40) != 0 )
      {
        gc = node->i_key.nk.value_.gc;
        if ( (gc->gch.marked & 3) != 0 )
          reallymarkobject(v3, gc);
      }
      if ( !v5 )
      {
        tt = node->i_val.tt_;
        if ( (tt & 0x40) != 0 )
        {
          if ( (tt & 0xF) == 4 )
          {
            v9 = node->i_val.value_.gc;
            if ( node->i_val.value_.gc && (v9->gch.marked & 3) != 0 )
              reallymarkobject(v3, v9);
          }
          else if ( (node->i_val.value_.gc->gch.marked & 3) != 0 )
          {
            v5 = 1;
          }
        }
      }
    }
    else if ( (node->i_key.tvk.tt_ & 0x40) != 0 && (node->i_key.nk.value_.gc->gch.marked & 3) != 0 )
    {
      node->i_key.nk.tt_ = 11;
    }
  }
  if ( v5 )
  {
    h->gclist = v3->weak;
    v3->weak = (GCObject *)h;
  }
  else
  {
    h->gclist = v3->grayagain;
    v3->grayagain = (GCObject *)h;
  }
}

