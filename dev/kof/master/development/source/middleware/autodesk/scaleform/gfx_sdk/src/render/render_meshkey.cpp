#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"

unsigned long Scaleform::Render::MeshKey::GetKeySize(unsigned long flags); // 0x14039D7C0
bool Scaleform::Render::MeshKey::Match(unsigned long layer, unsigned long flags, const float * keyData, const Scaleform::Render::ToleranceParams & cfg); // 0x14039D810
bool Scaleform::Render::MeshKey::CalcMatrixKey(const Scaleform::Render::Matrix2x4<float> & m, float * key, Scaleform::Render::Matrix2x4<float> * m2); // 0x14039CD90
bool Scaleform::Render::MeshKey::CalcMatrixKey_NonOpt(const Scaleform::Render::Matrix2x4<float> & m, float * key, Scaleform::Render::Matrix2x4<float> * m2); // 0x14039CEC0
void Scaleform::Render::MeshKey::Release(); // 0x14039DC00
void Scaleform::Render::MeshKeySetHandle::releaseCache(); // 0x14039DF00
Scaleform::Render::MeshKey * Scaleform::Render::MeshKeySet::CreateKey(const float * keyData, unsigned long flags); // 0x14039D1A0
void Scaleform::Render::MeshKeySet::DestroyKey(Scaleform::Render::MeshKey * key); // 0x14039D670
void Scaleform::Render::MeshKeySet::DestroyAllKeys(); // 0x14039D5B0
void Scaleform::Render::MeshKeySet::OnEvict(Scaleform::Render::MeshBase * pmesh); // 0x14039DAE0
Scaleform::Render::MeshKey * Scaleform::Render::MeshKeySet::findMatchingKey(unsigned long layer, unsigned long flags, const float * keyData, const Scaleform::Render::ToleranceParams & cfg); // 0x14039DDC0
void Scaleform::Render::MeshKeyManager::DestroyAllKeys(); // 0x14039D3E0
void Scaleform::Render::MeshKeyManager::ProcessKillList(); // 0x14039DB10
Scaleform::Render::MeshKey * Scaleform::Render::MeshKeyManager::CreateMatchingKey(Scaleform::Render::MeshProvider_KeySupport * provider, unsigned long layer, unsigned long flags, const float * keyData, const Scaleform::Render::ToleranceParams & cfg); // 0x14039D2D0
Scaleform::Render::MeshKey * Scaleform::Render::MeshKeyManager::CreateMatchingKey(Scaleform::Render::MeshKeySet * keySet, unsigned long layer, unsigned long flags, const float * keyData, const Scaleform::Render::ToleranceParams & cfg); // 0x14039D270
void Scaleform::Render::MeshKeyManager::providerLost(Scaleform::Render::MeshKeySetHandle & handle); // 0x14039DE70
void Scaleform::Render::MeshKeyManager::destroyKeySet(Scaleform::Render::MeshKeySet * keySet); // 0x14039DC50__m128 __fastcall Scaleform::SIMD::SSE::InstructionSet::Constant<2147483647,2147483647,2147483647,2147483647>(
        __m128 *result)
{
  if ( __TSS0__1____Constant__0HPPPPPPP__0HPPPPPPP__0HPPPPPPP__0HPPPPPPP__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 40i64) )
  {
    Init_thread_header(&__TSS0__1____Constant__0HPPPPPPP__0HPPPPPPP__0HPPPPPPP__0HPPPPPPP__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA);
    if ( __TSS0__1____Constant__0HPPPPPPP__0HPPPPPPP__0HPPPPPPP__0HPPPPPPP__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA == -1 )
    {
      `Scaleform::SIMD::SSE::InstructionSet::Constant<2147483647,2147483647,2147483647,2147483647>'::`2'::v = _mm_load_si128((const __m128i *)&_xmm);
      Init_thread_footer(&__TSS0__1____Constant__0HPPPPPPP__0HPPPPPPP__0HPPPPPPP__0HPPPPPPP__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA);
    }
  }
  return (__m128)`Scaleform::SIMD::SSE::InstructionSet::Constant<2147483647,2147483647,2147483647,2147483647>'::`2'::v;
}

__m128 __fastcall Scaleform::SIMD::SSE::InstructionSet::Constant<4294967295,0,0,0>(__m128 *result)
{
  if ( __TSS0__1____Constant__0PPPPPPPP__0A__0A__0A__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 40i64) )
  {
    Init_thread_header(&__TSS0__1____Constant__0PPPPPPPP__0A__0A__0A__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA);
    if ( __TSS0__1____Constant__0PPPPPPPP__0A__0A__0A__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA == -1 )
    {
      `Scaleform::SIMD::SSE::InstructionSet::Constant<4294967295,0,0,0>'::`2'::v = _mm_load_si128((const __m128i *)&_xmm);
      Init_thread_footer(&__TSS0__1____Constant__0PPPPPPPP__0A__0A__0A__InstructionSet_SSE_SIMD_Scaleform__SA_AT__m128__XZ_4HA);
    }
  }
  return (__m128)`Scaleform::SIMD::SSE::InstructionSet::Constant<4294967295,0,0,0>'::`2'::v;
}

void __fastcall Scaleform::Render::MeshKeySet::MeshKeySet(
        Scaleform::Render::MeshKeySet *this,
        Scaleform::Render::MeshKeyManager *manager,
        Scaleform::Render::MeshProvider_KeySupport *provider)
{
  this->pPrev = (Scaleform::Render::MeshKeySet *)-1i64;
  this->pNext = (Scaleform::Render::MeshKeySet *)-1i64;
  this->__vftable = (Scaleform::Render::MeshKeySet_vtbl *)&Scaleform::Render::MeshKeySet::`vftable';
  if ( manager )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)manager);
  this->pManager.pObject = manager;
  this->pDelegate = provider;
  this->Meshes.Root.pPrev = (Scaleform::Render::MeshKey *)&this->Meshes;
  this->Meshes.Root.pNext = (Scaleform::Render::MeshKey *)&this->Meshes;
}

bool __fastcall Scaleform::Render::MeshKey::CalcMatrixKey(
        const Scaleform::Render::Matrix2x4<float> *m,
        float *key,
        Scaleform::Render::Matrix2x4<float> *m2)
{
  __m128 v5; // xmm4
  __m128 v6; // xmm2
  __m128 v7; // xmm6
  __m128 v8; // xmm7
  __m128 v9; // xmm4
  __m128 v10; // xmm7
  __m128 v11; // xmm6
  __m128 v12; // xmm8
  __m128 v13; // xmm9
  __m128 v14; // xmm0
  __m128 v15; // xmm9
  __m128 *v16; // rcx
  __m128 v17; // xmm10
  __m128 v18; // xmm7
  __m128 *v19; // rcx
  __m128 v20; // xmm0
  __m128 v21; // xmm8
  __m128 v22; // xmm6
  __m128 *v23; // rcx

  if ( m2 )
    return Scaleform::Render::MeshKey::CalcMatrixKey_NonOpt(m, key, m2);
  v5 = *(__m128 *)&m->M[1][0];
  v6 = _mm_shuffle_ps(*(__m128 *)&m->M[0][0], v5, 0);
  v7 = _mm_shuffle_ps(*(__m128 *)&m->M[0][0], v5, 85);
  v8 = _mm_mul_ps(v5, v5);
  v9 = _mm_mul_ps(_mm_shuffle_ps(v5, *(__m128 *)&m->M[0][0], 0), _mm_sub_ps(v7, v6));
  v10 = _mm_add_ps(v8, _mm_mul_ps(*(__m128 *)&m->M[0][0], *(__m128 *)&m->M[0][0]));
  v11 = _mm_mul_ps(v7, v6);
  v12 = _mm_rsqrt_ps(v10);
  v13 = _mm_and_ps(
          _mm_sub_ps(_mm_shuffle_ps(v9, v9, 10), v9),
          Scaleform::SIMD::SSE::InstructionSet::Constant<2147483647,2147483647,2147483647,2147483647>((__m128 *)m));
  v14 = _mm_shuffle_ps(v12, v12, 0);
  v15 = _mm_mul_ps(_mm_unpacklo_ps(v13, _mm_add_ps(_mm_shuffle_ps(v11, v11, 10), v11)), v14);
  Scaleform::SIMD::SSE::InstructionSet::Constant<0,0,0,0>(v16);
  v17 = _mm_cmpneq_ps(v14, _mm_shuffle_ps(v10, v15, 4));
  v18 = _mm_shuffle_ps(v15, v15, 207);
  v20 = _mm_and_ps(Scaleform::SIMD::SSE::InstructionSet::Constant<4294967295,0,0,0>(v19), v18);
  v21 = _mm_rcp_ps(_mm_shuffle_ps(_mm_sub_ps(v15, v20), v12, 72));
  v22 = _mm_add_ps(_mm_mul_ps(v21, v15), c0100);
  Scaleform::SIMD::SSE::InstructionSet::Constant<0,0,0,0>(v23);
  *(__m128 *)key = _mm_shuffle_ps(
                     v21,
                     _mm_xor_ps(_mm_and_ps(_mm_cmple_ps(v20, v18), _mm_xor_ps(_mm_shuffle_ps(v22, v22, 225), v22)), v22),
                     14);
  return (_mm_movemask_ps(v17) & 0xF) == 15;
}

char __fastcall Scaleform::Render::MeshKey::CalcMatrixKey_NonOpt(
        const Scaleform::Render::Matrix2x4<float> *m,
        float *key,
        Scaleform::Render::Matrix2x4<float> *m2)
{
  float v3; // xmm12_4
  float v4; // xmm7_4
  float v5; // xmm13_4
  float v6; // xmm11_4
  float v7; // xmm6_4
  float v10; // xmm10_4
  float v11; // xmm9_4
  float v13; // xmm14_4
  float v14; // xmm8_4
  float v15; // xmm6_4
  float v16; // xmm1_4
  float *v17; // rdx
  int v18; // ecx
  float v19; // xmm5_4
  unsigned int v20; // eax
  float v21; // xmm6_4
  float v22; // xmm8_4
  float v23; // xmm9_4
  float v24; // xmm2_4
  float v25; // xmm4_4
  float v26; // xmm0_4
  float src[4]; // [rsp+20h] [rbp-D8h] BYREF
  int v28; // [rsp+30h] [rbp-C8h]
  int v29; // [rsp+34h] [rbp-C4h]
  float dst[4]; // [rsp+38h] [rbp-C0h] BYREF
  __int128 v31; // [rsp+48h] [rbp-B0h]

  v3 = m->M[0][0];
  v4 = 0.0;
  v5 = m->M[1][0];
  v6 = m->M[0][1];
  v7 = m->M[1][1];
  v10 = (float)(v5 * v5) + (float)(v3 * v3);
  v11 = (float)(v7 * v7) + (float)(v6 * v6);
  if ( v10 == 0.0 || v11 == 0.0 )
    return 0;
  v13 = sqrtf(v10);
  v14 = (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v7 - v5) * v3)
                                                         - (float)((float)(v6 - v3) * v5))) & _xmm)
      / v13;
  if ( v14 < 0.0000000099999999 )
    return 0;
  *key = v13;
  v15 = (float)((float)((float)(v7 * v5) + (float)(v6 * v3)) * v13) / v10;
  key[1] = sqrtf(v11);
  if ( v15 < 0.0 )
    v16 = v14 / (float)(v14 - v15);
  else
    v16 = (float)(v15 / v14) + 1.0;
  key[2] = v16;
  if ( m2 )
  {
    dst[2] = v13;
    *((float *)&v31 + 1) = v14;
    *(_QWORD *)dst = 0i64;
    dst[3] = 0.0;
    *(float *)&v31 = v15 + v13;
    *((_QWORD *)&v31 + 1) = 0i64;
    *(_OWORD *)src = _xmm;
    v28 = 1065353216;
    v29 = 1065353216;
    Scaleform::Render::Matrix2x4<float>::SetParlToParl(m2, src, dst);
    v17 = dst;
    v18 = 4;
    v19 = m2->M[0][1];
    v20 = 0;
    v21 = m2->M[0][0];
    v22 = m2->M[1][1];
    v23 = m2->M[1][0];
    *(_OWORD *)dst = _xmm;
    v31 = _xmm;
    do
    {
      v24 = *v17;
      *v17 = (float)(v21 * *v17) + (float)(v19 * v17[1]);
      v25 = (float)(v23 * v24) + (float)(v22 * v17[1]);
      v17[1] = v25;
      if ( (float)((float)(*v17 * *v17) + (float)(v25 * v25)) > v4 )
      {
        v4 = (float)(*v17 * *v17) + (float)(v25 * v25);
        v18 = v20;
      }
      v20 += 2;
      v17 += 2;
    }
    while ( v20 < 8 );
    v26 = atan2f(dst[v18 + 1], dst[v18]);
    Scaleform::Render::Matrix2x4<float>::AppendRotation(m2, 1.5707964 - v26);
  }
  return 1;
}

Scaleform::Render::MeshKey *__fastcall Scaleform::Render::MeshKeySet::CreateKey(
        Scaleform::Render::MeshKeySet *this,
        const float *keyData,
        unsigned int flags)
{
  unsigned __int16 v4; // bp
  unsigned int v6; // edi
  Scaleform::Render::MeshKey *result; // rax
  Scaleform::Render::MeshKey *v8; // rbx

  v4 = flags;
  v6 = 17;
  if ( (flags & 0x10) == 0 )
    v6 = 4;
  result = (Scaleform::Render::MeshKey *)this->pManager.pObject->pRenderHeap->Alloc(
                                           this->pManager.pObject->pRenderHeap,
                                           4i64 * (v6 - 1) + 48,
                                           0i64);
  v8 = result;
  if ( result )
  {
    result->pPrev = (Scaleform::Render::MeshKey *)-1i64;
    result->pNext = (Scaleform::Render::MeshKey *)-1i64;
    result->pMesh.pObject = 0i64;
    *(_DWORD *)&result->Size = 0;
    result->UseCount = 1;
    result->Data[0] = 0.0;
    result->pKeySet = this;
    result->Size = v6;
    result->Flags = v4;
    memmove(result->Data, keyData, 4i64 * v6);
    v8->pPrev = this->Meshes.Root.pPrev;
    v8->pNext = (Scaleform::Render::MeshKey *)&this->Meshes;
    this->Meshes.Root.pPrev->pNext = v8;
    result = v8;
    this->Meshes.Root.pPrev = v8;
  }
  return result;
}

Scaleform::Render::MeshKey *__fastcall Scaleform::Render::MeshKeyManager::CreateMatchingKey(
        Scaleform::Render::MeshKeyManager *this,
        Scaleform::Render::MeshKeySet *keySet,
        unsigned int layer,
        unsigned int flags,
        const float *keyData,
        const Scaleform::Render::ToleranceParams *cfg)
{
  Scaleform::Render::MeshKey *result; // rax

  result = Scaleform::Render::MeshKeySet::findMatchingKey(keySet, layer, flags, keyData, cfg);
  if ( !result )
    return Scaleform::Render::MeshKeySet::CreateKey(keySet, keyData, flags);
  ++result->UseCount;
  return result;
}

Scaleform::Render::MeshKey *__fastcall Scaleform::Render::MeshKeyManager::CreateMatchingKey(
        Scaleform::Render::MeshKeyManager *this,
        Scaleform::Render::MeshProvider_KeySupport *provider,
        unsigned int layer,
        unsigned int flags,
        const float *keyData,
        const Scaleform::Render::ToleranceParams *cfg)
{
  Scaleform::Render::MeshKeySet *v10; // rax
  Scaleform::Render::MeshKey *result; // rax
  Scaleform::Render::MeshKeySet *volatile pKeySet; // rcx
  Scaleform::Render::MeshKeySet *v13; // rbx

  if ( !provider->hKeySet.pManager.Value )
  {
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)this);
    provider->hKeySet.pManager.Value = this;
  }
  if ( !provider->hKeySet.pKeySet )
  {
    Scaleform::Lock::DoLock(&this->KeySetLock);
    v10 = (Scaleform::Render::MeshKeySet *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))this->pRenderHeap->Alloc)(
                                             this->pRenderHeap,
                                             56i64);
    if ( v10 )
      Scaleform::Render::MeshKeySet::MeshKeySet(v10, this, provider);
    provider->hKeySet.pKeySet = v10;
    if ( !provider->hKeySet.pKeySet )
    {
      Scaleform::Lock::Unlock(&this->KeySetLock);
      return 0i64;
    }
    pKeySet = provider->hKeySet.pKeySet;
    pKeySet->pPrev = this->KeySets[0].Root.pPrev;
    pKeySet->pNext = (Scaleform::Render::MeshKeySet *)&this->KeySetLock.csBuf[32];
    this->KeySets[0].Root.pPrev->pNext = pKeySet;
    this->KeySets[0].Root.pPrev = pKeySet;
    Scaleform::Lock::Unlock(&this->KeySetLock);
  }
  v13 = provider->hKeySet.pKeySet;
  result = Scaleform::Render::MeshKeySet::findMatchingKey(v13, layer, flags, keyData, cfg);
  if ( !result )
    return Scaleform::Render::MeshKeySet::CreateKey(v13, keyData, flags);
  ++result->UseCount;
  return result;
}

void __fastcall Scaleform::Render::MeshKeyManager::DestroyAllKeys(Scaleform::Render::MeshKeyManager *this)
{
  Scaleform::Lock *p_KeySetLock; // rbx
  Scaleform::List<Scaleform::Render::MeshKeySet,Scaleform::Render::MeshKeySet,Scaleform::ListNode<Scaleform::Render::MeshKeySet> > *v3; // rdx
  Scaleform::Render::MeshKeySet *v4; // rax
  Scaleform::Render::MeshKeySet *pNext; // r9
  Scaleform::Render::MeshKeySet *v6; // rdi
  Scaleform::Render::MeshKeySet *v7; // r8
  __int64 v8; // rax
  Scaleform::Render::MeshKeySet *pPrev; // rcx
  Scaleform::List<Scaleform::Render::MeshKeySet,Scaleform::Render::MeshKeySet,Scaleform::ListNode<Scaleform::Render::MeshKeySet> > *KeySets; // rdx
  Scaleform::Render::MeshKeySet *v11; // rax
  Scaleform::Render::MeshKeySet *v12; // r8
  Scaleform::Render::MeshKeySet *v13; // rsi
  Scaleform::Render::MeshKeySet *v14; // rax
  __int64 v15; // rdi
  Scaleform::Render::MeshKeySet *v16; // rcx
  __int64 v17; // rcx
  Scaleform::RefCountVImpl *v18; // rax
  _QWORD v19[5]; // [rsp+0h] [rbp-48h] BYREF
  Scaleform::Render::MeshKeySet *v20; // [rsp+28h] [rbp-20h]
  Scaleform::Render::MeshKeySet *v21; // [rsp+30h] [rbp-18h]
  Scaleform::Render::MeshKeySet *v22; // [rsp+38h] [rbp-10h]

  p_KeySetLock = &this->KeySetLock;
  Scaleform::Lock::DoLock(&this->KeySetLock);
  v3 = &this->KeySets[1];
  v4 = (Scaleform::Render::MeshKeySet *)&this->KeySets[0].Root.8;
  if ( this == (Scaleform::Render::MeshKeyManager *)-80i64 )
    v4 = 0i64;
  if ( this->KeySets[1].Root.pNext != v4 )
  {
    pNext = this->KeySets[1].Root.pNext;
    v6 = (Scaleform::Render::MeshKeySet *)&v19[3];
    v7 = (Scaleform::Render::MeshKeySet *)&this->KeySets[0].Root.8;
    v19[4] = v6;
    v8 = (__int64)v6;
    if ( this == (Scaleform::Render::MeshKeyManager *)-80i64 )
      v7 = 0i64;
    v20 = (Scaleform::Render::MeshKeySet *)&v19[3];
    if ( pNext != v7 )
    {
      pPrev = v3->Root.pPrev;
      v3->Root.pPrev = v7;
      this->KeySets[1].Root.pNext = v7;
      pPrev->pNext = v6;
      pNext->pPrev = v6;
      v20->pPrev = pPrev;
      v8 = (__int64)pNext;
      v20 = pNext;
    }
    do
    {
      *(_QWORD *)(*(_QWORD *)(v8 + 8) + 16i64) = *(_QWORD *)(v8 + 16);
      *(_QWORD *)(*(_QWORD *)(v8 + 16) + 8i64) = *(_QWORD *)(v8 + 8);
      *(_QWORD *)(v8 + 8) = -1i64;
      *(_QWORD *)(v8 + 16) = -1i64;
      if ( v8 )
        (**(void (__fastcall ***)(__int64, __int64))v8)(v8, 1i64);
      v8 = (__int64)v20;
    }
    while ( v20 != v6 );
  }
  KeySets = this->KeySets;
  v11 = (Scaleform::Render::MeshKeySet *)&this->KeySetLock.csBuf[32];
  if ( this == (Scaleform::Render::MeshKeyManager *)-64i64 )
    v11 = 0i64;
  if ( this->KeySets[0].Root.pNext != v11 )
  {
    v12 = this->KeySets[0].Root.pNext;
    v13 = (Scaleform::Render::MeshKeySet *)&v19[5];
    v14 = (Scaleform::Render::MeshKeySet *)&KeySets[-1].Root.8;
    v21 = v13;
    v15 = (__int64)v13;
    v22 = v13;
    if ( !KeySets )
      v14 = 0i64;
    if ( v12 != v14 )
    {
      v16 = KeySets->Root.pPrev;
      v15 = (__int64)v12;
      KeySets->Root.pPrev = v14;
      KeySets->Root.pNext = v14;
      v16->pNext = v13;
      v12->pPrev = v13;
      v22->pPrev = v16;
      v22 = v12;
    }
    do
    {
      v17 = *(_QWORD *)(v15 + 32);
      if ( v17 )
      {
        *(_QWORD *)(v17 + 32) = 0i64;
        v18 = (Scaleform::RefCountVImpl *)Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync(
                                            (volatile __int64 *)(v17 + 24),
                                            0i64);
        if ( v18 )
          Scaleform::RefCountImpl::Release(v18);
        *(_QWORD *)(v15 + 32) = 0i64;
      }
      *(_QWORD *)(*(_QWORD *)(v15 + 8) + 16i64) = *(_QWORD *)(v15 + 16);
      *(_QWORD *)(*(_QWORD *)(v15 + 16) + 8i64) = *(_QWORD *)(v15 + 8);
      *(_QWORD *)(v15 + 8) = -1i64;
      *(_QWORD *)(v15 + 16) = -1i64;
      (**(void (__fastcall ***)(__int64, __int64))v15)(v15, 1i64);
      v15 = (__int64)v22;
    }
    while ( v22 != v13 );
  }
  Scaleform::Lock::Unlock(p_KeySetLock);
}

void __fastcall Scaleform::Render::MeshKeySet::DestroyAllKeys(Scaleform::Render::MeshKeySet *this)
{
  Scaleform::Render::MeshKey *pNext; // rbx
  Scaleform::List<Scaleform::Render::MeshKey,Scaleform::Render::MeshKey,Scaleform::ListNode<Scaleform::Render::MeshKey> > *i; // rsi
  Scaleform::Render::MeshBase *pObject; // rdi
  Scaleform::Render::MeshProvider *v5; // rcx
  Scaleform::Render::MeshKey *v6; // rbx
  Scaleform::Render::MeshKey *v7; // rdi
  Scaleform::RefCountVImpl *v8; // rcx

  pNext = this->Meshes.Root.pNext;
  for ( i = &this->Meshes; pNext != (Scaleform::Render::MeshKey *)i; pNext = pNext->pNext )
  {
    pObject = pNext->pMesh.pObject;
    if ( pObject )
    {
      v5 = pObject->pProvider.pObject;
      if ( v5 )
        v5->Release(v5);
      pObject->pProvider.pObject = 0i64;
    }
  }
  v6 = this->Meshes.Root.pNext;
  if ( v6 != (Scaleform::Render::MeshKey *)i )
  {
    do
    {
      v7 = v6->pNext;
      if ( v6->pMesh.pObject )
      {
        v8 = (Scaleform::RefCountVImpl *)v6->pMesh.pObject;
        if ( v8 )
          Scaleform::RefCountImpl::Release(v8);
        v6->pMesh.pObject = 0i64;
      }
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v6);
      v6 = v7;
    }
    while ( v7 != (Scaleform::Render::MeshKey *)i );
  }
  i->Root.pPrev = (Scaleform::Render::MeshKey *)i;
  i->Root.pNext = (Scaleform::Render::MeshKey *)i;
}

void __fastcall Scaleform::Render::MeshKeySet::DestroyKey(
        Scaleform::Render::MeshKeySet *this,
        Scaleform::Render::MeshKey *key)
{
  Scaleform::Render::MeshBase *pObject; // rsi
  Scaleform::Render::MeshProvider *v5; // rcx
  Scaleform::RefCountVImpl *v6; // rcx

  key->pPrev->pNext = key->pNext;
  key->pNext->Scaleform::ListNode<Scaleform::Render::MeshKey>::$9B8A2A93FE3DF241B82918068588125F::pPrev = key->pPrev;
  pObject = key->pMesh.pObject;
  key->pPrev = (Scaleform::Render::MeshKey *)-1i64;
  key->pNext = (Scaleform::Render::MeshKey *)-1i64;
  if ( pObject )
  {
    v5 = pObject->pProvider.pObject;
    if ( v5 )
      v5->Release(v5);
    pObject->pProvider.pObject = 0i64;
    v6 = (Scaleform::RefCountVImpl *)key->pMesh.pObject;
    if ( v6 )
      Scaleform::RefCountImpl::Release(v6);
    key->pMesh.pObject = 0i64;
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, key);
  if ( (Scaleform::List<Scaleform::Render::MeshKey,Scaleform::Render::MeshKey,Scaleform::ListNode<Scaleform::Render::MeshKey> > *)this->Meshes.Root.pNext == &this->Meshes )
    Scaleform::Render::MeshKeyManager::destroyKeySet(this->pManager.pObject, this);
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::Render::MeshKeySet::GetBounds(
        Scaleform::Render::MeshKeySet *this,
        Scaleform::Render::Rect<float> *result,
        const Scaleform::Render::Matrix2x4<float> *m)
{
  this->pDelegate->GetBounds(&this->pDelegate->Scaleform::Render::MeshProvider, result, m);
  return result;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::Render::MeshKeySet::GetCorrectBounds(
        Scaleform::Render::MeshKeySet *this,
        Scaleform::Render::Rect<float> *result,
        const Scaleform::Render::Matrix2x4<float> *m,
        float morphRatio)
{
  ((void (__fastcall *)(Scaleform::Render::MeshProvider *, Scaleform::Render::Rect<float> *, const Scaleform::Render::Matrix2x4<float> *))this->pDelegate->GetCorrectBounds)(
    &this->pDelegate->Scaleform::Render::MeshProvider,
    result,
    m);
  return result;
}

__int64 __fastcall Scaleform::Render::MeshKeySet::GetData(
        Scaleform::Render::MeshKeySet *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::MeshBase *mesh,
        Scaleform::Render::VertexOutput *out,
        unsigned int meshGenFlags)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::MeshProvider *, Scaleform::Render::HAL *, Scaleform::Render::MeshBase *, Scaleform::Render::VertexOutput *))this->pDelegate->GetData)(
           &this->pDelegate->Scaleform::Render::MeshProvider,
           hal,
           mesh,
           out);
}

__int64 __fastcall Scaleform::Render::MeshKeySet::GetFillCount(
        Scaleform::Render::MeshKeySet *this,
        __int64 layer,
        __int64 meshGenFlags)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::MeshProvider *, __int64, __int64))this->pDelegate->GetFillCount)(
           &this->pDelegate->Scaleform::Render::MeshProvider,
           layer,
           meshGenFlags);
}

void __fastcall Scaleform::Render::MeshKeySet::GetFillData(
        Scaleform::Render::MeshKeySet *this,
        Scaleform::Render::FillData *data,
        __int64 layer,
        __int64 fillIndex,
        unsigned int meshGenFlags)
{
  ((void (__fastcall *)(Scaleform::Render::MeshProvider *, Scaleform::Render::FillData *, __int64, __int64))this->pDelegate->GetFillData)(
    &this->pDelegate->Scaleform::Render::MeshProvider,
    data,
    layer,
    fillIndex);
}

void __fastcall Scaleform::Render::MeshKeySet::GetFillMatrix(
        Scaleform::Render::MeshKeySet *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::MeshBase *mesh,
        Scaleform::Render::Matrix2x4<float> *matrix,
        unsigned int layer,
        unsigned int fillIndex,
        unsigned int meshGenFlags)
{
  ((void (__fastcall *)(Scaleform::Render::MeshProvider *, Scaleform::Render::HAL *, Scaleform::Render::MeshBase *, Scaleform::Render::Matrix2x4<float> *))this->pDelegate->GetFillMatrix)(
    &this->pDelegate->Scaleform::Render::MeshProvider,
    hal,
    mesh,
    matrix);
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::ImageShapeCharacterDef::GetBoundsLocal(
        Scaleform::Render::MeshKeySet *this,
        Scaleform::Render::Rect<float> *result)
{
  ((void (__fastcall *)(Scaleform::Render::MeshProvider *))this->pDelegate->GetIdentityBounds)(&this->pDelegate->Scaleform::Render::MeshProvider);
  return result;
}

__int64 __fastcall Scaleform::Render::MeshKey::GetKeySize(unsigned int flags)
{
  __int64 result; // rax

  result = 17i64;
  if ( (flags & 0x10) == 0 )
    return 4i64;
  return result;
}

__int64 __fastcall Scaleform::Render::MeshKeySet::GetLayerCount(Scaleform::Render::MeshKeySet *this)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::MeshProvider *))this->pDelegate->GetLayerCount)(&this->pDelegate->Scaleform::Render::MeshProvider);
}

__int64 __fastcall Scaleform::Render::MeshKeySet::HitTestShape(
        Scaleform::Render::MeshKeySet *this,
        const Scaleform::Render::Matrix2x4<float> *m,
        float x,
        float y,
        float morphRatio,
        Scaleform::Render::StrokeGenerator *gen,
        const Scaleform::Render::ToleranceParams *tol)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::MeshProvider *, const Scaleform::Render::Matrix2x4<float> *))this->pDelegate->HitTestShape)(
           &this->pDelegate->Scaleform::Render::MeshProvider,
           m);
}

bool __fastcall Scaleform::Render::MeshKeySet::IsValid(Scaleform::Render::MeshKeySet *this)
{
  return this->pDelegate != 0i64;
}

char __fastcall Scaleform::Render::MeshKey::Match(
        Scaleform::Render::MeshKey *this,
        unsigned int layer,
        unsigned int flags,
        const float *keyData,
        const Scaleform::Render::ToleranceParams *cfg)
{
  int v8; // edx
  unsigned int v9; // ecx
  const float *v10; // rax
  const Scaleform::Render::ToleranceParams *v11; // r9
  int v12; // er8
  __int64 v13; // rax
  float v14; // xmm2_4
  float FillLowerScale; // xmm3_4
  float FillUpperScale; // xmm4_4
  unsigned int v17; // edx
  signed __int64 v18; // rcx
  const float *v19; // rax
  float StrokeLowerScale; // xmm3_4
  float StrokeUpperScale; // xmm4_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm10_4
  unsigned int v25; // edx
  const float *v26; // rax
  signed __int64 v27; // rcx
  unsigned int v28; // edx
  const float *v29; // rax
  signed __int64 v30; // rcx
  int v31; // eax
  float MorphTolerance; // xmm1_4
  float v33; // xmm2_4
  float v34; // xmm3_4

  if ( flags == this->Flags && layer == this->pMesh.pObject->Layer )
  {
    if ( (flags & 0x8000) != 0 )
      return 1;
    if ( (flags & 0x10) != 0 )
    {
      v8 = 0;
      v9 = 0;
      v10 = keyData;
      while ( *v10 == *(const float *)((char *)v10 + (char *)this - (char *)keyData + 40) )
      {
        ++v9;
        ++v10;
        if ( v9 >= 8 )
        {
          v11 = cfg;
          v12 = 0;
          while ( 1 )
          {
            v13 = (unsigned int)(v12 + 8);
            v14 = keyData[v13];
            if ( (float)(this->Data[v13] * cfg->Scale9LowerScale) > v14
              || v14 > (float)(this->Data[v13] * cfg->Scale9UpperScale) )
            {
              return 0;
            }
            if ( (unsigned int)++v12 >= 3 )
            {
              while ( keyData[v8 + 11] == this->Data[v8 + 11] )
              {
                if ( (unsigned int)++v8 >= 2 )
                  goto LABEL_41;
              }
              return 0;
            }
          }
        }
      }
    }
    else
    {
      v11 = cfg;
      FillLowerScale = cfg->FillLowerScale;
      FillUpperScale = cfg->FillUpperScale;
      if ( (flags & 0xC0) != 64 )
      {
        FillLowerScale = cfg->FillAliasedLowerScale;
        FillUpperScale = cfg->FillAliasedUpperScale;
      }
      switch ( flags & 7 )
      {
        case 1u:
          v28 = 0;
          v29 = keyData;
          v30 = (char *)this - (char *)keyData;
          while ( (float)(*(const float *)((char *)v29 + v30 + 40) * FillLowerScale) <= *v29
               && *v29 <= (float)(*(const float *)((char *)v29 + v30 + 40) * FillUpperScale) )
          {
            ++v28;
            ++v29;
            if ( v28 >= 3 )
              goto LABEL_41;
          }
          break;
        case 2u:
          StrokeLowerScale = cfg->StrokeLowerScale;
          StrokeUpperScale = cfg->StrokeUpperScale;
          if ( (flags & 0x20) != 0 )
          {
            v22 = this->Data[1] * *keyData;
            v23 = this->Data[0] * keyData[1];
            v24 = keyData[2];
            if ( v24 >= (float)(*(float *)&this[1].pPrev * 0.99900001)
              && (float)(*(float *)&this[1].pPrev * 1.001) >= v24
              && v22 >= (float)(v23 * 0.99900001)
              && (float)(v23 * 1.001) >= v22 )
            {
              StrokeLowerScale = cfg->FillLowerScale;
              StrokeUpperScale = cfg->FillUpperScale;
            }
          }
          v25 = 0;
          v26 = keyData;
          v27 = (char *)this - (char *)keyData;
          while ( (float)(*(const float *)((char *)v26 + v27 + 40) * StrokeLowerScale) <= *v26
               && *v26 <= (float)(*(const float *)((char *)v26 + v27 + 40) * StrokeUpperScale) )
          {
            ++v25;
            ++v26;
            if ( v25 >= 3 )
              goto LABEL_41;
          }
          break;
        case 3u:
          v17 = 0;
          v18 = (char *)this - (char *)keyData;
          v19 = keyData;
          while ( (float)(*(const float *)((char *)v19 + v18 + 40) * cfg->HintedStrokeLowerScale) <= *v19
               && *v19 <= (float)(*(const float *)((char *)v19 + v18 + 40) * cfg->HintedStrokeUpperScale) )
          {
            ++v17;
            ++v19;
            if ( v17 >= 3 )
              goto LABEL_41;
          }
          break;
        default:
LABEL_41:
          v31 = this->Size - 1;
          MorphTolerance = v11->MorphTolerance;
          v33 = this->Data[v31];
          v34 = keyData[v31];
          if ( (float)((float)(1.0 - MorphTolerance) * v33) <= v34
            && v34 <= (float)((float)(MorphTolerance + 1.0) * v33) )
          {
            return 1;
          }
          break;
      }
    }
  }
  return 0;
}

void __fastcall Scaleform::Render::MeshKeySet::OnEvict(
        Scaleform::Render::MeshKeySet *this,
        Scaleform::Render::MeshBase *pmesh)
{
  Scaleform::Render::MeshKey *pNext; // rdx

  pNext = this->Meshes.Root.pNext;
  if ( pNext != (Scaleform::Render::MeshKey *)&this->Meshes )
  {
    while ( pmesh != pNext->pMesh.pObject )
    {
      pNext = pNext->pNext;
      if ( pNext == (Scaleform::Render::MeshKey *)&this->Meshes )
        return;
    }
    if ( !pNext->UseCount )
      Scaleform::Render::MeshKeySet::DestroyKey(this, pNext);
  }
}

void __fastcall Scaleform::Render::MeshKeyManager::ProcessKillList(Scaleform::Render::MeshKeyManager *this)
{
  Scaleform::Lock *p_KeySetLock; // rbx
  Scaleform::List<Scaleform::Render::MeshKeySet,Scaleform::Render::MeshKeySet,Scaleform::ListNode<Scaleform::Render::MeshKeySet> > *v3; // rdx
  Scaleform::Render::MeshKeySet *v4; // rax
  Scaleform::Render::MeshKeySet *pNext; // r9
  Scaleform::Render::MeshKeySet *v6; // rdi
  Scaleform::Render::MeshKeySet *v7; // r8
  __int64 v8; // rax
  Scaleform::Render::MeshKeySet *pPrev; // rcx
  _QWORD v10[5]; // [rsp+0h] [rbp-38h] BYREF
  Scaleform::Render::MeshKeySet *v11; // [rsp+28h] [rbp-10h]

  p_KeySetLock = &this->KeySetLock;
  Scaleform::Lock::DoLock(&this->KeySetLock);
  v3 = &this->KeySets[1];
  v4 = (Scaleform::Render::MeshKeySet *)&this->KeySets[0].Root.8;
  if ( this == (Scaleform::Render::MeshKeyManager *)-80i64 )
    v4 = 0i64;
  if ( this->KeySets[1].Root.pNext != v4 )
  {
    pNext = this->KeySets[1].Root.pNext;
    v6 = (Scaleform::Render::MeshKeySet *)&v10[3];
    v7 = (Scaleform::Render::MeshKeySet *)&v3[-1].Root.8;
    v10[4] = v6;
    v8 = (__int64)v6;
    if ( !v3 )
      v7 = 0i64;
    v11 = (Scaleform::Render::MeshKeySet *)&v10[3];
    if ( pNext != v7 )
    {
      pPrev = v3->Root.pPrev;
      v3->Root.pPrev = v7;
      v3->Root.pNext = v7;
      pPrev->pNext = v6;
      pNext->pPrev = v6;
      v11->pPrev = pPrev;
      v8 = (__int64)pNext;
      v11 = pNext;
    }
    do
    {
      *(_QWORD *)(*(_QWORD *)(v8 + 8) + 16i64) = *(_QWORD *)(v8 + 16);
      *(_QWORD *)(*(_QWORD *)(v8 + 16) + 8i64) = *(_QWORD *)(v8 + 8);
      *(_QWORD *)(v8 + 8) = -1i64;
      *(_QWORD *)(v8 + 16) = -1i64;
      if ( v8 )
        (**(void (__fastcall ***)(__int64, __int64))v8)(v8, 1i64);
      v8 = (__int64)v11;
    }
    while ( v11 != v6 );
  }
  Scaleform::Lock::Unlock(p_KeySetLock);
}

void __fastcall Scaleform::Render::MeshKey::Release(Scaleform::Render::MeshKey *this)
{
  Scaleform::Render::MeshBase *pObject; // rcx

  if ( this->UseCount-- == 1 )
  {
    pObject = this->pMesh.pObject;
    if ( !pObject || pObject->IsEvicted(pObject) || (this->Flags & 0x110) != 0 )
      Scaleform::Render::MeshKeySet::DestroyKey(this->pKeySet, this);
  }
}

void __fastcall Scaleform::Render::MeshKeyManager::destroyKeySet(
        Scaleform::Render::MeshKeyManager *this,
        Scaleform::Render::MeshKeySet *keySet)
{
  Scaleform::Render::MeshProvider_KeySupport *pDelegate; // rcx
  Scaleform::RefCountVImpl *v5; // rax
  Scaleform::List<Scaleform::Render::MeshKeySet,Scaleform::Render::MeshKeySet,Scaleform::ListNode<Scaleform::Render::MeshKeySet> > *v6; // rdx
  Scaleform::Render::MeshKeySet *v7; // rax
  Scaleform::Render::MeshKeySet *v8; // rax
  Scaleform::Render::MeshKeySet *pNext; // r9
  Scaleform::Render::MeshKeySet *v10; // rdi
  Scaleform::Render::MeshKeySet *v11; // r8
  __int64 v12; // rax
  Scaleform::Render::MeshKeySet *pPrev; // rcx
  _QWORD v14[5]; // [rsp+0h] [rbp-38h] BYREF
  Scaleform::Render::MeshKeySet *v15; // [rsp+28h] [rbp-10h]

  Scaleform::Lock::DoLock(&this->KeySetLock);
  pDelegate = keySet->pDelegate;
  if ( pDelegate )
  {
    pDelegate->hKeySet.pKeySet = 0i64;
    v5 = (Scaleform::RefCountVImpl *)Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync(
                                       (volatile __int64 *)&pDelegate->hKeySet,
                                       0i64);
    if ( v5 )
      Scaleform::RefCountImpl::Release(v5);
    keySet->pDelegate = 0i64;
  }
  keySet->pPrev->pNext = keySet->pNext;
  keySet->pNext->pPrev = keySet->pPrev;
  keySet->pPrev = (Scaleform::Render::MeshKeySet *)-1i64;
  keySet->pNext = (Scaleform::Render::MeshKeySet *)-1i64;
  ((void (__fastcall *)(Scaleform::Render::MeshKeySet *, __int64))keySet->~MeshProvider)(keySet, 1i64);
  v6 = &this->KeySets[1];
  v7 = (Scaleform::Render::MeshKeySet *)&this->KeySets[0].Root.8;
  if ( this == (Scaleform::Render::MeshKeyManager *)-80i64 )
    v7 = 0i64;
  if ( this->KeySets[1].Root.pNext != v7 )
  {
    v8 = (Scaleform::Render::MeshKeySet *)&this->KeySets[0].Root.8;
    if ( this == (Scaleform::Render::MeshKeyManager *)-80i64 )
      v8 = 0i64;
    if ( this->KeySets[1].Root.pNext != v8 )
    {
      pNext = this->KeySets[1].Root.pNext;
      v10 = (Scaleform::Render::MeshKeySet *)&v14[3];
      v11 = (Scaleform::Render::MeshKeySet *)&this->KeySets[0].Root.8;
      v14[4] = v10;
      v12 = (__int64)v10;
      if ( this == (Scaleform::Render::MeshKeyManager *)-80i64 )
        v11 = 0i64;
      v15 = (Scaleform::Render::MeshKeySet *)&v14[3];
      if ( pNext != v11 )
      {
        pPrev = v6->Root.pPrev;
        v6->Root.pPrev = v11;
        this->KeySets[1].Root.pNext = v11;
        pPrev->pNext = v10;
        pNext->pPrev = v10;
        v15->pPrev = pPrev;
        v12 = (__int64)pNext;
        v15 = pNext;
      }
      do
      {
        *(_QWORD *)(*(_QWORD *)(v12 + 8) + 16i64) = *(_QWORD *)(v12 + 16);
        *(_QWORD *)(*(_QWORD *)(v12 + 16) + 8i64) = *(_QWORD *)(v12 + 8);
        *(_QWORD *)(v12 + 8) = -1i64;
        *(_QWORD *)(v12 + 16) = -1i64;
        if ( v12 )
          (**(void (__fastcall ***)(__int64, __int64))v12)(v12, 1i64);
        v12 = (__int64)v15;
      }
      while ( v15 != v10 );
    }
  }
  Scaleform::Lock::Unlock(&this->KeySetLock);
}

Scaleform::Render::MeshKeySet *__fastcall Scaleform::Render::MeshKeySet::findMatchingKey(
        Scaleform::Render::MeshKeySet *this,
        unsigned int layer,
        unsigned int flags,
        const float *keyData,
        const Scaleform::Render::ToleranceParams *cfg)
{
  Scaleform::Render::MeshKeySet *pNext; // rbx
  Scaleform::List<Scaleform::Render::MeshKey,Scaleform::Render::MeshKey,Scaleform::ListNode<Scaleform::Render::MeshKey> > *p_Meshes; // rsi

  pNext = (Scaleform::Render::MeshKeySet *)this->Meshes.Root.pNext;
  p_Meshes = &this->Meshes;
  if ( pNext == (Scaleform::Render::MeshKeySet *)&this->Meshes )
    return 0i64;
  while ( 1 )
  {
    _RAX = pNext->pManager.pObject;
    __asm
    {
      prefetcht1 byte ptr [rax+80h]
      prefetcht1 byte ptr [rax+60h]
      prefetcht1 byte ptr [rax+40h]
      prefetcht1 byte ptr [rax+20h]
      prefetcht1 byte ptr [rax]
    }
    _RDI = pNext->pPrev;
    __asm
    {
      prefetcht1 byte ptr [rdi+20h]
      prefetcht1 byte ptr [rdi]
    }
    if ( Scaleform::Render::MeshKey::Match((Scaleform::Render::MeshKey *)pNext, layer, flags, keyData, cfg) )
      break;
    pNext = _RDI;
    if ( _RDI == (Scaleform::Render::MeshKeySet *)p_Meshes )
      return 0i64;
  }
  return pNext;
}

void __fastcall Scaleform::Render::MeshKeyManager::providerLost(
        Scaleform::Render::MeshKeyManager *this,
        Scaleform::Render::MeshKeySetHandle *handle)
{
  Scaleform::Render::MeshKeySet *volatile pKeySet; // r9

  Scaleform::Lock::DoLock(&this->KeySetLock);
  pKeySet = handle->pKeySet;
  if ( pKeySet )
  {
    pKeySet->pPrev->pNext = pKeySet->pNext;
    pKeySet->pNext->pPrev = pKeySet->pPrev;
    pKeySet->pPrev = (Scaleform::Render::MeshKeySet *)-1i64;
    pKeySet->pNext = (Scaleform::Render::MeshKeySet *)-1i64;
    pKeySet->pPrev = this->KeySets[1].Root.pPrev;
    pKeySet->pNext = (Scaleform::Render::MeshKeySet *)&this->KeySets[0].Root.8;
    this->KeySets[1].Root.pPrev->pNext = pKeySet;
    this->KeySets[1].Root.pPrev = pKeySet;
    pKeySet->pDelegate = 0i64;
    handle->pKeySet = 0i64;
  }
  Scaleform::Lock::Unlock(&this->KeySetLock);
}

void __fastcall Scaleform::Render::MeshKeySetHandle::releaseCache(Scaleform::Render::MeshKeySetHandle *this)
{
  Scaleform::Render::MeshKeyManager *v2; // rax
  Scaleform::RefCountVImpl *v3; // rbx

  v2 = (Scaleform::Render::MeshKeyManager *)Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync(
                                              (volatile __int64 *)this,
                                              0i64);
  v3 = (Scaleform::RefCountVImpl *)v2;
  if ( v2 )
  {
    Scaleform::Render::MeshKeyManager::providerLost(v2, this);
    Scaleform::RefCountImpl::Release(v3);
  }
}

