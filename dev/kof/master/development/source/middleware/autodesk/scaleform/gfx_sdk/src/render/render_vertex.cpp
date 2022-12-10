#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

void Scaleform::Render::ConvertVertexData_XY16i_XY32f(const Scaleform::Render::VertexElement * psourceElement, const Scaleform::Render::VertexElement * pdestElement, unsigned char * psource, unsigned long sourceSize, unsigned long sourceOffset, unsigned char * pdest, unsigned long destSize, unsigned long destOffset, unsigned long count, const void * __formal); // 0x1403EAC10
void Scaleform::Render::ConvertVertexData_XY16i_XYZ16i(const Scaleform::Render::VertexElement * psourceElement, const Scaleform::Render::VertexElement * pdestElement, unsigned char * psource, unsigned long sourceSize, unsigned long sourceOffset, unsigned char * pdest, unsigned long destSize, unsigned long destOffset, unsigned long count, const void * __formal); // 0x1403EAC90
void Scaleform::Render::ConvertVertexData_ARGB_RGBA(const Scaleform::Render::VertexElement * psourceElement, const Scaleform::Render::VertexElement * pdestElement, unsigned char * psource, unsigned long sourceSize, unsigned long sourceOffset, unsigned char * pdest, unsigned long destSize, unsigned long destOffset, unsigned long count, const void * __formal); // 0x1403EAD00
void Scaleform::Render::InitVertexData_U8(const Scaleform::Render::VertexElement * psourceElement, const Scaleform::Render::VertexElement * pdestElement, unsigned char * __formal, unsigned long __formal, unsigned long __formal, unsigned char * pdest, unsigned long destSize, unsigned long destOffset, unsigned long count, const void * parg); // 0x1403EAD80
struct Scaleform::Render::ConvertTarget
{
	Scaleform::Render::VertexElementType SourceType; // 0x0
	Scaleform::Render::VertexElementType TargetType; // 0x4
	unsigned long TargetMask; // 0x8
	void(*pConvertFunc)(const Scaleform::Render::VertexElement *, const Scaleform::Render::VertexElement *, unsigned char *, unsigned long, unsigned long, unsigned char *, unsigned long, unsigned long, unsigned long, const void *); // 0x10
};
void Scaleform::Render::CopyVertexElements(unsigned char * source, unsigned long long sourceFormatSize, unsigned char * dest, unsigned long long destFormatSize, unsigned long long elementSize, unsigned long long count); // 0x1403EB500
void Scaleform::Render::ConvertVertices(const Scaleform::Render::VertexFormat & sourceFormat, void * psource, const Scaleform::Render::VertexFormat & destFormat, void * pdest, unsigned long count, void * * pargs); // 0x1403EB100
void Scaleform::Render::ConvertVertices_Buffered(const Scaleform::Render::VertexFormat & sourceFormat, void * psource, const Scaleform::Render::VertexFormat & destFormat, void * pdest, unsigned long count, void * * pargumentData); // 0x1403EB2B0
union Scaleform::Render::ConvertVertices_Buffered::__l2::<unnamed-type-$S1>
{
public:
	unsigned char TempBuffer[8192]; // 0x0
	unsigned long long Align; // 0x0
};
Scaleform::Render::VertexFormat Scaleform::Render::VertexXY16i::Format; // 0x1409FA1C0
Scaleform::Render::VertexFormat Scaleform::Render::VertexXY16iCF32::Format; // 0x1409FA238
Scaleform::Render::VertexElement Scaleform::Render::VertexXY16i::VertexElements[3]; // 0x1409F9FF0
Scaleform::Render::VertexElement Scaleform::Render::VertexXY16f::VertexElements[3]; // 0x1409FA008
Scaleform::Render::VertexFormat Scaleform::Render::VertexXY16f::Format; // 0x1409FA1D8
Scaleform::Render::VertexElement Scaleform::Render::VertexXY16fAlpha::VertexElements[3]; // 0x1409FA020
Scaleform::Render::VertexFormat Scaleform::Render::VertexXY16fAlpha::Format; // 0x1409FA1F0
Scaleform::Render::VertexElement Scaleform::Render::VertexXY16iC32::VertexElements[3]; // 0x1409FA038
Scaleform::Render::VertexFormat Scaleform::Render::VertexXY16iC32::Format; // 0x1409FA208
Scaleform::Render::VertexElement Scaleform::Render::VertexXY16iAlpha::VertexElements[3]; // 0x1409FA050
Scaleform::Render::VertexFormat Scaleform::Render::VertexXY16iAlpha::Format; // 0x1409FA220
Scaleform::Render::VertexElement Scaleform::Render::VertexXY16iCF32::VertexElements[5]; // 0x1409FA068
Scaleform::Render::VertexElement Scaleform::Render::VertexXY16iInstance::VertexElements[4]; // 0x1409FA090
Scaleform::Render::VertexFormat Scaleform::Render::VertexXY16iInstance::Format; // 0x1409FA250
Scaleform::Render::VertexElement Scaleform::Render::VertexXY16iUV::VertexElements[3]; // 0x1409FA0B0
Scaleform::Render::VertexFormat Scaleform::Render::VertexXY16iUV::Format; // 0x1409FA268
Scaleform::Render::ConvertTarget Scaleform::Render::Convert_None[1]; // 0x1409FA0C8
Scaleform::Render::ConvertTarget Scaleform::Render::Convert_Pos[3]; // 0x1409FA0E0
Scaleform::Render::ConvertTarget Scaleform::Render::Convert_Color[3]; // 0x1409FA130
Scaleform::Render::ConvertTarget Scaleform::Render::Convert_Instance[2]; // 0x1409FA178
Scaleform::Render::ConvertTarget * Scaleform::Render::VertexConvertTable[6]; // 0x1409FA280
void(*Scaleform::Render::VertexXY16i::ormat$initializer$::operator--)(); // 0x140739D78
void(*Scaleform::Render::VertexXY16f::ormat$initializer$::operator--)(); // 0x140739D80
void(*Scaleform::Render::VertexXY16fAlpha::ormat$initializer$::operator--)(); // 0x140739D88
void(*Scaleform::Render::VertexXY16iC32::ormat$initializer$::operator--)(); // 0x140739D90
void(*Scaleform::Render::VertexXY16iAlpha::ormat$initializer$::operator--)(); // 0x140739D98
void(*Scaleform::Render::VertexXY16iCF32::ormat$initializer$::operator--)(); // 0x140739DA0
void(*Scaleform::Render::VertexXY16iInstance::ormat$initializer$::operator--)(); // 0x140739DA8
void(*Scaleform::Render::VertexXY16iUV::ormat$initializer$::operator--)(); // 0x140739DB0
unsigned long Scaleform::Render::VertexTypeSizes[6]; // 0x1409FA1A8
typedef void(*Scaleform::Render::ConvertVertexDataFunc)(const Scaleform::Render::VertexElement *, const Scaleform::Render::VertexElement *, unsigned char *, unsigned long, unsigned long, unsigned char *, unsigned long, unsigned long, unsigned long, const void *);
void Scaleform::Render::ConvertIndices_SIMD(unsigned short * pdest, unsigned short * psource, unsigned long count, unsigned short delta); // 0x1403EAF30
void Scaleform::Render::ConvertIndices_NonOpt(unsigned short * pdest, unsigned short * psource, unsigned long count, unsigned short delta); // 0x1403EAE70
void Scaleform::Render::ConvertIndices(unsigned short * pdest, unsigned short * psource, unsigned long count, unsigned short delta); // 0x1403EADC0//decompilation failure at 1409FA1C0!
//decompilation failure at 1409FA238!
//decompilation failure at 1409F9FF0!
//decompilation failure at 1409FA008!
//decompilation failure at 1409FA1D8!
//decompilation failure at 1409FA020!
//decompilation failure at 1409FA1F0!
//decompilation failure at 1409FA038!
//decompilation failure at 1409FA208!
//decompilation failure at 1409FA050!
//decompilation failure at 1409FA220!
//decompilation failure at 1409FA068!
//decompilation failure at 1409FA090!
//decompilation failure at 1409FA250!
//decompilation failure at 1409FA0B0!
//decompilation failure at 1409FA268!
//decompilation failure at 1409FA0C8!
//decompilation failure at 1409FA0E0!
//decompilation failure at 1409FA130!
//decompilation failure at 1409FA178!
//decompilation failure at 1409FA280!
//decompilation failure at 140739D78!
//decompilation failure at 140739D80!
//decompilation failure at 140739D88!
//decompilation failure at 140739D90!
//decompilation failure at 140739D98!
//decompilation failure at 140739DA0!
//decompilation failure at 140739DA8!
//decompilation failure at 140739DB0!
//decompilation failure at 1409FA1A8!
void __fastcall Scaleform::Render::ConvertIndices(
        unsigned __int16 *pdest,
        unsigned __int16 *psource,
        unsigned int count,
        unsigned __int16 delta)
{
  if ( __TSS0__1__SupportsIntegerIntrinsics_InstructionSet_SSE_SIMD_Scaleform__SA_NXZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 40i64) )
  {
    Init_thread_header(&__TSS0__1__SupportsIntegerIntrinsics_InstructionSet_SSE_SIMD_Scaleform__SA_NXZ_4HA);
    if ( __TSS0__1__SupportsIntegerIntrinsics_InstructionSet_SSE_SIMD_Scaleform__SA_NXZ_4HA == -1 )
    {
      `Scaleform::SIMD::SSE::InstructionSet::SupportsIntegerIntrinsics'::`2'::HasSSE2 = 1;
      Init_thread_footer(&__TSS0__1__SupportsIntegerIntrinsics_InstructionSet_SSE_SIMD_Scaleform__SA_NXZ_4HA);
    }
  }
  if ( `Scaleform::SIMD::SSE::InstructionSet::SupportsIntegerIntrinsics'::`2'::HasSSE2 )
    Scaleform::Render::ConvertIndices_SIMD(pdest, psource, count, delta);
  else
    Scaleform::Render::ConvertIndices_NonOpt(pdest, psource, count, delta);
}

void __fastcall Scaleform::Render::ConvertIndices_NonOpt(
        unsigned __int16 *pdest,
        unsigned __int16 *psource,
        unsigned int count,
        unsigned __int16 delta)
{
  unsigned __int16 *v4; // r10
  unsigned __int16 *v5; // r8
  signed __int64 v6; // rdx
  unsigned __int16 *v7; // rax
  __int16 v8; // cx

  if ( (count & 3) != 1 )
  {
    if ( (count & 3) != 2 )
    {
      if ( (count & 3) != 3 )
        goto LABEL_7;
      *pdest++ = delta + *psource++;
    }
    *pdest++ = delta + *psource++;
  }
  *pdest++ = delta + *psource++;
LABEL_7:
  v4 = &psource[count & 0xFFFFFFFC];
  if ( psource < v4 )
  {
    v5 = psource + 2;
    v6 = (char *)psource - (char *)pdest - 4;
    v7 = pdest + 2;
    do
    {
      v8 = *(unsigned __int16 *)((char *)v7 + v6);
      v7 += 4;
      v5 += 4;
      *(v7 - 6) = delta + v8;
      *(v7 - 5) = delta + *(v5 - 5);
      *(v7 - 4) = delta + *(v5 - 4);
      *(v7 - 3) = delta + *(v5 - 3);
    }
    while ( (unsigned __int16 *)((char *)v7 + v6) < v4 );
  }
}

void __fastcall Scaleform::Render::ConvertIndices_SIMD(
        unsigned __int16 *pdest,
        unsigned __int16 *psource,
        unsigned int count,
        unsigned __int16 delta)
{
  __m128i v5; // xmm2
  __m128i v6; // xmm2
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  unsigned __int16 *v11; // rsi
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r10
  __m128i v14; // xmm0
  unsigned __int16 v15; // ax
  __m128i v16; // xmm1
  __m128i v17; // xmm1
  __m128i v18; // xmm0
  unsigned __int64 v19; // r9
  __m128i v20; // xmm0
  signed __int64 v21; // rcx
  __int16 v22; // ax

  v5 = _mm_cvtsi32_si128((__int16)delta);
  v6 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v5, v5), 0);
  if ( (((unsigned __int8)psource ^ (unsigned __int8)pdest) & 0xF) != 0 )
  {
    Scaleform::Render::ConvertIndices_NonOpt(pdest, psource, count, delta);
  }
  else
  {
    v7 = count;
    v8 = 0i64;
    v9 = ((unsigned __int64)pdest + 15) & 0xFFFFFFFFFFFFFFF0ui64;
    v10 = (unsigned __int64)&pdest[v7] & 0xFFFFFFFFFFFFFFF0ui64;
    v11 = &psource[v7];
    if ( v9 < v10 )
    {
      v12 = 0i64;
      v13 = (v9 - (unsigned __int64)pdest + 1) >> 1;
      if ( (unsigned __int64)pdest > v9 )
        v13 = 0i64;
      if ( v13 )
      {
        if ( v13 >= 0x10 && (pdest > &psource[v13 - 1] || &pdest[v13 - 1] < psource) )
        {
          do
          {
            v12 += 16i64;
            *(__m128i *)pdest = _mm_add_epi16(_mm_loadu_si128((const __m128i *)psource), v6);
            v14 = _mm_loadu_si128((const __m128i *)psource + 1);
            psource += 16;
            *((__m128i *)pdest + 1) = _mm_add_epi16(v14, v6);
            pdest += 16;
          }
          while ( v12 < (v13 & 0xFFFFFFFFFFFFFFF0ui64) );
        }
        for ( ; v12 < v13; ++pdest )
        {
          ++v12;
          v15 = delta + *psource++;
          *pdest = v15;
        }
      }
      v16 = _mm_cvtsi32_si128((__int16)delta);
      v17 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v16, v16), 0);
      do
      {
        v18 = _mm_loadu_si128((const __m128i *)psource);
        psource += 8;
        _mm_stream_si128((__m128i *)pdest, _mm_add_epi16(v18, v17));
        pdest += 8;
      }
      while ( (unsigned __int64)pdest < v10 );
    }
    v19 = (unsigned __int64)((char *)v11 - (char *)psource + 1) >> 1;
    if ( psource > v11 )
      v19 = 0i64;
    if ( v19 )
    {
      if ( v19 >= 0x10 && (pdest > &psource[v19 - 1] || &pdest[v19 - 1] < psource) )
      {
        do
        {
          v8 += 16i64;
          *(__m128i *)pdest = _mm_add_epi16(_mm_loadu_si128((const __m128i *)psource), v6);
          v20 = _mm_loadu_si128((const __m128i *)psource + 1);
          psource += 16;
          *((__m128i *)pdest + 1) = _mm_add_epi16(v20, v6);
          pdest += 16;
        }
        while ( v8 < (v19 & 0xFFFFFFFFFFFFFFF0ui64) );
      }
      if ( v8 < v19 )
      {
        v21 = (char *)pdest - (char *)psource;
        do
        {
          v22 = *psource++;
          ++v8;
          *(unsigned __int16 *)((char *)psource + v21 - 2) = delta + v22;
        }
        while ( v8 < v19 );
      }
    }
  }
}

void __fastcall Scaleform::Render::ConvertVertexData_ARGB_RGBA(
        const Scaleform::Render::VertexElement *psourceElement,
        const Scaleform::Render::VertexElement *pdestElement,
        unsigned __int8 *psource,
        unsigned int sourceSize,
        unsigned int sourceOffset,
        unsigned __int8 *pdest,
        unsigned int destSize,
        unsigned int destOffset,
        unsigned int count)
{
  unsigned __int8 *v9; // r10
  unsigned __int8 *v10; // r8
  __int64 v11; // rdi
  unsigned __int8 *v12; // r9
  int v13; // edx
  int v14; // eax

  v9 = &psource[count * sourceSize];
  if ( psource < v9 )
  {
    v10 = &psource[sourceOffset];
    v11 = sourceSize;
    v12 = &pdest[destOffset];
    do
    {
      v13 = *(_DWORD *)v10;
      v14 = v10[2];
      v10 += v11;
      *(_DWORD *)v12 = v13 & 0xFF00FF00 | v14 | ((unsigned __int8)v13 << 16);
      v12 += destSize;
    }
    while ( &v10[-sourceOffset] < v9 );
  }
}

void __fastcall Scaleform::Render::ConvertVertexData_XY16i_XY32f(
        const Scaleform::Render::VertexElement *psourceElement,
        const Scaleform::Render::VertexElement *pdestElement,
        unsigned __int8 *psource,
        unsigned int sourceSize,
        unsigned int sourceOffset,
        unsigned __int8 *pdest,
        unsigned int destSize,
        unsigned int destOffset,
        unsigned int count)
{
  unsigned __int8 *v9; // r10
  float *v10; // rdx
  unsigned __int8 *v11; // rcx
  int v12; // eax

  v9 = &psource[count * sourceSize];
  if ( psource < v9 )
  {
    v10 = (float *)&pdest[destOffset];
    v11 = &psource[sourceOffset];
    do
    {
      *v10 = (float)*(__int16 *)v11;
      v12 = *((__int16 *)v11 + 1);
      v11 += sourceSize;
      v10[1] = (float)v12;
      v10 = (float *)((char *)v10 + destSize);
    }
    while ( &v11[-sourceOffset] < v9 );
  }
}

void __fastcall Scaleform::Render::ConvertVertexData_XY16i_XYZ16i(
        const Scaleform::Render::VertexElement *psourceElement,
        const Scaleform::Render::VertexElement *pdestElement,
        unsigned __int8 *psource,
        unsigned int sourceSize,
        unsigned int sourceOffset,
        unsigned __int8 *pdest,
        unsigned int destSize,
        unsigned int destOffset,
        unsigned int count)
{
  unsigned __int8 *v9; // r10
  unsigned __int8 *v10; // rax
  unsigned __int8 *v11; // rdx
  __int16 v12; // cx

  v9 = &psource[count * sourceSize];
  if ( psource < v9 )
  {
    v10 = &pdest[destOffset + 4];
    v11 = &psource[sourceOffset];
    do
    {
      *((_WORD *)v10 - 2) = *(_WORD *)v11;
      v12 = *((_WORD *)v11 + 1);
      v11 += sourceSize;
      *((_WORD *)v10 - 1) = v12;
      *(_WORD *)v10 = 0;
      v10 += destSize;
    }
    while ( &v11[-sourceOffset] < v9 );
  }
}

void __fastcall Scaleform::Render::ConvertVertices(
        const Scaleform::Render::VertexFormat *sourceFormat,
        void *psource,
        const Scaleform::Render::VertexFormat *destFormat,
        void *pdest,
        unsigned int count,
        void **pargs)
{
  Scaleform::Render::VertexElement *i; // rdi
  unsigned int Attribute; // edx
  Scaleform::Render::VertexElement *pElements; // rbx
  Scaleform::Render::ConvertTarget *v13; // r10
  unsigned int j; // eax
  Scaleform::Render::VertexElementType TargetType; // ecx
  void *v16; // rax

  for ( i = destFormat->pElements; i->Attribute; ++i )
  {
    Attribute = i->Attribute;
    if ( (((Attribute & 0xF0) - 112) & 0xFFFFFFEF) != 0 )
    {
      pElements = sourceFormat->pElements;
      v13 = Scaleform::Render::VertexConvertTable[(Attribute >> 8) & 0xF];
      for ( j = pElements->Attribute; j; ++pElements )
      {
        if ( (j & 0xFF00) == (i->Attribute & 0xFF00) )
          break;
        j = pElements[1].Attribute;
      }
      TargetType = v13->TargetType;
      if ( TargetType )
      {
        while ( (Attribute & 0x10000) == 0 && pElements->Attribute != v13->SourceType
             || (Attribute & v13->TargetMask) != TargetType )
        {
          TargetType = v13[1].TargetType;
          ++v13;
          if ( TargetType == VET_None )
            goto LABEL_11;
        }
        if ( pargs )
          v16 = *pargs;
        else
          v16 = 0i64;
        v13->pConvertFunc(
          pElements,
          i,
          (unsigned __int8 *)psource,
          sourceFormat->Size,
          pElements->Offset,
          (unsigned __int8 *)pdest,
          destFormat->Size,
          i->Offset,
          count,
          v16);
      }
      else
      {
LABEL_11:
        Scaleform::Render::CopyVertexElements(
          (unsigned __int8 *)psource + pElements->Offset,
          sourceFormat->Size,
          (unsigned __int8 *)pdest + i->Offset,
          destFormat->Size,
          (pElements->Attribute & 0xF)
        * Scaleform::Render::VertexTypeSizes[((unsigned __int8)pElements->Attribute >> 4) - 1],
          count);
      }
    }
  }
}

void __fastcall Scaleform::Render::ConvertVertices_Buffered(
        const Scaleform::Render::VertexFormat *sourceFormat,
        void *psource,
        const Scaleform::Render::VertexFormat *destFormat,
        void *pdest,
        unsigned int count,
        void **pargumentData)
{
  unsigned int v7; // er13
  unsigned int i; // esi
  Scaleform::Render::VertexElement *pElements; // rdi
  unsigned int Attribute; // er8
  Scaleform::Render::VertexElement *v13; // rbx
  Scaleform::Render::ConvertTarget *v14; // r10
  unsigned int j; // eax
  Scaleform::Render::VertexElementType TargetType; // ecx
  void *v17; // rax
  unsigned int Size; // [rsp+50h] [rbp-2068h]
  char Src[8192]; // [rsp+60h] [rbp-2058h] BYREF

  v7 = count;
  Size = destFormat->Size;
  for ( i = 0x2000 / destFormat->Size; v7; count = v7 )
  {
    pElements = destFormat->pElements;
    if ( i > v7 )
      i = v7;
    if ( pElements->Attribute )
    {
      do
      {
        Attribute = pElements->Attribute;
        if ( (((Attribute & 0xF0) - 112) & 0xFFFFFFEF) != 0 )
        {
          v13 = sourceFormat->pElements;
          v14 = Scaleform::Render::VertexConvertTable[(Attribute >> 8) & 0xF];
          for ( j = v13->Attribute; j; ++v13 )
          {
            if ( (j & 0xFF00) == (pElements->Attribute & 0xFF00) )
              break;
            j = v13[1].Attribute;
          }
          TargetType = v14->TargetType;
          if ( TargetType )
          {
            while ( (Attribute & 0x10000) == 0 && v13->Attribute != v14->SourceType
                 || (Attribute & v14->TargetMask) != TargetType )
            {
              TargetType = v14[1].TargetType;
              ++v14;
              if ( TargetType == VET_None )
                goto LABEL_14;
            }
            if ( pargumentData )
              v17 = *pargumentData;
            else
              v17 = 0i64;
            v14->pConvertFunc(
              v13,
              pElements,
              (unsigned __int8 *)psource,
              sourceFormat->Size,
              v13->Offset,
              (unsigned __int8 *)Src,
              destFormat->Size,
              pElements->Offset,
              i,
              v17);
          }
          else
          {
LABEL_14:
            Scaleform::Render::CopyVertexElements(
              (unsigned __int8 *)psource + v13->Offset,
              sourceFormat->Size,
              (unsigned __int8 *)&Src[pElements->Offset],
              destFormat->Size,
              (v13->Attribute & 0xF) * Scaleform::Render::VertexTypeSizes[((unsigned __int8)v13->Attribute >> 4) - 1],
              i);
          }
        }
        ++pElements;
      }
      while ( pElements->Attribute );
      v7 = count;
    }
    memmove(pdest, Src, Size * i);
    pdest = (char *)pdest + Size * i;
    psource = (char *)psource + i * sourceFormat->Size;
    v7 -= i;
  }
}

void __fastcall Scaleform::Render::CopyVertexElements(
        unsigned __int8 *source,
        unsigned __int64 sourceFormatSize,
        unsigned __int8 *dest,
        unsigned __int64 destFormatSize,
        unsigned __int64 elementSize,
        unsigned __int64 count)
{
  unsigned __int8 *v7; // rsi
  unsigned __int8 *v10; // rbx
  int v11; // eax
  __int16 v12; // ax
  unsigned __int8 v13; // al

  v7 = &source[count * sourceFormatSize];
  v10 = source;
  switch ( elementSize )
  {
    case 1ui64:
      if ( source < v7 )
      {
        do
        {
          v13 = *v10;
          v10 += sourceFormatSize;
          *dest = v13;
          dest += destFormatSize;
        }
        while ( v10 < v7 );
      }
      break;
    case 2ui64:
      if ( source < v7 )
      {
        do
        {
          v12 = *(_WORD *)v10;
          v10 += sourceFormatSize;
          *(_WORD *)dest = v12;
          dest += destFormatSize;
        }
        while ( v10 < v7 );
      }
      break;
    case 4ui64:
      if ( source < v7 )
      {
        do
        {
          v11 = *(_DWORD *)v10;
          v10 += sourceFormatSize;
          *(_DWORD *)dest = v11;
          dest += destFormatSize;
        }
        while ( v10 < v7 );
      }
      break;
    default:
      if ( source < v7 )
      {
        do
        {
          memmove(dest, v10, elementSize);
          dest += destFormatSize;
          v10 += sourceFormatSize;
        }
        while ( v10 < v7 );
      }
      break;
  }
}

void __fastcall Scaleform::Render::InitVertexData_U8(
        const Scaleform::Render::VertexElement *psourceElement,
        const Scaleform::Render::VertexElement *pdestElement,
        unsigned __int8 *__formal,
        unsigned int a4,
        unsigned int __formala,
        unsigned __int8 *pdest,
        unsigned int destSize,
        unsigned int destOffset,
        unsigned int count,
        const void *parg)
{
  unsigned __int8 *v10; // rax
  unsigned __int8 v11; // r9
  unsigned __int8 *v12; // rdx

  v10 = pdest;
  v11 = *(_BYTE *)parg;
  v12 = &pdest[count * destSize];
  if ( pdest < v12 )
  {
    do
    {
      v10[destOffset] = v11;
      v10 += destSize;
    }
    while ( v10 < v12 );
  }
}

