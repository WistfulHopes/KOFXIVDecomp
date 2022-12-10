#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/ltable.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lgc.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstring.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/llex.c"

void luaK_nil(FuncState * fs, long from, long n); // 0x140289580
long luaK_jump(FuncState * fs); // 0x140289640
void fixjump(FuncState * fs, long pc, long dest); // 0x1402896D0
void removevalues(FuncState * fs, long list); // 0x140289730
void patchlistaux(FuncState * fs, long list, long vtarget, long reg, long dtarget); // 0x1402897D0
void luaK_patchlist(FuncState * fs, long list, long target); // 0x140289950
void luaK_patchclose(FuncState * fs, long list, long level); // 0x1402899E0
void luaK_patchtohere(FuncState * fs, long list); // 0x140289A40
void luaK_concat(FuncState * fs, long * l1, long l2); // 0x140289AA0
long luaK_code(FuncState * fs, unsigned long i); // 0x140289AF0
long luaK_codek(FuncState * fs, long reg, long k); // 0x140289BE0
void luaK_reserveregs(FuncState * fs, long n); // 0x140289C50
long addk(FuncState * fs, lua_TValue * key, lua_TValue * v); // 0x140289CA0
long luaK_numberK(FuncState * fs, float r); // 0x140289E30
void luaK_setreturns(FuncState * fs, expdesc * e, long nresults); // 0x140289EE0
void luaK_setoneret(FuncState * fs, expdesc * e); // 0x140289FA0
void luaK_dischargevars(FuncState * fs, expdesc * e); // 0x140289FF0
void discharge2reg(FuncState * fs, expdesc * e, long reg); // 0x14028A0B0
void discharge2anyreg(FuncState * fs, expdesc * e); // 0x14028A1C0
void exp2reg(FuncState * fs, expdesc * e, long reg); // 0x14028A220
void luaK_exp2nextreg(FuncState * fs, expdesc * e); // 0x14028A430
long luaK_exp2anyreg(FuncState * fs, expdesc * e); // 0x14028A4B0
void luaK_exp2anyregup(FuncState * fs, expdesc * e); // 0x14028A520
long luaK_exp2RK(FuncState * fs, expdesc * e); // 0x14028A590
void luaK_storevar(FuncState * fs, expdesc * var, expdesc * ex); // 0x14028A6C0
void luaK_self(FuncState * fs, expdesc * e, expdesc * key); // 0x14028A7C0
void invertjump(FuncState * fs, expdesc * e); // 0x14028A8D0
long jumponcond(FuncState * fs, expdesc * e, long cond); // 0x14028A930
void luaK_goiftrue(FuncState * fs, expdesc * e); // 0x14028AA20
void luaK_goiffalse(FuncState * fs, expdesc * e); // 0x14028AB30
void codenot(FuncState * fs, expdesc * e); // 0x14028AC40
void codearith(FuncState * fs, OpCode op, expdesc * e1, expdesc * e2, long line); // 0x14028AD30
void codecomp(FuncState * fs, OpCode op, long cond, expdesc * e1, expdesc * e2); // 0x14028AE80
void luaK_prefix(FuncState * fs, UnOpr op, expdesc * e, long line); // 0x14028AF60
void luaK_posfix(FuncState * fs, BinOpr op, expdesc * e1, expdesc * e2, long line); // 0x14028B030
void luaK_setlist(FuncState * fs, long base, long nelems, long tostore); // 0x14028B210__int64 __fastcall addk(FuncState *fs, lua_TValue *key, lua_TValue *v)
{
  Table *h; // rdi
  lua_State *L; // r12
  lua_TValue *v8; // rbp
  Proto *f; // rdi
  int n; // ebx
  const lua_TValue *v11; // rdx
  __int64 sizek; // rbx
  __int64 nk; // r13
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned __int8 marked; // al
  global_State *l_G; // rcx

  h = fs->h;
  L = fs->ls->L;
  v8 = (lua_TValue *)luaH_get(h, key);
  if ( v8 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
    v8 = luaH_newkey(L, h, key);
  f = fs->f;
  if ( v8->tt_ == 3 )
  {
    n = (int)v8->value_.n;
    v11 = &f->k[n];
    if ( v11->tt_ == v->tt_ )
    {
      if ( luaV_equalobj_(0i64, v11, v) )
        return (unsigned int)n;
    }
  }
  sizek = f->sizek;
  nk = fs->nk;
  v8->tt_ = 3;
  v8->value_.n = (float)(int)nk;
  if ( (int)nk + 1 > f->sizek )
    f->k = (lua_TValue *)luaM_growaux_(L, f->k, &f->sizek, 0x10ui64, 0x3FFFFFF, "constants");
  if ( (int)sizek < f->sizek )
  {
    v15 = sizek;
    do
    {
      ++v15;
      LODWORD(sizek) = sizek + 1;
      f->k[v15 - 1].tt_ = 0;
    }
    while ( (int)sizek < f->sizek );
  }
  v16 = (__int64)&f->k[nk];
  *(_QWORD *)v16 = v->value_.gc;
  *(_DWORD *)(v16 + 8) = v->tt_;
  ++fs->nk;
  if ( (v->tt_ & 0x40) != 0 && (v->value_.gc->gch.marked & 3) != 0 )
  {
    marked = f->marked;
    if ( (marked & 4) != 0 )
    {
      l_G = L->l_G;
      if ( l_G->gcstate > 1u )
        f->marked = marked & 0xB8 | l_G->currentwhite & 3;
      else
        reallymarkobject(l_G, v->value_.gc);
    }
  }
  return (unsigned int)nk;
}

void __fastcall codearith(FuncState *fs, OpCode op, expdesc *e1, expdesc *e2, int line)
{
  int v9; // er14
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int info; // ecx

  if ( e1->k == VKNUM
    && e1->t == -1
    && e1->f == -1
    && e2->k == VKNUM
    && e2->t == -1
    && e2->f == -1
    && ((unsigned int)(op - 16) > 1 || e2->u.nval != 0.0) )
  {
    e1->u.nval = luaO_arith(op - 13, e1->u.nval, e2->u.nval);
    return;
  }
  if ( ((op - 19) & 0xFFFFFFFD) != 0 )
    v9 = luaK_exp2RK(fs, e2);
  else
    v9 = 0;
  v10 = luaK_exp2RK(fs, e1);
  if ( v10 <= v9 )
  {
    if ( e2->k == VNONRELOC )
    {
      info = e2->u.info;
      if ( (info & 0x100) == 0 && info >= fs->nactvar )
        --fs->freereg;
    }
    if ( e1->k != VNONRELOC )
      goto LABEL_29;
    v12 = e1->u.info;
  }
  else
  {
    if ( e1->k == VNONRELOC )
    {
      v11 = e1->u.info;
      if ( (v11 & 0x100) == 0 && v11 >= fs->nactvar )
        --fs->freereg;
    }
    if ( e2->k != VNONRELOC )
      goto LABEL_29;
    v12 = e2->u.info;
  }
  if ( (v12 & 0x100) == 0 && v12 >= fs->nactvar )
    --fs->freereg;
LABEL_29:
  e1->u.info = luaK_code(fs, op | ((v9 | (v10 << 9)) << 14));
  e1->k = VRELOCABLE;
  fs->f->lineinfo[fs->pc - 1] = line;
}

void __fastcall codecomp(FuncState *fs, OpCode op, int cond, expdesc *e1, expdesc *e2)
{
  int v9; // edi
  int v10; // er8
  int info; // edx
  int v12; // ecx
  int v13; // eax

  v9 = luaK_exp2RK(fs, e1);
  v10 = luaK_exp2RK(fs, e2);
  if ( e2->k == VNONRELOC )
  {
    info = e2->u.info;
    if ( (info & 0x100) == 0 && info >= fs->nactvar )
      --fs->freereg;
  }
  if ( e1->k == VNONRELOC )
  {
    v12 = e1->u.info;
    if ( (v12 & 0x100) == 0 && v12 >= fs->nactvar )
      --fs->freereg;
  }
  if ( !cond && op != OP_EQ )
  {
    v13 = v9;
    cond = 1;
    v9 = v10;
    v10 = v13;
  }
  luaK_code(fs, op | ((cond | ((v10 | (v9 << 9)) << 8)) << 6));
  e1->u.info = luaK_jump(fs);
  e1->k = VJMP;
}

void __fastcall codenot(FuncState *fs, expdesc *e)
{
  int info; // ecx
  int f; // eax
  int t; // edx

  luaK_dischargevars(fs, e);
  switch ( e->k )
  {
    case VNIL:
    case VFALSE:
      e->k = VTRUE;
      break;
    case VTRUE:
    case VK:
    case VKNUM:
      e->k = VFALSE;
      break;
    case VNONRELOC:
    case VRELOCABLE:
      discharge2anyreg(fs, e);
      if ( e->k == VNONRELOC )
      {
        info = e->u.info;
        if ( (info & 0x100) == 0 && info >= fs->nactvar )
          --fs->freereg;
      }
      e->u.info = luaK_code(fs, (e->u.info << 23) | 0x14);
      e->k = VRELOCABLE;
      break;
    case VJMP:
      invertjump(fs, e);
      break;
    default:
      break;
  }
  f = e->f;
  t = e->t;
  e->f = t;
  e->t = f;
  removevalues(fs, t);
  removevalues(fs, e->t);
}

void __fastcall discharge2anyreg(FuncState *fs, expdesc *e)
{
  int v2; // er8

  if ( e->k != VNONRELOC )
  {
    v2 = fs->freereg + 1;
    if ( v2 > fs->f->maxstacksize )
    {
      if ( v2 >= 250 )
        lexerror(fs->ls, "function or expression too complex", fs->ls->t.token);
      fs->f->maxstacksize = v2;
    }
    discharge2reg(fs, e, fs->freereg++);
  }
}

void __fastcall discharge2reg(FuncState *fs, expdesc *e, int reg)
{
  int v6; // edx
  int v7; // eax
  __int64 v8; // rdx
  unsigned int *code; // rcx
  int info; // edx

  luaK_dischargevars(fs, e);
  switch ( e->k )
  {
    case VNIL:
      luaK_nil(fs, reg, 1);
      goto LABEL_10;
    case VTRUE:
    case VFALSE:
      v6 = ((reg | ((e->k == VTRUE) << 17)) << 6) | 3;
      goto LABEL_9;
    case VK:
      luaK_codek(fs, reg, e->u.info);
      goto LABEL_10;
    case VKNUM:
      v7 = luaK_numberK(fs, e->u.nval);
      luaK_codek(fs, reg, v7);
      goto LABEL_10;
    case VNONRELOC:
      info = e->u.info;
      if ( reg == info )
        goto LABEL_10;
      v6 = (reg | (info << 17)) << 6;
LABEL_9:
      luaK_code(fs, v6);
LABEL_10:
      e->u.info = reg;
      e->k = VNONRELOC;
      return;
    case VRELOCABLE:
      v8 = e->u.info;
      code = fs->f->code;
      code[v8] &= 0xFFFFC03F;
      code[v8] |= (unsigned __int8)reg << 6;
      goto LABEL_10;
    default:
      return;
  }
}

void __fastcall exp2reg(FuncState *fs, expdesc *e, int reg)
{
  int info; // er9
  int t; // edx
  unsigned int *code; // r8
  int v9; // eax
  int v10; // ecx
  int f; // edx
  int dtarget; // er15
  int v13; // er12
  unsigned int *v14; // r10
  unsigned int *v15; // r9
  unsigned int *v16; // r8
  unsigned int *v17; // r9
  unsigned int *v18; // r8
  unsigned int *v19; // rcx
  int v20; // ebp
  int v21; // eax
  int pc; // ebx

  discharge2reg(fs, e, reg);
  if ( e->k == VJMP )
  {
    info = e->u.info;
    if ( info != -1 )
    {
      t = e->t;
      if ( t == -1 )
      {
        e->t = info;
      }
      else
      {
        code = fs->f->code;
        while ( code[t] >> 14 != 131070 )
        {
          v9 = (code[t] >> 14) - 0x1FFFF;
          if ( v9 + t + 1 == -1 )
            break;
          t += v9 + 1;
        }
        fixjump(fs, t, info);
      }
    }
  }
  v10 = e->t;
  f = e->f;
  if ( v10 != f )
  {
    dtarget = -1;
    v13 = -1;
    if ( v10 == -1 )
    {
LABEL_19:
      if ( f == -1 )
      {
LABEL_32:
        pc = fs->pc;
        fs->lasttarget = pc;
        patchlistaux(fs, e->f, pc, reg, dtarget);
        patchlistaux(fs, e->t, pc, reg, v13);
        goto LABEL_33;
      }
      v17 = fs->f->code;
      while ( 1 )
      {
        v18 = &v17[f];
        if ( f < 1
          || (v19 = v18 - 1,
              extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[12][(*(v18 - 1) & 0x3F) + 184] >= 0) )
        {
          v19 = &v17[f];
        }
        if ( (*(_BYTE *)v19 & 0x3F) != 28 )
          break;
        if ( *v18 >> 14 != 131070 )
        {
          f += (*v18 >> 14) - 0x1FFFF + 1;
          if ( f != -1 )
            continue;
        }
        goto LABEL_32;
      }
    }
    else
    {
      v14 = fs->f->code;
      while ( 1 )
      {
        v15 = &v14[v10];
        if ( v10 < 1
          || (v16 = v15 - 1,
              extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[12][(*(v15 - 1) & 0x3F) + 184] >= 0) )
        {
          v16 = &v14[v10];
        }
        if ( (*(_BYTE *)v16 & 0x3F) != 28 )
          break;
        if ( *v15 >> 14 != 131070 )
        {
          v10 += (*v15 >> 14) - 0x1FFFF + 1;
          if ( v10 != -1 )
            continue;
        }
        goto LABEL_19;
      }
    }
    if ( e->k == VJMP )
      v20 = -1;
    else
      v20 = luaK_jump(fs);
    fs->lasttarget = fs->pc;
    v21 = luaK_code(fs, (reg << 6) | 0x4003);
    fs->lasttarget = fs->pc;
    dtarget = v21;
    v13 = luaK_code(fs, (reg << 6) | 0x800003);
    luaK_patchtohere(fs, v20);
    goto LABEL_32;
  }
LABEL_33:
  *(_QWORD *)&e->t = -1i64;
  e->u.info = reg;
  e->k = VNONRELOC;
}

void __fastcall fixjump(FuncState *fs, int pc, int dest)
{
  int v3; // er8
  unsigned int *v4; // r11

  v3 = dest - pc;
  v4 = &fs->f->code[pc];
  if ( (int)abs32(v3 - 1) > 0x1FFFF )
    lexerror(fs->ls, "control structure too long", fs->ls->t.token);
  *v4 &= 0x3FFFu;
  *v4 |= (v3 + 131070) << 14;
}

void __fastcall invertjump(FuncState *fs, expdesc *e)
{
  __int64 info; // r8
  unsigned int *v3; // r9
  unsigned int *v4; // rdx
  int v5; // eax

  info = e->u.info;
  v3 = &fs->f->code[info];
  if ( (int)info < 1
    || (v4 = v3 - 1,
        extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[12][(*(v3 - 1) & 0x3F) + 184] >= 0) )
  {
    v4 = &fs->f->code[info];
  }
  v5 = 0;
  if ( (*v4 & 0x3FC0) == 0 )
    v5 = 64;
  *v4 = *v4 & 0xFFFFC03F | v5;
}

int __fastcall jumponcond(FuncState *fs, expdesc *e, int cond)
{
  expkind k; // ecx
  unsigned int v7; // edx
  int v8; // eax
  unsigned int v9; // edx
  int v10; // edx
  int v11; // ecx
  int info; // ecx

  k = e->k;
  if ( e->k == VRELOCABLE && (v7 = fs->f->code[e->u.info], (v7 & 0x3F) == 20) )
  {
    --fs->pc;
    v8 = 0;
    v9 = (v7 & 0xFF81FFFF | 0x360000) >> 17;
    if ( !cond )
      v8 = 0x4000;
    v10 = v8 | v9;
  }
  else
  {
    if ( k == VNONRELOC )
      goto LABEL_11;
    v11 = fs->freereg + 1;
    if ( v11 > fs->f->maxstacksize )
    {
      if ( v11 >= 250 )
        lexerror(fs->ls, "function or expression too complex", fs->ls->t.token);
      fs->f->maxstacksize = v11;
    }
    discharge2reg(fs, e, fs->freereg++);
    if ( e->k == VNONRELOC )
    {
LABEL_11:
      info = e->u.info;
      if ( (info & 0x100) == 0 && info >= fs->nactvar )
        --fs->freereg;
    }
    v10 = ((cond | (e->u.info << 9)) << 14) | 0x3FDC;
  }
  luaK_code(fs, v10);
  return luaK_jump(fs);
}

__int64 __fastcall luaK_code(FuncState *fs, unsigned int i)
{
  Proto *f; // rdi
  int v5; // eax
  __int64 result; // rax

  f = fs->f;
  patchlistaux(fs, fs->jpc, fs->pc, 255, fs->pc);
  v5 = fs->pc + 1;
  fs->jpc = -1;
  if ( v5 > f->sizecode )
    f->code = (unsigned int *)luaM_growaux_(fs->ls->L, f->code, &f->sizecode, 4ui64, 2147483645, "opcodes");
  f->code[fs->pc] = i;
  if ( fs->pc + 1 > f->sizelineinfo )
    f->lineinfo = (int *)luaM_growaux_(fs->ls->L, f->lineinfo, &f->sizelineinfo, 4ui64, 2147483645, "opcodes");
  f->lineinfo[fs->pc] = fs->ls->lastline;
  result = (unsigned int)fs->pc;
  fs->pc = result + 1;
  return result;
}

__int64 __fastcall luaK_codek(FuncState *fs, int reg, int k)
{
  unsigned int v6; // ebx

  if ( k <= 0x3FFFF )
    return luaK_code(fs, (((k << 8) | reg) << 6) | 1u);
  v6 = luaK_code(fs, (reg << 6) | 2u);
  luaK_code(fs, (k << 6) | 0x27);
  return v6;
}

void __fastcall luaK_concat(FuncState *fs, int *l1, int l2)
{
  int v4; // edx
  unsigned int *code; // r9
  int v6; // eax

  if ( l2 != -1 )
  {
    v4 = *l1;
    if ( v4 == -1 )
    {
      *l1 = l2;
    }
    else
    {
      code = fs->f->code;
      while ( code[v4] >> 14 != 131070 )
      {
        v6 = (code[v4] >> 14) - 0x1FFFF;
        if ( v6 + v4 + 1 == -1 )
          break;
        v4 += v6 + 1;
      }
      fixjump(fs, v4, l2);
    }
  }
}

void __fastcall luaK_dischargevars(FuncState *fs, expdesc *e)
{
  expkind k; // eax
  int idx; // edx
  int v5; // er8

  k = e->k;
  if ( e->k == VLOCAL )
  {
    e->k = VNONRELOC;
  }
  else if ( k == VUPVAL )
  {
    e->u.info = luaK_code(fs, (e->u.info << 23) | 5u);
    e->k = VRELOCABLE;
  }
  else if ( k == VINDEXED )
  {
    idx = e->u.ind.idx;
    v5 = 6;
    if ( (idx & 0x100) == 0 && idx >= fs->nactvar )
      --fs->freereg;
    if ( e->u.ind.vt == 7 )
    {
      if ( e->u.ind.t >= fs->nactvar )
        --fs->freereg;
      v5 = 7;
    }
    e->u.info = luaK_code(fs, v5 | ((e->u.ind.idx | (e->u.ind.t << 9)) << 14));
    e->k = VRELOCABLE;
  }
  else if ( (unsigned int)(k - 12) <= 1 )
  {
    luaK_setoneret(fs, e);
  }
}

int __fastcall luaK_exp2RK(FuncState *fs, expdesc *e)
{
  expkind k; // eax
  int info; // eax
  int result; // eax
  int v7; // ecx
  lua_TValue *p_v; // r8
  int v9; // eax
  int v10; // er8
  lua_TValue v; // [rsp+20h] [rbp-28h] BYREF
  char v12; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+38h] [rbp-10h]

  if ( e->t == e->f )
    luaK_dischargevars(fs, e);
  else
    luaK_exp2anyreg(fs, e);
  k = e->k;
  if ( e->k <= VVOID )
    goto LABEL_16;
  if ( k > VFALSE )
  {
    if ( k != VK )
    {
      if ( k != VKNUM )
        goto LABEL_16;
      e->u.info = luaK_numberK(fs, e->u.nval);
      e->k = VK;
    }
    info = e->u.info;
    if ( info <= 255 )
      return info | 0x100;
LABEL_16:
    luaK_dischargevars(fs, e);
    if ( e->k == VNONRELOC )
    {
      if ( e->t == e->f )
        return e->u.info;
      v10 = e->u.info;
      if ( v10 >= fs->nactvar )
      {
        exp2reg(fs, e, v10);
        return e->u.info;
      }
    }
    luaK_exp2nextreg(fs, e);
    return e->u.info;
  }
  if ( fs->nk > 255 )
    goto LABEL_16;
  v7 = 0;
  if ( k == VNIL )
  {
    p_v = (lua_TValue *)&v12;
    v.value_.gc = (GCObject *)fs->h;
    v13 = 0;
    v.tt_ = 69;
  }
  else
  {
    v.tt_ = 1;
    p_v = &v;
    LOBYTE(v7) = k == VTRUE;
    v.value_.b = v7;
  }
  v9 = addk(fs, &v, p_v);
  e->u.info = v9;
  result = v9 | 0x100;
  e->k = VK;
  return result;
}

__int64 __fastcall luaK_exp2anyreg(FuncState *fs, expdesc *e)
{
  int info; // er8

  luaK_dischargevars(fs, e);
  if ( e->k != VNONRELOC )
  {
LABEL_5:
    luaK_exp2nextreg(fs, e);
    return (unsigned int)e->u.info;
  }
  if ( e->t != e->f )
  {
    info = e->u.info;
    if ( info >= fs->nactvar )
    {
      exp2reg(fs, e, info);
      return (unsigned int)e->u.info;
    }
    goto LABEL_5;
  }
  return (unsigned int)e->u.info;
}

void __fastcall luaK_exp2anyregup(FuncState *fs, expdesc *e)
{
  int info; // er8

  if ( e->k != VUPVAL || e->t != e->f )
  {
    luaK_dischargevars(fs, e);
    if ( e->k != VNONRELOC )
      goto LABEL_7;
    if ( e->t == e->f )
      return;
    info = e->u.info;
    if ( info >= fs->nactvar )
      exp2reg(fs, e, info);
    else
LABEL_7:
      luaK_exp2nextreg(fs, e);
  }
}

void __fastcall luaK_exp2nextreg(FuncState *fs, expdesc *e)
{
  int info; // ecx
  int v5; // ecx

  luaK_dischargevars(fs, e);
  if ( e->k == VNONRELOC )
  {
    info = e->u.info;
    if ( (info & 0x100) == 0 && info >= fs->nactvar )
      --fs->freereg;
  }
  v5 = fs->freereg + 1;
  if ( v5 > fs->f->maxstacksize )
  {
    if ( v5 >= 250 )
      lexerror(fs->ls, "function or expression too complex", fs->ls->t.token);
    fs->f->maxstacksize = v5;
  }
  exp2reg(fs, e, fs->freereg++);
}

void __fastcall luaK_goiffalse(FuncState *fs, expdesc *e)
{
  int info; // er8
  int t; // edx
  unsigned int *code; // r9
  int v7; // ecx
  int f; // er8
  int jpc; // edx
  unsigned int *v10; // r9
  int v11; // ecx

  luaK_dischargevars(fs, e);
  if ( e->k == VNIL || e->k == VFALSE )
  {
    info = -1;
  }
  else if ( e->k == VJMP )
  {
    info = e->u.info;
  }
  else
  {
    info = jumponcond(fs, e, 1);
  }
  if ( info != -1 )
  {
    t = e->t;
    if ( t == -1 )
    {
      e->t = info;
    }
    else
    {
      code = fs->f->code;
      while ( code[t] >> 14 != 131070 )
      {
        v7 = (code[t] >> 14) - 0x1FFFF;
        if ( v7 + t + 1 == -1 )
          break;
        t += v7 + 1;
      }
      fixjump(fs, t, info);
    }
  }
  f = e->f;
  fs->lasttarget = fs->pc;
  if ( f != -1 )
  {
    jpc = fs->jpc;
    if ( jpc == -1 )
    {
      fs->jpc = f;
      e->f = -1;
      return;
    }
    v10 = fs->f->code;
    while ( v10[jpc] >> 14 != 131070 )
    {
      v11 = (v10[jpc] >> 14) - 0x1FFFF;
      if ( v11 + jpc + 1 == -1 )
        break;
      jpc += v11 + 1;
    }
    fixjump(fs, jpc, f);
  }
  e->f = -1;
}

void __fastcall luaK_goiftrue(FuncState *fs, expdesc *e)
{
  expkind k; // eax
  int info; // er8
  int f; // edx
  unsigned int *code; // r9
  int v8; // ecx
  int t; // er8
  int jpc; // edx
  unsigned int *v11; // r9
  int v12; // ecx

  luaK_dischargevars(fs, e);
  k = e->k;
  if ( e->k != VTRUE )
  {
    if ( k <= VFALSE )
    {
LABEL_6:
      info = jumponcond(fs, e, 0);
      goto LABEL_8;
    }
    if ( k > VKNUM )
    {
      if ( k == VJMP )
      {
        invertjump(fs, e);
        info = e->u.info;
        goto LABEL_8;
      }
      goto LABEL_6;
    }
  }
  info = -1;
LABEL_8:
  if ( info != -1 )
  {
    f = e->f;
    if ( f == -1 )
    {
      e->f = info;
    }
    else
    {
      code = fs->f->code;
      while ( code[f] >> 14 != 131070 )
      {
        v8 = (code[f] >> 14) - 0x1FFFF;
        if ( v8 + f + 1 == -1 )
          break;
        f += v8 + 1;
      }
      fixjump(fs, f, info);
    }
  }
  t = e->t;
  fs->lasttarget = fs->pc;
  if ( t != -1 )
  {
    jpc = fs->jpc;
    if ( jpc == -1 )
    {
      fs->jpc = t;
      e->t = -1;
      return;
    }
    v11 = fs->f->code;
    while ( v11[jpc] >> 14 != 131070 )
    {
      v12 = (v11[jpc] >> 14) - 0x1FFFF;
      if ( v12 + jpc + 1 == -1 )
        break;
      jpc += v12 + 1;
    }
    fixjump(fs, jpc, t);
  }
  e->t = -1;
}

__int64 __fastcall luaK_jump(FuncState *fs)
{
  unsigned int jpc; // esi
  __int64 result; // rax
  unsigned int v4; // ebx
  int v5; // edx
  unsigned int *code; // r8
  int v7; // ecx

  jpc = fs->jpc;
  fs->jpc = -1;
  result = luaK_code(fs, 0x7FFF8017u);
  v4 = result;
  if ( jpc != -1 )
  {
    if ( (_DWORD)result == -1 )
    {
      return jpc;
    }
    else
    {
      v5 = result;
      code = fs->f->code;
      while ( code[v5] >> 14 != 131070 )
      {
        v7 = (code[v5] >> 14) - 0x1FFFF;
        if ( v7 + v5 + 1 == -1 )
          break;
        v5 += v7 + 1;
      }
      fixjump(fs, v5, jpc);
      return v4;
    }
  }
  return result;
}

void __fastcall luaK_nil(FuncState *fs, int from, int n)
{
  int pc; // eax
  int v4; // ebx
  int v5; // esi
  int v7; // er10
  __int64 v9; // r9
  unsigned int *code; // r8
  unsigned int v11; // ecx
  int v12; // edx
  int v13; // ecx

  pc = fs->pc;
  v4 = from + n;
  v5 = from + n - 1;
  v7 = from;
  if ( pc <= fs->lasttarget )
    goto LABEL_12;
  v9 = pc - 1;
  code = fs->f->code;
  v11 = code[v9];
  if ( (v11 & 0x3F) != 4 )
    goto LABEL_12;
  v12 = (unsigned __int8)(v11 >> 6);
  v13 = v12 + (v11 >> 23);
  if ( v7 < v12 )
  {
LABEL_6:
    if ( v12 <= v4 )
      goto LABEL_7;
LABEL_12:
    luaK_code(fs, ((v7 | ((n - 1) << 17)) << 6) | 4);
    return;
  }
  if ( v7 > v13 + 1 )
  {
    if ( v7 > v12 )
      goto LABEL_12;
    goto LABEL_6;
  }
LABEL_7:
  if ( v12 < v7 )
    v7 = v12;
  code[v9] &= 0x7FC03Fu;
  if ( v13 <= v5 )
    v13 = v5;
  code[v9] |= ((unsigned __int8)v7 << 6) | ((v13 - v7) << 23);
}

__int64 __fastcall luaK_numberK(FuncState *fs, float r)
{
  lua_State *L; // rsi
  __int64 result; // rax
  lua_TValue *top; // rbx
  TString *v6; // rax
  lua_TValue key; // [rsp+20h] [rbp-18h] BYREF
  float str; // [rsp+48h] [rbp+10h] BYREF

  str = r;
  L = fs->ls->L;
  key.tt_ = 3;
  key.value_.n = r;
  if ( r != 0.0 )
    return addk(fs, &key, &key);
  top = L->top;
  L->top = top + 1;
  v6 = internshrstr(L, (const char *)&str, 4ui64);
  top->value_.gc = (GCObject *)v6;
  top->tt_ = v6->tsv.tt | 0x40;
  result = addk(fs, L->top - 1, &key);
  --L->top;
  return result;
}

void __fastcall luaK_patchclose(FuncState *fs, int list, int level)
{
  unsigned __int8 i; // r8
  unsigned int *code; // rcx
  unsigned int v6; // eax
  unsigned int *v7; // r9

  for ( i = level + 1; list != -1; *v7 = (i << 6) | v6 & 0xFFFFC03F )
  {
    code = fs->f->code;
    v6 = code[list];
    v7 = &code[list];
    if ( v6 >> 14 == 131070 )
      list = -1;
    else
      list += (v6 >> 14) - 0x1FFFF + 1;
  }
}

void __fastcall luaK_patchlist(FuncState *fs, int list, int target)
{
  int pc; // eax
  int jpc; // edx
  unsigned int *code; // r8
  int v8; // ecx

  pc = fs->pc;
  if ( target == pc )
  {
    fs->lasttarget = pc;
    if ( list != -1 )
    {
      jpc = fs->jpc;
      if ( jpc == -1 )
      {
        fs->jpc = list;
      }
      else
      {
        code = fs->f->code;
        while ( code[jpc] >> 14 != 131070 )
        {
          v8 = (code[jpc] >> 14) - 0x1FFFF;
          if ( v8 + jpc + 1 == -1 )
            break;
          jpc += v8 + 1;
        }
        fixjump(fs, jpc, list);
      }
    }
  }
  else
  {
    patchlistaux(fs, list, target, 255, target);
  }
}

void __fastcall luaK_patchtohere(FuncState *fs, int list)
{
  int jpc; // edx
  unsigned int *code; // r10
  int v5; // eax

  fs->lasttarget = fs->pc;
  if ( list != -1 )
  {
    jpc = fs->jpc;
    if ( jpc == -1 )
    {
      fs->jpc = list;
    }
    else
    {
      code = fs->f->code;
      while ( code[jpc] >> 14 != 131070 )
      {
        v5 = (code[jpc] >> 14) - 0x1FFFF;
        if ( v5 + jpc + 1 == -1 )
          break;
        jpc += v5 + 1;
      }
      fixjump(fs, jpc, list);
    }
  }
}

void __fastcall luaK_posfix(FuncState *fs, BinOpr op, expdesc *e1, expdesc *e2, int line)
{
  Proto *f; // r8
  int info; // ecx
  int *v10; // rdx
  __int32 v11; // edx
  int v12; // er8

  switch ( op )
  {
    case OPR_ADD:
    case OPR_SUB:
    case OPR_MUL:
    case OPR_DIV:
    case OPR_MOD:
    case OPR_POW:
      codearith(fs, (OpCode)(op + 13), e1, e2, line);
      break;
    case OPR_CONCAT:
      if ( e2->t == e2->f )
        luaK_dischargevars(fs, e2);
      else
        luaK_exp2anyreg(fs, e2);
      if ( e2->k == VRELOCABLE && (f = fs->f, (fs->f->code[e2->u.info] & 0x3F) == 22) )
      {
        if ( e1->k == VNONRELOC )
        {
          info = e1->u.info;
          if ( (info & 0x100) == 0 && info >= fs->nactvar )
            --fs->freereg;
        }
        v10 = (int *)&f->code[e2->u.info];
        *v10 = *v10 & 0x7FFFFF | (e1->u.info << 23);
        e1->k = VRELOCABLE;
        e1->u.info = e2->u.info;
      }
      else
      {
        luaK_exp2nextreg(fs, e2);
        codearith(fs, OP_CONCAT, e1, e2, line);
      }
      break;
    case OPR_EQ:
    case OPR_LT:
    case OPR_LE:
      v11 = op + 17;
      v12 = 1;
      goto LABEL_18;
    case OPR_NE:
    case OPR_GT:
    case OPR_GE:
      v11 = op + 14;
      v12 = 0;
LABEL_18:
      codecomp(fs, (OpCode)v11, v12, e1, e2);
      break;
    case OPR_AND:
      luaK_dischargevars(fs, e2);
      luaK_concat(fs, &e2->f, e1->f);
      *e1 = *e2;
      break;
    case OPR_OR:
      luaK_dischargevars(fs, e2);
      luaK_concat(fs, &e2->t, e1->t);
      *e1 = *e2;
      break;
    default:
      return;
  }
}

void __fastcall luaK_prefix(FuncState *fs, UnOpr op, expdesc *e, int line)
{
  __int32 v7; // edx
  OpCode v8; // edx
  expdesc e2; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&e2.t = -1i64;
  e2.u.info = 0;
  e2.k = VKNUM;
  if ( op )
  {
    v7 = op - 1;
    if ( !v7 )
    {
      codenot(fs, e);
      return;
    }
    if ( v7 != 1 )
      return;
    luaK_exp2anyreg(fs, e);
    v8 = OP_LEN;
  }
  else
  {
    if ( e->k == VKNUM && e->t == -1 && e->f == -1 )
    {
      e->u.info ^= _xmm;
      return;
    }
    luaK_exp2anyreg(fs, e);
    v8 = OP_UNM;
  }
  codearith(fs, v8, e, &e2, line);
}

void __fastcall luaK_reserveregs(FuncState *fs, int n)
{
  int v2; // er8

  v2 = n + fs->freereg;
  if ( v2 > fs->f->maxstacksize )
  {
    if ( v2 >= 250 )
      lexerror(fs->ls, "function or expression too complex", fs->ls->t.token);
    fs->f->maxstacksize = v2;
  }
  fs->freereg += n;
}

void __fastcall luaK_self(FuncState *fs, expdesc *e, expdesc *key)
{
  int info; // er8
  int v7; // esi
  int v8; // ecx
  int v9; // eax
  int v10; // ecx

  luaK_dischargevars(fs, e);
  if ( e->k != VNONRELOC )
    goto LABEL_5;
  if ( e->t != e->f )
  {
    info = e->u.info;
    if ( info >= fs->nactvar )
    {
      exp2reg(fs, e, info);
      goto LABEL_6;
    }
LABEL_5:
    luaK_exp2nextreg(fs, e);
  }
LABEL_6:
  v7 = e->u.info;
  if ( e->k == VNONRELOC && (v7 & 0x100) == 0 && v7 >= fs->nactvar )
    --fs->freereg;
  e->u.info = fs->freereg;
  e->k = VNONRELOC;
  v8 = fs->freereg + 2;
  if ( v8 > fs->f->maxstacksize )
  {
    if ( v8 >= 250 )
      lexerror(fs->ls, "function or expression too complex", fs->ls->t.token);
    fs->f->maxstacksize = v8;
  }
  fs->freereg += 2;
  v9 = luaK_exp2RK(fs, key);
  luaK_code(fs, ((e->u.info | ((v9 | (v7 << 9)) << 8)) << 6) | 0xC);
  if ( key->k == VNONRELOC )
  {
    v10 = key->u.info;
    if ( (v10 & 0x100) == 0 && v10 >= fs->nactvar )
      --fs->freereg;
  }
}

void __fastcall luaK_setlist(FuncState *fs, int base, int nelems, int tostore)
{
  char v4; // bl
  FuncState *v5; // rsi
  signed int v6; // edi
  int v7; // edx

  v4 = base;
  v5 = fs;
  v6 = ((int)((unsigned __int64)(1374389535i64 * (nelems - 1)) >> 32) >> 4)
     + ((unsigned int)((unsigned __int64)(1374389535i64 * (nelems - 1)) >> 32) >> 31)
     + 1;
  if ( tostore == -1 )
    tostore = 0;
  if ( v6 > 511 )
  {
    if ( v6 > 0x3FFFFFF )
      lexerror(fs->ls, "constructor too long", fs->ls->t.token);
    luaK_code(fs, ((base | (tostore << 17)) << 6) | 0x24);
    fs = v5;
    v7 = (v6 << 6) | 0x27;
  }
  else
  {
    v7 = ((base | ((v6 | (tostore << 9)) << 8)) << 6) | 0x24;
  }
  luaK_code(fs, v7);
  v5->freereg = v4 + 1;
}

void __fastcall luaK_setoneret(FuncState *fs, expdesc *e)
{
  __int64 info; // r8

  if ( e->k == VCALL )
  {
    info = e->u.info;
    e->k = VNONRELOC;
    e->u.info = (unsigned __int8)(fs->f->code[info] >> 6);
  }
  else if ( e->k == VVARARG )
  {
    fs->f->code[e->u.info] = fs->f->code[e->u.info] & 0x7FFFFF | 0x1000000;
    e->k = VRELOCABLE;
  }
}

void __fastcall luaK_setreturns(FuncState *fs, expdesc *e, int nresults)
{
  unsigned int *v4; // r8
  int v5; // ecx

  if ( e->k == VCALL )
  {
    fs->f->code[e->u.info] ^= (fs->f->code[e->u.info] ^ ((nresults + 1) << 14)) & 0x7FC000;
  }
  else if ( e->k == VVARARG )
  {
    fs->f->code[e->u.info] = fs->f->code[e->u.info] & 0x7FFFFF | ((nresults + 1) << 23);
    v4 = &fs->f->code[e->u.info];
    *v4 = *v4 & 0xFFFFC03F | (fs->freereg << 6);
    v5 = fs->freereg + 1;
    if ( v5 > fs->f->maxstacksize )
    {
      if ( v5 >= 250 )
        lexerror(fs->ls, "function or expression too complex", fs->ls->t.token);
      fs->f->maxstacksize = v5;
    }
    ++fs->freereg;
  }
}

void __fastcall luaK_storevar(FuncState *fs, expdesc *var, expdesc *ex)
{
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int info; // ecx

  if ( var->k == VLOCAL )
  {
    if ( ex->k == VNONRELOC )
    {
      info = ex->u.info;
      if ( (info & 0x100) == 0 && info >= fs->nactvar )
        --fs->freereg;
    }
    exp2reg(fs, ex, var->u.info);
  }
  else
  {
    if ( var->k == VUPVAL )
    {
      v8 = luaK_exp2anyreg(fs, ex);
      luaK_code(fs, ((v8 | (var->u.info << 17)) << 6) | 9);
    }
    else if ( var->k == VINDEXED )
    {
      v6 = 8;
      if ( var->u.ind.vt == 7 )
        v6 = 10;
      v7 = luaK_exp2RK(fs, ex);
      luaK_code(fs, v6 | ((var->u.ind.t | ((v7 | (var->u.ind.idx << 9)) << 8)) << 6));
    }
    if ( ex->k == VNONRELOC )
    {
      v9 = ex->u.info;
      if ( (v9 & 0x100) == 0 && v9 >= fs->nactvar )
        --fs->freereg;
    }
  }
}

void __fastcall patchlistaux(FuncState *fs, int list, int vtarget, int reg, int dtarget)
{
  int v5; // er11
  int v7; // er10
  __int64 v9; // rbx
  unsigned int *v10; // r8
  int v11; // eax
  unsigned int *v12; // rdx
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned int *code; // rcx

  if ( list != -1 )
  {
    v5 = reg;
    v7 = list;
    do
    {
      v9 = v7;
      v10 = &fs->f->code[v9];
      v11 = (*v10 >> 14) - 0x1FFFF;
      if ( *v10 >> 14 == 131070 )
        reg |= v11;
      else
        reg = v7 + v11 + 1;
      if ( v7 < 1
        || (v12 = v10 - 1,
            extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[12][(*(v10 - 1) & 0x3F) + 184] >= 0) )
      {
        v12 = &fs->f->code[v9];
      }
      v13 = *v12;
      if ( (*(_BYTE *)v12 & 0x3F) == 28 )
      {
        if ( v5 == 255 || v5 == v13 >> 23 )
          v14 = v13 & 0x7FC000 | ((v13 & 0xFF81FFFF | 0x360000) >> 17);
        else
          v14 = v13 ^ ((unsigned __int16)v13 ^ (unsigned __int16)((_WORD)v5 << 6)) & 0x3FC0;
        *v12 = v14;
        code = fs->f->code;
        if ( (int)abs32(vtarget - v7 - 1) > 0x1FFFF )
          lexerror(fs->ls, "control structure too long", fs->ls->t.token);
        code[v9] &= 0x3FFFu;
        code[v9] |= (vtarget - v7 + 131070) << 14;
      }
      else
      {
        if ( (int)abs32(dtarget - v7 - 1) > 0x1FFFF )
          lexerror(fs->ls, "control structure too long", fs->ls->t.token);
        *v10 &= 0x3FFFu;
        *v10 |= (dtarget - v7 + 131070) << 14;
      }
      v7 = reg;
    }
    while ( reg != -1 );
  }
}

void __fastcall removevalues(FuncState *fs, int list)
{
  __int64 v3; // r9
  unsigned int *v4; // r8
  unsigned int *v5; // rcx
  unsigned int *code; // rcx

  for ( ; list != -1; list += (code[v3] >> 14) - 0x1FFFF + 1 )
  {
    v3 = list;
    v4 = &fs->f->code[v3];
    if ( list < 1
      || (v5 = v4 - 1,
          extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[12][(*(v4 - 1) & 0x3F) + 184] >= 0) )
    {
      v5 = &fs->f->code[v3];
    }
    if ( (*(_BYTE *)v5 & 0x3F) == 28 )
      *v5 = *v5 & 0x7FC000 | ((*v5 & 0xFF81FFFF | 0x360000) >> 17);
    code = fs->f->code;
    if ( code[v3] >> 14 == 131070 )
      break;
  }
}

