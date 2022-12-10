#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

Scaleform::Render::RenderQueue::RenderQueue(); // 0x14039AAC0
Scaleform::Render::RenderQueue::~RenderQueue(); // 0x14039AB80
bool Scaleform::Render::RenderQueue::Initialize(unsigned long long itemCount); // 0x14039AC80
Scaleform::Render::RenderQueueItem * Scaleform::Render::RenderQueue::ReserveHead(); // 0x14039AE30
Scaleform::Render::RenderQueueProcessor::RenderQueueProcessor(Scaleform::Render::RenderQueue & queue, Scaleform::Render::HAL * hal); // 0x14039AAE0
Scaleform::Render::RenderQueueProcessor::~RenderQueueProcessor(); // 0x14002E7C0
void Scaleform::Render::RenderQueueProcessor::BeginFrame(); // 0x14039ABB0
void Scaleform::Render::RenderQueueProcessor::Flush(); // 0x14039AC00
void Scaleform::Render::RenderQueueProcessor::drawProcessedPrimitives(); // 0x14039AED0
void Scaleform::Render::RenderQueueProcessor::ProcessQueue(Scaleform::Render::RenderQueueProcessor::QueueProcessMode mode); // 0x14039AD00void __fastcall Scaleform::Render::RenderQueue::RenderQueue(Scaleform::Render::RenderQueue *this)
{
  this->QueueSize = 0;
  this->pQueue = 0i64;
  *(_QWORD *)&this->QueueHead = 0i64;
  this->HeadReserved = 0;
}

void __fastcall Scaleform::Render::RenderQueueProcessor::RenderQueueProcessor(
        Scaleform::Render::RenderQueueProcessor *this,
        Scaleform::Render::RenderQueue *queue,
        Scaleform::Render::HAL *hal)
{
  this->pHAL = hal;
  this->Caches.LockFlags = 0;
  this->Caches.pCaches[0] = 0i64;
  this->Caches.pCaches[1] = 0i64;
  this->Queue = queue;
  *(_QWORD *)&this->QueueMode = 0i64;
  this->QueueEmitFilter = QPF_All;
  this->CurrentItem.pQueue = 0i64;
  this->CurrentItem.QueuePos = 0;
  memset(&this->72, 0, sizeof(this->72));
  *(_QWORD *)&this->EmitItemBufferBytes[8] = 0i64;
  *(_QWORD *)&this->EmitItemBufferBytes[16] = 0i64;
  *(_QWORD *)&this->EmitItemBufferBytes[24] = 0i64;
  *(_QWORD *)&this->EmitItemBufferBytes[32] = 0i64;
  *(_QWORD *)&this->EmitItemBufferBytes[40] = 0i64;
  *(_QWORD *)&this->EmitItemBufferBytes[48] = 0i64;
  *(_QWORD *)&this->EmitItemBufferBytes[56] = 0i64;
  this->PrepareItemBuffer.pItem = 0i64;
  this->EmitItemBuffer.pItem = 0i64;
}

void __fastcall Scaleform::Render::RenderQueue::~RenderQueue(Scaleform::Render::RenderQueue *this)
{
  if ( this->pQueue )
  {
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    this->pQueue = 0i64;
  }
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall Scaleform::Render::RenderQueueProcessor::BeginFrame(Scaleform::Render::RenderQueueProcessor *this)
{
  Scaleform::Render::MeshCache *v2; // rbx
  Scaleform::Render::RenderQueue *Queue; // rax
  unsigned int QueueTail; // ecx

  v2 = this->pHAL->GetMeshCache(this->pHAL);
  this->QueueMode = (__int64)v2->GetQueueMode(v2);
  Scaleform::Render::MeshCache::SetRQCacheInterface(v2, &this->Caches);
  Queue = this->Queue;
  QueueTail = Queue->QueueTail;
  this->CurrentItem.pQueue = Queue;
  this->CurrentItem.QueuePos = QueueTail;
}

void __fastcall Scaleform::Render::RenderQueueProcessor::Flush(Scaleform::Render::RenderQueueProcessor *this)
{
  Scaleform::Render::RenderQueueProcessor::ProcessQueue(this, QPM_All);
  memset(&this->72, 0, sizeof(this->72));
  *(_QWORD *)&this->EmitItemBufferBytes[8] = 0i64;
  *(_QWORD *)&this->EmitItemBufferBytes[16] = 0i64;
  *(_QWORD *)&this->EmitItemBufferBytes[24] = 0i64;
  *(_QWORD *)&this->EmitItemBufferBytes[32] = 0i64;
  *(_QWORD *)&this->EmitItemBufferBytes[40] = 0i64;
  *(_QWORD *)&this->EmitItemBufferBytes[48] = 0i64;
  *(_QWORD *)&this->EmitItemBufferBytes[56] = 0i64;
  this->PrepareItemBuffer.pItem = 0i64;
  this->EmitItemBuffer.pItem = 0i64;
}

char __fastcall Scaleform::Render::RenderQueue::Initialize(
        Scaleform::Render::RenderQueue *this,
        unsigned __int64 itemCount)
{
  unsigned int v2; // edi
  Scaleform::Render::RenderQueueItem *v5; // rax
  unsigned int v6; // eax
  __int64 v7; // rcx
  Scaleform::Render::RenderQueueItem *v8; // rcx

  v2 = itemCount;
  if ( itemCount < 2 )
    return 0;
  v5 = (Scaleform::Render::RenderQueueItem *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                               Scaleform::Memory::pGlobalHeap,
                                               this,
                                               16 * itemCount,
                                               0i64);
  this->pQueue = v5;
  this->QueueSize = v2;
  if ( !v5 )
    return 0;
  v6 = 0;
  if ( v2 )
  {
    do
    {
      v7 = v6++;
      v8 = &this->pQueue[v7];
      v8->pImpl = 0i64;
      v8->Data = 0i64;
    }
    while ( v6 < this->QueueSize );
  }
  return 1;
}

void __fastcall Scaleform::Render::RenderQueueProcessor::ProcessQueue(
        Scaleform::Render::RenderQueueProcessor *this,
        Scaleform::Render::RenderQueueProcessor::QueueProcessMode mode)
{
  unsigned __int8 v4; // di
  Scaleform::Render::RenderQueueItem *v5; // rsi
  Scaleform::Render::RenderQueueItem::QIPrepareResult i; // eax
  unsigned __int8 v7; // r8
  unsigned int QueuePos; // edx

  v4 = 0;
  if ( mode )
  {
    if ( this->QueueMode )
    {
      if ( this->Caches.LockFlags )
        Scaleform::Render::RQCacheInterface::UnlockCaches(&this->Caches);
    }
    else
    {
      v4 = 1;
    }
  }
  if ( this->CurrentItem.QueuePos != this->Queue->QueueHead )
  {
    do
    {
      v5 = &this->CurrentItem.pQueue->pQueue[this->CurrentItem.QueuePos];
      for ( i = v5->pImpl->Prepare(v5->pImpl, v5, this, v4); i; i = v5->pImpl->Prepare(v5->pImpl, v5, this, v4) )
      {
        if ( i == QIP_NeedCache )
          v4 = 1;
        Scaleform::Render::RenderQueueProcessor::drawProcessedPrimitives(this);
      }
      v7 = 0;
      if ( mode != QPM_One )
        v7 = v4;
      ++this->CurrentItem.QueuePos;
      v4 = v7;
      QueuePos = this->CurrentItem.QueuePos;
      if ( QueuePos == this->CurrentItem.pQueue->QueueSize )
        QueuePos = 0;
      this->CurrentItem.QueuePos = QueuePos;
    }
    while ( QueuePos != this->Queue->QueueHead );
  }
  if ( this->QueueMode != QM_ExtendLocks || !this->Caches.LockFlags )
    Scaleform::Render::RenderQueueProcessor::drawProcessedPrimitives(this);
}

Scaleform::Render::RenderQueueItem *__fastcall Scaleform::Render::RenderQueue::ReserveHead(
        Scaleform::Render::RenderQueue *this)
{
  __int64 QueueHead; // r9
  unsigned int QueueTail; // edx

  QueueHead = this->QueueHead;
  QueueTail = this->QueueTail;
  if ( (unsigned int)QueueHead > QueueTail )
  {
    if ( QueueTail + this->QueueSize == (_DWORD)QueueHead + 1 )
      return 0i64;
  }
  else if ( QueueTail - (_DWORD)QueueHead == 1 )
  {
    return 0i64;
  }
  this->HeadReserved = 1;
  return &this->pQueue[QueueHead];
}

void __fastcall Scaleform::Render::RQCacheInterface::UnlockCaches(Scaleform::Render::RQCacheInterface *this)
{
  unsigned int *p_LockFlags; // rbp
  int v2; // ebx
  Scaleform::Render::RQCacheInterface *v3; // rdi
  __int64 v4; // rsi

  p_LockFlags = &this->LockFlags;
  v2 = 1;
  v3 = this;
  v4 = 2i64;
  do
  {
    if ( (v2 & *p_LockFlags) != 0 )
    {
      if ( v3->pCaches[0] )
        v3->pCaches[0]->UnlockBuffers(v3->pCaches[0]);
    }
    v2 = __ROL4__(v2, 1);
    v3 = (Scaleform::Render::RQCacheInterface *)((char *)v3 + 8);
    --v4;
  }
  while ( v4 );
}

void __fastcall Scaleform::Render::RenderQueueProcessor::drawProcessedPrimitives(
        Scaleform::Render::RenderQueueProcessor *this)
{
  Scaleform::Render::RenderQueue *Queue; // rdi
  unsigned int i; // eax
  Scaleform::Render::RenderQueueItem *v4; // rdx
  Scaleform::Render::RenderQueueItem *v5; // rax
  Scaleform::Render::RenderQueueItem *v6; // rdx

  Queue = this->Queue;
  if ( this->Caches.LockFlags )
    Scaleform::Render::RQCacheInterface::UnlockCaches(&this->Caches);
  for ( i = Queue->QueueTail; i != this->CurrentItem.QueuePos; i = Queue->QueueTail )
  {
    v4 = &Queue->pQueue[i];
    v4->pImpl->EmitToHAL(v4->pImpl, v4, this);
    v5 = &Queue->pQueue[Queue->QueueTail];
    v5->pImpl = 0i64;
    v5->Data = 0i64;
    if ( ++Queue->QueueTail == Queue->QueueSize )
      Queue->QueueTail = 0;
  }
  if ( this->CurrentItem.QueuePos != Queue->QueueHead )
  {
    v6 = &Queue->pQueue[Queue->QueueTail];
    v6->pImpl->EmitToHAL(v6->pImpl, v6, this);
  }
  memset(&this->72, 0, sizeof(this->72));
  *(_QWORD *)&this->EmitItemBufferBytes[8] = 0i64;
  *(_QWORD *)&this->EmitItemBufferBytes[16] = 0i64;
  *(_QWORD *)&this->EmitItemBufferBytes[24] = 0i64;
  *(_QWORD *)&this->EmitItemBufferBytes[32] = 0i64;
  *(_QWORD *)&this->EmitItemBufferBytes[40] = 0i64;
  *(_QWORD *)&this->EmitItemBufferBytes[48] = 0i64;
  *(_QWORD *)&this->EmitItemBufferBytes[56] = 0i64;
  this->PrepareItemBuffer.pItem = 0i64;
  this->EmitItemBuffer.pItem = 0i64;
}

