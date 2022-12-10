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
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.hpp"
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
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
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

struct CharaVitalValue
{
	long vital; // 0x0
	long stun; // 0x4
	long guard; // 0x8
};
const CharaVitalValue charaVitalValue[183]; // 0x14089FFE0
std::piecewise_construct_t std::piecewise_construct; // 0x1408A02BC
CharaBaseStatus::~CharaBaseStatus(); // 0x14017F620
bool CharaBaseStatus::CheckFileID(); // 0x14017F690
void CharaBaseStatus::InitData(); // 0x14017F6A0
long CharaBaseStatus::ReadFile(const char * fileName); // 0x14017F6F0
long CharaBaseStatus::ReadBuffer(unsigned char * pBuffer, unsigned long size); // 0x14017F810
long CharaBaseStatus::GetCommonActionID(long iActionType); // 0x14017F8B0
long CharaBaseStatus::GetRivalDemoActionID(long iCharaID); // 0x14017F900
long CharaBaseStatus::GetRivalRoundStartAcitonID(long iCharaID); // 0x14017F970
long CharaBaseStatus::GetRivalRoundWinActionID(long iCharaID); // 0x14017F9E0
void CharaBaseStatus::SetCharacterVitalStatusOverwrite(long iCharaID); // 0x14017FA50
void CharaBaseStatus::ConvertVersion3to4(); // 0x14017FAA0
void CharaBaseStatus::ConvertVersion4to5(); // 0x14017FB20//decompilation failure at 14089FFE0!
//decompilation failure at 1408A02BC!
__int64 __fastcall CharaBaseStatus::ReadBaseStatus<CFile>(CharaBaseStatus *this, InputStreamBroker<CFile> *in)
{
  CFile *f; // rdi
  AgFile *m_ptr; // rcx
  unsigned int v6; // ebp
  CFile *v7; // rbp
  AgFile *v8; // rcx
  CFile *v9; // rbp
  AgFile *v10; // rcx
  CharaBaseStatus::CommonActionData *v11; // rax
  unsigned __int64 v12; // rdx
  CharaBaseStatus::CommonActionData *pCommonAct; // rcx
  CFile *v14; // rsi
  AgReferenceCount *m_ref; // rax
  AgPointer<KOFApplication> v17; // [rsp+20h] [rbp-18h] BYREF

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
$READ_ERROR_6:
    v14 = in->f;
    if ( v14->m_file.m_ptr )
    {
      m_ref = v14->m_file.m_ref;
      v17.m_ptr = (KOFApplication *)v14->m_file.m_ptr;
      v17.m_ref = m_ref;
      v14->m_file.m_ref = 0i64;
      v14->m_file.m_ptr = 0i64;
      AgPointer<AgUser>::~AgPointer<AgUser>(&v17);
    }
    *(_QWORD *)&v14->m_iSeekPos = 0i64;
    this->InitData(this);
    return v6;
  }
  v7 = in->f;
  v8 = in->f->m_file.m_ptr;
  if ( v8 )
  {
    v8->read(v8, (unsigned __int8 *)&this->dataHeader, 8u);
    v7->m_iSeekPos += 8;
  }
  v9 = in->f;
  v10 = in->f->m_file.m_ptr;
  if ( v10 )
  {
    v10->read(v10, (unsigned __int8 *)&this->status, 204u);
    v9->m_iSeekPos += 204;
  }
  v11 = (CharaBaseStatus::CommonActionData *)operator new[](saturated_mul(this->dataHeader.uiCommonActionCount, 4ui64));
  this->pCommonAct = v11;
  if ( !v11 )
  {
    v6 = 7;
    goto $READ_ERROR_6;
  }
  if ( (int)InputStreamBroker<CFile>::read(in, v11, 4, this->dataHeader.uiCommonActionCount) < 0 )
  {
    pCommonAct = this->pCommonAct;
    v6 = 8;
    if ( pCommonAct )
    {
      operator delete(pCommonAct, v12);
      this->pCommonAct = 0i64;
    }
    goto $READ_ERROR_6;
  }
  InputStreamBroker<CFile>::close(in);
  if ( this->pCommonAct->iActionID < 0 )
  {
    _DummyLogging("CharaBaseStatus::%s READ_ERROR_ID::%s [Ready action not found]");
    this->pCommonAct->iActionID = 0;
  }
  if ( this->status.fBoneScale <= 0.0 )
    this->status.fBoneScale = 1.0;
  if ( this->fileHeader.uiFormatVersion < 4 )
    CharaBaseStatus::ConvertVersion3to4(this);
  if ( this->fileHeader.uiFormatVersion < 5 )
    CharaBaseStatus::ConvertVersion4to5(this);
  if ( this->fileHeader.uiFormatVersion < 6 )
    *(_DWORD *)&this->status.iStandGuardRectID = 0;
  return 1i64;
}

__int64 __fastcall CharaBaseStatus::ReadBaseStatus<OGLInputStream>(
        CharaBaseStatus *this,
        InputStreamBroker<OGLInputStream> *in)
{
  OGLInputStream *v4; // rcx
  __int64 m_uiPoint; // rax
  unsigned int v6; // esi
  OGLInputStream *v7; // rcx
  __int64 v8; // rax
  OGLInputStream *v9; // r8
  unsigned int v10; // eax
  unsigned __int8 *v11; // rdx
  __int128 v12; // xmm0
  CharaBaseStatus::CommonActionData *v13; // rax
  unsigned __int64 v14; // rdx
  CharaBaseStatus::CommonActionData *pCommonAct; // rcx
  OGLInputStream *v16; // rax
  OGLInputStream *v18; // rax

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
$READ_ERROR_7:
    v16 = in->in;
    v16->m_pucData = 0i64;
    *(_QWORD *)&v16->m_uiPoint = 0i64;
    this->InitData(this);
    return v6;
  }
  v7 = in->in;
  v8 = in->in->m_uiPoint;
  if ( in->in->m_uiSize > (unsigned int)v8 )
  {
    this->dataHeader = *(CharaBaseStatus::DataHeader *)&v7->m_pucData[v8];
    v7->m_uiPoint += 8;
  }
  v9 = in->in;
  v10 = in->in->m_uiPoint;
  if ( in->in->m_uiSize > v10 )
  {
    v11 = &v9->m_pucData[v10];
    *(_OWORD *)&this->status.iVital = *(_OWORD *)v11;
    *(_OWORD *)&this->status.fBackMove = *((_OWORD *)v11 + 1);
    *(_OWORD *)&this->status.fHiPunchDist = *((_OWORD *)v11 + 2);
    *(_OWORD *)&this->status.fHeadAngleUp = *((_OWORD *)v11 + 3);
    *(_OWORD *)&this->status.leftEyeLimit.fLeft = *((_OWORD *)v11 + 4);
    *(_OWORD *)&this->status.rightEyeLimit.fLeft = *((_OWORD *)v11 + 5);
    *(_OWORD *)&this->status.demoActData[2].iRivalCharaID = *((_OWORD *)v11 + 6);
    v12 = *((_OWORD *)v11 + 7);
    v11 += 128;
    *(_OWORD *)&this->status.demoActData[6].iRivalCharaID = v12;
    *(_OWORD *)&this->status.roundStartActData[0].iRivalCharaID = *(_OWORD *)v11;
    *(_OWORD *)&this->status.roundStartActData[4].iRivalCharaID = *((_OWORD *)v11 + 1);
    *(_OWORD *)&this->status.roundWinActData[3].iRivalCharaID = *((_OWORD *)v11 + 2);
    *(_OWORD *)&this->status.iReserveData[2] = *((_OWORD *)v11 + 3);
    *(_QWORD *)&this->status.iReserveData[6] = *((_QWORD *)v11 + 8);
    this->status.iFlag = *((_DWORD *)v11 + 18);
    v9->m_uiPoint += 204;
  }
  v13 = (CharaBaseStatus::CommonActionData *)operator new[](saturated_mul(this->dataHeader.uiCommonActionCount, 4ui64));
  this->pCommonAct = v13;
  if ( !v13 )
  {
    v6 = 7;
    goto $READ_ERROR_7;
  }
  if ( (int)InputStreamBroker<OGLInputStream>::read(in, v13, 4, this->dataHeader.uiCommonActionCount) < 0 )
  {
    pCommonAct = this->pCommonAct;
    v6 = 8;
    if ( pCommonAct )
    {
      operator delete(pCommonAct, v14);
      this->pCommonAct = 0i64;
    }
    goto $READ_ERROR_7;
  }
  v18 = in->in;
  v18->m_pucData = 0i64;
  *(_QWORD *)&v18->m_uiPoint = 0i64;
  if ( this->pCommonAct->iActionID < 0 )
  {
    _DummyLogging("CharaBaseStatus::%s READ_ERROR_ID::%s [Ready action not found]");
    this->pCommonAct->iActionID = 0;
  }
  if ( this->status.fBoneScale <= 0.0 )
    this->status.fBoneScale = 1.0;
  if ( this->fileHeader.uiFormatVersion < 4 )
    CharaBaseStatus::ConvertVersion3to4(this);
  if ( this->fileHeader.uiFormatVersion < 5 )
    CharaBaseStatus::ConvertVersion4to5(this);
  if ( this->fileHeader.uiFormatVersion < 6 )
    *(_DWORD *)&this->status.iStandGuardRectID = 0;
  return 1i64;
}

void __fastcall CharaBaseStatus::~CharaBaseStatus(CharaBaseStatus *this, unsigned __int64 a2)
{
  CharaBaseStatus::CommonActionData *pCommonAct; // rcx

  this->__vftable = (CharaBaseStatus_vtbl *)&CharaBaseStatus::`vftable';
  pCommonAct = this->pCommonAct;
  if ( pCommonAct )
  {
    operator delete(pCommonAct, a2);
    this->pCommonAct = 0i64;
  }
  this->fileHeader = 0i64;
  this->dataHeader = 0i64;
  memset(&this->status, 0, sizeof(this->status));
  this->iReadErrorID = 0;
  this->__vftable = (CharaBaseStatus_vtbl *)&CharaFileBase::`vftable';
}

bool __fastcall CharaBaseStatus::CheckFileID(CharaBaseStatus *this)
{
  return *(_DWORD *)this->fileHeader.fileIdentifier == *(_DWORD *)CharaBaseStatus::FILE_IDENTIFIER;
}

void __fastcall CharaBaseStatus::ConvertVersion3to4(CharaBaseStatus *this)
{
  CharaBaseStatus::BattleDemoAction *demoActData; // rcx
  CharaBaseStatus::BattleDemoAction *i; // rax

  this->status.fHeadAngleUp = 32.0;
  this->status.fHeadAngleLow = 12.0;
  this->status.leftEyeLimit.fLeft = 15.0;
  this->status.leftEyeLimit.fRight = 15.0;
  this->status.leftEyeLimit.fLow = 8.0;
  this->status.leftEyeLimit.fUp = 8.0;
  this->status.rightEyeLimit.fLeft = 15.0;
  this->status.rightEyeLimit.fRight = 15.0;
  this->status.rightEyeLimit.fLow = 8.0;
  this->status.rightEyeLimit.fUp = 8.0;
  demoActData = this->status.demoActData;
  for ( i = demoActData + 10; demoActData != i; ++demoActData )
  {
    demoActData->iRivalCharaID = -1;
    demoActData->iActionID = 0;
  }
}

void __fastcall CharaBaseStatus::ConvertVersion4to5(CharaBaseStatus *this)
{
  CharaBaseStatus::BattleDemoAction *i; // rax
  CharaBaseStatus::BattleDemoAction *roundWinActData; // rax
  int *j; // rcx

  for ( i = this->status.roundStartActData; i != this->status.roundWinActData; ++i )
  {
    i->iRivalCharaID = -1;
    i->iActionID = 0;
  }
  roundWinActData = this->status.roundWinActData;
  for ( j = this->status.iReserveData; roundWinActData != (CharaBaseStatus::BattleDemoAction *)j; ++roundWinActData )
  {
    roundWinActData->iRivalCharaID = -1;
    roundWinActData->iActionID = 0;
  }
}

__int64 __fastcall CharaBaseStatus::GetCommonActionID(CharaBaseStatus *this, int iActionType)
{
  __int64 v3; // rdi

  v3 = iActionType;
  if ( this->CheckFileID(this) && (unsigned int)v3 < this->dataHeader.uiCommonActionCount )
    return (unsigned int)this->pCommonAct[v3].iActionID;
  else
    return 0xFFFFFFFFi64;
}

__int64 __fastcall CharaBaseStatus::GetRivalDemoActionID(CharaBaseStatus *this, int iCharaID)
{
  unsigned int v4; // ebx
  CharaBaseStatus::BattleDemoAction *demoActData; // rax

  v4 = -1;
  if ( this->CheckFileID(this) && iCharaID >= 0 )
  {
    demoActData = this->status.demoActData;
    if ( this->status.demoActData != this->status.roundStartActData )
    {
      while ( demoActData->iRivalCharaID != iCharaID )
      {
        if ( ++demoActData == this->status.roundStartActData )
          return 0xFFFFFFFFi64;
      }
      return (unsigned int)demoActData->iActionID;
    }
  }
  return v4;
}

__int64 __fastcall CharaBaseStatus::GetRivalRoundStartAcitonID(CharaBaseStatus *this, int iCharaID)
{
  unsigned int v4; // ebx
  CharaBaseStatus::BattleDemoAction *roundStartActData; // rax

  v4 = -1;
  if ( this->CheckFileID(this) && iCharaID >= 0 )
  {
    roundStartActData = this->status.roundStartActData;
    if ( this->status.roundStartActData != this->status.roundWinActData )
    {
      while ( roundStartActData->iRivalCharaID != iCharaID )
      {
        if ( ++roundStartActData == this->status.roundWinActData )
          return 0xFFFFFFFFi64;
      }
      return (unsigned int)roundStartActData->iActionID;
    }
  }
  return v4;
}

__int64 __fastcall CharaBaseStatus::GetRivalRoundWinActionID(CharaBaseStatus *this, int iCharaID)
{
  unsigned int v4; // ebx
  CharaBaseStatus::BattleDemoAction *roundWinActData; // rax

  v4 = -1;
  if ( this->CheckFileID(this) && iCharaID >= 0 )
  {
    roundWinActData = this->status.roundWinActData;
    if ( this->status.roundWinActData != (CharaBaseStatus::BattleDemoAction *)this->status.iReserveData )
    {
      while ( roundWinActData->iRivalCharaID != iCharaID )
      {
        if ( ++roundWinActData == (CharaBaseStatus::BattleDemoAction *)this->status.iReserveData )
          return 0xFFFFFFFFi64;
      }
      return (unsigned int)roundWinActData->iActionID;
    }
  }
  return v4;
}

void __fastcall CharaBaseStatus::InitData(CharaBaseStatus *this, unsigned __int64 a2)
{
  CharaBaseStatus::CommonActionData *pCommonAct; // rcx

  pCommonAct = this->pCommonAct;
  if ( pCommonAct )
  {
    operator delete(pCommonAct, a2);
    this->pCommonAct = 0i64;
  }
  this->fileHeader = 0i64;
  this->dataHeader = 0i64;
  memset(&this->status, 0, sizeof(this->status));
  this->iReadErrorID = 0;
}

bool __fastcall CharaActionData::IsReadSuccess(SoundGroupData *this)
{
  return this->iReadErrorID == 1;
}

__int64 __fastcall CharaBaseStatus::ReadBuffer(CharaBaseStatus *this, unsigned __int8 *pBuffer, unsigned int size)
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
    this->iReadErrorID = CharaBaseStatus::ReadBaseStatus<OGLInputStream>(this, &in);
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
    _DummyLogging("CharaBaseStatus::%s READ_ERROR_ID::%s [buffer size:%udbytes]");
    return (unsigned int)this->iReadErrorID;
  }
  return result;
}

__int64 __fastcall CharaBaseStatus::ReadFile(CharaBaseStatus *this, const char *fileName)
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
    this->iReadErrorID = CharaBaseStatus::ReadBaseStatus<CFile>(this, &v11);
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
      "CharaBaseStatus::%s READ_ERROR_ID::%s [File path:%s]",
      "CharaBaseStatus::ReadFile",
      CharaBaseStatus::READ_ERROR_ID_NAME[this->iReadErrorID],
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

void __fastcall CharaBaseStatus::SetCharacterVitalStatusOverwrite(CharaBaseStatus *this, int iCharaID)
{
  __int64 v3; // rdi

  v3 = iCharaID;
  if ( this->CheckFileID(this) && (unsigned int)v3 <= 0x3C )
  {
    this->status.iVital = charaVitalValue[v3].vital;
    this->status.iStun = charaVitalValue[v3].stun;
    this->status.iGuard = charaVitalValue[v3].guard;
  }
}

