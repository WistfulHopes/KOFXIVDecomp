#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_root.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_freebin.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_allocbitset2.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_heapbitset2.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"

Scaleform::HeapMH::AllocBitSet2MH::AllocBitSet2MH(); // 0x14041CAE0
void Scaleform::HeapMH::AllocBitSet2MH::InitPage(Scaleform::HeapMH::PageMH * page, unsigned long index); // 0x14041D130
void Scaleform::HeapMH::AllocBitSet2MH::ReleasePage(unsigned char * start); // 0x14041D930
void * Scaleform::HeapMH::AllocBitSet2MH::Alloc(unsigned long long bytes, Scaleform::HeapMH::MagicHeadersInfo * headers); // 0x14041CD00
void Scaleform::HeapMH::AllocBitSet2MH::Free(Scaleform::HeapMH::PageMH * page, void * ptr, Scaleform::HeapMH::MagicHeadersInfo * headers, unsigned long long * oldSize); // 0x14041CE60
unsigned long long Scaleform::HeapMH::AllocBitSet2MH::GetUsableSize(const Scaleform::HeapMH::PageMH * page, const void * ptr); // 0x14041D0F0
void * Scaleform::HeapMH::AllocBitSet2MH::Alloc(unsigned long long bytes, unsigned long long alignSize, Scaleform::HeapMH::MagicHeadersInfo * headers); // 0x14041CB00
void * Scaleform::HeapMH::AllocBitSet2MH::ReallocInPlace(Scaleform::HeapMH::PageMH * page, void * oldPtr, unsigned long long newSize, unsigned long long * oldSize, Scaleform::HeapMH::MagicHeadersInfo * headers); // 0x14041D6A0void __fastcall Scaleform::HeapMH::AllocBitSet2MH::AllocBitSet2MH(Scaleform::HeapMH::AllocBitSet2MH *this)
{
  Scaleform::HeapMH::ListBinMH::ListBinMH(&this->Bin);
}

Scaleform::HeapMH::BinNodeMH *__fastcall Scaleform::HeapMH::AllocBitSet2MH::Alloc(
        Scaleform::HeapMH::AllocBitSet2MH *this,
        unsigned __int64 bytes,
        unsigned __int64 alignSize,
        Scaleform::HeapMH::MagicHeadersInfo *headers)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v6; // r14
  Scaleform::HeapMH::BinNodeMH *result; // rax
  Scaleform::HeapMH::BinNodeMH *v9; // rbx
  Scaleform::HeapMH::PageMH *Page; // rsi
  unsigned __int8 *AlignedPtr; // r15
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r12
  unsigned int *BitSet; // r8
  unsigned __int64 v15; // rbx
  unsigned int *v16; // r8
  unsigned int *v17; // rdx
  unsigned __int64 v18; // rcx

  v4 = alignSize - 1;
  v6 = bytes >> 4;
  result = Scaleform::HeapMH::ListBinMH::PullBest(&this->Bin, bytes >> 4, alignSize - 1);
  v9 = result;
  if ( result )
  {
    if ( (result->Prev & 0xF | (16 * (unsigned __int64)(result->Next & 0xF))) <= 2 || (Page = result->Page) == 0i64 )
      Page = Scaleform::HeapMH::RootMH::ResolveAddress(Scaleform::HeapMH::GlobalRootMH, (unsigned __int64)result);
    AlignedPtr = Scaleform::HeapMH::ListBinMH::GetAlignedPtr((unsigned __int8 *)v9, v4);
    Scaleform::HeapMH::GetMagicHeaders((unsigned __int64)Page->Start, headers);
    headers->Page = Page;
    v12 = (unsigned __int64)v9 + 16 * (v9->Prev & 0xF | (16i64 * (v9->Next & 0xF))) - (_QWORD)AlignedPtr - bytes;
    v13 = AlignedPtr - (unsigned __int8 *)v9;
    if ( AlignedPtr != (unsigned __int8 *)v9 )
    {
      Scaleform::HeapMH::BinNodeMH::MakeNode((unsigned __int8 *)v9, AlignedPtr - (unsigned __int8 *)v9, Page);
      Scaleform::HeapMH::ListBinMH::Push(&this->Bin, (unsigned __int8 *)v9);
      BitSet = headers->BitSet;
      v15 = ((char *)v9 - (char *)headers->AlignedStart) >> 4;
      BitSet[v15 >> 4] &= ~(3 << ((2 * v15) & 0x1E));
      BitSet[((v13 >> 4) + v15 - 1) >> 4] &= ~(3 << ((2 * ((v13 >> 4) + v15 - 1)) & 0x1E));
    }
    if ( v12 )
    {
      Scaleform::HeapMH::BinNodeMH::MakeNode(&AlignedPtr[bytes], v12, Page);
      Scaleform::HeapMH::ListBinMH::Push(&this->Bin, &AlignedPtr[bytes]);
      v16 = headers->BitSet;
      v17 = &v16[(unsigned __int64)((__int64)(bytes + AlignedPtr - headers->AlignedStart) >> 4) >> 4];
      v18 = (v12 >> 4) + ((__int64)(bytes + AlignedPtr - headers->AlignedStart) >> 4) - 1;
      *v17 &= ~(3 << ((2 * ((__int64)(bytes + AlignedPtr - headers->AlignedStart) >> 4)) & 0x1E));
      v16[v18 >> 4] &= ~(3 << ((2 * v18) & 0x1E));
    }
    Scaleform::Heap::BitSet2::MarkBusy(headers->BitSet, (AlignedPtr - headers->AlignedStart) >> 4, v6);
    return (Scaleform::HeapMH::BinNodeMH *)AlignedPtr;
  }
  return result;
}

Scaleform::HeapMH::BinNodeMH *__fastcall Scaleform::HeapMH::AllocBitSet2MH::Alloc(
        Scaleform::HeapMH::AllocBitSet2MH *this,
        unsigned __int64 bytes,
        Scaleform::HeapMH::MagicHeadersInfo *headers)
{
  unsigned __int64 v4; // r15
  Scaleform::HeapMH::BinNodeMH *result; // rax
  Scaleform::HeapMH::BinNodeMH *v8; // rdi
  Scaleform::HeapMH::PageMH *Page; // rbp
  unsigned __int64 v10; // rsi
  unsigned int *BitSet; // r8
  unsigned int *v12; // rdx
  unsigned __int64 v13; // rcx

  v4 = bytes >> 4;
  result = Scaleform::HeapMH::ListBinMH::PullBest(&this->Bin, bytes >> 4);
  v8 = result;
  if ( result )
  {
    if ( (result->Prev & 0xF | (16 * (unsigned __int64)(result->Next & 0xF))) <= 2 || (Page = result->Page) == 0i64 )
      Page = Scaleform::HeapMH::RootMH::ResolveAddress(Scaleform::HeapMH::GlobalRootMH, (unsigned __int64)result);
    Scaleform::HeapMH::GetMagicHeaders((unsigned __int64)Page->Start, headers);
    headers->Page = Page;
    v10 = 16 * (v8->Prev & 0xF | (16i64 * (v8->Next & 0xF))) - bytes;
    if ( v10 )
    {
      Scaleform::HeapMH::BinNodeMH::MakeNode((unsigned __int8 *)v8 + bytes, v10, Page);
      Scaleform::HeapMH::ListBinMH::Push(&this->Bin, (unsigned __int8 *)v8 + bytes);
      BitSet = headers->BitSet;
      v12 = &BitSet[(unsigned __int64)((__int64)(bytes + (char *)v8 - (char *)headers->AlignedStart) >> 4) >> 4];
      v13 = (v10 >> 4) + ((__int64)(bytes + (char *)v8 - (char *)headers->AlignedStart) >> 4) - 1;
      *v12 &= ~(3 << ((2 * ((__int64)(bytes + (char *)v8 - (char *)headers->AlignedStart) >> 4)) & 0x1E));
      BitSet[v13 >> 4] &= ~(3 << ((2 * v13) & 0x1E));
    }
    Scaleform::Heap::BitSet2::MarkBusy(headers->BitSet, ((char *)v8 - (char *)headers->AlignedStart) >> 4, v4);
    return v8;
  }
  return result;
}

void __fastcall Scaleform::HeapMH::AllocBitSet2MH::Free(
        Scaleform::HeapMH::AllocBitSet2MH *this,
        Scaleform::HeapMH::PageMH *page,
        void *ptr,
        Scaleform::HeapMH::MagicHeadersInfo *headers,
        unsigned __int64 *oldSize)
{
  unsigned int *BitSet; // rcx
  unsigned __int64 v10; // r15
  unsigned __int64 BlockSize; // rax
  unsigned int *v12; // r9
  unsigned int *v13; // rdx
  bool v14; // r9
  bool right; // cl
  __int64 v16; // rdi
  unsigned __int64 v17; // rcx

  Scaleform::HeapMH::GetMagicHeaders((unsigned __int64)page->Start, headers);
  BitSet = headers->BitSet;
  v10 = (signed __int64)((__int64)ptr - (unsigned __int64)headers->AlignedStart) >> 4;
  headers->Page = page;
  BlockSize = Scaleform::Heap::BitSet2::GetBlockSize(BitSet, v10);
  *oldSize = 16 * BlockSize;
  v12 = headers->BitSet;
  v12[v10 >> 4] &= ~(3 << ((2 * v10) & 0x1E));
  v13 = &v12[(BlockSize + v10 - 1) >> 4];
  *v13 &= ~(3 << ((2 * (BlockSize + v10 - 1)) & 0x1E));
  v14 = v10 && ((headers->BitSet[(v10 - 1) >> 4] >> ((2 * (v10 - 1)) & 0x1E)) & 3) == 0;
  right = (unsigned __int8 *)((unsigned __int64)ptr + 16 * BlockSize) < headers->AlignedEnd
       && ((headers->BitSet[(BlockSize + v10) >> 4] >> ((2 * (BlockSize + v10)) & 0x1E)) & 3) == 0;
  if ( v14 || right )
  {
    Scaleform::HeapMH::ListBinMH::Merge(&this->Bin, (unsigned __int8 *)ptr, 16 * BlockSize, v14, right, page);
  }
  else
  {
    v16 = (2 * BlockSize) & 0x1FFFFFFFFFFFFFFFi64;
    *(_QWORD *)ptr ^= ((unsigned __int8)BlockSize ^ (unsigned __int8)*(_QWORD *)ptr) & 0xF;
    *((_QWORD *)ptr + v16 - 2) = *(_QWORD *)ptr;
    v17 = *((_QWORD *)ptr + 1) & 0xFFFFFFFFFFFFFFF0ui64 | ((BlockSize & 0xFFFFFFFFFFFFFFFi64) >> 4);
    *((_QWORD *)ptr + 1) = v17;
    *((_QWORD *)ptr + v16 - 1) = v17;
    if ( (*(_DWORD *)ptr & 0xF | (16 * (unsigned __int64)(*((_DWORD *)ptr + 2) & 0xF))) > 2 )
      *((_QWORD *)ptr + 2) = page;
    Scaleform::HeapMH::ListBinMH::Push(&this->Bin, (unsigned __int8 *)ptr);
  }
}

unsigned __int64 __fastcall Scaleform::Heap::BitSet2::GetBlockSize(const unsigned int *buf, unsigned __int64 start)
{
  unsigned __int64 v2; // rbx
  unsigned int v4; // er9
  unsigned int v6; // edx
  unsigned int v7; // er9

  v2 = 2 * start;
  v4 = (buf[start >> 4] >> ((2 * start) & 0x1E)) & 3;
  if ( v4 != 3 )
    return v4;
  v6 = (buf[(start + 1) >> 4] >> ((2 * (start + 1)) & 0x1E)) & 3;
  if ( v6 < 3 )
    return v6 + 3;
  v7 = (buf[(start + 2) >> 4] >> ((2 * (start + 2)) & 0x1E)) & 3;
  if ( v7 == 3 )
    return buf[(v2 + 37) >> 5];
  else
    return ((buf[(start + 4) >> 4] >> ((2 * (start + 4)) & 0x1E)) & 3 | (4
                                                                       * ((4 * v7) | (buf[(start + 3) >> 4] >> ((2 * (start + 3)) & 0x1E)) & 3)))
         + 6;
}

unsigned __int64 __fastcall Scaleform::HeapMH::AllocBitSet2MH::GetUsableSize(
        Scaleform::HeapMH::AllocBitSet2MH *this,
        const Scaleform::HeapMH::PageMH *page,
        const void *ptr)
{
  Scaleform::HeapMH::MagicHeadersInfo headers; // [rsp+20h] [rbp-48h] BYREF

  Scaleform::HeapMH::GetMagicHeaders((unsigned __int64)page->Start, &headers);
  return 16
       * Scaleform::Heap::BitSet2::GetBlockSize(
           headers.BitSet,
           (signed __int64)((__int64)ptr - (unsigned __int64)headers.AlignedStart) >> 4);
}

void __fastcall Scaleform::HeapMH::AllocBitSet2MH::InitPage(
        Scaleform::HeapMH::AllocBitSet2MH *this,
        Scaleform::HeapMH::PageMH *page,
        unsigned int index)
{
  unsigned int *BitSet; // rax
  unsigned __int8 *AlignedStart; // rbx
  Scaleform::HeapMH::MagicHeader *Header1; // rax
  Scaleform::HeapMH::MagicHeader *Header2; // rcx
  Scaleform::HeapMH::MagicHeader *v10; // rsi
  Scaleform::HeapMH::MagicHeader *v11; // rdi
  unsigned __int8 *AlignedEnd; // rbp
  __int64 v13; // rsi
  unsigned __int8 *v14; // rcx
  unsigned __int64 v15; // rax
  unsigned int *v16; // r8
  unsigned __int64 v17; // rbx
  __int64 v18; // rbp
  char *v19; // rcx
  unsigned __int64 v20; // rax
  unsigned int *v21; // r8
  unsigned __int64 v22; // rdi
  Scaleform::HeapMH::MagicHeadersInfo headers; // [rsp+20h] [rbp-58h] BYREF

  Scaleform::HeapMH::GetMagicHeaders((unsigned __int64)page->Start, &headers);
  BitSet = headers.BitSet;
  AlignedStart = 0i64;
  *(_QWORD *)headers.BitSet = 0x5555555555555555i64;
  memset(BitSet + 2, 85, 56);
  Header1 = headers.Header1;
  if ( headers.Header1 )
  {
    headers.Header1->Magic = 24512;
    headers.Header1->UseCount = 0;
    headers.Header1->Index = index;
    headers.Header1->DebugHeader = 0i64;
    Header1 = headers.Header1;
  }
  Header2 = headers.Header2;
  if ( headers.Header2 )
  {
    headers.Header2->Magic = 24512;
    headers.Header2->UseCount = 0;
    headers.Header2->Index = index;
    headers.Header2->DebugHeader = 0i64;
    Header2 = headers.Header2;
    Header1 = headers.Header1;
  }
  v10 = 0i64;
  v11 = 0i64;
  AlignedEnd = 0i64;
  if ( Header1 )
  {
    AlignedStart = headers.AlignedStart;
    v10 = Header1;
  }
  if ( Header2 )
  {
    AlignedEnd = headers.AlignedEnd;
    v11 = Header2 + 1;
  }
  if ( headers.BitSet >= (unsigned int *)headers.Bound )
    v11 += 4;
  else
    v10 -= 4;
  if ( AlignedStart )
  {
    v13 = (char *)v10 - (char *)AlignedStart;
    v14 = &AlignedStart[8 * ((unsigned __int64)v13 >> 3)];
    *(_QWORD *)AlignedStart ^= ((unsigned __int8)((unsigned __int64)v13 >> 4) ^ (unsigned __int8)*(_QWORD *)AlignedStart) & 0xF;
    *((_QWORD *)v14 - 2) = *(_QWORD *)AlignedStart;
    v15 = ((unsigned __int64)v13 >> 8) | *((_QWORD *)AlignedStart + 1) & 0xFFFFFFFFFFFFFFF0ui64;
    *((_QWORD *)AlignedStart + 1) = v15;
    *((_QWORD *)v14 - 1) = v15;
    if ( (*(_DWORD *)AlignedStart & 0xF | (16 * (unsigned __int64)(*((_DWORD *)AlignedStart + 2) & 0xF))) > 2 )
      *((_QWORD *)AlignedStart + 2) = page;
    Scaleform::HeapMH::ListBinMH::Push(&this->Bin, AlignedStart);
    v16 = headers.BitSet;
    v17 = (AlignedStart - headers.AlignedStart) >> 4;
    headers.BitSet[v17 >> 4] &= ~(3 << ((2 * v17) & 0x1E));
    v16[((v13 >> 4) + v17 - 1) >> 4] &= ~(3 << ((2 * ((v13 >> 4) + v17 - 1)) & 0x1E));
  }
  if ( v11 )
  {
    v18 = AlignedEnd - (unsigned __int8 *)v11;
    v19 = (char *)v11 + 8 * ((unsigned __int64)v18 >> 3);
    *(_QWORD *)&v11->Magic ^= ((unsigned __int8)((unsigned __int64)v18 >> 4) ^ (unsigned __int8)*(_QWORD *)&v11->Magic) & 0xF;
    *((_QWORD *)v19 - 2) = *(_QWORD *)&v11->Magic;
    v20 = ((unsigned __int64)v18 >> 8) | (unsigned __int64)v11->DebugHeader & 0xFFFFFFFFFFFFFFF0ui64;
    v11->DebugHeader = (struct Scaleform::HeapMH::DebugDataMH *)v20;
    *((_QWORD *)v19 - 1) = v20;
    if ( (*(_DWORD *)&v11->Magic & 0xF | (16 * (unsigned __int64)((__int64)v11->DebugHeader & 0xF))) > 2 )
      *(_QWORD *)&v11[1].Magic = page;
    Scaleform::HeapMH::ListBinMH::Push(&this->Bin, (unsigned __int8 *)v11);
    v21 = headers.BitSet;
    v22 = ((char *)v11 - (char *)headers.AlignedStart) >> 4;
    headers.BitSet[v22 >> 4] &= ~(3 << ((2 * v22) & 0x1E));
    v21[(v22 + (v18 >> 4) - 1) >> 4] &= ~(3 << ((2 * (v22 + (v18 >> 4) - 1)) & 0x1E));
  }
}

Scaleform::HeapMH::BinNodeMH *__fastcall Scaleform::HeapMH::BinNodeMH::MakeNode(
        unsigned __int8 *start,
        unsigned __int64 bytes,
        Scaleform::HeapMH::PageMH *page)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  Scaleform::HeapMH::BinNodeMH *result; // rax

  v3 = bytes;
  v4 = bytes >> 3;
  v3 >>= 4;
  *(_QWORD *)start ^= ((unsigned __int8)v3 ^ (unsigned __int8)*(_QWORD *)start) & 0xF;
  *(_QWORD *)&start[8 * v4 - 16] = *(_QWORD *)start;
  v5 = (v3 >> 4) | *((_QWORD *)start + 1) & 0xFFFFFFFFFFFFFFF0ui64;
  *((_QWORD *)start + 1) = v5;
  *(_QWORD *)&start[8 * v4 - 8] = v5;
  result = (Scaleform::HeapMH::BinNodeMH *)start;
  if ( (*(_DWORD *)start & 0xF | (16 * (unsigned __int64)(*((_DWORD *)start + 2) & 0xF))) > 2 )
    *((_QWORD *)start + 2) = page;
  return result;
}

void __fastcall Scaleform::Heap::BitSet2::MarkBusy(unsigned int *buf, unsigned __int64 start, unsigned __int64 num)
{
  char v5; // cl
  int v6; // eax
  unsigned int *v7; // r8
  unsigned int *v8; // rax

  if ( num > 1 )
  {
    if ( num == 2 )
    {
      v5 = 2 * start;
      v7 = &buf[start >> 4];
      v6 = 2;
    }
    else
    {
      if ( num - 3 > 2 )
      {
        buf[start >> 4] = (3 << ((2 * start) & 0x1E)) | buf[start >> 4] & ~(3 << ((2 * start) & 0x1E));
        buf[(start + 1) >> 4] = (3 << ((2 * (start + 1)) & 0x1E)) | buf[(start + 1) >> 4] & ~(3 << ((2 * (start + 1)) & 0x1E));
        if ( num >= 0x26 )
        {
          buf[(start + 2) >> 4] = (3 << ((2 * (start + 2)) & 0x1E)) | buf[(start + 2) >> 4] & ~(3 << ((2 * (start + 2)) & 0x1E));
          buf[(2 * start + 37) >> 5] = num;
        }
        else
        {
          buf[(start + 2) >> 4] = ((unsigned int)(num - 6) >> 4 << ((2 * (start + 2)) & 0x1E)) | buf[(start + 2) >> 4] & ~(3 << ((2 * (start + 2)) & 0x1E));
          buf[(start + 3) >> 4] = buf[(start + 3) >> 4] & ~(3 << ((2 * (start + 3)) & 0x1E)) | ((((unsigned int)(num - 6) >> 2) & 3) << ((2 * (start + 3)) & 0x1E));
          buf[(start + 4) >> 4] = ((((_DWORD)num - 6) & 3) << ((2 * (start + 4)) & 0x1E)) | buf[(start + 4) >> 4] & ~(3 << ((2 * (start + 4)) & 0x1E));
        }
        goto LABEL_10;
      }
      buf[start >> 4] = (3 << ((2 * start) & 0x1E)) | buf[start >> 4] & ~(3 << ((2 * start) & 0x1E));
      v5 = 2 * (start + 1);
      v6 = num - 3;
      v7 = &buf[(start + 1) >> 4];
    }
    *v7 = (v6 << (v5 & 0x1E)) | *v7 & ~(3 << (v5 & 0x1E));
LABEL_10:
    v8 = &buf[(start + num - 1) >> 4];
    *v8 = *v8 & ~(3 << ((2 * (start + num - 1)) & 0x1E)) | (1 << ((2 * (start + num - 1)) & 0x1E));
    return;
  }
  buf[start >> 4] = buf[start >> 4] & ~(3 << ((2 * start) & 0x1E)) | (1 << ((2 * start) & 0x1E));
}

void *__fastcall Scaleform::HeapMH::AllocBitSet2MH::ReallocInPlace(
        Scaleform::HeapMH::AllocBitSet2MH *this,
        Scaleform::HeapMH::PageMH *page,
        void *oldPtr,
        unsigned __int64 newSize,
        unsigned __int64 *oldSize,
        Scaleform::HeapMH::MagicHeadersInfo *headers)
{
  unsigned __int8 *Bound; // rax
  unsigned __int8 *AlignedStart; // rcx
  unsigned __int8 *AlignedEnd; // rdi
  unsigned int *BitSet; // r15
  __int64 v15; // rbp
  unsigned __int64 BlockSize; // rax
  __int64 v17; // rbx
  __int64 v18; // rdi
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rbx
  unsigned __int64 v22; // r10
  __int64 v23; // r8
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rbx
  Scaleform::HeapMH::MagicHeadersInfo *headersa; // [rsp+78h] [rbp+30h]

  Scaleform::HeapMH::GetMagicHeaders((unsigned __int64)page->Start, headers);
  Bound = headers->Bound;
  AlignedStart = headers->AlignedStart;
  AlignedEnd = headers->AlignedEnd;
  headers->Page = page;
  headersa = (Scaleform::HeapMH::MagicHeadersInfo *)AlignedStart;
  if ( oldPtr < Bound )
  {
    AlignedEnd = Bound - 16;
    if ( headers->BitSet < (unsigned int *)Bound )
      AlignedEnd = Bound - 80;
  }
  BitSet = headers->BitSet;
  v15 = ((_BYTE *)oldPtr - AlignedStart) >> 4;
  BlockSize = Scaleform::Heap::BitSet2::GetBlockSize(BitSet, v15);
  v17 = 16 * BlockSize;
  *oldSize = 16 * BlockSize;
  if ( newSize <= 16 * BlockSize )
  {
    if ( newSize < 16 * BlockSize )
    {
      v22 = v17 - newSize;
      v23 = 0i64;
      if ( (char *)oldPtr + v17 < (char *)AlignedEnd
        && ((BitSet[(v15 + BlockSize) >> 4] >> ((2 * (v15 + BlockSize)) & 0x1E)) & 3) == 0 )
      {
        v23 = 16 * (*(_DWORD *)((_BYTE *)oldPtr + v17) & 0xF | (16i64 * (*(_DWORD *)((_BYTE *)oldPtr + v17 + 8) & 0xF)));
      }
      v24 = v23 + v22;
      if ( v23 + v22 )
      {
        if ( v23 )
          Scaleform::HeapMH::ListBinMH::Pull(&this->Bin, (unsigned __int8 *)oldPtr + v17);
        Scaleform::HeapMH::BinNodeMH::MakeNode((unsigned __int8 *)oldPtr + newSize, v24, page);
        Scaleform::HeapMH::ListBinMH::Push(&this->Bin, (unsigned __int8 *)oldPtr + newSize);
        Scaleform::Heap::BitSet2::MarkBusy(BitSet, v15, newSize >> 4);
        v25 = ((_BYTE *)oldPtr + newSize - (_BYTE *)headersa) >> 4;
        BitSet[v25 >> 4] &= ~(3 << ((2 * v25) & 0x1E));
        BitSet[((v24 >> 4) + v25 - 1) >> 4] &= ~(3 << ((2 * ((v24 >> 4) + v25 - 1)) & 0x1E));
      }
    }
  }
  else
  {
    if ( (char *)oldPtr + v17 >= (char *)AlignedEnd )
      return 0i64;
    if ( ((BitSet[(v15 + BlockSize) >> 4] >> ((2 * (v15 + BlockSize)) & 0x1E)) & 3) != 0 )
      return 0i64;
    v18 = 16 * (*(_DWORD *)((_BYTE *)oldPtr + v17) & 0xF | (16i64 * (*(_DWORD *)((_BYTE *)oldPtr + v17 + 8) & 0xF)));
    if ( newSize > v18 + v17 )
      return 0i64;
    Scaleform::HeapMH::ListBinMH::Pull(&this->Bin, (unsigned __int8 *)oldPtr + v17);
    v19 = v17 + v18 - newSize;
    if ( v19 )
    {
      Scaleform::HeapMH::BinNodeMH::MakeNode((unsigned __int8 *)oldPtr + newSize, v19, page);
      Scaleform::HeapMH::ListBinMH::Push(&this->Bin, (unsigned __int8 *)oldPtr + newSize);
      v20 = ((_BYTE *)oldPtr + newSize - (_BYTE *)headersa) >> 4;
      BitSet[v20 >> 4] &= ~(3 << ((2 * v20) & 0x1E));
      BitSet[((v19 >> 4) + v20 - 1) >> 4] &= ~(3 << ((2 * ((v19 >> 4) + v20 - 1)) & 0x1E));
    }
    Scaleform::Heap::BitSet2::MarkBusy(BitSet, v15, newSize >> 4);
  }
  return oldPtr;
}

void __fastcall Scaleform::HeapMH::AllocBitSet2MH::ReleasePage(
        Scaleform::HeapMH::AllocBitSet2MH *this,
        unsigned __int8 *start)
{
  Scaleform::HeapMH::MagicHeader *v3; // rdx
  Scaleform::HeapMH::MagicHeadersInfo headers; // [rsp+20h] [rbp-48h] BYREF

  Scaleform::HeapMH::GetMagicHeaders((unsigned __int64)start, &headers);
  if ( headers.Header1 )
    Scaleform::HeapMH::ListBinMH::Pull(&this->Bin, headers.AlignedStart);
  if ( headers.Header2 )
  {
    v3 = headers.Header2 + 1;
    if ( headers.BitSet > (unsigned int *)headers.Bound )
      v3 = headers.Header2 + 5;
    Scaleform::HeapMH::ListBinMH::Pull(&this->Bin, (unsigned __int8 *)v3);
  }
}

