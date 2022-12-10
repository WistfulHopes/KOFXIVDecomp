#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_streamcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_stream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

enum Scaleform::GFx::FlashFilterType
{
	FlashFilter_DropShadow = 0,
	FlashFilter_Blur = 1,
	FlashFilter_Glow = 2,
	FlashFilter_Bevel = 3,
	FlashFilter_GradientGlow = 4,
	FlashFilter_Convolution = 5,
	FlashFilter_ColorMatrix = 6,
	FlashFilter_GradientBevel = 7,
};
enum Scaleform::GFx::BlurFilterReaderConstants
{
	BFR_Color0 = 1,
	BFR_Color1 = 2,
	BFR_AngleDistance = 4,
	BFR_Strength = 8,
	BFR_Gradient = 16,
};
void Scaleform::GFx::ReadBlurFilter<Scaleform::GFx::StreamContext>(Scaleform::GFx::StreamContext * ps, Scaleform::Render::BlurFilterParams * params, float * angle, float * distance, unsigned long readConstants, Scaleform::Render::FilterType type, unsigned long passesMask); // 0x140427C60
void Scaleform::GFx::ReadBlurFilter<Scaleform::GFx::Stream>(Scaleform::GFx::Stream * ps, Scaleform::Render::BlurFilterParams * params, float * angle, float * distance, unsigned long readConstants, Scaleform::Render::FilterType type, unsigned long passesMask); // 0x140428180
unsigned long Scaleform::GFx::LoadFilters<Scaleform::GFx::StreamContext>(Scaleform::GFx::StreamContext * ps, Scaleform::Render::FilterSet * filters); // 0x140426CA0
unsigned long Scaleform::GFx::LoadFilters<Scaleform::GFx::Stream>(Scaleform::GFx::Stream * ps, Scaleform::Render::FilterSet * filters); // 0x1404275F0
class Scaleform::Ptr<Scaleform::Render::ColorMatrixFilter>
{
protected:
	Scaleform::Render::ColorMatrixFilter * pObject; // 0x0
public:
	Ptr<Scaleform::Render::ColorMatrixFilter>(const Scaleform::Ptr<Scaleform::Render::ColorMatrixFilter> &);
	Ptr<Scaleform::Render::ColorMatrixFilter>(Scaleform::Render::ColorMatrixFilter *);
	Ptr<Scaleform::Render::ColorMatrixFilter>(Scaleform::Ptr<Scaleform::Render::ColorMatrixFilter> &, Scaleform::PickType);
	Ptr<Scaleform::Render::ColorMatrixFilter>(Scaleform::Pickable<Scaleform::Render::ColorMatrixFilter>);
	Ptr<Scaleform::Render::ColorMatrixFilter>(Scaleform::Render::ColorMatrixFilter &);
	Ptr<Scaleform::Render::ColorMatrixFilter>();
	~Ptr<Scaleform::Render::ColorMatrixFilter>();
	bool operator==(Scaleform::Render::ColorMatrixFilter *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::ColorMatrixFilter> &);
	bool operator!=(Scaleform::Render::ColorMatrixFilter *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::ColorMatrixFilter> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::ColorMatrixFilter> &);
	Scaleform::Ptr<Scaleform::Render::ColorMatrixFilter> & operator=(Scaleform::Pickable<Scaleform::Render::ColorMatrixFilter>);
	const Scaleform::Ptr<Scaleform::Render::ColorMatrixFilter> & operator=(Scaleform::Render::ColorMatrixFilter &);
	const Scaleform::Ptr<Scaleform::Render::ColorMatrixFilter> & operator=(Scaleform::Render::ColorMatrixFilter *);
	const Scaleform::Ptr<Scaleform::Render::ColorMatrixFilter> & operator=(const Scaleform::Ptr<Scaleform::Render::ColorMatrixFilter> &);
	Scaleform::Ptr<Scaleform::Render::ColorMatrixFilter> & SetPtr(Scaleform::Pickable<Scaleform::Render::ColorMatrixFilter>);
	Scaleform::Ptr<Scaleform::Render::ColorMatrixFilter> & SetPtr(Scaleform::Render::ColorMatrixFilter &);
	Scaleform::Ptr<Scaleform::Render::ColorMatrixFilter> & SetPtr(Scaleform::Render::ColorMatrixFilter *);
	Scaleform::Ptr<Scaleform::Render::ColorMatrixFilter> & SetPtr(const Scaleform::Ptr<Scaleform::Render::ColorMatrixFilter> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::ColorMatrixFilter * & GetRawRef();
	Scaleform::Render::ColorMatrixFilter * GetPtr();
	Scaleform::Render::ColorMatrixFilter & operator*();
	Scaleform::Render::ColorMatrixFilter * operator->();
	Scaleform::Render::ColorMatrixFilter * operator class Scaleform::Render::ColorMatrixFilter *();
	Scaleform::Ptr<Scaleform::Render::ColorMatrixFilter> & Pick(Scaleform::Render::ColorMatrixFilter *);
	Scaleform::Ptr<Scaleform::Render::ColorMatrixFilter> & Pick(Scaleform::Pickable<Scaleform::Render::ColorMatrixFilter>);
	Scaleform::Ptr<Scaleform::Render::ColorMatrixFilter> & Pick(Scaleform::Ptr<Scaleform::Render::ColorMatrixFilter> &);
};__int64 __fastcall Scaleform::GFx::LoadFilters<Scaleform::GFx::StreamContext>(
        Scaleform::GFx::StreamContext *ps,
        Scaleform::Render::FilterSet *filters)
{
  const unsigned __int8 *pData; // rax
  unsigned int v5; // er12
  unsigned __int64 CurByteIndex; // rcx
  unsigned __int8 v7; // r15
  Scaleform::MemoryHeap *v8; // rsi
  unsigned __int64 v9; // rax
  int v10; // er14
  const unsigned __int8 *v11; // r9
  __int64 v12; // rbx
  int v13; // ecx
  Scaleform::Render::ShadowFilter *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  Scaleform::Render::Color *Colors; // rcx
  __int64 v18; // rdx
  float y; // xmm2_4
  Scaleform::Render::GradientData *pObject; // rax
  __int64 v21; // rax
  Scaleform::Render::Color *v22; // rcx
  __int64 v23; // rdx
  float v24; // xmm2_4
  Scaleform::Render::GradientData *v25; // rax
  Scaleform::Render::BevelFilter *v26; // rax
  __int64 v27; // rax
  Scaleform::Render::FilterType type; // ebx
  Scaleform::Render::GradientFilter *v29; // rax
  __int64 v30; // rax
  int v31; // er8
  int v32; // ecx
  Scaleform::Render::ColorMatrixFilter *v33; // rax
  Scaleform::RefCountVImpl *v34; // rax
  const unsigned __int8 *v35; // r9
  __int64 v36; // r10
  unsigned __int64 v37; // r8
  const unsigned __int8 *v38; // rcx
  int v39; // edx
  unsigned __int64 v40; // r8
  const unsigned __int8 *v41; // rcx
  int v42; // edx
  unsigned __int64 v43; // r8
  const unsigned __int8 *v44; // rcx
  int v45; // edx
  unsigned __int64 v46; // r8
  const unsigned __int8 *v47; // rcx
  int v48; // edx
  unsigned __int64 v49; // r8
  const unsigned __int8 *v50; // rcx
  int v51; // edx
  unsigned __int64 v52; // r8
  const unsigned __int8 *v53; // rcx
  int v54; // edx
  unsigned __int64 v55; // r8
  const unsigned __int8 *v56; // rcx
  int v57; // edx
  unsigned __int64 v58; // r8
  const unsigned __int8 *v59; // rcx
  int v60; // edx
  unsigned __int64 v61; // r8
  const unsigned __int8 *v62; // rcx
  int v63; // edx
  unsigned __int64 v64; // r8
  const unsigned __int8 *v65; // rcx
  int v66; // edx
  __int64 v67; // rax
  unsigned int CurBitIndex; // ecx
  unsigned __int64 v69; // rax
  float distance; // [rsp+44h] [rbp-35h] BYREF
  float angle; // [rsp+48h] [rbp-31h] BYREF
  Scaleform::MemoryHeap *v73; // [rsp+50h] [rbp-29h]
  Scaleform::Render::BlurFilterParams params; // [rsp+58h] [rbp-21h] BYREF

  if ( ps->CurBitIndex )
    ++ps->CurByteIndex;
  pData = ps->pData;
  ps->CurBitIndex = 0;
  v5 = 0;
  CurByteIndex = ps->CurByteIndex;
  angle = 0.0;
  distance = 0.0;
  v7 = pData[CurByteIndex];
  ps->CurByteIndex = CurByteIndex + 1;
  if ( filters )
    v8 = (Scaleform::MemoryHeap *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL)(Scaleform::Memory::pGlobalHeap);
  else
    v8 = Scaleform::Memory::pGlobalHeap;
  v73 = v8;
  while ( v7 )
  {
    --v7;
    if ( ps->CurBitIndex )
      ++ps->CurByteIndex;
    v9 = ps->CurByteIndex;
    v10 = 0;
    v11 = ps->pData;
    v12 = 0i64;
    ps->CurBitIndex = 0;
    v13 = v11[v9];
    ps->CurByteIndex = v9 + 1;
    params.Mode = 0;
    params.Passes = 1;
    params.Strength = 1.0;
    params.Gradient.pObject = 0i64;
    *(_DWORD *)&params.Colors[0].Channels.Green = 16711680;
    params.Colors[0].Channels.Blue = 0;
    *(_WORD *)&params.Colors[1].Channels.Green = 0;
    params.Colors[1].Channels.Alpha = 0;
    *(_OWORD *)&params.BlurX = _xmm;
    switch ( v13 )
    {
      case 0:
        Scaleform::GFx::ReadBlurFilter<Scaleform::GFx::StreamContext>(
          ps,
          &params,
          &angle,
          &distance,
          0xDu,
          Filter_Shadow,
          0x1Fu);
        v14 = (Scaleform::Render::ShadowFilter *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))v8->Alloc)(
                                                   v8,
                                                   80i64);
        if ( !v14 )
          goto LABEL_12;
        Scaleform::Render::ShadowFilter::ShadowFilter(v14, &params, angle, distance);
        v12 = v15;
        break;
      case 1:
        Scaleform::GFx::ReadBlurFilter<Scaleform::GFx::StreamContext>(ps, &params, 0i64, 0i64, 0, Filter_Blur, 0xF8u);
        v16 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))v8->Alloc)(v8, 80i64);
        v12 = v16;
        if ( !v16 )
          goto LABEL_12;
        *(_QWORD *)v16 = &Scaleform::RefCountImplCore::`vftable';
        *(_DWORD *)(v16 + 8) = 1;
        *(_QWORD *)v16 = &Scaleform::Render::BlurFilterImpl::`vftable';
        Colors = params.Colors;
        *(_DWORD *)(v16 + 16) = 0;
        v18 = 2i64;
        *(_BYTE *)(v16 + 20) = 0;
        *(_DWORD *)(v16 + 24) = params.Mode;
        *(_DWORD *)(v16 + 28) = params.Passes;
        *(float *)(v16 + 32) = params.BlurX;
        *(float *)(v16 + 36) = params.BlurY;
        y = params.Offset.y;
        *(float *)(v16 + 40) = params.Offset.x;
        *(float *)(v16 + 44) = y;
        *(float *)(v16 + 48) = params.Strength;
        do
        {
          *(Scaleform::Render::Color *)((char *)Colors + v16 + 24 - (_QWORD)params.Colors + 28) = *Colors;
          ++Colors;
          --v18;
        }
        while ( v18 );
        pObject = params.Gradient.pObject;
        if ( params.Gradient.pObject )
        {
          Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)params.Gradient.pObject);
          pObject = params.Gradient.pObject;
        }
        v8 = v73;
        *(_QWORD *)(v12 + 64) = pObject;
        *(_QWORD *)v12 = &Scaleform::Render::BlurFilter::`vftable';
        *(_QWORD *)(v12 + 72) = 0i64;
        break;
      case 2:
        Scaleform::GFx::ReadBlurFilter<Scaleform::GFx::StreamContext>(ps, &params, 0i64, 0i64, 9u, Filter_Glow, 0x1Fu);
        v21 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))v8->Alloc)(v8, 80i64);
        v12 = v21;
        if ( !v21 )
          goto LABEL_12;
        *(_DWORD *)(v21 + 16) = 2;
        *(_QWORD *)v21 = &Scaleform::RefCountImplCore::`vftable';
        *(_DWORD *)(v21 + 8) = 1;
        *(_QWORD *)v21 = &Scaleform::Render::BlurFilterImpl::`vftable';
        v22 = params.Colors;
        *(_BYTE *)(v21 + 20) = 0;
        v23 = 2i64;
        *(_DWORD *)(v21 + 24) = params.Mode;
        *(_DWORD *)(v21 + 28) = params.Passes;
        *(float *)(v21 + 32) = params.BlurX;
        *(float *)(v21 + 36) = params.BlurY;
        v24 = params.Offset.y;
        *(float *)(v21 + 40) = params.Offset.x;
        *(float *)(v21 + 44) = v24;
        *(float *)(v21 + 48) = params.Strength;
        do
        {
          *(Scaleform::Render::Color *)((char *)v22 + v21 + 24 - (_QWORD)params.Colors + 28) = *v22;
          ++v22;
          --v23;
        }
        while ( v23 );
        v25 = params.Gradient.pObject;
        if ( params.Gradient.pObject )
        {
          Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)params.Gradient.pObject);
          v25 = params.Gradient.pObject;
        }
        v8 = v73;
        *(_QWORD *)(v12 + 64) = v25;
        *(_QWORD *)v12 = &Scaleform::Render::GlowFilter::`vftable';
        *(_QWORD *)(v12 + 72) = 0i64;
        break;
      case 3:
        Scaleform::GFx::ReadBlurFilter<Scaleform::GFx::StreamContext>(
          ps,
          &params,
          &angle,
          &distance,
          0xFu,
          Filter_Bevel,
          0xFu);
        v26 = (Scaleform::Render::BevelFilter *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))v8->Alloc)(
                                                  v8,
                                                  80i64);
        if ( !v26 )
          goto LABEL_12;
        Scaleform::Render::BevelFilter::BevelFilter(v26, &params, angle, distance);
        v12 = v27;
        break;
      case 4:
      case 7:
        LOBYTE(v12) = v13 != 4;
        type = v12 + 4;
        Scaleform::GFx::ReadBlurFilter<Scaleform::GFx::StreamContext>(ps, &params, &angle, &distance, 0x1Cu, type, 0xFu);
        v29 = (Scaleform::Render::GradientFilter *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))v8->Alloc)(
                                                     v8,
                                                     88i64);
        if ( v29 )
        {
          Scaleform::Render::GradientFilter::GradientFilter(v29, type, &params, angle, distance);
          v12 = v30;
        }
        else
        {
LABEL_12:
          v12 = 0i64;
        }
        break;
      case 5:
        ps->CurBitIndex = 0;
        v31 = v11[v9 + 1];
        ps->CurByteIndex = v9 + 2;
        ps->CurBitIndex = 0;
        v32 = v11[v9 + 2];
        ps->CurByteIndex = v9 + 3;
        v10 = 4 * v31 * v32 + 13;
        break;
      case 6:
        v33 = (Scaleform::Render::ColorMatrixFilter *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))v8->Alloc)(
                                                        v8,
                                                        104i64);
        if ( v33 )
        {
          Scaleform::Render::ColorMatrixFilter::ColorMatrixFilter(v33);
          v12 = (__int64)v34;
          if ( v34 )
            Scaleform::Render::RenderBuffer::AddRef(v34);
        }
        else
        {
          v12 = 0i64;
        }
        v35 = &`Scaleform::GFx::LoadFilters<Scaleform::GFx::StreamContext>'::`10'::Index[1];
        v36 = 2i64;
        do
        {
          if ( ps->CurBitIndex )
            ++ps->CurByteIndex;
          v37 = ps->CurByteIndex;
          v38 = ps->pData;
          ps->CurBitIndex = 0;
          v39 = v38[v37] | ((v38[v37 + 1] | (*(unsigned __int16 *)&v38[v37 + 2] << 8)) << 8);
          ps->CurByteIndex = v37 + 4;
          *(_DWORD *)(v12 + 4i64 * *(v35 - 1) + 24) = v39;
          if ( ps->CurBitIndex )
            ++ps->CurByteIndex;
          v40 = ps->CurByteIndex;
          v41 = ps->pData;
          ps->CurBitIndex = 0;
          v42 = v41[v40] | ((v41[v40 + 1] | (*(unsigned __int16 *)&v41[v40 + 2] << 8)) << 8);
          ps->CurByteIndex = v40 + 4;
          *(_DWORD *)(v12 + 4i64 * *v35 + 24) = v42;
          if ( ps->CurBitIndex )
            ++ps->CurByteIndex;
          v43 = ps->CurByteIndex;
          v44 = ps->pData;
          ps->CurBitIndex = 0;
          v45 = v44[v43] | ((v44[v43 + 1] | (*(unsigned __int16 *)&v44[v43 + 2] << 8)) << 8);
          ps->CurByteIndex = v43 + 4;
          *(_DWORD *)(v12 + 4i64 * v35[1] + 24) = v45;
          if ( ps->CurBitIndex )
            ++ps->CurByteIndex;
          v46 = ps->CurByteIndex;
          v47 = ps->pData;
          ps->CurBitIndex = 0;
          v48 = v47[v46] | ((v47[v46 + 1] | (*(unsigned __int16 *)&v47[v46 + 2] << 8)) << 8);
          ps->CurByteIndex = v46 + 4;
          *(_DWORD *)(v12 + 4i64 * v35[2] + 24) = v48;
          if ( ps->CurBitIndex )
            ++ps->CurByteIndex;
          v49 = ps->CurByteIndex;
          v50 = ps->pData;
          ps->CurBitIndex = 0;
          v51 = v50[v49] | ((v50[v49 + 1] | (*(unsigned __int16 *)&v50[v49 + 2] << 8)) << 8);
          ps->CurByteIndex = v49 + 4;
          *(_DWORD *)(v12 + 4i64 * v35[3] + 24) = v51;
          if ( ps->CurBitIndex )
            ++ps->CurByteIndex;
          v52 = ps->CurByteIndex;
          v53 = ps->pData;
          ps->CurBitIndex = 0;
          v54 = v53[v52] | ((v53[v52 + 1] | (*(unsigned __int16 *)&v53[v52 + 2] << 8)) << 8);
          ps->CurByteIndex = v52 + 4;
          *(_DWORD *)(v12 + 4i64 * v35[4] + 24) = v54;
          if ( ps->CurBitIndex )
            ++ps->CurByteIndex;
          v55 = ps->CurByteIndex;
          v56 = ps->pData;
          ps->CurBitIndex = 0;
          v57 = v56[v55] | ((v56[v55 + 1] | (*(unsigned __int16 *)&v56[v55 + 2] << 8)) << 8);
          ps->CurByteIndex = v55 + 4;
          *(_DWORD *)(v12 + 4i64 * v35[5] + 24) = v57;
          if ( ps->CurBitIndex )
            ++ps->CurByteIndex;
          v58 = ps->CurByteIndex;
          v59 = ps->pData;
          ps->CurBitIndex = 0;
          v60 = v59[v58] | ((v59[v58 + 1] | (*(unsigned __int16 *)&v59[v58 + 2] << 8)) << 8);
          ps->CurByteIndex = v58 + 4;
          *(_DWORD *)(v12 + 4i64 * v35[6] + 24) = v60;
          if ( ps->CurBitIndex )
            ++ps->CurByteIndex;
          v61 = ps->CurByteIndex;
          v62 = ps->pData;
          ps->CurBitIndex = 0;
          v63 = v62[v61] | ((v62[v61 + 1] | (*(unsigned __int16 *)&v62[v61 + 2] << 8)) << 8);
          ps->CurByteIndex = v61 + 4;
          *(_DWORD *)(v12 + 4i64 * v35[7] + 24) = v63;
          if ( ps->CurBitIndex )
            ++ps->CurByteIndex;
          v64 = ps->CurByteIndex;
          v65 = ps->pData;
          ps->CurBitIndex = 0;
          v66 = v65[v64] | ((v65[v64 + 1] | (*(unsigned __int16 *)&v65[v64 + 2] << 8)) << 8);
          ps->CurByteIndex = v64 + 4;
          v67 = v35[8];
          v35 += 10;
          *(_DWORD *)(v12 + 4 * v67 + 24) = v66;
          --v36;
        }
        while ( v36 );
        ++v5;
        *(__m128 *)(v12 + 88) = _mm_mul_ps(*(__m128 *)(v12 + 88), (__m128)_xmm);
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v12);
        break;
      default:
        break;
    }
    if ( filters && v12 )
    {
      Scaleform::Render::FilterSet::AddFilter(filters, (Scaleform::Render::Filter *)v12);
      ++v5;
    }
    if ( v10 )
    {
      CurBitIndex = ps->CurBitIndex;
      v69 = ps->CurByteIndex;
      do
      {
        --v10;
        if ( CurBitIndex )
          ++v69;
        CurBitIndex = 0;
        ++v69;
      }
      while ( v10 );
      ps->CurBitIndex = 0;
      ps->CurByteIndex = v69;
    }
    if ( params.Gradient.pObject )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)params.Gradient.pObject);
    if ( v12 )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v12);
  }
  return v5;
}

__int64 __fastcall Scaleform::GFx::LoadFilters<Scaleform::GFx::Stream>(
        Scaleform::GFx::Stream *ps,
        Scaleform::Render::FilterSet *filters)
{
  Scaleform::Render::FilterSet *v2; // r14
  signed int v3; // eax
  __int64 Pos; // rcx
  unsigned int v6; // er13
  unsigned __int8 *pBuffer; // rax
  unsigned __int8 v8; // r12
  Scaleform::MemoryHeap *v9; // r15
  signed int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rbx
  int v13; // esi
  int v14; // ecx
  Scaleform::Render::ShadowFilter *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  Scaleform::Render::Color *Colors; // rcx
  __int64 v19; // rdx
  float y; // xmm2_4
  Scaleform::Render::GradientData *pObject; // rax
  __int64 v22; // rax
  Scaleform::Render::Color *v23; // rcx
  __int64 v24; // rdx
  float v25; // xmm2_4
  Scaleform::Render::GradientData *v26; // rax
  Scaleform::Render::BevelFilter *v27; // rax
  __int64 v28; // rax
  Scaleform::Render::FilterType type; // ebx
  Scaleform::Render::GradientFilter *v30; // rax
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  int v34; // esi
  int v35; // eax
  __int64 v36; // rdx
  int v37; // ecx
  Scaleform::Render::ColorMatrixFilter *v38; // rax
  Scaleform::RefCountVImpl *v39; // rax
  const unsigned __int8 *v40; // r14
  __int64 v41; // r15
  signed int v42; // eax
  unsigned int v43; // edx
  unsigned __int8 *v44; // r9
  int v45; // xmm0_4
  __int64 v46; // rax
  signed int v47; // eax
  float distance; // [rsp+40h] [rbp-49h] BYREF
  float angle; // [rsp+44h] [rbp-45h] BYREF
  int v51; // [rsp+48h] [rbp-41h]
  Scaleform::Render::FilterSet *v52; // [rsp+50h] [rbp-39h]
  Scaleform::MemoryHeap *i; // [rsp+58h] [rbp-31h]
  Scaleform::Render::BlurFilterParams params; // [rsp+60h] [rbp-29h] BYREF

  v2 = filters;
  v3 = ps->DataSize - ps->Pos;
  v52 = filters;
  ps->UnusedBits = 0;
  if ( v3 < 1 )
    Scaleform::GFx::Stream::PopulateBuffer1(ps);
  Pos = ps->Pos;
  v6 = 0;
  pBuffer = ps->pBuffer;
  angle = 0.0;
  distance = 0.0;
  v8 = pBuffer[Pos];
  ps->Pos = Pos + 1;
  if ( v2 )
    v9 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, v2);
  else
    v9 = Scaleform::Memory::pGlobalHeap;
  for ( i = v9; v8; v9 = i )
  {
    --v8;
    v10 = ps->DataSize - ps->Pos;
    ps->UnusedBits = 0;
    if ( v10 < 1 )
      Scaleform::GFx::Stream::PopulateBuffer1(ps);
    v11 = ps->Pos;
    v12 = 0i64;
    v13 = 0;
    v14 = ps->pBuffer[v11];
    ps->Pos = v11 + 1;
    params.Mode = 0;
    params.Passes = 1;
    params.Strength = 1.0;
    params.Gradient.pObject = 0i64;
    *(_DWORD *)&params.Colors[0].Channels.Green = 16711680;
    params.Colors[0].Channels.Blue = 0;
    *(_WORD *)&params.Colors[1].Channels.Green = 0;
    params.Colors[1].Channels.Alpha = 0;
    *(_OWORD *)&params.BlurX = _xmm;
    switch ( v14 )
    {
      case 0:
        Scaleform::GFx::ReadBlurFilter<Scaleform::GFx::Stream>(
          ps,
          &params,
          &angle,
          &distance,
          0xDu,
          Filter_Shadow,
          0x1Fu);
        v15 = (Scaleform::Render::ShadowFilter *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))v9->Alloc)(
                                                   v9,
                                                   80i64);
        if ( v15 )
        {
          Scaleform::Render::ShadowFilter::ShadowFilter(v15, &params, angle, distance);
          v12 = v16;
        }
        break;
      case 1:
        Scaleform::GFx::ReadBlurFilter<Scaleform::GFx::Stream>(ps, &params, 0i64, 0i64, 0, Filter_Blur, 0xF8u);
        v17 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))v9->Alloc)(v9, 80i64);
        v12 = v17;
        if ( !v17 )
          goto LABEL_18;
        *(_BYTE *)(v17 + 20) = 0;
        *(_QWORD *)v17 = &Scaleform::RefCountImplCore::`vftable';
        *(_DWORD *)(v17 + 8) = 1;
        *(_QWORD *)v17 = &Scaleform::Render::BlurFilterImpl::`vftable';
        Colors = params.Colors;
        *(_DWORD *)(v17 + 16) = 0;
        *(_DWORD *)(v17 + 24) = params.Mode;
        v19 = 2i64;
        *(_DWORD *)(v17 + 28) = params.Passes;
        *(float *)(v17 + 32) = params.BlurX;
        *(float *)(v17 + 36) = params.BlurY;
        y = params.Offset.y;
        *(float *)(v17 + 40) = params.Offset.x;
        *(float *)(v17 + 44) = y;
        *(float *)(v17 + 48) = params.Strength;
        do
        {
          *(Scaleform::Render::Color *)((char *)Colors + v17 + 24 - (_QWORD)params.Colors + 28) = *Colors;
          ++Colors;
          --v19;
        }
        while ( v19 );
        pObject = params.Gradient.pObject;
        if ( params.Gradient.pObject )
        {
          Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)params.Gradient.pObject);
          pObject = params.Gradient.pObject;
        }
        *(_QWORD *)(v12 + 64) = pObject;
        *(_QWORD *)v12 = &Scaleform::Render::BlurFilter::`vftable';
        *(_QWORD *)(v12 + 72) = 0i64;
        goto LABEL_42;
      case 2:
        Scaleform::GFx::ReadBlurFilter<Scaleform::GFx::Stream>(ps, &params, 0i64, 0i64, 9u, Filter_Glow, 0x1Fu);
        v22 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))v9->Alloc)(v9, 80i64);
        v12 = v22;
        if ( !v22 )
          goto LABEL_18;
        *(_DWORD *)(v22 + 16) = 2;
        *(_QWORD *)v22 = &Scaleform::RefCountImplCore::`vftable';
        *(_DWORD *)(v22 + 8) = 1;
        *(_QWORD *)v22 = &Scaleform::Render::BlurFilterImpl::`vftable';
        v23 = params.Colors;
        *(_BYTE *)(v22 + 20) = 0;
        v24 = 2i64;
        *(_DWORD *)(v22 + 24) = params.Mode;
        *(_DWORD *)(v22 + 28) = params.Passes;
        *(float *)(v22 + 32) = params.BlurX;
        *(float *)(v22 + 36) = params.BlurY;
        v25 = params.Offset.y;
        *(float *)(v22 + 40) = params.Offset.x;
        *(float *)(v22 + 44) = v25;
        *(float *)(v22 + 48) = params.Strength;
        do
        {
          *(Scaleform::Render::Color *)((char *)v23 + v22 + 24 - (_QWORD)params.Colors + 28) = *v23;
          ++v23;
          --v24;
        }
        while ( v24 );
        v26 = params.Gradient.pObject;
        if ( params.Gradient.pObject )
        {
          Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)params.Gradient.pObject);
          v26 = params.Gradient.pObject;
        }
        *(_QWORD *)(v12 + 64) = v26;
        *(_QWORD *)v12 = &Scaleform::Render::GlowFilter::`vftable';
        *(_QWORD *)(v12 + 72) = 0i64;
        goto LABEL_42;
      case 3:
        Scaleform::GFx::ReadBlurFilter<Scaleform::GFx::Stream>(ps, &params, &angle, &distance, 0xFu, Filter_Bevel, 0xFu);
        v27 = (Scaleform::Render::BevelFilter *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))v9->Alloc)(
                                                  v9,
                                                  80i64);
        if ( v27 )
        {
          Scaleform::Render::BevelFilter::BevelFilter(v27, &params, angle, distance);
          v12 = v28;
        }
        break;
      case 4:
      case 7:
        LOBYTE(v12) = v14 != 4;
        type = v12 + 4;
        Scaleform::GFx::ReadBlurFilter<Scaleform::GFx::Stream>(ps, &params, &angle, &distance, 0x1Cu, type, 0xFu);
        v30 = (Scaleform::Render::GradientFilter *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))v9->Alloc)(
                                                     v9,
                                                     88i64);
        if ( v30 )
        {
          Scaleform::Render::GradientFilter::GradientFilter(v30, type, &params, angle, distance);
          v12 = v31;
        }
        else
        {
LABEL_18:
          v12 = 0i64;
        }
        break;
      case 5:
        v32 = ps->DataSize - (v11 + 1);
        ps->UnusedBits = 0;
        if ( v32 < 1 )
          Scaleform::GFx::Stream::PopulateBuffer1(ps);
        v33 = ps->Pos;
        v34 = ps->pBuffer[v33];
        v35 = ps->DataSize - (v33 + 1);
        ps->Pos = v33 + 1;
        ps->UnusedBits = 0;
        if ( v35 < 1 )
          Scaleform::GFx::Stream::PopulateBuffer1(ps);
        v36 = ps->Pos;
        v37 = ps->pBuffer[v36];
        ps->Pos = v36 + 1;
        v13 = 4 * v34 * v37 + 13;
        break;
      case 6:
        v38 = (Scaleform::Render::ColorMatrixFilter *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))v9->Alloc)(
                                                        v9,
                                                        104i64);
        if ( v38 )
        {
          Scaleform::Render::ColorMatrixFilter::ColorMatrixFilter(v38);
          v12 = (__int64)v39;
          if ( v39 )
            Scaleform::Render::RenderBuffer::AddRef(v39);
        }
        v40 = `Scaleform::GFx::LoadFilters<Scaleform::GFx::Stream>'::`10'::Index;
        v41 = 20i64;
        do
        {
          v42 = ps->DataSize - ps->Pos;
          ps->UnusedBits = 0;
          if ( v42 < 4 )
            Scaleform::GFx::Stream::PopulateBuffer(ps, 4);
          v43 = ps->Pos;
          v44 = ps->pBuffer;
          v51 = ((v44[v43 + 1] | ((v44[v43 + 2] | (v44[v43 + 3] << 8)) << 8)) << 8) | v44[v43];
          v45 = v51;
          ps->Pos = v43 + 4;
          v46 = *v40++;
          *(_DWORD *)(v12 + 4 * v46 + 24) = v45;
          --v41;
        }
        while ( v41 );
        ++v6;
        *(__m128 *)(v12 + 88) = _mm_mul_ps(*(__m128 *)(v12 + 88), (__m128)_xmm);
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v12);
LABEL_42:
        v2 = v52;
        break;
      default:
        break;
    }
    if ( v2 && v12 )
    {
      Scaleform::Render::FilterSet::AddFilter(v2, (Scaleform::Render::Filter *)v12);
      ++v6;
    }
    for ( ; v13; ++ps->Pos )
    {
      --v13;
      v47 = ps->DataSize - ps->Pos;
      ps->UnusedBits = 0;
      if ( v47 < 1 )
        Scaleform::GFx::Stream::PopulateBuffer1(ps);
    }
    if ( params.Gradient.pObject )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)params.Gradient.pObject);
    if ( v12 )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v12);
  }
  return v6;
}

void __fastcall Scaleform::GFx::ReadBlurFilter<Scaleform::GFx::StreamContext>(
        Scaleform::GFx::StreamContext *ps,
        Scaleform::Render::BlurFilterParams *params,
        float *angle,
        float *distance,
        unsigned int readConstants,
        Scaleform::Render::FilterType type,
        unsigned int passesMask)
{
  char v10; // r15
  const unsigned __int8 *pData; // rax
  unsigned __int64 CurByteIndex; // rcx
  __int64 v14; // r14
  Scaleform::Render::GradientData *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // r11
  __int64 v19; // r10
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  const unsigned __int8 *v22; // r8
  unsigned __int64 v23; // rdx
  unsigned __int8 v24; // cl
  unsigned __int8 v25; // cl
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rcx
  const unsigned __int8 *v29; // rax
  unsigned __int8 v30; // dl
  Scaleform::RefCountVImpl *pObject; // rcx
  unsigned __int64 v32; // rcx
  const unsigned __int8 *v33; // rax
  unsigned __int8 v34; // dl
  unsigned __int64 v35; // rcx
  const unsigned __int8 *v36; // rax
  unsigned __int8 v37; // dl
  unsigned __int64 v38; // rcx
  const unsigned __int8 *v39; // rax
  unsigned __int8 v40; // dl
  unsigned __int64 v41; // rcx
  const unsigned __int8 *v42; // rax
  unsigned __int8 v43; // dl
  unsigned __int64 v44; // rcx
  const unsigned __int8 *v45; // rax
  unsigned __int8 v46; // dl
  unsigned __int64 v47; // rcx
  const unsigned __int8 *v48; // rax
  unsigned __int8 v49; // dl
  unsigned __int64 v50; // rcx
  const unsigned __int8 *v51; // rax
  unsigned __int8 v52; // dl
  unsigned __int64 v53; // rcx
  const unsigned __int8 *v54; // rax
  unsigned __int8 v55; // dl
  unsigned __int64 v56; // r8
  const unsigned __int8 *v57; // rcx
  int v58; // edx
  unsigned __int64 v59; // r8
  const unsigned __int8 *v60; // rcx
  int v61; // edx
  unsigned __int64 v62; // r8
  const unsigned __int8 *v63; // rcx
  int v64; // edx
  unsigned __int64 v65; // r8
  const unsigned __int8 *v66; // rcx
  int v67; // edx
  unsigned __int64 v68; // rdx
  const unsigned __int8 *v69; // rax
  int v70; // ecx
  int v71; // er8
  unsigned __int64 v72; // rcx
  const unsigned __int8 *v73; // rax
  unsigned int v74; // er8
  int v75; // edx
  int v76; // ecx
  int v77; // edi
  unsigned int readConstantsa; // [rsp+70h] [rbp+28h]

  v10 = readConstants;
  if ( (readConstants & 0x10) != 0 )
  {
    if ( ps->CurBitIndex )
      ++ps->CurByteIndex;
    pData = ps->pData;
    ps->CurBitIndex = 0;
    CurByteIndex = ps->CurByteIndex;
    v14 = pData[CurByteIndex];
    ps->CurByteIndex = CurByteIndex + 1;
    v15 = (Scaleform::Render::GradientData *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                               Scaleform::Memory::pGlobalHeap,
                                               48i64);
    if ( v15 )
    {
      Scaleform::Render::GradientData::GradientData(v15, GradientLinear, v14, 0);
      v17 = v16;
    }
    else
    {
      v17 = 0i64;
    }
    v18 = v14;
    if ( (_DWORD)v14 )
    {
      v19 = 0i64;
      do
      {
        v20 = *(_QWORD *)(v17 + 24);
        if ( ps->CurBitIndex )
          ++ps->CurByteIndex;
        v21 = ps->CurByteIndex;
        v22 = ps->pData;
        ps->CurBitIndex = 0;
        v23 = v21 + 1;
        v24 = v22[v21];
        ps->CurByteIndex = v21 + 1;
        ps->CurBitIndex = 0;
        LOBYTE(v21) = v22[v21 + 1];
        ps->CurByteIndex = ++v23;
        ps->CurBitIndex = 0;
        BYTE1(readConstantsa) = v21;
        LOBYTE(v21) = v22[v23];
        ps->CurByteIndex = ++v23;
        BYTE2(readConstantsa) = v24;
        LOBYTE(readConstantsa) = v21;
        ps->CurBitIndex = 0;
        v25 = v22[v23];
        ps->CurByteIndex = v23 + 1;
        HIBYTE(readConstantsa) = v25;
        *(_DWORD *)(v19 + v20 + 4) = readConstantsa;
        v19 += 8i64;
        --v14;
      }
      while ( v14 );
    }
    if ( (_DWORD)v18 )
    {
      v26 = 0i64;
      v27 = v18;
      do
      {
        if ( ps->CurBitIndex )
          ++ps->CurByteIndex;
        v28 = ps->CurByteIndex;
        v29 = ps->pData;
        ps->CurBitIndex = 0;
        v30 = v29[v28];
        ps->CurByteIndex = v28 + 1;
        *(_BYTE *)(v26 + *(_QWORD *)(v17 + 24)) = v30;
        v26 += 8i64;
        --v27;
      }
      while ( v27 );
    }
    if ( v17 )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v17);
    pObject = (Scaleform::RefCountVImpl *)params->Gradient.pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    params->Gradient.pObject = (Scaleform::Render::GradientData *)v17;
    if ( v17 )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v17);
  }
  if ( (v10 & 1) != 0 )
  {
    if ( ps->CurBitIndex )
      ++ps->CurByteIndex;
    v32 = ps->CurByteIndex;
    v33 = ps->pData;
    ps->CurBitIndex = 0;
    v34 = v33[v32];
    ps->CurByteIndex = v32 + 1;
    params->Colors[0].Channels.Red = v34;
    if ( ps->CurBitIndex )
      ++ps->CurByteIndex;
    v35 = ps->CurByteIndex;
    v36 = ps->pData;
    ps->CurBitIndex = 0;
    v37 = v36[v35];
    ps->CurByteIndex = v35 + 1;
    params->Colors[0].Channels.Green = v37;
    if ( ps->CurBitIndex )
      ++ps->CurByteIndex;
    v38 = ps->CurByteIndex;
    v39 = ps->pData;
    ps->CurBitIndex = 0;
    v40 = v39[v38];
    ps->CurByteIndex = v38 + 1;
    params->Colors[0].Channels.Blue = v40;
    params->Colors[0].Channels.Alpha = -1;
    if ( ps->CurBitIndex )
      ++ps->CurByteIndex;
    v41 = ps->CurByteIndex;
    v42 = ps->pData;
    ps->CurBitIndex = 0;
    v43 = v42[v41];
    ps->CurByteIndex = v41 + 1;
    params->Colors[0].Channels.Alpha = v43;
    if ( (v10 & 2) != 0 )
    {
      if ( ps->CurBitIndex )
        ++ps->CurByteIndex;
      v44 = ps->CurByteIndex;
      v45 = ps->pData;
      ps->CurBitIndex = 0;
      v46 = v45[v44];
      ps->CurByteIndex = v44 + 1;
      params->Colors[1].Channels.Red = v46;
      if ( ps->CurBitIndex )
        ++ps->CurByteIndex;
      v47 = ps->CurByteIndex;
      v48 = ps->pData;
      ps->CurBitIndex = 0;
      v49 = v48[v47];
      ps->CurByteIndex = v47 + 1;
      params->Colors[1].Channels.Green = v49;
      if ( ps->CurBitIndex )
        ++ps->CurByteIndex;
      v50 = ps->CurByteIndex;
      v51 = ps->pData;
      ps->CurBitIndex = 0;
      v52 = v51[v50];
      ps->CurByteIndex = v50 + 1;
      params->Colors[1].Channels.Blue = v52;
      params->Colors[1].Channels.Alpha = -1;
      if ( ps->CurBitIndex )
        ++ps->CurByteIndex;
      v53 = ps->CurByteIndex;
      v54 = ps->pData;
      ps->CurBitIndex = 0;
      v55 = v54[v53];
      ps->CurByteIndex = v53 + 1;
      params->Colors[1].Channels.Alpha = v55;
    }
  }
  if ( ps->CurBitIndex )
    ++ps->CurByteIndex;
  v56 = ps->CurByteIndex;
  v57 = ps->pData;
  ps->CurBitIndex = 0;
  v58 = v57[v56] | ((v57[v56 + 1] | (*(unsigned __int16 *)&v57[v56 + 2] << 8)) << 8);
  ps->CurByteIndex = v56 + 4;
  params->BlurX = (float)((float)v58 * 0.000015258789) * 20.0;
  if ( ps->CurBitIndex )
    ++ps->CurByteIndex;
  v59 = ps->CurByteIndex;
  v60 = ps->pData;
  ps->CurBitIndex = 0;
  v61 = v60[v59] | ((v60[v59 + 1] | (*(unsigned __int16 *)&v60[v59 + 2] << 8)) << 8);
  ps->CurByteIndex = v59 + 4;
  params->BlurY = (float)((float)v61 * 0.000015258789) * 20.0;
  if ( (v10 & 4) != 0 )
  {
    if ( ps->CurBitIndex )
      ++ps->CurByteIndex;
    v62 = ps->CurByteIndex;
    v63 = ps->pData;
    ps->CurBitIndex = 0;
    v64 = v63[v62] | ((v63[v62 + 1] | (*(unsigned __int16 *)&v63[v62 + 2] << 8)) << 8);
    ps->CurByteIndex = v62 + 4;
    *angle = (float)v64 * 0.000015258789;
    if ( ps->CurBitIndex )
      ++ps->CurByteIndex;
    v65 = ps->CurByteIndex;
    v66 = ps->pData;
    ps->CurBitIndex = 0;
    v67 = v66[v65] | ((v66[v65 + 1] | (*(unsigned __int16 *)&v66[v65 + 2] << 8)) << 8);
    ps->CurByteIndex = v65 + 4;
    *distance = (float)v67 * 0.000015258789;
  }
  if ( (v10 & 8) != 0 )
  {
    if ( ps->CurBitIndex )
      ++ps->CurByteIndex;
    v68 = ps->CurByteIndex;
    v69 = ps->pData;
    ps->CurBitIndex = 0;
    v70 = v69[v68 + 1];
    v71 = v69[v68];
    ps->CurByteIndex = v68 + 2;
    params->Strength = (float)(v71 | (v70 << 8)) * 0.00390625;
  }
  if ( ps->CurBitIndex )
    ++ps->CurByteIndex;
  v72 = ps->CurByteIndex;
  v73 = ps->pData;
  ps->CurBitIndex = 0;
  v74 = v73[v72];
  ps->CurByteIndex = v72 + 1;
  if ( passesMask == 248 )
  {
    params->Mode = type;
    params->Passes = v74 >> 3;
  }
  else
  {
    v75 = (v74 >> 2) & 0x20 | 0x10;
    if ( (v74 & 0x40) == 0 )
      v75 = (v74 >> 2) & 0x20;
    v76 = v75 | 0x40;
    if ( (v74 & 0x20) != 0 )
      v76 = v75;
    v77 = v76;
    if ( passesMask <= 0xF && (v74 & 0x10) != 0 )
      v77 = v76 | 0x80;
    params->Mode = type | v77;
    params->Passes = passesMask & v74;
  }
}

void __fastcall Scaleform::GFx::ReadBlurFilter<Scaleform::GFx::Stream>(
        Scaleform::GFx::Stream *ps,
        Scaleform::Render::BlurFilterParams *params,
        float *angle,
        float *distance,
        unsigned int readConstants,
        Scaleform::Render::FilterType type,
        unsigned int passesMask)
{
  float *v8; // rsi
  float *v9; // rdi
  char v10; // r12
  signed int v12; // eax
  __int64 Pos; // rdx
  __int64 v14; // rsi
  Scaleform::Render::GradientData *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // r13
  __int64 v19; // rsi
  __int64 v20; // rbp
  signed int v21; // eax
  __int64 v22; // r12
  __int64 v23; // rdx
  unsigned __int8 v24; // cl
  int v25; // eax
  __int64 v26; // rdx
  unsigned __int8 v27; // cl
  int v28; // eax
  __int64 v29; // rdx
  unsigned __int8 v30; // cl
  int v31; // eax
  __int64 v32; // rdx
  unsigned __int8 v33; // cl
  __int64 v34; // rsi
  __int64 v35; // rbp
  signed int v36; // eax
  __int64 v37; // rcx
  unsigned __int8 v38; // dl
  Scaleform::RefCountVImpl *pObject; // rcx
  signed int v40; // eax
  unsigned __int8 *pBuffer; // r9
  __int64 v42; // rax
  int v43; // er8
  int v44; // ecx
  unsigned __int8 *v45; // r9
  __int64 v46; // rax
  int v47; // ecx
  signed int v48; // eax
  unsigned __int8 *v49; // r9
  __int64 v50; // rax
  int v51; // er8
  int v52; // ecx
  unsigned __int8 *v53; // r9
  __int64 v54; // rax
  int v55; // ecx
  signed int v56; // eax
  __int64 v57; // rax
  int v58; // edx
  signed int v59; // eax
  __int64 v60; // rdx
  unsigned int v61; // ecx
  unsigned int v62; // er8
  int v63; // ecx
  int v64; // edx
  int v65; // ecx
  int v66; // er14
  int v67; // [rsp+70h] [rbp+8h]

  v8 = distance;
  v9 = angle;
  v10 = readConstants;
  if ( (readConstants & 0x10) != 0 )
  {
    v12 = ps->DataSize - ps->Pos;
    ps->UnusedBits = 0;
    if ( v12 < 1 )
      Scaleform::GFx::Stream::PopulateBuffer1(ps);
    Pos = ps->Pos;
    v14 = ps->pBuffer[Pos];
    ps->Pos = Pos + 1;
    v15 = (Scaleform::Render::GradientData *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                               Scaleform::Memory::pGlobalHeap,
                                               48i64);
    if ( v15 )
    {
      Scaleform::Render::GradientData::GradientData(v15, GradientLinear, v14, 0);
      v17 = v16;
    }
    else
    {
      v17 = 0i64;
    }
    v18 = v14;
    if ( (_DWORD)v14 )
    {
      v19 = 0i64;
      v20 = v18;
      do
      {
        v21 = ps->DataSize - ps->Pos;
        v22 = *(_QWORD *)(v17 + 24);
        ps->UnusedBits = 0;
        if ( v21 < 1 )
          Scaleform::GFx::Stream::PopulateBuffer1(ps);
        v23 = ps->Pos;
        v24 = ps->pBuffer[v23];
        v25 = ps->DataSize - (v23 + 1);
        ps->Pos = v23 + 1;
        BYTE2(v67) = v24;
        ps->UnusedBits = 0;
        if ( v25 < 1 )
          Scaleform::GFx::Stream::PopulateBuffer1(ps);
        v26 = ps->Pos;
        v27 = ps->pBuffer[v26];
        v28 = ps->DataSize - (v26 + 1);
        ps->Pos = v26 + 1;
        BYTE1(v67) = v27;
        ps->UnusedBits = 0;
        if ( v28 < 1 )
          Scaleform::GFx::Stream::PopulateBuffer1(ps);
        v29 = ps->Pos;
        v30 = ps->pBuffer[v29];
        v31 = ps->DataSize - (v29 + 1);
        ps->Pos = v29 + 1;
        LOBYTE(v67) = v30;
        ps->UnusedBits = 0;
        if ( v31 < 1 )
          Scaleform::GFx::Stream::PopulateBuffer1(ps);
        v32 = ps->Pos;
        v33 = ps->pBuffer[v32];
        ps->Pos = v32 + 1;
        HIBYTE(v67) = v33;
        *(_DWORD *)(v19 + v22 + 4) = v67;
        v19 += 8i64;
        --v20;
      }
      while ( v20 );
      v10 = readConstants;
    }
    if ( (_DWORD)v18 )
    {
      v34 = 0i64;
      v35 = v18;
      do
      {
        v36 = ps->DataSize - ps->Pos;
        ps->UnusedBits = 0;
        if ( v36 < 1 )
          Scaleform::GFx::Stream::PopulateBuffer1(ps);
        v37 = ps->Pos;
        v38 = ps->pBuffer[v37];
        ps->Pos = v37 + 1;
        *(_BYTE *)(v34 + *(_QWORD *)(v17 + 24)) = v38;
        v34 += 8i64;
        --v35;
      }
      while ( v35 );
    }
    if ( v17 )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v17);
    pObject = (Scaleform::RefCountVImpl *)params->Gradient.pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    params->Gradient.pObject = (Scaleform::Render::GradientData *)v17;
    if ( v17 )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v17);
    v8 = distance;
    v9 = angle;
  }
  if ( (v10 & 1) != 0 )
  {
    Scaleform::GFx::Stream::ReadRgba(ps, params->Colors);
    if ( (v10 & 2) != 0 )
      Scaleform::GFx::Stream::ReadRgba(ps, &params->Colors[1]);
  }
  v40 = ps->DataSize - ps->Pos;
  ps->UnusedBits = 0;
  if ( v40 < 4 )
    Scaleform::GFx::Stream::PopulateBuffer(ps, 4);
  pBuffer = ps->pBuffer;
  v42 = ps->Pos;
  v43 = (pBuffer[ps->Pos + 1] | ((pBuffer[ps->Pos + 2] | (pBuffer[ps->Pos + 3] << 8)) << 8)) << 8;
  v44 = pBuffer[v42];
  ps->Pos = v42 + 4;
  params->BlurX = (float)((float)(v43 | v44) * 0.000015258789) * 20.0;
  LODWORD(v42) = ps->DataSize - ps->Pos;
  ps->UnusedBits = 0;
  if ( (int)v42 < 4 )
    Scaleform::GFx::Stream::PopulateBuffer(ps, 4);
  v45 = ps->pBuffer;
  v46 = ps->Pos;
  v47 = ((v45[ps->Pos + 1] | ((v45[ps->Pos + 2] | (v45[ps->Pos + 3] << 8)) << 8)) << 8) | v45[v46];
  ps->Pos = v46 + 4;
  params->BlurY = (float)((float)v47 * 0.000015258789) * 20.0;
  if ( (v10 & 4) != 0 )
  {
    v48 = ps->DataSize - ps->Pos;
    ps->UnusedBits = 0;
    if ( v48 < 4 )
      Scaleform::GFx::Stream::PopulateBuffer(ps, 4);
    v49 = ps->pBuffer;
    v50 = ps->Pos;
    v51 = (v49[ps->Pos + 1] | ((v49[ps->Pos + 2] | (v49[ps->Pos + 3] << 8)) << 8)) << 8;
    v52 = v49[v50];
    ps->Pos = v50 + 4;
    *v9 = (float)(v51 | v52) * 0.000015258789;
    LODWORD(v50) = ps->DataSize - ps->Pos;
    ps->UnusedBits = 0;
    if ( (int)v50 < 4 )
      Scaleform::GFx::Stream::PopulateBuffer(ps, 4);
    v53 = ps->pBuffer;
    v54 = ps->Pos;
    v55 = ((v53[ps->Pos + 1] | ((v53[ps->Pos + 2] | (v53[ps->Pos + 3] << 8)) << 8)) << 8) | v53[v54];
    ps->Pos = v54 + 4;
    *v8 = (float)v55 * 0.000015258789;
  }
  if ( (v10 & 8) != 0 )
  {
    v56 = ps->DataSize - ps->Pos;
    ps->UnusedBits = 0;
    if ( v56 < 2 )
      Scaleform::GFx::Stream::PopulateBuffer(ps, 2);
    v57 = ps->Pos;
    v58 = ps->pBuffer[v57] | (ps->pBuffer[ps->Pos + 1] << 8);
    ps->Pos = v57 + 2;
    params->Strength = (float)v58 * 0.00390625;
  }
  v59 = ps->DataSize - ps->Pos;
  ps->UnusedBits = 0;
  if ( v59 < 1 )
    Scaleform::GFx::Stream::PopulateBuffer1(ps);
  v60 = ps->Pos;
  v61 = ps->pBuffer[v60];
  ps->Pos = v60 + 1;
  v62 = v61;
  if ( passesMask == 248 )
  {
    params->Mode = type;
    params->Passes = v61 >> 3;
  }
  else
  {
    v63 = (v61 >> 2) & 0x20;
    v64 = v63 | 0x10;
    if ( (v62 & 0x40) == 0 )
      v64 = v63;
    v65 = v64 | 0x40;
    if ( (v62 & 0x20) != 0 )
      v65 = v64;
    v66 = v65;
    if ( passesMask <= 0xF && (v62 & 0x10) != 0 )
      v66 = v65 | 0x80;
    params->Mode = type | v66;
    params->Passes = passesMask & v62;
  }
}

