#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

Scaleform::Render::ResizeImageType Scaleform::Render::GetImageFormatRescaleType(Scaleform::Render::ImageFormat format); // 0x1403C2640
void Scaleform::Render::RescaleImageData(Scaleform::Render::ImageData & dest, Scaleform::Render::ImageData & src, Scaleform::Render::ResizeImageType resizeType); // 0x1403C27C0
void Scaleform::Render::ConvertImagePlane(const Scaleform::Render::ImagePlane & dplane, const Scaleform::Render::ImagePlane & splane, Scaleform::Render::ImageFormat format, unsigned long formatPlaneIndex, void(*copyScanline)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), Scaleform::Render::Palette * pcolorMap, void * scanlineArg); // 0x1403C1F80
void Scaleform::Render::ConvertImageData(Scaleform::Render::ImageData & dest, Scaleform::Render::ImageData & src, void(*copyScanline)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void * scanlineArg); // 0x1403C1E20
void Scaleform::Render::GenerateMipLevel(Scaleform::Render::ImagePlane & dplane, Scaleform::Render::ImagePlane & splane, Scaleform::Render::ImageFormat format, unsigned long formatPlaneIndex); // 0x1403C2040
enum Scaleform::Render::GenerateMipLevel::__l2::<unnamed-enum-FixedPointShift>
{
	FixedPointShift = 10,
	FixedPointMul = 1024,
	FixedPointMask = 1023,
};
Scaleform::Render::ScanlineConvert Scaleform::Render::ImageScanlineConvertTable[31]; // 0x1409F9D70
void Scaleform::Render::Image_CopyScanline32_SwapBR(unsigned char * pd, const unsigned char * ps, unsigned long long size, Scaleform::Render::Palette * __formal, void * __formal); // 0x1403C1A00
void Scaleform::Render::Image_CopyScanline24_SwapBR(unsigned char * pd, const unsigned char * ps, unsigned long long size, Scaleform::Render::Palette * __formal, void * __formal); // 0x1403C19A0
void Scaleform::Render::Image_CopyScanline24_Extend_RGB_RGBA(unsigned char * pd, const unsigned char * ps, unsigned long long size, Scaleform::Render::Palette * __formal, void * __formal); // 0x1403C1A50
void Scaleform::Render::Image_CopyScanline24_Extend_RGB_BGRA(unsigned char * pd, const unsigned char * ps, unsigned long long size, Scaleform::Render::Palette * __formal, void * __formal); // 0x1403C1AB0
void Scaleform::Render::Image_CopyScanline32_Retract_BGRA_RGB(unsigned char * pd, const unsigned char * ps, unsigned long long size, Scaleform::Render::Palette * __formal, void * __formal); // 0x1403C2670
void Scaleform::Render::Image_CopyScanline32_Retract_RGBA_RGB(unsigned char * pd, const unsigned char * ps, unsigned long long size, Scaleform::Render::Palette * __formal, void * __formal); // 0x1403C26D0
void Scaleform::Render::Image_CopyScanline_BGRA_BGR(unsigned char * pd, const unsigned char * ps, unsigned long long size, Scaleform::Render::Palette * __formal, void * __formal); // 0x1403C1BE0
void Scaleform::Render::Image_CopyScanline_BGRA_RGB(unsigned char * pd, const unsigned char * ps, unsigned long long size, Scaleform::Render::Palette * __formal, void * __formal); // 0x1403C1C30
void Scaleform::Render::Image_CopyScanline_BGRA_A(unsigned char * pd, const unsigned char * ps, unsigned long long size, Scaleform::Render::Palette * __formal, void * __formal); // 0x1403C1C80
void Scaleform::Render::Image_CopyScanline_BGR_A_Avg(unsigned char * pd, const unsigned char * ps, unsigned long long size, Scaleform::Render::Palette * __formal, void * __formal); // 0x1403C1CB0
void Scaleform::Render::Image_CopyScanline_A_BGRA(unsigned char * pd, const unsigned char * ps, unsigned long long size, Scaleform::Render::Palette * __formal, void * __formal); // 0x1403C1D10
void Scaleform::Render::Image_CopyScanline_A_BGR(unsigned char * pd, const unsigned char * ps, unsigned long long size, Scaleform::Render::Palette * __formal, void * __formal); // 0x1403C1D40
void Scaleform::Render::Image_CopyScanline_P_BGRA(unsigned char * pd, const unsigned char * ps, unsigned long long size, Scaleform::Render::Palette * colorMap, void * __formal); // 0x1403C1D80
void Scaleform::Render::Image_CopyScanline_P_RGBA(unsigned char * pd, const unsigned char * ps, unsigned long long size, Scaleform::Render::Palette * colorMap, void * __formal); // 0x1403C1DD0
void Scaleform::Render::Image_CopyScanline_P_BGR(unsigned char * pd, const unsigned char * ps, unsigned long long size, Scaleform::Render::Palette * colorMap, void * __formal); // 0x1403C18C0
void Scaleform::Render::Image_CopyScanline_P_RGB(unsigned char * pd, const unsigned char * ps, unsigned long long size, Scaleform::Render::Palette * colorMap, void * __formal); // 0x1403C1900
void Scaleform::Render::Image_CopyScanline_P_A(unsigned char * pd, const unsigned char * ps, unsigned long long size, Scaleform::Render::Palette * colorMap, void * __formal); // 0x1403C1940
void Scaleform::Render::Image_CopyScanline_B5G5RbA1_RGBA(unsigned char * pd, const unsigned char * ps, unsigned long long size, Scaleform::Render::Palette * __formal, void * __formal); // 0x1403C1B10
void Scaleform::Render::Image_CopyScanline_B5G5RbA1_BGRA(unsigned char * pd, const unsigned char * ps, unsigned long long size, Scaleform::Render::Palette * __formal, void * __formal); // 0x1403C2730
void Scaleform::Render::Image_CopyScanline_G_RGBA(unsigned char * pd, const unsigned char * ps, unsigned long long size, Scaleform::Render::Palette * __formal, void * __formal); // 0x1403C1BA0
struct Scaleform::Render::ScanlineConvert
{
	Scaleform::Render::ImageFormat Source; // 0x0
	Scaleform::Render::ImageFormat Dest; // 0x4
	void(*CopyFunc)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *); // 0x8
};
void(*)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *) Scaleform::Render::GetImageConvertFunc(Scaleform::Render::ImageFormat destFormat, Scaleform::Render::ImageFormat sourceFormat); // 0x1403C2600//decompilation failure at 1409F9D70!
void __fastcall Scaleform::Render::ConvertImageData(
        Scaleform::Render::ImageData *dest,
        Scaleform::Render::ImageData *src,
        void (__fastcall *copyScanline)(unsigned __int8 *, const unsigned __int8 *, unsigned __int64, Scaleform::Render::Palette *, void *),
        void *scanlineArg)
{
  Scaleform::Render::ImageFormat Format; // edi
  Scaleform::Render::ImageData *v5; // r14
  Scaleform::Render::ImageData *v8; // rsi
  unsigned int FormatPlaneCount; // ebx
  unsigned int PlaneCount; // eax
  unsigned int v11; // ebp
  int v12; // ebx
  Scaleform::Render::Palette *pObject; // r14
  __int64 FormatBitsPerPixel; // r15
  unsigned __int64 FormatScanlineCount; // rax
  unsigned __int8 *pData; // rdi
  unsigned __int64 v17; // rsi
  unsigned __int8 *i; // rbx
  unsigned int v19; // [rsp+30h] [rbp-88h]
  Scaleform::Render::ImageFormat v20; // [rsp+34h] [rbp-84h]
  int v21; // [rsp+38h] [rbp-80h]
  Scaleform::Render::ImagePlane pplane; // [rsp+40h] [rbp-78h] BYREF
  Scaleform::Render::ImagePlane v23; // [rsp+60h] [rbp-58h] BYREF

  Format = src->Format;
  v5 = dest;
  v20 = src->Format;
  v8 = src;
  FormatPlaneCount = Scaleform::Render::ImageData::GetFormatPlaneCount(src->Format);
  PlaneCount = Scaleform::Render::ImageData::GetPlaneCount(v8);
  v19 = PlaneCount;
  v11 = 0;
  if ( PlaneCount )
  {
    v12 = PlaneCount % FormatPlaneCount;
    v21 = v12;
    do
    {
      memset(&pplane, 0, sizeof(pplane));
      memset(&v23, 0, sizeof(v23));
      Scaleform::Render::ImageData::GetPlane(v8, v11, &pplane);
      Scaleform::Render::ImageData::GetPlane(v5, v11, &v23);
      pObject = v5->pPalette.pObject;
      FormatBitsPerPixel = (unsigned int)Scaleform::Render::ImageData::GetFormatBitsPerPixel(Format, v12);
      FormatScanlineCount = Scaleform::Render::ImageData::GetFormatScanlineCount(Format, pplane.Height, v12);
      pData = pplane.pData;
      v17 = FormatScanlineCount;
      for ( i = v23.pData; v17; --v17 )
      {
        copyScanline(i, pData, (FormatBitsPerPixel * (unsigned __int64)pplane.Width) >> 3, pObject, scanlineArg);
        pData += pplane.Pitch;
        i += v23.Pitch;
      }
      Format = v20;
      ++v11;
      v8 = src;
      v12 = v21;
      v5 = dest;
    }
    while ( v11 < v19 );
  }
}

void __fastcall Scaleform::Render::ConvertImagePlane(
        const Scaleform::Render::ImagePlane *dplane,
        const Scaleform::Render::ImagePlane *splane,
        Scaleform::Render::ImageFormat format,
        unsigned int formatPlaneIndex,
        void (__fastcall *copyScanline)(unsigned __int8 *, const unsigned __int8 *, unsigned __int64, Scaleform::Render::Palette *, void *),
        Scaleform::Render::Palette *pcolorMap,
        void *scanlineArg)
{
  unsigned __int64 FormatScanlineCount; // rax
  unsigned __int8 *pData; // rbx
  unsigned __int64 v13; // rbp
  unsigned __int8 *i; // rdi
  __int64 FormatBitsPerPixel; // [rsp+60h] [rbp+8h]

  FormatBitsPerPixel = (unsigned int)Scaleform::Render::ImageData::GetFormatBitsPerPixel(format, formatPlaneIndex);
  FormatScanlineCount = Scaleform::Render::ImageData::GetFormatScanlineCount(format, splane->Height, formatPlaneIndex);
  pData = splane->pData;
  v13 = FormatScanlineCount;
  for ( i = dplane->pData; v13; --v13 )
  {
    copyScanline(i, pData, (FormatBitsPerPixel * (unsigned __int64)splane->Width) >> 3, pcolorMap, scanlineArg);
    pData += splane->Pitch;
    i += dplane->Pitch;
  }
}

void __fastcall Scaleform::Render::GenerateMipLevel(
        Scaleform::Render::ImagePlane *dplane,
        Scaleform::Render::ImagePlane *splane,
        Scaleform::Render::ImageFormat format,
        unsigned int formatPlaneIndex)
{
  Scaleform::Render::ImagePlane *v4; // rdi
  unsigned __int64 Pitch; // rsi
  unsigned __int64 v7; // r10
  unsigned int Width; // ecx
  unsigned int Height; // ebx
  unsigned int v10; // er13
  unsigned int v11; // er12
  unsigned int v12; // eax
  unsigned int v13; // edx
  signed __int32 v14; // er8
  unsigned int v15; // er9
  unsigned __int8 *v16; // r14
  unsigned __int64 v17; // r12
  int v18; // edi
  int v19; // edx
  unsigned int v20; // ebx
  unsigned int v21; // er11
  unsigned __int8 *v22; // rdx
  int v23; // er10
  unsigned int v24; // eax
  int v25; // ebp
  int v26; // edi
  int v27; // er11
  unsigned __int8 *v28; // r10
  unsigned int v29; // ebx
  int v30; // er8
  unsigned int v31; // er9
  int v32; // ecx
  int v33; // edx
  int v34; // eax
  unsigned int v35; // er8
  int v36; // ecx
  unsigned __int8 *v37; // rdi
  unsigned __int8 *v38; // r14
  signed __int32 v39; // er8
  unsigned int v40; // ebp
  unsigned int v41; // er9
  unsigned __int64 v42; // rcx
  int v43; // er8
  unsigned int v44; // ebp
  unsigned int v45; // esi
  int v46; // ebx
  unsigned __int8 *v47; // r8
  int v48; // ecx
  unsigned int v49; // er9
  int v50; // eax
  unsigned int v51; // edx
  unsigned __int8 *pData; // rdi
  unsigned __int8 *v53; // r13
  signed __int32 v54; // er8
  unsigned int v55; // ebp
  unsigned int v56; // er9
  int v57; // ecx
  unsigned __int8 *v58; // r8
  unsigned int v59; // ebp
  unsigned int v60; // er14
  int v61; // er10
  unsigned __int8 *v62; // rbx
  int v63; // ecx
  unsigned int v64; // er9
  int v65; // eax
  unsigned int v66; // edx
  int v67; // [rsp+0h] [rbp-58h]
  unsigned int v68; // [rsp+4h] [rbp-54h]
  unsigned int v69; // [rsp+8h] [rbp-50h]
  unsigned int v70; // [rsp+Ch] [rbp-4Ch]
  unsigned int v71; // [rsp+10h] [rbp-48h]
  unsigned __int64 v72; // [rsp+18h] [rbp-40h]
  unsigned int v73; // [rsp+60h] [rbp+8h]
  signed __int32 v75; // [rsp+70h] [rbp+18h]

  v4 = splane;
  Pitch = splane->Pitch;
  v7 = dplane->Pitch;
  Width = dplane->Width;
  Height = splane->Height;
  v72 = v7;
  v10 = (splane->Width << 10) / Width;
  v11 = (Height << 10) / dplane->Height;
  v68 = v11;
  if ( splane->Width == 1 )
  {
    if ( Height != 1 )
    {
      pData = dplane->pData;
      v53 = splane->pData;
      v54 = format & 0xFFEFFFFF;
      if ( v54 > 0 )
      {
        if ( v54 <= 2 )
        {
          v59 = 0;
          v60 = (v11 - 1) >> 2;
          do
          {
            v61 = v60 & 0x3FF;
            ++v59;
            v62 = &v53[Pitch * ((unsigned __int64)v60 >> 10)];
            v60 += v11;
            v63 = (1023 - v61) * v62[Pitch];
            v64 = (v61 * v62[2] + (1023 - v61) * (unsigned int)v62[Pitch + 2]) >> 10;
            v65 = v61 * *v62;
            v66 = (v61 * v62[3] + (1023 - v61) * (unsigned int)v62[Pitch + 3]) >> 10;
            pData[1] = (v61 * v62[1] + (1023 - v61) * (unsigned int)v62[Pitch + 1]) >> 10;
            pData[2] = v64;
            pData[3] = v66;
            *pData = (unsigned int)(v65 + v63) >> 10;
            pData += v72;
          }
          while ( v59 < dplane->Height );
        }
        else if ( v54 == 9 || (unsigned int)(v54 - 200) <= 1 )
        {
          v55 = 0;
          v56 = (v11 - 1) >> 2;
          do
          {
            v57 = v56 & 0x3FF;
            ++v55;
            v58 = &v53[Pitch * ((unsigned __int64)v56 >> 10)];
            v56 += v11;
            *pData = (v57 * *v58 + (1023 - v57) * (unsigned int)v58[Pitch]) >> 10;
            pData += v7;
          }
          while ( v55 < dplane->Height );
        }
      }
    }
  }
  else
  {
    if ( Height != 1 )
    {
      v12 = ((Height << 10) / dplane->Height - 1) >> 2;
      v13 = 0;
      v71 = 0;
      v73 = v12;
      v14 = format & 0xFFEFFFFF;
      v15 = (Height << 10) / dplane->Height;
      v75 = v14;
      while ( 1 )
      {
        v16 = &dplane->pData[v7 * v13];
        v17 = (unsigned __int64)&v4->pData[Pitch * ((unsigned __int64)v12 >> 10)];
        v18 = v12 & 0x3FF;
        v19 = 1023 - v18;
        v67 = 1023 - v18;
        if ( v14 > 0 )
          break;
LABEL_16:
        v12 += v15;
        v4 = splane;
        v13 = v71 + 1;
        v71 = v13;
        v73 = v12;
        if ( v13 >= dplane->Height )
          return;
      }
      if ( v14 <= 2 )
      {
        v69 = 0;
        v24 = (v10 - 1) >> 2;
        v70 = v24;
        if ( !Width )
        {
LABEL_15:
          v12 = v73;
          goto LABEL_16;
        }
        v25 = v18;
        do
        {
          v16 += 4;
          v26 = v24 & 0x3FF;
          v27 = 1023 - v26;
          v28 = (unsigned __int8 *)(v17 + 4 * (v24 >> 10));
          v29 = (v25 * (v26 * v28[1] + v27 * v28[5]) + v19 * (v27 * v28[Pitch + 5] + v26 * (unsigned int)v28[Pitch + 1])) >> 20;
          v30 = v19 * ((1023 - v26) * v28[Pitch + 7] + v26 * v28[Pitch + 3]);
          v31 = (v25 * (v26 * v28[2] + v27 * v28[6]) + v19 * (v27 * v28[Pitch + 6] + v26 * (unsigned int)v28[Pitch + 2])) >> 20;
          v32 = (1023 - v26) * v28[4];
          v33 = v67 * (v26 * v28[Pitch] + (1023 - v26) * v28[Pitch + 4]);
          v34 = v26 * *v28;
          v35 = (v25 * (v26 * v28[3] + (1023 - v26) * (unsigned int)v28[7]) + v30) >> 20;
          *(v16 - 3) = v29;
          *(v16 - 2) = v31;
          *(v16 - 1) = v35;
          v36 = v34 + v32;
          v24 = v10 + v70;
          v70 += v10;
          *(v16 - 4) = (unsigned int)(v25 * v36 + v33) >> 20;
          Width = dplane->Width;
          ++v69;
          v19 = v67;
        }
        while ( v69 < dplane->Width );
      }
      else
      {
        if ( v14 != 9 )
        {
          v12 = v73;
          if ( (unsigned int)(v14 - 200) > 1 )
            goto LABEL_16;
        }
        v20 = 0;
        v21 = (v10 - 1) >> 2;
        if ( !Width )
          goto LABEL_16;
        do
        {
          ++v16;
          v22 = (unsigned __int8 *)(v17 + ((unsigned __int64)v21 >> 10));
          v23 = v21 & 0x3FF;
          ++v20;
          v21 += v10;
          *(v16 - 1) = (v18 * (v23 * *v22 + (1023 - v23) * v22[1])
                      + (1023 - v18) * ((1023 - v23) * v22[Pitch + 1] + v23 * (unsigned int)v22[Pitch])) >> 20;
          Width = dplane->Width;
        }
        while ( v20 < dplane->Width );
      }
      v7 = v72;
      v15 = v68;
      v14 = v75;
      goto LABEL_15;
    }
    v37 = dplane->pData;
    v38 = splane->pData;
    v39 = format & 0xFFEFFFFF;
    if ( v39 > 0 )
    {
      if ( v39 <= 2 )
      {
        v44 = 0;
        v45 = (v10 - 1) >> 2;
        do
        {
          v37 += 4;
          v46 = v45 & 0x3FF;
          v47 = &v38[4 * (v45 >> 10)];
          ++v44;
          v45 += v10;
          v48 = (1023 - v46) * v47[4];
          v49 = (v46 * v47[2] + (1023 - v46) * (unsigned int)v47[6]) >> 10;
          v50 = v46 * *v47;
          v51 = (v46 * v47[3] + (1023 - v46) * (unsigned int)v47[7]) >> 10;
          *(v37 - 3) = (v46 * v47[1] + (1023 - v46) * (unsigned int)v47[5]) >> 10;
          *(v37 - 2) = v49;
          *(v37 - 1) = v51;
          *(v37 - 4) = (unsigned int)(v50 + v48) >> 10;
        }
        while ( v44 < dplane->Width );
      }
      else if ( v39 == 9 || (unsigned int)(v39 - 200) <= 1 )
      {
        v40 = 0;
        v41 = (v10 - 1) >> 2;
        do
        {
          ++v37;
          v42 = (unsigned __int64)v41 >> 10;
          v43 = v41 & 0x3FF;
          ++v40;
          v41 += v10;
          *(v37 - 1) = (v43 * v38[v42] + (1023 - v43) * (unsigned int)v38[v42 + 1]) >> 10;
        }
        while ( v40 < dplane->Width );
      }
    }
  }
}

void (__fastcall *__fastcall Scaleform::Render::GetImageConvertFunc(
        Scaleform::Render::ImageFormat destFormat,
        Scaleform::Render::ImageFormat sourceFormat))(unsigned __int8 *pd, const unsigned __int8 *ps, unsigned __int64 size, Scaleform::Render::Palette *__formal)
{
  Scaleform::Render::ImageFormat Source; // ecx
  Scaleform::Render::ScanlineConvert *v4; // rax

  if ( destFormat != sourceFormat )
  {
    Source = Scaleform::Render::ImageScanlineConvertTable[0].Source;
    v4 = Scaleform::Render::ImageScanlineConvertTable;
    while ( Source )
    {
      if ( Source == sourceFormat && v4->Dest == destFormat )
        return (void (__fastcall *)(unsigned __int8 *, const unsigned __int8 *, unsigned __int64, Scaleform::Render::Palette *))v4->CopyFunc;
      Source = v4[1].Source;
      ++v4;
    }
  }
  return Scaleform::Render::ImageBase::CopyScanlineDefault;
}

__int64 __fastcall Scaleform::Render::GetImageFormatRescaleType(Scaleform::Render::ImageFormat format)
{
  if ( format > Image_None )
  {
    if ( format <= Image_B8G8R8A8 )
      return 2i64;
    if ( format <= Image_B8G8R8 )
      return 1i64;
    if ( format == Image_A8 )
      return 4i64;
  }
  return 0i64;
}

void __fastcall Scaleform::Render::Image_CopyScanline24_Extend_RGB_BGRA(
        unsigned __int8 *pd,
        const unsigned __int8 *ps,
        unsigned __int64 size,
        Scaleform::Render::Palette *__formal)
{
  const unsigned __int8 *v4; // r9
  unsigned __int8 *v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int8 v7; // al

  if ( size )
  {
    v4 = ps + 1;
    v5 = pd + 2;
    v6 = (size - 1) / 3 + 1;
    do
    {
      v7 = v4[1];
      v4 += 3;
      *(v5 - 2) = v7;
      v5 += 4;
      *(v5 - 5) = *(v4 - 3);
      *(v5 - 4) = *(v4 - 4);
      *(v5 - 3) = -1;
      --v6;
    }
    while ( v6 );
  }
}

void __fastcall Scaleform::Render::Image_CopyScanline24_Extend_RGB_RGBA(
        unsigned __int8 *pd,
        const unsigned __int8 *ps,
        unsigned __int64 size,
        Scaleform::Render::Palette *__formal)
{
  const unsigned __int8 *v4; // r9
  unsigned __int8 *v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int8 v7; // al

  if ( size )
  {
    v4 = ps + 2;
    v5 = pd + 2;
    v6 = (size - 1) / 3 + 1;
    do
    {
      v7 = *(v4 - 2);
      v4 += 3;
      *(v5 - 2) = v7;
      v5 += 4;
      *(v5 - 5) = *(v4 - 4);
      *(v5 - 4) = *(v4 - 3);
      *(v5 - 3) = -1;
      --v6;
    }
    while ( v6 );
  }
}

void __fastcall Scaleform::Render::Image_CopyScanline24_SwapBR(
        unsigned __int8 *pd,
        const unsigned __int8 *ps,
        unsigned __int64 size,
        Scaleform::Render::Palette *__formal)
{
  const unsigned __int8 *v4; // r10
  signed __int64 v5; // r11
  unsigned __int8 *v6; // r9
  unsigned __int64 v7; // rdx
  unsigned __int8 v8; // al

  if ( size )
  {
    v4 = ps + 1;
    v5 = ps - pd;
    v6 = pd + 2;
    v7 = (size - 1) / 3 + 1;
    do
    {
      v8 = v4[1];
      v4 += 3;
      *(v6 - 2) = v8;
      v6 += 3;
      *(v6 - 4) = *(v4 - 3);
      *(v6 - 3) = v6[v5 - 5];
      --v7;
    }
    while ( v7 );
  }
}

void __fastcall Scaleform::Render::Image_CopyScanline32_Retract_BGRA_RGB(
        unsigned __int8 *pd,
        const unsigned __int8 *ps,
        unsigned __int64 size,
        Scaleform::Render::Palette *__formal)
{
  unsigned __int8 *v4; // r9
  const unsigned __int8 *v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int8 v7; // al

  if ( size )
  {
    v4 = pd + 2;
    v5 = ps + 1;
    v6 = (size - 1) / 3 + 1;
    do
    {
      v7 = v5[1];
      v5 += 4;
      *(v4 - 2) = v7;
      v4 += 3;
      *(v4 - 4) = *(v5 - 4);
      *(v4 - 3) = *(v5 - 5);
      --v6;
    }
    while ( v6 );
  }
}

void __fastcall Scaleform::Render::Image_CopyScanline32_Retract_RGBA_RGB(
        unsigned __int8 *pd,
        const unsigned __int8 *ps,
        unsigned __int64 size,
        Scaleform::Render::Palette *__formal)
{
  unsigned __int8 *v4; // r9
  const unsigned __int8 *v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int8 v7; // al

  if ( size )
  {
    v4 = pd + 2;
    v5 = ps + 2;
    v6 = (size - 1) / 3 + 1;
    do
    {
      v7 = *(v5 - 2);
      v5 += 4;
      *(v4 - 2) = v7;
      v4 += 3;
      *(v4 - 4) = *(v5 - 5);
      *(v4 - 3) = *(v5 - 4);
      --v6;
    }
    while ( v6 );
  }
}

void __fastcall Scaleform::Render::Image_CopyScanline32_SwapBR(
        unsigned __int8 *pd,
        const unsigned __int8 *ps,
        unsigned __int64 size,
        Scaleform::Render::Palette *__formal)
{
  const unsigned __int8 *v4; // r9
  signed __int64 v5; // r10
  unsigned __int8 *v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int8 v8; // cl

  if ( size )
  {
    v4 = ps + 1;
    v5 = ps - pd;
    v6 = pd + 2;
    v7 = ((size - 1) >> 2) + 1;
    do
    {
      v8 = v4[1];
      v4 += 4;
      *(v6 - 2) = v8;
      v6 += 4;
      *(v6 - 5) = *(v4 - 4);
      *(v6 - 4) = v6[v5 - 6];
      *(v6 - 3) = *(v4 - 2);
      --v7;
    }
    while ( v7 );
  }
}

void __fastcall Scaleform::Render::Image_CopyScanline_A_BGR(
        unsigned __int8 *pd,
        const unsigned __int8 *ps,
        unsigned __int64 size,
        Scaleform::Render::Palette *__formal)
{
  unsigned __int8 *v4; // rax
  unsigned __int8 v5; // cl

  if ( size )
  {
    v4 = pd + 2;
    do
    {
      v5 = *ps++;
      *(v4 - 2) = v5;
      v4 += 3;
      *(v4 - 4) = *(ps - 1);
      *(v4 - 3) = *(ps - 1);
      --size;
    }
    while ( size );
  }
}

void __fastcall Scaleform::Render::Image_CopyScanline_A_BGRA(
        unsigned __int8 *pd,
        const unsigned __int8 *ps,
        unsigned __int64 size,
        Scaleform::Render::Palette *__formal)
{
  unsigned __int8 *v4; // rax

  if ( size )
  {
    v4 = pd + 2;
    do
    {
      *((_WORD *)v4 - 1) = -1;
      ++ps;
      *v4 = -1;
      v4 += 4;
      *(v4 - 3) = *(ps - 1);
      --size;
    }
    while ( size );
  }
}

void __fastcall Scaleform::Render::Image_CopyScanline_B5G5RbA1_BGRA(
        unsigned __int8 *pd,
        const unsigned __int8 *ps,
        unsigned __int64 size,
        Scaleform::Render::Palette *__formal)
{
  unsigned __int8 *v4; // r9
  unsigned __int64 v5; // r8
  char v6; // cl
  unsigned __int8 v7; // al
  unsigned __int8 v8; // cl

  if ( size )
  {
    v4 = pd + 1;
    v5 = ((size - 1) >> 1) + 1;
    do
    {
      v4 += 4;
      v6 = ps[1] >> 2;
      ps += 2;
      *(v4 - 3) = (8 * (v6 & 0x1F)) | ((unsigned __int8)(v6 & 0x1F) >> 2);
      v7 = (*(ps - 2) >> 5) | (8 * (*(ps - 1) & 3));
      *(v4 - 4) = (8 * v7) | (v7 >> 2);
      v8 = *(ps - 2) & 0x1F;
      *(v4 - 2) = -1;
      *(v4 - 5) = (8 * v8) | (v8 >> 2);
      --v5;
    }
    while ( v5 );
  }
}

void __fastcall Scaleform::Render::Image_CopyScanline_B5G5RbA1_RGBA(
        unsigned __int8 *pd,
        const unsigned __int8 *ps,
        unsigned __int64 size,
        Scaleform::Render::Palette *__formal)
{
  unsigned __int8 *v4; // r9
  unsigned __int64 v5; // r8
  char v6; // cl
  unsigned __int8 v7; // al
  unsigned __int8 v8; // cl

  if ( size )
  {
    v4 = pd + 2;
    v5 = ((size - 1) >> 1) + 1;
    do
    {
      v4 += 4;
      v6 = ps[1] >> 2;
      ps += 2;
      *(v4 - 6) = (8 * (v6 & 0x1F)) | ((unsigned __int8)(v6 & 0x1F) >> 2);
      v7 = (*(ps - 2) >> 5) | (8 * (*(ps - 1) & 3));
      *(v4 - 5) = (8 * v7) | (v7 >> 2);
      v8 = *(ps - 2) & 0x1F;
      *(v4 - 3) = -1;
      *(v4 - 4) = (8 * v8) | (v8 >> 2);
      --v5;
    }
    while ( v5 );
  }
}

void __fastcall Scaleform::Render::Image_CopyScanline_BGRA_A(
        unsigned __int8 *pd,
        const unsigned __int8 *ps,
        unsigned __int64 size,
        Scaleform::Render::Palette *__formal)
{
  const unsigned __int8 *v4; // rax
  unsigned __int64 v5; // r8
  unsigned __int8 v6; // dl

  if ( size )
  {
    v4 = ps + 3;
    v5 = ((size - 1) >> 2) + 1;
    do
    {
      v6 = *v4;
      v4 += 4;
      *pd++ = v6;
      --v5;
    }
    while ( v5 );
  }
}

void __fastcall Scaleform::Render::Image_CopyScanline_BGRA_BGR(
        unsigned __int8 *pd,
        const unsigned __int8 *ps,
        unsigned __int64 size,
        Scaleform::Render::Palette *__formal)
{
  const unsigned __int8 *v4; // rax
  unsigned __int8 *v5; // r9
  unsigned __int64 v6; // rdx
  unsigned __int8 v7; // cl

  if ( size )
  {
    v4 = ps + 2;
    v5 = pd + 2;
    v6 = ((size - 1) >> 2) + 1;
    do
    {
      v7 = *(v4 - 2);
      v4 += 4;
      *(v5 - 2) = v7;
      v5 += 3;
      *(v5 - 4) = *(v4 - 5);
      *(v5 - 3) = *(v4 - 4);
      --v6;
    }
    while ( v6 );
  }
}

void __fastcall Scaleform::Render::Image_CopyScanline_BGRA_RGB(
        unsigned __int8 *pd,
        const unsigned __int8 *ps,
        unsigned __int64 size,
        Scaleform::Render::Palette *__formal)
{
  const unsigned __int8 *v4; // rax
  unsigned __int8 *v5; // r9
  unsigned __int64 v6; // rdx
  unsigned __int8 v7; // cl

  if ( size )
  {
    v4 = ps + 1;
    v5 = pd + 2;
    v6 = ((size - 1) >> 2) + 1;
    do
    {
      v7 = v4[1];
      v4 += 4;
      *(v5 - 2) = v7;
      v5 += 3;
      *(v5 - 4) = *(v4 - 4);
      *(v5 - 3) = *(v4 - 5);
      --v6;
    }
    while ( v6 );
  }
}

void __fastcall Scaleform::Render::Image_CopyScanline_BGR_A_Avg(
        unsigned __int8 *pd,
        const unsigned __int8 *ps,
        unsigned __int64 size,
        Scaleform::Render::Palette *__formal)
{
  const unsigned __int8 *v5; // r9
  unsigned __int64 v6; // r8
  int v7; // eax
  int v8; // ecx

  if ( size )
  {
    v5 = ps + 1;
    v6 = (size - 1) / 3 + 1;
    do
    {
      v7 = v5[1];
      ++pd;
      v8 = *(v5 - 1);
      v5 += 3;
      *(pd - 1) = ((unsigned int)*(v5 - 3) + v7 + v8) / 3;
      --v6;
    }
    while ( v6 );
  }
}

void __fastcall Scaleform::Render::Image_CopyScanline_G_RGBA(
        unsigned __int8 *pd,
        const unsigned __int8 *ps,
        unsigned __int64 size,
        Scaleform::Render::Palette *__formal)
{
  unsigned __int8 *v4; // rax
  unsigned __int8 v5; // cl

  if ( size )
  {
    v4 = pd + 2;
    do
    {
      v5 = *ps++;
      *(v4 - 2) = v5;
      v4 += 4;
      *(v4 - 5) = *(ps - 1);
      *(v4 - 4) = *(ps - 1);
      *(v4 - 3) = -1;
      --size;
    }
    while ( size );
  }
}

void __fastcall Scaleform::Render::Image_CopyScanline_P_A(
        unsigned __int8 *pd,
        const unsigned __int8 *ps,
        unsigned __int64 size,
        Scaleform::Render::Palette *colorMap)
{
  unsigned __int64 v4; // r10
  signed __int64 v5; // r11
  unsigned int Raw; // eax

  v4 = size;
  if ( size )
  {
    v5 = ps - pd;
    do
    {
      Raw = colorMap->Colors[pd[v5]].Raw;
      if ( colorMap->HasAlphaFlag )
        *pd = HIBYTE(Raw);
      else
        *pd = ((unsigned __int8)Raw + BYTE1(Raw) + (unsigned int)BYTE2(Raw)) / 3;
      ++pd;
      --v4;
    }
    while ( v4 );
  }
}

void __fastcall Scaleform::Render::Image_CopyScanline_P_BGR(
        unsigned __int8 *pd,
        const unsigned __int8 *ps,
        unsigned __int64 size,
        Scaleform::Render::Palette *colorMap)
{
  unsigned __int64 v4; // r10
  unsigned __int8 *v5; // rcx
  __int64 v6; // rax

  v4 = size;
  if ( size )
  {
    v5 = pd + 2;
    do
    {
      v6 = *ps;
      v5 += 3;
      ++ps;
      LODWORD(v6) = colorMap->Colors[v6].Raw;
      *(_WORD *)(v5 - 5) = v6;
      *(v5 - 3) = BYTE2(v6);
      --v4;
    }
    while ( v4 );
  }
}

void __fastcall Scaleform::Render::Image_CopyScanline_P_BGRA(
        unsigned __int8 *pd,
        const unsigned __int8 *ps,
        unsigned __int64 size,
        Scaleform::Render::Palette *colorMap)
{
  unsigned __int64 v4; // r11
  unsigned __int8 *v6; // rcx
  __int64 v7; // rax

  v4 = size;
  if ( size )
  {
    v6 = pd + 2;
    do
    {
      v7 = *ps;
      v6 += 4;
      ++ps;
      LODWORD(v7) = colorMap->Colors[v7].Raw;
      *((_WORD *)v6 - 3) = v7;
      *(v6 - 4) = BYTE2(v7);
      *(v6 - 3) = BYTE3(v7);
      --v4;
    }
    while ( v4 );
  }
}

void __fastcall Scaleform::Render::Image_CopyScanline_P_RGB(
        unsigned __int8 *pd,
        const unsigned __int8 *ps,
        unsigned __int64 size,
        Scaleform::Render::Palette *colorMap)
{
  unsigned __int8 *v5; // rcx
  __int64 v6; // rax

  if ( size )
  {
    v5 = pd + 2;
    do
    {
      v6 = *ps;
      v5 += 3;
      ++ps;
      LODWORD(v6) = colorMap->Colors[v6].Raw;
      *(v5 - 5) = BYTE2(v6);
      *(v5 - 4) = BYTE1(v6);
      *(v5 - 3) = v6;
      --size;
    }
    while ( size );
  }
}

void __fastcall Scaleform::Render::Image_CopyScanline_P_RGBA(
        unsigned __int8 *pd,
        const unsigned __int8 *ps,
        unsigned __int64 size,
        Scaleform::Render::Palette *colorMap)
{
  unsigned __int8 *v5; // rcx
  __int64 v6; // rax

  if ( size )
  {
    v5 = pd + 2;
    do
    {
      v6 = *ps;
      v5 += 4;
      ++ps;
      LODWORD(v6) = colorMap->Colors[v6].Raw;
      *(v5 - 4) = v6;
      *(v5 - 6) = BYTE2(v6);
      *(v5 - 5) = BYTE1(v6);
      *(v5 - 3) = BYTE3(v6);
      --size;
    }
    while ( size );
  }
}

void __fastcall Scaleform::Render::RescaleImageData(
        Scaleform::Render::ImageData *dest,
        Scaleform::Render::ImageData *src,
        Scaleform::Render::ResizeImageType resizeType)
{
  unsigned int PlaneCount; // esi
  unsigned int i; // ebx
  Scaleform::Render::ImagePlane pplane; // [rsp+50h] [rbp-58h] BYREF
  Scaleform::Render::ImagePlane v9; // [rsp+70h] [rbp-38h] BYREF

  PlaneCount = Scaleform::Render::ImageData::GetPlaneCount(src);
  for ( i = 0; i < PlaneCount; ++i )
  {
    memset(&pplane, 0, sizeof(pplane));
    memset(&v9, 0, sizeof(v9));
    Scaleform::Render::ImageData::GetPlane(src, i, &pplane);
    Scaleform::Render::ImageData::GetPlane(dest, i, &v9);
    Scaleform::Render::ResizeImageBilinear(
      v9.pData,
      v9.Width,
      v9.Height,
      v9.Pitch,
      pplane.pData,
      pplane.Width,
      pplane.Height,
      pplane.Pitch,
      resizeType);
  }
}

