#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_heapbitset2.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_allocbitset2.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_freebin.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_heaptypes.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"

Scaleform::HeapPT::AllocBitSet2::AllocBitSet2(unsigned long long minAlignShift); // 0x1404382E0
void Scaleform::HeapPT::AllocBitSet2::InitSegment(Scaleform::Heap::HeapSegment * seg); // 0x140438940
void Scaleform::HeapPT::AllocBitSet2::ReleaseSegment(Scaleform::Heap::HeapSegment * seg); // 0x140439140
void * Scaleform::HeapPT::AllocBitSet2::Alloc(unsigned long long bytes, Scaleform::Heap::HeapSegment * * allocSeg); // 0x140438560
void * Scaleform::HeapPT::AllocBitSet2::Alloc(unsigned long long bytes, unsigned long long alignSize, Scaleform::Heap::HeapSegment * * allocSeg); // 0x140438310
void Scaleform::HeapPT::AllocBitSet2::Free(Scaleform::Heap::HeapSegment * seg, void * ptr); // 0x1404386C0
void * Scaleform::HeapPT::AllocBitSet2::ReallocInPlace(Scaleform::Heap::HeapSegment * seg, void * oldPtr, unsigned long long newSize, unsigned long long * oldSize); // 0x140438E00
unsigned long long Scaleform::HeapPT::AllocBitSet2::GetUsableSize(const Scaleform::Heap::HeapSegment * seg, const void * ptr); // 0x140438910
unsigned long long Scaleform::HeapPT::AllocBitSet2::GetAlignShift(const Scaleform::Heap::HeapSegment * seg, const void * ptr, unsigned long long size); // 0x140438830void __fastcall Scaleform::HeapPT::AllocBitSet1::AllocBitSet1(
        Scaleform::HeapPT::AllocBitSet2 *this,
        unsigned __int64 minAlignShift)
{
  this->MinAlignShift = minAlignShift;
  this->MinAlignMask = (1i64 << minAlignShift) - 1;
  Scaleform::HeapPT::FreeBin::FreeBin(&this->Bin);
}

unsigned __int8 *__fastcall Scaleform::HeapPT::AllocBitSet2::Alloc(
        Scaleform::HeapPT::AllocBitSet2 *this,
        unsigned __int64 bytes,
        unsigned __int64 alignSize,
        Scaleform::Heap::HeapSegment **allocSeg)
{
  unsigned __int64 MinAlignShift; // rbp
  unsigned __int64 v5; // r14
  unsigned __int8 *result; // rax
  unsigned __int8 *v8; // rdi
  Scaleform::Heap::HeapSegment *v9; // r13
  unsigned __int8 *AlignedPtr; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rsi
  unsigned __int8 *v13; // r15
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdi
  __int64 v18; // rdx
  int v19; // eax
  unsigned __int64 v20; // rcx
  unsigned int *v21; // rdi
  unsigned __int8 *v22; // rdx
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rax
  unsigned int *v25; // rdx
  unsigned __int64 v26; // rcx
  unsigned __int8 v27; // al
  unsigned __int8 *pData; // [rsp+70h] [rbp+8h]
  Scaleform::HeapPT::FreeBin *p_Bin; // [rsp+78h] [rbp+10h]

  MinAlignShift = this->MinAlignShift;
  p_Bin = &this->Bin;
  v5 = bytes;
  result = Scaleform::HeapPT::FreeBin::PullBest(
             &this->Bin,
             bytes >> this->MinAlignShift,
             this->MinAlignShift,
             alignSize - 1);
  v8 = result;
  if ( result )
  {
    v9 = (Scaleform::Heap::HeapSegment *)*((_QWORD *)result + 2);
    pData = v9->pData;
    AlignedPtr = Scaleform::HeapPT::ListBin::GetAlignedPtr(result, alignSize - 1);
    v11 = *((unsigned int *)v8 + 6);
    v12 = AlignedPtr - v8;
    v13 = AlignedPtr;
    if ( v11 >= 0x41 )
      v11 = *((_QWORD *)v8 + 4);
    v14 = (unsigned __int64)&v8[(v11 << MinAlignShift) - (_QWORD)AlignedPtr - v5];
    if ( v12 )
    {
      v15 = v12 >> MinAlignShift;
      v16 = v15 << MinAlignShift;
      if ( v15 >= 0x41 )
      {
        *(_DWORD *)&v8[v16 - 4] = 65;
        *((_DWORD *)v8 + 6) = 65;
        *(_QWORD *)&v8[v16 - 16] = v15;
        *((_QWORD *)v8 + 4) = v15;
      }
      else
      {
        *(_DWORD *)&v8[v16 - 4] = v15;
        *((_DWORD *)v8 + 6) = v15;
      }
      *((_QWORD *)v8 + 2) = v9;
      Scaleform::HeapPT::FreeBin::Push(p_Bin, v8);
      v17 = (v8 - pData) >> MinAlignShift;
      v18 = 4 * (v17 >> 4);
      v19 = 3 << ((2 * v17) & 0x1E);
      v20 = v15 + v17 - 1;
      v21 = (unsigned int *)&v9[1];
      *(_DWORD *)((char *)&v9[1].pPrev + v18) &= ~v19;
      *((_DWORD *)&v9[1].pPrev + (v20 >> 4)) &= ~(3 << ((2 * v20) & 0x1E));
    }
    else
    {
      v21 = (unsigned int *)&v9[1];
    }
    if ( v14 < 0x20 )
    {
      v5 += v14;
    }
    else
    {
      v22 = &v13[v5];
      v23 = v14 >> MinAlignShift;
      v24 = v23 << MinAlignShift;
      if ( v23 >= 0x41 )
      {
        *(_DWORD *)&v22[v24 - 4] = 65;
        *((_DWORD *)v22 + 6) = 65;
        *(_QWORD *)&v22[v24 - 16] = v23;
        *((_QWORD *)v22 + 4) = v23;
      }
      else
      {
        *(_DWORD *)&v22[v24 - 4] = v23;
        *((_DWORD *)v22 + 6) = v23;
      }
      *((_QWORD *)v22 + 2) = v9;
      Scaleform::HeapPT::FreeBin::Push(p_Bin, v22);
      v25 = &v21[(unsigned __int64)((__int64)(v5 + v13 - pData) >> MinAlignShift) >> 4];
      v26 = v23 + ((__int64)(v5 + v13 - pData) >> MinAlignShift) - 1;
      *v25 &= ~(3 << ((2 * ((__int64)(v5 + v13 - pData) >> MinAlignShift)) & 0x1E));
      v21[v26 >> 4] &= ~(3 << ((2 * v26) & 0x1E));
    }
    v27 = Scaleform::Alg::UpperBit(alignSize);
    Scaleform::Heap::BitSet2::MarkBusy(v21, (v13 - pData) >> MinAlignShift, v5 >> MinAlignShift, v27 - MinAlignShift);
    *allocSeg = v9;
    return v13;
  }
  return result;
}

unsigned __int8 *__fastcall Scaleform::HeapPT::AllocBitSet2::Alloc(
        Scaleform::HeapPT::AllocBitSet2 *this,
        unsigned __int64 bytes,
        Scaleform::Heap::HeapSegment **allocSeg)
{
  Scaleform::HeapPT::FreeBin *p_Bin; // r12
  unsigned __int64 v5; // rsi
  unsigned __int8 *result; // rax
  unsigned __int8 *v7; // rdi
  unsigned __int64 MinAlignShift; // rbp
  unsigned __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // r15
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  unsigned __int8 *v15; // rdx
  _DWORD *v16; // rdx
  unsigned __int64 v17; // rcx

  p_Bin = &this->Bin;
  v5 = bytes;
  result = Scaleform::HeapPT::FreeBin::PullBest(&this->Bin, bytes >> this->MinAlignShift);
  v7 = result;
  if ( result )
  {
    MinAlignShift = this->MinAlignShift;
    v9 = *((unsigned int *)result + 6);
    v10 = *((_QWORD *)result + 2);
    v11 = *(_QWORD *)(v10 + 56);
    v12 = v10 + 64;
    if ( v9 >= 0x41 )
      v9 = *((_QWORD *)result + 4);
    v13 = v9 - (v5 >> MinAlignShift);
    v14 = v13 << MinAlignShift;
    if ( v13 << MinAlignShift < 0x20 )
    {
      v5 += v14;
    }
    else
    {
      v15 = &v7[v5];
      if ( v13 >= 0x41 )
      {
        *(_DWORD *)&v15[v14 - 4] = 65;
        *((_DWORD *)v15 + 6) = 65;
        *(_QWORD *)&v15[v14 - 16] = v13;
        *((_QWORD *)v15 + 4) = v13;
      }
      else
      {
        *(_DWORD *)&v15[v14 - 4] = v13;
        *((_DWORD *)v15 + 6) = v13;
      }
      *((_QWORD *)v15 + 2) = v10;
      Scaleform::HeapPT::FreeBin::Push(p_Bin, v15);
      v16 = (_DWORD *)(v12 + 4 * ((unsigned __int64)((__int64)&v7[v5 - v11] >> MinAlignShift) >> 4));
      v17 = v13 + ((__int64)&v7[v5 - v11] >> MinAlignShift) - 1;
      *v16 &= ~(3 << ((2 * ((__int64)&v7[v5 - v11] >> MinAlignShift)) & 0x1E));
      *(_DWORD *)(v12 + 4 * (v17 >> 4)) &= ~(3 << ((2 * v17) & 0x1E));
    }
    Scaleform::Heap::BitSet2::MarkBusy(
      (unsigned int *)(v10 + 64),
      (__int64)&v7[-v11] >> MinAlignShift,
      v5 >> MinAlignShift,
      0i64);
    *allocSeg = (Scaleform::Heap::HeapSegment *)v10;
    return v7;
  }
  return result;
}

void __fastcall Scaleform::HeapPT::AllocBitSet2::Free(
        Scaleform::HeapPT::AllocBitSet2 *this,
        Scaleform::Heap::HeapSegment *seg,
        void *ptr)
{
  unsigned __int64 MinAlignShift; // r15
  Scaleform::Heap::HeapSegment *v4; // r14
  unsigned __int8 *v6; // r12
  unsigned __int64 v7; // rsi
  unsigned __int64 BlockSize; // r11
  unsigned __int64 v11; // r10
  bool v12; // r9
  bool right; // dl
  Scaleform::HeapPT::FreeBin *p_Bin; // rcx

  MinAlignShift = this->MinAlignShift;
  v4 = seg + 1;
  v6 = &seg->pData[seg->DataSize];
  v7 = (signed __int64)((__int64)ptr - (unsigned __int64)seg->pData) >> this->MinAlignShift;
  BlockSize = Scaleform::Heap::BitSet2::GetBlockSize((const unsigned int *)&seg[1], v7);
  *((_DWORD *)&v4->pPrev + (v7 >> 4)) &= ~(3 << ((2 * v7) & 0x1E));
  *((_DWORD *)&v4->pPrev + ((BlockSize + v7 - 1) >> 4)) &= ~(3 << ((2 * (BlockSize + v7 - 1)) & 0x1E));
  v11 = BlockSize << MinAlignShift;
  v12 = v7 && ((*((_DWORD *)&v4->pPrev + ((v7 - 1) >> 4)) >> ((2 * (v7 - 1)) & 0x1E)) & 3) == 0;
  right = (char *)ptr + (BlockSize << MinAlignShift) < (char *)v6
       && ((*((_DWORD *)&v4->pPrev + ((BlockSize + v7) >> 4)) >> ((2 * (BlockSize + v7)) & 0x1E)) & 3) == 0;
  if ( BlockSize >= 0x41 )
  {
    *(_DWORD *)((char *)ptr + v11 - 4) = 65;
    *((_DWORD *)ptr + 6) = 65;
    *(_QWORD *)((char *)ptr + v11 - 16) = BlockSize;
    *((_QWORD *)ptr + 4) = BlockSize;
  }
  else
  {
    *(_DWORD *)((char *)ptr + v11 - 4) = BlockSize;
    *((_DWORD *)ptr + 6) = BlockSize;
  }
  *((_QWORD *)ptr + 2) = seg;
  p_Bin = &this->Bin;
  if ( v12 || right )
    Scaleform::HeapPT::FreeBin::Merge(p_Bin, (unsigned __int8 *)ptr, MinAlignShift, v12, right);
  else
    Scaleform::HeapPT::FreeBin::Push(p_Bin, (unsigned __int8 *)ptr);
}

unsigned __int64 __fastcall Scaleform::HeapPT::AllocBitSet2::GetAlignShift(
        Scaleform::HeapPT::AllocBitSet2 *this,
        const Scaleform::Heap::HeapSegment *seg,
        const void *ptr,
        unsigned __int64 size)
{
  unsigned __int64 MinAlignShift; // rbx

  MinAlignShift = this->MinAlignShift;
  return MinAlignShift
       + Scaleform::Heap::BitSet2::GetAlignShift(
           (const unsigned int *)&seg[1],
           (signed __int64)((__int64)ptr - (unsigned __int64)seg->pData) >> this->MinAlignShift,
           size >> this->MinAlignShift);
}

__int64 __fastcall Scaleform::Heap::BitSet2::GetAlignShift(
        const unsigned int *buf,
        unsigned __int64 start,
        unsigned __int64 num)
{
  if ( num >= 8 )
    return (buf[(start + num - 1) >> 4] >> ((2 * (start + num - 1)) & 0x1E) >> 1) & 1 | (2
                                                                                       * ((buf[(start + num - 2) >> 4] >> ((2 * (start + num - 2)) & 0x1E)) & 3 | (4 * ((buf[(start + num - 3) >> 4] >> ((2 * (start + num - 3)) & 0x1E)) & 3))));
  else
    return ((buf[(start + num - 1) >> 4] >> ((2 * (start + num - 1)) & 0x1E)) & 3) - 1;
}

unsigned __int64 __fastcall Scaleform::HeapPT::AllocBitSet2::GetUsableSize(
        Scaleform::HeapPT::AllocBitSet2 *this,
        const Scaleform::Heap::HeapSegment *seg,
        const void *ptr)
{
  unsigned __int64 MinAlignShift; // rbx

  MinAlignShift = this->MinAlignShift;
  return Scaleform::Heap::BitSet2::GetBlockSize(
           (const unsigned int *)&seg[1],
           (signed __int64)((__int64)ptr - (unsigned __int64)seg->pData) >> this->MinAlignShift) << MinAlignShift;
}

void __fastcall Scaleform::HeapPT::AllocBitSet2::InitSegment(
        Scaleform::HeapPT::AllocBitSet2 *this,
        Scaleform::Heap::HeapSegment *seg)
{
  unsigned __int64 DataSize; // r8
  unsigned __int64 MinAlignShift; // rcx
  unsigned __int64 v6; // rax
  unsigned __int8 *pData; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r8

  DataSize = seg->DataSize;
  MinAlignShift = this->MinAlignShift;
  LODWORD(seg[1].pPrev) &= 0xFFFFFFFC;
  *((_DWORD *)&seg[1].pPrev + (((DataSize >> MinAlignShift) - 1) >> 4)) &= ~(3 << ((2 * ((DataSize >> MinAlignShift) - 1)) & 0x1E));
  v6 = seg->DataSize;
  pData = seg->pData;
  v8 = v6 >> this->MinAlignShift;
  v9 = v8 << this->MinAlignShift;
  if ( v8 >= 0x41 )
  {
    *(_DWORD *)&pData[v9 - 4] = 65;
    *((_DWORD *)pData + 6) = 65;
    *(_QWORD *)&pData[v9 - 16] = v8;
    *((_QWORD *)pData + 4) = v8;
  }
  else
  {
    *(_DWORD *)&pData[v9 - 4] = v8;
    *((_DWORD *)pData + 6) = v8;
  }
  *((_QWORD *)pData + 2) = seg;
  Scaleform::HeapPT::FreeBin::Push(&this->Bin, pData);
}

void __fastcall Scaleform::Heap::BitSet2::MarkBusy(
        unsigned int *buf,
        unsigned __int64 start,
        unsigned __int64 num,
        unsigned __int64 alignShift)
{
  unsigned __int64 v7; // rdx
  char v8; // cl
  int v9; // eax
  unsigned int v10; // er9
  unsigned int *v11; // r8
  unsigned int *v12; // r8

  switch ( num )
  {
    case 0ui64:
    case 1ui64:
      buf[start >> 4] = buf[start >> 4] & ~(3 << ((2 * start) & 0x1E)) | (1 << ((2 * start) & 0x1E));
      break;
    case 2ui64:
      buf[start >> 4] = (2 << ((2 * start) & 0x1E)) | buf[start >> 4] & ~(3 << ((2 * start) & 0x1E));
      buf[(start + 1) >> 4] = (((_DWORD)alignShift + 1) << ((2 * (start + 1)) & 0x1E)) | buf[(start + 1) >> 4] & ~(3 << ((2 * (start + 1)) & 0x1E));
      break;
    case 3ui64:
    case 4ui64:
    case 5ui64:
      buf[start >> 4] = (3 << ((2 * start) & 0x1E)) | buf[start >> 4] & ~(3 << ((2 * start) & 0x1E));
      v7 = start + 1;
      v8 = 2 * (start + 1);
      v9 = num - 3;
      goto LABEL_5;
    case 6ui64:
    case 7ui64:
      buf[start >> 4] = (3 << ((2 * start) & 0x1E)) | buf[start >> 4] & ~(3 << ((2 * start) & 0x1E));
      buf[(start + 1) >> 4] = (3 << ((2 * (start + 1)) & 0x1E)) | buf[(start + 1) >> 4] & ~(3 << ((2 * (start + 1)) & 0x1E));
      buf[(start + 2) >> 4] &= ~(3 << ((2 * (start + 2)) & 0x1E));
      buf[(start + 3) >> 4] &= ~(3 << ((2 * (start + 3)) & 0x1E));
      v7 = start + 4;
      v8 = 2 * (start + 4);
      v9 = num - 6;
LABEL_5:
      buf[v7 >> 4] = (v9 << (v8 & 0x1E)) | buf[v7 >> 4] & ~(3 << (v8 & 0x1E));
      buf[(start + num - 1) >> 4] = (((_DWORD)alignShift + 1) << ((2 * (start + num - 1)) & 0x1E)) | buf[(start + num - 1) >> 4] & ~(3 << ((2 * (start + num - 1)) & 0x1E));
      break;
    default:
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
      v10 = (2 * alignShift) | 1;
      v11 = &buf[(start + num - 3) >> 4];
      *v11 = (v10 >> 4 << ((2 * (start + num - 3)) & 0x1E)) | *v11 & ~(3 << ((2 * (start + num - 3)) & 0x1E));
      v12 = &buf[(start + num - 2) >> 4];
      *v12 = *v12 & ~(3 << ((2 * (start + num - 2)) & 0x1E)) | (((v10 >> 2) & 3) << ((2 * (start + num - 2)) & 0x1E));
      buf[(start + num - 1) >> 4] = ((v10 & 3) << ((2 * (start + num - 1)) & 0x1E)) | buf[(start + num - 1) >> 4] & ~(3 << ((2 * (start + num - 1)) & 0x1E));
      break;
  }
}

void *__fastcall Scaleform::HeapPT::AllocBitSet2::ReallocInPlace(
        Scaleform::HeapPT::AllocBitSet2 *this,
        Scaleform::Heap::HeapSegment *seg,
        void *oldPtr,
        unsigned __int64 newSize,
        unsigned __int64 *oldSize)
{
  unsigned __int64 MinAlignShift; // rbp
  unsigned int *v6; // r15
  __int64 v9; // r12
  unsigned __int8 *v10; // r13
  unsigned int v11; // eax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  char *v14; // r8
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  char *v18; // rsi
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rsi
  char *v23; // r9
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rbx
  char *v28; // rsi
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rsi
  unsigned __int8 *pData; // [rsp+20h] [rbp-58h]
  unsigned __int64 BlockSize; // [rsp+90h] [rbp+18h]
  unsigned __int64 alignShift; // [rsp+98h] [rbp+20h]

  MinAlignShift = this->MinAlignShift;
  v6 = (unsigned int *)&seg[1];
  pData = seg->pData;
  v9 = ((_BYTE *)oldPtr - pData) >> this->MinAlignShift;
  v10 = &pData[seg->DataSize];
  BlockSize = Scaleform::Heap::BitSet2::GetBlockSize((const unsigned int *)&seg[1], v9);
  v11 = Scaleform::Heap::BitSet2::GetAlignShift(v6, v9, BlockSize);
  alignShift = v11;
  v12 = BlockSize << MinAlignShift;
  *oldSize = BlockSize << MinAlignShift;
  v13 = ~((1i64 << ((unsigned __int8)v11 + (unsigned __int8)MinAlignShift)) - 1) & ((1i64 << ((unsigned __int8)v11
                                                                                            + (unsigned __int8)MinAlignShift))
                                                                                  - 1
                                                                                  + newSize);
  if ( v13 <= BlockSize << MinAlignShift )
  {
    if ( v13 < v12 )
    {
      v23 = (char *)oldPtr + v12;
      v24 = v12 - v13;
      v25 = 0i64;
      if ( (char *)oldPtr + v12 < (char *)v10
        && ((v6[(v9 + BlockSize) >> 4] >> ((2 * (v9 + BlockSize)) & 0x1E)) & 3) == 0 )
      {
        v26 = *((unsigned int *)v23 + 6);
        if ( v26 >= 0x41 )
          v26 = *((_QWORD *)v23 + 4);
        v25 = v26 << MinAlignShift;
      }
      v27 = v25 + v24;
      if ( v25 + v24 >= 0x20 )
      {
        if ( v25 )
          Scaleform::HeapPT::FreeBin::Pull(&this->Bin, (unsigned __int8 *)oldPtr + v12);
        v28 = (char *)oldPtr + v13;
        v29 = v27 >> MinAlignShift;
        v30 = v29 << MinAlignShift;
        if ( v29 >= 0x41 )
        {
          *(_DWORD *)&v28[v30 - 4] = 65;
          *((_DWORD *)v28 + 6) = 65;
          *(_QWORD *)&v28[v30 - 16] = v29;
          *((_QWORD *)v28 + 4) = v29;
        }
        else
        {
          *(_DWORD *)&v28[v30 - 4] = v29;
          *((_DWORD *)v28 + 6) = v29;
        }
        *((_QWORD *)v28 + 2) = seg;
        Scaleform::HeapPT::FreeBin::Push(&this->Bin, (unsigned __int8 *)oldPtr + v13);
        Scaleform::Heap::BitSet2::MarkBusy(v6, v9, v13 >> MinAlignShift, alignShift);
        v31 = (v28 - (char *)pData) >> MinAlignShift;
        v6[v31 >> 4] &= ~(3 << ((2 * v31) & 0x1E));
        v6[(v29 + v31 - 1) >> 4] &= ~(3 << ((2 * (v29 + v31 - 1)) & 0x1E));
      }
    }
  }
  else
  {
    v14 = (char *)oldPtr + v12;
    if ( (char *)oldPtr + v12 >= (char *)v10
      || ((v6[(v9 + BlockSize) >> 4] >> ((2 * (v9 + BlockSize)) & 0x1E)) & 3) != 0 )
    {
      return 0i64;
    }
    v15 = *((unsigned int *)v14 + 6);
    if ( v15 >= 0x41 )
      v15 = *((_QWORD *)v14 + 4);
    v16 = v15 << MinAlignShift;
    if ( v13 > v16 + v12 )
      return 0i64;
    Scaleform::HeapPT::FreeBin::Pull(&this->Bin, (unsigned __int8 *)oldPtr + v12);
    v17 = v12 + v16 - v13;
    if ( v17 < 0x20 )
    {
      v13 += v17;
    }
    else
    {
      v18 = (char *)oldPtr + v13;
      v19 = v17 >> MinAlignShift;
      v20 = v19 << MinAlignShift;
      if ( v19 >= 0x41 )
      {
        *(_DWORD *)&v18[v20 - 4] = 65;
        *((_DWORD *)v18 + 6) = 65;
        *(_QWORD *)&v18[v20 - 16] = v19;
        *((_QWORD *)v18 + 4) = v19;
      }
      else
      {
        *(_DWORD *)&v18[v20 - 4] = v19;
        *((_DWORD *)v18 + 6) = v19;
      }
      *((_QWORD *)v18 + 2) = seg;
      Scaleform::HeapPT::FreeBin::Push(&this->Bin, (unsigned __int8 *)oldPtr + v13);
      v21 = (v18 - (char *)pData) >> MinAlignShift;
      v6[v21 >> 4] &= ~(3 << ((2 * v21) & 0x1E));
      v6[(v19 + v21 - 1) >> 4] &= ~(3 << ((2 * (v19 + v21 - 1)) & 0x1E));
    }
    Scaleform::Heap::BitSet2::MarkBusy(v6, v9, v13 >> MinAlignShift, alignShift);
  }
  return oldPtr;
}

void __fastcall Scaleform::HeapPT::AllocBitSet2::ReleaseSegment(
        Scaleform::HeapPT::AllocBitSet2 *this,
        Scaleform::Heap::HeapSegment *seg)
{
  Scaleform::HeapPT::FreeBin::Pull(&this->Bin, seg->pData);
}

