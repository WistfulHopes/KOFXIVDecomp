#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imageresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_streamcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontcompactor.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_pathdatastorage.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loadprocess.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loaderimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_stream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resourcehandle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_charposinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_taskmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraypaged.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_moviedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_autoptr.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_buttondef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagecreator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"

bool Scaleform::GFx::ButtonRecord::Read(Scaleform::GFx::LoadProcess * p, Scaleform::GFx::TagType tagType); // 0x1403E3E60
Scaleform::GFx::ButtonDef::ButtonDef(); // 0x1403E36C0
Scaleform::GFx::ButtonDef::~ButtonDef(); // 0x1403E3780
void Scaleform::GFx::SkipButtonSoundDef(Scaleform::GFx::LoadProcess * p); // 0x1403E42D0
void Scaleform::GFx::ButtonDef::Read(Scaleform::GFx::LoadProcess * p, Scaleform::GFx::TagType tagType); // 0x1403E3880void __fastcall Scaleform::GFx::ButtonDef::ButtonDef(Scaleform::GFx::ButtonDef *this)
{
  this->__vftable = (Scaleform::GFx::ButtonDef_vtbl *)&Scaleform::GFx::Resource::`vftable';
  this->RefCount.Value = 1;
  this->pLib = 0i64;
  this->Id.Id = 0x40000;
  this->__vftable = (Scaleform::GFx::ButtonDef_vtbl *)&Scaleform::GFx::ButtonDef::`vftable';
  this->ButtonRecords.Data.Data = 0i64;
  this->ButtonRecords.Data.Size = 0i64;
  this->ButtonRecords.Data.Policy.Capacity = 0i64;
  this->ButtonActions.Data.Data = 0i64;
  this->ButtonActions.Data.Size = 0i64;
  this->ButtonActions.Data.Policy.Capacity = 0i64;
  this->pScale9Grid = 0i64;
  this->Menu = 0;
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::GFx::ButtonRecord,Scaleform::AllocatorLH<Scaleform::GFx::ButtonRecord,258>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::GFx::ButtonRecord,Scaleform::AllocatorLH<Scaleform::GFx::ButtonRecord,258>,Scaleform::ArrayDefaultPolicy>(
        Scaleform::ArrayDataBase<Scaleform::GFx::ButtonRecord,Scaleform::AllocatorLH<Scaleform::GFx::ButtonRecord,258>,Scaleform::ArrayDefaultPolicy> *this)
{
  unsigned __int64 Size; // rdi
  Scaleform::RefCountVImpl **p_pFilters; // rbx

  Size = this->Size;
  if ( Size )
  {
    p_pFilters = (Scaleform::RefCountVImpl **)&this->Data[Size - 1].pFilters;
    do
    {
      if ( *p_pFilters )
        Scaleform::RefCountImpl::Release(*p_pFilters);
      p_pFilters -= 12;
      --Size;
    }
    while ( Size );
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Data);
}

void __fastcall Scaleform::GFx::ButtonDef::~ButtonDef(Scaleform::GFx::ButtonDef *this)
{
  unsigned __int64 Size; // rdi
  Scaleform::RefCountVImpl **i; // rbx

  this->__vftable = (Scaleform::GFx::ButtonDef_vtbl *)&Scaleform::GFx::ButtonDef::`vftable';
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pScale9Grid);
  Size = this->ButtonActions.Data.Size;
  for ( i = (Scaleform::RefCountVImpl **)&this->ButtonActions.Data.Data[Size - 1]; Size; --Size )
  {
    if ( *i )
      Scaleform::RefCountImpl::Release(*i);
    --i;
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->ButtonActions.Data.Data);
  Scaleform::ArrayDataBase<Scaleform::GFx::ButtonRecord,Scaleform::AllocatorLH<Scaleform::GFx::ButtonRecord,258>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::GFx::ButtonRecord,Scaleform::AllocatorLH<Scaleform::GFx::ButtonRecord,258>,Scaleform::ArrayDefaultPolicy>(&this->ButtonRecords.Data);
  this->__vftable = (Scaleform::GFx::ButtonDef_vtbl *)&Scaleform::GFx::Resource::`vftable';
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::Formatter::GetPrevStr(
        Scaleform::Render::MeshProvider *this,
        Scaleform::Render::Rect<float> *result,
        const Scaleform::Render::Matrix2x4<float> *m,
        float morphRatio)
{
  *(_QWORD *)&result->x1 = 0i64;
  *(_QWORD *)&result->x2 = 0i64;
  return result;
}

__int64 __fastcall Scaleform::GFx::ButtonDef::GetResourceTypeCode(Scaleform::GFx::ButtonDef *this)
{
  return 33024i64;
}

__int64 __fastcall Scaleform::Render::DICommand_Dispose::GetType(Scaleform::Render::DICommand_Dispose *this)
{
  return 6i64;
}

void __fastcall Scaleform::GFx::ButtonDef::Read(
        Scaleform::GFx::ButtonDef *this,
        Scaleform::GFx::LoadProcess *p,
        Scaleform::GFx::TagType tagType)
{
  Scaleform::GFx::ButtonDef *v4; // r14
  Scaleform::ArrayDataBase<Scaleform::GFx::ButtonRecord,Scaleform::AllocatorLH<Scaleform::GFx::ButtonRecord,258>,Scaleform::ArrayDefaultPolicy> *p_Data; // r15
  unsigned __int64 Size; // rdx
  unsigned int v7; // ecx
  __int64 v8; // rax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r12
  __int64 v11; // rbx
  __int64 v12; // rsi
  unsigned __int64 v13; // r8
  __int64 v14; // rbx
  Scaleform::Render::FilterSet *pObject; // rax
  Scaleform::GFx::ASSupport *v16; // rcx
  unsigned __int16 U16; // ax
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rcx
  int v19; // ebx
  int v20; // esi
  Scaleform::ArrayDataBase<Scaleform::GFx::ButtonRecord,Scaleform::AllocatorLH<Scaleform::GFx::ButtonRecord,258>,Scaleform::ArrayDefaultPolicy> *v21; // r12
  unsigned __int64 v22; // rdx
  unsigned int v23; // ecx
  __int64 v24; // rax
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // r15
  __int64 v27; // rbx
  __int64 v28; // rsi
  unsigned __int64 v29; // r8
  __int64 v30; // rbx
  Scaleform::Render::FilterSet *v31; // rax
  Scaleform::GFx::SWFProcessInfo *p_ProcessInfo; // rcx
  int v34; // [rsp+28h] [rbp-51h]
  int v35; // [rsp+2Ch] [rbp-4Dh]
  Scaleform::GFx::ButtonRecord v36; // [rsp+30h] [rbp-49h] BYREF

  v4 = this;
  switch ( tagType )
  {
    case Tag_ButtonCharacter:
      *(_OWORD *)&v36.ButtonMatrix.M[0][0] = _xmm;
      *(_OWORD *)&v36.ButtonMatrix.M[1][0] = _xmm;
      Scaleform::Render::Cxform::Cxform(&v36.ButtonCxform);
      v36.CharacterId.Id = 0x40000;
      v36.pFilters.pObject = 0i64;
      v36.Flags = 0;
      if ( Scaleform::GFx::ButtonRecord::Read(&v36, p, Tag_ButtonCharacter) )
      {
        p_Data = &v4->ButtonRecords.Data;
        do
        {
          Size = v4->ButtonRecords.Data.Size;
          v7 = 0;
          if ( Size )
          {
            v8 = 0i64;
            do
            {
              if ( p_Data->Data[v8].Depth > v36.Depth )
                break;
              v8 = ++v7;
            }
            while ( v7 < Size );
          }
          v9 = p_Data->Size;
          v10 = v7;
          Scaleform::ArrayDataBase<Scaleform::GFx::ButtonRecord,Scaleform::AllocatorLH<Scaleform::GFx::ButtonRecord,258>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
            p_Data,
            p_Data,
            v9 + 1);
          if ( v9 + 1 > v9 )
          {
            v11 = (__int64)&p_Data->Data[v9];
            v12 = 1i64;
            do
            {
              if ( v11 )
              {
                *(_QWORD *)v11 = 1065353216i64;
                *(_QWORD *)(v11 + 8) = 0i64;
                *(_DWORD *)(v11 + 16) = 0;
                *(_QWORD *)(v11 + 20) = 1065353216i64;
                *(_DWORD *)(v11 + 28) = 0;
                Scaleform::Render::Cxform::Cxform((Scaleform::Render::Cxform *)(v11 + 32));
                *(_QWORD *)(v11 + 64) = 0i64;
                *(_DWORD *)(v11 + 72) = 0x40000;
                *(_BYTE *)(v11 + 84) = 0;
              }
              v11 += 96i64;
              --v12;
            }
            while ( v12 );
          }
          v13 = p_Data->Size;
          if ( v10 < v13 - 1 )
            memmove(&p_Data->Data[v10 + 1], &p_Data->Data[v10], 96 * (v13 - v10) - 96);
          v14 = (__int64)&p_Data->Data[v10];
          if ( v14 )
          {
            *(_OWORD *)v14 = *(_OWORD *)&v36.ButtonMatrix.M[0][0];
            *(_OWORD *)(v14 + 16) = *(_OWORD *)&v36.ButtonMatrix.M[1][0];
            *(Scaleform::Render::Cxform *)(v14 + 32) = v36.ButtonCxform;
            pObject = v36.pFilters.pObject;
            if ( v36.pFilters.pObject )
            {
              Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v36.pFilters.pObject);
              pObject = v36.pFilters.pObject;
            }
            *(_QWORD *)(v14 + 64) = pObject;
            *(_DWORD *)(v14 + 72) = v36.CharacterId.Id;
            *(_WORD *)(v14 + 76) = v36.Depth;
            *(_DWORD *)(v14 + 80) = v36.BlendMode;
            *(_BYTE *)(v14 + 84) = v36.Flags;
          }
          if ( v36.pFilters.pObject )
            Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v36.pFilters.pObject);
          *(_OWORD *)&v36.ButtonMatrix.M[0][0] = _xmm;
          *(_OWORD *)&v36.ButtonMatrix.M[1][0] = _xmm;
          Scaleform::Render::Cxform::Cxform(&v36.ButtonCxform);
          v36.pFilters.pObject = 0i64;
          v36.CharacterId.Id = 0x40000;
          v36.Flags = 0;
          v4 = this;
        }
        while ( Scaleform::GFx::ButtonRecord::Read(&v36, p, Tag_ButtonCharacter) );
      }
      if ( v36.pFilters.pObject )
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v36.pFilters.pObject);
      if ( (p->pLoadData.pObject->FileAttributes & 8) == 0 )
      {
        v16 = p->pLoadStates.pObject->pAS2Support.pObject;
        if ( v16 )
        {
          v16->ReadButtonActions(v16, p, v4, Tag_ButtonCharacter);
          return;
        }
        goto LABEL_27;
      }
      goto LABEL_62;
    case Tag_ButtonSound:
      Scaleform::GFx::SkipButtonSoundDef(p);
      return;
    case Tag_ButtonCharacter2:
      this->Menu = Scaleform::GFx::LoadProcess::ReadU8(p) != 0;
      U16 = Scaleform::GFx::LoadProcess::ReadU16(p);
      pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
      v19 = U16;
      v34 = U16;
      if ( !pAltStream )
        pAltStream = &p->ProcessInfo;
      v20 = pAltStream->Stream.Pos + pAltStream->Stream.FilePos - pAltStream->Stream.DataSize + U16 - 2;
      v35 = v20;
      *(_OWORD *)&v36.ButtonMatrix.M[0][0] = _xmm;
      *(_OWORD *)&v36.ButtonMatrix.M[1][0] = _xmm;
      Scaleform::Render::Cxform::Cxform(&v36.ButtonCxform);
      v36.CharacterId.Id = 0x40000;
      v36.pFilters.pObject = 0i64;
      v36.Flags = 0;
      if ( Scaleform::GFx::ButtonRecord::Read(&v36, p, Tag_ButtonCharacter2) )
      {
        v21 = &v4->ButtonRecords.Data;
        do
        {
          v22 = v4->ButtonRecords.Data.Size;
          v23 = 0;
          if ( v22 )
          {
            v24 = 0i64;
            do
            {
              if ( v21->Data[v24].Depth > v36.Depth )
                break;
              v24 = ++v23;
            }
            while ( v23 < v22 );
          }
          v25 = v21->Size;
          v26 = v23;
          Scaleform::ArrayDataBase<Scaleform::GFx::ButtonRecord,Scaleform::AllocatorLH<Scaleform::GFx::ButtonRecord,258>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
            v21,
            v21,
            v25 + 1);
          if ( v25 + 1 > v25 )
          {
            v27 = (__int64)&v21->Data[v25];
            v28 = 1i64;
            do
            {
              if ( v27 )
              {
                *(_QWORD *)v27 = 1065353216i64;
                *(_QWORD *)(v27 + 8) = 0i64;
                *(_DWORD *)(v27 + 16) = 0;
                *(_QWORD *)(v27 + 20) = 1065353216i64;
                *(_DWORD *)(v27 + 28) = 0;
                Scaleform::Render::Cxform::Cxform((Scaleform::Render::Cxform *)(v27 + 32));
                *(_QWORD *)(v27 + 64) = 0i64;
                *(_DWORD *)(v27 + 72) = 0x40000;
                *(_BYTE *)(v27 + 84) = 0;
              }
              v27 += 96i64;
              --v28;
            }
            while ( v28 );
          }
          v29 = v21->Size;
          if ( v26 < v29 - 1 )
            memmove(&v21->Data[v26 + 1], &v21->Data[v26], 96 * (v29 - v26) - 96);
          v30 = (__int64)&v21->Data[v26];
          if ( v30 )
          {
            *(_OWORD *)v30 = *(_OWORD *)&v36.ButtonMatrix.M[0][0];
            *(_OWORD *)(v30 + 16) = *(_OWORD *)&v36.ButtonMatrix.M[1][0];
            *(Scaleform::Render::Cxform *)(v30 + 32) = v36.ButtonCxform;
            v31 = v36.pFilters.pObject;
            if ( v36.pFilters.pObject )
            {
              Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v36.pFilters.pObject);
              v31 = v36.pFilters.pObject;
            }
            *(_QWORD *)(v30 + 64) = v31;
            *(_DWORD *)(v30 + 72) = v36.CharacterId.Id;
            *(_WORD *)(v30 + 76) = v36.Depth;
            *(_DWORD *)(v30 + 80) = v36.BlendMode;
            *(_BYTE *)(v30 + 84) = v36.Flags;
          }
          if ( v36.pFilters.pObject )
            Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v36.pFilters.pObject);
          *(_OWORD *)&v36.ButtonMatrix.M[0][0] = _xmm;
          *(_OWORD *)&v36.ButtonMatrix.M[1][0] = _xmm;
          Scaleform::Render::Cxform::Cxform(&v36.ButtonCxform);
          v36.pFilters.pObject = 0i64;
          v36.CharacterId.Id = 0x40000;
          v36.Flags = 0;
          v4 = this;
        }
        while ( Scaleform::GFx::ButtonRecord::Read(&v36, p, Tag_ButtonCharacter2) );
        v19 = v34;
        v20 = v35;
      }
      if ( v36.pFilters.pObject )
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v36.pFilters.pObject);
      if ( v19 )
      {
        if ( (p->pLoadData.pObject->FileAttributes & 8) != 0 )
        {
LABEL_62:
          Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::LogError(
            &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
            "GFx_ButtonLoader - AS3 Button shouldn't have AS2 actions. Skipped.");
          return;
        }
        if ( !p->pLoadStates.pObject->pAS2Support.pObject )
        {
LABEL_27:
          Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::LogError(
            &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
            "GFx_ButtonLoader - AS2 support is not installed. Actions are skipped.");
          return;
        }
        p_ProcessInfo = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
        if ( !p_ProcessInfo )
          p_ProcessInfo = &p->ProcessInfo;
        Scaleform::GFx::Stream::SetPosition(&p_ProcessInfo->Stream, v20);
        p->pLoadStates.pObject->pAS2Support.pObject->ReadButton2ActionConditions(
          p->pLoadStates.pObject->pAS2Support.pObject,
          p,
          v4,
          Tag_ButtonCharacter2);
      }
      break;
  }
}

char __fastcall Scaleform::GFx::ButtonRecord::Read(
        Scaleform::GFx::ButtonRecord *this,
        Scaleform::GFx::LoadProcess *p,
        Scaleform::GFx::TagType tagType)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rbx
  int v7; // eax
  __int64 Pos; // rdx
  unsigned __int8 v9; // cl
  unsigned __int8 v10; // r14
  Scaleform::GFx::SWFProcessInfo *p_ProcessInfo; // rbx
  Scaleform::GFx::SWFProcessInfo *v13; // rbp
  int v14; // eax
  __int64 v15; // r9
  unsigned int v16; // er15
  Scaleform::GFx::SWFProcessInfo *v17; // rbp
  int v18; // eax
  __int64 v19; // r10
  unsigned __int8 *pBuffer; // rdx
  __int16 v21; // r9
  __int16 v22; // ax
  Scaleform::Render::FilterSet *v23; // rax
  Scaleform::RefCountVImpl *v24; // rax
  Scaleform::RefCountVImpl *v25; // rsi
  Scaleform::RefCountVImpl *pObject; // rcx
  int v27; // eax
  __int64 v28; // rdx
  unsigned int v29; // eax
  unsigned __int8 v30; // dl

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  v7 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v7 < 1 )
    Scaleform::GFx::Stream::PopulateBuffer1(&pAltStream->Stream);
  Pos = pAltStream->Stream.Pos;
  v9 = pAltStream->Stream.pBuffer[Pos];
  pAltStream->Stream.Pos = Pos + 1;
  v10 = v9;
  if ( !v9 )
    return 0;
  p_ProcessInfo = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !p_ProcessInfo )
    p_ProcessInfo = &p->ProcessInfo;
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)p_ProcessInfo,
    "-- action record:  ");
  this->Flags = 0;
  if ( (v10 & 8) != 0 )
  {
    this->Flags = 1;
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)p_ProcessInfo,
      "HitTest ");
  }
  if ( (v10 & 4) != 0 )
  {
    this->Flags |= 2u;
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)p_ProcessInfo,
      "Down ");
  }
  if ( (v10 & 2) != 0 )
  {
    this->Flags |= 4u;
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)p_ProcessInfo,
      "Over ");
  }
  if ( (v10 & 1) != 0 )
  {
    this->Flags |= 8u;
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)p_ProcessInfo,
      "Up ");
  }
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)p_ProcessInfo,
    "\n");
  v13 = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !v13 )
    v13 = &p->ProcessInfo;
  v14 = v13->Stream.DataSize - v13->Stream.Pos;
  v13->Stream.UnusedBits = 0;
  if ( v14 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&v13->Stream, 2);
  v15 = v13->Stream.Pos;
  v16 = v13->Stream.pBuffer[v15] | (v13->Stream.pBuffer[(unsigned int)(v15 + 1)] << 8);
  v13->Stream.Pos = v15 + 2;
  this->CharacterId.Id = v16;
  v17 = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !v17 )
    v17 = &p->ProcessInfo;
  v18 = v17->Stream.DataSize - v17->Stream.Pos;
  v17->Stream.UnusedBits = 0;
  if ( v18 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&v17->Stream, 2);
  v19 = v17->Stream.Pos;
  pBuffer = v17->Stream.pBuffer;
  v21 = pBuffer[(unsigned int)(v19 + 1)];
  v22 = pBuffer[v19];
  v17->Stream.Pos = v19 + 2;
  this->Depth = v22 | (v21 << 8);
  Scaleform::GFx::Stream::ReadMatrix(&p_ProcessInfo->Stream, &this->ButtonMatrix);
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)p_ProcessInfo,
    "   CharId = %d, Depth = %d\n",
    v16,
    this->Depth);
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)p_ProcessInfo,
    "   mat:\n");
  if ( tagType == Tag_ButtonCharacter2 )
  {
    Scaleform::GFx::Stream::ReadCxformRgba(&p_ProcessInfo->Stream, &this->ButtonCxform);
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)p_ProcessInfo,
      "   cxform:\n");
  }
  if ( (v10 & 0x10) != 0 )
  {
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)p_ProcessInfo,
      "   HasFilters\n");
    v23 = (Scaleform::Render::FilterSet *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))p->pLoadData.pObject->pHeap->Alloc)(
                                            p->pLoadData.pObject->pHeap,
                                            56i64);
    if ( v23 )
    {
      Scaleform::Render::FilterSet::FilterSet(v23, 0i64);
      v25 = v24;
    }
    else
    {
      v25 = 0i64;
    }
    if ( Scaleform::GFx::LoadFilters<Scaleform::GFx::Stream>(
           &p_ProcessInfo->Stream,
           (Scaleform::Render::FilterSet *)v25) )
    {
      if ( v25 )
        Scaleform::Render::RenderBuffer::AddRef(v25);
      pObject = (Scaleform::RefCountVImpl *)this->pFilters.pObject;
      if ( pObject )
        Scaleform::RefCountImpl::Release(pObject);
      this->pFilters.pObject = (Scaleform::Render::FilterSet *)v25;
    }
    if ( v25 )
      Scaleform::RefCountImpl::Release(v25);
  }
  if ( (v10 & 0x20) != 0 )
  {
    v27 = p_ProcessInfo->Stream.DataSize - p_ProcessInfo->Stream.Pos;
    p_ProcessInfo->Stream.UnusedBits = 0;
    if ( v27 < 1 )
      Scaleform::GFx::Stream::PopulateBuffer1(&p_ProcessInfo->Stream);
    v28 = p_ProcessInfo->Stream.Pos;
    v29 = v28 + 1;
    v30 = p_ProcessInfo->Stream.pBuffer[v28];
    p_ProcessInfo->Stream.Pos = v29;
    if ( (unsigned __int8)(v30 - 1) > 0xDu )
      v30 = 1;
    this->BlendMode = v30;
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)p_ProcessInfo,
      "   HasBlending, %d\n",
      v30);
  }
  else
  {
    this->BlendMode = Blend_None;
  }
  return 1;
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::GFx::ButtonRecord,Scaleform::AllocatorLH<Scaleform::GFx::ButtonRecord,258>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::GFx::ButtonRecord,Scaleform::AllocatorLH<Scaleform::GFx::ButtonRecord,258>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::GFx::ButtonRecord *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::GFx::ButtonRecord *v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      v7 = 96 * v6;
      if ( Data )
      {
        v8 = (Scaleform::GFx::ButtonRecord *)Scaleform::Memory::pGlobalHeap->Realloc(
                                               Scaleform::Memory::pGlobalHeap,
                                               Data,
                                               v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 258;
      this->Data = (Scaleform::GFx::ButtonRecord *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                     Scaleform::Memory::pGlobalHeap,
                                                     pheapAddr,
                                                     v7,
                                                     &v9);
    }
    else
    {
      v6 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        this->Data = 0i64;
        this->Policy.Capacity = 0i64;
        return;
      }
    }
    this->Policy.Capacity = v6;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::GFx::ButtonRecord,Scaleform::AllocatorLH<Scaleform::GFx::ButtonRecord,258>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::GFx::ButtonRecord,Scaleform::AllocatorLH<Scaleform::GFx::ButtonRecord,258>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rdi
  unsigned __int64 v7; // rdi
  Scaleform::RefCountVImpl **p_pFilters; // rbx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::GFx::ButtonRecord,Scaleform::AllocatorLH<Scaleform::GFx::ButtonRecord,258>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    v7 = Size - newSize;
    if ( v7 )
    {
      p_pFilters = (Scaleform::RefCountVImpl **)&this->Data[v7 - 1 + newSize].pFilters;
      do
      {
        if ( *p_pFilters )
          Scaleform::RefCountImpl::Release(*p_pFilters);
        p_pFilters -= 12;
        --v7;
      }
      while ( v7 );
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::GFx::ButtonRecord,Scaleform::AllocatorLH<Scaleform::GFx::ButtonRecord,258>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::GFx::SkipButtonSoundDef(Scaleform::GFx::LoadProcess *p)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rbx
  __int64 v3; // r15
  Scaleform::GFx::SWFProcessInfo *p_ProcessInfo; // rdi
  int v5; // eax
  __int64 Pos; // r9
  __int16 v7; // r8
  bool v8; // bp
  bool v9; // si
  bool v10; // di
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // ecx
  __int64 v17; // rdi
  int v18; // eax
  int v19; // eax
  int v20; // eax

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  v3 = 4i64;
  do
  {
    p_ProcessInfo = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
    if ( !p_ProcessInfo )
      p_ProcessInfo = &p->ProcessInfo;
    v5 = p_ProcessInfo->Stream.DataSize - p_ProcessInfo->Stream.Pos;
    p_ProcessInfo->Stream.UnusedBits = 0;
    if ( v5 < 2 )
      Scaleform::GFx::Stream::PopulateBuffer(&p_ProcessInfo->Stream, 2);
    Pos = p_ProcessInfo->Stream.Pos;
    v7 = p_ProcessInfo->Stream.pBuffer[Pos] | (p_ProcessInfo->Stream.pBuffer[(unsigned int)(Pos + 1)] << 8);
    p_ProcessInfo->Stream.Pos = Pos + 2;
    if ( v7 )
    {
      Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 2u);
      Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u);
      Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u);
      v8 = Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u) != 0;
      v9 = Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u) != 0;
      v10 = Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u) != 0;
      if ( Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u) )
      {
        v11 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
        pAltStream->Stream.UnusedBits = 0;
        if ( v11 < 4 )
          Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 4);
        pAltStream->Stream.Pos += 4;
      }
      if ( v10 )
      {
        v12 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
        pAltStream->Stream.UnusedBits = 0;
        if ( v12 < 4 )
          Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 4);
        pAltStream->Stream.Pos += 4;
      }
      if ( v9 )
      {
        v13 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
        pAltStream->Stream.UnusedBits = 0;
        if ( v13 < 2 )
          Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
        pAltStream->Stream.Pos += 2;
      }
      if ( v8 )
      {
        v14 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
        pAltStream->Stream.UnusedBits = 0;
        if ( v14 < 1 )
          Scaleform::GFx::Stream::PopulateBuffer1(&pAltStream->Stream);
        v15 = pAltStream->Stream.Pos;
        v16 = pAltStream->Stream.pBuffer[v15];
        pAltStream->Stream.Pos = v15 + 1;
        if ( (_BYTE)v16 )
        {
          v17 = v16;
          do
          {
            v18 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
            pAltStream->Stream.UnusedBits = 0;
            if ( v18 < 4 )
              Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 4);
            pAltStream->Stream.Pos += 4;
            v19 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
            pAltStream->Stream.UnusedBits = 0;
            if ( v19 < 2 )
              Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
            pAltStream->Stream.Pos += 2;
            v20 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
            pAltStream->Stream.UnusedBits = 0;
            if ( v20 < 2 )
              Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
            pAltStream->Stream.Pos += 2;
            --v17;
          }
          while ( v17 );
        }
      }
    }
    --v3;
  }
  while ( v3 );
}

