#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstring.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lmem.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/llex.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lgc.c"

struct LX
{
	lua_State l; // 0x0
};
struct LG
{
	LX l; // 0x0
	global_State g; // 0xD0
};
unsigned long makeseed(lua_State * L); // 0x14029BA90
CallInfo * luaE_extendCI(lua_State * L); // 0x14029BB30
void luaE_freeCI(lua_State * L); // 0x14029BBC0
void stack_init(lua_State * L1, lua_State * L); // 0x14029BC20
void init_registry(lua_State * L, global_State * g); // 0x14029BD30
void f_luaopen(lua_State * L, void * ud); // 0x14029BDD0
void close_state(lua_State * L); // 0x14029BEA0
lua_State * lua_newthread(lua_State * L); // 0x14029BFB0
lua_State * lua_newstate(void *(*f)(void *, void *, unsigned long long, unsigned long long), void * ud); // 0x14029C100void __fastcall close_state(lua_State *L)
{
  global_State *l_G; // r14
  global_State *v3; // rsi
  GCObject **hash; // rbx
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rax
  global_State *v8; // rdi
  unsigned __int64 buffsize; // rsi
  char *buffer; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  global_State *v13; // rdi
  lua_TValue *stack; // rbx
  __int64 v15; // rsi

  l_G = L->l_G;
  luaF_close(L, L->stack);
  luaC_freeallobjects(L);
  v3 = L->l_G;
  hash = v3->strt.hash;
  v5 = 8i64 * v3->strt.size;
  v3->frealloc(v3->ud, hash, v5, 0i64);
  v6 = 0i64;
  v7 = 0i64;
  if ( hash )
    v7 = v5;
  v3->GCdebt -= v7;
  v8 = L->l_G;
  buffsize = l_G->buff.buffsize;
  buffer = l_G->buff.buffer;
  v11 = v8->frealloc(v8->ud, buffer, buffsize, 0i64);
  v12 = 0i64;
  if ( buffer )
    v12 = buffsize;
  v8->GCdebt -= v12;
  l_G->buff.buffer = (char *)v11;
  l_G->buff.buffsize = 0i64;
  if ( L->stack )
  {
    L->ci = &L->base_ci;
    luaE_freeCI(L);
    v13 = L->l_G;
    stack = L->stack;
    v15 = 16i64 * L->stacksize;
    v13->frealloc(v13->ud, stack, v15, 0i64);
    if ( stack )
      v6 = v15;
    v13->GCdebt -= v6;
  }
  l_G->frealloc(l_G->ud, L, 704ui64, 0i64);
}

void __fastcall f_luaopen(lua_State *L, void *ud)
{
  global_State *l_G; // rbp
  int v4; // edi
  const char **v5; // rbx
  const char *v6; // rdx
  unsigned __int64 v7; // r8
  TString *v8; // rax
  TString *v9; // rax

  l_G = L->l_G;
  stack_init(L, L);
  init_registry(L, l_G);
  luaS_resize(L, 32);
  luaT_init(L);
  v4 = 0;
  v5 = (const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[8][184];
  do
  {
    v6 = *v5;
    v7 = -1i64;
    do
      ++v7;
    while ( v6[v7] );
    v8 = luaS_newlstr(L, v6, v7);
    ++v5;
    ++v4;
    v8->tsv.marked |= 0x20u;
    v8->tsv.extra = v4;
  }
  while ( v4 < 22 );
  v9 = internshrstr(L, "not enough memory", 0x11ui64);
  l_G->memerrmsg = v9;
  v9->tsv.marked |= 0x20u;
  l_G->version = (const float *)&unk_1408AF078;
  l_G->gcrunning = 1;
}

void __fastcall init_registry(lua_State *L, global_State *g)
{
  Table *v4; // rax
  Table *v5; // rdi
  lua_TValue value; // [rsp+20h] [rbp-18h] BYREF

  v4 = luaH_new(L);
  g->l_registry.value_.gc = (GCObject *)v4;
  g->l_registry.tt_ = 69;
  v5 = v4;
  luaH_resize(L, v4, 2, 0);
  value.value_.gc = (GCObject *)L;
  value.tt_ = 72;
  luaH_setint(L, v5, 1, &value);
  value.value_.gc = (GCObject *)luaH_new(L);
  value.tt_ = 69;
  luaH_setint(L, v5, 2, &value);
}

CallInfo *__fastcall luaE_extendCI(lua_State *L)
{
  global_State *l_G; // rbx
  CallInfo *v3; // rdx
  CallInfo *result; // rax

  l_G = L->l_G;
  v3 = (CallInfo *)l_G->frealloc(l_G->ud, 0i64, 0i64, 80ui64);
  if ( !v3 )
  {
    if ( !l_G->gcrunning || (luaC_fullgc(L, 1), (v3 = (CallInfo *)l_G->frealloc(l_G->ud, 0i64, 0i64, 80ui64)) == 0i64) )
      luaD_throw(L, 4);
  }
  l_G->GCdebt += 80i64;
  L->ci->next = v3;
  v3->previous = L->ci;
  result = v3;
  v3->next = 0i64;
  return result;
}

void __fastcall luaE_freeCI(lua_State *L)
{
  CallInfo *ci; // rax
  CallInfo *next; // rbx
  CallInfo *i; // rdx

  ci = L->ci;
  next = ci->next;
  ci->next = 0i64;
  for ( i = next; next; i = next )
  {
    next = next->next;
    luaM_realloc_(L, i, 0x50ui64, 0i64);
  }
}

lua_TValue *__fastcall lua_newstate(
        void *(__fastcall *f)(void *, void *, unsigned __int64, unsigned __int64),
        void *ud)
{
  lua_TValue *result; // rax
  lua_State *v5; // rdi
  lua_State *v6; // rbx

  result = (lua_TValue *)f(ud, 0i64, 8ui64, 704ui64);
  v5 = (lua_State *)result;
  if ( result )
  {
    LOBYTE(result->tt_) = 8;
    v6 = (lua_State *)&result[13];
    result->value_.gc = 0i64;
    BYTE4(result[18].value_.f) = 33;
    BYTE1(result->tt_) = 1;
    *((_BYTE *)&result[18].value_.n + 6) = 0;
    *(_QWORD *)&result[1].tt_ = result + 13;
    *(_QWORD *)&result[3].tt_ = 0i64;
    result[2].value_.gc = 0i64;
    result[4].value_.b = 0;
    result[7].value_.gc = 0i64;
    *(float *)((char *)&result[4].value_.n + 6) = 2.3509887e-38;
    *(_QWORD *)&result[5].tt_ = 0i64;
    *(_QWORD *)(&result[4].tt_ + 1) = 0i64;
    result[6].value_.gc = 0i64;
    WORD2(result[4].value_.f) = 1;
    BYTE2(result->tt_) = 0;
    *(_QWORD *)&result[7].tt_ = 0i64;
    result[13].value_.gc = (GCObject *)f;
    *(_QWORD *)&result[13].tt_ = ud;
    *(_QWORD *)&result[29].tt_ = result;
    result[18].value_.b = makeseed((lua_State *)result);
    *((_BYTE *)&v6->hookcount + 7) = 0;
    *(_QWORD *)&v6->base_ci.u.c.old_allowhook = &v6->base_ci.u;
    v6[1].next = (GCObject *)&v6->base_ci.u;
    v6->oldpc = 0i64;
    v6->stack = 0i64;
    v6->stack_last = 0i64;
    *(_DWORD *)&v6->hookmask = 0;
    *(_QWORD *)&v6[1].tt = 0i64;
    v6[1].l_G = 0i64;
    v6[1].stack_last = 0i64;
    *(_QWORD *)&v6[1].stacksize = 0i64;
    *((_BYTE *)&v6->hookcount + 5) = 5;
    v6->openupval = 0i64;
    v6->gclist = 0i64;
    v6->base_ci.extra = 0i64;
    v6->errfunc = 0i64;
    v6->errorJmp = 0i64;
    v6->base_ci.top = 0i64;
    v6->base_ci.func = 0i64;
    *(_QWORD *)&v6->base_ci.nresults = 0i64;
    v6->base_ci.next = 0i64;
    v6->base_ci.previous = 0i64;
    v6->top = (lua_TValue *)704;
    v6->l_G = 0i64;
    LODWORD(v6[1].ci) = 200;
    HIDWORD(v6[1].ci) = 200;
    LODWORD(v6[1].oldpc) = 200;
    *(_QWORD *)&v6[2].tt = 0i64;
    v6[2].top = 0i64;
    v6[2].l_G = 0i64;
    v6[2].ci = 0i64;
    v6[2].oldpc = 0i64;
    v6[2].stack_last = 0i64;
    v6[2].stack = 0i64;
    *(_QWORD *)&v6[2].stacksize = 0i64;
    *(_QWORD *)&v6[2].hookmask = 0i64;
    if ( (unsigned int)luaD_rawrunprotected(v5, f_luaopen, 0i64) )
    {
      close_state(v5);
      return 0i64;
    }
    return (lua_TValue *)v5;
  }
  return result;
}

lua_State *__fastcall lua_newthread(lua_State *L)
{
  global_State *l_G; // rdx
  __int64 v3; // rax
  global_State *v4; // rsi
  __int64 v5; // rdi
  unsigned __int8 currentwhite; // al
  lua_TValue *top; // rax
  global_State *v8; // rax
  int basehookcount; // ecx
  void (__fastcall *hook)(lua_State *, lua_Debug *); // rax

  l_G = L->l_G;
  if ( l_G->GCdebt > 0 )
  {
    if ( l_G->gcrunning )
    {
      luaC_forcestep(L);
    }
    else
    {
      v3 = l_G->GCdebt + 2400;
      l_G->GCdebt = -2400i64;
      l_G->totalbytes += v3;
    }
  }
  v4 = L->l_G;
  v5 = (__int64)v4->frealloc(v4->ud, 0i64, 8ui64, 208ui64);
  if ( !v5 )
  {
    if ( !v4->gcrunning || (luaC_fullgc(L, 1), (v5 = (__int64)v4->frealloc(v4->ud, 0i64, 8ui64, 208ui64)) == 0) )
      luaD_throw(L, 4);
  }
  v4->GCdebt += 208i64;
  currentwhite = v4->currentwhite;
  *(_BYTE *)(v5 + 8) = 8;
  *(_BYTE *)(v5 + 9) = currentwhite & 3;
  *(_QWORD *)v5 = v4->allgc;
  v4->allgc = (GCObject *)v5;
  top = L->top;
  top->value_.gc = (GCObject *)v5;
  top->tt_ = 72;
  v8 = L->l_G;
  ++L->top;
  *(_QWORD *)(v5 + 24) = v8;
  *(_QWORD *)(v5 + 76) = 0i64;
  *(_QWORD *)(v5 + 88) = 0i64;
  *(_WORD *)(v5 + 72) = 256;
  *(_QWORD *)(v5 + 56) = 0i64;
  *(_QWORD *)(v5 + 32) = 0i64;
  *(_DWORD *)(v5 + 64) = 0;
  *(_QWORD *)(v5 + 112) = 0i64;
  *(_QWORD *)(v5 + 96) = 0i64;
  *(_BYTE *)(v5 + 10) = 0;
  *(_QWORD *)(v5 + 120) = 0i64;
  *(_DWORD *)(v5 + 68) = 1;
  *(_BYTE *)(v5 + 72) = L->hookmask;
  basehookcount = L->basehookcount;
  *(_DWORD *)(v5 + 76) = basehookcount;
  hook = L->hook;
  *(_DWORD *)(v5 + 80) = basehookcount;
  *(_QWORD *)(v5 + 88) = hook;
  stack_init((lua_State *)v5, L);
  return (lua_State *)v5;
}

__int64 __fastcall makeseed(lua_State *L)
{
  __int64 result; // rax
  unsigned __int64 v2; // r8
  int v3; // edx
  char v4[8]; // [rsp+20h] [rbp-38h] BYREF
  lua_State *v5; // [rsp+28h] [rbp-30h]
  char *v6; // [rsp+30h] [rbp-28h]
  char *v7; // [rsp+38h] [rbp-20h]
  lua_TValue *(__fastcall *v8)(void *(__fastcall *)(void *, void *, unsigned __int64, unsigned __int64), void *); // [rsp+40h] [rbp-18h]

  v5 = L;
  v6 = v4;
  LODWORD(result) = time64(0i64) ^ 0x20;
  v7 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  v2 = 32i64;
  v8 = lua_newstate;
  do
  {
    v3 = (unsigned __int8)v4[v2 + 7];
    v2 -= 2i64;
    result = (((unsigned int)result >> 2) + 32 * (_DWORD)result + v3) ^ (unsigned int)result;
  }
  while ( v2 >= 2 );
  return result;
}

void __fastcall stack_init(lua_State *L1, lua_State *L)
{
  global_State *l_G; // rdi
  lua_TValue *v5; // rax
  __int64 v6; // rax
  lua_TValue *stack; // rcx
  __int64 v8; // rax

  l_G = L->l_G;
  v5 = (lua_TValue *)l_G->frealloc(l_G->ud, 0i64, 0i64, 640ui64);
  if ( !v5 )
  {
    if ( !l_G->gcrunning
      || (luaC_fullgc(L, 1), (v5 = (lua_TValue *)l_G->frealloc(l_G->ud, 0i64, 0i64, 640ui64)) == 0i64) )
    {
      luaD_throw(L, 4);
    }
  }
  l_G->GCdebt += 640i64;
  L1->stack = v5;
  v6 = 0i64;
  L1->stacksize = 40;
  do
  {
    L1->stack[v6].tt_ = 0;
    L1->stack[v6 + 1].tt_ = 0;
    v6 += 2i64;
  }
  while ( v6 < 40 );
  stack = L1->stack;
  v8 = L1->stacksize - 5i64;
  L1->top = stack;
  L1->stack_last = &stack[v8];
  L1->base_ci.previous = 0i64;
  L1->base_ci.next = 0i64;
  L1->base_ci.callstatus = 0;
  L1->base_ci.func = L1->top;
  L1->top->tt_ = 0;
  L1->base_ci.top = ++L1->top + 20;
  L1->ci = &L1->base_ci;
}

