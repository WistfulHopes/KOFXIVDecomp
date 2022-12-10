#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"

void Scaleform::Render::DICommand_Clear::ExecuteSW(Scaleform::Render::DICommandContext & context, Scaleform::Render::ImageData & dest, Scaleform::Render::ImageData * * __formal); // 0x1403C5DB0
bool Scaleform::Render::DICommand_SourceRect::CalculateDestClippedRect(Scaleform::Render::Rect<long> & dstClippedRect, Scaleform::Render::Point<long> & delta); // 0x1403C5C80
void Scaleform::Render::DICommand_ColorTransform::ExecuteSW(Scaleform::Render::DICommandContext & context, Scaleform::Render::ImageData & dest, Scaleform::Render::ImageData * * psrc); // 0x1403C5E90
void Scaleform::Render::DICommand_Compare::ExecuteSW(Scaleform::Render::DICommandContext & context, Scaleform::Render::ImageData & dest, Scaleform::Render::ImageData * * psrc); // 0x1403C6240
void Scaleform::Render::DICommand_CopyChannel::ExecuteSW(Scaleform::Render::DICommandContext & context, Scaleform::Render::ImageData & dest, Scaleform::Render::ImageData * * psrc); // 0x1403C64F0
void Scaleform::Render::DICommand_CopyPixels::ExecuteSW(Scaleform::Render::DICommandContext & context, Scaleform::Render::ImageData & dest, Scaleform::Render::ImageData * * psrc); // 0x1403C67F0
void Scaleform::Render::DICommand_FillRect::ExecuteSW(Scaleform::Render::DICommandContext & context, Scaleform::Render::ImageData & dest, Scaleform::Render::ImageData * * __formal); // 0x1403C6C00
void Scaleform::Render::DICommand_FloodFill::ExecuteSW(Scaleform::Render::DICommandContext & context, Scaleform::Render::ImageData & dest, Scaleform::Render::ImageData * * __formal); // 0x1403C6D40
class Scaleform::Array<Scaleform::Render::Point<long>,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Point<long>,Scaleform::AllocatorGH<Scaleform::Render::Point<long>,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<Scaleform::Render::Point<long>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<Scaleform::Render::Point<long>,2,Scaleform::ArrayDefaultPolicy> &);
	Array<Scaleform::Render::Point<long>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<Scaleform::Render::Point<long>,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<Scaleform::Render::Point<long>,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<Scaleform::Render::Point<long>,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<Scaleform::Render::Point<long>,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<Scaleform::Render::Point<long>,2,Scaleform::ArrayDefaultPolicy>();
};
void Scaleform::Render::DICommand_GetColorBoundsRect::ExecuteSW(Scaleform::Render::DICommandContext & context, Scaleform::Render::ImageData & dest, Scaleform::Render::ImageData * * __formal); // 0x1403C7170
void Scaleform::Render::DICommand_GetPixel32::ExecuteSW(Scaleform::Render::DICommandContext & context, Scaleform::Render::ImageData & dest, Scaleform::Render::ImageData * * __formal); // 0x1403C7300
void Scaleform::Render::DICommand_GetPixels::ExecuteSW(Scaleform::Render::DICommandContext & context, Scaleform::Render::ImageData & dest, Scaleform::Render::ImageData * * __formal); // 0x1403C73A0
void Scaleform::Render::DICommand_Histogram::ExecuteSW(Scaleform::Render::DICommandContext & context, Scaleform::Render::ImageData & dst, Scaleform::Render::ImageData * * __formal); // 0x1403C7480
void Scaleform::Render::DICommand_HitTest::ExecuteSW(Scaleform::Render::DICommandContext & context, Scaleform::Render::ImageData & dest, Scaleform::Render::ImageData * * psrc); // 0x1403C75D0
void Scaleform::Render::DICommand_Merge::ExecuteSW(Scaleform::Render::DICommandContext & context, Scaleform::Render::ImageData & dest, Scaleform::Render::ImageData * * psrc); // 0x1403C7940
void Scaleform::Render::DICommand_Noise::ExecuteSW(Scaleform::Render::DICommandContext & context, Scaleform::Render::ImageData & dest, Scaleform::Render::ImageData * * __formal); // 0x1403C7CB0
void Scaleform::Render::DICommand_PaletteMap::ExecuteSW(Scaleform::Render::DICommandContext & context, Scaleform::Render::ImageData & dest, Scaleform::Render::ImageData * * psrc); // 0x1403C7FA0
class Scaleform::Render::PerlinGenerator
{
public:
	PerlinGenerator(unsigned long, unsigned long);
	float TurbulenceNoise(float, float);
	float InterpolatedNoise(float, float);
	struct NoisePrimeSet;
private:
	Scaleform::Render::PerlinGenerator::NoisePrimeSet PrimeSet; // 0x0
	static const Scaleform::Render::PerlinGenerator::NoisePrimeSet NoisePrimeFactors[0]; // 0xFFFFFFFFFFFFFFFF
	float Noise(long, long);
	float SmoothNoise(long, long);
	float LinearInterpolate(float, float, float);
	float CosInterpolate(float, float, float);
};
float Scaleform::Render::PerlinGenerator::InterpolatedNoise(float x, float y); // 0x1403C90C0
struct Scaleform::Render::PerlinGenerator::NoisePrimeSet
{
	unsigned long primes[4]; // 0x0
};
float Scaleform::Render::PerlinGenerator::SmoothNoise(long x, long y); // 0x1403C9230
void Scaleform::Render::DICommand_PerlinNoise::ExecuteSW(Scaleform::Render::DICommandContext & context, Scaleform::Render::ImageData & dest, Scaleform::Render::ImageData * * __formal); // 0x1403C8250
class Scaleform::Render::LFSR
{
private:
	static const unsigned long FeedbackPoly[0]; // 0xFFFFFFFFFFFFFFFF
	unsigned long MaximumOutput; // 0x0
	unsigned long FeedbackIndex; // 0x4
public:
	LFSR(unsigned long);
	unsigned long Next(long);
};
const Scaleform::Render::PerlinGenerator::NoisePrimeSet Scaleform::Render::PerlinGenerator::NoisePrimeFactors[32]; // 0x14074D990
unsigned char Scaleform::Render::ChannelIndexMap[9]; // 0x1409F9F60
const unsigned long Scaleform::Render::LFSR::FeedbackPoly[24]; // 0x14074DA10
void Scaleform::Render::DICommand_PixelDissolve::ExecuteSW(Scaleform::Render::DICommandContext & context, Scaleform::Render::ImageData & dest, Scaleform::Render::ImageData * * psrc); // 0x1403C8620
void Scaleform::Render::DICommand_Scroll::ExecuteSW(Scaleform::Render::DICommandContext & context, Scaleform::Render::ImageData & dest, Scaleform::Render::ImageData * * psrc); // 0x1403C89A0
void Scaleform::Render::DICommand_SetPixel32::ExecuteSW(Scaleform::Render::DICommandContext & context, Scaleform::Render::ImageData & dest, Scaleform::Render::ImageData * * __formal); // 0x1403C8C70
void Scaleform::Render::DICommand_SetPixels::ExecuteSW(Scaleform::Render::DICommandContext & context, Scaleform::Render::ImageData & dest, Scaleform::Render::ImageData * * __formal); // 0x1403C8D30
void Scaleform::Render::DICommand_Threshold::ExecuteSW(Scaleform::Render::DICommandContext & context, Scaleform::Render::ImageData & dest, Scaleform::Render::ImageData * * psrc); // 0x1403C8E40//decompilation failure at 14074D990!
//decompilation failure at 1409F9F60!
//decompilation failure at 14074DA10!
bool __fastcall Scaleform::Render::DICommand_SourceRect::CalculateDestClippedRect(
        Scaleform::Render::DICommand_SourceRect *this,
        Scaleform::Render::Rect<long> *dstClippedRect,
        Scaleform::Render::Point<long> *delta)
{
  int v4; // edi
  Scaleform::Render::DrawableImage *pObject; // rcx
  int *v8; // rax
  Scaleform::Render::DrawableImage *v9; // rcx
  int v10; // er14
  int v11; // er15
  __int64 *v12; // rax
  int v13; // er8
  int v14; // er9
  int v15; // eax
  int v16; // ecx
  int y1; // er12
  int y2; // er10
  int x2; // er11
  int x1; // edx
  int v21; // er10
  int v22; // ecx
  int v23; // er11
  int v24; // edx
  int v25; // eax
  bool result; // al
  __int64 v27[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = 0;
  pObject = this->pSource.pObject;
  if ( pObject )
  {
    v8 = (int *)pObject->GetSize(pObject, (Scaleform::Render::Size<unsigned long> *)v27);
  }
  else
  {
    v27[0] = 0i64;
    v8 = (int *)v27;
  }
  v9 = this->pImage.pObject;
  v10 = *v8;
  v11 = v8[1];
  if ( v9 )
  {
    v12 = (__int64 *)v9->GetSize(v9, (Scaleform::Render::Size<unsigned long> *)v27);
  }
  else
  {
    v27[0] = 0i64;
    v12 = v27;
  }
  v13 = *(_DWORD *)v12;
  v14 = *((_DWORD *)v12 + 1);
  v15 = this->DestPoint.y - this->SourceRect.y1;
  v16 = this->DestPoint.x - this->SourceRect.x1;
  delta->y = v15;
  delta->x = v16;
  y1 = this->SourceRect.y1;
  if ( v11 < y1 )
    return 0;
  y2 = this->SourceRect.y2;
  if ( y2 < 0 )
    return 0;
  x2 = this->SourceRect.x2;
  if ( x2 < 0 )
    return 0;
  x1 = this->SourceRect.x1;
  if ( v10 < x1 )
    return 0;
  if ( x1 < 0 )
    x1 = 0;
  if ( v10 > x2 )
    v10 = this->SourceRect.x2;
  if ( y1 < 0 )
    y1 = 0;
  if ( v11 > y2 )
    v11 = this->SourceRect.y2;
  v21 = v16 + x1;
  v22 = v10 + v16;
  v23 = y1 + v15;
  v24 = v11 + v15;
  if ( v11 + v15 < 0 || v14 < v23 || v13 < v21 || v22 < 0 )
    return 0;
  v25 = 0;
  if ( v21 > 0 )
    v25 = v21;
  dstClippedRect->x1 = v25;
  result = 1;
  if ( v22 > v13 )
    v22 = v13;
  dstClippedRect->x2 = v22;
  if ( v23 > 0 )
    v4 = v23;
  dstClippedRect->y1 = v4;
  if ( v24 > v14 )
    v24 = v14;
  dstClippedRect->y2 = v24;
  return result;
}

void __fastcall Scaleform::Render::DICommand_Clear::ExecuteSW(
        Scaleform::Render::DICommand_Clear *this,
        Scaleform::Render::DICommandContext *context,
        Scaleform::Render::ImageData *dest,
        Scaleform::Render::ImageData **__formal)
{
  Scaleform::Render::TextureManager *v6; // rax
  __int64 v7; // rax
  unsigned int Raw; // esi
  unsigned int i; // edi
  unsigned int j; // ebx
  __int64 v11[3]; // [rsp+20h] [rbp-38h] BYREF
  int v12; // [rsp+38h] [rbp-20h]
  __int128 v13; // [rsp+40h] [rbp-18h]
  unsigned int v14; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+64h] [rbp+Ch]

  v6 = context->pHAL->GetTextureManager(context->pHAL);
  v7 = (__int64)v6->GetImageSwizzler(v6);
  v11[1] = 0i64;
  v11[0] = v7;
  v11[2] = (__int64)dest;
  v12 = 0;
  v13 = 0i64;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 8i64))(v7, v11);
  Raw = this->FillColor.Raw;
  this->pImage.pObject->GetSize(this->pImage.pObject, (Scaleform::Render::Size<unsigned long> *)&v14);
  for ( i = 0; i < v15; ++i )
  {
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v11[0] + 16i64))(v11[0], v11, i);
    for ( j = 0; j < v14; ++j )
      (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v11[0] + 24i64))(v11[0], v11, j, Raw);
  }
}

void __fastcall Scaleform::Render::DICommand_ColorTransform::ExecuteSW(
        Scaleform::Render::DICommand_ColorTransform *this,
        Scaleform::Render::DICommandContext *context,
        Scaleform::Render::ImageData *dest,
        Scaleform::Render::ImageData **psrc)
{
  Scaleform::Render::ImageData *v4; // rbx
  Scaleform::Render::DICommand_ColorTransform_vtbl *v9; // rax
  Scaleform::Render::DrawableImage *pObject; // rax
  __int128 v11; // xmm1
  float v12; // xmm2_4
  Scaleform::Render::TextureManager *v13; // rax
  __int64 v14; // rax
  Scaleform::Render::TextureManager *v15; // rax
  Scaleform::Render::ImageData *v16; // rbx
  __int64 v17; // rax
  int i; // ebx
  int j; // edi
  unsigned __int8 v20; // cl
  bool v21; // zf
  char v22; // dl
  __int64 v23; // rax
  char v24[3]; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int8 v25; // [rsp+23h] [rbp-DDh]
  unsigned int v26; // [rsp+24h] [rbp-DCh]
  int v27[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v28[3]; // [rsp+30h] [rbp-D0h] BYREF
  int v29; // [rsp+48h] [rbp-B8h]
  __int128 v30; // [rsp+50h] [rbp-B0h]
  __int64 v31[3]; // [rsp+60h] [rbp-A0h] BYREF
  int v32; // [rsp+78h] [rbp-88h]
  __int128 v33; // [rsp+80h] [rbp-80h]
  Scaleform::Render::ImagePlane pplane; // [rsp+90h] [rbp-70h] BYREF
  Scaleform::Render::ImagePlane v35; // [rsp+B0h] [rbp-50h] BYREF
  Scaleform::Render::Cxform v36; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v37; // [rsp+F0h] [rbp-10h] BYREF

  v4 = *psrc;
  memset(&pplane, 0, sizeof(pplane));
  memset(&v35, 0, sizeof(v35));
  Scaleform::Render::ImageData::GetPlane(dest, 0, &pplane);
  Scaleform::Render::ImageData::GetPlane(v4, 0, &v35);
  v9 = this->__vftable;
  v37 = 0i64;
  if ( v9->CalculateDestClippedRect(this, (Scaleform::Render::Rect<long> *)&v37, (Scaleform::Render::Point<long> *)v27) )
  {
    Scaleform::Render::Cxform::Cxform(&v36);
    pObject = this->pImage.pObject;
    v11 = *(_OWORD *)&this->CxBuffer[16];
    *(_OWORD *)&v36.M[0][0] = *(_OWORD *)this->CxBuffer;
    *(_OWORD *)&v36.M[1][0] = v11;
    if ( !pObject->Transparent )
    {
      v12 = v36.M[0][3] + v36.M[1][3];
      v36.M[1][3] = 0.0;
      v36.M[0][0] = v36.M[0][0] * v12;
      v36.M[1][0] = v36.M[1][0] * v12;
      v36.M[0][1] = v36.M[0][1] * v12;
      v36.M[1][1] = v36.M[1][1] * v12;
      v36.M[0][2] = v36.M[0][2] * v12;
      LODWORD(v36.M[0][3]) = FLOAT_1_0;
      v36.M[1][2] = v36.M[1][2] * v12;
    }
    v13 = context->pHAL->GetTextureManager(context->pHAL);
    v14 = (__int64)v13->GetImageSwizzler(v13);
    v31[1] = 0i64;
    v31[0] = v14;
    v31[2] = (__int64)dest;
    v32 = 0;
    v33 = 0i64;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 8i64))(v14, v31);
    v15 = context->pHAL->GetTextureManager(context->pHAL);
    v16 = *psrc;
    v17 = (__int64)v15->GetImageSwizzler(v15);
    v28[1] = 0i64;
    v28[0] = v17;
    v28[2] = (__int64)v16;
    v29 = 0;
    v30 = 0i64;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 8i64))(v17, v28);
    for ( i = DWORD1(v37); i < SHIDWORD(v37); ++i )
    {
      (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v31[0] + 16i64))(v31[0], v31, (unsigned int)i);
      (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v28[0] + 16i64))(
        v28[0],
        v28,
        (unsigned int)(i - v27[1]));
      for ( j = v37; j < SDWORD2(v37); ++j )
      {
        (*(void (__fastcall **)(__int64, char *, __int64 *, _QWORD))(*(_QWORD *)v28[0] + 40i64))(
          v28[0],
          v24,
          v28,
          (unsigned int)(j - v27[0]));
        v20 = v25;
        if ( !this->pSource.pObject->Transparent )
          v20 = -1;
        v25 = v20;
        v21 = !this->pImage.pObject->Transparent;
        BYTE2(v26) = (int)fmaxf(
                            0.0,
                            fminf(
                              (float)(v36.M[1][0]
                                    + (float)((float)((float)(unsigned __int8)v24[2] / 255.0) * v36.M[0][0]))
                            * 256.0,
                              255.0));
        BYTE1(v26) = (int)fmaxf(
                            0.0,
                            fminf(
                              (float)(v36.M[1][1]
                                    + (float)((float)((float)(unsigned __int8)v24[1] / 255.0) * v36.M[0][1]))
                            * 256.0,
                              255.0));
        LOBYTE(v26) = (int)fmaxf(
                             0.0,
                             fminf(
                               (float)(v36.M[1][2]
                                     + (float)((float)((float)(unsigned __int8)v24[0] / 255.0) * v36.M[0][2]))
                             * 256.0,
                               255.0));
        v22 = (int)fmaxf(
                     0.0,
                     fminf((float)(v36.M[1][3] + (float)((float)((float)v20 / 255.0) * v36.M[0][3])) * 256.0, 255.0));
        v23 = *(_QWORD *)v31[0];
        if ( v21 )
          v22 = -1;
        HIBYTE(v26) = v22;
        (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(v23 + 24))(v31[0], v31, (unsigned int)j, v26);
      }
    }
  }
}

void __fastcall Scaleform::Render::DICommand_Compare::ExecuteSW(
        Scaleform::Render::DICommand_Compare *this,
        Scaleform::Render::DICommandContext *context,
        Scaleform::Render::ImageData *dest,
        Scaleform::Render::ImageData **psrc)
{
  Scaleform::Render::ImageData *v4; // rdi
  unsigned __int64 *p_Pitch; // rax
  Scaleform::Render::ImageData *v6; // r12
  __int64 v10; // r9
  Scaleform::Render::TextureManager *v12; // rax
  __int64 v13; // rax
  Scaleform::Render::TextureManager *v14; // rax
  Scaleform::Render::ImageData *v15; // rbx
  __int64 v16; // rax
  Scaleform::Render::TextureManager *v17; // rax
  Scaleform::Render::ImageData *v18; // rbx
  __int64 v19; // rax
  unsigned int i; // esi
  unsigned int j; // ebx
  char v22; // al
  char v23; // r8
  char v24; // cl
  char v25; // al
  char v26; // dl
  char v27; // r9
  __int64 v28[3]; // [rsp+20h] [rbp-E0h] BYREF
  int v29; // [rsp+38h] [rbp-C8h]
  __int128 v30; // [rsp+40h] [rbp-C0h]
  __int64 v31[3]; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+68h] [rbp-98h]
  __int128 v33; // [rsp+70h] [rbp-90h]
  __int64 v34[3]; // [rsp+80h] [rbp-80h] BYREF
  int v35; // [rsp+98h] [rbp-68h]
  __int128 v36; // [rsp+A0h] [rbp-60h]
  Scaleform::Render::ImagePlane pplane; // [rsp+B0h] [rbp-50h] BYREF
  Scaleform::Render::ImagePlane v38; // [rsp+D0h] [rbp-30h] BYREF
  Scaleform::Render::ImagePlane v39; // [rsp+F0h] [rbp-10h] BYREF
  char v40; // [rsp+158h] [rbp+58h] BYREF
  char v41; // [rsp+159h] [rbp+59h]
  char v42; // [rsp+15Ah] [rbp+5Ah]
  char v43; // [rsp+15Bh] [rbp+5Bh]
  char v44; // [rsp+160h] [rbp+60h] BYREF
  char v45; // [rsp+161h] [rbp+61h]
  char v46; // [rsp+162h] [rbp+62h]
  char v47; // [rsp+163h] [rbp+63h]
  unsigned int v48; // [rsp+168h] [rbp+68h]

  v4 = *psrc;
  p_Pitch = &v38.Pitch;
  v6 = psrc[1];
  memset(&pplane, 0, sizeof(pplane));
  v10 = 2i64;
  do
  {
    *(p_Pitch - 1) = 0i64;
    *p_Pitch = 0i64;
    p_Pitch[1] = 0i64;
    p_Pitch[2] = 0i64;
    p_Pitch += 4;
    --v10;
  }
  while ( v10 );
  Scaleform::Render::ImageData::GetPlane(dest, 0, &pplane);
  Scaleform::Render::ImageData::GetPlane(v4, 0, &v38);
  Scaleform::Render::ImageData::GetPlane(v6, 0, &v39);
  v12 = context->pHAL->GetTextureManager(context->pHAL);
  v13 = (__int64)v12->GetImageSwizzler(v12);
  v34[1] = 0i64;
  v34[0] = v13;
  v34[2] = (__int64)dest;
  v35 = 0;
  v36 = 0i64;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 8i64))(v13, v34);
  v14 = context->pHAL->GetTextureManager(context->pHAL);
  v15 = *psrc;
  v16 = (__int64)v14->GetImageSwizzler(v14);
  v28[1] = 0i64;
  v28[0] = v16;
  v28[2] = (__int64)v15;
  v29 = 0;
  v30 = 0i64;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 8i64))(v16, v28);
  v17 = context->pHAL->GetTextureManager(context->pHAL);
  v18 = psrc[1];
  v19 = (__int64)v17->GetImageSwizzler(v17);
  v31[1] = 0i64;
  v31[0] = v19;
  v31[2] = (__int64)v18;
  v32 = 0;
  v33 = 0i64;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 8i64))(v19, v31);
  for ( i = 0; i < v4->pPlanes->Height; ++i )
  {
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v34[0] + 16i64))(v34[0], v34, i);
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v28[0] + 16i64))(v28[0], v28, i);
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v31[0] + 16i64))(v31[0], v31, i);
    for ( j = 0; j < v4->pPlanes->Width; ++j )
    {
      (*(void (__fastcall **)(__int64, char *, __int64 *, _QWORD))(*(_QWORD *)v28[0] + 40i64))(v28[0], &v40, v28, j);
      (*(void (__fastcall **)(__int64, char *, __int64 *, _QWORD))(*(_QWORD *)v31[0] + 40i64))(v31[0], &v44, v31, j);
      v22 = -1;
      v23 = -1;
      if ( this->pSource.pObject->Transparent )
        v22 = v43;
      if ( this->pImageCompare1.pObject->Transparent )
        v23 = v47;
      v24 = v41 - v45;
      v25 = v22 - v23;
      v26 = v40 - v44;
      v27 = v42 - v46;
      if ( v42 != v46 || v24 || v26 || !v25 )
      {
        v25 = -1;
      }
      else
      {
        v27 = -1;
        v24 = -1;
        v26 = -1;
      }
      BYTE1(v48) = v24;
      HIBYTE(v48) = v25;
      LOBYTE(v48) = v26;
      BYTE2(v48) = v27;
      (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v34[0] + 24i64))(v34[0], v34, j, v48);
    }
  }
}

void __fastcall Scaleform::Render::DICommand_CopyChannel::ExecuteSW(
        Scaleform::Render::DICommand_CopyChannel *this,
        Scaleform::Render::DICommandContext *context,
        Scaleform::Render::ImageData *dest,
        Scaleform::Render::ImageData **psrc)
{
  Scaleform::Render::ImageData *v4; // rbx
  Scaleform::Render::DICommand_CopyChannel_vtbl *v9; // rax
  __int64 SourceChannel; // rax
  unsigned __int8 v11; // r13
  __int64 DestChannel; // rax
  unsigned __int8 v13; // r12
  Scaleform::Render::TextureManager *v14; // rax
  __int64 v15; // rax
  Scaleform::Render::TextureManager *v16; // rax
  Scaleform::Render::ImageData *v17; // rbx
  __int64 v18; // rax
  int i; // ebx
  unsigned int v20; // edi
  char v21; // cl
  char v22; // cl
  bool v23; // zf
  unsigned __int8 v24; // [rsp+20h] [rbp-E0h]
  unsigned int v25; // [rsp+24h] [rbp-DCh] BYREF
  char v26; // [rsp+28h] [rbp-D8h] BYREF
  char v27; // [rsp+29h] [rbp-D7h]
  char v28; // [rsp+2Ah] [rbp-D6h]
  char v29; // [rsp+2Bh] [rbp-D5h]
  char v30[4]; // [rsp+2Ch] [rbp-D4h] BYREF
  char v31[8]; // [rsp+30h] [rbp-D0h] BYREF
  int v32[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v33[3]; // [rsp+40h] [rbp-C0h] BYREF
  int v34; // [rsp+58h] [rbp-A8h]
  __int128 v35; // [rsp+60h] [rbp-A0h]
  __int64 v36[3]; // [rsp+70h] [rbp-90h] BYREF
  int v37; // [rsp+88h] [rbp-78h]
  __int128 v38; // [rsp+90h] [rbp-70h]
  Scaleform::Render::ImagePlane pplane; // [rsp+A0h] [rbp-60h] BYREF
  Scaleform::Render::ImagePlane v40; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v41; // [rsp+E0h] [rbp-20h] BYREF

  v4 = *psrc;
  memset(&pplane, 0, sizeof(pplane));
  memset(&v40, 0, sizeof(v40));
  Scaleform::Render::ImageData::GetPlane(dest, 0, &pplane);
  Scaleform::Render::ImageData::GetPlane(v4, 0, &v40);
  v9 = this->__vftable;
  v41 = 0i64;
  if ( v9->CalculateDestClippedRect(this, (Scaleform::Render::Rect<long> *)&v41, (Scaleform::Render::Point<long> *)v32) )
  {
    SourceChannel = this->SourceChannel;
    v11 = (int)SourceChannel > 8 ? -1 : Scaleform::Render::ChannelIndexMap[SourceChannel];
    DestChannel = this->DestChannel;
    v24 = v11;
    v13 = (int)DestChannel > 8 ? -1 : Scaleform::Render::ChannelIndexMap[DestChannel];
    if ( v11 != 0xFF && v13 != 0xFF )
    {
      v14 = context->pHAL->GetTextureManager(context->pHAL);
      v15 = (__int64)v14->GetImageSwizzler(v14);
      v33[2] = (__int64)dest;
      v33[0] = v15;
      v33[1] = 0i64;
      v34 = 0;
      v35 = 0i64;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 8i64))(v15, v33);
      v16 = context->pHAL->GetTextureManager(context->pHAL);
      v17 = *psrc;
      v18 = (__int64)v16->GetImageSwizzler(v16);
      v36[1] = 0i64;
      v36[0] = v18;
      v36[2] = (__int64)v17;
      v37 = 0;
      v38 = 0i64;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 8i64))(v18, v36);
      for ( i = DWORD1(v41); i < SHIDWORD(v41); ++i )
      {
        (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v33[0] + 16i64))(v33[0], v33, (unsigned int)i);
        (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v36[0] + 16i64))(
          v36[0],
          v36,
          (unsigned int)(i - v32[1]));
        v20 = v41;
        if ( (int)v41 < SDWORD2(v41) )
        {
          do
          {
            (*(void (__fastcall **)(__int64, unsigned int *, __int64 *, _QWORD))(*(_QWORD *)v33[0] + 40i64))(
              v33[0],
              &v25,
              v33,
              v20);
            (*(void (__fastcall **)(__int64, char *, __int64 *, _QWORD))(*(_QWORD *)v36[0] + 40i64))(
              v36[0],
              v30,
              v36,
              v20 - v32[0]);
            v21 = v30[3];
            v26 = BYTE2(v25);
            v27 = BYTE1(v25);
            v28 = v25;
            v29 = HIBYTE(v25);
            v31[0] = v30[2];
            v31[1] = v30[1];
            v31[2] = v30[0];
            if ( !this->pSource.pObject->Transparent )
              v21 = -1;
            v31[3] = v21;
            *(&v26 + v13) = v31[v11];
            v22 = v29;
            v23 = !this->pImage.pObject->Transparent;
            BYTE2(v25) = v26;
            if ( v23 )
              v22 = -1;
            HIBYTE(v25) = v22;
            BYTE1(v25) = v27;
            LOBYTE(v25) = v28;
            (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v33[0] + 24i64))(
              v33[0],
              v33,
              v20++,
              v25);
          }
          while ( (int)v20 < SDWORD2(v41) );
          v11 = v24;
        }
      }
    }
  }
}

void __fastcall Scaleform::Render::DICommand_CopyPixels::ExecuteSW(
        Scaleform::Render::DICommand_CopyPixels *this,
        Scaleform::Render::DICommandContext *context,
        Scaleform::Render::ImageData *dest,
        Scaleform::Render::ImageData **psrc)
{
  Scaleform::Render::DICommand_CopyPixels_vtbl *v4; // rax
  Scaleform::Render::ImageData **v9; // rax
  Scaleform::Render::DrawableImage *pObject; // r14
  Scaleform::Render::ImageData *v11; // r15
  int v12; // er13
  Scaleform::Render::TextureManager *v13; // rax
  __int64 v14; // rax
  Scaleform::Render::TextureManager *v15; // rax
  Scaleform::Render::ImageData *v16; // rbx
  __int64 v17; // rax
  Scaleform::Render::TextureManager *v18; // rax
  __int64 v19; // rax
  int v20; // er12
  int v21; // er13
  unsigned int v22; // edi
  int v23; // er15
  char v24; // cl
  int v25; // eax
  unsigned int v26; // edx
  int v27; // ecx
  unsigned __int8 v28; // bl
  __int64 c2; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v30; // [rsp+28h] [rbp-D8h] BYREF
  int v31; // [rsp+30h] [rbp-D0h]
  Scaleform::Render::Color v32; // [rsp+34h] [rbp-CCh] BYREF
  int v33; // [rsp+38h] [rbp-C8h] BYREF
  Scaleform::Render::Color c1; // [rsp+3Ch] [rbp-C4h] BYREF
  Scaleform::Render::Color result[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v36[2]; // [rsp+48h] [rbp-B8h] BYREF
  Scaleform::Render::ImageData *v37; // [rsp+58h] [rbp-A8h]
  int v38; // [rsp+60h] [rbp-A0h]
  __int128 v39; // [rsp+68h] [rbp-98h]
  __int64 v40[2]; // [rsp+78h] [rbp-88h] BYREF
  Scaleform::Render::ImageData *v41; // [rsp+88h] [rbp-78h]
  int v42; // [rsp+90h] [rbp-70h]
  __int128 v43; // [rsp+98h] [rbp-68h]
  __int64 v44[3]; // [rsp+A8h] [rbp-58h] BYREF
  int v45; // [rsp+C0h] [rbp-40h]
  __int128 v46; // [rsp+C8h] [rbp-38h]
  __int128 v47; // [rsp+D8h] [rbp-28h] BYREF

  v4 = this->__vftable;
  v47 = 0i64;
  if ( v4->CalculateDestClippedRect(this, (Scaleform::Render::Rect<long> *)&v47, (Scaleform::Render::Point<long> *)&v30) )
  {
    v9 = psrc + 1;
    pObject = this->pAlphaSource.pObject;
    if ( !pObject )
      v9 = psrc;
    v11 = *v9;
    if ( pObject )
    {
      v12 = this->SourceRect.y1 + HIDWORD(v30) - this->AlphaPoint.y;
      v31 = this->SourceRect.x1 + v30 - this->AlphaPoint.x;
    }
    else
    {
      *(_QWORD *)&result[0].Channels.Blue = v30;
      v12 = HIDWORD(v30);
      v31 = v30;
    }
    v13 = context->pHAL->GetTextureManager(context->pHAL);
    v14 = (__int64)v13->GetImageSwizzler(v13);
    v44[2] = (__int64)dest;
    v44[1] = 0i64;
    v45 = 0;
    v44[0] = v14;
    v46 = 0i64;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 8i64))(v14, v44);
    v15 = context->pHAL->GetTextureManager(context->pHAL);
    v16 = *psrc;
    v17 = (__int64)v15->GetImageSwizzler(v15);
    v37 = v16;
    v36[0] = v17;
    v36[1] = 0i64;
    v38 = 0;
    v39 = 0i64;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 8i64))(v17, v36);
    if ( !pObject )
      v11 = *psrc;
    v18 = context->pHAL->GetTextureManager(context->pHAL);
    v19 = (__int64)v18->GetImageSwizzler(v18);
    v40[1] = 0i64;
    v40[0] = v19;
    v41 = v11;
    v42 = 0;
    v43 = 0i64;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 8i64))(v19, v40);
    v20 = DWORD1(v47);
    if ( SDWORD1(v47) < SHIDWORD(v47) )
    {
      v21 = -v12;
      do
      {
        if ( v20 - HIDWORD(v30) < 0 || v20 - HIDWORD(v30) >= (signed int)v37->pPlanes->Height )
          goto LABEL_36;
        (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v44[0] + 16i64))(v44[0], v44, (unsigned int)v20);
        (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v36[0] + 16i64))(
          v36[0],
          v36,
          (unsigned int)(v20 - HIDWORD(v30)));
        if ( pObject )
        {
          if ( v20 + v21 < 0 || v20 + v21 >= (signed int)v41->pPlanes->Height )
            goto LABEL_36;
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v40[0] + 16i64))(v40[0], v40);
        }
        v22 = v47;
        if ( (int)v47 < SDWORD2(v47) )
        {
          v23 = -v31;
          while ( 1 )
          {
            if ( (int)(v22 - v30) >= 0 && (signed int)(v22 - v30) < (signed int)v37->pPlanes->Width )
            {
              (*(void (__fastcall **)(__int64, char *, __int64 *))(*(_QWORD *)v36[0] + 40i64))(
                v36[0],
                (char *)&c2 + 4,
                v36);
              v24 = HIBYTE(c2);
              if ( !this->pSource.pObject->Transparent )
                v24 = -1;
              HIBYTE(c2) = v24;
              LODWORD(c2) = HIDWORD(c2);
              if ( !pObject )
                goto LABEL_27;
              if ( (int)(v22 + v23) >= 0 && (signed int)(v22 + v23) < (signed int)v41->pPlanes->Width )
                break;
            }
LABEL_35:
            if ( (int)++v22 >= SDWORD2(v47) )
              goto LABEL_36;
          }
          (*(void (__fastcall **)(__int64, int *, __int64 *))(*(_QWORD *)v40[0] + 40i64))(v40[0], &v33, v40);
          LODWORD(c2) = v33;
LABEL_27:
          (*(void (__fastcall **)(__int64, Scaleform::Render::Color *, __int64 *, _QWORD, __int64))(*(_QWORD *)v44[0]
                                                                                                  + 40i64))(
            v44[0],
            &v32,
            v44,
            v22,
            c2);
          if ( pObject )
            v25 = BYTE3(c2) + 1;
          else
            v25 = 256;
          v26 = (v25 * (unsigned int)HIBYTE(c2)) >> 8;
          LOBYTE(v27) = (unsigned __int16)(v25 * HIBYTE(c2)) >> 8;
          if ( this->MergeAlpha )
            v27 = (int)(float)((float)((float)(255 - (unsigned __int8)v26) * (float)((float)v32.Channels.Alpha / 255.0))
                             + (float)(unsigned __int8)v26);
          v28 = v27;
          if ( !this->pImage.pObject->Transparent )
            v28 = -1;
          LODWORD(c2) = HIDWORD(c2);
          c1 = v32;
          LODWORD(c2) = *Scaleform::Render::Color::Blend(
                           result,
                           &c1.Channels.Blue,
                           (unsigned __int8 *)&c2,
                           (float)(unsigned __int8)v26 / (float)v28);
          BYTE3(c2) = v28;
          (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v44[0] + 24i64))(
            v44[0],
            v44,
            v22,
            (unsigned int)c2,
            c2);
          goto LABEL_35;
        }
LABEL_36:
        ++v20;
      }
      while ( v20 < SHIDWORD(v47) );
    }
  }
}

void __fastcall Scaleform::Render::DICommand_FillRect::ExecuteSW(
        Scaleform::Render::DICommand_FillRect *this,
        Scaleform::Render::DICommandContext *context,
        Scaleform::Render::ImageData *dest,
        Scaleform::Render::ImageData **__formal)
{
  Scaleform::Render::TextureManager *v6; // rax
  __int64 v7; // rax
  int y1; // esi
  int v9; // er15
  int y2; // eax
  int x2; // ecx
  int v12; // ebx
  int x1; // er14
  unsigned int Raw; // ebp
  int i; // edi
  __int64 v16[3]; // [rsp+20h] [rbp-48h] BYREF
  int v17; // [rsp+38h] [rbp-30h]
  __int128 v18; // [rsp+40h] [rbp-28h]
  int v19; // [rsp+70h] [rbp+8h] BYREF
  int v20; // [rsp+74h] [rbp+Ch]

  v6 = context->pHAL->GetTextureManager(context->pHAL);
  v7 = (__int64)v6->GetImageSwizzler(v6);
  v16[2] = (__int64)dest;
  v16[0] = v7;
  v16[1] = 0i64;
  v17 = 0;
  v18 = 0i64;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 8i64))(v7, v16);
  this->pImage.pObject->GetSize(this->pImage.pObject, (Scaleform::Render::Size<unsigned long> *)&v19);
  y1 = this->ApplyRect.y1;
  v9 = v20;
  if ( v20 >= y1 )
  {
    y2 = this->ApplyRect.y2;
    if ( y2 >= 0 )
    {
      x2 = this->ApplyRect.x2;
      if ( x2 >= 0 )
      {
        v12 = v19;
        x1 = this->ApplyRect.x1;
        if ( v19 >= x1 )
        {
          if ( x1 < 0 )
            x1 = 0;
          if ( v19 > x2 )
            v12 = this->ApplyRect.x2;
          if ( y1 < 0 )
            y1 = 0;
          Raw = this->FillColor.Raw;
          if ( v20 > y2 )
            v9 = this->ApplyRect.y2;
          if ( !this->pImage.pObject->Transparent )
            Raw |= 0xFF000000;
          for ( ; y1 < v9; ++y1 )
          {
            (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v16[0] + 16i64))(
              v16[0],
              v16,
              (unsigned int)y1);
            for ( i = x1; i < v12; ++i )
              (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v16[0] + 24i64))(
                v16[0],
                v16,
                (unsigned int)i,
                Raw);
          }
        }
      }
    }
  }
}

void __fastcall Scaleform::Render::DICommand_FloodFill::ExecuteSW(
        Scaleform::Render::DICommand_FloodFill *this,
        Scaleform::Render::DICommandContext *context,
        Scaleform::Render::ImageData *dest,
        Scaleform::Render::ImageData **__formal)
{
  int v7; // edi
  int x; // eax
  int v9; // ebx
  int y; // eax
  unsigned int Raw; // ecx
  bool v12; // zf
  Scaleform::Render::TextureManager *v13; // rax
  __int64 v14; // rax
  Scaleform::Render::TextureManager *v15; // rax
  __int64 v16; // rax
  int v17; // er14
  int v18; // er15
  unsigned __int64 v19; // rsi
  Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *Data; // rax
  unsigned __int64 v21; // r14
  int pObject; // er13
  int pObject_high; // er15
  unsigned __int64 v24; // r8
  int v25; // eax
  int v26; // er12
  int v27; // edx
  int v28; // ecx
  int v29; // er8
  int v30; // eax
  int v31; // ebx
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // r8
  Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *v34; // rcx
  unsigned __int64 v35; // rsi
  unsigned __int64 v36; // r8
  Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *v37; // rcx
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // r8
  Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *v40; // rcx
  unsigned __int64 v41; // r8
  Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *v42; // rcx
  Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2>,Scaleform::ArrayDefaultPolicy> pheapAddr; // [rsp+20h] [rbp-69h] BYREF
  unsigned int v44; // [rsp+38h] [rbp-51h]
  int v45; // [rsp+3Ch] [rbp-4Dh] BYREF
  int v46; // [rsp+40h] [rbp-49h] BYREF
  int v47; // [rsp+48h] [rbp-41h] BYREF
  int v48; // [rsp+4Ch] [rbp-3Dh]
  __int128 v49; // [rsp+50h] [rbp-39h]
  __int64 v50[3]; // [rsp+60h] [rbp-29h] BYREF
  int v51; // [rsp+78h] [rbp-11h]
  __int128 v52; // [rsp+80h] [rbp-9h]
  __int64 v53[3]; // [rsp+90h] [rbp+7h] BYREF
  int v54; // [rsp+A8h] [rbp+1Fh]
  __int128 v55; // [rsp+B0h] [rbp+27h]
  int v56; // [rsp+F0h] [rbp+67h]

  ((void (__fastcall *)(Scaleform::Render::DrawableImage *, int *, Scaleform::Render::ImageData *, Scaleform::Render::ImageData **))this->pImage.pObject->GetSize)(
    this->pImage.pObject,
    &v47,
    dest,
    __formal);
  v7 = v47;
  x = this->Pt.x;
  v9 = v48;
  v56 = v48;
  if ( x <= v47 && x >= 0 )
  {
    y = this->Pt.y;
    if ( y <= v48 && y >= 0 )
    {
      Raw = this->FillColor.Raw;
      v12 = !this->pImage.pObject->Transparent;
      v44 = Raw;
      if ( v12 )
        v44 = Raw | 0xFF000000;
      v13 = context->pHAL->GetTextureManager(context->pHAL);
      v14 = (__int64)v13->GetImageSwizzler(v13);
      v53[2] = (__int64)dest;
      v53[0] = v14;
      v53[1] = 0i64;
      v54 = 0;
      v55 = 0i64;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 8i64))(v14, v53);
      v15 = context->pHAL->GetTextureManager(context->pHAL);
      v16 = (__int64)v15->GetImageSwizzler(v15);
      v50[1] = 0i64;
      v50[0] = v16;
      v50[2] = (__int64)dest;
      v51 = 0;
      v52 = 0i64;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 8i64))(v16, v50);
      (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v50[0] + 16i64))(
        v50[0],
        v50,
        (unsigned int)this->Pt.y);
      (*(void (__fastcall **)(__int64, int *, __int64 *, _QWORD))(*(_QWORD *)v50[0] + 40i64))(
        v50[0],
        &v45,
        v50,
        (unsigned int)this->Pt.x);
      v17 = this->Pt.x;
      v18 = this->Pt.y;
      v19 = 1i64;
      memset(&pheapAddr, 0, sizeof(pheapAddr));
      Scaleform::ArrayDataBase<Scaleform::Render::ImageFileHandler *,Scaleform::AllocatorGH<Scaleform::Render::ImageFileHandler *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &pheapAddr,
        &pheapAddr,
        1ui64);
      Data = pheapAddr.Data;
      pheapAddr.Size = 1i64;
      if ( pheapAddr.Data )
      {
        LODWORD(pheapAddr.Data->pObject) = v17;
        HIDWORD(Data->pObject) = v18;
      }
      while ( 1 )
      {
        v21 = v19 - 1;
        pObject = (int)pheapAddr.Data[v19 - 1].pObject;
        pObject_high = HIDWORD(pheapAddr.Data[v19 - 1].pObject);
        if ( v19 - 1 >= v19 )
        {
          if ( v21 > pheapAddr.Policy.Capacity )
          {
            v24 = v21 + (v21 >> 2);
            goto LABEL_14;
          }
        }
        else if ( v21 < pheapAddr.Policy.Capacity >> 1 )
        {
          v24 = v19 - 1;
LABEL_14:
          Scaleform::ArrayDataBase<Scaleform::Render::ImageFileHandler *,Scaleform::AllocatorGH<Scaleform::Render::ImageFileHandler *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
            &pheapAddr,
            &pheapAddr,
            v24);
        }
        pheapAddr.Size = v19 - 1;
        v25 = pObject + 1;
        --v19;
        v26 = pObject_high + 1;
        v49 = 0i64;
        if ( v9 < pObject_high || v26 < 0 || v25 < 0 || v7 < pObject )
        {
          v30 = HIDWORD(v49);
          v28 = DWORD2(v49);
          v29 = DWORD1(v49);
          v27 = v49;
        }
        else
        {
          v27 = pObject;
          v28 = v7;
          if ( pObject < 0 )
            v27 = 0;
          v29 = pObject_high;
          if ( v7 > v25 )
            v28 = pObject + 1;
          v30 = v9;
          if ( pObject_high < 0 )
            v29 = 0;
          if ( v9 > v26 )
            v30 = pObject_high + 1;
        }
        if ( (v28 - v27) * (v30 - v29) <= 0 )
          goto LABEL_64;
        (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v50[0] + 16i64))(
          v50[0],
          v50,
          (unsigned int)pObject_high);
        v31 = v45;
        (*(void (__fastcall **)(__int64, int *, __int64 *, _QWORD))(*(_QWORD *)v50[0] + 40i64))(
          v50[0],
          &v46,
          v50,
          (unsigned int)pObject);
        if ( v46 == v31 )
        {
          (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v53[0] + 16i64))(
            v53[0],
            v53,
            (unsigned int)pObject_high);
          (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v53[0] + 24i64))(
            v53[0],
            v53,
            (unsigned int)pObject,
            v44);
          v32 = v21 + 1;
          if ( v21 + 1 >= v21 )
          {
            if ( v32 > pheapAddr.Policy.Capacity )
            {
              v33 = v32 + (v32 >> 2);
LABEL_36:
              Scaleform::ArrayDataBase<Scaleform::Render::ImageFileHandler *,Scaleform::AllocatorGH<Scaleform::Render::ImageFileHandler *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
                &pheapAddr,
                &pheapAddr,
                v33);
            }
          }
          else if ( v32 < pheapAddr.Policy.Capacity >> 1 )
          {
            v33 = v21 + 1;
            goto LABEL_36;
          }
          pheapAddr.Size = v21 + 1;
          v34 = &pheapAddr.Data[v32 - 1];
          if ( v34 )
          {
            LODWORD(v34->pObject) = pObject - 1;
            HIDWORD(v34->pObject) = pObject_high;
          }
          v35 = v21 + 2;
          if ( v21 + 2 >= v21 + 1 )
          {
            if ( v35 > pheapAddr.Policy.Capacity )
            {
              v36 = v35 + (v35 >> 2);
LABEL_44:
              Scaleform::ArrayDataBase<Scaleform::Render::ImageFileHandler *,Scaleform::AllocatorGH<Scaleform::Render::ImageFileHandler *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
                &pheapAddr,
                &pheapAddr,
                v36);
            }
          }
          else if ( v35 < pheapAddr.Policy.Capacity >> 1 )
          {
            v36 = v21 + 2;
            goto LABEL_44;
          }
          pheapAddr.Size = v21 + 2;
          v37 = &pheapAddr.Data[v35 - 1];
          if ( v37 )
          {
            LODWORD(v37->pObject) = pObject;
            HIDWORD(v37->pObject) = pObject_high - 1;
          }
          v38 = v21 + 3;
          if ( v21 + 3 >= v21 + 2 )
          {
            if ( v38 > pheapAddr.Policy.Capacity )
            {
              v39 = v38 + (v38 >> 2);
LABEL_52:
              Scaleform::ArrayDataBase<Scaleform::Render::ImageFileHandler *,Scaleform::AllocatorGH<Scaleform::Render::ImageFileHandler *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
                &pheapAddr,
                &pheapAddr,
                v39);
            }
          }
          else if ( v38 < pheapAddr.Policy.Capacity >> 1 )
          {
            v39 = v21 + 3;
            goto LABEL_52;
          }
          pheapAddr.Size = v21 + 3;
          v40 = &pheapAddr.Data[v38 - 1];
          if ( v40 )
          {
            LODWORD(v40->pObject) = pObject;
            HIDWORD(v40->pObject) = v26;
          }
          v19 = v21 + 4;
          if ( v21 + 4 >= v21 + 3 )
          {
            if ( v19 > pheapAddr.Policy.Capacity )
            {
              v41 = v19 + (v19 >> 2);
LABEL_60:
              Scaleform::ArrayDataBase<Scaleform::Render::ImageFileHandler *,Scaleform::AllocatorGH<Scaleform::Render::ImageFileHandler *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
                &pheapAddr,
                &pheapAddr,
                v41);
            }
          }
          else if ( v19 < pheapAddr.Policy.Capacity >> 1 )
          {
            v41 = v21 + 4;
            goto LABEL_60;
          }
          v9 = v56;
          pheapAddr.Size = v21 + 4;
          v42 = &pheapAddr.Data[v19 - 1];
          if ( v42 )
          {
            HIDWORD(v42->pObject) = pObject_high;
            LODWORD(v42->pObject) = pObject + 1;
          }
          goto LABEL_64;
        }
        v9 = v56;
LABEL_64:
        if ( !v19 )
        {
          if ( pheapAddr.Data )
            ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
          return;
        }
      }
    }
  }
}

void __fastcall Scaleform::Render::DICommand_GetColorBoundsRect::ExecuteSW(
        Scaleform::Render::DICommand_GetColorBoundsRect *this,
        Scaleform::Render::DICommandContext *context,
        Scaleform::Render::ImageData *dest,
        Scaleform::Render::ImageData **__formal)
{
  Scaleform::Render::TextureManager *v6; // rax
  __int64 v7; // rax
  signed int v8; // ebp
  char v9; // r13
  signed int v10; // er14
  int v11; // er15
  int v12; // er12
  signed int v13; // esi
  signed int v14; // ebx
  unsigned int v15; // eax
  signed int v16; // eax
  signed int v17; // eax
  int v18; // eax
  int v19; // eax
  Scaleform::Render::Rect<long> *Result; // rax
  __int64 v21[3]; // [rsp+20h] [rbp-68h] BYREF
  int v22; // [rsp+38h] [rbp-50h]
  __int128 v23; // [rsp+40h] [rbp-48h]
  int v24; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v25; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v26; // [rsp+9Ch] [rbp+14h]

  v6 = context->pHAL->GetTextureManager(context->pHAL);
  v7 = (__int64)v6->GetImageSwizzler(v6);
  v21[1] = 0i64;
  v21[0] = v7;
  v21[2] = (__int64)dest;
  v22 = 0;
  v23 = 0i64;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 8i64))(v7, v21);
  this->pImage.pObject->GetSize(this->pImage.pObject, (Scaleform::Render::Size<unsigned long> *)&v25);
  v8 = v26;
  v9 = 0;
  v10 = v25;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  if ( v26 )
  {
    while ( 1 )
    {
      (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v21[0] + 16i64))(v21[0], v21, (unsigned int)v13);
      v14 = 0;
      if ( v25 )
        break;
LABEL_17:
      if ( ++v13 >= v26 )
        goto LABEL_18;
    }
    while ( 1 )
    {
      (*(void (__fastcall **)(__int64, int *, __int64 *, _QWORD))(*(_QWORD *)v21[0] + 40i64))(
        v21[0],
        &v24,
        v21,
        (unsigned int)v14);
      v15 = v24 & this->Mask;
      if ( this->FindColor )
      {
        if ( v15 == this->SearchColor )
          goto LABEL_7;
      }
      else if ( v15 != this->SearchColor )
      {
LABEL_7:
        v16 = v14;
        v9 = 1;
        if ( v10 < v14 )
          v16 = v10;
        v10 = v16;
        v17 = v13;
        if ( v8 < v13 )
          v17 = v8;
        v8 = v17;
        v18 = v14 + 1;
        if ( v14 + 1 < v11 )
          v18 = v11;
        v11 = v18;
        v19 = v13 + 1;
        if ( v13 + 1 < v12 )
          v19 = v12;
        v12 = v19;
      }
      if ( ++v14 >= v25 )
        goto LABEL_17;
    }
  }
LABEL_18:
  Result = this->Result;
  if ( Result )
  {
    if ( v9 )
    {
      Result->x1 = v10;
      Result->y1 = v8;
      Result->x2 = v11;
      Result->y2 = v12;
    }
    else
    {
      *(_QWORD *)&Result->x1 = 0i64;
      *(_QWORD *)&Result->x2 = 0i64;
    }
  }
}

void __fastcall Scaleform::Render::DICommand_GetPixel32::ExecuteSW(
        Scaleform::Render::DICommand_GetPixel32 *this,
        Scaleform::Render::DICommandContext *context,
        Scaleform::Render::ImageData *dest,
        Scaleform::Render::ImageData **__formal)
{
  Scaleform::Render::TextureManager *v6; // rax
  __int64 v7; // rax
  __int64 v8[3]; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+38h] [rbp-20h]
  __int128 v10; // [rsp+40h] [rbp-18h]
  Scaleform::Render::Color v11; // [rsp+60h] [rbp+8h] BYREF

  v6 = context->pHAL->GetTextureManager(context->pHAL);
  v7 = (__int64)v6->GetImageSwizzler(v6);
  v8[2] = (__int64)dest;
  v8[1] = 0i64;
  v9 = 0;
  v8[0] = v7;
  v10 = 0i64;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 8i64))(v7, v8);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v8[0] + 16i64))(v8[0], v8, this->Y);
  if ( this->Result )
  {
    (*(void (__fastcall **)(__int64, Scaleform::Render::Color *, __int64 *, _QWORD))(*(_QWORD *)v8[0] + 40i64))(
      v8[0],
      &v11,
      v8,
      this->X);
    *this->Result = v11;
  }
}

void __fastcall Scaleform::Render::DICommand_GetPixels::ExecuteSW(
        Scaleform::Render::DICommand_GetPixels *this,
        Scaleform::Render::DICommandContext *context,
        Scaleform::Render::ImageData *dest,
        Scaleform::Render::ImageData **__formal)
{
  Scaleform::Render::TextureManager *v6; // rax
  __int64 v7; // rax
  int i; // esi
  int j; // ebx
  __int64 v10[3]; // [rsp+20h] [rbp-38h] BYREF
  int v11; // [rsp+38h] [rbp-20h]
  __int128 v12; // [rsp+40h] [rbp-18h]
  unsigned int v13; // [rsp+60h] [rbp+8h] BYREF

  v6 = context->pHAL->GetTextureManager(context->pHAL);
  v7 = (__int64)v6->GetImageSwizzler(v6);
  v10[2] = (__int64)dest;
  v10[1] = 0i64;
  v11 = 0;
  v10[0] = v7;
  v12 = 0i64;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 8i64))(v7, v10);
  for ( i = this->SourceRect.y1; i < this->SourceRect.y2; ++i )
  {
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v10[0] + 16i64))(v10[0], v10, (unsigned int)i);
    for ( j = this->SourceRect.x1; j < this->SourceRect.x2; ++j )
    {
      (*(void (__fastcall **)(__int64, unsigned int *, __int64 *, _QWORD))(*(_QWORD *)v10[0] + 40i64))(
        v10[0],
        &v13,
        v10,
        (unsigned int)j);
      this->Provider->WriteNextPixel(this->Provider, v13);
    }
  }
}

void __fastcall Scaleform::Render::DICommand_Histogram::ExecuteSW(
        Scaleform::Render::DICommand_Histogram *this,
        Scaleform::Render::DICommandContext *context,
        Scaleform::Render::ImageData *dst,
        Scaleform::Render::ImageData **__formal)
{
  Scaleform::Render::TextureManager *v6; // rax
  __int64 v7; // rax
  Scaleform::Render::ImagePlane *pPlanes; // rax
  int y1; // esi
  int y2; // edx
  Scaleform::Render::ImagePlane *v11; // rax
  int x1; // ebx
  int x2; // edx
  unsigned int v14; // edx
  int v15; // ecx
  Scaleform::Render::ImagePlane *v16; // rax
  int Width; // edx
  Scaleform::Render::ImagePlane *v18; // rax
  int Height; // edx
  __int64 v20[3]; // [rsp+20h] [rbp-48h] BYREF
  int v21; // [rsp+38h] [rbp-30h]
  __int128 v22; // [rsp+40h] [rbp-28h]
  unsigned int v23; // [rsp+70h] [rbp+8h] BYREF

  v6 = context->pHAL->GetTextureManager(context->pHAL);
  v7 = (__int64)v6->GetImageSwizzler(v6);
  v20[2] = (__int64)dst;
  v20[0] = v7;
  v20[1] = 0i64;
  v21 = 0;
  v22 = 0i64;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 8i64))(v7, v20);
  pPlanes = dst->pPlanes;
  y1 = this->SourceRect.y1;
  y2 = this->SourceRect.y2;
  if ( y1 < 0 )
    y1 = 0;
  if ( (signed int)pPlanes->Height < y2 )
    y2 = pPlanes->Height;
  if ( y1 < y2 )
  {
    do
    {
      (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v20[0] + 16i64))(v20[0], v20, (unsigned int)y1);
      v11 = dst->pPlanes;
      x1 = this->SourceRect.x1;
      x2 = this->SourceRect.x2;
      if ( x1 < 0 )
        x1 = 0;
      if ( (signed int)v11->Width < x2 )
        x2 = v11->Width;
      if ( x1 < x2 )
      {
        do
        {
          (*(void (__fastcall **)(__int64, unsigned int *, __int64 *, _QWORD))(*(_QWORD *)v20[0] + 40i64))(
            v20[0],
            &v23,
            v20,
            (unsigned int)x1++);
          v14 = v23 >> 8;
          ++this->Result[(unsigned __int8)v23 + 512];
          v15 = (unsigned __int8)v14;
          v14 >>= 8;
          ++this->Result[v15 + 256];
          ++this->Result[(unsigned __int8)v14];
          ++this->Result[(v14 >> 8) + 768];
          v16 = dst->pPlanes;
          Width = this->SourceRect.x2;
          if ( (signed int)v16->Width < Width )
            Width = v16->Width;
        }
        while ( x1 < Width );
      }
      v18 = dst->pPlanes;
      ++y1;
      Height = this->SourceRect.y2;
      if ( (signed int)v18->Height < Height )
        Height = v18->Height;
    }
    while ( y1 < Height );
  }
}

void __fastcall Scaleform::Render::DICommand_HitTest::ExecuteSW(
        Scaleform::Render::DICommand_HitTest *this,
        Scaleform::Render::DICommandContext *context,
        Scaleform::Render::ImageData *dest,
        Scaleform::Render::ImageData **psrc)
{
  Scaleform::Render::HAL_vtbl *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // ecx
  int v12; // er15
  int v13; // er14
  int v14; // eax
  int v15; // esi
  int v16; // eax
  int v17; // ebx
  bool *Result; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  Scaleform::Render::TextureManager *v21; // rax
  Scaleform::Render::ImageData *v22; // rbx
  __int64 v23; // rax
  Scaleform::Render::Image *pObject; // rbx
  unsigned int Height; // esi
  Scaleform::Render::Image_vtbl *v26; // rax
  Scaleform::Render::Size<unsigned long> *v27; // rax
  int y; // ecx
  int v29; // ebx
  int Width; // er12
  int v31; // er14
  int v32; // ebx
  int x; // ecx
  int v34; // ebx
  int v35; // esi
  int v36; // ebx
  bool *v37; // rax
  int v38; // [rsp+20h] [rbp-49h] BYREF
  int v39; // [rsp+24h] [rbp-45h]
  unsigned int v40; // [rsp+28h] [rbp-41h]
  __int64 v41; // [rsp+30h] [rbp-39h] BYREF
  __int64 v42; // [rsp+38h] [rbp-31h]
  Scaleform::Render::ImageData *v43; // [rsp+40h] [rbp-29h]
  int v44; // [rsp+48h] [rbp-21h]
  __int128 v45; // [rsp+50h] [rbp-19h]
  char v46[8]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v47[3]; // [rsp+68h] [rbp-1h] BYREF
  int v48; // [rsp+80h] [rbp+17h]
  __int128 v49; // [rsp+88h] [rbp+1Fh]
  char v50; // [rsp+D0h] [rbp+67h] BYREF
  unsigned __int8 v51; // [rsp+D3h] [rbp+6Ah]

  this->pImage.pObject->GetSize(this->pImage.pObject, (Scaleform::Render::Size<unsigned long> *)&v38);
  v8 = context->pHAL->__vftable;
  if ( this->SecondImage.pObject )
  {
    v19 = ((__int64 (*)(void))v8->GetTextureManager)();
    v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 136i64))(v19);
    v43 = dest;
    v41 = v20;
    v42 = 0i64;
    v44 = 0;
    v45 = 0i64;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 8i64))(v20, &v41);
    v21 = context->pHAL->GetTextureManager(context->pHAL);
    v22 = *psrc;
    v23 = (__int64)v21->GetImageSwizzler(v21);
    v47[1] = 0i64;
    v47[0] = v23;
    v47[2] = (__int64)v22;
    v48 = 0;
    v49 = 0i64;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 8i64))(v23, v47);
    pObject = this->SecondImage.pObject;
    Height = pObject->GetSize(pObject, (Scaleform::Render::Size<unsigned long> *)&v50)->Height;
    v26 = pObject->__vftable;
    if ( v39 < Height )
      Height = v39;
    v40 = Height;
    v27 = v26->GetSize(pObject, (Scaleform::Render::Size<unsigned long> *)v46);
    y = this->SecondPoint.y;
    v29 = this->FirstPoint.y;
    Width = v27->Width;
    if ( v38 < v27->Width )
      Width = v38;
    v31 = y - v29;
    if ( y - v29 < 0 )
      v31 = 0;
    if ( v31 < (int)(Height + y - v29) )
    {
      do
      {
        v32 = v31 + v29 - y;
        if ( v31 < 0 || v31 >= v39 || v32 < 0 || v32 >= (signed int)(*psrc)->pPlanes->Height )
          break;
        (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v41 + 16i64))(v41, &v41, (unsigned int)v31);
        (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v47[0] + 16i64))(v47[0], v47, (unsigned int)v32);
        x = this->SecondPoint.x;
        v34 = this->FirstPoint.x;
        v35 = x - v34;
        if ( x - v34 < 0 )
          v35 = 0;
        for ( ; v35 < Width + x - v34; v34 = this->FirstPoint.x )
        {
          v36 = v35 + v34 - x;
          if ( v35 < 0 || v35 >= v38 || v36 < 0 || v36 >= (signed int)(*psrc)->pPlanes->Width )
            break;
          (*(void (__fastcall **)(__int64, char *, __int64 *, _QWORD))(*(_QWORD *)v41 + 40i64))(
            v41,
            &v50,
            &v41,
            (unsigned int)v35);
          if ( v51 >= this->FirstThreshold )
          {
            (*(void (__fastcall **)(__int64, char *, __int64 *, _QWORD))(*(_QWORD *)v47[0] + 40i64))(
              v47[0],
              v46,
              v47,
              (unsigned int)v36);
            if ( (unsigned __int8)v46[3] >= this->SecondThreshold )
            {
LABEL_20:
              Result = this->Result;
              if ( Result )
                *Result = 1;
              return;
            }
          }
          x = this->SecondPoint.x;
          ++v35;
        }
        y = this->SecondPoint.y;
        ++v31;
        v29 = this->FirstPoint.y;
      }
      while ( v31 < (int)(v40 + y - v29) );
    }
  }
  else
  {
    v9 = ((__int64 (*)(void))v8->GetTextureManager)();
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 136i64))(v9);
    v43 = dest;
    v41 = v10;
    v42 = 0i64;
    v44 = 0;
    v45 = 0i64;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 8i64))(v10, &v41);
    v11 = v39;
    v12 = this->SecondArea.y2 - this->SecondArea.y1;
    v13 = this->SecondArea.x2 - this->SecondArea.x1;
    if ( v38 < v13 )
      v13 = v38;
    if ( v39 < v12 )
      v12 = v39;
    v14 = this->SecondArea.y1 - this->FirstPoint.y;
    v15 = v14;
    if ( v14 < 0 )
      v15 = 0;
    if ( v15 < v12 + v14 )
    {
      while ( v15 >= 0 && v15 < v11 )
      {
        (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v41 + 16i64))(v41, &v41, (unsigned int)v15);
        v16 = this->SecondArea.x1 - this->FirstPoint.x;
        v17 = v16;
        if ( v16 < 0 )
          v17 = 0;
        if ( v17 < v13 + v16 )
        {
          do
          {
            if ( v17 < 0 || v17 >= v38 )
              break;
            (*(void (__fastcall **)(__int64, char *, __int64 *, _QWORD))(*(_QWORD *)v41 + 40i64))(
              v41,
              &v50,
              &v41,
              (unsigned int)v17);
            if ( v51 >= this->FirstThreshold )
              goto LABEL_20;
            ++v17;
          }
          while ( v17 < v13 + this->SecondArea.x1 - this->FirstPoint.x );
        }
        if ( ++v15 >= v12 + this->SecondArea.y1 - this->FirstPoint.y )
          break;
        v11 = v39;
      }
    }
  }
  v37 = this->Result;
  if ( v37 )
    *v37 = 0;
}

void __fastcall Scaleform::Render::DICommand_Merge::ExecuteSW(
        Scaleform::Render::DICommand_Merge *this,
        Scaleform::Render::DICommandContext *context,
        Scaleform::Render::ImageData *dest,
        Scaleform::Render::ImageData **psrc)
{
  Scaleform::Render::ImageData *v4; // rbx
  Scaleform::Render::DICommand_Merge_vtbl *v9; // rax
  Scaleform::Render::TextureManager *v10; // rax
  __int64 v11; // rax
  Scaleform::Render::TextureManager *v12; // rax
  Scaleform::Render::ImageData *v13; // rbx
  __int64 v14; // rax
  int v15; // edi
  int v16; // esi
  unsigned int i; // ebx
  int v18; // ecx
  int v19; // edx
  Scaleform::Render::DrawableImage *pObject; // rax
  bool Transparent; // r11
  __m128i v22; // xmm2
  __m128i v23; // xmm2
  int *v24; // r9
  unsigned __int64 v25; // rax
  __int64 v26; // r10
  int v27; // edx
  int v28; // er8
  char v29; // cl
  int v30; // [rsp+20h] [rbp-E0h] BYREF
  char v31[4]; // [rsp+24h] [rbp-DCh] BYREF
  char v32[4]; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v33; // [rsp+2Ch] [rbp-D4h]
  int v34[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v35[3]; // [rsp+38h] [rbp-C8h] BYREF
  int v36; // [rsp+50h] [rbp-B0h]
  __int128 v37; // [rsp+58h] [rbp-A8h]
  __int64 v38[3]; // [rsp+68h] [rbp-98h] BYREF
  int v39; // [rsp+80h] [rbp-80h]
  __int128 v40; // [rsp+88h] [rbp-78h]
  Scaleform::Render::ImagePlane pplane; // [rsp+98h] [rbp-68h] BYREF
  Scaleform::Render::ImagePlane v42; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v43; // [rsp+D8h] [rbp-28h] BYREF
  __m128i v44; // [rsp+E8h] [rbp-18h] BYREF
  __m128i v45; // [rsp+F8h] [rbp-8h] BYREF
  __m128i v46; // [rsp+108h] [rbp+8h] BYREF

  v4 = *psrc;
  memset(&pplane, 0, sizeof(pplane));
  memset(&v42, 0, sizeof(v42));
  Scaleform::Render::ImageData::GetPlane(dest, 0, &pplane);
  Scaleform::Render::ImageData::GetPlane(v4, 0, &v42);
  v9 = this->__vftable;
  v43 = 0i64;
  if ( v9->CalculateDestClippedRect(this, (Scaleform::Render::Rect<long> *)&v43, (Scaleform::Render::Point<long> *)v34) )
  {
    v10 = context->pHAL->GetTextureManager(context->pHAL);
    v11 = (__int64)v10->GetImageSwizzler(v10);
    v35[1] = 0i64;
    v35[0] = v11;
    v35[2] = (__int64)dest;
    v36 = 0;
    v37 = 0i64;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 8i64))(v11, v35);
    v12 = context->pHAL->GetTextureManager(context->pHAL);
    v13 = *psrc;
    v14 = (__int64)v12->GetImageSwizzler(v12);
    v38[1] = 0i64;
    v38[0] = v14;
    v38[2] = (__int64)v13;
    v39 = 0;
    v40 = 0i64;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 8i64))(v14, v38);
    v15 = DWORD1(v43);
    if ( SDWORD1(v43) < SHIDWORD(v43) )
    {
      v16 = _isa_available;
      do
      {
        (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v35[0] + 16i64))(v35[0], v35, (unsigned int)v15);
        (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v38[0] + 16i64))(
          v38[0],
          v38,
          (unsigned int)(v15 - v34[1]));
        for ( i = v43; (int)i < SDWORD2(v43); ++i )
        {
          (*(void (__fastcall **)(__int64, char *, __int64 *, _QWORD))(*(_QWORD *)v35[0] + 40i64))(v35[0], v32, v35, i);
          (*(void (__fastcall **)(__int64, char *, __int64 *, _QWORD))(*(_QWORD *)v38[0] + 40i64))(
            v38[0],
            v31,
            v38,
            i - v34[0]);
          v18 = (unsigned __int8)v31[3];
          v19 = (unsigned __int8)v32[3];
          v44 = *(__m128i *)&this->RedMultiplier;
          v46.m128i_i32[0] = (unsigned __int8)v31[2];
          v46.m128i_i32[1] = (unsigned __int8)v31[1];
          v46.m128i_i32[2] = (unsigned __int8)v31[0];
          v45.m128i_i32[0] = (unsigned __int8)v32[2];
          v45.m128i_i32[1] = (unsigned __int8)v32[1];
          v45.m128i_i32[2] = (unsigned __int8)v32[0];
          pObject = this->pImage.pObject;
          if ( !this->pSource.pObject->Transparent )
            v18 = 255;
          v46.m128i_i32[3] = v18;
          Transparent = pObject->Transparent;
          if ( !Transparent )
            v19 = 255;
          v45.m128i_i32[3] = v19;
          if ( v16 < 2 )
          {
            v24 = &v30;
            v25 = 0i64;
            v26 = 4i64;
            do
            {
              v27 = v44.m128i_i32[v25 / 2];
              v24 = (int *)((char *)v24 + 1);
              v28 = v45.m128i_i32[v25 / 2];
              v25 += 2i64;
              *((_BYTE *)v24 - 1) = (unsigned __int16)(v27 * v45.m128i_i16[v25 + 6] + (256 - v27) * v28) >> 8;
              --v26;
            }
            while ( v26 );
          }
          else
          {
            v22 = _mm_loadu_si128(&v44);
            v23 = _mm_and_si128(
                    _mm_shuffle_epi32(
                      _mm_shufflehi_epi16(
                        _mm_shufflelo_epi16(
                          _mm_srli_epi32(
                            _mm_add_epi32(
                              _mm_mullo_epi32(
                                _mm_sub_epi32(_mm_load_si128((const __m128i *)&_xmm), v22),
                                _mm_loadu_si128(&v45)),
                              _mm_mullo_epi32(_mm_loadu_si128(&v46), v22)),
                            8u),
                          216),
                        216),
                      216),
                    (__m128i)_xmm);
            v30 = _mm_cvtsi128_si32(_mm_packus_epi16(v23, v23));
          }
          v29 = HIBYTE(v30);
          BYTE2(v33) = v30;
          if ( !Transparent )
            v29 = -1;
          BYTE1(v33) = BYTE1(v30);
          HIBYTE(v33) = v29;
          LOBYTE(v33) = BYTE2(v30);
          HIBYTE(v30) = v29;
          (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v35[0] + 24i64))(v35[0], v35, i, v33);
        }
        ++v15;
      }
      while ( v15 < SHIDWORD(v43) );
    }
  }
}

void __fastcall Scaleform::Render::DICommand_Noise::ExecuteSW(
        Scaleform::Render::DICommand_Noise *this,
        Scaleform::Render::DICommandContext *context,
        Scaleform::Render::ImageData *dest,
        Scaleform::Render::ImageData **__formal)
{
  Scaleform::Render::TextureManager *v7; // rax
  __int64 v8; // rax
  unsigned int v9; // er14
  signed int v10; // ebx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edi
  float v14; // xmm6_4
  float v15; // xmm1_4
  int v16; // ecx
  unsigned int v17; // [rsp+20h] [rbp-79h]
  unsigned int v18; // [rsp+28h] [rbp-71h] BYREF
  unsigned int v19; // [rsp+2Ch] [rbp-6Dh]
  __int64 v20[3]; // [rsp+30h] [rbp-69h] BYREF
  int v21; // [rsp+48h] [rbp-51h]
  __int128 v22; // [rsp+50h] [rbp-49h]
  Scaleform::Alg::Random::Generator v23; // [rsp+60h] [rbp-39h] BYREF

  Scaleform::Alg::Random::Generator::Generator(&v23);
  Scaleform::Alg::Random::Generator::SeedRandom(&v23, this->RandomSeed);
  v7 = context->pHAL->GetTextureManager(context->pHAL);
  v8 = (__int64)v7->GetImageSwizzler(v7);
  v20[2] = (__int64)dest;
  v20[0] = v8;
  v20[1] = 0i64;
  v21 = 0;
  v22 = 0i64;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 8i64))(v8, v20);
  this->pImage.pObject->GetSize(this->pImage.pObject, (Scaleform::Render::Size<unsigned long> *)&v18);
  v9 = 0;
  v10 = this->High - this->Low;
  v11 = v18;
  if ( v18 )
  {
    v12 = v19;
    do
    {
      v13 = 0;
      if ( v12 )
      {
        do
        {
          (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v20[0] + 16i64))(v20[0], v20, v13);
          v17 = 0;
          if ( this->GrayScale )
          {
            v14 = (float)((float)(int)this->Low
                        + (float)(Scaleform::Alg::Random::Generator::GetUnitFloat(&v23) * (float)v10))
                / 255.0;
            if ( (this->ChannelMask & 8) != 0 )
              v15 = (float)((float)(int)this->Low
                          + (float)(Scaleform::Alg::Random::Generator::GetUnitFloat(&v23) * (float)v10))
                  / 255.0;
            else
              v15 = *(float *)&FLOAT_1_0;
            v16 = (int)(float)(v15 * 255.0);
            BYTE2(v17) = (int)(float)(v14 * 255.0);
            BYTE1(v17) = BYTE2(v17);
            LOBYTE(v17) = BYTE2(v17);
          }
          else
          {
            if ( (this->ChannelMask & 1) != 0 )
              BYTE2(v17) = (int)(float)((float)(int)this->Low
                                      + (float)(Scaleform::Alg::Random::Generator::GetUnitFloat(&v23) * (float)v10));
            if ( (this->ChannelMask & 2) != 0 )
              BYTE1(v17) = (int)(float)((float)(int)this->Low
                                      + (float)(Scaleform::Alg::Random::Generator::GetUnitFloat(&v23) * (float)v10));
            if ( (this->ChannelMask & 4) != 0 )
              LOBYTE(v17) = (int)(float)((float)(int)this->Low
                                       + (float)(Scaleform::Alg::Random::Generator::GetUnitFloat(&v23) * (float)v10));
            if ( (this->ChannelMask & 8) != 0 )
              v16 = (int)(float)((float)(int)this->Low
                               + (float)(Scaleform::Alg::Random::Generator::GetUnitFloat(&v23) * (float)v10));
            else
              LOBYTE(v16) = -1;
          }
          if ( !this->pImage.pObject->Transparent )
            LOBYTE(v16) = -1;
          HIBYTE(v17) = v16;
          (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v20[0] + 24i64))(v20[0], v20, v9, v17);
          v12 = v19;
          ++v13;
        }
        while ( v13 < v19 );
        v11 = v18;
      }
      ++v9;
    }
    while ( v9 < v11 );
  }
}

void __fastcall Scaleform::Render::DICommand_PaletteMap::ExecuteSW(
        Scaleform::Render::DICommand_PaletteMap *this,
        Scaleform::Render::DICommandContext *context,
        Scaleform::Render::ImageData *dest,
        Scaleform::Render::ImageData **psrc)
{
  Scaleform::Render::ImageData *v4; // rbx
  Scaleform::Render::DICommand_PaletteMap_vtbl *v9; // rax
  Scaleform::Render::TextureManager *v10; // rax
  __int64 v11; // rax
  Scaleform::Render::TextureManager *v12; // rax
  Scaleform::Render::ImageData *v13; // rbx
  __int64 v14; // rax
  int i; // er15
  int j; // er14
  char *v17; // r10
  unsigned __int8 v18; // r9
  unsigned int v19; // er11
  unsigned int ChannelMask; // esi
  int v21; // eax
  __int64 v22; // r9
  __int64 v23; // rbx
  int *v24; // r8
  __int64 v25; // r9
  unsigned __int8 v26; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int8 v27; // [rsp+21h] [rbp-DFh]
  unsigned __int8 v28; // [rsp+22h] [rbp-DEh]
  unsigned __int8 v29; // [rsp+23h] [rbp-DDh]
  char v30[4]; // [rsp+24h] [rbp-DCh] BYREF
  int v31[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v32[3]; // [rsp+30h] [rbp-D0h] BYREF
  int v33; // [rsp+48h] [rbp-B8h]
  __int128 v34; // [rsp+50h] [rbp-B0h]
  __int64 v35[3]; // [rsp+60h] [rbp-A0h] BYREF
  int v36; // [rsp+78h] [rbp-88h]
  __int128 v37; // [rsp+80h] [rbp-80h]
  Scaleform::Render::ImagePlane pplane; // [rsp+90h] [rbp-70h] BYREF
  Scaleform::Render::ImagePlane v39; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v40; // [rsp+D0h] [rbp-30h] BYREF
  int v41[4]; // [rsp+E0h] [rbp-20h] BYREF

  v4 = *psrc;
  memset(&pplane, 0, sizeof(pplane));
  memset(&v39, 0, sizeof(v39));
  Scaleform::Render::ImageData::GetPlane(dest, 0, &pplane);
  Scaleform::Render::ImageData::GetPlane(v4, 0, &v39);
  v9 = this->__vftable;
  v40 = 0i64;
  if ( v9->CalculateDestClippedRect(this, (Scaleform::Render::Rect<long> *)&v40, (Scaleform::Render::Point<long> *)v31) )
  {
    v10 = context->pHAL->GetTextureManager(context->pHAL);
    v11 = (__int64)v10->GetImageSwizzler(v10);
    v35[1] = 0i64;
    v35[0] = v11;
    v35[2] = (__int64)dest;
    v36 = 0;
    v37 = 0i64;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 8i64))(v11, v35);
    v12 = context->pHAL->GetTextureManager(context->pHAL);
    v13 = *psrc;
    v14 = (__int64)v12->GetImageSwizzler(v12);
    v32[1] = 0i64;
    v32[0] = v14;
    v32[2] = (__int64)v13;
    v33 = 0;
    v34 = 0i64;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 8i64))(v14, v32);
    for ( i = DWORD1(v40); i < SHIDWORD(v40); ++i )
    {
      (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v35[0] + 16i64))(v35[0], v35, (unsigned int)i);
      (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v32[0] + 16i64))(
        v32[0],
        v32,
        (unsigned int)(i - v31[1]));
      for ( j = v40; j < SDWORD2(v40); ++j )
      {
        (*(void (__fastcall **)(__int64, unsigned __int8 *, __int64 *, _QWORD))(*(_QWORD *)v32[0] + 40i64))(
          v32[0],
          &v26,
          v32,
          (unsigned int)(j - v31[0]));
        v17 = v30;
        v18 = v29;
        v19 = 0;
        ChannelMask = this->ChannelMask;
        if ( !this->pSource.pObject->Transparent )
          v18 = -1;
        v41[3] = v18 << 24;
        v41[0] = v28 << 16;
        v41[1] = v27 << 8;
        v21 = 1;
        v29 = v18;
        v30[2] = v26;
        v30[3] = v18;
        v22 = 0i64;
        v41[2] = v26;
        v23 = 4i64;
        v30[0] = v28;
        v24 = v41;
        v30[1] = v27;
        do
        {
          if ( (ChannelMask & v21) != 0 )
            *v24 = this->Channels[v22 + (unsigned __int8)*v17];
          v19 += *v24;
          ++v17;
          ++v24;
          v21 = __ROL4__(v21, 1);
          v22 += 256i64;
          --v23;
        }
        while ( v23 );
        v25 = v19 | 0xFF000000;
        if ( this->pImage.pObject->Transparent )
          v25 = v19;
        (*(void (__fastcall **)(__int64, __int64 *, _QWORD, __int64))(*(_QWORD *)v35[0] + 24i64))(
          v35[0],
          v35,
          (unsigned int)j,
          v25);
      }
    }
  }
}

void __fastcall Scaleform::Render::DICommand_PerlinNoise::ExecuteSW(
        Scaleform::Render::DICommand_PerlinNoise *this,
        Scaleform::Render::DICommandContext *context,
        Scaleform::Render::ImageData *dest,
        Scaleform::Render::ImageData **__formal)
{
  unsigned int ChannelMask; // edi
  Scaleform::Render::TextureManager *v7; // rax
  __int64 v8; // rax
  unsigned int v9; // er15
  float v10; // xmm6_4
  unsigned int v11; // ebx
  int v12; // er14
  unsigned int v13; // edx
  unsigned int v14; // esi
  float v15; // xmm7_4
  unsigned int v16; // edi
  float v17; // xmm8_4
  float v18; // xmm9_4
  float v19; // xmm6_4
  unsigned int NumOctaves; // er12
  float v21; // xmm10_4
  unsigned int OffsetCount; // er15
  int v23; // eax
  float *Offsets; // rbx
  float v25; // xmm11_4
  float v26; // xmm1_4
  float v27; // xmm2_4
  float v28; // xmm0_4
  float v29; // xmm6_4
  int v30; // eax
  float v31; // xmm6_4
  int v32; // eax
  int v33; // [rsp+20h] [rbp-E0h]
  char v34; // [rsp+28h] [rbp-D8h]
  unsigned int v35; // [rsp+30h] [rbp-D0h]
  unsigned int v36; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v37; // [rsp+3Ch] [rbp-C4h]
  unsigned int v38; // [rsp+40h] [rbp-C0h]
  __int64 v39[3]; // [rsp+48h] [rbp-B8h] BYREF
  int v40; // [rsp+60h] [rbp-A0h]
  __int128 v41; // [rsp+68h] [rbp-98h]
  Scaleform::Render::PerlinGenerator v42; // [rsp+78h] [rbp-88h] BYREF
  bool Transparent; // [rsp+170h] [rbp+70h]
  unsigned int v44; // [rsp+178h] [rbp+78h]
  unsigned int v45; // [rsp+180h] [rbp+80h]

  ChannelMask = this->ChannelMask;
  v45 = ChannelMask;
  if ( this->GrayScale )
  {
    ChannelMask = ChannelMask & 0xFFFFFFF8 | 1;
    v45 = ChannelMask;
  }
  v7 = context->pHAL->GetTextureManager(context->pHAL);
  v8 = (__int64)v7->GetImageSwizzler(v7);
  v39[2] = (__int64)dest;
  v39[0] = v8;
  v39[1] = 0i64;
  v40 = 0;
  v41 = 0i64;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 8i64))(v8, v39);
  this->pImage.pObject->GetSize(this->pImage.pObject, (Scaleform::Render::Size<unsigned long> *)&v36);
  v9 = 0;
  v33 = 0;
  if ( !v37 )
    return;
  v10 = FLOAT_2_0;
  do
  {
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v39[0] + 16i64))(v39[0], v39, v9);
    v11 = 0;
    v35 = 0;
    if ( !v36 )
      goto LABEL_32;
    do
    {
      v44 = -16777216;
      v12 = 1;
      Transparent = this->pImage.pObject->Transparent;
      v34 = -1;
      v13 = Transparent + 3;
      v38 = v13;
      v14 = 0;
      do
      {
        if ( (v12 & ChannelMask) != 0 )
        {
          v15 = v10 / this->FrequencyX;
          v16 = 0;
          v17 = v10 / this->FrequencyY;
          v18 = *(float *)&FLOAT_1_0;
          v19 = 0.0;
          NumOctaves = this->NumOctaves;
          v21 = 0.0;
          v42 = (Scaleform::Render::PerlinGenerator)Scaleform::Render::PerlinGenerator::NoisePrimeFactors[(-3 * ((_BYTE)v14 + LOBYTE(this->RandomSeed))) & 7];
          if ( NumOctaves )
          {
            OffsetCount = this->OffsetCount;
            v23 = v11;
            Offsets = this->Offsets;
            v25 = (float)v23;
            do
            {
              v26 = v25 * v15;
              v27 = (float)v33 * v17;
              if ( v16 < OffsetCount )
              {
                v26 = v26 + *Offsets;
                v27 = v27 + Offsets[1];
              }
              ++v16;
              Offsets += 2;
              v21 = v21 + v18;
              v15 = v15 + v15;
              v17 = v17 + v17;
              v28 = (float)((float)(Scaleform::Render::PerlinGenerator::InterpolatedNoise(&v42, v26, v27) + 1.0) * 0.5)
                  * v18;
              v18 = v18 * 0.5;
              v19 = v19 + v28;
            }
            while ( v16 < NumOctaves );
            v13 = v38;
            v11 = v35;
          }
          v29 = v19 / v21;
          if ( this->GrayScale && v14 != 3 )
          {
            ChannelMask = v45;
            v30 = (int)(float)(v29 * 255.0);
            BYTE2(v44) = v30;
            LOBYTE(v44) = v30;
            goto LABEL_24;
          }
          ChannelMask = v45;
          v31 = v29 * 255.0;
          if ( v14 == 1 )
          {
            v30 = (int)v31;
LABEL_24:
            BYTE1(v44) = v30;
LABEL_25:
            v10 = FLOAT_2_0;
            goto LABEL_26;
          }
          if ( v14 == 2 )
          {
            LOBYTE(v44) = (int)v31;
            goto LABEL_25;
          }
          v32 = (int)v31;
          v10 = FLOAT_2_0;
          if ( v14 == 3 )
          {
            v34 = v32;
            goto LABEL_27;
          }
          BYTE2(v44) = v32;
        }
LABEL_26:
        LOBYTE(v32) = v34;
LABEL_27:
        ++v14;
        v12 = __ROL4__(v12, 1);
      }
      while ( v14 < v13 );
      if ( !Transparent )
        LOBYTE(v32) = -1;
      HIBYTE(v44) = v32;
      (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v39[0] + 24i64))(v39[0], v39, v11++, v44);
      v35 = v11;
    }
    while ( v11 < v36 );
    v9 = v33;
LABEL_32:
    v33 = ++v9;
  }
  while ( v9 < v37 );
}

void __fastcall Scaleform::Render::DICommand_PixelDissolve::ExecuteSW(
        Scaleform::Render::DICommand_PixelDissolve *this,
        Scaleform::Render::DICommandContext *context,
        Scaleform::Render::ImageData *dest,
        Scaleform::Render::ImageData **psrc)
{
  Scaleform::Render::TextureManager *v8; // rax
  __int64 v9; // rax
  unsigned int v10; // er12
  int y1; // eax
  int v12; // er15
  int y2; // edx
  int x2; // er8
  int v15; // ebx
  int x1; // ecx
  unsigned int v17; // ebx
  int v18; // ecx
  unsigned int v19; // er15
  int RandomSeed; // edi
  const unsigned int *v21; // r13
  unsigned int *Result; // rax
  Scaleform::Render::TextureManager *v23; // rax
  Scaleform::Render::ImageData *v24; // rbx
  __int64 v25; // rax
  int v26; // ebx
  int v27; // er15
  int v28; // er8
  Scaleform::Render::ImagePlane *pPlanes; // rcx
  signed int Width; // er11
  signed int Height; // er10
  int v32; // er9
  int v33; // eax
  int v34; // edx
  int v35; // ecx
  int v36; // eax
  int v37; // edx
  int v38; // er8
  int v39; // ecx
  unsigned int v40; // er15
  int v41; // esi
  const unsigned int *v42; // r13
  unsigned int v43; // edi
  unsigned int *v44; // rax
  __int64 v45[3]; // [rsp+20h] [rbp-60h] BYREF
  int v46; // [rsp+38h] [rbp-48h]
  __int128 v47; // [rsp+40h] [rbp-40h]
  __int64 v48[3]; // [rsp+50h] [rbp-30h] BYREF
  int v49; // [rsp+68h] [rbp-18h]
  __int128 v50; // [rsp+70h] [rbp-10h]
  unsigned int v51; // [rsp+C0h] [rbp+40h] BYREF
  int v52; // [rsp+C8h] [rbp+48h]
  int v53; // [rsp+D0h] [rbp+50h] BYREF
  int v54; // [rsp+D4h] [rbp+54h]

  v8 = context->pHAL->GetTextureManager(context->pHAL);
  v9 = (__int64)v8->GetImageSwizzler(v8);
  v10 = 0;
  v45[2] = (__int64)dest;
  v45[0] = v9;
  v45[1] = 0i64;
  v46 = 0;
  v47 = 0i64;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 8i64))(v9, v45);
  this->pImage.pObject->GetSize(this->pImage.pObject, (Scaleform::Render::Size<unsigned long> *)&v53);
  if ( this->pImage.pObject == this->pSource.pObject )
  {
    y1 = this->SourceRect.y1;
    v12 = v54;
    if ( v54 >= y1 )
    {
      y2 = this->SourceRect.y2;
      if ( y2 >= 0 )
      {
        x2 = this->SourceRect.x2;
        if ( x2 >= 0 )
        {
          v15 = v53;
          x1 = this->SourceRect.x1;
          if ( v53 >= x1 )
          {
            if ( x1 < 0 )
              x1 = 0;
            if ( v53 > x2 )
              v15 = this->SourceRect.x2;
            if ( y1 < 0 )
              y1 = 0;
            if ( v54 > y2 )
              v12 = this->SourceRect.y2;
            v17 = v15 - x1;
            v18 = 0;
            v19 = v17 * (v12 - y1);
            if ( v19 > 1 )
            {
              do
                ++v18;
              while ( v19 > 1 << v18 );
            }
            RandomSeed = this->RandomSeed;
            if ( this->NumPixels )
            {
              v21 = &Scaleform::Render::LFSR::FeedbackPoly[v18];
              do
              {
                do
                  RandomSeed = (RandomSeed >> 1) ^ *v21 & -(RandomSeed & 1);
                while ( RandomSeed > v19 );
                (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v45[0] + 16i64))(
                  v45[0],
                  v45,
                  (RandomSeed - 1) / v17);
                (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v45[0] + 24i64))(
                  v45[0],
                  v45,
                  (RandomSeed - 1) % v17,
                  this->Fill.Raw);
                ++v10;
              }
              while ( v10 < this->NumPixels );
            }
            Result = this->Result;
            if ( Result )
              *Result = RandomSeed;
            return;
          }
        }
      }
    }
LABEL_48:
    this->Result = 0i64;
    return;
  }
  v23 = context->pHAL->GetTextureManager(context->pHAL);
  v24 = *psrc;
  v25 = (__int64)v23->GetImageSwizzler(v23);
  v48[1] = 0i64;
  v48[0] = v25;
  v48[2] = (__int64)v24;
  v49 = 0;
  v50 = 0i64;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 8i64))(v25, v48);
  v26 = v53 - this->DestPoint.x - this->DestPoint.x;
  if ( v26 <= 0 )
    goto LABEL_48;
  v27 = v54 - this->DestPoint.y - this->DestPoint.y;
  if ( v27 <= 0 )
    goto LABEL_48;
  v28 = this->SourceRect.y2;
  pPlanes = (*psrc)->pPlanes;
  Width = pPlanes->Width;
  Height = pPlanes->Height;
  if ( v28 < 0 )
    goto LABEL_48;
  v32 = this->SourceRect.y1;
  if ( Height < v32 )
    goto LABEL_48;
  v33 = this->SourceRect.x1;
  if ( Width < v33 )
    goto LABEL_48;
  v34 = this->SourceRect.x2;
  if ( v34 < 0 )
    goto LABEL_48;
  v35 = 0;
  if ( v33 > 0 )
    v35 = this->SourceRect.x1;
  v36 = 0;
  if ( v34 > Width )
    v34 = Width;
  if ( v32 > 0 )
    v36 = this->SourceRect.y1;
  if ( v28 > Height )
    v28 = Height;
  v37 = v34 - v35;
  v38 = v28 - v36;
  v39 = 0;
  if ( v37 < v26 )
    v26 = v37;
  v52 = v26;
  if ( v38 < v27 )
    v27 = v38;
  v40 = v26 * v27;
  if ( v40 > 1 )
  {
    do
      ++v39;
    while ( v40 > 1 << v39 );
  }
  v41 = this->RandomSeed;
  if ( this->NumPixels )
  {
    v42 = &Scaleform::Render::LFSR::FeedbackPoly[v39];
    do
    {
      do
        v41 = (v41 >> 1) ^ *v42 & -(v41 & 1);
      while ( v41 > v40 );
      v43 = (v41 - 1) % (unsigned int)v26;
      (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v48[0] + 16i64))(
        v48[0],
        v48,
        (v41 - 1) / (unsigned int)v26 + this->SourceRect.y1);
      (*(void (__fastcall **)(__int64, unsigned int *, __int64 *, _QWORD))(*(_QWORD *)v48[0] + 40i64))(
        v48[0],
        &v51,
        v48,
        v43 + this->SourceRect.x1);
      (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v45[0] + 16i64))(
        v45[0],
        v45,
        (v41 - 1) / (unsigned int)v26 + this->DestPoint.y);
      (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v45[0] + 24i64))(
        v45[0],
        v45,
        v43 + this->DestPoint.x,
        v51);
      v26 = v52;
      ++v10;
    }
    while ( v10 < this->NumPixels );
  }
  v44 = this->Result;
  if ( v44 )
    *v44 = v41;
}

void __fastcall Scaleform::Render::DICommand_Scroll::ExecuteSW(
        Scaleform::Render::DICommand_Scroll *this,
        Scaleform::Render::DICommandContext *context,
        Scaleform::Render::ImageData *dest,
        Scaleform::Render::ImageData **psrc)
{
  Scaleform::Render::ImageData *v4; // rbx
  int v5; // er14
  Scaleform::Render::ImagePlane *pPlanes; // rax
  int v8; // er13
  int v9; // edi
  int Height; // er8
  int y1; // edx
  int Width; // ecx
  int y2; // er9
  int x2; // er10
  int x1; // eax
  int v16; // er10
  int v17; // er12
  int v18; // er9
  int v19; // er15
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  int v26; // er15
  int v27; // ebx
  unsigned int v28; // er12
  unsigned int v29; // edi
  int v30; // [rsp+20h] [rbp-E0h]
  Scaleform::Render::ImageData *v31; // [rsp+28h] [rbp-D8h] BYREF
  Scaleform::Render::DICommandContext *v32; // [rsp+30h] [rbp-D0h]
  int v33; // [rsp+38h] [rbp-C8h] BYREF
  int v34; // [rsp+3Ch] [rbp-C4h]
  Scaleform::Render::ImageData **v35; // [rsp+40h] [rbp-C0h]
  __int64 v36[3]; // [rsp+48h] [rbp-B8h] BYREF
  int v37; // [rsp+60h] [rbp-A0h]
  __int128 v38; // [rsp+68h] [rbp-98h]
  __int64 v39[3]; // [rsp+78h] [rbp-88h] BYREF
  int v40; // [rsp+90h] [rbp-70h]
  __int128 v41; // [rsp+98h] [rbp-68h]
  Scaleform::Render::ImagePlane pplane; // [rsp+A8h] [rbp-58h] BYREF
  Scaleform::Render::ImagePlane v43; // [rsp+C8h] [rbp-38h] BYREF

  v4 = *psrc;
  v5 = 0;
  v32 = context;
  v35 = psrc;
  v31 = dest;
  memset(&pplane, 0, sizeof(pplane));
  memset(&v43, 0, sizeof(v43));
  Scaleform::Render::ImageData::GetPlane(dest, 0, &pplane);
  Scaleform::Render::ImageData::GetPlane(v4, 0, &v43);
  this->pImage.pObject->GetSize(this->pImage.pObject, (Scaleform::Render::Size<unsigned long> *)&v33);
  pPlanes = v4->pPlanes;
  v8 = this->DestPoint.x - this->SourceRect.x1;
  v9 = this->DestPoint.y - this->SourceRect.y1;
  Height = pPlanes->Height;
  y1 = this->SourceRect.y1;
  Width = pPlanes->Width;
  if ( Height >= y1 )
  {
    y2 = this->SourceRect.y2;
    if ( y2 >= 0 )
    {
      x2 = this->SourceRect.x2;
      if ( x2 >= 0 )
      {
        x1 = this->SourceRect.x1;
        if ( Width >= x1 )
        {
          if ( x1 < 0 )
            x1 = 0;
          if ( Width > x2 )
            Width = this->SourceRect.x2;
          if ( y1 < 0 )
            y1 = 0;
          v16 = x1 + v8;
          v17 = Width + v8;
          if ( Height > y2 )
            Height = this->SourceRect.y2;
          v18 = y1 + v9;
          v19 = Height + v9;
          if ( Height + v9 >= 0 && v34 >= v18 && v33 >= v16 && v17 >= 0 )
          {
            if ( v16 > 0 )
              v5 = x1 + v8;
            if ( v17 > v33 )
              v17 = v33;
            v20 = 0;
            if ( v18 > 0 )
              v20 = y1 + v9;
            v30 = v20;
            if ( v19 > v34 )
              v19 = v34;
            v21 = (__int64)v32->pHAL->GetTextureManager(v32->pHAL);
            v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 136i64))(v21);
            v39[1] = 0i64;
            v39[2] = (__int64)v31;
            v40 = 0;
            v39[0] = v22;
            v41 = 0i64;
            (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 8i64))(v22, v39);
            v23 = (__int64)v32->pHAL->GetTextureManager(v32->pHAL);
            v24 = (__int64)*v35;
            v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 136i64))(v23);
            v36[2] = v24;
            v36[1] = 0i64;
            v37 = 0;
            v36[0] = v25;
            v38 = 0i64;
            (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 8i64))(v25, v36);
            v26 = v19 - 1;
            if ( v26 >= v30 )
            {
              v27 = v17 - 1;
              v28 = v26 - v9;
              LODWORD(v32) = v27;
              do
              {
                (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v39[0] + 16i64))(
                  v39[0],
                  v39,
                  (unsigned int)v26);
                (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v36[0] + 16i64))(v36[0], v36, v28);
                if ( v27 >= v5 )
                {
                  v29 = v27 - v8;
                  do
                  {
                    (*(void (__fastcall **)(__int64, Scaleform::Render::ImageData **, __int64 *, _QWORD))(*(_QWORD *)v36[0] + 40i64))(
                      v36[0],
                      &v31,
                      v36,
                      v29);
                    if ( !this->pSource.pObject->Transparent || !this->pImage.pObject->Transparent )
                      BYTE3(v31) = -1;
                    (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v39[0] + 24i64))(
                      v39[0],
                      v39,
                      (unsigned int)v27--,
                      (unsigned int)v31);
                    --v29;
                  }
                  while ( v27 >= v5 );
                }
                v27 = (int)v32;
                --v26;
                --v28;
              }
              while ( v26 >= v30 );
            }
          }
        }
      }
    }
  }
}

void __fastcall Scaleform::Render::DICommand_SetPixel32::ExecuteSW(
        Scaleform::Render::DICommand_SetPixel32 *this,
        Scaleform::Render::DICommandContext *context,
        Scaleform::Render::ImageData *dest,
        Scaleform::Render::ImageData **__formal)
{
  Scaleform::Render::TextureManager *v6; // rax
  __int64 v7; // rax
  __int64 v8[3]; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+38h] [rbp-20h]
  __int128 v10; // [rsp+40h] [rbp-18h]
  char v11; // [rsp+68h] [rbp+10h] BYREF

  v6 = context->pHAL->GetTextureManager(context->pHAL);
  v7 = (__int64)v6->GetImageSwizzler(v6);
  v8[2] = (__int64)dest;
  v8[1] = 0i64;
  v9 = 0;
  v8[0] = v7;
  v10 = 0i64;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 8i64))(v7, v8);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v8[0] + 16i64))(v8[0], v8, this->Y);
  if ( !this->OverwriteAlpha )
    (*(void (__fastcall **)(__int64, char *, __int64 *, _QWORD))(*(_QWORD *)v8[0] + 40i64))(v8[0], &v11, v8, this->X);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v8[0] + 24i64))(v8[0], v8, this->X);
}

void __fastcall Scaleform::Render::DICommand_SetPixels::ExecuteSW(
        Scaleform::Render::DICommand_SetPixels *this,
        Scaleform::Render::DICommandContext *context,
        Scaleform::Render::ImageData *dest,
        Scaleform::Render::ImageData **__formal)
{
  Scaleform::Render::TextureManager *v6; // rax
  __int64 v7; // rax
  unsigned int v8; // esi
  int y1; // ebp
  int x1; // edi
  unsigned int v11; // eax
  bool *Result; // rax
  bool *v13; // rax
  __int64 v14[3]; // [rsp+20h] [rbp-38h] BYREF
  int v15; // [rsp+38h] [rbp-20h]
  __int128 v16; // [rsp+40h] [rbp-18h]

  v6 = context->pHAL->GetTextureManager(context->pHAL);
  v7 = (__int64)v6->GetImageSwizzler(v6);
  v8 = 0;
  v14[2] = (__int64)dest;
  v14[0] = v7;
  v14[1] = 0i64;
  v15 = 0;
  v16 = 0i64;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 8i64))(v7, v14);
  y1 = this->DestRect.y1;
  if ( y1 >= this->DestRect.y2 )
  {
LABEL_6:
    Result = this->Result;
    if ( Result )
      *Result = 1;
  }
  else
  {
    while ( 1 )
    {
      (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v14[0] + 16i64))(v14[0], v14, (unsigned int)y1);
      x1 = this->DestRect.x1;
      if ( x1 < this->DestRect.x2 )
        break;
LABEL_5:
      if ( ++y1 >= this->DestRect.y2 )
        goto LABEL_6;
    }
    while ( v8 < this->Provider->GetLength(this->Provider) )
    {
      v11 = this->Provider->ReadNextPixel(this->Provider);
      (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v14[0] + 24i64))(
        v14[0],
        v14,
        (unsigned int)x1++,
        v11);
      ++v8;
      if ( x1 >= this->DestRect.x2 )
        goto LABEL_5;
    }
    v13 = this->Result;
    if ( v13 )
      *v13 = 0;
  }
}

void __fastcall Scaleform::Render::DICommand_Threshold::ExecuteSW(
        Scaleform::Render::DICommand_Threshold *this,
        Scaleform::Render::DICommandContext *context,
        Scaleform::Render::ImageData *dest,
        Scaleform::Render::ImageData **psrc)
{
  Scaleform::Render::ImageData *v4; // rdi
  Scaleform::Render::DICommand_Threshold_vtbl *v9; // rax
  Scaleform::Render::TextureManager *v10; // rax
  __int64 v11; // rax
  Scaleform::Render::TextureManager *v12; // rax
  Scaleform::Render::ImageData *v13; // rdi
  __int64 v14; // rax
  int i; // esi
  int j; // edi
  unsigned int Mask; // edx
  bool v18; // r9
  unsigned int v19; // er8
  unsigned int v20; // edx
  char v21; // cl
  unsigned int ThresholdColor; // edx
  __int64 v23; // r9
  unsigned int v24; // [rsp+20h] [rbp-A9h] BYREF
  int v25[2]; // [rsp+28h] [rbp-A1h] BYREF
  __int64 v26[3]; // [rsp+30h] [rbp-99h] BYREF
  int v27; // [rsp+48h] [rbp-81h]
  __int128 v28; // [rsp+50h] [rbp-79h]
  __int64 v29[3]; // [rsp+60h] [rbp-69h] BYREF
  int v30; // [rsp+78h] [rbp-51h]
  __int128 v31; // [rsp+80h] [rbp-49h]
  Scaleform::Render::ImagePlane pplane; // [rsp+90h] [rbp-39h] BYREF
  Scaleform::Render::ImagePlane v33; // [rsp+B0h] [rbp-19h] BYREF
  __int128 v34; // [rsp+D0h] [rbp+7h] BYREF

  v4 = *psrc;
  memset(&pplane, 0, sizeof(pplane));
  memset(&v33, 0, sizeof(v33));
  Scaleform::Render::ImageData::GetPlane(dest, 0, &pplane);
  Scaleform::Render::ImageData::GetPlane(v4, 0, &v33);
  v9 = this->__vftable;
  v34 = 0i64;
  if ( v9->CalculateDestClippedRect(this, (Scaleform::Render::Rect<long> *)&v34, (Scaleform::Render::Point<long> *)v25) )
  {
    v10 = context->pHAL->GetTextureManager(context->pHAL);
    v11 = (__int64)v10->GetImageSwizzler(v10);
    v29[1] = 0i64;
    v29[0] = v11;
    v29[2] = (__int64)dest;
    v30 = 0;
    v31 = 0i64;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 8i64))(v11, v29);
    v12 = context->pHAL->GetTextureManager(context->pHAL);
    v13 = *psrc;
    v14 = (__int64)v12->GetImageSwizzler(v12);
    v26[1] = 0i64;
    v26[0] = v14;
    v26[2] = (__int64)v13;
    v27 = 0;
    v28 = 0i64;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 8i64))(v14, v26);
    for ( i = DWORD1(v34); i < SHIDWORD(v34); ++i )
    {
      (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v29[0] + 16i64))(v29[0], v29, (unsigned int)i);
      (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v26[0] + 16i64))(
        v26[0],
        v26,
        (unsigned int)(i - v25[1]));
      for ( j = v34; j < SDWORD2(v34); ++j )
      {
        (*(void (__fastcall **)(__int64, unsigned int *, __int64 *, _QWORD))(*(_QWORD *)v26[0] + 40i64))(
          v26[0],
          &v24,
          v26,
          (unsigned int)(j - v25[0]));
        Mask = this->Mask;
        v18 = 0;
        v19 = Mask & this->Threshold;
        v20 = v24 & Mask;
        switch ( this->Operation )
        {
          case Operator_LT:
            v18 = v20 < v19;
            break;
          case Operator_LE:
            v18 = v20 <= v19;
            break;
          case Operator_GT:
            v18 = v20 > v19;
            break;
          case Operator_GE:
            v18 = v20 >= v19;
            break;
          case Operator_EQ:
            v18 = v20 == v19;
            break;
          case Operator_NE:
            v18 = v20 != v19;
            break;
          default:
            break;
        }
        v21 = HIBYTE(v24);
        if ( !this->pSource.pObject->Transparent )
          v21 = -1;
        HIBYTE(v24) = v21;
        if ( v18 )
          ThresholdColor = this->ThresholdColor;
        else
          ThresholdColor = v24;
        v23 = ThresholdColor | 0xFF000000;
        if ( this->pImage.pObject->Transparent )
          v23 = ThresholdColor;
        (*(void (__fastcall **)(__int64, __int64 *, _QWORD, __int64))(*(_QWORD *)v29[0] + 24i64))(
          v29[0],
          v29,
          (unsigned int)j,
          v23);
      }
    }
  }
}

float __fastcall Scaleform::Render::PerlinGenerator::InterpolatedNoise(
        Scaleform::Render::PerlinGenerator *this,
        float x,
        float y)
{
  float v4; // xmm11_4
  float v5; // xmm10_4
  float v6; // xmm0_4
  float v7; // xmm7_4
  float v8; // xmm6_4

  v4 = (float)(1.0 - cosf((float)(x - (float)(int)x) * 3.1415927)) * 0.5;
  v5 = (float)(1.0 - cosf((float)(y - (float)(int)y) * 3.1415927)) * 0.5;
  v6 = Scaleform::Render::PerlinGenerator::SmoothNoise(this, (int)x, (int)y);
  v7 = (float)((float)(v6 * (float)(1.0 - v4))
             + (float)(Scaleform::Render::PerlinGenerator::SmoothNoise(this, (int)x + 1, (int)y) * v4))
     * (float)(1.0 - v5);
  v8 = Scaleform::Render::PerlinGenerator::SmoothNoise(this, (int)x + 1, (int)y + 1) * v4;
  return v7
       + (float)((float)(v8
                       + (float)(Scaleform::Render::PerlinGenerator::SmoothNoise(this, (int)x, (int)y + 1)
                               * (float)(1.0 - v4)))
               * v5);
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::ImageFileHandler *,Scaleform::AllocatorGH<Scaleform::Render::ImageFileHandler *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *Data; // rdx
  unsigned __int64 v5; // rdi
  Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *v6; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v5 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v6 = (Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                                            Scaleform::Memory::pGlobalHeap,
                                                                            Data,
                                                                            8 * v5);
        this->Policy.Capacity = v5;
        this->Data = v6;
        return;
      }
      v7 = 2;
      this->Data = (Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                                                  Scaleform::Memory::pGlobalHeap,
                                                                                  8 * v5,
                                                                                  &v7);
    }
    else
    {
      v5 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        this->Data = 0i64;
        this->Policy.Capacity = 0i64;
        return;
      }
    }
    this->Policy.Capacity = v5;
  }
}

float __fastcall Scaleform::Render::PerlinGenerator::SmoothNoise(
        Scaleform::Render::PerlinGenerator *this,
        int x,
        int y)
{
  unsigned int v3; // er11
  unsigned int v4; // ebx
  unsigned int v5; // er9
  unsigned int v6; // er15
  unsigned int v7; // er8
  unsigned int v8; // er11
  unsigned int v9; // ebx
  unsigned int v10; // er13
  int v11; // esi
  unsigned int v12; // er9
  int v13; // edi
  int v14; // er14
  int v15; // edx
  int v16; // ecx
  int v17; // er11

  v3 = this->PrimeSet.primes[0] * (y - 1);
  v4 = this->PrimeSet.primes[0] * (y + 1);
  v5 = y * this->PrimeSet.primes[0];
  v6 = this->PrimeSet.primes[1];
  v7 = this->PrimeSet.primes[2];
  v8 = x + v3;
  v9 = x + v4;
  v10 = v5 + x;
  v11 = ((v8 - 1) << 13) ^ (v8 - 1);
  v12 = this->PrimeSet.primes[3];
  v13 = ((v8 + 1) << 13) ^ (v8 + 1);
  v14 = ((v9 + 1) << 13) ^ (v9 + 1);
  v15 = ((v10 - 1) << 13) ^ (v10 - 1);
  v16 = ((v10 + 1) << 13) ^ (v10 + 1);
  v17 = (v8 << 13) ^ v8;
  return (float)((float)((float)((float)((float)((float)(1.0
                                                       - (float)((float)((v12 + v16 * (v7 + v16 * v16 * v6)) & 0x7FFFFFFF)
                                                               * 9.3132257e-10))
                                               + (float)(1.0
                                                       - (float)((float)((v12 + v15 * (v7 + v15 * v15 * v6)) & 0x7FFFFFFF)
                                                               * 9.3132257e-10)))
                                       + (float)(1.0
                                               - (float)((float)((v12 + v17 * (v7 + v17 * v17 * v6)) & 0x7FFFFFFF)
                                                       * 9.3132257e-10)))
                               + (float)(1.0
                                       - (float)((float)((v12
                                                        + ((v9 << 13) ^ v9)
                                                        * (v7 + ((v9 << 13) ^ v9) * ((v9 << 13) ^ v9) * v6)) & 0x7FFFFFFF)
                                               * 9.3132257e-10)))
                       * 0.125)
               + (float)((float)((float)((float)((float)(1.0
                                                       - (float)((float)((v12 + v13 * (v7 + v13 * v13 * v6)) & 0x7FFFFFFF)
                                                               * 9.3132257e-10))
                                               + (float)(1.0
                                                       - (float)((float)((v12 + v11 * (v7 + v11 * v11 * v6)) & 0x7FFFFFFF)
                                                               * 9.3132257e-10)))
                                       + (float)(1.0
                                               - (float)((float)((v12
                                                                + (((v9 - 1) << 13) ^ (v9 - 1))
                                                                * (v7
                                                                 + (((v9 - 1) << 13) ^ (v9 - 1))
                                                                 * (((v9 - 1) << 13) ^ (v9 - 1))
                                                                 * v6)) & 0x7FFFFFFF)
                                                       * 9.3132257e-10)))
                               + (float)(1.0
                                       - (float)((float)((v12 + v14 * (v7 + v14 * v14 * v6)) & 0x7FFFFFFF)
                                               * 9.3132257e-10)))
                       * 0.0625))
       + (float)((float)(1.0
                       - (float)((float)((v12
                                        + ((v10 << 13) ^ v10) * (v7 + ((v10 << 13) ^ v10) * ((v10 << 13) ^ v10) * v6)) & 0x7FFFFFFF)
                               * 9.3132257e-10))
               * 0.25);
}

