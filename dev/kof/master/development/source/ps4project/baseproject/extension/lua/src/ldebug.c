#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lfunc.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lvm.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/ldo.c"

typedef _SETJMP_FLOAT128 SETJMP_FLOAT128;
typedef _SETJMP_FLOAT128 _JBTYPE;
typedef _SETJMP_FLOAT128 jmp_buf[16];
long currentline(CallInfo * ci); // 0x14028DC70
const char * findlocal(lua_State * L, CallInfo * ci, long n, lua_TValue * * pos); // 0x14028DCA0
const char * lua_getlocal(lua_State * L, const lua_Debug * ar, long n); // 0x14028DDF0
void funcinfo(lua_Debug * ar, Closure * cl); // 0x14028DEA0
void collectvalidlines(lua_State * L, Closure * f); // 0x14028DF30
long auxgetinfo(lua_State * L, const char * what, lua_Debug * ar, Closure * f, CallInfo * ci); // 0x14028E000
long lua_getinfo(lua_State * L, const char * what, lua_Debug * ar); // 0x14028E1D0
void kname(Proto * p, long pc, long c, const char * * name); // 0x14028E2A0
long findsetreg(Proto * p, long lastpc, long reg); // 0x14028E300
const char * getobjname(Proto * p, long lastpc, long reg, const char * * name); // 0x14028E440
const char * getfuncname(lua_State * L, CallInfo * ci, const char * * name); // 0x14028E6B0
void luaG_typeerror(lua_State * L, const lua_TValue * o, const char * op); // 0x14028E830
void luaG_ordererror(lua_State * L, const lua_TValue * p1, const lua_TValue * p2); // 0x14028E970
void addinfo(lua_State * L, const char * msg); // 0x14028E9C0
void luaG_errormsg(lua_State * L); // 0x14028EA90
void luaG_runerror(lua_State * L, const char * fmt, ...); // 0x14028EB70void __fastcall addinfo(lua_State *L, const char *msg)
{
  CallInfo *ci; // r9
  Table *env; // r8
  Node *lastfree; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  char out[2]; // [rsp+30h] [rbp-58h] BYREF

  ci = L->ci;
  if ( (ci->callstatus & 1) != 0 )
  {
    env = ci->func->value_.gc->u.uv.env;
    lastfree = env->lastfree;
    if ( lastfree )
      v7 = *(&lastfree->i_val.value_.b + (int)((((char *)ci->u.l.savedpc - (char *)env->array) >> 2) - 1));
    else
      v7 = 0;
    v8 = *(_QWORD *)&env[1].tt;
    if ( v8 )
      luaO_chunkid(out, (const char *)(v8 + 24), (unsigned __int64)env);
    else
      strcpy(out, "?");
    luaO_pushfstring(L, "%s:%d: %s", out, v7, msg);
  }
}

__int64 __fastcall auxgetinfo(lua_State *L, const char *what, lua_Debug *ar, Closure *f, CallInfo *ci)
{
  char v5; // al
  const char *v8; // rbx
  unsigned int i; // ebp
  unsigned __int8 nupvalues; // al
  CallInfo *previous; // rdx

  v5 = *what;
  v8 = what;
  for ( i = 1; v5; ++v8 )
  {
    switch ( v5 )
    {
      case 'L':
      case 'f':
        break;
      case 'S':
        funcinfo(ar, f);
        break;
      case 'l':
        if ( ci && (ci->callstatus & 1) != 0 )
          ar->currentline = currentline(ci);
        else
          ar->currentline = -1;
        break;
      case 'n':
        if ( ci && (ci->callstatus & 0x40) == 0 && (previous = ci->previous, (previous->callstatus & 1) != 0) )
          ar->namewhat = getfuncname(L, previous, &ar->name);
        else
          ar->namewhat = 0i64;
        if ( !ar->namewhat )
        {
          ar->namewhat = &pnewText;
          ar->name = 0i64;
        }
        break;
      case 't':
        if ( ci )
          ar->istailcall = ci->callstatus & 0x40;
        else
          ar->istailcall = 0;
        break;
      case 'u':
        if ( f )
          nupvalues = f->c.nupvalues;
        else
          nupvalues = 0;
        ar->nups = nupvalues;
        if ( !f || f->c.tt == 38 )
        {
          *(_WORD *)&ar->nparams = 256;
        }
        else
        {
          ar->isvararg = *((_BYTE *)f->c.f + 121);
          ar->nparams = *((_BYTE *)f->c.f + 120);
        }
        break;
      default:
        i = 0;
        break;
    }
    v5 = v8[1];
  }
  return i;
}

void __fastcall collectvalidlines(lua_State *L, Closure *f)
{
  int *v4; // rsi
  Table *v5; // rax
  lua_TValue *top; // rcx
  int v7; // ebx
  Table *v8; // r14
  lua_TValue value; // [rsp+20h] [rbp-18h] BYREF

  if ( !f || f->c.tt == 38 )
  {
    L->top->tt_ = 0;
    ++L->top;
  }
  else
  {
    v4 = (int *)*((_QWORD *)f->c.f + 5);
    v5 = luaH_new(L);
    top = L->top;
    v7 = 0;
    v8 = v5;
    value.value_.b = 1;
    value.tt_ = 1;
    top->value_.gc = (GCObject *)v5;
    top->tt_ = 69;
    ++L->top;
    if ( *((int *)f->c.f + 23) > 0 )
    {
      do
      {
        luaH_setint(L, v8, *v4++, &value);
        ++v7;
      }
      while ( v7 < *((_DWORD *)f->c.f + 23) );
    }
  }
}

__int64 __fastcall currentline(CallInfo *ci)
{
  Table *env; // r8
  Node *lastfree; // rdx

  env = ci->func->value_.gc->u.uv.env;
  lastfree = env->lastfree;
  if ( lastfree )
    return *((unsigned int *)&lastfree->i_val.value_.b + (int)((((char *)ci->u.l.savedpc - (char *)env->array) >> 2) - 1));
  else
    return 0i64;
}

const char *__fastcall findlocal(lua_State *L, CallInfo *ci, int n, lua_TValue **pos)
{
  __int64 v5; // r10
  lua_TValue *func; // rdx
  int v9; // er10
  __int64 sizearray_low; // r8
  const char *result; // rax
  int v12; // er9
  lua_TValue *base; // rbx
  Table *env; // rax
  int v15; // ecx
  int v16; // er8
  GCObject *gclist; // rbp
  __int64 node_high; // rdi
  __int64 v19; // rdx
  unsigned int *p_hash; // rax
  CallInfo *p_top; // rcx

  v5 = n;
  if ( (ci->callstatus & 1) != 0 )
  {
    if ( n < 0 )
    {
      func = ci->func;
      v9 = -n;
      sizearray_low = LOBYTE(func->value_.gc->u.uv.env[1].sizearray);
      if ( v9 >= ci->u.l.base - func - sizearray_low )
        return 0i64;
      *pos = &func[sizearray_low + v9];
      return "(*vararg)";
    }
    v12 = n;
    base = ci->u.l.base;
    env = ci->func->value_.gc->u.uv.env;
    v15 = 0;
    v16 = (((char *)ci->u.l.savedpc - (char *)env->array) >> 2) - 1;
    if ( SHIDWORD(env[1].node) > 0 )
    {
      gclist = env->gclist;
      node_high = SHIDWORD(env[1].node);
      v19 = 0i64;
      p_hash = &gclist->ts.tsv.hash;
      while ( (int)*(p_hash - 1) <= v16 )
      {
        if ( v16 < (int)*p_hash && !--v12 )
        {
          result = (const char *)(*((_QWORD *)&gclist->gch.next + 2 * v15) + 24i64);
          if ( *((_QWORD *)&gclist->gch.next + 2 * v15) != -24i64 )
            goto LABEL_21;
          break;
        }
        ++v15;
        ++v19;
        p_hash += 4;
        if ( v19 >= node_high )
          break;
      }
    }
  }
  else
  {
    base = ci->func + 1;
  }
  p_top = (CallInfo *)&L->top;
  if ( ci != L->ci )
    p_top = ci->next;
  if ( p_top->func - base < v5 || (int)v5 <= 0 )
    return 0i64;
  result = "(*temporary)";
LABEL_21:
  *pos = &base[(int)v5 - 1];
  return result;
}

__int64 __fastcall findsetreg(Proto *p, int lastpc, int reg)
{
  int v3; // edi
  unsigned int v5; // er9
  int v6; // eax
  unsigned int *code; // rbx
  unsigned int v8; // er8
  __int64 v9; // r10
  int v10; // er11
  int v11; // ecx

  v3 = 0;
  v5 = -1;
  v6 = 0;
  if ( lastpc > 0 )
  {
    code = p->code;
    while ( 2 )
    {
      v8 = *code;
      v9 = *code & 0x3F;
      v10 = (unsigned __int8)(*code >> 6);
      switch ( (int)v9 )
      {
        case 4:
          if ( v10 <= reg && reg <= (int)(v10 + (v8 >> 23)) )
            goto LABEL_17;
          goto LABEL_19;
        case 23:
          v11 = (v8 >> 14) + v6 - 131070;
          if ( v6 < v11 && v11 <= lastpc && v11 > v3 )
            v3 = (v8 >> 14) + v6 - 131070;
          goto LABEL_19;
        case 27:
          goto $LN16_52;
        case 29:
        case 30:
          if ( reg >= v10 )
            goto LABEL_17;
          goto LABEL_19;
        case 34:
          if ( reg >= v10 + 2 )
            goto LABEL_17;
          goto LABEL_19;
        default:
          if ( (extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[12][v9 + 184] & 0x40) == 0 )
            goto LABEL_19;
$LN16_52:
          if ( reg == v10 )
          {
LABEL_17:
            v5 = v6;
            if ( v6 < v3 )
              v5 = -1;
          }
LABEL_19:
          ++v6;
          ++code;
          if ( v6 >= lastpc )
            return v5;
          continue;
      }
    }
  }
  return v5;
}

void __fastcall funcinfo(lua_Debug *ar, Closure *cl, unsigned __int64 a3)
{
  int (__fastcall *f)(lua_State *); // r8
  __int64 v6; // rax
  const char *v7; // rax
  int v8; // ecx
  const char *v9; // rax

  if ( !cl || cl->c.tt == 38 )
  {
    *(_QWORD *)&ar->linedefined = -1i64;
    ar->source = "=[C]";
    ar->what = "C";
    luaO_chunkid(ar->short_src, ar->source, a3);
  }
  else
  {
    f = cl->c.f;
    v6 = *((_QWORD *)f + 9);
    if ( v6 )
      v7 = (const char *)(v6 + 24);
    else
      v7 = "=?";
    ar->source = v7;
    v8 = *((_DWORD *)f + 26);
    ar->linedefined = v8;
    ar->lastlinedefined = *((_DWORD *)f + 27);
    v9 = "Lua";
    if ( !v8 )
      v9 = "main";
    ar->what = v9;
    luaO_chunkid(ar->short_src, ar->source, (unsigned __int64)"main");
  }
}

const char *__fastcall getfuncname(lua_State *L, CallInfo *ci, const char **name)
{
  Proto *p; // rbx
  int v5; // er11
  const char *result; // rax
  __int64 v7; // rcx

  p = ci->func->value_.gc->cl.l.p;
  v5 = ci->u.l.savedpc - p->code - 1;
  switch ( p->code[v5] & 0x3F )
  {
    case 6u:
    case 7u:
    case 0xCu:
      v7 = 288i64;
      goto LABEL_18;
    case 8u:
    case 0xAu:
      v7 = 296i64;
      goto LABEL_18;
    case 0xDu:
      v7 = 336i64;
      goto LABEL_18;
    case 0xEu:
      v7 = 344i64;
      goto LABEL_18;
    case 0xFu:
      v7 = 352i64;
      goto LABEL_18;
    case 0x10u:
      v7 = 360i64;
      goto LABEL_18;
    case 0x11u:
      v7 = 368i64;
      goto LABEL_18;
    case 0x12u:
      v7 = 376i64;
      goto LABEL_18;
    case 0x13u:
      v7 = 384i64;
      goto LABEL_18;
    case 0x15u:
      v7 = 320i64;
      goto LABEL_18;
    case 0x16u:
      v7 = 408i64;
      goto LABEL_18;
    case 0x18u:
      v7 = 328i64;
      goto LABEL_18;
    case 0x19u:
      v7 = 392i64;
      goto LABEL_18;
    case 0x1Au:
      v7 = 400i64;
LABEL_18:
      result = "metamethod";
      *name = *(char **)((char *)&L->l_G->frealloc + v7) + 24;
      break;
    case 0x1Du:
    case 0x1Eu:
      result = getobjname(p, v5, (unsigned __int8)(p->code[v5] >> 6), name);
      break;
    case 0x22u:
      result = "for iterator";
      *name = "for iterator";
      break;
    default:
      result = 0i64;
      break;
  }
  return result;
}

const char *__fastcall getobjname(Proto *p, int lastpc, int reg, const char **name)
{
  __int64 v8; // rdi
  int v9; // edx
  __int64 v10; // r10
  LocVar *locvars; // r8
  int *p_endpc; // rax
  const char *v13; // rax
  int v14; // eax
  unsigned __int64 v15; // r8
  unsigned int v16; // edx
  const char *result; // rax
  int v18; // ebp
  unsigned int v19; // er8
  const char *v20; // rsi
  TString *v21; // rsi
  char v22; // al
  TString *v23; // rsi
  unsigned int v24; // er8
  lua_TValue *v25; // rdx

  v8 = 0i64;
  while ( 2 )
  {
    v9 = reg + 1;
    v10 = 0i64;
    if ( p->sizelocvars > 0 )
    {
      locvars = p->locvars;
      p_endpc = &locvars->endpc;
      while ( *(p_endpc - 1) <= lastpc )
      {
        if ( lastpc < *p_endpc && !--v9 )
        {
          v13 = (const char *)&locvars[v10].varname[1];
          goto LABEL_9;
        }
        ++v10;
        p_endpc += 4;
        if ( v10 >= p->sizelocvars )
          break;
      }
    }
    v13 = 0i64;
LABEL_9:
    *name = v13;
    if ( v13 )
      return "local";
    v14 = findsetreg(p, lastpc, reg);
    lastpc = v14;
    if ( v14 == -1 )
      return 0i64;
    v15 = p->code[v14];
    v16 = p->code[v14] & 0x3F;
    switch ( v16 )
    {
      case 0u:
        reg = (unsigned int)v15 >> 23;
        if ( (unsigned int)v15 >> 23 >= (unsigned __int8)((unsigned int)v15 >> 6) )
          return 0i64;
        continue;
      case 1u:
      case 2u:
        if ( v16 == 1 )
          v24 = (unsigned int)v15 >> 14;
        else
          v24 = p->code[v14 + 1] >> 6;
        v25 = &p->k[v24];
        if ( (v25->tt_ & 0xF) != 4 )
          return 0i64;
        *name = (const char *)&v25->value_.gc->th.l_G;
        return "constant";
      case 5u:
        v23 = p->upvalues[v15 >> 23].name;
        if ( v23 )
        {
          result = "upvalue";
          *name = (const char *)&v23[1];
        }
        else
        {
          *name = "?";
          return "upvalue";
        }
        return result;
      case 6u:
      case 7u:
        v18 = ((unsigned int)v15 >> 14) & 0x1FF;
        v19 = (unsigned int)v15 >> 23;
        if ( v16 == 7 )
        {
          v20 = luaF_getlocalname(p, v19 + 1, v14);
        }
        else
        {
          v21 = p->upvalues[v19].name;
          if ( v21 )
            v20 = (const char *)&v21[1];
          else
            v20 = "?";
        }
        kname(p, lastpc, v18, name);
        if ( !v20 )
          return "field";
        break;
      case 0xCu:
        kname(p, v14, ((unsigned int)v15 >> 14) & 0x1FF, name);
        return "method";
      default:
        return 0i64;
    }
    break;
  }
  while ( 1 )
  {
    v22 = v20[v8++];
    if ( v22 != aEnv[v8 - 1] )
      break;
    if ( v8 == 5 )
      return "global";
  }
  return "field";
}

void __fastcall kname(Proto *p, int pc, int c, const char **name)
{
  lua_TValue *v5; // rdx
  const char *v6; // rax

  if ( (c & 0x100) != 0 )
  {
    v5 = &p->k[c & 0xFFFFFFFFFFFFFEFFui64];
    if ( (v5->tt_ & 0xF) == 4 )
    {
      *name = (const char *)&v5->value_.gc->th.l_G;
      return;
    }
    goto LABEL_6;
  }
  v6 = getobjname(p, pc, c, name);
  if ( !v6 || *v6 != 99 )
LABEL_6:
    *name = "?";
}

void __fastcall __noreturn luaG_errormsg(lua_State *L)
{
  __int64 errfunc; // rcx
  char *v3; // rdx
  lua_TValue *top; // rcx
  lua_TValue *v5; // rcx
  lua_TValue *v6; // rax
  lua_TValue *v7; // rdx
  unsigned __int16 nCcalls; // ax

  errfunc = L->errfunc;
  if ( errfunc )
  {
    v3 = (char *)L->stack + errfunc;
    if ( (v3[8] & 0xF) != 6 )
      luaD_throw(L, 6);
    top = L->top;
    top->value_.gc = top[-1].value_.gc;
    top->tt_ = top[-1].tt_;
    v5 = L->top;
    v5[-1].value_.gc = *(GCObject **)v3;
    v5[-1].tt_ = *((_DWORD *)v3 + 2);
    v6 = ++L->top;
    ++L->nCcalls;
    v7 = v6 - 2;
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
    --L->nny;
    --L->nCcalls;
  }
  luaD_throw(L, 2);
}

void __fastcall __noreturn luaG_ordererror(lua_State *L, const lua_TValue *p1, const lua_TValue *p2)
{
  int tt; // eax
  const char *v4; // r8
  const char *v5; // r9

  tt = p2->tt_;
  v4 = *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[14][8 * (p1->tt_ & 0xF) + 112];
  v5 = *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[14][8 * (tt & 0xF) + 112];
  if ( v4 == v5 )
    luaG_runerror(L, "attempt to compare two %s values", v4);
  luaG_runerror(L, "attempt to compare %s with %s", v4, v5);
}

void __noreturn luaG_runerror(lua_State *L, const char *fmt, ...)
{
  const char *v3; // rax
  va_list argp; // [rsp+40h] [rbp+18h] BYREF

  va_start(argp, fmt);
  v3 = luaO_pushvfstring(L, fmt, argp);
  addinfo(L, v3);
  luaG_errormsg(L);
}

void __fastcall __noreturn luaG_typeerror(lua_State *L, const lua_TValue *o, const char *op)
{
  CallInfo *ci; // r11
  __int64 v4; // rax
  int v5; // er9
  const char *v9; // rbp
  __int64 v10; // rdx
  Value v11; // rbx
  unsigned __int64 *p_len; // rcx
  lua_TValue *base; // rdx
  lua_TValue *top; // rcx
  const lua_TValue *v15; // rax
  __int64 v16; // rax
  char *v17; // rax
  const char *v18; // r9
  char *name; // [rsp+40h] [rbp+8h] BYREF

  ci = L->ci;
  v4 = (o->tt_ & 0xFu) + 1;
  v5 = 0;
  name = 0i64;
  v9 = *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[14][8 * v4 + 104];
  if ( (ci->callstatus & 1) != 0 )
  {
    v10 = 0i64;
    v11.gc = ci->func->value_.gc;
    if ( v11.gc->ts.tsv.extra )
    {
      p_len = &v11.gc->u.uv.len;
      while ( *(const lua_TValue **)(*p_len + 16) != o )
      {
        ++v5;
        ++v10;
        ++p_len;
        if ( v10 >= v11.gc->ts.tsv.extra )
          goto LABEL_6;
      }
      v16 = *(_QWORD *)(*(_QWORD *)&v11.gc->u.uv.env->sizearray + 16i64 * v5);
      if ( v16 )
      {
        v17 = (char *)(v16 + 24);
        v18 = "upvalue";
        name = v17;
      }
      else
      {
        v17 = "?";
        name = "?";
        v18 = "upvalue";
      }
LABEL_15:
      luaG_runerror(L, "attempt to %s %s '%s' (a %s value)", op, v18, v17, v9);
    }
LABEL_6:
    base = ci->u.l.base;
    top = ci->top;
    v15 = base;
    if ( base < top )
    {
      while ( o != v15 )
      {
        if ( ++v15 >= top )
          goto LABEL_9;
      }
      v18 = getobjname(
              v11.gc->cl.l.p,
              (unsigned int)(((char *)ci->u.l.savedpc - (char *)v11.gc->u.uv.env->array) >> 2) - 1,
              o - base,
              (const char **)&name);
      if ( v18 )
      {
        v17 = name;
        goto LABEL_15;
      }
    }
  }
LABEL_9:
  luaG_runerror(L, "attempt to %s a %s value", op, v9);
}

__int64 __fastcall lua_getinfo(lua_State *L, const char *what, lua_Debug *ar)
{
  Closure *gc; // rbp
  const char *v4; // rsi
  lua_TValue *top; // rdi
  CallInfo *ci; // rcx
  lua_TValue *func; // rdi
  unsigned int v9; // er14
  lua_TValue *v10; // r8

  gc = 0i64;
  v4 = what;
  if ( *what == 62 )
  {
    top = L->top;
    ci = 0i64;
    func = top - 1;
    v4 = what + 1;
    L->top = func;
  }
  else
  {
    ci = ar->i_ci;
    func = ci->func;
  }
  if ( (func->tt_ & 0x1F) == 6 )
    gc = (Closure *)func->value_.gc;
  v9 = auxgetinfo(L, v4, ar, gc, ci);
  if ( strchr(v4, 102) )
  {
    v10 = L->top;
    v10->value_.gc = func->value_.gc;
    v10->tt_ = func->tt_;
    ++L->top;
  }
  if ( strchr(v4, 76) )
    collectvalidlines(L, gc);
  return v9;
}

const char *__fastcall lua_getlocal(lua_State *L, const lua_Debug *ar, int n)
{
  lua_TValue *top; // rax
  Table *env; // rcx
  GCObject *gclist; // r10
  __int64 node_high; // r9
  __int64 v8; // rcx
  int *i; // rax
  const char *result; // rax
  CallInfo *i_ci; // rdx
  lua_TValue *pos; // [rsp+38h] [rbp+10h] BYREF

  if ( ar )
  {
    i_ci = ar->i_ci;
    pos = 0i64;
    result = findlocal(L, i_ci, n, &pos);
    if ( result )
      *L->top++ = *pos;
  }
  else
  {
    top = L->top;
    if ( top[-1].tt_ == 70 )
    {
      env = top[-1].value_.gc->u.uv.env;
      if ( SHIDWORD(env[1].node) > 0 )
      {
        gclist = env->gclist;
        node_high = SHIDWORD(env[1].node);
        v8 = 0i64;
        for ( i = (int *)&gclist->ts.tsv.hash; *(i - 1) <= 0; i += 4 )
        {
          if ( *i > 0 && !--n )
            return (const char *)(*((_QWORD *)&gclist->gch.next + 2 * (int)ar) + 24i64);
          LODWORD(ar) = (_DWORD)ar + 1;
          if ( ++v8 >= node_high )
            return 0i64;
        }
      }
    }
    return 0i64;
  }
  return result;
}

