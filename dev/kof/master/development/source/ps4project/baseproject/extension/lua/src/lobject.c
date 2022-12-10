#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/ldo.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstring.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lmem.c"

float luaO_arith(long op, float v1, float v2); // 0x140295FB0
float lua_strx2number(const char * s, char * * endptr); // 0x1402960D0
long luaO_str2d(const char * s, unsigned long long len, float * result); // 0x1402962D0
const char * luaO_pushvfstring(lua_State * L, const char * fmt, char * argp); // 0x140296390
const char * luaO_pushfstring(lua_State * L, const char * fmt, ...); // 0x1402967E0
void luaO_chunkid(char * out, const char * source, unsigned long long bufflen); // 0x140296810double __fastcall luaO_arith(int op, double v1, float v2)
{
  double v3; // xmm6_8
  double result; // xmm0_8

  HIDWORD(v3) = HIDWORD(v1);
  switch ( op )
  {
    case 0:
      *(float *)&v3 = *(float *)&v1 + v2;
      result = v3;
      break;
    case 1:
      *(float *)&v3 = *(float *)&v1 - v2;
      result = v3;
      break;
    case 2:
      *(float *)&v3 = *(float *)&v1 * v2;
      result = v3;
      break;
    case 3:
      *(float *)&v3 = *(float *)&v1 / v2;
      result = v3;
      break;
    case 4:
      *(float *)&v3 = *(float *)&v1 - (float)(floorf(*(float *)&v1 / v2) * v2);
      result = v3;
      break;
    case 5:
      HIDWORD(result) = HIDWORD(v1);
      *(float *)&result = powf(*(float *)&v1, v2);
      break;
    case 6:
      *(_QWORD *)&result = *(_QWORD *)&v1 ^ _xmm;
      break;
    default:
      result = 0.0;
      break;
  }
  return result;
}

void __fastcall luaO_chunkid(char *out, const char *source, unsigned __int64 bufflen)
{
  size_t v5; // rbx
  char *v6; // rax
  char *v7; // rdi
  char *v8; // rdi
  char *v9; // rdi

  v5 = -1i64;
  do
    ++v5;
  while ( source[v5] );
  if ( *source != 61 )
  {
    if ( *source == 64 )
    {
      if ( v5 <= 0x3C )
        goto LABEL_5;
      qmemcpy(out, "...", 3);
      *(_OWORD *)(out + 3) = *(_OWORD *)&source[v5 - 56];
      *(_OWORD *)(out + 19) = *(_OWORD *)&source[v5 - 40];
      *(_OWORD *)(out + 35) = *(_OWORD *)&source[v5 - 24];
      *(_QWORD *)(out + 51) = *(_QWORD *)&source[v5 - 8];
      out[59] = source[v5];
      return;
    }
    v6 = strchr(source, 10);
    qmemcpy(out, "[string \"", 9);
    v7 = out + 9;
    if ( v5 >= 0x2D )
    {
      if ( !v6 )
      {
LABEL_15:
        if ( v5 > 0x2D )
          v5 = 45i64;
        memmove(v7, source, v5);
        v9 = &v7[v5];
        qmemcpy(v9, "...", 3);
        v8 = v9 + 3;
        goto LABEL_18;
      }
    }
    else if ( !v6 )
    {
      memmove(v7, source, v5);
      v8 = &v7[v5];
LABEL_18:
      strcpy(v8, "\"]");
      return;
    }
    v5 = v6 - source;
    goto LABEL_15;
  }
  if ( v5 <= 0x3C )
  {
LABEL_5:
    memmove(out, source + 1, v5);
    return;
  }
  *(_OWORD *)out = *(_OWORD *)(source + 1);
  *((_OWORD *)out + 1) = *(_OWORD *)(source + 17);
  *((_OWORD *)out + 2) = *(_OWORD *)(source + 33);
  *((_QWORD *)out + 6) = *(_QWORD *)(source + 49);
  *((_WORD *)out + 28) = *(_WORD *)(source + 57);
  *((_WORD *)out + 29) = *((unsigned __int8 *)source + 59);
}

const char *luaO_pushfstring(lua_State *L, const char *fmt, ...)
{
  va_list argp; // [rsp+40h] [rbp+18h] BYREF

  va_start(argp, fmt);
  return luaO_pushvfstring(L, fmt, argp);
}

global_State **__fastcall luaO_pushvfstring(lua_State *L, const char *fmt, char *argp)
{
  const char *v3; // rbp
  int v4; // er14
  unsigned __int64 v7; // rsi
  char *v8; // r13
  char *v9; // r12
  lua_TValue *top; // rcx
  int stacksize; // eax
  int v12; // eax
  int v13; // ecx
  lua_TValue *v14; // rbx
  TString *v15; // rax
  const char *v16; // rax
  const char *v17; // rdx
  unsigned __int64 v18; // r8
  lua_TValue *v19; // rbx
  TString *v20; // rax
  char v21; // al
  const char *v22; // rdx
  lua_TValue *v23; // rcx
  float v24; // xmm0_4
  lua_TValue *v25; // rcx
  float v26; // xmm0_4
  const void *v27; // r8
  int v28; // eax
  lua_TValue *v29; // r15
  size_t v30; // r14
  GCObject *v31; // rbp
  unsigned int seed; // ebx
  lua_TValue *v33; // rcx
  int v34; // eax
  int v35; // eax
  int v36; // ecx
  lua_TValue *v37; // rbx
  TString *v38; // rax
  char v40; // [rsp+30h] [rbp-78h] BYREF
  int v41; // [rsp+34h] [rbp-74h]
  char _Buffer[40]; // [rsp+38h] [rbp-70h] BYREF

  v3 = fmt;
  v4 = 0;
  v41 = 0;
  v7 = -1i64;
  v8 = strchr(fmt, 37);
  if ( v8 )
  {
    v9 = argp - 8;
    while ( 2 )
    {
      top = L->top;
      if ( (__int64)(((char *)L->stack_last - (char *)top) & 0xFFFFFFFFFFFFFFF0ui64) <= 32 )
      {
        stacksize = L->stacksize;
        if ( stacksize > 1000000 )
          luaD_throw(L, 6);
        v12 = 2 * stacksize;
        v13 = top - L->stack + 7;
        if ( v12 > 1000000 )
          v12 = 1000000;
        if ( v12 >= v13 )
          v13 = v12;
        if ( v13 > 1000000 )
        {
          luaD_reallocstack(L, 1000200);
          luaG_runerror(L, "stack overflow");
        }
        luaD_reallocstack(L, v13);
      }
      v14 = L->top;
      L->top = v14 + 1;
      v15 = luaS_newlstr(L, v3, v8 - v3);
      v14->value_.gc = (GCObject *)v15;
      v14->tt_ = v15->tsv.tt | 0x40;
      switch ( v8[1] )
      {
        case '%':
          v22 = "%";
          goto LABEL_25;
        case 'c':
          v21 = v9[8];
          v22 = &v40;
          v9 += 8;
          v40 = v21;
LABEL_25:
          v19 = L->top;
          L->top = v19 + 1;
          v20 = internshrstr(L, v22, 1ui64);
          goto LABEL_26;
        case 'd':
          v23 = L->top;
          v9 += 8;
          L->top = v23 + 1;
          v24 = (float)*(int *)v9;
          v23->tt_ = 3;
          v23->value_.n = v24;
          goto LABEL_27;
        case 'f':
          v25 = L->top;
          v9 += 8;
          L->top = v25 + 1;
          v26 = *(double *)v9;
          v25->tt_ = 3;
          v25->value_.n = v26;
          goto LABEL_27;
        case 'p':
          v27 = (const void *)*((_QWORD *)v9 + 1);
          v9 += 8;
          v28 = sprintf(_Buffer, "%p", v27);
          v29 = L->top;
          v30 = v28;
          L->top = v29 + 1;
          if ( (unsigned __int64)v28 > 0x190 )
          {
            if ( (unsigned __int64)(v28 + 1i64) > 0xFFFFFFFFFFFFFFE5ui64 )
              luaG_runerror(L, "memory allocation error: block too big");
            seed = L->l_G->seed;
            v31 = luaC_newobj(L, 20, v28 + 25i64, 0i64);
            v31->ts.tsv.len = v30;
            v31->ts.tsv.hash = seed;
            v31->ts.tsv.extra = 0;
            memmove(&v31->th.l_G, _Buffer, v30);
            *((_BYTE *)&v31->th.l_G + v30) = 0;
          }
          else
          {
            v31 = (GCObject *)internshrstr(L, _Buffer, v28);
          }
          v4 = v41;
          v29->value_.gc = v31;
          v29->tt_ = v31->gch.tt | 0x40;
          goto LABEL_27;
        case 's':
          v16 = (const char *)*((_QWORD *)v9 + 1);
          v17 = "(null)";
          v9 += 8;
          v18 = -1i64;
          if ( v16 )
            v17 = v16;
          do
            ++v18;
          while ( v17[v18] );
          v19 = L->top;
          L->top = v19 + 1;
          v20 = luaS_newlstr(L, v17, v18);
LABEL_26:
          v19->value_.gc = (GCObject *)v20;
          v19->tt_ = v20->tsv.tt | 0x40;
LABEL_27:
          v3 = v8 + 2;
          v4 += 2;
          v41 = v4;
          v8 = strchr(v8 + 2, 37);
          if ( !v8 )
            break;
          continue;
        default:
          luaG_runerror(L, "invalid option '%%%c' to 'lua_pushfstring'", (unsigned int)v8[1]);
      }
      break;
    }
  }
  v33 = L->top;
  if ( (__int64)(((char *)L->stack_last - (char *)v33) & 0xFFFFFFFFFFFFFFF0ui64) <= 16 )
  {
    v34 = L->stacksize;
    if ( v34 > 1000000 )
      luaD_throw(L, 6);
    v35 = 2 * v34;
    v36 = v33 - L->stack + 6;
    if ( v35 > 1000000 )
      v35 = 1000000;
    if ( v35 >= v36 )
      v36 = v35;
    if ( v36 > 1000000 )
    {
      luaD_reallocstack(L, 1000200);
      luaG_runerror(L, "stack overflow");
    }
    luaD_reallocstack(L, v36);
  }
  do
    ++v7;
  while ( v3[v7] );
  v37 = L->top;
  L->top = v37 + 1;
  v38 = luaS_newlstr(L, v3, v7);
  v37->value_.gc = (GCObject *)v38;
  v37->tt_ = v38->tsv.tt | 0x40;
  if ( v4 > 0 )
    luaV_concat(L, v4 + 1);
  return &L->top[-1].value_.gc->th.l_G;
}

_BOOL8 __fastcall luaO_str2d(const char *s, unsigned __int64 len, float *result)
{
  float v7; // xmm0_4
  char *v8; // rdx
  char *endptr; // [rsp+48h] [rbp+20h] BYREF

  if ( strpbrk(s, "nN") )
    return 0i64;
  v7 = strpbrk(s, "xX") ? lua_strx2number(s, &endptr) : strtof(s, &endptr);
  v8 = endptr;
  *result = v7;
  if ( v8 == s )
    return 0i64;
  for ( ;
        (extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[6][(unsigned __int8)*v8 + 153] & 8) != 0;
        endptr = v8 )
  {
    ++v8;
  }
  return v8 == &s[len];
}

float __fastcall lua_strx2number(const char *s, char **endptr)
{
  int v2; // er9
  const char *v4; // r8
  int v5; // er10
  int v6; // er11
  __int64 v7; // rax
  int v8; // ebx
  const char *v9; // r8
  int v10; // edi
  const char *v11; // rax
  __int64 v12; // rax
  char *v13; // r8
  float i; // xmm1_4
  int v15; // edx
  __int64 j; // rax
  int v17; // edx
  char *v18; // rcx
  int v19; // er10
  char v20; // al
  char *v21; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // eax

  v2 = 0;
  *endptr = (char *)s;
  v4 = s;
  v5 = 0;
  v6 = 0;
  if ( (extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[6][*(unsigned __int8 *)s + 153] & 8) != 0 )
  {
    do
      v7 = *(unsigned __int8 *)++v4;
    while ( (extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[6][v7 + 153] & 8) != 0 );
  }
  v8 = 1;
  if ( *v4 == 45 )
  {
    v9 = v4 + 1;
    v10 = 1;
  }
  else
  {
    v11 = v4 + 1;
    v10 = 0;
    if ( *v4 != 43 )
      v11 = v4;
    v9 = v11;
  }
  if ( *v9 != 48 || ((v9[1] - 88) & 0xDF) != 0 )
    return 0.0;
  v12 = *((unsigned __int8 *)v9 + 2);
  v13 = (char *)(v9 + 2);
  for ( i = 0.0;
        (extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[6][v12 + 153] & 0x10) != 0;
        i = (float)(i * 16.0) + (float)v15 )
  {
    if ( (extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[6][(unsigned __int8)v12 + 153] & 2) != 0 )
      v15 = (unsigned __int8)v12 - 48;
    else
      v15 = ((unsigned __int8)v12 | 0x20) - 87;
    v12 = (unsigned __int8)*++v13;
    ++v6;
  }
  if ( *v13 == 46 )
  {
    for ( j = (unsigned __int8)*++v13;
          (extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[6][j + 153] & 0x10) != 0;
          i = (float)(i * 16.0) + (float)v17 )
    {
      if ( (extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[6][(unsigned __int8)j + 153] & 2) != 0 )
        v17 = (unsigned __int8)j - 48;
      else
        v17 = ((unsigned __int8)j | 0x20) - 87;
      j = (unsigned __int8)*++v13;
      ++v5;
    }
  }
  v18 = v13;
  if ( !v6 && !v5 )
    return 0.0;
  *endptr = v13;
  v19 = -4 * v5;
  if ( ((*v13 - 80) & 0xDF) == 0 )
  {
    v20 = v13[1];
    v21 = v13 + 1;
    if ( v20 != 45 )
    {
      v8 = 0;
      if ( v20 != 43 )
        v21 = v18;
    }
    v22 = (unsigned __int8)v21[1];
    v13 = v21 + 1;
    if ( (extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[6][v22 + 153] & 2) == 0 )
      goto $ret;
    LOBYTE(v23) = *v13;
    do
    {
      ++v13;
      v2 = (char)v23 + 2 * (5 * v2 - 24);
      v23 = (unsigned __int8)*v13;
    }
    while ( (extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[6][v23 + 153] & 2) != 0 );
    v24 = -v2;
    if ( !v8 )
      v24 = v2;
    v19 += v24;
  }
  *endptr = v13;
$ret:
  if ( v10 )
    LODWORD(i) ^= _xmm;
  return ldexp(i, v19);
}

