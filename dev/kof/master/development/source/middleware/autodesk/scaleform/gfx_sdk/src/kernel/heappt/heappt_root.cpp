#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_starter.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_granulator.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_alloclite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_allocengine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_allocbitset2.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_heapbitset2.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_allocbitset1.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_freebin.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_bookkeeper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_pagetable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_heaptypes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_root.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_memoryheap.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

Scaleform::HeapPT::HeapRoot * Scaleform::HeapPT::GlobalRoot; // 0x140A83728
typedef Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256>,256>,4096>,4096> Scaleform::HeapPT::HeapHeader5;
typedef Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256> Scaleform::HeapPT::HeapHeader2;
typedef Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256>,256>,4096>,4096> Scaleform::HeapPT::HeapHeaderRoot;
typedef Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256>,256>,4096> Scaleform::HeapPT::HeapHeader4;
typedef Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256>,256> Scaleform::HeapPT::HeapHeader3;
void Scaleform::HeapPT::SysAllocGranulator::Init(Scaleform::SysAllocPaged * sysAlloc); // 0x140420120
void Scaleform::HeapPT::SysAllocGranulator::GetInfo(Scaleform::SysAllocPaged::Info * i); // 0x14041FFB0
void * Scaleform::HeapPT::SysAllocGranulator::Alloc(unsigned long long size, unsigned long long alignment); // 0x14041F740
bool Scaleform::HeapPT::SysAllocGranulator::ReallocInPlace(void * oldPtr, unsigned long long oldSize, unsigned long long newSize, unsigned long long alignment); // 0x1404201E0
bool Scaleform::HeapPT::SysAllocGranulator::Free(void * ptr, unsigned long long size, unsigned long long alignment); // 0x14041FE80
void * Scaleform::HeapPT::SysAllocGranulator::AllocSysDirect(unsigned long long size, unsigned long long alignment, unsigned long long * actualSize, unsigned long long * actualAlign); // 0x14041F7F0
bool Scaleform::HeapPT::SysAllocGranulator::FreeSysDirect(void * ptr, unsigned long long size, unsigned long long alignment); // 0x14041FF40
void Scaleform::HeapPT::SysAllocGranulator::VisitMem(Scaleform::Heap::MemVisitor * visitor); // 0x140420210
void Scaleform::HeapPT::SysAllocGranulator::VisitSegments(Scaleform::Heap::SegVisitor * visitor, unsigned long long catSeg, unsigned long long catUnused); // 0x1404202B0
unsigned long long Scaleform::HeapPT::SysAllocGranulator::GetFootprint(); // 0x14041FF90
unsigned long long Scaleform::HeapPT::SysAllocGranulator::GetUsedSpace(); // 0x1404200E0
unsigned long long Scaleform::HeapPT::SysAllocGranulator::GetBase(); // 0x14041FF80
unsigned long long Scaleform::HeapPT::SysAllocGranulator::GetSize(); // 0x140420010
Scaleform::HeapPT::SysAllocWrapper::SysAllocWrapper(Scaleform::SysAllocPaged * sysAlloc); // 0x14041F5B0
void Scaleform::HeapPT::SysAllocWrapper::GetInfo(Scaleform::SysAllocPaged::Info * i); // 0x14041FFE0
void * Scaleform::HeapPT::SysAllocWrapper::Alloc(unsigned long long size, unsigned long long align); // 0x14041F750
bool Scaleform::HeapPT::SysAllocWrapper::Free(void * ptr, unsigned long long size, unsigned long long align); // 0x14041FE90
bool Scaleform::HeapPT::SysAllocWrapper::ReallocInPlace(void * oldPtr, unsigned long long oldSize, unsigned long long newSize, unsigned long long align); // 0x1404201F0
void * Scaleform::HeapPT::SysAllocWrapper::AllocSysDirect(unsigned long long size, unsigned long long alignment, unsigned long long * actualSize, unsigned long long * actualAlign); // 0x14041F840
bool Scaleform::HeapPT::SysAllocWrapper::FreeSysDirect(void * ptr, unsigned long long size, unsigned long long alignment); // 0x14041FF60
void Scaleform::HeapPT::SysAllocWrapper::VisitMem(Scaleform::Heap::MemVisitor * visitor); // 0x140420230
void Scaleform::HeapPT::SysAllocWrapper::VisitSegments(Scaleform::Heap::SegVisitor * visitor, unsigned long long catSeg, unsigned long long catUnused); // 0x1404202C0
unsigned long long Scaleform::HeapPT::SysAllocWrapper::GetFootprint(); // 0x14041FFA0
unsigned long long Scaleform::HeapPT::SysAllocWrapper::GetUsedSpace(); // 0x140420110
Scaleform::HeapPT::HeapRoot::HeapRoot(Scaleform::SysAllocPaged * sysAlloc); // 0x14041F520
Scaleform::HeapPT::HeapRoot::~HeapRoot(); // 0x14041F6B0
void Scaleform::HeapPT::HeapRoot::CreateArena(unsigned long long arena, Scaleform::SysAllocPaged * sysAlloc); // 0x14041F8E0
long Scaleform::HeapPT::HeapRoot::DestroyArena(unsigned long long arena); // 0x14041FD90
void Scaleform::HeapPT::HeapRoot::DestroyAllArenas(); // 0x14041FC30
bool Scaleform::HeapPT::HeapRoot::ArenaIsEmpty(unsigned long long arena); // 0x14041F860
Scaleform::MemoryHeapPT * Scaleform::HeapPT::HeapRoot::CreateHeap(const char * name, Scaleform::MemoryHeapPT * parent, const Scaleform::MemoryHeap::HeapDesc & desc); // 0x14041FA10
void Scaleform::HeapPT::HeapRoot::DestroyHeap(Scaleform::MemoryHeapPT * heap); // 0x14041FE30
void Scaleform::HeapPT::HeapRoot::VisitSegments(Scaleform::Heap::SegVisitor * visitor); // 0x140420240
void Scaleform::HeapPT::HeapRoot::GetStats(Scaleform::MemoryHeap::RootStats * stats); // 0x140420020
void * Scaleform::HeapPT::HeapRoot::AllocSysDirect(unsigned long long size); // 0x14041F770
void Scaleform::HeapPT::HeapRoot::FreeSysDirect(void * ptr, unsigned long long size); // 0x14041FEB0//decompilation failure at 140A83728!
void __fastcall Scaleform::HeapPT::HeapRoot::HeapRoot(
        Scaleform::HeapPT::HeapRoot *this,
        Scaleform::SysAllocPaged *sysAlloc)
{
  Scaleform::HeapPT::SysAllocWrapper::SysAllocWrapper(&this->AllocWrapper, sysAlloc);
  Scaleform::HeapPT::Starter::Starter(&this->AllocStarter, &this->AllocWrapper, 0x8000ui64, 0x2000ui64);
  Scaleform::HeapPT::Bookkeeper::Bookkeeper(&this->AllocBookkeeper, &this->AllocWrapper, 0x8000ui64);
  Scaleform::Lock::Lock(&this->RootLock.mLock, 0);
  this->pArenas = 0i64;
  this->NumArenas = 0i64;
  Scaleform::HeapPT::GlobalPageTable->pStarter = &this->AllocStarter;
  Scaleform::HeapPT::GlobalRoot = this;
}

void __fastcall Scaleform::HeapPT::SysAllocWrapper::SysAllocWrapper(
        Scaleform::HeapPT::SysAllocWrapper *this,
        Scaleform::SysAllocPaged *sysAlloc)
{
  Scaleform::HeapPT::SysAllocGranulator *p_Allocator; // rdi
  __int64 v5[2]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v6; // [rsp+30h] [rbp-38h]
  __int64 v7; // [rsp+38h] [rbp-30h]
  __int64 v8; // [rsp+40h] [rbp-28h]
  __int64 v9; // [rsp+48h] [rbp-20h]

  p_Allocator = &this->Allocator;
  this->__vftable = (Scaleform::HeapPT::SysAllocWrapper_vtbl *)&Scaleform::HeapPT::SysAllocWrapper::`vftable';
  this->Allocator.__vftable = (Scaleform::HeapPT::SysAllocGranulator_vtbl *)&Scaleform::HeapPT::SysAllocGranulator::`vftable';
  this->Allocator.pGranulator = 0i64;
  this->Allocator.SysDirectThreshold = 0i64;
  this->Allocator.MinAlign = 0i64;
  this->Allocator.MaxAlign = 0i64;
  this->Allocator.SysDirectFootprint = 0i64;
  this->pSrcAlloc = sysAlloc;
  this->pSysAlloc = sysAlloc;
  this->SysGranularity = 4096i64;
  this->MinAlign = 1i64;
  this->UsedSpace = 0i64;
  v5[0] = 0i64;
  v5[1] = 0i64;
  v6 = 0i64;
  v7 = 0i64;
  v8 = 0i64;
  v9 = 0i64;
  sysAlloc->GetInfo(sysAlloc, (Scaleform::SysAllocPaged::Info *)v5);
  if ( v6 )
  {
    Scaleform::HeapPT::SysAllocGranulator::Init(p_Allocator, sysAlloc);
    this->SysGranularity = v6;
    this->pSysAlloc = p_Allocator;
  }
  if ( this->MinAlign < v5[0] )
    this->MinAlign = v5[0];
}

void __fastcall Scaleform::HeapPT::HeapRoot::~HeapRoot(Scaleform::HeapPT::HeapRoot *this)
{
  Scaleform::Lock::~Lock(&this->RootLock.mLock);
  this->AllocWrapper.Allocator.__vftable = (Scaleform::HeapPT::SysAllocGranulator_vtbl *)&Scaleform::SysAllocBase::`vftable';
  this->AllocWrapper.__vftable = (Scaleform::HeapPT::SysAllocWrapper_vtbl *)&Scaleform::SysAllocBase::`vftable';
}

Scaleform::HeapPT::DualTNode *__fastcall Scaleform::HeapPT::SysAllocGranulator::Alloc(
        Scaleform::HeapPT::SysAllocGranulator *this,
        unsigned __int64 size,
        unsigned __int64 alignment)
{
  return Scaleform::HeapPT::Granulator::Alloc(this->pGranulator, size, alignment);
}

void *__fastcall Scaleform::HeapPT::SysAllocWrapper::Alloc(
        Scaleform::HeapPT::SysAllocWrapper *this,
        unsigned __int64 size,
        unsigned __int64 align)
{
  this->UsedSpace += size;
  return this->pSysAlloc->Alloc(this->pSysAlloc, size, align);
}

__int64 __fastcall Scaleform::HeapPT::HeapRoot::AllocSysDirect(
        Scaleform::HeapPT::HeapRoot *this,
        unsigned __int64 size)
{
  Scaleform::SysAllocPaged *pSrcAlloc; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 MinAlign; // r8
  __int64 v7; // rdi

  Scaleform::Lock::DoLock(&this->RootLock.mLock);
  pSrcAlloc = this->AllocWrapper.pSrcAlloc;
  v5 = this->AllocWrapper.SysGranularity
     * ((this->AllocWrapper.SysGranularity + size - 1)
      / this->AllocWrapper.SysGranularity);
  MinAlign = this->AllocWrapper.MinAlign;
  this->AllocWrapper.UsedSpace += v5;
  v7 = (__int64)pSrcAlloc->Alloc(pSrcAlloc, v5, MinAlign);
  Scaleform::Lock::Unlock(&this->RootLock.mLock);
  return v7;
}

__int64 __fastcall Scaleform::HeapPT::SysAllocGranulator::AllocSysDirect(
        Scaleform::HeapPT::SysAllocGranulator *this,
        unsigned __int64 size,
        unsigned __int64 alignment,
        unsigned __int64 *actualSize,
        unsigned __int64 *actualAlign)
{
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rdx
  Scaleform::HeapPT::Granulator *pGranulator; // rax

  v6 = 4096i64;
  if ( alignment >= 0x1000 )
    v6 = alignment;
  if ( alignment < this->MinAlign )
    alignment = this->MinAlign;
  if ( alignment > this->MaxAlign )
    alignment = this->MaxAlign;
  v7 = v6 + size;
  if ( alignment >= v6 )
    v7 = size;
  *actualSize = v7;
  *actualAlign = alignment;
  pGranulator = this->pGranulator;
  this->SysDirectFootprint += v7;
  return ((__int64 (__fastcall *)(Scaleform::SysAllocPaged *))pGranulator->pSysAlloc->Alloc)(pGranulator->pSysAlloc);
}

__int64 __fastcall Scaleform::HeapPT::SysAllocWrapper::AllocSysDirect(
        Scaleform::HeapPT::SysAllocWrapper *this,
        unsigned __int64 size,
        unsigned __int64 alignment,
        unsigned __int64 *actualSize,
        unsigned __int64 *actualAlign)
{
  this->UsedSpace += size;
  return ((__int64 (__fastcall *)(Scaleform::SysAllocPaged *, unsigned __int64, unsigned __int64, unsigned __int64 *))this->pSysAlloc->AllocSysDirect)(
           this->pSysAlloc,
           size,
           alignment,
           actualSize);
}

_BOOL8 __fastcall Scaleform::HeapPT::HeapRoot::ArenaIsEmpty(Scaleform::HeapPT::HeapRoot *this, unsigned __int64 arena)
{
  Scaleform::LockSafe *p_RootLock; // rbx
  Scaleform::HeapPT::HeapRoot *v3; // rdi
  bool v5; // di

  p_RootLock = &this->RootLock;
  v3 = this;
  Scaleform::Lock::DoLock(&this->RootLock.mLock);
  Scaleform::Lock::DoLock(&p_RootLock->mLock);
  if ( arena )
    v3 = (Scaleform::HeapPT::HeapRoot *)v3->pArenas[arena - 1];
  Scaleform::Lock::Unlock(&p_RootLock->mLock);
  v5 = (__int64)v3->AllocWrapper.GetUsedSpace(&v3->AllocWrapper) == 0;
  Scaleform::Lock::Unlock(&p_RootLock->mLock);
  return v5;
}

void __fastcall Scaleform::HeapPT::HeapRoot::CreateArena(
        Scaleform::HeapPT::HeapRoot *this,
        unsigned __int64 arena,
        Scaleform::SysAllocPaged *sysAlloc)
{
  unsigned __int64 v6; // r14
  Scaleform::Heap::HeapSegment *v7; // r15
  Scaleform::SysAllocPaged **pArenas; // rdx
  Scaleform::HeapPT::SysAllocWrapper *v9; // rcx
  Scaleform::HeapPT::SysAllocWrapper *v10; // rax

  Scaleform::Lock::DoLock(&this->RootLock.mLock);
  if ( this->NumArenas < arena )
  {
    v6 = (arena + 15) & 0xFFFFFFFFFFFFFFF0ui64;
    v7 = Scaleform::HeapPT::Bookkeeper::Alloc(&this->AllocBookkeeper, 8 * v6);
    memset(v7, 0, 8 * v6);
    pArenas = this->pArenas;
    if ( pArenas )
    {
      memmove(v7, pArenas, 8 * this->NumArenas);
      Scaleform::HeapPT::Bookkeeper::Free(&this->AllocBookkeeper, this->pArenas, 8 * this->NumArenas);
    }
    this->pArenas = (Scaleform::SysAllocPaged **)v7;
    this->NumArenas = v6;
  }
  this->pArenas[arena - 1] = (Scaleform::SysAllocPaged *)Scaleform::HeapPT::Bookkeeper::Alloc(
                                                           &this->AllocBookkeeper,
                                                           0x168ui64);
  v9 = (Scaleform::HeapPT::SysAllocWrapper *)this->pArenas[arena - 1];
  if ( v9 )
  {
    Scaleform::HeapPT::SysAllocWrapper::SysAllocWrapper(v9, sysAlloc);
    v9 = v10;
  }
  this->pArenas[arena - 1] = v9;
  Scaleform::Lock::Unlock(&this->RootLock.mLock);
}

Scaleform::MemoryHeapPT *__fastcall Scaleform::HeapPT::HeapRoot::CreateHeap(
        Scaleform::HeapPT::HeapRoot *this,
        const char *name,
        Scaleform::MemoryHeapPT *parent,
        const Scaleform::MemoryHeap::HeapDesc *desc)
{
  Scaleform::LockSafe *p_RootLock; // rbx
  Scaleform::HeapPT::HeapRoot *v5; // r12
  __int64 v8; // rdi
  __int64 v9; // rsi
  unsigned __int64 v10; // rsi
  Scaleform::MemoryHeapPT *result; // rax
  Scaleform::MemoryHeapPT *v12; // r13
  unsigned int v13; // edx
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 *p_Reserve; // r13
  __int128 v19; // xmm1
  unsigned int v20; // eax
  unsigned __int64 Arena; // [rsp+50h] [rbp-48h]
  Scaleform::HeapPT::Bookkeeper *p_AllocBookkeeper; // [rsp+58h] [rbp-40h]
  unsigned int allocFlags; // [rsp+A0h] [rbp+8h]

  p_RootLock = &this->RootLock;
  v5 = this;
  Scaleform::Lock::DoLock(&this->RootLock.mLock);
  Scaleform::Lock::Unlock(&p_RootLock->mLock);
  v8 = -1i64;
  v9 = -1i64;
  do
    ++v9;
  while ( name[v9] );
  v10 = (v9 + 2128) & 0xFFFFFFFFFFFFFFE0ui64;
  p_AllocBookkeeper = &v5->AllocBookkeeper;
  result = (Scaleform::MemoryHeapPT *)Scaleform::HeapPT::Bookkeeper::Alloc(&v5->AllocBookkeeper, v10);
  v12 = result;
  if ( result )
  {
    v13 = (8 * (desc->Flags & 2)) | 0x20;
    if ( (desc->Flags & 4) != 0 )
      v13 = 8 * (desc->Flags & 2);
    allocFlags = v13;
    Scaleform::MemoryHeapPT::MemoryHeapPT(result);
    v15 = v14;
    if ( v12 == (Scaleform::MemoryHeapPT *)-224i64 )
    {
      v17 = 0i64;
    }
    else
    {
      Arena = desc->Arena;
      Scaleform::Lock::DoLock(&p_RootLock->mLock);
      if ( Arena )
        v5 = (Scaleform::HeapPT::HeapRoot *)v5->pArenas[Arena - 1];
      Scaleform::Lock::Unlock(&p_RootLock->mLock);
      Scaleform::HeapPT::AllocEngine::AllocEngine(
        (Scaleform::HeapPT::AllocEngine *)&v12[1],
        &v5->AllocWrapper,
        (Scaleform::MemoryHeapPT *)v15,
        allocFlags,
        desc->MinAlign,
        desc->Granularity,
        desc->Reserve,
        desc->Threshold,
        desc->Limit);
      v17 = v16;
    }
    if ( *(_BYTE *)(v17 + 1770) )
    {
      p_Reserve = &v12[9].Info.Desc.Reserve;
      *(_QWORD *)(v15 + 24) = v10;
      *(_DWORD *)(v15 + 32) = 1;
      *(_QWORD *)(v15 + 48) = 0i64;
      *(_OWORD *)(v15 + 56) = *(_OWORD *)&desc->Flags;
      *(_OWORD *)(v15 + 72) = *(_OWORD *)&desc->Granularity;
      *(_OWORD *)(v15 + 88) = *(_OWORD *)&desc->Threshold;
      v19 = *(_OWORD *)&desc->HeapId;
      *(_QWORD *)(v15 + 120) = parent;
      *(_QWORD *)(v15 + 128) = p_Reserve;
      *(_OWORD *)(v15 + 104) = v19;
      *(_BYTE *)(v15 + 200) = (desc->Flags & 1) == 0;
      v20 = desc->Flags >> 4;
      *(_QWORD *)(v15 + 208) = v17;
      *(_BYTE *)(v15 + 201) = (v20 & 1) == 0;
      while ( name[++v8] != 0 )
        ;
      memmove(p_Reserve, name, v8 + 1);
      return (Scaleform::MemoryHeapPT *)v15;
    }
    else
    {
      Scaleform::HeapPT::Bookkeeper::Free(p_AllocBookkeeper, v12, v10);
      return 0i64;
    }
  }
  return result;
}

void __fastcall Scaleform::HeapPT::HeapRoot::DestroyAllArenas(Scaleform::HeapPT::HeapRoot *this)
{
  Scaleform::LockSafe *p_RootLock; // rbx
  unsigned __int64 i; // rbp
  Scaleform::SysAllocPaged *v4; // rsi
  Scaleform::SysAllocPaged *v5; // rcx

  p_RootLock = &this->RootLock;
  Scaleform::Lock::DoLock(&this->RootLock.mLock);
  if ( this->pArenas )
  {
    for ( i = this->NumArenas; i; --i )
    {
      if ( this->pArenas[i - 1] )
      {
        Scaleform::Lock::DoLock(&p_RootLock->mLock);
        Scaleform::Lock::DoLock(&p_RootLock->mLock);
        Scaleform::Lock::DoLock(&p_RootLock->mLock);
        v4 = this->pArenas[i - 1];
        Scaleform::Lock::Unlock(&p_RootLock->mLock);
        LOBYTE(v4) = (__int64)v4->GetUsedSpace(v4) == 0;
        Scaleform::Lock::Unlock(&p_RootLock->mLock);
        if ( (_BYTE)v4 )
        {
          v5 = this->pArenas[i - 1];
          ((void (__fastcall *)(Scaleform::SysAllocPaged *, _QWORD))v5->~SysAllocBase)(v5, 0i64);
          Scaleform::HeapPT::Bookkeeper::Free(&this->AllocBookkeeper, this->pArenas[i - 1], 0x168ui64);
          this->pArenas[i - 1] = 0i64;
        }
        Scaleform::Lock::Unlock(&p_RootLock->mLock);
      }
    }
    Scaleform::HeapPT::Bookkeeper::Free(&this->AllocBookkeeper, this->pArenas, 8 * this->NumArenas);
    this->pArenas = 0i64;
    this->NumArenas = 0i64;
  }
  Scaleform::Lock::Unlock(&p_RootLock->mLock);
}

__int64 __fastcall Scaleform::HeapPT::HeapRoot::DestroyArena(Scaleform::HeapPT::HeapRoot *this, unsigned __int64 arena)
{
  Scaleform::LockSafe *p_RootLock; // rbx
  Scaleform::SysAllocPaged *v5; // rcx
  Scaleform::SysAllocPaged **pArenas; // rax
  unsigned int v7; // edi

  p_RootLock = &this->RootLock;
  Scaleform::Lock::DoLock(&this->RootLock.mLock);
  if ( Scaleform::HeapPT::HeapRoot::ArenaIsEmpty(this, arena) )
  {
    v5 = this->pArenas[arena - 1];
    ((void (__fastcall *)(Scaleform::SysAllocPaged *, _QWORD))v5->~SysAllocBase)(v5, 0i64);
    Scaleform::HeapPT::Bookkeeper::Free(&this->AllocBookkeeper, this->pArenas[arena - 1], 0x168ui64);
    pArenas = this->pArenas;
    v7 = 0;
    pArenas[arena - 1] = 0i64;
  }
  else
  {
    v7 = MEMORY[0];
  }
  Scaleform::Lock::Unlock(&p_RootLock->mLock);
  return v7;
}

void __fastcall Scaleform::HeapPT::HeapRoot::DestroyHeap(
        Scaleform::HeapPT::HeapRoot *this,
        Scaleform::MemoryHeapPT *heap)
{
  Scaleform::HeapPT::AllocEngine::FreeAll(heap->pEngine);
  ((void (__fastcall *)(Scaleform::MemoryHeapPT *, _QWORD))heap->~MemoryHeap)(heap, 0i64);
  Scaleform::HeapPT::Bookkeeper::Free(&this->AllocBookkeeper, heap, heap->SelfSize);
}

bool __fastcall Scaleform::HeapPT::SysAllocGranulator::Free(
        Scaleform::HeapPT::SysAllocGranulator *this,
        void *ptr,
        unsigned __int64 size,
        unsigned __int64 alignment)
{
  return Scaleform::HeapPT::Granulator::Free(this->pGranulator, ptr, size, alignment);
}

__int64 __fastcall Scaleform::HeapPT::SysAllocWrapper::Free(
        Scaleform::HeapPT::SysAllocWrapper *this,
        void *ptr,
        unsigned __int64 size,
        unsigned __int64 align)
{
  this->UsedSpace -= size;
  return ((__int64 (__fastcall *)(Scaleform::SysAllocPaged *, void *, unsigned __int64, unsigned __int64))this->pSysAlloc->Free)(
           this->pSysAlloc,
           ptr,
           size,
           align);
}

void __fastcall Scaleform::HeapPT::HeapRoot::FreeSysDirect(
        Scaleform::HeapPT::HeapRoot *this,
        void *ptr,
        unsigned __int64 size)
{
  Scaleform::SysAllocPaged *pSrcAlloc; // rcx
  unsigned __int64 v7; // r8
  unsigned __int64 MinAlign; // r9

  Scaleform::Lock::DoLock(&this->RootLock.mLock);
  pSrcAlloc = this->AllocWrapper.pSrcAlloc;
  v7 = this->AllocWrapper.SysGranularity
     * ((this->AllocWrapper.SysGranularity + size - 1)
      / this->AllocWrapper.SysGranularity);
  MinAlign = this->AllocWrapper.MinAlign;
  this->AllocWrapper.UsedSpace -= v7;
  pSrcAlloc->Free(pSrcAlloc, ptr, v7, MinAlign);
  Scaleform::Lock::Unlock(&this->RootLock.mLock);
}

__int64 __fastcall Scaleform::HeapPT::SysAllocGranulator::FreeSysDirect(
        Scaleform::HeapPT::SysAllocGranulator *this,
        void *ptr,
        unsigned __int64 size,
        unsigned __int64 alignment)
{
  Scaleform::HeapPT::Granulator *pGranulator; // rax

  pGranulator = this->pGranulator;
  this->SysDirectFootprint -= size;
  return ((__int64 (__fastcall *)(Scaleform::SysAllocPaged *, void *, unsigned __int64, unsigned __int64))pGranulator->pSysAlloc->Free)(
           pGranulator->pSysAlloc,
           ptr,
           size,
           alignment);
}

__int64 __fastcall Scaleform::HeapPT::SysAllocWrapper::FreeSysDirect(
        Scaleform::HeapPT::SysAllocWrapper *this,
        void *ptr,
        unsigned __int64 size,
        unsigned __int64 alignment)
{
  this->UsedSpace -= size;
  return ((__int64 (__fastcall *)(Scaleform::SysAllocPaged *, void *, unsigned __int64, unsigned __int64))this->pSysAlloc->FreeSysDirect)(
           this->pSysAlloc,
           ptr,
           size,
           alignment);
}

unsigned __int64 __fastcall Scaleform::HeapPT::SysAllocGranulator::GetBase(Scaleform::HeapPT::SysAllocGranulator *this)
{
  return this->pGranulator->pSysAlloc->GetBase(this->pGranulator->pSysAlloc);
}

unsigned __int64 __fastcall Scaleform::HeapPT::SysAllocGranulator::GetFootprint(
        Scaleform::HeapPT::SysAllocGranulator *this)
{
  return this->SysDirectFootprint + this->pGranulator->Footprint;
}

unsigned __int64 __fastcall Scaleform::HeapPT::SysAllocWrapper::GetFootprint(Scaleform::HeapPT::SysAllocWrapper *this)
{
  return this->pSysAlloc->GetFootprint(this->pSysAlloc);
}

void __fastcall Scaleform::HeapPT::SysAllocGranulator::GetInfo(
        Scaleform::HeapPT::SysAllocGranulator *this,
        Scaleform::SysAllocPaged::Info *i)
{
  i->MinAlign = 0i64;
  i->MaxAlign = 0i64;
  i->Granularity = 0i64;
  i->SysDirectThreshold = this->SysDirectThreshold;
  i->MaxHeapGranularity = this->MaxHeapGranularity;
  i->HasRealloc = 1;
}

void __fastcall Scaleform::HeapPT::SysAllocWrapper::GetInfo(
        Scaleform::HeapPT::SysAllocWrapper *this,
        Scaleform::SysAllocPaged::Info *i)
{
  i->MinAlign = 0i64;
  i->MaxAlign = 0i64;
  i->Granularity = 0i64;
  i->SysDirectThreshold = 0i64;
  i->MaxHeapGranularity = 0i64;
  *(_QWORD *)&i->HasRealloc = 0i64;
  ((void (__fastcall *)(Scaleform::SysAllocPaged *))this->pSysAlloc->GetInfo)(this->pSysAlloc);
}

unsigned __int64 __fastcall Scaleform::HeapPT::SysAllocGranulator::GetSize(Scaleform::HeapPT::SysAllocGranulator *this)
{
  return this->pGranulator->pSysAlloc->GetSize(this->pGranulator->pSysAlloc);
}

void __fastcall Scaleform::HeapPT::HeapRoot::GetStats(
        Scaleform::HeapPT::HeapRoot *this,
        Scaleform::MemoryHeap::RootStats *stats)
{
  Scaleform::Lock::DoLock(&this->RootLock.mLock);
  stats->SysMemFootprint = this->AllocWrapper.GetFootprint((Scaleform::SysAllocPaged *)this);
  stats->SysMemUsedSpace = this->AllocWrapper.GetUsedSpace((Scaleform::SysAllocPaged *)this);
  stats->PageMapFootprint = this->AllocStarter.Allocator.Footprint;
  stats->PageMapUsedSpace = this->AllocStarter.Allocator.Footprint
                          - (this->AllocStarter.Allocator.Allocator.FreeBlocks << this->AllocStarter.Allocator.Allocator.MinShift);
  stats->BookkeepingFootprint = this->AllocBookkeeper.Footprint;
  stats->BookkeepingUsedSpace = this->AllocBookkeeper.Footprint
                              - (this->AllocBookkeeper.Allocator.Bin.FreeBlocks << this->AllocBookkeeper.Allocator.MinAlignShift);
  stats->DebugInfoFootprint = 0i64;
  stats->DebugInfoUsedSpace = 0i64;
  Scaleform::Lock::Unlock(&this->RootLock.mLock);
}

unsigned __int64 __fastcall Scaleform::HeapPT::SysAllocGranulator::GetUsedSpace(
        Scaleform::HeapPT::SysAllocGranulator *this)
{
  return this->SysDirectFootprint
       + this->pGranulator->Footprint
       - (this->pGranulator->Allocator.FreeBlocks << this->pGranulator->Allocator.MinShift);
}

unsigned __int64 __fastcall Scaleform::SysAllocStatic::GetFootprint(Scaleform::SysAllocStatic *this)
{
  return this->TotalSpace;
}

void __fastcall Scaleform::HeapPT::SysAllocGranulator::Init(
        Scaleform::HeapPT::SysAllocGranulator *this,
        Scaleform::SysAllocPaged *sysAlloc)
{
  unsigned __int64 *PrivateData; // rcx
  Scaleform::HeapPT::Granulator *v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v8; // [rsp+38h] [rbp-40h]
  __int64 v9; // [rsp+40h] [rbp-38h]
  unsigned __int64 v10; // [rsp+48h] [rbp-30h]
  unsigned __int64 v11; // [rsp+50h] [rbp-28h]
  __int64 v12; // [rsp+58h] [rbp-20h]

  PrivateData = this->PrivateData;
  if ( PrivateData )
    Scaleform::HeapPT::Granulator::Granulator(
      (Scaleform::HeapPT::Granulator *)PrivateData,
      sysAlloc,
      0x1000ui64,
      0x1000ui64,
      0x2000ui64);
  else
    v4 = 0i64;
  this->pGranulator = v4;
  v7 = 0i64;
  v8 = 0i64;
  v9 = 0i64;
  v10 = 0i64;
  v11 = 0i64;
  v12 = 0i64;
  v4->pSysAlloc->GetInfo(v4->pSysAlloc, (Scaleform::SysAllocPaged::Info *)&v7);
  v5 = v8;
  this->SysDirectThreshold = v10;
  this->MaxHeapGranularity = v11;
  v6 = v7;
  if ( !v7 )
    v6 = 1i64;
  this->MinAlign = v6;
  if ( !v5 )
    v5 = 0x8000000000000000ui64;
  this->MaxAlign = v5;
}

bool __fastcall Scaleform::HeapPT::SysAllocGranulator::ReallocInPlace(
        Scaleform::HeapPT::SysAllocGranulator *this,
        void *oldPtr,
        unsigned __int64 oldSize,
        unsigned __int64 newSize,
        unsigned __int64 alignment)
{
  return Scaleform::HeapPT::Granulator::ReallocInPlace(this->pGranulator, oldPtr, oldSize, newSize, alignment);
}

__int64 __fastcall Scaleform::HeapPT::SysAllocWrapper::ReallocInPlace(
        Scaleform::HeapPT::SysAllocWrapper *this,
        void *oldPtr,
        unsigned __int64 oldSize,
        unsigned __int64 newSize,
        unsigned __int64 align)
{
  this->UsedSpace += newSize - oldSize;
  return ((__int64 (__fastcall *)(Scaleform::SysAllocPaged *, void *))this->pSysAlloc->ReallocInPlace)(
           this->pSysAlloc,
           oldPtr);
}

void __fastcall Scaleform::HeapPT::SysAllocGranulator::VisitMem(
        Scaleform::HeapPT::SysAllocGranulator *this,
        Scaleform::Heap::MemVisitor *visitor)
{
  Scaleform::HeapPT::Granulator::VisitMem(this->pGranulator, visitor, Cat_SysAlloc, Cat_SysAllocFree);
}

void __fastcall Scaleform::HeapPT::SysAllocWrapper::VisitMem(
        Scaleform::HeapPT::SysAllocWrapper *this,
        Scaleform::Heap::MemVisitor *visitor)
{
  this->pSysAlloc->VisitMem(this->pSysAlloc, visitor);
}

void __fastcall Scaleform::HeapPT::HeapRoot::VisitSegments(
        Scaleform::HeapPT::HeapRoot *this,
        Scaleform::Heap::SegVisitor *visitor)
{
  Scaleform::Lock::DoLock(&this->RootLock.mLock);
  ((void (__fastcall *)(Scaleform::HeapPT::HeapRoot *, Scaleform::Heap::SegVisitor *, __int64))this->AllocWrapper.VisitSegments)(
    this,
    visitor,
    1i64);
  Scaleform::HeapPT::Starter::VisitSegments(&this->AllocStarter, visitor);
  Scaleform::HeapPT::Bookkeeper::VisitSegments(&this->AllocBookkeeper, visitor);
  Scaleform::Lock::Unlock(&this->RootLock.mLock);
}

void __fastcall Scaleform::HeapPT::SysAllocGranulator::VisitSegments(
        Scaleform::HeapPT::SysAllocGranulator *this,
        Scaleform::Heap::SegVisitor *visitor,
        unsigned __int64 catSeg,
        unsigned __int64 catUnused)
{
  Scaleform::HeapPT::Granulator::VisitSegments(this->pGranulator, visitor, catSeg, catUnused);
}

void __fastcall Scaleform::HeapPT::SysAllocWrapper::VisitSegments(
        Scaleform::HeapPT::SysAllocWrapper *this,
        Scaleform::Heap::SegVisitor *visitor,
        unsigned __int64 catSeg,
        unsigned __int64 catUnused)
{
  this->pSysAlloc->VisitSegments(this->pSysAlloc, visitor, catSeg, catUnused);
}

