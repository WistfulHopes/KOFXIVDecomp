#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lmem.c"

long luaZ_fill(Zio * z); // 0x1402A6B00
unsigned long long luaZ_read(Zio * z, void * b, unsigned long long n); // 0x1402A6B50__int64 __fastcall luaZ_fill(Zio *z)
{
  const char *v2; // rax
  __int64 v3; // rcx
  unsigned int v4; // ecx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = z->reader(z->L, z->data, &v6);
  if ( !v2 )
    return 0xFFFFFFFFi64;
  v3 = v6;
  if ( !v6 )
    return 0xFFFFFFFFi64;
  z->p = v2;
  z->n = v3 - 1;
  v4 = *(unsigned __int8 *)v2;
  z->p = v2 + 1;
  return v4;
}

unsigned __int64 __fastcall luaZ_read(Zio *z, void *b, unsigned __int64 n)
{
  unsigned __int64 v3; // rsi
  const char *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v3 = n;
  if ( !n )
    return 0i64;
  while ( 1 )
  {
    if ( z->n )
      goto LABEL_7;
    v6 = z->reader(z->L, z->data, &v11);
    if ( !v6 )
      return v3;
    v7 = v11;
    if ( !v11 )
      return v3;
    v8 = v11 - 1;
    z->p = v6;
    z->n = v7 - 1;
    z->p = v6 + 1;
    z->n = v8 + 1;
    z->p = v6;
LABEL_7:
    v9 = z->n;
    if ( v3 <= z->n )
      v9 = v3;
    memmove(b, z->p, v9);
    z->n -= v9;
    b = (char *)b + v9;
    z->p += v9;
    v3 -= v9;
    if ( !v3 )
      return 0i64;
  }
}

