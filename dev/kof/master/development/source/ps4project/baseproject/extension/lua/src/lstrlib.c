#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lapi.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lgc.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstate.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstring.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lauxlib.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lvm.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/ldo.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/ldump.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lundump.c"

long str_len(lua_State * L); // 0x14029C6E0
long str_sub(lua_State * L); // 0x14029C740
long str_reverse(lua_State * L); // 0x14029C8B0
long str_lower(lua_State * L); // 0x14029CA40
long str_upper(lua_State * L); // 0x14029CBE0
long str_rep(lua_State * L); // 0x14029CD80
long str_byte(lua_State * L); // 0x14029D030
long str_char(lua_State * L); // 0x14029D290
long writer(lua_State * L, const void * b, unsigned long long size, void * B); // 0x14029D500
long str_dump(lua_State * L); // 0x14029D550
struct MatchState
{
	long matchdepth; // 0x0
	const char * src_init; // 0x8
	const char * src_end; // 0x10
	const char * p_end; // 0x18
	lua_State * L; // 0x20
	long level; // 0x28
	<unnamed-tag> capture[32]; // 0x30
};
const luaL_Reg strlib[60]; // 0x1408B0650
const char * classend(MatchState * ms, const char * p); // 0x14029D750
long match_class(long c, long cl); // 0x14029D7E0
long matchbracketclass(long c, const char * p, const char * ec); // 0x14029D940
const char * max_expand(MatchState * ms, const char * s, const char * p, const char * ep); // 0x14029DB50
const char * min_expand(MatchState * ms, const char * s, const char * p, const char * ep); // 0x14029DC20
const char * start_capture(MatchState * ms, const char * s, const char * p, long what); // 0x14029DCE0
const char * end_capture(MatchState * ms, const char * s, const char * p); // 0x14029DD40
const char * match_capture(MatchState * ms, const char * s, long l); // 0x14029DDD0
const char * match(MatchState * ms, const char * s, const char * p); // 0x14029DE60
const char * lmemfind(const char * s1, unsigned long long l1, const char * s2, unsigned long long l2); // 0x14029E190
void push_onecapture(MatchState * ms, long i, const char * s, const char * e); // 0x14029E250
long push_captures(MatchState * ms, const char * s, const char * e); // 0x14029E300
long str_find_aux(lua_State * L, long find); // 0x14029E3A0
long str_find(lua_State * L); // 0x14029E7D0
long str_match(lua_State * L); // 0x14029E7E0
long gmatch_aux(lua_State * L); // 0x14029E7F0
long gmatch(lua_State * L); // 0x14029EB50
void add_s(MatchState * ms, luaL_Buffer * b, const char * s, const char * e); // 0x14029ED00
void add_value(MatchState * ms, luaL_Buffer * b, const char * s, const char * e, long tr); // 0x14029EE30
long str_gsub(lua_State * L); // 0x14029F010
void addquoted(lua_State * L, luaL_Buffer * b, long arg); // 0x14029F400
const char * scanformat(lua_State * L, const char * strfrmt, char * form); // 0x14029F5E0
long str_format(lua_State * L); // 0x14029F6F0
void createmetatable(lua_State * L); // 0x14029FE10
long luaopen_string(lua_State * L); // 0x14029FF70//decompilation failure at 1408B0650!
void __fastcall add_s(MatchState *ms, luaL_Buffer *b, const char *s, const char *e)
{
  global_State **v8; // rax
  unsigned __int64 v9; // r15
  __int64 v10; // rsi
  global_State **v11; // rbp
  int v12; // ecx
  char v13; // al
  char *v14; // rax
  unsigned __int64 len; // [rsp+50h] [rbp+8h] BYREF

  v8 = lua_tolstring(ms->L, 3, &len);
  v9 = len;
  v10 = 0i64;
  v11 = v8;
  if ( len )
  {
    while ( 1 )
    {
      if ( *((_BYTE *)v11 + v10) != 37 )
        goto LABEL_5;
      v12 = *((unsigned __int8 *)v11 + ++v10);
      if ( !isdigit(v12) )
        break;
      v13 = *((_BYTE *)v11 + v10);
      if ( v13 == 48 )
      {
        v14 = luaL_prepbuffsize(b, e - s);
        memmove(v14, s, e - s);
        b->n += e - s;
      }
      else
      {
        push_onecapture(ms, v13 - 49, s, e);
        luaL_addvalue(b);
      }
LABEL_11:
      if ( ++v10 >= v9 )
        return;
    }
    if ( *((_BYTE *)v11 + v10) != 37 )
      luaL_error(ms->L, "invalid use of '%c' in replacement string", 37i64);
LABEL_5:
    if ( b->n >= b->size )
      luaL_prepbuffsize(b, 1ui64);
    b->b[b->n++] = *((_BYTE *)v11 + v10);
    goto LABEL_11;
  }
}

void __fastcall add_value(MatchState *ms, luaL_Buffer *b, const char *s, const char *e, int tr)
{
  lua_State *L; // rbx
  unsigned __int64 v10; // r8
  CallInfo *v11; // rax
  char *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  unsigned __int16 nCcalls; // ax
  lua_TValue *v16; // rdx
  unsigned __int64 top; // r8
  CallInfo *ci; // rax
  const lua_TValue *v19; // rdx
  const extension::gfxi_detail::TranslatorImpl *v20; // rcx
  volatile int RefCount; // eax
  int v22; // eax

  L = ms->L;
  if ( tr == 5 )
  {
    push_onecapture(ms, 0, s, e);
    top = (unsigned __int64)L->top;
    ci = L->ci;
    v19 = (const lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
    if ( &ci->func[3] < (lua_TValue *)top )
      v19 = ci->func + 3;
    luaV_gettable(L, v19, (lua_TValue *)(top - 16), (lua_TValue *)(top - 16));
  }
  else
  {
    if ( tr != 6 )
    {
      add_s(ms, b, s, e);
      return;
    }
    v10 = (unsigned __int64)L->top;
    v11 = L->ci;
    v12 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
    if ( &v11->func[3] < (lua_TValue *)v10 )
      v12 = (char *)&v11->func[3];
    *(_QWORD *)v10 = *(_QWORD *)v12;
    *(_DWORD *)(v10 + 8) = *((_DWORD *)v12 + 2);
    ++L->top;
    v13 = _LN12_84(ms, s, e);
    ++L->nCcalls;
    v14 = v13 + 1;
    nCcalls = L->nCcalls;
    v16 = &L->top[-v14];
    if ( nCcalls >= 0xC8u )
    {
      if ( nCcalls == 200 )
        luaG_runerror(L, "C stack overflow");
      if ( nCcalls >= 0xE1u )
        luaD_throw(L, 6);
    }
    ++L->nny;
    if ( !(unsigned int)luaD_precall(L, v16, 1) )
      luaV_execute(L);
    --L->nny;
    --L->nCcalls;
  }
  v20 = (const extension::gfxi_detail::TranslatorImpl *)&L->top[-1];
  RefCount = v20->RefCount;
  if ( RefCount && (RefCount != 1 || LODWORD(v20->__vftable)) )
  {
    if ( v20 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
      goto LABEL_26;
    if ( (v20->RefCount & 0xFu) - 3 > 1 )
    {
      if ( v20 != (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
      {
        v22 = v20->RefCount & 0xF;
        goto LABEL_27;
      }
LABEL_26:
      v22 = -1;
LABEL_27:
      luaL_error(
        L,
        "invalid replacement value (a %s)",
        *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[14][8 * v22 + 112]);
    }
  }
  else
  {
    L->top = (lua_TValue *)v20;
    lua_pushlstring(L, s, e - s);
  }
  luaL_addvalue(b);
}

void __fastcall addquoted(lua_State *L, luaL_Buffer *b, int arg)
{
  unsigned __int8 *v6; // rsi
  unsigned __int64 v7; // rbp
  unsigned __int8 v8; // al
  int v9; // eax
  const char *v10; // rdx
  unsigned __int64 v11; // rdi
  char *v12; // rax
  unsigned __int64 len[2]; // [rsp+20h] [rbp-38h] BYREF

  v6 = (unsigned __int8 *)lua_tolstring(L, arg, len);
  if ( !v6 )
    tag_error(L, arg, 4);
  if ( b->n >= b->size )
    luaL_prepbuffsize(b, 1ui64);
  v7 = len[0];
  b->b[b->n++] = 34;
  for ( ; v7; ++v6 )
  {
    v8 = *v6;
    --v7;
    if ( *v6 == 34 || v8 == 92 || v8 == 10 )
    {
      if ( b->n >= b->size )
        luaL_prepbuffsize(b, 1ui64);
      b->b[b->n] = 92;
      if ( ++b->n >= b->size )
        luaL_prepbuffsize(b, 1ui64);
      b->b[b->n] = *v6;
    }
    else
    {
      if ( !v8 || iscntrl(v8) )
      {
        v9 = isdigit(v6[1]);
        v10 = "\\%d";
        if ( v9 )
          v10 = "\\%03d";
        sprintf((char *const)len, v10, *v6);
        v11 = -1i64;
        do
          ++v11;
        while ( *((_BYTE *)len + v11) );
        v12 = luaL_prepbuffsize(b, v11);
        memmove(v12, len, v11);
        b->n += v11;
        continue;
      }
      if ( b->n >= b->size )
        luaL_prepbuffsize(b, 1ui64);
      b->b[b->n] = *v6;
    }
    ++b->n;
  }
  if ( b->n >= b->size )
    luaL_prepbuffsize(b, 1ui64);
  b->b[b->n++] = 34;
}

const char *__fastcall classend(MatchState *ms, const char *p)
{
  int v2; // eax
  const char *v6; // rdx
  const char *p_end; // rcx
  const char *v9; // rdx
  char v10; // al

  v2 = *p;
  v6 = p + 1;
  if ( v2 == 37 )
  {
    if ( v6 == ms->p_end )
      luaL_error(ms->L, "malformed pattern (ends with '%%')");
    return p + 2;
  }
  else if ( v2 == 91 )
  {
    p_end = ms->p_end;
    if ( *v6 != 94 )
      v6 = p;
    v9 = v6 + 1;
    do
    {
      if ( v9 == p_end )
        luaL_error(ms->L, "malformed pattern (missing ']')");
      v10 = *v9++;
      if ( v10 == 37 && v9 < p_end )
        ++v9;
    }
    while ( *v9 != 93 );
    return v9 + 1;
  }
  else
  {
    return v6;
  }
}

void __fastcall createmetatable(lua_State *L)
{
  global_State *l_G; // rcx
  __int64 v3; // rax
  Table *v4; // rax
  lua_TValue *top; // rcx
  global_State *v6; // rcx
  __int64 v7; // rax
  GCObject *v8; // rax
  lua_TValue *v9; // rcx
  lua_TValue *v10; // rcx
  lua_TValue *v11; // rcx
  lua_TValue *v12; // rbx
  GCObject *v13; // rax

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
  luaH_resize(L, v4, 0, 1);
  v6 = L->l_G;
  if ( v6->GCdebt > 0 )
  {
    if ( v6->gcrunning )
    {
      luaC_forcestep(L);
    }
    else
    {
      v7 = v6->GCdebt + 2400;
      v6->GCdebt = -2400i64;
      v6->totalbytes += v7;
    }
  }
  v8 = internshrstr(L, &pnewText, 0i64);
  v9 = L->top;
  v9->value_.gc = v8;
  v9->tt_ = v8->gch.tt | 0x40;
  v10 = ++L->top;
  v10->value_.gc = v10[-2].value_.gc;
  v10->tt_ = v10[-2].tt_;
  ++L->top;
  lua_setmetatable(L, -2);
  v11 = --L->top;
  v11->value_.gc = v11[-2].value_.gc;
  v11->tt_ = v11[-2].tt_;
  v12 = L->top;
  L->top = v12 + 2;
  v13 = luaS_newlstr(L, "__index", 7ui64);
  v12[1].value_.gc = v13;
  v12[1].tt_ = v13->gch.tt | 0x40;
  luaV_settable(L, v12 - 1, L->top - 1, L->top - 2);
  L->top -= 3;
}

const char *__fastcall end_capture(MatchState *ms, const char *s, const char *p)
{
  int v4; // er11
  __int64 v5; // rax
  __int64 *p_len; // r10
  __int64 v7; // rdi
  const char *result; // rax

  v4 = ms->level - 1;
  v5 = v4;
  if ( v4 < 0 )
LABEL_9:
    luaL_error(ms->L, "invalid pattern capture", p);
  p_len = &ms->capture[v4].len;
  while ( *p_len != -1 )
  {
    --v4;
    p_len -= 2;
    if ( --v5 < 0 )
      goto LABEL_9;
  }
  v7 = v4;
  ms->capture[v4].len = s - ms->capture[v4].init;
  result = match(ms, s, p);
  if ( !result )
    ms->capture[v7].len = -1i64;
  return result;
}

__int64 __fastcall gmatch(lua_State *L)
{
  CallInfo *ci; // r8
  lua_TValue *top; // rdx
  lua_TValue *v4; // rcx
  global_State *l_G; // rcx
  __int64 v6; // rax
  lua_TValue *v7; // rcx
  global_State *v8; // rcx
  __int64 v9; // rax
  lua_TValue *i; // rcx

  ci = L->ci;
  top = L->top;
  v4 = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  if ( &ci->func[1] < top )
    v4 = ci->func + 1;
  if ( (v4->tt_ & 0xF) != 4 )
  {
    if ( !luaV_tostring(L, v4) )
      goto LABEL_26;
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
    ci = L->ci;
    v4 = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
    top = L->top;
    if ( &ci->func[1] < top )
      v4 = ci->func + 1;
  }
  if ( v4->value_.gc == (GCObject *)-24i64 )
LABEL_26:
    tag_error(L, 1, 4);
  v7 = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  if ( &ci->func[2] < top )
    v7 = ci->func + 2;
  if ( (v7->tt_ & 0xF) != 4 )
  {
    if ( !luaV_tostring(L, v7) )
      goto LABEL_27;
    v8 = L->l_G;
    if ( v8->GCdebt > 0 )
    {
      if ( v8->gcrunning )
      {
        luaC_forcestep(L);
      }
      else
      {
        v9 = v8->GCdebt + 2400;
        v8->GCdebt = -2400i64;
        v8->totalbytes += v9;
      }
    }
    ci = L->ci;
    v7 = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
    if ( &ci->func[2] < L->top )
      v7 = ci->func + 2;
  }
  if ( v7->value_.gc == (GCObject *)-24i64 )
LABEL_27:
    tag_error(L, 2, 4);
  for ( i = ci->func + 3; L->top < i; ++L->top )
    L->top->tt_ = 0;
  L->top = i;
  i->tt_ = 3;
  i->value_.n = (float)0;
  ++L->top;
  lua_pushcclosure(L, gmatch_aux, 3);
  return 1i64;
}

__int64 __fastcall gmatch_aux(lua_State *L)
{
  global_State **v2; // r12
  global_State **v3; // rax
  CallInfo *ci; // rcx
  char *p_stacksize; // rsi
  const char *v6; // r14
  const char *v7; // rdx
  char *v8; // r15
  lua_TValue *func; // rax
  bool v10; // zf
  Value v11; // rax
  unsigned __int64 *p_cache; // rax
  int v13; // ecx
  int v14; // ebp
  __int64 v15; // rax
  const char *v16; // rdi
  const char *v17; // rax
  const char *v18; // r15
  int v20; // ecx
  lua_TValue *top; // rax
  lua_TValue *v22; // rcx
  lua_TValue *v23; // rax
  Value v24; // rax
  GCObject *gc; // rdx
  Value v26; // r8
  global_State *l_G; // rax
  int level; // er14
  int v29; // er13
  lua_State *v30; // rbx
  __int64 i; // rsi
  global_State *v32; // rcx
  __int64 v33; // rax
  GCObject *v34; // rax
  lua_TValue *v35; // rcx
  __int64 v36; // r8
  lua_TValue *v37; // rcx
  signed __int64 v38; // rax
  unsigned __int64 len; // [rsp+20h] [rbp-288h] BYREF
  unsigned __int64 v40; // [rsp+28h] [rbp-280h] BYREF
  int v41; // [rsp+30h] [rbp-278h]
  MatchState ms; // [rsp+40h] [rbp-268h] BYREF

  v2 = lua_tolstring(L, -1001001, &len);
  v3 = lua_tolstring(L, -1001002, &v40);
  ci = L->ci;
  p_stacksize = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  v6 = (const char *)v3;
  v7 = (char *)v3 + v40;
  v8 = (char *)v2 + len;
  ms.L = L;
  func = ci->func;
  ms.matchdepth = 200;
  ms.src_init = (const char *)v2;
  ms.src_end = (char *)v2 + len;
  v10 = func->tt_ == 22;
  ms.p_end = v7;
  if ( v10 || (v11.gc = (GCObject *)func->value_, v11.gc->ts.tsv.extra < 3u) )
    p_cache = (unsigned __int64 *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  else
    p_cache = (unsigned __int64 *)&v11.gc->p.cache;
  v13 = *((_DWORD *)p_cache + 2);
  v14 = 0;
  if ( v13 == 3 )
    goto LABEL_9;
  if ( (v13 & 0xF) == 4 && luaO_str2d((const char *)(*p_cache + 24), *(_QWORD *)(*p_cache + 16), (float *)&len) )
  {
    p_cache = &v40;
    LODWORD(v40) = len;
    v41 = 3;
LABEL_9:
    v15 = (unsigned int)(int)*(float *)p_cache;
    goto LABEL_10;
  }
  v15 = 0i64;
LABEL_10:
  v16 = (char *)v2 + v15;
  if ( (char *)v2 + v15 > v8 )
    return 0i64;
  while ( 1 )
  {
    ms.level = 0;
    v17 = match(&ms, v16, v6);
    v18 = v17;
    if ( v17 )
      break;
    if ( ++v16 > ms.src_end )
      return 0i64;
  }
  v20 = (_DWORD)v17 - (_DWORD)v2;
  if ( v17 == v16 )
    ++v20;
  top = L->top;
  top->tt_ = 3;
  top->value_.n = (float)v20;
  v22 = ++L->top;
  v23 = L->ci->func;
  if ( v23->tt_ != 22 )
  {
    v24.gc = (GCObject *)v23->value_;
    if ( v24.gc->ts.tsv.extra >= 3u )
      p_stacksize = (char *)&v24.gc->th.stacksize;
  }
  *(_QWORD *)p_stacksize = v22[-1].value_.gc;
  *((_DWORD *)p_stacksize + 2) = v22[-1].tt_;
  if ( (v22[-1].tt_ & 0x40) != 0 )
  {
    gc = v22[-1].value_.gc;
    if ( (gc->gch.marked & 3) != 0 )
    {
      v26.gc = L->ci->func->value_.gc;
      if ( (v26.gc->gch.marked & 4) != 0 )
      {
        l_G = L->l_G;
        if ( l_G->gcstate > 1u )
          v26.gc->gch.marked = v26.gc->gch.marked & 0xB8 | l_G->currentwhite & 3;
        else
          reallymarkobject(L->l_G, gc);
      }
    }
  }
  --L->top;
  level = ms.level;
  if ( ms.level || (v29 = 1, !v16) )
    v29 = ms.level;
  v30 = ms.L;
  if ( !lua_checkstack(ms.L, v29 + 20) )
    luaL_error(v30, "stack overflow (%s)", "too many captures");
  for ( i = 0i64; i < v29; ++i )
  {
    if ( v14 < level )
    {
      v36 = ms.capture[i].len;
      if ( v36 == -1 )
        luaL_error(v30, "unfinished capture");
      if ( v36 == -2 )
      {
        v37 = v30->top;
        v38 = ms.capture[i].init - ms.src_init + 1;
        v37->tt_ = 3;
        v37->value_.n = (float)(int)v38;
        ++v30->top;
      }
      else
      {
        lua_pushlstring(v30, ms.capture[i].init, v36);
      }
    }
    else
    {
      if ( i )
        luaL_error(v30, "invalid capture index");
      v32 = v30->l_G;
      if ( v32->GCdebt > 0 )
      {
        if ( v32->gcrunning )
        {
          luaC_forcestep(v30);
        }
        else
        {
          v33 = v32->GCdebt + 2400;
          v32->GCdebt = -2400i64;
          v32->totalbytes += v33;
        }
      }
      v34 = luaS_newlstr(v30, v16, v18 - v16);
      v35 = v30->top;
      v35->value_.gc = v34;
      v35->tt_ = v34->gch.tt | 0x40;
      ++v30->top;
    }
    ++v14;
  }
  return (unsigned int)v29;
}

const char *__fastcall lmemfind(const char *s1, unsigned __int64 l1, const char *s2, unsigned __int64 l2)
{
  const char *v5; // rdi
  size_t v7; // rbp
  unsigned __int64 v8; // rsi
  char *v9; // rax
  char *v10; // r15
  const char *v11; // rbx
  const char *v12; // rdi
  bool v13; // zf

  v5 = s1;
  if ( !l2 )
    return s1;
  if ( l2 > l1 )
    return 0i64;
  v7 = l2 - 1;
  v8 = l1 - (l2 - 1);
  if ( v8 )
  {
    do
    {
      v9 = (char *)memchr(v5, *s2, v8);
      v10 = v9;
      if ( !v9 )
        break;
      v11 = v9 + 1;
      if ( !memcmp(v9 + 1, s2 + 1, v7) )
        return v10;
      v12 = (const char *)(v5 - v11);
      v13 = &v12[v8] == 0i64;
      v8 += (unsigned __int64)v12;
      v5 = v11;
    }
    while ( !v13 );
  }
  return 0i64;
}

__int64 __fastcall luaopen_string(lua_State *L)
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
  luaH_resize(L, v4, 0, 14);
  luaL_setfuncs(
    L,
    (const luaL_Reg *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[13][8],
    0);
  createmetatable(L);
  return 1i64;
}

const char *__fastcall match(MatchState *ms, const char *s, const char *p)
{
  int matchdepth; // er9
  const char *v4; // rbx
  int v7; // ecx
  const char *v8; // rbx
  const char *v9; // rax
  const char *v10; // rsi
  unsigned __int8 v11; // cl
  _BYTE *v12; // rcx
  const char *src_end; // r8
  const char *v14; // rdi
  int v15; // eax
  const char *v16; // rsi
  char v17; // al
  BOOL v18; // ecx
  int matched; // eax
  const char *v20; // rax
  unsigned __int64 v21; // rcx
  const char *v22; // r10

  matchdepth = ms->matchdepth;
  v4 = p;
  --ms->matchdepth;
  if ( !matchdepth )
    luaL_error(ms->L, "pattern too complex");
  if ( p == ms->p_end )
    goto LABEL_64;
  while ( 1 )
  {
    if ( *v4 == 36 )
    {
      if ( v4 + 1 == ms->p_end )
      {
        v22 = 0i64;
        if ( s == ms->src_end )
          v22 = s;
        s = v22;
        goto LABEL_64;
      }
      goto $dflt;
    }
    if ( *v4 != 37 )
    {
      if ( *v4 == 40 )
      {
        if ( v4[1] == 41 )
          s = start_capture(ms, s, v4 + 2, -2);
        else
          s = start_capture(ms, s, v4 + 1, -1);
        goto LABEL_64;
      }
      if ( *v4 == 41 )
      {
        s = end_capture(ms, s, v4 + 1);
        goto LABEL_64;
      }
      goto $dflt;
    }
    v7 = *((unsigned __int8 *)v4 + 1);
    if ( (char)v7 < 48 )
      goto $dflt;
    if ( (char)v7 <= 57 )
    {
      s = match_capture(ms, s, (unsigned __int8)v7);
      if ( !s )
        goto LABEL_64;
      v4 += 2;
      goto LABEL_52;
    }
    if ( (_BYTE)v7 == 98 )
      break;
    if ( (_BYTE)v7 == 102 )
    {
      v8 = v4 + 2;
      if ( *v8 != 91 )
        luaL_error(ms->L, "missing '[' after '%%f' in pattern");
      v9 = classend(ms, v8);
      v10 = v9;
      if ( s == ms->src_init )
        v11 = 0;
      else
        v11 = *(s - 1);
      if ( !matchbracketclass(v11, v8, v9 - 1) && matchbracketclass(*(unsigned __int8 *)s, v8, v10 - 1) )
      {
        v4 = v10;
        goto LABEL_52;
      }
      goto LABEL_29;
    }
$dflt:
    v16 = classend(ms, v4);
    if ( s >= ms->src_end )
      goto LABEL_49;
    v17 = *v4;
    if ( *v4 == 37 )
    {
      matched = match_class(*(unsigned __int8 *)s, *((unsigned __int8 *)v4 + 1));
    }
    else
    {
      if ( v17 == 46 )
        goto LABEL_42;
      if ( v17 != 91 )
      {
        v18 = *(unsigned __int8 *)v4 == *(unsigned __int8 *)s;
        goto LABEL_41;
      }
      matched = matchbracketclass(*(unsigned __int8 *)s, v4, v16 - 1);
    }
    v18 = matched;
LABEL_41:
    if ( v18 )
    {
LABEL_42:
      switch ( *v16 )
      {
        case '*':
          goto LABEL_59;
        case '+':
          ++s;
LABEL_59:
          v20 = max_expand(ms, s, v4, v16);
LABEL_60:
          s = v20;
          goto LABEL_64;
        case '-':
          s = min_expand(ms, s, v4, v16);
          goto LABEL_64;
        case '?':
          v4 = v16 + 1;
          v20 = match(ms, s + 1, v16 + 1);
          if ( v20 )
            goto LABEL_60;
          break;
        default:
          ++s;
          v4 = v16;
          break;
      }
      goto LABEL_52;
    }
LABEL_49:
    if ( *v16 > 0x3Fu )
      goto LABEL_29;
    v21 = 0x8000240000000000ui64;
    if ( !_bittest64((const __int64 *)&v21, *v16) )
      goto LABEL_29;
    v4 = v16 + 1;
LABEL_52:
    if ( v4 == ms->p_end )
      goto LABEL_64;
  }
  v12 = v4 + 2;
  if ( v4 + 2 >= ms->p_end - 1 )
    luaL_error(ms->L, "malformed pattern (missing arguments to '%%b')");
  if ( *s != *v12 || (src_end = ms->src_end, v14 = s + 1, v15 = 1, v14 >= src_end) )
  {
LABEL_29:
    s = 0i64;
    goto LABEL_64;
  }
  while ( 2 )
  {
    if ( *v14 != v4[3] )
    {
      if ( *v14 == *v12 )
        ++v15;
LABEL_28:
      if ( ++v14 >= src_end )
        goto LABEL_29;
      continue;
    }
    break;
  }
  if ( --v15 )
    goto LABEL_28;
  s = v14 + 1;
  if ( s )
  {
    v4 += 4;
    goto LABEL_52;
  }
LABEL_64:
  ++ms->matchdepth;
  return s;
}

const char *__fastcall match_capture(MatchState *ms, const char *s, int l)
{
  bool v3; // sf
  int v4; // er8
  unsigned __int64 len; // rbx

  v3 = l - 49 < 0;
  v4 = l - 49;
  if ( v3 || v4 >= ms->level || (len = ms->capture[v4].len, len == -1i64) )
    luaL_error(ms->L, "invalid capture index %%%d", (unsigned int)(v4 + 1));
  if ( ms->src_end - s >= len && !memcmp(ms->capture[v4].init, s, ms->capture[v4].len) )
    return &s[len];
  else
    return 0i64;
}

__int64 __fastcall match_class(int c, int cl)
{
  unsigned int v4; // esi
  unsigned int v5; // ebx
  __int64 result; // rax

  v4 = 0;
  switch ( tolower(cl) )
  {
    case 'a':
      v5 = isalpha(c);
      goto LABEL_13;
    case 'c':
      v5 = iscntrl(c);
      goto LABEL_13;
    case 'd':
      v5 = isdigit(c);
      goto LABEL_13;
    case 'g':
      v5 = isgraph(c);
      goto LABEL_13;
    case 'l':
      v5 = islower(c);
      goto LABEL_13;
    case 'p':
      v5 = ispunct(c);
      goto LABEL_13;
    case 's':
      v5 = isspace(c);
      goto LABEL_13;
    case 'u':
      v5 = isupper(c);
      goto LABEL_13;
    case 'w':
      v5 = isalnum(c);
      goto LABEL_13;
    case 'x':
      v5 = isxdigit(c);
      goto LABEL_13;
    case 'z':
      v5 = c == 0;
LABEL_13:
      if ( !islower(cl) )
      {
        LOBYTE(v4) = v5 == 0;
        v5 = v4;
      }
      result = v5;
      break;
    default:
      result = cl == c;
      break;
  }
  return result;
}

__int64 __fastcall matchbracketclass(int c, const char *p, const char *ec)
{
  char v3; // al
  const char *v4; // rbx
  unsigned int v5; // er12
  BOOL v8; // er13
  unsigned __int8 *v9; // rbx
  unsigned __int64 v10; // rdi
  int v11; // er14
  int v12; // esi
  int v13; // eax
  char v15; // [rsp+58h] [rbp+10h]

  v3 = p[1];
  v4 = p + 1;
  v5 = 0;
  v15 = v3;
  v8 = v3 != 94;
  if ( v3 != 94 )
    v4 = p;
  v9 = (unsigned __int8 *)(v4 + 1);
  if ( v9 < (unsigned __int8 *)ec )
  {
    v10 = (unsigned __int64)(v9 + 2);
    do
    {
      if ( *v9 == 37 )
      {
        v11 = *++v9;
        ++v10;
        switch ( tolower(v11) )
        {
          case 'a':
            v12 = isalpha(c);
            goto LABEL_18;
          case 'c':
            v12 = iscntrl(c);
            goto LABEL_18;
          case 'd':
            v12 = isdigit(c);
            goto LABEL_18;
          case 'g':
            v12 = isgraph(c);
            goto LABEL_18;
          case 'l':
            v12 = islower(c);
            goto LABEL_18;
          case 'p':
            v12 = ispunct(c);
            goto LABEL_18;
          case 's':
            v12 = isspace(c);
            goto LABEL_18;
          case 'u':
            v12 = isupper(c);
            goto LABEL_18;
          case 'w':
            v12 = isalnum(c);
            goto LABEL_18;
          case 'x':
            v12 = isxdigit(c);
            goto LABEL_18;
          case 'z':
            v12 = c == 0;
LABEL_18:
            if ( !islower(v11) )
              v12 = v12 == 0;
            break;
          default:
            v12 = v11 == c;
            break;
        }
        if ( v12 )
          return v8;
      }
      else if ( v9[1] == 45 && v10 < (unsigned __int64)ec )
      {
        v13 = *v9;
        v9 += 2;
        v10 += 2i64;
        if ( v13 <= c && c <= *v9 )
          return v8;
      }
      else if ( *v9 == c )
      {
        return v8;
      }
      ++v9;
      ++v10;
    }
    while ( v9 < (unsigned __int8 *)ec );
    v3 = v15;
  }
  LOBYTE(v5) = v3 == 94;
  return v5;
}

const char *__fastcall max_expand(MatchState *ms, const char *s, const char *p, const char *ep)
{
  __int64 v8; // rbx
  const char *i; // rdi
  char v10; // al
  BOOL v11; // ecx
  int matched; // eax
  const char *result; // rax

  v8 = 0i64;
  for ( i = s; i < ms->src_end; ++i )
  {
    v10 = *p;
    if ( *p == 37 )
    {
      matched = match_class(*(unsigned __int8 *)i, *((unsigned __int8 *)p + 1));
    }
    else
    {
      if ( v10 == 46 )
        goto LABEL_11;
      if ( v10 != 91 )
      {
        v11 = *(unsigned __int8 *)p == *(unsigned __int8 *)i;
        goto LABEL_10;
      }
      matched = matchbracketclass(*(unsigned __int8 *)i, p, ep - 1);
    }
    v11 = matched;
LABEL_10:
    if ( !v11 )
      break;
LABEL_11:
    ++v8;
  }
  if ( v8 < 0 )
    return 0i64;
  while ( 1 )
  {
    result = match(ms, &s[v8], ep + 1);
    if ( result )
      break;
    if ( --v8 < 0 )
      return 0i64;
  }
  return result;
}

const char *__fastcall min_expand(MatchState *ms, const char *s, const char *p, const char *ep)
{
  const char *v6; // rbx
  const char *result; // rax
  char v9; // al
  BOOL v10; // ecx
  int matched; // eax

  v6 = s;
  for ( result = match(ms, s, ep + 1); !result; result = match(ms, ++v6, ep + 1) )
  {
    if ( v6 >= ms->src_end )
      return 0i64;
    v9 = *p;
    if ( *p == 37 )
    {
      matched = match_class(*(unsigned __int8 *)v6, *((unsigned __int8 *)p + 1));
    }
    else
    {
      if ( v9 == 46 )
        continue;
      if ( v9 != 91 )
      {
        v10 = *(unsigned __int8 *)p == *(unsigned __int8 *)v6;
        goto LABEL_10;
      }
      matched = matchbracketclass(*(unsigned __int8 *)v6, p, ep - 1);
    }
    v10 = matched;
LABEL_10:
    if ( !v10 )
      return 0i64;
  }
  return result;
}

__int64 __fastcall _LN12_84(MatchState *ms, const char *s, const char *e)
{
  int level; // edi
  lua_State *L; // rbx
  int i; // ebx

  level = ms->level;
  if ( !level )
    level = s != 0i64;
  L = ms->L;
  if ( !lua_checkstack(L, level + 20) )
    luaL_error(L, "stack overflow (%s)", "too many captures");
  for ( i = 0; i < level; ++i )
    push_onecapture(ms, i, s, e);
  return (unsigned int)level;
}

void __fastcall push_onecapture(MatchState *ms, int i, const char *s, const char *e)
{
  lua_State *v5; // rcx
  __int64 v6; // rcx
  __int64 len; // r8
  lua_State *L; // r8
  lua_TValue *top; // rdx
  signed __int64 v10; // rcx

  if ( i < ms->level )
  {
    v6 = i;
    len = ms->capture[i].len;
    if ( len == -1 )
      luaL_error(ms->L, "unfinished capture", -1i64, e);
    if ( len == -2 )
    {
      L = ms->L;
      top = L->top;
      v10 = ms->capture[v6].init - ms->src_init + 1;
      top->tt_ = 3;
      top->value_.n = (float)(int)v10;
      ++L->top;
    }
    else
    {
      lua_pushlstring(ms->L, ms->capture[i].init, len);
    }
  }
  else
  {
    v5 = ms->L;
    if ( i )
      luaL_error(v5, "invalid capture index", s, e);
    lua_pushlstring(v5, s, e - s);
  }
}

const char *__fastcall scanformat(lua_State *L, const char *strfrmt, char *form)
{
  const char *i; // rbx
  int v7; // ecx
  const char *result; // rax

  for ( i = strfrmt; *i; ++i )
  {
    if ( !strchr("-+ #0", *i) )
      break;
  }
  if ( (unsigned __int64)(i - strfrmt) >= 6 )
    luaL_error(L, "invalid format (repeated flags)");
  if ( isdigit(*(unsigned __int8 *)i) )
    ++i;
  if ( isdigit(*(unsigned __int8 *)i) )
    ++i;
  if ( *i == 46 )
  {
    v7 = *(unsigned __int8 *)++i;
    if ( isdigit(v7) )
      ++i;
    if ( isdigit(*(unsigned __int8 *)i) )
      ++i;
  }
  if ( isdigit(*(unsigned __int8 *)i) )
    luaL_error(L, "invalid format (width or precision too long)");
  *form = 37;
  memmove(form + 1, strfrmt, i - strfrmt + 1);
  result = i;
  form[i - strfrmt + 2] = 0;
  return result;
}

const char *__fastcall start_capture(MatchState *ms, const char *s, const char *p, __int64 what)
{
  __int64 level; // r10
  const char *result; // rax

  level = ms->level;
  if ( (int)level >= 32 )
    luaL_error(ms->L, "too many captures", p, what);
  ms->capture[level].init = s;
  ms->capture[level].len = (int)what;
  ms->level = level + 1;
  result = match(ms, s, p);
  if ( !result )
    --ms->level;
  return result;
}

__int64 __fastcall str_byte(lua_State *L)
{
  global_State **v2; // r15
  unsigned __int64 v3; // rbp
  lua_TValue *v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  lua_TValue *v8; // rcx
  unsigned __int64 v9; // rcx
  unsigned int v11; // ebp
  char *v12; // rdx
  lua_TValue *top; // rcx
  lua_TValue *v14; // rcx
  lua_TValue *v15; // rcx
  int v16; // eax
  lua_TValue *v17; // rcx
  int v18; // ecx
  lua_TValue *v19; // rdx
  unsigned __int64 len; // [rsp+58h] [rbp+10h] BYREF

  v2 = lua_tolstring(L, 1, &len);
  if ( !v2 )
    tag_error(L, 1, 4);
  v3 = len;
  v4 = L->ci->func + 2;
  v5 = 0i64;
  if ( v4 >= L->top
    || v4 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (L->ci->func[2].tt_ & 0xF) == 0 )
  {
    v7 = 1i64;
  }
  else
  {
    v6 = luaL_checkinteger(L, 2);
    v7 = v6;
    if ( v6 < 0 )
    {
      if ( -v6 <= v3 )
        v7 = v3 + v6 + 1;
      else
        v7 = 0i64;
    }
  }
  v8 = L->ci->func + 3;
  if ( v8 >= L->top
    || v8 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (L->ci->func[3].tt_ & 0xF) == 0 )
  {
    v9 = v7;
  }
  else
  {
    v9 = luaL_checkinteger(L, 3);
  }
  if ( (v9 & 0x8000000000000000ui64) != 0i64 )
  {
    if ( -(__int64)v9 <= v3 )
      v9 += v3 + 1;
    else
      v9 = 0i64;
  }
  if ( !v7 )
    v7 = 1i64;
  if ( v9 > v3 )
    v9 = v3;
  if ( v7 > v9 )
    return 0i64;
  v11 = v9 - v7 + 1;
  if ( (int)v11 + v7 <= v9 )
    luaL_error(L, "string slice too long");
  if ( !lua_checkstack(L, (int)v9 - (int)v7 + 21) )
    luaL_error(L, "stack overflow (%s)", "string slice too long");
  if ( (int)v11 >= 4i64 )
  {
    v12 = (char *)v2 + v7;
    do
    {
      top = L->top;
      top->value_.n = (float)(unsigned __int8)v12[v5 - 1];
      top->tt_ = 3;
      v14 = ++L->top;
      v14->value_.n = (float)(unsigned __int8)v12[v5];
      v14->tt_ = 3;
      v15 = ++L->top;
      v15->value_.n = (float)(unsigned __int8)v12[v5 + 1];
      v15->tt_ = 3;
      ++L->top;
      v16 = (unsigned __int8)v12[v5 + 2];
      v5 += 4i64;
      v17 = L->top;
      v17->value_.n = (float)v16;
      v17->tt_ = 3;
      ++L->top;
    }
    while ( v5 < (int)v11 - 3i64 );
  }
  for ( ; v5 < (int)v11; ++L->top )
  {
    v18 = *((unsigned __int8 *)v2 + v7 + v5++ - 1);
    v19 = L->top;
    v19->tt_ = 3;
    v19->value_.n = (float)v18;
  }
  return v11;
}

__int64 __fastcall str_char(lua_State *L)
{
  signed __int64 v2; // rcx
  signed __int64 v3; // rbp
  int v4; // ebx
  char *v5; // r14
  __int64 i; // rsi
  CallInfo *ci; // rdx
  lua_TValue *p_l_registry; // rcx
  lua_TValue *func; // rax
  int v10; // ecx
  int tt; // eax
  int n; // edx
  lua_State *v13; // rbx
  unsigned __int64 v14; // rdi
  char *v15; // rsi
  global_State *l_G; // rcx
  __int64 v17; // rax
  GCObject *v18; // rax
  lua_TValue *top; // rcx
  unsigned __int64 v20; // rax
  lua_TValue *v21; // rdx
  float result; // [rsp+20h] [rbp-268h] BYREF
  int v24[6]; // [rsp+28h] [rbp-260h] BYREF
  luaL_Buffer B; // [rsp+40h] [rbp-248h] BYREF

  v2 = (char *)L->top - (char *)L->ci->func - 16;
  B.L = L;
  v3 = (int)(v2 >> 4);
  B.b = B.initb;
  B.n = 0i64;
  B.size = 512i64;
  v4 = 1;
  v5 = luaL_prepbuffsize(&B, v3);
  for ( i = 1i64; i <= v3; ++i )
  {
    ci = L->ci;
    if ( v4 <= 0 )
    {
      if ( v4 <= -1001000 )
      {
        if ( v4 == -1001000 )
        {
          p_l_registry = &L->l_G->l_registry;
        }
        else
        {
          func = ci->func;
          v10 = -1001000 - v4;
          if ( ci->func->tt_ == 22 || v10 > func->value_.gc->ts.tsv.extra )
            p_l_registry = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
          else
            p_l_registry = (lua_TValue *)&(&func->value_.gc->th.top)[2 * v10];
        }
      }
      else
      {
        p_l_registry = &L->top[v4];
      }
    }
    else
    {
      p_l_registry = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
      if ( &ci->func[v4] < L->top )
        p_l_registry = &ci->func[v4];
    }
    tt = p_l_registry->tt_;
    if ( tt != 3 )
    {
      if ( (tt & 0xF) != 4
        || !luaO_str2d((const char *)&p_l_registry->value_.gc->th.l_G, p_l_registry->value_.gc->ts.tsv.len, &result) )
      {
        tag_error(L, v4, 3);
      }
      p_l_registry = (lua_TValue *)v24;
      *(float *)v24 = result;
      v24[2] = 3;
    }
    n = (int)p_l_registry->value_.n;
    if ( (unsigned __int8)n != n )
      luaL_argerror(L, v4, "value out of range");
    v5[i - 1] = n;
    ++v4;
  }
  v13 = B.L;
  v14 = v3 + B.n;
  v15 = B.b;
  B.n += v3;
  l_G = B.L->l_G;
  if ( l_G->GCdebt > 0 )
  {
    if ( l_G->gcrunning )
    {
      luaC_forcestep(B.L);
    }
    else
    {
      v17 = l_G->GCdebt + 2400;
      l_G->GCdebt = -2400i64;
      l_G->totalbytes += v17;
    }
  }
  v18 = luaS_newlstr(v13, v15, v14);
  top = v13->top;
  top->value_.gc = v18;
  top->tt_ = v18->gch.tt | 0x40;
  v20 = (unsigned __int64)++v13->top;
  if ( B.b != B.initb )
  {
    v21 = (lua_TValue *)(v20 - 16);
    if ( v20 - 16 < v20 )
    {
      do
      {
        v21[-1].value_.gc = v21->value_.gc;
        v21[-1].tt_ = v21->tt_;
        ++v21;
      }
      while ( v21 < v13->top );
    }
    --v13->top;
  }
  return 1i64;
}

__int64 __fastcall str_dump(lua_State *L)
{
  CallInfo *ci; // rcx
  lua_TValue *top; // rdx
  const extension::gfxi_detail::TranslatorImpl *v4; // rax
  __int64 v5; // r8
  lua_TValue *v6; // rcx
  Value v7; // rax
  const Proto *p; // rbx
  unsigned __int64 v9; // r8
  lua_State *v10; // rbx
  unsigned __int64 v11; // rcx
  lua_TValue *v12; // rax
  DumpState D; // [rsp+20h] [rbp-E0h] BYREF
  const char *B[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 len; // [rsp+50h] [rbp-B0h]
  lua_State *La; // [rsp+58h] [rbp-A8h]
  char v18[512]; // [rsp+60h] [rbp-A0h] BYREF
  int b; // [rsp+260h] [rbp+160h] BYREF
  char v20; // [rsp+264h] [rbp+164h]
  int v21; // [rsp+265h] [rbp+165h]
  __int16 v22; // [rsp+269h] [rbp+169h]
  char v23; // [rsp+26Bh] [rbp+16Bh]
  int v24; // [rsp+26Ch] [rbp+16Ch]
  __int16 v25; // [rsp+270h] [rbp+170h]

  ci = L->ci;
  top = L->top;
  v4 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[1];
  if ( v4 >= (const extension::gfxi_detail::TranslatorImpl *)top
    || v4 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (ci->func[1].tt_ & 0xF) != 6 )
  {
    tag_error(L, 1, 6);
  }
  v5 = 0i64;
  v6 = ci->func + 2;
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
  B[0] = v18;
  La = L;
  len = 0i64;
  B[1] = (const char *)512;
  if ( v6[-1].tt_ != 70 )
    goto LABEL_13;
  v7.gc = (GCObject *)v6[-1].value_;
  D.strip = 0;
  v23 = 0;
  D.L = L;
  p = v7.gc->cl.l.p;
  D.writer = writer;
  D.data = B;
  b = 1635077147;
  v21 = 134480128;
  v20 = 16 * (a5[0] - 35) + 50;
  v24 = 168661785;
  v25 = 2586;
  v22 = 1028;
  D.status = writer(L, &b, 0x12ui64, B);
  DumpFunction(p, &D, v9);
  if ( D.status )
LABEL_13:
    luaL_error(L, "unable to dump given function", v5);
  v10 = La;
  lua_pushlstring(La, B[0], len);
  if ( B[0] != v18 )
  {
    v11 = (unsigned __int64)v10->top;
    v12 = (lua_TValue *)(v11 - 16);
    if ( v11 - 16 < v11 )
    {
      do
      {
        v12[-1].value_.gc = v12->value_.gc;
        v12[-1].tt_ = v12->tt_;
        ++v12;
      }
      while ( v12 < v10->top );
    }
    --v10->top;
  }
  return 1i64;
}

int __fastcall str_find(lua_State *L)
{
  return str_find_aux(L, 1);
}

__int64 __fastcall str_find_aux(lua_State *L, int find)
{
  const char *v3; // r14
  const char *v4; // r15
  char *v5; // rbx
  lua_TValue *v6; // rcx
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  int v10; // esi
  unsigned __int64 v11; // r12
  CallInfo *ci; // rax
  int v13; // eax
  unsigned __int64 v14; // r14
  __int64 v15; // rax
  const char *v16; // rax
  lua_TValue *v17; // rdx
  int v18; // eax
  lua_TValue *v19; // rcx
  float v20; // xmm0_4
  __int64 result; // rax
  unsigned __int64 v22; // rbx
  char v23; // bp
  const char *v24; // rbx
  const char *v25; // r8
  const char *v26; // rax
  lua_TValue *top; // rax
  __int64 level; // rbp
  lua_TValue *v29; // rax
  lua_State *v30; // rdi
  __int64 v31; // rbx
  const char *src_init; // r15
  lua_State *v33; // rcx
  __int64 v34; // r8
  const char *init; // rdx
  lua_TValue *v36; // rcx
  const char *v37; // rax
  unsigned __int64 len; // [rsp+28h] [rbp-280h] BYREF
  global_State **v40; // [rsp+30h] [rbp-278h]
  unsigned __int64 l2; // [rsp+38h] [rbp-270h] BYREF
  MatchState ms; // [rsp+40h] [rbp-268h] BYREF

  v40 = lua_tolstring(L, 1, &len);
  v3 = (const char *)v40;
  if ( !v40 )
    tag_error(L, 1, 4);
  v4 = (const char *)lua_tolstring(L, 2, &l2);
  if ( !v4 )
    tag_error(L, 2, 4);
  v5 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  v6 = L->ci->func + 3;
  v7 = len;
  if ( v6 >= L->top
    || v6 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (L->ci->func[3].tt_ & 0xF) == 0 )
  {
    v9 = 1i64;
  }
  else
  {
    v8 = luaL_checkinteger(L, 3);
    v9 = v8;
    if ( v8 < 0 )
    {
      if ( -v8 > v7 )
        goto LABEL_11;
      v9 = v7 + v8 + 1;
    }
  }
  if ( v9 )
  {
    if ( v9 > v7 + 1 )
    {
      L->top->tt_ = 0;
      result = 1i64;
      ++L->top;
      return result;
    }
    goto LABEL_12;
  }
LABEL_11:
  v9 = 1i64;
LABEL_12:
  v10 = 0;
  v11 = l2;
  if ( !find )
    goto LABEL_29;
  ci = L->ci;
  if ( &ci->func[4] < L->top )
    v5 = (char *)&ci->func[4];
  v13 = *((_DWORD *)v5 + 2);
  if ( v13 && (v13 != 1 || *(_DWORD *)v5) )
    goto LABEL_24;
  v14 = 0i64;
  do
  {
    if ( strpbrk(&v4[v14], "^$*+?.([%-") )
    {
      v3 = (const char *)v40;
LABEL_29:
      v22 = v9 - 1;
      v23 = *v4;
      v24 = &v3[v22];
      if ( *v4 == 94 )
      {
        ++v4;
        --v11;
      }
      ms.L = L;
      ms.src_end = &v3[v7];
      ms.p_end = &v4[v11];
      ms.matchdepth = 200;
      ms.src_init = v3;
      while ( 1 )
      {
        ms.level = 0;
        v25 = match(&ms, v24, v4);
        if ( v25 )
          break;
        v26 = v24++;
        if ( v26 >= ms.src_end || v23 == 94 )
          goto LABEL_35;
      }
      if ( !find )
        return _LN12_84(&ms, v24, v25);
      top = L->top;
      level = ms.level;
      top->tt_ = 3;
      top->value_.n = (float)((int)v24 - (int)v3 + 1);
      v29 = ++L->top;
      v29->tt_ = 3;
      v29->value_.n = (float)((int)v25 - (int)v3);
      ++L->top;
      v30 = ms.L;
      if ( !lua_checkstack(ms.L, (int)level + 20) )
        luaL_error(v30, "stack overflow (%s)", "too many captures");
      v31 = 0i64;
      if ( (int)level <= 0 )
        return (unsigned int)(level + 2);
      src_init = ms.src_init;
      while ( v10 < (int)level )
      {
        v34 = ms.capture[v31].len;
        if ( v34 == -1 )
          luaL_error(v30, "unfinished capture");
        if ( v34 != -2 )
        {
          init = ms.capture[v31].init;
          v33 = v30;
LABEL_47:
          lua_pushlstring(v33, init, v34);
          goto LABEL_48;
        }
        v36 = v30->top;
        v37 = (const char *)(ms.capture[v31].init - src_init + 1);
        v36->tt_ = 3;
        v36->value_.n = (float)(int)v37;
        ++v30->top;
LABEL_48:
        ++v10;
        if ( ++v31 >= level )
          return (unsigned int)(level + 2);
      }
      v33 = v30;
      if ( v31 )
        luaL_error(v30, "invalid capture index");
      v34 = 0i64;
      init = 0i64;
      goto LABEL_47;
    }
    v15 = -1i64;
    do
      ++v15;
    while ( v4[v14 + v15] );
    v14 += v15 + 1;
  }
  while ( v14 <= v11 );
  v3 = (const char *)v40;
LABEL_24:
  v16 = lmemfind(&v3[v9 - 1], v7 - v9 + 1, v4, v11);
  if ( v16 )
  {
    v17 = L->top;
    v18 = (_DWORD)v16 - (_DWORD)v3;
    v17->tt_ = 3;
    v17->value_.n = (float)(v18 + 1);
    v19 = ++L->top;
    v20 = (float)((int)v11 + v18);
    result = 2i64;
    v19->tt_ = 3;
    v19->value_.n = v20;
    ++L->top;
  }
  else
  {
LABEL_35:
    L->top->tt_ = 0;
    result = 1i64;
    ++L->top;
  }
  return result;
}

__int64 __fastcall str_format(lua_State *L)
{
  int v1; // er12
  signed __int64 v3; // r13
  global_State **v4; // r14
  unsigned __int64 n; // r8
  lua_State *v6; // rbx
  char *initb; // rdi
  unsigned __int64 size; // rcx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  lua_TValue *v11; // rcx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rsi
  unsigned __int64 top; // rax
  lua_TValue *v15; // rcx
  int v16; // ebx
  char *v17; // rsi
  const char *v18; // rax
  __int64 v19; // rax
  int v20; // eax
  float v21; // xmm0_4
  unsigned int v22; // er10
  float v23; // xmm0_4
  __int64 v24; // rcx
  bool v25; // zf
  char v26; // r9
  char *v27; // rdx
  const char *v28; // r8
  char v29; // al
  float v30; // xmm0_4
  float v31; // xmm0_4
  char *v32; // rdx
  const char *v33; // r8
  char v34; // al
  __int64 v35; // rcx
  char v36; // r10
  char *v37; // r8
  const char *v38; // rdx
  char v39; // al
  double v40; // xmm2_8
  global_State **v41; // rdi
  unsigned __int64 v42; // rax
  lua_TValue *v43; // rcx
  unsigned __int64 len; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int64 v46; // [rsp+28h] [rbp-D8h]
  luaL_Buffer Src; // [rsp+30h] [rbp-D0h] BYREF
  char form[24]; // [rsp+250h] [rbp+150h] BYREF

  v1 = 1;
  v3 = ((char *)L->top - (char *)L->ci->func - 16) >> 4;
  v4 = lua_tolstring(L, 1, &len);
  if ( !v4 )
    tag_error(L, 1, 4);
  n = 0i64;
  v6 = L;
  initb = Src.initb;
  Src.b = Src.initb;
  size = 512i64;
  v46 = (unsigned __int64)v4 + len;
  Src.L = L;
  Src.n = 0i64;
  Src.size = 512i64;
  if ( v4 < (global_State **)((char *)v4 + len) )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)v4 == 37 )
      {
        if ( *((_BYTE *)v4 + 1) == 37 )
        {
          if ( n >= size && size == n )
          {
            v12 = 2 * size;
            if ( 2 * size == n )
              v12 = n + 1;
            if ( v12 <= n )
              luaL_error(v6, "buffer too large");
            initb = (char *)lua_newuserdata(v6, v12);
            memmove(initb, Src.b, Src.n);
            if ( Src.b != Src.initb )
              lua_remove(v6, -2);
            n = Src.n;
            Src.b = initb;
            Src.size = v12;
          }
          initb[n] = *((_BYTE *)v4 + 1);
          n = Src.n + 1;
          v4 = (global_State **)((char *)v4 + 2);
        }
        else
        {
          if ( size - n < 0x200 )
          {
            v13 = 2 * size;
            if ( 2 * size - n < 0x200 )
              v13 = n + 512;
            if ( v13 < n || v13 - n < 0x200 )
              luaL_error(v6, "buffer too large");
            initb = (char *)lua_newuserdata(v6, v13);
            memmove(initb, Src.b, Src.n);
            if ( Src.b != Src.initb )
            {
              top = (unsigned __int64)v6->top;
              v15 = (lua_TValue *)(top - 16);
              if ( top - 16 < top )
              {
                do
                {
                  v15[-1].value_.gc = v15->value_.gc;
                  v15[-1].tt_ = v15->tt_;
                  ++v15;
                }
                while ( v15 < v6->top );
              }
              --v6->top;
            }
            n = Src.n;
            Src.b = initb;
            Src.size = v13;
          }
          v16 = 0;
          v17 = &initb[n];
          if ( ++v1 > (int)v3 )
            luaL_argerror(L, v1, "no value");
          v18 = scanformat(L, (const char *)v4 + 1, form);
          v4 = (global_State **)(v18 + 1);
          switch ( *v18 )
          {
            case 'A':
            case 'E':
            case 'G':
            case 'a':
            case 'e':
            case 'f':
            case 'g':
              v35 = -1i64;
              do
                v25 = form[++v35] == 0;
              while ( !v25 );
              v36 = Src.initb[v35 + 511];
              v37 = &Src.initb[v35 + 511];
              v38 = &pnewText;
              do
              {
                v39 = *v38++;
                *v37++ = v39;
              }
              while ( v39 );
              form[v35] = 0;
              Src.initb[v35 + 511] = v36;
              v40 = luaL_checknumber(L, v1);
              v20 = sprintf(v17, form, v40);
              goto LABEL_62;
            case 'X':
            case 'o':
            case 'u':
            case 'x':
              v30 = luaL_checknumber(L, v1);
              v22 = (int)v30;
              v31 = v30 - (float)(int)v30;
              if ( v31 <= -1.0 || v31 >= 1.0 )
                luaL_argerror(L, v1, "not a non-negative number in proper range");
              v24 = -1i64;
              do
                v25 = form[++v24] == 0;
              while ( !v25 );
              v26 = Src.initb[v24 + 511];
              v32 = &Src.initb[v24 + 511];
              v33 = "l";
              do
              {
                v34 = *v33++;
                *v32++ = v34;
              }
              while ( v34 );
              goto LABEL_44;
            case 'c':
              v19 = luaL_checkinteger(L, v1);
              v20 = sprintf(v17, form, v19);
              goto LABEL_62;
            case 'd':
            case 'i':
              v21 = luaL_checknumber(L, v1);
              v22 = (int)v21;
              v23 = v21 - (float)(int)v21;
              if ( v23 <= -1.0 || v23 >= 1.0 )
                luaL_argerror(L, v1, "not a number in proper range");
              v24 = -1i64;
              do
                v25 = form[++v24] == 0;
              while ( !v25 );
              v26 = Src.initb[v24 + 511];
              v27 = &Src.initb[v24 + 511];
              v28 = "l";
              do
              {
                v29 = *v28++;
                *v27++ = v29;
              }
              while ( v29 );
LABEL_44:
              form[v24] = v26;
              form[v24 + 1] = 0;
              v20 = sprintf(v17, form, v22);
              goto LABEL_62;
            case 'q':
              addquoted(L, &Src, v1);
              goto LABEL_63;
            case 's':
              v41 = luaL_tolstring(L, v1, &len);
              if ( strchr(form, 46) || len < 0x64 )
              {
                v20 = sprintf(v17, form, v41);
                --L->top;
LABEL_62:
                v16 = v20;
              }
              else
              {
                luaL_addvalue(&Src);
              }
LABEL_63:
              n = v16 + Src.n;
              break;
            default:
              luaL_error(L, "invalid option '%%%c' to 'format'", (unsigned int)*v18);
          }
        }
      }
      else
      {
        if ( n >= size && size == n )
        {
          v9 = 2 * size;
          if ( 2 * size == n )
            v9 = n + 1;
          if ( v9 <= n )
            luaL_error(v6, "buffer too large");
          initb = (char *)lua_newuserdata(v6, v9);
          memmove(initb, Src.b, Src.n);
          if ( Src.b != Src.initb )
          {
            v10 = (unsigned __int64)v6->top;
            v11 = (lua_TValue *)(v10 - 16);
            if ( v10 - 16 < v10 )
            {
              do
              {
                v11[-1].value_.gc = v11->value_.gc;
                v11[-1].tt_ = v11->tt_;
                ++v11;
              }
              while ( v11 < v6->top );
            }
            --v6->top;
          }
          n = Src.n;
          Src.b = initb;
          Src.size = v9;
        }
        initb[n] = *(_BYTE *)v4;
        n = Src.n + 1;
        v4 = (global_State **)((char *)v4 + 1);
      }
      v6 = Src.L;
      initb = Src.b;
      Src.n = n;
      if ( (unsigned __int64)v4 >= v46 )
        break;
      size = Src.size;
    }
  }
  lua_pushlstring(v6, initb, n);
  if ( Src.b != Src.initb )
  {
    v42 = (unsigned __int64)v6->top;
    v43 = (lua_TValue *)(v42 - 16);
    if ( v42 - 16 < v42 )
    {
      do
      {
        v43[-1].value_.gc = v43->value_.gc;
        v43[-1].tt_ = v43->tt_;
        ++v43;
      }
      while ( v43 < v6->top );
    }
    --v6->top;
  }
  return 1i64;
}

__int64 __fastcall str_gsub(lua_State *L)
{
  global_State **v2; // rdi
  const char *v3; // r13
  CallInfo *ci; // rdx
  lua_TValue *top; // rcx
  const extension::gfxi_detail::TranslatorImpl *v6; // rax
  int tr; // esi
  unsigned __int64 v8; // rbx
  const extension::gfxi_detail::TranslatorImpl *v9; // rax
  unsigned __int64 v10; // r14
  char v11; // cl
  unsigned __int64 v12; // r12
  bool v13; // zf
  unsigned __int64 v14; // rcx
  const char *v15; // rax
  global_State **v16; // rbx
  unsigned __int64 n; // rcx
  lua_State *v18; // rbx
  unsigned __int64 v19; // rsi
  void *v20; // r14
  unsigned __int64 v21; // rcx
  lua_TValue *v22; // rdx
  const char *v23; // rbx
  char *v24; // rax
  unsigned __int64 v25; // r8
  lua_State *v26; // rbx
  unsigned __int64 v27; // rax
  lua_TValue *v28; // rcx
  lua_TValue *v29; // rax
  __int64 result; // rax
  char v31; // [rsp+30h] [rbp-D0h]
  int v32; // [rsp+34h] [rbp-CCh]
  unsigned __int64 len; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v34; // [rsp+40h] [rbp-C0h] BYREF
  luaL_Buffer b; // [rsp+50h] [rbp-B0h] BYREF
  MatchState ms; // [rsp+270h] [rbp+170h] BYREF

  v2 = lua_tolstring(L, 1, &len);
  if ( !v2 )
    tag_error(L, 1, 4);
  v3 = (const char *)lua_tolstring(L, 2, &v34);
  if ( !v3 )
    tag_error(L, 2, 4);
  ci = L->ci;
  top = L->top;
  v6 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[3];
  if ( v6 >= (const extension::gfxi_detail::TranslatorImpl *)top
    || v6 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
  {
    tr = -1;
  }
  else
  {
    tr = ci->func[3].tt_ & 0xF;
  }
  v8 = len;
  v9 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[4];
  v32 = tr;
  v10 = ++len;
  if ( v9 < (const extension::gfxi_detail::TranslatorImpl *)top
    && v9 != (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    && (v9->RefCount & 0xF) != 0 )
  {
    v10 = luaL_checkinteger(L, 4);
    len = v10;
  }
  v11 = *v3;
  v12 = 0i64;
  v31 = *v3;
  if ( (unsigned int)(tr - 3) > 3 )
    luaL_argerror(L, 3, "string/function/table expected");
  b.L = L;
  v13 = v11 == 94;
  b.b = b.initb;
  v14 = v34;
  b.n = 0i64;
  b.size = 512i64;
  if ( v13 )
  {
    ++v3;
    v14 = v34 - 1;
  }
  ms.L = L;
  ms.src_end = (char *)v2 + v8;
  ms.p_end = &v3[v14];
  ms.matchdepth = 200;
  ms.src_init = (const char *)v2;
  if ( v10 )
  {
    do
    {
      ms.level = 0;
      v15 = match(&ms, (const char *)v2, v3);
      v16 = (global_State **)v15;
      if ( v15 && (++v12, add_value(&ms, &b, (const char *)v2, v15, tr), v16 > v2) )
      {
        v2 = v16;
      }
      else
      {
        if ( (const char *)v2 >= ms.src_end )
          break;
        n = b.n;
        if ( b.n >= b.size && (v18 = b.L, b.size == b.n) )
        {
          v19 = 2 * b.size;
          if ( 2 * b.size == b.n )
            v19 = b.n + 1;
          if ( v19 <= b.n )
            luaL_error(b.L, "buffer too large");
          v20 = lua_newuserdata(b.L, v19);
          memmove(v20, b.b, b.n);
          if ( b.b != b.initb )
          {
            v21 = (unsigned __int64)v18->top;
            v22 = (lua_TValue *)(v21 - 16);
            if ( v21 - 16 < v21 )
            {
              do
              {
                v22[-1].value_.gc = v22->value_.gc;
                v22[-1].tt_ = v22->tt_;
                ++v22;
              }
              while ( v22 < v18->top );
            }
            --v18->top;
          }
          n = b.n;
          b.b = (char *)v20;
          b.size = v19;
        }
        else
        {
          v20 = b.b;
        }
        tr = v32;
        *((_BYTE *)v20 + n) = *(_BYTE *)v2;
        ++b.n;
        v10 = len;
        v2 = (global_State **)((char *)v2 + 1);
      }
    }
    while ( v31 != 94 && v12 < v10 );
  }
  v23 = (const char *)(ms.src_end - (const char *)v2);
  v24 = luaL_prepbuffsize(&b, ms.src_end - (const char *)v2);
  memmove(v24, v2, (size_t)v23);
  v25 = (unsigned __int64)&v23[b.n];
  v26 = b.L;
  b.n = v25;
  lua_pushlstring(b.L, b.b, v25);
  if ( b.b != b.initb )
  {
    v27 = (unsigned __int64)v26->top;
    v28 = (lua_TValue *)(v27 - 16);
    if ( v27 - 16 < v27 )
    {
      do
      {
        v28[-1].value_.gc = v28->value_.gc;
        v28[-1].tt_ = v28->tt_;
        ++v28;
      }
      while ( v28 < v26->top );
    }
    --v26->top;
  }
  v29 = L->top;
  v29->tt_ = 3;
  v29->value_.n = (float)(int)v12;
  result = 2i64;
  ++L->top;
  return result;
}

__int64 __fastcall str_len(lua_State *L)
{
  lua_TValue *top; // rax
  float v3; // xmm0_4
  __int64 result; // rax
  unsigned __int64 len; // [rsp+38h] [rbp+10h] BYREF

  if ( !lua_tolstring(L, 1, &len) )
    tag_error(L, 1, 4);
  top = L->top;
  v3 = (float)(int)len;
  top->tt_ = 3;
  top->value_.n = v3;
  result = 1i64;
  ++L->top;
  return result;
}

__int64 __fastcall str_lower(lua_State *L)
{
  global_State **v2; // rsi
  unsigned __int64 v3; // rbp
  char *v4; // rax
  char *v5; // rbx
  signed __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  lua_State *v8; // rbx
  unsigned __int64 v9; // rdi
  char *v10; // rsi
  global_State *l_G; // rcx
  __int64 v12; // rax
  GCObject *v13; // rax
  lua_TValue *top; // rcx
  unsigned __int64 v15; // rcx
  lua_TValue *v16; // rax
  unsigned __int64 len; // [rsp+20h] [rbp-248h] BYREF
  luaL_Buffer B; // [rsp+30h] [rbp-238h] BYREF

  v2 = lua_tolstring(L, 1, &len);
  if ( !v2 )
    tag_error(L, 1, 4);
  v3 = len;
  B.L = L;
  B.b = B.initb;
  B.n = 0i64;
  B.size = 512i64;
  v4 = luaL_prepbuffsize(&B, len);
  v5 = v4;
  if ( v3 )
  {
    v6 = (char *)v2 - v4;
    v7 = v3;
    do
    {
      *v5 = tolower((unsigned __int8)v5[v6]);
      ++v5;
      --v7;
    }
    while ( v7 );
  }
  v8 = B.L;
  v9 = v3 + B.n;
  v10 = B.b;
  B.n += v3;
  l_G = B.L->l_G;
  if ( l_G->GCdebt > 0 )
  {
    if ( l_G->gcrunning )
    {
      luaC_forcestep(B.L);
    }
    else
    {
      v12 = l_G->GCdebt + 2400;
      l_G->GCdebt = -2400i64;
      l_G->totalbytes += v12;
    }
  }
  v13 = luaS_newlstr(v8, v10, v9);
  top = v8->top;
  top->value_.gc = v13;
  top->tt_ = v13->gch.tt | 0x40;
  v15 = (unsigned __int64)++v8->top;
  if ( B.b != B.initb )
  {
    v16 = (lua_TValue *)(v15 - 16);
    if ( v15 - 16 < v15 )
    {
      do
      {
        v16[-1].value_.gc = v16->value_.gc;
        v16[-1].tt_ = v16->tt_;
        ++v16;
      }
      while ( v16 < v8->top );
    }
    --v8->top;
  }
  return 1i64;
}

__int64 __fastcall str_match(lua_State *L)
{
  return str_find_aux(L, 0);
}

__int64 __fastcall str_rep(lua_State *L)
{
  global_State **v2; // r15
  int v3; // eax
  CallInfo *ci; // rcx
  int v5; // ebp
  lua_TValue *v6; // rdx
  global_State **v7; // r14
  size_t v8; // rdi
  global_State *l_G; // rcx
  __int64 v10; // rax
  GCObject *v11; // rax
  lua_TValue *v12; // rcx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r12
  char *v15; // rbx
  __int64 v16; // rbp
  lua_State *v17; // rbx
  unsigned __int64 top; // rcx
  lua_TValue *v19; // rax
  size_t Size; // [rsp+20h] [rbp-268h] BYREF
  unsigned __int64 len; // [rsp+28h] [rbp-260h] BYREF
  luaL_Buffer B; // [rsp+30h] [rbp-258h] BYREF

  v2 = lua_tolstring(L, 1, &len);
  if ( !v2 )
    tag_error(L, 1, 4);
  v3 = luaL_checkinteger(L, 2);
  ci = L->ci;
  v5 = v3;
  v6 = ci->func + 3;
  if ( v6 >= L->top
    || v6 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (ci->func[3].tt_ & 0xF) == 0 )
  {
    v8 = 0i64;
    v7 = (global_State **)&pnewText;
  }
  else
  {
    v7 = lua_tolstring(L, 3, &Size);
    if ( !v7 )
      tag_error(L, 3, 4);
    v8 = Size;
  }
  if ( v5 > 0 )
  {
    v13 = len;
    if ( v8 + len < len || v8 + len >= 0x7FFFFFFFFFFFFFFFui64 / v5 )
      luaL_error(L, "resulting string too large");
    B.L = L;
    B.b = B.initb;
    B.n = 0i64;
    B.size = 512i64;
    v14 = len * v5 + v8 * (v5 - 1);
    v15 = luaL_prepbuffsize(&B, v14);
    if ( v5 > 1 )
    {
      v16 = (unsigned int)(v5 - 1);
      do
      {
        memmove(v15, v2, v13);
        v15 += v13;
        if ( v8 )
        {
          memmove(v15, v7, v8);
          v15 += v8;
        }
        --v16;
      }
      while ( v16 );
    }
    memmove(v15, v2, v13);
    v17 = B.L;
    B.n += v14;
    lua_pushlstring(B.L, B.b, B.n);
    if ( B.b != B.initb )
    {
      top = (unsigned __int64)v17->top;
      v19 = (lua_TValue *)(top - 16);
      if ( top - 16 < top )
      {
        do
        {
          v19[-1].value_.gc = v19->value_.gc;
          v19[-1].tt_ = v19->tt_;
          ++v19;
        }
        while ( v19 < v17->top );
      }
      --v17->top;
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
        v10 = l_G->GCdebt + 2400;
        l_G->GCdebt = -2400i64;
        l_G->totalbytes += v10;
      }
    }
    v11 = internshrstr(L, &pnewText, 0i64);
    v12 = L->top;
    v12->value_.gc = v11;
    v12->tt_ = v11->gch.tt | 0x40;
    ++L->top;
  }
  return 1i64;
}

__int64 __fastcall str_reverse(lua_State *L)
{
  global_State **v2; // rsi
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  char *v5; // rax
  char *v6; // rdx
  char v7; // cl
  lua_State *v8; // rbx
  unsigned __int64 v9; // rsi
  char *v10; // rdi
  global_State *l_G; // rcx
  __int64 v12; // rax
  GCObject *v13; // rax
  lua_TValue *top; // rcx
  unsigned __int64 v15; // rcx
  lua_TValue *v16; // rax
  unsigned __int64 len; // [rsp+20h] [rbp-248h] BYREF
  luaL_Buffer B; // [rsp+30h] [rbp-238h] BYREF

  v2 = lua_tolstring(L, 1, &len);
  if ( !v2 )
    tag_error(L, 1, 4);
  B.L = L;
  v3 = len;
  v4 = 0i64;
  B.b = B.initb;
  B.n = 0i64;
  B.size = 512i64;
  v5 = luaL_prepbuffsize(&B, len);
  if ( v3 )
  {
    v6 = (char *)v2 + v3 - 1;
    do
    {
      v7 = *v6--;
      v5[v4++] = v7;
    }
    while ( v4 < v3 );
  }
  v8 = B.L;
  v9 = v3 + B.n;
  v10 = B.b;
  B.n = v9;
  l_G = B.L->l_G;
  if ( l_G->GCdebt > 0 )
  {
    if ( l_G->gcrunning )
    {
      luaC_forcestep(B.L);
    }
    else
    {
      v12 = l_G->GCdebt + 2400;
      l_G->GCdebt = -2400i64;
      l_G->totalbytes += v12;
    }
  }
  v13 = luaS_newlstr(v8, v10, v9);
  top = v8->top;
  top->value_.gc = v13;
  top->tt_ = v13->gch.tt | 0x40;
  v15 = (unsigned __int64)++v8->top;
  if ( B.b != B.initb )
  {
    v16 = (lua_TValue *)(v15 - 16);
    if ( v15 - 16 < v15 )
    {
      do
      {
        v16[-1].value_.gc = v16->value_.gc;
        v16[-1].tt_ = v16->tt_;
        ++v16;
      }
      while ( v16 < v8->top );
    }
    --v8->top;
  }
  return 1i64;
}

__int64 __fastcall str_sub(lua_State *L)
{
  global_State **v2; // rbp
  __int64 v3; // rax
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  lua_TValue *v6; // rcx
  __int64 v7; // r8
  __int64 result; // rax
  global_State *l_G; // rcx
  __int64 v10; // rax
  GCObject *v11; // rax
  lua_TValue *top; // rcx
  unsigned __int64 len; // [rsp+48h] [rbp+10h] BYREF

  v2 = lua_tolstring(L, 1, &len);
  if ( !v2 )
    tag_error(L, 1, 4);
  v3 = luaL_checkinteger(L, 2);
  v4 = len;
  v5 = v3;
  if ( v3 < 0 )
  {
    if ( -v3 <= len )
      v5 = len + v3 + 1;
    else
      v5 = 0i64;
  }
  v6 = L->ci->func + 3;
  if ( v6 >= L->top
    || v6 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (L->ci->func[3].tt_ & 0xF) == 0 )
  {
    v7 = -1i64;
  }
  else
  {
    v7 = luaL_checkinteger(L, 3);
    if ( v7 >= 0 )
      goto LABEL_15;
  }
  if ( -v7 <= v4 )
    v7 += v4 + 1;
  else
    v7 = 0i64;
LABEL_15:
  if ( !v5 )
    v5 = 1i64;
  if ( v7 > v4 )
    v7 = v4;
  if ( v5 > v7 )
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
        v10 = l_G->GCdebt + 2400;
        l_G->GCdebt = -2400i64;
        l_G->totalbytes += v10;
      }
    }
    v11 = internshrstr(L, &pnewText, 0i64);
    top = L->top;
    top->value_.gc = v11;
    top->tt_ = v11->gch.tt | 0x40;
    result = 1i64;
    ++L->top;
  }
  else
  {
    lua_pushlstring(L, (const char *)v2 + v5 - 1, v7 - v5 + 1);
    return 1i64;
  }
  return result;
}

__int64 __fastcall str_upper(lua_State *L)
{
  global_State **v2; // rsi
  unsigned __int64 v3; // rbp
  char *v4; // rax
  char *v5; // rbx
  signed __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  lua_State *v8; // rbx
  unsigned __int64 v9; // rdi
  char *v10; // rsi
  global_State *l_G; // rcx
  __int64 v12; // rax
  GCObject *v13; // rax
  lua_TValue *top; // rcx
  unsigned __int64 v15; // rcx
  lua_TValue *v16; // rax
  unsigned __int64 len; // [rsp+20h] [rbp-248h] BYREF
  luaL_Buffer B; // [rsp+30h] [rbp-238h] BYREF

  v2 = lua_tolstring(L, 1, &len);
  if ( !v2 )
    tag_error(L, 1, 4);
  v3 = len;
  B.L = L;
  B.b = B.initb;
  B.n = 0i64;
  B.size = 512i64;
  v4 = luaL_prepbuffsize(&B, len);
  v5 = v4;
  if ( v3 )
  {
    v6 = (char *)v2 - v4;
    v7 = v3;
    do
    {
      *v5 = toupper((unsigned __int8)v5[v6]);
      ++v5;
      --v7;
    }
    while ( v7 );
  }
  v8 = B.L;
  v9 = v3 + B.n;
  v10 = B.b;
  B.n += v3;
  l_G = B.L->l_G;
  if ( l_G->GCdebt > 0 )
  {
    if ( l_G->gcrunning )
    {
      luaC_forcestep(B.L);
    }
    else
    {
      v12 = l_G->GCdebt + 2400;
      l_G->GCdebt = -2400i64;
      l_G->totalbytes += v12;
    }
  }
  v13 = luaS_newlstr(v8, v10, v9);
  top = v8->top;
  top->value_.gc = v13;
  top->tt_ = v13->gch.tt | 0x40;
  v15 = (unsigned __int64)++v8->top;
  if ( B.b != B.initb )
  {
    v16 = (lua_TValue *)(v15 - 16);
    if ( v15 - 16 < v15 )
    {
      do
      {
        v16[-1].value_.gc = v16->value_.gc;
        v16[-1].tt_ = v16->tt_;
        ++v16;
      }
      while ( v16 < v8->top );
    }
    --v8->top;
  }
  return 1i64;
}

__int64 __fastcall writer(lua_State *L, const void *b, unsigned __int64 size, void *B)
{
  char *v7; // rax

  v7 = luaL_prepbuffsize((luaL_Buffer *)B, size);
  memmove(v7, b, size);
  *((_QWORD *)B + 2) += size;
  return 0i64;
}

