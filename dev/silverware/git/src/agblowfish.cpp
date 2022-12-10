#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

union `anonymous-namespace'::Converter32
{
	struct
	{
		unsigned long bit_32; // 0x0
		struct <unnamed-type-bit_8>;
	};
public:
	`anonymous-namespace'::Converter32::<unnamed-type-bit_8> bit_8; // 0x0
};
struct `anonymous-namespace'::Converter32::<unnamed-type-bit_8>
{
	unsigned char byte3; // 0x0
	unsigned char byte2; // 0x1
	unsigned char byte1; // 0x2
	unsigned char byte0; // 0x3
};
const unsigned long initial_pary[18]; // 0x14086E240
const unsigned long initial_sbox[256][4]; // 0x14086E290
typedef `anonymous-namespace'::Converter32 ?A0xf090d952::Converter32;
typedef `anonymous-namespace'::Converter32::<unnamed-type-bit_8> ?A0xf090d952::Converter32::<unnamed-type-bit_8>;
AgBlowfish::AgBlowfish(const unsigned char * key, long keySize); // 0x14068FD70
void AgBlowfish::SetKey(const unsigned char * key, long byte_length); // 0x14068FF00
unsigned long AgBlowfish::Decrypt(unsigned char * src, unsigned long srcSize); // 0x14068FD90
void AgBlowfish::DecryptBlock(unsigned long * left, unsigned long * right); // 0x14068FE50//decompilation failure at 14086E240!
//decompilation failure at 14086E290!
void __fastcall AgBlowfish::AgBlowfish(AgBlowfish *this, const unsigned __int8 *key, int keySize)
{
  this->m_refCount = 0i64;
  AgBlowfish::SetKey(this, key, keySize);
}

__int64 __fastcall AgBlowfish::Decrypt(AgBlowfish *this, unsigned __int8 *src, unsigned int srcSize)
{
  unsigned __int64 v4; // rsi
  unsigned int *v7; // rbx
  signed __int8 v8; // r9
  int v9; // edx

  v4 = (unsigned __int64)srcSize >> 3;
  if ( v4 )
  {
    v7 = (unsigned int *)src;
    do
    {
      AgBlowfish::DecryptBlock(this, v7, v7 + 1);
      v7 += 2;
      --v4;
    }
    while ( v4 );
  }
  if ( srcSize )
  {
    v8 = src[srcSize - 1];
    if ( (unsigned __int8)(v8 - 1) <= 7u )
    {
      v9 = 0;
      if ( v8 <= 0 )
        return srcSize - v8;
      while ( v8 == src[srcSize - v9 - 1] )
      {
        if ( ++v9 >= v8 )
          return srcSize - v8;
      }
    }
  }
  return srcSize;
}

void __fastcall AgBlowfish::DecryptBlock(AgBlowfish *this, unsigned int *left, unsigned int *right)
{
  unsigned int *v4; // rdi
  __int64 v6; // rsi
  int v7; // eax
  unsigned int v8; // er8
  unsigned int v9; // ecx

  v4 = &this->m_pary_[17];
  v6 = 16i64;
  do
  {
    v7 = *v4--;
    *left ^= v7;
    *right ^= this->m_sbox_[3][(unsigned __int8)*left]
            + (this->m_sbox_[2][(unsigned __int8)BYTE1(*left)] ^ (this->m_sbox_[0][HIBYTE(*left)]
                                                                + this->m_sbox_[1][(unsigned __int8)BYTE2(*left)]));
    v8 = *left;
    *left = *right;
    *right = v8;
    --v6;
  }
  while ( v6 );
  v9 = *left;
  *left = v8;
  *right = v9;
  *right = v9 ^ this->m_pary_[1];
  *left ^= this->m_pary_[0];
}

void __fastcall AgBlowfish::SetKey(AgBlowfish *this, const unsigned __int8 *key, int byte_length)
{
  unsigned int (*m_sbox)[256]; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r9
  const unsigned int (*v8)[256]; // rcx
  __int128 v9; // xmm0
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r15
  _DWORD *v15; // r9
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r10
  unsigned int *v19; // r14
  unsigned int *v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned int v22; // eax
  unsigned int v23; // er10
  __int64 v24; // r15
  unsigned int *m_pary; // r11
  __int64 v26; // rdi
  int v27; // eax
  int v28; // esi
  unsigned int *v29; // r14
  __int64 v30; // r15
  unsigned int *v31; // r11
  __int64 v32; // rdi
  int v33; // eax
  int v34; // esi
  int v35; // [rsp+50h] [rbp+18h]

  m_sbox = this->m_sbox_;
  *(_OWORD *)this->m_pary_ = *(_OWORD *)initial_pary;
  v6 = 32i64;
  *(_OWORD *)&this->m_pary_[4] = *(_OWORD *)&initial_pary[4];
  v7 = byte_length;
  *(_OWORD *)&this->m_pary_[8] = *(_OWORD *)&initial_pary[8];
  *(_OWORD *)&this->m_pary_[12] = *(_OWORD *)&initial_pary[12];
  *(_QWORD *)&this->m_pary_[16] = *(_QWORD *)&initial_pary[16];
  v8 = initial_sbox;
  do
  {
    m_sbox = (unsigned int (*)[256])((char *)m_sbox + 128);
    v9 = *(_OWORD *)v8;
    v8 = (const unsigned int (*)[256])((char *)v8 + 128);
    *(_OWORD *)&(*m_sbox)[-32] = v9;
    *(_OWORD *)&(*m_sbox)[-28] = *(_OWORD *)&(*v8)[-28];
    *(_OWORD *)&(*m_sbox)[-24] = *(_OWORD *)&(*v8)[-24];
    *(_OWORD *)&(*m_sbox)[-20] = *(_OWORD *)&(*v8)[-20];
    *(_OWORD *)&(*m_sbox)[-16] = *(_OWORD *)&(*v8)[-16];
    *(_OWORD *)&(*m_sbox)[-12] = *(_OWORD *)&(*v8)[-12];
    *(_OWORD *)&(*m_sbox)[-8] = *(_OWORD *)&(*v8)[-8];
    *(_OWORD *)&(*m_sbox)[-4] = *(_OWORD *)&(*v8)[-4];
    --v6;
  }
  while ( v6 );
  v10 = 4i64;
  v11 = v7;
  v12 = v7 & 3;
  if ( (v7 & 3) != 0 )
  {
    do
    {
      v13 = v10 % v12;
      v10 = v12;
      v12 = v13;
    }
    while ( v13 );
  }
  v14 = v7 / v10;
  v15 = operator new[](saturated_mul(v7 / v10, 4ui64));
  v16 = 2i64;
  if ( v14 )
  {
    v17 = 2i64;
    v18 = v14;
    do
    {
      HIBYTE(v35) = key[(v17 - 2) % v11];
      BYTE2(v35) = key[(v17 - 1) % v11];
      BYTE1(v35) = key[v17 % v11];
      LOBYTE(v35) = key[(v17 + 1) % v11];
      *(_DWORD *)((char *)v15 + v17 - 2) = v35;
      v17 += 4i64;
      --v18;
    }
    while ( v18 );
  }
  v19 = &this->m_pary_[1];
  v20 = &this->m_pary_[1];
  do
  {
    v20 += 6;
    *(v20 - 7) ^= v15[(v16 - 2) % v14];
    *(v20 - 6) ^= v15[(v16 - 1) % v14];
    *(v20 - 5) ^= v15[v16 % v14];
    *(v20 - 4) ^= v15[(v16 + 1) % v14];
    *(v20 - 3) ^= v15[(v16 + 2) % v14];
    v21 = (v16 + 3) % v14;
    v16 += 6i64;
    *(v20 - 2) ^= v15[v21];
  }
  while ( v16 - 2 < 0x12 );
  operator delete(v15, v21);
  v22 = 0;
  v23 = 0;
  v24 = 9i64;
  do
  {
    m_pary = this->m_pary_;
    v26 = 16i64;
    do
    {
      v27 = *m_pary++ ^ v22;
      v28 = v27;
      v22 = v23 ^ (this->m_sbox_[3][(unsigned __int8)v27]
                 + (this->m_sbox_[2][BYTE1(v27)] ^ (this->m_sbox_[0][HIBYTE(v27)] + this->m_sbox_[1][BYTE2(v27)])));
      v23 = v28;
      --v26;
    }
    while ( v26 );
    v23 = v22 ^ this->m_pary_[16];
    v22 = v28 ^ this->m_pary_[17];
    *v19 = v23;
    *(v19 - 1) = v22;
    v19 += 2;
    --v24;
  }
  while ( v24 );
  v29 = &this->m_sbox_[0][1];
  v30 = 512i64;
  do
  {
    v31 = this->m_pary_;
    v32 = 16i64;
    do
    {
      v33 = *v31++ ^ v22;
      v34 = v33;
      v22 = v23 ^ (this->m_sbox_[3][(unsigned __int8)v33]
                 + (this->m_sbox_[2][BYTE1(v33)] ^ (this->m_sbox_[0][HIBYTE(v33)] + this->m_sbox_[1][BYTE2(v33)])));
      v23 = v34;
      --v32;
    }
    while ( v32 );
    v23 = v22 ^ this->m_pary_[16];
    v22 = v34 ^ this->m_pary_[17];
    *v29 = v23;
    *(v29 - 1) = v22;
    v29 += 2;
    --v30;
  }
  while ( v30 );
}

