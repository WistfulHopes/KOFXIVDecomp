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
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.hpp"
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
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglinputstream.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/cfile.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x1408A040D
bool CpuSequenceData::CheckFileID(); // 0x140185B70
void CpuSequenceData::InitData(); // 0x140185B80
long CpuSequenceData::ReadFile(const char * fileName); // 0x140185C80
long CpuSequenceData::ReadBuffer(unsigned char * pBuffer, unsigned long size); // 0x140185DA0//decompilation failure at 1408A040D!
__int64 __fastcall CpuSequenceData::ReadSequenceData<CFile>(CpuSequenceData *this, InputStreamBroker<CFile> *in)
{
  CFile *f; // rdi
  unsigned int v5; // er15
  AgFile *m_ptr; // rcx
  CFile *v7; // rdi
  AgFile *v8; // rcx
  unsigned __int64 iSeqSetCount; // rax
  CpuSequenceData::SequenceData *v10; // rax
  CFile *v11; // rdi
  CharaFileBase *pSeqData; // rcx
  int v13; // edi
  __int64 v14; // rsi
  CFile *v15; // rbp
  AgFile *v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  CpuSequenceData::SequenceData *v19; // rax
  CpuSequenceData::SequenceCommandData *pCommand; // rdx
  CFile *v21; // rdi
  AgFile *v22; // rax
  AgPointer<KOFApplication> v24; // [rsp+20h] [rbp-38h] BYREF

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
    iSeqSetCount = this->dataHeader.iSeqSetCount;
    if ( (int)iSeqSetCount >= 1 )
    {
      v10 = (CpuSequenceData::SequenceData *)operator new[](saturated_mul(iSeqSetCount, 0x58ui64));
      this->pSeqData = v10;
      if ( v10 )
      {
        memset(v10, 0, 88i64 * this->dataHeader.iSeqSetCount);
        v11 = in->f;
        pSeqData = (CharaFileBase *)in->f->m_file.m_ptr;
        if ( pSeqData )
        {
          ((void (__fastcall *)(CharaFileBase *, CpuSequenceData::CharaFeatureData *, __int64))pSeqData->GetFormatVersion)(
            pSeqData,
            &this->charaFeatureData,
            52i64);
          v11->m_iSeekPos += 52;
        }
        v13 = 0;
        if ( this->dataHeader.iSeqSetCount > 0 )
        {
          v14 = 0i64;
          do
          {
            v15 = in->f;
            v16 = in->f->m_file.m_ptr;
            if ( v16 )
            {
              v16->read(v16, (unsigned __int8 *)&this->pSeqData[v13], 76u);
              v15->m_iSeekPos += 76;
            }
            pSeqData = (CharaFileBase *)this->pSeqData;
            v17 = *(int *)((char *)&pSeqData->__vftable + v14 * 88);
            if ( (int)v17 <= 0 )
            {
              *(CharaFileBase::FileHeader *)((char *)&pSeqData[3].fileHeader + v14 * 88) = 0i64;
            }
            else
            {
              v18 = 40 * v17;
              if ( !is_mul_ok(*(int *)((char *)&pSeqData->__vftable + v14 * 88), 0x28ui64) )
                v18 = -1i64;
              this->pSeqData[v14].pCommand = (CpuSequenceData::SequenceCommandData *)operator new[](v18);
              v19 = this->pSeqData;
              pCommand = v19[v14].pCommand;
              if ( !pCommand )
                goto LABEL_10;
              if ( (int)InputStreamBroker<CFile>::read(in, pCommand, 40, v19[v14].header.iSeqCount) < 0 )
                goto $READ_ERROR_19;
            }
            ++v13;
            ++v14;
          }
          while ( v13 < this->dataHeader.iSeqSetCount );
        }
        if ( CharaFileBase::ReadDataName<CFile>(pSeqData, in, &this->pSequenceNames, this->dataHeader.iSeqSetCount) )
        {
          InputStreamBroker<CFile>::close(in);
          return 1i64;
        }
        v5 = 9;
      }
      else
      {
LABEL_10:
        v5 = 7;
      }
    }
    else
    {
      v5 = 6;
    }
  }
  else
  {
    v5 = 4;
  }
$READ_ERROR_19:
  v21 = in->f;
  v22 = in->f->m_file.m_ptr;
  if ( v22 )
  {
    v24.m_ref = v21->m_file.m_ref;
    v21->m_file.m_ref = 0i64;
    v21->m_file.m_ptr = 0i64;
    v24.m_ptr = (KOFApplication *)v22;
    AgPointer<AgUser>::~AgPointer<AgUser>(&v24);
  }
  *(_QWORD *)&v21->m_iSeekPos = 0i64;
  this->InitData(this);
  return v5;
}

__int64 __fastcall CpuSequenceData::ReadSequenceData<OGLInputStream>(
        CpuSequenceData *this,
        InputStreamBroker<OGLInputStream> *in)
{
  OGLInputStream *v4; // rcx
  __int64 m_uiPoint; // rax
  unsigned int v6; // edi
  OGLInputStream *v7; // rcx
  __int64 v8; // rax
  unsigned __int64 iSeqSetCount; // rax
  CpuSequenceData::SequenceData *v10; // rax
  CharaFileBase *pSeqData; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // esi
  __int64 v15; // rdi
  OGLInputStream *v16; // r8
  unsigned int v17; // eax
  unsigned __int8 *v18; // rdx
  CpuSequenceData::SequenceData *v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  CpuSequenceData::SequenceData *v22; // rax
  CpuSequenceData::SequenceCommandData *pCommand; // rdx
  OGLInputStream *v24; // rcx
  OGLInputStream *v26; // rax

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
    goto $READ_ERROR_20;
  }
  v7 = in->in;
  v8 = in->in->m_uiPoint;
  if ( in->in->m_uiSize > (unsigned int)v8 )
  {
    this->dataHeader = *(CpuSequenceData::DataHeader *)&v7->m_pucData[v8];
    v7->m_uiPoint += 8;
  }
  iSeqSetCount = this->dataHeader.iSeqSetCount;
  if ( (int)iSeqSetCount < 1 )
  {
    v6 = 6;
    goto $READ_ERROR_20;
  }
  v10 = (CpuSequenceData::SequenceData *)operator new[](saturated_mul(iSeqSetCount, 0x58ui64));
  this->pSeqData = v10;
  if ( !v10 )
  {
LABEL_10:
    v6 = 7;
    goto $READ_ERROR_20;
  }
  memset(v10, 0, 88i64 * this->dataHeader.iSeqSetCount);
  pSeqData = (CharaFileBase *)in->in;
  v12 = in->in->m_uiPoint;
  if ( in->in->m_uiSize > (unsigned int)v12 )
  {
    v13 = (__int64)pSeqData->__vftable + v12;
    *(_OWORD *)&this->charaFeatureData.fLikeRangeMin = *(_OWORD *)v13;
    *(_OWORD *)&this->charaFeatureData.uiThrowLevel = *(_OWORD *)(v13 + 16);
    *(_OWORD *)&this->charaFeatureData.iReserveArr[3] = *(_OWORD *)(v13 + 32);
    this->charaFeatureData.iReserveArr[7] = *(_DWORD *)(v13 + 48);
    *(_DWORD *)pSeqData->fileHeader.fileIdentifier += 52;
  }
  v14 = 0;
  if ( this->dataHeader.iSeqSetCount > 0 )
  {
    v15 = 0i64;
    do
    {
      v16 = in->in;
      v17 = in->in->m_uiPoint;
      if ( in->in->m_uiSize > v17 )
      {
        v18 = &v16->m_pucData[v17];
        v19 = &this->pSeqData[v14];
        *(_OWORD *)&v19->header.iSeqCount = *(_OWORD *)v18;
        *(_OWORD *)&v19->header.fWallRange = *((_OWORD *)v18 + 1);
        *(_OWORD *)&v19->header.iOptionFlag = *((_OWORD *)v18 + 2);
        *(_OWORD *)&v19->header.iReserve[3] = *((_OWORD *)v18 + 3);
        *(_QWORD *)&v19->header.iReserve[7] = *((_QWORD *)v18 + 8);
        v19->header.iReserve[9] = *((_DWORD *)v18 + 18);
        v16->m_uiPoint += 76;
      }
      pSeqData = (CharaFileBase *)this->pSeqData;
      v20 = *(int *)((char *)&pSeqData->__vftable + v15 * 88);
      if ( (int)v20 <= 0 )
      {
        *(CharaFileBase::FileHeader *)((char *)&pSeqData[3].fileHeader + v15 * 88) = 0i64;
      }
      else
      {
        v21 = 40 * v20;
        if ( !is_mul_ok(*(int *)((char *)&pSeqData->__vftable + v15 * 88), 0x28ui64) )
          v21 = -1i64;
        this->pSeqData[v15].pCommand = (CpuSequenceData::SequenceCommandData *)operator new[](v21);
        v22 = this->pSeqData;
        pCommand = v22[v15].pCommand;
        if ( !pCommand )
          goto LABEL_10;
        if ( (int)InputStreamBroker<OGLInputStream>::read(in, pCommand, 40, v22[v15].header.iSeqCount) < 0 )
        {
          v6 = 8;
          goto $READ_ERROR_20;
        }
      }
      ++v14;
      ++v15;
    }
    while ( v14 < this->dataHeader.iSeqSetCount );
  }
  if ( CharaFileBase::ReadDataName<OGLInputStream>(pSeqData, in, &this->pSequenceNames, this->dataHeader.iSeqSetCount) )
  {
    v26 = in->in;
    v26->m_pucData = 0i64;
    *(_QWORD *)&v26->m_uiPoint = 0i64;
    return 1i64;
  }
  else
  {
    v6 = 9;
$READ_ERROR_20:
    v24 = in->in;
    v24->m_pucData = 0i64;
    *(_QWORD *)&v24->m_uiPoint = 0i64;
    this->InitData(this);
    return v6;
  }
}

bool __fastcall CpuSequenceData::CheckFileID(CpuSequenceData *this)
{
  return *(_DWORD *)this->fileHeader.fileIdentifier == *(_DWORD *)CpuSequenceData::FILE_IDENTIFIER;
}

__int64 __fastcall CpuSequenceData::GetDataCount(CpuSequenceData *this)
{
  if ( this->IsReadSuccess(this) )
    return (unsigned int)this->dataHeader.iSeqSetCount;
  else
    return 0i64;
}

void __fastcall CpuSequenceData::InitData(CpuSequenceData *this, unsigned __int64 a2)
{
  int v3; // esi
  __int64 v4; // rdi
  char *v5; // rcx
  char **pSequenceNames; // rcx
  int v7; // esi
  __int64 v8; // rdi
  CpuSequenceData::SequenceCommandData *pCommand; // rcx
  CpuSequenceData::SequenceData *pSeqData; // rcx

  if ( this->pSequenceNames )
  {
    v3 = 0;
    if ( this->dataHeader.iSeqSetCount > 0 )
    {
      v4 = 0i64;
      do
      {
        v5 = this->pSequenceNames[v4];
        if ( v5 )
        {
          operator delete(v5, a2);
          this->pSequenceNames[v4] = 0i64;
        }
        ++v3;
        ++v4;
      }
      while ( v3 < this->dataHeader.iSeqSetCount );
    }
    pSequenceNames = this->pSequenceNames;
    if ( pSequenceNames )
    {
      operator delete(pSequenceNames, a2);
      this->pSequenceNames = 0i64;
    }
  }
  if ( this->pSeqData )
  {
    v7 = 0;
    if ( this->dataHeader.iSeqSetCount > 0 )
    {
      v8 = 0i64;
      do
      {
        pCommand = this->pSeqData[v8].pCommand;
        if ( pCommand )
        {
          operator delete(pCommand, a2);
          this->pSeqData[v8].pCommand = 0i64;
        }
        ++v7;
        ++v8;
      }
      while ( v7 < this->dataHeader.iSeqSetCount );
    }
    pSeqData = this->pSeqData;
    if ( pSeqData )
    {
      operator delete(pSeqData, a2);
      this->pSeqData = 0i64;
    }
  }
  this->fileHeader = 0i64;
  this->dataHeader = 0i64;
  *(_QWORD *)&this->charaFeatureData.fLikeRangeMin = 0i64;
  *(_QWORD *)&this->charaFeatureData.iChargeRangeFlag = 0i64;
  *(_QWORD *)&this->charaFeatureData.uiThrowLevel = 0i64;
  *(_QWORD *)&this->charaFeatureData.iReserveArr[1] = 0i64;
  *(_QWORD *)&this->charaFeatureData.iReserveArr[3] = 0i64;
  *(_QWORD *)&this->charaFeatureData.iReserveArr[5] = 0i64;
  this->charaFeatureData.iReserveArr[7] = 0;
  this->iReadErrorID = 0;
}

bool __fastcall CharaActionData::IsReadSuccess(SoundGroupData *this)
{
  return this->iReadErrorID == 1;
}

__int64 __fastcall CpuSequenceData::ReadBuffer(CpuSequenceData *this, unsigned __int8 *pBuffer, unsigned int size)
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
    this->iReadErrorID = CpuSequenceData::ReadSequenceData<OGLInputStream>(this, &in);
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
    _DummyLogging("CpuSequenceData::%s READ_ERROR_ID::%s [buffer size:%udbytes]");
    return (unsigned int)this->iReadErrorID;
  }
  return result;
}

__int64 __fastcall CpuSequenceData::ReadFile(CpuSequenceData *this, const char *fileName)
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
    this->iReadErrorID = CpuSequenceData::ReadSequenceData<CFile>(this, &v11);
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
    _DummyLogging("CpuSequenceData::%s READ_ERROR_ID::%s [File path:%s]");
  iReadErrorID = this->iReadErrorID;
  if ( v10.fNameIndex )
  {
    operator delete(v10.fNameIndex, v4);
    v10.fNameIndex = 0i64;
  }
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&v10);
  return iReadErrorID;
}

