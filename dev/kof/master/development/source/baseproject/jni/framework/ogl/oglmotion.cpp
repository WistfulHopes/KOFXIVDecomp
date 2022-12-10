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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmotion.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec2.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglinputstream.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmotiondata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/cfile.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x1408895D8
void OGLMotion::finalize(); // 0x1400781A0
OGLMotion * OGLMotion::createMotion(unsigned char * buf, long size); // 0x1400782A0
long OGLMotion::loadOtraData(unsigned char * buf, long size); // 0x140078330//decompilation failure at 1408895D8!
OGLMotion *__fastcall OGLMotion::createMotion(unsigned __int8 *buf, int size)
{
  OGLMotion *v4; // rsi

  v4 = (OGLMotion *)operator new(0x30ui64);
  v4->m_ppMotionData = 0i64;
  v4->m_usMotionCount = 0;
  v4->m_cBoneName = 0i64;
  v4->m_ucBoneCount = 0;
  v4->m_iBoneHash = 0i64;
  v4->m_ptr = 0i64;
  if ( (unsigned int)OGLMotion::loadOtraData(v4, buf, size) )
    return v4;
  OGLMotion::finalize(v4);
  operator delete(v4, 0x30ui64);
  return 0i64;
}

void __fastcall OGLMotion::finalize(OGLMotion *this, unsigned __int64 a2)
{
  signed int v3; // esi
  __int64 v4; // rdi
  OGLMotionData *v5; // rbp
  signed int v6; // esi
  __int64 v7; // rdi
  unsigned __int8 *v8; // rcx
  unsigned __int8 **m_cBoneName; // rcx
  unsigned __int64 *m_iBoneHash; // rcx

  v3 = 0;
  if ( (int)this->m_usMotionCount > 0 )
  {
    v4 = 0i64;
    do
    {
      v5 = this->m_ppMotionData[v4];
      if ( v5 )
      {
        OGLMotionData::finalize(this->m_ppMotionData[v4]);
        operator delete(v5, 0x30ui64);
        this->m_ppMotionData[v4] = 0i64;
      }
      ++v3;
      ++v4;
    }
    while ( v3 < (signed int)this->m_usMotionCount );
  }
  if ( this->m_ppMotionData )
  {
    operator delete(this->m_ppMotionData, a2);
    this->m_ppMotionData = 0i64;
  }
  if ( (this->cFormatType & 0x10) != 0 )
  {
    v6 = 0;
    if ( (int)this->m_ucBoneCount > 0 )
    {
      v7 = 0i64;
      do
      {
        v8 = this->m_cBoneName[v7];
        if ( v8 )
        {
          operator delete(v8, a2);
          this->m_cBoneName[v7] = 0i64;
        }
        ++v6;
        ++v7;
      }
      while ( v6 < (signed int)this->m_ucBoneCount );
    }
    m_cBoneName = this->m_cBoneName;
    if ( m_cBoneName )
    {
      operator delete(m_cBoneName, a2);
      this->m_cBoneName = 0i64;
    }
    this->m_ucBoneCount = 0;
  }
  m_iBoneHash = this->m_iBoneHash;
  this->m_usMotionCount = 0;
  if ( m_iBoneHash )
  {
    operator delete(m_iBoneHash, a2);
    this->m_iBoneHash = 0i64;
  }
}

__int64 __fastcall OGLMotion::loadOtraData(OGLMotion *this, unsigned __int8 *buf, int size)
{
  OGLMotion *v5; // r12
  __int64 v7; // rsi
  __int64 v8; // rbx
  int v9; // edx
  int v10; // er8
  unsigned int v11; // ebp
  unsigned int v12; // edx
  unsigned __int64 v13; // rax
  signed int v14; // ebp
  int v15; // edi
  OGLMotionData **v16; // rax
  __int64 v17; // rdi
  OGLMotionData *v18; // r13
  int v19; // edx
  int v20; // edx
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  bool v23; // cf
  unsigned __int64 v24; // rax
  unsigned __int64 *v25; // rax
  OGLAnimationBone *v26; // rdi
  int v27; // edx
  int v28; // edi
  unsigned __int8 *v29; // rax
  unsigned __int8 *m_cMotionName; // rax
  int v31; // er12
  __int64 v32; // rsi
  OGLAnimationBone *m_pAnimBone; // rbp
  int v34; // edx
  int v35; // edx
  int v36; // edx
  __int64 v37; // rdi
  _DWORD *v38; // rax
  OGLKeyTrans *v39; // rcx
  _DWORD *v40; // rax
  int v41; // edx
  int m_iKeyTransCount; // edi
  int v43; // edi
  __int64 v44; // rdi
  _DWORD *v45; // rax
  OGLKeyScale *v46; // rcx
  _DWORD *v47; // rax
  int v48; // edx
  int m_iKeyScaleCount; // edi
  int v50; // edi
  OGLKeyRot *v51; // rax
  int m_iKeyRotCount; // ecx
  int v53; // edi
  int v54; // edx
  unsigned __int64 v55; // rsi
  __int64 v56; // rax
  unsigned __int64 v57; // rax
  unsigned __int64 *v58; // rax
  OGLKeyUV *v59; // rdi
  int m_iKeyUvCount; // eax
  int v61; // er12
  __int64 v62; // rsi
  OGLKeyUV *m_pKeyUv; // rbp
  int v64; // edx
  int v65; // edx
  __int64 v66; // rdi
  char *v67; // rax
  _QWORD *v68; // rcx
  int m_iUvCount; // ecx
  int v70; // edi
  __int64 v71; // r11
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // r10
  int v75; // edx
  int v76; // edx
  float v77; // xmm0_4
  float v78; // xmm0_4
  float v79; // xmm0_4
  __int64 v81; // [rsp+30h] [rbp-58h]
  signed int v83; // [rsp+98h] [rbp+10h]
  _QWORD *v84; // [rsp+A8h] [rbp+20h]
  float v85; // [rsp+A8h] [rbp+20h]
  float v86; // [rsp+A8h] [rbp+20h]
  float v87; // [rsp+A8h] [rbp+20h]

  v5 = this;
  if ( !buf )
    return (unsigned int)-4;
  if ( this->m_ppMotionData )
    return (unsigned int)-2;
  if ( *buf != 83 || buf[1] != 77 )
    return (unsigned int)-3;
  v7 = 0i64;
  LODWORD(v8) = 0;
  if ( size && (LODWORD(v8) = 2, (unsigned int)size > 2) )
  {
    v9 = buf[2] | ((buf[3] | ((buf[4] | (buf[5] << 8)) << 8)) << 8);
    LODWORD(v8) = 6;
  }
  else
  {
    v9 = 0;
  }
  this->cFormatType = v9;
  if ( size > (unsigned int)v8 )
  {
    v10 = buf[(unsigned int)v8] | ((buf[(unsigned int)(v8 + 1)] | ((buf[(unsigned int)(v8 + 2)] | (buf[(unsigned int)(v8 + 3)] << 8)) << 8)) << 8);
    LODWORD(v8) = v8 + 4;
  }
  else
  {
    v10 = 0;
  }
  this->m_usMotionCount = v10;
  v11 = -1;
  if ( (v9 & 0x10) != 0 )
  {
    if ( size > (unsigned int)v8 )
    {
      v12 = buf[(unsigned int)v8] | ((buf[(unsigned int)(v8 + 1)] | ((buf[(unsigned int)(v8 + 2)] | (buf[(unsigned int)(v8 + 3)] << 8)) << 8)) << 8);
      LODWORD(v8) = v8 + 4;
    }
    else
    {
      v12 = 0;
    }
    this->m_ucBoneCount = v12;
    v13 = 8i64 * v12;
    if ( !is_mul_ok(v12, 8ui64) )
      v13 = -1i64;
    this->m_cBoneName = (unsigned __int8 **)operator new[](v13);
    v14 = 0;
    if ( (int)v5->m_ucBoneCount <= 0 )
    {
      v11 = -1;
    }
    else
    {
      do
      {
        if ( size > (unsigned int)v8 )
        {
          v15 = buf[(unsigned int)v8] | ((buf[(unsigned int)(v8 + 1)] | ((buf[(unsigned int)(v8 + 2)] | (buf[(unsigned int)(v8 + 3)] << 8)) << 8)) << 8);
          LODWORD(v8) = v8 + 4;
        }
        else
        {
          v15 = 0;
        }
        v5->m_cBoneName[v7] = (unsigned __int8 *)operator new[](v15 + 1);
        if ( size > (unsigned int)v8 )
        {
          memmove(v5->m_cBoneName[v7], &buf[(unsigned int)v8], v15);
          LODWORD(v8) = v15 + v8;
        }
        v5->m_cBoneName[v7][v15] = 0;
        ++v14;
        ++v7;
      }
      while ( v14 < (signed int)v5->m_ucBoneCount );
      v11 = -1;
    }
  }
  v16 = (OGLMotionData **)operator new[](saturated_mul(v5->m_usMotionCount, 8ui64));
  v5->m_ppMotionData = v16;
  if ( !v16 && v5->m_usMotionCount )
    return v11;
  v83 = 0;
  if ( (int)v5->m_usMotionCount > 0 )
  {
    v17 = 0i64;
    v81 = 0i64;
    while ( 1 )
    {
      v84 = operator new(0x30ui64);
      *(_DWORD *)v84 = 0;
      v84[1] = 0i64;
      v84[2] = 0i64;
      v84[3] = 0i64;
      v84[4] = 0i64;
      *((_DWORD *)v84 + 10) = 0;
      v5->m_ppMotionData[v17] = (OGLMotionData *)v84;
      v18 = v5->m_ppMotionData[v17];
      v18->m_uiInfoFlg = 0;
      if ( size > (unsigned int)v8 )
      {
        v19 = buf[(unsigned int)v8] | ((buf[(unsigned int)(v8 + 1)] | ((buf[(unsigned int)(v8 + 2)] | (buf[(unsigned int)(v8 + 3)] << 8)) << 8)) << 8);
        LODWORD(v8) = v8 + 4;
      }
      else
      {
        v19 = 0;
      }
      v18->m_fTotalFrame = (float)v19;
      if ( size > (unsigned int)v8 )
      {
        v20 = buf[(unsigned int)v8] | ((buf[(unsigned int)(v8 + 1)] | ((buf[(unsigned int)(v8 + 2)] | (buf[(unsigned int)(v8 + 3)] << 8)) << 8)) << 8);
        LODWORD(v8) = v8 + 4;
      }
      else
      {
        v20 = 0;
      }
      v18->m_iAnimBoneCount = v20;
      v21 = v20;
      v22 = 56i64 * v20;
      if ( !is_mul_ok(v20, 0x38ui64) )
        v22 = -1i64;
      v23 = __CFADD__(v22, 8i64);
      v24 = v22 + 8;
      if ( v23 )
        v24 = -1i64;
      v25 = (unsigned __int64 *)operator new[](v24);
      if ( v25 )
      {
        *v25 = v21;
        v26 = (OGLAnimationBone *)(v25 + 1);
        `eh vector constructor iterator'(
          v25 + 1,
          0x38ui64,
          v21,
          (void (__fastcall *)(void *))OGLAnimationBone::OGLAnimationBone,
          (void (__fastcall *)(void *))OGLAnimationBone::~OGLAnimationBone);
      }
      else
      {
        v26 = 0i64;
      }
      v18->m_pAnimBone = v26;
      if ( !v26 && v18->m_iAnimBoneCount > 0 )
        return v11;
      if ( (v5->cFormatType & 0x40) != 0 )
      {
        if ( size > (unsigned int)v8 )
        {
          v27 = buf[(unsigned int)v8] | ((buf[(unsigned int)(v8 + 1)] | ((buf[(unsigned int)(v8 + 2)] | (buf[(unsigned int)(v8 + 3)] << 8)) << 8)) << 8);
          LODWORD(v8) = v8 + 4;
        }
        else
        {
          v27 = 0;
        }
        v18->m_uiInfoFlg = v27;
      }
      if ( (v5->cFormatType & 0x20) != 0 )
      {
        if ( size > (unsigned int)v8 )
        {
          v28 = buf[(unsigned int)v8] | ((buf[(unsigned int)(v8 + 1)] | ((buf[(unsigned int)(v8 + 2)] | (buf[(unsigned int)(v8 + 3)] << 8)) << 8)) << 8);
          LODWORD(v8) = v8 + 4;
        }
        else
        {
          v28 = 0;
        }
        v29 = (unsigned __int8 *)operator new[](v28 + 1);
        v18->m_cMotionName = v29;
        if ( size > (unsigned int)v8 )
        {
          memmove(v29, &buf[(unsigned int)v8], v28);
          LODWORD(v8) = v28 + v8;
        }
        v18->m_cMotionName[v28] = 0;
        m_cMotionName = v18->m_cMotionName;
        if ( m_cMotionName[3] == 67 && m_cMotionName[4] == 77 )
          v18->m_uiInfoFlg |= 4u;
      }
      v31 = 0;
      if ( v18->m_iAnimBoneCount > 0 )
        break;
LABEL_107:
      if ( size > (unsigned int)v8 )
      {
        v54 = buf[(unsigned int)v8] | ((buf[(unsigned int)(v8 + 1)] | ((buf[(unsigned int)(v8 + 2)] | (buf[(unsigned int)(v8 + 3)] << 8)) << 8)) << 8);
        LODWORD(v8) = v8 + 4;
      }
      else
      {
        v54 = 0;
      }
      v18->m_iKeyUvCount = v54;
      v55 = v54;
      v56 = 16i64 * v54;
      if ( !is_mul_ok(v54, 0x10ui64) )
        v56 = -1i64;
      v23 = __CFADD__(v56, 8i64);
      v57 = v56 + 8;
      if ( v23 )
        v57 = -1i64;
      v58 = (unsigned __int64 *)operator new[](v57);
      if ( v58 )
      {
        *v58 = v55;
        v59 = (OGLKeyUV *)(v58 + 1);
        `eh vector constructor iterator'(
          v58 + 1,
          0x10ui64,
          v55,
          (void (__fastcall *)(void *))AgPointer<AgController>::AgPointer<AgController>,
          (void (__fastcall *)(void *))OGLKeyUV::~OGLKeyUV);
      }
      else
      {
        v59 = 0i64;
      }
      v18->m_pKeyUv = v59;
      m_iKeyUvCount = v18->m_iKeyUvCount;
      if ( m_iKeyUvCount > 0 && !v59 )
        return v11;
      v61 = 0;
      if ( m_iKeyUvCount > 0 )
      {
        v62 = 0i64;
        while ( 1 )
        {
          m_pKeyUv = v18->m_pKeyUv;
          if ( size > (unsigned int)v8 )
          {
            v64 = buf[(unsigned int)v8] | ((buf[(unsigned int)(v8 + 1)] | ((buf[(unsigned int)(v8 + 2)] | (buf[(unsigned int)(v8 + 3)] << 8)) << 8)) << 8);
            LODWORD(v8) = v8 + 4;
          }
          else
          {
            v64 = 0;
          }
          m_pKeyUv[v62].m_fFrame = (float)v64;
          if ( size > (unsigned int)v8 )
          {
            v65 = buf[(unsigned int)v8] | ((buf[(unsigned int)(v8 + 1)] | ((buf[(unsigned int)(v8 + 2)] | (buf[(unsigned int)(v8 + 3)] << 8)) << 8)) << 8);
            LODWORD(v8) = v8 + 4;
          }
          else
          {
            v65 = 0;
          }
          m_pKeyUv[v62].m_iUvCount = v65;
          v66 = v65;
          v67 = (char *)operator new[](saturated_mul(v65, 0x14ui64));
          if ( v67 && v66 )
          {
            v68 = v67 + 12;
            do
            {
              *v68 = 0i64;
              v68 = (_QWORD *)((char *)v68 + 20);
              --v66;
            }
            while ( v66 );
          }
          m_pKeyUv[v62].m_pUvData = (OGLUVData *)v67;
          m_iUvCount = m_pKeyUv[v62].m_iUvCount;
          if ( m_iUvCount > 0 && !v67 )
            return (unsigned int)-1;
          v70 = 0;
          if ( m_iUvCount > 0 )
          {
            v71 = 0i64;
            v72 = (unsigned int)(v8 + 1);
            v73 = (unsigned int)(v8 + 2);
            v74 = (unsigned int)(v8 + 3);
            do
            {
              if ( size > (unsigned int)v8 )
              {
                v75 = buf[(unsigned int)v8] | ((buf[v72] | ((buf[v73] | (buf[v74] << 8)) << 8)) << 8);
                LODWORD(v8) = v8 + 4;
                v74 = (unsigned int)(v74 + 4);
                v73 = (unsigned int)(v73 + 4);
                v72 = (unsigned int)(v72 + 4);
              }
              else
              {
                v75 = 0;
              }
              m_pKeyUv[v62].m_pUvData[v71].Material = v75;
              if ( size > (unsigned int)v8 )
              {
                v76 = buf[(unsigned int)v8] | ((buf[v72] | ((buf[v73] | (buf[v74] << 8)) << 8)) << 8);
                LODWORD(v8) = v8 + 4;
                v74 = (unsigned int)(v74 + 4);
                v73 = (unsigned int)(v73 + 4);
                v72 = (unsigned int)(v72 + 4);
              }
              else
              {
                v76 = 0;
              }
              m_pKeyUv[v62].m_pUvData[v71].Index = v76;
              if ( size > (unsigned int)v8 )
              {
                v85 = *(float *)&buf[(unsigned int)v8];
                LODWORD(v8) = v8 + 4;
                v74 = (unsigned int)(v74 + 4);
                v73 = (unsigned int)(v73 + 4);
                v72 = (unsigned int)(v72 + 4);
                v77 = v85;
              }
              else
              {
                v77 = 0.0;
              }
              m_pKeyUv[v62].m_pUvData[v71].uv.x = v77;
              if ( size > (unsigned int)v8 )
              {
                v86 = *(float *)&buf[(unsigned int)v8];
                LODWORD(v8) = v8 + 4;
                v74 = (unsigned int)(v74 + 4);
                v73 = (unsigned int)(v73 + 4);
                v72 = (unsigned int)(v72 + 4);
                v78 = v86;
              }
              else
              {
                v78 = 0.0;
              }
              m_pKeyUv[v62].m_pUvData[v71].uv.y = v78;
              if ( size > (unsigned int)v8 )
              {
                v87 = *(float *)&buf[(unsigned int)v8];
                LODWORD(v8) = v8 + 4;
                v74 = (unsigned int)(v74 + 4);
                v73 = (unsigned int)(v73 + 4);
                v72 = (unsigned int)(v72 + 4);
                v79 = v87;
              }
              else
              {
                v79 = 0.0;
              }
              m_pKeyUv[v62].m_pUvData[v71].Scal = v79;
              ++v70;
              ++v71;
            }
            while ( v70 < m_pKeyUv[v62].m_iUvCount );
          }
          ++v61;
          ++v62;
          if ( v61 >= v18->m_iKeyUvCount )
          {
            v11 = -1;
            break;
          }
        }
      }
      ++v83;
      v17 = ++v81;
      v5 = this;
      if ( v83 >= (signed int)this->m_usMotionCount )
        return 1i64;
    }
    v32 = 0i64;
    while ( 1 )
    {
      m_pAnimBone = v18->m_pAnimBone;
      if ( (this->cFormatType & 0x40) != 0 )
      {
        if ( size > (unsigned int)v8 )
        {
          v34 = buf[(unsigned int)v8] | ((buf[(unsigned int)(v8 + 1)] | ((buf[(unsigned int)(v8 + 2)] | (buf[(unsigned int)(v8 + 3)] << 8)) << 8)) << 8);
          LODWORD(v8) = v8 + 4;
        }
        else
        {
          v34 = 0;
        }
        m_pAnimBone[v32].m_uiInfoFlg = v34;
      }
      if ( size > (unsigned int)v8 )
      {
        v35 = buf[(unsigned int)v8] | ((buf[(unsigned int)(v8 + 1)] | ((buf[(unsigned int)(v8 + 2)] | (buf[(unsigned int)(v8 + 3)] << 8)) << 8)) << 8);
        LODWORD(v8) = v8 + 4;
      }
      else
      {
        v35 = 0;
      }
      m_pAnimBone[v32].m_iBoneID = v35;
      if ( size > (unsigned int)v8 )
      {
        v36 = buf[(unsigned int)v8] | ((buf[(unsigned int)(v8 + 1)] | ((buf[(unsigned int)(v8 + 2)] | (buf[(unsigned int)(v8 + 3)] << 8)) << 8)) << 8);
        LODWORD(v8) = v8 + 4;
      }
      else
      {
        v36 = 0;
      }
      m_pAnimBone[v32].m_iKeyTransCount = v36;
      v37 = v36;
      v38 = operator new[](saturated_mul(v36, 0x10ui64));
      v39 = (OGLKeyTrans *)v38;
      if ( v38 )
      {
        if ( v37 )
        {
          v40 = v38 + 3;
          v41 = 0;
          do
          {
            *((_QWORD *)v40 - 1) = 0i64;
            *v40 = 0;
            v40 += 4;
            --v37;
          }
          while ( v37 );
        }
        else
        {
          v41 = 0;
        }
      }
      else
      {
        v41 = 0;
        v39 = 0i64;
      }
      m_pAnimBone[v32].m_pKeyTrans = v39;
      m_iKeyTransCount = m_pAnimBone[v32].m_iKeyTransCount;
      if ( m_iKeyTransCount > 0 && !v39 )
        break;
      v43 = 16 * m_iKeyTransCount;
      if ( size > (unsigned int)v8 )
      {
        memmove(v39, &buf[(unsigned int)v8], v43);
        v8 = (unsigned int)(v43 + v8);
        if ( size <= (unsigned int)v8 )
        {
          v41 = 0;
        }
        else
        {
          v41 = buf[v8] | ((buf[(unsigned int)(v8 + 1)] | ((buf[(unsigned int)(v8 + 2)] | (buf[(unsigned int)(v8 + 3)] << 8)) << 8)) << 8);
          LODWORD(v8) = v8 + 4;
        }
      }
      m_pAnimBone[v32].m_iKeyScaleCount = v41;
      v44 = v41;
      v45 = operator new[](saturated_mul(v41, 0x10ui64));
      v46 = (OGLKeyScale *)v45;
      if ( v45 )
      {
        if ( v44 )
        {
          v47 = v45 + 3;
          v48 = 0;
          do
          {
            *((_QWORD *)v47 - 1) = 0i64;
            *v47 = 0;
            v47 += 4;
            --v44;
          }
          while ( v44 );
        }
        else
        {
          v48 = 0;
        }
      }
      else
      {
        v48 = 0;
        v46 = 0i64;
      }
      m_pAnimBone[v32].m_pKeyScale = v46;
      m_iKeyScaleCount = m_pAnimBone[v32].m_iKeyScaleCount;
      if ( m_iKeyScaleCount > 0 && !v46 )
        break;
      v50 = 16 * m_iKeyScaleCount;
      if ( size > (unsigned int)v8 )
      {
        memmove(v46, &buf[(unsigned int)v8], v50);
        v8 = (unsigned int)(v50 + v8);
        if ( size <= (unsigned int)v8 )
        {
          v48 = 0;
        }
        else
        {
          v48 = buf[v8] | ((buf[(unsigned int)(v8 + 1)] | ((buf[(unsigned int)(v8 + 2)] | (buf[(unsigned int)(v8 + 3)] << 8)) << 8)) << 8);
          LODWORD(v8) = v8 + 4;
        }
      }
      m_pAnimBone[v32].m_iKeyRotCount = v48;
      v51 = (OGLKeyRot *)operator new[](saturated_mul(v48, 0x14ui64));
      m_pAnimBone[v32].m_pKeyRot = v51;
      m_iKeyRotCount = m_pAnimBone[v32].m_iKeyRotCount;
      if ( m_iKeyRotCount > 0 && !v51 )
        break;
      v53 = 20 * m_iKeyRotCount;
      if ( size > (unsigned int)v8 )
      {
        memmove(v51, &buf[(unsigned int)v8], v53);
        LODWORD(v8) = v53 + v8;
      }
      ++v31;
      ++v32;
      if ( v31 >= v18->m_iAnimBoneCount )
      {
        v11 = -1;
        goto LABEL_107;
      }
    }
    return (unsigned int)-1;
  }
  return 1i64;
}

