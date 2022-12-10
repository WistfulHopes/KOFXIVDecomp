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
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.hpp"
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
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
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

std::piecewise_construct_t std::piecewise_construct; // 0x14089FE87
bool CharaAttackData::CheckFileID(); // 0x14017ECA0
void CharaAttackData::InitData(); // 0x14017ECB0
long CharaAttackData::ReadFile(const char * fileName); // 0x14017ED50
long CharaAttackData::ReadBuffer(unsigned char * pBuffer, unsigned long size); // 0x14017EE90
void CharaAttackData::ConvertVersion3to4(const CharaAttackData::AttackData_version3 & ver3, CharaAttackData::AttackData & dst); // 0x14017EF30
void CharaAttackData::ConvertVersion4to5(CharaAttackData::AttackData & dst); // 0x14017F0C0//decompilation failure at 14089FE87!
__int64 __fastcall CharaAttackData::ReadAttackData<CFile>(CharaAttackData *this, InputStreamBroker<CFile> *in)
{
  CFile *f; // rsi
  unsigned int v5; // edi
  AgFile *m_ptr; // rcx
  CFile *v7; // rsi
  AgFile *v8; // rcx
  unsigned __int64 iDataCount; // rax
  CharaAttackData::AttackData *v10; // rax
  CharaAttackData *v11; // rcx
  int j; // edi
  CFile *v13; // rsi
  AgFile *v14; // rcx
  int i; // er11
  int v16; // er11
  CFile *v17; // rsi
  AgFile *v18; // rax
  AgPointer<KOFApplication> v20; // [rsp+20h] [rbp-148h] BYREF
  CharaAttackData::AttackData_version3 ver3; // [rsp+30h] [rbp-138h] BYREF

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
      v10 = (CharaAttackData::AttackData *)operator new[](saturated_mul(iDataCount, 0x1C4ui64));
      this->pAtkData = v10;
      if ( v10 )
      {
        if ( this->fileHeader.uiFormatVersion > 3 )
        {
          if ( (int)InputStreamBroker<CFile>::read(in, v10, 452, this->dataHeader.iDataCount) < 0 )
            goto $READ_ERROR_4;
          if ( this->fileHeader.uiFormatVersion == 4 )
          {
            for ( i = 0; i < this->dataHeader.iDataCount; i = v16 + 1 )
              CharaAttackData::ConvertVersion4to5(v11, &this->pAtkData[i]);
          }
        }
        else
        {
          for ( j = 0; j < this->dataHeader.iDataCount; ++j )
          {
            v13 = in->f;
            v14 = in->f->m_file.m_ptr;
            if ( v14 )
            {
              v14->read(v14, (unsigned __int8 *)&ver3, 260u);
              v13->m_iSeekPos += 260;
            }
            CharaAttackData::ConvertVersion3to4((CharaAttackData *)v14, &ver3, &this->pAtkData[j]);
          }
        }
        if ( CharaFileBase::ReadDataName<CFile>(v11, in, &this->pAtkNames, this->dataHeader.iDataCount) )
        {
          InputStreamBroker<CFile>::close(in);
          return 1i64;
        }
        v5 = 9;
      }
      else
      {
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
$READ_ERROR_4:
  v17 = in->f;
  v18 = in->f->m_file.m_ptr;
  if ( v18 )
  {
    v20.m_ref = v17->m_file.m_ref;
    v17->m_file.m_ref = 0i64;
    v17->m_file.m_ptr = 0i64;
    v20.m_ptr = (KOFApplication *)v18;
    AgPointer<AgUser>::~AgPointer<AgUser>(&v20);
  }
  *(_QWORD *)&v17->m_iSeekPos = 0i64;
  this->InitData(this);
  return v5;
}

__int64 __fastcall CharaAttackData::ReadAttackData<OGLInputStream>(
        CharaAttackData *this,
        InputStreamBroker<OGLInputStream> *in)
{
  OGLInputStream *v4; // rcx
  __int64 m_uiPoint; // rax
  unsigned int v6; // edi
  OGLInputStream *v7; // rcx
  __int64 v8; // rax
  unsigned __int64 iDataCount; // rax
  CharaAttackData::AttackData *v10; // rax
  CharaAttackData *v11; // rcx
  int j; // edi
  OGLInputStream *v13; // r8
  unsigned int v14; // er9
  CharaAttackData::AttackData_version3 *p_ver3; // rdx
  unsigned __int8 *v16; // rax
  __int64 v17; // rcx
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  int i; // er11
  int v27; // er11
  OGLInputStream *v28; // rdx
  OGLInputStream *v30; // rax
  CharaAttackData::AttackData_version3 ver3; // [rsp+20h] [rbp-138h] BYREF

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
$READ_ERROR_5:
    v28 = in->in;
    v28->m_pucData = 0i64;
    *(_QWORD *)&v28->m_uiPoint = 0i64;
    this->InitData(this);
    return v6;
  }
  v7 = in->in;
  v8 = in->in->m_uiPoint;
  if ( in->in->m_uiSize > (unsigned int)v8 )
  {
    this->dataHeader = *(CharaAttackData::DataHeader *)&v7->m_pucData[v8];
    v7->m_uiPoint += 8;
  }
  iDataCount = this->dataHeader.iDataCount;
  if ( (int)iDataCount < 1 )
  {
    v6 = 6;
    goto $READ_ERROR_5;
  }
  v10 = (CharaAttackData::AttackData *)operator new[](saturated_mul(iDataCount, 0x1C4ui64));
  this->pAtkData = v10;
  if ( !v10 )
  {
    v6 = 7;
    goto $READ_ERROR_5;
  }
  if ( this->fileHeader.uiFormatVersion > 3 )
  {
    if ( InputStreamBroker<OGLInputStream>::read(in, v10, 452, this->dataHeader.iDataCount) < 0 )
    {
      v6 = 8;
      goto $READ_ERROR_5;
    }
    if ( this->fileHeader.uiFormatVersion == 4 )
    {
      for ( i = 0; i < this->dataHeader.iDataCount; i = v27 + 1 )
        CharaAttackData::ConvertVersion4to5(v11, &this->pAtkData[i]);
    }
  }
  else
  {
    for ( j = 0; j < this->dataHeader.iDataCount; ++j )
    {
      v13 = in->in;
      v14 = in->in->m_uiPoint;
      if ( in->in->m_uiSize > v14 )
      {
        p_ver3 = &ver3;
        v16 = &v13->m_pucData[v14];
        v17 = 2i64;
        do
        {
          p_ver3 = (CharaAttackData::AttackData_version3 *)((char *)p_ver3 + 128);
          v18 = *(_OWORD *)v16;
          v19 = *((_OWORD *)v16 + 1);
          v16 += 128;
          *(_OWORD *)&p_ver3[-1].damageAction.iFukitobi = v18;
          v20 = *((_OWORD *)v16 - 6);
          *(_OWORD *)&p_ver3[-1].damageAction.iReserve3 = v19;
          v21 = *((_OWORD *)v16 - 5);
          *(_OWORD *)&p_ver3[-1].iHitNokeDir = v20;
          v22 = *((_OWORD *)v16 - 4);
          *(_OWORD *)&p_ver3[-1].iTargetFlag = v21;
          v23 = *((_OWORD *)v16 - 3);
          *(_OWORD *)&p_ver3[-1].nulldata2 = v22;
          v24 = *((_OWORD *)v16 - 2);
          *(_OWORD *)&p_ver3[-1].nulldata6 = v23;
          v25 = *((_OWORD *)v16 - 1);
          *(_OWORD *)&p_ver3[-1].hitOffset.x = v24;
          *(_OWORD *)&p_ver3[-1].iReserve1 = v25;
          --v17;
        }
        while ( v17 );
        v11 = (CharaAttackData *)*(unsigned int *)v16;
        v13->m_uiPoint = v14 + 260;
        p_ver3->iDataType = (int)v11;
      }
      CharaAttackData::ConvertVersion3to4(v11, &ver3, &this->pAtkData[j]);
    }
  }
  if ( !CharaFileBase::ReadDataName<OGLInputStream>(v11, in, &this->pAtkNames, this->dataHeader.iDataCount) )
  {
    v6 = 9;
    goto $READ_ERROR_5;
  }
  v30 = in->in;
  v30->m_pucData = 0i64;
  *(_QWORD *)&v30->m_uiPoint = 0i64;
  return 1i64;
}

bool __fastcall CharaAttackData::CheckFileID(CharaAttackData *this)
{
  return *(_DWORD *)this->fileHeader.fileIdentifier == *(_DWORD *)CharaAttackData::FILE_IDENTIFIER;
}

void __fastcall CharaAttackData::ConvertVersion3to4(
        CharaAttackData *this,
        const CharaAttackData::AttackData_version3 *ver3,
        CharaAttackData::AttackData *dst)
{
  __int64 v3; // r9
  CharaAttackData::AttackData *v4; // rcx
  __int64 v5; // rax
  __int128 v6; // xmm0
  __int64 v7; // r10
  int *iReserveData; // rcx
  __int64 v9; // rdx
  int *iReserveData2; // rcx
  __int64 v11; // rdx

  v3 = 2i64;
  v4 = dst;
  v5 = 2i64;
  do
  {
    v4 = (CharaAttackData::AttackData *)((char *)v4 + 128);
    v6 = *(_OWORD *)&ver3->iDataType;
    ver3 = (const CharaAttackData::AttackData_version3 *)((char *)ver3 + 128);
    *(_OWORD *)&v4[-1].hitVoice.fVolume = v6;
    *(_OWORD *)&v4[-1].hitVoice.iReserve1 = *(_OWORD *)&ver3[-1].damageAction.iReserve3;
    *(_OWORD *)&v4[-1].guardSound.iCommonID = *(_OWORD *)&ver3[-1].iHitNokeDir;
    *(_OWORD *)&v4[-1].guardSound.iReserve2 = *(_OWORD *)&ver3[-1].iTargetFlag;
    *(_OWORD *)&v4[-1].hitEffect1.fAngleY = *(_OWORD *)&ver3[-1].nulldata2;
    *(_OWORD *)&v4[-1].hitEffect2.fAngleY = *(_OWORD *)&ver3[-1].nulldata6;
    *(_OWORD *)&v4[-1].guardEffect.fAngleY = *(_OWORD *)&ver3[-1].hitOffset.x;
    *(_OWORD *)&v4[-1].iReserveData[2] = *(_OWORD *)&ver3[-1].iReserve1;
    --v5;
  }
  while ( v5 );
  v4->iDataType = ver3->iDataType;
  v7 = 6i64;
  iReserveData = dst->iReserveData;
  v9 = 0i64;
  if ( dst->iReserveData > (int *)&dst[1] )
    v7 = 0i64;
  if ( dst->iReserveData <= (int *)&dst[1] )
  {
    do
    {
      ++v9;
      *iReserveData++ = 0;
    }
    while ( v9 != v7 );
  }
  iReserveData2 = dst->iReserveData2;
  v11 = 0i64;
  if ( dst->iReserveData2 > (int *)&dst->hitOffset )
    v3 = 0i64;
  if ( dst->iReserveData2 <= (int *)&dst->hitOffset )
  {
    do
    {
      ++v11;
      *iReserveData2++ = 0;
    }
    while ( v11 != v3 );
  }
  *(_QWORD *)&dst->iVitalRecovery = 0i64;
  dst->hitSound1.iCommonID = -1;
  dst->hitSound1.iUniqueID = -1;
  dst->hitSound2.iCommonID = -1;
  dst->hitSound2.iUniqueID = -1;
  dst->hitVoice.iCommonID = -1;
  dst->hitVoice.iUniqueID = -1;
  dst->guardSound.iCommonID = -1;
  dst->guardSound.iUniqueID = -1;
  dst->hitEffect1.iActNo = -1;
  dst->hitEffect2.iActNo = -1;
  dst->guardEffect.iActNo = -1;
  *(_DWORD *)&dst->poisonDamage.iDamage = 0;
  *(_QWORD *)&dst->iDamageActPri = 0i64;
  *(_QWORD *)&dst->quakeCamera.iFrame = 0i64;
  *(_QWORD *)&dst->quakeCamera.y = 0i64;
  dst->hitEffect1.iListID = 0;
  *(_QWORD *)&dst->hitEffect1.fAngleX = 0i64;
  dst->hitEffect1.fAngleZ = 0.0;
  dst->hitEffect2.iListID = 0;
  *(_QWORD *)&dst->hitEffect2.fAngleX = 0i64;
  dst->hitEffect2.fAngleZ = 0.0;
  dst->guardEffect.iListID = 0;
  *(_QWORD *)&dst->guardEffect.fAngleX = 0i64;
  dst->guardEffect.fAngleZ = 0.0;
}

void __fastcall CharaAttackData::ConvertVersion4to5(CharaAttackData *this, CharaAttackData::AttackData *dst)
{
  int *iReserveData; // rcx
  bool v4; // cc
  __int64 v5; // rdx
  __int64 v6; // r8
  int *iReserveData2; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx

  iReserveData = dst->iReserveData;
  v4 = dst->iReserveData <= (int *)&dst[1];
  v5 = 6i64;
  v6 = 0i64;
  if ( !v4 )
    v5 = 0i64;
  if ( v4 )
  {
    do
    {
      ++v6;
      *iReserveData++ = 0;
    }
    while ( v6 != v5 );
  }
  iReserveData2 = dst->iReserveData2;
  v8 = 2i64;
  v9 = 0i64;
  if ( dst->iReserveData2 > (int *)&dst->hitOffset )
    v8 = 0i64;
  if ( dst->iReserveData2 <= (int *)&dst->hitOffset )
  {
    do
    {
      ++v9;
      *iReserveData2++ = 0;
    }
    while ( v9 != v8 );
  }
  *(_QWORD *)&dst->iVitalRecovery = 0i64;
  dst->hitEffect1.iActNo = -1;
  dst->hitEffect2.iActNo = -1;
  dst->guardEffect.iActNo = -1;
  *(_DWORD *)&dst->poisonDamage.iDamage = 0;
  dst->hitEffect1.iListID = 0;
  *(_QWORD *)&dst->hitEffect1.fAngleX = 0i64;
  dst->hitEffect1.fAngleZ = 0.0;
  dst->hitEffect2.iListID = 0;
  *(_QWORD *)&dst->hitEffect2.fAngleX = 0i64;
  dst->hitEffect2.fAngleZ = 0.0;
  dst->guardEffect.iListID = 0;
  *(_QWORD *)&dst->guardEffect.fAngleX = 0i64;
  dst->guardEffect.fAngleZ = 0.0;
}

void __fastcall CharaAttackData::InitData(CharaDamageSetting *this, unsigned __int64 a2)
{
  int v3; // esi
  __int64 v4; // rdi
  char *v5; // rcx
  char **pDamageNames; // rcx
  CharaDamageSetting::Setting *pSetting; // rcx

  if ( this->pDamageNames )
  {
    v3 = 0;
    if ( this->dataHeader.iDataCount > 0 )
    {
      v4 = 0i64;
      do
      {
        v5 = this->pDamageNames[v4];
        if ( v5 )
        {
          operator delete(v5, a2);
          this->pDamageNames[v4] = 0i64;
        }
        ++v3;
        ++v4;
      }
      while ( v3 < this->dataHeader.iDataCount );
    }
    pDamageNames = this->pDamageNames;
    if ( pDamageNames )
    {
      operator delete(pDamageNames, a2);
      this->pDamageNames = 0i64;
    }
  }
  this->fileHeader = 0i64;
  this->dataHeader = 0i64;
  pSetting = this->pSetting;
  if ( pSetting )
  {
    operator delete(pSetting, a2);
    this->pSetting = 0i64;
  }
  this->iReadErrorID = 0;
}

bool __fastcall CharaActionData::IsReadSuccess(SoundGroupData *this)
{
  return this->iReadErrorID == 1;
}

__int64 __fastcall CharaAttackData::ReadBuffer(CharaAttackData *this, unsigned __int8 *pBuffer, unsigned int size)
{
  OGLInputStream *v5; // rax
  __int64 result; // rax
  unsigned __int8 *v7; // [rsp+28h] [rbp-20h] BYREF
  int v8; // [rsp+30h] [rbp-18h]
  unsigned int v9; // [rsp+34h] [rbp-14h]
  int v10; // [rsp+38h] [rbp-10h]
  InputStreamBroker<OGLInputStream> in; // [rsp+50h] [rbp+8h] BYREF

  if ( pBuffer )
  {
    v7 = pBuffer;
    v8 = 0;
    v9 = size;
    v10 = 0;
    in.in = (OGLInputStream *)&v7;
    this->iReadErrorID = CharaAttackData::ReadAttackData<OGLInputStream>(this, &in);
    v5 = in.in;
    in.in->m_pucData = 0i64;
    *(_QWORD *)&v5->m_uiPoint = 0i64;
  }
  else
  {
    this->iReadErrorID = 2;
  }
  result = this->iReadErrorID;
  if ( (_DWORD)result != 1 )
  {
    _DummyLogging(
      "CharaAttackData::%s READ_ERROR_ID::%s [buffer size:%udbytes]",
      "CharaAttackData::ReadBuffer",
      CharaAttackData::READ_ERROR_ID_NAME[this->iReadErrorID],
      size);
    return (unsigned int)this->iReadErrorID;
  }
  return result;
}

__int64 __fastcall CharaAttackData::ReadFile(CharaAttackData *this, const char *fileName)
{
  unsigned __int64 v4; // rdx
  CFile *f; // rbx
  AgFile *m_ptr; // rcx
  AgReferenceCount *m_ref; // rax
  unsigned int iReadErrorID; // ebx
  AgPointer<KOFApplication> v10; // [rsp+28h] [rbp-70h] BYREF
  CFile v11; // [rsp+40h] [rbp-58h] BYREF
  InputStreamBroker<CFile> in; // [rsp+A0h] [rbp+8h] BYREF

  memset(&v11.pFileName, 0, 28);
  memset(&v11, 0, 28);
  v10 = 0i64;
  AgPointer<AgUser>::~AgPointer<AgUser>(&v10);
  if ( CFile::copen(&v11, fileName, 0, 1) )
  {
    in.f = &v11;
    this->iReadErrorID = CharaAttackData::ReadAttackData<CFile>(this, &in);
    f = in.f;
    m_ptr = in.f->m_file.m_ptr;
    if ( m_ptr )
    {
      m_ref = in.f->m_file.m_ref;
      in.f->m_file.m_ref = 0i64;
      f->m_file.m_ptr = 0i64;
      v10.m_ref = m_ref;
      v10.m_ptr = (KOFApplication *)m_ptr;
      AgPointer<AgUser>::~AgPointer<AgUser>(&v10);
    }
    *(_QWORD *)&f->m_iSeekPos = 0i64;
  }
  else
  {
    this->iReadErrorID = 2;
  }
  if ( this->iReadErrorID != 1 )
    _DummyLogging(
      "CharaAttackData::%s READ_ERROR_ID::%s [File path:%s]",
      "CharaAttackData::ReadFile",
      CharaAttackData::READ_ERROR_ID_NAME[this->iReadErrorID],
      fileName);
  iReadErrorID = this->iReadErrorID;
  if ( v11.fNameIndex )
  {
    operator delete(v11.fNameIndex, v4);
    v11.fNameIndex = 0i64;
  }
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&v11);
  return iReadErrorID;
}

