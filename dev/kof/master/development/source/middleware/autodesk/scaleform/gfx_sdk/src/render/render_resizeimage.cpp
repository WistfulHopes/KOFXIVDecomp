#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

void Scaleform::Render::PixelFilterBilinearRGBA32(unsigned char * pDst, const unsigned char * pSrc1, const unsigned char * pSrc2, const unsigned char * pSrc3, const unsigned char * pSrc4, long xFract, long yFract); // 0x1403FD440
void Scaleform::Render::PixelFilterBilinearRGB24(unsigned char * pDst, const unsigned char * pSrc1, const unsigned char * pSrc2, const unsigned char * pSrc3, const unsigned char * pSrc4, long xFract, long yFract); // 0x1403FD340
void Scaleform::Render::PixelFilterBilinearRGBtoRGBA32(unsigned char * pDst, const unsigned char * pSrc1, const unsigned char * pSrc2, const unsigned char * pSrc3, const unsigned char * pSrc4, long xFract, long yFract); // 0x1403FD580
void Scaleform::Render::PixelFilterBilinearGray8(unsigned char * pDst, const unsigned char * pSrc1, const unsigned char * pSrc2, const unsigned char * pSrc3, const unsigned char * pSrc4, long xFract, long yFract); // 0x1403FD2D0
void Scaleform::Render::ImageResizeFilter2x2<void (__cdecl*)(unsigned char * __ptr64,unsigned char const * __ptr64,unsigned char const * __ptr64,unsigned char const * __ptr64,unsigned char const * __ptr64,int,int)>(unsigned char * pDst, long dstWidth, long dstHeight, long dstPitch, long dstBpp, const unsigned char * pSrc, long srcWidth, long srcHeight, long srcPitch, long srcBpp, void(*filter)(unsigned char *, const unsigned char *, const unsigned char *, const unsigned char *, const unsigned char *, long, long)); // 0x1403FCF10
void Scaleform::Render::ResizeImageBilinear(unsigned char * pDst, long dstWidth, long dstHeight, long dstPitch, const unsigned char * pSrc, long srcWidth, long srcHeight, long srcPitch, Scaleform::Render::ResizeImageType type); // 0x1403FD690
struct Scaleform::Render::PixelFilterGray8
{
	enum <unnamed-enum-SrcBpp>
	{
		SrcBpp = 1,
		DstBpp = 1,
	};
	static void CopySrcPixel(unsigned char *, const unsigned char *);
	static void Filter(unsigned char *, const unsigned char *, const short *, long, long);
};
struct Scaleform::Render::PixelFilterRGB24
{
	enum <unnamed-enum-SrcBpp>
	{
		SrcBpp = 3,
		DstBpp = 3,
	};
	static void CopySrcPixel(unsigned char *, const unsigned char *);
	static void Filter(unsigned char *, const unsigned char *, const short *, long, long);
};
struct Scaleform::Render::PixelFilterRGBA32
{
	enum <unnamed-enum-SrcBpp>
	{
		SrcBpp = 4,
		DstBpp = 4,
	};
	static void CopySrcPixel(unsigned char *, const unsigned char *);
	static void Filter(unsigned char *, const unsigned char *, const short *, long, long);
};
struct Scaleform::Render::PixelFilterRGB24toRGBA32
{
	enum <unnamed-enum-SrcBpp>
	{
		SrcBpp = 3,
		DstBpp = 4,
	};
	static void CopySrcPixel(unsigned char *, const unsigned char *);
	static void Filter(unsigned char *, const unsigned char *, const short *, long, long);
};
class Scaleform::ArrayUnsafe<int,2> :
	Scaleform::ArrayUnsafeBase<int,Scaleform::AllocatorGH<int,2> >
{
	typedef long ValueType;
	struct AllocatorType;
	class BaseType;
	class SelfType;
public:
	ArrayUnsafe<int,2>(const Scaleform::ArrayUnsafe<int,2> &);
	ArrayUnsafe<int,2>(unsigned long long);
	ArrayUnsafe<int,2>();
	const Scaleform::ArrayUnsafe<int,2> & operator=(const Scaleform::ArrayUnsafe<int,2> &);
	~ArrayUnsafe<int,2>();
};
class Scaleform::ArrayUnsafe<unsigned char,2> :
	Scaleform::ArrayUnsafeBase<unsigned char,Scaleform::AllocatorGH<unsigned char,2> >
{
	typedef unsigned char ValueType;
	struct AllocatorType;
	class BaseType;
	class SelfType;
public:
	ArrayUnsafe<unsigned char,2>(const Scaleform::ArrayUnsafe<unsigned char,2> &);
	ArrayUnsafe<unsigned char,2>(unsigned long long);
	ArrayUnsafe<unsigned char,2>();
	const Scaleform::ArrayUnsafe<unsigned char,2> & operator=(const Scaleform::ArrayUnsafe<unsigned char,2> &);
	~ArrayUnsafe<unsigned char,2>();
};void __fastcall Scaleform::Render::ImageResizeFilter2x2_void____cdecl___unsigned_char_____ptr64_unsigned_char_const_____ptr64_unsigned_char_const_____ptr64_unsigned_char_const_____ptr64_unsigned_char_const_____ptr64_int_int__(
        unsigned __int8 *pDst,
        int dstWidth,
        int dstHeight,
        int dstPitch,
        int dstBpp,
        const unsigned __int8 *pSrc,
        int srcWidth,
        int srcHeight,
        int srcPitch,
        int srcBpp,
        void (__fastcall *filter)(unsigned __int8 *, const unsigned __int8 *, const unsigned __int8 *, const unsigned __int8 *, const unsigned __int8 *, int, int))
{
  _DWORD *v11; // r14
  int v12; // er11
  __int64 v14; // r15
  __int64 v15; // rdi
  _DWORD *v16; // rax
  int v18; // er9
  int v19; // er8
  int v20; // ecx
  int v21; // ecx
  __int64 v22; // rdx
  int v23; // eax
  int v24; // ebx
  __int64 v25; // r9
  __int64 v26; // r8
  int v27; // edx
  const unsigned __int8 *v28; // rdx
  int v29; // eax
  int v30; // er10
  int v31; // ebp
  int v32; // er12
  int v33; // eax
  __int64 v34; // rcx
  void (__fastcall *v35)(unsigned __int8 *, const unsigned __int8 *, const unsigned __int8 *, const unsigned __int8 *, const unsigned __int8 *, int, int); // r11
  int v36; // er13
  int v37; // ecx
  const unsigned __int8 *v38; // rsi
  unsigned __int8 *v39; // rdi
  int v40; // eax
  int v41; // ecx
  __int64 v42; // rbx
  const unsigned __int8 *v43; // rbp
  int v44; // eax
  int v45; // er8
  const unsigned __int8 *v46; // rsi
  const unsigned __int8 *v47; // rbp
  int v48; // edx
  bool v49; // zf
  int v50; // [rsp+40h] [rbp-68h]
  int v51; // [rsp+44h] [rbp-64h] BYREF
  int v52; // [rsp+48h] [rbp-60h]
  __int64 v53; // [rsp+50h] [rbp-58h]
  unsigned __int8 *v54; // [rsp+58h] [rbp-50h]
  __int64 v55; // [rsp+60h] [rbp-48h]
  __int64 v56; // [rsp+68h] [rbp-40h]
  int v57; // [rsp+B0h] [rbp+8h]
  int v58; // [rsp+B8h] [rbp+10h]
  unsigned int srcWidtha; // [rsp+E0h] [rbp+38h]

  v11 = 0i64;
  v12 = dstHeight;
  v14 = dstWidth;
  v15 = dstPitch;
  v54 = pDst;
  if ( dstWidth )
  {
    v51 = 2;
    v16 = Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 4i64 * dstWidth, &v51);
    v12 = dstHeight;
    v11 = v16;
  }
  v18 = (srcWidth << 8) / dstWidth;
  v19 = (srcWidth << 8) % dstWidth;
  v20 = v19;
  if ( v19 <= 0 )
  {
    v19 += dstWidth;
    v20 = v19;
    --v18;
  }
  v21 = v20 - dstWidth;
  v22 = 0i64;
  if ( dstWidth > 0 )
  {
    v23 = (srcWidth << 7) / dstWidth - 128;
    do
    {
      v11[v22] = v23;
      v21 += v19;
      v23 += v18;
      if ( v21 > 0 )
      {
        v21 -= dstWidth;
        ++v23;
      }
      ++v22;
    }
    while ( v22 < v14 );
  }
  v24 = srcHeight;
  v25 = (unsigned int)((srcHeight << 8) / v12);
  v50 = (srcHeight << 8) / v12;
  v26 = (unsigned int)((srcHeight << 8) % v12);
  srcWidtha = v26;
  v27 = (srcHeight << 8) % v12;
  if ( (int)v26 <= 0 )
  {
    v26 = (unsigned int)(v12 + v26);
    v25 = (unsigned int)(v25 - 1);
    srcWidtha = v26;
    v50 = v25;
    v27 = v26;
  }
  v58 = v27 - v12;
  if ( v12 > 0 )
  {
    v28 = pSrc;
    v29 = srcWidth - 1;
    v30 = srcPitch;
    v31 = srcHeight - 1;
    v52 = v29;
    v32 = dstBpp;
    v25 = srcBpp * v29;
    v33 = (srcHeight << 7) / v12 - 128;
    v34 = (unsigned int)v12;
    v35 = filter;
    v55 = v34;
    v53 = v25;
    v56 = v15;
    v57 = v33;
    do
    {
      v36 = (unsigned __int8)v33;
      v37 = v33 >> 8;
      if ( v33 >> 8 >= 0 )
        v38 = &v28[v30 * v37];
      else
        v38 = v28;
      v39 = v54;
      v40 = v37 + 1;
      v41 = v31;
      if ( v40 < v24 )
        v41 = v40;
      v42 = 0i64;
      v43 = &v28[v30 * v41];
      if ( v14 > 0 )
      {
        while ( 1 )
        {
          v44 = v11[v42];
          if ( v44 >= 0 )
            break;
          v35(v39, v38, v38, v43, v43, (unsigned __int8)v44, v36);
          v35 = filter;
          ++v42;
          v39 += v32;
          if ( v42 >= v14 )
            goto LABEL_26;
        }
        for ( ; v42 < v14; v39 += v32 )
        {
          v45 = v11[v42];
          if ( v45 >> 8 >= v52 )
            break;
          v35(
            v39,
            &v38[srcBpp * (v45 >> 8)],
            &v38[srcBpp * ((v45 >> 8) + 1)],
            &v43[srcBpp * (v45 >> 8)],
            &v43[srcBpp * ((v45 >> 8) + 1)],
            (unsigned __int8)v45,
            v36);
          v35 = filter;
          ++v42;
        }
LABEL_26:
        v26 = srcWidtha;
        v25 = v53;
      }
      v46 = &v38[v25];
      v47 = &v43[v25];
      if ( v42 < v14 )
      {
        do
        {
          filter(v39, v46, v46, v47, v47, LOBYTE(v11[v42]), v36);
          v39 += v32;
          ++v42;
        }
        while ( v42 < v14 );
        v32 = dstBpp;
        v26 = srcWidtha;
        v25 = v53;
      }
      v48 = v26 + v58;
      v33 = v50 + v57;
      v58 = v48;
      v57 += v50;
      if ( v48 > 0 )
      {
        ++v33;
        v58 = v48 - dstHeight;
        v57 = v33;
      }
      v24 = srcHeight;
      v54 += v56;
      v49 = v55-- == 1;
      v35 = filter;
      v28 = pSrc;
      v31 = srcHeight - 1;
      v30 = srcPitch;
    }
    while ( !v49 );
  }
  if ( v11 )
    ((void (__fastcall *)(Scaleform::MemoryHeap *, _DWORD *, __int64, __int64))Scaleform::Memory::pGlobalHeap->Free)(
      Scaleform::Memory::pGlobalHeap,
      v11,
      v26,
      v25);
}

void __fastcall Scaleform::Render::PixelFilterBilinearGray8(
        unsigned __int8 *pDst,
        const unsigned __int8 *pSrc1,
        const unsigned __int8 *pSrc2,
        const unsigned __int8 *pSrc3,
        const unsigned __int8 *pSrc4,
        int xFract,
        int yFract)
{
  *pDst = ((256 - xFract) * (256 - yFract) * *pSrc1
         + yFract * (256 - xFract) * *pSrc3
         + xFract * (256 - yFract) * *pSrc2
         + yFract * xFract * (unsigned int)*pSrc4
         + 0x8000) >> 16;
}

void __fastcall Scaleform::Render::PixelFilterBilinearRGB24(
        unsigned __int8 *pDst,
        const unsigned __int8 *pSrc1,
        const unsigned __int8 *pSrc2,
        const unsigned __int8 *pSrc3,
        const unsigned __int8 *pSrc4,
        int xFract,
        int yFract)
{
  int v8; // er10
  int v9; // eax
  int v10; // ebx
  int v11; // ebp
  int v12; // er9
  int v13; // edi
  int v14; // eax

  v8 = xFract * (256 - yFract);
  v9 = (256 - xFract) * (256 - yFract);
  v10 = yFract * (256 - xFract);
  v11 = v10 * *pSrc3 + v8 * *pSrc2 + v9 * *pSrc1 + 0x8000;
  v12 = v10 * pSrc3[2] + v8 * pSrc2[2] + v9 * pSrc1[2] + 0x8000;
  v13 = (yFract * xFract * pSrc4[1] + v10 * pSrc3[1] + v8 * pSrc2[1] + v9 * pSrc1[1] + 0x8000) >> 16;
  v14 = yFract * xFract * pSrc4[2];
  *pDst = (yFract * xFract * (unsigned int)*pSrc4 + v11) >> 16;
  pDst[1] = v13;
  pDst[2] = (unsigned int)(v14 + v12) >> 16;
}

void __fastcall Scaleform::Render::PixelFilterBilinearRGBA32(
        unsigned __int8 *pDst,
        const unsigned __int8 *pSrc1,
        const unsigned __int8 *pSrc2,
        const unsigned __int8 *pSrc3,
        const unsigned __int8 *pSrc4,
        int xFract,
        int yFract)
{
  int v8; // eax
  int v9; // er10
  int v10; // ebx
  int v11; // ebp
  int v12; // er9
  int v13; // er14
  int v14; // edi
  int v15; // eax

  v8 = (256 - xFract) * (256 - yFract);
  v9 = xFract * (256 - yFract);
  v10 = yFract * (256 - xFract);
  v11 = v10 * pSrc3[1] + v9 * pSrc2[1] + v8 * pSrc1[1] + 0x8000;
  v12 = v10 * pSrc3[3] + v9 * pSrc2[3] + v8 * pSrc1[3] + 0x8000;
  v13 = (yFract * xFract * *pSrc4 + v10 * *pSrc3 + v9 * *pSrc2 + v8 * *pSrc1 + 0x8000) >> 16;
  v14 = (yFract * xFract * pSrc4[2] + v10 * pSrc3[2] + v9 * pSrc2[2] + v8 * pSrc1[2] + 0x8000) >> 16;
  v15 = yFract * xFract * pSrc4[3];
  pDst[1] = (yFract * xFract * (unsigned int)pSrc4[1] + v11) >> 16;
  pDst[2] = v14;
  *pDst = v13;
  pDst[3] = (unsigned int)(v15 + v12) >> 16;
}

void __fastcall Scaleform::Render::PixelFilterBilinearRGBtoRGBA32(
        unsigned __int8 *pDst,
        const unsigned __int8 *pSrc1,
        const unsigned __int8 *pSrc2,
        const unsigned __int8 *pSrc3,
        const unsigned __int8 *pSrc4,
        int xFract,
        int yFract)
{
  int v8; // er10
  int v9; // eax
  int v10; // ebx
  int v11; // ebp
  int v12; // er9
  int v13; // edi
  int v14; // eax

  v8 = xFract * (256 - yFract);
  v9 = (256 - xFract) * (256 - yFract);
  v10 = yFract * (256 - xFract);
  v11 = v10 * *pSrc3 + v8 * *pSrc2 + v9 * *pSrc1 + 0x8000;
  v12 = v10 * pSrc3[2] + v8 * pSrc2[2] + v9 * pSrc1[2] + 0x8000;
  v13 = (yFract * xFract * pSrc4[1] + v10 * pSrc3[1] + v8 * pSrc2[1] + v9 * pSrc1[1] + 0x8000) >> 16;
  v14 = yFract * xFract * pSrc4[2];
  *pDst = (yFract * xFract * (unsigned int)*pSrc4 + v11) >> 16;
  pDst[1] = v13;
  pDst[3] = -1;
  pDst[2] = (unsigned int)(v14 + v12) >> 16;
}

void __fastcall Scaleform::Render::ResizeImageBilinear(
        unsigned __int8 *pDst,
        int dstWidth,
        int dstHeight,
        int dstPitch,
        const unsigned __int8 *pSrc,
        int srcWidth,
        int srcHeight,
        int srcPitch,
        Scaleform::Render::ResizeImageType type)
{
  if ( dstWidth > 0 && dstHeight > 0 && srcWidth > 0 && srcHeight > 0 )
  {
    switch ( type )
    {
      case ResizeRgbToRgb:
        Scaleform::Render::ImageResizeFilter2x2_void____cdecl___unsigned_char_____ptr64_unsigned_char_const_____ptr64_unsigned_char_const_____ptr64_unsigned_char_const_____ptr64_unsigned_char_const_____ptr64_int_int__(
          pDst,
          dstWidth,
          dstHeight,
          dstPitch,
          3,
          pSrc,
          srcWidth,
          srcHeight,
          srcPitch,
          3,
          Scaleform::Render::PixelFilterBilinearRGB24);
        break;
      case ResizeRgbaToRgba:
        Scaleform::Render::ImageResizeFilter2x2_void____cdecl___unsigned_char_____ptr64_unsigned_char_const_____ptr64_unsigned_char_const_____ptr64_unsigned_char_const_____ptr64_unsigned_char_const_____ptr64_int_int__(
          pDst,
          dstWidth,
          dstHeight,
          dstPitch,
          4,
          pSrc,
          srcWidth,
          srcHeight,
          srcPitch,
          4,
          Scaleform::Render::PixelFilterBilinearRGBA32);
        break;
      case ResizeRgbToRgba:
        Scaleform::Render::ImageResizeFilter2x2_void____cdecl___unsigned_char_____ptr64_unsigned_char_const_____ptr64_unsigned_char_const_____ptr64_unsigned_char_const_____ptr64_unsigned_char_const_____ptr64_int_int__(
          pDst,
          dstWidth,
          dstHeight,
          dstPitch,
          4,
          pSrc,
          srcWidth,
          srcHeight,
          srcPitch,
          3,
          Scaleform::Render::PixelFilterBilinearRGBtoRGBA32);
        break;
      case ResizeGray:
        Scaleform::Render::ImageResizeFilter2x2_void____cdecl___unsigned_char_____ptr64_unsigned_char_const_____ptr64_unsigned_char_const_____ptr64_unsigned_char_const_____ptr64_unsigned_char_const_____ptr64_int_int__(
          pDst,
          dstWidth,
          dstHeight,
          dstPitch,
          1,
          pSrc,
          srcWidth,
          srcHeight,
          srcPitch,
          1,
          Scaleform::Render::PixelFilterBilinearGray8);
        break;
    }
  }
}

