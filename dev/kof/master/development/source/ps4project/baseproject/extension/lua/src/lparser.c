#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstring.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lgc.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lcode.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/llex.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lmem.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstate.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lobject.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lfunc.c"

struct BlockCnt
{
	BlockCnt * previous; // 0x0
	short firstlabel; // 0x8
	short firstgoto; // 0xA
	unsigned char nactvar; // 0xC
	unsigned char upval; // 0xD
	unsigned char isloop; // 0xE
};
const <unnamed-tag> priority[15]; // 0x1408B0630
void checklimit(FuncState * fs, long v, long l, const char * what); // 0x1402969B0
long testnext(LexState * ls, long c); // 0x140296A30
void checknext(LexState * ls, long c); // 0x140296A80
void check_match(LexState * ls, long what, long who, long where); // 0x140296AF0
TString * str_checkname(LexState * ls); // 0x140296BD0
void codestring(LexState * ls, expdesc * e, TString * s); // 0x140296C60
long registerlocalvar(LexState * ls, TString * varname); // 0x140296CB0
void new_localvar(LexState * ls, TString * name); // 0x140296DB0
long searchupvalue(FuncState * fs, TString * name); // 0x140296EA0
long newupvalue(FuncState * fs, TString * name, expdesc * v); // 0x140296F50
long searchvar(FuncState * fs, TString * n); // 0x1402970E0
long singlevaraux(FuncState * fs, TString * n, expdesc * var, long base); // 0x1402971A0
void singlevar(LexState * ls, expdesc * var); // 0x140297280
void adjust_assign(LexState * ls, long nvars, long nexps, expdesc * e); // 0x140297350
void enterlevel(LexState * ls); // 0x140297420
void closegoto(LexState * ls, long g, Labeldesc * label); // 0x1402974B0
long findlabel(LexState * ls, long g); // 0x1402975C0
long newlabelentry(LexState * ls, Labellist * l, TString * name, long line, long pc); // 0x140297750
void findgotos(LexState * ls, Labeldesc * lb); // 0x140297810
void movegotosout(FuncState * fs, BlockCnt * bl); // 0x1402978D0
void leaveblock(FuncState * fs); // 0x1402979C0
Proto * addprototype(LexState * ls); // 0x140297B60
void open_func(LexState * ls, FuncState * fs, BlockCnt * bl); // 0x140297C70
void close_func(LexState * ls); // 0x140297D60
long block_follow(LexState * ls, long withuntil); // 0x140297FC0
void statlist(LexState * ls); // 0x140297FF0
void fieldsel(LexState * ls, expdesc * v); // 0x140298050
void yindex(LexState * ls, expdesc * v); // 0x140298160
struct ConsControl
{
	expdesc v; // 0x0
	expdesc * t; // 0x10
	long nh; // 0x18
	long na; // 0x1C
	long tostore; // 0x20
};
void recfield(LexState * ls, ConsControl * cc); // 0x140298250
void constructor(LexState * ls, expdesc * t); // 0x140298430
void parlist(LexState * ls); // 0x140298880
void body(LexState * ls, expdesc * e, long ismethod, long line); // 0x140298A00
long explist(LexState * ls, expdesc * v); // 0x140298C10
void funcargs(LexState * ls, expdesc * f, long line); // 0x140298D20
void primaryexp(LexState * ls, expdesc * v); // 0x140298EC0
void suffixedexp(LexState * ls, expdesc * v); // 0x140298F70
void simpleexp(LexState * ls, expdesc * v); // 0x140299210
BinOpr getbinopr(long op); // 0x140299450
BinOpr subexpr(LexState * ls, expdesc * v, long limit); // 0x140299610
void block(LexState * ls); // 0x1402997F0
struct LHS_assign
{
	LHS_assign * prev; // 0x0
	expdesc v; // 0x8
};
void check_conflict(LexState * ls, LHS_assign * lh, expdesc * v); // 0x140299860
void assignment(LexState * ls, LHS_assign * lh, long nvars); // 0x140299930
void gotostat(LexState * ls, long pc); // 0x140299B10
void checkrepeated(FuncState * fs, Labellist * ll, TString * label); // 0x140299BE0
void labelstat(LexState * ls, TString * label, long line); // 0x140299CF0
void whilestat(LexState * ls, long line); // 0x140299E30
void repeatstat(LexState * ls, long line); // 0x14029A030
long exp1(LexState * ls); // 0x14029A210
void forbody(LexState * ls, long base, long line, long nvars, long isnum); // 0x14029A2D0
void fornum(LexState * ls, TString * varname, long line); // 0x14029A590
void forlist(LexState * ls, TString * indexname); // 0x14029A7F0
void forstat(LexState * ls, long line); // 0x14029AA60
void test_then_block(LexState * ls, long * escapelist); // 0x14029AB70
void ifstat(LexState * ls, long line); // 0x14029AE40
void localfunc(LexState * ls); // 0x14029AF60
void localstat(LexState * ls); // 0x14029B010
void funcstat(LexState * ls, long line); // 0x14029B1C0
void exprstat(LexState * ls); // 0x14029B2C0
void retstat(LexState * ls); // 0x14029B370
void statement(LexState * ls); // 0x14029B540
Closure * luaY_parser(lua_State * L, Zio * z, Mbuffer * buff, Dyndata * dyd, const char * name, long firstchar); // 0x14029B7C0//decompilation failure at 1408B0630!
GCObject *__fastcall addprototype(LexState *ls)
{
  FuncState *fs; // r14
  lua_State *L; // rbp
  Proto *f; // rdi
  int np; // eax
  __int64 sizep; // rbx
  __int64 v6; // rcx
  GCObject *result; // rax
  GCObject *v8; // r9
  unsigned __int8 marked; // dl
  global_State *l_G; // rax

  fs = ls->fs;
  L = ls->L;
  f = fs->f;
  np = fs->np;
  sizep = fs->f->sizep;
  if ( np >= (int)sizep )
  {
    if ( np + 1 > (int)sizep )
      f->p = (Proto **)luaM_growaux_(L, f->p, &f->sizep, 8ui64, 0x3FFFF, "functions");
    if ( (int)sizep < f->sizep )
    {
      v6 = sizep;
      do
      {
        ++v6;
        LODWORD(sizep) = sizep + 1;
        f->p[v6 - 1] = 0i64;
      }
      while ( (int)sizep < f->sizep );
    }
  }
  result = (GCObject *)luaF_newproto(L);
  v8 = result;
  f->p[fs->np++] = (Proto *)result;
  if ( (result->gch.marked & 3) != 0 )
  {
    marked = f->marked;
    if ( (marked & 4) != 0 )
    {
      l_G = L->l_G;
      if ( l_G->gcstate > 1u )
        f->marked = marked & 0xB8 | l_G->currentwhite & 3;
      else
        reallymarkobject(L->l_G, v8);
      return v8;
    }
  }
  return result;
}

void __fastcall adjust_assign(LexState *ls, int nvars, int nexps, expdesc *e)
{
  FuncState *fs; // rdi
  int v5; // esi
  int freereg; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ecx

  fs = ls->fs;
  v5 = nvars - nexps;
  if ( (unsigned int)(e->k - 12) <= 1 )
  {
    v7 = 0;
    if ( v5 + 1 >= 0 )
      v7 = v5 + 1;
    luaK_setreturns(fs, e, v7);
    if ( v7 > 1 )
    {
      v8 = v7 - 1;
      v9 = v8 + fs->freereg;
      if ( v9 > fs->f->maxstacksize )
      {
        if ( v9 >= 250 )
          lexerror(fs->ls, "function or expression too complex", (unsigned int)fs->ls->t.token);
        fs->f->maxstacksize = v9;
      }
      fs->freereg += v8;
    }
  }
  else
  {
    if ( e->k )
      luaK_exp2nextreg(fs, e);
    if ( v5 > 0 )
    {
      freereg = fs->freereg;
      luaK_reserveregs(fs, v5);
      luaK_nil(fs, freereg, v5);
    }
  }
}

void __fastcall assignment(LexState *ls, LHS_assign *lh, int nvars)
{
  expdesc *p_v; // rbp
  bool v7; // zf
  Token lookahead; // xmm0
  int v9; // eax
  int v10; // esi
  FuncState *fs; // rcx
  expdesc *v12; // rdx
  int v13; // eax
  FuncState *v14; // rcx
  unsigned int v15; // eax
  LHS_assign lha; // [rsp+20h] [rbp-48h] BYREF
  expdesc v; // [rsp+38h] [rbp-30h] BYREF

  p_v = &lh->v;
  if ( (unsigned int)(lh->v.k - 7) > 2 )
    lexerror(ls, "syntax error", (unsigned int)ls->t.token);
  if ( ls->t.token == 44 )
  {
    v7 = ls->lookahead.token == 286;
    ls->lastline = ls->linenumber;
    if ( v7 )
    {
      ls->t.token = llex(ls, &ls->t.seminfo);
    }
    else
    {
      lookahead = ls->lookahead;
      ls->lookahead.token = 286;
      ls->t = lookahead;
    }
    lha.prev = lh;
    suffixedexp(ls, &lha.v);
    if ( lha.v.k != VINDEXED )
      check_conflict(ls, lh, &lha.v);
    checklimit(ls->fs, nvars + ls->L->nCcalls, 200, "C levels");
    assignment(ls, &lha, nvars + 1);
LABEL_12:
    fs = ls->fs;
    v12 = p_v;
    v13 = fs->freereg - 1;
    *(_QWORD *)&v.t = -1i64;
    v.u.info = v13;
    v.k = VNONRELOC;
    goto LABEL_13;
  }
  checknext(ls, 61);
  v9 = explist(ls, &v);
  v10 = v9;
  if ( v9 != nvars )
  {
    adjust_assign(ls, nvars, v9, &v);
    if ( v10 > nvars )
      ls->fs->freereg += nvars - v10;
    goto LABEL_12;
  }
  v14 = ls->fs;
  if ( v.k == VCALL )
  {
    v.k = VNONRELOC;
    v15 = v14->f->code[v.u.info];
    v12 = p_v;
    fs = ls->fs;
    v.u.info = (unsigned __int8)(v15 >> 6);
  }
  else
  {
    if ( v.k == VVARARG )
    {
      v14->f->code[v.u.info] = v14->f->code[v.u.info] & 0x7FFFFF | 0x1000000;
      v.k = VRELOCABLE;
    }
    fs = ls->fs;
    v12 = p_v;
  }
LABEL_13:
  luaK_storevar(fs, v12, &v);
}

void __fastcall block(LexState *ls)
{
  FuncState *fs; // rbx
  BlockCnt *bl; // [rsp+20h] [rbp-18h] BYREF
  __int16 n; // [rsp+28h] [rbp-10h]
  __int16 v4; // [rsp+2Ah] [rbp-Eh]
  unsigned __int8 nactvar; // [rsp+2Ch] [rbp-Ch]
  char v6; // [rsp+2Dh] [rbp-Bh]
  char v7; // [rsp+2Eh] [rbp-Ah]

  fs = ls->fs;
  v7 = 0;
  nactvar = fs->nactvar;
  n = fs->ls->dyd->label.n;
  v4 = fs->ls->dyd->gt.n;
  v6 = 0;
  bl = fs->bl;
  fs->bl = (BlockCnt *)&bl;
  statlist(ls);
  leaveblock(fs);
}

__int64 __fastcall block_follow(LexState *ls, int withuntil)
{
  int token; // eax

  token = ls->t.token;
  if ( token < 260 )
    return 0i64;
  if ( token > 262 )
  {
    if ( token == 277 )
      return (unsigned int)withuntil;
    if ( token != 286 )
      return 0i64;
  }
  return 1i64;
}

void __fastcall body(LexState *ls, expdesc *e, int ismethod, int line)
{
  bool v8; // zf
  Token lookahead; // xmm0
  TString *v10; // rax
  FuncState *fs; // r9
  Token v12; // xmm0
  FuncState *prev; // rbx
  int v14; // eax
  const char *v15; // rax
  const char *v16; // rax
  const char *v17; // rax
  const char *v18; // rax
  BlockCnt v19; // [rsp+20h] [rbp-68h] BYREF
  FuncState v20; // [rsp+30h] [rbp-58h] BYREF

  v20.f = (Proto *)addprototype(ls);
  v20.f->linedefined = line;
  open_func(ls, &v20, &v19);
  if ( ls->t.token != 40 )
  {
    v15 = luaO_pushfstring(ls->L, "'%c'", 40i64);
    v16 = luaO_pushfstring(ls->L, "%s expected", v15);
    lexerror(ls, v16, (unsigned int)ls->t.token);
  }
  v8 = ls->lookahead.token == 286;
  ls->lastline = ls->linenumber;
  if ( v8 )
  {
    ls->t.token = llex(ls, &ls->t.seminfo);
  }
  else
  {
    lookahead = ls->lookahead;
    ls->lookahead.token = 286;
    ls->t = lookahead;
  }
  if ( ismethod )
  {
    v10 = luaX_newstring(ls, "self", 4ui64);
    new_localvar(ls, v10);
    fs = ls->fs;
    fs->f->locvars[fs->ls->dyd->actvar.arr[fs->firstlocal - 1 + ++fs->nactvar].idx].startpc = fs->pc;
  }
  parlist(ls);
  if ( ls->t.token != 41 )
  {
    v17 = luaO_pushfstring(ls->L, "'%c'", 41i64);
    v18 = luaO_pushfstring(ls->L, "%s expected", v17);
    lexerror(ls, v18, (unsigned int)ls->t.token);
  }
  v8 = ls->lookahead.token == 286;
  ls->lastline = ls->linenumber;
  if ( v8 )
  {
    ls->t.token = llex(ls, &ls->t.seminfo);
  }
  else
  {
    v12 = ls->lookahead;
    ls->lookahead.token = 286;
    ls->t = v12;
  }
  statlist(ls);
  v20.f->lastlinedefined = ls->linenumber;
  check_match(ls, 262, 265, line);
  prev = ls->fs->prev;
  v14 = luaK_code(prev, ((prev->np - 1) << 14) | 0x25u);
  *(_QWORD *)&e->t = -1i64;
  e->k = VRELOCABLE;
  e->u.info = v14;
  luaK_exp2nextreg(prev, e);
  close_func(ls);
}

void __fastcall check_conflict(LexState *ls, LHS_assign *lh, expdesc *v)
{
  FuncState *fs; // rbx
  int v4; // ecx
  int freereg; // er9
  int v6; // eax
  int v7; // ecx

  if ( lh )
  {
    fs = ls->fs;
    v4 = 0;
    freereg = fs->freereg;
    do
    {
      if ( lh->v.k == VINDEXED )
      {
        if ( lh->v.u.ind.vt == v->k && lh->v.u.ind.t == v->u.info )
        {
          v4 = 1;
          lh->v.u.ind.vt = 7;
          lh->v.u.ind.t = freereg;
        }
        if ( v->k == VLOCAL && lh->v.u.ind.idx == v->u.info )
        {
          v4 = 1;
          lh->v.u.ind.idx = freereg;
        }
      }
      lh = lh->prev;
    }
    while ( lh );
    if ( v4 )
    {
      v6 = 5;
      if ( v->k == VLOCAL )
        v6 = 0;
      luaK_code(fs, v6 | ((freereg | (v->u.info << 17)) << 6));
      v7 = fs->freereg + 1;
      if ( v7 > fs->f->maxstacksize )
      {
        if ( v7 >= 250 )
          lexerror(fs->ls, "function or expression too complex", (unsigned int)fs->ls->t.token);
        fs->f->maxstacksize = v7;
      }
      ++fs->freereg;
    }
  }
}

void __fastcall check_match(LexState *ls, int what, int who, int where)
{
  bool v7; // zf
  Token lookahead; // xmm0
  const char *v9; // rax
  const char *v10; // rax
  const char *v11; // rbx
  const char *v12; // rax
  const char *v13; // rax
  int v14; // [rsp+20h] [rbp-18h]

  if ( ls->t.token != what )
  {
    if ( where == ls->linenumber )
    {
      v9 = luaX_token2str(ls, what);
      v10 = luaO_pushfstring(ls->L, "%s expected", v9);
      lexerror(ls, v10, (unsigned int)ls->t.token);
    }
    v11 = luaX_token2str(ls, who);
    v12 = luaX_token2str(ls, what);
    v14 = where;
    v13 = luaO_pushfstring(ls->L, "%s expected (to close %s at line %d)", v12, v11, v14);
    lexerror(ls, v13, (unsigned int)ls->t.token);
  }
  v7 = ls->lookahead.token == 286;
  ls->lastline = ls->linenumber;
  if ( v7 )
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

void __fastcall checklimit(FuncState *fs, int v, int l, const char *what)
{
  lua_State *v7; // rdi
  __int64 linedefined; // r8
  const char *v9; // rax
  const char *v10; // rax

  if ( v > l )
  {
    v7 = fs->ls->L;
    linedefined = (unsigned int)fs->f->linedefined;
    if ( (_DWORD)linedefined )
      v9 = luaO_pushfstring(v7, "function at line %d", linedefined);
    else
      v9 = "main function";
    v10 = luaO_pushfstring(v7, "too many %s (limit is %d) in %s", what, (unsigned int)l, v9);
    lexerror(fs->ls, v10, (unsigned int)fs->ls->t.token);
  }
}

void __fastcall checknext(LexState *ls, int c)
{
  bool v3; // zf
  Token lookahead; // xmm0
  const char *v5; // rax
  const char *v6; // rax

  if ( ls->t.token != c )
  {
    v5 = luaX_token2str(ls, c);
    v6 = luaO_pushfstring(ls->L, "%s expected", v5);
    lexerror(ls, v6, (unsigned int)ls->t.token);
  }
  v3 = ls->lookahead.token == 286;
  ls->lastline = ls->linenumber;
  if ( v3 )
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

void __fastcall checkrepeated(FuncState *fs, Labellist *ll, TString *label)
{
  __int64 firstlabel; // rbp
  __int64 v6; // rdi
  Labeldesc *arr; // r12
  unsigned __int8 tt; // r14
  __int64 n; // r15
  Labeldesc *v10; // rsi
  TString *name; // rdx
  unsigned __int64 len; // r8
  const char *v13; // rax
  LexState *ls; // rcx

  firstlabel = fs->bl->firstlabel;
  if ( (int)firstlabel < ll->n )
  {
    v6 = fs->bl->firstlabel;
    arr = ll->arr;
    tt = label->tsv.tt;
    n = ll->n;
    v10 = &ll->arr[firstlabel];
    do
    {
      name = v10->name;
      if ( tt == v10->name->tsv.tt )
      {
        if ( tt == 4 )
        {
          if ( label == name )
            goto LABEL_12;
        }
        else
        {
          len = label->tsv.len;
          if ( label == name || len == name->tsv.len && !memcmp(&label[1], &name[1], len) )
          {
LABEL_12:
            v13 = luaO_pushfstring(
                    fs->ls->L,
                    "label '%s' already defined on line %d",
                    (const char *)&label[1],
                    (unsigned int)arr[(int)firstlabel].line);
            ls = fs->ls;
            ls->t.token = 0;
            lexerror(ls, v13, 0i64);
          }
        }
      }
      LODWORD(firstlabel) = firstlabel + 1;
      ++v6;
      ++v10;
    }
    while ( v6 < n );
  }
}

void __fastcall close_func(LexState *ls)
{
  FuncState *fs; // rsi
  lua_State *L; // rbx
  Proto *f; // rdi
  int nlocvars; // edx
  LocVar *v6; // rax
  __int64 sizeupvalues; // r8
  Upvaldesc *upvalues; // rdx
  global_State *l_G; // rcx
  __int64 v10; // rax

  fs = ls->fs;
  L = ls->L;
  f = fs->f;
  luaK_code(fs, 0x80001Fu);
  leaveblock(fs);
  if ( (unsigned __int64)(fs->pc + 1) > 0x3FFFFFFFFFFFFFFFi64 )
    luaG_runerror(L, "memory allocation error: block too big");
  f->code = (unsigned int *)luaM_realloc_(L, f->code, 4i64 * f->sizecode, 4i64 * fs->pc);
  f->sizecode = fs->pc;
  if ( (unsigned __int64)(fs->pc + 1) > 0x3FFFFFFFFFFFFFFFi64 )
    luaG_runerror(L, "memory allocation error: block too big");
  f->lineinfo = (int *)luaM_realloc_(L, f->lineinfo, 4i64 * f->sizelineinfo, 4i64 * fs->pc);
  f->sizelineinfo = fs->pc;
  if ( (unsigned __int64)(fs->nk + 1) > 0xFFFFFFFFFFFFFFFi64 )
    luaG_runerror(L, "memory allocation error: block too big");
  f->k = (lua_TValue *)luaM_realloc_(L, f->k, 16i64 * f->sizek, 16i64 * fs->nk);
  f->sizek = fs->nk;
  if ( (unsigned __int64)(fs->np + 1) > 0x1FFFFFFFFFFFFFFFi64 )
    luaG_runerror(L, "memory allocation error: block too big");
  f->p = (Proto **)luaM_realloc_(L, f->p, 8i64 * f->sizep, 8i64 * fs->np);
  f->sizep = fs->np;
  nlocvars = fs->nlocvars;
  if ( (unsigned __int64)(nlocvars + 1) > 0xFFFFFFFFFFFFFFFi64 )
    luaG_runerror(L, "memory allocation error: block too big");
  v6 = (LocVar *)luaM_realloc_(L, f->locvars, 16i64 * f->sizelocvars, 16i64 * (__int16)nlocvars);
  sizeupvalues = f->sizeupvalues;
  upvalues = f->upvalues;
  f->locvars = v6;
  f->sizelocvars = fs->nlocvars;
  f->upvalues = (Upvaldesc *)luaM_realloc_(L, upvalues, 16 * sizeupvalues, 16i64 * fs->nups);
  f->sizeupvalues = fs->nups;
  ls->fs = fs->prev;
  if ( (unsigned int)(ls->t.token - 288) <= 1 )
    luaX_newstring(ls, (const char *)&ls->t.seminfo.ts[1], ls->t.seminfo.ts->tsv.len);
  l_G = L->l_G;
  --L->top;
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
}

void __fastcall _LN15_69(LexState *ls, int g, Labeldesc *label)
{
  Dyndata *dyd; // rbx
  int v5; // edi
  __int64 v6; // rsi
  Labeldesc *v7; // r9
  unsigned __int8 nactvar; // al
  Labeldesc *arr; // rax
  const char *v10; // rax

  dyd = ls->dyd;
  v5 = g;
  v6 = g;
  v7 = &dyd->gt.arr[v6];
  nactvar = v7->nactvar;
  if ( nactvar < label->nactvar )
  {
    v10 = luaO_pushfstring(
            ls->L,
            "<goto %s> at line %d jumps into the scope of local '%s'",
            (const char *)&v7->name[1],
            (unsigned int)v7->line,
            (const char *)&ls->fs->f->locvars[ls->fs->ls->dyd->actvar.arr[nactvar + ls->fs->firstlocal].idx].varname[1]);
    ls->t.token = 0;
    lexerror(ls, v10, 0i64);
  }
  luaK_patchlist(ls->fs, v7->pc, label->pc);
  for ( ; v5 < dyd->gt.n - 1; *(_QWORD *)&arr[v6 - 1].nactvar = *(_QWORD *)&arr[v6].nactvar )
  {
    arr = dyd->gt.arr;
    ++v6;
    ++v5;
    *(_OWORD *)&arr[v6 - 1].name = *(_OWORD *)&arr[v6].name;
  }
  --dyd->gt.n;
}

void __fastcall codestring(LexState *ls, expdesc *e, TString *s)
{
  FuncState *fs; // rcx
  int v5; // eax
  lua_TValue v; // [rsp+20h] [rbp-18h] BYREF

  fs = ls->fs;
  v5 = s->tsv.tt | 0x40;
  v.value_.gc = (GCObject *)s;
  v.tt_ = v5;
  e->u.info = addk(fs, &v, &v);
  *(_QWORD *)&e->t = -1i64;
  e->k = VK;
}

void __fastcall constructor(LexState *ls, expdesc *t)
{
  FuncState *fs; // rsi
  int linenumber; // er15
  int v6; // eax
  int v7; // er14
  __int64 v8; // r12
  FuncState *v9; // rcx
  bool v10; // zf
  int v11; // ecx
  int token; // eax
  LexState *v13; // rcx
  FuncState *v14; // rbx
  int v15; // eax
  FuncState *v16; // rbx
  int v17; // eax
  Token lookahead; // xmm0
  int tostore; // er9
  unsigned int na; // edx
  int v21; // ecx
  __int64 v22; // r8
  unsigned int *code; // rcx
  unsigned int nh; // edx
  lua_State *v25; // rdi
  __int64 v26; // r8
  const char *v27; // rax
  lua_State *L; // rdi
  __int64 linedefined; // r8
  const char *v30; // rax
  const char *v31; // rax
  const char *v32; // rax
  const char *v33; // rax
  const char *v34; // rax
  ConsControl e; // [rsp+30h] [rbp-30h] BYREF

  fs = ls->fs;
  linenumber = ls->linenumber;
  v6 = luaK_code(fs, 0xBu);
  v7 = 0;
  v8 = v6;
  t->u.info = v6;
  *(_QWORD *)&t->t = -1i64;
  t->k = VRELOCABLE;
  v9 = ls->fs;
  *(_QWORD *)&e.na = 0i64;
  e.nh = 0;
  e.t = t;
  *(_QWORD *)&e.v.t = -1i64;
  *(_QWORD *)&e.v.k = 0i64;
  luaK_exp2nextreg(v9, t);
  if ( ls->t.token != 123 )
  {
    v31 = luaO_pushfstring(ls->L, "'%c'", 123i64);
    v32 = luaO_pushfstring(ls->L, "%s expected", v31);
    lexerror(ls, v32, (unsigned int)ls->t.token);
  }
  v10 = ls->lookahead.token == 286;
  ls->lastline = ls->linenumber;
  if ( !v10 )
    goto LABEL_25;
LABEL_3:
  ls->t.token = llex(ls, &ls->t.seminfo);
  while ( ls->t.token != 125 )
  {
    if ( e.v.k )
    {
      luaK_dischargevars(fs, &e.v);
      if ( e.v.k == VNONRELOC && (e.v.u.ind.idx & 0x100) == 0 && e.v.u.info >= fs->nactvar )
        --fs->freereg;
      v11 = fs->freereg + 1;
      if ( v11 > fs->f->maxstacksize )
      {
        if ( v11 >= 250 )
          lexerror(fs->ls, "function or expression too complex", (unsigned int)fs->ls->t.token);
        fs->f->maxstacksize = v11;
      }
      exp2reg(fs, &e.v, fs->freereg++);
      e.v.k = VVOID;
      if ( e.tostore == 50 )
      {
        luaK_setlist(fs, e.t->u.info, e.na, 50);
        e.tostore = 0;
      }
    }
    token = ls->t.token;
    v13 = ls;
    if ( token == 91 )
    {
LABEL_22:
      recfield(v13, &e);
      goto LABEL_23;
    }
    if ( token == 288 )
    {
      v15 = llex(ls, &ls->lookahead.seminfo);
      ls->lookahead.token = v15;
      v13 = ls;
      if ( v15 == 61 )
        goto LABEL_22;
      subexpr(ls, &e.v, 0);
      v16 = ls->fs;
      if ( e.na > 2147483645 )
      {
        L = v16->ls->L;
        linedefined = (unsigned int)v16->f->linedefined;
        if ( (_DWORD)linedefined )
          v30 = luaO_pushfstring(v16->ls->L, "function at line %d", linedefined);
        else
          v30 = "main function";
        v34 = luaO_pushfstring(L, "too many %s (limit is %d) in %s", "items in a constructor", 2147483645i64, v30);
        lexerror(v16->ls, v34, (unsigned int)v16->ls->t.token);
      }
      ++e.tostore;
      ++e.na;
    }
    else
    {
      subexpr(ls, &e.v, 0);
      v14 = ls->fs;
      if ( e.na > 2147483645 )
      {
        v25 = v14->ls->L;
        v26 = (unsigned int)v14->f->linedefined;
        if ( (_DWORD)v26 )
          v27 = luaO_pushfstring(v14->ls->L, "function at line %d", v26);
        else
          v27 = "main function";
        v33 = luaO_pushfstring(v25, "too many %s (limit is %d) in %s", "items in a constructor", 2147483645i64, v27);
        lexerror(v14->ls, v33, (unsigned int)v14->ls->t.token);
      }
      ++e.tostore;
      ++e.na;
    }
LABEL_23:
    v17 = ls->t.token;
    if ( v17 != 44 && v17 != 59 )
      break;
    v10 = ls->lookahead.token == 286;
    ls->lastline = ls->linenumber;
    if ( v10 )
      goto LABEL_3;
LABEL_25:
    lookahead = ls->lookahead;
    ls->lookahead.token = 286;
    ls->t = lookahead;
  }
  check_match(ls, 125, 123, linenumber);
  tostore = e.tostore;
  if ( !e.tostore )
    goto LABEL_32;
  if ( (unsigned int)(e.v.k - 12) <= 1 )
  {
    luaK_setreturns(fs, &e.v, -1);
    luaK_setlist(fs, e.t->u.info, e.na, -1);
    na = --e.na;
  }
  else
  {
    if ( e.v.k )
    {
      luaK_exp2nextreg(fs, &e.v);
      tostore = e.tostore;
    }
    luaK_setlist(fs, e.t->u.info, e.na, tostore);
LABEL_32:
    na = e.na;
  }
  v21 = 0;
  if ( na >= 8 )
  {
    for ( ; na >= 0x10; na = (na + 1) >> 1 )
      ++v21;
    na = (8 * v21 + 8) | (na - 8);
  }
  v22 = v8;
  code = fs->f->code;
  code[v22] &= 0x7FFFFFu;
  code[v22] |= na << 23;
  nh = e.nh;
  if ( e.nh >= 8u )
  {
    if ( e.nh >= 0x10u )
    {
      do
      {
        ++v7;
        nh = (nh + 1) >> 1;
      }
      while ( nh >= 0x10 );
    }
    nh = (8 * v7 + 8) | (nh - 8);
  }
  fs->f->code[v8] ^= (fs->f->code[v8] ^ (nh << 14)) & 0x7FC000;
}

void __fastcall enterlevel(LexState *ls)
{
  lua_State *L; // rax
  FuncState *fs; // rbx
  lua_State *v3; // rdi
  __int64 linedefined; // r8
  const char *v5; // rax
  const char *v6; // rax

  L = ls->L;
  ++L->nCcalls;
  fs = ls->fs;
  if ( L->nCcalls > 0xC8u )
  {
    v3 = fs->ls->L;
    linedefined = (unsigned int)fs->f->linedefined;
    if ( (_DWORD)linedefined )
      v5 = luaO_pushfstring(v3, "function at line %d", linedefined);
    else
      v5 = "main function";
    v6 = luaO_pushfstring(v3, "too many %s (limit is %d) in %s", "C levels", 200i64, v5);
    lexerror(fs->ls, v6, (unsigned int)fs->ls->t.token);
  }
}

__int64 __fastcall exp1(LexState *ls)
{
  FuncState *fs; // rbx
  int v3; // ecx
  expdesc v; // [rsp+20h] [rbp-28h] BYREF

  subexpr(ls, &v, 0);
  fs = ls->fs;
  luaK_dischargevars(fs, &v);
  if ( v.k == VNONRELOC && (v.u.ind.idx & 0x100) == 0 && v.u.info >= fs->nactvar )
    --fs->freereg;
  v3 = fs->freereg + 1;
  if ( v3 > fs->f->maxstacksize )
  {
    if ( v3 >= 250 )
      lexerror(fs->ls, "function or expression too complex", (unsigned int)fs->ls->t.token);
    fs->f->maxstacksize = v3;
  }
  exp2reg(fs, &v, fs->freereg++);
  return (unsigned int)v.u.info;
}

__int64 __fastcall explist(LexState *ls, expdesc *v)
{
  unsigned int v4; // ebp
  bool v5; // zf
  Token lookahead; // xmm0
  FuncState *fs; // rdi
  int info; // ecx
  int v9; // ecx

  v4 = 1;
  subexpr(ls, v, 0);
  while ( ls->t.token == 44 )
  {
    v5 = ls->lookahead.token == 286;
    ls->lastline = ls->linenumber;
    if ( v5 )
    {
      ls->t.token = llex(ls, &ls->t.seminfo);
    }
    else
    {
      lookahead = ls->lookahead;
      ls->lookahead.token = 286;
      ls->t = lookahead;
    }
    fs = ls->fs;
    luaK_dischargevars(fs, v);
    if ( v->k == VNONRELOC )
    {
      info = v->u.info;
      if ( (info & 0x100) == 0 && info >= fs->nactvar )
        --fs->freereg;
    }
    v9 = fs->freereg + 1;
    if ( v9 > fs->f->maxstacksize )
    {
      if ( v9 >= 250 )
        lexerror(fs->ls, "function or expression too complex", (unsigned int)fs->ls->t.token);
      fs->f->maxstacksize = v9;
    }
    exp2reg(fs, v, fs->freereg++);
    subexpr(ls, v, 0);
    ++v4;
  }
  return v4;
}

void __fastcall exprstat(LexState *ls)
{
  FuncState *fs; // rdi
  unsigned __int64 token; // r8
  LHS_assign lh; // [rsp+20h] [rbp-28h] BYREF

  fs = ls->fs;
  suffixedexp(ls, &lh.v);
  token = (unsigned int)ls->t.token;
  if ( (_DWORD)token == 61 || (_DWORD)token == 44 )
  {
    lh.prev = 0i64;
    assignment(ls, &lh, 1);
  }
  else
  {
    if ( lh.v.k != VCALL )
      lexerror(ls, "syntax error", token);
    fs->f->code[lh.v.u.info] = fs->f->code[lh.v.u.info] & 0xFF803FFF | 0x4000;
  }
}

void __fastcall fieldsel(LexState *ls, expdesc *v)
{
  FuncState *fs; // rsi
  int info; // er8
  bool v6; // zf
  Token lookahead; // xmm0
  TString *v8; // rax
  FuncState *v9; // rcx
  __int16 v10; // ax
  expdesc e; // [rsp+20h] [rbp-28h] BYREF
  lua_TValue key; // [rsp+30h] [rbp-18h] BYREF

  fs = ls->fs;
  if ( v->k == VUPVAL && v->t == v->f )
    goto LABEL_8;
  luaK_dischargevars(ls->fs, v);
  if ( v->k != VNONRELOC )
    goto LABEL_7;
  if ( v->t == v->f )
    goto LABEL_8;
  info = v->u.info;
  if ( info >= fs->nactvar )
    exp2reg(fs, v, info);
  else
LABEL_7:
    luaK_exp2nextreg(fs, v);
LABEL_8:
  v6 = ls->lookahead.token == 286;
  ls->lastline = ls->linenumber;
  if ( v6 )
  {
    ls->t.token = llex(ls, &ls->t.seminfo);
  }
  else
  {
    lookahead = ls->lookahead;
    ls->lookahead.token = 286;
    ls->t = lookahead;
  }
  v8 = str_checkname(ls);
  v9 = ls->fs;
  key.value_.gc = (GCObject *)v8;
  *(_QWORD *)&e.t = -1i64;
  LODWORD(v8) = v8->tsv.tt | 0x40;
  e.k = VK;
  key.tt_ = (int)v8;
  e.u.info = addk(v9, &key, &key);
  v->u.ind.t = LOBYTE(v->u.nval);
  v10 = luaK_exp2RK(fs, &e);
  v6 = v->k == VUPVAL;
  v->u.ind.idx = v10;
  v->k = VINDEXED;
  v->u.ind.vt = v6 + 7;
}

void __fastcall findgotos(LexState *ls, Labeldesc *lb)
{
  Dyndata *dyd; // rsi
  __int64 firstgoto; // rbx
  __int64 v6; // rdi
  TString *name; // rdx
  TString *v8; // rcx
  unsigned __int8 tt; // al
  size_t len; // r8

  dyd = ls->dyd;
  firstgoto = ls->fs->bl->firstgoto;
  if ( (int)firstgoto < dyd->gt.n )
  {
    v6 = firstgoto;
    do
    {
      name = lb->name;
      v8 = dyd->gt.arr[v6].name;
      tt = v8->tsv.tt;
      if ( tt == lb->name->tsv.tt )
      {
        if ( tt == 4 )
        {
          if ( v8 == name )
            goto LABEL_12;
        }
        else
        {
          len = v8->tsv.len;
          if ( v8 == name || len == name->tsv.len && !memcmp(&v8[1], &name[1], len) )
          {
LABEL_12:
            _LN15_69(ls, firstgoto, lb);
            continue;
          }
        }
      }
      LODWORD(firstgoto) = firstgoto + 1;
      ++v6;
    }
    while ( (int)firstgoto < dyd->gt.n );
  }
}

__int64 __fastcall findlabel(LexState *ls, int g)
{
  Dyndata *dyd; // r9
  __int64 v3; // r8
  BlockCnt *bl; // rdx
  __int64 n; // r13
  __int64 firstlabel; // r12
  __int64 v7; // r15
  TString *v8; // rbx
  __int64 v9; // rdi
  char v10; // r14
  Labeldesc *i; // rsi
  TString *name; // rcx
  unsigned __int8 tt; // al
  unsigned __int8 nactvar; // al
  int v15; // er8
  unsigned __int8 v16; // al
  int v17; // er10
  unsigned int *code; // rcx
  unsigned int v19; // eax
  unsigned int *v20; // r9
  size_t len; // r8
  FuncState *fs; // [rsp+70h] [rbp+18h]

  dyd = ls->dyd;
  v3 = g;
  fs = ls->fs;
  bl = fs->bl;
  n = dyd->label.n;
  firstlabel = bl->firstlabel;
  v7 = (__int64)&dyd->gt.arr[v3];
  if ( (int)firstlabel >= (int)n )
    return 0i64;
  v8 = *(TString **)v7;
  v9 = bl->firstlabel;
  v10 = *(_BYTE *)(*(_QWORD *)v7 + 8i64);
  for ( i = &dyd->label.arr[firstlabel]; ; ++i )
  {
    name = i->name;
    tt = i->name->tsv.tt;
    if ( tt != v10 )
      goto LABEL_16;
    if ( tt != 4 )
      break;
    if ( name == v8 )
      goto LABEL_6;
LABEL_16:
    if ( ++v9 >= n )
      return 0i64;
  }
  len = name->tsv.len;
  if ( name != v8 && (len != v8->tsv.len || memcmp(&name[1], &v8[1], len)) )
    goto LABEL_16;
LABEL_6:
  nactvar = i->nactvar;
  if ( *(_BYTE *)(v7 + 16) > nactvar && (fs->bl->upval || (int)n > (int)firstlabel) )
  {
    v15 = *(_DWORD *)(v7 + 8);
    v16 = nactvar + 1;
    if ( v15 != -1 )
    {
      v17 = v16 << 6;
      do
      {
        code = fs->f->code;
        v19 = code[v15];
        v20 = &code[v15];
        if ( v19 >> 14 == 131070 )
          v15 = -1;
        else
          v15 += (v19 >> 14) - 0x1FFFF + 1;
        *v20 = v17 | v19 & 0xFFFFC03F;
      }
      while ( v15 != -1 );
    }
  }
  _LN15_69(ls, g, i);
  return 1i64;
}

void __fastcall forbody(LexState *ls, int base, int line, int nvars, int isnum)
{
  FuncState *fs; // rbx
  int v6; // er10
  bool v11; // zf
  Token lookahead; // xmm0
  int v13; // eax
  int v14; // ebp
  int v15; // er10
  FuncState *v16; // r9
  int v17; // ecx
  int jpc; // edx
  unsigned int *code; // r8
  int v20; // ecx
  FuncState *v21; // rcx
  int v22; // edx
  int v23; // eax
  const char *v24; // rax
  const char *v25; // rax
  BlockCnt *bl; // [rsp+20h] [rbp-28h] BYREF
  __int16 n; // [rsp+28h] [rbp-20h]
  __int16 v28; // [rsp+2Ah] [rbp-1Eh]
  unsigned __int8 nactvar; // [rsp+2Ch] [rbp-1Ch]
  char v30; // [rsp+2Dh] [rbp-1Bh]
  char v31; // [rsp+2Eh] [rbp-1Ah]

  fs = ls->fs;
  v6 = 3;
  fs->nactvar += 3;
  do
    fs->f->locvars[fs->ls->dyd->actvar.arr[fs->firstlocal + fs->nactvar - v6--].idx].startpc = fs->pc;
  while ( v6 );
  if ( ls->t.token != 259 )
  {
    v24 = luaO_pushfstring(
            ls->L,
            "'%s'",
            *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[8][200]);
    v25 = luaO_pushfstring(ls->L, "%s expected", v24);
    lexerror(ls, v25, (unsigned int)ls->t.token);
  }
  v11 = ls->lookahead.token == 286;
  ls->lastline = ls->linenumber;
  if ( v11 )
  {
    ls->t.token = llex(ls, &ls->t.seminfo);
  }
  else
  {
    lookahead = ls->lookahead;
    ls->lookahead.token = 286;
    ls->t = lookahead;
  }
  if ( isnum )
    v13 = luaK_code(fs, (base << 6) | 0x7FFF8021u);
  else
    v13 = luaK_jump(fs);
  v31 = 0;
  v14 = v13;
  v15 = nvars;
  nactvar = fs->nactvar;
  n = fs->ls->dyd->label.n;
  v28 = fs->ls->dyd->gt.n;
  v30 = 0;
  bl = fs->bl;
  fs->bl = (BlockCnt *)&bl;
  v16 = ls->fs;
  v16->nactvar += nvars;
  if ( nvars )
  {
    do
      v16->f->locvars[v16->ls->dyd->actvar.arr[v16->firstlocal + v16->nactvar - v15--].idx].startpc = v16->pc;
    while ( v15 );
  }
  v17 = nvars + fs->freereg;
  if ( v17 > fs->f->maxstacksize )
  {
    if ( v17 >= 250 )
      lexerror(fs->ls, "function or expression too complex", (unsigned int)fs->ls->t.token);
    fs->f->maxstacksize = v17;
  }
  fs->freereg += nvars;
  block(ls);
  leaveblock(fs);
  fs->lasttarget = fs->pc;
  if ( v14 != -1 )
  {
    jpc = fs->jpc;
    if ( jpc == -1 )
    {
      fs->jpc = v14;
    }
    else
    {
      code = fs->f->code;
      while ( code[jpc] >> 14 != 131070 )
      {
        v20 = (code[jpc] >> 14) - 0x1FFFF;
        if ( jpc + v20 + 1 == -1 )
          break;
        jpc += v20 + 1;
      }
      fixjump(fs, jpc, v14);
    }
  }
  v21 = fs;
  if ( isnum )
  {
    v22 = (base << 6) | 0x7FFF8020;
  }
  else
  {
    luaK_code(fs, ((base | (nvars << 8)) << 6) | 0x22);
    fs->f->lineinfo[fs->pc - 1] = line;
    v21 = fs;
    v22 = ((base + 2) << 6) | 0x7FFF8023;
  }
  v23 = luaK_code(v21, v22);
  luaK_patchlist(fs, v23, v14 + 1);
  fs->f->lineinfo[fs->pc - 1] = line;
}

void __fastcall forlist(LexState *ls, TString *indexname)
{
  FuncState *fs; // r14
  int v4; // esi
  int freereg; // ebp
  TString *v7; // rax
  TString *v8; // rax
  TString *v9; // rax
  int token; // eax
  bool v11; // zf
  Token lookahead; // xmm0
  TString *ts; // rdi
  Token v14; // xmm0
  Token v15; // xmm0
  int linenumber; // edi
  int v17; // eax
  int v18; // ecx
  const char *v19; // rax
  const char *v20; // rax
  const char *v21; // rax
  expdesc v; // [rsp+30h] [rbp-38h] BYREF

  fs = ls->fs;
  v4 = 4;
  freereg = fs->freereg;
  v7 = luaX_newstring(ls, "(for generator)", 0xFui64);
  new_localvar(ls, v7);
  v8 = luaX_newstring(ls, "(for state)", 0xBui64);
  new_localvar(ls, v8);
  v9 = luaX_newstring(ls, "(for control)", 0xDui64);
  new_localvar(ls, v9);
  new_localvar(ls, indexname);
  while ( 1 )
  {
    token = ls->t.token;
    if ( token != 44 )
      break;
    v11 = ls->lookahead.token == 286;
    ls->lastline = ls->linenumber;
    if ( v11 )
    {
      ls->t.token = llex(ls, &ls->t.seminfo);
    }
    else
    {
      lookahead = ls->lookahead;
      ls->lookahead.token = 286;
      ls->t = lookahead;
    }
    if ( ls->t.token != 288 )
    {
      v19 = luaO_pushfstring(
              ls->L,
              "%s expected",
              *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[9][176]);
      lexerror(ls, v19, (unsigned int)ls->t.token);
    }
    v11 = ls->lookahead.token == 286;
    ts = ls->t.seminfo.ts;
    ls->lastline = ls->linenumber;
    if ( v11 )
    {
      ls->t.token = llex(ls, &ls->t.seminfo);
    }
    else
    {
      v14 = ls->lookahead;
      ls->lookahead.token = 286;
      ls->t = v14;
    }
    new_localvar(ls, ts);
    ++v4;
  }
  if ( token != 268 )
  {
    v20 = luaO_pushfstring(
            ls->L,
            "'%s'",
            *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[9][16]);
    v21 = luaO_pushfstring(ls->L, "%s expected", v20);
    lexerror(ls, v21, (unsigned int)ls->t.token);
  }
  v11 = ls->lookahead.token == 286;
  ls->lastline = ls->linenumber;
  if ( v11 )
  {
    ls->t.token = llex(ls, &ls->t.seminfo);
  }
  else
  {
    v15 = ls->lookahead;
    ls->lookahead.token = 286;
    ls->t = v15;
  }
  linenumber = ls->linenumber;
  v17 = explist(ls, &v);
  adjust_assign(ls, 3, v17, &v);
  v18 = fs->freereg + 3;
  if ( v18 > fs->f->maxstacksize )
  {
    if ( v18 >= 250 )
      lexerror(fs->ls, "function or expression too complex", (unsigned int)fs->ls->t.token);
    fs->f->maxstacksize = v18;
  }
  forbody(ls, freereg, linenumber, v4 - 3, 0);
}

void __fastcall fornum(LexState *ls, TString *varname, int line)
{
  FuncState *fs; // rsi
  int freereg; // er14
  TString *v8; // rax
  TString *v9; // rax
  TString *v10; // rax
  bool v11; // zf
  Token lookahead; // xmm0
  Token v13; // xmm0
  Token v14; // xmm0
  int v15; // eax
  int v16; // ecx
  const char *v17; // rax
  const char *v18; // rax
  const char *v19; // rax
  const char *v20; // rax

  fs = ls->fs;
  freereg = fs->freereg;
  v8 = luaX_newstring(ls, "(for index)", 0xBui64);
  new_localvar(ls, v8);
  v9 = luaX_newstring(ls, "(for limit)", 0xBui64);
  new_localvar(ls, v9);
  v10 = luaX_newstring(ls, "(for step)", 0xAui64);
  new_localvar(ls, v10);
  new_localvar(ls, varname);
  if ( ls->t.token != 61 )
  {
    v17 = luaO_pushfstring(ls->L, "'%c'", 61i64);
    v18 = luaO_pushfstring(ls->L, "%s expected", v17);
    lexerror(ls, v18, (unsigned int)ls->t.token);
  }
  v11 = ls->lookahead.token == 286;
  ls->lastline = ls->linenumber;
  if ( v11 )
  {
    ls->t.token = llex(ls, &ls->t.seminfo);
  }
  else
  {
    lookahead = ls->lookahead;
    ls->lookahead.token = 286;
    ls->t = lookahead;
  }
  exp1(ls);
  if ( ls->t.token != 44 )
  {
    v19 = luaO_pushfstring(ls->L, "'%c'", 44i64);
    v20 = luaO_pushfstring(ls->L, "%s expected", v19);
    lexerror(ls, v20, (unsigned int)ls->t.token);
  }
  v11 = ls->lookahead.token == 286;
  ls->lastline = ls->linenumber;
  if ( v11 )
  {
    ls->t.token = llex(ls, &ls->t.seminfo);
  }
  else
  {
    v13 = ls->lookahead;
    ls->lookahead.token = 286;
    ls->t = v13;
  }
  exp1(ls);
  if ( ls->t.token == 44 )
  {
    v11 = ls->lookahead.token == 286;
    ls->lastline = ls->linenumber;
    if ( v11 )
    {
      ls->t.token = llex(ls, &ls->t.seminfo);
    }
    else
    {
      v14 = ls->lookahead;
      ls->lookahead.token = 286;
      ls->t = v14;
    }
    exp1(ls);
  }
  else
  {
    v15 = luaK_numberK(fs, 1.0);
    luaK_codek(fs, fs->freereg, v15);
    v16 = fs->freereg + 1;
    if ( v16 > fs->f->maxstacksize )
    {
      if ( v16 >= 250 )
        lexerror(fs->ls, "function or expression too complex", (unsigned int)fs->ls->t.token);
      fs->f->maxstacksize = v16;
    }
    ++fs->freereg;
  }
  forbody(ls, freereg, line, 1, 1);
}

void __fastcall forstat(LexState *ls, int line)
{
  FuncState *fs; // rdi
  bool v5; // zf
  Token lookahead; // xmm0
  TString *v7; // rax
  unsigned __int64 token; // r8
  BlockCnt *bl; // [rsp+20h] [rbp-18h] BYREF
  __int16 n; // [rsp+28h] [rbp-10h]
  __int16 v11; // [rsp+2Ah] [rbp-Eh]
  unsigned __int8 nactvar; // [rsp+2Ch] [rbp-Ch]
  char v13; // [rsp+2Dh] [rbp-Bh]
  char v14; // [rsp+2Eh] [rbp-Ah]

  fs = ls->fs;
  v14 = 1;
  nactvar = fs->nactvar;
  n = fs->ls->dyd->label.n;
  v11 = fs->ls->dyd->gt.n;
  v13 = 0;
  bl = fs->bl;
  fs->bl = (BlockCnt *)&bl;
  v5 = ls->lookahead.token == 286;
  ls->lastline = ls->linenumber;
  if ( v5 )
  {
    ls->t.token = llex(ls, &ls->t.seminfo);
  }
  else
  {
    lookahead = ls->lookahead;
    ls->lookahead.token = 286;
    ls->t = lookahead;
  }
  v7 = str_checkname(ls);
  token = (unsigned int)ls->t.token;
  if ( (_DWORD)token == 44 )
  {
LABEL_9:
    forlist(ls, v7);
    goto LABEL_10;
  }
  if ( (_DWORD)token != 61 )
  {
    if ( (_DWORD)token != 268 )
      lexerror(ls, "'=' or 'in' expected", token);
    goto LABEL_9;
  }
  fornum(ls, v7, line);
LABEL_10:
  check_match(ls, 262, 264, line);
  leaveblock(fs);
}

void __fastcall funcargs(LexState *ls, expdesc *f, int line)
{
  FuncState *fs; // rdi
  unsigned __int64 token; // r8
  int v8; // eax
  bool v9; // zf
  Token lookahead; // xmm0
  int info; // ebx
  int v12; // edx
  lua_TValue key; // [rsp+20h] [rbp-48h] BYREF
  expdesc t; // [rsp+30h] [rbp-38h] BYREF

  fs = ls->fs;
  token = (unsigned int)ls->t.token;
  switch ( (_DWORD)token )
  {
    case 0x28:
      v9 = ls->lookahead.token == 286;
      ls->lastline = ls->linenumber;
      if ( v9 )
      {
        ls->t.token = llex(ls, &ls->t.seminfo);
      }
      else
      {
        lookahead = ls->lookahead;
        ls->lookahead.token = 286;
        ls->t = lookahead;
      }
      if ( ls->t.token == 41 )
      {
        t.k = VVOID;
      }
      else
      {
        explist(ls, &t);
        luaK_setreturns(fs, &t, -1);
      }
      check_match(ls, 41, 40, line);
      break;
    case 0x7B:
      constructor(ls, &t);
      break;
    case 0x121:
      key.value_.gc = (GCObject *)ls->t.seminfo.ts;
      key.tt_ = key.value_.gc->gch.tt | 0x40;
      v8 = addk(fs, &key, &key);
      *(_QWORD *)&t.t = -1i64;
      t.k = VK;
      t.u.info = v8;
      luaX_next(ls);
      break;
    default:
      lexerror(ls, "function arguments expected", token);
  }
  info = f->u.info;
  if ( (unsigned int)(t.k - 12) <= 1 )
  {
    v12 = -1;
  }
  else
  {
    if ( t.k )
      luaK_exp2nextreg(fs, &t);
    v12 = fs->freereg - info - 1;
  }
  f->u.info = luaK_code(fs, (info << 6) | ((v12 + 1) << 23) | 0x801Du);
  *(_QWORD *)&f->t = -1i64;
  f->k = VCALL;
  fs->f->lineinfo[fs->pc - 1] = line;
  fs->freereg = info + 1;
}

void __fastcall funcstat(LexState *ls, int line)
{
  bool v2; // zf
  Token lookahead; // xmm0
  int v6; // edi
  expdesc e; // [rsp+20h] [rbp-38h] BYREF
  expdesc var; // [rsp+30h] [rbp-28h] BYREF

  v2 = ls->lookahead.token == 286;
  ls->lastline = ls->linenumber;
  if ( v2 )
  {
    ls->t.token = llex(ls, &ls->t.seminfo);
  }
  else
  {
    lookahead = ls->lookahead;
    ls->lookahead.token = 286;
    ls->t = lookahead;
  }
  v6 = 0;
  singlevar(ls, &var);
  while ( ls->t.token == 46 )
    fieldsel(ls, &var);
  if ( ls->t.token == 58 )
  {
    v6 = 1;
    fieldsel(ls, &var);
  }
  body(ls, &e, v6, line);
  luaK_storevar(ls->fs, &var, &e);
  ls->fs->f->lineinfo[ls->fs->pc - 1] = line;
}

__int64 __fastcall getbinopr(int op)
{
  __int64 result; // rax

  switch ( op )
  {
    case 37:
      result = 4i64;
      break;
    case 42:
      result = 2i64;
      break;
    case 43:
      result = 0i64;
      break;
    case 45:
      result = 1i64;
      break;
    case 47:
      result = 3i64;
      break;
    case 60:
      result = 8i64;
      break;
    case 62:
      result = 11i64;
      break;
    case 94:
      result = 5i64;
      break;
    case 257:
      result = 13i64;
      break;
    case 272:
      result = 14i64;
      break;
    case 279:
      result = 6i64;
      break;
    case 281:
      result = 7i64;
      break;
    case 282:
      result = 12i64;
      break;
    case 283:
      result = 9i64;
      break;
    case 284:
      result = 10i64;
      break;
    default:
      result = 15i64;
      break;
  }
  return result;
}

void __fastcall gotostat(LexState *ls, int pc)
{
  bool v2; // zf
  int linenumber; // edi
  Token lookahead; // xmm0
  TString *v7; // rax
  Token v8; // xmm0
  int v9; // eax

  v2 = ls->t.token == 266;
  linenumber = ls->linenumber;
  ls->lastline = linenumber;
  if ( v2 )
  {
    if ( ls->lookahead.token == 286 )
    {
      ls->t.token = llex(ls, &ls->t.seminfo);
      v7 = str_checkname(ls);
    }
    else
    {
      lookahead = ls->lookahead;
      ls->lookahead.token = 286;
      ls->t = lookahead;
      v7 = str_checkname(ls);
    }
  }
  else
  {
    if ( ls->lookahead.token == 286 )
    {
      ls->t.token = llex(ls, &ls->t.seminfo);
    }
    else
    {
      v8 = ls->lookahead;
      ls->lookahead.token = 286;
      ls->t = v8;
    }
    v7 = luaS_newlstr(ls->L, "break", 5ui64);
  }
  v9 = newlabelentry(ls, &ls->dyd->gt, v7, linenumber, pc);
  findlabel(ls, v9);
}

void __fastcall _LN109_6(LexState *ls, int line)
{
  FuncState *fs; // rdi
  bool v5; // zf
  Token lookahead; // xmm0
  int v7; // er9
  int jpc; // edx
  unsigned int *code; // r8
  int v10; // ecx
  int escapelist; // [rsp+30h] [rbp+8h] BYREF

  fs = ls->fs;
  escapelist = -1;
  test_then_block(ls, &escapelist);
  while ( ls->t.token == 261 )
    test_then_block(ls, &escapelist);
  if ( ls->t.token == 260 )
  {
    v5 = ls->lookahead.token == 286;
    ls->lastline = ls->linenumber;
    if ( v5 )
    {
      ls->t.token = llex(ls, &ls->t.seminfo);
    }
    else
    {
      lookahead = ls->lookahead;
      ls->lookahead.token = 286;
      ls->t = lookahead;
    }
    block(ls);
  }
  check_match(ls, 262, 267, line);
  v7 = escapelist;
  fs->lasttarget = fs->pc;
  if ( v7 != -1 )
  {
    jpc = fs->jpc;
    if ( jpc == -1 )
    {
      fs->jpc = v7;
    }
    else
    {
      code = fs->f->code;
      while ( code[jpc] >> 14 != 131070 )
      {
        v10 = (code[jpc] >> 14) - 0x1FFFF;
        if ( jpc + v10 + 1 == -1 )
          break;
        jpc += v10 + 1;
      }
      fixjump(fs, jpc, v7);
    }
  }
}

void __fastcall labelstat(LexState *ls, TString *label, int line)
{
  Dyndata *dyd; // rdi
  FuncState *fs; // rbp
  bool v8; // zf
  Token lookahead; // xmm0
  __int64 v10; // rsi
  int token; // ecx
  const char *v12; // rax
  const char *v13; // rax

  dyd = ls->dyd;
  fs = ls->fs;
  checkrepeated(fs, &dyd->label, label);
  if ( ls->t.token != 285 )
  {
    v12 = luaO_pushfstring(
            ls->L,
            "'%s'",
            *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[9][152]);
    v13 = luaO_pushfstring(ls->L, "%s expected", v12);
    lexerror(ls, v13, (unsigned int)ls->t.token);
  }
  v8 = ls->lookahead.token == 286;
  ls->lastline = ls->linenumber;
  if ( v8 )
  {
    ls->t.token = llex(ls, &ls->t.seminfo);
  }
  else
  {
    lookahead = ls->lookahead;
    ls->lookahead.token = 286;
    ls->t = lookahead;
  }
  v10 = newlabelentry(ls, &dyd->label, label, line, fs->pc);
  while ( 1 )
  {
    token = ls->t.token;
    if ( token != 59 && token != 285 )
      break;
    statement(ls);
  }
  if ( (unsigned int)(token - 260) <= 2 || token == 286 )
    dyd->label.arr[v10].nactvar = fs->bl->nactvar;
  findgotos(ls, &dyd->label.arr[v10]);
}

void __fastcall leaveblock(FuncState *fs)
{
  BlockCnt *bl; // rsi
  LexState *ls; // rbp
  int v4; // edi
  TString *v5; // rax
  int v6; // eax
  unsigned int nactvar; // er9
  Dyndata *dyd; // rdx
  int firstgoto; // ecx
  __int64 v10; // rcx
  Labeldesc *arr; // rax
  TString *name; // r8
  const char *v13; // rdx
  const char *v14; // rax

  bl = fs->bl;
  ls = fs->ls;
  if ( bl->previous && bl->upval )
  {
    v4 = luaK_jump(fs);
    luaK_patchclose(fs, v4, bl->nactvar);
    luaK_patchtohere(fs, v4);
  }
  if ( bl->isloop )
  {
    v5 = luaS_newlstr(ls->L, "break", 5ui64);
    v6 = newlabelentry(ls, &ls->dyd->label, v5, 0, ls->fs->pc);
    findgotos(ls, &ls->dyd->label.arr[v6]);
  }
  fs->bl = bl->previous;
  nactvar = bl->nactvar;
  for ( fs->ls->dyd->actvar.n += nactvar - fs->nactvar;
        fs->nactvar > nactvar;
        fs->f->locvars[fs->ls->dyd->actvar.arr[fs->firstlocal + fs->nactvar].idx].endpc = fs->pc )
  {
    --fs->nactvar;
  }
  fs->freereg = fs->nactvar;
  ls->dyd->label.n = bl->firstlabel;
  if ( bl->previous )
  {
    movegotosout(fs, bl);
  }
  else
  {
    dyd = ls->dyd;
    firstgoto = bl->firstgoto;
    if ( firstgoto < dyd->gt.n )
    {
      v10 = (__int16)firstgoto;
      arr = dyd->gt.arr;
      name = arr[v10].name;
      if ( name->tsv.tt != 4 || (v13 = "<%s> at line %d not inside a loop", !name->tsv.extra) )
        v13 = "no visible label '%s' for <goto> at line %d";
      v14 = luaO_pushfstring(ls->L, v13, &name[1], (unsigned int)arr[v10].line);
      ls->t.token = 0;
      lexerror(ls, v14, 0i64);
    }
  }
}

void __fastcall localfunc(LexState *ls)
{
  FuncState *fs; // rdi
  TString *v3; // rax
  FuncState *v4; // r9
  expdesc e; // [rsp+20h] [rbp-18h] BYREF

  fs = ls->fs;
  v3 = str_checkname(ls);
  new_localvar(ls, v3);
  v4 = ls->fs;
  v4->f->locvars[v4->ls->dyd->actvar.arr[v4->firstlocal - 1 + ++v4->nactvar].idx].startpc = v4->pc;
  body(ls, &e, 0, ls->linenumber);
  fs->f->locvars[fs->ls->dyd->actvar.arr[e.u.info + fs->firstlocal].idx].startpc = fs->pc;
}

void __fastcall localstat(LexState *ls)
{
  int v1; // er14
  int v2; // esi
  bool v4; // zf
  TString *ts; // rbp
  Token lookahead; // xmm0
  int token; // eax
  Token v8; // xmm0
  Token v9; // xmm0
  FuncState *fs; // r9
  const char *v11; // rax
  expdesc v; // [rsp+20h] [rbp-38h] BYREF

  v1 = 0;
  v2 = 0;
  while ( 1 )
  {
    if ( ls->t.token != 288 )
    {
      v11 = luaO_pushfstring(
              ls->L,
              "%s expected",
              *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[9][176]);
      lexerror(ls, v11, (unsigned int)ls->t.token);
    }
    v4 = ls->lookahead.token == 286;
    ts = ls->t.seminfo.ts;
    ls->lastline = ls->linenumber;
    if ( v4 )
    {
      ls->t.token = llex(ls, &ls->t.seminfo);
    }
    else
    {
      lookahead = ls->lookahead;
      ls->lookahead.token = 286;
      ls->t = lookahead;
    }
    new_localvar(ls, ts);
    token = ls->t.token;
    ++v2;
    if ( token != 44 )
      break;
    v4 = ls->lookahead.token == 286;
    ls->lastline = ls->linenumber;
    if ( v4 )
    {
      ls->t.token = llex(ls, &ls->t.seminfo);
    }
    else
    {
      v8 = ls->lookahead;
      ls->lookahead.token = 286;
      ls->t = v8;
    }
  }
  if ( token == 61 )
  {
    v4 = ls->lookahead.token == 286;
    ls->lastline = ls->linenumber;
    if ( v4 )
    {
      ls->t.token = llex(ls, &ls->t.seminfo);
    }
    else
    {
      v9 = ls->lookahead;
      ls->lookahead.token = 286;
      ls->t = v9;
    }
    v1 = explist(ls, &v);
  }
  else
  {
    v.k = VVOID;
  }
  adjust_assign(ls, v2, v1, &v);
  fs = ls->fs;
  for ( fs->nactvar += v2; v2; --v2 )
    fs->f->locvars[fs->ls->dyd->actvar.arr[fs->firstlocal + fs->nactvar - v2].idx].startpc = fs->pc;
}

GCObject *__fastcall luaY_parser(lua_State *L, Zio *z, Mbuffer *buff, Dyndata *dyd, const char *name, int firstchar)
{
  GCObject *v10; // rdi
  lua_TValue *top; // rcx
  signed __int64 v12; // rcx
  Proto *v13; // rax
  unsigned __int64 v14; // r8
  Proto *f; // r9
  lua_State *v16; // rbx
  Proto *v17; // rcx
  lua_TValue *v18; // rdx
  __int64 v19; // rax
  Dyndata *v20; // rax
  __int16 v21; // cx
  int token; // eax
  const char *v24; // rax
  BlockCnt *bl; // [rsp+30h] [rbp-D0h] BYREF
  __int16 n; // [rsp+38h] [rbp-C8h]
  __int16 v27; // [rsp+3Ah] [rbp-C6h]
  unsigned __int8 nactvar; // [rsp+3Ch] [rbp-C4h]
  char v29; // [rsp+3Dh] [rbp-C3h]
  char v30; // [rsp+3Eh] [rbp-C2h]
  FuncState v31; // [rsp+40h] [rbp-C0h] BYREF
  expdesc v; // [rsp+90h] [rbp-70h] BYREF
  LexState ls; // [rsp+A0h] [rbp-60h] BYREF

  v10 = luaC_newobj(L, 6, 0x28ui64, 0i64);
  v10->u.uv.env = 0i64;
  v10->ts.tsv.extra = 1;
  v10->u.uv.len = 0i64;
  top = L->top;
  top->value_.gc = v10;
  top->tt_ = 70;
  v12 = (char *)L->stack_last - (char *)++L->top;
  if ( v12 < 0 || (v12 & 0xFFFFFFFFFFFFFFF0ui64) == 0 )
    luaD_growstack(L, 0);
  v13 = luaF_newproto(L);
  v14 = -1i64;
  v10->u.uv.env = (Table *)v13;
  v31.f = v13;
  do
    ++v14;
  while ( name[v14] );
  v31.f->source = luaS_newlstr(L, name, v14);
  f = v31.f;
  ls.buff = buff;
  ls.dyd = dyd;
  dyd->label.n = 0;
  dyd->gt.n = 0;
  dyd->actvar.n = 0;
  luaX_setinput(L, &ls, z, f->source, firstchar);
  v16 = ls.L;
  v31.prev = ls.fs;
  v31.ls = &ls;
  ls.fs = &v31;
  *(_QWORD *)&v31.pc = 0i64;
  v31.jpc = -1;
  *(_WORD *)&v31.nups = 0;
  *(_QWORD *)&v31.nk = 0i64;
  v31.nlocvars = 0;
  v31.nactvar = 0;
  v31.firstlocal = ls.dyd->actvar.n;
  v17 = v31.f;
  v31.bl = 0i64;
  v31.f->source = ls.source;
  v17->maxstacksize = 2;
  v31.h = luaH_new(v16);
  v18 = v16->top;
  v18->value_.gc = (GCObject *)v31.h;
  v18->tt_ = 69;
  v19 = (char *)v16->stack_last - (char *)++v16->top;
  if ( v19 < 0 || (v19 & 0xFFFFFFFFFFFFFFF0ui64) == 0 )
    luaD_growstack(v16, 0);
  nactvar = v31.nactvar;
  v30 = 0;
  v20 = v31.ls->dyd;
  *(_QWORD *)&v.t = -1i64;
  *(_QWORD *)&v.k = 7i64;
  n = v20->label.n;
  v21 = v31.ls->dyd->gt.n;
  bl = v31.bl;
  v31.bl = (BlockCnt *)&bl;
  v27 = v21;
  v29 = 0;
  v31.f->is_vararg = 1;
  newupvalue(&v31, ls.envn, &v);
  ls.lastline = ls.linenumber;
  if ( ls.lookahead.token == 286 )
  {
    token = llex(&ls, &ls.t.seminfo);
    ls.t.token = token;
  }
  else
  {
    ls.t = ls.lookahead;
    token = ls.lookahead.token;
    ls.lookahead.token = 286;
  }
  while ( 1 )
  {
    if ( token >= 260 )
    {
      if ( token <= 262 )
        goto LABEL_17;
      if ( token == 277 )
        goto LABEL_19;
      if ( token == 286 )
        goto LABEL_18;
    }
    if ( token == 274 )
      break;
    statement(&ls);
    token = ls.t.token;
  }
  statement(&ls);
  token = ls.t.token;
LABEL_17:
  if ( token != 286 )
  {
LABEL_19:
    v24 = luaO_pushfstring(
            ls.L,
            "%s expected",
            *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[9][160]);
    lexerror(&ls, v24, (unsigned int)ls.t.token);
  }
LABEL_18:
  close_func(&ls);
  return v10;
}

void __fastcall movegotosout(FuncState *fs, BlockCnt *bl)
{
  __int64 firstgoto; // rbx
  Dyndata *dyd; // r15
  __int64 v6; // rdi
  Labeldesc *arr; // r11
  unsigned __int8 nactvar; // cl
  int pc; // eax
  unsigned __int8 v10; // cl
  int v11; // er10
  unsigned int *code; // rdx
  unsigned int v13; // ecx
  unsigned int *v14; // r9

  firstgoto = bl->firstgoto;
  dyd = fs->ls->dyd;
  if ( (int)firstgoto < dyd->gt.n )
  {
    v6 = firstgoto;
    do
    {
      arr = dyd->gt.arr;
      nactvar = bl->nactvar;
      if ( arr[v6].nactvar > nactvar )
      {
        if ( bl->upval )
        {
          pc = arr[v6].pc;
          v10 = nactvar + 1;
          if ( pc != -1 )
          {
            v11 = v10 << 6;
            do
            {
              code = fs->f->code;
              v13 = code[pc];
              v14 = &code[pc];
              if ( v13 >> 14 == 131070 )
                pc = -1;
              else
                pc += (v13 >> 14) - 0x1FFFF + 1;
              *v14 = v11 | v13 & 0xFFFFC03F;
            }
            while ( pc != -1 );
          }
        }
        arr[v6].nactvar = bl->nactvar;
      }
      if ( !(unsigned int)findlabel(fs->ls, firstgoto) )
      {
        LODWORD(firstgoto) = firstgoto + 1;
        ++v6;
      }
    }
    while ( (int)firstgoto < dyd->gt.n );
  }
}

void __fastcall new_localvar(LexState *ls, TString *name)
{
  FuncState *fs; // rdi
  Dyndata *dyd; // rbx
  __int16 v5; // bp
  lua_State *L; // rbx
  __int64 linedefined; // r8
  const char *v8; // rax
  const char *v9; // rax

  fs = ls->fs;
  dyd = ls->dyd;
  v5 = registerlocalvar(ls, name);
  if ( dyd->actvar.n - fs->firstlocal + 1 > 200 )
  {
    L = fs->ls->L;
    linedefined = (unsigned int)fs->f->linedefined;
    if ( (_DWORD)linedefined )
      v8 = luaO_pushfstring(fs->ls->L, "function at line %d", linedefined);
    else
      v8 = "main function";
    v9 = luaO_pushfstring(L, "too many %s (limit is %d) in %s", "local variables", 200i64, v8);
    lexerror(fs->ls, v9, (unsigned int)fs->ls->t.token);
  }
  if ( dyd->actvar.n + 2 > dyd->actvar.size )
    dyd->actvar.arr = (Vardesc *)luaM_growaux_(
                                   ls->L,
                                   dyd->actvar.arr,
                                   &dyd->actvar.size,
                                   2ui64,
                                   2147483645,
                                   "local variables");
  dyd->actvar.arr[dyd->actvar.n++].idx = v5;
}

__int64 __fastcall newlabelentry(LexState *ls, Labellist *l, TString *name, int line, int pc)
{
  __int64 n; // rdi
  __int64 v10; // r8
  __int64 result; // rax

  n = l->n;
  if ( (int)n + 1 > l->size )
    l->arr = (Labeldesc *)luaM_growaux_(ls->L, l->arr, &l->size, 0x18ui64, 0x7FFF, "labels/gotos");
  v10 = n;
  result = (unsigned int)n;
  l->arr[v10].name = name;
  l->arr[v10].line = line;
  l->arr[v10].nactvar = ls->fs->nactvar;
  l->arr[v10].pc = pc;
  ++l->n;
  return result;
}

__int64 __fastcall newupvalue(FuncState *fs, TString *name, expdesc *v)
{
  Proto *f; // rdi
  int v6; // eax
  __int64 sizeupvalues; // rbx
  LexState *ls; // rax
  __int64 linedefined; // r8
  lua_State *L; // rbx
  const char *v12; // rax
  __int64 v13; // rcx
  unsigned __int8 marked; // dl
  lua_State *v15; // rcx
  global_State *l_G; // rax
  __int64 result; // rax
  const char *v18; // rax

  f = fs->f;
  v6 = fs->nups + 1;
  sizeupvalues = fs->f->sizeupvalues;
  if ( (unsigned int)v6 > 0xFF )
  {
    ls = fs->ls;
    linedefined = (unsigned int)f->linedefined;
    L = ls->L;
    if ( (_DWORD)linedefined )
      v12 = luaO_pushfstring(ls->L, "function at line %d", linedefined);
    else
      v12 = "main function";
    v18 = luaO_pushfstring(L, "too many %s (limit is %d) in %s", "upvalues", 255i64, v12);
    lexerror(fs->ls, v18, (unsigned int)fs->ls->t.token);
  }
  if ( v6 > (int)sizeupvalues )
    f->upvalues = (Upvaldesc *)luaM_growaux_(fs->ls->L, f->upvalues, &f->sizeupvalues, 0x10ui64, 255, "upvalues");
  if ( (int)sizeupvalues < f->sizeupvalues )
  {
    v13 = sizeupvalues;
    do
    {
      ++v13;
      LODWORD(sizeupvalues) = sizeupvalues + 1;
      f->upvalues[v13 - 1].name = 0i64;
    }
    while ( (int)sizeupvalues < f->sizeupvalues );
  }
  f->upvalues[fs->nups].instack = v->k == VLOCAL;
  f->upvalues[fs->nups].idx = LOBYTE(v->u.nval);
  f->upvalues[fs->nups].name = name;
  if ( (name->tsv.marked & 3) != 0 )
  {
    marked = f->marked;
    if ( (marked & 4) != 0 )
    {
      v15 = fs->ls->L;
      l_G = v15->l_G;
      if ( l_G->gcstate > 1u )
        f->marked = marked & 0xB8 | l_G->currentwhite & 3;
      else
        reallymarkobject(v15->l_G, (GCObject *)name);
    }
  }
  result = fs->nups;
  fs->nups = result + 1;
  return result;
}

void __fastcall open_func(LexState *ls, FuncState *fs, BlockCnt *bl)
{
  FuncState *v3; // rax
  lua_State *L; // rsi
  Proto *f; // rcx
  Table *v9; // rax
  lua_TValue *top; // rdx
  __int64 v11; // rax

  v3 = ls->fs;
  L = ls->L;
  fs->ls = ls;
  fs->prev = v3;
  ls->fs = fs;
  *(_QWORD *)&fs->pc = 0i64;
  *(_WORD *)&fs->nups = 0;
  *(_QWORD *)&fs->nk = 0i64;
  fs->nlocvars = 0;
  fs->nactvar = 0;
  fs->jpc = -1;
  fs->firstlocal = ls->dyd->actvar.n;
  f = fs->f;
  fs->bl = 0i64;
  f->source = ls->source;
  f->maxstacksize = 2;
  v9 = luaH_new(L);
  fs->h = v9;
  top = L->top;
  top->value_.gc = (GCObject *)v9;
  top->tt_ = 69;
  v11 = (char *)L->stack_last - (char *)++L->top;
  if ( v11 < 0 || (v11 & 0xFFFFFFFFFFFFFFF0ui64) == 0 )
    luaD_growstack(L, 0);
  bl->isloop = 0;
  bl->nactvar = fs->nactvar;
  bl->firstlabel = fs->ls->dyd->label.n;
  bl->firstgoto = fs->ls->dyd->gt.n;
  bl->upval = 0;
  bl->previous = fs->bl;
  fs->bl = bl;
}

void __fastcall parlist(LexState *ls)
{
  FuncState *fs; // rsi
  int v2; // edi
  Proto *f; // rbp
  TString *v5; // rax
  bool v6; // zf
  Token lookahead; // xmm0
  Token v8; // xmm0
  FuncState *v9; // r9
  int nactvar; // edx
  int v11; // ecx

  fs = ls->fs;
  v2 = 0;
  f = fs->f;
  fs->f->is_vararg = 0;
  if ( ls->t.token != 41 )
  {
    while ( ls->t.token != 280 )
    {
      if ( ls->t.token != 288 )
        lexerror(ls, "<name> or '...' expected", (unsigned int)ls->t.token);
      v5 = str_checkname(ls);
      new_localvar(ls, v5);
      ++v2;
      if ( f->is_vararg || ls->t.token != 44 )
        goto LABEL_13;
      v6 = ls->lookahead.token == 286;
      ls->lastline = ls->linenumber;
      if ( v6 )
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
    v6 = ls->lookahead.token == 286;
    ls->lastline = ls->linenumber;
    if ( v6 )
    {
      ls->t.token = llex(ls, &ls->t.seminfo);
    }
    else
    {
      v8 = ls->lookahead;
      ls->lookahead.token = 286;
      ls->t = v8;
    }
    f->is_vararg = 1;
  }
LABEL_13:
  v9 = ls->fs;
  for ( v9->nactvar += v2; v2; --v2 )
    v9->f->locvars[v9->ls->dyd->actvar.arr[v9->firstlocal + v9->nactvar - v2].idx].startpc = v9->pc;
  f->numparams = fs->nactvar;
  nactvar = fs->nactvar;
  v11 = nactvar + fs->freereg;
  if ( v11 > fs->f->maxstacksize )
  {
    if ( v11 >= 250 )
      lexerror(fs->ls, "function or expression too complex", (unsigned int)fs->ls->t.token);
    fs->f->maxstacksize = v11;
  }
  fs->freereg += nactvar;
}

void __fastcall primaryexp(LexState *ls, expdesc *v)
{
  unsigned __int64 token; // r8
  bool v5; // zf
  int linenumber; // esi
  Token lookahead; // xmm0

  token = (unsigned int)ls->t.token;
  if ( (_DWORD)token == 40 )
  {
    v5 = ls->lookahead.token == 286;
    linenumber = ls->linenumber;
    ls->lastline = linenumber;
    if ( v5 )
    {
      ls->t.token = llex(ls, &ls->t.seminfo);
    }
    else
    {
      lookahead = ls->lookahead;
      ls->lookahead.token = 286;
      ls->t = lookahead;
    }
    subexpr(ls, v, 0);
    check_match(ls, 41, 40, linenumber);
    luaK_dischargevars(ls->fs, v);
  }
  else
  {
    if ( (_DWORD)token != 288 )
      lexerror(ls, "unexpected symbol", token);
    singlevar(ls, v);
  }
}

void __fastcall recfield(LexState *ls, ConsControl *cc)
{
  FuncState *fs; // rsi
  unsigned __int8 freereg; // r14
  lua_State *L; // rbx
  __int64 linedefined; // r8
  const char *v8; // rax
  TString *v9; // rax
  FuncState *v10; // rcx
  bool v11; // zf
  Token lookahead; // xmm0
  int v13; // ebx
  int v14; // eax
  const char *v15; // rax
  const char *v16; // rax
  const char *v17; // rax
  lua_TValue key; // [rsp+30h] [rbp-58h] BYREF
  expdesc v; // [rsp+40h] [rbp-48h] BYREF
  expdesc e; // [rsp+50h] [rbp-38h] BYREF

  fs = ls->fs;
  freereg = fs->freereg;
  if ( ls->t.token == 288 )
  {
    if ( cc->nh > 2147483645 )
    {
      L = fs->ls->L;
      linedefined = (unsigned int)fs->f->linedefined;
      if ( (_DWORD)linedefined )
        v8 = luaO_pushfstring(fs->ls->L, "function at line %d", linedefined);
      else
        v8 = "main function";
      v15 = luaO_pushfstring(L, "too many %s (limit is %d) in %s", "items in a constructor", 2147483645i64, v8);
      lexerror(fs->ls, v15, (unsigned int)fs->ls->t.token);
    }
    v9 = str_checkname(ls);
    v10 = ls->fs;
    key.value_.gc = (GCObject *)v9;
    key.tt_ = v9->tsv.tt | 0x40;
    v.u.info = addk(v10, &key, &key);
    *(_QWORD *)&v.t = -1i64;
    v.k = VK;
  }
  else
  {
    yindex(ls, &v);
  }
  ++cc->nh;
  if ( ls->t.token != 61 )
  {
    v16 = luaO_pushfstring(ls->L, "'%c'", 61i64);
    v17 = luaO_pushfstring(ls->L, "%s expected", v16);
    lexerror(ls, v17, (unsigned int)ls->t.token);
  }
  v11 = ls->lookahead.token == 286;
  ls->lastline = ls->linenumber;
  if ( v11 )
  {
    ls->t.token = llex(ls, &ls->t.seminfo);
  }
  else
  {
    lookahead = ls->lookahead;
    ls->lookahead.token = 286;
    ls->t = lookahead;
  }
  v13 = luaK_exp2RK(fs, &v);
  subexpr(ls, &e, 0);
  v14 = luaK_exp2RK(fs, &e);
  luaK_code(fs, ((cc->t->u.info | ((v14 | (v13 << 9)) << 8)) << 6) | 0xA);
  fs->freereg = freereg;
}

__int64 __fastcall registerlocalvar(LexState *ls, TString *varname)
{
  FuncState *fs; // r14
  Proto *f; // rdi
  __int64 sizelocvars; // rbx
  __int64 v7; // rcx
  unsigned __int8 marked; // dl
  global_State *l_G; // rcx

  fs = ls->fs;
  f = fs->f;
  sizelocvars = fs->f->sizelocvars;
  if ( fs->nlocvars + 1 > (int)sizelocvars )
    f->locvars = (LocVar *)luaM_growaux_(ls->L, f->locvars, &f->sizelocvars, 0x10ui64, 0x7FFF, "local variables");
  if ( (int)sizelocvars < f->sizelocvars )
  {
    v7 = sizelocvars;
    do
    {
      ++v7;
      LODWORD(sizelocvars) = sizelocvars + 1;
      f->locvars[v7 - 1].varname = 0i64;
    }
    while ( (int)sizelocvars < f->sizelocvars );
  }
  f->locvars[fs->nlocvars].varname = varname;
  if ( (varname->tsv.marked & 3) != 0 )
  {
    marked = f->marked;
    if ( (marked & 4) != 0 )
    {
      l_G = ls->L->l_G;
      if ( l_G->gcstate > 1u )
        f->marked = marked & 0xB8 | l_G->currentwhite & 3;
      else
        reallymarkobject(l_G, (GCObject *)varname);
    }
  }
  return (unsigned int)fs->nlocvars++;
}

void __fastcall repeatstat(LexState *ls, int line)
{
  FuncState *fs; // rdi
  int pc; // ebp
  bool v6; // zf
  Token lookahead; // xmm0
  expkind k; // eax
  FuncState *v9; // rcx
  int f; // ebx
  int v11; // er8
  int v12; // er10
  unsigned int *code; // rcx
  unsigned int v14; // eax
  unsigned int *v15; // r9
  BlockCnt *v16; // [rsp+20h] [rbp-58h] BYREF
  __int16 v17; // [rsp+28h] [rbp-50h]
  __int16 v18; // [rsp+2Ah] [rbp-4Eh]
  unsigned __int8 v19; // [rsp+2Ch] [rbp-4Ch]
  char v20; // [rsp+2Dh] [rbp-4Bh]
  char v21; // [rsp+2Eh] [rbp-4Ah]
  BlockCnt *bl; // [rsp+30h] [rbp-48h] BYREF
  __int16 n; // [rsp+38h] [rbp-40h]
  __int16 v24; // [rsp+3Ah] [rbp-3Eh]
  unsigned __int8 nactvar; // [rsp+3Ch] [rbp-3Ch]
  char v26; // [rsp+3Dh] [rbp-3Bh]
  char v27; // [rsp+3Eh] [rbp-3Ah]
  expdesc v; // [rsp+40h] [rbp-38h] BYREF

  fs = ls->fs;
  pc = fs->pc;
  fs->lasttarget = pc;
  v27 = 1;
  nactvar = fs->nactvar;
  n = fs->ls->dyd->label.n;
  v24 = fs->ls->dyd->gt.n;
  v26 = 0;
  bl = fs->bl;
  fs->bl = (BlockCnt *)&bl;
  v21 = 0;
  v19 = fs->nactvar;
  v17 = fs->ls->dyd->label.n;
  v18 = fs->ls->dyd->gt.n;
  v20 = 0;
  v16 = fs->bl;
  fs->bl = (BlockCnt *)&v16;
  v6 = ls->lookahead.token == 286;
  ls->lastline = ls->linenumber;
  if ( v6 )
  {
    ls->t.token = llex(ls, &ls->t.seminfo);
  }
  else
  {
    lookahead = ls->lookahead;
    ls->lookahead.token = 286;
    ls->t = lookahead;
  }
  statlist(ls);
  check_match(ls, 277, 273, line);
  subexpr(ls, &v, 0);
  k = v.k;
  if ( v.k == VNIL )
    k = VFALSE;
  v9 = ls->fs;
  v.k = k;
  luaK_goiftrue(v9, &v);
  f = v.f;
  if ( v20 )
  {
    v11 = v.f;
    if ( v.f != -1 )
    {
      v12 = (unsigned __int8)(v19 + 1) << 6;
      do
      {
        code = fs->f->code;
        v14 = code[v11];
        v15 = &code[v11];
        if ( v14 >> 14 == 131070 )
          v11 = -1;
        else
          v11 += (v14 >> 14) - 0x1FFFF + 1;
        *v15 = v12 | v14 & 0xFFFFC03F;
      }
      while ( v11 != -1 );
    }
  }
  leaveblock(fs);
  luaK_patchlist(fs, f, pc);
  leaveblock(fs);
}

void __fastcall retstat(LexState *ls)
{
  int token; // eax
  FuncState *fs; // rbx
  int v4; // edx
  int v5; // eax
  int v6; // esi
  int nactvar; // eax
  int info; // er8
  int v9; // ecx
  bool v10; // zf
  Token lookahead; // xmm0
  expdesc v; // [rsp+20h] [rbp-28h] BYREF

  token = ls->t.token;
  fs = ls->fs;
  if ( (unsigned int)(token - 260) <= 0x1A && (v4 = 67239943, _bittest(&v4, token - 260)) || token == 59 )
  {
    v6 = 0;
    nactvar = 0;
  }
  else
  {
    v5 = explist(ls, &v);
    v6 = v5;
    if ( (unsigned int)(v.k - 12) <= 1 )
    {
      luaK_setreturns(fs, &v, -1);
      if ( v.k == VCALL && v6 == 1 )
        fs->f->code[v.u.info] = fs->f->code[v.u.info] & 0xFFFFFFC0 | 0x1E;
      nactvar = fs->nactvar;
      v6 = -1;
    }
    else if ( v5 == 1 )
    {
      luaK_dischargevars(fs, &v);
      if ( v.k != VNONRELOC )
        goto LABEL_10;
      if ( v.t == v.f )
      {
        nactvar = v.u.info;
        goto LABEL_25;
      }
      info = v.u.info;
      if ( v.u.info < fs->nactvar )
      {
LABEL_10:
        luaK_dischargevars(fs, &v);
        if ( v.k == VNONRELOC && (v.u.ind.idx & 0x100) == 0 && v.u.info >= fs->nactvar )
          --fs->freereg;
        v9 = fs->freereg + 1;
        if ( v9 > fs->f->maxstacksize )
        {
          if ( v9 >= 250 )
            lexerror(fs->ls, "function or expression too complex", (unsigned int)fs->ls->t.token);
          fs->f->maxstacksize = v9;
        }
        info = fs->freereg++;
      }
      exp2reg(fs, &v, info);
      nactvar = v.u.info;
    }
    else
    {
      luaK_exp2nextreg(fs, &v);
      nactvar = fs->nactvar;
    }
  }
LABEL_25:
  luaK_code(fs, (nactvar << 6) | ((v6 + 1) << 23) | 0x1F);
  if ( ls->t.token == 59 )
  {
    v10 = ls->lookahead.token == 286;
    ls->lastline = ls->linenumber;
    if ( v10 )
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
}

__int64 __fastcall searchupvalue(FuncState *fs, TString *name)
{
  unsigned int v2; // ebp
  Upvaldesc *upvalues; // rsi
  unsigned __int8 tt; // r15
  __int64 nups; // r14
  __int64 i; // rdi
  TString *v8; // rcx
  unsigned __int8 v9; // al
  size_t len; // r8

  v2 = 0;
  upvalues = fs->f->upvalues;
  if ( fs->nups )
  {
    tt = name->tsv.tt;
    nups = fs->nups;
    for ( i = 0i64; i < nups; ++i )
    {
      v8 = upvalues->name;
      v9 = upvalues->name->tsv.tt;
      if ( v9 == tt )
      {
        if ( v9 == 4 )
        {
          if ( v8 == name )
            return v2;
        }
        else
        {
          len = v8->tsv.len;
          if ( v8 == name || len == name->tsv.len && !memcmp(&v8[1], &name[1], len) )
            return v2;
        }
      }
      ++v2;
      ++upvalues;
    }
  }
  return 0xFFFFFFFFi64;
}

__int64 __fastcall searchvar(FuncState *fs, TString *n)
{
  int v3; // edi
  unsigned __int8 tt; // r14
  __int64 v5; // rsi
  LocVar *locvars; // r15
  Vardesc *v7; // rbp
  TString *varname; // rdx
  unsigned __int64 len; // r8

  v3 = fs->nactvar - 1;
  if ( v3 >= 0 )
  {
    tt = n->tsv.tt;
    v5 = v3;
    locvars = fs->f->locvars;
    v7 = &fs->ls->dyd->actvar.arr[v3 + (__int64)fs->firstlocal];
    do
    {
      varname = locvars[v7->idx].varname;
      if ( tt == varname->tsv.tt )
      {
        if ( tt == 4 )
        {
          if ( n == varname )
            return (unsigned int)v3;
        }
        else
        {
          len = n->tsv.len;
          if ( n == varname || len == varname->tsv.len && !memcmp(&n[1], &varname[1], len) )
            return (unsigned int)v3;
        }
      }
      --v3;
      --v7;
      --v5;
    }
    while ( v5 >= 0 );
  }
  return 0xFFFFFFFFi64;
}

void __fastcall simpleexp(LexState *ls, expdesc *v)
{
  unsigned int token; // ecx
  float r; // eax
  bool v6; // zf
  Token lookahead; // xmm0

  token = ls->t.token;
  switch ( token )
  {
    case 0x7Bu:
      constructor(ls, v);
      return;
    case 0x107u:
      *(_QWORD *)&v->t = -1i64;
      *(_QWORD *)&v->k = 3i64;
      goto LABEL_10;
    case 0x109u:
      luaX_next(ls);
      body(ls, v, 0, ls->linenumber);
      return;
    case 0x10Eu:
      *(_QWORD *)&v->t = -1i64;
      *(_QWORD *)&v->k = 1i64;
      goto LABEL_10;
    case 0x114u:
      *(_QWORD *)&v->t = -1i64;
      *(_QWORD *)&v->k = 2i64;
      goto LABEL_10;
    case 0x118u:
      if ( !ls->fs->f->is_vararg )
        lexerror(ls, "cannot use '...' outside a vararg function", token);
      LODWORD(r) = luaK_code(ls->fs, 0x800026u);
      *(_QWORD *)&v->t = -1i64;
      v->k = VVARARG;
      goto LABEL_9;
    case 0x11Fu:
      *(_QWORD *)&v->t = -1i64;
      *(_QWORD *)&v->k = 5i64;
      r = ls->t.seminfo.r;
LABEL_9:
      v->u.nval = r;
      goto LABEL_10;
    case 0x121u:
      codestring(ls, v, ls->t.seminfo.ts);
LABEL_10:
      v6 = ls->lookahead.token == 286;
      ls->lastline = ls->linenumber;
      if ( v6 )
      {
        ls->t.token = llex(ls, &ls->t.seminfo);
      }
      else
      {
        lookahead = ls->lookahead;
        ls->lookahead.token = 286;
        ls->t = lookahead;
      }
      break;
    default:
      suffixedexp(ls, v);
      break;
  }
}

void __fastcall singlevar(LexState *ls, expdesc *var)
{
  TString *v4; // rax
  FuncState *fs; // rbp
  Value v6; // rsi
  FuncState *v7; // rcx
  int v8; // eax
  __int16 v9; // ax
  bool v10; // zf
  expdesc e; // [rsp+20h] [rbp-28h] BYREF
  lua_TValue key; // [rsp+30h] [rbp-18h] BYREF

  v4 = str_checkname(ls);
  fs = ls->fs;
  v6.gc = (GCObject *)v4;
  if ( !singlevaraux(fs, v4, var, 1) )
  {
    singlevaraux(fs, ls->envn, var, 1);
    v7 = ls->fs;
    v8 = v6.gc->gch.tt | 0x40;
    key.value_ = v6;
    key.tt_ = v8;
    *(_QWORD *)&e.t = -1i64;
    e.k = VK;
    e.u.info = addk(v7, &key, &key);
    var->u.ind.t = LOBYTE(var->u.nval);
    v9 = luaK_exp2RK(fs, &e);
    v10 = var->k == VUPVAL;
    var->u.ind.idx = v9;
    var->k = VINDEXED;
    var->u.ind.vt = v10 + 7;
  }
}

__int64 __fastcall singlevaraux(FuncState *fs, TString *n, expdesc *var, int base)
{
  __int64 result; // rax
  int v9; // eax
  BlockCnt *i; // rdx
  int v11; // eax

  if ( !fs )
    return 0i64;
  v9 = searchvar(fs, n);
  if ( v9 < 0 )
  {
    v11 = searchupvalue(fs, n);
    if ( v11 < 0 )
    {
      if ( !singlevaraux(fs->prev, n, var, 0) )
        return 0i64;
      v11 = newupvalue(fs, n, var);
    }
    var->u.info = v11;
    result = 8i64;
    *(_QWORD *)&var->t = -1i64;
    var->k = VUPVAL;
  }
  else
  {
    *(_QWORD *)&var->t = -1i64;
    var->k = VLOCAL;
    var->u.info = v9;
    if ( !base )
    {
      for ( i = fs->bl; i->nactvar > v9; i = i->previous )
        ;
      i->upval = 1;
    }
    return 7i64;
  }
  return result;
}

void __fastcall statement(LexState *ls)
{
  int linenumber; // edi
  int v3; // edx
  TString *v4; // rax
  int v5; // eax

  linenumber = ls->linenumber;
  enterlevel(ls);
  switch ( ls->t.token )
  {
    case 0x3B:
      luaX_next(ls);
      break;
    case 0x102:
    case 0x10A:
      v5 = luaK_jump(ls->fs);
      gotostat(ls, v5);
      break;
    case 0x103:
      luaX_next(ls);
      block(ls);
      check_match(ls, 262, 259, linenumber);
      break;
    case 0x108:
      forstat(ls, linenumber);
      break;
    case 0x109:
      funcstat(ls, linenumber);
      break;
    case 0x10B:
      _LN109_6(ls, linenumber);
      break;
    case 0x10D:
      luaX_next(ls);
      if ( ls->t.token == 265 && testnext(ls, v3) )
        localfunc(ls);
      else
        localstat(ls);
      break;
    case 0x111:
      repeatstat(ls, linenumber);
      break;
    case 0x112:
      luaX_next(ls);
      retstat(ls);
      break;
    case 0x116:
      whilestat(ls, linenumber);
      break;
    case 0x11D:
      luaX_next(ls);
      v4 = str_checkname(ls);
      labelstat(ls, v4, linenumber);
      break;
    default:
      exprstat(ls);
      break;
  }
  ls->fs->freereg = ls->fs->nactvar;
  --ls->L->nCcalls;
}

void __fastcall statlist(LexState *ls)
{
  if ( !(unsigned int)block_follow(ls, 1) )
  {
    while ( ls->t.token != 274 )
    {
      statement(ls);
      if ( (unsigned int)block_follow(ls, 1) )
        return;
    }
    statement(ls);
  }
}

TString *__fastcall str_checkname(LexState *ls)
{
  bool v2; // zf
  TString *ts; // rdi
  Token lookahead; // xmm0
  TString *result; // rax
  const char *v6; // rax

  if ( ls->t.token != 288 )
  {
    v6 = luaO_pushfstring(
           ls->L,
           "%s expected",
           *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[9][176]);
    lexerror(ls, v6, (unsigned int)ls->t.token);
  }
  v2 = ls->lookahead.token == 286;
  ts = ls->t.seminfo.ts;
  ls->lastline = ls->linenumber;
  if ( v2 )
  {
    ls->t.token = llex(ls, &ls->t.seminfo);
    return ts;
  }
  else
  {
    lookahead = ls->lookahead;
    result = ts;
    ls->lookahead.token = 286;
    ls->t = lookahead;
  }
  return result;
}

__int64 __fastcall subexpr(LexState *ls, expdesc *v, int limit)
{
  int token; // eax
  UnOpr v6; // edi
  bool v7; // zf
  int linenumber; // ebp
  Token lookahead; // xmm0
  int v10; // ebp
  __int64 v11; // rdi
  Token v12; // xmm0
  FuncState *fs; // rcx
  BinOpr v14; // edi
  int line; // [rsp+34h] [rbp-34h]
  expdesc va; // [rsp+38h] [rbp-30h] BYREF

  enterlevel(ls);
  token = ls->t.token;
  switch ( token )
  {
    case 35:
      v6 = OPR_LEN;
      break;
    case 45:
      v6 = OPR_MINUS;
      break;
    case 271:
      v6 = OPR_NOT;
      break;
    default:
      simpleexp(ls, v);
      goto LABEL_12;
  }
  v7 = ls->lookahead.token == 286;
  linenumber = ls->linenumber;
  ls->lastline = linenumber;
  if ( v7 )
  {
    ls->t.token = llex(ls, &ls->t.seminfo);
  }
  else
  {
    lookahead = ls->lookahead;
    ls->lookahead.token = 286;
    ls->t = lookahead;
  }
  subexpr(ls, v, 8);
  luaK_prefix(ls->fs, v6, v, linenumber);
LABEL_12:
  v10 = getbinopr(ls->t.token);
  if ( v10 != 15 )
  {
    while ( 1 )
    {
      v11 = 2i64 * v10;
      if ( (unsigned __int8)extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[12][v11 + 232] <= limit )
        goto LABEL_30;
      v7 = ls->lookahead.token == 286;
      line = ls->linenumber;
      ls->lastline = line;
      if ( v7 )
      {
        ls->t.token = llex(ls, &ls->t.seminfo);
      }
      else
      {
        v12 = ls->lookahead;
        ls->lookahead.token = 286;
        ls->t = v12;
      }
      fs = ls->fs;
      if ( v10 < 0 )
        goto LABEL_28;
      if ( v10 <= 5 )
        break;
      switch ( v10 )
      {
        case 6:
          luaK_exp2nextreg(fs, v);
          break;
        case 13:
          luaK_goiftrue(fs, v);
          break;
        case 14:
          luaK_goiffalse(fs, v);
          break;
        default:
          goto LABEL_28;
      }
LABEL_29:
      v14 = subexpr(
              ls,
              &va,
              (unsigned __int8)extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[12][v11 + 233]);
      luaK_posfix(ls->fs, (BinOpr)v10, v, &va, line);
      v10 = v14;
      if ( v14 == OPR_NOBINOPR )
        goto LABEL_30;
    }
    if ( v->k == VKNUM && v->t == -1 && v->f == -1 )
      goto LABEL_29;
LABEL_28:
    luaK_exp2RK(fs, v);
    goto LABEL_29;
  }
LABEL_30:
  --ls->L->nCcalls;
  return (unsigned int)v10;
}

void __fastcall suffixedexp(LexState *ls, expdesc *v)
{
  FuncState *fs; // rsi
  int linenumber; // ebp
  unsigned int v6; // eax
  __int16 v7; // ax
  bool v8; // zf
  Token lookahead; // xmm0
  TString *v10; // rax
  FuncState *v11; // rcx
  expdesc v12; // [rsp+20h] [rbp-58h] BYREF
  lua_TValue key; // [rsp+30h] [rbp-48h] BYREF
  expdesc va; // [rsp+40h] [rbp-38h] BYREF

  fs = ls->fs;
  linenumber = ls->linenumber;
  primaryexp(ls, v);
  v6 = ls->t.token - 40;
  while ( 2 )
  {
    switch ( v6 )
    {
      case 0u:
      case 0x53u:
      case 0xF9u:
        luaK_exp2nextreg(fs, v);
        goto LABEL_10;
      case 6u:
        fieldsel(ls, v);
        goto LABEL_11;
      case 0x12u:
        v8 = ls->lookahead.token == 286;
        ls->lastline = ls->linenumber;
        if ( v8 )
        {
          ls->t.token = llex(ls, &ls->t.seminfo);
        }
        else
        {
          lookahead = ls->lookahead;
          ls->lookahead.token = 286;
          ls->t = lookahead;
        }
        v10 = str_checkname(ls);
        v11 = ls->fs;
        key.value_.gc = (GCObject *)v10;
        *(_QWORD *)&v12.t = -1i64;
        LODWORD(v10) = v10->tsv.tt | 0x40;
        v12.k = VK;
        key.tt_ = (int)v10;
        v12.u.info = addk(v11, &key, &key);
        luaK_self(fs, v, &v12);
LABEL_10:
        funcargs(ls, v, linenumber);
        goto LABEL_11;
      case 0x33u:
        luaK_exp2anyregup(fs, v);
        yindex(ls, &va);
        v->u.ind.t = LOBYTE(v->u.nval);
        v7 = luaK_exp2RK(fs, &va);
        v8 = v->k == VUPVAL;
        v->u.ind.idx = v7;
        v->k = VINDEXED;
        v->u.ind.vt = v8 + 7;
LABEL_11:
        v6 = ls->t.token - 40;
        if ( v6 > 0xF9 )
          return;
        continue;
      default:
        return;
    }
  }
}

void __fastcall test_then_block(LexState *ls, int *escapelist)
{
  bool v2; // zf
  FuncState *fs; // rdi
  Token lookahead; // xmm0
  Token v7; // xmm0
  FuncState *v8; // rcx
  int f; // esi
  int token; // eax
  int v11; // eax
  int v12; // edx
  unsigned int *code; // r8
  int v14; // ecx
  int jpc; // edx
  unsigned int *v16; // r8
  int v17; // ecx
  const char *v18; // rax
  const char *v19; // rax
  BlockCnt *bl; // [rsp+20h] [rbp-48h] BYREF
  __int16 n; // [rsp+28h] [rbp-40h]
  __int16 v22; // [rsp+2Ah] [rbp-3Eh]
  unsigned __int8 nactvar; // [rsp+2Ch] [rbp-3Ch]
  char v24; // [rsp+2Dh] [rbp-3Bh]
  char v25; // [rsp+2Eh] [rbp-3Ah]
  expdesc v; // [rsp+30h] [rbp-38h] BYREF

  v2 = ls->lookahead.token == 286;
  fs = ls->fs;
  ls->lastline = ls->linenumber;
  if ( v2 )
  {
    ls->t.token = llex(ls, &ls->t.seminfo);
  }
  else
  {
    lookahead = ls->lookahead;
    ls->lookahead.token = 286;
    ls->t = lookahead;
  }
  subexpr(ls, &v, 0);
  if ( ls->t.token != 275 )
  {
    v18 = luaO_pushfstring(
            ls->L,
            "'%s'",
            *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[9][72]);
    v19 = luaO_pushfstring(ls->L, "%s expected", v18);
    lexerror(ls, v19, (unsigned int)ls->t.token);
  }
  v2 = ls->lookahead.token == 286;
  ls->lastline = ls->linenumber;
  if ( v2 )
  {
    ls->t.token = llex(ls, &ls->t.seminfo);
  }
  else
  {
    v7 = ls->lookahead;
    ls->lookahead.token = 286;
    ls->t = v7;
  }
  v8 = ls->fs;
  if ( ((ls->t.token - 258) & 0xFFFFFFF7) != 0 )
  {
    luaK_goiftrue(v8, &v);
    v25 = 0;
    nactvar = fs->nactvar;
    n = fs->ls->dyd->label.n;
    v22 = fs->ls->dyd->gt.n;
    v24 = 0;
    bl = fs->bl;
    fs->bl = (BlockCnt *)&bl;
    f = v.f;
  }
  else
  {
    luaK_goiffalse(v8, &v);
    v25 = 0;
    nactvar = fs->nactvar;
    n = fs->ls->dyd->label.n;
    v22 = fs->ls->dyd->gt.n;
    v24 = 0;
    bl = fs->bl;
    fs->bl = (BlockCnt *)&bl;
    gotostat(ls, v.t);
    while ( 1 )
    {
      token = ls->t.token;
      if ( token != 59 && token != 285 )
        break;
      statement(ls);
    }
    if ( (unsigned int)(token - 260) <= 2 || token == 286 )
    {
      leaveblock(fs);
      return;
    }
    f = luaK_jump(fs);
  }
  statlist(ls);
  leaveblock(fs);
  if ( (unsigned int)(ls->t.token - 260) <= 1 )
  {
    v11 = luaK_jump(fs);
    if ( v11 != -1 )
    {
      v12 = *escapelist;
      if ( *escapelist == -1 )
      {
        *escapelist = v11;
      }
      else
      {
        code = fs->f->code;
        while ( code[v12] >> 14 != 131070 )
        {
          v14 = (code[v12] >> 14) - 0x1FFFF;
          if ( v12 + v14 + 1 == -1 )
            break;
          v12 += v14 + 1;
        }
        fixjump(fs, v12, v11);
      }
    }
  }
  fs->lasttarget = fs->pc;
  if ( f != -1 )
  {
    jpc = fs->jpc;
    if ( jpc == -1 )
    {
      fs->jpc = f;
    }
    else
    {
      v16 = fs->f->code;
      while ( v16[jpc] >> 14 != 131070 )
      {
        v17 = (v16[jpc] >> 14) - 0x1FFFF;
        if ( jpc + v17 + 1 == -1 )
          break;
        jpc += v17 + 1;
      }
      fixjump(fs, jpc, f);
    }
  }
}

__int64 __fastcall testnext(LexState *ls, int c)
{
  bool v2; // zf
  Token lookahead; // xmm0
  __int64 result; // rax

  v2 = ls->lookahead.token == 286;
  ls->lastline = ls->linenumber;
  if ( v2 )
  {
    ls->t.token = llex(ls, &ls->t.seminfo);
    return 1i64;
  }
  else
  {
    lookahead = ls->lookahead;
    ls->lookahead.token = 286;
    result = 1i64;
    ls->t = lookahead;
  }
  return result;
}

void __fastcall whilestat(LexState *ls, int line)
{
  bool v2; // zf
  FuncState *fs; // rdi
  Token lookahead; // xmm0
  int pc; // ebp
  expkind k; // eax
  FuncState *v9; // rcx
  Token v10; // xmm0
  int v11; // eax
  int f; // er9
  int jpc; // edx
  unsigned int *code; // r8
  int v15; // eax
  const char *v16; // rax
  const char *v17; // rax
  BlockCnt *bl; // [rsp+20h] [rbp-48h] BYREF
  __int16 n; // [rsp+28h] [rbp-40h]
  __int16 v20; // [rsp+2Ah] [rbp-3Eh]
  unsigned __int8 nactvar; // [rsp+2Ch] [rbp-3Ch]
  char v22; // [rsp+2Dh] [rbp-3Bh]
  char v23; // [rsp+2Eh] [rbp-3Ah]
  expdesc v; // [rsp+30h] [rbp-38h] BYREF

  v2 = ls->lookahead.token == 286;
  fs = ls->fs;
  ls->lastline = ls->linenumber;
  if ( v2 )
  {
    ls->t.token = llex(ls, &ls->t.seminfo);
  }
  else
  {
    lookahead = ls->lookahead;
    ls->lookahead.token = 286;
    ls->t = lookahead;
  }
  pc = fs->pc;
  fs->lasttarget = pc;
  subexpr(ls, &v, 0);
  k = v.k;
  if ( v.k == VNIL )
    k = VFALSE;
  v9 = ls->fs;
  v.k = k;
  luaK_goiftrue(v9, &v);
  v23 = 1;
  nactvar = fs->nactvar;
  n = fs->ls->dyd->label.n;
  v20 = fs->ls->dyd->gt.n;
  v22 = 0;
  bl = fs->bl;
  fs->bl = (BlockCnt *)&bl;
  if ( ls->t.token != 259 )
  {
    v16 = luaO_pushfstring(
            ls->L,
            "'%s'",
            *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[8][200]);
    v17 = luaO_pushfstring(ls->L, "%s expected", v16);
    lexerror(ls, v17, (unsigned int)ls->t.token);
  }
  v2 = ls->lookahead.token == 286;
  ls->lastline = ls->linenumber;
  if ( v2 )
  {
    ls->t.token = llex(ls, &ls->t.seminfo);
  }
  else
  {
    v10 = ls->lookahead;
    ls->lookahead.token = 286;
    ls->t = v10;
  }
  block(ls);
  v11 = luaK_jump(fs);
  luaK_patchlist(fs, v11, pc);
  check_match(ls, 262, 278, line);
  leaveblock(fs);
  f = v.f;
  fs->lasttarget = fs->pc;
  if ( f != -1 )
  {
    jpc = fs->jpc;
    if ( jpc == -1 )
    {
      fs->jpc = f;
    }
    else
    {
      code = fs->f->code;
      while ( code[jpc] >> 14 != 131070 )
      {
        v15 = (code[jpc] >> 14) - 0x1FFFF;
        if ( jpc + v15 + 1 == -1 )
          break;
        jpc += v15 + 1;
      }
      fixjump(fs, jpc, f);
    }
  }
}

void __fastcall yindex(LexState *ls, expdesc *v)
{
  bool v2; // zf
  Token lookahead; // xmm0
  FuncState *fs; // rcx
  Token v7; // xmm0
  const char *v8; // rax
  const char *v9; // rax

  v2 = ls->lookahead.token == 286;
  ls->lastline = ls->linenumber;
  if ( v2 )
  {
    ls->t.token = llex(ls, &ls->t.seminfo);
  }
  else
  {
    lookahead = ls->lookahead;
    ls->lookahead.token = 286;
    ls->t = lookahead;
  }
  subexpr(ls, v, 0);
  fs = ls->fs;
  if ( v->t == v->f )
    luaK_dischargevars(fs, v);
  else
    luaK_exp2anyreg(fs, v);
  if ( ls->t.token != 93 )
  {
    v8 = luaO_pushfstring(ls->L, "'%c'", 93i64);
    v9 = luaO_pushfstring(ls->L, "%s expected", v8);
    lexerror(ls, v9, (unsigned int)ls->t.token);
  }
  v2 = ls->lookahead.token == 286;
  ls->lastline = ls->linenumber;
  if ( v2 )
  {
    ls->t.token = llex(ls, &ls->t.seminfo);
  }
  else
  {
    v7 = ls->lookahead;
    ls->lookahead.token = 286;
    ls->t = v7;
  }
}

