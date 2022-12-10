#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
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
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.hpp"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
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
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
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
#include "dev/silverware/git/sdk/agreferenceinl.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
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
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.hpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglinputstream.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/cfile.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x1408A0367
bool ComboMissionData::CheckFileID(); // 0x1401845B0
void ComboMissionData::InitData(); // 0x1401845C0
long ComboMissionData::ReadFile(const char * fileName); // 0x1401847F0
long ComboMissionData::ReadBuffer(unsigned char * pBuffer, unsigned long size); // 0x140184910//decompilation failure at 1408A0367!
__int64 __fastcall ComboMissionData::ReadMissionData<CFile>(ComboMissionData *this, InputStreamBroker<CFile> *in)
{
  CFile *f; // rbx
  AgFile *m_ptr; // rcx
  unsigned int v6; // er12
  CFile *v7; // rbx
  AgFile *v8; // rcx
  unsigned __int64 iDataCount; // rax
  ComboMissionData::MissionData *v10; // rcx
  CharaFileBase *v11; // rcx
  unsigned __int8 *v12; // rsi
  CFile *v13; // rbx
  AgFile *v14; // rcx
  CFile *v15; // rbx
  AgFile *v16; // rcx
  void *v17; // rax
  void *v18; // rax
  int v19; // ebp
  __int64 v20; // r14
  int *v21; // rbx
  CFile *v22; // rdi
  AgFile *v23; // rcx
  void *v24; // rax
  int v25; // ebx
  __int64 v26; // rdi
  CharaFileBase *v27; // rcx
  int v28; // ebx
  __int64 v29; // rdi
  CFile *v30; // rbx
  AgFile *v31; // rsi
  AgReferenceCount *m_ref; // rdi
  int v33; // ebp
  CFile *v35; // rbx
  AgFile *v36; // rcx
  AgReferenceCount *v37; // rax
  AgPointer<KOFApplication> v38; // [rsp+28h] [rbp-50h] BYREF
  int n; // [rsp+80h] [rbp+8h] BYREF
  int v40; // [rsp+88h] [rbp+10h]
  CharaFileBase *v41; // [rsp+90h] [rbp+18h]

  this->InitData(this);
  f = in->f;
  m_ptr = in->f->m_file.m_ptr;
  if ( m_ptr )
  {
    m_ptr->read(m_ptr, (unsigned __int8 *)&this->fileHeader, 8u);
    f->m_iSeekPos += 8;
  }
  if ( !this->CheckFileID(this) )
  {
    v6 = 4;
    goto $READ_ERROR_15;
  }
  v7 = in->f;
  v8 = in->f->m_file.m_ptr;
  if ( v8 )
  {
    v8->read(v8, (unsigned __int8 *)&this->dataHeader, 8u);
    v7->m_iSeekPos += 8;
  }
  iDataCount = this->dataHeader.iDataCount;
  if ( (int)iDataCount < 1 )
  {
    v6 = 6;
    goto $READ_ERROR_15;
  }
  v10 = (ComboMissionData::MissionData *)operator new[](saturated_mul(iDataCount, 0x60ui64));
  this->pMissionData = v10;
  if ( !v10 )
    goto LABEL_10;
  memset(v10, 0, 96i64 * this->dataHeader.iDataCount);
  v40 = 0;
  if ( this->dataHeader.iDataCount > 0 )
  {
    v11 = 0i64;
    v41 = 0i64;
    while ( 1 )
    {
      v12 = (unsigned __int8 *)v11 + (unsigned __int64)this->pMissionData;
      v13 = in->f;
      v14 = in->f->m_file.m_ptr;
      if ( v14 )
      {
        v14->read(v14, v12, 64u);
        v13->m_iSeekPos += 64;
      }
      v15 = in->f;
      v16 = in->f->m_file.m_ptr;
      if ( v16 )
      {
        v16->read(v16, (unsigned __int8 *)&n, 4u);
        v15->m_iSeekPos += 4;
      }
      if ( n > 0 )
      {
        v17 = operator new[](n + 1);
        *((_QWORD *)v12 + 9) = v17;
        if ( !v17 )
          goto LABEL_10;
        if ( (int)InputStreamBroker<CFile>::read(in, v17, 1, n) < 0 )
        {
LABEL_31:
          v6 = 8;
          goto $READ_ERROR_15;
        }
        *(_BYTE *)(n + *((_QWORD *)v12 + 9)) = 0;
      }
      v18 = operator new[](saturated_mul(*(int *)v12, 0x10ui64));
      *((_QWORD *)v12 + 8) = v18;
      if ( !v18 )
        goto LABEL_10;
      memset(v18, 0, 16i64 * *(int *)v12);
      v19 = 0;
      if ( *(int *)v12 > 0 )
        break;
LABEL_29:
      ++v40;
      v11 = v41 + 4;
      v41 += 4;
      if ( v40 >= this->dataHeader.iDataCount )
        goto LABEL_32;
    }
    v20 = 0i64;
    while ( 1 )
    {
      v21 = (int *)(v20 + *((_QWORD *)v12 + 8));
      v22 = in->f;
      v23 = in->f->m_file.m_ptr;
      if ( v23 )
      {
        v23->read(v23, (unsigned __int8 *)(v20 + *((_QWORD *)v12 + 8)), 4u);
        v22->m_iSeekPos += 4;
      }
      v24 = operator new[](saturated_mul(*v21, 0x10ui64));
      *((_QWORD *)v21 + 1) = v24;
      if ( !v24 )
        break;
      memset(v24, 0, 16i64 * *v21);
      if ( (int)InputStreamBroker<CFile>::read(in, *((void **)v21 + 1), 16, *v21) < 0 )
        goto LABEL_31;
      ++v19;
      v20 += 16i64;
      if ( v19 >= *(_DWORD *)v12 )
        goto LABEL_29;
    }
LABEL_10:
    v6 = 7;
    goto $READ_ERROR_15;
  }
LABEL_32:
  if ( this->fileHeader.uiFormatVersion >= 2 )
  {
    v25 = 0;
    if ( this->dataHeader.iDataCount > 0 )
    {
      v26 = 0i64;
      while ( CharaFileBase::ReadDataName<CFile>(
                v11,
                in,
                &this->pMissionData[v26].pCommandStr,
                this->pMissionData[v26].settingData.iTermCount) )
      {
        ++v25;
        ++v26;
        if ( v25 >= this->dataHeader.iDataCount )
          goto LABEL_37;
      }
      goto LABEL_43;
    }
  }
LABEL_37:
  if ( !CharaFileBase::ReadDataName<CFile>(v11, in, &this->pMissionNames, this->dataHeader.iDataCount) )
  {
LABEL_43:
    v6 = 9;
$READ_ERROR_15:
    v30 = in->f;
    v31 = in->f->m_file.m_ptr;
    if ( v31 )
    {
      m_ref = v30->m_file.m_ref;
      v30->m_file.m_ref = 0i64;
      v30->m_file.m_ptr = 0i64;
      if ( m_ref )
      {
        v33 = 0;
        if ( !AgAtomicDecrement(&m_ref->m_strongCount) )
        {
          if ( !AgAtomicDecrement(&m_ref->m_weakCount) )
            v33 = 1;
          m_ref->m_data = 0i64;
          ((void (__fastcall *)(AgFile *, __int64))v31->~AgStream)(v31, 1i64);
          if ( v33 )
            AgReferenceCount::operator delete(m_ref);
        }
      }
    }
    *(_QWORD *)&v30->m_iSeekPos = 0i64;
    this->InitData(this);
    return v6;
  }
  v28 = 0;
  if ( this->dataHeader.iDataCount > 0 )
  {
    v29 = 0i64;
    while ( CharaFileBase::ReadDataName<CFile>(
              v27,
              in,
              &this->pMissionData[v29].pTermNames,
              this->pMissionData[v29].settingData.iTermCount) )
    {
      ++v28;
      ++v29;
      if ( v28 >= this->dataHeader.iDataCount )
        goto LABEL_52;
    }
    goto LABEL_43;
  }
LABEL_52:
  v35 = in->f;
  v36 = in->f->m_file.m_ptr;
  if ( v36 )
  {
    v37 = v35->m_file.m_ref;
    v35->m_file.m_ref = 0i64;
    v35->m_file.m_ptr = 0i64;
    v38.m_ref = v37;
    v38.m_ptr = (KOFApplication *)v36;
    AgPointer<AgUser>::~AgPointer<AgUser>(&v38);
  }
  *(_QWORD *)&v35->m_iSeekPos = 0i64;
  return 1i64;
}

__int64 __fastcall ComboMissionData::ReadMissionData<OGLInputStream>(
        ComboMissionData *this,
        InputStreamBroker<OGLInputStream> *in)
{
  OGLInputStream *v4; // rcx
  __int64 m_uiPoint; // rax
  unsigned int v6; // ebx
  OGLInputStream *v7; // rcx
  __int64 v8; // rax
  unsigned __int64 iDataCount; // rax
  ComboMissionData::MissionData *v10; // rax
  CharaFileBase *v11; // rcx
  int v12; // er12
  int v13; // er13
  int *v14; // rbx
  OGLInputStream *v15; // rcx
  __int64 v16; // rax
  unsigned __int8 *v17; // rax
  OGLInputStream *v18; // rcx
  unsigned int v19; // edx
  void *v20; // rax
  void *v21; // rax
  int v22; // esi
  __int64 v23; // r14
  OGLInputStream *v24; // rax
  int *v25; // rdi
  __int64 v26; // rcx
  void *v27; // rax
  int v28; // ebx
  __int64 v29; // rdi
  CharaFileBase *v30; // rcx
  int v31; // ebx
  __int64 v32; // rdi
  OGLInputStream *v33; // rcx
  __int64 result; // rax
  OGLInputStream *v35; // rcx
  CharaFileBase *n; // [rsp+50h] [rbp+8h]

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
    goto $READ_ERROR_16;
  }
  v7 = in->in;
  v8 = in->in->m_uiPoint;
  if ( in->in->m_uiSize > (unsigned int)v8 )
  {
    this->dataHeader = *(ComboMissionData::DataHeader *)&v7->m_pucData[v8];
    v7->m_uiPoint += 8;
  }
  iDataCount = this->dataHeader.iDataCount;
  if ( (int)iDataCount < 1 )
  {
    v6 = 6;
    goto $READ_ERROR_16;
  }
  v10 = (ComboMissionData::MissionData *)operator new[](saturated_mul(iDataCount, 0x60ui64));
  this->pMissionData = v10;
  if ( !v10 )
  {
LABEL_10:
    v6 = 7;
    goto $READ_ERROR_16;
  }
  memset(v10, 0, 96i64 * this->dataHeader.iDataCount);
  v12 = 0;
  if ( this->dataHeader.iDataCount > 0 )
  {
    v11 = 0i64;
    n = 0i64;
    v13 = 0;
    while ( 1 )
    {
      v14 = (int *)((char *)v11 + (unsigned __int64)this->pMissionData);
      v15 = in->in;
      v16 = in->in->m_uiPoint;
      if ( in->in->m_uiSize > (unsigned int)v16 )
      {
        v17 = &v15->m_pucData[v16];
        *(_OWORD *)v14 = *(_OWORD *)v17;
        *((_OWORD *)v14 + 1) = *((_OWORD *)v17 + 1);
        *((_OWORD *)v14 + 2) = *((_OWORD *)v17 + 2);
        *((_OWORD *)v14 + 3) = *((_OWORD *)v17 + 3);
        v15->m_uiPoint += 64;
      }
      v18 = in->in;
      v19 = in->in->m_uiPoint;
      if ( in->in->m_uiSize > v19 )
      {
        v13 = *(_DWORD *)&v18->m_pucData[v19];
        v18->m_uiPoint = v19 + 4;
      }
      if ( v13 > 0 )
      {
        v20 = operator new[](v13 + 1);
        *((_QWORD *)v14 + 9) = v20;
        if ( !v20 )
          goto LABEL_10;
        if ( (int)InputStreamBroker<OGLInputStream>::read(in, v20, 1, v13) < 0 )
        {
LABEL_41:
          v6 = 8;
          goto $READ_ERROR_16;
        }
        *(_BYTE *)(v13 + *((_QWORD *)v14 + 9)) = 0;
      }
      v21 = operator new[](saturated_mul(*v14, 0x10ui64));
      *((_QWORD *)v14 + 8) = v21;
      if ( !v21 )
        goto LABEL_10;
      memset(v21, 0, 16i64 * *v14);
      v22 = 0;
      if ( *v14 > 0 )
        break;
LABEL_29:
      ++v12;
      v11 = n + 4;
      n += 4;
      if ( v12 >= this->dataHeader.iDataCount )
        goto LABEL_30;
    }
    v23 = 0i64;
    while ( 1 )
    {
      v24 = in->in;
      v25 = (int *)(v23 + *((_QWORD *)v14 + 8));
      v26 = in->in->m_uiPoint;
      if ( in->in->m_uiSize > (unsigned int)v26 )
      {
        *v25 = *(_DWORD *)&v24->m_pucData[v26];
        v24->m_uiPoint += 4;
      }
      v27 = operator new[](saturated_mul(*v25, 0x10ui64));
      *((_QWORD *)v25 + 1) = v27;
      if ( !v27 )
        goto LABEL_10;
      memset(v27, 0, 16i64 * *v25);
      if ( (int)InputStreamBroker<OGLInputStream>::read(in, *((void **)v25 + 1), 16, *v25) < 0 )
        goto LABEL_41;
      ++v22;
      v23 += 16i64;
      if ( v22 >= *v14 )
        goto LABEL_29;
    }
  }
LABEL_30:
  if ( this->fileHeader.uiFormatVersion < 2 || (v28 = 0, this->dataHeader.iDataCount <= 0) )
  {
LABEL_35:
    if ( CharaFileBase::ReadDataName<OGLInputStream>(v11, in, &this->pMissionNames, this->dataHeader.iDataCount) )
    {
      v31 = 0;
      if ( this->dataHeader.iDataCount <= 0 )
      {
LABEL_40:
        v33 = in->in;
        result = 1i64;
        v33->m_pucData = 0i64;
        *(_QWORD *)&v33->m_uiPoint = 0i64;
        return result;
      }
      v32 = 0i64;
      while ( CharaFileBase::ReadDataName<OGLInputStream>(
                v30,
                in,
                &this->pMissionData[v32].pTermNames,
                this->pMissionData[v32].settingData.iTermCount) )
      {
        ++v31;
        ++v32;
        if ( v31 >= this->dataHeader.iDataCount )
          goto LABEL_40;
      }
    }
  }
  else
  {
    v29 = 0i64;
    while ( CharaFileBase::ReadDataName<OGLInputStream>(
              v11,
              in,
              &this->pMissionData[v29].pCommandStr,
              this->pMissionData[v29].settingData.iTermCount) )
    {
      ++v28;
      ++v29;
      if ( v28 >= this->dataHeader.iDataCount )
        goto LABEL_35;
    }
  }
  v6 = 9;
$READ_ERROR_16:
  v35 = in->in;
  v35->m_pucData = 0i64;
  *(_QWORD *)&v35->m_uiPoint = 0i64;
  this->InitData(this);
  return v6;
}

bool __fastcall ComboMissionData::CheckFileID(ComboMissionData *this)
{
  return *(_DWORD *)this->fileHeader.fileIdentifier == *(_DWORD *)ComboMissionData::FILE_IDENTIFIER;
}

__int64 __fastcall CpuSequenceData::GetDataCount(CpuSequenceData *this)
{
  if ( this->IsReadSuccess(this) )
    return (unsigned int)this->dataHeader.iSeqSetCount;
  else
    return 0i64;
}

void __fastcall ComboMissionData::InitData(ComboMissionData *this, unsigned __int64 a2)
{
  int v3; // esi
  __int64 v4; // rdi
  char *v5; // rcx
  char **pMissionNames; // rcx
  int v7; // er14
  __int64 v8; // rdi
  int v9; // ebp
  __int64 v10; // rsi
  ComboMissionData::ComboMissionTermParts *pTermParts; // rcx
  ComboMissionData::MissionData *pMissionData; // rax
  int v13; // ebp
  __int64 v14; // rsi
  char *v15; // rcx
  ComboMissionData::MissionData *v16; // rax
  int v17; // ebp
  __int64 v18; // rsi
  char *v19; // rcx
  ComboMissionData::ComboMissionTermData *pTermData; // rcx
  char *pSampleDataFilePath; // rcx
  char **pTermNames; // rcx
  char **pCommandStr; // rcx
  ComboMissionData::MissionData *v24; // rcx

  if ( this->pMissionNames )
  {
    v3 = 0;
    if ( this->dataHeader.iDataCount > 0 )
    {
      v4 = 0i64;
      do
      {
        v5 = this->pMissionNames[v4];
        if ( v5 )
        {
          operator delete(v5, a2);
          this->pMissionNames[v4] = 0i64;
        }
        ++v3;
        ++v4;
      }
      while ( v3 < this->dataHeader.iDataCount );
    }
    pMissionNames = this->pMissionNames;
    if ( pMissionNames )
    {
      operator delete(pMissionNames, a2);
      this->pMissionNames = 0i64;
    }
  }
  if ( this->pMissionData )
  {
    v7 = 0;
    if ( this->dataHeader.iDataCount > 0 )
    {
      v8 = 0i64;
      do
      {
        v9 = 0;
        if ( this->pMissionData[v8].settingData.iTermCount > 0 )
        {
          v10 = 0i64;
          do
          {
            pTermParts = this->pMissionData[v8].pTermData[v10].pTermParts;
            if ( pTermParts )
            {
              operator delete(pTermParts, a2);
              this->pMissionData[v8].pTermData[v10].pTermParts = 0i64;
            }
            ++v9;
            ++v10;
          }
          while ( v9 < this->pMissionData[v8].settingData.iTermCount );
        }
        pMissionData = this->pMissionData;
        if ( pMissionData[v8].pTermNames )
        {
          v13 = 0;
          if ( pMissionData[v8].settingData.iTermCount > 0 )
          {
            v14 = 0i64;
            do
            {
              v15 = this->pMissionData[v8].pTermNames[v14];
              if ( v15 )
              {
                operator delete(v15, a2);
                this->pMissionData[v8].pTermNames[v14] = 0i64;
              }
              ++v13;
              ++v14;
            }
            while ( v13 < this->pMissionData[v8].settingData.iTermCount );
          }
        }
        v16 = this->pMissionData;
        if ( v16[v8].pCommandStr )
        {
          v17 = 0;
          if ( v16[v8].settingData.iTermCount > 0 )
          {
            v18 = 0i64;
            do
            {
              v19 = this->pMissionData[v8].pCommandStr[v18];
              if ( v19 )
              {
                operator delete(v19, a2);
                this->pMissionData[v8].pCommandStr[v18] = 0i64;
              }
              ++v17;
              ++v18;
            }
            while ( v17 < this->pMissionData[v8].settingData.iTermCount );
          }
        }
        pTermData = this->pMissionData[v8].pTermData;
        if ( pTermData )
        {
          operator delete(pTermData, a2);
          this->pMissionData[v8].pTermData = 0i64;
        }
        pSampleDataFilePath = this->pMissionData[v8].pSampleDataFilePath;
        if ( pSampleDataFilePath )
        {
          operator delete(pSampleDataFilePath, a2);
          this->pMissionData[v8].pSampleDataFilePath = 0i64;
        }
        pTermNames = this->pMissionData[v8].pTermNames;
        if ( pTermNames )
        {
          operator delete(pTermNames, a2);
          this->pMissionData[v8].pTermNames = 0i64;
        }
        pCommandStr = this->pMissionData[v8].pCommandStr;
        if ( pCommandStr )
        {
          operator delete(pCommandStr, a2);
          this->pMissionData[v8].pCommandStr = 0i64;
        }
        ++v7;
        ++v8;
      }
      while ( v7 < this->dataHeader.iDataCount );
    }
    v24 = this->pMissionData;
    if ( v24 )
    {
      operator delete(v24, a2);
      this->pMissionData = 0i64;
    }
  }
  this->fileHeader = 0i64;
  this->dataHeader = 0i64;
  this->iReadErrorID = 0;
}

bool __fastcall CharaActionData::IsReadSuccess(SoundGroupData *this)
{
  return this->iReadErrorID == 1;
}

__int64 __fastcall ComboMissionData::ReadBuffer(ComboMissionData *this, unsigned __int8 *pBuffer, unsigned int size)
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
    this->iReadErrorID = ComboMissionData::ReadMissionData<OGLInputStream>(this, &in);
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
    _DummyLogging("ComboMissionData::%s READ_ERROR_ID::%s [buffer size:%udbytes]");
    return (unsigned int)this->iReadErrorID;
  }
  return result;
}

__int64 __fastcall ComboMissionData::ReadFile(ComboMissionData *this, const char *fileName)
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
  if ( (unsigned __int8)CFile::copen(&v10, fileName, 0, 1) )
  {
    v11.f = &v10;
    this->iReadErrorID = ComboMissionData::ReadMissionData<CFile>(this, &v11);
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
    _DummyLogging("ComboMissionData::%s READ_ERROR_ID::%s [File path:%s]");
  iReadErrorID = this->iReadErrorID;
  if ( v10.fNameIndex )
  {
    operator delete(v10.fNameIndex, v4);
    v10.fNameIndex = 0i64;
  }
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&v10);
  return iReadErrorID;
}

