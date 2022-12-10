#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lapi.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lgc.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstate.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lauxlib.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lvm.c"

const luaL_Reg bitlib[52]; // 0x1408AFEA0
unsigned long andaux(lua_State * L); // 0x140288B40
long b_and(lua_State * L); // 0x140288C70
long b_test(lua_State * L); // 0x140288CC0
long b_or(lua_State * L); // 0x140288D00
long b_xor(lua_State * L); // 0x140288E60
long b_not(lua_State * L); // 0x140288FC0
long b_lshift(lua_State * L); // 0x140289010
long b_rshift(lua_State * L); // 0x1402890A0
long b_arshift(lua_State * L); // 0x140289130
long b_lrot(lua_State * L); // 0x140289220
long b_rrot(lua_State * L); // 0x140289290
long fieldargs(lua_State * L, long farg, long * width); // 0x140289300
long b_extract(lua_State * L); // 0x1402893C0
long b_replace(lua_State * L); // 0x140289440
long luaopen_bit32(lua_State * L); // 0x1402894F0//decompilation failure at 1408AFEA0!
__int64 __fastcall andaux(lua_State *L)
{
  unsigned int v1; // ebp
  int v2; // ebx
  signed __int64 v4; // rsi
  CallInfo *ci; // rdx
  lua_TValue *p_l_registry; // rcx
  lua_TValue *func; // rax
  int v8; // ecx
  int tt; // eax
  int v11[10]; // [rsp+20h] [rbp-28h] BYREF
  float result; // [rsp+50h] [rbp+8h] BYREF

  v1 = -1;
  v2 = 1;
  v4 = ((char *)L->top - (char *)L->ci->func - 16) >> 4;
  if ( (int)v4 >= 1 )
  {
    do
    {
      ci = L->ci;
      if ( v2 <= 0 )
      {
        if ( v2 <= -1001000 )
        {
          if ( v2 == -1001000 )
          {
            p_l_registry = &L->l_G->l_registry;
          }
          else
          {
            func = ci->func;
            v8 = -1001000 - v2;
            if ( ci->func->tt_ == 22 || v8 > func->value_.gc->ts.tsv.extra )
              p_l_registry = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
            else
              p_l_registry = (lua_TValue *)&(&func->value_.gc->th.top)[2 * v8];
          }
        }
        else
        {
          p_l_registry = &L->top[v2];
        }
      }
      else
      {
        p_l_registry = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
        if ( &ci->func[v2] < L->top )
          p_l_registry = &ci->func[v2];
      }
      tt = p_l_registry->tt_;
      if ( tt != 3 )
      {
        if ( (tt & 0xF) != 4
          || !luaO_str2d((const char *)&p_l_registry->value_.gc->th.l_G, p_l_registry->value_.gc->ts.tsv.len, &result) )
        {
          tag_error(L, v2, 3);
        }
        p_l_registry = (lua_TValue *)v11;
        *(float *)v11 = result;
        v11[2] = 3;
      }
      ++v2;
      v1 &= (int)p_l_registry->value_.n;
    }
    while ( v2 <= (int)v4 );
  }
  return v1;
}

__int64 __fastcall b_and(lua_State *L)
{
  float v2; // xmm0_4
  lua_TValue *top; // rax
  __int64 result; // rax

  v2 = (float)(int)andaux(L);
  top = L->top;
  top->value_.n = v2;
  top->tt_ = 3;
  result = 1i64;
  ++L->top;
  return result;
}

__int64 __fastcall b_arshift(lua_State *L)
{
  int v2; // ebx
  int v3; // eax
  signed int v4; // edx
  lua_TValue *v5; // rcx
  lua_TValue *v6; // rcx
  int v7; // eax
  int v8; // eax
  float v9; // xmm0_4
  int v10; // ebx
  lua_TValue *top; // rax

  v2 = luaL_checkinteger(L, 1);
  v3 = luaL_checkinteger(L, 2);
  if ( v3 < 0 || v2 >= 0 )
  {
    v7 = -v3;
    if ( v7 >= 0 )
    {
      if ( v7 >= 32 )
        goto LABEL_9;
      v10 = v2 << v7;
    }
    else
    {
      v8 = -v7;
      if ( v8 >= 32 )
      {
LABEL_9:
        v9 = (float)0;
LABEL_14:
        top = L->top;
        top->value_.n = v9;
        top->tt_ = 3;
        goto LABEL_15;
      }
      v10 = (unsigned int)v2 >> v8;
    }
    v9 = (float)v10;
    goto LABEL_14;
  }
  v4 = -1;
  if ( v3 >= 32 || (v4 = ~(0xFFFFFFFF >> v3) | ((unsigned int)v2 >> v3), (unsigned int)v4 > 0x7FFFFFFF) )
  {
    v6 = L->top;
    v6->tt_ = 3;
    v6->value_.n = (float)v4;
  }
  else
  {
    v5 = L->top;
    v5->tt_ = 3;
    v5->value_.n = (float)v4;
  }
LABEL_15:
  ++L->top;
  return 1i64;
}

__int64 __fastcall b_extract(lua_State *L)
{
  unsigned int v2; // ebx
  char v3; // al
  int v4; // edx
  lua_TValue *top; // rcx
  __int64 result; // rax
  int width; // [rsp+30h] [rbp+8h] BYREF

  v2 = luaL_checkinteger(L, 1);
  v3 = fieldargs(L, 2, &width);
  v4 = (v2 >> v3) & ~(-2 << (width - 1));
  top = L->top;
  result = 1i64;
  top->value_.n = (float)v4;
  top->tt_ = 3;
  ++L->top;
  return result;
}

__int64 __fastcall b_lrot(lua_State *L)
{
  char v2; // di
  int v3; // eax
  int v4; // edi
  float v5; // xmm0_4
  lua_TValue *top; // rcx
  __int64 result; // rax

  v2 = luaL_checkinteger(L, 2);
  v3 = luaL_checkinteger(L, 1);
  v4 = v2 & 0x1F;
  if ( v4 )
    v3 = __ROL4__(v3, v4);
  v5 = (float)v3;
  top = L->top;
  result = 1i64;
  top->value_.n = v5;
  top->tt_ = 3;
  ++L->top;
  return result;
}

__int64 __fastcall b_lshift(lua_State *L)
{
  int v2; // ebx
  unsigned int v3; // eax
  int v4; // ebx
  float v5; // xmm0_4
  int v6; // eax
  lua_TValue *top; // rcx
  __int64 result; // rax

  v2 = luaL_checkinteger(L, 2);
  v3 = luaL_checkinteger(L, 1);
  if ( v2 >= 0 )
  {
    if ( v2 >= 32 )
      goto LABEL_3;
    v6 = v3 << v2;
LABEL_7:
    v5 = (float)v6;
    goto LABEL_8;
  }
  v4 = -v2;
  if ( v4 < 32 )
  {
    v6 = v3 >> v4;
    goto LABEL_7;
  }
LABEL_3:
  v5 = (float)0;
LABEL_8:
  top = L->top;
  result = 1i64;
  top->value_.n = v5;
  top->tt_ = 3;
  ++L->top;
  return result;
}

__int64 __fastcall b_not(lua_State *L)
{
  float v2; // xmm0_4
  lua_TValue *top; // rcx
  __int64 result; // rax

  v2 = (float)(int)~(unsigned int)luaL_checkinteger(L, 1);
  top = L->top;
  result = 1i64;
  top->value_.n = v2;
  top->tt_ = 3;
  ++L->top;
  return result;
}

__int64 __fastcall b_or(lua_State *L)
{
  int v1; // esi
  int v2; // ebx
  signed __int64 v4; // rbp
  CallInfo *ci; // rdx
  lua_TValue *p_l_registry; // rcx
  lua_TValue *func; // rax
  int v8; // ecx
  int tt; // eax
  float v10; // xmm0_4
  lua_TValue *top; // rcx
  __int64 v12; // rax
  int v13[10]; // [rsp+20h] [rbp-28h] BYREF
  float result; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v2 = 1;
  v4 = ((char *)L->top - (char *)L->ci->func - 16) >> 4;
  if ( (int)v4 < 1 )
    goto LABEL_21;
  do
  {
    ci = L->ci;
    if ( v2 <= 0 )
    {
      if ( v2 <= -1001000 )
      {
        if ( v2 == -1001000 )
        {
          p_l_registry = &L->l_G->l_registry;
        }
        else
        {
          func = ci->func;
          v8 = -1001000 - v2;
          if ( ci->func->tt_ == 22 || v8 > func->value_.gc->ts.tsv.extra )
            p_l_registry = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
          else
            p_l_registry = (lua_TValue *)&(&func->value_.gc->th.top)[2 * v8];
        }
      }
      else
      {
        p_l_registry = &L->top[v2];
      }
    }
    else
    {
      p_l_registry = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
      if ( &ci->func[v2] < L->top )
        p_l_registry = &ci->func[v2];
    }
    tt = p_l_registry->tt_;
    if ( tt != 3 )
    {
      if ( (tt & 0xF) != 4
        || !luaO_str2d((const char *)&p_l_registry->value_.gc->th.l_G, p_l_registry->value_.gc->ts.tsv.len, &result) )
      {
        tag_error(L, v2, 3);
      }
      p_l_registry = (lua_TValue *)v13;
      *(float *)v13 = result;
      v13[2] = 3;
    }
    ++v2;
    v1 |= (int)p_l_registry->value_.n;
  }
  while ( v2 <= (int)v4 );
  if ( (unsigned int)v1 <= 0x7FFFFFFF )
LABEL_21:
    v10 = (float)v1;
  else
    v10 = (float)v1;
  top = L->top;
  v12 = 1i64;
  top->value_.n = v10;
  top->tt_ = 3;
  ++L->top;
  return v12;
}

__int64 __fastcall b_replace(lua_State *L)
{
  int v2; // edi
  int v3; // ebx
  char v4; // al
  int v5; // er8
  lua_TValue *top; // rcx
  __int64 result; // rax
  int width; // [rsp+30h] [rbp+8h] BYREF

  v2 = luaL_checkinteger(L, 1);
  v3 = luaL_checkinteger(L, 2);
  v4 = fieldargs(L, 3, &width);
  v5 = ((v3 & ~(-2 << (width - 1))) << v4) | v2 & ~(~(-2 << (width - 1)) << v4);
  top = L->top;
  result = 1i64;
  top->value_.n = (float)v5;
  top->tt_ = 3;
  ++L->top;
  return result;
}

__int64 __fastcall b_rrot(lua_State *L)
{
  int v2; // edi
  int v3; // eax
  int v4; // edi
  float v5; // xmm0_4
  lua_TValue *top; // rcx
  __int64 result; // rax

  v2 = -(int)luaL_checkinteger(L, 2);
  v3 = luaL_checkinteger(L, 1);
  v4 = v2 & 0x1F;
  if ( v4 )
    v3 = __ROL4__(v3, v4);
  v5 = (float)v3;
  top = L->top;
  result = 1i64;
  top->value_.n = v5;
  top->tt_ = 3;
  ++L->top;
  return result;
}

__int64 __fastcall b_rshift(lua_State *L)
{
  int v2; // ebx
  unsigned int v3; // eax
  int v4; // ebx
  int v5; // ebx
  float v6; // xmm0_4
  int v7; // eax
  lua_TValue *top; // rcx
  __int64 result; // rax

  v2 = luaL_checkinteger(L, 2);
  v3 = luaL_checkinteger(L, 1);
  v4 = -v2;
  if ( v4 >= 0 )
  {
    if ( v4 >= 32 )
      goto LABEL_3;
    v7 = v3 << v4;
LABEL_7:
    v6 = (float)v7;
    goto LABEL_8;
  }
  v5 = -v4;
  if ( v5 < 32 )
  {
    v7 = v3 >> v5;
    goto LABEL_7;
  }
LABEL_3:
  v6 = (float)0;
LABEL_8:
  top = L->top;
  result = 1i64;
  top->value_.n = v6;
  top->tt_ = 3;
  ++L->top;
  return result;
}

__int64 __fastcall b_test(lua_State *L)
{
  int v2; // eax
  lua_TValue *top; // r8
  bool v4; // zf
  __int64 result; // rax

  v2 = andaux(L);
  top = L->top;
  v4 = v2 == 0;
  result = 1i64;
  top->value_.b = !v4;
  top->tt_ = 1;
  ++L->top;
  return result;
}

__int64 __fastcall b_xor(lua_State *L)
{
  int v1; // esi
  int v2; // ebx
  signed __int64 v4; // rbp
  CallInfo *ci; // rdx
  lua_TValue *p_l_registry; // rcx
  lua_TValue *func; // rax
  int v8; // ecx
  int tt; // eax
  float v10; // xmm0_4
  lua_TValue *top; // rcx
  __int64 v12; // rax
  int v13[10]; // [rsp+20h] [rbp-28h] BYREF
  float result; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v2 = 1;
  v4 = ((char *)L->top - (char *)L->ci->func - 16) >> 4;
  if ( (int)v4 < 1 )
    goto LABEL_21;
  do
  {
    ci = L->ci;
    if ( v2 <= 0 )
    {
      if ( v2 <= -1001000 )
      {
        if ( v2 == -1001000 )
        {
          p_l_registry = &L->l_G->l_registry;
        }
        else
        {
          func = ci->func;
          v8 = -1001000 - v2;
          if ( ci->func->tt_ == 22 || v8 > func->value_.gc->ts.tsv.extra )
            p_l_registry = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
          else
            p_l_registry = (lua_TValue *)&(&func->value_.gc->th.top)[2 * v8];
        }
      }
      else
      {
        p_l_registry = &L->top[v2];
      }
    }
    else
    {
      p_l_registry = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
      if ( &ci->func[v2] < L->top )
        p_l_registry = &ci->func[v2];
    }
    tt = p_l_registry->tt_;
    if ( tt != 3 )
    {
      if ( (tt & 0xF) != 4
        || !luaO_str2d((const char *)&p_l_registry->value_.gc->th.l_G, p_l_registry->value_.gc->ts.tsv.len, &result) )
      {
        tag_error(L, v2, 3);
      }
      p_l_registry = (lua_TValue *)v13;
      *(float *)v13 = result;
      v13[2] = 3;
    }
    ++v2;
    v1 ^= (int)p_l_registry->value_.n;
  }
  while ( v2 <= (int)v4 );
  if ( (unsigned int)v1 <= 0x7FFFFFFF )
LABEL_21:
    v10 = (float)v1;
  else
    v10 = (float)v1;
  top = L->top;
  v12 = 1i64;
  top->value_.n = v10;
  top->tt_ = 3;
  ++L->top;
  return v12;
}

__int64 __fastcall fieldargs(lua_State *L, int farg, int *width)
{
  int v6; // edi
  const extension::gfxi_detail::TranslatorImpl *v7; // rax
  int v8; // ecx
  __int64 result; // rax

  v6 = luaL_checkinteger(L, farg);
  v7 = (const extension::gfxi_detail::TranslatorImpl *)index2addr(L, farg + 1);
  if ( v7 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (v7->RefCount & 0xF) == 0 )
  {
    v8 = 1;
  }
  else
  {
    v8 = luaL_checkinteger(L, farg + 1);
  }
  if ( v6 < 0 )
    luaL_argerror(L, farg, "field cannot be negative");
  if ( v8 <= 0 )
    luaL_argerror(L, farg + 1, "width must be positive");
  if ( v8 + v6 > 32 )
    luaL_error(L, "trying to access non-existent bits");
  result = (unsigned int)v6;
  *width = v8;
  return result;
}

__int64 __fastcall luaopen_bit32(lua_State *L)
{
  global_State *l_G; // rdx
  __int64 v3; // rax
  Table *v4; // rax
  lua_TValue *top; // rcx

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
  luaH_resize(L, v4, 0, 12);
  luaL_setfuncs(
    L,
    (const luaL_Reg *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[5][88],
    0);
  return 1i64;
}

