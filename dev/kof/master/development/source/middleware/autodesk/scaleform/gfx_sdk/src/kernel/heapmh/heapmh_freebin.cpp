#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_freebin.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_root.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"

Scaleform::HeapMH::ListBinMH::ListBinMH(); // 0x140436C60
unsigned char * Scaleform::HeapMH::ListBinMH::GetAlignedPtr(unsigned char * start, unsigned long long alignMask); // 0x140436C90
Scaleform::HeapMH::BinNodeMH * Scaleform::HeapMH::ListBinMH::PullBest(unsigned long long blocks); // 0x1404370B0
Scaleform::HeapMH::BinNodeMH * Scaleform::HeapMH::ListBinMH::PullBest(unsigned long long blocks, unsigned long long alignMask); // 0x140436F40
void Scaleform::HeapMH::ListBinMH::Push(unsigned char * node); // 0x140437170
void Scaleform::HeapMH::ListBinMH::Pull(unsigned char * node); // 0x140436E70
void Scaleform::HeapMH::ListBinMH::Merge(unsigned char * node, unsigned long long bytes, bool left, bool right, Scaleform::HeapMH::PageMH * page); // 0x140436CA0void __fastcall Scaleform::HeapMH::ListBinMH::ListBinMH(Scaleform::HeapMH::ListBinMH *this)
{
  this->Mask = 0i64;
  memset(this->Roots, 0, sizeof(this->Roots));
}

unsigned __int8 *__fastcall Scaleform::HeapMH::ListBinMH::GetAlignedPtr(
        unsigned __int8 *start,
        unsigned __int64 alignMask)
{
  return (unsigned __int8 *)(~alignMask & (unsigned __int64)&start[alignMask]);
}

void __fastcall Scaleform::HeapMH::ListBinMH::Merge(
        Scaleform::HeapMH::ListBinMH *this,
        unsigned __int8 *node,
        unsigned __int64 bytes,
        bool left,
        bool right,
        Scaleform::HeapMH::PageMH *page)
{
  unsigned __int8 *v6; // r15
  unsigned __int64 v8; // rdi
  unsigned __int64 v10; // r10
  unsigned __int8 *v11; // rbx
  unsigned __int64 v12; // rcx
  unsigned __int8 *v13; // rdx
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r9
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rax

  v6 = node + 8;
  v8 = bytes >> 4;
  v10 = 2 * (bytes >> 4);
  *(_QWORD *)node ^= ((unsigned __int8)(bytes >> 4) ^ (unsigned __int8)*(_QWORD *)node) & 0xF;
  v11 = node;
  *(_QWORD *)&node[8 * v10 - 16] = *(_QWORD *)node;
  v12 = (bytes >> 8) | *((_QWORD *)node + 1) & 0xFFFFFFFFFFFFFFF0ui64;
  *((_QWORD *)node + 1) = v12;
  *(_QWORD *)&node[8 * v10 - 8] = v12;
  if ( left )
  {
    v11 = &node[-16 * (*((_DWORD *)node - 4) & 0xF | (16i64 * (*((_DWORD *)node - 2) & 0xF)))];
    v6 = v11 + 8;
    v8 += *(_DWORD *)v11 & 0xF | (16i64 * (*((_DWORD *)v11 + 2) & 0xF));
    Scaleform::HeapMH::ListBinMH::Pull(this, v11);
  }
  if ( right )
  {
    v13 = &node[16 * (*(_DWORD *)node & 0xF | (16i64 * (*((_DWORD *)node + 2) & 0xF)))];
    v8 += *(_DWORD *)v13 & 0xF | (16i64 * (*((_DWORD *)v13 + 2) & 0xF));
    Scaleform::HeapMH::ListBinMH::Pull(this, v13);
  }
  *(_QWORD *)v11 ^= ((unsigned __int8)v8 ^ (unsigned __int8)*(_QWORD *)v11) & 0xF;
  v14 = 2 * (v8 & 0xFFFFFFFFFFFFFFFi64);
  *(_QWORD *)&v11[8 * v14 - 16] = *(_QWORD *)v11;
  v15 = *(_QWORD *)v6 & 0xFFFFFFFFFFFFFFF0ui64 | (v8 >> 4);
  *(_QWORD *)v6 = v15;
  *(_QWORD *)&v11[8 * v14 - 8] = v15;
  v16 = *(_QWORD *)v6 & 0xFi64;
  v17 = *(_QWORD *)v11 & 0xFi64;
  if ( (v17 | (16 * (unsigned __int64)(*(_DWORD *)v6 & 0xF))) > 2 )
    *((_QWORD *)v11 + 2) = page;
  v18 = 63i64;
  if ( v8 - 1 < 0x3F )
    v18 = v8 - 1;
  v19 = (unsigned __int64)this->Roots[v18];
  if ( v19 )
  {
    *(_QWORD *)v11 = v19 | v17;
    *(_QWORD *)v6 = v16 | *(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0ui64;
    v20 = (_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0ui64);
    *v20 &= 0xFui64;
    *v20 |= (unsigned __int64)v11;
    *(_QWORD *)(v19 + 8) &= 0xFui64;
    *(_QWORD *)(v19 + 8) |= (unsigned __int64)v11;
  }
  else
  {
    *(_QWORD *)v11 = (unsigned __int64)v11 | v17;
    *(_QWORD *)v6 = (unsigned __int64)v11 | v16;
  }
  this->Roots[v18] = (Scaleform::HeapMH::BinNodeMH *)v11;
  this->Mask |= 1i64 << v18;
}

void __fastcall Scaleform::HeapMH::ListBinMH::Pull(Scaleform::HeapMH::ListBinMH *this, unsigned __int8 *node)
{
  __int64 v2; // r11
  __int64 v3; // r10
  __int64 v4; // rax
  Scaleform::HeapMH::BinNodeMH *v5; // r8
  unsigned __int64 *v6; // rbx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax

  v2 = *((_QWORD *)node + 1);
  v3 = 63i64;
  v4 = *(_QWORD *)node & 0xFi64;
  if ( (v4 | (16 * (unsigned __int64)(v2 & 0xF))) - 1 < 0x3F )
    v3 = (v4 | (16 * (*((_QWORD *)node + 1) & 0xFi64))) - 1;
  v5 = this->Roots[v3];
  v6 = &this->Mask + v3;
  if ( node == (unsigned __int8 *)v5 )
  {
    v8 = v5->Next & 0xFFFFFFFFFFFFFFF0ui64;
    if ( v5 == (Scaleform::HeapMH::BinNodeMH *)v8 )
    {
      v6[1] = 0i64;
      v9 = this->Mask & ~(1i64 << v3);
    }
    else
    {
      v6[1] = v8;
      *(_QWORD *)((*(_QWORD *)node & 0xFFFFFFFFFFFFFFF0ui64) + 8) = *((_QWORD *)node + 1) ^ (*(_DWORD *)((*(_QWORD *)node & 0xFFFFFFFFFFFFFFF0ui64) + 8) ^ *((_DWORD *)node + 2)) & 0xF;
      this = (Scaleform::HeapMH::ListBinMH *)(*((_QWORD *)node + 1) & 0xFFFFFFFFFFFFFFF0ui64);
      v9 = *(_QWORD *)node ^ (LODWORD(this->Mask) ^ *(_DWORD *)node) & 0xF;
    }
    this->Mask = v9;
  }
  else
  {
    v7 = *(_QWORD *)node & 0xFFFFFFFFFFFFFFF0ui64;
    *(_QWORD *)(v7 + 8) &= 0xFui64;
    *(_QWORD *)(v7 + 8) |= v2 & 0xFFFFFFFFFFFFFFF0ui64;
    *(_QWORD *)(*((_QWORD *)node + 1) & 0xFFFFFFFFFFFFFFF0ui64) = *(_QWORD *)node ^ (*(_DWORD *)node ^ *(_DWORD *)(*((_QWORD *)node + 1) & 0xFFFFFFFFFFFFFFF0ui64)) & 0xF;
  }
}

unsigned __int64 __fastcall Scaleform::HeapMH::ListBinMH::PullBest(
        Scaleform::HeapMH::ListBinMH *this,
        unsigned __int64 blocks,
        unsigned __int64 alignMask)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v8; // r10
  Scaleform::HeapMH::BinNodeMH **i; // rdi
  unsigned __int64 v10; // r9
  Scaleform::HeapMH::BinNodeMH *v11; // rdx
  unsigned __int64 *v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx

  v3 = 63i64;
  if ( blocks - 1 < 0x3F )
    v3 = blocks - 1;
  result = this->Mask >> v3;
  if ( result )
  {
    v8 = v3 + Scaleform::Alg::LowerBit(result);
    for ( i = &this->Roots[v8]; ; ++i )
    {
      result = (unsigned __int64)*i;
      if ( *i )
        break;
LABEL_8:
      if ( ++v8 >= 0x40 )
        return 0i64;
    }
    while ( 1 )
    {
      v10 = *(_QWORD *)(result + 8);
      if ( 16 * blocks + (~alignMask & (result + alignMask)) <= result
                                                              + 16 * (*(_DWORD *)result & 0xF | (16 * (v10 & 0xF))) )
        break;
      result = v10 & 0xFFFFFFFFFFFFFFF0ui64;
      if ( (Scaleform::HeapMH::BinNodeMH *)(v10 & 0xFFFFFFFFFFFFFFF0ui64) == *i )
        goto LABEL_8;
    }
    v11 = this->Roots[v8];
    v12 = &this->Mask + v8;
    if ( (Scaleform::HeapMH::BinNodeMH *)result != v11 )
    {
      v13 = *(_QWORD *)result & 0xFFFFFFFFFFFFFFF0ui64;
      v14 = v10 ^ (*(_DWORD *)(v13 + 8) ^ (unsigned int)v10) & 0xF;
LABEL_14:
      *(_QWORD *)(v13 + 8) = v14;
      *(_QWORD *)(*(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF0ui64) = *(_QWORD *)result ^ (*(_DWORD *)(*(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF0ui64) ^ *(_DWORD *)result) & 0xF;
      return result;
    }
    v15 = v11->Next & 0xFFFFFFFFFFFFFFF0ui64;
    if ( v11 != (Scaleform::HeapMH::BinNodeMH *)v15 )
    {
      v12[1] = v15;
      v13 = *(_QWORD *)result & 0xFFFFFFFFFFFFFFF0ui64;
      v14 = *(_QWORD *)(result + 8) ^ (*(_DWORD *)(v13 + 8) ^ *(_DWORD *)(result + 8)) & 0xF;
      goto LABEL_14;
    }
    v12[1] = 0i64;
    this->Mask &= ~(1i64 << v8);
  }
  return result;
}

unsigned __int64 __fastcall Scaleform::HeapMH::ListBinMH::PullBest(
        Scaleform::HeapMH::ListBinMH *this,
        unsigned __int64 blocks)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rdi
  unsigned __int64 result; // rax
  __int64 v6; // rcx
  Scaleform::HeapMH::BinNodeMH *v7; // rdx
  unsigned __int64 *v8; // r8
  unsigned __int64 v9; // rax

  v2 = blocks - 1;
  v3 = 63i64;
  if ( v2 < 0x3F )
    v3 = v2;
  result = this->Mask >> v3;
  if ( result )
  {
    v6 = v3 + Scaleform::Alg::LowerBit(result);
    v7 = this->Roots[v6];
    v8 = &this->Mask + v6;
    v9 = v7->Next & 0xFFFFFFFFFFFFFFF0ui64;
    if ( v7 == (Scaleform::HeapMH::BinNodeMH *)v9 )
    {
      v8[1] = 0i64;
      this->Mask &= ~(1i64 << v6);
    }
    else
    {
      v8[1] = v9;
      *(_QWORD *)((v7->Prev & 0xFFFFFFFFFFFFFFF0ui64) + 8) = v7->Next ^ (LODWORD(v7->Next) ^ *(_DWORD *)((v7->Prev & 0xFFFFFFFFFFFFFFF0ui64) + 8)) & 0xF;
      *(_QWORD *)(v7->Next & 0xFFFFFFFFFFFFFFF0ui64) = v7->Prev ^ (*(_DWORD *)(v7->Next & 0xFFFFFFFFFFFFFFF0ui64) ^ LODWORD(v7->Prev)) & 0xF;
    }
    return (unsigned __int64)v7;
  }
  return result;
}

void __fastcall Scaleform::HeapMH::ListBinMH::Push(Scaleform::HeapMH::ListBinMH *this, unsigned __int8 *node)
{
  __int64 v2; // r11
  __int64 v3; // r9
  __int64 v4; // r8
  unsigned __int64 v6; // rcx
  _QWORD *v7; // rax

  v2 = 63i64;
  v3 = *((_QWORD *)node + 1) & 0xFi64;
  v4 = *(_QWORD *)node & 0xFi64;
  if ( (v4 | (16 * (unsigned __int64)(*((_DWORD *)node + 2) & 0xF))) - 1 < 0x3F )
    v2 = (v4 | (16i64 * (*((_DWORD *)node + 2) & 0xF))) - 1;
  v6 = (unsigned __int64)this->Roots[v2];
  if ( v6 )
  {
    *(_QWORD *)node = v6 | v4;
    *((_QWORD *)node + 1) = v3 | *(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0ui64;
    v7 = (_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0ui64);
    *v7 &= 0xFui64;
    *v7 |= (unsigned __int64)node;
    *(_QWORD *)(v6 + 8) &= 0xFui64;
    *(_QWORD *)(v6 + 8) |= (unsigned __int64)node;
  }
  else
  {
    *(_QWORD *)node = (unsigned __int64)node | v4;
    *((_QWORD *)node + 1) = (unsigned __int64)node | v3;
  }
  this->Roots[v2] = (Scaleform::HeapMH::BinNodeMH *)node;
  this->Mask |= 1i64 << v2;
}

