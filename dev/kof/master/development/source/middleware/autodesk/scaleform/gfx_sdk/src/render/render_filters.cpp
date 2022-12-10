#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

float Scaleform::Render::ColorMatrix_Identity[20]; // 0x1409F9BD0
Scaleform::Render::BlurFilterParams::BlurFilterParams(const Scaleform::Render::BlurFilterParams & __that); // 0x140393790
bool Scaleform::Render::BlurFilterImpl::CanCacheAcrossTransform(bool deltaTrans, bool deltaRot, bool deltaScale); // 0x140393FD0
Scaleform::Render::Filter * Scaleform::Render::BlurFilter::Clone(Scaleform::MemoryHeap * heap); // 0x1403940F0
bool Scaleform::Render::BlurFilter::IsContributing(); // 0x1403946A0
Scaleform::Render::Filter * Scaleform::Render::ShadowFilter::Clone(Scaleform::MemoryHeap * heap); // 0x1403945A0
Scaleform::Render::Filter * Scaleform::Render::GlowFilter::Clone(Scaleform::MemoryHeap * heap); // 0x140394490
bool Scaleform::Render::GlowFilter::IsContributing(); // 0x140394790
Scaleform::Render::Filter * Scaleform::Render::BevelFilter::Clone(Scaleform::MemoryHeap * heap); // 0x140394080
bool Scaleform::Render::BevelFilter::IsContributing(); // 0x140394680
Scaleform::Render::GradientFilter::GradientFilter(Scaleform::Render::FilterType type, Scaleform::Render::GradientData * gradient, float dist, float angle, float blurx, float blury, unsigned long passes); // 0x140393A50
Scaleform::Render::GradientFilter::GradientFilter(Scaleform::Render::FilterType type, const Scaleform::Render::BlurFilterParams & params, float angle, float dist); // 0x140393990
Scaleform::Render::Filter * Scaleform::Render::GradientFilter::Clone(Scaleform::MemoryHeap * heap); // 0x140394530
bool Scaleform::Render::GradientFilter::IsContributing(); // 0x140394780
bool Scaleform::Render::BevelFilter::CanCacheAcrossTransform(bool deltaTrans, bool deltaRot, bool deltaScale); // 0x140394070
void Scaleform::Render::GradientFilter::GenerateGradientImage(Scaleform::Render::PrimitiveFillManager & mgr); // 0x140394610
Scaleform::Render::ColorMatrixFilter::ColorMatrixFilter(); // 0x140393820
bool Scaleform::Render::ColorMatrixFilter::IsContributing(); // 0x1403946D0
Scaleform::Render::Filter * Scaleform::Render::ColorMatrixFilter::Clone(Scaleform::MemoryHeap * heap); // 0x140394200
Scaleform::Render::Filter * Scaleform::Render::CacheAsBitmapFilter::Clone(Scaleform::MemoryHeap * pheap); // 0x140394190
Scaleform::Render::DisplacementMapFilter::DisplacementMapFilter(Scaleform::Render::Image * mapBitmap, Scaleform::Render::Point<float> mapPoint, Scaleform::Render::DrawableImage::ChannelBits compx, Scaleform::Render::DrawableImage::ChannelBits compy, Scaleform::Render::DisplacementMapFilter::DisplacementMode mode, float scaleX, float scaleY, Scaleform::Render::Color color); // 0x140393890
bool Scaleform::Render::DisplacementMapFilter::IsContributing(); // 0x140394700
Scaleform::Render::Filter * Scaleform::Render::DisplacementMapFilter::Clone(Scaleform::MemoryHeap * heap); // 0x1403942D0
Scaleform::Render::FilterSet::FilterSet(Scaleform::Render::Filter * filter); // 0x140393940
Scaleform::Render::FilterSet::~FilterSet(); // 0x140393C50
unsigned long Scaleform::Render::FilterSet::GetFilterCount(); // 0x140394670
const Scaleform::Render::Filter * Scaleform::Render::FilterSet::GetFilter(unsigned long long index); // 0x140394660
void Scaleform::Render::FilterSet::AddFilter(Scaleform::Render::Filter * filter); // 0x140393F10
bool Scaleform::Render::FilterSet::GetCacheAsBitmap(); // 0x140394650
void Scaleform::Render::FilterSet::SetCacheAsBitmap(bool enable); // 0x140394810
Scaleform::Render::FilterSet * Scaleform::Render::FilterSet::Clone(bool deepCopy, Scaleform::MemoryHeap * heap); // 0x140394380
bool Scaleform::Render::FilterSet::IsContributing(); // 0x140394710
bool Scaleform::Render::FilterSet::CanCacheAcrossTransform(bool deltaTrans, bool deltaRot, bool deltaScale); // 0x140393FE0//decompilation failure at 1409F9BD0!
void __fastcall Scaleform::Render::BevelFilter::BevelFilter(
        Scaleform::Render::BevelFilter *this,
        const Scaleform::Render::BlurFilterParams *params,
        float angle,
        float dist)
{
  float v5; // xmm6_4
  float v6; // xmm0_4

  this->__vftable = (Scaleform::Render::BevelFilter_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::Render::BevelFilter_vtbl *)&Scaleform::Render::BlurFilterImpl::`vftable';
  this->RefCount = 1;
  this->Type = Filter_Bevel;
  this->Frozen = 0;
  Scaleform::Render::BlurFilterParams::BlurFilterParams(&this->Params, params);
  this->__vftable = (Scaleform::Render::BevelFilter_vtbl *)&Scaleform::Render::BevelFilter::`vftable';
  this->Angle = angle;
  this->Distance = dist * 20.0;
  v5 = cosf(angle);
  v6 = sinf(angle);
  this->Params.Offset.x = v5 * (float)(dist * 20.0);
  this->Params.Offset.y = v6 * (float)(dist * 20.0);
}

void __fastcall Scaleform::Render::BlurFilterParams::BlurFilterParams(
        Scaleform::Render::BlurFilterParams *this,
        const Scaleform::Render::BlurFilterParams *__that)
{
  Scaleform::Render::Color *Colors; // r8
  float x; // eax
  float Strength; // eax
  __int64 v7; // rdx
  Scaleform::Render::Color *v8; // rcx
  signed __int64 v9; // r8
  Scaleform::RefCountVImpl *pObject; // rcx

  this->Mode = __that->Mode;
  this->Passes = __that->Passes;
  this->BlurX = __that->BlurX;
  Colors = this->Colors;
  this->BlurY = __that->BlurY;
  x = __that->Offset.x;
  this->Offset.y = __that->Offset.y;
  this->Offset.x = x;
  Strength = __that->Strength;
  v7 = 2i64;
  this->Strength = Strength;
  v8 = __that->Colors;
  v9 = (char *)Colors - (char *)__that->Colors;
  do
  {
    *(Scaleform::Render::Color *)((char *)v8 + v9) = *v8;
    ++v8;
    --v7;
  }
  while ( v7 );
  pObject = (Scaleform::RefCountVImpl *)__that->Gradient.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  this->Gradient.pObject = __that->Gradient.pObject;
}

void __fastcall Scaleform::Render::ColorMatrixFilter::ColorMatrixFilter(Scaleform::Render::ColorMatrixFilter *this)
{
  this->Type = Filter_ColorMatrix;
  this->__vftable = (Scaleform::Render::ColorMatrixFilter_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::Render::ColorMatrixFilter_vtbl *)&Scaleform::Render::ColorMatrixFilter::`vftable';
  this->RefCount = 1;
  this->Frozen = 0;
  *(_OWORD *)this->MatrixData = *(_OWORD *)Scaleform::Render::ColorMatrix_Identity;
  *(_OWORD *)&this->MatrixData[4] = *(_OWORD *)&Scaleform::Render::ColorMatrix_Identity[4];
  *(_OWORD *)&this->MatrixData[8] = *(_OWORD *)&Scaleform::Render::ColorMatrix_Identity[8];
  *(_OWORD *)&this->MatrixData[12] = *(_OWORD *)&Scaleform::Render::ColorMatrix_Identity[12];
  *(_OWORD *)&this->MatrixData[16] = *(_OWORD *)&Scaleform::Render::ColorMatrix_Identity[16];
}

void __fastcall Scaleform::Render::DisplacementMapFilter::DisplacementMapFilter(
        Scaleform::Render::DisplacementMapFilter *this,
        Scaleform::Render::Image *mapBitmap,
        Scaleform::Render::Point<float> mapPoint,
        Scaleform::Render::DrawableImage::ChannelBits compx,
        Scaleform::Render::DrawableImage::ChannelBits compy,
        Scaleform::Render::DisplacementMapFilter::DisplacementMode mode,
        float scaleX,
        float scaleY,
        unsigned int *color)
{
  float v13; // xmm0_4

  this->Type = Filter_DisplacementMap;
  this->__vftable = (Scaleform::Render::DisplacementMapFilter_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::Render::DisplacementMapFilter_vtbl *)&Scaleform::Render::DisplacementMapFilter::`vftable';
  this->RefCount = 1;
  this->Frozen = 0;
  if ( mapBitmap )
    mapBitmap->AddRef(mapBitmap);
  v13 = *(float *)(*(_QWORD *)&mapPoint + 4i64);
  this->MapPoint.x = **(float **)&mapPoint;
  this->MapPoint.y = v13;
  this->DisplacementMap.pObject = mapBitmap;
  this->ComponentY = compy;
  this->Mode = mode;
  this->ComponentX = compx;
  this->ScaleX = scaleX;
  this->ScaleY = scaleY;
  this->ColorValue.Raw = *color;
}

void __fastcall Scaleform::Render::FilterSet::FilterSet(
        Scaleform::Render::FilterSet *this,
        Scaleform::Render::Filter *filter)
{
  this->__vftable = (Scaleform::Render::FilterSet_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::Render::FilterSet_vtbl *)&Scaleform::Render::FilterSet::`vftable';
  this->RefCount = 1;
  this->Filters.Data.Data = 0i64;
  this->Filters.Data.Size = 0i64;
  this->Filters.Data.Policy.Capacity = 0i64;
  *(_WORD *)&this->Frozen = 0;
  this->pCacheAsBitmapFilter.pObject = 0i64;
  if ( filter )
    Scaleform::Render::FilterSet::AddFilter(this, filter);
}

void __fastcall Scaleform::Render::GradientFilter::GradientFilter(
        Scaleform::Render::GradientFilter *this,
        Scaleform::Render::FilterType type,
        const Scaleform::Render::BlurFilterParams *params,
        float angle,
        float dist)
{
  float v6; // xmm6_4
  float v7; // xmm0_4

  this->Type = type;
  this->__vftable = (Scaleform::Render::GradientFilter_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::Render::GradientFilter_vtbl *)&Scaleform::Render::BlurFilterImpl::`vftable';
  this->RefCount = 1;
  this->Frozen = 0;
  Scaleform::Render::BlurFilterParams::BlurFilterParams(&this->Params, params);
  this->__vftable = (Scaleform::Render::GradientFilter_vtbl *)&Scaleform::Render::GradientFilter::`vftable';
  this->GradientImage.pObject = 0i64;
  this->Angle = angle;
  this->Distance = dist * 20.0;
  v6 = cosf(angle);
  v7 = sinf(angle);
  this->Params.Offset.x = v6 * (float)(dist * 20.0);
  this->Params.Offset.y = v7 * (float)(dist * 20.0);
}

void __fastcall Scaleform::Render::GradientFilter::GradientFilter(
        Scaleform::Render::GradientFilter *this,
        Scaleform::Render::FilterType type,
        Scaleform::Render::GradientData *gradient,
        float dist,
        float angle,
        float blurx,
        float blury,
        unsigned int passes)
{
  float v10; // xmm7_4
  float v11; // xmm0_4
  Scaleform::RefCountVImpl *pObject; // rcx

  this->__vftable = (Scaleform::Render::GradientFilter_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->Type = type;
  this->Frozen = 0;
  this->Params.Mode = 0;
  this->Params.Passes = 1;
  this->Params.BlurX = 100.0;
  *(_QWORD *)&this->Params.BlurY = 1120403456i64;
  this->Params.Offset.y = 0.0;
  this->Params.Strength = 1.0;
  this->Params.Gradient.pObject = 0i64;
  this->Params.Colors[0].Channels.Blue = 0;
  *(_DWORD *)&this->Params.Colors[0].Channels.Green = 16711680;
  *(_WORD *)&this->Params.Colors[1].Channels.Green = 0;
  this->Params.Colors[1].Channels.Alpha = 0;
  this->Params.Mode &= 0xFFFFFFF8;
  this->Params.Mode |= type;
  this->__vftable = (Scaleform::Render::GradientFilter_vtbl *)&Scaleform::Render::GradientFilter::`vftable';
  this->GradientImage.pObject = 0i64;
  this->Params.BlurX = blurx * 20.0;
  this->Params.Passes = passes;
  this->Params.BlurY = blury * 20.0;
  this->Angle = angle;
  this->Distance = dist * 20.0;
  v10 = cosf(angle);
  v11 = sinf(angle);
  this->Params.Offset.x = v10 * (float)(dist * 20.0);
  this->Params.Offset.y = v11 * (float)(dist * 20.0);
  this->Params.Strength = 1.0;
  if ( gradient )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)gradient);
  pObject = (Scaleform::RefCountVImpl *)this->Params.Gradient.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->Params.Gradient.pObject = gradient;
}

void __fastcall Scaleform::Render::ShadowFilter::ShadowFilter(
        Scaleform::Render::ShadowFilter *this,
        const Scaleform::Render::BlurFilterParams *params,
        float angle,
        float dist)
{
  float v5; // xmm6_4
  float v6; // xmm0_4

  this->__vftable = (Scaleform::Render::ShadowFilter_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::Render::ShadowFilter_vtbl *)&Scaleform::Render::BlurFilterImpl::`vftable';
  this->RefCount = 1;
  this->Type = Filter_Shadow;
  this->Frozen = 0;
  Scaleform::Render::BlurFilterParams::BlurFilterParams(&this->Params, params);
  this->__vftable = (Scaleform::Render::ShadowFilter_vtbl *)&Scaleform::Render::ShadowFilter::`vftable';
  this->Angle = angle;
  this->Distance = dist * 20.0;
  v5 = cosf(angle);
  v6 = sinf(angle);
  this->Params.Offset.x = v5 * (float)(dist * 20.0);
  this->Params.Offset.y = v6 * (float)(dist * 20.0);
}

void __fastcall Scaleform::Render::FilterSet::~FilterSet(Scaleform::Render::FilterSet *this)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  unsigned __int64 Size; // rdi
  Scaleform::RefCountVImpl **i; // rbx

  this->__vftable = (Scaleform::Render::FilterSet_vtbl *)&Scaleform::Render::FilterSet::`vftable';
  pObject = (Scaleform::RefCountVImpl *)this->pCacheAsBitmapFilter.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  Size = this->Filters.Data.Size;
  for ( i = (Scaleform::RefCountVImpl **)&this->Filters.Data.Data[Size - 1]; Size; --Size )
  {
    if ( *i )
      Scaleform::RefCountImpl::Release(*i);
    --i;
  }
  if ( this->Filters.Data.Data )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::Render::FilterSet::AddFilter(
        Scaleform::Render::FilterSet *this,
        Scaleform::Render::Filter *filter)
{
  Scaleform::RefCountVImpl **Data; // rbx
  Scaleform::Ptr<Scaleform::Render::Filter> *v5; // rbx

  if ( this->Filters.Data.Size == 1
    && (Data = (Scaleform::RefCountVImpl **)this->Filters.Data.Data, LODWORD((*Data)[1].__vftable) == 11) )
  {
    if ( filter )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)filter);
    if ( *Data )
      Scaleform::RefCountImpl::Release(*Data);
    *Data = (Scaleform::RefCountVImpl *)filter;
  }
  else
  {
    if ( filter )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)filter);
    Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::Filter>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Filter>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
      &this->Filters.Data,
      &this->Filters,
      this->Filters.Data.Size + 1);
    v5 = &this->Filters.Data.Data[this->Filters.Data.Size - 1];
    if ( v5 )
    {
      if ( filter )
        Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)filter);
      v5->pObject = filter;
    }
    if ( filter )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)filter);
  }
}

bool __fastcall Scaleform::Render::ShadowFilter::CanCacheAcrossTransform(
        Scaleform::Render::ShadowFilter *this,
        bool deltaTrans,
        bool deltaRot,
        bool deltaScale)
{
  return !deltaRot && !deltaScale;
}

bool __fastcall Scaleform::Render::BlurFilterImpl::CanCacheAcrossTransform(
        Scaleform::Render::DisplacementMapFilter *this,
        bool __formal,
        bool a3,
        bool deltaScale)
{
  return !deltaScale;
}

char __fastcall Scaleform::Render::FilterSet::CanCacheAcrossTransform(
        Scaleform::Render::FilterSet *this,
        bool deltaTrans,
        bool deltaRot,
        bool deltaScale)
{
  unsigned int v4; // ebx
  __int64 v9; // r10
  Scaleform::Render::Filter *pObject; // rcx

  v4 = 0;
  if ( !this->Filters.Data.Size )
    return 1;
  v9 = 0i64;
  while ( 1 )
  {
    pObject = this->Filters.Data.Data[v9].pObject;
    if ( pObject )
    {
      if ( !pObject->CanCacheAcrossTransform(pObject, deltaTrans, deltaRot, deltaScale) )
        break;
    }
    v9 = ++v4;
    if ( v4 >= this->Filters.Data.Size )
      return 1;
  }
  return 0;
}

void __fastcall Scaleform::Render::BevelFilter::Clone(
        Scaleform::Render::BevelFilter *this,
        Scaleform::MemoryHeap *heap)
{
  Scaleform::MemoryHeap *v2; // r9
  Scaleform::Render::BevelFilter *v4; // rax

  v2 = heap;
  if ( !heap )
    v2 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
  v4 = (Scaleform::Render::BevelFilter *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))v2->Alloc)(
                                           v2,
                                           80i64);
  if ( v4 )
    Scaleform::Render::BevelFilter::BevelFilter(v4, &this->Params, this->Angle, this->Distance * 0.050000001);
}

Scaleform::Render::Filter *__fastcall Scaleform::Render::BlurFilter::Clone(
        Scaleform::Render::BlurFilter *this,
        Scaleform::MemoryHeap *heap)
{
  Scaleform::MemoryHeap *v2; // r9
  Scaleform::Render::Filter *result; // rax
  Scaleform::Render::Filter *v5; // rbx

  v2 = heap;
  if ( !heap )
    v2 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
  result = (Scaleform::Render::Filter *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))v2->Alloc)(v2, 80i64);
  v5 = result;
  if ( result )
  {
    result->Type = Filter_Blur;
    result->__vftable = (Scaleform::Render::Filter_vtbl *)&Scaleform::RefCountImplCore::`vftable';
    result->RefCount = 1;
    result->__vftable = (Scaleform::Render::Filter_vtbl *)&Scaleform::Render::BlurFilterImpl::`vftable';
    result->Frozen = 0;
    Scaleform::Render::BlurFilterParams::BlurFilterParams(
      (Scaleform::Render::BlurFilterParams *)&result[1],
      &this->Params);
    v5[3].__vftable = 0i64;
    v5->__vftable = (Scaleform::Render::Filter_vtbl *)&Scaleform::Render::BlurFilter::`vftable';
    return v5;
  }
  return result;
}

Scaleform::Render::Filter *__fastcall Scaleform::Render::CacheAsBitmapFilter::Clone(
        Scaleform::Render::CacheAsBitmapFilter *this,
        Scaleform::MemoryHeap *pheap)
{
  Scaleform::MemoryHeap *v2; // r9
  Scaleform::Render::Filter *result; // rax

  v2 = pheap;
  if ( !pheap )
    v2 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
  result = (Scaleform::Render::Filter *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))v2->Alloc)(v2, 24i64);
  if ( result )
  {
    result->Type = Filter_CacheAsBitmap;
    result->__vftable = (Scaleform::Render::Filter_vtbl *)&Scaleform::RefCountImplCore::`vftable';
    result->__vftable = (Scaleform::Render::Filter_vtbl *)&Scaleform::Render::CacheAsBitmapFilter::`vftable';
    result->RefCount = 1;
    result->Frozen = 0;
  }
  return result;
}

Scaleform::Render::Filter *__fastcall Scaleform::Render::ColorMatrixFilter::Clone(
        Scaleform::Render::ColorMatrixFilter *this,
        Scaleform::MemoryHeap *heap)
{
  Scaleform::MemoryHeap *v2; // r9
  Scaleform::Render::Filter *result; // rax

  v2 = heap;
  if ( !heap )
    v2 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
  result = (Scaleform::Render::Filter *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))v2->Alloc)(
                                          v2,
                                          104i64);
  if ( result )
  {
    result->Type = Filter_ColorMatrix;
    result->__vftable = (Scaleform::Render::Filter_vtbl *)&Scaleform::RefCountImplCore::`vftable';
    result->__vftable = (Scaleform::Render::Filter_vtbl *)&Scaleform::Render::ColorMatrixFilter::`vftable';
    result->RefCount = 1;
    result->Frozen = 0;
    result[1].Scaleform::RefCountBase<Scaleform::Render::Filter,2> = *(Scaleform::RefCountBase<Scaleform::Render::Filter,2> *)Scaleform::Render::ColorMatrix_Identity;
    *(_OWORD *)&result[1].Type = *(_OWORD *)&Scaleform::Render::ColorMatrix_Identity[4];
    *(_OWORD *)&result[2].RefCount = *(_OWORD *)&Scaleform::Render::ColorMatrix_Identity[8];
    result[3].Scaleform::RefCountBase<Scaleform::Render::Filter,2> = *(Scaleform::RefCountBase<Scaleform::Render::Filter,2> *)&Scaleform::Render::ColorMatrix_Identity[12];
    *(_OWORD *)&result[3].Type = *(_OWORD *)&Scaleform::Render::ColorMatrix_Identity[16];
    result[1].Scaleform::RefCountBase<Scaleform::Render::Filter,2> = *(Scaleform::RefCountBase<Scaleform::Render::Filter,2> *)this->MatrixData;
    *(_OWORD *)&result[1].Type = *(_OWORD *)&this->MatrixData[4];
    *(_OWORD *)&result[2].RefCount = *(_OWORD *)&this->MatrixData[8];
    result[3].Scaleform::RefCountBase<Scaleform::Render::Filter,2> = *(Scaleform::RefCountBase<Scaleform::Render::Filter,2> *)&this->MatrixData[12];
    *(_OWORD *)&result[3].Type = *(_OWORD *)&this->MatrixData[16];
  }
  return result;
}

void __fastcall Scaleform::Render::DisplacementMapFilter::Clone(
        Scaleform::Render::DisplacementMapFilter *this,
        Scaleform::MemoryHeap *heap)
{
  Scaleform::MemoryHeap *v2; // r9
  Scaleform::Render::DisplacementMapFilter *v4; // r10
  float y; // xmm1_4
  unsigned int Raw; // ecx
  Scaleform::Render::DrawableImage::ChannelBits ComponentX; // er9
  Scaleform::Render::Image *pObject; // rdx
  Scaleform::Render::DisplacementMapFilter::DisplacementMode v9; // eax
  Scaleform::Render::DrawableImage::ChannelBits compy; // eax
  Scaleform::Render::DisplacementMapFilter::DisplacementMode mode; // [rsp+28h] [rbp-40h]
  float scaleX; // [rsp+30h] [rbp-38h]
  float scaleY; // [rsp+38h] [rbp-30h]
  Scaleform::Render::Point<float> mapPoint; // [rsp+50h] [rbp-18h] BYREF
  Scaleform::Render::Color color; // [rsp+78h] [rbp+10h] BYREF

  v2 = heap;
  if ( !heap )
    v2 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
  v4 = (Scaleform::Render::DisplacementMapFilter *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))v2->Alloc)(
                                                     v2,
                                                     64i64);
  if ( v4 )
  {
    y = this->MapPoint.y;
    Raw = this->ColorValue.Raw;
    ComponentX = this->ComponentX;
    pObject = this->DisplacementMap.pObject;
    v9 = this->Mode;
    mapPoint.x = this->MapPoint.x;
    scaleY = this->ScaleY;
    mapPoint.y = y;
    scaleX = this->ScaleX;
    mode = v9;
    compy = this->ComponentY;
    color = (Scaleform::Render::Color)Raw;
    Scaleform::Render::DisplacementMapFilter::DisplacementMapFilter(
      v4,
      pObject,
      (Scaleform::Render::Point<float>)&mapPoint,
      ComponentX,
      compy,
      mode,
      scaleX,
      scaleY,
      &color.Raw);
  }
}

Scaleform::Render::FilterSet *__fastcall Scaleform::Render::FilterSet::Clone(
        Scaleform::Render::FilterSet *this,
        bool deepCopy,
        Scaleform::MemoryHeap *heap)
{
  Scaleform::MemoryHeap *v3; // r14
  Scaleform::Render::FilterSet *result; // rax
  Scaleform::Render::FilterSet *v7; // rsi
  unsigned __int64 v8; // rdi
  Scaleform::Render::Filter *pObject; // rcx
  Scaleform::Render::Filter *v10; // rbx

  v3 = heap;
  if ( !heap )
    v3 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
  result = (Scaleform::Render::FilterSet *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))v3->Alloc)(
                                             v3,
                                             56i64);
  v7 = result;
  if ( result )
  {
    result->__vftable = (Scaleform::Render::FilterSet_vtbl *)&Scaleform::RefCountImplCore::`vftable';
    v8 = 0i64;
    result->RefCount = 1;
    result->__vftable = (Scaleform::Render::FilterSet_vtbl *)&Scaleform::Render::FilterSet::`vftable';
    result->Filters.Data.Data = 0i64;
    result->Filters.Data.Size = 0i64;
    result->Filters.Data.Policy.Capacity = 0i64;
    *(_WORD *)&result->Frozen = 0;
    result->pCacheAsBitmapFilter.pObject = 0i64;
    for ( result->CacheAsBitmap = this->CacheAsBitmap; v8 < this->Filters.Data.Size; ++v8 )
    {
      if ( deepCopy )
      {
        pObject = this->Filters.Data.Data[v8].pObject;
        v10 = pObject->Clone(pObject, v3);
        Scaleform::Render::FilterSet::AddFilter(v7, v10);
        if ( v10 )
          Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v10);
      }
      else
      {
        Scaleform::Render::FilterSet::AddFilter(v7, this->Filters.Data.Data[v8].pObject);
      }
    }
    return v7;
  }
  return result;
}

Scaleform::Render::Filter *__fastcall Scaleform::Render::GlowFilter::Clone(
        Scaleform::Render::GlowFilter *this,
        Scaleform::MemoryHeap *heap)
{
  Scaleform::MemoryHeap *v2; // r9
  Scaleform::Render::Filter *result; // rax
  Scaleform::Render::Filter *v5; // rbx

  v2 = heap;
  if ( !heap )
    v2 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
  result = (Scaleform::Render::Filter *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))v2->Alloc)(v2, 80i64);
  v5 = result;
  if ( result )
  {
    result->Type = Filter_Glow;
    result->__vftable = (Scaleform::Render::Filter_vtbl *)&Scaleform::RefCountImplCore::`vftable';
    result->RefCount = 1;
    result->__vftable = (Scaleform::Render::Filter_vtbl *)&Scaleform::Render::BlurFilterImpl::`vftable';
    result->Frozen = 0;
    Scaleform::Render::BlurFilterParams::BlurFilterParams(
      (Scaleform::Render::BlurFilterParams *)&result[1],
      &this->Params);
    v5[3].__vftable = 0i64;
    v5->__vftable = (Scaleform::Render::Filter_vtbl *)&Scaleform::Render::GlowFilter::`vftable';
    return v5;
  }
  return result;
}

void __fastcall Scaleform::Render::GradientFilter::Clone(
        Scaleform::Render::GradientFilter *this,
        Scaleform::MemoryHeap *heap)
{
  Scaleform::MemoryHeap *v2; // r9
  Scaleform::Render::GradientFilter *v4; // rax

  v2 = heap;
  if ( !heap )
    v2 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
  v4 = (Scaleform::Render::GradientFilter *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))v2->Alloc)(
                                              v2,
                                              88i64);
  if ( v4 )
    Scaleform::Render::GradientFilter::GradientFilter(
      v4,
      this->Type,
      &this->Params,
      this->Angle,
      this->Distance * 0.050000001);
}

void __fastcall Scaleform::Render::ShadowFilter::Clone(
        Scaleform::Render::ShadowFilter *this,
        Scaleform::MemoryHeap *heap)
{
  Scaleform::MemoryHeap *v2; // r9
  Scaleform::Render::ShadowFilter *v4; // rax

  v2 = heap;
  if ( !heap )
    v2 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
  v4 = (Scaleform::Render::ShadowFilter *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))v2->Alloc)(
                                            v2,
                                            80i64);
  if ( v4 )
    Scaleform::Render::ShadowFilter::ShadowFilter(v4, &this->Params, this->Angle, this->Distance * 0.050000001);
}

void __fastcall Scaleform::Render::GradientFilter::GenerateGradientImage(
        Scaleform::Render::GradientFilter *this,
        Scaleform::Render::PrimitiveFillManager *mgr)
{
  Scaleform::Render::Image *GradientImage; // rax
  Scaleform::Render::Image *pObject; // rcx
  Scaleform::Render::Image *v5; // rdi

  GradientImage = Scaleform::Render::PrimitiveFillManager::createGradientImage(mgr, this->Params.Gradient.pObject, 0.0);
  pObject = this->GradientImage.pObject;
  v5 = GradientImage;
  if ( pObject )
    pObject->Release(pObject);
  this->GradientImage.pObject = v5;
}

_BOOL8 __fastcall Scaleform::Render::FilterSet::GetCacheAsBitmap(Scaleform::Render::FilterSet *this)
{
  return this->CacheAsBitmap;
}

Scaleform::Render::Filter *__fastcall Scaleform::Render::FilterSet::GetFilter(
        Scaleform::Render::FilterSet *this,
        unsigned __int64 index)
{
  return this->Filters.Data.Data[index].pObject;
}

__int64 __fastcall Scaleform::Render::FilterSet::GetFilterCount(Scaleform::Render::FilterSet *this)
{
  return LODWORD(this->Filters.Data.Size);
}

bool __fastcall Scaleform::Render::BevelFilter::IsContributing(Scaleform::Render::BevelFilter *this)
{
  return this->Params.Colors[0].Channels.Alpha || this->Params.Colors[1].Channels.Alpha;
}

bool __fastcall Scaleform::Render::BlurFilter::IsContributing(Scaleform::Render::BlurFilter *this)
{
  return (this->Params.BlurX > 20.0 || this->Params.BlurY > 20.0) && this->Params.Passes;
}

char __fastcall Scaleform::Render::BlendModeEffect::canCacheAcrossTransform(const bool __formal)
{
  return 1;
}

bool __fastcall Scaleform::Render::ColorMatrixFilter::IsContributing(Scaleform::Render::ColorMatrixFilter *this)
{
  return memcmp(this->MatrixData, Scaleform::Render::ColorMatrix_Identity, 0x50ui64) != 0;
}

bool __fastcall Scaleform::Render::DisplacementMapFilter::IsContributing(
        Scaleform::Render::DisplacementMapFilter *this)
{
  return this->DisplacementMap.pObject != 0i64;
}

char __fastcall Scaleform::Render::FilterSet::IsContributing(Scaleform::Render::FilterSet *this)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  Scaleform::Render::Filter *pObject; // rcx

  if ( this->CacheAsBitmap )
    return 1;
  v3 = 0;
  if ( !this->Filters.Data.Size )
    return 0;
  v4 = 0i64;
  while ( 1 )
  {
    pObject = this->Filters.Data.Data[v4].pObject;
    if ( pObject )
    {
      if ( pObject->IsContributing(pObject) )
        break;
    }
    v4 = ++v3;
    if ( v3 >= this->Filters.Data.Size )
      return 0;
  }
  return 1;
}

bool __fastcall Scaleform::Render::ShadowFilter::IsContributing(Scaleform::Render::ShadowFilter *this)
{
  return this->Params.Colors[0].Channels.Alpha != 0;
}

bool __fastcall Scaleform::Render::GradientFilter::IsContributing(Scaleform::Render::GradientFilter *this)
{
  return this->Params.Gradient.pObject != 0i64;
}

void __fastcall Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Ptr<Scaleform::Render::Filter>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Filter>,2>,Scaleform::ArrayDefaultPolicy>>::RemoveAt(
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Ptr<Scaleform::Render::Filter>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Filter>,2>,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned __int64 index)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  if ( this->Data.Size == 1 )
  {
    Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::Filter>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Filter>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
      &this->Data,
      this,
      0i64);
  }
  else
  {
    pObject = (Scaleform::RefCountVImpl *)this->Data.Data[index].pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    memmove(&this->Data.Data[index], &this->Data.Data[index + 1], 8 * (this->Data.Size - index) - 8);
    --this->Data.Size;
  }
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

void __fastcall Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::Filter>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Filter>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::Filter>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Filter>,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v7; // rsi
  Scaleform::RefCountVImpl **i; // rbx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::Render::ImageFileHandler *,Scaleform::AllocatorGH<Scaleform::Render::ImageFileHandler *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    v7 = Size - newSize;
    for ( i = (Scaleform::RefCountVImpl **)&this->Data[newSize - 1 + v7]; v7; --v7 )
    {
      if ( *i )
        Scaleform::RefCountImpl::Release(*i);
      --i;
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::ImageFileHandler *,Scaleform::AllocatorGH<Scaleform::Render::ImageFileHandler *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::Render::FilterSet::SetCacheAsBitmap(Scaleform::Render::FilterSet *this, bool enable)
{
  __int64 v3; // rax
  Scaleform::Render::CacheAsBitmapFilter *v4; // rdi
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Ptr<Scaleform::Render::Filter> *Data; // rax
  Scaleform::Array<Scaleform::Ptr<Scaleform::Render::Filter>,2,Scaleform::ArrayDefaultPolicy> *p_Filters; // rcx

  this->CacheAsBitmap = enable;
  if ( enable )
  {
    if ( !LODWORD(this->Filters.Data.Size) )
    {
      if ( !this->pCacheAsBitmapFilter.pObject )
      {
        v3 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
               Scaleform::Memory::pGlobalHeap,
               24i64);
        v4 = (Scaleform::Render::CacheAsBitmapFilter *)v3;
        if ( v3 )
        {
          *(_DWORD *)(v3 + 16) = 11;
          *(_QWORD *)v3 = &Scaleform::RefCountImplCore::`vftable';
          *(_QWORD *)v3 = &Scaleform::Render::CacheAsBitmapFilter::`vftable';
          *(_DWORD *)(v3 + 8) = 1;
          *(_BYTE *)(v3 + 20) = 0;
        }
        else
        {
          v4 = 0i64;
        }
        pObject = (Scaleform::RefCountVImpl *)this->pCacheAsBitmapFilter.pObject;
        if ( pObject )
          Scaleform::RefCountImpl::Release(pObject);
        this->pCacheAsBitmapFilter.pObject = v4;
      }
      Scaleform::Render::FilterSet::AddFilter(this, this->pCacheAsBitmapFilter.pObject);
    }
  }
  else if ( LODWORD(this->Filters.Data.Size) == 1 )
  {
    Data = this->Filters.Data.Data;
    p_Filters = &this->Filters;
    if ( Data->pObject->Type == Filter_CacheAsBitmap )
      Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Ptr<Scaleform::Render::Filter>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Filter>,2>,Scaleform::ArrayDefaultPolicy>>::RemoveAt(
        p_Filters,
        0i64);
  }
}

