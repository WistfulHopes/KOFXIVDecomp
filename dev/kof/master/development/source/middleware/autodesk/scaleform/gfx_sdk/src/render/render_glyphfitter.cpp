#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

Scaleform::Render::GlyphFitter::GlyphFitter(Scaleform::MemoryHeap * heap, long nominalFontHeight); // 0x140407C30
void Scaleform::Render::GlyphFitter::Clear(); // 0x140407D70
void Scaleform::Render::GlyphFitter::MoveTo(float x, float y); // 0x140408090
void Scaleform::Render::GlyphFitter::LineTo(float x, float y); // 0x140407FB0
void Scaleform::Render::GlyphFitter::ClosePath(); // 0x140407DF0
void Scaleform::Render::GlyphFitter::removeDuplicateClosures(); // 0x140408A90
void Scaleform::Render::GlyphFitter::computeBounds(); // 0x140408200
void Scaleform::Render::GlyphFitter::detectEvents(Scaleform::Render::GlyphFitter::FitDir dir); // 0x140408830
void Scaleform::Render::GlyphFitter::computeLerpRamp(Scaleform::Render::GlyphFitter::FitDir dir, long unitsPerPixel, long middle, long lowerCaseTop, long upperCaseTop); // 0x1404083B0
void Scaleform::Render::GlyphFitter::FitGlyph(long heightInPixels, long widthInPixels, long lowerCaseTop, long upperCaseTop); // 0x140407E30void __fastcall Scaleform::Render::GlyphFitter::GlyphFitter(
        Scaleform::Render::GlyphFitter *this,
        Scaleform::MemoryHeap *heap,
        int nominalFontHeight)
{
  this->NominalFontHeight = nominalFontHeight;
  this->__vftable = (Scaleform::Render::GlyphFitter_vtbl *)&Scaleform::Render::GlyphFitter::`vftable';
  this->LHeap.pHeap = heap;
  this->LHeap.pPagePool = 0i64;
  this->LHeap.pLastPage = 0i64;
  this->LHeap.MaxPages = 0i64;
  this->LHeap.Granularity = 0x2000i64;
  this->Contours.pHeap = &this->LHeap;
  this->Contours.Size = 0i64;
  this->Contours.NumPages = 0i64;
  this->Contours.MaxPages = 0i64;
  this->Contours.Pages = 0i64;
  this->Vertices.pHeap = &this->LHeap;
  this->Vertices.Size = 0i64;
  this->Vertices.NumPages = 0i64;
  this->Vertices.MaxPages = 0i64;
  this->Vertices.Pages = 0i64;
  this->Events.pHeap = &this->LHeap;
  this->Events.Size = 0i64;
  this->Events.Array = 0i64;
  this->LerpPairs.pHeap = &this->LHeap;
  this->LerpPairs.Size = 0i64;
  this->LerpPairs.NumPages = 0i64;
  this->LerpPairs.MaxPages = 0i64;
  this->LerpPairs.Pages = 0i64;
  this->LerpRampX.pHeap = &this->LHeap;
  this->LerpRampX.Size = 0i64;
  this->LerpRampX.Array = 0i64;
  this->LerpRampY.pHeap = &this->LHeap;
  this->LerpRampY.Size = 0i64;
  this->LerpRampY.Array = 0i64;
  *(_QWORD *)&this->MinX = 0i64;
  this->Direction = DirCW;
  *(_QWORD *)&this->StartX = 0i64;
  *(_QWORD *)&this->LastXf = 0i64;
}

// attributes: thunk
void __fastcall Scaleform::Render::GlyphFitter::AddVertex(Scaleform::Render::GlyphFitter *this, float x, float y)
{
  Scaleform::Render::GlyphFitter::LineTo(this, x, y);
}

void __fastcall Scaleform::Render::GlyphFitter::Clear(Scaleform::Render::GlyphFitter *this)
{
  this->Contours.MaxPages = 0i64;
  this->Contours.NumPages = 0i64;
  this->Contours.Size = 0i64;
  this->Contours.Pages = 0i64;
  this->Vertices.MaxPages = 0i64;
  this->Vertices.NumPages = 0i64;
  this->Vertices.Size = 0i64;
  this->Vertices.Pages = 0i64;
  this->Events.Size = 0i64;
  this->Events.Array = 0i64;
  this->LerpPairs.MaxPages = 0i64;
  this->LerpPairs.NumPages = 0i64;
  this->LerpPairs.Size = 0i64;
  this->LerpPairs.Pages = 0i64;
  this->LerpRampX.Size = 0i64;
  this->LerpRampX.Array = 0i64;
  this->LerpRampY.Size = 0i64;
  this->LerpRampY.Array = 0i64;
  Scaleform::Render::LinearHeap::ClearAndRelease(&this->LHeap);
}

void __fastcall Scaleform::Render::GlyphFitter::ClosePath(Scaleform::Render::GlyphFitter *this)
{
  float StartX; // xmm1_4

  StartX = this->StartX;
  if ( this->LastXf != StartX || this->LastYf != this->StartY )
    Scaleform::Render::GlyphFitter::LineTo(this, StartX, this->StartY);
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall Scaleform::Render::GlyphFitter::FitGlyph(
        Scaleform::Render::GlyphFitter *this,
        int heightInPixels,
        int widthInPixels,
        int lowerCaseTop,
        int upperCaseTop)
{
  int v9; // eax
  int v10; // ecx
  int NominalFontHeight; // eax

  if ( widthInPixels )
    v9 = this->NominalFontHeight / widthInPixels;
  else
    v9 = 1;
  this->UnitsPerPixelX = v9;
  if ( heightInPixels )
    v10 = this->NominalFontHeight / heightInPixels;
  else
    v10 = 1;
  NominalFontHeight = this->NominalFontHeight;
  this->UnitsPerPixelY = v10;
  this->SnappedHeight = v10 * (NominalFontHeight / v10);
  if ( heightInPixels || widthInPixels )
  {
    Scaleform::Render::GlyphFitter::removeDuplicateClosures(this);
    Scaleform::Render::GlyphFitter::computeBounds(this);
    if ( heightInPixels && this->MaxY > this->MinY )
    {
      Scaleform::Render::GlyphFitter::detectEvents(this, FitY);
      Scaleform::Render::GlyphFitter::computeLerpRamp(
        this,
        FitY,
        this->UnitsPerPixelY,
        this->MinY + (this->MaxY - this->MinY) / 3,
        lowerCaseTop,
        upperCaseTop);
    }
    if ( widthInPixels )
    {
      if ( this->MaxY > this->MinY )
      {
        Scaleform::Render::GlyphFitter::detectEvents(this, FitX);
        Scaleform::Render::GlyphFitter::computeLerpRamp(
          this,
          FitX,
          this->UnitsPerPixelX,
          this->MinX + (this->MaxX - this->MinX) / 3,
          0,
          0);
      }
    }
  }
}

float __fastcall Scaleform::Render::GlyphFitter::GetLastX(Scaleform::Render::GlyphFitter *this)
{
  return this->LastXf;
}

float __fastcall Scaleform::Render::GlyphFitter::GetLastY(Scaleform::Render::GlyphFitter *this)
{
  return this->LastYf;
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

void __fastcall Scaleform::Render::GlyphFitter::LineTo(Scaleform::Render::GlyphFitter *this, float x, float y)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  Scaleform::Render::GlyphFitter::ContourType *v6; // rax
  Scaleform::Render::GlyphFitter::VertexType v7; // [rsp+58h] [rbp+10h]

  if ( __PAIR32__((int)y, (int)x) != *(_DWORD *)&this->Vertices.Pages[(this->Vertices.Size - 1) >> 4][(LODWORD(this->Vertices.Size) - 1) & 0xF] )
  {
    v4 = this->Vertices.Size >> 4;
    if ( v4 >= this->Vertices.NumPages )
      Scaleform::Render::ArrayPaged<unsigned int,4,16>::allocPage(
        (Scaleform::Render::ArrayPaged<unsigned int,4,16> *)&this->Vertices,
        this->Vertices.Size >> 4);
    v7.y = (int)y;
    v7.x = (int)x;
    this->Vertices.Pages[v4][this->Vertices.Size & 0xF] = v7;
    ++this->Vertices.Size;
    v5 = this->Contours.Size - 1;
    v6 = this->Contours.Pages[v5 >> 2];
    ++v6[v5 & 3].NumVertices;
  }
  this->LastYf = y;
  this->LastXf = x;
}

void __fastcall Scaleform::Render::GlyphFitter::MoveTo(Scaleform::Render::GlyphFitter *this, float x, float y)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rsi
  Scaleform::Render::GlyphFitter::ContourType v6; // [rsp+50h] [rbp+8h]
  Scaleform::Render::GlyphFitter::VertexType v7; // [rsp+58h] [rbp+10h]

  v6.StartVertex = this->Vertices.Size;
  v4 = this->Contours.Size >> 2;
  v6.NumVertices = 1;
  if ( v4 >= this->Contours.NumPages )
    Scaleform::Render::ArrayPaged<Scaleform::Render::PathBasic,2,4>::allocPage(
      (Scaleform::Render::ArrayPaged<Scaleform::Render::PathBasic,2,4> *)&this->Contours,
      v4);
  this->Contours.Pages[v4][this->Contours.Size & 3] = v6;
  ++this->Contours.Size;
  v5 = this->Vertices.Size >> 4;
  if ( v5 >= this->Vertices.NumPages )
    Scaleform::Render::ArrayPaged<unsigned int,4,16>::allocPage(
      (Scaleform::Render::ArrayPaged<unsigned int,4,16> *)&this->Vertices,
      this->Vertices.Size >> 4);
  v7.y = (int)y;
  v7.x = (int)x;
  this->Vertices.Pages[v5][this->Vertices.Size & 0xF] = v7;
  ++this->Vertices.Size;
  this->StartX = x;
  this->StartY = y;
  this->LastXf = x;
  this->LastYf = y;
}

void __fastcall Scaleform::Render::ArrayUnsafe<unsigned char>::Resize(
        Scaleform::Render::ArrayUnsafe<unsigned char> *this,
        unsigned __int64 size)
{
  void *v4; // rsi
  unsigned __int8 *Array; // rdx
  unsigned __int64 v6; // r8

  if ( size <= this->Size )
  {
    this->Size = size;
  }
  else
  {
    v4 = Scaleform::Render::LinearHeap::Alloc(this->pHeap, size);
    memset(v4, 0, size);
    Array = this->Array;
    if ( Array )
    {
      v6 = this->Size;
      if ( v6 )
        memmove(v4, Array, v6);
    }
    this->Array = (unsigned __int8 *)v4;
    this->Size = size;
  }
}

Scaleform::Render::Matrix2x4<float> *__fastcall Scaleform::Render::GlyphFitter::StretchTo(
        Scaleform::Render::Stroker *this,
        Scaleform::Render::Matrix2x4<float> *result,
        float __formal,
        float a4)
{
  Scaleform::Render::Matrix2x4<float> *v4; // rax

  *(_OWORD *)&result->M[0][0] = 0x3F800000ui64;
  result->M[1][0] = 0.0;
  result->M[1][3] = 0.0;
  v4 = result;
  *(_QWORD *)&result->M[1][1] = 1065353216i64;
  return v4;
}

void __fastcall Scaleform::Render::ArrayPaged<Scaleform::Render::PathBasic,2,4>::allocPage(
        Scaleform::Render::ArrayPaged<Scaleform::Render::PathBasic,2,4> *this,
        unsigned __int64 nb)
{
  unsigned __int64 MaxPages; // rdx
  void *v5; // rbx
  unsigned __int64 v6; // rax

  MaxPages = this->MaxPages;
  if ( nb >= MaxPages )
  {
    if ( this->Pages )
    {
      v5 = Scaleform::Render::LinearHeap::Alloc(this->pHeap, 16 * MaxPages);
      memmove(v5, this->Pages, 8 * this->NumPages);
      v6 = this->MaxPages;
      this->Pages = (Scaleform::Render::PathBasic **)v5;
      this->MaxPages = 2 * v6;
    }
    else
    {
      this->MaxPages = 4i64;
      this->Pages = (Scaleform::Render::PathBasic **)Scaleform::Render::LinearHeap::Alloc(this->pHeap, 0x20ui64);
    }
  }
  this->Pages[nb] = (Scaleform::Render::PathBasic *)Scaleform::Render::LinearHeap::Alloc(this->pHeap, 0x20ui64);
  ++this->NumPages;
}

void __fastcall Scaleform::Render::ArrayPaged<unsigned int,4,16>::allocPage(
        Scaleform::Render::ArrayPaged<unsigned int,4,16> *this,
        unsigned __int64 nb)
{
  unsigned __int64 MaxPages; // rdx
  void *v5; // rbx
  unsigned __int64 v6; // rax

  MaxPages = this->MaxPages;
  if ( nb >= MaxPages )
  {
    if ( this->Pages )
    {
      v5 = Scaleform::Render::LinearHeap::Alloc(this->pHeap, 16 * MaxPages);
      memmove(v5, this->Pages, 8 * this->NumPages);
      v6 = this->MaxPages;
      this->Pages = (unsigned int **)v5;
      this->MaxPages = 2 * v6;
    }
    else
    {
      this->MaxPages = 16i64;
      this->Pages = (unsigned int **)Scaleform::Render::LinearHeap::Alloc(this->pHeap, 0x80ui64);
    }
  }
  this->Pages[nb] = (unsigned int *)Scaleform::Render::LinearHeap::Alloc(this->pHeap, 0x40ui64);
  ++this->NumPages;
}

void __fastcall Scaleform::Render::GlyphFitter::computeBounds(Scaleform::Render::GlyphFitter *this)
{
  unsigned __int64 Size; // r11
  unsigned __int64 v2; // r14
  __int16 v3; // bx
  __int16 v4; // di
  __int16 v5; // si
  __int16 v6; // bp
  Scaleform::Render::GlyphFitter::ContourType **Pages; // r8
  unsigned __int64 v8; // rdx
  Scaleform::Render::GlyphFitter::ContourType *v9; // rax
  unsigned int NumVertices; // er8
  unsigned int StartVertex; // er9
  int v12; // er12
  __int64 v13; // r13
  Scaleform::Render::GlyphFitter::VertexType v14; // eax
  unsigned __int64 v15; // r15
  Scaleform::Render::GlyphFitter::VertexType **v16; // rcx
  __int64 v17; // r8
  Scaleform::Render::GlyphFitter::VertexType *v18; // rdx
  int x; // er10
  Scaleform::Render::GlyphFitter::VertexType *v20; // r11
  int y; // er8
  int v22; // er9
  int v23; // edx
  Scaleform::Render::GlyphFitter *v24; // [rsp+40h] [rbp+8h]
  unsigned __int64 v25; // [rsp+50h] [rbp+18h]

  v24 = this;
  Size = this->Contours.Size;
  v2 = 0i64;
  *(_DWORD *)&this->MinX = 2147450879;
  v3 = 0x7FFF;
  *(_DWORD *)&this->MaxX = -2147385343;
  v4 = -32767;
  v25 = Size;
  v5 = 0x7FFF;
  v6 = -32767;
  if ( Size )
  {
    Pages = this->Contours.Pages;
    do
    {
      v8 = v2 & 3;
      v9 = Pages[v2 >> 2];
      NumVertices = v9[v8].NumVertices;
      if ( NumVertices > 2 )
      {
        StartVertex = v9[v8].StartVertex;
        v12 = 0;
        v13 = NumVertices;
        v14 = this->Vertices.Pages[(unsigned __int64)(StartVertex + NumVertices - 1) >> 4][((_BYTE)StartVertex
                                                                                          + (_BYTE)NumVertices
                                                                                          - 1) & 0xF];
        v15 = StartVertex;
        v16 = this->Vertices.Pages;
        do
        {
          v17 = v15 & 0xF;
          v18 = v16[v15 >> 4];
          x = v18[v17].x;
          v20 = &v18[v17];
          y = v20->y;
          if ( (__int16)x < v3 )
            v3 = x;
          if ( (__int16)y < v5 )
            v5 = v20->y;
          if ( (__int16)x > v4 )
            v4 = x;
          if ( (__int16)y > v6 )
            v6 = v20->y;
          v22 = v14.y;
          ++v15;
          v23 = v14.x;
          v14 = *v20;
          v12 += v23 * y - x * v22;
          --v13;
        }
        while ( v13 );
        this = v24;
        Size = v25;
        if ( v3 < v24->MinX || v5 < v24->MinY || v4 > v24->MaxX || v6 > v24->MaxY )
        {
          v24->MinX = v3;
          v24->MinY = v5;
          v24->MaxX = v4;
          v24->MaxY = v6;
          v24->Direction = (v12 > 0) + 1;
        }
      }
      Pages = this->Contours.Pages;
      ++v2;
    }
    while ( v2 < Size );
  }
}

void __fastcall Scaleform::Render::GlyphFitter::computeLerpRamp(
        Scaleform::Render::GlyphFitter *this,
        Scaleform::Render::GlyphFitter::FitDir dir,
        int unitsPerPixel,
        int middle,
        int lowerCaseTop,
        int upperCaseTop)
{
  Scaleform::Render::ArrayPaged<Scaleform::Render::GlyphFitter::VertexType,4,16> *p_LerpPairs; // rbx
  __int16 v7; // ax
  Scaleform::Render::GlyphFitter::FitDir v9; // esi
  unsigned __int64 v11; // rdi
  int v12; // er8
  int SnappedHeight; // ecx
  int v16; // er9
  int v17; // er10
  __int16 MinX; // ax
  int v19; // er14
  unsigned __int64 v20; // rcx
  int v21; // edi
  int v22; // er11
  unsigned __int8 v23; // dl
  unsigned __int64 Size; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rdi
  __int64 v28; // rax
  unsigned __int64 v29; // r14
  char *v30; // rsi
  void *v31; // rdi
  const void *v32; // rdx
  __int64 v33; // r8
  unsigned int v34; // edi
  Scaleform::Render::GlyphFitter::VertexType **Pages; // rax
  Scaleform::Render::GlyphFitter::VertexType v36; // er8
  Scaleform::Render::GlyphFitter::VertexType v37; // ecx
  int v38; // ebx
  unsigned int v39; // edx
  int v40; // edx
  int v41; // [rsp+20h] [rbp-58h]
  unsigned __int64 v42; // [rsp+28h] [rbp-50h]
  int v43; // [rsp+80h] [rbp+8h]
  Scaleform::Render::GlyphFitter::VertexType v45; // [rsp+90h] [rbp+18h]
  Scaleform::Render::GlyphFitter::VertexType v46; // [rsp+90h] [rbp+18h]
  Scaleform::Render::GlyphFitter::VertexType v47; // [rsp+90h] [rbp+18h]
  int lowerCaseTopa; // [rsp+A0h] [rbp+28h]
  int upperCaseTopa; // [rsp+A8h] [rbp+30h]

  p_LerpPairs = &this->LerpPairs;
  v7 = -4 * LOWORD(this->SnappedHeight);
  this->LerpPairs.Size = 0i64;
  v9 = dir;
  v11 = this->LerpPairs.Size >> 4;
  v42 = 0i64;
  v45.x = v7;
  v45.y = v7;
  if ( v11 >= this->LerpPairs.NumPages )
    Scaleform::Render::ArrayPaged<unsigned int,4,16>::allocPage(
      (Scaleform::Render::ArrayPaged<unsigned int,4,16> *)&this->LerpPairs,
      v11);
  v12 = -32767;
  p_LerpPairs->Pages[v11][p_LerpPairs->Size & 0xF] = v45;
  ++p_LerpPairs->Size;
  SnappedHeight = this->SnappedHeight;
  v16 = lowerCaseTop + unitsPerPixel - (lowerCaseTop + SnappedHeight + unitsPerPixel) % unitsPerPixel;
  v43 = v16;
  v17 = upperCaseTop + unitsPerPixel - (upperCaseTop + SnappedHeight + unitsPerPixel) % unitsPerPixel;
  lowerCaseTopa = v17;
  if ( v9 == FitX )
    MinX = this->MinX;
  else
    MinX = this->MinY;
  v19 = unitsPerPixel + 1;
  v41 = MinX;
  if ( this->Events.Size )
  {
    v20 = 0i64;
    v21 = MinX;
    v22 = -MinX;
    upperCaseTopa = v22;
    while ( 1 )
    {
      v23 = this->Events.Array[v20];
      if ( v21 <= middle || v9 == FitX )
        break;
      if ( (v23 & 2) != 0 )
      {
        if ( !upperCaseTop )
          goto LABEL_26;
        if ( v21 >= upperCaseTop && v21 < v19 + upperCaseTop )
        {
          if ( v21 <= v19 + v12
            || unitsPerPixel
             + p_LerpPairs->Pages[(p_LerpPairs->Size - 1) >> 4][(LODWORD(p_LerpPairs->Size) - 1) & 0xF].y >= v17 )
          {
            Size = p_LerpPairs->Size;
            if ( Size )
              p_LerpPairs->Size = Size - 1;
          }
          v46.y = v17;
          goto LABEL_31;
        }
        if ( v21 < lowerCaseTop || v21 >= v19 + lowerCaseTop )
LABEL_26:
          v16 = unitsPerPixel + v21 - (unitsPerPixel + this->SnappedHeight + v21) % unitsPerPixel;
        if ( v21 <= v19 + v12
          || unitsPerPixel + p_LerpPairs->Pages[(p_LerpPairs->Size - 1) >> 4][(LODWORD(p_LerpPairs->Size) - 1) & 0xF].y >= v16 )
        {
          v25 = p_LerpPairs->Size;
          if ( v25 )
            p_LerpPairs->Size = v25 - 1;
        }
        v46.y = v16;
LABEL_31:
        v26 = p_LerpPairs->Size >> 4;
        v46.x = v21;
        if ( v26 >= p_LerpPairs->NumPages )
        {
          Scaleform::Render::ArrayPaged<unsigned int,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<unsigned int,4,16> *)p_LerpPairs,
            v26);
          v17 = lowerCaseTopa;
          v22 = upperCaseTopa;
        }
        p_LerpPairs->Pages[v26][p_LerpPairs->Size & 0xF] = v46;
        ++p_LerpPairs->Size;
LABEL_34:
        v12 = v21;
      }
LABEL_35:
      v16 = v43;
      ++v21;
      v9 = dir;
      v20 = (unsigned int)(v22 + v21);
      if ( v20 >= this->Events.Size )
        goto LABEL_36;
    }
    if ( (v23 & 1) == 0 || v21 <= v19 + v12 )
      goto LABEL_35;
    if ( p_LerpPairs->Pages[(p_LerpPairs->Size - 1) >> 4][(LODWORD(p_LerpPairs->Size) - 1) & 0xF].y != v21 + unitsPerPixel / 2 + 1 - (v21 + this->SnappedHeight + unitsPerPixel / 2 + 1) % unitsPerPixel )
    {
      v46.y = v21 + unitsPerPixel / 2 + 1 - (v21 + this->SnappedHeight + unitsPerPixel / 2 + 1) % unitsPerPixel;
      goto LABEL_31;
    }
    goto LABEL_34;
  }
LABEL_36:
  v27 = p_LerpPairs->Size >> 4;
  v47.x = 4 * LOWORD(this->SnappedHeight);
  v47.y = v47.x;
  if ( v27 >= p_LerpPairs->NumPages )
    Scaleform::Render::ArrayPaged<unsigned int,4,16>::allocPage(
      (Scaleform::Render::ArrayPaged<unsigned int,4,16> *)p_LerpPairs,
      v27);
  p_LerpPairs->Pages[v27][p_LerpPairs->Size & 0xF] = v47;
  v28 = 224i64;
  ++p_LerpPairs->Size;
  v29 = this->Events.Size;
  if ( v9 == FitX )
    v28 = 200i64;
  v30 = (char *)this + v28;
  if ( v29 > *(_QWORD *)((char *)&this->NominalFontHeight + v28) )
  {
    v31 = Scaleform::Render::LinearHeap::Alloc(*(Scaleform::Render::LinearHeap **)v30, 2 * v29);
    memset(v31, 0, 2 * v29);
    v32 = (const void *)*((_QWORD *)v30 + 2);
    if ( v32 )
    {
      v33 = *((_QWORD *)v30 + 1);
      if ( v33 )
        memmove(v31, v32, 2 * v33);
    }
    *((_QWORD *)v30 + 2) = v31;
  }
  *((_QWORD *)v30 + 1) = v29;
  v34 = 2;
  Pages = this->LerpPairs.Pages;
  v36 = **Pages;
  v37 = (*Pages)[1];
  if ( this->Events.Size )
  {
    v38 = v41;
    do
    {
      if ( v38 >= v37.x )
      {
        v39 = v34;
        if ( v34 < this->LerpPairs.Size )
        {
          v36 = v37;
          ++v34;
          v37 = this->LerpPairs.Pages[(unsigned __int64)v39 >> 4][v39 & 0xF];
        }
      }
      v40 = v38 - v36.x;
      ++v38;
      *(_WORD *)(*((_QWORD *)v30 + 2) + 2 * v42) = v36.y + v40 * (v37.y - v36.y) / (v37.x - v36.x) - v41;
      v42 = (unsigned int)(v38 - v41);
    }
    while ( v42 < this->Events.Size );
  }
}

void __fastcall Scaleform::Render::GlyphFitter::detectEvents(
        Scaleform::Render::GlyphFitter *this,
        Scaleform::Render::GlyphFitter::FitDir dir)
{
  int MinX; // eax
  int MaxX; // ecx
  int v6; // er15
  unsigned int v7; // er12
  Scaleform::Render::GlyphFitter::ContourType *v8; // r14
  int v9; // ebp
  unsigned int NumVertices; // esi
  unsigned int StartVertex; // er11
  Scaleform::Render::GlyphFitter::VertexType **Pages; // rdi
  Scaleform::Render::GlyphFitter::VertexType v13; // er8
  Scaleform::Render::GlyphFitter::VertexType v14; // ecx
  Scaleform::Render::GlyphFitter::VertexType v15; // eax
  __int16 x; // si
  __int16 y; // r11
  __int16 v18; // dx
  char v19; // r9
  int v20; // edi
  __int64 v21; // rdx
  int v22; // er10
  bool v23; // cc

  if ( dir == FitX )
  {
    MinX = this->MinX;
    MaxX = this->MaxX;
  }
  else
  {
    MinX = this->MinY;
    MaxX = this->MaxY;
  }
  v6 = MinX;
  Scaleform::Render::ArrayUnsafe<unsigned char>::Resize(&this->Events, MaxX - MinX + 1);
  memset(this->Events.Array, 0, this->Events.Size);
  v7 = 0;
  if ( LODWORD(this->Contours.Size) )
  {
    while ( 1 )
    {
      v8 = &this->Contours.Pages[(unsigned __int64)v7 >> 2][v7 & 3];
      if ( v8->NumVertices > 2 )
      {
        v9 = 0;
        *this->Events.Array = 3;
        NumVertices = v8->NumVertices;
        if ( NumVertices )
          break;
      }
LABEL_28:
      if ( ++v7 >= LODWORD(this->Contours.Size) )
        return;
    }
    while ( 1 )
    {
      StartVertex = v8->StartVertex;
      Pages = this->Vertices.Pages;
      v13 = Pages[(unsigned __int64)(StartVertex + v9) >> 4][((_BYTE)StartVertex + (_BYTE)v9) & 0xF];
      v14 = Pages[(unsigned __int64)(StartVertex + (v9 + 1) % NumVertices) >> 4][((_BYTE)StartVertex
                                                                                + (unsigned __int8)((v9 + 1)
                                                                                                  % NumVertices)) & 0xF];
      v15 = Pages[(unsigned __int64)(v8->StartVertex + (v9 + 2) % NumVertices) >> 4][((unsigned __int8)v8->StartVertex
                                                                                    + (unsigned __int8)((v9 + 2) % NumVertices)) & 0xF];
      if ( dir == FitX )
      {
        x = v13.x;
        y = v14.x;
        v18 = v15.x;
        v13.x = -v13.y;
        v14.x = -v14.y;
        v15.x = -v15.y;
      }
      else
      {
        x = v13.y;
        y = v14.y;
        v18 = v15.y;
      }
      v19 = 0;
      if ( x < y )
        goto LABEL_13;
      if ( v18 < y )
        break;
LABEL_14:
      v20 = y - v6;
      if ( v13.x > v14.x )
        goto LABEL_18;
      if ( v14.x <= v15.x )
      {
        this->Events.Array[v20] |= (this->Direction == DirCW) + 1;
        v19 = 1;
      }
      if ( v13.x >= v14.x )
      {
LABEL_18:
        if ( v14.x >= v15.x )
        {
          v21 = v20;
LABEL_26:
          this->Events.Array[v21] |= (this->Direction != DirCW) + 1;
          goto LABEL_27;
        }
      }
      if ( !v19 )
      {
LABEL_21:
        if ( x != y )
          goto LABEL_27;
        v22 = y - v6;
        v23 = v13.x <= v14.x;
        if ( v13.x < v14.x )
        {
          this->Events.Array[v22] |= (this->Direction == DirCW) + 1;
          v23 = v13.x <= v14.x;
        }
        if ( v23 )
          goto LABEL_27;
        v21 = v22;
        goto LABEL_26;
      }
LABEL_27:
      NumVertices = v8->NumVertices;
      if ( ++v9 >= NumVertices )
        goto LABEL_28;
    }
    if ( x > y )
      goto LABEL_27;
LABEL_13:
    if ( v18 > y )
      goto LABEL_21;
    goto LABEL_14;
  }
}

void __fastcall Scaleform::Render::GlyphFitter::removeDuplicateClosures(Scaleform::Render::GlyphFitter *this)
{
  unsigned int v1; // er9
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  Scaleform::Render::GlyphFitter::ContourType *v6; // rcx
  unsigned int NumVertices; // er11
  Scaleform::Render::GlyphFitter::ContourType *v8; // r10
  Scaleform::Render::GlyphFitter::VertexType **Pages; // r8
  Scaleform::Render::GlyphFitter::VertexType *v10; // rdi
  Scaleform::Render::GlyphFitter::VertexType *v11; // rdx

  v1 = 0;
  if ( this->Contours.Size )
  {
    v3 = 0i64;
    do
    {
      v4 = v3 >> 2;
      v5 = v3 & 3;
      v6 = this->Contours.Pages[v4];
      NumVertices = v6[v5].NumVertices;
      v8 = &v6[v5];
      if ( NumVertices > 2 )
      {
        Pages = this->Vertices.Pages;
        v10 = &Pages[(unsigned __int64)v8->StartVertex >> 4][v8->StartVertex & 0xF];
        v11 = &Pages[(unsigned __int64)(NumVertices + v8->StartVertex - 1) >> 4][((_BYTE)NumVertices
                                                                                + LOBYTE(v8->StartVertex)
                                                                                - 1) & 0xF];
        if ( v10->x == v11->x && v10->y == v11->y )
          v8->NumVertices = NumVertices - 1;
      }
      v3 = ++v1;
    }
    while ( v1 < this->Contours.Size );
  }
}

