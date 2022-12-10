#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"

void Scaleform::Render::StrokePath::Clear(); // 0x14039ED00
void Scaleform::Render::StrokePath::ClearAndRelease(); // 0x14039EDB0
void Scaleform::Render::StrokePath::AddVertex(const Scaleform::Render::StrokeVertex & v); // 0x14039E820
bool Scaleform::Render::StrokePath::ClosePath(); // 0x14039EDD0
Scaleform::Render::Stroker::Stroker(Scaleform::Render::LinearHeap * heap); // 0x14039E490
void Scaleform::Render::Stroker::Clear(); // 0x14039ED90
void Scaleform::Render::Stroker::SetToleranceParam(const Scaleform::Render::ToleranceParams & param); // 0x14039FE40
void Scaleform::Render::Stroker::ClosePath(); // 0x14039EE80
void Scaleform::Render::Stroker::GenerateStroke(Scaleform::Render::TessBase * tess); // 0x14039F6D0
void Scaleform::Render::Stroker::CalcEquidistant(Scaleform::Render::TessBase * tess, Scaleform::Render::StrokerTypes::EquidistantDir dir); // 0x14039EAC0
void Scaleform::Render::Stroker::calcArc(Scaleform::Render::TessBase * tess, float x, float y, float dx1, float dy1, float dx2, float dy2); // 0x1403A0740
void Scaleform::Render::Stroker::calcMiter(Scaleform::Render::TessBase * tess, const Scaleform::Render::StrokeVertex & v0, const Scaleform::Render::StrokeVertex & v1, const Scaleform::Render::StrokeVertex & v2, float dx1, float dy1, float dx2, float dy2, Scaleform::Render::StrokerTypes::LineJoinType lineJoin, float miterLimit, float epsilon, float dbevel); // 0x1403A0FB0
void Scaleform::Render::Stroker::calcCap(Scaleform::Render::TessBase * tess, const Scaleform::Render::StrokeVertex & v0, const Scaleform::Render::StrokeVertex & v1, float len, Scaleform::Render::StrokerTypes::LineCapType cap); // 0x1403A0900
void Scaleform::Render::Stroker::calcJoin(Scaleform::Render::TessBase * tess, const Scaleform::Render::StrokeVertex & v0, const Scaleform::Render::StrokeVertex & v1, const Scaleform::Render::StrokeVertex & v2, float len1, float len2); // 0x1403A0B90
Scaleform::Render::StrokeSorter::StrokeSorter(Scaleform::Render::LinearHeap * heap); // 0x14039E3F0
void Scaleform::Render::StrokeSorter::Clear(); // 0x14039ED10
void Scaleform::Render::StrokeSorter::AddVertexNV(float x, float y, unsigned long segType); // 0x14039E9A0
void Scaleform::Render::StrokeSorter::AddVertex(float x, float y); // 0x14039E8F0
void Scaleform::Render::StrokeSorter::AddQuad(float x2, float y2, float x3, float y3); // 0x14039E7E0
void Scaleform::Render::StrokeSorter::AddCubic(float x2, float y2, float x3, float y3, float x4, float y4); // 0x14039E550
void Scaleform::Render::StrokeSorter::FinalizePath(unsigned long closeFlag, unsigned long __formal, bool __formal, bool __formal); // 0x14039EEA0
void Scaleform::Render::StrokeSorter::appendPath(Scaleform::Render::StrokeSorter::PathType * dst, Scaleform::Render::StrokeSorter::PathType * src); // 0x1403A0600
unsigned long Scaleform::Render::StrokeSorter::findNext(const Scaleform::Render::StrokeSorter::PathType & outPath); // 0x1403A1400
void Scaleform::Render::StrokeSorter::Sort(); // 0x1403A0200
void Scaleform::Render::StrokeSorter::AddOffset(float offsetX, float offsetY); // 0x14039E5B0
void Scaleform::Render::StrokeSorter::Snap(float offsetX, float offsetY); // 0x14039FE50
void Scaleform::Render::StrokeSorter::Transform(const Scaleform::Render::TransformerBase * tr); // 0x1403A0590
void Scaleform::Render::StrokeSorter::GenerateDashes(const Scaleform::Render::DashArray * da, const Scaleform::Render::ToleranceParams & param, float scale); // 0x14039EF40
Scaleform::Render::DashGenerator::DashGenerator(const float * dashArray, unsigned long dashCount, float dashStart, Scaleform::Render::StrokeSorter::VertexType * ver, unsigned long verCount, bool closed); // 0x14039E210
unsigned long Scaleform::Render::DashGenerator::GetVertex(float * x, float * y); // 0x14039FC90void __fastcall Scaleform::Alg::QuickSortSliced<Scaleform::Render::ArrayUnsafe<Scaleform::Render::StrokeSorter::SortedPathType>,bool (*)(Scaleform::Render::StrokeSorter::SortedPathType const &,Scaleform::Render::StrokeSorter::SortedPathType const &)>(
        Scaleform::Render::ArrayUnsafe<Scaleform::Render::StrokeSorter::SortedPathType> *arr,
        unsigned __int64 start,
        unsigned __int64 end,
        bool (__fastcall *less)(const Scaleform::Render::StrokeSorter::SortedPathType *, const Scaleform::Render::StrokeSorter::SortedPathType *))
{
  signed __int64 v5; // r15
  unsigned __int64 v6; // r13
  unsigned __int64 *i; // r12
  signed __int64 v9; // rax
  Scaleform::Render::StrokeSorter::SortedPathType *Array; // rcx
  signed __int64 v11; // r15
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  signed __int64 v14; // r14
  Scaleform::Render::StrokeSorter::SortedPathType v15; // xmm1
  signed __int64 v16; // rsi
  Scaleform::Render::StrokeSorter::SortedPathType *v17; // rax
  Scaleform::Render::StrokeSorter::SortedPathType v18; // xmm1
  Scaleform::Render::StrokeSorter::SortedPathType *v19; // rax
  Scaleform::Render::StrokeSorter::SortedPathType v20; // xmm1
  Scaleform::Render::StrokeSorter::SortedPathType *v21; // rax
  Scaleform::Render::StrokeSorter::SortedPathType v22; // xmm1
  Scaleform::Render::StrokeSorter::SortedPathType *v23; // rax
  Scaleform::Render::StrokeSorter::SortedPathType v24; // xmm1
  Scaleform::Render::StrokeSorter::SortedPathType v25; // xmm1
  unsigned __int64 v26; // rdx
  unsigned __int64 *v27; // r12
  signed __int64 v28; // r14
  __int64 j; // rsi
  __int64 k; // rbx
  Scaleform::Render::StrokeSorter::SortedPathType *v31; // rax
  Scaleform::Render::StrokeSorter::SortedPathType v32; // xmm1
  unsigned __int64 v33; // [rsp+20h] [rbp-2E8h]
  unsigned __int64 *v34; // [rsp+28h] [rbp-2E0h]
  unsigned __int64 v35[80]; // [rsp+30h] [rbp-2D8h] BYREF

  v33 = end;
  v5 = end;
  v6 = start;
  if ( end - start >= 2 )
  {
    for ( i = v35; ; v6 = *i )
    {
      while ( 1 )
      {
        v34 = i;
        v9 = v5 - v6;
        if ( (__int64)(v5 - v6) <= 9 )
          break;
        Array = arr->Array;
        v11 = v6 + 1;
        v12 = v6 + v9 / 2;
        v13 = v6 + 1;
        v14 = v33 - 1;
        v15 = Array[v6];
        v16 = v33 - 1;
        Array[v6] = Array[v12];
        Array[v12] = v15;
        if ( less(&arr->Array[v16], &arr->Array[v13]) )
        {
          v17 = arr->Array;
          v18 = v17[v16];
          v17[v16] = v17[v13];
          v17[v13] = v18;
        }
        if ( less(&arr->Array[v6], &arr->Array[v13]) )
        {
          v19 = arr->Array;
          v20 = v19[v6];
          v19[v6] = v19[v13];
          v19[v13] = v20;
        }
        if ( less(&arr->Array[v16], &arr->Array[v6]) )
        {
          v21 = arr->Array;
          v22 = v21[v16];
          v21[v16] = v21[v6];
          v21[v6] = v22;
        }
        while ( 1 )
        {
          do
          {
            ++v13;
            ++v11;
          }
          while ( less(&arr->Array[v13], &arr->Array[v6]) );
          do
          {
            --v16;
            --v14;
          }
          while ( less(&arr->Array[v6], &arr->Array[v16]) );
          v23 = arr->Array;
          if ( v11 > v14 )
            break;
          v16 = v14;
          v13 = v11;
          v24 = v23[v11];
          v23[v11] = v23[v14];
          v23[v14] = v24;
        }
        v25 = v23[v6];
        v26 = v33;
        v23[v6] = v23[v14];
        v27 = v34;
        v23[v14] = v25;
        if ( (__int64)(v14 - v6) <= (__int64)(v26 - v11) )
        {
          *v27 = v11;
          v5 = v14;
          v27[1] = v26;
          i = v27 + 2;
          v33 = v14;
        }
        else
        {
          *v27 = v6;
          v6 = v11;
          v27[1] = v14;
          v5 = v26;
          i = v27 + 2;
        }
      }
      v28 = v6 + 1;
      for ( j = v6; v28 < v5; ++v28 )
      {
        for ( k = j;
              ((unsigned __int8 (__fastcall *)(Scaleform::Render::StrokeSorter::SortedPathType *))less)(&arr->Array[j + 1]);
              k = j )
        {
          v31 = arr->Array;
          v32 = v31[k + 1];
          v31[k + 1] = v31[k];
          v31[k] = v32;
          if ( j == v6 )
            break;
          --j;
        }
        j = v28;
      }
      if ( i <= v35 )
        break;
      v5 = *(i - 1);
      i -= 2;
      v33 = v5;
    }
  }
}

void __fastcall Scaleform::Render::DashGenerator::DashGenerator(
        Scaleform::Render::DashGenerator *this,
        const float *dashArray,
        unsigned int dashCount,
        float dashStart,
        Scaleform::Render::StrokeSorter::VertexType *ver,
        unsigned int verCount,
        bool closed)
{
  unsigned int v8; // ebx
  __int64 CurrDash; // rax
  float v10; // xmm0_4
  unsigned int v11; // eax
  unsigned int v12; // esi
  Scaleform::Render::StrokeSorter::VertexType *Vertices; // rbp
  unsigned int v14; // er15
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  __int64 v18; // rcx
  bool v19; // zf
  Scaleform::Render::StrokeSorter::VertexType *v20; // rsi
  float y; // xmm0_4
  float v22; // xmm0_4
  __int64 v23; // rbx

  v8 = 0;
  this->Vertices = ver;
  this->pDashArray = dashArray;
  this->DashCount = dashCount;
  *(_QWORD *)&this->CurrDash = 0i64;
  this->CurrDashStart = 0.0;
  this->Ver1 = 0i64;
  this->Ver2 = 0i64;
  this->Closed = closed;
  this->DashStart = dashStart;
  this->VerCount = verCount;
  *(_QWORD *)&this->Status = 0i64;
  if ( dashStart > 0.0 )
  {
    this->CurrDash = 0;
    this->CurrDashStart = 0.0;
    while ( 1 )
    {
      CurrDash = this->CurrDash;
      v10 = dashArray[CurrDash];
      if ( dashStart <= v10 )
        break;
      v11 = CurrDash + 1;
      this->CurrDashStart = 0.0;
      dashStart = dashStart - v10;
      if ( v11 >= dashCount )
        v11 = 0;
      this->CurrDash = v11;
      if ( dashStart <= 0.0 )
        goto LABEL_9;
    }
    this->CurrDashStart = dashStart;
  }
LABEL_9:
  if ( verCount > 1 )
  {
    v12 = 0;
    do
    {
      Vertices = this->Vertices;
      v14 = v12 + 1;
      v15 = Vertices[v12 + 1].y - Vertices[v12].y;
      v16 = Vertices[v12 + 1].x - Vertices[v12].x;
      v17 = sqrtf((float)(v15 * v15) + (float)(v16 * v16));
      if ( v17 > 1.0e-10 )
      {
        if ( v8 < v12 )
          Vertices[v8] = Vertices[v12];
        v18 = v8++;
        this->Vertices[v18].Dist = v17;
      }
      ++v12;
    }
    while ( v14 + 1 < this->VerCount );
  }
  this->Vertices[v8].Dist = 1.0e10;
  v19 = !this->Closed;
  this->VerCount = v8 + 1;
  if ( !v19 && v8 + 1 > 2 )
  {
    v20 = this->Vertices;
    y = v20[v8].y;
    v22 = sqrtf(
            (float)((float)(y - v20->y) * (float)(y - v20->y))
          + (float)((float)(v20[v8].x - v20->x) * (float)(v20[v8].x - v20->x)));
    if ( v22 <= 1.0e-10 )
    {
      this->VerCount = v8;
      v23 = v8 - 1;
      v20[v23].Dist = sqrtf(
                        (float)((float)(v20[v23].y - v20->y) * (float)(v20[v23].y - v20->y))
                      + (float)((float)(v20[v23].x - v20->x) * (float)(v20[v23].x - v20->x)));
    }
    else
    {
      v20[v8].Dist = v22;
    }
  }
}

void __fastcall Scaleform::Render::StrokeSorter::StrokeSorter(
        Scaleform::Render::StrokeSorter *this,
        Scaleform::Render::LinearHeap *heap)
{
  this->pHeap = heap;
  this->__vftable = (Scaleform::Render::StrokeSorter_vtbl *)&Scaleform::Render::StrokeSorter::`vftable';
  this->SrcVertices.Size = 0i64;
  this->SrcVertices.NumPages = 0i64;
  this->SrcVertices.MaxPages = 0i64;
  this->SrcVertices.Pages = 0i64;
  this->SrcVertices.pHeap = heap;
  this->SrcPaths.Size = 0i64;
  this->SrcPaths.NumPages = 0i64;
  this->SrcPaths.MaxPages = 0i64;
  this->SrcPaths.Pages = 0i64;
  this->SrcPaths.pHeap = heap;
  this->SortedPaths.Size = 0i64;
  this->SortedPaths.Array = 0i64;
  this->SortedPaths.pHeap = heap;
  this->OutVertices.Size = 0i64;
  this->OutVertices.NumPages = 0i64;
  this->OutVertices.MaxPages = 0i64;
  this->OutVertices.Pages = 0i64;
  this->OutVertices.pHeap = heap;
  this->OutPaths.Size = 0i64;
  this->OutPaths.NumPages = 0i64;
  this->OutPaths.MaxPages = 0i64;
  this->OutPaths.Pages = 0i64;
  this->OutPaths.pHeap = heap;
  this->LastVertex = 0;
}

void __fastcall Scaleform::Render::Stroker::Stroker(
        Scaleform::Render::Stroker *this,
        Scaleform::Render::LinearHeap *heap)
{
  this->pHeap = heap;
  this->__vftable = (Scaleform::Render::Stroker_vtbl *)&Scaleform::Render::Stroker::`vftable';
  this->Path.Path.Size = 0i64;
  this->Path.Path.NumPages = 0i64;
  this->Path.Path.MaxPages = 0i64;
  this->Path.Path.Pages = 0i64;
  this->Path.Path.pHeap = heap;
  this->Closed = 0;
  this->Width = 1.0;
  this->LineJoin = RoundJoin;
  this->StartLineCap = RoundCap;
  this->EndLineCap = RoundCap;
  this->MiterLimit = 3.0;
  this->CurveTolerance = 1.0;
  this->IntersectionEpsilon = 0.0099999998;
}

void __fastcall Scaleform::Render::StrokeSorter::AddCubic(
        Scaleform::Render::StrokeSorter *this,
        float x2,
        float y2,
        float x3,
        float y3,
        float x4,
        float y4)
{
  Scaleform::Render::StrokeSorter::AddVertexNV(this, x2, y2, 3u);
  Scaleform::Render::StrokeSorter::AddVertexNV(this, x3, y3, 3u);
  Scaleform::Render::StrokeSorter::AddVertexNV(this, x4, y4, 3u);
}

void __fastcall Scaleform::Render::StrokeSorter::AddOffset(
        Scaleform::Render::StrokeSorter *this,
        float offsetX,
        float offsetY)
{
  unsigned int v3; // edi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // er9
  Scaleform::Render::StrokeSorter::PathType *v9; // rcx
  unsigned int start; // ebx
  unsigned int v11; // er11
  unsigned int v12; // esi
  unsigned int v13; // eax
  __int64 v14; // rbp
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  Scaleform::Render::StrokeSorter::VertexType *v17; // rcx
  Scaleform::Render::StrokeSorter::VertexType *v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // r8
  Scaleform::Render::StrokeSorter::VertexType *v21; // rcx
  Scaleform::Render::StrokeSorter::VertexType *v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // r8
  Scaleform::Render::StrokeSorter::VertexType *v25; // rcx
  Scaleform::Render::StrokeSorter::VertexType *v26; // rcx
  char v27; // al
  unsigned __int64 v28; // rdx
  __int64 v29; // r8
  Scaleform::Render::StrokeSorter::VertexType *v30; // rcx
  Scaleform::Render::StrokeSorter::VertexType *v31; // rcx
  unsigned int v32; // eax
  char v33; // r8
  __int64 v34; // r8
  unsigned __int64 v35; // rdx
  Scaleform::Render::StrokeSorter::VertexType *v36; // rcx
  Scaleform::Render::StrokeSorter::VertexType *v37; // rcx

  v3 = 0;
  if ( this->OutPaths.Size )
  {
    v5 = 0i64;
    do
    {
      v6 = v5;
      v7 = v5 & 0xF;
      v8 = 0;
      v9 = this->OutPaths.Pages[v6 >> 4];
      start = v9[v7].start;
      v11 = v9[v7].numVer & 0xFFFFFFF;
      if ( v11 >= 4 )
      {
        v12 = start + 1;
        v13 = ((v11 - 4) >> 2) + 1;
        v14 = v13;
        v8 = 4 * v13;
        do
        {
          v15 = ((_BYTE)v12 - 1) & 0xF;
          v16 = (unsigned __int64)(v12 - 1) >> 4;
          v17 = this->OutVertices.Pages[v16];
          v17[v15].x = offsetX + v17[((_BYTE)v12 - 1) & 0xF].x;
          v18 = this->OutVertices.Pages[v16];
          v19 = (unsigned __int64)v12 >> 4;
          v18[v15].y = offsetY + v18[((_BYTE)v12 - 1) & 0xF].y;
          v20 = v12 & 0xF;
          v21 = this->OutVertices.Pages[v19];
          v21[v20].x = offsetX + v21[v12 & 0xF].x;
          v22 = this->OutVertices.Pages[v19];
          v23 = (unsigned __int64)(v12 + 1) >> 4;
          v22[v20].y = offsetY + v22[v12 & 0xF].y;
          v24 = ((_BYTE)v12 + 1) & 0xF;
          v25 = this->OutVertices.Pages[v23];
          v25[v24].x = offsetX + v25[((_BYTE)v12 + 1) & 0xF].x;
          v26 = this->OutVertices.Pages[v23];
          v27 = v12 + 2;
          v28 = v12 + 2;
          v12 += 4;
          v28 >>= 4;
          v26[v24].y = offsetY + v26[v24].y;
          v29 = v27 & 0xF;
          v30 = this->OutVertices.Pages[v28];
          v30[v29].x = offsetX + v30[v29].x;
          v31 = this->OutVertices.Pages[v28];
          v31[v29].y = offsetY + v31[v27 & 0xF].y;
          --v14;
        }
        while ( v14 );
      }
      for ( ; v8 < v11; v37[v34].y = offsetY + v37[v34].y )
      {
        v32 = v8 + start;
        v33 = v8++ + start;
        v34 = v33 & 0xF;
        v35 = (unsigned __int64)v32 >> 4;
        v36 = this->OutVertices.Pages[v35];
        v36[v34].x = offsetX + v36[v34].x;
        v37 = this->OutVertices.Pages[v35];
      }
      v5 = ++v3;
    }
    while ( v3 < this->OutPaths.Size );
  }
}

void __fastcall Scaleform::Render::StrokeSorter::AddQuad(
        Scaleform::Render::StrokeSorter *this,
        float x2,
        float y2,
        float x3,
        float y3)
{
  Scaleform::Render::StrokeSorter::AddVertexNV(this, x2, y2, 2u);
  Scaleform::Render::StrokeSorter::AddVertexNV(this, x3, y3, 2u);
}

void __fastcall Scaleform::Render::StrokePath::AddVertex(
        Scaleform::Render::StrokePath *this,
        const Scaleform::Render::StrokeVertex *v)
{
  unsigned __int64 Size; // r8
  unsigned __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rdi
  Scaleform::Render::StrokeVertex *v8; // rbx
  float v9; // xmm0_4
  float v10; // xmm0_4
  unsigned __int64 v11; // rbx
  Scaleform::Render::StrokeVertex *v12; // rdx
  __int64 v13; // r8

  Size = this->Path.Size;
  if ( !Size
    || (v5 = Size - 1,
        v6 = ((_DWORD)Size - 1) & 0xF,
        v7 = v6,
        v8 = this->Path.Pages[v5 >> 4],
        v9 = v->y - v8[v6].y,
        v10 = sqrtf((float)(v9 * v9) + (float)((float)(v->x - v8[v6].x) * (float)(v->x - v8[v6].x))),
        v8[v7].dist = v10,
        v10 > 0.0) )
  {
    v11 = this->Path.Size >> 4;
    if ( v11 >= this->Path.NumPages )
      Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(
        (Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> *)this,
        this->Path.Size >> 4);
    v12 = this->Path.Pages[v11];
    v13 = this->Path.Size & 0xF;
    *(_QWORD *)&v12[v13].x = *(_QWORD *)&v->x;
    v12[v13].dist = v->dist;
    ++this->Path.Size;
  }
}

void __fastcall Scaleform::Render::StrokeSorter::AddVertex(Scaleform::Render::StrokeSorter *this, float x, float y)
{
  Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeSorter::VertexType,4,16> *p_SrcVertices; // rbx
  unsigned __int64 v4; // rdi
  Scaleform::Render::StrokeSorter::VertexType v5; // [rsp+20h] [rbp-18h]

  p_SrcVertices = &this->SrcVertices;
  v4 = this->SrcVertices.Size >> 4;
  v5.x = x;
  *(_QWORD *)&v5.y = LODWORD(y);
  *(_WORD *)&v5.segType = 1;
  v5.snapY = 0;
  if ( v4 >= this->SrcVertices.NumPages )
    Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
      (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->SrcVertices,
      v4);
  p_SrcVertices->Pages[v4][p_SrcVertices->Size & 0xF] = v5;
  ++p_SrcVertices->Size;
}

void __fastcall Scaleform::Render::Stroker::AddVertex(Scaleform::Render::Stroker *this, float x, float y)
{
  Scaleform::Render::StrokeVertex v; // [rsp+20h] [rbp-18h] BYREF

  v.x = x;
  v.dist = 0.0;
  v.y = y;
  Scaleform::Render::StrokePath::AddVertex(&this->Path, &v);
}

void __fastcall Scaleform::Render::StrokeSorter::AddVertexNV(
        Scaleform::Render::StrokeSorter *this,
        float x,
        float y,
        unsigned int segType)
{
  unsigned __int64 Size; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdi
  Scaleform::Render::StrokeSorter::VertexType v8; // [rsp+20h] [rbp-18h]

  Size = this->SrcVertices.Size;
  if ( Size == this->LastVertex
    && Size
    && this->SrcVertices.Pages[(Size - 1) >> 4][((_DWORD)Size - 1) & 0xF].x == x
    && this->SrcVertices.Pages[(this->SrcVertices.Size - 1) >> 4][(LODWORD(this->SrcVertices.Size) - 1) & 0xF].y == y )
  {
    this->LastVertex = this->SrcPaths.Pages[(this->SrcPaths.Size - 1) >> 4][(LODWORD(this->SrcPaths.Size) - 1) & 0xF].start;
    v6 = this->SrcPaths.Size;
    if ( v6 )
      this->SrcPaths.Size = v6 - 1;
  }
  else
  {
    v7 = this->SrcVertices.Size >> 4;
    v8.x = x;
    *(_QWORD *)&v8.y = LODWORD(y);
    v8.segType = segType;
    *(_WORD *)&v8.snapX = 0;
    if ( v7 >= this->SrcVertices.NumPages )
      Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
        (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->SrcVertices,
        v7);
    this->SrcVertices.Pages[v7][this->SrcVertices.Size & 0xF] = v8;
    ++this->SrcVertices.Size;
  }
}

void __fastcall Scaleform::Render::Stroker::CalcEquidistant(
        Scaleform::Render::Stroker *this,
        Scaleform::Render::TessBase *tess,
        Scaleform::Render::StrokerTypes::EquidistantDir dir)
{
  unsigned __int64 Size; // rbp
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r8
  Scaleform::Render::StrokeVertex *v13; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r11
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rax
  Scaleform::Render::StrokeVertex **Pages; // rdx

  Size = this->Path.Path.Size;
  if ( Size <= 2 )
  {
    this->Path.Path.Size = 0i64;
  }
  else
  {
    if ( dir )
    {
      v14 = Size - 1;
      do
      {
        v15 = v14;
        if ( !v14 )
          v15 = this->Path.Path.Size;
        v16 = v15 - 1;
        v17 = v14;
        if ( !v14 )
          v17 = this->Path.Path.Size;
        v18 = v17 - 1;
        v19 = Size;
        v20 = this->Path.Path.Size;
        if ( Size >= v20 )
          v19 = Size - v20;
        Pages = this->Path.Path.Pages;
        Scaleform::Render::Stroker::calcJoin(
          this,
          tess,
          &Pages[v19 >> 4][v19 & 0xF],
          &Pages[v14 >> 4][v14 & 0xF],
          &Pages[v18 >> 4][v18 & 0xF],
          Pages[v14 >> 4][v14 & 0xF].dist,
          Pages[v16 >> 4][v16 & 0xF].dist);
        --v14;
        --Size;
      }
      while ( Size );
    }
    else
    {
      v6 = 0i64;
      do
      {
        v7 = v6;
        if ( !v6 )
          v7 = this->Path.Path.Size;
        v8 = v6 + 1;
        v9 = v7 - 1;
        v10 = v6 + 1;
        v11 = this->Path.Path.Size;
        if ( v6 + 1 >= v11 )
          v10 -= v11;
        v12 = v6;
        if ( !v6 )
          v12 = this->Path.Path.Size;
        v13 = this->Path.Path.Pages[v6 >> 4];
        Scaleform::Render::Stroker::calcJoin(
          this,
          tess,
          &this->Path.Path.Pages[(v12 - 1) >> 4][((_DWORD)v12 - 1) & 0xF],
          &v13[v6 & 0xF],
          &this->Path.Path.Pages[v10 >> 4][v10 & 0xF],
          this->Path.Path.Pages[v9 >> 4][v9 & 0xF].dist,
          v13[v6 & 0xF].dist);
        v6 = v8;
      }
      while ( v8 < this->Path.Path.Size );
    }
    tess->ClosePath(tess);
    ((void (__fastcall *)(Scaleform::Render::TessBase *, _QWORD, __int64))tess->FinalizePath)(tess, 0i64, 1i64);
    this->Path.Path.Size = 0i64;
  }
}

void __fastcall Scaleform::Render::StrokePath::Clear(Scaleform::Render::StrokePath *this)
{
  this->Path.Size = 0i64;
}

void __fastcall Scaleform::Render::StrokeSorter::Clear(Scaleform::Render::StrokeSorter *this)
{
  this->SrcVertices.MaxPages = 0i64;
  this->SrcVertices.NumPages = 0i64;
  this->SrcVertices.Size = 0i64;
  this->SrcVertices.Pages = 0i64;
  this->SrcPaths.MaxPages = 0i64;
  this->SrcPaths.NumPages = 0i64;
  this->SrcPaths.Size = 0i64;
  this->SrcPaths.Pages = 0i64;
  this->SortedPaths.Size = 0i64;
  this->SortedPaths.Array = 0i64;
  this->OutVertices.MaxPages = 0i64;
  this->OutVertices.NumPages = 0i64;
  this->OutVertices.Size = 0i64;
  this->OutVertices.Pages = 0i64;
  this->OutPaths.MaxPages = 0i64;
  this->OutPaths.NumPages = 0i64;
  this->OutPaths.Size = 0i64;
  this->OutPaths.Pages = 0i64;
  this->LastVertex = 0;
  Scaleform::Render::LinearHeap::ClearAndRelease(this->pHeap);
}

void __fastcall Scaleform::Render::Stroker::Clear(Scaleform::Render::Stroker *this)
{
  this->Path.Path.MaxPages = 0i64;
  this->Path.Path.NumPages = 0i64;
  this->Path.Path.Size = 0i64;
  this->Path.Path.Pages = 0i64;
  this->Closed = 0;
  Scaleform::Render::LinearHeap::ClearAndRelease(this->pHeap);
}

void __fastcall Scaleform::Render::StrokePath::ClearAndRelease(Scaleform::Render::StrokePath *this)
{
  this->Path.MaxPages = 0i64;
  this->Path.NumPages = 0i64;
  this->Path.Size = 0i64;
  this->Path.Pages = 0i64;
}

bool __fastcall Scaleform::Render::StrokePath::ClosePath(Scaleform::Render::StrokePath *this)
{
  unsigned __int64 Size; // rax
  Scaleform::Render::StrokeVertex **Pages; // r8
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  Scaleform::Render::StrokeVertex *v6; // rbx
  __int64 v7; // rdi
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  unsigned __int64 v11; // rax

  Size = this->Path.Size;
  if ( Size <= 1 )
    return 0;
  Pages = this->Path.Pages;
  v4 = Size - 1;
  v5 = v4 >> 4;
  LODWORD(v4) = v4 & 0xF;
  v6 = Pages[v5];
  v7 = (unsigned int)v4;
  v8 = (*Pages)->y - v6[(unsigned int)v4].y;
  v9 = (*Pages)->x - v6[(unsigned int)v4].x;
  v10 = sqrtf((float)(v8 * v8) + (float)(v9 * v9));
  v6[v7].dist = v10;
  if ( v10 > 0.0 )
    return 0;
  v11 = this->Path.Size;
  if ( v11 )
    this->Path.Size = v11 - 1;
  return this->Path.Size > 2;
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall Scaleform::Render::Stroker::ClosePath(Scaleform::Render::Stroker *this)
{
  Scaleform::Render::StrokePath::ClosePath(&this->Path);
  this->Closed = 1;
}

void __fastcall Scaleform::Render::StrokeSorter::FinalizePath(
        Scaleform::Render::StrokeSorter *this,
        unsigned int closeFlag,
        unsigned int __formal,
        bool a4)
{
  unsigned __int64 LastVertex; // rcx
  unsigned __int64 v6; // rsi
  Scaleform::Render::StrokeSorter::PathType v7; // [rsp+30h] [rbp+8h]

  LastVertex = this->LastVertex;
  if ( this->SrcVertices.Size <= (unsigned int)(LastVertex + 1) )
  {
    if ( LastVertex < this->SrcVertices.Size )
      this->SrcVertices.Size = LastVertex;
  }
  else
  {
    v7.start = LastVertex;
    v7.numVer = LODWORD(this->SrcVertices.Size) - LastVertex;
    if ( closeFlag )
      v7.numVer = (LODWORD(this->SrcVertices.Size) - LastVertex) | 0x20000000;
    v6 = this->SrcPaths.Size >> 4;
    if ( v6 >= this->SrcPaths.NumPages )
      Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16>::allocPage(
        (Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16> *)&this->SrcPaths,
        this->SrcPaths.Size >> 4);
    this->SrcPaths.Pages[v6][this->SrcPaths.Size & 0xF] = v7;
    ++this->SrcPaths.Size;
    this->LastVertex = this->SrcVertices.Size;
  }
}

void __fastcall Scaleform::Render::StrokeSorter::GenerateDashes(
        Scaleform::Render::StrokeSorter *this,
        const Scaleform::Render::DashArray *da,
        const Scaleform::Render::ToleranceParams *param,
        float scale)
{
  const Scaleform::Render::DashArray *v4; // rbx
  __int128 v6; // xmm0
  __m128 v7; // xmm2
  float v8; // eax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  unsigned int v11; // ebx
  __int64 v12; // r13
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rsi
  unsigned int v15; // er15
  Scaleform::Render::StrokeSorter::PathType **Pages; // r10
  Scaleform::Render::StrokeSorter::VertexType **v17; // r14
  __int64 v18; // r9
  unsigned int v19; // ecx
  Scaleform::Render::StrokeSorter::PathType *v20; // r8
  unsigned int v21; // edx
  __int64 v22; // r11
  __int64 v23; // r9
  unsigned int v24; // ecx
  Scaleform::Render::StrokeSorter::PathType *v25; // r8
  unsigned int v26; // edx
  unsigned int v27; // edx
  unsigned int v28; // ecx
  unsigned int v29; // ebx
  __int64 v30; // r10
  unsigned __int64 v31; // rax
  unsigned int v32; // ecx
  float *v33; // r10
  float *v34; // rdx
  __int64 v35; // r9
  unsigned int v36; // ecx
  Scaleform::Render::StrokeSorter::PathType *v37; // r8
  unsigned int v38; // edx
  float *p_x; // rdx
  unsigned int v40; // er14
  unsigned int v41; // er11
  unsigned int DashCount; // er9
  int v43; // er8
  float *v44; // rdx
  unsigned int v45; // eax
  __int64 v46; // r10
  float v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // r8
  float *v51; // rdx
  float v52; // eax
  __int64 v53; // rcx
  unsigned int v54; // er11
  __int64 v55; // r8
  unsigned int v56; // eax
  float *v57; // rdx
  __int64 v58; // r10
  float v59; // eax
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // r8
  float *v63; // rdx
  float v64; // eax
  __int64 v65; // rcx
  unsigned int v66; // er15
  unsigned int v67; // er12
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rcx
  __int64 v70; // rdx
  Scaleform::Render::StrokeSorter::PathType *v71; // rcx
  unsigned int Vertex; // eax
  unsigned __int64 v73; // rsi
  unsigned __int64 MaxPages; // rdx
  Scaleform::Render::LinearHeap *pHeap; // rcx
  void *v76; // rbx
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rsi
  unsigned __int64 v79; // rdx
  Scaleform::Render::LinearHeap *v80; // rcx
  void *v81; // rbx
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // rcx
  Scaleform::Render::StrokeSorter::PathType *v84; // rax
  BOOL x3; // [rsp+20h] [rbp-E0h]
  float y; // [rsp+40h] [rbp-C0h] BYREF
  float x; // [rsp+44h] [rbp-BCh] BYREF
  Scaleform::Render::StrokeSorter::VertexType v88; // [rsp+48h] [rbp-B8h]
  Scaleform::Render::StrokeSorter::PathType v89; // [rsp+58h] [rbp-A8h]
  const Scaleform::Render::DashArray *v90; // [rsp+60h] [rbp-A0h]
  Scaleform::Render::ToleranceParams parama; // [rsp+70h] [rbp-90h] BYREF
  Scaleform::Render::DashGenerator v92; // [rsp+C0h] [rbp-40h] BYREF
  float dashArray[32]; // [rsp+110h] [rbp+10h] BYREF

  this->SrcVertices.MaxPages = 0i64;
  v4 = da;
  this->SrcVertices.NumPages = 0i64;
  this->SrcVertices.Size = 0i64;
  this->SrcVertices.Pages = 0i64;
  this->SrcPaths.MaxPages = 0i64;
  this->SrcPaths.NumPages = 0i64;
  this->SrcPaths.Size = 0i64;
  this->SrcPaths.Pages = 0i64;
  this->LastVertex = 0;
  v6 = *(_OWORD *)&param->FillLowerScale;
  v7 = *(__m128 *)&param->Epsilon;
  parama.CurveRecursionLimit = param->CurveRecursionLimit;
  v8 = 0.0;
  v9 = *(_OWORD *)&param->StrokeLowerScale;
  v90 = da;
  *(__m128 *)&parama.Epsilon = v7;
  *(_OWORD *)&parama.FillLowerScale = v6;
  v10 = *(_OWORD *)&param->Scale9LowerScale;
  y = 0.0;
  *(_OWORD *)&parama.Scale9LowerScale = v10;
  *(_OWORD *)&parama.StrokeLowerScale = v9;
  *(_QWORD *)&v9 = *(_QWORD *)&param->MinDet3D;
  parama.CollinearityTolerance = _mm_shuffle_ps(v7, v7, 170).m128_f32[0] * (float)(1.0 / scale);
  parama.CurveTolerance = v7.m128_f32[1] * (float)(1.0 / scale);
  *(_QWORD *)&parama.MinDet3D = v9;
  if ( LODWORD(this->OutPaths.Size) )
  {
    do
    {
      v11 = 0;
      v12 = LOBYTE(v8) & 0xF;
      v13 = (unsigned __int64)LODWORD(v8) >> 4;
      v14 = LODWORD(v8);
      v15 = this->OutPaths.Pages[v13][v12].numVer & 0xFFFFFFF;
      if ( v15 )
      {
        do
        {
          Pages = this->OutPaths.Pages;
          v17 = this->OutVertices.Pages;
          v18 = v14 & 0xF;
          v19 = v11;
          v20 = Pages[v14 >> 4];
          v21 = v20[v18].numVer & 0xFFFFFFF;
          if ( v11 >= v21 )
            v19 = v11 - v21;
          ++v11;
          v22 = (__int64)&v17[(unsigned __int64)(v20[v18].start + v19) >> 4][(LOBYTE(v20[v18].start) + (_BYTE)v19) & 0xF];
          switch ( *(_BYTE *)(v22 + 12) )
          {
            case 1:
              ((void (__fastcall *)(Scaleform::Render::StrokeSorter *))this->AddVertex)(this);
              break;
            case 2:
              v35 = v14 & 0xF;
              v36 = v11;
              v37 = Pages[v14 >> 4];
              v38 = v37[v35].numVer & 0xFFFFFFF;
              if ( v11 >= v38 )
                v36 = v11 - v38;
              ++v11;
              p_x = &v17[(unsigned __int64)(v37[v35].start + v36) >> 4][(LOBYTE(v37[v35].start) + (_BYTE)v36) & 0xF].x;
              Scaleform::Render::TessellateQuadCurve(this, &parama, *(float *)v22, *(float *)(v22 + 4), *p_x, p_x[1]);
              break;
            case 3:
              v23 = v14 & 0xF;
              v24 = v11;
              v25 = Pages[v14 >> 4];
              v26 = v25[v23].numVer & 0xFFFFFFF;
              if ( v11 >= v26 )
                v24 = v11 - v26;
              v27 = v25[v23].numVer & 0xFFFFFFF;
              v28 = v25[v23].start + v24;
              v29 = v11 + 1;
              v30 = v28 & 0xF;
              v31 = (unsigned __int64)v28 >> 4;
              v32 = v29;
              v33 = &v17[v31][v30].x;
              if ( v29 >= v27 )
                v32 = v29 - v27;
              v11 = v29 + 1;
              v34 = &v17[(unsigned __int64)(v25[v23].start + v32) >> 4][(LOBYTE(v25[v23].start) + (_BYTE)v32) & 0xF].x;
              Scaleform::Render::TessellateCubicCurve(
                this,
                &parama,
                *(float *)v22,
                *(float *)(v22 + 4),
                *v33,
                v33[1],
                *v34,
                v34[1]);
              break;
          }
        }
        while ( v11 < v15 );
      }
      LOBYTE(x3) = 0;
      this->FinalizePath(this, (this->OutPaths.Pages[v13][v12].numVer >> 29) & 1, 0, 0, x3);
      LODWORD(v8) = LODWORD(y) + 1;
      y = v8;
    }
    while ( LODWORD(v8) < LODWORD(this->OutPaths.Size) );
    v4 = v90;
  }
  this->OutVertices.MaxPages = 0i64;
  v40 = 0;
  this->OutVertices.NumPages = 0i64;
  v41 = 0;
  this->OutVertices.Size = 0i64;
  this->OutVertices.Pages = 0i64;
  this->OutPaths.MaxPages = 0i64;
  this->OutPaths.NumPages = 0i64;
  this->OutPaths.Size = 0i64;
  this->OutPaths.Pages = 0i64;
  DashCount = v4->DashCount;
  if ( DashCount >= 4 )
  {
    v43 = 2;
    v44 = &v4->Dashes[1];
    v45 = ((DashCount - 4) >> 2) + 1;
    v46 = v45;
    v41 = 4 * v45;
    do
    {
      v47 = *(v44 - 1);
      v44 += 4;
      v48 = v40;
      v40 += 4;
      dashArray[v48] = v47;
      dashArray[v43 - 1] = *(v44 - 4);
      dashArray[v43] = *(v44 - 3);
      v49 = (unsigned int)(v43 + 1);
      v43 += 4;
      dashArray[v49] = *(v44 - 2);
      --v46;
    }
    while ( v46 );
  }
  if ( v41 < DashCount )
  {
    v50 = DashCount - v41;
    v51 = &v4->Dashes[v41];
    do
    {
      v52 = *v51++;
      v53 = v40++;
      dashArray[v53] = v52;
      --v50;
    }
    while ( v50 );
  }
  if ( (v40 & 1) != 0 )
  {
    v54 = 0;
    if ( DashCount >= 4 )
    {
      v55 = v40 + 2;
      v56 = ((DashCount - 4) >> 2) + 1;
      v57 = &v4->Dashes[1];
      v58 = v56;
      v54 = 4 * v56;
      do
      {
        v59 = *(v57 - 1);
        v57 += 4;
        v60 = v40;
        v40 += 4;
        dashArray[v60] = v59;
        dashArray[(unsigned int)(v55 - 1)] = *(v57 - 4);
        v61 = (unsigned int)(v55 + 1);
        dashArray[v55] = *(v57 - 3);
        v55 = (unsigned int)(v55 + 4);
        dashArray[v61] = *(v57 - 2);
        --v58;
      }
      while ( v58 );
    }
    if ( v54 < DashCount )
    {
      v62 = DashCount - v54;
      v63 = &v4->Dashes[v54];
      do
      {
        v64 = *v63++;
        v65 = v40++;
        dashArray[v65] = v64;
        --v62;
      }
      while ( v62 );
    }
  }
  v66 = 0;
  v67 = 0;
  if ( this->SrcPaths.Size )
  {
    v68 = 0i64;
    do
    {
      v69 = v68;
      v70 = v68 & 0xF;
      v71 = this->SrcPaths.Pages[v69 >> 4];
      Scaleform::Render::DashGenerator::DashGenerator(
        &v92,
        dashArray,
        v40,
        v4->DashStart,
        &this->SrcVertices.Pages[(unsigned __int64)v71[v70].start >> 4][v71[v70].start & 0xF],
        v71[v70].numVer & 0xFFFFFFF,
        (v71[v70].numVer & 0x20000000) != 0);
      Vertex = Scaleform::Render::DashGenerator::GetVertex(&v92, &x, &y);
      if ( Vertex != 4 )
      {
        do
        {
          if ( !Vertex )
          {
            v73 = this->OutPaths.Size >> 4;
            v89 = (Scaleform::Render::StrokeSorter::PathType)v66;
            if ( v73 >= this->OutPaths.NumPages )
            {
              MaxPages = this->OutPaths.MaxPages;
              if ( v73 >= MaxPages )
              {
                pHeap = this->OutPaths.pHeap;
                if ( this->OutPaths.Pages )
                {
                  v76 = Scaleform::Render::LinearHeap::Alloc(pHeap, 16 * MaxPages);
                  memmove(v76, this->OutPaths.Pages, 8 * this->OutPaths.NumPages);
                  v77 = this->OutPaths.MaxPages;
                  this->OutPaths.Pages = (Scaleform::Render::StrokeSorter::PathType **)v76;
                  this->OutPaths.MaxPages = 2 * v77;
                }
                else
                {
                  this->OutPaths.MaxPages = 16i64;
                  this->OutPaths.Pages = (Scaleform::Render::StrokeSorter::PathType **)Scaleform::Render::LinearHeap::Alloc(
                                                                                         pHeap,
                                                                                         0x80ui64);
                }
              }
              this->OutPaths.Pages[v73] = (Scaleform::Render::StrokeSorter::PathType *)Scaleform::Render::LinearHeap::Alloc(
                                                                                         this->OutPaths.pHeap,
                                                                                         0x80ui64);
              ++this->OutPaths.NumPages;
            }
            this->OutPaths.Pages[v73][this->OutPaths.Size & 0xF] = v89;
            ++this->OutPaths.Size;
          }
          v78 = this->OutVertices.Size >> 4;
          v88.x = x;
          *(_QWORD *)&v88.y = LODWORD(y);
          *(_WORD *)&v88.segType = 1;
          v88.snapY = 0;
          if ( v78 >= this->OutVertices.NumPages )
          {
            v79 = this->OutVertices.MaxPages;
            if ( v78 >= v79 )
            {
              v80 = this->OutVertices.pHeap;
              if ( this->OutVertices.Pages )
              {
                v81 = Scaleform::Render::LinearHeap::Alloc(v80, 16 * v79);
                memmove(v81, this->OutVertices.Pages, 8 * this->OutVertices.NumPages);
                v82 = this->OutVertices.MaxPages;
                this->OutVertices.Pages = (Scaleform::Render::StrokeSorter::VertexType **)v81;
                this->OutVertices.MaxPages = 2 * v82;
              }
              else
              {
                this->OutVertices.MaxPages = 16i64;
                this->OutVertices.Pages = (Scaleform::Render::StrokeSorter::VertexType **)Scaleform::Render::LinearHeap::Alloc(
                                                                                            v80,
                                                                                            0x80ui64);
              }
            }
            this->OutVertices.Pages[v78] = (Scaleform::Render::StrokeSorter::VertexType *)Scaleform::Render::LinearHeap::Alloc(
                                                                                            this->OutVertices.pHeap,
                                                                                            0x100ui64);
            ++this->OutVertices.NumPages;
          }
          ++v66;
          this->OutVertices.Pages[v78][this->OutVertices.Size & 0xF] = v88;
          ++this->OutVertices.Size;
          v83 = this->OutPaths.Size - 1;
          v84 = this->OutPaths.Pages[v83 >> 4];
          ++v84[v83 & 0xF].numVer;
          Vertex = Scaleform::Render::DashGenerator::GetVertex(&v92, &x, &y);
        }
        while ( Vertex != 4 );
        v4 = v90;
      }
      v68 = ++v67;
    }
    while ( v67 < this->SrcPaths.Size );
  }
}

void __fastcall Scaleform::Render::Stroker::GenerateStroke(
        Scaleform::Render::Stroker *this,
        Scaleform::Render::TessBase *tess)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 Size; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  Scaleform::Render::StrokeVertex *v11; // rax
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rax
  Scaleform::Render::StrokeVertex **Pages; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r11
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r8
  Scaleform::Render::StrokeVertex *v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r11
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // r14
  Scaleform::Render::StrokeVertex **v37; // rdx

  if ( !this->Closed )
    this->Closed = Scaleform::Render::StrokePath::ClosePath(&this->Path);
  if ( this->Path.Path.Size <= 1 )
  {
    this->Path.Path.Size = 0i64;
    this->Closed = 0;
  }
  else
  {
    if ( this->Closed )
    {
      v4 = 0i64;
      do
      {
        Size = v4;
        if ( !v4 )
          Size = this->Path.Path.Size;
        v6 = v4 + 1;
        v7 = Size - 1;
        v8 = v4 + 1;
        v9 = this->Path.Path.Size;
        if ( v4 + 1 >= v9 )
          v8 -= v9;
        v10 = v4;
        if ( !v4 )
          v10 = this->Path.Path.Size;
        v11 = this->Path.Path.Pages[v4 >> 4];
        Scaleform::Render::Stroker::calcJoin(
          this,
          tess,
          &this->Path.Path.Pages[(v10 - 1) >> 4][((_DWORD)v10 - 1) & 0xF],
          &v11[v4 & 0xF],
          &this->Path.Path.Pages[v8 >> 4][v8 & 0xF],
          this->Path.Path.Pages[v7 >> 4][v7 & 0xF].dist,
          v11[v4 & 0xF].dist);
        v4 = v6;
      }
      while ( v6 < this->Path.Path.Size );
      tess->ClosePath(tess);
      ((void (__fastcall *)(Scaleform::Render::TessBase *, _QWORD, __int64))tess->FinalizePath)(tess, 0i64, 1i64);
      v12 = this->Path.Path.Size;
      if ( v12 )
      {
        v13 = v12 - 1;
        do
        {
          v14 = v13;
          if ( !v13 )
            v14 = this->Path.Path.Size;
          v15 = v14 - 1;
          v16 = v13;
          if ( !v13 )
            v16 = this->Path.Path.Size;
          v17 = v16 - 1;
          v18 = v12;
          v19 = this->Path.Path.Size;
          if ( v12 >= v19 )
            v18 = v12 - v19;
          Pages = this->Path.Path.Pages;
          Scaleform::Render::Stroker::calcJoin(
            this,
            tess,
            &Pages[v18 >> 4][v18 & 0xF],
            &Pages[v13 >> 4][v13 & 0xF],
            &Pages[v17 >> 4][v17 & 0xF],
            Pages[v13 >> 4][v13 & 0xF].dist,
            Pages[v15 >> 4][v15 & 0xF].dist);
          --v13;
          --v12;
        }
        while ( v12 );
      }
    }
    else
    {
      Scaleform::Render::Stroker::calcCap(
        this,
        tess,
        *(const Scaleform::Render::StrokeVertex **)this->Path.Path.Pages,
        (const Scaleform::Render::StrokeVertex *)*this->Path.Path.Pages + 1,
        (*this->Path.Path.Pages)->dist,
        this->StartLineCap);
      v21 = 1i64;
      if ( this->Path.Path.Size > 2 )
      {
        v22 = 2i64;
        do
        {
          v23 = v21;
          if ( !v21 )
            v23 = this->Path.Path.Size;
          v24 = v23 - 1;
          v25 = v22;
          v26 = this->Path.Path.Size;
          if ( v22 >= v26 )
            v25 = v22 - v26;
          v27 = v21;
          if ( !v21 )
            v27 = this->Path.Path.Size;
          v28 = this->Path.Path.Pages[v21 >> 4];
          Scaleform::Render::Stroker::calcJoin(
            this,
            tess,
            &this->Path.Path.Pages[(v27 - 1) >> 4][((_DWORD)v27 - 1) & 0xF],
            &v28[v21 & 0xF],
            &this->Path.Path.Pages[v25 >> 4][v25 & 0xF],
            this->Path.Path.Pages[v24 >> 4][v24 & 0xF].dist,
            v28[v21 & 0xF].dist);
          v21 = v22++;
        }
        while ( v22 < this->Path.Path.Size );
      }
      v29 = this->Path.Path.Size;
      Scaleform::Render::Stroker::calcCap(
        this,
        tess,
        &this->Path.Path.Pages[(v29 - 1) >> 4][((_BYTE)v29 - 1) & 0xF],
        &this->Path.Path.Pages[(v29 - 2) >> 4][((_DWORD)v29 - 2) & 0xF],
        this->Path.Path.Pages[(v29 - 2) >> 4][((_BYTE)v29 - 2) & 0xF].dist,
        this->EndLineCap);
      v30 = this->Path.Path.Size - 2;
      if ( this->Path.Path.Size != 2 )
      {
        do
        {
          v31 = v30;
          if ( !v30 )
            v31 = this->Path.Path.Size;
          v32 = v31 - 1;
          v33 = v30;
          if ( !v30 )
            v33 = this->Path.Path.Size;
          v34 = v33 - 1;
          v35 = this->Path.Path.Size;
          v36 = v30 + 1;
          if ( v30 + 1 >= v35 )
            v36 -= v35;
          v37 = this->Path.Path.Pages;
          Scaleform::Render::Stroker::calcJoin(
            this,
            tess,
            &v37[v36 >> 4][v36 & 0xF],
            &v37[v30 >> 4][v30 & 0xF],
            &v37[v34 >> 4][v34 & 0xF],
            v37[v30 >> 4][v30 & 0xF].dist,
            v37[v32 >> 4][v32 & 0xF].dist);
          --v30;
        }
        while ( v30 );
      }
    }
    tess->ClosePath(tess);
    ((void (__fastcall *)(Scaleform::Render::TessBase *, _QWORD, __int64))tess->FinalizePath)(tess, 0i64, 1i64);
    this->Path.Path.Size = 0i64;
    this->Closed = 0;
  }
}

float __fastcall Scaleform::Render::StrokeSorter::GetLastX(Scaleform::Render::StrokeSorter *this)
{
  return this->SrcVertices.Pages[(this->SrcVertices.Size - 1) >> 4][(LODWORD(this->SrcVertices.Size) - 1) & 0xF].x;
}

float __fastcall Scaleform::Render::Stroker::GetLastX(Scaleform::Render::Stroker *this)
{
  return this->Path.Path.Pages[(this->Path.Path.Size - 1) >> 4][(LODWORD(this->Path.Path.Size) - 1) & 0xF].x;
}

float __fastcall Scaleform::Render::StrokeSorter::GetLastY(Scaleform::Render::StrokeSorter *this)
{
  return this->SrcVertices.Pages[(this->SrcVertices.Size - 1) >> 4][(LODWORD(this->SrcVertices.Size) - 1) & 0xF].y;
}

float __fastcall Scaleform::Render::Stroker::GetLastY(Scaleform::Render::Stroker *this)
{
  return this->Path.Path.Pages[(this->Path.Path.Size - 1) >> 4][(LODWORD(this->Path.Path.Size) - 1) & 0xF].y;
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

__int64 __fastcall Scaleform::Render::DashGenerator::GetVertex(
        Scaleform::Render::DashGenerator *this,
        float *x,
        float *y)
{
  Scaleform::Render::DashGenerator::DashStatus Status; // er10
  __int64 result; // rax
  __int64 CurrDash; // rcx
  float CurrDashStart; // xmm1_4
  float CurrRest; // xmm2_4
  BOOL v10; // edx
  float v11; // xmm0_4
  float v12; // xmm2_4
  unsigned int v13; // eax
  const Scaleform::Render::StrokeSorter::VertexType *Ver1; // rcx
  const Scaleform::Render::StrokeSorter::VertexType *Ver2; // rax
  const Scaleform::Render::StrokeSorter::VertexType *v16; // rax
  bool v17; // zf
  const Scaleform::Render::StrokeSorter::VertexType *v18; // rax
  __int64 SrcVertex; // rcx
  unsigned int VerCount; // eax
  Scaleform::Render::StrokeSorter::VertexType *Vertices; // rcx

  Status = this->Status;
  while ( Status )
  {
    if ( Status == Status_Polyline )
    {
      CurrDash = this->CurrDash;
      CurrDashStart = this->CurrDashStart;
      CurrRest = this->CurrRest;
      v10 = (this->CurrDash & 1) == 0;
      v11 = (float)this->pDashArray[CurrDash] - CurrDashStart;
      if ( CurrRest > v11 )
      {
        v12 = CurrRest - v11;
        this->CurrDashStart = 0.0;
        v13 = CurrDash + 1;
        Ver1 = this->Ver1;
        if ( v13 >= this->DashCount )
          v13 = 0;
        this->CurrDash = v13;
        Ver2 = this->Ver2;
        this->CurrRest = v12;
        *x = Ver2->x - (float)((float)((float)(Ver2->x - Ver1->x) * v12) / Ver1->Dist);
        result = v10;
        *y = this->Ver2->y
           - (float)((float)((float)(this->Ver2->y - this->Ver1->y) * this->CurrRest) / this->Ver1->Dist);
        return result;
      }
      v16 = this->Ver2;
      this->CurrDashStart = CurrRest + CurrDashStart;
      *x = v16->x;
      *y = this->Ver2->y;
      ++this->SrcVertex;
      v17 = !this->Closed;
      v18 = this->Ver2;
      SrcVertex = this->SrcVertex;
      this->Ver1 = v18;
      this->CurrRest = v18->Dist;
      if ( v17 )
      {
        if ( (unsigned int)SrcVertex < this->VerCount )
        {
          result = v10;
          this->Ver2 = &this->Vertices[SrcVertex];
          return result;
        }
      }
      else
      {
        VerCount = this->VerCount;
        if ( (unsigned int)SrcVertex <= VerCount )
        {
          if ( (unsigned int)SrcVertex >= VerCount )
            LODWORD(SrcVertex) = 0;
          this->Ver2 = &this->Vertices[(unsigned int)SrcVertex];
          return v10;
        }
      }
      this->Status = Status_Stop;
      return v10;
    }
    if ( Status == Status_Stop )
      return 4i64;
  }
  if ( this->DashCount < 2 || this->VerCount < 2 )
    return 4i64;
  Vertices = this->Vertices;
  this->Ver1 = Vertices;
  this->Status = Status_Polyline;
  this->SrcVertex = 1;
  this->Ver2 = Vertices + 1;
  this->CurrRest = Vertices->Dist;
  *x = Vertices->x;
  result = 0i64;
  *y = this->Ver1->y;
  return result;
}

void __fastcall Scaleform::Render::Stroker::SetToleranceParam(
        Scaleform::Render::Stroker *this,
        const Scaleform::Render::ToleranceParams *param)
{
  this->CurveTolerance = param->CurveTolerance;
  this->IntersectionEpsilon = param->IntersectionEpsilon;
}

void __fastcall Scaleform::Render::StrokeSorter::Snap(
        Scaleform::Render::StrokeSorter *this,
        float offsetX,
        float offsetY)
{
  unsigned int v3; // er12
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  Scaleform::Render::StrokeSorter::VertexType **Pages; // rbx
  __int64 v8; // rdx
  char v9; // r10
  char v10; // bp
  unsigned int v11; // er9
  Scaleform::Render::StrokeSorter::PathType *v12; // rcx
  unsigned int start; // er15
  unsigned int numVer; // edx
  unsigned int v15; // er14
  float *p_x; // rcx
  unsigned int v17; // er8
  unsigned int v18; // eax
  __int64 v19; // r11
  float *v20; // rdx
  float *v21; // rcx
  float *v22; // rdx
  float *v23; // rdx
  unsigned int i; // edi
  __int64 v25; // rbx
  Scaleform::Render::StrokeSorter::VertexType *v26; // rsi
  float x; // xmm0_4
  float v28; // xmm0_4
  unsigned int j; // edi
  __int64 v30; // rbx
  Scaleform::Render::StrokeSorter::VertexType *v31; // rsi
  float y; // xmm0_4
  float v33; // xmm0_4

  v3 = 0;
  if ( this->OutPaths.Size )
  {
    v5 = 0i64;
    do
    {
      v6 = v5;
      Pages = this->OutVertices.Pages;
      v8 = v5 & 0xF;
      v9 = 0;
      v10 = 0;
      v11 = 1;
      v12 = this->OutPaths.Pages[v6 >> 4];
      start = v12[v8].start;
      numVer = v12[v8].numVer;
      v15 = numVer & 0xFFFFFFF;
      p_x = &Pages[(unsigned __int64)start >> 4][start & 0xF].x;
      if ( (numVer & 0x20000000) != 0 )
      {
        v11 = 0;
        p_x = &Pages[(unsigned __int64)((numVer & 0xFFFFFFF) + start - 1) >> 4][((_BYTE)numVer + (_BYTE)start - 1) & 0xF].x;
      }
      if ( v11 < v15 )
      {
        if ( v15 - v11 >= 4 )
        {
          v17 = v11 + start + 1;
          v18 = ((v15 - v11 - 4) >> 2) + 1;
          v19 = v18;
          v11 += 4 * v18;
          do
          {
            v20 = &Pages[(unsigned __int64)(v17 - 1) >> 4][((_BYTE)v17 - 1) & 0xF].x;
            if ( *p_x == *v20 && p_x[1] != v20[1] )
              v9 = 1;
            if ( p_x[1] == v20[1] && *p_x != *v20 )
              v10 = 1;
            v21 = &Pages[(unsigned __int64)v17 >> 4][v17 & 0xF].x;
            if ( *v20 == *v21 && v20[1] != v21[1] )
              v9 = 1;
            if ( v20[1] == v21[1] && *v20 != *v21 )
              v10 = 1;
            v22 = &Pages[(unsigned __int64)(v17 + 1) >> 4][((_BYTE)v17 + 1) & 0xF].x;
            if ( *v21 == *v22 && v21[1] != v22[1] )
              v9 = 1;
            if ( v21[1] == v22[1] && *v21 != *v22 )
              v10 = 1;
            p_x = &Pages[(unsigned __int64)(v17 + 2) >> 4][((_BYTE)v17 + 2) & 0xF].x;
            if ( *v22 == *p_x && v22[1] != p_x[1] )
              v9 = 1;
            if ( v22[1] == p_x[1] && *v22 != *p_x )
              v10 = 1;
            v17 += 4;
            --v19;
          }
          while ( v19 );
        }
        for ( ; v11 < v15; p_x = v23 )
        {
          v23 = &Pages[(unsigned __int64)(v11 + start) >> 4][((_BYTE)v11 + (_BYTE)start) & 0xF].x;
          if ( *p_x == *v23 && p_x[1] != v23[1] )
            v9 = 1;
          if ( p_x[1] == v23[1] && *p_x != *v23 )
            v10 = 1;
          ++v11;
        }
        if ( v9 )
        {
          for ( i = 0; i < v15; v26[v25].x = floorf(v28) + offsetX )
          {
            v25 = ((_BYTE)i + (_BYTE)start) & 0xF;
            v26 = this->OutVertices.Pages[(unsigned __int64)(i + start) >> 4];
            x = v26[((_BYTE)i + (_BYTE)start) & 0xF].x;
            if ( x >= 0.0 )
              v28 = x + 0.5;
            else
              v28 = x - 0.5;
            ++i;
          }
        }
        if ( v10 )
        {
          for ( j = 0; j < v15; v31[v30].y = floorf(v33) + offsetY )
          {
            v30 = ((_BYTE)j + (_BYTE)start) & 0xF;
            v31 = this->OutVertices.Pages[(unsigned __int64)(j + start) >> 4];
            y = v31[((_BYTE)j + (_BYTE)start) & 0xF].y;
            if ( y >= 0.0 )
              v33 = y + 0.5;
            else
              v33 = y - 0.5;
            ++j;
          }
        }
      }
      v5 = ++v3;
    }
    while ( v3 < this->OutPaths.Size );
  }
}

void __fastcall Scaleform::Render::StrokeSorter::Sort(Scaleform::Render::StrokeSorter *this)
{
  unsigned __int64 Size; // r15
  unsigned __int64 i; // r14
  unsigned __int64 v4; // rbp
  Scaleform::Render::StrokeSorter::PathType v5; // rbx
  Scaleform::Render::StrokeSorter::SortedPathType *v6; // rbp
  Scaleform::Render::StrokeSorter::SortedPathType *Array; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r11
  __int64 v10; // rbx
  Scaleform::Render::StrokeSorter::SortedPathType *v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r10
  unsigned __int64 start; // rcx
  Scaleform::Render::StrokeSorter::VertexType *v15; // rdx
  unsigned __int64 v16; // rbp
  __int64 v17; // r14
  unsigned int Next; // eax
  Scaleform::Render::StrokeSorter::PathType *thisPath; // rcx
  unsigned __int64 v20; // rsi
  Scaleform::Render::StrokeSorter::VertexType **Pages; // rcx
  unsigned int numVer; // ebx
  float *p_x; // rdx
  float *v24; // r8
  Scaleform::Render::StrokeSorter::VertexType **v25; // rcx
  float *v26; // rdx
  float *v27; // r8
  unsigned __int64 v28; // rsi
  unsigned __int64 MaxPages; // rdx
  Scaleform::Render::LinearHeap *pHeap; // rcx
  void *v31; // rbx
  unsigned __int64 v32; // rax
  Scaleform::Render::StrokeSorter::PathType dst; // [rsp+50h] [rbp+8h] BYREF

  Size = this->SrcPaths.Size;
  for ( i = 0i64; i < Size; ++this->SrcPaths.Size )
  {
    v4 = this->SrcPaths.Size >> 4;
    v5 = this->SrcPaths.Pages[i >> 4][i & 0xF];
    if ( v4 >= this->SrcPaths.NumPages )
      Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16>::allocPage(
        (Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16> *)&this->SrcPaths,
        this->SrcPaths.Size >> 4);
    ++i;
    this->SrcPaths.Pages[v4][this->SrcPaths.Size & 0xF] = v5;
  }
  if ( Size > this->SortedPaths.Size )
  {
    v6 = (Scaleform::Render::StrokeSorter::SortedPathType *)Scaleform::Render::LinearHeap::Alloc(
                                                              this->SortedPaths.pHeap,
                                                              16 * Size);
    memset(v6, 0, 16 * Size);
    Array = this->SortedPaths.Array;
    if ( Array )
    {
      v8 = this->SortedPaths.Size;
      if ( v8 )
        memmove(v6, Array, 16 * v8);
    }
    this->SortedPaths.Array = v6;
  }
  this->SortedPaths.Size = Size;
  v9 = 0i64;
  if ( Size )
  {
    v10 = 0i64;
    do
    {
      ++v10;
      v11 = this->SortedPaths.Array;
      v12 = v9 & 0xF;
      v13 = v9++ >> 4;
      start = this->SrcPaths.Pages[v13][v12].start;
      v15 = &this->SrcVertices.Pages[start >> 4][start & 0xF];
      v11[v10 - 1].x = v15->x;
      v11[v10 - 1].y = v15->y;
      v11[v10 - 1].thisPath = &this->SrcPaths.Pages[v13][v12];
    }
    while ( v9 < Size );
  }
  Scaleform::Alg::QuickSortSliced<Scaleform::Render::ArrayUnsafe<Scaleform::Render::StrokeSorter::SortedPathType>,bool (*)(Scaleform::Render::StrokeSorter::SortedPathType const &,Scaleform::Render::StrokeSorter::SortedPathType const &)>(
    &this->SortedPaths,
    0i64,
    this->SortedPaths.Size,
    Scaleform::Render::StrokeSorter::cmpPaths);
  v16 = 0i64;
  if ( this->SortedPaths.Size )
  {
    v17 = 0i64;
    do
    {
      if ( (this->SortedPaths.Array[v17].thisPath->numVer & 0x40000000) == 0 )
      {
        Next = v16;
        dst = 0i64;
        do
        {
          thisPath = this->SortedPaths.Array[Next & 0xFFFFFFF].thisPath;
          thisPath->numVer |= 0x40000000u;
          Scaleform::Render::StrokeSorter::appendPath(this, &dst, this->SortedPaths.Array[Next & 0xFFFFFFF].thisPath);
          v20 = dst.start;
          Pages = this->OutVertices.Pages;
          numVer = dst.numVer;
          p_x = &Pages[(unsigned __int64)dst.start >> 4][dst.start & 0xF].x;
          v24 = &Pages[(unsigned __int64)(dst.start + (dst.numVer & 0xFFFFFFF) - 1) >> 4][(LOBYTE(dst.start)
                                                                                         + LOBYTE(dst.numVer)
                                                                                         - 1) & 0xF].x;
          if ( *p_x == *v24 && p_x[1] == v24[1] )
            break;
          Next = Scaleform::Render::StrokeSorter::findNext(this, &dst);
        }
        while ( Next != -1 );
        v25 = this->OutVertices.Pages;
        v26 = &v25[v20 >> 4][v20 & 0xF].x;
        v27 = &v25[(unsigned __int64)((unsigned int)v20 + (numVer & 0xFFFFFFF) - 1) >> 4][((_BYTE)v20 + (_BYTE)numVer - 1) & 0xF].x;
        if ( *v26 == *v27 && v26[1] == v27[1] )
          dst.numVer = numVer | 0x20000000;
        v28 = this->OutPaths.Size >> 4;
        if ( v28 >= this->OutPaths.NumPages )
        {
          MaxPages = this->OutPaths.MaxPages;
          if ( v28 >= MaxPages )
          {
            pHeap = this->OutPaths.pHeap;
            if ( this->OutPaths.Pages )
            {
              v31 = Scaleform::Render::LinearHeap::Alloc(pHeap, 16 * MaxPages);
              memmove(v31, this->OutPaths.Pages, 8 * this->OutPaths.NumPages);
              v32 = this->OutPaths.MaxPages;
              this->OutPaths.Pages = (Scaleform::Render::StrokeSorter::PathType **)v31;
              this->OutPaths.MaxPages = 2 * v32;
            }
            else
            {
              this->OutPaths.MaxPages = 16i64;
              this->OutPaths.Pages = (Scaleform::Render::StrokeSorter::PathType **)Scaleform::Render::LinearHeap::Alloc(
                                                                                     pHeap,
                                                                                     0x80ui64);
            }
          }
          this->OutPaths.Pages[v28] = (Scaleform::Render::StrokeSorter::PathType *)Scaleform::Render::LinearHeap::Alloc(
                                                                                     this->OutPaths.pHeap,
                                                                                     0x80ui64);
          ++this->OutPaths.NumPages;
        }
        this->OutPaths.Pages[v28][this->OutPaths.Size & 0xF] = dst;
        ++this->OutPaths.Size;
      }
      ++v16;
      ++v17;
    }
    while ( v16 < this->SortedPaths.Size );
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

void __fastcall Scaleform::Render::StrokeSorter::Transform(
        Scaleform::Render::StrokeSorter *this,
        const Scaleform::Render::TransformerBase *tr)
{
  unsigned __int64 i; // rbx
  Scaleform::Render::StrokeSorter::VertexType *v5; // rdx

  for ( i = 0i64; i < this->OutVertices.Size; ++i )
  {
    v5 = &this->OutVertices.Pages[i >> 4][i & 0xF];
    tr->Transform((Scaleform::Render::TransformerBase *)tr, (float *)v5, &v5->y);
  }
}

void __fastcall Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16>::allocPage(
        Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16> *this,
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
      this->Pages = (Scaleform::Render::VertexBasic **)v5;
      this->MaxPages = 2 * v6;
    }
    else
    {
      this->MaxPages = 16i64;
      this->Pages = (Scaleform::Render::VertexBasic **)Scaleform::Render::LinearHeap::Alloc(this->pHeap, 0x80ui64);
    }
  }
  this->Pages[nb] = (Scaleform::Render::VertexBasic *)Scaleform::Render::LinearHeap::Alloc(this->pHeap, 0x80ui64);
  ++this->NumPages;
}

void __fastcall Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(
        Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> *this,
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
      this->Pages = (Scaleform::Render::StrokerAA::VertexType **)v5;
      this->MaxPages = 2 * v6;
    }
    else
    {
      this->MaxPages = 16i64;
      this->Pages = (Scaleform::Render::StrokerAA::VertexType **)Scaleform::Render::LinearHeap::Alloc(
                                                                   this->pHeap,
                                                                   0x80ui64);
    }
  }
  this->Pages[nb] = (Scaleform::Render::StrokerAA::VertexType *)Scaleform::Render::LinearHeap::Alloc(
                                                                  this->pHeap,
                                                                  0xC0ui64);
  ++this->NumPages;
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

void __fastcall Scaleform::Render::StrokeSorter::appendPath(
        Scaleform::Render::StrokeSorter *this,
        Scaleform::Render::StrokeSorter::PathType *dst,
        Scaleform::Render::StrokeSorter::PathType *src)
{
  unsigned __int64 v6; // rsi
  Scaleform::Render::StrokeSorter::VertexType *v7; // rdi
  unsigned int v8; // ebp
  unsigned int v9; // er15
  unsigned __int64 v10; // rsi
  Scaleform::Render::StrokeSorter::VertexType *v11; // rdi

  if ( !dst->numVer )
  {
    dst->start = this->OutVertices.Size;
    v6 = this->OutVertices.Size >> 4;
    v7 = &this->SrcVertices.Pages[(unsigned __int64)src->start >> 4][src->start & 0xF];
    if ( v6 >= this->OutVertices.NumPages )
      Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
        (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->OutVertices,
        this->OutVertices.Size >> 4);
    this->OutVertices.Pages[v6][this->OutVertices.Size & 0xF] = *v7;
    ++this->OutVertices.Size;
    ++dst->numVer;
  }
  v8 = 1;
  v9 = src->numVer & 0xFFFFFFF;
  if ( v9 > 1 )
  {
    do
    {
      v10 = this->OutVertices.Size >> 4;
      v11 = &this->SrcVertices.Pages[(unsigned __int64)(v8 + src->start) >> 4][((_BYTE)v8 + LOBYTE(src->start)) & 0xF];
      if ( v10 >= this->OutVertices.NumPages )
        Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
          (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->OutVertices,
          this->OutVertices.Size >> 4);
      ++v8;
      this->OutVertices.Pages[v10][this->OutVertices.Size & 0xF] = *v11;
      ++this->OutVertices.Size;
      ++dst->numVer;
    }
    while ( v8 < v9 );
  }
}

void __fastcall Scaleform::Render::Stroker::calcArc(
        Scaleform::Render::Stroker *this,
        Scaleform::Render::TessBase *tess,
        float x,
        float y,
        float dx1,
        float dy1,
        float dx2,
        float dy2)
{
  float v10; // xmm8_4
  float v11; // xmm9_4
  float v12; // xmm12_4
  float v13; // xmm9_4
  int v14; // ecx
  float v15; // xmm9_4
  float v16; // xmm8_4
  __int64 v17; // rsi
  Scaleform::Render::TessBase_vtbl *v18; // rbx

  v10 = atan2f(dy1, dx1);
  v11 = atan2f(dy2, dx2);
  v12 = acosf(this->Width / (float)((float)(this->CurveTolerance * 0.25) + this->Width)) * 2.0;
  ((void (__fastcall *)(Scaleform::Render::TessBase *))tess->AddVertex)(tess);
  if ( v10 > v11 )
    v11 = v11 + 6.2831855;
  v13 = v11 - v10;
  v14 = (int)(float)(v13 / v12);
  v15 = v13 / (float)(v14 + 1);
  v16 = v10 + v15;
  if ( v14 > 0 )
  {
    v17 = (unsigned int)v14;
    do
    {
      v18 = tess->__vftable;
      sinf(v16);
      cosf(v16);
      ((void (__fastcall *)(Scaleform::Render::TessBase *))v18->AddVertex)(tess);
      v16 = v16 + v15;
      --v17;
    }
    while ( v17 );
  }
  ((void (__fastcall *)(Scaleform::Render::TessBase *))tess->AddVertex)(tess);
}

void __fastcall Scaleform::Render::Stroker::calcCap(
        Scaleform::Render::Stroker *this,
        Scaleform::Render::TessBase *tess,
        const Scaleform::Render::StrokeVertex *v0,
        const Scaleform::Render::StrokeVertex *v1,
        float len,
        Scaleform::Render::StrokerTypes::LineCapType cap)
{
  float Width; // xmm12_4
  float v9; // xmm10_4
  float v10; // xmm13_4
  int v11; // ebx
  float v12; // xmm13_4
  float v13; // xmm10_4
  __int64 v14; // rbp
  Scaleform::Render::TessBase_vtbl *v15; // rbx

  Width = this->Width;
  if ( Width == 0.0 )
  {
    ((void (__fastcall *)(Scaleform::Render::TessBase *))tess->AddVertex)(tess);
  }
  else if ( cap == RoundCap )
  {
    v9 = atan2f(
           COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v0->x - v1->x) / len) * Width) ^ _xmm),
           COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v1->y - v0->y) / len) * Width) ^ _xmm));
    v10 = (float)(v9 + 3.1415927) - v9;
    v11 = (int)(float)(v10 / (float)(acosf(Width / (float)((float)(this->CurveTolerance * 0.25) + Width)) * 2.0));
    v12 = v10 / (float)(v11 + 1);
    v13 = v9 + v12;
    ((void (__fastcall *)(Scaleform::Render::TessBase *))tess->AddVertex)(tess);
    if ( v11 > 0 )
    {
      v14 = (unsigned int)v11;
      do
      {
        v15 = tess->__vftable;
        sinf(v13);
        cosf(v13);
        ((void (__fastcall *)(Scaleform::Render::TessBase *))v15->AddVertex)(tess);
        v13 = v13 + v12;
        --v14;
      }
      while ( v14 );
    }
    ((void (__fastcall *)(Scaleform::Render::TessBase *))tess->AddVertex)(tess);
  }
  else
  {
    ((void (__fastcall *)(Scaleform::Render::TessBase *))tess->AddVertex)(tess);
    ((void (__fastcall *)(Scaleform::Render::TessBase *))tess->AddVertex)(tess);
  }
}

void __fastcall Scaleform::Render::Stroker::calcJoin(
        Scaleform::Render::Stroker *this,
        Scaleform::Render::TessBase *tess,
        const Scaleform::Render::StrokeVertex *v0,
        const Scaleform::Render::StrokeVertex *v1,
        const Scaleform::Render::StrokeVertex *v2,
        float len1,
        float len2)
{
  float Width; // xmm9_4
  float x; // xmm8_4
  float y; // xmm10_4
  float v14; // xmm2_4
  float v15; // xmm15_4
  float epsilon; // xmm13_4
  float dx1; // xmm12_4
  float dy1; // xmm11_4
  float dx2; // xmm7_4
  float dy2; // xmm6_4
  float dbevel; // xmm0_4
  Scaleform::Render::StrokerTypes::LineJoinType lineJoin; // ecx
  Scaleform::Render::TessBase_vtbl *v23; // rax
  Scaleform::Render::TessBase *v24; // rcx

  Width = this->Width;
  if ( Width == 0.0 )
  {
    ((void (__fastcall *)(Scaleform::Render::TessBase *))tess->AddVertex)(tess);
    return;
  }
  x = v1->x;
  y = v1->y;
  v14 = v2->y - y;
  v15 = v0->y;
  epsilon = (float)(len1 + len2) * this->IntersectionEpsilon;
  dx1 = (float)((float)(y - v15) * Width) / len1;
  dy1 = (float)((float)(v0->x - v1->x) * Width) / len1;
  dx2 = (float)(v14 * Width) / len2;
  dy2 = (float)((float)(v1->x - v2->x) * Width) / len2;
  if ( (float)((float)((float)(v2->x - x) * (float)(y - v15)) - (float)((float)(x - v0->x) * v14)) > 0.0 )
  {
    Scaleform::Render::Stroker::calcMiter(
      this,
      tess,
      v0,
      v1,
      v2,
      dx1,
      dy1,
      (float)(v14 * Width) / len2,
      dy2,
      MiterBevelJoin,
      fminf(len1, len2) / Width,
      epsilon,
      0.0);
    return;
  }
  dbevel = sqrtf(
             (float)((float)((float)(dy2 + dy1) * 0.5) * (float)((float)(dy2 + dy1) * 0.5))
           + (float)((float)((float)(dx2 + dx1) * 0.5) * (float)((float)(dx2 + dx1) * 0.5)));
  lineJoin = this->LineJoin;
  if ( (unsigned int)(lineJoin - 2) > 1 || (float)(this->CurveTolerance * 0.125) <= (float)(Width - dbevel) )
  {
    if ( lineJoin >= MiterJoin )
    {
      if ( lineJoin <= MiterBevelJoin )
      {
        Scaleform::Render::Stroker::calcMiter(
          this,
          tess,
          v0,
          v1,
          v2,
          dx1,
          dy1,
          dx2,
          dy2,
          lineJoin,
          this->MiterLimit,
          epsilon,
          dbevel);
        return;
      }
      if ( lineJoin == RoundJoin )
      {
        Scaleform::Render::Stroker::calcArc(this, tess, x, y, dx1, dy1, dx2, dy2);
        return;
      }
    }
    ((void (__fastcall *)(Scaleform::Render::TessBase *))tess->AddVertex)(tess);
    v23 = tess->__vftable;
    v24 = tess;
  }
  else
  {
    v23 = tess->__vftable;
    v24 = tess;
  }
  ((void (__fastcall *)(Scaleform::Render::TessBase *))v23->AddVertex)(v24);
}

void __fastcall Scaleform::Render::Stroker::calcMiter(
        Scaleform::Render::Stroker *this,
        Scaleform::Render::TessBase *tess,
        const Scaleform::Render::StrokeVertex *v0,
        const Scaleform::Render::StrokeVertex *v1,
        const Scaleform::Render::StrokeVertex *v2,
        float dx1,
        float dy1,
        float dx2,
        float dy2,
        Scaleform::Render::StrokerTypes::LineJoinType lineJoin,
        float miterLimit,
        float epsilon)
{
  char v12; // si
  float y; // xmm5_4
  __int64 v16; // rdx
  float v19; // xmm14_4
  float v20; // xmm13_4
  float v21; // xmm4_4
  float v22; // xmm15_4
  float v23; // xmm1_4
  float v24; // xmm1_4
  float v25; // xmm1_4
  Scaleform::Render::TessBase_vtbl *v26; // rax
  float v27; // [rsp+E0h] [rbp+8h]
  float v28; // [rsp+F0h] [rbp+18h]
  float v29; // [rsp+F8h] [rbp+20h]
  float v2a; // [rsp+100h] [rbp+28h]
  float dx1a; // [rsp+108h] [rbp+30h]
  float dy1a; // [rsp+110h] [rbp+38h]
  float dy2a; // [rsp+120h] [rbp+48h]
  float miterLimita; // [rsp+130h] [rbp+58h]

  v12 = 1;
  y = v0->y;
  v16 = 1i64;
  v19 = v1->x + dx1;
  v20 = miterLimit * this->Width;
  v28 = v0->x + dx1;
  v21 = v2->y;
  v22 = v1->y + dy1;
  miterLimita = v1->y + dy2;
  v23 = v21 + dy2;
  dy2a = v1->x + dx2;
  v27 = y + dy1;
  v2a = v23 - miterLimita;
  dy1a = v22 - (float)(y + dy1);
  dx1a = (float)(v2->x + dx2) - dy2a;
  v29 = (float)((float)(v23 - miterLimita) * (float)(v19 - v28)) - (float)(dx1a * dy1a);
  v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v29) & _xmm);
  if ( epsilon > v24 )
  {
    if ( (float)((float)((float)(v0->x - v19) * dy1) - (float)((float)(y - v22) * dx1)) < 0.0 != (float)((float)((float)(v2->x - v19) * dy1) - (float)((float)(v21 - v22) * dx1)) < 0.0 )
    {
LABEL_10:
      ((void (__fastcall *)(Scaleform::Render::TessBase *, __int64))tess->AddVertex)(tess, v16);
      return;
    }
LABEL_7:
    v26 = tess->__vftable;
    if ( lineJoin == MiterBevelJoin )
      ((void (__fastcall *)(Scaleform::Render::TessBase *, __int64))v26->AddVertex)(tess, v16);
    else
      ((void (__fastcall *)(Scaleform::Render::TessBase *))v26->AddVertex)(tess);
    goto LABEL_10;
  }
  v25 = (float)((float)((float)(v27 - miterLimita) * dx1a) - (float)((float)(v28 - dy2a) * v2a)) / v29;
  if ( v20 >= sqrtf(
                (float)((float)((float)((float)(dy1a * v25) + v27) - v1->y)
                      * (float)((float)((float)(dy1a * v25) + v27) - v1->y))
              + (float)((float)((float)((float)((float)(v19 - v28) * v25) + v28) - v1->x)
                      * (float)((float)((float)((float)(v19 - v28) * v25) + v28) - v1->x))) )
  {
    ((void (__fastcall *)(Scaleform::Render::TessBase *))tess->AddVertex)(tess);
    v12 = 0;
  }
  LOBYTE(v16) = 0;
  if ( v12 )
    goto LABEL_7;
}

_BOOL8 __fastcall Scaleform::Render::StrokeSorter::cmpPaths(
        const Scaleform::Render::StrokeSorter::SortedPathType *a,
        const Scaleform::Render::StrokeSorter::SortedPathType *b)
{
  if ( a->x == b->x )
    return b->y > a->y;
  else
    return b->x > a->x;
}

__int64 __fastcall Scaleform::Render::StrokeSorter::findNext(
        Scaleform::Render::StrokeSorter *this,
        const Scaleform::Render::StrokeSorter::PathType *outPath)
{
  Scaleform::Render::StrokeSorter::VertexType **Pages; // rax
  __int64 Size; // rcx
  unsigned __int64 v5; // rdx
  float *p_x; // r8
  unsigned __int64 v7; // rdx
  float v8; // xmm1_4
  float v9; // xmm2_4
  Scaleform::Render::StrokeSorter::SortedPathType *v10; // rax
  float x; // xmm0_4
  bool v12; // cf
  bool v13; // zf
  unsigned __int64 v14; // r8
  Scaleform::Render::StrokeSorter::SortedPathType *i; // rcx

  Pages = this->OutVertices.Pages;
  Size = this->SortedPaths.Size;
  v5 = (outPath->numVer & 0xFFFFFFF) + outPath->start - 1;
  p_x = &Pages[v5 >> 4][v5 & 0xF].x;
  v7 = 0i64;
  v8 = *p_x;
  v9 = p_x[1];
  while ( Size > 0 )
  {
    v10 = &this->SortedPaths.Array[(Size >> 1) + v7];
    x = v10->x;
    if ( v10->x == v8 )
    {
      v12 = v9 < v10->y;
      v13 = v9 == v10->y;
    }
    else
    {
      v12 = v8 < x;
      v13 = v8 == x;
    }
    if ( v12 || v13 )
    {
      Size >>= 1;
    }
    else
    {
      v7 += (Size >> 1) + 1;
      Size += -1 - (Size >> 1);
    }
  }
  v14 = this->SortedPaths.Size;
  if ( v7 < v14 )
  {
    for ( i = &this->SortedPaths.Array[v7]; i->x == v8 && i->y == v9; ++i )
    {
      if ( (i->thisPath->numVer & 0x40000000) == 0 )
        return (unsigned int)v7;
      if ( ++v7 >= v14 )
        return 0xFFFFFFFFi64;
    }
  }
  return 0xFFFFFFFFi64;
}

