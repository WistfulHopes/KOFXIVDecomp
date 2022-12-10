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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcamera.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec2.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglquat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglinputstream.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14088952A
OGLCamera::OGLCamera(); // 0x140053980
void OGLCamera::finalize(); // 0x140053A80
long OGLCamera::loadOcamData(unsigned char * buf, long size); // 0x140053BF0
void OGLCamera::getCameraMatrix(OGLMatrix * pViewMat, OGLMatrix * pProjMat, OGLMatrix * pBillMat, OGLVec3 * pPosVec, long iMotNo, float frame, float fNear, float fFar, OGLVec3 * pOffset, float fDegreeY, unsigned char bMirror, float blendRate, float scale); // 0x1400543A0
OGLAnimationCamera::OGLAnimationCamera(); // 0x140054BD0
OGLAnimationCamera::~OGLAnimationCamera(); // 0x140054C00
void OGLAnimationCamera::finalize(); // 0x140054C10
void OGLAnimationCamera::getScalMatrix(OGLMatrix * matScal, float frame, float blendRate); // 0x140054CA0
void OGLAnimationCamera::getRotMatrix(OGLMatrix * matRot, float frame, float blendRate); // 0x140055010
void OGLAnimationCamera::getTransPos(OGLVec3 * vPos, float frame, float blendRate); // 0x1400555E0
void OGLAnimationCamera::getCameraMatrix(OGLMatrix * matBone, float frame, OGLVec3 * vTransform, OGLPrevAnimationCamera * pPrev, float blendRate); // 0x140055980//decompilation failure at 14088952A!
void __fastcall OGLAnimationCamera::OGLAnimationCamera(OGLAnimationCamera *this)
{
  this->m_pKeyTrans = 0i64;
  this->m_iKeyTransCount = 0;
  this->m_pKeyScale = 0i64;
  this->m_iKeyScaleCount = 0;
  this->m_pKeyRot = 0i64;
  *(_QWORD *)&this->m_iKeyRotCount = 0i64;
  this->m_pKeyParse = 0i64;
  this->m_iKeyParseCount = 0;
  this->m_pPrev = 0i64;
  this->m_cMotionName = 0i64;
}

void __fastcall OGLCamera::OGLCamera(OGLCamera *this)
{
  *(_QWORD *)&this->up.x = 0i64;
  *(_QWORD *)&this->up.z = 0i64;
  *(_QWORD *)&this->matrix.m[4] = 0i64;
  *(_QWORD *)&this->matrix.m[6] = 0i64;
  *(_QWORD *)&this->matrix.m[14] = 0i64;
  *(_QWORD *)&this->m_pPrev.m_vPrevTrans.x = 0i64;
  *(_QWORD *)&this->m_pPrev.m_vPrevTrans.z = 0i64;
  *(_QWORD *)&this->m_pPrev.m_vPrevScale.y = 0i64;
  *(_QWORD *)&this->m_pPrev.m_MirrorType = 0i64;
  *(_QWORD *)&this->m_pPrev.m_vPrevTrans.y = 0i64;
  this->m_pPrev.m_vPrevScale.x = 1.0;
  this->m_pPrev.m_vPrevScale.y = 1.0;
  *(_QWORD *)&this->m_pPrev.m_vPrevScale.z = 1065353216i64;
  *(_QWORD *)&this->m_pPrev.m_vPrevRot.y = 0i64;
  this->m_pPrev.m_vPrevRot.w = 1.0;
  *(_QWORD *)&this->defaultPos.x = 0i64;
  this->defaultPos.z = 0.0;
  *(_QWORD *)&this->defaultScale.x = 0i64;
  this->defaultScale.z = 0.0;
  this->targetObj = 0i64;
  *(_QWORD *)&this->position.x = 0i64;
  *(_QWORD *)&this->position.z = 1065353216i64;
  *(_QWORD *)&this->center.y = 0i64;
  this->up.x = 0.0;
  *(_QWORD *)&this->up.y = 1065353216i64;
  this->walkModeUp.x = 0.0;
  *(_QWORD *)&this->walkModeUp.y = 1065353216i64;
  this->cameraMode = 0;
  *(_QWORD *)this->matrix.m = 1065353216i64;
  this->matrix.m[4] = 0.0;
  *(_QWORD *)&this->matrix.m[8] = 0i64;
  *(_QWORD *)&this->matrix.m[12] = 0i64;
  *(_QWORD *)&this->matrix.m[5] = 1065353216i64;
  *(_QWORD *)&this->matrix.m[2] = 0i64;
  *(_QWORD *)&this->matrix.m[10] = 1065353216i64;
  this->matrix.m[14] = 0.0;
  this->matrix.m[7] = 0.0;
  this->matrix.m[15] = 1.0;
  this->m_pCameraData = 0i64;
  this->m_usCameraCount = 0;
}

// attributes: thunk
void __fastcall OGLAnimationCamera::~OGLAnimationCamera(OGLAnimationCamera *this)
{
  OGLAnimationCamera::finalize(this);
}

void __fastcall OGLAnimationCamera::finalize(OGLAnimationCamera *this, unsigned __int64 a2)
{
  OGLKeyRot *m_pKeyRot; // rcx
  OGLKeyScale *m_pKeyScale; // rcx
  OGLKeyTrans *m_pKeyTrans; // rcx
  _OGLKeyParse *m_pKeyParse; // rcx
  unsigned __int8 *m_cMotionName; // rcx

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
  m_pKeyParse = this->m_pKeyParse;
  this->m_iKeyTransCount = 0;
  if ( m_pKeyParse )
  {
    operator delete(m_pKeyParse, a2);
    this->m_pKeyParse = 0i64;
  }
  m_cMotionName = this->m_cMotionName;
  this->m_iKeyParseCount = 0;
  if ( m_cMotionName )
  {
    operator delete(m_cMotionName, a2);
    this->m_cMotionName = 0i64;
  }
  this->m_pPrev = 0i64;
  this->m_MirrorType = 0;
}

void __fastcall OGLCamera::finalize(OGLCamera *this, unsigned __int64 a2)
{
  signed int i; // ebx
  OGLAnimationCamera *m_pCameraData; // rcx
  _QWORD *p_m_pPrev; // rbx

  this->targetObj = 0i64;
  *(_QWORD *)&this->position.x = 0i64;
  *(_QWORD *)&this->position.z = 1065353216i64;
  *(_QWORD *)&this->center.y = 0i64;
  this->up.x = 0.0;
  *(_QWORD *)&this->up.y = 1065353216i64;
  this->walkModeUp.x = 0.0;
  *(_QWORD *)&this->walkModeUp.y = 1065353216i64;
  this->cameraMode = 0;
  *(_QWORD *)this->matrix.m = 1065353216i64;
  this->matrix.m[4] = 0.0;
  *(_QWORD *)&this->matrix.m[8] = 0i64;
  *(_QWORD *)&this->matrix.m[12] = 0i64;
  *(_QWORD *)&this->matrix.m[5] = 1065353216i64;
  *(_QWORD *)&this->matrix.m[2] = 0i64;
  *(_QWORD *)&this->matrix.m[10] = 1065353216i64;
  this->matrix.m[14] = 0.0;
  this->matrix.m[7] = 0.0;
  this->matrix.m[15] = 1.0;
  if ( this->m_pCameraData )
  {
    for ( i = 0; i < (signed int)this->m_usCameraCount; ++i )
      OGLAnimationCamera::finalize(&this->m_pCameraData[i], a2);
  }
  m_pCameraData = this->m_pCameraData;
  if ( m_pCameraData )
  {
    p_m_pPrev = &m_pCameraData[-1].m_pPrev;
    `eh vector destructor iterator'(
      m_pCameraData,
      0x70ui64,
      (unsigned __int64)m_pCameraData[-1].m_pPrev,
      (void (__fastcall *)(void *))OGLAnimationCamera::~OGLAnimationCamera);
    operator delete[](p_m_pPrev, 112i64 * *p_m_pPrev + 8);
    this->m_pCameraData = 0i64;
  }
  this->m_usCameraCount = 0;
}

void __fastcall OGLAnimationCamera::getCameraMatrix(
        OGLAnimationCamera *this,
        OGLMatrix *matBone,
        float frame,
        OGLVec3 *vTransform,
        OGLPrevAnimationCamera *pPrev,
        float blendRate)
{
  bool v6; // cc
  float v10; // xmm13_4
  float v11; // xmm4_4
  float v12; // xmm9_4
  float v13; // xmm10_4
  float v14; // xmm11_4
  float v15; // xmm5_4
  float v16; // xmm12_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm3_4
  float v20; // xmm2_4
  OGLPrevAnimationCamera *m_pPrev; // rax
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  OGLPrevAnimationCamera *v25; // rax
  OGLVec3 vPos; // [rsp+28h] [rbp-79h] BYREF
  OGLMatrix matRot; // [rsp+38h] [rbp-69h] BYREF

  v6 = this->m_iKeyScaleCount <= 0;
  this->m_pPrev = pPrev;
  if ( v6 )
  {
    pPrev->m_vPrevScale.x = 1.0;
    pPrev->m_vPrevScale.y = 1.0;
    pPrev->m_vPrevScale.z = 1.0;
  }
  else
  {
    OGLAnimationCamera::getScalMatrix(this, matBone, frame, blendRate);
  }
  if ( this->m_iKeyRotCount <= 0 )
  {
    m_pPrev = this->m_pPrev;
    *(_QWORD *)&m_pPrev->m_vPrevRot.x = 0i64;
    m_pPrev->m_vPrevRot.z = 0.0;
    m_pPrev->m_vPrevRot.w = 1.0;
  }
  else
  {
    memset(&matRot, 0, 48);
    OGLAnimationCamera::getRotMatrix(this, &matRot, frame, blendRate);
    v10 = matRot.m[0];
    v11 = matRot.m[10];
    v12 = matRot.m[9];
    v13 = matRot.m[8];
    v14 = matRot.m[6];
    v15 = matRot.m[5];
    v16 = matRot.m[4];
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
      v17 = matBone->m[0];
      v18 = matBone->m[0] * matRot.m[1];
      v19 = matBone->m[5];
      matBone->m[2] = matBone->m[0] * matRot.m[2];
      matBone->m[1] = v18;
      matBone->m[0] = v17 * v10;
      v20 = matBone->m[10];
      matBone->m[6] = v19 * v14;
      matBone->m[4] = v19 * v16;
      matBone->m[9] = v20 * v12;
      matBone->m[5] = v19 * v15;
      matBone->m[8] = v20 * v13;
      matBone->m[10] = v20 * v11;
    }
  }
  if ( this->m_iKeyTransCount <= 0 )
  {
    v25 = this->m_pPrev;
    *(_QWORD *)&v25->m_vPrevTrans.x = 0i64;
    v25->m_vPrevTrans.z = 0.0;
  }
  else
  {
    *(_QWORD *)&vPos.x = 0i64;
    vPos.z = 0.0;
    OGLAnimationCamera::getTransPos(this, &vPos, frame, blendRate);
    if ( vPos.x != 0.0 || vPos.y != 0.0 || vPos.z != 0.0 )
    {
      v22 = vPos.x + matBone->m[12];
      v23 = vPos.y + matBone->m[13];
      v24 = vPos.z + matBone->m[14];
      matBone->m[15] = 1.0;
      matBone->m[12] = v22;
      matBone->m[13] = v23;
      matBone->m[14] = v24;
    }
  }
}

void __fastcall OGLCamera::getCameraMatrix(
        OGLCamera *this,
        OGLMatrix *pViewMat,
        OGLMatrix *pProjMat,
        OGLMatrix *pBillMat,
        OGLVec3 *pPosVec,
        int iMotNo,
        float frame,
        float fNear,
        float fFar,
        OGLVec3 *pOffset,
        float fDegreeY,
        unsigned __int8 bMirror,
        float blendRate,
        float scale)
{
  OGLAnimationCamera *m_pCameraData; // rdx
  float v18; // xmm10_4
  OGLAnimationCamera *v19; // rdi
  float v20; // xmm7_4
  float v21; // xmm11_4
  float v22; // xmm6_4
  float v23; // xmm12_4
  float v24; // xmm6_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm15_4
  float v28; // xmm2_4
  float v29; // xmm5_4
  float v30; // xmm0_4
  float v31; // xmm1_4
  float v32; // xmm3_4
  float v33; // xmm4_4
  float v34; // xmm5_4
  float v35; // xmm5_4
  float v36; // xmm7_4
  float v37; // xmm0_4
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  float m_iKeyParseCount; // xmm1_4
  int v42; // er8
  float m_fFovyDegree; // xmm8_4
  float v44; // xmm0_4
  float m_fNear; // xmm3_4
  float z; // [rsp+38h] [rbp-D0h]
  float y; // [rsp+3Ch] [rbp-CCh]
  float x; // [rsp+40h] [rbp-C8h]
  OGLMatrix v49; // [rsp+48h] [rbp-C0h] BYREF
  OGLMatrix matBone; // [rsp+88h] [rbp-80h] BYREF
  float v51; // [rsp+C8h] [rbp-40h]
  float v52; // [rsp+CCh] [rbp-3Ch]
  OGLMatrix v53; // [rsp+D8h] [rbp-30h] BYREF
  OGLMatrix In2; // [rsp+118h] [rbp+10h] BYREF
  OGLMatrix In1; // [rsp+158h] [rbp+50h] BYREF
  float v56; // [rsp+258h] [rbp+150h]

  m_pCameraData = this->m_pCameraData;
  memset(&matBone, 0, sizeof(matBone));
  memset(&In2, 0, sizeof(In2));
  memset(&v49, 0, sizeof(v49));
  if ( m_pCameraData )
  {
    v18 = frame;
    v53.m[10] = FLOAT_N1_0;
    v19 = &m_pCameraData[iMotNo];
    *(_QWORD *)v53.m = 1065353216i64;
    v19->m_MirrorType = bMirror != 0 ? 0x34 : 0;
    v53.m[4] = 0.0;
    *(_QWORD *)&v53.m[8] = 0i64;
    *(_QWORD *)&v53.m[12] = 0i64;
    *(_QWORD *)&v53.m[5] = 1065353216i64;
    *(_QWORD *)&v53.m[2] = 0i64;
    v53.m[14] = 0.0;
    v53.m[7] = 0.0;
    v53.m[11] = 0.0;
    v53.m[15] = 1.0;
    *(_QWORD *)matBone.m = 1065353216i64;
    matBone.m[4] = 0.0;
    *(_QWORD *)&matBone.m[8] = 0i64;
    *(_QWORD *)&matBone.m[12] = 0i64;
    *(_QWORD *)&matBone.m[5] = 1065353216i64;
    *(_QWORD *)&matBone.m[2] = 0i64;
    *(_QWORD *)&matBone.m[10] = 1065353216i64;
    matBone.m[14] = 0.0;
    matBone.m[7] = 0.0;
    matBone.m[15] = 1.0;
    OGLAnimationCamera::getCameraMatrix(v19, &matBone, frame, (OGLVec3 *)pBillMat, &this->m_pPrev, blendRate);
    if ( fDegreeY == 0.0 )
    {
      v20 = *(float *)&FLOAT_1_0;
      v49.m[8] = 0.0;
      LODWORD(v49.m[0]) = FLOAT_1_0;
      v49.m[4] = 0.0;
      v49.m[1] = 0.0;
      v49.m[9] = 0.0;
      v49.m[7] = 0.0;
      v49.m[11] = 0.0;
      v21 = 0.0;
      v49.m[6] = 0.0;
      v22 = 0.0;
      LODWORD(v49.m[10]) = FLOAT_1_0;
      v49.m[3] = 0.0;
      v23 = *(float *)&FLOAT_1_0;
      *(_QWORD *)&v49.m[12] = 0i64;
      v49.m[14] = 0.0;
    }
    else
    {
      v24 = (float)(fDegreeY * 3.1415927) / 180.0;
      v21 = sinf(v24);
      v25 = cosf(v24);
      LODWORD(v22) = LODWORD(v21) ^ _xmm;
      v20 = v25;
      memset(&v49.m[1], 0, 28);
      v23 = v25;
      v49.m[9] = 0.0;
      memset(&v49.m[11], 0, 20);
      v49.m[0] = v25;
      v49.m[8] = v21;
      v49.m[10] = v25;
    }
    v49.m[2] = v22;
    v49.m[15] = 1.0;
    v49.m[5] = 1.0;
    if ( pOffset )
    {
      y = pOffset->y;
      z = pOffset->z;
      x = pOffset->x;
      v56 = (float)((float)((float)(0.0 * pOffset->x) + y) + (float)(0.0 * z)) + 0.0;
      v52 = (float)((float)((float)(0.0 * y) + (float)(v21 * pOffset->x)) + (float)(v23 * z)) + 0.0;
      v18 = frame;
      v26 = matBone.m[12] * scale;
      v27 = matBone.m[14] * scale;
      v51 = (float)((float)((float)(0.0 * y) + (float)(v20 * x)) + (float)(v22 * z)) + 0.0;
      v28 = matBone.m[13] * scale;
      if ( pPosVec )
      {
        v29 = y
            + (float)((float)((float)((float)(0.0 * v26) + v28) + (float)(0.0 * COERCE_FLOAT(LODWORD(v27) ^ _xmm)))
                    + v49.m[7]);
        v30 = x
            + (float)((float)((float)((float)(0.0 * v28) + (float)(v20 * v26))
                            + (float)(v22 * COERCE_FLOAT(LODWORD(v27) ^ _xmm)))
                    + v49.m[3]);
        pPosVec->z = z
                   + (float)((float)((float)((float)(0.0 * v28) + (float)(v21 * v26))
                                   + (float)(v23 * COERCE_FLOAT(LODWORD(v27) ^ _xmm)))
                           + v49.m[11]);
        pPosVec->y = v29;
        pPosVec->x = v30;
      }
      matBone.m[12] = v26 + v51;
      matBone.m[13] = v28 + v56;
      matBone.m[14] = v27 + v52;
    }
    else if ( pPosVec )
    {
      matBone.m[14] = matBone.m[14] * scale;
      LODWORD(v31) = LODWORD(matBone.m[14]) ^ _xmm;
      v32 = (float)(0.0 * (float)(matBone.m[13] * scale)) + (float)(v20 * (float)(matBone.m[12] * scale));
      v33 = (float)((float)(0.0 * (float)(matBone.m[12] * scale)) + (float)(matBone.m[13] * scale))
          + (float)(0.0 * COERCE_FLOAT(LODWORD(matBone.m[14]) ^ _xmm));
      v34 = (float)((float)(0.0 * (float)(matBone.m[13] * scale)) + (float)(v21 * (float)(matBone.m[12] * scale)))
          + (float)(v23 * COERCE_FLOAT(LODWORD(matBone.m[14]) ^ _xmm));
      matBone.m[12] = matBone.m[12] * scale;
      matBone.m[13] = matBone.m[13] * scale;
      v35 = v34 + v49.m[11];
      pPosVec->y = v33 + v49.m[7];
      pPosVec->z = v35;
      pPosVec->x = (float)(v32 + (float)(v22 * v31)) + 0.0;
    }
    v36 = sinf(1.5707964);
    v37 = cosf(1.5707964);
    In1.m[9] = 0.0;
    In1.m[8] = v36;
    In1.m[1] = 0.0;
    In1.m[3] = 0.0;
    In1.m[4] = 0.0;
    In1.m[11] = 0.0;
    In1.m[14] = 0.0;
    LODWORD(In1.m[2]) = LODWORD(v36) ^ _xmm;
    In1.m[0] = v37;
    In1.m[10] = v37;
    *(_QWORD *)&In1.m[6] = 0i64;
    *(_QWORD *)&In1.m[12] = 0i64;
    In1.m[5] = 1.0;
    In1.m[15] = 1.0;
    OGLMatrix::multiplyFast(&In2, &In1, &matBone);
    OGLMatrix::inverse(&In2);
    OGLMatrix::multiplyFast(&In2, &v53, &In2);
    OGLMatrix::multiplyFast(&In2, &In2, &v53);
    if ( fDegreeY != 0.0 )
      OGLMatrix::multiplyFast(&In2, &v49, &In2);
    v38 = *(_OWORD *)&In2.m[4];
    *(_OWORD *)pViewMat->m = *(_OWORD *)In2.m;
    v39 = *(_OWORD *)&In2.m[8];
    *(_OWORD *)&pViewMat->m[4] = v38;
    v40 = *(_OWORD *)&In2.m[12];
    *(_OWORD *)&pViewMat->m[8] = v39;
    *(_OWORD *)&pViewMat->m[12] = v40;
    if ( pBillMat )
    {
      pBillMat->m[0] = pViewMat->m[0];
      pBillMat->m[4] = pViewMat->m[1];
      pBillMat->m[8] = pViewMat->m[2];
      pBillMat->m[12] = 0.0;
      pBillMat->m[1] = pViewMat->m[4];
      pBillMat->m[5] = pViewMat->m[5];
      pBillMat->m[9] = pViewMat->m[6];
      pBillMat->m[13] = 0.0;
      pBillMat->m[2] = pViewMat->m[8];
      pBillMat->m[6] = pViewMat->m[9];
      pBillMat->m[10] = pViewMat->m[10];
      pBillMat->m[14] = 0.0;
      pBillMat->m[3] = 0.0;
      pBillMat->m[7] = 0.0;
      pBillMat->m[11] = 0.0;
      pBillMat->m[15] = 1.0;
    }
    m_iKeyParseCount = (float)v19->m_iKeyParseCount;
    v42 = (int)v18;
    if ( m_iKeyParseCount <= v18 )
    {
      m_fFovyDegree = v19->m_fFovyDegree;
    }
    else if ( (float)v42 == v18 || (float)(v18 + 1.0) >= m_iKeyParseCount )
    {
      m_fFovyDegree = v19->m_pKeyParse[v42].fovYDegree;
    }
    else
    {
      m_fFovyDegree = (float)((float)(1.0 - (float)((float)(v42 + 1) - v18)) * v19->m_pKeyParse[v42 + 1].fovYDegree)
                    + (float)((float)((float)(v42 + 1) - v18) * v19->m_pKeyParse[v42].fovYDegree);
    }
    v44 = fFar;
    if ( fFar == 0.0 )
    {
      v44 = v19->m_fFar * 10.0;
      m_fNear = v19->m_fNear;
    }
    else
    {
      m_fNear = fNear;
    }
    OGLMatrix::perspectiveFov(pProjMat, m_fFovyDegree, v19->m_fWidth / v19->m_fHeight, m_fNear, v44 * scale);
  }
}

void __fastcall OGLAnimationCamera::getRotMatrix(
        OGLAnimationCamera *this,
        OGLMatrix *matRot,
        float frame,
        float blendRate)
{
  __int64 m_iKeyRotCount; // rbx
  OGLKeyRot *m_pKeyRot; // rdx
  int v9; // er8
  __int64 v10; // r9
  int *v11; // r10
  int *p_Frame; // rcx
  int v13; // ecx
  __int64 v14; // r9
  __int64 v15; // rcx
  float v16; // xmm0_4
  float v17; // xmm3_4
  float v18; // xmm4_4
  float maxd; // xmm1_4
  int v20; // ebx
  float v21; // xmm1_4
  float v22; // xmm2_4
  float v23; // xmm3_4
  float *v24; // rdx
  OGLPrevAnimationCamera *m_pPrev; // rcx
  float x; // xmm9_4
  float z; // xmm7_4
  float y; // xmm8_4
  int v29; // ebx
  float v30; // xmm1_4
  float v31; // xmm2_4
  float v32; // xmm3_4
  OGLPrevAnimationCamera *v33; // rax
  float w; // xmm0_4
  int m_MirrorType; // ebx
  OGLQuat *p_q; // rcx
  float v37; // xmm1_4
  float v38; // xmm2_4
  float v39; // xmm3_4
  OGLQuat q; // [rsp+30h] [rbp-29h] BYREF
  OGLQuat q2; // [rsp+40h] [rbp-19h] BYREF
  float rfZ; // [rsp+C0h] [rbp+67h] BYREF
  float rfX; // [rsp+D0h] [rbp+77h] BYREF
  float rfY; // [rsp+D8h] [rbp+7Fh] BYREF

  m_iKeyRotCount = this->m_iKeyRotCount;
  m_pKeyRot = this->m_pKeyRot;
  v9 = 0;
  v10 = 0i64;
  if ( m_iKeyRotCount < 4 )
  {
LABEL_8:
    if ( v10 < m_iKeyRotCount )
    {
      p_Frame = &m_pKeyRot[v10].Frame;
      do
      {
        if ( (float)*p_Frame >= frame )
          break;
        ++v9;
        ++v10;
        p_Frame += 5;
      }
      while ( v10 < m_iKeyRotCount );
    }
  }
  else
  {
    v11 = &m_pKeyRot[2].Frame;
    while ( (float)*(v11 - 10) < frame )
    {
      if ( (float)*(v11 - 5) >= frame )
      {
        ++v9;
        break;
      }
      if ( (float)*v11 >= frame )
      {
        v9 += 2;
        break;
      }
      if ( (float)v11[5] >= frame )
      {
        v9 += 3;
        break;
      }
      v9 += 4;
      v10 += 4i64;
      v11 += 20;
      if ( v10 >= m_iKeyRotCount - 3 )
        goto LABEL_8;
    }
  }
  v13 = 0;
  if ( v9 )
    v13 = v9 - 1;
  if ( v9 == (_DWORD)m_iKeyRotCount )
    v9 = m_iKeyRotCount - 1;
  v14 = v13;
  v15 = v9;
  v16 = (float)m_pKeyRot[v14].Frame;
  v17 = (float)m_pKeyRot[v9].Frame;
  v18 = frame - v16;
  maxd = v17 - v16;
  if ( blendRate != 0.0 )
  {
    if ( v17 == frame || maxd == 0.0 )
    {
      m_MirrorType = this->m_MirrorType;
      if ( m_MirrorType )
      {
        p_q = &m_pKeyRot[v9].q;
LABEL_79:
        OGLQuat::getRotateEuler(p_q, &rfX, &rfY, &rfZ);
        v37 = rfX;
        if ( (m_MirrorType & 0x10) != 0 )
          LODWORD(v37) = LODWORD(rfX) ^ _xmm;
        if ( (m_MirrorType & 0x100) != 0 )
          v37 = 3.1415927 - v37;
        if ( (m_MirrorType & 0x1000) != 0 )
          v37 = -3.1415927 - v37;
        v38 = rfY;
        if ( (m_MirrorType & 0x20) != 0 )
          LODWORD(v38) = LODWORD(rfY) ^ _xmm;
        if ( (m_MirrorType & 0x200) != 0 )
          v38 = 3.1415927 - v38;
        if ( (m_MirrorType & 0x2000) != 0 )
          v38 = -3.1415927 - v38;
        v39 = rfZ;
        if ( (m_MirrorType & 0x40) != 0 )
          LODWORD(v39) = LODWORD(rfZ) ^ _xmm;
        if ( (m_MirrorType & 0x400) != 0 )
          v39 = 3.1415927 - v39;
        if ( (m_MirrorType & 0x4000) != 0 )
          v39 = -3.1415927 - v39;
        OGLQuat::setRotateEuler(&q2, v37, v38, v39);
        goto LABEL_98;
      }
      q2 = m_pKeyRot[v9].q;
    }
    else
    {
      OGLQuat::slerp(&q2, &m_pKeyRot[v14].q, &m_pKeyRot[v15].q, v18, v17 - v16);
      if ( q.x != 0.0 || q.y != 0.0 || q.z != 0.0 )
      {
        m_MirrorType = this->m_MirrorType;
        if ( m_MirrorType )
        {
          p_q = &q2;
          goto LABEL_79;
        }
      }
    }
LABEL_98:
    OGLQuat::slerp(&q, &this->m_pPrev->m_vPrevRot, &q2, 1.0 - blendRate, 1.0);
    OGLMatrix::rotationQuaternion(matRot, &q);
    this->m_pPrev->m_vPrevRot = q;
    return;
  }
  if ( v17 == frame || maxd == 0.0 )
  {
    v20 = this->m_MirrorType;
    if ( v20 )
    {
      OGLQuat::getRotateEuler(&m_pKeyRot[v9].q, &rfX, &rfY, &rfZ);
      v21 = rfX;
      if ( (v20 & 0x10) != 0 )
        LODWORD(v21) = LODWORD(rfX) ^ _xmm;
      if ( (v20 & 0x100) != 0 )
        v21 = 3.1415927 - v21;
      if ( (v20 & 0x1000) != 0 )
        v21 = -3.1415927 - v21;
      v22 = rfY;
      if ( (v20 & 0x20) != 0 )
        LODWORD(v22) = LODWORD(rfY) ^ _xmm;
      if ( (v20 & 0x200) != 0 )
        v22 = 3.1415927 - v22;
      if ( (v20 & 0x2000) != 0 )
        v22 = -3.1415927 - v22;
      v23 = rfZ;
      if ( (v20 & 0x40) != 0 )
        LODWORD(v23) = LODWORD(rfZ) ^ _xmm;
      if ( (v20 & 0x400) != 0 )
        v23 = 3.1415927 - v23;
      if ( (v20 & 0x4000) != 0 )
        v23 = -3.1415927 - v23;
      OGLQuat::setRotateEuler(&q, v21, v22, v23);
      OGLMatrix::rotationQuaternion(matRot, &q);
      this->m_pPrev->m_vPrevRot = q;
    }
    else
    {
      OGLMatrix::rotationQuaternion(matRot, &m_pKeyRot[v9].q);
      m_pPrev = this->m_pPrev;
      m_pPrev->m_vPrevRot.x = *v24;
      m_pPrev->m_vPrevRot.y = v24[1];
      m_pPrev->m_vPrevRot.z = v24[2];
      m_pPrev->m_vPrevRot.w = v24[3];
    }
  }
  else
  {
    OGLQuat::slerp(&q, &m_pKeyRot[v14].q, &m_pKeyRot[v15].q, v18, maxd);
    x = q.x;
    z = q.z;
    y = q.y;
    if ( q.x == 0.0 && q.y == 0.0 && q.z == 0.0 )
    {
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
    }
    else
    {
      v29 = this->m_MirrorType;
      if ( v29 )
      {
        OGLQuat::getRotateEuler(&q, &rfX, &rfY, &rfZ);
        v30 = rfX;
        if ( (v29 & 0x10) != 0 )
          LODWORD(v30) = LODWORD(rfX) ^ _xmm;
        if ( (v29 & 0x100) != 0 )
          v30 = 3.1415927 - v30;
        if ( (v29 & 0x1000) != 0 )
          v30 = -3.1415927 - v30;
        v31 = rfY;
        if ( (v29 & 0x20) != 0 )
          LODWORD(v31) = LODWORD(rfY) ^ _xmm;
        if ( (v29 & 0x200) != 0 )
          v31 = 3.1415927 - v31;
        if ( (v29 & 0x2000) != 0 )
          v31 = -3.1415927 - v31;
        v32 = rfZ;
        if ( (v29 & 0x40) != 0 )
          LODWORD(v32) = LODWORD(rfZ) ^ _xmm;
        if ( (v29 & 0x400) != 0 )
          v32 = 3.1415927 - v32;
        if ( (v29 & 0x4000) != 0 )
          v32 = -3.1415927 - v32;
        OGLQuat::setRotateEuler(&q, v30, v31, v32);
        OGLMatrix::rotationQuaternion(matRot, &q);
        z = q.z;
        y = q.y;
        x = q.x;
      }
      else
      {
        OGLMatrix::rotationQuaternion(matRot, &q);
      }
    }
    v33 = this->m_pPrev;
    w = q.w;
    v33->m_vPrevRot.x = x;
    v33->m_vPrevRot.y = y;
    v33->m_vPrevRot.z = z;
    v33->m_vPrevRot.w = w;
  }
}

void __fastcall OGLAnimationCamera::getScalMatrix(
        OGLAnimationCamera *this,
        OGLMatrix *matScal,
        float frame,
        float blendRate)
{
  OGLKeyScale *m_pKeyScale; // r11
  __int64 m_iKeyScaleCount; // rsi
  int v8; // edi
  int v9; // er8
  __int64 v10; // r9
  int *v11; // r10
  int *p_Frame; // rax
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm4_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  OGLPrevAnimationCamera *m_pPrev; // rax
  float v21; // xmm0_4
  float x; // xmm3_4
  float y; // xmm5_4
  float z; // xmm6_4
  float v25; // xmm4_4
  OGLPrevAnimationCamera *v26; // rax
  float v27; // xmm6_4
  float v28; // xmm3_4
  float v29; // xmm5_4
  OGLPrevAnimationCamera *v30; // rax

  m_pKeyScale = this->m_pKeyScale;
  m_iKeyScaleCount = this->m_iKeyScaleCount;
  v8 = 0;
  v9 = 0;
  v10 = 0i64;
  if ( m_iKeyScaleCount < 4 )
  {
LABEL_8:
    if ( v10 < m_iKeyScaleCount )
    {
      p_Frame = &m_pKeyScale[v10].Frame;
      do
      {
        if ( (float)*p_Frame >= frame )
          break;
        ++v9;
        ++v10;
        p_Frame += 4;
      }
      while ( v10 < m_iKeyScaleCount );
    }
  }
  else
  {
    v11 = &m_pKeyScale[2].Frame;
    while ( (float)*(v11 - 8) < frame )
    {
      if ( (float)*(v11 - 4) >= frame )
      {
        ++v9;
        break;
      }
      if ( (float)*v11 >= frame )
      {
        v9 += 2;
        break;
      }
      if ( (float)v11[4] >= frame )
      {
        v9 += 3;
        break;
      }
      v9 += 4;
      v10 += 4i64;
      v11 += 16;
      if ( v10 >= m_iKeyScaleCount - 3 )
        goto LABEL_8;
    }
  }
  if ( v9 )
    v8 = v9 - 1;
  if ( v9 == (_DWORD)m_iKeyScaleCount )
    v9 = m_iKeyScaleCount - 1;
  v13 = (float)m_pKeyScale[v8].Frame;
  v14 = (float)m_pKeyScale[v9].Frame;
  if ( blendRate == 0.0 )
  {
    if ( v14 == frame || (v15 = v14 - v13, v15 == 0.0) )
    {
      *(_QWORD *)matScal->m = 0i64;
      *(_QWORD *)&matScal->m[2] = 0i64;
      *(_QWORD *)&matScal->m[4] = 0i64;
      *(_QWORD *)&matScal->m[6] = 0i64;
      *(_QWORD *)&matScal->m[8] = 0i64;
      *(_QWORD *)&matScal->m[10] = 0i64;
      *(_QWORD *)&matScal->m[12] = 0i64;
      *(_QWORD *)&matScal->m[14] = 0i64;
      matScal->m[0] = m_pKeyScale[v9].s.x;
      matScal->m[5] = m_pKeyScale[v9].s.y;
      matScal->m[10] = m_pKeyScale[v9].s.z;
      matScal->m[15] = 1.0;
      this->m_pPrev->m_vPrevScale = m_pKeyScale[v9].s;
    }
    else
    {
      v16 = (float)(frame - v13) / v15;
      v17 = (float)((float)(m_pKeyScale[v9].s.x - m_pKeyScale[v8].s.x) * v16) + m_pKeyScale[v8].s.x;
      v18 = (float)((float)(m_pKeyScale[v9].s.y - m_pKeyScale[v8].s.y) * v16) + m_pKeyScale[v8].s.y;
      v19 = (float)((float)(m_pKeyScale[v9].s.z - m_pKeyScale[v8].s.z) * v16) + m_pKeyScale[v8].s.z;
      *(_QWORD *)matScal->m = 0i64;
      *(_QWORD *)&matScal->m[2] = 0i64;
      *(_QWORD *)&matScal->m[4] = 0i64;
      *(_QWORD *)&matScal->m[6] = 0i64;
      *(_QWORD *)&matScal->m[8] = 0i64;
      *(_QWORD *)&matScal->m[10] = 0i64;
      *(_QWORD *)&matScal->m[12] = 0i64;
      *(_QWORD *)&matScal->m[14] = 0i64;
      matScal->m[0] = v17;
      matScal->m[5] = v18;
      matScal->m[10] = v19;
      matScal->m[15] = 1.0;
      m_pPrev = this->m_pPrev;
      m_pPrev->m_vPrevScale.y = v18;
      m_pPrev->m_vPrevScale.z = v19;
      m_pPrev->m_vPrevScale.x = v17;
    }
  }
  else
  {
    if ( v14 == frame || (v21 = v14 - v13, v21 == 0.0) )
    {
      x = m_pKeyScale[v9].s.x;
      y = m_pKeyScale[v9].s.y;
      z = m_pKeyScale[v9].s.z;
    }
    else
    {
      v25 = (float)(frame - v13) / v21;
      x = (float)((float)(m_pKeyScale[v9].s.x - m_pKeyScale[v8].s.x) * v25) + m_pKeyScale[v8].s.x;
      y = (float)((float)(m_pKeyScale[v9].s.y - m_pKeyScale[v8].s.y) * v25) + m_pKeyScale[v8].s.y;
      z = (float)((float)(m_pKeyScale[v9].s.z - m_pKeyScale[v8].s.z) * v25) + m_pKeyScale[v8].s.z;
    }
    v26 = this->m_pPrev;
    v27 = (float)((float)(z - v26->m_vPrevScale.z) * (float)(1.0 - blendRate)) + v26->m_vPrevScale.z;
    v28 = (float)((float)(x - v26->m_vPrevScale.x) * (float)(1.0 - blendRate)) + v26->m_vPrevScale.x;
    v29 = (float)((float)(y - v26->m_vPrevScale.y) * (float)(1.0 - blendRate)) + v26->m_vPrevScale.y;
    *(_QWORD *)matScal->m = 0i64;
    *(_QWORD *)&matScal->m[2] = 0i64;
    *(_QWORD *)&matScal->m[4] = 0i64;
    *(_QWORD *)&matScal->m[6] = 0i64;
    *(_QWORD *)&matScal->m[8] = 0i64;
    *(_QWORD *)&matScal->m[10] = 0i64;
    *(_QWORD *)&matScal->m[12] = 0i64;
    *(_QWORD *)&matScal->m[14] = 0i64;
    matScal->m[10] = v27;
    matScal->m[0] = v28;
    matScal->m[5] = v29;
    matScal->m[15] = 1.0;
    v30 = this->m_pPrev;
    v30->m_vPrevScale.z = v27;
    v30->m_vPrevScale.y = v29;
    v30->m_vPrevScale.x = v28;
  }
}

void __fastcall OGLAnimationCamera::getTransPos(OGLAnimationCamera *this, OGLVec3 *vPos, float frame, float blendRate)
{
  __int64 m_iKeyTransCount; // rsi
  OGLKeyTrans *m_pKeyTrans; // r11
  int v7; // ecx
  int v9; // er8
  __int64 v10; // r9
  int *v11; // r10
  int *p_Frame; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  float v15; // xmm0_4
  float v16; // xmm3_4
  float v17; // xmm6_4
  float v18; // xmm1_4
  float x; // xmm0_4
  float y; // xmm1_4
  float z; // xmm1_4
  OGLPrevAnimationCamera *m_pPrev; // rcx
  float v23; // xmm6_4
  float v24; // xmm3_4
  float v25; // xmm0_4
  float v26; // xmm0_4
  int m_MirrorType; // er8
  int v28; // xmm0_4
  float v29; // xmm4_4
  float v30; // xmm5_4
  float v31; // xmm3_4
  bool v32; // zf
  int v33; // ecx
  float v34; // xmm6_4
  OGLPrevAnimationCamera *v35; // rax
  float v36; // xmm3_4

  m_iKeyTransCount = this->m_iKeyTransCount;
  m_pKeyTrans = this->m_pKeyTrans;
  v7 = 0;
  v9 = 0;
  v10 = 0i64;
  if ( m_iKeyTransCount < 4 )
  {
LABEL_8:
    if ( v10 < m_iKeyTransCount )
    {
      p_Frame = &m_pKeyTrans[v10].Frame;
      do
      {
        if ( (float)*p_Frame >= frame )
          break;
        ++v9;
        ++v10;
        p_Frame += 4;
      }
      while ( v10 < m_iKeyTransCount );
    }
  }
  else
  {
    v11 = &m_pKeyTrans[2].Frame;
    while ( (float)*(v11 - 8) < frame )
    {
      if ( (float)*(v11 - 4) >= frame )
      {
        ++v9;
        break;
      }
      if ( (float)*v11 >= frame )
      {
        v9 += 2;
        break;
      }
      if ( (float)v11[4] >= frame )
      {
        v9 += 3;
        break;
      }
      v9 += 4;
      v10 += 4i64;
      v11 += 16;
      if ( v10 >= m_iKeyTransCount - 3 )
        goto LABEL_8;
    }
  }
  if ( v9 )
    v7 = v9 - 1;
  if ( v9 == (_DWORD)m_iKeyTransCount )
    v9 = m_iKeyTransCount - 1;
  v13 = v7;
  v14 = v9;
  v15 = (float)m_pKeyTrans[v13].Frame;
  v16 = (float)m_pKeyTrans[v9].Frame;
  v17 = frame - v15;
  v18 = v16 - v15;
  if ( blendRate == 0.0 )
  {
    if ( v16 == frame || v18 == 0.0 )
    {
      x = m_pKeyTrans[v9].t.x;
      if ( (this->m_MirrorType & 1) != 0 )
        LODWORD(x) ^= _xmm;
      vPos->x = x;
      y = m_pKeyTrans[v9].t.y;
      if ( (this->m_MirrorType & 2) != 0 )
        LODWORD(y) ^= _xmm;
      vPos->y = y;
      z = m_pKeyTrans[v9].t.z;
      if ( (this->m_MirrorType & 4) != 0 )
        LODWORD(z) ^= _xmm;
      vPos->z = z;
      m_pPrev = this->m_pPrev;
      m_pPrev->m_vPrevTrans.x = x;
    }
    else
    {
      v23 = v17 / v18;
      v24 = (float)((float)(m_pKeyTrans[v9].t.x - m_pKeyTrans[v13].t.x) * v23) + m_pKeyTrans[v13].t.x;
      vPos->x = v24;
      vPos->y = (float)((float)(m_pKeyTrans[v9].t.y - m_pKeyTrans[v13].t.y) * v23) + m_pKeyTrans[v13].t.y;
      vPos->z = (float)((float)(m_pKeyTrans[v9].t.z - m_pKeyTrans[v13].t.z) * v23) + m_pKeyTrans[v13].t.z;
      if ( (this->m_MirrorType & 1) != 0 )
        LODWORD(v24) ^= _xmm;
      v25 = vPos->y;
      vPos->x = v24;
      if ( (this->m_MirrorType & 2) != 0 )
        LODWORD(v25) ^= _xmm;
      vPos->y = v25;
      v26 = vPos->z;
      if ( (this->m_MirrorType & 4) != 0 )
        LODWORD(v26) ^= _xmm;
      vPos->z = v26;
      m_pPrev = this->m_pPrev;
      m_pPrev->m_vPrevTrans.x = v24;
    }
  }
  else
  {
    if ( v16 == frame || v18 == 0.0 )
    {
      m_MirrorType = this->m_MirrorType;
      v28 = _xmm;
      v29 = m_pKeyTrans[v14].t.x;
      if ( (this->m_MirrorType & 1) != 0 )
        LODWORD(v29) ^= _xmm;
      v30 = m_pKeyTrans[v14].t.y;
      if ( (m_MirrorType & 2) != 0 )
        LODWORD(v30) ^= _xmm;
      v31 = m_pKeyTrans[v14].t.z;
      v32 = (m_MirrorType & 4) == 0;
    }
    else
    {
      v33 = this->m_MirrorType;
      v28 = _xmm;
      v34 = v17 / v18;
      v29 = (float)((float)(m_pKeyTrans[v9].t.x - m_pKeyTrans[v13].t.x) * v34) + m_pKeyTrans[v13].t.x;
      v30 = (float)((float)(m_pKeyTrans[v9].t.y - m_pKeyTrans[v13].t.y) * v34) + m_pKeyTrans[v13].t.y;
      v31 = (float)((float)(m_pKeyTrans[v9].t.z - m_pKeyTrans[v13].t.z) * v34) + m_pKeyTrans[v13].t.z;
      if ( (this->m_MirrorType & 1) != 0 )
        LODWORD(v29) ^= _xmm;
      if ( (v33 & 2) != 0 )
        LODWORD(v30) ^= _xmm;
      v32 = (v33 & 4) == 0;
    }
    if ( !v32 )
      LODWORD(v31) ^= v28;
    v35 = this->m_pPrev;
    vPos->x = (float)((float)(v29 - v35->m_vPrevTrans.x) * (float)(1.0 - blendRate)) + v35->m_vPrevTrans.x;
    vPos->y = (float)((float)(v30 - v35->m_vPrevTrans.y) * (float)(1.0 - blendRate)) + v35->m_vPrevTrans.y;
    v36 = (float)((float)(v31 - v35->m_vPrevTrans.z) * (float)(1.0 - blendRate)) + v35->m_vPrevTrans.z;
    *(float *)&v35 = vPos->x;
    vPos->z = v36;
    m_pPrev = this->m_pPrev;
    LODWORD(m_pPrev->m_vPrevTrans.x) = (_DWORD)v35;
  }
  m_pPrev->m_vPrevTrans.y = vPos->y;
  m_pPrev->m_vPrevTrans.z = vPos->z;
}

__int64 __fastcall OGLCamera::loadOcamData(OGLCamera *this, unsigned __int8 *buf, int size)
{
  __int64 v7; // rbx
  int v8; // ecx
  unsigned int v9; // edx
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // er12
  bool v13; // cf
  unsigned __int64 v14; // rax
  _QWORD *v15; // rax
  OGLAnimationCamera *v16; // rdi
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  float v20; // xmm0_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  int v26; // xmm0_4
  __int64 i; // rsi
  OGLAnimationCamera *m_pCameraData; // r12
  float v29; // xmm0_4
  float v30; // xmm0_4
  float v31; // xmm0_4
  float v32; // xmm0_4
  float v33; // xmm0_4
  float v34; // xmm0_4
  int v35; // edx
  int v36; // edi
  unsigned __int8 *v37; // rax
  int v38; // edx
  __int64 v39; // rdi
  _DWORD *v40; // rax
  OGLKeyTrans *v41; // rcx
  _DWORD *v42; // rax
  int v43; // edx
  int m_iKeyTransCount; // edi
  int v45; // edi
  __int64 v46; // rdi
  _DWORD *v47; // rax
  OGLKeyScale *v48; // rcx
  _DWORD *v49; // rax
  int v50; // edx
  int m_iKeyScaleCount; // edi
  int v52; // edi
  OGLKeyRot *v53; // rax
  int m_iKeyRotCount; // ecx
  int v55; // edi
  int v56; // edx
  __int64 v57; // rdi
  char *v58; // rax
  _OGLKeyParse *v59; // rcx
  _QWORD *v60; // rax
  int m_iKeyParseCount; // edi
  int v62; // edi
  float v64; // [rsp+88h] [rbp+48h]
  float v65; // [rsp+88h] [rbp+48h]
  float v66; // [rsp+88h] [rbp+48h]
  float v67; // [rsp+88h] [rbp+48h]
  float v68; // [rsp+88h] [rbp+48h]
  float v69; // [rsp+88h] [rbp+48h]
  float v70; // [rsp+88h] [rbp+48h]
  float v71; // [rsp+88h] [rbp+48h]
  float v72; // [rsp+88h] [rbp+48h]
  int v73; // [rsp+88h] [rbp+48h]
  int v74; // [rsp+88h] [rbp+48h]
  float v75; // [rsp+98h] [rbp+58h]
  float v76; // [rsp+98h] [rbp+58h]
  float v77; // [rsp+98h] [rbp+58h]
  float v78; // [rsp+98h] [rbp+58h]
  float v79; // [rsp+98h] [rbp+58h]
  float v80; // [rsp+98h] [rbp+58h]

  if ( !buf )
    return (unsigned int)-4;
  if ( this->m_pCameraData )
    return (unsigned int)-2;
  if ( *buf != 83 || buf[1] != 67 )
    return (unsigned int)-3;
  LODWORD(v7) = 0;
  if ( size && (LODWORD(v7) = 2, (unsigned int)size > 2) )
  {
    v8 = buf[2] | ((buf[3] | (*((unsigned __int16 *)buf + 2) << 8)) << 8);
    LODWORD(v7) = 6;
  }
  else
  {
    v8 = 0;
  }
  this->cFormatType = v8;
  if ( size > (unsigned int)v7 )
  {
    v9 = buf[(unsigned int)v7] | ((buf[(unsigned int)(v7 + 1)] | ((buf[(unsigned int)(v7 + 2)] | (buf[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
    LODWORD(v7) = v7 + 4;
  }
  else
  {
    v9 = 0;
  }
  this->m_usCameraCount = v9;
  v10 = v9;
  v11 = 112i64 * v9;
  v12 = -1;
  if ( !is_mul_ok(v9, 0x70ui64) )
    v11 = -1i64;
  v13 = __CFADD__(v11, 8i64);
  v14 = v11 + 8;
  if ( v13 )
    v14 = -1i64;
  v15 = operator new[](v14);
  if ( v15 )
  {
    *v15 = v10;
    v16 = (OGLAnimationCamera *)(v15 + 1);
    `eh vector constructor iterator'(
      v15 + 1,
      0x70ui64,
      (unsigned int)v10,
      (void (__fastcall *)(void *))OGLAnimationCamera::OGLAnimationCamera,
      (void (__fastcall *)(void *))OGLAnimationCamera::~OGLAnimationCamera);
  }
  else
  {
    v16 = 0i64;
  }
  this->m_pCameraData = v16;
  if ( v16 || !this->m_usCameraCount )
  {
    if ( size > (unsigned int)v7 )
    {
      v64 = *(float *)&buf[(unsigned int)v7];
      LODWORD(v7) = v7 + 4;
      v17 = v64;
    }
    else
    {
      v17 = 0.0;
    }
    this->defaultScale.x = v17;
    if ( size > (unsigned int)v7 )
    {
      v65 = *(float *)&buf[(unsigned int)v7];
      LODWORD(v7) = v7 + 4;
      v18 = v65;
    }
    else
    {
      v18 = 0.0;
    }
    this->defaultScale.y = v18;
    if ( size > (unsigned int)v7 )
    {
      v66 = *(float *)&buf[(unsigned int)v7];
      LODWORD(v7) = v7 + 4;
      v19 = v66;
    }
    else
    {
      v19 = 0.0;
    }
    this->defaultScale.z = v19;
    if ( size > (unsigned int)v7 )
    {
      v67 = *(float *)&buf[(unsigned int)v7];
      LODWORD(v7) = v7 + 4;
      v20 = v67;
    }
    else
    {
      v20 = 0.0;
    }
    this->defaultRot.x = v20;
    if ( size > (unsigned int)v7 )
    {
      v68 = *(float *)&buf[(unsigned int)v7];
      LODWORD(v7) = v7 + 4;
      v21 = v68;
    }
    else
    {
      v21 = 0.0;
    }
    this->defaultRot.y = v21;
    if ( size > (unsigned int)v7 )
    {
      v69 = *(float *)&buf[(unsigned int)v7];
      LODWORD(v7) = v7 + 4;
      v22 = v69;
    }
    else
    {
      v22 = 0.0;
    }
    this->defaultRot.z = v22;
    if ( size > (unsigned int)v7 )
    {
      v70 = *(float *)&buf[(unsigned int)v7];
      LODWORD(v7) = v7 + 4;
      v23 = v70;
    }
    else
    {
      v23 = 0.0;
    }
    this->defaultRot.w = v23;
    if ( size > (unsigned int)v7 )
    {
      v71 = *(float *)&buf[(unsigned int)v7];
      LODWORD(v7) = v7 + 4;
      v24 = v71;
    }
    else
    {
      v24 = 0.0;
    }
    this->defaultPos.x = v24;
    if ( size > (unsigned int)v7 )
    {
      v72 = *(float *)&buf[(unsigned int)v7];
      LODWORD(v7) = v7 + 4;
      v25 = v72;
    }
    else
    {
      v25 = 0.0;
    }
    this->defaultPos.y = v25;
    if ( size > (unsigned int)v7 )
    {
      v73 = *(_DWORD *)&buf[(unsigned int)v7];
      LODWORD(v7) = v7 + 4;
      v26 = v73;
    }
    else
    {
      v26 = 0;
    }
    LODWORD(this->defaultPos.z) = v26 ^ _xmm;
    v74 = 0;
    if ( (int)this->m_usCameraCount <= 0 )
      return 1i64;
    for ( i = 0i64; ; ++i )
    {
      m_pCameraData = this->m_pCameraData;
      if ( size > (unsigned int)v7 )
      {
        v75 = *(float *)&buf[(unsigned int)v7];
        LODWORD(v7) = v7 + 4;
        v29 = v75;
      }
      else
      {
        v29 = 0.0;
      }
      m_pCameraData[i].m_fNear = v29;
      if ( size > (unsigned int)v7 )
      {
        v76 = *(float *)&buf[(unsigned int)v7];
        LODWORD(v7) = v7 + 4;
        v30 = v76;
      }
      else
      {
        v30 = 0.0;
      }
      m_pCameraData[i].m_fFar = v30;
      if ( size > (unsigned int)v7 )
      {
        v77 = *(float *)&buf[(unsigned int)v7];
        LODWORD(v7) = v7 + 4;
        v31 = v77;
      }
      else
      {
        v31 = 0.0;
      }
      m_pCameraData[i].m_fAspect = v31;
      if ( size > (unsigned int)v7 )
      {
        v78 = *(float *)&buf[(unsigned int)v7];
        LODWORD(v7) = v7 + 4;
        v32 = v78;
      }
      else
      {
        v32 = 0.0;
      }
      m_pCameraData[i].m_fFovyDegree = v32;
      if ( size > (unsigned int)v7 )
      {
        v79 = *(float *)&buf[(unsigned int)v7];
        LODWORD(v7) = v7 + 4;
        v33 = v79;
      }
      else
      {
        v33 = 0.0;
      }
      m_pCameraData[i].m_fWidth = v33;
      if ( size > (unsigned int)v7 )
      {
        v80 = *(float *)&buf[(unsigned int)v7];
        LODWORD(v7) = v7 + 4;
        v34 = v80;
      }
      else
      {
        v34 = 0.0;
      }
      m_pCameraData[i].m_fHeight = v34;
      if ( size > (unsigned int)v7 )
      {
        v35 = buf[(unsigned int)v7] | ((buf[(unsigned int)(v7 + 1)] | ((buf[(unsigned int)(v7 + 2)] | (buf[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
        LODWORD(v7) = v7 + 4;
      }
      else
      {
        v35 = 0;
      }
      m_pCameraData[i].m_fTotalFrame = (float)v35;
      if ( (this->cFormatType & 1) != 0 )
      {
        if ( size > (unsigned int)v7 )
        {
          v36 = buf[(unsigned int)v7] | ((buf[(unsigned int)(v7 + 1)] | ((buf[(unsigned int)(v7 + 2)] | (buf[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
          LODWORD(v7) = v7 + 4;
        }
        else
        {
          v36 = 0;
        }
        v37 = (unsigned __int8 *)operator new[](v36 + 1);
        m_pCameraData[i].m_cMotionName = v37;
        if ( size > (unsigned int)v7 )
        {
          memmove(v37, &buf[(unsigned int)v7], v36);
          LODWORD(v7) = v36 + v7;
        }
        m_pCameraData[i].m_cMotionName[v36] = 0;
      }
      if ( size > (unsigned int)v7 )
      {
        v38 = buf[(unsigned int)v7] | ((buf[(unsigned int)(v7 + 1)] | ((buf[(unsigned int)(v7 + 2)] | (buf[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
        LODWORD(v7) = v7 + 4;
      }
      else
      {
        v38 = 0;
      }
      m_pCameraData[i].m_iKeyTransCount = v38;
      v39 = v38;
      v40 = operator new[](saturated_mul(v38, 0x10ui64));
      v41 = (OGLKeyTrans *)v40;
      if ( v40 )
      {
        if ( v39 )
        {
          v42 = v40 + 3;
          v43 = 0;
          do
          {
            *((_QWORD *)v42 - 1) = 0i64;
            *v42 = 0;
            v42 += 4;
            --v39;
          }
          while ( v39 );
        }
        else
        {
          v43 = 0;
        }
      }
      else
      {
        v43 = 0;
        v41 = 0i64;
      }
      m_pCameraData[i].m_pKeyTrans = v41;
      m_iKeyTransCount = m_pCameraData[i].m_iKeyTransCount;
      if ( m_iKeyTransCount > 0 && !v41 )
        break;
      v45 = 16 * m_iKeyTransCount;
      if ( size > (unsigned int)v7 )
      {
        memmove(v41, &buf[(unsigned int)v7], v45);
        v7 = (unsigned int)(v45 + v7);
        if ( size <= (unsigned int)v7 )
        {
          v43 = 0;
        }
        else
        {
          v43 = buf[v7] | ((buf[(unsigned int)(v7 + 1)] | ((buf[(unsigned int)(v7 + 2)] | (buf[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
          LODWORD(v7) = v7 + 4;
        }
      }
      m_pCameraData[i].m_iKeyScaleCount = v43;
      v46 = v43;
      v47 = operator new[](saturated_mul(v43, 0x10ui64));
      v48 = (OGLKeyScale *)v47;
      if ( v47 )
      {
        if ( v46 )
        {
          v49 = v47 + 3;
          v50 = 0;
          do
          {
            *((_QWORD *)v49 - 1) = 0i64;
            *v49 = 0;
            v49 += 4;
            --v46;
          }
          while ( v46 );
        }
        else
        {
          v50 = 0;
        }
      }
      else
      {
        v50 = 0;
        v48 = 0i64;
      }
      m_pCameraData[i].m_pKeyScale = v48;
      m_iKeyScaleCount = m_pCameraData[i].m_iKeyScaleCount;
      if ( m_iKeyScaleCount > 0 && !v48 )
        break;
      v52 = 16 * m_iKeyScaleCount;
      if ( size > (unsigned int)v7 )
      {
        memmove(v48, &buf[(unsigned int)v7], v52);
        v7 = (unsigned int)(v52 + v7);
        if ( size <= (unsigned int)v7 )
        {
          v50 = 0;
        }
        else
        {
          v50 = buf[v7] | ((buf[(unsigned int)(v7 + 1)] | ((buf[(unsigned int)(v7 + 2)] | (buf[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
          LODWORD(v7) = v7 + 4;
        }
      }
      m_pCameraData[i].m_iKeyRotCount = v50;
      v53 = (OGLKeyRot *)operator new[](saturated_mul(v50, 0x14ui64));
      m_pCameraData[i].m_pKeyRot = v53;
      m_iKeyRotCount = m_pCameraData[i].m_iKeyRotCount;
      if ( m_iKeyRotCount > 0 && !v53 )
        break;
      v55 = 20 * m_iKeyRotCount;
      if ( size > (unsigned int)v7 )
      {
        memmove(v53, &buf[(unsigned int)v7], v55);
        LODWORD(v7) = v55 + v7;
      }
      if ( (this->cFormatType & 2) != 0 )
      {
        if ( size > (unsigned int)v7 )
        {
          v56 = buf[(unsigned int)v7] | ((buf[(unsigned int)(v7 + 1)] | ((buf[(unsigned int)(v7 + 2)] | (buf[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
          LODWORD(v7) = v7 + 4;
        }
        else
        {
          v56 = 0;
        }
        m_pCameraData[i].m_iKeyParseCount = v56;
        v57 = v56;
        v58 = (char *)operator new[](saturated_mul(v56, 0x10ui64));
        v59 = (_OGLKeyParse *)v58;
        if ( v58 )
        {
          if ( v57 )
          {
            v60 = v58 + 4;
            do
            {
              *v60 = 0i64;
              v60 += 2;
              --v57;
            }
            while ( v57 );
          }
        }
        else
        {
          v59 = 0i64;
        }
        m_pCameraData[i].m_pKeyParse = v59;
        m_iKeyParseCount = m_pCameraData[i].m_iKeyParseCount;
        if ( m_iKeyParseCount > 0 && !v59 )
          return (unsigned int)-1;
        v62 = 16 * m_iKeyParseCount;
        if ( size > (unsigned int)v7 )
        {
          memmove(v59, &buf[(unsigned int)v7], v62);
          LODWORD(v7) = v62 + v7;
        }
      }
      if ( ++v74 >= (signed int)this->m_usCameraCount )
        return 1i64;
    }
    return (unsigned int)-1;
  }
  return v12;
}

