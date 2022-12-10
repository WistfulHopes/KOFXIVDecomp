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

void Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(const Scaleform::Render::Matrix3x4<float> & m1, const Scaleform::Render::Matrix3x4<float> & m2); // 0x14032A370
void Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(const Scaleform::Render::Matrix3x4<float> & m1, const Scaleform::Render::Matrix2x4<float> & m2); // 0x14032A490
void Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(const Scaleform::Render::Matrix2x4<float> & m1, const Scaleform::Render::Matrix3x4<float> & m2); // 0x14032A570__m128 __fastcall Scaleform::SIMD::SSE::InstructionSet::Constant<0,0,4294967295,4294967295>(__m128 *result)
{
  if ( __TSS0__1____Constant__0A__0A__0PPPPPPPP__0PPPPPPPP__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 40i64) )
  {
    Init_thread_header(&__TSS0__1____Constant__0A__0A__0PPPPPPPP__0PPPPPPPP__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA);
    if ( __TSS0__1____Constant__0A__0A__0PPPPPPPP__0PPPPPPPP__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA == -1 )
    {
      `Scaleform::SIMD::SSE::InstructionSet::Constant<0,0,4294967295,4294967295>'::`2'::v = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffff0000000000000000);
      Init_thread_footer(&__TSS0__1____Constant__0A__0A__0PPPPPPPP__0PPPPPPPP__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA);
    }
  }
  return (__m128)`Scaleform::SIMD::SSE::InstructionSet::Constant<0,0,4294967295,4294967295>'::`2'::v;
}

void __fastcall Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(
        Scaleform::Render::Matrix3x4<float> *this,
        const Scaleform::Render::Matrix3x4<float> *m1,
        const Scaleform::Render::Matrix3x4<float> *m2)
{
  __m128 v4; // xmm6
  __m128 v5; // xmm7
  __m128 v6; // xmm8
  __m128 v7; // xmm9
  __m128 v8; // xmm10
  __m128 v9; // xmm11
  __m128 v10; // xmm4

  v4 = *(__m128 *)&m1->M[0][0];
  v5 = *(__m128 *)&m1->M[1][0];
  v6 = *(__m128 *)&m2->M[1][0];
  v7 = *(__m128 *)&m2->M[0][0];
  v8 = *(__m128 *)&m2->M[2][0];
  v9 = *(__m128 *)&m1->M[2][0];
  v10 = Scaleform::SIMD::SSE::InstructionSet::Constant<0,0,0,4294967295>((__m128 *)this);
  *(__m128 *)&this->M[0][0] = _mm_add_ps(
                                _mm_add_ps(
                                  _mm_add_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(v4, v4, 85), v6),
                                    _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), v7)),
                                  _mm_mul_ps(_mm_shuffle_ps(v4, v4, 170), v8)),
                                _mm_and_ps(v10, v4));
  *(__m128 *)&this->M[1][0] = _mm_add_ps(
                                _mm_add_ps(
                                  _mm_add_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(v5, v5, 85), v6),
                                    _mm_mul_ps(_mm_shuffle_ps(v5, v5, 0), v7)),
                                  _mm_mul_ps(_mm_shuffle_ps(v5, v5, 170), v8)),
                                _mm_and_ps(v10, v5));
  *(__m128 *)&this->M[2][0] = _mm_add_ps(
                                _mm_add_ps(
                                  _mm_add_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(v9, v9, 85), v6),
                                    _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), v7)),
                                  _mm_mul_ps(_mm_shuffle_ps(v9, v9, 170), v8)),
                                _mm_and_ps(v10, v9));
}

void __fastcall Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(
        Scaleform::Render::Matrix3x4<float> *this,
        const Scaleform::Render::Matrix3x4<float> *m1,
        const Scaleform::Render::Matrix2x4<float> *m2)
{
  __m128 v4; // xmm6
  __m128 v5; // xmm7
  __m128 v6; // xmm8
  __m128 v7; // xmm9
  __m128 v8; // xmm10
  __m128 v9; // xmm3

  v4 = *(__m128 *)&m1->M[0][0];
  v5 = *(__m128 *)&m1->M[1][0];
  v6 = *(__m128 *)&m2->M[1][0];
  v7 = *(__m128 *)&m2->M[0][0];
  v8 = *(__m128 *)&m1->M[2][0];
  v9 = Scaleform::SIMD::SSE::InstructionSet::Constant<0,0,4294967295,4294967295>((__m128 *)this);
  *(__m128 *)&this->M[0][0] = _mm_add_ps(
                                _mm_add_ps(
                                  _mm_mul_ps(_mm_shuffle_ps(v4, v4, 85), v6),
                                  _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), v7)),
                                _mm_and_ps(v9, v4));
  *(__m128 *)&this->M[1][0] = _mm_add_ps(
                                _mm_add_ps(
                                  _mm_mul_ps(_mm_shuffle_ps(v5, v5, 85), v6),
                                  _mm_mul_ps(_mm_shuffle_ps(v5, v5, 0), v7)),
                                _mm_and_ps(v9, v5));
  *(__m128 *)&this->M[2][0] = _mm_add_ps(
                                _mm_add_ps(
                                  _mm_mul_ps(_mm_shuffle_ps(v8, v8, 85), v6),
                                  _mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), v7)),
                                _mm_and_ps(v9, v8));
}

void __fastcall Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(
        Scaleform::Render::Matrix3x4<float> *this,
        const Scaleform::Render::Matrix2x4<float> *m1,
        const Scaleform::Render::Matrix3x4<float> *m2)
{
  __m128 v4; // xmm6
  __m128 v5; // xmm7
  __m128 v6; // xmm8
  __m128 v7; // xmm9
  __m128 v8; // xmm10
  __m128 v9; // xmm3

  v4 = *(__m128 *)&m1->M[0][0];
  v5 = *(__m128 *)&m2->M[1][0];
  v6 = *(__m128 *)&m2->M[0][0];
  v7 = *(__m128 *)&m2->M[2][0];
  v8 = *(__m128 *)&m1->M[1][0];
  v9 = Scaleform::SIMD::SSE::InstructionSet::Constant<0,0,0,4294967295>((__m128 *)this);
  *(__m128 *)&this->M[0][0] = _mm_add_ps(
                                _mm_add_ps(
                                  _mm_add_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(v4, v4, 85), v5),
                                    _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), v6)),
                                  _mm_mul_ps(_mm_shuffle_ps(v4, v4, 170), v7)),
                                _mm_and_ps(v9, v4));
  *(__m128 *)&this->M[1][0] = _mm_add_ps(
                                _mm_add_ps(
                                  _mm_add_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(v8, v8, 85), v5),
                                    _mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), v6)),
                                  _mm_mul_ps(_mm_shuffle_ps(v8, v8, 170), v7)),
                                _mm_and_ps(v9, v8));
  *(__m128 *)&this->M[2][0] = v7;
}

