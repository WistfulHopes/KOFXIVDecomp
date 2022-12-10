#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_heaptypes.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_allocengine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_allocbitset2.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_heapbitset2.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_freebin.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_root.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"

unsigned long long Scaleform::HeapMH::HeapRootMemMH[11]; // 0x140A721D0
Scaleform::MemoryHeap * Scaleform::MemoryHeap::CreateRootHeapMH(const Scaleform::MemoryHeap::HeapDesc & desc); // 0x1403225C0
bool Scaleform::MemoryHeap::ReleaseRootHeapMH(); // 0x140322F70
Scaleform::MemoryHeapMH::MemoryHeapMH(); // 0x140322000
bool Scaleform::MemoryHeapMH::ArenaIsEmpty(unsigned long long __formal); // 0x1400B8180
Scaleform::MemoryHeap * Scaleform::MemoryHeapMH::CreateHeap(const char * name, const Scaleform::MemoryHeap::HeapDesc & desc); // 0x140322500
unsigned long long Scaleform::MemoryHeapMH::GetFootprint(); // 0x140322970
unsigned long long Scaleform::MemoryHeapMH::GetTotalFootprint(); // 0x140322AC0
unsigned long long Scaleform::MemoryHeapMH::GetUsedSpace(); // 0x140322CB0
unsigned long long Scaleform::MemoryHeapMH::GetTotalUsedSpace(); // 0x140322B60
void Scaleform::MemoryHeapMH::SetLimitHandler(Scaleform::MemoryHeap::LimitHandler * handler); // 0x140323060
void Scaleform::MemoryHeapMH::SetLimit(unsigned long long newLimit); // 0x140322FF0
void Scaleform::MemoryHeapMH::AddRef(); // 0x140322040
void Scaleform::MemoryHeapMH::Release(); // 0x140322E80
bool Scaleform::MemoryHeapMH::dumpMemoryLeaks(); // 0x14004BBE0
void Scaleform::MemoryHeapMH::destroyItself(); // 0x1403230B0
void * Scaleform::MemoryHeapMH::Alloc(unsigned long long size, const Scaleform::AllocInfo * info); // 0x140322120
void * Scaleform::MemoryHeapMH::Alloc(unsigned long long size, unsigned long long align, const Scaleform::AllocInfo * info); // 0x140322080
void * Scaleform::MemoryHeapMH::AllocAutoHeap(const void * thisPtr, unsigned long long size, const Scaleform::AllocInfo * info); // 0x140322330
void * Scaleform::MemoryHeapMH::AllocAutoHeap(const void * thisPtr, unsigned long long size, unsigned long long align, const Scaleform::AllocInfo * info); // 0x1403221B0
void Scaleform::MemoryHeapMH::Free(void * ptr); // 0x140322720
void * Scaleform::MemoryHeapMH::reallocMem(Scaleform::HeapMH::PageMH * page, void * oldPtr, unsigned long long newSize, bool globalLocked); // 0x140323210
void * Scaleform::MemoryHeapMH::Realloc(void * oldPtr, unsigned long long newSize); // 0x140322CF0
Scaleform::MemoryHeap * Scaleform::MemoryHeapMH::GetAllocHeapOrNULL(const void * thisPtr); // 0x1403228F0
unsigned long long Scaleform::MemoryHeapMH::GetUsableSize(const void * ptr); // 0x140322C00
void * Scaleform::MemoryHeapMH::AllocSysDirect(unsigned long long size); // 0x1403224B0
void Scaleform::MemoryHeapMH::FreeSysDirect(void * ptr, unsigned long long size); // 0x140322890
bool Scaleform::MemoryHeapMH::GetStats(Scaleform::StatBag * bag); // 0x140322A40
void Scaleform::MemoryHeapMH::getUserDebugStats(Scaleform::MemoryHeap::RootStats * stats); // 0x140323120
void Scaleform::MemoryHeapMH::GetRootStats(Scaleform::MemoryHeap::RootStats * stats); // 0x1403229B0
void Scaleform::MemoryHeapMH::CreateArena(unsigned long long __formal, Scaleform::SysAllocPaged * __formal); // 0x14002E7C0
bool Scaleform::SysAlloc::initHeapEngine(const void * heapDesc); // 0x1403231D0
bool Scaleform::SysAlloc::shutdownHeapEngine(); // 0x1403232F0//decompilation failure at 140A721D0!
void __fastcall Scaleform::MemoryHeapMH::MemoryHeapMH(Scaleform::MemoryHeapMH *this)
{
  Scaleform::MemoryHeap::MemoryHeap(this);
  this->__vftable = (Scaleform::MemoryHeapMH_vtbl *)&Scaleform::MemoryHeapMH::`vftable';
  this->pEngine = 0i64;
  this->pDebugStorage = 0i64;
}

void __fastcall Scaleform::MemoryHeapMH::AddRef(Scaleform::MemoryHeapMH *this)
{
  Scaleform::HeapMH::RootMH *v1; // rbx

  v1 = Scaleform::HeapMH::GlobalRootMH;
  Scaleform::Lock::DoLock(&Scaleform::HeapMH::GlobalRootMH->RootLock.mLock);
  ++this->RefCount;
  Scaleform::Lock::Unlock(&v1->RootLock.mLock);
}

void *__fastcall Scaleform::MemoryHeapMH::Alloc(
        Scaleform::MemoryHeapMH *this,
        unsigned __int64 size,
        unsigned __int64 align,
        const Scaleform::AllocInfo *info)
{
  Scaleform::Lock *p_HeapLock; // rbx
  void *v8; // rdi
  Scaleform::HeapMH::PageInfoMH infoa; // [rsp+30h] [rbp-28h] BYREF

  if ( !this->UseLocks )
    return Scaleform::HeapMH::AllocEngineMH::Alloc(this->pEngine, size, align, &infoa, 0);
  p_HeapLock = &this->HeapLock;
  Scaleform::Lock::DoLock(&this->HeapLock);
  v8 = Scaleform::HeapMH::AllocEngineMH::Alloc(this->pEngine, size, align, &infoa, 0);
  Scaleform::Lock::Unlock(p_HeapLock);
  return v8;
}

void *__fastcall Scaleform::MemoryHeapMH::Alloc(
        Scaleform::MemoryHeapMH *this,
        unsigned __int64 size,
        const Scaleform::AllocInfo *info)
{
  Scaleform::Lock *p_HeapLock; // rbx
  void *v6; // rdi
  Scaleform::HeapMH::PageInfoMH infoa; // [rsp+20h] [rbp-28h] BYREF

  if ( !this->UseLocks )
    return Scaleform::HeapMH::AllocEngineMH::Alloc(this->pEngine, size, &infoa, 0);
  p_HeapLock = &this->HeapLock;
  Scaleform::Lock::DoLock(&this->HeapLock);
  v6 = Scaleform::HeapMH::AllocEngineMH::Alloc(this->pEngine, size, &infoa, 0);
  Scaleform::Lock::Unlock(p_HeapLock);
  return v6;
}

void *__fastcall Scaleform::MemoryHeapMH::AllocAutoHeap(
        Scaleform::MemoryHeapMH *this,
        const void *thisPtr,
        unsigned __int64 size,
        unsigned __int64 align)
{
  Scaleform::HeapMH::PageMH *v7; // rax
  Scaleform::MemoryHeapMH *pHeap; // rdi
  void *v9; // rax
  Scaleform::Lock *p_HeapLock; // rcx
  void *v11; // rdi
  Scaleform::HeapMH::RootMH *v13; // rbx
  unsigned __int64 v14; // rsi
  Scaleform::Lock *v15; // rdi
  Scaleform::HeapMH::RootMH *v16; // rbx
  void *v17; // rsi
  Scaleform::Lock *p_mLock; // rcx
  Scaleform::HeapMH::RootMH *v19; // rbx
  Scaleform::HeapMH::PageInfoMH v20; // [rsp+30h] [rbp-28h] BYREF

  v7 = Scaleform::HeapMH::RootMH::ResolveAddress(Scaleform::HeapMH::GlobalRootMH, (unsigned __int64)thisPtr);
  if ( v7 )
  {
    pHeap = v7->pHeap;
    if ( pHeap->UseLocks )
    {
      Scaleform::Lock::DoLock(&pHeap->HeapLock);
      v9 = Scaleform::HeapMH::AllocEngineMH::Alloc(pHeap->pEngine, size, align, &v20, 0);
      p_HeapLock = &pHeap->HeapLock;
      v11 = v9;
      Scaleform::Lock::Unlock(p_HeapLock);
      return v11;
    }
    else
    {
      return Scaleform::HeapMH::AllocEngineMH::Alloc(pHeap->pEngine, size, align, &v20, 0);
    }
  }
  else
  {
    v13 = Scaleform::HeapMH::GlobalRootMH;
    Scaleform::Lock::DoLock(&Scaleform::HeapMH::GlobalRootMH->RootLock.mLock);
    v14 = Scaleform::RadixTree<Scaleform::HeapMH::NodeMH,Scaleform::HeapMH::TreeNodeAccessor>::FindGrEq(
            &Scaleform::HeapMH::GlobalRootMH->HeapTree,
            (unsigned __int64)thisPtr)->pHeap & 0xFFFFFFFFFFFFFFFCui64;
    Scaleform::Lock::Unlock(&v13->RootLock.mLock);
    if ( *(_BYTE *)(v14 + 200) )
    {
      v15 = (Scaleform::Lock *)(v14 + 152);
      Scaleform::Lock::DoLock((Scaleform::Lock *)(v14 + 152));
      v16 = Scaleform::HeapMH::GlobalRootMH;
      Scaleform::Lock::DoLock(&Scaleform::HeapMH::GlobalRootMH->RootLock.mLock);
      v17 = Scaleform::HeapMH::AllocEngineMH::Alloc(
              *(Scaleform::HeapMH::AllocEngineMH **)(v14 + 208),
              size,
              align,
              &v20,
              1);
      Scaleform::Lock::Unlock(&v16->RootLock.mLock);
      p_mLock = v15;
    }
    else
    {
      v19 = Scaleform::HeapMH::GlobalRootMH;
      Scaleform::Lock::DoLock(&Scaleform::HeapMH::GlobalRootMH->RootLock.mLock);
      v17 = Scaleform::HeapMH::AllocEngineMH::Alloc(
              *(Scaleform::HeapMH::AllocEngineMH **)(v14 + 208),
              size,
              align,
              &v20,
              1);
      p_mLock = &v19->RootLock.mLock;
    }
    Scaleform::Lock::Unlock(p_mLock);
    return v17;
  }
}

void *__fastcall Scaleform::MemoryHeapMH::AllocAutoHeap(
        Scaleform::MemoryHeapMH *this,
        const void *thisPtr,
        unsigned __int64 size,
        const Scaleform::AllocInfo *info)
{
  Scaleform::HeapMH::PageMH *v6; // rax
  Scaleform::MemoryHeapMH *pHeap; // rdi
  void *v8; // rax
  Scaleform::Lock *p_HeapLock; // rcx
  void *v10; // rdi
  Scaleform::HeapMH::RootMH *v12; // rbx
  unsigned __int64 v13; // rsi
  Scaleform::Lock *v14; // rdi
  Scaleform::HeapMH::RootMH *v15; // rbx
  void *v16; // rsi
  Scaleform::Lock *p_mLock; // rcx
  Scaleform::HeapMH::RootMH *v18; // rbx
  Scaleform::HeapMH::PageInfoMH infoa; // [rsp+20h] [rbp-28h] BYREF

  v6 = Scaleform::HeapMH::RootMH::ResolveAddress(Scaleform::HeapMH::GlobalRootMH, (unsigned __int64)thisPtr);
  if ( v6 )
  {
    pHeap = v6->pHeap;
    if ( pHeap->UseLocks )
    {
      Scaleform::Lock::DoLock(&pHeap->HeapLock);
      v8 = Scaleform::HeapMH::AllocEngineMH::Alloc(pHeap->pEngine, size, &infoa, 0);
      p_HeapLock = &pHeap->HeapLock;
      v10 = v8;
      Scaleform::Lock::Unlock(p_HeapLock);
      return v10;
    }
    else
    {
      return Scaleform::HeapMH::AllocEngineMH::Alloc(pHeap->pEngine, size, &infoa, 0);
    }
  }
  else
  {
    v12 = Scaleform::HeapMH::GlobalRootMH;
    Scaleform::Lock::DoLock(&Scaleform::HeapMH::GlobalRootMH->RootLock.mLock);
    v13 = Scaleform::RadixTree<Scaleform::HeapMH::NodeMH,Scaleform::HeapMH::TreeNodeAccessor>::FindGrEq(
            &Scaleform::HeapMH::GlobalRootMH->HeapTree,
            (unsigned __int64)thisPtr)->pHeap & 0xFFFFFFFFFFFFFFFCui64;
    Scaleform::Lock::Unlock(&v12->RootLock.mLock);
    if ( *(_BYTE *)(v13 + 200) )
    {
      v14 = (Scaleform::Lock *)(v13 + 152);
      Scaleform::Lock::DoLock((Scaleform::Lock *)(v13 + 152));
      v15 = Scaleform::HeapMH::GlobalRootMH;
      Scaleform::Lock::DoLock(&Scaleform::HeapMH::GlobalRootMH->RootLock.mLock);
      v16 = Scaleform::HeapMH::AllocEngineMH::Alloc(*(Scaleform::HeapMH::AllocEngineMH **)(v13 + 208), size, &infoa, 1);
      Scaleform::Lock::Unlock(&v15->RootLock.mLock);
      p_mLock = v14;
    }
    else
    {
      v18 = Scaleform::HeapMH::GlobalRootMH;
      Scaleform::Lock::DoLock(&Scaleform::HeapMH::GlobalRootMH->RootLock.mLock);
      v16 = Scaleform::HeapMH::AllocEngineMH::Alloc(*(Scaleform::HeapMH::AllocEngineMH **)(v13 + 208), size, &infoa, 1);
      p_mLock = &v18->RootLock.mLock;
    }
    Scaleform::Lock::Unlock(p_mLock);
    return v16;
  }
}

void *__fastcall Scaleform::MemoryHeapMH::AllocSysDirect(Scaleform::MemoryHeapMH *this, unsigned __int64 size)
{
  Scaleform::HeapMH::RootMH *v2; // rbx
  void *v4; // rdi

  v2 = Scaleform::HeapMH::GlobalRootMH;
  Scaleform::Lock::DoLock(&Scaleform::HeapMH::GlobalRootMH->RootLock.mLock);
  v4 = Scaleform::HeapMH::GlobalRootMH->pSysAlloc->Alloc(Scaleform::HeapMH::GlobalRootMH->pSysAlloc, size, 8i64);
  Scaleform::Lock::Unlock(&v2->RootLock.mLock);
  return v4;
}

char __fastcall Scaleform::Render::BlendModeEffect::canCacheAcrossTransform(const bool __formal)
{
  return 1;
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

Scaleform::MemoryHeapMH *__fastcall Scaleform::MemoryHeapMH::CreateHeap(
        Scaleform::MemoryHeapMH *this,
        const char *name,
        const Scaleform::MemoryHeap::HeapDesc *desc)
{
  Scaleform::HeapMH::RootMH *v3; // rbx
  Scaleform::MemoryHeapMH *Heap; // rdi

  v3 = Scaleform::HeapMH::GlobalRootMH;
  Scaleform::Lock::DoLock(&Scaleform::HeapMH::GlobalRootMH->RootLock.mLock);
  Heap = Scaleform::HeapMH::RootMH::CreateHeap(Scaleform::HeapMH::GlobalRootMH, name, this, desc);
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

Scaleform::MemoryHeap *__fastcall Scaleform::MemoryHeap::CreateRootHeapMH(const Scaleform::MemoryHeap::HeapDesc *desc)
{
  Scaleform::LockSafe *p_RootLock; // rbx
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  Scaleform::MemoryHeap::HeapDesc desca; // [rsp+20h] [rbp-48h] BYREF

  if ( !Scaleform::HeapMH::GlobalRootMH )
    return 0i64;
  p_RootLock = &Scaleform::HeapMH::GlobalRootMH->RootLock;
  Scaleform::Lock::DoLock(&Scaleform::HeapMH::GlobalRootMH->RootLock.mLock);
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
  Scaleform::Memory::pGlobalHeap = Scaleform::HeapMH::RootMH::CreateHeap(
                                     Scaleform::HeapMH::GlobalRootMH,
                                     "Global",
                                     0i64,
                                     &desca);
  Scaleform::Lock::Unlock(&p_RootLock->mLock);
  return Scaleform::Memory::pGlobalHeap;
}

Scaleform::HeapMH::NodeMH *__fastcall Scaleform::RadixTree<Scaleform::HeapMH::NodeMH,Scaleform::HeapMH::TreeNodeAccessor>::FindGrEq(
        Scaleform::RadixTree<Scaleform::HeapMH::NodeMH,Scaleform::HeapMH::TreeNodeAccessor> *this,
        unsigned __int64 key)
{
  Scaleform::HeapMH::NodeMH *Root; // r8
  Scaleform::HeapMH::NodeMH *v3; // rbx
  unsigned __int64 v4; // r9
  Scaleform::HeapMH::NodeMH *v6; // rax
  unsigned __int64 i; // r10
  char *v8; // rcx
  Scaleform::HeapMH::NodeMH *v9; // rdx
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
      v9 = Root->Child[1];
      Root = Root->Child[i >> 63];
      if ( v9 && v9 != Root )
        v6 = v9;
      if ( !Root )
        break;
    }
    for ( ; v6; v6 = *(Scaleform::HeapMH::NodeMH **)((char *)&v6->Parent + v11) )
    {
      if ( (unsigned __int64)v6 >= key && (unsigned __int64)v6 - key < v4 )
      {
        v4 = (unsigned __int64)v6 - key;
        v3 = v6;
      }
      v11 = 8i64;
      if ( !v6->Child[0] )
        v11 = 16i64;
    }
  }
  return v3;
}

void __fastcall Scaleform::MemoryHeapMH::Free(Scaleform::MemoryHeapMH *this, void *ptr)
{
  Scaleform::HeapMH::PageMH *v3; // rax
  Scaleform::HeapMH::PageMH *v4; // rdi
  unsigned __int64 pHeap; // rsi
  Scaleform::HeapMH::RootMH *v6; // rbx
  Scaleform::HeapMH::NodeMH *GrEq; // r14
  Scaleform::HeapMH::RootMH *v8; // rbx
  Scaleform::Lock *p_mLock; // rcx
  Scaleform::HeapMH::RootMH *v10; // rbx

  if ( ptr )
  {
    v3 = Scaleform::HeapMH::RootMH::ResolveAddress(Scaleform::HeapMH::GlobalRootMH, (unsigned __int64)ptr);
    v4 = v3;
    if ( v3 )
    {
      pHeap = (unsigned __int64)v3->pHeap;
      if ( *(_BYTE *)(pHeap + 200) )
      {
        Scaleform::Lock::DoLock((Scaleform::Lock *)(pHeap + 152));
        Scaleform::HeapMH::AllocEngineMH::Free(*(Scaleform::HeapMH::AllocEngineMH **)(pHeap + 208), v4, ptr, 0);
        Scaleform::Lock::Unlock((Scaleform::Lock *)(pHeap + 152));
      }
      else
      {
        Scaleform::HeapMH::AllocEngineMH::Free(*(Scaleform::HeapMH::AllocEngineMH **)(pHeap + 208), v3, ptr, 0);
      }
    }
    else
    {
      v6 = Scaleform::HeapMH::GlobalRootMH;
      Scaleform::Lock::DoLock(&Scaleform::HeapMH::GlobalRootMH->RootLock.mLock);
      GrEq = Scaleform::RadixTree<Scaleform::HeapMH::NodeMH,Scaleform::HeapMH::TreeNodeAccessor>::FindGrEq(
               &Scaleform::HeapMH::GlobalRootMH->HeapTree,
               (unsigned __int64)ptr);
      pHeap = GrEq->pHeap & 0xFFFFFFFFFFFFFFFCui64;
      Scaleform::Lock::Unlock(&v6->RootLock.mLock);
      if ( *(_BYTE *)(pHeap + 200) )
      {
        Scaleform::Lock::DoLock((Scaleform::Lock *)(pHeap + 152));
        v8 = Scaleform::HeapMH::GlobalRootMH;
        Scaleform::Lock::DoLock(&Scaleform::HeapMH::GlobalRootMH->RootLock.mLock);
        Scaleform::HeapMH::AllocEngineMH::Free(*(Scaleform::HeapMH::AllocEngineMH **)(pHeap + 208), GrEq, ptr, 1);
        Scaleform::Lock::Unlock(&v8->RootLock.mLock);
        p_mLock = (Scaleform::Lock *)(pHeap + 152);
      }
      else
      {
        v10 = Scaleform::HeapMH::GlobalRootMH;
        Scaleform::Lock::DoLock(&Scaleform::HeapMH::GlobalRootMH->RootLock.mLock);
        Scaleform::HeapMH::AllocEngineMH::Free(*(Scaleform::HeapMH::AllocEngineMH **)(pHeap + 208), GrEq, ptr, 1);
        p_mLock = &v10->RootLock.mLock;
      }
      Scaleform::Lock::Unlock(p_mLock);
    }
    if ( ptr == *(void **)(pHeap + 48) )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)pHeap + 64i64))(pHeap);
  }
}

void __fastcall Scaleform::MemoryHeapMH::FreeSysDirect(Scaleform::MemoryHeapMH *this, void *ptr, unsigned __int64 size)
{
  Scaleform::HeapMH::RootMH *v3; // rbx

  v3 = Scaleform::HeapMH::GlobalRootMH;
  Scaleform::Lock::DoLock(&Scaleform::HeapMH::GlobalRootMH->RootLock.mLock);
  Scaleform::HeapMH::GlobalRootMH->pSysAlloc->Free(Scaleform::HeapMH::GlobalRootMH->pSysAlloc, ptr, size, 8ui64);
  Scaleform::Lock::Unlock(&v3->RootLock.mLock);
}

Scaleform::MemoryHeapMH *__fastcall Scaleform::MemoryHeapMH::GetAllocHeapOrNULL(
        Scaleform::MemoryHeapMH *this,
        const void *thisPtr)
{
  Scaleform::HeapMH::PageMH *v3; // rax
  Scaleform::HeapMH::RootMH *v5; // rbx
  Scaleform::HeapMH::NodeMH *GrEq; // rax
  unsigned __int64 v7; // rdi

  v3 = Scaleform::HeapMH::RootMH::ResolveAddress(Scaleform::HeapMH::GlobalRootMH, (unsigned __int64)thisPtr);
  if ( v3 )
    return v3->pHeap;
  v5 = Scaleform::HeapMH::GlobalRootMH;
  Scaleform::Lock::DoLock(&Scaleform::HeapMH::GlobalRootMH->RootLock.mLock);
  GrEq = Scaleform::RadixTree<Scaleform::HeapMH::NodeMH,Scaleform::HeapMH::TreeNodeAccessor>::FindGrEq(
           &Scaleform::HeapMH::GlobalRootMH->HeapTree,
           (unsigned __int64)thisPtr);
  if ( GrEq )
    v7 = GrEq->pHeap & 0xFFFFFFFFFFFFFFFCui64;
  else
    v7 = 0i64;
  Scaleform::Lock::Unlock(&v5->RootLock.mLock);
  return (Scaleform::MemoryHeapMH *)v7;
}

unsigned __int64 __fastcall Scaleform::MemoryHeapMH::GetFootprint(Scaleform::MemoryHeapMH *this)
{
  Scaleform::Lock *p_HeapLock; // rbx
  unsigned __int64 Footprint; // rdi

  p_HeapLock = &this->HeapLock;
  Scaleform::Lock::DoLock(&this->HeapLock);
  Footprint = this->pEngine->Footprint;
  Scaleform::Lock::Unlock(p_HeapLock);
  return Footprint;
}

void __fastcall Scaleform::MemoryHeapMH::GetRootStats(
        Scaleform::MemoryHeapMH *this,
        Scaleform::MemoryHeap::RootStats *stats)
{
  unsigned __int64 v4; // rcx

  stats->UserDebugFootprint = 0i64;
  stats->UserDebugUsedSpace = 0i64;
  ((void (__fastcall *)(Scaleform::MemoryHeapMH *))this->getUserDebugStats)(this);
  stats->DebugInfoFootprint = 0i64;
  stats->DebugInfoUsedSpace = 0i64;
  stats->SysMemFootprint = stats->DebugInfoFootprint + this->GetTotalFootprint(this) + stats->UserDebugFootprint;
  v4 = stats->DebugInfoFootprint + this->GetTotalUsedSpace(this) + stats->UserDebugFootprint;
  stats->PageMapFootprint = 0i64;
  stats->PageMapUsedSpace = 0i64;
  stats->BookkeepingFootprint = 0i64;
  stats->BookkeepingUsedSpace = 0i64;
  stats->SysMemUsedSpace = v4;
}

char __fastcall Scaleform::MemoryHeapMH::GetStats(Scaleform::MemoryHeapMH *this, Scaleform::StatBag *bag)
{
  Scaleform::Lock *p_HeapLock; // rbx
  Scaleform::MemoryHeap *pNext; // rdi
  Scaleform::List<Scaleform::MemoryHeap,Scaleform::MemoryHeap,Scaleform::ListNode<Scaleform::MemoryHeap> > *p_ChildHeaps; // rax
  char **p_pName; // rsi

  p_HeapLock = &this->HeapLock;
  Scaleform::Lock::DoLock(&this->HeapLock);
  pNext = this->ChildHeaps.Root.pNext;
  p_ChildHeaps = &this->ChildHeaps;
  p_pName = &this->Info.pName;
  if ( !p_ChildHeaps )
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

unsigned __int64 __fastcall Scaleform::MemoryHeapMH::GetTotalFootprint(Scaleform::MemoryHeapMH *this)
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
    Footprint = this->pEngine->Footprint;
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

unsigned __int64 __fastcall Scaleform::MemoryHeapMH::GetTotalUsedSpace(Scaleform::MemoryHeapMH *this)
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
    UsedSpace = this->pEngine->UsedSpace;
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

unsigned __int64 __fastcall Scaleform::MemoryHeapMH::GetUsableSize(Scaleform::MemoryHeapMH *this, const void *ptr)
{
  Scaleform::HeapMH::PageMH *v3; // rax
  Scaleform::HeapMH::RootMH *v5; // rbx
  Scaleform::HeapMH::NodeMH *GrEq; // rax
  unsigned __int64 UsableSize; // rdi
  Scaleform::HeapMH::PageInfoMH info; // [rsp+20h] [rbp-28h] BYREF

  v3 = Scaleform::HeapMH::RootMH::ResolveAddress(Scaleform::HeapMH::GlobalRootMH, (unsigned __int64)ptr);
  if ( v3 )
  {
    Scaleform::HeapMH::AllocEngineMH::GetPageInfoWithSize(v3->pHeap->pEngine, v3, ptr, &info);
    return info.UsableSize;
  }
  else
  {
    v5 = Scaleform::HeapMH::GlobalRootMH;
    Scaleform::Lock::DoLock(&Scaleform::HeapMH::GlobalRootMH->RootLock.mLock);
    GrEq = Scaleform::RadixTree<Scaleform::HeapMH::NodeMH,Scaleform::HeapMH::TreeNodeAccessor>::FindGrEq(
             &Scaleform::HeapMH::GlobalRootMH->HeapTree,
             (unsigned __int64)ptr);
    Scaleform::HeapMH::AllocEngineMH::GetPageInfoWithSize(
      *(Scaleform::HeapMH::AllocEngineMH **)((GrEq->pHeap & 0xFFFFFFFFFFFFFFFCui64) + 208),
      GrEq,
      ptr,
      &info);
    UsableSize = info.UsableSize;
    Scaleform::Lock::Unlock(&v5->RootLock.mLock);
    return UsableSize;
  }
}

unsigned __int64 __fastcall Scaleform::MemoryHeapMH::GetUsedSpace(Scaleform::MemoryHeapMH *this)
{
  Scaleform::Lock *p_HeapLock; // rbx
  unsigned __int64 UsedSpace; // rdi

  p_HeapLock = &this->HeapLock;
  Scaleform::Lock::DoLock(&this->HeapLock);
  UsedSpace = this->pEngine->UsedSpace;
  Scaleform::Lock::Unlock(p_HeapLock);
  return UsedSpace;
}

void *__fastcall Scaleform::MemoryHeapMH::Realloc(
        Scaleform::MemoryHeapMH *this,
        void *oldPtr,
        unsigned __int64 newSize)
{
  Scaleform::HeapMH::PageMH *v5; // rax
  Scaleform::HeapMH::PageMH *v6; // rbp
  Scaleform::MemoryHeapMH *pHeap; // rdi
  void *v8; // rax
  Scaleform::Lock *p_HeapLock; // rcx
  void *v10; // rdi
  Scaleform::HeapMH::RootMH *v12; // rbx
  Scaleform::HeapMH::NodeMH *GrEq; // r15
  unsigned __int64 v14; // rbp
  Scaleform::HeapMH::RootMH *v15; // rbx
  void *v16; // rsi
  Scaleform::HeapMH::RootMH *v17; // rbx
  void *v18; // rdi
  Scaleform::HeapMH::PageInfoMH newInfo; // [rsp+30h] [rbp-38h] BYREF

  v5 = Scaleform::HeapMH::RootMH::ResolveAddress(Scaleform::HeapMH::GlobalRootMH, (unsigned __int64)oldPtr);
  v6 = v5;
  if ( v5 )
  {
    pHeap = v5->pHeap;
    if ( pHeap->UseLocks )
    {
      Scaleform::Lock::DoLock(&pHeap->HeapLock);
      v8 = Scaleform::MemoryHeapMH::reallocMem(pHeap, v6, oldPtr, newSize, 0);
      p_HeapLock = &pHeap->HeapLock;
      v10 = v8;
      Scaleform::Lock::Unlock(p_HeapLock);
      return v10;
    }
    else
    {
      return Scaleform::MemoryHeapMH::reallocMem(pHeap, v5, oldPtr, newSize, 0);
    }
  }
  else
  {
    v12 = Scaleform::HeapMH::GlobalRootMH;
    Scaleform::Lock::DoLock(&Scaleform::HeapMH::GlobalRootMH->RootLock.mLock);
    GrEq = Scaleform::RadixTree<Scaleform::HeapMH::NodeMH,Scaleform::HeapMH::TreeNodeAccessor>::FindGrEq(
             &Scaleform::HeapMH::GlobalRootMH->HeapTree,
             (unsigned __int64)oldPtr);
    v14 = GrEq->pHeap & 0xFFFFFFFFFFFFFFFCui64;
    Scaleform::Lock::Unlock(&v12->RootLock.mLock);
    if ( *(_BYTE *)(v14 + 200) )
    {
      Scaleform::Lock::DoLock((Scaleform::Lock *)(v14 + 152));
      v15 = Scaleform::HeapMH::GlobalRootMH;
      Scaleform::Lock::DoLock(&Scaleform::HeapMH::GlobalRootMH->RootLock.mLock);
      v16 = Scaleform::HeapMH::AllocEngineMH::ReallocInNode(
              *(Scaleform::HeapMH::AllocEngineMH **)(v14 + 208),
              GrEq,
              oldPtr,
              newSize,
              &newInfo,
              1);
      Scaleform::Lock::Unlock(&v15->RootLock.mLock);
      Scaleform::Lock::Unlock((Scaleform::Lock *)(v14 + 152));
      return v16;
    }
    else
    {
      v17 = Scaleform::HeapMH::GlobalRootMH;
      Scaleform::Lock::DoLock(&Scaleform::HeapMH::GlobalRootMH->RootLock.mLock);
      v18 = Scaleform::HeapMH::AllocEngineMH::ReallocInNode(
              *(Scaleform::HeapMH::AllocEngineMH **)(v14 + 208),
              GrEq,
              oldPtr,
              newSize,
              &newInfo,
              1);
      Scaleform::Lock::Unlock(&v17->RootLock.mLock);
      return v18;
    }
  }
}

void __fastcall Scaleform::MemoryHeapMH::Release(Scaleform::MemoryHeapMH *this)
{
  Scaleform::MemoryHeap *pParent; // r14
  Scaleform::Lock *p_HeapLock; // rbx
  Scaleform::HeapMH::RootMH *v4; // rdi
  Scaleform::HeapMH::RootMH *v6; // rbx

  pParent = this->Info.pParent;
  if ( pParent )
  {
    p_HeapLock = &pParent->HeapLock;
    Scaleform::Lock::DoLock(&pParent->HeapLock);
    v4 = Scaleform::HeapMH::GlobalRootMH;
    Scaleform::Lock::DoLock(&Scaleform::HeapMH::GlobalRootMH->RootLock.mLock);
    if ( this->RefCount-- == 1 )
    {
      this->dumpMemoryLeaks(this);
      this->pPrev->Scaleform::MemoryHeap::pNext = this->pNext;
      this->pNext->Scaleform::MemoryHeap::pPrev = this->pPrev;
      Scaleform::HeapMH::RootMH::DestroyHeap(Scaleform::HeapMH::GlobalRootMH, this);
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
    v6 = Scaleform::HeapMH::GlobalRootMH;
    Scaleform::Lock::DoLock(&Scaleform::HeapMH::GlobalRootMH->RootLock.mLock);
    --this->RefCount;
    Scaleform::Lock::Unlock(&v6->RootLock.mLock);
  }
}

char __fastcall Scaleform::MemoryHeap::ReleaseRootHeapMH()
{
  Scaleform::HeapMH::RootMH *v0; // rbx
  bool v2; // di

  v0 = Scaleform::HeapMH::GlobalRootMH;
  if ( !Scaleform::HeapMH::GlobalRootMH )
    return 1;
  Scaleform::Lock::DoLock(&Scaleform::HeapMH::GlobalRootMH->RootLock.mLock);
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

void __fastcall Scaleform::MemoryHeapMH::SetLimit(Scaleform::MemoryHeapMH *this, unsigned __int64 newLimit)
{
  Scaleform::HeapMH::AllocEngineMH *pEngine; // rax

  Scaleform::Lock::DoLock(&this->HeapLock);
  if ( newLimit < this->Info.Desc.Limit )
  {
    pEngine = this->pEngine;
    if ( newLimit < pEngine->Footprint )
      newLimit = pEngine->Footprint;
  }
  this->pEngine->Limit = newLimit;
  this->Info.Desc.Limit = newLimit;
  Scaleform::Lock::Unlock(&this->HeapLock);
}

void __fastcall Scaleform::MemoryHeapMH::SetLimitHandler(
        Scaleform::MemoryHeapMH *this,
        Scaleform::MemoryHeap::LimitHandler *handler)
{
  Scaleform::Lock::DoLock(&this->HeapLock);
  this->pEngine->pLimHandler = handler;
  Scaleform::Lock::Unlock(&this->HeapLock);
}

void __fastcall Scaleform::MemoryHeapMH::destroyItself(Scaleform::MemoryHeapMH *this)
{
  Scaleform::MemoryHeap *pNext; // rcx
  char **p_pName; // rdi
  Scaleform::MemoryHeap *v4; // rbx

  pNext = this->ChildHeaps.Root.pNext;
  p_pName = &this->Info.pName;
  if ( this == (Scaleform::MemoryHeapMH *)-136i64 )
    p_pName = 0i64;
  while ( pNext != (Scaleform::MemoryHeap *)p_pName )
  {
    v4 = pNext->pNext;
    pNext->destroyItself(pNext);
    pNext = v4;
  }
  Scaleform::HeapMH::RootMH::DestroyHeap(Scaleform::HeapMH::GlobalRootMH, this);
}

bool __fastcall Scaleform::GFx::InteractiveObject::OnCharEvent(
        Scaleform::Render::Texture *this,
        Scaleform::Render::RenderTargetData *__formal)
{
  return 0;
}

void __fastcall Scaleform::MemoryHeapMH::getUserDebugStats(
        Scaleform::MemoryHeapMH *this,
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
    stats->UserDebugFootprint += this->pEngine->Footprint;
    stats->UserDebugUsedSpace += this->pEngine->UsedSpace;
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

bool __fastcall Scaleform::SysAlloc::initHeapEngine(Scaleform::SysAlloc *this, const void *heapDesc)
{
  if ( !Scaleform::HeapMH::GlobalRootMH )
    Scaleform::HeapMH::RootMH::RootMH(&Scaleform::HeapMH::HeapRootMemMH, this);
  return Scaleform::MemoryHeap::CreateRootHeapMH((const Scaleform::MemoryHeap::HeapDesc *)heapDesc) != 0i64;
}

void *__fastcall Scaleform::MemoryHeapMH::reallocMem(
        Scaleform::MemoryHeapMH *this,
        Scaleform::HeapMH::PageMH *page,
        void *oldPtr,
        unsigned __int64 newSize,
        bool globalLocked)
{
  void *result; // rax
  Scaleform::HeapMH::RootMH *v10; // rbx
  void *v11; // rdi
  Scaleform::HeapMH::PageInfoMH newInfo; // [rsp+30h] [rbp-28h] BYREF

  result = Scaleform::HeapMH::AllocEngineMH::ReallocInPage(this->pEngine, page, oldPtr, newSize, &newInfo);
  if ( !result )
  {
    if ( globalLocked )
    {
      return Scaleform::HeapMH::AllocEngineMH::ReallocGeneral(this->pEngine, page, oldPtr, newSize, &newInfo, 1);
    }
    else
    {
      v10 = Scaleform::HeapMH::GlobalRootMH;
      Scaleform::Lock::DoLock(&Scaleform::HeapMH::GlobalRootMH->RootLock.mLock);
      v11 = Scaleform::HeapMH::AllocEngineMH::ReallocGeneral(this->pEngine, page, oldPtr, newSize, &newInfo, 1);
      Scaleform::Lock::Unlock(&v10->RootLock.mLock);
      return v11;
    }
  }
  return result;
}

__int64 __fastcall Scaleform::SysAlloc::shutdownHeapEngine(Scaleform::SysAlloc *this)
{
  unsigned __int8 v1; // bl

  v1 = Scaleform::MemoryHeap::ReleaseRootHeapMH();
  if ( Scaleform::HeapMH::GlobalRootMH )
  {
    Scaleform::HeapMH::RootMH::~RootMH(Scaleform::HeapMH::GlobalRootMH);
    Scaleform::HeapMH::GlobalRootMH = 0i64;
  }
  return v1;
}

