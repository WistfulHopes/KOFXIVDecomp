#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_allocbitset1.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_freebin.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_heaptypes.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"

Scaleform::HeapPT::AllocBitSet1::AllocBitSet1(unsigned long long minAlignShift); // 0x1404382E0
void Scaleform::HeapPT::AllocBitSet1::InitSegment(Scaleform::Heap::HeapSegment * seg); // 0x140439400
void Scaleform::HeapPT::AllocBitSet1::ReleaseSegment(Scaleform::Heap::HeapSegment * seg); // 0x140439140
void * Scaleform::HeapPT::AllocBitSet1::Alloc(unsigned long long bytes, Scaleform::Heap::HeapSegment * * allocSeg); // 0x140439150
void Scaleform::HeapPT::AllocBitSet1::Free(Scaleform::Heap::HeapSegment * seg, void * ptr, unsigned long long bytes); // 0x1404392C0void __fastcall Scaleform::HeapPT::AllocBitSet1::AllocBitSet1(
        Scaleform::HeapPT::AllocBitSet2 *this,
        unsigned __int64 minAlignShift)
{
  this->MinAlignShift = minAlignShift;
  this->MinAlignMask = (1i64 << minAlignShift) - 1;
  Scaleform::HeapPT::FreeBin::FreeBin(&this->Bin);
}

unsigned __int8 *__fastcall Scaleform::HeapPT::AllocBitSet1::Alloc(
        Scaleform::HeapPT::AllocBitSet1 *this,
        unsigned __int64 bytes,
        Scaleform::Heap::HeapSegment **allocSeg)
{
  unsigned __int64 MinAlignShift; // r14
  Scaleform::HeapPT::FreeBin *p_Bin; // r12
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rsi
  unsigned __int8 *result; // rax
  unsigned __int8 *v9; // rdi
  unsigned __int64 v10; // rbx
  Scaleform::Heap::HeapSegment *v11; // r15
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  unsigned __int8 *v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9

  MinAlignShift = this->MinAlignShift;
  p_Bin = &this->Bin;
  v5 = bytes >> this->MinAlignShift;
  v6 = bytes;
  result = Scaleform::HeapPT::FreeBin::PullBest(&this->Bin, v5);
  v9 = result;
  if ( result )
  {
    v10 = *((unsigned int *)result + 6);
    v11 = (Scaleform::Heap::HeapSegment *)*((_QWORD *)result + 2);
    if ( v10 >= 0x41 )
      v10 = *((_QWORD *)result + 4);
    v12 = v10 - v5;
    v13 = v12 << MinAlignShift;
    if ( v12 << MinAlignShift < 0x20 )
    {
      v6 += v13;
    }
    else
    {
      v14 = &v9[v6];
      if ( v12 >= 0x41 )
      {
        *(_DWORD *)&v14[v13 - 4] = 65;
        *((_DWORD *)v14 + 6) = 65;
        *(_QWORD *)&v14[v13 - 16] = v12;
        *((_QWORD *)v14 + 4) = v12;
      }
      else
      {
        *(_DWORD *)&v14[v13 - 4] = v12;
        *((_DWORD *)v14 + 6) = v12;
      }
      *((_QWORD *)v14 + 2) = v11;
      Scaleform::HeapPT::FreeBin::Push(p_Bin, v14);
      v15 = (v6 + v9 - v11->pData) >> MinAlignShift;
      *((_DWORD *)&v11[1].pPrev + (v15 >> 5)) &= ~(1 << (v15 & 0x1F));
      *((_DWORD *)&v11[1].pPrev + ((v12 + v15 - 1) >> 5)) &= ~(1 << ((v12 + v15 - 1) & 0x1F));
    }
    v16 = (v9 - v11->pData) >> MinAlignShift;
    *((_DWORD *)&v11[1].pPrev + (v16 >> 5)) |= 1 << (v16 & 0x1F);
    *((_DWORD *)&v11[1].pPrev + (((v6 >> MinAlignShift) + v16 - 1) >> 5)) |= 1 << (((v6 >> MinAlignShift) + v16 - 1) & 0x1F);
    result = v9;
    *allocSeg = v11;
  }
  return result;
}

void __fastcall Scaleform::HeapPT::AllocBitSet1::Free(
        Scaleform::HeapPT::AllocBitSet1 *this,
        Scaleform::Heap::HeapSegment *seg,
        void *ptr,
        unsigned __int64 bytes)
{
  unsigned __int64 MinAlignShift; // rcx
  unsigned __int8 *v7; // rbp
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r8
  char *v11; // r14
  unsigned __int64 v12; // r10
  int v13; // eax
  bool v14; // r9
  int v15; // eax
  bool right; // dl
  unsigned __int64 v17; // rax
  Scaleform::HeapPT::FreeBin *p_Bin; // rcx

  MinAlignShift = this->MinAlignShift;
  v7 = &seg->pData[seg->DataSize];
  v9 = (signed __int64)((__int64)ptr - (unsigned __int64)seg->pData) >> MinAlignShift;
  v10 = bytes >> MinAlignShift;
  v11 = (char *)ptr + bytes;
  *((_DWORD *)&seg[1].pPrev + (v9 >> 5)) &= ~(1 << (v9 & 0x1F));
  v12 = (bytes >> MinAlignShift) + v9;
  *((_DWORD *)&seg[1].pPrev + ((v12 - 1) >> 5)) &= ~(1 << ((v12 - 1) & 0x1F));
  v14 = 0;
  if ( v9 )
  {
    v13 = *((_DWORD *)&seg[1].pPrev + ((v9 - 1) >> 5));
    if ( !_bittest(&v13, ((_BYTE)v9 - 1) & 0x1F) )
      v14 = 1;
  }
  right = 0;
  if ( v11 < (char *)v7 )
  {
    v15 = *((_DWORD *)&seg[1].pPrev + (v12 >> 5));
    if ( !_bittest(&v15, v12 & 0x1F) )
      right = 1;
  }
  v17 = v10 << this->MinAlignShift;
  if ( v10 >= 0x41 )
  {
    *(_DWORD *)((char *)ptr + v17 - 4) = 65;
    *((_DWORD *)ptr + 6) = 65;
    *(_QWORD *)((char *)ptr + v17 - 16) = v10;
    *((_QWORD *)ptr + 4) = v10;
  }
  else
  {
    *(_DWORD *)((char *)ptr + v17 - 4) = v10;
    *((_DWORD *)ptr + 6) = v10;
  }
  *((_QWORD *)ptr + 2) = seg;
  p_Bin = &this->Bin;
  if ( v14 || right )
    Scaleform::HeapPT::FreeBin::Merge(p_Bin, (unsigned __int8 *)ptr, this->MinAlignShift, v14, right);
  else
    Scaleform::HeapPT::FreeBin::Push(p_Bin, (unsigned __int8 *)ptr);
}

void __fastcall Scaleform::HeapPT::AllocBitSet1::InitSegment(
        Scaleform::HeapPT::AllocBitSet1 *this,
        Scaleform::Heap::HeapSegment *seg)
{
  unsigned __int64 DataSize; // r10
  unsigned __int64 MinAlignShift; // rcx
  unsigned __int64 v6; // r10
  unsigned __int8 *pData; // rdx
  unsigned __int64 v8; // rax

  DataSize = seg->DataSize;
  MinAlignShift = this->MinAlignShift;
  LODWORD(seg[1].pPrev) &= ~1u;
  v6 = DataSize >> MinAlignShift;
  *((_DWORD *)&seg[1].pPrev + ((v6 - 1) >> 5)) &= ~(1 << ((v6 - 1) & 0x1F));
  pData = seg->pData;
  v8 = v6 << this->MinAlignShift;
  if ( v6 >= 0x41 )
  {
    *(_DWORD *)&pData[v8 - 4] = 65;
    *((_DWORD *)pData + 6) = 65;
    *(_QWORD *)&pData[v8 - 16] = v6;
    *((_QWORD *)pData + 4) = v6;
  }
  else
  {
    *(_DWORD *)&pData[v8 - 4] = v6;
    *((_DWORD *)pData + 6) = v6;
  }
  *((_QWORD *)pData + 2) = seg;
  Scaleform::HeapPT::FreeBin::Push(&this->Bin, pData);
}

void __fastcall Scaleform::HeapPT::AllocBitSet2::ReleaseSegment(
        Scaleform::HeapPT::AllocBitSet2 *this,
        Scaleform::Heap::HeapSegment *seg)
{
  Scaleform::HeapPT::FreeBin::Pull(&this->Bin, seg->pData);
}

