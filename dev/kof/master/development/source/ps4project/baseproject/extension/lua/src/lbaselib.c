#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lapi.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lgc.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/ldo.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstate.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lauxlib.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstring.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lvm.c"

const luaL_Reg base_funcs[92]; // 0x1408AFCD0
long luaB_print(lua_State * L); // 0x140286CA0
long luaB_tonumber(lua_State * L); // 0x140286F40
long luaB_error(lua_State * L); // 0x140287190
long luaB_getmetatable(lua_State * L); // 0x1402872B0
long luaB_setmetatable(lua_State * L); // 0x140287380
long luaB_rawequal(lua_State * L); // 0x140287480
long luaB_rawlen(lua_State * L); // 0x140287570
long luaB_rawget(lua_State * L); // 0x140287630
long luaB_rawset(lua_State * L); // 0x140287720
long luaB_collectgarbage(lua_State * L); // 0x140287810
long luaB_type(lua_State * L); // 0x140287950
long pairsmeta(lua_State * L, const char * method, long iszero, long(*iter)(lua_State *)); // 0x1402879D0
long luaB_next(lua_State * L); // 0x140287B60
long luaB_pairs(lua_State * L); // 0x140287C50
long ipairsaux(lua_State * L); // 0x140287C70
long luaB_ipairs(lua_State * L); // 0x140287D20
long load_aux(lua_State * L, long status, long envidx); // 0x140287D40
long luaB_loadfile(lua_State * L); // 0x140287EB0
const char * generic_reader(lua_State * L, void * ud, unsigned long long * size); // 0x140287FD0
long luaB_load(lua_State * L); // 0x140288160
long dofilecont(lua_State * L); // 0x140288380
long luaB_dofile(lua_State * L); // 0x1402883A0
long luaB_assert(lua_State * L); // 0x140288480
long luaB_select(lua_State * L); // 0x140288530
long finishpcall(lua_State * L, long status); // 0x140288680
long pcallcont(lua_State * L); // 0x140288760
long luaB_pcall(lua_State * L); // 0x140288790
long luaB_xpcall(lua_State * L); // 0x140288890
long luaB_tostring(lua_State * L); // 0x140288990
long luaopen_base(lua_State * L); // 0x1402889F0//decompilation failure at 1408AFCD0!
__int64 __fastcall dofilecont(lua_State *L)
{
  return (unsigned int)(((char *)L->top - (char *)L->ci->func - 16) >> 4) - 1;
}

signed __int64 __fastcall finishpcall(lua_State *L, int status)
{
  BOOL v4; // eax
  int v5; // edx
  lua_TValue *i; // rcx
  lua_TValue *top; // rax
  lua_TValue *v9; // rdx
  lua_TValue *v10; // r8

  v4 = lua_checkstack(L, 1);
  v5 = 0;
  if ( v4 )
  {
    top = L->top;
    LOBYTE(v5) = status != 0;
    top->value_.b = v5;
    v9 = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
    top->tt_ = 1;
    v10 = ++L->top;
    if ( &L->ci->func[1] < v10 )
      v9 = L->ci->func + 1;
    v9->value_.gc = v10[-1].value_.gc;
    v9->tt_ = v10[-1].tt_;
    --L->top;
    return ((char *)L->top - (char *)L->ci->func - 16) >> 4;
  }
  else
  {
    for ( i = L->ci->func + 1; L->top < i; ++L->top )
      L->top->tt_ = 0;
    L->top = i;
    i->value_.b = 0;
    i->tt_ = 1;
    ++L->top;
    lua_pushstring(L, "stack overflow");
    return 2i64;
  }
}

global_State **__fastcall generic_reader(lua_State *L, void *ud, unsigned __int64 *size)
{
  CallInfo *ci; // rax
  lua_TValue *top; // r8
  lua_TValue *v7; // rdi
  char *v8; // rcx
  lua_TValue *v9; // rax
  lua_TValue *v10; // rdx
  unsigned __int16 nCcalls; // ax
  lua_TValue *v12; // r8
  lua_TValue *v13; // rdx
  global_State **result; // rax

  if ( !lua_checkstack(L, 22) )
    luaL_error(L, "stack overflow (%s)", "too many nested functions");
  ci = L->ci;
  top = L->top;
  v7 = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  v8 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  if ( &ci->func[1] < top )
    v8 = (char *)&ci->func[1];
  top->value_.gc = *(GCObject **)v8;
  top->tt_ = *((_DWORD *)v8 + 2);
  v9 = ++L->top;
  ++L->nCcalls;
  v10 = v9 - 1;
  nCcalls = L->nCcalls;
  if ( nCcalls >= 0xC8u )
  {
    if ( nCcalls == 200 )
      luaG_runerror(L, "C stack overflow");
    if ( nCcalls >= 0xE1u )
      luaD_throw(L, 6);
  }
  ++L->nny;
  if ( !luaD_precall(L, v10, 1) )
    luaV_execute(L);
  v12 = L->top;
  --L->nny;
  --L->nCcalls;
  v13 = v12 - 1;
  if ( &v12[-1] == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
    goto LABEL_20;
  if ( (v13->tt_ & 0xF) == 0 )
  {
    result = 0i64;
    L->top = v13;
    *size = 0i64;
    return result;
  }
  if ( v13 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (v13->tt_ & 0xFu) - 3 > 1 )
  {
LABEL_20:
    luaL_error(L, "reader function must return a string");
  }
  if ( &L->ci->func[5] < v12 )
    v7 = L->ci->func + 5;
  v7->value_.gc = v13->value_.gc;
  v7->tt_ = v13->tt_;
  --L->top;
  return lua_tolstring(L, 5, size);
}

__int64 __fastcall ipairsaux(lua_State *L)
{
  int v2; // er8
  lua_TValue *top; // rdx
  const extension::gfxi_detail::TranslatorImpl *v4; // rcx
  int v5; // er8
  const extension::gfxi_detail::TranslatorImpl *v6; // rax
  int v7; // ecx

  v2 = luaL_checkinteger(L, 2);
  top = L->top;
  v4 = (const extension::gfxi_detail::TranslatorImpl *)&L->ci->func[1];
  if ( v4 >= (const extension::gfxi_detail::TranslatorImpl *)top
    || v4 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (L->ci->func[1].tt_ & 0xF) != 5 )
  {
    tag_error(L, 1, 5);
  }
  top->tt_ = 3;
  v5 = v2 + 1;
  top->value_.n = (float)v5;
  ++L->top;
  lua_rawgeti(L, 1, v5);
  v6 = (const extension::gfxi_detail::TranslatorImpl *)&L->top[-1];
  if ( v6 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
    v7 = -1;
  else
    v7 = v6->RefCount & 0xF;
  return (unsigned int)(v7 != 0) + 1;
}

__int64 __fastcall load_aux(lua_State *L, int status, int envidx)
{
  lua_TValue *v3; // rax
  __int64 v4; // r10
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  GCObject *v14; // rcx
  char v15; // r8
  __int64 v16; // rax
  lua_TValue *v18; // rax
  lua_TValue *i; // r8

  if ( !status )
  {
    if ( !envidx )
      return 1i64;
    v3 = index2addr(L, envidx);
    *(lua_TValue *)*(_QWORD *)(v4 + 16) = *v3;
    *(_QWORD *)(v4 + 16) += 16i64;
    v5 = *(_QWORD *)(v4 + 16);
    v6 = *(_DWORD *)(v5 - 24) & 0x3F;
    if ( v6 == 6 )
    {
      v9 = *(_QWORD *)(v5 - 32);
      v10 = *(_QWORD *)(v9 + 24);
      if ( *(int *)(v10 + 80) >= 1 )
      {
        v7 = *(_QWORD *)(v9 + 32);
        v11 = **(_QWORD **)(v10 + 56);
        v8 = *(_QWORD *)(v7 + 16);
        if ( !v11 || v11 != -24 )
        {
LABEL_10:
          v12 = v5 - 16;
          *(_QWORD *)(v4 + 16) = v12;
          *(_QWORD *)v8 = *(_QWORD *)v12;
          *(_DWORD *)(v8 + 8) = *(_DWORD *)(v12 + 8);
          v13 = *(_QWORD *)(v4 + 16);
          if ( (*(_BYTE *)(v13 + 8) & 0x40) != 0 )
          {
            v14 = *(GCObject **)v13;
            if ( (v14->gch.marked & 3) != 0 )
            {
              v15 = *(_BYTE *)(v7 + 9);
              if ( (v15 & 4) != 0 )
              {
                v16 = *(_QWORD *)(v4 + 24);
                if ( *(_BYTE *)(v16 + 85) > 1u )
                  *(_BYTE *)(v7 + 9) = v15 & 0xB8 | *(_BYTE *)(v16 + 84) & 3;
                else
                  reallymarkobject(*(global_State **)(v4 + 24), v14);
                return 1i64;
              }
            }
          }
          return 1i64;
        }
      }
    }
    else if ( v6 == 38 )
    {
      v7 = *(_QWORD *)(v5 - 32);
      if ( *(_BYTE *)(v7 + 10) )
      {
        v8 = v7 + 32;
        goto LABEL_10;
      }
    }
    *(_QWORD *)(v4 + 16) = v5 - 16;
    return 1i64;
  }
  L->top->tt_ = 0;
  v18 = ++L->top;
  for ( i = v18 - 2; v18 > i; --v18 )
  {
    v18->value_.gc = v18[-1].value_.gc;
    v18->tt_ = v18[-1].tt_;
  }
  *i = *L->top;
  return 2i64;
}

__int64 __fastcall luaB_assert(lua_State *L)
{
  CallInfo *ci; // rcx
  char *v3; // r8
  lua_TValue *top; // rdx
  int v5; // eax
  const extension::gfxi_detail::TranslatorImpl *v7; // rax
  const char *v8; // rax

  ci = L->ci;
  v3 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  top = L->top;
  if ( &ci->func[1] < top )
    v3 = (char *)&ci->func[1];
  v5 = *((_DWORD *)v3 + 2);
  if ( !v5 || v5 == 1 && !*(_DWORD *)v3 )
  {
    v7 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[2];
    if ( v7 >= (const extension::gfxi_detail::TranslatorImpl *)top
      || v7 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
      || (ci->func[2].tt_ & 0xF) == 0 )
    {
      v8 = "assertion failed!";
    }
    else
    {
      v8 = (const char *)lua_tolstring(L, 2, 0i64);
      if ( !v8 )
        tag_error(L, 2, 4);
    }
    luaL_error(L, "%s", v8);
  }
  return ((char *)top - (char *)ci->func - 16) >> 4;
}

__int64 __fastcall luaB_collectgarbage(lua_State *L, int a2, const char *a3, const char *const *a4)
{
  int v5; // ebp
  unsigned int v6; // edi
  lua_TValue *v7; // rcx
  int v8; // eax
  int v9; // esi
  lua_TValue *v10; // rax
  __int64 result; // rax
  unsigned int v12; // eax
  lua_TValue *top; // rcx
  __m128i v14; // xmm2
  float v15; // xmm1_4
  lua_TValue *v16; // rcx

  v5 = 0;
  v6 = *(_DWORD *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[3][4
                                                                                              * (int)luaL_checkoption(L, a2, a3, a4)
                                                                                              + 88];
  v7 = L->ci->func + 2;
  if ( v7 >= L->top
    || v7 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (L->ci->func[2].tt_ & 0xF) == 0 )
  {
    v8 = 0;
  }
  else
  {
    v8 = luaL_checkinteger(L, 2);
  }
  if ( v6 > 0xB )
    v9 = -1;
  else
    v9 = lua_gc(L, v8, 0, (__int64)L->l_G, v6);
  if ( v6 == 3 )
  {
    v12 = lua_gc(L, 0, 0, (__int64)L->l_G, 4);
    top = L->top;
    top->tt_ = 3;
    v14 = _mm_cvtsi32_si128(v12);
    result = 2i64;
    v15 = _mm_cvtepi32_ps(v14).m128_f32[0];
    top->value_.n = (float)(v15 * 0.0009765625) + (float)v9;
    v16 = ++L->top;
    v16->value_.n = v15;
    v16->tt_ = 3;
  }
  else
  {
    v10 = L->top;
    if ( ((v6 - 5) & 0xFFFFFFFB) != 0 )
    {
      v10->tt_ = 3;
      v10->value_.n = (float)v9;
    }
    else
    {
      v10->tt_ = 1;
      LOBYTE(v5) = v9 != 0;
      v10->value_.b = v5;
    }
    result = 1i64;
  }
  ++L->top;
  return result;
}

__int64 __fastcall luaB_dofile(lua_State *L)
{
  lua_TValue *v2; // rcx
  global_State **v3; // rdx
  lua_TValue *i; // rcx

  v2 = L->ci->func + 1;
  if ( v2 >= L->top
    || v2 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (v2->tt_ & 0xF) == 0 )
  {
    v3 = 0i64;
  }
  else
  {
    v3 = lua_tolstring(L, 1, 0i64);
    if ( !v3 )
      tag_error(L, 1, 4);
  }
  for ( i = L->ci->func + 2; L->top < i; ++L->top )
    L->top->tt_ = 0;
  L->top = i;
  if ( (unsigned int)luaL_loadfilex(L, (const char *)v3, 0i64) )
    luaG_errormsg(L);
  lua_callk(L, 0, 0xFFFFFFFFi64, 0i64, (int (__fastcall *)(lua_State *))dofilecont);
  return (unsigned int)(((char *)L->top - (char *)L->ci->func - 16) >> 4) - 1;
}

void __fastcall __noreturn luaB_error(lua_State *L)
{
  char *v1; // rdi
  lua_TValue *v3; // rcx
  int v4; // er8
  lua_TValue *i; // rcx
  CallInfo *ci; // rax
  const extension::gfxi_detail::TranslatorImpl *v7; // rdx
  CallInfo *v8; // rax
  lua_TValue *top; // rdx
  global_State *l_G; // rcx
  __int64 v11; // rax

  v1 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  v3 = L->ci->func + 2;
  if ( v3 >= L->top
    || v3 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (v3->tt_ & 0xF) == 0 )
  {
    v4 = 1;
  }
  else
  {
    v4 = luaL_checkinteger(L, 2);
  }
  for ( i = L->ci->func + 2; L->top < i; ++L->top )
    L->top->tt_ = 0;
  ci = L->ci;
  L->top = i;
  v7 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[1];
  if ( v7 < (const extension::gfxi_detail::TranslatorImpl *)i
    && v7 != (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    && (ci->func[1].tt_ & 0xFu) - 3 <= 1
    && v4 > 0 )
  {
    luaL_where(L, v4);
    v8 = L->ci;
    top = L->top;
    if ( &v8->func[1] < top )
      v1 = (char *)&v8->func[1];
    top->value_.gc = *(GCObject **)v1;
    top->tt_ = *((_DWORD *)v1 + 2);
    l_G = L->l_G;
    ++L->top;
    if ( l_G->GCdebt > 0 )
    {
      if ( l_G->gcrunning )
      {
        luaC_forcestep(L);
      }
      else
      {
        v11 = l_G->GCdebt + 2400;
        l_G->GCdebt = -2400i64;
        l_G->totalbytes += v11;
      }
    }
    luaV_concat(L, 2);
  }
  luaG_errormsg(L);
}

__int64 __fastcall luaB_getmetatable(lua_State *L)
{
  CallInfo *ci; // r9
  lua_TValue *top; // r8
  const extension::gfxi_detail::TranslatorImpl *v3; // rax
  char *v4; // rdx
  int v5; // er9
  Table *v6; // rdx
  __int64 result; // rax

  ci = L->ci;
  top = L->top;
  v3 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[1];
  if ( v3 >= (const extension::gfxi_detail::TranslatorImpl *)top
    || (v4 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168],
        v3 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168])
    || (ci->func[1].tt_ & 0xF) == -1 )
  {
    luaL_argerror(L, 1, "value expected");
  }
  if ( &ci->func[1] < top )
    v4 = (char *)&ci->func[1];
  v5 = *((_DWORD *)v4 + 2);
  if ( (v5 & 0xF) == 5 || (v5 & 0xF) == 7 )
    v6 = *(Table **)(*(_QWORD *)v4 + 16i64);
  else
    v6 = L->l_G->mt[v5 & 0xF];
  if ( v6 )
  {
    top->value_.gc = (GCObject *)v6;
    top->tt_ = 69;
    ++L->top;
    luaL_getmetafield(L, 1, "__metatable");
    return 1i64;
  }
  else
  {
    top->tt_ = 0;
    result = 1i64;
    ++L->top;
  }
  return result;
}

int __fastcall luaB_ipairs(lua_State *L)
{
  return pairsmeta(L, "__ipairs", 1, (int (__fastcall *)(lua_State *))ipairsaux);
}

__int64 __fastcall luaB_load(lua_State *L)
{
  global_State **v2; // rax
  CallInfo *ci; // rdx
  __int64 v4; // rsi
  lua_TValue *v5; // rcx
  const char *mode; // rbp
  CallInfo *v7; // r8
  lua_TValue *top; // rdx
  const extension::gfxi_detail::TranslatorImpl *v9; // rax
  int v10; // ecx
  int v11; // er14
  const extension::gfxi_detail::TranslatorImpl *v12; // rax
  const char *v13; // r9
  __int64 *v14; // r8
  global_State **(__fastcall *v15)(lua_State *, void *, unsigned __int64 *); // rdx
  CallInfo *v16; // rcx
  lua_TValue *v17; // rdx
  const extension::gfxi_detail::TranslatorImpl *v18; // rax
  lua_TValue *v19; // rcx
  int v20; // eax
  __int64 v22[7]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 len; // [rsp+78h] [rbp+10h] BYREF

  v2 = lua_tolstring(L, 1, &len);
  ci = L->ci;
  v4 = (__int64)v2;
  v5 = ci->func + 3;
  if ( v5 >= L->top
    || v5 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (ci->func[3].tt_ & 0xF) == 0 )
  {
    mode = "bt";
  }
  else
  {
    mode = (const char *)lua_tolstring(L, 3, 0i64);
    if ( !mode )
      tag_error(L, 3, 4);
  }
  v7 = L->ci;
  top = L->top;
  v9 = (const extension::gfxi_detail::TranslatorImpl *)&v7->func[4];
  if ( v9 >= (const extension::gfxi_detail::TranslatorImpl *)top
    || v9 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
  {
    v10 = -1;
  }
  else
  {
    v10 = v7->func[4].tt_ & 0xF;
  }
  v11 = 0;
  if ( v10 != -1 )
    v11 = 4;
  v12 = (const extension::gfxi_detail::TranslatorImpl *)&v7->func[2];
  if ( v4 )
  {
    if ( v12 >= (const extension::gfxi_detail::TranslatorImpl *)top
      || v12 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
      || (v7->func[2].tt_ & 0xF) == 0 )
    {
      v13 = (const char *)v4;
    }
    else
    {
      v13 = (const char *)lua_tolstring(L, 2, 0i64);
      if ( !v13 )
        tag_error(L, 2, 4);
    }
    v14 = v22;
    v22[1] = len;
    v15 = (global_State **(__fastcall *)(lua_State *, void *, unsigned __int64 *))getS;
    v22[0] = v4;
  }
  else
  {
    if ( v12 >= (const extension::gfxi_detail::TranslatorImpl *)top
      || v12 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
      || (v7->func[2].tt_ & 0xF) == 0 )
    {
      v13 = "=(load)";
    }
    else
    {
      v13 = (const char *)lua_tolstring(L, 2, 0i64);
      if ( !v13 )
        tag_error(L, 2, 4);
    }
    v16 = L->ci;
    v17 = L->top;
    v18 = (const extension::gfxi_detail::TranslatorImpl *)&v16->func[1];
    if ( v18 >= (const extension::gfxi_detail::TranslatorImpl *)v17
      || v18 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
      || (v16->func[1].tt_ & 0xF) != 6 )
    {
      tag_error(L, 1, 6);
    }
    v19 = v16->func + 6;
    if ( v17 < v19 )
    {
      do
      {
        L->top->tt_ = 0;
        ++L->top;
      }
      while ( L->top < v19 );
    }
    L->top = v19;
    v15 = generic_reader;
    v14 = 0i64;
  }
  v20 = lua_load(L, (const char *(__fastcall *)(lua_State *, void *, unsigned __int64 *))v15, v14, v13, mode);
  return load_aux(L, v20, v11);
}

__int64 __fastcall luaB_loadfile(lua_State *L)
{
  int v2; // esi
  lua_TValue *v3; // rcx
  global_State **v4; // rbp
  lua_TValue *v5; // rcx
  global_State **v6; // r8
  CallInfo *ci; // rax
  lua_TValue *v8; // rcx
  int v9; // edi
  int v10; // edx

  v2 = 0;
  v3 = L->ci->func + 1;
  if ( v3 >= L->top
    || v3 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (v3->tt_ & 0xF) == 0 )
  {
    v4 = 0i64;
  }
  else
  {
    v4 = lua_tolstring(L, 1, 0i64);
    if ( !v4 )
      tag_error(L, 1, 4);
  }
  v5 = L->ci->func + 2;
  if ( v5 >= L->top
    || v5 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (L->ci->func[2].tt_ & 0xF) == 0 )
  {
    v6 = 0i64;
  }
  else
  {
    v6 = lua_tolstring(L, 2, 0i64);
    if ( !v6 )
      tag_error(L, 2, 4);
  }
  ci = L->ci;
  v8 = ci->func + 3;
  if ( v8 >= L->top
    || v8 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
  {
    v9 = -1;
  }
  else
  {
    v9 = ci->func[3].tt_ & 0xF;
  }
  v10 = luaL_loadfilex(L, (const char *)v4, (const char *)v6);
  if ( v9 != -1 )
    v2 = 3;
  return load_aux(L, v10, v2);
}

__int64 __fastcall luaB_next(lua_State *L)
{
  CallInfo *ci; // rcx
  lua_TValue *v3; // rax
  Table **v4; // rdx
  lua_TValue *i; // r8
  CallInfo *v6; // rax
  __int64 result; // rax

  ci = L->ci;
  v3 = ci->func + 1;
  if ( v3 >= L->top
    || (v4 = (Table **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168],
        v3 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168])
    || (ci->func[1].tt_ & 0xF) != 5 )
  {
    tag_error(L, 1, 5);
  }
  for ( i = ci->func + 3; L->top < i; ++L->top )
    L->top->tt_ = 0;
  v6 = L->ci;
  L->top = i;
  if ( &v6->func[1] < i )
    v4 = (Table **)&v6->func[1];
  if ( luaH_next(L, *v4, i - 1) )
  {
    ++L->top;
    return 2i64;
  }
  else
  {
    --L->top;
    L->top->tt_ = 0;
    result = 1i64;
    ++L->top;
  }
  return result;
}

int __fastcall luaB_pairs(lua_State *L)
{
  return pairsmeta(L, "__pairs", 0, (int (__fastcall *)(lua_State *))luaB_next);
}

signed __int64 __fastcall luaB_pcall(lua_State *L)
{
  CallInfo *ci; // rax
  lua_TValue *top; // rdx
  const extension::gfxi_detail::TranslatorImpl *v4; // rcx
  char *v5; // r8
  int v6; // edi
  lua_TValue *v7; // rax
  CallInfo *v8; // rcx
  lua_TValue *v9; // rcx
  int v11; // [rsp+20h] [rbp-18h]

  ci = L->ci;
  top = L->top;
  v4 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[1];
  if ( v4 >= (const extension::gfxi_detail::TranslatorImpl *)top
    || (v5 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168],
        v4 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168])
    || (ci->func[1].tt_ & 0xF) == -1 )
  {
    luaL_argerror(L, 1, "value expected");
  }
  v6 = 0;
  top->tt_ = 0;
  v7 = ++L->top;
  v8 = L->ci;
  if ( &v8->func[1] < v7 )
    v5 = (char *)&v8->func[1];
  for ( ; v7 > (lua_TValue *)v5; --v7 )
  {
    v7->value_.gc = v7[-1].value_.gc;
    v7->tt_ = v7[-1].tt_;
  }
  v9 = L->top;
  *(_QWORD *)v5 = v9->value_.gc;
  *((_DWORD *)v5 + 2) = v9->tt_;
  LOBYTE(v6) = (unsigned int)lua_pcallk(
                               L,
                               (unsigned int)(((char *)L->top - (char *)L->ci->func - 16) >> 4) - 2,
                               -1,
                               0,
                               v11,
                               pcallcont) == 0;
  return finishpcall(L, v6);
}

__int64 __fastcall luaB_print(lua_State *L)
{
  signed __int64 v2; // r14
  int i; // edi
  lua_TValue *top; // rcx
  lua_TValue *v5; // r8
  CallInfo *ci; // rdx
  lua_TValue *p_l_registry; // rcx
  lua_TValue *func; // rax
  int v9; // ecx
  lua_TValue *v10; // rax
  lua_TValue *v11; // rdx
  unsigned __int16 nCcalls; // ax
  lua_TValue *v13; // rcx
  global_State *l_G; // rcx
  __int64 v15; // rax
  unsigned __int64 len; // rbp
  global_State **p_l_G; // rsi
  _iobuf *v18; // rax
  _iobuf *v19; // rax
  _iobuf *v20; // rax
  _iobuf *v21; // rax

  v2 = ((char *)L->top - (char *)L->ci->func - 16) >> 4;
  lua_getglobal(L, "tostring");
  for ( i = 1; i <= (int)v2; ++i )
  {
    top = L->top;
    top->value_.gc = top[-1].value_.gc;
    top->tt_ = top[-1].tt_;
    v5 = ++L->top;
    ci = L->ci;
    if ( i <= 0 )
    {
      if ( i <= -1001000 )
      {
        if ( i == -1001000 )
        {
          p_l_registry = &L->l_G->l_registry;
        }
        else
        {
          func = ci->func;
          v9 = -1001000 - i;
          if ( ci->func->tt_ == 22 || v9 > func->value_.gc->ts.tsv.extra )
            p_l_registry = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
          else
            p_l_registry = (lua_TValue *)&(&func->value_.gc->th.top)[2 * v9];
        }
      }
      else
      {
        p_l_registry = &v5[i];
      }
    }
    else
    {
      p_l_registry = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
      if ( &ci->func[i] < v5 )
        p_l_registry = &ci->func[i];
    }
    v5->value_.gc = p_l_registry->value_.gc;
    v5->tt_ = p_l_registry->tt_;
    v10 = ++L->top;
    ++L->nCcalls;
    v11 = v10 - 2;
    nCcalls = L->nCcalls;
    if ( nCcalls >= 0xC8u )
    {
      if ( nCcalls == 200 )
        luaG_runerror(L, "C stack overflow", v5, 225i64);
      if ( nCcalls >= 0xE1u )
        luaD_throw(L, 6);
    }
    ++L->nny;
    if ( !luaD_precall(L, v11, 1) )
      luaV_execute(L);
    --L->nny;
    --L->nCcalls;
    v13 = L->top - 1;
    if ( (v13->tt_ & 0xF) != 4 )
    {
      if ( !luaV_tostring(L, L->top - 1) )
        goto LABEL_33;
      l_G = L->l_G;
      if ( l_G->GCdebt > 0 )
      {
        if ( l_G->gcrunning )
        {
          luaC_forcestep(L);
        }
        else
        {
          v15 = l_G->GCdebt + 2400;
          l_G->GCdebt = -2400i64;
          l_G->totalbytes += v15;
        }
      }
      v13 = L->top - 1;
    }
    len = v13->value_.gc->ts.tsv.len;
    p_l_G = &v13->value_.gc->th.l_G;
    if ( v13->value_.gc == (GCObject *)-24i64 )
LABEL_33:
      luaL_error(L, "'tostring' must return a string to 'print'");
    if ( i > 1 )
    {
      v18 = _acrt_iob_func(1u);
      fwrite("\t", 1ui64, 1ui64, v18);
    }
    v19 = _acrt_iob_func(1u);
    fwrite(p_l_G, 1ui64, len, v19);
    --L->top;
  }
  v20 = _acrt_iob_func(1u);
  fwrite("\n", 1ui64, 1ui64, v20);
  v21 = _acrt_iob_func(1u);
  fflush(v21);
  return 0i64;
}

__int64 __fastcall luaB_rawequal(lua_State *L)
{
  CallInfo *ci; // rdx
  lua_TValue *top; // rcx
  const extension::gfxi_detail::TranslatorImpl *v4; // rax
  const extension::gfxi_detail::TranslatorImpl *v5; // rax
  const extension::gfxi_detail::TranslatorImpl *v6; // r9
  const extension::gfxi_detail::TranslatorImpl *v7; // r8
  BOOL v8; // eax
  lua_TValue *v9; // rcx
  __int64 result; // rax

  ci = L->ci;
  top = L->top;
  v4 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[1];
  if ( v4 >= (const extension::gfxi_detail::TranslatorImpl *)top
    || v4 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (ci->func[1].tt_ & 0xF) == -1 )
  {
    luaL_argerror(L, 1, "value expected");
  }
  v5 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[2];
  if ( v5 >= (const extension::gfxi_detail::TranslatorImpl *)top
    || v5 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (ci->func[2].tt_ & 0xF) == -1 )
  {
    luaL_argerror(L, 2, "value expected");
  }
  v6 = (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  v7 = (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  if ( &ci->func[1] < top )
    v6 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[1];
  if ( &ci->func[2] < top )
    v7 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[2];
  v8 = v6 != (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    && v7 != (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    && v6->RefCount == v7->RefCount
    && luaV_equalobj_(0i64, (const lua_TValue *)v6, (const lua_TValue *)v7);
  v9 = L->top;
  v9->value_.b = v8;
  result = 1i64;
  v9->tt_ = 1;
  ++L->top;
  return result;
}

__int64 __fastcall luaB_rawget(lua_State *L)
{
  CallInfo *ci; // rcx
  lua_TValue *top; // rdx
  const extension::gfxi_detail::TranslatorImpl *v4; // rax
  Table **v5; // r9
  const extension::gfxi_detail::TranslatorImpl *v6; // rax
  lua_TValue *v7; // r8
  CallInfo *v8; // rax

  ci = L->ci;
  top = L->top;
  v4 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[1];
  if ( v4 >= (const extension::gfxi_detail::TranslatorImpl *)top
    || (v5 = (Table **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168],
        v4 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168])
    || (ci->func[1].tt_ & 0xF) != 5 )
  {
    tag_error(L, 1, 5);
  }
  v6 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[2];
  if ( v6 >= (const extension::gfxi_detail::TranslatorImpl *)top
    || v6 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (ci->func[2].tt_ & 0xF) == -1 )
  {
    luaL_argerror(L, 2, "value expected");
  }
  v7 = ci->func + 3;
  if ( top < v7 )
  {
    do
    {
      L->top->tt_ = 0;
      ++L->top;
    }
    while ( L->top < v7 );
  }
  v8 = L->ci;
  L->top = v7;
  if ( &v8->func[1] < v7 )
    v5 = (Table **)&v8->func[1];
  L->top[-1] = *luaH_get(*v5, v7 - 1);
  return 1i64;
}

__int64 __fastcall luaB_rawlen(lua_State *L)
{
  CallInfo *ci; // r8
  lua_TValue *top; // rcx
  const extension::gfxi_detail::TranslatorImpl *v4; // rax
  char *v5; // rdx
  __int64 v6; // rcx
  lua_TValue *v7; // rax
  __int64 result; // rax

  ci = L->ci;
  top = L->top;
  v4 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[1];
  if ( v4 >= (const extension::gfxi_detail::TranslatorImpl *)top
    || (v5 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168],
        v4 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168])
    || (ci->func[1].tt_ & 0xFu) - 4 > 1 )
  {
    luaL_argerror(L, 1, "table or string expected");
  }
  if ( &ci->func[1] < top )
    v5 = (char *)&ci->func[1];
  switch ( *((_DWORD *)v5 + 2) & 0xF )
  {
    case 4:
      v6 = *(_QWORD *)(*(_QWORD *)v5 + 16i64);
      break;
    case 5:
      LODWORD(v6) = luaH_getn(*(Table **)v5);
      break;
    case 7:
      v6 = *(_QWORD *)(*(_QWORD *)v5 + 32i64);
      break;
    default:
      LODWORD(v6) = 0;
      break;
  }
  v7 = L->top;
  v7->tt_ = 3;
  v7->value_.n = (float)(int)v6;
  result = 1i64;
  ++L->top;
  return result;
}

__int64 __fastcall luaB_rawset(lua_State *L)
{
  CallInfo *ci; // rdx
  lua_TValue *top; // r8
  const extension::gfxi_detail::TranslatorImpl *v3; // rax
  const extension::gfxi_detail::TranslatorImpl *v4; // rax
  const extension::gfxi_detail::TranslatorImpl *v5; // rax
  lua_TValue *v6; // rdx

  ci = L->ci;
  top = L->top;
  v3 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[1];
  if ( v3 >= (const extension::gfxi_detail::TranslatorImpl *)top
    || v3 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (ci->func[1].tt_ & 0xF) != 5 )
  {
    tag_error(L, 1, 5);
  }
  v4 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[2];
  if ( v4 >= (const extension::gfxi_detail::TranslatorImpl *)top
    || v4 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (ci->func[2].tt_ & 0xF) == -1 )
  {
    luaL_argerror(L, 2, "value expected");
  }
  v5 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[3];
  if ( v5 >= (const extension::gfxi_detail::TranslatorImpl *)top
    || v5 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (ci->func[3].tt_ & 0xF) == -1 )
  {
    luaL_argerror(L, 3, "value expected");
  }
  v6 = ci->func + 4;
  if ( top < v6 )
  {
    do
    {
      L->top->tt_ = 0;
      ++L->top;
    }
    while ( L->top < v6 );
  }
  L->top = v6;
  lua_rawset(L, 1);
  return 1i64;
}

__int64 __fastcall luaB_select(lua_State *L)
{
  CallInfo *ci; // rdx
  lua_TValue *top; // rcx
  __int64 v4; // rbx
  const extension::gfxi_detail::TranslatorImpl *v5; // rax
  lua_TValue *func; // rax
  lua_TValue *v7; // rdx
  lua_TValue *v8; // rax
  global_State **p_l_G; // rax
  global_State *l_G; // rcx
  __int64 v11; // rax
  CallInfo *v12; // rax
  lua_TValue *v13; // rcx
  __int64 result; // rax
  int v15; // eax

  ci = L->ci;
  top = L->top;
  v4 = ((char *)top - (char *)ci->func - 16) >> 4;
  v5 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[1];
  if ( v5 >= (const extension::gfxi_detail::TranslatorImpl *)top
    || v5 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (ci->func[1].tt_ & 0xF) != 4 )
  {
    goto LABEL_18;
  }
  func = ci->func;
  v7 = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  v8 = func + 1;
  if ( v8 < top )
    v7 = v8;
  if ( (v7->tt_ & 0xF) != 4 )
  {
    if ( !luaV_tostring(L, v7) )
    {
      p_l_G = 0i64;
      goto LABEL_16;
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
        v11 = l_G->GCdebt + 2400;
        l_G->GCdebt = -2400i64;
        l_G->totalbytes += v11;
      }
    }
    v12 = L->ci;
    v7 = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
    if ( &v12->func[1] < L->top )
      v7 = v12->func + 1;
  }
  p_l_G = &v7->value_.gc->th.l_G;
LABEL_16:
  if ( *(_BYTE *)p_l_G == 35 )
  {
    v13 = L->top;
    result = 1i64;
    v13->tt_ = 3;
    v13->value_.n = (float)(v4 - 1);
    ++L->top;
    return result;
  }
LABEL_18:
  v15 = luaL_checkinteger(L, 1);
  if ( v15 >= 0 )
  {
    if ( v15 > (int)v4 )
      v15 = v4;
  }
  else
  {
    v15 += v4;
  }
  if ( v15 < 1 )
    luaL_argerror(L, 1, "index out of range");
  return (unsigned int)(v4 - v15);
}

__int64 __fastcall luaB_setmetatable(lua_State *L)
{
  CallInfo *ci; // r8
  lua_TValue *top; // rdx
  const extension::gfxi_detail::TranslatorImpl *v4; // rax
  int v5; // ecx
  const extension::gfxi_detail::TranslatorImpl *v6; // rax
  lua_TValue *i; // rdx

  ci = L->ci;
  top = L->top;
  v4 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[2];
  if ( v4 >= (const extension::gfxi_detail::TranslatorImpl *)top
    || v4 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
  {
    v5 = -1;
  }
  else
  {
    v5 = ci->func[2].tt_ & 0xF;
  }
  v6 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[1];
  if ( v6 >= (const extension::gfxi_detail::TranslatorImpl *)top
    || v6 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (ci->func[1].tt_ & 0xF) != 5 )
  {
    tag_error(L, 1, 5);
  }
  if ( v5 && v5 != 5 )
    luaL_argerror(L, 2, "nil or table expected");
  if ( (unsigned int)luaL_getmetafield(L, 1, "__metatable") )
    luaL_error(L, "cannot change a protected metatable");
  for ( i = L->ci->func + 3; L->top < i; ++L->top )
    L->top->tt_ = 0;
  L->top = i;
  lua_setmetatable(L, 1);
  return 1i64;
}

__int64 __fastcall luaB_tonumber(lua_State *L)
{
  CallInfo *ci; // rcx
  lua_TValue *top; // rdx
  const extension::gfxi_detail::TranslatorImpl *v4; // rax
  global_State **v5; // rax
  const char *v6; // r14
  const char *v7; // r15
  int v8; // ebp
  int v9; // esi
  const char *v10; // rbx
  float v11; // xmm6_4
  int v12; // eax
  int v13; // ecx
  lua_TValue *v14; // rax
  lua_TValue *func; // rax
  int *v16; // rcx
  int *v17; // rax
  int v18; // eax
  CallInfo *v20; // rax
  lua_TValue *v21; // rcx
  int v22[4]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 len; // [rsp+60h] [rbp+8h] BYREF

  ci = L->ci;
  top = L->top;
  v4 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[2];
  if ( v4 < (const extension::gfxi_detail::TranslatorImpl *)top
    && v4 != (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    && (ci->func[2].tt_ & 0xF) != 0 )
  {
    v5 = lua_tolstring(L, 1, &len);
    v6 = (const char *)v5;
    if ( !v5 )
      tag_error(L, 1, 4);
    v7 = (char *)v5 + len;
    v8 = 0;
    v9 = luaL_checkinteger(L, 2);
    if ( (unsigned int)(v9 - 2) > 0x22 )
      luaL_argerror(L, 2, "base out of range");
    v10 = &v6[strspn(v6, asc_140929D1C)];
    if ( *v10 == 45 )
    {
      v8 = 1;
    }
    else if ( *v10 != 43 )
    {
LABEL_10:
      if ( isalnum(*(unsigned __int8 *)v10) )
      {
        v11 = 0.0;
        do
        {
          if ( isdigit(*(unsigned __int8 *)v10) )
            v12 = *v10 - 48;
          else
            v12 = toupper(*(unsigned __int8 *)v10) - 55;
          if ( v12 >= v9 )
            break;
          v13 = *(unsigned __int8 *)++v10;
          v11 = (float)((float)v9 * v11) + (float)v12;
        }
        while ( isalnum(v13) );
        if ( &v10[strspn(v10, asc_140929D1C)] == v7 )
        {
          if ( v8 )
            LODWORD(v11) ^= _xmm;
          v14 = L->top;
          v14->value_.n = v11;
          goto LABEL_28;
        }
      }
LABEL_33:
      L->top->tt_ = 0;
      goto LABEL_29;
    }
    ++v10;
    goto LABEL_10;
  }
  func = ci->func;
  v16 = (int *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  v17 = (int *)&func[1];
  if ( v17 < (int *)top )
    v16 = v17;
  v18 = v16[2];
  if ( v18 != 3 )
  {
    if ( (v18 & 0xF) != 4
      || !luaO_str2d((const char *)(*(_QWORD *)v16 + 24i64), *(_QWORD *)(*(_QWORD *)v16 + 16i64), (float *)&len) )
    {
      v20 = L->ci;
      v21 = v20->func + 1;
      if ( v21 >= L->top
        || v21 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
        || (v20->func[1].tt_ & 0xF) == -1 )
      {
        luaL_argerror(L, 1, "value expected");
      }
      goto LABEL_33;
    }
    v16 = v22;
    v22[0] = len;
    v22[2] = 3;
  }
  v14 = L->top;
  v14->value_.b = *v16;
LABEL_28:
  v14->tt_ = 3;
LABEL_29:
  ++L->top;
  return 1i64;
}

__int64 __fastcall luaB_tostring(lua_State *L)
{
  lua_TValue *v1; // rdx

  v1 = L->ci->func + 1;
  if ( v1 >= L->top
    || v1 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (L->ci->func[1].tt_ & 0xF) == -1 )
  {
    luaL_argerror(L, 1, "value expected");
  }
  luaL_tolstring(L, 1, 0i64);
  return 1i64;
}

__int64 __fastcall luaB_type(lua_State *L)
{
  CallInfo *ci; // r8
  lua_TValue *top; // rdx
  const extension::gfxi_detail::TranslatorImpl *v3; // rax
  const extension::gfxi_detail::TranslatorImpl *v4; // rax
  int v5; // eax

  ci = L->ci;
  top = L->top;
  v3 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[1];
  if ( v3 >= (const extension::gfxi_detail::TranslatorImpl *)top
    || v3 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (ci->func[1].tt_ & 0xF) == -1 )
  {
    luaL_argerror(L, 1, "value expected");
  }
  v4 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[1];
  if ( v4 >= (const extension::gfxi_detail::TranslatorImpl *)top
    || v4 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
  {
    v5 = -1;
  }
  else
  {
    v5 = ci->func[1].tt_ & 0xF;
  }
  lua_pushstring(
    L,
    *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[14][8 * v5 + 112]);
  return 1i64;
}

signed __int64 __fastcall luaB_xpcall(lua_State *L)
{
  CallInfo *ci; // rax
  lua_TValue *top; // rdx
  __int64 v4; // r10
  lua_TValue *v5; // r9
  unsigned __int64 v6; // rax
  char *v7; // rcx
  char *v8; // rdx
  CallInfo *v9; // rcx
  lua_TValue *v10; // rax
  char *v11; // rcx
  lua_TValue *v12; // rdx
  int v13; // eax
  int v15; // [rsp+20h] [rbp-18h]

  ci = L->ci;
  top = L->top;
  v4 = ((char *)top - (char *)ci->func - 16) >> 4;
  if ( (int)v4 < 2 )
    luaL_argerror(L, 2, "value expected");
  v5 = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  v6 = (unsigned __int64)&ci->func[1];
  v7 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  if ( v6 < (unsigned __int64)top )
    v7 = (char *)v6;
  top->value_.gc = *(GCObject **)v7;
  top->tt_ = *((_DWORD *)v7 + 2);
  v8 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  ++L->top;
  v9 = L->ci;
  if ( &v9->func[2] < L->top )
    v8 = (char *)&v9->func[2];
  v10 = v9->func + 1;
  v11 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  if ( v10 < L->top )
    v11 = (char *)v10;
  *(_QWORD *)v11 = *(_QWORD *)v8;
  *((_DWORD *)v11 + 2) = *((_DWORD *)v8 + 2);
  v12 = L->top;
  if ( &L->ci->func[2] < v12 )
    v5 = L->ci->func + 2;
  v5->value_.gc = v12[-1].value_.gc;
  v5->tt_ = v12[-1].tt_;
  --L->top;
  v13 = lua_pcallk(L, (int)v4 - 2, -1, 1, v15, pcallcont);
  return finishpcall(L, v13 == 0);
}

__int64 __fastcall luaopen_base(lua_State *L)
{
  lua_TValue *top; // rbx
  TString *v3; // rax
  global_State *l_G; // rcx
  __int64 v5; // rax
  TString *v6; // rax
  lua_TValue *v7; // rcx
  lua_TValue *v8; // rbx
  TString *v9; // rax

  lua_rawgeti(L, -1001000, 2);
  lua_rawgeti(L, -1001000, 2);
  top = L->top;
  L->top = top + 1;
  v3 = luaS_newlstr(L, "_G", 2ui64);
  top->value_.gc = (GCObject *)v3;
  top->tt_ = v3->tsv.tt | 0x40;
  luaV_settable(L, top - 2, L->top - 1, L->top - 2);
  L->top -= 2;
  luaL_setfuncs(
    L,
    (const luaL_Reg *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[3][136],
    0);
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
  v6 = internshrstr(L, "Lua 5.2", 7ui64);
  v7 = L->top;
  v7->value_.gc = (GCObject *)v6;
  v7->tt_ = v6->tsv.tt | 0x40;
  v8 = L->top;
  L->top = v8 + 2;
  v9 = luaS_newlstr(L, "_VERSION", 8ui64);
  v8[1].value_.gc = (GCObject *)v9;
  v8[1].tt_ = v9->tsv.tt | 0x40;
  luaV_settable(L, v8 - 1, L->top - 1, L->top - 2);
  L->top -= 2;
  return 1i64;
}

__int64 __fastcall pairsmeta(lua_State *L, const char *method, int iszero, int (__fastcall *iter)(lua_State *))
{
  int v7; // eax
  lua_TValue *top; // rdx
  lua_TValue *func; // rcx
  const extension::gfxi_detail::TranslatorImpl *v10; // rcx
  char *v11; // r8
  CallInfo *ci; // rax
  lua_TValue *v13; // rdx
  lua_TValue *v14; // rcx
  char *v15; // rcx
  char *v16; // r8
  lua_TValue *v17; // rax
  lua_TValue *v18; // rdx
  unsigned __int16 nCcalls; // ax

  v7 = luaL_getmetafield(L, 1, method);
  top = L->top;
  func = L->ci->func;
  if ( v7 )
  {
    v15 = (char *)&func[1];
    v16 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
    if ( v15 < (char *)top )
      v16 = v15;
    top->value_.gc = *(GCObject **)v16;
    top->tt_ = *((_DWORD *)v16 + 2);
    v17 = ++L->top;
    ++L->nCcalls;
    v18 = v17 - 2;
    nCcalls = L->nCcalls;
    if ( nCcalls >= 0xC8u )
    {
      if ( nCcalls == 200 )
        luaG_runerror(L, "C stack overflow");
      if ( nCcalls >= 0xE1u )
        luaD_throw(L, 6);
    }
    ++L->nny;
    if ( !luaD_precall(L, v18, 3) )
      luaV_execute(L);
    --L->nny;
    --L->nCcalls;
  }
  else
  {
    v10 = (const extension::gfxi_detail::TranslatorImpl *)&func[1];
    if ( v10 >= (const extension::gfxi_detail::TranslatorImpl *)top
      || (v11 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168],
          v10 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168])
      || (v10->RefCount & 0xF) != 5 )
    {
      tag_error(L, 1, 5);
    }
    top->value_.gc = (GCObject *)iter;
    top->tt_ = 22;
    ++L->top;
    ci = L->ci;
    v13 = L->top;
    if ( &ci->func[1] < v13 )
      v11 = (char *)&ci->func[1];
    v13->value_.gc = *(GCObject **)v11;
    v13->tt_ = *((_DWORD *)v11 + 2);
    v14 = ++L->top;
    if ( iszero )
    {
      v14->tt_ = 3;
      v14->value_.n = (float)0;
    }
    else
    {
      v14->tt_ = 0;
    }
    ++L->top;
  }
  return 3i64;
}

signed __int64 __fastcall pcallcont(lua_State *L)
{
  CallInfo *ci; // rax
  int v2; // edx

  ci = L->ci;
  v2 = 0;
  LOBYTE(v2) = (ci->callstatus & 8) != 0 && ci->u.c.status == 1;
  return finishpcall(L, v2);
}

