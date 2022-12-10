#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_allocbitset1.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_freebin.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_bookkeeper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_pagetable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_heaptypes.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_starter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_granulator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_alloclite.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_root.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_allocengine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_allocbitset2.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_heapbitset2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"

unsigned long long Scaleform::RootMem[281]; // 0x140A72DD0
Scaleform::MemoryHeap * Scaleform::MemoryHeap::CreateRootHeapPT(const Scaleform::MemoryHeap::HeapDesc & desc); // 0x1403BFC30
bool Scaleform::MemoryHeap::ReleaseRootHeapPT(); // 0x1403C0460
Scaleform::MemoryHeapPT::MemoryHeapPT(); // 0x1403BF7A0
void Scaleform::MemoryHeapPT::CreateArena(unsigned long long arena, Scaleform::SysAllocPaged * sysAlloc); // 0x1403BFB60
void Scaleform::MemoryHeapPT::DestroyArena(unsigned long long arena); // 0x1403BFCE0
bool Scaleform::MemoryHeapPT::ArenaIsEmpty(unsigned long long arena); // 0x1403BFB50
Scaleform::MemoryHeap * Scaleform::MemoryHeapPT::CreateHeap(const char * name, const Scaleform::MemoryHeap::HeapDesc & desc); // 0x1403BFB70
unsigned long long Scaleform::MemoryHeapPT::GetFootprint(); // 0x1403BFE70
unsigned long long Scaleform::MemoryHeapPT::GetTotalFootprint(); // 0x1403BFFD0
unsigned long long Scaleform::MemoryHeapPT::GetUsedSpace(); // 0x1403C0220
unsigned long long Scaleform::MemoryHeapPT::GetTotalUsedSpace(); // 0x1403C0080
void Scaleform::MemoryHeapPT::SetLimitHandler(Scaleform::MemoryHeap::LimitHandler * handler); // 0x1403C0570
void Scaleform::MemoryHeapPT::SetLimit(unsigned long long newLimit); // 0x1403C04F0
void Scaleform::MemoryHeapPT::AddRef(); // 0x1403BF830
void Scaleform::MemoryHeapPT::Release(); // 0x1403C0360
bool Scaleform::MemoryHeapPT::dumpMemoryLeaks(); // 0x14004BBE0
void Scaleform::MemoryHeapPT::destroyItself(); // 0x1403C0700
void * Scaleform::MemoryHeapPT::Alloc(unsigned long long size, const Scaleform::AllocInfo * info); // 0x1403BF900
void * Scaleform::MemoryHeapPT::Alloc(unsigned long long size, unsigned long long align, const Scaleform::AllocInfo * info); // 0x1403BF870
void * Scaleform::MemoryHeapPT::Realloc(void * oldPtr, unsigned long long newSize); // 0x1403C0270
void Scaleform::MemoryHeapPT::Free(void * ptr); // 0x1403BFCF0
void * Scaleform::MemoryHeapPT::AllocAutoHeap(const void * thisPtr, unsigned long long size, const Scaleform::AllocInfo * info); // 0x1403BFA60
void * Scaleform::MemoryHeapPT::AllocAutoHeap(const void * thisPtr, unsigned long long size, unsigned long long align, const Scaleform::AllocInfo * info); // 0x1403BF970
Scaleform::MemoryHeap * Scaleform::MemoryHeapPT::GetAllocHeapOrNULL(const void * thisPtr); // 0x1403BFDF0
unsigned long long Scaleform::MemoryHeapPT::GetUsableSize(const void * ptr); // 0x1403C0130
void Scaleform::MemoryHeapPT::releaseCachedMem(); // 0x1403C0880
void * Scaleform::MemoryHeapPT::AllocSysDirect(unsigned long long size); // 0x1403BFB40
void Scaleform::MemoryHeapPT::FreeSysDirect(void * ptr, unsigned long long size); // 0x1403BFDE0
bool Scaleform::MemoryHeapPT::GetStats(Scaleform::StatBag * bag); // 0x1403BFF00
void Scaleform::MemoryHeapPT::VisitMem(Scaleform::Heap::MemVisitor * visitor, unsigned long flags); // 0x1403C0610
void Scaleform::MemoryHeapPT::VisitHeapSegments(Scaleform::Heap::SegVisitor * visitor); // 0x1403C05C0
void Scaleform::MemoryHeapPT::VisitRootSegments(Scaleform::Heap::SegVisitor * visitor); // 0x1403C0670
void Scaleform::MemoryHeapPT::getUserDebugStats(Scaleform::MemoryHeap::RootStats * stats); // 0x1403C0770
void Scaleform::MemoryHeapPT::GetRootStats(Scaleform::MemoryHeap::RootStats * stats); // 0x1403BFEC0
void Scaleform::MemoryHeapPT::checkIntegrity(); // 0x1403C0680
void Scaleform::MemoryHeapPT::SetTracer(Scaleform::MemoryHeap::HeapTracer * tracer); // 0x14002E7C0
bool Scaleform::SysAllocPaged::initHeapEngine(const void * heapDesc); // 0x1403C0820
bool Scaleform::SysAllocPaged::shutdownHeapEngine(); // 0x1403C0910//decompilation failure at 140A72DD0!
void __fastcall Scaleform::MemoryHeapPT::MemoryHeapPT(Scaleform::MemoryHeapPT *this)
{
  Scaleform::MemoryHeap::MemoryHeap(this);
  this->__vftable = (Scaleform::MemoryHeapPT_vtbl *)&Scaleform::MemoryHeapPT::`vftable';
  this->pEngine = 0i64;
  this->pDebugStorage = 0i64;
}

void __fastcall Scaleform::MemoryHeapPT::AddRef(Scaleform::MemoryHeapPT *this)
{
  Scaleform::HeapPT::HeapRoot *v1; // rbx

  v1 = Scaleform::HeapPT::GlobalRoot;
  Scaleform::Lock::DoLock(&Scaleform::HeapPT::GlobalRoot->RootLock.mLock);
  ++this->RefCount;
  Scaleform::Lock::Unlock(&v1->RootLock.mLock);
}

void *__fastcall Scaleform::MemoryHeapPT::Alloc(
        Scaleform::MemoryHeapPT *this,
        unsigned __int64 size,
        unsigned __int64 align,
        const Scaleform::AllocInfo *info)
{
  Scaleform::Lock *p_HeapLock; // rbx
  void *v8; // rdi

  if ( !this->UseLocks )
    return Scaleform::HeapPT::AllocEngine::Alloc(this->pEngine, size, align);
  p_HeapLock = &this->HeapLock;
  Scaleform::Lock::DoLock(&this->HeapLock);
  v8 = Scaleform::HeapPT::AllocEngine::Alloc(this->pEngine, size, align);
  Scaleform::Lock::Unlock(p_HeapLock);
  return v8;
}

void *__fastcall Scaleform::MemoryHeapPT::Alloc(
        Scaleform::MemoryHeapPT *this,
        unsigned __int64 size,
        const Scaleform::AllocInfo *info)
{
  Scaleform::Lock *p_HeapLock; // rbx
  void *v6; // rdi

  if ( !this->UseLocks )
    return Scaleform::HeapPT::AllocEngine::Alloc(this->pEngine, size);
  p_HeapLock = &this->HeapLock;
  Scaleform::Lock::DoLock(&this->HeapLock);
  v6 = Scaleform::HeapPT::AllocEngine::Alloc(this->pEngine, size);
  Scaleform::Lock::Unlock(p_HeapLock);
  return v6;
}

void *__fastcall Scaleform::MemoryHeapPT::AllocAutoHeap(
        Scaleform::MemoryHeapPT *this,
        const void *thisPtr,
        unsigned __int64 size,
        unsigned __int64 align)
{
  Scaleform::MemoryHeapPT *pHeap; // rdi
  void *v7; // rax
  Scaleform::Lock *p_HeapLock; // rcx
  void *v9; // rdi

  pHeap = Scaleform::HeapPT::GlobalPageTable->RootTable[(unsigned __int64)thisPtr >> 52].pTable[((unsigned __int64)thisPtr >> 40) & 0xFFF].pTable[((unsigned __int64)thisPtr >> 28) & 0xFFF].pTable[(unsigned __int8)((unsigned __int64)thisPtr >> 20)].pTable[(unsigned __int8)((unsigned __int64)thisPtr >> 12)].pSegment->pHeap;
  if ( !pHeap->UseLocks )
    return Scaleform::HeapPT::AllocEngine::Alloc(pHeap->pEngine, size, align);
  Scaleform::Lock::DoLock(&pHeap->HeapLock);
  v7 = Scaleform::HeapPT::AllocEngine::Alloc(pHeap->pEngine, size, align);
  p_HeapLock = &pHeap->HeapLock;
  v9 = v7;
  Scaleform::Lock::Unlock(p_HeapLock);
  return v9;
}

void *__fastcall Scaleform::MemoryHeapPT::AllocAutoHeap(
        Scaleform::MemoryHeapPT *this,
        const void *thisPtr,
        unsigned __int64 size,
        const Scaleform::AllocInfo *info)
{
  Scaleform::MemoryHeapPT *pHeap; // rdi
  void *v6; // rax
  Scaleform::Lock *p_HeapLock; // rcx
  void *v8; // rdi

  pHeap = Scaleform::HeapPT::GlobalPageTable->RootTable[(unsigned __int64)thisPtr >> 52].pTable[((unsigned __int64)thisPtr >> 40) & 0xFFF].pTable[((unsigned __int64)thisPtr >> 28) & 0xFFF].pTable[(unsigned __int8)((unsigned __int64)thisPtr >> 20)].pTable[(unsigned __int8)((unsigned __int64)thisPtr >> 12)].pSegment->pHeap;
  if ( !pHeap->UseLocks )
    return Scaleform::HeapPT::AllocEngine::Alloc(pHeap->pEngine, size);
  Scaleform::Lock::DoLock(&pHeap->HeapLock);
  v6 = Scaleform::HeapPT::AllocEngine::Alloc(pHeap->pEngine, size);
  p_HeapLock = &pHeap->HeapLock;
  v8 = v6;
  Scaleform::Lock::Unlock(p_HeapLock);
  return v8;
}

void *__fastcall Scaleform::MemoryHeapPT::AllocSysDirect(Scaleform::MemoryHeapPT *this, unsigned __int64 size)
{
  return Scaleform::HeapPT::HeapRoot::AllocSysDirect(Scaleform::HeapPT::GlobalRoot, size);
}

bool __fastcall Scaleform::MemoryHeapPT::ArenaIsEmpty(Scaleform::MemoryHeapPT *this, unsigned __int64 arena)
{
  return Scaleform::HeapPT::HeapRoot::ArenaIsEmpty(Scaleform::HeapPT::GlobalRoot, arena);
}

void __fastcall Scaleform::MemoryHeapPT::CreateArena(
        Scaleform::MemoryHeapPT *this,
        unsigned __int64 arena,
        Scaleform::SysAllocPaged *sysAlloc)
{
  Scaleform::HeapPT::HeapRoot::CreateArena(Scaleform::HeapPT::GlobalRoot, arena, sysAlloc);
}

Scaleform::MemoryHeapPT *__fastcall Scaleform::MemoryHeapPT::CreateHeap(
        Scaleform::MemoryHeapPT *this,
        const char *name,
        const Scaleform::MemoryHeap::HeapDesc *desc)
{
  Scaleform::HeapPT::HeapRoot *v3; // rbx
  Scaleform::MemoryHeapPT *Heap; // rdi

  v3 = Scaleform::HeapPT::GlobalRoot;
  Scaleform::Lock::DoLock(&Scaleform::HeapPT::GlobalRoot->RootLock.mLock);
  Heap = Scaleform::HeapPT::HeapRoot::CreateHeap(Scaleform::HeapPT::GlobalRoot, name, this, desc);
  if ( Heap )
    ++this->RefCount;
  Scaleform::Lock::Unlock(&v3->RootLock.mLock);
  if ( Heap )
  {
    Scaleform::Lock::DoLock(&this->HeapLock);
    Heap->pPrev = this->ChildHeaps.Root.Scaleform::MemoryHeap::pPrev;
    Heap->pNext = (Scaleform::MemoryHeap *)&this->Info.pName;
    this->ChildHeaps.Root.Scaleform::MemoryHeap::pPrev->Scaleform::MemoryHeap::pNext = Heap;
    this->ChildHeaps.Root.Scaleform::MemoryHeap::pPrev = Heap;
    Scaleform::Lock::Unlock(&this->HeapLock);
  }
  return Heap;
}

Scaleform::MemoryHeap *__fastcall Scaleform::MemoryHeap::CreateRootHeapPT(const Scaleform::MemoryHeap::HeapDesc *desc)
{
  Scaleform::LockSafe *p_RootLock; // rbx
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  Scaleform::MemoryHeap::HeapDesc desca; // [rsp+20h] [rbp-48h] BYREF

  if ( !Scaleform::HeapPT::GlobalRoot )
    return 0i64;
  p_RootLock = &Scaleform::HeapPT::GlobalRoot->RootLock;
  Scaleform::Lock::DoLock(&Scaleform::HeapPT::GlobalRoot->RootLock.mLock);
  if ( Scaleform::Memory::pGlobalHeap )
  {
    Scaleform::Lock::Unlock(&p_RootLock->mLock);
    return 0i64;
  }
  v4 = *(_OWORD *)&desc->Flags;
  *(_OWORD *)&desca.Granularity = *(_OWORD *)&desc->Granularity;
  v5 = *(_OWORD *)&desc->HeapId;
  *(_OWORD *)&desca.Flags = v4;
  v6 = *(_OWORD *)&desc->Threshold;
  desca.Arena = *((_QWORD *)&v5 + 1);
  desca.HeapId = 1i64;
  *(_OWORD *)&desca.Threshold = v6;
  Scaleform::Memory::pGlobalHeap = Scaleform::HeapPT::HeapRoot::CreateHeap(
                                     Scaleform::HeapPT::GlobalRoot,
                                     "Global",
                                     0i64,
                                     &desca);
  Scaleform::Lock::Unlock(&p_RootLock->mLock);
  return Scaleform::Memory::pGlobalHeap;
}

void __fastcall Scaleform::MemoryHeapPT::DestroyArena(Scaleform::MemoryHeapPT *this, unsigned __int64 arena)
{
  Scaleform::HeapPT::HeapRoot::DestroyArena(Scaleform::HeapPT::GlobalRoot, arena);
}

void __fastcall Scaleform::MemoryHeapPT::Free(Scaleform::MemoryHeapPT *this, void *ptr)
{
  Scaleform::HeapPT::HeapHeader1 *pTable; // rax
  Scaleform::Heap::HeapSegment *pSegment; // rbp
  Scaleform::MemoryHeapPT *pHeap; // rdi

  if ( ptr )
  {
    pTable = Scaleform::HeapPT::GlobalPageTable->RootTable[(unsigned __int64)ptr >> 52].pTable[((unsigned __int64)ptr >> 40) & 0xFFF].pTable[((unsigned __int64)ptr >> 28) & 0xFFF].pTable[(unsigned __int8)((unsigned __int64)ptr >> 20)].pTable;
    pSegment = pTable[(unsigned __int8)((unsigned __int64)ptr >> 12)].pSegment;
    pHeap = pSegment->pHeap;
    if ( pHeap->UseLocks )
    {
      Scaleform::Lock::DoLock(&pHeap->HeapLock);
      Scaleform::HeapPT::AllocEngine::Free(pHeap->pEngine, pSegment, ptr);
      Scaleform::Lock::Unlock(&pHeap->HeapLock);
    }
    else
    {
      Scaleform::HeapPT::AllocEngine::Free(
        pHeap->pEngine,
        pTable[(unsigned __int8)((unsigned __int64)ptr >> 12)].pSegment,
        ptr);
    }
    if ( ptr == pHeap->pAutoRelease )
      pHeap->Release(pHeap);
  }
}

void __fastcall Scaleform::MemoryHeapPT::FreeSysDirect(Scaleform::MemoryHeapPT *this, void *ptr, unsigned __int64 size)
{
  Scaleform::HeapPT::HeapRoot::FreeSysDirect(Scaleform::HeapPT::GlobalRoot, ptr, size);
}

Scaleform::MemoryHeapPT *__fastcall Scaleform::MemoryHeapPT::GetAllocHeapOrNULL(
        Scaleform::MemoryHeapPT *this,
        const void *thisPtr)
{
  Scaleform::Heap::HeapSegment *pSegment; // rax
  Scaleform::MemoryHeapPT *result; // rax

  pSegment = Scaleform::HeapPT::GlobalPageTable->RootTable[(unsigned __int64)thisPtr >> 52].pTable[((unsigned __int64)thisPtr >> 40) & 0xFFF].pTable[((unsigned __int64)thisPtr >> 28) & 0xFFF].pTable[(unsigned __int8)((unsigned __int64)thisPtr >> 20)].pTable[(unsigned __int8)((unsigned __int64)thisPtr >> 12)].pSegment;
  if ( !pSegment )
    return 0i64;
  result = pSegment->pHeap;
  if ( !result )
    return 0i64;
  return result;
}

unsigned __int64 __fastcall Scaleform::MemoryHeapPT::GetFootprint(Scaleform::MemoryHeapPT *this)
{
  Scaleform::Lock *p_HeapLock; // rbx
  unsigned __int64 Footprint; // rdi

  p_HeapLock = &this->HeapLock;
  Scaleform::Lock::DoLock(&this->HeapLock);
  Footprint = Scaleform::HeapPT::AllocEngine::GetFootprint(this->pEngine);
  Scaleform::Lock::Unlock(p_HeapLock);
  return Footprint;
}

void __fastcall Scaleform::MemoryHeapPT::GetRootStats(
        Scaleform::MemoryHeapPT *this,
        Scaleform::MemoryHeap::RootStats *stats)
{
  Scaleform::HeapPT::HeapRoot::GetStats(Scaleform::HeapPT::GlobalRoot, stats);
  stats->UserDebugFootprint = 0i64;
  stats->UserDebugUsedSpace = 0i64;
  Scaleform::Memory::pGlobalHeap->getUserDebugStats(Scaleform::Memory::pGlobalHeap, stats);
}

char __fastcall Scaleform::MemoryHeapPT::GetStats(Scaleform::MemoryHeapPT *this, Scaleform::StatBag *bag)
{
  Scaleform::Lock *p_HeapLock; // rbx
  Scaleform::MemoryHeap *pNext; // rdi
  bool v5; // zf
  char **p_pName; // rsi
  Scaleform::HeapPT::HeapOtherStats otherStats; // [rsp+20h] [rbp-38h] BYREF

  p_HeapLock = &this->HeapLock;
  Scaleform::Lock::DoLock(&this->HeapLock);
  Scaleform::HeapPT::AllocEngine::GetFootprint(this->pEngine);
  Scaleform::HeapPT::AllocEngine::GetUsedSpace(this->pEngine);
  Scaleform::HeapPT::AllocEngine::GetHeapOtherStats(this->pEngine, &otherStats);
  otherStats.Bookkeeping += this->SelfSize;
  pNext = this->ChildHeaps.Root.pNext;
  v5 = &this->ChildHeaps == 0i64;
  p_pName = &this->Info.pName;
  if ( v5 )
    p_pName = 0i64;
  while ( pNext != (Scaleform::MemoryHeap *)p_pName )
  {
    if ( (pNext->Info.Desc.Flags & 0x1000) == 0 )
      pNext->GetTotalFootprint(pNext);
    pNext = pNext->pNext;
  }
  Scaleform::Lock::Unlock(p_HeapLock);
  return 1;
}

unsigned __int64 __fastcall Scaleform::MemoryHeapPT::GetTotalFootprint(Scaleform::MemoryHeapPT *this)
{
  Scaleform::Lock *p_HeapLock; // rbx
  unsigned __int64 Footprint; // rsi
  Scaleform::MemoryHeap *pNext; // rdi
  bool v5; // zf
  char **p_pName; // rbp
  __int64 v7; // rax

  p_HeapLock = &this->HeapLock;
  Scaleform::Lock::DoLock(&this->HeapLock);
  Footprint = 0i64;
  if ( (this->Info.Desc.Flags & 0x1000) == 0 )
    Footprint = Scaleform::HeapPT::AllocEngine::GetFootprint(this->pEngine);
  pNext = this->ChildHeaps.Root.pNext;
  v5 = &this->ChildHeaps == 0i64;
  p_pName = &this->Info.pName;
  if ( v5 )
    p_pName = 0i64;
  while ( pNext != (Scaleform::MemoryHeap *)p_pName )
  {
    v7 = pNext->GetTotalFootprint(pNext);
    pNext = pNext->pNext;
    Footprint += v7;
  }
  Scaleform::Lock::Unlock(p_HeapLock);
  return Footprint;
}

unsigned __int64 __fastcall Scaleform::MemoryHeapPT::GetTotalUsedSpace(Scaleform::MemoryHeapPT *this)
{
  Scaleform::Lock *p_HeapLock; // rbx
  unsigned __int64 UsedSpace; // rsi
  Scaleform::MemoryHeap *pNext; // rdi
  bool v5; // zf
  char **p_pName; // rbp
  __int64 v7; // rax

  p_HeapLock = &this->HeapLock;
  Scaleform::Lock::DoLock(&this->HeapLock);
  UsedSpace = 0i64;
  if ( (this->Info.Desc.Flags & 0x1000) == 0 )
    UsedSpace = Scaleform::HeapPT::AllocEngine::GetUsedSpace(this->pEngine);
  pNext = this->ChildHeaps.Root.pNext;
  v5 = &this->ChildHeaps == 0i64;
  p_pName = &this->Info.pName;
  if ( v5 )
    p_pName = 0i64;
  while ( pNext != (Scaleform::MemoryHeap *)p_pName )
  {
    v7 = pNext->GetTotalUsedSpace(pNext);
    pNext = pNext->pNext;
    UsedSpace += v7;
  }
  Scaleform::Lock::Unlock(p_HeapLock);
  return UsedSpace;
}

unsigned __int64 __fastcall Scaleform::MemoryHeapPT::GetUsableSize(Scaleform::MemoryHeapPT *this, const void *ptr)
{
  Scaleform::Heap::HeapSegment *pSegment; // rbp
  Scaleform::MemoryHeapPT *pHeap; // rsi
  unsigned __int64 UsableSize; // rdi

  pSegment = Scaleform::HeapPT::GlobalPageTable->RootTable[(unsigned __int64)ptr >> 52].pTable[((unsigned __int64)ptr >> 40) & 0xFFF].pTable[((unsigned __int64)ptr >> 28) & 0xFFF].pTable[(unsigned __int8)((unsigned __int64)ptr >> 20)].pTable[(unsigned __int8)((unsigned __int64)ptr >> 12)].pSegment;
  pHeap = pSegment->pHeap;
  if ( !pHeap->UseLocks )
    return Scaleform::HeapPT::AllocEngine::GetUsableSize(pHeap->pEngine, pSegment, ptr);
  Scaleform::Lock::DoLock(&pHeap->HeapLock);
  UsableSize = Scaleform::HeapPT::AllocEngine::GetUsableSize(pHeap->pEngine, pSegment, ptr);
  Scaleform::Lock::Unlock(&pHeap->HeapLock);
  return UsableSize;
}

unsigned __int64 __fastcall Scaleform::MemoryHeapPT::GetUsedSpace(Scaleform::MemoryHeapPT *this)
{
  Scaleform::Lock *p_HeapLock; // rbx
  unsigned __int64 UsedSpace; // rdi

  p_HeapLock = &this->HeapLock;
  Scaleform::Lock::DoLock(&this->HeapLock);
  UsedSpace = Scaleform::HeapPT::AllocEngine::GetUsedSpace(this->pEngine);
  Scaleform::Lock::Unlock(p_HeapLock);
  return UsedSpace;
}

void *__fastcall Scaleform::MemoryHeapPT::Realloc(
        Scaleform::MemoryHeapPT *this,
        void *oldPtr,
        unsigned __int64 newSize)
{
  Scaleform::Heap::HeapSegment *pSegment; // rbp
  Scaleform::MemoryHeapPT *pHeap; // rsi
  void *v7; // rdi

  pSegment = Scaleform::HeapPT::GlobalPageTable->RootTable[(unsigned __int64)oldPtr >> 52].pTable[((unsigned __int64)oldPtr >> 40) & 0xFFF].pTable[((unsigned __int64)oldPtr >> 28) & 0xFFF].pTable[(unsigned __int8)((unsigned __int64)oldPtr >> 20)].pTable[(unsigned __int8)((unsigned __int64)oldPtr >> 12)].pSegment;
  pHeap = pSegment->pHeap;
  if ( !pHeap->UseLocks )
    return Scaleform::HeapPT::AllocEngine::Realloc(pHeap->pEngine, pSegment, oldPtr, newSize);
  Scaleform::Lock::DoLock(&pHeap->HeapLock);
  v7 = Scaleform::HeapPT::AllocEngine::Realloc(pHeap->pEngine, pSegment, oldPtr, newSize);
  Scaleform::Lock::Unlock(&pHeap->HeapLock);
  return v7;
}

void __fastcall Scaleform::MemoryHeapPT::Release(Scaleform::MemoryHeapPT *this)
{
  Scaleform::MemoryHeap *pParent; // r14
  Scaleform::Lock *p_HeapLock; // rbx
  Scaleform::HeapPT::HeapRoot *v4; // rdi
  Scaleform::HeapPT::HeapRoot *v6; // rbx

  pParent = this->Info.pParent;
  if ( pParent )
  {
    p_HeapLock = &pParent->HeapLock;
    Scaleform::Lock::DoLock(&pParent->HeapLock);
    v4 = Scaleform::HeapPT::GlobalRoot;
    Scaleform::Lock::DoLock(&Scaleform::HeapPT::GlobalRoot->RootLock.mLock);
    if ( this->RefCount-- == 1 )
    {
      this->dumpMemoryLeaks(this);
      this->pPrev->Scaleform::MemoryHeap::pNext = this->pNext;
      this->pNext->Scaleform::MemoryHeap::pPrev = this->pPrev;
      Scaleform::HeapPT::HeapRoot::DestroyHeap(Scaleform::HeapPT::GlobalRoot, this);
    }
    else
    {
      pParent = 0i64;
    }
    Scaleform::Lock::Unlock(&v4->RootLock.mLock);
    Scaleform::Lock::Unlock(p_HeapLock);
    if ( pParent )
      pParent->Release(pParent);
  }
  else
  {
    v6 = Scaleform::HeapPT::GlobalRoot;
    Scaleform::Lock::DoLock(&Scaleform::HeapPT::GlobalRoot->RootLock.mLock);
    --this->RefCount;
    Scaleform::Lock::Unlock(&v6->RootLock.mLock);
  }
}

char __fastcall Scaleform::MemoryHeap::ReleaseRootHeapPT()
{
  Scaleform::HeapPT::HeapRoot *v0; // rbx
  bool v2; // di

  v0 = Scaleform::HeapPT::GlobalRoot;
  if ( !Scaleform::HeapPT::GlobalRoot )
    return 1;
  Scaleform::Lock::DoLock(&Scaleform::HeapPT::GlobalRoot->RootLock.mLock);
  if ( Scaleform::Memory::pGlobalHeap )
  {
    v2 = !Scaleform::Memory::pGlobalHeap->dumpMemoryLeaks(Scaleform::Memory::pGlobalHeap);
    Scaleform::Memory::pGlobalHeap->destroyItself(Scaleform::Memory::pGlobalHeap);
    Scaleform::Memory::pGlobalHeap = 0i64;
  }
  else
  {
    v2 = 1;
  }
  Scaleform::Lock::Unlock(&v0->RootLock.mLock);
  return v2;
}

void __fastcall Scaleform::MemoryHeapPT::SetLimit(Scaleform::MemoryHeapPT *this, unsigned __int64 newLimit)
{
  Scaleform::Lock::DoLock(&this->HeapLock);
  if ( newLimit < this->Info.Desc.Limit && newLimit < Scaleform::HeapPT::AllocEngine::GetFootprint(this->pEngine) )
    newLimit = Scaleform::HeapPT::AllocEngine::GetFootprint(this->pEngine);
  this->Info.Desc.Limit = Scaleform::HeapPT::AllocEngine::SetLimit(this->pEngine, newLimit);
  Scaleform::Lock::Unlock(&this->HeapLock);
}

void __fastcall Scaleform::MemoryHeapPT::SetLimitHandler(
        Scaleform::MemoryHeapPT *this,
        Scaleform::MemoryHeap::LimitHandler *handler)
{
  Scaleform::Lock::DoLock(&this->HeapLock);
  this->pEngine->pLimHandler = handler;
  Scaleform::Lock::Unlock(&this->HeapLock);
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall Scaleform::MemoryHeapPT::VisitHeapSegments(
        Scaleform::MemoryHeapPT *this,
        Scaleform::Heap::SegVisitor *visitor)
{
  Scaleform::Lock::DoLock(&this->HeapLock);
  Scaleform::HeapPT::AllocEngine::VisitSegments(this->pEngine, visitor);
  Scaleform::Lock::Unlock(&this->HeapLock);
}

void __fastcall Scaleform::MemoryHeapPT::VisitMem(
        Scaleform::MemoryHeapPT *this,
        Scaleform::Heap::MemVisitor *visitor,
        unsigned int flags)
{
  Scaleform::Lock::DoLock(&this->HeapLock);
  Scaleform::HeapPT::AllocEngine::VisitMem(this->pEngine, visitor, flags);
  Scaleform::Lock::Unlock(&this->HeapLock);
}

void __fastcall Scaleform::MemoryHeapPT::VisitRootSegments(
        Scaleform::MemoryHeapPT *this,
        Scaleform::Heap::SegVisitor *visitor)
{
  Scaleform::HeapPT::HeapRoot::VisitSegments(Scaleform::HeapPT::GlobalRoot, visitor);
}

void __fastcall Scaleform::MemoryHeapPT::checkIntegrity(Scaleform::MemoryHeapPT *this)
{
  Scaleform::Lock *p_HeapLock; // rbx
  Scaleform::MemoryHeap *pNext; // rdi
  Scaleform::List<Scaleform::MemoryHeap,Scaleform::MemoryHeap,Scaleform::ListNode<Scaleform::MemoryHeap> > *p_ChildHeaps; // rax
  char **p_pName; // rsi

  p_HeapLock = &this->HeapLock;
  Scaleform::Lock::DoLock(&this->HeapLock);
  ActorWeapon::ActionFlagCheck((_SETJMP_FLOAT128 *)&this->pEngine->Allocator.Bin);
  pNext = this->ChildHeaps.Root.pNext;
  p_ChildHeaps = &this->ChildHeaps;
  p_pName = &this->Info.pName;
  if ( !p_ChildHeaps )
    p_pName = 0i64;
  while ( pNext != (Scaleform::MemoryHeap *)p_pName )
  {
    pNext->checkIntegrity(pNext);
    pNext = pNext->pNext;
  }
  Scaleform::Lock::Unlock(p_HeapLock);
}

void __fastcall Scaleform::MemoryHeapPT::destroyItself(Scaleform::MemoryHeapPT *this)
{
  Scaleform::MemoryHeap *pNext; // rcx
  char **p_pName; // rdi
  Scaleform::MemoryHeap *v4; // rbx

  pNext = this->ChildHeaps.Root.pNext;
  p_pName = &this->Info.pName;
  if ( this == (Scaleform::MemoryHeapPT *)-136i64 )
    p_pName = 0i64;
  while ( pNext != (Scaleform::MemoryHeap *)p_pName )
  {
    v4 = pNext->pNext;
    pNext->destroyItself(pNext);
    pNext = v4;
  }
  Scaleform::HeapPT::HeapRoot::DestroyHeap(Scaleform::HeapPT::GlobalRoot, this);
}

bool __fastcall Scaleform::GFx::InteractiveObject::OnCharEvent(
        Scaleform::Render::Texture *this,
        Scaleform::Render::RenderTargetData *__formal)
{
  return 0;
}

void __fastcall Scaleform::MemoryHeapPT::getUserDebugStats(
        Scaleform::MemoryHeapPT *this,
        Scaleform::MemoryHeap::RootStats *stats)
{
  Scaleform::Lock *p_HeapLock; // rbx
  Scaleform::MemoryHeap *pNext; // rdi
  Scaleform::List<Scaleform::MemoryHeap,Scaleform::MemoryHeap,Scaleform::ListNode<Scaleform::MemoryHeap> > *p_ChildHeaps; // rax
  char **p_pName; // rsi

  p_HeapLock = &this->HeapLock;
  Scaleform::Lock::DoLock(&this->HeapLock);
  if ( (this->Info.Desc.Flags & 0x1000) != 0 )
  {
    stats->UserDebugFootprint += Scaleform::HeapPT::AllocEngine::GetFootprint(this->pEngine);
    stats->UserDebugUsedSpace += Scaleform::HeapPT::AllocEngine::GetUsedSpace(this->pEngine);
  }
  pNext = this->ChildHeaps.Root.pNext;
  p_ChildHeaps = &this->ChildHeaps;
  p_pName = &this->Info.pName;
  if ( !p_ChildHeaps )
    p_pName = 0i64;
  while ( pNext != (Scaleform::MemoryHeap *)p_pName )
  {
    pNext->getUserDebugStats(pNext, stats);
    pNext = pNext->pNext;
  }
  Scaleform::Lock::Unlock(p_HeapLock);
}

bool __fastcall Scaleform::SysAllocPaged::initHeapEngine(Scaleform::SysAllocPaged *this, const void *heapDesc)
{
  if ( !Scaleform::HeapPT::GlobalPageTable && !Scaleform::HeapPT::GlobalRoot )
  {
    Scaleform::HeapPT::PageTable::Init();
    Scaleform::HeapPT::HeapRoot::HeapRoot(&Scaleform::RootMem, this);
  }
  return Scaleform::MemoryHeap::CreateRootHeapPT((const Scaleform::MemoryHeap::HeapDesc *)heapDesc) != 0i64;
}

void __fastcall Scaleform::MemoryHeapPT::releaseCachedMem(Scaleform::MemoryHeapPT *this)
{
  Scaleform::MemoryHeap *pNext; // rdi
  char **p_pName; // rsi

  Scaleform::Lock::DoLock(&this->HeapLock);
  pNext = this->ChildHeaps.Root.pNext;
  p_pName = &this->Info.pName;
  if ( this == (Scaleform::MemoryHeapPT *)-136i64 )
    p_pName = 0i64;
  while ( pNext != (Scaleform::MemoryHeap *)p_pName )
  {
    pNext->releaseCachedMem(pNext);
    pNext = pNext->pNext;
  }
  Scaleform::HeapPT::AllocEngine::ReleaseCachedMem(this->pEngine);
  Scaleform::Lock::Unlock(&this->HeapLock);
}

__int64 __fastcall Scaleform::SysAllocPaged::shutdownHeapEngine(Scaleform::SysAllocPaged *this)
{
  unsigned __int8 v1; // bl

  v1 = Scaleform::MemoryHeap::ReleaseRootHeapPT();
  if ( Scaleform::HeapPT::GlobalPageTable && Scaleform::HeapPT::GlobalRoot )
  {
    Scaleform::HeapPT::HeapRoot::DestroyAllArenas(Scaleform::HeapPT::GlobalRoot);
    Scaleform::HeapPT::GlobalPageTable = 0i64;
    Scaleform::HeapPT::HeapRoot::~HeapRoot(Scaleform::HeapPT::GlobalRoot);
    Scaleform::HeapPT::GlobalRoot = 0i64;
  }
  return v1;
}

