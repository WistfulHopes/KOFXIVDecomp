#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"

Scaleform::Render::StateData::Interface_Value Scaleform::Render::BlendState::InterfaceImpl; // 0x140A724F8
Scaleform::Render::StateData::Interface_RefCountImpl Scaleform::Render::Scale9State::InterfaceImpl; // 0x140A724C8
Scaleform::Render::MaskNodeState::Interface Scaleform::Render::MaskNodeState::InterfaceImpl; // 0x140A724E8
Scaleform::Render::StateData::Interface_RefCountImpl Scaleform::Render::ViewMatrix3DState::InterfaceImpl; // 0x140A72518
Scaleform::Render::StateData::Interface_RefCountImpl Scaleform::Render::ProjectionMatrix3DState::InterfaceImpl; // 0x140A72558
Scaleform::Render::StateData::Interface_Value Scaleform::Render::StateNone_InterfaceImpl; // 0x140A724D8
void(*Scaleform::Render::StateNone_InterfaceImpl$initializer$)(); // 0x140739D00
void(*Scaleform::Render::BlendState::nterfaceImpl$initializer$::operator&)(); // 0x140739D08
void(*Scaleform::Render::Scale9State::nterfaceImpl$initializer$::operator&)(); // 0x140739D10
void(*Scaleform::Render::ViewMatrix3DState::nterfaceImpl$initializer$::operator&)(); // 0x140739D18
void(*Scaleform::Render::ProjectionMatrix3DState::nterfaceImpl$initializer$::operator&)(); // 0x140739D20
void(*Scaleform::Render::UserDataState::nterfaceImpl$initializer$::operator&)(); // 0x140739D28
void(*Scaleform::Render::OrigScale9ParentState::nterfaceImpl$initializer$::operator&)(); // 0x140739D30
void(*Scaleform::Render::MaskNodeState::nterfaceImpl$initializer$::operator&)(); // 0x140739D38
void(*Scaleform::Render::Internal_MaskOwnerState::nterfaceImpl$initializer$::operator&)(); // 0x140739D40
void(*Scaleform::Render::FilterState::nterfaceImpl$initializer$::operator&)(); // 0x140739D48
Scaleform::Render::StateData::Interface_RefCountImpl Scaleform::Render::UserDataState::InterfaceImpl; // 0x140A724B8
void(*Scaleform::Render::OrigNodeBoundsState::nterfaceImpl$initializer$::operator&)(); // 0x140739D50
Scaleform::Render::OrigScale9ParentState::Interface Scaleform::Render::OrigScale9ParentState::InterfaceImpl; // 0x140A72538
Scaleform::Render::StateData::Interface_Value Scaleform::Render::Internal_MaskOwnerState::InterfaceImpl; // 0x140A72528
Scaleform::Render::StateData::Interface_RefCountImpl Scaleform::Render::FilterState::InterfaceImpl; // 0x140A72508
Scaleform::Render::StateData::Interface_RefCountImpl Scaleform::Render::OrigNodeBoundsState::InterfaceImpl; // 0x140A72548
void Scaleform::Render::StateData::Interface_Value::AddRef(void * __formal, Scaleform::Render::StateData::Interface::RefBehaviour __formal); // 0x14002E7C0
bool Scaleform::Render::BlendState::IsTargetAllocationNeededForBlendMode(Scaleform::Render::BlendMode mode); // 0x1403936C0
void Scaleform::Render::MaskNodeState::Interface::AddRef(void * data, Scaleform::Render::StateData::Interface::RefBehaviour b); // 0x140393650
void Scaleform::Render::MaskNodeState::Interface::Release(void * data, Scaleform::Render::StateData::Interface::RefBehaviour b); // 0x140393660
const Scaleform::Render::FilterSet * Scaleform::Render::FilterState::GetFilters(); // 0x140487310
unsigned long long Scaleform::Render::FilterState::GetFilterCount(); // 0x1403936A0
const Scaleform::Render::Filter * Scaleform::Render::FilterState::GetFilter(unsigned long long index); // 0x140393690//decompilation failure at 140A724F8!
//decompilation failure at 140A724C8!
//decompilation failure at 140A724E8!
//decompilation failure at 140A72518!
//decompilation failure at 140A72558!
//decompilation failure at 140A724D8!
//decompilation failure at 140739D00!
//decompilation failure at 140739D08!
//decompilation failure at 140739D10!
//decompilation failure at 140739D18!
//decompilation failure at 140739D20!
//decompilation failure at 140739D28!
//decompilation failure at 140739D30!
//decompilation failure at 140739D38!
//decompilation failure at 140739D40!
//decompilation failure at 140739D48!
//decompilation failure at 140A724B8!
//decompilation failure at 140739D50!
//decompilation failure at 140A72538!
//decompilation failure at 140A72528!
//decompilation failure at 140A72508!
//decompilation failure at 140A72548!
void __fastcall Scaleform::Render::OrigScale9ParentState::Interface::AddRef(
        Scaleform::Render::OrigScale9ParentState::Interface *this,
        void *data,
        Scaleform::Render::StateData::Interface::RefBehaviour b)
{
  if ( b != Ref_NoTreeNode )
    ++*((_QWORD *)data + 1);
}

void __fastcall Scaleform::GFx::ImageFileKeyInterface::AddRef(
        Scaleform::Render::StateData::Interface_RefCountImpl *this,
        void *data,
        Scaleform::Render::StateData::Interface::RefBehaviour __formal)
{
  Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)data);
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

Scaleform::Render::Filter *__fastcall Scaleform::Render::FilterState::GetFilter(
        Scaleform::Render::FilterState *this,
        unsigned __int64 index)
{
  return Scaleform::Render::FilterSet::GetFilter((Scaleform::Render::FilterSet *)this->pData, index);
}

unsigned __int64 __fastcall Scaleform::Render::FilterState::GetFilterCount(Scaleform::Render::FilterState *this)
{
  return (unsigned int)Scaleform::Render::FilterSet::GetFilterCount((Scaleform::Render::FilterSet *)this->pData);
}

AgDisplayPlatformImplementation *__fastcall Scaleform::GFx::Stream::GetLog(AgDisplay *this)
{
  return this->m_platformImplementation;
}

bool __fastcall Scaleform::Render::BlendState::IsTargetAllocationNeededForBlendMode(Scaleform::Render::BlendMode mode)
{
  int v1; // eax
  bool result; // al

  result = 0;
  if ( (unsigned int)mode <= Blend_HardLight )
  {
    v1 = 24804;
    if ( _bittest(&v1, mode) )
      return 1;
  }
  return result;
}

void __fastcall Scaleform::Render::MaskNodeState::Interface::Release(
        Scaleform::Render::OrigScale9ParentState::Interface *this,
        void *data,
        Scaleform::Render::StateData::Interface::RefBehaviour b)
{
  if ( b != Ref_NoTreeNode && (*((_QWORD *)data + 1))-- == 1i64 )
    Scaleform::Render::ContextImpl::Entry::destroyHelper((Scaleform::Render::ContextImpl::Entry *)data);
}

void __fastcall Scaleform::Render::StateData::Interface_RefCountImpl::Release(
        Scaleform::Render::StateData::Interface_RefCountImpl *this,
        void *data,
        Scaleform::Render::StateData::Interface::RefBehaviour b)
{
  if ( b != Ref_ReleaseTreeNodeOnly )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)data);
}

