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
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.hpp"
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
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
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

std::piecewise_construct_t std::piecewise_construct; // 0x1408A040C
bool CommandData::CheckFileID(); // 0x1401851A0
void CommandData::InitData(); // 0x1401851B0
long CommandData::ReadFile(const char * fileName); // 0x140185310
long CommandData::ReadBuffer(unsigned char * pBuffer, unsigned long size); // 0x140185430//decompilation failure at 1408A040C!
__int64 __fastcall CommandData::ReadCommandData<CFile>(CommandData *this, InputStreamBroker<CFile> *in)
{
  CFile *f; // rdi
  AgFile *m_ptr; // rcx
  unsigned int v6; // edi
  CFile *v7; // rdi
  AgFile *v8; // rcx
  unsigned __int64 iCommandCount; // rax
  CommandData::Setting *v10; // rax
  unsigned __int64 iInputDataCount; // rax
  CommandData::Command *v12; // rax
  int v13; // er15
  __int64 v14; // r12
  CFile *v15; // rbp
  CommandData::Command *v16; // rsi
  unsigned __int64 iKeyCount; // rax
  CommandData::KeyData *v18; // rax
  CharaFileBase *v19; // rcx
  CFile *v20; // rsi
  AgFile *v21; // rax
  unsigned __int64 v23; // rcx
  CommandData::AiCommandInfo *v24; // rax
  int v25; // er9
  __int64 v26; // rdx
  __int64 v27; // r10
  __int64 iInputDataID; // rcx
  CommandData::Command *v29; // rcx
  int iChargeFrame; // er8
  int iKey; // ecx
  AgPointer<KOFApplication> v32; // [rsp+20h] [rbp-38h] BYREF

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
$READ_ERROR_17:
    v20 = in->f;
    v21 = in->f->m_file.m_ptr;
    if ( v21 )
    {
      v32.m_ref = v20->m_file.m_ref;
      v20->m_file.m_ref = 0i64;
      v20->m_file.m_ptr = 0i64;
      v32.m_ptr = (KOFApplication *)v21;
      AgPointer<AgUser>::~AgPointer<AgUser>(&v32);
    }
    *(_QWORD *)&v20->m_iSeekPos = 0i64;
    this->InitData(this);
    return v6;
  }
  v7 = in->f;
  v8 = in->f->m_file.m_ptr;
  if ( v8 )
  {
    v8->read(v8, (unsigned __int8 *)&this->dataHeader, 12u);
    v7->m_iSeekPos += 12;
  }
  iCommandCount = this->dataHeader.iCommandCount;
  if ( (int)iCommandCount > 0 )
  {
    v10 = (CommandData::Setting *)operator new[](saturated_mul(iCommandCount, 0x44ui64));
    this->pSetting = v10;
    if ( !v10 )
    {
LABEL_9:
      v6 = 6;
      goto $READ_ERROR_17;
    }
    if ( (int)InputStreamBroker<CFile>::read(in, v10, 68, this->dataHeader.iCommandCount) < 0 )
    {
      v6 = 7;
      goto $READ_ERROR_17;
    }
  }
  iInputDataCount = this->dataHeader.iInputDataCount;
  if ( (int)iInputDataCount > 0 )
  {
    v12 = (CommandData::Command *)operator new[](saturated_mul(iInputDataCount, 0x10ui64));
    this->pCmdData = v12;
    if ( !v12 )
    {
      v6 = 6;
      goto $READ_ERROR_17;
    }
    memset(v12, 0, 16i64 * this->dataHeader.iInputDataCount);
    v13 = 0;
    if ( this->dataHeader.iInputDataCount > 0 )
    {
      v14 = 0i64;
      while ( 1 )
      {
        v15 = in->f;
        v16 = &this->pCmdData[v14];
        v8 = in->f->m_file.m_ptr;
        if ( v8 )
        {
          v8->read(v8, (unsigned __int8 *)&this->pCmdData[v14], 4u);
          v15->m_iSeekPos += 4;
        }
        iKeyCount = v16->iKeyCount;
        if ( (int)iKeyCount > 0 )
        {
          v18 = (CommandData::KeyData *)operator new[](saturated_mul(iKeyCount, 0x18ui64));
          v16->pKey = v18;
          if ( !v18 )
            goto LABEL_9;
          if ( (int)InputStreamBroker<CFile>::read(in, v18, 24, v16->iKeyCount) < 0 )
            break;
        }
        ++v13;
        ++v14;
        if ( v13 >= this->dataHeader.iInputDataCount )
          goto LABEL_23;
      }
      v6 = 9;
      goto $READ_ERROR_17;
    }
  }
LABEL_23:
  if ( !CharaFileBase::ReadDataName<CFile>(
          (CharaFileBase *)v8,
          in,
          &this->pSettingNames,
          this->dataHeader.iCommandCount) )
  {
    v6 = 10;
    goto $READ_ERROR_17;
  }
  if ( !CharaFileBase::ReadDataName<CFile>(v19, in, &this->pCmdDataNames, this->dataHeader.iInputDataCount) )
  {
    v6 = 11;
    goto $READ_ERROR_17;
  }
  InputStreamBroker<CFile>::close(in);
  v23 = this->dataHeader.iCommandCount;
  if ( (int)v23 > 0 )
  {
    v24 = (CommandData::AiCommandInfo *)operator new[](saturated_mul(v23, 8ui64));
    this->pAiCmdInfo = v24;
    if ( v24 )
    {
      v25 = 0;
      if ( this->dataHeader.iCommandCount > 0 )
      {
        v26 = 0i64;
        v27 = 0i64;
        do
        {
          this->pAiCmdInfo[v26].iChargeTime = 0;
          this->pAiCmdInfo[v26].iChargeType = 0;
          iInputDataID = this->pSetting[v27].iInputDataID;
          if ( (int)iInputDataID >= 0 && (int)iInputDataID < this->dataHeader.iInputDataCount )
          {
            v29 = &this->pCmdData[iInputDataID];
            if ( v29->iKeyCount > 0 )
            {
              iChargeFrame = v29->pKey->iChargeFrame;
              if ( iChargeFrame > 1 )
              {
                this->pAiCmdInfo[v26].iChargeTime = iChargeFrame;
                if ( (v29->pKey->iKey & 0xF) != 0 )
                  this->pAiCmdInfo[v26].iChargeType = 3;
                if ( (v29->pKey->iKey & 0x90) != 0 )
                  this->pAiCmdInfo[v26].iChargeType = 1;
                iKey = v29->pKey->iKey;
                if ( (iKey & 0x60) != 0 || (iKey & 0x1FF0) == 16 )
                  this->pAiCmdInfo[v26].iChargeType = 2;
              }
            }
          }
          ++v25;
          ++v27;
          ++v26;
        }
        while ( v25 < this->dataHeader.iCommandCount );
      }
    }
  }
  return 1i64;
}

__int64 __fastcall CommandData::ReadCommandData<OGLInputStream>(
        CommandData *this,
        InputStreamBroker<OGLInputStream> *in)
{
  OGLInputStream *v4; // rcx
  __int64 m_uiPoint; // rax
  unsigned int v6; // edi
  OGLInputStream *v7; // rcx
  __int64 v8; // rax
  unsigned __int8 *v9; // rax
  unsigned __int64 iCommandCount; // rax
  CommandData::Setting *v11; // rax
  unsigned __int64 iInputDataCount; // rax
  CommandData::Command *v13; // rax
  int v14; // esi
  __int64 v15; // r15
  CommandData::Command *v16; // rdi
  __int64 v17; // rax
  unsigned __int64 iKeyCount; // rax
  CommandData::KeyData *v19; // rax
  CharaFileBase *v20; // rcx
  OGLInputStream *v21; // rcx
  OGLInputStream *v23; // rax
  unsigned __int64 v24; // rax
  CommandData::AiCommandInfo *v25; // rax
  int v26; // er9
  __int64 v27; // rdx
  __int64 v28; // r10
  __int64 iInputDataID; // rcx
  CommandData::Command *v30; // rcx
  int iChargeFrame; // er8
  int iKey; // ecx

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
$READ_ERROR_18:
    v21 = in->in;
    v21->m_pucData = 0i64;
    *(_QWORD *)&v21->m_uiPoint = 0i64;
    this->InitData(this);
    return v6;
  }
  v7 = in->in;
  v8 = in->in->m_uiPoint;
  if ( in->in->m_uiSize > (unsigned int)v8 )
  {
    v9 = &v7->m_pucData[v8];
    *(_QWORD *)&this->dataHeader.uiDataVersion = *(_QWORD *)v9;
    this->dataHeader.iInputDataCount = *((_DWORD *)v9 + 2);
    v7->m_uiPoint += 12;
  }
  iCommandCount = this->dataHeader.iCommandCount;
  if ( (int)iCommandCount > 0 )
  {
    v11 = (CommandData::Setting *)operator new[](saturated_mul(iCommandCount, 0x44ui64));
    this->pSetting = v11;
    if ( !v11 )
    {
LABEL_9:
      v6 = 6;
      goto $READ_ERROR_18;
    }
    if ( (int)InputStreamBroker<OGLInputStream>::read(in, v11, 68, this->dataHeader.iCommandCount) < 0 )
    {
      v6 = 7;
      goto $READ_ERROR_18;
    }
  }
  iInputDataCount = this->dataHeader.iInputDataCount;
  if ( (int)iInputDataCount > 0 )
  {
    v13 = (CommandData::Command *)operator new[](saturated_mul(iInputDataCount, 0x10ui64));
    this->pCmdData = v13;
    if ( !v13 )
      goto LABEL_9;
    memset(v13, 0, 16i64 * this->dataHeader.iInputDataCount);
    v14 = 0;
    if ( this->dataHeader.iInputDataCount > 0 )
    {
      v15 = 0i64;
      while ( 1 )
      {
        v7 = in->in;
        v16 = &this->pCmdData[v15];
        v17 = in->in->m_uiPoint;
        if ( in->in->m_uiSize > (unsigned int)v17 )
        {
          v16->iKeyCount = *(_DWORD *)&v7->m_pucData[v17];
          v7->m_uiPoint += 4;
        }
        iKeyCount = v16->iKeyCount;
        if ( (int)iKeyCount > 0 )
        {
          v19 = (CommandData::KeyData *)operator new[](saturated_mul(iKeyCount, 0x18ui64));
          v16->pKey = v19;
          if ( !v19 )
            goto LABEL_9;
          if ( (int)InputStreamBroker<OGLInputStream>::read(in, v19, 24, v16->iKeyCount) < 0 )
            break;
        }
        ++v14;
        ++v15;
        if ( v14 >= this->dataHeader.iInputDataCount )
          goto LABEL_22;
      }
      v6 = 9;
      goto $READ_ERROR_18;
    }
  }
LABEL_22:
  if ( !CharaFileBase::ReadDataName<OGLInputStream>(
          (CharaFileBase *)v7,
          in,
          &this->pSettingNames,
          this->dataHeader.iCommandCount) )
  {
    v6 = 10;
    goto $READ_ERROR_18;
  }
  if ( !CharaFileBase::ReadDataName<OGLInputStream>(v20, in, &this->pCmdDataNames, this->dataHeader.iInputDataCount) )
  {
    v6 = 11;
    goto $READ_ERROR_18;
  }
  v23 = in->in;
  v23->m_pucData = 0i64;
  *(_QWORD *)&v23->m_uiPoint = 0i64;
  v24 = this->dataHeader.iCommandCount;
  if ( (int)v24 > 0 )
  {
    v25 = (CommandData::AiCommandInfo *)operator new[](saturated_mul(v24, 8ui64));
    this->pAiCmdInfo = v25;
    if ( v25 )
    {
      v26 = 0;
      if ( this->dataHeader.iCommandCount > 0 )
      {
        v27 = 0i64;
        v28 = 0i64;
        do
        {
          this->pAiCmdInfo[v27].iChargeTime = 0;
          this->pAiCmdInfo[v27].iChargeType = 0;
          iInputDataID = this->pSetting[v28].iInputDataID;
          if ( (int)iInputDataID >= 0 && (int)iInputDataID < this->dataHeader.iInputDataCount )
          {
            v30 = &this->pCmdData[iInputDataID];
            if ( v30->iKeyCount > 0 )
            {
              iChargeFrame = v30->pKey->iChargeFrame;
              if ( iChargeFrame > 1 )
              {
                this->pAiCmdInfo[v27].iChargeTime = iChargeFrame;
                if ( (v30->pKey->iKey & 0xF) != 0 )
                  this->pAiCmdInfo[v27].iChargeType = 3;
                if ( (v30->pKey->iKey & 0x90) != 0 )
                  this->pAiCmdInfo[v27].iChargeType = 1;
                iKey = v30->pKey->iKey;
                if ( (iKey & 0x60) != 0 || (iKey & 0x1FF0) == 16 )
                  this->pAiCmdInfo[v27].iChargeType = 2;
              }
            }
          }
          ++v26;
          ++v28;
          ++v27;
        }
        while ( v26 < this->dataHeader.iCommandCount );
      }
    }
  }
  return 1i64;
}

bool __fastcall CommandData::CheckFileID(CommandData *this)
{
  return *(_DWORD *)this->fileHeader.fileIdentifier == *(_DWORD *)CommandData::FILE_IDENTIFIER;
}

void __fastcall CommandData::InitData(CommandData *this, unsigned __int64 a2)
{
  int v3; // esi
  __int64 v4; // rdi
  char *v5; // rcx
  char **pSettingNames; // rcx
  int v7; // esi
  __int64 v8; // rdi
  char *v9; // rcx
  char **pCmdDataNames; // rcx
  int v11; // esi
  __int64 v12; // rdi
  CommandData::KeyData *pKey; // rcx
  CommandData::Command *pCmdData; // rcx
  CommandData::AiCommandInfo *pAiCmdInfo; // rcx
  CommandData::Setting *pSetting; // rcx

  if ( this->pSettingNames )
  {
    v3 = 0;
    if ( this->dataHeader.iCommandCount > 0 )
    {
      v4 = 0i64;
      do
      {
        v5 = this->pSettingNames[v4];
        if ( v5 )
        {
          operator delete(v5, a2);
          this->pSettingNames[v4] = 0i64;
        }
        ++v3;
        ++v4;
      }
      while ( v3 < this->dataHeader.iCommandCount );
    }
    pSettingNames = this->pSettingNames;
    if ( pSettingNames )
    {
      operator delete(pSettingNames, a2);
      this->pSettingNames = 0i64;
    }
  }
  if ( this->pCmdDataNames )
  {
    v7 = 0;
    if ( this->dataHeader.iInputDataCount > 0 )
    {
      v8 = 0i64;
      do
      {
        v9 = this->pCmdDataNames[v8];
        if ( v9 )
        {
          operator delete(v9, a2);
          this->pCmdDataNames[v8] = 0i64;
        }
        ++v7;
        ++v8;
      }
      while ( v7 < this->dataHeader.iInputDataCount );
    }
    pCmdDataNames = this->pCmdDataNames;
    if ( pCmdDataNames )
    {
      operator delete(pCmdDataNames, a2);
      this->pCmdDataNames = 0i64;
    }
  }
  if ( this->pCmdData )
  {
    v11 = 0;
    if ( this->dataHeader.iInputDataCount > 0 )
    {
      v12 = 0i64;
      do
      {
        pKey = this->pCmdData[v12].pKey;
        if ( pKey )
        {
          operator delete(pKey, a2);
          this->pCmdData[v12].pKey = 0i64;
        }
        ++v11;
        ++v12;
      }
      while ( v11 < this->dataHeader.iInputDataCount );
    }
    pCmdData = this->pCmdData;
    if ( pCmdData )
    {
      operator delete(pCmdData, a2);
      this->pCmdData = 0i64;
    }
  }
  pAiCmdInfo = this->pAiCmdInfo;
  if ( pAiCmdInfo )
  {
    operator delete(pAiCmdInfo, a2);
    this->pAiCmdInfo = 0i64;
  }
  pSetting = this->pSetting;
  if ( pSetting )
  {
    operator delete(pSetting, a2);
    this->pSetting = 0i64;
  }
  this->fileHeader = 0i64;
  *(_QWORD *)&this->dataHeader.uiDataVersion = 0i64;
  this->dataHeader.iInputDataCount = 0;
  this->iReadErrorID = 0;
}

bool __fastcall CharaActionData::IsReadSuccess(SoundGroupData *this)
{
  return this->iReadErrorID == 1;
}

__int64 __fastcall CommandData::ReadBuffer(CommandData *this, unsigned __int8 *pBuffer, unsigned int size)
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
    this->iReadErrorID = CommandData::ReadCommandData<OGLInputStream>(this, &in);
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
    _DummyLogging("CommandData::%s READ_ERROR_ID::%s [buffer size:%udbytes]");
    return (unsigned int)this->iReadErrorID;
  }
  return result;
}

__int64 __fastcall CommandData::ReadFile(CommandData *this, const char *fileName)
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
    this->iReadErrorID = CommandData::ReadCommandData<CFile>(this, &v11);
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
      "CommandData::%s READ_ERROR_ID::%s [File path:%s]",
      "CommandData::ReadFile",
      CommandData::READ_ERROR_ID_NAME[this->iReadErrorID],
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

