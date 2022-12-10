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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglanimationbone.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglquat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglinputstream.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x140889529
OGLBone::OGLBone(); // 0x140053450
OGLBone::~OGLBone(); // 0x140053520
void OGLBone::finalize(); // 0x140053580
unsigned char OGLBone::loadFloat(OGLInputStream * format, long boneNo); // 0x140053610//decompilation failure at 140889529!
void __fastcall OGLBone::OGLBone(OGLBone *this)
{
  *(_QWORD *)&this->m_vTransform.x = 0i64;
  *(_QWORD *)&this->m_mOffset.m[4] = 0i64;
  *(_QWORD *)&this->m_mOffset.m[6] = 0i64;
  *(_QWORD *)&this->m_mOffset.m[14] = 0i64;
  *(_QWORD *)&this->m_aBindPose.m_vPrevTrans.z = 0i64;
  *(_QWORD *)&this->m_aBindPose.m_vPrevScale.y = 0i64;
  *(_QWORD *)&this->m_aBindPose.m_vPrevTrans.x = 0i64;
  this->m_aBindPose.m_vPrevTrans.z = 0.0;
  this->m_aBindPose.m_vPrevScale.x = 1.0;
  this->m_aBindPose.m_vPrevScale.y = 1.0;
  *(_QWORD *)&this->m_aBindPose.m_vPrevScale.z = 1065353216i64;
  *(_QWORD *)&this->m_aBindPose.m_vPrevRot.y = 0i64;
  this->m_aBindPose.m_vPrevRot.w = 1.0;
  this->m_bNewFormat = 0;
  *(_QWORD *)&this->m_fLength = 1069547520i64;
  this->m_pusIndex = 0i64;
  this->m_cName = 0i64;
  *(_QWORD *)&this->m_iNo = 0i64;
  this->m_sParents = -1;
  *(_QWORD *)&this->m_sChild = -1i64;
  *(_QWORD *)this->m_mOffset.m = 1065353216i64;
  this->m_mOffset.m[4] = 0.0;
  *(_QWORD *)&this->m_mOffset.m[8] = 0i64;
  *(_QWORD *)&this->m_mOffset.m[12] = 0i64;
  *(_QWORD *)&this->m_mOffset.m[5] = 1065353216i64;
  *(_QWORD *)&this->m_mOffset.m[2] = 0i64;
  *(_QWORD *)&this->m_mOffset.m[10] = 1065353216i64;
  this->m_mOffset.m[14] = 0.0;
  this->m_mOffset.m[7] = 0.0;
  this->m_mOffset.m[15] = 1.0;
  *(_QWORD *)&this->m_vTransform.y = 0i64;
  this->m_uiBoneInfoFlg = 0;
  this->m_iNodeLevel = -1;
}

void __fastcall OGLBone::~OGLBone(OGLBone *this)
{
  OGLBone::finalize(this);
  *(_QWORD *)&this->m_aBindPose.m_vPrevTrans.x = 0i64;
  this->m_aBindPose.m_vPrevTrans.z = 0.0;
  this->m_aBindPose.m_vPrevScale.x = 1.0;
  this->m_aBindPose.m_vPrevScale.y = 1.0;
  *(_QWORD *)&this->m_aBindPose.m_vPrevScale.z = 1065353216i64;
  *(_QWORD *)&this->m_aBindPose.m_vPrevRot.y = 0i64;
  this->m_aBindPose.m_vPrevRot.w = 1.0;
}

void __fastcall OGLBone::finalize(OGLBone *this, unsigned __int64 a2)
{
  unsigned int *m_pusIndex; // rcx

  m_pusIndex = this->m_pusIndex;
  if ( m_pusIndex )
  {
    operator delete(m_pusIndex, a2);
    this->m_pusIndex = 0i64;
  }
  this->m_cName = 0i64;
  *(_QWORD *)&this->m_iNo = 0i64;
  this->m_sParents = -1;
  *(_QWORD *)&this->m_sChild = -1i64;
  *(_QWORD *)this->m_mOffset.m = 1065353216i64;
  this->m_mOffset.m[4] = 0.0;
  *(_QWORD *)&this->m_mOffset.m[8] = 0i64;
  *(_QWORD *)&this->m_mOffset.m[12] = 0i64;
  *(_QWORD *)&this->m_mOffset.m[5] = 1065353216i64;
  *(_QWORD *)&this->m_mOffset.m[2] = 0i64;
  *(_QWORD *)&this->m_mOffset.m[10] = 1065353216i64;
  this->m_mOffset.m[14] = 0.0;
  this->m_mOffset.m[7] = 0.0;
  this->m_mOffset.m[15] = 1.0;
  *(_QWORD *)&this->m_vTransform.x = 0i64;
  this->m_vTransform.z = 0.0;
  this->m_uiBoneInfoFlg = 0;
  this->m_iNodeLevel = -1;
}

unsigned __int8 __fastcall OGLBone::loadFloat(OGLBone *this, OGLInputStream *format, int boneNo)
{
  __int64 m_uiPoint; // rdx
  float v7; // xmm0_4
  float v8; // xmm1_4
  __int64 v9; // rdx
  float v10; // xmm1_4
  __int64 v11; // rdx
  float v12; // xmm1_4
  __int64 v13; // rdx
  float v14; // xmm1_4
  __int64 v15; // rdx
  float v16; // xmm1_4
  __int64 v17; // rdx
  float v18; // xmm1_4
  __int64 v19; // rdx
  float v20; // xmm1_4
  __int64 v21; // rdx
  float v22; // xmm1_4
  __int64 v23; // rdx
  float v24; // xmm1_4
  __int64 v25; // rdx
  float v26; // xmm1_4
  __int64 v27; // rdx
  float v28; // xmm1_4
  __int64 v29; // rdx
  float v30; // xmm1_4
  __int64 v31; // rdx
  float v32; // xmm1_4
  __int64 v33; // rdx
  float v34; // xmm1_4
  __int64 v35; // rdx
  float v36; // xmm1_4
  __int64 v37; // rdx
  float v38; // xmm1_4
  __int64 v39; // rdx
  float v40; // xmm1_4
  __int64 v41; // rdx
  float v42; // xmm1_4
  __int64 v43; // rdx
  __int64 v44; // r9
  int v45; // er8
  unsigned __int8 result; // al

  OGLBone::finalize(this, (unsigned __int64)format);
  m_uiPoint = format->m_uiPoint;
  v7 = 0.0;
  if ( format->m_uiSize > (unsigned int)m_uiPoint )
  {
    v8 = *(float *)&format->m_pucData[m_uiPoint];
    format->m_uiPoint = m_uiPoint + 4;
  }
  else
  {
    v8 = 0.0;
  }
  this->m_vTransform.x = v8;
  v9 = format->m_uiPoint;
  if ( format->m_uiSize > (unsigned int)v9 )
  {
    v10 = *(float *)&format->m_pucData[v9];
    format->m_uiPoint = v9 + 4;
  }
  else
  {
    v10 = 0.0;
  }
  this->m_vTransform.y = v10;
  v11 = format->m_uiPoint;
  if ( format->m_uiSize > (unsigned int)v11 )
  {
    v12 = *(float *)&format->m_pucData[v11];
    format->m_uiPoint = v11 + 4;
  }
  else
  {
    v12 = 0.0;
  }
  this->m_vTransform.z = v12;
  this->m_usIndexCount = 1;
  v13 = format->m_uiPoint;
  if ( format->m_uiSize > (unsigned int)v13 )
  {
    v14 = *(float *)&format->m_pucData[v13];
    format->m_uiPoint = v13 + 4;
  }
  else
  {
    v14 = 0.0;
  }
  this->m_mOffset.m[0] = v14;
  v15 = format->m_uiPoint;
  if ( format->m_uiSize > (unsigned int)v15 )
  {
    v16 = *(float *)&format->m_pucData[v15];
    format->m_uiPoint = v15 + 4;
  }
  else
  {
    v16 = 0.0;
  }
  this->m_mOffset.m[1] = v16;
  v17 = format->m_uiPoint;
  if ( format->m_uiSize > (unsigned int)v17 )
  {
    v18 = *(float *)&format->m_pucData[v17];
    format->m_uiPoint = v17 + 4;
  }
  else
  {
    v18 = 0.0;
  }
  this->m_mOffset.m[2] = v18;
  v19 = format->m_uiPoint;
  if ( format->m_uiSize > (unsigned int)v19 )
  {
    v20 = *(float *)&format->m_pucData[v19];
    format->m_uiPoint = v19 + 4;
  }
  else
  {
    v20 = 0.0;
  }
  this->m_mOffset.m[3] = v20;
  v21 = format->m_uiPoint;
  if ( format->m_uiSize > (unsigned int)v21 )
  {
    v22 = *(float *)&format->m_pucData[v21];
    format->m_uiPoint = v21 + 4;
  }
  else
  {
    v22 = 0.0;
  }
  this->m_mOffset.m[4] = v22;
  v23 = format->m_uiPoint;
  if ( format->m_uiSize > (unsigned int)v23 )
  {
    v24 = *(float *)&format->m_pucData[v23];
    format->m_uiPoint = v23 + 4;
  }
  else
  {
    v24 = 0.0;
  }
  this->m_mOffset.m[5] = v24;
  v25 = format->m_uiPoint;
  if ( format->m_uiSize > (unsigned int)v25 )
  {
    v26 = *(float *)&format->m_pucData[v25];
    format->m_uiPoint = v25 + 4;
  }
  else
  {
    v26 = 0.0;
  }
  this->m_mOffset.m[6] = v26;
  v27 = format->m_uiPoint;
  if ( format->m_uiSize > (unsigned int)v27 )
  {
    v28 = *(float *)&format->m_pucData[v27];
    format->m_uiPoint = v27 + 4;
  }
  else
  {
    v28 = 0.0;
  }
  this->m_mOffset.m[7] = v28;
  v29 = format->m_uiPoint;
  if ( format->m_uiSize > (unsigned int)v29 )
  {
    v30 = *(float *)&format->m_pucData[v29];
    format->m_uiPoint = v29 + 4;
  }
  else
  {
    v30 = 0.0;
  }
  this->m_mOffset.m[8] = v30;
  v31 = format->m_uiPoint;
  if ( format->m_uiSize > (unsigned int)v31 )
  {
    v32 = *(float *)&format->m_pucData[v31];
    format->m_uiPoint = v31 + 4;
  }
  else
  {
    v32 = 0.0;
  }
  this->m_mOffset.m[9] = v32;
  v33 = format->m_uiPoint;
  if ( format->m_uiSize > (unsigned int)v33 )
  {
    v34 = *(float *)&format->m_pucData[v33];
    format->m_uiPoint = v33 + 4;
  }
  else
  {
    v34 = 0.0;
  }
  this->m_mOffset.m[10] = v34;
  v35 = format->m_uiPoint;
  if ( format->m_uiSize > (unsigned int)v35 )
  {
    v36 = *(float *)&format->m_pucData[v35];
    format->m_uiPoint = v35 + 4;
  }
  else
  {
    v36 = 0.0;
  }
  this->m_mOffset.m[11] = v36;
  v37 = format->m_uiPoint;
  if ( format->m_uiSize > (unsigned int)v37 )
  {
    v38 = *(float *)&format->m_pucData[v37];
    format->m_uiPoint = v37 + 4;
  }
  else
  {
    v38 = 0.0;
  }
  this->m_mOffset.m[12] = v38;
  v39 = format->m_uiPoint;
  if ( format->m_uiSize > (unsigned int)v39 )
  {
    v40 = *(float *)&format->m_pucData[v39];
    format->m_uiPoint = v39 + 4;
  }
  else
  {
    v40 = 0.0;
  }
  this->m_mOffset.m[13] = v40;
  v41 = format->m_uiPoint;
  if ( format->m_uiSize > (unsigned int)v41 )
  {
    v42 = *(float *)&format->m_pucData[v41];
    format->m_uiPoint = v41 + 4;
  }
  else
  {
    v42 = 0.0;
  }
  this->m_mOffset.m[14] = v42;
  v43 = format->m_uiPoint;
  if ( format->m_uiSize > (unsigned int)v43 )
  {
    v7 = *(float *)&format->m_pucData[v43];
    format->m_uiPoint = v43 + 4;
  }
  this->m_mOffset.m[15] = v7;
  this->m_iNo = boneNo;
  v44 = format->m_uiPoint;
  if ( format->m_uiSize > (unsigned int)v44 )
  {
    v45 = format->m_pucData[v44] | ((format->m_pucData[(unsigned int)(v44 + 1)] | ((format->m_pucData[(unsigned int)(v44 + 2)] | (format->m_pucData[(unsigned int)(v44 + 3)] << 8)) << 8)) << 8);
    format->m_uiPoint = v44 + 4;
  }
  else
  {
    v45 = 0;
  }
  result = 1;
  this->m_sParents = v45;
  this->m_bNewFormat = 0;
  return result;
}

