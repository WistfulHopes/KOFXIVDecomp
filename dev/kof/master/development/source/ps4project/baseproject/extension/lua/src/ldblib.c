#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lapi.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/ldo.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/ldebug.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lgc.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstate.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstring.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lauxlib.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lfunc.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lvm.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lzio.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/ltable.c"

const luaL_Reg dblib[68]; // 0x1408B00F0
long db_getregistry(lua_State * L); // 0x14028BA00
long db_getmetatable(lua_State * L); // 0x14028BA30
long db_setmetatable(lua_State * L); // 0x14028BAF0
long db_getuservalue(lua_State * L); // 0x14028BB70
long db_setuservalue(lua_State * L); // 0x14028BBE0
void treatstackoption(lua_State * L, lua_State * L1, const char * fname); // 0x14028BCE0
long db_getinfo(lua_State * L); // 0x14028BD70
long db_getlocal(lua_State * L); // 0x14028C6A0
long db_setlocal(lua_State * L); // 0x14028C8D0
long auxupvalue(lua_State * L, long get); // 0x14028CAE0
long db_getupvalue(lua_State * L); // 0x14028CC80
long db_setupvalue(lua_State * L); // 0x14028CC90
long checkupval(lua_State * L, long argf, long argnup); // 0x14028CCE0
long db_upvalueid(lua_State * L); // 0x14028CE40
long db_upvaluejoin(lua_State * L); // 0x14028CEE0
void hookf(lua_State * L, lua_Debug * ar); // 0x14028CFB0
long db_sethook(lua_State * L); // 0x14028D0E0
long db_gethook(lua_State * L); // 0x14028D440
long db_debug(lua_State * L); // 0x14028D660
long db_traceback(lua_State * L); // 0x14028DA60
long luaopen_debug(lua_State * L); // 0x14028DBE0//decompilation failure at 1408B00F0!
__int64 __fastcall auxupvalue(lua_State *L, int get)
{
  int v4; // eax
  CallInfo *ci; // r8
  int v6; // ecx
  lua_TValue *top; // r10
  const extension::gfxi_detail::TranslatorImpl *v8; // rax
  char *v9; // rdx
  int v10; // eax
  const char *v11; // rdx
  __int64 v12; // r9
  Value *v13; // r8
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  lua_TValue *v19; // rax
  lua_TValue *i; // r8
  lua_TValue *v21; // rcx

  v4 = luaL_checkinteger(L, 2);
  ci = L->ci;
  v6 = v4;
  top = L->top;
  v8 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[1];
  if ( v8 >= (const extension::gfxi_detail::TranslatorImpl *)top
    || (v9 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168],
        v8 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168])
    || (ci->func[1].tt_ & 0xF) != 6 )
  {
    tag_error(L, 1, 6);
  }
  if ( get )
  {
    if ( &ci->func[1] < top )
      v9 = (char *)&ci->func[1];
    v10 = *((_DWORD *)v9 + 2) & 0x3F;
    if ( v10 == 6 )
    {
      v14 = *(_QWORD *)v9;
      v15 = *(_QWORD *)(*(_QWORD *)v9 + 24i64);
      if ( v6 >= 1 && v6 <= *(_DWORD *)(v15 + 80) )
      {
        v16 = v6 - 1;
        v13 = *(Value **)(*(_QWORD *)(v14 + 8 * v16 + 32) + 16i64);
        v17 = *(_QWORD *)(*(_QWORD *)(v15 + 56) + 16 * v16);
        if ( v17 )
        {
          v11 = (const char *)(v17 + 24);
          if ( !v11 )
            goto LABEL_20;
        }
        else
        {
          v11 = &pnewText;
        }
        goto LABEL_18;
      }
    }
    else if ( v10 == 38 )
    {
      v12 = *(_QWORD *)v9;
      if ( v6 >= 1 && v6 <= *(unsigned __int8 *)(v12 + 10) )
      {
        v11 = &pnewText;
        v13 = (Value *)(v12 + 16 * (v6 - 1 + 2i64));
LABEL_18:
        top->value_ = (Value)v13->gc;
        top->tt_ = v13[1].b;
        ++L->top;
        goto LABEL_20;
      }
    }
    v11 = 0i64;
    goto LABEL_20;
  }
  v11 = lua_setupvalue(L, 1, v6);
LABEL_20:
  if ( !v11 )
    return 0i64;
  lua_pushstring(L, v11);
  v19 = index2addr(L, ~get);
  for ( i = L->top; i > v19; --i )
  {
    i->value_.gc = i[-1].value_.gc;
    i->tt_ = i[-1].tt_;
  }
  v21 = L->top;
  v19->value_.gc = v21->value_.gc;
  v19->tt_ = v21->tt_;
  return (unsigned int)(get + 1);
}

__int64 __fastcall checkupval(lua_State *L, int argf, int argnup)
{
  int v6; // edi
  const extension::gfxi_detail::TranslatorImpl *v7; // rax
  lua_TValue *top; // rsi
  Closure *gc; // rbp
  lua_TValue *v10; // rcx
  lua_Debug ar; // [rsp+30h] [rbp-B8h] BYREF

  v6 = luaL_checkinteger(L, argnup);
  v7 = (const extension::gfxi_detail::TranslatorImpl *)index2addr(L, argf);
  if ( v7 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (v7->RefCount & 0xF) != 6 )
  {
    tag_error(L, argf, 6);
  }
  *L->top = *index2addr(L, argf);
  top = L->top;
  L->top = top;
  if ( (top->tt_ & 0x1F) == 6 )
    gc = (Closure *)top->value_.gc;
  else
    gc = 0i64;
  auxgetinfo(L, "u", &ar, gc, 0i64);
  if ( strchr("u", 102) )
  {
    v10 = L->top;
    v10->value_.gc = top->value_.gc;
    v10->tt_ = top->tt_;
    ++L->top;
  }
  if ( strchr("u", 76) )
    collectvalidlines(L, gc);
  if ( v6 < 1 || v6 > ar.nups )
    luaL_argerror(L, argnup, "invalid upvalue index");
  return (unsigned int)v6;
}

char *__fastcall db_debug(lua_State *L)
{
  _iobuf *v2; // rax
  _iobuf *v3; // rax
  _iobuf *v4; // rax
  char *result; // rax
  __int64 v6; // rcx
  char v7; // al
  __int64 v8; // rax
  Value v9; // rbx
  const Table *gc; // rcx
  char *v11; // rdx
  __int64 v12; // rcx
  GCObject *v13; // rdx
  unsigned __int64 len; // r8
  global_State *l_G; // rax
  __int64 errfunc; // rbp
  CallInfo *ci; // r14
  unsigned __int8 allowhook; // r15
  unsigned __int16 nny; // r12
  signed __int64 v20; // rbx
  int v21; // esi
  lua_TValue *v22; // rbx
  lua_TValue *v23; // rcx
  const char *p_l_G; // rbx
  global_State *v25; // rcx
  __int64 v26; // rax
  _iobuf *v27; // rax
  _iobuf *v28; // rax
  lua_TValue *i; // rcx
  _iobuf *v30; // rax
  _iobuf *v31; // rax
  _iobuf *v32; // rax
  __int64 v33[2]; // [rsp+20h] [rbp-198h] BYREF
  lua_TValue *ud; // [rsp+30h] [rbp-188h] BYREF
  int v35; // [rsp+38h] [rbp-180h]
  Zio z; // [rsp+40h] [rbp-178h] BYREF
  char string[256]; // [rsp+70h] [rbp-148h] BYREF

  v2 = _acrt_iob_func(2u);
  fprintf(v2, "%s", "lua_debug> ");
  v3 = _acrt_iob_func(2u);
  fflush(v3);
  v4 = _acrt_iob_func(0);
  result = fgets(string, 250, v4);
  if ( result )
  {
    while ( 1 )
    {
      v6 = 0i64;
      while ( 1 )
      {
        v7 = string[v6++];
        if ( v7 != aCont[v6 - 1] )
          break;
        if ( v6 == 6 )
          return 0i64;
      }
      v33[0] = (__int64)string;
      v8 = -1i64;
      do
        ++v8;
      while ( string[v8] );
      v33[1] = v8;
      z.reader = getS;
      z.data = v33;
      z.L = L;
      z.n = 0i64;
      z.p = 0i64;
      if ( !luaD_protectedparser(L, &z, "=(debug command)", 0i64) )
      {
        v9.gc = (GCObject *)L->top[-1].value_;
        if ( v9.gc->ts.tsv.extra == 1 )
        {
          gc = (const Table *)L->l_G->l_registry.value_.gc;
          if ( gc->sizearray <= 1u )
          {
            v11 = (char *)hashnum(gc, 2.0);
            while ( *((_DWORD *)v11 + 6) != 3 || *((float *)v11 + 4) != 2.0 )
            {
              v11 = (char *)*((_QWORD *)v11 + 4);
              if ( !v11 )
              {
                v11 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
                break;
              }
            }
          }
          else
          {
            v11 = (char *)&gc->array[1];
          }
          v12 = *(_QWORD *)(v9.gc->u.uv.len + 16);
          *(_QWORD *)v12 = *(_QWORD *)v11;
          *(_DWORD *)(v12 + 8) = *((_DWORD *)v11 + 2);
          if ( (v11[8] & 0x40) != 0 )
          {
            v13 = *(GCObject **)v11;
            if ( (v13->gch.marked & 3) != 0 )
            {
              len = v9.gc->u.uv.len;
              if ( (*(_BYTE *)(len + 9) & 4) != 0 )
              {
                l_G = L->l_G;
                if ( l_G->gcstate > 1u )
                  *(_BYTE *)(len + 9) = *(_BYTE *)(len + 9) & 0xB8 | l_G->currentwhite & 3;
                else
                  reallymarkobject(L->l_G, v13);
              }
            }
          }
        }
        errfunc = L->errfunc;
        ci = L->ci;
        allowhook = L->allowhook;
        nny = L->nny;
        ud = L->top - 1;
        v20 = (char *)ud - (char *)L->stack;
        v35 = 0;
        L->errfunc = 0i64;
        v21 = luaD_rawrunprotected(L, f_call, &ud);
        if ( v21 )
        {
          v22 = (lua_TValue *)((char *)L->stack + v20);
          luaF_close(L, v22);
          seterrorobj(L, v21, v22);
          L->ci = ci;
          L->allowhook = allowhook;
          L->nny = nny;
          luaD_shrinkstack(L);
        }
        L->errfunc = errfunc;
        if ( !v21 )
          goto LABEL_36;
      }
      v23 = L->top - 1;
      if ( (v23->tt_ & 0xF) == 4 )
        goto LABEL_34;
      if ( luaV_tostring(L, L->top - 1) )
        break;
      p_l_G = 0i64;
LABEL_35:
      v27 = _acrt_iob_func(2u);
      fprintf(v27, "%s\n", p_l_G);
      v28 = _acrt_iob_func(2u);
      fflush(v28);
LABEL_36:
      for ( i = L->ci->func + 1; L->top < i; ++L->top )
        L->top->tt_ = 0;
      L->top = i;
      v30 = _acrt_iob_func(2u);
      fprintf(v30, "%s", "lua_debug> ");
      v31 = _acrt_iob_func(2u);
      fflush(v31);
      v32 = _acrt_iob_func(0);
      if ( !fgets(string, 250, v32) )
        return 0i64;
    }
    v25 = L->l_G;
    if ( v25->GCdebt > 0 )
    {
      if ( v25->gcrunning )
      {
        luaC_forcestep(L);
      }
      else
      {
        v26 = v25->GCdebt + 2400;
        v25->GCdebt = -2400i64;
        v25->totalbytes += v26;
      }
    }
    v23 = L->top - 1;
LABEL_34:
    p_l_G = (const char *)&v23->value_.gc->th.l_G;
    goto LABEL_35;
  }
  return result;
}

__int64 __fastcall db_gethook(lua_State *L)
{
  CallInfo *ci; // rdx
  lua_TValue *top; // rcx
  unsigned int v4; // esi
  const extension::gfxi_detail::TranslatorImpl *v5; // rax
  char *v6; // rdi
  lua_State *v7; // rdi
  void (__fastcall *hook)(lua_State *, lua_Debug *); // rax
  unsigned __int8 hookmask; // bp
  lua_TValue *v10; // rax
  __int64 v11; // rdx
  lua_TValue *v12; // rcx
  lua_TValue *v13; // rax
  lua_TValue *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  global_State *l_G; // rcx
  bool v18; // cc
  __int64 v19; // rax
  unsigned __int64 v20; // r8
  TString *v21; // rax
  lua_TValue *v22; // rcx
  __int64 result; // rax
  lua_TValue *v24; // rcx
  float basehookcount; // xmm0_4
  char str[8]; // [rsp+20h] [rbp-18h] BYREF

  ci = L->ci;
  top = L->top;
  v4 = 0;
  v5 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[1];
  if ( v5 >= (const extension::gfxi_detail::TranslatorImpl *)top
    || (v6 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168],
        v5 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168])
    || (ci->func[1].tt_ & 0xF) != 8 )
  {
    v7 = L;
  }
  else
  {
    if ( &ci->func[1] < top )
      v6 = (char *)&ci->func[1];
    if ( *((_DWORD *)v6 + 2) == 72 )
      v7 = *(lua_State **)v6;
    else
      v7 = 0i64;
  }
  hook = v7->hook;
  hookmask = v7->hookmask;
  if ( !hook || hook == hookf )
  {
    luaL_getsubtable(L, (int)ci, "_HKEY");
    v10 = v7->top;
    v10->value_.gc = (GCObject *)v7;
    v10->tt_ = 72;
    ++v7->top;
    if ( v7 != L )
    {
      v11 = (__int64)&v7->top[-1];
      v7->top = (lua_TValue *)v11;
      v12 = L->top;
      L->top = v12 + 1;
      v12->value_.gc = *(GCObject **)v11;
      v12->tt_ = *(_DWORD *)(v11 + 8);
    }
    L->top[-1] = *luaH_get((Table *)L->top[-2].value_.gc, (const lua_TValue *)L->top - 1);
    v13 = L->top;
    v14 = v13 - 1;
    if ( &v13[-1] < v13 )
    {
      do
      {
        v14[-1].value_.gc = v14->value_.gc;
        v14[-1].tt_ = v14->tt_;
        ++v14;
      }
      while ( v14 < L->top );
    }
    --L->top;
  }
  else
  {
    lua_pushlstring(L, "external hook", 0xDui64);
  }
  if ( (hookmask & 1) != 0 )
  {
    str[0] = 99;
    v4 = 1;
  }
  if ( (hookmask & 2) != 0 )
  {
    v15 = v4++;
    str[v15] = 114;
  }
  if ( (hookmask & 4) != 0 )
  {
    v16 = v4++;
    str[v16] = 108;
  }
  l_G = L->l_G;
  v18 = l_G->GCdebt <= 0;
  str[v4] = 0;
  if ( !v18 )
  {
    if ( l_G->gcrunning )
    {
      luaC_forcestep(L);
    }
    else
    {
      v19 = l_G->GCdebt + 2400;
      l_G->GCdebt = -2400i64;
      l_G->totalbytes += v19;
    }
  }
  v20 = -1i64;
  do
    ++v20;
  while ( str[v20] );
  v21 = luaS_newlstr(L, str, v20);
  v22 = L->top;
  v22->value_.gc = (GCObject *)v21;
  v22->tt_ = v21->tsv.tt | 0x40;
  result = 3i64;
  v24 = ++L->top;
  basehookcount = (float)v7->basehookcount;
  v24->tt_ = 3;
  v24->value_.n = basehookcount;
  ++L->top;
  return result;
}

__int64 __fastcall db_getinfo(lua_State *L)
{
  CallInfo *ci; // rdx
  int v3; // er15
  lua_TValue *top; // rcx
  const extension::gfxi_detail::TranslatorImpl *v5; // rax
  int v6; // ebx
  char *v7; // r14
  lua_State *v8; // r14
  int v9; // edi
  const extension::gfxi_detail::TranslatorImpl *v10; // rax
  const char *p_l_G; // rbp
  int v12; // ebx
  lua_TValue *v13; // rdx
  int tt; // eax
  const extension::gfxi_detail::TranslatorImpl *v15; // rax
  lua_TValue *v16; // rbp
  global_State *l_G; // rcx
  __int64 v18; // rax
  lua_TValue *v19; // r10
  int v20; // eax
  int n; // edx
  int v22; // eax
  CallInfo *v23; // rcx
  int v24; // eax
  global_State *v25; // rcx
  __int64 v26; // rax
  Table *v27; // rdx
  lua_TValue *v28; // rax
  lua_TValue *v29; // rbx
  TString *v30; // rax
  global_State *v31; // rcx
  __int64 v32; // rax
  unsigned __int64 v33; // r8
  TString *v34; // rax
  lua_TValue *v35; // rcx
  lua_TValue *v36; // rbx
  TString *v37; // rax
  lua_TValue *v38; // rax
  float linedefined; // xmm0_4
  lua_TValue *v40; // rbx
  TString *v41; // rax
  lua_TValue *v42; // rax
  float lastlinedefined; // xmm0_4
  lua_TValue *v44; // rbx
  TString *v45; // rax
  const char *what; // rdx
  lua_TValue *v47; // rdi
  TString *v48; // rax
  lua_TValue *v49; // rax
  float currentline; // xmm0_4
  lua_TValue *v51; // rbx
  TString *v52; // rax
  lua_TValue *v53; // rcx
  __m128i v54; // xmm0
  lua_TValue *v55; // rbx
  TString *v56; // rax
  lua_TValue *v57; // rcx
  __m128i v58; // xmm0
  lua_TValue *v59; // rbx
  TString *v60; // rax
  lua_TValue *v61; // rcx
  lua_TValue *v62; // rbx
  TString *v63; // rax
  lua_TValue *v64; // rdi
  TString *v65; // rax
  const char *namewhat; // rdx
  lua_TValue *v67; // rdi
  TString *v68; // rax
  lua_TValue *v69; // rax
  lua_TValue *v70; // rbx
  TString *v71; // rax
  float result; // [rsp+20h] [rbp-D8h] BYREF
  int v74[6]; // [rsp+28h] [rbp-D0h] BYREF
  lua_Debug ar; // [rsp+40h] [rbp-B8h] BYREF

  ci = L->ci;
  v3 = 0;
  top = L->top;
  v5 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[1];
  if ( v5 >= (const extension::gfxi_detail::TranslatorImpl *)top
    || v5 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (ci->func[1].tt_ & 0xF) != 8 )
  {
    v6 = 0;
    v8 = L;
  }
  else
  {
    v6 = 1;
    v7 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
    if ( &ci->func[1] < top )
      v7 = (char *)&ci->func[1];
    if ( *((_DWORD *)v7 + 2) == 72 )
      v8 = *(lua_State **)v7;
    else
      v8 = 0i64;
  }
  v9 = v6 + 2;
  v10 = (const extension::gfxi_detail::TranslatorImpl *)index2addr(L, v6 + 2);
  if ( v10 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (v10->RefCount & 0xF) == 0 )
  {
    p_l_G = "flnStu";
  }
  else
  {
    p_l_G = (const char *)lua_tolstring(L, v9, 0i64);
    if ( !p_l_G )
      tag_error(L, v9, 4);
  }
  v12 = v6 + 1;
  v13 = index2addr(L, v12);
  tt = v13->tt_;
  if ( tt == 3
    || (tt & 0xF) == 4 && luaO_str2d((const char *)&v13->value_.gc->th.l_G, v13->value_.gc->ts.tsv.len, &result) )
  {
    v19 = index2addr(L, v12);
    v20 = v19->tt_;
    if ( v20 != 3 )
    {
      if ( (v20 & 0xF) != 4 || !luaO_str2d((const char *)&v19->value_.gc->th.l_G, v19->value_.gc->ts.tsv.len, &result) )
      {
        n = 0;
        v22 = 0;
LABEL_35:
        v23 = v8->ci;
        if ( n > 0 )
        {
          do
          {
            if ( v23 == &v8->base_ci )
              break;
            v23 = v23->previous;
            --v22;
          }
          while ( v22 > 0 );
        }
        if ( v22 || v23 == &v8->base_ci )
        {
          v24 = 0;
        }
        else
        {
          v24 = 1;
          ar.i_ci = v23;
        }
        if ( v24 )
          goto LABEL_44;
LABEL_69:
        L->top->tt_ = 0;
        ++L->top;
        return 1i64;
      }
      v19 = (lua_TValue *)v74;
      *(float *)v74 = result;
      v74[2] = 3;
    }
    n = (int)v19->value_.n;
    v22 = n;
    if ( n < 0 )
      goto LABEL_69;
    goto LABEL_35;
  }
  v15 = (const extension::gfxi_detail::TranslatorImpl *)index2addr(L, v12);
  if ( v15 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (v15->RefCount & 0xF) != 6 )
  {
    luaL_argerror(L, v12, "function or level expected");
  }
  lua_pushfstring(L, ">%s", p_l_G);
  v16 = L->top - 1;
  if ( (v16->tt_ & 0xF) == 4 )
    goto LABEL_28;
  if ( luaV_tostring(L, L->top - 1) )
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
        v18 = l_G->GCdebt + 2400;
        l_G->GCdebt = -2400i64;
        l_G->totalbytes += v18;
      }
    }
    v16 = L->top - 1;
LABEL_28:
    p_l_G = (const char *)&v16->value_.gc->th.l_G;
    goto LABEL_29;
  }
  p_l_G = 0i64;
LABEL_29:
  *L->top++ = *index2addr(L, v12);
  lua_xmove(L, v8, 1);
LABEL_44:
  if ( !lua_getinfo(v8, p_l_G, &ar) )
    luaL_argerror(L, v9, "invalid option");
  v25 = L->l_G;
  if ( v25->GCdebt > 0 )
  {
    if ( v25->gcrunning )
    {
      luaC_forcestep(L);
    }
    else
    {
      v26 = v25->GCdebt + 2400;
      v25->GCdebt = -2400i64;
      v25->totalbytes += v26;
    }
  }
  v27 = luaH_new(L);
  v28 = L->top;
  v28->value_.gc = (GCObject *)v27;
  v28->tt_ = 69;
  ++L->top;
  luaH_resize(L, v27, 0, 2);
  if ( strchr(p_l_G, 83) )
  {
    lua_pushstring(L, ar.source);
    v29 = L->top;
    L->top = v29 + 1;
    v30 = luaS_newlstr(L, "source", 6ui64);
    v29->value_.gc = (GCObject *)v30;
    v29->tt_ = v30->tsv.tt | 0x40;
    luaV_settable(L, v29 - 2, L->top - 1, L->top - 2);
    v31 = L->l_G;
    L->top -= 2;
    if ( v31->GCdebt > 0 )
    {
      if ( v31->gcrunning )
      {
        luaC_forcestep(L);
      }
      else
      {
        v32 = v31->GCdebt + 2400;
        v31->GCdebt = -2400i64;
        v31->totalbytes += v32;
      }
    }
    v33 = -1i64;
    do
      ++v33;
    while ( ar.short_src[v33] );
    v34 = luaS_newlstr(L, ar.short_src, v33);
    v35 = L->top;
    v35->value_.gc = (GCObject *)v34;
    v35->tt_ = v34->tsv.tt | 0x40;
    v36 = L->top;
    L->top = v36 + 2;
    v37 = luaS_newlstr(L, "short_src", 9ui64);
    v36[1].value_.gc = (GCObject *)v37;
    v36[1].tt_ = v37->tsv.tt | 0x40;
    luaV_settable(L, v36 - 1, L->top - 1, L->top - 2);
    L->top -= 2;
    v38 = L->top;
    linedefined = (float)ar.linedefined;
    v38->tt_ = 3;
    v38->value_.n = linedefined;
    v40 = L->top;
    L->top = v40 + 2;
    v41 = luaS_newlstr(L, "linedefined", 0xBui64);
    v40[1].value_.gc = (GCObject *)v41;
    v40[1].tt_ = v41->tsv.tt | 0x40;
    luaV_settable(L, v40 - 1, L->top - 1, L->top - 2);
    L->top -= 2;
    v42 = L->top;
    lastlinedefined = (float)ar.lastlinedefined;
    v42->tt_ = 3;
    v42->value_.n = lastlinedefined;
    v44 = L->top;
    L->top = v44 + 2;
    v45 = luaS_newlstr(L, "lastlinedefined", 0xFui64);
    v44[1].value_.gc = (GCObject *)v45;
    v44[1].tt_ = v45->tsv.tt | 0x40;
    luaV_settable(L, v44 - 1, L->top - 1, L->top - 2);
    what = ar.what;
    L->top -= 2;
    lua_pushstring(L, what);
    v47 = L->top;
    L->top = v47 + 1;
    v48 = luaS_newlstr(L, "what", 4ui64);
    v47->value_.gc = (GCObject *)v48;
    v47->tt_ = v48->tsv.tt | 0x40;
    luaV_settable(L, v47 - 2, L->top - 1, L->top - 2);
    L->top -= 2;
  }
  if ( strchr(p_l_G, 108) )
  {
    v49 = L->top;
    currentline = (float)ar.currentline;
    v49->tt_ = 3;
    v49->value_.n = currentline;
    v51 = L->top;
    L->top = v51 + 2;
    v52 = luaS_newlstr(L, "currentline", 0xBui64);
    v51[1].value_.gc = (GCObject *)v52;
    v51[1].tt_ = v52->tsv.tt | 0x40;
    luaV_settable(L, v51 - 1, L->top - 1, L->top - 2);
    L->top -= 2;
  }
  if ( strchr(p_l_G, 117) )
  {
    v53 = L->top;
    v54 = _mm_cvtsi32_si128(ar.nups);
    v53->tt_ = 3;
    v53->value_.b = _mm_cvtepi32_ps(v54).m128_u32[0];
    v55 = L->top;
    L->top = v55 + 2;
    v56 = luaS_newlstr(L, "nups", 4ui64);
    v55[1].value_.gc = (GCObject *)v56;
    v55[1].tt_ = v56->tsv.tt | 0x40;
    luaV_settable(L, v55 - 1, L->top - 1, L->top - 2);
    L->top -= 2;
    v57 = L->top;
    v58 = _mm_cvtsi32_si128(ar.nparams);
    v57->tt_ = 3;
    v57->value_.b = _mm_cvtepi32_ps(v58).m128_u32[0];
    v59 = L->top;
    L->top = v59 + 2;
    v60 = luaS_newlstr(L, "nparams", 7ui64);
    v59[1].value_.gc = (GCObject *)v60;
    v59[1].tt_ = v60->tsv.tt | 0x40;
    luaV_settable(L, v59 - 1, L->top - 1, L->top - 2);
    L->top -= 2;
    v61 = L->top;
    v61->value_.b = ar.isvararg != 0;
    v61->tt_ = 1;
    v62 = L->top;
    L->top = v62 + 2;
    v63 = luaS_newlstr(L, "isvararg", 8ui64);
    v62[1].value_.gc = (GCObject *)v63;
    v62[1].tt_ = v63->tsv.tt | 0x40;
    luaV_settable(L, v62 - 1, L->top - 1, L->top - 2);
    L->top -= 2;
  }
  if ( strchr(p_l_G, 110) )
  {
    lua_pushstring(L, ar.name);
    v64 = L->top;
    L->top = v64 + 1;
    v65 = luaS_newlstr(L, "name", 4ui64);
    v64->value_.gc = (GCObject *)v65;
    v64->tt_ = v65->tsv.tt | 0x40;
    luaV_settable(L, v64 - 2, L->top - 1, L->top - 2);
    namewhat = ar.namewhat;
    L->top -= 2;
    lua_pushstring(L, namewhat);
    v67 = L->top;
    L->top = v67 + 1;
    v68 = luaS_newlstr(L, "namewhat", 8ui64);
    v67->value_.gc = (GCObject *)v68;
    v67->tt_ = v68->tsv.tt | 0x40;
    luaV_settable(L, v67 - 2, L->top - 1, L->top - 2);
    L->top -= 2;
  }
  if ( strchr(p_l_G, 116) )
  {
    v69 = L->top;
    LOBYTE(v3) = ar.istailcall != 0;
    v69->value_.b = v3;
    v69->tt_ = 1;
    v70 = L->top;
    L->top = v70 + 2;
    v71 = luaS_newlstr(L, "istailcall", 0xAui64);
    v70[1].value_.gc = (GCObject *)v71;
    v70[1].tt_ = v71->tsv.tt | 0x40;
    luaV_settable(L, v70 - 1, L->top - 1, L->top - 2);
    L->top -= 2;
  }
  if ( strchr(p_l_G, 76) )
    treatstackoption(L, v8, "activelines");
  if ( strchr(p_l_G, 102) )
    treatstackoption(L, v8, "func");
  return 1i64;
}

__int64 __fastcall db_getlocal(lua_State *L)
{
  CallInfo *ci; // rdx
  lua_TValue *top; // rcx
  const char *v4; // rdi
  const extension::gfxi_detail::TranslatorImpl *v5; // rax
  int v6; // er14
  char *v7; // rsi
  lua_State *v8; // rsi
  int v9; // eax
  int v10; // er14
  int v11; // ebp
  const extension::gfxi_detail::TranslatorImpl *v12; // rax
  lua_TValue *v13; // rax
  int v14; // edx
  Table *env; // rcx
  GCObject *gclist; // r9
  __int64 node_high; // r8
  __int64 v18; // rcx
  int *p_hash; // rax
  __int64 result; // rax
  int v21; // eax
  bool v22; // zf
  CallInfo *v23; // rcx
  int v24; // eax
  const char *v25; // rbp
  lua_TValue *v26; // rcx
  lua_Debug ar; // [rsp+20h] [rbp-98h] BYREF

  ci = L->ci;
  top = L->top;
  v4 = 0i64;
  v5 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[1];
  if ( v5 >= (const extension::gfxi_detail::TranslatorImpl *)top
    || v5 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (ci->func[1].tt_ & 0xF) != 8 )
  {
    v6 = 0;
    v8 = L;
  }
  else
  {
    v6 = 1;
    v7 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
    if ( &ci->func[1] < top )
      v7 = (char *)&ci->func[1];
    if ( *((_DWORD *)v7 + 2) == 72 )
      v8 = *(lua_State **)v7;
    else
      v8 = 0i64;
  }
  v9 = luaL_checkinteger(L, v6 + 2);
  v10 = v6 + 1;
  v11 = v9;
  v12 = (const extension::gfxi_detail::TranslatorImpl *)index2addr(L, v10);
  if ( v12 != (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    && (v12->RefCount & 0xF) == 6 )
  {
    *L->top++ = *index2addr(L, v10);
    v13 = L->top;
    if ( v13[-1].tt_ == 70 )
    {
      v14 = 0;
      env = v13[-1].value_.gc->u.uv.env;
      if ( SHIDWORD(env[1].node) > 0 )
      {
        gclist = env->gclist;
        node_high = SHIDWORD(env[1].node);
        v18 = 0i64;
        p_hash = (int *)&gclist->ts.tsv.hash;
        while ( *(p_hash - 1) <= 0 )
        {
          if ( *p_hash > 0 && !--v11 )
          {
            v4 = (const char *)(*((_QWORD *)&gclist->gch.next + 2 * v14) + 24i64);
            break;
          }
          ++v14;
          ++v18;
          p_hash += 4;
          if ( v18 >= node_high )
            break;
        }
      }
    }
    lua_pushstring(L, v4);
    return 1i64;
  }
  v21 = luaL_checkinteger(L, v10);
  v22 = v21 == 0;
  if ( v21 < 0 )
    goto LABEL_36;
  v23 = v8->ci;
  if ( v21 > 0 )
  {
    do
    {
      if ( v23 == &v8->base_ci )
        break;
      v23 = v23->previous;
      --v21;
    }
    while ( v21 > 0 );
    v22 = v21 == 0;
  }
  if ( !v22 || v23 == &v8->base_ci )
  {
    v24 = 0;
  }
  else
  {
    v24 = 1;
    ar.i_ci = v23;
  }
  if ( !v24 )
LABEL_36:
    luaL_argerror(L, v10, "level out of range");
  v25 = lua_getlocal(v8, &ar, v11);
  if ( !v25 )
  {
    L->top->tt_ = 0;
    ++L->top;
    return 1i64;
  }
  lua_xmove(v8, L, 1);
  lua_pushstring(L, v25);
  v26 = L->top;
  v26->value_.gc = v26[-2].value_.gc;
  v26->tt_ = v26[-2].tt_;
  result = 2i64;
  ++L->top;
  return result;
}

__int64 __fastcall db_getmetatable(lua_State *L)
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
    result = 1i64;
    top->tt_ = 69;
  }
  else
  {
    top->tt_ = 0;
    result = 1i64;
  }
  ++L->top;
  return result;
}

__int64 __fastcall db_getregistry(lua_State *L)
{
  __int64 result; // rax

  *L->top = L->l_G->l_registry;
  result = 1i64;
  ++L->top;
  return result;
}

__int64 __fastcall db_getupvalue(lua_State *L)
{
  return auxupvalue(L, 1);
}

__int64 __fastcall db_getuservalue(lua_State *L)
{
  CallInfo *ci; // r9
  lua_TValue *top; // rdx
  const extension::gfxi_detail::TranslatorImpl *v3; // rax
  char *v4; // r8
  Value v5; // r8
  __int64 result; // rax

  ci = L->ci;
  top = L->top;
  v3 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[1];
  if ( v3 >= (const extension::gfxi_detail::TranslatorImpl *)top )
    goto LABEL_8;
  v4 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  if ( v3 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (ci->func[1].tt_ & 0xF) != 7 )
  {
    goto LABEL_8;
  }
  if ( &ci->func[1] < top )
    v4 = (char *)&ci->func[1];
  v5.gc = *(GCObject **)(*(_QWORD *)v4 + 24i64);
  if ( v5.gc )
  {
    top->value_ = v5;
    result = 1i64;
    top->tt_ = 69;
    ++L->top;
  }
  else
  {
LABEL_8:
    top->tt_ = 0;
    result = 1i64;
    ++L->top;
  }
  return result;
}

__int64 __fastcall _LN73_7(lua_State *L)
{
  CallInfo *ci; // r11
  lua_TValue *top; // r10
  int v3; // er15
  const extension::gfxi_detail::TranslatorImpl *v5; // rax
  char *v6; // rbp
  int v7; // edi
  lua_State *v8; // rbp
  unsigned int v9; // er13
  const extension::gfxi_detail::TranslatorImpl *v10; // rax
  unsigned __int64 v11; // r10
  _QWORD *v12; // r11
  lua_TValue *v13; // rax
  global_State *l_G; // rcx
  __int64 v15; // rax
  const char *p_l_G; // rsi
  const extension::gfxi_detail::TranslatorImpl *v17; // rax
  const extension::gfxi_detail::TranslatorImpl *v18; // rax
  void (__fastcall *v19)(lua_State *, lua_Debug *); // r12
  int v20; // edi
  lua_TValue *v21; // rdx
  int v22; // er14
  lua_TValue *v23; // rdi
  TString *v24; // rax
  lua_TValue *v25; // rcx
  lua_TValue *v26; // rax
  __int64 v27; // rdx
  lua_TValue *v28; // rcx
  CallInfo *v29; // rax
  __int64 result; // rax

  ci = L->ci;
  top = L->top;
  v3 = 0;
  v5 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[1];
  if ( v5 >= (const extension::gfxi_detail::TranslatorImpl *)top
    || v5 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (ci->func[1].tt_ & 0xF) != 8 )
  {
    v7 = 0;
    v8 = L;
  }
  else
  {
    v6 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
    v7 = 1;
    if ( &ci->func[1] < top )
      v6 = (char *)&ci->func[1];
    if ( *((_DWORD *)v6 + 2) == 72 )
      v8 = *(lua_State **)v6;
    else
      v8 = 0i64;
  }
  v9 = v7 + 1;
  v10 = (const extension::gfxi_detail::TranslatorImpl *)index2addr(L, v7 + 1);
  if ( v10 != (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    && (v10->RefCount & 0xF) != 0 )
  {
    v13 = index2addr(L, v7 + 2);
    if ( (v13->tt_ & 0xF) != 4 )
    {
      if ( !luaV_tostring(L, v13) )
        goto LABEL_45;
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
      v13 = index2addr(L, v7 + 2);
    }
    p_l_G = (const char *)&v13->value_.gc->th.l_G;
    if ( v13->value_.gc != (GCObject *)-24i64 )
    {
      v17 = (const extension::gfxi_detail::TranslatorImpl *)index2addr(L, v9);
      if ( v17 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
        || (v17->RefCount & 0xF) != 6 )
      {
        tag_error(L, v9, 6);
      }
      v18 = (const extension::gfxi_detail::TranslatorImpl *)index2addr(L, v7 + 3);
      if ( v18 != (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
        && (v18->RefCount & 0xF) != 0 )
      {
        v3 = luaL_checkinteger(L, v7 + 3);
      }
      v19 = hookf;
      v20 = strchr(p_l_G, 99) != 0i64;
      if ( strchr(p_l_G, 114) )
        v20 |= 2u;
      if ( strchr(p_l_G, 108) )
        v20 |= 4u;
      v22 = v20 | 8;
      if ( v3 <= 0 )
        v22 = v20;
      goto LABEL_35;
    }
LABEL_45:
    tag_error(L, v7 + 2, 4);
  }
  v21 = (lua_TValue *)(*v12 + 16 * (v9 + 1i64));
  if ( v11 < (unsigned __int64)v21 )
  {
    do
    {
      L->top->tt_ = 0;
      ++L->top;
    }
    while ( L->top < v21 );
  }
  L->top = v21;
  v19 = 0i64;
  v22 = 0;
LABEL_35:
  if ( !(unsigned int)luaL_getsubtable(L, (int)v21, "_HKEY") )
  {
    lua_pushstring(L, "k");
    v23 = L->top;
    L->top = v23 + 1;
    v24 = luaS_newlstr(L, "__mode", 6ui64);
    v23->value_.gc = (GCObject *)v24;
    v23->tt_ = v24->tsv.tt | 0x40;
    luaV_settable(L, v23 - 2, L->top - 1, L->top - 2);
    L->top -= 2;
    v25 = L->top;
    v25->value_.gc = v25[-1].value_.gc;
    v25->tt_ = v25[-1].tt_;
    ++L->top;
    lua_setmetatable(L, -2);
  }
  v26 = v8->top;
  v26->value_.gc = (GCObject *)v8;
  v26->tt_ = 72;
  ++v8->top;
  if ( v8 != L )
  {
    v27 = (__int64)&v8->top[-1];
    v8->top = (lua_TValue *)v27;
    v28 = L->top;
    L->top = v28 + 1;
    v28->value_.gc = *(GCObject **)v27;
    v28->tt_ = *(_DWORD *)(v27 + 8);
  }
  *L->top++ = *index2addr(L, v9);
  lua_rawset(L, -3);
  if ( !v19 || !v22 )
  {
    LOBYTE(v22) = 0;
    v19 = 0i64;
  }
  v29 = v8->ci;
  if ( (v29->callstatus & 1) != 0 )
    v8->oldpc = v29->u.l.savedpc;
  result = 0i64;
  v8->hookmask = v22;
  v8->hook = v19;
  v8->basehookcount = v3;
  v8->hookcount = v3;
  return result;
}

__int64 __fastcall db_setlocal(lua_State *L)
{
  CallInfo *ci; // rdx
  lua_TValue *top; // rcx
  const extension::gfxi_detail::TranslatorImpl *v4; // rax
  int v5; // er14
  char *v6; // rsi
  lua_State *v7; // rsi
  int v8; // eax
  bool v9; // zf
  CallInfo *v10; // rdi
  int v11; // eax
  const extension::gfxi_detail::TranslatorImpl *v12; // rax
  unsigned int v13; // er10
  lua_TValue *i; // rdx
  lua_TValue *v15; // rdx
  lua_TValue *v16; // rcx
  int v17; // eax
  const char *v18; // rax
  CallInfo *v20; // [rsp+98h] [rbp-30h]
  lua_TValue *pos; // [rsp+D0h] [rbp+8h] BYREF

  ci = L->ci;
  top = L->top;
  v4 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[1];
  if ( v4 >= (const extension::gfxi_detail::TranslatorImpl *)top
    || v4 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (ci->func[1].tt_ & 0xF) != 8 )
  {
    v5 = 0;
    v7 = L;
  }
  else
  {
    v5 = 1;
    v6 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
    if ( &ci->func[1] < top )
      v6 = (char *)&ci->func[1];
    if ( *((_DWORD *)v6 + 2) == 72 )
      v7 = *(lua_State **)v6;
    else
      v7 = 0i64;
  }
  v8 = luaL_checkinteger(L, v5 + 1);
  v9 = v8 == 0;
  if ( v8 < 0 )
    goto LABEL_30;
  v10 = v7->ci;
  if ( v8 > 0 )
  {
    do
    {
      if ( v10 == &v7->base_ci )
        break;
      v10 = v10->previous;
      --v8;
    }
    while ( v8 > 0 );
    v9 = v8 == 0;
  }
  if ( !v9 || v10 == &v7->base_ci )
  {
    v10 = v20;
    v11 = 0;
  }
  else
  {
    v11 = 1;
  }
  if ( !v11 )
LABEL_30:
    luaL_argerror(L, v5 + 1, "level out of range");
  v12 = (const extension::gfxi_detail::TranslatorImpl *)index2addr(L, v5 + 3);
  if ( v12 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (v12->RefCount & 0xF) == -1 )
  {
    luaL_argerror(L, v13, "value expected");
  }
  for ( i = &L->ci->func[v13 + 1]; L->top < i; ++L->top )
    L->top->tt_ = 0;
  L->top = i;
  if ( L != v7 )
  {
    v15 = i - 1;
    L->top = v15;
    v16 = v7->top;
    v7->top = v16 + 1;
    v16->value_.gc = v15->value_.gc;
    v16->tt_ = v15->tt_;
  }
  v17 = luaL_checkinteger(L, v5 + 2);
  pos = 0i64;
  v18 = findlocal(v7, v10, v17, &pos);
  if ( v18 )
    *pos = v7->top[-1];
  --v7->top;
  lua_pushstring(L, v18);
  return 1i64;
}

__int64 __fastcall db_setmetatable(lua_State *L)
{
  CallInfo *ci; // r8
  lua_TValue *top; // r9
  const extension::gfxi_detail::TranslatorImpl *v3; // rax
  lua_TValue *v4; // rdx

  ci = L->ci;
  top = L->top;
  v3 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[2];
  if ( v3 >= (const extension::gfxi_detail::TranslatorImpl *)top
    || v3 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (ci->func[2].tt_ & 0xF) != 0 && (ci->func[2].tt_ & 0xF) != 5 )
  {
    luaL_argerror(L, 2, "nil or table expected");
  }
  v4 = ci->func + 3;
  if ( top < v4 )
  {
    do
    {
      L->top->tt_ = 0;
      ++L->top;
    }
    while ( L->top < v4 );
  }
  L->top = v4;
  lua_setmetatable(L, 1);
  return 1i64;
}

__int64 __fastcall db_setupvalue(lua_State *L)
{
  lua_TValue *v1; // rdx

  v1 = L->ci->func + 3;
  if ( v1 >= L->top
    || v1 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (L->ci->func[3].tt_ & 0xF) == -1 )
  {
    luaL_argerror(L, 3, "value expected");
  }
  return auxupvalue(L, 0);
}

__int64 __fastcall db_setuservalue(lua_State *L)
{
  CallInfo *ci; // rdx
  lua_TValue *top; // r8
  const extension::gfxi_detail::TranslatorImpl *v3; // rax
  const extension::gfxi_detail::TranslatorImpl *v4; // rax
  const extension::gfxi_detail::TranslatorImpl *v5; // rax
  const extension::gfxi_detail::TranslatorImpl *v6; // rax
  lua_TValue *v7; // rdx

  ci = L->ci;
  top = L->top;
  v3 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[1];
  if ( v3 < (const extension::gfxi_detail::TranslatorImpl *)top
    && v3 != (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    && (ci->func[1].tt_ & 0xF) == 2 )
  {
    luaL_argerror(L, 1, "full userdata expected, got light userdata");
  }
  v4 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[1];
  if ( v4 >= (const extension::gfxi_detail::TranslatorImpl *)top
    || v4 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (ci->func[1].tt_ & 0xF) != 7 )
  {
    tag_error(L, 1, 7);
  }
  v5 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[2];
  if ( v5 < (const extension::gfxi_detail::TranslatorImpl *)top
    && v5 != (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    && (ci->func[2].tt_ & 0xF) != 0 )
  {
    v6 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[2];
    if ( v6 >= (const extension::gfxi_detail::TranslatorImpl *)top
      || v6 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
      || (ci->func[2].tt_ & 0xF) != 5 )
    {
      tag_error(L, 2, 5);
    }
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
  L->top = v7;
  lua_setuservalue(L, 1);
  return 1i64;
}

__int64 __fastcall db_traceback(lua_State *L)
{
  CallInfo *ci; // rdx
  int v3; // edi
  lua_TValue *top; // rcx
  const extension::gfxi_detail::TranslatorImpl *v5; // rax
  int v6; // er15
  char *v7; // rsi
  lua_State *v8; // rsi
  lua_TValue *v9; // rbp
  const char *p_l_G; // rbp
  global_State *l_G; // rcx
  __int64 v12; // rax
  const extension::gfxi_detail::TranslatorImpl *v13; // rax
  const extension::gfxi_detail::TranslatorImpl *v14; // rax

  ci = L->ci;
  v3 = 0;
  top = L->top;
  v5 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[1];
  if ( v5 >= (const extension::gfxi_detail::TranslatorImpl *)top
    || v5 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (ci->func[1].tt_ & 0xF) != 8 )
  {
    v6 = 0;
    v8 = L;
  }
  else
  {
    v6 = 1;
    v7 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
    if ( &ci->func[1] < top )
      v7 = (char *)&ci->func[1];
    if ( *((_DWORD *)v7 + 2) == 72 )
      v8 = *(lua_State **)v7;
    else
      v8 = 0i64;
  }
  v9 = index2addr(L, v6 + 1);
  if ( (v9->tt_ & 0xF) == 4 )
  {
LABEL_18:
    p_l_G = (const char *)&v9->value_.gc->th.l_G;
    if ( p_l_G )
      goto LABEL_22;
    goto LABEL_19;
  }
  if ( luaV_tostring(L, v9) )
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
        v12 = l_G->GCdebt + 2400;
        l_G->GCdebt = -2400i64;
        l_G->totalbytes += v12;
      }
    }
    v9 = index2addr(L, v6 + 1);
    goto LABEL_18;
  }
  p_l_G = 0i64;
LABEL_19:
  v13 = (const extension::gfxi_detail::TranslatorImpl *)index2addr(L, v6 + 1);
  if ( v13 != (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    && (v13->RefCount & 0xF) != 0 )
  {
    *L->top++ = *index2addr(L, v6 + 1);
    return 1i64;
  }
LABEL_22:
  v14 = (const extension::gfxi_detail::TranslatorImpl *)index2addr(L, v6 + 2);
  if ( v14 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (v14->RefCount & 0xF) == 0 )
  {
    LOBYTE(v3) = L == v8;
  }
  else
  {
    v3 = luaL_checkinteger(L, v6 + 2);
  }
  luaL_traceback(L, v8, p_l_G, v3);
  return 1i64;
}

__int64 __fastcall db_upvalueid(lua_State *L)
{
  int v2; // eax
  CallInfo *ci; // r10
  char *v4; // r9
  lua_TValue *top; // r8
  int v6; // edx
  char *v7; // rcx
  int v8; // eax
  __int64 v9; // rax
  __int64 result; // rax

  v2 = checkupval(L, 1, 2);
  ci = L->ci;
  v4 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  top = L->top;
  v6 = v2;
  v7 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  if ( &ci->func[1] < top )
    v7 = (char *)&ci->func[1];
  v8 = *((_DWORD *)v7 + 2) & 0x3F;
  if ( v8 == 6 )
  {
    if ( &ci->func[1] < top )
      v4 = (char *)&ci->func[1];
    v9 = *(_QWORD *)(*(_QWORD *)v4 + 8i64 * (v6 - 1) + 32);
  }
  else if ( v8 == 38 )
  {
    v9 = *(_QWORD *)v7 + 16 * (v6 - 1 + 2i64);
  }
  else
  {
    v9 = 0i64;
  }
  top->value_.gc = (GCObject *)v9;
  result = 1i64;
  top->tt_ = 2;
  ++L->top;
  return result;
}

__int64 __fastcall db_upvaluejoin(lua_State *L)
{
  int v2; // edi
  int v3; // eax
  lua_TValue *top; // r10
  char *v5; // r8
  int n2; // er9
  char *v7; // rcx
  CallInfo *ci; // rax
  int v9; // edx
  unsigned __int64 v10; // rax
  int v11; // eax

  v2 = checkupval(L, 1, 2);
  v3 = checkupval(L, 3, 4);
  top = L->top;
  v5 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  n2 = v3;
  v7 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  ci = L->ci;
  if ( &ci->func[1] < top )
    v7 = (char *)&ci->func[1];
  v9 = *((_DWORD *)v7 + 2);
  if ( v9 == 22 || v9 == 102 )
    luaL_argerror(L, 1, "Lua function expected");
  v10 = (unsigned __int64)&ci->func[3];
  if ( v10 < (unsigned __int64)top )
    v5 = (char *)v10;
  v11 = *((_DWORD *)v5 + 2);
  if ( v11 == 22 || v11 == 102 )
    luaL_argerror(L, 3, "Lua function expected");
  lua_upvaluejoin(L, v9, v2, n2, n2);
  return 0i64;
}

void __fastcall hookf(lua_State *L, lua_Debug *ar)
{
  lua_TValue *top; // rax
  const extension::gfxi_detail::TranslatorImpl *v5; // rax
  int currentline; // ecx
  lua_TValue *v7; // rax
  lua_TValue *v8; // rax
  lua_TValue *v9; // rdx
  unsigned __int16 nCcalls; // ax

  luaL_getsubtable(L, (int)ar, "_HKEY");
  top = L->top;
  top->value_.gc = (GCObject *)L;
  top->tt_ = 72;
  ++L->top;
  L->top[-1] = *luaH_get((Table *)L->top[-2].value_.gc, (const lua_TValue *)L->top - 1);
  v5 = (const extension::gfxi_detail::TranslatorImpl *)&L->top[-1];
  if ( v5 != (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    && (v5->RefCount & 0xF) == 6 )
  {
    lua_pushstring(L, hooknames[ar->event]);
    currentline = ar->currentline;
    v7 = L->top;
    if ( currentline < 0 )
    {
      v7->tt_ = 0;
    }
    else
    {
      v7->tt_ = 3;
      v7->value_.n = (float)currentline;
    }
    v8 = ++L->top;
    ++L->nCcalls;
    v9 = v8 - 3;
    nCcalls = L->nCcalls;
    if ( nCcalls >= 0xC8u )
    {
      if ( nCcalls == 200 )
        luaG_runerror(L, "C stack overflow");
      if ( nCcalls >= 0xE1u )
        luaD_throw(L, 6);
    }
    ++L->nny;
    if ( !luaD_precall(L, v9, 0) )
      luaV_execute(L);
    --L->nny;
    --L->nCcalls;
  }
}

__int64 __fastcall luaopen_debug(lua_State *L)
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
  luaH_resize(L, v4, 0, 16);
  luaL_setfuncs(
    L,
    (const luaL_Reg *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[7][168],
    0);
  return 1i64;
}

void __fastcall treatstackoption(lua_State *L, lua_State *L1, const char *fname)
{
  lua_TValue *v4; // rdx
  lua_TValue *v5; // rax
  lua_TValue *v6; // rdx
  lua_TValue *top; // rcx

  if ( L == L1 )
  {
    *L->top = L->top[-2];
    v4 = ++L->top;
    v5 = v4 - 2;
    if ( &v4[-2] < v4 )
    {
      do
      {
        v5[-1].value_.gc = v5->value_.gc;
        v5[-1].tt_ = v5->tt_;
        ++v5;
      }
      while ( v5 < L->top );
    }
    --L->top;
    lua_setfield(L, -2, fname);
  }
  else
  {
    v6 = --L1->top;
    top = L->top;
    L->top = top + 1;
    *top = *v6;
    lua_setfield(L, -2, fname);
  }
}

