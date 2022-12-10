#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

Scaleform::Render::Tessellator::Tessellator(Scaleform::Render::LinearHeap * heap1, Scaleform::Render::LinearHeap * heap2); // 0x1403A2DB0
void Scaleform::Render::Tessellator::Clear(); // 0x1403A33C0
void Scaleform::Render::Tessellator::clearHeap1(); // 0x1403A6330
void Scaleform::Render::Tessellator::SetToleranceParam(const Scaleform::Render::ToleranceParams & param); // 0x1403A4350
void Scaleform::Render::Tessellator::SetEdgeAAWidth(float w); // 0x1403A4310
void Scaleform::Render::Tessellator::SetFillRule(Scaleform::Render::Tessellator::FillRuleType f); // 0x1403A4330
bool Scaleform::Render::Tessellator::cmpMonoChains(const Scaleform::Render::Tessellator::MonoChainType * a, const Scaleform::Render::Tessellator::MonoChainType * b); // 0x1403A6670
bool Scaleform::Render::Tessellator::cmpIntersectionY(const Scaleform::Render::Tessellator::IntersectionType & a, const Scaleform::Render::Tessellator::IntersectionType & b); // 0x1403BBAD0
bool Scaleform::Render::Tessellator::cmpEdgeAA(const Scaleform::Render::Tessellator::TmpEdgeAAType & a, const Scaleform::Render::Tessellator::TmpEdgeAAType & b); // 0x1403A6640
bool Scaleform::Render::Tessellator::cmpOuterEdges(const Scaleform::Render::Tessellator::OuterEdgeType & a, const Scaleform::Render::Tessellator::OuterEdgeType & b); // 0x1403A66B0
bool Scaleform::Render::Tessellator::cmpStrokerEdges(const Scaleform::Render::Tessellator::StrokerEdgeType & a, const Scaleform::Render::Tessellator::StrokerEdgeType & b); // 0x1403A66D0
void Scaleform::Render::Tessellator::buildEdgeList(unsigned long start, unsigned long numEdges, long step, unsigned long leftStyle, unsigned long rightStyle); // 0x1403A6140
void Scaleform::Render::Tessellator::addStyle(unsigned long style, bool complex); // 0x1403A5580
void Scaleform::Render::Tessellator::ClosePath(); // 0x1403A3780
void Scaleform::Render::Tessellator::FinalizePath(unsigned long leftStyle, unsigned long rightStyle, bool leftComplex, bool rightComplex); // 0x1403A3890
void Scaleform::Render::Tessellator::decomposePath(const Scaleform::Render::Tessellator::PathType & path); // 0x1403ABE00
void Scaleform::Render::Tessellator::perceiveStyles(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoChainType *,4,8> & aet); // 0x1403AE1B0
void Scaleform::Render::Tessellator::setupIntersections(); // 0x1403AFFC0
unsigned long Scaleform::Render::Tessellator::nextScanbeam(float yb, float yt, unsigned long startMc, unsigned long numMc); // 0x1403AD8C0
unsigned long Scaleform::Render::Tessellator::addEventVertex(const Scaleform::Render::Tessellator::MonoChainType * mc, float yb, bool enforceFlag); // 0x1403A4D30
void Scaleform::Render::Tessellator::removeLastMonoVertex(Scaleform::Render::Tessellator::MonotoneType * m); // 0x1403AFA00
Scaleform::Render::Tessellator::MonotoneType * Scaleform::Render::Tessellator::startMonotone(unsigned long style); // 0x1403B0780
void Scaleform::Render::Tessellator::startMonotone(Scaleform::Render::Tessellator::ScanChainType * scan, unsigned long vertex); // 0x1403B0820
void Scaleform::Render::Tessellator::replaceMonotone(Scaleform::Render::Tessellator::PendingEndType * pe, unsigned long style); // 0x1403AFA70
void Scaleform::Render::Tessellator::addPendingEnd(Scaleform::Render::Tessellator::ScanChainType * dst, Scaleform::Render::Tessellator::ScanChainType * pending, float y); // 0x1403A4F80
void Scaleform::Render::Tessellator::connectPendingToLeft(Scaleform::Render::Tessellator::ScanChainType * scan, unsigned long targetVertex); // 0x1403A6D90
struct Scaleform::Render::TessBaseLineIterator<Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::PendingEndType,4,4> >
{
	struct ScanChainType;
	bool IsFirst();
	bool IsLast();
	Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::PendingEndType,4,4> & Elements; // 0x0
	unsigned long Index; // 0x8
	unsigned long Num; // 0xC
	unsigned long VertexRightmost; // 0x10
	Scaleform::Render::Tessellator::PendingEndType * Chain; // 0x18
	unsigned long VertexLeft; // 0x20
	unsigned long VertexRight; // 0x24
	unsigned long Style; // 0x28
	bool FlagFirst; // 0x2C
private:
	void operator=(const Scaleform::Render::TessBaseLineIterator<Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::PendingEndType,4,4> > &);
};
void Scaleform::Render::Tessellator::connectPendingToRight(Scaleform::Render::Tessellator::ScanChainType * scan, unsigned long targetVertex); // 0x1403A7940
void Scaleform::Render::Tessellator::connectStartingToLeft(Scaleform::Render::Tessellator::ScanChainType * scan, Scaleform::Render::Tessellator::BaseLineType * upperBase, unsigned long targetVertex); // 0x1403A8560
struct Scaleform::Render::TessBaseLineIterator<Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::ScanChainType,4,8> >
{
	struct ScanChainType;
	bool IsFirst();
	bool IsLast();
	Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::ScanChainType,4,8> & Elements; // 0x0
	unsigned long Index; // 0x8
	unsigned long Num; // 0xC
	unsigned long VertexRightmost; // 0x10
	Scaleform::Render::Tessellator::ScanChainType * Chain; // 0x18
	unsigned long VertexLeft; // 0x20
	unsigned long VertexRight; // 0x24
	unsigned long Style; // 0x28
	bool FlagFirst; // 0x2C
private:
	void operator=(const Scaleform::Render::TessBaseLineIterator<Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::ScanChainType,4,8> > &);
};
void Scaleform::Render::Tessellator::connectStartingToRight(Scaleform::Render::Tessellator::ScanChainType * scan, Scaleform::Render::Tessellator::BaseLineType * upperBase, unsigned long targetVertex); // 0x1403AAAE0
void Scaleform::Render::Tessellator::connectStartingToPending(Scaleform::Render::Tessellator::ScanChainType * scan, Scaleform::Render::Tessellator::BaseLineType * upperBase); // 0x1403A91E0
void Scaleform::Render::Tessellator::connectStarting(Scaleform::Render::Tessellator::ScanChainType * scan, Scaleform::Render::Tessellator::BaseLineType * upperBase); // 0x1403A81F0
void Scaleform::Render::Tessellator::sweepScanbeam(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoChainType *,4,8> & aet, float yb); // 0x1403B0B70
void Scaleform::Render::Tessellator::swapChains(unsigned long startIn, unsigned long endIn); // 0x1403B0A10
void Scaleform::Render::Tessellator::processInterior(float yb, float yTop, unsigned long perceiveFlag); // 0x1403AF380
void Scaleform::Render::Tessellator::monotonize(); // 0x1403AD2B0
unsigned long Scaleform::Render::Tessellator::setMesh(unsigned long style); // 0x1403AFB00
unsigned long Scaleform::Render::Tessellator::setMesh(unsigned long style1, unsigned long style2); // 0x1403AFC70
void Scaleform::Render::Tessellator::GetMesh(unsigned long meshIdx, Scaleform::Render::TessMesh * mesh); // 0x1403A3E70
unsigned long Scaleform::Render::Tessellator::GetVertices(Scaleform::Render::TessMesh * mesh, Scaleform::Render::TessVertex * vertices, unsigned long num); // 0x1403A4020
void Scaleform::Render::Tessellator::GetTrianglesI16(unsigned long meshIdx, unsigned short * idx, unsigned long start, unsigned long num); // 0x1403A3F20
unsigned long Scaleform::Render::Tessellator::emitVertex(unsigned long meshIdx, unsigned long ver, unsigned long style, unsigned long flags); // 0x1403ACFA0
void Scaleform::Render::Tessellator::splitMesh(Scaleform::Render::TessMesh * mesh); // 0x1403B00E0
void Scaleform::Render::Tessellator::SplitMeshes(); // 0x1403A4450
unsigned long Scaleform::Render::Tessellator::emitVertex(unsigned long meshIdx, unsigned long ver, unsigned long style1, unsigned long style2, unsigned long flags, bool strictStyle); // 0x1403AD100
void Scaleform::Render::Tessellator::collectFanEdges(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,8> & chain, const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,8> & oppos, unsigned long style); // 0x1403A6700
unsigned long Scaleform::Render::Tessellator::countFanEdges(Scaleform::Render::Tessellator::MonotoneType * m); // 0x1403AB650
void Scaleform::Render::Tessellator::collectFanEdges(Scaleform::Render::Tessellator::MonotoneType * m); // 0x1403A6870
bool Scaleform::Render::Tessellator::computeMiter(const Scaleform::Render::TessVertex & v1, const Scaleform::Render::TessVertex & v2, const Scaleform::Render::TessVertex & v3, Scaleform::Render::TessVertex * newVer1, Scaleform::Render::TessVertex * newVer2); // 0x1403A6970
void Scaleform::Render::Tessellator::processFan(unsigned long start, unsigned long end); // 0x1403AE9A0
void Scaleform::Render::Tessellator::emitTriangles(); // 0x1403AC220
void Scaleform::Render::Tessellator::moveVertexAA(const Scaleform::Render::TessVertex & refVer, Scaleform::Render::TessVertex * aaVer, const Scaleform::Render::TessVertex & v2, const Scaleform::Render::TessVertex & v3); // 0x1403AD6E0
void Scaleform::Render::Tessellator::addTriangleAA(Scaleform::Render::Tessellator::MonoVertexType * v1, Scaleform::Render::Tessellator::MonoVertexType * v2, Scaleform::Render::Tessellator::MonoVertexType * v3, float cp); // 0x1403A5690
void Scaleform::Render::Tessellator::triangulateMountainAA(); // 0x1403B2C80
void Scaleform::Render::Tessellator::triangulateMonotoneAA(Scaleform::Render::Tessellator::MonotoneType * m); // 0x1403B2A00
void Scaleform::Render::Tessellator::unflipTriangles(); // 0x1403B3660
void Scaleform::Render::Tessellator::emitStrokerTrapezoid(const Scaleform::Render::Tessellator::StrokerEdgeType * edge, unsigned long v1, unsigned long v2); // 0x1403AC090
void Scaleform::Render::Tessellator::emitStrokerVertex(float x, float y); // 0x1403AC1A0
unsigned long Scaleform::Render::Tessellator::addStrokerJoin(const Scaleform::Render::Tessellator::StrokerEdgeType * e1, const Scaleform::Render::Tessellator::StrokerEdgeType * e2); // 0x1403A50F0
void Scaleform::Render::Tessellator::processStrokerEdges(); // 0x1403AF510
void Scaleform::Render::Tessellator::processEdgeAA(); // 0x1403AE450
void Scaleform::Render::Tessellator::prepareSpecialCaseMeshes(unsigned long style, unsigned long styleFlags); // 0x1403AE2F0
bool Scaleform::Render::Tessellator::createMeshForTriangle(const Scaleform::Render::Tessellator::PathType & p); // 0x1403ABB50
bool Scaleform::Render::Tessellator::createMeshForQuad(const Scaleform::Render::Tessellator::PathType & p); // 0x1403AB7F0
void Scaleform::Render::Tessellator::Tessellate(bool autoSplitMeshes); // 0x1403A4840
void Scaleform::Render::Tessellator::Transform(const Scaleform::Render::Matrix2x4<float> & m); // 0x1403A4C00
Scaleform::Render::Matrix2x4<float> Scaleform::Render::Tessellator::StretchTo(float x1, float y1, float x2, float y2); // 0x1403A45B0void __fastcall Scaleform::Alg::InsertionSortSliced<Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::IntersectionType,4,4>,bool (*)(Scaleform::Render::Tessellator::IntersectionType const &,Scaleform::Render::Tessellator::IntersectionType const &)>(
        Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::IntersectionType,4,4> *arr,
        unsigned __int64 start,
        unsigned __int64 end,
        bool (__fastcall *less)(const Scaleform::Render::Tessellator::IntersectionType *, const Scaleform::Render::Tessellator::IntersectionType *))
{
  unsigned __int64 v4; // rdi
  unsigned __int64 i; // rbx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r14
  unsigned __int64 j; // rbx
  Scaleform::Render::Tessellator::IntersectionType **Pages; // r8
  Scaleform::Render::Tessellator::IntersectionType *v14; // r9
  __int64 v15; // rcx
  Scaleform::Render::Tessellator::IntersectionType *v16; // rax
  __int64 v17; // xmm1_8
  unsigned int *v18; // rdx

  v4 = start + 1;
  for ( i = start; v4 < end; ++v4 )
  {
    v10 = i >> 4;
    v11 = i & 0xF;
    for ( j = i + 1; less(&arr->Pages[j >> 4][j & 0xF], &arr->Pages[v10][v11]); v11 = ((_DWORD)j - 1) & 0xF )
    {
      Pages = arr->Pages;
      v14 = &Pages[v10][v11];
      v15 = 3 * (j & 0xF);
      v16 = Pages[j-- >> 4];
      v17 = *(_QWORD *)(&v16->pos1 + v15);
      v18 = &v16->pos1 + v15;
      LODWORD(v15) = v18[2];
      *(_QWORD *)v18 = *(_QWORD *)&v14->pos1;
      v18[2] = LODWORD(v14->y);
      *(_QWORD *)&v14->pos1 = v17;
      LODWORD(v14->y) = v15;
      if ( j <= start )
        break;
      v10 = (j - 1) >> 4;
    }
    i = v4;
  }
}

void __fastcall Scaleform::Alg::QuickSortSliced<Scaleform::Render::ArrayPaged<unsigned int,4,16>,Scaleform::Render::Tessellator::CmpScanbeams>(
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

void __fastcall Scaleform::Alg::QuickSortSliced<Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16>,bool (*)(Scaleform::Render::Tessellator::OuterEdgeType const &,Scaleform::Render::Tessellator::OuterEdgeType const &)>(
        Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *arr,
        unsigned __int64 start,
        unsigned __int64 end,
        bool (__fastcall *less)(const Scaleform::Render::Tessellator::OuterEdgeType *, const Scaleform::Render::Tessellator::OuterEdgeType *))
{
  unsigned __int64 v5; // r13
  unsigned __int64 *i; // r12
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r14
  Scaleform::Render::Tessellator::OuterEdgeType **Pages; // rax
  Scaleform::Render::Tessellator::OuterEdgeType *v12; // rdx
  unsigned __int64 v13; // r15
  Scaleform::Render::Tessellator::OuterEdgeType *v14; // rax
  Scaleform::Render::Tessellator::OuterEdgeType v15; // xmm1
  Scaleform::Render::Tessellator::OuterEdgeType **v16; // rcx
  const Scaleform::Render::Tessellator::OuterEdgeType *v17; // rdx
  const Scaleform::Render::Tessellator::OuterEdgeType *v18; // rcx
  Scaleform::Render::Tessellator::OuterEdgeType **v19; // rcx
  Scaleform::Render::Tessellator::OuterEdgeType *v20; // rdx
  Scaleform::Render::Tessellator::OuterEdgeType *v21; // rax
  Scaleform::Render::Tessellator::OuterEdgeType v22; // xmm1
  Scaleform::Render::Tessellator::OuterEdgeType **v23; // rcx
  Scaleform::Render::Tessellator::OuterEdgeType *v24; // rdx
  Scaleform::Render::Tessellator::OuterEdgeType *v25; // rax
  Scaleform::Render::Tessellator::OuterEdgeType v26; // xmm1
  Scaleform::Render::Tessellator::OuterEdgeType **v27; // rcx
  Scaleform::Render::Tessellator::OuterEdgeType *v28; // rdx
  Scaleform::Render::Tessellator::OuterEdgeType *v29; // rax
  Scaleform::Render::Tessellator::OuterEdgeType v30; // xmm1
  unsigned __int64 v31; // rax
  Scaleform::Render::Tessellator::OuterEdgeType **v32; // rdx
  Scaleform::Render::Tessellator::OuterEdgeType *v33; // r8
  Scaleform::Render::Tessellator::OuterEdgeType *v34; // rcx
  Scaleform::Render::Tessellator::OuterEdgeType v35; // xmm1
  Scaleform::Render::Tessellator::OuterEdgeType **v36; // rcx
  Scaleform::Render::Tessellator::OuterEdgeType *v37; // rdx
  Scaleform::Render::Tessellator::OuterEdgeType *v38; // rax
  Scaleform::Render::Tessellator::OuterEdgeType v39; // xmm1
  signed __int64 v40; // r15
  unsigned __int64 v41; // rdi
  unsigned __int64 v42; // r14
  unsigned __int64 v43; // rbx
  unsigned __int64 j; // rdi
  Scaleform::Render::Tessellator::OuterEdgeType **v45; // rcx
  Scaleform::Render::Tessellator::OuterEdgeType *v46; // r8
  Scaleform::Render::Tessellator::OuterEdgeType *v47; // rdx
  Scaleform::Render::Tessellator::OuterEdgeType v48; // xmm1
  unsigned __int64 v49; // [rsp+20h] [rbp-308h]
  signed __int64 v50; // [rsp+28h] [rbp-300h]
  unsigned __int64 v51; // [rsp+30h] [rbp-2F8h]
  __int64 v52; // [rsp+38h] [rbp-2F0h]
  unsigned __int64 v53; // [rsp+40h] [rbp-2E8h]
  unsigned __int64 v54[80]; // [rsp+50h] [rbp-2D8h] BYREF

  v50 = end;
  v5 = start;
  if ( end - start >= 2 )
  {
    for ( i = v54; ; v5 = *i )
    {
      while ( (__int64)(end - v5) > 9 )
      {
        v8 = end - 1;
        v9 = v5 + 1;
        v10 = v5 & 0xF;
        v49 = ((_BYTE)end - 1) & 0xF;
        Pages = arr->Pages;
        v12 = &Pages[((__int64)(end - v5) / 2 + v5) >> 4][((unsigned int)((__int64)(end - v5) / 2) + (_DWORD)v5) & 0xF];
        v13 = v5 >> 4;
        v14 = Pages[v13];
        v15 = v14[v10];
        v14[v10] = *v12;
        *v12 = v15;
        v16 = arr->Pages;
        v52 = ((_BYTE)v5 + 1) & 0xF;
        v51 = (v5 + 1) >> 4;
        v17 = &v16[v51][v52];
        v18 = &v16[(end - 1) >> 4][v49];
        v53 = 8 * ((end - 1) >> 4);
        if ( less(v18, v17) )
        {
          v19 = arr->Pages;
          v20 = v19[v51];
          v21 = v19[v53 / 8];
          v22 = v21[v49];
          v21[v49] = v20[((_BYTE)v5 + 1) & 0xF];
          v20[((_BYTE)v5 + 1) & 0xF] = v22;
        }
        if ( less(&arr->Pages[v13][v10], &arr->Pages[(v5 + 1) >> 4][((_BYTE)v5 + 1) & 0xF]) )
        {
          v23 = arr->Pages;
          v24 = &v23[v51][v52];
          v25 = v23[v13];
          v26 = v25[v10];
          v25[v10] = *v24;
          *v24 = v26;
        }
        if ( less(&arr->Pages[v53 / 8][v49], &arr->Pages[v13][v10]) )
        {
          v27 = arr->Pages;
          v28 = v27[v13];
          v29 = v27[v53 / 8];
          v30 = v29[v49];
          v29[v49] = v28[v5 & 0xF];
          v28[v5 & 0xF] = v30;
        }
        while ( 1 )
        {
          do
            ++v9;
          while ( less(&arr->Pages[v9 >> 4][v9 & 0xF], &arr->Pages[v13][v10]) );
          do
            --v8;
          while ( less(&arr->Pages[v13][v10], &arr->Pages[v8 >> 4][v8 & 0xF]) );
          v31 = v8 >> 4;
          if ( (__int64)v9 > (__int64)v8 )
            break;
          v32 = arr->Pages;
          v33 = &v32[v31][v8 & 0xF];
          v34 = &v32[v9 >> 4][v9 & 0xF];
          v35 = *v34;
          *v34 = *v33;
          *v33 = v35;
        }
        v36 = arr->Pages;
        end = v50;
        v37 = &v36[v31][v8 & 0xF];
        v38 = v36[v13];
        v39 = v38[v10];
        v38[v10] = *v37;
        *v37 = v39;
        if ( (__int64)(v8 - v5) <= (__int64)(v50 - v9) )
        {
          i[1] = v50;
          end = v8;
          *i = v9;
          i += 2;
          v50 = v8;
        }
        else
        {
          *i = v5;
          v5 = v9;
          i[1] = v8;
          i += 2;
        }
      }
      v40 = v5 + 1;
      v41 = v5;
      if ( (__int64)(v5 + 1) < (__int64)end )
      {
        do
        {
          v42 = v41 >> 4;
          v43 = v41 & 0xF;
          for ( j = v41 + 1; less(&arr->Pages[j >> 4][j & 0xF], &arr->Pages[v42][v43]); v43 = ((_DWORD)j - 1) & 0xF )
          {
            v45 = arr->Pages;
            v46 = v45[v42];
            v47 = &v45[j >> 4][j & 0xF];
            --j;
            v48 = *v47;
            *v47 = v46[v43];
            v46[v43] = v48;
            if ( j == v5 )
              break;
            v42 = (j - 1) >> 4;
          }
          v41 = v40++;
        }
        while ( v40 < v50 );
      }
      if ( i <= v54 )
        break;
      end = *(i - 1);
      i -= 2;
      v50 = end;
    }
  }
}

void __fastcall Scaleform::Alg::QuickSortSliced<Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::StrokerEdgeType,4,16>,bool (*)(Scaleform::Render::Tessellator::StrokerEdgeType const &,Scaleform::Render::Tessellator::StrokerEdgeType const &)>(
        Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::StrokerEdgeType,4,16> *arr,
        unsigned __int64 start,
        unsigned __int64 end,
        bool (__fastcall *less)(const Scaleform::Render::Tessellator::StrokerEdgeType *, const Scaleform::Render::Tessellator::StrokerEdgeType *))
{
  signed __int64 v5; // r9
  unsigned __int64 v6; // r13
  unsigned __int64 *i; // r12
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  Scaleform::Render::Tessellator::StrokerEdgeType **Pages; // rdx
  Scaleform::Render::Tessellator::StrokerEdgeType *v12; // r8
  unsigned __int64 v13; // r14
  Scaleform::Render::Tessellator::StrokerEdgeType *v14; // rdx
  unsigned __int64 v15; // r15
  Scaleform::Render::Tessellator::StrokerEdgeType v16; // rax
  Scaleform::Render::Tessellator::StrokerEdgeType **v17; // rcx
  const Scaleform::Render::Tessellator::StrokerEdgeType *v18; // rdx
  Scaleform::Render::Tessellator::StrokerEdgeType *v19; // rcx
  Scaleform::Render::Tessellator::StrokerEdgeType **v20; // rcx
  Scaleform::Render::Tessellator::StrokerEdgeType *v21; // r8
  Scaleform::Render::Tessellator::StrokerEdgeType *v22; // rdx
  Scaleform::Render::Tessellator::StrokerEdgeType v23; // rax
  Scaleform::Render::Tessellator::StrokerEdgeType **v24; // rcx
  Scaleform::Render::Tessellator::StrokerEdgeType *v25; // rdx
  Scaleform::Render::Tessellator::StrokerEdgeType *v26; // r8
  Scaleform::Render::Tessellator::StrokerEdgeType v27; // rax
  Scaleform::Render::Tessellator::StrokerEdgeType **v28; // rcx
  Scaleform::Render::Tessellator::StrokerEdgeType *v29; // r8
  Scaleform::Render::Tessellator::StrokerEdgeType *v30; // rdx
  Scaleform::Render::Tessellator::StrokerEdgeType v31; // rax
  Scaleform::Render::Tessellator::StrokerEdgeType **v32; // rdx
  Scaleform::Render::Tessellator::StrokerEdgeType *v33; // r8
  Scaleform::Render::Tessellator::StrokerEdgeType *v34; // rdx
  Scaleform::Render::Tessellator::StrokerEdgeType v35; // rax
  Scaleform::Render::Tessellator::StrokerEdgeType *v36; // rdx
  Scaleform::Render::Tessellator::StrokerEdgeType v37; // rax
  signed __int64 v38; // r15
  unsigned __int64 v39; // rbx
  unsigned __int64 v40; // rdi
  unsigned __int64 v41; // r14
  unsigned __int64 j; // rbx
  Scaleform::Render::Tessellator::StrokerEdgeType **v43; // rdx
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rax
  Scaleform::Render::Tessellator::StrokerEdgeType *v46; // r8
  Scaleform::Render::Tessellator::StrokerEdgeType *v47; // rdx
  Scaleform::Render::Tessellator::StrokerEdgeType v48; // rax
  unsigned __int64 v49; // [rsp+20h] [rbp-308h]
  signed __int64 v50; // [rsp+28h] [rbp-300h]
  unsigned __int64 v51; // [rsp+30h] [rbp-2F8h]
  unsigned __int64 v52; // [rsp+40h] [rbp-2E8h]
  unsigned __int64 v53[80]; // [rsp+50h] [rbp-2D8h] BYREF

  v50 = end;
  v5 = end;
  v6 = start;
  if ( end - start >= 2 )
  {
    for ( i = v53; ; v6 = *i )
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
        v51 = (v6 + 1) >> 4;
        v18 = &v17[v51][((_BYTE)v6 + 1) & 0xF];
        v19 = v17[(unsigned __int64)(v5 - 1) >> 4];
        v52 = 8 * ((unsigned __int64)(v5 - 1) >> 4);
        v49 = ((_BYTE)v5 - 1) & 0xF;
        if ( less(&v19[v49], v18) )
        {
          v20 = arr->Pages;
          v21 = v20[v51];
          v22 = &v20[v52 / 8][v49];
          v23 = *v22;
          *v22 = v21[((_BYTE)v6 + 1) & 0xF];
          v21[((_BYTE)v6 + 1) & 0xF] = v23;
        }
        if ( less(&arr->Pages[v13][v15], &arr->Pages[(v6 + 1) >> 4][((_BYTE)v6 + 1) & 0xF]) )
        {
          v24 = arr->Pages;
          v25 = v24[v13];
          v26 = &v24[v51][((_BYTE)v6 + 1) & 0xF];
          v27 = v25[v6 & 0xF];
          v25[v6 & 0xF] = *v26;
          *v26 = v27;
        }
        if ( less(&arr->Pages[v52 / 8][v49], &arr->Pages[v13][v15]) )
        {
          v28 = arr->Pages;
          v29 = v28[v13];
          v30 = &v28[v52 / 8][v49];
          v31 = *v30;
          *v30 = v29[v6 & 0xF];
          v29[v6 & 0xF] = v31;
        }
        while ( 1 )
        {
          do
            ++v10;
          while ( less(&arr->Pages[v10 >> 4][v10 & 0xF], &arr->Pages[v13][v15]) );
          do
            --v9;
          while ( less(&arr->Pages[v13][v15], &arr->Pages[v9 >> 4][v9 & 0xF]) );
          v32 = arr->Pages;
          v33 = &v32[v9 >> 4][v9 & 0xF];
          if ( (__int64)v10 > (__int64)v9 )
            break;
          v34 = &v32[v10 >> 4][v10 & 0xF];
          v35 = *v34;
          *v34 = *v33;
          *v33 = v35;
        }
        v36 = v32[v13];
        v5 = v50;
        v37 = v36[v6 & 0xF];
        v36[v6 & 0xF] = *v33;
        *v33 = v37;
        if ( (__int64)(v9 - v6) <= (__int64)(v50 - v10) )
        {
          i[1] = v50;
          v5 = v9;
          *i = v10;
          i += 2;
          v50 = v9;
        }
        else
        {
          *i = v6;
          v6 = v10;
          i[1] = v9;
          i += 2;
        }
      }
      v38 = v6 + 1;
      v39 = v6;
      if ( (__int64)(v6 + 1) < v5 )
      {
        do
        {
          v40 = v39 >> 4;
          v41 = v39 & 0xF;
          for ( j = v39 + 1; less(&arr->Pages[j >> 4][j & 0xF], &arr->Pages[v40][v41]); v41 = ((_DWORD)j - 1) & 0xF )
          {
            v43 = arr->Pages;
            v44 = j & 0xF;
            v45 = j-- >> 4;
            v46 = v43[v40];
            v47 = &v43[v45][v44];
            v48 = *v47;
            *v47 = v46[v41];
            v46[v41] = v48;
            if ( j == v6 )
              break;
            v40 = (j - 1) >> 4;
          }
          v39 = v38++;
        }
        while ( v38 < v50 );
      }
      if ( i <= v53 )
        break;
      v5 = *(i - 1);
      i -= 2;
      v50 = v5;
    }
  }
}

void __fastcall Scaleform::Alg::QuickSortSliced<Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::TmpEdgeAAType,3,4>,bool (*)(Scaleform::Render::Tessellator::TmpEdgeAAType const &,Scaleform::Render::Tessellator::TmpEdgeAAType const &)>(
        Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::TmpEdgeAAType,3,4> *arr,
        unsigned __int64 start,
        unsigned __int64 end,
        bool (__fastcall *less)(const Scaleform::Render::Tessellator::TmpEdgeAAType *, const Scaleform::Render::Tessellator::TmpEdgeAAType *))
{
  signed __int64 v5; // r9
  unsigned __int64 v6; // r13
  unsigned __int64 *i; // r12
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  Scaleform::Render::Tessellator::TmpEdgeAAType **Pages; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  Scaleform::Render::Tessellator::TmpEdgeAAType *v14; // rax
  __int128 v15; // xmm0
  Scaleform::Render::Tessellator::TmpEdgeAAType *v16; // r8
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r15
  Scaleform::Render::Tessellator::TmpEdgeAAType *v19; // rax
  __int128 v20; // xmm2
  __int64 v21; // xmm3_8
  Scaleform::Render::Tessellator::TmpEdgeAAType **v22; // rcx
  const Scaleform::Render::Tessellator::TmpEdgeAAType *v23; // rdx
  Scaleform::Render::Tessellator::TmpEdgeAAType *v24; // rcx
  Scaleform::Render::Tessellator::TmpEdgeAAType **v25; // rcx
  Scaleform::Render::Tessellator::TmpEdgeAAType *v26; // rax
  Scaleform::Render::Tessellator::TmpEdgeAAType *v27; // rdx
  __int128 v28; // xmm2
  __int64 v29; // xmm3_8
  Scaleform::Render::Tessellator::TmpEdgeAAType **v30; // rcx
  Scaleform::Render::Tessellator::TmpEdgeAAType *v31; // rdx
  Scaleform::Render::Tessellator::TmpEdgeAAType *v32; // rax
  __int128 v33; // xmm2
  __int64 v34; // xmm3_8
  Scaleform::Render::Tessellator::TmpEdgeAAType **v35; // rcx
  Scaleform::Render::Tessellator::TmpEdgeAAType *v36; // rax
  Scaleform::Render::Tessellator::TmpEdgeAAType *v37; // rdx
  __int128 v38; // xmm2
  __int64 v39; // xmm3_8
  Scaleform::Render::Tessellator::TmpEdgeAAType **v40; // r8
  Scaleform::Render::Tessellator::TmpEdgeAAType *v41; // rax
  __int128 v42; // xmm0
  Scaleform::Render::Tessellator::TmpEdgeAAType *v43; // r9
  __int64 v44; // rcx
  Scaleform::Render::Tessellator::TmpEdgeAAType *v45; // rax
  __int128 v46; // xmm2
  __int64 v47; // xmm3_8
  __int128 v48; // xmm0
  Scaleform::Render::Tessellator::TmpEdgeAAType *v49; // rdx
  Scaleform::Render::Tessellator::TmpEdgeAAType *v50; // rax
  __int128 v51; // xmm2
  __int64 v52; // xmm3_8
  signed __int64 v53; // r15
  unsigned __int64 v54; // rbx
  unsigned __int64 v55; // rdi
  unsigned __int64 v56; // r14
  unsigned __int64 j; // rbx
  Scaleform::Render::Tessellator::TmpEdgeAAType **v58; // r8
  Scaleform::Render::Tessellator::TmpEdgeAAType *v59; // r9
  __int64 v60; // rcx
  Scaleform::Render::Tessellator::TmpEdgeAAType *v61; // rax
  __int64 v62; // xmm3_8
  __int128 v63; // xmm2
  unsigned __int64 v64; // [rsp+20h] [rbp-308h]
  signed __int64 v65; // [rsp+28h] [rbp-300h]
  unsigned __int64 v66; // [rsp+30h] [rbp-2F8h]
  __int64 v67; // [rsp+38h] [rbp-2F0h]
  unsigned __int64 v68; // [rsp+40h] [rbp-2E8h]
  unsigned __int64 v69[80]; // [rsp+50h] [rbp-2D8h] BYREF

  v65 = end;
  v5 = end;
  v6 = start;
  if ( end - start >= 2 )
  {
    for ( i = v69; ; v6 = *i )
    {
      while ( (__int64)(v5 - v6) > 9 )
      {
        v9 = v5 - 1;
        v10 = v6 + 1;
        Pages = arr->Pages;
        v12 = (__int64)(v5 - v6) / 2 + v6;
        v13 = v12 & 7;
        v14 = Pages[v12 >> 3];
        v15 = *(_OWORD *)&v14[v13].cntVer;
        v16 = &v14[v13];
        v17 = v6 >> 3;
        v18 = v6 & 7;
        v19 = Pages[v17];
        v20 = *(_OWORD *)&v19[v18].cntVer;
        v21 = *(_QWORD *)&v19[v18].slope;
        *(_OWORD *)&v19[v18].cntVer = v15;
        *(_QWORD *)&v19[v18].slope = *(_QWORD *)&v16->slope;
        *(_OWORD *)&v16->cntVer = v20;
        *(_QWORD *)&v16->slope = v21;
        v22 = arr->Pages;
        v66 = (v6 + 1) >> 3;
        v23 = &v22[v66][((_BYTE)v6 + 1) & 7];
        v67 = ((_BYTE)v6 + 1) & 7;
        v24 = v22[(unsigned __int64)(v5 - 1) >> 3];
        v68 = 8 * ((unsigned __int64)(v5 - 1) >> 3);
        v64 = ((_BYTE)v5 - 1) & 7;
        if ( less(&v24[v64], v23) )
        {
          v25 = arr->Pages;
          v26 = v25[v68 / 8];
          v27 = &v25[v66][v67];
          v28 = *(_OWORD *)&v26[v64].cntVer;
          v29 = *(_QWORD *)&v26[v64].slope;
          *(_OWORD *)&v26[v64].cntVer = *(_OWORD *)&v27->cntVer;
          *(_QWORD *)&v26[v64].slope = *(_QWORD *)&v27->slope;
          *(_OWORD *)&v27->cntVer = v28;
          *(_QWORD *)&v27->slope = v29;
        }
        if ( less(&arr->Pages[v17][v18], &arr->Pages[(v6 + 1) >> 3][((_BYTE)v6 + 1) & 7]) )
        {
          v30 = arr->Pages;
          v31 = &v30[v66][v67];
          v32 = v30[v17];
          v33 = *(_OWORD *)&v32[v18].cntVer;
          v34 = *(_QWORD *)&v32[v18].slope;
          *(_OWORD *)&v32[v18].cntVer = *(_OWORD *)&v31->cntVer;
          *(_QWORD *)&v32[v18].slope = *(_QWORD *)&v31->slope;
          *(_OWORD *)&v31->cntVer = v33;
          *(_QWORD *)&v31->slope = v34;
        }
        if ( less(&arr->Pages[v68 / 8][v64], &arr->Pages[v17][v18]) )
        {
          v35 = arr->Pages;
          v36 = v35[v68 / 8];
          v37 = &v35[v17][v18];
          v38 = *(_OWORD *)&v36[v64].cntVer;
          v39 = *(_QWORD *)&v36[v64].slope;
          *(_OWORD *)&v36[v64].cntVer = *(_OWORD *)&v37->cntVer;
          *(_QWORD *)&v36[v64].slope = *(_QWORD *)&v37->slope;
          *(_OWORD *)&v37->cntVer = v38;
          *(_QWORD *)&v37->slope = v39;
        }
        while ( 1 )
        {
          do
            ++v10;
          while ( less(&arr->Pages[v10 >> 3][v10 & 7], &arr->Pages[v17][v18]) );
          do
            --v9;
          while ( less(&arr->Pages[v17][v18], &arr->Pages[v9 >> 3][v9 & 7]) );
          v40 = arr->Pages;
          v41 = v40[v9 >> 3];
          if ( (__int64)v10 > (__int64)v9 )
            break;
          v42 = *(_OWORD *)&v41[v9 & 7].cntVer;
          v43 = &v41[v9 & 7];
          v44 = v10 & 7;
          v45 = v40[v10 >> 3];
          v46 = *(_OWORD *)&v45[v10 & 7].cntVer;
          v47 = *(_QWORD *)&v45[v10 & 7].slope;
          *(_OWORD *)&v45[v44].cntVer = v42;
          *(_QWORD *)&v45[v44].slope = *(_QWORD *)&v43->slope;
          *(_OWORD *)&v43->cntVer = v46;
          *(_QWORD *)&v43->slope = v47;
        }
        v48 = *(_OWORD *)&v41[v9 & 7].cntVer;
        v5 = v65;
        v49 = &v41[v9 & 7];
        v50 = v40[v17];
        v51 = *(_OWORD *)&v50[v18].cntVer;
        v52 = *(_QWORD *)&v50[v18].slope;
        *(_OWORD *)&v50[v18].cntVer = v48;
        *(_QWORD *)&v50[v18].slope = *(_QWORD *)&v49->slope;
        *(_OWORD *)&v49->cntVer = v51;
        *(_QWORD *)&v49->slope = v52;
        if ( (__int64)(v9 - v6) <= (__int64)(v65 - v10) )
        {
          i[1] = v65;
          v5 = v9;
          *i = v10;
          i += 2;
          v65 = v9;
        }
        else
        {
          *i = v6;
          v6 = v10;
          i[1] = v9;
          i += 2;
        }
      }
      v53 = v6 + 1;
      v54 = v6;
      if ( (__int64)(v6 + 1) < v5 )
      {
        do
        {
          v55 = v54 >> 3;
          v56 = v54 & 7;
          for ( j = v54 + 1; less(&arr->Pages[j >> 3][j & 7], &arr->Pages[v55][v56]); v56 = ((_DWORD)j - 1) & 7 )
          {
            v58 = arr->Pages;
            v59 = &v58[v55][v56];
            v60 = j & 7;
            v61 = v58[j-- >> 3];
            v62 = *(_QWORD *)&v61[v60].slope;
            v63 = *(_OWORD *)&v61[v60].cntVer;
            *(_OWORD *)&v61[v60].cntVer = *(_OWORD *)&v59->cntVer;
            *(_QWORD *)&v61[v60].slope = *(_QWORD *)&v59->slope;
            *(_OWORD *)&v59->cntVer = v63;
            *(_QWORD *)&v59->slope = v62;
            if ( j == v6 )
              break;
            v55 = (j - 1) >> 3;
          }
          v54 = v53++;
        }
        while ( v53 < v65 );
      }
      if ( i <= v69 )
        break;
      v5 = *(i - 1);
      i -= 2;
      v65 = v5;
    }
  }
}

void __fastcall Scaleform::Alg::QuickSortSliced<Scaleform::Render::ArrayUnsafe<Scaleform::Render::Tessellator::MonoChainType *>,bool (*)(Scaleform::Render::Tessellator::MonoChainType const *,Scaleform::Render::Tessellator::MonoChainType const *)>(
        Scaleform::Render::ArrayUnsafe<Scaleform::Render::Tessellator::MonoChainType *> *arr,
        unsigned __int64 start,
        unsigned __int64 end,
        bool (__fastcall *less)(const Scaleform::Render::Tessellator::MonoChainType *, const Scaleform::Render::Tessellator::MonoChainType *))
{
  signed __int64 v5; // r13
  unsigned __int64 v6; // r15
  char *i; // r12
  Scaleform::Render::Tessellator::MonoChainType **Array; // r8
  signed __int64 v10; // rsi
  signed __int64 v11; // rdi
  Scaleform::Render::Tessellator::MonoChainType *v12; // rcx
  Scaleform::Render::Tessellator::MonoChainType **v13; // rdx
  Scaleform::Render::Tessellator::MonoChainType **v14; // rax
  Scaleform::Render::Tessellator::MonoChainType *v15; // rdx
  Scaleform::Render::Tessellator::MonoChainType **v16; // rax
  Scaleform::Render::Tessellator::MonoChainType *v17; // rdx
  Scaleform::Render::Tessellator::MonoChainType **v18; // rax
  Scaleform::Render::Tessellator::MonoChainType **v19; // r8
  Scaleform::Render::Tessellator::MonoChainType **v20; // rcx
  Scaleform::Render::Tessellator::MonoChainType *v21; // rdx
  Scaleform::Render::Tessellator::MonoChainType **v22; // rax
  Scaleform::Render::Tessellator::MonoChainType *v23; // rdx
  signed __int64 v24; // r14
  unsigned __int64 j; // rdi
  unsigned __int64 k; // rsi
  Scaleform::Render::Tessellator::MonoChainType **v27; // rdx
  Scaleform::Render::Tessellator::MonoChainType *v28; // rcx
  char v29[640]; // [rsp+20h] [rbp-2D8h] BYREF

  v5 = end;
  v6 = start;
  if ( end - start >= 2 )
  {
    for ( i = v29; ; v5 = *((_QWORD *)i + 1) )
    {
      while ( (__int64)(v5 - v6) > 9 )
      {
        Array = arr->Array;
        v10 = v6 + 1;
        v11 = v5 - 1;
        v12 = Array[v6];
        v13 = &Array[v6] + (__int64)(v5 - v6) / 2;
        Array[v6] = *v13;
        *v13 = v12;
        if ( less(arr->Array[v5 - 1], arr->Array[v6 + 1]) )
        {
          v14 = arr->Array;
          v15 = v14[v11];
          v14[v11] = v14[v10];
          v14[v10] = v15;
        }
        if ( less(arr->Array[v6], arr->Array[v10]) )
        {
          v16 = arr->Array;
          v17 = v16[v6];
          v16[v6] = v16[v10];
          v16[v10] = v17;
        }
        if ( less(arr->Array[v11], arr->Array[v6]) )
        {
          v18 = arr->Array;
          v19 = &v18[v6];
          v20 = &v18[v11];
          goto LABEL_10;
        }
        while ( 1 )
        {
          do
            ++v10;
          while ( less(arr->Array[v10], arr->Array[v6]) );
          do
            --v11;
          while ( less(arr->Array[v6], arr->Array[v11]) );
          v22 = arr->Array;
          v19 = &v22[v11];
          if ( v10 > v11 )
            break;
          v20 = &v22[v10];
LABEL_10:
          v21 = *v20;
          *v20 = *v19;
          *v19 = v21;
        }
        v23 = v22[v6];
        v22[v6] = *v19;
        *v19 = v23;
        if ( (__int64)(v11 - v6) <= v5 - v10 )
        {
          *((_QWORD *)i + 1) = v5;
          v5 = v11;
          *(_QWORD *)i = v10;
        }
        else
        {
          *(_QWORD *)i = v6;
          v6 = v10;
          *((_QWORD *)i + 1) = v11;
        }
        i += 16;
      }
      v24 = v6 + 1;
      for ( j = v6; v24 < v5; ++v24 )
      {
        for ( k = j; less(arr->Array[j + 1], arr->Array[j]); k = j )
        {
          v27 = &arr->Array[k];
          v28 = v27[1];
          v27[1] = *v27;
          *v27 = v28;
          if ( j == v6 )
            break;
          --j;
        }
        j = v24;
      }
      if ( i <= v29 )
        break;
      v6 = *((_QWORD *)i - 2);
      i -= 16;
    }
  }
}

void __fastcall Scaleform::Alg::QuickSortSliced<Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::ArrayAdaptor,Scaleform::Render::Tessellator::CmpVer1>(
        Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::ArrayAdaptor *arr,
        unsigned __int64 start,
        unsigned __int64 end,
        Scaleform::Render::Tessellator::CmpVer1 less)
{
  signed __int64 v4; // r12
  unsigned __int64 v5; // r13
  Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::ArrayAdaptor *v6; // rdi
  char *i; // r15
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r11
  Scaleform::Render::Tessellator::TriangleType **Pages; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r10
  Scaleform::Render::Tessellator::TriangleType *v13; // r8
  __int128 v14; // xmm0
  __int64 v15; // rbp
  Scaleform::Render::Tessellator::TriangleType *v16; // rax
  __int128 v17; // xmm2
  Scaleform::Render::Tessellator::MonoVertexType *v18; // xmm3_8
  Scaleform::Render::Tessellator::TriangleType **v19; // r10
  Scaleform::Render::Tessellator::TriangleType *v20; // r14
  Scaleform::Render::TessVertex **v21; // r8
  Scaleform::Render::Tessellator::TriangleType *v22; // r10
  unsigned __int64 v23; // rdx
  Scaleform::Render::TessVertex *v24; // rcx
  float y; // xmm1_4
  float v26; // xmm0_4
  const Scaleform::Render::ArrayPaged<Scaleform::Render::TessVertex,4,16> *v27; // rax
  float x; // xmm0_4
  bool v29; // cf
  bool v30; // zf
  __int128 v31; // xmm2
  Scaleform::Render::Tessellator::MonoVertexType *v32; // xmm3_8
  Scaleform::Render::TessVertex **v33; // r10
  Scaleform::Render::Tessellator::TriangleType **v34; // r8
  Scaleform::Render::Tessellator::TriangleType *v35; // r14
  Scaleform::Render::Tessellator::TriangleType *v36; // r8
  unsigned __int64 v37; // rcx
  __int64 v38; // rdx
  unsigned int v39; // ecx
  float v40; // xmm1_4
  float v41; // xmm0_4
  const Scaleform::Render::ArrayPaged<Scaleform::Render::TessVertex,4,16> *v42; // rax
  float v43; // xmm0_4
  bool v44; // cf
  bool v45; // zf
  __int128 v46; // xmm2
  Scaleform::Render::Tessellator::MonoVertexType *v47; // xmm3_8
  Scaleform::Render::TessVertex **v48; // r8
  Scaleform::Render::Tessellator::TriangleType **v49; // rdx
  Scaleform::Render::Tessellator::TriangleType *v50; // r10
  unsigned __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rdi
  Scaleform::Render::TessVertex *v54; // r14
  float v55; // xmm0_4
  Scaleform::Render::Tessellator::TriangleType *v56; // rdx
  unsigned __int64 v57; // rcx
  __int64 v58; // rax
  Scaleform::Render::TessVertex *v59; // rcx
  float v60; // xmm1_4
  float v61; // xmm0_4
  bool v62; // cf
  bool v63; // zf
  __int128 v64; // xmm2
  Scaleform::Render::Tessellator::MonoVertexType *v65; // xmm3_8
  Scaleform::Render::Tessellator::TriangleType **v66; // rdi
  Scaleform::Render::TessVertex **v67; // rsi
  __int64 v68; // rcx
  Scaleform::Render::TessVertex *v69; // r10
  float v70; // xmm1_4
  unsigned __int64 v71; // rax
  Scaleform::Render::TessVertex *v72; // rdx
  float v73; // xmm0_4
  float v74; // xmm0_4
  bool v75; // cf
  bool v76; // zf
  __int64 v77; // rcx
  Scaleform::Render::TessVertex *v78; // r10
  float v79; // xmm1_4
  unsigned __int64 v80; // rax
  Scaleform::Render::TessVertex *v81; // rdx
  float v82; // xmm0_4
  float v83; // xmm0_4
  bool v84; // cf
  bool v85; // zf
  __int64 v86; // rax
  unsigned __int64 v87; // rcx
  __int64 v88; // r10
  Scaleform::Render::Tessellator::TriangleType *v89; // r8
  __int128 v90; // xmm0
  __int64 v91; // rdx
  Scaleform::Render::Tessellator::TriangleType *v92; // rax
  __int128 v93; // xmm2
  Scaleform::Render::Tessellator::MonoVertexType *v94; // xmm3_8
  Scaleform::Render::Tessellator::TriangleType **v95; // rdx
  Scaleform::Render::Tessellator::TriangleType *v96; // r8
  Scaleform::Render::Tessellator::TriangleType *v97; // rax
  __int128 v98; // xmm2
  Scaleform::Render::Tessellator::MonoVertexType *v99; // xmm3_8
  unsigned __int64 v100; // r10
  Scaleform::Render::Tessellator::TriangleType **v101; // r14
  Scaleform::Render::TessVertex **v102; // r8
  unsigned __int64 v103; // rax
  Scaleform::Render::Tessellator::TriangleType *v104; // rsi
  __int64 v105; // rdx
  Scaleform::Render::TessVertex *v106; // rbp
  float v107; // xmm0_4
  unsigned __int64 v108; // rcx
  __int64 v109; // rax
  Scaleform::Render::TessVertex *v110; // rcx
  float v111; // xmm1_4
  float v112; // xmm0_4
  bool v113; // cf
  bool v114; // zf
  __int64 v115; // r11
  __int64 v116; // rdx
  Scaleform::Render::Tessellator::TriangleType *v117; // rcx
  Scaleform::Render::Tessellator::MonoVertexType *v118; // xmm3_8
  __int128 v119; // xmm2
  unsigned __int64 v121; // [rsp+10h] [rbp-318h]
  Scaleform::Render::TessVertex *v122; // [rsp+20h] [rbp-308h]
  Scaleform::Render::TessVertex *v123; // [rsp+20h] [rbp-308h]
  unsigned __int64 v124; // [rsp+40h] [rbp-2E8h]
  const Scaleform::Render::ArrayPaged<Scaleform::Render::TessVertex,4,16> *v125; // [rsp+48h] [rbp-2E0h]
  char v126[640]; // [rsp+50h] [rbp-2D8h] BYREF
  const Scaleform::Render::ArrayPaged<Scaleform::Render::TessVertex,4,16> *Ver; // [rsp+348h] [rbp+20h]

  Ver = less.Ver;
  v125 = less.Ver;
  v4 = end;
  v5 = start;
  v6 = arr;
  if ( end - start >= 2 )
  {
    for ( i = v126; ; v4 = *((_QWORD *)i + 1) )
    {
      while ( 1 )
      {
        v8 = v5 + 1;
        if ( (__int64)(v4 - v5) <= 9 )
          break;
        v9 = v4 - 1;
        Pages = v6->Pages;
        v11 = v5 + (__int64)(v4 - v5) / 2;
        v12 = v11 & 0xF;
        v13 = Pages[v11 >> 4];
        v121 = v5 >> 4;
        v14 = *(_OWORD *)&v13[v11 & 0xF].d.m.v1;
        v15 = v5 & 0xF;
        v16 = Pages[v5 >> 4];
        v124 = (unsigned __int64)(v4 - 1) >> 4;
        v17 = *(_OWORD *)&v16[v5 & 0xF].d.m.v1;
        v18 = v16[v5 & 0xF].d.m.v3;
        *(_OWORD *)&v16[v15].d.m.v1 = v14;
        v16[v15].d.m.v3 = v13[v11 & 0xF].d.m.v3;
        *(_OWORD *)&v13[v12].d.m.v1 = v17;
        v13[v12].d.m.v3 = v18;
        v19 = v6->Pages;
        v20 = v19[(unsigned __int64)(v4 - 1) >> 4];
        v21 = Ver->Pages;
        v22 = v19[v8 >> 4];
        v122 = v21[(unsigned __int64)v20[((_BYTE)v4 - 1) & 0xF].d.t.v1 >> 4];
        v23 = v22[v8 & 0xF].d.t.v1;
        v24 = v21[v23 >> 4];
        y = v24[v23 & 0xF].y;
        v26 = v122[v20[((_BYTE)v4 - 1) & 0xF].d.t.v1 & 0xF].y;
        v27 = Ver;
        if ( v26 == y )
        {
          x = v24[v23 & 0xF].x;
          v29 = x < v122[v20[((_BYTE)v4 - 1) & 0xF].d.t.v1 & 0xF].x;
          v30 = x == v122[v20[((_BYTE)v4 - 1) & 0xF].d.t.v1 & 0xF].x;
          v27 = Ver;
        }
        else
        {
          v29 = y < v26;
          v30 = y == v26;
        }
        if ( !v29 && !v30 )
        {
          v31 = *(_OWORD *)&v20[((_BYTE)v4 - 1) & 0xF].d.m.v1;
          v32 = v20[((_BYTE)v4 - 1) & 0xF].d.m.v3;
          *(_OWORD *)&v20[((_BYTE)v4 - 1) & 0xF].d.m.v1 = *(_OWORD *)&v22[v8 & 0xF].d.m.v1;
          v20[((_BYTE)v4 - 1) & 0xF].d.m.v3 = v22[v8 & 0xF].d.m.v3;
          *(_OWORD *)&v22[v8 & 0xF].d.m.v1 = v31;
          v22[v8 & 0xF].d.m.v3 = v32;
          v27 = Ver;
        }
        v33 = v27->Pages;
        v34 = arr->Pages;
        v35 = v34[v121];
        v36 = v34[v8 >> 4];
        v37 = v35[v5 & 0xF].d.t.v1;
        v38 = v37 & 0xF;
        v123 = v33[v37 >> 4];
        v39 = v36[v8 & 0xF].d.t.v1;
        v40 = v33[(unsigned __int64)v39 >> 4][v39 & 0xF].y;
        v41 = v123[v38].y;
        v42 = Ver;
        if ( v41 == v40 )
        {
          v43 = v33[(unsigned __int64)v39 >> 4][v39 & 0xF].x;
          v44 = v43 < v123[v38].x;
          v45 = v43 == v123[v38].x;
          v42 = Ver;
        }
        else
        {
          v44 = v40 < v41;
          v45 = v40 == v41;
        }
        if ( !v44 && !v45 )
        {
          v46 = *(_OWORD *)&v35[v5 & 0xF].d.m.v1;
          v47 = v35[v5 & 0xF].d.m.v3;
          *(_OWORD *)&v35[v5 & 0xF].d.m.v1 = *(_OWORD *)&v36[v8 & 0xF].d.m.v1;
          v35[v5 & 0xF].d.m.v3 = v36[v8 & 0xF].d.m.v3;
          *(_OWORD *)&v36[v8 & 0xF].d.m.v1 = v46;
          v36[v8 & 0xF].d.m.v3 = v47;
          v42 = Ver;
        }
        v48 = v42->Pages;
        v49 = arr->Pages;
        v50 = v49[v124];
        v51 = v50[((_BYTE)v4 - 1) & 0xF].d.t.v1;
        v52 = v51 & 0xF;
        v53 = v52;
        v54 = v48[v51 >> 4];
        v55 = v54[v52].y;
        v56 = v49[v121];
        v57 = v56[v5 & 0xF].d.t.v1;
        v58 = v57 & 0xF;
        v59 = v48[v57 >> 4];
        v60 = v59[v58].y;
        if ( v55 == v60 )
        {
          v61 = v59[v58].x;
          v62 = v61 < v54[v53].x;
          v63 = v61 == v54[v53].x;
        }
        else
        {
          v62 = v60 < v55;
          v63 = v60 == v55;
        }
        if ( !v62 && !v63 )
        {
          v64 = *(_OWORD *)&v50[((_BYTE)v4 - 1) & 0xF].d.m.v1;
          v65 = v50[((_BYTE)v4 - 1) & 0xF].d.m.v3;
          *(_OWORD *)&v50[((_BYTE)v4 - 1) & 0xF].d.m.v1 = *(_OWORD *)&v56[v5 & 0xF].d.m.v1;
          v50[((_BYTE)v4 - 1) & 0xF].d.m.v3 = v56[v5 & 0xF].d.m.v3;
          *(_OWORD *)&v56[v5 & 0xF].d.m.v1 = v64;
          v56[v5 & 0xF].d.m.v3 = v65;
        }
        while ( 1 )
        {
          v66 = arr->Pages;
          v67 = less.Ver->Pages;
          v68 = v66[v121][v5 & 0xF].d.t.v1 & 0xF;
          v69 = v67[(unsigned __int64)v66[v121][v5 & 0xF].d.t.v1 >> 4];
          v70 = v69[v68].y;
          do
          {
            ++v8;
            v71 = v66[v8 >> 4][v8 & 0xF].d.t.v1;
            v72 = v67[v71 >> 4];
            v73 = v72[v71 & 0xF].y;
            if ( v73 == v70 )
            {
              v74 = v69[v68].x;
              v75 = v74 < v72[v71 & 0xF].x;
              v76 = v74 == v72[v71 & 0xF].x;
            }
            else
            {
              v75 = v70 < v73;
              v76 = v70 == v73;
            }
          }
          while ( !v75 && !v76 );
          v77 = v66[v121][v5 & 0xF].d.t.v1 & 0xF;
          v78 = v67[(unsigned __int64)v66[v121][v5 & 0xF].d.t.v1 >> 4];
          v79 = v78[v77].y;
          do
          {
            --v9;
            v80 = v66[v9 >> 4][v9 & 0xF].d.t.v1;
            v81 = v67[v80 >> 4];
            v82 = v81[v80 & 0xF].y;
            if ( v79 == v82 )
            {
              v83 = v81[v80 & 0xF].x;
              v84 = v83 < v78[v77].x;
              v85 = v83 == v78[v77].x;
            }
            else
            {
              v84 = v82 < v79;
              v85 = v82 == v79;
            }
          }
          while ( !v84 && !v85 );
          v86 = v9 & 0xF;
          v87 = v9 >> 4;
          v88 = v86;
          if ( (__int64)v8 > (__int64)v9 )
            break;
          v89 = v66[v87];
          v90 = *(_OWORD *)&v89[v86].d.m.v1;
          v91 = v8 & 0xF;
          v92 = v66[v8 >> 4];
          v93 = *(_OWORD *)&v92[v8 & 0xF].d.m.v1;
          v94 = v92[v8 & 0xF].d.m.v3;
          *(_OWORD *)&v92[v91].d.m.v1 = v90;
          v92[v91].d.m.v3 = v89[v88].d.m.v3;
          *(_OWORD *)&v89[v88].d.m.v1 = v93;
          v89[v88].d.m.v3 = v94;
        }
        v95 = arr->Pages;
        v6 = arr;
        v96 = v95[v87];
        v97 = v95[v121];
        v98 = *(_OWORD *)&v97[v5 & 0xF].d.m.v1;
        v99 = v97[v5 & 0xF].d.m.v3;
        *(_OWORD *)&v97[v5 & 0xF].d.m.v1 = *(_OWORD *)&v96[v88].d.m.v1;
        v97[v5 & 0xF].d.m.v3 = v96[v88].d.m.v3;
        *(_OWORD *)&v96[v88].d.m.v1 = v98;
        v96[v88].d.m.v3 = v99;
        if ( (__int64)(v9 - v5) <= (__int64)(v4 - v8) )
        {
          *((_QWORD *)i + 1) = v4;
          v4 = v9;
          *(_QWORD *)i = v8;
        }
        else
        {
          *(_QWORD *)i = v5;
          v5 = v8;
          *((_QWORD *)i + 1) = v9;
        }
        i += 16;
      }
      v100 = v5;
      if ( (__int64)v8 < v4 )
      {
        do
        {
          while ( 1 )
          {
            v101 = arr->Pages;
            v102 = Ver->Pages;
            v103 = v101[(v100 + 1) >> 4][((_BYTE)v100 + 1) & 0xF].d.t.v1;
            v104 = v101[v100 >> 4];
            v105 = v103 & 0xF;
            v106 = v102[v103 >> 4];
            v107 = v106[v103 & 0xF].y;
            v108 = v104[v100 & 0xF].d.t.v1;
            v109 = v108 & 0xF;
            v110 = v102[v108 >> 4];
            v111 = v110[v109].y;
            if ( v107 == v111 )
            {
              v112 = v110[v109].x;
              v113 = v112 < v106[v105].x;
              v114 = v112 == v106[v105].x;
            }
            else
            {
              v113 = v111 < v107;
              v114 = v111 == v107;
            }
            if ( v113 || v114 )
              break;
            v115 = ((_BYTE)v100 + 1) & 0xF;
            v116 = v115;
            v117 = v101[(v100 + 1) >> 4];
            v118 = v117[v115].d.m.v3;
            v119 = *(_OWORD *)&v117[v115].d.m.v1;
            *(_OWORD *)&v117[v116].d.m.v1 = *(_OWORD *)&v104[v100 & 0xF].d.m.v1;
            v117[v116].d.m.v3 = v104[v100 & 0xF].d.m.v3;
            *(_OWORD *)&v104[v100 & 0xF].d.m.v1 = v119;
            v104[v100 & 0xF].d.m.v3 = v118;
            if ( v100 == v5 )
              break;
            --v100;
          }
          v100 = v8++;
        }
        while ( (__int64)v8 < v4 );
        less.Ver = v125;
        v6 = arr;
      }
      if ( i <= v126 )
        break;
      v5 = *((_QWORD *)i - 2);
      i -= 16;
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

void __fastcall Scaleform::Render::Tessellator::Tessellator(
        Scaleform::Render::Tessellator *this,
        Scaleform::Render::LinearHeap *heap1,
        Scaleform::Render::LinearHeap *heap2)
{
  this->pHeap1 = heap1;
  this->__vftable = (Scaleform::Render::Tessellator_vtbl *)&Scaleform::Render::Tessellator::`vftable';
  *(_QWORD *)&this->FillRule = 0i64;
  this->pHeap2 = heap2;
  *(_DWORD *)&this->HasEpsilon = 0x10000;
  this->VertexLimit = 65534;
  this->ComplexFlags.pHeap = heap2;
  this->ComplexFlags.Size = 0i64;
  this->ComplexFlags.Array = 0i64;
  this->MaxStyle = 0;
  this->Paths.pHeap = heap1;
  this->Paths.Size = 0i64;
  this->Paths.NumPages = 0i64;
  this->Paths.MaxPages = 0i64;
  this->Paths.Pages = 0i64;
  this->SrcVertices.pHeap = heap1;
  this->SrcVertices.Size = 0i64;
  this->SrcVertices.NumPages = 0i64;
  this->SrcVertices.MaxPages = 0i64;
  this->SrcVertices.Pages = 0i64;
  this->LastVertex = 0;
  this->Edges.pHeap = heap1;
  this->Edges.Size = 0i64;
  this->Edges.NumPages = 0i64;
  this->Edges.MaxPages = 0i64;
  this->Edges.Pages = 0i64;
  this->MonoChains.pHeap = heap1;
  this->MonoChains.Size = 0i64;
  this->MonoChains.NumPages = 0i64;
  this->MonoChains.MaxPages = 0i64;
  this->MonoChains.Pages = 0i64;
  this->MonoChainsSorted.pHeap = heap1;
  this->MonoChainsSorted.Size = 0i64;
  this->MonoChainsSorted.Array = 0i64;
  this->Scanbeams.pHeap = heap1;
  this->Scanbeams.Size = 0i64;
  this->Scanbeams.NumPages = 0i64;
  this->Scanbeams.MaxPages = 0i64;
  this->Scanbeams.Pages = 0i64;
  this->ActiveChains.pHeap = heap1;
  this->ActiveChains.Size = 0i64;
  this->ActiveChains.NumPages = 0i64;
  this->ActiveChains.MaxPages = 0i64;
  this->ActiveChains.Pages = 0i64;
  this->InteriorChains.pHeap = heap1;
  this->InteriorChains.Size = 0i64;
  this->InteriorChains.NumPages = 0i64;
  this->InteriorChains.MaxPages = 0i64;
  this->InteriorChains.Pages = 0i64;
  this->ValidChains.pHeap = heap1;
  this->ValidChains.Size = 0i64;
  this->ValidChains.NumPages = 0i64;
  this->ValidChains.MaxPages = 0i64;
  this->ValidChains.Pages = 0i64;
  this->InteriorOrder.pHeap = heap1;
  this->InteriorOrder.Size = 0i64;
  this->InteriorOrder.NumPages = 0i64;
  this->InteriorOrder.MaxPages = 0i64;
  this->InteriorOrder.Pages = 0i64;
  this->Intersections.pHeap = heap1;
  this->Intersections.Size = 0i64;
  this->Intersections.NumPages = 0i64;
  this->Intersections.MaxPages = 0i64;
  this->Intersections.Pages = 0i64;
  this->StyleCounts.pHeap = heap1;
  this->StyleCounts.Size = 0i64;
  this->StyleCounts.Array = 0i64;
  this->LastX = -1.0e30;
  this->MinX = 1.0e30;
  this->MinY = 1.0e30;
  this->MaxX = -1.0e30;
  this->MaxY = -1.0e30;
  this->ChainsBelow.pHeap = heap1;
  this->ChainsBelow.Size = 0i64;
  this->ChainsBelow.NumPages = 0i64;
  this->ChainsBelow.MaxPages = 0i64;
  this->ChainsBelow.Pages = 0i64;
  this->ChainsAbove.pHeap = heap1;
  this->ChainsAbove.Size = 0i64;
  this->ChainsAbove.NumPages = 0i64;
  this->ChainsAbove.MaxPages = 0i64;
  this->ChainsAbove.Pages = 0i64;
  this->BaseLines.pHeap = heap1;
  this->BaseLines.Size = 0i64;
  this->BaseLines.NumPages = 0i64;
  this->BaseLines.MaxPages = 0i64;
  this->BaseLines.Pages = 0i64;
  this->PendingEnds.pHeap = heap1;
  this->PendingEnds.Size = 0i64;
  this->PendingEnds.NumPages = 0i64;
  this->PendingEnds.MaxPages = 0i64;
  this->PendingEnds.Pages = 0i64;
  this->Monotones.pHeap = heap2;
  this->Monotones.Size = 0i64;
  this->Monotones.NumPages = 0i64;
  this->Monotones.MaxPages = 0i64;
  this->Monotones.Pages = 0i64;
  this->MonoVertices.pHeap = heap2;
  this->MonoVertices.Size = 0i64;
  this->MonoVertices.NumPages = 0i64;
  this->MonoVertices.MaxPages = 0i64;
  this->MonoVertices.Pages = 0i64;
  this->MeshVertices.pHeap = heap2;
  this->MeshVertices.Size = 0i64;
  this->MeshVertices.NumPages = 0i64;
  this->MeshVertices.MaxPages = 0i64;
  this->MeshVertices.Pages = 0i64;
  this->StyleMatrix.pHeap = heap2;
  this->StyleMatrix.Size = 0i64;
  this->StyleMatrix.Array = 0i64;
  this->Meshes.pHeap = heap2;
  this->Meshes.Size = 0i64;
  this->Meshes.NumPages = 0i64;
  this->Meshes.MaxPages = 0i64;
  this->Meshes.Pages = 0i64;
  this->MeshTriangles.pHeap = heap1;
  this->MeshTriangles.Arrays = 0i64;
  this->MeshTriangles.NumArrays = 0i64;
  this->MeshTriangles.MaxArrays = 0i64;
  this->MonoStyle = 0;
  this->MeshIdx = -1;
  this->FactorOneFlag = 0;
  this->EdgeAAWidth = 0.5;
  this->EdgeAAFlag = 1;
  this->IntersectionEpsilon = 0.0099999998;
  this->LeftChain.pHeap = heap1;
  this->LeftChain.Size = 0i64;
  this->LeftChain.NumPages = 0i64;
  this->LeftChain.MaxPages = 0i64;
  this->LeftChain.Pages = 0i64;
  this->RightChain.pHeap = heap1;
  this->RightChain.Size = 0i64;
  this->RightChain.NumPages = 0i64;
  this->RightChain.MaxPages = 0i64;
  this->RightChain.Pages = 0i64;
  this->TmpEdgeFan.pHeap = heap1;
  this->TmpEdgeFan.Size = 0i64;
  this->TmpEdgeFan.NumPages = 0i64;
  this->TmpEdgeFan.MaxPages = 0i64;
  this->TmpEdgeFan.Pages = 0i64;
  this->EdgeFans.pHeap = heap1;
  this->EdgeFans.Size = 0i64;
  this->EdgeFans.Array = 0i64;
  this->StartFan.pHeap = heap1;
  this->StartFan.Size = 0i64;
  this->StartFan.NumPages = 0i64;
  this->StartFan.MaxPages = 0i64;
  this->StartFan.Pages = 0i64;
  this->EndFan.pHeap = heap1;
  this->EndFan.Size = 0i64;
  this->EndFan.NumPages = 0i64;
  this->EndFan.MaxPages = 0i64;
  this->EndFan.Pages = 0i64;
  this->OuterEdges.pHeap = heap1;
  this->OuterEdges.Size = 0i64;
  this->OuterEdges.NumPages = 0i64;
  this->OuterEdges.MaxPages = 0i64;
  this->OuterEdges.Pages = 0i64;
  this->StrokerEdges.pHeap = heap1;
  this->StrokerEdges.Size = 0i64;
  this->StrokerEdges.NumPages = 0i64;
  this->StrokerEdges.MaxPages = 0i64;
  this->StrokerEdges.Pages = 0i64;
  this->MonoStack.Size = 0i64;
  this->MonoStack.NumPages = 0i64;
  this->MonoStack.MaxPages = 0i64;
  this->MonoStack.Pages = 0i64;
  this->MonoStack.pHeap = heap1;
  this->InnerQuads.Size = 0i64;
  this->InnerQuads.NumPages = 0i64;
  this->InnerQuads.MaxPages = 0i64;
  this->InnerQuads.Pages = 0i64;
  this->InnerQuads.pHeap = heap1;
  this->StarVertices.Size = 0i64;
  this->StarVertices.NumPages = 0i64;
  this->StarVertices.MaxPages = 0i64;
  this->StarVertices.Pages = 0i64;
  this->StarVertices.pHeap = heap1;
  this->FakeVar = 0;
}

void __fastcall Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::AddArray(
        Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16> *this)
{
  unsigned __int64 NumArrays; // rax
  unsigned __int64 MaxArrays; // rdx
  Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::ArrayType *v4; // rbx
  unsigned __int64 v5; // rax
  Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::ArrayType *v6; // rax

  NumArrays = this->NumArrays;
  MaxArrays = this->MaxArrays;
  if ( NumArrays >= MaxArrays )
  {
    if ( NumArrays )
    {
      v4 = (Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::ArrayType *)Scaleform::Render::LinearHeap::Alloc(this->pHeap, MaxArrays << 6);
      memmove(v4, this->Arrays, 32 * this->NumArrays);
      v5 = this->MaxArrays;
      this->Arrays = v4;
      this->MaxArrays = 2 * v5;
    }
    else
    {
      this->MaxArrays = 16i64;
      this->Arrays = (Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::ArrayType *)Scaleform::Render::LinearHeap::Alloc(this->pHeap, 0x200ui64);
    }
  }
  v6 = &this->Arrays[this->NumArrays];
  v6->Size = 0i64;
  v6->NumPages = 0i64;
  v6->MaxPages = 0i64;
  v6->Pages = 0i64;
  ++this->NumArrays;
}

void __fastcall Scaleform::Render::Tessellator::AddVertex(Scaleform::Render::Tessellator *this, float x, float y)
{
  Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::SrcVertexType,4,16> *p_SrcVertices; // rbx
  unsigned __int64 v4; // rdi

  p_SrcVertices = &this->SrcVertices;
  v4 = this->SrcVertices.Size >> 4;
  if ( v4 >= this->SrcVertices.NumPages )
    Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16>::allocPage(
      (Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16> *)&this->SrcVertices,
      v4);
  p_SrcVertices->Pages[v4][p_SrcVertices->Size & 0xF] = (Scaleform::Render::Tessellator::SrcVertexType)__PAIR64__(LODWORD(y), LODWORD(x));
  ++p_SrcVertices->Size;
}

void __fastcall Scaleform::Render::Tessellator::Clear(Scaleform::Render::Tessellator *this)
{
  this->LastX = -1.0e30;
  this->LastVertex = 0;
  this->HasComplexFill = 0;
  this->MaxStyle = 0;
  this->MinX = 1.0e30;
  this->MinY = 1.0e30;
  this->MaxX = -1.0e30;
  this->MaxY = -1.0e30;
  this->ComplexFlags.Size = 0i64;
  this->ComplexFlags.Array = 0i64;
  this->Paths.MaxPages = 0i64;
  this->Paths.NumPages = 0i64;
  this->Paths.Size = 0i64;
  this->Paths.Pages = 0i64;
  this->SrcVertices.MaxPages = 0i64;
  this->SrcVertices.NumPages = 0i64;
  this->SrcVertices.Size = 0i64;
  this->SrcVertices.Pages = 0i64;
  this->Edges.MaxPages = 0i64;
  this->Edges.NumPages = 0i64;
  this->Edges.Size = 0i64;
  this->Edges.Pages = 0i64;
  this->MonoChains.MaxPages = 0i64;
  this->MonoChains.NumPages = 0i64;
  this->MonoChains.Size = 0i64;
  this->MonoChains.Pages = 0i64;
  this->MonoChainsSorted.Size = 0i64;
  this->MonoChainsSorted.Array = 0i64;
  this->Scanbeams.MaxPages = 0i64;
  this->Scanbeams.NumPages = 0i64;
  this->Scanbeams.Size = 0i64;
  this->Scanbeams.Pages = 0i64;
  this->ActiveChains.MaxPages = 0i64;
  this->ActiveChains.NumPages = 0i64;
  this->ActiveChains.Size = 0i64;
  this->ActiveChains.Pages = 0i64;
  this->InteriorChains.MaxPages = 0i64;
  this->InteriorChains.NumPages = 0i64;
  this->InteriorChains.Size = 0i64;
  this->InteriorChains.Pages = 0i64;
  this->ValidChains.MaxPages = 0i64;
  this->ValidChains.NumPages = 0i64;
  this->ValidChains.Size = 0i64;
  this->ValidChains.Pages = 0i64;
  this->InteriorOrder.MaxPages = 0i64;
  this->InteriorOrder.NumPages = 0i64;
  this->InteriorOrder.Size = 0i64;
  this->InteriorOrder.Pages = 0i64;
  this->Intersections.MaxPages = 0i64;
  this->Intersections.NumPages = 0i64;
  this->Intersections.Size = 0i64;
  this->Intersections.Pages = 0i64;
  this->StyleCounts.Size = 0i64;
  this->StyleCounts.Array = 0i64;
  this->ChainsBelow.MaxPages = 0i64;
  this->ChainsBelow.NumPages = 0i64;
  this->ChainsBelow.Size = 0i64;
  this->ChainsBelow.Pages = 0i64;
  this->ChainsAbove.MaxPages = 0i64;
  this->ChainsAbove.NumPages = 0i64;
  this->ChainsAbove.Size = 0i64;
  this->ChainsAbove.Pages = 0i64;
  this->BaseLines.MaxPages = 0i64;
  this->BaseLines.NumPages = 0i64;
  this->BaseLines.Size = 0i64;
  this->BaseLines.Pages = 0i64;
  this->PendingEnds.MaxPages = 0i64;
  this->PendingEnds.NumPages = 0i64;
  this->PendingEnds.Size = 0i64;
  this->PendingEnds.Pages = 0i64;
  this->Monotones.MaxPages = 0i64;
  this->Monotones.NumPages = 0i64;
  this->Monotones.Size = 0i64;
  this->Monotones.Pages = 0i64;
  this->MonoVertices.MaxPages = 0i64;
  this->MonoVertices.NumPages = 0i64;
  this->MonoVertices.Size = 0i64;
  this->MonoVertices.Pages = 0i64;
  this->MeshVertices.MaxPages = 0i64;
  this->MeshVertices.NumPages = 0i64;
  this->MeshVertices.Size = 0i64;
  this->MeshVertices.Pages = 0i64;
  this->StyleMatrix.Size = 0i64;
  this->StyleMatrix.Array = 0i64;
  this->Meshes.MaxPages = 0i64;
  this->Meshes.NumPages = 0i64;
  this->Meshes.Size = 0i64;
  this->Meshes.Pages = 0i64;
  this->MeshTriangles.Arrays = 0i64;
  this->MeshTriangles.MaxArrays = 0i64;
  this->MeshTriangles.NumArrays = 0i64;
  this->LeftChain.MaxPages = 0i64;
  this->LeftChain.NumPages = 0i64;
  this->LeftChain.Size = 0i64;
  this->LeftChain.Pages = 0i64;
  this->RightChain.MaxPages = 0i64;
  this->RightChain.NumPages = 0i64;
  this->RightChain.Size = 0i64;
  this->RightChain.Pages = 0i64;
  this->TmpEdgeFan.MaxPages = 0i64;
  this->TmpEdgeFan.NumPages = 0i64;
  this->TmpEdgeFan.Size = 0i64;
  this->TmpEdgeFan.Pages = 0i64;
  this->EdgeFans.Size = 0i64;
  this->EdgeFans.Array = 0i64;
  this->StartFan.MaxPages = 0i64;
  this->StartFan.NumPages = 0i64;
  this->StartFan.Size = 0i64;
  this->StartFan.Pages = 0i64;
  this->EndFan.MaxPages = 0i64;
  this->EndFan.NumPages = 0i64;
  this->EndFan.Size = 0i64;
  this->EndFan.Pages = 0i64;
  this->OuterEdges.MaxPages = 0i64;
  this->OuterEdges.NumPages = 0i64;
  this->OuterEdges.Size = 0i64;
  this->OuterEdges.Pages = 0i64;
  this->StrokerEdges.MaxPages = 0i64;
  this->StrokerEdges.NumPages = 0i64;
  this->StrokerEdges.Size = 0i64;
  this->StrokerEdges.Pages = 0i64;
  this->MonoStack.MaxPages = 0i64;
  this->MonoStack.NumPages = 0i64;
  this->MonoStack.Size = 0i64;
  this->MonoStack.Pages = 0i64;
  this->InnerQuads.MaxPages = 0i64;
  this->InnerQuads.NumPages = 0i64;
  this->InnerQuads.Size = 0i64;
  this->InnerQuads.Pages = 0i64;
  this->StarVertices.MaxPages = 0i64;
  this->StarVertices.NumPages = 0i64;
  this->StarVertices.Size = 0i64;
  this->StarVertices.Pages = 0i64;
  Scaleform::Render::LinearHeap::ClearAndRelease(this->pHeap1);
  Scaleform::Render::LinearHeap::ClearAndRelease(this->pHeap2);
}

void __fastcall Scaleform::Render::Tessellator::ClosePath(Scaleform::Render::Tessellator *this)
{
  unsigned int LastVertex; // er8
  Scaleform::Render::Tessellator::SrcVertexType **Pages; // r10
  Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::SrcVertexType,4,16> *p_SrcVertices; // rbx
  __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  Scaleform::Render::Tessellator::SrcVertexType *v6; // rbp

  LastVertex = this->LastVertex;
  if ( this->SrcVertices.Size > LastVertex + 2 )
  {
    Pages = this->SrcVertices.Pages;
    p_SrcVertices = &this->SrcVertices;
    if ( Pages[(unsigned __int64)LastVertex >> 4][LastVertex & 0xF].x != Pages[(this->SrcVertices.Size - 1) >> 4][(LODWORD(this->SrcVertices.Size) - 1) & 0xF].x
      || Pages[(unsigned __int64)LastVertex >> 4][LastVertex & 0xF].y != this->SrcVertices.Pages[(this->SrcVertices.Size
                                                                                                - 1) >> 4][(LODWORD(this->SrcVertices.Size) - 1) & 0xF].y )
    {
      v4 = LastVertex & 0xF;
      v5 = this->SrcVertices.Size >> 4;
      v6 = Pages[(unsigned __int64)LastVertex >> 4];
      if ( v5 >= this->SrcVertices.NumPages )
        Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16>::allocPage(
          (Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16> *)&this->SrcVertices,
          this->SrcVertices.Size >> 4);
      p_SrcVertices->Pages[v5][p_SrcVertices->Size & 0xF] = v6[v4];
      ++p_SrcVertices->Size;
    }
  }
}

void __fastcall Scaleform::Render::Tessellator::FinalizePath(
        Scaleform::Render::Tessellator *this,
        unsigned int leftStyle,
        unsigned int rightStyle,
        bool leftComplex,
        bool rightComplex)
{
  unsigned int v6; // edi
  unsigned __int64 LastVertex; // rdx
  bool v9; // r14
  unsigned int v10; // eax
  unsigned int v11; // er11
  int v12; // er14
  int v13; // edi
  Scaleform::Render::Tessellator::SrcVertexType **Pages; // rsi
  float v15; // xmm5_4
  float v16; // xmm4_4
  float v17; // xmm15_4
  float v18; // xmm14_4
  float v19; // xmm12_4
  float v20; // xmm13_4
  float v21; // xmm10_4
  float v22; // xmm11_4
  float v23; // xmm9_4
  float v24; // xmm8_4
  float v25; // xmm3_4
  int v26; // eax
  float Epsilon; // xmm0_4
  unsigned __int64 v28; // r14
  __int64 v29; // rdx
  Scaleform::Render::Tessellator::PathType *v30; // rax
  Scaleform::Render::Tessellator::SrcVertexType v31; // [rsp+20h] [rbp-71h]
  Scaleform::Render::Tessellator::SrcVertexType v32; // [rsp+20h] [rbp-71h]
  Scaleform::Render::Tessellator::SrcVertexType v33; // [rsp+28h] [rbp-69h]
  Scaleform::Render::Tessellator::SrcVertexType v34; // [rsp+28h] [rbp-69h]
  Scaleform::Render::Tessellator::SrcVertexType v35; // [rsp+30h] [rbp-61h]
  __int128 v36; // [rsp+38h] [rbp-59h]
  Scaleform::Render::Tessellator::SrcVertexType v37; // [rsp+F0h] [rbp+5Fh]
  Scaleform::Render::Tessellator::SrcVertexType v38; // [rsp+F0h] [rbp+5Fh]

  v6 = rightStyle;
  LastVertex = this->LastVertex;
  if ( this->SrcVertices.Size < (unsigned int)(LastVertex + 2) || leftStyle == rightStyle )
  {
    if ( LastVertex < this->SrcVertices.Size )
      this->SrcVertices.Size = LastVertex;
  }
  else
  {
    if ( this->StrokerMode )
    {
      if ( (leftStyle == 0) == (rightStyle == 0) )
      {
        if ( LastVertex < this->SrcVertices.Size )
          this->SrcVertices.Size = LastVertex;
        return;
      }
      v9 = 0;
      leftComplex = 0;
      v10 = 1;
      v6 = 1;
      if ( !leftStyle )
        v10 = 0;
      leftStyle = v10;
      if ( !rightStyle )
        v6 = 0;
    }
    else
    {
      v9 = rightComplex;
    }
    Scaleform::Render::Tessellator::addStyle(this, leftStyle, leftComplex);
    Scaleform::Render::Tessellator::addStyle(this, v6, v9);
    v11 = this->LastVertex;
    v12 = LODWORD(this->SrcVertices.Size) - 1;
    HIDWORD(v36) = v6;
    v13 = 0;
    LODWORD(v36) = v11;
    *(_QWORD *)((char *)&v36 + 4) = __PAIR64__(leftStyle, v12);
    if ( !this->Paths.Size )
    {
      Pages = this->SrcVertices.Pages;
      if ( Pages[(unsigned __int64)v11 >> 4][v11 & 0xF].x == Pages[(this->SrcVertices.Size - 1) >> 4][(LODWORD(this->SrcVertices.Size) - 1) & 0xF].x
        && Pages[(unsigned __int64)v11 >> 4][v11 & 0xF].y == Pages[(this->SrcVertices.Size - 1) >> 4][(LODWORD(this->SrcVertices.Size) - 1) & 0xF].y )
      {
        if ( v11 + 3 == v12 )
        {
          v33 = Pages[(unsigned __int64)v11 >> 4][v11 & 0xF];
          v37 = Pages[(unsigned __int64)(v11 + 1) >> 4][((_BYTE)v11 + 1) & 0xF];
          v31 = Pages[(unsigned __int64)(v11 + 2) >> 4][((_BYTE)v11 + 2) & 0xF];
          v15 = (float)((float)(v37.y - v33.y) * (float)(v31.x - v37.x))
              - (float)((float)(v37.x - v33.x) * (float)(v31.y - v37.y));
          v16 = (float)(fmaxf(
                          COERCE_FLOAT(COERCE_UNSIGNED_INT(v31.x - v37.x) & _xmm),
                          COERCE_FLOAT(COERCE_UNSIGNED_INT(v31.y - v37.y) & _xmm))
                      * fmaxf(
                          COERCE_FLOAT(COERCE_UNSIGNED_INT(v37.x - v33.x) & _xmm),
                          COERCE_FLOAT(COERCE_UNSIGNED_INT(v37.y - v33.y) & _xmm)))
              * 0.001;
          if ( COERCE_FLOAT(LODWORD(v16) ^ _xmm) <= v15 )
          {
            if ( v15 > v16 )
              v13 = 1;
          }
          else
          {
            v13 = 1;
          }
        }
        else if ( v11 + 4 == v12 )
        {
          v38 = Pages[(unsigned __int64)v11 >> 4][v11 & 0xF];
          v34 = Pages[(unsigned __int64)(v11 + 1) >> 4][((_BYTE)v11 + 1) & 0xF];
          v32 = Pages[(unsigned __int64)(v11 + 2) >> 4][((_BYTE)v11 + 2) & 0xF];
          v35 = Pages[(unsigned __int64)(v11 + 3) >> 4][((_BYTE)v11 + 3) & 0xF];
          v17 = (float)((float)(v34.y - v38.y) * (float)(v32.x - v34.x))
              - (float)((float)(v32.y - v34.y) * (float)(v34.x - v38.x));
          v18 = (float)((float)(v35.x - v32.x) * (float)(v32.y - v34.y))
              - (float)((float)(v35.y - v32.y) * (float)(v32.x - v34.x));
          v19 = (float)((float)(v38.y - v35.y) * (float)(v34.x - v38.x))
              - (float)((float)(v38.x - v35.x) * (float)(v34.y - v38.y));
          v20 = (float)((float)(v38.x - v35.x) * (float)(v35.y - v32.y))
              - (float)((float)(v38.y - v35.y) * (float)(v35.x - v32.x));
          v21 = fmaxf(
                  COERCE_FLOAT(COERCE_UNSIGNED_INT(v34.x - v38.x) & _xmm),
                  COERCE_FLOAT(COERCE_UNSIGNED_INT(v34.y - v38.y) & _xmm));
          v22 = fmaxf(
                  COERCE_FLOAT(COERCE_UNSIGNED_INT(v32.x - v34.x) & _xmm),
                  COERCE_FLOAT(COERCE_UNSIGNED_INT(v32.y - v34.y) & _xmm));
          v23 = fmaxf(
                  COERCE_FLOAT(COERCE_UNSIGNED_INT(v35.x - v32.x) & _xmm),
                  COERCE_FLOAT(COERCE_UNSIGNED_INT(v35.y - v32.y) & _xmm));
          v24 = fmaxf(
                  COERCE_FLOAT(COERCE_UNSIGNED_INT(v35.x - v38.x) & _xmm),
                  COERCE_FLOAT(COERCE_UNSIGNED_INT(v35.y - v38.y) & _xmm));
          v25 = (float)(v22 * v21) * 0.001;
          if ( COERCE_FLOAT(LODWORD(v25) ^ _xmm) <= v17 || (float)((float)(v23 * v22) * -0.001) <= v18 )
          {
            if ( v17 > v25 && v18 > (float)((float)(v23 * v22) * 0.001) && v20 > (float)((float)(v24 * v23) * 0.001) )
            {
              v26 = 0;
              if ( v19 > (float)((float)(v24 * v21) * 0.001) )
                v26 = 2;
              v13 = v26;
            }
          }
          else if ( (float)((float)(v24 * v23) * -0.001) > v20 && (float)((float)(v24 * v21) * -0.001) > v19 )
          {
            v13 = 2;
          }
          Epsilon = this->Epsilon;
          if ( Epsilon > v21 || Epsilon > v22 || Epsilon > v23 || Epsilon > v24 )
            v13 = 0;
        }
      }
    }
    v28 = this->Paths.Size >> 4;
    if ( v28 >= this->Paths.NumPages )
      Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::PathType,4,4>::allocPage(
        &this->Paths,
        this->Paths.Size >> 4);
    v29 = this->Paths.Size & 0xF;
    v30 = this->Paths.Pages[v28];
    *(_OWORD *)&v30[v29].start = v36;
    v30[v29].pathShape = v13;
    ++this->Paths.Size;
    this->LastVertex = this->SrcVertices.Size;
  }
}

float __fastcall Scaleform::Render::Tessellator::GetLastX(Scaleform::Render::Tessellator *this)
{
  return this->SrcVertices.Pages[(this->SrcVertices.Size - 1) >> 4][(LODWORD(this->SrcVertices.Size) - 1) & 0xF].x;
}

float __fastcall Scaleform::Render::Tessellator::GetLastY(Scaleform::Render::Tessellator *this)
{
  return this->SrcVertices.Pages[(this->SrcVertices.Size - 1) >> 4][(LODWORD(this->SrcVertices.Size) - 1) & 0xF].y;
}

void __fastcall Scaleform::Render::Tessellator::GetMesh(
        Scaleform::Render::Tessellator *this,
        unsigned int meshIdx,
        Scaleform::Render::TessMesh *mesh)
{
  *mesh = this->Meshes.Pages[(unsigned __int64)meshIdx >> 4][meshIdx & 0xF];
  mesh->StartVertex = 0;
}

__int64 __fastcall Scaleform::Render::Tessellator::GetMeshCount(Scaleform::Render::Tessellator *this)
{
  return LODWORD(this->Meshes.Size);
}

__int64 __fastcall Scaleform::Render::Tessellator::GetMeshTriangleCount(
        Scaleform::Render::Tessellator *this,
        unsigned int meshIdx)
{
  return LODWORD(this->MeshTriangles.Arrays[meshIdx].Size);
}

__int64 __fastcall Scaleform::Render::Tessellator::GetMeshVertexCount(
        Scaleform::Render::Tessellator *this,
        unsigned int meshIdx)
{
  return this->Meshes.Pages[(unsigned __int64)meshIdx >> 4][meshIdx & 0xF].VertexCount;
}

void __fastcall Scaleform::Render::Tessellator::GetTrianglesI16(
        Scaleform::Render::Tessellator *this,
        unsigned int meshIdx,
        unsigned __int16 *idx,
        unsigned int start,
        unsigned int num)
{
  unsigned int i; // ebx
  unsigned int v7; // eax
  Scaleform::Render::Tessellator::TriangleType *v8; // r9

  for ( i = 0; i < num; *(idx - 1) = this->MeshVertices.Pages[(unsigned __int64)v8->d.t.v3 >> 4][v8->d.t.v3 & 0xF].Idx )
  {
    v7 = i + start;
    ++i;
    idx += 3;
    v8 = &this->MeshTriangles.Arrays[meshIdx].Pages[(unsigned __int64)v7 >> 4][v7 & 0xF];
    *(idx - 3) = this->MeshVertices.Pages[(unsigned __int64)v8->d.t.v1 >> 4][v8->d.t.v1 & 0xF].Idx;
    *(idx - 2) = this->MeshVertices.Pages[(unsigned __int64)v8->d.t.v2 >> 4][v8->d.t.v2 & 0xF].Idx;
  }
}

__int64 __fastcall Scaleform::Render::Tessellator::GetVertexCount(Scaleform::Render::Tessellator *this)
{
  return LODWORD(this->MeshVertices.Size);
}

__int64 __fastcall Scaleform::Render::Tessellator::GetVertices(
        Scaleform::Render::Tessellator *this,
        Scaleform::Render::TessMesh *mesh,
        Scaleform::Render::TessVertex *vertices,
        unsigned int num)
{
  __int64 v4; // r11
  unsigned __int64 StartVertex; // rax
  Scaleform::Render::TessVertex **Pages; // rdi
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rax
  Scaleform::Render::TessVertex *v12; // r8

  v4 = 0i64;
  if ( !num )
    return 0i64;
  do
  {
    StartVertex = mesh->StartVertex;
    if ( StartVertex >= this->MeshVertices.Size )
      break;
    Pages = this->MeshVertices.Pages;
    if ( Pages[(unsigned __int64)(unsigned int)StartVertex >> 4][StartVertex & 0xF].Mesh == mesh->MeshIdx )
    {
      v9 = v4;
      v10 = (unsigned __int64)(unsigned int)StartVertex >> 4;
      v11 = StartVertex & 0xF;
      v4 = (unsigned int)(v4 + 1);
      v12 = Pages[v10];
      *(_OWORD *)&vertices[v9].x = *(_OWORD *)&v12[v11].x;
      *(_DWORD *)&vertices[v9].Flags = *(_DWORD *)&v12[v11].Flags;
    }
    ++mesh->StartVertex;
  }
  while ( (unsigned int)v4 < num );
  return (unsigned int)v4;
}

float __fastcall Scaleform::Render::Math2D::LinePointDistance(float x1, float y1, float x2, float y2, float x, float y)
{
  float v7; // xmm7_4
  float v9; // xmm6_4
  float v10; // xmm2_4

  v7 = y2 - y1;
  v9 = x2 - x1;
  v10 = sqrtf((float)(v7 * v7) + (float)(v9 * v9));
  if ( v10 == 0.0 )
    return sqrtf((float)((float)(y - y1) * (float)(y - y1)) + (float)((float)(x - x1) * (float)(x - x1)));
  else
    return (float)((float)((float)(x - x2) * v7) - (float)((float)(y - y2) * v9)) / v10;
}

void __fastcall Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::PushBack(
        Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16> *this,
        unsigned __int64 i,
        const Scaleform::Render::Tessellator::TriangleType *val)
{
  unsigned __int64 v3; // rsi
  Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::ArrayType *v5; // rdi
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx
  Scaleform::Render::Tessellator::TriangleType *v9; // rax

  v3 = i;
  v5 = &this->Arrays[i];
  v7 = v5->Size >> 4;
  if ( v7 >= v5->NumPages )
    Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::allocPage(
      this,
      &this->Arrays[i],
      v5->Size >> 4);
  v8 = v5->Size & 0xF;
  v9 = v5->Pages[v7];
  *(_OWORD *)&v9[v8].d.m.v1 = *(_OWORD *)&val->d.m.v1;
  v9[v8].d.m.v3 = val->d.m.v3;
  ++this->Arrays[v3].Size;
}

void __fastcall Scaleform::Render::ArrayUnsafe<int>::Resize(
        Scaleform::Render::ArrayUnsafe<int> *this,
        unsigned __int64 size)
{
  size_t v4; // rbx
  void *v5; // rbp
  int *Array; // rdx
  unsigned __int64 v7; // r8

  if ( size <= this->Size )
  {
    this->Size = size;
  }
  else
  {
    v4 = 4 * size;
    v5 = Scaleform::Render::LinearHeap::Alloc(this->pHeap, 4 * size);
    memset(v5, 0, v4);
    Array = this->Array;
    if ( Array )
    {
      v7 = this->Size;
      if ( v7 )
        memmove(v5, Array, 4 * v7);
    }
    this->Array = (int *)v5;
    this->Size = size;
  }
}

void __fastcall Scaleform::Render::Tessellator::SetEdgeAAWidth(Scaleform::Render::Tessellator *this, float w)
{
  this->EdgeAAWidth = w;
  this->EdgeAAFlag = w > 0.0;
}

void __fastcall Scaleform::Render::Tessellator::SetFillRule(
        Scaleform::Render::Tessellator *this,
        Scaleform::Render::Tessellator::FillRuleType f)
{
  if ( f == 2 )
  {
    this->FillRule = FillNonZero;
    this->StrokerMode = 1;
  }
  else
  {
    this->FillRule = f;
    this->StrokerMode = 0;
  }
}

void __fastcall Scaleform::Render::Tessellator::SetToleranceParam(
        Scaleform::Render::Tessellator *this,
        const Scaleform::Render::ToleranceParams *param)
{
  float Epsilon; // xmm1_4

  Epsilon = param->Epsilon;
  this->Epsilon = param->Epsilon;
  this->HasEpsilon = Epsilon > 0.0;
  this->IntersectionEpsilon = param->IntersectionEpsilon;
}

char __fastcall Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::Split(
        Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16> *this,
        unsigned __int64 i,
        unsigned __int64 at)
{
  unsigned __int64 v3; // r14
  Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::ArrayType *v4; // rax
  unsigned __int64 Size; // r13
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  Scaleform::Render::Tessellator::TriangleType **v12; // rsi
  unsigned __int64 v13; // rcx

  v3 = i;
  v4 = &this->Arrays[i];
  Size = v4->Size;
  if ( at >= v4->Size )
    return 0;
  v8 = at >> 4;
  v9 = at & 0xFFFFFFFFFFFFFFF0ui64;
  v10 = v4->MaxPages - (at >> 4);
  v11 = v4->NumPages - (at >> 4);
  v12 = &v4->Pages[at >> 4];
  Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::AddArray(this);
  this->Arrays[v3].NumPages = v8;
  this->Arrays[v3].MaxPages = v8;
  this->Arrays[v3].Size = v9;
  v13 = this->NumArrays - 1;
  this->Arrays[v13].NumPages = v11;
  this->Arrays[v13].MaxPages = v10;
  this->Arrays[v13].Size = Size - v9;
  this->Arrays[v13].Pages = v12;
  return 1;
}

void __fastcall Scaleform::Render::Tessellator::SplitMeshes(Scaleform::Render::Tessellator *this)
{
  unsigned __int64 Size; // rsi
  char v3; // r9
  unsigned __int64 v4; // rdi
  Scaleform::Render::TessMesh *v5; // rdx
  unsigned __int64 i; // r9
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r8
  unsigned __int64 j; // r9
  Scaleform::Render::TessVertex *v10; // r8
  unsigned __int16 Mesh; // ax
  __int64 v12; // rcx
  Scaleform::Render::TessMesh *v13; // rdx

  while ( 1 )
  {
    Size = this->Meshes.Size;
    v3 = 1;
    v4 = 0i64;
    if ( !Size )
      break;
    do
    {
      v5 = &this->Meshes.Pages[v4 >> 4][v4 & 0xF];
      if ( v5->VertexCount > this->VertexLimit )
      {
        Scaleform::Render::Tessellator::splitMesh(this, v5);
        v3 = 0;
      }
      ++v4;
    }
    while ( v4 < Size );
    if ( v3 )
      break;
    for ( i = 0i64; i < this->Meshes.Size; this->Meshes.Pages[v8][v7].VertexCount = 0 )
    {
      v7 = i & 0xF;
      v8 = i++ >> 4;
    }
    for ( j = 0i64; j < this->MeshVertices.Size; ++j )
    {
      v10 = &this->MeshVertices.Pages[j >> 4][j & 0xF];
      Mesh = v10->Mesh;
      if ( Mesh != 0xFFFF )
      {
        v12 = Mesh & 0xF;
        v13 = this->Meshes.Pages[(unsigned __int64)Mesh >> 4];
        v10->Idx = v13[v12].VertexCount++;
      }
    }
  }
}

Scaleform::Render::Matrix2x4<float> *__fastcall Scaleform::Render::Tessellator::StretchTo(
        Scaleform::Render::Tessellator *this,
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
  Scaleform::Render::TessVertex **Pages; // r10
  float v17; // xmm3_4
  Scaleform::Render::TessVertex *v18; // rax
  __int128 v19; // xmm1
  float v20; // xmm0_4
  float MinX; // xmm3_4
  float MaxX; // xmm1_4
  float MinY; // xmm0_4
  float MaxY; // xmm2_4
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // r8
  Scaleform::Render::TessVertex *v28; // rax
  float x; // xmm3_4
  float y; // xmm2_4
  float dst[4]; // [rsp+20h] [rbp-60h] BYREF
  float v33; // [rsp+30h] [rbp-50h]
  float v34; // [rsp+34h] [rbp-4Ch]
  Scaleform::Render::Matrix2x4<float> src; // [rsp+40h] [rbp-40h] BYREF

  v6 = 0i64;
  *(_OWORD *)&result->M[0][0] = 0x3F800000ui64;
  result->M[1][0] = 0.0;
  result->M[1][3] = 0.0;
  *(_QWORD *)&result->M[1][1] = 1065353216i64;
  if ( this->MinX >= this->MaxX || this->MinY >= this->MaxY )
  {
    Size = this->MeshVertices.Size;
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
      Pages = this->MeshVertices.Pages;
      v17 = FLOAT_N1_0e30;
      do
      {
        v18 = Pages[v12 >> 4];
        v19 = *(_OWORD *)&v18[v12 & 0xF].x;
        v33 = *(float *)&v18[v12 & 0xF].Flags;
        *(_OWORD *)dst = v19;
        if ( v13 > *(float *)&v19 )
        {
          LODWORD(this->MinX) = v19;
          v13 = *(float *)&v19;
        }
        v20 = dst[1];
        if ( v15 > dst[1] )
        {
          this->MinY = dst[1];
          v15 = v20;
        }
        if ( *(float *)&v19 > v14 )
        {
          LODWORD(this->MaxX) = v19;
          v14 = *(float *)&v19;
        }
        if ( v20 > v17 )
        {
          this->MaxY = v20;
          v17 = v20;
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
      dst[2] = x2;
      v33 = x2;
      v34 = y2;
      src.M[0][0] = MinX;
      *(_QWORD *)&src.M[0][2] = __PAIR64__(LODWORD(MinY), LODWORD(MaxX));
      *(_QWORD *)&src.M[1][0] = __PAIR64__(LODWORD(MaxY), LODWORD(MaxX));
      dst[0] = x1;
      dst[1] = y1;
      dst[3] = y1;
      Scaleform::Render::Matrix2x4<float>::SetParlToParl(result, (const float *)&src, dst);
      if ( this->MeshVertices.Size )
      {
        do
        {
          v25 = v6 & 0xF;
          v26 = v6++ >> 4;
          v27 = v25;
          v28 = this->MeshVertices.Pages[v26];
          x = v28[v27].x;
          y = v28[v27].y;
          v28[v27].x = (float)((float)(x * result->M[0][0]) + (float)(y * result->M[0][1])) + result->M[0][3];
          v28[v27].y = (float)((float)(x * result->M[1][0]) + (float)(y * result->M[1][1])) + result->M[1][3];
        }
        while ( v6 < this->MeshVertices.Size );
      }
      src = *result;
      Scaleform::Render::Matrix2x4<float>::SetInverse(result, &src);
    }
  }
  return result;
}

void __fastcall Scaleform::Render::Tessellator::Tessellate(Scaleform::Render::Tessellator *this, bool autoSplitMeshes)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 Size; // rax
  Scaleform::Render::Tessellator::PathType **Pages; // rax
  const Scaleform::Render::Tessellator::PathType *v7; // rdx
  unsigned int start; // ecx
  unsigned int end; // er8
  bool MeshForTriangle; // al
  unsigned __int64 v11; // rbp
  __int64 v12; // rdx
  Scaleform::Render::TessMesh *v13; // rax
  Scaleform::Render::LinearHeap *pHeap; // rcx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  unsigned __int16 *v17; // rax
  unsigned __int64 i; // rbx
  Scaleform::Render::Tessellator::PathType *v19; // rax
  unsigned int leftStyle; // edx
  unsigned int rightStyle; // er8
  unsigned __int64 j; // rbx
  __int64 v23; // rax
  __int64 v24; // rbp
  Scaleform::Render::Tessellator::PathType *v25; // r14
  unsigned int v26; // edx
  unsigned int v27; // edx
  unsigned __int64 k; // rbx
  unsigned __int64 v29; // rbx
  unsigned __int64 m; // rbx
  Scaleform::Render::TessVertex *v31; // r10
  unsigned __int16 Mesh; // ax
  __int64 v33; // r8
  Scaleform::Render::TessMesh *v34; // rcx
  unsigned __int64 VertexLimit; // rax

  v2 = 0i64;
  this->MinX = 1.0e30;
  this->MinY = 1.0e30;
  this->MaxX = -1.0e30;
  this->MaxY = -1.0e30;
  if ( !this->EdgeAAFlag )
  {
    Size = this->Paths.Size;
    if ( Size <= 1 && !this->StrokerMode )
    {
      if ( Size )
      {
        Pages = this->Paths.Pages;
        v7 = *Pages;
        if ( (*Pages)->pathShape )
        {
          if ( (v7->leftStyle == 0) != (v7->rightStyle == 0) )
          {
            start = v7->start;
            end = v7->end;
            if ( end >= v7->start + 3 && start + 4 >= end )
            {
              if ( end == start + 3 )
              {
                MeshForTriangle = Scaleform::Render::Tessellator::createMeshForTriangle(this, v7);
                goto LABEL_13;
              }
              if ( end == start + 4 )
              {
                MeshForTriangle = Scaleform::Render::Tessellator::createMeshForQuad(this, v7);
LABEL_13:
                if ( MeshForTriangle )
                  return;
              }
            }
          }
        }
      }
    }
  }
  Scaleform::Render::Tessellator::monotonize(this);
  v11 = this->Meshes.Size >> 4;
  if ( v11 >= this->Meshes.NumPages )
    Scaleform::Render::ArrayPaged<Scaleform::Render::TessMesh,4,4>::allocPage(&this->Meshes, v11);
  v12 = this->Meshes.Size & 0xF;
  v13 = this->Meshes.Pages[v11];
  *(_OWORD *)&v13[v12].MeshIdx = 0ui64;
  *(_QWORD *)&v13[v12].Flags2 = 0i64;
  v13[v12].VertexCount = 0;
  ++this->Meshes.Size;
  if ( this->HasComplexFill )
  {
    pHeap = this->StyleMatrix.pHeap;
    v15 = this->MaxStyle + 1;
    this->StyleMatrix.Size = v15;
    v16 = 2 * v15 * v15;
    v17 = (unsigned __int16 *)Scaleform::Render::LinearHeap::Alloc(pHeap, v16);
    this->StyleMatrix.Array = v17;
    memset(v17, 255, v16);
    for ( i = 0i64; i < this->Paths.Size; ++i )
    {
      v19 = this->Paths.Pages[i >> 4];
      leftStyle = v19[i & 0xF].leftStyle;
      if ( leftStyle )
      {
        rightStyle = v19[i & 0xF].rightStyle;
        if ( rightStyle )
          Scaleform::Render::Tessellator::setMesh(this, leftStyle, rightStyle);
      }
    }
    for ( j = 0i64; j < this->Paths.Size; ++j )
    {
      v23 = j & 0xF;
      v24 = v23;
      v25 = this->Paths.Pages[j >> 4];
      v26 = v25[v23].leftStyle;
      if ( v26 )
        Scaleform::Render::Tessellator::setMesh(this, v26);
      v27 = v25[v24].rightStyle;
      if ( v27 )
        Scaleform::Render::Tessellator::setMesh(this, v27);
    }
  }
  Scaleform::Render::Tessellator::clearHeap1(this);
  for ( k = 0i64; k < this->Meshes.Size; ++k )
    Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::AddArray(&this->MeshTriangles);
  if ( this->EdgeAAFlag )
  {
    if ( this->StrokerMode )
    {
      Scaleform::Render::Tessellator::setMesh(this, 1u);
      v29 = 0i64;
      for ( this->EdgeAAFlag = 0; v29 < this->Monotones.Size; ++v29 )
        Scaleform::Render::Tessellator::triangulateMonotoneAA(this, &this->Monotones.Pages[v29 >> 4][v29 & 0xF]);
      this->EdgeAAFlag = 1;
      Scaleform::Render::Tessellator::processStrokerEdges(this);
    }
    else
    {
      Scaleform::Render::Tessellator::processEdgeAA(this);
    }
  }
  else
  {
    for ( m = 0i64; m < this->Monotones.Size; ++m )
      Scaleform::Render::Tessellator::triangulateMonotoneAA(this, &this->Monotones.Pages[m >> 4][m & 0xF]);
  }
  if ( this->MeshVertices.Size )
  {
    do
    {
      v31 = this->MeshVertices.Pages[v2 >> 4];
      Mesh = v31[v2 & 0xF].Mesh;
      if ( Mesh != 0xFFFF )
      {
        v33 = Mesh & 0xF;
        v34 = this->Meshes.Pages[(unsigned __int64)Mesh >> 4];
        v31[v2 & 0xF].Idx = v34[v33].VertexCount++;
      }
      ++v2;
    }
    while ( v2 < this->MeshVertices.Size );
  }
  if ( autoSplitMeshes )
  {
    VertexLimit = this->VertexLimit;
    if ( (_DWORD)VertexLimit )
    {
      if ( this->MeshVertices.Size > VertexLimit )
        Scaleform::Render::Tessellator::SplitMeshes(this);
    }
  }
}

void __fastcall Scaleform::Render::Tessellator::Transform(
        Scaleform::Render::Tessellator *this,
        const Scaleform::Render::Matrix2x4<float> *m)
{
  unsigned __int64 v2; // r10
  __int64 v3; // r9
  Scaleform::Render::TessVertex *v4; // rax
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
  for ( this->MaxY = -1.0e30; v2 < this->MeshVertices.Size; ++v2 )
  {
    v3 = v2 & 0xF;
    v4 = this->MeshVertices.Pages[v2 >> 4];
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

__int64 __fastcall Scaleform::Render::Tessellator::addEventVertex(
        Scaleform::Render::Tessellator *this,
        const Scaleform::Render::Tessellator::MonoChainType *mc,
        float yb,
        bool enforceFlag)
{
  __int64 v4; // r10
  Scaleform::Render::Tessellator::EdgeType *v6; // r11
  unsigned __int16 flags; // cx
  unsigned int lower; // edx
  Scaleform::Render::Tessellator::SrcVertexType **Pages; // r8
  Scaleform::Render::Tessellator::SrcVertexType *v10; // rcx
  __int64 v11; // rdx
  float x; // xmm0_4
  unsigned int v14; // er8
  Scaleform::Render::Tessellator::SrcVertexType **v15; // r9
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  Scaleform::Render::Tessellator::SrcVertexType *v18; // rcx
  float v19; // xmm0_4
  Scaleform::Render::Tessellator::SrcVertexType *v20; // rcx
  float v21; // xmm4_4
  unsigned __int64 v22; // rsi
  Scaleform::Render::TessVertex *v23; // rdx
  __int64 v24; // r8
  __int128 v25; // [rsp+20h] [rbp-20h]

  v4 = mc->edge & 0xF;
  v6 = this->Edges.Pages[(unsigned __int64)mc->edge >> 4];
  if ( !enforceFlag )
  {
    flags = mc->flags;
    if ( (flags & 0x10) == 0 && mc->leftBelow == mc->leftAbove && mc->rightBelow == mc->rightAbove )
    {
      if ( (flags & 8) == 0 )
        return 0xFFFFFFFFi64;
      lower = v6[v4].lower;
      Pages = this->SrcVertices.Pages;
      if ( Pages[(unsigned __int64)lower >> 4][lower & 0xF].y != yb )
        return 0xFFFFFFFFi64;
      v10 = Pages[(unsigned __int64)lower >> 4];
LABEL_8:
      v11 = lower & 0xF;
      x = v10[v11].x;
      if ( x > this->LastX )
      {
        this->LastX = x;
        *(float *)&v25 = x;
        DWORD1(v25) = LODWORD(v10[v11].y);
LABEL_19:
        v22 = this->MeshVertices.Size >> 4;
        *((_QWORD *)&v25 + 1) = -1i64;
        if ( v22 >= this->MeshVertices.NumPages )
          Scaleform::Render::ArrayPaged<Scaleform::Render::TessVertex,4,16>::allocPage(&this->MeshVertices, v22);
        v23 = this->MeshVertices.Pages[v22];
        v24 = this->MeshVertices.Size & 0xF;
        *(_OWORD *)&v23[v24].x = v25;
        *(_DWORD *)&v23[v24].Flags = 2;
        ++this->MeshVertices.Size;
        return (unsigned int)(LODWORD(this->MeshVertices.Size) - 1);
      }
      return (unsigned int)(LODWORD(this->MeshVertices.Size) - 1);
    }
  }
  v14 = v6[v4].lower;
  v15 = this->SrcVertices.Pages;
  if ( v15[(unsigned __int64)v14 >> 4][v14 & 0xF].y != yb )
  {
    if ( (mc->flags & 2) == 0 || (lower = v14 + mc->dir, v15[(unsigned __int64)lower >> 4][lower & 0xF].y != yb) )
    {
      v20 = v15[(unsigned __int64)v6[v4].lower >> 4];
      v21 = (float)((float)(yb - v20[v14 & 0xF].y) * v6[v4].slope) + v20[v14 & 0xF].x;
      if ( (float)(v21 - this->LastX) > (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(yb) & _xmm) * this->Epsilon) )
      {
        this->LastX = v21;
        *(_QWORD *)&v25 = __PAIR64__(LODWORD(yb), LODWORD(v21));
        goto LABEL_19;
      }
      return (unsigned int)(LODWORD(this->MeshVertices.Size) - 1);
    }
    v10 = v15[(unsigned __int64)lower >> 4];
    goto LABEL_8;
  }
  v16 = v14;
  v17 = v14 & 0xF;
  v18 = v15[v16 >> 4];
  v19 = v18[v17].x;
  if ( v19 > this->LastX )
  {
    this->LastX = v19;
    *(float *)&v25 = v19;
    DWORD1(v25) = LODWORD(v18[v17].y);
    goto LABEL_19;
  }
  return (unsigned int)(LODWORD(this->MeshVertices.Size) - 1);
}

void __fastcall Scaleform::Render::Tessellator::addPendingEnd(
        Scaleform::Render::Tessellator *this,
        Scaleform::Render::Tessellator::ScanChainType *dst,
        Scaleform::Render::Tessellator::ScanChainType *pending,
        float y)
{
  Scaleform::Render::Tessellator::MonotoneType *monotone; // rsi
  unsigned __int64 v7; // rdi
  __int64 v8; // rdx
  Scaleform::Render::Tessellator::BaseLineType *v9; // rax
  unsigned __int64 v10; // rdi
  Scaleform::Render::Tessellator::PendingEndType v11; // [rsp+20h] [rbp-28h]
  __int64 Size_low; // [rsp+30h] [rbp-18h]

  if ( dst )
  {
    monotone = dst->monotone;
    if ( monotone )
    {
      if ( monotone->style )
      {
        if ( !monotone->lowerBase )
        {
          v7 = this->BaseLines.Size >> 4;
          *(float *)&v11.vertex = y;
          LODWORD(v11.monotone) = dst->vertex;
          Size_low = LODWORD(this->PendingEnds.Size);
          *(&v11.vertex + 1) = pending->chain->leftBelow;
          HIDWORD(v11.monotone) = -1;
          if ( v7 >= this->BaseLines.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::TessMesh,4,4>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::TessMesh,4,4> *)&this->BaseLines,
              v7);
          v8 = this->BaseLines.Size & 0xF;
          v9 = this->BaseLines.Pages[v7];
          *(Scaleform::Render::Tessellator::PendingEndType *)&v9[v8].y = v11;
          *(_QWORD *)&v9[v8].firstChain = Size_low;
          v9[v8].leftAbove = -1;
          monotone->lowerBase = &this->BaseLines.Pages[this->BaseLines.Size++ >> 4][(LODWORD(this->BaseLines.Size) - 1) & 0xF];
        }
        v10 = this->PendingEnds.Size >> 4;
        v11.vertex = pending->vertex;
        v11.monotone = pending->monotone;
        if ( v10 >= this->PendingEnds.NumPages )
          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::PendingEndType,4,4>::allocPage(
            &this->PendingEnds,
            v10);
        this->PendingEnds.Pages[v10][this->PendingEnds.Size & 0xF] = v11;
        ++this->PendingEnds.Size;
        ++monotone->lowerBase->numChains;
      }
    }
  }
}

__int64 __fastcall Scaleform::Render::Tessellator::addStrokerJoin(
        Scaleform::Render::Tessellator *this,
        const Scaleform::Render::Tessellator::StrokerEdgeType *e1,
        const Scaleform::Render::Tessellator::StrokerEdgeType *e2)
{
  Scaleform::Render::TessVertex **Pages; // r10
  unsigned int v5; // er14
  float v6; // xmm10_4
  __int64 v7; // r9
  Scaleform::Render::TessVertex *v8; // rax
  float x; // xmm13_4
  const Scaleform::Render::TessVertex *v10; // rdi
  Scaleform::Render::TessVertex *v11; // rax
  float v12; // xmm9_4
  const Scaleform::Render::TessVertex *v13; // rbp
  float y; // xmm8_4
  const Scaleform::Render::TessVertex *v15; // rbx
  float v16; // xmm14_4
  float v17; // xmm11_4
  float v18; // xmm7_4
  float v19; // xmm12_4
  float v20; // xmm1_4
  float v21; // xmm15_4
  float v22; // xmm6_4
  float v23; // xmm7_4
  float v24; // xmm8_4
  float v25; // xmm9_4
  float v27; // xmm5_4
  float v28; // xmm13_4
  float v29; // xmm4_4
  float v30; // xmm10_4
  float v31; // xmm11_4
  float v32; // xmm2_4
  float v33; // xmm1_4
  float v34; // xmm11_4
  float v35; // xmm10_4
  float v36; // xmm0_4
  Scaleform::Render::Tessellator *v37; // rcx
  float v38; // xmm2_4
  int Size; // ecx
  float v40; // [rsp+3Ch] [rbp-ECh]
  float v41; // [rsp+40h] [rbp-E8h]
  Scaleform::Render::Tessellator::TriangleType val; // [rsp+48h] [rbp-E0h] BYREF
  float v43; // [rsp+138h] [rbp+10h]
  float len2; // [rsp+140h] [rbp+18h]
  float v45; // [rsp+148h] [rbp+20h]

  Pages = this->MeshVertices.Pages;
  v5 = e1->node2 & 0xFFFFFFF;
  v6 = this->EdgeAAWidth * -2.0;
  v7 = e1->node1 & 0xF;
  v8 = Pages[(unsigned __int64)(e1->node1 & 0xFFFFFFF) >> 4];
  x = v8[v7].x;
  v10 = &v8[v7];
  v41 = v6;
  v11 = Pages[(unsigned __int64)v5 >> 4];
  v12 = v11[e1->node2 & 0xF].x;
  v13 = &v11[e1->node2 & 0xF];
  y = v13->y;
  v15 = &Pages[(unsigned __int64)(e2->node2 & 0xFFFFFFF) >> 4][e2->node2 & 0xF];
  v16 = sqrtf((float)((float)(y - v10->y) * (float)(y - v10->y)) + (float)((float)(v12 - x) * (float)(v12 - x)));
  v17 = v15->y;
  v18 = v15->x - v12;
  len2 = sqrtf((float)((float)(v17 - y) * (float)(v17 - y)) + (float)(v18 * v18));
  v40 = Scaleform::Render::Math2D::TurnRatio<Scaleform::Render::Hairliner::OutVertexType,Scaleform::Render::Hairliner::OutVertexType,Scaleform::Render::Hairliner::OutVertexType>(
          v10,
          v13,
          v15,
          v16,
          len2);
  v19 = (float)((float)(v10->y - y) * v6) / v16;
  v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v40) & _xmm);
  v21 = (float)((float)(v12 - x) * v6) / v16;
  v22 = (float)((float)(y - v17) * v6) / len2;
  v23 = (float)(v18 * v6) / len2;
  if ( v20 >= 0.125 )
  {
    v43 = x + v19;
    v27 = v10->y + v21;
    v28 = v12 + v19;
    v29 = (float)(v15->x + v22) - (float)(v12 + v22);
    v30 = (float)(v12 + v19) - v43;
    v45 = (float)(v17 + v23) - (float)(y + v23);
    v31 = (float)(y + v21) - v27;
    v32 = (float)(v45 * v30) - (float)(v29 * v31);
    if ( (float)((float)(len2 + v16) * this->IntersectionEpsilon) <= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v32) & _xmm) )
    {
      v33 = (float)((float)((float)(v27 - (float)(y + v23)) * v29) - (float)((float)(v43 - (float)(v12 + v22)) * v45))
          / v32;
      v34 = (float)(v31 * v33) + v27;
      v35 = (float)(v30 * v33) + v43;
      v36 = sqrtf((float)((float)(v34 - y) * (float)(v34 - y)) + (float)((float)(v35 - v12) * (float)(v35 - v12)));
      v37 = this;
      if ( v40 <= 0.0 )
      {
        if ( (float)(v41 * -4.0) < v36 )
        {
          Scaleform::Render::Tessellator::emitStrokerVertex(
            this,
            v28 - (float)(v21 + v21),
            (float)(v19 + v19) + (float)(y + v21));
          Scaleform::Render::Tessellator::emitStrokerVertex(
            this,
            (float)(v22 + v13->x) + (float)(v23 + v23),
            (float)(v23 + v13->y) - (float)(v22 + v22));
          Size = this->MeshVertices.Size;
          val.d.t.v1 = v5;
          val.d.t.v2 = Size - 2;
          val.d.t.v3 = Size - 1;
          Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::PushBack(
            &this->MeshTriangles,
            0i64,
            &val);
          return 2i64;
        }
      }
      else if ( v36 > (float)(fminf(v16, len2) / v40) )
      {
        v38 = y + v21;
LABEL_14:
        Scaleform::Render::Tessellator::emitStrokerVertex(v37, v28, v38);
        Scaleform::Render::Tessellator::emitStrokerVertex(this, v22 + v13->x, v23 + v13->y);
        return 2i64;
      }
      Scaleform::Render::Tessellator::emitStrokerVertex(this, v35, v34);
      return 1i64;
    }
    v38 = y + v21;
    v37 = this;
    goto LABEL_14;
  }
  if ( v16 <= len2 )
  {
    v24 = y + v23;
    v25 = v12 + v22;
  }
  else
  {
    v24 = y + v21;
    v25 = v12 + v19;
  }
  Scaleform::Render::Tessellator::emitStrokerVertex(this, v25, v24);
  return 1i64;
}

void __fastcall Scaleform::Render::Tessellator::addStyle(
        Scaleform::Render::Tessellator *this,
        unsigned int style,
        bool complex)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v7; // rsi
  void *v8; // rbp
  unsigned int *Array; // rdx
  unsigned __int64 v10; // r8

  if ( style )
  {
    if ( 32 * this->ComplexFlags.Size <= style )
    {
      do
      {
        Size = this->ComplexFlags.Size;
        if ( Size )
          v7 = 2 * Size;
        else
          v7 = 8i64;
        if ( v7 > this->ComplexFlags.Size )
        {
          v8 = Scaleform::Render::LinearHeap::Alloc(this->ComplexFlags.pHeap, 4 * v7);
          memset(v8, 0, 4 * v7);
          Array = this->ComplexFlags.Array;
          if ( Array )
          {
            v10 = this->ComplexFlags.Size;
            if ( v10 )
              memmove(v8, Array, 4 * v10);
          }
          this->ComplexFlags.Array = (unsigned int *)v8;
        }
        this->ComplexFlags.Size = v7;
      }
      while ( 32 * v7 <= style );
    }
    if ( complex )
    {
      this->ComplexFlags.Array[(unsigned __int64)style >> 5] |= 1 << (style & 0x1F);
      this->HasComplexFill = 1;
    }
    if ( this->MaxStyle < style )
      this->MaxStyle = style;
  }
}

void __fastcall Scaleform::Render::Tessellator::addTriangleAA(
        Scaleform::Render::Tessellator *this,
        Scaleform::Render::Tessellator::MonoVertexType *v1,
        Scaleform::Render::Tessellator::MonoVertexType *v2,
        Scaleform::Render::Tessellator::MonoVertexType *v3)
{
  Scaleform::Render::TessVertex **Pages; // r11
  const Scaleform::Render::TessVertex *v9; // rdi
  const Scaleform::Render::TessVertex *v10; // rsi
  Scaleform::Render::TessVertex *v11; // rax
  float y; // xmm2_4
  const Scaleform::Render::TessVertex *v13; // rbp
  Scaleform::Render::TessVertex *v14; // r8
  Scaleform::Render::TessVertex *v15; // rdx
  Scaleform::Render::TessVertex *v16; // r13
  Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16> *p_MeshTriangles; // rbp
  __int64 MeshIdx; // rsi
  Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::ArrayType *v19; // rdi
  unsigned __int64 v20; // rbx
  __int64 v21; // rdx
  Scaleform::Render::Tessellator::TriangleType *v22; // rax
  __int128 v23; // [rsp+30h] [rbp-58h]
  Scaleform::Render::Tessellator::MonoVertexType *v24; // [rsp+40h] [rbp-48h]
  Scaleform::Render::TessVertex *v25; // [rsp+90h] [rbp+8h]

  if ( this->EdgeAAFlag )
  {
    Pages = this->MeshVertices.Pages;
    v9 = &Pages[(unsigned __int64)(v1->srcVer & 0xFFFFFFF) >> 4][v1->srcVer & 0xF];
    v10 = &Pages[(unsigned __int64)(v2->srcVer & 0xFFFFFFF) >> 4][v2->srcVer & 0xF];
    v11 = Pages[(unsigned __int64)(v3->srcVer & 0xFFFFFFF) >> 4];
    y = v11[v3->srcVer & 0xF].y;
    v13 = &v11[v3->srcVer & 0xF];
    v14 = &Pages[(unsigned __int64)(v1->aaVer & 0xFFFFFFF) >> 4][v1->aaVer & 0xF];
    v15 = &Pages[(unsigned __int64)(v2->aaVer & 0xFFFFFFF) >> 4][v2->aaVer & 0xF];
    v25 = v15;
    v16 = &Pages[(unsigned __int64)(v3->aaVer & 0xFFFFFFF) >> 4][v3->aaVer & 0xF];
    if ( (float)((float)((float)(v14->x - v13->x) * (float)(y - v10->y))
               - (float)((float)(v14->y - y) * (float)(v13->x - v10->x))) >= 0.0 )
    {
      Scaleform::Render::Tessellator::moveVertexAA(this, v9, v14, v10, v13);
      v15 = v25;
    }
    if ( (float)((float)((float)(v9->y - v13->y) * (float)(v15->x - v9->x))
               - (float)((float)(v15->y - v9->y) * (float)(v9->x - v13->x))) >= 0.0 )
      Scaleform::Render::Tessellator::moveVertexAA(this, v10, v15, v13, v9);
    if ( (float)((float)((float)(v16->x - v10->x) * (float)(v10->y - v9->y))
               - (float)((float)(v16->y - v10->y) * (float)(v10->x - v9->x))) >= 0.0 )
      Scaleform::Render::Tessellator::moveVertexAA(this, v13, v16, v9, v10);
    *(_QWORD *)&v23 = v1;
    *((_QWORD *)&v23 + 1) = v2;
    v24 = v3;
  }
  else
  {
    LODWORD(v23) = Scaleform::Render::Tessellator::emitVertex(
                     this,
                     this->MeshIdx,
                     v1->srcVer & 0xFFFFFFF,
                     this->MonoStyle,
                     this->FactorOneFlag);
    DWORD1(v23) = Scaleform::Render::Tessellator::emitVertex(
                    this,
                    this->MeshIdx,
                    v2->srcVer & 0xFFFFFFF,
                    this->MonoStyle,
                    this->FactorOneFlag);
    DWORD2(v23) = Scaleform::Render::Tessellator::emitVertex(
                    this,
                    this->MeshIdx,
                    v3->srcVer & 0xFFFFFFF,
                    this->MonoStyle,
                    this->FactorOneFlag);
  }
  p_MeshTriangles = &this->MeshTriangles;
  MeshIdx = this->MeshIdx;
  v19 = &this->MeshTriangles.Arrays[MeshIdx];
  v20 = v19->Size >> 4;
  if ( v20 >= v19->NumPages )
    Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::allocPage(
      p_MeshTriangles,
      v19,
      v19->Size >> 4);
  v21 = v19->Size & 0xF;
  v22 = v19->Pages[v20];
  *(_OWORD *)&v22[v21].d.m.v1 = v23;
  v22[v21].d.m.v3 = v24;
  ++p_MeshTriangles->Arrays[MeshIdx].Size;
}

void __fastcall Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::allocPage(
        Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16> *this,
        Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::ArrayType *a,
        unsigned __int64 nb)
{
  unsigned __int64 MaxPages; // rdx
  void *v7; // rbx
  unsigned __int64 v8; // rax

  MaxPages = a->MaxPages;
  if ( nb >= MaxPages )
  {
    if ( a->Pages )
    {
      v7 = Scaleform::Render::LinearHeap::Alloc(this->pHeap, 16 * MaxPages);
      memmove(v7, a->Pages, 8 * a->NumPages);
      v8 = a->MaxPages;
      a->Pages = (Scaleform::Render::Tessellator::TriangleType **)v7;
      a->MaxPages = 2 * v8;
    }
    else
    {
      a->MaxPages = 16i64;
      a->Pages = (Scaleform::Render::Tessellator::TriangleType **)Scaleform::Render::LinearHeap::Alloc(
                                                                    this->pHeap,
                                                                    0x80ui64);
    }
  }
  a->Pages[nb] = (Scaleform::Render::Tessellator::TriangleType *)Scaleform::Render::LinearHeap::Alloc(
                                                                   this->pHeap,
                                                                   0x180ui64);
  ++a->NumPages;
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

void __fastcall Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,2>::allocPage(
        Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,2> *this,
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
      this->MaxPages = 2i64;
      this->Pages = (Scaleform::Render::Tessellator::MonoVertexType ***)Scaleform::Render::LinearHeap::Alloc(
                                                                          this->pHeap,
                                                                          0x10ui64);
    }
  }
  this->Pages[nb] = (Scaleform::Render::Tessellator::MonoVertexType **)Scaleform::Render::LinearHeap::Alloc(
                                                                         this->pHeap,
                                                                         0x80ui64);
  ++this->NumPages;
}

void __fastcall Scaleform::Render::ArrayPaged<Scaleform::Render::TessMesh,4,4>::allocPage(
        Scaleform::Render::ArrayPaged<Scaleform::Render::TessMesh,4,4> *this,
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
      this->Pages = (Scaleform::Render::TessMesh **)v5;
      this->MaxPages = 2 * v6;
    }
    else
    {
      this->MaxPages = 4i64;
      this->Pages = (Scaleform::Render::TessMesh **)Scaleform::Render::LinearHeap::Alloc(this->pHeap, 0x20ui64);
    }
  }
  this->Pages[nb] = (Scaleform::Render::TessMesh *)Scaleform::Render::LinearHeap::Alloc(this->pHeap, 0x1C0ui64);
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

void __fastcall Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoChainType,4,16>::allocPage(
        Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoChainType,4,16> *this,
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
      this->Pages = (Scaleform::Render::Tessellator::MonoChainType **)v5;
      this->MaxPages = 2 * v6;
    }
    else
    {
      this->MaxPages = 16i64;
      this->Pages = (Scaleform::Render::Tessellator::MonoChainType **)Scaleform::Render::LinearHeap::Alloc(
                                                                        this->pHeap,
                                                                        0x80ui64);
    }
  }
  this->Pages[nb] = (Scaleform::Render::Tessellator::MonoChainType *)Scaleform::Render::LinearHeap::Alloc(
                                                                       this->pHeap,
                                                                       0x2C0ui64);
  ++this->NumPages;
}

void __fastcall Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonotoneType,4,16>::allocPage(
        Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonotoneType,4,16> *this,
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
      this->Pages = (Scaleform::Render::Tessellator::MonotoneType **)v5;
      this->MaxPages = 2 * v6;
    }
    else
    {
      this->MaxPages = 16i64;
      this->Pages = (Scaleform::Render::Tessellator::MonotoneType **)Scaleform::Render::LinearHeap::Alloc(
                                                                       this->pHeap,
                                                                       0x80ui64);
    }
  }
  this->Pages[nb] = (Scaleform::Render::Tessellator::MonotoneType *)Scaleform::Render::LinearHeap::Alloc(
                                                                      this->pHeap,
                                                                      0x200ui64);
  ++this->NumPages;
}

void __fastcall Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::PathType,4,4>::allocPage(
        Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::PathType,4,4> *this,
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
      this->Pages = (Scaleform::Render::Tessellator::PathType **)v5;
      this->MaxPages = 2 * v6;
    }
    else
    {
      this->MaxPages = 4i64;
      this->Pages = (Scaleform::Render::Tessellator::PathType **)Scaleform::Render::LinearHeap::Alloc(
                                                                   this->pHeap,
                                                                   0x20ui64);
    }
  }
  this->Pages[nb] = (Scaleform::Render::Tessellator::PathType *)Scaleform::Render::LinearHeap::Alloc(
                                                                  this->pHeap,
                                                                  0x140ui64);
  ++this->NumPages;
}

void __fastcall Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::PendingEndType,4,4>::allocPage(
        Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::PendingEndType,4,4> *this,
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
      this->Pages = (Scaleform::Render::Tessellator::PendingEndType **)v5;
      this->MaxPages = 2 * v6;
    }
    else
    {
      this->MaxPages = 4i64;
      this->Pages = (Scaleform::Render::Tessellator::PendingEndType **)Scaleform::Render::LinearHeap::Alloc(
                                                                         this->pHeap,
                                                                         0x20ui64);
    }
  }
  this->Pages[nb] = (Scaleform::Render::Tessellator::PendingEndType *)Scaleform::Render::LinearHeap::Alloc(
                                                                        this->pHeap,
                                                                        0x100ui64);
  ++this->NumPages;
}

void __fastcall Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::ScanChainType,4,8>::allocPage(
        Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::ScanChainType,4,8> *this,
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
      this->Pages = (Scaleform::Render::Tessellator::ScanChainType **)v5;
      this->MaxPages = 2 * v6;
    }
    else
    {
      this->MaxPages = 8i64;
      this->Pages = (Scaleform::Render::Tessellator::ScanChainType **)Scaleform::Render::LinearHeap::Alloc(
                                                                        this->pHeap,
                                                                        0x40ui64);
    }
  }
  this->Pages[nb] = (Scaleform::Render::Tessellator::ScanChainType *)Scaleform::Render::LinearHeap::Alloc(
                                                                       this->pHeap,
                                                                       0x180ui64);
  ++this->NumPages;
}

void __fastcall Scaleform::Render::ArrayPaged<Scaleform::Render::TessVertex,4,16>::allocPage(
        Scaleform::Render::ArrayPaged<Scaleform::Render::TessVertex,4,16> *this,
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
      this->Pages = (Scaleform::Render::TessVertex **)v5;
      this->MaxPages = 2 * v6;
    }
    else
    {
      this->MaxPages = 16i64;
      this->Pages = (Scaleform::Render::TessVertex **)Scaleform::Render::LinearHeap::Alloc(this->pHeap, 0x80ui64);
    }
  }
  this->Pages[nb] = (Scaleform::Render::TessVertex *)Scaleform::Render::LinearHeap::Alloc(this->pHeap, 0x140ui64);
  ++this->NumPages;
}

void __fastcall Scaleform::Render::Tessellator::buildEdgeList(
        Scaleform::Render::Tessellator *this,
        unsigned int start,
        unsigned int numEdges,
        int step,
        unsigned int leftStyle,
        unsigned int rightStyle)
{
  unsigned __int64 Size_low; // r12
  Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16> *p_Edges; // rbx
  __int64 v11; // rsi
  Scaleform::Render::Tessellator::SrcVertexType **Pages; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdi
  Scaleform::Render::Tessellator::SrcVertexType *v15; // rdx
  Scaleform::Render::Tessellator::SrcVertexType *v16; // rcx
  __int64 v17; // r10
  unsigned __int64 v18; // rdi
  Scaleform::Render::Tessellator::EdgeType *v19; // r9
  unsigned __int64 lower; // rcx
  __int64 v21; // r8
  Scaleform::Render::Tessellator::SrcVertexType *v22; // rdx
  __int64 v23; // rdx
  Scaleform::Render::Tessellator::MonoChainType *v24; // rax
  __int128 v25; // [rsp+20h] [rbp-58h]
  _BYTE v26[24]; // [rsp+30h] [rbp-48h]
  Scaleform::Render::VertexBasic v27; // [rsp+80h] [rbp+8h]

  Size_low = LODWORD(this->Edges.Size);
  if ( numEdges )
  {
    p_Edges = (Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16> *)&this->Edges;
    v11 = numEdges;
    do
    {
      Pages = this->SrcVertices.Pages;
      v13 = start;
      start += step;
      LODWORD(v27.x) = v13;
      v14 = p_Edges->Size >> 4;
      v15 = Pages[v13 >> 4];
      v16 = Pages[(unsigned __int64)start >> 4];
      v27.y = (float)(v16[start & 0xF].x - v15[v13 & 0xF].x) / (float)(v16[start & 0xF].y - v15[v13 & 0xF].y);
      if ( v14 >= p_Edges->NumPages )
        Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16>::allocPage(p_Edges, v14);
      p_Edges->Pages[v14][p_Edges->Size & 0xF] = v27;
      ++p_Edges->Size;
      --v11;
    }
    while ( v11 );
  }
  v17 = Size_low & 0xF;
  v18 = this->MonoChains.Size >> 4;
  LODWORD(v25) = Size_low;
  *(_DWORD *)&v26[4] = (unsigned __int16)step;
  *(_QWORD *)&v26[12] = 0i64;
  *(_DWORD *)&v26[20] = -1;
  v19 = this->Edges.Pages[Size_low >> 4];
  lower = v19[v17].lower;
  v21 = lower & 0xF;
  v22 = this->SrcVertices.Pages[lower >> 4];
  DWORD1(v25) = LODWORD(this->Edges.Size) - 1;
  *(_WORD *)&v26[8] = leftStyle;
  DWORD2(v25) = LODWORD(v22[v21].y);
  *(_WORD *)&v26[10] = rightStyle;
  HIDWORD(v25) = LODWORD(v22[v21].x);
  *(float *)v26 = v19[v17].slope;
  if ( v18 >= this->MonoChains.NumPages )
    Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoChainType,4,16>::allocPage(&this->MonoChains, v18);
  v23 = this->MonoChains.Size & 0xF;
  v24 = this->MonoChains.Pages[v18];
  *(_OWORD *)&v24[v23].edge = v25;
  *(_OWORD *)&v24[v23].xt = *(_OWORD *)v26;
  *(_QWORD *)&v24[v23].rightBelow = *(_QWORD *)&v26[16];
  v24[v23].posScan = 0;
  ++this->MonoChains.Size;
}

void __fastcall Scaleform::Render::Tessellator::clearHeap1(Scaleform::Render::Tessellator *this)
{
  unsigned __int64 v1; // rax
  Scaleform::Render::LinearHeap *pHeap1; // r9
  __int64 v3; // r8

  v1 = 0i64;
  this->Paths.MaxPages = 0i64;
  this->Paths.NumPages = 0i64;
  this->Paths.Size = 0i64;
  this->Paths.Pages = 0i64;
  this->SrcVertices.MaxPages = 0i64;
  this->SrcVertices.NumPages = 0i64;
  this->SrcVertices.Size = 0i64;
  this->SrcVertices.Pages = 0i64;
  this->Edges.MaxPages = 0i64;
  this->Edges.NumPages = 0i64;
  this->Edges.Size = 0i64;
  this->Edges.Pages = 0i64;
  this->MonoChains.MaxPages = 0i64;
  this->MonoChains.NumPages = 0i64;
  this->MonoChains.Size = 0i64;
  this->MonoChains.Pages = 0i64;
  this->MonoChainsSorted.Size = 0i64;
  this->MonoChainsSorted.Array = 0i64;
  this->Scanbeams.MaxPages = 0i64;
  this->Scanbeams.NumPages = 0i64;
  this->Scanbeams.Size = 0i64;
  this->Scanbeams.Pages = 0i64;
  this->ActiveChains.MaxPages = 0i64;
  this->ActiveChains.NumPages = 0i64;
  this->ActiveChains.Size = 0i64;
  this->ActiveChains.Pages = 0i64;
  this->InteriorChains.MaxPages = 0i64;
  this->InteriorChains.NumPages = 0i64;
  this->InteriorChains.Size = 0i64;
  this->InteriorChains.Pages = 0i64;
  this->ValidChains.MaxPages = 0i64;
  this->ValidChains.NumPages = 0i64;
  this->ValidChains.Size = 0i64;
  this->ValidChains.Pages = 0i64;
  this->InteriorOrder.MaxPages = 0i64;
  this->InteriorOrder.NumPages = 0i64;
  this->InteriorOrder.Size = 0i64;
  this->InteriorOrder.Pages = 0i64;
  this->Intersections.MaxPages = 0i64;
  this->Intersections.NumPages = 0i64;
  this->Intersections.Size = 0i64;
  this->Intersections.Pages = 0i64;
  this->StyleCounts.Size = 0i64;
  this->StyleCounts.Array = 0i64;
  this->ChainsBelow.MaxPages = 0i64;
  this->ChainsBelow.NumPages = 0i64;
  this->ChainsBelow.Size = 0i64;
  this->ChainsBelow.Pages = 0i64;
  this->ChainsAbove.MaxPages = 0i64;
  this->ChainsAbove.NumPages = 0i64;
  this->ChainsAbove.Size = 0i64;
  this->ChainsAbove.Pages = 0i64;
  this->BaseLines.MaxPages = 0i64;
  this->BaseLines.NumPages = 0i64;
  this->BaseLines.Size = 0i64;
  this->BaseLines.Pages = 0i64;
  this->PendingEnds.MaxPages = 0i64;
  this->PendingEnds.NumPages = 0i64;
  this->PendingEnds.Size = 0i64;
  this->PendingEnds.Pages = 0i64;
  this->MeshTriangles.Arrays = 0i64;
  this->MeshTriangles.MaxArrays = 0i64;
  this->MeshTriangles.NumArrays = 0i64;
  this->LeftChain.MaxPages = 0i64;
  this->LeftChain.NumPages = 0i64;
  this->LeftChain.Size = 0i64;
  this->LeftChain.Pages = 0i64;
  this->RightChain.MaxPages = 0i64;
  this->RightChain.NumPages = 0i64;
  this->RightChain.Size = 0i64;
  this->RightChain.Pages = 0i64;
  this->EdgeFans.Size = 0i64;
  this->EdgeFans.Array = 0i64;
  this->StartFan.MaxPages = 0i64;
  this->StartFan.NumPages = 0i64;
  this->StartFan.Size = 0i64;
  this->StartFan.Pages = 0i64;
  this->TmpEdgeFan.MaxPages = 0i64;
  this->TmpEdgeFan.NumPages = 0i64;
  this->TmpEdgeFan.Size = 0i64;
  this->TmpEdgeFan.Pages = 0i64;
  this->EndFan.MaxPages = 0i64;
  this->EndFan.NumPages = 0i64;
  this->EndFan.Size = 0i64;
  this->EndFan.Pages = 0i64;
  this->OuterEdges.MaxPages = 0i64;
  this->OuterEdges.NumPages = 0i64;
  this->OuterEdges.Size = 0i64;
  this->OuterEdges.Pages = 0i64;
  this->StrokerEdges.MaxPages = 0i64;
  this->StrokerEdges.NumPages = 0i64;
  this->StrokerEdges.Size = 0i64;
  this->StrokerEdges.Pages = 0i64;
  this->MonoStack.MaxPages = 0i64;
  this->MonoStack.NumPages = 0i64;
  this->MonoStack.Size = 0i64;
  this->MonoStack.Pages = 0i64;
  this->InnerQuads.MaxPages = 0i64;
  this->InnerQuads.NumPages = 0i64;
  this->InnerQuads.Size = 0i64;
  this->InnerQuads.Pages = 0i64;
  this->StarVertices.MaxPages = 0i64;
  this->StarVertices.NumPages = 0i64;
  this->StarVertices.Size = 0i64;
  this->StarVertices.Pages = 0i64;
  pHeap1 = this->pHeap1;
  if ( pHeap1->MaxPages )
  {
    v3 = 0i64;
    do
    {
      ++v3;
      ++v1;
      pHeap1->pPagePool[v3 - 1].pFree = pHeap1->pPagePool[v3 - 1].pStart;
    }
    while ( v1 < pHeap1->MaxPages );
  }
  pHeap1->pLastPage = pHeap1->pPagePool;
}

bool __fastcall Scaleform::Render::Tessellator::cmpEdgeAA(
        const Scaleform::Render::Tessellator::TmpEdgeAAType *a,
        const Scaleform::Render::Tessellator::TmpEdgeAAType *b)
{
  float slope; // xmm0_4
  float v3; // xmm1_4

  slope = a->slope;
  v3 = b->slope;
  if ( slope == v3 )
    return a->style < b->style;
  else
    return v3 > slope;
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

bool __fastcall Scaleform::Render::Tessellator::cmpOuterEdges(
        const Scaleform::Render::Tessellator::OuterEdgeType *a,
        const Scaleform::Render::Tessellator::OuterEdgeType *b)
{
  Scaleform::Render::Tessellator::EdgeAAType *edge; // r8
  Scaleform::Render::Tessellator::MonoVertexType *cntVer; // rax
  Scaleform::Render::Tessellator::MonoVertexType *v4; // rcx
  bool v5; // cf

  edge = a->edge;
  cntVer = a->edge->cntVer;
  v4 = b->edge->cntVer;
  v5 = cntVer < v4;
  if ( cntVer == v4 )
    return edge->rayVer < b->edge->rayVer;
  return v5;
}

bool __fastcall Scaleform::Render::Tessellator::cmpStrokerEdges(
        const Scaleform::Render::Tessellator::StrokerEdgeType *a,
        const Scaleform::Render::Tessellator::StrokerEdgeType *b)
{
  unsigned int v2; // eax
  unsigned int v3; // er8
  bool v4; // cf

  v2 = a->node1 & 0xFFFFFFF;
  v3 = b->node1 & 0xFFFFFFF;
  v4 = v2 < v3;
  if ( v2 == v3 )
    return (a->node2 & 0xFFFFFFF) < (b->node2 & 0xFFFFFFF);
  return v4;
}

void __fastcall Scaleform::Render::Tessellator::collectFanEdges(
        Scaleform::Render::Tessellator *this,
        const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,8> *chain,
        const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,8> *oppos,
        unsigned int style)
{
  unsigned __int16 v4; // r14
  Scaleform::Render::Tessellator::MonoVertexType *v7; // rbp
  unsigned __int64 Size; // rdx
  Scaleform::Render::Tessellator::MonoVertexType *v9; // rdi
  unsigned __int64 v10; // rax
  Scaleform::Render::Tessellator::MonoVertexType *v11; // r10
  unsigned __int64 v12; // r8
  Scaleform::Render::TessVertex *v13; // r9
  Scaleform::Render::Tessellator::EdgeAAType *v14; // r8

  v4 = style;
  if ( oppos->Size )
    v7 = **oppos->Pages;
  else
    v7 = chain->Pages[(chain->Size - 1) >> 4][(LODWORD(chain->Size) - 1) & 0xF];
  Size = chain->Size;
  v9 = **chain->Pages;
  if ( Size )
  {
    v10 = 1i64;
    do
    {
      if ( v10 >= Size )
      {
        v12 = oppos->Size;
        if ( v12 )
          v11 = oppos->Pages[(v12 - 1) >> 4][((_DWORD)v12 - 1) & 0xF];
        else
          v11 = **chain->Pages;
      }
      else
      {
        v11 = chain->Pages[v10 >> 4][v10 & 0xF];
      }
      ++v10;
      v13 = &this->MeshVertices.Pages[(unsigned __int64)(v9->srcVer & 0xFFFFFFF) >> 4][v9->srcVer & 0xF];
      v14 = &this->EdgeFans.Array[v13->Mesh + v13->Idx];
      v14->cntVer = v9;
      v14->rayVer = v7;
      v7 = v9;
      v14->slope = 0;
      v14->style = v4;
      v14[1].cntVer = v9;
      v9 = v11;
      v14[1].rayVer = v11;
      v14[1].slope = 0;
      v14[1].style = v4 ^ 0x8000;
      v13->Mesh += 2;
      Size = chain->Size;
    }
    while ( v10 - 1 < Size );
  }
}

void __fastcall Scaleform::Render::Tessellator::collectFanEdges(
        Scaleform::Render::Tessellator *this,
        Scaleform::Render::Tessellator::MonotoneType *m)
{
  Scaleform::Render::Tessellator::MonoVertexType *i; // rbx
  Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,8> *p_LeftChain; // rdi
  unsigned __int64 v6; // rsi

  this->LeftChain.Size = 0i64;
  this->RightChain.Size = 0i64;
  for ( i = m->start; i; i = i->next )
  {
    p_LeftChain = &this->LeftChain;
    if ( (i->srcVer & 0x80000000) == 0 )
      p_LeftChain = &this->RightChain;
    v6 = p_LeftChain->Size >> 4;
    if ( v6 >= p_LeftChain->NumPages )
      Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::MonoChainType *,4,8>::allocPage(
        p_LeftChain,
        p_LeftChain->Size >> 4);
    p_LeftChain->Pages[v6][p_LeftChain->Size & 0xF] = i;
    ++p_LeftChain->Size;
  }
  if ( this->LeftChain.Size )
    Scaleform::Render::Tessellator::collectFanEdges(this, &this->LeftChain, &this->RightChain, m->style | 0x8000);
  if ( this->RightChain.Size )
    Scaleform::Render::Tessellator::collectFanEdges(this, &this->RightChain, &this->LeftChain, m->style);
}

__int64 __fastcall Scaleform::Render::Tessellator::computeMiter(
        Scaleform::Render::Tessellator *this,
        const Scaleform::Render::TessVertex *v1,
        const Scaleform::Render::TessVertex *v2,
        const Scaleform::Render::TessVertex *v3,
        Scaleform::Render::TessVertex *newVer1,
        Scaleform::Render::TessVertex *newVer2)
{
  float x; // xmm7_4
  float v11; // xmm9_4
  float y; // xmm10_4
  float v13; // xmm6_4
  float v14; // xmm11_4
  float v15; // xmm13_4
  float v16; // xmm0_4
  float EdgeAAWidth; // xmm8_4
  float v18; // xmm12_4
  float v19; // xmm2_4
  bool v20; // bp
  unsigned __int8 v21; // si
  float v22; // xmm14_4
  float v23; // xmm2_4
  float v24; // xmm13_4
  float v25; // xmm15_4
  float v26; // xmm11_4
  float v27; // xmm6_4
  float v28; // xmm7_4
  __int64 result; // rax
  float v30; // xmm1_4
  float v31; // xmm7_4
  float v32; // xmm5_4
  float v33; // xmm4_4
  float v34; // xmm6_4
  float v35; // xmm2_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  float v38; // xmm8_4
  float v39; // xmm8_4
  float v40; // [rsp+30h] [rbp-E8h]
  float v41; // [rsp+38h] [rbp-E0h]
  float v42; // [rsp+3Ch] [rbp-DCh]
  float v43; // [rsp+120h] [rbp+8h]
  float v44; // [rsp+128h] [rbp+10h]
  float len2; // [rsp+130h] [rbp+18h]

  x = v1->x;
  v11 = v2->x;
  y = v2->y;
  v13 = y - v1->y;
  v14 = sqrtf((float)(v13 * v13) + (float)((float)(v2->x - x) * (float)(v2->x - x)));
  v15 = v3->y - y;
  v44 = v14;
  len2 = sqrtf((float)(v15 * v15) + (float)((float)(v3->x - v11) * (float)(v3->x - v11)));
  v16 = Scaleform::Render::Math2D::TurnRatio<Scaleform::Render::Hairliner::OutVertexType,Scaleform::Render::Hairliner::OutVertexType,Scaleform::Render::Hairliner::OutVertexType>(
          v1,
          v2,
          v3,
          v14,
          len2);
  EdgeAAWidth = this->EdgeAAWidth;
  v18 = 0.0;
  v19 = (float)(len2 + v14) * this->IntersectionEpsilon;
  v20 = v16 < 0.0;
  v21 = 0;
  v40 = v19;
  v22 = (float)((float)(x - v11) * EdgeAAWidth) / v14;
  v23 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v16) & _xmm);
  v42 = v23;
  v24 = (float)(v15 * EdgeAAWidth) / len2;
  v25 = (float)(EdgeAAWidth * v13) / v14;
  v26 = (float)((float)(v11 - v3->x) * EdgeAAWidth) / len2;
  if ( v23 < 0.125 )
  {
    if ( v44 <= len2 )
    {
      v28 = v11 + v24;
      v27 = y + v26;
      goto LABEL_5;
    }
    v11 = v11 + v25;
    y = y + v22;
    goto LABEL_4;
  }
  v43 = x + v25;
  v30 = v1->y + v22;
  v31 = (float)(v11 + v25) - (float)(x + v25);
  v32 = (float)(v3->y + v26) - (float)(y + v26);
  v41 = v30;
  v33 = (float)(v3->x + v24) - (float)(v11 + v24);
  v34 = (float)(y + v22) - v30;
  v35 = (float)(v32 * v31) - (float)(v33 * v34);
  if ( v40 > (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v35) & _xmm) )
  {
LABEL_4:
    v27 = y;
    v28 = v11;
    goto LABEL_5;
  }
  v36 = (float)((float)((float)(v30 - (float)(y + v26)) * v33) - (float)((float)(v43 - (float)(v11 + v24)) * v32)) / v35;
  v28 = (float)(v31 * v36) + v43;
  v27 = (float)(v34 * v36) + v41;
  v37 = sqrtf((float)((float)(v27 - y) * (float)(v27 - y)) + (float)((float)(v28 - v11) * (float)(v28 - v11)));
  if ( v20 )
    v38 = EdgeAAWidth * 4.0;
  else
    v38 = fminf(v44, len2) / v42;
  if ( v37 > v38 )
  {
    if ( newVer2 )
    {
      if ( v20 )
        v18 = FLOAT_2_0;
      v21 = 1;
      v28 = (float)(v11 + v25) - (float)(v18 * v22);
      v27 = (float)(v18 * v25) + (float)(y + v22);
      newVer2->x = (float)(v18 * v26) + (float)(v11 + v24);
      newVer2->y = (float)(v26 + v2->y) - (float)(v18 * v24);
    }
    else
    {
      v39 = v38 / v37;
      v28 = (float)((float)(v28 - v11) * v39) + v11;
      v27 = (float)((float)(v27 - y) * v39) + y;
    }
  }
LABEL_5:
  result = v21;
  newVer1->x = v28;
  newVer1->y = v27;
  return result;
}

void __fastcall Scaleform::Render::Tessellator::connectPendingToLeft(
        Scaleform::Render::Tessellator *this,
        Scaleform::Render::Tessellator::ScanChainType *scan,
        unsigned int targetVertex)
{
  int *v4; // rdi
  unsigned int v5; // er9
  Scaleform::Render::Tessellator::ScanChainType *v6; // r10
  Scaleform::Render::Tessellator::MonotoneType *monotone; // rax
  Scaleform::Render::Tessellator::BaseLineType *lowerBase; // r8
  unsigned int style; // er11
  unsigned int firstChain; // er13
  int vertexLeft; // er14
  unsigned int numChains; // er15
  unsigned int vertex; // er12
  Scaleform::Render::Tessellator::PendingEndType **Pages; // rax
  char v15; // r8
  Scaleform::Render::Tessellator::MonotoneType *v16; // rsi
  unsigned __int64 v17; // r14
  Scaleform::Render::Tessellator::MonoVertexType *v18; // rdi
  unsigned __int64 v19; // r15
  Scaleform::Render::Tessellator::MonoVertexType *v20; // rax
  Scaleform::Render::Tessellator::MonotoneType *v21; // rdi
  unsigned __int64 v22; // r14
  Scaleform::Render::Tessellator::MonoVertexType *v23; // rsi
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // r14
  Scaleform::Render::Tessellator::MonoVertexType *v26; // rsi
  unsigned __int64 v27; // r15
  Scaleform::Render::Tessellator::MonotoneType *started; // rax
  Scaleform::Render::Tessellator::MonotoneType *v29; // rsi
  unsigned int v30; // er14
  unsigned __int64 v31; // r15
  Scaleform::Render::Tessellator::MonoVertexType *v32; // r15
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // r15
  Scaleform::Render::Tessellator::MonoVertexType *v35; // r14
  unsigned __int64 v36; // r15
  __int64 v37; // rdi
  unsigned __int64 v38; // r14
  Scaleform::Render::Tessellator::MonoVertexType *v39; // rsi
  unsigned __int64 v40; // r15
  unsigned __int64 v41; // r14
  Scaleform::Render::Tessellator::MonoVertexType *v42; // rsi
  unsigned __int64 v43; // r15
  Scaleform::Render::Tessellator::MonotoneType *v44; // rsi
  Scaleform::Render::Tessellator::MonoVertexType *v45; // rdi
  unsigned __int64 v46; // r15
  Scaleform::Render::Tessellator::PendingEndType **v47; // rdx
  unsigned __int64 v48; // rax
  __int64 v49; // rdi
  unsigned __int64 v50; // r14
  unsigned __int64 v51; // rax
  unsigned __int64 Size; // rax
  unsigned int v53; // [rsp+28h] [rbp-E0h]
  unsigned int vertexRight; // [rsp+30h] [rbp-D8h]
  Scaleform::Render::Tessellator::MonoVertexType v55; // [rsp+38h] [rbp-D0h]
  Scaleform::Render::Tessellator::MonoVertexType v56; // [rsp+48h] [rbp-C0h]
  Scaleform::Render::Tessellator::MonoVertexType v57; // [rsp+58h] [rbp-B0h]
  Scaleform::Render::Tessellator::MonoVertexType v58; // [rsp+68h] [rbp-A0h]
  Scaleform::Render::Tessellator::MonoVertexType v59; // [rsp+78h] [rbp-90h]
  Scaleform::Render::Tessellator::MonoVertexType v60; // [rsp+88h] [rbp-80h]
  Scaleform::Render::Tessellator::MonoVertexType v61; // [rsp+98h] [rbp-70h]
  Scaleform::Render::Tessellator::MonoVertexType v62; // [rsp+A8h] [rbp-60h]
  Scaleform::Render::Tessellator::BaseLineType *v63; // [rsp+B8h] [rbp-50h]
  int v64; // [rsp+C0h] [rbp-48h] BYREF
  Scaleform::Render::Tessellator::MonotoneType *v65; // [rsp+C8h] [rbp-40h]
  unsigned int v66; // [rsp+128h] [rbp+20h]
  unsigned int v69; // [rsp+140h] [rbp+38h]

  v4 = &v64;
  v5 = targetVertex;
  v6 = scan;
  monotone = scan->monotone;
  lowerBase = monotone->lowerBase;
  style = monotone->style;
  monotone->lowerBase = 0i64;
  firstChain = lowerBase->firstChain;
  vertexLeft = lowerBase->vertexLeft;
  numChains = lowerBase->numChains;
  v65 = scan->monotone;
  vertexRight = lowerBase->vertexRight;
  Pages = this->PendingEnds.Pages;
  v63 = lowerBase;
  v69 = style;
  v64 = vertexLeft;
  v53 = firstChain;
  v66 = numChains;
  vertex = Pages[(unsigned __int64)firstChain >> 4][firstChain & 0xF].vertex;
  LODWORD(Pages) = lowerBase->styleLeft;
  v15 = 1;
  while ( 1 )
  {
    if ( vertexLeft == vertex )
      goto LABEL_80;
    if ( v15 )
    {
      v16 = v6->monotone;
      v55.next = 0i64;
      v55.srcVer = vertex;
      v55.aaVer = vertex;
      if ( v16->start )
      {
        v18 = &this->MonoVertices.Pages[(unsigned __int64)v16->d.m.lastIdx >> 4][v16->d.m.lastIdx & 0xF];
        if ( v18->srcVer == vertex )
          goto LABEL_13;
        v19 = this->MonoVertices.Size >> 4;
        if ( v19 >= this->MonoVertices.NumPages )
        {
          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
            this->MonoVertices.Size >> 4);
          v5 = targetVertex;
          v6 = scan;
        }
        v20 = this->MonoVertices.Pages[v19];
        numChains = v66;
        v20[this->MonoVertices.Size & 0xF] = v55;
        v18->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
        v16->d.m.prevIdx2 = v16->d.m.prevIdx1;
        v16->d.m.prevIdx1 = v16->d.m.lastIdx;
      }
      else
      {
        v17 = this->MonoVertices.Size >> 4;
        if ( v17 >= this->MonoVertices.NumPages )
        {
          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
            this->MonoVertices.Size >> 4);
          v5 = targetVertex;
          v6 = scan;
        }
        this->MonoVertices.Pages[v17][this->MonoVertices.Size & 0xF] = v55;
        v16->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
        *(_QWORD *)&v16->d.t.numTriangles = -1i64;
      }
      v16->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
LABEL_13:
      v21 = v6->monotone;
      if ( v5 == -1 )
        goto LABEL_80;
      HIDWORD(v56.next) = 0;
      v56.srcVer = v5 | 0x80000000;
      *(_QWORD *)&v56.aaVer = v5 | 0x80000000;
      if ( v21->start )
      {
        v23 = &this->MonoVertices.Pages[(unsigned __int64)v21->d.m.lastIdx >> 4][v21->d.m.lastIdx & 0xF];
        if ( v23->srcVer == (v5 | 0x80000000) )
          goto LABEL_23;
        v24 = this->MonoVertices.Size >> 4;
        if ( v24 >= this->MonoVertices.NumPages )
        {
          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
            this->MonoVertices.Size >> 4);
          v5 = targetVertex;
        }
        this->MonoVertices.Pages[v24][this->MonoVertices.Size & 0xF] = v56;
        v23->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
        v21->d.m.prevIdx2 = v21->d.m.prevIdx1;
        v21->d.m.prevIdx1 = v21->d.m.lastIdx;
      }
      else
      {
        v22 = this->MonoVertices.Size >> 4;
        if ( v22 >= this->MonoVertices.NumPages )
        {
          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
            this->MonoVertices.Size >> 4);
          v5 = targetVertex;
        }
        this->MonoVertices.Pages[v22][this->MonoVertices.Size & 0xF] = v56;
        v21->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
        *(_QWORD *)&v21->d.t.numTriangles = -1i64;
      }
      v21->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
LABEL_23:
      HIDWORD(v57.next) = 0;
      v57.srcVer = v5 & 0x7FFFFFFF;
      *(_QWORD *)&v57.aaVer = v5 & 0x7FFFFFFF;
      if ( v21->start )
      {
        v26 = &this->MonoVertices.Pages[(unsigned __int64)v21->d.m.lastIdx >> 4][v21->d.m.lastIdx & 0xF];
        if ( v26->srcVer != (v5 & 0x7FFFFFFF) )
        {
          v27 = this->MonoVertices.Size >> 4;
          if ( v27 >= this->MonoVertices.NumPages )
          {
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
            v5 = targetVertex;
          }
          this->MonoVertices.Pages[v27][this->MonoVertices.Size & 0xF] = v57;
          v26->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          v21->d.m.prevIdx2 = v21->d.m.prevIdx1;
          v21->d.m.prevIdx1 = v21->d.m.lastIdx;
          v21->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
        }
      }
      else
      {
        v25 = this->MonoVertices.Size >> 4;
        if ( v25 >= this->MonoVertices.NumPages )
        {
          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
            this->MonoVertices.Size >> 4);
          v5 = targetVertex;
        }
        this->MonoVertices.Pages[v25][this->MonoVertices.Size & 0xF] = v57;
        v21->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
        *(_QWORD *)&v21->d.t.numTriangles = -1i64;
        v21->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
      }
      goto LABEL_79;
    }
    if ( (_DWORD)Pages != style || !*((_QWORD *)v4 + 1) )
    {
      started = Scaleform::Render::Tessellator::startMonotone(this, style);
      *((_QWORD *)v4 + 1) = started;
      v29 = started;
      if ( vertexLeft == -1 )
        goto LABEL_43;
      v30 = vertexLeft | 0x80000000;
      v58.next = 0i64;
      v58.srcVer = v30;
      v58.aaVer = v30;
      if ( started->start )
      {
        v32 = &this->MonoVertices.Pages[(unsigned __int64)started->d.m.lastIdx >> 4][started->d.m.lastIdx & 0xF];
        if ( v32->srcVer == v30 )
          goto LABEL_43;
        v33 = this->MonoVertices.Size >> 4;
        if ( v33 >= this->MonoVertices.NumPages )
          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
            this->MonoVertices.Size >> 4);
        this->MonoVertices.Pages[v33][this->MonoVertices.Size & 0xF] = v58;
        v32->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
        v29->d.m.prevIdx2 = v29->d.m.prevIdx1;
        v29->d.m.prevIdx1 = v29->d.m.lastIdx;
      }
      else
      {
        v31 = this->MonoVertices.Size >> 4;
        if ( v31 >= this->MonoVertices.NumPages )
          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
            this->MonoVertices.Size >> 4);
        this->MonoVertices.Pages[v31][this->MonoVertices.Size & 0xF] = v58;
        v29->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
        *(_QWORD *)&v29->d.t.numTriangles = -1i64;
      }
      v29->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
LABEL_43:
      if ( vertex != -1 )
      {
        HIDWORD(v59.next) = 0;
        v59.srcVer = vertex & 0x7FFFFFFF;
        *(_QWORD *)&v59.aaVer = vertex & 0x7FFFFFFF;
        if ( !v29->start )
        {
          v34 = this->MonoVertices.Size >> 4;
          if ( v34 >= this->MonoVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
          this->MonoVertices.Pages[v34][this->MonoVertices.Size & 0xF] = v59;
          v29->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          *(_QWORD *)&v29->d.t.numTriangles = -1i64;
LABEL_52:
          v29->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
          goto LABEL_53;
        }
        v35 = &this->MonoVertices.Pages[(unsigned __int64)v29->d.m.lastIdx >> 4][v29->d.m.lastIdx & 0xF];
        if ( v35->srcVer != (vertex & 0x7FFFFFFF) )
        {
          v36 = this->MonoVertices.Size >> 4;
          if ( v36 >= this->MonoVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
          this->MonoVertices.Pages[v36][this->MonoVertices.Size & 0xF] = v59;
          v35->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          v29->d.m.prevIdx2 = v29->d.m.prevIdx1;
          v29->d.m.prevIdx1 = v29->d.m.lastIdx;
          goto LABEL_52;
        }
      }
LABEL_53:
      v6 = scan;
      v5 = targetVertex;
    }
    if ( !v66 )
      break;
    v37 = *((_QWORD *)v4 + 1);
    if ( v5 != -1 )
    {
      HIDWORD(v60.next) = 0;
      v60.srcVer = v5 | 0x80000000;
      *(_QWORD *)&v60.aaVer = v5 | 0x80000000;
      if ( !*(_QWORD *)v37 )
      {
        v38 = this->MonoVertices.Size >> 4;
        if ( v38 >= this->MonoVertices.NumPages )
        {
          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
            this->MonoVertices.Size >> 4);
          v5 = targetVertex;
        }
        this->MonoVertices.Pages[v38][this->MonoVertices.Size & 0xF] = v60;
        *(_QWORD *)v37 = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
        *(_QWORD *)(v37 + 12) = -1i64;
        goto LABEL_64;
      }
      v39 = &this->MonoVertices.Pages[(unsigned __int64)*(unsigned int *)(v37 + 8) >> 4][*(_DWORD *)(v37 + 8) & 0xF];
      if ( v39->srcVer != (v5 | 0x80000000) )
      {
        v40 = this->MonoVertices.Size >> 4;
        if ( v40 >= this->MonoVertices.NumPages )
        {
          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
            this->MonoVertices.Size >> 4);
          v5 = targetVertex;
        }
        this->MonoVertices.Pages[v40][this->MonoVertices.Size & 0xF] = v60;
        v39->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
        *(_DWORD *)(v37 + 16) = *(_DWORD *)(v37 + 12);
        *(_DWORD *)(v37 + 12) = *(_DWORD *)(v37 + 8);
LABEL_64:
        *(_DWORD *)(v37 + 8) = LODWORD(this->MonoVertices.Size) - 1;
      }
      HIDWORD(v61.next) = 0;
      v61.srcVer = v5 & 0x7FFFFFFF;
      *(_QWORD *)&v61.aaVer = v5 & 0x7FFFFFFF;
      if ( *(_QWORD *)v37 )
      {
        v42 = &this->MonoVertices.Pages[(unsigned __int64)*(unsigned int *)(v37 + 8) >> 4][*(_DWORD *)(v37 + 8) & 0xF];
        if ( v42->srcVer != (v5 & 0x7FFFFFFF) )
        {
          v43 = this->MonoVertices.Size >> 4;
          if ( v43 >= this->MonoVertices.NumPages )
          {
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
            v5 = targetVertex;
          }
          this->MonoVertices.Pages[v43][this->MonoVertices.Size & 0xF] = v61;
          v42->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          *(_DWORD *)(v37 + 16) = *(_DWORD *)(v37 + 12);
          *(_DWORD *)(v37 + 12) = *(_DWORD *)(v37 + 8);
          *(_DWORD *)(v37 + 8) = LODWORD(this->MonoVertices.Size) - 1;
        }
      }
      else
      {
        v41 = this->MonoVertices.Size >> 4;
        if ( v41 >= this->MonoVertices.NumPages )
        {
          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
            this->MonoVertices.Size >> 4);
          v5 = targetVertex;
        }
        this->MonoVertices.Pages[v41][this->MonoVertices.Size & 0xF] = v61;
        *(_QWORD *)v37 = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
        *(_QWORD *)(v37 + 12) = -1i64;
        *(_DWORD *)(v37 + 8) = LODWORD(this->MonoVertices.Size) - 1;
      }
    }
LABEL_78:
    firstChain = v53;
LABEL_79:
    numChains = v66;
LABEL_80:
    v15 = 0;
    if ( !numChains )
      goto LABEL_90;
    v47 = this->PendingEnds.Pages;
    --numChains;
    vertexLeft = vertex;
    v66 = numChains;
    v48 = (unsigned __int64)firstChain >> 4;
    v49 = firstChain++ & 0xF;
    v53 = firstChain;
    v4 = (int *)&v47[v48][v49];
    if ( numChains )
      vertex = v47[(unsigned __int64)firstChain >> 4][firstChain & 0xF].vertex;
    else
      vertex = vertexRight;
    Pages = (Scaleform::Render::Tessellator::PendingEndType **)*((_QWORD *)v4 + 1);
    v6 = scan;
    style = v69;
    if ( Pages )
      LODWORD(Pages) = *((_DWORD *)Pages + 5);
  }
  v44 = (Scaleform::Render::Tessellator::MonotoneType *)*((_QWORD *)v4 + 1);
  v6->monotone = v44;
  HIDWORD(v62.next) = 0;
  v62.srcVer = v5 | 0x80000000;
  *(_QWORD *)&v62.aaVer = v5 | 0x80000000;
  if ( v44->start )
  {
    v45 = &this->MonoVertices.Pages[(unsigned __int64)v44->d.m.lastIdx >> 4][v44->d.m.lastIdx & 0xF];
    if ( v45->srcVer != (v5 | 0x80000000) )
    {
      v46 = this->MonoVertices.Size >> 4;
      if ( v46 >= this->MonoVertices.NumPages )
      {
        Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
          (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
          this->MonoVertices.Size >> 4);
        v5 = targetVertex;
      }
      this->MonoVertices.Pages[v46][this->MonoVertices.Size & 0xF] = v62;
      v45->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
      v44->d.m.prevIdx2 = v44->d.m.prevIdx1;
      v44->d.m.prevIdx1 = v44->d.m.lastIdx;
      v44->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
    }
    goto LABEL_78;
  }
  v50 = this->MonoVertices.Size >> 4;
  if ( v50 >= this->MonoVertices.NumPages )
    Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
      (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
      this->MonoVertices.Size >> 4);
  this->MonoVertices.Pages[v50][this->MonoVertices.Size & 0xF] = v62;
  v44->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
  *(_QWORD *)&v44->d.t.numTriangles = -1i64;
  v44->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
LABEL_90:
  if ( v63 == &this->BaseLines.Pages[(this->BaseLines.Size - 1) >> 4][(LODWORD(this->BaseLines.Size) - 1) & 0xF] )
  {
    v51 = v63->firstChain;
    if ( v51 < this->PendingEnds.Size )
      this->PendingEnds.Size = v51;
    Size = this->BaseLines.Size;
    if ( Size )
      this->BaseLines.Size = Size - 1;
  }
}

void __fastcall Scaleform::Render::Tessellator::connectPendingToRight(
        Scaleform::Render::Tessellator *this,
        Scaleform::Render::Tessellator::ScanChainType *scan,
        unsigned int targetVertex)
{
  Scaleform::Render::Tessellator::MonotoneType *monotone; // rax
  Scaleform::Render::Tessellator::BaseLineType *lowerBase; // rdx
  unsigned int v7; // ecx
  Scaleform::Render::Tessellator::MonotoneType *v8; // r14
  unsigned int vertex; // er12
  unsigned __int64 v10; // rsi
  Scaleform::Render::Tessellator::MonoVertexType *v11; // rdi
  unsigned __int64 v12; // r15
  Scaleform::Render::Tessellator::MonotoneType *v13; // rsi
  unsigned __int64 v14; // r14
  Scaleform::Render::Tessellator::MonoVertexType *v15; // rdi
  unsigned __int64 v16; // r15
  unsigned int v17; // er9
  unsigned int v18; // ecx
  Scaleform::Render::Tessellator::PendingEndType **Pages; // rdx
  unsigned int v20; // er14
  unsigned __int64 v21; // rax
  __int64 v22; // rsi
  Scaleform::Render::Tessellator::PendingEndType *v23; // rsi
  Scaleform::Render::Tessellator::MonotoneType *v24; // rax
  unsigned int v25; // ecx
  Scaleform::Render::Tessellator::MonotoneType *started; // rax
  Scaleform::Render::Tessellator::MonotoneType *v27; // rdi
  unsigned int v28; // er14
  unsigned __int64 v29; // r15
  int v30; // eax
  Scaleform::Render::Tessellator::MonoVertexType *v31; // r15
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // r15
  Scaleform::Render::Tessellator::MonoVertexType *v34; // r14
  unsigned __int64 v35; // r15
  Scaleform::Render::Tessellator::MonotoneType *v36; // rdi
  unsigned __int64 v37; // r14
  Scaleform::Render::Tessellator::MonoVertexType *v38; // rsi
  unsigned __int64 v39; // r15
  unsigned __int64 v40; // r14
  Scaleform::Render::Tessellator::MonoVertexType *v41; // rsi
  unsigned __int64 v42; // r15
  unsigned __int64 v43; // rax
  unsigned __int64 Size; // rax
  unsigned int firstChain; // [rsp+28h] [rbp-49h]
  Scaleform::Render::Tessellator::BaseLineType *v46; // [rsp+30h] [rbp-41h]
  Scaleform::Render::Tessellator::MonoVertexType v47; // [rsp+38h] [rbp-39h]
  Scaleform::Render::Tessellator::MonoVertexType v48; // [rsp+38h] [rbp-39h]
  Scaleform::Render::Tessellator::MonoVertexType v49; // [rsp+38h] [rbp-39h]
  Scaleform::Render::Tessellator::MonoVertexType v50; // [rsp+48h] [rbp-29h]
  Scaleform::Render::Tessellator::MonoVertexType v51; // [rsp+58h] [rbp-19h]
  Scaleform::Render::Tessellator::MonoVertexType v52; // [rsp+68h] [rbp-9h]
  unsigned int numChains; // [rsp+D8h] [rbp+67h]
  unsigned int vertexRight; // [rsp+E0h] [rbp+6Fh]
  unsigned int v55; // [rsp+E8h] [rbp+77h]
  unsigned int style; // [rsp+F0h] [rbp+7Fh]

  v55 = targetVertex;
  monotone = scan->monotone;
  HIDWORD(v47.next) = 0;
  lowerBase = monotone->lowerBase;
  v7 = monotone->style;
  monotone->lowerBase = 0i64;
  v8 = scan->monotone;
  style = v7;
  numChains = lowerBase->numChains;
  v46 = lowerBase;
  vertexRight = lowerBase->vertexRight;
  firstChain = lowerBase->firstChain;
  vertex = this->PendingEnds.Pages[(unsigned __int64)firstChain >> 4][firstChain & 0xF].vertex;
  v47.srcVer = vertex;
  *(_QWORD *)&v47.aaVer = vertex;
  if ( v8->start )
  {
    v11 = &this->MonoVertices.Pages[(unsigned __int64)v8->d.m.lastIdx >> 4][v8->d.m.lastIdx & 0xF];
    if ( v11->srcVer == vertex )
      goto LABEL_10;
    v12 = this->MonoVertices.Size >> 4;
    if ( v12 >= this->MonoVertices.NumPages )
    {
      Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
        (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
        this->MonoVertices.Size >> 4);
      targetVertex = v55;
    }
    this->MonoVertices.Pages[v12][this->MonoVertices.Size & 0xF] = v47;
    v11->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
    v8->d.m.prevIdx2 = v8->d.m.prevIdx1;
    v8->d.m.prevIdx1 = v8->d.m.lastIdx;
  }
  else
  {
    v10 = this->MonoVertices.Size >> 4;
    if ( v10 >= this->MonoVertices.NumPages )
    {
      Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
        (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
        this->MonoVertices.Size >> 4);
      targetVertex = v55;
    }
    this->MonoVertices.Pages[v10][this->MonoVertices.Size & 0xF] = v47;
    v8->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
    *(_QWORD *)&v8->d.t.numTriangles = -1i64;
  }
  v8->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
LABEL_10:
  v13 = scan->monotone;
  v48.next = 0i64;
  v48.srcVer = targetVertex;
  v48.aaVer = targetVertex;
  if ( !v13->start )
  {
    v14 = this->MonoVertices.Size >> 4;
    if ( v14 >= this->MonoVertices.NumPages )
    {
      Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
        (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
        this->MonoVertices.Size >> 4);
      targetVertex = v55;
    }
    this->MonoVertices.Pages[v14][this->MonoVertices.Size & 0xF] = v48;
    v13->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
    *(_QWORD *)&v13->d.t.numTriangles = -1i64;
LABEL_18:
    v13->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
    goto LABEL_19;
  }
  v15 = &this->MonoVertices.Pages[(unsigned __int64)v13->d.m.lastIdx >> 4][v13->d.m.lastIdx & 0xF];
  if ( v15->srcVer != targetVertex )
  {
    v16 = this->MonoVertices.Size >> 4;
    if ( v16 >= this->MonoVertices.NumPages )
    {
      Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
        (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
        this->MonoVertices.Size >> 4);
      targetVertex = v55;
    }
    this->MonoVertices.Pages[v16][this->MonoVertices.Size & 0xF] = v48;
    v15->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
    v13->d.m.prevIdx2 = v13->d.m.prevIdx1;
    v13->d.m.prevIdx1 = v13->d.m.lastIdx;
    goto LABEL_18;
  }
LABEL_19:
  v17 = firstChain;
  while ( 1 )
  {
    v18 = numChains;
    if ( !numChains )
      break;
    Pages = this->PendingEnds.Pages;
    v20 = vertex;
    --numChains;
    v21 = (unsigned __int64)v17 >> 4;
    v22 = v17++ & 0xF;
    firstChain = v17;
    v23 = &Pages[v21][v22];
    if ( v18 == 1 )
      vertex = vertexRight;
    else
      vertex = Pages[(unsigned __int64)v17 >> 4][v17 & 0xF].vertex;
    v24 = v23->monotone;
    if ( v24 )
      v25 = v24->style;
    else
      v25 = 0;
    if ( v20 != vertex )
    {
      if ( v25 == style && v24 )
        goto LABEL_51;
      started = Scaleform::Render::Tessellator::startMonotone(this, style);
      v23->monotone = started;
      v27 = started;
      if ( v20 != -1 )
      {
        v28 = v20 | 0x80000000;
        v49.next = 0i64;
        v49.srcVer = v28;
        v49.aaVer = v28;
        if ( started->start )
        {
          v31 = &this->MonoVertices.Pages[(unsigned __int64)started->d.m.lastIdx >> 4][started->d.m.lastIdx & 0xF];
          if ( v31->srcVer == v28 )
            goto LABEL_40;
          v32 = this->MonoVertices.Size >> 4;
          if ( v32 >= this->MonoVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
          this->MonoVertices.Pages[v32][this->MonoVertices.Size & 0xF] = v49;
          v31->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          v27->d.m.prevIdx2 = v27->d.m.prevIdx1;
          v27->d.m.prevIdx1 = v27->d.m.lastIdx;
          v30 = LODWORD(this->MonoVertices.Size) - 1;
        }
        else
        {
          v29 = this->MonoVertices.Size >> 4;
          if ( v29 >= this->MonoVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
          this->MonoVertices.Pages[v29][this->MonoVertices.Size & 0xF] = v49;
          v27->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          *(_QWORD *)&v27->d.t.numTriangles = -1i64;
          v30 = LODWORD(this->MonoVertices.Size) - 1;
        }
        v27->d.m.lastIdx = v30;
      }
LABEL_40:
      if ( vertex != -1 )
      {
        HIDWORD(v50.next) = 0;
        v50.srcVer = vertex & 0x7FFFFFFF;
        *(_QWORD *)&v50.aaVer = vertex & 0x7FFFFFFF;
        if ( !v27->start )
        {
          v33 = this->MonoVertices.Size >> 4;
          if ( v33 >= this->MonoVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
          this->MonoVertices.Pages[v33][this->MonoVertices.Size & 0xF] = v50;
          v27->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          *(_QWORD *)&v27->d.t.numTriangles = -1i64;
LABEL_49:
          v27->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
          goto LABEL_50;
        }
        v34 = &this->MonoVertices.Pages[(unsigned __int64)v27->d.m.lastIdx >> 4][v27->d.m.lastIdx & 0xF];
        if ( v34->srcVer != (vertex & 0x7FFFFFFF) )
        {
          v35 = this->MonoVertices.Size >> 4;
          if ( v35 >= this->MonoVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
          this->MonoVertices.Pages[v35][this->MonoVertices.Size & 0xF] = v50;
          v34->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          v27->d.m.prevIdx2 = v27->d.m.prevIdx1;
          v27->d.m.prevIdx1 = v27->d.m.lastIdx;
          goto LABEL_49;
        }
      }
LABEL_50:
      v17 = firstChain;
      targetVertex = v55;
LABEL_51:
      v36 = v23->monotone;
      if ( targetVertex != -1 )
      {
        HIDWORD(v51.next) = 0;
        v51.srcVer = targetVertex | 0x80000000;
        *(_QWORD *)&v51.aaVer = targetVertex | 0x80000000;
        if ( !v36->start )
        {
          v37 = this->MonoVertices.Size >> 4;
          if ( v37 >= this->MonoVertices.NumPages )
          {
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
            targetVertex = v55;
          }
          this->MonoVertices.Pages[v37][this->MonoVertices.Size & 0xF] = v51;
          v36->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          *(_QWORD *)&v36->d.t.numTriangles = -1i64;
LABEL_60:
          v36->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
          goto LABEL_61;
        }
        v38 = &this->MonoVertices.Pages[(unsigned __int64)v36->d.m.lastIdx >> 4][v36->d.m.lastIdx & 0xF];
        if ( v38->srcVer != (targetVertex | 0x80000000) )
        {
          v39 = this->MonoVertices.Size >> 4;
          if ( v39 >= this->MonoVertices.NumPages )
          {
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
            targetVertex = v55;
          }
          this->MonoVertices.Pages[v39][this->MonoVertices.Size & 0xF] = v51;
          v38->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          v36->d.m.prevIdx2 = v36->d.m.prevIdx1;
          v36->d.m.prevIdx1 = v36->d.m.lastIdx;
          goto LABEL_60;
        }
LABEL_61:
        HIDWORD(v52.next) = 0;
        v52.srcVer = targetVertex & 0x7FFFFFFF;
        *(_QWORD *)&v52.aaVer = targetVertex & 0x7FFFFFFF;
        if ( !v36->start )
        {
          v40 = this->MonoVertices.Size >> 4;
          if ( v40 >= this->MonoVertices.NumPages )
          {
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
            targetVertex = v55;
          }
          this->MonoVertices.Pages[v40][this->MonoVertices.Size & 0xF] = v52;
          v36->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          *(_QWORD *)&v36->d.t.numTriangles = -1i64;
          v36->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
          goto LABEL_19;
        }
        v17 = firstChain;
        v41 = &this->MonoVertices.Pages[(unsigned __int64)v36->d.m.lastIdx >> 4][v36->d.m.lastIdx & 0xF];
        if ( v41->srcVer != (targetVertex & 0x7FFFFFFF) )
        {
          v42 = this->MonoVertices.Size >> 4;
          if ( v42 >= this->MonoVertices.NumPages )
          {
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
            targetVertex = v55;
          }
          this->MonoVertices.Pages[v42][this->MonoVertices.Size & 0xF] = v52;
          v41->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          v36->d.m.prevIdx2 = v36->d.m.prevIdx1;
          v36->d.m.prevIdx1 = v36->d.m.lastIdx;
          v36->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
          goto LABEL_19;
        }
      }
    }
  }
  if ( v46 == &this->BaseLines.Pages[(this->BaseLines.Size - 1) >> 4][(LODWORD(this->BaseLines.Size) - 1) & 0xF] )
  {
    v43 = v46->firstChain;
    if ( v43 < this->PendingEnds.Size )
      this->PendingEnds.Size = v43;
    Size = this->BaseLines.Size;
    if ( Size )
      this->BaseLines.Size = Size - 1;
  }
}

void __fastcall Scaleform::Render::Tessellator::connectStarting(
        Scaleform::Render::Tessellator *this,
        Scaleform::Render::Tessellator::ScanChainType *scan,
        Scaleform::Render::Tessellator::BaseLineType *upperBase)
{
  Scaleform::Render::Tessellator::MonotoneType *monotone; // rax
  unsigned __int64 lastIdx; // rcx
  signed int srcVer; // ebx
  unsigned int i; // er14
  Scaleform::Render::Tessellator::MonotoneType *v10; // rax
  unsigned __int64 v11; // rcx
  unsigned int vertexRight; // eax
  Scaleform::Render::Tessellator::MonotoneType *v13; // r12
  Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType,4,16> *p_MonoVertices; // r14
  unsigned __int64 v15; // r15
  unsigned int vertexLeft; // eax
  Scaleform::Render::Tessellator::MonoVertexType *v17; // r14
  unsigned __int64 v18; // r15
  Scaleform::Render::Tessellator::MonoVertexType v19; // [rsp+20h] [rbp-38h]

  if ( !scan )
    goto LABEL_36;
  monotone = scan->monotone;
  if ( !monotone )
    goto LABEL_36;
  lastIdx = monotone->d.m.lastIdx;
  if ( (_DWORD)lastIdx == -1 )
    srcVer = -1;
  else
    srcVer = this->MonoVertices.Pages[lastIdx >> 4][monotone->d.m.lastIdx & 0xF].srcVer;
  *(_QWORD *)&upperBase->vertexLeft = -1i64;
  for ( i = 0; i < 2; ++i )
  {
    if ( srcVer == -1
      || upperBase->y > this->MeshVertices.Pages[(unsigned __int64)(srcVer & 0xFFFFFFF) >> 4][srcVer & 0xF].y )
    {
      break;
    }
    if ( srcVer >= 0 )
      upperBase->vertexRight = srcVer;
    else
      upperBase->vertexLeft = srcVer & 0xFFFFFFF;
    Scaleform::Render::Tessellator::removeLastMonoVertex(this, scan->monotone);
    v10 = scan->monotone;
    v11 = v10->d.m.lastIdx;
    srcVer = (_DWORD)v11 == -1 ? -1 : this->MonoVertices.Pages[v11 >> 4][v10->d.m.lastIdx & 0xF].srcVer;
  }
  if ( scan->monotone->lowerBase )
  {
    Scaleform::Render::Tessellator::connectStartingToPending(this, scan, upperBase);
    return;
  }
  if ( srcVer == -1 )
  {
    vertexRight = upperBase->vertexRight;
    if ( vertexRight == -1 )
    {
      vertexLeft = upperBase->vertexLeft;
      if ( vertexLeft == -1 )
        goto LABEL_34;
      upperBase->vertexLeft = -1;
      srcVer = vertexLeft;
      v13 = scan->monotone;
      v19.next = 0i64;
      v19.srcVer = vertexLeft;
      v19.aaVer = vertexLeft;
      if ( !v13->start )
      {
        p_MonoVertices = &this->MonoVertices;
        v15 = this->MonoVertices.Size >> 4;
        if ( v15 >= this->MonoVertices.NumPages )
        {
          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
            this->MonoVertices.Size >> 4);
          this->MonoVertices.Pages[v15][this->MonoVertices.Size & 0xF] = v19;
          v13->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          *(_QWORD *)&v13->d.t.numTriangles = -1i64;
          goto LABEL_32;
        }
LABEL_23:
        p_MonoVertices->Pages[v15][p_MonoVertices->Size & 0xF] = v19;
        v13->start = &p_MonoVertices->Pages[p_MonoVertices->Size++ >> 4][(LODWORD(p_MonoVertices->Size) - 1) & 0xF];
        *(_QWORD *)&v13->d.t.numTriangles = -1i64;
LABEL_32:
        v13->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
        goto LABEL_33;
      }
    }
    else
    {
      upperBase->vertexRight = -1;
      srcVer = vertexRight;
      v13 = scan->monotone;
      v19.next = 0i64;
      v19.srcVer = vertexRight;
      v19.aaVer = vertexRight;
      if ( !v13->start )
      {
        p_MonoVertices = &this->MonoVertices;
        v15 = this->MonoVertices.Size >> 4;
        if ( v15 >= this->MonoVertices.NumPages )
          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
            this->MonoVertices.Size >> 4);
        goto LABEL_23;
      }
    }
    v17 = &this->MonoVertices.Pages[(unsigned __int64)v13->d.m.lastIdx >> 4][v13->d.m.lastIdx & 0xF];
    if ( v17->srcVer == srcVer )
      goto LABEL_33;
    v18 = this->MonoVertices.Size >> 4;
    if ( v18 >= this->MonoVertices.NumPages )
      Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
        (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
        this->MonoVertices.Size >> 4);
    this->MonoVertices.Pages[v18][this->MonoVertices.Size & 0xF] = v19;
    v17->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
    v13->d.m.prevIdx2 = v13->d.m.prevIdx1;
    v13->d.m.prevIdx1 = v13->d.m.lastIdx;
    goto LABEL_32;
  }
LABEL_33:
  if ( srcVer >= 0 )
  {
    Scaleform::Render::Tessellator::connectStartingToRight(this, scan, upperBase, srcVer);
    goto LABEL_36;
  }
LABEL_34:
  Scaleform::Render::Tessellator::connectStartingToLeft(this, scan, upperBase, srcVer & 0xFFFFFFF);
LABEL_36:
  upperBase->numChains = 0;
}

void __fastcall Scaleform::Render::Tessellator::connectStartingToLeft(
        Scaleform::Render::Tessellator *this,
        Scaleform::Render::Tessellator::ScanChainType *scan,
        Scaleform::Render::Tessellator::BaseLineType *upperBase,
        unsigned int targetVertex)
{
  unsigned __int64 leftAbove; // rax
  Scaleform::Render::Tessellator::ScanChainType *v5; // rdi
  unsigned int numChains; // er14
  unsigned int vertexLeft; // er13
  unsigned int vertex; // er15
  unsigned int v10; // esi
  Scaleform::Render::Tessellator::MonotoneType *started; // r12
  Scaleform::Render::Tessellator::MonotoneType *monotone; // rcx
  unsigned int i; // ecx
  Scaleform::Render::Tessellator::MonotoneType *v14; // rax
  unsigned int v15; // er8
  Scaleform::Render::Tessellator::MonotoneType *v16; // rsi
  unsigned __int64 v17; // r15
  Scaleform::Render::Tessellator::MonoVertexType *v18; // r14
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // r15
  Scaleform::Render::Tessellator::MonoVertexType *v21; // r14
  unsigned __int64 v22; // r15
  Scaleform::Render::Tessellator::MonotoneType *v23; // rsi
  unsigned __int64 v24; // r15
  Scaleform::Render::Tessellator::MonoVertexType *v25; // r14
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // r15
  Scaleform::Render::Tessellator::ScanChainType **Pages; // r8
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  Scaleform::Render::Tessellator::MonoVertexType *v32; // r14
  unsigned __int64 v33; // r12
  unsigned __int64 v34; // r14
  Scaleform::Render::Tessellator::MonoVertexType *v35; // rsi
  unsigned __int64 v36; // r15
  Scaleform::Render::Tessellator::MonoVertexType *v37; // rax
  unsigned __int64 v38; // r14
  Scaleform::Render::Tessellator::MonoVertexType *v39; // rsi
  unsigned __int64 v40; // r15
  Scaleform::Render::Tessellator::MonotoneType *v41; // rax
  Scaleform::Render::Tessellator::MonotoneType *v42; // rax
  Scaleform::Render::Tessellator::MonotoneType *v43; // rcx
  __int128 v44; // xmm1
  Scaleform::Render::Tessellator::MonotoneType *v45; // rdi
  unsigned int v46; // er13
  unsigned __int64 v47; // r14
  Scaleform::Render::Tessellator::MonoVertexType *v48; // rsi
  unsigned __int64 v49; // r15
  unsigned __int64 v50; // r14
  Scaleform::Render::Tessellator::MonoVertexType *v51; // rsi
  unsigned __int64 v52; // r15
  unsigned int v53; // [rsp+20h] [rbp-99h]
  unsigned int v54; // [rsp+24h] [rbp-95h]
  unsigned int v55; // [rsp+28h] [rbp-91h]
  Scaleform::Render::Tessellator::MonotoneType *v56; // [rsp+30h] [rbp-89h]
  unsigned int vertexRight; // [rsp+38h] [rbp-81h]
  Scaleform::Render::Tessellator::ScanChainType *v58; // [rsp+40h] [rbp-79h]
  unsigned int firstChain; // [rsp+48h] [rbp-71h]
  Scaleform::Render::Tessellator::MonoVertexType v60; // [rsp+50h] [rbp-69h]
  Scaleform::Render::Tessellator::MonoVertexType v61; // [rsp+60h] [rbp-59h]
  Scaleform::Render::Tessellator::MonoVertexType v62; // [rsp+70h] [rbp-49h]
  Scaleform::Render::Tessellator::MonoVertexType v63; // [rsp+80h] [rbp-39h]
  Scaleform::Render::Tessellator::MonoVertexType v64; // [rsp+90h] [rbp-29h]
  Scaleform::Render::Tessellator::MonoVertexType v65; // [rsp+A0h] [rbp-19h]
  Scaleform::Render::Tessellator::MonoVertexType v66; // [rsp+B0h] [rbp-9h]
  Scaleform::Render::Tessellator::MonoVertexType v67; // [rsp+C0h] [rbp+7h]
  char v68; // [rsp+120h] [rbp+67h]
  unsigned int style; // [rsp+128h] [rbp+6Fh]

  leftAbove = upperBase->leftAbove;
  v5 = scan;
  if ( (_DWORD)leftAbove == -1 )
    v58 = scan;
  else
    v58 = &this->ChainsAbove.Pages[leftAbove >> 4][leftAbove & 0xF];
  numChains = upperBase->numChains;
  vertexLeft = upperBase->vertexLeft;
  firstChain = upperBase->firstChain;
  vertexRight = upperBase->vertexRight;
  v54 = numChains;
  v68 = 1;
  vertex = this->ChainsAbove.Pages[(unsigned __int64)firstChain >> 4][firstChain & 0xF].vertex;
  style = upperBase->styleLeft;
  v53 = vertex;
  v10 = scan->monotone->style;
  v55 = v10;
  started = Scaleform::Render::Tessellator::startMonotone(this, 0);
  v56 = started;
  *started = *v5->monotone;
  monotone = v5->monotone;
  monotone->start = 0i64;
  *(_QWORD *)&monotone->d.m.lastIdx = -1i64;
  monotone->d.m.prevIdx2 = -1;
  monotone->style = v10;
  monotone->lowerBase = 0i64;
  for ( i = style; ; style = i )
  {
    if ( !numChains )
    {
      v5->monotone = started;
      if ( vertexLeft == -1 )
        goto LABEL_73;
      HIDWORD(v64.next) = 0;
      v64.srcVer = vertexLeft | 0x80000000;
      *(_QWORD *)&v64.aaVer = vertexLeft | 0x80000000;
      if ( started->start )
      {
        v35 = &this->MonoVertices.Pages[(unsigned __int64)started->d.m.lastIdx >> 4][started->d.m.lastIdx & 0xF];
        if ( v35->srcVer == (vertexLeft | 0x80000000) )
          goto LABEL_73;
        v36 = this->MonoVertices.Size >> 4;
        if ( v36 >= this->MonoVertices.NumPages )
          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
            this->MonoVertices.Size >> 4);
        v37 = this->MonoVertices.Pages[v36];
        vertex = v53;
        v37[this->MonoVertices.Size & 0xF] = v64;
        v35->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
        started->d.m.prevIdx2 = started->d.m.prevIdx1;
        started->d.m.prevIdx1 = started->d.m.lastIdx;
      }
      else
      {
        v34 = this->MonoVertices.Size >> 4;
        if ( v34 >= this->MonoVertices.NumPages )
          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
            this->MonoVertices.Size >> 4);
        this->MonoVertices.Pages[v34][this->MonoVertices.Size & 0xF] = v64;
        started->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
        *(_QWORD *)&started->d.t.numTriangles = -1i64;
      }
      started->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
LABEL_73:
      if ( vertex != -1 )
      {
        HIDWORD(v65.next) = 0;
        v65.srcVer = vertex & 0x7FFFFFFF;
        *(_QWORD *)&v65.aaVer = vertex & 0x7FFFFFFF;
        if ( started->start )
        {
          v39 = &this->MonoVertices.Pages[(unsigned __int64)started->d.m.lastIdx >> 4][started->d.m.lastIdx & 0xF];
          if ( v39->srcVer != (vertex & 0x7FFFFFFF) )
          {
            v40 = this->MonoVertices.Size >> 4;
            if ( v40 >= this->MonoVertices.NumPages )
              Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                this->MonoVertices.Size >> 4);
            this->MonoVertices.Pages[v40][this->MonoVertices.Size & 0xF] = v65;
            v39->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
            started->d.m.prevIdx2 = started->d.m.prevIdx1;
            started->d.m.prevIdx1 = started->d.m.lastIdx;
            started->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
          }
        }
        else
        {
          v38 = this->MonoVertices.Size >> 4;
          if ( v38 >= this->MonoVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
          this->MonoVertices.Pages[v38][this->MonoVertices.Size & 0xF] = v65;
          started->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size)
                                                                                    - 1) & 0xF];
          *(_QWORD *)&started->d.t.numTriangles = -1i64;
          started->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
        }
      }
      goto LABEL_50;
    }
    if ( vertexLeft != vertex )
    {
      if ( v10 )
      {
        v14 = v5->monotone;
        if ( v14 )
        {
          if ( v14->style != v10 && v14->start )
          {
            *Scaleform::Render::Tessellator::startMonotone(this, v10) = *v5->monotone;
            v14 = v5->monotone;
            v14->start = 0i64;
            *(_QWORD *)&v14->d.m.lastIdx = -1i64;
            v14->d.m.prevIdx2 = -1;
            v14->lowerBase = 0i64;
          }
          v14->style = v10;
        }
        else
        {
          v5->monotone = Scaleform::Render::Tessellator::startMonotone(this, v10);
        }
      }
      v15 = targetVertex;
      v16 = v5->monotone;
      if ( targetVertex == -1 )
        goto LABEL_33;
      HIDWORD(v60.next) = 0;
      v60.srcVer = targetVertex | 0x80000000;
      *(_QWORD *)&v60.aaVer = targetVertex | 0x80000000;
      if ( v16->start )
      {
        v18 = &this->MonoVertices.Pages[(unsigned __int64)v16->d.m.lastIdx >> 4][v16->d.m.lastIdx & 0xF];
        if ( v18->srcVer == (targetVertex | 0x80000000) )
        {
LABEL_24:
          HIDWORD(v61.next) = 0;
          v61.srcVer = v15 & 0x7FFFFFFF;
          *(_QWORD *)&v61.aaVer = v15 & 0x7FFFFFFF;
          if ( v16->start )
          {
            v21 = &this->MonoVertices.Pages[(unsigned __int64)v16->d.m.lastIdx >> 4][v16->d.m.lastIdx & 0xF];
            if ( v21->srcVer == (v15 & 0x7FFFFFFF) )
              goto LABEL_33;
            v22 = this->MonoVertices.Size >> 4;
            if ( v22 >= this->MonoVertices.NumPages )
              Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                this->MonoVertices.Size >> 4);
            this->MonoVertices.Pages[v22][this->MonoVertices.Size & 0xF] = v61;
            v21->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
            v16->d.m.prevIdx2 = v16->d.m.prevIdx1;
            v16->d.m.prevIdx1 = v16->d.m.lastIdx;
          }
          else
          {
            v20 = this->MonoVertices.Size >> 4;
            if ( v20 >= this->MonoVertices.NumPages )
              Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                this->MonoVertices.Size >> 4);
            this->MonoVertices.Pages[v20][this->MonoVertices.Size & 0xF] = v61;
            v16->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
            *(_QWORD *)&v16->d.t.numTriangles = -1i64;
          }
          v16->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
LABEL_33:
          v23 = v5->monotone;
          if ( vertexLeft == -1 )
            goto LABEL_43;
          HIDWORD(v62.next) = 0;
          v62.srcVer = vertexLeft | 0x80000000;
          *(_QWORD *)&v62.aaVer = vertexLeft | 0x80000000;
          if ( v23->start )
          {
            v25 = &this->MonoVertices.Pages[(unsigned __int64)v23->d.m.lastIdx >> 4][v23->d.m.lastIdx & 0xF];
            if ( v25->srcVer == (vertexLeft | 0x80000000) )
              goto LABEL_43;
            v26 = this->MonoVertices.Size >> 4;
            if ( v26 >= this->MonoVertices.NumPages )
              Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                this->MonoVertices.Size >> 4);
            this->MonoVertices.Pages[v26][this->MonoVertices.Size & 0xF] = v62;
            v25->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
            v23->d.m.prevIdx2 = v23->d.m.prevIdx1;
            v23->d.m.prevIdx1 = v23->d.m.lastIdx;
          }
          else
          {
            v24 = this->MonoVertices.Size >> 4;
            if ( v24 >= this->MonoVertices.NumPages )
              Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                this->MonoVertices.Size >> 4);
            this->MonoVertices.Pages[v24][this->MonoVertices.Size & 0xF] = v62;
            v23->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
            *(_QWORD *)&v23->d.t.numTriangles = -1i64;
          }
          v23->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
LABEL_43:
          if ( v53 != -1 )
          {
            HIDWORD(v63.next) = 0;
            v63.srcVer = v53 & 0x7FFFFFFF;
            *(_QWORD *)&v63.aaVer = v53 & 0x7FFFFFFF;
            if ( v23->start )
            {
              v32 = &this->MonoVertices.Pages[(unsigned __int64)v23->d.m.lastIdx >> 4][v23->d.m.lastIdx & 0xF];
              if ( v32->srcVer == (v53 & 0x7FFFFFFF) )
                goto LABEL_49;
              v33 = this->MonoVertices.Size >> 4;
              if ( v33 >= this->MonoVertices.NumPages )
                Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                  (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                  this->MonoVertices.Size >> 4);
              this->MonoVertices.Pages[v33][this->MonoVertices.Size & 0xF] = v63;
              v32->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
              v23->d.m.prevIdx2 = v23->d.m.prevIdx1;
              v23->d.m.prevIdx1 = v23->d.m.lastIdx;
            }
            else
            {
              v27 = this->MonoVertices.Size >> 4;
              if ( v27 >= this->MonoVertices.NumPages )
                Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                  (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                  this->MonoVertices.Size >> 4);
              this->MonoVertices.Pages[v27][this->MonoVertices.Size & 0xF] = v63;
              v23->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size)
                                                                                    - 1) & 0xF];
              *(_QWORD *)&v23->d.t.numTriangles = -1i64;
            }
            v23->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
          }
LABEL_49:
          started = v56;
LABEL_50:
          i = style;
          goto LABEL_51;
        }
        v19 = this->MonoVertices.Size >> 4;
        if ( v19 >= this->MonoVertices.NumPages )
        {
          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
            this->MonoVertices.Size >> 4);
          v15 = targetVertex;
        }
        this->MonoVertices.Pages[v19][this->MonoVertices.Size & 0xF] = v60;
        v18->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
        v16->d.m.prevIdx2 = v16->d.m.prevIdx1;
        v16->d.m.prevIdx1 = v16->d.m.lastIdx;
      }
      else
      {
        v17 = this->MonoVertices.Size >> 4;
        if ( v17 >= this->MonoVertices.NumPages )
        {
          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
            this->MonoVertices.Size >> 4);
          v15 = targetVertex;
        }
        this->MonoVertices.Pages[v17][this->MonoVertices.Size & 0xF] = v60;
        v16->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
        *(_QWORD *)&v16->d.t.numTriangles = -1i64;
      }
      v16->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
      goto LABEL_24;
    }
LABEL_51:
    if ( i == v55 && v5->monotone )
      goto LABEL_55;
    if ( !i )
    {
      v5->monotone = 0i64;
LABEL_55:
      vertexLeft = v53;
      goto LABEL_56;
    }
    if ( v68 )
      v5 = v58;
    v41 = v5->monotone;
    if ( v41 )
    {
      if ( v41->style != i && v41->start )
      {
        v42 = Scaleform::Render::Tessellator::startMonotone(this, i);
        v43 = v5->monotone;
        *(_OWORD *)&v42->start = *(_OWORD *)&v43->start;
        v44 = *(_OWORD *)&v43->d.t.meshIdx;
        i = style;
        *(_OWORD *)&v42->d.t.meshIdx = v44;
        v41 = v5->monotone;
        v41->start = 0i64;
        *(_QWORD *)&v41->d.m.lastIdx = -1i64;
        v41->d.m.prevIdx2 = -1;
        v41->lowerBase = 0i64;
      }
      v41->style = i;
    }
    else
    {
      v5->monotone = Scaleform::Render::Tessellator::startMonotone(this, i);
    }
    v45 = v5->monotone;
    if ( vertexLeft != -1 )
    {
      v46 = vertexLeft | 0x80000000;
      v66.next = 0i64;
      v66.srcVer = v46;
      v66.aaVer = v46;
      if ( v45->start )
      {
        v48 = &this->MonoVertices.Pages[(unsigned __int64)v45->d.m.lastIdx >> 4][v45->d.m.lastIdx & 0xF];
        if ( v48->srcVer == v46 )
          goto LABEL_100;
        v49 = this->MonoVertices.Size >> 4;
        if ( v49 >= this->MonoVertices.NumPages )
          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
            this->MonoVertices.Size >> 4);
        this->MonoVertices.Pages[v49][this->MonoVertices.Size & 0xF] = v66;
        v48->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
        v45->d.m.prevIdx2 = v45->d.m.prevIdx1;
        v45->d.m.prevIdx1 = v45->d.m.lastIdx;
      }
      else
      {
        v47 = this->MonoVertices.Size >> 4;
        if ( v47 >= this->MonoVertices.NumPages )
          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
            this->MonoVertices.Size >> 4);
        this->MonoVertices.Pages[v47][this->MonoVertices.Size & 0xF] = v66;
        v45->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
        *(_QWORD *)&v45->d.t.numTriangles = -1i64;
      }
      v45->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
    }
LABEL_100:
    vertexLeft = v53;
    if ( v53 != -1 )
    {
      HIDWORD(v67.next) = 0;
      v67.srcVer = v53 & 0x7FFFFFFF;
      *(_QWORD *)&v67.aaVer = v53 & 0x7FFFFFFF;
      if ( v45->start )
      {
        v51 = &this->MonoVertices.Pages[(unsigned __int64)v45->d.m.lastIdx >> 4][v45->d.m.lastIdx & 0xF];
        if ( v51->srcVer != (v53 & 0x7FFFFFFF) )
        {
          v52 = this->MonoVertices.Size >> 4;
          if ( v52 >= this->MonoVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
          this->MonoVertices.Pages[v52][this->MonoVertices.Size & 0xF] = v67;
          v51->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          v45->d.m.prevIdx2 = v45->d.m.prevIdx1;
          v45->d.m.prevIdx1 = v45->d.m.lastIdx;
          v45->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
        }
      }
      else
      {
        v50 = this->MonoVertices.Size >> 4;
        if ( v50 >= this->MonoVertices.NumPages )
          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
            this->MonoVertices.Size >> 4);
        this->MonoVertices.Pages[v50][this->MonoVertices.Size & 0xF] = v67;
        v45->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
        *(_QWORD *)&v45->d.t.numTriangles = -1i64;
        v45->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
      }
    }
LABEL_56:
    v68 = 0;
    if ( !v54 )
      break;
    numChains = v54 - 1;
    Pages = this->ChainsAbove.Pages;
    v29 = firstChain + 1;
    v54 = numChains;
    v30 = (unsigned __int64)firstChain >> 4;
    v31 = firstChain++ & 0xF;
    v5 = &Pages[v30][v31];
    if ( numChains )
      vertex = Pages[v29 >> 4][v29 & 0xF].vertex;
    else
      vertex = vertexRight;
    v10 = v55;
    v53 = vertex;
    i = v5->chain->rightAbove;
  }
  upperBase->numChains = 0;
}

void __fastcall Scaleform::Render::Tessellator::connectStartingToPending(
        Scaleform::Render::Tessellator *this,
        Scaleform::Render::Tessellator::ScanChainType *scan,
        Scaleform::Render::Tessellator::BaseLineType *upperBase)
{
  Scaleform::Render::Tessellator::MonotoneType *monotone; // rax
  Scaleform::Render::Tessellator::PendingEndType *p_pe; // r13
  Scaleform::Render::Tessellator::ScanChainType *v7; // rdi
  Scaleform::Render::Tessellator::BaseLineType *lowerBase; // r8
  unsigned int v9; // er11
  unsigned int vertexLeft; // esi
  unsigned int firstChain; // ecx
  unsigned int numChains; // er9
  unsigned int styleLeft; // er10
  Scaleform::Render::Tessellator::PendingEndType **Pages; // rax
  unsigned int vertex; // er15
  unsigned int v16; // ecx
  unsigned int rightAbove; // er14
  unsigned int v18; // er12
  int v19; // eax
  unsigned int v20; // er8
  Scaleform::Render::Tessellator::MonotoneType *v21; // rdi
  unsigned __int64 v22; // r14
  Scaleform::Render::Tessellator::MonoVertexType *v23; // rsi
  unsigned __int64 v24; // r15
  Scaleform::Render::Tessellator::MonoVertexType *v25; // rax
  unsigned __int64 v26; // r14
  Scaleform::Render::Tessellator::MonoVertexType *v27; // rsi
  unsigned __int64 v28; // r15
  Scaleform::Render::Tessellator::MonotoneType *v29; // rdi
  unsigned __int64 v30; // r14
  Scaleform::Render::Tessellator::MonoVertexType *v31; // rsi
  unsigned __int64 v32; // r15
  unsigned __int64 v33; // r14
  Scaleform::Render::Tessellator::MonoVertexType *v34; // rsi
  unsigned __int64 v35; // r15
  Scaleform::Render::Tessellator::MonotoneType *v36; // rax
  Scaleform::Render::Tessellator::MonotoneType *v37; // rdi
  unsigned int v38; // edx
  unsigned __int64 v39; // r14
  Scaleform::Render::Tessellator::MonoVertexType *v40; // rsi
  unsigned __int64 v41; // r15
  unsigned __int64 v42; // r14
  Scaleform::Render::Tessellator::MonoVertexType *v43; // rsi
  unsigned __int64 v44; // r15
  Scaleform::Render::Tessellator::PendingEndType **v45; // rdx
  unsigned int v46; // er10
  unsigned __int64 v47; // rax
  __int64 v48; // r13
  unsigned int v49; // eax
  Scaleform::Render::Tessellator::MonotoneType *v50; // rax
  unsigned int v51; // edx
  Scaleform::Render::Tessellator::ScanChainType **v52; // r8
  unsigned int v53; // er14
  unsigned __int64 v54; // rax
  __int64 v55; // rcx
  unsigned int v56; // er15
  unsigned int v57; // er14
  Scaleform::Render::Tessellator::MonotoneType *started; // r10
  Scaleform::Render::Tessellator::PendingEndType **v59; // rdx
  unsigned int v60; // eax
  unsigned int v61; // er11
  Scaleform::Render::Tessellator::ScanChainType **v62; // r8
  unsigned int v63; // er9
  unsigned __int64 v64; // rax
  __int64 v65; // rcx
  Scaleform::Render::Tessellator::ScanChainType *v66; // rsi
  unsigned int v67; // edx
  unsigned int v68; // edi
  Scaleform::Render::Tessellator::MonotoneType *v69; // rax
  Scaleform::Render::Tessellator::MonotoneType *v70; // rcx
  Scaleform::Render::Tessellator::MonotoneType *v71; // rax
  Scaleform::Render::Tessellator::MonotoneType *v72; // rdi
  unsigned __int64 v73; // r15
  Scaleform::Render::Tessellator::MonoVertexType *v74; // r14
  unsigned __int64 v75; // r12
  Scaleform::Render::Tessellator::MonoVertexType *v76; // rax
  unsigned __int64 v77; // r15
  Scaleform::Render::Tessellator::MonoVertexType *v78; // r14
  unsigned __int64 v79; // r12
  Scaleform::Render::Tessellator::MonoVertexType *v80; // rax
  Scaleform::Render::Tessellator::MonotoneType *v81; // rdi
  unsigned __int64 v82; // r15
  Scaleform::Render::Tessellator::MonoVertexType *v83; // r14
  unsigned __int64 v84; // r12
  Scaleform::Render::Tessellator::MonoVertexType *v85; // rax
  unsigned int v86; // er13
  Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType,4,16> *p_MonoVertices; // r14
  unsigned __int64 v88; // r15
  __int128 v89; // xmm0
  Scaleform::Render::Tessellator::MonoVertexType *v90; // r14
  Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType,4,16> *v91; // r15
  unsigned __int64 v92; // r12
  __int128 v93; // xmm0
  Scaleform::Render::Tessellator::MonotoneType *v94; // rax
  Scaleform::Render::Tessellator::MonotoneType *v95; // rdi
  unsigned int v96; // edx
  unsigned __int64 v97; // r15
  Scaleform::Render::Tessellator::MonoVertexType *v98; // r14
  unsigned __int64 v99; // r12
  Scaleform::Render::Tessellator::MonoVertexType *v100; // rax
  unsigned __int64 v101; // r15
  Scaleform::Render::Tessellator::MonoVertexType *v102; // r14
  unsigned __int64 v103; // r12
  Scaleform::Render::Tessellator::MonoVertexType *v104; // rax
  unsigned __int64 v105; // r15
  Scaleform::Render::Tessellator::MonoVertexType *v106; // r14
  unsigned __int64 v107; // r12
  Scaleform::Render::Tessellator::MonoVertexType *v108; // rax
  bool v109; // zf
  Scaleform::Render::Tessellator::MonoVertexType *v110; // rax
  unsigned int v111; // ecx
  Scaleform::Render::Tessellator::MonotoneType *v112; // rax
  Scaleform::Render::Tessellator::MonotoneType *v113; // rax
  Scaleform::Render::Tessellator::MonotoneType *v114; // rcx
  __int128 v115; // xmm1
  Scaleform::Render::Tessellator::MonotoneType *v116; // rdi
  unsigned int v117; // er12
  unsigned __int64 v118; // r14
  Scaleform::Render::Tessellator::MonoVertexType *v119; // rsi
  unsigned __int64 v120; // r15
  unsigned __int64 v121; // r14
  Scaleform::Render::Tessellator::MonoVertexType *v122; // rsi
  unsigned __int64 v123; // r15
  Scaleform::Render::Tessellator::ScanChainType **v124; // r8
  unsigned int v125; // er9
  unsigned __int64 v126; // rax
  __int64 v127; // rcx
  unsigned int v128; // edx
  unsigned __int64 v129; // rax
  unsigned __int64 Size; // rax
  unsigned int v131; // [rsp+20h] [rbp-E0h]
  unsigned int v132; // [rsp+20h] [rbp-E0h]
  unsigned int v133; // [rsp+24h] [rbp-DCh]
  unsigned int v134; // [rsp+28h] [rbp-D8h]
  unsigned int v135; // [rsp+2Ch] [rbp-D4h]
  unsigned int v136; // [rsp+2Ch] [rbp-D4h]
  unsigned int v137; // [rsp+30h] [rbp-D0h]
  unsigned int v138; // [rsp+30h] [rbp-D0h]
  unsigned int v139; // [rsp+34h] [rbp-CCh]
  Scaleform::Render::Tessellator::ScanChainType *v140; // [rsp+38h] [rbp-C8h]
  Scaleform::Render::Tessellator::MonotoneType *v141; // [rsp+38h] [rbp-C8h]
  unsigned int v142; // [rsp+40h] [rbp-C0h]
  unsigned int v143; // [rsp+48h] [rbp-B8h]
  unsigned int v144; // [rsp+48h] [rbp-B8h]
  unsigned int vertexRight; // [rsp+50h] [rbp-B0h]
  Scaleform::Render::Tessellator::MonoVertexType v146; // [rsp+58h] [rbp-A8h]
  Scaleform::Render::Tessellator::MonoVertexType v147; // [rsp+58h] [rbp-A8h]
  Scaleform::Render::Tessellator::MonoVertexType v148; // [rsp+68h] [rbp-98h]
  Scaleform::Render::Tessellator::MonoVertexType v149; // [rsp+68h] [rbp-98h]
  Scaleform::Render::Tessellator::MonoVertexType v150; // [rsp+78h] [rbp-88h]
  __int128 v151; // [rsp+78h] [rbp-88h]
  Scaleform::Render::Tessellator::MonoVertexType v152; // [rsp+88h] [rbp-78h]
  Scaleform::Render::Tessellator::MonoVertexType v153; // [rsp+88h] [rbp-78h]
  Scaleform::Render::Tessellator::MonoVertexType v154; // [rsp+98h] [rbp-68h]
  Scaleform::Render::Tessellator::MonoVertexType v155; // [rsp+98h] [rbp-68h]
  Scaleform::Render::Tessellator::MonoVertexType v156; // [rsp+A8h] [rbp-58h]
  Scaleform::Render::Tessellator::MonoVertexType v157; // [rsp+A8h] [rbp-58h]
  unsigned int v158; // [rsp+B8h] [rbp-48h]
  Scaleform::Render::Tessellator::MonoVertexType v159; // [rsp+B8h] [rbp-48h]
  Scaleform::Render::Tessellator::PendingEndType pe; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v161; // [rsp+D8h] [rbp-28h]
  Scaleform::Render::Tessellator::MonoVertexType v162; // [rsp+E8h] [rbp-18h]
  Scaleform::Render::Tessellator::BaseLineType *v163; // [rsp+F8h] [rbp-8h]
  unsigned int style; // [rsp+150h] [rbp+50h]
  unsigned int v165; // [rsp+158h] [rbp+58h]
  unsigned int v166; // [rsp+158h] [rbp+58h]
  int v168; // [rsp+168h] [rbp+68h]
  unsigned int v169; // [rsp+168h] [rbp+68h]

  monotone = scan->monotone;
  p_pe = &pe;
  v140 = scan;
  v7 = scan;
  lowerBase = monotone->lowerBase;
  v9 = monotone->style;
  monotone->lowerBase = 0i64;
  vertexLeft = upperBase->vertexLeft;
  firstChain = lowerBase->firstChain;
  numChains = lowerBase->numChains;
  styleLeft = lowerBase->styleLeft;
  v134 = lowerBase->vertexLeft;
  pe.vertex = v134;
  pe.monotone = scan->monotone;
  vertexRight = lowerBase->vertexRight;
  Pages = this->PendingEnds.Pages;
  v158 = firstChain;
  v163 = lowerBase;
  style = v9;
  v131 = numChains;
  v137 = styleLeft;
  v139 = vertexLeft;
  vertex = Pages[(unsigned __int64)firstChain >> 4][firstChain & 0xF].vertex;
  v16 = upperBase->firstChain;
  v165 = upperBase->numChains;
  LODWORD(Pages) = upperBase->vertexRight;
  rightAbove = upperBase->styleLeft;
  v142 = (unsigned int)Pages;
  v143 = v16;
  v133 = vertex;
  v18 = this->ChainsAbove.Pages[(unsigned __int64)v16 >> 4][v16 & 0xF].vertex;
  v19 = numChains < v165;
  v168 = v19;
LABEL_2:
  v20 = v134;
  v135 = rightAbove;
  while ( 1 )
  {
    if ( (v20 != vertex || vertexLeft != -1 && v18 != -1)
      && (vertexLeft != v18 || v20 != -1 && vertex != -1)
      && (v20 != vertex || vertexLeft != v18) )
    {
      if ( styleLeft == v9 )
        goto LABEL_32;
      Scaleform::Render::Tessellator::replaceMonotone(this, p_pe, v9);
      v21 = p_pe->monotone;
      if ( v134 != -1 )
      {
        HIDWORD(v146.next) = 0;
        v146.srcVer = v134 | 0x80000000;
        *(_QWORD *)&v146.aaVer = v134 | 0x80000000;
        if ( v21->start )
        {
          v23 = &this->MonoVertices.Pages[(unsigned __int64)v21->d.m.lastIdx >> 4][v21->d.m.lastIdx & 0xF];
          if ( v23->srcVer == (v134 | 0x80000000) )
            goto LABEL_22;
          v24 = this->MonoVertices.Size >> 4;
          if ( v24 >= this->MonoVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
          v25 = this->MonoVertices.Pages[v24];
          vertex = v133;
          v25[this->MonoVertices.Size & 0xF] = v146;
          v23->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          v21->d.m.prevIdx2 = v21->d.m.prevIdx1;
          v21->d.m.prevIdx1 = v21->d.m.lastIdx;
        }
        else
        {
          v22 = this->MonoVertices.Size >> 4;
          if ( v22 >= this->MonoVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
          this->MonoVertices.Pages[v22][this->MonoVertices.Size & 0xF] = v146;
          v21->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          *(_QWORD *)&v21->d.t.numTriangles = -1i64;
        }
        v21->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
      }
LABEL_22:
      if ( vertex == -1 )
        goto LABEL_32;
      HIDWORD(v148.next) = 0;
      v148.srcVer = vertex & 0x7FFFFFFF;
      *(_QWORD *)&v148.aaVer = vertex & 0x7FFFFFFF;
      if ( v21->start )
      {
        v27 = &this->MonoVertices.Pages[(unsigned __int64)v21->d.m.lastIdx >> 4][v21->d.m.lastIdx & 0xF];
        if ( v27->srcVer == (vertex & 0x7FFFFFFF) )
          goto LABEL_32;
        v28 = this->MonoVertices.Size >> 4;
        if ( v28 >= this->MonoVertices.NumPages )
          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
            this->MonoVertices.Size >> 4);
        this->MonoVertices.Pages[v28][this->MonoVertices.Size & 0xF] = v148;
        v27->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
        v21->d.m.prevIdx2 = v21->d.m.prevIdx1;
        v21->d.m.prevIdx1 = v21->d.m.lastIdx;
      }
      else
      {
        v26 = this->MonoVertices.Size >> 4;
        if ( v26 >= this->MonoVertices.NumPages )
          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
            this->MonoVertices.Size >> 4);
        this->MonoVertices.Pages[v26][this->MonoVertices.Size & 0xF] = v148;
        v21->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
        *(_QWORD *)&v21->d.t.numTriangles = -1i64;
      }
      v21->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
LABEL_32:
      v29 = p_pe->monotone;
      if ( v139 == -1 )
        goto LABEL_42;
      HIDWORD(v150.next) = 0;
      v150.srcVer = v139 | 0x80000000;
      *(_QWORD *)&v150.aaVer = v139 | 0x80000000;
      if ( v29->start )
      {
        v31 = &this->MonoVertices.Pages[(unsigned __int64)v29->d.m.lastIdx >> 4][v29->d.m.lastIdx & 0xF];
        if ( v31->srcVer == (v139 | 0x80000000) )
          goto LABEL_42;
        v32 = this->MonoVertices.Size >> 4;
        if ( v32 >= this->MonoVertices.NumPages )
          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
            this->MonoVertices.Size >> 4);
        this->MonoVertices.Pages[v32][this->MonoVertices.Size & 0xF] = v150;
        v31->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
        v29->d.m.prevIdx2 = v29->d.m.prevIdx1;
        v29->d.m.prevIdx1 = v29->d.m.lastIdx;
      }
      else
      {
        v30 = this->MonoVertices.Size >> 4;
        if ( v30 >= this->MonoVertices.NumPages )
          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
            this->MonoVertices.Size >> 4);
        this->MonoVertices.Pages[v30][this->MonoVertices.Size & 0xF] = v150;
        v29->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
        *(_QWORD *)&v29->d.t.numTriangles = -1i64;
      }
      v29->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
LABEL_42:
      if ( v18 != -1 )
      {
        HIDWORD(v152.next) = 0;
        v152.srcVer = v18 & 0x7FFFFFFF;
        *(_QWORD *)&v152.aaVer = v18 & 0x7FFFFFFF;
        if ( !v29->start )
        {
          v33 = this->MonoVertices.Size >> 4;
          if ( v33 >= this->MonoVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
          this->MonoVertices.Pages[v33][this->MonoVertices.Size & 0xF] = v152;
          v29->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          *(_QWORD *)&v29->d.t.numTriangles = -1i64;
LABEL_51:
          v29->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
          goto LABEL_52;
        }
        v34 = &this->MonoVertices.Pages[(unsigned __int64)v29->d.m.lastIdx >> 4][v29->d.m.lastIdx & 0xF];
        if ( v34->srcVer != (v18 & 0x7FFFFFFF) )
        {
          v35 = this->MonoVertices.Size >> 4;
          if ( v35 >= this->MonoVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
          this->MonoVertices.Pages[v35][this->MonoVertices.Size & 0xF] = v152;
          v34->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          v29->d.m.prevIdx2 = v29->d.m.prevIdx1;
          v29->d.m.prevIdx1 = v29->d.m.lastIdx;
          goto LABEL_51;
        }
      }
LABEL_52:
      v7 = v140;
      vertexLeft = v139;
      rightAbove = v135;
      numChains = v131;
      v9 = style;
      v140->monotone = p_pe->monotone;
      v19 = v168;
    }
    if ( rightAbove != v9 || !v7->monotone )
    {
      if ( !rightAbove )
      {
        v7->monotone = 0i64;
        goto LABEL_84;
      }
      v36 = v7->monotone;
      if ( v36 )
      {
        if ( v36->style != rightAbove && v36->start )
        {
          *Scaleform::Render::Tessellator::startMonotone(this, rightAbove) = *v7->monotone;
          v36 = v7->monotone;
          v36->start = 0i64;
          *(_QWORD *)&v36->d.m.lastIdx = -1i64;
          v36->d.m.prevIdx2 = -1;
          v36->lowerBase = 0i64;
        }
        v36->style = rightAbove;
      }
      else
      {
        v7->monotone = Scaleform::Render::Tessellator::startMonotone(this, rightAbove);
      }
      v37 = v7->monotone;
      if ( vertexLeft != -1 )
      {
        HIDWORD(v154.next) = 0;
        v38 = vertexLeft | 0x80000000;
        v154.srcVer = vertexLeft | 0x80000000;
        *(_QWORD *)&v154.aaVer = vertexLeft | 0x80000000;
        if ( !v37->start )
        {
          v39 = this->MonoVertices.Size >> 4;
          if ( v39 >= this->MonoVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
          this->MonoVertices.Pages[v39][this->MonoVertices.Size & 0xF] = v154;
          v37->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          *(_QWORD *)&v37->d.t.numTriangles = -1i64;
          goto LABEL_72;
        }
        v40 = &this->MonoVertices.Pages[(unsigned __int64)v37->d.m.lastIdx >> 4][v37->d.m.lastIdx & 0xF];
        if ( v40->srcVer != v38 )
        {
          v41 = this->MonoVertices.Size >> 4;
          if ( v41 >= this->MonoVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
          this->MonoVertices.Pages[v41][this->MonoVertices.Size & 0xF] = v154;
          v40->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          v37->d.m.prevIdx2 = v37->d.m.prevIdx1;
          v37->d.m.prevIdx1 = v37->d.m.lastIdx;
LABEL_72:
          v37->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
        }
      }
      if ( v18 != -1 )
      {
        HIDWORD(v156.next) = 0;
        v156.srcVer = v18 & 0x7FFFFFFF;
        *(_QWORD *)&v156.aaVer = v18 & 0x7FFFFFFF;
        if ( !v37->start )
        {
          v42 = this->MonoVertices.Size >> 4;
          if ( v42 >= this->MonoVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
          this->MonoVertices.Pages[v42][this->MonoVertices.Size & 0xF] = v156;
          v37->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          *(_QWORD *)&v37->d.t.numTriangles = -1i64;
          goto LABEL_82;
        }
        v43 = &this->MonoVertices.Pages[(unsigned __int64)v37->d.m.lastIdx >> 4][v37->d.m.lastIdx & 0xF];
        if ( v43->srcVer != (v18 & 0x7FFFFFFF) )
        {
          v44 = this->MonoVertices.Size >> 4;
          if ( v44 >= this->MonoVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
          this->MonoVertices.Pages[v44][this->MonoVertices.Size & 0xF] = v156;
          v43->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          v37->d.m.prevIdx2 = v37->d.m.prevIdx1;
          v37->d.m.prevIdx1 = v37->d.m.lastIdx;
LABEL_82:
          v37->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
        }
      }
      v9 = style;
      v19 = v168;
      numChains = v131;
      v7 = v140;
    }
LABEL_84:
    if ( numChains == v19 )
      break;
    if ( numChains )
    {
      --numChains;
      v20 = v133;
      v45 = this->PendingEnds.Pages;
      v46 = v158 + 1;
      v134 = v133;
      v47 = (unsigned __int64)v158 >> 4;
      v48 = v158 & 0xF;
      v131 = numChains;
      ++v158;
      p_pe = &v45[v47][v48];
      if ( numChains )
        v49 = v45[(unsigned __int64)v46 >> 4][v46 & 0xF].vertex;
      else
        v49 = vertexRight;
      v133 = v49;
      v50 = p_pe->monotone;
      if ( v50 )
      {
        styleLeft = v50->style;
        v19 = v168;
        v137 = styleLeft;
      }
      else
      {
        v19 = v168;
        styleLeft = 0;
        v137 = 0;
      }
    }
    else
    {
      styleLeft = v137;
      v20 = v134;
    }
    v51 = v165;
    vertexLeft = v139;
    rightAbove = v135;
    vertex = v133;
    if ( v165 )
    {
      v52 = this->ChainsAbove.Pages;
      vertexLeft = v18;
      v53 = v143 + 1;
      --v165;
      v54 = (unsigned __int64)v143 >> 4;
      v55 = v143 & 0xF;
      v139 = v18;
      ++v143;
      v7 = &v52[v54][v55];
      v140 = v7;
      if ( v51 == 1 )
        v18 = v142;
      else
        v18 = v52[(unsigned __int64)v53 >> 4][v53 & 0xF].vertex;
      rightAbove = v7->chain->rightAbove;
      v19 = v168;
      goto LABEL_2;
    }
  }
  v56 = v134;
  v57 = v134;
  if ( v133 != -1 )
    v57 = v133;
  v138 = v57;
  v169 = v18;
  if ( v165 && v57 != -1 )
  {
    started = 0i64;
    v141 = 0i64;
    if ( numChains )
    {
      v56 = v133;
      v59 = this->PendingEnds.Pages;
      v134 = v133;
      p_pe = &v59[(unsigned __int64)v158 >> 4][v158 & 0xF];
      if ( numChains == 1 )
        v60 = vertexRight;
      else
        v60 = v59[(unsigned __int64)(v158 + 1) >> 4][(v158 + 1) & 0xF].vertex;
      v133 = v60;
    }
    v61 = v165 - 1;
    v62 = this->ChainsAbove.Pages;
    v63 = v143 + 1;
    v166 = v61;
    v64 = (unsigned __int64)v143 >> 4;
    v65 = v143 & 0xF;
    v144 = v143 + 1;
    v66 = &v62[v64][v65];
    if ( v61 )
      v67 = v62[(unsigned __int64)v63 >> 4][v63 & 0xF].vertex;
    else
      v67 = v142;
    v68 = style;
    v132 = v67;
    v69 = p_pe->monotone;
    v136 = v66->chain->rightAbove;
    if ( v69 && v69->style == style )
    {
      started = Scaleform::Render::Tessellator::startMonotone(this, style);
      v61 = v166;
      v141 = started;
      *started = *p_pe->monotone;
      v70 = p_pe->monotone;
      v70->start = 0i64;
      *(_QWORD *)&v70->d.m.lastIdx = -1i64;
      v70->d.m.prevIdx2 = -1;
      v70->style = style;
      v70->lowerBase = 0i64;
    }
    while ( v61 )
    {
      v86 = v132;
      if ( v18 != v132 )
      {
        if ( v68 )
        {
          v94 = v66->monotone;
          if ( v94 )
          {
            if ( v94->style != v68 && v94->start )
            {
              *Scaleform::Render::Tessellator::startMonotone(this, v68) = *v66->monotone;
              v94 = v66->monotone;
              v94->start = 0i64;
              *(_QWORD *)&v94->d.m.lastIdx = -1i64;
              v94->d.m.prevIdx2 = -1;
              v94->lowerBase = 0i64;
            }
            v94->style = v68;
          }
          else
          {
            v66->monotone = Scaleform::Render::Tessellator::startMonotone(this, v68);
          }
        }
        v95 = v66->monotone;
        v96 = v57 | 0x80000000;
        HIDWORD(v149.next) = 0;
        v149.srcVer = v57 | 0x80000000;
        *(_QWORD *)&v149.aaVer = v57 | 0x80000000;
        if ( !v95->start )
        {
          v97 = this->MonoVertices.Size >> 4;
          if ( v97 >= this->MonoVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
          this->MonoVertices.Pages[v97][this->MonoVertices.Size & 0xF] = v149;
          v95->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          *(_QWORD *)&v95->d.t.numTriangles = -1i64;
          goto LABEL_171;
        }
        v98 = &this->MonoVertices.Pages[(unsigned __int64)v95->d.m.lastIdx >> 4][v95->d.m.lastIdx & 0xF];
        if ( v98->srcVer != v96 )
        {
          v99 = this->MonoVertices.Size >> 4;
          if ( v99 >= this->MonoVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
          v100 = this->MonoVertices.Pages[v99];
          v18 = v169;
          v100[this->MonoVertices.Size & 0xF] = v149;
          v98->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          v95->d.m.prevIdx2 = v95->d.m.prevIdx1;
          v95->d.m.prevIdx1 = v95->d.m.lastIdx;
LABEL_171:
          v95->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
        }
        HIDWORD(v147.next) = 0;
        v147.srcVer = v138 & 0x7FFFFFFF;
        *(_QWORD *)&v147.aaVer = v138 & 0x7FFFFFFF;
        if ( !v95->start )
        {
          v101 = this->MonoVertices.Size >> 4;
          if ( v101 >= this->MonoVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
          this->MonoVertices.Pages[v101][this->MonoVertices.Size & 0xF] = v147;
          v95->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          *(_QWORD *)&v95->d.t.numTriangles = -1i64;
          goto LABEL_180;
        }
        v102 = &this->MonoVertices.Pages[(unsigned __int64)v95->d.m.lastIdx >> 4][v95->d.m.lastIdx & 0xF];
        if ( v102->srcVer != (v138 & 0x7FFFFFFF) )
        {
          v103 = this->MonoVertices.Size >> 4;
          if ( v103 >= this->MonoVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
          v104 = this->MonoVertices.Pages[v103];
          v18 = v169;
          v104[this->MonoVertices.Size & 0xF] = v147;
          v102->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          v95->d.m.prevIdx2 = v95->d.m.prevIdx1;
          v95->d.m.prevIdx1 = v95->d.m.lastIdx;
LABEL_180:
          v95->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
        }
        v81 = v66->monotone;
        if ( v18 != -1 )
        {
          HIDWORD(v159.next) = 0;
          v159.srcVer = v18 | 0x80000000;
          *(_QWORD *)&v159.aaVer = v18 | 0x80000000;
          if ( !v81->start )
          {
            v105 = this->MonoVertices.Size >> 4;
            if ( v105 >= this->MonoVertices.NumPages )
              Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                this->MonoVertices.Size >> 4);
            this->MonoVertices.Pages[v105][this->MonoVertices.Size & 0xF] = v159;
            v81->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
            *(_QWORD *)&v81->d.t.numTriangles = -1i64;
            goto LABEL_190;
          }
          v106 = &this->MonoVertices.Pages[(unsigned __int64)v81->d.m.lastIdx >> 4][v81->d.m.lastIdx & 0xF];
          if ( v106->srcVer != (v18 | 0x80000000) )
          {
            v107 = this->MonoVertices.Size >> 4;
            if ( v107 >= this->MonoVertices.NumPages )
              Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                this->MonoVertices.Size >> 4);
            v108 = this->MonoVertices.Pages[v107];
            v18 = v169;
            v108[this->MonoVertices.Size & 0xF] = v159;
            v106->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
            v81->d.m.prevIdx2 = v81->d.m.prevIdx1;
            v81->d.m.prevIdx1 = v81->d.m.lastIdx;
LABEL_190:
            v81->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
          }
        }
        if ( v132 == -1 )
          goto LABEL_202;
        *((_QWORD *)&v161 + 1) = 0i64;
        v109 = v81->start == 0i64;
        LODWORD(v161) = v132 & 0x7FFFFFFF;
        *(_QWORD *)((char *)&v161 + 4) = v132 & 0x7FFFFFFF;
        if ( v109 )
        {
          p_MonoVertices = &this->MonoVertices;
          v88 = this->MonoVertices.Size >> 4;
          if ( v88 >= this->MonoVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
          v89 = v161;
LABEL_150:
          p_MonoVertices->Pages[v88][p_MonoVertices->Size & 0xF] = (Scaleform::Render::Tessellator::MonoVertexType)v89;
          v81->start = &p_MonoVertices->Pages[p_MonoVertices->Size++ >> 4][(LODWORD(p_MonoVertices->Size) - 1) & 0xF];
          *(_QWORD *)&v81->d.t.numTriangles = -1i64;
LABEL_201:
          v81->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
LABEL_202:
          v61 = v166;
          v68 = style;
          goto LABEL_203;
        }
        v90 = &this->MonoVertices.Pages[(unsigned __int64)v81->d.m.lastIdx >> 4][v81->d.m.lastIdx & 0xF];
        if ( v90->srcVer == (v132 & 0x7FFFFFFF) )
          goto LABEL_202;
        v91 = &this->MonoVertices;
        v92 = this->MonoVertices.Size >> 4;
        if ( v92 >= this->MonoVertices.NumPages )
          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
            this->MonoVertices.Size >> 4);
        v93 = v161;
LABEL_200:
        v110 = v91->Pages[v92];
        v18 = v169;
        v110[v91->Size & 0xF] = (Scaleform::Render::Tessellator::MonoVertexType)v93;
        v90->next = &v91->Pages[v91->Size++ >> 4][(LODWORD(v91->Size) - 1) & 0xF];
        v81->d.m.prevIdx2 = v81->d.m.prevIdx1;
        v81->d.m.prevIdx1 = v81->d.m.lastIdx;
        goto LABEL_201;
      }
LABEL_203:
      v111 = v136;
      if ( v136 != v68 || !v66->monotone )
      {
        if ( !v136 )
        {
          v66->monotone = 0i64;
          goto LABEL_234;
        }
        v112 = v66->monotone;
        if ( v112 )
        {
          if ( v112->style != v136 && v112->start )
          {
            v113 = Scaleform::Render::Tessellator::startMonotone(this, v136);
            v114 = v66->monotone;
            *(_OWORD *)&v113->start = *(_OWORD *)&v114->start;
            v115 = *(_OWORD *)&v114->d.t.meshIdx;
            v111 = v136;
            *(_OWORD *)&v113->d.t.meshIdx = v115;
            v112 = v66->monotone;
            v112->start = 0i64;
            *(_QWORD *)&v112->d.m.lastIdx = -1i64;
            v112->d.m.prevIdx2 = -1;
            v112->lowerBase = 0i64;
          }
          v112->style = v111;
        }
        else
        {
          v66->monotone = Scaleform::Render::Tessellator::startMonotone(this, v136);
        }
        v116 = v66->monotone;
        if ( v18 != -1 )
        {
          v117 = v18 | 0x80000000;
          v162.next = 0i64;
          v109 = v116->start == 0i64;
          v162.srcVer = v117;
          v162.aaVer = v117;
          if ( v109 )
          {
            v118 = this->MonoVertices.Size >> 4;
            if ( v118 >= this->MonoVertices.NumPages )
              Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                this->MonoVertices.Size >> 4);
            this->MonoVertices.Pages[v118][this->MonoVertices.Size & 0xF] = v162;
            v116->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
            *(_QWORD *)&v116->d.t.numTriangles = -1i64;
            goto LABEL_222;
          }
          v119 = &this->MonoVertices.Pages[(unsigned __int64)v116->d.m.lastIdx >> 4][v116->d.m.lastIdx & 0xF];
          if ( v119->srcVer != v117 )
          {
            v120 = this->MonoVertices.Size >> 4;
            if ( v120 >= this->MonoVertices.NumPages )
              Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                this->MonoVertices.Size >> 4);
            this->MonoVertices.Pages[v120][this->MonoVertices.Size & 0xF] = v162;
            v119->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
            v116->d.m.prevIdx2 = v116->d.m.prevIdx1;
            v116->d.m.prevIdx1 = v116->d.m.lastIdx;
LABEL_222:
            v116->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
          }
        }
        if ( v86 != -1 )
        {
          pe.monotone = 0i64;
          v109 = v116->start == 0i64;
          pe.vertex = v86 & 0x7FFFFFFF;
          *(_QWORD *)(&pe.vertex + 1) = v86 & 0x7FFFFFFF;
          if ( v109 )
          {
            v121 = this->MonoVertices.Size >> 4;
            if ( v121 >= this->MonoVertices.NumPages )
              Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                this->MonoVertices.Size >> 4);
            this->MonoVertices.Pages[v121][this->MonoVertices.Size & 0xF] = (Scaleform::Render::Tessellator::MonoVertexType)pe;
            v116->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
            *(_QWORD *)&v116->d.t.numTriangles = -1i64;
            goto LABEL_232;
          }
          v122 = &this->MonoVertices.Pages[(unsigned __int64)v116->d.m.lastIdx >> 4][v116->d.m.lastIdx & 0xF];
          if ( v122->srcVer != (v86 & 0x7FFFFFFF) )
          {
            v123 = this->MonoVertices.Size >> 4;
            if ( v123 >= this->MonoVertices.NumPages )
              Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                this->MonoVertices.Size >> 4);
            this->MonoVertices.Pages[v123][this->MonoVertices.Size & 0xF] = (Scaleform::Render::Tessellator::MonoVertexType)pe;
            v122->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
            v116->d.m.prevIdx2 = v116->d.m.prevIdx1;
            v116->d.m.prevIdx1 = v116->d.m.lastIdx;
LABEL_232:
            v116->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
          }
        }
        v61 = v166;
        v68 = style;
      }
LABEL_234:
      if ( !v61 )
        goto LABEL_239;
      --v61;
      v124 = this->ChainsAbove.Pages;
      v18 = v86;
      v125 = v144 + 1;
      v166 = v61;
      v126 = (unsigned __int64)v144 >> 4;
      v127 = v144 & 0xF;
      v169 = v86;
      ++v144;
      v66 = &v124[v126][v127];
      if ( v61 )
        v128 = v124[(unsigned __int64)v125 >> 4][v125 & 0xF].vertex;
      else
        v128 = v142;
      started = v141;
      v57 = v138;
      v56 = v134;
      v136 = v66->chain->rightAbove;
      v132 = v128;
    }
    v66->monotone = started;
    if ( !started )
    {
      v71 = Scaleform::Render::Tessellator::startMonotone(this, v68);
      v66->monotone = v71;
      v72 = v71;
      if ( v56 != -1 )
      {
        HIDWORD(v157.next) = 0;
        v157.srcVer = v56 | 0x80000000;
        *(_QWORD *)&v157.aaVer = v56 | 0x80000000;
        if ( !v71->start )
        {
          v73 = this->MonoVertices.Size >> 4;
          if ( v73 >= this->MonoVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
          this->MonoVertices.Pages[v73][this->MonoVertices.Size & 0xF] = v157;
          v72->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          *(_QWORD *)&v72->d.t.numTriangles = -1i64;
          goto LABEL_124;
        }
        v74 = &this->MonoVertices.Pages[(unsigned __int64)v71->d.m.lastIdx >> 4][v71->d.m.lastIdx & 0xF];
        if ( v74->srcVer != (v56 | 0x80000000) )
        {
          v75 = this->MonoVertices.Size >> 4;
          if ( v75 >= this->MonoVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
          v76 = this->MonoVertices.Pages[v75];
          v18 = v169;
          v76[this->MonoVertices.Size & 0xF] = v157;
          v74->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          v72->d.m.prevIdx2 = v72->d.m.prevIdx1;
          v72->d.m.prevIdx1 = v72->d.m.lastIdx;
LABEL_124:
          v72->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
        }
      }
      if ( v133 != -1 )
      {
        HIDWORD(v155.next) = 0;
        v155.srcVer = v133 & 0x7FFFFFFF;
        *(_QWORD *)&v155.aaVer = v133 & 0x7FFFFFFF;
        if ( !v72->start )
        {
          v77 = this->MonoVertices.Size >> 4;
          if ( v77 >= this->MonoVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
          this->MonoVertices.Pages[v77][this->MonoVertices.Size & 0xF] = v155;
          v72->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          *(_QWORD *)&v72->d.t.numTriangles = -1i64;
          goto LABEL_134;
        }
        v78 = &this->MonoVertices.Pages[(unsigned __int64)v72->d.m.lastIdx >> 4][v72->d.m.lastIdx & 0xF];
        if ( v78->srcVer != (v133 & 0x7FFFFFFF) )
        {
          v79 = this->MonoVertices.Size >> 4;
          if ( v79 >= this->MonoVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
          v80 = this->MonoVertices.Pages[v79];
          v18 = v169;
          v80[this->MonoVertices.Size & 0xF] = v155;
          v78->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          v72->d.m.prevIdx2 = v72->d.m.prevIdx1;
          v72->d.m.prevIdx1 = v72->d.m.lastIdx;
LABEL_134:
          v72->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
        }
      }
    }
    v81 = v66->monotone;
    if ( v18 != -1 )
    {
      HIDWORD(v153.next) = 0;
      v153.srcVer = v18 | 0x80000000;
      *(_QWORD *)&v153.aaVer = v18 | 0x80000000;
      if ( !v81->start )
      {
        v82 = this->MonoVertices.Size >> 4;
        if ( v82 >= this->MonoVertices.NumPages )
          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
            this->MonoVertices.Size >> 4);
        this->MonoVertices.Pages[v82][this->MonoVertices.Size & 0xF] = v153;
        v81->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
        *(_QWORD *)&v81->d.t.numTriangles = -1i64;
        goto LABEL_144;
      }
      v83 = &this->MonoVertices.Pages[(unsigned __int64)v81->d.m.lastIdx >> 4][v81->d.m.lastIdx & 0xF];
      if ( v83->srcVer != (v18 | 0x80000000) )
      {
        v84 = this->MonoVertices.Size >> 4;
        if ( v84 >= this->MonoVertices.NumPages )
          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
            this->MonoVertices.Size >> 4);
        v85 = this->MonoVertices.Pages[v84];
        v18 = v169;
        v85[this->MonoVertices.Size & 0xF] = v153;
        v83->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
        v81->d.m.prevIdx2 = v81->d.m.prevIdx1;
        v81->d.m.prevIdx1 = v81->d.m.lastIdx;
LABEL_144:
        v81->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
      }
    }
    v86 = v132;
    if ( v132 == -1 )
      goto LABEL_202;
    HIDWORD(v151) = 0;
    LODWORD(v151) = v132 & 0x7FFFFFFF;
    *(_QWORD *)((char *)&v151 + 4) = v132 & 0x7FFFFFFF;
    if ( !v81->start )
    {
      p_MonoVertices = &this->MonoVertices;
      v88 = this->MonoVertices.Size >> 4;
      if ( v88 >= this->MonoVertices.NumPages )
        Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
          (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
          this->MonoVertices.Size >> 4);
      v89 = v151;
      goto LABEL_150;
    }
    v90 = &this->MonoVertices.Pages[(unsigned __int64)v81->d.m.lastIdx >> 4][v81->d.m.lastIdx & 0xF];
    if ( v90->srcVer == (v132 & 0x7FFFFFFF) )
      goto LABEL_202;
    v91 = &this->MonoVertices;
    v92 = this->MonoVertices.Size >> 4;
    if ( v92 >= this->MonoVertices.NumPages )
      Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
        (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
        this->MonoVertices.Size >> 4);
    v93 = v151;
    goto LABEL_200;
  }
LABEL_239:
  if ( v163 == &this->BaseLines.Pages[(this->BaseLines.Size - 1) >> 4][(LODWORD(this->BaseLines.Size) - 1) & 0xF] )
  {
    v129 = v163->firstChain;
    if ( v129 < this->PendingEnds.Size )
      this->PendingEnds.Size = v129;
    Size = this->BaseLines.Size;
    if ( Size )
      this->BaseLines.Size = Size - 1;
  }
  upperBase->numChains = 0;
}

void __fastcall Scaleform::Render::Tessellator::connectStartingToRight(
        Scaleform::Render::Tessellator *this,
        Scaleform::Render::Tessellator::ScanChainType *scan,
        Scaleform::Render::Tessellator::BaseLineType *upperBase,
        unsigned int targetVertex)
{
  unsigned __int64 leftAbove; // rax
  Scaleform::Render::Tessellator::ScanChainType *v5; // rdi
  char v7; // si
  unsigned int vertexLeft; // er12
  unsigned int vertex; // er13
  unsigned int v10; // er14
  Scaleform::Render::Tessellator::MonotoneType *monotone; // rsi
  unsigned __int64 v12; // r15
  Scaleform::Render::Tessellator::MonoVertexType *v13; // r14
  unsigned __int64 v14; // r13
  Scaleform::Render::Tessellator::MonoVertexType *v15; // rax
  Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType,4,16> *p_MonoVertices; // r14
  unsigned __int64 v17; // r15
  Scaleform::Render::Tessellator::MonoVertexType v18; // xmm0
  Scaleform::Render::Tessellator::MonoVertexType *v19; // r14
  Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType,4,16> *v20; // r15
  unsigned __int64 v21; // r13
  Scaleform::Render::Tessellator::MonoVertexType v22; // xmm0
  Scaleform::Render::Tessellator::MonotoneType *v23; // rax
  unsigned int v24; // er8
  Scaleform::Render::Tessellator::MonotoneType *v25; // rsi
  unsigned __int64 v26; // r15
  Scaleform::Render::Tessellator::MonoVertexType *v27; // r14
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // r15
  Scaleform::Render::Tessellator::MonoVertexType *v30; // r14
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // r15
  Scaleform::Render::Tessellator::MonoVertexType *v33; // r14
  unsigned __int64 v34; // r13
  Scaleform::Render::Tessellator::MonoVertexType *v35; // rax
  Scaleform::Render::Tessellator::MonotoneType *v36; // rax
  Scaleform::Render::Tessellator::MonotoneType *v37; // rdi
  unsigned int v38; // er12
  unsigned __int64 v39; // r14
  Scaleform::Render::Tessellator::MonoVertexType *v40; // rsi
  unsigned __int64 v41; // r15
  unsigned __int64 v42; // r14
  Scaleform::Render::Tessellator::MonoVertexType *v43; // rsi
  unsigned __int64 v44; // r15
  unsigned int v45; // er10
  Scaleform::Render::Tessellator::ScanChainType **Pages; // r8
  unsigned int v47; // er9
  unsigned __int64 v48; // rax
  __int64 v49; // rcx
  unsigned int numChains; // [rsp+20h] [rbp-89h]
  unsigned int style; // [rsp+24h] [rbp-85h]
  unsigned int v52; // [rsp+28h] [rbp-81h]
  unsigned int vertexRight; // [rsp+2Ch] [rbp-7Dh]
  Scaleform::Render::Tessellator::ScanChainType *v54; // [rsp+30h] [rbp-79h]
  unsigned int firstChain; // [rsp+38h] [rbp-71h]
  Scaleform::Render::Tessellator::MonoVertexType v56; // [rsp+40h] [rbp-69h]
  Scaleform::Render::Tessellator::MonoVertexType v57; // [rsp+50h] [rbp-59h]
  Scaleform::Render::Tessellator::MonoVertexType v58; // [rsp+60h] [rbp-49h]
  Scaleform::Render::Tessellator::MonoVertexType v59; // [rsp+70h] [rbp-39h]
  Scaleform::Render::Tessellator::MonoVertexType v60; // [rsp+80h] [rbp-29h]
  Scaleform::Render::Tessellator::MonoVertexType v61; // [rsp+90h] [rbp-19h]
  Scaleform::Render::Tessellator::MonoVertexType v62; // [rsp+A0h] [rbp-9h]
  Scaleform::Render::Tessellator::MonoVertexType v63; // [rsp+B0h] [rbp+7h]
  char v64; // [rsp+110h] [rbp+67h]
  unsigned int v65; // [rsp+118h] [rbp+6Fh]

  leftAbove = upperBase->leftAbove;
  v5 = scan;
  if ( (_DWORD)leftAbove == -1 )
    v54 = scan;
  else
    v54 = &this->ChainsAbove.Pages[leftAbove >> 4][leftAbove & 0xF];
  v7 = 1;
  vertexLeft = upperBase->vertexLeft;
  firstChain = upperBase->firstChain;
  numChains = upperBase->numChains;
  vertexRight = upperBase->vertexRight;
  v64 = 1;
  vertex = this->ChainsAbove.Pages[(unsigned __int64)firstChain >> 4][firstChain & 0xF].vertex;
  style = upperBase->styleLeft;
  v10 = scan->monotone->style;
  v52 = v10;
  while ( 1 )
  {
    v65 = vertex;
    if ( v7 )
    {
      monotone = v5->monotone;
      if ( vertexLeft != -1 )
      {
        HIDWORD(v56.next) = 0;
        v56.srcVer = vertexLeft | 0x80000000;
        *(_QWORD *)&v56.aaVer = vertexLeft | 0x80000000;
        if ( !monotone->start )
        {
          v12 = this->MonoVertices.Size >> 4;
          if ( v12 >= this->MonoVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
          this->MonoVertices.Pages[v12][this->MonoVertices.Size & 0xF] = v56;
          monotone->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size)
                                                                                     - 1) & 0xF];
          *(_QWORD *)&monotone->d.t.numTriangles = -1i64;
LABEL_15:
          monotone->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
          goto LABEL_16;
        }
        v13 = &this->MonoVertices.Pages[(unsigned __int64)monotone->d.m.lastIdx >> 4][monotone->d.m.lastIdx & 0xF];
        if ( v13->srcVer != (vertexLeft | 0x80000000) )
        {
          v14 = this->MonoVertices.Size >> 4;
          if ( v14 >= this->MonoVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
          v15 = this->MonoVertices.Pages[v14];
          vertex = v65;
          v15[this->MonoVertices.Size & 0xF] = v56;
          v13->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          monotone->d.m.prevIdx2 = monotone->d.m.prevIdx1;
          monotone->d.m.prevIdx1 = monotone->d.m.lastIdx;
          goto LABEL_15;
        }
      }
LABEL_16:
      if ( vertex != -1 )
      {
        HIDWORD(v57.next) = 0;
        v57.srcVer = vertex & 0x7FFFFFFF;
        *(_QWORD *)&v57.aaVer = vertex & 0x7FFFFFFF;
        if ( !monotone->start )
        {
          p_MonoVertices = &this->MonoVertices;
          v17 = this->MonoVertices.Size >> 4;
          if ( v17 >= this->MonoVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
          v18 = v57;
LABEL_21:
          p_MonoVertices->Pages[v17][p_MonoVertices->Size & 0xF] = v18;
          monotone->start = &p_MonoVertices->Pages[p_MonoVertices->Size++ >> 4][(LODWORD(p_MonoVertices->Size) - 1) & 0xF];
          *(_QWORD *)&monotone->d.t.numTriangles = -1i64;
LABEL_73:
          monotone->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
          goto LABEL_74;
        }
        v19 = &this->MonoVertices.Pages[(unsigned __int64)monotone->d.m.lastIdx >> 4][monotone->d.m.lastIdx & 0xF];
        if ( v19->srcVer != (vertex & 0x7FFFFFFF) )
        {
          v20 = &this->MonoVertices;
          v21 = this->MonoVertices.Size >> 4;
          if ( v21 >= this->MonoVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
          v22 = v57;
LABEL_72:
          v35 = v20->Pages[v21];
          vertex = v65;
          v35[v20->Size & 0xF] = v22;
          v19->next = &v20->Pages[v20->Size++ >> 4][(LODWORD(v20->Size) - 1) & 0xF];
          monotone->d.m.prevIdx2 = monotone->d.m.prevIdx1;
          monotone->d.m.prevIdx1 = monotone->d.m.lastIdx;
          goto LABEL_73;
        }
      }
      goto LABEL_74;
    }
    if ( vertexLeft != vertex )
    {
      if ( v10 )
      {
        v23 = v5->monotone;
        if ( v23 )
        {
          if ( v23->style != v10 && v23->start )
          {
            *Scaleform::Render::Tessellator::startMonotone(this, v10) = *v5->monotone;
            v23 = v5->monotone;
            v23->start = 0i64;
            *(_QWORD *)&v23->d.m.lastIdx = -1i64;
            v23->d.m.prevIdx2 = -1;
            v23->lowerBase = 0i64;
          }
          v23->style = v10;
        }
        else
        {
          v5->monotone = Scaleform::Render::Tessellator::startMonotone(this, v10);
        }
      }
      v24 = targetVertex;
      v25 = v5->monotone;
      if ( targetVertex == -1 )
        goto LABEL_53;
      HIDWORD(v58.next) = 0;
      v58.srcVer = targetVertex | 0x80000000;
      *(_QWORD *)&v58.aaVer = targetVertex | 0x80000000;
      if ( v25->start )
      {
        v27 = &this->MonoVertices.Pages[(unsigned __int64)v25->d.m.lastIdx >> 4][v25->d.m.lastIdx & 0xF];
        if ( v27->srcVer == (targetVertex | 0x80000000) )
        {
LABEL_44:
          HIDWORD(v59.next) = 0;
          v59.srcVer = v24 & 0x7FFFFFFF;
          *(_QWORD *)&v59.aaVer = v24 & 0x7FFFFFFF;
          if ( v25->start )
          {
            v30 = &this->MonoVertices.Pages[(unsigned __int64)v25->d.m.lastIdx >> 4][v25->d.m.lastIdx & 0xF];
            if ( v30->srcVer == (v24 & 0x7FFFFFFF) )
              goto LABEL_53;
            v31 = this->MonoVertices.Size >> 4;
            if ( v31 >= this->MonoVertices.NumPages )
              Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                this->MonoVertices.Size >> 4);
            this->MonoVertices.Pages[v31][this->MonoVertices.Size & 0xF] = v59;
            v30->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
            v25->d.m.prevIdx2 = v25->d.m.prevIdx1;
            v25->d.m.prevIdx1 = v25->d.m.lastIdx;
          }
          else
          {
            v29 = this->MonoVertices.Size >> 4;
            if ( v29 >= this->MonoVertices.NumPages )
              Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                this->MonoVertices.Size >> 4);
            this->MonoVertices.Pages[v29][this->MonoVertices.Size & 0xF] = v59;
            v25->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
            *(_QWORD *)&v25->d.t.numTriangles = -1i64;
          }
          v25->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
LABEL_53:
          monotone = v5->monotone;
          if ( vertexLeft != -1 )
          {
            HIDWORD(v60.next) = 0;
            v60.srcVer = vertexLeft | 0x80000000;
            *(_QWORD *)&v60.aaVer = vertexLeft | 0x80000000;
            if ( !monotone->start )
            {
              v32 = this->MonoVertices.Size >> 4;
              if ( v32 >= this->MonoVertices.NumPages )
                Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                  (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                  this->MonoVertices.Size >> 4);
              this->MonoVertices.Pages[v32][this->MonoVertices.Size & 0xF] = v60;
              monotone->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size)
                                                                                         - 1) & 0xF];
              *(_QWORD *)&monotone->d.t.numTriangles = -1i64;
LABEL_62:
              monotone->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
              goto LABEL_63;
            }
            v33 = &this->MonoVertices.Pages[(unsigned __int64)monotone->d.m.lastIdx >> 4][monotone->d.m.lastIdx & 0xF];
            if ( v33->srcVer != (vertexLeft | 0x80000000) )
            {
              v34 = this->MonoVertices.Size >> 4;
              if ( v34 >= this->MonoVertices.NumPages )
                Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                  (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                  this->MonoVertices.Size >> 4);
              this->MonoVertices.Pages[v34][this->MonoVertices.Size & 0xF] = v60;
              v33->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
              monotone->d.m.prevIdx2 = monotone->d.m.prevIdx1;
              monotone->d.m.prevIdx1 = monotone->d.m.lastIdx;
              goto LABEL_62;
            }
          }
LABEL_63:
          vertex = v65;
          if ( v65 != -1 )
          {
            HIDWORD(v61.next) = 0;
            v61.srcVer = v65 & 0x7FFFFFFF;
            *(_QWORD *)&v61.aaVer = v65 & 0x7FFFFFFF;
            if ( !monotone->start )
            {
              p_MonoVertices = &this->MonoVertices;
              v17 = this->MonoVertices.Size >> 4;
              if ( v17 >= this->MonoVertices.NumPages )
                Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                  (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                  this->MonoVertices.Size >> 4);
              v18 = v61;
              goto LABEL_21;
            }
            v19 = &this->MonoVertices.Pages[(unsigned __int64)monotone->d.m.lastIdx >> 4][monotone->d.m.lastIdx & 0xF];
            if ( v19->srcVer != (v65 & 0x7FFFFFFF) )
            {
              v20 = &this->MonoVertices;
              v21 = this->MonoVertices.Size >> 4;
              if ( v21 >= this->MonoVertices.NumPages )
                Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                  (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                  this->MonoVertices.Size >> 4);
              v22 = v61;
              goto LABEL_72;
            }
          }
LABEL_74:
          v7 = v64;
          goto LABEL_75;
        }
        v28 = this->MonoVertices.Size >> 4;
        if ( v28 >= this->MonoVertices.NumPages )
        {
          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
            this->MonoVertices.Size >> 4);
          v24 = targetVertex;
        }
        this->MonoVertices.Pages[v28][this->MonoVertices.Size & 0xF] = v58;
        v27->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
        v25->d.m.prevIdx2 = v25->d.m.prevIdx1;
        v25->d.m.prevIdx1 = v25->d.m.lastIdx;
      }
      else
      {
        v26 = this->MonoVertices.Size >> 4;
        if ( v26 >= this->MonoVertices.NumPages )
        {
          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
            this->MonoVertices.Size >> 4);
          v24 = targetVertex;
        }
        this->MonoVertices.Pages[v26][this->MonoVertices.Size & 0xF] = v58;
        v25->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
        *(_QWORD *)&v25->d.t.numTriangles = -1i64;
      }
      v25->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
      goto LABEL_44;
    }
LABEL_75:
    if ( style == v52 && v5->monotone )
      goto LABEL_107;
    if ( !style )
    {
      v5->monotone = 0i64;
      goto LABEL_107;
    }
    if ( v7 )
      v5 = v54;
    v36 = v5->monotone;
    if ( v36 )
    {
      if ( v36->style != style && v36->start )
      {
        *Scaleform::Render::Tessellator::startMonotone(this, style) = *v5->monotone;
        v36 = v5->monotone;
        v36->start = 0i64;
        *(_QWORD *)&v36->d.m.lastIdx = -1i64;
        v36->d.m.prevIdx2 = -1;
        v36->lowerBase = 0i64;
      }
      v36->style = style;
    }
    else
    {
      v5->monotone = Scaleform::Render::Tessellator::startMonotone(this, style);
    }
    v37 = v5->monotone;
    if ( vertexLeft != -1 )
    {
      v38 = vertexLeft | 0x80000000;
      v62.next = 0i64;
      v62.srcVer = v38;
      v62.aaVer = v38;
      if ( !v37->start )
      {
        v39 = this->MonoVertices.Size >> 4;
        if ( v39 >= this->MonoVertices.NumPages )
          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
            this->MonoVertices.Size >> 4);
        this->MonoVertices.Pages[v39][this->MonoVertices.Size & 0xF] = v62;
        v37->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
        *(_QWORD *)&v37->d.t.numTriangles = -1i64;
LABEL_96:
        v37->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
        goto LABEL_97;
      }
      v40 = &this->MonoVertices.Pages[(unsigned __int64)v37->d.m.lastIdx >> 4][v37->d.m.lastIdx & 0xF];
      if ( v40->srcVer != v38 )
      {
        v41 = this->MonoVertices.Size >> 4;
        if ( v41 >= this->MonoVertices.NumPages )
          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
            (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
            this->MonoVertices.Size >> 4);
        this->MonoVertices.Pages[v41][this->MonoVertices.Size & 0xF] = v62;
        v40->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
        v37->d.m.prevIdx2 = v37->d.m.prevIdx1;
        v37->d.m.prevIdx1 = v37->d.m.lastIdx;
        goto LABEL_96;
      }
    }
LABEL_97:
    if ( vertex == -1 )
      goto LABEL_107;
    HIDWORD(v63.next) = 0;
    v63.srcVer = vertex & 0x7FFFFFFF;
    *(_QWORD *)&v63.aaVer = vertex & 0x7FFFFFFF;
    if ( v37->start )
    {
      v43 = &this->MonoVertices.Pages[(unsigned __int64)v37->d.m.lastIdx >> 4][v37->d.m.lastIdx & 0xF];
      if ( v43->srcVer == (vertex & 0x7FFFFFFF) )
        goto LABEL_107;
      v44 = this->MonoVertices.Size >> 4;
      if ( v44 >= this->MonoVertices.NumPages )
        Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
          (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
          this->MonoVertices.Size >> 4);
      this->MonoVertices.Pages[v44][this->MonoVertices.Size & 0xF] = v63;
      v43->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
      v37->d.m.prevIdx2 = v37->d.m.prevIdx1;
      v37->d.m.prevIdx1 = v37->d.m.lastIdx;
    }
    else
    {
      v42 = this->MonoVertices.Size >> 4;
      if ( v42 >= this->MonoVertices.NumPages )
        Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
          (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
          this->MonoVertices.Size >> 4);
      this->MonoVertices.Pages[v42][this->MonoVertices.Size & 0xF] = v63;
      v37->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
      *(_QWORD *)&v37->d.t.numTriangles = -1i64;
    }
    v37->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
LABEL_107:
    v45 = numChains;
    v7 = 0;
    v64 = 0;
    if ( !numChains )
      break;
    Pages = this->ChainsAbove.Pages;
    vertexLeft = vertex;
    v47 = firstChain + 1;
    --numChains;
    v48 = (unsigned __int64)firstChain >> 4;
    v49 = firstChain++ & 0xF;
    v5 = &Pages[v48][v49];
    if ( v45 == 1 )
    {
      vertex = vertexRight;
      v10 = v52;
    }
    else
    {
      v10 = v52;
      vertex = Pages[(unsigned __int64)v47 >> 4][v47 & 0xF].vertex;
    }
    style = v5->chain->rightAbove;
  }
  upperBase->numChains = 0;
}

__int64 __fastcall Scaleform::Render::Tessellator::countFanEdges(
        Scaleform::Render::Tessellator *this,
        Scaleform::Render::Tessellator::MonotoneType *m)
{
  Scaleform::Render::Tessellator::MonoVertexType *start; // r10
  unsigned int v3; // ebp
  Scaleform::Render::Tessellator::MonoVertexType *v6; // r8
  Scaleform::Render::Tessellator::MonoVertexType *next; // rax
  int v8; // er9
  int v9; // edx
  int v10; // ecx
  Scaleform::Render::Tessellator::MonoVertexType *v12; // r8
  Scaleform::Render::Tessellator::MonoVertexType *v13; // rbx
  Scaleform::Render::TessVertex *v14; // rax
  Scaleform::Render::Tessellator::MonoVertexType *v15; // rax
  Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonotoneType,4,16> *p_Monotones; // rdi
  unsigned __int64 v17; // rsi
  __int64 v18; // rdx
  Scaleform::Render::Tessellator::MonotoneType *v19; // rcx
  __int128 v20; // [rsp+20h] [rbp-38h]
  __int128 v21; // [rsp+30h] [rbp-28h]

  start = m->start;
  v3 = 0;
  if ( m->start && (v6 = start->next) != 0i64 )
  {
    next = v6->next;
    if ( next )
    {
      while ( 1 )
      {
        v8 = start->srcVer & 0xFFFFFFF;
        v9 = v6->srcVer & 0xFFFFFFF;
        v10 = next->srcVer & 0xFFFFFFF;
        if ( v8 != v9 && v9 != v10 && v10 != v8 )
          break;
        start = v6;
        v6 = next;
        next = next->next;
        if ( !next )
          goto LABEL_8;
      }
      v12 = start;
      v13 = 0i64;
      m->start = start;
      if ( start )
      {
        while ( !v13 || ((v13->srcVer ^ v12->srcVer) & 0xFFFFFFF) != 0 )
        {
          v13 = v12;
          v3 += 2;
          v14 = this->MeshVertices.Pages[(unsigned __int64)(v12->srcVer & 0xFFFFFFF) >> 4];
          v14[v12->srcVer & 0xF].Mesh += 2;
          v12 = v12->next;
          if ( !v12 )
            return v3;
        }
        v15 = v12->next;
        if ( v15 && v15->next )
        {
          p_Monotones = &this->Monotones;
          *((_QWORD *)&v21 + 1) = *(_QWORD *)&m->d.m.lastIdx;
          v17 = p_Monotones->Size >> 4;
          v20 = *(_OWORD *)&m->d.t.meshIdx;
          *(_QWORD *)&v21 = v12;
          if ( v17 >= p_Monotones->NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonotoneType,4,16>::allocPage(
              p_Monotones,
              v17);
          v18 = p_Monotones->Size & 0xF;
          v19 = p_Monotones->Pages[v17];
          *(_OWORD *)&v19[v18].start = v21;
          *(_OWORD *)&v19[v18].d.t.meshIdx = v20;
          ++p_Monotones->Size;
        }
        v13->next = 0i64;
      }
      return v3;
    }
    else
    {
LABEL_8:
      m->start = 0i64;
      return 0i64;
    }
  }
  else
  {
    m->start = 0i64;
    return 0i64;
  }
}

char __fastcall Scaleform::Render::Tessellator::createMeshForQuad(
        Scaleform::Render::Tessellator *this,
        const Scaleform::Render::Tessellator::PathType *p)
{
  unsigned int leftStyle; // er15
  __int64 start; // rbx
  Scaleform::Render::Tessellator::SrcVertexType **Pages; // rdx
  char v7; // r12
  __int64 v8; // r14
  Scaleform::Render::Tessellator::SrcVertexType *v9; // r10
  __int64 v10; // r8
  Scaleform::Render::Tessellator::SrcVertexType *v11; // rcx
  Scaleform::Render::Tessellator::SrcVertexType *v12; // rdx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  __int64 v16; // rdx
  Scaleform::Render::TessVertex *v17; // rax
  unsigned int v18; // eax
  __int64 MeshIdx; // r14
  Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::ArrayType *v20; // rsi
  unsigned __int64 v21; // rdi
  __int64 v22; // rdx
  Scaleform::Render::Tessellator::TriangleType *v23; // rax
  unsigned int v24; // eax
  __int64 v25; // r14
  Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::ArrayType *v26; // rdi
  unsigned __int64 v27; // rsi
  __int64 v28; // rdx
  Scaleform::Render::Tessellator::TriangleType *v29; // rax
  __int128 v31; // [rsp+30h] [rbp-48h]
  Scaleform::Render::Tessellator::MonoVertexType *v32; // [rsp+40h] [rbp-38h]

  leftStyle = p->leftStyle;
  if ( !leftStyle )
    leftStyle = p->rightStyle;
  Scaleform::Render::Tessellator::prepareSpecialCaseMeshes(this, leftStyle, 0xAu);
  start = p->start;
  Pages = this->SrcVertices.Pages;
  LOWORD(v32) = 10;
  v7 = 0;
  DWORD2(v31) = -1;
  HIWORD(v31) = leftStyle;
  v8 = start + 3;
  WORD6(v31) = leftStyle;
  v9 = Pages[(unsigned __int64)(unsigned int)start >> 4];
  v10 = ((_DWORD)start + 1) & 0xF;
  v11 = Pages[(unsigned __int64)(start + 1) >> 4];
  v12 = Pages[(unsigned __int64)(start + 2) >> 4];
  if ( (float)((float)((float)(v11[v10].y - v9[start & 0xF].y) * (float)(v12[((_DWORD)start + 2) & 0xF].x - v11[v10].x))
             - (float)((float)(v11[v10].x - v9[start & 0xF].x) * (float)(v12[((_DWORD)start + 2) & 0xF].y - v11[v10].y))) > 0.0000099999997 )
    v7 = 1;
  v13 = 0i64;
  WORD1(v32) = this->HasComplexFill;
  if ( !v7 )
    v8 = start;
  do
  {
    if ( v7 )
      v14 = v8 - v13;
    else
      v14 = v8 + v13;
    v15 = this->MeshVertices.Size >> 4;
    *(Scaleform::Render::Tessellator::SrcVertexType *)&v31 = this->SrcVertices.Pages[v14 >> 4][v14 & 0xF];
    if ( v15 >= this->MeshVertices.NumPages )
      Scaleform::Render::ArrayPaged<Scaleform::Render::TessVertex,4,16>::allocPage(&this->MeshVertices, v15);
    ++v13;
    v16 = this->MeshVertices.Size & 0xF;
    v17 = this->MeshVertices.Pages[v15];
    *(_OWORD *)&v17[v16].x = v31;
    *(_DWORD *)&v17[v16].Flags = (_DWORD)v32;
    ++this->MeshVertices.Size;
  }
  while ( v13 < 4 );
  this->Meshes.Pages[(unsigned __int64)this->MeshIdx >> 4][this->MeshIdx & 0xF].VertexCount = 4;
  LODWORD(v31) = Scaleform::Render::Tessellator::emitVertex(this, this->MeshIdx, 1u, leftStyle, 0xAu);
  DWORD1(v31) = Scaleform::Render::Tessellator::emitVertex(this, this->MeshIdx, 2u, leftStyle, 0xAu);
  v18 = Scaleform::Render::Tessellator::emitVertex(this, this->MeshIdx, 0, leftStyle, 0xAu);
  MeshIdx = this->MeshIdx;
  v20 = &this->MeshTriangles.Arrays[MeshIdx];
  DWORD2(v31) = v18;
  v21 = v20->Size >> 4;
  if ( v21 >= v20->NumPages )
    Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::allocPage(
      &this->MeshTriangles,
      v20,
      v20->Size >> 4);
  v22 = v20->Size & 0xF;
  v23 = v20->Pages[v21];
  *(_OWORD *)&v23[v22].d.m.v1 = v31;
  v23[v22].d.m.v3 = v32;
  ++this->MeshTriangles.Arrays[MeshIdx].Size;
  LODWORD(v31) = Scaleform::Render::Tessellator::emitVertex(this, this->MeshIdx, 0, leftStyle, 0xAu);
  DWORD1(v31) = Scaleform::Render::Tessellator::emitVertex(this, this->MeshIdx, 2u, leftStyle, 0xAu);
  v24 = Scaleform::Render::Tessellator::emitVertex(this, this->MeshIdx, 3u, leftStyle, 0xAu);
  v25 = this->MeshIdx;
  v26 = &this->MeshTriangles.Arrays[v25];
  DWORD2(v31) = v24;
  v27 = v26->Size >> 4;
  if ( v27 >= v26->NumPages )
    Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::allocPage(
      &this->MeshTriangles,
      v26,
      v26->Size >> 4);
  v28 = v26->Size & 0xF;
  v29 = v26->Pages[v27];
  *(_OWORD *)&v29[v28].d.m.v1 = v31;
  v29[v28].d.m.v3 = v32;
  ++this->MeshTriangles.Arrays[v25].Size;
  return 1;
}

char __fastcall Scaleform::Render::Tessellator::createMeshForTriangle(
        Scaleform::Render::Tessellator *this,
        const Scaleform::Render::Tessellator::PathType *p)
{
  unsigned int leftStyle; // er15
  __int64 start; // rbx
  Scaleform::Render::Tessellator::SrcVertexType **Pages; // rdx
  char v7; // r12
  __int64 v8; // r14
  Scaleform::Render::Tessellator::SrcVertexType *v9; // r10
  __int64 v10; // r8
  Scaleform::Render::Tessellator::SrcVertexType *v11; // rcx
  Scaleform::Render::Tessellator::SrcVertexType *v12; // rdx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  __int64 v16; // rdx
  Scaleform::Render::TessVertex *v17; // rax
  unsigned int v18; // eax
  __int64 MeshIdx; // rsi
  Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::ArrayType *v20; // rbx
  unsigned __int64 v21; // rdi
  __int64 v22; // rdx
  Scaleform::Render::Tessellator::TriangleType *v23; // rax
  __int128 v25; // [rsp+30h] [rbp-48h]
  Scaleform::Render::Tessellator::MonoVertexType *v26; // [rsp+40h] [rbp-38h]

  leftStyle = p->leftStyle;
  if ( !leftStyle )
    leftStyle = p->rightStyle;
  Scaleform::Render::Tessellator::prepareSpecialCaseMeshes(this, leftStyle, 0xAu);
  start = p->start;
  Pages = this->SrcVertices.Pages;
  LOWORD(v26) = 10;
  v7 = 0;
  DWORD2(v25) = -1;
  HIWORD(v25) = leftStyle;
  v8 = start + 2;
  WORD6(v25) = leftStyle;
  v9 = Pages[(unsigned __int64)(unsigned int)start >> 4];
  v10 = ((_DWORD)start + 1) & 0xF;
  v11 = Pages[(unsigned __int64)(start + 1) >> 4];
  v12 = Pages[(unsigned __int64)(start + 2) >> 4];
  if ( (float)((float)((float)(v11[v10].y - v9[start & 0xF].y) * (float)(v12[((_DWORD)start + 2) & 0xF].x - v11[v10].x))
             - (float)((float)(v11[v10].x - v9[start & 0xF].x) * (float)(v12[((_DWORD)start + 2) & 0xF].y - v11[v10].y))) > 0.0000099999997 )
    v7 = 1;
  v13 = 0i64;
  WORD1(v26) = this->HasComplexFill;
  if ( !v7 )
    v8 = start;
  do
  {
    if ( v7 )
      v14 = v8 - v13;
    else
      v14 = v8 + v13;
    v15 = this->MeshVertices.Size >> 4;
    *(Scaleform::Render::Tessellator::SrcVertexType *)&v25 = this->SrcVertices.Pages[v14 >> 4][v14 & 0xF];
    if ( v15 >= this->MeshVertices.NumPages )
      Scaleform::Render::ArrayPaged<Scaleform::Render::TessVertex,4,16>::allocPage(&this->MeshVertices, v15);
    ++v13;
    v16 = this->MeshVertices.Size & 0xF;
    v17 = this->MeshVertices.Pages[v15];
    *(_OWORD *)&v17[v16].x = v25;
    *(_DWORD *)&v17[v16].Flags = (_DWORD)v26;
    ++this->MeshVertices.Size;
  }
  while ( v13 < 3 );
  this->Meshes.Pages[(unsigned __int64)this->MeshIdx >> 4][this->MeshIdx & 0xF].VertexCount = 3;
  LODWORD(v25) = Scaleform::Render::Tessellator::emitVertex(this, this->MeshIdx, 0, leftStyle, 0xAu);
  DWORD1(v25) = Scaleform::Render::Tessellator::emitVertex(this, this->MeshIdx, 1u, leftStyle, 0xAu);
  v18 = Scaleform::Render::Tessellator::emitVertex(this, this->MeshIdx, 2u, leftStyle, 0xAu);
  MeshIdx = this->MeshIdx;
  v20 = &this->MeshTriangles.Arrays[MeshIdx];
  DWORD2(v25) = v18;
  v21 = v20->Size >> 4;
  if ( v21 >= v20->NumPages )
    Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::allocPage(
      &this->MeshTriangles,
      v20,
      v20->Size >> 4);
  v22 = v20->Size & 0xF;
  v23 = v20->Pages[v21];
  *(_OWORD *)&v23[v22].d.m.v1 = v25;
  v23[v22].d.m.v3 = v26;
  ++this->MeshTriangles.Arrays[MeshIdx].Size;
  return 1;
}

void __fastcall Scaleform::Render::Tessellator::decomposePath(
        Scaleform::Render::Tessellator *this,
        const Scaleform::Render::Tessellator::PathType *path)
{
  signed int start; // edi
  signed int end; // esi
  Scaleform::Render::Tessellator::SrcVertexType **Pages; // rdx
  float y; // xmm1_4
  signed int v8; // er10
  unsigned int v9; // ebx
  int i; // er11
  signed int v11; // edi
  signed int v12; // esi
  Scaleform::Render::Tessellator::SrcVertexType **v13; // rdx
  signed int v14; // er10
  float v15; // xmm1_4
  float v16; // xmm0_4
  unsigned int v17; // ebx
  int j; // er11

  start = path->start;
  end = path->end;
  if ( (signed int)path->start < end )
  {
    do
    {
      Pages = this->SrcVertices.Pages;
      y = Pages[(unsigned __int64)start >> 4][start & 0xF].y;
      if ( start > (signed int)path->start )
      {
        if ( Pages[(unsigned __int64)(start - 1) >> 4][(start - 1) & 0xF].y >= y )
        {
          v8 = start + 1;
          if ( Pages[(unsigned __int64)(start + 1) >> 4][(start + 1) & 0xF].y > y )
          {
LABEL_7:
            v9 = 1;
            for ( i = v8 + 1;
                  v8 < end
               && this->SrcVertices.Pages[(unsigned __int64)v8 >> 4][v8 & 0xF].y < this->SrcVertices.Pages[(unsigned __int64)i >> 4][i & 0xF].y;
                  ++i )
            {
              ++v9;
              ++v8;
            }
            Scaleform::Render::Tessellator::buildEdgeList(this, start, v9, 1, path->leftStyle, path->rightStyle);
            start = v9 + start - 1;
          }
        }
      }
      else
      {
        v8 = start + 1;
        if ( Pages[(unsigned __int64)(start + 1) >> 4][(start + 1) & 0xF].y > y )
          goto LABEL_7;
      }
      end = path->end;
      ++start;
    }
    while ( start < end );
  }
  v11 = path->end;
  v12 = path->start;
  while ( v11 > (signed int)path->start )
  {
    v13 = this->SrcVertices.Pages;
    v14 = v11 - 1;
    v15 = v13[(unsigned __int64)v11 >> 4][v11 & 0xF].y;
    v16 = v13[(unsigned __int64)(v11 - 1) >> 4][(v11 - 1) & 0xF].y;
    if ( v11 < (signed int)path->end )
    {
      if ( v16 > v15 && v13[(unsigned __int64)(v11 + 1) >> 4][(v11 + 1) & 0xF].y >= v15 )
      {
LABEL_19:
        v17 = 1;
        for ( j = v11 - 2;
              v14 > v12
           && this->SrcVertices.Pages[(unsigned __int64)v14 >> 4][v14 & 0xF].y < this->SrcVertices.Pages[(unsigned __int64)j >> 4][j & 0xF].y;
              --j )
        {
          ++v17;
          --v14;
        }
        Scaleform::Render::Tessellator::buildEdgeList(this, v11, v17, -1, path->leftStyle, path->rightStyle);
        v11 += 1 - v17;
      }
    }
    else if ( v16 > v15 )
    {
      goto LABEL_19;
    }
    v12 = path->start;
    --v11;
  }
}

void __fastcall Scaleform::Render::Tessellator::emitStrokerTrapezoid(
        Scaleform::Render::Tessellator *this,
        const Scaleform::Render::Tessellator::StrokerEdgeType *edge,
        unsigned int v1,
        unsigned int v2)
{
  Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16> *p_MeshTriangles; // rbx
  Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::ArrayType *Arrays; // rsi
  unsigned __int64 v8; // rdi
  __int128 v9; // xmm0
  __int64 v10; // rcx
  Scaleform::Render::Tessellator::TriangleType *v11; // rax
  Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::ArrayType *v12; // rdi
  unsigned __int64 v13; // rsi
  __int64 v14; // rcx
  Scaleform::Render::Tessellator::TriangleType *v15; // rax
  __int128 v16; // [rsp+20h] [rbp-28h]
  Scaleform::Render::Tessellator::MonoVertexType *v17; // [rsp+30h] [rbp-18h]

  p_MeshTriangles = &this->MeshTriangles;
  Arrays = this->MeshTriangles.Arrays;
  LODWORD(v16) = edge->node1 & 0xFFFFFFF;
  DWORD1(v16) = v1;
  DWORD2(v16) = v2;
  v8 = Arrays->Size >> 4;
  if ( v8 >= Arrays->NumPages )
    Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::allocPage(
      &this->MeshTriangles,
      Arrays,
      Arrays->Size >> 4);
  v9 = v16;
  DWORD2(v16) = v2;
  v10 = Arrays->Size & 0xF;
  v11 = Arrays->Pages[v8];
  *(_OWORD *)&v11[v10].d.m.v1 = v9;
  v11[v10].d.m.v3 = v17;
  ++p_MeshTriangles->Arrays->Size;
  v12 = p_MeshTriangles->Arrays;
  LODWORD(v16) = edge->node2 & 0xFFFFFFF;
  v13 = v12->Size >> 4;
  DWORD1(v16) = edge->node1 & 0xFFFFFFF;
  if ( v13 >= v12->NumPages )
    Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::allocPage(
      p_MeshTriangles,
      v12,
      v13);
  v14 = v12->Size & 0xF;
  v15 = v12->Pages[v13];
  *(_OWORD *)&v15[v14].d.m.v1 = v16;
  v15[v14].d.m.v3 = v17;
  ++p_MeshTriangles->Arrays->Size;
}

void __fastcall Scaleform::Render::Tessellator::emitStrokerVertex(
        Scaleform::Render::Tessellator *this,
        float x,
        float y)
{
  Scaleform::Render::ArrayPaged<Scaleform::Render::TessVertex,4,16> *p_MeshVertices; // rbx
  unsigned __int64 v4; // rdi
  Scaleform::Render::TessVertex *v5; // rdx
  __int64 v6; // r8
  __int128 v7; // [rsp+20h] [rbp-28h]

  p_MeshVertices = &this->MeshVertices;
  *(_QWORD *)&v7 = __PAIR64__(LODWORD(y), LODWORD(x));
  v4 = this->MeshVertices.Size >> 4;
  *((_QWORD *)&v7 + 1) = 0x10001FFFFFFFFi64;
  if ( v4 >= this->MeshVertices.NumPages )
    Scaleform::Render::ArrayPaged<Scaleform::Render::TessVertex,4,16>::allocPage(&this->MeshVertices, v4);
  v5 = p_MeshVertices->Pages[v4];
  v6 = p_MeshVertices->Size & 0xF;
  *(_OWORD *)&v5[v6].x = v7;
  *(_DWORD *)&v5[v6].Flags = 0;
  ++p_MeshVertices->Size;
}

void __fastcall Scaleform::Render::Tessellator::emitTriangles(Scaleform::Render::Tessellator *this)
{
  unsigned int v1; // er9
  unsigned __int64 v3; // rsi
  Scaleform::Render::Tessellator::MonotoneType *v4; // rsi
  unsigned int prevIdx2; // er12
  unsigned int flags; // er14
  unsigned int v7; // er15
  __int64 v8; // r13
  Scaleform::Render::Tessellator::TriangleType *v9; // rdi
  Scaleform::Render::Tessellator::MonoVertexType *v10; // rax
  unsigned int aaVer; // ecx
  Scaleform::Render::Tessellator::MonoVertexType *v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  Scaleform::Render::Tessellator::InnerQuadType *v16; // rax
  Scaleform::Render::Tessellator::EdgeAAType *e1; // rdi
  Scaleform::Render::Tessellator::EdgeAAType *e2; // rsi
  int v19; // er15
  int v20; // er12
  unsigned int v21; // er10
  __int64 v22; // r13
  Scaleform::Render::TessMesh *v23; // r9
  unsigned int v24; // ecx
  Scaleform::Render::Tessellator::EdgeAAType *v25; // rax
  Scaleform::Render::Tessellator::MonoVertexType *rayVer; // rax
  Scaleform::Render::Tessellator::MonoVertexType *cntVer; // rcx
  Scaleform::Render::Tessellator::MonoVertexType *v28; // r14
  unsigned int v29; // edi
  Scaleform::Render::Tessellator::MonoVertexType *v30; // rax
  unsigned int v31; // esi
  int v32; // eax
  __int64 v33; // r12
  Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::ArrayType *v34; // rdi
  unsigned __int64 v35; // rsi
  __int64 v36; // r13
  __int64 v37; // rcx
  Scaleform::Render::Tessellator::TriangleType *v38; // rax
  Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::ArrayType *v39; // rdi
  unsigned __int64 v40; // rsi
  __int64 v41; // rcx
  Scaleform::Render::Tessellator::TriangleType *v42; // rax
  Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *p_OuterEdges; // r14
  unsigned __int64 Size; // r15
  unsigned int v45; // edx
  unsigned __int64 v46; // rdi
  Scaleform::Render::Tessellator::OuterEdgeType **Pages; // r13
  unsigned int *v48; // rdi
  __int64 v49; // r10
  __int64 v50; // r8
  Scaleform::Render::Tessellator::MonoVertexType *v51; // r11
  Scaleform::Render::Tessellator::OuterEdgeType **v52; // r14
  Scaleform::Render::Tessellator::EdgeAAType *edge; // rax
  bool v54; // cf
  int v55; // er13
  unsigned int v56; // eax
  unsigned int v57; // er15
  __int64 v58; // r12
  __int64 v59; // rsi
  unsigned int v60; // er14
  unsigned int v61; // eax
  __int64 v62; // r15
  __int64 v63; // r12
  int v64; // er13
  Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::ArrayType *v65; // rdi
  unsigned __int64 v66; // rsi
  __int128 v67; // xmm0
  __int64 v68; // r15
  __int64 v69; // rcx
  Scaleform::Render::Tessellator::TriangleType *v70; // rax
  Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::ArrayType *v71; // rdi
  unsigned __int64 v72; // rsi
  __int64 v73; // rcx
  Scaleform::Render::Tessellator::TriangleType *v74; // rax
  unsigned __int64 v75; // rdx
  unsigned int v76; // er15
  Scaleform::Render::Tessellator::StarVertexType **v77; // r11
  unsigned int v78; // edi
  unsigned __int64 v79; // rsi
  unsigned int v80; // er12
  Scaleform::Render::TessVertex **v81; // r10
  unsigned __int64 starVer; // rax
  __int64 v83; // rdx
  Scaleform::Render::TessVertex *v84; // rax
  unsigned int v85; // er13
  Scaleform::Render::TessVertex *v86; // r9
  unsigned __int64 v87; // rax
  __int64 v88; // r8
  unsigned __int64 v89; // rax
  __int64 v90; // rdx
  Scaleform::Render::TessVertex *v91; // rax
  unsigned int v92; // er14
  unsigned int v93; // ecx
  Scaleform::Render::Tessellator::StarVertexType **v94; // rdx
  Scaleform::Render::TessVertex **v95; // r9
  unsigned __int64 v96; // rdx
  Scaleform::Render::TessVertex *v97; // rax
  unsigned int v98; // esi
  int v99; // er12
  Scaleform::Render::TessVertex *v100; // rax
  unsigned int v101; // er14
  unsigned int v102; // er10
  Scaleform::Render::TessMesh *v103; // r13
  unsigned int v104; // eax
  unsigned int v105; // edx
  unsigned int v106; // eax
  Scaleform::Render::Tessellator::StarVertexType **v107; // rcx
  unsigned int v108; // er12
  unsigned int v109; // er11
  Scaleform::Render::TessMesh *v110; // rax
  unsigned int *Array; // rdx
  unsigned int v112; // er9
  unsigned int v113; // er10
  unsigned int v114; // er8
  int v115; // er13
  int v116; // esi
  int v117; // er12
  unsigned int v118; // eax
  unsigned int v119; // eax
  unsigned int v120; // ecx
  unsigned int v121; // esi
  unsigned int v122; // ecx
  __int64 v123; // r15
  Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::ArrayType *v124; // r14
  unsigned __int64 v125; // rsi
  __int64 v126; // rcx
  Scaleform::Render::Tessellator::TriangleType *v127; // rax
  unsigned int v128; // er12
  int v129; // ecx
  int v130; // eax
  unsigned int v131; // eax
  Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::ArrayType *v132; // rsi
  unsigned __int64 v133; // r14
  Scaleform::Render::Tessellator::TriangleType **v134; // rdx
  __int64 v135; // rax
  __int64 v136; // rcx
  Scaleform::Render::Tessellator::TriangleType *v137; // rax
  unsigned int v138; // [rsp+40h] [rbp-39h]
  unsigned int v139; // [rsp+40h] [rbp-39h]
  unsigned int v140; // [rsp+40h] [rbp-39h]
  __int128 v141; // [rsp+48h] [rbp-31h]
  Scaleform::Render::Tessellator::MonoVertexType *v142; // [rsp+58h] [rbp-21h]
  unsigned int v143; // [rsp+60h] [rbp-19h]
  unsigned int v144; // [rsp+60h] [rbp-19h]
  unsigned int v145; // [rsp+64h] [rbp-15h]
  __int64 ver; // [rsp+68h] [rbp-11h]
  unsigned int vera; // [rsp+68h] [rbp-11h]
  unsigned int v148; // [rsp+70h] [rbp-9h]
  Scaleform::Render::Tessellator::MonoVertexType *v149; // [rsp+78h] [rbp-1h]
  __int64 v150; // [rsp+80h] [rbp+7h]
  unsigned int style2; // [rsp+E0h] [rbp+67h]
  unsigned int style2a; // [rsp+E0h] [rbp+67h]
  unsigned int style2b; // [rsp+E0h] [rbp+67h]
  unsigned int style2c; // [rsp+E0h] [rbp+67h]
  int style2d; // [rsp+E0h] [rbp+67h]
  unsigned int meshIdx; // [rsp+E8h] [rbp+6Fh]
  unsigned int meshIdxa; // [rsp+E8h] [rbp+6Fh]
  unsigned int meshIdxb; // [rsp+E8h] [rbp+6Fh]
  unsigned int meshIdxc; // [rsp+E8h] [rbp+6Fh]
  Scaleform::Render::Tessellator::MonoVertexType *style1; // [rsp+F0h] [rbp+77h]
  unsigned int *style1a; // [rsp+F0h] [rbp+77h]
  int style1b; // [rsp+F0h] [rbp+77h]
  unsigned int style1c; // [rsp+F0h] [rbp+77h]
  unsigned int style1d; // [rsp+F0h] [rbp+77h]
  Scaleform::Render::Tessellator::MonoVertexType *v165; // [rsp+F8h] [rbp+7Fh]
  __int64 v166; // [rsp+F8h] [rbp+7Fh]
  unsigned int v167; // [rsp+F8h] [rbp+7Fh]
  unsigned int v168; // [rsp+F8h] [rbp+7Fh]

  v1 = 0;
  style2 = 0;
  if ( this->Monotones.Size )
  {
    v3 = 0i64;
    do
    {
      v4 = &this->Monotones.Pages[v3 >> 4][v3 & 0xF];
      if ( v4->d.m.prevIdx1 )
      {
        prevIdx2 = v4->d.m.prevIdx2;
        flags = 2;
        if ( v4->style == this->Meshes.Pages[(unsigned __int64)prevIdx2 >> 4][prevIdx2 & 0xF].Style1 )
          flags = 10;
        v7 = 0;
        v8 = v4->d.m.prevIdx2;
        do
        {
          v9 = &this->MeshTriangles.Arrays[v8].Pages[(unsigned __int64)(v7 + v4->d.m.lastIdx) >> 4][((_BYTE)v7 + LOBYTE(v4->d.m.lastIdx)) & 0xF];
          v9->d.m.v1->aaVer = Scaleform::Render::Tessellator::emitVertex(
                                this,
                                prevIdx2,
                                v9->d.m.v1->aaVer,
                                v4->style,
                                flags);
          v9->d.m.v2->aaVer = Scaleform::Render::Tessellator::emitVertex(
                                this,
                                prevIdx2,
                                v9->d.m.v2->aaVer,
                                v4->style,
                                flags);
          ++v7;
          v9->d.m.v3->aaVer = Scaleform::Render::Tessellator::emitVertex(
                                this,
                                prevIdx2,
                                v9->d.m.v3->aaVer,
                                v4->style,
                                flags);
          v10 = v9->d.m.v2;
          v9->d.t.v1 = v9->d.m.v1->aaVer & 0xFFFFFFF;
          aaVer = v10->aaVer;
          v12 = v9->d.m.v3;
          v9->d.t.v2 = aaVer & 0xFFFFFFF;
          v9->d.t.v3 = v12->aaVer & 0xFFFFFFF;
        }
        while ( v7 < v4->d.m.prevIdx1 );
        v1 = style2;
      }
      v3 = ++v1;
      style2 = v1;
    }
    while ( v1 < this->Monotones.Size );
  }
  style2a = 0;
  if ( this->InnerQuads.Size )
  {
    v13 = 0i64;
    do
    {
      v14 = v13 >> 4;
      v15 = v13 & 0xF;
      v16 = this->InnerQuads.Pages[v14];
      e1 = v16[v15].e1;
      e2 = v16[v15].e2;
      v19 = e1->style & 0x7FFF;
      v20 = e2->style & 0x7FFF;
      v21 = Scaleform::Render::Tessellator::setMesh(this, v19, v20);
      meshIdx = v21;
      v22 = v21;
      v23 = &this->Meshes.Pages[(unsigned __int64)v21 >> 4][v21 & 0xF];
      v24 = v23->Style1;
      if ( v24 && v19 != v24 )
      {
        v25 = e1;
        e1 = e2;
        e2 = v25;
        LODWORD(v25) = v19;
        v19 = v20;
        v20 = (int)v25;
      }
      rayVer = e1->rayVer;
      cntVer = e2->cntVer;
      v28 = e1->cntVer;
      v29 = 42;
      v149 = rayVer;
      v30 = e2->rayVer;
      v31 = v19;
      style1 = v30;
      v32 = (v23->Flags1 ^ v23->Flags2) & 0x8000;
      v165 = cntVer;
      if ( v32 )
        v31 = v20;
      if ( !v32 )
        v29 = 10;
      v28->aaVer = Scaleform::Render::Tessellator::emitVertex(this, v21, v28->aaVer, v19, v31, v29, 0);
      v149->aaVer = Scaleform::Render::Tessellator::emitVertex(this, meshIdx, v149->aaVer, v19, v31, v29, 0);
      v165->aaVer = Scaleform::Render::Tessellator::emitVertex(this, meshIdx, v165->aaVer, v20, 2u);
      style1->aaVer = Scaleform::Render::Tessellator::emitVertex(this, meshIdx, style1->aaVer, v20, 2u);
      LODWORD(v141) = v28->aaVer & 0xFFFFFFF;
      v33 = v22;
      v34 = &this->MeshTriangles.Arrays[v22];
      DWORD1(v141) = v149->aaVer & 0xFFFFFFF;
      DWORD2(v141) = v165->aaVer & 0xFFFFFFF;
      v35 = v34->Size >> 4;
      if ( v35 >= v34->NumPages )
        Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::allocPage(
          &this->MeshTriangles,
          v34,
          v34->Size >> 4);
      v36 = v22;
      v37 = v34->Size & 0xF;
      v38 = v34->Pages[v35];
      *(_OWORD *)&v38[v37].d.m.v1 = v141;
      v38[v37].d.m.v3 = v142;
      ++this->MeshTriangles.Arrays[v33].Size;
      v39 = &this->MeshTriangles.Arrays[v36];
      LODWORD(v141) = style1->aaVer & 0xFFFFFFF;
      v40 = v39->Size >> 4;
      DWORD1(v141) = v165->aaVer & 0xFFFFFFF;
      DWORD2(v141) = v149->aaVer & 0xFFFFFFF;
      if ( v40 >= v39->NumPages )
        Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::allocPage(
          &this->MeshTriangles,
          v39,
          v40);
      v41 = v39->Size & 0xF;
      v42 = v39->Pages[v40];
      *(_OWORD *)&v42[v41].d.m.v1 = v141;
      v42[v41].d.m.v3 = v142;
      ++this->MeshTriangles.Arrays[v36].Size;
      v13 = ++style2a;
    }
    while ( style2a < this->InnerQuads.Size );
  }
  p_OuterEdges = &this->OuterEdges;
  Scaleform::Alg::QuickSortSliced<Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16>,bool (*)(Scaleform::Render::Tessellator::OuterEdgeType const &,Scaleform::Render::Tessellator::OuterEdgeType const &)>(
    &this->OuterEdges,
    0i64,
    this->OuterEdges.Size,
    Scaleform::Render::Tessellator::cmpOuterEdges);
  Size = this->OuterEdges.Size;
  v45 = 0;
  style2b = 0;
  if ( Size )
  {
    v46 = 0i64;
    do
    {
      Pages = this->OuterEdges.Pages;
      v48 = (unsigned int *)&Pages[v46 >> 4][v46 & 0xF];
      style1a = v48;
      if ( (v48[2] & 0x40000000) == 0 )
      {
        v49 = 0i64;
        v50 = p_OuterEdges->Size;
        v51 = *(Scaleform::Render::Tessellator::MonoVertexType **)(*(_QWORD *)v48 + 8i64);
        if ( v50 > 0 )
        {
          v52 = p_OuterEdges->Pages;
          do
          {
            edge = v52[(unsigned __int64)((v50 >> 1) + v49) >> 4][((unsigned __int8)(v50 >> 1) + (_BYTE)v49) & 0xF].edge;
            v54 = edge->cntVer < v51;
            if ( edge->cntVer == v51 )
              v54 = edge->rayVer < (Scaleform::Render::Tessellator::MonoVertexType *)**(_QWORD **)v48;
            if ( v54 )
            {
              v49 += (v50 >> 1) + 1;
              v50 += -1 - (v50 >> 1);
            }
            else
            {
              v50 >>= 1;
            }
          }
          while ( v50 > 0 );
          v45 = style2b;
        }
        if ( (unsigned int)v49 < Size )
        {
          v166 = (__int64)&Pages[(unsigned __int64)(unsigned int)v49 >> 4][v49 & 0xF];
          if ( **(Scaleform::Render::Tessellator::MonoVertexType ***)v166 == v51 )
          {
            v55 = *(_WORD *)(*(_QWORD *)v48 + 16i64) & 0x7FFF;
            v56 = Scaleform::Render::Tessellator::setMesh(this, v55);
            v57 = 0;
            v58 = v56;
            if ( v55 == this->Meshes.Pages[(unsigned __int64)v56 >> 4][v56 & 0xF].Style1 )
              v57 = 8;
            v59 = *(_QWORD *)(*(_QWORD *)v48 + 8i64);
            v60 = Scaleform::Render::Tessellator::emitVertex(
                    this,
                    v56,
                    *(_DWORD *)(**(_QWORD **)v48 + 4i64),
                    v55,
                    v57 | 2);
            meshIdxa = Scaleform::Render::Tessellator::emitVertex(this, v58, *(_DWORD *)(v59 + 4), v55, v57 | 2);
            v48[2] = Scaleform::Render::Tessellator::emitVertex(this, v58, v48[2], v55, v57) | 0x40000000;
            v61 = Scaleform::Render::Tessellator::emitVertex(this, v58, *(_DWORD *)(v166 + 8), v55, v57);
            *(_QWORD *)&v141 = __PAIR64__(meshIdxa, v60);
            *(_DWORD *)(v166 + 8) = v61 | 0x40000000;
            v62 = (unsigned int)v58;
            v63 = v58;
            v64 = v61 & 0xFFFFFFF;
            v65 = &this->MeshTriangles.Arrays[v63];
            style1b = style1a[2] & 0xFFFFFFF;
            DWORD2(v141) = style1b;
            v66 = v65->Size >> 4;
            if ( v66 >= v65->NumPages )
              Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::allocPage(
                &this->MeshTriangles,
                v65,
                v65->Size >> 4);
            v67 = v141;
            v68 = v62;
            v69 = v65->Size & 0xF;
            *(_QWORD *)&v141 = __PAIR64__(style1b, v64);
            v70 = v65->Pages[v66];
            *(_OWORD *)&v70[v69].d.m.v1 = v67;
            v70[v69].d.m.v3 = v142;
            ++this->MeshTriangles.Arrays[v63].Size;
            v71 = &this->MeshTriangles.Arrays[v68];
            DWORD2(v141) = meshIdxa;
            v72 = v71->Size >> 4;
            if ( v72 >= v71->NumPages )
              Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::allocPage(
                &this->MeshTriangles,
                v71,
                v71->Size >> 4);
            v73 = v71->Size & 0xF;
            v74 = v71->Pages[v72];
            v45 = style2b;
            *(_OWORD *)&v74[v73].d.m.v1 = v141;
            v74[v73].d.m.v3 = v142;
            ++this->MeshTriangles.Arrays[v68].Size;
          }
        }
      }
      Size = this->OuterEdges.Size;
      p_OuterEdges = &this->OuterEdges;
      v46 = ++v45;
      style2b = v45;
    }
    while ( v45 < Size );
  }
  v75 = this->StarVertices.Size;
  v76 = 0;
  if ( v75 )
  {
    do
    {
      v77 = this->StarVertices.Pages;
      v78 = v76;
      v79 = v76;
      ver = v76;
      v143 = v77[(unsigned __int64)v76 >> 4][v76 & 0xF].cntVer;
      do
        v80 = v78++;
      while ( v78 < v75
           && v77[(unsigned __int64)v76 >> 4][v76 & 0xF].cntVer == v77[(unsigned __int64)v78 >> 4][v78 & 0xF].cntVer );
      if ( v76 + 3 == v78 )
      {
        v81 = this->MeshVertices.Pages;
        starVer = v77[(unsigned __int64)v76 >> 4][v76 & 0xF].starVer;
        v83 = starVer & 0xF;
        v84 = v81[starVer >> 4];
        v85 = v84[v83].Styles[0];
        v86 = &v84[v83];
        style1c = v85;
        v87 = v77[(unsigned __int64)(v76 + 1) >> 4][((_BYTE)v76 + 1) & 0xF].starVer;
        v88 = (__int64)&v81[v87 >> 4][v87 & 0xF];
        meshIdxb = *(unsigned __int16 *)(v88 + 12);
        v89 = v77[(unsigned __int64)(v76 + 2) >> 4][(v76 + 2) & 0xF].starVer;
        v90 = v89 & 0xF;
        v91 = v81[v89 >> 4];
        style2c = v91[v90].Styles[0];
        v167 = v86->Flags;
        v145 = *(unsigned __int16 *)(v88 + 16);
        v148 = v91[v90].Flags;
        v138 = Scaleform::Render::Tessellator::setMesh(this, v85, meshIdxb);
        v92 = Scaleform::Render::Tessellator::setMesh(this, meshIdxb, style2c);
        v93 = Scaleform::Render::Tessellator::setMesh(this, style2c, v85);
        if ( v138 == v92 || v138 == v93 )
        {
          v92 = v138;
        }
        else if ( v92 != v93 )
        {
          goto LABEL_55;
        }
        if ( v92 != -1 )
        {
          v107 = this->StarVertices.Pages;
          v108 = -1;
          DWORD2(v141) = -1;
          *(_QWORD *)&v141 = -1i64;
          v109 = v107[(unsigned __int64)v76 >> 4][v76 & 0xF].starVer;
          v144 = v109;
          vera = v107[(unsigned __int64)(v76 + 1) >> 4][(v76 + 1) & 0xF].starVer;
          v140 = v107[(unsigned __int64)(v76 + 2) >> 4][(v76 + 2) & 0xF].starVer;
          v110 = this->Meshes.Pages[(unsigned __int64)v92 >> 4];
          if ( ((v110[v92 & 0xF].Flags1 ^ v110[v92 & 0xF].Flags2) & 0x8000) != 0 )
          {
            Array = this->ComplexFlags.Array;
            v112 = meshIdxb;
            v113 = style2c;
            v114 = v85;
            v115 = Array[(unsigned __int64)v85 >> 5] & (1 << (v85 & 0x1F));
            v116 = Array[(unsigned __int64)meshIdxb >> 5] & (1 << (meshIdxb & 0x1F));
            v117 = Array[(unsigned __int64)style2c >> 5] & (1 << (style2c & 0x1F));
            if ( v115 )
            {
              v118 = meshIdxb;
              if ( v116 )
                v118 = style2c;
              v119 = Scaleform::Render::Tessellator::emitVertex(this, v92, v109, v114, v118, v167 | 0x20, 0);
              v114 = style1c;
              v112 = meshIdxb;
              v113 = style2c;
              LODWORD(v141) = v119;
            }
            if ( v116 )
            {
              v120 = v113;
              if ( v117 )
                v120 = v114;
              DWORD1(v141) = Scaleform::Render::Tessellator::emitVertex(this, v92, vera, v112, v120, v145 | 0x20, 0);
            }
            v121 = meshIdxb;
            if ( v117 )
            {
              v122 = style1c;
              if ( v115 )
                v122 = meshIdxb;
              v108 = Scaleform::Render::Tessellator::emitVertex(this, v92, v140, style2c, v122, v148 | 0x20, 0);
              DWORD2(v141) = v108;
            }
            else
            {
              v108 = -1;
            }
            if ( (_DWORD)v141 == -1 )
            {
              v85 = style1c;
              v109 = v144;
              goto LABEL_78;
            }
          }
          else
          {
            v121 = meshIdxb;
LABEL_78:
            LODWORD(v141) = Scaleform::Render::Tessellator::emitVertex(this, v92, v109, v85, v167);
          }
          if ( DWORD1(v141) == -1 )
            DWORD1(v141) = Scaleform::Render::Tessellator::emitVertex(this, v92, vera, v121, v145);
          if ( v108 == -1 )
            DWORD2(v141) = Scaleform::Render::Tessellator::emitVertex(this, v92, v140, style2c, v148);
          v123 = v92;
          v124 = &this->MeshTriangles.Arrays[v123];
          v125 = v124->Size >> 4;
          if ( v125 >= v124->NumPages )
            Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::allocPage(
              &this->MeshTriangles,
              &this->MeshTriangles.Arrays[v123],
              v124->Size >> 4);
          v126 = v124->Size & 0xF;
          v127 = v124->Pages[v125];
          *(_OWORD *)&v127[v126].d.m.v1 = v141;
          v127[v126].d.m.v3 = v142;
          ++this->MeshTriangles.Arrays[v123].Size;
          goto LABEL_95;
        }
      }
LABEL_55:
      while ( v76 < v78 )
      {
        v94 = this->StarVertices.Pages;
        v95 = this->MeshVertices.Pages;
        meshIdxc = v94[(unsigned __int64)v80 >> 4][v80 & 0xF].starVer;
        v96 = v94[v79 >> 4][v79 & 0xF].starVer;
        style1d = v96;
        v97 = v95[(unsigned __int64)meshIdxc >> 4];
        v98 = v97[meshIdxc & 0xF].Styles[0];
        v99 = v97[meshIdxc & 0xF].Flags & 2;
        v168 = v99;
        v100 = v95[v96 >> 4];
        v101 = v100[v96 & 0xF].Styles[0];
        style2d = v100[v96 & 0xF].Flags & 2;
        v102 = Scaleform::Render::Tessellator::setMesh(this, v98, v101);
        v150 = v102;
        v139 = v102;
        v103 = &this->Meshes.Pages[(unsigned __int64)v102 >> 4][v102 & 0xF];
        v104 = v103->Style1;
        if ( !v104 || v98 == v104 )
        {
          v105 = meshIdxc;
        }
        else
        {
          v105 = style1d;
          style1d = meshIdxc;
          v106 = v98;
          v98 = v101;
          v101 = v106;
          v168 = style2d;
          style2d = v99;
        }
        v128 = v98;
        v129 = v168 | 8;
        if ( ((v103->Flags1 ^ v103->Flags2) & 0x8000) != 0 )
        {
          v128 = v101;
          v129 = v168 | 0x28;
        }
        LODWORD(v141) = Scaleform::Render::Tessellator::emitVertex(this, v102, v105, v98, v128, v129, 0);
        DWORD1(v141) = Scaleform::Render::Tessellator::emitVertex(this, v139, style1d, v101, style2d);
        if ( ((v103->Flags1 | v103->Flags2) & 0x8000) != 0 )
        {
          v130 = 36;
        }
        else
        {
          v128 = v101;
          v130 = 16;
        }
        v131 = Scaleform::Render::Tessellator::emitVertex(
                 this,
                 v139,
                 v143,
                 v98,
                 v128,
                 (((v168 & style2d) != 0) + 1) | v130,
                 1);
        v132 = &this->MeshTriangles.Arrays[v150];
        DWORD2(v141) = v131;
        v133 = v132->Size >> 4;
        if ( v133 >= v132->NumPages )
          Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::allocPage(
            &this->MeshTriangles,
            v132,
            v132->Size >> 4);
        v134 = v132->Pages;
        v135 = v132->Size & 0xF;
        v79 = ver + 1;
        v136 = v135;
        v137 = v134[v133];
        ++ver;
        *(_OWORD *)&v137[v136].d.m.v1 = v141;
        v137[v136].d.m.v3 = v142;
        ++this->MeshTriangles.Arrays[v150].Size;
        v80 = v76++;
      }
LABEL_95:
      v75 = this->StarVertices.Size;
      v76 = v78;
    }
    while ( v78 < v75 );
  }
}

__int64 __fastcall Scaleform::Render::Tessellator::emitVertex(
        Scaleform::Render::Tessellator *this,
        unsigned int meshIdx,
        unsigned int ver,
        unsigned int style,
        unsigned int flags)
{
  Scaleform::Render::TessVertex **Pages; // rbx
  unsigned int v6; // er8
  Scaleform::Render::TessVertex *v8; // rax
  unsigned int Idx; // edx
  __int64 v10; // rax
  __int64 result; // rax
  Scaleform::Render::ArrayPaged<Scaleform::Render::TessVertex,4,16> *p_MeshVertices; // rbx
  unsigned __int64 Size; // rsi
  unsigned __int64 v14; // rdi
  __int64 v15; // rdx
  Scaleform::Render::TessVertex *v16; // rcx
  __int128 v17; // [rsp+20h] [rbp-28h]
  int v18; // [rsp+30h] [rbp-18h]

  Pages = this->MeshVertices.Pages;
  v6 = ver & 0xFFFFFFF;
  v8 = Pages[(unsigned __int64)v6 >> 4];
  Idx = v8[v6 & 0xF].Idx;
  v10 = (__int64)&v8[v6 & 0xF];
  if ( Idx == -1 )
  {
    *(_DWORD *)(v10 + 8) = v6;
    *(_WORD *)(v10 + 14) = style;
    *(_WORD *)(v10 + 12) = style;
    *(_WORD *)(v10 + 16) = flags;
    *(_WORD *)(v10 + 18) = meshIdx;
    return v6;
  }
  if ( *(unsigned __int16 *)(v10 + 18) == meshIdx && *(unsigned __int16 *)(v10 + 12) == style )
    return v6;
  if ( Idx != v6 )
  {
    do
    {
      v6 = *(_DWORD *)(v10 + 8);
      v10 = (__int64)&Pages[(unsigned __int64)v6 >> 4][v6 & 0xF];
      if ( *(unsigned __int16 *)(v10 + 18) == meshIdx && *(unsigned __int16 *)(v10 + 12) == style )
        return v6;
    }
    while ( *(_DWORD *)(v10 + 8) != v6 );
  }
  p_MeshVertices = &this->MeshVertices;
  Size = this->MeshVertices.Size;
  *(_DWORD *)(v10 + 8) = Size;
  *(_QWORD *)&v17 = *(_QWORD *)v10;
  v14 = this->MeshVertices.Size >> 4;
  DWORD2(v17) = Size;
  HIWORD(v17) = style;
  WORD6(v17) = style;
  LOWORD(v18) = flags;
  HIWORD(v18) = meshIdx;
  if ( v14 >= this->MeshVertices.NumPages )
    Scaleform::Render::ArrayPaged<Scaleform::Render::TessVertex,4,16>::allocPage(p_MeshVertices, v14);
  result = (unsigned int)Size;
  v15 = p_MeshVertices->Size & 0xF;
  v16 = p_MeshVertices->Pages[v14];
  *(_OWORD *)&v16[v15].x = v17;
  *(_DWORD *)&v16[v15].Flags = v18;
  ++p_MeshVertices->Size;
  return result;
}

__int64 __fastcall Scaleform::Render::Tessellator::emitVertex(
        Scaleform::Render::Tessellator *this,
        unsigned int meshIdx,
        unsigned int ver,
        unsigned int style1,
        unsigned int style2,
        unsigned int flags,
        bool strictStyle)
{
  Scaleform::Render::TessVertex **Pages; // rsi
  unsigned int v8; // er8
  Scaleform::Render::TessVertex *v11; // rax
  unsigned int Idx; // edx
  __int64 v13; // rax
  __int64 result; // rax
  unsigned __int64 Size; // rsi
  unsigned __int64 v16; // rdi
  __int64 v17; // rdx
  Scaleform::Render::TessVertex *v18; // rcx
  __int128 v19; // [rsp+20h] [rbp-28h]
  int v20; // [rsp+30h] [rbp-18h]

  Pages = this->MeshVertices.Pages;
  v8 = ver & 0xFFFFFFF;
  v11 = Pages[(unsigned __int64)v8 >> 4];
  Idx = v11[v8 & 0xF].Idx;
  v13 = (__int64)&v11[v8 & 0xF];
  if ( Idx == -1 )
  {
    *(_DWORD *)(v13 + 8) = v8;
    *(_WORD *)(v13 + 14) = style2;
    *(_WORD *)(v13 + 12) = style1;
    *(_WORD *)(v13 + 16) = flags;
    *(_WORD *)(v13 + 18) = meshIdx;
    return v8;
  }
  if ( *(unsigned __int16 *)(v13 + 18) == meshIdx
    && *(unsigned __int16 *)(v13 + 12) == style1
    && *(unsigned __int16 *)(v13 + 14) == style2
    && (!strictStyle || *(unsigned __int16 *)(v13 + 16) == flags) )
  {
    return v8;
  }
  if ( Idx != v8 )
  {
    do
    {
      v8 = *(_DWORD *)(v13 + 8);
      v13 = (__int64)&Pages[(unsigned __int64)v8 >> 4][v8 & 0xF];
      if ( *(unsigned __int16 *)(v13 + 18) == meshIdx
        && *(unsigned __int16 *)(v13 + 12) == style1
        && *(unsigned __int16 *)(v13 + 14) == style2
        && (!strictStyle || *(unsigned __int16 *)(v13 + 16) == flags) )
      {
        return v8;
      }
    }
    while ( *(_DWORD *)(v13 + 8) != v8 );
  }
  Size = this->MeshVertices.Size;
  *(_DWORD *)(v13 + 8) = Size;
  HIWORD(v20) = meshIdx;
  *(_QWORD *)&v19 = *(_QWORD *)v13;
  v16 = this->MeshVertices.Size >> 4;
  DWORD2(v19) = Size;
  WORD6(v19) = style1;
  HIWORD(v19) = style2;
  LOWORD(v20) = flags;
  if ( v16 >= this->MeshVertices.NumPages )
    Scaleform::Render::ArrayPaged<Scaleform::Render::TessVertex,4,16>::allocPage(&this->MeshVertices, v16);
  result = (unsigned int)Size;
  v17 = this->MeshVertices.Size & 0xF;
  v18 = this->MeshVertices.Pages[v16];
  *(_OWORD *)&v18[v17].x = v19;
  *(_DWORD *)&v18[v17].Flags = v20;
  ++this->MeshVertices.Size;
  return result;
}

void __fastcall Scaleform::Render::Tessellator::monotonize(Scaleform::Render::Tessellator *this)
{
  unsigned __int64 i; // rbp
  unsigned __int64 v3; // rsi
  float y; // xmm3_4
  unsigned __int64 v5; // r8
  unsigned __int64 j; // rdx
  unsigned int **Pages; // rbx
  __int64 v8; // r9
  Scaleform::Render::Tessellator::SrcVertexType *v9; // r10
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 k; // rbx
  unsigned __int64 Size; // rbp
  void *v14; // r14
  Scaleform::Render::Tessellator::MonoChainType **Array; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r10
  unsigned int v18; // er15
  unsigned int v19; // ebx
  unsigned __int64 v20; // rcx
  float v21; // xmm7_4
  unsigned __int64 v22; // rax
  float v23; // xmm6_4
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rcx
  unsigned int v26; // er9
  unsigned int Scanbeam; // eax
  char v28; // bp
  unsigned __int64 v29; // r8
  unsigned __int64 m; // rdx
  Scaleform::Render::Tessellator::MonoChainType ***v31; // r9
  Scaleform::Render::Tessellator::MonoChainType *v32; // r10
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rcx

  if ( this->SrcVertices.Size )
  {
    Scaleform::Render::ArrayUnsafe<int>::Resize(&this->StyleCounts, this->MaxStyle + 1);
    for ( i = 0i64; i < this->SrcVertices.Size; ++this->Scanbeams.Size )
    {
      v3 = this->Scanbeams.Size >> 4;
      if ( v3 >= this->Scanbeams.NumPages )
        Scaleform::Render::ArrayPaged<unsigned int,4,16>::allocPage(&this->Scanbeams, this->Scanbeams.Size >> 4);
      this->Scanbeams.Pages[v3][this->Scanbeams.Size & 0xF] = i++;
    }
    Scaleform::Alg::QuickSortSliced<Scaleform::Render::ArrayPaged<unsigned int,4,16>,Scaleform::Render::Tessellator::CmpScanbeams>(
      &this->Scanbeams,
      0i64,
      this->Scanbeams.Size,
      (Scaleform::Render::Tessellator::CmpScanbeams)&this->SrcVertices);
    y = FLOAT_N1_0e30;
    v5 = 0i64;
    for ( j = 0i64; j < this->Scanbeams.Size; ++j )
    {
      Pages = this->Scanbeams.Pages;
      v8 = Pages[j >> 4][j & 0xF] & 0xF;
      v9 = this->SrcVertices.Pages[(unsigned __int64)Pages[j >> 4][j & 0xF] >> 4];
      if ( (float)(v9[v8].y - y) <= (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v9[v8].y) & _xmm) * this->Epsilon) )
      {
        v9[v8].y = y;
      }
      else
      {
        v10 = v5 >> 4;
        v11 = v5++ & 0xF;
        Pages[v10][v11] = Pages[j >> 4][j & 0xF];
        y = v9[v8].y;
      }
    }
    if ( v5 < this->Scanbeams.Size )
      this->Scanbeams.Size = v5;
    for ( k = 0i64; k < this->Paths.Size; ++k )
      Scaleform::Render::Tessellator::decomposePath(this, &this->Paths.Pages[k >> 4][k & 0xF]);
    Size = this->MonoChains.Size;
    if ( Size > this->MonoChainsSorted.Size )
    {
      v14 = Scaleform::Render::LinearHeap::Alloc(this->MonoChainsSorted.pHeap, 8 * Size);
      memset(v14, 0, 8 * Size);
      Array = this->MonoChainsSorted.Array;
      if ( Array )
      {
        v16 = this->MonoChainsSorted.Size;
        if ( v16 )
          memmove(v14, Array, 8 * v16);
      }
      this->MonoChainsSorted.Array = (Scaleform::Render::Tessellator::MonoChainType **)v14;
    }
    v17 = 0i64;
    for ( this->MonoChainsSorted.Size = Size; v17 < this->MonoChains.Size; ++v17 )
      this->MonoChainsSorted.Array[v17] = &this->MonoChains.Pages[v17 >> 4][v17 & 0xF];
    Scaleform::Alg::QuickSortSliced<Scaleform::Render::ArrayUnsafe<Scaleform::Render::Tessellator::MonoChainType *>,bool (*)(Scaleform::Render::Tessellator::MonoChainType const *,Scaleform::Render::Tessellator::MonoChainType const *)>(
      &this->MonoChainsSorted,
      0i64,
      this->MonoChainsSorted.Size,
      (bool (__fastcall *)(const Scaleform::Render::Tessellator::MonoChainType *, const Scaleform::Render::Tessellator::MonoChainType *))Scaleform::Render::Hairliner::cmpMonoChains);
    v18 = 0;
    v19 = 0;
    v20 = **this->Scanbeams.Pages;
    v21 = this->SrcVertices.Pages[v20 >> 4][v20 & 0xF].y;
    v22 = this->Scanbeams.Size;
    v23 = v21;
    if ( v22 )
    {
      v24 = 0i64;
      do
      {
        if ( ++v18 < v22 )
          v21 = this->SrcVertices.Pages[(unsigned __int64)this->Scanbeams.Pages[(unsigned __int64)v18 >> 4][v18 & 0xF] >> 4][this->Scanbeams.Pages[(unsigned __int64)v18 >> 4][v18 & 0xF] & 0xF].y;
        v25 = this->MonoChainsSorted.Size;
        v26 = v19;
        if ( v24 < v25 )
        {
          do
          {
            if ( v23 < this->MonoChainsSorted.Array[v24]->ySort )
              break;
            v24 = ++v19;
          }
          while ( v19 < v25 );
        }
        Scanbeam = Scaleform::Render::Tessellator::nextScanbeam(this, v23, v21, v26, v19 - v26);
        v28 = Scanbeam;
        if ( this->Intersections.Size )
        {
          Scaleform::Render::Tessellator::processInterior(this, v23, v21, Scanbeam);
        }
        else
        {
          if ( Scanbeam )
            Scaleform::Render::Tessellator::perceiveStyles(this, &this->ActiveChains);
          Scaleform::Render::Tessellator::sweepScanbeam(this, &this->ActiveChains, v23);
        }
        if ( (v28 & 2) != 0 )
        {
          v29 = 0i64;
          for ( m = 0i64; m < this->ActiveChains.Size; ++m )
          {
            v31 = this->ActiveChains.Pages;
            v32 = v31[m >> 4][m & 0xF];
            if ( (v32->flags & 2) == 0 )
            {
              v33 = v29 >> 4;
              v34 = v29++ & 0xF;
              v31[v33][v34] = v32;
            }
          }
          if ( v29 < this->ActiveChains.Size )
            this->ActiveChains.Size = v29;
        }
        v22 = this->Scanbeams.Size;
        v23 = v21;
      }
      while ( v18 < v22 );
    }
  }
}

void __fastcall Scaleform::Render::Tessellator::moveVertexAA(
        Scaleform::Render::Tessellator *this,
        const Scaleform::Render::TessVertex *refVer,
        Scaleform::Render::TessVertex *aaVer,
        const Scaleform::Render::TessVertex *v2,
        const Scaleform::Render::TessVertex *v3)
{
  float x; // xmm8_4
  float v6; // xmm9_4
  float y; // xmm11_4
  float v8; // xmm10_4
  float v9; // xmm14_4
  float v10; // xmm13_4
  float v11; // xmm12_4
  float v12; // xmm4_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm1_4

  x = refVer->x;
  v6 = aaVer->x - refVer->x;
  y = refVer->y;
  v8 = aaVer->y - y;
  v9 = v3->x - v2->x;
  v10 = v3->y - v2->y;
  v11 = (float)(v6 * v10) - (float)(v9 * v8);
  v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(y - aaVer->y)) & _xmm);
  v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(refVer->x - aaVer->x)) & _xmm);
  v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v2->x - v3->x)) & _xmm);
  if ( (float)((float)((float)((float)(v12 + v13) + v14)
                     + (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v2->y - v3->y)) & _xmm))
             * this->IntersectionEpsilon) > COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v11) & _xmm)
    || (v15 = (float)((float)((float)(y - v2->y) * v9) - (float)((float)(x - v2->x) * v10)) / v11, v15 <= 0.0)
    || v15 >= 1.0 )
  {
    aaVer->x = x;
    aaVer->y = refVer->y;
  }
  else
  {
    aaVer->x = (float)((float)(x - (float)((float)(v6 * v15) + x)) * 0.125) + (float)((float)(v6 * v15) + x);
    aaVer->y = (float)((float)(refVer->y - (float)((float)(v8 * v15) + y)) * 0.125) + (float)((float)(v8 * v15) + y);
  }
}

__int64 __fastcall Scaleform::Render::Tessellator::nextScanbeam(
        Scaleform::Render::Tessellator *this,
        float yb,
        float yt,
        unsigned int startMc,
        unsigned int numMc)
{
  float y; // xmm6_4
  unsigned int v7; // er13
  __int64 v9; // r12
  unsigned int v10; // ebp
  unsigned __int64 v11; // r14
  Scaleform::Render::Tessellator::MonoChainType *v12; // rbx
  unsigned int edge; // er10
  int dir; // er15
  __int64 v15; // r9
  Scaleform::Render::Tessellator::SrcVertexType **Pages; // rsi
  Scaleform::Render::Tessellator::EdgeType *v17; // r11
  unsigned int v18; // edx
  __int64 v19; // r9
  Scaleform::Render::Tessellator::EdgeType *v20; // r10
  Scaleform::Render::Tessellator::SrcVertexType **v21; // rcx
  unsigned int lower; // edx
  __int64 v23; // r8
  Scaleform::Render::Tessellator::SrcVertexType *v24; // r11
  float x; // xmm0_4
  __int64 v26; // r8
  Scaleform::Render::Tessellator::SrcVertexType *v27; // rdx
  unsigned __int64 v28; // rbp
  unsigned int *v29; // rax
  float xt; // eax
  __int64 v31; // rdx
  Scaleform::Render::Tessellator::SrcVertexType *v32; // rcx
  float v33; // xmm0_4
  __int64 v34; // r8
  Scaleform::Render::Tessellator::SrcVertexType *v35; // rdx
  unsigned __int64 v36; // rsi
  __int64 v37; // r14
  __int64 v38; // rbp
  Scaleform::Render::Tessellator::MonoChainType *v39; // r10
  unsigned __int64 v40; // rcx
  __int64 v41; // r9
  Scaleform::Render::Tessellator::EdgeType *v42; // r11
  Scaleform::Render::Tessellator::SrcVertexType **v43; // rcx
  unsigned int v44; // edx
  __int64 v45; // r8
  Scaleform::Render::Tessellator::SrcVertexType *v46; // rsi
  float v47; // xmm0_4
  __int64 v48; // r8
  Scaleform::Render::Tessellator::SrcVertexType *v49; // rdx
  unsigned __int64 v50; // rsi
  unsigned __int64 Size; // r10
  unsigned __int64 v52; // r11
  __int64 v53; // rbx
  int v54; // er12
  unsigned __int64 v55; // rsi
  Scaleform::Render::Tessellator::MonoChainType ***v56; // r9
  Scaleform::Render::Tessellator::MonoChainType *v57; // rdx
  float xb; // xmm1_4
  Scaleform::Render::Tessellator::MonoChainType *v59; // r8
  float v60; // xmm0_4
  float v61; // xmm0_4
  bool v62; // cf
  bool v63; // zf
  Scaleform::Render::Tessellator::MonoChainType **v64; // rcx
  Scaleform::Render::Tessellator::MonoChainType *v65; // rax
  unsigned int v66; // er15
  unsigned __int64 v67; // r14
  unsigned __int64 v68; // rsi
  unsigned __int64 v69; // rbp
  float v70; // xmm8_4
  __int64 v71; // rbp
  unsigned __int64 v72; // r9
  unsigned int **v73; // rdx
  Scaleform::Render::Tessellator::MonoChainType ***v74; // r8
  __int64 v75; // r15
  unsigned __int64 v76; // r13
  unsigned __int64 v77; // r12
  unsigned __int64 v78; // rax
  Scaleform::Render::Tessellator::MonoChainType *v79; // rbx
  unsigned __int64 v80; // rax
  Scaleform::Render::Tessellator::MonoChainType *v81; // rsi
  float v82; // xmm2_4
  float v83; // xmm0_4
  float v84; // xmm1_4
  float v85; // xmm0_4
  unsigned __int64 v86; // rsi
  unsigned __int64 MaxPages; // rdx
  Scaleform::Render::LinearHeap *pHeap; // rcx
  void *v89; // rbx
  unsigned __int64 v90; // rax
  Scaleform::Render::Tessellator::IntersectionType *v91; // rdx
  __int64 v92; // r8
  unsigned int **v93; // rcx
  Scaleform::Render::Tessellator::MonoChainType ***v94; // rdx
  __int64 v95; // r10
  Scaleform::Render::Tessellator::MonoChainType **v96; // r8
  unsigned __int64 v97; // rax
  __int64 v98; // r9
  Scaleform::Render::Tessellator::MonoChainType **v99; // rdx
  Scaleform::Render::Tessellator::MonoChainType *v100; // rcx
  unsigned __int64 v101; // rdx
  unsigned __int64 v102; // r8
  Scaleform::Render::Tessellator::IntersectionType *v103; // rcx
  __int64 v105; // [rsp+20h] [rbp-98h]
  __int64 v106; // [rsp+30h] [rbp-88h]
  float v107; // [rsp+38h] [rbp-80h]
  __int64 v108; // [rsp+C0h] [rbp+8h]
  unsigned int v109; // [rsp+C8h] [rbp+10h]

  y = yb;
  v7 = numMc;
  v9 = startMc;
  this->ValidChains.Size = 0i64;
  v10 = numMc != 0;
  v11 = 0i64;
  v109 = v10;
  if ( this->ActiveChains.Size )
  {
    do
    {
      v12 = this->ActiveChains.Pages[v11 >> 4][v11 & 0xF];
      v12->flags &= ~8u;
      edge = v12->edge;
      dir = v12->dir;
      v15 = v12->edge & 0xF;
      Pages = this->SrcVertices.Pages;
      v17 = this->Edges.Pages[(unsigned __int64)v12->edge >> 4];
      v18 = dir + v17[v15].lower;
      if ( Pages[(unsigned __int64)v18 >> 4][v18 & 0xF].y == yb )
      {
        if ( edge >= v12->end )
        {
          xt = v12->xt;
          v10 |= 2u;
          v12->flags |= 2u;
          v12->flags |= 8u;
          v12->xb = xt;
          v109 = v10;
        }
        else
        {
          v12->edge = edge + 1;
          v19 = ((_BYTE)edge + 1) & 0xF;
          v20 = this->Edges.Pages[(unsigned __int64)(edge + 1) >> 4];
          v21 = this->SrcVertices.Pages;
          lower = v20[v19].lower;
          v23 = ((_BYTE)lower + (_BYTE)dir) & 0xF;
          v24 = v21[(unsigned __int64)(lower + dir) >> 4];
          v12->xb = v21[(unsigned __int64)lower >> 4][lower & 0xF].x;
          if ( v24[v23].y == yt )
          {
            x = v24[v23].x;
          }
          else
          {
            v26 = v20[v19].lower & 0xF;
            v27 = this->SrcVertices.Pages[(unsigned __int64)v20[v19].lower >> 4];
            x = (float)((float)(yt - v27[v26].y) * v20[v19].slope) + v27[v26].x;
          }
          v12->xt = x;
          v28 = this->ValidChains.Size >> 4;
          if ( v28 >= this->ValidChains.NumPages )
            Scaleform::Render::ArrayPaged<unsigned int,4,16>::allocPage(&this->ValidChains, this->ValidChains.Size >> 4);
          v29 = this->ValidChains.Pages[v28];
          v10 = v109;
          v29[this->ValidChains.Size & 0xF] = v11;
          ++this->ValidChains.Size;
          v12->flags |= 8u;
        }
      }
      else
      {
        v31 = v18 & 0xF;
        v32 = Pages[(unsigned __int64)(dir + v17[v15].lower) >> 4];
        v12->xb = v12->xt;
        if ( v32[v31].y == yt )
        {
          v33 = v32[v31].x;
        }
        else
        {
          v34 = v17[v15].lower & 0xF;
          v35 = this->SrcVertices.Pages[(unsigned __int64)v17[v15].lower >> 4];
          v33 = (float)((float)(yt - v35[v34].y) * v17[v15].slope) + v35[v34].x;
        }
        v12->xt = v33;
        v36 = this->ValidChains.Size >> 4;
        if ( v36 >= this->ValidChains.NumPages )
          Scaleform::Render::ArrayPaged<unsigned int,4,16>::allocPage(&this->ValidChains, this->ValidChains.Size >> 4);
        this->ValidChains.Pages[v36][this->ValidChains.Size & 0xF] = v11;
        ++this->ValidChains.Size;
      }
      ++v11;
    }
    while ( v11 < this->ActiveChains.Size );
    v7 = numMc;
  }
  if ( v7 )
  {
    v37 = v9;
    v38 = v7;
    do
    {
      v39 = this->MonoChainsSorted.Array[v37];
      v40 = v39->edge;
      v41 = v40 & 0xF;
      v42 = this->Edges.Pages[v40 >> 4];
      v43 = this->SrcVertices.Pages;
      v44 = v42[v41].lower;
      v45 = ((_BYTE)v44 + (unsigned __int8)v39->dir) & 0xF;
      v46 = v43[(unsigned __int64)(v44 + v39->dir) >> 4];
      v39->xb = v43[(unsigned __int64)v44 >> 4][v44 & 0xF].x;
      v39->flags = 8;
      if ( v46[v45].y == yt )
      {
        v47 = v46[v45].x;
      }
      else
      {
        v48 = v42[v41].lower & 0xF;
        v49 = this->SrcVertices.Pages[(unsigned __int64)v42[v41].lower >> 4];
        v47 = (float)((float)(yt - v49[v48].y) * v42[v41].slope) + v49[v48].x;
      }
      v39->xt = v47;
      v50 = this->ActiveChains.Size >> 4;
      if ( v50 >= this->ActiveChains.NumPages )
        Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::MonoChainType *,4,8>::allocPage(
          (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,8> *)&this->ActiveChains,
          this->ActiveChains.Size >> 4);
      ++v37;
      this->ActiveChains.Pages[v50][this->ActiveChains.Size & 0xF] = 0i64;
      ++this->ActiveChains.Size;
      --v38;
    }
    while ( v38 );
    Size = this->ActiveChains.Size;
    v52 = Size - v7;
    LODWORD(v53) = v9 + numMc;
    v54 = -(int)v9;
    v55 = v52 - 1;
    do
    {
      if ( !v52 )
        goto LABEL_34;
      v56 = this->ActiveChains.Pages;
      v57 = this->MonoChainsSorted.Array[(unsigned int)(v53 - 1)];
      xb = v57->xb;
      v59 = v56[v55 >> 4][v55 & 0xF];
      v60 = v59->xb;
      if ( v60 == xb )
      {
        v61 = v57->xt;
        v62 = v61 < v59->xt;
        v63 = v61 == v59->xt;
      }
      else
      {
        v62 = xb < v60;
        v63 = xb == v60;
      }
      if ( v62 || v63 )
      {
        --v52;
        --Size;
        --v55;
        v64 = v56[Size >> 4];
        v65 = v56[v52 >> 4][v52 & 0xF];
      }
      else
      {
LABEL_34:
        --Size;
        v53 = (unsigned int)(v53 - 1);
        v64 = this->ActiveChains.Pages[Size >> 4];
        v65 = this->MonoChainsSorted.Array[v53];
      }
      v64[Size & 0xF] = v65;
    }
    while ( v54 + (_DWORD)v53 );
  }
  v66 = v109;
  v67 = 0i64;
  this->Intersections.Size = 0i64;
  if ( (v109 & 1) != 0 )
  {
    v68 = 0i64;
    for ( this->ValidChains.Size = 0i64; v68 < this->ActiveChains.Size; ++v68 )
    {
      if ( (this->ActiveChains.Pages[v68 >> 4][v68 & 0xF]->flags & 2) == 0 )
      {
        v69 = this->ValidChains.Size >> 4;
        if ( v69 >= this->ValidChains.NumPages )
          Scaleform::Render::ArrayPaged<unsigned int,4,16>::allocPage(&this->ValidChains, this->ValidChains.Size >> 4);
        this->ValidChains.Pages[v69][this->ValidChains.Size & 0xF] = v68;
        ++this->ValidChains.Size;
      }
    }
  }
  v70 = yt - y;
  if ( this->ValidChains.Size > 1 )
  {
    v71 = 0i64;
    v105 = 0i64;
    do
    {
      if ( v71 >= 0 )
      {
        v72 = v71 + 1;
        v108 = v71 + 1;
        do
        {
          v73 = this->ValidChains.Pages;
          v74 = this->ActiveChains.Pages;
          v75 = v71 & 0xF;
          v76 = v72 & 0xF;
          v77 = v72 >> 4;
          v78 = v73[(unsigned __int64)v71 >> 4][v75];
          v79 = v74[v78 >> 4][v78 & 0xF];
          v80 = v73[v72 >> 4][v76];
          v81 = v74[v80 >> 4][v80 & 0xF];
          if ( v81->xt >= v79->xt )
            break;
          if ( !this->Intersections.Size )
            Scaleform::Render::Tessellator::setupIntersections(this);
          v82 = v81->xb;
          v83 = v79->xb;
          LODWORD(v106) = v79->posIntr;
          HIDWORD(v106) = v81->posIntr;
          v84 = (float)((float)(v81->xt - v82) - v79->xt) + v83;
          if ( v84 == 0.0 )
          {
            v107 = y;
            v85 = y;
          }
          else
          {
            v85 = (float)((float)((float)(v83 - v82) * v70) / v84) + y;
            v107 = v85;
          }
          if ( y > v85 )
          {
            v107 = y;
            v85 = y;
          }
          if ( v85 > yt )
            v107 = yt;
          v86 = this->Intersections.Size >> 4;
          if ( v86 >= this->Intersections.NumPages )
          {
            MaxPages = this->Intersections.MaxPages;
            if ( v86 >= MaxPages )
            {
              pHeap = this->Intersections.pHeap;
              if ( this->Intersections.Pages )
              {
                v89 = Scaleform::Render::LinearHeap::Alloc(pHeap, 16 * MaxPages);
                memmove(v89, this->Intersections.Pages, 8 * this->Intersections.NumPages);
                v90 = this->Intersections.MaxPages;
                this->Intersections.Pages = (Scaleform::Render::Tessellator::IntersectionType **)v89;
                this->Intersections.MaxPages = 2 * v90;
              }
              else
              {
                this->Intersections.MaxPages = 4i64;
                this->Intersections.Pages = (Scaleform::Render::Tessellator::IntersectionType **)Scaleform::Render::LinearHeap::Alloc(
                                                                                                   pHeap,
                                                                                                   0x20ui64);
              }
            }
            this->Intersections.Pages[v86] = (Scaleform::Render::Tessellator::IntersectionType *)Scaleform::Render::LinearHeap::Alloc(
                                                                                                   this->Intersections.pHeap,
                                                                                                   0xC0ui64);
            ++this->Intersections.NumPages;
          }
          v91 = this->Intersections.Pages[v86];
          v92 = this->Intersections.Size & 0xF;
          *(_QWORD *)&v91[v92].pos1 = v106;
          v91[v92].y = v107;
          ++this->Intersections.Size;
          v93 = this->ValidChains.Pages;
          v94 = this->ActiveChains.Pages;
          v95 = v93[v77][v76] & 0xF;
          v96 = v94[(unsigned __int64)v93[v77][v76] >> 4];
          v97 = v93[(unsigned __int64)v71 >> 4][v75];
          v98 = v97 & 0xF;
          v99 = v94[v97 >> 4];
          v100 = v99[v98];
          v99[v98] = v96[v95];
          v72 = v108 - 1;
          v96[v95] = v100;
          --v71;
          --v108;
        }
        while ( v71 >= 0 );
        v71 = v105;
      }
      v105 = ++v71;
    }
    while ( v71 + 1 < this->ValidChains.Size );
    v66 = v109;
    v67 = 0i64;
  }
  if ( this->Intersections.Size > 1 )
  {
    Scaleform::Alg::InsertionSortSliced<Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::IntersectionType,4,4>,bool (*)(Scaleform::Render::Tessellator::IntersectionType const &,Scaleform::Render::Tessellator::IntersectionType const &)>(
      &this->Intersections,
      0i64,
      this->Intersections.Size,
      Scaleform::Render::Tessellator::cmpIntersectionY);
    if ( this->HasEpsilon )
    {
      if ( this->Intersections.Size )
      {
        do
        {
          v101 = v67 >> 4;
          v102 = v67 & 0xF;
          v103 = this->Intersections.Pages[v67 >> 4];
          if ( (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(y) & _xmm) * this->Epsilon) > (float)(v103[v67 & 0xF].y - y) )
            v103[v67 & 0xF].y = y;
          ++v67;
          y = this->Intersections.Pages[v101][v102].y;
        }
        while ( v67 < this->Intersections.Size );
      }
    }
  }
  return v66;
}

void __fastcall Scaleform::Render::Tessellator::perceiveStyles(
        Scaleform::Render::Tessellator *this,
        const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoChainType *,4,8> *aet)
{
  unsigned __int16 v4; // r11
  unsigned __int64 i; // r9
  Scaleform::Render::Tessellator::MonoChainType *v6; // r8
  __int64 leftStyle; // rcx
  int *Array; // rax
  __int64 rightStyle; // r10
  unsigned __int64 Size; // rax
  int *v11; // rdx
  unsigned __int16 v12; // ax

  memset(this->StyleCounts.Array, 0, 4 * this->StyleCounts.Size);
  v4 = 0;
  for ( i = 0i64; i < aet->Size; ++i )
  {
    v6 = aet->Pages[i >> 4][i & 0xF];
    v6->flags &= ~4u;
    if ( (v6->flags & 2) == 0 )
    {
      leftStyle = v6->leftStyle;
      Array = this->StyleCounts.Array;
      rightStyle = v6->rightStyle;
      if ( this->FillRule )
      {
        Array[leftStyle] ^= 1u;
        this->StyleCounts.Array[rightStyle] ^= 1u;
      }
      else
      {
        Array[leftStyle] += v6->dir;
        this->StyleCounts.Array[rightStyle] -= v6->dir;
      }
      Size = this->StyleCounts.Size;
      if ( Size )
      {
        v11 = &this->StyleCounts.Array[Size - 1];
        while ( !*v11 )
        {
          --v11;
          if ( !--Size )
            goto LABEL_10;
        }
        v12 = Size - 1;
      }
      else
      {
LABEL_10:
        v12 = 0;
      }
      v6->rightAbove = v12;
      v6->leftAbove = v4;
      if ( v4 != v12 )
        v6->flags |= 4u;
      v4 = v12;
    }
  }
}

void __fastcall Scaleform::Render::Tessellator::prepareSpecialCaseMeshes(
        Scaleform::Render::Tessellator *this,
        unsigned int style,
        unsigned int styleFlags)
{
  unsigned __int64 v3; // rbx
  Scaleform::Render::ArrayPaged<Scaleform::Render::TessMesh,4,4> *p_Meshes; // rsi
  unsigned int v5; // eax
  unsigned int v6; // ebp
  unsigned __int64 v7; // r14
  __int64 v10; // rcx
  Scaleform::Render::TessMesh *v11; // rax
  unsigned __int64 v12; // rbp
  __int64 v13; // rcx
  Scaleform::Render::TessMesh *v14; // rax
  __int128 v15; // [rsp+20h] [rbp-38h]
  __int128 v16; // [rsp+20h] [rbp-38h]

  v3 = 0i64;
  p_Meshes = &this->Meshes;
  v5 = style;
  if ( this->HasComplexFill )
    v5 = 0;
  LODWORD(v15) = 0;
  v6 = styleFlags & 8;
  v7 = this->Meshes.Size >> 4;
  *((_QWORD *)&v15 + 1) = __PAIR64__(v6, v5);
  DWORD1(v15) = v5;
  if ( v7 >= this->Meshes.NumPages )
    Scaleform::Render::ArrayPaged<Scaleform::Render::TessMesh,4,4>::allocPage(&this->Meshes, v7);
  v10 = p_Meshes->Size & 0xF;
  v11 = p_Meshes->Pages[v7];
  *(_OWORD *)&v11[v10].MeshIdx = v15;
  *(_QWORD *)&v11[v10].Flags2 = 0i64;
  v11[v10].VertexCount = 0;
  ++p_Meshes->Size;
  if ( this->HasComplexFill )
  {
    HIDWORD(v16) = v6 | 0x8000;
    v12 = p_Meshes->Size >> 4;
    LODWORD(v16) = this->Meshes.Size;
    DWORD2(v16) = style;
    DWORD1(v16) = style;
    if ( v12 >= p_Meshes->NumPages )
      Scaleform::Render::ArrayPaged<Scaleform::Render::TessMesh,4,4>::allocPage(p_Meshes, v12);
    v13 = p_Meshes->Size & 0xF;
    v14 = p_Meshes->Pages[v12];
    *(_OWORD *)&v14[v13].MeshIdx = v16;
    *(_QWORD *)&v14[v13].Flags2 = 0x8000i64;
    v14[v13].VertexCount = 0;
    ++p_Meshes->Size;
  }
  this->MeshIdx = this->HasComplexFill;
  if ( this->Meshes.Size )
  {
    do
    {
      Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::AddArray(&this->MeshTriangles);
      ++v3;
    }
    while ( v3 < this->Meshes.Size );
  }
}

void __fastcall Scaleform::Render::Tessellator::processEdgeAA(Scaleform::Render::Tessellator *this)
{
  unsigned __int64 v1; // r14
  unsigned __int64 v2; // rbx
  unsigned __int64 i; // rdi
  Scaleform::Render::Tessellator::EdgeAAType *v5; // rbp
  Scaleform::Render::Tessellator::EdgeAAType *Array; // rdx
  unsigned __int64 Size; // rcx
  unsigned int v8; // er11
  unsigned __int64 j; // r10
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // r9
  Scaleform::Render::TessVertex *v13; // r8
  unsigned __int64 k; // rbx
  unsigned __int64 v15; // rax
  Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::TmpEdgeAAType,3,4> *p_TmpEdgeFan; // rdi
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // r15
  Scaleform::Render::TessVertex *v20; // r13
  __int64 v21; // r12
  Scaleform::Render::Tessellator::EdgeAAType *v22; // rax
  unsigned int v23; // er10
  unsigned int v24; // edx
  Scaleform::Render::TessVertex **Pages; // rcx
  Scaleform::Render::TessVertex *v26; // r8
  unsigned __int64 v27; // rax
  __int64 v28; // r10
  Scaleform::Render::TessVertex *v29; // rcx
  float v30; // xmm2_4
  float v31; // xmm3_4
  float v32; // xmm0_4
  float v33; // xmm1_4
  float v34; // xmm1_4
  unsigned __int64 v35; // rbp
  unsigned __int64 MaxPages; // rdx
  Scaleform::Render::LinearHeap *pHeap; // rcx
  void *v38; // rbx
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  Scaleform::Render::Tessellator::TmpEdgeAAType *v41; // rax
  unsigned __int64 v42; // rbx
  unsigned __int16 v43; // bp
  float m; // xmm1_4
  Scaleform::Render::Tessellator::EdgeAAType *v45; // r10
  unsigned __int64 v46; // r11
  Scaleform::Render::Tessellator::TmpEdgeAAType *v47; // r8
  __int128 v48; // [rsp+20h] [rbp-A8h]
  __int64 v49; // [rsp+30h] [rbp-98h]
  unsigned __int64 v50; // [rsp+D0h] [rbp+8h]
  unsigned __int64 v51; // [rsp+D8h] [rbp+10h]

  v1 = 0i64;
  v2 = 0i64;
  for ( i = 0i64; v2 < this->Monotones.Size; ++v2 )
    i = (unsigned int)Scaleform::Render::Tessellator::countFanEdges(this, &this->Monotones.Pages[v2 >> 4][v2 & 0xF])
      + (unsigned int)i;
  if ( i > this->EdgeFans.Size )
  {
    v5 = (Scaleform::Render::Tessellator::EdgeAAType *)Scaleform::Render::LinearHeap::Alloc(
                                                         this->EdgeFans.pHeap,
                                                         24 * i);
    memset(v5, 0, 24 * i);
    Array = this->EdgeFans.Array;
    if ( Array )
    {
      Size = this->EdgeFans.Size;
      if ( Size )
        memmove(v5, Array, 24 * Size);
    }
    this->EdgeFans.Array = v5;
  }
  this->EdgeFans.Size = i;
  v8 = 0;
  for ( j = 0i64; j < this->MeshVertices.Size; v13[v12].Mesh = 0 )
  {
    v10 = j & 0xF;
    v11 = j++ >> 4;
    v12 = v10;
    v13 = this->MeshVertices.Pages[v11];
    LODWORD(v10) = v13[v10].Mesh;
    v13[v12].Idx = v8;
    v8 += v10;
  }
  for ( k = 0i64; k < this->Monotones.Size; ++k )
    Scaleform::Render::Tessellator::collectFanEdges(this, &this->Monotones.Pages[k >> 4][k & 0xF]);
  v15 = 0i64;
  v51 = this->MeshVertices.Size;
  v50 = 0i64;
  if ( v51 )
  {
    p_TmpEdgeFan = &this->TmpEdgeFan;
    do
    {
      v17 = v15 >> 4;
      v18 = v15 & 0xF;
      v19 = 0i64;
      v20 = this->MeshVertices.Pages[v17];
      v21 = v18;
      this->TmpEdgeFan.Size = 0i64;
      if ( v20[v18].Mesh )
      {
        do
        {
          v22 = this->EdgeFans.Array;
          HIDWORD(v49) = v22[v19 + v20[v21].Idx].style;
          v23 = v22[v19 + v20[v21].Idx].cntVer->srcVer & 0xFFFFFFF;
          v24 = v22[v19 + v20[v21].Idx].rayVer->srcVer & 0xFFFFFFF;
          v48 = *(_OWORD *)&v22[v19 + v20[v21].Idx].cntVer;
          Pages = this->MeshVertices.Pages;
          v26 = Pages[(unsigned __int64)v24 >> 4];
          v27 = v23;
          v28 = v23 & 0xF;
          v29 = Pages[v27 >> 4];
          v30 = v26[v24 & 0xF].x - v29[v28].x;
          v31 = v26[v24 & 0xF].y - v29[v28].y;
          v32 = (float)((float)(v31 * v31) + (float)(v30 * v30)) + (float)((float)(v31 * v31) + (float)(v30 * v30));
          if ( v32 == 0.0 )
          {
            v33 = 0.0;
          }
          else
          {
            v34 = (float)(v30 * v30) / v32;
            if ( v30 < 0.0 )
              LODWORD(v34) ^= _xmm;
            if ( v31 > 0.0 )
              v34 = 1.0 - v34;
            v33 = v34 - 0.5;
          }
          v35 = this->TmpEdgeFan.Size >> 3;
          *(float *)&v49 = v33;
          if ( v35 >= this->TmpEdgeFan.NumPages )
          {
            MaxPages = this->TmpEdgeFan.MaxPages;
            if ( v35 >= MaxPages )
            {
              pHeap = p_TmpEdgeFan->pHeap;
              if ( this->TmpEdgeFan.Pages )
              {
                v38 = Scaleform::Render::LinearHeap::Alloc(pHeap, 16 * MaxPages);
                memmove(v38, this->TmpEdgeFan.Pages, 8 * this->TmpEdgeFan.NumPages);
                v39 = this->TmpEdgeFan.MaxPages;
                this->TmpEdgeFan.Pages = (Scaleform::Render::Tessellator::TmpEdgeAAType **)v38;
                this->TmpEdgeFan.MaxPages = 2 * v39;
              }
              else
              {
                this->TmpEdgeFan.MaxPages = 4i64;
                this->TmpEdgeFan.Pages = (Scaleform::Render::Tessellator::TmpEdgeAAType **)Scaleform::Render::LinearHeap::Alloc(
                                                                                             pHeap,
                                                                                             0x20ui64);
              }
            }
            this->TmpEdgeFan.Pages[v35] = (Scaleform::Render::Tessellator::TmpEdgeAAType *)Scaleform::Render::LinearHeap::Alloc(
                                                                                             p_TmpEdgeFan->pHeap,
                                                                                             0xC0ui64);
            ++this->TmpEdgeFan.NumPages;
          }
          ++v19;
          v40 = this->TmpEdgeFan.Size & 7;
          v41 = this->TmpEdgeFan.Pages[v35];
          *(_OWORD *)&v41[v40].cntVer = v48;
          *(_QWORD *)&v41[v40].slope = v49;
          ++this->TmpEdgeFan.Size;
        }
        while ( v19 < v20[v21].Mesh );
      }
      Scaleform::Alg::QuickSortSliced<Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::TmpEdgeAAType,3,4>,bool (*)(Scaleform::Render::Tessellator::TmpEdgeAAType const &,Scaleform::Render::Tessellator::TmpEdgeAAType const &)>(
        &this->TmpEdgeFan,
        0i64,
        this->TmpEdgeFan.Size,
        Scaleform::Render::Tessellator::cmpEdgeAA);
      v42 = 0i64;
      v43 = 0;
      for ( m = FLOAT_N1_0e30; v42 < this->TmpEdgeFan.Size; ++v42 )
      {
        v45 = this->EdgeFans.Array;
        v46 = v42 + v20[v21].Idx;
        v47 = this->TmpEdgeFan.Pages[v42 >> 3];
        v45[v46].cntVer = v47[v42 & 7].cntVer;
        v45[v46].rayVer = v47[v42 & 7].rayVer;
        v45[v46].style = v47[v42 & 7].style;
        v45[v46].slope = v43;
        if ( v47[v42 & 7].slope != m )
        {
          ++v43;
          m = v47[v42 & 7].slope;
        }
      }
      Scaleform::Render::Tessellator::processFan(this, v20[v21].Idx, v20[v21].Idx + v20[v21].Mesh);
      v20[v21].Idx = -1;
      v20[v21].Mesh = -1;
      v15 = v50 + 1;
      v50 = v15;
    }
    while ( v15 < v51 );
  }
  if ( this->Monotones.Size )
  {
    do
    {
      Scaleform::Render::Tessellator::triangulateMonotoneAA(this, &this->Monotones.Pages[v1 >> 4][v1 & 0xF]);
      ++v1;
    }
    while ( v1 < this->Monotones.Size );
  }
  Scaleform::Render::Tessellator::unflipTriangles(this);
  Scaleform::Render::Tessellator::emitTriangles(this);
}

void __fastcall Scaleform::Render::Tessellator::processFan(
        Scaleform::Render::Tessellator *this,
        unsigned int start,
        unsigned int end)
{
  unsigned int v3; // esi
  unsigned int v5; // er12
  unsigned int v6; // er13
  unsigned int v7; // er15
  __int64 v8; // rsi
  Scaleform::Render::Tessellator::EdgeAAType *Array; // r8
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r14
  Scaleform::Render::Tessellator::EdgeAAType *v12; // r8
  Scaleform::Render::TessVertex *v13; // rax
  float x; // xmm0_4
  float y; // xmm1_4
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  Scaleform::Render::ArrayPaged<Scaleform::Render::TessVertex,4,16> *v18; // rbx
  unsigned __int64 v19; // rdi
  Scaleform::Render::TessVertex *v20; // rdx
  __int64 v21; // r8
  int v22; // eax
  unsigned __int64 v23; // rsi
  unsigned int *v24; // r14
  unsigned __int64 v25; // r8
  unsigned int Size; // edx
  Scaleform::Render::ArrayPaged<Scaleform::Render::TessVertex,4,16> *p_MeshVertices; // r14
  Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16> *p_StarVertices; // rsi
  unsigned int **Pages; // rax
  unsigned __int64 v30; // r13
  __int64 v31; // rdi
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  Scaleform::Render::Tessellator::EdgeAAType *v34; // r8
  __int64 v35; // r15
  Scaleform::Render::Tessellator::MonoVertexType *rayVer; // rax
  Scaleform::Render::Tessellator::EdgeAAType *v37; // r12
  unsigned int srcVer; // er10
  unsigned int v39; // ecx
  Scaleform::Render::TessVertex **v40; // r8
  unsigned int v41; // er10
  unsigned int v42; // edx
  __int64 v43; // rax
  unsigned __int16 v44; // ax
  unsigned __int64 v45; // rdi
  Scaleform::Render::TessVertex *v46; // rdx
  __int64 v47; // r8
  int v48; // eax
  unsigned __int64 v49; // rdi
  Scaleform::Render::Tessellator::EdgeAAType *v50; // rax
  Scaleform::Render::Tessellator::MonoVertexType *v51; // r8
  __int64 v52; // rdi
  Scaleform::Render::Tessellator::MonoVertexType *v53; // rax
  int v54; // edx
  int v55; // ecx
  unsigned __int64 v56; // r15
  char v57; // r15
  unsigned int v58; // er10
  Scaleform::Render::TessVertex **v59; // r8
  unsigned int v60; // er10
  unsigned int v61; // er12
  unsigned __int16 v62; // ax
  unsigned int v63; // er13
  unsigned __int16 v64; // cx
  unsigned __int64 v65; // rdi
  Scaleform::Render::TessVertex *v66; // rdx
  __int64 v67; // r8
  int v68; // eax
  unsigned __int64 v69; // rdi
  Scaleform::Render::TessVertex *v70; // rdx
  __int64 v71; // r8
  int v72; // eax
  __int64 v73; // rdi
  unsigned __int64 v74; // r15
  __int64 v75; // rax
  __int64 v76; // rdi
  unsigned __int64 v77; // r15
  __int64 v78; // rax
  unsigned __int64 v79; // r15
  Scaleform::Render::Tessellator::OuterEdgeType v80; // xmm0
  Scaleform::Render::Tessellator::OuterEdgeType **v81; // rax
  __int64 v82; // rcx
  unsigned __int64 v83; // r15
  Scaleform::Render::TessVertex newVer1; // [rsp+38h] [rbp-59h] BYREF
  __int64 v85; // [rsp+50h] [rbp-41h]
  unsigned int v86; // [rsp+58h] [rbp-39h]
  Scaleform::Render::TessVertex newVer2; // [rsp+60h] [rbp-31h] BYREF
  Scaleform::Render::VertexBasic v88; // [rsp+78h] [rbp-19h]
  Scaleform::Render::Tessellator::EdgeAAType *v89; // [rsp+80h] [rbp-11h]
  Scaleform::Render::Tessellator::OuterEdgeType v90; // [rsp+88h] [rbp-9h]
  Scaleform::Render::Tessellator::EdgeAAType *v91; // [rsp+98h] [rbp+7h]
  unsigned __int64 v92; // [rsp+A0h] [rbp+Fh]
  Scaleform::Render::Tessellator::InnerQuadType v93; // [rsp+A8h] [rbp+17h]
  char v95; // [rsp+100h] [rbp+6Fh]
  unsigned int v97; // [rsp+110h] [rbp+7Fh]

  if ( start != end )
  {
    v3 = end;
    v5 = end - 1;
    v6 = start;
    v7 = start;
    v97 = end - start;
    this->StartFan.Size = 0i64;
    this->EndFan.Size = 0i64;
    if ( start < end )
    {
      v8 = start;
      while ( 1 )
      {
        Array = this->EdgeFans.Array;
        if ( ((Array[v5].rayVer->srcVer ^ Array[v8].rayVer->srcVer) & 0xFFFFFFF) != 0 )
        {
          if ( Array[v5].slope != Array[v8].slope
            && (Array[v5].style & 0x8000u) == 0
            && (Array[v8].style & 0x8000u) != 0 )
          {
LABEL_10:
            v10 = this->StartFan.Size >> 3;
            if ( v10 >= this->StartFan.NumPages )
              Scaleform::Render::ArrayPaged<Scaleform::Render::PathBasic,2,4>::allocPage(
                (Scaleform::Render::ArrayPaged<Scaleform::Render::PathBasic,2,4> *)&this->StartFan,
                this->StartFan.Size >> 3);
            this->StartFan.Pages[v10][this->StartFan.Size & 7] = v7;
            ++this->StartFan.Size;
            v11 = this->EndFan.Size >> 3;
            if ( v11 >= this->EndFan.NumPages )
              Scaleform::Render::ArrayPaged<Scaleform::Render::PathBasic,2,4>::allocPage(
                (Scaleform::Render::ArrayPaged<Scaleform::Render::PathBasic,2,4> *)&this->EndFan,
                this->EndFan.Size >> 3);
            this->EndFan.Pages[v11][this->EndFan.Size & 7] = v5;
            ++this->EndFan.Size;
          }
        }
        else if ( ((Array[v5].style ^ Array[v8].style) & 0x7FFF) != 0 )
        {
          goto LABEL_10;
        }
        v5 = v7;
        ++v8;
        if ( ++v7 >= end )
        {
          v6 = start;
          v3 = end;
          break;
        }
      }
    }
    if ( this->StartFan.Size )
    {
      v23 = this->EndFan.Size >> 3;
      v24 = *this->EndFan.Pages;
      if ( v23 >= this->EndFan.NumPages )
        Scaleform::Render::ArrayPaged<Scaleform::Render::PathBasic,2,4>::allocPage(
          (Scaleform::Render::ArrayPaged<Scaleform::Render::PathBasic,2,4> *)&this->EndFan,
          this->EndFan.Size >> 3);
      v25 = 0i64;
      this->EndFan.Pages[v23][this->EndFan.Size & 7] = *v24;
      ++this->EndFan.Size;
      Size = this->StarVertices.Size;
      v86 = Size;
      LODWORD(v88.x) = this->EdgeFans.Array[v6].cntVer->srcVer & 0xFFFFFFF;
      if ( this->StartFan.Size )
      {
        p_MeshVertices = &this->MeshVertices;
        p_StarVertices = (Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16> *)&this->StarVertices;
        do
        {
          Pages = this->StartFan.Pages;
          v85 = v25 & 7;
          v30 = v25 >> 3;
          v92 = v25 + 1;
          v31 = Pages[v25 >> 3][v85];
          v32 = ((_BYTE)v25 + 1) & 7;
          v33 = v25 + 1;
          v34 = this->EdgeFans.Array;
          v35 = this->EndFan.Pages[v33 >> 3][v32];
          rayVer = v34[v31].rayVer;
          v37 = &v34[v31];
          v89 = v37;
          srcVer = v37->cntVer->srcVer;
          if ( (rayVer->srcVer & 0xFFFFFFF) == (srcVer & 0xFFFFFFF)
            || (v39 = v34[v35].rayVer->srcVer, (v39 & 0xFFFFFFF) == (srcVer & 0xFFFFFFF)) )
          {
            v40 = this->MeshVertices.Pages;
            v41 = srcVer & 0xFFFFFFF;
            newVer1.x = v40[(unsigned __int64)v41 >> 4][v41 & 0xF].x;
            newVer1.y = v40[(unsigned __int64)v41 >> 4][v41 & 0xF].y;
          }
          else
          {
            Scaleform::Render::Tessellator::computeMiter(
              this,
              &this->MeshVertices.Pages[(unsigned __int64)(rayVer->srcVer & 0xFFFFFFF) >> 4][rayVer->srcVer & 0xF],
              &this->MeshVertices.Pages[(unsigned __int64)(srcVer & 0xFFFFFFF) >> 4][srcVer & 0xF],
              &this->MeshVertices.Pages[(unsigned __int64)(v39 & 0xFFFFFFF) >> 4][v39 & 0xF],
              &newVer1,
              0i64);
          }
          v42 = this->MeshVertices.Size;
          if ( (unsigned int)v35 >= (unsigned int)v31
            || (LODWORD(v35) = v97 + v35, (unsigned int)v31 <= (unsigned int)v35) )
          {
            do
            {
              if ( (unsigned int)v31 >= end )
                v43 = (unsigned int)v31 - v97;
              else
                v43 = (unsigned int)v31;
              LODWORD(v31) = v31 + 1;
              this->EdgeFans.Array[v43].cntVer->aaVer = v42;
            }
            while ( (unsigned int)v31 <= (unsigned int)v35 );
            p_StarVertices = (Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16> *)&this->StarVertices;
            p_MeshVertices = &this->MeshVertices;
          }
          v44 = v37->style & 0x7FFF;
          v45 = p_MeshVertices->Size >> 4;
          newVer1.Idx = -1;
          newVer1.Styles[1] = v44;
          newVer1.Styles[0] = v44;
          *(_DWORD *)&newVer1.Flags = -65534;
          LODWORD(v88.y) = v42;
          if ( v45 >= p_MeshVertices->NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::TessVertex,4,16>::allocPage(p_MeshVertices, v45);
          v46 = p_MeshVertices->Pages[v45];
          v47 = p_MeshVertices->Size & 0xF;
          v48 = *(_DWORD *)&newVer1.Flags;
          *(_OWORD *)&v46[v47].x = *(_OWORD *)&newVer1.x;
          *(_DWORD *)&v46[v47].Flags = v48;
          ++p_MeshVertices->Size;
          v49 = p_StarVertices->Size >> 4;
          if ( v49 >= p_StarVertices->NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16>::allocPage(
              p_StarVertices,
              p_StarVertices->Size >> 4);
          p_StarVertices->Pages[v49][p_StarVertices->Size & 0xF] = v88;
          ++p_StarVertices->Size;
          v50 = this->EdgeFans.Array;
          v51 = v50[this->EndFan.Pages[v30][v85]].rayVer;
          v52 = (__int64)&v50[this->EndFan.Pages[v30][v85]];
          v53 = v37->rayVer;
          v91 = (Scaleform::Render::Tessellator::EdgeAAType *)v52;
          v54 = v51->srcVer & 0xFFFFFFF;
          v55 = v53->srcVer & 0xFFFFFFF;
          if ( v55 == v54 )
          {
            if ( (v51->aaVer & 0x40000000) == 0 )
            {
              v93.e2 = (Scaleform::Render::Tessellator::EdgeAAType *)v52;
              v56 = this->InnerQuads.Size >> 4;
              v93.e1 = v37;
              if ( v56 >= this->InnerQuads.NumPages )
                Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                  (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->InnerQuads,
                  v56);
              this->InnerQuads.Pages[v56][this->InnerQuads.Size & 0xF] = v93;
              ++this->InnerQuads.Size;
              v37->cntVer->aaVer |= 0x40000000u;
            }
          }
          else
          {
            v57 = 0;
            v95 = 0;
            v58 = v37->cntVer->srcVer;
            if ( v55 == (v58 & 0xFFFFFFF) || v54 == (v58 & 0xFFFFFFF) )
            {
              v59 = this->MeshVertices.Pages;
              v60 = v58 & 0xFFFFFFF;
              newVer1.x = v59[(unsigned __int64)v60 >> 4][v60 & 0xF].x;
              newVer1.y = v59[(unsigned __int64)v60 >> 4][v60 & 0xF].y;
            }
            else
            {
              v57 = Scaleform::Render::Tessellator::computeMiter(
                      this,
                      &this->MeshVertices.Pages[(unsigned __int64)(v51->srcVer & 0xFFFFFFF) >> 4][v51->srcVer & 0xF],
                      &this->MeshVertices.Pages[(unsigned __int64)(v58 & 0xFFFFFFF) >> 4][v58 & 0xF],
                      &this->MeshVertices.Pages[(unsigned __int64)(v53->srcVer & 0xFFFFFFF) >> 4][v53->srcVer & 0xF],
                      &newVer1,
                      &newVer2);
              v95 = v57;
            }
            v61 = this->MeshVertices.Size;
            v62 = *(_WORD *)(v52 + 16) & 0x7FFF;
            v63 = v61;
            newVer2.Idx = -1;
            v64 = v89->style & 0x7FFF;
            newVer1.Idx = -1;
            newVer1.Styles[1] = v62;
            newVer1.Styles[0] = v62;
            newVer2.Styles[1] = v64;
            newVer2.Styles[0] = v64;
            *(_DWORD *)&newVer2.Flags = -65536;
            *(_DWORD *)&newVer1.Flags = -65536;
            if ( v62 != v64 )
              Scaleform::Render::Tessellator::setMesh(this, v62, v64);
            v65 = p_MeshVertices->Size >> 4;
            if ( v65 >= p_MeshVertices->NumPages )
              Scaleform::Render::ArrayPaged<Scaleform::Render::TessVertex,4,16>::allocPage(
                p_MeshVertices,
                p_MeshVertices->Size >> 4);
            v66 = p_MeshVertices->Pages[v65];
            v67 = p_MeshVertices->Size & 0xF;
            v68 = *(_DWORD *)&newVer1.Flags;
            *(_OWORD *)&v66[v67].x = *(_OWORD *)&newVer1.x;
            *(_DWORD *)&v66[v67].Flags = v68;
            ++p_MeshVertices->Size;
            if ( v57 )
            {
              v63 = this->MeshVertices.Size;
              v69 = p_MeshVertices->Size >> 4;
              if ( v69 >= p_MeshVertices->NumPages )
                Scaleform::Render::ArrayPaged<Scaleform::Render::TessVertex,4,16>::allocPage(
                  p_MeshVertices,
                  p_MeshVertices->Size >> 4);
              v70 = p_MeshVertices->Pages[v69];
              v71 = p_MeshVertices->Size & 0xF;
              v72 = *(_DWORD *)&newVer2.Flags;
              *(_OWORD *)&v70[v71].x = *(_OWORD *)&newVer2.x;
              *(_DWORD *)&v70[v71].Flags = v72;
              ++p_MeshVertices->Size;
            }
            v73 = (LODWORD(p_StarVertices->Size) - 1) & 0xF;
            v74 = p_StarVertices->Size >> 4;
            v75 = (__int64)p_StarVertices->Pages[(p_StarVertices->Size - 1) >> 4];
            v85 = v75;
            if ( v74 >= p_StarVertices->NumPages )
            {
              Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16>::allocPage(p_StarVertices, v74);
              v75 = v85;
            }
            p_StarVertices->Pages[v74][p_StarVertices->Size & 0xF] = *(Scaleform::Render::VertexBasic *)(v75 + 8 * v73);
            ++p_StarVertices->Size;
            if ( v95 )
            {
              v76 = (LODWORD(p_StarVertices->Size) - 1) & 0xF;
              v77 = p_StarVertices->Size >> 4;
              v78 = (__int64)p_StarVertices->Pages[(p_StarVertices->Size - 1) >> 4];
              v85 = v78;
              if ( v77 >= p_StarVertices->NumPages )
              {
                Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16>::allocPage(p_StarVertices, v77);
                v78 = v85;
              }
              p_StarVertices->Pages[v77][p_StarVertices->Size & 0xF] = *(Scaleform::Render::VertexBasic *)(v78 + 8 * v76);
              ++p_StarVertices->Size;
              this->StarVertices.Pages[(this->StarVertices.Size - 3) >> 4][(LODWORD(this->StarVertices.Size) - 3) & 0xF].starVer = v61;
              this->StarVertices.Pages[(this->StarVertices.Size - 2) >> 4][(LODWORD(this->StarVertices.Size) - 2) & 0xF].starVer = v63;
            }
            else
            {
              this->StarVertices.Pages[(this->StarVertices.Size - 2) >> 4][(LODWORD(this->StarVertices.Size) - 2) & 0xF].starVer = v61;
            }
            v79 = this->OuterEdges.Size >> 4;
            v90.edge = v89;
            v90.outVer = v63;
            if ( v79 >= this->OuterEdges.NumPages )
              Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                &this->OuterEdges,
                v79);
            v80 = v90;
            v81 = this->OuterEdges.Pages;
            v82 = this->OuterEdges.Size & 0xF;
            v90.outVer = v61 | 0x40000000;
            v81[v79][v82] = v80;
            v83 = ++this->OuterEdges.Size >> 4;
            v90.edge = v91;
            if ( v83 >= this->OuterEdges.NumPages )
              Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                &this->OuterEdges,
                v83);
            this->OuterEdges.Pages[v83][this->OuterEdges.Size & 0xF] = v90;
            ++this->OuterEdges.Size;
          }
          v25 = v92;
        }
        while ( v92 < this->StartFan.Size );
        Size = v86;
      }
      if ( Size + 3 > this->StarVertices.Size && Size < this->StarVertices.Size )
        this->StarVertices.Size = Size;
    }
    else
    {
      v12 = this->EdgeFans.Array;
      newVer1.Idx = -1;
      *(_DWORD *)&newVer1.Flags = -65534;
      v13 = this->MeshVertices.Pages[(unsigned __int64)(v12[v6].cntVer->srcVer & 0xFFFFFFF) >> 4];
      x = v13[v12[v6].cntVer->srcVer & 0xF].x;
      y = v13[v12[v6].cntVer->srcVer & 0xF].y;
      LOWORD(v13) = v12[v6].style & 0x7FFF;
      newVer1.x = x;
      newVer1.y = y;
      newVer1.Styles[1] = (unsigned __int16)v13;
      newVer1.Styles[0] = (unsigned __int16)v13;
      if ( v6 < (unsigned __int64)v3 )
      {
        v16 = v6;
        v17 = v3 - (unsigned __int64)v6;
        do
        {
          this->EdgeFans.Array[v16++].cntVer->aaVer = this->MeshVertices.Size;
          --v17;
        }
        while ( v17 );
      }
      v18 = &this->MeshVertices;
      v19 = v18->Size >> 4;
      if ( v19 >= v18->NumPages )
        Scaleform::Render::ArrayPaged<Scaleform::Render::TessVertex,4,16>::allocPage(v18, v18->Size >> 4);
      v20 = v18->Pages[v19];
      v21 = v18->Size & 0xF;
      v22 = *(_DWORD *)&newVer1.Flags;
      *(_OWORD *)&v20[v21].x = *(_OWORD *)&newVer1.x;
      *(_DWORD *)&v20[v21].Flags = v22;
      ++v18->Size;
    }
  }
}

// local variable allocation has failed, the output may be wrong!
void __fastcall Scaleform::Render::Tessellator::processInterior(
        Scaleform::Render::Tessellator *this,
        double yb,
        float yTop,
        unsigned int perceiveFlag)
{
  unsigned __int64 Size; // r8
  unsigned int v5; // ebx
  float v8; // xmm8_4
  __int128 y_low; // xmm7
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 i; // rcx
  __int128 v13; // xmm6
  unsigned int v14; // esi

  Size = this->Intersections.Size;
  v5 = 0;
  v8 = *(float *)&yb;
  y_low = *(_OWORD *)&yb;
  if ( Size )
  {
    v10 = 0i64;
    do
    {
      y_low = LODWORD(this->Intersections.Pages[v10 >> 4][v10 & 0xF].y);
      if ( *(float *)&y_low > *(float *)&yb )
        break;
      ++v5;
      perceiveFlag = 1;
      v10 = v5;
    }
    while ( v5 < Size );
  }
  Scaleform::Render::Tessellator::swapChains(this, 0, v5);
  if ( perceiveFlag )
    Scaleform::Render::Tessellator::perceiveStyles(this, &this->InteriorChains);
  v11 = this->Intersections.Size;
  for ( i = v5; v5 < v11; y_low = v13 )
  {
    v13 = y_low;
    v14 = v5;
    if ( i < v11 )
    {
      do
      {
        v13 = LODWORD(this->Intersections.Pages[i >> 4][i & 0xF].y);
        if ( *(float *)&v13 > *(float *)&y_low )
          break;
        i = ++v5;
      }
      while ( v5 < v11 );
    }
    Scaleform::Render::Tessellator::perceiveStyles(this, &this->InteriorChains);
    Scaleform::Render::Tessellator::sweepScanbeam(this, &this->InteriorChains, v8);
    Scaleform::Render::Tessellator::swapChains(this, v14, v5);
    v11 = this->Intersections.Size;
    v8 = *(float *)&y_low;
    i = v5;
  }
  Scaleform::Render::Tessellator::perceiveStyles(this, &this->ActiveChains);
  if ( yTop > *(float *)&y_low )
    Scaleform::Render::Tessellator::sweepScanbeam(this, &this->ActiveChains, *(float *)&y_low);
}

void __fastcall Scaleform::Render::Tessellator::processStrokerEdges(Scaleform::Render::Tessellator *this)
{
  unsigned __int64 i; // r12
  Scaleform::Render::Tessellator::MonoVertexType *start; // rdx
  Scaleform::Render::Tessellator::MonoVertexType *next; // rsi
  unsigned int srcVer; // ebp
  unsigned int v6; // er14
  unsigned __int64 v7; // rdi
  Scaleform::Render::Tessellator::MonoVertexType *j; // rdi
  int v9; // ecx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::StrokerEdgeType,4,16> *p_StrokerEdges; // rbx
  unsigned __int64 Size; // rbp
  unsigned __int64 v15; // rsi
  Scaleform::Render::Tessellator::StrokerEdgeType **Pages; // r8
  unsigned __int64 v17; // rcx
  Scaleform::Render::Tessellator::StrokerEdgeType *v18; // rax
  unsigned int node1; // ebx
  int *v20; // r14
  __int64 v21; // rdx
  unsigned __int64 v22; // r9
  int v23; // er13
  unsigned int v24; // edi
  Scaleform::Render::Tessellator::StrokerEdgeType *v25; // r10
  unsigned int v26; // eax
  bool v27; // cf
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r9
  Scaleform::Render::Tessellator::StrokerEdgeType *v30; // rax
  unsigned __int64 k; // r12
  unsigned __int64 v32; // rcx
  Scaleform::Render::Tessellator::StrokerEdgeType *v33; // rax
  const Scaleform::Render::Tessellator::StrokerEdgeType *v34; // r14
  unsigned int v35; // ebp
  const Scaleform::Render::Tessellator::StrokerEdgeType *v36; // rdi
  unsigned int v37; // esi
  __int64 v38; // r8
  unsigned __int64 v39; // rax
  Scaleform::Render::Tessellator::StrokerEdgeType **v40; // rbx
  unsigned __int64 v41; // r8
  Scaleform::Render::Tessellator::StrokerEdgeType **v42; // r9
  unsigned __int64 v43; // rdx
  Scaleform::Render::Tessellator::StrokerEdgeType *v44; // rbx
  int v45; // eax
  Scaleform::Render::Tessellator::StrokerEdgeType v46; // [rsp+70h] [rbp+8h]
  Scaleform::Render::Tessellator::StrokerEdgeType v47; // [rsp+78h] [rbp+10h]
  Scaleform::Render::Tessellator::StrokerEdgeType v48; // [rsp+80h] [rbp+18h]
  Scaleform::Render::Tessellator::StrokerEdgeType v49; // [rsp+88h] [rbp+20h]

  for ( i = 0i64; i < this->Monotones.Size; ++i )
  {
    start = this->Monotones.Pages[i >> 4][i & 0xF].start;
    if ( start )
    {
      next = start->next;
      srcVer = start->srcVer;
      if ( next )
      {
        v6 = next->srcVer;
        v46.node1 = srcVer & 0xFFFFFFF;
        v46.node2 = next->srcVer & 0xFFFFFFF;
        if ( (srcVer & 0xFFFFFFF) != v46.node2 )
        {
          v7 = this->StrokerEdges.Size >> 4;
          if ( v7 >= this->StrokerEdges.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16> *)&this->StrokerEdges,
              this->StrokerEdges.Size >> 4);
          this->StrokerEdges.Pages[v7][this->StrokerEdges.Size & 0xF] = v46;
          ++this->StrokerEdges.Size;
        }
        for ( j = next->next; j; j = j->next )
        {
          v9 = j->srcVer & 0xFFFFFFF;
          if ( (j->srcVer & 0x80000000) == 0 )
          {
            v48.node2 = j->srcVer & 0xFFFFFFF;
            if ( (v6 & 0xFFFFFFF) != v9 )
            {
              v11 = this->StrokerEdges.Size >> 4;
              if ( v11 >= this->StrokerEdges.NumPages )
                Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16>::allocPage(
                  (Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16> *)&this->StrokerEdges,
                  this->StrokerEdges.Size >> 4);
              v48.node1 = v6 & 0xFFFFFFF;
              this->StrokerEdges.Pages[v11][this->StrokerEdges.Size & 0xF] = v48;
              ++this->StrokerEdges.Size;
            }
            v6 = j->srcVer;
          }
          else
          {
            v47.node1 = j->srcVer & 0xFFFFFFF;
            if ( v9 != (srcVer & 0xFFFFFFF) )
            {
              v10 = this->StrokerEdges.Size >> 4;
              if ( v10 >= this->StrokerEdges.NumPages )
                Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16>::allocPage(
                  (Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16> *)&this->StrokerEdges,
                  this->StrokerEdges.Size >> 4);
              v47.node2 = srcVer & 0xFFFFFFF;
              this->StrokerEdges.Pages[v10][this->StrokerEdges.Size & 0xF] = v47;
              ++this->StrokerEdges.Size;
            }
            srcVer = j->srcVer;
          }
        }
        if ( (v6 & 0xFFFFFFF) != (srcVer & 0xFFFFFFF) )
        {
          v12 = this->StrokerEdges.Size >> 4;
          if ( v12 >= this->StrokerEdges.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16> *)&this->StrokerEdges,
              this->StrokerEdges.Size >> 4);
          v49.node2 = srcVer & 0xFFFFFFF;
          v49.node1 = v6 & 0xFFFFFFF;
          this->StrokerEdges.Pages[v12][this->StrokerEdges.Size & 0xF] = v49;
          ++this->StrokerEdges.Size;
        }
      }
    }
  }
  if ( this->StrokerEdges.Size >= 2 )
  {
    p_StrokerEdges = &this->StrokerEdges;
    Scaleform::Alg::QuickSortSliced<Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::StrokerEdgeType,4,16>,bool (*)(Scaleform::Render::Tessellator::StrokerEdgeType const &,Scaleform::Render::Tessellator::StrokerEdgeType const &)>(
      &this->StrokerEdges,
      0i64,
      this->StrokerEdges.Size,
      Scaleform::Render::Tessellator::cmpStrokerEdges);
    Size = this->StrokerEdges.Size;
    v15 = 0i64;
    if ( Size )
    {
      do
      {
        Pages = this->StrokerEdges.Pages;
        v17 = v15 & 0xF;
        v18 = Pages[v15 >> 4];
        node1 = v18[v17].node1;
        v20 = (int *)&v18[v17];
        if ( (node1 & 0x40000000) == 0 )
        {
          v21 = this->StrokerEdges.Size;
          v22 = 0i64;
          v23 = v20[1];
          if ( v21 > 0 )
          {
            v24 = v23 & 0xFFFFFFF;
            do
            {
              v25 = &this->StrokerEdges.Pages[((v21 >> 1) + v22) >> 4][((unsigned __int8)(v21 >> 1) + (_BYTE)v22) & 0xF];
              v26 = v25->node1 & 0xFFFFFFF;
              v27 = v26 < v24;
              if ( v26 == v24 )
                v27 = (v25->node2 & 0xFFFFFFF) < (node1 & 0xFFFFFFF);
              if ( v27 )
              {
                v22 += (v21 >> 1) + 1;
                v21 += -1 - (v21 >> 1);
              }
              else
              {
                v21 >>= 1;
              }
            }
            while ( v21 > 0 );
            Pages = this->StrokerEdges.Pages;
          }
          if ( v22 < Size )
          {
            v28 = v22;
            v29 = v22 & 0xF;
            v30 = Pages[v28 >> 4];
            if ( node1 == v30[v29].node2 && v23 == v30[v29].node1 )
            {
              *v20 = node1 | 0x40000000;
              v30[v29].node1 |= 0x40000000u;
            }
          }
        }
        Size = this->StrokerEdges.Size;
        ++v15;
      }
      while ( v15 < Size );
      p_StrokerEdges = &this->StrokerEdges;
    }
    for ( k = 0i64; k < this->StrokerEdges.Size; p_StrokerEdges = &this->StrokerEdges )
    {
      v32 = k & 0xF;
      v33 = this->StrokerEdges.Pages[k >> 4];
      v34 = &v33[v32];
      if ( (v34->node1 & 0x40000000) == 0 )
      {
        v35 = -1;
        v36 = &v33[v32];
        v37 = -1;
        while ( 1 )
        {
          v38 = p_StrokerEdges->Size;
          v39 = 0i64;
          if ( v38 > 0 )
          {
            v40 = p_StrokerEdges->Pages;
            do
            {
              if ( (v40[((v38 >> 1) + v39) >> 4][((unsigned __int8)(v38 >> 1) + (_BYTE)v39) & 0xF].node1 & 0xFFFFFFF) >= (v36->node2 & 0xFFFFFFF) )
              {
                v38 >>= 1;
              }
              else
              {
                v39 += (v38 >> 1) + 1;
                v38 += -1 - (v38 >> 1);
              }
            }
            while ( v38 > 0 );
          }
          v41 = this->StrokerEdges.Size;
          if ( v39 >= v41 )
            break;
          v42 = this->StrokerEdges.Pages;
          while ( 1 )
          {
            v43 = v39 & 0xF;
            v44 = &v42[v39 >> 4][v43];
            if ( (v44->node1 & 0x40000000) == 0 && ((v36->node2 ^ v44->node1) & 0xFFFFFFF) == 0 )
              break;
            if ( ++v39 >= v41 )
              goto LABEL_65;
          }
          v45 = Scaleform::Render::Tessellator::addStrokerJoin(this, v36, &v42[v39 >> 4][v43]);
          if ( v37 == -1 )
          {
            v35 = LODWORD(this->MeshVertices.Size) - v45;
          }
          else
          {
            Scaleform::Render::Tessellator::emitStrokerTrapezoid(this, v36, v37, LODWORD(this->MeshVertices.Size) - v45);
            v36->node1 |= 0x40000000u;
          }
          if ( v44 == v34 )
          {
            Scaleform::Render::Tessellator::emitStrokerTrapezoid(this, v34, LODWORD(this->MeshVertices.Size) - 1, v35);
            v34->node1 |= 0x40000000u;
            break;
          }
          v36 = v44;
          v37 = LODWORD(this->MeshVertices.Size) - 1;
          p_StrokerEdges = &this->StrokerEdges;
        }
      }
LABEL_65:
      ++k;
    }
  }
}

void __fastcall Scaleform::Render::Tessellator::removeLastMonoVertex(
        Scaleform::Render::Tessellator *this,
        Scaleform::Render::Tessellator::MonotoneType *m)
{
  unsigned int lastIdx; // ecx
  unsigned __int64 Size; // rax
  unsigned __int64 prevIdx1; // rcx
  unsigned int prevIdx2; // eax

  lastIdx = m->d.m.lastIdx;
  if ( lastIdx != -1 )
  {
    if ( lastIdx == LODWORD(this->MonoVertices.Size) - 1 )
    {
      Size = this->MonoVertices.Size;
      if ( Size )
        this->MonoVertices.Size = Size - 1;
    }
    prevIdx1 = m->d.m.prevIdx1;
    prevIdx2 = m->d.m.prevIdx2;
    m->d.m.lastIdx = prevIdx1;
    m->d.m.prevIdx1 = prevIdx2;
    m->d.m.prevIdx2 = -1;
    if ( (_DWORD)prevIdx1 == -1 )
      m->start = 0i64;
    else
      this->MonoVertices.Pages[prevIdx1 >> 4][prevIdx1 & 0xF].next = 0i64;
  }
}

void __fastcall Scaleform::Render::Tessellator::replaceMonotone(
        Scaleform::Render::Tessellator *this,
        Scaleform::Render::Tessellator::PendingEndType *pe,
        unsigned int style)
{
  Scaleform::Render::Tessellator::MonotoneType *monotone; // rax

  if ( style )
  {
    monotone = pe->monotone;
    if ( monotone )
    {
      if ( monotone->style != style )
      {
        if ( monotone->start )
        {
          *Scaleform::Render::Tessellator::startMonotone(this, style) = *pe->monotone;
          monotone = pe->monotone;
          monotone->start = 0i64;
          *(_QWORD *)&monotone->d.m.lastIdx = -1i64;
          monotone->d.m.prevIdx2 = -1;
          monotone->lowerBase = 0i64;
        }
      }
      monotone->style = style;
    }
    else
    {
      pe->monotone = Scaleform::Render::Tessellator::startMonotone(this, style);
    }
  }
}

__int64 __fastcall Scaleform::Render::Tessellator::setMesh(Scaleform::Render::Tessellator *this, unsigned int style)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // r14
  __int64 v6; // rcx
  Scaleform::Render::TessMesh *v7; // rax
  __int128 v8; // [rsp+20h] [rbp-38h]

  if ( !this->HasComplexFill )
    return 0i64;
  v4 = style;
  if ( this->StyleMatrix.Array[style * (this->StyleMatrix.Size + 1)] == 0xFFFF )
  {
    if ( ((1 << (style & 0x1F)) & this->ComplexFlags.Array[(unsigned __int64)style >> 5]) != 0 )
    {
      *((_QWORD *)&v8 + 1) = style | 0x800000000000i64;
      DWORD1(v8) = style;
      this->StyleMatrix.Array[style * (this->StyleMatrix.Size + 1)] = this->Meshes.Size;
      v5 = this->Meshes.Size >> 4;
      LODWORD(v8) = this->Meshes.Size;
      if ( v5 >= this->Meshes.NumPages )
        Scaleform::Render::ArrayPaged<Scaleform::Render::TessMesh,4,4>::allocPage(&this->Meshes, v5);
      v6 = this->Meshes.Size & 0xF;
      v7 = this->Meshes.Pages[v5];
      *(_OWORD *)&v7[v6].MeshIdx = v8;
      *(_QWORD *)&v7[v6].Flags2 = 0x8000i64;
      v7[v6].VertexCount = 0;
      ++this->Meshes.Size;
      Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::AddArray(&this->MeshTriangles);
    }
    else
    {
      this->StyleMatrix.Array[style * (this->StyleMatrix.Size + 1)] = 0;
    }
  }
  return this->StyleMatrix.Array[v4 * (this->StyleMatrix.Size + 1)];
}

__int64 __fastcall Scaleform::Render::Tessellator::setMesh(
        Scaleform::Render::Tessellator *this,
        unsigned int style1,
        __int64 style2)
{
  unsigned int v4; // er15
  unsigned __int64 v5; // r9
  __int64 v7; // rdi
  unsigned int *Array; // rdx
  int v9; // ebp
  unsigned int v10; // esi
  unsigned int v11; // eax
  unsigned __int16 Size; // r14
  unsigned __int16 v13; // r8
  unsigned int v14; // eax
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  Scaleform::Render::TessMesh *v17; // rax
  unsigned __int16 *v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int16 *v20; // rax
  __int128 v21; // [rsp+20h] [rbp-48h]
  unsigned __int64 v22; // [rsp+70h] [rbp+8h]

  v4 = style2;
  v5 = style1;
  if ( !this->HasComplexFill )
    return 0i64;
  style2 = (unsigned int)style2;
  v7 = style1;
  if ( this->StyleMatrix.Array[(unsigned int)style2 + style1 * this->StyleMatrix.Size] == 0xFFFF )
  {
    Array = this->ComplexFlags.Array;
    v9 = Array[v5 >> 5] & (1 << (v5 & 0x1F));
    v10 = Array[(unsigned __int64)(unsigned int)style2 >> 5] & (1 << (style2 & 0x1F));
    if ( v9 | v10 )
    {
      if ( v9 )
        v9 = 0x8000;
      if ( v10 )
        v10 = 0x8000;
      if ( !v9 )
      {
        v11 = v5;
        v9 = v10;
        LODWORD(v5) = style2;
        v10 = 0;
        v4 = v11;
      }
      Size = this->Meshes.Size;
      v7 = (unsigned int)v5;
      v13 = this->StyleMatrix.Array[(unsigned int)v5 * (this->StyleMatrix.Size + 1)];
      if ( v10 || v13 == 0xFFFF || (this->Meshes.Pages[(unsigned __int64)v13 >> 4][v13 & 0xF].Flags2 & 0x8000) != 0 )
      {
        LODWORD(v21) = this->Meshes.Size;
        v14 = 0;
        if ( v10 )
          v14 = v4;
        *((_QWORD *)&v21 + 1) = __PAIR64__(v9, v14);
        v15 = this->Meshes.Size >> 4;
        DWORD1(v21) = v5;
        v22 = v15;
        if ( v15 >= this->Meshes.NumPages )
          Scaleform::Render::ArrayPaged<Scaleform::Render::TessMesh,4,4>::allocPage(&this->Meshes, v15);
        v16 = this->Meshes.Size & 0xF;
        v17 = this->Meshes.Pages[v22];
        *(_OWORD *)&v17[v16].MeshIdx = v21;
        *(_QWORD *)&v17[v16].Flags2 = v10;
        v17[v16].VertexCount = 0;
        ++this->Meshes.Size;
        Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::AddArray(&this->MeshTriangles);
      }
      else
      {
        Size = this->StyleMatrix.Array[(unsigned int)v5 * (this->StyleMatrix.Size + 1)];
      }
      style2 = v4;
      this->StyleMatrix.Array[v4 + v7 * this->StyleMatrix.Size] = Size;
      this->StyleMatrix.Array[v7 + v4 * this->StyleMatrix.Size] = Size;
      v18 = this->StyleMatrix.Array;
      v19 = v7 * (this->StyleMatrix.Size + 1);
      if ( this->InvasiveMerge )
      {
        if ( v18[v19] == 0xFFFF )
          v18[v7 * (this->StyleMatrix.Size + 1)] = Size;
        v20 = this->StyleMatrix.Array;
        if ( v20[v4 * (this->StyleMatrix.Size + 1)] == 0xFFFF )
          v20[v4 * (this->StyleMatrix.Size + 1)] = Size;
      }
      else if ( v18[v19] == 0xFFFF && v9 && !v10 )
      {
        v18[v7 * (this->StyleMatrix.Size + 1)] = Size;
      }
    }
    else
    {
      this->StyleMatrix.Array[v5 * (this->StyleMatrix.Size + 1)] = 0;
      this->StyleMatrix.Array[(unsigned int)style2 * (this->StyleMatrix.Size + 1)] = 0;
      this->StyleMatrix.Array[(unsigned int)style2 + v5 * this->StyleMatrix.Size] = 0;
      this->StyleMatrix.Array[v5 + (unsigned int)style2 * this->StyleMatrix.Size] = 0;
    }
  }
  return this->StyleMatrix.Array[style2 + v7 * this->StyleMatrix.Size];
}

void __fastcall Scaleform::Render::Tessellator::setupIntersections(Scaleform::Render::Tessellator *this)
{
  unsigned __int64 v1; // rdi
  Scaleform::Render::ArrayPaged<unsigned int,4,16> *p_InteriorOrder; // rbx
  Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,8> *p_InteriorChains; // rbp
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  Scaleform::Render::Tessellator::MonoChainType **v8; // r15
  unsigned __int64 v9; // rsi

  v1 = 0i64;
  this->InteriorChains.Size = 0i64;
  this->InteriorOrder.Size = 0i64;
  if ( this->ActiveChains.Size )
  {
    p_InteriorOrder = &this->InteriorOrder;
    p_InteriorChains = (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,8> *)&this->InteriorChains;
    do
    {
      v5 = v1 >> 4;
      v6 = v1 & 0xF;
      this->ActiveChains.Pages[v5][v6]->posIntr = v1;
      v7 = p_InteriorChains->Size >> 4;
      v8 = &this->ActiveChains.Pages[v5][v6];
      if ( v7 >= p_InteriorChains->NumPages )
        Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::MonoChainType *,4,8>::allocPage(
          p_InteriorChains,
          p_InteriorChains->Size >> 4);
      p_InteriorChains->Pages[v7][p_InteriorChains->Size & 0xF] = (Scaleform::Render::Tessellator::MonoVertexType *)*v8;
      ++p_InteriorChains->Size;
      v9 = p_InteriorOrder->Size >> 4;
      if ( v9 >= p_InteriorOrder->NumPages )
        Scaleform::Render::ArrayPaged<unsigned int,4,16>::allocPage(p_InteriorOrder, p_InteriorOrder->Size >> 4);
      p_InteriorOrder->Pages[v9][p_InteriorOrder->Size & 0xF] = v1++;
      ++p_InteriorOrder->Size;
    }
    while ( v1 < this->ActiveChains.Size );
  }
}

void __fastcall Scaleform::Render::Tessellator::splitMesh(
        Scaleform::Render::Tessellator *this,
        Scaleform::Render::TessMesh *mesh)
{
  unsigned int v4; // er8
  unsigned int MeshIdx; // esi
  Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16> *p_MeshTriangles; // r14
  Scaleform::Render::ArrayPaged<Scaleform::Render::TessVertex,4,16> *p_MeshVertices; // rbx
  Scaleform::Render::ArrayPaged<Scaleform::Render::TessVertex,4,16> *v8; // r9
  unsigned __int64 v9; // r12
  unsigned int Size; // eax
  Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::ArrayType *Arrays; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rax
  Scaleform::Render::Tessellator::TriangleType *v18; // r8
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned int v24; // er14
  unsigned __int64 v25; // rsi
  Scaleform::Render::TessMesh *v26; // rcx
  unsigned int VertexCount; // er12
  __int64 v28; // rcx
  Scaleform::Render::TessMesh *v29; // rax
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // r9
  unsigned __int64 v32; // rcx
  Scaleform::Render::TessVertex **Pages; // r8
  Scaleform::Render::Tessellator::TriangleType *v34; // r9
  __int64 v35; // r13
  __int64 v36; // r14
  __int64 v37; // r12
  unsigned __int64 v38; // rbp
  unsigned __int64 MaxPages; // rdx
  Scaleform::Render::LinearHeap *pHeap; // rcx
  void *v41; // rdi
  unsigned __int64 v42; // rax
  Scaleform::Render::TessVertex *v43; // rax
  __int64 v44; // rcx
  Scaleform::Render::TessVertex *v45; // rax
  unsigned __int64 v46; // rbp
  unsigned __int64 v47; // rdx
  Scaleform::Render::LinearHeap *v48; // rcx
  void *v49; // rdi
  unsigned __int64 v50; // rax
  Scaleform::Render::TessVertex *v51; // rax
  __int64 v52; // rcx
  Scaleform::Render::TessVertex *v53; // rax
  unsigned __int64 v54; // rbp
  unsigned __int64 v55; // rdx
  Scaleform::Render::LinearHeap *v56; // rcx
  void *v57; // rdi
  unsigned __int64 v58; // rax
  __int64 v59; // rcx
  Scaleform::Render::TessVertex *v60; // rax
  Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::ArrayAdaptor arr; // [rsp+20h] [rbp-68h] BYREF
  unsigned int at; // [rsp+90h] [rbp+8h]
  unsigned __int64 ata; // [rsp+90h] [rbp+8h]
  unsigned __int64 atb; // [rsp+90h] [rbp+8h]
  Scaleform::Render::Tessellator::TriangleType *v65; // [rsp+98h] [rbp+10h]
  unsigned __int64 v66; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v67; // [rsp+A8h] [rbp+20h]

  v4 = this->VertexLimit - (this->VertexLimit >> 2);
  MeshIdx = mesh->MeshIdx;
  p_MeshTriangles = &this->MeshTriangles;
  p_MeshVertices = &this->MeshVertices;
  v8 = &this->MeshVertices;
  v9 = (v4 + mesh->VertexCount - 1) / v4;
  Size = this->MeshTriangles.Arrays[mesh->MeshIdx].Size;
  Arrays = this->MeshTriangles.Arrays;
  v12 = mesh->MeshIdx;
  at = Size / (unsigned int)v9;
  v13 = Arrays[v12].Size;
  arr.Pages = Arrays[v12].Pages;
  arr.Size = v13;
  Scaleform::Alg::QuickSortSliced<Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::ArrayAdaptor,Scaleform::Render::Tessellator::CmpVer1>(
    &arr,
    0i64,
    v13,
    (Scaleform::Render::Tessellator::CmpVer1)v8);
  v14 = 0i64;
  v15 = this->MeshTriangles.Arrays[mesh->MeshIdx].Size;
  if ( v15 )
  {
    do
    {
      v16 = v14 >> 4;
      v17 = v14++ & 0xF;
      v18 = &this->MeshTriangles.Arrays[MeshIdx].Pages[v16][v17];
      this->MeshVertices.Pages[(unsigned __int64)v18->d.t.v1 >> 4][v18->d.t.v1 & 0xF].Mesh = -1;
      this->MeshVertices.Pages[(unsigned __int64)v18->d.t.v2 >> 4][v18->d.t.v2 & 0xF].Mesh = -1;
      this->MeshVertices.Pages[(unsigned __int64)v18->d.t.v3 >> 4][v18->d.t.v3 & 0xF].Mesh = -1;
    }
    while ( v14 < v15 );
  }
  v19 = 1i64;
  v20 = v9;
  if ( v9 > 1 )
  {
    v21 = at;
    do
    {
      if ( !Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::Split(
              p_MeshTriangles,
              MeshIdx,
              v21) )
        break;
      v22 = MeshIdx & 0xF;
      v23 = (unsigned __int64)MeshIdx >> 4;
      this->Meshes.Pages[v23][v22].VertexCount = -1;
      v24 = this->Meshes.Size;
      v25 = this->Meshes.Size >> 4;
      v26 = this->Meshes.Pages[v23];
      VertexCount = v26[v22].VertexCount;
      arr = *(Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::ArrayAdaptor *)&v26[v22].MeshIdx;
      LODWORD(arr.Size) = v24;
      ata = *(_QWORD *)&v26[v22].Flags2;
      if ( v25 >= this->Meshes.NumPages )
        Scaleform::Render::ArrayPaged<Scaleform::Render::TessMesh,4,4>::allocPage(&this->Meshes, v25);
      ++v19;
      v28 = this->Meshes.Size & 0xF;
      v29 = this->Meshes.Pages[v25];
      MeshIdx = v24;
      p_MeshTriangles = &this->MeshTriangles;
      *(Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::ArrayAdaptor *)&v29[v28].MeshIdx = arr;
      *(_QWORD *)&v29[v28].Flags2 = ata;
      v29[v28].VertexCount = VertexCount;
      ++this->Meshes.Size;
    }
    while ( v19 < v20 );
    p_MeshVertices = &this->MeshVertices;
  }
  v30 = 0i64;
  if ( this->Meshes.Size )
  {
    v31 = 0i64;
    atb = 0i64;
    do
    {
      if ( this->Meshes.Pages[v30 >> 4][v30 & 0xF].VertexCount == -1 )
      {
        v32 = 0i64;
        v66 = 0i64;
        v67 = *(unsigned __int64 *)((char *)&this->MeshTriangles.Arrays->Size + v31);
        if ( v67 )
        {
          do
          {
            Pages = this->MeshVertices.Pages;
            v34 = &(*(Scaleform::Render::Tessellator::TriangleType ***)((char *)&this->MeshTriangles.Arrays->Pages + v31))[v32 >> 4][v32 & 0xF];
            v65 = v34;
            v35 = (__int64)&Pages[(unsigned __int64)v34->d.t.v1 >> 4][v34->d.t.v1 & 0xF];
            v36 = (__int64)&Pages[(unsigned __int64)v34->d.t.v2 >> 4][v34->d.t.v2 & 0xF];
            v37 = (__int64)&Pages[(unsigned __int64)v34->d.t.v3 >> 4][v34->d.t.v3 & 0xF];
            if ( *(_WORD *)(v35 + 18) == 0xFFFF )
              *(_WORD *)(v35 + 18) = v30;
            if ( *(_WORD *)(v36 + 18) == 0xFFFF )
              *(_WORD *)(v36 + 18) = v30;
            if ( *(_WORD *)(v37 + 18) == 0xFFFF )
              *(_WORD *)(v37 + 18) = v30;
            if ( *(unsigned __int16 *)(v35 + 18) != v30 )
            {
              v34->d.t.v1 = this->MeshVertices.Size;
              v38 = p_MeshVertices->Size >> 4;
              if ( v38 >= p_MeshVertices->NumPages )
              {
                MaxPages = p_MeshVertices->MaxPages;
                if ( v38 >= MaxPages )
                {
                  pHeap = p_MeshVertices->pHeap;
                  if ( p_MeshVertices->Pages )
                  {
                    v41 = Scaleform::Render::LinearHeap::Alloc(pHeap, 16 * MaxPages);
                    memmove(v41, p_MeshVertices->Pages, 8 * p_MeshVertices->NumPages);
                    v42 = p_MeshVertices->MaxPages;
                    p_MeshVertices->Pages = (Scaleform::Render::TessVertex **)v41;
                    p_MeshVertices->MaxPages = 2 * v42;
                  }
                  else
                  {
                    p_MeshVertices->MaxPages = 16i64;
                    p_MeshVertices->Pages = (Scaleform::Render::TessVertex **)Scaleform::Render::LinearHeap::Alloc(
                                                                                pHeap,
                                                                                0x80ui64);
                  }
                }
                v43 = (Scaleform::Render::TessVertex *)Scaleform::Render::LinearHeap::Alloc(
                                                         p_MeshVertices->pHeap,
                                                         0x140ui64);
                v34 = v65;
                p_MeshVertices->Pages[v38] = v43;
                ++p_MeshVertices->NumPages;
              }
              v44 = p_MeshVertices->Size & 0xF;
              v45 = p_MeshVertices->Pages[v38];
              *(_OWORD *)&v45[v44].x = *(_OWORD *)v35;
              *(_DWORD *)&v45[v44].Flags = *(_DWORD *)(v35 + 16);
              p_MeshVertices->Pages[p_MeshVertices->Size++ >> 4][(LODWORD(p_MeshVertices->Size) - 1) & 0xF].Mesh = v30;
            }
            if ( *(unsigned __int16 *)(v36 + 18) != v30 )
            {
              v34->d.t.v2 = this->MeshVertices.Size;
              v46 = p_MeshVertices->Size >> 4;
              if ( v46 >= p_MeshVertices->NumPages )
              {
                v47 = p_MeshVertices->MaxPages;
                if ( v46 >= v47 )
                {
                  v48 = p_MeshVertices->pHeap;
                  if ( p_MeshVertices->Pages )
                  {
                    v49 = Scaleform::Render::LinearHeap::Alloc(v48, 16 * v47);
                    memmove(v49, p_MeshVertices->Pages, 8 * p_MeshVertices->NumPages);
                    v50 = p_MeshVertices->MaxPages;
                    p_MeshVertices->Pages = (Scaleform::Render::TessVertex **)v49;
                    p_MeshVertices->MaxPages = 2 * v50;
                  }
                  else
                  {
                    p_MeshVertices->MaxPages = 16i64;
                    p_MeshVertices->Pages = (Scaleform::Render::TessVertex **)Scaleform::Render::LinearHeap::Alloc(
                                                                                v48,
                                                                                0x80ui64);
                  }
                }
                v51 = (Scaleform::Render::TessVertex *)Scaleform::Render::LinearHeap::Alloc(
                                                         p_MeshVertices->pHeap,
                                                         0x140ui64);
                v34 = v65;
                p_MeshVertices->Pages[v46] = v51;
                ++p_MeshVertices->NumPages;
              }
              v52 = p_MeshVertices->Size & 0xF;
              v53 = p_MeshVertices->Pages[v46];
              *(_OWORD *)&v53[v52].x = *(_OWORD *)v36;
              *(_DWORD *)&v53[v52].Flags = *(_DWORD *)(v36 + 16);
              p_MeshVertices->Pages[p_MeshVertices->Size++ >> 4][(LODWORD(p_MeshVertices->Size) - 1) & 0xF].Mesh = v30;
            }
            if ( *(unsigned __int16 *)(v37 + 18) != v30 )
            {
              v34->d.t.v3 = this->MeshVertices.Size;
              v54 = p_MeshVertices->Size >> 4;
              if ( v54 >= p_MeshVertices->NumPages )
              {
                v55 = p_MeshVertices->MaxPages;
                if ( v54 >= v55 )
                {
                  v56 = p_MeshVertices->pHeap;
                  if ( p_MeshVertices->Pages )
                  {
                    v57 = Scaleform::Render::LinearHeap::Alloc(v56, 16 * v55);
                    memmove(v57, p_MeshVertices->Pages, 8 * p_MeshVertices->NumPages);
                    v58 = p_MeshVertices->MaxPages;
                    p_MeshVertices->Pages = (Scaleform::Render::TessVertex **)v57;
                    p_MeshVertices->MaxPages = 2 * v58;
                  }
                  else
                  {
                    p_MeshVertices->MaxPages = 16i64;
                    p_MeshVertices->Pages = (Scaleform::Render::TessVertex **)Scaleform::Render::LinearHeap::Alloc(
                                                                                v56,
                                                                                0x80ui64);
                  }
                }
                p_MeshVertices->Pages[v54] = (Scaleform::Render::TessVertex *)Scaleform::Render::LinearHeap::Alloc(
                                                                                p_MeshVertices->pHeap,
                                                                                0x140ui64);
                ++p_MeshVertices->NumPages;
              }
              v59 = p_MeshVertices->Size & 0xF;
              v60 = p_MeshVertices->Pages[v54];
              *(_OWORD *)&v60[v59].x = *(_OWORD *)v37;
              *(_DWORD *)&v60[v59].Flags = *(_DWORD *)(v37 + 16);
              p_MeshVertices->Pages[p_MeshVertices->Size++ >> 4][(LODWORD(p_MeshVertices->Size) - 1) & 0xF].Mesh = v30;
            }
            v31 = atb;
            v32 = v66 + 1;
            v66 = v32;
          }
          while ( v32 < v67 );
        }
      }
      v31 += 32i64;
      ++v30;
      atb = v31;
    }
    while ( v30 < this->Meshes.Size );
  }
}

Scaleform::Render::Tessellator::MonotoneType *__fastcall Scaleform::Render::Tessellator::startMonotone(
        Scaleform::Render::Tessellator *this,
        unsigned int style)
{
  Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonotoneType,4,16> *p_Monotones; // rbx
  unsigned __int64 v3; // rdi
  __int64 v4; // rcx
  Scaleform::Render::Tessellator::MonotoneType *v5; // rax
  __int128 v7; // [rsp+20h] [rbp-28h]
  __int128 v8; // [rsp+30h] [rbp-18h]

  *((_QWORD *)&v7 + 1) = -1i64;
  p_Monotones = &this->Monotones;
  *(_QWORD *)&v7 = 0i64;
  v3 = this->Monotones.Size >> 4;
  LODWORD(v8) = -1;
  DWORD1(v8) = style;
  *((_QWORD *)&v8 + 1) = 0i64;
  if ( v3 >= this->Monotones.NumPages )
    Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonotoneType,4,16>::allocPage(&this->Monotones, v3);
  v4 = p_Monotones->Size & 0xF;
  v5 = p_Monotones->Pages[v3];
  *(_OWORD *)&v5[v4].start = v7;
  *(_OWORD *)&v5[v4].d.t.meshIdx = v8;
  return &p_Monotones->Pages[p_Monotones->Size++ >> 4][(LODWORD(p_Monotones->Size) - 1) & 0xF];
}

void __fastcall Scaleform::Render::Tessellator::startMonotone(
        Scaleform::Render::Tessellator *this,
        Scaleform::Render::Tessellator::ScanChainType *scan,
        unsigned int vertex)
{
  Scaleform::Render::Tessellator::MonoChainType *chain; // rax
  unsigned __int16 rightAbove; // cx
  Scaleform::Render::Tessellator::MonotoneType *started; // rax
  Scaleform::Render::Tessellator::MonotoneType *v9; // rdi
  Scaleform::Render::Tessellator::BaseLineType *lowerBase; // r8
  unsigned __int64 v11; // rbp
  Scaleform::Render::Tessellator::MonoVertexType *v12; // rbp
  unsigned __int64 v13; // rbx
  Scaleform::Render::Tessellator::MonoVertexType v14; // [rsp+20h] [rbp-18h]

  chain = scan->chain;
  scan->monotone = 0i64;
  rightAbove = chain->rightAbove;
  if ( rightAbove )
  {
    started = Scaleform::Render::Tessellator::startMonotone(this, rightAbove);
    scan->monotone = started;
    v9 = started;
    if ( started )
    {
      lowerBase = started->lowerBase;
      if ( lowerBase )
      {
        if ( lowerBase->y == this->MeshVertices.Pages[(unsigned __int64)(vertex & 0xFFFFFFF) >> 4][vertex & 0xF].y )
        {
          lowerBase->vertexRight = vertex & 0xFFFFFFF;
        }
        else if ( (vertex & 0x80000000) == 0 )
        {
          Scaleform::Render::Tessellator::connectPendingToRight(this, scan, vertex);
        }
        else
        {
          Scaleform::Render::Tessellator::connectPendingToLeft(this, scan, vertex);
        }
      }
      else
      {
        v14.next = 0i64;
        v14.srcVer = vertex;
        v14.aaVer = vertex;
        if ( started->start )
        {
          v12 = &this->MonoVertices.Pages[(unsigned __int64)started->d.m.lastIdx >> 4][started->d.m.lastIdx & 0xF];
          if ( v12->srcVer == vertex )
            return;
          v13 = this->MonoVertices.Size >> 4;
          if ( v13 >= this->MonoVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
          this->MonoVertices.Pages[v13][this->MonoVertices.Size & 0xF] = v14;
          v12->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          v9->d.m.prevIdx2 = v9->d.m.prevIdx1;
          v9->d.m.prevIdx1 = v9->d.m.lastIdx;
        }
        else
        {
          v11 = this->MonoVertices.Size >> 4;
          if ( v11 >= this->MonoVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
          this->MonoVertices.Pages[v11][this->MonoVertices.Size & 0xF] = v14;
          v9->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          *(_QWORD *)&v9->d.t.numTriangles = -1i64;
        }
        v9->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
      }
    }
  }
}

void __fastcall Scaleform::Render::Tessellator::swapChains(
        Scaleform::Render::Tessellator *this,
        unsigned int startIn,
        unsigned int endIn)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rax
  unsigned __int64 v7; // r8
  Scaleform::Render::Tessellator::IntersectionType *v8; // rbx
  unsigned int **Pages; // rdx
  unsigned int v10; // er9
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r11
  Scaleform::Render::Tessellator::MonoChainType *v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // r8
  Scaleform::Render::Tessellator::MonoChainType *v17; // rax
  Scaleform::Render::Tessellator::MonoChainType ***v18; // rcx
  Scaleform::Render::Tessellator::MonoChainType **v19; // r8
  Scaleform::Render::Tessellator::MonoChainType **v20; // rcx
  Scaleform::Render::Tessellator::MonoChainType **v21; // r8
  Scaleform::Render::Tessellator::MonoChainType *v22; // rdx
  unsigned int **v23; // rdx
  unsigned int *v24; // r8
  __int64 v25; // r9
  unsigned int *v26; // rax

  if ( startIn < endIn )
  {
    v4 = startIn;
    v5 = endIn - startIn;
    do
    {
      v6 = v4 & 0xF;
      v7 = v4++ >> 4;
      v8 = &this->Intersections.Pages[v7][v6];
      Pages = this->InteriorOrder.Pages;
      v10 = Pages[(unsigned __int64)v8->pos2 >> 4][v8->pos2 & 0xF];
      v11 = Pages[(unsigned __int64)v8->pos1 >> 4][v8->pos1 & 0xF];
      v12 = v11 & 0xF;
      v13 = v11 >> 4;
      v14 = this->InteriorChains.Pages[v13][v12];
      v15 = v10 & 0xF;
      v14->flags |= 0x10u;
      v16 = (unsigned __int64)v10 >> 4;
      v17 = this->InteriorChains.Pages[v16][v15];
      v17->flags |= 0x10u;
      v18 = this->InteriorChains.Pages;
      v19 = v18[v16];
      v20 = v18[v13];
      v21 = &v19[v15];
      v22 = v20[v12];
      v20[v12] = *v21;
      *v21 = v22;
      v23 = this->InteriorOrder.Pages;
      v24 = &v23[(unsigned __int64)v8->pos2 >> 4][v8->pos2 & 0xF];
      v25 = v8->pos1 & 0xF;
      v26 = v23[(unsigned __int64)v8->pos1 >> 4];
      LODWORD(v23) = v26[v25];
      v26[v25] = *v24;
      *v24 = (unsigned int)v23;
      --v5;
    }
    while ( v5 );
  }
}

void __fastcall Scaleform::Render::Tessellator::sweepScanbeam(
        Scaleform::Render::Tessellator *this,
        const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoChainType *,4,8> *aet,
        float yb)
{
  const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoChainType *,4,8> *v3; // r11
  unsigned __int64 i; // rdi
  Scaleform::Render::Tessellator::MonoChainType *v6; // rdx
  bool v7; // zf
  unsigned __int64 v8; // r14
  __int64 v9; // xmm1_8
  __int64 v10; // rdx
  Scaleform::Render::Tessellator::ScanChainType *v11; // rax
  unsigned int v12; // er15
  unsigned int v13; // er14
  Scaleform::Render::Tessellator::ScanChainType *v14; // r13
  unsigned __int64 Size; // rax
  Scaleform::Render::Tessellator::ScanChainType *v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // r12
  const Scaleform::Render::Tessellator::MonoChainType *chain; // r8
  const Scaleform::Render::Tessellator::MonoChainType *v20; // rdx
  unsigned int posScan; // ecx
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // er8
  Scaleform::Render::Tessellator::ScanChainType *v25; // rbx
  Scaleform::Render::Tessellator::ScanChainType *v26; // rbx
  unsigned int v27; // er9
  unsigned __int64 v28; // r15
  unsigned int v29; // eax
  Scaleform::Render::Tessellator::ScanChainType *v30; // r12
  unsigned int v31; // er10
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  Scaleform::Render::Tessellator::ScanChainType *v34; // rax
  __int64 v35; // rcx
  signed int vertex; // ebx
  Scaleform::Render::Tessellator::ScanChainType *v37; // r14
  Scaleform::Render::Tessellator::ScanChainType *v38; // rax
  signed int v39; // er8
  Scaleform::Render::Tessellator::ScanChainType *v40; // rcx
  int v41; // eax
  int v42; // eax
  int v43; // eax
  Scaleform::Render::Tessellator::MonotoneType *v44; // rdi
  Scaleform::Render::Tessellator::BaseLineType *v45; // r8
  unsigned __int64 v46; // r14
  int v47; // eax
  Scaleform::Render::Tessellator::MonoVertexType *v48; // r14
  unsigned __int64 v49; // r15
  Scaleform::Render::Tessellator::MonotoneType *v50; // rbx
  unsigned int v51; // er8
  Scaleform::Render::Tessellator::BaseLineType *v52; // r9
  unsigned __int64 v53; // r14
  Scaleform::Render::Tessellator::MonoVertexType *v54; // rdi
  unsigned __int64 v55; // r15
  Scaleform::Render::Tessellator::MonotoneType *v56; // rax
  Scaleform::Render::Tessellator::MonoChainType *v57; // rax
  Scaleform::Render::Tessellator::MonotoneType *v58; // rax
  Scaleform::Render::Tessellator::BaseLineType *v59; // rax
  Scaleform::Render::Tessellator::ScanChainType *v60; // rdi
  Scaleform::Render::Tessellator::MonotoneType *v61; // rbx
  Scaleform::Render::Tessellator::BaseLineType *v62; // r9
  unsigned __int64 v63; // r14
  int v64; // eax
  Scaleform::Render::Tessellator::MonoVertexType *v65; // rdi
  unsigned __int64 v66; // r15
  Scaleform::Render::Tessellator::MonotoneType *monotone; // rdi
  Scaleform::Render::Tessellator::BaseLineType *lowerBase; // r8
  unsigned __int64 v69; // r15
  Scaleform::Render::Tessellator::MonoVertexType *v70; // r14
  unsigned __int64 v71; // r12
  Scaleform::Render::Tessellator::MonoVertexType *v72; // rax
  Scaleform::Render::Tessellator::MonotoneType *v73; // rdi
  Scaleform::Render::Tessellator::BaseLineType *v74; // r8
  unsigned __int64 v75; // r15
  Scaleform::Render::Tessellator::MonoVertexType *v76; // r14
  unsigned __int64 v77; // r12
  unsigned int v78; // edi
  unsigned int v79; // er14
  unsigned int v80; // er10
  unsigned int v81; // er11
  Scaleform::Render::Tessellator::ScanChainType *v82; // r12
  Scaleform::Render::Tessellator::ScanChainType *v83; // r9
  Scaleform::Render::Tessellator::ScanChainType *v84; // r8
  Scaleform::Render::Tessellator::ScanChainType *v85; // rdi
  Scaleform::Render::Tessellator::ScanChainType *v86; // r12
  Scaleform::Render::Tessellator::ScanChainType *v87; // rdx
  Scaleform::Render::Tessellator::MonotoneType *v88; // rdi
  Scaleform::Render::Tessellator::BaseLineType *v89; // r8
  unsigned __int64 v90; // r15
  Scaleform::Render::Tessellator::MonoVertexType *v91; // r14
  unsigned __int64 v92; // r12
  Scaleform::Render::Tessellator::ScanChainType *v93; // r13
  unsigned int v94; // er8
  Scaleform::Render::Tessellator::MonotoneType *v95; // r14
  Scaleform::Render::Tessellator::BaseLineType *v96; // r9
  unsigned __int64 v97; // r15
  Scaleform::Render::Tessellator::MonoVertexType *v98; // rdi
  unsigned __int64 v99; // r15
  Scaleform::Render::Tessellator::MonotoneType *v100; // r14
  Scaleform::Render::Tessellator::BaseLineType *v101; // r8
  unsigned __int64 v102; // r15
  Scaleform::Render::Tessellator::MonoVertexType *v103; // rdi
  unsigned __int64 v104; // r12
  unsigned int v105; // edi
  Scaleform::Render::Tessellator::MonotoneType *v106; // r14
  Scaleform::Render::Tessellator::BaseLineType *v107; // r8
  unsigned __int64 v108; // r12
  Scaleform::Render::Tessellator::MonoVertexType *v109; // r15
  unsigned __int64 v110; // r12
  Scaleform::Render::Tessellator::MonotoneType *v111; // rdi
  Scaleform::Render::Tessellator::BaseLineType *v112; // r8
  unsigned __int64 v113; // r14
  Scaleform::Render::Tessellator::MonoVertexType *v114; // r14
  unsigned __int64 v115; // r15
  Scaleform::Render::Tessellator::ScanChainType *v116; // rdi
  Scaleform::Render::Tessellator::ScanChainType *v117; // rax
  signed int v118; // er8
  Scaleform::Render::Tessellator::MonotoneType *v119; // rbx
  Scaleform::Render::Tessellator::BaseLineType *v120; // r9
  unsigned __int64 v121; // r14
  int v122; // eax
  Scaleform::Render::Tessellator::MonoVertexType *v123; // rdi
  unsigned __int64 v124; // r15
  Scaleform::Render::Tessellator::ScanChainType *v125; // rax
  __int64 v126; // rcx
  signed int v127; // er8
  Scaleform::Render::Tessellator::ScanChainType *v128; // r12
  Scaleform::Render::Tessellator::MonotoneType *v129; // rbx
  Scaleform::Render::Tessellator::BaseLineType *v130; // r9
  unsigned __int64 v131; // r14
  int v132; // eax
  Scaleform::Render::Tessellator::MonoVertexType *v133; // rdi
  unsigned __int64 v134; // r15
  Scaleform::Render::Tessellator::MonotoneType *v135; // rbx
  unsigned int v136; // er8
  Scaleform::Render::Tessellator::BaseLineType *v137; // r9
  unsigned __int64 v138; // r14
  Scaleform::Render::Tessellator::MonoVertexType *v139; // rdi
  unsigned __int64 v140; // r15
  unsigned __int64 v141; // r14
  unsigned __int64 v142; // rdi
  __int64 v143; // r15
  Scaleform::Render::Tessellator::ScanChainType *v144; // r12
  unsigned __int64 MaxPages; // rdx
  Scaleform::Render::LinearHeap *pHeap; // rcx
  void *v147; // rbx
  unsigned __int64 v148; // rax
  __int64 v149; // rdx
  Scaleform::Render::Tessellator::ScanChainType *v150; // rax
  unsigned __int64 v151; // rcx
  unsigned __int64 v152; // rdx
  Scaleform::Render::Tessellator::MonoChainType *v153; // rdx
  unsigned __int16 leftAbove; // ax
  unsigned int v155; // [rsp+20h] [rbp-E0h]
  Scaleform::Render::Tessellator::ScanChainType *v156; // [rsp+28h] [rbp-D8h]
  Scaleform::Render::Tessellator::ScanChainType *scan; // [rsp+30h] [rbp-D0h]
  Scaleform::Render::Tessellator::ScanChainType *dst; // [rsp+38h] [rbp-C8h]
  Scaleform::Render::Tessellator::BaseLineType upperBase; // [rsp+40h] [rbp-C0h] BYREF
  Scaleform::Render::Tessellator::MonoVertexType v160; // [rsp+60h] [rbp-A0h]
  __int64 v161; // [rsp+70h] [rbp-90h]
  Scaleform::Render::Tessellator::MonoVertexType v162; // [rsp+78h] [rbp-88h]
  Scaleform::Render::Tessellator::MonoVertexType v163; // [rsp+88h] [rbp-78h]
  Scaleform::Render::Tessellator::MonoVertexType v164; // [rsp+98h] [rbp-68h]
  Scaleform::Render::Tessellator::MonoVertexType v165; // [rsp+A8h] [rbp-58h]
  Scaleform::Render::Tessellator::MonoVertexType v166; // [rsp+B8h] [rbp-48h]
  Scaleform::Render::Tessellator::MonoVertexType v167; // [rsp+C8h] [rbp-38h]
  Scaleform::Render::Tessellator::MonoVertexType v168; // [rsp+D8h] [rbp-28h]
  Scaleform::Render::Tessellator::MonoVertexType v169; // [rsp+E8h] [rbp-18h]
  Scaleform::Render::Tessellator::MonoVertexType v170; // [rsp+F8h] [rbp-8h]
  Scaleform::Render::Tessellator::MonoVertexType v171; // [rsp+108h] [rbp+8h]
  Scaleform::Render::Tessellator::MonoVertexType v172; // [rsp+118h] [rbp+18h]
  Scaleform::Render::Tessellator::MonoVertexType v173; // [rsp+128h] [rbp+28h]
  Scaleform::Render::Tessellator::ScanChainType *v174; // [rsp+1A0h] [rbp+A0h]
  unsigned int v175; // [rsp+1A0h] [rbp+A0h]
  unsigned int v177; // [rsp+1B0h] [rbp+B0h]
  int v178; // [rsp+1B8h] [rbp+B8h]
  unsigned int v179; // [rsp+1B8h] [rbp+B8h]

  this->LastX = -1.0e30;
  this->ChainsAbove.Size = 0i64;
  v3 = aet;
  for ( i = 0i64; i < v3->Size; ++i )
  {
    v6 = v3->Pages[i >> 4][i & 0xF];
    v7 = (v6->flags & 4) == 0;
    v6->posScan = i;
    if ( !v7 )
    {
      v160 = (Scaleform::Render::Tessellator::MonoVertexType)(unsigned __int64)v6;
      v8 = this->ChainsAbove.Size >> 4;
      LODWORD(v161) = -1;
      if ( v8 >= this->ChainsAbove.NumPages )
      {
        Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::ScanChainType,4,8>::allocPage(
          &this->ChainsAbove,
          v8);
        v3 = aet;
      }
      v9 = v161;
      v10 = this->ChainsAbove.Size & 0xF;
      v11 = this->ChainsAbove.Pages[v8];
      *(Scaleform::Render::Tessellator::MonoVertexType *)&v11[v10].chain = v160;
      *(_QWORD *)&v11[v10].vertex = v9;
      ++this->ChainsAbove.Size;
    }
  }
  upperBase.y = yb;
  v12 = 0;
  v13 = 0;
  v178 = -1;
  v14 = 0i64;
  dst = 0i64;
  upperBase.numChains = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        Size = this->ChainsBelow.Size;
        if ( v12 >= Size || v13 >= this->ChainsAbove.Size )
          break;
        v16 = this->ChainsBelow.Pages[(unsigned __int64)v12 >> 4];
        v17 = v12 & 0xF;
        v18 = v13 & 0xF;
        chain = v16[v12 & 0xF].chain;
        v174 = this->ChainsAbove.Pages[(unsigned __int64)v13 >> 4];
        v20 = v174[v13 & 0xF].chain;
        posScan = chain->posScan;
        v22 = v20->posScan;
        if ( v22 == posScan )
        {
          v23 = Scaleform::Render::Tessellator::addEventVertex(this, v20, yb, 0);
          ++v12;
          ++v13;
          v174[v18].vertex = v23;
          v16[v17].vertex = v23;
        }
        else if ( v22 >= posScan )
        {
          v16[v12++ & 0xF].vertex = Scaleform::Render::Tessellator::addEventVertex(this, chain, yb, 1);
        }
        else
        {
          ++v13;
          v174[v18].vertex = Scaleform::Render::Tessellator::addEventVertex(this, v20, yb, 1);
        }
      }
      v24 = v13;
      if ( v13 >= this->ChainsAbove.Size )
        break;
      v25 = this->ChainsAbove.Pages[(unsigned __int64)v13 >> 4];
      v25[v24].vertex = Scaleform::Render::Tessellator::addEventVertex(this, v25[v13++ & 0xF].chain, yb, 1);
    }
    if ( v12 >= Size )
      break;
    v26 = this->ChainsBelow.Pages[(unsigned __int64)v12 >> 4];
    v26[v12 & 0xF].vertex = Scaleform::Render::Tessellator::addEventVertex(this, v26[v12 & 0xF].chain, yb, 1);
    ++v12;
  }
  v27 = -1;
  v28 = 0i64;
  v29 = 0;
  v175 = 0;
  v30 = 0i64;
  v31 = 0;
LABEL_20:
  while ( 2 )
  {
    v177 = v29;
    while ( 1 )
    {
      while ( 1 )
      {
        v32 = v29;
        v33 = this->ChainsBelow.Size;
        if ( v32 >= v33 || v31 >= this->ChainsAbove.Size )
          break;
        v34 = this->ChainsBelow.Pages[(unsigned __int64)(unsigned int)v32 >> 4];
        v35 = v32 & 0xF;
        vertex = v34[v35].vertex;
        v37 = &v34[v35];
        v156 = v37;
        v38 = this->ChainsAbove.Pages[(unsigned __int64)v31 >> 4];
        v39 = v38[v31 & 0xF].vertex;
        v40 = &v38[v31 & 0xF];
        scan = v40;
        v41 = 1;
        if ( vertex != v39 )
          v41 = 3 - (v40->chain->posScan < v37->chain->posScan);
        v42 = v41 - 1;
        if ( !v42 )
        {
          if ( vertex == -1 )
          {
            if ( upperBase.numChains )
            {
              Scaleform::Render::Tessellator::connectStarting(this, v14, &upperBase);
              v31 = v175;
            }
            v116 = scan;
            v82 = v37;
            scan->monotone = v37->monotone;
            goto LABEL_236;
          }
          if ( v14 )
          {
            monotone = v14->monotone;
            if ( monotone )
            {
              lowerBase = monotone->lowerBase;
              if ( !lowerBase )
              {
                v7 = monotone->start == 0i64;
                v165.next = 0i64;
                v165.srcVer = vertex;
                v165.aaVer = vertex;
                if ( v7 )
                {
                  v69 = this->MonoVertices.Size >> 4;
                  if ( v69 >= this->MonoVertices.NumPages )
                    Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                      (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                      this->MonoVertices.Size >> 4);
                  this->MonoVertices.Pages[v69][this->MonoVertices.Size & 0xF] = v165;
                  monotone->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size)
                                                                                             - 1) & 0xF];
                  *(_QWORD *)&monotone->d.t.numTriangles = -1i64;
                }
                else
                {
                  v70 = &this->MonoVertices.Pages[(unsigned __int64)monotone->d.m.lastIdx >> 4][monotone->d.m.lastIdx & 0xF];
                  if ( v70->srcVer == vertex )
                    goto LABEL_112;
                  v71 = this->MonoVertices.Size >> 4;
                  if ( v71 >= this->MonoVertices.NumPages )
                    Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                      (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                      this->MonoVertices.Size >> 4);
                  v72 = this->MonoVertices.Pages[v71];
                  v30 = dst;
                  v72[this->MonoVertices.Size & 0xF] = v165;
                  v70->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size)
                                                                                       - 1) & 0xF];
                  monotone->d.m.prevIdx2 = monotone->d.m.prevIdx1;
                  monotone->d.m.prevIdx1 = monotone->d.m.lastIdx;
                }
                monotone->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
                goto LABEL_112;
              }
              if ( lowerBase->y == this->MeshVertices.Pages[(unsigned __int64)(vertex & 0xFFFFFFF) >> 4][vertex & 0xF].y )
              {
                lowerBase->vertexRight = vertex & 0xFFFFFFF;
              }
              else if ( vertex >= 0 )
              {
                Scaleform::Render::Tessellator::connectPendingToRight(this, v14, vertex);
              }
              else
              {
                Scaleform::Render::Tessellator::connectPendingToLeft(this, v14, vertex);
              }
            }
          }
LABEL_112:
          if ( v30 )
          {
            v73 = v30->monotone;
            if ( v73 )
            {
              v74 = v73->lowerBase;
              if ( v74 )
              {
                if ( v74->y == this->MeshVertices.Pages[(unsigned __int64)(vertex & 0xFFFFFFF) >> 4][vertex & 0xF].y )
                {
                  v74->vertexRight = vertex & 0xFFFFFFF;
                }
                else if ( vertex >= 0 )
                {
                  Scaleform::Render::Tessellator::connectPendingToRight(this, v30, vertex);
                }
                else
                {
                  Scaleform::Render::Tessellator::connectPendingToLeft(this, v30, vertex);
                }
                goto LABEL_129;
              }
              v7 = v73->start == 0i64;
              v166.next = 0i64;
              v166.srcVer = vertex;
              v166.aaVer = vertex;
              if ( v7 )
              {
                v75 = this->MonoVertices.Size >> 4;
                if ( v75 >= this->MonoVertices.NumPages )
                  Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                    (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                    this->MonoVertices.Size >> 4);
                this->MonoVertices.Pages[v75][this->MonoVertices.Size & 0xF] = v166;
                v73->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size)
                                                                                      - 1) & 0xF];
                *(_QWORD *)&v73->d.t.numTriangles = -1i64;
                goto LABEL_128;
              }
              v76 = &this->MonoVertices.Pages[(unsigned __int64)v73->d.m.lastIdx >> 4][v73->d.m.lastIdx & 0xF];
              if ( v76->srcVer != vertex )
              {
                v77 = this->MonoVertices.Size >> 4;
                if ( v77 >= this->MonoVertices.NumPages )
                  Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                    (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                    this->MonoVertices.Size >> 4);
                this->MonoVertices.Pages[v77][this->MonoVertices.Size & 0xF] = v166;
                v76->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size)
                                                                                     - 1) & 0xF];
                v73->d.m.prevIdx2 = v73->d.m.prevIdx1;
                v73->d.m.prevIdx1 = v73->d.m.lastIdx;
LABEL_128:
                v73->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
              }
            }
          }
LABEL_129:
          if ( upperBase.numChains )
            Scaleform::Render::Tessellator::connectStarting(this, v14, &upperBase);
          v78 = v177;
          v28 = 0i64;
          v79 = v175;
          v80 = v177 + 1;
          v81 = v175 + 1;
          v179 = v177 + 1;
          v155 = v175 + 1;
LABEL_132:
          v82 = v156;
          while ( 1 )
          {
            v83 = 0i64;
            v84 = 0i64;
            if ( v80 < this->ChainsBelow.Size )
              v83 = &this->ChainsBelow.Pages[(unsigned __int64)v80 >> 4][v80 & 0xF];
            if ( v81 < this->ChainsAbove.Size )
              v84 = &this->ChainsAbove.Pages[(unsigned __int64)v81 >> 4][v81 & 0xF];
            if ( v83 )
            {
              if ( !v84 )
                goto LABEL_161;
              if ( v83->vertex == v84->vertex )
                goto LABEL_197;
            }
            if ( v84 && v84->vertex == vertex )
            {
              v85 = scan;
              ++v79;
              v86 = scan;
              dst = scan;
              v175 = v79;
              v155 = v81 + 1;
              v87 = scan;
              scan = &this->ChainsAbove.Pages[(unsigned __int64)v79 >> 4][v79 & 0xF];
              Scaleform::Render::Tessellator::startMonotone(this, v87, vertex | 0x80000000);
              v80 = v179;
              v7 = v85 == 0i64;
              v78 = v177;
              v81 = v155;
              if ( v7 )
                goto LABEL_132;
              v88 = v86->monotone;
              if ( v88 )
              {
                v89 = v88->lowerBase;
                if ( v89 )
                {
                  if ( v89->y == this->MeshVertices.Pages[(unsigned __int64)(vertex & 0xFFFFFFF) >> 4][vertex & 0xF].y )
                  {
                    v82 = v156;
                    v89->vertexRight = vertex & 0xFFFFFFF;
                  }
                  else
                  {
                    if ( vertex >= 0 )
                      Scaleform::Render::Tessellator::connectPendingToRight(this, v86, vertex);
                    else
                      Scaleform::Render::Tessellator::connectPendingToLeft(this, v86, vertex);
                    v80 = v179;
                    v81 = v155;
                    v82 = v156;
                  }
                  goto LABEL_134;
                }
                v7 = v88->start == 0i64;
                v167.next = 0i64;
                v167.srcVer = vertex;
                v167.aaVer = vertex;
                if ( v7 )
                {
                  v90 = this->MonoVertices.Size >> 4;
                  if ( v90 >= this->MonoVertices.NumPages )
                    Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                      (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                      this->MonoVertices.Size >> 4);
                  this->MonoVertices.Pages[v90][this->MonoVertices.Size & 0xF] = v167;
                  v88->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size)
                                                                                        - 1) & 0xF];
                  *(_QWORD *)&v88->d.t.numTriangles = -1i64;
                  v88->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
                  goto LABEL_195;
                }
                v82 = v156;
                v91 = &this->MonoVertices.Pages[(unsigned __int64)v88->d.m.lastIdx >> 4][v88->d.m.lastIdx & 0xF];
                if ( v91->srcVer != vertex )
                {
                  v92 = this->MonoVertices.Size >> 4;
                  if ( v92 >= this->MonoVertices.NumPages )
                    Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                      (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                      this->MonoVertices.Size >> 4);
                  this->MonoVertices.Pages[v92][this->MonoVertices.Size & 0xF] = v167;
                  v91->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size)
                                                                                       - 1) & 0xF];
                  v88->d.m.prevIdx2 = v88->d.m.prevIdx1;
                  v88->d.m.prevIdx1 = v88->d.m.lastIdx;
                  v88->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
                  goto LABEL_195;
                }
LABEL_133:
                v79 = v175;
LABEL_134:
                v78 = v177;
                continue;
              }
LABEL_196:
              v82 = v156;
              goto LABEL_134;
            }
LABEL_161:
            if ( !v83 || v83->vertex != vertex )
            {
LABEL_197:
              v105 = vertex | 0x80000000;
              if ( v82 )
              {
                v106 = v82->monotone;
                if ( v106 )
                {
                  v107 = v106->lowerBase;
                  if ( v107 )
                  {
                    if ( v107->y == this->MeshVertices.Pages[(unsigned __int64)(vertex & 0xFFFFFFF) >> 4][vertex & 0xF].y )
                      v107->vertexRight = vertex & 0xFFFFFFF;
                    else
                      Scaleform::Render::Tessellator::connectPendingToLeft(this, v82, v105);
                    goto LABEL_213;
                  }
                  v7 = v106->start == 0i64;
                  HIDWORD(v170.next) = 0;
                  v170.srcVer = vertex | 0x80000000;
                  *(_QWORD *)&v170.aaVer = vertex | 0x80000000;
                  if ( v7 )
                  {
                    v108 = this->MonoVertices.Size >> 4;
                    if ( v108 >= this->MonoVertices.NumPages )
                      Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                        (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                        this->MonoVertices.Size >> 4);
                    this->MonoVertices.Pages[v108][this->MonoVertices.Size & 0xF] = v170;
                    v106->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size)
                                                                                           - 1) & 0xF];
                    *(_QWORD *)&v106->d.t.numTriangles = -1i64;
                    goto LABEL_211;
                  }
                  v109 = &this->MonoVertices.Pages[(unsigned __int64)v106->d.m.lastIdx >> 4][v106->d.m.lastIdx & 0xF];
                  if ( v109->srcVer != v105 )
                  {
                    v110 = this->MonoVertices.Size >> 4;
                    if ( v110 >= this->MonoVertices.NumPages )
                      Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                        (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                        this->MonoVertices.Size >> 4);
                    this->MonoVertices.Pages[v110][this->MonoVertices.Size & 0xF] = v170;
                    v109->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size)
                                                                                          - 1) & 0xF];
                    v106->d.m.prevIdx2 = v106->d.m.prevIdx1;
                    v106->d.m.prevIdx1 = v106->d.m.lastIdx;
LABEL_211:
                    v82 = v156;
                    v106->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
                  }
                  v28 = 0i64;
                }
              }
LABEL_213:
              if ( v82->chain->rightBelow == scan->chain->rightAbove )
              {
                if ( dst )
                {
                  v111 = dst->monotone;
                  if ( v111 )
                  {
                    v112 = v111->lowerBase;
                    if ( v112 )
                    {
                      if ( v112->y == this->MeshVertices.Pages[(unsigned __int64)(vertex & 0xFFFFFFF) >> 4][vertex & 0xF].y )
                      {
                        v112->vertexRight = vertex & 0xFFFFFFF;
                      }
                      else if ( vertex >= 0 )
                      {
                        Scaleform::Render::Tessellator::connectPendingToRight(this, dst, vertex);
                      }
                      else
                      {
                        Scaleform::Render::Tessellator::connectPendingToLeft(this, dst, vertex);
                      }
                    }
                    else
                    {
                      v7 = v111->start == 0i64;
                      v171.next = 0i64;
                      v171.srcVer = vertex;
                      v171.aaVer = vertex;
                      if ( v7 )
                      {
                        v113 = this->MonoVertices.Size >> 4;
                        if ( v113 >= this->MonoVertices.NumPages )
                          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                            (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                            this->MonoVertices.Size >> 4);
                        this->MonoVertices.Pages[v113][this->MonoVertices.Size & 0xF] = v171;
                        v111->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size)
                                                                                               - 1) & 0xF];
                        *(_QWORD *)&v111->d.t.numTriangles = -1i64;
                      }
                      else
                      {
                        v114 = &this->MonoVertices.Pages[(unsigned __int64)v111->d.m.lastIdx >> 4][v111->d.m.lastIdx & 0xF];
                        if ( v114->srcVer == vertex )
                          goto LABEL_231;
                        v115 = this->MonoVertices.Size >> 4;
                        if ( v115 >= this->MonoVertices.NumPages )
                          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                            (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                            this->MonoVertices.Size >> 4);
                        this->MonoVertices.Pages[v115][this->MonoVertices.Size & 0xF] = v171;
                        v114->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size)
                                                                                              - 1) & 0xF];
                        v111->d.m.prevIdx2 = v111->d.m.prevIdx1;
                        v111->d.m.prevIdx1 = v111->d.m.lastIdx;
                      }
                      v111->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
                    }
                  }
                }
LABEL_231:
                v28 = 0i64;
                v31 = v175;
                v116 = scan;
                scan->monotone = v82->monotone;
              }
              else
              {
                Scaleform::Render::Tessellator::startMonotone(this, scan, v105);
                v31 = v175;
                v116 = scan;
              }
LABEL_236:
              v27 = v31;
              v29 = v177 + 1;
              v178 = v31++;
              dst = v116;
              v14 = v82;
              v175 = v31;
              v30 = v116;
              goto LABEL_20;
            }
            ++v78;
            v93 = v82;
            ++v80;
            v177 = v78;
            v94 = vertex | 0x80000000;
            v179 = v80;
            v82 = &this->ChainsBelow.Pages[(unsigned __int64)v78 >> 4][v78 & 0xF];
            v156 = v82;
            if ( !v93 )
              continue;
            v95 = v93->monotone;
            if ( v95 )
            {
              v96 = v95->lowerBase;
              if ( !v96 )
              {
                v7 = v95->start == 0i64;
                HIDWORD(v168.next) = 0;
                v168.srcVer = vertex | 0x80000000;
                *(_QWORD *)&v168.aaVer = vertex | 0x80000000;
                if ( v7 )
                {
                  v97 = this->MonoVertices.Size >> 4;
                  if ( v97 >= this->MonoVertices.NumPages )
                    Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                      (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                      this->MonoVertices.Size >> 4);
                  this->MonoVertices.Pages[v97][this->MonoVertices.Size & 0xF] = v168;
                  v95->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size)
                                                                                        - 1) & 0xF];
                  *(_QWORD *)&v95->d.t.numTriangles = -1i64;
                  goto LABEL_177;
                }
                v98 = &this->MonoVertices.Pages[(unsigned __int64)v95->d.m.lastIdx >> 4][v95->d.m.lastIdx & 0xF];
                if ( v98->srcVer != v94 )
                {
                  v99 = this->MonoVertices.Size >> 4;
                  if ( v99 >= this->MonoVertices.NumPages )
                    Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                      (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                      this->MonoVertices.Size >> 4);
                  this->MonoVertices.Pages[v99][this->MonoVertices.Size & 0xF] = v168;
                  ++this->MonoVertices.Size;
                  v98->next = &this->MonoVertices.Pages[(this->MonoVertices.Size - 1) >> 4][((unsigned int)this->MonoVertices.Size
                                                                                           - 1) & 0xF];
                  v95->d.m.prevIdx2 = v95->d.m.prevIdx1;
                  v95->d.m.prevIdx1 = v95->d.m.lastIdx;
LABEL_177:
                  v28 = 0i64;
                  v95->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
                }
                v78 = v177;
                goto LABEL_179;
              }
              if ( v96->y == this->MeshVertices.Pages[(unsigned __int64)(vertex & 0xFFFFFFF) >> 4][vertex & 0xF].y )
                v96->vertexRight = vertex & 0xFFFFFFF;
              else
                Scaleform::Render::Tessellator::connectPendingToLeft(this, v93, v94);
            }
LABEL_179:
            v100 = v93->monotone;
            v80 = v179;
            v81 = v155;
            if ( v100 )
            {
              v101 = v100->lowerBase;
              if ( !v101 )
              {
                v7 = v100->start == 0i64;
                v169.next = 0i64;
                v169.srcVer = vertex;
                v169.aaVer = vertex;
                if ( v7 )
                {
                  v102 = this->MonoVertices.Size >> 4;
                  if ( v102 >= this->MonoVertices.NumPages )
                    Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                      (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                      this->MonoVertices.Size >> 4);
                  v80 = v179;
                  v81 = v155;
                  this->MonoVertices.Pages[v102][this->MonoVertices.Size & 0xF] = v169;
                  v100->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size)
                                                                                         - 1) & 0xF];
                  *(_QWORD *)&v100->d.t.numTriangles = -1i64;
                  v100->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
                  v28 = 0i64;
                  goto LABEL_133;
                }
                v103 = &this->MonoVertices.Pages[(unsigned __int64)v100->d.m.lastIdx >> 4][v100->d.m.lastIdx & 0xF];
                if ( v103->srcVer == vertex )
                  goto LABEL_133;
                v104 = this->MonoVertices.Size >> 4;
                if ( v104 >= this->MonoVertices.NumPages )
                  Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                    (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                    this->MonoVertices.Size >> 4);
                this->MonoVertices.Pages[v104][this->MonoVertices.Size & 0xF] = v169;
                v103->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size)
                                                                                      - 1) & 0xF];
                v100->d.m.prevIdx2 = v100->d.m.prevIdx1;
                v100->d.m.prevIdx1 = v100->d.m.lastIdx;
                v100->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
LABEL_195:
                v79 = v175;
                v28 = 0i64;
                v80 = v179;
                v81 = v155;
                goto LABEL_196;
              }
              if ( v101->y == this->MeshVertices.Pages[(unsigned __int64)(vertex & 0xFFFFFFF) >> 4][vertex & 0xF].y )
              {
                v79 = v175;
                v101->vertexRight = vertex & 0xFFFFFFF;
                continue;
              }
              if ( vertex < 0 )
              {
                Scaleform::Render::Tessellator::connectPendingToLeft(this, v93, vertex);
                v80 = v179;
                v81 = v155;
                v79 = v175;
                continue;
              }
              Scaleform::Render::Tessellator::connectPendingToRight(this, v93, vertex);
              v80 = v179;
              v81 = v155;
            }
            v79 = v175;
          }
        }
        v43 = v42 - 1;
        if ( v43 )
        {
          v7 = v43 == 1;
          v29 = v177;
          if ( v7 )
          {
            if ( !v14 || (v44 = v14->monotone) == 0i64 )
            {
LABEL_46:
              v50 = v37->monotone;
              v51 = v37->vertex | 0x80000000;
              if ( v50 )
              {
                v52 = v50->lowerBase;
                if ( v52 )
                {
                  if ( v52->y == this->MeshVertices.Pages[(unsigned __int64)(v37->vertex & 0xFFFFFFF) >> 4][v37->vertex & 0xF].y )
                    v52->vertexRight = v37->vertex & 0xFFFFFFF;
                  else
                    Scaleform::Render::Tessellator::connectPendingToLeft(this, v37, v51);
                  goto LABEL_60;
                }
                v7 = v50->start == 0i64;
                v163.next = 0i64;
                v163.srcVer = v51;
                v163.aaVer = v51;
                if ( v7 )
                {
                  v53 = this->MonoVertices.Size >> 4;
                  if ( v53 >= this->MonoVertices.NumPages )
                    Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                      (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                      this->MonoVertices.Size >> 4);
                  this->MonoVertices.Pages[v53][this->MonoVertices.Size & 0xF] = v163;
                  v50->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size)
                                                                                        - 1) & 0xF];
                  *(_QWORD *)&v50->d.t.numTriangles = -1i64;
LABEL_59:
                  v37 = v156;
                  v50->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
                  goto LABEL_60;
                }
                v54 = &this->MonoVertices.Pages[(unsigned __int64)v50->d.m.lastIdx >> 4][v50->d.m.lastIdx & 0xF];
                if ( v54->srcVer != v51 )
                {
                  v55 = this->MonoVertices.Size >> 4;
                  if ( v55 >= this->MonoVertices.NumPages )
                    Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                      (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                      this->MonoVertices.Size >> 4);
                  this->MonoVertices.Pages[v55][this->MonoVertices.Size & 0xF] = v163;
                  v54->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size)
                                                                                       - 1) & 0xF];
                  v50->d.m.prevIdx2 = v50->d.m.prevIdx1;
                  v50->d.m.prevIdx1 = v50->d.m.lastIdx;
                  goto LABEL_59;
                }
              }
LABEL_60:
              if ( upperBase.numChains )
                Scaleform::Render::Tessellator::connectStarting(this, v14, &upperBase);
              Scaleform::Render::Tessellator::addPendingEnd(this, v30, v37, yb);
              v27 = -1;
              v31 = v175;
              v29 = v177 + 1;
              v28 = 0i64;
              v178 = -1;
              v14 = v37;
              goto LABEL_20;
            }
            v45 = v44->lowerBase;
            if ( v45 )
            {
              if ( v45->y == this->MeshVertices.Pages[(unsigned __int64)(vertex & 0xFFFFFFF) >> 4][vertex & 0xF].y )
              {
                v45->vertexRight = vertex & 0xFFFFFFF;
              }
              else if ( vertex >= 0 )
              {
                Scaleform::Render::Tessellator::connectPendingToRight(this, v14, vertex);
              }
              else
              {
                Scaleform::Render::Tessellator::connectPendingToLeft(this, v14, vertex);
              }
              goto LABEL_46;
            }
            v7 = v44->start == 0i64;
            v162.next = 0i64;
            v162.srcVer = vertex;
            v162.aaVer = vertex;
            if ( v7 )
            {
              v46 = this->MonoVertices.Size >> 4;
              if ( v46 >= this->MonoVertices.NumPages )
                Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                  (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                  this->MonoVertices.Size >> 4);
              this->MonoVertices.Pages[v46][this->MonoVertices.Size & 0xF] = v162;
              v44->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size)
                                                                                    - 1) & 0xF];
              *(_QWORD *)&v44->d.t.numTriangles = -1i64;
              v47 = LODWORD(this->MonoVertices.Size) - 1;
            }
            else
            {
              v48 = &this->MonoVertices.Pages[(unsigned __int64)v44->d.m.lastIdx >> 4][v44->d.m.lastIdx & 0xF];
              if ( v48->srcVer == vertex )
              {
LABEL_45:
                v37 = v156;
                goto LABEL_46;
              }
              v49 = this->MonoVertices.Size >> 4;
              if ( v49 >= this->MonoVertices.NumPages )
                Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                  (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                  this->MonoVertices.Size >> 4);
              this->MonoVertices.Pages[v49][this->MonoVertices.Size & 0xF] = v162;
              v48->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
              v44->d.m.prevIdx2 = v44->d.m.prevIdx1;
              v44->d.m.prevIdx1 = v44->d.m.lastIdx;
              v47 = LODWORD(this->MonoVertices.Size) - 1;
            }
            v44->d.m.lastIdx = v47;
            goto LABEL_45;
          }
        }
        else
        {
          if ( !v14 || (v56 = v14->monotone) == 0i64 || !v56->style )
          {
            if ( !v30 )
              goto LABEL_91;
            v61 = v30->monotone;
            if ( !v61 )
              goto LABEL_91;
            v62 = v61->lowerBase;
            if ( v62 )
            {
              if ( v62->y == this->MeshVertices.Pages[(unsigned __int64)(v39 & 0xFFFFFFF) >> 4][v39 & 0xF].y )
              {
                v62->vertexRight = v39 & 0xFFFFFFF;
              }
              else if ( v39 >= 0 )
              {
                Scaleform::Render::Tessellator::connectPendingToRight(this, v30, v39);
              }
              else
              {
                Scaleform::Render::Tessellator::connectPendingToLeft(this, v30, v39);
              }
              goto LABEL_91;
            }
            v7 = v61->start == 0i64;
            v164.next = 0i64;
            v164.srcVer = v39;
            v164.aaVer = v39;
            if ( v7 )
            {
              v63 = this->MonoVertices.Size >> 4;
              if ( v63 >= this->MonoVertices.NumPages )
                Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                  (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                  this->MonoVertices.Size >> 4);
              this->MonoVertices.Pages[v63][this->MonoVertices.Size & 0xF] = v164;
              v61->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size)
                                                                                    - 1) & 0xF];
              *(_QWORD *)&v61->d.t.numTriangles = -1i64;
              v64 = LODWORD(this->MonoVertices.Size) - 1;
            }
            else
            {
              v65 = &this->MonoVertices.Pages[(unsigned __int64)v61->d.m.lastIdx >> 4][v61->d.m.lastIdx & 0xF];
              if ( v65->srcVer == v39 )
              {
LABEL_91:
                v60 = scan;
                Scaleform::Render::Tessellator::startMonotone(this, scan, scan->vertex | 0x80000000);
                v27 = v178;
                v31 = v175;
                goto LABEL_93;
              }
              v66 = this->MonoVertices.Size >> 4;
              if ( v66 >= this->MonoVertices.NumPages )
                Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                  (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                  this->MonoVertices.Size >> 4);
              this->MonoVertices.Pages[v66][this->MonoVertices.Size & 0xF] = v164;
              v65->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
              v61->d.m.prevIdx2 = v61->d.m.prevIdx1;
              v61->d.m.prevIdx1 = v61->d.m.lastIdx;
              v64 = LODWORD(this->MonoVertices.Size) - 1;
              v28 = 0i64;
            }
            v61->d.m.lastIdx = v64;
            goto LABEL_91;
          }
          if ( upperBase.numChains )
          {
            ++upperBase.numChains;
          }
          else
          {
            v57 = v40->chain;
            upperBase.firstChain = v31;
            upperBase.numChains = 1;
            upperBase.leftAbove = v27;
            upperBase.styleLeft = v57->leftAbove;
          }
          if ( v30 && (v58 = v30->monotone) != 0i64 && (v59 = v58->lowerBase) != 0i64 )
          {
            v60 = v40;
            if ( v59->y == yb )
              v59->vertexRight = v39;
          }
          else
          {
            v60 = v40;
          }
LABEL_93:
          v29 = v177;
          v175 = ++v31;
          v30 = v60;
          dst = v60;
        }
      }
      if ( v31 >= this->ChainsAbove.Size )
        break;
      v117 = this->ChainsAbove.Pages[(unsigned __int64)v31 >> 4];
      v118 = v117[v31 & 0xF].vertex;
      v30 = &v117[v31 & 0xF];
      if ( dst )
      {
        v119 = dst->monotone;
        if ( v119 )
        {
          v120 = v119->lowerBase;
          if ( v120 )
          {
            if ( v120->y == this->MeshVertices.Pages[(unsigned __int64)(v118 & 0xFFFFFFF) >> 4][v118 & 0xF].y )
            {
              v120->vertexRight = v118 & 0xFFFFFFF;
            }
            else if ( v118 >= 0 )
            {
              Scaleform::Render::Tessellator::connectPendingToRight(this, dst, v118);
            }
            else
            {
              Scaleform::Render::Tessellator::connectPendingToLeft(this, dst, v118);
            }
          }
          else
          {
            v7 = v119->start == 0i64;
            v172.next = 0i64;
            v172.srcVer = v118;
            v172.aaVer = v118;
            if ( v7 )
            {
              v121 = this->MonoVertices.Size >> 4;
              if ( v121 >= this->MonoVertices.NumPages )
                Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                  (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                  this->MonoVertices.Size >> 4);
              this->MonoVertices.Pages[v121][this->MonoVertices.Size & 0xF] = v172;
              v119->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size)
                                                                                     - 1) & 0xF];
              *(_QWORD *)&v119->d.t.numTriangles = -1i64;
              v122 = LODWORD(this->MonoVertices.Size) - 1;
            }
            else
            {
              v123 = &this->MonoVertices.Pages[(unsigned __int64)v119->d.m.lastIdx >> 4][v119->d.m.lastIdx & 0xF];
              if ( v123->srcVer == v118 )
                goto LABEL_255;
              v124 = this->MonoVertices.Size >> 4;
              if ( v124 >= this->MonoVertices.NumPages )
                Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                  (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                  this->MonoVertices.Size >> 4);
              this->MonoVertices.Pages[v124][this->MonoVertices.Size & 0xF] = v172;
              v123->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size)
                                                                                    - 1) & 0xF];
              v119->d.m.prevIdx2 = v119->d.m.prevIdx1;
              v119->d.m.prevIdx1 = v119->d.m.lastIdx;
              v122 = LODWORD(this->MonoVertices.Size) - 1;
              v28 = 0i64;
            }
            v119->d.m.lastIdx = v122;
          }
        }
      }
LABEL_255:
      Scaleform::Render::Tessellator::startMonotone(this, v30, v30->vertex | 0x80000000);
      v27 = v178;
      v31 = v175 + 1;
      v29 = v177;
      ++v175;
      dst = v30;
    }
    if ( v32 < v33 )
    {
      v125 = this->ChainsBelow.Pages[v32 >> 4];
      v126 = v32 & 0xF;
      v127 = v125[v126].vertex;
      v128 = &v125[v126];
      if ( v14 )
      {
        v129 = v14->monotone;
        if ( v129 )
        {
          v130 = v129->lowerBase;
          if ( v130 )
          {
            if ( v130->y == this->MeshVertices.Pages[(unsigned __int64)(v127 & 0xFFFFFFF) >> 4][v127 & 0xF].y )
            {
              v130->vertexRight = v127 & 0xFFFFFFF;
            }
            else if ( v127 >= 0 )
            {
              Scaleform::Render::Tessellator::connectPendingToRight(this, v14, v127);
            }
            else
            {
              Scaleform::Render::Tessellator::connectPendingToLeft(this, v14, v127);
            }
          }
          else
          {
            v7 = v129->start == 0i64;
            v173.next = 0i64;
            v173.srcVer = v127;
            v173.aaVer = v127;
            if ( v7 )
            {
              v131 = this->MonoVertices.Size >> 4;
              if ( v131 >= this->MonoVertices.NumPages )
                Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                  (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                  this->MonoVertices.Size >> 4);
              this->MonoVertices.Pages[v131][this->MonoVertices.Size & 0xF] = v173;
              v129->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size)
                                                                                     - 1) & 0xF];
              *(_QWORD *)&v129->d.t.numTriangles = -1i64;
              v132 = LODWORD(this->MonoVertices.Size) - 1;
            }
            else
            {
              v133 = &this->MonoVertices.Pages[(unsigned __int64)v129->d.m.lastIdx >> 4][v129->d.m.lastIdx & 0xF];
              if ( v133->srcVer == v127 )
                goto LABEL_274;
              v134 = this->MonoVertices.Size >> 4;
              if ( v134 >= this->MonoVertices.NumPages )
                Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
                  (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
                  this->MonoVertices.Size >> 4);
              this->MonoVertices.Pages[v134][this->MonoVertices.Size & 0xF] = v173;
              v133->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size)
                                                                                    - 1) & 0xF];
              v129->d.m.prevIdx2 = v129->d.m.prevIdx1;
              v129->d.m.prevIdx1 = v129->d.m.lastIdx;
              v132 = LODWORD(this->MonoVertices.Size) - 1;
            }
            v129->d.m.lastIdx = v132;
          }
        }
      }
LABEL_274:
      v135 = v128->monotone;
      v136 = v128->vertex | 0x80000000;
      if ( v135 )
      {
        v137 = v135->lowerBase;
        if ( v137 )
        {
          if ( v137->y == this->MeshVertices.Pages[(unsigned __int64)(v128->vertex & 0xFFFFFFF) >> 4][v128->vertex & 0xF].y )
            v137->vertexRight = v128->vertex & 0xFFFFFFF;
          else
            Scaleform::Render::Tessellator::connectPendingToLeft(this, v128, v136);
          goto LABEL_288;
        }
        v7 = v135->start == 0i64;
        v160.next = 0i64;
        v160.srcVer = v136;
        v160.aaVer = v136;
        if ( v7 )
        {
          v138 = this->MonoVertices.Size >> 4;
          if ( v138 >= this->MonoVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
          this->MonoVertices.Pages[v138][this->MonoVertices.Size & 0xF] = v160;
          v135->start = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          *(_QWORD *)&v135->d.t.numTriangles = -1i64;
          goto LABEL_287;
        }
        v139 = &this->MonoVertices.Pages[(unsigned __int64)v135->d.m.lastIdx >> 4][v135->d.m.lastIdx & 0xF];
        if ( v139->srcVer != v136 )
        {
          v140 = this->MonoVertices.Size >> 4;
          if ( v140 >= this->MonoVertices.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(
              (Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> *)&this->MonoVertices,
              this->MonoVertices.Size >> 4);
          this->MonoVertices.Pages[v140][this->MonoVertices.Size & 0xF] = v160;
          v139->next = &this->MonoVertices.Pages[this->MonoVertices.Size++ >> 4][(LODWORD(this->MonoVertices.Size) - 1) & 0xF];
          v135->d.m.prevIdx2 = v135->d.m.prevIdx1;
          v135->d.m.prevIdx1 = v135->d.m.lastIdx;
LABEL_287:
          v135->d.m.lastIdx = LODWORD(this->MonoVertices.Size) - 1;
        }
      }
LABEL_288:
      if ( upperBase.numChains )
        Scaleform::Render::Tessellator::connectStarting(this, v14, &upperBase);
      Scaleform::Render::Tessellator::addPendingEnd(this, dst, v128, yb);
      v27 = -1;
      v31 = v175;
      v29 = v177 + 1;
      v14 = v128;
      v178 = -1;
      v30 = dst;
      v28 = 0i64;
      continue;
    }
    break;
  }
  v7 = this->ChainsAbove.Size == 0;
  v141 = 0i64;
  this->ChainsBelow.Size = 0i64;
  if ( !v7 )
  {
    do
    {
      v142 = this->ChainsBelow.Size >> 4;
      v143 = v141 & 0xF;
      v144 = this->ChainsAbove.Pages[v141 >> 4];
      if ( v142 >= this->ChainsBelow.NumPages )
      {
        MaxPages = this->ChainsBelow.MaxPages;
        if ( v142 >= MaxPages )
        {
          pHeap = this->ChainsBelow.pHeap;
          if ( this->ChainsBelow.Pages )
          {
            v147 = Scaleform::Render::LinearHeap::Alloc(pHeap, 16 * MaxPages);
            memmove(v147, this->ChainsBelow.Pages, 8 * this->ChainsBelow.NumPages);
            v148 = this->ChainsBelow.MaxPages;
            this->ChainsBelow.Pages = (Scaleform::Render::Tessellator::ScanChainType **)v147;
            this->ChainsBelow.MaxPages = 2 * v148;
          }
          else
          {
            this->ChainsBelow.MaxPages = 8i64;
            this->ChainsBelow.Pages = (Scaleform::Render::Tessellator::ScanChainType **)Scaleform::Render::LinearHeap::Alloc(
                                                                                          pHeap,
                                                                                          0x40ui64);
          }
        }
        this->ChainsBelow.Pages[v142] = (Scaleform::Render::Tessellator::ScanChainType *)Scaleform::Render::LinearHeap::Alloc(
                                                                                           this->ChainsBelow.pHeap,
                                                                                           0x180ui64);
        ++this->ChainsBelow.NumPages;
      }
      ++v141;
      v149 = this->ChainsBelow.Size & 0xF;
      v150 = this->ChainsBelow.Pages[v142];
      *(_OWORD *)&v150[v149].chain = *(_OWORD *)&v144[v143].chain;
      *(_QWORD *)&v150[v149].vertex = *(_QWORD *)&v144[v143].vertex;
      ++this->ChainsBelow.Size;
    }
    while ( v141 < this->ChainsAbove.Size );
    v28 = 0i64;
  }
  if ( aet->Size )
  {
    do
    {
      v151 = v28 & 0xF;
      v152 = v28++ >> 4;
      v153 = aet->Pages[v152][v151];
      leftAbove = v153->leftAbove;
      v153->flags &= ~0x10u;
      v153->leftBelow = leftAbove;
      v153->rightBelow = v153->rightAbove;
    }
    while ( v28 < aet->Size );
  }
}

void __fastcall Scaleform::Render::Tessellator::triangulateMonotoneAA(
        Scaleform::Render::Tessellator *this,
        Scaleform::Render::Tessellator::MonotoneType *m)
{
  Scaleform::Render::Tessellator::MonoVertexType *start; // rsi
  unsigned int style; // edx
  unsigned int v6; // eax
  Scaleform::Render::TessMesh **Pages; // r8
  unsigned int v8; // edx
  Scaleform::Render::Tessellator::MonoVertexType *next; // rax
  unsigned __int64 v10; // rdi
  Scaleform::Render::Tessellator::MonoVertexType *v11; // rsi
  unsigned __int64 v12; // rdi
  Scaleform::Render::Tessellator::MonoVertexType *i; // rdi
  unsigned __int64 v14; // rsi
  Scaleform::Render::Tessellator::MonoVertexType *v15; // r14
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rsi

  start = m->start;
  style = m->style;
  this->MonoStyle = style;
  v6 = Scaleform::Render::Tessellator::setMesh(this, style);
  Pages = this->Meshes.Pages;
  this->MeshIdx = v6;
  v8 = 2;
  if ( this->MonoStyle == Pages[(unsigned __int64)v6 >> 4][v6 & 0xF].Style1 )
    v8 = 10;
  this->FactorOneFlag = v8;
  Pages[(unsigned __int64)v6 >> 4][v6 & 0xF].Flags1 |= v8 & 8;
  m->d.m.lastIdx = -1;
  m->d.m.prevIdx1 = 0;
  m->d.m.prevIdx2 = this->MeshIdx;
  if ( start )
  {
    next = start->next;
    if ( next )
    {
      if ( next->next )
      {
        m->d.m.lastIdx = this->MeshTriangles.Arrays[this->MeshIdx].Size;
        this->MonoStack.Size = 0i64;
        v10 = this->MonoStack.Size >> 4;
        if ( v10 >= this->MonoStack.NumPages )
          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,2>::allocPage(
            &this->MonoStack,
            this->MonoStack.Size >> 4);
        this->MonoStack.Pages[v10][this->MonoStack.Size & 0xF] = start;
        ++this->MonoStack.Size;
        v11 = start->next;
        v12 = this->MonoStack.Size >> 4;
        if ( v12 >= this->MonoStack.NumPages )
          Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,2>::allocPage(
            &this->MonoStack,
            this->MonoStack.Size >> 4);
        this->MonoStack.Pages[v12][this->MonoStack.Size & 0xF] = v11;
        ++this->MonoStack.Size;
        for ( i = v11->next; i; i = i->next )
        {
          v14 = this->MonoStack.Size >> 4;
          v15 = this->MonoStack.Pages[(this->MonoStack.Size - 1) >> 4][(LODWORD(this->MonoStack.Size) - 1) & 0xF];
          if ( v14 >= this->MonoStack.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,2>::allocPage(
              &this->MonoStack,
              this->MonoStack.Size >> 4);
          this->MonoStack.Pages[v14][this->MonoStack.Size & 0xF] = i;
          ++this->MonoStack.Size;
          if ( ((i->srcVer & 0x80000000) != 0) != ((v15->srcVer & 0x80000000) != 0) )
          {
            Scaleform::Render::Tessellator::triangulateMountainAA(this);
            this->MonoStack.Size = 0i64;
            v16 = this->MonoStack.Size >> 4;
            if ( v16 >= this->MonoStack.NumPages )
              Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,2>::allocPage(
                &this->MonoStack,
                this->MonoStack.Size >> 4);
            this->MonoStack.Pages[v16][this->MonoStack.Size & 0xF] = v15;
            v17 = ++this->MonoStack.Size >> 4;
            if ( v17 >= this->MonoStack.NumPages )
              Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,2>::allocPage(
                &this->MonoStack,
                this->MonoStack.Size >> 4);
            this->MonoStack.Pages[v17][this->MonoStack.Size & 0xF] = i;
            ++this->MonoStack.Size;
          }
        }
        Scaleform::Render::Tessellator::triangulateMountainAA(this);
        m->d.m.prevIdx1 = LODWORD(this->MeshTriangles.Arrays[this->MeshIdx].Size) - m->d.m.lastIdx;
      }
    }
  }
}

void __fastcall Scaleform::Render::Tessellator::triangulateMountainAA(Scaleform::Render::Tessellator *this)
{
  unsigned __int64 Size; // r10
  Scaleform::Render::Tessellator *v2; // r14
  Scaleform::Render::TessVertex **Pages; // r11
  unsigned int v4; // er9
  Scaleform::Render::Tessellator::MonoVertexType ***v5; // rbx
  float v6; // xmm2_4
  unsigned __int64 v7; // r8
  Scaleform::Render::TessVertex *v8; // rsi
  Scaleform::Render::TessVertex *v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  int v13; // edi
  unsigned __int64 v14; // r13
  unsigned int v15; // ecx
  unsigned int v16; // er15
  unsigned int v17; // er10
  Scaleform::Render::TessVertex **v18; // rsi
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rbp
  Scaleform::Render::Tessellator::MonoVertexType ***v21; // r9
  unsigned int v22; // edi
  unsigned int v23; // edx
  unsigned int v24; // ebx
  Scaleform::Render::TessVertex *v25; // r10
  Scaleform::Render::TessVertex *v26; // r8
  Scaleform::Render::TessVertex *v27; // rax
  float v28; // xmm8_4
  Scaleform::Render::TessVertex *v29; // rcx
  float v30; // xmm0_4
  Scaleform::Render::Tessellator::MonoVertexType ***v31; // r8
  unsigned __int64 v32; // r15
  float v33; // xmm6_4
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  unsigned int v36; // edi
  unsigned int v37; // ebx
  Scaleform::Render::TessVertex *v38; // r10
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  Scaleform::Render::TessVertex *v41; // r8
  float v42; // xmm9_4
  Scaleform::Render::TessVertex *v43; // r10
  Scaleform::Render::TessVertex *v44; // r8
  unsigned __int64 v45; // rax
  __int64 v46; // rdi
  Scaleform::Render::TessVertex *v47; // rcx
  float v48; // xmm0_4
  unsigned int v49; // ebx
  float v50; // xmm2_4
  float v51; // xmm1_4
  int v52; // esi
  float EdgeAAWidth; // xmm0_4
  Scaleform::Render::Tessellator::MonoVertexType ***v54; // rdx
  unsigned __int64 v55; // rax
  __int64 v56; // r12
  unsigned __int64 v57; // rcx
  __int64 v58; // rbp
  Scaleform::Render::Tessellator::MonoVertexType **v59; // rax
  Scaleform::Render::Tessellator::MonoVertexType **v60; // rcx
  unsigned __int64 v61; // r8
  Scaleform::Render::Tessellator::MonoVertexType ***v62; // rcx
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // r8
  __int64 v65; // r15
  unsigned __int64 v66; // rdi
  float v67; // xmm6_4
  Scaleform::Render::Tessellator::MonoVertexType ***v68; // rsi
  Scaleform::Render::TessVertex **v69; // r12
  Scaleform::Render::TessVertex *v70; // r10
  Scaleform::Render::TessVertex *v71; // r8
  Scaleform::Render::TessVertex *v72; // rcx
  float v73; // xmm0_4
  bool v74; // cc
  unsigned __int64 v75; // r10
  unsigned __int64 v76; // r11
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // r8
  unsigned __int64 v80; // rdx
  Scaleform::Render::Tessellator::MonoVertexType ***v81; // rdx
  unsigned int v82; // [rsp+30h] [rbp-D8h]
  unsigned int v83; // [rsp+34h] [rbp-D4h]
  int v84; // [rsp+40h] [rbp-C8h]
  unsigned int v85; // [rsp+48h] [rbp-C0h]
  int v86; // [rsp+4Ch] [rbp-BCh]
  __int64 v87; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v88; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v89; // [rsp+60h] [rbp-A8h]
  unsigned int v91; // [rsp+120h] [rbp+18h]
  int v92; // [rsp+128h] [rbp+20h]

  Size = this->MonoStack.Size;
  v2 = this;
  if ( Size > 2 )
  {
    Pages = this->MeshVertices.Pages;
    v4 = 1;
    v5 = this->MonoStack.Pages;
    v6 = 0.0;
    v84 = 1;
    v7 = 1i64;
    do
    {
      v10 = v7 >> 4;
      v11 = v7++ & 0xF;
      v12 = v5[v10][v11]->srcVer & 0xFFFFFFF;
      v9 = Pages[(unsigned __int64)(v5[(Size - 1) >> 4][((_DWORD)Size - 1) & 0xF]->srcVer & 0xFFFFFFF) >> 4];
      v8 = Pages[(unsigned __int64)((**v5)->srcVer & 0xFFFFFFF) >> 4];
      v6 = v6
         + (float)((float)((float)(Pages[v12 >> 4][v12 & 0xF].x
                                 - v9[v5[(Size - 1) >> 4][((_DWORD)Size - 1) & 0xF]->srcVer & 0xF].x)
                         * (float)(v9[v5[(Size - 1) >> 4][((_DWORD)Size - 1) & 0xF]->srcVer & 0xF].y
                                 - v8[(**v5)->srcVer & 0xF].y))
                 - (float)((float)(Pages[v12 >> 4][v12 & 0xF].y
                                 - v9[v5[(Size - 1) >> 4][((_DWORD)Size - 1) & 0xF]->srcVer & 0xF].y)
                         * (float)(v9[v5[(Size - 1) >> 4][((_DWORD)Size - 1) & 0xF]->srcVer & 0xF].x
                                 - v8[(**v5)->srcVer & 0xF].x)));
    }
    while ( v7 + 1 < Size );
    v13 = -1;
    LODWORD(v14) = Size;
    v91 = Size;
    if ( v6 > 0.0 )
      v13 = 1;
    v15 = 0;
    v86 = v13;
    v82 = 0;
    if ( (unsigned int)Size > 3 )
    {
      v16 = 3;
      v17 = 2;
      v87 = v13;
      v83 = 3;
      v92 = 2;
      do
      {
        v18 = v2->MeshVertices.Pages;
        v19 = v15;
        v20 = v4;
        v21 = v2->MonoStack.Pages;
        v88 = v17;
        v22 = v21[(unsigned __int64)(unsigned int)v20 >> 4][v20 & 0xF]->srcVer & 0xFFFFFFF;
        v23 = v21[(unsigned __int64)v15 >> 4][v15 & 0xF]->srcVer & 0xFFFFFFF;
        v24 = v21[(unsigned __int64)v17 >> 4][v17 & 0xF]->srcVer & 0xFFFFFFF;
        v25 = v18[(unsigned __int64)v22 >> 4];
        v26 = v18[(unsigned __int64)v23 >> 4];
        v27 = v18[(unsigned __int64)v24 >> 4];
        v28 = Scaleform::Render::Math2D::LinePointDistance(
                v27[v24 & 0xF].x,
                v27[v24 & 0xF].y,
                v26[v23 & 0xF].x,
                v26[v23 & 0xF].y,
                v25[v21[(unsigned __int64)(unsigned int)v20 >> 4][v20 & 0xF]->srcVer & 0xF].x,
                v25[v21[(unsigned __int64)(unsigned int)v20 >> 4][v20 & 0xF]->srcVer & 0xF].y);
        v29 = v18[(unsigned __int64)(v2->MonoStack.Pages[(unsigned __int64)v16 >> 4][v16 & 0xF]->srcVer & 0xFFFFFFF) >> 4];
        v30 = Scaleform::Render::Math2D::LinePointDistance(
                v29[v2->MonoStack.Pages[(unsigned __int64)v16 >> 4][v16 & 0xF]->srcVer & 0xF].x,
                v29[v2->MonoStack.Pages[(unsigned __int64)v16 >> 4][v16 & 0xF]->srcVer & 0xF].y,
                v18[(unsigned __int64)v22 >> 4][v22 & 0xF].x,
                v18[(unsigned __int64)v22 >> 4][v22 & 0xF].y,
                v18[(unsigned __int64)v24 >> 4][v24 & 0xF].x,
                v18[(unsigned __int64)v24 >> 4][v24 & 0xF].y);
        v31 = v2->MonoStack.Pages;
        v32 = (unsigned int)(v14 - 2);
        v33 = v30;
        v34 = ((_BYTE)v14 - 2) & 0xF;
        v35 = (unsigned int)(v14 - 3);
        v85 = v14 - 3;
        v14 = (unsigned int)(v14 - 1);
        v89 = v35;
        v36 = v31[(unsigned __int64)(unsigned int)v32 >> 4][v34]->srcVer & 0xFFFFFFF;
        v37 = v31[(unsigned __int64)(unsigned int)v35 >> 4][v35 & 0xF]->srcVer & 0xFFFFFFF;
        v38 = v18[(unsigned __int64)v36 >> 4];
        v39 = (unsigned __int64)(v31[(unsigned __int64)(unsigned int)v14 >> 4][v14 & 0xF]->srcVer & 0xFFFFFFF) >> 4;
        v40 = v31[(unsigned __int64)(unsigned int)v14 >> 4][v14 & 0xF]->srcVer & 0xF;
        v41 = v18[(unsigned __int64)v37 >> 4];
        v42 = Scaleform::Render::Math2D::LinePointDistance(
                v18[v39][v40].x,
                v18[v39][v40].y,
                v41[v37 & 0xF].x,
                v41[v37 & 0xF].y,
                v38[v36 & 0xF].x,
                v38[v36 & 0xF].y);
        v43 = v18[(unsigned __int64)v37 >> 4];
        v44 = v18[(unsigned __int64)(v2->MonoStack.Pages[(unsigned __int64)(v91 - 4) >> 4][((_BYTE)v91 - 4) & 0xF]->srcVer & 0xFFFFFFF) >> 4];
        v45 = v36;
        v46 = v36 & 0xF;
        v47 = v18[v45 >> 4];
        v48 = Scaleform::Render::Math2D::LinePointDistance(
                v47[v46].x,
                v47[v46].y,
                v44[v2->MonoStack.Pages[(unsigned __int64)(v91 - 4) >> 4][((_BYTE)v91 - 4) & 0xF]->srcVer & 0xF].x,
                v44[v2->MonoStack.Pages[(unsigned __int64)(v91 - 4) >> 4][((_BYTE)v91 - 4) & 0xF]->srcVer & 0xF].y,
                v43[v37 & 0xF].x,
                v43[v37 & 0xF].y);
        v49 = -1;
        v50 = v48;
        if ( v87 <= 0 )
        {
          EdgeAAWidth = v2->EdgeAAWidth;
          if ( v28 > 0.0 && v33 > 0.0 )
          {
            if ( v28 > EdgeAAWidth )
            {
              v49 = v84;
              EdgeAAWidth = v28;
            }
            if ( v33 > EdgeAAWidth )
            {
              v49 = v92;
              EdgeAAWidth = v33;
            }
          }
          if ( v42 <= 0.0 || v50 <= 0.0 )
            goto LABEL_34;
          v52 = v32;
          if ( v42 > EdgeAAWidth )
          {
            EdgeAAWidth = v42;
            v49 = v32;
          }
          if ( v50 > EdgeAAWidth )
            v49 = v85;
        }
        else
        {
          LODWORD(v51) = LODWORD(v2->EdgeAAWidth) ^ _xmm;
          if ( v28 < 0.0 )
          {
            if ( v33 >= 0.0 )
              goto LABEL_44;
            if ( v51 > v28 )
            {
              v49 = v84;
              v51 = v28;
            }
            if ( v51 > v33 )
            {
              v49 = v92;
              v51 = v33;
            }
          }
          if ( v33 >= 0.0 || v48 >= 0.0 )
          {
LABEL_34:
            v52 = v32;
            goto LABEL_35;
          }
          v52 = v32;
          if ( v51 > v42 )
          {
            v51 = v42;
            v49 = v32;
          }
          if ( v51 > v48 )
            v49 = v85;
        }
LABEL_35:
        if ( v49 == -1 )
        {
LABEL_44:
          v66 = v20 + 1;
          v67 = 0.0;
          if ( v20 + 1 >= v91 )
            return;
          v68 = v2->MonoStack.Pages;
          v69 = v2->MeshVertices.Pages;
          do
          {
            v70 = v69[(unsigned __int64)(v68[v20 >> 4][v20 & 0xF]->srcVer & 0xFFFFFFF) >> 4];
            v71 = v69[(unsigned __int64)(v68[(v66 - 2) >> 4][((_DWORD)v66 - 2) & 0xF]->srcVer & 0xFFFFFFF) >> 4];
            v72 = v69[(unsigned __int64)(v68[v66 >> 4][v66 & 0xF]->srcVer & 0xFFFFFFF) >> 4];
            v73 = Scaleform::Render::Math2D::LinePointDistance(
                    v72[v68[v66 >> 4][v66 & 0xF]->srcVer & 0xF].x,
                    v72[v68[v66 >> 4][v66 & 0xF]->srcVer & 0xF].y,
                    v71[v68[(v66 - 2) >> 4][((_DWORD)v66 - 2) & 0xF]->srcVer & 0xF].x,
                    v71[v68[(v66 - 2) >> 4][((_DWORD)v66 - 2) & 0xF]->srcVer & 0xF].y,
                    v70[v68[v20 >> 4][v20 & 0xF]->srcVer & 0xF].x,
                    v70[v68[v20 >> 4][v20 & 0xF]->srcVer & 0xF].y);
            if ( v87 <= 0 )
              v74 = v73 <= v67;
            else
              v74 = v67 <= v73;
            if ( !v74 )
            {
              v49 = v20;
              v67 = v73;
            }
            ++v20;
            ++v66;
          }
          while ( v66 < v91 );
          v2 = this;
          if ( v49 == -1 )
            return;
          v13 = v86;
          Scaleform::Render::Tessellator::addTriangleAA(
            this,
            v68[(unsigned __int64)(v49 - v86) >> 4][(v49 - v86) & 0xF],
            v68[(unsigned __int64)v49 >> 4][v49 & 0xF],
            v68[(unsigned __int64)(v86 + v49) >> 4][((_BYTE)v86 + (_BYTE)v49) & 0xF]);
          v75 = v49 + 1;
          if ( v75 < v91 )
          {
            v76 = v49 + 1 - 1i64;
            do
            {
              v77 = v75 >> 4;
              v78 = v76 >> 4;
              v79 = v75 & 0xF;
              v80 = v76 & 0xF;
              ++v75;
              ++v76;
              this->MonoStack.Pages[v78][v80] = this->MonoStack.Pages[v77][v79];
            }
            while ( v75 < v91 );
          }
          v4 = v84;
          v17 = v92;
          goto LABEL_57;
        }
        v13 = v86;
        Scaleform::Render::Tessellator::addTriangleAA(
          v2,
          v2->MonoStack.Pages[(unsigned __int64)(v49 - v86) >> 4][(v49 - v86) & 0xF],
          v2->MonoStack.Pages[(unsigned __int64)v49 >> 4][v49 & 0xF],
          v2->MonoStack.Pages[(unsigned __int64)(v86 + v49) >> 4][((_BYTE)v86 + (_BYTE)v49) & 0xF]);
        v4 = v84;
        v17 = v92;
        v54 = v2->MonoStack.Pages;
        if ( v49 == v84 )
        {
          v55 = v19 >> 4;
          v56 = v19 & 0xF;
          v57 = v20 >> 4;
          v58 = v20 & 0xF;
          v59 = v54[v55];
          v60 = v54[v57];
        }
        else
        {
          if ( v49 != v92 )
          {
            if ( v49 == v52 )
            {
              v54[v32 >> 4][v32 & 0xF] = v54[v14 >> 4][v14 & 0xF];
            }
            else
            {
              v64 = v32 >> 4;
              v65 = v32 & 0xF;
              v54[v89 >> 4][v89 & 0xF] = v54[v64][v65];
              v2->MonoStack.Pages[v64][v65] = v2->MonoStack.Pages[v14 >> 4][v14 & 0xF];
            }
LABEL_57:
            v15 = v82;
            v91 = v14;
            goto LABEL_58;
          }
          v61 = v20 >> 4;
          v58 = v20 & 0xF;
          v54[v88 >> 4][v88 & 0xF] = v54[v61][v58];
          v62 = v2->MonoStack.Pages;
          v63 = v19 >> 4;
          v56 = v19 & 0xF;
          v59 = v62[v63];
          v60 = v62[v61];
        }
        v17 = v92 + 1;
        LODWORD(v14) = v91;
        v4 = v84 + 1;
        v60[v58] = v59[v56];
        v15 = v82 + 1;
        ++v92;
        ++v83;
        ++v82;
        ++v84;
LABEL_58:
        v16 = v83;
      }
      while ( (unsigned int)v14 > v83 );
    }
    v81 = v2->MonoStack.Pages;
    Scaleform::Render::Tessellator::addTriangleAA(
      v2,
      v81[(unsigned __int64)(v15 - v13 + 1) >> 4][(v15 - v13 + 1) & 0xF],
      v81[(unsigned __int64)(v15 + 1) >> 4][(v15 + 1) & 0xF],
      v81[(unsigned __int64)(v15 + v13 + 1) >> 4][((_BYTE)v15 + (_BYTE)v13 + 1) & 0xF]);
  }
}

void __fastcall Scaleform::Render::Tessellator::unflipTriangles(Scaleform::Render::Tessellator *this)
{
  Scaleform::Render::Tessellator *v1; // r10
  unsigned int v2; // eax
  char v3; // cl
  unsigned __int64 v4; // rdx
  __int64 v5; // r9
  unsigned __int64 v6; // r8
  Scaleform::Render::TessVertex **Pages; // rbx
  __int64 v8; // rax
  Scaleform::Render::Tessellator::TriangleType *v9; // r8
  Scaleform::Render::Tessellator::MonoVertexType *v10; // r11
  Scaleform::Render::Tessellator::MonoVertexType *v11; // r10
  __int64 v12; // r12
  Scaleform::Render::TessVertex *v13; // r13
  Scaleform::Render::Tessellator::MonoVertexType *v14; // rdx
  __int64 v15; // rdi
  Scaleform::Render::TessVertex *v16; // rsi
  float x; // xmm13_4
  float y; // xmm12_4
  __int64 v19; // rbp
  Scaleform::Render::TessVertex *v20; // r14
  float v21; // xmm2_4
  __int64 v22; // rcx
  float v23; // xmm3_4
  Scaleform::Render::TessVertex *v24; // rbx
  __int64 v25; // r15
  float v26; // xmm14_4
  float v27; // xmm15_4
  float v28; // xmm4_4
  float v29; // xmm5_4
  float v30; // xmm9_4
  float v31; // xmm10_4
  float v32; // xmm8_4
  float v33; // xmm7_4
  float v34; // xmm6_4
  float v35; // xmm0_4
  float v36; // xmm11_4
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  Scaleform::Render::TessVertex *v40; // rdx
  bool v41; // zf
  __int64 v42; // rcx
  float v43; // xmm2_4
  float v44; // xmm7_4
  float v45; // xmm6_4
  float v46; // xmm4_4
  float v47; // xmm5_4
  float v48; // xmm1_4
  float v49; // xmm2_4
  float v50; // xmm4_4
  float v51; // xmm5_4
  float v52; // xmm1_4
  __int64 v53; // r8
  Scaleform::Render::TessVertex *v54; // r9
  float v55; // xmm2_4
  float v56; // xmm4_4
  float v57; // xmm5_4
  float v58; // xmm1_4
  __int64 v59; // [rsp+20h] [rbp-138h]
  Scaleform::Render::TessVertex *v60; // [rsp+28h] [rbp-130h]
  __int64 v61; // [rsp+30h] [rbp-128h]
  Scaleform::Render::TessVertex *v62; // [rsp+38h] [rbp-120h]
  float v63; // [rsp+40h] [rbp-118h]
  float v64; // [rsp+48h] [rbp-110h]
  __int64 v65; // [rsp+50h] [rbp-108h]
  unsigned __int64 v66; // [rsp+58h] [rbp-100h]
  unsigned __int64 v67; // [rsp+60h] [rbp-F8h]
  unsigned __int64 v68; // [rsp+68h] [rbp-F0h]
  char v70; // [rsp+168h] [rbp+10h]
  unsigned int v71; // [rsp+170h] [rbp+18h]
  float v72; // [rsp+178h] [rbp+20h]

  v1 = this;
  v2 = 0;
  v71 = 0;
  do
  {
    if ( v2 >= 8 )
      break;
    v3 = 0;
    v4 = 0i64;
    v70 = 0;
    v67 = 0i64;
    if ( v1->MeshTriangles.NumArrays )
    {
      v5 = 0i64;
      v65 = 0i64;
      do
      {
        v6 = 0i64;
        v66 = 0i64;
        v68 = *(unsigned __int64 *)((char *)&v1->MeshTriangles.Arrays->Size + v5);
        if ( v68 )
        {
          do
          {
            Pages = v1->MeshVertices.Pages;
            v8 = v6 & 0xF;
            v9 = (*(Scaleform::Render::Tessellator::TriangleType ***)((char *)&v1->MeshTriangles.Arrays->Pages + v5))[v6 >> 4];
            v10 = v9[v8].d.m.v1;
            v11 = v9[v8].d.m.v2;
            v12 = v10->srcVer & 0xF;
            v13 = Pages[(unsigned __int64)(v10->srcVer & 0xFFFFFFF) >> 4];
            v60 = Pages[(unsigned __int64)(v11->srcVer & 0xFFFFFFF) >> 4];
            v59 = v11->srcVer & 0xF;
            v14 = v9[v8].d.m.v3;
            v62 = Pages[(unsigned __int64)(v14->srcVer & 0xFFFFFFF) >> 4];
            v61 = v14->srcVer & 0xF;
            v15 = v10->aaVer & 0xF;
            v16 = Pages[(unsigned __int64)(v10->aaVer & 0xFFFFFFF) >> 4];
            x = v16[v10->aaVer & 0xF].x;
            y = v16[v10->aaVer & 0xF].y;
            v19 = v11->aaVer & 0xF;
            v20 = Pages[(unsigned __int64)(v11->aaVer & 0xFFFFFFF) >> 4];
            v21 = v20[v11->aaVer & 0xF].x - x;
            v22 = v14->aaVer & 0xF;
            v23 = v20[v11->aaVer & 0xF].y - y;
            v24 = Pages[(unsigned __int64)(v14->aaVer & 0xFFFFFFF) >> 4];
            v25 = v22;
            v64 = v21;
            v26 = v24[v22].x;
            v27 = v24[v22].y;
            v28 = v26 - v20[v11->aaVer & 0xF].x;
            v29 = v27 - v20[v11->aaVer & 0xF].y;
            v63 = v28;
            v72 = v29;
            if ( (float)((float)(v28 * v23) - (float)(v21 * v29)) < 0.0 )
            {
              v3 = v70;
              v1 = this;
            }
            else
            {
              v30 = x - v26;
              v31 = y - v27;
              v32 = (float)(v23 * v23) + (float)(v21 * v21);
              v33 = (float)(v29 * v29) + (float)(v28 * v28);
              v34 = (float)(v31 * v31) + (float)(v30 * v30);
              v35 = sqrtf((float)(v33 + v32) + v34);
              v1 = this;
              v36 = v35 * this->IntersectionEpsilon;
              if ( v32 <= v33 )
              {
                v37 = (v33 <= v34) + 2;
              }
              else
              {
                v37 = 3;
                if ( v32 > v34 )
                  v37 = 1;
              }
              v38 = v37 - 1;
              if ( v38 )
              {
                v39 = v38 - 1;
                if ( v39 )
                {
                  v40 = v60;
                  v41 = v39 == 1;
                  v42 = v59 * 5;
                  if ( v41 )
                  {
                    v43 = v60[v59].x;
                    v44 = v20[v19].x;
                    v45 = v20[v19].y;
                    v46 = v60[v59].y - v45;
                    v47 = (float)((float)(v43 - v44) * v31) - (float)(v46 * v30);
                    if ( v36 > COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v47) & _xmm)
                      || (v48 = (float)((float)((float)(v45 - v27) * v30) - (float)((float)(v44 - v26) * v31)) / v47,
                          v48 <= 0.0)
                      || v48 >= 1.0 )
                    {
                      v20[v19].x = v43;
                      v20[v19].y = v60[v59].y;
                    }
                    else
                    {
                      v20[v19].x = (float)((float)(v43 - (float)((float)((float)(v43 - v44) * v48) + v44)) * 0.125)
                                 + (float)((float)((float)(v43 - v44) * v48) + v44);
                      v20[v19].y = (float)((float)(v60[v59].y - (float)((float)(v46 * v48) + v45)) * 0.125)
                                 + (float)((float)(v46 * v48) + v45);
                    }
                  }
                }
                else
                {
                  v49 = v13[v12].x;
                  v50 = v13[v12].y - y;
                  v51 = (float)((float)(v49 - x) * v72) - (float)(v50 * v63);
                  if ( v36 > COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v51) & _xmm)
                    || (v52 = (float)((float)((float)(y - v20[v19].y) * v63) - (float)((float)(x - v20[v19].x) * v72))
                            / v51,
                        v52 <= 0.0)
                    || v52 >= 1.0 )
                  {
                    v16[v15].x = v49;
                    v16[v15].y = v13[v12].y;
                  }
                  else
                  {
                    v16[v15].x = (float)((float)(v49 - (float)((float)((float)(v49 - x) * v52) + x)) * 0.125)
                               + (float)((float)((float)(v49 - x) * v52) + x);
                    v16[v15].y = (float)((float)(v13[v12].y - (float)((float)(v50 * v52) + y)) * 0.125)
                               + (float)((float)(v50 * v52) + y);
                  }
                  v42 = v59 * 5;
                  v40 = v60;
                }
                v53 = v61 * 5;
                v54 = v62;
              }
              else
              {
                v53 = v61 * 5;
                v54 = v62;
                v55 = v62[v61].x;
                v56 = v62[v61].y - v27;
                v57 = (float)((float)(v55 - v26) * v23) - (float)(v56 * v64);
                if ( v36 > COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v57) & _xmm)
                  || (v58 = (float)((float)((float)(v27 - y) * v64) - (float)((float)(v26 - x) * v23)) / v57, v58 <= 0.0)
                  || v58 >= 1.0 )
                {
                  v42 = v59 * 5;
                  v40 = v60;
                  v24[v25].x = v55;
                  v24[v25].y = v62[v61].y;
                }
                else
                {
                  v42 = v59 * 5;
                  v40 = v60;
                  v24[v25].x = (float)((float)(v55 - (float)((float)((float)(v55 - v26) * v58) + v26)) * 0.125)
                             + (float)((float)((float)(v55 - v26) * v58) + v26);
                  v24[v25].y = (float)((float)(v62[v61].y - (float)((float)(v56 * v58) + v27)) * 0.125)
                             + (float)((float)(v56 * v58) + v27);
                }
              }
              if ( (float)((float)((float)(v20[v19].y - v16[v15].y) * (float)(v24[v25].x - v20[v19].x))
                         - (float)((float)(v24[v25].y - v20[v19].y) * (float)(v20[v19].x - v16[v15].x))) >= 0.0 )
              {
                v16[v15].x = v13[v12].x;
                v16[v15].y = v13[v12].y;
                v20[v19].x = *(&v40->x + v42);
                v20[v19].y = *(&v40->y + v42);
                v24[v25].x = *(&v54->x + v53);
                v24[v25].y = *(&v54->y + v53);
              }
              v3 = 1;
              v70 = 1;
            }
            v5 = v65;
            v6 = v66 + 1;
            v66 = v6;
          }
          while ( v6 < v68 );
          v4 = v67;
        }
        ++v4;
        v5 += 32i64;
        v67 = v4;
        v65 = v5;
      }
      while ( v4 < v1->MeshTriangles.NumArrays );
      v2 = v71;
    }
    v71 = ++v2;
  }
  while ( v3 );
}

