#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lapi.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/ldo.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lgc.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstate.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstring.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/ltable.c"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lauxlib.c"

const luaL_Reg tab_funcs[28]; // 0x1408B0740
long tinsert(lua_State * L); // 0x1402A1340
long tremove(lua_State * L); // 0x1402A1470
long tconcat(lua_State * L); // 0x1402A17C0
long pack(lua_State * L); // 0x1402A1D00
long unpack(lua_State * L); // 0x1402A1F40
long sort_comp(lua_State * L, long a, long b); // 0x1402A2120
void auxsort(lua_State * L, long l, long u); // 0x1402A22B0
long sort(lua_State * L); // 0x1402A2D40
long luaopen_table(lua_State * L); // 0x1402A2E80//decompilation failure at 1408B0740!
void __fastcall auxsort(lua_State *L, int l, int u)
{
  int v3; // esi
  int v4; // ebp
  lua_TValue *v6; // rax
  Value v7; // rdi
  char *v8; // rdx
  float v9; // xmm1_4
  int v10; // edx
  lua_TValue *top; // rcx
  lua_TValue *v12; // rax
  Value v13; // rdi
  char *v14; // rdx
  float v15; // xmm1_4
  int v16; // edx
  lua_TValue *v17; // rcx
  lua_TValue *v18; // r9
  Table **v19; // rdi
  CallInfo *ci; // rax
  lua_TValue *v21; // rax
  Table *v22; // rdx
  global_State *l_G; // rcx
  Table **v24; // rdi
  lua_TValue *v25; // r9
  CallInfo *v26; // rax
  lua_TValue *v27; // rax
  Table *v28; // rdx
  global_State *v29; // rcx
  int v30; // edi
  int v31; // ebp
  lua_TValue *v32; // r9
  Table **v33; // rsi
  CallInfo *v34; // rax
  lua_TValue *v35; // rax
  Table *v36; // rdx
  global_State *v37; // rcx
  Table **v38; // rsi
  lua_TValue *v39; // r9
  CallInfo *v40; // rax
  lua_TValue *v41; // rax
  Table *v42; // rdx
  global_State *v43; // rcx
  lua_TValue *v44; // rdx
  Table **v45; // rdi
  int v46; // esi
  lua_TValue *v47; // rax
  const Table *gc; // rcx
  char *v49; // rdx
  lua_TValue *v50; // rcx
  lua_TValue *v51; // r9
  CallInfo *v52; // rax
  lua_TValue *v53; // rax
  Table *v54; // rdx
  global_State *v55; // rcx
  Table **v56; // rdi
  lua_TValue *v57; // r9
  CallInfo *v58; // rax
  lua_TValue *v59; // rax
  Table *v60; // rdx
  global_State *v61; // rcx
  int v62; // esi
  int v63; // ebp
  CallInfo *v64; // rax
  lua_TValue *v65; // rdx
  __int64 v66; // r8
  lua_TValue *func; // rcx
  char *v68; // rax
  char *v69; // rcx
  __int64 v70; // rdi
  char *v71; // rdx
  float v72; // xmm1_4
  int v73; // edx
  lua_TValue *v74; // rcx
  lua_TValue *v75; // rax
  Value v76; // rdi
  char *v77; // rdx
  float v78; // xmm1_4
  int v79; // edx
  lua_TValue *v80; // rcx
  lua_TValue *v81; // r9
  Table **v82; // rdi
  CallInfo *v83; // rax
  lua_TValue *v84; // rax
  Table *v85; // rdx
  global_State *v86; // rcx
  Table **v87; // rdi
  lua_TValue *v88; // r9
  CallInfo *v89; // rax
  lua_TValue *v90; // rax
  Table *v91; // rdx
  global_State *v92; // rcx
  lua_TValue *v93; // r9
  Table **v94; // rdi
  CallInfo *v95; // rax
  lua_TValue *v96; // rax
  Table *v97; // rdx
  global_State *v98; // rcx
  Table **v99; // rdi
  lua_TValue *v100; // r9
  CallInfo *v101; // rax
  lua_TValue *v102; // rax
  Table *v103; // rdx
  global_State *v104; // rcx
  int v105; // er8
  int v106; // edx
  int expptr; // [rsp+20h] [rbp-58h] BYREF
  int v108; // [rsp+24h] [rbp-54h] BYREF
  int v109; // [rsp+28h] [rbp-50h] BYREF
  int v110; // [rsp+2Ch] [rbp-4Ch] BYREF
  int n; // [rsp+30h] [rbp-48h]
  int key; // [rsp+88h] [rbp+10h]
  int ua; // [rsp+90h] [rbp+18h]
  int v114; // [rsp+98h] [rbp+20h]

  if ( l < u )
  {
    ua = u;
    key = l;
    v3 = u;
    v4 = l;
    do
    {
      v6 = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
      if ( &L->ci->func[1] < L->top )
        v6 = L->ci->func + 1;
      v7.gc = (GCObject *)v6->value_;
      if ( (unsigned int)(v4 - 1) >= v6->value_.gc->h.sizearray )
      {
        v9 = frexp((float)v4, &expptr);
        v10 = expptr + (int)(float)(v9 * 2147482600.0);
        if ( v10 < 0 )
        {
          if ( v10 == -v10 )
            v10 = 0;
          v10 = -v10;
        }
        v8 = (char *)(v7.gc->u.uv.len + 40i64 * (v10 % (((1 << v7.gc->h.lsizenode) - 1) | 1)));
        while ( *((_DWORD *)v8 + 6) != 3 || *((float *)v8 + 4) != (float)v4 )
        {
          v8 = (char *)*((_QWORD *)v8 + 4);
          if ( !v8 )
          {
            v8 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
            break;
          }
        }
      }
      else
      {
        v8 = (char *)v7.gc->u.uv.env + 16 * v4 - 16;
      }
      top = L->top;
      top->value_.gc = *(GCObject **)v8;
      top->tt_ = *((_DWORD *)v8 + 2);
      ++L->top;
      v12 = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
      if ( &L->ci->func[1] < L->top )
        v12 = L->ci->func + 1;
      v13.gc = (GCObject *)v12->value_;
      if ( (unsigned int)(v3 - 1) >= v12->value_.gc->h.sizearray )
      {
        v15 = frexp((float)v3, &v108);
        v16 = v108 + (int)(float)(v15 * 2147482600.0);
        if ( v16 < 0 )
        {
          if ( v16 == -v16 )
            v16 = 0;
          v16 = -v16;
        }
        v14 = (char *)(v13.gc->u.uv.len + 40i64 * (v16 % (((1 << v13.gc->h.lsizenode) - 1) | 1)));
        while ( *((_DWORD *)v14 + 6) != 3 || *((float *)v14 + 4) != (float)v3 )
        {
          v14 = (char *)*((_QWORD *)v14 + 4);
          if ( !v14 )
          {
            v14 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
            break;
          }
        }
      }
      else
      {
        v14 = (char *)v13.gc->u.uv.env + 16 * v3 - 16;
      }
      v17 = L->top;
      v17->value_.gc = *(GCObject **)v14;
      v17->tt_ = *((_DWORD *)v14 + 2);
      ++L->top;
      if ( sort_comp(L, -1, -2) )
      {
        v18 = L->top;
        v19 = (Table **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
        ci = L->ci;
        if ( &ci->func[1] < v18 )
          v19 = (Table **)&ci->func[1];
        luaH_setint(L, *v19, v4, v18 - 1);
        v21 = L->top;
        if ( (v21[-1].tt_ & 0x40) != 0 && (v21[-1].value_.gc->gch.marked & 3) != 0 )
        {
          v22 = *v19;
          if ( ((*v19)->marked & 4) != 0 )
          {
            l_G = L->l_G;
            v22->marked &= ~4u;
            v22->gclist = l_G->grayagain;
            l_G->grayagain = (GCObject *)v22;
          }
        }
        --L->top;
        v24 = (Table **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
        v25 = L->top;
        v26 = L->ci;
        if ( &v26->func[1] < v25 )
          v24 = (Table **)&v26->func[1];
        luaH_setint(L, *v24, v3, v25 - 1);
        v27 = L->top;
        if ( (v27[-1].tt_ & 0x40) != 0 && (v27[-1].value_.gc->gch.marked & 3) != 0 )
        {
          v28 = *v24;
          if ( ((*v24)->marked & 4) != 0 )
          {
            v29 = L->l_G;
            v28->marked &= ~4u;
            v28->gclist = v29->grayagain;
            v29->grayagain = (GCObject *)v28;
          }
        }
        --L->top;
      }
      else
      {
        L->top -= 2;
      }
      v30 = v3 - v4;
      if ( v3 - v4 == 1 )
        break;
      v31 = (v3 + v4) / 2;
      lua_rawgeti(L, 1, v31);
      lua_rawgeti(L, 1, key);
      if ( sort_comp(L, -2, -1) )
      {
        v32 = L->top;
        v33 = (Table **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
        v34 = L->ci;
        if ( &v34->func[1] < v32 )
          v33 = (Table **)&v34->func[1];
        luaH_setint(L, *v33, v31, v32 - 1);
        v35 = L->top;
        if ( (v35[-1].tt_ & 0x40) != 0 && (v35[-1].value_.gc->gch.marked & 3) != 0 )
        {
          v36 = *v33;
          if ( ((*v33)->marked & 4) != 0 )
          {
            v37 = L->l_G;
            v36->marked &= ~4u;
            v36->gclist = v37->grayagain;
            v37->grayagain = (GCObject *)v36;
          }
        }
        --L->top;
        v38 = (Table **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
        v39 = L->top;
        v40 = L->ci;
        if ( &v40->func[1] < v39 )
          v38 = (Table **)&v40->func[1];
        luaH_setint(L, *v38, key, v39 - 1);
        v41 = L->top;
        if ( (v41[-1].tt_ & 0x40) != 0 && (v41[-1].value_.gc->gch.marked & 3) != 0 )
        {
          v42 = *v38;
          if ( ((*v38)->marked & 4) != 0 )
          {
            v43 = L->l_G;
            v42->marked &= ~4u;
            v42->gclist = v43->grayagain;
            v43->grayagain = (GCObject *)v42;
          }
        }
        --L->top;
        v3 = ua;
      }
      else
      {
        --L->top;
        lua_rawgeti(L, 1, v3);
        if ( sort_comp(L, -1, -2) )
        {
          lua_rawseti(L, 1, v31);
          lua_rawseti(L, 1, v3);
        }
        else
        {
          L->top -= 2;
        }
      }
      if ( v30 == 2 )
        break;
      lua_rawgeti(L, 1, v31);
      v44 = L->top;
      v45 = (Table **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
      v44->value_.gc = v44[-1].value_.gc;
      v44->tt_ = v44[-1].tt_;
      ++L->top;
      v46 = v3 - 1;
      v114 = v46;
      v47 = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
      if ( &L->ci->func[1] < L->top )
        v47 = L->ci->func + 1;
      gc = (const Table *)v47->value_.gc;
      if ( (unsigned int)(v46 - 1) >= v47->value_.gc->h.sizearray )
      {
        v49 = (char *)hashnum(gc, (float)v46);
        while ( *((_DWORD *)v49 + 6) != 3 || *((float *)v49 + 4) != (float)v46 )
        {
          v49 = (char *)*((_QWORD *)v49 + 4);
          if ( !v49 )
          {
            v49 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
            break;
          }
        }
      }
      else
      {
        v49 = (char *)&gc->array[v46 - 1];
      }
      v50 = L->top;
      v50->value_.gc = *(GCObject **)v49;
      v50->tt_ = *((_DWORD *)v49 + 2);
      v51 = ++L->top;
      v52 = L->ci;
      if ( &v52->func[1] < v51 )
        v45 = (Table **)&v52->func[1];
      luaH_setint(L, *v45, v31, v51 - 1);
      v53 = L->top;
      if ( (v53[-1].tt_ & 0x40) != 0 && (v53[-1].value_.gc->gch.marked & 3) != 0 )
      {
        v54 = *v45;
        if ( ((*v45)->marked & 4) != 0 )
        {
          v55 = L->l_G;
          v54->marked &= ~4u;
          v54->gclist = v55->grayagain;
          v55->grayagain = (GCObject *)v54;
        }
      }
      --L->top;
      v56 = (Table **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
      v57 = L->top;
      v58 = L->ci;
      if ( &v58->func[1] < v57 )
        v56 = (Table **)&v58->func[1];
      luaH_setint(L, *v56, v46, v57 - 1);
      v59 = L->top;
      if ( (v59[-1].tt_ & 0x40) != 0 && (v59[-1].value_.gc->gch.marked & 3) != 0 )
      {
        v60 = *v56;
        if ( ((*v56)->marked & 4) != 0 )
        {
          v61 = L->l_G;
          v60->marked &= ~4u;
          v60->gclist = v61->grayagain;
          v61->grayagain = (GCObject *)v60;
        }
      }
      v62 = key;
      v63 = v114;
      while ( 1 )
      {
        while ( 1 )
        {
          --L->top;
          v64 = L->ci;
          v65 = L->top;
          n = v62;
          v66 = v62++;
          func = v64->func;
          v68 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
          v69 = (char *)&func[1];
          if ( v69 < (char *)v65 )
            v68 = v69;
          v70 = *(_QWORD *)v68;
          if ( (unsigned int)(v62 - 1) >= *(_DWORD *)(*(_QWORD *)v68 + 56i64) )
          {
            v72 = frexp((float)v62, &v109);
            v73 = v109 + (int)(float)(v72 * 2147482600.0);
            if ( v73 < 0 )
            {
              if ( v73 == -v73 )
                v73 = 0;
              v73 = -v73;
            }
            v71 = (char *)(*(_QWORD *)(v70 + 32) + 40i64 * (v73 % (((1 << *(_BYTE *)(v70 + 11)) - 1) | 1)));
            while ( *((_DWORD *)v71 + 6) != 3 || *((float *)v71 + 4) != (float)v62 )
            {
              v71 = (char *)*((_QWORD *)v71 + 4);
              if ( !v71 )
              {
                v71 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
                break;
              }
            }
          }
          else
          {
            v71 = (char *)(*(_QWORD *)(v70 + 24) + 16 * v66);
          }
          v74 = L->top;
          v74->value_.gc = *(GCObject **)v71;
          v74->tt_ = *((_DWORD *)v71 + 2);
          ++L->top;
          if ( !sort_comp(L, -1, -2) )
            break;
          if ( v62 >= ua )
            luaL_error(L, "invalid order function for sorting");
        }
        while ( 1 )
        {
          --v63;
          v75 = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
          if ( &L->ci->func[1] < L->top )
            v75 = L->ci->func + 1;
          v76.gc = (GCObject *)v75->value_;
          if ( (unsigned int)(v63 - 1) >= v75->value_.gc->h.sizearray )
          {
            v78 = frexp((float)v63, &v110);
            v79 = v110 + (int)(float)(v78 * 2147482600.0);
            if ( v79 < 0 )
            {
              if ( v79 == -v79 )
                v79 = 0;
              v79 = -v79;
            }
            v77 = (char *)(v76.gc->u.uv.len + 40i64 * (v79 % (((1 << v76.gc->h.lsizenode) - 1) | 1)));
            while ( *((_DWORD *)v77 + 6) != 3 || *((float *)v77 + 4) != (float)v63 )
            {
              v77 = (char *)*((_QWORD *)v77 + 4);
              if ( !v77 )
              {
                v77 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
                break;
              }
            }
          }
          else
          {
            v77 = (char *)v76.gc->u.uv.env + 16 * v63 - 16;
          }
          v80 = L->top;
          v80->value_.gc = *(GCObject **)v77;
          v80->tt_ = *((_DWORD *)v77 + 2);
          ++L->top;
          if ( !sort_comp(L, -3, -1) )
            break;
          if ( v63 <= key )
            luaL_error(L, "invalid order function for sorting");
          --L->top;
        }
        if ( v63 < v62 )
          break;
        v81 = L->top;
        v82 = (Table **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
        v83 = L->ci;
        if ( &v83->func[1] < v81 )
          v82 = (Table **)&v83->func[1];
        luaH_setint(L, *v82, v62, v81 - 1);
        v84 = L->top;
        if ( (v84[-1].tt_ & 0x40) != 0 && (v84[-1].value_.gc->gch.marked & 3) != 0 )
        {
          v85 = *v82;
          if ( ((*v82)->marked & 4) != 0 )
          {
            v86 = L->l_G;
            v85->marked &= ~4u;
            v85->gclist = v86->grayagain;
            v86->grayagain = (GCObject *)v85;
          }
        }
        --L->top;
        v87 = (Table **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
        v88 = L->top;
        v89 = L->ci;
        if ( &v89->func[1] < v88 )
          v87 = (Table **)&v89->func[1];
        luaH_setint(L, *v87, v63, v88 - 1);
        v90 = L->top;
        if ( (v90[-1].tt_ & 0x40) != 0 && (v90[-1].value_.gc->gch.marked & 3) != 0 )
        {
          v91 = *v87;
          if ( ((*v87)->marked & 4) != 0 )
          {
            v92 = L->l_G;
            v91->marked &= ~4u;
            v91->gclist = v92->grayagain;
            v92->grayagain = (GCObject *)v91;
          }
        }
      }
      L->top -= 3;
      lua_rawgeti(L, 1, v114);
      lua_rawgeti(L, 1, v62);
      v93 = L->top;
      v94 = (Table **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
      v95 = L->ci;
      if ( &v95->func[1] < v93 )
        v94 = (Table **)&v95->func[1];
      luaH_setint(L, *v94, v114, v93 - 1);
      v96 = L->top;
      if ( (v96[-1].tt_ & 0x40) != 0 && (v96[-1].value_.gc->gch.marked & 3) != 0 )
      {
        v97 = *v94;
        if ( ((*v94)->marked & 4) != 0 )
        {
          v98 = L->l_G;
          v97->marked &= ~4u;
          v97->gclist = v98->grayagain;
          v98->grayagain = (GCObject *)v97;
        }
      }
      --L->top;
      v99 = (Table **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
      v100 = L->top;
      v101 = L->ci;
      if ( &v101->func[1] < v100 )
        v99 = (Table **)&v101->func[1];
      luaH_setint(L, *v99, v62, v100 - 1);
      v102 = L->top;
      if ( (v102[-1].tt_ & 0x40) != 0 && (v102[-1].value_.gc->gch.marked & 3) != 0 )
      {
        v103 = *v99;
        if ( ((*v99)->marked & 4) != 0 )
        {
          v104 = L->l_G;
          v103->marked &= ~4u;
          v103->gclist = v104->grayagain;
          v104->grayagain = (GCObject *)v103;
        }
      }
      v105 = ua;
      v4 = key;
      --L->top;
      if ( v62 - key >= ua - v62 )
      {
        v106 = v62 + 1;
        v3 = v62 - 1;
        ua = v3;
      }
      else
      {
        v105 = n;
        v106 = key;
        v3 = ua;
        v4 = n + 2;
        key = n + 2;
      }
      auxsort(L, v106, v105);
    }
    while ( v4 < v3 );
  }
}

__int64 __fastcall luaopen_table(lua_State *L)
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
    (const luaL_Reg *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[13][248],
    0);
  return 1i64;
}

__int64 __fastcall pack(lua_State *L)
{
  CallInfo *ci; // rax
  lua_TValue *top; // rbp
  global_State *l_G; // rcx
  __int64 v5; // rbp
  __int64 v6; // rax
  Table *v7; // rax
  lua_TValue *v8; // rcx
  lua_TValue *v9; // rax
  lua_TValue *v10; // rbx
  GCObject *v11; // rax
  lua_TValue *v12; // r8
  CallInfo *v13; // rax
  char *v14; // rdx
  lua_TValue *v15; // rbx
  lua_TValue *v16; // rax
  GCObject *gc; // rdx
  global_State *v18; // rcx
  lua_TValue *v19; // rdx
  lua_TValue *v20; // r8
  lua_TValue *i; // r9
  CallInfo *v22; // rax
  Table **v23; // rbx
  lua_TValue *v24; // rax
  Table *v25; // r8
  global_State *v26; // rdx

  ci = L->ci;
  top = L->top;
  l_G = L->l_G;
  v5 = ((char *)top - (char *)ci->func - 16) >> 4;
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
  v8 = L->top;
  v8->value_.gc = (GCObject *)v7;
  v8->tt_ = 69;
  ++L->top;
  luaH_resize(L, v7, v5, 1);
  v9 = L->top;
  v9->tt_ = 3;
  v9->value_.n = (float)(int)v5;
  v10 = L->top;
  L->top = v10 + 2;
  v11 = luaS_newlstr(L, "n", 1ui64);
  v10[1].value_.gc = v11;
  v10[1].tt_ = v11->gch.tt | 0x40;
  luaV_settable(L, v10 - 1, L->top - 1, L->top - 2);
  L->top -= 2;
  v12 = L->top;
  if ( (int)v5 > 0 )
  {
    v13 = L->ci;
    v14 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
    if ( &v13->func[1] < v12 )
      v14 = (char *)&v13->func[1];
    v12->value_.gc = *(GCObject **)v14;
    v12->tt_ = *((_DWORD *)v14 + 2);
    v15 = ++L->top;
    luaH_setint(L, (Table *)v15[-2].value_.gc, 1, v15 - 1);
    v16 = L->top;
    if ( (v16[-1].tt_ & 0x40) != 0 && (v16[-1].value_.gc->gch.marked & 3) != 0 )
    {
      gc = v15[-2].value_.gc;
      if ( (gc->gch.marked & 4) != 0 )
      {
        v18 = L->l_G;
        gc->gch.marked &= ~4u;
        gc->h.gclist = v18->grayagain;
        v18->grayagain = gc;
      }
    }
    --L->top;
    v19 = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
    v20 = L->top;
    if ( &L->ci->func[1] < v20 )
      v19 = L->ci->func + 1;
    v19->value_.gc = v20[-1].value_.gc;
    v19->tt_ = v20[-1].tt_;
    for ( i = --L->top; (int)v5 >= 2; i = L->top )
    {
      v22 = L->ci;
      v23 = (Table **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
      if ( &v22->func[1] < i )
        v23 = (Table **)&v22->func[1];
      luaH_setint(L, *v23, v5, i - 1);
      v24 = L->top;
      if ( (v24[-1].tt_ & 0x40) != 0 && (v24[-1].value_.gc->gch.marked & 3) != 0 )
      {
        v25 = *v23;
        if ( ((*v23)->marked & 4) != 0 )
        {
          v26 = L->l_G;
          v25->marked &= ~4u;
          v25->gclist = v26->grayagain;
          v26->grayagain = (GCObject *)v25;
        }
      }
      --L->top;
      LODWORD(v5) = v5 - 1;
    }
  }
  return 1i64;
}

__int64 __fastcall sort(lua_State *L)
{
  CallInfo *ci; // rax
  lua_TValue *v3; // rcx
  int v4; // edi
  CallInfo *v5; // rcx
  lua_TValue *top; // rdx
  const extension::gfxi_detail::TranslatorImpl *v7; // rax
  const extension::gfxi_detail::TranslatorImpl *v8; // rax
  lua_TValue *v9; // rcx

  ci = L->ci;
  v3 = ci->func + 1;
  if ( v3 >= L->top
    || v3 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (ci->func[1].tt_ & 0xF) != 5 )
  {
    tag_error(L, 1, 5);
  }
  v4 = luaL_len(L, 1);
  if ( !lua_checkstack(L, 60) )
    luaL_error(L, "stack overflow (%s)", &pnewText);
  v5 = L->ci;
  top = L->top;
  v7 = (const extension::gfxi_detail::TranslatorImpl *)&v5->func[2];
  if ( v7 < (const extension::gfxi_detail::TranslatorImpl *)top
    && v7 != (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    && (v5->func[2].tt_ & 0xF) != 0 )
  {
    v8 = (const extension::gfxi_detail::TranslatorImpl *)&v5->func[2];
    if ( v8 >= (const extension::gfxi_detail::TranslatorImpl *)top
      || v8 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
      || (v5->func[2].tt_ & 0xF) != 6 )
    {
      tag_error(L, 2, 6);
    }
  }
  v9 = v5->func + 3;
  if ( top < v9 )
  {
    do
    {
      L->top->tt_ = 0;
      ++L->top;
    }
    while ( L->top < v9 );
  }
  L->top = v9;
  auxsort(L, 1, v4);
  return 0i64;
}

int __fastcall sort_comp(lua_State *L, int a, int b)
{
  CallInfo *ci; // r9
  char *v4; // r10
  lua_TValue *top; // rcx
  const extension::gfxi_detail::TranslatorImpl *v8; // rax
  int v9; // edi
  const lua_TValue *v10; // rax
  const lua_TValue *v11; // r10
  const lua_TValue *v12; // r11
  lua_TValue *v14; // rax
  lua_TValue *v15; // r10
  lua_TValue *v16; // rax
  lua_TValue *v17; // r10
  lua_TValue *v18; // rax
  lua_TValue *v19; // rdx
  unsigned __int16 nCcalls; // ax
  lua_TValue *v21; // rax
  int tt; // ecx

  ci = L->ci;
  v4 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  top = L->top;
  v8 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[2];
  if ( v8 >= (const extension::gfxi_detail::TranslatorImpl *)top
    || v8 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (ci->func[2].tt_ & 0xF) != 0 )
  {
    if ( &ci->func[2] < top )
      v4 = (char *)&ci->func[2];
    top->value_.gc = *(GCObject **)v4;
    top->tt_ = *((_DWORD *)v4 + 2);
    ++L->top;
    v14 = index2addr(L, a - 1);
    *v15 = *v14;
    ++L->top;
    v16 = index2addr(L, b - 2);
    *v17 = *v16;
    v18 = ++L->top;
    ++L->nCcalls;
    v19 = v18 - 3;
    nCcalls = L->nCcalls;
    if ( nCcalls >= 0xC8u )
    {
      if ( nCcalls == 200 )
        luaG_runerror(L, "C stack overflow");
      if ( nCcalls >= 0xE1u )
        luaD_throw(L, 6);
    }
    ++L->nny;
    v9 = 1;
    if ( !(unsigned int)luaD_precall(L, v19, 1) )
      luaV_execute(L);
    --L->nny;
    --L->nCcalls;
    v21 = L->top - 1;
    tt = v21->tt_;
    if ( !tt || tt == 1 && !v21->value_.b )
      v9 = 0;
    L->top = v21;
  }
  else
  {
    v9 = 0;
    index2addr(L, a);
    v10 = index2addr(L, b);
    if ( v12 != v11 && v10 != v11 )
      return luaV_lessthan(L, v12, v10);
  }
  return v9;
}

__int64 __fastcall _LN169_7(lua_State *L)
{
  unsigned __int64 v2; // rdi
  lua_TValue *v3; // rcx
  unsigned __int64 v4; // r12
  CallInfo *ci; // rdx
  lua_TValue *top; // rcx
  const extension::gfxi_detail::TranslatorImpl *v7; // rax
  const extension::gfxi_detail::TranslatorImpl *v8; // rax
  int v9; // er15
  lua_TValue *v10; // rcx
  int v11; // er13
  lua_State *v12; // rbx
  bool v13; // zf
  lua_TValue *v14; // rax
  Value v15; // rbx
  char *v16; // rdx
  float v17; // xmm1_4
  int v18; // edx
  lua_TValue *v19; // rcx
  const extension::gfxi_detail::TranslatorImpl *v20; // rcx
  unsigned __int64 n; // rcx
  lua_State *v22; // rbx
  unsigned __int64 v23; // rdi
  char *v24; // r14
  unsigned __int64 v25; // rcx
  lua_TValue *v26; // rdx
  const extension::gfxi_detail::TranslatorImpl *v27; // rcx
  global_State *l_G; // rcx
  char *v29; // rsi
  int v30; // eax
  int v31; // eax
  __int64 v32; // rax
  GCObject *v33; // rax
  lua_TValue *v34; // rcx
  unsigned __int64 v35; // rax
  lua_TValue *v36; // rdx
  unsigned __int64 len; // [rsp+20h] [rbp-E0h] BYREF
  void *Src; // [rsp+28h] [rbp-D8h]
  luaL_Buffer B; // [rsp+30h] [rbp-D0h] BYREF

  v2 = 0i64;
  v3 = L->ci->func + 2;
  if ( v3 >= L->top
    || v3 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (v3->tt_ & 0xF) == 0 )
  {
    v4 = 0i64;
    Src = (void *)&pnewText;
  }
  else
  {
    Src = lua_tolstring(L, 2, &len);
    if ( !Src )
      tag_error(L, 2, 4);
    v4 = len;
  }
  ci = L->ci;
  top = L->top;
  v7 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[1];
  if ( v7 >= (const extension::gfxi_detail::TranslatorImpl *)top
    || v7 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (ci->func[1].tt_ & 0xF) != 5 )
  {
    tag_error(L, 1, 5);
  }
  v8 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[3];
  if ( v8 >= (const extension::gfxi_detail::TranslatorImpl *)top
    || v8 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (ci->func[3].tt_ & 0xF) == 0 )
  {
    v9 = 1;
  }
  else
  {
    v9 = luaL_checkinteger(L, 3);
  }
  v10 = L->ci->func + 4;
  if ( v10 >= L->top
    || v10 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (L->ci->func[4].tt_ & 0xF) == 0 )
  {
    v11 = luaL_len(L, 1);
  }
  else
  {
    v11 = luaL_checkinteger(L, 4);
  }
  v12 = L;
  B.L = L;
  B.b = B.initb;
  B.n = 0i64;
  B.size = 512i64;
  v13 = v9 == v11;
  if ( v9 < v11 )
  {
    do
    {
      v14 = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
      if ( &L->ci->func[1] < L->top )
        v14 = L->ci->func + 1;
      v15.gc = (GCObject *)v14->value_;
      if ( (unsigned int)(v9 - 1) >= v14->value_.gc->h.sizearray )
      {
        v17 = frexp((float)v9, (int *)&len);
        v18 = len + (int)(float)(v17 * 2147482600.0);
        if ( v18 < 0 )
        {
          if ( v18 == -v18 )
            v18 = 0;
          v18 = -v18;
        }
        v16 = (char *)(v15.gc->u.uv.len + 40i64 * (v18 % (((1 << v15.gc->h.lsizenode) - 1) | 1)));
        while ( *((_DWORD *)v16 + 6) != 3 || *((float *)v16 + 4) != (float)v9 )
        {
          v16 = (char *)*((_QWORD *)v16 + 4);
          if ( !v16 )
          {
            v16 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
            break;
          }
        }
      }
      else
      {
        v16 = (char *)v15.gc->u.uv.env + 16 * v9 - 16;
      }
      v19 = L->top;
      v19->value_.gc = *(GCObject **)v16;
      v19->tt_ = *((_DWORD *)v16 + 2);
      ++L->top;
      v20 = (const extension::gfxi_detail::TranslatorImpl *)&L->top[-1];
      if ( v20 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
        goto LABEL_68;
      if ( (v20->RefCount & 0xFu) - 3 > 1 )
      {
        if ( v20 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
LABEL_68:
          v30 = -1;
        else
          v30 = v20->RefCount & 0xF;
        luaL_error(
          L,
          "invalid value (%s) at index %d in table for 'concat'",
          *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[14][8 * v30 + 112],
          (unsigned int)v9);
      }
      luaL_addvalue(&B);
      n = B.n;
      v22 = B.L;
      if ( B.size - B.n >= v4 )
      {
        v24 = B.b;
      }
      else
      {
        v23 = 2 * B.size;
        if ( 2 * B.size - B.n < v4 )
          v23 = B.n + v4;
        if ( v23 < B.n || v23 - B.n < v4 )
          luaL_error(B.L, "buffer too large");
        v24 = (char *)lua_newuserdata(B.L, v23);
        memmove(v24, B.b, B.n);
        if ( B.b != B.initb )
        {
          v25 = (unsigned __int64)v22->top;
          v26 = (lua_TValue *)(v25 - 16);
          if ( v25 - 16 < v25 )
          {
            do
            {
              v26[-1].value_.gc = v26->value_.gc;
              v26[-1].tt_ = v26->tt_;
              ++v26;
            }
            while ( v26 < v22->top );
          }
          --v22->top;
        }
        n = B.n;
        B.b = v24;
        B.size = v23;
      }
      memmove(&v24[n], Src, v4);
      v2 = v4 + B.n;
      ++v9;
      B.n += v4;
    }
    while ( v9 < v11 );
    v12 = B.L;
    v13 = v9 == v11;
  }
  if ( v13 )
  {
    lua_rawgeti(L, 1, v9);
    v27 = (const extension::gfxi_detail::TranslatorImpl *)&L->top[-1];
    if ( v27 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
      goto LABEL_70;
    if ( (v27->RefCount & 0xFu) - 3 <= 1 )
    {
      luaL_addvalue(&B);
      v12 = B.L;
      v2 = B.n;
      goto LABEL_53;
    }
    if ( v27 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
LABEL_70:
      v31 = -1;
    else
      v31 = v27->RefCount & 0xF;
    luaL_error(
      L,
      "invalid value (%s) at index %d in table for 'concat'",
      *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[14][8 * v31 + 112],
      (unsigned int)v9);
  }
LABEL_53:
  l_G = v12->l_G;
  v29 = B.b;
  if ( l_G->GCdebt > 0 )
  {
    if ( l_G->gcrunning )
    {
      luaC_forcestep(v12);
    }
    else
    {
      v32 = l_G->GCdebt + 2400;
      l_G->GCdebt = -2400i64;
      l_G->totalbytes += v32;
    }
  }
  v33 = luaS_newlstr(v12, v29, v2);
  v34 = v12->top;
  v34->value_.gc = v33;
  v34->tt_ = v33->gch.tt | 0x40;
  v35 = (unsigned __int64)++v12->top;
  if ( B.b != B.initb )
  {
    v36 = (lua_TValue *)(v35 - 16);
    if ( v35 - 16 < v35 )
    {
      do
      {
        v36[-1].value_.gc = v36->value_.gc;
        v36[-1].tt_ = v36->tt_;
        ++v36;
      }
      while ( v36 < v12->top );
    }
    --v12->top;
  }
  return 1i64;
}

__int64 __fastcall tinsert(lua_State *L)
{
  lua_TValue *v2; // rcx
  int v3; // esi
  int v4; // eax
  int v5; // ebp

  v2 = L->ci->func + 1;
  if ( v2 >= L->top
    || v2 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (v2->tt_ & 0xF) != 5 )
  {
    tag_error(L, 1, 5);
  }
  v3 = luaL_len(L, 1) + 1;
  if ( (unsigned int)(((char *)L->top - (char *)L->ci->func - 16) >> 4) == 2 )
  {
    v5 = v3;
  }
  else
  {
    if ( (unsigned int)(((char *)L->top - (char *)L->ci->func - 16) >> 4) != 3 )
      luaL_error(L, "wrong number of arguments to 'insert'");
    v4 = luaL_checkinteger(L, 2);
    v5 = v4;
    if ( v4 < 1 || v4 > v3 )
      luaL_argerror(L, 2, "position out of bounds");
    if ( v3 > v4 )
    {
      do
      {
        lua_rawgeti(L, 1, v3 - 1);
        lua_rawseti(L, 1, v3--);
      }
      while ( v3 > v5 );
    }
  }
  lua_rawseti(L, 1, v5);
  return 0i64;
}

__int64 __fastcall tremove(lua_State *L)
{
  CallInfo *ci; // rax
  lua_TValue *v3; // rcx
  Table **v4; // r14
  int v5; // er15
  lua_TValue *v6; // rdx
  int v7; // eax
  int v8; // edi
  lua_TValue *v9; // rax
  const Table *gc; // rcx
  char *v11; // rdx
  lua_TValue *top; // rcx
  int v13; // ebp
  lua_TValue *v14; // rax
  Value v15; // rsi
  char *v16; // rdx
  float v17; // xmm1_4
  int v18; // edx
  Table **v19; // rsi
  lua_TValue *v20; // rcx
  lua_TValue *v21; // r9
  CallInfo *v22; // rax
  lua_TValue *v23; // rax
  Table *v24; // rdx
  global_State *l_G; // rcx
  lua_TValue *v26; // r9
  CallInfo *v27; // rax
  lua_TValue *v28; // rax
  Table *v29; // rdx
  global_State *v30; // rcx
  int expptr; // [rsp+70h] [rbp+8h] BYREF

  ci = L->ci;
  v3 = ci->func + 1;
  if ( v3 >= L->top
    || (v4 = (Table **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168],
        v3 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168])
    || (ci->func[1].tt_ & 0xF) != 5 )
  {
    tag_error(L, 1, 5);
  }
  v5 = luaL_len(L, 1);
  v6 = L->ci->func + 2;
  if ( v6 >= L->top
    || v6 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (L->ci->func[2].tt_ & 0xF) == 0 )
  {
    v8 = v5;
  }
  else
  {
    v7 = luaL_checkinteger(L, 2);
    v8 = v7;
    if ( v7 != v5 && (v7 < 1 || v7 > v5 + 1) )
      luaL_argerror(L, 1, "position out of bounds");
  }
  v9 = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  if ( &L->ci->func[1] < L->top )
    v9 = L->ci->func + 1;
  gc = (const Table *)v9->value_.gc;
  if ( (unsigned int)(v8 - 1) >= v9->value_.gc->h.sizearray )
  {
    v11 = (char *)hashnum(gc, (float)v8);
    while ( *((_DWORD *)v11 + 6) != 3 || *((float *)v11 + 4) != (float)v8 )
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
    v11 = (char *)&gc->array[v8 - 1];
  }
  top = L->top;
  top->value_.gc = *(GCObject **)v11;
  top->tt_ = *((_DWORD *)v11 + 2);
  ++L->top;
  if ( v8 < v5 )
  {
    do
    {
      v13 = v8 + 1;
      v14 = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
      if ( &L->ci->func[1] < L->top )
        v14 = L->ci->func + 1;
      v15.gc = (GCObject *)v14->value_;
      if ( (unsigned int)v8 >= v14->value_.gc->h.sizearray )
      {
        v17 = frexp((float)v13, &expptr);
        v18 = expptr + (int)(float)(v17 * 2147482600.0);
        if ( v18 < 0 )
        {
          if ( v18 == -v18 )
            v18 = 0;
          v18 = -v18;
        }
        v16 = (char *)(v15.gc->u.uv.len + 40i64 * (v18 % (((1 << v15.gc->h.lsizenode) - 1) | 1)));
        while ( *((_DWORD *)v16 + 6) != 3 || *((float *)v16 + 4) != (float)v13 )
        {
          v16 = (char *)*((_QWORD *)v16 + 4);
          if ( !v16 )
          {
            v16 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
            break;
          }
        }
      }
      else
      {
        v16 = (char *)v15.gc->u.uv.env + 16 * v8;
      }
      v19 = (Table **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
      v20 = L->top;
      v20->value_.gc = *(GCObject **)v16;
      v20->tt_ = *((_DWORD *)v16 + 2);
      v21 = ++L->top;
      v22 = L->ci;
      if ( &v22->func[1] < v21 )
        v19 = (Table **)&v22->func[1];
      luaH_setint(L, *v19, v8, v21 - 1);
      v23 = L->top;
      if ( (v23[-1].tt_ & 0x40) != 0 && (v23[-1].value_.gc->gch.marked & 3) != 0 )
      {
        v24 = *v19;
        if ( ((*v19)->marked & 4) != 0 )
        {
          l_G = L->l_G;
          v24->marked &= ~4u;
          v24->gclist = l_G->grayagain;
          l_G->grayagain = (GCObject *)v24;
        }
      }
      --L->top;
      ++v8;
    }
    while ( v13 < v5 );
  }
  L->top->tt_ = 0;
  v26 = ++L->top;
  v27 = L->ci;
  if ( &v27->func[1] < v26 )
    v4 = (Table **)&v27->func[1];
  luaH_setint(L, *v4, v8, v26 - 1);
  v28 = L->top;
  if ( (v28[-1].tt_ & 0x40) != 0 && (v28[-1].value_.gc->gch.marked & 3) != 0 )
  {
    v29 = *v4;
    if ( ((*v4)->marked & 4) != 0 )
    {
      v30 = L->l_G;
      v29->marked &= ~4u;
      v29->gclist = v30->grayagain;
      v30->grayagain = (GCObject *)v29;
    }
  }
  --L->top;
  return 1i64;
}

__int64 __fastcall unpack(lua_State *L)
{
  CallInfo *ci; // rdx
  lua_TValue *top; // rcx
  const extension::gfxi_detail::TranslatorImpl *v4; // rax
  const extension::gfxi_detail::TranslatorImpl *v5; // rax
  int v6; // edi
  lua_TValue *v7; // rcx
  int v8; // esi
  int v10; // ebp
  __int64 v11; // rdx
  lua_TValue *v12; // rax
  const Table *gc; // rcx
  char *v14; // rax
  lua_TValue *v15; // rdx

  ci = L->ci;
  top = L->top;
  v4 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[1];
  if ( v4 >= (const extension::gfxi_detail::TranslatorImpl *)top
    || v4 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (ci->func[1].tt_ & 0xF) != 5 )
  {
    tag_error(L, 1, 5);
  }
  v5 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[2];
  if ( v5 >= (const extension::gfxi_detail::TranslatorImpl *)top
    || v5 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (ci->func[2].tt_ & 0xF) == 0 )
  {
    v6 = 1;
  }
  else
  {
    v6 = luaL_checkinteger(L, 2);
  }
  v7 = L->ci->func + 3;
  if ( v7 >= L->top
    || v7 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (L->ci->func[3].tt_ & 0xF) == 0 )
  {
    v8 = luaL_len(L, 1);
  }
  else
  {
    v8 = luaL_checkinteger(L, 3);
  }
  if ( v6 > v8 )
    return 0i64;
  v10 = v8 - v6 + 1;
  if ( v10 <= 0 || !lua_checkstack(L, v10) )
    luaL_error(L, "too many results to unpack");
  lua_rawgeti(L, 1, v6);
  for ( ; v6 < v8; ++L->top )
  {
    v11 = v6++;
    v12 = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
    if ( &L->ci->func[1] < L->top )
      v12 = L->ci->func + 1;
    gc = (const Table *)v12->value_.gc;
    if ( (unsigned int)(v6 - 1) >= v12->value_.gc->h.sizearray )
    {
      v14 = (char *)hashnum(gc, (float)v6);
      while ( *((_DWORD *)v14 + 6) != 3 || *((float *)v14 + 4) != (float)v6 )
      {
        v14 = (char *)*((_QWORD *)v14 + 4);
        if ( !v14 )
        {
          v14 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
          break;
        }
      }
    }
    else
    {
      v14 = (char *)&gc->array[v11];
    }
    v15 = L->top;
    v15->value_.gc = *(GCObject **)v14;
    v15->tt_ = *((_DWORD *)v14 + 2);
  }
  return (unsigned int)v10;
}

