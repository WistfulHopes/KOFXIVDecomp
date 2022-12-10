#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lapi.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lgc.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstate.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstring.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lauxlib.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lvm.c"

const luaL_Reg mathlib[112]; // 0x1408B0330
long math_abs(lua_State * L); // 0x140295180
long math_sin(lua_State * L); // 0x1402951D0
long math_sinh(lua_State * L); // 0x140295210
long math_cos(lua_State * L); // 0x140295250
long math_cosh(lua_State * L); // 0x140295290
long math_tan(lua_State * L); // 0x1402952D0
long math_tanh(lua_State * L); // 0x140295310
long math_asin(lua_State * L); // 0x140295350
long math_acos(lua_State * L); // 0x140295390
long math_atan(lua_State * L); // 0x1402953D0
long math_atan2(lua_State * L); // 0x140295410
long math_ceil(lua_State * L); // 0x140295470
long math_floor(lua_State * L); // 0x1402954B0
long math_fmod(lua_State * L); // 0x1402954F0
long math_modf(lua_State * L); // 0x140295550
long math_sqrt(lua_State * L); // 0x1402955B0
long math_pow(lua_State * L); // 0x1402955F0
long math_log(lua_State * L); // 0x140295650
long math_exp(lua_State * L); // 0x140295710
long math_deg(lua_State * L); // 0x140295750
long math_rad(lua_State * L); // 0x140295790
long math_frexp(lua_State * L); // 0x1402957D0
long math_ldexp(lua_State * L); // 0x140295840
long math_min(lua_State * L); // 0x1402958B0
long math_max(lua_State * L); // 0x140295A10
long math_random(lua_State * L); // 0x140295B70
long math_randomseed(lua_State * L); // 0x140295CC0
long luaopen_math(lua_State * L); // 0x140295CF0//decompilation failure at 1408B0330!
__int64 __fastcall luaopen_math(lua_State *L)
{
  global_State *l_G; // rdx
  __int64 v3; // rax
  Table *v4; // rax
  lua_TValue *top; // rcx
  lua_TValue *v6; // rax
  lua_TValue *v7; // rbx
  TString *v8; // rax
  lua_TValue *v9; // rax
  lua_TValue *v10; // rbx
  TString *v11; // rax

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
  v4 = luaH_new(L);
  top = L->top;
  top->value_.gc = (GCObject *)v4;
  top->tt_ = 69;
  ++L->top;
  luaH_resize(L, v4, 0, 27);
  luaL_setfuncs(
    L,
    (const luaL_Reg *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[9][232],
    0);
  v6 = L->top;
  v6->value_.b = 1078530011;
  v6->tt_ = 3;
  v7 = L->top;
  L->top = v7 + 2;
  v8 = luaS_newlstr(L, "pi", 2ui64);
  v7[1].value_.gc = (GCObject *)v8;
  v7[1].tt_ = v8->tsv.tt | 0x40;
  luaV_settable(L, v7 - 1, L->top - 1, L->top - 2);
  L->top -= 2;
  v9 = L->top;
  v9->value_.b = 2139095040;
  v9->tt_ = 3;
  v10 = L->top;
  L->top = v10 + 2;
  v11 = luaS_newlstr(L, "huge", 4ui64);
  v10[1].value_.gc = (GCObject *)v11;
  v10[1].tt_ = v11->tsv.tt | 0x40;
  luaV_settable(L, v10 - 1, L->top - 1, L->top - 2);
  L->top -= 2;
  return 1i64;
}

__int64 __fastcall math_abs(lua_State *L)
{
  float v2; // xmm0_4
  lua_TValue *top; // rdx
  __int64 result; // rax

  v2 = luaL_checknumber(L, 1);
  top = L->top;
  result = 1i64;
  top->tt_ = 3;
  top->value_.n = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v2) & _xmm);
  ++L->top;
  return result;
}

__int64 __fastcall math_acos(lua_State *L)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  lua_TValue *top; // rdx
  __int64 result; // rax

  v2 = luaL_checknumber(L, 1);
  v3 = acosf(v2);
  top = L->top;
  result = 1i64;
  top->value_.n = v3;
  top->tt_ = 3;
  ++L->top;
  return result;
}

__int64 __fastcall math_asin(lua_State *L)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  lua_TValue *top; // rdx
  __int64 result; // rax

  v2 = luaL_checknumber(L, 1);
  v3 = asinf(v2);
  top = L->top;
  result = 1i64;
  top->value_.n = v3;
  top->tt_ = 3;
  ++L->top;
  return result;
}

__int64 __fastcall math_atan(lua_State *L)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  lua_TValue *top; // rdx
  __int64 result; // rax

  v2 = luaL_checknumber(L, 1);
  v3 = atanf(v2);
  top = L->top;
  result = 1i64;
  top->value_.n = v3;
  top->tt_ = 3;
  ++L->top;
  return result;
}

__int64 __fastcall math_atan2(lua_State *L)
{
  float v2; // xmm6_4
  float v3; // xmm1_4
  float v4; // xmm0_4
  lua_TValue *top; // rcx
  __int64 result; // rax

  v2 = luaL_checknumber(L, 1);
  v3 = luaL_checknumber(L, 2);
  v4 = atan2f(v2, v3);
  top = L->top;
  result = 1i64;
  top->value_.n = v4;
  top->tt_ = 3;
  ++L->top;
  return result;
}

__int64 __fastcall math_ceil(lua_State *L)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  lua_TValue *top; // rdx
  __int64 result; // rax

  v2 = luaL_checknumber(L, 1);
  v3 = ceilf(v2);
  top = L->top;
  result = 1i64;
  top->value_.n = v3;
  top->tt_ = 3;
  ++L->top;
  return result;
}

__int64 __fastcall math_cos(lua_State *L)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  lua_TValue *top; // rdx
  __int64 result; // rax

  v2 = luaL_checknumber(L, 1);
  v3 = cosf(v2);
  top = L->top;
  result = 1i64;
  top->value_.n = v3;
  top->tt_ = 3;
  ++L->top;
  return result;
}

__int64 __fastcall math_cosh(lua_State *L)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  lua_TValue *top; // rdx
  __int64 result; // rax

  v2 = luaL_checknumber(L, 1);
  v3 = coshf(v2);
  top = L->top;
  result = 1i64;
  top->value_.n = v3;
  top->tt_ = 3;
  ++L->top;
  return result;
}

__int64 __fastcall math_deg(lua_State *L)
{
  float v2; // xmm0_4
  lua_TValue *top; // rdx
  __int64 result; // rax

  v2 = luaL_checknumber(L, 1);
  top = L->top;
  result = 1i64;
  top->tt_ = 3;
  top->value_.n = v2 / 0.017453292;
  ++L->top;
  return result;
}

__int64 __fastcall math_exp(lua_State *L)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  lua_TValue *top; // rdx
  __int64 result; // rax

  v2 = luaL_checknumber(L, 1);
  v3 = expf(v2);
  top = L->top;
  result = 1i64;
  top->value_.n = v3;
  top->tt_ = 3;
  ++L->top;
  return result;
}

__int64 __fastcall math_floor(lua_State *L)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  lua_TValue *top; // rdx
  __int64 result; // rax

  v2 = luaL_checknumber(L, 1);
  v3 = floorf(v2);
  top = L->top;
  result = 1i64;
  top->value_.n = v3;
  top->tt_ = 3;
  ++L->top;
  return result;
}

__int64 __fastcall math_fmod(lua_State *L)
{
  float v2; // xmm6_4
  float v3; // xmm1_4
  float v4; // xmm0_4
  lua_TValue *top; // rcx
  __int64 result; // rax

  v2 = luaL_checknumber(L, 1);
  v3 = luaL_checknumber(L, 2);
  v4 = fmodf(v2, v3);
  top = L->top;
  result = 1i64;
  top->value_.n = v4;
  top->tt_ = 3;
  ++L->top;
  return result;
}

__int64 __fastcall math_frexp(lua_State *L)
{
  float v2; // xmm0_4
  long double v3; // xmm0_8
  lua_TValue *top; // rax
  float v5; // xmm1_4
  lua_TValue *v6; // rax
  __int64 result; // rax
  int expptr; // [rsp+30h] [rbp+8h] BYREF

  v2 = luaL_checknumber(L, 1);
  v3 = frexp(v2, &expptr);
  top = L->top;
  v5 = v3;
  top->tt_ = 3;
  top->value_.n = v5;
  v6 = ++L->top;
  *(float *)&v3 = (float)expptr;
  v6->tt_ = 3;
  v6->value_.b = LODWORD(v3);
  result = 2i64;
  ++L->top;
  return result;
}

__int64 __fastcall math_ldexp(lua_State *L)
{
  float v2; // xmm6_4
  int v3; // eax
  long double v4; // xmm0_8
  lua_TValue *top; // rcx
  __int64 result; // rax
  float v7; // xmm1_4

  v2 = luaL_checknumber(L, 1);
  v3 = luaL_checkinteger(L, 2);
  v4 = ldexp(v2, v3);
  top = L->top;
  result = 1i64;
  v7 = v4;
  top->tt_ = 3;
  top->value_.n = v7;
  ++L->top;
  return result;
}

__int64 __fastcall math_log(lua_State *L)
{
  float v2; // xmm0_4
  float v3; // xmm6_4
  lua_TValue *v4; // rcx
  float v5; // xmm7_4
  float v6; // xmm0_4
  float v7; // xmm6_4
  float v8; // xmm6_4
  lua_TValue *top; // rcx
  __int64 result; // rax

  v2 = luaL_checknumber(L, 1);
  v3 = v2;
  v4 = L->ci->func + 2;
  if ( v4 >= L->top
    || v4 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (L->ci->func[2].tt_ & 0xF) == 0 )
  {
    v6 = logf(v2);
    goto LABEL_8;
  }
  v5 = luaL_checknumber(L, 2);
  if ( v5 == 10.0 )
  {
    v6 = log10f(v3);
LABEL_8:
    v8 = v6;
    goto LABEL_9;
  }
  v7 = logf(v3);
  v8 = v7 / logf(v5);
LABEL_9:
  top = L->top;
  result = 1i64;
  top->value_.n = v8;
  top->tt_ = 3;
  ++L->top;
  return result;
}

__int64 __fastcall math_max(lua_State *L)
{
  signed __int64 v2; // rsi
  int v3; // ebx
  float i; // xmm6_4
  CallInfo *ci; // rdx
  lua_TValue *p_l_registry; // rcx
  lua_TValue *func; // rax
  int v8; // ecx
  int tt; // eax
  lua_TValue *top; // rcx
  __int64 v11; // rax
  int v12[4]; // [rsp+20h] [rbp-28h] BYREF
  float result; // [rsp+50h] [rbp+8h] BYREF

  v2 = ((char *)L->top - (char *)L->ci->func - 16) >> 4;
  v3 = 2;
  for ( i = luaL_checknumber(L, 1); v3 <= (int)v2; i = fmaxf(p_l_registry->value_.n, i) )
  {
    ci = L->ci;
    if ( v3 <= 0 )
    {
      if ( v3 <= -1001000 )
      {
        if ( v3 == -1001000 )
        {
          p_l_registry = &L->l_G->l_registry;
        }
        else
        {
          func = ci->func;
          v8 = -1001000 - v3;
          if ( ci->func->tt_ == 22 || v8 > func->value_.gc->ts.tsv.extra )
            p_l_registry = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
          else
            p_l_registry = (lua_TValue *)&(&func->value_.gc->th.top)[2 * v8];
        }
      }
      else
      {
        p_l_registry = &L->top[v3];
      }
    }
    else
    {
      p_l_registry = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
      if ( &ci->func[v3] < L->top )
        p_l_registry = &ci->func[v3];
    }
    tt = p_l_registry->tt_;
    if ( tt != 3 )
    {
      if ( (tt & 0xF) != 4
        || !luaO_str2d((const char *)&p_l_registry->value_.gc->th.l_G, p_l_registry->value_.gc->ts.tsv.len, &result) )
      {
        tag_error(L, v3, 3);
      }
      p_l_registry = (lua_TValue *)v12;
      *(float *)v12 = result;
      v12[2] = 3;
    }
    ++v3;
  }
  top = L->top;
  v11 = 1i64;
  top->value_.n = i;
  top->tt_ = 3;
  ++L->top;
  return v11;
}

__int64 __fastcall math_min(lua_State *L)
{
  signed __int64 v2; // rsi
  int v3; // ebx
  float i; // xmm6_4
  CallInfo *ci; // rdx
  lua_TValue *p_l_registry; // rcx
  lua_TValue *func; // rax
  int v8; // ecx
  int tt; // eax
  lua_TValue *top; // rcx
  __int64 v11; // rax
  int v12[4]; // [rsp+20h] [rbp-28h] BYREF
  float result; // [rsp+50h] [rbp+8h] BYREF

  v2 = ((char *)L->top - (char *)L->ci->func - 16) >> 4;
  v3 = 2;
  for ( i = luaL_checknumber(L, 1); v3 <= (int)v2; i = fminf(p_l_registry->value_.n, i) )
  {
    ci = L->ci;
    if ( v3 <= 0 )
    {
      if ( v3 <= -1001000 )
      {
        if ( v3 == -1001000 )
        {
          p_l_registry = &L->l_G->l_registry;
        }
        else
        {
          func = ci->func;
          v8 = -1001000 - v3;
          if ( ci->func->tt_ == 22 || v8 > func->value_.gc->ts.tsv.extra )
            p_l_registry = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
          else
            p_l_registry = (lua_TValue *)&(&func->value_.gc->th.top)[2 * v8];
        }
      }
      else
      {
        p_l_registry = &L->top[v3];
      }
    }
    else
    {
      p_l_registry = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
      if ( &ci->func[v3] < L->top )
        p_l_registry = &ci->func[v3];
    }
    tt = p_l_registry->tt_;
    if ( tt != 3 )
    {
      if ( (tt & 0xF) != 4
        || !luaO_str2d((const char *)&p_l_registry->value_.gc->th.l_G, p_l_registry->value_.gc->ts.tsv.len, &result) )
      {
        tag_error(L, v3, 3);
      }
      p_l_registry = (lua_TValue *)v12;
      *(float *)v12 = result;
      v12[2] = 3;
    }
    ++v3;
  }
  top = L->top;
  v11 = 1i64;
  top->value_.n = i;
  top->tt_ = 3;
  ++L->top;
  return v11;
}

__int64 __fastcall math_modf(lua_State *L)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  lua_TValue *top; // rax
  lua_TValue *v5; // rax
  __int64 result; // rax
  float iptr; // [rsp+30h] [rbp+8h] BYREF

  v2 = luaL_checknumber(L, 1);
  v3 = modff(v2, &iptr);
  top = L->top;
  top->value_.n = iptr;
  top->tt_ = 3;
  v5 = ++L->top;
  v5->value_.n = v3;
  v5->tt_ = 3;
  result = 2i64;
  ++L->top;
  return result;
}

__int64 __fastcall math_pow(lua_State *L)
{
  float v2; // xmm6_4
  float v3; // xmm1_4
  float v4; // xmm0_4
  lua_TValue *top; // rcx
  __int64 result; // rax

  v2 = luaL_checknumber(L, 1);
  v3 = luaL_checknumber(L, 2);
  v4 = powf(v2, v3);
  top = L->top;
  result = 1i64;
  top->value_.n = v4;
  top->tt_ = 3;
  ++L->top;
  return result;
}

__int64 __fastcall math_rad(lua_State *L)
{
  float v2; // xmm0_4
  lua_TValue *top; // rdx
  __int64 result; // rax

  v2 = luaL_checknumber(L, 1);
  top = L->top;
  result = 1i64;
  top->tt_ = 3;
  top->value_.n = v2 * 0.017453292;
  ++L->top;
  return result;
}

__int64 __fastcall math_random(lua_State *L)
{
  int v2; // er9
  lua_TValue *top; // rdx
  signed __int64 v4; // rcx
  float v5; // xmm6_4
  int v6; // ecx
  float v7; // xmm7_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  lua_TValue *v10; // rbx

  v2 = rand();
  top = L->top;
  v4 = ((char *)top - (char *)L->ci->func - 16) >> 4;
  v5 = (float)(v2 % 0x7FFF) / 32767.0;
  if ( (_DWORD)v4 )
  {
    v6 = v4 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        luaL_error(L, "wrong number of arguments");
      v7 = luaL_checknumber(L, 1);
      v8 = luaL_checknumber(L, 2);
      if ( v8 < v7 )
        luaL_argerror(L, 2, "interval is empty");
      v9 = (float)(v8 - v7) + 1.0;
    }
    else
    {
      v9 = luaL_checknumber(L, 1);
      v7 = *(float *)&FLOAT_1_0;
      if ( v9 < 1.0 )
        luaL_argerror(L, 1, "interval is empty");
    }
    v10 = L->top;
    v10->value_.n = floorf(v9 * v5) + v7;
    v10->tt_ = 3;
  }
  else
  {
    top->value_.n = v5;
    top->tt_ = 3;
  }
  ++L->top;
  return 1i64;
}

__int64 __fastcall math_randomseed(lua_State *L)
{
  unsigned int v1; // eax

  v1 = luaL_checkinteger(L, 1);
  srand(v1);
  rand();
  return 0i64;
}

__int64 __fastcall math_sin(lua_State *L)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  lua_TValue *top; // rdx
  __int64 result; // rax

  v2 = luaL_checknumber(L, 1);
  v3 = sinf(v2);
  top = L->top;
  result = 1i64;
  top->value_.n = v3;
  top->tt_ = 3;
  ++L->top;
  return result;
}

__int64 __fastcall math_sinh(lua_State *L)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  lua_TValue *top; // rdx
  __int64 result; // rax

  v2 = luaL_checknumber(L, 1);
  v3 = sinhf(v2);
  top = L->top;
  result = 1i64;
  top->value_.n = v3;
  top->tt_ = 3;
  ++L->top;
  return result;
}

__int64 __fastcall math_sqrt(lua_State *L)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  lua_TValue *top; // rdx
  __int64 result; // rax

  v2 = luaL_checknumber(L, 1);
  v3 = sqrtf(v2);
  top = L->top;
  result = 1i64;
  top->value_.n = v3;
  top->tt_ = 3;
  ++L->top;
  return result;
}

__int64 __fastcall math_tan(lua_State *L)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  lua_TValue *top; // rdx
  __int64 result; // rax

  v2 = luaL_checknumber(L, 1);
  v3 = tanf(v2);
  top = L->top;
  result = 1i64;
  top->value_.n = v3;
  top->tt_ = 3;
  ++L->top;
  return result;
}

__int64 __fastcall math_tanh(lua_State *L)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  lua_TValue *top; // rdx
  __int64 result; // rax

  v2 = luaL_checknumber(L, 1);
  v3 = tanhf(v2);
  top = L->top;
  result = 1i64;
  top->value_.n = v3;
  top->tt_ = 3;
  ++L->top;
  return result;
}

