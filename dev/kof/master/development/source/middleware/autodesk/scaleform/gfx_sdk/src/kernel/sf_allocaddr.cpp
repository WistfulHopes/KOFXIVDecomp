#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"

Scaleform::AllocAddr::AllocAddr(Scaleform::MemoryHeap * nodeHeap); // 0x1406FC600
Scaleform::AllocAddr::~AllocAddr(); // 0x1406FC620
class Scaleform::List<Scaleform::AllocAddrNode,Scaleform::AllocAddrNode,Scaleform::ListNode<Scaleform::AllocAddrNode> >
{
	struct ValueType;
private:
	List<Scaleform::AllocAddrNode,Scaleform::AllocAddrNode,Scaleform::ListNode<Scaleform::AllocAddrNode> >(const Scaleform::List<Scaleform::AllocAddrNode,Scaleform::AllocAddrNode,Scaleform::ListNode<Scaleform::AllocAddrNode> > &);
public:
	List<Scaleform::AllocAddrNode,Scaleform::AllocAddrNode,Scaleform::ListNode<Scaleform::AllocAddrNode> >();
	void Clear();
	Scaleform::AllocAddrNode * GetFirst();
	Scaleform::AllocAddrNode * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::AllocAddrNode *);
	bool IsLast(const Scaleform::AllocAddrNode *);
	bool IsNull(const Scaleform::AllocAddrNode *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::AllocAddrNode * GetPrev(const Scaleform::AllocAddrNode *);
	static Scaleform::AllocAddrNode * GetNext(const Scaleform::AllocAddrNode *);
	void PushFront(Scaleform::AllocAddrNode *);
	void PushBack(Scaleform::AllocAddrNode *);
	static void Remove(Scaleform::AllocAddrNode *);
	void BringToFront(Scaleform::AllocAddrNode *);
	void SendToBack(Scaleform::AllocAddrNode *);
	void PushListToFront(Scaleform::List<Scaleform::AllocAddrNode,Scaleform::AllocAddrNode,Scaleform::ListNode<Scaleform::AllocAddrNode> > &);
	void PushListToBack(Scaleform::List<Scaleform::AllocAddrNode,Scaleform::AllocAddrNode,Scaleform::ListNode<Scaleform::AllocAddrNode> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::AllocAddrNode,Scaleform::AllocAddrNode,Scaleform::ListNode<Scaleform::AllocAddrNode> > &, Scaleform::AllocAddrNode *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::AllocAddrNode,Scaleform::AllocAddrNode,Scaleform::ListNode<Scaleform::AllocAddrNode> > &, Scaleform::AllocAddrNode *);
	void PushListItemsToFront(Scaleform::AllocAddrNode *, Scaleform::AllocAddrNode *);
private:
	const Scaleform::List<Scaleform::AllocAddrNode,Scaleform::AllocAddrNode,Scaleform::ListNode<Scaleform::AllocAddrNode> > & operator=(const Scaleform::List<Scaleform::AllocAddrNode,Scaleform::AllocAddrNode,Scaleform::ListNode<Scaleform::AllocAddrNode> > &);
	Scaleform::ListNode<Scaleform::AllocAddrNode> Root; // 0x0
};
void Scaleform::linearizeTree(Scaleform::AllocAddrNode * root, Scaleform::List<Scaleform::AllocAddrNode,Scaleform::AllocAddrNode,Scaleform::ListNode<Scaleform::AllocAddrNode> > * nodes); // 0x1406FCC80
void Scaleform::AllocAddr::destroyAll(); // 0x1406FCBC0
void Scaleform::AllocAddr::pushNode(Scaleform::AllocAddrNode * node, unsigned long long addr, unsigned long long size); // 0x1406FCE30
void Scaleform::AllocAddr::splitNode(Scaleform::AllocAddrNode * node, unsigned long long addr, unsigned long long size); // 0x1406FCED0
unsigned long long Scaleform::AllocAddr::mergeNodes(Scaleform::AllocAddrNode * prev, Scaleform::AllocAddrNode * next, unsigned long long addr, unsigned long long size); // 0x1406FCCE0
unsigned long long Scaleform::AllocAddr::Alloc(unsigned long long size); // 0x1406FC640
unsigned long long Scaleform::AllocAddr::Free(unsigned long long addr, unsigned long long size); // 0x1406FC900
void Scaleform::AllocAddr::AddSegment(unsigned long long addr, unsigned long long size); // 0x1406FC630
void Scaleform::AllocAddr::RemoveSegment(unsigned long long addr, unsigned long long size); // 0x1406FCAF0
void Scaleform::calcTreeSize(const Scaleform::AllocAddrNode * node, unsigned long long * size); // 0x1406FCB70
unsigned long long Scaleform::AllocAddr::GetFreeSize(); // 0x1406FC9A0void __fastcall Scaleform::AllocAddr::AllocAddr(Scaleform::AllocAddr *this, Scaleform::MemoryHeap *nodeHeap)
{
  this->pNodeHeap = nodeHeap;
  this->SizeTree.Tree.Root = 0i64;
  this->AddrTree.Root = 0i64;
}

// attributes: thunk
void __fastcall Scaleform::AllocAddr::~AllocAddr(Scaleform::AllocAddr *this)
{
  Scaleform::AllocAddr::destroyAll(this);
}

// attributes: thunk
void __fastcall Scaleform::AllocAddr::AddSegment(
        Scaleform::AllocAddr *this,
        unsigned __int64 addr,
        unsigned __int64 size)
{
  Scaleform::AllocAddr::Free(this, addr, size);
}

unsigned __int64 __fastcall Scaleform::AllocAddr::Alloc(Scaleform::AllocAddr *this, unsigned __int64 size)
{
  const Scaleform::AllocAddrNode *GrEq; // rax
  Scaleform::AllocAddrNode *pNext; // rdi
  unsigned __int64 Addr; // rbx

  GrEq = Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::SizeAccessor>::FindGrEq(
           &this->SizeTree.Tree,
           size);
  if ( !GrEq )
    return -1i64;
  pNext = GrEq->pNext;
  Scaleform::RadixTreeMulti<Scaleform::AllocAddrNode,Scaleform::AllocAddr::SizeAccessor>::Remove(&this->SizeTree, pNext);
  if ( !pNext )
    return -1i64;
  Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::AddrAccessor>::Remove(&this->AddrTree, pNext);
  Addr = pNext->Addr;
  Scaleform::AllocAddr::splitNode(this, pNext, Addr, size);
  return Addr;
}

Scaleform::AllocAddrNode *__fastcall Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::AddrAccessor>::FindGrEq(
        Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::AddrAccessor> *this,
        unsigned __int64 key)
{
  Scaleform::AllocAddrNode *Root; // r8
  Scaleform::AllocAddrNode *v3; // rbx
  unsigned __int64 v4; // r9
  Scaleform::AllocAddrNode *v6; // rax
  unsigned __int64 i; // r10
  unsigned __int64 v8; // rdx
  Scaleform::AllocAddrNode *v9; // rdx
  __int64 v11; // rcx

  Root = this->Root;
  v3 = 0i64;
  v4 = -1i64;
  if ( this->Root )
  {
    v6 = 0i64;
    for ( i = key; ; i *= 2i64 )
    {
      v8 = Root->Addr - key;
      if ( Root->Addr >= key && v8 < v4 )
      {
        v3 = Root;
        v4 = Root->Addr - key;
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
    for ( ; v6; v6 = *(Scaleform::AllocAddrNode **)((char *)&v6->pPrev + v11) )
    {
      if ( v6->Addr >= key && v6->Addr - key < v4 )
      {
        v4 = v6->Addr - key;
        v3 = v6;
      }
      v11 = 24i64;
      if ( !v6->AddrChild[0] )
        v11 = 32i64;
    }
  }
  return v3;
}

Scaleform::AllocAddrNode *__fastcall Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::SizeAccessor>::FindGrEq(
        Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::SizeAccessor> *this,
        unsigned __int64 key)
{
  Scaleform::AllocAddrNode *Root; // r8
  Scaleform::AllocAddrNode *v3; // rbx
  unsigned __int64 v4; // r9
  Scaleform::AllocAddrNode *v6; // rax
  unsigned __int64 i; // r10
  unsigned __int64 v8; // rdx
  Scaleform::AllocAddrNode *v9; // rdx
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
      v9 = Root->SizeChild[1];
      Root = Root->SizeChild[i >> 63];
      if ( v9 && v9 != Root )
        v6 = v9;
      if ( !Root )
        break;
    }
    for ( ; v6; v6 = *(Scaleform::AllocAddrNode **)((char *)&v6->pPrev + v11) )
    {
      if ( v6->Size >= key && v6->Size - key < v4 )
      {
        v4 = v6->Size - key;
        v3 = v6;
      }
      v11 = 48i64;
      if ( !v6->SizeChild[0] )
        v11 = 56i64;
    }
  }
  return v3;
}

Scaleform::AllocAddrNode *__fastcall Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::AddrAccessor>::FindLeEq(
        Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::AddrAccessor> *this,
        unsigned __int64 key)
{
  Scaleform::AllocAddrNode *Root; // r8
  Scaleform::AllocAddrNode *v3; // rbx
  unsigned __int64 v4; // r9
  Scaleform::AllocAddrNode *v6; // rax
  unsigned __int64 i; // r10
  unsigned __int64 v8; // rdx
  Scaleform::AllocAddrNode *v9; // rdx
  __int64 v11; // rcx

  Root = this->Root;
  v3 = 0i64;
  v4 = -1i64;
  if ( this->Root )
  {
    v6 = 0i64;
    for ( i = key; ; i *= 2i64 )
    {
      v8 = key - Root->Addr;
      if ( Root->Addr <= key && v8 < v4 )
      {
        v3 = Root;
        v4 = key - Root->Addr;
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
    for ( ; v6; v6 = *(Scaleform::AllocAddrNode **)((char *)&v6->pPrev + v11) )
    {
      if ( v6->Addr <= key && key - v6->Addr < v4 )
      {
        v4 = key - v6->Addr;
        v3 = v6;
      }
      v11 = 24i64;
      if ( v6->AddrChild[1] )
        v11 = 32i64;
    }
  }
  return v3;
}

unsigned __int64 __fastcall Scaleform::AllocAddr::Free(
        Scaleform::AllocAddr *this,
        unsigned __int64 addr,
        unsigned __int64 size)
{
  unsigned __int64 v7; // r15
  Scaleform::AllocAddrNode *LeEq; // rdi
  Scaleform::AllocAddrNode *GrEq; // rax

  if ( !size )
    return 0i64;
  v7 = addr + size;
  LeEq = Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::AddrAccessor>::FindLeEq(
           &this->AddrTree,
           addr);
  GrEq = Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::AddrAccessor>::FindGrEq(
           &this->AddrTree,
           addr + size);
  if ( !LeEq || LeEq->Addr + LeEq->Size != addr )
    LeEq = 0i64;
  if ( !GrEq || GrEq->Addr != v7 )
    GrEq = 0i64;
  return Scaleform::AllocAddr::mergeNodes(this, LeEq, GrEq, addr, size);
}

unsigned __int64 __fastcall Scaleform::AllocAddr::GetFreeSize(Scaleform::AllocAddr *this)
{
  Scaleform::AllocAddrNode *Root; // r8
  __int64 v2; // r8
  unsigned __int64 size; // [rsp+30h] [rbp+8h] BYREF

  Root = this->AddrTree.Root;
  size = 0i64;
  if ( !Root )
    return 0i64;
  size = Root->Size;
  Scaleform::calcTreeSize(Root->AddrChild[0], &size);
  Scaleform::calcTreeSize(*(const Scaleform::AllocAddrNode **)(v2 + 32), &size);
  return size;
}

void __fastcall Scaleform::RadixTreeMulti<Scaleform::AllocAddrNode,Scaleform::AllocAddr::SizeAccessor>::Insert(
        Scaleform::RadixTreeMulti<Scaleform::AllocAddrNode,Scaleform::AllocAddr::SizeAccessor> *this,
        Scaleform::AllocAddrNode *node)
{
  Scaleform::AllocAddrNode *Root; // r8
  unsigned __int64 Size; // r10
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  Scaleform::AllocAddrNode **v6; // r9
  Scaleform::AllocAddrNode *v7; // rax

  node->pPrev = node;
  node->pNext = node;
  node->SizeChild[1] = 0i64;
  node->SizeChild[0] = 0i64;
  node->SizeParent = 0i64;
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
      node->pNext->Scaleform::ListNode<Scaleform::AllocAddrNode>::$CA59F4836762774709904CEFF3689785::pPrev = node;
    }
    else
    {
      while ( 1 )
      {
        v5 = v4;
        v4 *= 2i64;
        v6 = &Root->pPrev + (v5 >> 63);
        v7 = v6[6];
        if ( !v7 )
          break;
        Root = v6[6];
        if ( v7->Size == Size )
          goto LABEL_6;
      }
      v6[6] = node;
      node->SizeParent = Root;
    }
  }
  else
  {
    this->Tree.Root = node;
    node->SizeParent = (Scaleform::AllocAddrNode *)this;
  }
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

void __fastcall Scaleform::RadixTreeMulti<Scaleform::AllocAddrNode,Scaleform::AllocAddr::SizeAccessor>::Remove(
        Scaleform::RadixTreeMulti<Scaleform::AllocAddrNode,Scaleform::AllocAddr::SizeAccessor> *this,
        Scaleform::AllocAddrNode *node)
{
  Scaleform::AllocAddrNode *pPrev; // r8
  Scaleform::AllocAddrNode *pNext; // rax
  Scaleform::AllocAddrNode *SizeParent; // r9
  __int64 v5; // rax
  Scaleform::AllocAddrNode *v6; // rax
  Scaleform::AllocAddrNode *v7; // rax

  pPrev = node->pPrev;
  if ( node->pPrev == node )
  {
    Scaleform::RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::AddrAccessor>::Remove(
      &this->Tree,
      node);
  }
  else
  {
    pNext = node->pNext;
    pNext->pPrev = pPrev;
    pPrev->pNext = pNext;
    SizeParent = node->SizeParent;
    if ( SizeParent )
    {
      if ( node == this->Tree.Root )
      {
        this->Tree.Root = pPrev;
      }
      else
      {
        v5 = 48i64;
        if ( SizeParent->SizeChild[0] != node )
          v5 = 56i64;
        *(Scaleform::AllocAddrNode **)((char *)&SizeParent->pPrev + v5) = pPrev;
      }
      pPrev->SizeParent = SizeParent;
      v6 = node->SizeChild[0];
      if ( v6 )
      {
        pPrev->SizeChild[0] = v6;
        v6->SizeParent = pPrev;
      }
      v7 = node->SizeChild[1];
      if ( v7 )
      {
        pPrev->SizeChild[1] = v7;
        v7->SizeParent = pPrev;
      }
    }
    node->SizeChild[1] = 0i64;
    node->SizeChild[0] = 0i64;
    node->SizeParent = 0i64;
  }
}

void __fastcall Scaleform::AllocAddr::RemoveSegment(
        Scaleform::AllocAddr *this,
        unsigned __int64 addr,
        unsigned __int64 size)
{
  Scaleform::AllocAddrNode *LeEq; // rdi

  LeEq = Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::AddrAccessor>::FindLeEq(
           &this->AddrTree,
           addr);
  Scaleform::RadixTreeMulti<Scaleform::AllocAddrNode,Scaleform::AllocAddr::SizeAccessor>::Remove(&this->SizeTree, LeEq);
  Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::AddrAccessor>::Remove(&this->AddrTree, LeEq);
  Scaleform::AllocAddr::splitNode(this, LeEq, addr, size);
}

void __fastcall Scaleform::calcTreeSize(const Scaleform::AllocAddrNode *node, unsigned __int64 *size)
{
  const Scaleform::AllocAddrNode *v3; // rbx

  if ( node )
  {
    v3 = node;
    do
    {
      *size += v3->Size;
      Scaleform::calcTreeSize(v3->AddrChild[0], size);
      v3 = v3->AddrChild[1];
    }
    while ( v3 );
  }
}

void __fastcall Scaleform::AllocAddr::destroyAll(Scaleform::AllocAddr *this)
{
  Scaleform::AllocAddrNode *Root; // r9
  Scaleform::List<Scaleform::AllocAddrNode,Scaleform::AllocAddrNode,Scaleform::ListNode<Scaleform::AllocAddrNode> > *p_nodes; // rax
  Scaleform::AllocAddrNode *pPrev; // r8
  Scaleform::AllocAddrNode *v5; // r9
  Scaleform::List<Scaleform::AllocAddrNode,Scaleform::AllocAddrNode,Scaleform::ListNode<Scaleform::AllocAddrNode> > nodes; // [rsp+20h] [rbp-18h] BYREF

  Root = this->AddrTree.Root;
  nodes.Root.pPrev = (Scaleform::AllocAddrNode *)&nodes;
  p_nodes = &nodes;
  nodes.Root.pNext = (Scaleform::AllocAddrNode *)&nodes;
  if ( Root )
  {
    Scaleform::linearizeTree(Root->AddrChild[0], &nodes);
    pPrev = nodes.Root.pPrev;
    v5->pNext = (Scaleform::AllocAddrNode *)&nodes;
    v5->pPrev = pPrev;
    nodes.Root.pPrev->pNext = v5;
    nodes.Root.pPrev = v5;
    Scaleform::linearizeTree(v5->AddrChild[1], &nodes);
    p_nodes = (Scaleform::List<Scaleform::AllocAddrNode,Scaleform::AllocAddrNode,Scaleform::ListNode<Scaleform::AllocAddrNode> > *)nodes.Root.pNext;
  }
  this->AddrTree.Root = 0i64;
  this->SizeTree.Tree.Root = 0i64;
  if ( p_nodes != &nodes )
  {
    do
    {
      p_nodes->Root.pPrev->pNext = p_nodes->Root.pNext;
      p_nodes->Root.pNext->pPrev = p_nodes->Root.pPrev;
      this->pNodeHeap->Free(this->pNodeHeap, p_nodes);
      p_nodes = (Scaleform::List<Scaleform::AllocAddrNode,Scaleform::AllocAddrNode,Scaleform::ListNode<Scaleform::AllocAddrNode> > *)nodes.Root.pNext;
    }
    while ( (Scaleform::List<Scaleform::AllocAddrNode,Scaleform::AllocAddrNode,Scaleform::ListNode<Scaleform::AllocAddrNode> > *)nodes.Root.pNext != &nodes );
  }
}

void __fastcall Scaleform::linearizeTree(
        Scaleform::AllocAddrNode *root,
        Scaleform::List<Scaleform::AllocAddrNode,Scaleform::AllocAddrNode,Scaleform::ListNode<Scaleform::AllocAddrNode> > *nodes)
{
  Scaleform::AllocAddrNode *v3; // rbx

  if ( root )
  {
    v3 = root;
    do
    {
      Scaleform::linearizeTree(v3->AddrChild[0], nodes);
      v3->pPrev = nodes->Root.pPrev;
      v3->pNext = (Scaleform::AllocAddrNode *)nodes;
      nodes->Root.pPrev->pNext = v3;
      nodes->Root.pPrev = v3;
      v3 = v3->AddrChild[1];
    }
    while ( v3 );
  }
}

unsigned __int64 __fastcall Scaleform::AllocAddr::mergeNodes(
        Scaleform::AllocAddr *this,
        Scaleform::AllocAddrNode *prev,
        Scaleform::AllocAddrNode *next,
        unsigned __int64 addr,
        unsigned __int64 size)
{
  Scaleform::RadixTreeMulti<Scaleform::AllocAddrNode,Scaleform::AllocAddr::SizeAccessor> *p_SizeTree; // rcx
  unsigned __int64 v10; // rsi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  Scaleform::AllocAddrNode *v14; // rax

  if ( prev )
  {
    p_SizeTree = &this->SizeTree;
    if ( next )
    {
      v10 = size + next->Size + prev->Size;
      Scaleform::RadixTreeMulti<Scaleform::AllocAddrNode,Scaleform::AllocAddr::SizeAccessor>::Remove(p_SizeTree, prev);
      Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::AddrAccessor>::Remove(&this->AddrTree, prev);
      Scaleform::RadixTreeMulti<Scaleform::AllocAddrNode,Scaleform::AllocAddr::SizeAccessor>::Remove(
        &this->SizeTree,
        next);
      Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::AddrAccessor>::Remove(&this->AddrTree, next);
      Scaleform::AllocAddr::pushNode(this, prev, prev->Addr, v10);
      this->pNodeHeap->Free(this->pNodeHeap, next);
      return v10;
    }
    else
    {
      v12 = prev->Size + size;
      Scaleform::RadixTreeMulti<Scaleform::AllocAddrNode,Scaleform::AllocAddr::SizeAccessor>::Remove(p_SizeTree, prev);
      Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::AddrAccessor>::Remove(&this->AddrTree, prev);
      Scaleform::AllocAddr::pushNode(this, prev, prev->Addr, v12);
      return v12;
    }
  }
  else if ( next )
  {
    v13 = next->Size + size;
    Scaleform::RadixTreeMulti<Scaleform::AllocAddrNode,Scaleform::AllocAddr::SizeAccessor>::Remove(
      &this->SizeTree,
      next);
    Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::AddrAccessor>::Remove(&this->AddrTree, next);
    Scaleform::AllocAddr::pushNode(this, next, addr, v13);
    return v13;
  }
  else
  {
    v14 = (Scaleform::AllocAddrNode *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))this->pNodeHeap->Alloc)(
                                        this->pNodeHeap,
                                        80i64);
    Scaleform::AllocAddr::pushNode(this, v14, addr, size);
    return size;
  }
}

void __fastcall Scaleform::AllocAddr::pushNode(
        Scaleform::AllocAddr *this,
        Scaleform::AllocAddrNode *node,
        unsigned __int64 addr,
        unsigned __int64 size)
{
  Scaleform::AllocAddrNode *p_AddrTree; // rbx
  Scaleform::AllocAddrNode *pPrev; // rax
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  Scaleform::AllocAddrNode **v11; // r8
  Scaleform::AllocAddrNode *v12; // rcx

  node->Addr = addr;
  node->Size = size;
  Scaleform::RadixTreeMulti<Scaleform::AllocAddrNode,Scaleform::AllocAddr::SizeAccessor>::Insert(&this->SizeTree, node);
  p_AddrTree = (Scaleform::AllocAddrNode *)&this->AddrTree;
  node->AddrChild[1] = 0i64;
  node->AddrChild[0] = 0i64;
  node->AddrParent = 0i64;
  pPrev = p_AddrTree->pPrev;
  if ( p_AddrTree->pPrev )
  {
    v8 = node->Addr;
    v9 = v8;
    if ( pPrev->Addr != v8 )
    {
      while ( 1 )
      {
        v10 = v9;
        v9 *= 2i64;
        v11 = &pPrev->pPrev + (v10 >> 63);
        v12 = v11[3];
        if ( !v12 )
          break;
        pPrev = v11[3];
        if ( v12->Addr == v8 )
          return;
      }
      v11[3] = node;
      node->AddrParent = pPrev;
    }
  }
  else
  {
    p_AddrTree->pPrev = node;
    node->AddrParent = p_AddrTree;
  }
}

void __fastcall Scaleform::AllocAddr::splitNode(
        Scaleform::AllocAddr *this,
        Scaleform::AllocAddrNode *node,
        unsigned __int64 addr,
        unsigned __int64 size)
{
  unsigned __int64 v5; // r8
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r9
  Scaleform::AllocAddrNode *v10; // rax

  v5 = node->Addr;
  v8 = v5 + node->Size - addr - size;
  v9 = addr - v5;
  if ( addr == v5 )
  {
    if ( v8 )
      Scaleform::AllocAddr::pushNode(this, node, addr + size, v8);
    else
      ((void (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::AllocAddrNode *, unsigned __int64, unsigned __int64))this->pNodeHeap->Free)(
        this->pNodeHeap,
        node,
        v5,
        v9);
  }
  else
  {
    Scaleform::AllocAddr::pushNode(this, node, v5, v9);
    if ( v8 )
    {
      v10 = (Scaleform::AllocAddrNode *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))this->pNodeHeap->Alloc)(
                                          this->pNodeHeap,
                                          80i64);
      Scaleform::AllocAddr::pushNode(this, v10, addr + size, v8);
    }
  }
}

