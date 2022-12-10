#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_bookkeeper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_allocbitset1.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_freebin.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_root.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_allocengine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_pagetable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_heaptypes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_allocbitset2.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_heapbitset2.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_starter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_granulator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_alloclite.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"

const unsigned long Scaleform::HeapPT::TinyPow2AllocType[8]; // 0x140752578
Scaleform::HeapPT::AllocEngine::AllocEngine(Scaleform::SysAllocPaged * sysAlloc, Scaleform::MemoryHeapPT * heap, unsigned long allocFlags, unsigned long long minAlignSize, unsigned long long granularity, unsigned long long reserve, unsigned long long threshold, unsigned long long limit); // 0x1404202D0
void Scaleform::HeapPT::AllocEngine::FreeAll(); // 0x140420880
unsigned long long Scaleform::HeapPT::AllocEngine::SetLimit(unsigned long long lim); // 0x140420C30
Scaleform::Heap::HeapSegment * Scaleform::HeapPT::AllocEngine::allocSegment(unsigned long segType, unsigned long long dataSize, unsigned long long alignSize, unsigned long long bookkeepingSize, bool * limHandlerOK); // 0x140421040
Scaleform::Heap::HeapSegment * Scaleform::HeapPT::AllocEngine::allocSegmentNoGranulator(unsigned long long dataSize, unsigned long long alignSize, bool * limHandlerOK); // 0x140421310
Scaleform::Heap::HeapSegment * Scaleform::HeapPT::AllocEngine::allocSegmentBitSet(unsigned long long size, unsigned long long alignSize, unsigned long long granularity, bool * limHandlerOK); // 0x140421210
void Scaleform::HeapPT::AllocEngine::freeSegment(Scaleform::Heap::HeapSegment * seg); // 0x1404218E0
void Scaleform::HeapPT::AllocEngine::freeSegmentBitSet(Scaleform::Heap::HeapSegment * seg); // 0x1404219D0
void * Scaleform::HeapPT::AllocEngine::allocSysDirect(unsigned long long dataSize, unsigned long long alignSize); // 0x140421670
unsigned long long Scaleform::HeapPT::AllocEngine::calcDynaSize(); // 0x140421840
void * Scaleform::HeapPT::AllocEngine::allocBitSet(unsigned long long size); // 0x140420F80
void * Scaleform::HeapPT::AllocEngine::allocBitSet(unsigned long long size, unsigned long long alignSize); // 0x140420EC0
void * Scaleform::HeapPT::AllocEngine::allocSegmentTiny(unsigned long sizeIdx); // 0x140421560
void Scaleform::HeapPT::AllocEngine::releaseSegmentTiny(Scaleform::Heap::HeapSegment * seg); // 0x140421E70
void Scaleform::HeapPT::AllocEngine::freeSegmentTiny(Scaleform::Heap::HeapSegment * seg); // 0x140421AC0
void * Scaleform::HeapPT::AllocEngine::allocTiny(unsigned long sizeIdx); // 0x1404217B0
void * Scaleform::HeapPT::AllocEngine::reallocGeneral(Scaleform::Heap::HeapSegment * seg, void * oldPtr, unsigned long long oldSize, unsigned long long newSize, unsigned long long alignShift); // 0x140421B80
void * Scaleform::HeapPT::AllocEngine::reallocSysDirect(Scaleform::Heap::HeapSegment * seg, void * oldPtr, unsigned long long newSize); // 0x140421C10
void * Scaleform::HeapPT::AllocEngine::Alloc(unsigned long long size); // 0x1404206E0
void * Scaleform::HeapPT::AllocEngine::Alloc(unsigned long long size, unsigned long long alignSize); // 0x1404205E0
void * Scaleform::HeapPT::AllocEngine::Realloc(Scaleform::Heap::HeapSegment * seg, void * oldPtr, unsigned long long newSize); // 0x140420AA0
void Scaleform::HeapPT::AllocEngine::Free(Scaleform::Heap::HeapSegment * seg, void * ptr); // 0x140420790
unsigned long long Scaleform::HeapPT::AllocEngine::GetUsableSize(Scaleform::Heap::HeapSegment * seg, const void * ptr); // 0x140420A40
unsigned long long Scaleform::HeapPT::AllocEngine::GetFootprint(); // 0x1404209B0
unsigned long long Scaleform::HeapPT::AllocEngine::GetUsedSpace(); // 0x140420A70
void Scaleform::HeapPT::AllocEngine::ReleaseCachedMem(); // 0x140420BC0
void Scaleform::HeapPT::AllocEngine::VisitMem(Scaleform::Heap::MemVisitor * visitor, unsigned long flags); // 0x140420C70
void Scaleform::HeapPT::AllocEngine::VisitSegments(Scaleform::Heap::SegVisitor * visitor); // 0x140420E30
void Scaleform::HeapPT::AllocEngine::GetHeapOtherStats(Scaleform::HeapPT::HeapOtherStats * otherStats); // 0x1404209C0//decompilation failure at 140752578!
void __fastcall Scaleform::HeapPT::AllocEngine::AllocEngine(
        Scaleform::HeapPT::AllocEngine *this,
        Scaleform::SysAllocPaged *sysAlloc,
        Scaleform::MemoryHeapPT *heap,
        unsigned int allocFlags,
        unsigned __int64 minAlignSize,
        unsigned __int64 granularity,
        unsigned __int64 reserve,
        unsigned __int64 threshold,
        unsigned __int64 limit)
{
  char v10; // di
  unsigned __int8 v11; // al
  __int64 v12; // rcx
  Scaleform::List<Scaleform::HeapPT::AllocEngine::TinyBlock,Scaleform::HeapPT::AllocEngine::TinyBlock,Scaleform::ListNode<Scaleform::HeapPT::AllocEngine::TinyBlock> > *TinyBlocks; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  Scaleform::SysAllocPaged *pSysAlloc; // rcx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  bool limHandlerOK; // [rsp+30h] [rbp-48h] BYREF
  __int64 v26[2]; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-30h]
  unsigned __int64 v28; // [rsp+50h] [rbp-28h]
  __int64 v29; // [rsp+58h] [rbp-20h]
  _BOOL8 v30; // [rsp+60h] [rbp-18h]

  this->pHeap = heap;
  v10 = allocFlags;
  this->pSysAlloc = sysAlloc;
  this->pBookkeeper = &Scaleform::HeapPT::GlobalRoot->AllocBookkeeper;
  v11 = Scaleform::Alg::UpperBit(minAlignSize);
  this->MinAlignShift = v11;
  this->MinAlignMask = (1i64 << v11) - 1;
  Scaleform::HeapPT::AllocBitSet1::AllocBitSet1(&this->Allocator, v11);
  v12 = 8i64;
  this->SegmentList.Root.pPrev = (Scaleform::Heap::HeapSegment *)&this->SegmentList;
  this->SegmentList.Root.pNext = (Scaleform::Heap::HeapSegment *)&this->SegmentList;
  TinyBlocks = this->TinyBlocks;
  do
  {
    TinyBlocks->Root.pPrev = (Scaleform::HeapPT::AllocEngine::TinyBlock *)TinyBlocks;
    TinyBlocks->Root.pNext = (Scaleform::HeapPT::AllocEngine::TinyBlock *)TinyBlocks;
    ++TinyBlocks;
    --v12;
  }
  while ( v12 );
  *(_WORD *)&this->Valid = 0;
  this->AllowTinyBlocks = (v10 & 0x10) != 0;
  v14 = (granularity + 4095) & 0xFFFFFFFFFFFFF000ui64;
  this->Granularity = v14;
  this->AllowDynaSize = (v10 & 0x20) != 0;
  v15 = v14 * ((v14 + reserve - 1) / v14);
  pSysAlloc = this->pSysAlloc;
  this->Reserve = v15;
  this->Threshold = threshold;
  this->Limit = limit;
  v26[0] = 0i64;
  v26[1] = 0i64;
  v27 = 0i64;
  v28 = 0i64;
  v29 = 0i64;
  v30 = 0i64;
  this->SysGranularity = 4096i64;
  this->SysDirectThreshold = 0i64;
  this->Footprint = 0i64;
  this->TinyFreeSpace = 0i64;
  this->SysDirectSpace = 0i64;
  this->pCachedBSeg = 0i64;
  this->pCachedTSeg = 0i64;
  this->pLimHandler = 0i64;
  pSysAlloc->GetInfo(pSysAlloc, (Scaleform::SysAllocPaged::Info *)v26);
  v17 = v27;
  v18 = v28;
  if ( v27 < 0x1000 )
    v17 = 4096i64;
  this->HasRealloc = v30;
  v19 = this->Granularity - 1;
  v27 = v17;
  this->SysGranularity = v17;
  v20 = v29;
  v21 = v17 * ((v17 + v19) / v17);
  this->SysDirectThreshold = v18;
  this->Granularity = v21;
  if ( v20 )
  {
    v22 = (v20 + 4095) & 0xFFFFFFFFFFFFF000ui64;
    v29 = v22;
    if ( v21 > v22 )
    {
      this->Granularity = v22;
      *(_WORD *)&this->AllowTinyBlocks = 0;
    }
  }
  v23 = this->Threshold;
  if ( v23 < 32 * v17 && v23 )
    this->Threshold = 32 * v17;
  if ( v18 )
  {
    if ( this->Threshold > v18 )
      this->Threshold = v18;
    if ( this->Threshold - 1 <= 0xFFE )
      this->Threshold = 4096i64;
    if ( this->Granularity > v18 )
      this->Granularity = (v18 + 4095) & 0xFFFFFFFFFFFFF000ui64;
    if ( v17 > v18 )
      this->SysGranularity = (v18 + 4095) & 0xFFFFFFFFFFFFF000ui64;
    if ( this->Reserve > v18 )
      this->Reserve = v18;
    this->AllowDynaSize = 0;
  }
  v24 = this->Reserve;
  if ( v24 )
    this->Valid = Scaleform::HeapPT::AllocEngine::allocSegmentBitSet(
                    this,
                    v24,
                    minAlignSize,
                    this->Granularity,
                    &limHandlerOK) != 0i64;
  else
    this->Valid = 1;
}

void *__fastcall Scaleform::HeapPT::AllocEngine::Alloc(
        Scaleform::HeapPT::AllocEngine *this,
        unsigned __int64 size,
        unsigned __int64 alignSize)
{
  unsigned __int64 MinAlignMask; // r8
  void *result; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  unsigned __int64 MinAlignShift; // rcx

  MinAlignMask = this->MinAlignMask;
  if ( alignSize - 1 <= MinAlignMask )
    return Scaleform::HeapPT::AllocEngine::Alloc(this, size);
  v7 = 32i64;
  if ( size >= 0x20 )
    v7 = size;
  if ( alignSize < MinAlignMask + 1 )
    alignSize = MinAlignMask + 1;
  if ( v7 < alignSize )
    v7 = alignSize;
  v8 = ~(alignSize - 1) & (v7 + alignSize - 1);
  if ( !this->AllowTinyBlocks
    || (MinAlignShift = this->MinAlignShift, v8 > 8i64 << MinAlignShift)
    || (result = Scaleform::HeapPT::AllocEngine::allocTiny(
                   this,
                   Scaleform::HeapPT::TinyPow2AllocType[(v8 - 1) >> MinAlignShift])) == 0i64
    && (result = Scaleform::HeapPT::AllocEngine::allocTiny(
                   this,
                   Scaleform::HeapPT::TinyPow2AllocType[(v8 - 1) >> this->MinAlignShift])) == 0i64 )
  {
    if ( v8 >= this->Threshold )
      return Scaleform::HeapPT::AllocEngine::allocSysDirect(this, v8, alignSize);
    else
      return Scaleform::HeapPT::AllocEngine::allocBitSet(this, v8, alignSize);
  }
  return result;
}

void *__fastcall Scaleform::HeapPT::AllocEngine::Alloc(Scaleform::HeapPT::AllocEngine *this, unsigned __int64 size)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // rbx
  unsigned __int64 MinAlignShift; // rcx
  void *result; // rax

  v2 = 32i64;
  if ( size >= 0x20 )
    v2 = size;
  v4 = ~this->MinAlignMask & (this->MinAlignMask + v2);
  if ( !this->AllowTinyBlocks
    || (MinAlignShift = this->MinAlignShift, v4 > 8i64 << MinAlignShift)
    || (result = Scaleform::HeapPT::AllocEngine::allocTiny(this, (v4 - 1) >> MinAlignShift)) == 0i64
    && (result = Scaleform::HeapPT::AllocEngine::allocTiny(this, (v4 - 1) >> this->MinAlignShift)) == 0i64 )
  {
    if ( v4 >= this->Threshold )
      return Scaleform::HeapPT::AllocEngine::allocSysDirect(this, v4, 0x1000ui64);
    else
      return Scaleform::HeapPT::AllocEngine::allocBitSet(this, v4);
  }
  return result;
}

void __fastcall Scaleform::HeapPT::AllocEngine::Free(
        Scaleform::HeapPT::AllocEngine *this,
        Scaleform::Heap::HeapSegment *seg,
        void *ptr)
{
  unsigned int SegType; // eax
  Scaleform::List<Scaleform::HeapPT::AllocEngine::TinyBlock,Scaleform::HeapPT::AllocEngine::TinyBlock,Scaleform::ListNode<Scaleform::HeapPT::AllocEngine::TinyBlock> > *v6; // r9
  bool v7; // zf
  Scaleform::HeapPT::HeapRoot *v8; // rbx

  SegType = seg->SegType;
  if ( SegType > 7 )
  {
    if ( SegType == 10 )
    {
      Scaleform::HeapPT::AllocBitSet2::Free(&this->Allocator, seg, ptr);
      v7 = seg->UseCount-- == 1;
      if ( v7 )
        Scaleform::HeapPT::AllocEngine::freeSegmentBitSet(this, seg);
    }
    else
    {
      this->SysDirectSpace -= seg->DataSize;
      v8 = Scaleform::HeapPT::GlobalRoot;
      Scaleform::Lock::DoLock(&Scaleform::HeapPT::GlobalRoot->RootLock.mLock);
      Scaleform::HeapPT::AllocEngine::freeSegment(this, seg);
      Scaleform::Lock::Unlock(&v8->RootLock.mLock);
    }
  }
  else
  {
    *((_QWORD *)ptr + 2) = seg;
    v6 = &this->TinyBlocks[seg->SegType];
    *((_QWORD *)ptr + 1) = v6->Root.pNext;
    *(_QWORD *)ptr = v6;
    v6->Root.pNext->pPrev = (Scaleform::HeapPT::AllocEngine::TinyBlock *)ptr;
    v6->Root.pNext = (Scaleform::HeapPT::AllocEngine::TinyBlock *)ptr;
    this->TinyFreeSpace += (seg->SegType + 1) << this->MinAlignShift;
    v7 = seg->UseCount-- == 1;
    if ( v7 )
      Scaleform::HeapPT::AllocEngine::freeSegmentTiny(this, seg);
  }
}

void __fastcall Scaleform::HeapPT::AllocEngine::FreeAll(Scaleform::HeapPT::AllocEngine *this)
{
  Scaleform::Heap::HeapSegment *pNext; // rbx
  Scaleform::List<Scaleform::Heap::HeapSegment,Scaleform::Heap::HeapSegment,Scaleform::ListNode<Scaleform::Heap::HeapSegment> > *i; // rbp
  void *pLimHandler; // rcx
  unsigned __int64 DataSize; // rsi
  unsigned __int64 UseCount; // rax
  Scaleform::SysAllocPaged *pSysAlloc; // rcx
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  __int64 v10; // r9

  pNext = this->SegmentList.Root.pNext;
  for ( i = &this->SegmentList; pNext != (Scaleform::Heap::HeapSegment *)i; pNext = this->SegmentList.Root.pNext )
  {
    pLimHandler = this->pLimHandler;
    DataSize = pNext->DataSize;
    if ( pLimHandler )
      (*(void (__fastcall **)(void *, Scaleform::MemoryHeapPT *, unsigned __int64))(*(_QWORD *)pLimHandler + 16i64))(
        pLimHandler,
        this->pHeap,
        pNext->DataSize);
    this->Footprint -= DataSize;
    Scaleform::HeapPT::PageTable::UnmapRange(Scaleform::HeapPT::GlobalPageTable, pNext->pData, DataSize);
    UseCount = pNext->UseCount;
    pSysAlloc = this->pSysAlloc;
    if ( (UseCount & 0x80000000) != 0 )
    {
      LODWORD(UseCount) = UseCount & 0x7FFFFFFF;
      v8 = 1i64 << pNext->Alignment;
      this->Footprint -= UseCount;
      v9 = pNext->UseCount;
      LODWORD(v9) = v9 & 0x7FFFFFFF;
      pSysAlloc->FreeSysDirect(pSysAlloc, &pNext->pData[-v9], v9 + DataSize, v8);
    }
    else
    {
      v10 = 4096i64;
      if ( (unsigned __int64)(1i64 << pNext->Alignment) > 0x1000 )
        v10 = 1i64 << pNext->Alignment;
      pSysAlloc->Free(pSysAlloc, pNext->pData, DataSize, v10);
    }
    pNext->pPrev->pNext = pNext->pNext;
    pNext->pNext->Scaleform::ListNode<Scaleform::Heap::HeapSegment>::$E0E5373A1D0ABB3F4DF327044417E483::pPrev = pNext->pPrev;
    Scaleform::HeapPT::Bookkeeper::Free(this->pBookkeeper, pNext, pNext->SelfSize);
  }
  Scaleform::HeapPT::FreeBin::Reset(&this->Allocator.Bin);
}

unsigned __int64 __fastcall Scaleform::HeapPT::AllocEngine::GetFootprint(Scaleform::HeapPT::AllocEngine *this)
{
  return this->Footprint;
}

void __fastcall Scaleform::HeapPT::AllocEngine::GetHeapOtherStats(
        Scaleform::HeapPT::AllocEngine *this,
        Scaleform::HeapPT::HeapOtherStats *otherStats)
{
  unsigned __int64 v2; // rsi
  Scaleform::Heap::HeapSegment *pNext; // rax
  Scaleform::List<Scaleform::Heap::HeapSegment,Scaleform::Heap::HeapSegment,Scaleform::ListNode<Scaleform::Heap::HeapSegment> > *i; // rbx

  v2 = 0i64;
  otherStats->Segments = 0i64;
  otherStats->Bookkeeping = 0i64;
  otherStats->DynamicGranularity = Scaleform::HeapPT::AllocEngine::calcDynaSize(this);
  otherStats->SysDirectSpace = this->SysDirectSpace;
  pNext = this->SegmentList.Root.pNext;
  for ( i = &this->SegmentList; pNext != (Scaleform::Heap::HeapSegment *)i; pNext = pNext->pNext )
  {
    ++otherStats->Segments;
    v2 += pNext->SelfSize;
    otherStats->Bookkeeping = v2;
  }
}

unsigned __int64 __fastcall Scaleform::HeapPT::AllocEngine::GetUsableSize(
        Scaleform::HeapPT::AllocEngine *this,
        Scaleform::Heap::HeapSegment *seg,
        const void *ptr)
{
  unsigned int SegType; // eax

  SegType = seg->SegType;
  if ( SegType <= 7 )
    return (unsigned __int64)(SegType + 1) << this->MinAlignShift;
  if ( SegType == 10 )
    return Scaleform::HeapPT::AllocBitSet2::GetUsableSize(&this->Allocator, seg, ptr);
  return seg->DataSize;
}

unsigned __int64 __fastcall Scaleform::HeapPT::AllocEngine::GetUsedSpace(Scaleform::HeapPT::AllocEngine *this)
{
  return this->Footprint - (this->Allocator.Bin.FreeBlocks << this->Allocator.MinAlignShift) - this->TinyFreeSpace;
}

void *__fastcall Scaleform::HeapPT::AllocEngine::Realloc(
        Scaleform::HeapPT::AllocEngine *this,
        Scaleform::Heap::HeapSegment *seg,
        void *oldPtr,
        unsigned __int64 newSize)
{
  unsigned __int64 MinAlignMask; // rax
  unsigned __int64 v5; // rbx
  __int64 SegType; // rdx
  unsigned __int64 v10; // rbx
  unsigned __int64 MinAlignShift; // r8
  unsigned __int64 v12; // r9
  void *result; // rax
  unsigned __int64 alignShift; // rax
  unsigned __int64 oldSize; // [rsp+50h] [rbp+8h] BYREF

  MinAlignMask = this->MinAlignMask;
  v5 = 32i64;
  oldSize = 0i64;
  SegType = seg->SegType;
  if ( newSize >= 0x20 )
    v5 = newSize;
  v10 = ~MinAlignMask & (MinAlignMask + v5);
  if ( (unsigned int)SegType > 7 )
  {
    if ( (_DWORD)SegType == 10 )
    {
      result = Scaleform::HeapPT::AllocBitSet2::ReallocInPlace(&this->Allocator, seg, oldPtr, v10, &oldSize);
      if ( !result )
      {
        alignShift = Scaleform::HeapPT::AllocBitSet2::GetAlignShift(&this->Allocator, seg, oldPtr, oldSize);
        return Scaleform::HeapPT::AllocEngine::reallocGeneral(this, seg, oldPtr, oldSize, v10, alignShift);
      }
    }
    else
    {
      return Scaleform::HeapPT::AllocEngine::reallocSysDirect(this, seg, oldPtr, v10);
    }
  }
  else
  {
    MinAlignShift = this->MinAlignShift;
    v12 = (unsigned int)(((_DWORD)SegType + 1) << MinAlignShift);
    oldSize = v12;
    if ( v10 > v12 )
      return Scaleform::HeapPT::AllocEngine::reallocGeneral(
               this,
               seg,
               oldPtr,
               v12,
               v10,
               MinAlignShift + Scaleform::HeapPT::TinyPow2AllocType[SegType]);
    else
      return oldPtr;
  }
  return result;
}

void __fastcall Scaleform::HeapPT::AllocEngine::ReleaseCachedMem(Scaleform::HeapPT::AllocEngine *this)
{
  Scaleform::Heap::HeapSegment *pCachedBSeg; // rdx
  Scaleform::Heap::HeapSegment *pCachedTSeg; // rdx

  pCachedBSeg = this->pCachedBSeg;
  if ( pCachedBSeg && !pCachedBSeg->UseCount )
  {
    Scaleform::HeapPT::AllocBitSet2::ReleaseSegment(&this->Allocator, pCachedBSeg);
    Scaleform::HeapPT::AllocEngine::freeSegment(this, this->pCachedBSeg);
  }
  pCachedTSeg = this->pCachedTSeg;
  if ( pCachedTSeg && !pCachedTSeg->UseCount )
    Scaleform::HeapPT::AllocEngine::freeSegmentTiny(this, pCachedTSeg);
  this->pCachedBSeg = 0i64;
  this->pCachedTSeg = 0i64;
}

unsigned __int64 __fastcall Scaleform::HeapPT::AllocEngine::SetLimit(
        Scaleform::HeapPT::AllocEngine *this,
        unsigned __int64 lim)
{
  unsigned __int64 v4; // rax

  v4 = Scaleform::HeapPT::AllocEngine::calcDynaSize(this);
  this->Limit = v4 + lim - 1 - (v4 + lim - 1) % v4;
  return v4 + lim - 1 - (v4 + lim - 1) % v4;
}

void __fastcall Scaleform::HeapPT::AllocEngine::VisitMem(
        Scaleform::HeapPT::AllocEngine *this,
        Scaleform::Heap::MemVisitor *visitor,
        unsigned int flags)
{
  Scaleform::Heap::HeapSegment *i; // rbx
  unsigned int SegType; // eax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbp
  Scaleform::List<Scaleform::HeapPT::AllocEngine::TinyBlock,Scaleform::HeapPT::AllocEngine::TinyBlock,Scaleform::ListNode<Scaleform::HeapPT::AllocEngine::TinyBlock> > *TinyBlocks; // rsi
  unsigned __int64 j; // rbx

  if ( (flags & 1) != 0 )
    ((void (__fastcall *)(Scaleform::SysAllocPaged *))this->pSysAlloc->VisitMem)(this->pSysAlloc);
  if ( (flags & 2) != 0 )
    Scaleform::HeapPT::Starter::VisitMem(Scaleform::HeapPT::GlobalPageTable->pStarter, visitor);
  if ( (flags & 4) != 0 )
    Scaleform::HeapPT::Bookkeeper::VisitMem(this->pBookkeeper, visitor, flags);
  if ( (flags & 0x10) != 0 )
  {
    for ( i = this->SegmentList.Root.pNext; i != (Scaleform::Heap::HeapSegment *)&this->SegmentList; i = i->pNext )
    {
      SegType = i->SegType;
      if ( SegType <= 7 )
      {
        visitor->Visit(visitor, i, (unsigned __int64)i->pData, i->DataSize, Cat_AllocTiny);
        v8 = i->DataSize % ((i->SegType + 1) << this->MinAlignShift);
        if ( v8 )
          visitor->Visit(visitor, i, (unsigned __int64)&i->pData[i->DataSize - v8], v8, Cat_AllocTinyFree);
      }
      else if ( SegType == 9 )
      {
        visitor->Visit(visitor, i, (unsigned __int64)i->pData, i->DataSize, Cat_SystemDirect);
      }
      else if ( SegType == 10 )
      {
        visitor->Visit(visitor, i, (unsigned __int64)i->pData, i->DataSize, Cat_AllocBitSet);
      }
    }
    if ( (flags & 0x20) != 0 )
    {
      Scaleform::HeapPT::FreeBin::VisitMem(
        &this->Allocator.Bin,
        visitor,
        this->Allocator.MinAlignShift,
        Cat_AllocBitSetFree);
      v9 = 0i64;
      TinyBlocks = this->TinyBlocks;
      do
      {
        for ( j = (unsigned __int64)TinyBlocks->Root.pNext;
              (Scaleform::List<Scaleform::HeapPT::AllocEngine::TinyBlock,Scaleform::HeapPT::AllocEngine::TinyBlock,Scaleform::ListNode<Scaleform::HeapPT::AllocEngine::TinyBlock> > *)j != TinyBlocks;
              j = *(_QWORD *)(j + 8) )
        {
          visitor->Visit(
            visitor,
            *(const Scaleform::Heap::HeapSegment **)(j + 16),
            j,
            (v9 + 1) << this->MinAlignShift,
            Cat_AllocTinyFree);
        }
        ++v9;
        ++TinyBlocks;
      }
      while ( v9 < 8 );
    }
  }
}

void __fastcall Scaleform::HeapPT::AllocEngine::VisitSegments(
        Scaleform::HeapPT::AllocEngine *this,
        Scaleform::Heap::SegVisitor *visitor)
{
  Scaleform::Heap::HeapSegment *pNext; // rbx
  Scaleform::List<Scaleform::Heap::HeapSegment,Scaleform::Heap::HeapSegment,Scaleform::ListNode<Scaleform::Heap::HeapSegment> > *i; // rbp

  pNext = this->SegmentList.Root.pNext;
  for ( i = &this->SegmentList; pNext != (Scaleform::Heap::HeapSegment *)i; pNext = pNext->pNext )
    visitor->Visit(
      visitor,
      5u,
      pNext->pHeap,
      (unsigned __int64)pNext->pData,
      (pNext->DataSize + 4095) & 0xFFFFFFFFFFFFF000ui64);
  Scaleform::HeapPT::FreeBin::VisitUnused(&this->Allocator.Bin, visitor, this->Allocator.MinAlignShift, 0x85u);
}

unsigned __int8 *__fastcall Scaleform::HeapPT::AllocEngine::allocBitSet(
        Scaleform::HeapPT::AllocEngine *this,
        unsigned __int64 size,
        unsigned __int64 alignSize)
{
  unsigned __int8 *result; // rax
  unsigned __int64 v7; // rax
  bool limHandlerOK; // [rsp+50h] [rbp+8h] BYREF
  Scaleform::Heap::HeapSegment *allocSeg; // [rsp+68h] [rbp+20h] BYREF

  limHandlerOK = 0;
  while ( 1 )
  {
    result = Scaleform::HeapPT::AllocBitSet2::Alloc(&this->Allocator, size, alignSize, &allocSeg);
    if ( result )
      break;
    v7 = Scaleform::HeapPT::AllocEngine::calcDynaSize(this);
    if ( !Scaleform::HeapPT::AllocEngine::allocSegmentBitSet(this, size, alignSize, v7, &limHandlerOK) )
    {
      if ( !limHandlerOK )
        return 0i64;
      Scaleform::HeapPT::AllocEngine::allocSegmentBitSet(this, size, alignSize, this->Granularity, &limHandlerOK);
    }
    if ( !limHandlerOK )
      return 0i64;
  }
  ++allocSeg->UseCount;
  return result;
}

unsigned __int8 *__fastcall Scaleform::HeapPT::AllocEngine::allocBitSet(
        Scaleform::HeapPT::AllocEngine *this,
        unsigned __int64 size)
{
  unsigned __int8 *result; // rax
  unsigned __int64 MinAlignMask; // rsi
  unsigned __int64 v6; // rax
  bool limHandlerOK; // [rsp+50h] [rbp+8h] BYREF
  Scaleform::Heap::HeapSegment *allocSeg; // [rsp+60h] [rbp+18h] BYREF

  limHandlerOK = 0;
  while ( 1 )
  {
    result = Scaleform::HeapPT::AllocBitSet2::Alloc(&this->Allocator, size, &allocSeg);
    if ( result )
      break;
    MinAlignMask = this->MinAlignMask;
    v6 = Scaleform::HeapPT::AllocEngine::calcDynaSize(this);
    if ( !Scaleform::HeapPT::AllocEngine::allocSegmentBitSet(this, size, MinAlignMask + 1, v6, &limHandlerOK) )
    {
      if ( !limHandlerOK )
        return 0i64;
      Scaleform::HeapPT::AllocEngine::allocSegmentBitSet(this, size, MinAlignMask + 1, this->Granularity, &limHandlerOK);
    }
    if ( !limHandlerOK )
      return 0i64;
  }
  ++allocSeg->UseCount;
  return result;
}

Scaleform::Heap::HeapSegment *__fastcall Scaleform::HeapPT::AllocEngine::allocSegment(
        Scaleform::HeapPT::AllocEngine *this,
        unsigned int segType,
        unsigned __int64 dataSize,
        unsigned __int64 alignSize,
        unsigned __int64 bookkeepingSize,
        bool *limHandlerOK)
{
  unsigned __int64 Limit; // rcx
  Scaleform::HeapPT::HeapRoot *v11; // rbx
  unsigned __int64 v12; // rsi
  Scaleform::Heap::HeapSegment *v13; // rax
  Scaleform::Heap::HeapSegment *v14; // rbx
  unsigned __int8 v15; // al
  unsigned __int8 *v16; // rax
  bool v17; // al
  unsigned __int8 *pData; // rdx
  Scaleform::Heap::HeapSegment *result; // rax

  Limit = this->Limit;
  if ( Limit && dataSize + this->Footprint > Limit && this->pLimHandler )
  {
    v11 = Scaleform::HeapPT::GlobalRoot;
    Scaleform::Lock::Unlock(&Scaleform::HeapPT::GlobalRoot->RootLock.mLock);
    ++*((_DWORD *)this->pLimHandler + 2);
    *limHandlerOK = (*(__int64 (__fastcall **)(void *, Scaleform::MemoryHeapPT *, unsigned __int64))(*(_QWORD *)this->pLimHandler + 8i64))(
                      this->pLimHandler,
                      this->pHeap,
                      this->Footprint + dataSize - this->Limit);
    --*((_DWORD *)this->pLimHandler + 2);
    Scaleform::Lock::DoLock(&v11->RootLock.mLock);
  }
  *limHandlerOK = 0;
  v12 = (bookkeepingSize + 95) & 0xFFFFFFFFFFFFFFE0ui64;
  v13 = (Scaleform::Heap::HeapSegment *)Scaleform::HeapPT::Bookkeeper::Alloc(this->pBookkeeper, v12);
  v14 = v13;
  if ( !v13 )
    return 0i64;
  v13->SelfSize = v12;
  v13->SegType = segType;
  v15 = Scaleform::Alg::UpperBit((unsigned int)alignSize);
  v14->UseCount = 0i64;
  v14->Alignment = v15;
  v14->pHeap = this->pHeap;
  v14->DataSize = dataSize;
  v14->pData = 0i64;
  if ( dataSize )
  {
    if ( alignSize < 0x1000 )
      alignSize = 4096i64;
    v16 = (unsigned __int8 *)this->pSysAlloc->Alloc(this->pSysAlloc, dataSize, alignSize);
    v14->pData = v16;
    if ( !v16 )
      goto LABEL_12;
    v17 = Scaleform::HeapPT::PageTable::MapRange(Scaleform::HeapPT::GlobalPageTable, v16, v14->DataSize);
    pData = v14->pData;
    if ( !v17 )
    {
      this->pSysAlloc->Free(this->pSysAlloc, pData, dataSize, alignSize);
LABEL_12:
      Scaleform::HeapPT::Bookkeeper::Free(this->pBookkeeper, v14, v12);
      return 0i64;
    }
    Scaleform::HeapPT::PageTable::SetSegmentInRange(
      Scaleform::HeapPT::GlobalPageTable,
      (unsigned __int64)pData,
      v14->DataSize,
      v14);
  }
  v14->pNext = this->SegmentList.Root.pNext;
  v14->pPrev = (Scaleform::Heap::HeapSegment *)&this->SegmentList;
  this->SegmentList.Root.pNext->pPrev = v14;
  this->SegmentList.Root.pNext = v14;
  this->Footprint += v14->DataSize;
  result = v14;
  *limHandlerOK = 1;
  return result;
}

Scaleform::Heap::HeapSegment *__fastcall Scaleform::HeapPT::AllocEngine::allocSegmentBitSet(
        Scaleform::HeapPT::AllocEngine *this,
        unsigned __int64 size,
        unsigned __int64 alignSize,
        unsigned __int64 granularity,
        bool *limHandlerOK)
{
  Scaleform::HeapPT::HeapRoot *v5; // rbx
  unsigned __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // r8
  Scaleform::Heap::HeapSegment *v13; // rax
  Scaleform::Heap::HeapSegment *v14; // rdi

  v5 = Scaleform::HeapPT::GlobalRoot;
  Scaleform::Lock::DoLock(&Scaleform::HeapPT::GlobalRoot->RootLock.mLock);
  v10 = this->MinAlignMask + 1;
  if ( alignSize > v10 )
    v10 = alignSize;
  v11 = v10;
  if ( v10 > 0x1000 )
    v11 = 2 * v10;
  v12 = (~(v10 - 1) & (v11 + size - 1))
      + granularity
      - 1
      - ((~(v10 - 1) & (v11 + size - 1)) + granularity - 1) % granularity;
  v13 = Scaleform::HeapPT::AllocEngine::allocSegment(
          this,
          0xAu,
          v12,
          0x1000ui64,
          4 * ((((v12 + (1i64 << this->Allocator.MinAlignShift) - 1) >> this->Allocator.MinAlignShift) + 15) >> 4),
          limHandlerOK);
  v14 = v13;
  if ( v13 )
    Scaleform::HeapPT::AllocBitSet2::InitSegment(&this->Allocator, v13);
  Scaleform::Lock::Unlock(&v5->RootLock.mLock);
  return v14;
}

Scaleform::Heap::HeapSegment *__fastcall Scaleform::HeapPT::AllocEngine::allocSegmentNoGranulator(
        Scaleform::HeapPT::AllocEngine *this,
        unsigned __int64 dataSize,
        unsigned __int64 alignSize,
        bool *limHandlerOK)
{
  unsigned __int64 Limit; // rcx
  _DWORD *pLimHandler; // rax
  Scaleform::HeapPT::HeapRoot *v10; // rbx
  Scaleform::Heap::HeapSegment *v11; // rax
  Scaleform::Heap::HeapSegment *v12; // rbp
  Scaleform::Heap::HeapSegment *v13; // rdi
  unsigned __int8 *v14; // rax
  unsigned __int8 *v15; // r12
  unsigned __int64 v16; // rax
  unsigned __int8 v17; // al
  unsigned __int64 v18; // r8
  bool v19; // al
  unsigned __int64 v20; // r8
  unsigned __int64 pData; // rdx
  __int64 UseCount_low; // rax
  __int64 v24[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v25; // [rsp+80h] [rbp+8h]
  unsigned __int64 val; // [rsp+98h] [rbp+20h] BYREF

  Limit = this->Limit;
  if ( Limit )
  {
    if ( dataSize + this->Footprint > Limit )
    {
      pLimHandler = this->pLimHandler;
      if ( pLimHandler )
      {
        ++pLimHandler[2];
        *limHandlerOK = (*(__int64 (__fastcall **)(void *, Scaleform::MemoryHeapPT *, unsigned __int64))(*(_QWORD *)this->pLimHandler + 8i64))(
                          this->pLimHandler,
                          this->pHeap,
                          this->Footprint + dataSize - this->Limit);
        --*((_DWORD *)this->pLimHandler + 2);
      }
    }
  }
  *limHandlerOK = 0;
  v10 = Scaleform::HeapPT::GlobalRoot;
  Scaleform::Lock::DoLock(&Scaleform::HeapPT::GlobalRoot->RootLock.mLock);
  v11 = (Scaleform::Heap::HeapSegment *)Scaleform::HeapPT::Bookkeeper::Alloc(this->pBookkeeper, 0x40ui64);
  v12 = 0i64;
  v13 = v11;
  if ( v11 )
  {
    v11->SelfSize = 64i64;
    *(_QWORD *)&v11->SegType = 9i64;
    v11->UseCount = 0i64;
    v11->pHeap = this->pHeap;
    v11->DataSize = 0i64;
    v11->pData = 0i64;
    if ( dataSize )
    {
      v14 = (unsigned __int8 *)this->pSysAlloc->AllocSysDirect(this->pSysAlloc, dataSize, alignSize, v24, &val);
      v13->pData = v14;
      v15 = v14;
      if ( !v14 )
      {
LABEL_12:
        Scaleform::HeapPT::Bookkeeper::Free(this->pBookkeeper, v13, v13->SelfSize);
        goto LABEL_15;
      }
      v16 = 4096i64;
      if ( alignSize > 0x1000 )
        v16 = alignSize;
      v25 = (~(v16 - 1) & (unsigned __int64)&v15[v16 - 1]) - (_QWORD)v15;
      v17 = Scaleform::Alg::UpperBit((unsigned int)val);
      v18 = v24[0] - v25;
      v13->Alignment = v17;
      v13->DataSize = v18;
      v13->UseCount = v25 | 0x80000000;
      v13->pData = &v15[v25];
      v19 = Scaleform::HeapPT::PageTable::MapRange(Scaleform::HeapPT::GlobalPageTable, &v15[v25], v18);
      v20 = v13->DataSize;
      pData = (unsigned __int64)v13->pData;
      if ( !v19 )
      {
        this->pSysAlloc->FreeSysDirect(this->pSysAlloc, (void *)(pData - v25), v25 + v20, 1i64 << v13->Alignment);
        this->pSysAlloc->FreeSysDirect(this->pSysAlloc, v13->pData, dataSize, alignSize);
        goto LABEL_12;
      }
      Scaleform::HeapPT::PageTable::SetSegmentInRange(Scaleform::HeapPT::GlobalPageTable, pData, v20, v13);
    }
    v12 = v13;
    v13->pNext = this->SegmentList.Root.pNext;
    v13->pPrev = (Scaleform::Heap::HeapSegment *)&this->SegmentList;
    this->SegmentList.Root.pNext->pPrev = v13;
    this->SegmentList.Root.pNext = v13;
    UseCount_low = LODWORD(v13->UseCount);
    LODWORD(UseCount_low) = UseCount_low & 0x7FFFFFFF;
    this->Footprint += v13->DataSize + UseCount_low;
    *limHandlerOK = 1;
  }
LABEL_15:
  Scaleform::Lock::Unlock(&v10->RootLock.mLock);
  return v12;
}

unsigned __int8 *__fastcall Scaleform::HeapPT::AllocEngine::allocSegmentTiny(
        Scaleform::HeapPT::AllocEngine *this,
        unsigned int sizeIdx)
{
  Scaleform::HeapPT::HeapRoot *v2; // rbx
  __int64 v5; // r8
  unsigned __int64 v6; // rdi
  unsigned __int8 *v7; // rbp
  Scaleform::Heap::HeapSegment *v8; // rax
  Scaleform::HeapPT::AllocEngine::TinyBlock *pData; // rcx
  unsigned __int64 v10; // r9
  Scaleform::List<Scaleform::HeapPT::AllocEngine::TinyBlock,Scaleform::HeapPT::AllocEngine::TinyBlock,Scaleform::ListNode<Scaleform::HeapPT::AllocEngine::TinyBlock> > *i; // r8
  bool limHandlerOK; // [rsp+58h] [rbp+10h] BYREF

  v2 = Scaleform::HeapPT::GlobalRoot;
  Scaleform::Lock::DoLock(&Scaleform::HeapPT::GlobalRoot->RootLock.mLock);
  v5 = 4096i64;
  v6 = (sizeIdx + 1) << this->MinAlignShift;
  if ( 4 * v6 > 0x1000 )
    v5 = 4i64 * ((sizeIdx + 1) << this->MinAlignShift);
  v7 = 0i64;
  v8 = Scaleform::HeapPT::AllocEngine::allocSegment(
         this,
         sizeIdx,
         (v5 + 4095) & 0xFFFFFFFFFFFFF000ui64,
         0x1000ui64,
         0i64,
         &limHandlerOK);
  if ( v8 )
  {
    pData = (Scaleform::HeapPT::AllocEngine::TinyBlock *)v8->pData;
    v10 = v8->DataSize / v6;
    for ( i = &this->TinyBlocks[sizeIdx]; v10; --v10 )
    {
      pData->pSegment = v8;
      pData->pPrev = i->Root.pPrev;
      pData->pNext = (Scaleform::HeapPT::AllocEngine::TinyBlock *)i;
      i->Root.pPrev->pNext = pData;
      i->Root.pPrev = pData;
      pData = (Scaleform::HeapPT::AllocEngine::TinyBlock *)((char *)pData + v6);
    }
    this->TinyFreeSpace += v8->DataSize;
    v7 = v8->pData;
  }
  Scaleform::Lock::Unlock(&v2->RootLock.mLock);
  return v7;
}

unsigned __int8 *__fastcall Scaleform::HeapPT::AllocEngine::allocSysDirect(
        Scaleform::HeapPT::AllocEngine *this,
        unsigned __int64 dataSize,
        unsigned __int64 alignSize)
{
  unsigned __int64 SysDirectThreshold; // rax
  Scaleform::Heap::HeapSegment *v7; // rax
  unsigned __int64 SysGranularity; // r8
  unsigned __int64 v9; // r14
  Scaleform::HeapPT::HeapRoot *v10; // rbx
  Scaleform::Heap::HeapSegment *v11; // rbp
  bool limHandlerOK; // [rsp+50h] [rbp+8h] BYREF

  SysDirectThreshold = this->SysDirectThreshold;
  limHandlerOK = 0;
  if ( SysDirectThreshold && dataSize >= SysDirectThreshold )
  {
    while ( 1 )
    {
      v7 = Scaleform::HeapPT::AllocEngine::allocSegmentNoGranulator(this, dataSize, alignSize, &limHandlerOK);
      if ( v7 )
        break;
      if ( !limHandlerOK )
        goto LABEL_5;
    }
    this->SysDirectSpace += v7->DataSize;
    return v7->pData;
  }
  else
  {
LABEL_5:
    SysGranularity = this->SysGranularity;
    limHandlerOK = 0;
    v9 = SysGranularity * (((~(alignSize - 1) & (dataSize + alignSize - 1)) + SysGranularity - 1) / SysGranularity);
    while ( 1 )
    {
      v10 = Scaleform::HeapPT::GlobalRoot;
      Scaleform::Lock::DoLock(&Scaleform::HeapPT::GlobalRoot->RootLock.mLock);
      v11 = Scaleform::HeapPT::AllocEngine::allocSegment(this, 9u, v9, alignSize, 0i64, &limHandlerOK);
      Scaleform::Lock::Unlock(&v10->RootLock.mLock);
      if ( v11 )
        break;
      if ( !limHandlerOK )
        return 0i64;
    }
    this->SysDirectSpace += v11->DataSize;
    return v11->pData;
  }
}

unsigned __int8 *__fastcall Scaleform::HeapPT::AllocEngine::allocTiny(
        Scaleform::HeapPT::AllocEngine *this,
        unsigned int sizeIdx)
{
  Scaleform::HeapPT::AllocEngine::TinyBlock *pNext; // r9
  unsigned __int8 *result; // rax

  pNext = this->TinyBlocks[sizeIdx].Root.pNext;
  if ( pNext != (Scaleform::HeapPT::AllocEngine::TinyBlock *)&this->TinyBlocks[sizeIdx]
    || (result = Scaleform::HeapPT::AllocEngine::allocSegmentTiny(this, sizeIdx),
        (pNext = (Scaleform::HeapPT::AllocEngine::TinyBlock *)result) != 0i64) )
  {
    pNext->pPrev->pNext = pNext->pNext;
    pNext->pNext->Scaleform::ListNode<Scaleform::HeapPT::AllocEngine::TinyBlock>::$75F298AB7319CB372D1C21D605C3ACB4::pPrev = pNext->pPrev;
    ++pNext->pSegment->UseCount;
    this->TinyFreeSpace -= (sizeIdx + 1) << this->MinAlignShift;
    return (unsigned __int8 *)pNext;
  }
  return result;
}

unsigned __int64 __fastcall Scaleform::HeapPT::AllocEngine::calcDynaSize(Scaleform::HeapPT::AllocEngine *this)
{
  unsigned __int64 Granularity; // rbx
  unsigned __int64 result; // rax

  if ( !this->AllowDynaSize )
    return this->Granularity;
  Granularity = this->Granularity;
  result = 1i64 << Scaleform::Alg::UpperBit(
                     Granularity
                   * ((((this->Footprint
                       - (this->Allocator.Bin.FreeBlocks << this->Allocator.MinAlignShift)
                       - this->TinyFreeSpace
                       + 16) >> 4)
                     + Granularity
                     - 1)
                    / Granularity));
  if ( result < Granularity )
    result = Granularity;
  if ( result > 4 * Granularity )
    return 4 * Granularity;
  return result;
}

void __fastcall Scaleform::HeapPT::AllocEngine::freeSegment(
        Scaleform::HeapPT::AllocEngine *this,
        Scaleform::Heap::HeapSegment *seg)
{
  unsigned __int64 DataSize; // rsi
  void *pLimHandler; // rcx
  unsigned __int64 UseCount; // rax
  Scaleform::SysAllocPaged *pSysAlloc; // rcx
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  __int64 v10; // r9

  DataSize = seg->DataSize;
  pLimHandler = this->pLimHandler;
  if ( pLimHandler )
    (*(void (__fastcall **)(void *, Scaleform::MemoryHeapPT *, unsigned __int64))(*(_QWORD *)pLimHandler + 16i64))(
      pLimHandler,
      this->pHeap,
      seg->DataSize);
  this->Footprint -= DataSize;
  Scaleform::HeapPT::PageTable::UnmapRange(Scaleform::HeapPT::GlobalPageTable, seg->pData, DataSize);
  UseCount = seg->UseCount;
  pSysAlloc = this->pSysAlloc;
  if ( (UseCount & 0x80000000) != 0 )
  {
    LODWORD(UseCount) = UseCount & 0x7FFFFFFF;
    v8 = 1i64 << seg->Alignment;
    this->Footprint -= UseCount;
    v9 = seg->UseCount;
    LODWORD(v9) = v9 & 0x7FFFFFFF;
    pSysAlloc->FreeSysDirect(pSysAlloc, &seg->pData[-v9], v9 + DataSize, v8);
  }
  else
  {
    v10 = 4096i64;
    if ( (unsigned __int64)(1i64 << seg->Alignment) > 0x1000 )
      v10 = 1i64 << seg->Alignment;
    pSysAlloc->Free(pSysAlloc, seg->pData, DataSize, v10);
  }
  seg->pPrev->pNext = seg->pNext;
  seg->pNext->Scaleform::ListNode<Scaleform::Heap::HeapSegment>::$E0E5373A1D0ABB3F4DF327044417E483::pPrev = seg->pPrev;
  Scaleform::HeapPT::Bookkeeper::Free(this->pBookkeeper, seg, seg->SelfSize);
}

void __fastcall Scaleform::HeapPT::AllocEngine::freeSegmentBitSet(
        Scaleform::HeapPT::AllocEngine *this,
        Scaleform::Heap::HeapSegment *seg)
{
  Scaleform::HeapPT::HeapRoot *v2; // rbx
  Scaleform::Heap::HeapSegment *pCachedBSeg; // rdx
  unsigned __int64 Footprint; // rdx

  v2 = Scaleform::HeapPT::GlobalRoot;
  Scaleform::Lock::DoLock(&Scaleform::HeapPT::GlobalRoot->RootLock.mLock);
  pCachedBSeg = this->pCachedBSeg;
  if ( pCachedBSeg && pCachedBSeg != seg && !pCachedBSeg->UseCount )
  {
    Scaleform::HeapPT::AllocBitSet2::ReleaseSegment(&this->Allocator, pCachedBSeg);
    Scaleform::HeapPT::AllocEngine::freeSegment(this, this->pCachedBSeg);
  }
  Footprint = this->Footprint;
  this->pCachedBSeg = 0i64;
  if ( Footprint - (this->Allocator.Bin.FreeBlocks << this->Allocator.MinAlignShift) == this->TinyFreeSpace
    || seg->DataSize > 4 * this->Granularity )
  {
    if ( Footprint >= seg->DataSize + this->Reserve )
    {
      Scaleform::HeapPT::AllocBitSet2::ReleaseSegment(&this->Allocator, seg);
      Scaleform::HeapPT::AllocEngine::freeSegment(this, seg);
    }
  }
  else
  {
    this->pCachedBSeg = seg;
  }
  Scaleform::Lock::Unlock(&v2->RootLock.mLock);
}

void __fastcall Scaleform::HeapPT::AllocEngine::freeSegmentTiny(
        Scaleform::HeapPT::AllocEngine *this,
        Scaleform::Heap::HeapSegment *seg)
{
  Scaleform::HeapPT::HeapRoot *v2; // rbx
  Scaleform::Heap::HeapSegment *pCachedTSeg; // rdx
  unsigned __int64 Footprint; // rdx

  v2 = Scaleform::HeapPT::GlobalRoot;
  Scaleform::Lock::DoLock(&Scaleform::HeapPT::GlobalRoot->RootLock.mLock);
  pCachedTSeg = this->pCachedTSeg;
  if ( pCachedTSeg && pCachedTSeg != seg && !pCachedTSeg->UseCount )
    Scaleform::HeapPT::AllocEngine::releaseSegmentTiny(this, pCachedTSeg);
  Footprint = this->Footprint;
  this->pCachedTSeg = 0i64;
  if ( Footprint - (this->Allocator.Bin.FreeBlocks << this->Allocator.MinAlignShift) == this->TinyFreeSpace )
  {
    if ( Footprint >= seg->DataSize + this->Reserve )
      Scaleform::HeapPT::AllocEngine::releaseSegmentTiny(this, seg);
  }
  else
  {
    this->pCachedTSeg = seg;
  }
  Scaleform::Lock::Unlock(&v2->RootLock.mLock);
}

void *__fastcall Scaleform::HeapPT::AllocEngine::reallocGeneral(
        Scaleform::HeapPT::AllocEngine *this,
        Scaleform::Heap::HeapSegment *seg,
        void *oldPtr,
        unsigned __int64 oldSize,
        unsigned __int64 newSize,
        unsigned __int64 alignShift)
{
  unsigned __int64 v6; // rdi
  void *result; // rax
  void *v12; // rbx

  v6 = newSize;
  result = Scaleform::HeapPT::AllocEngine::Alloc(this, newSize, 1i64 << alignShift);
  v12 = result;
  if ( result )
  {
    if ( oldSize < newSize )
      v6 = oldSize;
    memmove(result, oldPtr, v6);
    Scaleform::HeapPT::AllocEngine::Free(this, seg, oldPtr);
    return v12;
  }
  return result;
}

unsigned __int8 *__fastcall Scaleform::HeapPT::AllocEngine::reallocSysDirect(
        Scaleform::HeapPT::AllocEngine *this,
        Scaleform::Heap::HeapSegment *seg,
        void *oldPtr,
        unsigned __int64 newSize)
{
  unsigned __int64 alignShift; // r10
  unsigned __int64 v9; // r13
  unsigned __int64 DataSize; // r14
  unsigned __int64 v11; // rsi
  unsigned __int64 Limit; // rcx
  _DWORD *pLimHandler; // rax
  char v14; // al
  Scaleform::LockSafe *p_RootLock; // rbx
  unsigned __int8 *pData; // rdx
  unsigned __int8 *v17; // rdi

  if ( (seg->UseCount & 0x80000000) != 0 )
    return (unsigned __int8 *)Scaleform::HeapPT::AllocEngine::reallocGeneral(
                                this,
                                seg,
                                oldPtr,
                                seg->DataSize,
                                newSize,
                                seg->Alignment);
  alignShift = seg->Alignment;
  v9 = 1i64 << alignShift;
  DataSize = seg->DataSize;
  v11 = this->SysGranularity
      * (((~((1i64 << alignShift) - 1) & ((1i64 << alignShift) + newSize - 1)) + this->SysGranularity - 1)
       / this->SysGranularity);
  if ( v11 == DataSize )
    return seg->pData;
  if ( v11 < DataSize && 2 * v11 < this->Threshold )
    return (unsigned __int8 *)Scaleform::HeapPT::AllocEngine::reallocGeneral(
                                this,
                                seg,
                                oldPtr,
                                DataSize,
                                v11,
                                alignShift);
  if ( v11 > DataSize )
  {
    Limit = this->Limit;
    if ( Limit )
    {
      if ( this->Footprint + v11 - DataSize > Limit )
      {
        pLimHandler = this->pLimHandler;
        if ( pLimHandler )
        {
          ++pLimHandler[2];
          v14 = (*(__int64 (__fastcall **)(void *, Scaleform::MemoryHeapPT *, unsigned __int64))(*(_QWORD *)this->pLimHandler
                                                                                               + 8i64))(
                  this->pLimHandler,
                  this->pHeap,
                  this->Footprint + v11 - DataSize - this->Limit);
          --*((_DWORD *)this->pLimHandler + 2);
          if ( !v14 || this->Footprint + v11 - DataSize > this->Limit )
            return (unsigned __int8 *)Scaleform::HeapPT::AllocEngine::reallocGeneral(
                                        this,
                                        seg,
                                        oldPtr,
                                        DataSize,
                                        v11,
                                        seg->Alignment);
        }
      }
    }
  }
  p_RootLock = &Scaleform::HeapPT::GlobalRoot->RootLock;
  Scaleform::Lock::DoLock(&Scaleform::HeapPT::GlobalRoot->RootLock.mLock);
  if ( this->HasRealloc && this->pSysAlloc->ReallocInPlace(this->pSysAlloc, seg->pData, DataSize, v11, v9) )
  {
    pData = seg->pData;
    if ( v11 <= DataSize )
    {
      Scaleform::HeapPT::PageTable::RemapRange(Scaleform::HeapPT::GlobalPageTable, pData, v11, DataSize);
    }
    else if ( !Scaleform::HeapPT::PageTable::RemapRange(Scaleform::HeapPT::GlobalPageTable, pData, v11, DataSize) )
    {
      this->pSysAlloc->ReallocInPlace(this->pSysAlloc, seg->pData, v11, DataSize, v9);
      Scaleform::Lock::Unlock(&p_RootLock->mLock);
      return 0i64;
    }
    this->Footprint += v11 - DataSize;
    this->SysDirectSpace += v11 - DataSize;
    v17 = seg->pData;
    seg->DataSize = v11;
    Scaleform::Lock::Unlock(&p_RootLock->mLock);
    return v17;
  }
  else
  {
    Scaleform::Lock::Unlock(&p_RootLock->mLock);
    return (unsigned __int8 *)Scaleform::HeapPT::AllocEngine::reallocGeneral(
                                this,
                                seg,
                                oldPtr,
                                DataSize,
                                v11,
                                seg->Alignment);
  }
}

void __fastcall Scaleform::HeapPT::AllocEngine::releaseSegmentTiny(
        Scaleform::HeapPT::AllocEngine *this,
        Scaleform::Heap::HeapSegment *seg)
{
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rax
  unsigned __int8 *pData; // rdx
  unsigned __int64 i; // r9
  _QWORD *v8; // rcx
  __int64 v9; // rax
  void *pLimHandler; // rcx
  unsigned __int64 DataSize; // rsi
  unsigned __int64 UseCount; // rax
  Scaleform::SysAllocPaged *pSysAlloc; // rcx
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  __int64 v16; // r9

  v4 = (seg->SegType + 1) << this->MinAlignShift;
  v5 = seg->DataSize / v4;
  pData = seg->pData;
  for ( i = v5; i; --i )
  {
    *(_QWORD *)(*(_QWORD *)pData + 8i64) = *((_QWORD *)pData + 1);
    v8 = (_QWORD *)*((_QWORD *)pData + 1);
    v9 = *(_QWORD *)pData;
    pData += v4;
    *v8 = v9;
  }
  this->TinyFreeSpace -= seg->DataSize;
  pLimHandler = this->pLimHandler;
  DataSize = seg->DataSize;
  if ( pLimHandler )
    (*(void (__fastcall **)(void *, Scaleform::MemoryHeapPT *, unsigned __int64, unsigned __int64))(*(_QWORD *)pLimHandler
                                                                                                  + 16i64))(
      pLimHandler,
      this->pHeap,
      seg->DataSize,
      i);
  this->Footprint -= DataSize;
  Scaleform::HeapPT::PageTable::UnmapRange(Scaleform::HeapPT::GlobalPageTable, seg->pData, DataSize);
  UseCount = seg->UseCount;
  pSysAlloc = this->pSysAlloc;
  if ( (UseCount & 0x80000000) != 0 )
  {
    LODWORD(UseCount) = UseCount & 0x7FFFFFFF;
    v14 = 1i64 << seg->Alignment;
    this->Footprint -= UseCount;
    v15 = seg->UseCount;
    LODWORD(v15) = v15 & 0x7FFFFFFF;
    pSysAlloc->FreeSysDirect(pSysAlloc, &seg->pData[-v15], v15 + DataSize, v14);
  }
  else
  {
    v16 = 4096i64;
    if ( (unsigned __int64)(1i64 << seg->Alignment) > 0x1000 )
      v16 = 1i64 << seg->Alignment;
    pSysAlloc->Free(pSysAlloc, seg->pData, DataSize, v16);
  }
  seg->pPrev->pNext = seg->pNext;
  seg->pNext->Scaleform::ListNode<Scaleform::Heap::HeapSegment>::$E0E5373A1D0ABB3F4DF327044417E483::pPrev = seg->pPrev;
  Scaleform::HeapPT::Bookkeeper::Free(this->pBookkeeper, seg, seg->SelfSize);
}

