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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglinputstream.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14088956E
void OGLMirror::finalize(); // 0x140063140
OGLMirror * OGLMirror::createMirror(unsigned char * buf, long size); // 0x1400631D0
unsigned char OGLMirror::loadOmirData(unsigned char * pBuffer, long iSize); // 0x140063260//decompilation failure at 14088956E!
OGLMirror *__fastcall OGLMirror::createMirror(unsigned __int8 *buf, int size)
{
  OGLMirror *v4; // rsi

  v4 = (OGLMirror *)operator new(0x20ui64);
  v4->m_MirrorData = 0i64;
  v4->m_MirrorCount = 0;
  v4->m_cBoneName = 0i64;
  v4->m_uiBoneCount = 0;
  if ( OGLMirror::loadOmirData(v4, buf, size) )
    return v4;
  OGLMirror::finalize(v4);
  operator delete(v4, 0x20ui64);
  return 0i64;
}

void __fastcall OGLMirror::finalize(OGLMirror *this, unsigned __int64 a2)
{
  OGLMirrorData *m_MirrorData; // rcx
  signed int v4; // esi
  __int64 v5; // rdi
  unsigned __int8 *v6; // rcx
  unsigned __int8 **m_cBoneName; // rcx

  m_MirrorData = this->m_MirrorData;
  if ( m_MirrorData )
  {
    operator delete(m_MirrorData, a2);
    this->m_MirrorData = 0i64;
  }
  v4 = 0;
  this->m_MirrorCount = 0;
  if ( (int)this->m_uiBoneCount > 0 )
  {
    v5 = 0i64;
    do
    {
      v6 = this->m_cBoneName[v5];
      if ( v6 )
      {
        operator delete(v6, a2);
        this->m_cBoneName[v5] = 0i64;
      }
      ++v4;
      ++v5;
    }
    while ( v4 < (signed int)this->m_uiBoneCount );
  }
  m_cBoneName = this->m_cBoneName;
  if ( m_cBoneName )
  {
    operator delete(m_cBoneName, a2);
    this->m_cBoneName = 0i64;
  }
  this->m_uiBoneCount = 0;
}

unsigned __int8 __fastcall OGLMirror::loadOmirData(OGLMirror *this, unsigned __int8 *pBuffer, int iSize)
{
  unsigned int v7; // edi
  int v8; // ecx
  unsigned int v9; // edx
  unsigned __int64 v10; // rax
  __int64 v11; // r12
  int v12; // er14
  unsigned __int8 *v13; // rax
  int v14; // er8
  __int64 v15; // r14
  OGLMirrorData *v16; // rax
  OGLMirrorData *i; // rcx
  int v18; // er9
  __int64 v19; // r8
  __int64 v20; // r10
  __int64 v21; // r11
  __int64 v22; // r14
  int v23; // edx
  int v24; // ecx
  int v25; // edx
  __int64 v26; // rax
  int v27; // edx
  int v28; // ecx
  int v29; // edx
  __int64 v30; // rax
  unsigned int v31; // edi
  signed int v32; // er12
  __int64 v33; // r14
  unsigned __int8 *v34; // rcx
  unsigned __int8 **m_cBoneName; // rcx
  int v36; // ecx
  __int64 v37; // r14
  OGLMirrorData *v38; // rax
  OGLMirrorData *j; // rcx
  int v40; // er9
  __int64 v41; // r8
  __int64 v42; // r10
  __int64 v43; // r11
  __int64 v44; // r14
  int v45; // edx
  int v46; // ecx
  int v47; // edx
  __int64 v48; // rax
  int v49; // edx
  int v50; // ecx
  int v51; // edx
  __int64 v52; // rax
  signed int v53; // [rsp+58h] [rbp+10h]

  if ( !pBuffer )
    return 0;
  if ( *pBuffer == 79 && pBuffer[1] == 77 )
  {
    v7 = 0;
    if ( iSize && (v7 = 2, (unsigned int)iSize > 2) )
    {
      v7 = 6;
      v8 = pBuffer[2] | ((pBuffer[3] | (*((unsigned __int16 *)pBuffer + 2) << 8)) << 8);
    }
    else
    {
      v8 = 0;
    }
    this->cFormatType = v8;
    if ( (v8 & 1) != 0 )
    {
      if ( iSize > v7 )
      {
        v9 = pBuffer[v7] | ((pBuffer[v7 + 1] | ((pBuffer[v7 + 2] | (pBuffer[v7 + 3] << 8)) << 8)) << 8);
        v7 += 4;
      }
      else
      {
        v9 = 0;
      }
      this->m_uiBoneCount = v9;
      v10 = 8i64 * v9;
      if ( !is_mul_ok(v9, 8ui64) )
        v10 = -1i64;
      this->m_cBoneName = (unsigned __int8 **)operator new[](v10);
      v53 = 0;
      if ( (int)this->m_uiBoneCount > 0 )
      {
        v11 = 0i64;
        do
        {
          if ( iSize > v7 )
          {
            v12 = pBuffer[v7] | ((pBuffer[v7 + 1] | ((pBuffer[v7 + 2] | (pBuffer[v7 + 3] << 8)) << 8)) << 8);
            v7 += 4;
          }
          else
          {
            v12 = 0;
          }
          this->m_cBoneName[v11] = (unsigned __int8 *)operator new[](v12 + 1);
          if ( iSize > v7 )
          {
            memmove(this->m_cBoneName[v11], &pBuffer[v7], v12);
            v7 += v12;
          }
          v13 = this->m_cBoneName[v11++];
          v13[v12] = 0;
          ++v53;
        }
        while ( v53 < (signed int)this->m_uiBoneCount );
      }
    }
    if ( iSize > v7 )
    {
      v14 = pBuffer[v7] | ((pBuffer[v7 + 1] | ((pBuffer[v7 + 2] | (pBuffer[v7 + 3] << 8)) << 8)) << 8);
      v7 += 4;
    }
    else
    {
      v14 = 0;
    }
    v15 = v14;
    this->m_MirrorCount = v14;
    v16 = (OGLMirrorData *)operator new[](saturated_mul(v14, 8ui64));
    if ( v16 )
    {
      for ( i = v16; v15; --v15 )
      {
        i->boneID = -1;
        i->mirrorType = 0;
        ++i;
      }
    }
    else
    {
      v16 = 0i64;
    }
    v18 = 0;
    this->m_MirrorData = v16;
    if ( this->m_MirrorCount > 0 )
    {
      v19 = 0i64;
      v20 = v7 + 1;
      v21 = v7 + 2;
      v22 = v7 + 3;
      do
      {
        if ( iSize > v7 )
        {
          v24 = pBuffer[v21];
          v21 = (unsigned int)(v21 + 4);
          v25 = pBuffer[v22];
          v22 = (unsigned int)(v22 + 4);
          v26 = v7;
          v7 += 4;
          v23 = pBuffer[v26] | ((pBuffer[v20] | ((v24 | (v25 << 8)) << 8)) << 8);
          v20 = (unsigned int)(v20 + 4);
        }
        else
        {
          v23 = 0;
        }
        this->m_MirrorData[v19].boneID = v23;
        if ( iSize > v7 )
        {
          v28 = pBuffer[v21];
          v21 = (unsigned int)(v21 + 4);
          v29 = pBuffer[v22];
          v22 = (unsigned int)(v22 + 4);
          v30 = v7;
          v7 += 4;
          v27 = pBuffer[v30] | ((pBuffer[v20] | ((v28 | (v29 << 8)) << 8)) << 8);
          v20 = (unsigned int)(v20 + 4);
        }
        else
        {
          v27 = 0;
        }
        ++v18;
        this->m_MirrorData[v19++].mirrorType = v27;
      }
      while ( v18 < this->m_MirrorCount );
    }
  }
  else
  {
    v31 = 0;
    v32 = 0;
    if ( (int)this->m_uiBoneCount > 0 )
    {
      v33 = 0i64;
      do
      {
        v34 = this->m_cBoneName[v33];
        if ( v34 )
        {
          operator delete(v34, (unsigned __int64)pBuffer);
          this->m_cBoneName[v33] = 0i64;
        }
        ++v32;
        ++v33;
      }
      while ( v32 < (signed int)this->m_uiBoneCount );
    }
    m_cBoneName = this->m_cBoneName;
    if ( m_cBoneName )
    {
      operator delete(m_cBoneName, (unsigned __int64)pBuffer);
      this->m_cBoneName = 0i64;
    }
    this->m_uiBoneCount = 0;
    if ( iSize )
    {
      v31 = 4;
      v36 = *pBuffer | ((pBuffer[1] | (*((unsigned __int16 *)pBuffer + 1) << 8)) << 8);
    }
    else
    {
      v36 = 0;
    }
    v37 = v36;
    this->m_MirrorCount = v36;
    v38 = (OGLMirrorData *)operator new[](saturated_mul(v36, 8ui64));
    if ( v38 )
    {
      for ( j = v38; v37; --v37 )
      {
        j->boneID = -1;
        j->mirrorType = 0;
        ++j;
      }
    }
    else
    {
      v38 = 0i64;
    }
    v40 = 0;
    this->m_MirrorData = v38;
    if ( this->m_MirrorCount > 0 )
    {
      v41 = 0i64;
      v42 = v31 + 1;
      v43 = v31 + 2;
      v44 = v31 + 3;
      do
      {
        if ( iSize > v31 )
        {
          v46 = pBuffer[v43];
          v43 = (unsigned int)(v43 + 4);
          v47 = pBuffer[v44];
          v44 = (unsigned int)(v44 + 4);
          v48 = v31;
          v31 += 4;
          v45 = pBuffer[v48] | ((pBuffer[v42] | ((v46 | (v47 << 8)) << 8)) << 8);
          v42 = (unsigned int)(v42 + 4);
        }
        else
        {
          v45 = 0;
        }
        this->m_MirrorData[v41].boneID = v45;
        if ( iSize > v31 )
        {
          v50 = pBuffer[v43];
          v43 = (unsigned int)(v43 + 4);
          v51 = pBuffer[v44];
          v44 = (unsigned int)(v44 + 4);
          v52 = v31;
          v31 += 4;
          v49 = pBuffer[v52] | ((pBuffer[v42] | ((v50 | (v51 << 8)) << 8)) << 8);
          v42 = (unsigned int)(v42 + 4);
        }
        else
        {
          v49 = 0;
        }
        ++v40;
        this->m_MirrorData[v41++].mirrorType = v49;
      }
      while ( v40 < this->m_MirrorCount );
    }
  }
  return 1;
}

