#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lmem.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstring.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lzio.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lgc.c"

struct lua_longjmp
{
	lua_longjmp * previous; // 0x0
	_SETJMP_FLOAT128 b[16]; // 0x10
	volatile long status; // 0x110
};
void seterrorobj(lua_State * L, long errcode, lua_TValue * oldtop); // 0x14028EBB0
void luaD_throw(lua_State * L, long errcode); // 0x14028EC50
long luaD_rawrunprotected(lua_State * L, void(*f)(lua_State *, void *), void * ud); // 0x14028ECE0
void correctstack(lua_State * L, lua_TValue * oldstack); // 0x14028ED90
void luaD_reallocstack(lua_State * L, long newsize); // 0x14028EE30
void luaD_growstack(lua_State * L, long n); // 0x14028EF00
void luaD_shrinkstack(lua_State * L); // 0x14028EF80
void luaD_hook(lua_State * L, long event, long line); // 0x14028EFE0
lua_TValue * adjust_varargs(lua_State * L, Proto * p, long actual); // 0x14028F0E0
lua_TValue * tryfuncTM(lua_State * L, lua_TValue * func); // 0x14028F180
long luaD_precall(lua_State * L, lua_TValue * func, long nresults); // 0x14028F2A0
long luaD_poscall(lua_State * L, lua_TValue * firstResult); // 0x14028F500
void luaD_call(lua_State * L, lua_TValue * func, long nResults, long allowyield); // 0x14028F5C0
void unroll(lua_State * L, void * ud); // 0x14028F650
long recover(lua_State * L, long status); // 0x14028F700
void resume(lua_State * L, void * ud); // 0x14028F7B0
long lua_resume(lua_State * L, lua_State * from, long nargs); // 0x14028F930
long lua_yieldk(lua_State * L, long nresults, long ctx, long(*k)(lua_State *)); // 0x14028FA00
long luaD_pcall(lua_State * L, void(*func)(lua_State *, void *), void * u, long long old_top, long long ef); // 0x14028FA90
struct SParser
{
	Zio * z; // 0x0
	Mbuffer buff; // 0x8
	Dyndata dyd; // 0x20
	const char * mode; // 0x50
	const char * name; // 0x58
};
void f_parser(lua_State * L, void * ud); // 0x14028FB30
long luaD_protectedparser(lua_State * L, Zio * z, const char * name, const char * mode); // 0x14028FCE0lua_TValue *__fastcall adjust_varargs(lua_State *L, Proto *p, int actual)
{
  __int64 numparams; // rsi
  signed __int64 maxstacksize; // rcx
  __int64 v6; // rdi
  lua_TValue *top; // r10
  __int64 v8; // r9
  int *p_tt; // rcx
  lua_TValue *v10; // r8

  numparams = p->numparams;
  maxstacksize = p->maxstacksize;
  v6 = actual;
  if ( L->stack_last - L->top <= maxstacksize )
    luaD_growstack(L, maxstacksize);
  top = L->top;
  v8 = numparams;
  if ( (_DWORD)numparams )
  {
    p_tt = &L->top[-v6].tt_;
    do
    {
      v10 = L->top;
      p_tt += 4;
      L->top = v10 + 1;
      v10->value_.gc = (GCObject *)*((_QWORD *)p_tt - 3);
      v10->tt_ = *(p_tt - 4);
      *(p_tt - 4) = 0;
      --v8;
    }
    while ( v8 );
  }
  return top;
}

void __fastcall correctstack(lua_State *L, lua_TValue *oldstack)
{
  GCObject *openupval; // r8
  CallInfo *i; // rax
  bool v4; // zf

  openupval = L->openupval;
  for ( L->top = (lua_TValue *)((char *)L->stack + (((char *)L->top - (char *)oldstack) & 0xFFFFFFFFFFFFFFF0ui64));
        openupval;
        openupval = openupval->gch.next )
  {
    openupval->ts.tsv.len = (unsigned __int64)L->stack
                          + ((openupval->ts.tsv.len - (_QWORD)oldstack) & 0xFFFFFFFFFFFFFFF0ui64);
  }
  for ( i = L->ci; i; i = i->previous )
  {
    i->top = (lua_TValue *)((char *)L->stack + (((char *)i->top - (char *)oldstack) & 0xFFFFFFFFFFFFFFF0ui64));
    v4 = (i->callstatus & 1) == 0;
    i->func = (lua_TValue *)((char *)L->stack + (((char *)i->func - (char *)oldstack) & 0xFFFFFFFFFFFFFFF0ui64));
    if ( !v4 )
      i->u.l.base = (lua_TValue *)((char *)L->stack + (((char *)i->u.l.base - (char *)oldstack) & 0xFFFFFFFFFFFFFFF0ui64));
  }
}

void __fastcall f_parser(lua_State *L, void *ud)
{
  __int64 v4; // r9
  unsigned __int8 *v5; // rax
  int firstchar; // edi
  __int64 *v7; // rdi
  unsigned __int8 *v8; // rax
  __int64 v9; // rcx
  int v10; // ecx
  const char *v11; // rdi
  Closure *v12; // rax
  const char *v13; // rsi
  int v14; // edi
  Closure *v15; // rbx
  lua_TValue *upvalue; // rsi
  GCObject *v17; // rax
  unsigned __int8 marked; // dl
  global_State *l_G; // rcx
  __int64 v20; // [rsp+48h] [rbp+10h] BYREF

  v4 = **(_QWORD **)ud;
  **(_QWORD **)ud = v4 - 1;
  if ( v4 )
  {
    v5 = *(unsigned __int8 **)(*(_QWORD *)ud + 8i64);
    firstchar = *v5;
    *(_QWORD *)(*(_QWORD *)ud + 8i64) = v5 + 1;
  }
  else
  {
    v7 = *(__int64 **)ud;
    v8 = (unsigned __int8 *)((__int64 (__fastcall *)(__int64, _QWORD, __int64 *))v7[2])(
                              v7[4],
                              *(_QWORD *)(*(_QWORD *)ud + 24i64),
                              &v20);
    if ( v8 && (v9 = v20) != 0 )
    {
      v7[1] = (__int64)v8;
      *v7 = v9 - 1;
      v10 = *v8;
      v7[1] = (__int64)(v8 + 1);
      firstchar = v10;
    }
    else
    {
      firstchar = -1;
    }
  }
  if ( firstchar == 27 )
  {
    v11 = (const char *)*((_QWORD *)ud + 10);
    if ( v11 && !strchr(*((const char **)ud + 10), 98) )
    {
      luaO_pushfstring(L, "attempt to load a %s chunk (mode is '%s')", "binary", v11);
      luaD_throw(L, 3);
    }
    v12 = luaU_undump(L, *(Zio **)ud, (Mbuffer *)((char *)ud + 8), *((const char **)ud + 11));
  }
  else
  {
    v13 = (const char *)*((_QWORD *)ud + 10);
    if ( v13 && !strchr(*((const char **)ud + 10), 116) )
    {
      luaO_pushfstring(L, "attempt to load a %s chunk (mode is '%s')", "text", v13);
      luaD_throw(L, 3);
    }
    v12 = luaY_parser(
            L,
            *(Zio **)ud,
            (Mbuffer *)((char *)ud + 8),
            (Dyndata *)((char *)ud + 32),
            *((const char **)ud + 11),
            firstchar);
  }
  v14 = 0;
  v15 = v12;
  if ( v12->c.nupvalues )
  {
    upvalue = v12->c.upvalue;
    do
    {
      v17 = (GCObject *)luaF_newupval(L);
      upvalue->value_.gc = v17;
      if ( (v17->gch.marked & 3) != 0 )
      {
        marked = v15->c.marked;
        if ( (marked & 4) != 0 )
        {
          l_G = L->l_G;
          if ( l_G->gcstate > 1u )
            v15->c.marked = marked & 0xB8 | l_G->currentwhite & 3;
          else
            reallymarkobject(l_G, v17);
        }
      }
      ++v14;
      upvalue = (lua_TValue *)((char *)upvalue + 8);
    }
    while ( v14 < v15->c.nupvalues );
  }
}

void __fastcall luaD_call(lua_State *L, lua_TValue *func, __int64 nResults, int allowyield)
{
  unsigned __int16 v5; // ax

  v5 = ++L->nCcalls;
  if ( v5 >= 0xC8u )
  {
    if ( v5 == 200 )
      luaG_runerror(L, "C stack overflow", nResults);
    if ( v5 >= 0xE1u )
      luaD_throw(L, 6);
  }
  if ( !allowyield )
    ++L->nny;
  if ( !luaD_precall(L, func, nResults) )
    luaV_execute(L);
  if ( !allowyield )
    --L->nny;
  --L->nCcalls;
}

void __fastcall luaD_growstack(lua_State *L, int n)
{
  int stacksize; // ecx
  int v4; // edx
  int v5; // eax

  stacksize = L->stacksize;
  if ( stacksize > 1000000 )
    luaD_throw(L, 6);
  v4 = L->top - L->stack + n + 5;
  v5 = 2 * stacksize;
  if ( 2 * stacksize > 1000000 )
    v5 = 1000000;
  if ( v5 >= v4 )
    v4 = v5;
  if ( v4 > 1000000 )
  {
    luaD_reallocstack(L, 1000200);
    luaG_runerror(L, "stack overflow");
  }
  luaD_reallocstack(L, v4);
}

void __fastcall luaD_hook(lua_State *L, int event, int line)
{
  void (__fastcall *hook)(lua_State *, lua_Debug *); // rsi
  signed __int64 v5; // rax
  CallInfo *ci; // rdi
  signed __int64 v7; // r14
  unsigned __int64 v8; // r15
  lua_TValue *v9; // rcx
  int v10[30]; // [rsp+20h] [rbp-B8h] BYREF
  CallInfo *v11; // [rsp+98h] [rbp-40h]

  hook = L->hook;
  if ( hook && L->allowhook )
  {
    v5 = (char *)L->stack_last - (char *)L->top;
    ci = L->ci;
    v7 = (char *)L->top - (char *)L->stack;
    v8 = (char *)ci->top - (char *)L->stack;
    v10[0] = event;
    v10[10] = line;
    v11 = ci;
    if ( (__int64)(v5 & 0xFFFFFFFFFFFFFFF0ui64) <= 320 )
      luaD_growstack(L, 20);
    ci->top = L->top + 20;
    L->allowhook = 0;
    ci->callstatus |= 2u;
    hook(L, (lua_Debug *)v10);
    v9 = (lua_TValue *)((char *)L->stack + v8);
    L->allowhook = 1;
    ci->top = v9;
    L->top = (lua_TValue *)((char *)L->stack + v7);
    ci->callstatus &= ~2u;
  }
}

int __fastcall luaD_pcall(
        lua_State *L,
        void (__fastcall *func)(lua_State *, void *),
        void *u,
        __int64 old_top,
        __int64 ef)
{
  __int64 errfunc; // rbp
  CallInfo *ci; // r14
  unsigned __int8 allowhook; // r15
  unsigned __int16 nny; // r12
  int result; // eax
  int v12; // esi
  lua_TValue *v13; // rbx

  errfunc = L->errfunc;
  ci = L->ci;
  allowhook = L->allowhook;
  nny = L->nny;
  L->errfunc = ef;
  result = luaD_rawrunprotected(L, func, u);
  v12 = result;
  if ( result )
  {
    v13 = (lua_TValue *)((char *)L->stack + old_top);
    luaF_close(L, v13);
    seterrorobj(L, v12, v13);
    L->ci = ci;
    L->allowhook = allowhook;
    L->nny = nny;
    luaD_shrinkstack(L);
    result = v12;
  }
  L->errfunc = errfunc;
  return result;
}

__int64 __fastcall luaD_poscall(lua_State *L, lua_TValue *firstResult)
{
  unsigned __int8 hookmask; // al
  lua_TValue *v3; // rbx
  CallInfo *ci; // rsi
  signed __int64 v6; // rbx
  int nresults; // er10
  int v8; // er9
  lua_TValue *func; // rax
  lua_TValue *v10; // rdx
  lua_TValue *v11; // r8

  hookmask = L->hookmask;
  v3 = firstResult;
  ci = L->ci;
  if ( (hookmask & 6) != 0 )
  {
    if ( (hookmask & 2) != 0 )
    {
      v6 = (char *)firstResult - (char *)L->stack;
      luaD_hook(L, 1, -1);
      v3 = (lua_TValue *)((char *)L->stack + v6);
    }
    L->oldpc = ci->previous->u.l.savedpc;
  }
  nresults = ci->nresults;
  v8 = nresults;
  func = ci->func;
  for ( L->ci = ci->previous; v8; --v8 )
  {
    if ( v3 >= L->top )
      break;
    v10 = v3;
    v11 = func++;
    ++v3;
    v11->value_.gc = v10->value_.gc;
    v11->tt_ = v10->tt_;
  }
  for ( ; v8 > 0; ++func )
  {
    func->tt_ = 0;
    --v8;
  }
  L->top = func;
  return (unsigned int)(nresults + 1);
}

__int64 __fastcall luaD_precall(lua_State *L, lua_TValue *func, int nresults)
{
  signed __int64 v3; // rsi
  int v4; // eax
  __int16 v5; // r12
  Proto *p; // rbp
  int v8; // edi
  signed __int64 maxstacksize; // rdx
  int i; // er14
  lua_TValue *v11; // rsi
  lua_TValue *v12; // r15
  __int64 (__fastcall *gc)(lua_State *); // rdi
  CallInfo *v14; // rax
  lua_TValue *v15; // rcx
  int v16; // eax
  lua_TValue *v18; // rax
  CallInfo *next; // rdi
  lua_TValue *v20; // rcx
  global_State *l_G; // rax
  CallInfo *previous; // rax

  v3 = (char *)func - (char *)L->stack;
  v4 = func->tt_ & 0x3F;
  v5 = nresults;
  if ( v4 == 6 )
  {
LABEL_5:
    p = func->value_.gc->cl.l.p;
    v8 = L->top - func - 1;
    maxstacksize = p->maxstacksize;
    if ( L->stack_last - L->top <= maxstacksize )
      luaD_growstack(L, maxstacksize);
    for ( i = 0; v8 < p->numparams; ++L->top )
    {
      ++v8;
      L->top->tt_ = 0;
    }
    if ( p->is_vararg )
    {
      v18 = adjust_varargs(L, p, v8);
      v11 = (lua_TValue *)((char *)L->stack + v3);
      v12 = v18;
    }
    else
    {
      v11 = (lua_TValue *)((char *)L->stack + v3);
      v12 = v11 + 1;
    }
    next = L->ci->next;
    if ( !next )
      next = luaE_extendCI(L);
    L->ci = next;
    next->u.l.base = v12;
    next->nresults = v5;
    next->func = v11;
    v20 = &v12[p->maxstacksize];
    next->top = v20;
    next->u.l.savedpc = p->code;
    next->callstatus = 1;
    l_G = L->l_G;
    L->top = v20;
    if ( l_G->GCdebt > 0 )
      luaC_step(L);
    if ( (L->hookmask & 1) != 0 )
    {
      previous = next->previous;
      ++next->u.l.savedpc;
      if ( (previous->callstatus & 1) != 0 && (*(_BYTE *)(previous->u.l.savedpc - 1) & 0x3F) == 30 )
      {
        next->callstatus |= 0x40u;
        i = 4;
      }
      luaD_hook(L, i, -1);
      --next->u.l.savedpc;
    }
    return 0i64;
  }
  else
  {
    while ( v4 != 22 )
    {
      if ( v4 == 38 )
      {
        func = &func->value_.gc->uv.u.value;
        break;
      }
      func = tryfuncTM(L, func);
      v3 = (char *)func - (char *)L->stack;
      v4 = func->tt_ & 0x3F;
      if ( v4 == 6 )
        goto LABEL_5;
    }
    gc = (__int64 (__fastcall *)(lua_State *))func->value_.gc;
    if ( (__int64)(((char *)L->stack_last - (char *)L->top) & 0xFFFFFFFFFFFFFFF0ui64) <= 320 )
      luaD_growstack(L, 20);
    v14 = L->ci->next;
    if ( !v14 )
      v14 = luaE_extendCI(L);
    L->ci = v14;
    v14->nresults = v5;
    v14->func = (lua_TValue *)((char *)L->stack + v3);
    v15 = L->top + 20;
    v14->callstatus = 0;
    v14->top = v15;
    if ( L->l_G->GCdebt > 0 )
      luaC_step(L);
    if ( (L->hookmask & 1) != 0 )
      luaD_hook(L, 0, -1);
    v16 = gc(L);
    luaD_poscall(L, &L->top[-v16]);
    return 1i64;
  }
}

__int64 __fastcall luaD_protectedparser(lua_State *L, Zio *z, const char *name, const char *mode)
{
  lua_TValue *top; // rbx
  __int64 v5; // r14
  unsigned __int16 v7; // r12
  signed __int64 v8; // rbx
  CallInfo *ci; // rdi
  unsigned __int8 allowhook; // si
  __int64 errfunc; // r13
  unsigned int v12; // er15
  lua_TValue *v13; // rbx
  global_State *l_G; // rbx
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  global_State *v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rax
  global_State *v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // rax
  global_State *v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // rsi
  Zio *ud; // [rsp+20h] [rbp-88h] BYREF
  __int64 v33; // [rsp+28h] [rbp-80h]
  __int64 v34; // [rsp+38h] [rbp-70h]
  void *v35; // [rsp+40h] [rbp-68h]
  int v36; // [rsp+4Ch] [rbp-5Ch]
  void *v37; // [rsp+50h] [rbp-58h]
  int v38; // [rsp+5Ch] [rbp-4Ch]
  void *v39; // [rsp+60h] [rbp-48h]
  int v40; // [rsp+6Ch] [rbp-3Ch]
  const char *v41; // [rsp+70h] [rbp-38h]
  const char *v42; // [rsp+78h] [rbp-30h]

  top = L->top;
  v5 = 0i64;
  v7 = ++L->nny;
  v8 = (char *)top - (char *)L->stack;
  ci = L->ci;
  allowhook = L->allowhook;
  errfunc = L->errfunc;
  ud = z;
  v42 = name;
  v41 = mode;
  v35 = 0i64;
  v36 = 0;
  v37 = 0i64;
  v38 = 0;
  v39 = 0i64;
  v40 = 0;
  v33 = 0i64;
  v34 = 0i64;
  v12 = luaD_rawrunprotected(L, f_parser, &ud);
  if ( v12 )
  {
    v13 = (lua_TValue *)((char *)L->stack + v8);
    luaF_close(L, v13);
    seterrorobj(L, v12, v13);
    L->ci = ci;
    L->allowhook = allowhook;
    L->nny = v7;
    luaD_shrinkstack(L);
  }
  l_G = L->l_G;
  v15 = v34;
  v16 = v33;
  v17 = v34;
  L->errfunc = errfunc;
  v18 = (__int64)l_G->frealloc(l_G->ud, (void *)v16, v17, 0i64);
  v19 = 0i64;
  if ( v16 )
    v19 = v15;
  l_G->GCdebt -= v19;
  v20 = L->l_G;
  v21 = (__int64)v35;
  v22 = 2i64 * v36;
  v33 = v18;
  v34 = 0i64;
  v20->frealloc(v20->ud, v35, v22, 0i64);
  v23 = 0i64;
  if ( v21 )
    v23 = v22;
  v20->GCdebt -= v23;
  v24 = L->l_G;
  v25 = (__int64)v37;
  v26 = 24i64 * v38;
  v24->frealloc(v24->ud, v37, v26, 0i64);
  v27 = 0i64;
  if ( v25 )
    v27 = v26;
  v24->GCdebt -= v27;
  v28 = L->l_G;
  v29 = (__int64)v39;
  v30 = 24i64 * v40;
  v28->frealloc(v28->ud, v39, v30, 0i64);
  if ( v29 )
    v5 = v30;
  v28->GCdebt -= v5;
  --L->nny;
  return v12;
}

__int64 __fastcall luaD_rawrunprotected(lua_State *L, void (__fastcall *f)(lua_State *, void *), void *ud)
{
  unsigned __int16 nCcalls; // [rsp+20h] [rbp-158h]
  lua_longjmp *errorJmp; // [rsp+40h] [rbp-138h] BYREF
  jmp_buf Buf; // [rsp+50h] [rbp-128h] BYREF
  unsigned int v11; // [rsp+150h] [rbp-28h]

  nCcalls = L->nCcalls;
  v11 = 0;
  errorJmp = L->errorJmp;
  L->errorJmp = (lua_longjmp *)&errorJmp;
  if ( !setjmp(Buf) )
    f(L, ud);
  L->errorJmp = errorJmp;
  L->nCcalls = nCcalls;
  return v11;
}

void __fastcall luaD_reallocstack(lua_State *L, int newsize)
{
  lua_TValue *stack; // r15
  __int64 v4; // rbp
  __int64 stacksize; // rsi
  __int64 v6; // rdi
  __int64 v7; // rax
  lua_TValue *v8; // rcx

  stack = L->stack;
  v4 = newsize;
  if ( (unsigned __int64)(newsize + 1) > 0xFFFFFFFFFFFFFFFi64 )
    luaG_runerror(L, "memory allocation error: block too big");
  stacksize = L->stacksize;
  L->stack = (lua_TValue *)luaM_realloc_(L, stack, 16 * stacksize, 16i64 * newsize);
  if ( stacksize < v4 )
  {
    v6 = v4 - stacksize;
    v7 = stacksize;
    do
    {
      L->stack[v7++].tt_ = 0;
      --v6;
    }
    while ( v6 );
  }
  v8 = L->stack - 5;
  L->stacksize = v4;
  L->stack_last = &v8[v4];
  correctstack(L, stack);
}

void __fastcall luaD_shrinkstack(lua_State *L)
{
  CallInfo *ci; // rdx
  lua_TValue *i; // r8
  int v3; // er8
  int v4; // edx

  ci = L->ci;
  for ( i = L->top; ci; ci = ci->previous )
  {
    if ( i < ci->top )
      i = ci->top;
  }
  v3 = i - L->stack + 1;
  v4 = v3 + v3 / 8 + 10;
  if ( v4 > 1000000 )
    v4 = 1000000;
  if ( v3 <= 1000000 && v4 < L->stacksize )
    luaD_reallocstack(L, v4);
}

void __fastcall __noreturn luaD_throw(lua_State *L, int errcode)
{
  global_State *l_G; // rax
  lua_State *mainthread; // r9
  lua_TValue *top; // r8
  lua_TValue *v6; // rdx
  void (*panic)(void); // rdx

  for ( ; !L->errorJmp; L = L->l_G->mainthread )
  {
    l_G = L->l_G;
    L->status = errcode;
    mainthread = l_G->mainthread;
    if ( !mainthread->errorJmp )
    {
      panic = (void (*)(void))l_G->panic;
      if ( panic )
        panic();
      abort();
    }
    top = L->top;
    v6 = mainthread->top;
    mainthread->top = v6 + 1;
    *v6 = top[-1];
  }
  L->errorJmp->status = errcode;
  longjmp(L->errorJmp->b, 1);
}

__int64 __fastcall lua_resume(lua_State *L, lua_State *from, int nargs)
{
  unsigned __int16 nny; // si
  unsigned __int16 v5; // ax
  unsigned int v6; // eax
  unsigned int v7; // ebx
  lua_TValue *top; // r8

  nny = L->nny;
  if ( from )
    v5 = from->nCcalls + 1;
  else
    v5 = 1;
  L->nCcalls = v5;
  L->nny = 0;
  v6 = luaD_rawrunprotected(L, resume, &L->top[-nargs]);
  v7 = v6;
  if ( v6 == -1 )
  {
    v7 = 2;
  }
  else if ( v6 )
  {
    while ( v7 != 1 )
    {
      if ( !recover(L, v7) )
      {
        top = L->top;
        L->status = v7;
        seterrorobj(L, v7, top);
        L->ci->top = L->top;
        break;
      }
      v7 = luaD_rawrunprotected(L, unroll, 0i64);
      if ( !v7 )
        break;
    }
  }
  L->nny = nny;
  --L->nCcalls;
  return v7;
}

__int64 __fastcall lua_yieldk(lua_State *L, int nresults, __int64 ctx, int (__fastcall *k)(lua_State *))
{
  CallInfo *ci; // r11
  bool v5; // zf

  ci = L->ci;
  if ( L->nny )
  {
    if ( L == L->l_G->mainthread )
      luaG_runerror(L, "attempt to yield from outside a coroutine", ctx, k);
    luaG_runerror(L, "attempt to yield across a C-call boundary", ctx, k);
  }
  L->status = 1;
  v5 = (ci->callstatus & 1) == 0;
  ci->extra = (char *)ci->func - (char *)L->stack;
  if ( v5 )
  {
    ci->u.l.savedpc = (const unsigned int *)k;
    if ( k )
      ci->u.c.ctx = ctx;
    ci->func = &L->top[-nresults - 1];
    luaD_throw(L, 1);
  }
  return 0i64;
}

__int64 __fastcall recover(lua_State *L, int status)
{
  CallInfo *ci; // rbx
  __int64 result; // rax
  lua_TValue *v6; // rdi

  ci = L->ci;
  if ( !ci )
    return 0i64;
  while ( (ci->callstatus & 0x10) == 0 )
  {
    ci = ci->previous;
    if ( !ci )
      return 0i64;
  }
  v6 = (lua_TValue *)((char *)L->stack + ci->extra);
  luaF_close(L, v6);
  seterrorobj(L, status, v6);
  L->ci = ci;
  L->allowhook = ci->u.c.old_allowhook;
  L->nny = 0;
  luaD_shrinkstack(L);
  L->errfunc = ci->u.c.old_errfunc;
  result = 1i64;
  ci->callstatus |= 0x20u;
  ci->u.c.status = status;
  return result;
}

void __fastcall resume(lua_State *L, void *ud)
{
  CallInfo *ci; // rcx
  lua_TValue *v4; // rdi
  unsigned __int8 status; // al
  unsigned __int8 callstatus; // al
  const unsigned int *savedpc; // rdx
  TString *v8; // rax
  TString *v9; // rax
  TString *v10; // rax

  ci = L->ci;
  v4 = (lua_TValue *)ud;
  if ( L->nCcalls >= 0xC8u )
  {
    L->top = (lua_TValue *)ud;
    v8 = luaS_newlstr(L, "C stack overflow", 0x10ui64);
    v4->value_.gc = (GCObject *)v8;
    v4->tt_ = v8->tsv.tt | 0x40;
    ++L->top;
    luaD_throw(L, -1);
  }
  status = L->status;
  if ( status )
  {
    if ( status != 1 )
    {
      L->top = (lua_TValue *)ud;
      v10 = luaS_newlstr(L, "cannot resume dead coroutine", 0x1Cui64);
      v4->value_.gc = (GCObject *)v10;
      v4->tt_ = v10->tsv.tt | 0x40;
      ++L->top;
      luaD_throw(L, -1);
    }
    L->status = 0;
    ci->func = (lua_TValue *)((char *)L->stack + ci->extra);
    callstatus = ci->callstatus;
    if ( (callstatus & 1) != 0 )
    {
      luaV_execute(L);
    }
    else
    {
      savedpc = ci->u.l.savedpc;
      if ( savedpc )
      {
        ci->u.c.status = 1;
        ci->callstatus = callstatus | 8;
        v4 = &L->top[-((int (__fastcall *)(lua_State *))savedpc)(L)];
      }
      luaD_poscall(L, v4);
    }
    unroll(L, 0i64);
  }
  else
  {
    if ( ci != &L->base_ci )
    {
      L->top = (lua_TValue *)ud;
      v9 = luaS_newlstr(L, "cannot resume non-suspended coroutine", 0x25ui64);
      v4->value_.gc = (GCObject *)v9;
      v4->tt_ = v9->tsv.tt | 0x40;
      ++L->top;
      luaD_throw(L, -1);
    }
    if ( !(unsigned int)luaD_precall(L, (lua_TValue *)ud - 1, -1) )
      luaV_execute(L);
  }
}

void __fastcall seterrorobj(lua_State *L, int errcode, lua_TValue *oldtop)
{
  TString *v5; // rax
  TString *memerrmsg; // rcx

  if ( errcode == 4 )
  {
    memerrmsg = L->l_G->memerrmsg;
    oldtop->value_.gc = (GCObject *)memerrmsg;
    oldtop->tt_ = memerrmsg->tsv.tt | 0x40;
    L->top = oldtop + 1;
  }
  else if ( errcode == 6 )
  {
    v5 = internshrstr(L, "error in error handling", 0x17ui64);
    oldtop->value_.gc = (GCObject *)v5;
    oldtop->tt_ = v5->tsv.tt | 0x40;
    L->top = oldtop + 1;
  }
  else
  {
    *oldtop = L->top[-1];
    L->top = oldtop + 1;
  }
}

lua_TValue *__fastcall tryfuncTM(lua_State *L, lua_TValue *func)
{
  const lua_TValue *v3; // rdi
  const lua_TValue *v4; // r9
  signed __int64 v5; // rsi
  lua_TValue *i; // rax
  lua_TValue *v7; // rcx
  int stacksize; // eax
  int v9; // eax
  int v10; // ecx
  lua_TValue *result; // rax

  v3 = luaT_gettmbyobj(L, func, TM_CALL);
  v5 = (char *)v4 - (char *)L->stack;
  if ( (v3->tt_ & 0xF) != 6 )
    luaG_typeerror(L, v4, "call");
  for ( i = L->top; i > v4; --i )
  {
    i->value_.gc = i[-1].value_.gc;
    i->tt_ = i[-1].tt_;
  }
  v7 = ++L->top;
  if ( (char *)L->stack_last - (char *)v7 < 0 || (((char *)L->stack_last - (char *)v7) & 0xFFFFFFFFFFFFFFF0ui64) == 0 )
  {
    stacksize = L->stacksize;
    if ( stacksize > 1000000 )
      luaD_throw(L, 6);
    v9 = 2 * stacksize;
    v10 = v7 - L->stack + 5;
    if ( v9 > 1000000 )
      v9 = 1000000;
    if ( v9 >= v10 )
      v10 = v9;
    if ( v10 > 1000000 )
    {
      luaD_reallocstack(L, 1000200);
      luaG_runerror(L, "stack overflow");
    }
    luaD_reallocstack(L, v10);
  }
  result = (lua_TValue *)((char *)L->stack + v5);
  result->value_.gc = v3->value_.gc;
  result->tt_ = v3->tt_;
  return result;
}

void __fastcall unroll(lua_State *L, void *ud)
{
  CallInfo *p_base_ci; // rdi
  CallInfo *ci; // rdx
  unsigned __int8 callstatus; // al
  CallInfo *v6; // rax
  lua_TValue *top; // rcx
  unsigned __int8 v8; // al
  int v9; // eax

  p_base_ci = &L->base_ci;
  while ( L->ci != p_base_ci )
  {
    ci = L->ci;
    if ( (ci->callstatus & 1) != 0 )
    {
      luaV_finishOp(L);
      luaV_execute(L);
    }
    else
    {
      callstatus = ci->callstatus;
      if ( (callstatus & 0x10) != 0 )
      {
        ci->callstatus = callstatus & 0xEF;
        L->errfunc = ci->u.c.old_errfunc;
      }
      if ( ci->nresults == -1 )
      {
        v6 = L->ci;
        top = L->top;
        if ( v6->top < top )
          v6->top = top;
      }
      v8 = ci->callstatus;
      if ( (v8 & 0x20) == 0 )
        ci->u.c.status = 1;
      ci->callstatus = v8 & 0xC7 | 8;
      v9 = ((__int64 (__fastcall *)(lua_State *))ci->u.l.savedpc)(L);
      luaD_poscall(L, &L->top[-v9]);
    }
  }
}

