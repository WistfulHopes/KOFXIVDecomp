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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglquat.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x1408895DA
unsigned char OGLQuat::set(OGLVec3 * vIn1, OGLVec3 * vIn2); // 0x140078F60
void OGLQuat::multiply(OGLQuat * q); // 0x140079210
void OGLQuat::multiply(OGLQuat * q1, OGLQuat * q2); // 0x140079350
void OGLQuat::normalize(); // 0x140079440
void OGLQuat::slerp(OGLQuat * q1, OGLQuat * q2, float d, float maxd); // 0x1400794B0
void OGLQuat::matrixToQuaternion(OGLMatrix * mIn); // 0x140079720
void OGLQuat::setRotateEuler(float fX, float fY, float fZ); // 0x140079930
void OGLQuat::getRotateEuler(float * rfX, float * rfY, float * rfZ); // 0x140079A70
void OGLQuat::getRotateEulerFast(float * rfX, float * rfY, float * rfZ); // 0x140079D00//decompilation failure at 1408895DA!
void __fastcall OGLQuat::getRotateEuler(OGLQuat *this, float *rfX, float *rfY, float *rfZ)
{
  float v7; // xmm7_4
  float y; // xmm8_4
  float x; // xmm9_4
  float w; // xmm10_4
  float v11; // xmm0_4
  float v12; // xmm6_4
  float v13; // xmm13_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm9_4
  float v17; // xmm15_4
  float v18; // xmm10_4
  float v19; // xmm12_4
  float v20; // xmm14_4
  float v21; // xmm7_4
  float v22; // xmm0_4
  float v23; // xmm8_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  float v26; // xmm7_4
  float v27; // [rsp+E0h] [rbp+8h]
  float v28; // [rsp+F0h] [rbp+18h]

  LODWORD(v7) = LODWORD(this->z) ^ _xmm;
  y = this->y;
  x = this->x;
  w = this->w;
  v11 = sqrtf((float)((float)((float)(y * y) + (float)(x * x)) + (float)(v7 * v7)) + (float)(w * w));
  v12 = 0.0;
  if ( v11 != 0.0 )
  {
    x = x * (float)(1.0 / v11);
    y = y * (float)(1.0 / v11);
    v7 = v7 * (float)(1.0 / v11);
    w = w * (float)(1.0 / v11);
  }
  v13 = y * x;
  v14 = w * x;
  v28 = x * x;
  v15 = x * v7;
  v16 = w * y;
  v17 = v7 * v7;
  v18 = w * v7;
  v19 = (float)(v15 - v16) + (float)(v15 - v16);
  v20 = y * v7;
  v27 = v15;
  v21 = 1.0 - (float)((float)((float)(y * y) + (float)(v7 * v7)) + (float)((float)(y * y) + (float)(v7 * v7)));
  v22 = 1.0 - (float)(v19 * v19);
  v23 = (float)(v18 + v13) + (float)(v18 + v13);
  if ( v22 <= 0.0 )
    v24 = 0.0;
  else
    v24 = sqrtf(v22);
  *rfY = atan2f(COERCE_FLOAT(LODWORD(v19) ^ _xmm), v24);
  v25 = sqrtf((float)(v23 * v23) + (float)(v21 * v21));
  if ( v25 == 0.0 )
  {
    v26 = *(float *)&FLOAT_1_0;
  }
  else
  {
    v12 = v23 / v25;
    v26 = v21 / v25;
  }
  *rfX = atan2f(
           (float)((float)((float)(v16 + v27) + (float)(v16 + v27)) * v12)
         - (float)((float)((float)(v20 - v14) + (float)(v20 - v14)) * v26),
           (float)((float)(1.0 - (float)((float)(v17 + v28) + (float)(v17 + v28))) * v26)
         - (float)((float)((float)(v13 - v18) + (float)(v13 - v18)) * v12));
  *rfZ = atan2f(v12, v26);
}

void __fastcall OGLQuat::getRotateEulerFast(OGLQuat *this, float *rfX, float *rfY, float *rfZ)
{
  float x; // xmm0_4
  float y; // xmm2_4
  float w; // xmm5_4
  float v9; // xmm1_4
  float v11; // xmm6_4
  float v12; // xmm8_4
  float v13; // xmm3_4
  float v14; // xmm14_4
  float v15; // xmm10_4
  float v16; // xmm11_4
  float v17; // xmm12_4
  float v18; // xmm13_4
  float v19; // xmm7_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm7_4
  float v24; // [rsp+D0h] [rbp+8h]
  float v25; // [rsp+D8h] [rbp+10h]
  float v26; // [rsp+E0h] [rbp+18h]

  x = this->x;
  y = this->y;
  w = this->w;
  LODWORD(v9) = LODWORD(this->z) ^ _xmm;
  v11 = 0.0;
  v12 = w * y;
  v13 = w * v9;
  v14 = v9 * v9;
  v15 = y * this->x;
  v26 = x * x;
  v16 = y * v9;
  v24 = this->x * v9;
  v25 = w * this->x;
  v17 = (float)(v13 + (float)(y * x)) + (float)(v13 + (float)(y * x));
  v18 = (float)(v24 - v12) + (float)(v24 - v12);
  v19 = 1.0 - (float)((float)((float)(y * y) + v14) + (float)((float)(y * y) + v14));
  v20 = 1.0 - (float)(v18 * v18);
  if ( v20 <= 0.0 )
    v21 = 0.0;
  else
    v21 = sqrtf(v20);
  *rfY = atan2f(COERCE_FLOAT(LODWORD(v18) ^ _xmm), v21);
  v22 = sqrtf((float)(v17 * v17) + (float)(v19 * v19));
  if ( v22 == 0.0 )
  {
    v23 = *(float *)&FLOAT_1_0;
  }
  else
  {
    v11 = v17 / v22;
    v23 = v19 / v22;
  }
  *rfX = atan2f(
           (float)((float)((float)(v12 + v24) + (float)(v12 + v24)) * v11)
         - (float)((float)((float)(v16 - v25) + (float)(v16 - v25)) * v23),
           (float)((float)(1.0 - (float)((float)(v14 + v26) + (float)(v14 + v26))) * v23)
         - (float)((float)((float)(v15 - v13) + (float)(v15 - v13)) * v11));
  *rfZ = atan2f(v11, v23);
}

void __fastcall OGLQuat::matrixToQuaternion(OGLQuat *this, OGLMatrix *mIn)
{
  float v3; // xmm1_4
  float v4; // xmm3_4
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  __int64 v9; // rsi
  unsigned int v10; // edi
  int v11; // ebx
  float v12; // xmm2_4
  float v13; // xmm0_4
  int v14[4]; // [rsp+20h] [rbp-38h]

  v3 = mIn->m[5];
  v4 = mIn->m[10];
  v6 = (float)((float)(mIn->m[0] + v3) + v4) + mIn->m[15];
  if ( v6 < 1.0 )
  {
    v9 = mIn->m[0] <= v3;
    if ( v4 > mIn->m[(unsigned int)(5 * v9)] )
      v9 = 2i64;
    v10 = ((int)v9 + 1) % 3u;
    v11 = (int)(v10 + 1) % 3;
    v12 = sqrtf((float)((float)(mIn->m[(unsigned int)(5 * v9)] - mIn->m[5 * v10]) - mIn->m[5 * v11]) + 1.0) * 2.0;
    *(float *)&v14[v9] = v12 * 0.25;
    *(float *)&v14[v10] = (float)(mIn->m[(int)(4 * v10 + v9)] + mIn->m[(int)(4 * v9 + v10)]) / v12;
    *(float *)&v14[v11] = (float)(mIn->m[4 * v11 + (int)v9] + mIn->m[4 * (int)v9 + v11]) / v12;
    v13 = mIn->m[4 * v11 + v10] - mIn->m[4 * v10 + v11];
    LODWORD(this->y) = v14[1];
    this->w = v13 / v12;
    LODWORD(this->x) = v14[0];
    v8 = *(float *)&v14[2];
  }
  else
  {
    v7 = sqrtf(v6);
    this->w = (float)(v7 * 2.0) * 0.25;
    this->x = (float)(mIn->m[9] - mIn->m[6]) / (float)(v7 * 2.0);
    this->y = (float)(mIn->m[2] - mIn->m[8]) / (float)(v7 * 2.0);
    v8 = (float)(mIn->m[4] - mIn->m[1]) / (float)(v7 * 2.0);
  }
  this->z = v8;
}

void __fastcall OGLQuat::multiply(OGLQuat *this, OGLQuat *q1, OGLQuat *q2)
{
  this->w = (float)((float)((float)(q2->w * q1->w) - (float)(q1->x * q2->x)) - (float)(q2->y * q1->y))
          - (float)(q2->z * q1->z);
  this->x = (float)((float)((float)(q1->x * q2->w) + (float)(q2->x * q1->w)) - (float)(q2->z * q1->y))
          + (float)(q2->y * q1->z);
  this->y = (float)((float)((float)(q2->y * q1->w) + (float)(q2->z * q1->x)) + (float)(q1->y * q2->w))
          - (float)(q1->z * q2->x);
  this->z = (float)((float)((float)(q2->z * q1->w) - (float)(q2->y * q1->x)) + (float)(q1->y * q2->x))
          + (float)(q1->z * q2->w);
}

void __fastcall OGLQuat::multiply(OGLQuat *this, OGLQuat *q)
{
  float w; // xmm4_4
  float y; // xmm5_4
  float v4; // xmm6_4
  float x; // xmm7_4
  float v6; // xmm8_4
  float z; // xmm9_4
  float v8; // xmm11_4
  float v9; // xmm12_4
  float v10; // xmm3_4

  w = this->w;
  y = this->y;
  v4 = q->y;
  x = q->x;
  v6 = this->x;
  z = this->z;
  v8 = q->z;
  v9 = q->w;
  v10 = (float)(v8 * this->x) + (float)(v4 * w);
  this->x = (float)((float)((float)(this->x * v9) + (float)(q->x * w)) - (float)(y * v8)) + (float)(z * v4);
  this->y = (float)(v10 + (float)(y * v9)) - (float)(z * x);
  this->z = (float)((float)((float)(v8 * w) - (float)(v4 * v6)) + (float)(y * x)) + (float)(z * v9);
  this->w = (float)((float)((float)(v9 * w) - (float)(v6 * x)) - (float)(v4 * y)) - (float)(z * v8);
}

void __fastcall OGLQuat::normalize(OGLQuat *this)
{
  float v2; // xmm0_4
  __m128 v3; // xmm1

  v2 = sqrtf(
         (float)((float)((float)(this->x * this->x) + (float)(this->y * this->y)) + (float)(this->z * this->z))
       + (float)(this->w * this->w));
  if ( v2 != 0.0 )
  {
    v3 = (__m128)(unsigned int)FLOAT_1_0;
    v3.m128_f32[0] = 1.0 / v2;
    *(__m128 *)this = _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), *(__m128 *)this);
  }
}

unsigned __int8 __fastcall OGLQuat::set(OGLQuat *this, OGLVec3 *vIn1, OGLVec3 *vIn2)
{
  float y; // xmm6_4
  float v5; // xmm8_4
  float z; // xmm9_4
  float v7; // xmm10_4
  float x; // xmm11_4
  float v9; // xmm12_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm2_4
  float v13; // xmm3_4
  unsigned __int8 result; // al
  float v15; // xmm7_4
  float v16; // xmm9_4
  __m128 v17; // xmm10
  float v18; // xmm0_4
  float v19; // xmm9_4
  float v20; // xmm7_4
  float v21; // xmm8_4
  float v22; // xmm0_4

  y = vIn1->y;
  v5 = vIn2->y;
  z = vIn1->z;
  v7 = vIn2->z;
  x = vIn2->x;
  v9 = vIn1->x;
  v10 = sqrtf((float)((float)(y * y) + (float)(v9 * v9)) + (float)(z * z));
  if ( v10 != 0.0 )
  {
    v9 = v9 / v10;
    y = y / v10;
    z = z / v10;
  }
  v11 = sqrtf((float)((float)(v5 * v5) + (float)(x * x)) + (float)(v7 * v7));
  if ( v11 != 0.0 )
  {
    x = x / v11;
    v5 = v5 / v11;
    v7 = v7 / v11;
  }
  v12 = (float)((float)(v5 * y) + (float)(x * v9)) + (float)(v7 * z);
  if ( v12 > -0.9999 )
  {
    v15 = (float)(v7 * y) - (float)(z * v5);
    v16 = (float)(z * x) - (float)(v7 * v9);
    v17 = (__m128)(unsigned int)FLOAT_1_0;
    v18 = sqrtf((float)(v12 + 1.0) * 0.5);
    this->w = v18;
    v19 = v16 * (float)(0.5 / v18);
    this->y = v19;
    v20 = v15 * (float)(0.5 / v18);
    v21 = (float)((float)(v5 * v9) - (float)(y * x)) * (float)(0.5 / v18);
    this->x = v20;
    this->z = v21;
    v22 = sqrtf((float)((float)((float)(v19 * v19) + (float)(v20 * v20)) + (float)(v21 * v21)) + (float)(v18 * v18));
    if ( v22 != 0.0 )
    {
      v17.m128_f32[0] = 1.0 / v22;
      *(__m128 *)this = _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), *(__m128 *)this);
    }
    return 1;
  }
  else
  {
    v13 = 1.0 / sqrtf((float)((float)(v5 * v5) + (float)(x * x)) + (float)(v7 * v7));
    this->w = 0.0;
    result = 0;
    this->x = (float)((float)(y * v9) - (float)(z * z)) * v13;
    this->z = (float)((float)(y * y) + (float)(z * v9)) * v13;
    this->y = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(z * y) ^ _xmm) - (float)(v9 * v9)) * v13;
  }
  return result;
}

void __fastcall OGLQuat::setRotateEuler(OGLQuat *this, float fX, float fY, float fZ)
{
  float v5; // xmm9_4
  float v6; // xmm6_4
  float v7; // xmm10_4
  float v8; // xmm11_4
  float v9; // xmm7_4
  float v10; // xmm0_4
  float v11; // xmm3_4
  float v12; // xmm10_4

  v5 = sinf(fX * 0.5);
  v6 = cosf(fX * 0.5);
  v7 = sinf(fY * 0.5);
  v8 = cosf(fY * 0.5);
  v9 = sinf(fZ * 0.5);
  v10 = cosf(fZ * 0.5);
  v11 = v7 * v6;
  v12 = v7 * v5;
  this->x = (float)((float)(v8 * v5) * v10) - (float)(v11 * v9);
  this->y = (float)(v11 * v10) + (float)((float)(v8 * v5) * v9);
  LODWORD(this->z) = COERCE_UNSIGNED_INT((float)((float)(v8 * v6) * v9) - (float)(v12 * v10)) ^ _xmm;
  this->w = (float)(v12 * v9) + (float)((float)(v8 * v6) * v10);
}

void __fastcall OGLQuat::slerp(OGLQuat *this, OGLQuat *q1, OGLQuat *q2, float d, float maxd)
{
  float x; // xmm5_4
  float v8; // xmm4_4
  float v9; // xmm10_4
  float v10; // xmm8_4
  float v11; // xmm7_4
  float v12; // xmm0_4

  x = q2->x;
  v8 = (float)((float)((float)(q2->x * q1->x) + (float)(q2->w * q1->w)) + (float)(q1->y * q2->y))
     + (float)(q1->z * q2->z);
  if ( v8 >= 0.0 )
  {
    this->x = x;
    this->y = q2->y;
    this->z = q2->z;
    this->w = q2->w;
  }
  else
  {
    LODWORD(v8) ^= _xmm;
    LODWORD(this->x) = LODWORD(x) ^ _xmm;
    LODWORD(this->y) = LODWORD(q2->y) ^ _xmm;
    LODWORD(this->z) = LODWORD(q2->z) ^ _xmm;
    LODWORD(this->w) = LODWORD(q2->w) ^ _xmm;
  }
  if ( v8 >= 0.98000002 )
  {
    this->x = (float)((float)((float)(this->x - q1->x) * d) / maxd) + q1->x;
    this->y = (float)((float)((float)(this->y - q1->y) * d) / maxd) + q1->y;
    this->z = (float)((float)((float)(this->z - q1->z) * d) / maxd) + q1->z;
    this->w = (float)((float)((float)(this->w - q1->w) * d) / maxd) + q1->w;
    OGLQuat::normalize(this);
  }
  else
  {
    v9 = acosf(v8);
    v10 = sinf(v9);
    if ( v10 == 0.0 )
    {
      this->x = q1->x;
      this->y = q1->y;
      this->z = q1->z;
      this->w = q1->w;
    }
    else
    {
      v11 = sinf((float)(v9 * d) / maxd);
      v12 = sinf((float)((float)(maxd - d) * v9) / maxd);
      this->x = (float)((float)(v12 * q1->x) + (float)(v11 * this->x)) / v10;
      this->y = (float)((float)(v11 * this->y) + (float)(v12 * q1->y)) / v10;
      this->z = (float)((float)(v11 * this->z) + (float)(v12 * q1->z)) / v10;
      this->w = (float)((float)(v11 * this->w) + (float)(v12 * q1->w)) / v10;
    }
  }
}

