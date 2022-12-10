#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lundump.c"

struct DumpState
{
	lua_State * L; // 0x0
	long(*writer)(lua_State *, const void *, unsigned long long, void *); // 0x8
	void * data; // 0x10
	long strip; // 0x18
	long status; // 0x1C
};
void DumpVector(const void * b, long n, unsigned long long size, DumpState * D); // 0x14028FE90
void DumpString(const TString * s, DumpState * D); // 0x14028FF00
void DumpConstants(const Proto * f, DumpState * D); // 0x14028FF80
void DumpUpvalues(const Proto * f, DumpState * D); // 0x1402900F0
void DumpDebug(const Proto * f, DumpState * D); // 0x1402901C0
void DumpFunction(const Proto * f, DumpState * D); // 0x1402903E0void __fastcall DumpConstants(const Proto *f, DumpState *D)
{
  bool v2; // zf
  __int64 sizek; // rdi
  __int64 v6; // rbp
  __int64 v7; // r15
  __int64 v8; // rdi
  lua_TValue *k; // rsi
  unsigned __int64 v10; // r8
  __int64 sizep; // rdi
  int b; // [rsp+40h] [rbp+8h] BYREF

  v2 = D->status == 0;
  sizek = f->sizek;
  b = f->sizek;
  if ( v2 )
    D->status = D->writer(D->L, &b, 4ui64, D->data);
  v6 = 0i64;
  v7 = sizek;
  if ( (int)sizek > 0 )
  {
    v8 = 0i64;
    do
    {
      k = f->k;
      LOBYTE(b) = k[v8].tt_ & 0xF;
      if ( !D->status )
        D->status = D->writer(D->L, &b, 1ui64, D->data);
      if ( (k[v8].tt_ & 0xF) == 1 )
      {
        LOBYTE(b) = LOBYTE(k[v8].value_.n);
        if ( !D->status )
        {
          v10 = 1i64;
          goto LABEL_15;
        }
      }
      else
      {
        if ( (k[v8].tt_ & 0xF) != 3 )
        {
          if ( (k[v8].tt_ & 0xF) == 4 )
            DumpString((const TString *)k[v8].value_.gc, D);
          goto LABEL_16;
        }
        b = k[v8].value_.b;
        if ( !D->status )
        {
          v10 = 4i64;
LABEL_15:
          D->status = D->writer(D->L, &b, v10, D->data);
        }
      }
LABEL_16:
      ++v8;
      --v7;
    }
    while ( v7 );
  }
  sizep = f->sizep;
  b = f->sizep;
  if ( !D->status )
    D->status = D->writer(D->L, &b, 4ui64, D->data);
  if ( sizep > 0 )
  {
    do
      DumpFunction(f->p[v6++], D);
    while ( v6 < sizep );
  }
}

void __fastcall DumpDebug(const Proto *f, DumpState *D)
{
  TString *source; // rcx
  unsigned __int64 v5; // r8
  int sizelineinfo; // edx
  int sizelocvars; // edi
  __int64 v8; // r14
  __int64 v9; // rdi
  TString *varname; // rbp
  int v11; // eax
  int v12; // eax
  int sizeupvalues; // edi
  __int64 v14; // rbp
  __int64 i; // r14
  TString *name; // rdi
  int v17; // eax
  int v18; // eax
  unsigned __int64 v19; // [rsp+50h] [rbp+8h] BYREF
  int endpc; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v21; // [rsp+60h] [rbp+18h] BYREF

  if ( D->strip )
    source = 0i64;
  else
    source = f->source;
  DumpString(source, D);
  sizelineinfo = 0;
  if ( !D->strip )
    sizelineinfo = f->sizelineinfo;
  DumpVector(f->lineinfo, sizelineinfo, v5, D);
  sizelocvars = 0;
  if ( !D->strip )
    sizelocvars = f->sizelocvars;
  LODWORD(v19) = sizelocvars;
  if ( !D->status )
    D->status = D->writer(D->L, &v19, 4ui64, D->data);
  v8 = sizelocvars;
  if ( sizelocvars > 0 )
  {
    v9 = 0i64;
    while ( 1 )
    {
      varname = f->locvars[v9].varname;
      if ( varname )
        break;
      v21 = 0i64;
      if ( !D->status )
      {
        v11 = D->writer(D->L, &v21, 8ui64, D->data);
LABEL_18:
        D->status = v11;
      }
LABEL_19:
      LODWORD(v19) = f->locvars[v9].startpc;
      if ( !D->status )
        D->status = D->writer(D->L, &v19, 4ui64, D->data);
      endpc = f->locvars[v9].endpc;
      if ( !D->status )
        D->status = D->writer(D->L, &endpc, 4ui64, D->data);
      ++v9;
      if ( !--v8 )
        goto LABEL_24;
    }
    v21 = varname->tsv.len + 1;
    if ( D->status )
      goto LABEL_19;
    v12 = D->writer(D->L, &v21, 8ui64, D->data);
    D->status = v12;
    if ( v12 )
      goto LABEL_19;
    v11 = D->writer(D->L, &varname[1], v21, D->data);
    goto LABEL_18;
  }
LABEL_24:
  sizeupvalues = 0;
  if ( !D->strip )
    sizeupvalues = f->sizeupvalues;
  LODWORD(v19) = sizeupvalues;
  if ( !D->status )
    D->status = D->writer(D->L, &v19, 4ui64, D->data);
  v14 = sizeupvalues;
  if ( sizeupvalues > 0 )
  {
    for ( i = 0i64; ; ++i )
    {
      name = f->upvalues[i].name;
      if ( name )
        break;
      v19 = 0i64;
      if ( !D->status )
      {
        v17 = D->writer(D->L, &v19, 8ui64, D->data);
LABEL_36:
        D->status = v17;
      }
LABEL_37:
      if ( !--v14 )
        return;
    }
    v19 = name->tsv.len + 1;
    if ( D->status )
      goto LABEL_37;
    v18 = D->writer(D->L, &v19, 8ui64, D->data);
    D->status = v18;
    if ( v18 )
      goto LABEL_37;
    v17 = D->writer(D->L, &name[1], v19, D->data);
    goto LABEL_36;
  }
}

void __fastcall DumpFunction(const Proto *f, DumpState *D, unsigned __int64 a3)
{
  bool v3; // zf
  int linedefined; // [rsp+30h] [rbp+8h] BYREF

  v3 = D->status == 0;
  linedefined = f->linedefined;
  if ( v3 )
    D->status = D->writer(D->L, &linedefined, 4ui64, D->data);
  v3 = D->status == 0;
  linedefined = f->lastlinedefined;
  if ( v3 )
    D->status = D->writer(D->L, &linedefined, 4ui64, D->data);
  v3 = D->status == 0;
  LOBYTE(linedefined) = f->numparams;
  if ( v3 )
    D->status = D->writer(D->L, &linedefined, 1ui64, D->data);
  v3 = D->status == 0;
  LOBYTE(linedefined) = f->is_vararg;
  if ( v3 )
    D->status = D->writer(D->L, &linedefined, 1ui64, D->data);
  v3 = D->status == 0;
  LOBYTE(linedefined) = f->maxstacksize;
  if ( v3 )
    D->status = D->writer(D->L, &linedefined, 1ui64, D->data);
  DumpVector(f->code, f->sizecode, a3, D);
  DumpConstants(f, D);
  DumpUpvalues(f, D);
  DumpDebug(f, D);
}

void __fastcall DumpString(const TString *s, DumpState *D)
{
  void *data; // r9
  unsigned __int64 v5; // r8
  const TString *v6; // rdx
  bool v7; // zf
  int v8; // eax
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  if ( !s )
  {
    v9 = 0i64;
    if ( D->status )
      return;
    data = D->data;
    v5 = 8i64;
    v6 = (const TString *)&v9;
    goto LABEL_8;
  }
  v5 = s->tsv.len + 1;
  v7 = D->status == 0;
  v9 = v5;
  if ( v7 )
  {
    v8 = D->writer(D->L, &v9, 8ui64, D->data);
    v5 = v9;
    D->status = v8;
  }
  if ( !D->status )
  {
    data = D->data;
    v6 = s + 1;
LABEL_8:
    D->status = D->writer(D->L, v6, v5, data);
  }
}

void __fastcall DumpUpvalues(const Proto *f, DumpState *D)
{
  bool v2; // zf
  __int64 sizeupvalues; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdi
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = D->status == 0;
  sizeupvalues = f->sizeupvalues;
  v8 = f->sizeupvalues;
  if ( v2 )
    D->status = D->writer(D->L, &v8, 4ui64, D->data);
  v6 = sizeupvalues;
  if ( (int)sizeupvalues > 0 )
  {
    v7 = 0i64;
    do
    {
      v2 = D->status == 0;
      LOBYTE(v8) = f->upvalues[v7].instack;
      if ( v2 )
        D->status = D->writer(D->L, &v8, 1ui64, D->data);
      v2 = D->status == 0;
      LOBYTE(v8) = f->upvalues[v7].idx;
      if ( v2 )
        D->status = D->writer(D->L, &v8, 1ui64, D->data);
      ++v7;
      --v6;
    }
    while ( v6 );
  }
}

void __fastcall DumpVector(const void *b, int n, unsigned __int64 size, DumpState *D)
{
  bool v4; // zf
  __int64 v6; // rdi
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v4 = D->status == 0;
  v6 = n;
  v8 = n;
  if ( v4 )
    D->status = D->writer(D->L, &v8, 4ui64, D->data);
  if ( !D->status )
    D->status = D->writer(D->L, b, 4 * v6, D->data);
}

