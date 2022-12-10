#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_point3.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_input.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_interactiveobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asmovierootbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_assoundintf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_taskmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asutils.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imageresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_moviedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_autoptr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontcompactor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_pathdatastorage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagecreator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"

void Scaleform::GFx::KeyboardState::KeyQueue::Put(short code, unsigned char ascii, unsigned long wcharCode, Scaleform::GFx::Event::EventType event, Scaleform::KeyModifiers specialKeysState); // 0x140328160
Scaleform::GFx::KeyboardState::KeyboardState(); // 0x140327FB0
void Scaleform::GFx::KeyboardState::ResetState(); // 0x1403281E0
Scaleform::KeyModifiers Scaleform::GFx::KeyboardState::GetKeyModifiers(); // 0x1403280C0
void Scaleform::GFx::KeyboardState::SetKeyToggled(long code, bool toggle); // 0x1403282B0
void Scaleform::GFx::KeyboardState::SetKeyDown(long code, unsigned char ascii, Scaleform::KeyModifiers mods, bool putInQueue); // 0x140328240
void Scaleform::GFx::KeyboardState::SetKeyUp(long code, unsigned char ascii, Scaleform::KeyModifiers mods, bool putInQueue); // 0x1403282E0
void Scaleform::GFx::KeyboardState::NotifyListeners(Scaleform::GFx::InteractiveObject * pmovie, const Scaleform::GFx::EventId & evt, long keyMask); // 0x140328130
void Scaleform::GFx::KeyboardState::SetListener(Scaleform::GFx::KeyboardState::IListener * listener); // 0x1404A8C00void __fastcall Scaleform::GFx::KeyboardState::KeyboardState(Scaleform::GFx::KeyboardState *this)
{
  __int64 v2; // rdx
  Scaleform::GFx::KeyboardState::KeyQueue *p_KeyQueue; // rcx
  Scaleform::KeyModifiers *p_keyMods; // rax

  this->__vftable = (Scaleform::GFx::KeyboardState_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  v2 = 100i64;
  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::KeyboardState_vtbl *)&Scaleform::GFx::KeyboardState::`vftable';
  p_KeyQueue = &this->KeyQueue;
  p_keyMods = &p_KeyQueue->Buffer[0].keyMods;
  do
  {
    p_keyMods->States = 0;
    p_keyMods += 16;
    --v2;
  }
  while ( v2 );
  *(_QWORD *)&p_KeyQueue->PutIdx = 0i64;
  p_KeyQueue->Count = 0;
  memset(p_KeyQueue, 0, 0x640ui64);
  this->pListener = 0i64;
  this->KeyboardIndex = 0;
  *(_QWORD *)this->Keymap = 0i64;
  *(_QWORD *)&this->Keymap[8] = 0i64;
  *(_QWORD *)&this->Keymap[16] = 0i64;
  *(_DWORD *)&this->Keymap[24] = 0;
  this->Keymap[28] = 0;
  *(_WORD *)this->Toggled = 0;
  this->Toggled[2] = 0;
}

Scaleform::KeyModifiers *__fastcall Scaleform::GFx::KeyboardState::GetKeyModifiers(
        Scaleform::GFx::KeyboardState *this,
        Scaleform::KeyModifiers *result)
{
  unsigned __int8 v2; // r8
  Scaleform::KeyModifiers *v3; // rax

  v2 = this->Keymap[2];
  result->States = 0;
  result->States = v2 & 4;
  if ( (v2 & 2) != 0 )
    result->States |= 2u;
  else
    result->States &= ~2u;
  if ( (v2 & 1) != 0 )
    result->States |= 1u;
  else
    result->States &= ~1u;
  if ( this->Toggled[0] )
    result->States |= 0x10u;
  else
    result->States &= ~0x10u;
  if ( this->Toggled[1] )
    result->States |= 8u;
  else
    result->States &= ~8u;
  v3 = result;
  if ( this->Toggled[2] )
    result->States |= 0x20u;
  else
    result->States &= ~0x20u;
  return v3;
}

void __fastcall Scaleform::GFx::KeyboardState::NotifyListeners(
        Scaleform::GFx::KeyboardState *this,
        Scaleform::GFx::InteractiveObject *pmovie,
        const Scaleform::GFx::EventId *evt,
        __int64 keyMask)
{
  Scaleform::GFx::KeyboardState::IListener *pListener; // rcx

  pListener = this->pListener;
  if ( pListener )
  {
    if ( evt->Id == 64 )
    {
      pListener->OnKeyDown(pListener, pmovie, evt, keyMask);
    }
    else if ( evt->Id == 128 )
    {
      pListener->OnKeyUp(pListener, pmovie, evt, keyMask);
    }
  }
}

void __fastcall Scaleform::GFx::KeyboardState::KeyQueue::Put(
        Scaleform::GFx::KeyboardState::KeyQueue *this,
        __int16 code,
        unsigned __int8 ascii,
        unsigned int wcharCode,
        Scaleform::GFx::Event::EventType event,
        Scaleform::KeyModifiers specialKeysState)
{
  unsigned int PutIdx; // eax

  if ( this->Count < 0x64 )
  {
    this->Buffer[this->PutIdx].code = code;
    this->Buffer[this->PutIdx].ascii = ascii;
    this->Buffer[this->PutIdx].wcharCode = wcharCode;
    this->Buffer[this->PutIdx].event = event;
    this->Buffer[this->PutIdx++].keyMods = specialKeysState;
    PutIdx = this->PutIdx;
    if ( PutIdx >= 0x64 )
      PutIdx = 0;
    ++this->Count;
    this->PutIdx = PutIdx;
  }
}

void __fastcall Scaleform::GFx::KeyboardState::ResetState(Scaleform::GFx::KeyboardState *this)
{
  Scaleform::GFx::KeyboardState::KeyQueue *p_KeyQueue; // rcx

  p_KeyQueue = &this->KeyQueue;
  *(_QWORD *)&p_KeyQueue->PutIdx = 0i64;
  p_KeyQueue->Count = 0;
  memset(p_KeyQueue, 0, 0x640ui64);
  *(_QWORD *)this->Keymap = 0i64;
  *(_QWORD *)&this->Keymap[8] = 0i64;
  *(_QWORD *)&this->Keymap[16] = 0i64;
  *(_DWORD *)&this->Keymap[24] = 0;
  this->Keymap[28] = 0;
  *(_WORD *)this->Toggled = 0;
  this->Toggled[2] = 0;
}

void __fastcall Scaleform::GFx::KeyboardState::SetKeyDown(
        Scaleform::GFx::KeyboardState *this,
        int code,
        unsigned __int8 ascii,
        Scaleform::KeyModifiers mods,
        bool putInQueue)
{
  if ( (unsigned int)code <= 0xE4 )
  {
    this->Keymap[code >> 3] |= 1 << (code - 8 * (code >> 3));
    if ( putInQueue )
      Scaleform::GFx::KeyboardState::KeyQueue::Put(&this->KeyQueue, code, ascii, 0, KeyDown, mods);
  }
}

void __fastcall Scaleform::GFx::KeyboardState::SetKeyToggled(
        Scaleform::GFx::KeyboardState *this,
        int code,
        bool toggle)
{
  int v3; // edx
  int v4; // edx

  v3 = code - 20;
  if ( v3 )
  {
    v4 = v3 - 124;
    if ( v4 )
    {
      if ( v4 == 1 )
        this->Toggled[2] = toggle;
    }
    else
    {
      this->Toggled[0] = toggle;
    }
  }
  else
  {
    this->Toggled[1] = toggle;
  }
}

void __fastcall Scaleform::GFx::KeyboardState::SetKeyUp(
        Scaleform::GFx::KeyboardState *this,
        int code,
        unsigned __int8 ascii,
        Scaleform::KeyModifiers mods,
        bool putInQueue)
{
  if ( (unsigned int)code <= 0xE4 )
  {
    this->Keymap[code >> 3] &= ~(1 << (code - 8 * (code >> 3)));
    if ( putInQueue )
      Scaleform::GFx::KeyboardState::KeyQueue::Put(&this->KeyQueue, code, ascii, 0, KeyUp, mods);
  }
}

void __fastcall Scaleform::GFx::KeyboardState::SetListener(
        Scaleform::GFx::ASMovieRootBase *this,
        Scaleform::GFx::MovieImpl *pmovie)
{
  this->pMovieImpl = pmovie;
}

