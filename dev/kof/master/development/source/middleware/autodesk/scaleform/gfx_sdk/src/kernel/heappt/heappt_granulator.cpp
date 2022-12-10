#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_heaptypes.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_granulator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_alloclite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

Scaleform::HeapPT::Granulator::Granulator(Scaleform::SysAllocPaged * sysAlloc, unsigned long long minSize, unsigned long long granularity, unsigned long long hdrPageSize); // 0x140437270
bool Scaleform::HeapPT::Granulator::allocSegment(unsigned long long size, unsigned long long alignSize); // 0x140437860
bool Scaleform::HeapPT::Granulator::freeSegment(Scaleform::HeapPT::TreeSeg * seg); // 0x140437AA0
void * Scaleform::HeapPT::Granulator::Alloc(unsigned long long size, unsigned long long alignSize); // 0x140437390
bool Scaleform::HeapPT::Granulator::Free(void * ptr, unsigned long long size, unsigned long long alignSize); // 0x140437510
bool Scaleform::HeapPT::Granulator::ReallocInPlace(void * oldPtr, unsigned long long oldSize, unsigned long long newSize, unsigned long long alignSize); // 0x140437590
void Scaleform::HeapPT::Granulator::VisitMem(Scaleform::Heap::MemVisitor * visitor, Scaleform::Heap::MemVisitor::Category catSegm, Scaleform::Heap::MemVisitor::Category catFree); // 0x140437800
void Scaleform::HeapPT::Granulator::visitSegments(const Scaleform::HeapPT::TreeSeg * node, Scaleform::Heap::SegVisitor * visitor, unsigned long cat); // 0x140437D00
void Scaleform::HeapPT::Granulator::VisitSegments(Scaleform::Heap::SegVisitor * visitor, unsigned long catSeg, unsigned long catUnused); // 0x140437810void __fastcall Scaleform::HeapPT::Granulator::Granulator(
        Scaleform::HeapPT::Granulator *this,
        Scaleform::SysAllocPaged *sysAlloc,
        unsigned __int64 minSize,
        unsigned __int64 granularity,
        unsigned __int64 hdrPageSize)
{
  Scaleform::SysAllocPaged *pSysAlloc; // rcx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-40h]
  unsigned __int64 v13; // [rsp+30h] [rbp-38h]
  __int64 v14; // [rsp+38h] [rbp-30h]
  __int64 v15; // [rsp+40h] [rbp-28h]
  _BOOL8 v16; // [rsp+48h] [rbp-20h]

  this->HdrPageSize = hdrPageSize;
  this->pSysAlloc = sysAlloc;
  this->Granularity = granularity;
  this->HdrCapacity = (hdrPageSize - 64) >> 6;
  this->MinAlign = 0i64;
  this->MaxAlign = 0i64;
  this->HasRealloc = 0;
  this->HdrList.Root.pPrev = (Scaleform::HeapPT::HdrPage *)&this->HdrList;
  this->HdrList.Root.pNext = (Scaleform::HeapPT::HdrPage *)&this->HdrList;
  this->FreeSeg.Root.AddrChild[0] = &this->FreeSeg.Root;
  this->FreeSeg.Root.AddrChild[1] = &this->FreeSeg.Root;
  this->UsedSeg.Root = 0i64;
  this->Footprint = 0i64;
  Scaleform::HeapPT::AllocLite::AllocLite(&this->Allocator, minSize);
  pSysAlloc = this->pSysAlloc;
  v11 = 0i64;
  v12 = 0i64;
  v13 = 0i64;
  v14 = 0i64;
  v15 = 0i64;
  v16 = 0i64;
  pSysAlloc->GetInfo(pSysAlloc, (Scaleform::SysAllocPaged::Info *)&v11);
  v7 = v13;
  v8 = v12;
  if ( v13 < 0x1000 )
    v7 = 4096i64;
  v9 = v11;
  if ( !v11 )
    v9 = 1i64;
  this->MinAlign = v9;
  if ( !v8 )
    v8 = 0x8000000000000000ui64;
  v10 = this->Granularity - 1;
  this->MaxAlign = v8;
  this->HasRealloc = v16;
  this->Granularity = v7 * ((v7 + v10) / v7);
}

Scaleform::HeapPT::DualTNode *__fastcall Scaleform::HeapPT::Granulator::Alloc(
        Scaleform::HeapPT::Granulator *this,
        unsigned __int64 size,
        unsigned __int64 alignSize)
{
  Scaleform::HeapPT::DualTNode *result; // rax
  Scaleform::HeapPT::TreeSeg *allocSeg; // [rsp+30h] [rbp+8h] BYREF

  result = Scaleform::HeapPT::AllocLite::Alloc(&this->Allocator, size, alignSize, &allocSeg);
  if ( result )
    goto LABEL_7;
  if ( !Scaleform::HeapPT::Granulator::allocSegment(this, size, alignSize) )
    return 0i64;
  result = Scaleform::HeapPT::AllocLite::Alloc(&this->Allocator, size, alignSize, &allocSeg);
  if ( result )
    goto LABEL_7;
  if ( !Scaleform::HeapPT::Granulator::allocSegment(this, size, alignSize) )
    return 0i64;
  result = Scaleform::HeapPT::AllocLite::Alloc(&this->Allocator, size, alignSize, &allocSeg);
  if ( result )
LABEL_7:
    ++allocSeg->UseCount;
  return result;
}

Scaleform::HeapPT::TreeSeg *__fastcall Scaleform::RadixTree<Scaleform::HeapPT::TreeSeg,Scaleform::HeapPT::Granulator::SegTreeAccessor>::FindLeEq(
        Scaleform::RadixTree<Scaleform::HeapPT::TreeSeg,Scaleform::HeapPT::Granulator::SegTreeAccessor> *this,
        unsigned __int64 key)
{
  Scaleform::HeapPT::TreeSeg *Root; // r8
  Scaleform::HeapPT::TreeSeg *v3; // rbx
  unsigned __int64 v4; // r9
  Scaleform::HeapPT::TreeSeg *v6; // rax
  unsigned __int64 i; // r10
  unsigned __int64 v8; // rdx
  Scaleform::HeapPT::TreeSeg *v9; // rdx
  __int64 v11; // rcx

  Root = this->Root;
  v3 = 0i64;
  v4 = -1i64;
  if ( this->Root )
  {
    v6 = 0i64;
    for ( i = key; ; i *= 2i64 )
    {
      v8 = key - (unsigned __int64)Root->Buffer;
      if ( Root->Buffer <= (unsigned __int8 *)key && v8 < v4 )
      {
        v3 = Root;
        v4 = key - (unsigned __int64)Root->Buffer;
        if ( !v8 )
          return Root;
      }
      v9 = Root->AddrChild[0];
      Root = Root->AddrChild[i >> 63];
      if ( v9 && v9 != Root )
        v6 = v9;
      if ( !Root )
        break;
    }
    for ( ; v6; v6 = *(Scaleform::HeapPT::TreeSeg **)((char *)&v6->AddrParent + v11) )
    {
      if ( v6->Buffer <= (unsigned __int8 *)key && key - (unsigned __int64)v6->Buffer < v4 )
      {
        v4 = key - (unsigned __int64)v6->Buffer;
        v3 = v6;
      }
      v11 = 8i64;
      if ( v6->AddrChild[1] )
        v11 = 16i64;
    }
  }
  return v3;
}

bool __fastcall Scaleform::HeapPT::Granulator::Free(
        Scaleform::HeapPT::Granulator *this,
        void *ptr,
        unsigned __int64 size,
        unsigned __int64 alignSize)
{
  Scaleform::HeapPT::TreeSeg *LeEq; // rbp

  LeEq = Scaleform::RadixTree<Scaleform::HeapPT::TreeSeg,Scaleform::HeapPT::Granulator::SegTreeAccessor>::FindLeEq(
           &this->UsedSeg,
           (unsigned __int64)ptr);
  Scaleform::HeapPT::AllocLite::Free(&this->Allocator, LeEq, ptr, size, alignSize);
  return LeEq->UseCount-- != 1 || Scaleform::HeapPT::Granulator::freeSegment(this, LeEq);
}

bool __fastcall Scaleform::HeapPT::Granulator::ReallocInPlace(
        Scaleform::HeapPT::Granulator *this,
        void *oldPtr,
        unsigned __int64 oldSize,
        unsigned __int64 newSize,
        unsigned __int64 alignSize)
{
  unsigned __int64 MinSize; // r13
  Scaleform::HeapPT::TreeSeg *LeEq; // rbp
  int v11; // eax
  int v12; // er15
  bool result; // al
  __int64 v14; // r9
  unsigned __int8 *Buffer; // rcx
  unsigned __int64 HdrPageSize; // rax
  __int64 HeadBytes; // r10
  unsigned __int64 v18; // rdx
  unsigned __int8 *v19; // r14
  unsigned __int64 v20; // rax
  unsigned __int64 Granularity; // r11
  __int64 v22; // r8
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rbx

  MinSize = alignSize;
  if ( alignSize < this->Allocator.MinSize )
    MinSize = this->Allocator.MinSize;
  LeEq = Scaleform::RadixTree<Scaleform::HeapPT::TreeSeg,Scaleform::HeapPT::Granulator::SegTreeAccessor>::FindLeEq(
           &this->UsedSeg,
           (unsigned __int64)oldPtr);
  v11 = Scaleform::HeapPT::AllocLite::ReallocInPlace(&this->Allocator, LeEq, oldPtr, oldSize, newSize, MinSize);
  v12 = v11;
  if ( !this->HasRealloc )
    return v11 < 2;
  if ( !v11 )
    return 1;
  v14 = 0i64;
  Buffer = LeEq->Buffer;
  HdrPageSize = 0i64;
  HeadBytes = LeEq->HeadBytes;
  v18 = (unsigned __int64)LeEq->Headers + this->HdrPageSize;
  if ( (unsigned __int8 *)v18 == Buffer )
    HdrPageSize = this->HdrPageSize;
  v19 = &Buffer[-HeadBytes - HdrPageSize];
  v20 = 0i64;
  if ( (unsigned __int8 *)v18 == Buffer )
    v20 = this->HdrPageSize;
  if ( (_DWORD)HeadBytes )
    v14 = this->Allocator.MinSize - HeadBytes;
  Granularity = this->Granularity;
  v22 = ~(MinSize - 1);
  v23 = v14 + v20 + HeadBytes + LeEq->Size;
  v24 = Granularity * (((v22 & ((_BYTE *)oldPtr - v19 + oldSize + MinSize - 1)) + Granularity - 1) / Granularity);
  v25 = Granularity * (((v22 & ((_BYTE *)oldPtr - v19 + newSize + MinSize - 1)) + Granularity - 1) / Granularity);
  if ( v12 == 1 )
  {
    if ( v25 < v24 )
    {
      Scaleform::HeapPT::AllocLite::TrimAt(&this->Allocator, LeEq, &v19[v25]);
      if ( this->pSysAlloc->ReallocInPlace(this->pSysAlloc, v19, v23, v25, 1i64 << LeEq->AlignShift) )
      {
        result = 1;
        this->Footprint += v25 - v23;
        return result;
      }
      Scaleform::HeapPT::AllocLite::Extend(&this->Allocator, LeEq, v23 - v25);
    }
    return 1;
  }
  if ( v12 != 3 )
    return 0;
  for ( ; v25 <= v24; v25 += Granularity )
    ;
  if ( !this->pSysAlloc->ReallocInPlace(this->pSysAlloc, v19, v23, v25, 1i64 << LeEq->AlignShift) )
    return 0;
  v26 = v25 - v23;
  this->Footprint += v26;
  Scaleform::HeapPT::AllocLite::Extend(&this->Allocator, LeEq, v26);
  Scaleform::HeapPT::AllocLite::ReallocInPlace(&this->Allocator, LeEq, oldPtr, oldSize, newSize, MinSize);
  return 1;
}

void __fastcall Scaleform::RadixTree<Scaleform::HeapMH::NodeMH,Scaleform::HeapMH::TreeNodeAccessor>::Remove(
        Scaleform::RadixTree<Scaleform::HeapPT::TreeSeg,Scaleform::HeapPT::Granulator::SegTreeAccessor> *this,
        Scaleform::HeapPT::TreeSeg *node)
{
  Scaleform::HeapPT::TreeSeg *v2; // r8
  Scaleform::HeapPT::TreeSeg **v3; // r9
  Scaleform::HeapPT::TreeSeg *v5; // rcx
  Scaleform::HeapPT::TreeSeg **AddrChild; // rax
  Scaleform::HeapPT::TreeSeg *AddrParent; // rcx
  __int64 v8; // rax
  Scaleform::HeapPT::TreeSeg *v9; // rax
  Scaleform::HeapPT::TreeSeg *v10; // rax

  v2 = node->AddrChild[1];
  v3 = &node->AddrChild[1];
  if ( v2 || (v2 = node->AddrChild[0], v3 = node->AddrChild, v2) )
  {
    while ( 1 )
    {
      v5 = v2->AddrChild[1];
      AddrChild = &v2->AddrChild[1];
      if ( !v5 )
      {
        v5 = v2->AddrChild[0];
        AddrChild = v2->AddrChild;
        if ( !v5 )
          break;
      }
      v3 = AddrChild;
      v2 = v5;
    }
    *v3 = 0i64;
  }
  AddrParent = node->AddrParent;
  if ( node->AddrParent )
  {
    if ( node == this->Root )
    {
      this->Root = v2;
    }
    else
    {
      v8 = 8i64;
      if ( AddrParent->AddrChild[0] != node )
        v8 = 16i64;
      *(Scaleform::HeapPT::TreeSeg **)((char *)&AddrParent->AddrParent + v8) = v2;
    }
    if ( v2 )
    {
      v2->AddrParent = AddrParent;
      v9 = node->AddrChild[0];
      if ( v9 )
      {
        v2->AddrChild[0] = v9;
        v9->AddrParent = v2;
      }
      v10 = node->AddrChild[1];
      if ( v10 )
      {
        v2->AddrChild[1] = v10;
        v10->AddrParent = v2;
      }
    }
  }
  node->AddrChild[1] = 0i64;
  node->AddrChild[0] = 0i64;
  node->AddrParent = 0i64;
}

void __fastcall Scaleform::HeapPT::Granulator::VisitMem(
        Scaleform::HeapPT::Granulator *this,
        Scaleform::Heap::MemVisitor *visitor,
        Scaleform::Heap::MemVisitor::Category catSegm,
        Scaleform::Heap::MemVisitor::Category catFree)
{
  Scaleform::HeapPT::AllocLite::VisitMem(&this->Allocator, visitor, catFree);
}

void __fastcall Scaleform::HeapPT::Granulator::VisitSegments(
        Scaleform::HeapPT::Granulator *this,
        Scaleform::Heap::SegVisitor *visitor,
        unsigned int catSeg,
        unsigned int catUnused)
{
  Scaleform::HeapPT::Granulator::visitSegments(this, this->UsedSeg.Root, visitor, catSeg);
  Scaleform::HeapPT::AllocLite::VisitUnused(&this->Allocator, visitor, catUnused);
}

bool __fastcall Scaleform::HeapPT::Granulator::allocSegment(
        Scaleform::HeapPT::Granulator *this,
        unsigned __int64 size,
        unsigned __int64 alignSize)
{
  Scaleform::List2<Scaleform::HeapPT::TreeSeg,Scaleform::HeapPT::Granulator::SegListAccessor> *p_FreeSeg; // rbx
  unsigned __int64 MinAlign; // r10
  unsigned __int64 HdrPageSize; // rbp
  unsigned __int64 MinSize; // rdi
  unsigned __int64 v8; // r11
  unsigned __int64 MaxAlign; // rax
  unsigned __int64 Granularity; // r8
  __int64 v11; // r15
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r13
  void *v16; // rax
  int v17; // er12
  Scaleform::HeapPT::HdrPage *v18; // rdi
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r8
  $97B300A1F1AC15037B3EA72CB2861466 *v21; // rax
  Scaleform::HeapPT::TreeSeg *v22; // rdx
  Scaleform::HeapPT::TreeSeg *v23; // rbx
  unsigned __int8 *v24; // rbp
  Scaleform::RadixTree<Scaleform::HeapPT::TreeSeg,Scaleform::HeapPT::Granulator::SegTreeAccessor> *p_UsedSeg; // rax
  Scaleform::HeapPT::TreeSeg *Root; // rcx
  unsigned __int8 *v27; // rdx
  unsigned __int8 *v28; // rax
  char *v29; // r8
  __int64 v30; // rax
  unsigned __int64 val; // [rsp+50h] [rbp+8h]

  p_FreeSeg = &this->FreeSeg;
  MinAlign = alignSize;
  if ( alignSize < this->MinAlign )
    MinAlign = this->MinAlign;
  if ( (Scaleform::List2<Scaleform::HeapPT::TreeSeg,Scaleform::HeapPT::Granulator::SegListAccessor> *)this->FreeSeg.Root.AddrChild[1] == &this->FreeSeg )
    HdrPageSize = this->HdrPageSize;
  else
    HdrPageSize = 0i64;
  MinSize = this->Allocator.MinSize;
  v8 = MinAlign;
  MaxAlign = this->MaxAlign;
  Granularity = this->Granularity;
  if ( MinAlign < MinSize )
    v8 = this->Allocator.MinSize;
  v11 = ~(MinSize - 1);
  if ( v8 > MaxAlign )
    v8 = this->MaxAlign;
  v12 = 0i64;
  val = v8;
  if ( MinAlign > MaxAlign )
    v12 = MinAlign;
  v13 = 0i64;
  if ( v8 < MinSize )
    v13 = MinSize;
  v14 = 0i64;
  if ( v12 > v13 )
    v14 = v12;
  v15 = v11 & (v13
             + Granularity
             * (((~(MinAlign - 1) & (size + HdrPageSize + v14 + MinAlign - 1)) + Granularity - 1)
              / Granularity)
             + MinSize
             - 1);
  v16 = this->pSysAlloc->Alloc(this->pSysAlloc, v15, v8);
  v17 = (int)v16;
  if ( v16 )
  {
    v18 = (Scaleform::HeapPT::HdrPage *)(v11 & ((unsigned __int64)v16 + MinSize - 1));
    v19 = v11 & ((unsigned __int64)v16 + v15);
    if ( HdrPageSize )
    {
      memset(v18, 0, HdrPageSize);
      v18->UseCount = 0i64;
      v20 = 0i64;
      if ( this->HdrCapacity )
      {
        v21 = &v18[1].8;
        do
        {
          v21[2].pNext = v18;
          v22 = (Scaleform::HeapPT::TreeSeg *)&v21[-1];
          ++v20;
          v21->pNext = (Scaleform::HeapPT::HdrPage *)p_FreeSeg->Root.AddrChild[0];
          v21[1].pNext = (Scaleform::HeapPT::HdrPage *)p_FreeSeg;
          v21 += 8;
          p_FreeSeg->Root.AddrChild[0]->AddrChild[1] = v22;
          p_FreeSeg->Root.AddrChild[0] = v22;
        }
        while ( v20 < this->HdrCapacity );
      }
      v18->pPrev = this->HdrList.Root.pPrev;
      v18->pNext = (Scaleform::HeapPT::HdrPage *)&this->HdrList;
      this->HdrList.Root.pPrev->pNext = v18;
      this->HdrList.Root.pPrev = v18;
    }
    v23 = this->FreeSeg.Root.AddrChild[1];
    v24 = (unsigned __int8 *)v18 + HdrPageSize;
    v23->AddrChild[0]->AddrChild[1] = v23->AddrChild[1];
    v23->AddrChild[1]->AddrChild[0] = v23->AddrChild[0];
    ++v23->Headers->UseCount;
    v23->Buffer = v24;
    v23->Size = v19 - (_QWORD)v24;
    v23->UseCount = 0i64;
    v23->AlignShift = (unsigned __int8)Scaleform::Alg::UpperBit(val);
    p_UsedSeg = &this->UsedSeg;
    v23->HeadBytes = (_DWORD)v18 - v17;
    v23->AddrChild[1] = 0i64;
    v23->AddrChild[0] = 0i64;
    v23->AddrParent = 0i64;
    Root = this->UsedSeg.Root;
    if ( Root )
    {
      v27 = v24;
      if ( Root->Buffer != v24 )
      {
        while ( 1 )
        {
          v28 = v27;
          v27 = (unsigned __int8 *)(2i64 * (_QWORD)v27);
          v29 = (char *)Root + 8 * ((unsigned __int64)v28 >> 63);
          v30 = *((_QWORD *)v29 + 1);
          if ( !v30 )
            break;
          Root = (Scaleform::HeapPT::TreeSeg *)*((_QWORD *)v29 + 1);
          if ( *(unsigned __int8 **)(v30 + 32) == v24 )
            goto LABEL_29;
        }
        *((_QWORD *)v29 + 1) = v23;
        v23->AddrParent = Root;
      }
    }
    else
    {
      p_UsedSeg->Root = v23;
      v23->AddrParent = (Scaleform::HeapPT::TreeSeg *)p_UsedSeg;
    }
LABEL_29:
    Scaleform::HeapPT::AllocLite::InitSegment(&this->Allocator, v23);
    this->Footprint += v15;
    LOBYTE(v16) = 1;
  }
  return (char)v16;
}

__int64 __fastcall Scaleform::HeapPT::Granulator::freeSegment(
        Scaleform::HeapPT::Granulator *this,
        Scaleform::HeapPT::TreeSeg *seg)
{
  Scaleform::HeapPT::HdrPage *Headers; // r14
  unsigned __int64 v3; // rbp
  bool v6; // r9
  unsigned __int64 HdrPageSize; // r8
  __int64 HeadBytes; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r9
  unsigned __int8 *Buffer; // r11
  Scaleform::HeapPT::TreeSeg *Root; // rbx
  __int64 i; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r8
  unsigned __int64 *p_UseCount; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // rdi
  unsigned __int8 *v24; // r11

  Headers = seg->Headers;
  v3 = 0i64;
  v6 = 1;
  if ( (char *)Headers + this->HdrPageSize != (char *)seg->Buffer )
  {
    Scaleform::RadixTree<Scaleform::HeapMH::NodeMH,Scaleform::HeapMH::TreeNodeAccessor>::Remove(&this->UsedSeg, seg);
    seg->AddrChild[1] = this->FreeSeg.Root.AddrChild[1];
    HdrPageSize = 0i64;
    seg->AddrChild[0] = &this->FreeSeg.Root;
    this->FreeSeg.Root.AddrChild[1]->AddrChild[0] = seg;
    this->FreeSeg.Root.AddrChild[1] = seg;
    --Headers->UseCount;
    HeadBytes = seg->HeadBytes;
    if ( (char *)seg->Headers + this->HdrPageSize == (char *)seg->Buffer )
      HdrPageSize = this->HdrPageSize;
    if ( (_DWORD)HeadBytes )
      v9 = this->Allocator.MinSize - HeadBytes;
    else
      v9 = 0i64;
    v10 = HdrPageSize + v9 + HeadBytes + seg->Size;
    Scaleform::HeapPT::AllocLite::ReleaseSegment(&this->Allocator, seg);
    this->Footprint -= v10;
    v11 = 0i64;
    Buffer = seg->Buffer;
    if ( (unsigned __int8 *)seg->Headers + this->HdrPageSize == Buffer )
      v11 = this->HdrPageSize;
    v6 = this->pSysAlloc->Free(this->pSysAlloc, &Buffer[-seg->HeadBytes - v11], v10, 1i64 << LOBYTE(seg->AlignShift));
  }
  if ( Headers->UseCount != 1 )
    return v6;
  Root = this->UsedSeg.Root;
  for ( i = (__int64)Headers + this->HdrPageSize; Root; Root = Root->AddrChild[v15 >> 63] )
  {
    if ( Root->Buffer == (unsigned __int8 *)Headers + this->HdrPageSize )
      break;
    v15 = i;
    i *= 2i64;
  }
  if ( Root->UseCount )
    return v6;
  Scaleform::RadixTree<Scaleform::HeapMH::NodeMH,Scaleform::HeapMH::TreeNodeAccessor>::Remove(&this->UsedSeg, Root);
  Root->AddrChild[1] = this->FreeSeg.Root.AddrChild[1];
  v16 = 0i64;
  Root->AddrChild[0] = &this->FreeSeg.Root;
  this->FreeSeg.Root.AddrChild[1]->AddrChild[0] = Root;
  this->FreeSeg.Root.AddrChild[1] = Root;
  if ( this->HdrCapacity )
  {
    p_UseCount = &Headers[1].UseCount;
    do
    {
      v18 = *(p_UseCount - 1);
      ++v16;
      v19 = *p_UseCount;
      p_UseCount += 8;
      *(_QWORD *)(v18 + 16) = v19;
      *(_QWORD *)(*(p_UseCount - 8) + 8) = *(p_UseCount - 9);
    }
    while ( v16 < this->HdrCapacity );
  }
  v20 = 0i64;
  Headers->pPrev->pNext = Headers->pNext;
  Headers->pNext->Scaleform::ListNode<Scaleform::HeapPT::HdrPage>::$97B300A1F1AC15037B3EA72CB2861466::pPrev = Headers->pPrev;
  v21 = Root->HeadBytes;
  if ( (char *)Root->Headers + this->HdrPageSize == (char *)Root->Buffer )
    v20 = this->HdrPageSize;
  if ( (_DWORD)v21 )
    v22 = this->Allocator.MinSize - v21;
  else
    v22 = 0i64;
  v23 = v20 + v22 + v21 + Root->Size;
  Scaleform::HeapPT::AllocLite::ReleaseSegment(&this->Allocator, Root);
  this->Footprint -= v23;
  v24 = Root->Buffer;
  if ( (unsigned __int8 *)Root->Headers + this->HdrPageSize == v24 )
    v3 = this->HdrPageSize;
  return ((__int64 (__fastcall *)(Scaleform::SysAllocPaged *, unsigned __int8 *, unsigned __int64, __int64))this->pSysAlloc->Free)(
           this->pSysAlloc,
           &v24[-Root->HeadBytes - v3],
           v23,
           1i64 << LOBYTE(Root->AlignShift));
}

void __fastcall Scaleform::HeapPT::Granulator::visitSegments(
        Scaleform::HeapPT::Granulator *this,
        const Scaleform::HeapPT::TreeSeg *node,
        Scaleform::Heap::SegVisitor *visitor,
        unsigned int cat)
{
  const Scaleform::HeapPT::TreeSeg *v6; // rbx
  unsigned __int8 *Buffer; // r9
  unsigned __int64 HdrPageSize; // r8

  if ( node )
  {
    v6 = node;
    do
    {
      Scaleform::HeapPT::Granulator::visitSegments(this, v6->AddrChild[0], visitor, cat);
      Buffer = v6->Buffer;
      HdrPageSize = 0i64;
      if ( (unsigned __int8 *)v6->Headers + this->HdrPageSize == Buffer )
        HdrPageSize = this->HdrPageSize;
      visitor->Visit(
        visitor,
        cat,
        0i64,
        (unsigned __int64)&Buffer[-HdrPageSize + 4095] & 0xFFFFFFFFFFFFF000ui64,
        (HdrPageSize + v6->Size) & 0xFFFFFFFFFFFFF000ui64);
      v6 = v6->AddrChild[1];
    }
    while ( v6 );
  }
}

