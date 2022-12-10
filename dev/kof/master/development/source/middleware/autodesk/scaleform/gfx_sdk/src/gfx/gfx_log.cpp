#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stackmempool.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_msgformat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_locale.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

void Scaleform::GFx::LogState::LogMessageVarg(Scaleform::LogMessageId messageType, const char * fmt, char * argList); // 0x1403200C0
void Scaleform::GFx::LogState::LogMessageByType(Scaleform::LogMessageId messageType, const char * pfmt, ...); // 0x140320090
Scaleform::Ptr<Scaleform::GFx::LogState> Scaleform::GFx::StateBag::GetLogState(); // 0x140320070
void Scaleform::GFx::StateBag::SetLog(Scaleform::Log * log); // 0x140320120
Scaleform::Ptr<Scaleform::Log> Scaleform::GFx::StateBag::GetLog(); // 0x140320010void __fastcall Scaleform::MsgFormat::FormatD1<long>(Scaleform::MsgFormat *this, const int *v)
{
  Scaleform::StackMemPool<512,8,Scaleform::MemPoolImmediateFree> *p_MemPool; // rdi
  char *BuffPtr; // r9
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  Scaleform::MemoryHeap *pHeap; // rcx
  Scaleform::Formatter *v9; // rax

  if ( Scaleform::MsgFormat::NextFormatter(this) )
  {
    p_MemPool = &this->MemPool;
    do
    {
      if ( this->MemPool.BuffSize < 0x60 )
      {
        pHeap = p_MemPool->pHeap;
        if ( !p_MemPool->pHeap )
          pHeap = Scaleform::Memory::pGlobalHeap;
        BuffPtr = (char *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64, __int64))pHeap->Alloc)(
                            pHeap,
                            96i64,
                            8i64);
      }
      else
      {
        BuffPtr = this->MemPool.BuffPtr;
        this->MemPool.BuffPtr = (char *)(((unsigned __int64)(BuffPtr + 95) & 0xFFFFFFFFFFFFFFF8ui64) + 8);
        v6 = ((unsigned __int64)(BuffPtr + 95) & 0xFFFFFFFFFFFFFFF8ui64) - (_QWORD)p_MemPool;
        v7 = 512 - v6;
        if ( v6 >= 0x200 )
          v7 = 0i64;
        this->MemPool.BuffSize = v7;
      }
      if ( BuffPtr )
        Scaleform::LongFormatter::LongFormatter((Scaleform::LongFormatter *)BuffPtr, this, *v);
      else
        v9 = 0i64;
      Scaleform::MsgFormat::Bind(this, v9, 1);
    }
    while ( Scaleform::MsgFormat::NextFormatter(this) );
  }
  ++this->FirstArgNum;
}

void __fastcall Scaleform::GFx::LogState::LogState(Scaleform::GFx::LogState *this, Scaleform::Log *log)
{
  this->SType = State_Scale9;
  this->Scaleform::GFx::State::Scaleform::RefCountBase<Scaleform::GFx::State,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::GFx::LogState_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->Scaleform::GFx::State::Scaleform::RefCountBase<Scaleform::GFx::State,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::GFx::LogState_vtbl *)&Scaleform::GFx::LogState::`vftable'{for `Scaleform::GFx::State'};
  this->Scaleform::GFx::LogBase<Scaleform::GFx::LogState>::__vftable = (Scaleform::GFx::LogBase<Scaleform::GFx::LogState>_vtbl *)&Scaleform::GFx::LogState::`vftable'{for `Scaleform::GFx::LogBase<Scaleform::GFx::LogState>'};
  this->RefCount = 1;
  if ( log )
  {
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)log);
    this->pLog.pObject = log;
  }
  else
  {
    this->pLog.pObject = 0i64;
  }
}

Scaleform::Ptr<Scaleform::Log> *__fastcall Scaleform::GFx::StateBag::GetLog(
        Scaleform::GFx::StateBag *this,
        Scaleform::Ptr<Scaleform::Log> *result)
{
  Scaleform::RefCountVImpl *v3; // rbx
  Scaleform::RefCountVImpl *GlobalLog; // rdi

  v3 = (Scaleform::RefCountVImpl *)this->GetStateAddRef(this, 2i64);
  GlobalLog = (Scaleform::RefCountVImpl *)v3[2].__vftable;
  if ( GlobalLog || (GlobalLog = (Scaleform::RefCountVImpl *)Scaleform::Log::GetGlobalLog()) != 0i64 )
    Scaleform::Render::RenderBuffer::AddRef(GlobalLog);
  result->pObject = (Scaleform::Log *)GlobalLog;
  Scaleform::RefCountImpl::Release(v3);
  return result;
}

Scaleform::Ptr<Scaleform::GFx::LogState> *__fastcall Scaleform::GFx::StateBag::GetLogState(
        Scaleform::GFx::StateBag *this,
        Scaleform::Ptr<Scaleform::GFx::LogState> *result)
{
  result->pObject = (Scaleform::GFx::LogState *)this->GetStateAddRef(this, 2i64);
  return result;
}

char __fastcall Scaleform::Render::BlendModeEffect::canCacheAcrossTransform(const bool __formal)
{
  return 1;
}

void Scaleform::Log::LogMessageById(Scaleform::Log *this, int *messageId, const char *pfmt, ...)
{
  int v3[6]; // [rsp+20h] [rbp-18h] BYREF
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, pfmt);
  v3[0] = *messageId;
  ((void (__fastcall *)(Scaleform::Log *, int *, const char *, __int64 *))this->LogMessageVarg)(
    this,
    v3,
    pfmt,
    (__int64 *)va);
}

void __fastcall Scaleform::GFx::LogState::LogMessageVarg(
        Scaleform::GFx::LogState *this,
        int *messageType,
        const char *fmt,
        char *argList)
{
  Scaleform::Log *pObject; // rcx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  pObject = this->pLog.pObject;
  if ( pObject || (pObject = Scaleform::Log::GetGlobalLog()) != 0i64 )
  {
    v8 = *messageType;
    ((void (__fastcall *)(Scaleform::Log *, int *, const char *, char *))pObject->LogMessageVarg)(
      pObject,
      &v8,
      fmt,
      argList);
  }
}

void __fastcall Scaleform::GFx::StateBag::SetLog(Scaleform::GFx::StateBag *this, Scaleform::Log *log)
{
  Scaleform::GFx::LogState *v4; // rax
  Scaleform::GFx::State *v5; // rax
  Scaleform::GFx::State *v6; // rbx

  v4 = (Scaleform::GFx::LogState *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                     Scaleform::Memory::pGlobalHeap,
                                     40i64);
  if ( v4 )
  {
    Scaleform::GFx::LogState::LogState(v4, log);
    v6 = v5;
  }
  else
  {
    v6 = 0i64;
  }
  this->SetState(this, State_Scale9, v6);
  if ( v6 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v6);
}

