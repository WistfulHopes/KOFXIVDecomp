#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_heapbitset2.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_freebin.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_heaptypes.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"

unsigned char * Scaleform::HeapPT::ListBin::GetAlignedPtr(unsigned char * start, unsigned long long alignMask); // 0x14041E6D0
Scaleform::HeapPT::BinLNode * Scaleform::HeapPT::ListBin::FindAligned(Scaleform::HeapPT::BinLNode * root, unsigned long long blocks, unsigned long long shift, unsigned long long alignMask); // 0x14041E4E0
Scaleform::HeapPT::BinLNode * Scaleform::HeapPT::ListBin::PullBest(unsigned long long idx, unsigned long long blocks, unsigned long long shift, unsigned long long alignMask); // 0x14041ECC0
void Scaleform::HeapPT::TreeBin::PushNode(Scaleform::HeapPT::BinTNode * node); // 0x14041EF60
void Scaleform::HeapPT::TreeBin::PullNode(Scaleform::HeapPT::BinTNode * node); // 0x14041EDB0
Scaleform::HeapPT::BinTNode * Scaleform::HeapPT::TreeBin::FindBest(unsigned long long size); // 0x14041E580
Scaleform::HeapPT::FreeBin::FreeBin(); // 0x14041E470
void Scaleform::HeapPT::FreeBin::Reset(); // 0x14041F090
void Scaleform::HeapPT::FreeBin::Push(unsigned char * node); // 0x14041EE90
void Scaleform::HeapPT::FreeBin::Pull(unsigned char * node); // 0x14041E8D0
unsigned char * Scaleform::HeapPT::FreeBin::PullBest(unsigned long long blocks); // 0x14041EB20
unsigned char * Scaleform::HeapPT::FreeBin::PullBest(unsigned long long blocks, unsigned long long shift, unsigned long long alignMask); // 0x14041E990
void Scaleform::HeapPT::FreeBin::Merge(unsigned char * node, unsigned long long shift, bool left, bool right); // 0x14041E7D0
void Scaleform::HeapPT::FreeBin::visitUnusedInTree(const Scaleform::HeapPT::BinTNode * root, Scaleform::Heap::SegVisitor * visitor, unsigned long long shift, unsigned long cat); // 0x14041F440
void Scaleform::HeapPT::FreeBin::VisitUnused(Scaleform::Heap::SegVisitor * visitor, unsigned long long shift, unsigned long cat); // 0x14041F200
void Scaleform::HeapPT::FreeBin::visitTree(const Scaleform::HeapPT::BinTNode * root, Scaleform::Heap::MemVisitor * visitor, unsigned long long shift, Scaleform::Heap::MemVisitor::Category cat); // 0x14041F3A0
void Scaleform::HeapPT::FreeBin::VisitMem(Scaleform::Heap::MemVisitor * visitor, unsigned long long shift, Scaleform::Heap::MemVisitor::Category cat); // 0x14041F100
void Scaleform::HeapPT::FreeBin::CheckIntegrity(unsigned long long __formal); // 0x14002E7C0void __fastcall Scaleform::HeapPT::FreeBin::FreeBin(Scaleform::HeapPT::FreeBin *this)
{
  this->ListBin1.Mask = 0i64;
  memset(this->ListBin1.Roots, 0, sizeof(this->ListBin1.Roots));
  this->ListBin2.Mask = 0i64;
  memset(this->ListBin2.Roots, 0, sizeof(this->ListBin2.Roots));
  this->TreeBin1.Mask = 0i64;
  memset(this->TreeBin1.Roots, 0, sizeof(this->TreeBin1.Roots));
  this->FreeBlocks = 0i64;
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

Scaleform::HeapPT::BinLNode *__fastcall Scaleform::HeapPT::ListBin::FindAligned(
        Scaleform::HeapPT::ListBin *this,
        Scaleform::HeapPT::BinLNode *root,
        unsigned __int64 blocks,
        unsigned __int64 shift,
        unsigned __int64 alignMask)
{
  Scaleform::HeapPT::BinLNode *v6; // r10
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 ShortSize; // r8

  v6 = root;
  if ( !root )
    return 0i64;
  v7 = blocks << shift;
  while ( 1 )
  {
    v8 = ~alignMask & ((unsigned __int64)v6 + alignMask);
    v9 = v8 - (_QWORD)v6;
    if ( v8 != (_QWORD)v6 )
    {
      do
      {
        if ( v9 >= 0x20 )
          break;
        v8 += alignMask + 1;
        v9 += alignMask + 1;
      }
      while ( v9 );
    }
    ShortSize = v6->ShortSize;
    if ( ShortSize >= 0x41 )
      ShortSize = (unsigned __int64)v6[1].pPrev;
    if ( v8 + v7 <= (unsigned __int64)v6 + (ShortSize << shift) )
      break;
    v6 = v6->pNext;
    if ( v6 == root )
      return 0i64;
  }
  return v6;
}

Scaleform::HeapPT::BinTNode *__fastcall Scaleform::HeapPT::TreeBin::FindBest(
        Scaleform::HeapPT::TreeBin *this,
        unsigned __int64 size)
{
  Scaleform::HeapPT::BinTNode *v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v6; // r10
  unsigned __int8 v7; // al
  Scaleform::HeapPT::BinTNode *v8; // rax
  Scaleform::HeapPT::BinTNode *v9; // r9
  __int64 v10; // rcx
  unsigned __int64 i; // r8
  unsigned __int64 v12; // rcx
  Scaleform::HeapPT::BinTNode *v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx

  v3 = 0i64;
  v4 = -(__int64)size;
  if ( size >> 6 )
  {
    v7 = Scaleform::Alg::UpperBit(size >> 6);
    v6 = ((size >> (v7 + 5)) & 1) + 2i64 * v7;
  }
  else
  {
    v6 = 0i64;
  }
  v8 = this->Roots[v6];
  if ( v8 )
  {
    v9 = 0i64;
    if ( v6 < 0x3F )
      v10 = 59 - (v6 >> 1);
    else
      LOBYTE(v10) = 0;
    for ( i = size << v10; ; i *= 2i64 )
    {
      v12 = v8->Size - size;
      if ( v12 < v4 )
      {
        v3 = v8;
        v4 = v8->Size - size;
        if ( !v12 )
          break;
      }
      v13 = v8->Child[1];
      v8 = v8->Child[i >> 63];
      if ( v13 && v13 != v8 )
        v9 = v13;
      if ( !v8 )
      {
        v8 = v9;
        break;
      }
    }
    if ( v8 )
      goto LABEL_22;
    if ( v3 )
      return v3;
  }
  v14 = this->Mask & ((1i64 << ((unsigned __int8)v6 + 1)) | -(1i64 << ((unsigned __int8)v6 + 1)));
  if ( v14 )
    v8 = this->Roots[Scaleform::Alg::LowerBit(v14)];
  while ( v8 )
  {
LABEL_22:
    v15 = 48i64;
    v16 = v8->Size - size;
    if ( v16 < v4 )
      v3 = v8;
    if ( !v8->Child[0] )
      v15 = 56i64;
    if ( v16 >= v4 )
      v16 = v4;
    v4 = v16;
    v8 = *(Scaleform::HeapPT::BinTNode **)((char *)&v8->pPrev + v15);
  }
  return v3;
}

unsigned __int8 *__fastcall Scaleform::HeapPT::ListBin::GetAlignedPtr(
        unsigned __int8 *start,
        unsigned __int64 alignMask)
{
  unsigned __int8 *v2; // r9
  unsigned __int64 v3; // r8

  v2 = (unsigned __int8 *)(~alignMask & (unsigned __int64)&start[alignMask]);
  v3 = v2 - start;
  if ( v2 != start )
  {
    do
    {
      if ( v3 >= 0x20 )
        break;
      v2 += alignMask + 1;
      v3 += alignMask + 1;
    }
    while ( v3 );
  }
  return v2;
}

__int64 __fastcall Scaleform::Alg::LowerBit(unsigned __int64 val)
{
  if ( (_DWORD)val )
  {
    if ( (_WORD)val )
    {
      if ( (_BYTE)val )
        return Scaleform::Alg::LowerBitTable[(unsigned __int8)val];
      else
        return (unsigned int)Scaleform::Alg::LowerBitTable[BYTE1(val)] + 8;
    }
    else if ( (val & 0xFF0000) != 0 )
    {
      return (unsigned __int8)(Scaleform::Alg::LowerBitTable[BYTE2(val)] + 16);
    }
    else
    {
      return (unsigned __int8)(Scaleform::Alg::LowerBitTable[BYTE3(val)] + 24);
    }
  }
  else if ( (val & 0xFFFF00000000i64) != 0 )
  {
    if ( (val & 0xFF00000000i64) != 0 )
      return (unsigned __int8)(Scaleform::Alg::LowerBitTable[BYTE4(val)] + 32);
    else
      return (unsigned __int8)(Scaleform::Alg::LowerBitTable[BYTE5(val)] + 40);
  }
  else if ( (val & 0xFF000000000000i64) != 0 )
  {
    return (unsigned __int8)(Scaleform::Alg::LowerBitTable[BYTE6(val)] + 48);
  }
  else
  {
    return (unsigned __int8)(Scaleform::Alg::LowerBitTable[HIBYTE(val)] + 56);
  }
}

void __fastcall Scaleform::HeapPT::FreeBin::Merge(
        Scaleform::HeapPT::FreeBin *this,
        unsigned __int8 *node,
        unsigned __int64 shift,
        bool left,
        bool right)
{
  unsigned __int64 v5; // rdi
  char v6; // r14
  unsigned __int8 *v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int8 *v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax

  v5 = *((unsigned int *)node + 6);
  v6 = shift;
  if ( v5 >= 0x41 )
    v5 = *((_QWORD *)node + 4);
  v9 = node;
  if ( left )
  {
    v10 = *((unsigned int *)node - 1);
    if ( v10 >= 0x41 )
      v10 = *((_QWORD *)node - 2);
    v9 = &node[-(v10 << shift)];
    v11 = *((unsigned int *)v9 + 6);
    if ( v11 >= 0x41 )
      v11 = *((_QWORD *)v9 + 4);
    v5 += v11;
    Scaleform::HeapPT::FreeBin::Pull(this, v9);
  }
  if ( right )
  {
    v12 = *((unsigned int *)node + 6);
    if ( v12 >= 0x41 )
      v12 = *((_QWORD *)node + 4);
    v13 = &node[v12 << v6];
    v14 = *((unsigned int *)v13 + 6);
    if ( v14 >= 0x41 )
      v14 = *((_QWORD *)v13 + 4);
    v5 += v14;
    Scaleform::HeapPT::FreeBin::Pull(this, v13);
  }
  v15 = v5 << v6;
  if ( v5 >= 0x41 )
  {
    *(_DWORD *)&v9[v15 - 4] = 65;
    *((_DWORD *)v9 + 6) = 65;
    *(_QWORD *)&v9[v15 - 16] = v5;
    *((_QWORD *)v9 + 4) = v5;
  }
  else
  {
    *(_DWORD *)&v9[v15 - 4] = v5;
    *((_DWORD *)v9 + 6) = v5;
  }
  Scaleform::HeapPT::FreeBin::Push(this, v9);
}

void __fastcall Scaleform::HeapPT::FreeBin::Pull(Scaleform::HeapPT::FreeBin *this, unsigned __int8 *node)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // r9
  Scaleform::HeapPT::BinLNode *v4; // rax
  unsigned __int64 *v5; // r8
  Scaleform::HeapPT::BinLNode *v6; // r10
  Scaleform::HeapPT::ListBin *p_ListBin2; // rcx
  unsigned __int64 v8; // r10
  Scaleform::HeapPT::BinLNode *v9; // rax
  unsigned __int64 *v10; // r8
  Scaleform::HeapPT::BinLNode *pNext; // r9

  v2 = *((unsigned int *)node + 6);
  if ( v2 >= 0x41 )
    v2 = *((_QWORD *)node + 4);
  this->FreeBlocks -= v2;
  if ( v2 > 0x40 )
  {
    if ( v2 > 0x80 )
    {
      Scaleform::HeapPT::TreeBin::PullNode(&this->TreeBin1, (Scaleform::HeapPT::BinTNode *)node);
    }
    else
    {
      p_ListBin2 = &this->ListBin2;
      v8 = v2 - 65;
      v9 = p_ListBin2[-1].Roots[v2];
      v10 = &p_ListBin2->Mask + v8;
      if ( node != (unsigned __int8 *)v9 )
        goto LABEL_7;
      pNext = v9->pNext;
      if ( v9 != pNext )
      {
        v10[1] = (unsigned __int64)pNext;
        goto LABEL_7;
      }
      v10[1] = 0i64;
      p_ListBin2->Mask &= ~(1i64 << v8);
    }
  }
  else
  {
    v3 = v2 - 1;
    v4 = this->ListBin1.Roots[v2 - 1];
    v5 = &this->ListBin1.Mask + v3;
    if ( node != (unsigned __int8 *)v4 )
    {
LABEL_7:
      *(_QWORD *)(*(_QWORD *)node + 8i64) = *((_QWORD *)node + 1);
      **((_QWORD **)node + 1) = *(_QWORD *)node;
      return;
    }
    v6 = v4->pNext;
    if ( v4 != v6 )
    {
      v5[1] = (unsigned __int64)v6;
      goto LABEL_7;
    }
    v5[1] = 0i64;
    this->ListBin1.Mask &= ~(1i64 << v3);
  }
}

Scaleform::HeapPT::BinLNode *__fastcall Scaleform::HeapPT::FreeBin::PullBest(
        Scaleform::HeapPT::FreeBin *this,
        unsigned __int64 blocks,
        unsigned __int64 shift,
        unsigned __int64 alignMask)
{
  Scaleform::HeapPT::BinLNode *result; // rax
  unsigned __int64 v9; // rdx
  Scaleform::HeapPT::BinTNode *Best; // rbx
  Scaleform::HeapPT::BinTNode *v11; // r9
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 ShortSize; // r8

  if ( blocks > 0x80 )
    goto LABEL_9;
  if ( blocks <= 0x40 )
  {
    result = Scaleform::HeapPT::ListBin::PullBest(&this->ListBin1, blocks - 1, blocks, shift, alignMask);
    if ( result )
    {
      this->FreeBlocks -= result->ShortSize;
      return result;
    }
  }
  v9 = 0i64;
  if ( blocks > 0x40 )
    v9 = blocks - 65;
  result = Scaleform::HeapPT::ListBin::PullBest(&this->ListBin2, v9, blocks, shift, alignMask);
  if ( result )
  {
    this->FreeBlocks -= (unsigned __int64)result[1].pPrev;
  }
  else
  {
LABEL_9:
    Best = Scaleform::HeapPT::TreeBin::FindBest(&this->TreeBin1, blocks);
    v11 = Best;
    if ( Best )
    {
      v12 = blocks << shift;
      while ( 1 )
      {
        v13 = ~alignMask & ((unsigned __int64)Best + alignMask);
        v14 = v13 - (_QWORD)Best;
        if ( v13 != (_QWORD)Best )
        {
          do
          {
            if ( v14 >= 0x20 )
              break;
            v13 += alignMask + 1;
            v14 += alignMask + 1;
          }
          while ( v14 );
        }
        ShortSize = Best->ShortSize;
        if ( ShortSize >= 0x41 )
          ShortSize = Best->Size;
        if ( v13 + v12 <= (unsigned __int64)Best + (ShortSize << shift) )
          break;
        Best = (Scaleform::HeapPT::BinTNode *)Best->pNext;
        if ( Best == v11 )
        {
          Best = Scaleform::HeapPT::TreeBin::FindBest(&this->TreeBin1, Best->Size + 1);
          v11 = Best;
          if ( !Best )
            return 0i64;
        }
      }
      Scaleform::HeapPT::TreeBin::PullNode(&this->TreeBin1, Best);
      this->FreeBlocks -= Best->Size;
      return Best;
    }
    else
    {
      return 0i64;
    }
  }
  return result;
}

Scaleform::HeapPT::BinTNode *__fastcall Scaleform::HeapPT::FreeBin::PullBest(
        Scaleform::HeapPT::FreeBin *this,
        unsigned __int64 blocks)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  Scaleform::HeapPT::BinLNode *v6; // rdx
  unsigned __int64 *v7; // r8
  Scaleform::HeapPT::BinLNode *pNext; // rcx
  Scaleform::HeapPT::BinTNode *result; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r8
  unsigned __int64 *v12; // rcx
  unsigned __int8 *v13; // rdx
  unsigned __int8 *v14; // rax
  Scaleform::HeapPT::BinTNode *Best; // rax
  Scaleform::HeapPT::BinTNode *v16; // rdi

  if ( blocks > 0x80 )
    goto LABEL_17;
  if ( blocks <= 0x40 )
  {
    v4 = this->ListBin1.Mask >> ((unsigned __int8)blocks - 1);
    if ( v4 )
    {
      v5 = blocks - 1 + (unsigned __int8)Scaleform::Alg::LowerBit(v4);
      v6 = this->ListBin1.Roots[v5];
      v7 = &this->ListBin1.Mask + v5;
      pNext = v6->pNext;
      if ( v6 == pNext )
      {
        v7[1] = 0i64;
        this->ListBin1.Mask &= ~(1i64 << v5);
      }
      else
      {
        v7[1] = (unsigned __int64)pNext;
        v6->pPrev->pNext = v6->pNext;
        v6->pNext->pPrev = v6->pPrev;
      }
      if ( v6 )
      {
        result = (Scaleform::HeapPT::BinTNode *)v6;
        this->FreeBlocks -= v6->ShortSize;
        return result;
      }
    }
  }
  v10 = 0i64;
  if ( blocks > 0x40 )
    v10 = blocks - 65;
  if ( !(this->ListBin2.Mask >> v10) )
    goto LABEL_17;
  v11 = v10 + (unsigned __int8)Scaleform::Alg::LowerBit(this->ListBin2.Mask >> v10);
  v12 = &this->ListBin1.Mask + v11;
  v13 = (unsigned __int8 *)v12[66];
  v14 = (unsigned __int8 *)*((_QWORD *)v13 + 1);
  if ( v13 == v14 )
  {
    v12[66] = 0i64;
    this->ListBin2.Mask &= ~(1i64 << v11);
  }
  else
  {
    v12[66] = (unsigned __int64)v14;
    *(_QWORD *)(*(_QWORD *)v13 + 8i64) = *((_QWORD *)v13 + 1);
    **((_QWORD **)v13 + 1) = *(_QWORD *)v13;
  }
  if ( v13 )
  {
    result = (Scaleform::HeapPT::BinTNode *)v13;
    this->FreeBlocks -= *((_QWORD *)v13 + 4);
  }
  else
  {
LABEL_17:
    Best = Scaleform::HeapPT::TreeBin::FindBest(&this->TreeBin1, blocks);
    v16 = Best;
    if ( Best )
    {
      v16 = (Scaleform::HeapPT::BinTNode *)Best->pNext;
      Scaleform::HeapPT::TreeBin::PullNode(&this->TreeBin1, v16);
      if ( v16 )
        this->FreeBlocks -= v16->Size;
    }
    return v16;
  }
  return result;
}

unsigned __int64 __fastcall Scaleform::HeapPT::ListBin::PullBest(
        Scaleform::HeapPT::ListBin *this,
        unsigned __int64 idx,
        unsigned __int64 blocks,
        unsigned __int64 shift,
        unsigned __int64 alignMask)
{
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rbx
  Scaleform::HeapPT::BinLNode **i; // rdi
  Scaleform::HeapPT::BinLNode *v11; // rdx
  Scaleform::HeapPT::BinLNode *v12; // rax
  unsigned __int64 *v13; // rcx
  Scaleform::HeapPT::BinLNode *pNext; // r8

  result = this->Mask >> idx;
  if ( result )
  {
    v9 = idx + (unsigned __int8)Scaleform::Alg::LowerBit(result);
    for ( i = &this->Roots[v9]; ; ++i )
    {
      result = (unsigned __int64)Scaleform::HeapPT::ListBin::FindAligned(this, *i, blocks, shift, alignMask);
      v11 = (Scaleform::HeapPT::BinLNode *)result;
      if ( result )
        break;
      if ( ++v9 >= 0x40 )
        return result;
    }
    v12 = this->Roots[v9];
    v13 = &this->Mask + v9;
    if ( v11 == v12 )
    {
      pNext = v12->pNext;
      if ( v12 == pNext )
      {
        v13[1] = 0i64;
        this->Mask &= ~(1i64 << v9);
        return (unsigned __int64)v11;
      }
      v13[1] = (unsigned __int64)pNext;
    }
    v11->pPrev->pNext = v11->pNext;
    v11->pNext->pPrev = v11->pPrev;
    return (unsigned __int64)v11;
  }
  return result;
}

void __fastcall Scaleform::HeapPT::TreeBin::PullNode(
        Scaleform::HeapPT::TreeBin *this,
        Scaleform::HeapPT::BinTNode *node)
{
  Scaleform::HeapPT::BinTNode *pPrev; // r8
  Scaleform::HeapPT::BinTNode *Parent; // r10
  Scaleform::HeapPT::BinLNode *pNext; // rax
  Scaleform::HeapPT::BinTNode **v6; // r9
  Scaleform::HeapPT::BinTNode *v7; // rcx
  Scaleform::HeapPT::BinTNode **Child; // rax
  unsigned __int64 Index; // rax
  __int64 v10; // rax
  Scaleform::HeapPT::BinTNode *v11; // rax
  Scaleform::HeapPT::BinTNode *v12; // rax

  pPrev = (Scaleform::HeapPT::BinTNode *)node->pPrev;
  Parent = node->Parent;
  if ( node->pPrev == node )
  {
    pPrev = node->Child[1];
    v6 = &node->Child[1];
    if ( pPrev || (pPrev = node->Child[0], v6 = node->Child, pPrev) )
    {
      while ( 1 )
      {
        v7 = pPrev->Child[1];
        Child = &pPrev->Child[1];
        if ( !v7 )
        {
          v7 = pPrev->Child[0];
          Child = pPrev->Child;
          if ( !v7 )
            break;
        }
        v6 = Child;
        pPrev = v7;
      }
      *v6 = 0i64;
    }
  }
  else
  {
    pNext = node->pNext;
    pNext->pPrev = pPrev;
    pPrev->pNext = pNext;
  }
  if ( Parent )
  {
    Index = node->Index;
    if ( node == this->Roots[Index] )
    {
      this->Roots[Index] = pPrev;
      if ( !pPrev )
      {
        this->Mask &= ~(1i64 << node->Index);
        return;
      }
      goto LABEL_16;
    }
    v10 = 48i64;
    if ( Parent->Child[0] != node )
      v10 = 56i64;
    *(Scaleform::HeapPT::BinLNode **)((char *)&Parent->pPrev + v10) = pPrev;
    if ( pPrev )
    {
LABEL_16:
      pPrev->Parent = Parent;
      v11 = node->Child[0];
      if ( v11 )
      {
        pPrev->Child[0] = v11;
        v11->Parent = pPrev;
      }
      v12 = node->Child[1];
      if ( v12 )
      {
        pPrev->Child[1] = v12;
        v12->Parent = pPrev;
      }
    }
  }
}

void __fastcall Scaleform::HeapPT::FreeBin::Push(Scaleform::HeapPT::FreeBin *this, unsigned __int8 *node)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r8
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r9
  Scaleform::HeapPT::ListBin *p_ListBin2; // r8
  Scaleform::HeapPT::BinLNode *v7; // rcx

  v2 = *((unsigned int *)node + 6);
  if ( v2 >= 0x41 )
    v2 = *((_QWORD *)node + 4);
  this->FreeBlocks += v2;
  if ( v2 > 0x40 )
  {
    if ( v2 > 0x80 )
    {
      Scaleform::HeapPT::TreeBin::PushNode(&this->TreeBin1, (Scaleform::HeapPT::BinTNode *)node);
    }
    else
    {
      v5 = v2 - 65;
      p_ListBin2 = &this->ListBin2;
      v7 = this->ListBin1.Roots[v2];
      if ( v7 )
      {
        *(_QWORD *)node = v7;
        *((_QWORD *)node + 1) = v7->pNext;
        v7->pNext->pPrev = (Scaleform::HeapPT::BinLNode *)node;
        v7->pNext = (Scaleform::HeapPT::BinLNode *)node;
      }
      else
      {
        *((_QWORD *)node + 1) = node;
        *(_QWORD *)node = node;
      }
      p_ListBin2->Roots[v5] = (Scaleform::HeapPT::BinLNode *)node;
      p_ListBin2->Mask |= 1i64 << v5;
    }
  }
  else
  {
    v3 = *(&this->ListBin1.Mask + v2);
    v4 = v2 - 1;
    if ( v3 )
    {
      *(_QWORD *)node = v3;
      *((_QWORD *)node + 1) = *(_QWORD *)(v3 + 8);
      **(_QWORD **)(v3 + 8) = node;
      *(_QWORD *)(v3 + 8) = node;
    }
    else
    {
      *((_QWORD *)node + 1) = node;
      *(_QWORD *)node = node;
    }
    this->ListBin1.Roots[v4] = (Scaleform::HeapPT::BinLNode *)node;
    this->ListBin1.Mask |= 1i64 << v4;
  }
}

void __fastcall Scaleform::HeapPT::TreeBin::PushNode(
        Scaleform::HeapPT::TreeBin *this,
        Scaleform::HeapPT::BinTNode *node)
{
  unsigned __int64 Size; // rdi
  unsigned __int64 v5; // rcx
  unsigned __int8 v6; // al
  Scaleform::HeapPT::BinTNode *v7; // rdx
  Scaleform::HeapPT::BinTNode *pPrev; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rax
  Scaleform::HeapPT::BinLNode **v12; // rcx
  Scaleform::HeapPT::BinLNode *v13; // rax
  Scaleform::HeapPT::BinLNode *pNext; // rax

  Size = node->Size;
  v5 = Size >> 6;
  if ( Size >> 6 )
  {
    v6 = Scaleform::Alg::UpperBit(v5);
    v5 = ((Size >> (v6 + 5)) & 1) + 2i64 * v6;
  }
  node->Index = v5;
  node->Child[1] = 0i64;
  node->Child[0] = 0i64;
  v7 = (Scaleform::HeapPT::BinTNode *)&this->Roots[v5];
  if ( (this->Mask & (1i64 << v5)) != 0 )
  {
    pPrev = (Scaleform::HeapPT::BinTNode *)v7->pPrev;
    if ( v5 < 0x3F )
      v9 = 59 - (v5 >> 1);
    else
      LOBYTE(v9) = 0;
    v10 = Size << v9;
    if ( pPrev->Size == Size )
    {
LABEL_11:
      pNext = pPrev->pNext;
      pNext->pPrev = node;
      pPrev->pNext = node;
      node->pNext = pNext;
      node->pPrev = pPrev;
      node->Parent = 0i64;
    }
    else
    {
      while ( 1 )
      {
        v11 = v10;
        v10 *= 2i64;
        v12 = &pPrev->pPrev + (v11 >> 63);
        v13 = v12[6];
        if ( !v13 )
          break;
        pPrev = (Scaleform::HeapPT::BinTNode *)v12[6];
        if ( v13[1].pPrev == (Scaleform::HeapPT::BinLNode *)Size )
          goto LABEL_11;
      }
      v12[6] = node;
      node->Parent = pPrev;
      node->pPrev = node;
      node->pNext = node;
    }
  }
  else
  {
    this->Mask |= 1i64 << v5;
    v7->pPrev = node;
    node->Parent = v7;
    node->pPrev = node;
    node->pNext = node;
  }
}

void __fastcall Scaleform::HeapPT::FreeBin::Reset(Scaleform::HeapPT::FreeBin *this)
{
  this->ListBin1.Mask = 0i64;
  memset(this->ListBin1.Roots, 0, sizeof(this->ListBin1.Roots));
  this->ListBin2.Mask = 0i64;
  memset(this->ListBin2.Roots, 0, sizeof(this->ListBin2.Roots));
  this->TreeBin1.Mask = 0i64;
  memset(this->TreeBin1.Roots, 0, sizeof(this->TreeBin1.Roots));
  this->FreeBlocks = 0i64;
}

void __fastcall Scaleform::HeapPT::FreeBin::VisitMem(
        Scaleform::HeapPT::FreeBin *this,
        Scaleform::Heap::MemVisitor *visitor,
        unsigned __int64 shift,
        Scaleform::Heap::MemVisitor::Category cat)
{
  Scaleform::HeapPT::BinLNode **Roots; // r15
  __int64 v9; // r12
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  Scaleform::HeapPT::BinLNode *v12; // rsi
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r9

  Roots = this->ListBin2.Roots;
  v9 = 64i64;
  do
  {
    v10 = (unsigned __int64)*(Roots - 65);
    v11 = v10;
    if ( v10 )
    {
      do
      {
        visitor->Visit(
          visitor,
          *(const Scaleform::Heap::HeapSegment **)(v11 + 16),
          v11,
          (unsigned __int64)*(unsigned int *)(v11 + 24) << shift,
          cat);
        v11 = *(_QWORD *)(v11 + 8);
      }
      while ( v11 != v10 );
    }
    v12 = *Roots;
    v13 = (unsigned __int64)*Roots;
    if ( *Roots )
    {
      do
      {
        v14 = *(unsigned int *)(v13 + 24);
        if ( v14 >= 0x41 )
          v14 = *(_QWORD *)(v13 + 32);
        visitor->Visit(visitor, *(const Scaleform::Heap::HeapSegment **)(v13 + 16), v13, v14 << shift, cat);
        v13 = *(_QWORD *)(v13 + 8);
      }
      while ( (Scaleform::HeapPT::BinLNode *)v13 != v12 );
    }
    Scaleform::HeapPT::FreeBin::visitTree(this, (const Scaleform::HeapPT::BinTNode *)Roots[65], visitor, shift, cat);
    ++Roots;
    --v9;
  }
  while ( v9 );
}

void __fastcall Scaleform::HeapPT::FreeBin::VisitUnused(
        Scaleform::HeapPT::FreeBin *this,
        Scaleform::Heap::SegVisitor *visitor,
        unsigned __int64 shift,
        unsigned int cat)
{
  Scaleform::HeapPT::BinLNode **Roots; // r15
  __int64 v9; // r12
  __int64 v10; // rdi
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  Scaleform::HeapPT::BinLNode *v14; // rdi
  Scaleform::HeapPT::BinLNode *v15; // rbx
  unsigned __int64 ShortSize; // rax
  unsigned __int64 pPrev; // rdx

  Roots = this->ListBin2.Roots;
  v9 = 64i64;
  do
  {
    v10 = (__int64)*(Roots - 65);
    v11 = v10;
    if ( v10 )
    {
      v12 = *(unsigned int *)(v10 + 24);
      if ( v12 >= 0x41 )
        v12 = *(_QWORD *)(v10 + 32);
      if ( v12 << shift >= 0x1000 )
      {
        do
        {
          v13 = *(unsigned int *)(v11 + 24);
          if ( v13 >= 0x41 )
            v13 = *(_QWORD *)(v11 + 32);
          if ( ((v11 + 4095) & 0xFFFFFFFFFFFFF000ui64) + 4096 <= ((v11 + (v13 << shift)) & 0xFFFFFFFFFFFFF000ui64) )
            ((void (__fastcall *)(Scaleform::Heap::SegVisitor *, _QWORD, _QWORD))visitor->Visit)(
              visitor,
              cat,
              *(_QWORD *)(*(_QWORD *)(v11 + 16) + 40i64));
          v11 = *(_QWORD *)(v11 + 8);
        }
        while ( v11 != v10 );
      }
    }
    v14 = *Roots;
    v15 = *Roots;
    if ( *Roots )
    {
      ShortSize = v14->ShortSize;
      if ( ShortSize >= 0x41 )
        ShortSize = (unsigned __int64)v14[1].pPrev;
      if ( ShortSize << shift >= 0x1000 )
      {
        do
        {
          pPrev = v15->ShortSize;
          if ( pPrev >= 0x41 )
            pPrev = (unsigned __int64)v15[1].pPrev;
          if ( (((unsigned __int64)&v15[127].Filler + 3) & 0xFFFFFFFFFFFFF000ui64) + 4096 <= (((unsigned __int64)v15
                                                                                             + (pPrev << shift)) & 0xFFFFFFFFFFFFF000ui64) )
            ((void (__fastcall *)(Scaleform::Heap::SegVisitor *, _QWORD, Scaleform::MemoryHeapPT *))visitor->Visit)(
              visitor,
              cat,
              v15->pSegment->pHeap);
          v15 = v15->pNext;
        }
        while ( v15 != v14 );
      }
    }
    Scaleform::HeapPT::FreeBin::visitUnusedInTree(
      this,
      (const Scaleform::HeapPT::BinTNode *)Roots[65],
      visitor,
      shift,
      cat);
    ++Roots;
    --v9;
  }
  while ( v9 );
}

void __fastcall Scaleform::HeapPT::FreeBin::visitTree(
        Scaleform::HeapPT::FreeBin *this,
        const Scaleform::HeapPT::BinTNode *root,
        Scaleform::Heap::MemVisitor *visitor,
        unsigned __int64 shift,
        Scaleform::Heap::MemVisitor::Category cat)
{
  unsigned __int64 v5; // rax
  const Scaleform::HeapPT::BinTNode *v7; // rdi
  unsigned __int64 v8; // rbx
  Scaleform::HeapPT::FreeBin *v9; // [rsp+50h] [rbp+8h]

  if ( root )
  {
    v9 = this;
    v5 = shift;
    v7 = root;
    do
    {
      Scaleform::HeapPT::FreeBin::visitTree(this, v7->Child[0], visitor, v5, cat);
      v8 = (unsigned __int64)v7;
      do
      {
        visitor->Visit(
          visitor,
          *(const Scaleform::Heap::HeapSegment **)(v8 + 16),
          v8,
          *(_QWORD *)(v8 + 32) << shift,
          cat);
        v8 = *(_QWORD *)(v8 + 8);
      }
      while ( (const Scaleform::HeapPT::BinTNode *)v8 != v7 );
      v7 = v7->Child[1];
      v5 = shift;
      this = v9;
    }
    while ( v7 );
  }
}

void __fastcall Scaleform::HeapPT::FreeBin::visitUnusedInTree(
        Scaleform::HeapPT::FreeBin *this,
        const Scaleform::HeapPT::BinTNode *root,
        Scaleform::Heap::SegVisitor *visitor,
        unsigned __int64 shift,
        unsigned int cat)
{
  const Scaleform::HeapPT::BinTNode *v7; // rdi
  const Scaleform::HeapPT::BinTNode *pNext; // rbx
  unsigned __int64 ShortSize; // rdx
  Scaleform::HeapPT::FreeBin *v10; // [rsp+40h] [rbp+8h]

  if ( root )
  {
    v10 = this;
    v7 = root;
    do
    {
      Scaleform::HeapPT::FreeBin::visitUnusedInTree(this, v7->Child[0], visitor, shift, cat);
      pNext = v7;
      do
      {
        ShortSize = pNext->ShortSize;
        if ( ShortSize >= 0x41 )
          ShortSize = pNext->Size;
        if ( (((unsigned __int64)&pNext[56].Child[1] + 7) & 0xFFFFFFFFFFFFF000ui64) + 4096 <= (((unsigned __int64)pNext
                                                                                              + (ShortSize << shift)) & 0xFFFFFFFFFFFFF000ui64) )
          ((void (__fastcall *)(Scaleform::Heap::SegVisitor *, _QWORD, Scaleform::MemoryHeapPT *))visitor->Visit)(
            visitor,
            cat,
            pNext->pSegment->pHeap);
        pNext = (const Scaleform::HeapPT::BinTNode *)pNext->pNext;
      }
      while ( pNext != v7 );
      v7 = v7->Child[1];
      this = v10;
    }
    while ( v7 );
  }
}

