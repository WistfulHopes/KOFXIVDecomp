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

bool Scaleform::Render::TestQuadCollinearity(Scaleform::Render::TessBase * con, const Scaleform::Render::ToleranceParams & param, float x1, float y1, float x2, float y2, float x3, float y3); // 0x1403E8F60
void Scaleform::Render::TessellateQuadRecursively(Scaleform::Render::TessBase * con, const Scaleform::Render::ToleranceParams & param, float toleranceSq, float x1, float y1, float x2, float y2, float x3, float y3, long level); // 0x1403E8D10
void Scaleform::Render::TessellateQuadCurve(Scaleform::Render::TessBase * con, const Scaleform::Render::ToleranceParams & param, float x2, float y2, float x3, float y3); // 0x1403E8C00
void Scaleform::Render::TessellateCubicRecursively(Scaleform::Render::TessBase * con, const Scaleform::Render::ToleranceParams & param, float toleranceSq, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, long level); // 0x1403E84B0
void Scaleform::Render::TessellateCubicCurve(Scaleform::Render::TessBase * con, const Scaleform::Render::ToleranceParams & param, float x2, float y2, float x3, float y3, float x4, float y4); // 0x1403E83D0void __fastcall Scaleform::Render::TessellateCubicCurve(
        Scaleform::Render::TessBase *con,
        const Scaleform::Render::ToleranceParams *param,
        float x2,
        float y2,
        float x3,
        float y3,
        float x4,
        float y4)
{
  double y1; // xmm0_8
  float v11; // xmm6_4

  y1 = ((double (__fastcall *)(Scaleform::Render::TessBase *))con->GetLastX)(con);
  v11 = *(float *)&y1;
  *(float *)&y1 = con->GetLastY(con);
  Scaleform::Render::TessellateCubicRecursively(
    con,
    param,
    (float)(param->CurveTolerance * 0.25) * (float)(param->CurveTolerance * 0.25),
    v11,
    *(float *)&y1,
    x2,
    y2,
    x3,
    y3,
    x4,
    y4,
    0);
}

void __fastcall Scaleform::Render::TessellateCubicRecursively(
        Scaleform::Render::TessBase *con,
        const Scaleform::Render::ToleranceParams *param,
        float toleranceSq,
        float x1,
        float y1,
        float x2,
        float y2,
        float x3,
        float y3,
        float x4,
        float y4,
        int level)
{
  int v12; // edi
  float v22; // xmm5_4
  float v23; // xmm3_4
  float v24; // xmm6_4
  float v25; // xmm4_4
  int v26; // eax
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  double v30; // xmm6_8
  float v31; // xmm7_4
  float v32; // xmm0_4
  float v33; // xmm2_4
  bool v34; // cc
  float v35; // xmm0_4
  float v36; // xmm2_4
  float v37; // xmm0_4
  float v38; // xmm2_4
  float v39; // xmm4_4
  float v40; // xmm2_4
  float v41; // xmm7_4
  float v42; // xmm1_4
  float v43; // xmm4_4
  float v44; // xmm2_4
  float v45; // xmm13_4
  float v46; // xmm0_4
  float v47; // xmm2_4
  float v48; // [rsp+64h] [rbp-C4h]
  float v49; // [rsp+68h] [rbp-C0h]
  float v50; // [rsp+78h] [rbp-B0h]
  float v51; // [rsp+7Ch] [rbp-ACh]
  int levela; // [rsp+188h] [rbp+60h]

  v12 = level;
  if ( level <= (signed int)param->CurveRecursionLimit )
  {
    while ( 1 )
    {
      v49 = (float)(y1 + y2) * 0.5;
      *(float *)&levela = (float)((float)((float)(x2 + x3) * 0.5) + (float)((float)(x1 + x2) * 0.5)) * 0.5;
      v51 = (float)((float)((float)(x3 + x4) * 0.5) + (float)((float)(x2 + x3) * 0.5)) * 0.5;
      v48 = (float)((float)((float)(y2 + y3) * 0.5) + v49) * 0.5;
      v50 = (float)((float)((float)(y3 + y4) * 0.5) + (float)((float)(y2 + y3) * 0.5)) * 0.5;
      v22 = x4 - x1;
      v23 = y4 - y1;
      v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(x2 - x4) * (float)(y4 - y1))
                                                      - (float)((float)(y2 - y4) * (float)(x4 - x1)))) & _xmm);
      v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(x3 - x4) * (float)(y4 - y1))
                                                      - (float)((float)(y3 - y4) * (float)(x4 - x1)))) & _xmm);
      v26 = 0;
      if ( v24 > 1.0e-10 )
        v26 = 2;
      v27 = v26 + (v25 > 1.0e-10);
      if ( !v27 )
        break;
      v28 = v27 - 1;
      if ( !v28 )
      {
        if ( (float)((float)((float)(v23 * v23) + (float)(v22 * v22)) * toleranceSq) < (float)(v25 * v25) )
          goto LABEL_45;
        v37 = atan2f(y4 - y3, x4 - x3);
        v38 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v37 - atan2f(y3 - y2, x3 - x2))) & _xmm);
        if ( v38 >= 3.1415927 )
          v38 = 6.2831855 - v38;
        v34 = v38 >= 0.25;
        goto LABEL_44;
      }
      v29 = v28 - 1;
      if ( v29 )
      {
        if ( v29 != 1
          || (float)((float)((float)(v23 * v23) + (float)(v22 * v22)) * toleranceSq) < (float)((float)(v25 + v24)
                                                                                             * (float)(v25 + v24)) )
        {
          goto LABEL_45;
        }
        v30 = atan2f(y3 - y2, x3 - x2);
        v31 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v30 - atan2((float)(y2 - y1), (float)(x2 - x1)))) & _xmm);
        v32 = atan2((float)(y4 - y3), (float)(x4 - x3)) - v30;
        v33 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v32) & _xmm);
        if ( v31 >= 3.1415927 )
          v31 = 6.2831855 - v31;
        if ( v33 >= 3.1415927 )
          v33 = 6.2831855 - v33;
        v34 = (float)(v33 + v31) >= 0.25;
        goto LABEL_44;
      }
      if ( (float)((float)((float)(v23 * v23) + (float)(v22 * v22)) * toleranceSq) >= (float)(v24 * v24) )
      {
        v35 = atan2f(y3 - y2, x3 - x2);
        v36 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v35 - atan2f(y2 - y1, x2 - x1))) & _xmm);
        if ( v36 >= 3.1415927 )
          v36 = 6.2831855 - v36;
        if ( v36 < 0.25 )
        {
LABEL_18:
          ((void (__fastcall *)(Scaleform::Render::TessBase *))con->AddVertex)(con);
          return;
        }
      }
LABEL_45:
      Scaleform::Render::TessellateCubicRecursively(
        con,
        param,
        toleranceSq,
        x1,
        y1,
        (float)(x1 + x2) * 0.5,
        v49,
        *(float *)&levela,
        v48,
        (float)(v51 + *(float *)&levela) * 0.5,
        (float)(v50 + v48) * 0.5,
        ++v12);
      y1 = (float)(v50 + v48) * 0.5;
      y3 = (float)(y3 + y4) * 0.5;
      x1 = (float)(v51 + *(float *)&levela) * 0.5;
      x3 = (float)(x3 + x4) * 0.5;
      y2 = v50;
      x2 = v51;
      if ( v12 > (signed int)param->CurveRecursionLimit )
        return;
    }
    v39 = (float)(v23 * v23) + (float)(v22 * v22);
    if ( v39 == 0.0 )
    {
      v40 = (float)((float)(y3 - y4) * (float)(y3 - y4)) + (float)((float)(x3 - x4) * (float)(x3 - x4));
      v41 = (float)((float)(y2 - y1) * (float)(y2 - y1)) + (float)((float)(x2 - x1) * (float)(x2 - x1));
LABEL_42:
      if ( toleranceSq > v41 )
        goto LABEL_18;
      v34 = toleranceSq <= v40;
LABEL_44:
      if ( !v34 )
        goto LABEL_18;
      goto LABEL_45;
    }
    v42 = 1.0 / v39;
    v43 = (float)((float)((float)(x2 - x1) * v22) + (float)((float)(y2 - y1) * v23)) * (float)(1.0 / v39);
    v44 = (float)((float)((float)(x3 - x1) * v22) + (float)((float)(y3 - y1) * v23)) * v42;
    if ( v43 > 0.0 && v43 < 1.0 && v44 > 0.0 && v44 < 1.0 )
      goto LABEL_18;
    if ( v43 > 0.0 )
    {
      if ( v43 >= 1.0 )
      {
        v45 = x4;
        v41 = (float)((float)(y4 - y2) * (float)(y4 - y2)) + (float)((float)(x4 - x2) * (float)(x4 - x2));
LABEL_36:
        if ( v44 > 0.0 )
        {
          if ( v44 < 1.0 )
          {
            v47 = (float)(v44 * v23) + y1;
            v46 = (float)((float)((float)((float)((float)(x3 - x1) * v22) + (float)((float)(y3 - y1) * v23)) * v42) * v22)
                + x1;
          }
          else
          {
            v46 = v45;
            v47 = y4;
          }
        }
        else
        {
          v46 = x1;
          v47 = y1;
        }
        v40 = (float)((float)(v47 - y3) * (float)(v47 - y3)) + (float)((float)(v46 - x3) * (float)(v46 - x3));
        goto LABEL_42;
      }
      v41 = (float)((float)((float)((float)(v43 * v23) + y1) - y2) * (float)((float)((float)(v43 * v23) + y1) - y2))
          + (float)((float)((float)((float)(v43 * v22) + x1) - x2) * (float)((float)((float)(v43 * v22) + x1) - x2));
    }
    else
    {
      v41 = (float)((float)(y1 - y2) * (float)(y1 - y2)) + (float)((float)(x1 - x2) * (float)(x1 - x2));
    }
    v45 = x4;
    goto LABEL_36;
  }
}

void __fastcall Scaleform::Render::TessellateQuadCurve(
        Scaleform::Render::TessBase *con,
        const Scaleform::Render::ToleranceParams *param,
        float x2,
        float y2,
        float x3,
        float y3)
{
  double v8; // xmm0_8
  float v9; // xmm8_4
  double v10; // xmm0_8

  v8 = ((double (__fastcall *)(Scaleform::Render::TessBase *))con->GetLastX)(con);
  v9 = *(float *)&v8;
  v10 = ((double (__fastcall *)(Scaleform::Render::TessBase *))con->GetLastY)(con);
  if ( !Scaleform::Render::TestQuadCollinearity(con, param, v9, *(float *)&v10, x2, y2, x3, y3) )
    Scaleform::Render::TessellateQuadRecursively(
      con,
      param,
      (float)(param->CurveTolerance * 0.25) * (float)(param->CurveTolerance * 0.25),
      v9,
      *(float *)&v10,
      x2,
      y2,
      x3,
      y3,
      0);
}

void __fastcall Scaleform::Render::TessellateQuadRecursively(
        Scaleform::Render::TessBase *con,
        const Scaleform::Render::ToleranceParams *param,
        float toleranceSq,
        float x1,
        float y1,
        float x2,
        float y2,
        float x3,
        float y3,
        int level)
{
  float v10; // xmm5_4
  float v13; // xmm10_4
  float v14; // xmm11_4
  float v15; // xmm4_4
  float v17; // xmm0_4
  float v18; // xmm1_4

  v10 = y1;
  v13 = x2;
  v14 = y2;
  for ( LODWORD(v15) = COERCE_UNSIGNED_INT((float)((float)(y3 - y1) * (float)(x2 - x3)) - (float)((float)(x3 - x1)
                                                                                                * (float)(y2 - y3))) & _xmm;
        v15 != 0.0;
        LODWORD(v15) = COERCE_UNSIGNED_INT((float)((float)(y3 - v10) * (float)(v13 - x3)) - (float)((float)(x3 - x1)
                                                                                                  * (float)(v14 - y3))) & _xmm )
  {
    if ( (float)((float)((float)((float)(y3 - v10) * (float)(y3 - v10)) + (float)((float)(x3 - x1) * (float)(x3 - x1)))
               * toleranceSq) >= (float)(v15 * v15) )
      break;
    if ( level >= (signed int)param->CurveRecursionLimit )
      break;
    ++level;
    v17 = (float)(v10 + v14) * 0.5;
    v18 = (float)(x1 + v13) * 0.5;
    v14 = (float)(v14 + y3) * 0.5;
    v13 = (float)(v13 + x3) * 0.5;
    Scaleform::Render::TessellateQuadRecursively(
      con,
      param,
      toleranceSq,
      x1,
      v10,
      v18,
      v17,
      (float)(v13 + v18) * 0.5,
      (float)(v14 + v17) * 0.5,
      level);
    v10 = (float)(v14 + v17) * 0.5;
    x1 = (float)(v13 + v18) * 0.5;
  }
  ((void (__fastcall *)(Scaleform::Render::TessBase *))con->AddVertex)(con);
}

char __fastcall Scaleform::Render::TestQuadCollinearity(
        Scaleform::Render::TessBase *con,
        const Scaleform::Render::ToleranceParams *param,
        float x1,
        float y1,
        float x2,
        float y2,
        float x3,
        float y3)
{
  float v10; // xmm4_4
  float v11; // xmm5_4
  float v12; // xmm3_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  float v15; // xmm11_4

  v10 = x3 - x1;
  v11 = y3 - y1;
  v12 = (float)(v11 * v11) + (float)(v10 * v10);
  LODWORD(v13) = COERCE_UNSIGNED_INT((float)((float)(x2 - x3) * v11) - (float)((float)(y2 - y3) * (float)(x3 - x1))) & _xmm;
  if ( (float)((float)((float)(param->CollinearityTolerance * 0.25) * (float)(param->CollinearityTolerance * 0.25)) * v12) < (float)(v13 * v13) )
    return 0;
  if ( v12 == 0.0
    || (v14 = (float)((float)((float)(y2 - y1) * v11) + (float)((float)(x2 - x1) * v10)) / v12, v14 < 0.0)
    || v14 > 1.0 )
  {
    v15 = sqrtf((float)((float)(y2 - y1) * (float)(y2 - y1)) + (float)((float)(x2 - x1) * (float)(x2 - x1)));
    if ( (float)(sqrtf((float)((float)(y3 - y2) * (float)(y3 - y2)) + (float)((float)(x3 - x2) * (float)(x3 - x2))) + v15) != 0.0 )
      ((void (__fastcall *)(Scaleform::Render::TessBase *))con->AddVertex)(con);
  }
  ((void (__fastcall *)(Scaleform::Render::TessBase *))con->AddVertex)(con);
  return 1;
}

