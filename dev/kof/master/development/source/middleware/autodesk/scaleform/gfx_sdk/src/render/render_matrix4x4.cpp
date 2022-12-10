#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

void Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(const Scaleform::Render::Matrix4x4<float> & m1, const Scaleform::Render::Matrix4x4<float> & m2); // 0x1403CDD80
void Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(const Scaleform::Render::Matrix4x4<float> & m1, const Scaleform::Render::Matrix3x4<float> & m2); // 0x1403CDEC0
void Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(const Scaleform::Render::Matrix2x4<float> & m1, const Scaleform::Render::Matrix4x4<float> & m2); // 0x1403CE010
void Scaleform::Render::Matrix4x4<float>::EncloseTransformHomogeneous(Scaleform::Render::Rect<float> * pr, const Scaleform::Render::Rect<float> & r); // 0x1403CD9D0
void Scaleform::Render::Matrix4x4<float>::TransformHomogeneousAndScaleCorners(const Scaleform::Render::Rect<float> & bounds, float sx, float sy, float * dest); // 0x1403CE0D0__m128 __fastcall Scaleform::SIMD::SSE::InstructionSet::Constant<1056964608,1056964608,1056964608,1056964608>(
        __m128 *result)
{
  if ( __TSS0__1____Constant__0DPAAAAAA__0DPAAAAAA__0DPAAAAAA__0DPAAAAAA__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 40i64) )
  {
    Init_thread_header(&__TSS0__1____Constant__0DPAAAAAA__0DPAAAAAA__0DPAAAAAA__0DPAAAAAA__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA);
    if ( __TSS0__1____Constant__0DPAAAAAA__0DPAAAAAA__0DPAAAAAA__0DPAAAAAA__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA == -1 )
    {
      `Scaleform::SIMD::SSE::InstructionSet::Constant<1056964608,1056964608,1056964608,1056964608>'::`2'::v = _mm_load_si128((const __m128i *)&_xmm);
      Init_thread_footer(&__TSS0__1____Constant__0DPAAAAAA__0DPAAAAAA__0DPAAAAAA__0DPAAAAAA__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA);
    }
  }
  return (__m128)`Scaleform::SIMD::SSE::InstructionSet::Constant<1056964608,1056964608,1056964608,1056964608>'::`2'::v;
}

__m128 __fastcall Scaleform::SIMD::SSE::InstructionSet::Constant<1065353216,1065353216,1065353216,1065353216>(
        __m128 *result)
{
  if ( __TSS0__1____Constant__0DPIAAAAA__0DPIAAAAA__0DPIAAAAA__0DPIAAAAA__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 40i64) )
  {
    Init_thread_header(&__TSS0__1____Constant__0DPIAAAAA__0DPIAAAAA__0DPIAAAAA__0DPIAAAAA__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA);
    if ( __TSS0__1____Constant__0DPIAAAAA__0DPIAAAAA__0DPIAAAAA__0DPIAAAAA__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA == -1 )
    {
      `Scaleform::SIMD::SSE::InstructionSet::Constant<1065353216,1065353216,1065353216,1065353216>'::`2'::v = _mm_load_si128((const __m128i *)&_xmm);
      Init_thread_footer(&__TSS0__1____Constant__0DPIAAAAA__0DPIAAAAA__0DPIAAAAA__0DPIAAAAA__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA);
    }
  }
  return (__m128)`Scaleform::SIMD::SSE::InstructionSet::Constant<1065353216,1065353216,1065353216,1065353216>'::`2'::v;
}

__m128 __fastcall Scaleform::SIMD::SSE::InstructionSet::Constant<1065353216,3212836864,1065353216,3212836864>(
        __m128 *result)
{
  if ( __TSS0__1____Constant__0DPIAAAAA__0LPIAAAAA__0DPIAAAAA__0LPIAAAAA__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 40i64) )
  {
    Init_thread_header(&__TSS0__1____Constant__0DPIAAAAA__0LPIAAAAA__0DPIAAAAA__0LPIAAAAA__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA);
    if ( __TSS0__1____Constant__0DPIAAAAA__0LPIAAAAA__0DPIAAAAA__0LPIAAAAA__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA == -1 )
    {
      `Scaleform::SIMD::SSE::InstructionSet::Constant<1065353216,3212836864,1065353216,3212836864>'::`2'::v = _mm_load_si128((const __m128i *)&_xmm_bf8000003f800000bf8000003f800000);
      Init_thread_footer(&__TSS0__1____Constant__0DPIAAAAA__0LPIAAAAA__0DPIAAAAA__0LPIAAAAA__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA);
    }
  }
  return (__m128)`Scaleform::SIMD::SSE::InstructionSet::Constant<1065353216,3212836864,1065353216,3212836864>'::`2'::v;
}

void __fastcall Scaleform::Render::Matrix4x4<float>::EncloseTransformHomogeneous(
        Scaleform::Render::Matrix4x4<float> *this,
        Scaleform::Render::Rect<float> *pr,
        const Scaleform::Render::Rect<float> *r)
{
  __m128 v6; // xmm10
  __m128 v7; // xmm9
  __m128 v8; // xmm11
  __m128 v9; // xmm4
  __m128 v10; // xmm5
  __m128 v11; // xmm7
  __m128 v12; // xmm15
  __m128 v13; // xmm1
  __m128 v14; // xmm2
  __m128 v15; // xmm3
  __m128 v16; // xmm4
  __m128 v17; // xmm14
  __m128 v18; // xmm12
  __m128 v19; // xmm13
  __m128 v20; // xmm2
  __m128 v21; // xmm3
  __m128 v22; // xmm13
  __m128 v23; // xmm2
  __m128 v24; // xmm13
  __m128 v25; // xmm1
  __m128 v26; // xmm5
  __m128 v27; // xmm1
  __m128 v28; // xmm6
  __m128 v29; // xmm2
  __m128 v30; // xmm3
  __m128 v31; // xmm6
  __m128 v32; // xmm2
  __m128 v33; // xmm6
  __m128 v34; // xmm1
  __m128 v35; // xmm7
  __m128 v36; // xmm1
  __m128 v37; // xmm5
  __m128 v38; // xmm2
  __m128 v39; // xmm3
  __m128 v40; // xmm5
  __m128 v41; // xmm2
  __m128 v42; // xmm5
  __m128 v43; // xmm1
  __m128 v44; // xmm15
  __m128 v45; // xmm1
  __m128 v46; // xmm4

  if ( __TSS0__1____Constant__0A__0A__0A__0A__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 40i64) )
  {
    Init_thread_header(&__TSS0__1____Constant__0A__0A__0A__0A__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA);
    if ( __TSS0__1____Constant__0A__0A__0A__0A__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA == -1 )
    {
      `Scaleform::SIMD::SSE::InstructionSet::Constant<0,0,0,0>'::`2'::v = 0i64;
      Init_thread_footer(&__TSS0__1____Constant__0A__0A__0A__0A__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA);
    }
  }
  v6 = *(__m128 *)&this->M[2][0];
  v7 = *(__m128 *)&this->M[1][0];
  v8 = *(__m128 *)&this->M[3][0];
  v9 = _mm_shuffle_ps(*(__m128 *)r, (__m128)`Scaleform::SIMD::SSE::InstructionSet::Constant<0,0,0,0>'::`2'::v, 4);
  v10 = _mm_shuffle_ps(*(__m128 *)r, (__m128)`Scaleform::SIMD::SSE::InstructionSet::Constant<0,0,0,0>'::`2'::v, 6);
  v11 = _mm_shuffle_ps(*(__m128 *)r, (__m128)`Scaleform::SIMD::SSE::InstructionSet::Constant<0,0,0,0>'::`2'::v, 14);
  v12 = _mm_shuffle_ps(*(__m128 *)r, (__m128)`Scaleform::SIMD::SSE::InstructionSet::Constant<0,0,0,0>'::`2'::v, 12);
  v13 = _mm_mul_ps(v9, *(__m128 *)&this->M[0][0]);
  v14 = _mm_mul_ps(v9, v7);
  v15 = _mm_mul_ps(v9, v6);
  v16 = _mm_mul_ps(v9, v8);
  v17 = _mm_shuffle_ps(_mm_shuffle_ps(*(__m128 *)&this->M[0][0], v7, 255), _mm_shuffle_ps(v6, v8, 255), 136);
  v18 = _mm_shuffle_ps(v17, v17, 255);
  v19 = _mm_unpacklo_ps(
          _mm_add_ps(
            _mm_add_ps(_mm_shuffle_ps(v13, v13, 85), _mm_shuffle_ps(v13, v13, 0)),
            _mm_shuffle_ps(v13, v13, 170)),
          _mm_add_ps(
            _mm_add_ps(_mm_shuffle_ps(v14, v14, 85), _mm_shuffle_ps(v14, v14, 0)),
            _mm_shuffle_ps(v14, v14, 170)));
  v20 = _mm_add_ps(_mm_add_ps(_mm_shuffle_ps(v15, v15, 85), _mm_shuffle_ps(v15, v15, 0)), _mm_shuffle_ps(v15, v15, 170));
  v21 = _mm_mul_ps(v10, v6);
  v22 = _mm_shuffle_ps(v19, v20, 4);
  v23 = _mm_mul_ps(v10, v7);
  v24 = _mm_div_ps(
          _mm_add_ps(v22, v17),
          _mm_add_ps(
            _mm_add_ps(
              _mm_add_ps(_mm_shuffle_ps(v16, v16, 85), _mm_shuffle_ps(v16, v16, 0)),
              _mm_shuffle_ps(v16, v16, 170)),
            v18));
  v25 = v10;
  v26 = _mm_mul_ps(v10, v8);
  v27 = _mm_mul_ps(v25, *(__m128 *)&this->M[0][0]);
  v28 = _mm_unpacklo_ps(
          _mm_add_ps(
            _mm_add_ps(_mm_shuffle_ps(v27, v27, 85), _mm_shuffle_ps(v27, v27, 0)),
            _mm_shuffle_ps(v27, v27, 170)),
          _mm_add_ps(
            _mm_add_ps(_mm_shuffle_ps(v23, v23, 85), _mm_shuffle_ps(v23, v23, 0)),
            _mm_shuffle_ps(v23, v23, 170)));
  v29 = _mm_add_ps(_mm_add_ps(_mm_shuffle_ps(v21, v21, 85), _mm_shuffle_ps(v21, v21, 0)), _mm_shuffle_ps(v21, v21, 170));
  v30 = _mm_mul_ps(v11, v6);
  v31 = _mm_shuffle_ps(v28, v29, 4);
  v32 = _mm_mul_ps(v11, v7);
  v33 = _mm_div_ps(
          _mm_add_ps(v31, v17),
          _mm_add_ps(
            _mm_add_ps(
              _mm_add_ps(_mm_shuffle_ps(v26, v26, 85), _mm_shuffle_ps(v26, v26, 0)),
              _mm_shuffle_ps(v26, v26, 170)),
            v18));
  v34 = v11;
  v35 = _mm_mul_ps(v11, v8);
  v36 = _mm_mul_ps(v34, *(__m128 *)&this->M[0][0]);
  v37 = _mm_unpacklo_ps(
          _mm_add_ps(
            _mm_add_ps(_mm_shuffle_ps(v36, v36, 85), _mm_shuffle_ps(v36, v36, 0)),
            _mm_shuffle_ps(v36, v36, 170)),
          _mm_add_ps(
            _mm_add_ps(_mm_shuffle_ps(v32, v32, 85), _mm_shuffle_ps(v32, v32, 0)),
            _mm_shuffle_ps(v32, v32, 170)));
  v38 = _mm_add_ps(_mm_add_ps(_mm_shuffle_ps(v30, v30, 85), _mm_shuffle_ps(v30, v30, 0)), _mm_shuffle_ps(v30, v30, 170));
  v39 = _mm_mul_ps(v12, v6);
  v40 = _mm_shuffle_ps(v37, v38, 4);
  v41 = _mm_mul_ps(v12, v7);
  v42 = _mm_div_ps(
          _mm_add_ps(v40, v17),
          _mm_add_ps(
            _mm_add_ps(
              _mm_add_ps(_mm_shuffle_ps(v35, v35, 85), _mm_shuffle_ps(v35, v35, 0)),
              _mm_shuffle_ps(v35, v35, 170)),
            v18));
  v43 = v12;
  v44 = _mm_mul_ps(v12, v8);
  v45 = _mm_mul_ps(v43, *(__m128 *)&this->M[0][0]);
  v46 = _mm_div_ps(
          _mm_add_ps(
            _mm_shuffle_ps(
              _mm_unpacklo_ps(
                _mm_add_ps(
                  _mm_add_ps(_mm_shuffle_ps(v45, v45, 85), _mm_shuffle_ps(v45, v45, 0)),
                  _mm_shuffle_ps(v45, v45, 170)),
                _mm_add_ps(
                  _mm_add_ps(_mm_shuffle_ps(v41, v41, 85), _mm_shuffle_ps(v41, v41, 0)),
                  _mm_shuffle_ps(v41, v41, 170))),
              _mm_add_ps(
                _mm_add_ps(_mm_shuffle_ps(v39, v39, 85), _mm_shuffle_ps(v39, v39, 0)),
                _mm_shuffle_ps(v39, v39, 170)),
              4),
            v17),
          _mm_add_ps(
            _mm_add_ps(
              _mm_add_ps(_mm_shuffle_ps(v44, v44, 85), _mm_shuffle_ps(v44, v44, 0)),
              _mm_shuffle_ps(v44, v44, 170)),
            v18));
  *(__m128 *)pr = _mm_shuffle_ps(
                    _mm_min_ps(_mm_min_ps(_mm_min_ps(v24, v33), v42), v46),
                    _mm_max_ps(_mm_max_ps(_mm_max_ps(v24, v33), v42), v46),
                    68);
}

void __fastcall Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(
        Scaleform::Render::Matrix4x4<float> *this,
        const Scaleform::Render::Matrix4x4<float> *m1,
        const Scaleform::Render::Matrix4x4<float> *m2)
{
  __m128 v3; // xmm4
  __m128 v4; // xmm5
  __m128 v5; // xmm6
  __m128 v6; // xmm7
  __m128 v7; // xmm8
  __m128 v8; // xmm9
  __m128 v9; // xmm10
  __m128 v10; // xmm0

  v3 = *(__m128 *)&m1->M[1][0];
  v4 = *(__m128 *)&m2->M[1][0];
  v5 = *(__m128 *)&m1->M[2][0];
  v6 = *(__m128 *)&m2->M[0][0];
  v7 = *(__m128 *)&m2->M[2][0];
  v8 = *(__m128 *)&m2->M[3][0];
  v9 = *(__m128 *)&m1->M[3][0];
  v10 = _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), *(__m128 *)&m2->M[0][0]);
  *(__m128 *)&this->M[0][0] = _mm_add_ps(
                                _mm_add_ps(
                                  _mm_add_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&m1->M[0][0], *(__m128 *)&m1->M[0][0], 85), v4),
                                    _mm_mul_ps(
                                      _mm_shuffle_ps(*(__m128 *)&m1->M[0][0], *(__m128 *)&m1->M[0][0], 0),
                                      *(__m128 *)&m2->M[0][0])),
                                  _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&m1->M[0][0], *(__m128 *)&m1->M[0][0], 170), v7)),
                                _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&m1->M[0][0], *(__m128 *)&m1->M[0][0], 255), v8));
  *(__m128 *)&this->M[1][0] = _mm_add_ps(
                                _mm_add_ps(
                                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v3, v3, 85), v4), v10),
                                  _mm_mul_ps(_mm_shuffle_ps(v3, v3, 170), v7)),
                                _mm_mul_ps(_mm_shuffle_ps(v3, v3, 255), v8));
  *(__m128 *)&this->M[2][0] = _mm_add_ps(
                                _mm_add_ps(
                                  _mm_add_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(v5, v5, 85), v4),
                                    _mm_mul_ps(_mm_shuffle_ps(v5, v5, 0), v6)),
                                  _mm_mul_ps(_mm_shuffle_ps(v5, v5, 170), v7)),
                                _mm_mul_ps(_mm_shuffle_ps(v5, v5, 255), v8));
  *(__m128 *)&this->M[3][0] = _mm_add_ps(
                                _mm_add_ps(
                                  _mm_add_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(v9, v9, 85), v4),
                                    _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), v6)),
                                  _mm_mul_ps(_mm_shuffle_ps(v9, v9, 170), v7)),
                                _mm_mul_ps(_mm_shuffle_ps(v9, v9, 255), v8));
}

void __fastcall Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(
        Scaleform::Render::Matrix4x4<float> *this,
        const Scaleform::Render::Matrix4x4<float> *m1,
        const Scaleform::Render::Matrix3x4<float> *m2)
{
  __m128 v6; // xmm0
  __m128 v7; // xmm4
  __m128 v8; // xmm10
  __m128 v9; // xmm6
  __m128 v10; // xmm9
  __m128 v11; // xmm7
  __m128 v12; // xmm8
  __m128 v13; // xmm5
  __m128 v14; // xmm0

  v6 = Scaleform::SIMD::SSE::InstructionSet::Constant<0,0,0,4294967295>((__m128 *)this);
  v7 = *(__m128 *)&m1->M[1][0];
  v8 = v6;
  v9 = *(__m128 *)&m1->M[2][0];
  v10 = *(__m128 *)&m1->M[3][0];
  v11 = *(__m128 *)&m2->M[0][0];
  v12 = *(__m128 *)&m2->M[2][0];
  v13 = *(__m128 *)&m2->M[1][0];
  v14 = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), *(__m128 *)&m2->M[0][0]);
  *(__m128 *)&this->M[0][0] = _mm_add_ps(
                                _mm_add_ps(
                                  _mm_add_ps(
                                    _mm_mul_ps(
                                      _mm_shuffle_ps(*(__m128 *)&m1->M[0][0], *(__m128 *)&m1->M[0][0], 85),
                                      v13),
                                    _mm_mul_ps(
                                      _mm_shuffle_ps(*(__m128 *)&m1->M[0][0], *(__m128 *)&m1->M[0][0], 0),
                                      *(__m128 *)&m2->M[0][0])),
                                  _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&m1->M[0][0], *(__m128 *)&m1->M[0][0], 170), v12)),
                                _mm_and_ps(*(__m128 *)&m1->M[0][0], v8));
  *(__m128 *)&this->M[1][0] = _mm_add_ps(
                                _mm_add_ps(
                                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v7, v7, 85), v13), v14),
                                  _mm_mul_ps(_mm_shuffle_ps(v7, v7, 170), v12)),
                                _mm_and_ps(v7, v8));
  *(__m128 *)&this->M[2][0] = _mm_add_ps(
                                _mm_add_ps(
                                  _mm_add_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(v9, v9, 85), v13),
                                    _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), v11)),
                                  _mm_mul_ps(_mm_shuffle_ps(v9, v9, 170), v12)),
                                _mm_and_ps(v9, v8));
  *(__m128 *)&this->M[3][0] = _mm_add_ps(
                                _mm_add_ps(
                                  _mm_add_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(v10, v10, 85), v13),
                                    _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), v11)),
                                  _mm_mul_ps(_mm_shuffle_ps(v10, v10, 170), v12)),
                                _mm_and_ps(v10, v8));
}

void __fastcall Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(
        Scaleform::Render::Matrix4x4<float> *this,
        const Scaleform::Render::Matrix2x4<float> *m1,
        const Scaleform::Render::Matrix4x4<float> *m2)
{
  __m128 v3; // xmm4
  __m128 v4; // xmm6
  __m128 v5; // xmm7
  __m128 v6; // xmm8
  __m128 v7; // xmm0

  v3 = *(__m128 *)&m2->M[1][0];
  v4 = *(__m128 *)&m2->M[3][0];
  v5 = *(__m128 *)&m2->M[2][0];
  v6 = *(__m128 *)&m1->M[1][0];
  v7 = _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), *(__m128 *)&m2->M[0][0]);
  *(__m128 *)&this->M[0][0] = _mm_add_ps(
                                _mm_add_ps(
                                  _mm_add_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&m1->M[0][0], *(__m128 *)&m1->M[0][0], 85), v3),
                                    _mm_mul_ps(
                                      _mm_shuffle_ps(*(__m128 *)&m1->M[0][0], *(__m128 *)&m1->M[0][0], 0),
                                      *(__m128 *)&m2->M[0][0])),
                                  _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&m1->M[0][0], *(__m128 *)&m1->M[0][0], 170), v5)),
                                _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&m1->M[0][0], *(__m128 *)&m1->M[0][0], 255), v4));
  *(__m128 *)&this->M[1][0] = _mm_add_ps(
                                _mm_add_ps(
                                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v6, v6, 85), v3), v7),
                                  _mm_mul_ps(_mm_shuffle_ps(v6, v6, 170), v5)),
                                _mm_mul_ps(_mm_shuffle_ps(v6, v6, 255), v4));
  *(__m128 *)&this->M[2][0] = v5;
  *(__m128 *)&this->M[3][0] = v4;
}

void __fastcall Scaleform::Render::Matrix4x4<float>::TransformHomogeneousAndScaleCorners(
        Scaleform::Render::Matrix4x4<float> *this,
        const Scaleform::Render::Rect<float> *bounds,
        float sx,
        float sy,
        float *dest)
{
  __m128 *v7; // rcx
  __m128 v8; // xmm6
  __m128 *v9; // rcx
  __m128 *v10; // rcx
  __m128 v11; // xmm0
  __m128 v12; // xmm4
  __m128 v13; // xmm3
  __m128 v14; // xmm5
  __m128 v15; // xmm13
  __m128 v16; // xmm9
  __m128 v17; // xmm11
  __m128 v18; // xmm1
  __m128 v19; // xmm7
  __m128 v20; // xmm14
  __m128 v21; // xmm15
  __m128 v22; // xmm6
  __m128 v23; // xmm8
  __m128 v24; // xmm12
  __m128 v25; // xmm9
  __m128 v26; // xmm10
  __m128 v27; // xmm13
  __m128 v28; // xmm14
  __m128 v29; // xmm5
  __m128 v30; // [rsp+20h] [rbp-128h]
  __m128 v31; // [rsp+30h] [rbp-118h]
  __m128 v32; // [rsp+40h] [rbp-108h]
  __m128 v33; // [rsp+60h] [rbp-E8h]
  __m128 v34; // [rsp+70h] [rbp-D8h]
  __m128 v35; // [rsp+80h] [rbp-C8h]
  __m128 v36; // [rsp+80h] [rbp-C8h]

  v35.m128_u64[0] = __PAIR64__(LODWORD(sy), LODWORD(sx));
  v31 = _mm_shuffle_ps(v35, v35, 68);
  v7 = (__m128 *)*(unsigned int *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 40i64);
  if ( __TSS0__1____Constant__0A__0A__0A__0A__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA > (int)v7 )
  {
    Init_thread_header(&__TSS0__1____Constant__0A__0A__0A__0A__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA);
    if ( __TSS0__1____Constant__0A__0A__0A__0A__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA == -1 )
    {
      `Scaleform::SIMD::SSE::InstructionSet::Constant<0,0,0,0>'::`2'::v = 0i64;
      Init_thread_footer(&__TSS0__1____Constant__0A__0A__0A__0A__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA);
    }
  }
  v8 = (__m128)`Scaleform::SIMD::SSE::InstructionSet::Constant<0,0,0,0>'::`2'::v;
  v33 = Scaleform::SIMD::SSE::InstructionSet::Constant<1065353216,3212836864,1065353216,3212836864>(v7);
  v34 = Scaleform::SIMD::SSE::InstructionSet::Constant<1065353216,1065353216,1065353216,1065353216>(v9);
  v11 = Scaleform::SIMD::SSE::InstructionSet::Constant<1056964608,1056964608,1056964608,1056964608>(v10);
  v12 = *(__m128 *)&this->M[2][0];
  v13 = *(__m128 *)&this->M[1][0];
  v14 = *(__m128 *)&this->M[3][0];
  v32 = _mm_shuffle_ps(_mm_shuffle_ps(*(__m128 *)&this->M[0][0], v13, 255), _mm_shuffle_ps(v12, v14, 255), 136);
  v15 = _mm_shuffle_ps(*(__m128 *)bounds, v8, 6);
  v16 = _mm_shuffle_ps(*(__m128 *)bounds, v8, 4);
  v17 = _mm_mul_ps(v15, v12);
  v18 = _mm_mul_ps(v16, *(__m128 *)&this->M[0][0]);
  v19 = _mm_mul_ps(v16, v12);
  v20 = _mm_shuffle_ps(*(__m128 *)bounds, v8, 14);
  v21 = _mm_mul_ps(v20, v12);
  v36 = _mm_mul_ps(v20, v14);
  v22 = _mm_mul_ps(v16, v13);
  v23 = _mm_mul_ps(v15, *(__m128 *)&this->M[0][0]);
  v30 = _mm_mul_ps(v11, v31);
  v24 = _mm_mul_ps(v20, *(__m128 *)&this->M[0][0]);
  v25 = _mm_mul_ps(v16, v14);
  v26 = _mm_mul_ps(v15, v13);
  v27 = _mm_mul_ps(v15, v14);
  v28 = _mm_mul_ps(v20, v13);
  v29 = _mm_shuffle_ps(v32, v32, 255);
  *(__m128 *)dest = _mm_mul_ps(
                      _mm_add_ps(
                        _mm_mul_ps(
                          _mm_shuffle_ps(
                            _mm_div_ps(
                              _mm_add_ps(
                                _mm_shuffle_ps(
                                  _mm_unpacklo_ps(
                                    _mm_add_ps(
                                      _mm_add_ps(_mm_shuffle_ps(v18, v18, 85), _mm_shuffle_ps(v18, v18, 0)),
                                      _mm_shuffle_ps(v18, v18, 170)),
                                    _mm_add_ps(
                                      _mm_add_ps(_mm_shuffle_ps(v22, v22, 85), _mm_shuffle_ps(v22, v22, 0)),
                                      _mm_shuffle_ps(v22, v22, 170))),
                                  _mm_add_ps(
                                    _mm_add_ps(_mm_shuffle_ps(v19, v19, 85), _mm_shuffle_ps(v19, v19, 0)),
                                    _mm_shuffle_ps(v19, v19, 170)),
                                  4),
                                v32),
                              _mm_add_ps(
                                _mm_add_ps(
                                  _mm_add_ps(_mm_shuffle_ps(v25, v25, 85), _mm_shuffle_ps(v25, v25, 0)),
                                  _mm_shuffle_ps(v25, v25, 170)),
                                v29)),
                            _mm_div_ps(
                              _mm_add_ps(
                                _mm_shuffle_ps(
                                  _mm_unpacklo_ps(
                                    _mm_add_ps(
                                      _mm_add_ps(_mm_shuffle_ps(v23, v23, 85), _mm_shuffle_ps(v23, v23, 0)),
                                      _mm_shuffle_ps(v23, v23, 170)),
                                    _mm_add_ps(
                                      _mm_add_ps(_mm_shuffle_ps(v26, v26, 85), _mm_shuffle_ps(v26, v26, 0)),
                                      _mm_shuffle_ps(v26, v26, 170))),
                                  _mm_add_ps(
                                    _mm_add_ps(_mm_shuffle_ps(v17, v17, 85), _mm_shuffle_ps(v17, v17, 0)),
                                    _mm_shuffle_ps(v17, v17, 170)),
                                  4),
                                v32),
                              _mm_add_ps(
                                _mm_add_ps(
                                  _mm_add_ps(_mm_shuffle_ps(v27, v27, 85), _mm_shuffle_ps(v27, v27, 0)),
                                  _mm_shuffle_ps(v27, v27, 170)),
                                v29)),
                            68),
                          v33),
                        v34),
                      v30);
  *((__m128 *)dest + 1) = _mm_mul_ps(
                            _mm_add_ps(
                              _mm_mul_ps(
                                _mm_div_ps(
                                  _mm_add_ps(
                                    _mm_shuffle_ps(
                                      _mm_unpacklo_ps(
                                        _mm_add_ps(
                                          _mm_add_ps(_mm_shuffle_ps(v24, v24, 85), _mm_shuffle_ps(v24, v24, 0)),
                                          _mm_shuffle_ps(v24, v24, 170)),
                                        _mm_add_ps(
                                          _mm_add_ps(_mm_shuffle_ps(v28, v28, 85), _mm_shuffle_ps(v28, v28, 0)),
                                          _mm_shuffle_ps(v28, v28, 170))),
                                      _mm_add_ps(
                                        _mm_add_ps(_mm_shuffle_ps(v21, v21, 85), _mm_shuffle_ps(v21, v21, 0)),
                                        _mm_shuffle_ps(v21, v21, 170)),
                                      4),
                                    v32),
                                  _mm_add_ps(
                                    _mm_add_ps(
                                      _mm_add_ps(_mm_shuffle_ps(v36, v36, 85), _mm_shuffle_ps(v36, v36, 0)),
                                      _mm_shuffle_ps(v36, v36, 170)),
                                    v29)),
                                v33),
                              v34),
                            v30);
}

