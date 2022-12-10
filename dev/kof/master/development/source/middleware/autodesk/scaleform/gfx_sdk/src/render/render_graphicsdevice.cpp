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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_graphicsdevice.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

Scaleform::Render::GraphicsDeviceRecorder::GraphicsDeviceRecorder(); // 0x1406FC2E0
Scaleform::Render::GraphicsDeviceRecorder::~GraphicsDeviceRecorder(); // 0x1406FC390
bool Scaleform::Render::GraphicsDeviceRecorder::ExecuteRecording(Scaleform::Render::GraphicsDevice & playbackDevice); // 0x1406FC450
unsigned char * Scaleform::Render::GraphicsDeviceRecorder::alloc(unsigned long long size); // 0x1406FC550
void Scaleform::Render::GraphicsDeviceRecorder::free(const void * pointer); // 0x14002E7C0void __fastcall Scaleform::Render::GraphicsDeviceRecorder::GraphicsDeviceRecorder(
        Scaleform::Render::GraphicsDeviceRecorder *this)
{
  unsigned __int8 *v2; // rax
  unsigned __int64 ResourceBufferSize; // rdx
  unsigned __int8 *v4; // rax
  unsigned __int8 *CommandBuffer; // rcx

  this->CommandBufferSize = 0x10000;
  this->__vftable = (Scaleform::Render::GraphicsDeviceRecorder_vtbl *)&Scaleform::Render::GraphicsDeviceRecorder::`vftable';
  this->ResourceBufferSize = 0x100000;
  this->CommandBuffer = 0i64;
  this->CommandReadPointer = 0i64;
  this->CommandWritePointer = 0i64;
  this->ResourceBuffer = 0i64;
  this->ResourceWritePointer = 0i64;
  Scaleform::Lock::Lock(&this->BufferLock, 0);
  v2 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Alloc(
                            Scaleform::Memory::pGlobalHeap,
                            this->CommandBufferSize,
                            0i64);
  ResourceBufferSize = this->ResourceBufferSize;
  this->CommandBuffer = v2;
  v4 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Alloc(
                            Scaleform::Memory::pGlobalHeap,
                            ResourceBufferSize,
                            0i64);
  CommandBuffer = this->CommandBuffer;
  this->ResourceBuffer = v4;
  this->ResourceWritePointer = v4;
  this->CommandReadPointer = CommandBuffer;
  this->CommandWritePointer = CommandBuffer;
  this->StaleResourceBuffers[0] = 0i64;
  this->StaleResourceBuffers[1] = 0i64;
  this->StaleResourceBuffers[2] = 0i64;
  this->StaleResourceBuffers[3] = 0i64;
  this->StaleResourceBuffers[4] = 0i64;
  this->StaleResourceBuffers[5] = 0i64;
  this->StaleResourceBuffers[6] = 0i64;
  this->StaleResourceBuffers[7] = 0i64;
}

void __fastcall Scaleform::Render::GraphicsDeviceRecorder::~GraphicsDeviceRecorder(
        Scaleform::Render::GraphicsDeviceRecorder *this)
{
  this->__vftable = (Scaleform::Render::GraphicsDeviceRecorder_vtbl *)&Scaleform::Render::GraphicsDeviceRecorder::`vftable';
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->CommandBuffer);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->ResourceBuffer);
  Scaleform::Lock::~Lock(&this->BufferLock);
}

char __fastcall Scaleform::Render::GraphicsDeviceRecorder::ExecuteRecording(
        Scaleform::Render::GraphicsDeviceRecorder *this,
        Scaleform::Render::GraphicsDevice *playbackDevice)
{
  __int64 v2; // rbx
  unsigned __int8 *CommandBuffer; // rax
  signed __int64 v5; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *v7; // rdx
  unsigned __int8 *v8; // rax

  v2 = 0i64;
  CommandBuffer = this->CommandBuffer;
  this->CommandReadPointer = CommandBuffer;
  this->CommandWritePointer = CommandBuffer;
  for ( this->ResourceWritePointer = this->ResourceBuffer; this->StaleResourceBuffers[v2]; v2 = (unsigned int)(v2 + 1) )
  {
    if ( (unsigned int)v2 >= 8 )
      break;
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->StaleResourceBuffers[v2]);
  }
  this->StaleResourceBuffers[0] = 0i64;
  this->StaleResourceBuffers[1] = 0i64;
  this->StaleResourceBuffers[2] = 0i64;
  this->StaleResourceBuffers[3] = 0i64;
  this->StaleResourceBuffers[4] = 0i64;
  this->StaleResourceBuffers[5] = 0i64;
  this->StaleResourceBuffers[6] = 0i64;
  this->StaleResourceBuffers[7] = 0i64;
  v5 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v5 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = this->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    v7 = this->CommandBuffer;
    this->CommandBufferSize = CommandBufferSize;
    v8 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              v7,
                              CommandBufferSize);
    this->CommandBuffer = v8;
    this->CommandReadPointer = v8;
    this->CommandWritePointer = &v8[v5];
    Scaleform::Lock::Unlock(&this->BufferLock);
  }
  *(_DWORD *)this->CommandWritePointer = 32769;
  this->CommandWritePointer = this->CommandBuffer;
  return 1;
}

unsigned __int8 *__fastcall Scaleform::Render::GraphicsDeviceRecorder::alloc(
        Scaleform::Render::GraphicsDeviceRecorder *this,
        unsigned __int64 size)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v4; // rax
  unsigned __int8 *v5; // rax
  unsigned __int8 *result; // rax

  v2 = (size + 7) & 0xFFFFFFFFFFFFFFF8ui64;
  if ( (__int64)&this->ResourceBuffer[this->ResourceBufferSize - (unsigned __int64)this->ResourceWritePointer - v2] < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    LODWORD(v4) = 0;
    if ( this->StaleResourceBuffers[0] )
    {
      do
      {
        if ( (unsigned int)v4 >= 8 )
          break;
        v4 = (unsigned int)(v4 + 1);
      }
      while ( this->StaleResourceBuffers[v4] );
    }
    this->StaleResourceBuffers[(unsigned int)v4] = this->ResourceBuffer;
    LODWORD(v4) = this->ResourceBufferSize;
    do
      v4 = (unsigned int)(2 * v4);
    while ( v4 < v2 );
    this->ResourceBufferSize = v4;
    v5 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Alloc(
                              Scaleform::Memory::pGlobalHeap,
                              (unsigned int)v4,
                              0i64);
    this->ResourceBuffer = v5;
    this->ResourceWritePointer = v5;
    Scaleform::Lock::Unlock(&this->BufferLock);
  }
  result = this->ResourceWritePointer;
  this->ResourceWritePointer = &result[v2];
  return result;
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

