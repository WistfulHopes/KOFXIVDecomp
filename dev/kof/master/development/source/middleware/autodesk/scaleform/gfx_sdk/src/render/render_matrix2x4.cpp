#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

void Scaleform::Render::Matrix2x4<float>::EncloseTransform(Scaleform::Render::Rect<float> * pr, const Scaleform::Render::Rect<float> & r); // 0x14032A0C0
void Scaleform::Render::Matrix2x4<float>::SetToAppend(const Scaleform::Render::Matrix2x4<float> & m0, const Scaleform::Render::Matrix2x4<float> & m1); // 0x14032A250
void Scaleform::Render::Matrix2x4<float>::SetToAppend(const Scaleform::Render::Matrix2x4<float> & m0, const Scaleform::Render::Matrix2x4<float> & m1, const Scaleform::Render::Matrix2x4<float> & m2); // 0x14032A130
Scaleform::Render::Matrix2x4<float> & Scaleform::Render::Matrix2x4<float>::Append(const Scaleform::Render::Matrix2x4<float> & m); // 0x14032A020__m128 __fastcall Scaleform::SIMD::SSE::InstructionSet::Constant<0,0,0,4294967295>(__m128 *result)
{
  if ( __TSS0__1____Constant__0A__0A__0A__0PPPPPPPP__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 40i64) )
  {
    Init_thread_header(&__TSS0__1____Constant__0A__0A__0A__0PPPPPPPP__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA);
    if ( __TSS0__1____Constant__0A__0A__0A__0PPPPPPPP__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA == -1 )
    {
      `Scaleform::SIMD::SSE::InstructionSet::Constant<0,0,0,4294967295>'::`2'::v = _mm_load_si128((const __m128i *)&_xmm_ffffffff000000000000000000000000);
      Init_thread_footer(&__TSS0__1____Constant__0A__0A__0A__0PPPPPPPP__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA);
    }
  }
  return (__m128)`Scaleform::SIMD::SSE::InstructionSet::Constant<0,0,0,4294967295>'::`2'::v;
}

__m128 __fastcall Scaleform::SIMD::SSE::InstructionSet::Constant<4294967295,4294967295,0,4294967295>(__m128 *result)
{
  if ( __TSS0__1____Constant__0PPPPPPPP__0PPPPPPPP__0A__0PPPPPPPP__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 40i64) )
  {
    Init_thread_header(&__TSS0__1____Constant__0PPPPPPPP__0PPPPPPPP__0A__0PPPPPPPP__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA);
    if ( __TSS0__1____Constant__0PPPPPPPP__0PPPPPPPP__0A__0PPPPPPPP__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA == -1 )
    {
      `Scaleform::SIMD::SSE::InstructionSet::Constant<4294967295,4294967295,0,4294967295>'::`2'::v = _mm_load_si128((const __m128i *)&_xmm_ffffffff00000000ffffffffffffffff);
      Init_thread_footer(&__TSS0__1____Constant__0PPPPPPPP__0PPPPPPPP__0A__0PPPPPPPP__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA);
    }
  }
  return (__m128)`Scaleform::SIMD::SSE::InstructionSet::Constant<4294967295,4294967295,0,4294967295>'::`2'::v;
}

Scaleform::Render::Matrix2x4<float> *__fastcall Scaleform::Render::Matrix2x4<float>::Append(
        Scaleform::Render::Matrix2x4<float> *this,
        const Scaleform::Render::Matrix2x4<float> *m)
{
  __m128 v4; // xmm6
  __m128 *v5; // rcx
  __m128 v6; // xmm7
  __m128 v7; // xmm5
  Scaleform::Render::Matrix2x4<float> *result; // rax
  __m128 v9; // xmm0

  v4 = Scaleform::SIMD::SSE::InstructionSet::Constant<0,0,0,4294967295>((__m128 *)this);
  v6 = Scaleform::SIMD::SSE::InstructionSet::Constant<4294967295,4294967295,0,4294967295>(v5);
  v7 = *(__m128 *)&m->M[1][0];
  result = this;
  v9 = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), *(__m128 *)&this->M[0][0]);
  *(__m128 *)&this->M[0][0] = _mm_and_ps(
                                _mm_add_ps(
                                  _mm_add_ps(
                                    _mm_mul_ps(
                                      _mm_shuffle_ps(*(__m128 *)&m->M[0][0], *(__m128 *)&m->M[0][0], 85),
                                      *(__m128 *)&this->M[1][0]),
                                    _mm_mul_ps(
                                      _mm_shuffle_ps(*(__m128 *)&m->M[0][0], *(__m128 *)&m->M[0][0], 0),
                                      *(__m128 *)&this->M[0][0])),
                                  _mm_and_ps(*(__m128 *)&m->M[0][0], v4)),
                                v6);
  *(__m128 *)&this->M[1][0] = _mm_and_ps(
                                _mm_add_ps(
                                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v7, v7, 85), *(__m128 *)&this->M[1][0]), v9),
                                  _mm_and_ps(v7, v4)),
                                v6);
  return result;
}

void __fastcall Scaleform::Render::Matrix2x4<float>::EncloseTransform(
        Scaleform::Render::Matrix2x4<float> *this,
        Scaleform::Render::Rect<float> *pr,
        const Scaleform::Render::Rect<float> *r)
{
  Scaleform::Render::Rect<float> v3; // xmm3
  __m128 v4; // xmm1
  __m128 v5; // xmm4
  __m128 v6; // xmm2
  __m128 v7; // xmm3
  __m128 v8; // xmm0
  __m128 v9; // xmm2
  __m128 v10; // xmm0
  __m128 v11; // xmm3
  __m128 v12; // xmm0
  __m128 v13; // xmm2
  __m128 v14; // xmm3

  v3 = *r;
  v4 = _mm_unpacklo_ps(*(__m128 *)&this->M[0][0], *(__m128 *)&this->M[1][0]);
  v5 = _mm_shuffle_ps(*(__m128 *)&this->M[0][0], *(__m128 *)&this->M[1][0], 255);
  v6 = _mm_mul_ps(_mm_unpacklo_ps((__m128)v3, (__m128)v3), v4);
  v7 = _mm_mul_ps(_mm_unpackhi_ps((__m128)v3, (__m128)v3), v4);
  v8 = v6;
  v9 = _mm_unpackhi_ps(v6, v7);
  v10 = _mm_unpacklo_ps(v8, v7);
  v11 = _mm_add_ps(v9, v10);
  v12 = _mm_add_ps(_mm_shuffle_ps(v10, v10, 177), v9);
  v13 = _mm_min_ps(v11, v12);
  v14 = _mm_max_ps(v11, v12);
  *(__m128 *)pr = _mm_add_ps(
                    _mm_shuffle_ps(
                      _mm_min_ps(v13, _mm_shuffle_ps(v13, v13, 177)),
                      _mm_max_ps(v14, _mm_shuffle_ps(v14, v14, 177)),
                      136),
                    _mm_shuffle_ps(v5, v5, 136));
}

void __fastcall Scaleform::Render::Matrix2x4<float>::SetToAppend(
        Scaleform::Render::Matrix2x4<float> *this,
        const Scaleform::Render::Matrix2x4<float> *m0,
        const Scaleform::Render::Matrix2x4<float> *m1,
        const Scaleform::Render::Matrix2x4<float> *m2)
{
  __m128 v8; // xmm9
  __m128 *v9; // rcx
  __m128 v10; // xmm10
  __m128 v11; // xmm7
  __m128 v12; // xmm5
  __m128 v13; // xmm6
  __m128 v14; // xmm0

  v8 = Scaleform::SIMD::SSE::InstructionSet::Constant<0,0,0,4294967295>((__m128 *)this);
  v10 = Scaleform::SIMD::SSE::InstructionSet::Constant<4294967295,4294967295,0,4294967295>(v9);
  v11 = *(__m128 *)&m0->M[1][0];
  v12 = _mm_add_ps(
          _mm_add_ps(
            _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&m2->M[0][0], *(__m128 *)&m2->M[0][0], 85), *(__m128 *)&m1->M[1][0]),
            _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&m2->M[0][0], *(__m128 *)&m2->M[0][0], 0), *(__m128 *)&m1->M[0][0])),
          _mm_and_ps(*(__m128 *)&m2->M[0][0], v8));
  v13 = _mm_add_ps(
          _mm_add_ps(
            _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&m2->M[1][0], *(__m128 *)&m2->M[1][0], 85), *(__m128 *)&m1->M[1][0]),
            _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&m2->M[1][0], *(__m128 *)&m2->M[1][0], 0), *(__m128 *)&m1->M[0][0])),
          _mm_and_ps(*(__m128 *)&m2->M[1][0], v8));
  v14 = _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), *(__m128 *)&m0->M[0][0]);
  *(__m128 *)&this->M[0][0] = _mm_and_ps(
                                _mm_add_ps(
                                  _mm_add_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(v12, v12, 85), v11),
                                    _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), *(__m128 *)&m0->M[0][0])),
                                  _mm_and_ps(v12, v8)),
                                v10);
  *(__m128 *)&this->M[1][0] = _mm_and_ps(
                                _mm_add_ps(
                                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v13, v13, 85), v11), v14),
                                  _mm_and_ps(v13, v8)),
                                v10);
}

void __fastcall Scaleform::Render::Matrix2x4<float>::SetToAppend(
        Scaleform::Render::Matrix2x4<float> *this,
        const Scaleform::Render::Matrix2x4<float> *m0,
        const Scaleform::Render::Matrix2x4<float> *m1)
{
  __m128 v6; // xmm6
  __m128 *v7; // rcx
  __m128 v8; // xmm7
  __m128 v9; // xmm5
  __m128 v10; // xmm3
  __m128 v11; // xmm0

  v6 = Scaleform::SIMD::SSE::InstructionSet::Constant<0,0,0,4294967295>((__m128 *)this);
  v8 = Scaleform::SIMD::SSE::InstructionSet::Constant<4294967295,4294967295,0,4294967295>(v7);
  v9 = *(__m128 *)&m1->M[1][0];
  v10 = *(__m128 *)&m0->M[1][0];
  v11 = _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), *(__m128 *)&m0->M[0][0]);
  *(__m128 *)&this->M[0][0] = _mm_and_ps(
                                _mm_add_ps(
                                  _mm_add_ps(
                                    _mm_mul_ps(
                                      _mm_shuffle_ps(*(__m128 *)&m1->M[0][0], *(__m128 *)&m1->M[0][0], 85),
                                      v10),
                                    _mm_mul_ps(
                                      _mm_shuffle_ps(*(__m128 *)&m1->M[0][0], *(__m128 *)&m1->M[0][0], 0),
                                      *(__m128 *)&m0->M[0][0])),
                                  _mm_and_ps(*(__m128 *)&m1->M[0][0], v6)),
                                v8);
  *(__m128 *)&this->M[1][0] = _mm_and_ps(
                                _mm_add_ps(
                                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v9, v9, 85), v10), v11),
                                  _mm_and_ps(v9, v6)),
                                v8);
}

