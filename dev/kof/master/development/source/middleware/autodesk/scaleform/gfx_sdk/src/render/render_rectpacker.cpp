#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rectpacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraypaged.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

Scaleform::Render::RectPacker::RectPacker(); // 0x140428BA0
void Scaleform::Render::RectPacker::Pack(); // 0x140428C30
void Scaleform::Render::RectPacker::packRects(unsigned long nodeIdx, unsigned long start); // 0x1404290B0
void Scaleform::Render::RectPacker::splitSpace(unsigned long nodeIdx, const Scaleform::Render::RectPacker::RectType & rect); // 0x1404291C0
void Scaleform::Render::RectPacker::emitPacked(); // 0x140428FE0void __fastcall Scaleform::Alg::QuickSortSliced<Scaleform::ArrayPagedLH_POD<Scaleform::Render::RectPacker::RectType,8,64,2>,bool (*)(Scaleform::Render::RectPacker::RectType const &,Scaleform::Render::RectPacker::RectType const &)>(
        Scaleform::ArrayPagedLH_POD<Scaleform::Render::RectPacker::RectType,8,64,2> *arr,
        unsigned __int64 start,
        unsigned __int64 end,
        bool (__fastcall *less)(const Scaleform::Render::RectPacker::RectType *, const Scaleform::Render::RectPacker::RectType *))
{
  signed __int64 v5; // r10
  unsigned __int64 v6; // r13
  unsigned __int64 *i; // r12
  Scaleform::Render::RectPacker::RectType **Pages; // r8
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  Scaleform::Render::RectPacker::RectType *v13; // rax
  __int64 v14; // xmm0_8
  Scaleform::Render::RectPacker::RectType *v15; // r9
  unsigned __int64 v16; // r14
  __int64 v17; // r15
  Scaleform::Render::RectPacker::RectType *v18; // rcx
  __int64 v19; // xmm1_8
  Scaleform::Render::RectPacker::RectType **v20; // r8
  const Scaleform::Render::RectPacker::RectType *v21; // rdx
  Scaleform::Render::RectPacker::RectType **v22; // rcx
  Scaleform::Render::RectPacker::RectType *v23; // r8
  Scaleform::Render::RectPacker::RectType *v24; // rcx
  __int64 v25; // xmm1_8
  unsigned int Id; // edx
  Scaleform::Render::RectPacker::RectType **v27; // rcx
  Scaleform::Render::RectPacker::RectType *v28; // r8
  Scaleform::Render::RectPacker::RectType *v29; // rcx
  __int64 v30; // xmm1_8
  unsigned int v31; // edx
  Scaleform::Render::RectPacker::RectType **v32; // rcx
  Scaleform::Render::RectPacker::RectType *v33; // r8
  Scaleform::Render::RectPacker::RectType *v34; // rcx
  __int64 v35; // xmm1_8
  unsigned int v36; // edx
  Scaleform::Render::RectPacker::RectType **v37; // r8
  Scaleform::Render::RectPacker::RectType *v38; // rax
  __int64 v39; // xmm0_8
  Scaleform::Render::RectPacker::RectType *v40; // r9
  Scaleform::Render::RectPacker::RectType *v41; // rax
  __int64 v42; // xmm1_8
  Scaleform::Render::RectPacker::RectType *v43; // rdx
  unsigned int v44; // ecx
  Scaleform::Render::RectPacker::RectType *v45; // rcx
  __int64 v46; // xmm1_8
  unsigned int v47; // edx
  signed __int64 v48; // r15
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // rdi
  __int64 v51; // r14
  unsigned __int64 j; // rbx
  Scaleform::Render::RectPacker::RectType **v53; // r8
  unsigned __int64 v54; // rdx
  Scaleform::Render::RectPacker::RectType *v55; // r9
  __int64 v56; // rcx
  Scaleform::Render::RectPacker::RectType *v57; // rax
  __int64 v58; // xmm1_8
  unsigned int *v59; // rdx
  unsigned __int64 v60; // [rsp+20h] [rbp-308h]
  signed __int64 v61; // [rsp+28h] [rbp-300h]
  unsigned __int64 v62; // [rsp+30h] [rbp-2F8h]
  __int64 v63; // [rsp+38h] [rbp-2F0h]
  unsigned __int64 v64; // [rsp+40h] [rbp-2E8h]
  unsigned __int64 v65[80]; // [rsp+50h] [rbp-2D8h] BYREF

  v61 = end;
  v5 = end;
  v6 = start;
  if ( end - start >= 2 )
  {
    for ( i = v65; ; v6 = *i )
    {
      while ( (__int64)(v5 - v6) > 9 )
      {
        Pages = arr->Pages;
        v10 = v5 - 1;
        v11 = v6 + 1;
        v12 = v6 + (__int64)(v5 - v6) / 2;
        v13 = Pages[v12 >> 8];
        v14 = *(_QWORD *)&v13[(unsigned __int8)v12].x;
        v15 = &v13[(unsigned __int8)v12];
        v16 = v6 >> 8;
        v17 = (unsigned __int8)v6;
        v18 = &Pages[v16][v17];
        LODWORD(v12) = v18->Id;
        v19 = *(_QWORD *)&v18->x;
        *(_QWORD *)&v18->x = v14;
        v18->Id = v15->Id;
        *(_QWORD *)&v15->x = v19;
        v15->Id = v12;
        v20 = arr->Pages;
        v62 = (v6 + 1) >> 8;
        v63 = (unsigned __int8)(v6 + 1);
        v21 = &v20[v62][v63];
        v64 = 8 * ((unsigned __int64)(v5 - 1) >> 8);
        v60 = (unsigned __int8)(v5 - 1);
        if ( less(&v20[v64 / 8][v60], v21) )
        {
          v22 = arr->Pages;
          v23 = &v22[v62][v63];
          v24 = &v22[v64 / 8][v60];
          v25 = *(_QWORD *)&v24->x;
          Id = v24->Id;
          *(_QWORD *)&v24->x = *(_QWORD *)&v23->x;
          v24->Id = v23->Id;
          *(_QWORD *)&v23->x = v25;
          v23->Id = Id;
        }
        if ( less(&arr->Pages[v16][v17], &arr->Pages[(v6 + 1) >> 8][(unsigned __int8)(v6 + 1)]) )
        {
          v27 = arr->Pages;
          v28 = &v27[v62][v63];
          v29 = &v27[v16][v17];
          v30 = *(_QWORD *)&v29->x;
          v31 = v29->Id;
          *(_QWORD *)&v29->x = *(_QWORD *)&v28->x;
          v29->Id = v28->Id;
          *(_QWORD *)&v28->x = v30;
          v28->Id = v31;
        }
        if ( less(&arr->Pages[v64 / 8][v60], &arr->Pages[v16][v17]) )
        {
          v32 = arr->Pages;
          v33 = &v32[v16][v17];
          v34 = &v32[v64 / 8][v60];
          v35 = *(_QWORD *)&v34->x;
          v36 = v34->Id;
          *(_QWORD *)&v34->x = *(_QWORD *)&v33->x;
          v34->Id = v33->Id;
          *(_QWORD *)&v33->x = v35;
          v33->Id = v36;
        }
        while ( 1 )
        {
          do
            ++v11;
          while ( less(&arr->Pages[v11 >> 8][(unsigned __int8)v11], &arr->Pages[v16][v17]) );
          do
            --v10;
          while ( less(&arr->Pages[v16][v17], &arr->Pages[v10 >> 8][(unsigned __int8)v10]) );
          v37 = arr->Pages;
          v38 = v37[v10 >> 8];
          v39 = *(_QWORD *)&v38[(unsigned __int8)v10].x;
          v40 = &v38[(unsigned __int8)v10];
          if ( (__int64)v11 > (__int64)v10 )
            break;
          v41 = v37[v11 >> 8];
          v42 = *(_QWORD *)&v41[(unsigned __int8)v11].x;
          v43 = &v41[(unsigned __int8)v11];
          v44 = v43->Id;
          *(_QWORD *)&v43->x = v39;
          v43->Id = v40->Id;
          *(_QWORD *)&v40->x = v42;
          v40->Id = v44;
        }
        v5 = v61;
        v45 = &v37[v16][v17];
        v46 = *(_QWORD *)&v45->x;
        v47 = v45->Id;
        *(_QWORD *)&v45->x = v39;
        v45->Id = v40->Id;
        *(_QWORD *)&v40->x = v46;
        v40->Id = v47;
        if ( (__int64)(v10 - v6) <= (__int64)(v61 - v11) )
        {
          i[1] = v61;
          v5 = v10;
          *i = v11;
          i += 2;
          v61 = v10;
        }
        else
        {
          *i = v6;
          v6 = v11;
          i[1] = v10;
          i += 2;
        }
      }
      v48 = v6 + 1;
      v49 = v6;
      if ( (__int64)(v6 + 1) < v5 )
      {
        do
        {
          v50 = v49 >> 8;
          v51 = (unsigned __int8)v49;
          for ( j = v49 + 1;
                less(&arr->Pages[j >> 8][(unsigned __int8)j], &arr->Pages[v50][v51]);
                v51 = (unsigned __int8)(j - 1) )
          {
            v53 = arr->Pages;
            v54 = j >> 8;
            v55 = &v53[v50][v51];
            v56 = 3i64 * (unsigned __int8)j--;
            v57 = v53[v54];
            v58 = *(_QWORD *)(&v57->x + v56);
            v59 = &v57->x + v56;
            LODWORD(v56) = v59[2];
            *(_QWORD *)v59 = *(_QWORD *)&v55->x;
            v59[2] = v55->Id;
            *(_QWORD *)&v55->x = v58;
            v55->Id = v56;
            if ( j == v6 )
              break;
            v50 = (j - 1) >> 8;
          }
          v49 = v48++;
        }
        while ( v48 < v61 );
      }
      if ( i <= v65 )
        break;
      v5 = *(i - 1);
      i -= 2;
      v61 = v5;
    }
  }
}

void __fastcall Scaleform::Render::RectPacker::RectPacker(Scaleform::Render::RectPacker *this)
{
  this->Width = 1024;
  this->Height = 1024;
  this->SrcRects.Size = 0i64;
  this->SrcRects.NumPages = 0i64;
  this->SrcRects.MaxPages = 0i64;
  this->SrcRects.Pages = 0i64;
  this->PackedRects.Size = 0i64;
  this->PackedRects.NumPages = 0i64;
  this->PackedRects.MaxPages = 0i64;
  this->PackedRects.Pages = 0i64;
  this->Packs.Size = 0i64;
  this->Packs.NumPages = 0i64;
  this->Packs.MaxPages = 0i64;
  this->Packs.Pages = 0i64;
  this->PackTree.Size = 0i64;
  this->PackTree.NumPages = 0i64;
  this->PackTree.MaxPages = 0i64;
  this->PackTree.Pages = 0i64;
  this->Failed.Size = 0i64;
  this->Failed.NumPages = 0i64;
  this->Failed.MaxPages = 0i64;
  this->Failed.Pages = 0i64;
}

void __fastcall Scaleform::Render::RectPacker::Pack(Scaleform::Render::RectPacker *this)
{
  unsigned __int64 Size; // r10
  Scaleform::Render::RectPacker::RectType **Pages; // r11
  unsigned int x; // er9
  unsigned __int64 v5; // r8
  unsigned int v6; // edx
  unsigned int Width; // eax
  unsigned int NumPacked; // ebp
  unsigned __int64 v9; // rdi
  unsigned __int64 MaxPages; // r8
  Scaleform::Render::RectPacker::NodeType **v11; // rdx
  Scaleform::Render::RectPacker::NodeType **v12; // rax
  __int64 Size_low; // rcx
  Scaleform::Render::RectPacker::NodeType *v14; // rax
  unsigned int StartRect; // edi
  unsigned __int64 v16; // rbp
  __int128 v17; // [rsp+20h] [rbp-48h]
  int v18; // [rsp+70h] [rbp+8h] BYREF
  int v19; // [rsp+78h] [rbp+10h] BYREF
  Scaleform::Render::RectPacker::PackType v20; // [rsp+80h] [rbp+18h]

  this->PackedRects.Size = 0i64;
  this->Packs.Size = 0i64;
  this->PackTree.Size = 0i64;
  if ( this->SrcRects.Size )
  {
    Scaleform::Alg::QuickSortSliced<Scaleform::ArrayPagedLH_POD<Scaleform::Render::RectPacker::RectType,8,64,2>,bool (*)(Scaleform::Render::RectPacker::RectType const &,Scaleform::Render::RectPacker::RectType const &)>(
      &this->SrcRects,
      0i64,
      this->SrcRects.Size,
      Scaleform::Render::RectPacker::cmpRectsY);
    Size = this->SrcRects.Size;
    Pages = this->SrcRects.Pages;
    x = Pages[(Size - 1) >> 8][(unsigned __int8)(Size - 1)].x;
    v5 = 0i64;
    this->MinWidth = x;
    for ( this->MinHeight = Pages[(Size - 1) >> 8][(unsigned __int8)(Size - 1)].y; v5 < Size; ++v5 )
    {
      v6 = Pages[v5 >> 8][(unsigned __int8)v5].x;
      if ( v6 < x )
      {
        x = Pages[v5 >> 8][(unsigned __int8)v5].x;
        this->MinWidth = v6;
      }
    }
    this->NumPacked = 0;
    do
    {
      Width = this->Width;
      NumPacked = this->NumPacked;
      this->PackTree.Size = 0i64;
      v9 = this->PackTree.Size >> 8;
      DWORD2(v17) = Width;
      *(_QWORD *)&v17 = 0i64;
      HIDWORD(v17) = this->Height;
      if ( v9 >= this->PackTree.NumPages )
      {
        MaxPages = this->PackTree.MaxPages;
        if ( v9 >= MaxPages )
        {
          v11 = this->PackTree.Pages;
          if ( v11 )
          {
            v12 = (Scaleform::Render::RectPacker::NodeType **)Scaleform::Memory::pGlobalHeap->Realloc(
                                                                Scaleform::Memory::pGlobalHeap,
                                                                v11,
                                                                8 * MaxPages + 512);
          }
          else
          {
            v18 = 2;
            v12 = (Scaleform::Render::RectPacker::NodeType **)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                                Scaleform::Memory::pGlobalHeap,
                                                                &this->PackTree,
                                                                512i64,
                                                                &v18);
          }
          this->PackTree.MaxPages += 64i64;
          this->PackTree.Pages = v12;
        }
        v19 = 2;
        this->PackTree.Pages[v9] = (Scaleform::Render::RectPacker::NodeType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                                                Scaleform::Memory::pGlobalHeap,
                                                                                &this->PackTree,
                                                                                7168i64,
                                                                                &v19);
        ++this->PackTree.NumPages;
      }
      Size_low = LOBYTE(this->PackTree.Size);
      v14 = this->PackTree.Pages[v9];
      *(_OWORD *)&v14[Size_low].x = v17;
      *(_QWORD *)&v14[Size_low].Id = -1i64;
      v14[Size_low].Node2 = -1;
      ++this->PackTree.Size;
      Scaleform::Render::RectPacker::packRects(this, 0, 0);
      if ( this->NumPacked > NumPacked )
      {
        v20.StartRect = this->PackedRects.Size;
        StartRect = v20.StartRect;
        Scaleform::Render::RectPacker::emitPacked(this);
        v16 = this->Packs.Size >> 4;
        v20.NumRects = LODWORD(this->PackedRects.Size) - StartRect;
        if ( v16 >= this->Packs.NumPages )
          Scaleform::ArrayPagedBase<Scaleform::Render::RectPacker::PackType,4,16,Scaleform::AllocatorPagedLH_POD<Scaleform::Render::RectPacker::PackType,2>>::allocatePage(
            &this->Packs,
            v16);
        this->Packs.Pages[v16][this->Packs.Size & 0xF] = v20;
        ++this->Packs.Size;
      }
    }
    while ( this->NumPacked < this->SrcRects.Size );
  }
}

void __fastcall Scaleform::ArrayPagedBase<Scaleform::Render::RectPacker::NodeType,8,64,Scaleform::AllocatorPagedLH_POD<Scaleform::Render::RectPacker::NodeType,2>>::allocatePage(
        Scaleform::ArrayPagedBase<Scaleform::Render::RectPacker::NodeType,8,64,Scaleform::AllocatorPagedLH_POD<Scaleform::Render::RectPacker::NodeType,2> > *this,
        unsigned __int64 nb)
{
  unsigned __int64 MaxPages; // r8
  Scaleform::Render::RectPacker::NodeType **Pages; // rdx
  Scaleform::Render::RectPacker::NodeType **v6; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  MaxPages = this->MaxPages;
  if ( nb >= MaxPages )
  {
    Pages = this->Pages;
    if ( Pages )
    {
      v6 = (Scaleform::Render::RectPacker::NodeType **)Scaleform::Memory::pGlobalHeap->Realloc(
                                                         Scaleform::Memory::pGlobalHeap,
                                                         Pages,
                                                         8 * MaxPages + 512);
    }
    else
    {
      v7 = 2;
      v6 = (Scaleform::Render::RectPacker::NodeType **)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                         Scaleform::Memory::pGlobalHeap,
                                                         this,
                                                         512i64,
                                                         &v7);
    }
    this->MaxPages += 64i64;
    this->Pages = v6;
  }
  v7 = 2;
  this->Pages[nb] = (Scaleform::Render::RectPacker::NodeType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                                 Scaleform::Memory::pGlobalHeap,
                                                                 this,
                                                                 7168i64,
                                                                 &v7);
  ++this->NumPages;
}

void __fastcall Scaleform::ArrayPagedBase<Scaleform::Render::RectPacker::PackType,4,16,Scaleform::AllocatorPagedLH_POD<Scaleform::Render::RectPacker::PackType,2>>::allocatePage(
        Scaleform::ArrayPagedBase<Scaleform::Render::RectPacker::PackType,4,16,Scaleform::AllocatorPagedLH_POD<Scaleform::Render::RectPacker::PackType,2> > *this,
        unsigned __int64 nb)
{
  unsigned __int64 MaxPages; // r8
  Scaleform::Render::RectPacker::PackType **Pages; // rdx
  Scaleform::Render::RectPacker::PackType **v6; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  MaxPages = this->MaxPages;
  if ( nb >= MaxPages )
  {
    Pages = this->Pages;
    if ( Pages )
    {
      v6 = (Scaleform::Render::RectPacker::PackType **)Scaleform::Memory::pGlobalHeap->Realloc(
                                                         Scaleform::Memory::pGlobalHeap,
                                                         Pages,
                                                         8 * MaxPages + 128);
    }
    else
    {
      v7 = 2;
      v6 = (Scaleform::Render::RectPacker::PackType **)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                         Scaleform::Memory::pGlobalHeap,
                                                         this,
                                                         128i64,
                                                         &v7);
    }
    this->MaxPages += 16i64;
    this->Pages = v6;
  }
  v7 = 2;
  this->Pages[nb] = (Scaleform::Render::RectPacker::PackType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                                 Scaleform::Memory::pGlobalHeap,
                                                                 this,
                                                                 128i64,
                                                                 &v7);
  ++this->NumPages;
}

bool __fastcall Scaleform::Render::RectPacker::cmpRectsY(
        const Scaleform::Render::RectPacker::RectType *a,
        const Scaleform::Render::RectPacker::RectType *b)
{
  return *(_QWORD *)&b->x < *(_QWORD *)&a->x;
}

void __fastcall Scaleform::Render::RectPacker::emitPacked(Scaleform::Render::RectPacker *this)
{
  unsigned __int64 i; // rbx
  Scaleform::Render::RectPacker::NodeType *v3; // rcx
  unsigned int Id; // er14
  unsigned __int64 v5; // rsi
  __int64 Size_low; // rcx
  Scaleform::Render::RectPacker::RectType *v7; // rax
  __int64 v8; // [rsp+20h] [rbp-18h]

  for ( i = 0i64; i < this->PackTree.Size; ++i )
  {
    v3 = &this->PackTree.Pages[i >> 8][(unsigned __int8)i];
    Id = v3->Id;
    if ( Id != -1 )
    {
      v5 = this->PackedRects.Size >> 8;
      v8 = *(_QWORD *)&v3->x;
      if ( v5 >= this->PackedRects.NumPages )
        Scaleform::ArrayPagedBase<Scaleform::Render::RectPacker::RectType,8,64,Scaleform::AllocatorPagedLH_POD<Scaleform::Render::RectPacker::RectType,2>>::allocatePage(
          &this->PackedRects,
          v5);
      Size_low = LOBYTE(this->PackedRects.Size);
      v7 = this->PackedRects.Pages[v5];
      *(_QWORD *)&v7[Size_low].x = v8;
      v7[Size_low].Id = Id;
      ++this->PackedRects.Size;
    }
  }
}

void __fastcall Scaleform::Render::RectPacker::packRects(
        Scaleform::Render::RectPacker *this,
        unsigned int nodeIdx,
        unsigned int start)
{
  unsigned __int64 i; // rbx
  Scaleform::Render::RectPacker::NodeType *v5; // rbp
  unsigned int Width; // er11
  unsigned int Height; // er9
  Scaleform::Render::RectPacker::RectType *v8; // rax
  Scaleform::Render::RectPacker::RectType *v9; // rdi
  unsigned int nodeIdxa; // [rsp+38h] [rbp+10h]

  nodeIdxa = nodeIdx;
  LODWORD(i) = start;
  v5 = &this->PackTree.Pages[(unsigned __int64)nodeIdx >> 8][(unsigned __int8)nodeIdx];
  Width = v5->Width;
  if ( Width >= this->MinWidth )
  {
LABEL_2:
    Height = v5->Height;
    if ( Height >= this->MinHeight )
    {
      for ( i = (unsigned int)i; i < this->SrcRects.Size; ++i )
      {
        v8 = this->SrcRects.Pages[i >> 8];
        v9 = &v8[(unsigned __int8)i];
        if ( (v9->Id & 0x80000000) == 0 && v9->x <= Width && v9->y <= Height )
        {
          Scaleform::Render::RectPacker::splitSpace(this, nodeIdxa, &v8[(unsigned __int8)i]);
          v9->Id |= 0x80000000;
          ++this->NumPacked;
          Scaleform::Render::RectPacker::packRects(this, v5->Node1, i);
          nodeIdxa = v5->Node2;
          v5 = &this->PackTree.Pages[(unsigned __int64)nodeIdxa >> 8][(unsigned __int8)nodeIdxa];
          Width = v5->Width;
          if ( Width >= this->MinWidth )
            goto LABEL_2;
          return;
        }
      }
    }
  }
}

void __fastcall Scaleform::Render::RectPacker::splitSpace(
        Scaleform::Render::RectPacker *this,
        unsigned int nodeIdx,
        const Scaleform::Render::RectPacker::RectType *rect)
{
  Scaleform::ArrayPagedLH_POD<Scaleform::Render::RectPacker::NodeType,8,64,2> *p_PackTree; // rbx
  __m128i *v6; // rsi
  int v7; // er15
  unsigned __int64 v8; // rdi
  __int64 Size_low; // rcx
  Scaleform::Render::RectPacker::NodeType *v10; // rax
  unsigned __int64 v11; // rdi
  __int64 v12; // rcx
  Scaleform::Render::RectPacker::NodeType *v13; // rax
  __m128i v14; // [rsp+20h] [rbp-68h]
  __m128i v15; // [rsp+40h] [rbp-48h]
  __int64 v16; // [rsp+90h] [rbp+8h]

  p_PackTree = &this->PackTree;
  v6 = (__m128i *)&this->PackTree.Pages[(unsigned __int64)nodeIdx >> 8][(unsigned __int8)nodeIdx];
  v14 = *v6;
  v16 = v6[1].m128i_i64[0];
  v7 = v6[1].m128i_i32[2];
  v15 = *v6;
  v14.m128i_i32[2] = v6->m128i_i64[1] - rect->x;
  v8 = this->PackTree.Size >> 8;
  v14.m128i_i32[3] = rect->y;
  v14.m128i_i32[0] = rect->x + _mm_cvtsi128_si32(*v6);
  v15.m128i_i32[1] = v14.m128i_i32[3] + HIDWORD(v6->m128i_i64[0]);
  v15.m128i_i32[3] = HIDWORD(*(unsigned __int128 *)v6) - v14.m128i_i32[3];
  if ( v8 >= this->PackTree.NumPages )
    Scaleform::ArrayPagedBase<Scaleform::Render::RectPacker::NodeType,8,64,Scaleform::AllocatorPagedLH_POD<Scaleform::Render::RectPacker::NodeType,2>>::allocatePage(
      p_PackTree,
      v8);
  Size_low = LOBYTE(p_PackTree->Size);
  v10 = p_PackTree->Pages[v8];
  *(__m128i *)&v10[Size_low].x = v14;
  *(_QWORD *)&v10[Size_low].Id = v16;
  v10[Size_low].Node2 = v7;
  v11 = ++p_PackTree->Size >> 8;
  if ( v11 >= p_PackTree->NumPages )
    Scaleform::ArrayPagedBase<Scaleform::Render::RectPacker::NodeType,8,64,Scaleform::AllocatorPagedLH_POD<Scaleform::Render::RectPacker::NodeType,2>>::allocatePage(
      p_PackTree,
      p_PackTree->Size >> 8);
  v12 = LOBYTE(p_PackTree->Size);
  v13 = p_PackTree->Pages[v11];
  *(__m128i *)&v13[v12].x = v15;
  *(_QWORD *)&v13[v12].Id = v16;
  v13[v12].Node2 = v7;
  ++p_PackTree->Size;
  v6->m128i_i32[2] = rect->x;
  v6->m128i_i32[3] = rect->y;
  v6[1].m128i_i32[0] = rect->Id;
  v6[1].m128i_i32[1] = LODWORD(this->PackTree.Size) - 2;
  v6[1].m128i_i32[2] = LODWORD(this->PackTree.Size) - 1;
}

