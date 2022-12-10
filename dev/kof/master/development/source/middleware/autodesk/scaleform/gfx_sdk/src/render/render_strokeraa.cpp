#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"

Scaleform::Render::StrokerAA::StrokerAA(Scaleform::Render::LinearHeap * heap); // 0x1403B3D80
void Scaleform::Render::StrokerAA::Clear(); // 0x1403B3ED0
void Scaleform::Render::StrokerAA::SetToleranceParam(const Scaleform::Render::ToleranceParams & param); // 0x1403B4F30
void Scaleform::Render::StrokerAA::ClosePath(); // 0x1403B3F50
void Scaleform::Render::StrokerAA::calcButtCap(const Scaleform::Render::StrokeVertex & v0, const Scaleform::Render::StrokeVertex & v1, float len, const Scaleform::Render::StrokerAA::WidthsType & w, bool endFlag); // 0x1403B5F90
void Scaleform::Render::StrokerAA::calcRoundCap(const Scaleform::Render::StrokeVertex & v0, const Scaleform::Render::StrokeVertex & v1, float len, const Scaleform::Render::StrokerAA::WidthsType & w, bool endFlag); // 0x1403B7510
void Scaleform::Render::StrokerAA::calcRoundJoin(const Scaleform::Render::StrokeVertex & v1, const Scaleform::Render::StrokerAA::WidthsType & w, const Scaleform::Render::StrokerAA::JoinParamType & p); // 0x1403B7BF0
void Scaleform::Render::StrokerAA::calcBevelJoin(const Scaleform::Render::StrokeVertex & v1, const Scaleform::Render::StrokerAA::WidthsType & w, const Scaleform::Render::StrokerAA::JoinParamType & p, Scaleform::Render::StrokerTypes::LineJoinType lineJoin); // 0x1403B54A0
void Scaleform::Render::StrokerAA::calcButtJoin(const Scaleform::Render::StrokeVertex & v0, const Scaleform::Render::StrokeVertex & v1, float len, const Scaleform::Render::StrokerAA::WidthsType & w); // 0x1403B6400
void Scaleform::Render::StrokerAA::calcMiterJoin(const Scaleform::Render::StrokeVertex & v1, const Scaleform::Render::StrokerAA::WidthsType & w, const Scaleform::Render::StrokerAA::JoinParamType & p, Scaleform::Render::StrokerTypes::LineJoinType lineJoin); // 0x1403B7000
bool Scaleform::Render::StrokerAA::MitersIntersect(float ax, float ay, float bx, float by, float cx, float cy, float dx, float dy, float epsilon); // 0x1403B4E20
void Scaleform::Render::StrokerAA::calcJoinParam(const Scaleform::Render::StrokeVertex & v1, const Scaleform::Render::StrokeVertex & v2, const Scaleform::Render::StrokeVertex & v3, const Scaleform::Render::StrokerAA::WidthsType & w, Scaleform::Render::StrokerAA::JoinParamType & p); // 0x1403B66F0
void Scaleform::Render::StrokerAA::calcWidths(Scaleform::Render::StrokerAA::WidthsType & w); // 0x1403B8480
void Scaleform::Render::StrokerAA::FinalizePath(unsigned long __formal, unsigned long __formal, bool __formal, bool __formal); // 0x1403B3F70
void Scaleform::Render::StrokerAA::Transform(const Scaleform::Render::Matrix2x4<float> & m); // 0x1403B51D0
Scaleform::Render::Matrix2x4<float> Scaleform::Render::StrokerAA::StretchTo(float x1, float y1, float x2, float y2); // 0x1403B4F40
void Scaleform::Render::StrokerAA::GetMesh(unsigned long __formal, Scaleform::Render::TessMesh * mesh); // 0x1403B49E0
unsigned long Scaleform::Render::StrokerAA::GetVertices(Scaleform::Render::TessMesh * mesh, Scaleform::Render::TessVertex * vertices, unsigned long num); // 0x1403B4AA0
void Scaleform::Render::StrokerAA::GetTrianglesI16(unsigned long __formal, unsigned short * idx, unsigned long start, unsigned long num); // 0x1403B4A20void __fastcall Scaleform::Render::StrokerAA::StrokerAA(
        Scaleform::Render::StrokerAA *this,
        Scaleform::Render::LinearHeap *heap)
{
  this->LineJoin = RoundJoin;
  this->__vftable = (Scaleform::Render::StrokerAA_vtbl *)&Scaleform::Render::StrokerAA::`vftable';
  this->WidthRight = 0.0;
  this->Closed = 0;
  this->StartLineCap = RoundCap;
  this->EndLineCap = RoundCap;
  this->MiterLimit = 3.0;
  this->StyleLeft = 1;
  *(_QWORD *)&this->StyleRight = 1i64;
  this->AaWidthLeft = 0.5;
  this->AaWidthRight = 0.5;
  this->Tolerance = 1.0;
  this->IntersectionEpsilon = 0.0099999998;
  this->Path.Path.Size = 0i64;
  this->Path.Path.NumPages = 0i64;
  this->Path.Path.MaxPages = 0i64;
  this->Path.Path.Pages = 0i64;
  this->Path.Path.pHeap = heap;
  this->Vertices.Size = 0i64;
  this->Vertices.NumPages = 0i64;
  this->Vertices.MaxPages = 0i64;
  this->Vertices.Pages = 0i64;
  this->Vertices.pHeap = heap;
  this->Triangles.Size = 0i64;
  this->Triangles.NumPages = 0i64;
  this->Triangles.MaxPages = 0i64;
  this->Triangles.Pages = 0i64;
  this->Triangles.pHeap = heap;
  *(_QWORD *)&this->SolidL = 0i64;
  *(_QWORD *)&this->TotalL = 0i64;
  this->MinX = 1.0e30;
  this->MinY = 1.0e30;
  this->MaxX = -1.0e30;
  this->MaxY = -1.0e30;
}

void __fastcall Scaleform::Render::StrokerAA::AddVertex(Scaleform::Render::StrokerAA *this, float x, float y)
{
  Scaleform::Render::StrokeVertex v; // [rsp+20h] [rbp-18h] BYREF

  v.x = x;
  v.dist = 0.0;
  v.y = y;
  Scaleform::Render::StrokePath::AddVertex(&this->Path, &v);
}

void __fastcall Scaleform::Render::StrokerAA::Clear(Scaleform::Render::StrokerAA *this)
{
  Scaleform::Render::StrokePath::ClearAndRelease(&this->Path);
  this->Vertices.MaxPages = 0i64;
  this->Vertices.NumPages = 0i64;
  this->Vertices.Size = 0i64;
  this->Vertices.Pages = 0i64;
  this->Triangles.MaxPages = 0i64;
  this->Triangles.NumPages = 0i64;
  this->Triangles.Size = 0i64;
  this->Triangles.Pages = 0i64;
  this->Closed = 0;
  this->MinX = 1.0e30;
  this->MinY = 1.0e30;
  this->MaxX = -1.0e30;
  this->MaxY = -1.0e30;
}

void __fastcall Scaleform::Render::StrokerAA::ClosePath(Scaleform::Render::StrokerAA *this)
{
  Scaleform::Render::StrokePath::ClosePath(&this->Path);
  this->Closed = 1;
}

void __fastcall Scaleform::Render::StrokerAA::FinalizePath(
        Scaleform::Render::StrokerAA *this,
        unsigned int __formal,
        unsigned int a3,
        bool a4)
{
  bool v5; // zf
  unsigned __int64 v6; // r15
  const Scaleform::Render::StrokeVertex **v7; // rbx
  const Scaleform::Render::StrokeVertex *v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r10
  const Scaleform::Render::StrokeVertex *v16; // rbx
  Scaleform::Render::StrokerTypes::LineJoinType v17; // eax
  __int64 v18; // r10
  unsigned __int64 v19; // rax
  Scaleform::Render::StrokerAA::TriangleType *v20; // r9
  float v21; // xmm3_4
  Scaleform::Render::StrokeVertex **Pages; // rax
  float *v23; // rcx
  float dist; // xmm2_4
  float v25; // xmm1_4
  float v26; // xmm0_4
  unsigned __int64 Size; // rdx
  Scaleform::Render::StrokeVertex **v28; // r8
  __int64 v29; // r10
  Scaleform::Render::StrokeVertex *v30; // r9
  unsigned __int64 v31; // rcx
  __int64 v32; // rdx
  Scaleform::Render::StrokeVertex *v33; // rax
  float y; // xmm1_4
  Scaleform::Render::StrokeVertex *v35; // rdx
  Scaleform::Render::StrokerTypes::LineCapType StartLineCap; // eax
  float v37; // xmm3_4
  const Scaleform::Render::StrokeVertex *v38; // r8
  unsigned __int64 v39; // r15
  Scaleform::Render::StrokeVertex **v40; // rax
  const Scaleform::Render::StrokeVertex *v41; // rdx
  float v42; // xmm8_4
  float x; // xmm9_4
  float v44; // xmm10_4
  float v45; // xmm7_4
  float v46; // xmm7_4
  float v47; // xmm8_4
  unsigned __int64 v48; // r15
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // rsi
  Scaleform::Render::StrokeVertex **v51; // r8
  const Scaleform::Render::StrokeVertex *v52; // rdi
  Scaleform::Render::StrokerTypes::LineJoinType LineJoin; // eax
  Scaleform::Render::StrokeVertex **v54; // r10
  Scaleform::Render::StrokeVertex *v55; // r8
  Scaleform::Render::StrokeVertex *v56; // rax
  float v57; // xmm0_4
  float v58; // xmm1_4
  unsigned __int64 v59; // rdx
  float v60; // xmm1_4
  const Scaleform::Render::StrokeVertex *v61; // rbx
  float v62; // xmm0_4
  Scaleform::Render::StrokerTypes::LineJoinType v63; // eax
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rax
  Scaleform::Render::StrokeVertex **v66; // r10
  float v67; // xmm3_4
  const Scaleform::Render::StrokeVertex *v68; // r8
  const Scaleform::Render::StrokeVertex *v69; // rdx
  Scaleform::Render::StrokerTypes::LineCapType EndLineCap; // eax
  Scaleform::Render::StrokerAA::WidthsType w; // [rsp+30h] [rbp-D0h] BYREF
  Scaleform::Render::StrokeVertex v3; // [rsp+70h] [rbp-90h] BYREF
  Scaleform::Render::StrokerAA::JoinParamType p; // [rsp+80h] [rbp-80h] BYREF

  if ( !this->Closed )
    this->Closed = Scaleform::Render::StrokePath::ClosePath(&this->Path);
  w.totalLimitR = 0.0;
  this->SolidL = -4;
  this->SolidR = -3;
  *(_QWORD *)&this->TotalL = -2i64;
  memset(&w, 0, 48);
  *(_DWORD *)&w.solidFlagL = 0;
  *(_WORD *)&w.solidFlag = 0;
  Scaleform::Render::StrokerAA::calcWidths(this, &w);
  v5 = !this->Closed;
  memset(&p, 0, 219);
  if ( v5 )
  {
    if ( this->Path.Path.Size > 1 )
    {
      v21 = (float)(this->WidthRight + this->WidthLeft) * 0.5;
      if ( this->StartLineCap == SquareCap )
      {
        Pages = this->Path.Path.Pages;
        v23 = (float *)*Pages;
        dist = (*Pages)->dist;
        *v23 = (*Pages)->x - (float)((float)((float)((*Pages)[1].x - (*Pages)->x) * v21) / dist);
        v25 = v23[1];
        v26 = (float)((float)(v23[4] - v25) * v21) / dist;
        v23[2] = dist + v21;
        v23[1] = v25 - v26;
      }
      if ( this->EndLineCap == SquareCap )
      {
        Size = this->Path.Path.Size;
        v28 = this->Path.Path.Pages;
        v29 = ((_DWORD)Size - 2) & 0xF;
        v30 = v28[(Size - 2) >> 4];
        v31 = (Size - 1) >> 4;
        v32 = ((_DWORD)Size - 1) & 0xF;
        v33 = v28[v31];
        y = v33[v32].y;
        v33[v32].x = (float)((float)((float)(v33[v32].x - v30[v29].x) * v21) / v30[v29].dist) + v33[v32].x;
        v33[v32].y = (float)((float)((float)(y - v30[v29].y) * v21) / v30[v29].dist) + y;
        v30[v29].dist = v21 + v30[v29].dist;
      }
      v35 = *this->Path.Path.Pages;
      StartLineCap = this->StartLineCap;
      v37 = v35->dist;
      v38 = v35 + 1;
      if ( StartLineCap >= ButtCap )
      {
        if ( StartLineCap <= SquareCap )
        {
          Scaleform::Render::StrokerAA::calcButtCap(this, v35, v38, v37, &w, 0);
        }
        else if ( StartLineCap == RoundCap )
        {
          Scaleform::Render::StrokerAA::calcRoundCap(this, v35, v38, v37, &w, 0);
        }
      }
      v39 = this->Path.Path.Size;
      if ( v39 > 2 )
      {
        v40 = this->Path.Path.Pages;
        v41 = *v40;
        v42 = (*v40)[1].y;
        x = (*v40)->x;
        v44 = (*v40)->y;
        v45 = x - (*v40)[1].x;
        p.dMiterNextL = w.totalWidthL;
        p.dMiterNextR = w.totalWidthR;
        p.overlapThis = 0;
        v46 = v45 / v41->dist;
        p.rightTurnNext = 0;
        *(_WORD *)&p.badMiterNextL = 0;
        v47 = (float)(v42 - v44) / v41->dist;
        p.dy3SolidL = w.solidWidthL * v46;
        p.dx3SolidL = w.solidWidthL * v47;
        p.dy3SolidR = w.solidWidthR * v46;
        p.dx3SolidR = w.solidWidthR * v47;
        p.dx3TotalL = w.totalWidthL * v47;
        p.dy3TotalL = w.totalWidthL * v46;
        p.dx3TotalR = w.totalWidthR * v47;
        p.dy3TotalR = w.totalWidthR * v46;
        p.xMiterNextL = x - (float)(w.totalWidthL * v47);
        p.yMiterNextR = v44 + (float)(w.totalWidthR * v46);
        p.yMiterNextL = v44 - (float)(w.totalWidthL * v46);
        p.xMiterNextR = x + (float)(w.totalWidthR * v47);
        Scaleform::Render::StrokerAA::calcJoinParam(this, v41, v41 + 1, v41 + 2, &w, &p);
        v48 = v39 - 2;
        v49 = 1i64;
        if ( v48 > 1 )
        {
          v50 = 2i64;
          do
          {
            v51 = this->Path.Path.Pages;
            v52 = &v51[v49 >> 4][v49 & 0xF];
            Scaleform::Render::StrokerAA::calcJoinParam(
              this,
              v52,
              &v51[v50 >> 4][v50 & 0xF],
              &v51[(v50 + 1) >> 4][((_DWORD)v50 + 1) & 0xF],
              &w,
              &p);
            LineJoin = this->LineJoin;
            if ( LineJoin >= MiterJoin )
            {
              if ( LineJoin <= MiterBevelJoin )
              {
                Scaleform::Render::StrokerAA::calcMiterJoin(this, v52, &w, &p, this->LineJoin);
              }
              else if ( LineJoin == RoundJoin )
              {
                Scaleform::Render::StrokerAA::calcRoundJoin(this, v52, &w, &p);
              }
              else if ( LineJoin == BevelJoin )
              {
                Scaleform::Render::StrokerAA::calcBevelJoin(this, v52, &w, &p, BevelJoin);
              }
            }
            ++v49;
            ++v50;
          }
          while ( v49 < v48 );
        }
        v54 = this->Path.Path.Pages;
        v55 = v54[v48 >> 4];
        v56 = v54[(v48 + 1) >> 4];
        v57 = v56[((_DWORD)v48 + 1) & 0xF].x;
        v58 = v56[((_DWORD)v48 + 1) & 0xF].y;
        v59 = v49 + 1;
        v60 = (float)(v58 + v58) - v55[v48 & 0xF].y;
        v61 = &v54[v49 >> 4][v49 & 0xF];
        v3.x = (float)(v57 + v57) - v55[v48 & 0xF].x;
        v62 = v55[v48 & 0xF].dist;
        v3.y = v60;
        v3.dist = v62;
        Scaleform::Render::StrokerAA::calcJoinParam(this, v61, &v54[v59 >> 4][v59 & 0xF], &v3, &w, &p);
        v63 = this->LineJoin;
        if ( v63 >= MiterJoin )
        {
          if ( v63 <= MiterBevelJoin )
          {
            Scaleform::Render::StrokerAA::calcMiterJoin(this, v61, &w, &p, this->LineJoin);
          }
          else if ( v63 == RoundJoin )
          {
            Scaleform::Render::StrokerAA::calcRoundJoin(this, v61, &w, &p);
          }
          else if ( v63 == BevelJoin )
          {
            Scaleform::Render::StrokerAA::calcBevelJoin(this, v61, &w, &p, BevelJoin);
          }
        }
      }
      v64 = this->Path.Path.Size;
      Scaleform::Render::StrokerAA::calcButtJoin(
        this,
        &this->Path.Path.Pages[(v64 - 2) >> 4][((_BYTE)v64 - 2) & 0xF],
        &this->Path.Path.Pages[(v64 - 1) >> 4][((_DWORD)v64 - 1) & 0xF],
        this->Path.Path.Pages[(v64 - 2) >> 4][((_BYTE)v64 - 2) & 0xF].dist,
        &w);
      v65 = this->Path.Path.Size;
      v66 = this->Path.Path.Pages;
      v67 = v66[(v65 - 2) >> 4][((_BYTE)v65 - 2) & 0xF].dist;
      v68 = &v66[(v65 - 2) >> 4][((_DWORD)v65 - 2) & 0xF];
      v69 = &v66[(v65 - 1) >> 4][((_BYTE)v65 - 1) & 0xF];
      EndLineCap = this->EndLineCap;
      if ( EndLineCap >= ButtCap )
      {
        if ( EndLineCap <= SquareCap )
        {
          Scaleform::Render::StrokerAA::calcButtCap(this, v69, v68, v67, &w, 1);
        }
        else if ( EndLineCap == RoundCap )
        {
          Scaleform::Render::StrokerAA::calcRoundCap(this, v69, v68, v67, &w, 1);
        }
      }
    }
  }
  else
  {
    v6 = this->Path.Path.Size;
    if ( v6 > 2 )
    {
      v7 = (const Scaleform::Render::StrokeVertex **)this->Path.Path.Pages;
      v8 = *v7;
      Scaleform::Render::StrokerAA::calcJoinParam(
        this,
        &v7[(v6 - 2) >> 4][((_DWORD)v6 - 2) & 0xF],
        &v7[(v6 - 1) >> 4][((_BYTE)v6 - 1) & 0xF],
        *v7,
        &w,
        &p);
      Scaleform::Render::StrokerAA::calcJoinParam(this, &v7[(v6 - 1) >> 4][((_DWORD)v6 - 1) & 0xF], v8, v8 + 1, &w, &p);
      v9 = this->Triangles.Size;
      v10 = 1i64;
      do
      {
        v11 = this->Path.Path.Size;
        v12 = v10 + 1;
        v13 = v10 + 1;
        if ( v10 + 1 >= v11 )
          v13 -= v11;
        v14 = this->Path.Path.Size;
        v15 = v10;
        if ( v10 >= v14 )
          v15 = v10 - v14;
        v16 = &this->Path.Path.Pages[(v10 - 1) >> 4][((_DWORD)v10 - 1) & 0xF];
        Scaleform::Render::StrokerAA::calcJoinParam(
          this,
          v16,
          &this->Path.Path.Pages[v15 >> 4][v15 & 0xF],
          &this->Path.Path.Pages[v13 >> 4][v13 & 0xF],
          &w,
          &p);
        v17 = this->LineJoin;
        if ( v17 >= MiterJoin )
        {
          if ( v17 <= MiterBevelJoin )
          {
            Scaleform::Render::StrokerAA::calcMiterJoin(this, v16, &w, &p, this->LineJoin);
          }
          else if ( v17 == RoundJoin )
          {
            Scaleform::Render::StrokerAA::calcRoundJoin(this, v16, &w, &p);
          }
          else if ( v17 == BevelJoin )
          {
            Scaleform::Render::StrokerAA::calcBevelJoin(this, v16, &w, &p, BevelJoin);
          }
        }
        v10 = v12;
      }
      while ( v12 - 1 < this->Path.Path.Size );
      v18 = -(__int64)v9;
      do
      {
        if ( v9 >= this->Triangles.Size )
          break;
        v19 = v9 & 0xF;
        v20 = this->Triangles.Pages[v9 >> 4];
        if ( v20[v19].v1 == -4 )
          v20[v19].v1 = this->SolidL;
        if ( v20[v19].v1 == -3 )
          v20[v19].v1 = this->SolidR;
        if ( v20[v19].v1 == -2 )
          v20[v19].v1 = this->TotalL;
        if ( v20[v19].v1 == -1 )
          v20[v19].v1 = this->TotalR;
        if ( v20[v19].v2 == -4 )
          v20[v19].v2 = this->SolidL;
        if ( v20[v19].v2 == -3 )
          v20[v19].v2 = this->SolidR;
        if ( v20[v19].v2 == -2 )
          v20[v19].v2 = this->TotalL;
        if ( v20[v19].v2 == -1 )
          v20[v19].v2 = this->TotalR;
        if ( v20[v19].v3 == -4 )
          v20[v19].v3 = this->SolidL;
        if ( v20[v19].v3 == -3 )
          v20[v19].v3 = this->SolidR;
        if ( v20[v19].v3 == -2 )
          v20[v19].v3 = this->TotalL;
        if ( v20[v19].v3 == -1 )
          v20[v19].v3 = this->TotalR;
        ++v9;
      }
      while ( v18 + v9 < 6 );
    }
  }
  Scaleform::Render::StrokePath::Clear(&this->Path);
  this->Closed = 0;
}

float __fastcall Scaleform::Render::StrokerAA::GetLastX(Scaleform::Render::StrokerAA *this)
{
  return this->Path.Path.Pages[(this->Path.Path.Size - 1) >> 4][(LODWORD(this->Path.Path.Size) - 1) & 0xF].x;
}

float __fastcall Scaleform::Render::StrokerAA::GetLastY(Scaleform::Render::StrokerAA *this)
{
  return this->Path.Path.Pages[(this->Path.Path.Size - 1) >> 4][(LODWORD(this->Path.Path.Size) - 1) & 0xF].y;
}

void __fastcall Scaleform::Render::StrokerAA::GetMesh(
        Scaleform::Render::StrokerAA *this,
        unsigned int __formal,
        Scaleform::Render::TessMesh *mesh)
{
  *(_QWORD *)&mesh->Style1 = 1i64;
  mesh->MeshIdx = 0;
  *(_QWORD *)&mesh->Flags1 = 0i64;
  mesh->StartVertex = 0;
  mesh->VertexCount = this->Vertices.Size;
}

_BOOL8 __fastcall Scaleform::Render::StrokerAA::GetMeshCount(Scaleform::Render::StrokerAA *this)
{
  return this->Triangles.Size != 0;
}

__int64 __fastcall Scaleform::Render::StrokerAA::GetMeshTriangleCount(
        Scaleform::Render::StrokerAA *this,
        unsigned int __formal)
{
  return LODWORD(this->Triangles.Size);
}

__int64 __fastcall Scaleform::Render::StrokerAA::GetMeshVertexCount(AgDelayedSaveDataMount *this)
{
  return LODWORD(this->m_mountPoint.m_text);
}

void __fastcall Scaleform::Render::StrokerAA::GetTrianglesI16(
        Scaleform::Render::StrokerAA *this,
        unsigned int __formal,
        unsigned __int16 *idx,
        unsigned int start,
        unsigned int num)
{
  unsigned int i; // er10
  unsigned int v6; // eax
  unsigned __int16 *v7; // rdx

  for ( i = 0; i < num; *(idx - 1) = v7[4] )
  {
    v6 = i + start;
    ++i;
    idx += 3;
    v7 = (unsigned __int16 *)&this->Triangles.Pages[(unsigned __int64)v6 >> 4][v6 & 0xF];
    *(idx - 3) = *v7;
    *(idx - 2) = v7[2];
  }
}

__int64 __fastcall Scaleform::Render::StrokerAA::GetVertices(
        Scaleform::Render::StrokerAA *this,
        Scaleform::Render::TessMesh *mesh,
        Scaleform::Render::TessVertex *vertices,
        unsigned int num)
{
  unsigned int v6; // er10
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  Scaleform::Render::StrokerAA::VertexType *v9; // rdx
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  Scaleform::Render::StrokerAA::VertexType *v12; // rdx
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  Scaleform::Render::StrokerAA::VertexType *v15; // rdx
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  Scaleform::Render::StrokerAA::VertexType *v18; // rdx
  unsigned int *p_Idx; // r11
  unsigned __int64 StartVertex; // rdx
  __int64 v21; // r8
  Scaleform::Render::StrokerAA::VertexType *v22; // rdx

  v6 = 0;
  if ( num < 4 )
  {
LABEL_7:
    if ( v6 < num )
    {
      p_Idx = &vertices->Idx;
      do
      {
        StartVertex = mesh->StartVertex;
        if ( StartVertex >= this->Vertices.Size )
          break;
        v21 = StartVertex & 0xF;
        v22 = this->Vertices.Pages[(unsigned __int64)(unsigned int)StartVertex >> 4];
        *(p_Idx - 2) = LODWORD(v22[v21].x);
        *(p_Idx - 1) = LODWORD(v22[v21].y);
        *p_Idx = 0;
        *((_WORD *)p_Idx + 2) = v22[v21].style;
        *((_WORD *)p_Idx + 3) = 0;
        ++v6;
        *((_WORD *)p_Idx + 4) = v22[v21].alpha != 0 ? 2 : 0;
        p_Idx += 5;
        ++mesh->StartVertex;
      }
      while ( v6 < num );
    }
  }
  else
  {
    while ( 1 )
    {
      v7 = mesh->StartVertex;
      if ( v7 >= this->Vertices.Size )
        break;
      v8 = v7 & 0xF;
      v9 = this->Vertices.Pages[(unsigned __int64)(unsigned int)v7 >> 4];
      vertices->x = v9[v8].x;
      vertices->y = v9[v8].y;
      vertices->Idx = 0;
      vertices->Styles[0] = v9[v8].style;
      vertices->Styles[1] = 0;
      vertices->Flags = v9[v8].alpha != 0 ? 2 : 0;
      v10 = ++mesh->StartVertex;
      if ( v10 >= this->Vertices.Size )
        return v6 + 1;
      v11 = v10 & 0xF;
      v12 = this->Vertices.Pages[(unsigned __int64)(unsigned int)v10 >> 4];
      vertices[1].x = v12[v11].x;
      vertices[1].y = v12[v11].y;
      vertices[1].Idx = 0;
      vertices[1].Styles[0] = v12[v11].style;
      vertices[1].Styles[1] = 0;
      vertices[1].Flags = v12[v11].alpha != 0 ? 2 : 0;
      v13 = ++mesh->StartVertex;
      if ( v13 >= this->Vertices.Size )
        return v6 + 2;
      v14 = v13 & 0xF;
      v15 = this->Vertices.Pages[(unsigned __int64)(unsigned int)v13 >> 4];
      vertices[2].x = v15[v14].x;
      vertices[2].y = v15[v14].y;
      vertices[2].Idx = 0;
      vertices[2].Styles[0] = v15[v14].style;
      vertices[2].Styles[1] = 0;
      vertices[2].Flags = v15[v14].alpha != 0 ? 2 : 0;
      v16 = ++mesh->StartVertex;
      if ( v16 >= this->Vertices.Size )
        return v6 + 3;
      v17 = v16 & 0xF;
      v18 = this->Vertices.Pages[(unsigned __int64)(unsigned int)v16 >> 4];
      vertices[3].x = v18[v17].x;
      vertices[3].y = v18[v17].y;
      vertices[3].Idx = 0;
      vertices[3].Styles[0] = v18[v17].style;
      vertices[3].Styles[1] = 0;
      v6 += 4;
      vertices[3].Flags = v18[v17].alpha != 0 ? 2 : 0;
      vertices += 4;
      ++mesh->StartVertex;
      if ( v6 >= num - 3 )
        goto LABEL_7;
    }
  }
  return v6;
}

char __fastcall Scaleform::Render::Math2D::Intersection(
        float ax,
        float ay,
        float bx,
        float by,
        float cx,
        float cy,
        float dx,
        float dy,
        float *x,
        float *y,
        float epsilon)
{
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm4_4
  float v15; // xmm1_4
  float v17; // xmm1_4

  v12 = by - ay;
  v13 = bx - ax;
  v14 = (float)((float)(dy - cy) * v13) - (float)((float)(dx - cx) * v12);
  v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v14) & _xmm);
  if ( epsilon > v15 )
    return 0;
  v17 = (float)((float)((float)(ay - cy) * (float)(dx - cx)) - (float)((float)(ax - cx) * (float)(dy - cy))) / v14;
  *x = (float)(v13 * v17) + ax;
  *y = (float)(v12 * v17) + ay;
  return 1;
}

bool __fastcall Scaleform::Render::StrokerAA::MitersIntersect(
        float ax,
        float ay,
        float bx,
        float by,
        float cx,
        float cy,
        float dx,
        float dy,
        float epsilon)
{
  float v9; // xmm6_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v15; // xmm4_4
  float v16; // xmm1_4
  float v17; // xmm4_4

  v9 = bx - ax;
  v11 = by - ay;
  v12 = (float)((float)(dy - cy) * (float)(bx - ax)) - (float)((float)(dx - cx) * v11);
  v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v12) & _xmm);
  if ( epsilon > v13 )
    return 1;
  v15 = ay - cy;
  v16 = (float)((float)(v15 * (float)(dx - cx)) - (float)((float)(ax - cx) * (float)(dy - cy))) / v12;
  v17 = (float)((float)(v15 * v9) - (float)((float)(ax - cx) * v11)) / v12;
  return v16 >= 0.0 && v16 <= 1.0 && v17 >= 0.0 && v17 <= 1.0;
}

void __fastcall Scaleform::Render::StrokerAA::SetToleranceParam(
        Scaleform::Render::StrokerAA *this,
        const Scaleform::Render::ToleranceParams *param)
{
  this->Tolerance = param->CurveTolerance;
  this->IntersectionEpsilon = param->IntersectionEpsilon;
}

Scaleform::Render::Matrix2x4<float> *__fastcall Scaleform::Render::StrokerAA::StretchTo(
        Scaleform::Render::StrokerAA *this,
        Scaleform::Render::Matrix2x4<float> *result,
        float x1,
        float y1,
        float x2,
        float y2)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 Size; // r9
  unsigned __int64 v12; // r8
  float v13; // xmm5_4
  float v14; // xmm2_4
  float v15; // xmm4_4
  Scaleform::Render::StrokerAA::VertexType **Pages; // r10
  float v17; // xmm3_4
  Scaleform::Render::StrokerAA::VertexType *v18; // rax
  __int64 v19; // xmm0_8
  float v20; // xmm1_4
  float v21; // xmm0_4
  float MinX; // xmm3_4
  float MaxX; // xmm1_4
  float MinY; // xmm0_4
  float MaxY; // xmm2_4
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // r8
  Scaleform::Render::StrokerAA::VertexType *v29; // rax
  float x; // xmm3_4
  float y; // xmm2_4
  float dst[2]; // [rsp+20h] [rbp-60h] BYREF
  float v34; // [rsp+28h] [rbp-58h]
  float v35; // [rsp+2Ch] [rbp-54h]
  float v36; // [rsp+30h] [rbp-50h]
  float v37; // [rsp+34h] [rbp-4Ch]
  Scaleform::Render::Matrix2x4<float> src; // [rsp+40h] [rbp-40h] BYREF

  v6 = 0i64;
  *(_OWORD *)&result->M[0][0] = 0x3F800000ui64;
  result->M[1][0] = 0.0;
  result->M[1][3] = 0.0;
  *(_QWORD *)&result->M[1][1] = 1065353216i64;
  if ( this->MinX >= this->MaxX || this->MinY >= this->MaxY )
  {
    Size = this->Vertices.Size;
    v12 = 0i64;
    this->MinX = 1.0e30;
    this->MinY = 1.0e30;
    this->MaxX = -1.0e30;
    this->MaxY = -1.0e30;
    if ( Size )
    {
      v13 = FLOAT_1_0e30;
      v14 = FLOAT_N1_0e30;
      v15 = FLOAT_1_0e30;
      Pages = this->Vertices.Pages;
      v17 = FLOAT_N1_0e30;
      do
      {
        v18 = Pages[v12 >> 4];
        v19 = *(_QWORD *)&v18[v12 & 0xF].x;
        LODWORD(v18) = *(_DWORD *)&v18[v12 & 0xF].style;
        *(_QWORD *)dst = v19;
        v20 = *(float *)&v19;
        v34 = *(float *)&v18;
        if ( v13 > *(float *)&v19 )
        {
          LODWORD(this->MinX) = v19;
          v13 = *(float *)&v19;
        }
        v21 = dst[1];
        if ( v15 > dst[1] )
        {
          this->MinY = dst[1];
          v15 = v21;
        }
        if ( v20 > v14 )
        {
          this->MaxX = v20;
          v14 = v20;
        }
        if ( v21 > v17 )
        {
          this->MaxY = v21;
          v17 = v21;
        }
        ++v12;
      }
      while ( v12 < Size );
    }
  }
  MinX = this->MinX;
  MaxX = this->MaxX;
  if ( MaxX > MinX )
  {
    MinY = this->MinY;
    MaxY = this->MaxY;
    if ( MaxY > MinY )
    {
      src.M[0][1] = this->MinY;
      v34 = x2;
      v36 = x2;
      v37 = y2;
      src.M[0][0] = MinX;
      *(_QWORD *)&src.M[0][2] = __PAIR64__(LODWORD(MinY), LODWORD(MaxX));
      *(_QWORD *)&src.M[1][0] = __PAIR64__(LODWORD(MaxY), LODWORD(MaxX));
      dst[0] = x1;
      dst[1] = y1;
      v35 = y1;
      Scaleform::Render::Matrix2x4<float>::SetParlToParl(result, (const float *)&src, dst);
      if ( this->Vertices.Size )
      {
        do
        {
          v26 = v6 & 0xF;
          v27 = v6++ >> 4;
          v28 = v26;
          v29 = this->Vertices.Pages[v27];
          x = v29[v28].x;
          y = v29[v28].y;
          v29[v28].x = (float)((float)(x * result->M[0][0]) + (float)(y * result->M[0][1])) + result->M[0][3];
          v29[v28].y = (float)((float)(x * result->M[1][0]) + (float)(y * result->M[1][1])) + result->M[1][3];
        }
        while ( v6 < this->Vertices.Size );
      }
      src = *result;
      Scaleform::Render::Matrix2x4<float>::SetInverse(result, &src);
    }
  }
  return result;
}

void __fastcall Scaleform::Render::StrokerAA::Transform(
        Scaleform::Render::StrokerAA *this,
        const Scaleform::Render::Matrix2x4<float> *m)
{
  unsigned __int64 v2; // r10
  __int64 v3; // r9
  Scaleform::Render::StrokerAA::VertexType *v4; // rax
  float x; // xmm2_4
  float y; // xmm3_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm0_4

  v2 = 0i64;
  this->MinX = 1.0e30;
  this->MinY = 1.0e30;
  this->MaxX = -1.0e30;
  for ( this->MaxY = -1.0e30; v2 < this->Vertices.Size; ++v2 )
  {
    v3 = v2 & 0xF;
    v4 = this->Vertices.Pages[v2 >> 4];
    x = v4[v2 & 0xF].x;
    y = v4[v2 & 0xF].y;
    v4[v3].x = (float)((float)(x * m->M[0][0]) + (float)(y * m->M[0][1])) + m->M[0][3];
    v4[v3].y = (float)((float)(y * m->M[1][1]) + (float)(x * m->M[1][0])) + m->M[1][3];
    v7 = v4[v2 & 0xF].x;
    if ( this->MinX > v7 )
      this->MinX = v7;
    v8 = v4[v2 & 0xF].y;
    if ( this->MinY > v8 )
      this->MinY = v8;
    v9 = v4[v2 & 0xF].x;
    if ( v9 > this->MaxX )
      this->MaxX = v9;
    v10 = v4[v2 & 0xF].y;
    if ( v10 > this->MaxY )
      this->MaxY = v10;
  }
}

void __fastcall Scaleform::Render::StrokerAA::addTriangle(
        Scaleform::Render::StrokerAA *this,
        unsigned int v1,
        unsigned int v2,
        unsigned int v3)
{
  Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::TriangleType,4,16> *p_Triangles; // rbx
  unsigned __int64 v6; // rdi
  __int64 v7; // rcx
  Scaleform::Render::StrokerAA::TriangleType *v8; // rax
  unsigned __int64 v9; // [rsp+20h] [rbp-18h]

  p_Triangles = &this->Triangles;
  v9 = __PAIR64__(v2, v1);
  v6 = this->Triangles.Size >> 4;
  if ( v6 >= this->Triangles.NumPages )
    Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(
      (Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> *)&this->Triangles,
      v6);
  v7 = p_Triangles->Size & 0xF;
  v8 = p_Triangles->Pages[v6];
  *(_QWORD *)&v8[v7].v1 = v9;
  v8[v7].v3 = v3;
  ++p_Triangles->Size;
}

__int64 __fastcall Scaleform::Render::StrokerAA::addVertex(
        Scaleform::Render::StrokerAA *this,
        float x,
        float y,
        unsigned int style,
        unsigned int alpha)
{
  unsigned __int64 v6; // rdi
  Scaleform::Render::StrokerAA::VertexType *v7; // rdx
  __int64 v8; // r8
  int v10; // [rsp+28h] [rbp-10h]

  v6 = this->Vertices.Size >> 4;
  LOWORD(v10) = style;
  HIWORD(v10) = alpha;
  if ( v6 >= this->Vertices.NumPages )
    Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(&this->Vertices, v6);
  v7 = this->Vertices.Pages[v6];
  v8 = this->Vertices.Size & 0xF;
  *(_QWORD *)&v7[v8].x = __PAIR64__(LODWORD(y), LODWORD(x));
  *(_DWORD *)&v7[v8].style = v10;
  ++this->Vertices.Size;
  return (unsigned int)(LODWORD(this->Vertices.Size) - 1);
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

void __fastcall Scaleform::Render::StrokerAA::calcBevelJoin(
        Scaleform::Render::StrokerAA *this,
        const Scaleform::Render::StrokeVertex *v1,
        const Scaleform::Render::StrokerAA::WidthsType *w,
        const Scaleform::Render::StrokerAA::JoinParamType *p,
        Scaleform::Render::StrokerTypes::LineJoinType lineJoin)
{
  float v9; // xmm6_4
  float xMiterThisR; // xmm11_4
  float yMiterThisR; // xmm12_4
  float x; // xmm3_4
  float y; // xmm4_4
  float v14; // xmm9_4
  float v15; // xmm10_4
  float dbSolidL; // xmm2_4
  float v17; // xmm6_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm7_4
  unsigned int v21; // er14
  unsigned int v22; // eax
  float dbTotalL; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  unsigned int v26; // er15
  unsigned int v27; // er12
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm2_4
  float v31; // xmm0_4
  unsigned int v32; // edi
  float xMiterThisL; // xmm11_4
  float yMiterThisL; // xmm12_4
  float v35; // xmm3_4
  float v36; // xmm4_4
  float v37; // xmm9_4
  float v38; // xmm10_4
  float dbSolidR; // xmm2_4
  float v40; // xmm6_4
  float v41; // xmm1_4
  float v42; // xmm0_4
  float v43; // xmm7_4
  unsigned int v44; // er14
  unsigned int v45; // eax
  float dbTotalR; // xmm1_4
  float v47; // xmm0_4
  float v48; // xmm0_4
  unsigned int v49; // er15
  unsigned int v50; // er12
  float v51; // xmm0_4
  float v52; // xmm1_4
  float v53; // xmm2_4
  float v54; // xmm0_4
  unsigned int v55; // edi
  unsigned int v3; // [rsp+30h] [rbp-B8h]
  unsigned int v3a; // [rsp+30h] [rbp-B8h]
  bool v58; // [rsp+108h] [rbp+20h]

  v9 = 0.0;
  v58 = *(_WORD *)&p->overlapPrev != 0;
  if ( p->rightTurnThis )
  {
    if ( *(_WORD *)&p->overlapPrev )
    {
      xMiterThisR = p->dx1TotalR + v1->x;
      yMiterThisR = p->dy1TotalR + v1->y;
    }
    else
    {
      xMiterThisR = p->xMiterThisR;
      yMiterThisR = p->yMiterThisR;
    }
    x = v1->x;
    y = v1->y;
    v14 = (float)((float)(xMiterThisR - x) * w->solidCoeffR) + x;
    v15 = (float)((float)(yMiterThisR - y) * w->solidCoeffR) + y;
    if ( lineJoin )
    {
      v22 = Scaleform::Render::StrokerAA::addVertex(this, x - p->dx1SolidL, y - p->dy1SolidL, this->StyleLeft, 1u);
      dbTotalL = p->dbTotalL;
      v21 = v22;
      v24 = p->dMiterThisL - dbTotalL;
      if ( v24 == 0.0 )
        v24 = *(float *)&FLOAT_1_0;
      v20 = (float)((float)((float)(p->dbSolidL + w->totalWidthL) - w->solidWidthL) - dbTotalL) / v24;
    }
    else
    {
      dbSolidL = p->dbSolidL;
      v17 = p->dSolidMiterL - dbSolidL;
      if ( v17 == 0.0 )
        v17 = *(float *)&FLOAT_1_0;
      v9 = (float)(fminf(v17, (float)((float)(w->totalLimitL - dbSolidL) - w->totalWidthL) + w->solidWidthL)
                 + (float)(w->solidLimitL - dbSolidL))
         / (float)(v17 + v17);
      v18 = p->dbTotalL;
      v19 = p->dMiterThisL - v18;
      if ( v19 == 0.0 )
        v19 = *(float *)&FLOAT_1_0;
      v20 = (float)((float)((float)((float)(w->solidLimitL - v18) + w->totalWidthL) - w->solidWidthL)
                  + (float)(w->totalLimitL - v18))
          / (float)(v19 + v19);
      v21 = Scaleform::Render::StrokerAA::addVertex(
              this,
              (float)((float)(p->xSolidMiterL - (float)(x - p->dx1SolidL)) * v9) + (float)(x - p->dx1SolidL),
              (float)((float)(p->ySolidMiterL - (float)(y - p->dy1SolidL)) * v9) + (float)(y - p->dy1SolidL),
              this->StyleLeft,
              1u);
    }
    if ( w->aaFlagL )
    {
      v25 = v1->y - p->dy1TotalL;
      v3 = Scaleform::Render::StrokerAA::addVertex(
             this,
             (float)((float)(p->xMiterThisL - (float)(v1->x - p->dx1TotalL)) * v20) + (float)(v1->x - p->dx1TotalL),
             (float)((float)(p->yMiterThisL - v25) * v20) + v25,
             this->StyleLeft,
             0);
    }
    else
    {
      v3 = v21;
    }
    if ( w->solidFlag )
      v26 = Scaleform::Render::StrokerAA::addVertex(this, v14, v15, this->StyleRight, 1u);
    else
      v26 = v21;
    if ( w->aaFlagR )
      v27 = Scaleform::Render::StrokerAA::addVertex(this, xMiterThisR, yMiterThisR, this->StyleRight, 0);
    else
      v27 = v26;
    if ( w->solidFlagL || w->solidFlagR )
    {
      Scaleform::Render::StrokerAA::addTriangle(this, this->SolidL, v26, v21);
      Scaleform::Render::StrokerAA::addTriangle(this, this->SolidL, this->SolidR, v26);
    }
    if ( w->aaFlagL )
    {
      Scaleform::Render::StrokerAA::addTriangle(this, this->TotalL, this->SolidL, v21);
      Scaleform::Render::StrokerAA::addTriangle(this, this->TotalL, v21, v3);
    }
    if ( w->aaFlagR )
    {
      Scaleform::Render::StrokerAA::addTriangle(this, this->SolidR, v27, v26);
      Scaleform::Render::StrokerAA::addTriangle(this, this->SolidR, this->TotalR, v27);
    }
    this->TotalL = v3;
    this->SolidL = v21;
    this->SolidR = v26;
    this->TotalR = v27;
    if ( v58 )
    {
      this->SolidR = Scaleform::Render::StrokerAA::addVertex(
                       this,
                       p->dx2SolidR + v1->x,
                       p->dy2SolidR + v1->y,
                       this->StyleRight,
                       1u);
      if ( w->aaFlagR )
        v26 = Scaleform::Render::StrokerAA::addVertex(
                this,
                p->dx2TotalR + v1->x,
                p->dy2TotalR + v1->y,
                this->StyleRight,
                0);
      this->TotalR = v26;
    }
    if ( (float)(w->totalWidthL - p->dbTotalL) > (float)((float)(this->Tolerance * 0.25) * 0.25) )
    {
      if ( w->solidFlag )
      {
        if ( lineJoin )
        {
          v30 = v1->y - p->dy2SolidL;
          v29 = v1->x - p->dx2SolidL;
        }
        else
        {
          v28 = v1->y - p->dy2SolidL;
          v29 = (float)((float)(p->xSolidMiterL - (float)(v1->x - p->dx2SolidL)) * v9) + (float)(v1->x - p->dx2SolidL);
          v30 = (float)((float)(p->ySolidMiterL - v28) * v9) + v28;
        }
        v21 = Scaleform::Render::StrokerAA::addVertex(this, v29, v30, this->StyleLeft, 1u);
      }
      if ( w->aaFlagL )
      {
        v31 = v1->y - p->dy2TotalL;
        v32 = Scaleform::Render::StrokerAA::addVertex(
                this,
                (float)((float)(p->xMiterThisL - (float)(v1->x - p->dx2TotalL)) * v20) + (float)(v1->x - p->dx2TotalL),
                (float)((float)(p->yMiterThisL - v31) * v20) + v31,
                this->StyleLeft,
                0);
      }
      else
      {
        v32 = v21;
      }
      if ( w->solidFlagL )
        Scaleform::Render::StrokerAA::addTriangle(this, this->SolidR, v21, this->SolidL);
      if ( w->aaFlagL )
      {
        Scaleform::Render::StrokerAA::addTriangle(this, this->SolidL, v21, this->TotalL);
        Scaleform::Render::StrokerAA::addTriangle(this, this->TotalL, v21, v32);
      }
      this->SolidL = v21;
      this->TotalL = v32;
    }
  }
  else
  {
    if ( *(_WORD *)&p->overlapPrev )
    {
      xMiterThisL = v1->x - p->dx1TotalL;
      yMiterThisL = v1->y - p->dy1TotalL;
    }
    else
    {
      xMiterThisL = p->xMiterThisL;
      yMiterThisL = p->yMiterThisL;
    }
    v35 = v1->x;
    v36 = v1->y;
    v37 = (float)((float)(xMiterThisL - v35) * w->solidCoeffL) + v35;
    v38 = (float)((float)(yMiterThisL - v36) * w->solidCoeffL) + v36;
    if ( lineJoin )
    {
      v45 = Scaleform::Render::StrokerAA::addVertex(this, v35 + p->dx1SolidR, v36 + p->dy1SolidR, this->StyleRight, 1u);
      dbTotalR = p->dbTotalR;
      v44 = v45;
      v47 = p->dMiterThisR - dbTotalR;
      if ( v47 == 0.0 )
        v47 = *(float *)&FLOAT_1_0;
      v43 = (float)((float)((float)(p->dbSolidR + w->totalWidthR) - w->solidWidthR) - dbTotalR) / v47;
    }
    else
    {
      dbSolidR = p->dbSolidR;
      v40 = p->dSolidMiterR - dbSolidR;
      if ( v40 == 0.0 )
        v40 = *(float *)&FLOAT_1_0;
      v9 = (float)(fminf(v40, (float)((float)(w->totalLimitR - dbSolidR) - w->totalWidthR) + w->solidWidthR)
                 + (float)(w->solidLimitR - dbSolidR))
         / (float)(v40 + v40);
      v41 = p->dbTotalR;
      v42 = p->dMiterThisR - v41;
      if ( v42 == 0.0 )
        v42 = *(float *)&FLOAT_1_0;
      v43 = (float)((float)((float)((float)(w->solidLimitR - v41) + w->totalWidthR) - w->solidWidthR)
                  + (float)(w->totalLimitR - v41))
          / (float)(v42 + v42);
      v44 = Scaleform::Render::StrokerAA::addVertex(
              this,
              (float)((float)(p->xSolidMiterR - (float)(v35 + p->dx1SolidR)) * v9) + (float)(v35 + p->dx1SolidR),
              (float)((float)(p->ySolidMiterR - (float)(v36 + p->dy1SolidR)) * v9) + (float)(v36 + p->dy1SolidR),
              this->StyleRight,
              1u);
    }
    if ( w->aaFlagR )
    {
      v48 = p->dy1TotalR + v1->y;
      v3a = Scaleform::Render::StrokerAA::addVertex(
              this,
              (float)((float)(p->xMiterThisR - (float)(p->dx1TotalR + v1->x)) * v43) + (float)(p->dx1TotalR + v1->x),
              (float)((float)(p->yMiterThisR - v48) * v43) + v48,
              this->StyleRight,
              0);
    }
    else
    {
      v3a = v44;
    }
    if ( w->solidFlag )
      v49 = Scaleform::Render::StrokerAA::addVertex(this, v37, v38, this->StyleLeft, 1u);
    else
      v49 = v44;
    if ( w->aaFlagL )
      v50 = Scaleform::Render::StrokerAA::addVertex(this, xMiterThisL, yMiterThisL, this->StyleLeft, 0);
    else
      v50 = v49;
    if ( w->solidFlagL || w->solidFlagR )
    {
      Scaleform::Render::StrokerAA::addTriangle(this, this->SolidR, v44, v49);
      Scaleform::Render::StrokerAA::addTriangle(this, this->SolidR, v49, this->SolidL);
    }
    if ( w->aaFlagR )
    {
      Scaleform::Render::StrokerAA::addTriangle(this, this->TotalR, v44, this->SolidR);
      Scaleform::Render::StrokerAA::addTriangle(this, this->TotalR, v3a, v44);
    }
    if ( w->aaFlagL )
    {
      Scaleform::Render::StrokerAA::addTriangle(this, this->SolidL, v49, v50);
      Scaleform::Render::StrokerAA::addTriangle(this, this->SolidL, v50, this->TotalL);
    }
    this->TotalR = v3a;
    this->SolidL = v49;
    this->TotalL = v50;
    this->SolidR = v44;
    if ( v58 )
    {
      this->SolidL = Scaleform::Render::StrokerAA::addVertex(
                       this,
                       v1->x - p->dx2SolidL,
                       v1->y - p->dy2SolidL,
                       this->StyleLeft,
                       1u);
      if ( w->aaFlagL )
        v49 = Scaleform::Render::StrokerAA::addVertex(
                this,
                v1->x - p->dx2TotalL,
                v1->y - p->dy2TotalL,
                this->StyleLeft,
                0);
      this->TotalL = v49;
    }
    if ( (float)(w->totalWidthR - p->dbTotalR) > (float)((float)(this->Tolerance * 0.25) * 0.25) )
    {
      if ( w->solidFlag )
      {
        if ( lineJoin )
        {
          v53 = p->dy2SolidR + v1->y;
          v52 = p->dx2SolidR + v1->x;
        }
        else
        {
          v51 = p->dy2SolidR + v1->y;
          v52 = (float)((float)(p->xSolidMiterR - (float)(p->dx2SolidR + v1->x)) * v9) + (float)(p->dx2SolidR + v1->x);
          v53 = (float)((float)(p->ySolidMiterR - v51) * v9) + v51;
        }
        v44 = Scaleform::Render::StrokerAA::addVertex(this, v52, v53, this->StyleRight, 1u);
      }
      if ( w->aaFlagR )
      {
        v54 = p->dy2TotalR + v1->y;
        v55 = Scaleform::Render::StrokerAA::addVertex(
                this,
                (float)((float)(p->xMiterThisR - (float)(p->dx2TotalR + v1->x)) * v43) + (float)(p->dx2TotalR + v1->x),
                (float)((float)(p->yMiterThisR - v54) * v43) + v54,
                this->StyleRight,
                0);
      }
      else
      {
        v55 = v44;
      }
      if ( w->solidFlagR )
        Scaleform::Render::StrokerAA::addTriangle(this, this->SolidL, this->SolidR, v44);
      if ( w->aaFlagR )
      {
        Scaleform::Render::StrokerAA::addTriangle(this, this->SolidR, this->TotalR, v44);
        Scaleform::Render::StrokerAA::addTriangle(this, this->TotalR, v55, v44);
      }
      this->SolidR = v44;
      this->TotalR = v55;
    }
  }
}

void __fastcall Scaleform::Render::StrokerAA::calcButtCap(
        Scaleform::Render::StrokerAA *this,
        const Scaleform::Render::StrokeVertex *v0,
        const Scaleform::Render::StrokeVertex *v1,
        float len,
        const Scaleform::Render::StrokerAA::WidthsType *w,
        bool endFlag)
{
  const Scaleform::Render::StrokerAA::WidthsType *p_solidWidthR; // rax
  float solidWidthL; // xmm0_4
  float totalWidthR; // xmm1_4
  float totalWidthL; // xmm4_4
  unsigned int v13; // er15
  float y; // xmm2_4
  unsigned int v15; // ebp
  unsigned int v16; // er13
  unsigned int v17; // er12
  float v18; // xmm9_4
  float v19; // xmm8_4
  float v20; // xmm12_4
  float v21; // xmm13_4
  float v22; // xmm10_4
  float v23; // xmm11_4
  float v24; // xmm15_4
  float v25; // xmm9_4
  float v26; // xmm14_4
  float v27; // xmm8_4
  float v28; // xmm6_4
  float v29; // xmm7_4
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int TotalL; // ecx
  unsigned int SolidL; // ecx
  bool aaFlagL; // [rsp+118h] [rbp+20h]
  bool endFlaga; // [rsp+128h] [rbp+30h]

  p_solidWidthR = (const Scaleform::Render::StrokerAA::WidthsType *)&w->solidWidthR;
  if ( !endFlag )
    p_solidWidthR = w;
  if ( endFlag )
  {
    solidWidthL = w->solidWidthL;
    totalWidthR = w->totalWidthR;
    totalWidthL = w->totalWidthL;
  }
  else
  {
    solidWidthL = w->solidWidthR;
    totalWidthR = w->totalWidthL;
    totalWidthL = w->totalWidthR;
  }
  v13 = 0;
  y = v0->y;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = (float)(v0->x - v1->x) / len;
  v19 = (float)(v1->y - y) / len;
  v20 = p_solidWidthR->solidWidthL * v18;
  v21 = p_solidWidthR->solidWidthL * v19;
  v22 = v19 * solidWidthL;
  v23 = v18 * solidWidthL;
  v24 = v18 * totalWidthR;
  v25 = v18 * totalWidthL;
  v26 = v19 * totalWidthR;
  v27 = v19 * totalWidthL;
  v28 = (float)((float)(v25 - v23) + (float)(v24 - v20)) * 0.5;
  v29 = (float)((float)(v22 - v27) + (float)(v21 - v26)) * 0.5;
  if ( endFlag )
  {
    endFlaga = w->aaFlagR;
    aaFlagL = w->aaFlagL;
  }
  else
  {
    endFlaga = w->aaFlagL;
    aaFlagL = w->aaFlagR;
  }
  if ( w->aaFlagL || w->aaFlagR )
  {
    v13 = Scaleform::Render::StrokerAA::addVertex(
            this,
            (float)(v0->x - v21) + v28,
            (float)(y - v20) + v29,
            this->StyleLeft,
            0);
    if ( w->solidFlag )
      v15 = Scaleform::Render::StrokerAA::addVertex(
              this,
              (float)(v22 + v0->x) + v28,
              (float)(v23 + v0->y) + v29,
              this->StyleRight,
              0);
    else
      v15 = v13;
    if ( endFlaga )
      v16 = Scaleform::Render::StrokerAA::addVertex(
              this,
              (float)(v0->x - v26) + v28,
              (float)(v0->y - v24) + v29,
              this->StyleLeft,
              0);
    else
      v16 = v13;
    if ( aaFlagL )
      v17 = Scaleform::Render::StrokerAA::addVertex(
              this,
              (float)(v27 + v0->x) + v28,
              (float)(v25 + v0->y) + v29,
              this->StyleRight,
              0);
    else
      v17 = v15;
  }
  if ( endFlag )
  {
    TotalL = this->TotalL;
    this->TotalL = this->TotalR;
    this->TotalR = TotalL;
    SolidL = this->SolidL;
    this->SolidL = this->SolidR;
    this->SolidR = SolidL;
  }
  else
  {
    v30 = Scaleform::Render::StrokerAA::addVertex(this, v0->x - v21, v0->y - v20, this->StyleLeft, 1u);
    this->SolidL = v30;
    if ( w->aaFlagL )
      v30 = Scaleform::Render::StrokerAA::addVertex(this, v0->x - v26, v0->y - v24, this->StyleLeft, 0);
    this->TotalL = v30;
    if ( w->solidFlag )
      v31 = Scaleform::Render::StrokerAA::addVertex(this, v22 + v0->x, v23 + v0->y, this->StyleRight, 1u);
    else
      v31 = this->SolidL;
    this->SolidR = v31;
    if ( w->aaFlagR )
      v31 = Scaleform::Render::StrokerAA::addVertex(this, v27 + v0->x, v25 + v0->y, this->StyleRight, 0);
    this->TotalR = v31;
  }
  if ( (w->aaFlagL || w->aaFlagR) && (w->solidFlagL || w->solidFlagR) )
  {
    Scaleform::Render::StrokerAA::addTriangle(this, v13, v15, this->SolidL);
    Scaleform::Render::StrokerAA::addTriangle(this, this->SolidL, v15, this->SolidR);
  }
  if ( endFlaga )
  {
    Scaleform::Render::StrokerAA::addTriangle(this, this->SolidL, this->TotalL, v16);
    Scaleform::Render::StrokerAA::addTriangle(this, this->SolidL, v16, v13);
  }
  if ( aaFlagL )
  {
    Scaleform::Render::StrokerAA::addTriangle(this, this->SolidR, v17, this->TotalR);
    Scaleform::Render::StrokerAA::addTriangle(this, this->SolidR, v15, v17);
  }
}

void __fastcall Scaleform::Render::StrokerAA::calcButtJoin(
        Scaleform::Render::StrokerAA *this,
        const Scaleform::Render::StrokeVertex *v0,
        const Scaleform::Render::StrokeVertex *v1,
        float len,
        const Scaleform::Render::StrokerAA::WidthsType *w)
{
  float v7; // xmm2_4
  float v8; // xmm4_4
  float solidWidthR; // xmm9_4
  float totalWidthR; // xmm10_4
  float totalWidthL; // xmm12_4
  float v12; // xmm7_4
  float v13; // xmm11_4
  float v14; // xmm8_4
  float v15; // xmm9_4
  float v16; // xmm12_4
  float v17; // xmm10_4
  unsigned int v18; // er15
  unsigned int v19; // er13
  unsigned int v20; // ebp
  unsigned int v21; // er12
  unsigned __int64 v22; // r14
  __int64 v23; // rdx
  Scaleform::Render::StrokerAA::TriangleType *v24; // rax
  unsigned __int64 v25; // r14
  __int64 v26; // rdx
  Scaleform::Render::StrokerAA::TriangleType *v27; // rax
  __int64 v28; // [rsp+30h] [rbp-A8h]
  __int64 v29; // [rsp+30h] [rbp-A8h]

  v7 = (float)(v0->x - v1->x) / len;
  v8 = (float)(v1->y - v0->y) / len;
  solidWidthR = w->solidWidthR;
  totalWidthR = w->totalWidthR;
  totalWidthL = w->totalWidthL;
  v12 = solidWidthR * v7;
  v13 = totalWidthL * v7;
  v14 = totalWidthR * v7;
  v15 = solidWidthR * v8;
  v16 = totalWidthL * v8;
  v17 = totalWidthR * v8;
  v18 = Scaleform::Render::StrokerAA::addVertex(
          this,
          v1->x - (float)(w->solidWidthL * v8),
          v1->y - (float)(w->solidWidthL * v7),
          this->StyleLeft,
          1u);
  if ( w->aaFlagL )
    v19 = Scaleform::Render::StrokerAA::addVertex(this, v1->x - v16, v1->y - v13, this->StyleLeft, 0);
  else
    v19 = v18;
  if ( w->solidFlag )
    v20 = Scaleform::Render::StrokerAA::addVertex(this, v15 + v1->x, v12 + v1->y, this->StyleRight, 1u);
  else
    v20 = v18;
  if ( w->aaFlagR )
    v21 = Scaleform::Render::StrokerAA::addVertex(this, v17 + v1->x, v14 + v1->y, this->StyleRight, 0);
  else
    v21 = v20;
  if ( w->solidFlagL || w->solidFlagR )
  {
    v22 = this->Triangles.Size >> 4;
    LODWORD(v28) = this->SolidL;
    HIDWORD(v28) = v20;
    if ( v22 >= this->Triangles.NumPages )
      Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(
        (Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> *)&this->Triangles,
        v22);
    v23 = this->Triangles.Size & 0xF;
    v24 = this->Triangles.Pages[v22];
    *(_QWORD *)&v24[v23].v1 = v28;
    v24[v23].v3 = v18;
    v25 = ++this->Triangles.Size >> 4;
    v29 = *(_QWORD *)&this->SolidL;
    if ( v25 >= this->Triangles.NumPages )
      Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(
        (Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> *)&this->Triangles,
        v25);
    v26 = this->Triangles.Size & 0xF;
    v27 = this->Triangles.Pages[v25];
    *(_QWORD *)&v27[v26].v1 = v29;
    v27[v26].v3 = v20;
    ++this->Triangles.Size;
  }
  if ( w->aaFlagL )
  {
    Scaleform::Render::StrokerAA::addTriangle(this, this->TotalL, this->SolidL, v18);
    Scaleform::Render::StrokerAA::addTriangle(this, this->TotalL, v18, v19);
  }
  if ( w->aaFlagR )
  {
    Scaleform::Render::StrokerAA::addTriangle(this, this->SolidR, v21, v20);
    Scaleform::Render::StrokerAA::addTriangle(this, this->SolidR, this->TotalR, v21);
  }
  this->SolidR = v20;
  this->SolidL = v18;
  this->TotalL = v19;
  this->TotalR = v21;
}

void __fastcall Scaleform::Render::StrokerAA::calcJoinParam(
        Scaleform::Render::StrokerAA *this,
        const Scaleform::Render::StrokeVertex *v1,
        const Scaleform::Render::StrokeVertex *v2,
        const Scaleform::Render::StrokeVertex *v3,
        const Scaleform::Render::StrokerAA::WidthsType *w,
        Scaleform::Render::StrokerAA::JoinParamType *p)
{
  float xMiterThisL; // eax
  float v10; // xmm9_4
  float v11; // xmm11_4
  float v12; // xmm9_4
  float v13; // xmm11_4
  float dMiterThisL; // eax
  float *p_xMiterNextL; // r13
  float *p_yMiterNextL; // r15
  float *p_xMiterNextR; // r12
  float *p_yMiterNextR; // r14
  float epsilon; // xmm13_4
  float dx2TotalR; // xmm8_4
  float dy2TotalR; // xmm7_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm6_4
  float v25; // xmm0_4
  float v26; // xmm0_4
  float dx2TotalL; // xmm9_4
  float dy2TotalL; // xmm8_4
  float v29; // xmm0_4
  float v30; // xmm0_4
  float v31; // xmm6_4
  float v32; // xmm0_4
  float v33; // xmm0_4
  bool v34; // dl
  bool rightSideCalc; // cl
  float x; // xmm4_4
  float v37; // xmm6_4
  float v38; // xmm6_4
  float y; // xmm3_4
  float v40; // xmm5_4
  float v41; // xmm7_4
  float v42; // xmm8_4
  float v43; // xmm11_4
  float v44; // xmm1_4
  float v45; // xmm3_4
  float v46; // xmm1_4
  float v47; // xmm0_4
  float v48; // xmm1_4
  float v49; // xmm3_4
  float v50; // xmm1_4
  float v51; // xmm3_4
  bool v52; // zf
  bool badMiterThisL; // al
  float yMiterThisL; // xmm0_4
  float xMiterThisR; // xmm2_4
  float yMiterThisR; // xmm1_4
  float v57; // xmm0_4
  char pa; // [rsp+128h] [rbp+30h]

  p->dx1SolidL = p->dx2SolidL;
  p->dy1SolidL = p->dy2SolidL;
  p->dx1SolidR = p->dx2SolidR;
  p->dy1SolidR = p->dy2SolidR;
  p->dx1TotalL = p->dx2TotalL;
  p->dy1TotalL = p->dy2TotalL;
  p->dx1TotalR = p->dx2TotalR;
  p->dy1TotalR = p->dy2TotalR;
  p->dx2SolidL = p->dx3SolidL;
  p->dy2SolidL = p->dy3SolidL;
  p->dx2SolidR = p->dx3SolidR;
  p->dy2SolidR = p->dy3SolidR;
  p->dx2TotalL = p->dx3TotalL;
  p->dy2TotalL = p->dy3TotalL;
  p->dx2TotalR = p->dx3TotalR;
  p->dy2TotalR = p->dy3TotalR;
  xMiterThisL = p->xMiterThisL;
  v10 = (float)(v3->y - v2->y) / v2->dist;
  v11 = (float)(v2->x - v3->x) / v2->dist;
  p->dx3SolidL = v10 * w->solidWidthL;
  p->dy3SolidL = v11 * w->solidWidthL;
  p->dx3SolidR = v10 * w->solidWidthR;
  p->dy3SolidR = v11 * w->solidWidthR;
  p->dx3TotalL = v10 * w->totalWidthL;
  p->dy3TotalL = v11 * w->totalWidthL;
  v12 = v10 * w->totalWidthR;
  p->dx3TotalR = v12;
  v13 = v11 * w->totalWidthR;
  p->xMiterPrevL = xMiterThisL;
  p->yMiterPrevL = p->yMiterThisL;
  p->xMiterPrevR = p->xMiterThisR;
  p->yMiterPrevR = p->yMiterThisR;
  dMiterThisL = p->dMiterThisL;
  p->dy3TotalR = v13;
  p_xMiterNextL = &p->xMiterNextL;
  p->dMiterPrevL = dMiterThisL;
  p_yMiterNextL = &p->yMiterNextL;
  p_xMiterNextR = &p->xMiterNextR;
  p->dMiterPrevR = p->dMiterThisR;
  p_yMiterNextR = &p->yMiterNextR;
  p->xMiterThisL = p->xMiterNextL;
  p->yMiterThisL = p->yMiterNextL;
  p->xMiterThisR = p->xMiterNextR;
  p->yMiterThisR = p->yMiterNextR;
  p->dMiterThisL = p->dMiterNextL;
  p->dMiterThisR = p->dMiterNextR;
  p->badMiterPrevL = p->badMiterThisL;
  p->badMiterPrevR = p->badMiterThisR;
  p->badMiterThisL = p->badMiterNextL;
  p->badMiterThisR = p->badMiterNextR;
  pa = 1;
  epsilon = (float)(v3->dist + v2->dist) * this->IntersectionEpsilon;
  if ( w->rightSideCalc )
  {
    dx2TotalR = p->dx2TotalR;
    dy2TotalR = p->dy2TotalR;
    v22 = sqrtf(
            (float)((float)((float)(dy2TotalR + p->dy1TotalR) * 0.5) * (float)((float)(dy2TotalR + p->dy1TotalR) * 0.5))
          + (float)((float)((float)(dx2TotalR + p->dx1TotalR) * 0.5) * (float)((float)(dx2TotalR + p->dx1TotalR) * 0.5)));
    p->dbTotalR = v22;
    p->dbSolidR = v22 * w->solidCoeffR;
    v23 = v22 * w->widthCoeff;
    p->dbTotalL = v23;
    p->dbSolidL = v23 * w->solidCoeffL;
    if ( !Scaleform::Render::Math2D::Intersection(
            dx2TotalR + v1->x,
            dy2TotalR + v1->y,
            dx2TotalR + v2->x,
            dy2TotalR + v2->y,
            v12 + v2->x,
            v13 + v2->y,
            v12 + v3->x,
            v13 + v3->y,
            &p->xMiterNextR,
            &p->yMiterNextR,
            epsilon) )
      goto LABEL_7;
    v24 = *p_xMiterNextR;
    v25 = sqrtf(
            (float)((float)(*p_yMiterNextR - v2->y) * (float)(*p_yMiterNextR - v2->y))
          + (float)((float)(*p_xMiterNextR - v2->x) * (float)(*p_xMiterNextR - v2->x)));
    p->dMiterNextR = v25;
    p->dMiterNextL = v25 * w->widthCoeff;
    v26 = *p_yMiterNextR;
    *p_xMiterNextL = v2->x - (float)((float)(v24 - v2->x) * w->widthCoeff);
    *p_yMiterNextL = v2->y - (float)((float)(v26 - v2->y) * w->widthCoeff);
  }
  else
  {
    dx2TotalL = p->dx2TotalL;
    dy2TotalL = p->dy2TotalL;
    v29 = sqrtf(
            (float)((float)((float)(dy2TotalL + p->dy1TotalL) * 0.5) * (float)((float)(dy2TotalL + p->dy1TotalL) * 0.5))
          + (float)((float)((float)(dx2TotalL + p->dx1TotalL) * 0.5) * (float)((float)(dx2TotalL + p->dx1TotalL) * 0.5)));
    p->dbTotalL = v29;
    p->dbSolidL = v29 * w->solidCoeffL;
    v30 = v29 * w->widthCoeff;
    p->dbTotalR = v30;
    p->dbSolidR = v30 * w->solidCoeffR;
    if ( !Scaleform::Render::Math2D::Intersection(
            v1->x - dx2TotalL,
            v1->y - dy2TotalL,
            v2->x - dx2TotalL,
            v2->y - dy2TotalL,
            v2->x - p->dx3TotalL,
            v2->y - p->dy3TotalL,
            v3->x - p->dx3TotalL,
            v3->y - p->dy3TotalL,
            &p->xMiterNextL,
            &p->yMiterNextL,
            epsilon) )
      goto LABEL_7;
    v31 = *p_xMiterNextL;
    v32 = sqrtf(
            (float)((float)(*p_yMiterNextL - v2->y) * (float)(*p_yMiterNextL - v2->y))
          + (float)((float)(*p_xMiterNextL - v2->x) * (float)(*p_xMiterNextL - v2->x)));
    p->dMiterNextL = v32;
    p->dMiterNextR = v32 * w->widthCoeff;
    v33 = *p_yMiterNextL;
    *p_xMiterNextR = v2->x - (float)((float)(v31 - v2->x) * w->widthCoeff);
    *p_yMiterNextR = v2->y - (float)((float)(v33 - v2->y) * w->widthCoeff);
  }
  pa = 0;
  *(_WORD *)&p->badMiterNextL = 0;
LABEL_7:
  p->rightTurnPrev = p->rightTurnThis;
  p->rightTurnThis = p->rightTurnNext;
  v34 = (float)((float)((float)(v3->x - v2->x) * (float)(v2->y - v1->y))
              - (float)((float)(v2->x - v1->x) * (float)(v3->y - v2->y))) > 0.0;
  p->rightTurnNext = v34;
  if ( pa )
  {
    rightSideCalc = w->rightSideCalc;
    x = v2->x;
    v37 = v2->x;
    if ( rightSideCalc )
      v38 = v37 + p->dx2TotalR;
    else
      v38 = v37 - p->dx2TotalL;
    y = v2->y;
    if ( rightSideCalc )
      v40 = y + p->dy2TotalR;
    else
      v40 = y - p->dy2TotalL;
    v41 = v3->y;
    v42 = v3->x;
    v43 = v1->y;
    if ( (float)((float)((float)(y - v43) * (float)(v38 - x)) - (float)((float)(x - v1->x) * (float)(v40 - y))) < 0.0 == (float)((float)((float)(v41 - y) * (float)(v38 - v42)) - (float)((float)(v42 - x) * (float)(v40 - v41))) < 0.0 )
    {
      v44 = p->dy2TotalR;
      *p_xMiterNextL = x - p->dx2TotalL;
      *p_yMiterNextL = v2->y - p->dy2TotalL;
      p->dMiterNextL = w->totalLimitL;
      *p_xMiterNextR = v2->x + p->dx2TotalR;
      *p_yMiterNextR = v44 + v2->y;
      p->dMiterNextR = w->totalLimitR;
      *(_WORD *)&p->badMiterNextL = 0;
    }
    else
    {
      v45 = (float)(y - (float)((float)(v41 + v43) * 0.5)) * 1024.0;
      v46 = (float)(x - (float)((float)(v42 + v1->x) * 0.5)) * 1024.0;
      if ( v34 )
      {
        v47 = p->dy2TotalR;
        *p_xMiterNextR = x + p->dx2TotalR;
        *p_yMiterNextR = v47 + v2->y;
        p->dMiterNextR = w->totalLimitR;
        p->badMiterNextR = 1;
        v48 = v46 + v2->x;
        *p_xMiterNextL = v48;
        v49 = v45 + v2->y;
        *p_yMiterNextL = v49;
        p->dMiterNextL = sqrtf(
                           (float)((float)(v49 - v2->y) * (float)(v49 - v2->y))
                         + (float)((float)(v48 - v2->x) * (float)(v48 - v2->x)));
        p->badMiterNextL = 0;
      }
      else
      {
        *p_xMiterNextL = x - p->dx2TotalL;
        *p_yMiterNextL = v2->y - p->dy2TotalL;
        p->dMiterNextL = w->totalLimitL;
        p->badMiterNextL = 1;
        v50 = v46 + v2->x;
        *p_xMiterNextR = v50;
        v51 = v45 + v2->y;
        *p_yMiterNextR = v51;
        p->dMiterNextR = sqrtf(
                           (float)((float)(v51 - v2->y) * (float)(v51 - v2->y))
                         + (float)((float)(v50 - v2->x) * (float)(v50 - v2->x)));
        p->badMiterNextR = 0;
      }
    }
  }
  v52 = !p->rightTurnThis;
  p->overlapPrev = p->overlapThis;
  if ( v52 )
    badMiterThisL = p->badMiterThisL;
  else
    badMiterThisL = p->badMiterThisR;
  p->overlapThis = badMiterThisL;
  if ( !badMiterThisL )
    p->overlapThis = Scaleform::Render::StrokerAA::MitersIntersect(
                       p->xMiterThisL,
                       p->yMiterThisL,
                       p->xMiterThisR,
                       p->yMiterThisR,
                       *p_xMiterNextL,
                       *p_yMiterNextL,
                       *p_xMiterNextR,
                       *p_yMiterNextR,
                       epsilon);
  yMiterThisL = p->yMiterThisL;
  xMiterThisR = p->xMiterThisR;
  p->xSolidMiterL = (float)((float)(p->xMiterThisL - v1->x) * w->solidCoeffL) + v1->x;
  yMiterThisR = p->yMiterThisR;
  p->ySolidMiterL = (float)((float)(yMiterThisL - v1->y) * w->solidCoeffL) + v1->y;
  v57 = p->dMiterThisL;
  p->xSolidMiterR = (float)((float)(xMiterThisR - v1->x) * w->solidCoeffR) + v1->x;
  p->ySolidMiterR = (float)((float)(yMiterThisR - v1->y) * w->solidCoeffR) + v1->y;
  p->dSolidMiterL = v57 * w->solidCoeffL;
  p->dSolidMiterR = w->solidCoeffR * p->dMiterThisR;
}

void __fastcall Scaleform::Render::StrokerAA::calcMiterJoin(
        Scaleform::Render::StrokerAA *this,
        const Scaleform::Render::StrokeVertex *v1,
        const Scaleform::Render::StrokerAA::WidthsType *w,
        const Scaleform::Render::StrokerAA::JoinParamType *p,
        Scaleform::Render::StrokerTypes::LineJoinType lineJoin)
{
  bool v9; // r15
  float x; // xmm3_4
  float y; // xmm4_4
  float xMiterThisL; // xmm8_4
  float yMiterThisL; // xmm9_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  Scaleform::Render::StrokerTypes::LineJoinType v16; // eax
  float xMiterThisR; // xmm10_4
  float yMiterThisR; // xmm11_4
  float v19; // xmm6_4
  float v20; // xmm7_4
  float v21; // xmm2_4
  float v22; // xmm3_4
  unsigned int v23; // er12
  unsigned int v24; // er14
  unsigned __int64 v25; // r13
  __int64 v26; // rdx
  Scaleform::Render::StrokerAA::TriangleType *v27; // rax
  unsigned __int64 v28; // r13
  __int64 v29; // rdx
  Scaleform::Render::StrokerAA::TriangleType *v30; // rax
  unsigned int v2; // [rsp+30h] [rbp-A8h]
  unsigned int v3; // [rsp+34h] [rbp-A4h]
  __int64 v33; // [rsp+38h] [rbp-A0h]
  __int64 v34; // [rsp+38h] [rbp-A0h]

  v9 = *(_WORD *)&p->overlapPrev != 0;
  if ( p->rightTurnThis )
  {
    x = v1->x;
    y = v1->y;
    xMiterThisL = p->xMiterThisL;
    yMiterThisL = p->yMiterThisL;
    v14 = (float)((float)(xMiterThisL - x) * w->solidCoeffL) + x;
    v15 = (float)((float)(yMiterThisL - y) * w->solidCoeffL) + y;
    if ( p->dMiterThisL > w->totalLimitL )
    {
      v16 = lineJoin;
      if ( (unsigned int)lineJoin <= MiterBevelJoin )
      {
LABEL_4:
        Scaleform::Render::StrokerAA::calcBevelJoin(this, v1, w, p, v16);
        return;
      }
    }
    if ( *(_WORD *)&p->overlapPrev )
    {
      xMiterThisR = x + p->dx1TotalR;
      yMiterThisR = y + p->dy1TotalR;
    }
    else
    {
      xMiterThisR = p->xMiterThisR;
      yMiterThisR = p->yMiterThisR;
    }
    v19 = (float)((float)(xMiterThisR - x) * w->solidCoeffR) + x;
    v20 = (float)((float)(yMiterThisR - y) * w->solidCoeffR) + y;
  }
  else
  {
    v21 = v1->x;
    v22 = v1->y;
    xMiterThisR = p->xMiterThisR;
    yMiterThisR = p->yMiterThisR;
    v19 = (float)((float)(xMiterThisR - v21) * w->solidCoeffR) + v21;
    v20 = (float)((float)(yMiterThisR - v22) * w->solidCoeffR) + v22;
    if ( p->dMiterThisR > w->totalLimitR )
    {
      v16 = lineJoin;
      if ( (unsigned int)lineJoin <= MiterBevelJoin )
        goto LABEL_4;
    }
    if ( *(_WORD *)&p->overlapPrev )
    {
      xMiterThisL = v21 - p->dx1TotalL;
      yMiterThisL = v22 - p->dy1TotalL;
    }
    else
    {
      xMiterThisL = p->xMiterThisL;
      yMiterThisL = p->yMiterThisL;
    }
    v14 = (float)((float)(xMiterThisL - v21) * w->solidCoeffL) + v21;
    v15 = (float)((float)(yMiterThisL - v22) * w->solidCoeffL) + v22;
  }
  v23 = Scaleform::Render::StrokerAA::addVertex(this, v14, v15, this->StyleLeft, 1u);
  if ( w->aaFlagL )
    v3 = Scaleform::Render::StrokerAA::addVertex(this, xMiterThisL, yMiterThisL, this->StyleLeft, 0);
  else
    v3 = v23;
  if ( w->solidFlag )
    v24 = Scaleform::Render::StrokerAA::addVertex(this, v19, v20, this->StyleRight, 1u);
  else
    v24 = v23;
  if ( w->aaFlagR )
    v2 = Scaleform::Render::StrokerAA::addVertex(this, xMiterThisR, yMiterThisR, this->StyleRight, 0);
  else
    v2 = v24;
  if ( w->solidFlagL || w->solidFlagR )
  {
    v25 = this->Triangles.Size >> 4;
    LODWORD(v33) = this->SolidL;
    HIDWORD(v33) = v24;
    if ( v25 >= this->Triangles.NumPages )
      Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(
        (Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> *)&this->Triangles,
        v25);
    v26 = this->Triangles.Size & 0xF;
    v27 = this->Triangles.Pages[v25];
    *(_QWORD *)&v27[v26].v1 = v33;
    v27[v26].v3 = v23;
    v28 = ++this->Triangles.Size >> 4;
    v34 = *(_QWORD *)&this->SolidL;
    if ( v28 >= this->Triangles.NumPages )
      Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(
        (Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> *)&this->Triangles,
        v28);
    v29 = this->Triangles.Size & 0xF;
    v30 = this->Triangles.Pages[v28];
    *(_QWORD *)&v30[v29].v1 = v34;
    v30[v29].v3 = v24;
    ++this->Triangles.Size;
  }
  if ( w->aaFlagL )
  {
    Scaleform::Render::StrokerAA::addTriangle(this, this->TotalL, this->SolidL, v23);
    Scaleform::Render::StrokerAA::addTriangle(this, this->TotalL, v23, v3);
  }
  if ( w->aaFlagR )
  {
    Scaleform::Render::StrokerAA::addTriangle(this, this->SolidR, v2, v24);
    Scaleform::Render::StrokerAA::addTriangle(this, this->SolidR, this->TotalR, v2);
  }
  this->TotalR = v2;
  this->TotalL = v3;
  this->SolidL = v23;
  this->SolidR = v24;
  if ( v9 )
  {
    if ( p->rightTurnThis )
    {
      this->SolidR = Scaleform::Render::StrokerAA::addVertex(
                       this,
                       p->dx2SolidR + v1->x,
                       p->dy2SolidR + v1->y,
                       this->StyleRight,
                       1u);
      if ( w->aaFlagR )
        v24 = Scaleform::Render::StrokerAA::addVertex(
                this,
                p->dx2TotalR + v1->x,
                p->dy2TotalR + v1->y,
                this->StyleRight,
                0);
      this->TotalR = v24;
    }
    else
    {
      this->SolidL = Scaleform::Render::StrokerAA::addVertex(
                       this,
                       v1->x - p->dx2SolidL,
                       v1->y - p->dy2SolidL,
                       this->StyleLeft,
                       1u);
      if ( w->aaFlagL )
        v23 = Scaleform::Render::StrokerAA::addVertex(
                this,
                v1->x - p->dx2TotalL,
                v1->y - p->dy2TotalL,
                this->StyleLeft,
                0);
      this->TotalL = v23;
    }
  }
}

void __fastcall Scaleform::Render::StrokerAA::calcRoundCap(
        Scaleform::Render::StrokerAA *this,
        const Scaleform::Render::StrokeVertex *v0,
        const Scaleform::Render::StrokeVertex *v1,
        float len,
        const Scaleform::Render::StrokerAA::WidthsType *w,
        bool endFlag)
{
  bool v8; // r12
  const Scaleform::Render::StrokerAA::WidthsType *p_solidWidthR; // rax
  float solidWidthL; // xmm0_4
  float totalWidthR; // xmm1_4
  float totalWidthL; // xmm2_4
  float x; // xmm8_4
  float y; // xmm7_4
  float v16; // xmm14_4
  float v17; // xmm13_4
  float v18; // xmm6_4
  float v19; // xmm10_4
  float v20; // xmm9_4
  float v21; // xmm3_4
  float v22; // xmm15_4
  float v23; // xmm0_4
  float v24; // xmm11_4
  float v25; // xmm13_4
  float v26; // xmm14_4
  float v27; // xmm12_4
  int v28; // er14
  float v29; // xmm12_4
  unsigned int TotalR; // eax
  float v31; // xmm13_4
  float v32; // xmm9_4
  float v33; // xmm13_4
  float v34; // xmm14_4
  float v35; // xmm15_4
  const Scaleform::Render::StrokerAA::WidthsType *v36; // r13
  float v37; // xmm6_4
  float v38; // xmm0_4
  float v39; // xmm2_4
  float v40; // xmm8_4
  float v41; // xmm7_4
  float v42; // xmm1_4
  unsigned int StyleLeft; // eax
  unsigned __int64 v44; // r14
  Scaleform::Render::StrokerAA::VertexType *v45; // rdx
  __int64 v46; // r8
  int SolidL; // er14
  unsigned int v48; // er15
  unsigned int StyleRight; // eax
  unsigned __int64 v50; // r15
  Scaleform::Render::StrokerAA::VertexType *v51; // rdx
  __int64 v52; // r8
  unsigned int SolidR; // er13
  unsigned __int64 v54; // r12
  __int64 v55; // rdx
  Scaleform::Render::StrokerAA::TriangleType *v56; // rax
  unsigned __int64 v57; // r12
  __int64 v58; // rdx
  Scaleform::Render::StrokerAA::TriangleType *v59; // rax
  unsigned __int64 v60; // r12
  __int64 v61; // rdx
  Scaleform::Render::StrokerAA::TriangleType *v62; // rax
  unsigned __int64 v63; // r12
  __int64 v64; // rdx
  Scaleform::Render::StrokerAA::TriangleType *v65; // rax
  unsigned __int64 v66; // r12
  __int64 v67; // rdx
  Scaleform::Render::StrokerAA::TriangleType *v68; // rax
  unsigned __int64 v69; // r12
  __int64 v70; // rdx
  Scaleform::Render::StrokerAA::TriangleType *v71; // rax
  int v72; // [rsp+40h] [rbp-C8h]
  int v73; // [rsp+4Ch] [rbp-BCh]
  __int64 v74; // [rsp+50h] [rbp-B8h]
  __int64 v75; // [rsp+60h] [rbp-A8h]
  __int64 v76; // [rsp+70h] [rbp-98h]
  __int64 v77; // [rsp+80h] [rbp-88h]
  __int64 v78; // [rsp+90h] [rbp-78h]
  __int64 v79; // [rsp+A0h] [rbp-68h]
  float v80; // [rsp+1A0h] [rbp+98h]
  float v81; // [rsp+1A0h] [rbp+98h]
  const Scaleform::Render::StrokerAA::WidthsType *wa; // [rsp+1A8h] [rbp+A0h]

  v8 = endFlag;
  p_solidWidthR = (const Scaleform::Render::StrokerAA::WidthsType *)&w->solidWidthR;
  if ( !endFlag )
    p_solidWidthR = w;
  if ( endFlag )
  {
    solidWidthL = w->solidWidthL;
    totalWidthR = w->totalWidthR;
    totalWidthL = w->totalWidthL;
  }
  else
  {
    solidWidthL = w->solidWidthR;
    totalWidthR = w->totalWidthL;
    totalWidthL = w->totalWidthR;
  }
  x = v0->x;
  y = v0->y;
  v16 = (float)(v0->x - v1->x) / len;
  v17 = (float)(v1->y - y) / len;
  v18 = p_solidWidthR->solidWidthL * v16;
  v19 = v16 * totalWidthR;
  v20 = v17 * totalWidthR;
  v21 = v16 * solidWidthL;
  v22 = v17 * solidWidthL;
  LODWORD(v23) = COERCE_UNSIGNED_INT(v16 * totalWidthR) ^ _xmm;
  v24 = p_solidWidthR->solidWidthL * v17;
  v25 = v17 * totalWidthL;
  v26 = v16 * totalWidthL;
  v27 = atan2f(v23, COERCE_FLOAT(LODWORD(v20) ^ _xmm));
  v80 = (float)(v27 + 3.1415927) - v27;
  v28 = (int)(float)(v80 / (float)(acosf(w->totalWidth / (float)((float)(this->Tolerance * 0.25) + w->totalWidth)) * 2.0))
      + 1;
  v81 = v80 / (float)v28;
  v29 = v27 + v81;
  if ( endFlag )
  {
    this->SolidL = this->SolidR;
    TotalR = this->TotalR;
  }
  else
  {
    TotalR = Scaleform::Render::StrokerAA::addVertex(this, x - v24, y - v18, this->StyleLeft, 1u);
    this->SolidR = TotalR;
    this->SolidL = TotalR;
    if ( w->aaFlagL || w->aaFlagR )
      TotalR = Scaleform::Render::StrokerAA::addVertex(this, v0->x - v20, v0->y - v19, this->StyleLeft, 0);
    this->TotalR = TotalR;
  }
  v31 = v25 - v20;
  this->TotalL = TotalR;
  v32 = (float)((float)(v21 - v18) * 0.5) + v0->y;
  v33 = (float)(v31 * 0.5) + v0->x;
  v34 = (float)((float)(v26 - v19) * 0.5) + v0->y;
  v35 = (float)((float)(v22 - v24) * 0.5) + v0->x;
  if ( v28 > 0 )
  {
    v36 = (const Scaleform::Render::StrokerAA::WidthsType *)(unsigned int)v28;
    wa = (const Scaleform::Render::StrokerAA::WidthsType *)(unsigned int)v28;
    do
    {
      v37 = cosf(v29);
      v38 = sinf(v29);
      v39 = (float)(w->solidWidth * v37) + v35;
      v40 = (float)(w->totalWidth * v37) + v33;
      v41 = (float)(w->totalWidth * v38) + v34;
      v42 = (float)(w->solidWidth * v38) + v32;
      if ( w->solidFlag )
      {
        if ( v8 )
          StyleLeft = this->StyleLeft;
        else
          StyleLeft = this->StyleRight;
        v44 = this->Vertices.Size >> 4;
        LOWORD(v72) = StyleLeft;
        HIWORD(v72) = 1;
        if ( v44 >= this->Vertices.NumPages )
          Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(&this->Vertices, v44);
        v45 = this->Vertices.Pages[v44];
        v46 = this->Vertices.Size & 0xF;
        *(_QWORD *)&v45[v46].x = __PAIR64__(LODWORD(v42), LODWORD(v39));
        *(_DWORD *)&v45[v46].style = v72;
        ++this->Vertices.Size;
        SolidL = LODWORD(this->Vertices.Size) - 1;
      }
      else
      {
        SolidL = this->SolidL;
      }
      if ( w->aaFlagL || w->aaFlagR )
      {
        if ( v8 )
          StyleRight = this->StyleLeft;
        else
          StyleRight = this->StyleRight;
        v50 = this->Vertices.Size >> 4;
        v73 = (unsigned __int16)StyleRight;
        if ( v50 >= this->Vertices.NumPages )
          Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(&this->Vertices, v50);
        v51 = this->Vertices.Pages[v50];
        v52 = this->Vertices.Size & 0xF;
        *(_QWORD *)&v51[v52].x = __PAIR64__(LODWORD(v41), LODWORD(v40));
        *(_DWORD *)&v51[v52].style = v73;
        ++this->Vertices.Size;
        v48 = LODWORD(this->Vertices.Size) - 1;
      }
      else
      {
        v48 = SolidL;
      }
      if ( v8 )
      {
        if ( w->solidFlagL || w->solidFlagR )
        {
          SolidR = this->SolidR;
          v54 = this->Triangles.Size >> 4;
          LODWORD(v74) = this->SolidL;
          HIDWORD(v74) = SolidL;
          if ( v54 >= this->Triangles.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> *)&this->Triangles,
              v54);
          v55 = this->Triangles.Size & 0xF;
          v56 = this->Triangles.Pages[v54];
          *(_QWORD *)&v56[v55].v1 = v74;
          v56[v55].v3 = SolidR;
          ++this->Triangles.Size;
          v36 = wa;
        }
        if ( w->aaFlagL || w->aaFlagR )
        {
          v57 = this->Triangles.Size >> 4;
          LODWORD(v75) = this->SolidL;
          HIDWORD(v75) = this->TotalL;
          if ( v57 >= this->Triangles.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> *)&this->Triangles,
              v57);
          HIDWORD(v76) = v48;
          v58 = this->Triangles.Size & 0xF;
          v59 = this->Triangles.Pages[v57];
          *(_QWORD *)&v59[v58].v1 = v75;
          v59[v58].v3 = v48;
          v60 = ++this->Triangles.Size >> 4;
          LODWORD(v76) = this->SolidL;
          if ( v60 >= this->Triangles.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> *)&this->Triangles,
              v60);
          v61 = this->Triangles.Size & 0xF;
          v62 = this->Triangles.Pages[v60];
          *(_QWORD *)&v62[v61].v1 = v76;
          v62[v61].v3 = SolidL;
          ++this->Triangles.Size;
        }
        this->SolidL = SolidL;
        this->TotalL = v48;
      }
      else
      {
        if ( w->solidFlagL || w->solidFlagR )
        {
          v63 = this->Triangles.Size >> 4;
          v77 = *(_QWORD *)&this->SolidL;
          if ( v63 >= this->Triangles.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> *)&this->Triangles,
              v63);
          v64 = this->Triangles.Size & 0xF;
          v65 = this->Triangles.Pages[v63];
          *(_QWORD *)&v65[v64].v1 = v77;
          v65[v64].v3 = SolidL;
          ++this->Triangles.Size;
        }
        if ( w->aaFlagL || w->aaFlagR )
        {
          v66 = this->Triangles.Size >> 4;
          LODWORD(v78) = this->SolidR;
          HIDWORD(v78) = this->TotalR;
          if ( v66 >= this->Triangles.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> *)&this->Triangles,
              v66);
          HIDWORD(v79) = v48;
          v67 = this->Triangles.Size & 0xF;
          v68 = this->Triangles.Pages[v66];
          *(_QWORD *)&v68[v67].v1 = v78;
          v68[v67].v3 = v48;
          v69 = ++this->Triangles.Size >> 4;
          LODWORD(v79) = this->SolidR;
          if ( v69 >= this->Triangles.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> *)&this->Triangles,
              v69);
          v70 = this->Triangles.Size & 0xF;
          v71 = this->Triangles.Pages[v69];
          *(_QWORD *)&v71[v70].v1 = v79;
          v71[v70].v3 = SolidL;
          ++this->Triangles.Size;
        }
        this->SolidR = SolidL;
        this->TotalR = v48;
      }
      v8 = endFlag;
      v29 = v29 + v81;
      v36 = (const Scaleform::Render::StrokerAA::WidthsType *)((char *)v36 - 1);
      wa = v36;
    }
    while ( v36 );
  }
}

void __fastcall Scaleform::Render::StrokerAA::calcRoundJoin(
        Scaleform::Render::StrokerAA *this,
        const Scaleform::Render::StrokeVertex *v1,
        const Scaleform::Render::StrokerAA::WidthsType *w,
        const Scaleform::Render::StrokerAA::JoinParamType *p)
{
  bool v8; // r12
  float v9; // xmm0_4
  float xMiterThisR; // xmm6_4
  float yMiterThisR; // xmm7_4
  float y; // xmm2_4
  float v13; // xmm8_4
  float v14; // xmm9_4
  unsigned int v15; // ebp
  unsigned int v16; // er15
  unsigned int v17; // er13
  float v18; // xmm7_4
  float v19; // xmm0_4
  float v20; // xmm9_4
  int v21; // eax
  float v22; // xmm9_4
  float v23; // xmm7_4
  __int64 v24; // r15
  float v25; // xmm6_4
  float v26; // xmm0_4
  unsigned int v27; // esi
  float xMiterThisL; // xmm6_4
  float yMiterThisL; // xmm7_4
  float v30; // xmm2_4
  float v31; // xmm8_4
  float v32; // xmm9_4
  unsigned int v33; // ebp
  unsigned int v34; // er15
  unsigned int v35; // er13
  float v36; // xmm6_4
  float v37; // xmm0_4
  float v38; // xmm9_4
  float v39; // xmm9_4
  int v40; // eax
  float v41; // xmm9_4
  float v42; // xmm6_4
  __int64 v43; // r15
  float v44; // xmm7_4
  float v45; // xmm0_4
  unsigned int v46; // esi
  unsigned int v3; // [rsp+B8h] [rbp+20h]
  unsigned int v3a; // [rsp+B8h] [rbp+20h]

  v8 = *(_WORD *)&p->overlapPrev != 0;
  v9 = this->Tolerance * 0.125;
  if ( p->rightTurnThis )
  {
    if ( v9 > (float)((float)(w->solidWidthR + w->solidWidthR) - p->dbTotalR) )
    {
LABEL_3:
      Scaleform::Render::StrokerAA::calcMiterJoin(this, v1, w, p, MiterJoin);
      return;
    }
    if ( *(_WORD *)&p->overlapPrev )
    {
      xMiterThisR = p->dx1TotalR + v1->x;
      yMiterThisR = p->dy1TotalR + v1->y;
    }
    else
    {
      xMiterThisR = p->xMiterThisR;
      yMiterThisR = p->yMiterThisR;
    }
    y = v1->y;
    v13 = (float)((float)(xMiterThisR - v1->x) * w->solidCoeffR) + v1->x;
    v14 = (float)((float)(yMiterThisR - y) * w->solidCoeffR) + y;
    v15 = Scaleform::Render::StrokerAA::addVertex(this, v1->x - p->dx1SolidL, y - p->dy1SolidL, this->StyleLeft, 1u);
    if ( w->aaFlagL )
      v3 = Scaleform::Render::StrokerAA::addVertex(this, v1->x - p->dx1TotalL, v1->y - p->dy1TotalL, this->StyleLeft, 0);
    else
      v3 = v15;
    if ( w->solidFlag )
      v16 = Scaleform::Render::StrokerAA::addVertex(this, v13, v14, this->StyleRight, 1u);
    else
      v16 = v15;
    if ( w->aaFlagR )
      v17 = Scaleform::Render::StrokerAA::addVertex(this, xMiterThisR, yMiterThisR, this->StyleRight, 0);
    else
      v17 = v16;
    if ( w->solidFlagL || w->solidFlagR )
    {
      Scaleform::Render::StrokerAA::addTriangle(this, this->SolidL, v16, v15);
      Scaleform::Render::StrokerAA::addTriangle(this, this->SolidL, this->SolidR, v16);
    }
    if ( w->aaFlagL )
    {
      Scaleform::Render::StrokerAA::addTriangle(this, this->TotalL, this->SolidL, v15);
      Scaleform::Render::StrokerAA::addTriangle(this, this->TotalL, v15, v3);
    }
    if ( w->aaFlagR )
    {
      Scaleform::Render::StrokerAA::addTriangle(this, this->SolidR, v17, v16);
      Scaleform::Render::StrokerAA::addTriangle(this, this->SolidR, this->TotalR, v17);
    }
    this->TotalL = v3;
    this->SolidL = v15;
    this->SolidR = v16;
    this->TotalR = v17;
    if ( v8 )
    {
      this->SolidR = Scaleform::Render::StrokerAA::addVertex(
                       this,
                       p->dx2SolidR + v1->x,
                       p->dy2SolidR + v1->y,
                       this->StyleRight,
                       1u);
      if ( w->aaFlagR )
        v16 = Scaleform::Render::StrokerAA::addVertex(
                this,
                p->dx2TotalR + v1->x,
                p->dy2TotalR + v1->y,
                this->StyleRight,
                0);
      this->TotalR = v16;
    }
    v18 = atan2f(COERCE_FLOAT(LODWORD(p->dy1TotalL) ^ _xmm), COERCE_FLOAT(LODWORD(p->dx1TotalL) ^ _xmm));
    v19 = atan2f(COERCE_FLOAT(LODWORD(p->dy2TotalL) ^ _xmm), COERCE_FLOAT(LODWORD(p->dx2TotalL) ^ _xmm));
    if ( v19 > v18 )
      v19 = v19 + -6.2831855;
    v20 = v18 - v19;
    v21 = (int)(float)((float)(v18 - v19)
                     / (float)(acosf(w->totalWidthL / (float)((float)(this->Tolerance * 0.25) + w->totalWidthL)) * 2.0))
        + 1;
    v22 = v20 / (float)v21;
    v23 = v18 - v22;
    if ( v21 > 0 )
    {
      v24 = (unsigned int)v21;
      do
      {
        v25 = cosf(v23);
        v26 = sinf(v23);
        if ( w->solidFlag )
          v15 = Scaleform::Render::StrokerAA::addVertex(
                  this,
                  (float)(w->solidWidthL * v25) + v1->x,
                  (float)(w->solidWidthL * v26) + v1->y,
                  this->StyleLeft,
                  1u);
        if ( w->aaFlagL )
          v27 = Scaleform::Render::StrokerAA::addVertex(
                  this,
                  (float)(w->totalWidthL * v25) + v1->x,
                  (float)(w->totalWidthL * v26) + v1->y,
                  this->StyleLeft,
                  0);
        else
          v27 = v15;
        if ( w->solidFlagL )
          Scaleform::Render::StrokerAA::addTriangle(this, this->SolidR, v15, this->SolidL);
        if ( w->aaFlagL )
        {
          Scaleform::Render::StrokerAA::addTriangle(this, this->SolidL, v15, this->TotalL);
          Scaleform::Render::StrokerAA::addTriangle(this, this->TotalL, v15, v27);
        }
        this->SolidL = v15;
        v23 = v23 - v22;
        this->TotalL = v27;
        --v24;
      }
      while ( v24 );
    }
  }
  else
  {
    if ( v9 > (float)((float)(w->solidWidthL + w->solidWidthL) - p->dbTotalL) )
      goto LABEL_3;
    if ( *(_WORD *)&p->overlapPrev )
    {
      xMiterThisL = v1->x - p->dx1TotalL;
      yMiterThisL = v1->y - p->dy1TotalL;
    }
    else
    {
      xMiterThisL = p->xMiterThisL;
      yMiterThisL = p->yMiterThisL;
    }
    v30 = v1->y;
    v31 = (float)((float)(xMiterThisL - v1->x) * w->solidCoeffL) + v1->x;
    v32 = (float)((float)(yMiterThisL - v30) * w->solidCoeffL) + v30;
    v33 = Scaleform::Render::StrokerAA::addVertex(this, v1->x + p->dx1SolidR, v30 + p->dy1SolidR, this->StyleRight, 1u);
    if ( w->aaFlagR )
      v3a = Scaleform::Render::StrokerAA::addVertex(
              this,
              p->dx1TotalR + v1->x,
              p->dy1TotalR + v1->y,
              this->StyleRight,
              0);
    else
      v3a = v33;
    if ( w->solidFlag )
      v34 = Scaleform::Render::StrokerAA::addVertex(this, v31, v32, this->StyleLeft, 1u);
    else
      v34 = v33;
    if ( w->aaFlagL )
      v35 = Scaleform::Render::StrokerAA::addVertex(this, xMiterThisL, yMiterThisL, this->StyleLeft, 0);
    else
      v35 = v34;
    if ( w->solidFlagL || w->solidFlagR )
    {
      Scaleform::Render::StrokerAA::addTriangle(this, this->SolidR, v33, v34);
      Scaleform::Render::StrokerAA::addTriangle(this, this->SolidR, v34, this->SolidL);
    }
    if ( w->aaFlagR )
    {
      Scaleform::Render::StrokerAA::addTriangle(this, this->TotalR, v33, this->SolidR);
      Scaleform::Render::StrokerAA::addTriangle(this, this->TotalR, v3a, v33);
    }
    if ( w->aaFlagL )
    {
      Scaleform::Render::StrokerAA::addTriangle(this, this->SolidL, v34, v35);
      Scaleform::Render::StrokerAA::addTriangle(this, this->SolidL, v35, this->TotalL);
    }
    this->TotalR = v3a;
    this->SolidL = v34;
    this->TotalL = v35;
    this->SolidR = v33;
    if ( v8 )
    {
      this->SolidL = Scaleform::Render::StrokerAA::addVertex(
                       this,
                       v1->x - p->dx2SolidL,
                       v1->y - p->dy2SolidL,
                       this->StyleLeft,
                       1u);
      if ( w->aaFlagL )
        v34 = Scaleform::Render::StrokerAA::addVertex(
                this,
                v1->x - p->dx2TotalL,
                v1->y - p->dy2TotalL,
                this->StyleLeft,
                0);
      this->TotalL = v34;
    }
    v36 = atan2f(p->dy1TotalR, p->dx1TotalR);
    v37 = atan2f(p->dy2TotalR, p->dx2TotalR);
    v38 = v37;
    if ( v36 > v37 )
      v38 = v37 + 6.2831855;
    v39 = v38 - v36;
    v40 = (int)(float)(v39
                     / (float)(acosf(w->totalWidthR / (float)((float)(this->Tolerance * 0.25) + w->totalWidthR)) * 2.0))
        + 1;
    v41 = v39 / (float)v40;
    v42 = v36 + v41;
    if ( v40 > 0 )
    {
      v43 = (unsigned int)v40;
      do
      {
        v44 = cosf(v42);
        v45 = sinf(v42);
        if ( w->solidFlag )
          v33 = Scaleform::Render::StrokerAA::addVertex(
                  this,
                  (float)(w->solidWidthR * v44) + v1->x,
                  (float)(w->solidWidthR * v45) + v1->y,
                  this->StyleRight,
                  1u);
        if ( w->aaFlagR )
          v46 = Scaleform::Render::StrokerAA::addVertex(
                  this,
                  (float)(w->totalWidthR * v44) + v1->x,
                  (float)(w->totalWidthR * v45) + v1->y,
                  this->StyleRight,
                  0);
        else
          v46 = v33;
        if ( w->solidFlagR )
          Scaleform::Render::StrokerAA::addTriangle(this, this->SolidL, this->SolidR, v33);
        if ( w->aaFlagR )
        {
          Scaleform::Render::StrokerAA::addTriangle(this, this->SolidR, this->TotalR, v33);
          Scaleform::Render::StrokerAA::addTriangle(this, this->TotalR, v46, v33);
        }
        this->SolidR = v33;
        v42 = v42 + v41;
        this->TotalR = v46;
        --v43;
      }
      while ( v43 );
    }
  }
}

void __fastcall Scaleform::Render::StrokerAA::calcWidths(
        Scaleform::Render::StrokerAA *this,
        Scaleform::Render::StrokerAA::WidthsType *w)
{
  bool v2; // r9
  bool v3; // cc
  float solidWidthL; // xmm6_4
  float solidWidthR; // xmm5_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  float totalWidthR; // xmm3_4
  float v10; // xmm1_4

  w->solidWidthL = this->WidthLeft;
  v2 = 0;
  v3 = w->solidWidthL >= 0.0;
  w->solidWidthR = this->WidthRight;
  if ( !v3 )
    w->solidWidthL = 0.0;
  if ( w->solidWidthR < 0.0 )
    w->solidWidthR = 0.0;
  solidWidthL = w->solidWidthL;
  solidWidthR = w->solidWidthR;
  v6 = w->solidWidthL + this->AaWidthLeft;
  v7 = *(float *)&FLOAT_1_0;
  w->totalWidthL = v6;
  w->totalWidthR = solidWidthR + this->AaWidthRight;
  if ( v6 == 0.0 )
    v8 = *(float *)&FLOAT_1_0;
  else
    v8 = solidWidthL / v6;
  totalWidthR = w->totalWidthR;
  w->solidCoeffL = v8;
  if ( totalWidthR != 0.0 )
    v7 = solidWidthR / totalWidthR;
  w->solidCoeffR = v7;
  w->solidLimitL = solidWidthL * this->MiterLimit;
  w->solidLimitR = solidWidthR * this->MiterLimit;
  w->totalLimitL = v6 * this->MiterLimit;
  v10 = totalWidthR * this->MiterLimit;
  w->solidFlagL = solidWidthL > 0.0;
  w->totalLimitR = v10;
  w->solidFlagR = solidWidthR > 0.0;
  w->totalWidth = (float)(totalWidthR + v6) * 0.5;
  w->solidWidth = (float)(solidWidthR + solidWidthL) * 0.5;
  w->aaFlagL = this->AaWidthLeft > 0.0;
  w->aaFlagR = this->AaWidthRight > 0.0;
  if ( solidWidthL > 0.0 || solidWidthR > 0.0 || this->StyleLeft != this->StyleRight )
    v2 = 1;
  w->solidFlag = v2;
  w->rightSideCalc = totalWidthR > v6;
  if ( totalWidthR <= v6 )
    w->widthCoeff = totalWidthR / v6;
  else
    w->widthCoeff = v6 / totalWidthR;
}

