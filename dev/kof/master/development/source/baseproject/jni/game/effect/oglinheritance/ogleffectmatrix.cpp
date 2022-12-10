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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14089E39B
OGLEffectMatrix::~OGLEffectMatrix(); // 0x140155980
void OGLEffectMatrix::multiplyMatrixToTranslate(OGLMatrix * pIn); // 0x140155990
void OGLEffectMatrix::rotationQuaternion(float x, float y, float z, float w); // 0x140155A50
void OGLEffectMatrix::BlendMatrixIdentity(float rotateBlendRatio, float offsetBlendRatio); // 0x140155BB0
void OGLEffectMatrix::BlendMatrix(const OGLMatrix * pIn1, const OGLMatrix * pIn2, float rotateBlendRatio, float offsetBlendRatio); // 0x140155DD0
void OGLEffectMatrix::inverse(); // 0x140156020//decompilation failure at 14089E39B!
void __fastcall OGLEffectMatrix::~OGLEffectMatrix(OGLEffectMatrix *this)
{
  this->__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
}

void __fastcall OGLEffectMatrix::BlendMatrix(
        OGLEffectMatrix *this,
        const OGLMatrix *pIn1,
        const OGLMatrix *pIn2,
        float rotateBlendRatio,
        float offsetBlendRatio)
{
  __int128 v5; // xmm2
  __int128 v7; // xmm4
  __int128 v8; // xmm5
  __int128 v9; // xmm6
  __int128 v10; // xmm7
  __int128 v11; // xmm8
  __int128 v12; // xmm9
  __int128 v14; // xmm3
  OGLMatrix In2; // [rsp+28h] [rbp-E0h] BYREF
  float v16; // [rsp+68h] [rbp-A0h]
  int v17; // [rsp+6Ch] [rbp-9Ch]
  OGLMatrix In1; // [rsp+78h] [rbp-90h] BYREF
  float v19; // [rsp+B8h] [rbp-50h]
  int v20; // [rsp+BCh] [rbp-4Ch]

  v5 = *(_OWORD *)pIn1->m;
  v7 = *(_OWORD *)&pIn1->m[8];
  *(_QWORD *)In1.m = &OGLEffectMatrix::`vftable';
  v8 = *(_OWORD *)&pIn1->m[12];
  v9 = *(_OWORD *)pIn2->m;
  v10 = *(_OWORD *)&pIn2->m[4];
  v11 = *(_OWORD *)&pIn2->m[8];
  v12 = *(_OWORD *)&pIn2->m[12];
  v14 = *(_OWORD *)&pIn1->m[4];
  In1.m[5] = *((float *)&v5 + 3);
  In1.m[3] = *((float *)&v5 + 1) * rotateBlendRatio;
  In1.m[9] = *((float *)&v14 + 3);
  In1.m[4] = *((float *)&v5 + 2) * rotateBlendRatio;
  In1.m[7] = *((float *)&v14 + 1) * rotateBlendRatio;
  In1.m[13] = *((float *)&v7 + 3);
  In1.m[8] = *((float *)&v14 + 2) * rotateBlendRatio;
  In1.m[11] = *((float *)&v7 + 1) * rotateBlendRatio;
  v20 = HIDWORD(v8);
  In1.m[12] = *((float *)&v7 + 2) * rotateBlendRatio;
  In2.m[5] = *((float *)&v9 + 3);
  In2.m[9] = *((float *)&v10 + 3);
  In2.m[13] = *((float *)&v11 + 3);
  In1.m[2] = *(float *)&v5 * rotateBlendRatio;
  In1.m[6] = *(float *)&v14 * rotateBlendRatio;
  In1.m[15] = *((float *)&v8 + 1) * offsetBlendRatio;
  v19 = *((float *)&v8 + 2) * offsetBlendRatio;
  In1.m[10] = *(float *)&v7 * rotateBlendRatio;
  v17 = HIDWORD(v12);
  In1.m[14] = *(float *)&v8 * offsetBlendRatio;
  In2.m[3] = *((float *)&v9 + 1) * (float)(1.0 - rotateBlendRatio);
  In2.m[4] = *((float *)&v9 + 2) * (float)(1.0 - rotateBlendRatio);
  In2.m[7] = *((float *)&v10 + 1) * (float)(1.0 - rotateBlendRatio);
  In2.m[8] = *((float *)&v10 + 2) * (float)(1.0 - rotateBlendRatio);
  In2.m[11] = *((float *)&v11 + 1) * (float)(1.0 - rotateBlendRatio);
  In2.m[12] = *((float *)&v11 + 2) * (float)(1.0 - rotateBlendRatio);
  In2.m[2] = *(float *)&v9 * (float)(1.0 - rotateBlendRatio);
  In2.m[6] = *(float *)&v10 * (float)(1.0 - rotateBlendRatio);
  In2.m[10] = *(float *)&v11 * (float)(1.0 - rotateBlendRatio);
  In2.m[15] = *((float *)&v12 + 1) * (float)(1.0 - offsetBlendRatio);
  v16 = *((float *)&v12 + 2) * (float)(1.0 - offsetBlendRatio);
  In2.m[14] = *(float *)&v12 * (float)(1.0 - offsetBlendRatio);
  OGLMatrix::add(&this->OGLMatrix, (OGLMatrix *)&In1.m[2], (OGLMatrix *)&In2.m[2]);
  this->m[15] = 1.0;
}

void __fastcall OGLEffectMatrix::BlendMatrixIdentity(
        OGLEffectMatrix *this,
        float rotateBlendRatio,
        float offsetBlendRatio)
{
  OGLMatrix *v4; // rax
  __int128 v5; // xmm3
  __int128 v6; // xmm4
  __int128 v7; // xmm5
  OGLMatrix In1; // [rsp+28h] [rbp-E0h] BYREF
  float v9; // [rsp+68h] [rbp-A0h]
  int v10; // [rsp+6Ch] [rbp-9Ch]
  void **v11; // [rsp+78h] [rbp-90h]
  OGLMatrix In2; // [rsp+80h] [rbp-88h] BYREF

  memset(&In2, 0, sizeof(In2));
  v4 = &this->OGLMatrix;
  v11 = &OGLEffectMatrix::`vftable';
  if ( !this )
    v4 = 0i64;
  In2.m[11] = 0.0;
  In2.m[15] = 1.0;
  v5 = *(_OWORD *)&v4->m[4];
  v6 = *(_OWORD *)&v4->m[8];
  v7 = *(_OWORD *)&v4->m[12];
  *(_OWORD *)&In1.m[2] = *(_OWORD *)v4->m;
  In1.m[3] = In1.m[3] * rotateBlendRatio;
  In1.m[9] = *((float *)&v5 + 3);
  In1.m[4] = In1.m[4] * rotateBlendRatio;
  In1.m[7] = *((float *)&v5 + 1) * rotateBlendRatio;
  In1.m[13] = *((float *)&v6 + 3);
  v10 = HIDWORD(v7);
  In1.m[11] = *((float *)&v6 + 1) * rotateBlendRatio;
  In1.m[8] = *((float *)&v5 + 2) * rotateBlendRatio;
  In1.m[2] = In1.m[2] * rotateBlendRatio;
  In1.m[15] = *((float *)&v7 + 1) * offsetBlendRatio;
  In1.m[12] = *((float *)&v6 + 2) * rotateBlendRatio;
  In2.m[1] = (float)(1.0 - rotateBlendRatio) * 0.0;
  In2.m[2] = In2.m[1];
  In2.m[4] = In2.m[1];
  In2.m[6] = In2.m[1];
  In2.m[8] = In2.m[1];
  In2.m[9] = In2.m[1];
  In1.m[6] = *(float *)&v5 * rotateBlendRatio;
  In1.m[10] = *(float *)&v6 * rotateBlendRatio;
  In1.m[14] = *(float *)&v7 * offsetBlendRatio;
  v9 = *((float *)&v7 + 2) * offsetBlendRatio;
  In2.m[0] = 1.0 - rotateBlendRatio;
  In2.m[5] = 1.0 - rotateBlendRatio;
  In2.m[10] = 1.0 - rotateBlendRatio;
  In2.m[12] = (float)(1.0 - offsetBlendRatio) * 0.0;
  In2.m[13] = In2.m[12];
  In2.m[14] = In2.m[12];
  OGLMatrix::add(&this->OGLMatrix, (OGLMatrix *)&In1.m[2], &In2);
  this->m[15] = 1.0;
}

void __fastcall OGLEffectMatrix::inverse(OGLEffectMatrix *this)
{
  float v1; // xmm4_4
  float v2; // xmm3_4
  float v3; // xmm5_4
  float v4; // xmm6_4
  float v5; // xmm7_4
  float v6; // xmm8_4
  float v7; // xmm9_4
  float v8; // xmm15_4
  float v9; // xmm12_4
  float v10; // xmm13_4
  float v11; // xmm14_4
  float v12; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm10_4
  float v16; // xmm9_4
  float v17; // xmm3_4
  float v18; // xmm12_4
  float v19; // xmm13_4
  float v20; // xmm14_4
  float v21; // xmm11_4
  float v22; // xmm10_4
  float v23; // xmm9_4
  float v24; // xmm2_4
  float v25; // xmm4_4
  float v26; // xmm0_4
  float v27; // xmm5_4
  float v28; // xmm8_4
  float v29; // xmm7_4
  float v30; // xmm8_4
  float v31; // [rsp+B0h] [rbp+8h]
  float v32; // [rsp+B0h] [rbp+8h]
  float v33; // [rsp+B8h] [rbp+10h]

  v1 = this->m[5];
  v2 = this->m[10];
  v3 = this->m[9];
  v4 = this->m[6];
  v5 = this->m[8];
  v6 = this->m[2];
  v7 = this->m[1];
  v31 = this->m[0];
  v8 = this->m[4];
  v9 = (float)(v1 * v2) - (float)(v4 * v3);
  v10 = (float)(v5 * v4) - (float)(v8 * v2);
  v11 = (float)(v8 * v3) - (float)(v5 * v1);
  v12 = (float)((float)(v7 * v10) + (float)(v31 * v9)) + (float)(v6 * v11);
  if ( v12 >= 0.00000011920929 || v12 <= -0.00000011920929 )
  {
    v13 = v7 * v2;
    v14 = 1.0 / v12;
    v15 = v7 * v4;
    v16 = v31 * v2;
    v17 = this->m[1];
    v18 = v9 * (float)(1.0 / v12);
    v19 = v10 * (float)(1.0 / v12);
    v20 = v11 * (float)(1.0 / v12);
    this->m[0] = v18;
    this->m[4] = v19;
    this->m[8] = v20;
    v21 = (float)((float)(v6 * v3) - v13) * (float)(1.0 / v12);
    v22 = (float)(v15 - (float)(v6 * v1)) * (float)(1.0 / v12);
    this->m[1] = v21;
    v23 = (float)(v16 - (float)(v6 * v5)) * (float)(1.0 / v12);
    this->m[2] = v22;
    v24 = v31 * v1;
    v25 = this->m[13];
    v26 = v31 * v3;
    v27 = this->m[14];
    this->m[5] = v23;
    v33 = (float)((float)(v6 * v8) - (float)(v31 * v4)) * v14;
    v28 = v17 * v5;
    v29 = this->m[12];
    this->m[6] = v33;
    v30 = (float)(v28 - v26) * v14;
    v32 = (float)(v24 - (float)(v17 * v8)) * v14;
    this->m[9] = v30;
    this->m[10] = v32;
    LODWORD(this->m[13]) = COERCE_UNSIGNED_INT((float)((float)(v29 * v21) + (float)(v25 * v23)) + (float)(v27 * v30)) ^ _xmm;
    LODWORD(this->m[14]) = COERCE_UNSIGNED_INT((float)((float)(v29 * v22) + (float)(v25 * v33)) + (float)(v27 * v32)) ^ _xmm;
    LODWORD(this->m[12]) = COERCE_UNSIGNED_INT((float)((float)(v29 * v18) + (float)(v25 * v19)) + (float)(v27 * v20)) ^ _xmm;
  }
  else
  {
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
}

void __fastcall OGLEffectMatrix::multiplyMatrixToTranslate(OGLEffectMatrix *this, OGLMatrix *pIn)
{
  float v2; // xmm1_4
  float v3; // xmm4_4
  float v4; // xmm1_4
  float v5; // xmm2_4
  float v6; // xmm0_4
  float v7; // xmm5_4
  float v8; // xmm0_4
  float v9; // xmm7_4

  v2 = this->m[14];
  v3 = v2 * pIn->m[8];
  v4 = v2 * pIn->m[10];
  v5 = (float)(this->m[12] * pIn->m[2]) + (float)(this->m[13] * pIn->m[6]);
  v6 = this->m[15];
  v7 = v6 * pIn->m[12];
  v8 = v6 * pIn->m[14];
  v9 = (float)((float)(this->m[13] * pIn->m[4]) + (float)(this->m[12] * pIn->m[0])) + v3;
  this->m[13] = (float)((float)((float)(this->m[12] * pIn->m[1]) + (float)(this->m[13] * pIn->m[5]))
                      + (float)(this->m[14] * pIn->m[9]))
              + (float)(this->m[15] * pIn->m[13]);
  this->m[12] = v9 + v7;
  this->m[14] = (float)(v5 + v4) + v8;
}

void __fastcall OGLEffectMatrix::rotationQuaternion(OGLEffectMatrix *this, float x, float y, float z, float w)
{
  float v5; // xmm11_4
  float v6; // xmm4_4
  float v7; // xmm8_4
  float v8; // xmm7_4
  float v9; // xmm5_4
  float v10; // xmm2_4
  float v11; // xmm3_4

  v5 = y * y;
  this->m[3] = 0.0;
  v6 = x * y;
  this->m[7] = 0.0;
  v7 = y * w;
  v8 = y * z;
  v9 = z * z;
  v10 = x * z;
  v11 = z * w;
  this->m[0] = 1.0 - (float)((float)(v9 + v5) + (float)(v9 + v5));
  this->m[1] = (float)(v11 + v6) + (float)(v11 + v6);
  this->m[4] = (float)(v6 - v11) + (float)(v6 - v11);
  this->m[2] = (float)(v10 - v7) + (float)(v10 - v7);
  this->m[8] = (float)(v7 + v10) + (float)(v7 + v10);
  this->m[10] = 1.0 - (float)((float)(v5 + (float)(x * x)) + (float)(v5 + (float)(x * x)));
  this->m[9] = (float)(v8 - (float)(x * w)) + (float)(v8 - (float)(x * w));
  this->m[5] = 1.0 - (float)((float)(v9 + (float)(x * x)) + (float)(v9 + (float)(x * x)));
  this->m[6] = (float)((float)(x * w) + v8) + (float)((float)(x * w) + v8);
  *(_QWORD *)&this->m[11] = 0i64;
  *(_QWORD *)&this->m[13] = 0i64;
  this->m[15] = 1.0;
}

