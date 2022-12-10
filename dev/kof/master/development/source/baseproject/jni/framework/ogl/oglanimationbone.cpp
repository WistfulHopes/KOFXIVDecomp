#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
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
#include "dev/silverware/git/sdk/agcondition.inl"
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
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglanimationbone.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
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
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/silverware/git/sdk/agclock.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x140889528
OGLPrevAnimationBone::OGLPrevAnimationBone(); // 0x140051310
OGLPrevAnimationBone::~OGLPrevAnimationBone(); // 0x140051350
OGLAnimationBone::OGLAnimationBone(); // 0x140051380
OGLAnimationBone::~OGLAnimationBone(); // 0x1400513A0
void OGLAnimationBone::getScalMatrix(OGLMatrix * matScal, float frame, OGLPrevAnimationBone * pOutPrev, OGLPrevAnimationBone * pPrev, long iMirrorType, long iPrevMirrorType, float blendRate); // 0x140051400
void OGLAnimationBone::getScalMatrixBindPose(OGLMatrix * matScal, OGLPrevAnimationBone * pBind, OGLPrevAnimationBone * pOutPrev, OGLPrevAnimationBone * pPrev, long iMirrorType, long iPrevMirrorType, float blendRate); // 0x140051790
void OGLAnimationBone::getRotMatrix(OGLMatrix * matRot, float frame, OGLPrevAnimationBone * pOutPrev, OGLPrevAnimationBone * pPrev, long iMirrorType, long iPrevMirrorType, float blendRate); // 0x1400518E0
void OGLAnimationBone::getRotMatrixBindPose(OGLMatrix * matRot, OGLPrevAnimationBone * pBind, OGLPrevAnimationBone * pOutPrev, OGLPrevAnimationBone * pPrev, long iMirrorType, long iPrevMirrorType, float blendRate); // 0x140052070
void OGLAnimationBone::getTransPos(OGLVec3 * vPos, float frame, OGLPrevAnimationBone * pOutPrev, OGLPrevAnimationBone * pPrev, long iMirrorType, long iPrevMirrorType, float blendRate, float fBoneScale, OGLMatrix * pOffsetMat); // 0x140052450
void OGLAnimationBone::getTransPosBindPose(OGLVec3 * vPos, OGLPrevAnimationBone * pBind, OGLPrevAnimationBone * pOutPrev, OGLPrevAnimationBone * pPrev, long iMirrorType, long iPrevMirrorType, float blendRate); // 0x1400529F0
void OGLAnimationBone::getBoneMatrix(OGLMatrix * matBone, OGLVec3 * vecBoneScale, float frame, OGLPrevAnimationBone * pOutPrev, OGLPrevAnimationBone * pPrev, float fBoneScale, OGLMatrix * pOffsetMat, long iMirrorType, long iPrevMirrorType, float blendRate); // 0x140052BB0
void OGLAnimationBone::getBoneMatrix(OGLMatrix * matBone, OGLVec3 * vecBoneScale, float frame, unsigned char enableTrans, OGLPrevAnimationBone * pOutPrev, OGLPrevAnimationBone * pPrev, float fBoneScale, OGLMatrix * pOffsetMat, long iMirrorType, long iPrevMirrorType, float blendRate); // 0x140052EB0
void OGLAnimationBone::getBoneMatrixBindPose(OGLMatrix * matBone, OGLVec3 * vecBoneScale, OGLPrevAnimationBone * pBind, OGLPrevAnimationBone * pOutPrev, OGLPrevAnimationBone * pPrev, long iMirrorType, long iPrevMirrorType, float blendRate); // 0x1400531C0//decompilation failure at 140889528!
void __fastcall OGLAnimationBone::OGLAnimationBone(OGLAnimationBone *this)
{
  *(_QWORD *)&this->m_uiInfoFlg = 0i64;
  this->m_pKeyTrans = 0i64;
  this->m_iKeyTransCount = 0;
  this->m_pKeyScale = 0i64;
  this->m_iKeyScaleCount = 0;
  this->m_pKeyRot = 0i64;
  this->m_iKeyRotCount = 0;
}

void __fastcall OGLPrevAnimationBone::OGLPrevAnimationBone(OGLPrevAnimationBone *this)
{
  *(_QWORD *)&this->m_vPrevTrans.z = 0i64;
  *(_QWORD *)&this->m_vPrevScale.y = 0i64;
  *(_QWORD *)&this->m_vPrevTrans.x = 0i64;
  this->m_vPrevTrans.z = 0.0;
  this->m_vPrevScale.x = 1.0;
  this->m_vPrevScale.y = 1.0;
  *(_QWORD *)&this->m_vPrevScale.z = 1065353216i64;
  *(_QWORD *)&this->m_vPrevRot.y = 0i64;
  this->m_vPrevRot.w = 1.0;
}

void __fastcall OGLAnimationBone::~OGLAnimationBone(OGLAnimationBone *this, unsigned __int64 a2)
{
  OGLKeyRot *m_pKeyRot; // rcx
  OGLKeyScale *m_pKeyScale; // rcx
  OGLKeyTrans *m_pKeyTrans; // rcx

  m_pKeyRot = this->m_pKeyRot;
  if ( m_pKeyRot )
  {
    operator delete(m_pKeyRot, a2);
    this->m_pKeyRot = 0i64;
  }
  m_pKeyScale = this->m_pKeyScale;
  this->m_iKeyRotCount = 0;
  if ( m_pKeyScale )
  {
    operator delete(m_pKeyScale, a2);
    this->m_pKeyScale = 0i64;
  }
  m_pKeyTrans = this->m_pKeyTrans;
  this->m_iKeyScaleCount = 0;
  if ( m_pKeyTrans )
  {
    operator delete(m_pKeyTrans, a2);
    this->m_pKeyTrans = 0i64;
  }
  this->m_uiInfoFlg = 0;
  this->m_iKeyTransCount = 0;
}

void __fastcall OGLPrevAnimationBone::~OGLPrevAnimationBone(OGLPrevAnimationBone *this)
{
  *(_QWORD *)&this->m_vPrevTrans.x = 0i64;
  this->m_vPrevTrans.z = 0.0;
  this->m_vPrevScale.x = 1.0;
  this->m_vPrevScale.y = 1.0;
  *(_QWORD *)&this->m_vPrevScale.z = 1065353216i64;
  *(_QWORD *)&this->m_vPrevRot.y = 0i64;
  this->m_vPrevRot.w = 1.0;
}

void __fastcall OGLAnimationBone::getBoneMatrix(
        OGLAnimationBone *this,
        OGLMatrix *matBone,
        OGLVec3 *vecBoneScale,
        float frame,
        unsigned __int8 enableTrans,
        OGLPrevAnimationBone *pOutPrev,
        OGLPrevAnimationBone *pPrev,
        float fBoneScale,
        OGLMatrix *pOffsetMat,
        int iMirrorType,
        int iPrevMirrorType,
        float blendRate)
{
  float *v16; // rdx
  float v17; // xmm1_4
  float v18; // eax
  float v19; // xmm13_4
  float v20; // xmm4_4
  float v21; // xmm9_4
  float v22; // xmm10_4
  float v23; // xmm11_4
  float v24; // xmm5_4
  float v25; // xmm12_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  float v28; // xmm3_4
  float v29; // xmm2_4
  float v30; // xmm2_4
  float v31; // xmm1_4
  float v32; // xmm0_4
  int v33; // [rsp+30h] [rbp-D8h]
  int v34; // [rsp+38h] [rbp-D0h]
  OGLVec3 vPos; // [rsp+58h] [rbp-B0h] BYREF
  OGLMatrix matRot; // [rsp+68h] [rbp-A0h] BYREF

  if ( this->m_iKeyScaleCount > 0 )
  {
    OGLAnimationBone::getScalMatrix(this, matBone, frame, pOutPrev, pPrev, v33, v34, blendRate);
    v17 = v16[10];
    v18 = *v16;
    vecBoneScale->y = v16[5];
    vecBoneScale->z = v17;
    vecBoneScale->x = v18;
  }
  if ( this->m_iKeyRotCount > 0 )
  {
    memset(&matRot, 0, 48);
    OGLAnimationBone::getRotMatrix(this, &matRot, frame, pOutPrev, pPrev, iMirrorType, iPrevMirrorType, blendRate);
    v19 = matRot.m[0];
    v20 = matRot.m[10];
    v21 = matRot.m[9];
    v22 = matRot.m[8];
    v23 = matRot.m[6];
    v24 = matRot.m[5];
    v25 = matRot.m[4];
    if ( matRot.m[0] != 1.0
      || matRot.m[4] != 0.0
      || matRot.m[8] != 0.0
      || matRot.m[1] != 0.0
      || matRot.m[5] != 1.0
      || matRot.m[9] != 0.0
      || matRot.m[2] != 0.0
      || matRot.m[6] != 0.0
      || matRot.m[10] != 1.0 )
    {
      v26 = matBone->m[0];
      v27 = matBone->m[0] * matRot.m[1];
      v28 = matBone->m[5];
      matBone->m[2] = matBone->m[0] * matRot.m[2];
      matBone->m[1] = v27;
      matBone->m[0] = v26 * v19;
      v29 = matBone->m[10];
      matBone->m[6] = v28 * v23;
      matBone->m[4] = v28 * v25;
      matBone->m[9] = v29 * v21;
      matBone->m[5] = v28 * v24;
      matBone->m[8] = v29 * v22;
      matBone->m[10] = v29 * v20;
    }
  }
  if ( this->m_iKeyTransCount > 0 )
  {
    *(_QWORD *)&vPos.x = 0i64;
    vPos.z = 0.0;
    OGLAnimationBone::getTransPos(
      this,
      &vPos,
      frame,
      pOutPrev,
      pPrev,
      iMirrorType,
      iPrevMirrorType,
      blendRate,
      fBoneScale,
      pOffsetMat);
    if ( vPos.x != 0.0 || vPos.y != 0.0 || vPos.z != 0.0 )
    {
      v30 = vPos.x + matBone->m[12];
      v31 = vPos.y + matBone->m[13];
      v32 = vPos.z + matBone->m[14];
      matBone->m[15] = 1.0;
      matBone->m[12] = v30;
      matBone->m[13] = v31;
      matBone->m[14] = v32;
    }
  }
}

void __fastcall OGLAnimationBone::getBoneMatrix(
        OGLAnimationBone *this,
        OGLMatrix *matBone,
        OGLVec3 *vecBoneScale,
        float frame,
        OGLPrevAnimationBone *pOutPrev,
        OGLPrevAnimationBone *pPrev,
        float fBoneScale,
        OGLMatrix *pOffsetMat,
        int iMirrorType,
        int iPrevMirrorType,
        float blendRate)
{
  float *v15; // rdx
  float v16; // xmm1_4
  float v17; // eax
  float v18; // xmm13_4
  float v19; // xmm4_4
  float v20; // xmm9_4
  float v21; // xmm10_4
  float v22; // xmm11_4
  float v23; // xmm5_4
  float v24; // xmm12_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  float v27; // xmm3_4
  float v28; // xmm2_4
  float v29; // xmm2_4
  float v30; // xmm1_4
  float v31; // xmm0_4
  int v32; // [rsp+30h] [rbp-D8h]
  int v33; // [rsp+38h] [rbp-D0h]
  OGLVec3 vPos; // [rsp+58h] [rbp-B0h] BYREF
  OGLMatrix matRot; // [rsp+68h] [rbp-A0h] BYREF

  if ( this->m_iKeyScaleCount > 0 )
  {
    OGLAnimationBone::getScalMatrix(this, matBone, frame, pOutPrev, pPrev, v32, v33, blendRate);
    v16 = v15[10];
    v17 = *v15;
    vecBoneScale->y = v15[5];
    vecBoneScale->z = v16;
    vecBoneScale->x = v17;
  }
  if ( this->m_iKeyRotCount > 0 )
  {
    memset(&matRot, 0, 48);
    OGLAnimationBone::getRotMatrix(this, &matRot, frame, pOutPrev, pPrev, iMirrorType, iPrevMirrorType, blendRate);
    v18 = matRot.m[0];
    v19 = matRot.m[10];
    v20 = matRot.m[9];
    v21 = matRot.m[8];
    v22 = matRot.m[6];
    v23 = matRot.m[5];
    v24 = matRot.m[4];
    if ( matRot.m[0] != 1.0
      || matRot.m[4] != 0.0
      || matRot.m[8] != 0.0
      || matRot.m[1] != 0.0
      || matRot.m[5] != 1.0
      || matRot.m[9] != 0.0
      || matRot.m[2] != 0.0
      || matRot.m[6] != 0.0
      || matRot.m[10] != 1.0 )
    {
      v25 = matBone->m[0];
      v26 = matBone->m[0] * matRot.m[1];
      v27 = matBone->m[5];
      matBone->m[2] = matBone->m[0] * matRot.m[2];
      matBone->m[1] = v26;
      matBone->m[0] = v25 * v18;
      v28 = matBone->m[10];
      matBone->m[6] = v27 * v22;
      matBone->m[4] = v27 * v24;
      matBone->m[9] = v28 * v20;
      matBone->m[5] = v27 * v23;
      matBone->m[8] = v28 * v21;
      matBone->m[10] = v28 * v19;
    }
  }
  if ( this->m_iKeyTransCount > 0 )
  {
    *(_QWORD *)&vPos.x = 0i64;
    vPos.z = 0.0;
    OGLAnimationBone::getTransPos(
      this,
      &vPos,
      frame,
      pOutPrev,
      pPrev,
      iMirrorType,
      iPrevMirrorType,
      blendRate,
      fBoneScale,
      0i64);
    if ( vPos.x != 0.0 || vPos.y != 0.0 || vPos.z != 0.0 )
    {
      v29 = vPos.x + matBone->m[12];
      v30 = vPos.y + matBone->m[13];
      v31 = vPos.z + matBone->m[14];
      matBone->m[15] = 1.0;
      matBone->m[12] = v29;
      matBone->m[13] = v30;
      matBone->m[14] = v31;
    }
  }
}

void __fastcall OGLAnimationBone::getBoneMatrixBindPose(
        OGLAnimationBone *this,
        OGLMatrix *matBone,
        OGLVec3 *vecBoneScale,
        OGLPrevAnimationBone *pBind,
        OGLPrevAnimationBone *pOutPrev,
        OGLPrevAnimationBone *pPrev,
        int iMirrorType,
        int iPrevMirrorType,
        float blendRate)
{
  _DWORD *v11; // rdx
  int v12; // xmm0_4
  int v13; // xmm5_4
  _DWORD *v14; // r10
  OGLAnimationBone *v15; // rcx
  OGLPrevAnimationBone *v16; // r8
  OGLPrevAnimationBone *v17; // r9
  OGLAnimationBone *v18; // rcx
  float v19; // xmm12_4
  float v20; // xmm4_4
  float v21; // xmm7_4
  float v22; // xmm8_4
  float v23; // xmm9_4
  float v24; // xmm5_4
  float v25; // xmm10_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  float v28; // xmm3_4
  float v29; // xmm2_4
  float v30; // xmm2_4
  float v31; // xmm1_4
  float v32; // xmm0_4
  int v33; // [rsp+30h] [rbp-B9h]
  int v34; // [rsp+38h] [rbp-B1h]
  OGLVec3 vPos; // [rsp+48h] [rbp-A1h] BYREF
  OGLMatrix matRot; // [rsp+58h] [rbp-91h] BYREF

  OGLAnimationBone::getScalMatrixBindPose(this, matBone, pBind, pOutPrev, pPrev, v33, v34, blendRate);
  v12 = v11[5];
  v13 = v11[10];
  *v14 = *v11;
  memset(&matRot, 0, 48);
  v14[1] = v12;
  v14[2] = v13;
  OGLAnimationBone::getRotMatrixBindPose(v15, &matRot, v16, v17, pPrev, iMirrorType, iPrevMirrorType, blendRate);
  v19 = matRot.m[0];
  v20 = matRot.m[10];
  v21 = matRot.m[9];
  v22 = matRot.m[8];
  v23 = matRot.m[6];
  v24 = matRot.m[5];
  v25 = matRot.m[4];
  if ( matRot.m[0] != 1.0
    || matRot.m[4] != 0.0
    || matRot.m[8] != 0.0
    || matRot.m[1] != 0.0
    || matRot.m[5] != 1.0
    || matRot.m[9] != 0.0
    || matRot.m[2] != 0.0
    || matRot.m[6] != 0.0
    || matRot.m[10] != 1.0 )
  {
    v26 = matBone->m[0];
    v27 = matBone->m[0] * matRot.m[1];
    v28 = matBone->m[5];
    matBone->m[2] = matBone->m[0] * matRot.m[2];
    matBone->m[1] = v27;
    matBone->m[0] = v26 * v19;
    v29 = matBone->m[10];
    matBone->m[6] = v28 * v23;
    matBone->m[4] = v28 * v25;
    matBone->m[9] = v29 * v21;
    matBone->m[5] = v28 * v24;
    matBone->m[8] = v29 * v22;
    matBone->m[10] = v29 * v20;
  }
  *(_QWORD *)&vPos.x = 0i64;
  vPos.z = 0.0;
  OGLAnimationBone::getTransPosBindPose(v18, &vPos, pBind, pOutPrev, pPrev, iMirrorType, iPrevMirrorType, blendRate);
  if ( vPos.x != 0.0 || vPos.y != 0.0 || vPos.z != 0.0 )
  {
    v30 = vPos.x + matBone->m[12];
    v31 = vPos.y + matBone->m[13];
    v32 = vPos.z + matBone->m[14];
    matBone->m[15] = 1.0;
    matBone->m[12] = v30;
    matBone->m[13] = v31;
    matBone->m[14] = v32;
  }
}

void __fastcall OGLAnimationBone::getRotMatrix(
        OGLAnimationBone *this,
        OGLMatrix *matRot,
        float frame,
        OGLPrevAnimationBone *pOutPrev,
        OGLPrevAnimationBone *pPrev,
        int iMirrorType,
        int iPrevMirrorType,
        float blendRate)
{
  __int64 m_iKeyRotCount; // r11
  OGLKeyRot *m_pKeyRot; // rsi
  int v13; // ecx
  __int64 v14; // r8
  int *v15; // r9
  int *p_Frame; // rdx
  int v17; // edx
  float v18; // xmm14_4
  __int64 v19; // r12
  float v20; // xmm0_4
  __int64 v21; // r14
  float v22; // xmm12_4
  float v23; // xmm13_4
  float maxd; // xmm10_4
  __int16 v25; // bx
  float v26; // xmm1_4
  float v27; // xmm2_4
  float v28; // xmm3_4
  float x; // xmm2_4
  float z; // xmm0_4
  float y; // xmm1_4
  __int16 v32; // bx
  float v33; // xmm1_4
  float v34; // xmm2_4
  float v35; // xmm3_4
  __int16 v36; // r15
  float v37; // xmm1_4
  float v38; // xmm2_4
  float v39; // xmm3_4
  OGLQuat *p_q; // r8
  __int16 v41; // bx
  float v42; // xmm1_4
  float v43; // xmm2_4
  float v44; // xmm3_4
  OGLQuat q_8; // [rsp+38h] [rbp-A9h] BYREF
  OGLQuat q1_8; // [rsp+48h] [rbp-99h] BYREF
  OGLQuat q2; // [rsp+58h] [rbp-89h] BYREF
  float rfX; // [rsp+128h] [rbp+47h] BYREF
  float rfZ; // [rsp+138h] [rbp+57h] BYREF

  m_iKeyRotCount = this->m_iKeyRotCount;
  m_pKeyRot = this->m_pKeyRot;
  v13 = 0;
  v14 = 0i64;
  if ( m_iKeyRotCount < 4 )
  {
LABEL_8:
    if ( v14 < m_iKeyRotCount )
    {
      p_Frame = &m_pKeyRot[v14].Frame;
      do
      {
        if ( (float)*p_Frame >= frame )
          break;
        ++v13;
        ++v14;
        p_Frame += 5;
      }
      while ( v14 < m_iKeyRotCount );
    }
  }
  else
  {
    v15 = &m_pKeyRot[2].Frame;
    while ( (float)*(v15 - 10) < frame )
    {
      if ( (float)*(v15 - 5) >= frame )
      {
        ++v13;
        break;
      }
      if ( (float)*v15 >= frame )
      {
        v13 += 2;
        break;
      }
      if ( (float)v15[5] >= frame )
      {
        v13 += 3;
        break;
      }
      v13 += 4;
      v14 += 4i64;
      v15 += 20;
      if ( v14 >= m_iKeyRotCount - 3 )
        goto LABEL_8;
    }
  }
  v17 = 0;
  if ( v13 )
    v17 = v13 - 1;
  if ( v13 == (_DWORD)m_iKeyRotCount )
    v13 = m_iKeyRotCount - 1;
  v18 = blendRate;
  v19 = v17;
  v20 = (float)m_pKeyRot[v17].Frame;
  v21 = v13;
  v22 = (float)m_pKeyRot[v13].Frame;
  v23 = frame - v20;
  maxd = v22 - v20;
  if ( blendRate != 0.0 )
  {
    if ( pOutPrev )
    {
      v36 = iPrevMirrorType;
      if ( iPrevMirrorType )
      {
        OGLQuat::getRotateEuler(&pPrev->m_vPrevRot, &rfX, &blendRate, &rfZ);
        v37 = rfX;
        if ( (v36 & 0x10) != 0 )
        {
          LODWORD(v37) = LODWORD(rfX) ^ _xmm;
          LODWORD(rfX) ^= _xmm;
        }
        if ( (v36 & 0x100) != 0 )
        {
          rfX = 3.1415927 - v37;
          v37 = 3.1415927 - v37;
        }
        if ( (v36 & 0x1000) != 0 )
        {
          rfX = -3.1415927 - v37;
          v37 = -3.1415927 - v37;
        }
        v38 = blendRate;
        if ( (v36 & 0x20) != 0 )
        {
          LODWORD(v38) = LODWORD(blendRate) ^ _xmm;
          LODWORD(blendRate) ^= _xmm;
        }
        if ( (v36 & 0x200) != 0 )
        {
          blendRate = 3.1415927 - v38;
          v38 = 3.1415927 - v38;
        }
        if ( (v36 & 0x2000) != 0 )
        {
          blendRate = -3.1415927 - v38;
          v38 = -3.1415927 - v38;
        }
        v39 = rfZ;
        if ( (v36 & 0x40) != 0 )
        {
          LODWORD(v39) = LODWORD(rfZ) ^ _xmm;
          LODWORD(rfZ) ^= _xmm;
        }
        if ( (v36 & 0x400) != 0 )
        {
          rfZ = 3.1415927 - v39;
          v39 = 3.1415927 - v39;
        }
        if ( (v36 & 0x4000) != 0 )
        {
          rfZ = -3.1415927 - v39;
          v39 = -3.1415927 - v39;
        }
        if ( (v36 & 0x8000) != 0 )
        {
          v38 = v38 + 3.1415927;
          LODWORD(v39) ^= _xmm;
          rfZ = v39;
          blendRate = v38;
        }
        OGLQuat::setRotateEuler(&q1_8, v37, v38, v39);
      }
      else
      {
        q1_8 = pPrev->m_vPrevRot;
      }
      if ( v22 == frame || maxd == 0.0 )
      {
        p_q = &m_pKeyRot[v21].q;
      }
      else
      {
        OGLQuat::slerp(&q2, &m_pKeyRot[v19].q, &m_pKeyRot[v21].q, v23, maxd);
        p_q = &q2;
      }
      OGLQuat::slerp(&q_8, &q1_8, p_q, 1.0 - v18, 1.0);
      pOutPrev->m_vPrevRot = q_8;
    }
    else if ( v22 == frame || maxd == 0.0 )
    {
      q_8 = m_pKeyRot[v13].q;
    }
    else
    {
      OGLQuat::slerp(&q_8, &m_pKeyRot[v17].q, &m_pKeyRot[v13].q, v23, v22 - v20);
    }
    v41 = iMirrorType;
    if ( iMirrorType )
    {
      OGLQuat::getRotateEulerFast(&q_8, &rfX, &blendRate, &rfZ);
      v42 = rfX;
      if ( (v41 & 0x10) != 0 )
        LODWORD(v42) = LODWORD(rfX) ^ _xmm;
      if ( (v41 & 0x100) != 0 )
        v42 = 3.1415927 - v42;
      if ( (v41 & 0x1000) != 0 )
        v42 = -3.1415927 - v42;
      v43 = blendRate;
      if ( (v41 & 0x20) != 0 )
        LODWORD(v43) = LODWORD(blendRate) ^ _xmm;
      if ( (v41 & 0x200) != 0 )
        v43 = 3.1415927 - v43;
      if ( (v41 & 0x2000) != 0 )
        v43 = -3.1415927 - v43;
      v44 = rfZ;
      if ( (v41 & 0x40) != 0 )
        LODWORD(v44) = LODWORD(rfZ) ^ _xmm;
      if ( (v41 & 0x400) != 0 )
        v44 = 3.1415927 - v44;
      if ( (v41 & 0x4000) != 0 )
        v44 = -3.1415927 - v44;
      OGLQuat::setRotateEuler(&q_8, v42, v43, v44);
    }
    goto LABEL_126;
  }
  if ( v22 == frame || maxd == 0.0 )
  {
    if ( pOutPrev )
    {
      pOutPrev->m_vPrevRot.x = m_pKeyRot[v13].q.x;
      pOutPrev->m_vPrevRot.y = m_pKeyRot[v13].q.y;
      pOutPrev->m_vPrevRot.z = m_pKeyRot[v13].q.z;
      pOutPrev->m_vPrevRot.w = m_pKeyRot[v13].q.w;
    }
    v25 = iMirrorType;
    if ( iMirrorType )
    {
      OGLQuat::getRotateEulerFast(&m_pKeyRot[v13].q, &rfX, &blendRate, &rfZ);
      v26 = rfX;
      if ( (v25 & 0x10) != 0 )
        LODWORD(v26) = LODWORD(rfX) ^ _xmm;
      if ( (v25 & 0x100) != 0 )
        v26 = 3.1415927 - v26;
      if ( (v25 & 0x1000) != 0 )
        v26 = -3.1415927 - v26;
      v27 = blendRate;
      if ( (v25 & 0x20) != 0 )
        LODWORD(v27) = LODWORD(blendRate) ^ _xmm;
      if ( (v25 & 0x200) != 0 )
        v27 = 3.1415927 - v27;
      if ( (v25 & 0x2000) != 0 )
        v27 = -3.1415927 - v27;
      v28 = rfZ;
      if ( (v25 & 0x40) != 0 )
        LODWORD(v28) = LODWORD(rfZ) ^ _xmm;
      if ( (v25 & 0x400) != 0 )
        v28 = 3.1415927 - v28;
      if ( (v25 & 0x4000) != 0 )
        v28 = -3.1415927 - v28;
      OGLQuat::setRotateEuler(&q_8, v26, v27, v28);
      OGLMatrix::rotationQuaternion(matRot, &q_8);
    }
    else
    {
      OGLMatrix::rotationQuaternion(matRot, &m_pKeyRot[v13].q);
    }
    return;
  }
  OGLQuat::slerp(&q_8, &m_pKeyRot[v17].q, &m_pKeyRot[v13].q, v23, v22 - v20);
  x = q_8.x;
  z = q_8.z;
  y = q_8.y;
  if ( q_8.x != 0.0 || q_8.y != 0.0 || q_8.z != 0.0 )
  {
    if ( pOutPrev )
    {
      pOutPrev->m_vPrevRot.z = q_8.z;
      pOutPrev->m_vPrevRot.w = q_8.w;
      pOutPrev->m_vPrevRot.x = x;
      pOutPrev->m_vPrevRot.y = y;
    }
    v32 = iMirrorType;
    if ( iMirrorType )
    {
      OGLQuat::getRotateEulerFast(&q_8, &rfX, &blendRate, &rfZ);
      v33 = rfX;
      if ( (v32 & 0x10) != 0 )
        LODWORD(v33) = LODWORD(rfX) ^ _xmm;
      if ( (v32 & 0x100) != 0 )
        v33 = 3.1415927 - v33;
      if ( (v32 & 0x1000) != 0 )
        v33 = -3.1415927 - v33;
      v34 = blendRate;
      if ( (v32 & 0x20) != 0 )
        LODWORD(v34) = LODWORD(blendRate) ^ _xmm;
      if ( (v32 & 0x200) != 0 )
        v34 = 3.1415927 - v34;
      if ( (v32 & 0x2000) != 0 )
        v34 = -3.1415927 - v34;
      v35 = rfZ;
      if ( (v32 & 0x40) != 0 )
        LODWORD(v35) = LODWORD(rfZ) ^ _xmm;
      if ( (v32 & 0x400) != 0 )
        v35 = 3.1415927 - v35;
      if ( (v32 & 0x4000) != 0 )
        v35 = -3.1415927 - v35;
      OGLQuat::setRotateEuler(&q_8, v33, v34, v35);
    }
LABEL_126:
    OGLMatrix::rotationQuaternion(matRot, &q_8);
    return;
  }
  *(_QWORD *)matRot->m = 1065353216i64;
  matRot->m[4] = 0.0;
  *(_QWORD *)&matRot->m[8] = 0i64;
  *(_QWORD *)&matRot->m[12] = 0i64;
  *(_QWORD *)&matRot->m[5] = 1065353216i64;
  *(_QWORD *)&matRot->m[2] = 0i64;
  *(_QWORD *)&matRot->m[10] = 1065353216i64;
  matRot->m[14] = 0.0;
  matRot->m[7] = 0.0;
  matRot->m[15] = 1.0;
  if ( pOutPrev )
  {
    pOutPrev->m_vPrevRot.z = z;
    pOutPrev->m_vPrevRot.w = q_8.w;
    pOutPrev->m_vPrevRot.x = x;
    pOutPrev->m_vPrevRot.y = y;
  }
}

void __fastcall OGLAnimationBone::getRotMatrixBindPose(
        OGLAnimationBone *this,
        OGLMatrix *matRot,
        OGLPrevAnimationBone *pBind,
        OGLPrevAnimationBone *pOutPrev,
        OGLPrevAnimationBone *pPrev,
        int iMirrorType,
        int iPrevMirrorType,
        float blendRate)
{
  float v9; // xmm9_4
  __int16 v12; // bx
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  __int16 v16; // bx
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm3_4
  __int16 v20; // bx
  float v21; // xmm1_4
  float v22; // xmm2_4
  float v23; // xmm3_4
  float rfX; // [rsp+38h] [rbp-49h] BYREF
  OGLQuat q; // [rsp+40h] [rbp-41h] BYREF
  OGLQuat q1; // [rsp+50h] [rbp-31h] BYREF
  OGLAnimationBone *rfZ; // [rsp+C8h] [rbp+47h] BYREF

  rfZ = this;
  v9 = blendRate;
  if ( blendRate == 0.0 )
  {
    if ( pOutPrev )
      pOutPrev->m_vPrevRot = pBind->m_vPrevRot;
    v12 = iMirrorType;
    if ( iMirrorType )
    {
      OGLQuat::getRotateEulerFast(&pBind->m_vPrevRot, &rfX, &blendRate, (float *)&rfZ);
      v13 = rfX;
      if ( (v12 & 0x10) != 0 )
        LODWORD(v13) = LODWORD(rfX) ^ _xmm;
      if ( (v12 & 0x100) != 0 )
        v13 = 3.1415927 - v13;
      if ( (v12 & 0x1000) != 0 )
        v13 = -3.1415927 - v13;
      v14 = blendRate;
      if ( (v12 & 0x20) != 0 )
        LODWORD(v14) = LODWORD(blendRate) ^ _xmm;
      if ( (v12 & 0x200) != 0 )
        v14 = 3.1415927 - v14;
      if ( (v12 & 0x2000) != 0 )
        v14 = -3.1415927 - v14;
      v15 = *(float *)&rfZ;
      if ( (v12 & 0x40) != 0 )
        LODWORD(v15) = (unsigned int)rfZ ^ _xmm;
      if ( (v12 & 0x400) != 0 )
        v15 = 3.1415927 - v15;
      if ( (v12 & 0x4000) != 0 )
        v15 = -3.1415927 - v15;
      OGLQuat::setRotateEuler(&q, v13, v14, v15);
      OGLMatrix::rotationQuaternion(matRot, &q);
    }
    else
    {
      OGLMatrix::rotationQuaternion(matRot, &pBind->m_vPrevRot);
    }
  }
  else
  {
    if ( pOutPrev )
    {
      v16 = iPrevMirrorType;
      if ( iPrevMirrorType )
      {
        OGLQuat::getRotateEuler(&pPrev->m_vPrevRot, &rfX, &blendRate, (float *)&rfZ);
        v17 = rfX;
        if ( (v16 & 0x10) != 0 )
        {
          LODWORD(v17) = LODWORD(rfX) ^ _xmm;
          LODWORD(rfX) ^= _xmm;
        }
        if ( (v16 & 0x100) != 0 )
        {
          rfX = 3.1415927 - v17;
          v17 = 3.1415927 - v17;
        }
        if ( (v16 & 0x1000) != 0 )
        {
          rfX = -3.1415927 - v17;
          v17 = -3.1415927 - v17;
        }
        v18 = blendRate;
        if ( (v16 & 0x20) != 0 )
        {
          LODWORD(v18) = LODWORD(blendRate) ^ _xmm;
          LODWORD(blendRate) ^= _xmm;
        }
        if ( (v16 & 0x200) != 0 )
        {
          blendRate = 3.1415927 - v18;
          v18 = 3.1415927 - v18;
        }
        if ( (v16 & 0x2000) != 0 )
        {
          blendRate = -3.1415927 - v18;
          v18 = -3.1415927 - v18;
        }
        v19 = *(float *)&rfZ;
        if ( (v16 & 0x40) != 0 )
        {
          LODWORD(v19) = (unsigned int)rfZ ^ _xmm;
          LODWORD(rfZ) = (unsigned int)rfZ ^ _xmm;
        }
        if ( (v16 & 0x400) != 0 )
        {
          *(float *)&rfZ = 3.1415927 - v19;
          v19 = 3.1415927 - v19;
        }
        if ( (v16 & 0x4000) != 0 )
        {
          *(float *)&rfZ = -3.1415927 - v19;
          v19 = -3.1415927 - v19;
        }
        if ( (v16 & 0x8000) != 0 )
        {
          v18 = v18 + 3.1415927;
          LODWORD(v19) ^= _xmm;
          *(float *)&rfZ = v19;
          blendRate = v18;
        }
        OGLQuat::setRotateEuler(&q1, v17, v18, v19);
      }
      else
      {
        q1 = pPrev->m_vPrevRot;
      }
      OGLQuat::slerp(&q, &q1, &pBind->m_vPrevRot, 1.0 - v9, 1.0);
      pOutPrev->m_vPrevRot = q;
    }
    else
    {
      q = pBind->m_vPrevRot;
    }
    v20 = iMirrorType;
    if ( iMirrorType )
    {
      OGLQuat::getRotateEulerFast(&q, &rfX, &blendRate, (float *)&rfZ);
      v21 = rfX;
      if ( (v20 & 0x10) != 0 )
        LODWORD(v21) = LODWORD(rfX) ^ _xmm;
      if ( (v20 & 0x100) != 0 )
        v21 = 3.1415927 - v21;
      if ( (v20 & 0x1000) != 0 )
        v21 = -3.1415927 - v21;
      v22 = blendRate;
      if ( (v20 & 0x20) != 0 )
        LODWORD(v22) = LODWORD(blendRate) ^ _xmm;
      if ( (v20 & 0x200) != 0 )
        v22 = 3.1415927 - v22;
      if ( (v20 & 0x2000) != 0 )
        v22 = -3.1415927 - v22;
      v23 = *(float *)&rfZ;
      if ( (v20 & 0x40) != 0 )
        LODWORD(v23) = (unsigned int)rfZ ^ _xmm;
      if ( (v20 & 0x400) != 0 )
        v23 = 3.1415927 - v23;
      if ( (v20 & 0x4000) != 0 )
        v23 = -3.1415927 - v23;
      OGLQuat::setRotateEuler(&q, v21, v22, v23);
    }
    OGLMatrix::rotationQuaternion(matRot, &q);
  }
}

void __fastcall OGLAnimationBone::getScalMatrix(
        OGLAnimationBone *this,
        OGLMatrix *matScal,
        float frame,
        OGLPrevAnimationBone *pOutPrev,
        OGLPrevAnimationBone *pPrev,
        int iMirrorType,
        int iPrevMirrorType,
        float blendRate)
{
  __int64 m_iKeyScaleCount; // rsi
  int v9; // edi
  OGLKeyScale *m_pKeyScale; // r11
  int v11; // ecx
  __int64 v12; // r8
  int *v13; // r10
  int *p_Frame; // rax
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm2_4
  float v19; // xmm2_4
  float v20; // xmm3_4
  float v21; // xmm4_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  float x; // xmm3_4
  float y; // xmm4_4
  float z; // xmm5_4
  float v27; // xmm2_4
  float v28; // xmm3_4
  float v29; // xmm4_4
  float v30; // xmm5_4

  m_iKeyScaleCount = this->m_iKeyScaleCount;
  v9 = 0;
  m_pKeyScale = this->m_pKeyScale;
  v11 = 0;
  v12 = 0i64;
  if ( m_iKeyScaleCount < 4 )
  {
LABEL_8:
    if ( v12 < m_iKeyScaleCount )
    {
      p_Frame = &m_pKeyScale[v12].Frame;
      do
      {
        if ( (float)*p_Frame >= frame )
          break;
        ++v11;
        ++v12;
        p_Frame += 4;
      }
      while ( v12 < m_iKeyScaleCount );
    }
  }
  else
  {
    v13 = &m_pKeyScale[2].Frame;
    while ( (float)*(v13 - 8) < frame )
    {
      if ( (float)*(v13 - 4) >= frame )
      {
        ++v11;
        break;
      }
      if ( (float)*v13 >= frame )
      {
        v11 += 2;
        break;
      }
      if ( (float)v13[4] >= frame )
      {
        v11 += 3;
        break;
      }
      v11 += 4;
      v12 += 4i64;
      v13 += 16;
      if ( v12 >= m_iKeyScaleCount - 3 )
        goto LABEL_8;
    }
  }
  if ( v11 )
    v9 = v11 - 1;
  if ( v11 == (_DWORD)m_iKeyScaleCount )
    v11 = m_iKeyScaleCount - 1;
  v15 = (float)m_pKeyScale[v9].Frame;
  v16 = (float)m_pKeyScale[v11].Frame;
  if ( blendRate == 0.0 )
  {
    if ( v16 == frame || (v17 = v16 - v15, v18 = frame - v15, v17 == 0.0) )
    {
      *(_QWORD *)matScal->m = 0i64;
      *(_QWORD *)&matScal->m[2] = 0i64;
      *(_QWORD *)&matScal->m[4] = 0i64;
      *(_QWORD *)&matScal->m[6] = 0i64;
      *(_QWORD *)&matScal->m[8] = 0i64;
      *(_QWORD *)&matScal->m[10] = 0i64;
      *(_QWORD *)&matScal->m[12] = 0i64;
      *(_QWORD *)&matScal->m[14] = 0i64;
      matScal->m[0] = m_pKeyScale[v11].s.x;
      matScal->m[5] = m_pKeyScale[v11].s.y;
      matScal->m[10] = m_pKeyScale[v11].s.z;
      matScal->m[15] = 1.0;
      if ( pOutPrev )
        pOutPrev->m_vPrevScale = m_pKeyScale[v11].s;
    }
    else
    {
      v19 = v18 / v17;
      v20 = (float)((float)(m_pKeyScale[v11].s.x - m_pKeyScale[v9].s.x) * v19) + m_pKeyScale[v9].s.x;
      v21 = (float)((float)(m_pKeyScale[v11].s.y - m_pKeyScale[v9].s.y) * v19) + m_pKeyScale[v9].s.y;
      v22 = (float)((float)(m_pKeyScale[v11].s.z - m_pKeyScale[v9].s.z) * v19) + m_pKeyScale[v9].s.z;
      *(_QWORD *)matScal->m = 0i64;
      *(_QWORD *)&matScal->m[2] = 0i64;
      *(_QWORD *)&matScal->m[4] = 0i64;
      *(_QWORD *)&matScal->m[6] = 0i64;
      *(_QWORD *)&matScal->m[8] = 0i64;
      *(_QWORD *)&matScal->m[10] = 0i64;
      *(_QWORD *)&matScal->m[12] = 0i64;
      *(_QWORD *)&matScal->m[14] = 0i64;
      matScal->m[0] = v20;
      matScal->m[5] = v21;
      matScal->m[10] = v22;
      matScal->m[15] = 1.0;
      if ( pOutPrev )
      {
        pOutPrev->m_vPrevScale.x = v20;
        pOutPrev->m_vPrevScale.y = v21;
        pOutPrev->m_vPrevScale.z = v22;
      }
    }
  }
  else
  {
    if ( v16 == frame || (v23 = v16 - v15, v23 == 0.0) )
    {
      x = m_pKeyScale[v11].s.x;
      y = m_pKeyScale[v11].s.y;
      z = m_pKeyScale[v11].s.z;
    }
    else
    {
      v27 = (float)(frame - v15) / v23;
      x = (float)((float)(m_pKeyScale[v11].s.x - m_pKeyScale[v9].s.x) * v27) + m_pKeyScale[v9].s.x;
      y = (float)((float)(m_pKeyScale[v11].s.y - m_pKeyScale[v9].s.y) * v27) + m_pKeyScale[v9].s.y;
      z = (float)((float)(m_pKeyScale[v11].s.z - m_pKeyScale[v9].s.z) * v27) + m_pKeyScale[v9].s.z;
    }
    if ( pOutPrev )
    {
      v28 = (float)((float)(x - pPrev->m_vPrevScale.x) * (float)(1.0 - blendRate)) + pPrev->m_vPrevScale.x;
      v29 = (float)((float)(y - pPrev->m_vPrevScale.y) * (float)(1.0 - blendRate)) + pPrev->m_vPrevScale.y;
      v30 = (float)((float)(z - pPrev->m_vPrevScale.z) * (float)(1.0 - blendRate)) + pPrev->m_vPrevScale.z;
      *(_QWORD *)matScal->m = 0i64;
      *(_QWORD *)&matScal->m[2] = 0i64;
      *(_QWORD *)&matScal->m[4] = 0i64;
      *(_QWORD *)&matScal->m[6] = 0i64;
      *(_QWORD *)&matScal->m[8] = 0i64;
      *(_QWORD *)&matScal->m[10] = 0i64;
      *(_QWORD *)&matScal->m[12] = 0i64;
      *(_QWORD *)&matScal->m[14] = 0i64;
      matScal->m[0] = v28;
      matScal->m[5] = v29;
      matScal->m[10] = v30;
      matScal->m[15] = 1.0;
      pOutPrev->m_vPrevScale.x = v28;
      pOutPrev->m_vPrevScale.y = v29;
      pOutPrev->m_vPrevScale.z = v30;
    }
    else
    {
      *(_QWORD *)matScal->m = 0i64;
      *(_QWORD *)&matScal->m[2] = 0i64;
      *(_QWORD *)&matScal->m[4] = 0i64;
      *(_QWORD *)&matScal->m[6] = 0i64;
      *(_QWORD *)&matScal->m[8] = 0i64;
      *(_QWORD *)&matScal->m[10] = 0i64;
      *(_QWORD *)&matScal->m[12] = 0i64;
      *(_QWORD *)&matScal->m[14] = 0i64;
      matScal->m[0] = x;
      matScal->m[5] = y;
      matScal->m[10] = z;
      matScal->m[15] = 1.0;
    }
  }
}

void __fastcall OGLAnimationBone::getScalMatrixBindPose(
        OGLAnimationBone *this,
        OGLMatrix *matScal,
        OGLPrevAnimationBone *pBind,
        OGLPrevAnimationBone *pOutPrev,
        OGLPrevAnimationBone *pPrev,
        int iMirrorType,
        int iPrevMirrorType,
        float blendRate)
{
  float v8; // xmm4_4
  float v9; // xmm3_4
  float v10; // xmm1_4

  if ( blendRate == 0.0 )
  {
    *(_QWORD *)matScal->m = 0i64;
    *(_QWORD *)&matScal->m[2] = 0i64;
    *(_QWORD *)&matScal->m[4] = 0i64;
    *(_QWORD *)&matScal->m[6] = 0i64;
    *(_QWORD *)&matScal->m[8] = 0i64;
    *(_QWORD *)&matScal->m[10] = 0i64;
    *(_QWORD *)&matScal->m[12] = 0i64;
    *(_QWORD *)&matScal->m[14] = 0i64;
    matScal->m[0] = pBind->m_vPrevScale.x;
    matScal->m[5] = pBind->m_vPrevScale.y;
    matScal->m[10] = pBind->m_vPrevScale.z;
    matScal->m[15] = 1.0;
    if ( pOutPrev )
      pOutPrev->m_vPrevScale = pBind->m_vPrevScale;
  }
  else if ( pOutPrev )
  {
    v8 = (float)((float)(pBind->m_vPrevScale.x - pPrev->m_vPrevScale.x) * (float)(1.0 - blendRate))
       + pPrev->m_vPrevScale.x;
    v9 = (float)((float)(pBind->m_vPrevScale.y - pPrev->m_vPrevScale.y) * (float)(1.0 - blendRate))
       + pPrev->m_vPrevScale.y;
    v10 = (float)((float)(pBind->m_vPrevScale.z - pPrev->m_vPrevScale.z) * (float)(1.0 - blendRate))
        + pPrev->m_vPrevScale.z;
    *(_QWORD *)matScal->m = 0i64;
    *(_QWORD *)&matScal->m[2] = 0i64;
    *(_QWORD *)&matScal->m[4] = 0i64;
    *(_QWORD *)&matScal->m[6] = 0i64;
    *(_QWORD *)&matScal->m[8] = 0i64;
    *(_QWORD *)&matScal->m[10] = 0i64;
    *(_QWORD *)&matScal->m[12] = 0i64;
    *(_QWORD *)&matScal->m[14] = 0i64;
    matScal->m[0] = v8;
    matScal->m[5] = v9;
    matScal->m[10] = v10;
    matScal->m[15] = 1.0;
    pOutPrev->m_vPrevScale.x = v8;
    pOutPrev->m_vPrevScale.y = v9;
    pOutPrev->m_vPrevScale.z = v10;
  }
  else
  {
    *(_QWORD *)matScal->m = 0i64;
    *(_QWORD *)&matScal->m[2] = 0i64;
    *(_QWORD *)&matScal->m[4] = 0i64;
    *(_QWORD *)&matScal->m[6] = 0i64;
    *(_QWORD *)&matScal->m[8] = 0i64;
    *(_QWORD *)&matScal->m[10] = 0i64;
    *(_QWORD *)&matScal->m[12] = 0i64;
    *(_QWORD *)&matScal->m[14] = 0i64;
    matScal->m[0] = pBind->m_vPrevScale.x;
    matScal->m[5] = pBind->m_vPrevScale.y;
    matScal->m[10] = pBind->m_vPrevScale.z;
    matScal->m[15] = 1.0;
  }
}

void __fastcall OGLAnimationBone::getTransPos(
        OGLAnimationBone *this,
        OGLVec3 *vPos,
        float frame,
        OGLPrevAnimationBone *pOutPrev,
        OGLPrevAnimationBone *pPrev,
        int iMirrorType,
        int iPrevMirrorType,
        float blendRate,
        float fBoneScale,
        OGLMatrix *pOffsetMat)
{
  OGLKeyTrans *m_pKeyTrans; // r11
  __int64 m_iKeyTransCount; // rsi
  int v12; // edi
  int v13; // ecx
  __int64 v14; // r8
  int *v15; // r10
  int *p_Frame; // rax
  float v17; // xmm0_4
  float v18; // xmm4_4
  float v19; // xmm3_4
  float v20; // xmm1_4
  float v21; // xmm6_4
  float v22; // xmm4_4
  float v23; // xmm1_4
  float v24; // xmm5_4
  float v25; // xmm6_4
  float v26; // xmm2_4
  float v27; // xmm2_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm0_4
  float v32; // xmm0_4
  float v33; // xmm3_4
  float v34; // xmm5_4
  float v35; // xmm4_4
  float v36; // xmm6_4
  float v37; // xmm2_4
  float v38; // xmm0_4
  float v39; // xmm3_4
  float v40; // xmm1_4
  float v41; // xmm4_4
  float v42; // xmm6_4
  float v43; // xmm1_4
  float v44; // xmm2_4
  float x; // xmm4_4
  float y; // xmm5_4
  float z; // xmm6_4
  float v48; // xmm3_4
  float v49; // xmm3_4
  float v50; // xmm2_4
  float v51; // xmm0_4
  float v52; // xmm4_4
  float v53; // xmm4_4
  float v54; // xmm5_4
  float v55; // xmm6_4
  float v56; // xmm3_4
  float v57; // xmm2_4
  float v58; // xmm1_4
  float v59; // xmm0_4
  float v60; // xmm0_4

  m_pKeyTrans = this->m_pKeyTrans;
  m_iKeyTransCount = this->m_iKeyTransCount;
  v12 = 0;
  v13 = 0;
  v14 = 0i64;
  if ( m_iKeyTransCount < 4 )
  {
LABEL_8:
    if ( v14 < m_iKeyTransCount )
    {
      p_Frame = &m_pKeyTrans[v14].Frame;
      do
      {
        if ( (float)*p_Frame >= frame )
          break;
        ++v13;
        ++v14;
        p_Frame += 4;
      }
      while ( v14 < m_iKeyTransCount );
    }
  }
  else
  {
    v15 = &m_pKeyTrans[2].Frame;
    while ( (float)*(v15 - 8) < frame )
    {
      if ( (float)*(v15 - 4) >= frame )
      {
        ++v13;
        break;
      }
      if ( (float)*v15 >= frame )
      {
        v13 += 2;
        break;
      }
      if ( (float)v15[4] >= frame )
      {
        v13 += 3;
        break;
      }
      v13 += 4;
      v14 += 4i64;
      v15 += 16;
      if ( v14 >= m_iKeyTransCount - 3 )
        goto LABEL_8;
    }
  }
  if ( v13 )
    v12 = v13 - 1;
  if ( v13 == (_DWORD)m_iKeyTransCount )
    v13 = m_iKeyTransCount - 1;
  v17 = (float)m_pKeyTrans[v12].Frame;
  v18 = (float)m_pKeyTrans[v13].Frame;
  v19 = frame - v17;
  v20 = v18 - v17;
  if ( blendRate != 0.0 )
  {
    if ( v18 == frame || v20 == 0.0 )
    {
      x = m_pKeyTrans[v13].t.x;
      y = m_pKeyTrans[v13].t.y;
      z = m_pKeyTrans[v13].t.z;
    }
    else
    {
      v48 = v19 / v20;
      x = (float)((float)(m_pKeyTrans[v13].t.x - m_pKeyTrans[v12].t.x) * v48) + m_pKeyTrans[v12].t.x;
      y = (float)((float)(m_pKeyTrans[v13].t.y - m_pKeyTrans[v12].t.y) * v48) + m_pKeyTrans[v12].t.y;
      z = (float)((float)(m_pKeyTrans[v13].t.z - m_pKeyTrans[v12].t.z) * v48) + m_pKeyTrans[v12].t.z;
    }
    if ( pOffsetMat )
    {
      v49 = (float)((float)(y * pOffsetMat->m[5]) + (float)(x * pOffsetMat->m[1])) + (float)(z * pOffsetMat->m[9]);
      v50 = (float)(y * pOffsetMat->m[6]) + (float)(x * pOffsetMat->m[2]);
      v51 = x;
      v52 = y * pOffsetMat->m[4];
      y = v49;
      x = (float)(v52 + (float)(v51 * pOffsetMat->m[0])) + (float)(z * pOffsetMat->m[8]);
      z = v50 + (float)(z * pOffsetMat->m[10]);
    }
    v53 = x * fBoneScale;
    v54 = y * fBoneScale;
    v55 = z * fBoneScale;
    if ( !pOutPrev )
    {
      vPos->x = v53;
      vPos->y = v54;
      vPos->z = v55;
      goto LABEL_54;
    }
    if ( iPrevMirrorType )
    {
      v56 = pPrev->m_vPrevTrans.x;
      if ( (iPrevMirrorType & 1) != 0 )
        LODWORD(v56) ^= _xmm;
      v57 = pPrev->m_vPrevTrans.y;
      if ( (iPrevMirrorType & 2) != 0 )
        LODWORD(v57) ^= _xmm;
      v58 = pPrev->m_vPrevTrans.z;
      if ( (iPrevMirrorType & 4) != 0 )
        LODWORD(v58) ^= _xmm;
    }
    else
    {
      v56 = pPrev->m_vPrevTrans.x;
      v57 = pPrev->m_vPrevTrans.y;
      v58 = pPrev->m_vPrevTrans.z;
    }
    vPos->x = (float)((float)(v53 - v56) * (float)(1.0 - blendRate)) + v56;
    vPos->y = (float)((float)(v54 - v57) * (float)(1.0 - blendRate)) + v57;
    vPos->z = (float)((float)(v55 - v58) * (float)(1.0 - blendRate)) + v58;
LABEL_51:
    if ( pOutPrev )
      pOutPrev->m_vPrevTrans = *vPos;
LABEL_54:
    v59 = vPos->x;
    if ( (iMirrorType & 1) != 0 )
      LODWORD(v59) ^= _xmm;
    vPos->x = v59;
    v60 = vPos->y;
    if ( (iMirrorType & 2) != 0 )
      LODWORD(v60) ^= _xmm;
    vPos->y = v60;
    v32 = vPos->z;
    if ( (iMirrorType & 4) != 0 )
      goto LABEL_59;
    goto LABEL_60;
  }
  if ( v18 != frame && v20 != 0.0 )
  {
    v33 = v19 / v20;
    v34 = (float)((float)(m_pKeyTrans[v13].t.x - m_pKeyTrans[v12].t.x) * v33) + m_pKeyTrans[v12].t.x;
    vPos->x = v34;
    v35 = (float)((float)(m_pKeyTrans[v13].t.y - m_pKeyTrans[v12].t.y) * v33) + m_pKeyTrans[v12].t.y;
    vPos->y = v35;
    v36 = (float)((float)(m_pKeyTrans[v13].t.z - m_pKeyTrans[v12].t.z) * v33) + m_pKeyTrans[v12].t.z;
    vPos->z = v36;
    if ( pOffsetMat )
    {
      v37 = v34 * pOffsetMat->m[2];
      v38 = v35 * pOffsetMat->m[6];
      v39 = (float)((float)(v34 * pOffsetMat->m[1]) + (float)(v35 * pOffsetMat->m[5])) + (float)(v36 * pOffsetMat->m[9]);
      v40 = v36 * pOffsetMat->m[10];
      v41 = (float)(v35 * pOffsetMat->m[4]) + (float)(v34 * pOffsetMat->m[0]);
      v42 = v36 * pOffsetMat->m[8];
      vPos->y = v39;
      vPos->x = v41 + v42;
      vPos->z = (float)(v37 + v38) + v40;
    }
    v43 = fBoneScale * vPos->y;
    v44 = fBoneScale * vPos->z;
    vPos->x = fBoneScale * vPos->x;
    vPos->y = v43;
    vPos->z = v44;
    goto LABEL_51;
  }
  vPos->x = m_pKeyTrans[v13].t.x;
  vPos->y = m_pKeyTrans[v13].t.y;
  v21 = m_pKeyTrans[v13].t.z;
  vPos->z = v21;
  if ( pOffsetMat )
  {
    v22 = (float)((float)(vPos->x * pOffsetMat->m[1]) + (float)(vPos->y * pOffsetMat->m[5]))
        + (float)(v21 * pOffsetMat->m[9]);
    v23 = v21 * pOffsetMat->m[10];
    v24 = (float)(vPos->y * pOffsetMat->m[4]) + (float)(vPos->x * pOffsetMat->m[0]);
    v25 = v21 * pOffsetMat->m[8];
    v26 = (float)(vPos->x * pOffsetMat->m[2]) + (float)(vPos->y * pOffsetMat->m[6]);
    vPos->y = v22;
    vPos->x = v24 + v25;
    vPos->z = v26 + v23;
  }
  v27 = fBoneScale * vPos->x;
  v28 = fBoneScale * vPos->y;
  v29 = fBoneScale * vPos->z;
  vPos->x = v27;
  vPos->y = v28;
  vPos->z = v29;
  if ( pOutPrev )
  {
    pOutPrev->m_vPrevTrans.x = v27;
    pOutPrev->m_vPrevTrans.y = vPos->y;
    pOutPrev->m_vPrevTrans.z = vPos->z;
  }
  v30 = vPos->x;
  if ( (iMirrorType & 1) != 0 )
    LODWORD(v30) ^= _xmm;
  vPos->x = v30;
  v31 = vPos->y;
  if ( (iMirrorType & 2) != 0 )
    LODWORD(v31) ^= _xmm;
  vPos->y = v31;
  v32 = vPos->z;
  if ( (iMirrorType & 4) != 0 )
LABEL_59:
    LODWORD(v32) ^= _xmm;
LABEL_60:
  vPos->z = v32;
}

void __fastcall OGLAnimationBone::getTransPosBindPose(
        OGLAnimationBone *this,
        OGLVec3 *vPos,
        OGLPrevAnimationBone *pBind,
        OGLPrevAnimationBone *pOutPrev,
        OGLPrevAnimationBone *pPrev,
        int iMirrorType,
        int iPrevMirrorType,
        float blendRate)
{
  float x; // xmm0_4
  float y; // xmm0_4
  float z; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm5_4
  float v13; // xmm4_4
  float v14; // eax
  float v15; // xmm0_4
  float v16; // xmm0_4

  if ( blendRate == 0.0 )
  {
    if ( pOutPrev )
    {
      pOutPrev->m_vPrevTrans.x = pBind->m_vPrevTrans.x;
      pOutPrev->m_vPrevTrans.y = pBind->m_vPrevTrans.y;
      pOutPrev->m_vPrevTrans.z = pBind->m_vPrevTrans.z;
    }
    x = pBind->m_vPrevTrans.x;
    if ( (iMirrorType & 1) != 0 )
      LODWORD(x) ^= _xmm;
    vPos->x = x;
    y = pBind->m_vPrevTrans.y;
    if ( (iMirrorType & 2) != 0 )
      LODWORD(y) ^= _xmm;
    vPos->y = y;
    z = pBind->m_vPrevTrans.z;
    if ( (iMirrorType & 4) != 0 )
    {
      LODWORD(vPos->z) = LODWORD(z) ^ _xmm;
      return;
    }
  }
  else
  {
    if ( pOutPrev )
    {
      if ( iPrevMirrorType )
      {
        v11 = pPrev->m_vPrevTrans.x;
        if ( (iPrevMirrorType & 1) != 0 )
          LODWORD(v11) ^= _xmm;
        v12 = pPrev->m_vPrevTrans.y;
        if ( (iPrevMirrorType & 2) != 0 )
          LODWORD(v12) ^= _xmm;
        v13 = pPrev->m_vPrevTrans.z;
        if ( (iPrevMirrorType & 4) != 0 )
          LODWORD(v13) ^= _xmm;
      }
      else
      {
        v11 = pPrev->m_vPrevTrans.x;
        v12 = pPrev->m_vPrevTrans.y;
        v13 = pPrev->m_vPrevTrans.z;
      }
      vPos->x = (float)((float)(pBind->m_vPrevTrans.x - v11) * (float)(1.0 - blendRate)) + v11;
      v14 = vPos->x;
      vPos->y = (float)((float)(pBind->m_vPrevTrans.y - v12) * (float)(1.0 - blendRate)) + v12;
      vPos->z = (float)((float)(pBind->m_vPrevTrans.z - v13) * (float)(1.0 - blendRate)) + v13;
      pOutPrev->m_vPrevTrans.x = v14;
      pOutPrev->m_vPrevTrans.y = vPos->y;
      pOutPrev->m_vPrevTrans.z = vPos->z;
    }
    else
    {
      *vPos = pBind->m_vPrevTrans;
    }
    v15 = vPos->x;
    if ( (iMirrorType & 1) != 0 )
      LODWORD(v15) ^= _xmm;
    vPos->x = v15;
    v16 = vPos->y;
    if ( (iMirrorType & 2) != 0 )
      LODWORD(v16) ^= _xmm;
    vPos->y = v16;
    z = vPos->z;
    if ( (iMirrorType & 4) != 0 )
      LODWORD(z) ^= _xmm;
  }
  vPos->z = z;
}

