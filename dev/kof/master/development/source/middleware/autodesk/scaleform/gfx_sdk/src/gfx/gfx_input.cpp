#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_point3.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_charposinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraypaged.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_streamcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loaderimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resourcehandle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_stream.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asmovierootbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_assoundintf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_taskmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asutils.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imageresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_moviedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_autoptr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontcompactor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_pathdatastorage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_input.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_interactiveobject.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagecreator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

Scaleform::GFx::MouseState::MouseState(); // 0x140364BA0
void Scaleform::GFx::MouseState::ResetState(); // 0x140365390
void Scaleform::GFx::MouseState::UpdateState(const Scaleform::GFx::InputEventsQueueEntry & qe); // 0x140365570
void Scaleform::GFx::MouseState::SetMouseButtonDownEntity(unsigned long buttonIdx, Scaleform::GFx::InteractiveObject * pch); // 0x140365470
Scaleform::Ptr<Scaleform::GFx::InteractiveObject> Scaleform::GFx::MouseState::GetMouseButtonDownEntity(unsigned long buttonIdx); // 0x140365240
Scaleform::GFx::InputEventsQueue::InputEventsQueue(); // 0x140364B80
Scaleform::GFx::InputEventsQueueEntry * Scaleform::GFx::InputEventsQueue::AddEmptyQueueEntry(); // 0x140364C40
void Scaleform::GFx::InputEventsQueue::AddMouseMove(unsigned long mouseIndex, const Scaleform::Render::Point<float> & pos); // 0x140364E70
void Scaleform::GFx::InputEventsQueue::AddMouseButtonEvent(unsigned long mouseIndex, const Scaleform::Render::Point<float> & pos, unsigned long buttonsSt, unsigned long flags); // 0x140364DF0
void Scaleform::GFx::InputEventsQueue::AddMouseWheel(unsigned long mouseIndex, const Scaleform::Render::Point<float> & pos, long delta); // 0x140364EB0
void Scaleform::GFx::InputEventsQueue::AddKeyEvent(unsigned long code, unsigned char ascii, unsigned long wcharCode, bool isKeyDown, Scaleform::KeyModifiers specialKeysState, unsigned char keyboardIndex); // 0x140364D90
void Scaleform::GFx::InputEventsQueue::AddGamePadAnalogEvent(unsigned long code, float analogx, float analogy, unsigned long controllerIdx); // 0x140364CB0
void Scaleform::GFx::InputEventsQueue::AddAccelerometerEvent(long idAcc, double timestamp, double accelerationX, double accelerationY, double accelerationZ); // 0x140364BE0
void Scaleform::GFx::InputEventsQueue::AddGeolocationEvent(long idGeo, double latitude, double longitude, double altitude, double hAccuracy, double vAccuracy, double speed, double heading, double timestamp); // 0x140364D00
void Scaleform::GFx::InputEventsQueue::AddStatusEvent(Scaleform::String * code, Scaleform::String * level, Scaleform::String * extensionId, Scaleform::String * contextId); // 0x140364F30
const Scaleform::GFx::InputEventsQueueEntry * Scaleform::GFx::InputEventsQueue::GetEntry(); // 0x140365120
long Scaleform::GFx::EventId::ConvertToButtonKeyCode(); // 0x140364FF0
unsigned char Scaleform::GFx::EventId::ConvertKeyCodeToAscii(); // 0x140364F80void __fastcall Scaleform::GFx::InputEventsQueue::InputEventsQueue(Scaleform::GFx::InputEventsQueue *this)
{
  this->StartPos = 0i64;
  this->UsedEntries = 0i64;
  this->LastMousePosMask = 0;
}

void __fastcall Scaleform::GFx::MouseState::MouseState(Scaleform::GFx::MouseState *this)
{
  this->TopmostEntity.pProxy.pObject = 0i64;
  this->PrevTopmostEntity.pProxy.pObject = 0i64;
  this->ActiveEntity.pProxy.pObject = 0i64;
  this->MouseButtonDownEntities.Data.Data = 0i64;
  this->MouseButtonDownEntities.Data.Size = 0i64;
  this->MouseButtonDownEntities.Data.Policy.Capacity = 0i64;
  *((_BYTE *)this + 76) &= 0xE0u;
  *(_QWORD *)&this->CursorType = 0i64;
  *(_QWORD *)&this->CurButtonsState = 0i64;
  this->LastPosition = 0i64;
  this->mPresetCursorType = -1;
}

void __fastcall Scaleform::GFx::InputEventsQueue::AddAccelerometerEvent(
        Scaleform::GFx::InputEventsQueue *this,
        int idAcc,
        long double timestamp,
        long double accelerationX,
        long double accelerationY,
        long double accelerationZ)
{
  Scaleform::GFx::InputEventsQueueEntry *v7; // rax

  v7 = Scaleform::GFx::InputEventsQueue::AddEmptyQueueEntry(this);
  v7->t = QE_Accelerometer;
  v7->u.accelerometerEntry.Timestamp = timestamp;
  v7->u.accelerometerEntry.AccelerationX = accelerationX;
  v7->u.accelerometerEntry.AccelerationY = accelerationY;
  v7->u.accelerometerEntry.AccelerationZ = accelerationZ;
  v7->u.keyEntry.WcharCode = idAcc;
}

Scaleform::GFx::InputEventsQueueEntry *__fastcall Scaleform::GFx::InputEventsQueue::AddEmptyQueueEntry(
        Scaleform::GFx::InputEventsQueue *this)
{
  unsigned __int64 v2; // rax
  unsigned __int64 UsedEntries; // rcx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax

  if ( this->UsedEntries == 100 )
  {
    v2 = ++this->StartPos;
    this->UsedEntries = 99i64;
    if ( v2 == 100 )
      v2 = 0i64;
    this->StartPos = v2;
  }
  UsedEntries = this->UsedEntries;
  v4 = UsedEntries + this->StartPos;
  this->UsedEntries = UsedEntries + 1;
  v5 = v4 - 100;
  if ( v4 < 0x64 )
    v5 = v4;
  return (Scaleform::GFx::InputEventsQueueEntry *)((char *)this + 80 * v5);
}

void __fastcall Scaleform::GFx::InputEventsQueue::AddGamePadAnalogEvent(
        Scaleform::GFx::InputEventsQueue *this,
        unsigned int code,
        float analogx,
        float analogy,
        unsigned int controllerIdx)
{
  Scaleform::GFx::InputEventsQueueEntry *v6; // rax

  v6 = Scaleform::GFx::InputEventsQueue::AddEmptyQueueEntry(this);
  v6->t = QE_AnalogGamePad;
  v6->u.mouseEntry.PosY = analogx;
  v6->u.touchEntry.PosY = analogy;
  v6->u.keyEntry.WcharCode = code;
  v6->u.mouseEntry.MouseIndex = controllerIdx;
}

void __fastcall Scaleform::GFx::InputEventsQueue::AddGeolocationEvent(
        Scaleform::GFx::InputEventsQueue *this,
        int idGeo,
        long double latitude,
        long double longitude,
        long double altitude,
        long double hAccuracy,
        long double vAccuracy,
        long double speed,
        long double heading,
        long double timestamp)
{
  Scaleform::GFx::InputEventsQueueEntry *v11; // rax

  v11 = Scaleform::GFx::InputEventsQueue::AddEmptyQueueEntry(this);
  v11->t = QE_Geolocation;
  v11->u.accelerometerEntry.AccelerationY = altitude;
  v11->u.accelerometerEntry.AccelerationZ = hAccuracy;
  v11->u.geolocationEntry.VAccuracy = vAccuracy;
  v11->u.geolocationEntry.Speed = speed;
  v11->u.accelerometerEntry.Timestamp = latitude;
  v11->u.accelerometerEntry.AccelerationX = longitude;
  v11->u.geolocationEntry.Heading = heading;
  v11->u.geolocationEntry.Timestamp = timestamp;
  v11->u.keyEntry.WcharCode = idGeo;
}

void __fastcall Scaleform::GFx::InputEventsQueue::AddKeyEvent(
        Scaleform::GFx::InputEventsQueue *this,
        unsigned int code,
        unsigned __int8 ascii,
        unsigned int wcharCode,
        bool isKeyDown,
        Scaleform::KeyModifiers specialKeysState,
        unsigned __int8 keyboardIndex)
{
  Scaleform::GFx::InputEventsQueueEntry *v10; // rax

  v10 = Scaleform::GFx::InputEventsQueue::AddEmptyQueueEntry(this);
  v10->t = QE_Key;
  v10->u.keyEntry.Code = code;
  v10->u.keyEntry.WcharCode = wcharCode;
  v10->u.keyEntry.AsciiCode = ascii;
  BYTE1(v10->u.statusEntry.Level) = specialKeysState;
  v10->u.mouseEntry.WheelScrollDelta = keyboardIndex;
  v10->u.mouseEntry.Flags = isKeyDown;
}

void __fastcall Scaleform::GFx::InputEventsQueue::AddMouseButtonEvent(
        Scaleform::GFx::InputEventsQueue *this,
        unsigned int mouseIndex,
        const Scaleform::Render::Point<float> *pos,
        unsigned int buttonsSt,
        unsigned int flags)
{
  unsigned __int16 v5; // si
  unsigned __int8 v7; // di
  Scaleform::GFx::InputEventsQueueEntry *v8; // rax

  v5 = buttonsSt;
  v7 = mouseIndex;
  if ( pos->x != 1.1754944e-38 )
    this->LastMousePosMask &= ~(1 << mouseIndex);
  v8 = Scaleform::GFx::InputEventsQueue::AddEmptyQueueEntry(this);
  v8->t = QE_Mouse;
  v8->u.mouseEntry.MouseIndex = v7;
  v8->u.keyEntry.WcharCode = LODWORD(pos->x);
  v8->u.keyEntry.Code = LODWORD(pos->y);
  v8->u.mouseEntry.ButtonsState = v5;
  v8->u.mouseEntry.Flags = flags;
}

void __fastcall Scaleform::GFx::InputEventsQueue::AddMouseMove(
        Scaleform::GFx::InputEventsQueue *this,
        unsigned int mouseIndex,
        const Scaleform::Render::Point<float> *pos)
{
  if ( mouseIndex < 6 )
  {
    this->LastMousePosMask |= 1 << mouseIndex;
    this->LastMousePos[mouseIndex].x = pos->x;
    this->LastMousePos[mouseIndex].y = pos->y;
  }
}

void __fastcall Scaleform::GFx::InputEventsQueue::AddMouseWheel(
        Scaleform::GFx::InputEventsQueue *this,
        unsigned int mouseIndex,
        const Scaleform::Render::Point<float> *pos,
        int delta)
{
  char v4; // si
  unsigned __int8 v6; // di
  Scaleform::GFx::InputEventsQueueEntry *v7; // rax
  float y; // ecx

  v4 = delta;
  v6 = mouseIndex;
  if ( pos->x != 1.1754944e-38 )
    this->LastMousePosMask &= ~(1 << mouseIndex);
  v7 = Scaleform::GFx::InputEventsQueue::AddEmptyQueueEntry(this);
  v7->t = QE_Mouse;
  v7->u.mouseEntry.MouseIndex = v6;
  v7->u.keyEntry.WcharCode = LODWORD(pos->x);
  y = pos->y;
  v7->u.mouseEntry.WheelScrollDelta = v4;
  v7->u.mouseEntry.PosY = y;
  v7->u.mouseEntry.ButtonsState = 0;
  v7->u.mouseEntry.Flags = 32;
}

void __fastcall Scaleform::GFx::InputEventsQueue::AddStatusEvent(
        Scaleform::GFx::InputEventsQueue *this,
        Scaleform::String *code,
        Scaleform::String *level,
        Scaleform::String *extensionId,
        Scaleform::String *contextId)
{
  Scaleform::GFx::InputEventsQueueEntry *v8; // rax

  v8 = Scaleform::GFx::InputEventsQueue::AddEmptyQueueEntry(this);
  v8->t = QE_Status;
  v8->u.statusEntry.Code = code;
  v8->u.statusEntry.ExtensionId = extensionId;
  v8->u.statusEntry.Level = level;
  v8->u.statusEntry.ContextId = contextId;
}

unsigned __int8 __fastcall Scaleform::GFx::EventId::ConvertKeyCodeToAscii(Scaleform::GFx::EventId *this)
{
  char v1; // dl
  unsigned int KeyCode; // ecx
  __int64 v3; // rcx
  __int64 v5; // rcx

  v1 = this->KeysState.States & 1;
  if ( (this->KeysState.States & 8) != 0 )
    v1 = !(this->KeysState.States & 1);
  KeyCode = this->KeyCode;
  if ( KeyCode - 32 > 0x4F )
  {
    if ( KeyCode - 186 > 0x24 )
    {
      return 0;
    }
    else
    {
      v5 = KeyCode - 186;
      if ( v1 )
        return asciiShift2[v5];
      else
        return ascii2[v5];
    }
  }
  else
  {
    v3 = KeyCode - 32;
    if ( v1 )
      return asciiShift1[v3];
    else
      return ascii1[v3];
  }
}

__int64 __fastcall Scaleform::GFx::EventId::ConvertToButtonKeyCode(Scaleform::GFx::EventId *this)
{
  unsigned int v1; // er8
  __int64 result; // rax
  unsigned __int8 AsciiCode; // al

  v1 = 0;
  switch ( this->KeyCode )
  {
    case 8u:
      result = 8i64;
      break;
    case 9u:
      result = 18i64;
      break;
    case 0xDu:
      result = 13i64;
      break;
    case 0x1Bu:
      result = 19i64;
      break;
    case 0x21u:
      result = 16i64;
      break;
    case 0x22u:
      result = 17i64;
      break;
    case 0x23u:
      result = 4i64;
      break;
    case 0x24u:
      result = 3i64;
      break;
    case 0x25u:
      result = 1i64;
      break;
    case 0x26u:
      result = 14i64;
      break;
    case 0x27u:
      result = 2i64;
      break;
    case 0x28u:
      result = 15i64;
      break;
    case 0x2Du:
      result = 5i64;
      break;
    case 0x2Eu:
      result = 6i64;
      break;
    default:
      AsciiCode = this->AsciiCode;
      if ( AsciiCode >= 0x20u )
        v1 = AsciiCode;
      result = v1;
      break;
  }
  return result;
}

Scaleform::GFx::InputEventsQueueEntry *__fastcall Scaleform::GFx::InputEventsQueue::GetEntry(
        Scaleform::GFx::InputEventsQueue *this)
{
  Scaleform::GFx::InputEventsQueueEntry *result; // rax
  unsigned int v3; // er9
  int v4; // er10
  unsigned __int64 v5; // rax
  unsigned __int64 UsedEntries; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  Scaleform::GFx::InputEventsQueueEntry *v9; // rdx
  unsigned __int64 StartPos; // rdx
  unsigned __int64 v11; // rcx

  result = (Scaleform::GFx::InputEventsQueueEntry *)this->UsedEntries;
  if ( result )
    goto LABEL_13;
  v3 = 0;
  v4 = 1;
  do
  {
    if ( (v4 & this->LastMousePosMask) != 0 )
    {
      if ( this->UsedEntries == 100 )
      {
        v5 = ++this->StartPos;
        this->UsedEntries = 99i64;
        if ( v5 == 100 )
          v5 = 0i64;
        this->StartPos = v5;
      }
      UsedEntries = this->UsedEntries;
      v7 = UsedEntries + this->StartPos;
      this->UsedEntries = UsedEntries + 1;
      v8 = v7 - 100;
      if ( v7 < 0x64 )
        v8 = v7;
      v9 = &this->Queue[v8];
      v9->t = QE_Mouse;
      v9->u.mouseEntry.MouseIndex = v3;
      v9->u.keyEntry.WcharCode = LODWORD(this->LastMousePos[v3].x);
      v9->u.keyEntry.Code = LODWORD(this->LastMousePos[v3].y);
      v9->u.mouseEntry.ButtonsState = 0;
      v9->u.mouseEntry.Flags = 64;
      this->LastMousePosMask &= ~v4;
    }
    ++v3;
    v4 *= 2;
  }
  while ( v3 < 6 );
  result = (Scaleform::GFx::InputEventsQueueEntry *)this->UsedEntries;
  if ( result )
  {
LABEL_13:
    StartPos = this->StartPos;
    this->UsedEntries = (unsigned __int64)&result[-1].u.statusEntry + 71;
    v11 = StartPos + 1;
    if ( StartPos == 99 )
      v11 = 0i64;
    result = &this->Queue[StartPos];
    this->StartPos = v11;
  }
  return result;
}

Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *__fastcall Scaleform::GFx::MouseState::GetMouseButtonDownEntity(
        Scaleform::GFx::MouseState *this,
        Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *result,
        unsigned int buttonIdx)
{
  Scaleform::GFx::InteractiveObject *v5; // rbx
  Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject> *v6; // rsi
  Scaleform::WeakPtrProxy *pObject; // rdx
  Scaleform::RefCountWeakSupportImpl *v8; // rax
  int RefCount; // eax

  if ( buttonIdx < this->MouseButtonDownEntities.Data.Size )
  {
    v5 = 0i64;
    v6 = &this->MouseButtonDownEntities.Data.Data[buttonIdx];
    pObject = v6->pProxy.pObject;
    if ( v6->pProxy.pObject )
    {
      v8 = pObject->pObject;
      if ( v8 )
      {
        v5 = (Scaleform::GFx::InteractiveObject *)pObject->pObject;
        RefCount = v8->RefCount;
        if ( RefCount )
        {
          v5->RefCount = RefCount + 1;
          ++v5->RefCount;
        }
        else
        {
          v5 = 0i64;
        }
      }
      else
      {
        if ( pObject->RefCount-- == 1 )
          ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        v6->pProxy.pObject = 0i64;
      }
    }
    result->pObject = v5;
    if ( v5 )
      Scaleform::RefCountNTSImpl::Release(v5);
    return result;
  }
  else
  {
    result->pObject = 0i64;
    return result;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::Text::LineBuffer::Line *,Scaleform::AllocatorLH<Scaleform::Render::Text::LineBuffer::Line *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Render::TextureFormat *,Scaleform::AllocatorLH<Scaleform::Render::TextureFormat *,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::Render::TextureFormat **Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::Render::TextureFormat **v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      v7 = 8 * v6;
      if ( Data )
      {
        v8 = (Scaleform::Render::TextureFormat **)Scaleform::Memory::pGlobalHeap->Realloc(
                                                    Scaleform::Memory::pGlobalHeap,
                                                    Data,
                                                    v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 2;
      this->Data = (Scaleform::Render::TextureFormat **)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
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

void __fastcall Scaleform::GFx::MouseState::ResetState(Scaleform::GFx::MouseState *this)
{
  *((_BYTE *)this + 76) &= 0xE0u;
  *(_QWORD *)&this->CursorType = 0i64;
  *(_QWORD *)&this->CurButtonsState = 0i64;
  this->LastPosition = 0i64;
  this->mPresetCursorType = -1;
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorLH<Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,Scaleform::AllocatorLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v7; // rsi
  Scaleform::WeakPtr<Scaleform::GFx::DisplayObject> *i; // rbx
  Scaleform::WeakPtrProxy *pObject; // rdx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::Render::Text::LineBuffer::Line *,Scaleform::AllocatorLH<Scaleform::Render::Text::LineBuffer::Line *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::Render::TextureFormat *,Scaleform::AllocatorLH<Scaleform::Render::TextureFormat *,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    v7 = Size - newSize;
    for ( i = &this->Data[newSize - 1 + v7]; v7; --v7 )
    {
      pObject = i->pProxy.pObject;
      if ( i->pProxy.pObject )
      {
        if ( pObject->RefCount-- == 1 )
          ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      }
      --i;
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::Text::LineBuffer::Line *,Scaleform::AllocatorLH<Scaleform::Render::Text::LineBuffer::Line *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::Render::TextureFormat *,Scaleform::AllocatorLH<Scaleform::Render::TextureFormat *,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::GFx::MouseState::SetMouseButtonDownEntity(
        Scaleform::GFx::MouseState *this,
        unsigned int buttonIdx,
        Scaleform::GFx::InteractiveObject *pch)
{
  __int64 v4; // r15
  unsigned __int64 Size; // rsi
  unsigned __int64 v7; // rbx
  Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject> *v8; // rcx
  unsigned __int64 i; // rbx
  Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject> *v10; // rbx
  Scaleform::WeakPtrProxy *WeakProxy; // rax
  Scaleform::WeakPtrProxy *pObject; // rdx
  Scaleform::WeakPtrProxy *v13; // rdi
  bool v14; // zf
  Scaleform::WeakPtrProxy *v15; // rdx

  v4 = buttonIdx;
  if ( buttonIdx >= this->MouseButtonDownEntities.Data.Size )
  {
    Size = this->MouseButtonDownEntities.Data.Size;
    v7 = buttonIdx + 1;
    Scaleform::ArrayDataBase<Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorLH<Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
      (Scaleform::ArrayDataBase<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,Scaleform::AllocatorLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2>,Scaleform::ArrayDefaultPolicy> *)&this->MouseButtonDownEntities,
      &this->MouseButtonDownEntities,
      v7);
    if ( v7 > Size )
    {
      v8 = &this->MouseButtonDownEntities.Data.Data[Size];
      for ( i = v7 - Size; i; --i )
      {
        if ( v8 )
          v8->pProxy.pObject = 0i64;
        ++v8;
      }
    }
  }
  v10 = &this->MouseButtonDownEntities.Data.Data[v4];
  if ( pch )
  {
    WeakProxy = Scaleform::RefCountWeakSupportImpl::CreateWeakProxy(pch);
    pObject = v10->pProxy.pObject;
    v13 = WeakProxy;
    if ( v10->pProxy.pObject )
    {
      v14 = pObject->RefCount-- == 1;
      if ( v14 )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    }
    v10->pProxy.pObject = v13;
  }
  else
  {
    v15 = v10->pProxy.pObject;
    if ( v10->pProxy.pObject )
    {
      v14 = v15->RefCount-- == 1;
      if ( v14 )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    }
    v10->pProxy.pObject = 0i64;
  }
}

void __fastcall Scaleform::GFx::MouseState::UpdateState(
        Scaleform::GFx::MouseState *this,
        const Scaleform::GFx::InputEventsQueueEntry *qe)
{
  char v3; // r9
  unsigned int CurButtonsState; // ecx
  unsigned __int16 ButtonsState; // ax
  signed __int8 KeyIsDown; // r10
  int v7; // eax
  char v8; // r9
  float PosY; // xmm1_4

  *((_BYTE *)this + 76) |= 0x10u;
  v3 = *((_BYTE *)this + 76);
  CurButtonsState = this->CurButtonsState;
  this->PrevButtonsState = CurButtonsState;
  ButtonsState = qe->u.mouseEntry.ButtonsState;
  if ( ButtonsState )
  {
    KeyIsDown = qe->u.keyEntry.KeyIsDown;
    if ( (KeyIsDown & 0x40) != 0 || KeyIsDown >= 0 )
      v7 = CurButtonsState | ButtonsState;
    else
      v7 = CurButtonsState & ~ButtonsState;
    this->CurButtonsState = v7;
  }
  if ( (qe->u.mouseEntry.Flags & 0x20) != 0 )
    this->WheelDelta = qe->u.mouseEntry.WheelScrollDelta;
  else
    this->WheelDelta = 0;
  if ( qe->u.accelerometerEntry.IdAcc == SLODWORD(this->LastPosition.x)
    && qe->u.keyEntry.Code == SLODWORD(this->LastPosition.y) )
  {
    v8 = v3 & 0xF7;
  }
  else
  {
    v8 = v3 | 8;
  }
  *((_BYTE *)this + 76) = v8;
  PosY = qe->u.mouseEntry.PosY;
  LODWORD(this->LastPosition.x) = qe->u.keyEntry.WcharCode;
  this->LastPosition.y = PosY;
}

