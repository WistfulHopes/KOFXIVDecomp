#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/ltable.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstring.c"

const char udatatypename[9]; // 0x1408B0898
void luaT_init(lua_State * L); // 0x1402A2F10
const lua_TValue * luaT_gettm(Table * events, TMS event, TString * ename); // 0x1402A2F90
const lua_TValue * luaT_gettmbyobj(lua_State * L, const lua_TValue * o, TMS event); // 0x1402A2FF0//decompilation failure at 1408B0898!
Node *__fastcall luaT_gettm(Table *events, TMS event, TString *ename)
{
  Node *result; // rax

  result = &events->node[(int)ename->tsv.hash & (unsigned __int64)((1 << events->lsizenode) - 1)];
  while ( result->i_key.nk.tt_ != 68 || (TString *)result->i_key.nk.value_.gc != ename )
  {
    result = result->i_key.nk.next;
    if ( !result )
    {
      result = (Node *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
      break;
    }
  }
  if ( !result->i_val.tt_ )
  {
    events->flags |= 1 << event;
    return 0i64;
  }
  return result;
}

Node *__fastcall luaT_gettmbyobj(lua_State *L, const lua_TValue *o, TMS event)
{
  __int64 v3; // r10
  int tt; // er8
  Table *metatable; // r8
  GCObject *v6; // rdx
  Node *result; // rax

  v3 = event;
  tt = o->tt_;
  if ( (tt & 0xF) == 5 || (tt & 0xF) == 7 )
    metatable = o->value_.gc->u.uv.metatable;
  else
    metatable = L->l_G->mt[tt & 0xF];
  if ( !metatable )
    return (Node *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  v6 = (GCObject *)L->l_G->tmname[v3];
  result = &metatable->node[(int)v6->ts.tsv.hash & (unsigned __int64)((1 << metatable->lsizenode) - 1)];
  while ( result->i_key.nk.tt_ != 68 || result->i_key.nk.value_.gc != v6 )
  {
    result = result->i_key.nk.next;
    if ( !result )
      return (Node *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  }
  return result;
}

void __fastcall luaT_init(lua_State *L)
{
  __int64 i; // rbx
  const char *v3; // rdx
  unsigned __int64 v4; // r8
  __int64 v5; // rcx

  for ( i = 288i64; i < 424; i += 8i64 )
  {
    v3 = *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[13][i + 168];
    v4 = -1i64;
    do
      ++v4;
    while ( v3[v4] );
    *(void *(__fastcall **)(void *, void *, unsigned __int64, unsigned __int64))((char *)&L->l_G->frealloc + i) = (void *(__fastcall *)(void *, void *, unsigned __int64, unsigned __int64))luaS_newlstr(L, v3, v4);
    v5 = *(__int64 *)((char *)&L->l_G->frealloc + i);
    *(_BYTE *)(v5 + 9) |= 0x20u;
  }
}

