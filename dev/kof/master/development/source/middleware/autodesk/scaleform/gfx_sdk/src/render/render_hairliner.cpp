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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

Scaleform::Render::Hairliner::Hairliner(Scaleform::Render::LinearHeap * heap); // 0x1403B9960
void Scaleform::Render::Hairliner::Clear(); // 0x1403B9C50
void Scaleform::Render::Hairliner::SetToleranceParam(const Scaleform::Render::ToleranceParams & param); // 0x1403BA290
bool Scaleform::Render::Hairliner::cmpMonoChains(const Scaleform::Render::Hairliner::MonoChainType * a, const Scaleform::Render::Hairliner::MonoChainType * b); // 0x1403A6670
bool Scaleform::Render::Hairliner::cmpHorizontalEdges(const Scaleform::Render::Hairliner::HorizontalEdgeType & a, const Scaleform::Render::Hairliner::HorizontalEdgeType & b); // 0x1403BBAD0
bool Scaleform::Render::Hairliner::cmpEdges(const Scaleform::Render::Hairliner::FanEdgeType & a, const Scaleform::Render::Hairliner::FanEdgeType & b); // 0x1403BBAB0
void Scaleform::Render::Hairliner::buildEdgeList(unsigned long start, unsigned long numEdges, long step); // 0x1403BB340
void Scaleform::Render::Hairliner::ClosePath(); // 0x1403B9E20
void Scaleform::Render::Hairliner::FinalizePath(unsigned long __formal, unsigned long __formal, bool __formal, bool __formal); // 0x1403B9EA0
void Scaleform::Render::Hairliner::decomposePath(const Scaleform::Render::Hairliner::PathType & path); // 0x1403BBAE0
unsigned long Scaleform::Render::Hairliner::nextScanbeam(float yb, float yt, unsigned long startMc, unsigned long numMc); // 0x1403BC7C0
unsigned long Scaleform::Render::Hairliner::addEventVertex(const Scaleform::Render::Hairliner::SrcVertexType & v1); // 0x1403BA810
unsigned long Scaleform::Render::Hairliner::addEventVertex(const Scaleform::Render::Hairliner::MonoChainType * mc, float yb, bool enforce); // 0x1403BA8D0
void Scaleform::Render::Hairliner::emitEdge(unsigned long v1, unsigned long v2); // 0x1403BBED0
unsigned long Scaleform::Render::Hairliner::processHorizontalEdges(Scaleform::Render::Hairliner::MonoChainType * mc, unsigned long vertex, float yb); // 0x1403BD0E0
void Scaleform::Render::Hairliner::sweepScanbeam(const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::MonoChainType *,4,8> & aet, float yb); // 0x1403BD440
void Scaleform::Render::Hairliner::processInterior(float yb); // 0x1403BD320
void Scaleform::Render::Hairliner::buildGraph(); // 0x1403BB580
void Scaleform::Render::Hairliner::generateContourAA(unsigned long startEdgeIdx); // 0x1403BC080
unsigned long Scaleform::Render::Hairliner::addJoin(unsigned long refVertex, const Scaleform::Render::Hairliner::OutVertexType & v1, const Scaleform::Render::Hairliner::OutVertexType & v2, const Scaleform::Render::Hairliner::OutVertexType & v3, float len1, float len2, float width); // 0x1403BAA80
void Scaleform::Render::Hairliner::generateTriangles(float width); // 0x1403BC3E0
void Scaleform::Render::Hairliner::Tessellate(); // 0x1403BA530
void Scaleform::Render::Hairliner::Transform(const Scaleform::Render::Matrix2x4<float> & m); // 0x1403BA6E0
Scaleform::Render::Matrix2x4<float> Scaleform::Render::Hairliner::StretchTo(float x1, float y1, float x2, float y2); // 0x1403BA2A0
void Scaleform::Render::Hairliner::GetMesh(unsigned long __formal, Scaleform::Render::TessMesh * mesh); // 0x1403B9F90
unsigned long Scaleform::Render::Hairliner::GetVertices(Scaleform::Render::TessMesh * mesh, Scaleform::Render::TessVertex * vertices, unsigned long num); // 0x1403BA050
void Scaleform::Render::Hairliner::GetTrianglesI16(unsigned long __formal, unsigned short * idx, unsigned long start, unsigned long num); // 0x1403B9FD0void __fastcall Scaleform::Alg::QuickSortSliced<Scaleform::Render::ArrayPaged<unsigned int,4,16>,Scaleform::Render::Tessellator::CmpScanbeams>(
        Scaleform::Render::ArrayPaged<unsigned int,4,16> *arr,
        unsigned __int64 start,
        unsigned __int64 end,
        Scaleform::Render::Tessellator::CmpScanbeams less)
{
  signed __int64 v4; // r13
  unsigned __int64 v5; // rbp
  char *i; // r12
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rbx
  unsigned int **Pages; // rdx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r15
  __int64 v13; // r10
  __int64 v14; // rdi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r9
  unsigned int *v17; // r8
  unsigned int *v18; // rdx
  unsigned int **v19; // rax
  unsigned int v20; // ecx
  unsigned int **v21; // rax
  unsigned int v22; // ecx
  unsigned int **v23; // rax
  unsigned int *v24; // rdi
  unsigned __int64 v25; // rdx
  unsigned int v26; // ecx
  unsigned int **v27; // rdi
  Scaleform::Render::Tessellator::SrcVertexType **v28; // r8
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned int *v32; // r9
  unsigned __int64 v33; // r10
  unsigned __int64 v34; // r8
  unsigned int *v35; // rdx
  unsigned int v36; // ecx
  unsigned int *v37; // r8
  unsigned int *v38; // rdx
  unsigned __int64 v39; // r9
  unsigned int v40; // ecx
  signed __int64 v41; // rsi
  unsigned __int64 j; // rbx
  unsigned int **v43; // r11
  unsigned __int64 v44; // r10
  unsigned int v45; // er9
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rdi
  unsigned int v49; // er8
  unsigned int *v50; // r9
  unsigned __int64 v51; // r8
  unsigned __int64 v52; // rax
  unsigned int *v53; // rdx
  unsigned int v54; // ecx
  unsigned int *v55; // [rsp+0h] [rbp-2F8h]
  unsigned int *v56; // [rsp+0h] [rbp-2F8h]
  unsigned __int64 v57; // [rsp+8h] [rbp-2F0h]
  unsigned int *v58; // [rsp+8h] [rbp-2F0h]
  unsigned __int64 v59; // [rsp+10h] [rbp-2E8h]
  unsigned int *v60; // [rsp+18h] [rbp-2E0h]
  char v61[640]; // [rsp+20h] [rbp-2D8h] BYREF

  v4 = end;
  v5 = start;
  if ( end - start >= 2 )
  {
    for ( i = v61; ; v4 = *((_QWORD *)i + 1) )
    {
      while ( (__int64)(v4 - v5) > 9 )
      {
        v8 = v4 - 1;
        v9 = v5 + 1;
        Pages = arr->Pages;
        v11 = v5 & 0xF;
        v12 = v5 >> 4;
        v13 = ((_BYTE)v4 - 1) & 0xF;
        v14 = ((_BYTE)v5 + 1) & 0xF;
        v15 = (__int64)(v4 - v5) / 2 + v5;
        v16 = v15 & 0xF;
        v17 = Pages[v15 >> 4];
        v18 = Pages[v5 >> 4];
        LODWORD(v15) = v18[v11];
        v18[v11] = v17[v16];
        v17[v16] = v15;
        v19 = arr->Pages;
        v59 = (unsigned __int64)(v4 - 1) >> 4;
        v60 = v19[v59];
        v57 = (v5 + 1) >> 4;
        v55 = v19[v57];
        if ( less.Ver->Pages[(unsigned __int64)v55[v14] >> 4][v55[v14] & 0xF].y > less.Ver->Pages[(unsigned __int64)v60[v13] >> 4][v60[v13] & 0xF].y )
        {
          v20 = v60[v13];
          v60[v13] = v55[v14];
          v55[v14] = v20;
        }
        v21 = arr->Pages;
        v56 = v21[v12];
        v58 = v21[v57];
        if ( less.Ver->Pages[(unsigned __int64)v58[v14] >> 4][v58[v14] & 0xF].y > less.Ver->Pages[(unsigned __int64)v56[v11] >> 4][v56[v11] & 0xF].y )
        {
          v22 = v56[v11];
          v56[v11] = v58[v14];
          v58[v14] = v22;
        }
        v23 = arr->Pages;
        v24 = v23[v59];
        v59 = (unsigned __int64)v23[v12];
        if ( less.Ver->Pages[(unsigned __int64)*(unsigned int *)(v59 + 4 * v11) >> 4][*(_DWORD *)(v59 + 4 * v11) & 0xF].y > less.Ver->Pages[(unsigned __int64)v24[v13] >> 4][v24[v13] & 0xF].y )
        {
          v25 = v59;
          v26 = v24[v13];
          v24[v13] = *(_DWORD *)(v59 + 4 * v11);
          *(_DWORD *)(v25 + 4 * v11) = v26;
        }
        while ( 1 )
        {
          v27 = arr->Pages;
          v28 = less.Ver->Pages;
          do
          {
            ++v9;
            v29 = v27[v9 >> 4][v9 & 0xF];
          }
          while ( v28[(unsigned __int64)v27[v12][v11] >> 4][v27[v12][v11] & 0xF].y > v28[v29 >> 4][v29 & 0xF].y );
          do
          {
            --v8;
            v30 = v27[v8 >> 4][v8 & 0xF];
          }
          while ( v28[v30 >> 4][v30 & 0xF].y > v28[(unsigned __int64)v27[v12][v11] >> 4][v27[v12][v11] & 0xF].y );
          v31 = v8 >> 4;
          if ( (__int64)v9 > (__int64)v8 )
            break;
          v32 = v27[v31];
          v33 = v8 & 0xF;
          v34 = v9 & 0xF;
          v35 = v27[v9 >> 4];
          v36 = v35[v34];
          v35[v34] = v32[v33];
          v32[v33] = v36;
        }
        v37 = v27[v31];
        v38 = v27[v12];
        v39 = v8 & 0xF;
        v40 = v38[v11];
        v38[v11] = v37[v39];
        v37[v39] = v40;
        if ( (__int64)(v8 - v5) <= (__int64)(v4 - v9) )
        {
          *((_QWORD *)i + 1) = v4;
          v4 = v8;
          *(_QWORD *)i = v9;
        }
        else
        {
          *(_QWORD *)i = v5;
          v5 = v9;
          *((_QWORD *)i + 1) = v8;
        }
        i += 16;
      }
      v41 = v5 + 1;
      for ( j = v5; v41 < v4; ++v41 )
      {
        v43 = arr->Pages;
        v44 = j + 1;
        v45 = v43[(j + 1) >> 4][((_BYTE)j + 1) & 0xF];
        v46 = j >> 4;
        v47 = j & 0xF;
        v48 = v46;
        v49 = v43[v46][v47];
        if ( less.Ver->Pages[(unsigned __int64)v49 >> 4][v49 & 0xF].y > less.Ver->Pages[(unsigned __int64)v45 >> 4][v45 & 0xF].y )
        {
          do
          {
            v50 = v43[v48];
            v51 = v44 & 0xF;
            v52 = v44-- >> 4;
            v53 = v43[v52];
            v54 = v53[v51];
            v53[v51] = v50[v47];
            v50[v47] = v54;
            if ( v44 == v5 )
              break;
            v43 = arr->Pages;
            v47 = ((_DWORD)v44 - 1) & 0xF;
            v48 = (v44 - 1) >> 4;
          }
          while ( less.Ver->Pages[(unsigned __int64)v43[v48][v47] >> 4][v43[v48][v47] & 0xF].y > less.Ver->Pages[(unsigned __int64)v43[v44 >> 4][v44 & 0xF] >> 4][v43[v44 >> 4][v44 & 0xF] & 0xF].y );
        }
        j = v41;
      }
      if ( i <= v61 )
        break;
      v5 = *((_QWORD *)i - 2);
      i -= 16;
    }
  }
}

void __fastcall Scaleform::Alg::QuickSortSliced<Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::MonoChainType *,4,8>,bool (*)(Scaleform::Render::Hairliner::MonoChainType const *,Scaleform::Render::Hairliner::MonoChainType const *)>(
        Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::MonoChainType *,4,8> *arr,
        unsigned __int64 start,
        unsigned __int64 end,
        bool (__fastcall *less)(const Scaleform::Render::Hairliner::MonoChainType *, const Scaleform::Render::Hairliner::MonoChainType *))
{
  signed __int64 v5; // r9
  unsigned __int64 v6; // r13
  unsigned __int64 *i; // r12
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  Scaleform::Render::Hairliner::MonoChainType ***Pages; // rdx
  Scaleform::Render::Hairliner::MonoChainType **v12; // r8
  unsigned __int64 v13; // r14
  Scaleform::Render::Hairliner::MonoChainType **v14; // rcx
  unsigned __int64 v15; // r15
  Scaleform::Render::Hairliner::MonoChainType *v16; // rdx
  Scaleform::Render::Hairliner::MonoChainType ***v17; // rcx
  const Scaleform::Render::Hairliner::MonoChainType *v18; // rdx
  Scaleform::Render::Hairliner::MonoChainType ***v19; // rcx
  Scaleform::Render::Hairliner::MonoChainType **v20; // r8
  Scaleform::Render::Hairliner::MonoChainType **v21; // rax
  Scaleform::Render::Hairliner::MonoChainType *v22; // rdx
  Scaleform::Render::Hairliner::MonoChainType ***v23; // rcx
  Scaleform::Render::Hairliner::MonoChainType **v24; // rax
  Scaleform::Render::Hairliner::MonoChainType **v25; // rcx
  Scaleform::Render::Hairliner::MonoChainType *v26; // rdx
  Scaleform::Render::Hairliner::MonoChainType ***v27; // rcx
  Scaleform::Render::Hairliner::MonoChainType **v28; // r8
  Scaleform::Render::Hairliner::MonoChainType **v29; // rax
  Scaleform::Render::Hairliner::MonoChainType *v30; // rdx
  Scaleform::Render::Hairliner::MonoChainType ***v31; // rdx
  Scaleform::Render::Hairliner::MonoChainType **v32; // r8
  Scaleform::Render::Hairliner::MonoChainType **v33; // rdx
  Scaleform::Render::Hairliner::MonoChainType *v34; // rcx
  Scaleform::Render::Hairliner::MonoChainType **v35; // rcx
  Scaleform::Render::Hairliner::MonoChainType *v36; // rdx
  signed __int64 v37; // r15
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // rdi
  unsigned __int64 v40; // r14
  unsigned __int64 j; // rbx
  Scaleform::Render::Hairliner::MonoChainType ***v42; // rdx
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rax
  Scaleform::Render::Hairliner::MonoChainType **v45; // r8
  Scaleform::Render::Hairliner::MonoChainType **v46; // rdx
  Scaleform::Render::Hairliner::MonoChainType *v47; // rcx
  unsigned __int64 v48; // [rsp+20h] [rbp-308h]
  signed __int64 v49; // [rsp+28h] [rbp-300h]
  unsigned __int64 v50; // [rsp+30h] [rbp-2F8h]
  unsigned __int64 v51; // [rsp+40h] [rbp-2E8h]
  unsigned __int64 v52[80]; // [rsp+50h] [rbp-2D8h] BYREF

  v49 = end;
  v5 = end;
  v6 = start;
  if ( end - start >= 2 )
  {
    for ( i = v52; ; v6 = *i )
    {
      while ( (__int64)(v5 - v6) > 9 )
      {
        v9 = v5 - 1;
        v10 = v6 + 1;
        Pages = arr->Pages;
        v12 = &Pages[(v6 + (__int64)(v5 - v6) / 2) >> 4][((_DWORD)v6 + (unsigned int)((__int64)(v5 - v6) / 2)) & 0xF];
        v13 = v6 >> 4;
        v14 = Pages[v13];
        v15 = v6 & 0xF;
        v16 = v14[v15];
        v14[v15] = *v12;
        *v12 = v16;
        v17 = arr->Pages;
        v50 = (v6 + 1) >> 4;
        v18 = v17[v50][((_BYTE)v6 + 1) & 0xF];
        v51 = 8 * ((unsigned __int64)(v5 - 1) >> 4);
        v48 = ((_BYTE)v5 - 1) & 0xF;
        if ( less(v17[v51 / 8][v48], v18) )
        {
          v19 = arr->Pages;
          v20 = v19[v50];
          v21 = v19[v51 / 8];
          v22 = v21[v48];
          v21[v48] = v20[((_BYTE)v6 + 1) & 0xF];
          v20[((_BYTE)v6 + 1) & 0xF] = v22;
        }
        if ( less(arr->Pages[v13][v15], arr->Pages[(v6 + 1) >> 4][((_BYTE)v6 + 1) & 0xF]) )
        {
          v23 = arr->Pages;
          v24 = v23[v50];
          v25 = v23[v13];
          v26 = v25[v6 & 0xF];
          v25[v6 & 0xF] = v24[((_BYTE)v6 + 1) & 0xF];
          v24[((_BYTE)v6 + 1) & 0xF] = v26;
        }
        if ( less(arr->Pages[v51 / 8][v48], arr->Pages[v13][v6 & 0xF]) )
        {
          v27 = arr->Pages;
          v28 = v27[v13];
          v29 = v27[v51 / 8];
          v30 = v29[v48];
          v29[v48] = v28[v6 & 0xF];
          v28[v6 & 0xF] = v30;
        }
        while ( 1 )
        {
          do
            ++v10;
          while ( less(arr->Pages[v10 >> 4][v10 & 0xF], arr->Pages[v13][v6 & 0xF]) );
          do
            --v9;
          while ( less(arr->Pages[v13][v15], arr->Pages[v9 >> 4][v9 & 0xF]) );
          v31 = arr->Pages;
          v32 = &v31[v9 >> 4][v9 & 0xF];
          if ( (__int64)v10 > (__int64)v9 )
            break;
          v33 = &v31[v10 >> 4][v10 & 0xF];
          v34 = *v33;
          *v33 = *v32;
          *v32 = v34;
        }
        v35 = v31[v13];
        v5 = v49;
        v36 = v35[v6 & 0xF];
        v35[v6 & 0xF] = *v32;
        *v32 = v36;
        if ( (__int64)(v9 - v6) <= (__int64)(v49 - v10) )
        {
          i[1] = v49;
          v5 = v9;
          *i = v10;
          i += 2;
          v49 = v9;
        }
        else
        {
          *i = v6;
          v6 = v10;
          i[1] = v9;
          i += 2;
        }
      }
      v37 = v6 + 1;
      v38 = v6;
      if ( (__int64)(v6 + 1) < v5 )
      {
        do
        {
          v39 = v38 >> 4;
          v40 = v38 & 0xF;
          for ( j = v38 + 1; less(arr->Pages[j >> 4][j & 0xF], arr->Pages[v39][v40]); v39 = (j - 1) >> 4 )
          {
            v42 = arr->Pages;
            v43 = j & 0xF;
            v44 = j-- >> 4;
            v45 = v42[v39];
            v46 = &v42[v44][v43];
            v47 = *v46;
            *v46 = v45[v40];
            v45[v40] = v47;
            if ( j == v6 )
              break;
            v40 = ((_DWORD)j - 1) & 0xF;
          }
          v38 = v37++;
        }
        while ( v37 < v49 );
      }
      if ( i <= v52 )
        break;
      v5 = *(i - 1);
      i -= 2;
      v49 = v5;
    }
  }
}

void __fastcall Scaleform::Alg::QuickSortSliced<Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::FanEdgeType,4,16>,bool (*)(Scaleform::Render::Hairliner::FanEdgeType const &,Scaleform::Render::Hairliner::FanEdgeType const &)>(
        Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::FanEdgeType,4,16> *arr,
        unsigned __int64 start,
        unsigned __int64 end,
        bool (__fastcall *less)(const Scaleform::Render::Hairliner::FanEdgeType *, const Scaleform::Render::Hairliner::FanEdgeType *))
{
  signed __int64 v5; // r9
  unsigned __int64 v6; // r13
  unsigned __int64 *i; // r12
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  Scaleform::Render::Hairliner::FanEdgeType **Pages; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  Scaleform::Render::Hairliner::FanEdgeType *v14; // rax
  __int64 v15; // xmm0_8
  Scaleform::Render::Hairliner::FanEdgeType *v16; // r8
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r15
  Scaleform::Render::Hairliner::FanEdgeType *v19; // rcx
  __int64 v20; // xmm1_8
  Scaleform::Render::Hairliner::FanEdgeType **v21; // rcx
  const Scaleform::Render::Hairliner::FanEdgeType *v22; // rdx
  Scaleform::Render::Hairliner::FanEdgeType *v23; // rcx
  Scaleform::Render::Hairliner::FanEdgeType **v24; // rcx
  Scaleform::Render::Hairliner::FanEdgeType *v25; // r8
  Scaleform::Render::Hairliner::FanEdgeType *v26; // rcx
  __int64 v27; // xmm1_8
  float slope; // edx
  Scaleform::Render::Hairliner::FanEdgeType **v29; // rcx
  Scaleform::Render::Hairliner::FanEdgeType *v30; // r8
  Scaleform::Render::Hairliner::FanEdgeType *v31; // rcx
  __int64 v32; // xmm1_8
  float v33; // edx
  Scaleform::Render::Hairliner::FanEdgeType **v34; // rcx
  Scaleform::Render::Hairliner::FanEdgeType *v35; // r8
  Scaleform::Render::Hairliner::FanEdgeType *v36; // rcx
  __int64 v37; // xmm1_8
  float v38; // edx
  Scaleform::Render::Hairliner::FanEdgeType **v39; // r8
  Scaleform::Render::Hairliner::FanEdgeType *v40; // rax
  __int64 v41; // xmm0_8
  Scaleform::Render::Hairliner::FanEdgeType *v42; // r9
  Scaleform::Render::Hairliner::FanEdgeType *v43; // rax
  __int64 v44; // xmm1_8
  Scaleform::Render::Hairliner::FanEdgeType *v45; // rdx
  float v46; // ecx
  Scaleform::Render::Hairliner::FanEdgeType *v47; // rcx
  __int64 v48; // xmm1_8
  float v49; // edx
  signed __int64 v50; // r15
  unsigned __int64 v51; // rbx
  unsigned __int64 v52; // rdi
  unsigned __int64 v53; // r14
  unsigned __int64 j; // rbx
  Scaleform::Render::Hairliner::FanEdgeType **v55; // r8
  Scaleform::Render::Hairliner::FanEdgeType *v56; // r9
  __int64 v57; // rcx
  Scaleform::Render::Hairliner::FanEdgeType *v58; // rax
  __int64 v59; // xmm1_8
  unsigned int *v60; // rdx
  unsigned __int64 v61; // [rsp+20h] [rbp-308h]
  signed __int64 v62; // [rsp+28h] [rbp-300h]
  unsigned __int64 v63; // [rsp+30h] [rbp-2F8h]
  __int64 v64; // [rsp+38h] [rbp-2F0h]
  unsigned __int64 v65; // [rsp+40h] [rbp-2E8h]
  unsigned __int64 v66[80]; // [rsp+50h] [rbp-2D8h] BYREF

  v62 = end;
  v5 = end;
  v6 = start;
  if ( end - start >= 2 )
  {
    for ( i = v66; ; v6 = *i )
    {
      while ( (__int64)(v5 - v6) > 9 )
      {
        v9 = v5 - 1;
        v10 = v6 + 1;
        Pages = arr->Pages;
        v12 = (__int64)(v5 - v6) / 2 + v6;
        v13 = v12 & 0xF;
        v14 = Pages[v12 >> 4];
        v15 = *(_QWORD *)&v14[v13].node1;
        v16 = &v14[v13];
        v17 = v6 >> 4;
        v18 = v6 & 0xF;
        v19 = &Pages[v17][v18];
        *(float *)&Pages = v19->slope;
        v20 = *(_QWORD *)&v19->node1;
        *(_QWORD *)&v19->node1 = v15;
        v19->slope = v16->slope;
        *(_QWORD *)&v16->node1 = v20;
        LODWORD(v16->slope) = (_DWORD)Pages;
        v21 = arr->Pages;
        v63 = (v6 + 1) >> 4;
        v22 = &v21[v63][((_BYTE)v6 + 1) & 0xF];
        v64 = ((_BYTE)v6 + 1) & 0xF;
        v23 = v21[(unsigned __int64)(v5 - 1) >> 4];
        v65 = 8 * ((unsigned __int64)(v5 - 1) >> 4);
        v61 = ((_BYTE)v5 - 1) & 0xF;
        if ( less(&v23[v61], v22) )
        {
          v24 = arr->Pages;
          v25 = &v24[v63][v64];
          v26 = &v24[v65 / 8][v61];
          v27 = *(_QWORD *)&v26->node1;
          slope = v26->slope;
          *(_QWORD *)&v26->node1 = *(_QWORD *)&v25->node1;
          v26->slope = v25->slope;
          *(_QWORD *)&v25->node1 = v27;
          v25->slope = slope;
        }
        if ( less(&arr->Pages[v17][v18], &arr->Pages[(v6 + 1) >> 4][((_BYTE)v6 + 1) & 0xF]) )
        {
          v29 = arr->Pages;
          v30 = &v29[v63][v64];
          v31 = &v29[v17][v18];
          v32 = *(_QWORD *)&v31->node1;
          v33 = v31->slope;
          *(_QWORD *)&v31->node1 = *(_QWORD *)&v30->node1;
          v31->slope = v30->slope;
          *(_QWORD *)&v30->node1 = v32;
          v30->slope = v33;
        }
        if ( less(&arr->Pages[v65 / 8][v61], &arr->Pages[v17][v18]) )
        {
          v34 = arr->Pages;
          v35 = &v34[v17][v18];
          v36 = &v34[v65 / 8][v61];
          v37 = *(_QWORD *)&v36->node1;
          v38 = v36->slope;
          *(_QWORD *)&v36->node1 = *(_QWORD *)&v35->node1;
          v36->slope = v35->slope;
          *(_QWORD *)&v35->node1 = v37;
          v35->slope = v38;
        }
        while ( 1 )
        {
          do
            ++v10;
          while ( less(&arr->Pages[v10 >> 4][v10 & 0xF], &arr->Pages[v17][v18]) );
          do
            --v9;
          while ( less(&arr->Pages[v17][v18], &arr->Pages[v9 >> 4][v9 & 0xF]) );
          v39 = arr->Pages;
          v40 = v39[v9 >> 4];
          v41 = *(_QWORD *)&v40[v9 & 0xF].node1;
          v42 = &v40[v9 & 0xF];
          if ( (__int64)v10 > (__int64)v9 )
            break;
          v43 = v39[v10 >> 4];
          v44 = *(_QWORD *)&v43[v10 & 0xF].node1;
          v45 = &v43[v10 & 0xF];
          v46 = v45->slope;
          *(_QWORD *)&v45->node1 = v41;
          v45->slope = v42->slope;
          *(_QWORD *)&v42->node1 = v44;
          v42->slope = v46;
        }
        v47 = &v39[v17][v18];
        v48 = *(_QWORD *)&v47->node1;
        v49 = v47->slope;
        *(_QWORD *)&v47->node1 = v41;
        v47->slope = v42->slope;
        *(_QWORD *)&v42->node1 = v48;
        v42->slope = v49;
        v5 = v62;
        if ( (__int64)(v9 - v6) <= (__int64)(v62 - v10) )
        {
          i[1] = v62;
          v5 = v9;
          *i = v10;
          i += 2;
          v62 = v9;
        }
        else
        {
          *i = v6;
          v6 = v10;
          i[1] = v9;
          i += 2;
        }
      }
      v50 = v6 + 1;
      v51 = v6;
      if ( (__int64)(v6 + 1) < v5 )
      {
        do
        {
          v52 = v51 >> 4;
          v53 = v51 & 0xF;
          for ( j = v51 + 1; less(&arr->Pages[j >> 4][j & 0xF], &arr->Pages[v52][v53]); v53 = ((_DWORD)j - 1) & 0xF )
          {
            v55 = arr->Pages;
            v56 = &v55[v52][v53];
            v57 = 3 * (j & 0xF);
            v58 = v55[j-- >> 4];
            v59 = *(_QWORD *)(&v58->node1 + v57);
            v60 = &v58->node1 + v57;
            LODWORD(v57) = v60[2];
            *(_QWORD *)v60 = *(_QWORD *)&v56->node1;
            v60[2] = LODWORD(v56->slope);
            *(_QWORD *)&v56->node1 = v59;
            LODWORD(v56->slope) = v57;
            if ( j == v6 )
              break;
            v52 = (j - 1) >> 4;
          }
          v51 = v50++;
        }
        while ( v50 < v62 );
      }
      if ( i <= v66 )
        break;
      v5 = *(i - 1);
      i -= 2;
      v62 = v5;
    }
  }
}

void __fastcall Scaleform::Alg::QuickSortSliced<Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::HorizontalEdgeType,2,4>,bool (*)(Scaleform::Render::Hairliner::HorizontalEdgeType const &,Scaleform::Render::Hairliner::HorizontalEdgeType const &)>(
        Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::HorizontalEdgeType,2,4> *arr,
        unsigned __int64 start,
        unsigned __int64 end,
        bool (__fastcall *less)(const Scaleform::Render::Hairliner::HorizontalEdgeType *, const Scaleform::Render::Hairliner::HorizontalEdgeType *))
{
  signed __int64 v5; // r9
  unsigned __int64 v6; // r13
  unsigned __int64 *i; // r12
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  Scaleform::Render::Hairliner::HorizontalEdgeType **Pages; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  Scaleform::Render::Hairliner::HorizontalEdgeType *v14; // rax
  __int128 v15; // xmm0
  Scaleform::Render::Hairliner::HorizontalEdgeType *v16; // r8
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r15
  Scaleform::Render::Hairliner::HorizontalEdgeType *v19; // rcx
  __int128 v20; // xmm1
  Scaleform::Render::Hairliner::HorizontalEdgeType **v21; // rcx
  const Scaleform::Render::Hairliner::HorizontalEdgeType *v22; // rdx
  Scaleform::Render::Hairliner::HorizontalEdgeType *v23; // rcx
  Scaleform::Render::Hairliner::HorizontalEdgeType **v24; // rcx
  Scaleform::Render::Hairliner::HorizontalEdgeType *v25; // r8
  Scaleform::Render::Hairliner::HorizontalEdgeType *v26; // rcx
  __int128 v27; // xmm1
  unsigned int rv; // edx
  Scaleform::Render::Hairliner::HorizontalEdgeType **v29; // rcx
  Scaleform::Render::Hairliner::HorizontalEdgeType *v30; // r8
  Scaleform::Render::Hairliner::HorizontalEdgeType *v31; // rcx
  unsigned int v32; // edx
  __int128 v33; // xmm1
  Scaleform::Render::Hairliner::HorizontalEdgeType **v34; // rcx
  Scaleform::Render::Hairliner::HorizontalEdgeType *v35; // r8
  Scaleform::Render::Hairliner::HorizontalEdgeType *v36; // rcx
  __int128 v37; // xmm1
  unsigned int v38; // edx
  Scaleform::Render::Hairliner::HorizontalEdgeType **v39; // r8
  __int64 v40; // r9
  __int128 v41; // xmm0
  Scaleform::Render::Hairliner::HorizontalEdgeType *v42; // rax
  __int128 v43; // xmm1
  Scaleform::Render::Hairliner::HorizontalEdgeType *v44; // rdx
  unsigned int v45; // ecx
  Scaleform::Render::Hairliner::HorizontalEdgeType *v46; // rcx
  __int128 v47; // xmm1
  unsigned int v48; // edx
  signed __int64 v49; // r15
  unsigned __int64 v50; // rbx
  unsigned __int64 v51; // rdi
  unsigned __int64 v52; // r14
  unsigned __int64 j; // rbx
  Scaleform::Render::Hairliner::HorizontalEdgeType **v54; // r8
  Scaleform::Render::Hairliner::HorizontalEdgeType *v55; // r9
  __int64 v56; // rcx
  Scaleform::Render::Hairliner::HorizontalEdgeType *v57; // rax
  char *v58; // rdx
  __int128 v59; // xmm1
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
        v9 = v5 - 1;
        v10 = v6 + 1;
        Pages = arr->Pages;
        v12 = (__int64)(v5 - v6) / 2 + v6;
        v13 = v12 & 3;
        v14 = Pages[v12 >> 2];
        v15 = *(_OWORD *)&v14[v13].x1;
        v16 = &v14[v13];
        v17 = v6 >> 2;
        v18 = v6 & 3;
        v19 = &Pages[v17][v18];
        LODWORD(Pages) = v19->rv;
        v20 = *(_OWORD *)&v19->x1;
        *(_OWORD *)&v19->x1 = v15;
        v19->rv = v16->rv;
        *(_OWORD *)&v16->x1 = v20;
        v16->rv = (unsigned int)Pages;
        v21 = arr->Pages;
        v62 = (v6 + 1) >> 2;
        v22 = &v21[v62][((_BYTE)v6 + 1) & 3];
        v63 = ((_BYTE)v6 + 1) & 3;
        v23 = v21[(unsigned __int64)(v5 - 1) >> 2];
        v64 = 8 * ((unsigned __int64)(v5 - 1) >> 2);
        v60 = ((_BYTE)v5 - 1) & 3;
        if ( less(&v23[v60], v22) )
        {
          v24 = arr->Pages;
          v25 = &v24[v62][v63];
          v26 = &v24[v64 / 8][v60];
          v27 = *(_OWORD *)&v26->x1;
          rv = v26->rv;
          *(_OWORD *)&v26->x1 = *(_OWORD *)&v25->x1;
          v26->rv = v25->rv;
          *(_OWORD *)&v25->x1 = v27;
          v25->rv = rv;
        }
        if ( less(&arr->Pages[v17][v18], &arr->Pages[(v6 + 1) >> 2][((_BYTE)v6 + 1) & 3]) )
        {
          v29 = arr->Pages;
          v30 = &v29[v62][v63];
          v31 = &v29[v17][v18];
          v32 = v31->rv;
          v33 = *(_OWORD *)&v31->x1;
          *(_OWORD *)&v31->x1 = *(_OWORD *)&v30->x1;
          v31->rv = v30->rv;
          *(_OWORD *)&v30->x1 = v33;
          v30->rv = v32;
        }
        if ( less(&arr->Pages[v64 / 8][v60], &arr->Pages[v17][v18]) )
        {
          v34 = arr->Pages;
          v35 = &v34[v17][v18];
          v36 = &v34[v64 / 8][v60];
          v37 = *(_OWORD *)&v36->x1;
          v38 = v36->rv;
          *(_OWORD *)&v36->x1 = *(_OWORD *)&v35->x1;
          v36->rv = v35->rv;
          *(_OWORD *)&v35->x1 = v37;
          v35->rv = v38;
        }
        while ( 1 )
        {
          do
            ++v10;
          while ( less(&arr->Pages[v10 >> 2][v10 & 3], &arr->Pages[v17][v18]) );
          do
            --v9;
          while ( less(&arr->Pages[v17][v18], &arr->Pages[v9 >> 2][v9 & 3]) );
          v39 = arr->Pages;
          v40 = (__int64)&v39[v9 >> 2][v9 & 3];
          v41 = *(_OWORD *)v40;
          if ( (__int64)v10 > (__int64)v9 )
            break;
          v42 = v39[v10 >> 2];
          v43 = *(_OWORD *)&v42[v10 & 3].x1;
          v44 = &v42[v10 & 3];
          v45 = v44->rv;
          *(_OWORD *)&v44->x1 = v41;
          v44->rv = *(_DWORD *)(v40 + 16);
          *(_OWORD *)v40 = v43;
          *(_DWORD *)(v40 + 16) = v45;
        }
        v46 = &v39[v17][v18];
        v47 = *(_OWORD *)&v46->x1;
        v48 = v46->rv;
        *(_OWORD *)&v46->x1 = v41;
        v46->rv = *(_DWORD *)(v40 + 16);
        *(_OWORD *)v40 = v47;
        *(_DWORD *)(v40 + 16) = v48;
        v5 = v61;
        if ( (__int64)(v9 - v6) <= (__int64)(v61 - v10) )
        {
          i[1] = v61;
          v5 = v9;
          *i = v10;
          i += 2;
          v61 = v9;
        }
        else
        {
          *i = v6;
          v6 = v10;
          i[1] = v9;
          i += 2;
        }
      }
      v49 = v6 + 1;
      v50 = v6;
      if ( (__int64)(v6 + 1) < v5 )
      {
        do
        {
          v51 = v50 >> 2;
          v52 = v50 & 3;
          for ( j = v50 + 1; less(&arr->Pages[j >> 2][j & 3], &arr->Pages[v51][v52]); v52 = ((_DWORD)j - 1) & 3 )
          {
            v54 = arr->Pages;
            v55 = &v54[v51][v52];
            v56 = 5 * (j & 3);
            v57 = v54[j-- >> 2];
            v58 = (char *)(&v57->x1 + v56);
            LODWORD(v56) = *((_DWORD *)v58 + 4);
            v59 = *(_OWORD *)v58;
            *(_OWORD *)v58 = *(_OWORD *)&v55->x1;
            *((_DWORD *)v58 + 4) = v55->rv;
            *(_OWORD *)&v55->x1 = v59;
            v55->rv = v56;
            if ( j == v6 )
              break;
            v51 = (j - 1) >> 2;
          }
          v50 = v49++;
        }
        while ( v49 < v61 );
      }
      if ( i <= v65 )
        break;
      v5 = *(i - 1);
      i -= 2;
      v61 = v5;
    }
  }
}

float __fastcall Scaleform::Render::Math2D::TurnRatio<Scaleform::Render::Hairliner::OutVertexType,Scaleform::Render::Hairliner::OutVertexType,Scaleform::Render::Hairliner::OutVertexType>(
        const Scaleform::Render::TessVertex *v1,
        const Scaleform::Render::TessVertex *v2,
        const Scaleform::Render::TessVertex *v3,
        float len1,
        float len2)
{
  float v5; // xmm5_4
  float v6; // xmm4_4
  float v7; // xmm2_4
  float v8; // xmm6_4
  float v9; // xmm7_4

  v5 = v3->x - v2->x;
  v6 = v2->y - v1->y;
  v7 = v3->y - v2->y;
  v8 = v2->x - v1->x;
  v9 = (float)((float)(v7 * v6) + (float)(v5 * v8)) / (float)((float)(len1 * len2) + (float)(len1 * len2));
  if ( (float)(v5 * v6) > (float)(v7 * v8) )
    v9 = 1.0 - v9;
  return v9 - 0.5;
}

void __fastcall Scaleform::Render::Hairliner::Hairliner(
        Scaleform::Render::Hairliner *this,
        Scaleform::Render::LinearHeap *heap)
{
  this->pHeap = heap;
  this->__vftable = (Scaleform::Render::Hairliner_vtbl *)&Scaleform::Render::Hairliner::`vftable';
  this->Epsilon = 0.0;
  this->IntersectionEpsilon = 0.0099999998;
  this->Width = 0.5;
  this->Paths.pHeap = heap;
  this->Paths.Size = 0i64;
  this->Paths.NumPages = 0i64;
  this->Paths.MaxPages = 0i64;
  this->Paths.Pages = 0i64;
  this->SrcVertices.pHeap = heap;
  this->SrcVertices.Size = 0i64;
  this->SrcVertices.NumPages = 0i64;
  this->SrcVertices.MaxPages = 0i64;
  this->SrcVertices.Pages = 0i64;
  this->OutVertices.pHeap = heap;
  this->OutVertices.Size = 0i64;
  this->OutVertices.NumPages = 0i64;
  this->OutVertices.MaxPages = 0i64;
  this->OutVertices.Pages = 0i64;
  this->Triangles.pHeap = heap;
  this->Triangles.Size = 0i64;
  this->Triangles.NumPages = 0i64;
  this->Triangles.MaxPages = 0i64;
  this->Triangles.Pages = 0i64;
  this->LastVertex = 0;
  this->SrcEdges.pHeap = heap;
  this->SrcEdges.Size = 0i64;
  this->SrcEdges.NumPages = 0i64;
  this->SrcEdges.MaxPages = 0i64;
  this->SrcEdges.Pages = 0i64;
  this->MonoChains.pHeap = heap;
  this->MonoChains.Size = 0i64;
  this->MonoChains.NumPages = 0i64;
  this->MonoChains.MaxPages = 0i64;
  this->MonoChains.Pages = 0i64;
  this->MonoChainsSorted.pHeap = heap;
  this->MonoChainsSorted.Size = 0i64;
  this->MonoChainsSorted.NumPages = 0i64;
  this->MonoChainsSorted.MaxPages = 0i64;
  this->MonoChainsSorted.Pages = 0i64;
  this->Scanbeams.pHeap = heap;
  this->Scanbeams.Size = 0i64;
  this->Scanbeams.NumPages = 0i64;
  this->Scanbeams.MaxPages = 0i64;
  this->Scanbeams.Pages = 0i64;
  this->HorizontalEdges.pHeap = heap;
  this->HorizontalEdges.Size = 0i64;
  this->HorizontalEdges.NumPages = 0i64;
  this->HorizontalEdges.MaxPages = 0i64;
  this->HorizontalEdges.Pages = 0i64;
  *(_QWORD *)&this->StartHorizontals = 0i64;
  this->LastX = -1.0e30;
  this->LastY = -1.0e30;
  this->MinX = 1.0e30;
  this->MinY = 1.0e30;
  this->MaxX = -1.0e30;
  this->MaxY = -1.0e30;
  this->ActiveChains.pHeap = heap;
  this->ActiveChains.Size = 0i64;
  this->ActiveChains.NumPages = 0i64;
  this->ActiveChains.MaxPages = 0i64;
  this->ActiveChains.Pages = 0i64;
  this->ChainsAtBottom.pHeap = heap;
  this->ChainsAtBottom.Size = 0i64;
  this->ChainsAtBottom.NumPages = 0i64;
  this->ChainsAtBottom.MaxPages = 0i64;
  this->ChainsAtBottom.Pages = 0i64;
  this->ValidChains.pHeap = heap;
  this->ValidChains.Size = 0i64;
  this->ValidChains.NumPages = 0i64;
  this->ValidChains.MaxPages = 0i64;
  this->ValidChains.Pages = 0i64;
  this->Intersections.pHeap = heap;
  this->Intersections.Size = 0i64;
  this->Intersections.NumPages = 0i64;
  this->Intersections.MaxPages = 0i64;
  this->Intersections.Pages = 0i64;
  this->ContourNodes.pHeap = heap;
  this->ContourNodes.Size = 0i64;
  this->ContourNodes.NumPages = 0i64;
  this->ContourNodes.MaxPages = 0i64;
  this->ContourNodes.Pages = 0i64;
  this->FanEdges.Size = 0i64;
  this->FanEdges.NumPages = 0i64;
  this->FanEdges.MaxPages = 0i64;
  this->FanEdges.Pages = 0i64;
  this->FanEdges.pHeap = heap;
}

void __fastcall Scaleform::Render::Hairliner::AddVertex(Scaleform::Render::Hairliner *this, float x, float y)
{
  Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::SrcVertexType,4,16> *p_SrcVertices; // rbx
  unsigned __int64 v4; // rdi

  p_SrcVertices = &this->SrcVertices;
  v4 = this->SrcVertices.Size >> 4;
  if ( v4 >= this->SrcVertices.NumPages )
    Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16>::allocPage(
      (Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16> *)&this->SrcVertices,
      v4);
  p_SrcVertices->Pages[v4][p_SrcVertices->Size & 0xF] = (Scaleform::Render::Hairliner::SrcVertexType)__PAIR64__(LODWORD(y), LODWORD(x));
  ++p_SrcVertices->Size;
}

void __fastcall Scaleform::Render::Hairliner::Clear(Scaleform::Render::Hairliner *this)
{
  this->Paths.MaxPages = 0i64;
  this->Paths.NumPages = 0i64;
  this->Paths.Size = 0i64;
  this->Paths.Pages = 0i64;
  this->SrcVertices.MaxPages = 0i64;
  this->SrcVertices.NumPages = 0i64;
  this->SrcVertices.Size = 0i64;
  this->SrcVertices.Pages = 0i64;
  this->OutVertices.MaxPages = 0i64;
  this->OutVertices.NumPages = 0i64;
  this->OutVertices.Size = 0i64;
  this->OutVertices.Pages = 0i64;
  this->Triangles.MaxPages = 0i64;
  this->Triangles.NumPages = 0i64;
  this->Triangles.Size = 0i64;
  this->Triangles.Pages = 0i64;
  this->LastVertex = 0;
  this->SrcEdges.MaxPages = 0i64;
  this->SrcEdges.NumPages = 0i64;
  this->SrcEdges.Size = 0i64;
  this->SrcEdges.Pages = 0i64;
  this->MonoChains.MaxPages = 0i64;
  this->MonoChains.NumPages = 0i64;
  this->MonoChains.Size = 0i64;
  this->MonoChains.Pages = 0i64;
  this->MonoChainsSorted.MaxPages = 0i64;
  this->MonoChainsSorted.NumPages = 0i64;
  this->MonoChainsSorted.Size = 0i64;
  this->MonoChainsSorted.Pages = 0i64;
  this->Scanbeams.MaxPages = 0i64;
  this->Scanbeams.NumPages = 0i64;
  this->Scanbeams.Size = 0i64;
  this->Scanbeams.Pages = 0i64;
  this->HorizontalEdges.MaxPages = 0i64;
  this->HorizontalEdges.NumPages = 0i64;
  this->HorizontalEdges.Size = 0i64;
  this->HorizontalEdges.Pages = 0i64;
  *(_QWORD *)&this->StartHorizontals = 0i64;
  this->ActiveChains.MaxPages = 0i64;
  this->ActiveChains.NumPages = 0i64;
  this->ActiveChains.Size = 0i64;
  this->ActiveChains.Pages = 0i64;
  this->ChainsAtBottom.MaxPages = 0i64;
  this->ChainsAtBottom.NumPages = 0i64;
  this->ChainsAtBottom.Size = 0i64;
  this->ChainsAtBottom.Pages = 0i64;
  this->ValidChains.MaxPages = 0i64;
  this->ValidChains.NumPages = 0i64;
  this->ValidChains.Size = 0i64;
  this->ValidChains.Pages = 0i64;
  this->Intersections.MaxPages = 0i64;
  this->Intersections.NumPages = 0i64;
  this->Intersections.Size = 0i64;
  this->Intersections.Pages = 0i64;
  this->ContourNodes.MaxPages = 0i64;
  this->ContourNodes.NumPages = 0i64;
  this->ContourNodes.Size = 0i64;
  this->ContourNodes.Pages = 0i64;
  this->FanEdges.MaxPages = 0i64;
  this->FanEdges.NumPages = 0i64;
  this->FanEdges.Size = 0i64;
  this->FanEdges.Pages = 0i64;
  this->MinX = 1.0e30;
  this->MinY = 1.0e30;
  this->MaxX = -1.0e30;
  this->MaxY = -1.0e30;
  Scaleform::Render::LinearHeap::ClearAndRelease(this->pHeap);
}

void __fastcall Scaleform::Render::Hairliner::ClosePath(Scaleform::Render::Hairliner *this)
{
  Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::SrcVertexType,4,16> *p_SrcVertices; // rbx
  unsigned __int64 v2; // rdi
  Scaleform::Render::Hairliner::SrcVertexType *v3; // rsi

  p_SrcVertices = &this->SrcVertices;
  v2 = this->SrcVertices.Size >> 4;
  v3 = &this->SrcVertices.Pages[(unsigned __int64)this->LastVertex >> 4][this->LastVertex & 0xF];
  if ( v2 >= this->SrcVertices.NumPages )
    Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16>::allocPage(
      (Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16> *)&this->SrcVertices,
      v2);
  p_SrcVertices->Pages[v2][p_SrcVertices->Size & 0xF] = *v3;
  ++p_SrcVertices->Size;
}

void __fastcall Scaleform::Render::Hairliner::FinalizePath(
        Scaleform::Render::Hairliner *this,
        unsigned int __formal,
        unsigned int a3,
        bool a4)
{
  unsigned __int64 LastVertex; // rcx
  unsigned int Size; // edx
  unsigned __int64 v7; // rsi
  Scaleform::Render::Hairliner::PathType v8; // [rsp+30h] [rbp+8h]

  LastVertex = this->LastVertex;
  Size = this->SrcVertices.Size;
  if ( Size >= (int)LastVertex + 2 )
  {
    v7 = this->Paths.Size >> 4;
    v8.start = LastVertex;
    v8.end = Size - 1;
    if ( v7 >= this->Paths.NumPages )
      Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::PathType,4,4>::allocPage(&this->Paths, v7);
    this->Paths.Pages[v7][this->Paths.Size & 0xF] = v8;
    ++this->Paths.Size;
    this->LastVertex = this->SrcVertices.Size;
  }
  else if ( LastVertex < this->SrcVertices.Size )
  {
    this->SrcVertices.Size = LastVertex;
  }
}

float __fastcall Scaleform::Render::Hairliner::GetLastX(Scaleform::Render::Hairliner *this)
{
  return this->SrcVertices.Pages[(this->SrcVertices.Size - 1) >> 4][(LODWORD(this->SrcVertices.Size) - 1) & 0xF].x;
}

float __fastcall Scaleform::Render::Hairliner::GetLastY(Scaleform::Render::Hairliner *this)
{
  return this->SrcVertices.Pages[(this->SrcVertices.Size - 1) >> 4][(LODWORD(this->SrcVertices.Size) - 1) & 0xF].y;
}

void __fastcall Scaleform::Render::Hairliner::GetMesh(
        Scaleform::Render::Hairliner *this,
        unsigned int __formal,
        Scaleform::Render::TessMesh *mesh)
{
  *(_QWORD *)&mesh->Style1 = 1i64;
  mesh->MeshIdx = 0;
  *(_QWORD *)&mesh->Flags1 = 0i64;
  mesh->StartVertex = 0;
  mesh->VertexCount = this->OutVertices.Size;
}

_BOOL8 __fastcall Scaleform::Render::Hairliner::GetMeshCount(Scaleform::Render::Hairliner *this)
{
  return this->Triangles.Size != 0;
}

__int64 __fastcall Scaleform::Render::Hairliner::GetMeshTriangleCount(Scaleform::Render::MeshCache *this)
{
  return this->Thrashing;
}

__int64 __fastcall Scaleform::Render::Hairliner::GetMeshVertexCount(Scaleform::Render::Hairliner *this)
{
  return LODWORD(this->OutVertices.Size);
}

void __fastcall Scaleform::Render::Hairliner::GetTrianglesI16(
        Scaleform::Render::Hairliner *this,
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

__int64 __fastcall Scaleform::Render::Hairliner::GetVertices(
        Scaleform::Render::Hairliner *this,
        Scaleform::Render::TessMesh *mesh,
        Scaleform::Render::TessVertex *vertices,
        unsigned int num)
{
  unsigned int v6; // er10
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  Scaleform::Render::Hairliner::OutVertexType *v9; // rdx
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  Scaleform::Render::Hairliner::OutVertexType *v12; // rdx
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  Scaleform::Render::Hairliner::OutVertexType *v15; // rdx
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  Scaleform::Render::Hairliner::OutVertexType *v18; // rdx
  unsigned int *p_Idx; // r11
  unsigned __int64 StartVertex; // rdx
  __int64 v21; // r8
  Scaleform::Render::Hairliner::OutVertexType *v22; // rdx

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
        if ( StartVertex >= this->OutVertices.Size )
          break;
        v21 = StartVertex & 0xF;
        v22 = this->OutVertices.Pages[(unsigned __int64)(unsigned int)StartVertex >> 4];
        *(p_Idx - 2) = LODWORD(v22[v21].x);
        *(p_Idx - 1) = LODWORD(v22[v21].y);
        *p_Idx = 0;
        p_Idx[1] = 1;
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
      if ( v7 >= this->OutVertices.Size )
        break;
      v8 = v7 & 0xF;
      v9 = this->OutVertices.Pages[(unsigned __int64)(unsigned int)v7 >> 4];
      vertices->x = v9[v8].x;
      vertices->y = v9[v8].y;
      vertices->Idx = 0;
      *(_DWORD *)vertices->Styles = 1;
      vertices->Flags = v9[v8].alpha != 0 ? 2 : 0;
      v10 = ++mesh->StartVertex;
      if ( v10 >= this->OutVertices.Size )
        return v6 + 1;
      v11 = v10 & 0xF;
      v12 = this->OutVertices.Pages[(unsigned __int64)(unsigned int)v10 >> 4];
      vertices[1].x = v12[v11].x;
      vertices[1].y = v12[v11].y;
      vertices[1].Idx = 0;
      *(_DWORD *)vertices[1].Styles = 1;
      vertices[1].Flags = v12[v11].alpha != 0 ? 2 : 0;
      v13 = ++mesh->StartVertex;
      if ( v13 >= this->OutVertices.Size )
        return v6 + 2;
      v14 = v13 & 0xF;
      v15 = this->OutVertices.Pages[(unsigned __int64)(unsigned int)v13 >> 4];
      vertices[2].x = v15[v14].x;
      vertices[2].y = v15[v14].y;
      vertices[2].Idx = 0;
      *(_DWORD *)vertices[2].Styles = 1;
      vertices[2].Flags = v15[v14].alpha != 0 ? 2 : 0;
      v16 = ++mesh->StartVertex;
      if ( v16 >= this->OutVertices.Size )
        return v6 + 3;
      v17 = v16 & 0xF;
      v18 = this->OutVertices.Pages[(unsigned __int64)(unsigned int)v16 >> 4];
      vertices[3].x = v18[v17].x;
      vertices[3].y = v18[v17].y;
      vertices[3].Idx = 0;
      *(_DWORD *)vertices[3].Styles = 1;
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

void __fastcall Scaleform::Render::Hairliner::SetToleranceParam(
        Scaleform::Render::Hairliner *this,
        const Scaleform::Render::ToleranceParams *param)
{
  this->Epsilon = param->Epsilon;
  this->IntersectionEpsilon = param->IntersectionEpsilon;
}

Scaleform::Render::Matrix2x4<float> *__fastcall Scaleform::Render::Hairliner::StretchTo(
        Scaleform::Render::Hairliner *this,
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
  Scaleform::Render::Hairliner::OutVertexType **Pages; // r10
  float v17; // xmm3_4
  Scaleform::Render::Hairliner::OutVertexType *v18; // rax
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
  Scaleform::Render::Hairliner::OutVertexType *v29; // rax
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
    Size = this->OutVertices.Size;
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
      Pages = this->OutVertices.Pages;
      v17 = FLOAT_N1_0e30;
      do
      {
        v18 = Pages[v12 >> 4];
        v19 = *(_QWORD *)&v18[v12 & 0xF].x;
        LODWORD(v18) = v18[v12 & 0xF].alpha;
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
      if ( this->OutVertices.Size )
      {
        do
        {
          v26 = v6 & 0xF;
          v27 = v6++ >> 4;
          v28 = v26;
          v29 = this->OutVertices.Pages[v27];
          x = v29[v28].x;
          y = v29[v28].y;
          v29[v28].x = (float)((float)(x * result->M[0][0]) + (float)(y * result->M[0][1])) + result->M[0][3];
          v29[v28].y = (float)((float)(x * result->M[1][0]) + (float)(y * result->M[1][1])) + result->M[1][3];
        }
        while ( v6 < this->OutVertices.Size );
      }
      src = *result;
      Scaleform::Render::Matrix2x4<float>::SetInverse(result, &src);
    }
  }
  return result;
}

void __fastcall Scaleform::Render::Hairliner::Tessellate(Scaleform::Render::Hairliner *this)
{
  unsigned __int64 v1; // rdi
  unsigned __int64 v3; // r9
  unsigned __int64 i; // r10
  Scaleform::Render::Hairliner::FanEdgeType **Pages; // r14
  Scaleform::Render::Hairliner::FanEdgeType *v6; // r8
  Scaleform::Render::Hairliner::FanEdgeType *v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  Scaleform::Render::Hairliner::FanEdgeType *v11; // rdx

  v1 = 0i64;
  this->MinX = 1.0e30;
  this->Triangles.Size = 0i64;
  this->MinY = 1.0e30;
  this->MaxX = -1.0e30;
  this->MaxY = -1.0e30;
  Scaleform::Render::Hairliner::buildGraph(this);
  if ( this->FanEdges.Size >= 2 )
  {
    Scaleform::Alg::QuickSortSliced<Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::FanEdgeType,4,16>,bool (*)(Scaleform::Render::Hairliner::FanEdgeType const &,Scaleform::Render::Hairliner::FanEdgeType const &)>(
      &this->FanEdges,
      0i64,
      this->FanEdges.Size,
      Scaleform::Render::Hairliner::cmpEdges);
    v3 = 1i64;
    for ( i = 1i64; v3 < this->FanEdges.Size; ++v3 )
    {
      Pages = this->FanEdges.Pages;
      v6 = Pages[(v3 - 1) >> 4];
      v7 = Pages[v3 >> 4];
      if ( v6[((_DWORD)v3 - 1) & 0xF].node1 != v7[v3 & 0xF].node1
        || v6[((_DWORD)v3 - 1) & 0xF].node2 != v7[v3 & 0xF].node2 )
      {
        v8 = i & 0xF;
        v9 = i++ >> 4;
        v10 = v8;
        v11 = Pages[v9];
        *(_QWORD *)&v11[v10].node1 = *(_QWORD *)&v7[v3 & 0xF].node1;
        v11[v10].slope = v7[v3 & 0xF].slope;
      }
    }
    if ( i < this->FanEdges.Size )
      this->FanEdges.Size = i;
    if ( this->FanEdges.Size )
    {
      do
      {
        if ( (this->FanEdges.Pages[v1 >> 4][v1 & 0xF].node1 & 0x80000000) == 0 )
        {
          Scaleform::Render::Hairliner::generateContourAA(this, v1);
          Scaleform::Render::Hairliner::generateTriangles(this, COERCE_FLOAT(LODWORD(this->Width) ^ _xmm));
        }
        ++v1;
      }
      while ( v1 < this->FanEdges.Size );
    }
  }
}

void __fastcall Scaleform::Render::Hairliner::Transform(
        Scaleform::Render::Hairliner *this,
        const Scaleform::Render::Matrix2x4<float> *m)
{
  unsigned __int64 v2; // r10
  __int64 v3; // r9
  Scaleform::Render::Hairliner::OutVertexType *v4; // rax
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
  for ( this->MaxY = -1.0e30; v2 < this->OutVertices.Size; ++v2 )
  {
    v3 = v2 & 0xF;
    v4 = this->OutVertices.Pages[v2 >> 4];
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

__int64 __fastcall Scaleform::Render::Hairliner::addEventVertex(
        Scaleform::Render::Hairliner *this,
        const Scaleform::Render::Hairliner::SrcVertexType *v1)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // rdx
  Scaleform::Render::Hairliner::OutVertexType *v5; // rax
  Scaleform::Render::Hairliner::SrcVertexType v7; // [rsp+20h] [rbp-18h]

  if ( v1->y != this->LastY || v1->x != this->LastX )
  {
    *(Scaleform::Render::Hairliner::SrcVertexType *)&this->LastX = *v1;
    v3 = this->OutVertices.Size >> 4;
    v7 = *v1;
    if ( v3 >= this->OutVertices.NumPages )
      Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(
        (Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> *)&this->OutVertices,
        v3);
    v4 = this->OutVertices.Size & 0xF;
    v5 = this->OutVertices.Pages[v3];
    *(Scaleform::Render::Hairliner::SrcVertexType *)&v5[v4].x = v7;
    v5[v4].alpha = 1;
    ++this->OutVertices.Size;
  }
  return (unsigned int)(LODWORD(this->OutVertices.Size) - 1);
}

__int64 __fastcall Scaleform::Render::Hairliner::addEventVertex(
        Scaleform::Render::Hairliner *this,
        const Scaleform::Render::Hairliner::MonoChainType *mc,
        float yb,
        bool enforce)
{
  Scaleform::Render::Hairliner::SrcVertexType **Pages; // r8
  unsigned __int64 lower; // rdx
  Scaleform::Render::Hairliner::SrcVertexType **v8; // r9
  Scaleform::Render::Hairliner::SrcEdgeType *edge; // r9
  float v10; // xmm3_4
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  Scaleform::Render::Hairliner::OutVertexType *v13; // rax

  if ( enforce )
  {
    if ( (mc->flags & 1) != 0
      && (v8 = this->SrcVertices.Pages, v8[(unsigned __int64)mc->edge->upper >> 4][mc->edge->upper & 0xF].y == yb) )
    {
      return Scaleform::Render::Hairliner::addEventVertex(
               this,
               &v8[(unsigned __int64)mc->edge->upper >> 4][mc->edge->upper & 0xF]);
    }
    else
    {
      edge = mc->edge;
      Pages = this->SrcVertices.Pages;
      lower = mc->edge->lower;
      if ( Pages[(unsigned __int64)(unsigned int)lower >> 4][lower & 0xF].y == yb )
        return Scaleform::Render::Hairliner::addEventVertex(this, &Pages[lower >> 4][lower & 0xF]);
      v10 = (float)((float)(yb - Pages[(unsigned __int64)edge->lower >> 4][edge->lower & 0xF].y) * edge->slope)
          + Pages[(unsigned __int64)edge->lower >> 4][edge->lower & 0xF].x;
      if ( yb != this->LastY
        || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v10 - this->LastX)) & _xmm) > this->Epsilon )
      {
        this->LastX = v10;
        this->LastY = yb;
        v11 = this->OutVertices.Size >> 4;
        if ( v11 >= this->OutVertices.NumPages )
          Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> *)&this->OutVertices,
            v11);
        v12 = this->OutVertices.Size & 0xF;
        v13 = this->OutVertices.Pages[v11];
        *(_QWORD *)&v13[v12].x = __PAIR64__(LODWORD(yb), LODWORD(v10));
        v13[v12].alpha = 1;
        ++this->OutVertices.Size;
      }
      return (unsigned int)(LODWORD(this->OutVertices.Size) - 1);
    }
  }
  else
  {
    if ( (mc->flags & 2) != 0 )
    {
      Pages = this->SrcVertices.Pages;
      lower = mc->edge->lower;
      if ( Pages[(unsigned __int64)(unsigned int)lower >> 4][lower & 0xF].y == yb )
        return Scaleform::Render::Hairliner::addEventVertex(this, &Pages[lower >> 4][lower & 0xF]);
    }
    return 0xFFFFFFFFi64;
  }
}

__int64 __fastcall Scaleform::Render::Hairliner::addJoin(
        Scaleform::Render::Hairliner *this,
        unsigned int refVertex,
        const Scaleform::Render::Hairliner::OutVertexType *v1,
        const Scaleform::Render::Hairliner::OutVertexType *v2,
        const Scaleform::Render::Hairliner::OutVertexType *v3,
        float len1,
        float len2,
        float width)
{
  float v12; // xmm0_4
  float y; // xmm3_4
  float x; // xmm2_4
  float v15; // xmm4_4
  float v16; // xmm14_4
  float v17; // xmm5_4
  float v18; // xmm6_4
  float v19; // xmm1_4
  float v20; // xmm11_4
  float v21; // xmm12_4
  float v22; // xmm7_4
  float v23; // xmm2_4
  float v24; // xmm3_4
  unsigned __int64 v25; // rbx
  __int64 result; // rax
  __int64 v27; // r8
  Scaleform::Render::Hairliner::OutVertexType *v28; // rcx
  float v29; // xmm10_4
  float v30; // xmm8_4
  float v31; // xmm13_4
  float v32; // xmm1_4
  float v33; // xmm15_4
  float v34; // xmm14_4
  float v35; // xmm5_4
  float v36; // xmm4_4
  float v37; // xmm0_4
  float v39; // xmm1_4
  float v40; // xmm15_4
  float v41; // xmm2_4
  unsigned __int64 v42; // rdi
  __int64 v43; // rdx
  Scaleform::Render::Hairliner::OutVertexType *v44; // rax
  unsigned __int64 v45; // rdi
  __int64 v46; // rdx
  Scaleform::Render::Hairliner::OutVertexType *v47; // rax
  unsigned __int64 v48; // rbx
  __int64 v49; // rdx
  Scaleform::Render::Hairliner::OutVertexType *v50; // rax
  unsigned __int64 v51; // rdi
  __int64 v52; // rdx
  Scaleform::Render::Hairliner::OutVertexType *v53; // rax
  unsigned __int64 v54; // rdi
  __int64 v55; // xmm0_8
  __int64 v56; // rdx
  Scaleform::Render::Hairliner::OutVertexType *v57; // rax
  int Size; // ecx
  Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> *p_Triangles; // r14
  unsigned __int64 v60; // rbx
  int v61; // edi
  __int64 v62; // rdx
  Scaleform::Render::StrokerAA::VertexType *v63; // rax
  float v64; // [rsp+38h] [rbp-C9h]
  float v65; // [rsp+3Ch] [rbp-C5h]
  __int64 v66; // [rsp+40h] [rbp-C1h]
  float v67[4]; // [rsp+40h] [rbp-C1h]
  __int64 v68; // [rsp+50h] [rbp-B1h]
  float v69[4]; // [rsp+50h] [rbp-B1h]
  __int64 v70; // [rsp+50h] [rbp-B1h]
  float v71; // [rsp+148h] [rbp+47h]
  float v72; // [rsp+158h] [rbp+57h]
  float len1a; // [rsp+170h] [rbp+6Fh]

  v12 = Scaleform::Render::Math2D::TurnRatio<Scaleform::Render::Hairliner::OutVertexType,Scaleform::Render::Hairliner::OutVertexType,Scaleform::Render::Hairliner::OutVertexType>(
          (const Scaleform::Render::TessVertex *)v1,
          (const Scaleform::Render::TessVertex *)v2,
          (const Scaleform::Render::TessVertex *)v3,
          len1,
          len2);
  y = v2->y;
  x = v2->x;
  v15 = v1->y;
  v16 = v1->x;
  v17 = v3->y;
  v65 = v12;
  v18 = (float)((float)(v15 - y) * width) / len1;
  v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v12) & _xmm);
  v20 = (float)((float)(v2->x - v1->x) * width) / len1;
  v21 = (float)((float)(y - v17) * width) / len2;
  v22 = (float)((float)(v3->x - v2->x) * width) / len2;
  if ( v19 < 0.125 )
  {
    if ( len1 <= len2 )
    {
      v23 = x + v21;
      v24 = y + v22;
    }
    else
    {
      v23 = x + v18;
      v24 = y + v20;
    }
    v25 = this->OutVertices.Size >> 4;
    if ( v25 >= this->OutVertices.NumPages )
      Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(
        (Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> *)&this->OutVertices,
        v25);
    result = 1i64;
    v27 = this->OutVertices.Size & 0xF;
    v28 = this->OutVertices.Pages[v25];
    *(_QWORD *)&v28[v27].x = __PAIR64__(LODWORD(v24), LODWORD(v23));
    v28[v27].alpha = 0;
    ++this->OutVertices.Size;
    return result;
  }
  v71 = v16 + v18;
  v29 = x + v18;
  v30 = y + v22;
  v72 = v15 + v20;
  v31 = x + v21;
  v32 = v15 + v20;
  v33 = (float)(x + v18) - (float)(v16 + v18);
  v34 = y + v20;
  v35 = (float)(v17 + v22) - (float)(y + v22);
  v64 = (float)(v3->x + v21) - (float)(x + v21);
  v36 = (float)(y + v20) - (float)(v15 + v20);
  v37 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v35 * v33) - (float)(v64 * v36))) & _xmm);
  if ( (float)((float)(len1 + len2) * this->IntersectionEpsilon) > v37 )
  {
    v67[1] = v34 + v18;
    v69[0] = v31 + v22;
    goto LABEL_22;
  }
  v39 = (float)((float)((float)(v32 - v30) * v64) - (float)((float)(v71 - v31) * v35))
      / (float)((float)(v35 * v33) - (float)(v64 * v36));
  v40 = (float)(v33 * v39) + v71;
  len1a = (float)(v36 * v39) + v72;
  v41 = sqrtf((float)((float)(len1a - y) * (float)(len1a - y)) + (float)((float)(v40 - x) * (float)(v40 - x)));
  if ( v65 <= 0.0 )
  {
    if ( (float)(width * -4.0) >= v41 )
      goto LABEL_17;
    v20 = v20 + v20;
    v21 = v21 + v21;
    v67[1] = (float)(v18 + v18) + v34;
    v69[0] = (float)(v22 + v22) + v31;
LABEL_22:
    v51 = this->OutVertices.Size >> 4;
    if ( v51 >= this->OutVertices.NumPages )
      Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(
        (Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> *)&this->OutVertices,
        v51);
    v52 = this->OutVertices.Size & 0xF;
    v53 = this->OutVertices.Pages[v51];
    v67[0] = v29 - v20;
    *(_QWORD *)&v53[v52].x = *(_QWORD *)v67;
    v53[v52].alpha = 0;
    v54 = ++this->OutVertices.Size >> 4;
    if ( v54 >= this->OutVertices.NumPages )
      Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(
        (Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> *)&this->OutVertices,
        this->OutVertices.Size >> 4);
    v69[1] = v30 - v21;
    v55 = *(_QWORD *)v69;
    LODWORD(v70) = refVertex;
    v56 = this->OutVertices.Size & 0xF;
    v57 = this->OutVertices.Pages[v54];
    *(_QWORD *)&v57[v56].x = v55;
    v57[v56].alpha = 0;
    ++this->OutVertices.Size;
    Size = this->OutVertices.Size;
    p_Triangles = (Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> *)&this->Triangles;
    v60 = p_Triangles->Size >> 4;
    v61 = Size - 1;
    HIDWORD(v70) = Size - 2;
    if ( v60 >= p_Triangles->NumPages )
      Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(p_Triangles, v60);
    v62 = p_Triangles->Size & 0xF;
    v63 = p_Triangles->Pages[v60];
    *(_QWORD *)&v63[v62].x = v70;
    *(_DWORD *)&v63[v62].style = v61;
    ++p_Triangles->Size;
    return 2i64;
  }
  if ( v41 > (float)(fminf(len1, len2) / v65) )
  {
    v42 = this->OutVertices.Size >> 4;
    *(float *)&v66 = v29;
    *(float *)&v68 = v31;
    if ( v42 >= this->OutVertices.NumPages )
      Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(
        (Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> *)&this->OutVertices,
        v42);
    v43 = this->OutVertices.Size & 0xF;
    v44 = this->OutVertices.Pages[v42];
    *((float *)&v66 + 1) = y + v20;
    *(_QWORD *)&v44[v43].x = v66;
    v44[v43].alpha = 0;
    v45 = ++this->OutVertices.Size >> 4;
    if ( v45 >= this->OutVertices.NumPages )
      Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(
        (Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> *)&this->OutVertices,
        this->OutVertices.Size >> 4);
    v46 = this->OutVertices.Size & 0xF;
    v47 = this->OutVertices.Pages[v45];
    *((float *)&v68 + 1) = y + v22;
    *(_QWORD *)&v47[v46].x = v68;
    v47[v46].alpha = 0;
    ++this->OutVertices.Size;
    return 2i64;
  }
LABEL_17:
  v48 = this->OutVertices.Size >> 4;
  if ( v48 >= this->OutVertices.NumPages )
    Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(
      (Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> *)&this->OutVertices,
      v48);
  v49 = this->OutVertices.Size & 0xF;
  v50 = this->OutVertices.Pages[v48];
  *(_QWORD *)&v50[v49].x = __PAIR64__(LODWORD(len1a), LODWORD(v40));
  v50[v49].alpha = 0;
  result = 1i64;
  ++this->OutVertices.Size;
  return result;
}

void __fastcall Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::MonoChainType *,4,8>::allocPage(
        Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,8> *this,
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
      this->Pages = (Scaleform::Render::Tessellator::MonoVertexType ***)v5;
      this->MaxPages = 2 * v6;
    }
    else
    {
      this->MaxPages = 8i64;
      this->Pages = (Scaleform::Render::Tessellator::MonoVertexType ***)Scaleform::Render::LinearHeap::Alloc(
                                                                          this->pHeap,
                                                                          0x40ui64);
    }
  }
  this->Pages[nb] = (Scaleform::Render::Tessellator::MonoVertexType **)Scaleform::Render::LinearHeap::Alloc(
                                                                         this->pHeap,
                                                                         0x80ui64);
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

void __fastcall Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::HorizontalEdgeType,2,4>::allocPage(
        Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::HorizontalEdgeType,2,4> *this,
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
      this->Pages = (Scaleform::Render::Hairliner::HorizontalEdgeType **)v5;
      this->MaxPages = 2 * v6;
    }
    else
    {
      this->MaxPages = 4i64;
      this->Pages = (Scaleform::Render::Hairliner::HorizontalEdgeType **)Scaleform::Render::LinearHeap::Alloc(
                                                                           this->pHeap,
                                                                           0x20ui64);
    }
  }
  this->Pages[nb] = (Scaleform::Render::Hairliner::HorizontalEdgeType *)Scaleform::Render::LinearHeap::Alloc(
                                                                          this->pHeap,
                                                                          0x50ui64);
  ++this->NumPages;
}

void __fastcall Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::MonoChainType,4,8>::allocPage(
        Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::MonoChainType,4,8> *this,
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
      this->Pages = (Scaleform::Render::Hairliner::MonoChainType **)v5;
      this->MaxPages = 2 * v6;
    }
    else
    {
      this->MaxPages = 8i64;
      this->Pages = (Scaleform::Render::Hairliner::MonoChainType **)Scaleform::Render::LinearHeap::Alloc(
                                                                      this->pHeap,
                                                                      0x40ui64);
    }
  }
  this->Pages[nb] = (Scaleform::Render::Hairliner::MonoChainType *)Scaleform::Render::LinearHeap::Alloc(
                                                                     this->pHeap,
                                                                     0x200ui64);
  ++this->NumPages;
}

void __fastcall Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::PathType,4,4>::allocPage(
        Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::PathType,4,4> *this,
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
      this->Pages = (Scaleform::Render::Hairliner::PathType **)v5;
      this->MaxPages = 2 * v6;
    }
    else
    {
      this->MaxPages = 4i64;
      this->Pages = (Scaleform::Render::Hairliner::PathType **)Scaleform::Render::LinearHeap::Alloc(
                                                                 this->pHeap,
                                                                 0x20ui64);
    }
  }
  this->Pages[nb] = (Scaleform::Render::Hairliner::PathType *)Scaleform::Render::LinearHeap::Alloc(
                                                                this->pHeap,
                                                                0x80ui64);
  ++this->NumPages;
}

void __fastcall Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::SrcEdgeType,4,16>::allocPage(
        Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::SrcEdgeType,4,16> *this,
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
      this->Pages = (Scaleform::Render::Hairliner::SrcEdgeType **)v5;
      this->MaxPages = 2 * v6;
    }
    else
    {
      this->MaxPages = 16i64;
      this->Pages = (Scaleform::Render::Hairliner::SrcEdgeType **)Scaleform::Render::LinearHeap::Alloc(
                                                                    this->pHeap,
                                                                    0x80ui64);
    }
  }
  this->Pages[nb] = (Scaleform::Render::Hairliner::SrcEdgeType *)Scaleform::Render::LinearHeap::Alloc(
                                                                   this->pHeap,
                                                                   0x180ui64);
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

void __fastcall Scaleform::Render::Hairliner::buildEdgeList(
        Scaleform::Render::Hairliner *this,
        unsigned int start,
        unsigned int numEdges,
        int step)
{
  unsigned int v4; // edi
  unsigned __int64 Size_low; // r13
  Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::SrcEdgeType,4,16> *p_SrcEdges; // rbx
  Scaleform::Render::Hairliner::SrcVertexType **Pages; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  Scaleform::Render::Hairliner::SrcVertexType *v14; // r8
  Scaleform::Render::Hairliner::SrcVertexType *v15; // rcx
  __int64 v16; // rdx
  Scaleform::Render::Hairliner::SrcEdgeType *v17; // rax
  unsigned __int64 v18; // rdi
  Scaleform::Render::Hairliner::SrcEdgeType *v19; // rax
  unsigned int lower; // er8
  Scaleform::Render::Hairliner::SrcVertexType **v21; // rdx
  __int64 v22; // rdx
  Scaleform::Render::Hairliner::MonoChainType *v23; // rcx
  __int128 v24; // [rsp+20h] [rbp-48h]
  __int128 v25; // [rsp+20h] [rbp-48h]
  __int128 v26; // [rsp+30h] [rbp-38h]

  v4 = 0;
  Size_low = LODWORD(this->SrcEdges.Size);
  if ( numEdges )
  {
    p_SrcEdges = &this->SrcEdges;
    do
    {
      Pages = this->SrcVertices.Pages;
      v12 = start;
      start += step;
      *(_QWORD *)&v24 = __PAIR64__(start, v12);
      v13 = p_SrcEdges->Size >> 4;
      v14 = Pages[v12 >> 4];
      v15 = Pages[(unsigned __int64)start >> 4];
      *((float *)&v24 + 2) = (float)(v15[start & 0xF].x - v14[v12 & 0xF].x)
                           / (float)(v15[start & 0xF].y - v14[v12 & 0xF].y);
      if ( v13 >= p_SrcEdges->NumPages )
        Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::SrcEdgeType,4,16>::allocPage(p_SrcEdges, v13);
      v16 = p_SrcEdges->Size & 0xF;
      v17 = p_SrcEdges->Pages[v13];
      *(_OWORD *)&v17[v16].lower = v24;
      v17[v16].next = 0i64;
      ++p_SrcEdges->Size;
      if ( v4 )
        this->SrcEdges.Pages[(this->SrcEdges.Size - 2) >> 4][(LODWORD(this->SrcEdges.Size) - 2) & 0xF].next = &p_SrcEdges->Pages[(p_SrcEdges->Size - 1) >> 4][(LODWORD(p_SrcEdges->Size) - 1) & 0xF];
      ++v4;
    }
    while ( v4 < numEdges );
  }
  v18 = this->MonoChains.Size >> 4;
  DWORD2(v26) = -1;
  v19 = this->SrcEdges.Pages[Size_low >> 4];
  lower = v19[Size_low & 0xF].lower;
  v21 = this->SrcVertices.Pages;
  *(_QWORD *)&v26 = LODWORD(v19[Size_low & 0xF].slope);
  *(_QWORD *)&v25 = &v19[Size_low & 0xF];
  DWORD2(v25) = LODWORD(v21[(unsigned __int64)lower >> 4][*(_DWORD *)v25 & 0xF].y);
  HIDWORD(v25) = LODWORD(v21[(unsigned __int64)lower >> 4][lower & 0xF].x);
  if ( v18 >= this->MonoChains.NumPages )
    Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::MonoChainType,4,8>::allocPage(&this->MonoChains, v18);
  v22 = this->MonoChains.Size & 0xF;
  v23 = this->MonoChains.Pages[v18];
  *(_OWORD *)&v23[v22].edge = v25;
  *(_OWORD *)&v23[v22].xt = v26;
  ++this->MonoChains.Size;
}

void __fastcall Scaleform::Render::Hairliner::buildGraph(Scaleform::Render::Hairliner *this)
{
  unsigned __int64 v2; // rbp
  Scaleform::Render::ArrayPaged<unsigned int,4,16> *p_Scanbeams; // rbx
  unsigned __int64 v4; // rsi
  float y; // xmm3_4
  unsigned __int64 v6; // r8
  unsigned __int64 i; // rdx
  unsigned int **Pages; // rbx
  __int64 v9; // r9
  Scaleform::Render::Hairliner::SrcVertexType *v10; // r10
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 j; // rbx
  unsigned __int64 k; // r14
  unsigned __int64 v15; // rbp
  Scaleform::Render::Hairliner::MonoChainType *v16; // rsi
  unsigned __int64 MaxPages; // rdx
  Scaleform::Render::LinearHeap *pHeap; // rcx
  void *v19; // rbx
  unsigned __int64 v20; // rax
  unsigned int v21; // er13
  unsigned int v22; // ebp
  unsigned int v23; // er14
  unsigned __int64 v24; // rcx
  float v25; // xmm7_4
  float v26; // xmm6_4
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rsi
  unsigned __int64 Size; // rdx
  unsigned int v30; // er9
  unsigned __int64 v31; // r8
  char Scanbeam; // r15
  unsigned int v33; // er8
  unsigned int v34; // edx
  unsigned __int64 v35; // rcx
  Scaleform::Render::Hairliner::MonoChainType ***v36; // r9
  Scaleform::Render::Hairliner::MonoChainType *v37; // r10
  __int64 v38; // rcx
  unsigned __int64 v39; // rax

  if ( this->SrcVertices.Size )
  {
    v2 = 0i64;
    p_Scanbeams = &this->Scanbeams;
    do
    {
      v4 = p_Scanbeams->Size >> 4;
      if ( v4 >= p_Scanbeams->NumPages )
        Scaleform::Render::ArrayPaged<unsigned int,4,16>::allocPage(p_Scanbeams, p_Scanbeams->Size >> 4);
      p_Scanbeams->Pages[v4][p_Scanbeams->Size & 0xF] = v2++;
      ++p_Scanbeams->Size;
    }
    while ( v2 < this->SrcVertices.Size );
    Scaleform::Alg::QuickSortSliced<Scaleform::Render::ArrayPaged<unsigned int,4,16>,Scaleform::Render::Tessellator::CmpScanbeams>(
      &this->Scanbeams,
      0i64,
      this->Scanbeams.Size,
      (Scaleform::Render::Tessellator::CmpScanbeams)&this->SrcVertices);
    y = FLOAT_N1_0e30;
    v6 = 0i64;
    for ( i = 0i64; i < this->Scanbeams.Size; ++i )
    {
      Pages = this->Scanbeams.Pages;
      v9 = Pages[i >> 4][i & 0xF] & 0xF;
      v10 = this->SrcVertices.Pages[(unsigned __int64)Pages[i >> 4][i & 0xF] >> 4];
      if ( (float)(v10[v9].y - y) <= (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v10[v9].y) & _xmm)
                                           * this->Epsilon) )
      {
        v10[v9].y = y;
      }
      else
      {
        v11 = v6 >> 4;
        v12 = v6++ & 0xF;
        Pages[v11][v12] = Pages[i >> 4][i & 0xF];
        y = v10[v9].y;
      }
    }
    if ( v6 < this->Scanbeams.Size )
      this->Scanbeams.Size = v6;
    for ( j = 0i64; j < this->Paths.Size; ++j )
      Scaleform::Render::Hairliner::decomposePath(this, &this->Paths.Pages[j >> 4][j & 0xF]);
    for ( k = 0i64; k < this->MonoChains.Size; ++this->MonoChainsSorted.Size )
    {
      v15 = this->MonoChainsSorted.Size >> 4;
      v16 = &this->MonoChains.Pages[k >> 4][k & 0xF];
      if ( v15 >= this->MonoChainsSorted.NumPages )
      {
        MaxPages = this->MonoChainsSorted.MaxPages;
        if ( v15 >= MaxPages )
        {
          pHeap = this->MonoChainsSorted.pHeap;
          if ( this->MonoChainsSorted.Pages )
          {
            v19 = Scaleform::Render::LinearHeap::Alloc(pHeap, 16 * MaxPages);
            memmove(v19, this->MonoChainsSorted.Pages, 8 * this->MonoChainsSorted.NumPages);
            v20 = this->MonoChainsSorted.MaxPages;
            this->MonoChainsSorted.Pages = (Scaleform::Render::Hairliner::MonoChainType ***)v19;
            this->MonoChainsSorted.MaxPages = 2 * v20;
          }
          else
          {
            this->MonoChainsSorted.MaxPages = 8i64;
            this->MonoChainsSorted.Pages = (Scaleform::Render::Hairliner::MonoChainType ***)Scaleform::Render::LinearHeap::Alloc(
                                                                                              pHeap,
                                                                                              0x40ui64);
          }
        }
        this->MonoChainsSorted.Pages[v15] = (Scaleform::Render::Hairliner::MonoChainType **)Scaleform::Render::LinearHeap::Alloc(
                                                                                              this->MonoChainsSorted.pHeap,
                                                                                              0x80ui64);
        ++this->MonoChainsSorted.NumPages;
      }
      ++k;
      this->MonoChainsSorted.Pages[v15][this->MonoChainsSorted.Size & 0xF] = v16;
    }
    Scaleform::Alg::QuickSortSliced<Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::HorizontalEdgeType,2,4>,bool (*)(Scaleform::Render::Hairliner::HorizontalEdgeType const &,Scaleform::Render::Hairliner::HorizontalEdgeType const &)>(
      &this->HorizontalEdges,
      0i64,
      this->HorizontalEdges.Size,
      (bool (__fastcall *)(const Scaleform::Render::Hairliner::HorizontalEdgeType *, const Scaleform::Render::Hairliner::HorizontalEdgeType *))Scaleform::Render::Tessellator::cmpIntersectionY);
    Scaleform::Alg::QuickSortSliced<Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::MonoChainType *,4,8>,bool (*)(Scaleform::Render::Hairliner::MonoChainType const *,Scaleform::Render::Hairliner::MonoChainType const *)>(
      &this->MonoChainsSorted,
      0i64,
      this->MonoChainsSorted.Size,
      (bool (__fastcall *)(const Scaleform::Render::Hairliner::MonoChainType *, const Scaleform::Render::Hairliner::MonoChainType *))Scaleform::Render::Hairliner::cmpMonoChains);
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = **this->Scanbeams.Pages;
    v25 = this->SrcVertices.Pages[v24 >> 4][v24 & 0xF].y;
    v26 = v25;
    this->LastX = -1.0e30;
    this->LastY = -1.0e30;
    if ( this->Scanbeams.Size )
    {
      v27 = 0i64;
      v28 = 0i64;
      do
      {
        if ( ++v21 < this->Scanbeams.Size )
          v25 = this->SrcVertices.Pages[(unsigned __int64)this->Scanbeams.Pages[(unsigned __int64)v21 >> 4][v21 & 0xF] >> 4][this->Scanbeams.Pages[(unsigned __int64)v21 >> 4][v21 & 0xF] & 0xF].y;
        Size = this->MonoChainsSorted.Size;
        v30 = v22;
        if ( v27 < Size )
        {
          do
          {
            if ( v26 < this->MonoChainsSorted.Pages[v27 >> 4][v27 & 0xF]->ySort )
              break;
            v27 = ++v22;
          }
          while ( v22 < Size );
        }
        v31 = this->HorizontalEdges.Size;
        this->StartHorizontals = v23;
        if ( v28 < v31 )
        {
          do
          {
            if ( v26 < this->HorizontalEdges.Pages[v28 >> 2][v28 & 3].y )
              break;
            v28 = ++v23;
          }
          while ( v23 < v31 );
        }
        this->NumHorizontals = v23 - this->StartHorizontals;
        Scanbeam = Scaleform::Render::Hairliner::nextScanbeam(this, v26, v25, v30, v22 - v30);
        if ( this->Intersections.Size )
          Scaleform::Render::Hairliner::processInterior(this, v26);
        else
          Scaleform::Render::Hairliner::sweepScanbeam(this, &this->ActiveChains, v26);
        if ( (Scanbeam & 2) != 0 )
        {
          v33 = 0;
          v34 = 0;
          if ( this->ActiveChains.Size )
          {
            v35 = 0i64;
            do
            {
              v36 = this->ActiveChains.Pages;
              v37 = v36[v35 >> 4][v35 & 0xF];
              if ( (v37->flags & 1) == 0 )
              {
                v38 = v33 & 0xF;
                v39 = (unsigned __int64)v33++ >> 4;
                v36[v39][v38] = v37;
              }
              v35 = ++v34;
            }
            while ( v34 < this->ActiveChains.Size );
          }
          if ( v33 < this->ActiveChains.Size )
            this->ActiveChains.Size = v33;
        }
        v26 = v25;
      }
      while ( v21 < this->Scanbeams.Size );
    }
  }
}

bool __fastcall Scaleform::Render::Hairliner::cmpEdges(
        const Scaleform::Render::Hairliner::FanEdgeType *a,
        const Scaleform::Render::Hairliner::FanEdgeType *b)
{
  if ( a->node1 == b->node1 )
    return b->slope > a->slope;
  else
    return a->node1 < b->node1;
}

bool __fastcall Scaleform::Render::Tessellator::cmpIntersectionY(
        const Scaleform::Render::Tessellator::IntersectionType *a,
        const Scaleform::Render::Tessellator::IntersectionType *b)
{
  return b->y > a->y;
}

_BOOL8 __fastcall Scaleform::Render::Hairliner::cmpMonoChains(
        const Scaleform::Render::Tessellator::MonoChainType *a,
        const Scaleform::Render::Tessellator::MonoChainType *b)
{
  float ySort; // xmm0_4
  float xb; // xmm1_4

  ySort = a->ySort;
  xb = b->ySort;
  if ( ySort == xb && (ySort = a->xb, xb = b->xb, ySort == xb) )
    return b->xt > a->xt;
  else
    return xb > ySort;
}

void __fastcall Scaleform::Render::Hairliner::decomposePath(
        Scaleform::Render::Hairliner *this,
        const Scaleform::Render::Hairliner::PathType *path)
{
  signed int start; // er13
  Scaleform::Render::ArrayPaged<unsigned int,4,16> *p_Scanbeams; // rbx
  signed int end; // er15
  unsigned __int64 v6; // rdi
  float y; // xmm6_4
  unsigned int v8; // er14
  Scaleform::Render::Hairliner::SrcVertexType **Pages; // rcx
  __int64 v10; // rsi
  Scaleform::Render::Hairliner::SrcVertexType *v11; // r8
  Scaleform::Render::Hairliner::SrcVertexType *v12; // r12
  float x; // xmm1_4
  float v14; // xmm0_4
  unsigned __int64 v15; // rsi
  __int64 v16; // rdx
  Scaleform::Render::Hairliner::HorizontalEdgeType *v17; // rax
  unsigned __int64 v18; // rdi
  signed int i; // edi
  Scaleform::Render::Hairliner::SrcVertexType **v20; // rdx
  float v21; // xmm1_4
  signed int v22; // er10
  unsigned int v23; // ebx
  int j; // er11
  signed int k; // edi
  Scaleform::Render::Hairliner::SrcVertexType **v26; // rdx
  signed int v27; // er10
  float v28; // xmm1_4
  float v29; // xmm0_4
  unsigned int v30; // ebx
  int m; // er11
  __int128 v32; // [rsp+20h] [rbp-58h]

  start = path->start;
  p_Scanbeams = &this->Scanbeams;
  end = path->end;
  v6 = this->Scanbeams.Size >> 4;
  y = this->SrcVertices.Pages[(unsigned __int64)(int)path->start >> 4][path->start & 0xF].y;
  if ( v6 >= this->Scanbeams.NumPages )
    Scaleform::Render::ArrayPaged<unsigned int,4,16>::allocPage(&this->Scanbeams, v6);
  v8 = start + 1;
  p_Scanbeams->Pages[v6][p_Scanbeams->Size & 0xF] = start;
  ++p_Scanbeams->Size;
  if ( start + 1 <= (unsigned int)end )
  {
    do
    {
      Pages = this->SrcVertices.Pages;
      v10 = v8 & 0xF;
      v12 = Pages[(unsigned __int64)v8 >> 4];
      if ( v12[v10].y == y )
      {
        v11 = Pages[(unsigned __int64)(v8 - 1) >> 4];
        x = v11[((_BYTE)v8 - 1) & 0xF].x;
        v14 = v12[v10].x;
        if ( x != v14 )
        {
          HIDWORD(v32) = -1;
          *(float *)&v32 = v11[((_BYTE)v8 - 1) & 0xF].x;
          *(Scaleform::Render::Hairliner::SrcVertexType *)((char *)&v32 + 4) = v12[v10];
          if ( x > v14 )
          {
            *(float *)&v32 = v12[v10].x;
            DWORD1(v32) = LODWORD(v11[((_BYTE)v8 - 1) & 0xF].x);
          }
          v15 = this->HorizontalEdges.Size >> 2;
          if ( v15 >= this->HorizontalEdges.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::HorizontalEdgeType,2,4>::allocPage(
              &this->HorizontalEdges,
              this->HorizontalEdges.Size >> 2);
          v16 = this->HorizontalEdges.Size & 3;
          v17 = this->HorizontalEdges.Pages[v15];
          *(_OWORD *)&v17[v16].x1 = v32;
          v17[v16].rv = -1;
          ++this->HorizontalEdges.Size;
        }
      }
      else
      {
        v18 = p_Scanbeams->Size >> 4;
        if ( v18 >= p_Scanbeams->NumPages )
          Scaleform::Render::ArrayPaged<unsigned int,4,16>::allocPage(p_Scanbeams, p_Scanbeams->Size >> 4);
        p_Scanbeams->Pages[v18][p_Scanbeams->Size & 0xF] = v8;
        ++p_Scanbeams->Size;
        y = v12[v10].y;
      }
      ++v8;
    }
    while ( v8 <= end );
  }
  for ( i = start; i < end; ++i )
  {
    v20 = this->SrcVertices.Pages;
    v21 = v20[(unsigned __int64)i >> 4][i & 0xF].y;
    if ( i > start )
    {
      if ( v20[(unsigned __int64)(i - 1) >> 4][(i - 1) & 0xF].y >= v21 )
      {
        v22 = i + 1;
        if ( v20[(unsigned __int64)(i + 1) >> 4][(i + 1) & 0xF].y > v21 )
        {
LABEL_21:
          v23 = 1;
          for ( j = v22 + 1;
                v22 < end
             && this->SrcVertices.Pages[(unsigned __int64)v22 >> 4][v22 & 0xF].y < this->SrcVertices.Pages[(unsigned __int64)j >> 4][j & 0xF].y;
                ++j )
          {
            ++v23;
            ++v22;
          }
          Scaleform::Render::Hairliner::buildEdgeList(this, i, v23, 1);
          i = v23 + i - 1;
        }
      }
    }
    else
    {
      v22 = i + 1;
      if ( v20[(unsigned __int64)(i + 1) >> 4][(i + 1) & 0xF].y > v21 )
        goto LABEL_21;
    }
  }
  for ( k = end; k > start; --k )
  {
    v26 = this->SrcVertices.Pages;
    v27 = k - 1;
    v28 = v26[(unsigned __int64)k >> 4][k & 0xF].y;
    v29 = v26[(unsigned __int64)(k - 1) >> 4][(k - 1) & 0xF].y;
    if ( k < end )
    {
      if ( v29 > v28 && v26[(unsigned __int64)(k + 1) >> 4][(k + 1) & 0xF].y >= v28 )
      {
LABEL_33:
        v30 = 1;
        for ( m = k - 2;
              v27 > start
           && this->SrcVertices.Pages[(unsigned __int64)v27 >> 4][v27 & 0xF].y < this->SrcVertices.Pages[(unsigned __int64)m >> 4][m & 0xF].y;
              --m )
        {
          ++v30;
          --v27;
        }
        Scaleform::Render::Hairliner::buildEdgeList(this, k, v30, -1);
        k += 1 - v30;
      }
    }
    else if ( v29 > v28 )
    {
      goto LABEL_33;
    }
  }
}

void __fastcall Scaleform::Render::Hairliner::emitEdge(
        Scaleform::Render::Hairliner *this,
        unsigned int v1,
        unsigned int v2)
{
  Scaleform::Render::Hairliner::OutVertexType **Pages; // rcx
  __int64 v5; // r9
  __int64 v7; // r11
  Scaleform::Render::Hairliner::OutVertexType *v9; // r8
  float v10; // xmm6_4
  Scaleform::Render::Hairliner::OutVertexType *v11; // rcx
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> *p_FanEdges; // rbx
  unsigned __int64 v17; // rdi
  float v18; // xmm6_4
  __int64 v19; // r8
  Scaleform::Render::StrokerAA::VertexType *v20; // rdx
  float v21; // eax
  unsigned __int64 v22; // rdi
  Scaleform::Render::StrokerAA::VertexType *v23; // rdx
  __int64 v24; // r8
  unsigned __int64 v25; // [rsp+20h] [rbp-28h]
  float v26; // [rsp+28h] [rbp-20h]
  float v27; // [rsp+28h] [rbp-20h]

  Pages = this->OutVertices.Pages;
  v5 = v2 & 0xF;
  v7 = v1 & 0xF;
  v9 = Pages[(unsigned __int64)v2 >> 4];
  v10 = 0.0;
  v11 = Pages[(unsigned __int64)v1 >> 4];
  v25 = __PAIR64__(v2, v1);
  v12 = v9[v5].x - v11[v7].x;
  v13 = v9[v5].y - v11[v7].y;
  v14 = (float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)((float)(v13 * v13) + (float)(v12 * v12));
  if ( v14 != 0.0 )
  {
    v15 = (float)(v12 * v12) / v14;
    if ( v12 < 0.0 )
      LODWORD(v15) ^= _xmm;
    if ( v13 > 0.0 )
      v15 = 1.0 - v15;
    v10 = v15 - 0.5;
  }
  p_FanEdges = (Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> *)&this->FanEdges;
  v26 = v10;
  v17 = p_FanEdges->Size >> 4;
  if ( v17 >= p_FanEdges->NumPages )
    Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(p_FanEdges, p_FanEdges->Size >> 4);
  v18 = v10 - 1.0;
  v19 = p_FanEdges->Size & 0xF;
  v20 = p_FanEdges->Pages[v17];
  v21 = v26;
  v27 = v18;
  *(_QWORD *)&v20[v19].x = v25;
  *(float *)&v20[v19].style = v21;
  ++p_FanEdges->Size;
  if ( v18 < -1.0 )
    v27 = v18 + 2.0;
  v22 = p_FanEdges->Size >> 4;
  if ( v22 >= p_FanEdges->NumPages )
    Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(p_FanEdges, p_FanEdges->Size >> 4);
  v23 = p_FanEdges->Pages[v22];
  v24 = p_FanEdges->Size & 0xF;
  *(_QWORD *)&v23[v24].x = __PAIR64__(v1, v2);
  *(float *)&v23[v24].style = v27;
  ++p_FanEdges->Size;
}

void __fastcall Scaleform::Render::Hairliner::generateContourAA(
        Scaleform::Render::Hairliner *this,
        unsigned int startEdgeIdx)
{
  float x; // xmm2_4
  float y; // xmm1_4
  Scaleform::Render::Hairliner::FanEdgeType *v5; // rax
  Scaleform::Render::Hairliner::FanEdgeType *v6; // r12
  int *v7; // rbx
  unsigned int v8; // er15
  __int64 v9; // rcx
  __int64 v10; // rbp
  Scaleform::Render::Hairliner::OutVertexType *v11; // r14
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r10
  __int64 Size; // r8
  unsigned __int64 v15; // r11
  Scaleform::Render::Hairliner::FanEdgeType **Pages; // rdi
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r9
  int v19; // eax
  unsigned int v20; // er9
  __int64 v21; // rax
  int v22; // er11
  __int64 v23; // rcx
  Scaleform::Render::Hairliner::OutVertexType **v24; // r8
  unsigned __int64 v25; // rax
  __int64 v26; // r9
  Scaleform::Render::Hairliner::OutVertexType *v27; // r10
  float v28; // xmm0_4
  unsigned __int64 v29; // rax
  Scaleform::Render::Hairliner::OutVertexType *v30; // rcx
  unsigned __int64 v31; // rax

  x = FLOAT_N1_0e30;
  y = FLOAT_N1_0e30;
  v5 = this->FanEdges.Pages[(unsigned __int64)startEdgeIdx >> 4];
  this->ContourNodes.Size = 0i64;
  v6 = &v5[startEdgeIdx & 0xF];
  v7 = (int *)v6;
  do
  {
    if ( *v7 < 0 )
      break;
    v8 = *v7 & 0x7FFFFFFF;
    v9 = *(_BYTE *)v7 & 0xF;
    v10 = v9;
    v11 = this->OutVertices.Pages[(unsigned __int64)v8 >> 4];
    if ( v11[v9].x != x || v11[v9].y != y )
    {
      v12 = this->ContourNodes.Size >> 4;
      if ( v12 >= this->ContourNodes.NumPages )
        Scaleform::Render::ArrayPaged<unsigned int,4,16>::allocPage(&this->ContourNodes, this->ContourNodes.Size >> 4);
      this->ContourNodes.Pages[v12][this->ContourNodes.Size & 0xF] = v8;
      ++this->ContourNodes.Size;
      x = v11[v10].x;
      y = v11[v10].y;
    }
    *v7 |= 0x80000000;
    v13 = 0i64;
    Size = this->FanEdges.Size;
    while ( Size > 0 )
    {
      if ( (this->FanEdges.Pages[((Size >> 1) + v13) >> 4][((unsigned __int8)(Size >> 1) + (_BYTE)v13) & 0xF].node1 & 0x7FFFFFFF) >= v7[1] )
      {
        Size >>= 1;
      }
      else
      {
        v13 += (Size >> 1) + 1;
        Size += -1 - (Size >> 1);
      }
    }
    v15 = this->FanEdges.Size;
    if ( v13 >= v15 )
      break;
    Pages = this->FanEdges.Pages;
    v17 = 0i64;
    v18 = v13;
    do
    {
      if ( (Pages[v18 >> 4][v18 & 0xF].node1 & 0x7FFFFFFF) != v7[1] )
        break;
      ++v17;
      ++v18;
    }
    while ( v18 < v15 );
    if ( v17 == 1 )
    {
      v7 = (int *)&Pages[v13 >> 4][v13 & 0xF];
    }
    else if ( v17 == 2 )
    {
      v7 = (int *)&Pages[v13 >> 4][v13 & 0xF];
      v19 = v7[1];
      if ( v19 == Pages[(v13 + 1) >> 4][((_DWORD)v13 + 1) & 0xF].node2 )
      {
        if ( *v7 < 0 )
          v7 = (int *)&Pages[(v13 + 1) >> 4][((_DWORD)v13 + 1) & 0xF];
      }
      else if ( v19 == v8 )
      {
        v7 = (int *)&Pages[(v13 + 1) >> 4][((_DWORD)v13 + 1) & 0xF];
      }
    }
    else
    {
      v20 = 0;
      if ( v17 )
      {
        v21 = 0i64;
        while ( Pages[(v13 + v21) >> 4][((_DWORD)v13 + (_DWORD)v21) & 0xF].node2 != v8 )
        {
          v21 = ++v20;
          if ( v20 >= v17 )
            goto LABEL_38;
        }
        v22 = 0;
        while ( 1 )
        {
          v23 = 0i64;
          if ( v20 + 1 < v17 )
            v23 = v20 + 1;
          v20 = v23;
          v7 = (int *)&Pages[(v13 + v23) >> 4][((_DWORD)v13 + (_DWORD)v23) & 0xF];
          if ( v7 == (int *)v6 )
            goto LABEL_39;
          if ( *v7 < 0 && (unsigned int)++v22 < v17 )
            continue;
          break;
        }
      }
    }
LABEL_38:
    ;
  }
  while ( v7 != (int *)v6 );
LABEL_39:
  if ( this->ContourNodes.Size )
  {
    v24 = this->OutVertices.Pages;
    v25 = **this->ContourNodes.Pages;
    v26 = v25 & 0xF;
    v27 = v24[v25 >> 4];
    v28 = v27[v25 & 0xF].x;
    v29 = this->ContourNodes.Pages[(this->ContourNodes.Size - 1) >> 4][(LODWORD(this->ContourNodes.Size) - 1) & 0xF];
    v30 = v24[v29 >> 4];
    if ( v28 == v30[v29 & 0xF].x && v27[v26].y == v30[v29 & 0xF].y )
    {
      v31 = this->ContourNodes.Size;
      if ( v31 )
        this->ContourNodes.Size = v31 - 1;
    }
  }
}

void __fastcall Scaleform::Render::Hairliner::generateTriangles(Scaleform::Render::Hairliner *this, float width)
{
  unsigned __int64 Size; // r12
  unsigned int **Pages; // r15
  unsigned int v6; // ebp
  Scaleform::Render::Hairliner::OutVertexType **v7; // r8
  unsigned __int64 v8; // rax
  Scaleform::Render::Hairliner::OutVertexType *v9; // rax
  float x; // xmm1_4
  int v11; // er14
  unsigned int v12; // esi
  int v13; // ebx
  int v14; // er13
  float len1; // xmm6_4
  float *p_x; // r8
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rax
  __int64 v19; // r12
  unsigned int v20; // ecx
  Scaleform::Render::Hairliner::OutVertexType *v3; // r15
  float len2; // xmm7_4
  int v23; // eax
  unsigned int v24; // er15
  unsigned __int64 v25; // rsi
  __int64 v26; // rdx
  Scaleform::Render::Hairliner::TriangleType *v27; // rax
  unsigned __int64 v28; // rsi
  __int64 v29; // rdx
  Scaleform::Render::Hairliner::TriangleType *v30; // rax
  Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> *p_Triangles; // rdi
  unsigned __int64 v32; // rbx
  __int64 v33; // rdx
  Scaleform::Render::StrokerAA::VertexType *v34; // rax
  unsigned __int64 v35; // rbx
  __int64 v36; // rdx
  Scaleform::Render::StrokerAA::VertexType *v37; // rax
  unsigned int v38; // [rsp+40h] [rbp-98h]
  Scaleform::Render::Hairliner::OutVertexType *v39; // [rsp+48h] [rbp-90h]
  unsigned __int64 v40; // [rsp+50h] [rbp-88h]
  __int64 v41; // [rsp+58h] [rbp-80h]
  unsigned __int64 v42; // [rsp+58h] [rbp-80h]
  int v43; // [rsp+E0h] [rbp+8h]
  Scaleform::Render::Hairliner::OutVertexType *v1; // [rsp+F0h] [rbp+18h]
  int v1a; // [rsp+F0h] [rbp+18h]
  Scaleform::Render::Hairliner::OutVertexType *v2; // [rsp+F8h] [rbp+20h]

  Size = this->ContourNodes.Size;
  if ( Size >= 2 )
  {
    Pages = this->ContourNodes.Pages;
    v6 = Pages[(Size - 1) >> 4][((_DWORD)Size - 1) & 0xF];
    v7 = this->OutVertices.Pages;
    v8 = Pages[(Size - 2) >> 4][((_DWORD)Size - 2) & 0xF];
    v1 = &v7[v8 >> 4][v8 & 0xF];
    v9 = v7[(unsigned __int64)v6 >> 4];
    x = v9[v6 & 0xF].x;
    v2 = &v9[v6 & 0xF];
    v11 = -1;
    v12 = 0;
    v38 = 0;
    v13 = -1;
    v43 = -1;
    v14 = -1;
    len1 = sqrtf((float)((float)(v2->y - v1->y) * (float)(v2->y - v1->y)) + (float)((float)(x - v1->x)
                                                                                  * (float)(x - v1->x)));
    p_x = &v2->x;
    v17 = 0i64;
    do
    {
      v18 = v17;
      v19 = v17 & 0xF;
      v40 = v18 >> 4;
      v20 = Pages[v18 >> 4][v19];
      v3 = &this->OutVertices.Pages[(unsigned __int64)v20 >> 4][v20 & 0xF];
      v39 = v3;
      len2 = sqrtf(
               (float)((float)(v3->y - p_x[1]) * (float)(v3->y - p_x[1]))
             + (float)((float)(v3->x - *p_x) * (float)(v3->x - *p_x)));
      v23 = Scaleform::Render::Hairliner::addJoin(this, v6, v1, v2, v3, len1, len2, width);
      v1a = v23;
      if ( v11 == -1 )
      {
        v14 = LODWORD(this->OutVertices.Size) - v23;
        v43 = v6;
      }
      else
      {
        v24 = LODWORD(this->OutVertices.Size) - v23;
        v25 = this->Triangles.Size >> 4;
        if ( v25 >= this->Triangles.NumPages )
          Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> *)&this->Triangles,
            this->Triangles.Size >> 4);
        LODWORD(v41) = v11;
        v26 = this->Triangles.Size & 0xF;
        v27 = this->Triangles.Pages[v25];
        *(_QWORD *)&v27[v26].v1 = __PAIR64__(v13, v11);
        v27[v26].v3 = v24;
        v28 = ++this->Triangles.Size >> 4;
        HIDWORD(v41) = LODWORD(this->OutVertices.Size) - v1a;
        if ( v28 >= this->Triangles.NumPages )
          Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> *)&this->Triangles,
            v28);
        v3 = v39;
        v29 = this->Triangles.Size & 0xF;
        v30 = this->Triangles.Pages[v28];
        v12 = v38;
        *(_QWORD *)&v30[v29].v1 = v41;
        v30[v29].v3 = v6;
        ++this->Triangles.Size;
      }
      ++v12;
      p_x = &v3->x;
      v1 = v2;
      v11 = v6;
      v13 = LODWORD(this->OutVertices.Size) - 1;
      v2 = v3;
      len1 = len2;
      Pages = this->ContourNodes.Pages;
      v38 = v12;
      v6 = Pages[v40][v19];
      v17 = v12;
    }
    while ( v12 < this->ContourNodes.Size );
    if ( v11 != -1 )
    {
      p_Triangles = (Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> *)&this->Triangles;
      v42 = __PAIR64__(v13, v11);
      v32 = p_Triangles->Size >> 4;
      if ( v32 >= p_Triangles->NumPages )
        Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(
          p_Triangles,
          p_Triangles->Size >> 4);
      v33 = p_Triangles->Size & 0xF;
      v34 = p_Triangles->Pages[v32];
      *(_QWORD *)&v34[v33].x = v42;
      *(_DWORD *)&v34[v33].style = v14;
      v35 = ++p_Triangles->Size >> 4;
      if ( v35 >= p_Triangles->NumPages )
        Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(
          p_Triangles,
          p_Triangles->Size >> 4);
      v36 = p_Triangles->Size & 0xF;
      v37 = p_Triangles->Pages[v35];
      *(_QWORD *)&v37[v36].x = __PAIR64__(v14, v11);
      *(_DWORD *)&v37[v36].style = v43;
      ++p_Triangles->Size;
    }
  }
}

__int64 __fastcall Scaleform::Render::Hairliner::nextScanbeam(
        Scaleform::Render::Hairliner *this,
        float yb,
        float yt,
        unsigned int startMc,
        unsigned int numMc)
{
  __int64 v5; // r13
  unsigned __int64 v6; // rbp
  unsigned int v8; // er15
  unsigned __int64 v9; // r12
  Scaleform::Render::Hairliner::MonoChainType *v12; // rbx
  Scaleform::Render::Hairliner::SrcEdgeType *edge; // r9
  Scaleform::Render::Hairliner::SrcVertexType **Pages; // r10
  Scaleform::Render::Hairliner::SrcEdgeType *next; // rcx
  unsigned int lower; // edx
  unsigned __int64 upper; // rax
  Scaleform::Render::Hairliner::SrcVertexType **v18; // rcx
  __int64 v19; // r8
  Scaleform::Render::Hairliner::SrcVertexType *v20; // r9
  float x; // xmm0_4
  Scaleform::Render::Hairliner::SrcVertexType *v22; // rdx
  unsigned __int64 v23; // r14
  float xt; // eax
  __int64 v25; // rdx
  Scaleform::Render::Hairliner::SrcVertexType *v26; // rcx
  float v27; // xmm0_4
  Scaleform::Render::Hairliner::SrcEdgeType *v28; // r8
  unsigned int v29; // er9
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rbp
  __int64 v32; // r14
  Scaleform::Render::Hairliner::MonoChainType *v33; // r9
  Scaleform::Render::Hairliner::SrcEdgeType *v34; // r10
  __int64 v35; // r8
  Scaleform::Render::Hairliner::SrcVertexType *v36; // r11
  float v37; // xmm0_4
  Scaleform::Render::Hairliner::SrcVertexType *v38; // rdx
  unsigned __int64 v39; // rsi
  unsigned __int64 Size; // r10
  unsigned int v41; // ebx
  unsigned __int64 v42; // r11
  int v43; // er12
  unsigned __int64 v44; // rsi
  Scaleform::Render::Hairliner::MonoChainType ***v45; // r9
  Scaleform::Render::Hairliner::MonoChainType *v46; // r8
  float xb; // xmm1_4
  Scaleform::Render::Hairliner::MonoChainType *v48; // rdx
  float v49; // xmm0_4
  float v50; // xmm0_4
  bool v51; // cf
  bool v52; // zf
  Scaleform::Render::Hairliner::MonoChainType **v53; // rcx
  Scaleform::Render::Hairliner::MonoChainType *v54; // rax
  unsigned __int64 v55; // rsi
  unsigned __int64 v56; // rbp
  unsigned __int64 v57; // r10
  float v58; // xmm8_4
  int v59; // er15
  unsigned int **v60; // r9
  Scaleform::Render::Hairliner::MonoChainType ***v61; // r8
  unsigned __int64 v62; // r14
  unsigned __int64 v63; // rbp
  Scaleform::Render::Hairliner::MonoChainType *v64; // r12
  unsigned __int64 v65; // rax
  Scaleform::Render::Hairliner::MonoChainType *v66; // r13
  unsigned __int64 v67; // rbp
  unsigned __int64 v68; // r14
  unsigned __int64 v69; // rsi
  Scaleform::Render::Hairliner::MonoChainType **v70; // r15
  unsigned __int64 MaxPages; // rdx
  Scaleform::Render::LinearHeap *pHeap; // rcx
  void *v73; // rbx
  unsigned __int64 v74; // rax
  float v75; // xmm2_4
  float v76; // xmm0_4
  float v77; // xmm1_4
  float v78; // xmm0_4
  unsigned __int64 v79; // rsi
  unsigned __int64 v80; // rdx
  Scaleform::Render::LinearHeap *v81; // rcx
  void *v82; // rbx
  unsigned __int64 v83; // rax
  __int64 v84; // rdx
  Scaleform::Render::Hairliner::IntersectionType *v85; // rax
  unsigned int **v86; // rcx
  Scaleform::Render::Hairliner::MonoChainType ***v87; // rdx
  unsigned int v88; // er10
  unsigned int v89; // er9
  unsigned __int64 v90; // rax
  Scaleform::Render::Hairliner::MonoChainType **v91; // r8
  unsigned __int64 v92; // rax
  __int64 v93; // r9
  Scaleform::Render::Hairliner::MonoChainType **v94; // rdx
  Scaleform::Render::Hairliner::MonoChainType *v95; // rcx
  __int64 v97; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v98; // [rsp+28h] [rbp-A0h]
  __int128 v99; // [rsp+30h] [rbp-98h]
  __int64 v100; // [rsp+40h] [rbp-88h]
  unsigned __int64 v101; // [rsp+D0h] [rbp+8h]
  int v102; // [rsp+D8h] [rbp+10h]
  int v103; // [rsp+E0h] [rbp+18h]
  unsigned int numMca; // [rsp+F0h] [rbp+28h]

  v5 = numMc;
  v6 = 0i64;
  v8 = numMc != 0;
  v9 = startMc;
  numMca = v8;
  this->ValidChains.Size = 0i64;
  if ( this->ActiveChains.Size )
  {
    do
    {
      v12 = this->ActiveChains.Pages[v6 >> 4][v6 & 0xF];
      v12->flags &= ~2u;
      edge = v12->edge;
      Pages = this->SrcVertices.Pages;
      if ( Pages[(unsigned __int64)v12->edge->upper >> 4][v12->edge->upper & 0xF].y == yb )
      {
        if ( edge->next )
        {
          next = edge->next;
          v12->edge = next;
          lower = next->lower;
          upper = next->upper;
          v18 = this->SrcVertices.Pages;
          v19 = upper & 0xF;
          v20 = v18[upper >> 4];
          v12->xb = v18[(unsigned __int64)lower >> 4][lower & 0xF].x;
          if ( v20[v19].y == yt )
          {
            x = v20[v19].x;
          }
          else
          {
            v22 = this->SrcVertices.Pages[(unsigned __int64)v12->edge->lower >> 4];
            x = (float)((float)(yt - v22[v12->edge->lower & 0xF].y) * v12->edge->slope) + v22[v12->edge->lower & 0xF].x;
          }
          v12->xt = x;
          v23 = this->ValidChains.Size >> 4;
          if ( v23 >= this->ValidChains.NumPages )
            Scaleform::Render::ArrayPaged<unsigned int,4,16>::allocPage(&this->ValidChains, this->ValidChains.Size >> 4);
          this->ValidChains.Pages[v23][this->ValidChains.Size & 0xF] = v6;
          ++this->ValidChains.Size;
          v12->flags |= 2u;
        }
        else
        {
          v12->flags |= 1u;
          v8 |= 2u;
          xt = v12->xt;
          v12->flags |= 2u;
          v12->xb = xt;
        }
      }
      else
      {
        v25 = v12->edge->upper & 0xF;
        v26 = Pages[(unsigned __int64)v12->edge->upper >> 4];
        v12->xb = v12->xt;
        if ( v26[v25].y == yt )
        {
          v27 = v26[v25].x;
        }
        else
        {
          v28 = edge;
          v29 = edge->lower;
          v27 = (float)((float)(yt - this->SrcVertices.Pages[(unsigned __int64)v29 >> 4][v29 & 0xF].y) * v28->slope)
              + this->SrcVertices.Pages[(unsigned __int64)v29 >> 4][v29 & 0xF].x;
        }
        v12->xt = v27;
        v30 = this->ValidChains.Size >> 4;
        if ( v30 >= this->ValidChains.NumPages )
          Scaleform::Render::ArrayPaged<unsigned int,4,16>::allocPage(&this->ValidChains, this->ValidChains.Size >> 4);
        this->ValidChains.Pages[v30][this->ValidChains.Size & 0xF] = v6;
        ++this->ValidChains.Size;
      }
      ++v6;
    }
    while ( v6 < this->ActiveChains.Size );
    numMca = v8;
  }
  if ( (_DWORD)v5 )
  {
    v31 = v9;
    v32 = v5;
    do
    {
      v33 = this->MonoChainsSorted.Pages[v31 >> 4][v31 & 0xF];
      v34 = v33->edge;
      v35 = v33->edge->lower & 0xF;
      v36 = this->SrcVertices.Pages[(unsigned __int64)v33->edge->lower >> 4];
      v33->xb = v36[v35].x;
      v33->flags = 2;
      if ( v36[v35].y == yt )
      {
        v37 = v36[v35].x;
      }
      else
      {
        v38 = this->SrcVertices.Pages[(unsigned __int64)v34->lower >> 4];
        v37 = (float)((float)(yt - v38[v34->lower & 0xF].y) * v34->slope) + v38[v34->lower & 0xF].x;
      }
      v33->xt = v37;
      v39 = this->ActiveChains.Size >> 4;
      if ( v39 >= this->ActiveChains.NumPages )
        Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::MonoChainType *,4,8>::allocPage(
          (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,8> *)&this->ActiveChains,
          this->ActiveChains.Size >> 4);
      ++v31;
      this->ActiveChains.Pages[v39][this->ActiveChains.Size & 0xF] = 0i64;
      ++this->ActiveChains.Size;
      --v32;
    }
    while ( v32 );
    Size = this->ActiveChains.Size;
    v41 = v9 + v5;
    v42 = Size - v5;
    v43 = -(int)v9;
    v44 = Size - v5 - 1;
    do
    {
      if ( !v42 )
        goto LABEL_34;
      v45 = this->ActiveChains.Pages;
      v46 = this->MonoChainsSorted.Pages[(unsigned __int64)(v41 - 1) >> 4][((_BYTE)v41 - 1) & 0xF];
      xb = v46->xb;
      v48 = v45[v44 >> 4][v44 & 0xF];
      v49 = v48->xb;
      if ( v49 == xb )
      {
        v50 = v46->xt;
        v51 = v50 < v48->xt;
        v52 = v50 == v48->xt;
      }
      else
      {
        v51 = xb < v49;
        v52 = xb == v49;
      }
      if ( v51 || v52 )
      {
        --v42;
        --Size;
        --v44;
        v53 = v45[Size >> 4];
        v54 = v45[v42 >> 4][v42 & 0xF];
      }
      else
      {
LABEL_34:
        --v41;
        v53 = this->ActiveChains.Pages[--Size >> 4];
        v54 = this->MonoChainsSorted.Pages[(unsigned __int64)v41 >> 4][v41 & 0xF];
      }
      v53[Size & 0xF] = v54;
    }
    while ( v43 + v41 );
    v8 = numMca;
  }
  this->Intersections.Size = 0i64;
  if ( (v8 & 1) != 0 )
  {
    v55 = 0i64;
    for ( this->ValidChains.Size = 0i64; v55 < this->ActiveChains.Size; ++v55 )
    {
      if ( (this->ActiveChains.Pages[v55 >> 4][v55 & 0xF]->flags & 1) == 0 )
      {
        v56 = this->ValidChains.Size >> 4;
        if ( v56 >= this->ValidChains.NumPages )
          Scaleform::Render::ArrayPaged<unsigned int,4,16>::allocPage(&this->ValidChains, this->ValidChains.Size >> 4);
        this->ValidChains.Pages[v56][this->ValidChains.Size & 0xF] = v55;
        ++this->ValidChains.Size;
      }
    }
  }
  v57 = 1i64;
  v58 = yt - yb;
  v97 = 1i64;
  if ( this->ValidChains.Size <= 1 )
    return v8;
  do
  {
    v59 = v57 - 1;
    v102 = v57 - 1;
    if ( (int)v57 - 1 >= 0 )
    {
      v103 = v57;
      do
      {
        v60 = this->ValidChains.Pages;
        v61 = this->ActiveChains.Pages;
        v62 = v59;
        v63 = (int)v57;
        v98 = v59;
        v101 = (int)v57;
        v64 = v61[(unsigned __int64)v60[(unsigned __int64)v59 >> 4][v59 & 0xF] >> 4][v60[(unsigned __int64)v59 >> 4][v59 & 0xF] & 0xF];
        *(_QWORD *)&v99 = v64;
        v65 = v60[(unsigned __int64)(int)v57 >> 4][v57 & 0xF];
        v66 = v61[v65 >> 4][v65 & 0xF];
        *((_QWORD *)&v99 + 1) = v66;
        if ( v66->xt >= v64->xt )
          break;
        if ( !this->Intersections.Size )
        {
          v67 = 0i64;
          this->ChainsAtBottom.Size = 0i64;
          if ( this->ActiveChains.Size )
          {
            do
            {
              v68 = v67 & 0xF;
              v69 = this->ChainsAtBottom.Size >> 4;
              v70 = this->ActiveChains.Pages[v67 >> 4];
              if ( v69 >= this->ChainsAtBottom.NumPages )
              {
                MaxPages = this->ChainsAtBottom.MaxPages;
                if ( v69 >= MaxPages )
                {
                  pHeap = this->ChainsAtBottom.pHeap;
                  if ( this->ChainsAtBottom.Pages )
                  {
                    v73 = Scaleform::Render::LinearHeap::Alloc(pHeap, 16 * MaxPages);
                    memmove(v73, this->ChainsAtBottom.Pages, 8 * this->ChainsAtBottom.NumPages);
                    v74 = this->ChainsAtBottom.MaxPages;
                    this->ChainsAtBottom.Pages = (Scaleform::Render::Hairliner::MonoChainType ***)v73;
                    this->ChainsAtBottom.MaxPages = 2 * v74;
                  }
                  else
                  {
                    this->ChainsAtBottom.MaxPages = 8i64;
                    this->ChainsAtBottom.Pages = (Scaleform::Render::Hairliner::MonoChainType ***)Scaleform::Render::LinearHeap::Alloc(
                                                                                                    pHeap,
                                                                                                    0x40ui64);
                  }
                }
                this->ChainsAtBottom.Pages[v69] = (Scaleform::Render::Hairliner::MonoChainType **)Scaleform::Render::LinearHeap::Alloc(
                                                                                                    this->ChainsAtBottom.pHeap,
                                                                                                    0x80ui64);
                ++this->ChainsAtBottom.NumPages;
              }
              ++v67;
              this->ChainsAtBottom.Pages[v69][this->ChainsAtBottom.Size & 0xF] = v70[v68];
              ++this->ChainsAtBottom.Size;
            }
            while ( v67 < this->ActiveChains.Size );
            v62 = v98;
            v59 = v102;
          }
          v63 = v101;
        }
        v75 = v66->xb;
        v76 = v64->xb;
        v77 = (float)((float)(v66->xt - v75) - v64->xt) + v76;
        if ( v77 == 0.0 )
        {
          *(float *)&v100 = yb;
          v78 = yb;
        }
        else
        {
          v78 = (float)((float)((float)(v76 - v75) * v58) / v77) + yb;
          *(float *)&v100 = v78;
        }
        if ( yb > v78 )
        {
          *(float *)&v100 = yb;
          v78 = yb;
        }
        if ( v78 > yt )
          *(float *)&v100 = yt;
        v79 = this->Intersections.Size >> 4;
        if ( v79 >= this->Intersections.NumPages )
        {
          v80 = this->Intersections.MaxPages;
          if ( v79 >= v80 )
          {
            v81 = this->Intersections.pHeap;
            if ( this->Intersections.Pages )
            {
              v82 = Scaleform::Render::LinearHeap::Alloc(v81, 16 * v80);
              memmove(v82, this->Intersections.Pages, 8 * this->Intersections.NumPages);
              v83 = this->Intersections.MaxPages;
              this->Intersections.Pages = (Scaleform::Render::Hairliner::IntersectionType **)v82;
              this->Intersections.MaxPages = 2 * v83;
            }
            else
            {
              this->Intersections.MaxPages = 4i64;
              this->Intersections.Pages = (Scaleform::Render::Hairliner::IntersectionType **)Scaleform::Render::LinearHeap::Alloc(
                                                                                               v81,
                                                                                               0x20ui64);
            }
          }
          this->Intersections.Pages[v79] = (Scaleform::Render::Hairliner::IntersectionType *)Scaleform::Render::LinearHeap::Alloc(
                                                                                               this->Intersections.pHeap,
                                                                                               0x180ui64);
          ++this->Intersections.NumPages;
        }
        v102 = --v59;
        v84 = this->Intersections.Size & 0xF;
        v85 = this->Intersections.Pages[v79];
        *(_OWORD *)&v85[v84].mc1 = v99;
        *(_QWORD *)&v85[v84].y = v100;
        ++this->Intersections.Size;
        v86 = this->ValidChains.Pages;
        v87 = this->ActiveChains.Pages;
        v88 = v86[v63 >> 4][v63 & 0xF];
        v89 = v86[v62 >> 4][v62 & 0xF];
        v90 = (unsigned __int64)v88 >> 4;
        v57 = v88 & 0xF;
        v91 = v87[v90];
        v92 = (unsigned __int64)v89 >> 4;
        v93 = v89 & 0xF;
        v94 = v87[v92];
        v95 = v94[v93];
        v94[v93] = v91[v57];
        v91[v57] = v95;
        LODWORD(v57) = --v103;
      }
      while ( v59 >= 0 );
      v57 = v97;
    }
    v97 = ++v57;
  }
  while ( v57 < this->ValidChains.Size );
  return numMca;
}

__int64 __fastcall Scaleform::Render::Hairliner::processHorizontalEdges(
        Scaleform::Render::Hairliner *this,
        Scaleform::Render::Hairliner::MonoChainType *mc,
        unsigned int vertex,
        float yb)
{
  char v4; // r15
  unsigned int v5; // er14
  float x; // xmm6_4
  __int64 v10; // rdx
  Scaleform::Render::Hairliner::HorizontalEdgeType *v11; // rsi
  __int64 v12; // rdi
  unsigned int rv; // er9
  unsigned int v14; // edx
  Scaleform::Render::Hairliner::SrcEdgeType *edge; // r10
  Scaleform::Render::Hairliner::SrcVertexType **Pages; // r11
  __int64 v17; // rdx
  Scaleform::Render::Hairliner::SrcVertexType *v18; // r9
  __int64 v19; // rcx
  Scaleform::Render::Hairliner::SrcVertexType *v20; // r8
  Scaleform::Render::Hairliner::SrcVertexType *v21; // rcx
  float x1; // xmm0_4
  bool v23; // zf
  Scaleform::Render::Hairliner::SrcVertexType v25; // [rsp+20h] [rbp-58h] BYREF
  Scaleform::Render::Hairliner::SrcVertexType v1; // [rsp+80h] [rbp+8h] BYREF

  v4 = 0;
  v5 = 0;
  x = 0.0;
  while ( v5 < this->NumHorizontals )
  {
    v10 = ((_BYTE)v5 + LOBYTE(this->StartHorizontals)) & 3;
    v11 = this->HorizontalEdges.Pages[(unsigned __int64)(v5 + this->StartHorizontals) >> 2];
    v12 = v10;
    if ( vertex == -1 )
      goto LABEL_10;
    rv = v11[v10].rv;
    if ( rv == -1 && v11[v10].x1 == this->OutVertices.Pages[(unsigned __int64)vertex >> 4][vertex & 0xF].x )
    {
      v11[v10].rv = vertex;
LABEL_29:
      v11[v12].lv = vertex;
      goto LABEL_30;
    }
    if ( v11[v10].x2 != this->OutVertices.Pages[(unsigned __int64)vertex >> 4][vertex & 0xF].x )
    {
LABEL_10:
      if ( !v4 )
      {
        edge = mc->edge;
        Pages = this->SrcVertices.Pages;
        v17 = mc->edge->lower & 0xF;
        v18 = Pages[(unsigned __int64)mc->edge->lower >> 4];
        v19 = mc->edge->upper & 0xF;
        v20 = Pages[(unsigned __int64)mc->edge->upper >> 4];
        if ( yb == v18[v17].y )
        {
          x = v18[v17].x;
        }
        else if ( yb == v20[v19].y )
        {
          x = v20[v19].x;
        }
        else
        {
          v21 = Pages[(unsigned __int64)edge->lower >> 4];
          x = (float)((float)(yb - v21[edge->lower & 0xF].y) * edge->slope) + v21[edge->lower & 0xF].x;
        }
        v4 = 1;
      }
      x1 = v11[v12].x1;
      if ( x == x1 )
      {
        v1.x = x;
        v1.y = yb;
        if ( vertex == -1 )
          vertex = Scaleform::Render::Hairliner::addEventVertex(this, &v1);
        v11[v12].rv = vertex;
        goto LABEL_30;
      }
      if ( x < x1 || v11[v12].x2 < x )
        goto LABEL_30;
      v25.x = x;
      v25.y = yb;
      if ( vertex == -1 )
        vertex = Scaleform::Render::Hairliner::addEventVertex(this, &v25);
      v14 = v11[v12].rv;
      if ( v14 != -1 && v14 != vertex )
        goto LABEL_27;
    }
    else if ( rv != -1 && rv != vertex )
    {
      v14 = v11[v10].rv;
LABEL_27:
      Scaleform::Render::Hairliner::emitEdge(this, v14, vertex);
    }
    v23 = v11[v12].lv == -1;
    v11[v12].rv = vertex;
    if ( v23 )
      goto LABEL_29;
LABEL_30:
    ++v5;
  }
  return vertex;
}

void __fastcall Scaleform::Render::Hairliner::processInterior(Scaleform::Render::Hairliner *this, float yb)
{
  unsigned __int64 i; // rdi
  __int64 v4; // rax
  __int64 v5; // rbp
  Scaleform::Render::Hairliner::IntersectionType *v6; // r14
  float y; // xmm2_4
  unsigned int v8; // eax
  Scaleform::Render::Hairliner::MonoChainType *mc1; // r15
  unsigned int v10; // esi
  unsigned int prevVertex; // edx
  unsigned int v12; // eax
  Scaleform::Render::Hairliner::MonoChainType *mc2; // rbp
  unsigned int v14; // esi
  unsigned int v15; // edx

  Scaleform::Render::Hairliner::sweepScanbeam(this, &this->ChainsAtBottom, yb);
  for ( i = 0i64; i < this->Intersections.Size; ++i )
  {
    v4 = i & 0xF;
    v5 = v4;
    v6 = this->Intersections.Pages[i >> 4];
    y = v6[v4].y;
    if ( y > yb )
    {
      v8 = Scaleform::Render::Hairliner::addEventVertex(this, v6[v4].mc1, y, 1);
      mc1 = v6[v5].mc1;
      v10 = v8;
      prevVertex = mc1->prevVertex;
      if ( prevVertex != -1 && prevVertex != v8 )
        Scaleform::Render::Hairliner::emitEdge(this, prevVertex, v8);
      mc1->prevVertex = v10;
      v12 = Scaleform::Render::Hairliner::addEventVertex(this, v6[v5].mc2, v6[v5].y, 1);
      mc2 = v6[v5].mc2;
      v14 = v12;
      v15 = mc2->prevVertex;
      if ( v15 != -1 && v15 != v12 )
        Scaleform::Render::Hairliner::emitEdge(this, v15, v12);
      mc2->prevVertex = v14;
    }
  }
}

void __fastcall Scaleform::Render::Hairliner::sweepScanbeam(
        Scaleform::Render::Hairliner *this,
        const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::MonoChainType *,4,8> *aet,
        float yb)
{
  unsigned __int64 v3; // r15
  unsigned __int64 i; // rsi
  Scaleform::Render::Hairliner::MonoChainType *v7; // rbp
  unsigned int v8; // eax
  unsigned int v9; // edi
  unsigned int prevVertex; // edx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdi
  Scaleform::Render::Hairliner::HorizontalEdgeType *v14; // rsi
  unsigned int lv; // eax
  float x1; // xmm1_4
  unsigned __int64 v17; // r14
  __int64 v18; // rdx
  Scaleform::Render::Hairliner::OutVertexType *v19; // rax
  unsigned int rv; // eax
  float x2; // xmm1_4
  unsigned __int64 v22; // r14
  __int64 v23; // rdx
  Scaleform::Render::Hairliner::OutVertexType *v24; // rax
  float v25; // xmm7_4
  float v26; // xmm0_4
  unsigned __int64 v27; // rsi
  __int64 v28; // rdx
  Scaleform::Render::Hairliner::OutVertexType *v29; // rax
  unsigned __int64 Size; // rbp
  __int64 v31; // rdx
  Scaleform::Render::Hairliner::OutVertexType *v32; // rax

  v3 = 0i64;
  for ( i = 0i64; i < aet->Size; ++i )
  {
    v7 = aet->Pages[i >> 4][i & 0xF];
    v8 = Scaleform::Render::Hairliner::addEventVertex(this, v7, yb, v7->flags & 1);
    v9 = v8;
    if ( this->NumHorizontals )
      v9 = Scaleform::Render::Hairliner::processHorizontalEdges(this, v7, v8, yb);
    if ( v9 != -1 )
    {
      prevVertex = v7->prevVertex;
      if ( prevVertex != -1 && prevVertex != v9 )
        Scaleform::Render::Hairliner::emitEdge(this, prevVertex, v9);
      v7->prevVertex = v9;
    }
  }
  if ( this->NumHorizontals )
  {
    do
    {
      v11 = v3 + this->StartHorizontals;
      v12 = v11 & 3;
      v13 = v12;
      v14 = this->HorizontalEdges.Pages[v11 >> 2];
      lv = v14[v12].lv;
      if ( lv != -1 )
      {
        x1 = v14[v12].x1;
        if ( this->OutVertices.Pages[(unsigned __int64)lv >> 4][lv & 0xF].x != x1 )
        {
          if ( yb != this->LastY || x1 != this->LastX )
          {
            this->LastX = x1;
            this->LastY = yb;
            v17 = this->OutVertices.Size >> 4;
            if ( v17 >= this->OutVertices.NumPages )
              Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(
                (Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> *)&this->OutVertices,
                v17);
            v18 = this->OutVertices.Size & 0xF;
            v19 = this->OutVertices.Pages[v17];
            *(_QWORD *)&v19[v18].x = __PAIR64__(LODWORD(yb), LODWORD(x1));
            v19[v18].alpha = 1;
            ++this->OutVertices.Size;
          }
          Scaleform::Render::Hairliner::emitEdge(this, v14[v13].lv, LODWORD(this->OutVertices.Size) - 1);
        }
      }
      rv = v14[v13].rv;
      if ( rv != -1 )
      {
        x2 = v14[v13].x2;
        if ( this->OutVertices.Pages[(unsigned __int64)rv >> 4][rv & 0xF].x != x2 )
        {
          if ( yb != this->LastY || x2 != this->LastX )
          {
            this->LastX = x2;
            this->LastY = yb;
            v22 = this->OutVertices.Size >> 4;
            if ( v22 >= this->OutVertices.NumPages )
              Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(
                (Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> *)&this->OutVertices,
                v22);
            v23 = this->OutVertices.Size & 0xF;
            v24 = this->OutVertices.Pages[v22];
            *(_QWORD *)&v24[v23].x = __PAIR64__(LODWORD(yb), LODWORD(x2));
            v24[v23].alpha = 1;
            ++this->OutVertices.Size;
          }
          Scaleform::Render::Hairliner::emitEdge(this, v14[v13].rv, LODWORD(this->OutVertices.Size) - 1);
        }
      }
      if ( v14[v13].lv == -1 && v14[v13].rv == -1 )
      {
        v25 = v14[v13].x1;
        v26 = v14[v13].x2;
        if ( yb != this->LastY || v26 != this->LastX )
        {
          this->LastX = v26;
          this->LastY = yb;
          v27 = this->OutVertices.Size >> 4;
          if ( v27 >= this->OutVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> *)&this->OutVertices,
              v27);
          v28 = this->OutVertices.Size & 0xF;
          v29 = this->OutVertices.Pages[v27];
          *(_QWORD *)&v29[v28].x = __PAIR64__(LODWORD(yb), LODWORD(v26));
          v29[v28].alpha = 1;
          ++this->OutVertices.Size;
        }
        Size = this->OutVertices.Size;
        if ( yb != this->LastY || v25 != this->LastX )
        {
          this->LastX = v25;
          this->LastY = yb;
          if ( Size >> 4 >= this->OutVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> *)&this->OutVertices,
              Size >> 4);
          v31 = this->OutVertices.Size & 0xF;
          v32 = this->OutVertices.Pages[Size >> 4];
          *(_QWORD *)&v32[v31].x = __PAIR64__(LODWORD(yb), LODWORD(v25));
          v32[v31].alpha = 1;
          ++this->OutVertices.Size;
        }
        Scaleform::Render::Hairliner::emitEdge(this, LODWORD(this->OutVertices.Size) - 1, Size - 1);
      }
      ++v3;
    }
    while ( v3 < this->NumHorizontals );
  }
}

