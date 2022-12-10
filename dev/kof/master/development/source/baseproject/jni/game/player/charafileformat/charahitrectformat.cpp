#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.hpp"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
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
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglinputstream.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/cfile.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x1408A0364
bool CharaHitRect::CheckFileID(); // 0x140181E60
void CharaHitRect::InitData(); // 0x140181E70
long CharaHitRect::ReadFile(const char * fileName); // 0x140181EA0
long CharaHitRect::ReadBuffer(unsigned char * pBuffer, unsigned long size); // 0x140181FC0//decompilation failure at 1408A0364!
__int64 __fastcall CharaHitRect::ReadHitRect<CFile>(CharaHitRect *this, InputStreamBroker<CFile> *in)
{
  CFile *f; // rsi
  unsigned int v5; // edi
  AgFile *m_ptr; // rcx
  CFile *v7; // rsi
  AgFile *v8; // rcx
  unsigned __int64 iDataCount; // rax
  Collision::HitRect *v10; // rax
  Collision::HitRect *v12; // rax
  CFile *v13; // r14
  KOFApplication *v14; // rax
  AgPointer<KOFApplication> v15; // [rsp+20h] [rbp-18h] BYREF

  this->InitData(this);
  f = in->f;
  v5 = 8;
  m_ptr = in->f->m_file.m_ptr;
  if ( m_ptr )
  {
    m_ptr->read(m_ptr, (unsigned __int8 *)&this->fileHeader, 8u);
    f->m_iSeekPos += 8;
  }
  if ( this->CheckFileID(this) )
  {
    v7 = in->f;
    v8 = in->f->m_file.m_ptr;
    if ( v8 )
    {
      v8->read(v8, (unsigned __int8 *)&this->dataHeader, 8u);
      v7->m_iSeekPos += 8;
    }
    iDataCount = this->dataHeader.iDataCount;
    if ( (int)iDataCount >= 1 )
    {
      v12 = (Collision::HitRect *)operator new[](saturated_mul(iDataCount, 0x10ui64));
      this->pRect = v12;
      if ( !v12 )
      {
        v5 = 7;
        goto $READ_ERROR_10;
      }
      if ( (int)InputStreamBroker<CFile>::read(in, v12, 16, this->dataHeader.iDataCount) < 0 )
        goto $READ_ERROR_10;
    }
    else
    {
      this->dataHeader.iDataCount = 1;
      v10 = (Collision::HitRect *)operator new[](saturated_mul(1ui64, 0x10ui64));
      this->pRect = v10;
      if ( !v10 )
      {
        v5 = 7;
        goto $READ_ERROR_10;
      }
      v10->x = 0.0;
      this->pRect->y = 0.0;
      this->pRect->w = 1.0;
      this->pRect->h = 1.0;
    }
    InputStreamBroker<CFile>::close(in);
    return 1i64;
  }
  v5 = 4;
$READ_ERROR_10:
  v13 = in->f;
  v14 = (KOFApplication *)v13->m_file.m_ptr;
  if ( v14 )
  {
    v15.m_ref = v13->m_file.m_ref;
    v13->m_file.m_ref = 0i64;
    v13->m_file.m_ptr = 0i64;
    v15.m_ptr = v14;
    AgPointer<AgUser>::~AgPointer<AgUser>(&v15);
  }
  *(_QWORD *)&v13->m_iSeekPos = 0i64;
  this->InitData(this);
  return v5;
}

__int64 __fastcall CharaHitRect::ReadHitRect<OGLInputStream>(CharaHitRect *this, InputStreamBroker<OGLInputStream> *in)
{
  OGLInputStream *v4; // rcx
  __int64 m_uiPoint; // rax
  unsigned int v6; // esi
  OGLInputStream *v7; // rcx
  __int64 v8; // rax
  unsigned __int64 iDataCount; // rax
  Collision::HitRect *v10; // rax
  OGLInputStream *v11; // rcx
  Collision::HitRect *v13; // rax
  OGLInputStream *v14; // rcx

  this->InitData(this);
  v4 = in->in;
  m_uiPoint = in->in->m_uiPoint;
  if ( in->in->m_uiSize > (unsigned int)m_uiPoint )
  {
    this->fileHeader = *(CharaFileBase::FileHeader *)&v4->m_pucData[m_uiPoint];
    v4->m_uiPoint += 8;
  }
  if ( !this->CheckFileID(this) )
  {
    v6 = 4;
$READ_ERROR_11:
    v14 = in->in;
    v14->m_pucData = 0i64;
    *(_QWORD *)&v14->m_uiPoint = 0i64;
    this->InitData(this);
    return v6;
  }
  v7 = in->in;
  v8 = in->in->m_uiPoint;
  if ( in->in->m_uiSize > (unsigned int)v8 )
  {
    this->dataHeader = *(CharaHitRect::DataHeader *)&v7->m_pucData[v8];
    v7->m_uiPoint += 8;
  }
  iDataCount = this->dataHeader.iDataCount;
  v6 = 1;
  if ( (int)iDataCount >= 1 )
  {
    v13 = (Collision::HitRect *)operator new[](saturated_mul(iDataCount, 0x10ui64));
    this->pRect = v13;
    if ( !v13 )
      goto LABEL_9;
    if ( (int)InputStreamBroker<OGLInputStream>::read(in, v13, 16, this->dataHeader.iDataCount) < 0 )
    {
      v6 = 8;
      goto $READ_ERROR_11;
    }
  }
  else
  {
    this->dataHeader.iDataCount = 1;
    v10 = (Collision::HitRect *)operator new[](saturated_mul(1ui64, 0x10ui64));
    this->pRect = v10;
    if ( !v10 )
    {
LABEL_9:
      v6 = 7;
      goto $READ_ERROR_11;
    }
    v10->x = 0.0;
    this->pRect->y = 0.0;
    this->pRect->w = 1.0;
    this->pRect->h = 1.0;
  }
  v11 = in->in;
  v11->m_pucData = 0i64;
  *(_QWORD *)&v11->m_uiPoint = 0i64;
  return v6;
}

bool __fastcall CharaHitRect::CheckFileID(CharaHitRect *this)
{
  return *(_DWORD *)this->fileHeader.fileIdentifier == *(_DWORD *)CharaHitRect::FILE_IDENTIFIER;
}

void __fastcall CharaHitRect::InitData(CharaHitRect *this, unsigned __int64 a2)
{
  Collision::HitRect *pRect; // rcx

  this->fileHeader = 0i64;
  this->dataHeader = 0i64;
  pRect = this->pRect;
  if ( pRect )
  {
    operator delete(pRect, a2);
    this->pRect = 0i64;
  }
  this->iReadErrorID = 0;
}

bool __fastcall CharaActionData::IsReadSuccess(SoundGroupData *this)
{
  return this->iReadErrorID == 1;
}

__int64 __fastcall CharaHitRect::ReadBuffer(CharaHitRect *this, unsigned __int8 *pBuffer, unsigned int size)
{
  __int64 result; // rax
  unsigned __int8 *v5; // [rsp+28h] [rbp-20h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+38h] [rbp-10h]
  InputStreamBroker<OGLInputStream> in; // [rsp+50h] [rbp+8h] BYREF

  if ( pBuffer )
  {
    v5 = pBuffer;
    LODWORD(v6) = 0;
    HIDWORD(v6) = size;
    v7 = 0;
    in.in = (OGLInputStream *)&v5;
    this->iReadErrorID = CharaHitRect::ReadHitRect<OGLInputStream>(this, &in);
    v5 = 0i64;
    v6 = 0i64;
  }
  else
  {
    this->iReadErrorID = 2;
  }
  result = this->iReadErrorID;
  if ( (_DWORD)result != 1 )
  {
    _DummyLogging("CharaHitRect::%s READ_ERROR_ID::%s [buffer size:%udbytes]");
    return (unsigned int)this->iReadErrorID;
  }
  return result;
}

__int64 __fastcall CharaHitRect::ReadFile(CharaHitRect *this, const char *fileName)
{
  unsigned __int64 v4; // rdx
  AgFile *m_ptr; // rcx
  AgReferenceCount *m_ref; // rax
  unsigned int iReadErrorID; // ebx
  AgPointer<KOFApplication> v9; // [rsp+28h] [rbp-70h] BYREF
  CFile v10; // [rsp+40h] [rbp-58h] BYREF
  InputStreamBroker<CFile> v11; // [rsp+A0h] [rbp+8h] BYREF

  memset(&v10.pFileName, 0, 28);
  memset(&v10, 0, 28);
  v9 = 0i64;
  AgPointer<AgUser>::~AgPointer<AgUser>(&v9);
  if ( CFile::copen(&v10, fileName, 0, 1) )
  {
    v11.f = &v10;
    this->iReadErrorID = CharaHitRect::ReadHitRect<CFile>(this, &v11);
    m_ptr = v10.m_file.m_ptr;
    if ( v10.m_file.m_ptr )
    {
      m_ref = v10.m_file.m_ref;
      v10.m_file = 0i64;
      v9.m_ref = m_ref;
      v9.m_ptr = (KOFApplication *)m_ptr;
      AgPointer<AgUser>::~AgPointer<AgUser>(&v9);
    }
    *(_QWORD *)&v10.m_iSeekPos = 0i64;
  }
  else
  {
    this->iReadErrorID = 2;
  }
  if ( this->iReadErrorID != 1 )
    _DummyLogging(
      "CharaHitRect::%s READ_ERROR_ID::%s [File path:%s]",
      "CharaHitRect::ReadFile",
      CharaHitRect::READ_ERROR_ID_NAME[this->iReadErrorID],
      fileName);
  iReadErrorID = this->iReadErrorID;
  if ( v10.fNameIndex )
  {
    operator delete(v10.fNameIndex, v4);
    v10.fNameIndex = 0i64;
  }
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&v10);
  return iReadErrorID;
}

