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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglquat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectquat.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14089E39E
OGLEffectVec3::~OGLEffectVec3(); // 0x140156910
OGLEffectVec3 OGLEffectVec3::operator+(const OGLVec3 vec); // 0x140156920
OGLEffectVec3 OGLEffectVec3::operator-(const OGLVec3 vec); // 0x140156970
OGLEffectVec3 OGLEffectVec3::operator*(const float scale); // 0x1401569C0
OGLEffectVec3 OGLEffectVec3::operator/(const float scale); // 0x140156A00
OGLEffectVec3 OGLEffectVec3::operator*(const long scale); // 0x140156A50
OGLEffectVec3 OGLEffectVec3::operator/(const long scale); // 0x140156AA0
void OGLEffectVec3::rotateQuat(OGLQuat * rotQuat); // 0x140156AF0
void OGLEffectVec3::setRotateQuat(OGLQuat * q); // 0x140156BE0
bool OGLEffectVec3::parallelDecision(OGLVec3 * pVec); // 0x140156D30
float OGLEffectVec3::getAngleBetweenVectors(const OGLVec3 & first, const OGLVec3 & second); // 0x140156E20//decompilation failure at 14089E39E!
void __fastcall OGLEffectVec3::~OGLEffectVec3(OGLEffectVec3 *this)
{
  this->__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
}

OGLEffectVec3 *__fastcall OGLEffectVec3::operator*(OGLEffectVec3 *this, OGLEffectVec3 *result, const int scale)
{
  OGLEffectVec3 *v3; // rax

  *(_QWORD *)&result->x = 0i64;
  result->z = 0.0;
  result->__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  v3 = result;
  result->x = (float)scale * this->x;
  result->y = (float)scale * this->y;
  result->z = (float)scale * this->z;
  return v3;
}

OGLEffectVec3 *__fastcall OGLEffectVec3::operator*(OGLEffectVec3 *this, OGLEffectVec3 *result, const float scale)
{
  OGLEffectVec3 *v3; // rax

  *(_QWORD *)&result->x = 0i64;
  result->z = 0.0;
  result->__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  v3 = result;
  result->x = scale * this->x;
  result->y = scale * this->y;
  result->z = scale * this->z;
  return v3;
}

OGLEffectVec3 *__fastcall OGLEffectVec3::operator-(OGLEffectVec3 *this, OGLEffectVec3 *result, const OGLVec3 *vec)
{
  OGLEffectVec3 *v3; // rax

  *(_QWORD *)&result->x = 0i64;
  result->z = 0.0;
  result->__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  v3 = result;
  result->x = this->x - vec->x;
  result->y = this->y - vec->y;
  result->z = this->z - vec->z;
  return v3;
}

OGLEffectVec3 *__fastcall OGLEffectVec3::operator+(OGLEffectVec3 *this, OGLEffectVec3 *result, const OGLVec3 *vec)
{
  OGLEffectVec3 *v3; // rax

  *(_QWORD *)&result->x = 0i64;
  result->z = 0.0;
  result->__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  v3 = result;
  result->x = this->x + vec->x;
  result->y = vec->y + this->y;
  result->z = vec->z + this->z;
  return v3;
}

OGLEffectVec3 *__fastcall OGLEffectVec3::operator/(OGLEffectVec3 *this, OGLEffectVec3 *result, const int scale)
{
  OGLEffectVec3 *v3; // rax

  *(_QWORD *)&result->x = 0i64;
  result->z = 0.0;
  result->__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  v3 = result;
  result->x = this->x / (float)scale;
  result->y = this->y / (float)scale;
  result->z = this->z / (float)scale;
  return v3;
}

OGLEffectVec3 *__fastcall OGLEffectVec3::operator/(OGLEffectVec3 *this, OGLEffectVec3 *result, const float scale)
{
  OGLEffectVec3 *v3; // rax

  *(_QWORD *)&result->x = 0i64;
  result->z = 0.0;
  result->__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  v3 = result;
  result->x = this->x / scale;
  result->y = this->y / scale;
  result->z = this->z / scale;
  return v3;
}

double __fastcall OGLEffectVec3::getAngleBetweenVectors(const OGLVec3 *first, const OGLVec3 *second)
{
  float z; // xmm1_4
  float y; // xmm7_4
  float v4; // xmm8_4
  float x; // xmm9_4
  float v6; // xmm10_4
  float v7; // xmm6_4
  double result; // xmm0_8

  z = first->z;
  y = second->y;
  v4 = second->z;
  x = second->x;
  v6 = (float)((float)(first->x * second->x) + (float)(first->y * y)) + (float)(z * v4);
  v7 = sqrtf((float)((float)(first->x * first->x) + (float)(first->y * first->y)) + (float)(z * z));
  result = fmax(
             -1.0,
             fmin(1.0, (float)(v6 / (float)(v7 * sqrtf((float)((float)(x * x) + (float)(y * y)) + (float)(v4 * v4))))));
  *(float *)&result = acosf(*(float *)&result);
  return result;
}

bool __fastcall OGLEffectVec3::parallelDecision(OGLEffectVec3 *this, OGLVec3 *pVec)
{
  OGLVec3 *v2; // rax
  float y; // xmm1_4
  float z; // xmm0_4
  float v5; // xmm1_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  OGLVec3 v; // [rsp+28h] [rbp-30h] BYREF
  void **v10; // [rsp+38h] [rbp-20h]
  OGLVec3 v11; // [rsp+40h] [rbp-18h] BYREF

  v2 = &this->OGLVec3;
  if ( !this )
    v2 = 0i64;
  y = v2->y;
  v.x = v2->x;
  v.z = v2->z;
  v11.x = pVec->x;
  z = pVec->z;
  v.y = y;
  v5 = pVec->y;
  v11.z = z;
  v11.y = v5;
  v10 = &OGLEffectVec3::`vftable';
  OGLVec3::normalize(&v, &v);
  OGLVec3::normalize(&v11, &v11);
  v6 = v.y - v11.y;
  v7 = v.z - v11.z;
  return (float)(v.x - v11.x) < 0.00000011920929 && (float)(v.x - v11.x) > -0.00000011920929
      || v6 < 0.00000011920929 && v6 > -0.00000011920929
      || v7 < 0.00000011920929 && v7 > -0.00000011920929;
}

void __fastcall OGLEffectVec3::rotateQuat(OGLEffectVec3 *this, OGLQuat *rotQuat)
{
  float y; // xmm1_4
  float x; // xmm3_4
  float z; // xmm0_4
  float w; // xmm0_4
  float v6; // xmm1_4
  __int64 v7; // r10
  OGLQuat *v8; // rax
  float v9; // xmm1_4
  float *v10; // r9
  OGLQuat q1; // [rsp+28h] [rbp-58h] BYREF
  __int64 v12; // [rsp+38h] [rbp-48h]
  OGLQuat v13; // [rsp+40h] [rbp-40h] BYREF
  void **v14; // [rsp+58h] [rbp-28h]
  OGLQuat q2; // [rsp+60h] [rbp-20h] BYREF

  y = this->y;
  x = rotQuat->x;
  q2.x = this->x;
  z = this->z;
  q2.y = y;
  q2.z = z;
  v13.y = rotQuat->y;
  w = rotQuat->w;
  q2.w = 0.0;
  v6 = rotQuat->z;
  v13.w = w;
  v13.z = v6;
  v13.x = x;
  v14 = &OGLEffectQuat::`vftable';
  q1.w = w;
  LODWORD(q1.y) = LODWORD(v13.y) ^ _xmm;
  LODWORD(q1.z) = LODWORD(v6) ^ _xmm;
  LODWORD(q1.x) = LODWORD(x) ^ _xmm;
  OGLQuat::multiply(&v13, &q1, &q2);
  v12 = v7;
  OGLQuat::multiply(&v13, v8);
  v9 = v13.y;
  v10[2] = v13.x;
  v10[4] = v13.z;
  v10[3] = v9;
}

void __fastcall OGLEffectVec3::setRotateQuat(OGLEffectVec3 *this, OGLQuat *q)
{
  float v4; // xmm1_4
  float v5; // xmm0_4

  v4 = (float)((float)(q->y * q->z) - (float)(q->w * q->x)) * -2.0;
  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v4) & _xmm);
  if ( v5 <= 0.99989998 )
  {
    this->x = asinf(v4);
    this->y = atan2f(
                (float)(q->y * q->w) + (float)(q->x * q->z),
                (float)(0.5 - (float)(q->x * q->x)) - (float)(q->y * q->y));
    this->z = atan2f(
                (float)(q->x * q->y) + (float)(q->z * q->w),
                (float)(0.5 - (float)(q->x * q->x)) - (float)(q->z * q->z));
  }
  else
  {
    this->x = v4 * 1.570796;
    this->z = atan2f(
                (float)(q->y * q->w) - (float)(q->z * q->x),
                (float)(0.5 - (float)(q->y * q->y)) - (float)(q->z * q->z));
    this->y = 0.0;
  }
}

