#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstring.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lmem.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/ltable.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lgc.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstate.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lzio.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lobject.c"

const char * luaX_tokens[33]; // 0x1408B0200
void save(LexState * ls, long c); // 0x1402932D0
const char * luaX_token2str(LexState * ls, long token); // 0x140293370
void lexerror(LexState * ls, const char * msg, long token); // 0x1402933F0
TString * luaX_newstring(LexState * ls, const char * str, unsigned long long l); // 0x1402934A0
void inclinenumber(LexState * ls); // 0x140293580
void luaX_setinput(lua_State * L, LexState * ls, Zio * z, TString * source, long firstchar); // 0x140293670
long check_next(LexState * ls, const char * set); // 0x140293780
void trydecpoint(LexState * ls, SemInfo * seminfo); // 0x140293800
void read_numeral(LexState * ls, SemInfo * seminfo); // 0x1402938A0
long skip_sep(LexState * ls); // 0x140293BB0
void read_long_string(LexState * ls, SemInfo * seminfo, long sep); // 0x140293CE0
long readhexaesc(LexState * ls); // 0x140293ED0
long readdecesc(LexState * ls); // 0x140294050
void read_string(LexState * ls, long del, SemInfo * seminfo); // 0x1402941B0
long llex(LexState * ls, SemInfo * seminfo); // 0x1402946A0
void luaX_next(LexState * ls); // 0x140295140//decompilation failure at 1408B0200!
__int64 __fastcall check_next(LexState *ls, const char *set)
{
  Zio *z; // rcx
  unsigned __int64 v4; // rdx
  Zio *v5; // rcx
  const char *p; // rax
  int v7; // edx
  __int64 result; // rax

  if ( !ls->current || !strchr(set, ls->current) )
    return 0i64;
  save(ls, ls->current);
  z = ls->z;
  v4 = z->n--;
  v5 = ls->z;
  if ( v4 )
  {
    p = v5->p;
    v7 = *(unsigned __int8 *)p;
    v5->p = p + 1;
    result = 1i64;
    ls->current = v7;
  }
  else
  {
    ls->current = luaZ_fill(v5);
    return 1i64;
  }
  return result;
}

void __fastcall inclinenumber(LexState *ls)
{
  Zio *z; // rdx
  int current; // esi
  Zio *v5; // rdx
  const char *p; // rax
  int v7; // ecx
  Zio *v8; // rdi
  const char *v9; // rax
  __int64 v10; // rcx
  Zio *v11; // rcx
  unsigned __int64 v12; // rdx
  Zio *v13; // rcx
  const char *v14; // rax
  int v15; // edx
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  z = ls->z;
  current = ls->current;
  if ( z->n-- )
  {
    v5 = ls->z;
    p = v5->p;
    v7 = *(unsigned __int8 *)p;
    v5->p = p + 1;
  }
  else
  {
    v8 = ls->z;
    v9 = v8->reader(v8->L, v8->data, (unsigned __int64 *)&v16);
    if ( v9 && (v10 = v16) != 0 )
    {
      v8->p = v9;
      v8->n = v10 - 1;
      v7 = *(unsigned __int8 *)v9;
      v8->p = v9 + 1;
    }
    else
    {
      v7 = -1;
    }
  }
  ls->current = v7;
  if ( (v7 == 10 || v7 == 13) && v7 != current )
  {
    v11 = ls->z;
    v12 = v11->n--;
    v13 = ls->z;
    if ( v12 )
    {
      v14 = v13->p;
      v15 = *(unsigned __int8 *)v14;
      v13->p = v14 + 1;
    }
    else
    {
      v15 = luaZ_fill(v13);
    }
    ls->current = v15;
  }
  if ( ++ls->linenumber >= 2147483645 )
    lexerror(ls, "chunk has too many lines", ls->t.token);
}

void __fastcall __noreturn lexerror(LexState *ls, const char *msg, unsigned __int64 token)
{
  int v5; // esi
  const char *v6; // rbx
  const char *v7; // rax
  char out[88]; // [rsp+30h] [rbp-58h] BYREF

  v5 = token;
  luaO_chunkid(out, (const char *)&ls->source[1], token);
  v6 = luaO_pushfstring(ls->L, "%s:%d: %s", out, (unsigned int)ls->linenumber, msg);
  if ( v5 )
  {
    if ( (unsigned int)(v5 - 287) > 2 )
    {
      v7 = luaX_token2str(ls, v5);
    }
    else
    {
      save(ls, 0);
      v7 = luaO_pushfstring(ls->L, "'%s'", ls->buff->buffer);
    }
    luaO_pushfstring(ls->L, "%s near %s", v6, v7);
  }
  luaD_throw(ls->L, 3);
}

__int64 __fastcall llex(LexState *ls, SemInfo *seminfo)
{
  int v2; // ebp
  int v3; // er14
  unsigned int v6; // eax
  Zio *z; // rcx
  Zio *v9; // rcx
  const char *p; // rax
  int v11; // edx
  Zio *v12; // rdi
  const char *v13; // rdx
  __int64 v14; // rax
  int v15; // ecx
  Zio *v16; // rcx
  unsigned __int64 v17; // rdx
  Zio *v18; // rcx
  const char *v19; // rax
  int v20; // edx
  Zio *v21; // rcx
  unsigned __int64 v22; // rdx
  Zio *v23; // rcx
  const char *v24; // rax
  int v25; // edx
  int v26; // esi
  Zio *v27; // rcx
  Zio *v29; // rcx
  const char *v30; // rax
  int v31; // edx
  Zio *v32; // rdi
  const char *v33; // rdx
  __int64 v34; // rax
  int v35; // ecx
  int current; // eax
  Zio *v37; // rcx
  unsigned __int64 v38; // rdx
  Zio *v39; // rcx
  const char *v40; // rax
  int v41; // edx
  Zio *v42; // rcx
  unsigned __int64 v43; // rdx
  Zio *v44; // rcx
  const char *v45; // rax
  int v46; // edx
  Zio *v47; // rcx
  Zio *v49; // rcx
  const char *v50; // rax
  int v51; // edx
  Zio *v52; // rdi
  const char *v53; // rdx
  __int64 v54; // rax
  int v55; // ecx
  unsigned int v56; // esi
  Mbuffer *buff; // rdi
  int v58; // ebp
  unsigned __int64 buffsize; // r8
  lua_State *L; // rcx
  __int64 v61; // rsi
  Zio *v62; // rcx
  Zio *v64; // rcx
  const char *v65; // rax
  int v66; // edx
  __int64 result; // rax
  int v68; // eax
  Zio *v69; // rcx
  unsigned __int64 v70; // rdx
  Zio *v71; // rcx
  const char *v72; // rax
  int v73; // edx
  Zio *v74; // rcx
  unsigned __int64 v75; // rdx
  Zio *v76; // rcx
  const char *v77; // rax
  int v78; // edx
  Zio *v79; // rcx
  unsigned __int64 v80; // rdx
  Zio *v81; // rcx
  const char *v82; // rax
  int v83; // edx
  Zio *v84; // rcx
  unsigned __int64 v85; // rdx
  Zio *v86; // rcx
  const char *v87; // rax
  int v88; // edx
  Zio *v89; // rcx
  unsigned __int64 v90; // rdx
  Zio *v91; // rcx
  const char *v92; // rax
  int v93; // edx
  Zio *v94; // rcx
  unsigned __int64 v95; // rdx
  Zio *v96; // rcx
  const char *v97; // rax
  int v98; // edx
  Zio *v99; // rcx
  unsigned __int64 v100; // rdx
  Zio *v101; // rcx
  const char *v102; // rax
  int v103; // edx
  Zio *v104; // rcx
  unsigned __int64 v105; // rdx
  Zio *v106; // rcx
  const char *v107; // rax
  int v108; // edx
  Zio *v109; // rcx
  unsigned __int64 v110; // rdx
  Zio *v111; // rcx
  const char *v112; // rax
  int v113; // edx
  Zio *v114; // rcx
  unsigned __int64 v115; // rdx
  Zio *v116; // rcx
  const char *v117; // rax
  int v118; // edx
  Zio *v119; // rcx
  unsigned __int64 v120; // rdx
  Zio *v121; // rcx
  const char *v122; // rax
  int v123; // edx
  Zio *v124; // rdi
  const char *v125; // rax
  __int64 v126; // rcx
  TString *v127; // rax
  unsigned __int8 extra; // al
  Zio *v129; // rcx
  Zio *v131; // rcx
  const char *v132; // rax
  int v133; // er14
  Zio *v134; // rdi
  const char *v135; // rax
  __int64 v136; // rcx
  __int64 v137; // [rsp+60h] [rbp+8h] BYREF
  __int64 v138; // [rsp+70h] [rbp+18h] BYREF
  __int64 v139; // [rsp+78h] [rbp+20h] BYREF

  v2 = 0;
  v3 = -1;
  ls->buff->n = 0i64;
  v6 = ls->current + 1;
  while ( 2 )
  {
    switch ( v6 )
    {
      case 0u:
        return 286i64;
      case 0xAu:
      case 0xCu:
      case 0xDu:
      case 0x21u:
        z = ls->z;
        if ( z->n-- )
        {
          v9 = ls->z;
          p = v9->p;
          v11 = *(unsigned __int8 *)p;
          v9->p = p + 1;
          ls->current = v11;
        }
        else
        {
          v12 = ls->z;
          v13 = v12->reader(v12->L, v12->data, (unsigned __int64 *)&v137);
          if ( v13 && (v14 = v137) != 0 )
          {
            v12->p = v13;
            v12->n = v14 - 1;
            v15 = *(unsigned __int8 *)v13;
            v12->p = v13 + 1;
            ls->current = v15;
          }
          else
          {
            ls->current = -1;
          }
        }
        goto LABEL_51;
      case 0xBu:
      case 0xEu:
        inclinenumber(ls);
        goto LABEL_51;
      case 0x23u:
      case 0x28u:
        _LN28_26(ls, ls->current, seminfo);
        return 289i64;
      case 0x2Eu:
        v16 = ls->z;
        v17 = v16->n--;
        v18 = ls->z;
        if ( v17 )
        {
          v19 = v18->p;
          v20 = *(unsigned __int8 *)v19;
          v18->p = v19 + 1;
        }
        else
        {
          v20 = luaZ_fill(v18);
        }
        ls->current = v20;
        if ( v20 != 45 )
          return 45i64;
        v21 = ls->z;
        v22 = v21->n--;
        v23 = ls->z;
        if ( v22 )
        {
          v24 = v23->p;
          v25 = *(unsigned __int8 *)v24;
          v23->p = v24 + 1;
        }
        else
        {
          v25 = luaZ_fill(v23);
        }
        ls->current = v25;
        if ( v25 == 91 && (v26 = skip_sep(ls), ls->buff->n = 0i64, v26 >= 0) )
        {
          save(ls, ls->current);
          v27 = ls->z;
          if ( v27->n-- )
          {
            v29 = ls->z;
            v30 = v29->p;
            v31 = *(unsigned __int8 *)v30;
            v29->p = v30 + 1;
          }
          else
          {
            v32 = ls->z;
            v33 = v32->reader(v32->L, v32->data, (unsigned __int64 *)&v138);
            if ( v33 && (v34 = v138) != 0 )
            {
              v32->p = v33;
              v32->n = v34 - 1;
              v35 = *(unsigned __int8 *)v33;
              v32->p = v33 + 1;
              v31 = v35;
            }
            else
            {
              v31 = -1;
            }
          }
          ls->current = v31;
          if ( v31 == 10 || v31 == 13 )
            inclinenumber(ls);
          do
          {
            while ( 1 )
            {
              while ( 1 )
              {
                current = ls->current;
                if ( ls->current == -1 )
                  lexerror(ls, "unfinished long comment", 0x11Eui64);
                if ( current != 10 && current != 13 )
                  break;
                save(ls, 10);
                inclinenumber(ls);
                ls->buff->n = 0i64;
              }
              if ( current == 93 )
                break;
              v37 = ls->z;
              v38 = v37->n--;
              v39 = ls->z;
              if ( v38 )
              {
                v40 = v39->p;
                v41 = *(unsigned __int8 *)v40;
                v39->p = v40 + 1;
                ls->current = v41;
              }
              else
              {
                ls->current = luaZ_fill(v39);
              }
            }
          }
          while ( skip_sep(ls) != v26 );
          save(ls, ls->current);
          v42 = ls->z;
          v43 = v42->n--;
          v44 = ls->z;
          if ( v43 )
          {
            v45 = v44->p;
            v46 = *(unsigned __int8 *)v45;
            v44->p = v45 + 1;
            ls->current = v46;
          }
          else
          {
            ls->current = luaZ_fill(v44);
          }
          ls->buff->n = 0i64;
        }
        else if ( ls->current != 10 )
        {
          do
          {
            if ( ls->current == 13 || ls->current == -1 )
              break;
            v47 = ls->z;
            if ( v47->n-- )
            {
              v49 = ls->z;
              v50 = v49->p;
              v51 = *(unsigned __int8 *)v50;
              v49->p = v50 + 1;
            }
            else
            {
              v52 = ls->z;
              v53 = v52->reader(v52->L, v52->data, (unsigned __int64 *)&v139);
              if ( v53 && (v54 = v139) != 0 )
              {
                v52->p = v53;
                v52->n = v54 - 1;
                v55 = *(unsigned __int8 *)v53;
                v52->p = v53 + 1;
                v51 = v55;
              }
              else
              {
                v51 = -1;
              }
            }
            ls->current = v51;
          }
          while ( v51 != 10 );
        }
LABEL_51:
        v6 = ls->current + 1;
        if ( v6 <= 0x7F )
          continue;
LABEL_52:
        v56 = ls->current;
        if ( (extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[6][ls->current + 153] & 1) != 0 )
        {
          do
          {
            buff = ls->buff;
            v58 = ls->current;
            buffsize = buff->buffsize;
            if ( buff->n + 1 > buffsize )
            {
              if ( buffsize >= 0x7FFFFFFFFFFFFFFEi64 )
                lexerror(ls, "lexical element too long", 0i64);
              L = ls->L;
              v61 = 2 * buffsize;
              if ( 2 * buffsize + 1 > 0xFFFFFFFFFFFFFFFDui64 )
                luaG_runerror(L, "memory allocation error: block too big");
              buff->buffer = (char *)luaM_realloc_(L, buff->buffer, buffsize, 2 * buffsize);
              buff->buffsize = v61;
            }
            buff->buffer[buff->n++] = v58;
            v62 = ls->z;
            if ( v62->n-- )
            {
              v64 = ls->z;
              v65 = v64->p;
              v66 = *(unsigned __int8 *)v65;
              v64->p = v65 + 1;
            }
            else
            {
              v124 = ls->z;
              v125 = v124->reader(v124->L, v124->data, (unsigned __int64 *)&v137);
              if ( v125 && (v126 = v137) != 0 )
              {
                v124->p = v125;
                v124->n = v126 - 1;
                v66 = *(unsigned __int8 *)v125;
                v124->p = v125 + 1;
              }
              else
              {
                v66 = -1;
              }
            }
            ls->current = v66;
          }
          while ( (extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[6][v66 + 153] & 3) != 0 );
          v127 = luaX_newstring(ls, ls->buff->buffer, ls->buff->n);
          seminfo->ts = v127;
          if ( v127->tsv.tt == 4 && (extra = v127->tsv.extra) != 0 )
            return (unsigned int)extra + 256;
          else
            return 288i64;
        }
        else
        {
          v129 = ls->z;
          if ( v129->n-- )
          {
            v131 = ls->z;
            v132 = v131->p;
            v133 = *(unsigned __int8 *)v132;
            v131->p = v132 + 1;
            result = v56;
            ls->current = v133;
          }
          else
          {
            v134 = ls->z;
            v135 = v134->reader(v134->L, v134->data, (unsigned __int64 *)&v137);
            if ( v135 )
            {
              v136 = v137;
              if ( v137 )
              {
                v134->p = v135;
                v134->n = v136 - 1;
                v3 = *(unsigned __int8 *)v135;
                v134->p = v135 + 1;
              }
            }
            ls->current = v3;
            return v56;
          }
        }
        return result;
      case 0x2Fu:
        save(ls, ls->current);
        v119 = ls->z;
        v120 = v119->n--;
        v121 = ls->z;
        if ( v120 )
        {
          v122 = v121->p;
          v123 = *(unsigned __int8 *)v122;
          v121->p = v122 + 1;
        }
        else
        {
          v123 = luaZ_fill(v121);
        }
        ls->current = v123;
        if ( (unsigned int)check_next(ls, ".") )
        {
          LOBYTE(v2) = (unsigned int)check_next(ls, ".") != 0;
          return (unsigned int)(v2 + 279);
        }
        else if ( (extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[6][ls->current + 153] & 2) != 0 )
        {
$LN44_13:
          read_numeral(ls, seminfo);
          return 287i64;
        }
        else
        {
          return 46i64;
        }
      case 0x31u:
      case 0x32u:
      case 0x33u:
      case 0x34u:
      case 0x35u:
      case 0x36u:
      case 0x37u:
      case 0x38u:
      case 0x39u:
      case 0x3Au:
        goto $LN44_13;
      case 0x3Bu:
        v109 = ls->z;
        v110 = v109->n--;
        v111 = ls->z;
        if ( v110 )
        {
          v112 = v111->p;
          v113 = *(unsigned __int8 *)v112;
          v111->p = v112 + 1;
        }
        else
        {
          v113 = luaZ_fill(v111);
        }
        ls->current = v113;
        if ( v113 != 58 )
          return 58i64;
        v114 = ls->z;
        v115 = v114->n--;
        v116 = ls->z;
        if ( v115 )
        {
          v117 = v116->p;
          v118 = *(unsigned __int8 *)v117;
          v116->p = v117 + 1;
          result = 285i64;
          ls->current = v118;
        }
        else
        {
          ls->current = luaZ_fill(v116);
          return 285i64;
        }
        return result;
      case 0x3Du:
        v79 = ls->z;
        v80 = v79->n--;
        v81 = ls->z;
        if ( v80 )
        {
          v82 = v81->p;
          v83 = *(unsigned __int8 *)v82;
          v81->p = v82 + 1;
        }
        else
        {
          v83 = luaZ_fill(v81);
        }
        ls->current = v83;
        if ( v83 != 61 )
          return 60i64;
        v84 = ls->z;
        v85 = v84->n--;
        v86 = ls->z;
        if ( v85 )
        {
          v87 = v86->p;
          v88 = *(unsigned __int8 *)v87;
          v86->p = v87 + 1;
          result = 283i64;
          ls->current = v88;
        }
        else
        {
          ls->current = luaZ_fill(v86);
          return 283i64;
        }
        return result;
      case 0x3Eu:
        v69 = ls->z;
        v70 = v69->n--;
        v71 = ls->z;
        if ( v70 )
        {
          v72 = v71->p;
          v73 = *(unsigned __int8 *)v72;
          v71->p = v72 + 1;
        }
        else
        {
          v73 = luaZ_fill(v71);
        }
        ls->current = v73;
        if ( v73 != 61 )
          return 61i64;
        v74 = ls->z;
        v75 = v74->n--;
        v76 = ls->z;
        if ( v75 )
        {
          v77 = v76->p;
          v78 = *(unsigned __int8 *)v77;
          v76->p = v77 + 1;
          result = 281i64;
          ls->current = v78;
        }
        else
        {
          ls->current = luaZ_fill(v76);
          return 281i64;
        }
        return result;
      case 0x3Fu:
        v89 = ls->z;
        v90 = v89->n--;
        v91 = ls->z;
        if ( v90 )
        {
          v92 = v91->p;
          v93 = *(unsigned __int8 *)v92;
          v91->p = v92 + 1;
        }
        else
        {
          v93 = luaZ_fill(v91);
        }
        ls->current = v93;
        if ( v93 != 61 )
          return 62i64;
        v94 = ls->z;
        v95 = v94->n--;
        v96 = ls->z;
        if ( v95 )
        {
          v97 = v96->p;
          v98 = *(unsigned __int8 *)v97;
          v96->p = v97 + 1;
          result = 282i64;
          ls->current = v98;
        }
        else
        {
          ls->current = luaZ_fill(v96);
          return 282i64;
        }
        return result;
      case 0x5Cu:
        v68 = skip_sep(ls);
        if ( v68 < 0 )
        {
          if ( v68 != -1 )
            lexerror(ls, "invalid long string delimiter", 0x121ui64);
          return 91i64;
        }
        else
        {
          read_long_string(ls, seminfo, v68);
          return 289i64;
        }
      case 0x7Fu:
        v99 = ls->z;
        v100 = v99->n--;
        v101 = ls->z;
        if ( v100 )
        {
          v102 = v101->p;
          v103 = *(unsigned __int8 *)v102;
          v101->p = v102 + 1;
        }
        else
        {
          v103 = luaZ_fill(v101);
        }
        ls->current = v103;
        if ( v103 != 61 )
          return 126i64;
        v104 = ls->z;
        v105 = v104->n--;
        v106 = ls->z;
        if ( v105 )
        {
          v107 = v106->p;
          v108 = *(unsigned __int8 *)v107;
          v106->p = v107 + 1;
          result = 284i64;
          ls->current = v108;
        }
        else
        {
          ls->current = luaZ_fill(v106);
          return 284i64;
        }
        return result;
      default:
        goto LABEL_52;
    }
  }
}

TString *__fastcall luaX_newstring(LexState *ls, const char *str, unsigned __int64 l)
{
  lua_State *v3; // rdi
  TString *v5; // rax
  lua_TValue *top; // r8
  TString *v7; // rsi
  lua_TValue *v8; // rbp
  Table *h; // rbx
  lua_TValue *v10; // rax
  global_State *l_G; // rcx
  TString *result; // rax
  __int64 v13; // rax

  v3 = ls->L;
  v5 = luaS_newlstr(v3, str, l);
  top = v3->top;
  v7 = v5;
  v3->top = top + 1;
  top->value_.gc = (GCObject *)v5;
  top->tt_ = v5->tsv.tt | 0x40;
  v8 = v3->top;
  h = ls->fs->h;
  v10 = (lua_TValue *)luaH_get(h, v8 - 1);
  if ( v10 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
    v10 = luaH_newkey(v3, h, v8 - 1);
  if ( v10->tt_ )
  {
    result = (TString *)v10[1].value_.gc;
    goto LABEL_10;
  }
  v10->value_.b = 1;
  v10->tt_ = 1;
  l_G = v3->l_G;
  if ( l_G->GCdebt > 0 )
  {
    if ( !l_G->gcrunning )
    {
      v13 = l_G->GCdebt + 2400;
      l_G->GCdebt = -2400i64;
      l_G->totalbytes += v13;
      result = v7;
      goto LABEL_10;
    }
    luaC_forcestep(v3);
  }
  result = v7;
LABEL_10:
  --v3->top;
  return result;
}

void __fastcall luaX_next(LexState *ls)
{
  bool v1; // zf
  Token lookahead; // xmm0

  v1 = ls->lookahead.token == 286;
  ls->lastline = ls->linenumber;
  if ( v1 )
  {
    ls->t.token = llex(ls, &ls->t.seminfo);
  }
  else
  {
    lookahead = ls->lookahead;
    ls->lookahead.token = 286;
    ls->t = lookahead;
  }
}

void __fastcall luaX_setinput(lua_State *L, LexState *ls, Zio *z, TString *source, int firstchar)
{
  unsigned __int64 v5; // rbp
  TString *v7; // rax
  Mbuffer *buff; // rax
  lua_State *v9; // rsi
  char *buffer; // r15
  unsigned __int64 buffsize; // r14
  global_State *l_G; // rbx
  char *v13; // rcx

  v5 = 0i64;
  ls->z = z;
  ls->decpoint = 46;
  ls->L = L;
  ls->current = firstchar;
  ls->lookahead.token = 286;
  ls->fs = 0i64;
  ls->linenumber = 1;
  ls->lastline = 1;
  ls->source = source;
  v7 = luaS_newlstr(L, "_ENV", 4ui64);
  ls->envn = v7;
  v7->tsv.marked |= 0x20u;
  buff = ls->buff;
  v9 = ls->L;
  buffer = buff->buffer;
  buffsize = buff->buffsize;
  l_G = v9->l_G;
  if ( buff->buffer )
    v5 = buff->buffsize;
  v13 = (char *)l_G->frealloc(l_G->ud, buff->buffer, buff->buffsize, 32ui64);
  if ( !v13 )
  {
    if ( !l_G->gcrunning
      || (luaC_fullgc(v9, 1), (v13 = (char *)l_G->frealloc(l_G->ud, buffer, buffsize, 32ui64)) == 0i64) )
    {
      luaD_throw(v9, 4);
    }
  }
  l_G->GCdebt += 32 - v5;
  ls->buff->buffer = v13;
  ls->buff->buffsize = 32i64;
}

const char *__fastcall luaX_token2str(LexState *ls, int token)
{
  lua_State *L; // rcx
  bool v4; // zf
  __int64 v5; // r8
  const char *v6; // rdx
  const char *result; // rax

  if ( token >= 257 )
  {
    result = *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[0][8 * token + 176];
    if ( token < 286 )
      return luaO_pushfstring(ls->L, "'%s'", result);
  }
  else
  {
    L = ls->L;
    v4 = (extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[6][token + 153] & 4) == 0;
    v5 = (unsigned int)token;
    v6 = "'%c'";
    if ( v4 )
      v6 = "char(%d)";
    return luaO_pushfstring(L, v6, v5, ls);
  }
  return result;
}

void __fastcall read_long_string(LexState *ls, SemInfo *seminfo, int sep)
{
  Zio *z; // rcx
  Zio *v8; // rcx
  const char *p; // rax
  int v10; // edx
  Zio *v11; // rdi
  const char *v12; // rax
  __int64 v13; // rcx
  int current; // eax
  Zio *v15; // rcx
  unsigned __int64 v16; // rdx
  Zio *v17; // rcx
  const char *v18; // rax
  int v19; // edx
  Zio *v20; // rcx
  unsigned __int64 v21; // rdx
  Zio *v22; // rcx
  const char *v23; // rax
  int v24; // edx
  const char *v25; // rdx
  __int64 v26; // [rsp+30h] [rbp+8h] BYREF

  save(ls, ls->current);
  z = ls->z;
  if ( z->n-- )
  {
    v8 = ls->z;
    p = v8->p;
    v10 = *(unsigned __int8 *)p;
    v8->p = p + 1;
  }
  else
  {
    v11 = ls->z;
    v12 = v11->reader(v11->L, v11->data, (unsigned __int64 *)&v26);
    if ( v12 && (v13 = v26) != 0 )
    {
      v11->p = v12;
      v11->n = v13 - 1;
      v10 = *(unsigned __int8 *)v12;
      v11->p = v12 + 1;
    }
    else
    {
      v10 = -1;
    }
  }
  ls->current = v10;
  if ( v10 == 10 || v10 == 13 )
    inclinenumber(ls);
  current = ls->current;
  if ( ls->current == -1 )
  {
LABEL_30:
    v25 = "unfinished long comment";
    if ( seminfo )
      v25 = "unfinished long string";
    lexerror(ls, v25, 0x11Eui64);
  }
  while ( 1 )
  {
    if ( current == 10 || current == 13 )
    {
      save(ls, 10);
      inclinenumber(ls);
      if ( !seminfo )
        ls->buff->n = 0i64;
      goto LABEL_24;
    }
    if ( current != 93 )
    {
      if ( seminfo )
        save(ls, ls->current);
      v15 = ls->z;
      v16 = v15->n--;
      v17 = ls->z;
      if ( v16 )
      {
        v18 = v17->p;
        v19 = *(unsigned __int8 *)v18;
        v17->p = v18 + 1;
        ls->current = v19;
      }
      else
      {
        ls->current = luaZ_fill(v17);
      }
      goto LABEL_24;
    }
    if ( skip_sep(ls) == sep )
      break;
LABEL_24:
    current = ls->current;
    if ( ls->current == -1 )
      goto LABEL_30;
  }
  save(ls, ls->current);
  v20 = ls->z;
  v21 = v20->n--;
  v22 = ls->z;
  if ( v21 )
  {
    v23 = v22->p;
    v24 = *(unsigned __int8 *)v23;
    v22->p = v23 + 1;
  }
  else
  {
    v24 = luaZ_fill(v22);
  }
  ls->current = v24;
  if ( seminfo )
    seminfo->ts = luaX_newstring(ls, &ls->buff->buffer[sep + 2], ls->buff->n - 2 * (sep + 2));
}

void __fastcall read_numeral(LexState *ls, SemInfo *seminfo)
{
  const char *v3; // rbp
  int current; // esi
  Zio *z; // r8
  Zio *v8; // rcx
  const char *p; // rax
  int v10; // edx
  Zio *v11; // rdi
  const char *v12; // rax
  __int64 v13; // rcx
  Zio *v14; // rcx
  unsigned __int64 v15; // rdx
  Zio *v16; // rcx
  const char *v17; // rax
  int v18; // edx
  Zio *v19; // rcx
  Zio *v21; // rcx
  const char *v22; // rax
  int v23; // edx
  Zio *v24; // rdi
  const char *v25; // rax
  __int64 v26; // rcx
  Zio *v27; // rcx
  Zio *v29; // rcx
  const char *v30; // rax
  int v31; // edx
  Zio *v32; // rdi
  const char *v33; // rax
  __int64 v34; // rcx
  int v35; // edx
  Zio *v36; // rcx
  Zio *v38; // rcx
  const char *v39; // rax
  int v40; // edx
  Zio *v41; // rdi
  const char *v42; // rax
  __int64 v43; // rcx
  int v44; // edx
  Mbuffer *buff; // rax
  char decpoint; // dl
  unsigned __int64 n; // rcx
  char *buffer; // r8
  __int64 v49; // [rsp+50h] [rbp+8h] BYREF
  __int64 v50; // [rsp+58h] [rbp+10h] BYREF
  __int64 v51; // [rsp+60h] [rbp+18h] BYREF

  v3 = "Ee";
  current = ls->current;
  save(ls, ls->current);
  z = ls->z;
  if ( z->n-- )
  {
    v8 = ls->z;
    p = v8->p;
    v10 = *(unsigned __int8 *)p;
    v8->p = p + 1;
  }
  else
  {
    v11 = ls->z;
    v12 = v11->reader(v11->L, v11->data, (unsigned __int64 *)&v49);
    if ( v12 && (v13 = v49) != 0 )
    {
      v11->p = v12;
      v11->n = v13 - 1;
      v10 = *(unsigned __int8 *)v12;
      v11->p = v12 + 1;
    }
    else
    {
      v10 = -1;
    }
  }
  ls->current = v10;
  if ( current == 48 && v10 && strchr("Xx", v10) )
  {
    save(ls, ls->current);
    v14 = ls->z;
    v15 = v14->n--;
    v16 = ls->z;
    if ( v15 )
    {
      v17 = v16->p;
      v18 = *(unsigned __int8 *)v17;
      v16->p = v17 + 1;
    }
    else
    {
      v18 = luaZ_fill(v16);
    }
    ls->current = v18;
    v3 = "Pp";
  }
  while ( 1 )
  {
    if ( ls->current && strchr(v3, ls->current) )
    {
      save(ls, ls->current);
      v19 = ls->z;
      if ( v19->n-- )
      {
        v21 = ls->z;
        v22 = v21->p;
        v23 = *(unsigned __int8 *)v22;
        v21->p = v22 + 1;
      }
      else
      {
        v24 = ls->z;
        v25 = v24->reader(v24->L, v24->data, (unsigned __int64 *)&v49);
        if ( v25 && (v26 = v49) != 0 )
        {
          v24->p = v25;
          v24->n = v26 - 1;
          v23 = *(unsigned __int8 *)v25;
          v24->p = v25 + 1;
        }
        else
        {
          v23 = -1;
        }
      }
      ls->current = v23;
      if ( v23 )
      {
        if ( strchr("+-", v23) )
        {
          save(ls, ls->current);
          v27 = ls->z;
          if ( v27->n-- )
          {
            v29 = ls->z;
            v30 = v29->p;
            v31 = *(unsigned __int8 *)v30;
            v29->p = v30 + 1;
          }
          else
          {
            v32 = ls->z;
            v33 = v32->reader(v32->L, v32->data, (unsigned __int64 *)&v50);
            if ( v33 && (v34 = v50) != 0 )
            {
              v32->p = v33;
              v32->n = v34 - 1;
              v31 = *(unsigned __int8 *)v33;
              v32->p = v33 + 1;
            }
            else
            {
              v31 = -1;
            }
          }
          ls->current = v31;
        }
      }
    }
    v35 = ls->current;
    if ( (extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[6][ls->current + 153] & 0x10) == 0
      && v35 != 46 )
    {
      break;
    }
    save(ls, v35);
    v36 = ls->z;
    if ( v36->n-- )
    {
      v38 = ls->z;
      v39 = v38->p;
      v40 = *(unsigned __int8 *)v39;
      v38->p = v39 + 1;
      ls->current = v40;
    }
    else
    {
      v41 = ls->z;
      v42 = v41->reader(v41->L, v41->data, (unsigned __int64 *)&v51);
      if ( v42 && (v43 = v51) != 0 )
      {
        v41->p = v42;
        v41->n = v43 - 1;
        v44 = *(unsigned __int8 *)v42;
        v41->p = v42 + 1;
        ls->current = v44;
      }
      else
      {
        ls->current = -1;
      }
    }
  }
  save(ls, 0);
  buff = ls->buff;
  decpoint = ls->decpoint;
  n = buff->n;
  buffer = buff->buffer;
  while ( n )
  {
    if ( buffer[--n] == 46 )
      buffer[n] = decpoint;
  }
  if ( !luaO_str2d(ls->buff->buffer, ls->buff->n - 1, (float *)seminfo) )
    trydecpoint(ls, seminfo);
}

void __fastcall _LN28_26(LexState *ls, int del, SemInfo *seminfo)
{
  Zio *z; // rcx
  Zio *v8; // rcx
  const char *p; // rax
  int v10; // edx
  Zio *v11; // rdi
  const char *v12; // rax
  __int64 v13; // rcx
  int current; // edx
  Zio *v15; // rcx
  Zio *v17; // rcx
  const char *v18; // rax
  int v19; // edx
  Zio *v20; // rdi
  const char *v21; // rax
  __int64 v22; // rcx
  int v23; // edx
  Zio *v24; // rcx
  Zio *v26; // rcx
  const char *v27; // rax
  int v28; // edi
  Zio *v29; // rdi
  const char *v30; // rax
  __int64 v31; // rcx
  int v32; // ecx
  Zio *v33; // rcx
  Zio *v35; // rcx
  const char *v36; // rax
  int v37; // edx
  Zio *v38; // rsi
  const char *v39; // rax
  __int64 v40; // rcx
  int v41; // edx
  Zio *v42; // rcx
  unsigned __int64 v43; // rdx
  Zio *v44; // rcx
  const char *v45; // rax
  int v46; // edx
  Zio *v47; // rcx
  unsigned __int64 v48; // rdx
  Zio *v49; // rcx
  const char *v50; // rax
  int v51; // edx
  Zio *v52; // rcx
  unsigned __int64 v53; // rdx
  Zio *v54; // rcx
  const char *v55; // rax
  int v56; // edx
  int v57; // edi
  LexState *v58; // rsi
  Mbuffer *buff; // rax
  __int64 v60; // [rsp+20h] [rbp-38h] BYREF
  __int64 v61; // [rsp+60h] [rbp+8h] BYREF
  __int64 v62; // [rsp+78h] [rbp+20h] BYREF

  save(ls, ls->current);
  z = ls->z;
  if ( z->n-- )
  {
    v8 = ls->z;
    p = v8->p;
    v10 = *(unsigned __int8 *)p;
    v8->p = p + 1;
  }
  else
  {
    v11 = ls->z;
    v12 = v11->reader(v11->L, v11->data, (unsigned __int64 *)&v61);
    if ( v12 && (v13 = v61) != 0 )
    {
      v11->p = v12;
      v11->n = v13 - 1;
      v10 = *(unsigned __int8 *)v12;
      v11->p = v12 + 1;
    }
    else
    {
      v10 = -1;
    }
  }
  ls->current = v10;
  while ( ls->current != del )
  {
    current = ls->current;
    if ( ls->current == -1 )
      lexerror(ls, "unfinished string", 0x11Eui64);
    if ( current == 10 || current == 13 )
      lexerror(ls, "unfinished string", 0x121ui64);
    if ( current == 92 )
    {
      v24 = ls->z;
      if ( v24->n-- )
      {
        v26 = ls->z;
        v27 = v26->p;
        v28 = *(unsigned __int8 *)v27;
        v26->p = v27 + 1;
      }
      else
      {
        v29 = ls->z;
        v30 = v29->reader(v29->L, v29->data, (unsigned __int64 *)&v62);
        if ( v30 && (v31 = v62) != 0 )
        {
          v29->p = v30;
          v29->n = v31 - 1;
          v32 = *(unsigned __int8 *)v30;
          v29->p = v30 + 1;
          v28 = v32;
        }
        else
        {
          v28 = -1;
        }
      }
      ls->current = v28;
      switch ( v28 )
      {
        case -1:
          break;
        case 10:
        case 13:
          inclinenumber(ls);
          v28 = 10;
          goto $only_save;
        case 34:
        case 39:
        case 92:
          goto $read_save;
        case 97:
          v28 = 7;
          goto $read_save;
        case 98:
          v28 = 8;
          goto $read_save;
        case 102:
          v28 = 12;
          goto $read_save;
        case 110:
          v28 = 10;
          goto $read_save;
        case 114:
          v28 = 13;
          goto $read_save;
        case 116:
          v28 = 9;
          goto $read_save;
        case 118:
          v28 = 11;
          goto $read_save;
        case 120:
          v28 = readhexaesc(ls);
$read_save:
          v33 = ls->z;
          if ( v33->n-- )
          {
            v35 = ls->z;
            v36 = v35->p;
            v37 = *(unsigned __int8 *)v36;
            v35->p = v36 + 1;
            ls->current = v37;
          }
          else
          {
            v38 = ls->z;
            v39 = v38->reader(v38->L, v38->data, (unsigned __int64 *)&v60);
            if ( v39 && (v40 = v60) != 0 )
            {
              v38->p = v39;
              v38->n = v40 - 1;
              v41 = *(unsigned __int8 *)v39;
              v38->p = v39 + 1;
              ls->current = v41;
            }
            else
            {
              ls->current = -1;
            }
          }
          goto $only_save;
        case 122:
          v42 = ls->z;
          v43 = v42->n--;
          v44 = ls->z;
          if ( v43 )
          {
            v45 = v44->p;
            v46 = *(unsigned __int8 *)v45;
            v44->p = v45 + 1;
          }
          else
          {
            v46 = luaZ_fill(v44);
          }
          ls->current = v46;
          while ( (extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[6][ls->current + 153] & 8) != 0 )
          {
            if ( ls->current == 10 || ls->current == 13 )
            {
              inclinenumber(ls);
            }
            else
            {
              v47 = ls->z;
              v48 = v47->n--;
              v49 = ls->z;
              if ( v48 )
              {
                v50 = v49->p;
                v51 = *(unsigned __int8 *)v50;
                v49->p = v50 + 1;
                ls->current = v51;
              }
              else
              {
                ls->current = luaZ_fill(v49);
              }
            }
          }
          break;
        default:
          if ( (extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[6][v28 + 153] & 2) == 0 )
          {
            v57 = 0;
            ls->buff->n = 0i64;
            save(ls, 92);
            v58 = ls;
            do
            {
              if ( v58->current == -1 )
                break;
              save(ls, v58->current);
              ++v57;
              v58 = (LexState *)((char *)v58 + 4);
            }
            while ( v57 < 1 );
            lexerror(ls, "invalid escape sequence", 0x121ui64);
          }
          v28 = readdecesc(ls);
$only_save:
          save(ls, v28);
          break;
      }
    }
    else
    {
      save(ls, current);
      v15 = ls->z;
      if ( v15->n-- )
      {
        v17 = ls->z;
        v18 = v17->p;
        v19 = *(unsigned __int8 *)v18;
        v17->p = v18 + 1;
        ls->current = v19;
      }
      else
      {
        v20 = ls->z;
        v21 = v20->reader(v20->L, v20->data, (unsigned __int64 *)&v61);
        if ( v21 && (v22 = v61) != 0 )
        {
          v20->p = v21;
          v20->n = v22 - 1;
          v23 = *(unsigned __int8 *)v21;
          v20->p = v21 + 1;
          ls->current = v23;
        }
        else
        {
          ls->current = -1;
        }
      }
    }
  }
  save(ls, ls->current);
  v52 = ls->z;
  v53 = v52->n--;
  v54 = ls->z;
  if ( v53 )
  {
    v55 = v54->p;
    v56 = *(unsigned __int8 *)v55;
    v54->p = v55 + 1;
  }
  else
  {
    v56 = luaZ_fill(v54);
  }
  buff = ls->buff;
  ls->current = v56;
  seminfo->ts = luaX_newstring(ls, (const char *)buff->buffer + 1, buff->n - 2);
}

__int64 __fastcall readdecesc(LexState *ls)
{
  __int64 v1; // rdi
  int v2; // er15
  int v3; // ebp
  int *v4; // r14
  int current; // edx
  Zio *z; // rcx
  Zio *v9; // rcx
  const char *p; // rax
  int v11; // edx
  Zio *v12; // rsi
  const char *v13; // rdx
  __int64 v14; // rax
  int v15; // ecx
  int v16; // edx
  __int64 v18; // [rsp+20h] [rbp-48h] BYREF
  int c[4]; // [rsp+28h] [rbp-40h] BYREF

  v1 = 0i64;
  v2 = 0;
  v3 = 0;
  v4 = c;
  do
  {
    current = ls->current;
    if ( (extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[6][ls->current + 153] & 2) == 0 )
      break;
    z = ls->z;
    *v4 = current;
    v2 = current + 2 * (v2 + 4 * (v2 - 6));
    if ( z->n-- )
    {
      v9 = ls->z;
      p = v9->p;
      v11 = *(unsigned __int8 *)p;
      v9->p = p + 1;
    }
    else
    {
      v12 = ls->z;
      v13 = v12->reader(v12->L, v12->data, (unsigned __int64 *)&v18);
      if ( v13 && (v14 = v18) != 0 )
      {
        v12->p = v13;
        v12->n = v14 - 1;
        v15 = *(unsigned __int8 *)v13;
        v12->p = v13 + 1;
        v11 = v15;
      }
      else
      {
        v11 = -1;
      }
    }
    ++v3;
    ls->current = v11;
    ++v4;
  }
  while ( v3 < 3 );
  if ( v2 > 255 )
  {
    ls->buff->n = 0i64;
    save(ls, 92);
    if ( v3 > 0 )
    {
      do
      {
        v16 = c[v1];
        if ( v16 == -1 )
          break;
        save(ls, v16);
        ++v1;
      }
      while ( v1 < v3 );
    }
    lexerror(ls, "decimal escape too large", 0x121ui64);
  }
  return (unsigned int)v2;
}

__int64 __fastcall readhexaesc(LexState *ls)
{
  int v1; // ebp
  unsigned int v3; // ebx
  char *v4; // r15
  int i; // er14
  Zio *z; // rcx
  Zio *v8; // rdx
  const char *p; // rcx
  int v10; // eax
  Zio *v11; // rsi
  const char *v12; // rdx
  unsigned __int64 v13; // rax
  int v14; // ecx
  int v15; // eax
  int *v17; // rbx
  __int64 v18; // [rsp+20h] [rbp-48h] BYREF
  int v19; // [rsp+28h] [rbp-40h] BYREF
  char v20; // [rsp+2Ch] [rbp-3Ch] BYREF

  v1 = 0;
  v19 = 120;
  v3 = 0;
  v4 = &v20;
  for ( i = 1; i < 3; ++i )
  {
    z = ls->z;
    if ( z->n-- )
    {
      v8 = ls->z;
      p = v8->p;
      v10 = *(unsigned __int8 *)p;
      v8->p = p + 1;
    }
    else
    {
      v11 = ls->z;
      v12 = v11->reader(v11->L, v11->data, (unsigned __int64 *)&v18);
      if ( v12 && v18 )
      {
        v13 = v18 - 1;
        v11->p = v12;
        v11->n = v13;
        v14 = *(unsigned __int8 *)v12;
        v11->p = v12 + 1;
        v10 = v14;
      }
      else
      {
        v10 = -1;
      }
    }
    ls->current = v10;
    *(_DWORD *)v4 = v10;
    if ( (extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[6][v10 + 153] & 0x10) == 0 )
    {
      ls->buff->n = 0i64;
      save(ls, 92);
      if ( i + 1 > 0 )
      {
        v17 = &v19;
        do
        {
          if ( *v17 == -1 )
            break;
          save(ls, *v17);
          ++v1;
          ++v17;
        }
        while ( v1 < i + 1 );
      }
      lexerror(ls, "hexadecimal digit expected", 0x121ui64);
    }
    if ( (extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[6][v10 + 153] & 2) != 0 )
      v15 = v10 - 48;
    else
      v15 = (v10 | 0x20) - 87;
    v3 = v15 + 16 * v3;
    v4 += 4;
  }
  return v3;
}

void __fastcall save(LexState *ls, int c)
{
  Mbuffer *buff; // rbx
  char v3; // si
  unsigned __int64 buffsize; // r8
  lua_State *L; // rcx
  __int64 v6; // rdi

  buff = ls->buff;
  v3 = c;
  buffsize = buff->buffsize;
  if ( buff->n + 1 > buffsize )
  {
    if ( buffsize >= 0x7FFFFFFFFFFFFFFEi64 )
      lexerror(ls, "lexical element too long", 0i64);
    L = ls->L;
    v6 = 2 * buffsize;
    if ( 2 * buffsize + 1 > 0xFFFFFFFFFFFFFFFDui64 )
      luaG_runerror(L, "memory allocation error: block too big");
    buff->buffer = (char *)luaM_realloc_(L, buff->buffer, buffsize, 2 * buffsize);
    buff->buffsize = v6;
  }
  buff->buffer[buff->n++] = v3;
}

__int64 __fastcall skip_sep(LexState *ls)
{
  unsigned int v1; // esi
  int current; // ebp
  Zio *z; // rdx
  Zio *v6; // rcx
  const char *p; // rax
  int v8; // edx
  Zio *v9; // rdi
  const char *v10; // rdx
  __int64 v11; // rax
  int v12; // ecx
  Zio *v13; // rcx
  Zio *v15; // rcx
  const char *v16; // rax
  int v17; // edx
  Zio *v18; // rdi
  const char *v19; // rdx
  __int64 v20; // rax
  int v21; // ecx
  __int64 v23; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  current = ls->current;
  save(ls, ls->current);
  z = ls->z;
  if ( z->n-- )
  {
    v6 = ls->z;
    p = v6->p;
    v8 = *(unsigned __int8 *)p;
    v6->p = p + 1;
  }
  else
  {
    v9 = ls->z;
    v10 = v9->reader(v9->L, v9->data, (unsigned __int64 *)&v23);
    if ( v10 && (v11 = v23) != 0 )
    {
      v9->p = v10;
      v9->n = v11 - 1;
      v12 = *(unsigned __int8 *)v10;
      v9->p = v10 + 1;
      v8 = v12;
    }
    else
    {
      v8 = -1;
    }
  }
  ls->current = v8;
  if ( v8 == 61 )
  {
    do
    {
      save(ls, ls->current);
      v13 = ls->z;
      if ( v13->n-- )
      {
        v15 = ls->z;
        v16 = v15->p;
        v17 = *(unsigned __int8 *)v16;
        v15->p = v16 + 1;
      }
      else
      {
        v18 = ls->z;
        v19 = v18->reader(v18->L, v18->data, (unsigned __int64 *)&v23);
        if ( v19 && (v20 = v23) != 0 )
        {
          v18->p = v19;
          v18->n = v20 - 1;
          v21 = *(unsigned __int8 *)v19;
          v18->p = v19 + 1;
          v17 = v21;
        }
        else
        {
          v17 = -1;
        }
      }
      ++v1;
      ls->current = v17;
    }
    while ( v17 == 61 );
  }
  if ( ls->current != current )
    return ~v1;
  return v1;
}

void __fastcall trydecpoint(LexState *ls, SemInfo *seminfo)
{
  char decpoint; // cl
  Mbuffer *buff; // rax
  unsigned __int64 n; // r8
  char *buffer; // r9
  Mbuffer *v7; // rcx
  char v8; // dl
  unsigned __int64 v9; // rax
  char *v10; // r8

  decpoint = ls->decpoint;
  buff = ls->buff;
  ls->decpoint = 46;
  n = buff->n;
  buffer = buff->buffer;
  while ( n )
  {
    if ( buffer[--n] == decpoint )
      buffer[n] = 46;
  }
  if ( !luaO_str2d(ls->buff->buffer, ls->buff->n - 1, (float *)seminfo) )
  {
    v7 = ls->buff;
    v8 = ls->decpoint;
    v9 = v7->n;
    v10 = v7->buffer;
    while ( v9 )
    {
      if ( v10[--v9] == v8 )
        v10[v9] = 46;
    }
    lexerror(ls, "malformed number", 0x11Fui64);
  }
}

