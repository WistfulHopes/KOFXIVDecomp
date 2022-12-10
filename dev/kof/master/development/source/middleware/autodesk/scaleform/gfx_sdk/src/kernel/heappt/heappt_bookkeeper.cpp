#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_allocbitset1.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_freebin.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_pagetable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_heaptypes.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_starter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_granulator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_alloclite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_bookkeeper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"

Scaleform::HeapPT::Bookkeeper::Bookkeeper(Scaleform::SysAllocPaged * sysAlloc, unsigned long long granularity); // 0x140437DB0
Scaleform::Heap::HeapSegment * Scaleform::HeapPT::Bookkeeper::allocSegment(unsigned long long dataSize); // 0x140438160
void Scaleform::HeapPT::Bookkeeper::freeSegment(Scaleform::Heap::HeapSegment * seg); // 0x140438270
void * Scaleform::HeapPT::Bookkeeper::Alloc(unsigned long long size); // 0x140437E60
void Scaleform::HeapPT::Bookkeeper::Free(void * ptr, unsigned long long size); // 0x140437F70
void Scaleform::HeapPT::Bookkeeper::VisitMem(Scaleform::Heap::MemVisitor * visitor, unsigned long flags); // 0x140438040
void Scaleform::HeapPT::Bookkeeper::VisitSegments(Scaleform::Heap::SegVisitor * visitor); // 0x1404380E0void __fastcall Scaleform::HeapPT::Bookkeeper::Bookkeeper(
        Scaleform::HeapPT::Bookkeeper *this,
        Scaleform::SysAllocPaged *sysAlloc,
        unsigned __int64 granularity)
{
  Scaleform::SysAllocPaged *pSysAlloc; // rcx
  unsigned __int64 v5; // r8
  __int64 v6[2]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v7; // [rsp+30h] [rbp-38h]
  __int64 v8; // [rsp+38h] [rbp-30h]
  __int64 v9; // [rsp+40h] [rbp-28h]
  __int64 v10; // [rsp+48h] [rbp-20h]

  this->pSysAlloc = sysAlloc;
  this->Granularity = granularity;
  this->SegmentList.Root.pPrev = (Scaleform::Heap::HeapSegment *)&this->SegmentList;
  this->SegmentList.Root.pNext = (Scaleform::Heap::HeapSegment *)&this->SegmentList;
  Scaleform::HeapPT::AllocBitSet1::AllocBitSet1((Scaleform::HeapPT::AllocBitSet2 *)&this->Allocator, 5ui64);
  pSysAlloc = this->pSysAlloc;
  this->Footprint = 0i64;
  v6[0] = 0i64;
  v6[1] = 0i64;
  v7 = 0i64;
  v8 = 0i64;
  v9 = 0i64;
  v10 = 0i64;
  pSysAlloc->GetInfo(pSysAlloc, (Scaleform::SysAllocPaged::Info *)v6);
  v5 = v7;
  if ( v7 < 0x1000 )
    v5 = 4096i64;
  this->Granularity = v5 * ((v5 + this->Granularity - 1) / v5);
}

Scaleform::Heap::HeapSegment *__fastcall Scaleform::HeapPT::Bookkeeper::Alloc(
        Scaleform::HeapPT::Bookkeeper *this,
        unsigned __int64 size)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rbx
  Scaleform::Heap::HeapSegment *result; // rax
  unsigned __int64 Granularity; // r8
  unsigned __int64 MinAlignShift; // rcx
  unsigned __int64 i; // rdx
  Scaleform::Heap::HeapSegment *allocSeg; // [rsp+30h] [rbp+8h] BYREF
  Scaleform::Heap::HeapSegment *v10; // [rsp+38h] [rbp+10h] BYREF

  v3 = size;
  if ( size < 0x20 )
    v3 = 32i64;
  v4 = ~this->Allocator.MinAlignMask & (this->Allocator.MinAlignMask + v3);
  result = (Scaleform::Heap::HeapSegment *)Scaleform::HeapPT::AllocBitSet1::Alloc(&this->Allocator, v4, &allocSeg);
  if ( result )
    goto LABEL_8;
  Granularity = this->Granularity;
  MinAlignShift = this->Allocator.MinAlignShift;
  for ( i = Granularity * ((v4 + Granularity - 1) / Granularity);
        i < v4
          + ((4 * ((((this->Allocator.MinAlignMask + i) >> MinAlignShift) + 31) >> 5) + 95) & 0xFFFFFFFFFFFFFFE0ui64);
        i += Granularity )
  {
    ;
  }
  result = Scaleform::HeapPT::Bookkeeper::allocSegment(this, i);
  allocSeg = result;
  if ( result )
  {
    result = (Scaleform::Heap::HeapSegment *)Scaleform::HeapPT::AllocBitSet1::Alloc(&this->Allocator, v4, &v10);
LABEL_8:
    ++allocSeg->UseCount;
  }
  return result;
}

void __fastcall Scaleform::HeapPT::Bookkeeper::Free(
        Scaleform::HeapPT::Bookkeeper *this,
        void *ptr,
        unsigned __int64 size)
{
  Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256>,256>,4096>,4096> *v6; // rdx
  Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256>,256>,4096> *v7; // rax
  Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256>,256> *v8; // rcx
  Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256> *v9; // rdx
  Scaleform::Heap::HeapSegment **p_pSegment; // rbx
  Scaleform::Heap::HeapSegment *v11; // rbx

  v6 = &Scaleform::HeapPT::GlobalPageTable->RootTable[(unsigned __int64)ptr >> 52];
  if ( v6
    && (v7 = &v6->pTable[((unsigned __int64)ptr >> 40) & 0xFFF]) != 0i64
    && (v8 = &v7->pTable[((unsigned __int64)ptr >> 28) & 0xFFF]) != 0i64
    && (v9 = &v8->pTable[(unsigned __int8)((unsigned __int64)ptr >> 20)]) != 0i64
    && (p_pSegment = &v9->pTable[(unsigned __int8)((unsigned __int64)ptr >> 12)].pSegment) != 0i64 )
  {
    v11 = *p_pSegment;
  }
  else
  {
    v11 = 0i64;
  }
  if ( size < 0x20 )
    size = 32i64;
  Scaleform::HeapPT::AllocBitSet1::Free(
    &this->Allocator,
    v11,
    ptr,
    ~this->Allocator.MinAlignMask & (this->Allocator.MinAlignMask + size));
  if ( v11->UseCount-- == 1 )
    Scaleform::HeapPT::Bookkeeper::freeSegment(this, v11);
}

void __fastcall Scaleform::HeapPT::Bookkeeper::VisitMem(
        Scaleform::HeapPT::Bookkeeper *this,
        Scaleform::Heap::MemVisitor *visitor,
        unsigned int flags)
{
  char v3; // r14
  Scaleform::Heap::HeapSegment *pNext; // rbx
  Scaleform::List<Scaleform::Heap::HeapSegment,Scaleform::Heap::HeapSegment,Scaleform::ListNode<Scaleform::Heap::HeapSegment> > *i; // rbp

  if ( (flags & 4) != 0 )
  {
    v3 = flags;
    pNext = this->SegmentList.Root.pNext;
    for ( i = &this->SegmentList; pNext != (Scaleform::Heap::HeapSegment *)i; pNext = pNext->pNext )
      visitor->Visit(visitor, pNext, (unsigned __int64)pNext->pData, pNext->DataSize, Cat_Bookkeeper);
    if ( (v3 & 8) != 0 )
      Scaleform::HeapPT::FreeBin::VisitMem(
        &this->Allocator.Bin,
        visitor,
        this->Allocator.MinAlignShift,
        Cat_BookkeeperFree);
  }
}

void __fastcall Scaleform::HeapPT::Bookkeeper::VisitSegments(
        Scaleform::HeapPT::Bookkeeper *this,
        Scaleform::Heap::SegVisitor *visitor)
{
  Scaleform::Heap::HeapSegment *pNext; // rbx
  Scaleform::List<Scaleform::Heap::HeapSegment,Scaleform::Heap::HeapSegment,Scaleform::ListNode<Scaleform::Heap::HeapSegment> > *i; // rbp

  pNext = this->SegmentList.Root.pNext;
  for ( i = &this->SegmentList; pNext != (Scaleform::Heap::HeapSegment *)i; pNext = pNext->pNext )
    visitor->Visit(visitor, 3u, 0i64, (unsigned __int64)pNext, pNext->SelfSize);
  Scaleform::HeapPT::FreeBin::VisitUnused(&this->Allocator.Bin, visitor, this->Allocator.MinAlignShift, 0x83u);
}

Scaleform::Heap::HeapSegment *__fastcall Scaleform::HeapPT::Bookkeeper::allocSegment(
        Scaleform::HeapPT::Bookkeeper *this,
        unsigned __int64 dataSize)
{
  Scaleform::Heap::HeapSegment *v4; // rax
  Scaleform::Heap::HeapSegment *v5; // rbx
  unsigned __int64 v7; // rax
  Scaleform::Heap::HeapSegment *pNext; // rax

  v4 = (Scaleform::Heap::HeapSegment *)this->pSysAlloc->Alloc(this->pSysAlloc, dataSize, 4096i64);
  v5 = v4;
  if ( !v4 )
    return 0i64;
  v4->SelfSize = dataSize;
  v4->SegType = 8;
  v4->Alignment = 12;
  v4->UseCount = 0i64;
  v4->pHeap = 0i64;
  v4->DataSize = 0i64;
  v4->pData = 0i64;
  if ( !Scaleform::HeapPT::PageTable::MapRange(Scaleform::HeapPT::GlobalPageTable, v4, dataSize) )
  {
    this->pSysAlloc->Free(this->pSysAlloc, v5, dataSize, 4096ui64);
    return 0i64;
  }
  Scaleform::HeapPT::PageTable::SetSegmentInRange(
    Scaleform::HeapPT::GlobalPageTable,
    (unsigned __int64)v5,
    dataSize,
    v5);
  v7 = (4 * ((((dataSize + this->Allocator.MinAlignMask) >> this->Allocator.MinAlignShift) + 31) >> 5) + 95) & 0xFFFFFFFFFFFFFFE0ui64;
  v5->pData = (unsigned __int8 *)v5 + v7;
  v5->DataSize = dataSize - v7;
  pNext = this->SegmentList.Root.pNext;
  v5->pPrev = (Scaleform::Heap::HeapSegment *)&this->SegmentList;
  v5->pNext = pNext;
  this->SegmentList.Root.pNext->pPrev = v5;
  this->SegmentList.Root.pNext = v5;
  Scaleform::HeapPT::AllocBitSet1::InitSegment(&this->Allocator, v5);
  this->Footprint += v5->SelfSize;
  return v5;
}

void __fastcall Scaleform::HeapPT::Bookkeeper::freeSegment(
        Scaleform::HeapPT::Bookkeeper *this,
        Scaleform::Heap::HeapSegment *seg)
{
  Scaleform::HeapPT::AllocBitSet2::ReleaseSegment((Scaleform::HeapPT::AllocBitSet2 *)&this->Allocator, seg);
  seg->pPrev->pNext = seg->pNext;
  seg->pNext->Scaleform::ListNode<Scaleform::Heap::HeapSegment>::$E0E5373A1D0ABB3F4DF327044417E483::pPrev = seg->pPrev;
  Scaleform::HeapPT::PageTable::UnmapRange(Scaleform::HeapPT::GlobalPageTable, seg, seg->SelfSize);
  this->Footprint -= seg->SelfSize;
  this->pSysAlloc->Free(this->pSysAlloc, seg, seg->SelfSize, 4096ui64);
}

