#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/ldebug.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lapi.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lvm.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lgc.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstate.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstring.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/ldo.c"

long findfield(lua_State * L, long objidx, long level); // 0x140284830
long pushglobalfuncname(lua_State * L, lua_Debug * ar); // 0x140284A60
void pushfuncname(lua_State * L, lua_Debug * ar); // 0x140284BE0
long countlevels(lua_State * L); // 0x140284D50
void luaL_traceback(lua_State * L, lua_State * L1, const char * msg, long level); // 0x140284E20
long luaL_argerror(lua_State * L, long narg, const char * extramsg); // 0x1402851B0
long typeerror(lua_State * L, long narg, const char * tname); // 0x1402852C0
void tag_error(lua_State * L, long narg, long tag); // 0x140285320
void luaL_where(lua_State * L, long level); // 0x140285390
long luaL_error(lua_State * L, const char * fmt, ...); // 0x1402854A0
long luaL_newmetatable(lua_State * L, const char * tname); // 0x140285560
void * luaL_testudata(lua_State * L, long ud, const char * tname); // 0x140285690
long luaL_checkoption(lua_State * L, long narg, const char * def, const char * * lst); // 0x1402857A0
float luaL_checknumber(lua_State * L, long narg); // 0x140285890
long long luaL_checkinteger(lua_State * L, long narg); // 0x140285910
char * luaL_prepbuffsize(luaL_Buffer * B, unsigned long long sz); // 0x140285990
void luaL_addvalue(luaL_Buffer * B); // 0x140285A50
long luaL_ref(lua_State * L, long t); // 0x140285B30
void luaL_unref(lua_State * L, long t, long ref); // 0x140285C60
struct LoadF
{
	long n; // 0x0
	_iobuf * f; // 0x8
	char buff[512]; // 0x10
};
const char * getF(lua_State * L, void * ud, unsigned long long * size); // 0x140285CD0
long errfile(lua_State * L, const char * what, long fnameindex); // 0x140285D50
long luaL_loadfilex(lua_State * L, const char * filename, const char * mode); // 0x140285E60
struct LoadS
{
	const char * s; // 0x0
	unsigned long long size; // 0x8
};
const char * getS(lua_State * L, void * ud, unsigned long long * size); // 0x140286240
long luaL_getmetafield(lua_State * L, long obj, const char * event); // 0x140286260
long luaL_callmeta(lua_State * L, long obj, const char * event); // 0x140286350
long luaL_len(lua_State * L, long idx); // 0x140286440
const char * luaL_tolstring(lua_State * L, long idx, unsigned long long * len); // 0x1402864D0
void luaL_setfuncs(lua_State * L, const luaL_Reg * l, long nup); // 0x140286610
long luaL_getsubtable(lua_State * L, long idx, const char * fname); // 0x140286880
void luaL_requiref(lua_State * L, const char * modname, long(*openf)(lua_State *), long glb); // 0x1402869C0
void luaL_checkversion_(lua_State * L, float ver); // 0x140286B30__int64 __fastcall countlevels(lua_State *L)
{
  int v1; // ebx
  int i; // er8
  int v4; // edx
  lua_State *ci; // rax
  int v7; // eax
  int v8; // er10
  int v9; // edx
  lua_State *v10; // rcx

  v1 = 1;
  for ( i = 1; ; i *= 2 )
  {
    v4 = i;
    if ( i < 0 )
      break;
    ci = (lua_State *)L->ci;
    if ( i > 0 )
    {
      do
      {
        if ( ci == (lua_State *)&L->base_ci )
          break;
        ci = (lua_State *)ci->top;
        --v4;
      }
      while ( v4 > 0 );
    }
    if ( v4 || ci == (lua_State *)&L->base_ci )
      break;
    v1 = i;
  }
  while ( v1 < i )
  {
    v7 = (i + v1) / 2;
    v8 = v7;
    v9 = v7;
    if ( v7 < 0 )
      goto LABEL_23;
    v10 = (lua_State *)L->ci;
    if ( v7 > 0 )
    {
      do
      {
        if ( v10 == (lua_State *)&L->base_ci )
          break;
        v10 = (lua_State *)v10->top;
        --v9;
      }
      while ( v9 > 0 );
    }
    if ( !v9 && v10 != (lua_State *)&L->base_ci )
      v1 = v8 + 1;
    else
LABEL_23:
      i = v8;
  }
  return (unsigned int)(i - 1);
}

__int64 __fastcall errfile(lua_State *L, const char *what, int fnameindex)
{
  int *v6; // rax
  const char *v7; // rbp
  lua_TValue *v8; // rax
  __int64 p_env; // r9
  global_State *l_G; // rcx
  __int64 v11; // rax
  lua_TValue *i; // rax

  v6 = errno();
  v7 = strerror(*v6);
  v8 = index2addr(L, fnameindex);
  if ( (v8->tt_ & 0xF) != 4 )
  {
    if ( !luaV_tostring(L, v8) )
    {
      p_env = 0i64;
      goto LABEL_10;
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
    v8 = index2addr(L, fnameindex);
  }
  p_env = (__int64)&v8->value_.gc->u.uv.env;
LABEL_10:
  lua_pushfstring(L, "cannot %s %s: %s", what, (const char *)(p_env + 1), v7);
  for ( i = index2addr(L, fnameindex) + 1; i < L->top; ++i )
  {
    i[-1].value_.gc = i->value_.gc;
    i[-1].tt_ = i->tt_;
  }
  --L->top;
  return 7i64;
}

__int64 __fastcall findfield(lua_State *L, int objidx, int level)
{
  __int64 v4; // rdi
  lua_TValue *top; // rcx
  unsigned __int64 v7; // r10
  CallInfo *ci; // rax
  const extension::gfxi_detail::TranslatorImpl *p_l_registry; // rdx
  lua_TValue *func; // rdx
  int v11; // ecx
  const extension::gfxi_detail::TranslatorImpl *v12; // r8
  lua_TValue *v14; // rax
  lua_TValue *v15; // rcx
  lua_TValue *v16; // rdx
  lua_TValue *i; // r8
  lua_TValue *v18; // rcx
  global_State *l_G; // rcx
  __int64 v20; // rax

  v4 = objidx;
  top = L->top;
  if ( &top[-1] == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (top[-1].tt_ & 0xF) != 5 )
  {
    return 0i64;
  }
  top->tt_ = 0;
  for ( ++L->top; ; --L->top )
  {
    if ( !luaH_next(L, (Table *)L->top[-2].value_.gc, L->top - 1) )
    {
      --L->top;
      return 0i64;
    }
    ++L->top;
    if ( (unsigned int)lua_type(L, -2) == 4 )
      break;
LABEL_23:
    ;
  }
  ci = L->ci;
  if ( (int)v4 <= 0 )
  {
    if ( (int)v4 <= -1001000 )
    {
      if ( (_DWORD)v4 == -1001000 )
      {
        p_l_registry = (const extension::gfxi_detail::TranslatorImpl *)&L->l_G->l_registry;
      }
      else
      {
        func = ci->func;
        v11 = -1001000 - v4;
        if ( ci->func->tt_ == 22 )
          goto LABEL_21;
        if ( v11 > func->value_.gc->ts.tsv.extra )
          p_l_registry = (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
        else
          p_l_registry = (const extension::gfxi_detail::TranslatorImpl *)&(&func->value_.gc->th.top)[2 * v11];
      }
    }
    else
    {
      p_l_registry = (const extension::gfxi_detail::TranslatorImpl *)(v7 + 16 * v4);
    }
  }
  else
  {
    p_l_registry = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[v4];
    if ( (unsigned __int64)p_l_registry >= v7 )
      goto LABEL_21;
  }
  v12 = (const extension::gfxi_detail::TranslatorImpl *)(v7 - 16);
  if ( p_l_registry != (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    && v12 != (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    && p_l_registry->RefCount == v12->RefCount
    && luaV_equalobj_(0i64, (const lua_TValue *)p_l_registry, (const lua_TValue *)v12) )
  {
    --L->top;
    return 1i64;
  }
LABEL_21:
  if ( level == 1 || !findfield(L, v4, level - 1) )
    goto LABEL_23;
  v14 = L->top;
  v15 = v14 - 1;
  if ( &v14[-1] < v14 )
  {
    do
    {
      v15[-1].value_.gc = v15->value_.gc;
      v15[-1].tt_ = v15->tt_;
      ++v15;
    }
    while ( v15 < L->top );
  }
  --L->top;
  lua_pushlstring(L, ".", 1ui64);
  v16 = L->top;
  for ( i = v16 - 2; v16 > i; --v16 )
  {
    v16->value_.gc = v16[-1].value_.gc;
    v16->tt_ = v16[-1].tt_;
  }
  v18 = L->top;
  i->value_.gc = v18->value_.gc;
  i->tt_ = v18->tt_;
  l_G = L->l_G;
  if ( l_G->GCdebt > 0 )
  {
    if ( l_G->gcrunning )
    {
      luaC_forcestep(L);
    }
    else
    {
      v20 = l_G->GCdebt + 2400;
      l_G->GCdebt = -2400i64;
      l_G->totalbytes += v20;
    }
  }
  luaV_concat(L, 3);
  return 1i64;
}

const char *__fastcall getF(lua_State *L, void *ud, unsigned __int64 *size)
{
  unsigned __int64 v3; // rax
  const char *result; // rax

  v3 = *(int *)ud;
  if ( (int)v3 <= 0 )
  {
    if ( feof(*((_iobuf **)ud + 1)) )
    {
      return 0i64;
    }
    else
    {
      *size = fread((char *)ud + 16, 1ui64, 0x200ui64, *((_iobuf **)ud + 1));
      return (char *)ud + 16;
    }
  }
  else
  {
    *size = v3;
    result = (char *)ud + 16;
    *(_DWORD *)ud = 0;
  }
  return result;
}

const char *__fastcall getS(lua_State *L, void *ud, unsigned __int64 *size)
{
  const char *result; // rax

  result = (const char *)*((_QWORD *)ud + 1);
  if ( result )
  {
    *size = (unsigned __int64)result;
    result = *(const char **)ud;
    *((_QWORD *)ud + 1) = 0i64;
  }
  return result;
}

void __fastcall luaL_addvalue(luaL_Buffer *B)
{
  lua_State *L; // rdi
  char *initb; // rbp
  global_State **v4; // r14
  lua_TValue *top; // rdx
  lua_TValue *i; // r8
  lua_TValue *v7; // rcx
  unsigned __int64 v8; // rbx
  char *v9; // rax
  lua_TValue *j; // rax
  unsigned __int64 len; // [rsp+40h] [rbp+8h] BYREF

  L = B->L;
  initb = B->initb;
  v4 = lua_tolstring(L, -1, &len);
  if ( B->b != B->initb )
  {
    top = L->top;
    for ( i = top - 2; top > i; --top )
    {
      top->value_.gc = top[-1].value_.gc;
      top->tt_ = top[-1].tt_;
    }
    v7 = L->top;
    i->value_.gc = v7->value_.gc;
    i->tt_ = v7->tt_;
  }
  v8 = len;
  v9 = luaL_prepbuffsize(B, len);
  memmove(v9, v4, v8);
  B->n += v8;
  for ( j = index2addr(L, (unsigned int)(B->b == initb) - 2) + 1; j < L->top; ++j )
  {
    j[-1].value_.gc = j->value_.gc;
    j[-1].tt_ = j->tt_;
  }
  --L->top;
}

void __fastcall __noreturn luaL_argerror(lua_State *L, int narg, const char *extramsg)
{
  lua_State *ci; // rcx
  unsigned int v6; // edi
  __int64 v7; // rdx
  char v8; // al
  const char *name; // rax
  lua_Debug ar; // [rsp+30h] [rbp-A8h] BYREF

  ci = (lua_State *)L->ci;
  v6 = narg;
  if ( ci == (lua_State *)&L->base_ci )
    luaL_error(L, "bad argument #%d (%s)", (unsigned int)narg, extramsg);
  ar.i_ci = (CallInfo *)ci;
  lua_getinfo(L, "n", &ar);
  v7 = 0i64;
  do
  {
    v8 = ar.namewhat[v7++];
    if ( v8 != aMethod[v7 - 1] )
      goto LABEL_7;
  }
  while ( v7 != 7 );
  if ( !--v6 )
    luaL_error(L, "calling '%s' on bad self (%s)", ar.name, extramsg);
LABEL_7:
  name = ar.name;
  if ( !ar.name )
  {
    if ( pushglobalfuncname(L, &ar) )
      name = (const char *)lua_tolstring(L, -1, 0i64);
    else
      name = "?";
    ar.name = name;
  }
  luaL_error(L, "bad argument #%d to '%s' (%s)", v6, name, extramsg);
}

int __fastcall luaL_callmeta(lua_State *L, int obj, const char *event)
{
  int v3; // edi
  int result; // eax
  lua_TValue *top; // rax
  lua_TValue *v7; // rdx
  unsigned __int16 nCcalls; // ax

  v3 = obj;
  if ( (unsigned int)obj >= 0xFFF0B9D9 || obj == 0 )
    v3 = L->top - L->ci->func + obj;
  result = luaL_getmetafield(L, v3, "__tostring");
  if ( result )
  {
    *L->top++ = *index2addr(L, v3);
    top = L->top;
    ++L->nCcalls;
    v7 = top - 2;
    nCcalls = L->nCcalls;
    if ( nCcalls >= 0xC8u )
    {
      if ( nCcalls == 200 )
        luaG_runerror(L, "C stack overflow");
      if ( nCcalls >= 0xE1u )
        luaD_throw(L, 6);
    }
    ++L->nny;
    if ( !luaD_precall(L, v7, 1) )
      luaV_execute(L);
    result = 1;
    --L->nny;
    --L->nCcalls;
  }
  return result;
}

__int64 __fastcall luaL_checkinteger(lua_State *L, int narg)
{
  lua_TValue *v4; // rax
  int tt; // er8
  int v7[6]; // [rsp+20h] [rbp-18h] BYREF
  float result; // [rsp+50h] [rbp+18h] BYREF

  v4 = index2addr(L, narg);
  tt = v4->tt_;
  if ( tt != 3 )
  {
    if ( (tt & 0xF) != 4 || !luaO_str2d((const char *)&v4->value_.gc->th.l_G, v4->value_.gc->ts.tsv.len, &result) )
      tag_error(L, narg, 3);
    v4 = (lua_TValue *)v7;
    *(float *)v7 = result;
    v7[2] = 3;
  }
  return (unsigned int)(int)v4->value_.n;
}

float __fastcall luaL_checknumber(lua_State *L, int narg)
{
  lua_TValue *v4; // rax
  int tt; // er8
  int v7[6]; // [rsp+20h] [rbp-18h] BYREF
  float result; // [rsp+50h] [rbp+18h] BYREF

  v4 = index2addr(L, narg);
  tt = v4->tt_;
  if ( tt != 3 )
  {
    if ( (tt & 0xF) != 4 || !luaO_str2d((const char *)&v4->value_.gc->th.l_G, v4->value_.gc->ts.tsv.len, &result) )
      tag_error(L, narg, 3);
    v4 = (lua_TValue *)v7;
    *(float *)v7 = result;
    v7[2] = 3;
  }
  return v4->value_.n;
}

__int64 __fastcall luaL_checkoption(lua_State *L, int narg, const char *def, const char *const *lst)
{
  const extension::gfxi_detail::TranslatorImpl *v5; // rax
  const char *v6; // r11
  const char *v7; // rcx
  unsigned int v8; // er10
  __int64 v9; // r9
  signed __int64 v10; // r8
  int v11; // eax
  int v12; // edx
  const char *v14; // rax

  v5 = (const extension::gfxi_detail::TranslatorImpl *)index2addr(L, 1);
  if ( v5 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (v5->RefCount & 0xF) == 0 )
  {
    v6 = "collect";
  }
  else
  {
    v6 = (const char *)lua_tolstring(L, 1, 0i64);
    if ( !v6 )
      tag_error(L, 1, 4);
  }
  v7 = *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[4][248];
  v8 = 0;
  if ( !*(_QWORD *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[4][248] )
  {
LABEL_15:
    v14 = lua_pushfstring(L, "invalid option '%s'", v6);
    luaL_argerror(L, 1, v14);
  }
  v9 = 0i64;
  while ( 1 )
  {
    v10 = v6 - v7;
    do
    {
      v11 = (unsigned __int8)v7[v10];
      v12 = *(unsigned __int8 *)v7 - v11;
      if ( v12 )
        break;
      ++v7;
    }
    while ( v11 );
    if ( !v12 )
      return v8;
    v7 = *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[5][8 * v9++];
    ++v8;
    if ( !v7 )
      goto LABEL_15;
  }
}

void __fastcall luaL_checkversion_(lua_State *L, float ver)
{
  const float *version; // rax
  lua_TValue *top; // rax
  lua_TValue *v5; // rcx
  int tt; // eax
  lua_TValue *v7; // rax
  int v8; // ecx
  float v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]
  float result; // [rsp+40h] [rbp+8h] BYREF

  if ( L )
  {
    version = L->l_G->version;
    if ( version != (const float *)&unk_1408AF078 )
      luaL_error(L, "multiple Lua VMs detected");
  }
  else
  {
    version = (const float *)&unk_1408AF078;
  }
  if ( *version != ver )
    luaL_error(L, "version mismatch: app. needs %f, Lua core provides %f", ver, *version);
  top = L->top;
  top->value_.b = -980312064;
  top->tt_ = 3;
  v5 = L->top++;
  tt = v5->tt_;
  if ( tt != 3 )
  {
    if ( (tt & 0xF) != 4 || !luaO_str2d((const char *)&v5->value_.gc->th.l_G, v5->value_.gc->ts.tsv.len, &result) )
      goto LABEL_17;
    v5 = (lua_TValue *)&v9;
    v9 = result;
    v10 = 3;
  }
  if ( (int)v5->value_.n != -4660i64 )
    goto LABEL_17;
  v7 = L->top - 1;
  v8 = v7->tt_;
  if ( v8 != 3 )
  {
    if ( (v8 & 0xF) == 4 && luaO_str2d((const char *)&v7->value_.gc->th.l_G, v7->value_.gc->ts.tsv.len, &result) )
    {
      v7 = (lua_TValue *)&v9;
      v9 = result;
      v10 = 3;
      goto LABEL_13;
    }
LABEL_17:
    luaL_error(L, "bad conversion number->int; must recompile Lua with proper settings");
  }
LABEL_13:
  if ( (int)v7->value_.n != -4660 )
    goto LABEL_17;
  --L->top;
}

void __noreturn luaL_error(lua_State *L, const char *fmt, ...)
{
  global_State *l_G; // rcx
  __int64 v4; // rax
  global_State *v5; // rcx
  __int64 v6; // rax
  va_list argp; // [rsp+50h] [rbp+18h] BYREF

  va_start(argp, fmt);
  luaL_where(L, 1);
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
  luaO_pushvfstring(L, fmt, argp);
  v5 = L->l_G;
  if ( v5->GCdebt > 0 )
  {
    if ( v5->gcrunning )
    {
      luaC_forcestep(L);
    }
    else
    {
      v6 = v5->GCdebt + 2400;
      v5->GCdebt = -2400i64;
      v5->totalbytes += v6;
    }
  }
  luaV_concat(L, 2);
  luaG_errormsg(L);
}

__int64 __fastcall luaL_getmetafield(lua_State *L, int obj, const char *event)
{
  lua_TValue *v4; // rax
  const char *v5; // r10
  int tt; // ecx
  Table *metatable; // rcx
  lua_TValue *top; // rax
  lua_TValue *v9; // rcx
  lua_TValue *v11; // rax

  v4 = index2addr(L, obj);
  tt = v4->tt_;
  if ( (tt & 0xF) == 5 || (tt & 0xF) == 7 )
    metatable = v4->value_.gc->u.uv.metatable;
  else
    metatable = L->l_G->mt[tt & 0xF];
  if ( !metatable )
    return 0i64;
  top = L->top;
  top->value_.gc = (GCObject *)metatable;
  top->tt_ = 69;
  ++L->top;
  lua_pushstring(L, v5);
  L->top[-1] = *luaH_get((Table *)L->top[-2].value_.gc, (const lua_TValue *)L->top - 1);
  v9 = L->top;
  if ( &v9[-1] != (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    && (v9[-1].tt_ & 0xF) == 0 )
  {
    L->top = v9 - 2;
    return 0i64;
  }
  v11 = v9 - 1;
  if ( &v9[-1] < v9 )
  {
    do
    {
      v11[-1].value_.gc = v11->value_.gc;
      v11[-1].tt_ = v11->tt_;
      ++v11;
    }
    while ( v11 < L->top );
  }
  --L->top;
  return 1i64;
}

__int64 __fastcall luaL_getsubtable(lua_State *L, int idx, const char *fname)
{
  extension::gfxi_detail::TranslatorImpl *v5; // rcx
  global_State *l_G; // rcx
  __int64 v8; // rax
  Table *v9; // rax
  lua_TValue *top; // rcx
  lua_TValue *v11; // rcx
  lua_TValue *v12; // rsi
  const lua_TValue *v13; // rbp
  unsigned __int64 v14; // r8
  TString *v15; // rax

  lua_getfield(L, -1001000, fname);
  v5 = (extension::gfxi_detail::TranslatorImpl *)&L->top[-1];
  if ( v5 != (extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    && (v5->RefCount & 0xF) == 5 )
  {
    return 1i64;
  }
  L->top = (lua_TValue *)v5;
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
  v9 = luaH_new(L);
  top = L->top;
  top->value_.gc = (GCObject *)v9;
  top->tt_ = 69;
  v11 = ++L->top;
  v11->value_.gc = v11[-1].value_.gc;
  v11->tt_ = v11[-1].tt_;
  v12 = ++L->top;
  v13 = index2addr(L, -1001000);
  L->top = v12 + 1;
  v14 = -1i64;
  do
    ++v14;
  while ( fname[v14] );
  v15 = luaS_newlstr(L, fname, v14);
  v12->value_.gc = (GCObject *)v15;
  v12->tt_ = v15->tsv.tt | 0x40;
  luaV_settable(L, v13, L->top - 1, L->top - 2);
  L->top -= 2;
  return 0i64;
}

__int64 __fastcall luaL_len(lua_State *L, int idx)
{
  const lua_TValue *v3; // rax
  lua_TValue *v4; // rcx
  int tt; // eax
  __int64 n; // rax
  int v7[6]; // [rsp+20h] [rbp-18h] BYREF
  float result; // [rsp+40h] [rbp+8h] BYREF

  v3 = index2addr(L, idx);
  luaV_objlen(L, L->top, v3);
  v4 = L->top++;
  tt = v4->tt_;
  if ( tt != 3 )
  {
    if ( (tt & 0xF) != 4 || !luaO_str2d((const char *)&v4->value_.gc->th.l_G, v4->value_.gc->ts.tsv.len, &result) )
      luaL_error(L, "object length is not a number");
    v4 = (lua_TValue *)v7;
    *(float *)v7 = result;
    v7[2] = 3;
  }
  n = (unsigned int)(int)v4->value_.n;
  --L->top;
  return n;
}

__int64 __fastcall luaL_loadfilex(lua_State *L, const char *filename, const char *mode)
{
  int v6; // er14
  global_State *l_G; // rcx
  __int64 v8; // rax
  TString *v9; // rax
  lua_TValue *top; // rcx
  _iobuf *v11; // rax
  const char *v12; // rsi
  const char *v13; // rdi
  int v14; // edx
  int v15; // eax
  int v17; // eax
  _iobuf *v18; // rax
  int v19; // eax
  int v20; // eax
  lua_TValue *v21; // rcx
  const char *p_l_G; // r9
  global_State *v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // esi
  int v26; // edi
  lua_TValue *i; // rcx
  lua_TValue *j; // rax
  int data; // [rsp+30h] [rbp-D0h] BYREF
  _iobuf *stream; // [rsp+38h] [rbp-C8h]
  char v31[512]; // [rsp+40h] [rbp-C0h]

  v6 = (((char *)L->top - (char *)L->ci->func - 16) >> 4) + 1;
  if ( filename )
  {
    lua_pushfstring(L, "@%s", filename);
    v11 = fopen(filename, "r");
    stream = v11;
    if ( !v11 )
      return errfile(L, "open", v6);
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
        v8 = l_G->GCdebt + 2400;
        l_G->GCdebt = -2400i64;
        l_G->totalbytes += v8;
      }
    }
    v9 = internshrstr(L, "=stdin", 6ui64);
    top = L->top;
    top->value_.gc = (GCObject *)v9;
    top->tt_ = v9->tsv.tt | 0x40;
    ++L->top;
    v11 = _acrt_iob_func(0);
    stream = v11;
  }
  v12 = aI_47;
  v13 = aI_47;
  data = 0;
  while ( 1 )
  {
    v14 = getc(v11);
    if ( v14 == -1 )
      break;
    v15 = *(unsigned __int8 *)v13++;
    if ( v14 != v15 )
      break;
    v31[data++] = v14;
    if ( !*v13 )
    {
      data = 0;
      v14 = getc(stream);
      break;
    }
    v11 = stream;
  }
  if ( v14 == 35 )
  {
    do
      v17 = getc(stream);
    while ( v17 != -1 && v17 != 10 );
    v14 = getc(stream);
    v31[data++] = 10;
  }
  if ( v14 != 27 )
    goto LABEL_33;
  if ( filename )
  {
    v18 = freopen(filename, "rb", stream);
    stream = v18;
    if ( !v18 )
      return errfile(L, "reopen", v6);
    data = 0;
    while ( 1 )
    {
      v14 = getc(v18);
      if ( v14 == -1 )
        break;
      v19 = *(unsigned __int8 *)v12++;
      if ( v14 != v19 )
        break;
      v31[data++] = v14;
      if ( !*v12 )
      {
        data = 0;
        v14 = getc(stream);
        break;
      }
      v18 = stream;
    }
    if ( v14 == 35 )
    {
      do
        v20 = getc(stream);
      while ( v20 != -1 && v20 != 10 );
      v14 = getc(stream);
    }
LABEL_33:
    if ( v14 == -1 )
      goto LABEL_35;
  }
  v31[data++] = v14;
LABEL_35:
  v21 = L->top - 1;
  if ( (v21->tt_ & 0xF) == 4 )
  {
LABEL_43:
    p_l_G = (const char *)&v21->value_.gc->th.l_G;
    goto LABEL_44;
  }
  if ( luaV_tostring(L, L->top - 1) )
  {
    v23 = L->l_G;
    if ( v23->GCdebt > 0 )
    {
      if ( v23->gcrunning )
      {
        luaC_forcestep(L);
      }
      else
      {
        v24 = v23->GCdebt + 2400;
        v23->GCdebt = -2400i64;
        v23->totalbytes += v24;
      }
    }
    v21 = L->top - 1;
    goto LABEL_43;
  }
  p_l_G = 0i64;
LABEL_44:
  v25 = lua_load(L, getF, &data, p_l_G, mode);
  v26 = ferror(stream);
  if ( filename )
    fclose(stream);
  if ( v26 )
  {
    if ( v6 < 0 )
    {
      L->top += v6 + 1;
    }
    else
    {
      for ( i = &L->ci->func[v6 + 1]; L->top < i; ++L->top )
        L->top->tt_ = 0;
      L->top = i;
    }
    return errfile(L, "read", v6);
  }
  else
  {
    for ( j = index2addr(L, v6) + 1; j < L->top; ++j )
    {
      j[-1].value_.gc = j->value_.gc;
      j[-1].tt_ = j->tt_;
    }
    --L->top;
    return v25;
  }
}

__int64 __fastcall luaL_newmetatable(lua_State *L, const char *tname)
{
  extension::gfxi_detail::TranslatorImpl *v4; // rcx
  global_State *l_G; // rcx
  __int64 v6; // rax
  Table *v7; // rax
  lua_TValue *top; // rcx
  lua_TValue *v9; // rcx
  unsigned __int64 v10; // r8
  lua_TValue *v11; // rsi
  global_State *v12; // rbp
  TString *v13; // rax

  lua_getfield(L, -1001000, tname);
  v4 = (extension::gfxi_detail::TranslatorImpl *)&L->top[-1];
  if ( v4 == (extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (v4->RefCount & 0xF) != 0 )
  {
    return 0i64;
  }
  L->top = (lua_TValue *)v4;
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
  v7 = luaH_new(L);
  top = L->top;
  top->value_.gc = (GCObject *)v7;
  top->tt_ = 69;
  v9 = ++L->top;
  v10 = -1i64;
  v9->value_.gc = v9[-1].value_.gc;
  v9->tt_ = v9[-1].tt_;
  v11 = L->top;
  v12 = L->l_G;
  L->top = v11 + 2;
  do
    ++v10;
  while ( tname[v10] );
  v13 = luaS_newlstr(L, tname, v10);
  v11[1].value_.gc = (GCObject *)v13;
  v11[1].tt_ = v13->tsv.tt | 0x40;
  luaV_settable(L, &v12->l_registry, L->top - 1, L->top - 2);
  L->top -= 2;
  return 1i64;
}

char *__fastcall luaL_prepbuffsize(luaL_Buffer *B, unsigned __int64 sz)
{
  unsigned __int64 size; // rdi
  lua_State *L; // rsi
  unsigned __int64 n; // rcx
  unsigned __int64 v6; // rdi
  const unsigned int **v7; // rbp

  size = B->size;
  L = B->L;
  n = B->n;
  if ( size - n < sz )
  {
    v6 = 2 * size;
    if ( v6 - n < sz )
      v6 = n + sz;
    if ( v6 < n || v6 - n < sz )
      luaL_error(L, "buffer too large");
    v7 = lua_newuserdata(L, v6);
    memmove(v7, B->b, B->n);
    if ( B->b != B->initb )
      lua_remove(L, -2);
    B->b = (char *)v7;
    B->size = v6;
  }
  return &B->b[B->n];
}

__int64 __fastcall luaL_ref(lua_State *L, int t)
{
  lua_TValue *v3; // rcx
  unsigned __int64 len; // rsi
  lua_TValue *v6; // rax
  int tt; // ecx
  unsigned int n; // edi
  lua_TValue *v9; // rax
  int v10[6]; // [rsp+20h] [rbp-18h] BYREF
  float result; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(result) = t;
  v3 = L->top - 1;
  if ( v3 != (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    && (v3->tt_ & 0xF) == 0 )
  {
    L->top = v3;
    return 0xFFFFFFFFi64;
  }
  lua_rawgeti(L, -1001000, 0);
  LODWORD(len) = 0;
  v6 = L->top - 1;
  tt = v6->tt_;
  if ( tt != 3 )
  {
    if ( (tt & 0xF) != 4 || !luaO_str2d((const char *)&v6->value_.gc->th.l_G, v6->value_.gc->ts.tsv.len, &result) )
    {
      n = 0;
      goto LABEL_9;
    }
    v6 = (lua_TValue *)v10;
    *(float *)v10 = result;
    v10[2] = 3;
  }
  n = (int)v6->value_.n;
LABEL_9:
  --L->top;
  if ( n )
  {
    lua_rawgeti(L, -1001000, n);
    lua_rawseti(L, -1001000, 0);
  }
  else
  {
    v9 = index2addr(L, -1001000);
    switch ( v9->tt_ & 0xF )
    {
      case 4:
        len = v9->value_.gc->ts.tsv.len;
        break;
      case 5:
        LODWORD(len) = luaH_getn((Table *)v9->value_.gc);
        break;
      case 7:
        len = v9->value_.gc->u.uv.len;
        break;
    }
    n = len + 1;
  }
  lua_rawseti(L, -1001000, n);
  return n;
}

void __fastcall luaL_requiref(lua_State *L, const char *modname, int (__fastcall *openf)(lua_State *), int glb)
{
  lua_TValue *top; // rax
  unsigned __int16 v8; // ax
  lua_TValue *v9; // rdx
  int v10; // edx
  lua_TValue *v11; // rdx
  unsigned __int64 v12; // r8
  lua_TValue *v13; // rsi
  TString *v14; // rax
  lua_TValue *v15; // rcx

  top = L->top;
  top->value_.gc = (GCObject *)openf;
  top->tt_ = 22;
  ++L->top;
  lua_pushstring(L, modname);
  v8 = ++L->nCcalls;
  v9 = L->top - 2;
  if ( v8 >= 0xC8u )
  {
    if ( v8 == 200 )
      luaG_runerror(L, "C stack overflow");
    if ( v8 >= 0xE1u )
      luaD_throw(L, 6);
  }
  ++L->nny;
  if ( !luaD_precall(L, v9, 1) )
    luaV_execute(L);
  --L->nny;
  --L->nCcalls;
  luaL_getsubtable(L, v10, "_LOADED");
  v11 = L->top;
  v12 = -1i64;
  v11->value_.gc = v11[-2].value_.gc;
  v11->tt_ = v11[-2].tt_;
  v13 = L->top;
  L->top = v13 + 2;
  do
    ++v12;
  while ( modname[v12] );
  v14 = luaS_newlstr(L, modname, v12);
  v13[1].value_.gc = (GCObject *)v14;
  v13[1].tt_ = v14->tsv.tt | 0x40;
  luaV_settable(L, v13 - 1, L->top - 1, L->top - 2);
  L->top -= 3;
  v15 = L->top;
  if ( glb )
  {
    v15->value_.gc = v15[-1].value_.gc;
    v15->tt_ = v15[-1].tt_;
    ++L->top;
    lua_setglobal(L, modname);
  }
}

void __fastcall luaL_setfuncs(lua_State *L, const luaL_Reg *l, int nup)
{
  __int64 v4; // rbp
  int v6; // er14
  __int64 v7; // r10
  int v8; // er8
  CallInfo *ci; // rdx
  lua_TValue *p_l_registry; // rdx
  lua_TValue *func; // rax
  lua_TValue *top; // rcx
  const char *name; // rdx
  CallInfo *v14; // r8
  lua_TValue *v15; // rdi
  lua_TValue *v16; // rax
  int v17; // ecx
  lua_TValue *v18; // rsi
  unsigned __int64 v19; // r8
  TString *v20; // rax
  int v21; // ebp
  lua_TValue *i; // rcx

  v4 = (unsigned int)nup;
  luaL_checkversion_(L, 502.0);
  if ( !lua_checkstack(L, (int)v4 + 20) )
    luaL_error(L, "stack overflow (%s)", "too many upvalues");
  if ( l->name )
  {
    v6 = -2 - v4;
    do
    {
      if ( (int)v4 > 0 )
      {
        v7 = v4;
        v8 = -(int)v4;
        do
        {
          ci = L->ci;
          if ( v8 <= -1001000 )
          {
            if ( v8 == -1001000 )
            {
              p_l_registry = &L->l_G->l_registry;
            }
            else
            {
              func = ci->func;
              if ( ci->func->tt_ == 22 || (int)v4 - 1001000 > func->value_.gc->ts.tsv.extra )
                p_l_registry = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
              else
                p_l_registry = (lua_TValue *)((char *)&func->value_.gc[-76999] + 16 * (int)v4 - 192);
            }
          }
          else
          {
            p_l_registry = &L->top[v8];
          }
          top = L->top;
          top->value_.gc = p_l_registry->value_.gc;
          top->tt_ = p_l_registry->tt_;
          ++L->top;
          --v7;
        }
        while ( v7 );
      }
      lua_pushcclosure(L, l->func, v4);
      name = l->name;
      v14 = L->ci;
      if ( v6 <= 0 )
      {
        if ( v6 <= -1001000 )
        {
          if ( v6 == -1001000 )
          {
            v15 = &L->l_G->l_registry;
          }
          else
          {
            v16 = v14->func;
            v17 = -1001000 - v6;
            if ( v14->func->tt_ == 22 || v17 > v16->value_.gc->ts.tsv.extra )
              v15 = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
            else
              v15 = (lua_TValue *)&(&v16->value_.gc->th.top)[2 * v17];
          }
        }
        else
        {
          v15 = &L->top[v6];
        }
      }
      else
      {
        v15 = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
        if ( &v14->func[v6] < L->top )
          v15 = &v14->func[v6];
      }
      v18 = L->top;
      v19 = -1i64;
      L->top = v18 + 1;
      do
        ++v19;
      while ( name[v19] );
      v20 = luaS_newlstr(L, name, v19);
      v18->value_.gc = (GCObject *)v20;
      v18->tt_ = v20->tsv.tt | 0x40;
      luaV_settable(L, v15, L->top - 1, L->top - 2);
      L->top -= 2;
      ++l;
    }
    while ( l->name );
  }
  v21 = ~(_DWORD)v4;
  if ( v21 < 0 )
  {
    L->top += v21 + 1;
  }
  else
  {
    for ( i = &L->ci->func[v21 + 1]; L->top < i; ++L->top )
      L->top->tt_ = 0;
    L->top = i;
  }
}

__int64 __fastcall luaL_testudata(lua_State *L, int ud, const char *tname)
{
  lua_TValue *v4; // rax
  int v5; // er10
  int v6; // ecx
  __int64 gc; // rdi
  lua_TValue *v8; // rax
  const char *v9; // r11
  int tt; // ecx
  Table *metatable; // rcx
  lua_TValue *top; // rax
  lua_TValue *v13; // rax
  __int64 v14; // rsi
  const lua_TValue *v15; // rdx
  const extension::gfxi_detail::TranslatorImpl *v16; // r8
  bool v17; // zf
  int v18; // eax

  v4 = index2addr(L, ud);
  v6 = v4->tt_ & 0xF;
  if ( v6 == 2 )
  {
    gc = (__int64)v4->value_.gc;
  }
  else
  {
    if ( v6 != 7 )
      return 0i64;
    gc = (__int64)&v4->value_.gc->h.lastfree;
  }
  if ( !gc )
    return 0i64;
  v8 = index2addr(L, v5);
  tt = v8->tt_;
  if ( (tt & 0xF) == 5 || (tt & 0xF) == 7 )
    metatable = v8->value_.gc->u.uv.metatable;
  else
    metatable = L->l_G->mt[tt & 0xF];
  if ( !metatable )
    return 0i64;
  top = L->top;
  top->value_.gc = (GCObject *)metatable;
  top->tt_ = 69;
  ++L->top;
  lua_getfield(L, -1001000, v9);
  v13 = L->top;
  v14 = 0i64;
  v15 = v13 - 1;
  v16 = (const extension::gfxi_detail::TranslatorImpl *)&v13[-2];
  if ( &v13[-1] == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || v16 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || v15->tt_ != v16->RefCount
    || (v17 = luaV_equalobj_(0i64, v15, (const lua_TValue *)v16) == 0, v18 = 1, v17) )
  {
    v18 = 0;
  }
  if ( v18 )
    v14 = gc;
  L->top -= 2;
  return v14;
}

global_State **__fastcall luaL_tolstring(lua_State *L, int idx, unsigned __int64 *len)
{
  const extension::gfxi_detail::TranslatorImpl *v6; // rax
  int v7; // eax
  lua_TValue *v8; // rax
  int tt; // ecx
  BOOL v10; // eax
  const char *v11; // rdx
  lua_TValue *v12; // rax
  lua_TValue *v13; // r10
  int v14; // edi
  const unsigned int **v15; // rax

  if ( luaL_callmeta(L, idx, (const char *)len) )
    return lua_tolstring(L, -1, len);
  v6 = (const extension::gfxi_detail::TranslatorImpl *)index2addr(L, idx);
  if ( v6 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
    goto LABEL_16;
  v7 = v6->RefCount & 0xF;
  if ( !v7 )
  {
    lua_pushlstring(L, "nil", 3ui64);
    return lua_tolstring(L, -1, len);
  }
  if ( v7 != 1 )
  {
    if ( (unsigned int)(v7 - 3) <= 1 )
    {
      *L->top++ = *index2addr(L, idx);
      return lua_tolstring(L, -1, len);
    }
LABEL_16:
    v12 = index2addr(L, idx);
    if ( v12 == v13 )
      v14 = -1;
    else
      v14 = v12->tt_ & 0xF;
    v15 = lua_topointer(L, idx);
    lua_pushfstring(
      L,
      "%s: %p",
      *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[14][8 * v14 + 112],
      v15);
    return lua_tolstring(L, -1, len);
  }
  v8 = index2addr(L, idx);
  tt = v8->tt_;
  v10 = tt && (tt != 1 || v8->value_.b);
  v11 = "false";
  if ( v10 )
    v11 = "true";
  lua_pushstring(L, v11);
  return lua_tolstring(L, -1, len);
}

void __fastcall luaL_traceback(lua_State *L, lua_State *L1, const char *msg, int level)
{
  signed __int64 v8; // r15
  int v9; // er12
  int v10; // er13
  global_State *l_G; // rcx
  __int64 v12; // rax
  TString *v13; // rax
  lua_TValue *top; // rcx
  int v15; // eax
  lua_State *ci; // rcx
  int v17; // eax
  global_State *v18; // rcx
  __int64 v19; // rax
  GCObject *next; // rdi
  Closure *v21; // rsi
  lua_TValue *v22; // rcx
  global_State *v23; // rcx
  __int64 v24; // rax
  TString *v25; // rax
  lua_TValue *v26; // rcx
  const char *namewhat; // rax
  global_State *v28; // rcx
  __int64 v29; // rax
  TString *v30; // rax
  lua_TValue *v31; // rcx
  lua_Debug ar; // [rsp+30h] [rbp-C8h] BYREF

  v8 = ((char *)L->top - (char *)L->ci->func - 16) >> 4;
  v9 = 0;
  v10 = countlevels(L1);
  if ( v10 > 22 )
    v9 = 12;
  if ( msg )
    lua_pushfstring(L, "%s\n", msg);
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
  v13 = internshrstr(L, "stack traceback:", 0x10ui64);
LABEL_10:
  top = L->top;
  top->value_.gc = (GCObject *)v13;
  top->tt_ = v13->tsv.tt | 0x40;
  for ( ++L->top; ; lua_concat(L, (((char *)L->top - (char *)L->ci->func - 16) >> 4) - v8) )
  {
    v15 = level;
    if ( level < 0 )
      goto LABEL_18;
    ci = (lua_State *)L1->ci;
    if ( level > 0 )
    {
      do
      {
        if ( ci == (lua_State *)&L1->base_ci )
          break;
        ci = (lua_State *)ci->top;
        --v15;
      }
      while ( v15 > 0 );
    }
    if ( v15 || ci == (lua_State *)&L1->base_ci )
    {
LABEL_18:
      ci = (lua_State *)ar.i_ci;
      v17 = 0;
    }
    else
    {
      v17 = 1;
      ar.i_ci = (CallInfo *)ci;
    }
    ++level;
    if ( !v17 )
      break;
    if ( level == v9 )
    {
      v18 = L->l_G;
      if ( v18->GCdebt > 0 )
      {
        if ( v18->gcrunning )
        {
          luaC_forcestep(L);
        }
        else
        {
          v19 = v18->GCdebt + 2400;
          v18->GCdebt = -2400i64;
          v18->totalbytes += v19;
        }
      }
      v13 = internshrstr(L, "\n\t...", 5ui64);
      level = v10 - 10;
      goto LABEL_10;
    }
    next = ci->next;
    if ( (ci->next->gch.tt & 0x1F) == 6 )
      v21 = (Closure *)next->gch.next;
    else
      v21 = 0i64;
    auxgetinfo(L1, "Slnt", &ar, v21, (CallInfo *)ci);
    if ( strchr("Slnt", 102) )
    {
      v22 = L1->top;
      v22->value_.gc = next->gch.next;
      v22->tt_ = *(_DWORD *)&next->th.tt;
      ++L1->top;
    }
    if ( strchr("Slnt", 76) )
      collectvalidlines(L1, v21);
    lua_pushfstring(L, "\n\t%s:", ar.short_src);
    if ( ar.currentline > 0 )
      lua_pushfstring(L, "%d:", (unsigned int)ar.currentline);
    v23 = L->l_G;
    if ( v23->GCdebt > 0 )
    {
      if ( v23->gcrunning )
      {
        luaC_forcestep(L);
      }
      else
      {
        v24 = v23->GCdebt + 2400;
        v23->GCdebt = -2400i64;
        v23->totalbytes += v24;
      }
    }
    v25 = internshrstr(L, " in ", 4ui64);
    v26 = L->top;
    v26->value_.gc = (GCObject *)v25;
    v26->tt_ = v25->tsv.tt | 0x40;
    namewhat = ar.namewhat;
    ++L->top;
    if ( *namewhat )
      lua_pushfstring(L, "function '%s'", ar.name);
    else
      pushfuncname(L, &ar);
    if ( ar.istailcall )
    {
      v28 = L->l_G;
      if ( v28->GCdebt > 0 )
      {
        if ( v28->gcrunning )
        {
          luaC_forcestep(L);
        }
        else
        {
          v29 = v28->GCdebt + 2400;
          v28->GCdebt = -2400i64;
          v28->totalbytes += v29;
        }
      }
      v30 = internshrstr(L, "\n\t(...tail calls...)", 0x14ui64);
      v31 = L->top;
      v31->value_.gc = (GCObject *)v30;
      v31->tt_ = v30->tsv.tt | 0x40;
      ++L->top;
    }
  }
  lua_concat(L, (((char *)L->top - (char *)L->ci->func - 16) >> 4) - v8);
}

void __fastcall luaL_unref(lua_State *L, int t, int ref)
{
  lua_TValue *top; // rax

  if ( ref >= 0 )
  {
    lua_rawgeti(L, -1001000, 0);
    lua_rawseti(L, -1001000, ref);
    top = L->top;
    top->tt_ = 3;
    top->value_.n = (float)ref;
    ++L->top;
    lua_rawseti(L, -1001000, 0);
  }
}

void __fastcall luaL_where(lua_State *L, int level)
{
  bool v3; // zf
  lua_State *ci; // rcx
  int v5; // eax
  global_State *l_G; // rcx
  __int64 v7; // rax
  TString *v8; // rax
  lua_TValue *top; // rcx
  lua_Debug ar; // [rsp+20h] [rbp-98h] BYREF

  v3 = level == 0;
  if ( level < 0 )
    goto LABEL_13;
  ci = (lua_State *)L->ci;
  if ( level > 0 )
  {
    do
    {
      if ( ci == (lua_State *)&L->base_ci )
        break;
      ci = (lua_State *)ci->top;
      --level;
    }
    while ( level > 0 );
    v3 = level == 0;
  }
  if ( !v3 || ci == (lua_State *)&L->base_ci )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    ar.i_ci = (CallInfo *)ci;
  }
  if ( v5 && (lua_getinfo(L, "Sl", &ar), ar.currentline > 0) )
  {
    lua_pushfstring(L, "%s:%d: ", ar.short_src, (unsigned int)ar.currentline);
  }
  else
  {
LABEL_13:
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
    v8 = internshrstr(L, &pnewText, 0i64);
    top = L->top;
    top->value_.gc = (GCObject *)v8;
    top->tt_ = v8->tsv.tt | 0x40;
    ++L->top;
  }
}

void __fastcall pushfuncname(lua_State *L, lua_Debug *ar)
{
  char v3; // cl
  global_State *l_G; // rcx
  __int64 v5; // rax
  TString *v6; // rax
  lua_TValue *top; // rcx
  lua_TValue *v8; // rcx
  const char *p_l_G; // r8
  global_State *v10; // rcx
  __int64 v11; // rax
  lua_TValue *v12; // rax
  lua_TValue *v13; // rcx

  v3 = *ar->what;
  if ( v3 == 109 )
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
        v5 = l_G->GCdebt + 2400;
        l_G->GCdebt = -2400i64;
        l_G->totalbytes += v5;
      }
    }
    v6 = internshrstr(L, "main chunk", 0xAui64);
    top = L->top;
    top->value_.gc = (GCObject *)v6;
    top->tt_ = v6->tsv.tt | 0x40;
    ++L->top;
    return;
  }
  if ( v3 != 67 )
  {
    lua_pushfstring(L, "function <%s:%d>", ar->short_src, (unsigned int)ar->linedefined);
    return;
  }
  if ( !pushglobalfuncname(L, ar) )
  {
    lua_pushlstring(L, "?", 1ui64);
    return;
  }
  v8 = L->top - 1;
  if ( (v8->tt_ & 0xF) == 4 )
    goto LABEL_17;
  if ( luaV_tostring(L, L->top - 1) )
  {
    v10 = L->l_G;
    if ( v10->GCdebt > 0 )
    {
      if ( v10->gcrunning )
      {
        luaC_forcestep(L);
      }
      else
      {
        v11 = v10->GCdebt + 2400;
        v10->GCdebt = -2400i64;
        v10->totalbytes += v11;
      }
    }
    v8 = L->top - 1;
LABEL_17:
    p_l_G = (const char *)&v8->value_.gc->th.l_G;
    goto LABEL_18;
  }
  p_l_G = 0i64;
LABEL_18:
  lua_pushfstring(L, "function '%s'", p_l_G);
  v12 = L->top;
  v13 = v12 - 1;
  if ( &v12[-1] < v12 )
  {
    do
    {
      v13[-1].value_.gc = v13->value_.gc;
      v13[-1].tt_ = v13->tt_;
      ++v13;
    }
    while ( v13 < L->top );
  }
  --L->top;
}

__int64 __fastcall pushglobalfuncname(lua_State *L, lua_Debug *ar)
{
  signed __int64 v3; // rdi
  int v4; // esi
  lua_TValue *v5; // rax
  __int64 v6; // r10
  GCObject *v7; // rdx
  Value v8; // r8
  global_State *l_G; // rax
  lua_TValue *i; // rcx

  v3 = ((char *)L->top - (char *)L->ci->func - 16) >> 4;
  lua_getinfo(L, "f", ar);
  lua_rawgeti(L, -1001000, 2);
  v4 = v3 + 1;
  if ( (unsigned int)findfield(L, (int)v3 + 1, 2) )
  {
    v5 = index2addr(L, v4);
    *v5 = *(lua_TValue *)(v6 - 16);
    if ( v4 < -1001000 && (*(_BYTE *)(v6 - 8) & 0x40) != 0 )
    {
      v7 = *(GCObject **)(v6 - 16);
      if ( (v7->gch.marked & 3) != 0 )
      {
        v8.gc = L->ci->func->value_.gc;
        if ( (v8.gc->gch.marked & 4) != 0 )
        {
          l_G = L->l_G;
          if ( l_G->gcstate <= 1u )
          {
            reallymarkobject(L->l_G, v7);
            L->top -= 2;
            return 1i64;
          }
          v8.gc->gch.marked = v8.gc->gch.marked & 0xB8 | l_G->currentwhite & 3;
        }
      }
    }
    L->top -= 2;
    return 1i64;
  }
  else if ( (int)v3 < 0 )
  {
    L->top += v4;
    return 0i64;
  }
  else
  {
    for ( i = &L->ci->func[(int)v3 + 1]; L->top < i; ++L->top )
      L->top->tt_ = 0;
    L->top = i;
    return 0i64;
  }
}

void __fastcall __noreturn tag_error(lua_State *L, int narg, int tag)
{
  const extension::gfxi_detail::TranslatorImpl *v5; // rax
  const char *v6; // r10
  __int64 v7; // r11
  int v8; // eax
  const char *v9; // rax

  v5 = (const extension::gfxi_detail::TranslatorImpl *)index2addr(L, narg);
  if ( v5 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
    v8 = -1;
  else
    v8 = v5->RefCount & 0xF;
  v9 = lua_pushfstring(L, "%s expected, got %s", v6, *(const char **)(v7 + 8i64 * (v8 + 1)));
  luaL_argerror(L, narg, v9);
}

void __fastcall __noreturn typeerror(lua_State *L, int narg, const char *tname)
{
  const extension::gfxi_detail::TranslatorImpl *v5; // rax
  const char *v6; // r10
  int v7; // eax
  const char *v8; // rax

  v5 = (const extension::gfxi_detail::TranslatorImpl *)index2addr(L, narg);
  if ( v5 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
    v7 = -1;
  else
    v7 = v5->RefCount & 0xF;
  v8 = lua_pushfstring(
         L,
         "%s expected, got %s",
         v6,
         *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[14][8 * v7 + 112]);
  luaL_argerror(L, narg, v8);
}

