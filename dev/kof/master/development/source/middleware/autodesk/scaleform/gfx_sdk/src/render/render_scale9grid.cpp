#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hittest.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"

void Scaleform::Render::Scale9GridData::MakeMeshKey(float * keyData); // 0x1403CCA80
Scaleform::Render::Scale9GridInfo::Scale9GridInfo(const Scaleform::Render::Rect<float> & s9Rect, const Scaleform::Render::Matrix2x4<float> & s9gMtx, const Scaleform::Render::Matrix2x4<float> & shapeMtx, const Scaleform::Render::Rect<float> & bounds); // 0x1403C9A50
Scaleform::Render::Scale9GridInfo::Scale9GridInfo(const Scaleform::Render::Scale9GridData * s9g, const Scaleform::Render::Matrix2x4<float> & viewMtx); // 0x1403C9CA0
void Scaleform::Render::Scale9GridInfo::Compute(); // 0x1403CBC20
unsigned long Scaleform::Render::Scale9GridInfo::Transform(float * x, float * y); // 0x1403CCDB0
enum Scaleform::Render::Scale9GridInfo::Transform::__l2::<unnamed-enum-X>
{
	X = 0,
};
float Scaleform::Render::Scale9GridInfo::GetScale(); // 0x1403CC670
float Scaleform::Render::Scale9GridInfo::GetXScale(); // 0x1403CC970
float Scaleform::Render::Scale9GridInfo::GetYScale(); // 0x1403CCA10
Scaleform::Render::Rect<float> Scaleform::Render::Scale9GridInfo::AdjustBounds(const Scaleform::Render::Rect<float> & bounds); // 0x1403CBAD0
void Scaleform::Render::Scale9GridTess::addVertices(Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2> & ver, const Scaleform::Render::Matrix2x4<float> & toUV, float x, float y, unsigned long code1, unsigned long code2); // 0x1403CD190
void Scaleform::Render::Scale9GridTess::addCorner(Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2> & ver, const float * c, float x, float y, const Scaleform::Render::Matrix2x4<float> & toUV, unsigned long code1, unsigned long code2, unsigned long code3, unsigned long code4); // 0x1403CCEE0
void Scaleform::Render::Scale9GridTess::transformVertex(const Scaleform::Render::Scale9GridInfo & s9g, Scaleform::Render::Image9GridVertex & v); // 0x1403CD780
enum Scaleform::Render::Scale9GridTess::transformVertex::__l2::<unnamed-enum-X>
{
	X = 0,
};
Scaleform::Render::VertexElement Scaleform::Render::Image9GridVertex::Elements[3]; // 0x1409F9F70
Scaleform::Render::VertexFormat Scaleform::Render::Image9GridVertex::Format; // 0x1409F9F88
void(*Scaleform::Render::Image9GridVertex::ormat$initializer$::operator--)(); // 0x140739D60
void Scaleform::Render::Scale9GridTess::tessellateArea(Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2> & ver, unsigned long i1, unsigned long i2); // 0x1403CD2B0
Scaleform::Render::Scale9GridTess::Scale9GridTess(Scaleform::MemoryHeap * heap, const Scaleform::Render::Scale9GridInfo & s9g, const Scaleform::Render::Rect<float> & imgRect, const Scaleform::Render::Matrix2x4<float> & uvMatrix, const Scaleform::Render::Matrix2x4<float> & fillMatrix); // 0x1403C9EF0//decompilation failure at 1409F9F70!
//decompilation failure at 1409F9F88!
//decompilation failure at 140739D60!
void __fastcall Scaleform::Alg::QuickSortSliced<Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2>,bool (*)(Scaleform::Render::Scale9GridTess::TmpVertexType const &,Scaleform::Render::Scale9GridTess::TmpVertexType const &)>(
        Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2> *arr,
        unsigned __int64 start,
        unsigned __int64 end,
        bool (__fastcall *less)(const Scaleform::Render::Scale9GridTess::TmpVertexType *, const Scaleform::Render::Scale9GridTess::TmpVertexType *))
{
  signed __int64 v5; // r15
  unsigned __int64 v6; // r13
  unsigned __int64 *i; // r12
  signed __int64 v9; // rax
  Scaleform::Render::Scale9GridTess::TmpVertexType *Data; // rcx
  signed __int64 v11; // r15
  Scaleform::Render::Scale9GridTess::TmpVertexType *v12; // r8
  signed __int64 v13; // r14
  unsigned __int64 v14; // r12
  float Slope; // edx
  __int64 v16; // xmm1_8
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rsi
  Scaleform::Render::Scale9GridTess::TmpVertexType *v19; // rax
  Scaleform::Render::Scale9GridTess::TmpVertexType *v20; // r8
  __int64 v21; // xmm1_8
  Scaleform::Render::Scale9GridTess::TmpVertexType *v22; // rcx
  float v23; // edx
  Scaleform::Render::Scale9GridTess::TmpVertexType *v24; // rax
  Scaleform::Render::Scale9GridTess::TmpVertexType *v25; // r8
  __int64 v26; // xmm1_8
  Scaleform::Render::Scale9GridTess::TmpVertexType *v27; // rcx
  float v28; // edx
  Scaleform::Render::Scale9GridTess::TmpVertexType *v29; // rax
  Scaleform::Render::Scale9GridTess::TmpVertexType *v30; // r8
  __int64 v31; // xmm1_8
  Scaleform::Render::Scale9GridTess::TmpVertexType *v32; // rcx
  float v33; // edx
  Scaleform::Render::Scale9GridTess::TmpVertexType *v34; // rcx
  __int64 v35; // xmm1_8
  float v36; // edx
  float v37; // edx
  Scaleform::Render::Scale9GridTess::TmpVertexType *v38; // r8
  __int64 v39; // xmm1_8
  unsigned __int64 *v40; // r12
  unsigned __int64 v41; // rdx
  signed __int64 v42; // r14
  unsigned __int64 j; // rbx
  unsigned __int64 k; // rsi
  Scaleform::Render::Scale9GridTess::TmpVertexType *v45; // rdx
  __int64 v46; // xmm1_8
  float v47; // ecx
  unsigned __int64 v48; // [rsp+20h] [rbp-2E8h]
  unsigned __int64 *v49; // [rsp+28h] [rbp-2E0h]
  unsigned __int64 v50[80]; // [rsp+30h] [rbp-2D8h] BYREF

  v48 = end;
  v5 = end;
  v6 = start;
  if ( end - start >= 2 )
  {
    for ( i = v50; ; v6 = *i )
    {
      while ( 1 )
      {
        v49 = i;
        v9 = v5 - v6;
        if ( (__int64)(v5 - v6) <= 9 )
          break;
        Data = arr->Data;
        v11 = v6 + 1;
        v12 = &Data[v6 + v9 / 2];
        v13 = v48 - 1;
        v14 = v6;
        Slope = Data[v6].Slope;
        v16 = *(_QWORD *)&Data[v6].AreaCode;
        *(_QWORD *)&Data[v14].AreaCode = *(_QWORD *)&v12->AreaCode;
        Data[v14].Slope = v12->Slope;
        *(_QWORD *)&v12->AreaCode = v16;
        v17 = v6 + 1;
        v12->Slope = Slope;
        v18 = v13;
        if ( less(&arr->Data[v13], &arr->Data[v17]) )
        {
          v19 = arr->Data;
          v20 = &v19[v17];
          v21 = *(_QWORD *)&v19[v13].AreaCode;
          v22 = &v19[v18];
          v23 = v19[v18].Slope;
          *(_QWORD *)&v22->AreaCode = *(_QWORD *)&v19[v17].AreaCode;
          v22->Slope = v19[v17].Slope;
          *(_QWORD *)&v20->AreaCode = v21;
          v20->Slope = v23;
        }
        if ( less(&arr->Data[v14], &arr->Data[v17]) )
        {
          v24 = arr->Data;
          v25 = &v24[v17];
          v26 = *(_QWORD *)&v24[v6].AreaCode;
          v27 = &v24[v14];
          v28 = v24[v14].Slope;
          *(_QWORD *)&v27->AreaCode = *(_QWORD *)&v24[v17].AreaCode;
          v27->Slope = v24[v17].Slope;
          *(_QWORD *)&v25->AreaCode = v26;
          v25->Slope = v28;
        }
        if ( less(&arr->Data[v18], &arr->Data[v14]) )
        {
          v29 = arr->Data;
          v30 = &v29[v14];
          v31 = *(_QWORD *)&v29[v13].AreaCode;
          v32 = &v29[v18];
          v33 = v29[v18].Slope;
          *(_QWORD *)&v32->AreaCode = *(_QWORD *)&v29[v6].AreaCode;
          v32->Slope = v29[v14].Slope;
          *(_QWORD *)&v30->AreaCode = v31;
          v30->Slope = v33;
        }
        while ( 1 )
        {
          do
          {
            ++v17;
            ++v11;
          }
          while ( less(&arr->Data[v17], &arr->Data[v14]) );
          do
          {
            --v18;
            --v13;
          }
          while ( less(&arr->Data[v14], &arr->Data[v18]) );
          v34 = arr->Data;
          if ( v11 > v13 )
            break;
          v18 = v13;
          v35 = *(_QWORD *)&v34[v11].AreaCode;
          v17 = v11;
          v36 = v34[v11].Slope;
          *(_QWORD *)&v34[v17].AreaCode = *(_QWORD *)&v34[v13].AreaCode;
          v34[v17].Slope = v34[v13].Slope;
          *(_QWORD *)&v34[v18].AreaCode = v35;
          v34[v18].Slope = v36;
        }
        v37 = v34[v14].Slope;
        v38 = &v34[v13];
        v39 = *(_QWORD *)&v34[v6].AreaCode;
        *(_QWORD *)&v34[v6].AreaCode = *(_QWORD *)&v38->AreaCode;
        v34[v14].Slope = v38->Slope;
        v40 = v49;
        *(_QWORD *)&v38->AreaCode = v39;
        v38->Slope = v37;
        v41 = v48;
        if ( (__int64)(v13 - v6) <= (__int64)(v48 - v11) )
        {
          *v40 = v11;
          v5 = v13;
          v40[1] = v41;
          i = v40 + 2;
          v48 = v13;
        }
        else
        {
          *v40 = v6;
          v6 = v11;
          v40[1] = v13;
          v5 = v41;
          i = v40 + 2;
        }
      }
      v42 = v6 + 1;
      for ( j = v6; v42 < v5; ++v42 )
      {
        for ( k = j;
              ((unsigned __int8 (__fastcall *)(Scaleform::Render::Scale9GridTess::TmpVertexType *))less)(&arr->Data[j + 1]);
              k = j )
        {
          v45 = &arr->Data[k];
          v46 = *(_QWORD *)&v45[1].AreaCode;
          v47 = v45[1].Slope;
          *(_QWORD *)&v45[1].AreaCode = *(_QWORD *)&v45->AreaCode;
          v45[1].Slope = v45->Slope;
          *(_QWORD *)&v45->AreaCode = v46;
          v45->Slope = v47;
          if ( j == v6 )
            break;
          --j;
        }
        j = v42;
      }
      if ( i <= v50 )
        break;
      v5 = *(i - 1);
      i -= 2;
      v48 = v5;
    }
  }
}

void __fastcall Scaleform::Render::Scale9GridInfo::Scale9GridInfo(
        Scaleform::Render::Scale9GridInfo *this,
        const Scaleform::Render::Rect<float> *s9Rect,
        const Scaleform::Render::Matrix2x4<float> *s9gMtx,
        const Scaleform::Render::Matrix2x4<float> *shapeMtx,
        const Scaleform::Render::Rect<float> *bounds)
{
  Scaleform::Render::Matrix2x4<float> *p_InverseMatrix; // rsi
  Scaleform::Render::Matrix2x4<float> *p_S9gMatrix; // rdx
  Scaleform::Render::Matrix2x4<float> *ResultingMatrices; // rax
  __int64 v10; // rcx
  float x1; // eax
  float y2; // xmm2_4
  float x2; // xmm1_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // eax
  Scaleform::Render::Matrix2x4<float> v17; // [rsp+20h] [rbp-58h] BYREF
  Scaleform::Render::Matrix2x4<float> m; // [rsp+40h] [rbp-38h] BYREF

  p_InverseMatrix = &this->InverseMatrix;
  this->__vftable = (Scaleform::Render::Scale9GridInfo_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  p_S9gMatrix = &this->S9gMatrix;
  this->__vftable = (Scaleform::Render::Scale9GridInfo_vtbl *)&Scaleform::Render::Scale9GridInfo::`vftable';
  ResultingMatrices = this->ResultingMatrices;
  *(_QWORD *)&this->Scale9.x1 = 0i64;
  *(_QWORD *)&this->Scale9.x2 = 0i64;
  *(_OWORD *)&this->S9gMatrix.M[0][0] = 0x3F800000ui64;
  this->S9gMatrix.M[1][0] = 0.0;
  *(_QWORD *)&this->S9gMatrix.M[1][1] = 1065353216i64;
  this->S9gMatrix.M[1][3] = 0.0;
  *(_OWORD *)&this->ShapeMatrix.M[0][0] = 0x3F800000ui64;
  this->ShapeMatrix.M[1][0] = 0.0;
  *(_OWORD *)&this->ShapeMatrix.M[1][1] = 0x3F800000ui64;
  *(_QWORD *)&this->Bounds.y1 = 0i64;
  *(_QWORD *)&this->Bounds.y2 = 0i64;
  *(_QWORD *)&this->ResultingGrid.y1 = 0i64;
  this->ResultingGrid.y2 = 0.0;
  v10 = 9i64;
  *(_QWORD *)&p_InverseMatrix->M[0][0] = 1065353216i64;
  *(_QWORD *)&p_InverseMatrix->M[0][2] = 0i64;
  p_InverseMatrix->M[1][0] = 0.0;
  *(_QWORD *)&p_InverseMatrix->M[1][1] = 1065353216i64;
  p_InverseMatrix->M[1][3] = 0.0;
  do
  {
    *(_QWORD *)&ResultingMatrices->M[0][0] = 1065353216i64;
    *(_QWORD *)&ResultingMatrices->M[0][2] = 0i64;
    ResultingMatrices->M[1][0] = 0.0;
    *(_QWORD *)&ResultingMatrices->M[1][1] = 1065353216i64;
    ResultingMatrices->M[1][3] = 0.0;
    ++ResultingMatrices;
    --v10;
  }
  while ( v10 );
  x1 = s9Rect->x1;
  y2 = s9Rect->y2;
  x2 = s9Rect->x2;
  this->Scale9.y1 = s9Rect->y1;
  this->Scale9.x2 = x2;
  this->Scale9.x1 = x1;
  this->Scale9.y2 = y2;
  *p_S9gMatrix = *s9gMtx;
  this->ShapeMatrix = *shapeMtx;
  v14 = bounds->x2;
  v15 = bounds->y2;
  v16 = bounds->x1;
  this->Bounds.y1 = bounds->y1;
  this->Bounds.x2 = v14;
  *(_OWORD *)&v17.M[0][0] = _xmm;
  *(_OWORD *)&v17.M[1][0] = _xmm;
  this->Bounds.y2 = v15;
  this->Bounds.x1 = v16;
  Scaleform::Render::Matrix2x4<float>::SetInverse(&v17, p_S9gMatrix);
  *p_InverseMatrix = v17;
  *(_OWORD *)&m.M[0][0] = _xmm;
  *(_OWORD *)&m.M[1][0] = _xmm;
  Scaleform::Render::Matrix2x4<float>::SetInverse(&m, &this->ShapeMatrix);
  Scaleform::Render::Matrix2x4<float>::Append(p_InverseMatrix, &m);
  Scaleform::Render::Scale9GridInfo::Compute(this);
}

void __fastcall Scaleform::Render::Scale9GridInfo::Scale9GridInfo(
        Scaleform::Render::Scale9GridInfo *this,
        const Scaleform::Render::Scale9GridData *s9g,
        const Scaleform::Render::Matrix2x4<float> *viewMtx)
{
  Scaleform::Render::Matrix2x4<float> *p_InverseMatrix; // rdi
  Scaleform::Render::Matrix2x4<float> *p_S9gMatrix; // rdx
  Scaleform::Render::Matrix2x4<float> *ResultingMatrices; // rax
  __int64 v9; // rcx
  float y2; // xmm2_4
  float x2; // xmm1_4
  float x1; // eax
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // eax
  Scaleform::Render::Matrix2x4<float> v16; // [rsp+20h] [rbp-68h] BYREF
  Scaleform::Render::Matrix2x4<float> m; // [rsp+40h] [rbp-48h] BYREF

  p_InverseMatrix = &this->InverseMatrix;
  this->__vftable = (Scaleform::Render::Scale9GridInfo_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::Render::Scale9GridInfo_vtbl *)&Scaleform::Render::Scale9GridInfo::`vftable';
  *(_QWORD *)&this->Scale9.x1 = 0i64;
  p_S9gMatrix = &this->S9gMatrix;
  *(_QWORD *)&this->Scale9.x2 = 0i64;
  ResultingMatrices = this->ResultingMatrices;
  *(_OWORD *)&this->S9gMatrix.M[0][0] = 0x3F800000ui64;
  this->S9gMatrix.M[1][0] = 0.0;
  *(_QWORD *)&this->S9gMatrix.M[1][1] = 1065353216i64;
  this->S9gMatrix.M[1][3] = 0.0;
  *(_OWORD *)&this->ShapeMatrix.M[0][0] = 0x3F800000ui64;
  this->ShapeMatrix.M[1][0] = 0.0;
  *(_OWORD *)&this->ShapeMatrix.M[1][1] = 0x3F800000ui64;
  *(_QWORD *)&this->Bounds.y1 = 0i64;
  *(_QWORD *)&this->Bounds.y2 = 0i64;
  *(_QWORD *)&this->ResultingGrid.y1 = 0i64;
  this->ResultingGrid.y2 = 0.0;
  v9 = 9i64;
  *(_QWORD *)&p_InverseMatrix->M[0][0] = 1065353216i64;
  *(_QWORD *)&p_InverseMatrix->M[0][2] = 0i64;
  p_InverseMatrix->M[1][0] = 0.0;
  *(_QWORD *)&p_InverseMatrix->M[1][1] = 1065353216i64;
  p_InverseMatrix->M[1][3] = 0.0;
  do
  {
    *(_QWORD *)&ResultingMatrices->M[0][0] = 1065353216i64;
    *(_QWORD *)&ResultingMatrices->M[0][2] = 0i64;
    ResultingMatrices->M[1][0] = 0.0;
    *(_QWORD *)&ResultingMatrices->M[1][1] = 1065353216i64;
    ResultingMatrices->M[1][3] = 0.0;
    ++ResultingMatrices;
    --v9;
  }
  while ( v9 );
  y2 = s9g->S9Rect.y2;
  x2 = s9g->S9Rect.x2;
  x1 = s9g->S9Rect.x1;
  this->Scale9.y1 = s9g->S9Rect.y1;
  this->Scale9.x2 = x2;
  this->Scale9.y2 = y2;
  this->Scale9.x1 = x1;
  p_S9gMatrix->M[0][0] = s9g->Scale9Mtx.M[0][0];
  p_S9gMatrix->M[0][1] = s9g->Scale9Mtx.M[0][1];
  p_S9gMatrix->M[0][2] = s9g->Scale9Mtx.M[0][2];
  p_S9gMatrix->M[0][3] = s9g->Scale9Mtx.M[0][3];
  p_S9gMatrix->M[1][0] = s9g->Scale9Mtx.M[1][0];
  p_S9gMatrix->M[1][1] = s9g->Scale9Mtx.M[1][1];
  p_S9gMatrix->M[1][2] = s9g->Scale9Mtx.M[1][2];
  p_S9gMatrix->M[1][3] = s9g->Scale9Mtx.M[1][3];
  this->ShapeMatrix.M[0][0] = s9g->ShapeMtx.M[0][0];
  this->ShapeMatrix.M[0][1] = s9g->ShapeMtx.M[0][1];
  this->ShapeMatrix.M[0][2] = s9g->ShapeMtx.M[0][2];
  this->ShapeMatrix.M[0][3] = s9g->ShapeMtx.M[0][3];
  this->ShapeMatrix.M[1][0] = s9g->ShapeMtx.M[1][0];
  this->ShapeMatrix.M[1][1] = s9g->ShapeMtx.M[1][1];
  this->ShapeMatrix.M[1][2] = s9g->ShapeMtx.M[1][2];
  this->ShapeMatrix.M[1][3] = s9g->ShapeMtx.M[1][3];
  v13 = s9g->Bounds.x2;
  v14 = s9g->Bounds.y2;
  v15 = s9g->Bounds.x1;
  this->Bounds.y1 = s9g->Bounds.y1;
  this->Bounds.x2 = v13;
  *(_OWORD *)&v16.M[0][0] = _xmm;
  *(_OWORD *)&v16.M[1][0] = _xmm;
  this->Bounds.y2 = v14;
  this->Bounds.x1 = v15;
  Scaleform::Render::Matrix2x4<float>::SetInverse(&v16, p_S9gMatrix);
  *p_InverseMatrix = v16;
  *(_OWORD *)&m.M[0][0] = _xmm;
  *(_OWORD *)&m.M[1][0] = _xmm;
  Scaleform::Render::Matrix2x4<float>::SetInverse(&m, &this->ShapeMatrix);
  Scaleform::Render::Matrix2x4<float>::Append(p_InverseMatrix, &m);
  Scaleform::Render::Matrix2x4<float>::Append(p_InverseMatrix, viewMtx);
  Scaleform::Render::Scale9GridInfo::Compute(this);
}

void __fastcall Scaleform::Render::Scale9GridTess::Scale9GridTess(
        Scaleform::Render::Scale9GridTess *this,
        Scaleform::MemoryHeap *heap,
        const Scaleform::Render::Scale9GridInfo *s9g,
        const Scaleform::Render::Rect<float> *imgRect,
        const Scaleform::Render::Matrix2x4<float> *uvMatrix,
        const Scaleform::Render::Matrix2x4<float> *fillMatrix)
{
  unsigned int v6; // ebx
  float y1; // xmm1_4
  float x1; // xmm2_4
  float x2; // xmm4_4
  float y2; // xmm5_4
  float v14; // xmm0_4
  float v15; // xmm3_4
  float v16; // xmm0_4
  float v17; // xmm3_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm2_4
  float v24; // xmm4_4
  float v25; // xmm1_4
  float v26; // xmm5_4
  float v27; // xmm1_4
  __int128 v28; // xmm0
  float v29; // xmm1_4
  float v30; // xmm5_4
  float v31; // xmm6_4
  float v32; // xmm4_4
  float v33; // xmm5_4
  float v34; // xmm3_4
  float v35; // xmm5_4
  float v36; // xmm7_4
  float v37; // xmm6_4
  float v38; // xmm8_4
  float v39; // xmm15_4
  float v40; // xmm10_4
  float v41; // xmm11_4
  float v42; // xmm8_4
  float v43; // xmm12_4
  float v44; // xmm13_4
  float v45; // xmm6_4
  float v46; // xmm9_4
  float v47; // xmm7_4
  unsigned int VerCount; // eax
  float v49; // xmm1_4
  Scaleform::Render::Image9GridVertex *v50; // rax
  float v51; // xmm7_4
  float v52; // xmm6_4
  float *p_x; // rax
  float v54; // xmm8_4
  float *v55; // rax
  float v56; // xmm3_4
  float *v57; // rax
  float v58; // xmm9_4
  float v59; // xmm0_4
  float v60; // xmm10_4
  float v61; // xmm1_4
  float v62; // xmm4_4
  float v63; // xmm5_4
  float v64; // xmm2_4
  float v65; // xmm0_4
  float v66; // xmm11_4
  float v67; // xmm2_4
  float y; // xmm2_4
  float v69; // xmm3_4
  float v70; // xmm1_4
  float v71; // xmm2_4
  float v72; // xmm3_4
  float v73; // xmm2_4
  float v74; // xmm3_4
  float v75; // xmm5_4
  float v76; // xmm1_4
  float v77; // xmm2_4
  float v78; // xmm2_4
  float v79; // xmm3_4
  float v80; // xmm3_4
  float v81; // xmm5_4
  float v82; // xmm1_4
  float v83; // xmm2_4
  float v84; // xmm3_4
  float v85; // xmm2_4
  float v86; // xmm4_4
  float v87; // xmm5_4
  float v88; // xmm3_4
  float v89; // xmm1_4
  float v90; // xmm2_4
  float v91; // xmm2_4
  float v92; // xmm3_4
  float v93; // xmm1_4
  float v94; // xmm2_4
  float v95; // xmm3_4
  float v96; // xmm2_4
  float v97; // xmm5_4
  float v98; // xmm1_4
  float v99; // xmm4_4
  float v100; // xmm2_4
  float v101; // xmm2_4
  float v102; // xmm3_4
  float v103; // xmm1_4
  float v104; // xmm2_4
  float v105; // xmm3_4
  float v106; // xmm2_4
  float v107; // xmm5_4
  float v108; // xmm4_4
  float v109; // xmm13_4
  float v110; // xmm14_4
  float v111; // xmm3_4
  float v112; // xmm1_4
  float v113; // xmm2_4
  float v114; // xmm2_4
  float v115; // xmm3_4
  float v116; // xmm1_4
  float v117; // xmm2_4
  float v118; // xmm3_4
  float v119; // xmm2_4
  float v120; // xmm4_4
  float v121; // xmm5_4
  float v122; // xmm1_4
  float v123; // xmm2_4
  float v124; // xmm1_4
  float v125; // xmm3_4
  float v126; // xmm2_4
  float v127; // xmm1_4
  float v128; // xmm1_4
  float v129; // xmm13_4
  float v130; // xmm14_4
  float v131; // xmm2_4
  float v132; // xmm9_4
  float v133; // xmm10_4
  float v134; // xmm3_4
  float v135; // xmm1_4
  float v136; // xmm1_4
  float v137; // xmm3_4
  float v138; // xmm2_4
  float v139; // xmm5_4
  float v140; // xmm1_4
  float v141; // xmm1_4
  float v142; // xmm3_4
  float v143; // xmm2_4
  float v144; // xmm4_4
  float v145; // xmm1_4
  float v146; // xmm2_4
  float v147; // xmm1_4
  float v148; // xmm3_4
  float v149; // xmm2_4
  float v150; // xmm5_4
  float v151; // xmm1_4
  float v152; // xmm9_4
  float v153; // xmm10_4
  unsigned int v154; // esi
  unsigned __int64 Size; // r10
  unsigned int v156; // er8
  Scaleform::Render::Scale9GridTess::TmpVertexType *Data; // r9
  __int64 v158; // rdx
  float v159; // [rsp+58h] [rbp-B0h]
  float v160; // [rsp+58h] [rbp-B0h]
  float v161; // [rsp+5Ch] [rbp-ACh]
  float v162; // [rsp+5Ch] [rbp-ACh]
  float v163; // [rsp+68h] [rbp-A0h]
  float v164; // [rsp+68h] [rbp-A0h]
  float v165; // [rsp+68h] [rbp-A0h]
  float v166; // [rsp+7Ch] [rbp-8Ch]
  float v167; // [rsp+80h] [rbp-88h]
  float v168; // [rsp+84h] [rbp-84h]
  float v169; // [rsp+88h] [rbp-80h]
  float v170; // [rsp+8Ch] [rbp-7Ch]
  float v171; // [rsp+8Ch] [rbp-7Ch]
  float v172; // [rsp+90h] [rbp-78h]
  float v173; // [rsp+94h] [rbp-74h]
  float v174; // [rsp+98h] [rbp-70h]
  float v175; // [rsp+A0h] [rbp-68h]
  float v176; // [rsp+A0h] [rbp-68h]
  float v177; // [rsp+A8h] [rbp-60h]
  float v178; // [rsp+ACh] [rbp-5Ch]
  float v179; // [rsp+B0h] [rbp-58h]
  float v180; // [rsp+B4h] [rbp-54h]
  float v181; // [rsp+B8h] [rbp-50h]
  float v182; // [rsp+BCh] [rbp-4Ch]
  float dst[4]; // [rsp+C0h] [rbp-48h] BYREF
  int v184; // [rsp+D0h] [rbp-38h]
  int v185; // [rsp+D4h] [rbp-34h]
  float src; // [rsp+D8h] [rbp-30h] BYREF
  float v187; // [rsp+DCh] [rbp-2Ch]
  float v188; // [rsp+E0h] [rbp-28h]
  float v189; // [rsp+E4h] [rbp-24h]
  float v190; // [rsp+E8h] [rbp-20h]
  float v191; // [rsp+ECh] [rbp-1Ch]
  float v192; // [rsp+F0h] [rbp-18h]
  float v193; // [rsp+F4h] [rbp-14h]
  Scaleform::Render::Matrix2x4<float> v194; // [rsp+F8h] [rbp-10h] BYREF
  Scaleform::Render::Matrix2x4<float> toUV; // [rsp+118h] [rbp+10h] BYREF
  Scaleform::Render::Matrix2x4<float> m; // [rsp+138h] [rbp+30h] BYREF
  Scaleform::Render::Matrix2x4<float> v197; // [rsp+158h] [rbp+50h] BYREF
  Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2> ver; // [rsp+178h] [rbp+70h] BYREF

  v6 = 0;
  this->VerCount = 0;
  this->Indices.Data = this->Indices.Static;
  this->Indices.pHeap = heap;
  this->Indices.Size = 0i64;
  this->Indices.Reserved = 72i64;
  y1 = imgRect->y1;
  x1 = imgRect->x1;
  x2 = imgRect->x2;
  y2 = imgRect->y2;
  v14 = y1 * s9g->ShapeMatrix.M[1][1];
  src = (float)((float)(y1 * s9g->ShapeMatrix.M[0][1]) + (float)(imgRect->x1 * s9g->ShapeMatrix.M[0][0]))
      + s9g->ShapeMatrix.M[0][3];
  v15 = (float)(x1 * s9g->ShapeMatrix.M[1][0]) + v14;
  v16 = x2 * s9g->ShapeMatrix.M[0][0];
  v187 = v15 + s9g->ShapeMatrix.M[1][3];
  v17 = (float)(y1 * s9g->ShapeMatrix.M[0][1]) + v16;
  v18 = (float)(x2 * s9g->ShapeMatrix.M[1][0]) + (float)(y1 * s9g->ShapeMatrix.M[1][1]);
  v19 = y2 * s9g->ShapeMatrix.M[0][1];
  v166 = v17 + s9g->ShapeMatrix.M[0][3];
  v20 = v18 + s9g->ShapeMatrix.M[1][3];
  v188 = v166;
  v167 = v20;
  v189 = v20;
  v21 = v19 + (float)(x2 * s9g->ShapeMatrix.M[0][0]);
  v22 = x1 * s9g->ShapeMatrix.M[0][0];
  v23 = x1 * s9g->ShapeMatrix.M[1][0];
  v24 = (float)((float)(x2 * s9g->ShapeMatrix.M[1][0]) + (float)(y2 * s9g->ShapeMatrix.M[1][1]))
      + s9g->ShapeMatrix.M[1][3];
  v168 = v21 + s9g->ShapeMatrix.M[0][3];
  v190 = v168;
  v25 = y2 * s9g->ShapeMatrix.M[0][1];
  v26 = y2 * s9g->ShapeMatrix.M[1][1];
  v27 = v25 + v22;
  v172 = v24;
  v28 = *(_OWORD *)&uvMatrix->M[0][0];
  v191 = v24;
  *(_OWORD *)&v194.M[0][0] = v28;
  v29 = v27 + s9g->ShapeMatrix.M[0][3];
  v30 = (float)(v26 + v23) + s9g->ShapeMatrix.M[1][3];
  *(_OWORD *)&v194.M[1][0] = *(_OWORD *)&uvMatrix->M[1][0];
  v31 = fillMatrix->M[0][0];
  v32 = fillMatrix->M[0][1];
  m.M[0][0] = v31;
  v174 = v29;
  v192 = v29;
  v180 = v30;
  v193 = v30;
  *(float *)&v28 = fillMatrix->M[0][2];
  *(_QWORD *)&v197.M[0][0] = 1065353216i64;
  v197.M[0][2] = 0.0;
  v197.M[1][0] = 0.0;
  *(_QWORD *)&v197.M[1][1] = 1065353216i64;
  v33 = fillMatrix->M[1][0];
  v34 = fillMatrix->M[1][1];
  m.M[1][2] = fillMatrix->M[1][2];
  *(_QWORD *)&m.M[0][1] = __PAIR64__(v28, LODWORD(v32));
  *(_QWORD *)&m.M[1][0] = __PAIR64__(LODWORD(v34), LODWORD(v33));
  if ( v31 > -0.0000099999997 )
  {
    if ( v31 >= 0.0000099999997 )
      m.M[0][0] = 1.0;
  }
  else
  {
    m.M[0][0] = -1.0;
  }
  if ( v34 > -0.0000099999997 )
  {
    if ( v34 >= 0.0000099999997 )
      m.M[1][1] = 1.0;
  }
  else
  {
    m.M[1][1] = -1.0;
  }
  if ( v32 > -0.0000099999997 )
  {
    if ( v32 >= 0.0000099999997 )
      m.M[0][1] = 1.0;
  }
  else
  {
    m.M[0][1] = -1.0;
  }
  if ( v33 > -0.0000099999997 )
  {
    if ( v33 >= 0.0000099999997 )
      m.M[1][0] = 1.0;
  }
  else
  {
    m.M[1][0] = -1.0;
  }
  m.M[0][3] = 0.0;
  m.M[1][3] = 0.0;
  v197.M[0][3] = -0.5;
  v197.M[1][3] = -0.5;
  Scaleform::Render::Matrix2x4<float>::Append(&v197, &m);
  v35 = v194.M[0][0];
  v36 = v194.M[1][0];
  v194.M[1][2] = 0.0;
  v194.M[0][2] = 0.0;
  v184 = 1065353216;
  v185 = 1065353216;
  v194.M[0][0] = (float)(v194.M[0][1] * v197.M[1][0]) + (float)(v194.M[0][0] * v197.M[0][0]);
  v37 = v194.M[0][1] * (float)(v197.M[1][3] + 0.5);
  v197.M[0][3] = v197.M[0][3] + 0.5;
  v197.M[1][3] = v197.M[1][3] + 0.5;
  v194.M[1][0] = (float)(v194.M[1][1] * v197.M[1][0]) + (float)(v194.M[1][0] * v197.M[0][0]);
  v194.M[0][1] = (float)(v194.M[0][1] * v197.M[1][1]) + (float)(v35 * v197.M[0][1]);
  v38 = (float)(v194.M[1][1] * v197.M[1][3]) + (float)(v36 * v197.M[0][3]);
  v194.M[1][1] = (float)(v194.M[1][1] * v197.M[1][1]) + (float)(v36 * v197.M[0][1]);
  *(_OWORD *)&toUV.M[1][0] = _xmm;
  v194.M[0][3] = v194.M[0][3] + (float)(v37 + (float)(v35 * v197.M[0][3]));
  v194.M[1][3] = v194.M[1][3] + v38;
  *(_OWORD *)&toUV.M[0][0] = _xmm;
  *(_OWORD *)dst = _xmm;
  Scaleform::Render::Matrix2x4<float>::SetParlToParl(&toUV, &src, dst);
  Scaleform::Render::Matrix2x4<float>::Append(&toUV, &v194);
  v39 = s9g->ResultingGrid.y2;
  v163 = s9g->ResultingGrid.x1;
  v170 = s9g->ResultingGrid.y1;
  v175 = s9g->ResultingGrid.x2;
  ver.pHeap = heap;
  ver.Size = 0i64;
  ver.Reserved = 72i64;
  ver.Data = ver.Static;
  dst[2] = 0.0;
  v40 = (float)(v194.M[1][1] + v194.M[1][0]) + v194.M[1][3];
  v41 = (float)(v194.M[0][1] + v194.M[0][0]) + v194.M[0][3];
  v42 = (float)(v194.M[1][0] + (float)(v194.M[1][1] * 0.0)) + v194.M[1][3];
  v43 = (float)((float)(v194.M[1][0] * 0.0) + v194.M[1][1]) + v194.M[1][3];
  v44 = (float)((float)(v194.M[0][0] * 0.0) + v194.M[0][1]) + v194.M[0][3];
  v45 = (float)((float)(v194.M[1][0] * 0.0) + (float)(v194.M[1][1] * 0.0)) + v194.M[1][3];
  v46 = (float)(v194.M[0][0] + (float)(v194.M[0][1] * 0.0)) + v194.M[0][3];
  v47 = (float)((float)(v194.M[0][0] * 0.0) + (float)(v194.M[0][1] * 0.0)) + v194.M[0][3];
  VerCount = this->VerCount;
  LODWORD(dst[0]) = (src > v175) | (2 * ((v187 > v39) | (2 * ((v163 > src) | (2 * (v170 > v187))))));
  LODWORD(dst[1]) = VerCount;
  Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2>::PushBack(
    &ver,
    (const Scaleform::Render::Scale9GridTess::TmpVertexType *)dst);
  v49 = v187;
  v50 = &this->Vertices[this->VerCount];
  v50->x = src;
  v50->y = v49;
  v50->u = v47;
  v50->v = v45;
  ++this->VerCount;
  v51 = v163;
  v52 = v175;
  dst[1] = *(float *)&this->VerCount;
  dst[2] = 0.0;
  LODWORD(dst[0]) = (v166 > v175) | (2 * ((v167 > v39) | (2 * ((v163 > v166) | (2 * (v170 > v167))))));
  Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2>::PushBack(
    &ver,
    (const Scaleform::Render::Scale9GridTess::TmpVertexType *)dst);
  p_x = &this->Vertices[this->VerCount].x;
  dst[2] = 0.0;
  *p_x = v166;
  p_x[2] = v46;
  p_x[3] = v42;
  v54 = v170;
  p_x[1] = v167;
  ++this->VerCount;
  dst[1] = *(float *)&this->VerCount;
  LODWORD(dst[0]) = (v168 > v175) | (2 * ((v172 > v39) | (2 * ((v163 > v168) | (2 * (v170 > v172))))));
  Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2>::PushBack(
    &ver,
    (const Scaleform::Render::Scale9GridTess::TmpVertexType *)dst);
  v55 = &this->Vertices[this->VerCount].x;
  v55[1] = v172;
  v55[3] = v40;
  *v55 = v168;
  v55[2] = v41;
  ++this->VerCount;
  dst[1] = *(float *)&this->VerCount;
  dst[2] = 0.0;
  LODWORD(dst[0]) = (v174 > v175) | (2 * ((v180 > v39) | (2 * ((v163 > v174) | (2 * (v170 > v180))))));
  Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2>::PushBack(
    &ver,
    (const Scaleform::Render::Scale9GridTess::TmpVertexType *)dst);
  v56 = v54 - v54;
  v57 = &this->Vertices[this->VerCount].x;
  v177 = v54 - v54;
  v57[1] = v180;
  v58 = src;
  v59 = v166 - src;
  *v57 = v174;
  v60 = v187;
  v61 = v167 - v187;
  v57[2] = v44;
  v62 = (float)(v175 - v163) * 0.5;
  v159 = v59;
  v161 = v61;
  v64 = (float)((float)(v54 - v54) * v59) - (float)((float)(v175 - v163) * v61);
  v57[3] = v43;
  ++this->VerCount;
  v169 = v62;
  v173 = (float)(v39 - v170) * 0.5;
  v178 = v175 - v163;
  v65 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v64) & _xmm);
  v164 = v64;
  if ( v65 < 0.001 )
  {
    v66 = FLOAT_N0_0000099999997;
  }
  else
  {
    v66 = FLOAT_N0_0000099999997;
    v67 = (float)((float)((float)(v60 - v170) * (float)(v175 - v51)) - (float)((float)(v58 - v51) * v56)) / v64;
    if ( v67 >= -0.0000099999997 && v67 <= 1.00001 )
    {
      y = (float)(v67 * v61) + v60;
      v69 = (float)((float)((float)((float)((float)(v60 - v170) * (float)(v175 - v51))
                                  - (float)((float)(v58 - v51) * v56))
                          / v164)
                  * v159)
          + v58;
      v63 = (float)(v39 - v170) * 0.5;
      Scaleform::Render::Scale9GridTess::addVertices(
        this,
        &ver,
        &toUV,
        v69,
        y,
        (v69 > v175) | (2 * (((float)(y + v63) > v39) | (2 * ((v51 > v69) | (2 * (v170 > (float)(y + v63))))))),
        (v69 > v175) | (2 * (((float)(y - v63) > v39) | (2 * ((v51 > v69) | (2 * (v170 > (float)(y - v63))))))));
      v62 = v169;
    }
  }
  v181 = v39 - v170;
  v179 = v175 - v175;
  v70 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v39 - v170) * v159)
                                                  - (float)((float)(v175 - v175) * v61))) & _xmm);
  if ( v70 >= 0.001 )
  {
    v71 = (float)((float)((float)(v60 - v170) * (float)(v175 - v175))
                - (float)((float)(v58 - v175) * (float)(v39 - v170)))
        / (float)((float)((float)(v39 - v170) * v159) - (float)((float)(v175 - v175) * v161));
    if ( v66 <= v71 && v71 <= 1.00001 )
    {
      v72 = (float)(v71 * v159) + v58;
      v73 = (float)(v71 * v161) + v60;
      Scaleform::Render::Scale9GridTess::addVertices(
        this,
        &ver,
        &toUV,
        v72,
        v73,
        ((float)(v72 + v62) > v175) | (2 * ((v73 > v39) | (2 * ((2 * (v170 > v73)) | (v51 > (float)(v72 + v62)))))),
        ((float)(v72 - v62) > v175) | (2 * ((v73 > v39) | (2 * ((2 * (v170 > v73)) | (v51 > (float)(v72 - v62)))))));
    }
  }
  v74 = v39 - v39;
  v182 = v39 - v39;
  v176 = v51 - v175;
  v75 = (float)((float)(v39 - v39) * v159) - (float)((float)(v51 - v52) * v161);
  v76 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v75) & _xmm);
  if ( v76 >= 0.001 )
  {
    v77 = (float)((float)((float)(v60 - v39) * (float)(v51 - v52)) - (float)((float)(v58 - v52) * v74)) / v75;
    if ( v66 <= v77 && v77 <= 1.00001 )
    {
      v78 = (float)(v77 * v161) + v60;
      v79 = (float)((float)((float)((float)((float)(v60 - v39) * (float)(v51 - v52)) - (float)((float)(v58 - v52) * v74))
                          / v75)
                  * v159)
          + v58;
      Scaleform::Render::Scale9GridTess::addVertices(
        this,
        &ver,
        &toUV,
        v79,
        v78,
        (v79 > v52) | (2 * (((float)(v78 + v173) > v39) | (2 * ((v51 > v79) | (2 * (v170 > (float)(v78 + v173))))))),
        (v79 > v52) | (2 * (((float)(v78 - v173) > v39) | (2 * ((v51 > v79) | (2 * (v170 > (float)(v78 - v173))))))));
    }
  }
  v80 = v170 - v39;
  v165 = v170 - v39;
  v171 = v51 - v51;
  v81 = (float)((float)(v54 - v39) * v159) - (float)((float)(v51 - v51) * v161);
  v82 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v81) & _xmm);
  if ( v82 >= 0.001 )
  {
    v83 = (float)((float)((float)(v60 - v39) * (float)(v51 - v51)) - (float)((float)(v58 - v51) * v80)) / v81;
    if ( v66 <= v83 && v83 <= 1.00001 )
    {
      v84 = (float)(v83 * v159) + v58;
      v85 = (float)(v83 * v161) + v60;
      Scaleform::Render::Scale9GridTess::addVertices(
        this,
        &ver,
        &toUV,
        v84,
        v85,
        ((float)(v84 + v169) > v52) | (2 * ((v85 > v39) | (2 * ((2 * (v54 > v85)) | (v51 > (float)(v84 + v169)))))),
        ((float)(v84 - v169) > v52) | (2 * ((v85 > v39) | (2 * ((2 * (v54 > v85)) | (v51 > (float)(v84 - v169)))))));
    }
  }
  v86 = v166;
  v87 = v167;
  v162 = v168 - v166;
  v160 = v172 - v167;
  v88 = (float)((float)(v168 - v166) * v177) - (float)((float)(v172 - v167) * v178);
  v89 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v88) & _xmm);
  if ( v89 >= 0.001 )
  {
    v90 = (float)((float)((float)(v167 - v54) * v178) - (float)((float)(v166 - v51) * v177)) / v88;
    if ( v66 <= v90 && v90 <= 1.00001 )
    {
      v91 = (float)(v90 * v160) + v167;
      v92 = (float)((float)((float)((float)((float)(v167 - v54) * v178) - (float)((float)(v166 - v51) * v177)) / v88)
                  * v162)
          + v166;
      Scaleform::Render::Scale9GridTess::addVertices(
        this,
        &ver,
        &toUV,
        v92,
        v91,
        (v92 > v52) | (2 * (((float)(v91 + v173) > v39) | (2 * ((v51 > v92) | (2 * (v54 > (float)(v91 + v173))))))),
        (v92 > v52) | (2 * (((float)(v91 - v173) > v39) | (2 * ((v51 > v92) | (2 * (v54 > (float)(v91 - v173))))))));
      v86 = v166;
      v87 = v167;
    }
  }
  v93 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v162 * v181) - (float)(v160 * v179))) & _xmm);
  if ( v93 >= 0.001 )
  {
    v94 = (float)((float)((float)(v87 - v54) * v179) - (float)((float)(v86 - v52) * v181))
        / (float)((float)(v162 * v181) - (float)(v160 * v179));
    if ( v66 <= v94 && v94 <= 1.00001 )
    {
      v95 = (float)(v94 * v162) + v86;
      v96 = (float)(v94 * v160) + v87;
      Scaleform::Render::Scale9GridTess::addVertices(
        this,
        &ver,
        &toUV,
        v95,
        v96,
        ((float)(v95 + v169) > v52) | (2 * ((v96 > v39) | (2 * ((2 * (v54 > v96)) | (v51 > (float)(v95 + v169)))))),
        ((float)(v95 - v169) > v52) | (2 * ((v96 > v39) | (2 * ((2 * (v54 > v96)) | (v51 > (float)(v95 - v169)))))));
    }
  }
  v97 = v167;
  v98 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v162 * v182) - (float)(v160 * v176))) & _xmm);
  if ( v98 < 0.001 )
    goto LABEL_46;
  v99 = v166;
  v100 = (float)((float)((float)(v167 - v39) * v176) - (float)((float)(v166 - v52) * v182))
       / (float)((float)(v162 * v182) - (float)(v160 * v176));
  if ( v66 <= v100 && v100 <= 1.00001 )
  {
    v101 = (float)(v100 * v160) + v167;
    v102 = (float)((float)((float)((float)((float)(v167 - v39) * v176) - (float)((float)(v166 - v52) * v182))
                         / (float)((float)(v162 * v182) - (float)(v160 * v176)))
                 * v162)
         + v166;
    Scaleform::Render::Scale9GridTess::addVertices(
      this,
      &ver,
      &toUV,
      v102,
      v101,
      (v102 > v52) | (2 * (((float)(v101 + v173) > v39) | (2 * ((v51 > v102) | (2 * (v54 > (float)(v101 + v173))))))),
      (v102 > v52) | (2 * (((float)(v101 - v173) > v39) | (2 * ((v51 > v102) | (2 * (v54 > (float)(v101 - v173))))))));
    v97 = v167;
LABEL_46:
    v99 = v166;
  }
  v103 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v162 * v165) - (float)(v160 * v171))) & _xmm);
  if ( v103 >= 0.001 )
  {
    v104 = (float)((float)((float)(v97 - v39) * v171) - (float)((float)(v99 - v51) * v165))
         / (float)((float)(v162 * v165) - (float)(v160 * v171));
    if ( v66 <= v104 && v104 <= 1.00001 )
    {
      v105 = (float)(v104 * v162) + v99;
      v106 = (float)(v104 * v160) + v97;
      Scaleform::Render::Scale9GridTess::addVertices(
        this,
        &ver,
        &toUV,
        v105,
        v106,
        ((float)(v105 + v169) > v52) | (2 * ((v106 > v39) | (2 * ((2 * (v54 > v106)) | (v51 > (float)(v105 + v169)))))),
        ((float)(v105 - v169) > v52) | (2 * ((v106 > v39) | (2 * ((2 * (v54 > v106)) | (v51 > (float)(v105 - v169)))))));
    }
  }
  v107 = v168;
  v108 = v172;
  v109 = v174 - v168;
  v110 = v180 - v172;
  v111 = (float)((float)(v174 - v168) * v177) - (float)((float)(v180 - v172) * v178);
  v112 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v111) & _xmm);
  if ( v112 >= 0.001 )
  {
    v113 = (float)((float)((float)(v172 - v54) * v178) - (float)((float)(v168 - v51) * v177)) / v111;
    if ( v66 <= v113 && v113 <= 1.00001 )
    {
      v114 = (float)(v113 * v110) + v172;
      v115 = (float)((float)((float)((float)((float)(v172 - v54) * v178) - (float)((float)(v168 - v51) * v177)) / v111)
                   * v109)
           + v168;
      Scaleform::Render::Scale9GridTess::addVertices(
        this,
        &ver,
        &toUV,
        v115,
        v114,
        (v115 > v52) | (2 * (((float)(v114 + v173) > v39) | (2 * ((v51 > v115) | (2 * (v54 > (float)(v114 + v173))))))),
        (v115 > v52) | (2 * (((float)(v114 - v173) > v39) | (2 * ((v51 > v115) | (2 * (v54 > (float)(v114 - v173))))))));
      v108 = v172;
      v107 = v168;
    }
  }
  v116 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v109 * v181) - (float)(v110 * v179))) & _xmm);
  if ( v116 >= 0.001 )
  {
    v117 = (float)((float)((float)(v108 - v54) * v179) - (float)((float)(v107 - v52) * v181))
         / (float)((float)(v109 * v181) - (float)(v110 * v179));
    if ( v66 <= v117 && v117 <= 1.00001 )
    {
      v118 = (float)(v117 * v109) + v107;
      v119 = (float)(v117 * v110) + v108;
      Scaleform::Render::Scale9GridTess::addVertices(
        this,
        &ver,
        &toUV,
        v118,
        v119,
        ((float)(v118 + v169) > v52) | (2 * ((v119 > v39) | (2 * ((2 * (v54 > v119)) | (v51 > (float)(v118 + v169)))))),
        ((float)(v118 - v169) > v52) | (2 * ((v119 > v39) | (2 * ((2 * (v54 > v119)) | (v51 > (float)(v118 - v169)))))));
    }
  }
  v120 = v172;
  v121 = (float)(v109 * v182) - (float)(v110 * v176);
  v122 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v121) & _xmm);
  if ( v122 < 0.001 )
    goto LABEL_63;
  v123 = v168;
  v124 = (float)((float)((float)(v172 - v39) * v176) - (float)((float)(v168 - v52) * v182)) / v121;
  if ( v66 <= v124 && v124 <= 1.00001 )
  {
    v125 = (float)(v109 * v124) + v168;
    v126 = (float)(v110 * v124) + v172;
    Scaleform::Render::Scale9GridTess::addVertices(
      this,
      &ver,
      &toUV,
      v125,
      v126,
      (v125 > v52) | (2 * (((float)(v126 + v173) > v39) | (2 * ((v51 > v125) | (2 * (v54 > (float)(v126 + v173))))))),
      (v125 > v52) | (2 * (((float)(v126 - v173) > v39) | (2 * ((v51 > v125) | (2 * (v54 > (float)(v126 - v173))))))));
    v120 = v172;
LABEL_63:
    v123 = v168;
  }
  v127 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v109 * v165) - (float)(v110 * v171))) & _xmm);
  if ( v127 >= 0.001 )
  {
    v128 = (float)((float)((float)(v120 - v39) * v171) - (float)((float)(v123 - v51) * v165))
         / (float)((float)(v109 * v165) - (float)(v110 * v171));
    if ( v66 <= v128 && v128 <= 1.00001 )
    {
      v129 = (float)(v109 * v128) + v123;
      v130 = (float)(v110 * v128) + v120;
      Scaleform::Render::Scale9GridTess::addVertices(
        this,
        &ver,
        &toUV,
        v129,
        v130,
        ((float)(v129 + v169) > v52) | (2 * ((v130 > v39) | (2 * ((2 * (v54 > v130)) | (v51 > (float)(v129 + v169)))))),
        ((float)(v129 - v169) > v52) | (2 * ((v130 > v39) | (2 * ((2 * (v54 > v130)) | (v51 > (float)(v129 - v169)))))));
    }
  }
  v131 = v174;
  v132 = v58 - v174;
  v133 = v60 - v180;
  v134 = (float)(v132 * v177) - (float)(v133 * v178);
  v135 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v134) & _xmm);
  if ( v135 >= 0.001 )
  {
    v136 = (float)((float)((float)(v180 - v54) * v178) - (float)((float)(v174 - v51) * v177)) / v134;
    if ( v66 <= v136 && v136 <= 1.00001 )
    {
      v137 = (float)(v132 * v136) + v174;
      v138 = (float)(v133 * v136) + v180;
      Scaleform::Render::Scale9GridTess::addVertices(
        this,
        &ver,
        &toUV,
        v137,
        v138,
        (v137 > v52) | (2 * (((float)(v138 + v173) > v39) | (2 * ((v51 > v137) | (2 * (v54 > (float)(v138 + v173))))))),
        (v137 > v52) | (2 * (((float)(v138 - v173) > v39) | (2 * ((v51 > v137) | (2 * (v54 > (float)(v138 - v173))))))));
      v131 = v174;
    }
  }
  v139 = (float)(v132 * v181) - (float)(v133 * v179);
  v140 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v139) & _xmm);
  if ( v140 >= 0.001 )
  {
    v141 = (float)((float)((float)(v180 - v54) * v179) - (float)((float)(v131 - v52) * v181)) / v139;
    if ( v66 <= v141 && v141 <= 1.00001 )
    {
      v142 = (float)(v132 * v141) + v131;
      v143 = (float)(v133 * v141) + v180;
      Scaleform::Render::Scale9GridTess::addVertices(
        this,
        &ver,
        &toUV,
        v142,
        v143,
        ((float)(v142 + v169) > v52) | (2 * ((v143 > v39) | (2 * ((2 * (v54 > v143)) | (v51 > (float)(v142 + v169)))))),
        ((float)(v142 - v169) > v52) | (2 * ((v143 > v39) | (2 * ((2 * (v54 > v143)) | (v51 > (float)(v142 - v169)))))));
    }
  }
  v144 = (float)(v132 * v182) - (float)(v133 * v176);
  v145 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v144) & _xmm);
  if ( v145 < 0.001 )
    goto LABEL_80;
  v146 = v174;
  v147 = (float)((float)((float)(v180 - v39) * v176) - (float)((float)(v174 - v52) * v182)) / v144;
  if ( v66 <= v147 && v147 <= 1.00001 )
  {
    v148 = (float)(v132 * v147) + v174;
    v149 = (float)(v133 * v147) + v180;
    Scaleform::Render::Scale9GridTess::addVertices(
      this,
      &ver,
      &toUV,
      v148,
      v149,
      (v148 > v52) | (2 * (((float)(v149 + v173) > v39) | (2 * ((v51 > v148) | (2 * (v54 > (float)(v149 + v173))))))),
      (v148 > v52) | (2 * (((float)(v149 - v173) > v39) | (2 * ((v51 > v148) | (2 * (v54 > (float)(v149 - v173))))))));
LABEL_80:
    v146 = v174;
  }
  v150 = (float)(v132 * v165) - (float)(v133 * v171);
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v150) & _xmm) >= 0.001 )
  {
    v151 = (float)((float)((float)(v180 - v39) * v171) - (float)((float)(v146 - v51) * v165)) / v150;
    if ( v66 <= v151 && v151 <= 1.00001 )
    {
      v152 = (float)(v132 * v151) + v146;
      v153 = (float)(v133 * v151) + v180;
      Scaleform::Render::Scale9GridTess::addVertices(
        this,
        &ver,
        &toUV,
        v152,
        v153,
        ((float)(v152 + v169) > v52) | (2 * ((v153 > v39) | (2 * ((2 * (v54 > v153)) | (v51 > (float)(v152 + v169)))))),
        ((float)(v152 - v169) > v52) | (2 * ((v153 > v39) | (2 * ((2 * (v54 > v153)) | (v51 > (float)(v152 - v169)))))));
    }
  }
  Scaleform::Render::Scale9GridTess::addCorner(this, &ver, &src, v51, v54, &toUV, 0, 4u, 0xCu, 8u);
  v154 = 1;
  Scaleform::Render::Scale9GridTess::addCorner(this, &ver, &src, v52, v54, &toUV, 1u, 0, 8u, 9u);
  Scaleform::Render::Scale9GridTess::addCorner(this, &ver, &src, v52, v39, &toUV, 3u, 2u, 0, 1u);
  Scaleform::Render::Scale9GridTess::addCorner(this, &ver, &src, v51, v39, &toUV, 2u, 6u, 4u, 0);
  Scaleform::Alg::QuickSortSliced<Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2>,bool (*)(Scaleform::Render::Scale9GridTess::TmpVertexType const &,Scaleform::Render::Scale9GridTess::TmpVertexType const &)>(
    &ver,
    0i64,
    ver.Size,
    Scaleform::Render::Scale9GridTess::cmpCodes);
  Size = ver.Size;
  v156 = 0;
  if ( ver.Size > 1 )
  {
    Data = ver.Data;
    v158 = 1i64;
    do
    {
      if ( Data[v158].AreaCode != Data[v156].AreaCode )
      {
        Scaleform::Render::Scale9GridTess::tessellateArea(this, &ver, v156, v154);
        Data = ver.Data;
        v156 = v154;
        Size = ver.Size;
      }
      v158 = ++v154;
    }
    while ( v154 < Size );
  }
  Scaleform::Render::Scale9GridTess::tessellateArea(this, &ver, v156, v154);
  if ( this->VerCount )
  {
    do
      Scaleform::Render::Scale9GridTess::transformVertex(this, s9g, &this->Vertices[v6++]);
    while ( v6 < this->VerCount );
  }
  if ( ver.Data != ver.Static )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::Render::Scale9GridInfo::AdjustBounds(
        Scaleform::Render::Scale9GridInfo *this,
        Scaleform::Render::Rect<float> *result,
        const Scaleform::Render::Rect<float> *bounds)
{
  float x1; // xmm2_4
  float x2; // xmm0_4
  Scaleform::Render::Rect<float> *v7; // rax
  float v8; // xmm4_4
  float v9; // xmm5_4
  float v10; // xmm1_4
  float v11; // xmm7_4
  float v12; // [rsp+20h] [rbp-60h] BYREF
  float v13; // [rsp+24h] [rbp-5Ch] BYREF
  float y; // [rsp+28h] [rbp-58h] BYREF
  float y2; // [rsp+2Ch] [rbp-54h] BYREF
  float v16[4]; // [rsp+30h] [rbp-50h] BYREF
  float x; // [rsp+A8h] [rbp+28h] BYREF
  float v18; // [rsp+B0h] [rbp+30h] BYREF
  float v19; // [rsp+B8h] [rbp+38h] BYREF

  x1 = bounds->x1;
  x2 = bounds->x2;
  y = bounds->y1;
  v13 = y;
  y2 = bounds->y2;
  v16[0] = y2;
  x = x1;
  v18 = x2;
  v19 = x2;
  v12 = x1;
  Scaleform::Render::Scale9GridInfo::Transform(this, &x, &y);
  Scaleform::Render::Scale9GridInfo::Transform(this, &v18, &v13);
  Scaleform::Render::Scale9GridInfo::Transform(this, &v19, &y2);
  Scaleform::Render::Scale9GridInfo::Transform(this, &v12, v16);
  v7 = result;
  v8 = v16[0];
  v9 = fmaxf(y2, fmaxf(v13, y));
  v10 = fminf(y2, fminf(v13, y));
  v11 = fmaxf(v12, fmaxf(v19, fmaxf(v18, x)));
  result->x1 = fminf(v12, fminf(v19, fminf(v18, x)));
  result->x2 = v11;
  result->y2 = fmaxf(v8, v9);
  result->y1 = fminf(v8, v10);
  return v7;
}

void __fastcall Scaleform::Render::Scale9GridInfo::Compute(Scaleform::Render::Scale9GridInfo *this)
{
  float x2; // xmm1_4
  float y2; // xmm2_4
  float y1; // xmm6_4
  float v5; // xmm7_4
  float v6; // xmm8_4
  float v7; // xmm9_4
  float v8; // xmm10_4
  float x1; // xmm11_4
  float v10; // xmm14_4
  float v11; // xmm3_4
  float v12; // xmm12_4
  float v13; // xmm15_4
  float v14; // xmm2_4
  float v15; // xmm14_4
  float v16; // xmm0_4
  float v17; // xmm14_4
  float v18; // xmm12_4
  float v19; // xmm0_4
  float v20; // xmm12_4
  float v21; // xmm13_4
  float v22; // xmm0_4
  float v23; // xmm15_4
  float v24; // xmm0_4
  float v25; // xmm3_4
  float v26; // xmm0_4
  float v27; // xmm2_4
  float v28; // xmm1_4
  float v29; // xmm15_4
  float v30; // xmm0_4
  float v31; // xmm9_4
  float v32; // xmm2_4
  float v33; // xmm1_4
  float v34; // xmm1_4
  float v35; // xmm7_4
  float v36; // xmm5_4
  float v37; // xmm13_4
  float v38; // xmm10_4
  int v39; // xmm0_4
  float v40; // xmm12_4
  int v41; // xmm11_4
  float v42; // xmm3_4
  int v43; // xmm14_4
  float v44; // xmm8_4
  float v45; // xmm4_4
  float v46; // xmm6_4
  int v47; // xmm9_4
  float v48; // xmm6_4
  int v49; // xmm2_4
  int v50; // xmm7_4
  float v51; // xmm1_4
  float v52; // xmm15_4
  int v53; // xmm14_4
  int v54; // xmm13_4
  float v55; // xmm10_4
  int v56; // xmm13_4
  float v57; // xmm10_4
  float v58; // xmm12_4
  float v59; // xmm8_4
  float v60; // xmm6_4
  int v61; // xmm8_4
  float v62; // xmm6_4
  int v63; // xmm9_4
  int v64; // xmm7_4
  float v65; // xmm10_4
  float v66; // xmm14_4
  float v67; // xmm11_4
  float dst; // [rsp+28h] [rbp-E0h] BYREF
  float v69; // [rsp+2Ch] [rbp-DCh]
  float v70; // [rsp+30h] [rbp-D8h]
  float v71; // [rsp+34h] [rbp-D4h]
  float v72; // [rsp+38h] [rbp-D0h]
  float v73; // [rsp+3Ch] [rbp-CCh]
  float src; // [rsp+40h] [rbp-C8h] BYREF
  int v75; // [rsp+44h] [rbp-C4h]
  int v76; // [rsp+48h] [rbp-C0h]
  int v77; // [rsp+4Ch] [rbp-BCh]
  int v78; // [rsp+50h] [rbp-B8h]
  float v79; // [rsp+54h] [rbp-B4h]
  float v80; // [rsp+58h] [rbp-B0h]
  float v81; // [rsp+5Ch] [rbp-ACh]
  float v82; // [rsp+60h] [rbp-A8h]
  float v83; // [rsp+64h] [rbp-A4h]
  float v84; // [rsp+68h] [rbp-A0h]
  float v85; // [rsp+6Ch] [rbp-9Ch]
  float v86; // [rsp+70h] [rbp-98h]
  float v87; // [rsp+74h] [rbp-94h]
  float v88; // [rsp+78h] [rbp-90h]
  int v89; // [rsp+7Ch] [rbp-8Ch]
  int v90; // [rsp+80h] [rbp-88h]
  float v91; // [rsp+84h] [rbp-84h]
  float v92; // [rsp+88h] [rbp-80h]
  float v93; // [rsp+8Ch] [rbp-7Ch]
  float v94; // [rsp+90h] [rbp-78h]
  float v95; // [rsp+94h] [rbp-74h]
  float v96; // [rsp+98h] [rbp-70h]
  float v97; // [rsp+9Ch] [rbp-6Ch]
  float v98; // [rsp+A0h] [rbp-68h]
  float v99; // [rsp+A4h] [rbp-64h]
  float v100; // [rsp+A8h] [rbp-60h]
  float v101; // [rsp+ACh] [rbp-5Ch]
  float v102; // [rsp+B0h] [rbp-58h]
  float v103; // [rsp+B4h] [rbp-54h]
  float v104; // [rsp+B8h] [rbp-50h]
  float v105; // [rsp+BCh] [rbp-4Ch]
  int v106; // [rsp+188h] [rbp+80h]
  int v107; // [rsp+190h] [rbp+88h]
  int v108; // [rsp+198h] [rbp+90h]
  int v109; // [rsp+1A0h] [rbp+98h]

  x2 = this->Scale9.x2;
  y2 = this->Scale9.y2;
  y1 = this->Bounds.y1;
  v5 = this->Bounds.x2;
  v6 = this->Bounds.y2;
  v8 = this->Scale9.y1;
  x1 = this->Scale9.x1;
  v109 = LODWORD(x1);
  *(float *)&v107 = v8;
  *(float *)&v106 = x2;
  *(float *)&v108 = y2;
  v84 = this->Bounds.x1;
  v7 = v84;
  *(float *)&v89 = y1;
  *(float *)&v90 = v5;
  v97 = v6;
  if ( v84 >= x1 )
  {
    v7 = x1 - 0.89999998;
    v84 = x1 - 0.89999998;
  }
  if ( y1 >= v8 )
  {
    y1 = v8 - 0.89999998;
    *(float *)&v89 = v8 - 0.89999998;
  }
  if ( x2 >= v5 )
  {
    v5 = x1 + 0.89999998;
    *(float *)&v90 = x1 + 0.89999998;
  }
  if ( y2 >= v6 )
  {
    v6 = v8 + 0.89999998;
    v97 = v8 + 0.89999998;
  }
  v10 = y1 * this->S9gMatrix.M[0][1];
  v11 = v6 * this->S9gMatrix.M[0][1];
  v12 = v5 * this->S9gMatrix.M[1][0];
  v13 = v6 * this->S9gMatrix.M[1][1];
  v14 = (float)(y1 * this->S9gMatrix.M[1][1]) + (float)(v7 * this->S9gMatrix.M[1][0]);
  v88 = (float)(v10 + (float)(v7 * this->S9gMatrix.M[0][0])) + this->S9gMatrix.M[0][3];
  v15 = v10 + (float)(v5 * this->S9gMatrix.M[0][0]);
  v16 = y1 * this->S9gMatrix.M[1][1];
  v82 = v14 + this->S9gMatrix.M[1][3];
  v17 = v15 + this->S9gMatrix.M[0][3];
  v18 = v12 + v16;
  v19 = v5 * this->S9gMatrix.M[0][0];
  v99 = v17;
  v20 = v18 + this->S9gMatrix.M[1][3];
  v21 = v11 + v19;
  v22 = v5 * this->S9gMatrix.M[1][0];
  v96 = v20;
  v23 = v13 + v22;
  v24 = v7 * this->S9gMatrix.M[0][0];
  v92 = v21 + this->S9gMatrix.M[0][3];
  v25 = v11 + v24;
  v26 = v7 * this->S9gMatrix.M[1][0];
  v93 = v23 + this->S9gMatrix.M[1][3];
  v91 = v25 + this->S9gMatrix.M[0][3];
  v83 = (float)((float)(v6 * this->S9gMatrix.M[1][1]) + v26) + this->S9gMatrix.M[1][3];
  v80 = v17 - v88;
  v81 = v20 - v82;
  v95 = v93 - v20;
  v94 = v92 - v17;
  v27 = sqrtf((float)((float)(v20 - v82) * (float)(v20 - v82)) + (float)((float)(v17 - v88) * (float)(v17 - v88)));
  v28 = sqrtf((float)((float)(v93 - v20) * (float)(v93 - v20)) + (float)((float)(v92 - v17) * (float)(v92 - v17)));
  if ( v27 == 0.0 )
    v27 = FLOAT_0_001;
  if ( v28 == 0.0 )
    v28 = FLOAT_0_001;
  v29 = (float)(v5 - *(float *)&v106) / v27;
  v30 = (float)(x1 - v7) / v27;
  v31 = (float)(v8 - y1) / v28;
  v86 = v30;
  v85 = v29;
  v32 = (float)(v6 - *(float *)&v108) / v28;
  if ( (float)(v29 + v30) > 1.0 )
  {
    v33 = (float)(v29 + v30) + 0.050000001;
    v30 = v30 / v33;
    v29 = v29 / v33;
    v86 = v30;
    v85 = v29;
  }
  if ( (float)(v32 + v31) > 1.0 )
  {
    v34 = (float)(v32 + v31) + 0.050000001;
    v31 = v31 / v34;
    v32 = v32 / v34;
  }
  v35 = v80 * v30;
  v36 = v81 * v30;
  v37 = (float)(v80 * v30) + v88;
  v38 = (float)(v81 * v30) + v82;
  *(float *)&v39 = v17 - (float)(v80 * v29);
  v80 = v80 * v29;
  v81 = v81 * v29;
  v40 = v20 - v81;
  v98 = *(float *)&v39;
  *(float *)&v41 = v93 - (float)(v95 * v32);
  v42 = (float)(v94 * v31) + v17;
  v95 = (float)(v95 * v31) + v96;
  *(float *)&v43 = v92 - (float)(v94 * v32);
  v102 = *(float *)&v41;
  v44 = (float)((float)(v91 - v88) * v31) + v88;
  v94 = v42;
  v45 = v91 - (float)((float)(v91 - v88) * v32);
  v101 = *(float *)&v43;
  v46 = (float)(v83 - v82) * v31;
  *(float *)&v47 = v42 - v80;
  v48 = v46 + v82;
  *(float *)&v49 = v83 - (float)((float)(v83 - v82) * v32);
  v103 = v45;
  v87 = v35 + v44;
  *(float *)&v50 = v95 - v81;
  v104 = *(float *)&v49;
  v80 = (float)(v92 - v91) * v29;
  v100 = v36 + v48;
  v81 = *(float *)&v43 - v80;
  v105 = (float)(v93 - v83) * v85;
  v51 = v86;
  v85 = *(float *)&v41 - v105;
  v86 = (float)(v92 - v91) * v86;
  v52 = (float)(v93 - v83) * v51;
  *(float *)&v53 = v86 + v45;
  dst = v88;
  v69 = v82;
  src = v84;
  v72 = v87;
  v76 = v109;
  v78 = v109;
  v75 = v89;
  v77 = v89;
  v70 = v37;
  v71 = v38;
  v73 = v36 + v48;
  v79 = *(float *)&v107;
  Scaleform::Render::Matrix2x4<float>::SetParlToParl(this->ResultingMatrices, &src, &dst);
  LODWORD(src) = v109;
  v76 = v106;
  v78 = v106;
  dst = v37;
  v54 = v89;
  v69 = v38;
  v55 = v98;
  v79 = *(float *)&v107;
  v70 = v98;
  v71 = v40;
  v72 = *(float *)&v47;
  v73 = *(float *)&v50;
  v75 = v89;
  v77 = v89;
  Scaleform::Render::Matrix2x4<float>::SetParlToParl(&this->ResultingMatrices[1], &src, &dst);
  v70 = v99;
  v71 = v96;
  v75 = v54;
  v77 = v54;
  v56 = v90;
  v76 = v90;
  dst = v55;
  v57 = v95;
  v69 = v40;
  v58 = v94;
  v79 = *(float *)&v107;
  v72 = v94;
  v73 = v95;
  LODWORD(src) = v106;
  v78 = v90;
  Scaleform::Render::Matrix2x4<float>::SetParlToParl(&this->ResultingMatrices[2], &src, &dst);
  dst = v44;
  v59 = v87;
  v69 = v48;
  v60 = v100;
  v70 = v87;
  v71 = v100;
  v72 = *(float *)&v53;
  src = v84;
  v75 = v107;
  v77 = v107;
  v79 = *(float *)&v108;
  v73 = v52 + *(float *)&v49;
  v76 = v109;
  v78 = v109;
  Scaleform::Render::Matrix2x4<float>::SetParlToParl(&this->ResultingMatrices[3], &src, &dst);
  LODWORD(src) = v109;
  v75 = v107;
  v77 = v107;
  dst = v59;
  v61 = LODWORD(v81);
  v69 = v60;
  v62 = v85;
  v79 = *(float *)&v108;
  v70 = *(float *)&v47;
  v71 = *(float *)&v50;
  v72 = v81;
  v73 = v85;
  v76 = v106;
  v78 = v106;
  Scaleform::Render::Matrix2x4<float>::SetParlToParl(&this->ResultingMatrices[4], &src, &dst);
  LODWORD(dst) = v47;
  v63 = LODWORD(v101);
  v69 = *(float *)&v50;
  *(float *)&v64 = v102;
  v70 = v58;
  v71 = v57;
  v72 = v101;
  v73 = v102;
  LODWORD(src) = v106;
  v75 = v107;
  v77 = v107;
  v79 = *(float *)&v108;
  v76 = v56;
  v78 = v56;
  Scaleform::Render::Matrix2x4<float>::SetParlToParl(&this->ResultingMatrices[5], &src, &dst);
  dst = v103;
  v69 = v104;
  v73 = v52 + v83;
  v75 = v108;
  v77 = v108;
  v65 = v97;
  v72 = v86 + v91;
  src = v84;
  v70 = *(float *)&v53;
  v71 = v52 + *(float *)&v49;
  v76 = v109;
  v78 = v109;
  v79 = v97;
  Scaleform::Render::Matrix2x4<float>::SetParlToParl(&this->ResultingMatrices[6], &src, &dst);
  LODWORD(dst) = v53;
  v66 = v93;
  v69 = v52 + *(float *)&v49;
  v67 = v92;
  v70 = *(float *)&v61;
  v71 = v62;
  v73 = v93 - v105;
  v75 = v108;
  v72 = v92 - v80;
  v76 = v106;
  v77 = v108;
  v78 = v106;
  LODWORD(src) = v109;
  v79 = v65;
  Scaleform::Render::Matrix2x4<float>::SetParlToParl(&this->ResultingMatrices[7], &src, &dst);
  v69 = v62;
  v71 = *(float *)&v64;
  LODWORD(src) = v106;
  v75 = v108;
  v77 = v108;
  LODWORD(dst) = v61;
  v70 = *(float *)&v63;
  v72 = v67;
  v73 = v66;
  v76 = v56;
  v78 = v56;
  v79 = v65;
  Scaleform::Render::Matrix2x4<float>::SetParlToParl(&this->ResultingMatrices[8], &src, &dst);
  LODWORD(this->ResultingGrid.x1) = v109;
  this->ResultingGrid.y1 = *(float *)&v107;
  this->ResultingGrid.x2 = *(float *)&v106;
  this->ResultingGrid.y2 = *(float *)&v108;
}

float __fastcall Scaleform::Render::Scale9GridInfo::GetScale(Scaleform::Render::Scale9GridInfo *this)
{
  float v2; // xmm2_4
  float v3; // xmm0_4
  float v4; // xmm2_4
  float v5; // xmm6_4
  float v6; // xmm2_4
  float v7; // xmm6_4
  float v8; // xmm2_4
  float v9; // xmm6_4
  float v10; // xmm2_4
  float v11; // xmm6_4
  float v12; // xmm2_4
  float v13; // xmm6_4
  float v14; // xmm2_4
  float v15; // xmm6_4
  float v16; // xmm2_4
  float v17; // xmm6_4
  float v18; // xmm2_4

  v2 = (float)(this->ResultingMatrices[0].M[0][1] * 0.70710677)
     + (float)(this->ResultingMatrices[0].M[0][0] * 0.70710677);
  v3 = sqrtf(
         (float)((float)((float)(this->ResultingMatrices[0].M[1][1] * 0.70710677)
                       + (float)(this->ResultingMatrices[0].M[1][0] * 0.70710677))
               * (float)((float)(this->ResultingMatrices[0].M[1][1] * 0.70710677)
                       + (float)(this->ResultingMatrices[0].M[1][0] * 0.70710677)))
       + (float)(v2 * v2));
  v4 = (float)(this->ResultingMatrices[1].M[0][1] * 0.70710677)
     + (float)(this->ResultingMatrices[1].M[0][0] * 0.70710677);
  v5 = (float)(v3 + 0.0)
     + sqrtf(
         (float)((float)((float)(this->ResultingMatrices[1].M[1][1] * 0.70710677)
                       + (float)(this->ResultingMatrices[1].M[1][0] * 0.70710677))
               * (float)((float)(this->ResultingMatrices[1].M[1][1] * 0.70710677)
                       + (float)(this->ResultingMatrices[1].M[1][0] * 0.70710677)))
       + (float)(v4 * v4));
  v6 = (float)(this->ResultingMatrices[2].M[0][1] * 0.70710677)
     + (float)(this->ResultingMatrices[2].M[0][0] * 0.70710677);
  v7 = v5
     + sqrtf(
         (float)((float)((float)(this->ResultingMatrices[2].M[1][1] * 0.70710677)
                       + (float)(this->ResultingMatrices[2].M[1][0] * 0.70710677))
               * (float)((float)(this->ResultingMatrices[2].M[1][1] * 0.70710677)
                       + (float)(this->ResultingMatrices[2].M[1][0] * 0.70710677)))
       + (float)(v6 * v6));
  v8 = (float)(this->ResultingMatrices[3].M[0][1] * 0.70710677)
     + (float)(this->ResultingMatrices[3].M[0][0] * 0.70710677);
  v9 = v7
     + sqrtf(
         (float)((float)((float)(this->ResultingMatrices[3].M[1][1] * 0.70710677)
                       + (float)(this->ResultingMatrices[3].M[1][0] * 0.70710677))
               * (float)((float)(this->ResultingMatrices[3].M[1][1] * 0.70710677)
                       + (float)(this->ResultingMatrices[3].M[1][0] * 0.70710677)))
       + (float)(v8 * v8));
  v10 = (float)(this->ResultingMatrices[4].M[0][1] * 0.70710677)
      + (float)(this->ResultingMatrices[4].M[0][0] * 0.70710677);
  v11 = v9
      + sqrtf(
          (float)((float)((float)(this->ResultingMatrices[4].M[1][1] * 0.70710677)
                        + (float)(this->ResultingMatrices[4].M[1][0] * 0.70710677))
                * (float)((float)(this->ResultingMatrices[4].M[1][1] * 0.70710677)
                        + (float)(this->ResultingMatrices[4].M[1][0] * 0.70710677)))
        + (float)(v10 * v10));
  v12 = (float)(this->ResultingMatrices[5].M[0][1] * 0.70710677)
      + (float)(this->ResultingMatrices[5].M[0][0] * 0.70710677);
  v13 = v11
      + sqrtf(
          (float)((float)((float)(this->ResultingMatrices[5].M[1][1] * 0.70710677)
                        + (float)(this->ResultingMatrices[5].M[1][0] * 0.70710677))
                * (float)((float)(this->ResultingMatrices[5].M[1][1] * 0.70710677)
                        + (float)(this->ResultingMatrices[5].M[1][0] * 0.70710677)))
        + (float)(v12 * v12));
  v14 = (float)(this->ResultingMatrices[6].M[0][1] * 0.70710677)
      + (float)(this->ResultingMatrices[6].M[0][0] * 0.70710677);
  v15 = v13
      + sqrtf(
          (float)((float)((float)(this->ResultingMatrices[6].M[1][1] * 0.70710677)
                        + (float)(this->ResultingMatrices[6].M[1][0] * 0.70710677))
                * (float)((float)(this->ResultingMatrices[6].M[1][1] * 0.70710677)
                        + (float)(this->ResultingMatrices[6].M[1][0] * 0.70710677)))
        + (float)(v14 * v14));
  v16 = (float)(this->ResultingMatrices[7].M[0][1] * 0.70710677)
      + (float)(this->ResultingMatrices[7].M[0][0] * 0.70710677);
  v17 = v15
      + sqrtf(
          (float)((float)((float)(this->ResultingMatrices[7].M[1][1] * 0.70710677)
                        + (float)(this->ResultingMatrices[7].M[1][0] * 0.70710677))
                * (float)((float)(this->ResultingMatrices[7].M[1][1] * 0.70710677)
                        + (float)(this->ResultingMatrices[7].M[1][0] * 0.70710677)))
        + (float)(v16 * v16));
  v18 = (float)(this->ResultingMatrices[8].M[0][1] * 0.70710677)
      + (float)(this->ResultingMatrices[8].M[0][0] * 0.70710677);
  return (float)(v17
               + sqrtf(
                   (float)((float)((float)(this->ResultingMatrices[8].M[1][1] * 0.70710677)
                                 + (float)(this->ResultingMatrices[8].M[1][0] * 0.70710677))
                         * (float)((float)(this->ResultingMatrices[8].M[1][1] * 0.70710677)
                                 + (float)(this->ResultingMatrices[8].M[1][0] * 0.70710677)))
                 + (float)(v18 * v18)))
       / 9.0;
}

float __fastcall Scaleform::Render::Scale9GridInfo::GetXScale(Scaleform::Render::Scale9GridInfo *this)
{
  float v2; // xmm0_4
  float v3; // xmm6_4

  v2 = sqrtf(
         (float)(this->ResultingMatrices[0].M[0][0] * this->ResultingMatrices[0].M[0][0])
       + (float)(this->ResultingMatrices[0].M[1][0] * this->ResultingMatrices[0].M[1][0]));
  v3 = (float)(v2 + 0.0)
     + sqrtf(
         (float)(this->ResultingMatrices[1].M[1][0] * this->ResultingMatrices[1].M[1][0])
       + (float)(this->ResultingMatrices[1].M[0][0] * this->ResultingMatrices[1].M[0][0]));
  return (float)(v3
               + sqrtf(
                   (float)(this->ResultingMatrices[2].M[1][0] * this->ResultingMatrices[2].M[1][0])
                 + (float)(this->ResultingMatrices[2].M[0][0] * this->ResultingMatrices[2].M[0][0])))
       / 3.0;
}

float __fastcall Scaleform::Render::Scale9GridInfo::GetYScale(Scaleform::Render::Scale9GridInfo *this)
{
  float *v1; // rbx
  float v2; // xmm6_4
  __int64 v3; // rdi
  float v4; // xmm0_4

  v1 = &this->ResultingMatrices[0].M[0][1];
  v2 = 0.0;
  v3 = 3i64;
  do
  {
    v4 = sqrtf((float)(v1[4] * v1[4]) + (float)(*v1 * *v1));
    v1 += 24;
    v2 = v2 + v4;
    --v3;
  }
  while ( v3 );
  return v2 / 3.0;
}

void __fastcall Scaleform::Render::Scale9GridData::MakeMeshKey(Scaleform::Render::Scale9GridData *this, float *keyData)
{
  *(Scaleform::Render::Rect<float> *)keyData = this->S9Rect;
  *((Scaleform::Render::Rect<float> *)keyData + 1) = this->Bounds;
  Scaleform::Render::MeshKey::CalcMatrixKey(&this->ViewMtx, keyData + 8, 0i64);
  keyData[11] = this->ShapeMtx.M[0][3];
  Scaleform::Render::MeshKey::CalcMatrixKey(&this->Scale9Mtx, keyData + 12, 0i64);
  keyData[15] = this->ShapeMtx.M[1][3];
}

void __fastcall Scaleform::ArrayStaticBuffPOD<unsigned short,72,2>::PushBack(
        Scaleform::ArrayStaticBuffPOD<unsigned short,72,2> *this,
        const unsigned __int16 *val)
{
  unsigned __int64 Size; // rcx
  unsigned __int64 Reserved; // r8
  Scaleform::MemoryHeap *pHeap; // rcx
  unsigned __int64 v7; // r8
  unsigned __int16 *v8; // rax
  __int128 v9; // xmm0
  unsigned __int16 *Data; // rdx
  unsigned __int64 v11; // r8

  Size = this->Size;
  if ( Size >= 0x48 )
  {
    Reserved = this->Reserved;
    if ( Size == 72 )
    {
      pHeap = this->pHeap;
      v7 = 2 * Reserved;
      this->Reserved = v7;
      if ( pHeap )
        v8 = (unsigned __int16 *)pHeap->Alloc(pHeap, 2 * v7, 0i64);
      else
        v8 = (unsigned __int16 *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                   Scaleform::Memory::pGlobalHeap,
                                   this,
                                   2 * v7,
                                   0i64);
      v9 = *(_OWORD *)this->Static;
      this->Data = v8;
      *(_OWORD *)v8 = v9;
      *((_OWORD *)v8 + 1) = *(_OWORD *)&this->Static[8];
      *((_OWORD *)v8 + 2) = *(_OWORD *)&this->Static[16];
      *((_OWORD *)v8 + 3) = *(_OWORD *)&this->Static[24];
      *((_OWORD *)v8 + 4) = *(_OWORD *)&this->Static[32];
      *((_OWORD *)v8 + 5) = *(_OWORD *)&this->Static[40];
      *((_OWORD *)v8 + 6) = *(_OWORD *)&this->Static[48];
      *((_OWORD *)v8 + 7) = *(_OWORD *)&this->Static[56];
      *((_OWORD *)v8 + 8) = *(_OWORD *)&this->Static[64];
    }
    else if ( Size >= Reserved )
    {
      Data = this->Data;
      v11 = 2 * Reserved;
      this->Reserved = v11;
      this->Data = (unsigned __int16 *)Scaleform::Memory::pGlobalHeap->Realloc(
                                         Scaleform::Memory::pGlobalHeap,
                                         Data,
                                         2 * v11);
    }
    this->Data[this->Size++] = *val;
  }
  else
  {
    this->Static[Size] = *val;
    ++this->Size;
  }
}

void __fastcall Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2>::PushBack(
        Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2> *this,
        const Scaleform::Render::Scale9GridTess::TmpVertexType *val)
{
  unsigned __int64 Size; // rax
  unsigned __int64 v5; // rdx
  Scaleform::MemoryHeap *pHeap; // rcx
  Scaleform::Render::Scale9GridTess::TmpVertexType *v7; // rax
  Scaleform::Render::Scale9GridTess::TmpVertexType *Static; // rcx
  __int64 v9; // rdx
  __int128 v10; // xmm0
  unsigned __int64 Reserved; // rcx
  Scaleform::Render::Scale9GridTess::TmpVertexType *Data; // rdx
  unsigned __int64 v13; // rcx
  Scaleform::Render::Scale9GridTess::TmpVertexType *v14; // rax

  Size = this->Size;
  if ( Size >= 0x48 )
  {
    if ( Size == 72 )
    {
      v5 = 2 * this->Reserved;
      this->Reserved = v5;
      pHeap = this->pHeap;
      if ( pHeap )
        v7 = (Scaleform::Render::Scale9GridTess::TmpVertexType *)pHeap->Alloc(pHeap, 12 * v5, 0i64);
      else
        v7 = (Scaleform::Render::Scale9GridTess::TmpVertexType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                                   Scaleform::Memory::pGlobalHeap,
                                                                   this,
                                                                   12 * v5,
                                                                   0i64);
      this->Data = v7;
      Static = this->Static;
      v9 = 6i64;
      do
      {
        v7 = (Scaleform::Render::Scale9GridTess::TmpVertexType *)((char *)v7 + 128);
        v10 = *(_OWORD *)&Static->AreaCode;
        Static = (Scaleform::Render::Scale9GridTess::TmpVertexType *)((char *)Static + 128);
        *(_OWORD *)&v7[-11].VerIdx = v10;
        *(_OWORD *)&v7[-10].Slope = *(_OWORD *)&Static[-10].Slope;
        *(_OWORD *)&v7[-8].AreaCode = *(_OWORD *)&Static[-8].AreaCode;
        *(_OWORD *)&v7[-7].VerIdx = *(_OWORD *)&Static[-7].VerIdx;
        *(_OWORD *)&v7[-6].Slope = *(_OWORD *)&Static[-6].Slope;
        *(_OWORD *)&v7[-4].AreaCode = *(_OWORD *)&Static[-4].AreaCode;
        *(_OWORD *)&v7[-3].VerIdx = *(_OWORD *)&Static[-3].VerIdx;
        *(_OWORD *)&v7[-2].Slope = *(_OWORD *)&Static[-2].Slope;
        --v9;
      }
      while ( v9 );
      *(_OWORD *)&v7->AreaCode = *(_OWORD *)&Static->AreaCode;
      *(_OWORD *)&v7[1].VerIdx = *(_OWORD *)&Static[1].VerIdx;
      *(_OWORD *)&v7[2].Slope = *(_OWORD *)&Static[2].Slope;
      *(_OWORD *)&v7[4].AreaCode = *(_OWORD *)&Static[4].AreaCode;
      *(_OWORD *)&v7[5].VerIdx = *(_OWORD *)&Static[5].VerIdx;
      *(_OWORD *)&v7[6].Slope = *(_OWORD *)&Static[6].Slope;
    }
    else
    {
      Reserved = this->Reserved;
      if ( Size >= Reserved )
      {
        Data = this->Data;
        this->Reserved = 2 * Reserved;
        this->Data = (Scaleform::Render::Scale9GridTess::TmpVertexType *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                                           Scaleform::Memory::pGlobalHeap,
                                                                           Data,
                                                                           24 * Reserved);
      }
    }
    v13 = this->Size;
    v14 = this->Data;
    *(_QWORD *)&v14[v13].AreaCode = *(_QWORD *)&val->AreaCode;
    v14[v13].Slope = val->Slope;
    ++this->Size;
  }
  else
  {
    this->Static[Size] = *val;
    ++this->Size;
  }
}

__int64 __fastcall Scaleform::Render::Scale9GridInfo::Transform(
        Scaleform::Render::Scale9GridInfo *this,
        float *x,
        float *y)
{
  float v3; // xmm2_4
  float v5; // xmm3_4
  float v7; // xmm3_4
  int v8; // ecx
  float v9; // xmm2_4
  int v10; // edx
  int v11; // eax
  int v12; // edx
  __int64 v13; // rdx
  __int64 result; // rax
  float *v15; // rcx
  float v16; // xmm3_4
  float v17; // xmm2_4

  v3 = *x;
  v5 = *y;
  *x = (float)((float)(*y * this->ShapeMatrix.M[0][1]) + (float)(*x * this->ShapeMatrix.M[0][0]))
     + this->ShapeMatrix.M[0][3];
  v7 = (float)((float)(v5 * this->ShapeMatrix.M[1][1]) + (float)(v3 * this->ShapeMatrix.M[1][0]))
     + this->ShapeMatrix.M[1][3];
  v8 = 0;
  *y = v7;
  v9 = *x;
  v10 = 0;
  if ( v7 > this->ResultingGrid.y2 )
    v10 = 2;
  v11 = 0;
  if ( this->ResultingGrid.y1 > v7 )
    v11 = 8;
  v12 = (v9 > this->ResultingGrid.x2) | v11 | v10;
  if ( this->ResultingGrid.x1 > v9 )
    v8 = 4;
  v13 = v8 | (unsigned int)v12;
  result = (unsigned int)v13;
  v15 = (float *)&this->ResultingMatrices[codeToMtx[v13]];
  *x = (float)((float)(v7 * v15[1]) + (float)(v9 * *v15)) + v15[3];
  v16 = (float)((float)(v7 * v15[5]) + (float)(v9 * v15[4])) + v15[7];
  *y = v16;
  v17 = *x;
  *x = (float)((float)(v16 * this->InverseMatrix.M[0][1]) + (float)(*x * this->InverseMatrix.M[0][0]))
     + this->InverseMatrix.M[0][3];
  *y = (float)((float)(v16 * this->InverseMatrix.M[1][1]) + (float)(v17 * this->InverseMatrix.M[1][0]))
     + this->InverseMatrix.M[1][3];
  return result;
}

void __fastcall Scaleform::Render::Scale9GridTess::addCorner(
        Scaleform::Render::Scale9GridTess *this,
        Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2> *ver,
        const float *c,
        float x,
        float y,
        const Scaleform::Render::Matrix2x4<float> *toUV,
        unsigned int code1,
        unsigned int code2,
        unsigned int code3,
        unsigned int code4)
{
  float v10; // xmm2_4
  float v11; // xmm4_4
  float v13; // xmm5_4
  float v14; // xmm0_4
  float v17; // xmm3_4
  float v18; // xmm10_4
  float v19; // xmm7_4
  float v20; // xmm0_4
  float v21; // xmm2_4
  float v22; // xmm10_4
  float v23; // xmm1_4
  float v24; // xmm4_4
  float v25; // xmm7_4
  float v26; // xmm6_4
  float v27; // xmm1_4
  bool v28; // r8
  char v29; // dl
  char v30; // cl
  float v31; // xmm0_4
  float v32; // xmm7_4
  float v33; // xmm6_4
  float v34; // xmm7_4
  float v35; // xmm0_4
  float v36; // xmm7_4
  float v37; // xmm6_4
  float *p_x; // rax
  Scaleform::Render::Scale9GridTess::TmpVertexType val; // [rsp+20h] [rbp-A8h] BYREF
  Scaleform::Render::Scale9GridTess::TmpVertexType v40; // [rsp+30h] [rbp-98h] BYREF
  Scaleform::Render::Scale9GridTess::TmpVertexType v41; // [rsp+40h] [rbp-88h] BYREF
  Scaleform::Render::Scale9GridTess::TmpVertexType v42; // [rsp+50h] [rbp-78h] BYREF

  v10 = c[3];
  v11 = c[2];
  v13 = c[4];
  v14 = x - v11;
  v17 = c[5];
  v18 = (float)(v10 - c[1]) * v14;
  v19 = v17 - v10;
  v20 = y - v10;
  v21 = c[7];
  v22 = v18 - (float)((float)(v11 - *c) * v20);
  v23 = v13 - v11;
  v24 = c[6];
  v25 = (float)(v19 * (float)(x - v13)) - (float)(v23 * (float)(y - v17));
  v26 = (float)((float)(v21 - v17) * (float)(x - v24)) - (float)((float)(v24 - v13) * (float)(y - v21));
  v27 = (float)((float)(c[1] - v21) * (float)(x - *c)) - (float)((float)(*c - v24) * (float)(y - c[1]));
  v28 = v26 <= 0.0;
  v29 = v25 >= 0.0;
  v30 = v26 >= 0.0;
  if ( v22 <= 0.0 == v25 <= 0.0 && v25 <= 0.0 == v28 && v28 == v27 <= 0.0
    || v22 >= 0.0 == v29 && v29 == v30 && v30 == v27 >= 0.0 )
  {
    val.VerIdx = this->VerCount;
    v40.VerIdx = val.VerIdx;
    v31 = x * toUV->M[0][0];
    v41.VerIdx = val.VerIdx;
    v32 = y * toUV->M[0][1];
    v42.VerIdx = val.VerIdx;
    v33 = x * toUV->M[1][0];
    val.Slope = 0.0;
    v34 = v32 + v31;
    v40.Slope = 0.0;
    v41.Slope = 0.0;
    v35 = y * toUV->M[1][1];
    v42.Slope = 0.0;
    v36 = v34 + toUV->M[0][3];
    v37 = (float)(v33 + v35) + toUV->M[1][3];
    val.AreaCode = code1;
    v40.AreaCode = code2;
    v41.AreaCode = code3;
    v42.AreaCode = code4;
    Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2>::PushBack(ver, &val);
    Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2>::PushBack(ver, &v40);
    Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2>::PushBack(ver, &v41);
    Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2>::PushBack(ver, &v42);
    p_x = &this->Vertices[this->VerCount].x;
    *p_x = x;
    p_x[1] = y;
    p_x[2] = v36;
    p_x[3] = v37;
    ++this->VerCount;
  }
}

void __fastcall Scaleform::Render::Scale9GridTess::addVertices(
        Scaleform::Render::Scale9GridTess *this,
        Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2> *ver,
        const Scaleform::Render::Matrix2x4<float> *toUV,
        float x,
        float y,
        unsigned int code1,
        unsigned int code2)
{
  float v7; // xmm0_4
  unsigned int VerCount; // ecx
  float v11; // xmm6_4
  float v12; // xmm8_4
  float v13; // xmm8_4
  float v14; // xmm0_4
  float v15; // xmm8_4
  float v16; // xmm6_4
  float *p_x; // rax
  Scaleform::Render::Scale9GridTess::TmpVertexType val; // [rsp+20h] [rbp-68h] BYREF
  Scaleform::Render::Scale9GridTess::TmpVertexType v19; // [rsp+30h] [rbp-58h] BYREF

  v7 = x * toUV->M[0][0];
  VerCount = this->VerCount;
  v11 = x * toUV->M[1][0];
  val.AreaCode = code1;
  v12 = y * toUV->M[0][1];
  val.VerIdx = VerCount;
  v19.VerIdx = VerCount;
  v13 = v12 + v7;
  val.Slope = 0.0;
  v19.AreaCode = code2;
  v14 = y * toUV->M[1][1];
  v19.Slope = 0.0;
  v15 = v13 + toUV->M[0][3];
  v16 = (float)(v11 + v14) + toUV->M[1][3];
  Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2>::PushBack(ver, &val);
  Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2>::PushBack(ver, &v19);
  p_x = &this->Vertices[this->VerCount].x;
  *p_x = x;
  p_x[1] = y;
  p_x[2] = v15;
  p_x[3] = v16;
  ++this->VerCount;
}

bool __fastcall Scaleform::Render::Scale9GridTess::cmpCodes(
        const Scaleform::Render::Scale9GridTess::TmpVertexType *a,
        const Scaleform::Render::Scale9GridTess::TmpVertexType *b)
{
  return a->AreaCode < b->AreaCode;
}

bool __fastcall Scaleform::Render::Tessellator::cmpIntersectionY(
        const Scaleform::Render::Tessellator::IntersectionType *a,
        const Scaleform::Render::Tessellator::IntersectionType *b)
{
  return b->y > a->y;
}

void __fastcall Scaleform::Render::Scale9GridTess::tessellateArea(
        Scaleform::Render::Scale9GridTess *this,
        Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2> *ver,
        unsigned int i1,
        unsigned int i2)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v6; // r15
  float v8; // xmm3_4
  float v9; // xmm4_4
  unsigned int v10; // er10
  Scaleform::Render::Scale9GridTess::TmpVertexType *Data; // rdx
  unsigned int v12; // eax
  unsigned int *p_VerIdx; // r9
  unsigned int *v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  float v17; // xmm3_4
  float v18; // xmm4_4
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int *v21; // r8
  __int64 v22; // rax
  unsigned int v23; // er9
  float v24; // xmm3_4
  float v25; // xmm4_4
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // r8
  Scaleform::Render::Scale9GridTess::TmpVertexType *v29; // rdx
  float v30; // xmm5_4
  float v31; // xmm6_4
  float v32; // xmm0_4
  float v33; // xmm2_4
  float v34; // xmm2_4
  Scaleform::Render::Scale9GridTess::TmpVertexType *v35; // rdx
  float v36; // xmm5_4
  float v37; // xmm6_4
  float v38; // xmm0_4
  float v39; // xmm2_4
  float v40; // xmm2_4
  Scaleform::Render::Scale9GridTess::TmpVertexType *v41; // rdx
  float v42; // xmm5_4
  float v43; // xmm6_4
  float v44; // xmm0_4
  float v45; // xmm2_4
  float v46; // xmm2_4
  Scaleform::Render::Scale9GridTess::TmpVertexType *v47; // rdx
  float v48; // xmm5_4
  float v49; // xmm6_4
  float v50; // xmm0_4
  float v51; // xmm2_4
  float v52; // xmm2_4
  __int64 v53; // rcx
  __int64 v54; // rdx
  Scaleform::Render::Scale9GridTess::TmpVertexType *v55; // r8
  float v56; // xmm5_4
  float v57; // xmm6_4
  float v58; // xmm0_4
  float v59; // xmm2_4
  float v60; // xmm2_4
  unsigned __int64 v61; // rsi
  __int64 v62; // rdi
  unsigned __int64 v63; // rbp
  Scaleform::ArrayStaticBuffPOD<unsigned short,72,2> *p_Indices; // rsi
  __int64 v65; // rbx
  unsigned __int16 val; // [rsp+90h] [rbp+18h] BYREF

  v4 = i1;
  v6 = i2;
  if ( i1 + 3 <= i2 )
  {
    v8 = 0.0;
    v9 = 0.0;
    v10 = i1;
    if ( i1 < i2 )
    {
      if ( i2 - i1 >= 4 )
      {
        Data = ver->Data;
        v12 = ((i2 - i1 - 4) >> 2) + 1;
        p_VerIdx = &Data[i1].VerIdx;
        v14 = &Data[i1 + 2].VerIdx;
        v15 = v12;
        v10 = v4 + 4 * v12;
        do
        {
          v16 = *p_VerIdx;
          p_VerIdx += 12;
          v16 *= 2i64;
          v17 = (float)((float)(v8 + *(&this->Vertices[0].x + 2 * v16)) + this->Vertices[*(v14 - 3)].x)
              + this->Vertices[*v14].x;
          v18 = (float)((float)(v9 + *(&this->Vertices[0].y + 2 * v16)) + this->Vertices[*(v14 - 3)].y)
              + this->Vertices[*v14].y;
          v19 = v14[3];
          v14 += 12;
          v19 *= 2i64;
          v8 = v17 + *(&this->Vertices[0].x + 2 * v19);
          v9 = v18 + *(&this->Vertices[0].y + 2 * v19);
          --v15;
        }
        while ( v15 );
      }
      if ( v10 < (unsigned int)v6 )
      {
        v20 = (unsigned int)v6 - v10;
        v21 = &ver->Data->VerIdx + 2 * v10 + v10;
        do
        {
          v22 = *v21;
          v21 += 3;
          v22 *= 2i64;
          v8 = v8 + *(&this->Vertices[0].x + 2 * v22);
          v9 = v9 + *(&this->Vertices[0].y + 2 * v22);
          --v20;
        }
        while ( v20 );
      }
    }
    v23 = v4;
    v24 = v8 / (float)((int)v6 - (int)v4);
    v25 = v9 / (float)((int)v6 - (int)v4);
    if ( (unsigned int)v4 < (unsigned int)v6 )
    {
      if ( (unsigned int)(v6 - v4) >= 4 )
      {
        v26 = v4;
        v27 = ((unsigned int)(v6 - v4 - 4) >> 2) + 1;
        v28 = v27;
        v23 = v4 + 4 * v27;
        do
        {
          v29 = ver->Data;
          v30 = this->Vertices[v29[v26].VerIdx].x - v24;
          v31 = this->Vertices[v29[v26].VerIdx].y - v25;
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
          v29[v26].Slope = v33;
          v35 = ver->Data;
          v36 = this->Vertices[v35[v26 + 1].VerIdx].x - v24;
          v37 = this->Vertices[v35[v26 + 1].VerIdx].y - v25;
          v38 = (float)((float)(v37 * v37) + (float)(v36 * v36)) + (float)((float)(v37 * v37) + (float)(v36 * v36));
          if ( v38 == 0.0 )
          {
            v39 = 0.0;
          }
          else
          {
            v40 = (float)(v36 * v36) / v38;
            if ( v36 < 0.0 )
              LODWORD(v40) ^= _xmm;
            if ( v37 > 0.0 )
              v40 = 1.0 - v40;
            v39 = v40 - 0.5;
          }
          v35[v26 + 1].Slope = v39;
          v41 = ver->Data;
          v42 = this->Vertices[v41[v26 + 2].VerIdx].x - v24;
          v43 = this->Vertices[v41[v26 + 2].VerIdx].y - v25;
          v44 = (float)((float)(v43 * v43) + (float)(v42 * v42)) + (float)((float)(v43 * v43) + (float)(v42 * v42));
          if ( v44 == 0.0 )
          {
            v45 = 0.0;
          }
          else
          {
            v46 = (float)(v42 * v42) / v44;
            if ( v42 < 0.0 )
              LODWORD(v46) ^= _xmm;
            if ( v43 > 0.0 )
              v46 = 1.0 - v46;
            v45 = v46 - 0.5;
          }
          v41[v26 + 2].Slope = v45;
          v47 = ver->Data;
          v48 = this->Vertices[v47[v26 + 3].VerIdx].x - v24;
          v49 = this->Vertices[v47[v26 + 3].VerIdx].y - v25;
          v50 = (float)((float)(v49 * v49) + (float)(v48 * v48)) + (float)((float)(v49 * v49) + (float)(v48 * v48));
          if ( v50 == 0.0 )
          {
            v51 = 0.0;
          }
          else
          {
            v52 = (float)(v48 * v48) / v50;
            if ( v48 < 0.0 )
              LODWORD(v52) ^= _xmm;
            if ( v49 > 0.0 )
              v52 = 1.0 - v52;
            v51 = v52 - 0.5;
          }
          v47[v26 + 3].Slope = v51;
          v26 += 4i64;
          --v28;
        }
        while ( v28 );
      }
      if ( v23 < (unsigned int)v6 )
      {
        v53 = v23;
        v54 = (unsigned int)v6 - v23;
        do
        {
          v55 = ver->Data;
          v56 = this->Vertices[v55[v53].VerIdx].x - v24;
          v57 = this->Vertices[v55[v53].VerIdx].y - v25;
          v58 = (float)((float)(v57 * v57) + (float)(v56 * v56)) + (float)((float)(v57 * v57) + (float)(v56 * v56));
          if ( v58 == 0.0 )
          {
            v59 = 0.0;
          }
          else
          {
            v60 = (float)(v56 * v56) / v58;
            if ( v56 < 0.0 )
              LODWORD(v60) ^= _xmm;
            if ( v57 > 0.0 )
              v60 = 1.0 - v60;
            v59 = v60 - 0.5;
          }
          v55[v53++].Slope = v59;
          --v54;
        }
        while ( v54 );
      }
    }
    v61 = v4;
    Scaleform::Alg::QuickSortSliced<Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2>,bool (*)(Scaleform::Render::Scale9GridTess::TmpVertexType const &,Scaleform::Render::Scale9GridTess::TmpVertexType const &)>(
      ver,
      v4,
      v6,
      (bool (__fastcall *)(const Scaleform::Render::Scale9GridTess::TmpVertexType *, const Scaleform::Render::Scale9GridTess::TmpVertexType *))Scaleform::Render::Tessellator::cmpIntersectionY);
    v62 = (unsigned int)(v4 + 2);
    if ( (unsigned int)v62 < (unsigned int)v6 )
    {
      v63 = v61;
      p_Indices = &this->Indices;
      v65 = v62;
      do
      {
        val = ver->Data[v63].VerIdx;
        Scaleform::ArrayStaticBuffPOD<unsigned short,72,2>::PushBack(p_Indices, &val);
        val = ver->Data[(unsigned int)(v62 - 1)].VerIdx;
        Scaleform::ArrayStaticBuffPOD<unsigned short,72,2>::PushBack(p_Indices, &val);
        val = ver->Data[v65].VerIdx;
        Scaleform::ArrayStaticBuffPOD<unsigned short,72,2>::PushBack(p_Indices, &val);
        LODWORD(v62) = v62 + 1;
        ++v65;
      }
      while ( (unsigned int)v62 < (unsigned int)v6 );
    }
  }
}

void __fastcall Scaleform::Render::Scale9GridTess::transformVertex(
        Scaleform::Render::Scale9GridTess *this,
        const Scaleform::Render::Scale9GridInfo *s9g,
        Scaleform::Render::Image9GridVertex *v)
{
  float x; // xmm3_4
  __int64 v4; // rcx
  float y; // xmm1_4
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rax
  float *v10; // rax
  float v11; // xmm2_4
  float v12; // xmm3_4

  x = v->x;
  v4 = 0i64;
  y = v->y;
  v6 = 0i64;
  if ( s9g->ResultingGrid.x1 > v->x )
    v6 = 4i64;
  v7 = 0i64;
  if ( y > s9g->ResultingGrid.y2 )
    v7 = 2i64;
  v8 = v7 | v6;
  v9 = 0i64;
  if ( s9g->ResultingGrid.y1 > y )
    v9 = 8i64;
  LOBYTE(v4) = x > s9g->ResultingGrid.x2;
  v10 = (float *)&s9g->ResultingMatrices[codeToMtx_0[v4 | v9 | v8]];
  v->x = (float)((float)(y * v10[1]) + (float)(x * *v10)) + v10[3];
  v->y = (float)((float)(y * v10[5]) + (float)(x * v10[4])) + v10[7];
  v11 = v->x;
  v12 = v->y;
  v->x = (float)((float)(v12 * s9g->InverseMatrix.M[0][1]) + (float)(v->x * s9g->InverseMatrix.M[0][0]))
       + s9g->InverseMatrix.M[0][3];
  v->y = (float)((float)(v12 * s9g->InverseMatrix.M[1][1]) + (float)(v11 * s9g->InverseMatrix.M[1][0]))
       + s9g->InverseMatrix.M[1][3];
}

