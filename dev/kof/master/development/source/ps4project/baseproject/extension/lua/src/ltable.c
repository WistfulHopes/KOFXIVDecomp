#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lobject.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lmem.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lgc.c"

Node dummynode_; // 0x1408B0308
Node * hashnum(const Table * t, float n); // 0x1402A0000
Node * mainposition(const Table * t, const lua_TValue * key); // 0x1402A0070
long findindex(lua_State * L, Table * t, lua_TValue * key); // 0x1402A01E0
long luaH_next(lua_State * L, Table * t, lua_TValue * key); // 0x1402A02F0
long numusearray(const Table * t, long * nums); // 0x1402A0410
void setarrayvector(lua_State * L, Table * t, long size); // 0x1402A0610
void setnodevector(lua_State * L, Table * t, long size); // 0x1402A06B0
void luaH_resize(lua_State * L, Table * t, long nasize, long nhsize); // 0x1402A07E0
void rehash(lua_State * L, Table * t, const lua_TValue * ek); // 0x1402A09A0
Table * luaH_new(lua_State * L); // 0x1402A0B80
lua_TValue * luaH_newkey(lua_State * L, Table * t, const lua_TValue * key); // 0x1402A0C30
const lua_TValue * luaH_getint(Table * t, long key); // 0x1402A0DD0
const lua_TValue * luaH_get(Table * t, const lua_TValue * key); // 0x1402A0E30
lua_TValue * luaH_set(lua_State * L, Table * t, const lua_TValue * key); // 0x1402A0F10
void luaH_setint(lua_State * L, Table * t, long key, lua_TValue * value); // 0x1402A0F60
long unbound_search(Table * t, unsigned long j); // 0x1402A1030
long luaH_getn(Table * t); // 0x1402A12C0//decompilation failure at 1408B0308!
__int64 __fastcall findindex(lua_State *L, Table *t, lua_TValue *key)
{
  int tt; // eax
  int n; // eax
  Node *next; // rbx

  tt = key->tt_;
  if ( !tt )
    return 0xFFFFFFFFi64;
  if ( tt == 3 )
  {
    n = (int)key->value_.n;
    if ( (float)n == key->value_.n && n > 0 && n <= t->sizearray )
      return (unsigned int)(n - 1);
  }
  next = mainposition(t, key);
  while ( (next->i_key.nk.tt_ != key->tt_ || !luaV_equalobj_(0i64, (const lua_TValue *)&next->i_key, key))
       && (next->i_key.nk.tt_ != 11 || (key->tt_ & 0x40) == 0 || next->i_key.nk.value_.gc != key->value_.gc) )
  {
    next = next->i_key.nk.next;
    if ( !next )
      luaG_runerror(L, "invalid key to 'next'");
  }
  return (unsigned int)(t->sizearray + ((int)next - LODWORD(t->node)) / 40);
}

Node *__fastcall hashnum(const Table *t, float n)
{
  float v3; // xmm1_4
  int v4; // edx
  int expptr; // [rsp+38h] [rbp+10h] BYREF

  v3 = frexp(n, &expptr);
  v4 = expptr + (int)(float)(v3 * 2147482600.0);
  if ( v4 < 0 )
  {
    if ( v4 == -v4 )
      v4 = 0;
    v4 = -v4;
  }
  return &t->node[v4 % (((1 << t->lsizenode) - 1) | 1)];
}

Node *__fastcall luaH_get(Table *t, const lua_TValue *key)
{
  int v3; // edx
  int v4; // edx
  Node *result; // rax
  Node *next; // rbx

  v3 = key->tt_ & 0x3F;
  if ( !v3 )
    return (Node *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  v4 = v3 - 3;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      result = &t->node[(int)key->value_.gc->ts.tsv.hash & (unsigned __int64)((1 << t->lsizenode) - 1)];
      while ( result->i_key.nk.tt_ != 68 || result->i_key.nk.value_.gc != key->value_.gc )
      {
        result = result->i_key.nk.next;
        if ( !result )
          return (Node *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
      }
      return result;
    }
  }
  else if ( (float)(int)key->value_.n == key->value_.n )
  {
    return (Node *)luaH_getint(t, (int)key->value_.n);
  }
  next = mainposition(t, key);
  while ( next->i_key.nk.tt_ != key->tt_ || !luaV_equalobj_(0i64, (const lua_TValue *)&next->i_key, key) )
  {
    next = next->i_key.nk.next;
    if ( !next )
      return (Node *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  }
  return next;
}

Node *__fastcall luaH_getint(Table *t, int key)
{
  Node *result; // rax
  float v3; // xmm6_4

  if ( (unsigned int)(key - 1) < t->sizearray )
    return (Node *)&t->array[key - 1];
  v3 = (float)key;
  result = hashnum(t, (float)key);
  while ( result->i_key.nk.tt_ != 3 || result->i_key.nk.value_.n != v3 )
  {
    result = result->i_key.nk.next;
    if ( !result )
      return (Node *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  }
  return result;
}

int __fastcall luaH_getn(Table *t)
{
  unsigned int sizearray; // er8
  lua_TValue *array; // r10
  unsigned int v3; // er9

  sizearray = t->sizearray;
  if ( !sizearray || (array = t->array, array[sizearray - 1].tt_) )
  {
    if ( (char *)t->node == &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[9][192] )
      return t->sizearray;
    else
      return unbound_search(t, sizearray);
  }
  else
  {
    v3 = 0;
    if ( sizearray > 1 )
    {
      do
      {
        if ( array[((v3 + sizearray) >> 1) - 1].tt_ )
          v3 = (v3 + sizearray) >> 1;
        else
          sizearray = (v3 + sizearray) >> 1;
      }
      while ( sizearray - v3 > 1 );
    }
    return v3;
  }
}

Table *__fastcall luaH_new(lua_State *L)
{
  global_State *l_G; // rbx
  __int64 v3; // rdx
  unsigned __int8 currentwhite; // al
  Table *result; // rax

  l_G = L->l_G;
  v3 = (__int64)l_G->frealloc(l_G->ud, 0i64, 5ui64, 64ui64);
  if ( !v3 )
  {
    if ( !l_G->gcrunning || (luaC_fullgc(L, 1), (v3 = (__int64)l_G->frealloc(l_G->ud, 0i64, 5ui64, 64ui64)) == 0) )
      luaD_throw(L, 4);
  }
  l_G->GCdebt += 64i64;
  currentwhite = l_G->currentwhite;
  *(_BYTE *)(v3 + 8) = 5;
  *(_BYTE *)(v3 + 9) = currentwhite & 3;
  *(_QWORD *)v3 = l_G->allgc;
  l_G->allgc = (GCObject *)v3;
  *(_QWORD *)(v3 + 16) = 0i64;
  *(_QWORD *)(v3 + 24) = 0i64;
  *(_DWORD *)(v3 + 56) = 0;
  *(_QWORD *)(v3 + 32) = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[9][192];
  *(_QWORD *)(v3 + 40) = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[9][192];
  result = (Table *)v3;
  *(_WORD *)(v3 + 10) = 255;
  return result;
}

Node *__fastcall luaH_newkey(lua_State *L, Table *t, const lua_TValue *key)
{
  Node *v7; // rsi
  Node *node; // rax
  Node *v9; // rdi
  Node *v11; // rax
  __int64 p_next; // rcx
  bool v13; // zf
  unsigned __int8 marked; // al
  global_State *l_G; // rcx

  if ( !key->tt_ )
    luaG_runerror(L, "table index is nil");
  v7 = mainposition(t, key);
  if ( v7->i_val.tt_ || v7 == (Node *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[9][192] )
  {
    node = t->node;
    if ( t->lastfree <= node )
      goto LABEL_7;
    while ( 1 )
    {
      v9 = --t->lastfree;
      if ( !v9->i_key.nk.tt_ )
        break;
      if ( v9 <= node )
        goto LABEL_7;
    }
    if ( !v9 )
    {
LABEL_7:
      rehash(L, t, key);
      return (Node *)luaH_set(L, t, key);
    }
    v11 = mainposition(t, (const lua_TValue *)&v7->i_key);
    if ( v11 == v7 )
    {
      v9->i_key.nk.next = v7->i_key.nk.next;
      v7->i_key.nk.next = v9;
      v7 = v9;
    }
    else
    {
      p_next = (__int64)&v11->i_key.nk.next;
      if ( v11->i_key.nk.next != v7 )
      {
        do
        {
          v11 = *(Node **)p_next;
          v13 = *(_QWORD *)(*(_QWORD *)p_next + 32i64) == (_QWORD)v7;
          p_next = *(_QWORD *)p_next + 32i64;
        }
        while ( !v13 );
      }
      v11->i_key.nk.next = v9;
      v9->i_val = v7->i_val;
      *(_OWORD *)&v9->i_key.nk.value_.gc = *(_OWORD *)&v7->i_key.nk.value_.gc;
      v9->i_key.nk.next = v7->i_key.nk.next;
      v7->i_key.nk.next = 0i64;
      v7->i_val.tt_ = 0;
    }
  }
  v7->i_key.nk.value_.gc = key->value_.gc;
  v7->i_key.nk.tt_ = key->tt_;
  if ( (key->tt_ & 0x40) != 0 && (key->value_.gc->gch.marked & 3) != 0 )
  {
    marked = t->marked;
    if ( (marked & 4) != 0 )
    {
      l_G = L->l_G;
      t->marked = marked & 0xFB;
      t->gclist = l_G->grayagain;
      l_G->grayagain = (GCObject *)t;
    }
  }
  return v7;
}

__int64 __fastcall luaH_next(lua_State *L, Table *t, lua_TValue *key)
{
  int v5; // eax
  __int64 sizearray; // r11
  int v7; // er9
  __int64 v8; // rax
  int *p_tt; // r8
  int v10; // eax
  int v11; // er9
  Node *node; // r10
  __int64 v13; // rcx
  int *i; // rdx
  lua_TValue *v16; // rcx
  Node *v17; // rcx

  v5 = findindex(L, t, key);
  sizearray = t->sizearray;
  v7 = v5 + 1;
  if ( v5 + 1 >= (int)sizearray )
  {
LABEL_5:
    v10 = 1 << t->lsizenode;
    v11 = v7 - sizearray;
    if ( v11 >= v10 )
    {
      return 0i64;
    }
    else
    {
      node = t->node;
      v13 = v11;
      for ( i = &node->i_val.tt_ + 8 * v11 + 2 * v11; !*i; i += 10 )
      {
        ++v11;
        if ( ++v13 >= v10 )
          return 0i64;
      }
      key->value_.gc = node[v11].i_key.nk.value_.gc;
      key->tt_ = node[v11].i_key.nk.tt_;
      v17 = t->node;
      key[1].value_.gc = v17[v11].i_val.value_.gc;
      key[1].tt_ = v17[v11].i_val.tt_;
      return 1i64;
    }
  }
  else
  {
    v8 = v7;
    p_tt = &t->array[v7].tt_;
    while ( !*p_tt )
    {
      ++v7;
      ++v8;
      p_tt += 4;
      if ( v8 >= sizearray )
        goto LABEL_5;
    }
    key->tt_ = 3;
    key->value_.n = (float)(v7 + 1);
    v16 = &t->array[v7];
    key[1].value_.gc = v16->value_.gc;
    key[1].tt_ = v16->tt_;
    return 1i64;
  }
}

void __fastcall luaH_resize(lua_State *L, Table *t, int nasize, int nhsize)
{
  __int64 sizearray; // rbx
  unsigned __int8 lsizenode; // bp
  Node *node; // r12
  __int64 v10; // r15
  int v11; // edi
  __int64 v12; // r13
  __int64 v13; // rbx
  __int64 v14; // rbp
  lua_TValue *array; // rax
  int v16; // er15
  __int64 v17; // rdi
  int *v18; // rbx
  extension::gfxi_detail::TranslatorImpl *v19; // rax
  global_State *l_G; // rbx
  __int64 v21; // rax
  unsigned __int8 v22; // [rsp+70h] [rbp+18h]

  sizearray = t->sizearray;
  lsizenode = t->lsizenode;
  node = t->node;
  v10 = nasize;
  v22 = lsizenode;
  if ( nasize > (int)sizearray )
    setarrayvector(L, t, nasize);
  setnodevector(L, t, nhsize);
  if ( (int)v10 < (int)sizearray )
  {
    t->sizearray = v10;
    v11 = v10;
    v12 = sizearray;
    if ( v10 < sizearray )
    {
      v13 = v10;
      v14 = v12 - v10;
      do
      {
        array = t->array;
        if ( array[v13].tt_ )
          luaH_setint(L, t, v11 + 1, &array[v11]);
        ++v11;
        ++v13;
        --v14;
      }
      while ( v14 );
      lsizenode = v22;
    }
    if ( (unsigned __int64)((int)v10 + 1) > 0xFFFFFFFFFFFFFFFi64 )
      luaG_runerror(L, "memory allocation error: block too big");
    t->array = (lua_TValue *)luaM_realloc_(L, t->array, 16 * v12, 16 * v10);
  }
  v16 = 1 << lsizenode;
  v17 = (1 << lsizenode) - 1;
  if ( (1 << lsizenode) - 1 >= 0 )
  {
    v18 = &node[-1].i_val.tt_ + 8 * v16 + 2 * v16;
    do
    {
      if ( *v18 )
      {
        v19 = (extension::gfxi_detail::TranslatorImpl *)luaH_get(t, (const lua_TValue *)(v18 + 2));
        if ( v19 == (extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
          v19 = (extension::gfxi_detail::TranslatorImpl *)luaH_newkey(L, t, (const lua_TValue *)(v18 + 2));
        v19->__vftable = (extension::gfxi_detail::TranslatorImpl_vtbl *)*((_QWORD *)v18 - 1);
        v19->RefCount = *v18;
      }
      v18 -= 10;
      --v17;
    }
    while ( v17 >= 0 );
  }
  if ( node != (Node *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[9][192] )
  {
    l_G = L->l_G;
    l_G->frealloc(l_G->ud, node, 40i64 * v16, 0i64);
    v21 = 0i64;
    if ( node )
      v21 = 40i64 * v16;
    l_G->GCdebt -= v21;
  }
}

Node *__fastcall luaH_set(lua_State *L, Table *t, const lua_TValue *key)
{
  Node *result; // rax

  result = luaH_get(t, key);
  if ( result == (Node *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
    return luaH_newkey(L, t, key);
  return result;
}

void __fastcall luaH_setint(lua_State *L, Table *t, int key, lua_TValue *value)
{
  Node *next; // rax
  float v9; // xmm6_4
  lua_TValue keya; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned int)(key - 1) >= t->sizearray )
  {
    v9 = (float)key;
    next = hashnum(t, (float)key);
    while ( next->i_key.nk.tt_ != 3 || next->i_key.nk.value_.n != v9 )
    {
      next = next->i_key.nk.next;
      if ( !next )
        goto LABEL_4;
    }
  }
  else
  {
    next = (Node *)&t->array[key - 1];
  }
  if ( next == (Node *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
  {
LABEL_4:
    keya.tt_ = 3;
    keya.value_.n = (float)key;
    next = luaH_newkey(L, t, &keya);
  }
  next->i_val.value_.gc = value->value_.gc;
  next->i_val.tt_ = value->tt_;
}

Node *__fastcall mainposition(const Table *t, const lua_TValue *key)
{
  const Table *v3; // r11
  Node *result; // rax
  Value v5; // rdi

  v3 = t;
  switch ( key->tt_ & 0x3F )
  {
    case 1:
      result = &t->node[key->value_.b & (unsigned __int64)((1 << t->lsizenode) - 1)];
      break;
    case 3:
      result = hashnum(t, key->value_.n);
      break;
    case 4:
      result = &t->node[(int)key->value_.gc->ts.tsv.hash & (unsigned __int64)((1 << t->lsizenode) - 1)];
      break;
    case 0x14:
      v5.gc = (GCObject *)key->value_;
      if ( !key->value_.gc->ts.tsv.extra )
      {
        v5.gc->ts.tsv.hash = luaS_hash((const char *)&v5.gc->th.l_G, v5.gc->ts.tsv.len, v5.gc->ts.tsv.hash);
        v5.gc->ts.tsv.extra = 1;
      }
      result = &v3->node[(int)key->value_.gc->ts.tsv.hash & (unsigned __int64)((1 << v3->lsizenode) - 1)];
      break;
    default:
      result = &t->node[key->value_.b % (((1 << t->lsizenode) - 1) | 1u)];
      break;
  }
  return result;
}

__int64 __fastcall numusearray(const Table *t, int *nums)
{
  int v2; // er11
  unsigned int v3; // er14
  int v4; // edi
  __int64 v5; // r10
  __int64 i; // rsi
  int sizearray; // eax
  int v10; // edx
  int v11; // er8
  int v12; // eax
  lua_TValue *array; // r9
  __m128i v14; // xmm5
  __m128i v15; // xmm4
  __m128i si128; // xmm7
  int v17; // ecx
  __int64 v18; // rax
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  __m128i v21; // xmm2
  __m128i v22; // xmm3
  __m128i v23; // xmm1
  __m128i v24; // xmm1
  __m128i v25; // xmm4
  __m128i v26; // xmm4
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // r9
  int tt; // ecx
  int v31; // eax

  v2 = 1;
  v3 = 0;
  v4 = 1;
  v5 = 1i64;
  for ( i = 0i64; i <= 30; ++i )
  {
    sizearray = t->sizearray;
    v10 = 0;
    v11 = v4;
    if ( v4 > sizearray )
    {
      v11 = t->sizearray;
      if ( v2 > sizearray )
        break;
    }
    v12 = v11 - v2 + 1;
    if ( v2 <= v11 && (unsigned int)v12 >= 8 )
    {
      array = t->array;
      v14 = 0i64;
      v15 = 0i64;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v17 = v11 - v12 % 8;
      v18 = v5;
      do
      {
        v19 = _mm_cvtsi32_si128(array[v18 + 2].tt_);
        v2 += 8;
        v20 = _mm_cvtsi32_si128(array[v18 + 1].tt_);
        v5 += 8i64;
        v21 = _mm_cvtsi32_si128(array[v18].tt_);
        v22 = _mm_cvtsi32_si128(array[v18 - 1].tt_);
        v18 += 8i64;
        v23 = _mm_cmpeq_epi32(
                _mm_unpacklo_epi32(_mm_unpacklo_epi32(v22, v20), _mm_unpacklo_epi32(v21, v19)),
                (__m128i)0i64);
        v14 = _mm_or_si128(_mm_andnot_si128(v23, _mm_add_epi32(si128, v14)), _mm_and_si128(v23, v14));
        v24 = _mm_cmpeq_epi32(
                _mm_unpacklo_epi32(
                  _mm_unpacklo_epi32(
                    _mm_cvtsi32_si128(*((_DWORD *)&array[v18 - 4] - 2)),
                    _mm_cvtsi32_si128(*((_DWORD *)&array[v18 - 2] - 2))),
                  _mm_unpacklo_epi32(
                    _mm_cvtsi32_si128(*((_DWORD *)&array[v18 - 3] - 2)),
                    _mm_cvtsi32_si128(*((_DWORD *)&array[v18 - 1] - 2)))),
                (__m128i)0i64);
        v15 = _mm_or_si128(_mm_andnot_si128(v24, _mm_add_epi32(si128, v15)), _mm_and_si128(v24, v15));
      }
      while ( v5 <= v17 );
      v25 = _mm_add_epi32(v15, v14);
      v26 = _mm_add_epi32(v25, _mm_srli_si128(v25, 8));
      v10 = _mm_cvtsi128_si32(_mm_add_epi32(v26, _mm_srli_si128(v26, 4)));
    }
    v27 = v11;
    if ( v5 <= v11 )
    {
      v28 = v5;
      v29 = v27 - v5 + 1;
      v2 += v29;
      v5 += v29;
      do
      {
        tt = t->array[v28 - 1].tt_;
        v31 = v10 + 1;
        ++v28;
        if ( !tt )
          v31 = v10;
        v10 = v31;
        --v29;
      }
      while ( v29 );
    }
    nums[i] += v10;
    v3 += v10;
    v4 *= 2;
  }
  return v3;
}

void __fastcall rehash(lua_State *L, Table *t, const lua_TValue *ek)
{
  int *v4; // rdi
  __int64 i; // rcx
  int v8; // eax
  int v9; // edi
  int v10; // er8
  int v11; // ebx
  int v12; // edx
  int v13; // ebp
  __int64 v14; // r10
  int v15; // er11
  int v16; // esi
  int *v17; // r9
  int v18; // ecx
  __int64 v19; // rax
  int j; // edx
  __int64 v21; // rax
  int v22; // eax
  int v23; // ebx
  int v24; // ebp
  int n; // ecx
  __int64 v26; // rax
  int k; // edx
  __int64 v28; // rax
  int v29; // eax
  int v30; // ebp
  int v31; // ebx
  int v32; // ecx
  int v33; // er11
  int *v34; // r10
  int nums[32]; // [rsp+20h] [rbp-C8h] BYREF

  v4 = nums;
  for ( i = 31i64; i; --i )
    *v4++ = 0;
  v8 = numusearray(t, nums);
  v9 = 0;
  v10 = 1;
  v11 = v8;
  v12 = 1 << t->lsizenode;
  v13 = v8;
  v14 = v12;
  v15 = 0;
  v16 = 0;
  if ( v12 )
  {
    v17 = &t->node->i_val.tt_ + 8 * v12 + 2 * v12;
    do
    {
      --v14;
      v17 -= 10;
      if ( *v17 )
      {
        if ( v17[4] == 3
          && (v18 = (int)*((float *)v17 + 2), (float)v18 == *((float *)v17 + 2))
          && (unsigned int)(v18 - 1) <= 0x3FFFFFFF )
        {
          v19 = (unsigned int)(v18 - 1);
          for ( j = 0; (unsigned int)v19 >= 0x100; v19 = (unsigned int)v19 >> 8 )
            j += 8;
          v21 = j
              + (unsigned __int8)extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][v19 + 184];
          ++nums[v21];
          v22 = 1;
        }
        else
        {
          v22 = 0;
        }
        v16 += v22;
        ++v15;
      }
    }
    while ( v14 );
  }
  v23 = v16 + v11;
  v24 = v13 + 1;
  if ( ek->tt_ == 3 && (n = (int)ek->value_.n, (float)n == ek->value_.n) && (unsigned int)(n - 1) <= 0x3FFFFFFF )
  {
    v26 = (unsigned int)(n - 1);
    for ( k = 0; (unsigned int)v26 >= 0x100; v26 = (unsigned int)v26 >> 8 )
      k += 8;
    v28 = k + (unsigned __int8)extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][v26 + 184];
    ++nums[v28];
    v29 = 1;
  }
  else
  {
    v29 = 0;
  }
  v30 = v15 + v24;
  v31 = v29 + v23;
  v32 = 0;
  v33 = 0;
  if ( v31 > 0 )
  {
    v34 = nums;
    do
    {
      if ( *v34 > 0 )
      {
        v9 += *v34;
        if ( v9 > v10 / 2 )
        {
          v33 = v10;
          v32 = v9;
        }
      }
      if ( v9 == v31 )
        break;
      v10 *= 2;
      ++v34;
    }
    while ( v10 / 2 < v31 );
  }
  luaH_resize(L, t, v33, v30 - v32);
}

void __fastcall setarrayvector(lua_State *L, Table *t, int size)
{
  __int64 v3; // rsi
  lua_TValue *v5; // rax
  __int64 sizearray; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax

  v3 = size;
  if ( (unsigned __int64)(size + 1) > 0xFFFFFFFFFFFFFFFi64 )
    luaG_runerror(L, "memory allocation error: block too big");
  v5 = (lua_TValue *)luaM_realloc_(L, t->array, 16i64 * t->sizearray, 16i64 * size);
  sizearray = t->sizearray;
  t->array = v5;
  if ( sizearray < v3 )
  {
    v7 = v3 - sizearray;
    v8 = sizearray;
    do
    {
      t->array[v8++].tt_ = 0;
      --v7;
    }
    while ( v7 );
  }
  t->sizearray = v3;
}

void __fastcall setnodevector(lua_State *L, Table *t, int size)
{
  int v3; // ebp
  int v6; // er14
  __int64 v7; // rax
  int i; // ecx
  __int64 v9; // rdi
  __int64 v10; // rcx
  Node *node; // rax

  v3 = size;
  if ( size )
  {
    v7 = (unsigned int)(size - 1);
    for ( i = 0; (unsigned int)v7 >= 0x100; v7 = (unsigned int)v7 >> 8 )
      i += 8;
    v6 = i + (unsigned __int8)extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][v7 + 184];
    if ( v6 > 30 )
      luaG_runerror(L, "table overflow");
    v3 = 1 << v6;
    if ( (unsigned __int64)((1 << v6) + 1) > 0x666666666666666i64 )
      luaG_runerror(L, "memory allocation error: block too big");
    v9 = v3;
    t->node = (Node *)luaM_realloc_(L, 0i64, 0i64, 40i64 * v3);
    if ( v3 > 0 )
    {
      v10 = 0i64;
      do
      {
        node = t->node;
        node[v10++].i_key.nk.next = 0i64;
        node[v10 - 1].i_key.nk.tt_ = 0;
        node[v10 - 1].i_val.tt_ = 0;
        --v9;
      }
      while ( v9 );
    }
  }
  else
  {
    LOBYTE(v6) = 0;
    t->node = (Node *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[9][192];
  }
  t->lsizenode = v6;
  t->lastfree = &t->node[v3];
}

__int64 __fastcall unbound_search(Table *t, unsigned int j)
{
  signed int v2; // ebx
  unsigned int v4; // er14
  Node *next; // rcx
  float v6; // xmm1_4
  int v7; // edx
  int v8; // edi
  unsigned int i; // ebx
  Node *v10; // rax
  float v11; // xmm1_4
  int v12; // edx
  signed int v14; // edi
  Node *v15; // rcx
  float v16; // xmm1_4
  int v17; // edx
  int expptr; // [rsp+68h] [rbp+10h] BYREF

  v2 = j + 1;
  v4 = j;
  while ( 1 )
  {
    if ( (unsigned int)(v2 - 1) >= t->sizearray )
    {
      v6 = frexp((float)v2, &expptr);
      v7 = expptr + (int)(float)(v6 * 2147482600.0);
      if ( v7 < 0 )
      {
        if ( v7 == -v7 )
          v7 = 0;
        v7 = -v7;
      }
      next = &t->node[v7 % (((1 << t->lsizenode) - 1) | 1)];
      while ( next->i_key.nk.tt_ != 3 || next->i_key.nk.value_.n != (float)v2 )
      {
        next = next->i_key.nk.next;
        if ( !next )
        {
          next = (Node *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
          break;
        }
      }
    }
    else
    {
      next = (Node *)&t->array[v2 - 1];
    }
    if ( !next->i_val.tt_ )
      break;
    v4 = v2;
    v2 *= 2;
    if ( (unsigned int)v2 > 0x7FFFFFFD )
    {
      v8 = 1;
      for ( i = 0; ; ++i )
      {
        if ( i >= t->sizearray )
        {
          v11 = frexp((float)v8, &expptr);
          v12 = expptr + (int)(float)(v11 * 2147482600.0);
          if ( v12 < 0 )
          {
            if ( v12 == -v12 )
              v12 = 0;
            v12 = -v12;
          }
          v10 = &t->node[v12 % (((1 << t->lsizenode) - 1) | 1)];
          while ( v10->i_key.nk.tt_ != 3 || v10->i_key.nk.value_.n != (float)v8 )
          {
            v10 = v10->i_key.nk.next;
            if ( !v10 )
            {
              v10 = (Node *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
              break;
            }
          }
        }
        else
        {
          v10 = (Node *)&t->array[i];
        }
        if ( !v10->i_val.tt_ )
          break;
        ++v8;
      }
      return (unsigned int)(v8 - 1);
    }
  }
  while ( v2 - v4 > 1 )
  {
    v14 = (v4 + v2) >> 1;
    if ( (unsigned int)(v14 - 1) >= t->sizearray )
    {
      v16 = frexp((float)v14, &expptr);
      v17 = expptr + (int)(float)(v16 * 2147482600.0);
      if ( v17 < 0 )
      {
        if ( v17 == -v17 )
          v17 = 0;
        v17 = -v17;
      }
      v15 = &t->node[v17 % (((1 << t->lsizenode) - 1) | 1)];
      while ( v15->i_key.nk.tt_ != 3 || v15->i_key.nk.value_.n != (float)v14 )
      {
        v15 = v15->i_key.nk.next;
        if ( !v15 )
        {
          v15 = (Node *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
          break;
        }
      }
    }
    else
    {
      v15 = (Node *)&t->array[v14 - 1];
    }
    if ( v15->i_val.tt_ )
      v4 = (v4 + v2) >> 1;
    else
      v2 = (v4 + v2) >> 1;
  }
  return v4;
}

