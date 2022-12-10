#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_starter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_granulator.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_alloclite.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_pagetable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_heaptypes.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"

Scaleform::HeapPT::PageTable * Scaleform::HeapPT::GlobalPageTable; // 0x140A73710
unsigned long long Scaleform::HeapPT::PageTableMem[8193]; // 0x140A73720
void Scaleform::HeapPT::PageTable::Init(); // 0x14041D990
bool Scaleform::HeapPT::PageTable::MapRange(void * mem, unsigned long long size); // 0x14041D9D0
void Scaleform::HeapPT::PageTable::UnmapRange(void * mem, unsigned long long size); // 0x14041E180
bool Scaleform::HeapPT::PageTable::RemapRange(void * mem, unsigned long long newSize, unsigned long long oldSize); // 0x14041DDE0
void Scaleform::HeapPT::PageTable::SetSegmentInRange(unsigned long long address, unsigned long long size, Scaleform::Heap::HeapSegment * seg); // 0x14041DED0//decompilation failure at 140A73710!
//decompilation failure at 140A73720!
void Scaleform::HeapPT::PageTable::Init(void)
{
  _QWORD *v0; // rax
  __int64 v1; // rcx

  v0 = &unk_140A73728;
  Scaleform::HeapPT::PageTableMem[0] = 0i64;
  v1 = 4096i64;
  do
  {
    *v0 = 0i64;
    v0[1] = 0i64;
    v0 += 2;
    --v1;
  }
  while ( v1 );
  Scaleform::HeapPT::GlobalPageTable = (Scaleform::HeapPT::PageTable *)Scaleform::HeapPT::PageTableMem;
}

char __fastcall Scaleform::HeapPT::PageTable::MapRange(
        Scaleform::HeapPT::PageTable *this,
        void *mem,
        unsigned __int64 size)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r15
  Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256>,256>,4096>,4096> *v9; // r13
  Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256>,256>,4096> *v10; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rbx
  void *v15; // rax
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  __int64 v19; // r13
  __int64 *v20; // r14
  void *v21; // rax
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // r15
  __int64 v24; // rsi
  __int64 v25; // rbx
  void *v26; // rax
  unsigned __int64 v28; // [rsp+20h] [rbp-98h]
  unsigned __int64 v29; // [rsp+28h] [rbp-90h]
  __int64 v30; // [rsp+30h] [rbp-88h]
  __int64 v31; // [rsp+38h] [rbp-80h]
  unsigned __int64 v32; // [rsp+40h] [rbp-78h]
  __int64 v33; // [rsp+48h] [rbp-70h]
  unsigned __int64 v34; // [rsp+50h] [rbp-68h]
  Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256>,256>,4096>,4096> *v35; // [rsp+58h] [rbp-60h]
  unsigned __int64 v36; // [rsp+60h] [rbp-58h]
  _QWORD *v37; // [rsp+68h] [rbp-50h]
  unsigned __int64 v38; // [rsp+70h] [rbp-48h]
  unsigned __int64 v40; // [rsp+D0h] [rbp+18h]
  unsigned __int64 v41; // [rsp+D8h] [rbp+20h]

  v4 = (unsigned __int64)mem + size - 1;
  v5 = (unsigned __int64)mem >> 52;
  v6 = v4 >> 52;
  v7 = (unsigned __int64)mem;
  v28 = (unsigned __int64)mem >> 52;
  v8 = (unsigned __int64)mem >> 52;
  v32 = v4;
  v34 = v4 >> 52;
  v40 = (unsigned __int64)mem >> 52;
  if ( (unsigned __int64)mem >> 52 > v4 >> 52 )
    return 1;
  v9 = &this->RootTable[v5];
  v35 = v9;
  while ( 1 )
  {
    if ( !v9->pTable )
    {
      v10 = (Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256>,256>,4096> *)Scaleform::HeapPT::Starter::Alloc(this->pStarter, 0x10000ui64, 0x8000ui64);
      v9->pTable = v10;
      if ( !v10 )
      {
        Scaleform::HeapPT::PageTable::UnmapRange(this, (void *)v7, (v8 - v5) << 52);
        return 0;
      }
      memset(v10, 0, 0x10000ui64);
      v6 = v34;
    }
    ++v9->RefCount;
    v11 = 0i64;
    v41 = 0i64;
    v12 = 4095i64;
    v31 = 4095i64;
    if ( v8 == v5 )
    {
      v11 = (v7 >> 40) & 0xFFF;
      v41 = v11;
    }
    if ( v8 == v6 )
    {
      v12 = (v4 >> 40) & 0xFFF;
      v31 = v12;
    }
    v29 = v11;
    if ( v11 <= v12 )
      break;
LABEL_39:
    ++v8;
    ++v9;
    v40 = v8;
    v35 = v9;
    if ( v8 > v6 )
      return 1;
  }
  v13 = 16 * v11;
  v33 = 16 * v11;
  while ( 1 )
  {
    v14 = (Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256>,256> **)((char *)&v9->pTable->pTable + v13);
    v37 = v14;
    if ( !*v14 )
    {
      v15 = Scaleform::HeapPT::Starter::Alloc(this->pStarter, 0x10000ui64, 0x8000ui64);
      *v14 = v15;
      if ( !v15 )
      {
        Scaleform::HeapPT::PageTable::UnmapRange(this, (void *)v7, (v11 + ((v40 - v28) << 12) - v29) << 40);
        return 0;
      }
      memset(v15, 0, 0x10000ui64);
      v12 = v31;
    }
    ++v14[1];
    v16 = 0i64;
    v17 = 4095i64;
    v30 = 4095i64;
    if ( v11 == v29 )
      v16 = (v7 >> 28) & 0xFFF;
    if ( v11 == v12 )
    {
      v17 = (v4 >> 28) & 0xFFF;
      v30 = v17;
    }
    v36 = v16;
    v18 = v16;
    if ( v16 <= v17 )
      break;
LABEL_37:
    ++v11;
    v7 = (unsigned __int64)mem;
    v13 = v33 + 16;
    v41 = v11;
    v33 += 16i64;
    if ( v11 > v12 )
    {
      v8 = v40;
      v5 = v28;
      v6 = v34;
      goto LABEL_39;
    }
  }
  v19 = 16 * v16;
  while ( 1 )
  {
    v20 = (__int64 *)(*v14 + v19);
    if ( !*v20 )
    {
      v21 = Scaleform::HeapPT::Starter::Alloc(this->pStarter, 0x1000ui64, 0x800ui64);
      *v20 = (__int64)v21;
      if ( !v21 )
      {
        Scaleform::HeapPT::PageTable::UnmapRange(
          this,
          mem,
          (v16 + ((v41 + ((v40 - v28) << 12) - v29) << 12) - v18) << 28);
        return 0;
      }
      memset(v21, 0, 0x1000ui64);
      v17 = v30;
    }
    ++v20[1];
    v22 = 0i64;
    v23 = 255i64;
    if ( v16 == v18 )
      v22 = (unsigned __int8)((unsigned __int64)mem >> 20);
    if ( v16 == v17 )
      v23 = (unsigned __int8)(v32 >> 20);
    v38 = v22;
    if ( v22 <= v23 )
      break;
LABEL_35:
    ++v16;
    v19 += 16i64;
    if ( v16 > v17 )
    {
      v11 = v41;
      v4 = v32;
      v12 = v31;
      v9 = v35;
      goto LABEL_37;
    }
  }
  v24 = 16 * v22;
  while ( 1 )
  {
    v25 = *v20;
    if ( !*(_QWORD *)(v24 + *v20) )
      break;
LABEL_33:
    ++*(_QWORD *)(v24 + v25 + 8);
    ++v22;
    v24 += 16i64;
    if ( v22 > v23 )
    {
      v17 = v30;
      v14 = v37;
      v18 = v36;
      goto LABEL_35;
    }
  }
  v26 = Scaleform::HeapPT::Starter::Alloc(this->pStarter, 0x800ui64, 0x800ui64);
  *(_QWORD *)(v24 + v25) = v26;
  if ( v26 )
  {
    memset(v26, 0, 0x800ui64);
    goto LABEL_33;
  }
  Scaleform::HeapPT::PageTable::UnmapRange(
    this,
    mem,
    (v22 + ((v16 + ((v41 + ((v40 - v28) << 12) - v29) << 12) - v36) << 8) - v38) << 20);
  return 0;
}

char __fastcall Scaleform::HeapPT::PageTable::RemapRange(
        Scaleform::HeapPT::PageTable *this,
        void *mem,
        unsigned __int64 newSize,
        unsigned __int64 oldSize)
{
  unsigned __int64 v4; // rbx
  char v9; // r14
  Scaleform::Heap::HeapSegment *pSegment; // r15

  v4 = oldSize;
  if ( newSize == oldSize )
    return 1;
  v9 = 0;
  pSegment = this->RootTable[(unsigned __int64)mem >> 52].pTable[((unsigned __int64)mem >> 40) & 0xFFF].pTable[((unsigned __int64)mem >> 28) & 0xFFF].pTable[(unsigned __int8)((unsigned __int64)mem >> 20)].pTable[(unsigned __int8)((unsigned __int64)mem >> 12)].pSegment;
  Scaleform::HeapPT::PageTable::UnmapRange(this, mem, oldSize);
  if ( Scaleform::HeapPT::PageTable::MapRange(this, mem, newSize) )
  {
    v4 = newSize;
    v9 = 1;
  }
  else
  {
    Scaleform::HeapPT::PageTable::MapRange(this, mem, v4);
  }
  Scaleform::HeapPT::PageTable::SetSegmentInRange(this, (unsigned __int64)mem, v4, pSegment);
  return v9;
}

void __fastcall Scaleform::HeapPT::PageTable::SetSegmentInRange(
        Scaleform::HeapPT::PageTable *this,
        unsigned __int64 address,
        unsigned __int64 size,
        Scaleform::Heap::HeapSegment *seg)
{
  unsigned __int64 v4; // r10
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rbp
  Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256>,256>,4096>,4096> *v10; // rbx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rsi
  __int64 v14; // r11
  unsigned __int64 v15; // r12
  _QWORD *v16; // rax
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // r11
  __int64 v19; // rdx
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r8
  __int64 v23; // r10
  unsigned __int64 v24; // rdx
  __int64 v25; // r9
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // [rsp+0h] [rbp-78h]
  unsigned __int64 v28; // [rsp+8h] [rbp-70h]
  unsigned __int64 v29; // [rsp+10h] [rbp-68h]
  __int64 v30; // [rsp+18h] [rbp-60h]
  __int64 v31; // [rsp+20h] [rbp-58h]
  Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256>,256>,4096>,4096> *v32; // [rsp+28h] [rbp-50h]
  __int64 *v33; // [rsp+30h] [rbp-48h]
  _QWORD *v34; // [rsp+38h] [rbp-40h]
  unsigned __int64 v36; // [rsp+90h] [rbp+18h]

  v4 = address;
  v6 = address + size - 1;
  v7 = v4 >> 52;
  v28 = v6;
  v8 = v6 >> 52;
  v9 = v4 >> 52;
  v29 = v4 >> 52;
  v27 = v6 >> 52;
  if ( v4 >> 52 <= v6 >> 52 )
  {
    v10 = &this->RootTable[v7];
    v32 = v10;
    do
    {
      v11 = 0i64;
      v12 = 4095i64;
      v36 = 0i64;
      if ( v9 == v7 )
      {
        v11 = (v4 >> 40) & 0xFFF;
        v36 = v11;
      }
      if ( v9 == v8 )
        v12 = (v6 >> 40) & 0xFFF;
      v13 = v11;
      if ( v11 <= v12 )
      {
        v14 = 16 * v11;
        v31 = 16 * v11;
        do
        {
          v15 = 0i64;
          v16 = (Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256>,256> **)((char *)&v10->pTable->pTable + v14);
          v17 = 4095i64;
          v34 = v16;
          if ( v13 == v11 && v9 == v7 )
            v15 = (v4 >> 28) & 0xFFF;
          if ( v13 == v12 && v9 == v8 )
            v17 = (v6 >> 28) & 0xFFF;
          v18 = v15;
          if ( v15 <= v17 )
          {
            v19 = 16 * v15;
            v30 = 16 * v15;
            do
            {
              v20 = 0i64;
              v21 = 255i64;
              v33 = (__int64 *)(v19 + *v16);
              if ( v18 == v15 && v13 == v11 && v9 == v7 )
                v20 = (unsigned __int8)(v4 >> 20);
              if ( v18 == v17 && v13 == v12 && v9 == v8 )
                v21 = (unsigned __int8)(v28 >> 20);
              v22 = v20;
              if ( v20 <= v21 )
              {
                v23 = 16 * v20;
                do
                {
                  v24 = 255i64;
                  v25 = *v33;
                  v26 = 0i64;
                  if ( v22 == v20 && v18 == v15 && v13 == v11 && v9 == v29 )
                    v26 = (unsigned __int8)(address >> 12);
                  if ( v22 == v21 && v18 == v17 && v13 == v12 && v9 == v27 )
                    v24 = (unsigned __int8)(v28 >> 12);
                  for ( ; v26 <= v24; ++v26 )
                    *(_QWORD *)(*(_QWORD *)(v25 + v23) + 8 * v26) = seg;
                  v11 = v36;
                  ++v22;
                  v23 += 16i64;
                }
                while ( v22 <= v21 );
                v19 = v30;
                v7 = v29;
                v4 = address;
              }
              v8 = v27;
              v19 += 16i64;
              v16 = v34;
              ++v18;
              v30 = v19;
            }
            while ( v18 <= v17 );
            v6 = v28;
            v10 = v32;
          }
          ++v13;
          v14 = v31 + 16;
          v31 += 16i64;
        }
        while ( v13 <= v12 );
      }
      ++v10;
      ++v9;
      v32 = v10;
    }
    while ( v9 <= v8 );
  }
}

void __fastcall Scaleform::HeapPT::PageTable::UnmapRange(
        Scaleform::HeapPT::PageTable *this,
        void *mem,
        unsigned __int64 size)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rdi
  Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256>,256>,4096>,4096> *v9; // r13
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  __int64 v13; // r14
  unsigned __int64 v14; // rbp
  char *v15; // rdi
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rdx
  __int64 v18; // r13
  unsigned __int64 v19; // rcx
  __int64 v20; // r14
  unsigned __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rsi
  char *v24; // rbx
  Scaleform::HeapPT::Starter *pStarter; // rcx
  bool v26; // zf
  Scaleform::HeapPT::Starter *v27; // rcx
  Scaleform::HeapPT::Starter *v28; // rcx
  Scaleform::HeapPT::Starter *v29; // rcx
  __int64 v30; // [rsp+20h] [rbp-88h]
  __int64 v31; // [rsp+28h] [rbp-80h]
  unsigned __int64 v32; // [rsp+30h] [rbp-78h]
  Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256>,256>,4096>,4096> *v33; // [rsp+38h] [rbp-70h]
  char *v34; // [rsp+40h] [rbp-68h]
  unsigned __int64 v35; // [rsp+48h] [rbp-60h]
  unsigned __int64 v36; // [rsp+50h] [rbp-58h]
  unsigned __int64 v37; // [rsp+58h] [rbp-50h]
  unsigned __int64 v38; // [rsp+60h] [rbp-48h]
  unsigned __int64 v40; // [rsp+C0h] [rbp+18h]
  char *v41; // [rsp+C8h] [rbp+20h]

  v4 = (unsigned __int64)mem + size - 1;
  v5 = (unsigned __int64)mem >> 52;
  v6 = v4 >> 52;
  v7 = (unsigned __int64)mem;
  v38 = (unsigned __int64)mem >> 52;
  v8 = (unsigned __int64)mem >> 52;
  v41 = (char *)v4;
  v37 = v4 >> 52;
  v32 = (unsigned __int64)mem >> 52;
  if ( (unsigned __int64)mem >> 52 <= v4 >> 52 )
  {
    v9 = &this->RootTable[v5];
    v33 = v9;
    do
    {
      v10 = 0i64;
      v11 = 4095i64;
      v40 = 0i64;
      v30 = 4095i64;
      if ( v8 == v5 )
      {
        v10 = (v7 >> 40) & 0xFFF;
        v40 = v10;
      }
      if ( v8 == v6 )
      {
        v11 = (v4 >> 40) & 0xFFF;
        v30 = v11;
      }
      v36 = v10;
      v12 = v10;
      if ( v10 <= v11 )
      {
        v13 = 16 * v10;
        v31 = 16 * v10;
        do
        {
          v14 = 0i64;
          v15 = (char *)v9->pTable + v13;
          v16 = 4095i64;
          v34 = v15;
          if ( v10 == v12 )
            v14 = (v7 >> 28) & 0xFFF;
          if ( v10 == v11 )
            v16 = (v4 >> 28) & 0xFFF;
          v17 = v14;
          v35 = v14;
          if ( v14 <= v16 )
          {
            v18 = 16 * v14;
            do
            {
              v19 = 0i64;
              v20 = v18 + *(_QWORD *)v15;
              v21 = 255i64;
              if ( v14 == v17 )
                v19 = (unsigned __int8)(v7 >> 20);
              if ( v14 == v16 )
                v21 = (unsigned __int8)(v4 >> 20);
              if ( v19 <= v21 )
              {
                v22 = 16 * v19;
                v23 = v21 - v19 + 1;
                do
                {
                  v24 = *(char **)v20;
                  pStarter = this->pStarter;
                  v26 = (*(_QWORD *)(v22 + *(_QWORD *)v20 + 8))-- == 1i64;
                  if ( v26 )
                  {
                    Scaleform::HeapPT::Starter::Free(pStarter, *(void **)&v24[v22], 0x800ui64, 0x800ui64);
                    *(_QWORD *)&v24[v22] = 0i64;
                  }
                  v22 += 16i64;
                  --v23;
                }
                while ( v23 );
                v15 = v34;
              }
              v27 = this->pStarter;
              v26 = (*(_QWORD *)(v20 + 8))-- == 1i64;
              if ( v26 )
              {
                Scaleform::HeapPT::Starter::Free(v27, *(void **)v20, 0x1000ui64, 0x800ui64);
                *(_QWORD *)v20 = 0i64;
              }
              v17 = v35;
              ++v14;
              v7 = (unsigned __int64)mem;
              v18 += 16i64;
              v4 = (unsigned __int64)v41;
            }
            while ( v14 <= v16 );
            v10 = v40;
            v11 = v30;
            v13 = v31;
            v9 = v33;
          }
          v28 = this->pStarter;
          v26 = (*((_QWORD *)v15 + 1))-- == 1i64;
          if ( v26 )
          {
            Scaleform::HeapPT::Starter::Free(v28, *(void **)v15, 0x10000ui64, 0x8000ui64);
            *(_QWORD *)v15 = 0i64;
          }
          v7 = (unsigned __int64)mem;
          ++v10;
          v4 = (unsigned __int64)v41;
          v13 += 16i64;
          v12 = v36;
          v40 = v10;
          v31 = v13;
        }
        while ( v10 <= v11 );
        v8 = v32;
        v6 = v37;
      }
      v29 = this->pStarter;
      v26 = v9->RefCount-- == 1;
      if ( v26 )
      {
        Scaleform::HeapPT::Starter::Free(v29, v9->pTable, 0x10000ui64, 0x8000ui64);
        v9->pTable = 0i64;
      }
      v7 = (unsigned __int64)mem;
      ++v8;
      v4 = (unsigned __int64)v41;
      ++v9;
      v5 = v38;
      v32 = v8;
      v33 = v9;
    }
    while ( v8 <= v6 );
  }
}

