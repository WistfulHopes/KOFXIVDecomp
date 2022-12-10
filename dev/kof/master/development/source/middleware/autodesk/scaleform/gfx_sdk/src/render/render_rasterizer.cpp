#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

Scaleform::Render::Rasterizer::Rasterizer(Scaleform::MemoryHeap * heap); // 0x140408DC0
void Scaleform::Render::Rasterizer::Clear(); // 0x140408F50
void Scaleform::Render::Rasterizer::setGamma(long idx, float g); // 0x140409F00
void Scaleform::Render::Rasterizer::SetGamma1(float g); // 0x140409250
void Scaleform::Render::Rasterizer::SetGamma2(float g); // 0x140409280
void Scaleform::Render::Rasterizer::MoveTo(float x, float y); // 0x140409100
void Scaleform::Render::Rasterizer::LineTo(float x, float y); // 0x140409090
void Scaleform::Render::Rasterizer::ClosePath(); // 0x140409010
void Scaleform::Render::Rasterizer::horLine(long ey, long x1, long y1, long x2, long y2); // 0x1404096C0
void Scaleform::Render::Rasterizer::line(long x1, long y1, long x2, long y2); // 0x1404099C0
bool Scaleform::Render::Rasterizer::SortCells(); // 0x1404092B0
class Scaleform::Alg::ArrayAdaptor<Scaleform::Render::Rasterizer::Cell *>
{
	typedef Scaleform::Render::Rasterizer::Cell ValueType;
public:
	ArrayAdaptor<Scaleform::Render::Rasterizer::Cell *>(Scaleform::Render::Rasterizer::Cell * *, unsigned long long);
	ArrayAdaptor<Scaleform::Render::Rasterizer::Cell *>();
	unsigned long long GetSize();
	Scaleform::Render::Rasterizer::Cell * & operator[](unsigned long long);
	Scaleform::Render::Rasterizer::Cell * & operator[](unsigned long long);
private:
	Scaleform::Render::Rasterizer::Cell * * Data; // 0x0
	unsigned long long Size; // 0x8
};
void Scaleform::Render::Rasterizer::SweepScanline(unsigned long scanline, unsigned char * pRaster, unsigned long numChannels, long gammaIdx); // 0x1404094F0void __fastcall Scaleform::Alg::QuickSortSliced<Scaleform::Alg::ArrayAdaptor<Scaleform::Render::Rasterizer::Cell *>,bool (*)(Scaleform::Render::Rasterizer::Cell const *,Scaleform::Render::Rasterizer::Cell const *)>(
        Scaleform::Alg::ArrayAdaptor<Scaleform::Render::Rasterizer::Cell *> *arr,
        unsigned __int64 start,
        unsigned __int64 end,
        bool (__fastcall *less)(const Scaleform::Render::Rasterizer::Cell *, const Scaleform::Render::Rasterizer::Cell *))
{
  signed __int64 v5; // r13
  unsigned __int64 v6; // r15
  char *i; // r12
  signed __int64 v9; // rsi
  signed __int64 v10; // rdi
  Scaleform::Render::Rasterizer::Cell *v11; // rcx
  Scaleform::Render::Rasterizer::Cell **v12; // rdx
  Scaleform::Render::Rasterizer::Cell *v13; // rdx
  Scaleform::Render::Rasterizer::Cell **v14; // r8
  Scaleform::Render::Rasterizer::Cell *v15; // rdx
  Scaleform::Render::Rasterizer::Cell **v16; // r8
  Scaleform::Render::Rasterizer::Cell **v17; // r8
  Scaleform::Render::Rasterizer::Cell **v18; // rcx
  Scaleform::Render::Rasterizer::Cell *v19; // rdx
  Scaleform::Render::Rasterizer::Cell **Data; // rax
  Scaleform::Render::Rasterizer::Cell *v21; // rdx
  signed __int64 v22; // r14
  unsigned __int64 j; // rdi
  unsigned __int64 k; // rsi
  Scaleform::Render::Rasterizer::Cell **v25; // rdx
  Scaleform::Render::Rasterizer::Cell *v26; // rcx
  char v27[640]; // [rsp+20h] [rbp-2D8h] BYREF

  v5 = end;
  v6 = start;
  if ( end - start >= 2 )
  {
    for ( i = v27; ; v5 = *((_QWORD *)i + 1) )
    {
      while ( (__int64)(v5 - v6) > 9 )
      {
        v9 = v6 + 1;
        v10 = v5 - 1;
        v11 = arr->Data[v6];
        v12 = &arr->Data[v6] + (__int64)(v5 - v6) / 2;
        arr->Data[v6] = *v12;
        *v12 = v11;
        if ( less(arr->Data[v5 - 1], arr->Data[v6 + 1]) )
        {
          v13 = arr->Data[v10];
          v14 = &arr->Data[v9];
          arr->Data[v10] = *v14;
          *v14 = v13;
        }
        if ( less(arr->Data[v6], arr->Data[v9]) )
        {
          v15 = arr->Data[v6];
          v16 = &arr->Data[v9];
          arr->Data[v6] = *v16;
          *v16 = v15;
        }
        if ( less(arr->Data[v10], arr->Data[v6]) )
        {
          v17 = &arr->Data[v6];
          v18 = &arr->Data[v10];
          goto LABEL_10;
        }
        while ( 1 )
        {
          do
            ++v9;
          while ( less(arr->Data[v9], arr->Data[v6]) );
          do
            --v10;
          while ( less(arr->Data[v6], arr->Data[v10]) );
          Data = arr->Data;
          v17 = &arr->Data[v10];
          if ( v9 > v10 )
            break;
          v18 = &Data[v9];
LABEL_10:
          v19 = *v18;
          *v18 = *v17;
          *v17 = v19;
        }
        v21 = Data[v6];
        Data[v6] = *v17;
        *v17 = v21;
        if ( (__int64)(v10 - v6) <= v5 - v9 )
        {
          *((_QWORD *)i + 1) = v5;
          v5 = v10;
          *(_QWORD *)i = v9;
        }
        else
        {
          *(_QWORD *)i = v6;
          v6 = v9;
          *((_QWORD *)i + 1) = v10;
        }
        i += 16;
      }
      v22 = v6 + 1;
      for ( j = v6; v22 < v5; ++v22 )
      {
        for ( k = j; less(arr->Data[j + 1], arr->Data[j]); k = j )
        {
          v25 = &arr->Data[k];
          v26 = v25[1];
          v25[1] = *v25;
          *v25 = v26;
          if ( j == v6 )
            break;
          --j;
        }
        j = v22;
      }
      if ( i <= v27 )
        break;
      v6 = *((_QWORD *)i - 2);
      i -= 16;
    }
  }
}

void __fastcall Scaleform::Render::Rasterizer::Rasterizer(
        Scaleform::Render::Rasterizer *this,
        Scaleform::MemoryHeap *heap)
{
  this->__vftable = (Scaleform::Render::Rasterizer_vtbl *)&Scaleform::Render::Rasterizer::`vftable';
  this->LHeap.pHeap = heap;
  this->LHeap.Granularity = 0x2000i64;
  this->LHeap.pPagePool = 0i64;
  this->LHeap.pLastPage = 0i64;
  this->LHeap.MaxPages = 0i64;
  this->FillRule = FillNonZero;
  this->Cells.pHeap = &this->LHeap;
  this->Cells.Size = 0i64;
  this->Cells.NumPages = 0i64;
  this->Cells.MaxPages = 0i64;
  this->Cells.Pages = 0i64;
  this->SortedCells.pHeap = &this->LHeap;
  this->SortedCells.Size = 0i64;
  this->SortedCells.Array = 0i64;
  this->SortedYs.pHeap = &this->LHeap;
  this->SortedYs.Size = 0i64;
  this->SortedYs.Array = 0i64;
  *(_QWORD *)&this->CurrCell.x = 0i64;
  *(_QWORD *)&this->CurrCell.Cover = 0i64;
  *(_QWORD *)&this->StartX = 0i64;
  *(_QWORD *)&this->LastX = 0i64;
  *(_QWORD *)&this->LastXf = 0i64;
  this->CurrCell.Area = 0;
  this->MinX = 0x7FFFFFFF;
  this->MinY = 0x7FFFFFFF;
  this->MaxX = -2147483647;
  this->MaxY = -2147483647;
  this->CurrCell.x = 0x7FFFFFFF;
  *(_QWORD *)&this->CurrCell.y = 0x7FFFFFFFi64;
  Scaleform::Render::Rasterizer::setGamma(this, 0, 1.0);
  this->Gamma1 = 1.0;
  Scaleform::Render::Rasterizer::setGamma(this, 1, 1.0);
  this->Gamma2 = 1.0;
}

// attributes: thunk
void __fastcall Scaleform::Render::Rasterizer::AddVertex(Scaleform::Render::Rasterizer *this, float x, float y)
{
  Scaleform::Render::Rasterizer::LineTo(this, x, y);
}

void __fastcall Scaleform::Render::Rasterizer::Clear(Scaleform::Render::Rasterizer *this)
{
  this->Cells.MaxPages = 0i64;
  this->Cells.NumPages = 0i64;
  this->Cells.Size = 0i64;
  this->Cells.Pages = 0i64;
  this->SortedCells.Size = 0i64;
  this->SortedCells.Array = 0i64;
  this->SortedYs.Size = 0i64;
  this->SortedYs.Array = 0i64;
  Scaleform::Render::LinearHeap::ClearAndRelease(&this->LHeap);
  this->CurrCell.x = 0x7FFFFFFF;
  *(_QWORD *)&this->CurrCell.y = 0x7FFFFFFFi64;
  this->CurrCell.Area = 0;
  this->MinX = 0x7FFFFFFF;
  this->MinY = 0x7FFFFFFF;
  this->MaxX = -2147483647;
  this->MaxY = -2147483647;
  *(_QWORD *)&this->StartX = 0i64;
  *(_QWORD *)&this->LastX = 0i64;
  *(_QWORD *)&this->LastXf = 0i64;
}

void __fastcall Scaleform::Render::Rasterizer::ClosePath(Scaleform::Render::Rasterizer *this)
{
  if ( *(_QWORD *)&this->LastX != *(_QWORD *)&this->StartX )
  {
    Scaleform::Render::Rasterizer::line(this, this->LastX, this->LastY, this->StartX, this->StartY);
    this->LastX = this->StartX;
    this->LastY = this->StartY;
  }
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

float __fastcall Scaleform::Render::Rasterizer::GetLastX(Scaleform::Render::Rasterizer *this)
{
  return this->LastXf;
}

float __fastcall Scaleform::Render::Rasterizer::GetLastY(Scaleform::Render::Rasterizer *this)
{
  return this->LastYf;
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

void __fastcall Scaleform::Render::Rasterizer::LineTo(Scaleform::Render::Rasterizer *this, float x, float y)
{
  int LastY; // er8
  int LastX; // edx
  int v6; // edi
  int y2; // ebx

  LastY = this->LastY;
  LastX = this->LastX;
  this->LastXf = x;
  this->LastYf = y;
  v6 = (int)(float)(x * 256.0);
  y2 = (int)(float)(y * 256.0);
  Scaleform::Render::Rasterizer::line(this, LastX, LastY, v6, y2);
  this->LastY = y2;
  this->LastX = v6;
}

void __fastcall Scaleform::Render::Rasterizer::MoveTo(Scaleform::Render::Rasterizer *this, float x, float y)
{
  float v3; // xmm1_4
  int v4; // eax

  this->LastXf = x;
  v3 = x * 256.0;
  this->LastYf = y;
  this->LastX = (int)v3;
  this->StartX = (int)v3;
  v4 = (int)(float)(y * 256.0);
  this->LastY = v4;
  this->StartY = v4;
}

void __fastcall Scaleform::Render::ArrayPaged<Scaleform::Render::Rasterizer::Cell,4,16>::PushBack(
        Scaleform::Render::ArrayPaged<Scaleform::Render::Rasterizer::Cell,4,16> *this,
        const Scaleform::Render::Rasterizer::Cell *val)
{
  unsigned __int64 v3; // rdi

  v3 = this->Size >> 4;
  if ( v3 >= this->NumPages )
    Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
      (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)this,
      this->Size >> 4);
  this->Pages[v3][this->Size & 0xF] = *val;
  ++this->Size;
}

void __fastcall Scaleform::Render::ArrayUnsafe<Scaleform::Render::Rasterizer::Cell *>::Resize(
        Scaleform::Render::ArrayUnsafe<Scaleform::Render::Rasterizer::SortedY> *this,
        unsigned __int64 size)
{
  size_t v4; // rbx
  Scaleform::Render::Rasterizer::SortedY *v5; // rbp
  Scaleform::Render::Rasterizer::SortedY *Array; // rdx
  unsigned __int64 v7; // r8

  if ( size <= this->Size )
  {
    this->Size = size;
  }
  else
  {
    v4 = 8 * size;
    v5 = (Scaleform::Render::Rasterizer::SortedY *)Scaleform::Render::LinearHeap::Alloc(this->pHeap, 8 * size);
    memset(v5, 0, v4);
    Array = this->Array;
    if ( Array )
    {
      v7 = this->Size;
      if ( v7 )
        memmove(v5, Array, 8 * v7);
    }
    this->Array = v5;
    this->Size = size;
  }
}

void __fastcall Scaleform::Render::Rasterizer::SetGamma1(Scaleform::Render::Rasterizer *this, float g)
{
  Scaleform::Render::Rasterizer::setGamma(this, 0, g);
  this->Gamma1 = g;
}

void __fastcall Scaleform::Render::Rasterizer::SetGamma2(Scaleform::Render::Rasterizer *this, float g)
{
  Scaleform::Render::Rasterizer::setGamma(this, 1, g);
  this->Gamma2 = g;
}

char __fastcall Scaleform::Render::Rasterizer::SortCells(Scaleform::Render::Rasterizer *this)
{
  Scaleform::Render::ArrayPaged<Scaleform::Render::Rasterizer::Cell,4,16> *p_Cells; // rdi
  unsigned __int64 v3; // rsi
  unsigned __int64 Size; // rdx
  unsigned int v5; // esi
  unsigned int v7; // er8
  unsigned __int64 v8; // rdx
  int v9; // ecx
  unsigned int v10; // edx
  unsigned int v11; // er8
  __int64 v12; // r9
  Scaleform::Render::Rasterizer::SortedY *Array; // rax
  unsigned int Start; // ecx
  unsigned int v15; // er9
  unsigned __int64 v16; // r8
  Scaleform::Render::Rasterizer::Cell *v17; // r8
  Scaleform::Render::Rasterizer::SortedY *v18; // rdx
  __int64 v19; // rcx
  Scaleform::Render::Rasterizer::SortedY *v20; // rax
  unsigned __int64 Count; // rdx
  __int64 v22; // rcx
  Scaleform::Render::Rasterizer::Cell **v23; // rax
  Scaleform::Alg::ArrayAdaptor<Scaleform::Render::Rasterizer::Cell *> arr; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_QWORD *)&this->CurrCell.Cover )
  {
    p_Cells = &this->Cells;
    v3 = this->Cells.Size >> 4;
    if ( v3 >= this->Cells.NumPages )
      Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
        (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->Cells,
        this->Cells.Size >> 4);
    p_Cells->Pages[v3][p_Cells->Size & 0xF] = this->CurrCell;
    ++p_Cells->Size;
  }
  Size = this->Cells.Size;
  v5 = 0;
  this->CurrCell.x = 0x7FFFFFFF;
  *(_QWORD *)&this->CurrCell.y = 0x7FFFFFFFi64;
  this->CurrCell.Area = 0;
  if ( !Size )
    return 0;
  if ( !this->SortedYs.Size )
  {
    Scaleform::Render::ArrayUnsafe<Scaleform::Render::Rasterizer::Cell *>::Resize(
      (Scaleform::Render::ArrayUnsafe<Scaleform::Render::Rasterizer::SortedY> *)&this->SortedCells,
      Size);
    Scaleform::Render::ArrayUnsafe<Scaleform::Render::Rasterizer::Cell *>::Resize(
      &this->SortedYs,
      this->MaxY - this->MinY + 1);
    memset(this->SortedYs.Array, 0, 8 * this->SortedYs.Size);
    v7 = 0;
    if ( this->Cells.Size )
    {
      v8 = 0i64;
      do
      {
        ++v7;
        v9 = this->Cells.Pages[v8 >> 4][v8 & 0xF].y - this->MinY;
        ++this->SortedYs.Array[v9].Start;
        v8 = v7;
      }
      while ( v7 < this->Cells.Size );
    }
    v10 = 0;
    v11 = 0;
    if ( this->SortedYs.Size )
    {
      v12 = 0i64;
      do
      {
        Array = this->SortedYs.Array;
        ++v11;
        Start = Array[v12].Start;
        Array[v12].Start = v10;
        v10 += Start;
        v12 = v11;
      }
      while ( v11 < this->SortedYs.Size );
    }
    v15 = 0;
    if ( this->Cells.Size )
    {
      v16 = 0i64;
      do
      {
        ++v15;
        v17 = &this->Cells.Pages[v16 >> 4][v16 & 0xF];
        v18 = &this->SortedYs.Array[v17->y - this->MinY];
        this->SortedCells.Array[v18->Count + v18->Start] = v17;
        ++v18->Count;
        v16 = v15;
      }
      while ( v15 < this->Cells.Size );
    }
    if ( this->SortedYs.Size )
    {
      v19 = 0i64;
      do
      {
        v20 = this->SortedYs.Array;
        Count = v20[v19].Count;
        if ( (_DWORD)Count )
        {
          v22 = v20[v19].Start;
          v23 = this->SortedCells.Array;
          arr.Size = Count;
          arr.Data = &v23[v22];
          Scaleform::Alg::QuickSortSliced<Scaleform::Alg::ArrayAdaptor<Scaleform::Render::Rasterizer::Cell *>,bool (*)(Scaleform::Render::Rasterizer::Cell const *,Scaleform::Render::Rasterizer::Cell const *)>(
            &arr,
            0i64,
            (unsigned int)Count,
            Scaleform::Render::Rasterizer::cellXLess);
        }
        v19 = ++v5;
      }
      while ( v5 < this->SortedYs.Size );
    }
  }
  return 1;
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

void __fastcall Scaleform::Render::Rasterizer::SweepScanline(
        Scaleform::Render::Rasterizer *this,
        unsigned int scanline,
        unsigned __int8 *pRaster,
        unsigned int numChannels,
        int gammaIdx)
{
  unsigned __int64 v6; // r15
  Scaleform::Render::Rasterizer::SortedY *Array; // rax
  int v9; // ebp
  unsigned int Count; // esi
  Scaleform::Render::Rasterizer::Cell **v11; // rbx
  Scaleform::Render::Rasterizer::Cell *v12; // rdx
  int x; // er9
  int Area; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  char *v18; // rax

  v6 = numChannels;
  if ( scanline < this->SortedYs.Size )
  {
    Array = this->SortedYs.Array;
    v9 = 0;
    Count = Array[scanline].Count;
    v11 = &this->SortedCells.Array[Array[scanline].Start];
    if ( Count )
    {
      while ( 1 )
      {
        v12 = *v11;
        v9 += (*v11)->Cover;
        x = (*v11)->x;
        Area = (*v11)->Area;
        if ( --Count )
        {
          do
          {
            v12 = v11[1];
            ++v11;
            if ( v12->x != x )
              break;
            Area += v12->Area;
            v9 += v12->Cover;
            --Count;
          }
          while ( Count );
        }
        if ( Area )
        {
          v15 = ((v9 << 9) - Area) >> 9;
          v16 = -v15;
          if ( v15 >= 0 )
            v16 = v15;
          if ( this->FillRule == FillEvenOdd )
          {
            v16 &= 0x1FFu;
            if ( (unsigned int)v16 > 0x100 )
              v16 = 512 - v16;
          }
          if ( v16 > 255 )
            v16 = 255;
          if ( (_DWORD)v6 )
            memset(&pRaster[(unsigned int)(v6 * (x - this->MinX))], this->GammaLut[(__int64)gammaIdx][v16], v6);
          ++x;
        }
        if ( !Count )
          break;
        if ( v12->x > x )
        {
          v17 = -(v9 << 9 >> 9);
          if ( v9 << 9 >> 9 >= 0 )
            v17 = v9 << 9 >> 9;
          if ( this->FillRule == FillEvenOdd )
          {
            v17 &= 0x1FFu;
            if ( (unsigned int)v17 > 0x100 )
              v17 = 512 - v17;
          }
          if ( v17 > 255 )
            v17 = 255;
          v18 = (char *)this + 256 * (__int64)gammaIdx;
          if ( v18[v17 + 60] )
            memset(
              &pRaster[(unsigned int)(v6 * (x - this->MinX))],
              (unsigned __int8)v18[v17 + 60],
              (unsigned int)(v6 * (v12->x - x)));
        }
      }
    }
  }
}

void __fastcall Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
        Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *this,
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
      this->Pages = (Scaleform::Render::Tessellator::OuterEdgeType **)v5;
      this->MaxPages = 2 * v6;
    }
    else
    {
      this->MaxPages = 16i64;
      this->Pages = (Scaleform::Render::Tessellator::OuterEdgeType **)Scaleform::Render::LinearHeap::Alloc(
                                                                        this->pHeap,
                                                                        0x80ui64);
    }
  }
  this->Pages[nb] = (Scaleform::Render::Tessellator::OuterEdgeType *)Scaleform::Render::LinearHeap::Alloc(
                                                                       this->pHeap,
                                                                       0x100ui64);
  ++this->NumPages;
}

bool __fastcall Scaleform::Render::Rasterizer::cellXLess(
        const Scaleform::Render::Rasterizer::Cell *a,
        const Scaleform::Render::Rasterizer::Cell *b)
{
  return a->x < b->x;
}

void __fastcall Scaleform::Render::Rasterizer::horLine(
        Scaleform::Render::Rasterizer *this,
        int ey,
        int x1,
        int y1,
        int x2,
        int y2)
{
  int v7; // er13
  int v8; // ebp
  int v10; // edi
  int v11; // er10
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // er15
  int v16; // er8
  int v17; // er14
  int v18; // esi
  int v19; // edi
  Scaleform::Render::Rasterizer::Cell *p_CurrCell; // r8
  int v21; // edx
  int v22; // er11
  int v23; // ecx
  int v24; // eax
  int v25; // edx
  int v26; // esi
  int v27; // edx
  int v28; // er13
  int v29; // er14
  bool v30; // sf
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  unsigned __int64 v34; // rbp
  Scaleform::Render::Rasterizer::Cell *v35; // rax
  int v36; // er13
  int v37; // [rsp+20h] [rbp-48h]
  int v38; // [rsp+24h] [rbp-44h]
  int v39; // [rsp+28h] [rbp-40h]
  int v41; // [rsp+80h] [rbp+18h]
  int v42; // [rsp+88h] [rbp+20h]
  int v43; // [rsp+88h] [rbp+20h]
  int v44; // [rsp+88h] [rbp+20h]
  int x2a; // [rsp+90h] [rbp+28h]

  v42 = y1;
  v7 = y2;
  v8 = x2 >> 8;
  v10 = x1 >> 8;
  v11 = ey;
  v38 = x2 >> 8;
  v12 = (unsigned __int8)x1;
  v39 = (unsigned __int8)x2;
  if ( y1 == y2 )
  {
    if ( (this->CurrCell.y - ey) | (this->CurrCell.x - v8) )
    {
      if ( *(_QWORD *)&this->CurrCell.Cover )
      {
        Scaleform::Render::ArrayPaged<Scaleform::Render::Rasterizer::Cell,4,16>::PushBack(&this->Cells, &this->CurrCell);
        v11 = ey;
      }
      this->CurrCell.x = v8;
      *(_QWORD *)&this->CurrCell.Cover = 0i64;
      this->CurrCell.y = v11;
    }
  }
  else
  {
    if ( v10 == v8 )
    {
      v13 = (unsigned __int8)x1 + (unsigned __int8)x2;
    }
    else
    {
      x2a = 256;
      v41 = 1;
      v14 = (y2 - y1) * (256 - (unsigned __int8)x1);
      v15 = x2 - x1;
      if ( v15 >= 0 )
      {
        v16 = 1;
      }
      else
      {
        v16 = -1;
        x2a = 0;
        v41 = -1;
        v14 = v12 * (y2 - y1);
        v15 = -v15;
      }
      v17 = v14 % v15;
      v18 = v14 / v15;
      if ( v14 % v15 < 0 )
      {
        --v18;
        v17 += v15;
      }
      v19 = v16 + v10;
      p_CurrCell = &this->CurrCell;
      v21 = v12 + x2a;
      v22 = v18 + this->CurrCell.Cover;
      v23 = this->CurrCell.x - v19;
      v24 = this->CurrCell.y - v11;
      this->CurrCell.Cover = v22;
      v25 = this->CurrCell.Area + v18 * v21;
      this->CurrCell.Area = v25;
      if ( v24 | v23 )
      {
        if ( v22 | v25 )
        {
          Scaleform::Render::ArrayPaged<Scaleform::Render::Rasterizer::Cell,4,16>::PushBack(
            &this->Cells,
            &this->CurrCell);
          y1 = v42;
          p_CurrCell = &this->CurrCell;
          v11 = ey;
        }
        p_CurrCell->x = v19;
        this->CurrCell.y = v11;
        *(_QWORD *)&this->CurrCell.Cover = 0i64;
      }
      y1 += v18;
      if ( v19 != v8 )
      {
        v26 = v18 - y1;
        v27 = ((v26 + y2) << 8) % v15;
        v37 = v27;
        v43 = ((v26 + y2) << 8) / v15;
        if ( v27 < 0 )
        {
          v27 += v15;
          v43 = ((v26 + y2) << 8) / v15 - 1;
          v37 = v27;
        }
        v28 = v43;
        v29 = v17 - v15;
        do
        {
          v30 = v27 + v29 < 0;
          v29 += v27;
          v31 = v28;
          if ( !v30 )
          {
            v29 -= v15;
            v31 = v28 + 1;
          }
          this->CurrCell.Cover += v31;
          v32 = v31;
          v19 += v41;
          y1 += v31;
          v33 = p_CurrCell->x - v19;
          this->CurrCell.Area += v32 << 8;
          v44 = y1;
          if ( (this->CurrCell.y - v11) | v33 )
          {
            if ( *(_QWORD *)&this->CurrCell.Cover )
            {
              v34 = this->Cells.Size >> 4;
              if ( v34 >= this->Cells.NumPages )
              {
                Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                  (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->Cells,
                  this->Cells.Size >> 4);
                y1 = v44;
                p_CurrCell = &this->CurrCell;
                v11 = ey;
              }
              v35 = this->Cells.Pages[v34];
              v8 = v38;
              v35[this->Cells.Size & 0xF] = *p_CurrCell;
              ++this->Cells.Size;
            }
            p_CurrCell->x = v19;
            this->CurrCell.y = v11;
            *(_QWORD *)&this->CurrCell.Cover = 0i64;
          }
          v27 = v37;
        }
        while ( v19 != v8 );
        v7 = y2;
      }
      v13 = v39 - x2a + 256;
    }
    v36 = v7 - y1;
    this->CurrCell.Cover += v36;
    this->CurrCell.Area += v36 * v13;
  }
}

void __fastcall Scaleform::Render::Rasterizer::line(
        Scaleform::Render::Rasterizer *this,
        int x1,
        int y1,
        int x2,
        int y2)
{
  int v6; // er15
  int v7; // edi
  int v8; // er13
  int v9; // ecx
  int v10; // esi
  int v11; // er12
  int v12; // er10
  int v13; // edx
  Scaleform::Render::Rasterizer::Cell *p_CurrCell; // r14
  int v15; // ecx
  int v16; // er13
  int v17; // er10
  unsigned int v18; // er11
  unsigned int v19; // edx
  int v20; // er8
  unsigned int v21; // er9
  unsigned int v22; // edi
  unsigned int v23; // eax
  int v24; // edx
  int v25; // er13
  int v26; // er12
  int v27; // ecx
  unsigned int v28; // eax
  unsigned __int64 v29; // rbp
  unsigned int v30; // eax
  int v31; // er9
  int v32; // eax
  int v33; // er15
  int v34; // eax
  int v35; // edx
  int v36; // ebp
  int v37; // er8
  int v38; // edi
  int v39; // er12
  int v40; // edx
  int v41; // ecx
  int v42; // er9
  int v43; // ebp
  int v44; // er10
  bool v45; // sf
  int v46; // eax
  int v47; // er12
  int v48; // er12
  unsigned __int64 v49; // r15
  int v50; // [rsp+30h] [rbp-58h]
  int v51; // [rsp+34h] [rbp-54h]
  int v52; // [rsp+38h] [rbp-50h]
  int v53; // [rsp+90h] [rbp+8h]
  int v55; // [rsp+98h] [rbp+10h]
  int v56; // [rsp+98h] [rbp+10h]
  int v57; // [rsp+A0h] [rbp+18h]
  int v58; // [rsp+A8h] [rbp+20h]
  int v59; // [rsp+A8h] [rbp+20h]
  int y2a; // [rsp+B0h] [rbp+28h]
  int y2b; // [rsp+B0h] [rbp+28h]
  int y2c; // [rsp+B0h] [rbp+28h]
  int y2d; // [rsp+B0h] [rbp+28h]

  v58 = x2;
  v6 = x1 >> 8;
  v7 = y1 >> 8;
  v8 = y2 - y1;
  v9 = x2 >> 8;
  v10 = y2 >> 8;
  v11 = x2 - x1;
  y1 = (unsigned __int8)y1;
  v12 = x1;
  v13 = (unsigned __int8)y2;
  y2a = (unsigned __int8)y1;
  v50 = v10;
  v57 = v13;
  if ( v6 < this->MinX )
    this->MinX = v6;
  if ( v6 > this->MaxX )
    this->MaxX = v6;
  if ( v7 < this->MinY )
    this->MinY = v7;
  if ( v7 > this->MaxY )
    this->MaxY = v7;
  if ( v9 < this->MinX )
    this->MinX = v9;
  if ( v9 > this->MaxX )
    this->MaxX = v9;
  if ( v10 < this->MinY )
    this->MinY = v10;
  if ( v10 > this->MaxY )
    this->MaxY = v10;
  p_CurrCell = &this->CurrCell;
  if ( (this->CurrCell.x - v6) | (this->CurrCell.y - v7) )
  {
    if ( *(_QWORD *)&this->CurrCell.Cover )
    {
      Scaleform::Render::ArrayPaged<Scaleform::Render::Rasterizer::Cell,4,16>::PushBack(&this->Cells, &this->CurrCell);
      y1 = y2a;
      v12 = x1;
      x2 = v58;
      v13 = v57;
    }
    p_CurrCell->x = v6;
    this->CurrCell.y = v7;
    *(_QWORD *)&this->CurrCell.Cover = 0i64;
  }
  if ( v7 == v10 )
  {
    Scaleform::Render::Rasterizer::horLine(this, v7, v12, y1, x2, v13);
  }
  else
  {
    v53 = 1;
    if ( v11 )
    {
      v56 = 256;
      v31 = 256;
      v32 = v11 * (256 - y1);
      if ( v8 >= 0 )
      {
        v33 = 1;
      }
      else
      {
        v33 = -1;
        v56 = 0;
        v53 = -1;
        v32 = v11 * y1;
        v31 = 0;
        v8 = -v8;
      }
      v35 = v32 % v8;
      v34 = v32 / v8;
      v36 = v35;
      if ( v35 < 0 )
      {
        --v34;
        v36 = v8 + v35;
      }
      y2c = v34 + v12;
      Scaleform::Render::Rasterizer::horLine(this, v7, v12, y1, v34 + v12, v31);
      v37 = y2c;
      v38 = v33 + v7;
      if ( (this->CurrCell.y - v38) | (p_CurrCell->x - (y2c >> 8)) )
      {
        if ( *(_QWORD *)&this->CurrCell.Cover )
        {
          Scaleform::Render::ArrayPaged<Scaleform::Render::Rasterizer::Cell,4,16>::PushBack(
            &this->Cells,
            &this->CurrCell);
          v37 = y2c;
        }
        p_CurrCell->x = y2c >> 8;
        *(_QWORD *)&this->CurrCell.Cover = 0i64;
        this->CurrCell.y = v38;
      }
      if ( v38 != v10 )
      {
        v39 = v11 << 8;
        v40 = v39 % v8;
        v52 = v39 % v8;
        v41 = v39 / v8;
        v51 = v39 / v8;
        if ( v39 % v8 < 0 )
        {
          --v41;
          v40 += v8;
          v51 = v41;
          v52 = v40;
        }
        v42 = v56;
        v43 = v36 - v8;
        v44 = 256 - v56;
        do
        {
          v45 = v40 + v43 < 0;
          v43 += v40;
          v46 = v41;
          if ( !v45 )
          {
            v43 -= v8;
            v46 = v41 + 1;
          }
          v47 = v37 + v46;
          Scaleform::Render::Rasterizer::horLine(this, v38, v37, v44, v37 + v46, v42);
          v38 += v53;
          v37 = v47;
          y2d = v47;
          v48 = v47 >> 8;
          if ( (this->CurrCell.y - v38) | (p_CurrCell->x - v48) )
          {
            if ( *(_QWORD *)&this->CurrCell.Cover )
            {
              v49 = this->Cells.Size >> 4;
              if ( v49 >= this->Cells.NumPages )
              {
                Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                  (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->Cells,
                  this->Cells.Size >> 4);
                v37 = y2d;
              }
              this->Cells.Pages[v49][this->Cells.Size & 0xF] = *p_CurrCell;
              ++this->Cells.Size;
              v10 = v50;
            }
            p_CurrCell->x = v48;
            *(_QWORD *)&this->CurrCell.Cover = 0i64;
            this->CurrCell.y = v38;
          }
          v41 = v51;
          v40 = v52;
          v42 = v56;
          v44 = 256 - v56;
        }
        while ( v38 != v10 );
      }
      Scaleform::Render::Rasterizer::horLine(this, v38, v37, 256 - v56, v58, v57);
    }
    else
    {
      v15 = p_CurrCell->x - v6;
      v16 = v8 >> 31;
      v17 = 2 * (v12 - (v6 << 8));
      v55 = v17;
      v18 = (v16 & 0xFFFFFF00) + 256;
      y2b = v18;
      v19 = v18 - y1;
      v20 = v18 - y1 + this->CurrCell.Cover;
      v21 = (v16 & 0xFFFFFFFE) + 1;
      v22 = v21 + v7;
      v23 = this->CurrCell.y - v22;
      v59 = v21;
      this->CurrCell.Cover = v20;
      v24 = this->CurrCell.Area + v17 * v19;
      this->CurrCell.Area = v24;
      if ( v23 | v15 )
      {
        if ( v20 | v24 )
        {
          Scaleform::Render::ArrayPaged<Scaleform::Render::Rasterizer::Cell,4,16>::PushBack(
            &this->Cells,
            &this->CurrCell);
          v17 = v55;
          v21 = (v16 & 0xFFFFFFFE) + 1;
          v18 = y2b;
        }
        p_CurrCell->x = v6;
        this->CurrCell.y = v22;
        *(_QWORD *)&this->CurrCell.Cover = 0i64;
      }
      v25 = 2 * v18 - 256;
      v26 = v17 * v25;
      if ( v22 != v10 )
      {
        do
        {
          v22 += v21;
          v27 = p_CurrCell->x - v6;
          v28 = this->CurrCell.y - v22;
          this->CurrCell.Cover = v25;
          this->CurrCell.Area = v26;
          if ( v28 | v27 )
          {
            if ( v25 | v26 )
            {
              v29 = this->Cells.Size >> 4;
              if ( v29 >= this->Cells.NumPages )
              {
                Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                  (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->Cells,
                  this->Cells.Size >> 4);
                v21 = v59;
              }
              this->Cells.Pages[v29][this->Cells.Size & 0xF] = *p_CurrCell;
              ++this->Cells.Size;
              v10 = v50;
            }
            p_CurrCell->x = v6;
            this->CurrCell.y = v22;
            *(_QWORD *)&this->CurrCell.Cover = 0i64;
          }
        }
        while ( v22 != v10 );
        v17 = v55;
        v18 = y2b;
      }
      v30 = v18 + v57 - 256;
      this->CurrCell.Cover += v30;
      this->CurrCell.Area += v17 * v30;
    }
  }
}

void __fastcall Scaleform::Render::Rasterizer::setGamma(Scaleform::Render::Rasterizer *this, int idx, float g)
{
  int v3; // ebx
  unsigned __int8 *v4; // rdi
  double v5; // xmm0_8

  v3 = 0;
  v4 = this->GammaLut[(__int64)idx];
  do
  {
    v5 = pow((float)((float)v3++ / 255.0), g);
    *v4++ = (int)(v5 * 255.0 + 0.5);
  }
  while ( v3 < 256 );
}

