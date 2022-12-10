#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_heaptypes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_alloclite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"

Scaleform::HeapPT::AllocLite::AllocLite(unsigned long long minSize); // 0x1403C0970
void Scaleform::HeapPT::AllocLite::pushNode(Scaleform::HeapPT::DualTNode * node, Scaleform::HeapPT::TreeSeg * seg, unsigned long long blocks); // 0x1403C1600
void Scaleform::HeapPT::AllocLite::pullNode(Scaleform::HeapPT::DualTNode * node); // 0x1403C15C0
Scaleform::HeapPT::DualTNode * Scaleform::HeapPT::AllocLite::pullBest(unsigned long long blocks, unsigned long long alignMask); // 0x1403C13F0
void Scaleform::HeapPT::AllocLite::splitNode(Scaleform::HeapPT::DualTNode * node, unsigned char * start, unsigned long long size); // 0x1403C16A0
void Scaleform::HeapPT::AllocLite::InitSegment(Scaleform::HeapPT::TreeSeg * seg); // 0x1403C0E90
void Scaleform::HeapPT::AllocLite::ReleaseSegment(Scaleform::HeapPT::TreeSeg * seg); // 0x1403C1080
void * Scaleform::HeapPT::AllocLite::Alloc(unsigned long long size, unsigned long long alignSize, Scaleform::HeapPT::TreeSeg * * allocSeg); // 0x1403C09C0
void Scaleform::HeapPT::AllocLite::Free(Scaleform::HeapPT::TreeSeg * seg, void * ptr, unsigned long long size, unsigned long long alignSize); // 0x1403C0D60
Scaleform::HeapPT::AllocLite::ReallocResult Scaleform::HeapPT::AllocLite::ReallocInPlace(Scaleform::HeapPT::TreeSeg * seg, void * ptr, unsigned long long oldSize, unsigned long long newSize, unsigned long long alignSize); // 0x1403C0F30
void Scaleform::HeapPT::AllocLite::Extend(Scaleform::HeapPT::TreeSeg * seg, unsigned long long incSize); // 0x1403C0A80
bool Scaleform::HeapPT::AllocLite::TrimAt(Scaleform::HeapPT::TreeSeg * seg, unsigned char * ptrAt); // 0x1403C12C0
void Scaleform::HeapPT::AllocLite::visitTree(const Scaleform::HeapPT::DualTNode * root, Scaleform::Heap::HeapSegment * seg, Scaleform::Heap::MemVisitor * visitor, Scaleform::Heap::MemVisitor::Category cat); // 0x1403C1730
void Scaleform::HeapPT::AllocLite::VisitMem(Scaleform::Heap::MemVisitor * visitor, Scaleform::Heap::MemVisitor::Category cat); // 0x1403C1390
void Scaleform::HeapPT::AllocLite::visitUnusedInTree(const Scaleform::HeapPT::DualTNode * root, Scaleform::Heap::SegVisitor * visitor, unsigned long cat); // 0x1403C17F0
void Scaleform::HeapPT::AllocLite::VisitUnused(Scaleform::Heap::SegVisitor * visitor, unsigned long cat); // 0x1403C13E0void __fastcall Scaleform::HeapPT::AllocLite::AllocLite(Scaleform::HeapPT::AllocLite *this, unsigned __int64 minSize)
{
  unsigned __int8 v3; // al
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax

  v3 = Scaleform::Alg::UpperBit(minSize);
  v4 = v3;
  v5 = 1i64 << v3;
  this->MinSize = v5;
  this->MinMask = v5 - 1;
  this->MinShift = v4;
  this->SizeTree.Tree.Root = 0i64;
  this->AddrTree.Root = 0i64;
  this->FreeBlocks = 0i64;
}

Scaleform::HeapPT::DualTNode *__fastcall Scaleform::HeapPT::AllocLite::Alloc(
        Scaleform::HeapPT::AllocLite *this,
        unsigned __int64 size,
        unsigned __int64 alignSize,
        Scaleform::HeapPT::TreeSeg **allocSeg)
{
  unsigned __int64 MinSize; // rax
  unsigned __int64 MinShift; // rcx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbp
  Scaleform::HeapPT::DualTNode *result; // rax
  unsigned __int8 *v11; // rbx
  unsigned __int64 v12; // rcx

  MinSize = this->MinSize;
  MinShift = this->MinShift;
  if ( size < MinSize )
    size = MinSize;
  if ( alignSize < MinSize )
    alignSize = MinSize;
  v8 = alignSize - 1;
  v9 = ~(alignSize - 1) & (size + alignSize - 1);
  result = Scaleform::HeapPT::AllocLite::pullBest(this, v9 >> MinShift, alignSize - 1);
  if ( result )
  {
    v11 = (unsigned __int8 *)(~v8 & ((unsigned __int64)result + v8));
    v12 = v11 - (unsigned __int8 *)result;
    if ( v11 != (unsigned __int8 *)result )
    {
      do
      {
        if ( v12 >= 0x80 )
          break;
        v11 += v8 + 1;
        v12 += v8 + 1;
      }
      while ( v12 );
    }
    *allocSeg = result->ParentSeg;
    Scaleform::HeapPT::AllocLite::splitNode(this, result, v11, v9);
    return (Scaleform::HeapPT::DualTNode *)v11;
  }
  return result;
}

void __fastcall Scaleform::HeapPT::AllocLite::Extend(
        Scaleform::HeapPT::AllocLite *this,
        Scaleform::HeapPT::TreeSeg *seg,
        unsigned __int64 incSize)
{
  unsigned __int8 *v4; // rbp
  const Scaleform::HeapPT::DualTNode *LeEq; // rax
  Scaleform::HeapPT::DualTNode *v8; // rsi
  unsigned __int64 Size; // rax
  Scaleform::HeapPT::DualTNode *v10; // rdx
  unsigned __int64 v11; // r9

  v4 = &seg->Buffer[seg->Size];
  LeEq = Scaleform::RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::AddrAccessor>::FindLeEq(
           &this->AddrTree,
           (unsigned __int64)(v4 - 1));
  v8 = (Scaleform::HeapPT::DualTNode *)LeEq;
  if ( LeEq
    && LeEq->ParentSeg == seg
    && (Size = LeEq->Size, (unsigned __int8 *)((char *)v8 + (Size << this->MinShift)) == v4) )
  {
    this->FreeBlocks -= Size;
    Scaleform::RadixTreeMulti<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::SizeAccessor>::Remove(
      &this->SizeTree,
      v8);
    Scaleform::RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::AddrAccessor>::Remove(
      (Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::SizeAccessor> *)&this->AddrTree,
      (Scaleform::AllocAddrNode *)v8);
    v10 = v8;
    v11 = v8->Size + (incSize >> this->MinShift);
  }
  else
  {
    v11 = incSize >> this->MinShift;
    v10 = (Scaleform::HeapPT::DualTNode *)v4;
  }
  Scaleform::HeapPT::AllocLite::pushNode(this, v10, seg, v11);
  seg->Size += incSize;
}

Scaleform::HeapPT::DualTNode *__fastcall Scaleform::RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::AddrAccessor>::FindGrEq(
        Scaleform::RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::AddrAccessor> *this,
        unsigned __int64 key)
{
  Scaleform::HeapPT::DualTNode *Root; // r8
  Scaleform::HeapPT::DualTNode *v3; // rbx
  unsigned __int64 v4; // r9
  Scaleform::HeapPT::DualTNode *v6; // rax
  unsigned __int64 i; // r10
  char *v8; // rcx
  Scaleform::HeapPT::DualTNode *v9; // rdx
  __int64 v11; // rcx

  Root = this->Root;
  v3 = 0i64;
  v4 = -1i64;
  if ( this->Root )
  {
    v6 = 0i64;
    for ( i = key; ; i *= 2i64 )
    {
      v8 = (char *)Root - key;
      if ( (unsigned __int64)Root >= key && (unsigned __int64)v8 < v4 )
      {
        v3 = Root;
        v4 = (unsigned __int64)Root - key;
        if ( !v8 )
          return Root;
      }
      v9 = Root->AddrChild[1];
      Root = Root->AddrChild[i >> 63];
      if ( v9 && v9 != Root )
        v6 = v9;
      if ( !Root )
        break;
    }
    for ( ; v6; v6 = *(Scaleform::HeapPT::DualTNode **)((char *)&v6->pPrev + v11) )
    {
      if ( (unsigned __int64)v6 >= key && (unsigned __int64)v6 - key < v4 )
      {
        v4 = (unsigned __int64)v6 - key;
        v3 = v6;
      }
      v11 = 48i64;
      if ( !v6->AddrChild[0] )
        v11 = 56i64;
    }
  }
  return v3;
}

Scaleform::HeapPT::DualTNode *__fastcall Scaleform::RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::SizeAccessor>::FindGrEq(
        Scaleform::RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::SizeAccessor> *this,
        unsigned __int64 key)
{
  Scaleform::HeapPT::DualTNode *Root; // r8
  Scaleform::HeapPT::DualTNode *v3; // rbx
  unsigned __int64 v4; // r9
  Scaleform::HeapPT::DualTNode *v6; // rax
  unsigned __int64 i; // r10
  unsigned __int64 v8; // rdx
  Scaleform::HeapPT::DualTNode *v9; // rdx
  __int64 v11; // rcx

  Root = this->Root;
  v3 = 0i64;
  v4 = -1i64;
  if ( this->Root )
  {
    v6 = 0i64;
    for ( i = key; ; i *= 2i64 )
    {
      v8 = Root->Size - key;
      if ( Root->Size >= key && v8 < v4 )
      {
        v3 = Root;
        v4 = Root->Size - key;
        if ( !v8 )
          return Root;
      }
      v9 = Root->Child[1];
      Root = Root->Child[i >> 63];
      if ( v9 && v9 != Root )
        v6 = v9;
      if ( !Root )
        break;
    }
    for ( ; v6; v6 = *(Scaleform::HeapPT::DualTNode **)((char *)&v6->pPrev + v11) )
    {
      if ( v6->Size >= key && v6->Size - key < v4 )
      {
        v4 = v6->Size - key;
        v3 = v6;
      }
      v11 = 24i64;
      if ( !v6->Child[0] )
        v11 = 32i64;
    }
  }
  return v3;
}

Scaleform::HeapPT::DualTNode *__fastcall Scaleform::RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::AddrAccessor>::FindLeEq(
        Scaleform::RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::AddrAccessor> *this,
        unsigned __int64 key)
{
  Scaleform::HeapPT::DualTNode *Root; // r8
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r9
  unsigned __int64 v6; // rax
  unsigned __int64 i; // r10
  unsigned __int64 v8; // rcx
  Scaleform::HeapPT::DualTNode *v9; // rdx
  __int64 v11; // rcx

  Root = this->Root;
  v3 = 0i64;
  v4 = -1i64;
  if ( this->Root )
  {
    v6 = 0i64;
    for ( i = key; ; i *= 2i64 )
    {
      v8 = key - (_QWORD)Root;
      if ( (unsigned __int64)Root <= key && v8 < v4 )
      {
        v3 = (unsigned __int64)Root;
        v4 = key - (_QWORD)Root;
        if ( !v8 )
          return Root;
      }
      v9 = Root->AddrChild[0];
      Root = Root->AddrChild[i >> 63];
      if ( v9 && v9 != Root )
        v6 = (unsigned __int64)v9;
      if ( !Root )
        break;
    }
    for ( ; v6; v6 = *(_QWORD *)(v11 + v6) )
    {
      if ( v6 <= key && key - v6 < v4 )
      {
        v4 = key - v6;
        v3 = v6;
      }
      v11 = 48i64;
      if ( *(_QWORD *)(v6 + 56) )
        v11 = 56i64;
    }
  }
  return (Scaleform::HeapPT::DualTNode *)v3;
}

void __fastcall Scaleform::HeapPT::AllocLite::Free(
        Scaleform::HeapPT::AllocLite *this,
        Scaleform::HeapPT::TreeSeg *seg,
        void *ptr,
        unsigned __int64 size,
        unsigned __int64 alignSize)
{
  unsigned __int64 v5; // rax
  unsigned __int64 MinSize; // r8
  unsigned __int64 v10; // rbp
  Scaleform::HeapPT::DualTNode *LeEq; // rdi
  Scaleform::HeapPT::DualTNode *GrEq; // rax
  Scaleform::HeapPT::DualTNode *v13; // rsi
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax

  v5 = alignSize;
  MinSize = this->MinSize;
  if ( size < MinSize )
    size = this->MinSize;
  if ( alignSize < MinSize )
    v5 = this->MinSize;
  v10 = ~(v5 - 1) & (v5 + size - 1);
  LeEq = Scaleform::RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::AddrAccessor>::FindLeEq(
           &this->AddrTree,
           (unsigned __int64)ptr);
  GrEq = Scaleform::RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::AddrAccessor>::FindGrEq(
           &this->AddrTree,
           (unsigned __int64)ptr + v10);
  v13 = GrEq;
  if ( !LeEq || LeEq->ParentSeg != seg || (char *)LeEq + (LeEq->Size << this->MinShift) != ptr )
    LeEq = 0i64;
  if ( !GrEq || GrEq->ParentSeg != seg || GrEq != (Scaleform::HeapPT::DualTNode *)((char *)ptr + v10) )
    v13 = 0i64;
  v14 = v10 >> this->MinShift;
  *((_QWORD *)ptr + 9) = v14;
  *((_QWORD *)ptr + 8) = seg;
  if ( LeEq )
  {
    v15 = LeEq->Size;
    this->FreeBlocks -= v15;
    v14 += v15;
    ptr = LeEq;
    Scaleform::RadixTreeMulti<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::SizeAccessor>::Remove(
      &this->SizeTree,
      LeEq);
    Scaleform::RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::AddrAccessor>::Remove(
      (Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::SizeAccessor> *)&this->AddrTree,
      (Scaleform::AllocAddrNode *)LeEq);
  }
  if ( v13 )
  {
    v16 = v13->Size;
    this->FreeBlocks -= v16;
    v14 += v16;
    Scaleform::RadixTreeMulti<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::SizeAccessor>::Remove(
      &this->SizeTree,
      v13);
    Scaleform::RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::AddrAccessor>::Remove(
      (Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::SizeAccessor> *)&this->AddrTree,
      (Scaleform::AllocAddrNode *)v13);
  }
  Scaleform::HeapPT::AllocLite::pushNode(this, (Scaleform::HeapPT::DualTNode *)ptr, seg, v14);
}

void __fastcall Scaleform::HeapPT::AllocLite::InitSegment(
        Scaleform::HeapPT::AllocLite *this,
        Scaleform::HeapPT::TreeSeg *seg)
{
  Scaleform::HeapPT::AllocLite::pushNode(
    this,
    (Scaleform::HeapPT::DualTNode *)seg->Buffer,
    seg,
    seg->Size >> this->MinShift);
}

void __fastcall Scaleform::RadixTreeMulti<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::SizeAccessor>::Insert(
        Scaleform::RadixTreeMulti<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::SizeAccessor> *this,
        Scaleform::HeapPT::DualTNode *node)
{
  Scaleform::HeapPT::DualTNode *Root; // r8
  unsigned __int64 Size; // r10
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  Scaleform::HeapPT::DualTNode **v6; // r9
  Scaleform::HeapPT::DualTNode *v7; // rax

  node->pPrev = node;
  node->pNext = node;
  node->Child[1] = 0i64;
  node->Child[0] = 0i64;
  node->Parent = 0i64;
  Root = this->Tree.Root;
  if ( this->Tree.Root )
  {
    Size = node->Size;
    v4 = Size;
    if ( Root->Size == Size )
    {
LABEL_6:
      node->pNext = Root->pNext;
      node->pPrev = Root;
      Root->pNext = node;
      node->pNext->Scaleform::ListNode<Scaleform::HeapPT::DualTNode>::$DBAF6AAF10FA0DA22A9E7F3DEBA39DEF::pPrev = node;
    }
    else
    {
      while ( 1 )
      {
        v5 = v4;
        v4 *= 2i64;
        v6 = &Root->pPrev + (v5 >> 63);
        v7 = v6[3];
        if ( !v7 )
          break;
        Root = v6[3];
        if ( v7->Size == Size )
          goto LABEL_6;
      }
      v6[3] = node;
      node->Parent = Root;
    }
  }
  else
  {
    this->Tree.Root = node;
    node->Parent = (Scaleform::HeapPT::DualTNode *)this;
  }
}

__int64 __fastcall Scaleform::HeapPT::AllocLite::ReallocInPlace(
        Scaleform::HeapPT::AllocLite *this,
        Scaleform::HeapPT::TreeSeg *seg,
        void *ptr,
        unsigned __int64 oldSize,
        unsigned __int64 newSize,
        unsigned __int64 alignSize)
{
  unsigned __int64 MinSize; // rcx
  __int64 v10; // r10
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rsi
  unsigned __int8 *v14; // r15
  Scaleform::HeapPT::DualTNode *GrEq; // rax
  Scaleform::HeapPT::DualTNode *v16; // rbx
  unsigned __int8 *v17; // r8
  char *v18; // rbx

  MinSize = alignSize;
  if ( alignSize < this->MinSize )
    MinSize = this->MinSize;
  v10 = ~(MinSize - 1);
  v11 = v10 & (MinSize + oldSize - 1);
  v12 = v10 & (MinSize + newSize - 1);
  if ( v12 == v11 )
    return 0i64;
  if ( v12 <= v11 )
  {
    v18 = (char *)ptr + v12;
    Scaleform::HeapPT::AllocLite::Free(this, seg, (char *)ptr + v12, v11 - v12, MinSize);
    return (char *)ptr + (*((_QWORD *)v18 + 9) << this->MinShift) + v12 == (char *)&seg->Buffer[seg->Size];
  }
  v14 = (unsigned __int8 *)ptr + v11;
  GrEq = Scaleform::RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::AddrAccessor>::FindGrEq(
           &this->AddrTree,
           (unsigned __int64)ptr + v11);
  v16 = GrEq;
  if ( !GrEq || GrEq->ParentSeg != seg || GrEq != (Scaleform::HeapPT::DualTNode *)v14 )
    return (unsigned int)(v14 == &seg->Buffer[seg->Size]) + 2;
  v17 = (unsigned __int8 *)GrEq + (GrEq->Size << this->MinShift);
  if ( (char *)ptr + v12 > (char *)v17 )
  {
    if ( v17 == &seg->Buffer[seg->Size] )
      return 3i64;
    return (unsigned int)(v14 == &seg->Buffer[seg->Size]) + 2;
  }
  Scaleform::HeapPT::AllocLite::pullNode(this, GrEq);
  Scaleform::HeapPT::AllocLite::splitNode(this, v16, (unsigned __int8 *)v16, v12 - v11);
  return 0i64;
}

void __fastcall Scaleform::HeapPT::AllocLite::ReleaseSegment(
        Scaleform::HeapPT::AllocLite *this,
        Scaleform::HeapPT::TreeSeg *seg)
{
  Scaleform::HeapPT::DualTNode *Buffer; // rbx

  Buffer = (Scaleform::HeapPT::DualTNode *)seg->Buffer;
  this->FreeBlocks -= Buffer->Size;
  Scaleform::RadixTreeMulti<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::SizeAccessor>::Remove(
    &this->SizeTree,
    Buffer);
  Scaleform::RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::AddrAccessor>::Remove(
    (Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::SizeAccessor> *)&this->AddrTree,
    (Scaleform::AllocAddrNode *)Buffer);
}

void __fastcall Scaleform::RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::AddrAccessor>::Remove(
        Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::SizeAccessor> *this,
        Scaleform::AllocAddrNode *node)
{
  Scaleform::AllocAddrNode *v2; // r8
  Scaleform::AllocAddrNode **v3; // r9
  Scaleform::AllocAddrNode *v5; // rcx
  Scaleform::AllocAddrNode **SizeChild; // rax
  Scaleform::AllocAddrNode *SizeParent; // rcx
  __int64 v8; // rax
  Scaleform::AllocAddrNode *v9; // rax
  Scaleform::AllocAddrNode *v10; // rax

  v2 = node->SizeChild[1];
  v3 = &node->SizeChild[1];
  if ( v2 || (v2 = node->SizeChild[0], v3 = node->SizeChild, v2) )
  {
    while ( 1 )
    {
      v5 = v2->SizeChild[1];
      SizeChild = &v2->SizeChild[1];
      if ( !v5 )
      {
        v5 = v2->SizeChild[0];
        SizeChild = v2->SizeChild;
        if ( !v5 )
          break;
      }
      v3 = SizeChild;
      v2 = v5;
    }
    *v3 = 0i64;
  }
  SizeParent = node->SizeParent;
  if ( SizeParent )
  {
    if ( node == this->Root )
    {
      this->Root = v2;
    }
    else
    {
      v8 = 48i64;
      if ( SizeParent->SizeChild[0] != node )
        v8 = 56i64;
      *(Scaleform::AllocAddrNode **)((char *)&SizeParent->pPrev + v8) = v2;
    }
    if ( v2 )
    {
      v2->SizeParent = SizeParent;
      v9 = node->SizeChild[0];
      if ( v9 )
      {
        v2->SizeChild[0] = v9;
        v9->SizeParent = v2;
      }
      v10 = node->SizeChild[1];
      if ( v10 )
      {
        v2->SizeChild[1] = v10;
        v10->SizeParent = v2;
      }
    }
  }
  node->SizeChild[1] = 0i64;
  node->SizeChild[0] = 0i64;
  node->SizeParent = 0i64;
}

void __fastcall Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::AddrAccessor>::Remove(
        Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::AddrAccessor> *this,
        Scaleform::AllocAddrNode *node)
{
  Scaleform::AllocAddrNode *v2; // r8
  Scaleform::AllocAddrNode **v3; // r9
  Scaleform::AllocAddrNode *v5; // rcx
  Scaleform::AllocAddrNode **AddrChild; // rax
  Scaleform::AllocAddrNode *AddrParent; // rcx
  __int64 v8; // rax
  Scaleform::AllocAddrNode *v9; // rax
  Scaleform::AllocAddrNode *v10; // rax

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
  if ( AddrParent )
  {
    if ( node == this->Root )
    {
      this->Root = v2;
    }
    else
    {
      v8 = 24i64;
      if ( AddrParent->AddrChild[0] != node )
        v8 = 32i64;
      *(Scaleform::AllocAddrNode **)((char *)&AddrParent->pPrev + v8) = v2;
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

void __fastcall Scaleform::RadixTreeMulti<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::SizeAccessor>::Remove(
        Scaleform::RadixTreeMulti<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::SizeAccessor> *this,
        Scaleform::HeapPT::DualTNode *node)
{
  Scaleform::HeapPT::DualTNode *pPrev; // r8
  Scaleform::HeapPT::DualTNode *pNext; // rax
  Scaleform::HeapPT::DualTNode *Parent; // r9
  __int64 v5; // rax
  Scaleform::HeapPT::DualTNode *v6; // rax
  Scaleform::HeapPT::DualTNode *v7; // rax

  pPrev = node->pPrev;
  if ( node->pPrev == node )
  {
    Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::AddrAccessor>::Remove(
      (Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::AddrAccessor> *)this,
      (Scaleform::AllocAddrNode *)node);
  }
  else
  {
    pNext = node->pNext;
    pNext->pPrev = pPrev;
    pPrev->pNext = pNext;
    Parent = node->Parent;
    if ( Parent )
    {
      if ( node == this->Tree.Root )
      {
        this->Tree.Root = pPrev;
      }
      else
      {
        v5 = 24i64;
        if ( Parent->Child[0] != node )
          v5 = 32i64;
        *(Scaleform::HeapPT::DualTNode **)((char *)&Parent->pPrev + v5) = pPrev;
      }
      pPrev->Parent = Parent;
      v6 = node->Child[0];
      if ( v6 )
      {
        pPrev->Child[0] = v6;
        v6->Parent = pPrev;
      }
      v7 = node->Child[1];
      if ( v7 )
      {
        pPrev->Child[1] = v7;
        v7->Parent = pPrev;
      }
    }
    node->Child[1] = 0i64;
    node->Child[0] = 0i64;
    node->Parent = 0i64;
  }
}

char __fastcall Scaleform::HeapPT::AllocLite::TrimAt(
        Scaleform::HeapPT::AllocLite *this,
        Scaleform::HeapPT::TreeSeg *seg,
        unsigned __int8 *ptrAt)
{
  Scaleform::HeapPT::DualTNode *LeEq; // rax
  Scaleform::HeapPT::DualTNode *v7; // rbx
  unsigned __int64 v8; // rsi

  LeEq = Scaleform::RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::AddrAccessor>::FindLeEq(
           &this->AddrTree,
           (unsigned __int64)ptrAt);
  v7 = LeEq;
  if ( !LeEq
    || LeEq->ParentSeg != seg
    || ptrAt < (unsigned __int8 *)LeEq
    || ptrAt >= (unsigned __int8 *)LeEq + (LeEq->Size << this->MinShift) )
  {
    return 0;
  }
  Scaleform::HeapPT::AllocLite::pullNode(this, LeEq);
  v8 = (unsigned __int64)v7 + (v7->Size << this->MinShift) - (_QWORD)ptrAt;
  if ( v7 < (Scaleform::HeapPT::DualTNode *)ptrAt )
  {
    Scaleform::HeapPT::AllocLite::pushNode(this, v7, seg, (ptrAt - (unsigned __int8 *)v7) >> this->MinShift);
    *((_QWORD *)ptrAt + 8) = seg;
    *((_QWORD *)ptrAt + 9) = v8 >> this->MinShift;
  }
  seg->Size -= v8;
  return 1;
}

void __fastcall Scaleform::HeapPT::AllocLite::VisitMem(
        Scaleform::HeapPT::AllocLite *this,
        Scaleform::Heap::MemVisitor *visitor,
        Scaleform::Heap::MemVisitor::Category cat)
{
  Scaleform::HeapPT::DualTNode *Root; // rdx
  Scaleform::Heap::HeapSegment v5; // [rsp+30h] [rbp-48h] BYREF

  v5.Scaleform::ListNode<Scaleform::Heap::HeapSegment> = (Scaleform::ListNode<Scaleform::Heap::HeapSegment>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  Root = this->SizeTree.Tree.Root;
  v5.SelfSize = 0i64;
  *(_QWORD *)&v5.SegType = 16i64;
  memset(&v5.UseCount, 0, 32);
  Scaleform::HeapPT::AllocLite::visitTree(this, Root, &v5, visitor, cat);
}

void __fastcall Scaleform::HeapPT::AllocLite::VisitUnused(
        Scaleform::HeapPT::AllocLite *this,
        Scaleform::Heap::SegVisitor *visitor,
        unsigned int cat)
{
  Scaleform::HeapPT::AllocLite::visitUnusedInTree(this, this->SizeTree.Tree.Root, visitor, cat);
}

Scaleform::AllocAddrNode *__fastcall Scaleform::HeapPT::AllocLite::pullBest(
        Scaleform::HeapPT::AllocLite *this,
        unsigned __int64 blocks,
        unsigned __int64 alignMask)
{
  Scaleform::HeapPT::DualTNode *v6; // rax
  Scaleform::AllocAddrNode *GrEq; // rbx
  Scaleform::AllocAddrNode *v9; // r9
  unsigned __int64 MinShift; // r15
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  Scaleform::HeapPT::DualTNode *pPrev; // rcx
  Scaleform::HeapPT::DualTNode *pNext; // rax
  Scaleform::AllocAddrNode *AddrParent; // rdx
  __int64 v17; // rax
  Scaleform::HeapPT::DualTNode *v18; // rax
  Scaleform::HeapPT::DualTNode *v19; // rax

  if ( alignMask > this->MinMask )
  {
    GrEq = (Scaleform::AllocAddrNode *)Scaleform::RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::SizeAccessor>::FindGrEq(
                                         &this->SizeTree.Tree,
                                         blocks);
    v9 = GrEq;
    if ( GrEq )
    {
      MinShift = this->MinShift;
      v11 = blocks << this->MinShift;
      while ( 1 )
      {
        v12 = ~alignMask & ((unsigned __int64)GrEq + alignMask);
        v13 = v12 - (_QWORD)GrEq;
        if ( v12 != (_QWORD)GrEq )
        {
          do
          {
            if ( v13 >= 0x80 )
              break;
            v12 += alignMask + 1;
            v13 += alignMask + 1;
          }
          while ( v13 );
        }
        if ( v12 + v11 <= (unsigned __int64)GrEq + (GrEq->Size << MinShift) )
          break;
        GrEq = GrEq->pNext;
        if ( GrEq == v9 )
        {
          GrEq = (Scaleform::AllocAddrNode *)Scaleform::RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::SizeAccessor>::FindGrEq(
                                               &this->SizeTree.Tree,
                                               GrEq->Size + 1);
          v9 = GrEq;
          if ( !GrEq )
            return GrEq;
        }
      }
      pPrev = (Scaleform::HeapPT::DualTNode *)GrEq->pPrev;
      if ( GrEq->pPrev == GrEq )
      {
        Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::AddrAccessor>::Remove(
          (Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::AddrAccessor> *)&this->SizeTree,
          GrEq);
      }
      else
      {
        pNext = (Scaleform::HeapPT::DualTNode *)GrEq->pNext;
        pNext->pPrev = pPrev;
        pPrev->pNext = pNext;
        AddrParent = GrEq->AddrParent;
        if ( AddrParent )
        {
          if ( GrEq == (Scaleform::AllocAddrNode *)this->SizeTree.Tree.Root )
          {
            this->SizeTree.Tree.Root = pPrev;
          }
          else
          {
            v17 = 24i64;
            if ( AddrParent->AddrChild[0] != GrEq )
              v17 = 32i64;
            *(Scaleform::AllocAddrNode **)((char *)&AddrParent->pPrev + v17) = (Scaleform::AllocAddrNode *)pPrev;
          }
          pPrev->Parent = (Scaleform::HeapPT::DualTNode *)AddrParent;
          v18 = (Scaleform::HeapPT::DualTNode *)GrEq->AddrChild[0];
          if ( v18 )
          {
            pPrev->Child[0] = v18;
            v18->Parent = pPrev;
          }
          v19 = (Scaleform::HeapPT::DualTNode *)GrEq->AddrChild[1];
          if ( v19 )
          {
            pPrev->Child[1] = v19;
            v19->Parent = pPrev;
          }
        }
        GrEq->AddrChild[1] = 0i64;
        GrEq->AddrChild[0] = 0i64;
        GrEq->AddrParent = 0i64;
      }
      Scaleform::RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::AddrAccessor>::Remove(
        (Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::SizeAccessor> *)&this->AddrTree,
        GrEq);
      this->FreeBlocks -= GrEq->Size;
    }
  }
  else
  {
    v6 = Scaleform::RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::SizeAccessor>::FindGrEq(
           &this->SizeTree.Tree,
           blocks);
    GrEq = (Scaleform::AllocAddrNode *)v6;
    if ( v6 )
    {
      GrEq = (Scaleform::AllocAddrNode *)v6->pNext;
      Scaleform::RadixTreeMulti<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::SizeAccessor>::Remove(
        &this->SizeTree,
        (Scaleform::HeapPT::DualTNode *)GrEq);
      if ( GrEq )
      {
        Scaleform::RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::AddrAccessor>::Remove(
          (Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::SizeAccessor> *)&this->AddrTree,
          GrEq);
        this->FreeBlocks -= GrEq->Size;
        return GrEq;
      }
    }
  }
  return GrEq;
}

void __fastcall Scaleform::HeapPT::AllocLite::pullNode(
        Scaleform::HeapPT::AllocLite *this,
        Scaleform::HeapPT::DualTNode *node)
{
  this->FreeBlocks -= node->Size;
  Scaleform::RadixTreeMulti<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::SizeAccessor>::Remove(
    &this->SizeTree,
    node);
  Scaleform::RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::AddrAccessor>::Remove(
    (Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::SizeAccessor> *)&this->AddrTree,
    (Scaleform::AllocAddrNode *)node);
}

void __fastcall Scaleform::HeapPT::AllocLite::pushNode(
        Scaleform::HeapPT::AllocLite *this,
        Scaleform::HeapPT::DualTNode *node,
        Scaleform::HeapPT::TreeSeg *seg,
        unsigned __int64 blocks)
{
  Scaleform::HeapPT::DualTNode *p_AddrTree; // rcx
  Scaleform::HeapPT::DualTNode *Root; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  Scaleform::HeapPT::DualTNode **v11; // r8
  Scaleform::HeapPT::DualTNode *v12; // rcx

  node->Size = blocks;
  node->ParentSeg = seg;
  Scaleform::RadixTreeMulti<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::SizeAccessor>::Insert(
    &this->SizeTree,
    node);
  p_AddrTree = (Scaleform::HeapPT::DualTNode *)&this->AddrTree;
  node->AddrChild[1] = 0i64;
  node->AddrChild[0] = 0i64;
  node->AddrParent = 0i64;
  Root = this->AddrTree.Root;
  if ( Root )
  {
    v9 = (unsigned __int64)node;
    if ( Root != node )
    {
      while ( 1 )
      {
        v10 = v9;
        v9 *= 2i64;
        v11 = &Root->pPrev + (v10 >> 63);
        v12 = v11[6];
        if ( !v12 )
          break;
        Root = v11[6];
        if ( v12 == node )
          goto LABEL_8;
      }
      v11[6] = node;
      node->AddrParent = Root;
    }
  }
  else
  {
    p_AddrTree->pPrev = node;
    node->AddrParent = p_AddrTree;
  }
LABEL_8:
  this->FreeBlocks += blocks;
}

void __fastcall Scaleform::HeapPT::AllocLite::splitNode(
        Scaleform::HeapPT::AllocLite *this,
        Scaleform::HeapPT::DualTNode *node,
        unsigned __int8 *start,
        unsigned __int64 size)
{
  Scaleform::HeapPT::TreeSeg *ParentSeg; // rsi
  unsigned __int64 MinShift; // rcx
  unsigned __int64 v9; // rbx

  ParentSeg = node->ParentSeg;
  MinShift = this->MinShift;
  v9 = (unsigned __int64)node + (node->Size << MinShift) - (_QWORD)start - size;
  if ( start != (unsigned __int8 *)node )
    Scaleform::HeapPT::AllocLite::pushNode(
      this,
      node,
      node->ParentSeg,
      (unsigned __int64)(start - (unsigned __int8 *)node) >> MinShift);
  if ( v9 )
    Scaleform::HeapPT::AllocLite::pushNode(
      this,
      (Scaleform::HeapPT::DualTNode *)&start[size],
      ParentSeg,
      v9 >> this->MinShift);
}

void __fastcall Scaleform::HeapPT::AllocLite::visitTree(
        Scaleform::HeapPT::AllocLite *this,
        const Scaleform::HeapPT::DualTNode *root,
        Scaleform::Heap::HeapSegment *seg,
        Scaleform::Heap::MemVisitor *visitor,
        Scaleform::Heap::MemVisitor::Category cat)
{
  const Scaleform::HeapPT::DualTNode *v7; // rdi
  const Scaleform::HeapPT::DualTNode *pNext; // rbx
  Scaleform::HeapPT::AllocLite *v9; // [rsp+40h] [rbp+8h]

  if ( root )
  {
    v9 = this;
    v7 = root;
    do
    {
      Scaleform::HeapPT::AllocLite::visitTree(this, v7->Child[0], seg, visitor, cat);
      pNext = v7;
      do
      {
        seg->DataSize = pNext->ParentSeg->Size;
        seg->pData = pNext->ParentSeg->Buffer;
        visitor->Visit(visitor, seg, (unsigned __int64)pNext, pNext->Size << v9->MinShift, cat);
        pNext = pNext->pNext;
      }
      while ( pNext != v7 );
      v7 = v7->Child[1];
      this = v9;
    }
    while ( v7 );
  }
}

void __fastcall Scaleform::HeapPT::AllocLite::visitUnusedInTree(
        Scaleform::HeapPT::AllocLite *this,
        const Scaleform::HeapPT::DualTNode *root,
        Scaleform::Heap::SegVisitor *visitor,
        unsigned int cat)
{
  const Scaleform::HeapPT::DualTNode *v6; // rdi
  Scaleform::HeapPT::AllocLite *v7; // rax
  const Scaleform::HeapPT::DualTNode *pNext; // rbx

  if ( root )
  {
    v6 = root;
    v7 = this;
    do
    {
      Scaleform::HeapPT::AllocLite::visitUnusedInTree(v7, v6->Child[0], visitor, cat);
      pNext = v6;
      do
      {
        if ( (((unsigned __int64)&pNext[51].pVoidNext + 7) & 0xFFFFFFFFFFFFF000ui64) + 4096 <= (((unsigned __int64)pNext
                                                                                               + (pNext->Size << this->MinShift)) & 0xFFFFFFFFFFFFF000ui64) )
          ((void (__fastcall *)(Scaleform::Heap::SegVisitor *, _QWORD, _QWORD))visitor->Visit)(visitor, cat, 0i64);
        pNext = pNext->pNext;
      }
      while ( pNext != v6 );
      v6 = v6->Child[1];
      v7 = this;
    }
    while ( v6 );
  }
}

