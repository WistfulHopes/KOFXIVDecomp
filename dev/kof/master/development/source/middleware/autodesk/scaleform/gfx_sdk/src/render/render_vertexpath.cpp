#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

void Scaleform::Render::VertexPath::Clear(); // 0x14039C960
void Scaleform::Render::VertexPath::AddVertex(float x, float y); // 0x14039C900
void Scaleform::Render::VertexPath::ClosePath(); // 0x14039C990
void Scaleform::Render::VertexPath::FinalizePath(unsigned long __formal, unsigned long __formal, bool __formal, bool __formal); // 0x14039CA90void __fastcall Scaleform::Render::VertexPath::AddVertex(Scaleform::Render::VertexPath *this, float x, float y)
{
  Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16> *p_Vertices; // rbx
  unsigned __int64 v4; // rdi

  p_Vertices = &this->Vertices;
  v4 = this->Vertices.Size >> 4;
  if ( v4 >= this->Vertices.NumPages )
    Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16>::allocPage(&this->Vertices, v4);
  p_Vertices->Pages[v4][p_Vertices->Size & 0xF] = (Scaleform::Render::VertexBasic)__PAIR64__(LODWORD(y), LODWORD(x));
  ++p_Vertices->Size;
}

void __fastcall Scaleform::Render::VertexPath::Clear(Scaleform::Render::VertexPath *this)
{
  this->Vertices.MaxPages = 0i64;
  this->Vertices.NumPages = 0i64;
  this->Vertices.Size = 0i64;
  this->Vertices.Pages = 0i64;
  this->Paths.MaxPages = 0i64;
  this->Paths.NumPages = 0i64;
  this->Paths.Size = 0i64;
  this->Paths.Pages = 0i64;
  this->LastVertex = 0;
}

void __fastcall Scaleform::Render::VertexPath::ClosePath(Scaleform::Render::VertexPath *this)
{
  __int64 LastVertex; // rdi
  Scaleform::Render::VertexBasic **Pages; // r10
  Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16> *p_Vertices; // rbx
  __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  Scaleform::Render::VertexBasic *v6; // rbp

  LastVertex = this->LastVertex;
  if ( this->Vertices.Size - LastVertex > 2 )
  {
    Pages = this->Vertices.Pages;
    p_Vertices = &this->Vertices;
    if ( Pages[(unsigned __int64)(unsigned int)LastVertex >> 4][LastVertex & 0xF].x != Pages[(this->Vertices.Size - 1) >> 4][(LODWORD(this->Vertices.Size) - 1) & 0xF].x
      || Pages[(unsigned __int64)(unsigned int)LastVertex >> 4][LastVertex & 0xF].y != this->Vertices.Pages[(this->Vertices.Size - 1) >> 4][(LODWORD(this->Vertices.Size) - 1) & 0xF].y )
    {
      v4 = LastVertex & 0xF;
      v5 = this->Vertices.Size >> 4;
      v6 = Pages[(unsigned __int64)this->LastVertex >> 4];
      if ( v5 >= this->Vertices.NumPages )
        Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16>::allocPage(
          &this->Vertices,
          this->Vertices.Size >> 4);
      p_Vertices->Pages[v5][p_Vertices->Size & 0xF] = v6[v4];
      ++p_Vertices->Size;
    }
  }
}

void __fastcall Scaleform::Render::VertexPath::FinalizePath(
        Scaleform::Render::VertexPath *this,
        unsigned int __formal,
        unsigned int a3,
        bool a4)
{
  unsigned __int64 LastVertex; // rcx
  unsigned __int64 v6; // rsi
  Scaleform::Render::PathBasic v7; // [rsp+30h] [rbp+8h]

  LastVertex = this->LastVertex;
  if ( this->Vertices.Size - LastVertex >= 3 )
  {
    v6 = this->Paths.Size >> 2;
    v7.Start = LastVertex;
    v7.Count = LODWORD(this->Vertices.Size) - LastVertex;
    if ( v6 >= this->Paths.NumPages )
      Scaleform::Render::ArrayPaged<Scaleform::Render::PathBasic,2,4>::allocPage(&this->Paths, v6);
    this->Paths.Pages[v6][this->Paths.Size & 3] = v7;
    ++this->Paths.Size;
    this->LastVertex = this->Vertices.Size;
  }
  else if ( LastVertex < this->Vertices.Size )
  {
    this->Vertices.Size = LastVertex;
  }
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

