#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstring.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/ltable.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/ltm.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/ldebug.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lfunc.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lgc.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lmem.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lzio.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lobject.c"

long luaV_tostring(lua_State * L, lua_TValue * obj); // 0x1402A4060
void traceexec(lua_State * L); // 0x1402A4160
void callTM(lua_State * L, const lua_TValue * f, const lua_TValue * p1, const lua_TValue * p2, lua_TValue * p3, long hasres); // 0x1402A4290
void luaV_gettable(lua_State * L, const lua_TValue * t, lua_TValue * key, lua_TValue * val); // 0x1402A4380
void luaV_settable(lua_State * L, const lua_TValue * t, lua_TValue * key, lua_TValue * val); // 0x1402A45D0
long call_binTM(lua_State * L, const lua_TValue * p1, const lua_TValue * p2, lua_TValue * res, TMS event); // 0x1402A4870
const lua_TValue * get_equalTM(lua_State * L, Table * mt1, Table * mt2, TMS event); // 0x1402A4970
long l_strcmp(const TString * ls, const TString * rs); // 0x1402A4A20
long luaV_lessthan(lua_State * L, const lua_TValue * l, const lua_TValue * r); // 0x1402A4AB0
long luaV_lessequal(lua_State * L, const lua_TValue * l, const lua_TValue * r); // 0x1402A4B90
long luaV_equalobj_(lua_State * L, const lua_TValue * t1, const lua_TValue * t2); // 0x1402A4CE0
void luaV_concat(lua_State * L, long total); // 0x1402A4E70
void luaV_objlen(lua_State * L, lua_TValue * ra, const lua_TValue * rb); // 0x1402A5100
void luaV_arith(lua_State * L, lua_TValue * ra, const lua_TValue * rb, const lua_TValue * rc, TMS op); // 0x1402A52A0
Closure * getcached(Proto * p, UpVal * * encup, lua_TValue * base); // 0x1402A5400
void pushclosure(lua_State * L, Proto * p, UpVal * * encup, lua_TValue * base, lua_TValue * ra); // 0x1402A5490
void luaV_finishOp(lua_State * L); // 0x1402A55E0
void luaV_execute(lua_State * L); // 0x1402A57B0void __fastcall callTM(
        lua_State *L,
        const lua_TValue *f,
        const lua_TValue *p1,
        const lua_TValue *p2,
        lua_TValue *p3,
        int hasres)
{
  lua_TValue *top; // r10
  signed __int64 v8; // rsi
  lua_TValue *v9; // rcx
  lua_TValue *v10; // rcx
  lua_TValue *v11; // rcx
  lua_TValue *v12; // rdx
  lua_TValue *stack; // rcx

  top = L->top;
  v8 = (char *)p3 - (char *)L->stack;
  L->top = top + 1;
  *top = *f;
  v9 = L->top;
  L->top = v9 + 1;
  *v9 = *p1;
  v10 = L->top;
  L->top = v10 + 1;
  *v10 = *p2;
  if ( !hasres )
  {
    v11 = L->top;
    L->top = v11 + 1;
    *v11 = *p3;
  }
  luaD_call(L, &L->top[-(4 - hasres)], (unsigned int)hasres, L->ci->callstatus & 1);
  if ( hasres )
  {
    v12 = --L->top;
    stack = L->stack;
    *(GCObject **)((char *)&stack->value_.gc + v8) = v12->value_.gc;
    *(int *)((char *)&stack->tt_ + v8) = v12->tt_;
  }
}

__int64 __fastcall call_binTM(lua_State *L, const lua_TValue *p1, const lua_TValue *p2, lua_TValue *res, TMS event)
{
  Node *v9; // r11
  __int64 result; // rax
  lua_TValue *top; // rcx
  signed __int64 v12; // r15
  lua_TValue *v13; // rcx
  lua_TValue *v14; // rcx
  lua_TValue *v15; // r8
  lua_TValue *stack; // rdx

  v9 = luaT_gettmbyobj(L, p1, event);
  if ( !v9->i_val.tt_ )
    v9 = luaT_gettmbyobj(L, p2, event);
  if ( !v9->i_val.tt_ )
    return 0i64;
  top = L->top;
  v12 = (char *)res - (char *)L->stack;
  L->top = top + 1;
  top->value_.gc = v9->i_val.value_.gc;
  top->tt_ = v9->i_val.tt_;
  v13 = L->top;
  L->top = v13 + 1;
  v13->value_.gc = p1->value_.gc;
  v13->tt_ = p1->tt_;
  v14 = L->top;
  L->top = v14 + 1;
  v14->value_.gc = p2->value_.gc;
  v14->tt_ = p2->tt_;
  luaD_call(L, L->top - 3, 1i64, L->ci->callstatus & 1);
  --L->top;
  result = 1i64;
  v15 = L->top;
  stack = L->stack;
  *(GCObject **)((char *)&stack->value_.gc + v12) = v15->value_.gc;
  *(int *)((char *)&stack->tt_ + v12) = v15->tt_;
  return result;
}

Node *__fastcall get_equalTM(lua_State *L, Table *mt1, Table *mt2, TMS event)
{
  Node *result; // rax
  TMS v7; // edx
  Table *v8; // r11
  const lua_TValue *p_i_val; // rbx
  Node *v10; // rax

  if ( !mt1 )
    return 0i64;
  if ( (mt1->flags & 0x20) != 0 )
    return 0i64;
  result = luaT_gettm(mt1, TM_EQ, L->l_G->tmname[5]);
  p_i_val = &result->i_val;
  if ( !result )
    return 0i64;
  if ( mt1 == v8 )
    return result;
  if ( v8
    && (v8->flags & 0x20) == 0
    && (v10 = luaT_gettm(v8, v7, L->l_G->tmname[5])) != 0i64
    && p_i_val->tt_ == v10->i_val.tt_
    && luaV_equalobj_(0i64, p_i_val, &v10->i_val) )
  {
    return (Node *)p_i_val;
  }
  else
  {
    return 0i64;
  }
}

Closure *__fastcall _LN27_27(Proto *p, UpVal **encup, lua_TValue *base)
{
  Closure *cache; // rbx
  __int64 sizeupvalues; // r11
  __int64 v6; // r9
  lua_TValue *upvalue; // r10
  unsigned __int8 *i; // r8
  lua_TValue *v9; // rcx

  cache = p->cache;
  if ( !cache )
    return cache;
  sizeupvalues = p->sizeupvalues;
  v6 = 0i64;
  if ( sizeupvalues <= 0 )
    return cache;
  upvalue = cache->c.upvalue;
  for ( i = &p->upvalues->idx; ; i += 16 )
  {
    v9 = *(i - 1) ? &base[*i] : encup[*i]->v;
    if ( upvalue->value_.gc->p.k != v9 )
      break;
    ++v6;
    upvalue = (lua_TValue *)((char *)upvalue + 8);
    if ( v6 >= sizeupvalues )
      return cache;
  }
  return 0i64;
}

int __fastcall l_strcmp(const TString *ls, const TString *rs)
{
  unsigned __int64 len; // rdi
  const char *v3; // rbx
  unsigned __int64 v4; // rsi
  const char *v5; // rbp
  int result; // eax
  __int64 v7; // rax
  __int64 v8; // rax

  len = ls->tsv.len;
  v3 = (const char *)&ls[1];
  v4 = rs->tsv.len;
  v5 = (const char *)&rs[1];
  result = strcoll((const char *)&ls[1], (const char *)&rs[1]);
  if ( !result )
  {
    while ( 1 )
    {
      v7 = -1i64;
      do
        ++v7;
      while ( v3[v7] );
      if ( v7 == v4 )
        break;
      if ( v7 == len )
        return -1;
      v8 = v7 + 1;
      v3 += v8;
      v5 += v8;
      len -= v8;
      v4 -= v8;
      result = strcoll(v3, v5);
      if ( result )
        return result;
    }
    return v7 != len;
  }
  return result;
}

void __fastcall luaV_arith(lua_State *L, lua_TValue *ra, const lua_TValue *rb, const lua_TValue *rc, TMS op)
{
  int tt; // eax
  const lua_TValue *v7; // rbx
  const lua_TValue *v10; // rsi
  int v11; // eax
  double v12; // xmm0_8
  int v13; // eax
  int *v14; // rax
  int v15[4]; // [rsp+30h] [rbp-38h] BYREF
  int v16[10]; // [rsp+40h] [rbp-28h] BYREF
  float result; // [rsp+80h] [rbp+18h] BYREF

  tt = rb->tt_;
  v7 = rb;
  if ( tt == 3 )
  {
    v10 = rb;
  }
  else
  {
    if ( (tt & 0xF) != 4 || !luaO_str2d((const char *)&rb->value_.gc->th.l_G, rb->value_.gc->ts.tsv.len, &result) )
      goto LABEL_12;
    v10 = (const lua_TValue *)v15;
    *(float *)v15 = result;
    v15[2] = 3;
  }
  v11 = rc->tt_;
  if ( v11 == 3 )
  {
LABEL_10:
    v12 = luaO_arith(op - 6, COERCE_DOUBLE((unsigned __int64)v10->value_.b), rc->value_.n);
    ra->value_.b = LODWORD(v12);
    ra->tt_ = 3;
    return;
  }
  if ( (v11 & 0xF) == 4 && luaO_str2d((const char *)&rc->value_.gc->th.l_G, rc->value_.gc->ts.tsv.len, &result) )
  {
    rc = (const lua_TValue *)v16;
    *(float *)v16 = result;
    v16[2] = 3;
    goto LABEL_10;
  }
LABEL_12:
  if ( !(unsigned int)call_binTM(L, v7, rc, ra, op) )
  {
    v13 = v7->tt_;
    if ( v13 == 3 )
    {
      v14 = (int *)v7;
    }
    else if ( (v13 & 0xF) == 4 && luaO_str2d((const char *)&v7->value_.gc->th.l_G, v7->value_.gc->ts.tsv.len, &result) )
    {
      v14 = v16;
    }
    else
    {
      v14 = 0i64;
    }
    if ( v14 )
      v7 = rc;
    luaG_typeerror(L, v7, "perform arithmetic on");
  }
}

void __fastcall luaV_concat(lua_State *L, int total)
{
  lua_TValue *top; // rsi
  int v4; // er15
  lua_TValue *v5; // rbx
  unsigned __int64 len; // rbp
  char v7; // al
  __int64 v8; // rbx
  __int64 v9; // r14
  lua_TValue *v10; // rdi
  unsigned __int64 v11; // rcx
  global_State *l_G; // rdi
  unsigned __int64 buffsize; // r8
  const char *buffer; // r12
  unsigned __int64 v15; // rbp
  lua_TValue *v16; // r14
  size_t v17; // rdi
  lua_TValue *v18; // rsi
  GCObject *v19; // rax
  __int64 v20; // [rsp+70h] [rbp+8h]
  int v21; // [rsp+78h] [rbp+10h]

  v21 = total;
  do
  {
    top = L->top;
    v4 = 2;
    if ( (top[-2].tt_ & 0xF) != 4 && top[-2].tt_ != 3 )
    {
LABEL_6:
      v5 = top - 2;
      if ( !(unsigned int)call_binTM(L, top - 2, top - 1, top - 2, TM_CONCAT) )
      {
        if ( (v5->tt_ & 0xF) == 4 || v5->tt_ == 3 )
          v5 = top - 1;
        luaG_typeerror(L, v5, "concatenate");
      }
      goto LABEL_31;
    }
    if ( (top[-1].tt_ & 0xF) != 4 )
    {
      if ( !luaV_tostring(L, top - 1) )
        goto LABEL_6;
      total = v21;
    }
    len = top[-1].value_.gc->ts.tsv.len;
    v7 = top[-2].tt_ & 0xF;
    if ( len )
    {
      if ( v7 == 4 && !top[-2].value_.gc->ts.tsv.len )
      {
        top[-2].value_.gc = top[-1].value_.gc;
        top[-2].tt_ = top[-1].tt_;
        goto LABEL_32;
      }
      v8 = 1i64;
      v9 = total;
      v4 = 1;
      if ( total > 1i64 )
      {
        v10 = top - 2;
        do
        {
          if ( (v10->tt_ & 0xF) != 4 && !luaV_tostring(L, &top[-v4 - 1]) )
            break;
          v11 = v10->value_.gc->ts.tsv.len;
          if ( v11 >= -3i64 - len )
            luaG_runerror(L, "string length overflow");
          len += v11;
          ++v4;
          ++v8;
          --v10;
        }
        while ( v8 < v9 );
      }
      l_G = L->l_G;
      buffsize = l_G->buff.buffsize;
      if ( len > buffsize )
      {
        if ( len < 0x20 )
          len = 32i64;
        if ( len + 1 > 0xFFFFFFFFFFFFFFFDui64 )
          luaG_runerror(L, "memory allocation error: block too big");
        l_G->buff.buffer = (char *)luaM_realloc_(L, l_G->buff.buffer, buffsize, len);
        l_G->buff.buffsize = len;
      }
      buffer = l_G->buff.buffer;
      v15 = 0i64;
      v20 = 16 * v8;
      v16 = &top[-v8];
      do
      {
        v17 = v16->value_.gc->ts.tsv.len;
        memmove((void *)&buffer[v15], &v16->value_.gc->th.l_G, v17);
        v15 += v17;
        ++v16;
        --v8;
      }
      while ( v8 > 0 );
      v18 = &top[v20 / 0xFFFFFFFFFFFFFFF0ui64];
      v19 = luaS_newlstr(L, buffer, v15);
      v18->value_.gc = v19;
      v18->tt_ = v19->gch.tt | 0x40;
    }
    else
    {
      if ( v7 == 4 )
        goto LABEL_32;
      luaV_tostring(L, top - 2);
    }
LABEL_31:
    total = v21;
LABEL_32:
    total += 1 - v4;
    v21 = total;
    L->top += -v4 + 1;
  }
  while ( total > 1 );
}

__int64 __fastcall luaV_equalobj_(lua_State *L, const lua_TValue *t1, const lua_TValue *t2, TMS a4)
{
  unsigned int v8; // ebx
  bool v9; // zf
  Value v10; // rcx
  GCObject *gc; // rdx
  unsigned __int64 len; // r8
  Value v13; // r8
  Value v14; // rdx
  Node *equalTM; // rdx
  lua_TValue *top; // rax
  int tt; // ecx

  switch ( t1->tt_ & 0x3F )
  {
    case 0:
      return 1i64;
    case 1:
      v8 = 0;
      v9 = t1->value_.b == t2->value_.b;
      goto LABEL_20;
    case 2:
    case 4:
    case 0x16:
      v8 = 0;
      v9 = t1->value_.gc == t2->value_.gc;
      goto LABEL_20;
    case 3:
      return t1->value_.n == t2->value_.n;
    case 5:
    case 7:
      v13.gc = (GCObject *)t2->value_;
      v14.gc = (GCObject *)t1->value_;
      if ( v14.gc == v13.gc )
        return 1i64;
      if ( !L )
        return 0i64;
      equalTM = get_equalTM(L, v14.gc->u.uv.metatable, v13.gc->u.uv.metatable, a4);
      if ( !equalTM )
        return 0i64;
      v8 = 1;
      callTM(L, &equalTM->i_val, t1, t2, L->top, 1);
      top = L->top;
      tt = top->tt_;
      if ( tt )
      {
        if ( tt == 1 && !top->value_.b )
          return 0;
      }
      else
      {
        return 0;
      }
      return v8;
    case 0x14:
      v10.gc = (GCObject *)t1->value_;
      gc = t2->value_.gc;
      len = t1->value_.gc->ts.tsv.len;
      return t1->value_.gc == gc || len == gc->ts.tsv.len && !memcmp(&v10.gc->th.l_G, &gc->th.l_G, len);
    default:
      v8 = 0;
      v9 = t1->value_.gc == t2->value_.gc;
LABEL_20:
      LOBYTE(v8) = v9;
      return v8;
  }
}

void __fastcall luaV_execute(lua_State *L, __int64 a2, __int64 a3, lua_TValue *a4)
{
  CallInfo *ci; // r15
  Value v6; // r11
  __int64 metatable; // r10
  lua_TValue *base; // r13
  const unsigned int *savedpc; // rax
  unsigned __int64 v10; // rdi
  unsigned __int8 hookmask; // al
  bool v12; // zf
  __int64 v13; // rbx
  __int64 v14; // r12
  lua_TValue *v15; // rsi
  const unsigned int *v16; // rax
  unsigned __int64 v17; // rcx
  unsigned int v18; // edi
  int *p_tt; // rsi
  unsigned int v20; // eax
  Value *v21; // rcx
  unsigned int v22; // eax
  unsigned int v23; // edi
  __int64 v24; // rax
  lua_TValue *v25; // r8
  unsigned int v26; // er8
  lua_TValue *v27; // r8
  const lua_TValue *v28; // rdx
  unsigned int v29; // er9
  lua_TValue *v30; // r9
  unsigned int v31; // edi
  lua_TValue *v32; // r8
  const lua_TValue *v33; // rdx
  Value v34; // rcx
  char v35; // r8
  global_State *l_G; // rax
  unsigned int v37; // er9
  unsigned int v38; // edi
  int v39; // ebp
  int v40; // ebx
  Table *v41; // rax
  unsigned int v42; // ecx
  unsigned __int64 v43; // rdx
  unsigned int v44; // edi
  __int64 v45; // rcx
  const lua_TValue *v46; // r8
  unsigned int v47; // edi
  float v48; // xmm0_4
  __int64 v49; // rcx
  const lua_TValue *v50; // r8
  unsigned int v51; // edi
  float v52; // xmm0_4
  __int64 v53; // rcx
  const lua_TValue *v54; // r8
  unsigned int v55; // edi
  float v56; // xmm0_4
  __int64 v57; // rcx
  const lua_TValue *v58; // r8
  unsigned int v59; // edi
  float v60; // xmm0_4
  __int64 v61; // rcx
  const lua_TValue *v62; // r8
  unsigned int v63; // edi
  const lua_TValue *v64; // r9
  float n; // xmm7_4
  float v66; // xmm6_4
  float v67; // xmm0_4
  __int64 v68; // rcx
  const lua_TValue *v69; // r8
  unsigned int v70; // edi
  const lua_TValue *v71; // r9
  float v72; // xmm0_4
  const lua_TValue *v73; // r8
  int v74; // xmm0_4
  int tt; // ecx
  unsigned int v76; // ebx
  __int64 v77; // rdi
  lua_TValue *v78; // rax
  lua_TValue *v79; // rcx
  lua_TValue *v80; // rdx
  lua_TValue *v81; // rax
  __int64 v82; // rcx
  const lua_TValue *v83; // rdx
  unsigned int v84; // edi
  const lua_TValue *v85; // r8
  int v86; // eax
  unsigned int v87; // ebx
  unsigned int v88; // er8
  const lua_TValue *v89; // r8
  unsigned int v90; // edi
  const lua_TValue *v91; // rdx
  unsigned int v92; // er8
  const lua_TValue *v93; // r8
  unsigned int v94; // edi
  const lua_TValue *v95; // rdx
  int v96; // eax
  lua_TValue *v97; // rcx
  int v98; // eax
  unsigned int v99; // ebx
  unsigned int v100; // eax
  int v101; // edi
  unsigned int v102; // edi
  CallInfo *v103; // rsi
  lua_TValue *func; // rdi
  lua_TValue *v105; // rbp
  unsigned __int64 v106; // rbx
  int v107; // edx
  int *v108; // rcx
  signed __int64 v109; // r8
  lua_TValue *v110; // rax
  const unsigned int *v111; // rax
  int v112; // eax
  float v113; // xmm2_4
  float v114; // xmm1_4
  bool v115; // cf
  int v116; // eax
  int v117; // eax
  int v118; // eax
  float v119; // xmm0_4
  const unsigned int *v120; // rax
  signed int v121; // ebx
  unsigned int v122; // edx
  const unsigned int *v123; // rcx
  GCObject *gc; // rdi
  int v125; // er12
  int v126; // er9
  __int64 v127; // rbp
  lua_TValue *v128; // rbx
  unsigned __int8 marked; // al
  global_State *v130; // rcx
  Proto *v131; // rbx
  Closure *v132; // rax
  UpVal **v133; // rdx
  int v134; // ebx
  signed int v135; // edi
  __int64 v136; // rdx
  int *v137; // rcx
  signed __int64 v138; // r8
  unsigned int v139; // edi
  int v140; // eax
  Value v141; // [rsp+30h] [rbp-98h]
  float result; // [rsp+D0h] [rbp+8h] BYREF
  float v143; // [rsp+D8h] [rbp+10h] BYREF
  float v144; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v145; // [rsp+E8h] [rbp+20h]

  ci = L->ci;
$newframe:
  v6.gc = ci->func->value_.gc;
  v141.gc = v6.gc;
  metatable = (__int64)v6.gc->u.uv.env->metatable;
  v145 = metatable;
LABEL_3:
  base = ci->u.l.base;
  while ( 2 )
  {
    savedpc = ci->u.l.savedpc;
    v10 = *savedpc;
    ci->u.l.savedpc = savedpc + 1;
    hookmask = L->hookmask;
    if ( (hookmask & 0xC) != 0 )
    {
      v12 = L->hookcount-- == 1;
      if ( v12 || (hookmask & 4) != 0 )
      {
        traceexec(L);
        metatable = v145;
        v6.gc = v141.gc;
        base = ci->u.l.base;
      }
    }
    v13 = (unsigned __int8)((unsigned int)v10 >> 6);
    v14 = v13;
    v15 = &base[v13];
    switch ( v10 & 0x3F )
    {
      case 0ui64:
        v15->value_.gc = base[v10 >> 23].value_.gc;
        v15->tt_ = base[v10 >> 23].tt_;
        continue;
      case 1ui64:
        v15->value_.gc = *(GCObject **)(metatable + 16 * (v10 >> 14));
        v15->tt_ = *(_DWORD *)(metatable + 16 * (v10 >> 14) + 8);
        continue;
      case 2ui64:
        v16 = ci->u.l.savedpc;
        v17 = 2 * ((unsigned __int64)*v16 >> 6);
        ci->u.l.savedpc = v16 + 1;
        v15->value_.gc = *(GCObject **)(metatable + 8 * v17);
        v15->tt_ = *(_DWORD *)(metatable + 8 * v17 + 8);
        continue;
      case 3ui64:
        v15->tt_ = 1;
        v15->value_.b = (unsigned int)v10 >> 23;
        if ( (v10 & 0x7FC000) != 0 )
          ++ci->u.l.savedpc;
        continue;
      case 4ui64:
        v18 = (unsigned int)v10 >> 23;
        p_tt = &v15->tt_;
        do
        {
          v20 = v18;
          *p_tt = 0;
          --v18;
          p_tt += 4;
        }
        while ( v20 );
        continue;
      case 5ui64:
        v21 = *(Value **)(*(&v6.gc->u.uv.len + (v10 >> 23)) + 16);
        v15->value_ = (Value)v21->gc;
        v15->tt_ = v21[1].b;
        continue;
      case 6ui64:
        v22 = v10;
        v23 = (unsigned int)v10 >> 14;
        v24 = v22 >> 23;
        if ( (v23 & 0x100) != 0 )
          v25 = (lua_TValue *)(metatable + 16i64 * (unsigned __int8)v23);
        else
          v25 = &base[v23 & 0x1FF];
        luaV_gettable(L, *(const lua_TValue **)(*(&v6.gc->u.uv.len + v24) + 16), v25, &base[v14]);
        metatable = v145;
        v6.gc = v141.gc;
        goto LABEL_3;
      case 7ui64:
        v26 = (unsigned int)v10 >> 14;
        if ( (((unsigned int)v10 >> 14) & 0x100) != 0 )
          v27 = (lua_TValue *)(metatable + 16i64 * (unsigned __int8)v26);
        else
          v27 = &base[v26 & 0x1FF];
        v28 = &base[v10 >> 23];
        goto LABEL_26;
      case 8ui64:
        v29 = (unsigned int)v10 >> 14;
        if ( (((unsigned int)v10 >> 14) & 0x100) != 0 )
          v30 = (lua_TValue *)(metatable + 16i64 * (unsigned __int8)v29);
        else
          v30 = &base[v29 & 0x1FF];
        v31 = (unsigned int)v10 >> 23;
        if ( (v31 & 0x100) != 0 )
          v32 = (lua_TValue *)(metatable + 16i64 * (unsigned __int8)v31);
        else
          v32 = &base[v31];
        v33 = *(const lua_TValue **)(*(&v6.gc->u.uv.len + v13) + 16);
        goto LABEL_35;
      case 9ui64:
        a4 = (lua_TValue *)*(&v6.gc->u.uv.len + (v10 >> 23));
        v34.gc = (GCObject *)a4[1].value_;
        v34.gc->gch.next = v15->value_.gc;
        *(_DWORD *)&v34.gc->th.tt = v15->tt_;
        if ( (v15->tt_ & 0x40) != 0 && (v15->value_.gc->gch.marked & 3) != 0 )
        {
          v35 = BYTE1(a4->tt_);
          if ( (v35 & 4) != 0 )
          {
            l_G = L->l_G;
            if ( l_G->gcstate > 1u )
              BYTE1(a4->tt_) = v35 & 0xB8 | l_G->currentwhite & 3;
            else
              reallymarkobject(L->l_G, v15->value_.gc);
          }
        }
        continue;
      case 0xAui64:
        v37 = (unsigned int)v10 >> 14;
        if ( (((unsigned int)v10 >> 14) & 0x100) != 0 )
          v30 = (lua_TValue *)(metatable + 16i64 * (unsigned __int8)v37);
        else
          v30 = &base[v37 & 0x1FF];
        v38 = (unsigned int)v10 >> 23;
        v33 = &base[v14];
        if ( (v38 & 0x100) != 0 )
          v32 = (lua_TValue *)(metatable + 16i64 * (unsigned __int8)v38);
        else
          v32 = &base[v38];
LABEL_35:
        luaV_settable(L, v33, v32, v30);
        metatable = v145;
        v6.gc = v141.gc;
        goto LABEL_3;
      case 0xBui64:
        v39 = (unsigned int)v10 >> 23;
        v40 = ((unsigned int)v10 >> 14) & 0x1FF;
        v41 = luaH_new(L);
        v15->value_.gc = (GCObject *)v41;
        v15->tt_ = 69;
        if ( (unsigned int)v10 >> 23 || v40 )
        {
          if ( (unsigned __int8)((unsigned int)v10 >> 14) >> 3 )
            v40 = ((((unsigned int)v10 >> 14) & 7) + 8) << (((unsigned __int8)((unsigned int)v10 >> 14) >> 3) - 1);
          v42 = ((unsigned int)v10 >> 26) & 0x1F;
          if ( v42 )
            v39 = ((((unsigned int)v10 >> 23) & 7) + 8) << (v42 - 1);
          luaH_resize(L, v41, v39, v40);
        }
        if ( L->l_G->GCdebt > 0 )
        {
          L->top = v15 + 1;
          luaC_step(L);
          L->top = ci->top;
        }
        metatable = v145;
        v6.gc = v141.gc;
        goto LABEL_3;
      case 0xCui64:
        v43 = v10;
        v44 = (unsigned int)v10 >> 14;
        v28 = &base[v43 >> 23];
        v15[1].value_.gc = v28->value_.gc;
        v15[1].tt_ = v28->tt_;
        if ( (v44 & 0x100) != 0 )
          v27 = (lua_TValue *)(metatable + 16i64 * (unsigned __int8)v44);
        else
          v27 = &base[v44 & 0x1FF];
LABEL_26:
        luaV_gettable(L, v28, v27, &base[v14]);
        goto LABEL_27;
      case 0xDui64:
        v45 = (unsigned int)v10 >> 23;
        if ( (((unsigned int)v10 >> 23) & 0x100) != 0 )
          v46 = (const lua_TValue *)(metatable + 16i64 * (unsigned __int8)v45);
        else
          v46 = &base[v45];
        v47 = (unsigned int)v10 >> 14;
        if ( (v47 & 0x100) != 0 )
          a4 = (lua_TValue *)(metatable + 16i64 * (unsigned __int8)v47);
        else
          a4 = &base[v47 & 0x1FF];
        if ( v46->tt_ == 3 && a4->tt_ == 3 )
        {
          v48 = a4->value_.n + v46->value_.n;
          v15->tt_ = 3;
          v15->value_.n = v48;
        }
        else
        {
          luaV_arith(L, &base[v14], v46, a4, TM_ADD);
          metatable = v145;
          v6.gc = v141.gc;
          base = ci->u.l.base;
        }
        continue;
      case 0xEui64:
        v49 = (unsigned int)v10 >> 23;
        if ( (((unsigned int)v10 >> 23) & 0x100) != 0 )
          v50 = (const lua_TValue *)(metatable + 16i64 * (unsigned __int8)v49);
        else
          v50 = &base[v49];
        v51 = (unsigned int)v10 >> 14;
        if ( (v51 & 0x100) != 0 )
          a4 = (lua_TValue *)(metatable + 16i64 * (unsigned __int8)v51);
        else
          a4 = &base[v51 & 0x1FF];
        if ( v50->tt_ == 3 && a4->tt_ == 3 )
        {
          v52 = v50->value_.n - a4->value_.n;
          v15->tt_ = 3;
          v15->value_.n = v52;
        }
        else
        {
          luaV_arith(L, &base[v14], v50, a4, TM_SUB);
          metatable = v145;
          v6.gc = v141.gc;
          base = ci->u.l.base;
        }
        continue;
      case 0xFui64:
        v53 = (unsigned int)v10 >> 23;
        if ( (((unsigned int)v10 >> 23) & 0x100) != 0 )
          v54 = (const lua_TValue *)(metatable + 16i64 * (unsigned __int8)v53);
        else
          v54 = &base[v53];
        v55 = (unsigned int)v10 >> 14;
        if ( (v55 & 0x100) != 0 )
          a4 = (lua_TValue *)(metatable + 16i64 * (unsigned __int8)v55);
        else
          a4 = &base[v55 & 0x1FF];
        if ( v54->tt_ == 3 && a4->tt_ == 3 )
        {
          v56 = a4->value_.n * v54->value_.n;
          v15->tt_ = 3;
          v15->value_.n = v56;
        }
        else
        {
          luaV_arith(L, &base[v14], v54, a4, TM_MUL);
          metatable = v145;
          v6.gc = v141.gc;
          base = ci->u.l.base;
        }
        continue;
      case 0x10ui64:
        v57 = (unsigned int)v10 >> 23;
        if ( (((unsigned int)v10 >> 23) & 0x100) != 0 )
          v58 = (const lua_TValue *)(metatable + 16i64 * (unsigned __int8)v57);
        else
          v58 = &base[v57];
        v59 = (unsigned int)v10 >> 14;
        if ( (v59 & 0x100) != 0 )
          a4 = (lua_TValue *)(metatable + 16i64 * (unsigned __int8)v59);
        else
          a4 = &base[v59 & 0x1FF];
        if ( v58->tt_ == 3 && a4->tt_ == 3 )
        {
          v60 = v58->value_.n / a4->value_.n;
          v15->tt_ = 3;
          v15->value_.n = v60;
        }
        else
        {
          luaV_arith(L, &base[v14], v58, a4, TM_DIV);
          metatable = v145;
          v6.gc = v141.gc;
          base = ci->u.l.base;
        }
        continue;
      case 0x11ui64:
        v61 = (unsigned int)v10 >> 23;
        if ( (((unsigned int)v10 >> 23) & 0x100) != 0 )
          v62 = (const lua_TValue *)(metatable + 16i64 * (unsigned __int8)v61);
        else
          v62 = &base[v61];
        v63 = (unsigned int)v10 >> 14;
        if ( (v63 & 0x100) != 0 )
          v64 = (const lua_TValue *)(metatable + 16i64 * (unsigned __int8)v63);
        else
          v64 = &base[v63 & 0x1FF];
        if ( v62->tt_ == 3 && v64->tt_ == 3 )
        {
          n = v62->value_.n;
          v66 = v64->value_.n;
          v67 = floorf(v62->value_.n / v64->value_.n);
          metatable = v145;
          v6.gc = v141.gc;
          v15->tt_ = 3;
          v15->value_.n = n - (float)(v67 * v66);
        }
        else
        {
          luaV_arith(L, &base[v14], v62, v64, TM_MOD);
          metatable = v145;
          v6.gc = v141.gc;
          base = ci->u.l.base;
        }
        continue;
      case 0x12ui64:
        v68 = (unsigned int)v10 >> 23;
        if ( (((unsigned int)v10 >> 23) & 0x100) != 0 )
          v69 = (const lua_TValue *)(metatable + 16i64 * (unsigned __int8)v68);
        else
          v69 = &base[v68];
        v70 = (unsigned int)v10 >> 14;
        if ( (v70 & 0x100) != 0 )
          v71 = (const lua_TValue *)(metatable + 16i64 * (unsigned __int8)v70);
        else
          v71 = &base[v70 & 0x1FF];
        if ( v69->tt_ == 3 && v71->tt_ == 3 )
        {
          v72 = powf(v69->value_.n, v71->value_.n);
          metatable = v145;
          v6.gc = v141.gc;
          v15->value_.n = v72;
          v15->tt_ = 3;
        }
        else
        {
          luaV_arith(L, &base[v14], v69, v71, TM_POW);
          metatable = v145;
          v6.gc = v141.gc;
          base = ci->u.l.base;
        }
        continue;
      case 0x13ui64:
        v73 = &base[v10 >> 23];
        if ( v73->tt_ == 3 )
        {
          v74 = v73->value_.b ^ _xmm;
          v15->tt_ = 3;
          v15->value_.b = v74;
        }
        else
        {
          luaV_arith(L, &base[v14], v73, &base[v10 >> 23], TM_UNM);
          metatable = v145;
          v6.gc = v141.gc;
          base = ci->u.l.base;
        }
        continue;
      case 0x14ui64:
        tt = base[v10 >> 23].tt_;
        if ( tt && (tt != 1 || base[v10 >> 23].value_.b) )
        {
          v15->tt_ = 1;
          v15->value_.b = 0;
        }
        else
        {
          v15->value_.b = 1;
          v15->tt_ = 1;
        }
        continue;
      case 0x15ui64:
        luaV_objlen(L, &base[v14], &base[v10 >> 23]);
        metatable = v145;
        v6.gc = v141.gc;
        base = ci->u.l.base;
        continue;
      case 0x16ui64:
        v76 = v10;
        v77 = ((unsigned int)v10 >> 14) & 0x1FF;
        v76 >>= 23;
        L->top = &base[v77 + 1];
        luaV_concat(L, v77 - v76 + 1);
        v78 = ci->u.l.base;
        v79 = &v78[v76];
        v80 = &v78[v14];
        v80->value_.gc = v79->value_.gc;
        v80->tt_ = v79->tt_;
        if ( L->l_G->GCdebt > 0 )
        {
          v81 = v80 + 1;
          if ( v80 < v79 )
            v81 = v79;
          L->top = v81;
          luaC_step(L);
          L->top = ci->top;
        }
        base = ci->u.l.base;
        metatable = v145;
        v6.gc = v141.gc;
        L->top = ci->top;
        continue;
      case 0x17ui64:
        if ( (_DWORD)v13 )
          luaF_close(L, &ci->u.l.base[v14 - 1]);
        metatable = v145;
        v6.gc = v141.gc;
        ci->u.l.savedpc += (int)(((unsigned int)v10 >> 14) - 0x1FFFF);
        continue;
      case 0x18ui64:
        v82 = (unsigned int)v10 >> 23;
        if ( (((unsigned int)v10 >> 23) & 0x100) != 0 )
          v83 = (const lua_TValue *)(metatable + 16i64 * (unsigned __int8)v82);
        else
          v83 = &base[v82];
        v84 = (unsigned int)v10 >> 14;
        if ( (v84 & 0x100) != 0 )
          v85 = (const lua_TValue *)(metatable + 16i64 * (unsigned __int8)v84);
        else
          v85 = &base[v84 & 0x1FF];
        if ( v83->tt_ != v85->tt_ || (v12 = (unsigned int)luaV_equalobj_(L, v83, v85, (TMS)a4) == 0, v86 = 1, v12) )
          v86 = 0;
        if ( v86 == (_DWORD)v13 )
          goto LABEL_149;
        ++ci->u.l.savedpc;
        base = ci->u.l.base;
        metatable = v145;
        v6.gc = v141.gc;
        continue;
      case 0x19ui64:
        v88 = (unsigned int)v10 >> 14;
        if ( (((unsigned int)v10 >> 14) & 0x100) != 0 )
          v89 = (const lua_TValue *)(metatable + 16i64 * (unsigned __int8)v88);
        else
          v89 = &base[v88 & 0x1FF];
        v90 = (unsigned int)v10 >> 23;
        if ( (v90 & 0x100) != 0 )
          v91 = (const lua_TValue *)(metatable + 16i64 * (unsigned __int8)v90);
        else
          v91 = &base[v90];
        if ( luaV_lessthan(L, v91, v89) == (_DWORD)v13 )
          goto LABEL_149;
        ++ci->u.l.savedpc;
        base = ci->u.l.base;
        metatable = v145;
        v6.gc = v141.gc;
        continue;
      case 0x1Aui64:
        v92 = (unsigned int)v10 >> 14;
        if ( (((unsigned int)v10 >> 14) & 0x100) != 0 )
          v93 = (const lua_TValue *)(metatable + 16i64 * (unsigned __int8)v92);
        else
          v93 = &base[v92 & 0x1FF];
        v94 = (unsigned int)v10 >> 23;
        if ( (v94 & 0x100) != 0 )
          v95 = (const lua_TValue *)(metatable + 16i64 * (unsigned __int8)v94);
        else
          v95 = &base[v94];
        if ( luaV_lessequal(L, v95, v93) == (_DWORD)v13 )
        {
LABEL_149:
          v87 = *ci->u.l.savedpc;
          if ( (unsigned __int8)(v87 >> 6) )
            luaF_close(L, &ci->u.l.base[(unsigned __int8)(v87 >> 6) - 1]);
          base = ci->u.l.base;
          metatable = v145;
          v6.gc = v141.gc;
          ci->u.l.savedpc += (int)((v87 >> 14) - 131070);
        }
        else
        {
          ++ci->u.l.savedpc;
          base = ci->u.l.base;
          metatable = v145;
          v6.gc = v141.gc;
        }
        continue;
      case 0x1Bui64:
        v96 = v15->tt_;
        if ( (v10 & 0x7FC000) != 0 )
        {
          if ( !v96 || v96 == 1 && !v15->value_.b )
            goto LABEL_176;
          goto LABEL_182;
        }
        if ( !v96 || v96 == 1 && !v15->value_.b )
          goto LABEL_182;
        goto LABEL_176;
      case 0x1Cui64:
        v97 = &base[v10 >> 23];
        v98 = v97->tt_;
        if ( (v10 & 0x7FC000) != 0 )
        {
          if ( !v98 || v98 == 1 && !v97->value_.b )
          {
LABEL_176:
            ++ci->u.l.savedpc;
            continue;
          }
        }
        else if ( v98 )
        {
          if ( v98 != 1 )
            goto LABEL_176;
          if ( v97->value_.b )
          {
            ++ci->u.l.savedpc;
            continue;
          }
        }
        v15->value_.gc = v97->value_.gc;
        v15->tt_ = v97->tt_;
LABEL_182:
        v99 = *ci->u.l.savedpc;
        if ( (unsigned __int8)(v99 >> 6) )
          luaF_close(L, &ci->u.l.base[(unsigned __int8)(v99 >> 6) - 1]);
        metatable = v145;
        v6.gc = v141.gc;
        ci->u.l.savedpc += (int)((v99 >> 14) - 131070);
        continue;
      case 0x1Dui64:
        v100 = (unsigned int)v10 >> 23;
        v101 = (((unsigned int)v10 >> 14) & 0x1FF) - 1;
        if ( v100 )
          L->top = &v15[v100];
        if ( !(unsigned int)luaD_precall(L, &base[v14], v101) )
        {
          ci = L->ci;
          ci->callstatus |= 4u;
          goto $newframe;
        }
        if ( v101 < 0 )
        {
LABEL_27:
          base = ci->u.l.base;
          metatable = v145;
          v6.gc = v141.gc;
        }
        else
        {
          metatable = v145;
          v6.gc = v141.gc;
          L->top = ci->top;
          base = ci->u.l.base;
        }
        continue;
      case 0x1Eui64:
        v102 = (unsigned int)v10 >> 23;
        if ( v102 )
          L->top = &v15[v102];
        if ( (unsigned int)luaD_precall(L, &base[v14], -1) )
          goto LABEL_27;
        v103 = L->ci;
        func = v103->func;
        ci = v103->previous;
        v105 = ci->func;
        v106 = (unsigned __int64)&v103->u.l.base[LOBYTE(v103->func->value_.gc->u.uv.env[1].sizearray)];
        if ( SLODWORD(v141.gc->u.uv.env[1].node) > 0 )
          luaF_close(L, ci->u.l.base);
        v107 = 0;
        if ( (unsigned __int64)func < v106 )
        {
          v108 = &v105->tt_;
          v109 = (char *)func - (char *)v105;
          do
          {
            ++v107;
            *((_QWORD *)v108 - 1) = *(_QWORD *)((char *)v108 + v109 - 8);
            *v108 = *(int *)((char *)v108 + v109);
            v108 += 4;
          }
          while ( (unsigned __int64)&func[v107] < v106 );
        }
        ci->u.l.base = (lua_TValue *)((char *)v105 + (((char *)v103->u.l.base - (char *)func) & 0xFFFFFFFFFFFFFFF0ui64));
        v110 = (lua_TValue *)((char *)v105 + (((char *)L->top - (char *)func) & 0xFFFFFFFFFFFFFFF0ui64));
        L->top = v110;
        ci->top = v110;
        v111 = v103->u.l.savedpc;
        ci->callstatus |= 0x40u;
        ci->u.l.savedpc = v111;
        L->ci = ci;
        goto $newframe;
      case 0x1Fui64:
        v139 = (unsigned int)v10 >> 23;
        if ( v139 )
          L->top = &v15[v139 - 1];
        if ( SLODWORD(v6.gc->u.uv.env[1].node) > 0 )
          luaF_close(L, base);
        v140 = luaD_poscall(L, &base[v14]);
        if ( (ci->callstatus & 4) != 0 )
        {
          ci = L->ci;
          if ( v140 )
            L->top = ci->top;
          goto $newframe;
        }
        return;
      case 0x20ui64:
        v112 = 0;
        v113 = v15[1].value_.n;
        v114 = v15[2].value_.n + v15->value_.n;
        if ( v15[2].value_.n <= 0.0 )
          v115 = v114 < v113;
        else
          v115 = v113 < v114;
        LOBYTE(v112) = !v115;
        if ( v112 )
        {
          ci->u.l.savedpc += (int)(((unsigned int)v10 >> 14) - 0x1FFFF);
          v15->value_.n = v114;
          v15->tt_ = 3;
          v15[3].value_.n = v114;
          v15[3].tt_ = 3;
        }
        continue;
      case 0x21ui64:
        v116 = v15->tt_;
        if ( v116 != 3 )
        {
          if ( (v116 & 0xF) != 4
            || !luaO_str2d((const char *)&v15->value_.gc->th.l_G, v15->value_.gc->ts.tsv.len, &result) )
          {
            luaG_runerror(L, "'for' initial value must be a number");
          }
          v15->value_.n = result;
          v15->tt_ = 3;
        }
        v117 = v15[1].tt_;
        if ( v117 != 3 )
        {
          if ( (v117 & 0xF) != 4
            || !luaO_str2d((const char *)&v15[1].value_.gc->th.l_G, v15[1].value_.gc->ts.tsv.len, &v143) )
          {
            luaG_runerror(L, "'for' limit must be a number");
          }
          v15[1].value_.n = v143;
          v15[1].tt_ = 3;
        }
        v118 = v15[2].tt_;
        if ( v118 != 3 )
        {
          if ( (v118 & 0xF) != 4
            || !luaO_str2d((const char *)&v15[2].value_.gc->th.l_G, v15[2].value_.gc->ts.tsv.len, &v144) )
          {
            luaG_runerror(L, "'for' step must be a number");
          }
          v15[2].value_.n = v144;
          v15[2].tt_ = 3;
        }
        v119 = v15->value_.n - v15[2].value_.n;
        metatable = v145;
        v6.gc = v141.gc;
        v15->tt_ = 3;
        v15->value_.n = v119;
        ci->u.l.savedpc += (int)(((unsigned int)v10 >> 14) - 0x1FFFF);
        continue;
      case 0x22ui64:
        v15[5].value_.gc = v15[2].value_.gc;
        v15[5].tt_ = v15[2].tt_;
        v15[4].value_.gc = v15[1].value_.gc;
        v15[4].tt_ = v15[1].tt_;
        v15[3].value_.gc = v15->value_.gc;
        v15[3].tt_ = v15->tt_;
        L->top = v15 + 6;
        luaD_call(L, v15 + 3, ((unsigned int)v10 >> 14) & 0x1FF, 1);
        base = ci->u.l.base;
        L->top = ci->top;
        v120 = ci->u.l.savedpc;
        LODWORD(v10) = *v120;
        ci->u.l.savedpc = v120 + 1;
        v15 = &base[(unsigned __int8)((unsigned __int64)(unsigned int)v10 >> 6)];
        goto $l_tforloop;
      case 0x23ui64:
$l_tforloop:
        metatable = v145;
        v6.gc = v141.gc;
        if ( v15[1].tt_ )
        {
          v15->value_.gc = v15[1].value_.gc;
          v15->tt_ = v15[1].tt_;
          ci->u.l.savedpc += (int)(((unsigned int)v10 >> 14) - 0x1FFFF);
        }
        continue;
      case 0x24ui64:
        v121 = (unsigned int)v10 >> 23;
        v122 = ((unsigned int)v10 >> 14) & 0x1FF;
        if ( !((unsigned int)v10 >> 23) )
          v121 = L->top - v15 - 1;
        if ( !v122 )
        {
          v123 = ci->u.l.savedpc;
          v122 = *v123 >> 6;
          ci->u.l.savedpc = v123 + 1;
        }
        gc = v15->value_.gc;
        v125 = 50 * v122 + v121 - 50;
        if ( v125 > v15->value_.gc->h.sizearray )
        {
          if ( (char *)gc->u.uv.len == &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[9][192] )
            v126 = 0;
          else
            v126 = 1 << gc->h.lsizenode;
          luaH_resize(L, (Table *)v15->value_.gc, v125, v126);
        }
        v127 = v121;
        if ( v121 > 0 )
        {
          v128 = &v15[v121];
          do
          {
            luaH_setint(L, (Table *)gc, v125--, v128);
            if ( (v128->tt_ & 0x40) != 0 && (v128->value_.gc->gch.marked & 3) != 0 )
            {
              marked = gc->gch.marked;
              if ( (marked & 4) != 0 )
              {
                v130 = L->l_G;
                gc->gch.marked = marked & 0xFB;
                gc->h.gclist = v130->grayagain;
                v130->grayagain = gc;
              }
            }
            --v127;
            --v128;
          }
          while ( v127 > 0 );
        }
        metatable = v145;
        v6.gc = v141.gc;
        L->top = ci->top;
        continue;
      case 0x25ui64:
        v131 = (Proto *)*((_QWORD *)&v6.gc->u.uv.env->node->i_val.value_.gc + (v10 >> 14));
        v132 = _LN27_27(v131, v6.gc->cl.l.upvals, base);
        if ( v132 )
        {
          v15->value_.gc = (GCObject *)v132;
          v15->tt_ = 70;
        }
        else
        {
          pushclosure(L, v131, v133, base, &base[v14]);
        }
        if ( L->l_G->GCdebt <= 0 )
          goto LABEL_27;
        L->top = v15 + 1;
        luaC_step(L);
        metatable = v145;
        v6.gc = v141.gc;
        L->top = ci->top;
        base = ci->u.l.base;
        continue;
      case 0x26ui64:
        v134 = base - ci->func - LOBYTE(v6.gc->u.uv.env[1].sizearray) - 1;
        v135 = ((unsigned int)v10 >> 23) - 1;
        if ( v135 < 0 )
        {
          v135 = base - ci->func - LOBYTE(v6.gc->u.uv.env[1].sizearray) - 1;
          if ( L->stack_last - L->top <= v134 )
          {
            luaD_growstack(L, v134);
            v6.gc = v141.gc;
          }
          base = ci->u.l.base;
          v15 = &base[v14];
          L->top = &base[v14 + v134];
        }
        metatable = v145;
        v136 = 0i64;
        LODWORD(a4) = v135;
        if ( v135 > 0 )
        {
          v137 = &v15->tt_;
          v138 = (char *)&base[-v134] - (char *)v15;
          do
          {
            if ( v136 >= v134 )
            {
              *v137 = 0;
            }
            else
            {
              *((_QWORD *)v137 - 1) = *(_QWORD *)((char *)v137 + v138 - 8);
              *v137 = *(int *)((char *)v137 + v138);
            }
            ++v136;
            v137 += 4;
          }
          while ( v136 < v135 );
          metatable = v145;
        }
        continue;
      default:
        continue;
    }
  }
}

void __fastcall luaV_finishOp(lua_State *L)
{
  CallInfo *ci; // rsi
  lua_TValue *base; // r8
  unsigned __int64 v4; // rdi
  int v5; // edx
  lua_TValue *v6; // rax
  int tt; // ecx
  int v8; // er9
  lua_TValue *top; // rcx
  __int64 v10; // rdx
  lua_TValue *v11; // rdx
  __int64 v12; // rcx

  ci = L->ci;
  base = ci->u.l.base;
  v4 = *((unsigned int *)ci->u.l.savedpc - 1);
  v5 = *(ci->u.l.savedpc - 1) & 0x3F;
  switch ( v5 )
  {
    case 6:
    case 7:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 21:
      base[(unsigned __int8)((unsigned __int64)(unsigned int)v4 >> 6)] = *--L->top;
      return;
    case 22:
      top = L->top;
      top[-3] = top[-1];
      v10 = &top[-(v4 >> 23) - 2] - base;
      if ( (int)v10 > 1 )
      {
        L->top = top - 2;
        luaV_concat(L, v10);
      }
      v11 = L->top;
      v12 = (__int64)&ci->u.l.base[(unsigned __int8)((unsigned __int64)(unsigned int)v4 >> 6)];
      *(_QWORD *)v12 = v11[-1].value_.gc;
      *(_DWORD *)(v12 + 8) = v11[-1].tt_;
      goto $LN21_44;
    case 24:
    case 25:
    case 26:
      v6 = L->top;
      tt = v6[-1].tt_;
      v8 = tt && (tt != 1 || v6[-1].value_.b);
      L->top = v6 - 1;
      if ( v5 == 26 && !luaT_gettmbyobj(L, &base[v4 >> 23], TM_LE)->i_val.tt_ )
        v8 ^= 1u;
      if ( v8 != (unsigned __int8)((unsigned int)v4 >> 6) )
        ++ci->u.l.savedpc;
      return;
    case 29:
      if ( (v4 & 0x7FC000) >= 0x4000 )
        goto $LN21_44;
      return;
    case 34:
$LN21_44:
      L->top = ci->top;
      break;
    default:
      return;
  }
}

void __fastcall luaV_gettable(lua_State *L, const lua_TValue *t, lua_TValue *key, lua_TValue *val)
{
  lua_TValue *v4; // r15
  lua_TValue *v5; // r14
  int v8; // ebp
  int tt; // er10
  Value v10; // rdi
  unsigned __int64 len; // rdx
  char *v12; // rcx
  int v13; // eax
  Table *metatable; // rdx
  lua_TValue *top; // rdx
  signed __int64 v16; // r15
  lua_TValue *v17; // rcx
  lua_TValue *v18; // rcx
  lua_TValue *v19; // rdx
  lua_TValue *stack; // rcx

  v4 = val;
  v5 = key;
  v8 = 0;
  while ( 1 )
  {
    tt = t->tt_;
    if ( tt != 69 )
    {
      v13 = t->tt_ & 0xF;
      if ( v13 == 5 || v13 == 7 )
        metatable = t->value_.gc->u.uv.metatable;
      else
        metatable = L->l_G->mt[tt & 0xF];
      if ( metatable )
      {
        key = (lua_TValue *)L->l_G->tmname[0];
        v12 = (char *)&metatable->node[*(&key->tt_ + 1) & (unsigned __int64)((1 << metatable->lsizenode) - 1)];
        while ( *((_DWORD *)v12 + 6) != 68 || *((lua_TValue **)v12 + 2) != key )
        {
          v12 = (char *)*((_QWORD *)v12 + 4);
          if ( !v12 )
            goto LABEL_25;
        }
      }
      else
      {
LABEL_25:
        v12 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
      }
      if ( !*((_DWORD *)v12 + 2) )
        luaG_typeerror(L, t, "index");
      goto LABEL_27;
    }
    v10.gc = (GCObject *)t->value_;
    val = (lua_TValue *)luaH_get((Table *)t->value_.gc, v5);
    if ( val->tt_ || (len = v10.gc->ts.tsv.len) == 0 )
    {
LABEL_15:
      *v4 = *val;
      return;
    }
    if ( (*(_BYTE *)(len + 10) & 1) != 0 )
      goto LABEL_13;
    key = (lua_TValue *)L->l_G->tmname[0];
    v12 = (char *)(*(_QWORD *)(len + 32) + 40 * (*(&key->tt_ + 1) & (unsigned __int64)((1 << *(_BYTE *)(len + 11)) - 1)));
    while ( *((_DWORD *)v12 + 6) != 68 || *((lua_TValue **)v12 + 2) != key )
    {
      v12 = (char *)*((_QWORD *)v12 + 4);
      if ( !v12 )
      {
        v12 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
        break;
      }
    }
    if ( !*((_DWORD *)v12 + 2) )
    {
      *(_BYTE *)(len + 10) |= 1u;
LABEL_13:
      v12 = 0i64;
    }
    if ( !v12 )
      goto LABEL_15;
LABEL_27:
    if ( (v12[8] & 0xF) == 6 )
      break;
    ++v8;
    t = (const lua_TValue *)v12;
    if ( v8 >= 100 )
      luaG_runerror(L, "loop in gettable", key, val);
  }
  top = L->top;
  v16 = (char *)v4 - (char *)L->stack;
  L->top = top + 1;
  top->value_.gc = *(GCObject **)v12;
  top->tt_ = *((_DWORD *)v12 + 2);
  v17 = L->top;
  L->top = v17 + 1;
  v17->value_.gc = t->value_.gc;
  v17->tt_ = t->tt_;
  v18 = L->top;
  L->top = v18 + 1;
  v18->value_.gc = v5->value_.gc;
  v18->tt_ = v5->tt_;
  luaD_call(L, L->top - 3, 1i64, L->ci->callstatus & 1);
  v19 = --L->top;
  stack = L->stack;
  *(GCObject **)((char *)&stack->value_.gc + v16) = v19->value_.gc;
  *(int *)((char *)&stack->tt_ + v16) = v19->tt_;
}

__int64 __fastcall luaV_lessequal(lua_State *L, const lua_TValue *l, const lua_TValue *r)
{
  int tt; // eax
  lua_TValue *top; // rax
  int v9; // ecx
  lua_TValue *v10; // rax
  unsigned int v11; // ecx
  int v12; // edx

  tt = l->tt_;
  if ( tt == 3 && r->tt_ == 3 )
    return r->value_.n >= l->value_.n;
  if ( (tt & 0xF) == 4 && (r->tt_ & 0xF) == 4 )
    return l_strcmp((const TString *)l->value_.gc, (const TString *)r->value_.gc) <= 0;
  if ( (unsigned int)call_binTM(L, l, r, L->top, TM_LE) )
  {
    top = L->top;
    v9 = top->tt_;
    return v9 && (v9 != 1 || top->value_.b);
  }
  else
  {
    if ( !(unsigned int)call_binTM(L, r, l, L->top, TM_LT) )
      luaG_ordererror(L, l, r);
    v10 = L->top;
    v11 = 0;
    v12 = v10->tt_;
    if ( v12 && (v12 != 1 || v10->value_.b) )
    {
      LOBYTE(v11) = 0;
      return v11;
    }
    else
    {
      LOBYTE(v11) = 1;
      return v11;
    }
  }
}

_BOOL8 __fastcall luaV_lessthan(lua_State *L, const lua_TValue *l, const lua_TValue *r)
{
  int tt; // eax
  lua_TValue *top; // rax
  int v9; // ecx

  tt = l->tt_;
  if ( tt == 3 && r->tt_ == 3 )
    return r->value_.n > l->value_.n;
  if ( (tt & 0xF) == 4 && (r->tt_ & 0xF) == 4 )
    return l_strcmp((const TString *)l->value_.gc, (const TString *)r->value_.gc) < 0;
  if ( !(unsigned int)call_binTM(L, l, r, L->top, TM_LT) )
    luaG_ordererror(L, l, r);
  top = L->top;
  v9 = top->tt_;
  return v9 && (v9 != 1 || top->value_.b);
}

void __fastcall luaV_objlen(lua_State *L, lua_TValue *ra, const lua_TValue *rb)
{
  Node *v5; // r9
  const lua_TValue *v6; // r11
  Table *gc; // rsi
  Table *metatable; // rcx
  lua_TValue *top; // rcx
  signed __int64 v10; // rbx
  lua_TValue *v11; // rcx
  lua_TValue *v12; // rcx
  lua_TValue *v13; // rdx
  lua_TValue *stack; // rcx
  int v15; // eax
  signed __int64 len; // rcx
  float v17; // xmm0_4

  if ( (rb->tt_ & 0xF) == 4 )
  {
    len = rb->value_.gc->ts.tsv.len;
    v17 = (float)(int)len;
    if ( len < 0 )
      v17 = v17 + 1.8446744e19;
    ra->value_.n = v17;
    ra->tt_ = 3;
  }
  else
  {
    if ( (rb->tt_ & 0xF) != 5 )
    {
      v5 = luaT_gettmbyobj(L, rb, TM_LEN);
      if ( !v5->i_val.tt_ )
        luaG_typeerror(L, v6, "get length of");
LABEL_8:
      top = L->top;
      v10 = (char *)ra - (char *)L->stack;
      L->top = top + 1;
      top->value_.gc = v5->i_val.value_.gc;
      top->tt_ = v5->i_val.tt_;
      v11 = L->top;
      L->top = v11 + 1;
      v11->value_.gc = v6->value_.gc;
      v11->tt_ = v6->tt_;
      v12 = L->top;
      L->top = v12 + 1;
      v12->value_.gc = v6->value_.gc;
      v12->tt_ = v6->tt_;
      luaD_call(L, L->top - 3, 1i64, L->ci->callstatus & 1);
      v13 = --L->top;
      stack = L->stack;
      *(GCObject **)((char *)&stack->value_.gc + v10) = v13->value_.gc;
      *(int *)((char *)&stack->tt_ + v10) = v13->tt_;
      return;
    }
    gc = (Table *)rb->value_.gc;
    metatable = rb->value_.gc->u.uv.metatable;
    if ( metatable )
    {
      if ( (metatable->flags & 0x10) == 0 )
      {
        v5 = luaT_gettm(metatable, TM_LEN, L->l_G->tmname[4]);
        if ( v5 )
          goto LABEL_8;
      }
    }
    v15 = luaH_getn(gc);
    ra->tt_ = 3;
    ra->value_.n = (float)v15;
  }
}

void __fastcall luaV_settable(lua_State *L, const lua_TValue *t, lua_TValue *key, lua_TValue *val)
{
  lua_TValue *v4; // r15
  lua_TValue *v5; // r14
  int v8; // ebp
  int tt; // er10
  Table *gc; // rbx
  Table *v11; // rdx
  char *v12; // rcx
  unsigned __int8 marked; // al
  global_State *l_G; // rcx
  int v15; // eax
  Table *metatable; // rdx
  lua_TValue *top; // rdx
  lua_TValue *v18; // rcx
  lua_TValue *v19; // rcx
  lua_TValue *v20; // rcx

  v4 = val;
  v5 = key;
  v8 = 0;
  while ( 1 )
  {
    tt = t->tt_;
    if ( tt != 69 )
    {
      v15 = t->tt_ & 0xF;
      if ( v15 == 5 || v15 == 7 )
        metatable = t->value_.gc->u.uv.metatable;
      else
        metatable = L->l_G->mt[tt & 0xF];
      if ( metatable )
      {
        key = (lua_TValue *)L->l_G->tmname[1];
        v12 = (char *)&metatable->node[*(&key->tt_ + 1) & (unsigned __int64)((1 << metatable->lsizenode) - 1)];
        while ( *((_DWORD *)v12 + 6) != 68 || *((lua_TValue **)v12 + 2) != key )
        {
          v12 = (char *)*((_QWORD *)v12 + 4);
          if ( !v12 )
            goto LABEL_31;
        }
      }
      else
      {
LABEL_31:
        v12 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
      }
      if ( !*((_DWORD *)v12 + 2) )
        luaG_typeerror(L, t, "index");
      goto LABEL_33;
    }
    gc = (Table *)t->value_.gc;
    val = (lua_TValue *)luaH_get((Table *)t->value_.gc, v5);
    if ( val->tt_ )
      goto LABEL_17;
    v11 = gc->metatable;
    if ( !v11 )
      break;
    if ( (v11->flags & 2) != 0 )
      goto LABEL_13;
    key = (lua_TValue *)L->l_G->tmname[1];
    v12 = (char *)&v11->node[*(&key->tt_ + 1) & (unsigned __int64)((1 << v11->lsizenode) - 1)];
    while ( *((_DWORD *)v12 + 6) != 68 || *((lua_TValue **)v12 + 2) != key )
    {
      v12 = (char *)*((_QWORD *)v12 + 4);
      if ( !v12 )
      {
        v12 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
        break;
      }
    }
    if ( !*((_DWORD *)v12 + 2) )
    {
      v11->flags |= 2u;
LABEL_13:
      v12 = 0i64;
    }
    if ( !v12 )
      break;
LABEL_33:
    if ( (v12[8] & 0xF) == 6 )
    {
      top = L->top;
      L->top = top + 1;
      top->value_.gc = *(GCObject **)v12;
      top->tt_ = *((_DWORD *)v12 + 2);
      v18 = L->top;
      L->top = v18 + 1;
      v18->value_.gc = t->value_.gc;
      v18->tt_ = t->tt_;
      v19 = L->top;
      L->top = v19 + 1;
      v19->value_.gc = v5->value_.gc;
      v19->tt_ = v5->tt_;
      v20 = L->top;
      L->top = v20 + 1;
      v20->value_.gc = v4->value_.gc;
      v20->tt_ = v4->tt_;
      luaD_call(L, L->top - 4, 0i64, L->ci->callstatus & 1);
      return;
    }
    ++v8;
    t = (const lua_TValue *)v12;
    if ( v8 >= 100 )
      luaG_runerror(L, "loop in settable", key, val);
  }
  if ( val == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
    val = (lua_TValue *)luaH_newkey(L, gc, v5);
LABEL_17:
  *val = *v4;
  gc->flags = 0;
  if ( (v4->tt_ & 0x40) != 0 && (v4->value_.gc->gch.marked & 3) != 0 )
  {
    marked = gc->marked;
    if ( (marked & 4) != 0 )
    {
      l_G = L->l_G;
      gc->marked = marked & 0xFB;
      gc->gclist = l_G->grayagain;
      l_G->grayagain = (GCObject *)gc;
    }
  }
}

__int64 __fastcall luaV_tostring(lua_State *L, lua_TValue *obj)
{
  int v5; // eax
  size_t v6; // rbp
  GCObject *v7; // rdi
  unsigned int seed; // ebx
  char _Buffer[32]; // [rsp+30h] [rbp-48h] BYREF

  if ( obj->tt_ != 3 )
    return 0i64;
  v5 = sprintf(_Buffer, "%.7g", obj->value_.n);
  v6 = v5;
  if ( (unsigned __int64)v5 > 0x190 )
  {
    if ( (unsigned __int64)(v5 + 1i64) > 0xFFFFFFFFFFFFFFE5ui64 )
      luaG_runerror(L, "memory allocation error: block too big");
    seed = L->l_G->seed;
    v7 = luaC_newobj(L, 20, v5 + 25i64, 0i64);
    v7->ts.tsv.len = v6;
    v7->ts.tsv.hash = seed;
    v7->ts.tsv.extra = 0;
    memmove(&v7->th.l_G, _Buffer, v6);
    *((_BYTE *)&v7->th.l_G + v6) = 0;
  }
  else
  {
    v7 = internshrstr(L, _Buffer, v5);
  }
  obj->value_.gc = v7;
  obj->tt_ = v7->gch.tt | 0x40;
  return 1i64;
}

void __fastcall pushclosure(lua_State *L, Proto *p, UpVal **encup, lua_TValue *base, lua_TValue *ra)
{
  __int64 sizeupvalues; // rdi
  int v10; // ebx
  GCObject *v11; // rbp
  unsigned __int64 *v12; // rdx
  __int64 v13; // r14
  _QWORD *p_len; // rdi
  unsigned __int8 *p_idx; // rbx
  unsigned __int8 marked; // dl
  global_State *l_G; // rcx
  Upvaldesc *upvalues; // [rsp+68h] [rbp+10h]

  sizeupvalues = p->sizeupvalues;
  upvalues = p->upvalues;
  v10 = sizeupvalues;
  v11 = luaC_newobj(L, 6, 8 * (int)sizeupvalues + 32, 0i64);
  v11->u.uv.env = 0i64;
  v11->ts.tsv.extra = sizeupvalues;
  if ( (_DWORD)sizeupvalues )
  {
    v12 = &v11->u.uv.len + sizeupvalues;
    do
    {
      *--v12 = 0i64;
      --v10;
    }
    while ( v10 );
  }
  v13 = sizeupvalues;
  v11->u.uv.env = (Table *)p;
  ra->value_.gc = v11;
  ra->tt_ = 70;
  if ( (int)sizeupvalues > 0 )
  {
    p_len = &v11->u.uv.len;
    p_idx = &upvalues->idx;
    do
    {
      if ( *(p_idx - 1) )
        *p_len = luaF_findupval(L, &base[*p_idx]);
      else
        *p_len = encup[*p_idx];
      ++p_len;
      p_idx += 16;
      --v13;
    }
    while ( v13 );
  }
  marked = p->marked;
  if ( (marked & 4) != 0 )
  {
    l_G = L->l_G;
    if ( p->cache )
    {
      p->marked = marked & 0xFB;
      p->gclist = l_G->grayagain;
      l_G->grayagain = (GCObject *)p;
    }
    else if ( (v11->gch.marked & 3) != 0 )
    {
      if ( l_G->gcstate > 1u )
        p->marked = marked & 0xB8 | l_G->currentwhite & 3;
      else
        reallymarkobject(l_G, v11);
    }
  }
  p->cache = (Closure *)v11;
}

void __fastcall traceexec(lua_State *L)
{
  unsigned __int8 hookmask; // r14
  int v2; // esi
  CallInfo *ci; // rdi
  int v5; // ebp
  char callstatus; // al
  Table *env; // rax
  lua_TValue *array; // r10
  Node *lastfree; // rdx
  int v10; // er8
  const unsigned int *oldpc; // rax
  bool v12; // zf

  hookmask = L->hookmask;
  v2 = 0;
  ci = L->ci;
  if ( (hookmask & 8) == 0 || L->hookcount )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    L->hookcount = L->basehookcount;
  }
  callstatus = ci->callstatus;
  if ( callstatus >= 0 )
  {
    if ( v5 )
      luaD_hook(L, 3, -1);
    if ( (hookmask & 4) != 0 )
    {
      env = ci->func->value_.gc->u.uv.env;
      array = env->array;
      lastfree = env->lastfree;
      v10 = lastfree ? *(&lastfree->i_val.value_.b + (int)((((char *)ci->u.l.savedpc - (char *)array) >> 2) - 1)) : 0;
      if ( (unsigned int)(((char *)ci->u.l.savedpc - (char *)array) >> 2) == 1 )
        goto LABEL_19;
      oldpc = L->oldpc;
      if ( ci->u.l.savedpc <= oldpc )
        goto LABEL_19;
      if ( lastfree )
        v2 = *(&lastfree->i_val.value_.b + (int)((((char *)oldpc - (char *)array) >> 2) - 1));
      if ( v10 != v2 )
LABEL_19:
        luaD_hook(L, 2, v10);
    }
    v12 = L->status == 1;
    L->oldpc = ci->u.l.savedpc;
    if ( v12 )
    {
      if ( v5 )
        L->hookcount = 1;
      --ci->u.l.savedpc;
      ci->callstatus |= 0x80u;
      ci->func = L->top - 1;
      luaD_throw(L, 1);
    }
  }
  else
  {
    ci->callstatus = callstatus & 0x7F;
  }
}

