#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agpointer.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglquat.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14089E39C
OGLEffectQuat::~OGLEffectQuat(); // 0x140156330
void OGLEffectQuat::getRotateEuler(float * rfX, float * rfY, float * rfZ); // 0x140156340
void OGLEffectQuat::setRotateEuler(float fX, float fY, float fZ); // 0x1401565D0
void OGLEffectQuat::matrixToQuaternion(OGLMatrix * mIn); // 0x140156710//decompilation failure at 14089E39C!
void __fastcall OGLEffectQuat::~OGLEffectQuat(OGLEffectQuat *this)
{
  this->__vftable = (OGLEffectQuat_vtbl *)&OGLEffectQuat::`vftable';
}

void __fastcall OGLEffectQuat::getRotateEuler(OGLEffectQuat *this, float *rfX, float *rfY, float *rfZ)
{
  OGLQuat *v7; // rax
  float x; // xmm8_4
  float y; // xmm7_4
  float z; // xmm9_4
  float w; // xmm10_4
  float v12; // xmm0_4
  float v13; // xmm6_4
  float v14; // xmm13_4
  float v15; // xmm15_4
  float v16; // xmm14_4
  float v17; // xmm1_4
  float v18; // xmm12_4
  float v19; // xmm10_4
  float v20; // xmm7_4
  float v21; // xmm13_4
  float v22; // xmm9_4
  float v23; // xmm8_4
  float v24; // xmm7_4
  float v25; // xmm0_4
  float v26; // xmm0_4
  float v27; // xmm0_4
  float v28; // xmm8_4
  float v29; // [rsp+E0h] [rbp+8h]
  float v30; // [rsp+F0h] [rbp+18h]

  v7 = &this->OGLQuat;
  if ( !this )
    v7 = 0i64;
  x = v7->x;
  y = v7->y;
  z = v7->z;
  w = v7->w;
  v12 = sqrtf((float)((float)((float)(y * y) + (float)(x * x)) + (float)(z * z)) + (float)(w * w));
  v13 = 0.0;
  if ( v12 != 0.0 )
  {
    x = x * (float)(1.0 / v12);
    y = y * (float)(1.0 / v12);
    z = z * (float)(1.0 / v12);
    w = w * (float)(1.0 / v12);
  }
  v14 = y;
  v15 = z * z;
  v16 = z * y;
  v17 = w * x;
  v18 = w * y;
  v30 = x * x;
  v19 = w * z;
  v20 = (float)(y * y) + (float)(z * z);
  v21 = v14 * x;
  v29 = z * x;
  v22 = (float)((float)(z * x) - v18) + (float)((float)(z * x) - v18);
  v23 = 1.0 - (float)(v20 + v20);
  v24 = (float)(v19 + v21) + (float)(v19 + v21);
  v25 = 1.0 - (float)(v22 * v22);
  if ( v25 <= 0.0 )
    v26 = 0.0;
  else
    v26 = sqrtf(v25);
  *rfY = atan2f(COERCE_FLOAT(LODWORD(v22) ^ _xmm), v26);
  v27 = sqrtf((float)(v24 * v24) + (float)(v23 * v23));
  if ( v27 == 0.0 )
  {
    v28 = *(float *)&FLOAT_1_0;
  }
  else
  {
    v13 = v24 / v27;
    v28 = v23 / v27;
  }
  *rfX = atan2f(
           (float)((float)((float)(v18 + v29) + (float)(v18 + v29)) * v13)
         - (float)((float)((float)(v16 - v17) + (float)(v16 - v17)) * v28),
           (float)((float)(1.0 - (float)((float)(v15 + v30) + (float)(v15 + v30))) * v28)
         - (float)((float)((float)(v21 - v19) + (float)(v21 - v19)) * v13));
  *rfZ = atan2f(v13, v28);
}

void __fastcall OGLEffectQuat::matrixToQuaternion(OGLEffectQuat *this, OGLMatrix *mIn)
{
  float v2; // xmm0_4
  int v3; // edi
  float v4; // xmm2_4
  float v5; // xmm6_4
  float v6; // xmm7_4
  float v7; // xmm4_4
  float v8; // xmm8_4
  float v9; // xmm9_4
  float v11; // xmm5_4
  float v12; // xmm11_4
  float v13; // xmm2_4
  float v14; // xmm10_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  int v17; // edi
  int v18; // edi

  v2 = mIn->m[10];
  v3 = 0;
  v4 = mIn->m[5];
  v5 = mIn->m[8];
  v6 = mIn->m[4];
  v7 = (float)(v2 - mIn->m[0]) - v4;
  v8 = mIn->m[6];
  v9 = mIn->m[1];
  v11 = (float)(mIn->m[0] - v4) - v2;
  v12 = mIn->m[2];
  v13 = (float)(v4 + mIn->m[0]) + v2;
  v14 = mIn->m[9];
  if ( v11 > v13 )
  {
    v13 = v11;
    v3 = 1;
  }
  if ( (float)((float)(mIn->m[5] - mIn->m[0]) - v2) > v13 )
  {
    v13 = (float)(mIn->m[5] - mIn->m[0]) - v2;
    v3 = 2;
  }
  if ( v7 > v13 )
  {
    v13 = v7;
    v3 = 3;
  }
  v15 = sqrtf(v13 + 1.0) * 0.5;
  v16 = 0.25 / v15;
  if ( v3 )
  {
    v17 = v3 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        if ( v18 == 1 )
        {
          this->z = v15;
          this->w = (float)(v6 + v9) * v16;
          this->x = (float)(v5 + v12) * v16;
          this->y = (float)(v8 - v14) * v16;
        }
      }
      else
      {
        this->y = v15;
        this->w = (float)(v5 - v12) * v16;
        this->x = (float)(v6 + v9) * v16;
        this->z = (float)(v14 + v8) * v16;
      }
    }
    else
    {
      this->x = v15;
      this->w = (float)(v8 - v14) * v16;
      this->y = (float)(v6 + v9) * v16;
      this->z = (float)(v5 + v12) * v16;
    }
  }
  else
  {
    this->w = v15;
    this->x = (float)(v8 - v14) * v16;
    this->y = (float)(v5 - v12) * v16;
    this->z = (float)(v9 - v6) * v16;
  }
}

void __fastcall OGLEffectQuat::setRotateEuler(OGLEffectQuat *this, float fX, float fY, float fZ)
{
  OGLQuat q; // [rsp+20h] [rbp-60h] BYREF
  void **v6; // [rsp+30h] [rbp-50h]
  OGLQuat v7; // [rsp+38h] [rbp-48h] BYREF

  v6 = &OGLEffectQuat::`vftable';
  v7 = (OGLQuat)_xmm;
  q.w = cosf(fZ * 0.5);
  *(_QWORD *)&q.x = 0i64;
  q.z = sinf(fZ * 0.5);
  OGLQuat::multiply(&v7, &q);
  OGLQuat::normalize(&v7);
  q.w = cosf(fX * 0.5);
  q.x = sinf(fX * 0.5);
  *(_QWORD *)&q.y = 0i64;
  OGLQuat::multiply(&v7, &q);
  OGLQuat::normalize(&v7);
  q.w = cosf(fY * 0.5);
  q.x = 0.0;
  q.y = sinf(fY * 0.5);
  q.z = 0.0;
  OGLQuat::multiply(&v7, &q);
  OGLQuat::normalize(&v7);
  this->OGLQuat = v7;
}

