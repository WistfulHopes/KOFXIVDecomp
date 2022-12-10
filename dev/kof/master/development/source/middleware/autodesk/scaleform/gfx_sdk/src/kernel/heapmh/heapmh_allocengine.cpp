#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_freebin.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_allocengine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_allocbitset2.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_heapbitset2.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_root.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_heaptypes.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"

typedef unsigned long Scaleform::Heap::UPIntHalf;
Scaleform::HeapMH::AllocEngineMH::AllocEngineMH(Scaleform::SysAlloc * sysAlloc, Scaleform::MemoryHeapMH * heap, unsigned long long minAlignSize, unsigned long long limit); // 0x1403BE890
void Scaleform::HeapMH::AllocEngineMH::FreeAll(); // 0x14002E7C0
Scaleform::HeapMH::PageMH * Scaleform::HeapMH::AllocEngineMH::allocPageUnlocked(bool * limHandlerOK); // 0x1403BF410
Scaleform::HeapMH::PageMH * Scaleform::HeapMH::AllocEngineMH::allocPageLocked(bool * limHandlerOK); // 0x1403BF300
void Scaleform::HeapMH::AllocEngineMH::freePage(Scaleform::HeapMH::PageMH * page, bool globalLocked); // 0x1403BF530
void * Scaleform::HeapMH::AllocEngineMH::allocFromPage(unsigned long long size, Scaleform::HeapMH::PageInfoMH * info, bool globalLocked); // 0x1403BF230
void * Scaleform::HeapMH::AllocEngineMH::allocFromPage(unsigned long long size, unsigned long long alignSize, Scaleform::HeapMH::PageInfoMH * info, bool globalLocked); // 0x1403BF150
void Scaleform::HeapMH::AllocEngineMH::Free(Scaleform::HeapMH::PageMH * page, void * ptr, bool globalLocked); // 0x1403BEC80
void Scaleform::HeapMH::AllocEngineMH::Free(Scaleform::HeapMH::NodeMH * node, void * ptr, bool __formal); // 0x1403BEBE0
void Scaleform::HeapMH::AllocEngineMH::GetPageInfoWithSize(Scaleform::HeapMH::PageMH * page, const void * ptr, Scaleform::HeapMH::PageInfoMH * info); // 0x1403BED40
void Scaleform::HeapMH::AllocEngineMH::GetPageInfoWithSize(Scaleform::HeapMH::NodeMH * node, const void * ptr, Scaleform::HeapMH::PageInfoMH * info); // 0x1403BED20
void * Scaleform::HeapMH::AllocEngineMH::allocDirect(unsigned long long size, unsigned long long alignSize, bool * limHandlerOK, Scaleform::HeapMH::PageInfoMH * info); // 0x1403BF010
void * Scaleform::HeapMH::AllocEngineMH::Alloc(unsigned long long size, Scaleform::HeapMH::PageInfoMH * info, bool globalLocked); // 0x1403BEAD0
void * Scaleform::HeapMH::AllocEngineMH::Alloc(unsigned long long size, unsigned long long alignSize, Scaleform::HeapMH::PageInfoMH * info, bool globalLocked); // 0x1403BE9B0
void * Scaleform::HeapMH::AllocEngineMH::ReallocInPage(Scaleform::HeapMH::PageMH * page, void * oldPtr, unsigned long long newSize, Scaleform::HeapMH::PageInfoMH * newInfo, bool __formal); // 0x1403BEEC0
void * Scaleform::HeapMH::AllocEngineMH::reallocInNodeNoLock(Scaleform::HeapMH::NodeMH * node0, void * oldPtr, unsigned long long newSize, Scaleform::HeapMH::PageInfoMH * newInfo); // 0x1403BF5F0
void * Scaleform::HeapMH::AllocEngineMH::ReallocInNode(Scaleform::HeapMH::NodeMH * node, void * oldPtr, unsigned long long newSize, Scaleform::HeapMH::PageInfoMH * newInfo, bool globalLocked); // 0x1403BEE20
void * Scaleform::HeapMH::AllocEngineMH::ReallocGeneral(Scaleform::HeapMH::PageMH * page, void * oldPtr, unsigned long long newSize, Scaleform::HeapMH::PageInfoMH * newInfo, bool globalLocked); // 0x1403BED80void __fastcall Scaleform::HeapMH::AllocEngineMH::AllocEngineMH(
        Scaleform::HeapMH::AllocEngineMH *this,
        Scaleform::SysAlloc *sysAlloc,
        Scaleform::MemoryHeapMH *heap,
        unsigned __int64 minAlignSize,
        unsigned __int64 limit)
{
  this->pSysAlloc = sysAlloc;
  this->pHeap = heap;
  if ( minAlignSize < 8 )
    minAlignSize = 8i64;
  this->MinAlignSize = minAlignSize;
  Scaleform::HeapMH::AllocBitSet2MH::AllocBitSet2MH(&this->Allocator);
  this->Pages.Root.pPrev = (Scaleform::HeapMH::PageMH *)&this->Pages;
  this->Pages.Root.pNext = (Scaleform::HeapMH::PageMH *)&this->Pages;
  this->Limit = limit;
  this->Footprint = 0i64;
  this->UsedSpace = 0i64;
  this->pLimHandler = 0i64;
  this->UseCount = 0i64;
}

Scaleform::HeapMH::NodeMH *__fastcall Scaleform::HeapMH::RootMH::AddToGlobalTree(
        Scaleform::HeapMH::RootMH *this,
        unsigned __int8 *ptr,
        unsigned __int64 size,
        unsigned __int64 align,
        Scaleform::MemoryHeapMH *heap)
{
  Scaleform::HeapMH::NodeMH *result; // rax
  unsigned __int64 v7; // rcx
  Scaleform::HeapMH::NodeMH *p_HeapTree; // rcx
  Scaleform::HeapMH::NodeMH *Root; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rcx
  char *v12; // r9
  Scaleform::HeapMH::NodeMH *v13; // rcx

  result = (Scaleform::HeapMH::NodeMH *)&ptr[size];
  if ( align )
  {
    if ( align <= 2 || align == 4 )
    {
      v7 = (unsigned __int64)heap;
      goto LABEL_10;
    }
    if ( align == 8 )
    {
      v7 = (unsigned __int64)heap | 1;
      goto LABEL_10;
    }
    if ( align == 16 )
    {
      v7 = (unsigned __int64)heap | 2;
      goto LABEL_10;
    }
  }
  v7 = (unsigned __int64)heap | 3;
  result->Align = align;
LABEL_10:
  result->pHeap = v7;
  result->Child[1] = 0i64;
  p_HeapTree = (Scaleform::HeapMH::NodeMH *)&this->HeapTree;
  result->Child[0] = 0i64;
  result->Parent = 0i64;
  Root = this->HeapTree.Root;
  if ( Root )
  {
    v10 = (__int64)result;
    if ( Root != result )
    {
      while ( 1 )
      {
        v11 = v10;
        v10 *= 2i64;
        v12 = (char *)Root + 8 * (v11 >> 63);
        v13 = (Scaleform::HeapMH::NodeMH *)*((_QWORD *)v12 + 1);
        if ( !v13 )
          break;
        Root = (Scaleform::HeapMH::NodeMH *)*((_QWORD *)v12 + 1);
        if ( v13 == result )
          return result;
      }
      *((_QWORD *)v12 + 1) = result;
      result->Parent = Root;
    }
  }
  else
  {
    p_HeapTree->Parent = result;
    result->Parent = p_HeapTree;
  }
  return result;
}

void *__fastcall Scaleform::HeapMH::AllocEngineMH::Alloc(
        Scaleform::HeapMH::AllocEngineMH *this,
        unsigned __int64 size,
        unsigned __int64 alignSize,
        Scaleform::HeapMH::PageInfoMH *info,
        bool globalLocked)
{
  unsigned __int64 v8; // r8
  void *result; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbp
  Scaleform::LockSafe *p_RootLock; // rbx
  void *v13; // rsi
  bool limHandlerOK; // [rsp+58h] [rbp+10h] BYREF

  if ( size > 0x200 )
  {
    v10 = 8i64;
    if ( alignSize >= 8 )
      v10 = alignSize;
    if ( size < v10 )
      size = v10;
    v11 = (size + 7) & 0xFFFFFFFFFFFFFFF8ui64;
    if ( globalLocked )
    {
      limHandlerOK = 0;
      do
        result = Scaleform::HeapMH::AllocEngineMH::allocDirect(this, v11, v10, &limHandlerOK, info);
      while ( !result && limHandlerOK );
    }
    else
    {
      p_RootLock = &Scaleform::HeapMH::GlobalRootMH->RootLock;
      Scaleform::Lock::DoLock(&Scaleform::HeapMH::GlobalRootMH->RootLock.mLock);
      limHandlerOK = 0;
      while ( 1 )
      {
        v13 = Scaleform::HeapMH::AllocEngineMH::allocDirect(this, v11, v10, &limHandlerOK, info);
        if ( v13 )
          break;
        if ( !limHandlerOK )
        {
          Scaleform::Lock::Unlock(&p_RootLock->mLock);
          return 0i64;
        }
      }
      Scaleform::Lock::Unlock(&p_RootLock->mLock);
      return v13;
    }
  }
  else
  {
    v8 = 16i64;
    if ( alignSize >= 0x10 )
      v8 = alignSize;
    return Scaleform::HeapMH::AllocEngineMH::allocFromPage(
             this,
             (size + 15) & 0xFFFFFFFFFFFFFFF0ui64,
             v8,
             info,
             globalLocked);
  }
  return result;
}

void *__fastcall Scaleform::HeapMH::AllocEngineMH::Alloc(
        Scaleform::HeapMH::AllocEngineMH *this,
        unsigned __int64 size,
        Scaleform::HeapMH::PageInfoMH *info,
        bool globalLocked)
{
  unsigned __int64 MinAlignSize; // r8
  void *result; // rax
  Scaleform::LockSafe *p_RootLock; // rbx
  void *v10; // rbp
  bool limHandlerOK; // [rsp+50h] [rbp+8h] BYREF

  MinAlignSize = this->MinAlignSize;
  if ( MinAlignSize > 0x10 )
    return Scaleform::HeapMH::AllocEngineMH::Alloc(this, size, MinAlignSize, info, globalLocked);
  if ( size <= 0x200 )
    return Scaleform::HeapMH::AllocEngineMH::allocFromPage(
             this,
             (size + 15) & 0xFFFFFFFFFFFFFFF0ui64,
             info,
             globalLocked);
  if ( globalLocked )
  {
    limHandlerOK = 0;
    do
      result = Scaleform::HeapMH::AllocEngineMH::allocDirect(this, size, this->MinAlignSize, &limHandlerOK, info);
    while ( !result && limHandlerOK );
  }
  else
  {
    p_RootLock = &Scaleform::HeapMH::GlobalRootMH->RootLock;
    Scaleform::Lock::DoLock(&Scaleform::HeapMH::GlobalRootMH->RootLock.mLock);
    limHandlerOK = 0;
    while ( 1 )
    {
      v10 = Scaleform::HeapMH::AllocEngineMH::allocDirect(this, size, this->MinAlignSize, &limHandlerOK, info);
      if ( v10 )
        break;
      if ( !limHandlerOK )
      {
        Scaleform::Lock::Unlock(&p_RootLock->mLock);
        return 0i64;
      }
    }
    Scaleform::Lock::Unlock(&p_RootLock->mLock);
    return v10;
  }
  return result;
}

void __fastcall Scaleform::HeapMH::AllocEngineMH::Free(
        Scaleform::HeapMH::AllocEngineMH *this,
        Scaleform::HeapMH::NodeMH *node,
        void *ptr,
        bool __formal)
{
  unsigned __int64 v7; // rax
  unsigned __int64 Align; // r9
  __int64 v9; // rax
  Scaleform::SysAlloc *pSysAlloc; // rcx
  char *v11; // r8

  Scaleform::RadixTree<Scaleform::HeapMH::NodeMH,Scaleform::HeapMH::TreeNodeAccessor>::Remove(
    (Scaleform::RadixTree<Scaleform::HeapPT::TreeSeg,Scaleform::HeapPT::Granulator::SegTreeAccessor> *)&Scaleform::HeapMH::GlobalRootMH->HeapTree,
    (Scaleform::HeapPT::TreeSeg *)node);
  v7 = node->pHeap & 3;
  if ( v7 == 3 )
    Align = node->Align;
  else
    Align = 1i64 << ((unsigned __int8)v7 + 2);
  v9 = 32i64;
  if ( Align > 0x10 )
    v9 = 40i64;
  pSysAlloc = this->pSysAlloc;
  --this->UseCount;
  v11 = (char *)node + (unsigned int)v9 - (_QWORD)ptr;
  this->Footprint -= (unsigned __int64)v11;
  this->UsedSpace += v9 - (_QWORD)v11;
  ((void (__fastcall *)(Scaleform::SysAlloc *, void *))pSysAlloc->Free)(pSysAlloc, ptr);
}

void __fastcall Scaleform::HeapMH::AllocEngineMH::Free(
        Scaleform::HeapMH::AllocEngineMH *this,
        Scaleform::HeapMH::PageMH *page,
        void *ptr,
        bool globalLocked)
{
  int UseCount; // ecx
  Scaleform::HeapMH::MagicHeader *Header1; // rax
  Scaleform::HeapMH::MagicHeader *Header2; // rax
  Scaleform::HeapMH::MagicHeadersInfo v10; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+80h] [rbp+8h] BYREF

  Scaleform::HeapMH::AllocBitSet2MH::Free(&this->Allocator, page, ptr, &v10, &v11);
  UseCount = 0;
  this->UsedSpace -= v11;
  Header1 = v10.Header1;
  if ( v10.Header1 )
  {
    --v10.Header1->UseCount;
    UseCount = Header1->UseCount;
  }
  Header2 = v10.Header2;
  if ( v10.Header2 )
  {
    --v10.Header2->UseCount;
    UseCount = Header2->UseCount;
  }
  if ( !UseCount )
    Scaleform::HeapMH::AllocEngineMH::freePage(this, page, globalLocked);
  --this->UseCount;
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall Scaleform::HeapMH::AllocEngineMH::GetPageInfoWithSize(
        Scaleform::HeapMH::AllocEngineMH *this,
        Scaleform::HeapMH::NodeMH *node,
        const void *ptr,
        Scaleform::HeapMH::PageInfoMH *info)
{
  info->Page = 0i64;
  info->Node = node;
  info->UsableSize = (char *)node - (_BYTE *)ptr;
}

void __fastcall Scaleform::HeapMH::AllocEngineMH::GetPageInfoWithSize(
        Scaleform::HeapMH::AllocEngineMH *this,
        Scaleform::HeapMH::PageMH *page,
        const void *ptr,
        Scaleform::HeapMH::PageInfoMH *info)
{
  unsigned __int64 UsableSize; // rax

  info->Page = 0i64;
  info->Node = 0i64;
  info->UsableSize = 0i64;
  UsableSize = Scaleform::HeapMH::AllocBitSet2MH::GetUsableSize(&this->Allocator, page, ptr);
  info->Page = page;
  info->UsableSize = UsableSize;
}

void *__fastcall Scaleform::HeapMH::AllocEngineMH::ReallocGeneral(
        Scaleform::HeapMH::AllocEngineMH *this,
        Scaleform::HeapMH::PageMH *page,
        void *oldPtr,
        unsigned __int64 newSize,
        Scaleform::HeapMH::PageInfoMH *newInfo,
        bool globalLocked)
{
  void *result; // rax
  void *v10; // rbx
  unsigned __int64 UsableSize; // rax
  unsigned __int64 v12; // r8

  result = Scaleform::HeapMH::AllocEngineMH::Alloc(this, newSize, newInfo, globalLocked);
  v10 = result;
  if ( result )
  {
    UsableSize = Scaleform::HeapMH::AllocBitSet2MH::GetUsableSize(&this->Allocator, page, oldPtr);
    v12 = newInfo->UsableSize;
    if ( UsableSize < v12 )
      v12 = UsableSize;
    memmove(v10, oldPtr, v12);
    Scaleform::HeapMH::AllocEngineMH::Free(this, page, oldPtr, globalLocked);
    return v10;
  }
  return result;
}

void *__fastcall Scaleform::HeapMH::AllocEngineMH::ReallocInNode(
        Scaleform::HeapMH::AllocEngineMH *this,
        Scaleform::HeapMH::NodeMH *node,
        void *oldPtr,
        unsigned __int64 newSize,
        Scaleform::HeapMH::PageInfoMH *newInfo,
        bool globalLocked)
{
  unsigned __int64 v7; // rdi
  Scaleform::HeapMH::RootMH *v10; // rbx
  void *v11; // rdi

  v7 = (newSize + 7) & 0xFFFFFFFFFFFFFFF8ui64;
  if ( globalLocked )
    return Scaleform::HeapMH::AllocEngineMH::reallocInNodeNoLock(
             this,
             node,
             oldPtr,
             (newSize + 7) & 0xFFFFFFFFFFFFFFF8ui64,
             newInfo);
  v10 = Scaleform::HeapMH::GlobalRootMH;
  Scaleform::Lock::DoLock(&Scaleform::HeapMH::GlobalRootMH->RootLock.mLock);
  v11 = Scaleform::HeapMH::AllocEngineMH::reallocInNodeNoLock(this, node, oldPtr, v7, newInfo);
  Scaleform::Lock::Unlock(&v10->RootLock.mLock);
  return v11;
}

void *__fastcall Scaleform::HeapMH::AllocEngineMH::ReallocInPage(
        Scaleform::HeapMH::AllocEngineMH *this,
        Scaleform::HeapMH::PageMH *page,
        void *oldPtr,
        unsigned __int64 newSize,
        Scaleform::HeapMH::PageInfoMH *newInfo)
{
  unsigned __int64 v6; // rbx
  void *result; // rax
  void *v8; // rdx
  Scaleform::HeapMH::PageInfoMH *v9; // rcx
  Scaleform::HeapMH::PageMH *v10; // rax
  __int64 v11; // rbx
  Scaleform::HeapMH::MagicHeadersInfo v12; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+98h] [rbp+20h] BYREF

  if ( newSize >= 0x800 )
    return 0i64;
  v6 = (newSize + 15) & 0xFFFFFFFFFFFFFFF0ui64;
  result = Scaleform::HeapMH::AllocBitSet2MH::ReallocInPlace(&this->Allocator, page, oldPtr, v6, &v13, &v12);
  v8 = result;
  if ( result )
  {
    v9 = newInfo;
    v10 = v12.Page;
    newInfo->UsableSize = v6;
    v11 = v6 - v13;
    v9->Page = v10;
    result = v8;
    v9->Node = 0i64;
    this->UsedSpace += v11;
  }
  return result;
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

unsigned __int8 *__fastcall Scaleform::HeapMH::AllocEngineMH::allocDirect(
        Scaleform::HeapMH::AllocEngineMH *this,
        unsigned __int64 size,
        unsigned __int64 alignSize,
        bool *limHandlerOK,
        Scaleform::HeapMH::PageInfoMH *info)
{
  unsigned __int64 Limit; // rcx
  unsigned __int64 v7; // rsi
  __int64 v8; // r14
  Scaleform::HeapMH::RootMH *v11; // rbx
  unsigned __int8 *result; // rax
  unsigned __int8 *v13; // rbx

  Limit = this->Limit;
  v7 = (size + 7) & 0xFFFFFFFFFFFFFFF8ui64;
  v8 = 32i64;
  if ( alignSize > 0x10 )
    v8 = 40i64;
  if ( Limit && v7 + v8 + this->Footprint > Limit && this->pLimHandler )
  {
    v11 = Scaleform::HeapMH::GlobalRootMH;
    Scaleform::Lock::Unlock(&Scaleform::HeapMH::GlobalRootMH->RootLock.mLock);
    ++*((_DWORD *)this->pLimHandler + 2);
    *limHandlerOK = (*(__int64 (__fastcall **)(void *, Scaleform::MemoryHeapMH *, unsigned __int64))(*(_QWORD *)this->pLimHandler + 8i64))(
                      this->pLimHandler,
                      this->pHeap,
                      v7 + v8 + this->Footprint - this->Limit);
    --*((_DWORD *)this->pLimHandler + 2);
    Scaleform::Lock::DoLock(&v11->RootLock.mLock);
  }
  *limHandlerOK = 0;
  result = (unsigned __int8 *)this->pSysAlloc->Alloc(this->pSysAlloc, v8 + v7, alignSize);
  v13 = result;
  if ( result )
  {
    info->Node = Scaleform::HeapMH::RootMH::AddToGlobalTree(
                   Scaleform::HeapMH::GlobalRootMH,
                   result,
                   v7,
                   alignSize,
                   this->pHeap);
    info->UsableSize = v7;
    info->Page = 0i64;
    this->Footprint += v8 + v7;
    result = v13;
    ++this->UseCount;
    this->UsedSpace += v7;
    *limHandlerOK = 1;
  }
  return result;
}

Scaleform::HeapMH::BinNodeMH *__fastcall Scaleform::HeapMH::AllocEngineMH::allocFromPage(
        Scaleform::HeapMH::AllocEngineMH *this,
        unsigned __int64 size,
        unsigned __int64 alignSize,
        Scaleform::HeapMH::PageInfoMH *info,
        bool globalLocked)
{
  bool v5; // di
  Scaleform::HeapMH::BinNodeMH *v10; // rcx
  Scaleform::HeapMH::BinNodeMH *result; // rax
  Scaleform::HeapMH::MagicHeadersInfo headers; // [rsp+20h] [rbp-58h] BYREF
  bool limHandlerOK; // [rsp+80h] [rbp+8h] BYREF

  v5 = globalLocked;
  limHandlerOK = 0;
  while ( 1 )
  {
    v10 = Scaleform::HeapMH::AllocBitSet2MH::Alloc(&this->Allocator, size, alignSize, &headers);
    if ( v10 )
      break;
    if ( v5 )
      Scaleform::HeapMH::AllocEngineMH::allocPageLocked(this, &limHandlerOK);
    else
      Scaleform::HeapMH::AllocEngineMH::allocPageUnlocked(this, &limHandlerOK);
    if ( !limHandlerOK )
      return 0i64;
  }
  if ( headers.Header1 )
    ++headers.Header1->UseCount;
  if ( headers.Header2 )
    ++headers.Header2->UseCount;
  info->Page = headers.Page;
  result = v10;
  info->UsableSize = size;
  info->Node = 0i64;
  ++this->UseCount;
  this->UsedSpace += size;
  return result;
}

Scaleform::HeapMH::BinNodeMH *__fastcall Scaleform::HeapMH::AllocEngineMH::allocFromPage(
        Scaleform::HeapMH::AllocEngineMH *this,
        unsigned __int64 size,
        Scaleform::HeapMH::PageInfoMH *info,
        bool globalLocked)
{
  Scaleform::HeapMH::BinNodeMH *v8; // rcx
  Scaleform::HeapMH::BinNodeMH *result; // rax
  Scaleform::HeapMH::MagicHeadersInfo headers; // [rsp+20h] [rbp-58h] BYREF
  bool limHandlerOK; // [rsp+80h] [rbp+8h] BYREF

  limHandlerOK = 0;
  while ( 1 )
  {
    v8 = Scaleform::HeapMH::AllocBitSet2MH::Alloc(&this->Allocator, size, &headers);
    if ( v8 )
      break;
    if ( globalLocked )
      Scaleform::HeapMH::AllocEngineMH::allocPageLocked(this, &limHandlerOK);
    else
      Scaleform::HeapMH::AllocEngineMH::allocPageUnlocked(this, &limHandlerOK);
    if ( !limHandlerOK )
      return 0i64;
  }
  if ( headers.Header1 )
    ++headers.Header1->UseCount;
  if ( headers.Header2 )
    ++headers.Header2->UseCount;
  info->Page = headers.Page;
  result = v8;
  info->UsableSize = size;
  info->Node = 0i64;
  ++this->UseCount;
  this->UsedSpace += size;
  return result;
}

Scaleform::HeapMH::PageMH *__fastcall Scaleform::HeapMH::AllocEngineMH::allocPageLocked(
        Scaleform::HeapMH::AllocEngineMH *this,
        bool *limHandlerOK)
{
  unsigned __int64 Limit; // rcx
  Scaleform::HeapMH::RootMH *v5; // rbx
  Scaleform::HeapMH::PageMH *result; // rax
  Scaleform::HeapMH::PageMH *v7; // rbx
  unsigned int PageIndex; // eax

  Limit = this->Limit;
  if ( Limit && this->Footprint + 4096 > Limit && this->pLimHandler )
  {
    v5 = Scaleform::HeapMH::GlobalRootMH;
    Scaleform::Lock::Unlock(&Scaleform::HeapMH::GlobalRootMH->RootLock.mLock);
    ++*((_DWORD *)this->pLimHandler + 2);
    *limHandlerOK = (*(__int64 (__fastcall **)(void *, Scaleform::MemoryHeapMH *, unsigned __int64))(*(_QWORD *)this->pLimHandler + 8i64))(
                      this->pLimHandler,
                      this->pHeap,
                      this->Footprint - this->Limit + 4096);
    --*((_DWORD *)this->pLimHandler + 2);
    Scaleform::Lock::DoLock(&v5->RootLock.mLock);
  }
  *limHandlerOK = 0;
  result = Scaleform::HeapMH::RootMH::AllocPage(Scaleform::HeapMH::GlobalRootMH, this->pHeap);
  v7 = result;
  if ( result )
  {
    PageIndex = Scaleform::HeapMH::RootMH::GetPageIndex(Scaleform::HeapMH::GlobalRootMH, result);
    Scaleform::HeapMH::AllocBitSet2MH::InitPage(&this->Allocator, v7, PageIndex);
    this->Footprint += 4096i64;
    v7->pNext = this->Pages.Root.pNext;
    v7->pPrev = (Scaleform::HeapMH::PageMH *)&this->Pages;
    this->Pages.Root.pNext->pPrev = v7;
    result = v7;
    this->Pages.Root.pNext = v7;
    *limHandlerOK = 1;
  }
  return result;
}

Scaleform::HeapMH::PageMH *__fastcall Scaleform::HeapMH::AllocEngineMH::allocPageUnlocked(
        Scaleform::HeapMH::AllocEngineMH *this,
        bool *limHandlerOK)
{
  unsigned __int64 Limit; // rcx
  _DWORD *pLimHandler; // rax
  Scaleform::HeapMH::RootMH *v6; // rbx
  const Scaleform::HeapMH::PageMH *v7; // rax
  Scaleform::HeapMH::PageMH *v8; // rsi
  unsigned int PageIndex; // eax

  Limit = this->Limit;
  if ( Limit )
  {
    if ( this->Footprint + 4096 > Limit )
    {
      pLimHandler = this->pLimHandler;
      if ( pLimHandler )
      {
        ++pLimHandler[2];
        *limHandlerOK = (*(__int64 (__fastcall **)(void *, Scaleform::MemoryHeapMH *, unsigned __int64))(*(_QWORD *)this->pLimHandler + 8i64))(
                          this->pLimHandler,
                          this->pHeap,
                          this->Footprint - this->Limit + 4096);
        --*((_DWORD *)this->pLimHandler + 2);
      }
    }
  }
  *limHandlerOK = 0;
  v6 = Scaleform::HeapMH::GlobalRootMH;
  Scaleform::Lock::DoLock(&Scaleform::HeapMH::GlobalRootMH->RootLock.mLock);
  v7 = Scaleform::HeapMH::RootMH::AllocPage(Scaleform::HeapMH::GlobalRootMH, this->pHeap);
  v8 = (Scaleform::HeapMH::PageMH *)v7;
  if ( v7 )
  {
    PageIndex = Scaleform::HeapMH::RootMH::GetPageIndex(Scaleform::HeapMH::GlobalRootMH, v7);
    Scaleform::HeapMH::AllocBitSet2MH::InitPage(&this->Allocator, v8, PageIndex);
    this->Footprint += 4096i64;
    v8->pNext = this->Pages.Root.pNext;
    v8->pPrev = (Scaleform::HeapMH::PageMH *)&this->Pages;
    this->Pages.Root.pNext->pPrev = v8;
    this->Pages.Root.pNext = v8;
    *limHandlerOK = 1;
  }
  Scaleform::Lock::Unlock(&v6->RootLock.mLock);
  return v8;
}

void __fastcall Scaleform::HeapMH::AllocEngineMH::freePage(
        Scaleform::HeapMH::AllocEngineMH *this,
        Scaleform::HeapMH::PageMH *page,
        bool globalLocked)
{
  Scaleform::HeapMH::RootMH *v5; // rbx

  if ( globalLocked )
  {
    Scaleform::HeapMH::AllocBitSet2MH::ReleasePage(&this->Allocator, page->Start);
    page->pPrev->pNext = page->pNext;
    page->pNext->Scaleform::ListNode<Scaleform::HeapMH::PageMH>::$051E83CFEAEBEE2AA5A80EEEA70A7973::pPrev = page->pPrev;
    Scaleform::HeapMH::RootMH::FreePage(Scaleform::HeapMH::GlobalRootMH, page);
  }
  else
  {
    v5 = Scaleform::HeapMH::GlobalRootMH;
    Scaleform::Lock::DoLock(&Scaleform::HeapMH::GlobalRootMH->RootLock.mLock);
    Scaleform::HeapMH::AllocBitSet2MH::ReleasePage(&this->Allocator, page->Start);
    page->pPrev->pNext = page->pNext;
    page->pNext->Scaleform::ListNode<Scaleform::HeapMH::PageMH>::$051E83CFEAEBEE2AA5A80EEEA70A7973::pPrev = page->pPrev;
    Scaleform::HeapMH::RootMH::FreePage(Scaleform::HeapMH::GlobalRootMH, page);
    Scaleform::Lock::Unlock(&v5->RootLock.mLock);
  }
  this->Footprint -= 4096i64;
}

unsigned __int8 *__fastcall Scaleform::HeapMH::AllocEngineMH::reallocInNodeNoLock(
        Scaleform::HeapMH::AllocEngineMH *this,
        Scaleform::HeapMH::NodeMH *node0,
        void *oldPtr,
        unsigned __int64 newSize,
        Scaleform::HeapMH::PageInfoMH *newInfo)
{
  unsigned __int64 v6; // rax
  unsigned __int64 Align; // rbp
  __int64 v9; // r15
  unsigned __int64 v10; // r12
  char *v11; // rdi
  unsigned __int64 v12; // r14
  unsigned __int64 Limit; // rcx
  Scaleform::HeapMH::RootMH *v14; // rbx
  unsigned __int8 *v15; // rax
  unsigned __int8 *v16; // rbx

  v6 = node0->pHeap & 3;
  if ( v6 == 3 )
    Align = node0->Align;
  else
    Align = 1i64 << ((unsigned __int8)v6 + 2);
  v9 = 32i64;
  if ( Align > 0x10 )
    v9 = 40i64;
  v10 = (newSize + 7) & 0xFFFFFFFFFFFFFFF8ui64;
  v11 = (char *)node0 + (unsigned int)v9 - (_QWORD)oldPtr;
  v12 = v9 + v10;
  if ( v9 + v10 > (unsigned __int64)v11 )
  {
    Limit = this->Limit;
    if ( Limit )
    {
      if ( v12 + this->Footprint - (_QWORD)v11 > Limit && this->pLimHandler )
      {
        v14 = Scaleform::HeapMH::GlobalRootMH;
        Scaleform::Lock::Unlock(&Scaleform::HeapMH::GlobalRootMH->RootLock.mLock);
        ++*((_DWORD *)this->pLimHandler + 2);
        (*(void (__fastcall **)(void *, Scaleform::MemoryHeapMH *, unsigned __int64))(*(_QWORD *)this->pLimHandler + 8i64))(
          this->pLimHandler,
          this->pHeap,
          v12 + this->Footprint - this->Limit - (_QWORD)v11);
        --*((_DWORD *)this->pLimHandler + 2);
        Scaleform::Lock::DoLock(&v14->RootLock.mLock);
      }
    }
  }
  Scaleform::RadixTree<Scaleform::HeapMH::NodeMH,Scaleform::HeapMH::TreeNodeAccessor>::Remove(
    (Scaleform::RadixTree<Scaleform::HeapPT::TreeSeg,Scaleform::HeapPT::Granulator::SegTreeAccessor> *)&Scaleform::HeapMH::GlobalRootMH->HeapTree,
    (Scaleform::HeapPT::TreeSeg *)node0);
  v15 = (unsigned __int8 *)this->pSysAlloc->Realloc(this->pSysAlloc, oldPtr, v11, v9 + v10, Align);
  v16 = v15;
  if ( v15 )
  {
    newInfo->Node = Scaleform::HeapMH::RootMH::AddToGlobalTree(
                      Scaleform::HeapMH::GlobalRootMH,
                      v15,
                      v10,
                      Align,
                      this->pHeap);
    newInfo->UsableSize = v10;
    newInfo->Page = 0i64;
    this->Footprint += v12 - (_QWORD)v11;
    this->UsedSpace += v12 - (_QWORD)v11;
  }
  else
  {
    Scaleform::HeapMH::RootMH::AddToGlobalTree(
      Scaleform::HeapMH::GlobalRootMH,
      (unsigned __int8 *)oldPtr,
      (unsigned __int64)&v11[-v9],
      Align,
      this->pHeap);
  }
  return v16;
}

