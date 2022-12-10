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
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14088956D
unsigned char OGLMatrix::isZero(); // 0x1400602E0
unsigned char OGLMatrix::equal(OGLMatrix * In); // 0x140060380
void OGLMatrix::add(OGLMatrix * In1, OGLMatrix * In2); // 0x140060430
void OGLMatrix::multiply(OGLMatrix * In); // 0x140060580
void OGLMatrix::multiply(OGLMatrix * In1, OGLMatrix * In2); // 0x140060A20
void OGLMatrix::multiplyFast(OGLMatrix * In); // 0x140060EF0
void OGLMatrix::multiplyFast(OGLMatrix * In1, OGLMatrix * In2); // 0x1400611F0
void OGLMatrix::multiplyRotate(OGLMatrix * In); // 0x140061500
void OGLMatrix::multiplyRotate(OGLMatrix * In1, OGLMatrix * In2); // 0x1400617F0
void OGLMatrix::multiplyFastRotate(OGLMatrix * In1, OGLMatrix * In2); // 0x140061AE0
void OGLMatrix::rotateZ(float angle); // 0x140061D20
void OGLMatrix::rotateV(OGLVec3 * axis, float angle); // 0x140061DB0
void OGLMatrix::rotationQuaternion(OGLQuat * q); // 0x140061F20
void OGLMatrix::transpose(); // 0x140062080
void OGLMatrix::inverse(); // 0x140062150
void OGLMatrix::setViewTrans(OGLMatrix * mat, OGLVec3 * position, OGLVec3 * look, OGLVec3 * up); // 0x1400626C0
void OGLMatrix::lookAt(OGLVec3 * position, OGLVec3 * look, OGLVec3 * up); // 0x140062A60
void OGLMatrix::billboard(OGLVec3 * position, OGLVec3 * look, OGLVec3 * up); // 0x140062D20
void OGLMatrix::perspectiveFov(float fovY, float aspect, float zNear, float zFar); // 0x140062F10
void OGLMatrix::ortho(float l, float r, float b, float t, float n, float f); // 0x140063040//decompilation failure at 14088956D!
void __fastcall OGLMatrix::add(OGLMatrix *this, OGLMatrix *In1, OGLMatrix *In2)
{
  int v4; // edi
  float *v5; // r8
  __m128 *v6; // rax
  signed __int64 v7; // r8
  signed __int64 v8; // r10
  __int64 v9; // rbx
  __int64 v10; // rbx
  float *v11; // rax
  signed __int64 v12; // r8
  signed __int64 v13; // r10
  unsigned __int64 v14; // rdi
  signed __int64 v15; // rdx
  float *v16; // rax
  signed __int64 v17; // rcx
  __int64 v18; // r9

  v4 = 0;
  v5 = &this->m[15];
  if ( (this > (OGLMatrix *)&In2->m[15] || v5 < (float *)In2) && (this > (OGLMatrix *)&In1->m[15] || v5 < (float *)In1) )
  {
    v6 = (__m128 *)&In2->m[4];
    v7 = (char *)In1 - (char *)In2;
    v8 = (char *)this - (char *)In2;
    v9 = 2i64;
    v4 = 1;
    do
    {
      *(__m128 *)((char *)v6 + v8 - 16) = _mm_add_ps(*(__m128 *)((char *)v6 + v7 - 16), v6[-1]);
      *(__m128 *)((char *)v6 + v8) = _mm_add_ps(*(__m128 *)((char *)v6 + v7), *v6);
      v6 += 2;
      --v9;
    }
    while ( v9 );
  }
  v10 = v4 * 16;
  if ( v4 < 1i64 )
  {
    if ( 16i64 - v4 * 16 >= 4 )
    {
      v11 = &In2[v4].m[1];
      v12 = (char *)In1 - (char *)In2;
      v13 = (char *)this - (char *)In2;
      v14 = ((unsigned __int64)(12i64 - v4 * 16) >> 2) + 1;
      v10 += 4 * v14;
      do
      {
        *(float *)((char *)v11 + v13 - 4) = *(float *)((char *)v11 + v12 - 4) + *(v11 - 1);
        *(float *)((char *)v11 + v13) = *(float *)((char *)v11 + v12) + *v11;
        *(float *)((char *)v11 + v13 + 4) = *(float *)((char *)v11 + v12 + 4) + v11[1];
        *(float *)((char *)v11 + v13 + 8) = *(float *)((char *)v11 + v12 + 8) + v11[2];
        v11 += 4;
        --v14;
      }
      while ( v14 );
    }
    if ( v10 < 16 )
    {
      v15 = (char *)In1 - (char *)In2;
      v16 = &In2->m[v10];
      v17 = (char *)this - (char *)In2;
      v18 = 16 - v10;
      do
      {
        *(float *)((char *)v16 + v17) = *(float *)((char *)v16 + v15) + *v16;
        ++v16;
        --v18;
      }
      while ( v18 );
    }
  }
}

void __fastcall OGLMatrix::billboard(OGLMatrix *this, OGLVec3 *position, OGLVec3 *look, OGLVec3 *up)
{
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm8_4
  float v9; // xmm0_4
  float z; // xmm10_4
  float v11; // xmm2_4
  float v12; // xmm10_4
  float v13; // xmm11_4
  float v14; // xmm9_4
  float v15; // xmm0_4

  v6 = look->z - position->z;
  v7 = look->x - position->x;
  v8 = look->y - position->y;
  v9 = sqrtf((float)((float)(v8 * v8) + (float)(v7 * v7)) + (float)(v6 * v6));
  if ( v9 != 0.0 )
  {
    v7 = v7 / v9;
    v8 = v8 / v9;
    v6 = v6 / v9;
  }
  z = up->z;
  v11 = z * v7;
  v12 = (float)(z * v8) - (float)(up->y * v6);
  v13 = (float)(up->x * v6) - v11;
  v14 = (float)(up->y * v7) - (float)(up->x * v8);
  v15 = sqrtf((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14));
  if ( v15 != 0.0 )
  {
    v12 = v12 / v15;
    v13 = v13 / v15;
    v14 = v14 / v15;
  }
  this->m[0] = v12;
  this->m[4] = v13;
  *(_QWORD *)&this->m[12] = 0i64;
  this->m[14] = 0.0;
  this->m[3] = 0.0;
  this->m[7] = 0.0;
  this->m[2] = v7;
  this->m[6] = v8;
  this->m[11] = 0.0;
  this->m[1] = (float)(v13 * v6) - (float)(v14 * v8);
  this->m[15] = 1.0;
  this->m[5] = (float)(v14 * v7) - (float)(v12 * v6);
  LODWORD(this->m[8]) = LODWORD(v14) ^ _xmm;
  LODWORD(this->m[10]) = LODWORD(v6) ^ _xmm;
  LODWORD(this->m[9]) = COERCE_UNSIGNED_INT((float)(v12 * v8) - (float)(v13 * v7)) ^ _xmm;
}

bool __fastcall OGLMatrix::equal(OGLMatrix *this, OGLMatrix *In)
{
  return this->m[12] == In->m[12]
      && this->m[13] == In->m[13]
      && this->m[14] == In->m[14]
      && this->m[0] == In->m[0]
      && this->m[5] == In->m[5]
      && this->m[10] == In->m[10]
      && this->m[1] == In->m[1]
      && this->m[4] == In->m[4]
      && this->m[9] == In->m[9]
      && this->m[2] == In->m[2]
      && this->m[6] == In->m[6]
      && this->m[8] == In->m[8];
}

void __fastcall OGLMatrix::inverse(OGLMatrix *this)
{
  __int128 v1; // xmm0
  __int128 v3; // xmm1
  __int64 v4; // r11
  unsigned __int64 v5; // r9
  int v6; // er15
  __int128 v7; // xmm0
  __int64 v8; // rbx
  __int128 v9; // xmm1
  int v10; // ecx
  __int64 v11; // r10
  __int64 v12; // rdx
  int v13; // er12
  __int64 v14; // r8
  float *v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rdi
  float v18; // xmm2_4
  float v19; // xmm0_4
  float v20; // xmm2_4
  float v21; // xmm0_4
  float v22; // xmm2_4
  float v23; // xmm0_4
  float v24; // xmm2_4
  float v25; // xmm0_4
  __int64 v26; // rsi
  __int64 v27; // rdi
  float v28; // xmm2_4
  float v29; // xmm0_4
  int v30; // xmm0_4
  __int64 v31; // rcx
  int v32; // xmm1_4
  int v33; // eax
  int v34; // xmm0_4
  int v35; // eax
  int v36; // xmm1_4
  int v37; // eax
  int v38; // xmm0_4
  int v39; // eax
  int v40; // xmm1_4
  int v41; // eax
  int v42; // xmm0_4
  int v43; // eax
  int v44; // xmm1_4
  int v45; // eax
  float v46; // xmm2_4
  float v47; // xmm0_4
  float v48; // xmm1_4
  float v49; // xmm0_4
  float v50; // xmm1_4
  float v51; // xmm0_4
  float v52; // xmm1_4
  float v53; // xmm0_4
  float *v54; // rax
  float v55; // xmm2_4
  float v56; // xmm1_4
  float v57; // xmm0_4
  float v58; // xmm1_4
  float v59; // xmm0_4
  float v60; // xmm1_4
  float v61; // xmm0_4
  float v62; // xmm1_4
  float v63; // xmm0_4
  float v64; // xmm1_4
  float v65; // xmm0_4
  float v66; // xmm1_4
  float v67; // xmm2_4
  __int128 v68; // xmm1
  __int128 v69; // xmm0
  __int128 v70; // xmm1
  int v71; // [rsp+0h] [rbp-69h]
  float *v72; // [rsp+8h] [rbp-61h]
  __int128 v73; // [rsp+10h] [rbp-59h]
  __int128 v74; // [rsp+20h] [rbp-49h]
  __int128 v75; // [rsp+30h] [rbp-39h]
  __int128 v76; // [rsp+40h] [rbp-29h]
  __int128 v77; // [rsp+50h] [rbp-19h] BYREF
  __int128 v78; // [rsp+60h] [rbp-9h]
  __int128 v79; // [rsp+70h] [rbp+7h]
  __int128 v80; // [rsp+80h] [rbp+17h]

  v1 = *(_OWORD *)this->m;
  v3 = *(_OWORD *)&this->m[4];
  v4 = 0i64;
  v5 = 0i64;
  v6 = 1;
  v74 = 0ui64;
  *(_QWORD *)&v75 = 0i64;
  v76 = 0ui64;
  v77 = v1;
  v7 = *(_OWORD *)&this->m[8];
  v72 = (float *)&v77;
  v78 = v3;
  v8 = 8i64 - ((_QWORD)&v77 + 4);
  v9 = *(_OWORD *)&this->m[12];
  v10 = 3;
  v73 = 0x3F800000ui64;
  v79 = v7;
  v80 = v9;
  *(_QWORD *)((char *)&v74 + 4) = 1065353216i64;
  *((_QWORD *)&v75 + 1) = 1065353216i64;
  HIDWORD(v76) = 1065353216;
  v71 = 3;
  while ( 1 )
  {
    v11 = v4;
    v12 = v4 + 1;
    v13 = v6;
    if ( v6 < 4 )
    {
      if ( v10 >= 4 )
      {
        v14 = 4 * v4;
        v15 = (float *)&v77 + 4 * v4 + v4 + 2;
        v16 = ((unsigned int)-v6 >> 2) + 1;
        v17 = v16;
        v13 = v6 + 4 * v16;
        do
        {
          v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(v15 - 1)) & _xmm);
          v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)((char *)&v77 + v14 + v5)) & _xmm);
          if ( v18 > v19 )
          {
            v11 = v12;
            v14 = (char *)v15 - ((char *)&v77 + v5 + 4);
          }
          v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v15) & _xmm);
          v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)((char *)&v77 + v14 + v5)) & _xmm);
          if ( v20 > v21 )
          {
            v14 = (__int64)v15 + v8 - 4;
            v11 = v12 + 1;
          }
          v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v15[1]) & _xmm);
          v23 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)((char *)&v77 + v14 + v5)) & _xmm);
          if ( v22 > v23 )
          {
            v11 = v12 + 2;
            v14 = (__int64)v15 + v8;
          }
          v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v15[2]) & _xmm);
          v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)((char *)&v77 + v14 + v5)) & _xmm);
          if ( v24 > v25 )
          {
            v14 = (__int64)v15 + v8 + 4;
            v11 = v12 + 3;
          }
          v12 += 4i64;
          v15 += 4;
          --v17;
        }
        while ( v17 );
      }
      if ( v13 < 4 )
      {
        v26 = 4 * v11;
        v27 = 4 - v13;
        do
        {
          v28 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)((char *)&v77 + 4 * v12 + v5)) & _xmm);
          v29 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)((char *)&v77 + v5 + v26)) & _xmm);
          if ( v28 > v29 )
          {
            v11 = v12;
            v26 = 4 * v12;
          }
          ++v12;
          --v27;
        }
        while ( v27 );
      }
    }
    if ( *((float *)&v77 + 4 * v11 + v4) == 0.0 )
      break;
    v30 = *((_DWORD *)&v77 + v4);
    v31 = 0i64;
    v32 = *((_DWORD *)&v73 + v4);
    *((_DWORD *)&v77 + v4) = *((_DWORD *)&v77 + v11);
    v33 = *((_DWORD *)&v73 + v11);
    *((_DWORD *)&v77 + v11) = v30;
    v34 = *((_DWORD *)&v78 + v4);
    *((_DWORD *)&v73 + v4) = v33;
    v35 = *((_DWORD *)&v78 + v11);
    *((_DWORD *)&v73 + v11) = v32;
    v36 = *((_DWORD *)&v74 + v4);
    *((_DWORD *)&v78 + v4) = v35;
    v37 = *((_DWORD *)&v74 + v11);
    *((_DWORD *)&v78 + v11) = v34;
    v38 = *((_DWORD *)&v79 + v4);
    *((_DWORD *)&v74 + v4) = v37;
    v39 = *((_DWORD *)&v79 + v11);
    *((_DWORD *)&v74 + v11) = v36;
    v40 = *((_DWORD *)&v75 + v4);
    *((_DWORD *)&v79 + v4) = v39;
    v41 = *((_DWORD *)&v75 + v11);
    *((_DWORD *)&v79 + v11) = v38;
    v42 = *((_DWORD *)&v80 + v4);
    *((_DWORD *)&v75 + v4) = v41;
    v43 = *((_DWORD *)&v80 + v11);
    *((_DWORD *)&v75 + v11) = v40;
    v44 = *((_DWORD *)&v76 + v4);
    *((_DWORD *)&v80 + v4) = v43;
    v45 = *((_DWORD *)&v76 + v11);
    *((_DWORD *)&v80 + v11) = v42;
    v46 = *v72;
    v47 = *((float *)&v77 + v4);
    *((_DWORD *)&v76 + v4) = v45;
    *((_DWORD *)&v76 + v11) = v44;
    *((float *)&v73 + v4) = *((float *)&v73 + v4) / v46;
    v48 = *((float *)&v74 + v4);
    *((float *)&v77 + v4) = v47 / v46;
    v49 = *((float *)&v78 + v4) / v46;
    *((float *)&v74 + v4) = v48 / v46;
    v50 = *((float *)&v75 + v4);
    *((float *)&v78 + v4) = v49;
    v51 = *((float *)&v79 + v4) / v46;
    *((float *)&v75 + v4) = v50 / v46;
    v52 = *((float *)&v76 + v4);
    *((float *)&v79 + v4) = v51;
    v53 = *((float *)&v80 + v4) / v46;
    *((float *)&v76 + v4) = v52 / v46;
    *((float *)&v80 + v4) = v53;
    do
    {
      if ( v31 != v4 )
      {
        v54 = (float *)&v77 + v31;
        v55 = v54[v5 / 4];
        v56 = v55 * *((float *)&v73 + v4);
        *v54 = *v54 - (float)(v55 * *((float *)&v77 + v4));
        v57 = *((float *)&v73 + v31) - v56;
        v58 = v55 * *((float *)&v78 + v4);
        *((float *)&v73 + v31) = v57;
        v59 = *((float *)&v78 + v31) - v58;
        v60 = v55 * *((float *)&v74 + v4);
        *((float *)&v78 + v31) = v59;
        v61 = *((float *)&v74 + v31) - v60;
        v62 = v55 * *((float *)&v79 + v4);
        *((float *)&v74 + v31) = v61;
        v63 = *((float *)&v79 + v31) - v62;
        v64 = v55 * *((float *)&v75 + v4);
        *((float *)&v79 + v31) = v63;
        v65 = *((float *)&v75 + v31) - v64;
        v66 = v55 * *((float *)&v80 + v4);
        *((float *)&v75 + v31) = v65;
        v67 = v55 * *((float *)&v76 + v4);
        *((float *)&v80 + v31) = *((float *)&v80 + v31) - v66;
        *((float *)&v76 + v31) = *((float *)&v76 + v31) - v67;
      }
      ++v31;
    }
    while ( v31 < 4 );
    ++v6;
    v10 = v71 - 1;
    v5 += 16i64;
    --v71;
    v8 -= 16i64;
    v72 += 5;
    ++v4;
    if ( v6 - 1 >= 4 )
    {
      v68 = v74;
      *(_OWORD *)this->m = v73;
      v69 = v75;
      *(_OWORD *)&this->m[4] = v68;
      v70 = v76;
      *(_OWORD *)&this->m[8] = v69;
      *(_OWORD *)&this->m[12] = v70;
      return;
    }
  }
  *(_QWORD *)this->m = 1065353216i64;
  this->m[4] = 0.0;
  *(_QWORD *)&this->m[8] = 0i64;
  *(_QWORD *)&this->m[12] = 0i64;
  *(_QWORD *)&this->m[2] = 0i64;
  this->m[14] = 0.0;
  this->m[7] = 0.0;
  *(_QWORD *)&this->m[5] = 1065353216i64;
  *(_QWORD *)&this->m[10] = 1065353216i64;
  this->m[15] = 1.0;
}

bool __fastcall OGLMatrix::isZero(OGLMatrix *this)
{
  return this->m[0] == 0.0
      && this->m[5] == 0.0
      && this->m[10] == 0.0
      && this->m[12] == 0.0
      && this->m[13] == 0.0
      && this->m[14] == 0.0
      && this->m[1] == 0.0
      && this->m[2] == 0.0
      && this->m[4] == 0.0
      && this->m[6] == 0.0
      && this->m[8] == 0.0
      && this->m[9] == 0.0;
}

void __fastcall OGLMatrix::lookAt(OGLMatrix *this, OGLVec3 *position, OGLVec3 *look, OGLVec3 *up)
{
  float z; // xmm13_4
  float v7; // xmm8_4
  float y; // xmm14_4
  float v9; // xmm7_4
  float x; // xmm15_4
  float v11; // xmm6_4
  float v12; // xmm0_4
  float v13; // xmm10_4
  float v14; // xmm2_4
  float v15; // xmm10_4
  float v16; // xmm11_4
  float v17; // xmm9_4
  float v18; // xmm0_4
  OGLMatrix In; // [rsp+28h] [rbp-89h] BYREF

  z = position->z;
  v7 = look->z - z;
  y = position->y;
  v9 = look->y - y;
  x = position->x;
  v11 = look->x - position->x;
  v12 = sqrtf((float)((float)(v9 * v9) + (float)(v11 * v11)) + (float)(v7 * v7));
  if ( v12 != 0.0 )
  {
    v11 = v11 / v12;
    v9 = v9 / v12;
    v7 = v7 / v12;
  }
  v13 = up->z;
  v14 = v13 * v11;
  v15 = (float)(v13 * v9) - (float)(up->y * v7);
  v16 = (float)(up->x * v7) - v14;
  v17 = (float)(up->y * v11) - (float)(up->x * v9);
  v18 = sqrtf((float)((float)(v16 * v16) + (float)(v15 * v15)) + (float)(v17 * v17));
  if ( v18 != 0.0 )
  {
    v15 = v15 / v18;
    v16 = v16 / v18;
    v17 = v17 / v18;
  }
  *(_QWORD *)this->m = 0i64;
  *(_QWORD *)&this->m[2] = 0i64;
  *(_QWORD *)&this->m[4] = 0i64;
  *(_QWORD *)&this->m[6] = 0i64;
  *(_QWORD *)&this->m[8] = 0i64;
  *(_QWORD *)&this->m[10] = 0i64;
  *(_QWORD *)&this->m[12] = 0i64;
  *(_QWORD *)&this->m[14] = 0i64;
  In.m[0] = v15;
  In.m[4] = v16;
  In.m[8] = v17;
  *(_QWORD *)&In.m[12] = 0i64;
  In.m[1] = (float)(v16 * v7) - (float)(v17 * v9);
  In.m[5] = (float)(v17 * v11) - (float)(v15 * v7);
  In.m[14] = 0.0;
  LODWORD(In.m[15]) = FLOAT_1_0;
  In.m[3] = 0.0;
  In.m[7] = 0.0;
  In.m[9] = (float)(v15 * v9) - (float)(v16 * v11);
  In.m[11] = 0.0;
  LODWORD(In.m[2]) = LODWORD(v11) ^ _xmm;
  LODWORD(In.m[6]) = LODWORD(v9) ^ _xmm;
  LODWORD(In.m[10]) = LODWORD(v7) ^ _xmm;
  LODWORD(this->m[14]) = LODWORD(z) ^ _xmm;
  LODWORD(this->m[13]) = LODWORD(y) ^ _xmm;
  LODWORD(this->m[12]) = LODWORD(x) ^ _xmm;
  this->m[0] = 1.0;
  this->m[5] = 1.0;
  this->m[10] = 1.0;
  this->m[15] = 1.0;
  OGLMatrix::multiply(this, &In);
}

void __fastcall OGLMatrix::multiply(OGLMatrix *this, OGLMatrix *In1, OGLMatrix *In2)
{
  float v3; // xmm5_4
  float v4; // xmm4_4
  float v5; // xmm7_4
  float v6; // xmm9_4
  float v7; // xmm15_4
  float v8; // xmm10_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm4_4
  float v12; // xmm0_4
  float v13; // xmm5_4
  float v14; // xmm3_4
  float v15; // xmm6_4
  float v16; // xmm2_4
  float v17; // xmm8_4
  float v18; // xmm1_4
  float v19; // xmm14_4
  float v20; // xmm12_4
  float v21; // xmm13_4
  float v22; // xmm11_4
  float v23; // xmm2_4
  float v24; // xmm11_4
  float v25; // xmm3_4
  float v26; // xmm13_4
  float v27; // xmm11_4
  float v28; // xmm1_4
  float v29; // xmm4_4
  float v30; // xmm5_4
  float v31; // xmm11_4
  float v32; // xmm10_4
  float v33; // xmm9_4
  float v34; // xmm12_4
  float v35; // xmm7_4
  float v36; // xmm6_4
  float v37; // xmm4_4
  float v38; // xmm8_4
  float v39; // xmm1_4
  float v40; // xmm0_4
  float v41; // [rsp+0h] [rbp-C8h]
  float v42; // [rsp+4h] [rbp-C4h]
  float v43; // [rsp+8h] [rbp-C0h]
  float v44; // [rsp+Ch] [rbp-BCh]
  float v45; // [rsp+10h] [rbp-B8h]
  float v46; // [rsp+D8h] [rbp+10h]
  float v47; // [rsp+D8h] [rbp+10h]

  v3 = In1->m[1];
  v4 = In1->m[2];
  v5 = In2->m[7];
  v6 = In2->m[2];
  v7 = In2->m[3];
  v8 = In2->m[11];
  v42 = (float)((float)((float)(In1->m[0] * In2->m[1]) + (float)(In2->m[5] * v3)) + (float)(v4 * In2->m[9]))
      + (float)(In1->m[3] * In2->m[13]);
  v41 = In1->m[3];
  v9 = (float)((float)(v6 * In1->m[0]) + (float)(In2->m[6] * v3)) + (float)(In2->m[10] * v4);
  v10 = v8 * v4;
  v11 = In1->m[7];
  v12 = v5 * v3;
  v13 = In2->m[8];
  v43 = v9 + (float)(In2->m[14] * v41);
  v14 = In1->m[6];
  v15 = In2->m[4];
  v46 = In1->m[4];
  v44 = (float)((float)((float)(v7 * In1->m[0]) + v12) + v10) + (float)(In2->m[15] * v41);
  v16 = In1->m[5];
  v45 = (float)((float)((float)(In2->m[0] * v46) + (float)(v15 * v16)) + (float)(v13 * v14)) + (float)(v11 * In2->m[12]);
  v17 = In1->m[12];
  v18 = v14 * In2->m[10];
  v19 = (float)((float)((float)(v46 * In2->m[1]) + (float)(v16 * In2->m[5])) + (float)(v14 * In2->m[9]))
      + (float)(v11 * In2->m[13]);
  v20 = In1->m[8];
  v21 = (float)(v46 * v6) + (float)(v16 * In2->m[6]);
  v22 = (float)(v46 * v7) + (float)(v16 * v5);
  v23 = In1->m[9];
  v24 = v22 + (float)(v14 * v8);
  v25 = In1->m[10];
  v26 = (float)(v21 + v18) + (float)(v11 * In2->m[14]);
  v27 = v24 + (float)(v11 * In2->m[15]);
  v28 = v25 * v13;
  v29 = In1->m[11];
  v30 = In1->m[15];
  v47 = v27;
  v31 = (float)((float)((float)(v20 * In2->m[0]) + (float)(v23 * v15)) + v28) + (float)(v29 * In2->m[12]);
  v32 = (float)((float)((float)(v20 * In2->m[1]) + (float)(v23 * In2->m[5])) + (float)(v25 * In2->m[9]))
      + (float)(v29 * In2->m[13]);
  v33 = (float)((float)((float)(v20 * v6) + (float)(v23 * In2->m[6])) + (float)(v25 * In2->m[10]))
      + (float)(v29 * In2->m[14]);
  v34 = (float)((float)((float)(v20 * v7) + (float)(v23 * v5)) + (float)(v25 * In2->m[11])) + (float)(v29 * In2->m[15]);
  v35 = (float)((float)((float)(v17 * In2->m[0]) + (float)(In1->m[13] * v15)) + (float)(In1->m[14] * In2->m[8]))
      + (float)(v30 * In2->m[12]);
  v36 = (float)((float)((float)(v17 * In2->m[1]) + (float)(In1->m[13] * In2->m[5])) + (float)(In1->m[14] * In2->m[9]))
      + (float)(v30 * In2->m[13]);
  v37 = (float)((float)((float)(v17 * In2->m[2]) + (float)(In1->m[13] * In2->m[6])) + (float)(In1->m[14] * In2->m[10]))
      + (float)(v30 * In2->m[14]);
  v38 = (float)((float)((float)(v17 * v7) + (float)(In1->m[13] * In2->m[7])) + (float)(In1->m[14] * In2->m[11]))
      + (float)(v30 * In2->m[15]);
  v39 = (float)((float)(In2->m[0] * In1->m[0]) + (float)(In2->m[4] * In1->m[1])) + (float)(In2->m[8] * In1->m[2]);
  v40 = In2->m[12] * v41;
  this->m[5] = v19;
  this->m[6] = v26;
  this->m[2] = v43;
  this->m[0] = v39 + v40;
  this->m[3] = v44;
  this->m[8] = v31;
  this->m[9] = v32;
  this->m[10] = v33;
  this->m[11] = v34;
  this->m[12] = v35;
  this->m[13] = v36;
  this->m[15] = v38;
  this->m[4] = v45;
  this->m[7] = v47;
  this->m[1] = v42;
  this->m[14] = v37;
}

void __fastcall OGLMatrix::multiply(OGLMatrix *this, OGLMatrix *In)
{
  float v2; // xmm4_4
  float v3; // xmm5_4
  float v4; // xmm6_4
  float v5; // xmm9_4
  float v6; // xmm10_4
  float v7; // xmm11_4
  float v8; // xmm15_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm4_4
  float v12; // xmm0_4
  float v13; // xmm6_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm8_4
  float v17; // xmm14_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm14_4
  float v21; // xmm12_4
  float v22; // xmm11_4
  float v23; // xmm12_4
  float v24; // xmm13_4
  float v25; // xmm0_4
  float v26; // xmm5_4
  float v27; // xmm0_4
  float v28; // xmm4_4
  float v29; // xmm0_4
  float v30; // xmm2_4
  float v31; // xmm0_4
  float v32; // xmm3_4
  float v33; // xmm11_4
  float v34; // xmm10_4
  float v35; // xmm9_4
  float v36; // xmm12_4
  float v37; // xmm1_4
  float v38; // xmm15_4
  float v39; // xmm7_4
  float v40; // xmm6_4
  float v41; // xmm2_4
  float v42; // xmm4_4
  float v43; // xmm8_4
  float v44; // xmm1_4
  float v45; // xmm0_4
  float v46; // [rsp+4h] [rbp-B4h]
  float v47; // [rsp+8h] [rbp-B0h]
  float v48; // [rsp+Ch] [rbp-ACh]
  float v49; // [rsp+C0h] [rbp+8h]
  float v50; // [rsp+C0h] [rbp+8h]
  float v51; // [rsp+D8h] [rbp+20h]

  v2 = this->m[2];
  v3 = In->m[3];
  v4 = this->m[1];
  v5 = In->m[7];
  v6 = In->m[2];
  v7 = In->m[11];
  v8 = In->m[8];
  v49 = this->m[4];
  v51 = this->m[3];
  v9 = (float)((float)(v6 * this->m[0]) + (float)(In->m[6] * v4)) + (float)(In->m[10] * v2);
  v10 = v7 * v2;
  v11 = this->m[5];
  v12 = v5 * v4;
  v13 = In->m[12];
  v46 = v9 + (float)(In->m[14] * v51);
  v14 = this->m[7];
  v47 = (float)((float)((float)(v3 * this->m[0]) + v12) + v10) + (float)(In->m[15] * v51);
  v15 = this->m[6];
  v48 = (float)((float)((float)(In->m[0] * v49) + (float)(v11 * In->m[4])) + (float)(v15 * v8)) + (float)(v14 * v13);
  v16 = this->m[12];
  v17 = (float)((float)(v49 * In->m[1]) + (float)(v11 * In->m[5])) + (float)(v15 * In->m[9]);
  v18 = v15 * In->m[10];
  v19 = v15 * v7;
  v20 = v17 + (float)(v14 * In->m[13]);
  v21 = this->m[8];
  v22 = v21 * In->m[0];
  v23 = v21 * v3;
  v24 = (float)((float)((float)(v49 * v6) + (float)(v11 * In->m[6])) + v18) + (float)(v14 * In->m[14]);
  v25 = v49 * v3;
  v26 = this->m[15];
  v27 = v25 + (float)(v11 * v5);
  v28 = this->m[11];
  v29 = v27 + v19;
  v30 = this->m[9];
  v31 = v29 + (float)(v14 * In->m[15]);
  v32 = this->m[10];
  v50 = v31;
  v33 = (float)((float)(v22 + (float)(v30 * In->m[4])) + (float)(v32 * v8)) + (float)(v28 * v13);
  v34 = (float)((float)((float)(this->m[8] * In->m[1]) + (float)(v30 * In->m[5])) + (float)(v32 * In->m[9]))
      + (float)(v28 * In->m[13]);
  v35 = (float)((float)((float)(this->m[8] * In->m[2]) + (float)(v30 * In->m[6])) + (float)(v32 * In->m[10]))
      + (float)(v28 * In->m[14]);
  v36 = (float)((float)(v23 + (float)(v30 * In->m[7])) + (float)(v32 * In->m[11])) + (float)(v28 * In->m[15]);
  v37 = this->m[14] * v8;
  v38 = v8 * this->m[2];
  v39 = (float)((float)((float)(v16 * In->m[0]) + (float)(this->m[13] * In->m[4])) + v37) + (float)(v26 * v13);
  v40 = (float)((float)((float)(v16 * In->m[1]) + (float)(this->m[13] * In->m[5])) + (float)(this->m[14] * In->m[9]))
      + (float)(v26 * In->m[13]);
  v41 = (float)((float)((float)(this->m[0] * In->m[1]) + (float)(this->m[1] * In->m[5])) + (float)(this->m[2] * In->m[9]))
      + (float)(v51 * In->m[13]);
  v42 = (float)((float)((float)(v16 * In->m[2]) + (float)(this->m[13] * In->m[6])) + (float)(this->m[14] * In->m[10]))
      + (float)(v26 * In->m[14]);
  v43 = (float)((float)((float)(v16 * In->m[3]) + (float)(this->m[13] * In->m[7])) + (float)(this->m[14] * In->m[11]))
      + (float)(v26 * In->m[15]);
  v44 = (float)(In->m[0] * this->m[0]) + (float)(In->m[4] * this->m[1]);
  v45 = In->m[12] * v51;
  this->m[5] = v20;
  this->m[6] = v24;
  this->m[8] = v33;
  this->m[9] = v34;
  this->m[2] = v46;
  this->m[0] = (float)(v44 + v38) + v45;
  this->m[3] = v47;
  this->m[10] = v35;
  this->m[11] = v36;
  this->m[12] = v39;
  this->m[13] = v40;
  this->m[15] = v43;
  this->m[4] = v48;
  this->m[7] = v50;
  this->m[1] = v41;
  this->m[14] = v42;
}

void __fastcall OGLMatrix::multiplyFast(OGLMatrix *this, OGLMatrix *In1, OGLMatrix *In2)
{
  float v3; // xmm5_4
  float v4; // xmm4_4
  float v5; // xmm9_4
  float v6; // xmm11_4
  float v7; // xmm12_4
  float v8; // xmm13_4
  float v9; // xmm14_4
  float v10; // xmm15_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm8_4
  float v14; // xmm9_4
  float v15; // xmm2_4
  float v16; // xmm10_4
  float v17; // xmm9_4
  float v18; // xmm3_4
  float v19; // xmm9_4
  float v20; // xmm8_4
  float v21; // xmm1_4
  float v22; // xmm3_4
  float v23; // xmm4_4
  float v24; // xmm7_4
  float v25; // xmm6_4
  float v26; // xmm5_4
  float v27; // xmm0_4
  float v28; // xmm4_4
  float v29; // xmm6_4
  float v30; // [rsp+0h] [rbp-B8h]
  float v31; // [rsp+D0h] [rbp+18h]
  float v32; // [rsp+D8h] [rbp+20h]

  v3 = In2->m[5];
  v4 = In2->m[10];
  v5 = In1->m[4];
  v6 = In2->m[2];
  v7 = In2->m[1];
  v8 = In2->m[6];
  v9 = In2->m[4];
  v10 = In2->m[8];
  v11 = In1->m[6];
  v31 = (float)((float)(v6 * In1->m[0]) + (float)(v8 * In1->m[1])) + (float)(v4 * In1->m[2]);
  v12 = In1->m[5];
  v13 = (float)((float)(In2->m[0] * v5) + (float)(v9 * v12)) + (float)(v10 * v11);
  v14 = (float)(v5 * v6) + (float)(v12 * v8);
  v15 = In1->m[9];
  v32 = v13;
  v16 = (float)((float)(In1->m[4] * v7) + (float)(In1->m[5] * v3)) + (float)(v11 * In2->m[9]);
  v17 = v14 + (float)(v11 * v4);
  v18 = In1->m[10];
  v30 = v17;
  v19 = In1->m[8];
  v20 = (float)((float)(v19 * In2->m[0]) + (float)(v15 * v9)) + (float)(v18 * v10);
  v21 = v18 * In2->m[9];
  v22 = v18 * v4;
  v23 = In1->m[12];
  v24 = (float)((float)(v19 * v7) + (float)(v15 * v3)) + v21;
  v25 = v23 * v6;
  v26 = (float)((float)((float)(v23 * In2->m[0]) + (float)(In1->m[13] * v9)) + (float)(In1->m[14] * v10)) + In2->m[12];
  v27 = (float)((float)(In2->m[0] * In1->m[0]) + (float)(v9 * In1->m[1])) + (float)(v10 * In1->m[2]);
  v28 = (float)((float)((float)(v23 * v7) + (float)(In1->m[13] * In2->m[5])) + (float)(In1->m[14] * In2->m[9]))
      + In2->m[13];
  v29 = (float)((float)(v25 + (float)(In1->m[13] * v8)) + (float)(In1->m[14] * In2->m[10])) + In2->m[14];
  this->m[1] = (float)((float)(In1->m[0] * v7) + (float)(In2->m[5] * In1->m[1])) + (float)(In1->m[2] * In2->m[9]);
  this->m[0] = v27;
  this->m[2] = v31;
  this->m[5] = v16;
  this->m[8] = v20;
  this->m[9] = v24;
  this->m[10] = (float)((float)(v19 * v6) + (float)(v15 * v8)) + v22;
  this->m[14] = v29;
  this->m[4] = v32;
  this->m[6] = v30;
  this->m[12] = v26;
  this->m[13] = v28;
  this->m[3] = 0.0;
  this->m[7] = 0.0;
  this->m[11] = 0.0;
  this->m[15] = 1.0;
}

void __fastcall OGLMatrix::multiplyFast(OGLMatrix *this, OGLMatrix *In)
{
  float v2; // xmm5_4
  float v3; // xmm9_4
  float v4; // xmm11_4
  float v5; // xmm12_4
  float v6; // xmm13_4
  float v7; // xmm14_4
  float v8; // xmm15_4
  float v9; // xmm3_4
  float v10; // xmm10_4
  float v11; // xmm2_4
  float v12; // xmm9_4
  float v13; // xmm8_4
  float v14; // xmm1_4
  float v15; // xmm3_4
  float v16; // xmm7_4
  float v17; // xmm4_4
  float v18; // xmm6_4
  float v19; // xmm1_4
  float v20; // xmm12_4
  float v21; // xmm5_4
  float v22; // xmm0_4
  float v23; // xmm4_4
  float v24; // xmm6_4
  float v25; // [rsp+0h] [rbp-B8h]
  float v26; // [rsp+D0h] [rbp+18h]
  float v27; // [rsp+D8h] [rbp+20h]

  v2 = In->m[10];
  v3 = this->m[4];
  v4 = In->m[2];
  v5 = In->m[8];
  v6 = In->m[6];
  v7 = In->m[4];
  v8 = In->m[1];
  v26 = (float)((float)(v4 * this->m[0]) + (float)(v6 * this->m[1])) + (float)(v2 * this->m[2]);
  v9 = this->m[10];
  v10 = (float)((float)(v3 * v8) + (float)(this->m[5] * In->m[5])) + (float)(this->m[6] * In->m[9]);
  v27 = (float)((float)(In->m[0] * v3) + (float)(this->m[5] * v7)) + (float)(this->m[6] * v5);
  v11 = this->m[9];
  v25 = (float)((float)(v3 * v4) + (float)(this->m[5] * v6)) + (float)(this->m[6] * v2);
  v12 = this->m[8];
  v13 = (float)((float)(v12 * In->m[0]) + (float)(v11 * v7)) + (float)(v9 * v5);
  v14 = v9 * In->m[9];
  v15 = v9 * v2;
  v16 = (float)((float)(v12 * v8) + (float)(v11 * In->m[5])) + v14;
  v17 = this->m[12];
  v18 = v17 * v4;
  v19 = this->m[14] * v5;
  v20 = v5 * this->m[2];
  v21 = (float)((float)((float)(v17 * In->m[0]) + (float)(this->m[13] * v7)) + v19) + In->m[12];
  v22 = (float)(In->m[0] * this->m[0]) + (float)(v7 * this->m[1]);
  v23 = (float)((float)((float)(v17 * v8) + (float)(this->m[13] * In->m[5])) + (float)(this->m[14] * In->m[9]))
      + In->m[13];
  v24 = (float)((float)(v18 + (float)(this->m[13] * v6)) + (float)(this->m[14] * In->m[10])) + In->m[14];
  this->m[1] = (float)((float)(this->m[0] * v8) + (float)(this->m[1] * In->m[5])) + (float)(this->m[2] * In->m[9]);
  this->m[2] = v26;
  this->m[5] = v10;
  this->m[0] = v22 + v20;
  this->m[8] = v13;
  this->m[9] = v16;
  this->m[10] = (float)((float)(v12 * v4) + (float)(v11 * v6)) + v15;
  this->m[14] = v24;
  this->m[4] = v27;
  this->m[6] = v25;
  this->m[12] = v21;
  this->m[13] = v23;
  this->m[3] = 0.0;
  this->m[7] = 0.0;
  this->m[11] = 0.0;
  this->m[15] = 1.0;
}

void __fastcall OGLMatrix::multiplyFastRotate(OGLMatrix *this, OGLMatrix *In1, OGLMatrix *In2)
{
  float v3; // xmm6_4
  float v4; // xmm14_4
  float v5; // xmm15_4
  float v6; // xmm3_4
  float v7; // xmm2_4
  float v8; // xmm5_4
  float v9; // xmm1_4
  float v10; // xmm6_4
  float v11; // xmm2_4
  float v12; // xmm6_4
  float v13; // xmm3_4
  float v14; // xmm11_4
  float v15; // xmm5_4
  float v16; // xmm6_4
  float v17; // xmm4_4
  float v18; // xmm2_4
  float v19; // xmm6_4
  float v20; // xmm4_4
  float v21; // xmm14_4
  float v22; // xmm15_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm3_4
  float v26; // [rsp+0h] [rbp-58h]
  float v27; // [rsp+68h] [rbp+10h]
  float v28; // [rsp+70h] [rbp+18h]
  float v29; // [rsp+78h] [rbp+20h]

  v3 = In1->m[4];
  v4 = In2->m[4];
  v27 = (float)((float)(In1->m[0] * In2->m[1]) + (float)(In2->m[5] * In1->m[1])) + (float)(In1->m[2] * In2->m[9]);
  v5 = In2->m[8];
  v6 = In1->m[6];
  v28 = (float)((float)(In2->m[2] * In1->m[0]) + (float)(In2->m[6] * In1->m[1])) + (float)(In2->m[10] * In1->m[2]);
  v7 = In1->m[5];
  v8 = (float)((float)(In2->m[0] * v3) + (float)(v4 * v7)) + (float)(v5 * v6);
  v9 = v6 * In2->m[9];
  v10 = (float)(v3 * In2->m[2]) + (float)(v7 * In2->m[6]);
  v11 = In1->m[9];
  v29 = v8;
  v12 = v10 + (float)(v6 * In2->m[10]);
  v13 = In1->m[10];
  v14 = (float)((float)(In1->m[4] * In2->m[1]) + (float)(In1->m[5] * In2->m[5])) + v9;
  v26 = v12;
  v15 = (float)((float)(In1->m[8] * In2->m[0]) + (float)(v11 * v4)) + (float)(v13 * v5);
  v16 = (float)(In1->m[8] * In2->m[2]) + (float)(v11 * In2->m[6]);
  v17 = (float)(In1->m[8] * In2->m[1]) + (float)(v11 * In2->m[5]);
  v18 = In1->m[12] + In2->m[12];
  v19 = v16 + (float)(v13 * In2->m[10]);
  v20 = v17 + (float)(v13 * In2->m[9]);
  v21 = v4 * In1->m[1];
  v22 = v5 * In1->m[2];
  v23 = In1->m[13] + In2->m[13];
  v24 = In1->m[14] + In2->m[14];
  v25 = In2->m[0] * In1->m[0];
  this->m[3] = 0.0;
  this->m[5] = v14;
  this->m[10] = v19;
  this->m[8] = v15;
  this->m[9] = v20;
  this->m[12] = v18;
  this->m[13] = v23;
  this->m[14] = v24;
  this->m[7] = 0.0;
  this->m[0] = (float)(v25 + v21) + v22;
  this->m[1] = v27;
  this->m[2] = v28;
  this->m[4] = v29;
  this->m[6] = v26;
  this->m[11] = 0.0;
  this->m[15] = 1.0;
}

void __fastcall OGLMatrix::multiplyRotate(OGLMatrix *this, OGLMatrix *In1, OGLMatrix *In2)
{
  float v3; // xmm4_4
  float v4; // xmm5_4
  float v5; // xmm10_4
  float v6; // xmm11_4
  float v7; // xmm14_4
  float v8; // xmm12_4
  float v9; // xmm13_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm6_4
  float v13; // xmm9_4
  float v14; // xmm2_4
  float v15; // xmm10_4
  float v16; // xmm9_4
  float v17; // xmm3_4
  float v18; // xmm9_4
  float v19; // xmm8_4
  float v20; // xmm7_4
  float v21; // xmm6_4
  float v22; // xmm9_4
  float v23; // xmm4_4
  float v24; // xmm5_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  float v27; // xmm15_4
  float v28; // xmm3_4
  float v29; // [rsp+B0h] [rbp+8h]
  float v30; // [rsp+B8h] [rbp+10h]
  float v31; // [rsp+C0h] [rbp+18h]
  float v32; // [rsp+C8h] [rbp+20h]

  v3 = In2->m[1];
  v4 = In2->m[10];
  v5 = In1->m[4];
  v6 = In2->m[2];
  v7 = In2->m[6];
  v8 = In2->m[4];
  v9 = In2->m[8];
  v29 = (float)((float)(In1->m[0] * v3) + (float)(In2->m[5] * In1->m[1])) + (float)(In1->m[2] * In2->m[9]);
  v10 = In1->m[6];
  v30 = (float)((float)(v6 * In1->m[0]) + (float)(v7 * In1->m[1])) + (float)(v4 * In1->m[2]);
  v11 = In1->m[5];
  v12 = (float)((float)(In2->m[0] * v5) + (float)(v8 * v11)) + (float)(v9 * v10);
  v13 = (float)(v5 * v6) + (float)(v11 * v7);
  v14 = In1->m[9];
  v15 = (float)((float)(v5 * v3) + (float)(In1->m[5] * In2->m[5])) + (float)(v10 * In2->m[9]);
  v31 = v12;
  v16 = v13 + (float)(v10 * v4);
  v17 = In1->m[10];
  v32 = v16;
  v18 = In1->m[8];
  v19 = (float)((float)(v18 * In2->m[0]) + (float)(v14 * v8)) + (float)(v17 * v9);
  v20 = (float)((float)(v18 * v3) + (float)(v14 * In2->m[5])) + (float)(v17 * In2->m[9]);
  v21 = In1->m[12] * v6;
  v22 = (float)((float)(v18 * v6) + (float)(v14 * v7)) + (float)(v17 * v4);
  v23 = (float)(In1->m[12] * v3) + (float)(In1->m[13] * In2->m[5]);
  v24 = (float)((float)(In1->m[12] * In2->m[0]) + (float)(In1->m[13] * v8)) + (float)(In1->m[14] * v9);
  v25 = In1->m[13] * v7;
  v26 = In1->m[14] * In2->m[9];
  v27 = (float)((float)(In2->m[0] * In1->m[0]) + (float)(v8 * In1->m[1])) + (float)(v9 * In1->m[2]);
  v28 = In1->m[14] * In2->m[10];
  this->m[3] = 0.0;
  this->m[1] = v29;
  this->m[2] = v30;
  this->m[0] = v27;
  this->m[14] = (float)(v21 + v25) + v28;
  this->m[5] = v15;
  this->m[8] = v19;
  this->m[9] = v20;
  this->m[10] = v22;
  this->m[13] = v23 + v26;
  this->m[4] = v31;
  this->m[6] = v32;
  this->m[12] = v24;
  this->m[7] = 0.0;
  this->m[11] = 0.0;
  this->m[15] = 1.0;
}

void __fastcall OGLMatrix::multiplyRotate(OGLMatrix *this, OGLMatrix *In)
{
  float v2; // xmm5_4
  float v3; // xmm6_4
  float v4; // xmm11_4
  float v5; // xmm12_4
  float v6; // xmm13_4
  float v7; // xmm15_4
  float v8; // xmm10_4
  float v9; // xmm4_4
  float v10; // xmm9_4
  float v11; // xmm3_4
  float v12; // xmm10_4
  float v13; // xmm2_4
  float v14; // xmm9_4
  float v15; // xmm8_4
  float v16; // xmm7_4
  float v17; // xmm6_4
  float v18; // xmm9_4
  float v19; // xmm4_4
  float v20; // xmm5_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm14_4
  float v24; // xmm3_4
  float v25; // [rsp+B0h] [rbp+8h]
  float v26; // [rsp+B8h] [rbp+10h]
  float v27; // [rsp+C0h] [rbp+18h]
  float v28; // [rsp+C8h] [rbp+20h]

  v2 = In->m[10];
  v3 = In->m[1];
  v4 = In->m[8];
  v5 = In->m[2];
  v6 = In->m[4];
  v7 = In->m[6];
  v25 = (float)((float)(this->m[0] * v3) + (float)(this->m[1] * In->m[5])) + (float)(this->m[2] * In->m[9]);
  v8 = this->m[4];
  v9 = (float)(In->m[0] * v8) + (float)(this->m[5] * v6);
  v26 = (float)((float)(v5 * this->m[0]) + (float)(v7 * this->m[1])) + (float)(v2 * this->m[2]);
  v10 = (float)(v8 * v5) + (float)(this->m[5] * v7);
  v11 = this->m[10];
  v12 = (float)((float)(v8 * v3) + (float)(this->m[5] * In->m[5])) + (float)(this->m[6] * In->m[9]);
  v27 = v9 + (float)(this->m[6] * v4);
  v13 = this->m[9];
  v28 = v10 + (float)(this->m[6] * v2);
  v14 = this->m[8];
  v15 = (float)((float)(v14 * In->m[0]) + (float)(v13 * v6)) + (float)(v11 * v4);
  v16 = (float)((float)(v14 * v3) + (float)(v13 * In->m[5])) + (float)(v11 * In->m[9]);
  v17 = this->m[12] * v5;
  v18 = (float)((float)(v14 * v5) + (float)(v13 * v7)) + (float)(v11 * v2);
  v19 = (float)(this->m[12] * In->m[1]) + (float)(this->m[13] * In->m[5]);
  v20 = (float)((float)(this->m[12] * In->m[0]) + (float)(this->m[13] * v6)) + (float)(this->m[14] * v4);
  v21 = this->m[13] * v7;
  v22 = this->m[14] * In->m[9];
  v23 = (float)((float)(In->m[0] * this->m[0]) + (float)(v6 * this->m[1])) + (float)(v4 * this->m[2]);
  v24 = this->m[14] * In->m[10];
  this->m[3] = 0.0;
  this->m[1] = v25;
  this->m[2] = v26;
  this->m[0] = v23;
  this->m[14] = (float)(v17 + v21) + v24;
  this->m[5] = v12;
  this->m[8] = v15;
  this->m[9] = v16;
  this->m[10] = v18;
  this->m[13] = v19 + v22;
  this->m[4] = v27;
  this->m[6] = v28;
  this->m[12] = v20;
  this->m[7] = 0.0;
  this->m[11] = 0.0;
  this->m[15] = 1.0;
}

void __fastcall OGLMatrix::ortho(OGLMatrix *this, float l, float r, float b, float t, float n, float f)
{
  this->m[0] = 2.0 / (float)(r - l);
  *(_QWORD *)&this->m[1] = 0i64;
  *(_QWORD *)&this->m[3] = 0i64;
  this->m[5] = 2.0 / (float)(b - t);
  *(_QWORD *)&this->m[6] = 0i64;
  *(_QWORD *)&this->m[8] = 0i64;
  this->m[10] = -2.0 / (float)(f - n);
  this->m[11] = 0.0;
  LODWORD(this->m[12]) = COERCE_UNSIGNED_INT((float)(l + r) / (float)(r - l)) ^ _xmm;
  LODWORD(this->m[14]) = COERCE_UNSIGNED_INT((float)(n + f) / (float)(f - n)) ^ _xmm;
  LODWORD(this->m[13]) = COERCE_UNSIGNED_INT((float)(b + t) / (float)(b - t)) ^ _xmm;
  this->m[15] = 1.0;
}

void __fastcall OGLMatrix::perspectiveFov(OGLMatrix *this, float fovY, float aspect, float zNear, float zFar)
{
  float v6; // xmm6_4
  float v7; // xmm8_4
  float v8; // xmm10_4
  float v9; // xmm0_4

  v6 = (float)((float)(fovY * 0.5) * 3.1415927) / 180.0;
  v7 = zFar - zNear;
  v8 = sinf(v6);
  if ( (float)(zFar - zNear) != 0.0 && v8 != 0.0 && aspect != 0.0 )
  {
    v9 = cosf(v6) / v8;
    this->m[0] = v9 / aspect;
    *(_QWORD *)&this->m[1] = 0i64;
    *(_QWORD *)&this->m[3] = 0i64;
    LODWORD(this->m[5]) = LODWORD(v9) ^ _xmm;
    *(_QWORD *)&this->m[6] = 0i64;
    *(_QWORD *)&this->m[8] = 0i64;
    this->m[11] = -1.0;
    *(_QWORD *)&this->m[12] = 0i64;
    this->m[15] = 0.0;
    this->m[14] = (float)((float)(zFar * -2.0) * zNear) / v7;
    LODWORD(this->m[10]) = COERCE_UNSIGNED_INT((float)(zNear + zFar) / v7) ^ _xmm;
  }
}

void __fastcall OGLMatrix::rotateV(OGLMatrix *this, OGLVec3 *axis, float angle)
{
  float v5; // xmm7_4
  float v6; // xmm0_4
  float z; // xmm9_4
  float x; // xmm1_4
  float v9; // xmm11_4
  float y; // xmm3_4
  float v11; // xmm10_4
  float v12; // xmm5_4
  float v13; // xmm6_4
  float v14; // xmm8_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm6_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm8_4

  v5 = sinf(angle);
  v6 = cosf(angle);
  z = axis->z;
  x = axis->x;
  v9 = v6;
  y = axis->y;
  v11 = 1.0 - v6;
  v12 = axis->x * v5;
  this->m[3] = 0.0;
  this->m[7] = 0.0;
  v13 = x * (float)(1.0 - v6);
  v14 = y * (float)(1.0 - v6);
  v15 = v13 * x;
  v16 = v13;
  v17 = v13 * z;
  v18 = v16 * y;
  this->m[0] = v15 + v9;
  this->m[1] = v18 + (float)(z * v5);
  this->m[4] = v18 - (float)(z * v5);
  this->m[2] = v17 - (float)(y * v5);
  v19 = v14 * y;
  v20 = v14 * z;
  this->m[8] = v17 + (float)(y * v5);
  this->m[5] = v19 + v9;
  this->m[6] = v20 + v12;
  this->m[9] = v20 - v12;
  this->m[10] = (float)((float)(z * v11) * z) + v9;
  *(_QWORD *)&this->m[11] = 0i64;
  *(_QWORD *)&this->m[13] = 0i64;
  this->m[15] = 1.0;
}

void __fastcall OGLMatrix::rotateZ(OGLMatrix *this, float angle)
{
  float v3; // xmm7_4
  float v4; // xmm0_4

  v3 = sinf(angle);
  v4 = cosf(angle);
  *(_QWORD *)this->m = 0i64;
  *(_QWORD *)&this->m[2] = 0i64;
  *(_QWORD *)&this->m[4] = 0i64;
  *(_QWORD *)&this->m[6] = 0i64;
  *(_QWORD *)&this->m[8] = 0i64;
  *(_QWORD *)&this->m[10] = 0i64;
  *(_QWORD *)&this->m[12] = 0i64;
  *(_QWORD *)&this->m[14] = 0i64;
  this->m[1] = v3;
  this->m[0] = v4;
  LODWORD(this->m[4]) = LODWORD(v3) ^ _xmm;
  this->m[5] = v4;
  this->m[10] = 1.0;
  this->m[15] = 1.0;
}

void __fastcall OGLMatrix::rotationQuaternion(OGLMatrix *this, OGLQuat *q)
{
  float z; // xmm0_4
  float x; // xmm2_4
  float y; // xmm3_4
  float w; // xmm4_4
  float v6; // xmm7_4
  float v7; // xmm5_4
  float v8; // xmm9_4
  float v9; // xmm4_4
  float v10; // xmm11_4
  float v11; // xmm1_4
  float v12; // xmm7_4
  float v13; // xmm3_4

  z = q->z;
  x = q->x;
  y = q->y;
  w = q->w;
  v6 = w;
  this->m[3] = 0.0;
  v7 = w * y;
  this->m[7] = 0.0;
  v8 = z * y;
  v9 = w * z;
  v10 = y * y;
  v11 = (float)(z * z) + (float)(y * y);
  v12 = v6 * x;
  v13 = y * x;
  this->m[0] = 1.0 - (float)(v11 + v11);
  this->m[1] = (float)(v13 - v9) + (float)(v13 - v9);
  this->m[4] = (float)(v9 + v13) + (float)(v9 + v13);
  this->m[2] = (float)(v7 + (float)(z * x)) + (float)(v7 + (float)(z * x));
  this->m[8] = (float)((float)(z * x) - v7) + (float)((float)(z * x) - v7);
  this->m[5] = 1.0 - (float)((float)((float)(z * z) + (float)(x * x)) + (float)((float)(z * z) + (float)(x * x)));
  this->m[10] = 1.0 - (float)((float)(v10 + (float)(x * x)) + (float)(v10 + (float)(x * x)));
  this->m[9] = (float)(v12 + v8) + (float)(v12 + v8);
  this->m[6] = (float)(v8 - v12) + (float)(v8 - v12);
  *(_QWORD *)&this->m[11] = 0i64;
  *(_QWORD *)&this->m[13] = 0i64;
  this->m[15] = 1.0;
}

void __fastcall OGLMatrix::setViewTrans(OGLMatrix *this, OGLMatrix *mat, OGLVec3 *position, OGLVec3 *look, OGLVec3 *up)
{
  float v7; // xmm6_4
  float v8; // xmm7_4
  float v9; // xmm8_4
  float v10; // xmm9_4
  float v11; // xmm10_4
  float v12; // xmm11_4
  float v13; // xmm12_4
  float v14; // xmm13_4
  float v15; // xmm15_4
  float v16; // xmm14_4
  float v17; // xmm0_4
  float v18; // xmm3_4
  float v19; // xmm4_4
  float v20; // xmm15_4
  float v21; // xmm0_4
  float v22; // xmm15_4
  float v23; // xmm0_4
  float v24; // xmm7_4
  float v25; // xmm9_4
  float v26; // xmm10_4
  float z; // [rsp+20h] [rbp-C8h]
  float v28; // [rsp+F0h] [rbp+8h]
  float v29; // [rsp+F0h] [rbp+8h]
  float v30; // [rsp+F8h] [rbp+10h]
  float x; // [rsp+100h] [rbp+18h]
  float y; // [rsp+108h] [rbp+20h]
  float upa; // [rsp+110h] [rbp+28h]

  v7 = 0.0;
  v8 = 0.0;
  v9 = 0.0;
  v10 = 0.0;
  v11 = 0.0;
  x = position->x;
  v12 = 0.0;
  v28 = look->y - position->y;
  v13 = 0.0;
  v14 = 0.0;
  v15 = look->x - position->x;
  y = position->y;
  z = position->z;
  v16 = 0.0;
  v30 = look->z - z;
  v17 = sqrtf((float)((float)(v28 * v28) + (float)(v15 * v15)) + (float)(v30 * v30));
  if ( v17 != 0.0 )
  {
    v8 = v15 / v17;
    v10 = v28 / v17;
    v11 = v30 / v17;
  }
  v18 = up->z;
  v19 = (float)(up->x * v11) - (float)(v18 * v8);
  v20 = (float)(up->y * v8) - (float)(up->x * v10);
  upa = (float)(v18 * v10) - (float)(up->y * v11);
  v29 = v19;
  v21 = sqrtf((float)((float)(v19 * v19) + (float)(upa * upa)) + (float)(v20 * v20));
  if ( v21 != 0.0 )
  {
    v9 = upa / v21;
    v12 = v29 / v21;
    v13 = v20 / v21;
  }
  v22 = (float)(v11 * v12) - (float)(v13 * v10);
  v23 = sqrtf(
          (float)((float)((float)((float)(v13 * v8) - (float)(v11 * v9)) * (float)((float)(v13 * v8) - (float)(v11 * v9)))
                + (float)(v22 * v22))
        + (float)((float)((float)(v10 * v9) - (float)(v12 * v8)) * (float)((float)(v10 * v9) - (float)(v12 * v8))));
  if ( v23 != 0.0 )
  {
    v7 = v22 / v23;
    v14 = (float)((float)(v13 * v8) - (float)(v11 * v9)) / v23;
    v16 = (float)((float)(v10 * v9) - (float)(v12 * v8)) / v23;
  }
  LODWORD(v24) = LODWORD(v8) ^ _xmm;
  LODWORD(v25) = LODWORD(v10) ^ _xmm;
  LODWORD(v26) = LODWORD(v11) ^ _xmm;
  mat->m[8] = v24;
  mat->m[0] = v9;
  mat->m[4] = v7;
  mat->m[9] = v25;
  mat->m[10] = v26;
  mat->m[1] = v12;
  mat->m[5] = v14;
  mat->m[2] = v13;
  mat->m[6] = v16;
  this->m[0] = v9;
  this->m[1] = v7;
  this->m[2] = v24;
  this->m[4] = v12;
  this->m[5] = v14;
  this->m[6] = v25;
  this->m[8] = v13;
  this->m[9] = v16;
  this->m[10] = v26;
  this->m[12] = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v9 * x) ^ _xmm) - (float)(v12 * y)) - (float)(v13 * z);
  this->m[13] = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v7 * x) ^ _xmm) - (float)(v14 * y)) - (float)(v16 * z);
  this->m[14] = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v24 * x) ^ _xmm) - (float)(v25 * y)) - (float)(v26 * z);
}

void __fastcall OGLMatrix::transpose(OGLMatrix *this)
{
  OGLMatrix v1; // [rsp+0h] [rbp-48h]

  v1.m[0] = this->m[0];
  v1.m[4] = this->m[1];
  v1.m[12] = this->m[3];
  v1.m[8] = this->m[2];
  v1.m[5] = this->m[5];
  v1.m[1] = this->m[4];
  v1.m[13] = this->m[7];
  v1.m[9] = this->m[6];
  v1.m[6] = this->m[9];
  v1.m[2] = this->m[8];
  v1.m[14] = this->m[11];
  v1.m[10] = this->m[10];
  v1.m[7] = this->m[13];
  v1.m[3] = this->m[12];
  v1.m[15] = this->m[15];
  v1.m[11] = this->m[14];
  *this = v1;
}

