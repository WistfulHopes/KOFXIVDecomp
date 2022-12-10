#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_freebin.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_allocengine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_allocbitset2.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_heapbitset2.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_heaptypes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_root.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

Scaleform::HeapMH::RootMH * Scaleform::HeapMH::GlobalRootMH; // 0x140A725C0
Scaleform::HeapMH::PageMH Scaleform::HeapMH::GlobalEmptyPageMH; // 0x1409F9D50
Scaleform::HeapMH::PageTableMH Scaleform::HeapMH::GlobalPageTableMH; // 0x140A725D0
void Scaleform::HeapMH::GetMagicHeaders(unsigned long long pageStart, Scaleform::HeapMH::MagicHeadersInfo * headers); // 0x1403BE5D0
Scaleform::HeapMH::RootMH::RootMH(Scaleform::SysAlloc * sysAlloc); // 0x1403BE190
Scaleform::HeapMH::RootMH::~RootMH(); // 0x1403BE200
void Scaleform::HeapMH::RootMH::FreeTables(); // 0x1403BE540
bool Scaleform::HeapMH::RootMH::allocPagePool(); // 0x1403BE750
Scaleform::HeapMH::PageMH * Scaleform::HeapMH::RootMH::AllocPage(Scaleform::MemoryHeapMH * heap); // 0x1403BE230
void Scaleform::HeapMH::RootMH::FreePage(Scaleform::HeapMH::PageMH * page); // 0x1403BE4E0
unsigned long Scaleform::HeapMH::RootMH::GetPageIndex(const Scaleform::HeapMH::PageMH * page); // 0x1403BE670
void Scaleform::HeapMH::RootMH::clearMagic(unsigned char * pageStart); // 0x1403BE820
Scaleform::HeapMH::PageMH * Scaleform::HeapMH::RootMH::ResolveAddress(unsigned long long addr); // 0x1403BE6C0
Scaleform::MemoryHeapMH * Scaleform::HeapMH::RootMH::CreateHeap(const char * name, Scaleform::MemoryHeapMH * parent, const Scaleform::MemoryHeap::HeapDesc & desc); // 0x1403BE330
void Scaleform::HeapMH::RootMH::DestroyHeap(Scaleform::MemoryHeapMH * heap); // 0x1403BE480//decompilation failure at 140A725C0!
//decompilation failure at 1409F9D50!
//decompilation failure at 140A725D0!
void __fastcall Scaleform::HeapMH::RootMH::RootMH(Scaleform::HeapMH::RootMH *this, Scaleform::SysAlloc *sysAlloc)
{
  unsigned __int64 *p_SizeMask; // rax

  this->pSysAlloc = sysAlloc;
  Scaleform::Lock::Lock(&this->RootLock.mLock, 0);
  this->FreePages.Root.pPrev = (Scaleform::HeapMH::PageMH *)&this->FreePages;
  this->FreePages.Root.pNext = (Scaleform::HeapMH::PageMH *)&this->FreePages;
  this->TableCount = 0;
  p_SizeMask = &Scaleform::HeapMH::GlobalPageTableMH.Entries[0].SizeMask;
  this->HeapTree.Root = 0i64;
  *(_OWORD *)&Scaleform::HeapMH::GlobalEmptyPageMH.pHeap = 0i64;
  do
  {
    *(p_SizeMask - 1) = (unsigned __int64)&Scaleform::HeapMH::GlobalEmptyPageMH;
    *p_SizeMask = 0i64;
    p_SizeMask += 2;
  }
  while ( (__int64)p_SizeMask < (__int64)&Scaleform::RootMem.AllocWrapper.Allocator );
  Scaleform::HeapMH::GlobalRootMH = this;
}

void __fastcall Scaleform::HeapMH::RootMH::~RootMH(Scaleform::HeapMH::RootMH *this)
{
  Scaleform::HeapMH::RootMH::FreeTables(this);
  Scaleform::HeapMH::GlobalRootMH = 0i64;
  Scaleform::Lock::~Lock(&this->RootLock.mLock);
}

Scaleform::HeapMH::PageMH *__fastcall Scaleform::HeapMH::RootMH::AllocPage(
        Scaleform::HeapMH::RootMH *this,
        Scaleform::MemoryHeapMH *heap)
{
  Scaleform::HeapMH::PageMH *result; // rax
  Scaleform::HeapMH::PageMH *pNext; // rbx
  unsigned __int8 *Start; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rax
  _WORD *v10; // rcx
  _WORD *v11; // rax

  if ( (Scaleform::List<Scaleform::HeapMH::PageMH,Scaleform::HeapMH::PageMH,Scaleform::ListNode<Scaleform::HeapMH::PageMH> > *)this->FreePages.Root.pNext == &this->FreePages
    && !Scaleform::HeapMH::RootMH::allocPagePool(this) )
  {
    return 0i64;
  }
  pNext = this->FreePages.Root.pNext;
  result = (Scaleform::HeapMH::PageMH *)this->pSysAlloc->Alloc(this->pSysAlloc, 4096i64, 8i64);
  pNext->Start = (unsigned __int8 *)result;
  if ( result )
  {
    pNext->pPrev->pNext = pNext->pNext;
    pNext->pNext->Scaleform::ListNode<Scaleform::HeapMH::PageMH>::$051E83CFEAEBEE2AA5A80EEEA70A7973::pPrev = pNext->pPrev;
    Start = pNext->Start;
    pNext->pHeap = heap;
    v7 = (unsigned __int64)(Start + 4095) & 0xFFFFFFFFFFFFF000ui64;
    v8 = (unsigned __int64)(Start + 4096) & 0xFFFFFFFFFFFFFFF0ui64;
    v9 = v7 - ((unsigned __int64)(Start + 15) & 0xFFFFFFFFFFFFFFF0ui64);
    v10 = (_WORD *)(v7 - 16);
    if ( v9 <= 0x10 )
      v10 = 0i64;
    v11 = 0i64;
    if ( v8 - v7 > 0x10 )
      v11 = (_WORD *)v7;
    if ( v10 )
      *v10 = 24512;
    if ( v11 )
      *v11 = 24512;
    return pNext;
  }
  else
  {
    pNext->pHeap = 0i64;
  }
  return result;
}

Scaleform::MemoryHeapMH *__fastcall Scaleform::HeapMH::RootMH::CreateHeap(
        Scaleform::HeapMH::RootMH *this,
        const char *name,
        Scaleform::MemoryHeapMH *parent,
        const Scaleform::MemoryHeap::HeapDesc *desc)
{
  __int64 v4; // rbx
  __int64 v6; // rdi
  unsigned __int64 v10; // rdi
  Scaleform::MemoryHeapMH *result; // rax
  Scaleform::MemoryHeapMH *v12; // r14
  Scaleform::MemoryHeapMH *v13; // rax
  Scaleform::HeapMH::AllocEngineMH *v14; // rcx
  Scaleform::MemoryHeapMH *v15; // rbp
  Scaleform::HeapMH::AllocEngineMH *v16; // rax
  Scaleform::Lock *p_HeapLock; // r14
  __int128 v18; // xmm1
  unsigned int v19; // eax

  v4 = -1i64;
  v6 = -1i64;
  do
    ++v6;
  while ( name[v6] );
  v10 = (v6 + 840) & 0xFFFFFFFFFFFFFFF0ui64;
  result = (Scaleform::MemoryHeapMH *)this->pSysAlloc->Alloc(this->pSysAlloc, v10, 8i64);
  v12 = result;
  if ( result )
  {
    Scaleform::MemoryHeapMH::MemoryHeapMH(result);
    v14 = (Scaleform::HeapMH::AllocEngineMH *)&v12[1];
    v15 = v13;
    if ( v12 != (Scaleform::MemoryHeapMH *)-224i64 )
    {
      Scaleform::HeapMH::AllocEngineMH::AllocEngineMH(v14, this->pSysAlloc, v13, desc->MinAlign, desc->Limit);
      v14 = v16;
    }
    v15->SelfSize = v10;
    p_HeapLock = &v12[3].HeapLock;
    v15->RefCount = 1;
    v15->pAutoRelease = 0i64;
    *(_OWORD *)&v15->Info.Desc.Flags = *(_OWORD *)&desc->Flags;
    *(_OWORD *)&v15->Info.Desc.Granularity = *(_OWORD *)&desc->Granularity;
    *(_OWORD *)&v15->Info.Desc.Threshold = *(_OWORD *)&desc->Threshold;
    v18 = *(_OWORD *)&desc->HeapId;
    v15->Info.pParent = parent;
    v15->Info.pName = (char *)p_HeapLock;
    *(_OWORD *)&v15->Info.Desc.HeapId = v18;
    v15->UseLocks = (desc->Flags & 1) == 0;
    v19 = desc->Flags >> 4;
    v15->pEngine = v14;
    v15->TrackDebugInfo = (v19 & 1) == 0;
    while ( name[++v4] != 0 )
      ;
    memmove(p_HeapLock, name, v4 + 1);
    return v15;
  }
  return result;
}

void __fastcall Scaleform::HeapMH::RootMH::DestroyHeap(Scaleform::HeapMH::RootMH *this, Scaleform::MemoryHeapMH *heap)
{
  unsigned __int64 SelfSize; // rdi

  SelfSize = heap->SelfSize;
  ActorWeapon::ActionFlagCheck((_SETJMP_FLOAT128 *)heap->pEngine);
  ((void (__fastcall *)(Scaleform::MemoryHeapMH *, _QWORD))heap->~MemoryHeap)(heap, 0i64);
  this->pSysAlloc->Free(this->pSysAlloc, heap, SelfSize, 8ui64);
}

void __fastcall Scaleform::HeapMH::RootMH::FreePage(Scaleform::HeapMH::RootMH *this, Scaleform::HeapMH::PageMH *page)
{
  unsigned __int8 *Start; // rdx

  Scaleform::HeapMH::RootMH::clearMagic(page->Start);
  Start = page->Start;
  page->Start = 0i64;
  page->pHeap = 0i64;
  this->pSysAlloc->Free(this->pSysAlloc, Start, 4096ui64, 8ui64);
  page->pPrev = this->FreePages.Root.pPrev;
  page->pNext = (Scaleform::HeapMH::PageMH *)&this->FreePages;
  this->FreePages.Root.pPrev->pNext = page;
  this->FreePages.Root.pPrev = page;
}

void __fastcall Scaleform::HeapMH::RootMH::FreeTables(Scaleform::HeapMH::RootMH *this)
{
  unsigned __int64 *p_SizeMask; // rbx
  __int64 v3; // rdi
  Scaleform::HeapMH::PageMH *v4; // rdx

  p_SizeMask = &Scaleform::HeapMH::GlobalPageTableMH.Entries[0].SizeMask;
  v3 = 128i64;
  do
  {
    v4 = (Scaleform::HeapMH::PageMH *)*(p_SizeMask - 1);
    if ( v4 != &Scaleform::HeapMH::GlobalEmptyPageMH )
      this->pSysAlloc->Free(this->pSysAlloc, v4, 32 * (*p_SizeMask + 1), 8ui64);
    *(p_SizeMask - 1) = (unsigned __int64)&Scaleform::HeapMH::GlobalEmptyPageMH;
    *p_SizeMask = 0i64;
    p_SizeMask += 2;
    --v3;
  }
  while ( v3 );
}

void __fastcall Scaleform::HeapMH::GetMagicHeaders(
        unsigned __int64 pageStart,
        Scaleform::HeapMH::MagicHeadersInfo *headers)
{
  unsigned __int8 *v2; // r8
  unsigned __int8 *v3; // r9
  unsigned __int8 *v4; // r11
  Scaleform::HeapMH::MagicHeader *Header2; // rax
  __int64 v6; // rax

  headers->Header1 = 0i64;
  v2 = (unsigned __int8 *)((pageStart + 4095) & 0xFFFFFFFFFFFFF000ui64);
  headers->Header2 = 0i64;
  v3 = (unsigned __int8 *)((pageStart + 15) & 0xFFFFFFFFFFFFFFF0ui64);
  v4 = (unsigned __int8 *)((pageStart + 4096) & 0xFFFFFFFFFFFFFFF0ui64);
  if ( (unsigned __int64)(v2 - v3) > 0x10 )
    headers->Header1 = (Scaleform::HeapMH::MagicHeader *)(v2 - 16);
  Header2 = headers->Header2;
  headers->AlignedStart = v3;
  headers->AlignedEnd = v4;
  headers->Bound = v2;
  headers->Page = 0i64;
  if ( (unsigned __int64)(v4 - v2) > 0x10 )
    Header2 = (Scaleform::HeapMH::MagicHeader *)((pageStart + 4095) & 0xFFFFFFFFFFFFF000ui64);
  headers->Header2 = Header2;
  v6 = 16i64;
  if ( v2 - v3 > (unsigned __int64)(v4 - v2) )
    v6 = -80i64;
  headers->BitSet = (unsigned int *)&v2[v6];
}

__int64 __fastcall Scaleform::HeapMH::RootMH::GetPageIndex(
        Scaleform::HeapMH::RootMH *this,
        const Scaleform::HeapMH::PageMH *page)
{
  unsigned int TableCount; // er9
  unsigned int v3; // er8
  Scaleform::HeapMH::PageTableMH *i; // rcx
  unsigned __int64 v5; // rax

  TableCount = this->TableCount;
  v3 = 0;
  if ( !TableCount )
    return 0xFFFFFFFFi64;
  for ( i = &Scaleform::HeapMH::GlobalPageTableMH; ; i = (Scaleform::HeapMH::PageTableMH *)((char *)i + 16) )
  {
    v5 = page - i->Entries[0].FirstPage;
    if ( v5 <= i->Entries[0].SizeMask )
      break;
    if ( ++v3 >= TableCount )
      return 0xFFFFFFFFi64;
  }
  return v3 | (v5 << 7);
}

Scaleform::HeapMH::PageMH *__fastcall Scaleform::HeapMH::RootMH::ResolveAddress(
        Scaleform::HeapMH::RootMH *this,
        unsigned __int64 addr)
{
  Scaleform::HeapMH::PageMH *result; // rax

  if ( *(_WORD *)(addr & 0xFFFFFFFFFFFFF000ui64) != 24512
    || (result = &Scaleform::HeapMH::GlobalPageTableMH.Entries[*(_DWORD *)((addr & 0xFFFFFFFFFFFFF000ui64) + 4) & 0x7F].FirstPage[Scaleform::HeapMH::GlobalPageTableMH.Entries[*(_DWORD *)((addr & 0xFFFFFFFFFFFFF000ui64) + 4) & 0x7F].SizeMask & ((unsigned __int64)*(unsigned int *)((addr & 0xFFFFFFFFFFFFF000ui64) + 4) >> 7)],
        addr - (unsigned __int64)result->Start >= 0x1000) )
  {
    if ( *(_WORD *)((addr & 0xFFFFFFFFFFFFF000ui64) + 0xFF0) != 24512 )
      return 0i64;
    result = &Scaleform::HeapMH::GlobalPageTableMH.Entries[*(_DWORD *)((addr & 0xFFFFFFFFFFFFF000ui64) + 0xFF4) & 0x7F].FirstPage[Scaleform::HeapMH::GlobalPageTableMH.Entries[*(_DWORD *)((addr & 0xFFFFFFFFFFFFF000ui64) + 0xFF4) & 0x7F].SizeMask & ((unsigned __int64)*(unsigned int *)((addr & 0xFFFFFFFFFFFFF000ui64) + 0xFF4) >> 7)];
    if ( addr - (unsigned __int64)result->Start >= 0x1000 )
      return 0i64;
  }
  return result;
}

bool __fastcall Scaleform::HeapMH::RootMH::allocPagePool(Scaleform::HeapMH::RootMH *this)
{
  unsigned int TableCount; // eax
  Scaleform::HeapMH::PageMH *v3; // rax
  __int64 v4; // rbx
  Scaleform::List<Scaleform::HeapMH::PageMH,Scaleform::HeapMH::PageMH,Scaleform::ListNode<Scaleform::HeapMH::PageMH> > *p_FreePages; // rdx

  TableCount = this->TableCount;
  if ( TableCount < 0x80 )
  {
    v4 = 128 << (TableCount >> 4);
    v3 = (Scaleform::HeapMH::PageMH *)this->pSysAlloc->Alloc(this->pSysAlloc, 32 * v4, 8i64);
    if ( v3 )
    {
      Scaleform::HeapMH::GlobalPageTableMH.Entries[this->TableCount].FirstPage = v3;
      Scaleform::HeapMH::GlobalPageTableMH.Entries[this->TableCount].SizeMask = v4 - 1;
      if ( v4 )
      {
        p_FreePages = &this->FreePages;
        do
        {
          v3->pHeap = 0i64;
          v3->Start = 0i64;
          v3->pPrev = p_FreePages->Root.pPrev;
          v3->pNext = (Scaleform::HeapMH::PageMH *)p_FreePages;
          p_FreePages->Root.pPrev->pNext = v3;
          p_FreePages->Root.pPrev = v3++;
          --v4;
        }
        while ( v4 );
      }
      ++this->TableCount;
      LOBYTE(v3) = 1;
    }
  }
  else
  {
    MEMORY[4] = 0;
    LOBYTE(v3) = 0;
  }
  return (char)v3;
}

void __fastcall Scaleform::HeapMH::RootMH::clearMagic(unsigned __int8 *pageStart)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // rax

  v1 = (unsigned __int64)(pageStart + 4095) & 0xFFFFFFFFFFFFF000ui64;
  v2 = (unsigned __int64)(pageStart + 4096) & 0xFFFFFFFFFFFFFFF0ui64;
  v3 = v1 - ((unsigned __int64)(pageStart + 15) & 0xFFFFFFFFFFFFFFF0ui64);
  v4 = (_QWORD *)(v1 - 16);
  if ( v3 <= 0x10 )
    v4 = 0i64;
  v5 = 0i64;
  if ( v2 - v1 > 0x10 )
    v5 = (_QWORD *)v1;
  if ( v4 )
  {
    *v4 = 0i64;
    v4[1] = 0i64;
  }
  if ( v5 )
  {
    *v5 = 0i64;
    v5[1] = 0i64;
  }
}

