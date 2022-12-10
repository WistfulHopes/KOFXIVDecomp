#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_events.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"

unsigned long Scaleform::Render::DICommand::GetRenderCaps(); // 0x1403C3AE0
bool Scaleform::Render::DICommand::ExecuteSWOnAddCommand(Scaleform::Render::DrawableImage * i); // 0x1403C3960
void Scaleform::Render::DICommand::ExecuteRT(Scaleform::Render::DICommandContext & context); // 0x1403C3860
bool Scaleform::Render::DICommand::executeSWHelper(Scaleform::Render::DICommandContext & context, Scaleform::Render::DrawableImage * di, Scaleform::Render::DISourceImages & images, unsigned long imageCount); // 0x1403C3DD0
Scaleform::Render::DICommandQueue::DICommandQueue(Scaleform::Render::DrawableImageContext * dicontext); // 0x1403C28C0
Scaleform::Render::DICommandQueue::~DICommandQueue(); // 0x1403C29E0
void * Scaleform::Render::DICommandQueue::allocCommandFromPage(unsigned long size, Scaleform::Lock * locked); // 0x1403C3C60
Scaleform::Render::DIQueuePage * Scaleform::Render::DICommandQueue::allocPage(); // 0x1403C3D10
void Scaleform::Render::DICommandQueue::updateCPUModifiedImagesRT(); // 0x1403C3FA0
void Scaleform::Render::DICommandQueue::updateGPUModifiedImagesRT(); // 0x1403C4080
void Scaleform::Render::DICommandQueue::OnCapture(); // 0x1403C3B70
void Scaleform::Render::DICommandQueue::OnNextCapture(Scaleform::Render::ContextImpl::RenderNotify * pnotify); // 0x1403C3C20
void Scaleform::Render::DICommandQueue::ExecuteNextCapture(Scaleform::Render::ContextImpl::RenderNotify * pnotify); // 0x1403C36F0
void Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(); // 0x1403C2ED0
void Scaleform::Render::DICommandQueue::DiscardCommands(); // 0x1403C2B90
void Scaleform::Render::DICommandQueue::ExecuteCommand::Execute(); // 0x1403C2D40
class Scaleform::Render::ExecuteCommandsRTSceneManagement
{
public:
	ExecuteCommandsRTSceneManagement(Scaleform::Render::HAL &);
	void OpenScene();
	void CloseScene();
private:
	Scaleform::Render::HAL & Hal; // 0x0
	bool SceneHandled; // 0x8
	bool WasInFrame; // 0x9
	bool WasInScene; // 0xA
	Scaleform::Render::ProfilerModes CurrentProfileMode; // 0xC
	Scaleform::Render::ExecuteCommandsRTSceneManagement & operator=(const Scaleform::Render::ExecuteCommandsRTSceneManagement &);
};
void Scaleform::Render::DICommandSet::ExecuteCommandsRT(Scaleform::Render::DICommandContext & context); // 0x1403C2F20void __fastcall Scaleform::Render::DICommandQueue::DICommandQueue(
        Scaleform::Render::DICommandQueue *this,
        Scaleform::Render::DrawableImageContext *dicontext)
{
  Scaleform::Render::DICommandQueue::ExecuteCommand *v4; // rax
  Scaleform::Render::DICommandQueue::ExecuteCommand *v5; // rbx
  Scaleform::List<Scaleform::Render::DIQueuePage,Scaleform::Render::DIQueuePage,Scaleform::ListNode<Scaleform::Render::DIQueuePage> > *Queues; // rax
  __int64 v7; // rcx

  this->__vftable = (Scaleform::Render::DICommandQueue_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->pPrev = (Scaleform::Render::DICommandQueue *)-1i64;
  this->pNext = (Scaleform::Render::DICommandQueue *)-1i64;
  this->__vftable = (Scaleform::Render::DICommandQueue_vtbl *)&Scaleform::Render::DICommandQueue::`vftable';
  Scaleform::Mutex::Mutex(&this->CommandSetMutex, 1, 0);
  Scaleform::WaitCondition::WaitCondition(&this->CommandSetWC);
  this->pRTCommands = 0i64;
  this->pCPUModifiedImageList.pObject = 0i64;
  this->pGPUModifiedImageList.pObject = 0i64;
  this->pRTCommandQueue = dicontext->pRTCommandQueue;
  Scaleform::Lock::Lock(&this->QueueLock, 0);
  v4 = (Scaleform::Render::DICommandQueue::ExecuteCommand *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                              Scaleform::Memory::pGlobalHeap,
                                                              112i64,
                                                              0i64);
  v5 = v4;
  if ( v4 )
  {
    v4->__vftable = (Scaleform::Render::DICommandQueue::ExecuteCommand_vtbl *)&Scaleform::RefCountImplCore::`vftable';
    v4->RefCount = 1;
    v4->pQueue = this;
    v4->__vftable = (Scaleform::Render::DICommandQueue::ExecuteCommand_vtbl *)&Scaleform::Render::DICommandQueue::ExecuteCommand::`vftable';
    Scaleform::Event::Event(&v4->ExecuteDone, 0, 0);
  }
  else
  {
    v5 = 0i64;
  }
  this->ExecuteCmd.pObject = v5;
  Queues = this->Queues;
  v7 = 4i64;
  do
  {
    Queues->Root.pPrev = (Scaleform::Render::DIQueuePage *)Queues;
    Queues->Root.pNext = (Scaleform::Render::DIQueuePage *)Queues;
    ++Queues;
    --v7;
  }
  while ( v7 );
  *(_QWORD *)&this->CaptureFrameId = 0i64;
  this->AllocPageCount = 0;
}

void __fastcall Scaleform::Render::DICommandQueue::~DICommandQueue(Scaleform::Render::DICommandQueue *this)
{
  Scaleform::Render::DIQueuePage *pNext; // rdx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::DrawableImage *v4; // rcx
  Scaleform::Render::DrawableImage *v5; // rcx

  this->__vftable = (Scaleform::Render::DICommandQueue_vtbl *)&Scaleform::Render::DICommandQueue::`vftable';
  Scaleform::Lock::DoLock(&this->QueueLock);
  while ( (Scaleform::List<Scaleform::Render::DIQueuePage,Scaleform::Render::DIQueuePage,Scaleform::ListNode<Scaleform::Render::DIQueuePage> > *)this->Queues[3].Root.pNext != &this->Queues[3] )
  {
    pNext = this->Queues[3].Root.pNext;
    pNext->pPrev->pNext = pNext->pNext;
    pNext->pNext->Scaleform::ListNode<Scaleform::Render::DIQueuePage>::$F85467C698AB236B7A247F5930CC130D::pPrev = pNext->pPrev;
    pNext->pPrev = (Scaleform::Render::DIQueuePage *)-1i64;
    pNext->pNext = (Scaleform::Render::DIQueuePage *)-1i64;
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  }
  Scaleform::Lock::Unlock(&this->QueueLock);
  pObject = (Scaleform::RefCountVImpl *)this->ExecuteCmd.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  Scaleform::Lock::~Lock(&this->QueueLock);
  v4 = this->pGPUModifiedImageList.pObject;
  if ( v4 )
    v4->Release(v4);
  v5 = this->pCPUModifiedImageList.pObject;
  if ( v5 )
    v5->Release(v5);
  Scaleform::WaitCondition::~WaitCondition(&this->CommandSetWC);
  Scaleform::Mutex::~Mutex(&this->CommandSetMutex);
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::Render::DICommandQueue::DiscardCommands(Scaleform::Render::DICommandQueue *this)
{
  Scaleform::List<Scaleform::Render::DIQueuePage,Scaleform::Render::DIQueuePage,Scaleform::ListNode<Scaleform::Render::DIQueuePage> > *v2; // rax
  Scaleform::Render::DICommandQueue *pNext; // rdx
  __int64 *pPrev; // rcx
  Scaleform::List<Scaleform::Render::DIQueuePage,Scaleform::Render::DIQueuePage,Scaleform::ListNode<Scaleform::Render::DIQueuePage> > *v5; // rax
  Scaleform::Render::DICommandQueue *v6; // rdx
  __int64 *v7; // rcx
  Scaleform::List<Scaleform::Render::DIQueuePage,Scaleform::Render::DIQueuePage,Scaleform::ListNode<Scaleform::Render::DIQueuePage> > *Queues; // rax
  Scaleform::Render::DICommandQueue *v9; // rdx
  __int64 *v10; // rcx
  __int64 *i; // rsi
  char *v12; // rbx
  bool v13; // zf
  int v14; // eax
  char *v15; // rdi
  __int64 *v16; // [rsp+28h] [rbp-20h] BYREF
  __int64 *v17; // [rsp+30h] [rbp-18h]

  v16 = (__int64 *)&v16;
  v17 = (__int64 *)&v16;
  Scaleform::Mutex::DoLock(&this->CommandSetMutex);
  v2 = &this->Queues[2];
  pNext = (Scaleform::Render::DICommandQueue *)this->Queues[2].Root.pNext;
  if ( pNext != (Scaleform::Render::DICommandQueue *)&this->Queues[2] )
  {
    pPrev = (__int64 *)v2->Root.pPrev;
    v2->Root.pPrev = (Scaleform::Render::DIQueuePage *)v2;
    this->Queues[2].Root.pNext = (Scaleform::Render::DIQueuePage *)&this->Queues[2];
    pPrev[1] = (__int64)&v16;
    pNext->__vftable = (Scaleform::Render::DICommandQueue_vtbl *)v16;
    v16[1] = (__int64)pNext;
    v16 = pPrev;
  }
  v5 = &this->Queues[1];
  v6 = (Scaleform::Render::DICommandQueue *)this->Queues[1].Root.pNext;
  if ( v6 != (Scaleform::Render::DICommandQueue *)&this->Queues[1] )
  {
    v7 = (__int64 *)v5->Root.pPrev;
    v5->Root.pPrev = (Scaleform::Render::DIQueuePage *)v5;
    this->Queues[1].Root.pNext = (Scaleform::Render::DIQueuePage *)&this->Queues[1];
    v7[1] = (__int64)&v16;
    v6->__vftable = (Scaleform::Render::DICommandQueue_vtbl *)v16;
    v16[1] = (__int64)v6;
    v16 = v7;
  }
  Queues = this->Queues;
  v9 = (Scaleform::Render::DICommandQueue *)this->Queues[0].Root.pNext;
  if ( v9 != (Scaleform::Render::DICommandQueue *)this->Queues )
  {
    v10 = (__int64 *)Queues->Root.pPrev;
    Queues->Root.pPrev = (Scaleform::Render::DIQueuePage *)Queues;
    this->Queues[0].Root.pNext = (Scaleform::Render::DIQueuePage *)this->Queues;
    v10[1] = (__int64)&v16;
    v9->__vftable = (Scaleform::Render::DICommandQueue_vtbl *)v16;
    v16[1] = (__int64)v9;
    v16 = v10;
  }
  Scaleform::Mutex::Unlock(&this->CommandSetMutex);
  for ( i = v17; v17 != (__int64 *)&v16; i = v17 )
  {
    v12 = (char *)(i + 2);
    *(_QWORD *)(*i + 8) = i[1];
    *(_QWORD *)i[1] = *i;
    v13 = *((_DWORD *)i + 128) == 0;
    *i = -1i64;
    if ( v13 )
      v12 = 0i64;
    i[1] = -1i64;
    if ( v12 )
    {
      do
      {
        (*(void (__fastcall **)(char *))(*(_QWORD *)v12 + 64i64))(v12);
        v14 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v12 + 32i64))(v12);
        v15 = 0i64;
        if ( &v12[v14] < (char *)i + *((unsigned int *)i + 128) + 16 )
          v15 = &v12[v14];
        (**(void (__fastcall ***)(char *, _QWORD))v12)(v12, 0i64);
        v12 = v15;
      }
      while ( v15 );
    }
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, i);
  }
}

void __fastcall Scaleform::Render::DICommandQueue::ExecuteCommand::Execute(
        Scaleform::Render::DICommandQueue::ExecuteCommand *this)
{
  Scaleform::Render::DICommandQueue *pQueue; // rax
  Scaleform::Render::ThreadCommandQueue *pRTCommandQueue; // rcx
  Scaleform::Render::DICommandQueue *v4; // rdi
  Scaleform::Render::DIQueuePage **p_pPrev; // rax
  Scaleform::Render::DIQueuePage *pNext; // rdx
  Scaleform::Render::DIQueuePage *v7; // rcx
  Scaleform::Render::DIQueuePage **v8; // rax
  Scaleform::Render::DIQueuePage *v9; // rdx
  Scaleform::Render::DIQueuePage *v10; // rcx
  Scaleform::Render::DIQueuePage **v11; // rax
  Scaleform::Render::DIQueuePage *v12; // rdx
  Scaleform::Render::DIQueuePage *v13; // rcx
  Scaleform::Render::DICommandQueue *v14; // rbx
  Scaleform::Render::DICommandSet v15; // [rsp+20h] [rbp-30h] BYREF
  __int128 v16; // [rsp+38h] [rbp-18h] BYREF
  int v17; // [rsp+48h] [rbp-8h]
  Scaleform::Render::DICommandContext context; // [rsp+60h] [rbp+10h] BYREF

  pQueue = this->pQueue;
  v17 = 0;
  v16 = 0i64;
  pRTCommandQueue = pQueue->pRTCommandQueue;
  if ( pRTCommandQueue )
  {
    pRTCommandQueue->GetRenderInterfaces(pRTCommandQueue, (Scaleform::Render::Interfaces *)&v16);
    context.pHAL = (Scaleform::Render::HAL *)*((_QWORD *)&v16 + 1);
  }
  v4 = this->pQueue;
  v15.QueueList.Root.pPrev = (Scaleform::Render::DIQueuePage *)&v15.QueueList;
  v15.pQueue = v4;
  v15.QueueList.Root.pNext = (Scaleform::Render::DIQueuePage *)&v15.QueueList;
  Scaleform::Mutex::DoLock(&v4->CommandSetMutex);
  p_pPrev = &v4->Queues[2].Root.pPrev;
  pNext = v4->Queues[2].Root.pNext;
  if ( pNext != (Scaleform::Render::DIQueuePage *)&v4->Queues[2] )
  {
    v7 = *p_pPrev;
    *p_pPrev = (Scaleform::Render::DIQueuePage *)p_pPrev;
    v4->Queues[2].Root.pNext = (Scaleform::Render::DIQueuePage *)&v4->Queues[2];
    v7->pNext = (Scaleform::Render::DIQueuePage *)&v15.QueueList;
    pNext->pPrev = v15.QueueList.Root.pPrev;
    v15.QueueList.Root.pPrev->pNext = pNext;
    v15.QueueList.Root.pPrev = v7;
  }
  v8 = &v4->Queues[1].Root.pPrev;
  v9 = v4->Queues[1].Root.pNext;
  if ( v9 != (Scaleform::Render::DIQueuePage *)&v4->Queues[1] )
  {
    v10 = *v8;
    *v8 = (Scaleform::Render::DIQueuePage *)v8;
    v4->Queues[1].Root.pNext = (Scaleform::Render::DIQueuePage *)&v4->Queues[1];
    v10->pNext = (Scaleform::Render::DIQueuePage *)&v15.QueueList;
    v9->pPrev = v15.QueueList.Root.pPrev;
    v15.QueueList.Root.pPrev->pNext = v9;
    v15.QueueList.Root.pPrev = v10;
  }
  v11 = &v4->Queues[0].Root.pPrev;
  v12 = v4->Queues[0].Root.pNext;
  if ( v12 != (Scaleform::Render::DIQueuePage *)v4->Queues )
  {
    v13 = *v11;
    *v11 = (Scaleform::Render::DIQueuePage *)v11;
    v4->Queues[0].Root.pNext = (Scaleform::Render::DIQueuePage *)v4->Queues;
    v13->pNext = (Scaleform::Render::DIQueuePage *)&v15.QueueList;
    v12->pPrev = v15.QueueList.Root.pPrev;
    v15.QueueList.Root.pPrev->pNext = v12;
    v15.QueueList.Root.pPrev = v13;
  }
  Scaleform::Mutex::Unlock(&v4->CommandSetMutex);
  this->pQueue->pRTCommands = &v15;
  Scaleform::Render::DICommandSet::ExecuteCommandsRT(&v15, &context);
  v14 = this->pQueue;
  Scaleform::Mutex::DoLock(&v14->CommandSetMutex);
  this->pQueue->pRTCommands = 0i64;
  Scaleform::WaitCondition::NotifyAll(&this->pQueue->CommandSetWC);
  Scaleform::Mutex::Unlock(&v14->CommandSetMutex);
  Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)this->pQueue);
  Scaleform::Event::SetEvent(&this->ExecuteDone);
  Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)this);
}

void __fastcall Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(Scaleform::Render::DICommandQueue *this)
{
  Scaleform::Render::DICommandQueue::ExecuteCommand *pObject; // rbx

  Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)this);
  Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)this->ExecuteCmd.pObject);
  this->pRTCommandQueue->PushThreadCommand(this->pRTCommandQueue, this->ExecuteCmd.pObject);
  pObject = this->ExecuteCmd.pObject;
  Scaleform::Event::Wait(&pObject->ExecuteDone, 0xFFFFFFFF);
  Scaleform::Event::ResetEvent(&pObject->ExecuteDone);
}

void __fastcall Scaleform::Render::DICommandSet::ExecuteCommandsRT(
        Scaleform::Render::DICommandSet *this,
        Scaleform::Render::DICommandContext *context)
{
  Scaleform::Render::HAL *pHAL; // r15
  char v3; // r8
  char v4; // bl
  char v5; // di
  Scaleform::List<Scaleform::Render::DIQueuePage,Scaleform::Render::DIQueuePage,Scaleform::ListNode<Scaleform::Render::DIQueuePage> > *p_QueueList; // r12
  char v7; // r14
  Scaleform::Render::DICommandSet *v8; // rsi
  __int64 v9; // rdx
  Scaleform::Render::DIQueuePage *pNext; // rdi
  Scaleform::Render::DrawableImage *v11; // rbx
  Scaleform::Render::DICommand *Buffer; // r13
  bool v13; // zf
  char v14; // si
  __int64 v15; // rax
  Scaleform::Render::DrawableImage *pObject; // r12
  char v17; // al
  bool v18; // di
  unsigned int v19; // eax
  Scaleform::Render::DICommand *v20; // rdi
  int *v21; // rax
  Scaleform::Render::HAL_vtbl *v22; // rdi
  float v23; // xmm0_4
  float v24; // xmm1_4
  Scaleform::Render::DrawableImage_vtbl *v25; // rax
  __int64 v26; // rax
  int *v27; // rax
  Scaleform::Render::DICommand *v28; // rdi
  int v29; // edx
  Scaleform::Render::RenderSync *v30; // rax
  Scaleform::Render::Fence *inserted; // rax
  Scaleform::Render::Fence *v32; // rsi
  Scaleform::Render::Fence *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  int *v36; // rax
  Scaleform::Render::HAL_vtbl *v37; // rdi
  float v38; // xmm0_4
  float v39; // xmm1_4
  Scaleform::Render::DrawableImage_vtbl *v40; // rax
  __int64 v41; // rax
  int *v42; // rax
  int v43; // edx
  unsigned int v44; // eax
  Scaleform::Render::RenderSync *v45; // rax
  Scaleform::Render::Fence *v46; // rax
  Scaleform::Render::Fence *v47; // rdi
  Scaleform::Render::Fence *v48; // rcx
  __int64 v49; // rax
  Scaleform::Render::DICommandQueue *pQueue; // rdx
  Scaleform::Render::RenderSync *v51; // rax
  char v52; // [rsp+38h] [rbp-D0h]
  __int16 v53; // [rsp+39h] [rbp-CFh]
  Scaleform::Render::DIQueuePage *v54; // [rsp+40h] [rbp-C8h]
  int v55; // [rsp+48h] [rbp-C0h] BYREF
  Scaleform::Render::Color backgroundColor; // [rsp+4Ch] [rbp-BCh] BYREF
  Scaleform::Render::Color v57[2]; // [rsp+50h] [rbp-B8h] BYREF
  Scaleform::List<Scaleform::Render::DIQueuePage,Scaleform::Render::DIQueuePage,Scaleform::ListNode<Scaleform::Render::DIQueuePage> > *v58; // [rsp+58h] [rbp-B0h]
  __int64 v59; // [rsp+60h] [rbp-A8h] BYREF
  int v60; // [rsp+68h] [rbp-A0h]
  int v61; // [rsp+6Ch] [rbp-9Ch]
  __int64 v62; // [rsp+70h] [rbp-98h] BYREF
  int v63; // [rsp+78h] [rbp-90h]
  int v64; // [rsp+7Ch] [rbp-8Ch]
  Scaleform::Render::Viewport vpin; // [rsp+80h] [rbp-88h] BYREF
  Scaleform::Render::Viewport v66; // [rsp+B0h] [rbp-58h] BYREF
  Scaleform::Render::Size<unsigned long> v67; // [rsp+E0h] [rbp-28h] BYREF
  Scaleform::Render::Size<unsigned long> v68; // [rsp+E8h] [rbp-20h] BYREF
  Scaleform::Render::Size<unsigned long> v69; // [rsp+F0h] [rbp-18h] BYREF
  char v70; // [rsp+F8h] [rbp-10h] BYREF
  char v73; // [rsp+168h] [rbp+60h]
  char v74; // [rsp+170h] [rbp+68h]

  pHAL = context->pHAL;
  v3 = 0;
  v4 = 0;
  v5 = 1;
  p_QueueList = &this->QueueList;
  v7 = 0;
  v74 = 0;
  v8 = this;
  v73 = 0;
  v53 = 256;
  v58 = &this->QueueList;
  if ( (Scaleform::List<Scaleform::Render::DIQueuePage,Scaleform::Render::DIQueuePage,Scaleform::ListNode<Scaleform::Render::DIQueuePage> > *)this->QueueList.Root.pNext != &this->QueueList )
  {
    v9 = 0i64;
    while ( 1 )
    {
      pNext = v8->QueueList.Root.pNext;
      v11 = 0i64;
      v54 = pNext;
      Buffer = (Scaleform::Render::DICommand *)pNext->Buffer;
      pNext->pPrev->pNext = pNext->pNext;
      pNext->pNext->Scaleform::ListNode<Scaleform::Render::DIQueuePage>::$F85467C698AB236B7A247F5930CC130D::pPrev = pNext->pPrev;
      v13 = pNext->Offset == 0;
      pNext->pPrev = (Scaleform::Render::DIQueuePage *)-1i64;
      if ( v13 )
        Buffer = 0i64;
      pNext->pNext = (Scaleform::Render::DIQueuePage *)-1i64;
      v14 = 0;
      v52 = 0;
      if ( !Buffer )
        goto LABEL_82;
      do
      {
        if ( !v3 )
        {
          v15 = ((__int64 (__fastcall *)(Scaleform::Render::HAL *, __int64))pHAL->GetEvents)(pHAL, v9);
          (*(void (__fastcall **)(__int64, __int64, const char *))(*(_QWORD *)v15 + 8i64))(
            v15,
            16i64,
            "Scaleform::Render::DrawableImage");
          v74 = 1;
        }
        pObject = Buffer->pImage.pObject;
        if ( pObject )
          ((void (__fastcall *)(Scaleform::Render::DrawableImage *, __int64))pObject->AddRef)(
            Buffer->pImage.pObject,
            v9);
        v17 = ((__int64 (__fastcall *)(Scaleform::Render::DICommand *, __int64))Buffer->GetRenderCaps)(Buffer, v9);
        if ( v11 == pObject && v11 && v14 )
        {
          v18 = (v17 & 2) != 0;
          if ( (v17 & 2) == 0 )
            goto LABEL_30;
        }
        else
        {
          if ( (v17 & 5) == 1 || (v17 & 8) != 0 )
          {
            v18 = 0;
            goto LABEL_30;
          }
          v18 = 1;
        }
        if ( !pObject->pRT.pObject )
        {
          if ( !v7 )
          {
            if ( (pHAL->HALState & 4) != 0 )
            {
              LOBYTE(v53) = 1;
              pHAL->EndScene(pHAL);
            }
            if ( (pHAL->HALState & 2) == 0 )
            {
              pHAL->BeginFrame(pHAL);
              HIBYTE(v53) = 0;
            }
            v7 = 1;
            v73 = 1;
          }
          pHAL->GetProfiler(pHAL);
          pHAL->GetProfiler(pHAL);
          if ( !Scaleform::Render::DrawableImage::ensureRenderableRT(pObject) )
          {
            v19 = Buffer->GetSize(Buffer);
            v20 = 0i64;
            if ( (char *)Buffer + v19 < (char *)&v54->Buffer[v54->Offset] )
              v20 = (Scaleform::Render::DICommand *)((char *)Buffer + v19);
            ((void (__fastcall *)(Scaleform::Render::DICommand *, _QWORD))Buffer->~DICommand)(Buffer, 0i64);
            Buffer = v20;
            pObject->Release(pObject);
            goto LABEL_71;
          }
        }
LABEL_30:
        if ( v11 && v14 || !v18 )
        {
          if ( v11 == pObject )
            goto LABEL_65;
          if ( v14 )
          {
            if ( pObject )
              pObject->AddRef(pObject);
            if ( v11 )
              v11->Release(v11);
            v11 = pObject;
            Scaleform::Render::HAL::EndDisplay(pHAL);
            pHAL->EndScene(pHAL);
            Scaleform::Render::DICommandQueue::updateCPUModifiedImagesRT(this->pQueue);
            pHAL->PopRenderTarget(pHAL, 2u);
            if ( context->pHAL->GetRenderSync(context->pHAL) )
            {
              v30 = context->pHAL->GetRenderSync(context->pHAL);
              inserted = Scaleform::Render::RenderSync::InsertFence(v30);
              v32 = inserted;
              if ( inserted )
                ++inserted->RefCount;
              v33 = pObject->GPUFence.pObject;
              if ( v33 )
                Scaleform::Render::Fence::Release(v33);
              pObject->GPUFence.pObject = v32;
            }
            v52 = 0;
          }
          v34 = (__int64)pHAL->GetEvents(pHAL);
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 16i64))(v34, 16i64);
          v35 = (__int64)pHAL->GetEvents(pHAL);
          (*(void (__fastcall **)(__int64, __int64, const char *))(*(_QWORD *)v35 + 8i64))(
            v35,
            16i64,
            "Scaleform::Render::DrawableImage");
          if ( !v18 )
          {
LABEL_65:
            v28 = 0i64;
          }
          else
          {
            if ( !v7 )
            {
              if ( (pHAL->HALState & 4) != 0 )
              {
                LOBYTE(v53) = 1;
                pHAL->EndScene(pHAL);
              }
              if ( (pHAL->HALState & 2) == 0 )
              {
                pHAL->BeginFrame(pHAL);
                HIBYTE(v53) = 0;
              }
              v73 = 1;
            }
            pHAL->GetProfiler(pHAL);
            pHAL->GetProfiler(pHAL);
            v36 = (int *)v11->GetSize(v11, &v69);
            v37 = pHAL->Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
            v38 = (float)*v36;
            v39 = (float)v36[1];
            v57[0].Raw = 0;
            v62 = 0i64;
            v40 = v11->__vftable;
            v63 = (int)v38;
            v64 = (int)v39;
            v41 = (__int64)v40->GetRenderTarget(v11);
            ((void (__fastcall *)(Scaleform::Render::HAL *, __int64, __int64, __int64 *, Scaleform::Render::Color *))v37->PushRenderTarget)(
              pHAL,
              v41,
              11i64,
              &v62,
              v57);
            v52 = 1;
            pHAL->BeginScene(pHAL);
            v42 = (int *)v11->GetSize(v11, (Scaleform::Render::Size<unsigned long> *)&v70);
            v28 = 0i64;
            v57[1].Raw = 0;
            v43 = v42[1];
            v66.BufferWidth = *v42;
            v66.BufferHeight = v43;
            *(_QWORD *)&v66.Left = 0i64;
            v66.Width = (int)v38;
            v66.Height = (int)v39;
            memset(&v66.ScissorLeft, 0, 20);
            Scaleform::Render::HAL::BeginDisplay(
              pHAL,
              (Scaleform::Render::Color)&v57[1],
              &v66,
              0,
              (const Scaleform::Render::Matrix2x4<float> *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][152]);
          }
        }
        else
        {
          if ( !v7 )
          {
            if ( (pHAL->HALState & 4) != 0 )
            {
              LOBYTE(v53) = 1;
              pHAL->EndScene(pHAL);
            }
            if ( (pHAL->HALState & 2) == 0 )
            {
              pHAL->BeginFrame(pHAL);
              HIBYTE(v53) = 0;
            }
            v73 = 1;
          }
          pHAL->GetProfiler(pHAL);
          pHAL->GetProfiler(pHAL);
          if ( pObject )
            pObject->AddRef(pObject);
          if ( v11 )
            v11->Release(v11);
          v11 = pObject;
          v21 = (int *)pObject->GetSize(pObject, &v67);
          v22 = pHAL->Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
          v23 = (float)*v21;
          v24 = (float)v21[1];
          v55 = 0;
          v59 = 0i64;
          v25 = pObject->__vftable;
          v60 = (int)v23;
          v61 = (int)v24;
          v26 = (__int64)v25->GetRenderTarget(pObject);
          ((void (__fastcall *)(Scaleform::Render::HAL *, __int64, __int64, __int64 *, int *))v22->PushRenderTarget)(
            pHAL,
            v26,
            11i64,
            &v59,
            &v55);
          v52 = 1;
          pHAL->BeginScene(pHAL);
          v27 = (int *)pObject->GetSize(pObject, &v68);
          v28 = 0i64;
          backgroundColor = 0;
          v29 = v27[1];
          vpin.BufferWidth = *v27;
          vpin.BufferHeight = v29;
          *(_QWORD *)&vpin.Left = 0i64;
          vpin.Width = (int)v23;
          vpin.Height = (int)v24;
          vpin.Flags = 1;
          *(_QWORD *)&vpin.ScissorWidth = 0i64;
          *(_QWORD *)&vpin.ScissorLeft = 0i64;
          Scaleform::Render::HAL::BeginDisplay(
            pHAL,
            (Scaleform::Render::Color)&backgroundColor,
            &vpin,
            0,
            (const Scaleform::Render::Matrix2x4<float> *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][152]);
        }
        Scaleform::Render::DICommand::ExecuteRT(Buffer, context);
        v44 = Buffer->GetSize(Buffer);
        if ( (char *)Buffer + v44 < (char *)&v54->Buffer[v54->Offset] )
          v28 = (Scaleform::Render::DICommand *)((char *)Buffer + v44);
        ((void (__fastcall *)(Scaleform::Render::DICommand *, _QWORD))Buffer->~DICommand)(Buffer, 0i64);
        Buffer = v28;
        if ( pObject )
          pObject->Release(pObject);
        v14 = v52;
LABEL_71:
        v7 = v73;
        v3 = v74;
      }
      while ( Buffer );
      if ( !v11 || !v14 )
      {
        v7 = v73;
        pNext = v54;
        v3 = v74;
        p_QueueList = v58;
LABEL_82:
        v8 = this;
        goto LABEL_83;
      }
      Scaleform::Render::HAL::EndDisplay(pHAL);
      pHAL->EndScene(pHAL);
      v8 = this;
      Scaleform::Render::DICommandQueue::updateCPUModifiedImagesRT(this->pQueue);
      pHAL->PopRenderTarget(pHAL, 2u);
      if ( context->pHAL->GetRenderSync(context->pHAL) )
      {
        v45 = context->pHAL->GetRenderSync(context->pHAL);
        v46 = Scaleform::Render::RenderSync::InsertFence(v45);
        v47 = v46;
        if ( v46 )
          ++v46->RefCount;
        v48 = v11->GPUFence.pObject;
        if ( v48 )
          Scaleform::Render::Fence::Release(v48);
        v11->GPUFence.pObject = v47;
      }
      v7 = v73;
      p_QueueList = &this->QueueList;
      pNext = v54;
      v3 = v74;
LABEL_83:
      if ( v3 )
      {
        v49 = (__int64)pHAL->GetEvents(pHAL);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v49 + 16i64))(v49, 16i64);
        v74 = 0;
      }
      pQueue = v8->pQueue;
      if ( v8->pQueue->FreePageCount >= 3 )
      {
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pNext);
      }
      else
      {
        pNext->Offset = 0;
        pNext->pPrev = pQueue->Queues[3].Root.pPrev;
        pNext->pNext = (Scaleform::Render::DIQueuePage *)&pQueue->Queues[3];
        pQueue->Queues[3].Root.pPrev->pNext = pNext;
        pQueue->Queues[3].Root.pPrev = pNext;
        ++pQueue->FreePageCount;
      }
      if ( v11 )
        v11->Release(v11);
      v9 = 0i64;
      v3 = v74;
      if ( (Scaleform::List<Scaleform::Render::DIQueuePage,Scaleform::Render::DIQueuePage,Scaleform::ListNode<Scaleform::Render::DIQueuePage> > *)p_QueueList->Root.pNext == p_QueueList )
      {
        v4 = v53;
        v5 = HIBYTE(v53);
        break;
      }
    }
  }
  p_QueueList->Root.pPrev = (Scaleform::Render::DIQueuePage *)p_QueueList;
  p_QueueList->Root.pNext = (Scaleform::Render::DIQueuePage *)p_QueueList;
  Scaleform::Render::DICommandQueue::updateCPUModifiedImagesRT(v8->pQueue);
  Scaleform::Render::DICommandQueue::updateGPUModifiedImagesRT(v8->pQueue);
  pHAL->GetProfiler(pHAL);
  if ( v7 )
  {
    if ( !v4 && pHAL->GetRenderSync(pHAL) )
    {
      v51 = pHAL->GetRenderSync(pHAL);
      Scaleform::Render::RenderSync::NotifySubmission(v51, SubmissionType_Scene);
    }
    if ( !v5 )
      pHAL->EndFrame(pHAL);
    if ( v4 )
      pHAL->BeginScene(pHAL);
  }
}

void __fastcall Scaleform::Render::DICommandQueue::ExecuteNextCapture(
        Scaleform::Render::DICommandQueue *this,
        Scaleform::Render::ContextImpl::RenderNotify *pnotify)
{
  Scaleform::Render::ThreadCommandQueue *pRTCommandQueue; // rcx
  Scaleform::List<Scaleform::Render::DIQueuePage,Scaleform::Render::DIQueuePage,Scaleform::ListNode<Scaleform::Render::DIQueuePage> > *v4; // rax
  Scaleform::Render::DICommandQueue *pNext; // rdx
  Scaleform::List<Scaleform::Render::DIQueuePage,Scaleform::Render::DIQueuePage,Scaleform::ListNode<Scaleform::Render::DIQueuePage> > *v6; // r14
  Scaleform::Render::DIQueuePage *pPrev; // rcx
  Scaleform::Render::DIQueuePage *v8; // rdx
  Scaleform::Render::DIQueuePage *v9; // rcx
  Scaleform::Render::DICommandSet v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+38h] [rbp-20h] BYREF
  int v12; // [rsp+48h] [rbp-10h]
  Scaleform::Render::DICommandContext context; // [rsp+60h] [rbp+8h] BYREF

  if ( !this->pRTCommandQueue && pnotify )
    this->pRTCommandQueue = pnotify->GetThreadCommandQueue(pnotify);
  pRTCommandQueue = this->pRTCommandQueue;
  v12 = 0;
  v11 = 0i64;
  if ( pRTCommandQueue )
  {
    pRTCommandQueue->GetRenderInterfaces(pRTCommandQueue, (Scaleform::Render::Interfaces *)&v11);
    context.pHAL = (Scaleform::Render::HAL *)*((_QWORD *)&v11 + 1);
  }
  v10.pQueue = this;
  v10.QueueList.Root.pPrev = (Scaleform::Render::DIQueuePage *)&v10.QueueList;
  v10.QueueList.Root.pNext = (Scaleform::Render::DIQueuePage *)&v10.QueueList;
  Scaleform::Mutex::DoLock(&this->CommandSetMutex);
  Scaleform::Lock::DoLock(&this->QueueLock);
  v4 = &this->Queues[1];
  pNext = (Scaleform::Render::DICommandQueue *)this->Queues[1].Root.pNext;
  v6 = &this->Queues[2];
  if ( pNext != (Scaleform::Render::DICommandQueue *)&this->Queues[1] )
  {
    pPrev = v4->Root.pPrev;
    v4->Root.pPrev = (Scaleform::Render::DIQueuePage *)v4;
    this->Queues[1].Root.pNext = (Scaleform::Render::DIQueuePage *)&this->Queues[1];
    pPrev->pNext = (Scaleform::Render::DIQueuePage *)v6;
    pNext->__vftable = (Scaleform::Render::DICommandQueue_vtbl *)v6->Root.pPrev;
    v6->Root.pPrev->pNext = (Scaleform::Render::DIQueuePage *)pNext;
    v6->Root.pPrev = pPrev;
  }
  Scaleform::Mutex::DoLock(&this->CommandSetMutex);
  v8 = this->Queues[2].Root.pNext;
  if ( v8 != (Scaleform::Render::DIQueuePage *)v6 )
  {
    v9 = v6->Root.pPrev;
    v6->Root.pPrev = (Scaleform::Render::DIQueuePage *)v6;
    this->Queues[2].Root.pNext = (Scaleform::Render::DIQueuePage *)&this->Queues[2];
    v9->pNext = (Scaleform::Render::DIQueuePage *)&v10.QueueList;
    v8->pPrev = v10.QueueList.Root.pPrev;
    v10.QueueList.Root.pPrev->pNext = v8;
    v10.QueueList.Root.pPrev = v9;
  }
  Scaleform::Mutex::Unlock(&this->CommandSetMutex);
  this->pRTCommands = &v10;
  Scaleform::Lock::Unlock(&this->QueueLock);
  Scaleform::Mutex::Unlock(&this->CommandSetMutex);
  Scaleform::Render::DICommandSet::ExecuteCommandsRT(&v10, &context);
  Scaleform::Mutex::DoLock(&this->CommandSetMutex);
  this->pRTCommands = 0i64;
  Scaleform::WaitCondition::NotifyAll(&this->CommandSetWC);
  Scaleform::Mutex::Unlock(&this->CommandSetMutex);
}

void __fastcall Scaleform::Render::DICommand::ExecuteRT(
        Scaleform::Render::DICommand *this,
        Scaleform::Render::DICommandContext *context)
{
  char v4; // al
  Scaleform::Render::DICommandQueue *pObject; // rcx
  unsigned int imageCount; // ebp
  Scaleform::Render::DrawableImage *v7; // rbx
  char v8; // al
  Scaleform::Render::DrawableImage *v9; // rbx
  Scaleform::Render::DISourceImages images; // [rsp+30h] [rbp-18h] BYREF

  v4 = this->GetRenderCaps(this);
  pObject = this->pImage.pObject->pQueue.pObject;
  if ( (v4 & 5) == 1 )
  {
    Scaleform::Render::DICommandQueue::updateGPUModifiedImagesRT(pObject);
    images.pImages[0] = 0i64;
    images.pImages[1] = 0i64;
    imageCount = this->GetSourceImages(this, &images);
    if ( Scaleform::Render::DrawableImage::isMapped(this->pImage.pObject)
      || (v7 = this->pImage.pObject,
          v8 = this->GetRenderCaps(this),
          Scaleform::Render::DrawableImage::mapTextureRT(v7, (v8 & 0x20) != 0)) )
    {
      Scaleform::Render::DICommand::executeSWHelper(this, context, this->pImage.pObject, &images, imageCount);
    }
  }
  else
  {
    Scaleform::Render::DICommandQueue::updateCPUModifiedImagesRT(pObject);
    v9 = this->pImage.pObject;
    Scaleform::Render::DrawableImage::unmapTextureRT(v9);
    this->ExecuteHW(this, context);
    if ( (((__int64 (__fastcall *)(Scaleform::Render::DICommand *))this->GetRenderCaps)(this) & 0xA) == 2 )
      Scaleform::Render::DrawableImage::addToGPUModifiedListRT(v9);
  }
}

char __fastcall Scaleform::Render::DICommand::ExecuteSWOnAddCommand(
        Scaleform::Render::DICommand *this,
        Scaleform::Render::DrawableImage *i)
{
  char v4; // r12
  unsigned int v6; // eax
  Scaleform::Render::DICommandQueue *pObject; // rbx
  unsigned int imageCount; // er13
  unsigned int v9; // esi
  Scaleform::Render::DrawableImage **p_images; // rdi
  Scaleform::Render::DrawableImage *v11; // rbp
  Scaleform::Render::DrawableImageContext *v12; // rax
  Scaleform::Render::ThreadCommandQueue *pRTCommandQueue; // rcx
  char v14; // di
  Scaleform::Render::DISourceImages images; // [rsp+30h] [rbp-58h] BYREF
  __int128 v16; // [rsp+40h] [rbp-48h] BYREF
  int v17; // [rsp+50h] [rbp-38h]
  Scaleform::Render::DICommandContext context; // [rsp+90h] [rbp+8h] BYREF

  v4 = this->GetRenderCaps(this);
  if ( (v4 & 1) == 0 )
    return 0;
  images.pImages[0] = 0i64;
  images.pImages[1] = 0i64;
  v6 = this->GetSourceImages(this, &images);
  pObject = i->pQueue.pObject;
  imageCount = v6;
  Scaleform::Lock::DoLock(&pObject->QueueLock);
  if ( Scaleform::Render::DrawableImage::isMapped(i) && i->RefCount <= 2 )
  {
    v9 = 0;
    p_images = (Scaleform::Render::DrawableImage **)&images;
    while ( 1 )
    {
      if ( *p_images )
      {
        if ( (*p_images)->GetImageType(*p_images) == Type_DrawableImage )
        {
          v11 = *p_images;
          if ( !Scaleform::Render::DrawableImage::isMapped(*p_images) || v11->RefCount > 2 )
            break;
        }
      }
      ++v9;
      ++p_images;
      if ( v9 >= 2 )
      {
        v12 = i->pContext.pObject;
        v16 = 0i64;
        v17 = 0;
        pRTCommandQueue = v12->pRTCommandQueue;
        if ( pRTCommandQueue )
        {
          pRTCommandQueue->GetRenderInterfaces(pRTCommandQueue, (Scaleform::Render::Interfaces *)&v16);
          context.pHAL = (Scaleform::Render::HAL *)*((_QWORD *)&v16 + 1);
        }
        Scaleform::Render::DICommand::executeSWHelper(this, &context, i, &images, imageCount);
        if ( (v4 & 0x20) == 0 )
          Scaleform::Render::DrawableImage::addToCPUModifiedList(i);
        v14 = 1;
        goto LABEL_17;
      }
    }
  }
  v14 = 0;
LABEL_17:
  Scaleform::Lock::Unlock(&pObject->QueueLock);
  return v14;
}

__int64 __fastcall Scaleform::Render::DICommand::GetRenderCaps(Scaleform::Render::DICommand *this)
{
  unsigned int v2; // ebx
  Scaleform::Render::DrawableImage *pObject; // rax
  Scaleform::Render::DrawableImageContext *v4; // rax
  Scaleform::Render::ThreadCommandQueue *pRTCommandQueue; // rcx
  Scaleform::Render::ThreadCommandQueue_vtbl *v6; // rax
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+30h] [rbp-18h]

  v2 = this->GetCPUCaps(this);
  pObject = this->pImage.pObject;
  if ( pObject
    && (v4 = pObject->pContext.pObject) != 0i64
    && (pRTCommandQueue = v4->pRTCommandQueue) != 0i64
    && (v6 = pRTCommandQueue->__vftable,
        v9 = 0,
        v8 = 0i64,
        v6->GetRenderInterfaces(pRTCommandQueue, (Scaleform::Render::Interfaces *)&v8),
        *((_QWORD *)&v8 + 1)) )
  {
    return v2 | (*(unsigned int (__fastcall **)(_QWORD, Scaleform::Render::DICommand *))(**((_QWORD **)&v8 + 1) + 496i64))(
                  *((_QWORD *)&v8 + 1),
                  this);
  }
  else
  {
    return v2;
  }
}

void __fastcall Scaleform::Render::DICommandQueue::OnCapture(Scaleform::Render::DICommandQueue *this)
{
  Scaleform::Mutex *p_CommandSetMutex; // rbx
  Scaleform::Lock *p_QueueLock; // rdi
  Scaleform::List<Scaleform::Render::DIQueuePage,Scaleform::Render::DIQueuePage,Scaleform::ListNode<Scaleform::Render::DIQueuePage> > *Queues; // rax
  Scaleform::List<Scaleform::Render::DIQueuePage,Scaleform::Render::DIQueuePage,Scaleform::ListNode<Scaleform::Render::DIQueuePage> > *v5; // rsi
  Scaleform::Render::DIQueuePage *pNext; // rdx
  Scaleform::Render::DIQueuePage *pPrev; // rcx

  p_CommandSetMutex = &this->CommandSetMutex;
  Scaleform::Mutex::DoLock(&this->CommandSetMutex);
  while ( this->pRTCommands )
    Scaleform::WaitCondition::Wait(&this->CommandSetWC, p_CommandSetMutex, 0xFFFFFFFF);
  p_QueueLock = &this->QueueLock;
  Scaleform::Lock::DoLock(&this->QueueLock);
  Queues = this->Queues;
  v5 = &this->Queues[1];
  pNext = Queues->Root.pNext;
  if ( pNext != (Scaleform::Render::DIQueuePage *)Queues )
  {
    pPrev = Queues->Root.pPrev;
    Queues->Root.pPrev = (Scaleform::Render::DIQueuePage *)Queues;
    Queues->Root.pNext = (Scaleform::Render::DIQueuePage *)Queues;
    pPrev->pNext = (Scaleform::Render::DIQueuePage *)v5;
    pNext->pPrev = v5->Root.pPrev;
    v5->Root.pPrev->pNext = pNext;
    v5->Root.pPrev = pPrev;
  }
  Scaleform::Lock::Unlock(p_QueueLock);
  Scaleform::Mutex::Unlock(p_CommandSetMutex);
}

void __fastcall Scaleform::Render::DICommandQueue::OnNextCapture(
        Scaleform::Render::DICommandQueue *this,
        Scaleform::Render::ContextImpl::RenderNotify *pnotify)
{
  Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)this);
  Scaleform::Render::DICommandQueue::updateCPUModifiedImagesRT(this);
  Scaleform::Render::DICommandQueue::ExecuteNextCapture(this, pnotify);
  Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)this);
}

unsigned __int8 *__fastcall Scaleform::Render::DICommandQueue::allocCommandFromPage(
        Scaleform::Render::DICommandQueue *this,
        unsigned int size,
        Scaleform::Lock *locked)
{
  Scaleform::Render::DIQueuePage *pPrev; // r9
  __int64 Offset; // rcx
  unsigned __int8 *result; // rax

  pPrev = this->Queues[0].Root.pPrev;
  if ( pPrev == (Scaleform::Render::DIQueuePage *)this->Queues || size > 496 - pPrev->Offset )
  {
    if ( !this->FreePageCount && this->AllocPageCount >= 0x10 )
    {
      Scaleform::Lock::Unlock(locked);
      Scaleform::Render::DICommandQueue::ExecuteCommandsAndWait(this);
      Scaleform::Lock::DoLock(locked);
    }
    pPrev = Scaleform::Render::DICommandQueue::allocPage(this);
  }
  if ( !pPrev )
    return 0i64;
  Offset = pPrev->Offset;
  if ( size > 496 - (int)Offset )
    return 0i64;
  result = &pPrev->Buffer[Offset];
  pPrev->Offset = size + Offset;
  return result;
}

Scaleform::Render::DIQueuePage *__fastcall Scaleform::Render::DICommandQueue::allocPage(
        Scaleform::Render::DICommandQueue *this)
{
  Scaleform::Render::DIQueuePage *pNext; // r8
  Scaleform::Render::DIQueuePage *result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  if ( (Scaleform::List<Scaleform::Render::DIQueuePage,Scaleform::Render::DIQueuePage,Scaleform::ListNode<Scaleform::Render::DIQueuePage> > *)this->Queues[3].Root.pNext == &this->Queues[3] )
  {
    v4 = 2;
    result = (Scaleform::Render::DIQueuePage *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                 Scaleform::Memory::pGlobalHeap,
                                                 this,
                                                 520i64,
                                                 &v4);
    pNext = result;
    if ( !result )
      return result;
    result->pPrev = (Scaleform::Render::DIQueuePage *)-1i64;
    result->pNext = (Scaleform::Render::DIQueuePage *)-1i64;
    *(_QWORD *)&result->Offset = 0i64;
  }
  else
  {
    pNext = this->Queues[3].Root.pNext;
    pNext->pPrev->pNext = pNext->pNext;
    pNext->pNext->Scaleform::ListNode<Scaleform::Render::DIQueuePage>::$F85467C698AB236B7A247F5930CC130D::pPrev = pNext->pPrev;
    pNext->pPrev = (Scaleform::Render::DIQueuePage *)-1i64;
    pNext->pNext = (Scaleform::Render::DIQueuePage *)-1i64;
    --this->FreePageCount;
  }
  result = pNext;
  if ( pNext )
  {
    pNext->pPrev = this->Queues[0].Root.pPrev;
    pNext->pNext = (Scaleform::Render::DIQueuePage *)this->Queues;
    this->Queues[0].Root.pPrev->pNext = pNext;
    this->Queues[0].Root.pPrev = pNext;
  }
  return result;
}

char __fastcall Scaleform::Render::DICommand::executeSWHelper(
        Scaleform::Render::DICommand *this,
        Scaleform::Render::DICommandContext *context,
        Scaleform::Render::DrawableImage *di,
        Scaleform::Render::DISourceImages *images,
        unsigned int imageCount)
{
  Scaleform::Render::ImageData *MappedData; // rbp
  __int64 v10; // rbx
  unsigned __int64 *p_Pitch; // r10
  __int64 v12; // r11
  unsigned __int64 *v13; // rax
  Scaleform::Render::Image *v14; // rdx
  Scaleform::Render::Image *v15; // rdx
  volatile int **v16; // rdi
  volatile int *v17; // rsi
  volatile int **v19; // rdi
  volatile int *v20; // rsi
  __int128 v21; // [rsp+20h] [rbp-A8h] BYREF
  Scaleform::Render::ImageData data; // [rsp+30h] [rbp-98h] BYREF
  Scaleform::Render::ImageData v23; // [rsp+70h] [rbp-58h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+0h] BYREF

  MappedData = Scaleform::Render::DrawableImage::getMappedData(di);
  if ( imageCount )
  {
    v10 = 2i64;
    p_Pitch = &data.Plane0.Pitch;
    v12 = 2i64;
    do
    {
      *(p_Pitch - 5) = 0i64;
      v13 = p_Pitch - 1;
      *(p_Pitch - 3) = (unsigned __int64)(p_Pitch - 1);
      *((_DWORD *)p_Pitch - 8) = 0x10000;
      *(p_Pitch - 2) = 0i64;
      *((_DWORD *)p_Pitch - 1) = 0;
      *p_Pitch = 0i64;
      p_Pitch[1] = 0i64;
      p_Pitch[2] = 0i64;
      p_Pitch += 8;
      *(_DWORD *)v13 = 0;
      --v12;
    }
    while ( v12 );
    v14 = images->pImages[0];
    v21 = 0i64;
    if ( v14 && !Scaleform::Render::DrawableImage::MapImageSource(&data, v14)
      || (v15 = images->pImages[1], *(_QWORD *)&v21 = &data, v15)
      && !Scaleform::Render::DrawableImage::MapImageSource(&v23, v15) )
    {
      v16 = (volatile int **)&retaddr;
      do
      {
        v16 -= 8;
        --v10;
        Scaleform::Render::ImageData::freePlanes((Scaleform::Render::ImageData *)(v16 - 3));
        v17 = *v16;
        if ( *v16 )
        {
          if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(*v16, -1) == 1 )
            Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v17);
        }
      }
      while ( v10 );
      return 0;
    }
    *((_QWORD *)&v21 + 1) = &v23;
    this->ExecuteSW(this, context, MappedData, (Scaleform::Render::ImageData **)&v21);
    v19 = (volatile int **)&retaddr;
    do
    {
      v19 -= 8;
      --v10;
      Scaleform::Render::ImageData::freePlanes((Scaleform::Render::ImageData *)(v19 - 3));
      v20 = *v19;
      if ( *v19 && (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(*v19, -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v20);
    }
    while ( v10 );
  }
  else
  {
    this->ExecuteSW(this, context, MappedData, 0i64);
  }
  if ( (((__int64 (__fastcall *)(Scaleform::Render::DICommand *))this->GetRenderCaps)(this) & 0x20) == 0 )
    Scaleform::Render::DrawableImage::addToCPUModifiedList(di);
  return 1;
}

void __fastcall Scaleform::Render::DICommandQueue::updateCPUModifiedImagesRT(Scaleform::Render::DICommandQueue *this)
{
  Scaleform::Lock *p_QueueLock; // rsi
  Scaleform::Render::DrawableImage *pObject; // rcx
  Scaleform::Render::DrawableImage *v4; // rdi
  Scaleform::Render::DrawableImage *v5; // rbx
  Scaleform::Ptr<Scaleform::Render::DrawableImage> *p_pCPUModifiedNext; // r14
  Scaleform::Render::DrawableImage *v7; // rcx

  p_QueueLock = &this->QueueLock;
  Scaleform::Lock::DoLock(&this->QueueLock);
  pObject = this->pCPUModifiedImageList.pObject;
  v4 = 0i64;
  if ( pObject )
    pObject->AddRef(pObject);
  v5 = this->pCPUModifiedImageList.pObject;
  if ( v5 )
    v5->Release(v5);
  this->pCPUModifiedImageList.pObject = 0i64;
  if ( v5 )
  {
    do
    {
      v5->AddRef(v5);
      if ( v4 )
        v4->Release(v4);
      v4 = v5;
      Scaleform::Render::DrawableImage::updateRenderTargetRT(v5);
      p_pCPUModifiedNext = &v5->pCPUModifiedNext;
      v7 = v5->pCPUModifiedNext.pObject;
      if ( v7 )
        v7->AddRef(v7);
      v5->Release(v5);
      v5 = p_pCPUModifiedNext->pObject;
      if ( p_pCPUModifiedNext->pObject )
        v5->Release(p_pCPUModifiedNext->pObject);
      p_pCPUModifiedNext->pObject = 0i64;
      v4->DrawableImageState &= ~8u;
    }
    while ( v5 );
    v4->Release(v4);
  }
  Scaleform::Lock::Unlock(p_QueueLock);
}

void __fastcall Scaleform::Render::DICommandQueue::updateGPUModifiedImagesRT(Scaleform::Render::DICommandQueue *this)
{
  Scaleform::Lock *p_QueueLock; // rsi
  Scaleform::Render::DrawableImage *pObject; // rcx
  Scaleform::Render::DrawableImage *v4; // rdi
  Scaleform::Render::DrawableImage *v5; // rbx
  Scaleform::Ptr<Scaleform::Render::DrawableImage> *p_pGPUModifiedNext; // r14
  Scaleform::Render::DrawableImage *v7; // rcx

  p_QueueLock = &this->QueueLock;
  Scaleform::Lock::DoLock(&this->QueueLock);
  pObject = this->pGPUModifiedImageList.pObject;
  v4 = 0i64;
  if ( pObject )
    pObject->AddRef(pObject);
  v5 = this->pGPUModifiedImageList.pObject;
  if ( v5 )
    v5->Release(v5);
  this->pGPUModifiedImageList.pObject = 0i64;
  if ( v5 )
  {
    do
    {
      v5->AddRef(v5);
      if ( v4 )
        v4->Release(v4);
      v4 = v5;
      Scaleform::Render::DrawableImage::updateStagingTargetRT(v5);
      p_pGPUModifiedNext = &v5->pGPUModifiedNext;
      v7 = v5->pGPUModifiedNext.pObject;
      if ( v7 )
        v7->AddRef(v7);
      v5->Release(v5);
      v5 = p_pGPUModifiedNext->pObject;
      if ( p_pGPUModifiedNext->pObject )
        v5->Release(p_pGPUModifiedNext->pObject);
      p_pGPUModifiedNext->pObject = 0i64;
      v4->DrawableImageState &= ~0x10u;
    }
    while ( v5 );
    v4->Release(v4);
  }
  Scaleform::Lock::Unlock(p_QueueLock);
}

