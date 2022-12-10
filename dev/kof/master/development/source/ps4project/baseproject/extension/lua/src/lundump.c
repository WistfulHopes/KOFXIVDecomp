#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lzio.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lmem.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lfunc.c"

struct LoadState
{
	lua_State * L; // 0x0
	Zio * Z; // 0x8
	Mbuffer * b; // 0x10
	const char * name; // 0x18
};
long LoadChar(LoadState * S); // 0x1402A3080
long LoadInt(LoadState * S); // 0x1402A3160
float LoadNumber(LoadState * S); // 0x1402A3270
TString * LoadString(LoadState * S); // 0x1402A3350
void LoadCode(LoadState * S, Proto * f); // 0x1402A34D0
void LoadConstants(LoadState * S, Proto * f); // 0x1402A35E0
void LoadUpvalues(LoadState * S, Proto * f); // 0x1402A38C0
void LoadDebug(LoadState * S, Proto * f); // 0x1402A3A00
void LoadFunction(LoadState * S, Proto * f); // 0x1402A3C70
void LoadHeader(LoadState * S); // 0x1402A3CF0
Closure * luaU_undump(lua_State * L, Zio * Z, Mbuffer * buff, const char * name); // 0x1402A3EB0__int64 __fastcall LoadChar(LoadState *S)
{
  Zio *Z; // rbx
  unsigned __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  size_t n; // rdi
  char v9; // [rsp+40h] [rbp+0h] BYREF
  __int64 v10; // [rsp+48h] [rbp+8h] BYREF

  Z = S->Z;
  v3 = 1i64;
  do
  {
    if ( !Z->n )
    {
      v4 = (__int64)Z->reader(Z->L, Z->data, (unsigned __int64 *)&v10);
      if ( !v4 || (v5 = v10) == 0 )
      {
        luaO_pushfstring(S->L, "%s: %s precompiled chunk", S->name, "truncated");
        luaD_throw(S->L, 3);
      }
      v6 = v10 - 1;
      Z->p = (const char *)v4;
      Z->n = v5 - 1;
      Z->p = (const char *)(v4 + 1);
      Z->n = v6 + 1;
      Z->p = (const char *)v4;
    }
    n = Z->n;
    if ( v3 <= Z->n )
      n = v3;
    memmove(&v9, Z->p, n);
    Z->n -= n;
    Z->p += n;
    v3 -= n;
  }
  while ( v3 );
  return (unsigned int)v9;
}

void __fastcall LoadCode(LoadState *S, Proto *f)
{
  __int64 Int; // r14
  lua_State *L; // rbp
  __int64 v6; // rdi
  global_State *l_G; // rsi
  unsigned int *v8; // rax
  Zio *Z; // rcx

  Int = LoadInt(S);
  if ( (unsigned __int64)((int)Int + 1) > 0x3FFFFFFFFFFFFFFFi64 )
    luaG_runerror(S->L, "memory allocation error: block too big");
  L = S->L;
  v6 = 4 * Int;
  l_G = S->L->l_G;
  v8 = (unsigned int *)l_G->frealloc(l_G->ud, 0i64, 0i64, 4 * Int);
  if ( !v8 )
  {
    if ( v6 )
    {
      if ( !l_G->gcrunning
        || (luaC_fullgc(L, 1), (v8 = (unsigned int *)l_G->frealloc(l_G->ud, 0i64, 0i64, 4 * Int)) == 0i64) )
      {
        luaD_throw(L, 4);
      }
    }
  }
  l_G->GCdebt += v6;
  Z = S->Z;
  f->code = v8;
  f->sizecode = Int;
  if ( luaZ_read(Z, v8, 4 * Int) )
  {
    luaO_pushfstring(S->L, "%s: %s precompiled chunk", S->name, "truncated");
    luaD_throw(S->L, 3);
  }
}

void __fastcall LoadConstants(LoadState *S, Proto *f)
{
  __int64 Int; // rsi
  lua_State *L; // r13
  __int64 v6; // rbp
  __int64 v7; // rbx
  global_State *l_G; // rdi
  lua_TValue *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdi
  lua_TValue *k; // rsi
  int Char; // eax
  int v16; // eax
  int v17; // eax
  TString *String; // rax
  __int64 v19; // rdi
  lua_State *v20; // r13
  __int64 v21; // r12
  __int64 v22; // rbp
  global_State *v23; // rsi
  Proto **v24; // r9
  int v25; // er8
  Proto ***p_p; // rsi
  int v27; // edi
  __int64 i; // rcx

  Int = LoadInt(S);
  if ( (unsigned __int64)((int)Int + 1) > 0xFFFFFFFFFFFFFFFi64 )
    luaG_runerror(S->L, "memory allocation error: block too big");
  L = S->L;
  v6 = Int;
  v7 = 16 * Int;
  l_G = S->L->l_G;
  v9 = (lua_TValue *)l_G->frealloc(l_G->ud, 0i64, 0i64, 16 * Int);
  if ( !v9 )
  {
    if ( v7 )
    {
      if ( !l_G->gcrunning
        || (luaC_fullgc(L, 1), (v9 = (lua_TValue *)l_G->frealloc(l_G->ud, 0i64, 0i64, 16 * Int)) == 0i64) )
      {
        luaD_throw(L, 4);
      }
    }
  }
  l_G->GCdebt += v7;
  v10 = 0i64;
  f->k = v9;
  f->sizek = Int;
  if ( (int)Int > 0 )
  {
    v11 = 0i64;
    v12 = Int;
    do
    {
      f->k[v11++].tt_ = 0;
      --v12;
    }
    while ( v12 );
    if ( (int)Int > 0 )
    {
      v13 = 0i64;
      do
      {
        k = f->k;
        Char = LoadChar(S);
        if ( Char )
        {
          v16 = Char - 1;
          if ( v16 )
          {
            v17 = v16 - 2;
            if ( v17 )
            {
              if ( v17 == 1 )
              {
                String = LoadString(S);
                k[v13].value_.gc = (GCObject *)String;
                k[v13].tt_ = String->tsv.tt | 0x40;
              }
            }
            else
            {
              k[v13].value_.n = LoadNumber(S);
              k[v13].tt_ = 3;
            }
          }
          else
          {
            k[v13].value_.b = LoadChar(S);
            k[v13].tt_ = 1;
          }
        }
        else
        {
          k[v13].tt_ = 0;
        }
        ++v13;
        --v6;
      }
      while ( v6 );
    }
  }
  v19 = LoadInt(S);
  if ( (unsigned __int64)((int)v19 + 1) > 0x1FFFFFFFFFFFFFFFi64 )
    luaG_runerror(S->L, "memory allocation error: block too big");
  v20 = S->L;
  v21 = 8 * v19;
  v22 = v19;
  v23 = S->L->l_G;
  v24 = (Proto **)v23->frealloc(v23->ud, 0i64, 0i64, 8 * v19);
  if ( !v24 )
  {
    if ( v21 )
    {
      if ( !v23->gcrunning
        || (luaC_fullgc(v20, 1), (v24 = (Proto **)v23->frealloc(v23->ud, 0i64, 0i64, 8 * v19)) == 0i64) )
      {
        luaD_throw(v20, 4);
      }
    }
  }
  v23->GCdebt += v21;
  v25 = 0;
  f->p = v24;
  p_p = &f->p;
  f->sizep = v19;
  if ( (int)v19 > 0 && (unsigned int)v19 >= 2 && (v24 > (Proto **)p_p || &v24[(int)v19 - 1] < (Proto **)p_p) )
  {
    v27 = v19 - (int)v19 % 2;
    do
      v25 += 2;
    while ( v25 < v27 );
    memset(v24, 0, 16i64 * ((v27 + 1) / 2));
  }
  for ( i = v25; i < v22; (*p_p)[i++] = 0i64 )
    ;
  if ( v22 > 0 )
  {
    do
    {
      (*p_p)[v10] = luaF_newproto(S->L);
      LoadFunction(S, (*p_p)[v10++]);
    }
    while ( v10 < v22 );
  }
}

void __fastcall LoadDebug(LoadState *S, Proto *f)
{
  __int64 Int; // r15
  __int64 v5; // rbp
  lua_State *L; // r14
  global_State *l_G; // rbx
  int *v8; // rax
  Zio *Z; // rcx
  __int64 v10; // r15
  lua_State *v11; // r13
  __int64 v12; // r14
  __int64 v13; // rbp
  global_State *v14; // rbx
  LocVar *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r14
  int v20; // eax
  __int64 v21; // rbp

  f->source = LoadString(S);
  Int = LoadInt(S);
  if ( (unsigned __int64)((int)Int + 1) > 0x3FFFFFFFFFFFFFFFi64 )
    luaG_runerror(S->L, "memory allocation error: block too big");
  v5 = 4 * Int;
  L = S->L;
  l_G = S->L->l_G;
  v8 = (int *)l_G->frealloc(l_G->ud, 0i64, 0i64, 4 * Int);
  if ( !v8 )
  {
    if ( v5 )
    {
      if ( !l_G->gcrunning || (luaC_fullgc(L, 1), (v8 = (int *)l_G->frealloc(l_G->ud, 0i64, 0i64, 4 * Int)) == 0i64) )
        luaD_throw(L, 4);
    }
  }
  l_G->GCdebt += v5;
  Z = S->Z;
  f->lineinfo = v8;
  f->sizelineinfo = Int;
  if ( luaZ_read(Z, v8, 4 * Int) )
  {
    luaO_pushfstring(S->L, "%s: %s precompiled chunk", S->name, "truncated");
    luaD_throw(S->L, 3);
  }
  v10 = LoadInt(S);
  if ( (unsigned __int64)((int)v10 + 1) > 0xFFFFFFFFFFFFFFFi64 )
    luaG_runerror(S->L, "memory allocation error: block too big");
  v11 = S->L;
  v12 = 16 * v10;
  v13 = v10;
  v14 = S->L->l_G;
  v15 = (LocVar *)v14->frealloc(v14->ud, 0i64, 0i64, 16 * v10);
  if ( !v15 )
  {
    if ( v12 )
    {
      if ( !v14->gcrunning
        || (luaC_fullgc(v11, 1), (v15 = (LocVar *)v14->frealloc(v14->ud, 0i64, 0i64, 16 * v10)) == 0i64) )
      {
        luaD_throw(v11, 4);
      }
    }
  }
  v14->GCdebt += v12;
  v16 = 0i64;
  f->locvars = v15;
  f->sizelocvars = v10;
  if ( (int)v10 > 0 )
  {
    v17 = 0i64;
    v18 = v10;
    do
    {
      f->locvars[v17++].varname = 0i64;
      --v18;
    }
    while ( v18 );
    if ( (int)v10 > 0 )
    {
      v19 = 0i64;
      do
      {
        f->locvars[v19].varname = LoadString(S);
        f->locvars[v19++].startpc = LoadInt(S);
        f->locvars[v19 - 1].endpc = LoadInt(S);
        --v13;
      }
      while ( v13 );
    }
  }
  v20 = LoadInt(S);
  v21 = v20;
  if ( v20 > 0 )
  {
    do
    {
      f->upvalues[v16++].name = LoadString(S);
      --v21;
    }
    while ( v21 );
  }
}

void __fastcall LoadFunction(LoadState *S, Proto *f)
{
  f->linedefined = LoadInt(S);
  f->lastlinedefined = LoadInt(S);
  f->numparams = LoadChar(S);
  f->is_vararg = LoadChar(S);
  f->maxstacksize = LoadChar(S);
  LoadCode(S, f);
  LoadConstants(S, f);
  LoadUpvalues(S, f);
  LoadDebug(S, f);
}

void __fastcall LoadHeader(LoadState *S)
{
  __int128 v2; // [rsp+20h] [rbp-48h]
  __int128 b; // [rsp+38h] [rbp-30h] BYREF
  __int16 v4; // [rsp+48h] [rbp-20h]

  BYTE4(v2) = 16 * (a5[0] - 35) + 50;
  HIDWORD(v2) = 168661785;
  LODWORD(v2) = 1635077147;
  *(_DWORD *)((char *)&v2 + 5) = 134480128;
  *(_WORD *)((char *)&v2 + 9) = 1028;
  BYTE11(v2) = 0;
  LOBYTE(b) = 27;
  if ( luaZ_read(S->Z, (char *)&b + 1, 0x11ui64) )
  {
    luaO_pushfstring(S->L, "%s: %s precompiled chunk", S->name, "truncated");
    luaD_throw(S->L, 3);
  }
  if ( v2 != b || v4 != 2586 )
  {
    if ( (_DWORD)b == 1635077147 )
    {
      if ( WORD2(v2) == WORD2(b) )
      {
        if ( (_QWORD)v2 == (_QWORD)b && DWORD2(v2) == DWORD2(b) )
        {
          luaO_pushfstring(S->L, "%s: %s precompiled chunk", S->name, "corrupted");
          luaD_throw(S->L, 3);
        }
        luaO_pushfstring(S->L, "%s: %s precompiled chunk", S->name, "incompatible");
        luaD_throw(S->L, 3);
      }
      luaO_pushfstring(S->L, "%s: %s precompiled chunk", S->name, "version mismatch in");
      luaD_throw(S->L, 3);
    }
    luaO_pushfstring(S->L, "%s: %s precompiled chunk", S->name, "not a");
    luaD_throw(S->L, 3);
  }
}

__int64 __fastcall LoadInt(LoadState *S)
{
  Zio *Z; // rbx
  unsigned __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  size_t n; // rdi
  __int64 result; // rax
  unsigned int v9; // [rsp+40h] [rbp+0h] BYREF
  __int64 v10; // [rsp+48h] [rbp+8h] BYREF

  Z = S->Z;
  v3 = 4i64;
  do
  {
    if ( !Z->n )
    {
      v4 = (__int64)Z->reader(Z->L, Z->data, (unsigned __int64 *)&v10);
      if ( !v4 || (v5 = v10) == 0 )
      {
        luaO_pushfstring(S->L, "%s: %s precompiled chunk", S->name, "truncated");
        luaD_throw(S->L, 3);
      }
      v6 = v10 - 1;
      Z->p = (const char *)v4;
      Z->n = v5 - 1;
      Z->p = (const char *)(v4 + 1);
      Z->n = v6 + 1;
      Z->p = (const char *)v4;
    }
    n = Z->n;
    if ( v3 <= Z->n )
      n = v3;
    memmove(&v9, Z->p, n);
    Z->n -= n;
    Z->p += n;
    v3 -= n;
  }
  while ( v3 );
  result = v9;
  if ( (v9 & 0x80000000) != 0 )
  {
    luaO_pushfstring(S->L, "%s: %s precompiled chunk", S->name, "corrupted");
    luaD_throw(S->L, 3);
  }
  return result;
}

float __fastcall LoadNumber(LoadState *S)
{
  Zio *Z; // rdi
  unsigned __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  size_t n; // rbx
  float v9; // [rsp+40h] [rbp+0h] BYREF
  __int64 v10; // [rsp+48h] [rbp+8h] BYREF

  Z = S->Z;
  v3 = 4i64;
  do
  {
    if ( !Z->n )
    {
      v4 = (__int64)Z->reader(Z->L, Z->data, (unsigned __int64 *)&v10);
      if ( !v4 || (v5 = v10) == 0 )
      {
        luaO_pushfstring(S->L, "%s: %s precompiled chunk", S->name, "truncated");
        luaD_throw(S->L, 3);
      }
      v6 = v10 - 1;
      Z->p = (const char *)v4;
      Z->n = v5 - 1;
      Z->p = (const char *)(v4 + 1);
      Z->n = v6 + 1;
      Z->p = (const char *)v4;
    }
    n = Z->n;
    if ( v3 <= Z->n )
      n = v3;
    memmove(&v9, Z->p, n);
    Z->n -= n;
    Z->p += n;
    v3 -= n;
  }
  while ( v3 );
  return v9;
}

GCObject *__fastcall LoadString(LoadState *S)
{
  Zio *Z; // rbx
  unsigned __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  size_t v7; // rdi
  unsigned __int64 v8; // rbx
  Mbuffer *b; // rdi
  lua_State *L; // rcx
  unsigned __int64 buffsize; // r8
  unsigned __int64 v13; // rsi
  char *buffer; // rdi
  unsigned __int64 v15; // rax
  lua_State *v16; // rcx
  __int64 v17; // [rsp+40h] [rbp-8h] BYREF
  unsigned __int64 n; // [rsp+48h] [rbp+0h] BYREF

  Z = S->Z;
  v3 = 8i64;
  do
  {
    if ( !Z->n )
    {
      v4 = (__int64)Z->reader(Z->L, Z->data, (unsigned __int64 *)&v17);
      if ( !v4 || (v5 = v17) == 0 )
      {
        luaO_pushfstring(S->L, "%s: %s precompiled chunk", S->name, "truncated");
        luaD_throw(S->L, 3);
      }
      v6 = v17 - 1;
      Z->p = (const char *)v4;
      Z->n = v5 - 1;
      Z->p = (const char *)(v4 + 1);
      Z->n = v6 + 1;
      Z->p = (const char *)v4;
    }
    v7 = Z->n;
    if ( v3 <= Z->n )
      v7 = v3;
    memmove(&n, Z->p, v7);
    Z->n -= v7;
    Z->p += v7;
    v3 -= v7;
  }
  while ( v3 );
  v8 = n;
  if ( !n )
    return 0i64;
  b = S->b;
  L = S->L;
  buffsize = b->buffsize;
  if ( n > buffsize )
  {
    v13 = n;
    if ( n < 0x20 )
      v13 = 32i64;
    if ( v13 + 1 > 0xFFFFFFFFFFFFFFFDui64 )
      luaG_runerror(L, "memory allocation error: block too big");
    b->buffer = (char *)luaM_realloc_(L, b->buffer, buffsize, v13);
    b->buffsize = v13;
  }
  buffer = b->buffer;
  v15 = luaZ_read(S->Z, buffer, v8);
  v16 = S->L;
  if ( v15 )
  {
    luaO_pushfstring(v16, "%s: %s precompiled chunk", S->name, "truncated");
    luaD_throw(S->L, 3);
  }
  return luaS_newlstr(v16, buffer, v8 - 1);
}

void __fastcall LoadUpvalues(LoadState *S, Proto *f)
{
  __int64 Int; // r15
  __int64 v5; // rsi
  lua_State *L; // r13
  __int64 v7; // rbp
  global_State *l_G; // rbx
  Upvaldesc *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx

  Int = (int)LoadInt(S);
  if ( (unsigned __int64)((int)Int + 1) > 0xFFFFFFFFFFFFFFFi64 )
    luaG_runerror(S->L, "memory allocation error: block too big");
  v5 = Int;
  L = S->L;
  v7 = 16 * Int;
  l_G = S->L->l_G;
  v9 = (Upvaldesc *)l_G->frealloc(l_G->ud, 0i64, 0i64, 16 * Int);
  if ( !v9 )
  {
    if ( v7 )
    {
      if ( !l_G->gcrunning
        || (luaC_fullgc(L, 1), (v9 = (Upvaldesc *)l_G->frealloc(l_G->ud, 0i64, 0i64, 16 * Int)) == 0i64) )
      {
        luaD_throw(L, 4);
      }
    }
  }
  l_G->GCdebt += v7;
  v10 = 0i64;
  f->upvalues = v9;
  f->sizeupvalues = Int;
  if ( (int)Int > 0 )
  {
    v11 = 0i64;
    v12 = Int;
    do
    {
      f->upvalues[v11++].name = 0i64;
      --v12;
    }
    while ( v12 );
    if ( (int)Int > 0 )
    {
      do
      {
        f->upvalues[v10++].instack = LoadChar(S);
        f->upvalues[v10 - 1].idx = LoadChar(S);
        --v5;
      }
      while ( v5 );
    }
  }
}

GCObject *__fastcall luaU_undump(lua_State *L, Zio *Z, Mbuffer *buff, const char *name)
{
  char v5; // cl
  const char *v6; // rax
  GCObject *v7; // rsi
  lua_TValue *top; // rax
  signed __int64 v9; // rax
  Proto *v10; // rax
  Proto *v11; // rbx
  Table *env; // rbp
  __int64 metatable_low; // rbx
  GCObject *result; // rax
  CallInfo **v15; // rcx
  lua_TValue *v16; // rcx
  LoadState S; // [rsp+30h] [rbp-28h] BYREF

  v5 = *name;
  if ( *name == 64 || v5 == 61 )
  {
    v6 = name + 1;
  }
  else
  {
    v6 = "binary string";
    if ( v5 != 27 )
      v6 = name;
  }
  S.name = v6;
  S.L = L;
  S.Z = Z;
  S.b = buff;
  LoadHeader(&S);
  v7 = luaC_newobj(L, 6, 0x28ui64, 0i64);
  v7->u.uv.env = 0i64;
  v7->ts.tsv.extra = 1;
  v7->u.uv.len = 0i64;
  top = L->top;
  top->value_.gc = v7;
  top->tt_ = 70;
  v9 = (char *)L->stack_last - (char *)++L->top;
  if ( v9 < 0 || (v9 & 0xFFFFFFFFFFFFFFF0ui64) == 0 )
    luaD_growstack(L, 0);
  v10 = luaF_newproto(L);
  v7->u.uv.env = (Table *)v10;
  v11 = v10;
  v10->linedefined = LoadInt(&S);
  v11->lastlinedefined = LoadInt(&S);
  v11->numparams = LoadChar(&S);
  v11->is_vararg = LoadChar(&S);
  v11->maxstacksize = LoadChar(&S);
  LoadCode(&S, v11);
  LoadConstants(&S, v11);
  LoadUpvalues(&S, v11);
  LoadDebug(&S, v11);
  env = v7->u.uv.env;
  metatable_low = SLODWORD(env[1].metatable);
  if ( (_DWORD)metatable_low == 1 )
    return v7;
  result = luaC_newobj(L, 6, 8 * (int)metatable_low + 32, 0i64);
  result->u.uv.env = 0i64;
  result->ts.tsv.extra = metatable_low;
  if ( (_DWORD)metatable_low )
  {
    v15 = &result->th.ci + metatable_low;
    do
    {
      *--v15 = 0i64;
      LODWORD(metatable_low) = metatable_low - 1;
    }
    while ( (_DWORD)metatable_low );
  }
  result->u.uv.env = env;
  v16 = L->top;
  v16[-1].value_.gc = result;
  v16[-1].tt_ = 70;
  return result;
}

