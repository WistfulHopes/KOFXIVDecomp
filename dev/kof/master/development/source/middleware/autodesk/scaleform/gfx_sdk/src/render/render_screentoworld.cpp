#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_point3.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"

void Scaleform::Render::ScreenToWorld::GetWorldPoint(Scaleform::Render::Point<float> * ptOut); // 0x1403D18A0
void Scaleform::Render::ScreenToWorld::GetWorldPoint(Scaleform::Render::Point3<float> * ptOut); // 0x1403D13C0
void Scaleform::Render::ScreenToWorld::VectorMult(float * po, const float * pa, float x, float y, float z, float w); // 0x1403D18D0Scaleform::Render::Matrix4x4<float> *__fastcall Scaleform::Render::Matrix4x4<float>::GetInverse(
        Scaleform::Render::Matrix4x4<float> *this,
        Scaleform::Render::Matrix4x4<float> *result)
{
  float v2; // xmm3_4
  float v3; // xmm5_4
  float v4; // xmm7_4
  float v5; // xmm8_4
  float v6; // xmm9_4
  float v7; // xmm12_4
  float v8; // xmm13_4
  float v9; // xmm15_4
  float v10; // xmm10_4
  float v11; // xmm6_4
  float v12; // xmm9_4
  float v13; // xmm13_4
  float v14; // xmm14_4
  float v15; // xmm2_4
  float v16; // xmm12_4
  float v17; // xmm11_4
  float v18; // xmm10_4
  float v19; // xmm1_4
  float v20; // xmm6_4
  float v21; // xmm4_4
  float v22; // xmm0_4
  float v23; // xmm2_4
  float v24; // xmm3_4
  float v25; // xmm10_4
  float v26; // xmm9_4
  float v27; // xmm1_4
  float v28; // xmm6_4
  float v29; // xmm0_4
  float v30; // xmm2_4
  float v31; // xmm10_4
  float v32; // xmm9_4
  float v33; // xmm11_4
  float v34; // xmm9_4
  float v35; // xmm2_4
  float v36; // xmm1_4
  float v37; // xmm10_4
  float v38; // xmm3_4
  float v39; // xmm0_4
  float v40; // xmm1_4
  float v41; // xmm10_4
  float v42; // xmm9_4
  float v43; // xmm8_4
  float v44; // xmm7_4
  float v45; // xmm4_4
  float v46; // xmm3_4
  float v47; // xmm5_4
  float v48; // xmm15_4
  float v49; // xmm3_4
  float v50; // xmm2_4
  float v51; // xmm2_4
  float v52; // xmm0_4
  float v53; // xmm4_4
  float v54; // xmm1_4
  float v55; // xmm7_4
  float v56; // xmm15_4
  float v57; // xmm0_4
  float v58; // xmm8_4
  float v60; // [rsp+0h] [rbp-108h]
  float v61; // [rsp+4h] [rbp-104h]
  float v62; // [rsp+8h] [rbp-100h]
  float v63; // [rsp+Ch] [rbp-FCh]
  float v64; // [rsp+10h] [rbp-F8h]
  Scaleform::Render::Matrix4x4<float> v65; // [rsp+20h] [rbp-E8h]
  float v66; // [rsp+110h] [rbp+8h]
  float v67; // [rsp+110h] [rbp+8h]
  float v68; // [rsp+110h] [rbp+8h]
  float v69; // [rsp+120h] [rbp+18h]
  float v70; // [rsp+120h] [rbp+18h]
  float v71; // [rsp+128h] [rbp+20h]
  float v72; // [rsp+128h] [rbp+20h]

  v2 = this->M[2][0];
  v3 = this->M[1][3];
  v61 = this->M[0][0];
  v4 = this->M[2][1];
  v5 = this->M[0][3];
  v6 = this->M[3][1];
  v7 = this->M[3][3];
  v8 = this->M[2][2];
  v9 = this->M[2][3];
  v60 = this->M[1][2];
  v71 = (float)(v6 * v2) - (float)(this->M[3][0] * v4);
  v69 = (float)(this->M[3][2] * v2) - (float)(this->M[3][0] * v8);
  v66 = (float)(v7 * v2) - (float)(this->M[3][0] * v9);
  v10 = (float)(this->M[3][2] * v4) - (float)(v6 * v8);
  v11 = (float)(v7 * v4) - (float)(v6 * v9);
  v12 = (float)(v7 * v8) - (float)(this->M[3][2] * v9);
  v62 = (float)((float)(v12 * this->M[1][1]) - (float)(v11 * v60)) + (float)(v10 * v3);
  LODWORD(v13) = COERCE_UNSIGNED_INT((float)((float)(v12 * this->M[1][0]) - (float)(v66 * v60)) + (float)(v69 * v3)) ^ _xmm;
  v63 = (float)((float)(v11 * this->M[1][0]) - (float)(v66 * this->M[1][1])) + (float)(v71 * v3);
  LODWORD(v14) = COERCE_UNSIGNED_INT((float)((float)(v10 * this->M[1][0]) - (float)(v69 * this->M[1][1])) + (float)(v71 * v60)) ^ _xmm;
  v15 = (float)((float)((float)(v13 * this->M[0][1]) + (float)(v62 * this->M[0][0])) + (float)(v63 * this->M[0][2]))
      + (float)(v14 * v5);
  if ( v15 == 0.0 )
  {
    v65.M[0][2] = 0.0;
    *(_QWORD *)&v65.M[1][0] = 0x3F80000000000000i64;
    v65.M[1][2] = 0.0;
    *(_QWORD *)&v65.M[3][2] = 0x3F80000000000000i64;
    LODWORD(v65.M[0][3]) = LODWORD(v5) ^ _xmm;
    *(_QWORD *)&v65.M[0][0] = 1065353216i64;
    LODWORD(v65.M[1][3]) = LODWORD(v3) ^ _xmm;
    *(_QWORD *)&v65.M[2][0] = 0i64;
    LODWORD(v65.M[2][3]) = LODWORD(v9) ^ _xmm;
    v65.M[2][2] = 1.0;
    *(_QWORD *)&v65.M[3][0] = 0i64;
    *result = v65;
  }
  else
  {
    v16 = 1.0 / v15;
    LODWORD(v17) = COERCE_UNSIGNED_INT(
                     (float)((float)((float)(v12 * this->M[0][1]) - (float)(v11 * this->M[0][2])) + (float)(v10 * v5))
                   * (float)(1.0 / v15)) ^ _xmm;
    v18 = (float)((float)(v10 * this->M[0][0]) - (float)(v69 * this->M[0][1])) + (float)(v71 * this->M[0][2]);
    v19 = this->M[3][3];
    v70 = (float)((float)((float)(v12 * this->M[0][0]) - (float)(v66 * this->M[0][2])) + (float)(v69 * v5))
        * (float)(1.0 / v15);
    LODWORD(v72) = COERCE_UNSIGNED_INT(
                     (float)((float)((float)(v11 * this->M[0][0]) - (float)(v66 * this->M[0][1])) + (float)(v71 * v5))
                   * (float)(1.0 / v15)) ^ _xmm;
    v20 = this->M[1][0];
    v64 = v18 * (float)(1.0 / v15);
    v21 = (float)(this->M[3][1] * v20) - (float)(this->M[3][0] * this->M[1][1]);
    v22 = this->M[3][0];
    v23 = (float)(v19 * v20) - (float)(v22 * v3);
    v24 = (float)(this->M[3][2] * v20) - (float)(v22 * this->M[1][2]);
    v25 = (float)(this->M[3][2] * this->M[1][1]) - (float)(this->M[3][1] * this->M[1][2]);
    v26 = (float)(v19 * this->M[1][1]) - (float)(this->M[3][1] * v3);
    v27 = (float)(v19 * v60) - (float)(this->M[3][2] * v3);
    v28 = (float)((float)(v27 * this->M[0][1]) - (float)(v26 * this->M[0][2])) + (float)(v25 * v5);
    v29 = v23 * this->M[0][2];
    v30 = v23 * this->M[0][1];
    v31 = v25 * this->M[0][0];
    v32 = v26 * this->M[0][0];
    result->M[0][1] = v17;
    v33 = this->M[0][3];
    v34 = v32 - v30;
    v35 = this->M[1][1];
    v67 = (float)(v27 * v61) - v29;
    v36 = v24;
    v37 = v31 - (float)(v24 * this->M[0][1]);
    result->M[0][2] = v28 * v16;
    v38 = this->M[2][0];
    v39 = v67 + (float)(v36 * v5);
    v40 = this->M[1][0];
    LODWORD(v68) = COERCE_UNSIGNED_INT(v39 * v16) ^ _xmm;
    v41 = v37 + (float)(v21 * this->M[0][2]);
    v42 = (float)(v34 + (float)(v21 * v5)) * v16;
    v43 = (float)(this->M[2][1] * v40) - (float)(v38 * v35);
    v44 = (float)(this->M[2][2] * v40) - (float)(v38 * this->M[1][2]);
    v45 = (float)(v9 * v40) - (float)(v38 * v3);
    v46 = v9;
    v47 = (float)(this->M[2][2] * v35) - (float)(this->M[2][1] * this->M[1][2]);
    v48 = (float)(v9 * this->M[1][2]) - (float)(this->M[2][2] * this->M[1][3]);
    v49 = (float)(v46 * v35) - (float)(this->M[2][1] * this->M[1][3]);
    result->M[0][0] = v16 * v62;
    v50 = (float)((float)(v48 * this->M[0][1]) - (float)(v49 * this->M[0][2])) + (float)(v47 * v33);
    result->M[1][0] = v16 * v13;
    result->M[1][1] = v70;
    LODWORD(result->M[0][3]) = COERCE_UNSIGNED_INT(v50 * v16) ^ _xmm;
    v51 = this->M[0][0];
    v52 = v45 * this->M[0][2];
    v53 = v45 * this->M[0][1];
    result->M[1][2] = v68;
    v54 = v44;
    v55 = v44 * this->M[0][1];
    result->M[2][2] = v42;
    v56 = (float)((float)(v48 * v51) - v52) + (float)(v54 * v33);
    LODWORD(result->M[3][2]) = COERCE_UNSIGNED_INT(v41 * v16) ^ _xmm;
    result->M[2][0] = v16 * v63;
    v57 = v43;
    v58 = v43 * this->M[0][2];
    result->M[2][1] = v72;
    result->M[1][3] = v56 * v16;
    result->M[3][0] = v16 * v14;
    LODWORD(result->M[2][3]) = COERCE_UNSIGNED_INT((float)((float)((float)(v49 * v51) - v53) + (float)(v57 * v33)) * v16) ^ _xmm;
    result->M[3][1] = v64;
    result->M[3][3] = (float)((float)((float)(v47 * v51) - v55) + v58) * v16;
  }
  return result;
}

void __fastcall Scaleform::Render::ScreenToWorld::GetWorldPoint(
        Scaleform::Render::ScreenToWorld *this,
        Scaleform::Render::Point3<float> *ptOut)
{
  Scaleform::Render::Matrix4x4<float> *Inverse; // rax
  float v5; // xmm9_4
  __m128 v6; // xmm14
  __m128 v7; // xmm15
  float v8; // xmm10_4
  float v9; // xmm5_4
  float v10; // xmm8_4
  float v11; // xmm0_4
  float v12; // xmm2_4
  float v13; // xmm10_4
  float v14; // xmm9_4
  float w; // xmm4_4
  float v16; // xmm9_4
  float v17; // xmm1_4
  float v18; // xmm13_4
  float v19; // xmm11_4
  float v20; // xmm12_4
  float v21; // xmm5_4
  float v22; // xmm8_4
  float v23; // xmm9_4
  float v24; // xmm13_4
  float v25; // xmm11_4
  float v26; // xmm12_4
  float v27; // xmm6_4
  float v28; // xmm10_4
  float v29; // xmm4_4
  float v30; // xmm2_4
  float v31; // xmm7_4
  float v32; // xmm3_4
  float v33; // xmm3_4
  float v34; // xmm5_4
  float v35; // xmm0_4
  float v36; // xmm8_4
  float v37; // xmm6_4
  float v38; // xmm2_4
  float v39; // xmm5_4
  float v40; // xmm8_4
  float v41; // xmm6_4
  float v42; // xmm4_4
  float v43; // xmm0_4
  float v44; // xmm1_4
  float v45; // [rsp+44h] [rbp-BCh]
  float v46; // [rsp+48h] [rbp-B8h]
  float po[4]; // [rsp+50h] [rbp-B0h] BYREF
  float v48[4]; // [rsp+60h] [rbp-A0h] BYREF
  __m128 v49; // [rsp+70h] [rbp-90h]
  Scaleform::Render::Matrix4x4<float> v50; // [rsp+80h] [rbp-80h] BYREF
  Scaleform::Render::Matrix4x4<float> result; // [rsp+C0h] [rbp-40h] BYREF

  if ( this->Sx != 3.4028235e38 && this->Sy != 3.4028235e38 )
  {
    this->MatInvProj = *Scaleform::Render::Matrix4x4<float>::GetInverse(&this->MatProj, &result);
    Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(
      (Scaleform::Render::Matrix3x4<float> *)&v50,
      &this->MatView,
      &this->MatWorld);
    *(_OWORD *)&result.M[0][0] = *(_OWORD *)&v50.M[0][0];
    *(_OWORD *)&result.M[1][0] = *(_OWORD *)&v50.M[1][0];
    *(_OWORD *)&result.M[2][0] = *(_OWORD *)&v50.M[2][0];
    *(_OWORD *)&v50.M[3][0] = _xmm;
    Inverse = Scaleform::Render::Matrix4x4<float>::GetInverse(&v50, &result);
    v5 = this->MatProj.M[3][1];
    v6 = *(__m128 *)&Inverse->M[0][0];
    v7 = *(__m128 *)&Inverse->M[2][0];
    v8 = (float)(this->MatProj.M[2][1] * 0.0) + (float)(this->MatProj.M[2][0] * 0.0);
    v9 = this->MatProj.M[2][2] * 100.0;
    v10 = v8 - (float)(this->MatProj.M[2][2] * 0.5);
    v11 = this->MatProj.M[3][0] * 0.0;
    v12 = this->MatProj.M[3][2];
    v49 = *(__m128 *)&Inverse->M[1][0];
    v13 = (float)(v8 - v9) + this->MatProj.M[2][3];
    v14 = (float)(v5 * 0.0) + v11;
    w = (float)(v14 - (float)(v12 * 0.5)) + this->MatProj.M[3][3];
    v16 = (float)(v14 - (float)(v12 * 100.0)) + this->MatProj.M[3][3];
    Scaleform::Render::ScreenToWorld::VectorMult(
      this,
      po,
      (const float *)&this->MatInvProj,
      w * this->Sx,
      w * this->Sy,
      w * (float)(v10 + this->MatProj.M[2][3]),
      w);
    Scaleform::Render::ScreenToWorld::VectorMult(
      this,
      v48,
      (const float *)&this->MatInvProj,
      v16 * this->Sx,
      v16 * this->Sy,
      v16 * v13,
      v16);
    v17 = v48[3];
    v18 = v48[0];
    v19 = v48[1];
    v20 = v48[2];
    v21 = po[1] * po[3];
    v22 = po[0] * po[3];
    v23 = po[2] * po[3];
    *(__m128 *)v48 = _mm_shuffle_ps(v6, v6, 85);
    v24 = v18 * v17;
    v25 = v19 * v17;
    v26 = v20 * v17;
    v27 = _mm_shuffle_ps(v6, v6, 170).m128_f32[0];
    v28 = _mm_shuffle_ps(v6, v6, 255).m128_f32[0];
    v45 = (float)((float)((float)(v6.m128_f32[0] * (float)(po[0] * po[3])) + (float)(v48[0] * (float)(po[1] * po[3])))
                + (float)(v27 * (float)(po[2] * po[3])))
        + v28;
    v29 = _mm_shuffle_ps(v49, v49, 85).m128_f32[0];
    v30 = _mm_shuffle_ps(v49, v49, 170).m128_f32[0];
    v31 = _mm_shuffle_ps(v49, v49, 255).m128_f32[0];
    v32 = (float)((float)(v29 * (float)(po[1] * po[3])) + (float)(v49.m128_f32[0] * (float)(po[0] * po[3])))
        + (float)(v30 * (float)(po[2] * po[3]));
    *(__m128 *)po = _mm_shuffle_ps(v7, v7, 85);
    v46 = v32 + v31;
    v33 = _mm_shuffle_ps(v7, v7, 255).m128_f32[0];
    v34 = (float)(po[0] * v21) + (float)(v7.m128_f32[0] * v22);
    v35 = _mm_shuffle_ps(v7, v7, 170).m128_f32[0];
    v36 = (float)((float)(v48[0] * v25) + (float)(v6.m128_f32[0] * v24)) + (float)(v27 * v26);
    v37 = (float)((float)(v49.m128_f32[0] * v24) + (float)(v29 * v25)) + (float)(v30 * v26);
    v38 = 0.0;
    v39 = (float)(v34 + (float)(v35 * v23)) + v33;
    v40 = (float)(v36 + v28) - v45;
    v41 = (float)(v37 + v31) - v46;
    v42 = (float)((float)((float)((float)(po[0] * v25) + (float)(v7.m128_f32[0] * v24)) + (float)(v35 * v26)) + v33)
        - v39;
    if ( v42 != 0.0 )
      LODWORD(v38) = COERCE_UNSIGNED_INT(v39 / v42) ^ _xmm;
    v43 = (float)(v38 * v40) + v45;
    v44 = (float)(v38 * v41) + v46;
    ptOut->x = v43;
    this->LastX = v43;
    ptOut->y = v44;
    this->LastY = v44;
    ptOut->z = (float)(v38 * v42) + v39;
  }
}

void __fastcall Scaleform::Render::ScreenToWorld::GetWorldPoint(
        Scaleform::Render::ScreenToWorld *this,
        Scaleform::Render::Point<float> *ptOut)
{
  float y; // xmm1_4
  Scaleform::Render::Point3<float> ptOuta; // [rsp+20h] [rbp-18h] BYREF

  Scaleform::Render::ScreenToWorld::GetWorldPoint(this, &ptOuta);
  y = ptOuta.y;
  ptOut->x = ptOuta.x;
  ptOut->y = y;
}

void __fastcall Scaleform::Render::ScreenToWorld::VectorMult(
        Scaleform::Render::ScreenToWorld *this,
        float *po,
        const float *pa,
        float x,
        float y,
        float z,
        float w)
{
  *po = (float)((float)((float)(y * pa[1]) + (float)(x * *pa)) + (float)(z * pa[2])) + (float)(w * pa[3]);
  po[1] = (float)((float)((float)(x * pa[4]) + (float)(y * pa[5])) + (float)(z * pa[6])) + (float)(w * pa[7]);
  po[2] = (float)((float)((float)(x * pa[8]) + (float)(y * pa[9])) + (float)(z * pa[10])) + (float)(w * pa[11]);
  po[3] = (float)((float)((float)(x * pa[12]) + (float)(y * pa[13])) + (float)(z * pa[14])) + (float)(w * pa[15]);
}

