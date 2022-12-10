#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lapi.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/ldo.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lgc.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstate.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstring.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/ldebug.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lauxlib.c"

const luaL_Reg co_funcs[28]; // 0x1408AFF70
long auxresume(lua_State * L, lua_State * co, long narg); // 0x14028B2D0
long luaB_coresume(lua_State * L); // 0x14028B460
long luaB_auxwrap(lua_State * L); // 0x14028B590
long luaB_cocreate(lua_State * L); // 0x14028B6B0
long luaB_cowrap(lua_State * L); // 0x14028B770
long luaB_yield(lua_State * L); // 0x14028B7A0
long luaB_costatus(lua_State * L); // 0x14028B840
long luaB_corunning(lua_State * L); // 0x14028B930
long luaopen_coroutine(lua_State * L); // 0x14028B970//decompilation failure at 1408AFF70!
__int64 __fastcall auxresume(lua_State *L, lua_State *co, int narg)
{
  global_State *l_G; // rcx
  __int64 v7; // rax
  TString *v8; // rax
  lua_TValue *top; // rcx
  signed __int64 v11; // rsi

  if ( lua_checkstack(co, narg) )
  {
    if ( co->status || (unsigned int)(((char *)co->top - (char *)co->ci->func - 16) >> 4) )
    {
      lua_xmove(L, co, narg);
      if ( (unsigned int)lua_resume(co, L, narg) <= 1 )
      {
        v11 = ((char *)co->top - (char *)co->ci->func - 16) >> 4;
        if ( lua_checkstack(L, (int)v11 + 1) )
        {
          lua_xmove(co, L, v11);
          return (unsigned int)v11;
        }
        else
        {
          lua_settop(co, ~(_DWORD)v11);
          lua_pushlstring(L, "too many results to resume", 0x1Aui64);
          return 0xFFFFFFFFi64;
        }
      }
      else
      {
        lua_xmove(co, L, 1);
        return 0xFFFFFFFFi64;
      }
    }
    else
    {
      lua_pushlstring(L, "cannot resume dead coroutine", 0x1Cui64);
      return 0xFFFFFFFFi64;
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
      }
      else
      {
        v7 = l_G->GCdebt + 2400;
        l_G->GCdebt = -2400i64;
        l_G->totalbytes += v7;
      }
    }
    v8 = internshrstr(L, "too many arguments to resume", 0x1Cui64);
    top = L->top;
    top->value_.gc = (GCObject *)v8;
    top->tt_ = v8->tsv.tt | 0x40;
    ++L->top;
    return 0xFFFFFFFFi64;
  }
}

__int64 __fastcall luaB_auxwrap(lua_State *L)
{
  CallInfo *ci; // rcx
  Value v3; // rax
  char *p_ci; // rax
  lua_State *v5; // rdx
  __int64 result; // rax
  const extension::gfxi_detail::TranslatorImpl *v7; // rax
  lua_TValue *top; // rax
  lua_TValue *i; // r8
  lua_TValue *v10; // rcx
  global_State *l_G; // rcx
  __int64 v12; // rax

  ci = L->ci;
  if ( ci->func->tt_ == 22 || (v3.gc = ci->func->value_.gc, !v3.gc->ts.tsv.extra) )
    p_ci = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  else
    p_ci = (char *)&v3.gc->th.ci;
  if ( *((_DWORD *)p_ci + 2) == 72 )
    v5 = *(lua_State **)p_ci;
  else
    v5 = 0i64;
  result = auxresume(L, v5, ((char *)L->top - (char *)ci->func - 16) >> 4);
  if ( (int)result < 0 )
  {
    v7 = (const extension::gfxi_detail::TranslatorImpl *)&L->top[-1];
    if ( v7 != (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
      && (v7->RefCount & 0xFu) - 3 <= 1 )
    {
      luaL_where(L, 1);
      top = L->top;
      for ( i = top - 2; top > i; --top )
      {
        top->value_.gc = top[-1].value_.gc;
        top->tt_ = top[-1].tt_;
      }
      v10 = L->top;
      i->value_.gc = v10->value_.gc;
      i->tt_ = v10->tt_;
      l_G = L->l_G;
      if ( l_G->GCdebt > 0 )
      {
        if ( l_G->gcrunning )
        {
          luaC_forcestep(L);
        }
        else
        {
          v12 = l_G->GCdebt + 2400;
          l_G->GCdebt = -2400i64;
          l_G->totalbytes += v12;
        }
      }
      luaV_concat(L, 2);
    }
    luaG_errormsg(L);
  }
  return result;
}

__int64 __fastcall luaB_cocreate(lua_State *L)
{
  CallInfo *ci; // rax
  lua_TValue *v3; // rcx
  char *v4; // rdi
  lua_State *v5; // rax
  CallInfo *v6; // rcx
  lua_TValue *top; // r8
  lua_TValue *v8; // rdx
  lua_TValue *v9; // rcx

  ci = L->ci;
  v3 = ci->func + 1;
  if ( v3 >= L->top
    || (v4 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168],
        v3 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168])
    || (ci->func[1].tt_ & 0xF) != 6 )
  {
    tag_error(L, 1, 6);
  }
  v5 = lua_newthread(L);
  v6 = L->ci;
  top = L->top;
  if ( &v6->func[1] < top )
    v4 = (char *)&v6->func[1];
  top->value_.gc = *(GCObject **)v4;
  top->tt_ = *((_DWORD *)v4 + 2);
  ++L->top;
  if ( L != v5 )
  {
    v8 = L->top - 1;
    L->top = v8;
    v9 = v5->top;
    v5->top = v9 + 1;
    v9->value_.gc = v8->value_.gc;
    v9->tt_ = v8->tt_;
  }
  return 1i64;
}

__int64 __fastcall luaB_coresume(lua_State *L)
{
  CallInfo *ci; // r8
  char *v2; // rdx
  lua_TValue *top; // rcx
  lua_State *v5; // rdx
  int v6; // edi
  lua_TValue *v7; // rax
  lua_TValue *v8; // rax
  lua_TValue *j; // r8
  lua_TValue *v10; // rcx
  lua_TValue *i; // rax
  unsigned __int64 v13; // r10
  lua_TValue *v14; // rcx

  ci = L->ci;
  v2 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  top = L->top;
  if ( &ci->func[1] < top )
    v2 = (char *)&ci->func[1];
  if ( *((_DWORD *)v2 + 2) != 72 || (v5 = *(lua_State **)v2) == 0i64 )
    luaL_argerror(L, 1, "coroutine expected");
  v6 = auxresume(L, v5, (unsigned int)(((char *)top - (char *)ci->func - 16) >> 4) - 1);
  v7 = L->top;
  v7->tt_ = 1;
  if ( v6 >= 0 )
  {
    v7->value_.b = 1;
    ++L->top;
    for ( i = index2addr(L, -1 - v6); v13 > (unsigned __int64)i; v13 -= 16i64 )
    {
      *(_QWORD *)v13 = *(_QWORD *)(v13 - 16);
      *(_DWORD *)(v13 + 8) = *(_DWORD *)(v13 - 8);
    }
    v14 = L->top;
    i->value_.gc = v14->value_.gc;
    i->tt_ = v14->tt_;
    return (unsigned int)(v6 + 1);
  }
  else
  {
    v7->value_.b = 0;
    v8 = ++L->top;
    for ( j = v8 - 2; v8 > j; --v8 )
    {
      v8->value_.gc = v8[-1].value_.gc;
      v8->tt_ = v8[-1].tt_;
    }
    v10 = L->top;
    j->value_.gc = v10->value_.gc;
    j->tt_ = v10->tt_;
    return 2i64;
  }
}

__int64 __fastcall luaB_corunning(lua_State *L)
{
  lua_TValue *top; // rax
  lua_TValue *v2; // r8
  bool v3; // zf
  __int64 result; // rax

  top = L->top;
  top->value_.gc = (GCObject *)L;
  top->tt_ = 72;
  v2 = ++L->top;
  v3 = L->l_G->mainthread == L;
  result = 2i64;
  v2->tt_ = 1;
  v2->value_.b = v3;
  ++L->top;
  return result;
}

__int64 __fastcall luaB_costatus(lua_State *L)
{
  lua_TValue *v1; // rax
  lua_State *gc; // rdx
  CallInfo *ci; // r8

  v1 = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  if ( &L->ci->func[1] < L->top )
    v1 = L->ci->func + 1;
  if ( v1->tt_ != 72 || (gc = (lua_State *)v1->value_.gc) == 0i64 )
    luaL_argerror(L, 1, "coroutine expected");
  if ( L == gc )
  {
    lua_pushlstring(L, "running", 7ui64);
    return 1i64;
  }
  if ( gc->status )
  {
    if ( gc->status != 1 )
    {
LABEL_9:
      lua_pushlstring(L, "dead", 4ui64);
      return 1i64;
    }
  }
  else
  {
    ci = gc->ci;
    if ( ci != &gc->base_ci )
    {
      lua_pushlstring(L, "normal", 6ui64);
      return 1i64;
    }
    if ( !(unsigned int)(((char *)gc->top - (char *)ci->func - 16) >> 4) )
      goto LABEL_9;
  }
  lua_pushlstring(L, "suspended", 9ui64);
  return 1i64;
}

__int64 __fastcall luaB_cowrap(lua_State *L)
{
  luaB_cocreate(L);
  lua_pushcclosure(L, (int (__fastcall *)(lua_State *))luaB_auxwrap, 1);
  return 1i64;
}

__int64 __fastcall luaB_yield(lua_State *L)
{
  CallInfo *ci; // rdx
  __int64 v3; // rcx
  bool v4; // zf

  ci = L->ci;
  v3 = ((char *)L->top - (char *)ci->func - 16) >> 4;
  if ( L->nny )
  {
    if ( L == L->l_G->mainthread )
      luaG_runerror(L, "attempt to yield from outside a coroutine");
    luaG_runerror(L, "attempt to yield across a C-call boundary");
  }
  L->status = 1;
  v4 = (ci->callstatus & 1) == 0;
  ci->extra = (char *)ci->func - (char *)L->stack;
  if ( v4 )
  {
    ci->u.l.savedpc = 0i64;
    ci->func = &L->top[-(int)v3 - 1];
    luaD_throw(L, 1);
  }
  return 0i64;
}

__int64 __fastcall luaopen_coroutine(lua_State *L)
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
  luaH_resize(L, v4, 0, 6);
  luaL_setfuncs(
    L,
    (const luaL_Reg *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[6][40],
    0);
  return 1i64;
}

