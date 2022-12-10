#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lgc.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lmem.c"

unsigned long luaS_hash(const char * str, unsigned long long l, unsigned long seed); // 0x14029C2E0
void luaS_resize(lua_State * L, long newsize); // 0x14029C320
TString * newshrstr(lua_State * L, const char * str, unsigned long long l, unsigned long h); // 0x14029C4A0
TString * internshrstr(lua_State * L, const char * str, unsigned long long l); // 0x14029C550
TString * luaS_newlstr(lua_State * L, const char * str, unsigned long long l); // 0x14029C640GCObject *__fastcall internshrstr(lua_State *L, const char *str, unsigned __int64 l)
{
  global_State *l_G; // r14
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r9
  unsigned int i; // edi
  int v9; // ecx
  GCObject *next; // rbx
  unsigned __int8 v12; // cl

  l_G = L->l_G;
  v4 = l;
  v5 = (l >> 5) + 1;
  for ( i = l ^ l_G->seed; l >= v5; i ^= (i >> 2) + 32 * i + v9 )
  {
    v9 = (unsigned __int8)str[l - 1];
    l -= v5;
  }
  next = l_G->strt.hash[(int)i & (unsigned __int64)(l_G->strt.size - 1)];
  if ( !next )
    return (GCObject *)newshrstr(L, str, v4, i);
  while ( i != next->ts.tsv.hash || v4 != next->ts.tsv.len || memcmp(str, &next->th.l_G, v4) )
  {
    next = next->gch.next;
    if ( !next )
      return (GCObject *)newshrstr(L, str, v4, i);
  }
  v12 = next->gch.marked ^ 3;
  if ( ((l_G->currentwhite ^ 3) & v12) == 0 )
    next->gch.marked = v12;
  return next;
}

__int64 __fastcall luaS_hash(const char *str, unsigned __int64 l, unsigned int seed)
{
  unsigned __int64 v3; // r9
  __int64 result; // rax
  unsigned __int64 v5; // r8
  int v6; // edx

  v3 = l;
  result = seed ^ (unsigned int)l;
  v5 = (l >> 5) + 1;
  if ( l >= v5 )
  {
    do
    {
      v6 = (unsigned __int8)str[v3 - 1];
      v3 -= v5;
      result = (((unsigned int)result >> 2) + 32 * (_DWORD)result + v6) ^ (unsigned int)result;
    }
    while ( v3 >= v5 );
  }
  return result;
}

GCObject *__fastcall luaS_newlstr(lua_State *L, const char *str, unsigned __int64 l)
{
  GCObject *result; // rax
  unsigned int seed; // ebx
  GCObject *v7; // rdi

  if ( l <= 0x190 )
    return internshrstr(L, str, l);
  if ( l + 1 > 0xFFFFFFFFFFFFFFE5ui64 )
    luaG_runerror(L, "memory allocation error: block too big");
  seed = L->l_G->seed;
  v7 = luaC_newobj(L, 20, l + 25, 0i64);
  v7->ts.tsv.len = l;
  v7->ts.tsv.hash = seed;
  v7->ts.tsv.extra = 0;
  memmove(&v7->th.l_G, str, l);
  result = v7;
  *((_BYTE *)&v7->th.l_G + l) = 0;
  return result;
}

void __fastcall luaS_resize(lua_State *L, int newsize)
{
  global_State *l_G; // rbx
  __int64 v4; // rsi
  GCObject **v5; // rax
  __int64 size; // rcx
  int v7; // er10
  __int64 v8; // r11
  GCObject **hash; // rcx
  GCObject *v10; // rax
  GCObject *next; // r9
  __int64 v12; // r8

  l_G = L->l_G;
  v4 = newsize;
  while ( ((1 << l_G->gcstate) & 0xFFFFFFFB) == 0 )
    singlestep(L);
  if ( (int)v4 > l_G->strt.size )
  {
    if ( (unsigned __int64)((int)v4 + 1) > 0x1FFFFFFFFFFFFFFFi64 )
      luaG_runerror(L, "memory allocation error: block too big");
    v5 = (GCObject **)luaM_realloc_(L, l_G->strt.hash, 8i64 * l_G->strt.size, 8 * v4);
    size = l_G->strt.size;
    for ( l_G->strt.hash = v5; size < v4; ++size )
      l_G->strt.hash[size] = 0i64;
  }
  v7 = 0;
  if ( l_G->strt.size > 0 )
  {
    v8 = 0i64;
    do
    {
      hash = l_G->strt.hash;
      v10 = hash[v8];
      hash[v8] = 0i64;
      if ( v10 )
      {
        do
        {
          next = v10->gch.next;
          v12 = (unsigned int)(v4 - 1) & v10->ts.tsv.hash;
          v10->gch.next = l_G->strt.hash[v12];
          l_G->strt.hash[v12] = v10;
          v10->gch.marked &= ~0x40u;
          v10 = next;
        }
        while ( next );
      }
      ++v7;
      ++v8;
    }
    while ( v7 < l_G->strt.size );
  }
  if ( (int)v4 < l_G->strt.size )
  {
    if ( (unsigned __int64)((int)v4 + 1) > 0x1FFFFFFFFFFFFFFFi64 )
      luaG_runerror(L, "memory allocation error: block too big");
    l_G->strt.hash = (GCObject **)luaM_realloc_(L, l_G->strt.hash, 8i64 * l_G->strt.size, 8 * v4);
  }
  l_G->strt.size = v4;
}

GCObject *__fastcall newshrstr(lua_State *L, const char *str, unsigned __int64 l, unsigned int h)
{
  global_State *l_G; // rdi
  __int64 v6; // rbp
  int size; // edx
  GCObject *v10; // rbx
  GCObject *result; // rax

  l_G = L->l_G;
  v6 = (int)h;
  size = l_G->strt.size;
  if ( l_G->strt.nuse >= size && size <= 1073741822 )
    luaS_resize(L, 2 * size);
  v10 = luaC_newobj(L, 4, l + 25, &l_G->strt.hash[v6 & (l_G->strt.size - 1)]);
  v10->ts.tsv.len = l;
  v10->ts.tsv.hash = v6;
  v10->ts.tsv.extra = 0;
  memmove(&v10->th.l_G, str, l);
  result = v10;
  *((_BYTE *)&v10->th.l_G + l) = 0;
  ++l_G->strt.nuse;
  return result;
}

