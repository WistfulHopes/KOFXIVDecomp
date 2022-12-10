#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_listalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"

bool Scaleform::Render::FenceImpl::IsPending(Scaleform::Render::FenceType waitType); // 0x1403966F0
bool Scaleform::Render::FenceImpl::WaitFence(Scaleform::Render::FenceType waitType); // 0x140396B20
bool Scaleform::Render::FenceImpl::operator>(const Scaleform::Render::FenceImpl & fence); // 0x1403961E0
void Scaleform::Render::Fence::Release(); // 0x1403967E0
Scaleform::Render::FenceFrame::~FenceFrame(); // 0x140395F70
Scaleform::Render::RenderSync::RenderSync(); // 0x140395EC0
Scaleform::Render::RenderSync::~RenderSync(); // 0x140396110
bool Scaleform::Render::RenderSync::SetContext(Scaleform::Render::HAL * phal); // 0x140396A70
void Scaleform::Render::RenderSync::BeginFrame(); // 0x140396350
bool Scaleform::Render::RenderSync::EndFrame(); // 0x1403964A0
Scaleform::Render::Fence * Scaleform::Render::RenderSync::InsertFence(); // 0x140396600
void Scaleform::Render::RenderSync::AddFenceResource(Scaleform::Render::FenceResource * fenceResource); // 0x140396340
void Scaleform::Render::RenderSync::AddFenceResource(Scaleform::Ptr<Scaleform::Render::Fence> & fence); // 0x140396260
void Scaleform::Render::RenderSync::NotifySubmission(Scaleform::Render::RenderSync::SubmissionType type); // 0x140396720
void Scaleform::Render::RenderSync::ReleaseOutstandingFrames(); // 0x140396860void __fastcall Scaleform::Render::RenderSync::RenderSync(Scaleform::Render::RenderSync *this)
{
  this->__vftable = (Scaleform::Render::RenderSync_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::Render::RenderSync_vtbl *)&Scaleform::Render::RenderSync::`vftable';
  this->RefCount = 1;
  this->FenceFrames.Root.pPrev = (Scaleform::Render::FenceFrame *)&this->FenceFrames;
  this->FenceFrames.Root.pNext = (Scaleform::Render::FenceFrame *)&this->FenceFrames;
  this->FenceFrameAlloc.FirstPage = 0i64;
  this->FenceFrameAlloc.LastPage = 0i64;
  this->FenceFrameAlloc.NumElementsInPage = 127;
  this->FenceFrameAlloc.FirstEmptySlot = 0i64;
  this->FenceFrameAlloc.pHeapOrPtr = &this->FenceFrameAlloc;
  this->FenceImplAlloc.FirstPage = 0i64;
  this->FenceImplAlloc.LastPage = 0i64;
  this->FenceImplAlloc.NumElementsInPage = 127;
  this->FenceImplAlloc.FirstEmptySlot = 0i64;
  this->FenceImplAlloc.pHeapOrPtr = &this->FenceImplAlloc;
  this->FenceAlloc.FirstPage = 0i64;
  this->FenceAlloc.LastPage = 0i64;
  this->FenceAlloc.NumElementsInPage = 127;
  this->FenceAlloc.FirstEmptySlot = 0i64;
  this->FenceAlloc.pHeapOrPtr = &this->FenceAlloc;
  this->SubmissionDummyFence.pObject = 0i64;
  this->NextFenceID = 0i64;
  this->OutstandingFrames = 0;
  this->WithinFrame = 0;
  this->SubmissionUpdateMethod = SubmissionType_Invalid;
  this->pHAL = 0i64;
  this->pMemoryManager = 0i64;
}

void __fastcall Scaleform::Render::FenceFrame::~FenceFrame(Scaleform::Render::FenceFrame *this)
{
  signed __int64 v2; // rdi
  bool v3; // zf
  Scaleform::Render::Fence *pObject; // rcx
  Scaleform::Render::FenceImpl *Data; // rdx
  Scaleform::Render::RenderSync *RSContext; // rcx
  Scaleform::Render::Fence *v7; // rsi
  _QWORD *v8; // rdi
  Scaleform::Render::FenceImpl *v9; // rcx
  Scaleform::Render::FenceImpl *v10; // rcx
  Scaleform::Render::Fence *v11; // rsi
  _QWORD *v12; // rdi
  Scaleform::Render::FenceImpl *v13; // rcx
  Scaleform::Render::FenceImpl *v14; // rcx

  v2 = 0i64;
LABEL_2:
  v3 = v2 == this->Fences.Data.Size;
  while ( !v3 )
  {
    pObject = this->Fences.Data.Data[v2].pObject;
    if ( pObject->HasData )
    {
      pObject->HasData = 0;
      this->RSContext->ReleaseFence(this->RSContext, this->Fences.Data.Data[v2].pObject->Data->APIHandle);
      Data = this->Fences.Data.Data[v2].pObject->Data;
      RSContext = this->RSContext;
      Data->RSContext = (Scaleform::Render::RenderSync *)RSContext->FenceImplAlloc.FirstEmptySlot;
      RSContext->FenceImplAlloc.FirstEmptySlot = (Scaleform::ListAllocBase<Scaleform::Render::FenceImpl,127,Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2> >::NodeType *)Data;
      this->Fences.Data.Data[v2].pObject->Data = (Scaleform::Render::FenceImpl *)this->RSContext;
    }
    v3 = v2 == this->Fences.Data.Size;
    if ( v2 < (signed __int64)this->Fences.Data.Size )
    {
      ++v2;
      goto LABEL_2;
    }
  }
  Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::Fence>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Fence>,2>,Scaleform::ArrayConstPolicy<128,64,1>>::ResizeNoConstruct(
    &this->Fences.Data,
    &this->Fences,
    0i64);
  v7 = this->FrameEndFence.pObject;
  if ( v7 )
  {
    v3 = v7->RefCount-- == 1;
    if ( v3 )
    {
      if ( v7->HasData )
      {
        v8 = &v7->Data->RSContext->__vftable;
        (*(void (__fastcall **)(_QWORD *, unsigned __int64))(*v8 + 80i64))(v8, v7->Data->APIHandle);
        v9 = v7->Data;
        v9->RSContext = (Scaleform::Render::RenderSync *)v8[12];
        v8[12] = v9;
        v7->Data = (Scaleform::Render::FenceImpl *)v8[17];
        v8[17] = v7;
      }
      else
      {
        v10 = v7->Data;
        v7->Data = (Scaleform::Render::FenceImpl *)v7->Data[4].Parent;
        v10[4].Parent = (Scaleform::Render::FenceFrame *)v7;
      }
    }
  }
  this->FrameEndFence.pObject = 0i64;
  v11 = this->FrameEndFence.pObject;
  if ( v11 )
  {
    v3 = v11->RefCount-- == 1;
    if ( v3 )
    {
      if ( v11->HasData )
      {
        v12 = &v11->Data->RSContext->__vftable;
        (*(void (__fastcall **)(_QWORD *, unsigned __int64))(*v12 + 80i64))(v12, v11->Data->APIHandle);
        v13 = v11->Data;
        v13->RSContext = (Scaleform::Render::RenderSync *)v12[12];
        v12[12] = v13;
        v11->Data = (Scaleform::Render::FenceImpl *)v12[17];
        v12[17] = v11;
      }
      else
      {
        v14 = v11->Data;
        v11->Data = (Scaleform::Render::FenceImpl *)v11->Data[4].Parent;
        v14[4].Parent = (Scaleform::Render::FenceFrame *)v11;
      }
    }
  }
  Scaleform::ConstructorMov<Scaleform::Ptr<Scaleform::Render::Fence>>::DestructArray(
    this->Fences.Data.Data,
    this->Fences.Data.Size);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Fences.Data.Data);
}

void __fastcall Scaleform::Render::RenderSync::~RenderSync(Scaleform::Render::RenderSync *this)
{
  Scaleform::Render::Fence *pObject; // rcx
  Scaleform::ListAllocBase<Scaleform::Render::Fence,127,Scaleform::AllocatorLH<Scaleform::Render::Fence,2> >::PageType *FirstPage; // rdx
  Scaleform::ListAllocBase<Scaleform::Render::Fence,127,Scaleform::AllocatorLH<Scaleform::Render::Fence,2> >::PageType *pNext; // rbx
  Scaleform::ListAllocBase<Scaleform::Render::FenceImpl,127,Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2> >::PageType *v5; // rdx
  Scaleform::ListAllocBase<Scaleform::Render::FenceImpl,127,Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2> >::PageType *v6; // rbx
  Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> >::PageType *v7; // rdx
  Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> >::PageType *v8; // rbx

  this->__vftable = (Scaleform::Render::RenderSync_vtbl *)&Scaleform::Render::RenderSync::`vftable';
  Scaleform::Render::RenderSync::ReleaseOutstandingFrames(this);
  pObject = this->SubmissionDummyFence.pObject;
  if ( pObject )
    Scaleform::Render::Fence::Release(pObject);
  FirstPage = this->FenceAlloc.FirstPage;
  if ( FirstPage )
  {
    do
    {
      pNext = FirstPage->pNext;
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      FirstPage = pNext;
    }
    while ( pNext );
  }
  v5 = this->FenceImplAlloc.FirstPage;
  if ( v5 )
  {
    do
    {
      v6 = v5->pNext;
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      v5 = v6;
    }
    while ( v6 );
  }
  v7 = this->FenceFrameAlloc.FirstPage;
  if ( v7 )
  {
    do
    {
      v8 = v7->pNext;
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      v7 = v8;
    }
    while ( v8 );
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

bool __fastcall Scaleform::Render::FenceImpl::operator>(
        Scaleform::Render::FenceImpl *this,
        const Scaleform::Render::FenceImpl *fence)
{
  return this->APIHandle != -1i64 && this->FenceID > fence->FenceID;
}

void __fastcall Scaleform::Render::RenderSync::AddFenceResource(
        Scaleform::Render::RenderSync *this,
        Scaleform::Ptr<Scaleform::Render::Fence> *fence)
{
  Scaleform::Render::Fence *v4; // rax
  Scaleform::Render::Fence *v5; // rdi
  Scaleform::Render::Fence *pObject; // rcx
  Scaleform::Render::FenceImpl *v7; // rax
  Scaleform::Render::FenceImpl *v8; // rdx
  Scaleform::Render::Fence *v9; // rax

  if ( !this->SubmissionDummyFence.pObject )
  {
    v4 = Scaleform::ListAllocBase<Scaleform::Render::Fence,127,Scaleform::AllocatorLH<Scaleform::Render::Fence,2>>::allocate(&this->FenceAlloc);
    v5 = v4;
    if ( v4 )
    {
      v4->Data = 0i64;
      v4->RefCount = 1;
      v4->HasData = 0;
    }
    pObject = this->SubmissionDummyFence.pObject;
    if ( pObject )
      Scaleform::Render::Fence::Release(pObject);
    this->SubmissionDummyFence.pObject = v5;
    v7 = Scaleform::ListAllocBase<Scaleform::Render::FenceImpl,127,Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2>>::allocate(&this->FenceImplAlloc);
    v8 = v7;
    if ( v7 )
    {
      v7->Parent = this->FenceFrames.Root.pPrev;
      v7->RSContext = this;
      v7->APIHandle = -1i64;
      v7->FenceID = -1i64;
    }
    else
    {
      v8 = 0i64;
    }
    this->SubmissionDummyFence.pObject->HasData = 1;
    this->SubmissionDummyFence.pObject->Data = v8;
  }
  v9 = this->SubmissionDummyFence.pObject;
  if ( v9 )
    ++v9->RefCount;
  if ( fence->pObject )
    Scaleform::Render::Fence::Release(fence->pObject);
  fence->pObject = (Scaleform::Render::Fence *)this->SubmissionDummyFence;
}

void __fastcall Scaleform::Render::RenderSync::AddFenceResource(
        Scaleform::Render::RenderSync *this,
        Scaleform::Render::FenceResource *fenceResource)
{
  if ( fenceResource )
    Scaleform::Render::RenderSync::AddFenceResource(this, &fenceResource->GPUFence);
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall Scaleform::Render::RenderSync::BeginFrame(Scaleform::Render::RenderSync *this)
{
  Scaleform::Render::FenceFrame *v2; // rax

  this->WithinFrame = 1;
  v2 = Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2>>::allocate(&this->FenceFrameAlloc);
  if ( v2 )
  {
    v2->pPrev = (Scaleform::Render::FenceFrame *)-1i64;
    v2->pNext = (Scaleform::Render::FenceFrame *)-1i64;
    v2->RSContext = 0i64;
    v2->WrappedAround = 0;
    v2->Fences.Data.Data = 0i64;
    v2->Fences.Data.Size = 0i64;
    v2->Fences.Data.Policy.Capacity = 0i64;
    v2->FrameEndFence.pObject = 0i64;
  }
  v2->RSContext = this;
  v2->pPrev = this->FenceFrames.Root.pPrev;
  v2->pNext = (Scaleform::Render::FenceFrame *)&this->FenceFrames;
  this->FenceFrames.Root.pPrev->pNext = v2;
  this->FenceFrames.Root.pPrev = v2;
  ++this->OutstandingFrames;
  if ( !warned_3 )
    warned_3 = this->OutstandingFrames >= 0x64;
}

bool __fastcall Scaleform::GFx::InteractiveObject::OnCharEvent(
        Scaleform::Render::Texture *this,
        Scaleform::Render::RenderTargetData *__formal)
{
  return 0;
}

void __fastcall Scaleform::ConstructorMov<Scaleform::Ptr<Scaleform::Render::Fence>>::DestructArray(
        Scaleform::Ptr<Scaleform::Render::Fence> *p,
        unsigned __int64 count)
{
  Scaleform::Ptr<Scaleform::Render::Fence> *v2; // rsi
  unsigned __int64 v3; // rbp
  Scaleform::Render::Fence *pObject; // rbx
  _QWORD *v6; // rdi
  Scaleform::Render::FenceImpl *Data; // rcx
  Scaleform::Render::FenceImpl *v8; // rcx

  if ( count )
  {
    v2 = &p[count - 1];
    v3 = count;
    do
    {
      pObject = v2->pObject;
      if ( v2->pObject )
      {
        if ( pObject->RefCount-- == 1 )
        {
          if ( pObject->HasData )
          {
            v6 = &pObject->Data->RSContext->__vftable;
            (*(void (__fastcall **)(_QWORD *, unsigned __int64))(*v6 + 80i64))(v6, pObject->Data->APIHandle);
            Data = pObject->Data;
            Data->RSContext = (Scaleform::Render::RenderSync *)v6[12];
            v6[12] = Data;
            pObject->Data = (Scaleform::Render::FenceImpl *)v6[17];
            v6[17] = pObject;
          }
          else
          {
            v8 = pObject->Data;
            pObject->Data = (Scaleform::Render::FenceImpl *)pObject->Data[4].Parent;
            v8[4].Parent = (Scaleform::Render::FenceFrame *)pObject;
          }
        }
      }
      --v2;
      --v3;
    }
    while ( v3 );
  }
}

bool __fastcall Scaleform::Render::RenderSync::EndFrame(Scaleform::Render::RenderSync *this)
{
  Scaleform::List<Scaleform::Render::FenceFrame,Scaleform::Render::FenceFrame,Scaleform::ListNode<Scaleform::Render::FenceFrame> > *p_FenceFrames; // rsi
  bool result; // al
  Scaleform::Render::FenceFrame *pPrev; // rdi
  Scaleform::Render::Fence *inserted; // rax
  Scaleform::Render::Fence *v6; // rbx
  Scaleform::Render::Fence *pObject; // rcx
  Scaleform::Render::Fence *v8; // rcx
  Scaleform::Render::FenceImpl *Data; // rdx
  bool v10; // al
  Scaleform::Render::FenceFrame *pNext; // rdi
  bool v12; // bp
  Scaleform::Render::Fence *v13; // rcx
  Scaleform::Render::FenceImpl *v14; // rcx
  Scaleform::Render::FenceFrame *v15; // rbx
  Scaleform::Render::FenceFrame *i; // rax

  p_FenceFrames = &this->FenceFrames;
  if ( (Scaleform::List<Scaleform::Render::FenceFrame,Scaleform::Render::FenceFrame,Scaleform::ListNode<Scaleform::Render::FenceFrame> > *)this->FenceFrames.Root.pNext == &this->FenceFrames )
    return 0;
  pPrev = p_FenceFrames->Root.pPrev;
  inserted = Scaleform::Render::RenderSync::InsertFence(this);
  v6 = inserted;
  if ( inserted )
    ++inserted->RefCount;
  pObject = pPrev->FrameEndFence.pObject;
  if ( pObject )
    Scaleform::Render::Fence::Release(pObject);
  pPrev->FrameEndFence.pObject = v6;
  v8 = p_FenceFrames->Root.pPrev->FrameEndFence.pObject;
  if ( v8->HasData )
    Data = v8->Data;
  else
    Data = 0i64;
  v10 = this->CheckWraparound(this, Data->APIHandle);
  pNext = this->FenceFrames.Root.pNext;
  v12 = v10;
  if ( pNext != p_FenceFrames->Root.pPrev )
  {
    do
    {
      v13 = pNext->FrameEndFence.pObject;
      if ( !v13 )
        break;
      if ( v13->HasData )
      {
        v14 = v13->Data;
        if ( v14 )
        {
          if ( v14->Parent
            && (v14->APIHandle == -1i64
             || ((unsigned __int8 (__fastcall *)(Scaleform::Render::RenderSync *, __int64))v14->RSContext->IsPending)(
                  v14->RSContext,
                  1i64)) )
          {
            break;
          }
        }
      }
      v15 = pNext->pNext;
      pNext->pPrev->pNext = v15;
      pNext->pNext->Scaleform::ListNode<Scaleform::Render::FenceFrame>::$CA6632F25D157B08E431811E4D2164C6::pPrev = pNext->pPrev;
      pNext->pPrev = (Scaleform::Render::FenceFrame *)-1i64;
      pNext->pNext = (Scaleform::Render::FenceFrame *)-1i64;
      Scaleform::Render::FenceFrame::~FenceFrame(pNext);
      pNext->pPrev = (Scaleform::Render::FenceFrame *)this->FenceFrameAlloc.FirstEmptySlot;
      this->FenceFrameAlloc.FirstEmptySlot = (Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> >::NodeType *)pNext;
      pNext = v15;
      --this->OutstandingFrames;
    }
    while ( v15 != p_FenceFrames->Root.pPrev );
  }
  if ( v12 )
  {
    for ( i = this->FenceFrames.Root.pNext; i != (Scaleform::Render::FenceFrame *)p_FenceFrames; i = i->pNext )
      i->WrappedAround = 1;
  }
  result = 1;
  this->WithinFrame = 0;
  return result;
}

Scaleform::Render::Fence *__fastcall Scaleform::Render::RenderSync::InsertFence(Scaleform::Render::RenderSync *this)
{
  Scaleform::List<Scaleform::Render::FenceFrame,Scaleform::Render::FenceFrame,Scaleform::ListNode<Scaleform::Render::FenceFrame> > *p_FenceFrames; // r14
  __int64 v4; // rdi
  Scaleform::Render::FenceImpl *v5; // rax
  Scaleform::Render::FenceImpl *v6; // rsi
  Scaleform::Render::FenceFrame *pPrev; // rcx
  unsigned __int64 v8; // rdx
  Scaleform::Render::Fence *v9; // rax
  Scaleform::Render::Fence *v10; // rdi
  Scaleform::Render::FenceFrame *v11; // rbx
  Scaleform::Render::Fence **p_pObject; // rdx

  p_FenceFrames = &this->FenceFrames;
  if ( (Scaleform::List<Scaleform::Render::FenceFrame,Scaleform::Render::FenceFrame,Scaleform::ListNode<Scaleform::Render::FenceFrame> > *)this->FenceFrames.Root.pNext == &this->FenceFrames )
    return 0i64;
  v4 = ((__int64 (*)(void))this->SetFence)();
  v5 = Scaleform::ListAllocBase<Scaleform::Render::FenceImpl,127,Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2>>::allocate(&this->FenceImplAlloc);
  v6 = v5;
  if ( v5 )
  {
    pPrev = p_FenceFrames->Root.pPrev;
    v8 = this->NextFenceID + 1;
    this->NextFenceID = v8;
    v5->RSContext = this;
    v5->Parent = pPrev;
    v5->APIHandle = v4;
    v5->FenceID = v8;
  }
  else
  {
    v6 = 0i64;
  }
  v9 = Scaleform::ListAllocBase<Scaleform::Render::Fence,127,Scaleform::AllocatorLH<Scaleform::Render::Fence,2>>::allocate(&this->FenceAlloc);
  v10 = v9;
  if ( v9 )
  {
    v9->Data = 0i64;
    v9->RefCount = 1;
    v9->HasData = 0;
  }
  v9->HasData = 1;
  v9->Data = v6;
  v11 = p_FenceFrames->Root.pPrev;
  Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::Fence>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Fence>,2>,Scaleform::ArrayConstPolicy<128,64,1>>::ResizeNoConstruct(
    &p_FenceFrames->Root.pPrev->Fences.Data,
    &p_FenceFrames->Root.pPrev->Fences,
    p_FenceFrames->Root.pPrev->Fences.Data.Size + 1);
  p_pObject = &v11->Fences.Data.Data[v11->Fences.Data.Size - 1].pObject;
  if ( p_pObject )
  {
    ++v10->RefCount;
    *p_pObject = v10;
  }
  Scaleform::Render::Fence::Release(v10);
  return v10;
}

char __fastcall Scaleform::Render::FenceImpl::IsPending(Scaleform::Render::FenceImpl *this, __int64 waitType)
{
  if ( !this->Parent )
    return 0;
  if ( this->APIHandle == -1i64 )
    return 1;
  return ((__int64 (__fastcall *)(Scaleform::Render::RenderSync *, __int64))this->RSContext->IsPending)(
           this->RSContext,
           waitType);
}

void __fastcall Scaleform::Render::RenderSync::NotifySubmission(
        Scaleform::Render::RenderSync *this,
        Scaleform::Render::RenderSync::SubmissionType type)
{
  Scaleform::Render::Fence *pObject; // rbx
  Scaleform::Render::FenceFrame *pPrev; // rbx
  Scaleform::Ptr<Scaleform::Render::Fence> *v5; // rdx
  Scaleform::Render::Fence *v6; // rax
  Scaleform::Render::Fence *v7; // rcx

  if ( type >= this->SubmissionUpdateMethod )
  {
    pObject = this->SubmissionDummyFence.pObject;
    if ( pObject )
    {
      pObject->Data->APIHandle = this->SetFence(this);
      this->SubmissionDummyFence.pObject->Data->FenceID = ++this->NextFenceID;
      pPrev = this->FenceFrames.Root.pPrev;
      Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::Fence>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Fence>,2>,Scaleform::ArrayConstPolicy<128,64,1>>::ResizeNoConstruct(
        &pPrev->Fences.Data,
        &pPrev->Fences,
        pPrev->Fences.Data.Size + 1);
      v5 = &pPrev->Fences.Data.Data[pPrev->Fences.Data.Size - 1];
      if ( v5 )
      {
        v6 = this->SubmissionDummyFence.pObject;
        if ( v6 )
          ++v6->RefCount;
        v5->pObject = (Scaleform::Render::Fence *)this->SubmissionDummyFence;
      }
      v7 = this->SubmissionDummyFence.pObject;
      if ( v7 )
        Scaleform::Render::Fence::Release(v7);
      this->SubmissionDummyFence.pObject = 0i64;
    }
  }
}

void __fastcall Scaleform::Render::Fence::Release(Scaleform::Render::Fence *this)
{
  Scaleform::Render::RenderSync *RSContext; // rbx
  Scaleform::Render::FenceImpl *Data; // rcx
  Scaleform::Render::FenceImpl *v5; // rcx

  if ( this->RefCount-- == 1 )
  {
    if ( this->HasData )
    {
      RSContext = this->Data->RSContext;
      RSContext->ReleaseFence(RSContext, this->Data->APIHandle);
      Data = this->Data;
      Data->RSContext = (Scaleform::Render::RenderSync *)RSContext->FenceImplAlloc.FirstEmptySlot;
      RSContext->FenceImplAlloc.FirstEmptySlot = (Scaleform::ListAllocBase<Scaleform::Render::FenceImpl,127,Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2> >::NodeType *)Data;
      this->Data = (Scaleform::Render::FenceImpl *)RSContext->FenceAlloc.FirstEmptySlot;
      RSContext->FenceAlloc.FirstEmptySlot = (Scaleform::ListAllocBase<Scaleform::Render::Fence,127,Scaleform::AllocatorLH<Scaleform::Render::Fence,2> >::NodeType *)this;
    }
    else
    {
      v5 = this->Data;
      this->Data = (Scaleform::Render::FenceImpl *)v5[4].Parent;
      v5[4].Parent = (Scaleform::Render::FenceFrame *)this;
    }
  }
}

void __fastcall Scaleform::Render::RenderSync::ReleaseOutstandingFrames(Scaleform::Render::RenderSync *this)
{
  Scaleform::Render::Fence *pObject; // rax
  Scaleform::Render::Fence *v3; // rcx
  Scaleform::Render::FenceFrame *pNext; // rbx
  Scaleform::Render::RenderSync *v5; // rdi

  pObject = this->SubmissionDummyFence.pObject;
  if ( pObject )
    pObject->HasData = 0;
  v3 = this->SubmissionDummyFence.pObject;
  if ( v3 )
    Scaleform::Render::Fence::Release(v3);
  this->SubmissionDummyFence.pObject = 0i64;
  pNext = this->FenceFrames.Root.pNext;
  if ( pNext != (Scaleform::Render::FenceFrame *)&this->FenceFrames )
  {
    do
    {
      v5 = (Scaleform::Render::RenderSync *)pNext->pNext;
      pNext->pPrev->pNext = (Scaleform::Render::FenceFrame *)v5;
      pNext->pNext->Scaleform::ListNode<Scaleform::Render::FenceFrame>::$CA6632F25D157B08E431811E4D2164C6::pPrev = pNext->pPrev;
      pNext->pPrev = (Scaleform::Render::FenceFrame *)-1i64;
      pNext->pNext = (Scaleform::Render::FenceFrame *)-1i64;
      Scaleform::Render::FenceFrame::~FenceFrame(pNext);
      pNext->pPrev = (Scaleform::Render::FenceFrame *)this->FenceFrameAlloc.FirstEmptySlot;
      this->FenceFrameAlloc.FirstEmptySlot = (Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> >::NodeType *)pNext;
      pNext = (Scaleform::Render::FenceFrame *)v5;
      --this->OutstandingFrames;
    }
    while ( v5 != (Scaleform::Render::RenderSync *)&this->FenceFrames );
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::Fence>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Fence>,2>,Scaleform::ArrayConstPolicy<128,64,1>>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::Fence>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Fence>,2>,Scaleform::ArrayConstPolicy<128,64,1> > *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  unsigned __int64 Capacity; // rax
  Scaleform::Ptr<Scaleform::Render::Fence> *Data; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r8
  Scaleform::Ptr<Scaleform::Render::Fence> *v10; // rax
  int v11; // [rsp+30h] [rbp+8h] BYREF

  Capacity = this->Policy.Capacity;
  if ( newCapacity != Capacity && newCapacity >= Capacity )
  {
    Data = this->Data;
    v7 = 128i64;
    if ( newCapacity >= 0x80 )
      v7 = newCapacity;
    v8 = (v7 + 63) & 0xFFFFFFFFFFFFFFC0ui64;
    v9 = 8 * v8;
    if ( Data )
    {
      v10 = (Scaleform::Ptr<Scaleform::Render::Fence> *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                          Scaleform::Memory::pGlobalHeap,
                                                          Data,
                                                          v9);
      this->Policy.Capacity = v8;
      this->Data = v10;
    }
    else
    {
      v11 = 2;
      this->Data = (Scaleform::Ptr<Scaleform::Render::Fence> *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                                 Scaleform::Memory::pGlobalHeap,
                                                                 pheapAddr,
                                                                 v9,
                                                                 &v11);
      this->Policy.Capacity = v8;
    }
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::Fence>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Fence>,2>,Scaleform::ArrayConstPolicy<128,64,1>>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::Fence>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Fence>,2>,Scaleform::ArrayConstPolicy<128,64,1> > *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rdx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::Fence>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Fence>,2>,Scaleform::ArrayConstPolicy<128,64,1>>::Reserve(
        this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    Scaleform::ConstructorMov<Scaleform::Ptr<Scaleform::Render::Fence>>::DestructArray(
      &this->Data[newSize],
      Size - newSize);
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::Fence>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Fence>,2>,Scaleform::ArrayConstPolicy<128,64,1>>::Reserve(
        this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

char __fastcall Scaleform::Render::RenderSync::SetContext(
        Scaleform::Render::RenderSync *this,
        Scaleform::Render::HAL *phal)
{
  Scaleform::Render::HAL *v5; // rcx

  this->pHAL = phal;
  if ( phal )
  {
    if ( !phal->GetRenderSync(phal) )
      return 1;
    if ( this != phal->GetRenderSync(phal) )
      return 0;
  }
  v5 = this->pHAL;
  if ( v5 )
    this->SubmissionUpdateMethod = 2 - ((v5->ConfigFlags & 0x20000000) != 0);
  else
    this->SubmissionUpdateMethod = SubmissionType_Invalid;
  if ( v5 )
  {
    this->pMemoryManager = v5->GetMemoryManager(v5);
    return 1;
  }
  Scaleform::Render::RenderSync::ReleaseOutstandingFrames(this);
  return 1;
}

char __fastcall Scaleform::Render::FenceImpl::WaitFence(Scaleform::Render::FenceImpl *this, __int64 waitType)
{
  unsigned __int64 APIHandle; // r8
  Scaleform::Render::RenderSync *RSContext; // rcx

  if ( !this->Parent )
    return 1;
  APIHandle = this->APIHandle;
  RSContext = this->RSContext;
  if ( APIHandle != -1i64 )
    return ((__int64 (__fastcall *)(Scaleform::Render::RenderSync *, __int64))RSContext->WaitFence)(RSContext, waitType);
  Scaleform::Render::RenderSync::NotifySubmission(RSContext, SubmissionType_Scene);
  return 0;
}

Scaleform::ListAllocBase<Scaleform::Render::Fence,127,Scaleform::AllocatorLH<Scaleform::Render::Fence,2> >::PageType *__fastcall Scaleform::ListAllocBase<Scaleform::Render::Fence,127,Scaleform::AllocatorLH<Scaleform::Render::Fence,2>>::allocate(
        Scaleform::ListAllocBase<Scaleform::Render::Fence,127,Scaleform::AllocatorLH<Scaleform::Render::Fence,2> > *this)
{
  Scaleform::ListAllocBase<Scaleform::Render::Fence,127,Scaleform::AllocatorLH<Scaleform::Render::Fence,2> >::PageType *result; // rax
  unsigned int NumElementsInPage; // eax
  Scaleform::ListAllocBase<Scaleform::Render::Fence,127,Scaleform::AllocatorLH<Scaleform::Render::Fence,2> >::PageType *v4; // rdx
  void *pHeapOrPtr; // rdx
  Scaleform::ListAllocBase<Scaleform::Render::Fence,127,Scaleform::AllocatorLH<Scaleform::Render::Fence,2> >::PageType *LastPage; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  result = (Scaleform::ListAllocBase<Scaleform::Render::Fence,127,Scaleform::AllocatorLH<Scaleform::Render::Fence,2> >::PageType *)this->FirstEmptySlot;
  if ( result )
  {
    this->FirstEmptySlot = (Scaleform::ListAllocBase<Scaleform::Render::Fence,127,Scaleform::AllocatorLH<Scaleform::Render::Fence,2> >::NodeType *)result->Data[0].Data;
  }
  else
  {
    NumElementsInPage = this->NumElementsInPage;
    if ( NumElementsInPage >= 0x7F )
    {
      pHeapOrPtr = this->pHeapOrPtr;
      v7 = 2;
      result = (Scaleform::ListAllocBase<Scaleform::Render::Fence,127,Scaleform::AllocatorLH<Scaleform::Render::Fence,2> >::PageType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pHeapOrPtr, 2040i64, &v7);
      result->pNext = 0i64;
      LastPage = this->LastPage;
      if ( LastPage )
        LastPage->pNext = result;
      else
        this->FirstPage = result;
      this->LastPage = result;
      this->NumElementsInPage = 1;
    }
    else
    {
      v4 = this->LastPage;
      if ( v4 )
      {
        this->NumElementsInPage = NumElementsInPage + 1;
        return (Scaleform::ListAllocBase<Scaleform::Render::Fence,127,Scaleform::AllocatorLH<Scaleform::Render::Fence,2> >::PageType *)((char *)v4 + 16 * NumElementsInPage);
      }
      else
      {
        return 0i64;
      }
    }
  }
  return result;
}

Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> >::PageType *__fastcall Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2>>::allocate(
        Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> > *this)
{
  Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> >::PageType *result; // rax
  unsigned int NumElementsInPage; // eax
  Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> >::PageType *v4; // rdx
  void *pHeapOrPtr; // rdx
  Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> >::PageType *LastPage; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  result = (Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> >::PageType *)this->FirstEmptySlot;
  if ( result )
  {
    this->FirstEmptySlot = (Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> >::NodeType *)result->Data[0].pPrev;
  }
  else
  {
    NumElementsInPage = this->NumElementsInPage;
    if ( NumElementsInPage >= 0x7F )
    {
      pHeapOrPtr = this->pHeapOrPtr;
      v7 = 2;
      result = (Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> >::PageType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pHeapOrPtr, 8136i64, &v7);
      result->pNext = 0i64;
      LastPage = this->LastPage;
      if ( LastPage )
        LastPage->pNext = result;
      else
        this->FirstPage = result;
      this->LastPage = result;
      this->NumElementsInPage = 1;
    }
    else
    {
      v4 = this->LastPage;
      if ( v4 )
      {
        this->NumElementsInPage = NumElementsInPage + 1;
        return (Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> >::PageType *)((char *)v4 + 64 * (unsigned __int64)NumElementsInPage);
      }
      else
      {
        return 0i64;
      }
    }
  }
  return result;
}

Scaleform::ListAllocBase<Scaleform::Render::FenceImpl,127,Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2> >::PageType *__fastcall Scaleform::ListAllocBase<Scaleform::Render::FenceImpl,127,Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2>>::allocate(
        Scaleform::ListAllocBase<Scaleform::Render::FenceImpl,127,Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2> > *this)
{
  Scaleform::ListAllocBase<Scaleform::Render::FenceImpl,127,Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2> >::PageType *result; // rax
  unsigned int NumElementsInPage; // eax
  Scaleform::ListAllocBase<Scaleform::Render::FenceImpl,127,Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2> >::PageType *v4; // rdx
  void *pHeapOrPtr; // rdx
  Scaleform::ListAllocBase<Scaleform::Render::FenceImpl,127,Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2> >::PageType *LastPage; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  result = (Scaleform::ListAllocBase<Scaleform::Render::FenceImpl,127,Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2> >::PageType *)this->FirstEmptySlot;
  if ( result )
  {
    this->FirstEmptySlot = (Scaleform::ListAllocBase<Scaleform::Render::FenceImpl,127,Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2> >::NodeType *)result->Data[0].RSContext;
  }
  else
  {
    NumElementsInPage = this->NumElementsInPage;
    if ( NumElementsInPage >= 0x7F )
    {
      pHeapOrPtr = this->pHeapOrPtr;
      v7 = 2;
      result = (Scaleform::ListAllocBase<Scaleform::Render::FenceImpl,127,Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2> >::PageType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pHeapOrPtr, 4072i64, &v7);
      result->pNext = 0i64;
      LastPage = this->LastPage;
      if ( LastPage )
        LastPage->pNext = result;
      else
        this->FirstPage = result;
      this->LastPage = result;
      this->NumElementsInPage = 1;
    }
    else
    {
      v4 = this->LastPage;
      if ( v4 )
      {
        this->NumElementsInPage = NumElementsInPage + 1;
        return (Scaleform::ListAllocBase<Scaleform::Render::FenceImpl,127,Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2> >::PageType *)((char *)v4 + 32 * NumElementsInPage);
      }
      else
      {
        return 0i64;
      }
    }
  }
  return result;
}

