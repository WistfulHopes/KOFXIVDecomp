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
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.hpp"
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
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.hpp"
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

std::piecewise_construct_t std::piecewise_construct; // 0x14089FE86
bool CharaActionData::CheckFileID(); // 0x14017D960
void CharaActionData::InitData(); // 0x14017D980
long CharaActionData::ReadFile(const char * fileName); // 0x14017DB20
long CharaActionData::ReadBuffer(unsigned char * pBuffer, unsigned long size); // 0x14017DC40
void CharaActionData::InitSoundActionData(); // 0x14017DCE0
long CharaActionData::ReadSoundActionBuffer(unsigned char * pBuffer, unsigned long size); // 0x14017DDE0//decompilation failure at 14089FE86!
__int64 __fastcall CharaActionData::ReadActionData<CFile>(CharaActionData *this, InputStreamBroker<CFile> *in)
{
  CFile *f; // rbx
  AgFile *m_ptr; // rcx
  unsigned int v6; // er13
  CFile *v7; // rbx
  AgFile *v8; // rcx
  unsigned __int64 iActionCount; // rax
  CharaActionData::ActionData *v10; // rax
  CharaFileBase *v11; // rcx
  int v12; // edx
  CFile *v13; // rbx
  unsigned __int8 *v14; // rsi
  AgFile *v15; // rcx
  unsigned __int64 v16; // rax
  void *v17; // rax
  int v18; // ebp
  __int64 v19; // r14
  CFile *v20; // rdi
  int *v21; // rbx
  AgFile *v22; // rcx
  CFile *v23; // rdi
  AgFile *v24; // rcx
  void *v25; // rax
  __int64 v26; // rax
  CFile *v27; // rbx
  AgFile *v28; // rcx
  int iDataCount; // er9
  CFile *v30; // rbx
  AgFile *v31; // rdx
  AgPointer<KOFApplication> v33; // [rsp+20h] [rbp-48h] BYREF
  int v34; // [rsp+70h] [rbp+8h]
  CharaFileBase *v35; // [rsp+78h] [rbp+10h]

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
    goto $READ_ERROR;
  }
  v7 = in->f;
  v8 = in->f->m_file.m_ptr;
  if ( v8 )
  {
    v8->read(v8, (unsigned __int8 *)&this->dataHeader, 8u);
    v7->m_iSeekPos += 8;
  }
  iActionCount = this->dataHeader.iActionCount;
  if ( (int)iActionCount < 1 )
  {
    v6 = 6;
    goto $READ_ERROR;
  }
  v10 = (CharaActionData::ActionData *)operator new[](saturated_mul(iActionCount, 0x30ui64));
  this->pActData = v10;
  if ( !v10 )
  {
LABEL_10:
    v6 = 7;
    goto $READ_ERROR;
  }
  memset(v10, 0, 48i64 * this->dataHeader.iActionCount);
  v12 = 0;
  v34 = 0;
  if ( this->dataHeader.iActionCount > 0 )
  {
    v11 = 0i64;
    v35 = 0i64;
    do
    {
      v13 = in->f;
      v14 = (unsigned __int8 *)v11 + (unsigned __int64)this->pActData;
      v15 = in->f->m_file.m_ptr;
      if ( v15 )
      {
        v15->read(v15, v14, 40u);
        v13->m_iSeekPos += 40;
        v12 = v34;
      }
      v16 = *((int *)v14 + 9);
      if ( (int)v16 <= 0 )
      {
        *((_QWORD *)v14 + 5) = 0i64;
      }
      else
      {
        v17 = operator new[](saturated_mul(v16, 0x10ui64));
        *((_QWORD *)v14 + 5) = v17;
        if ( !v17 )
          goto LABEL_10;
        memset(v17, 0, 16i64 * *((int *)v14 + 9));
        v18 = 0;
        if ( *((int *)v14 + 9) > 0 )
        {
          v19 = 0i64;
          do
          {
            v20 = in->f;
            v21 = (int *)(v19 + *((_QWORD *)v14 + 5));
            v22 = in->f->m_file.m_ptr;
            if ( v22 )
            {
              v22->read(v22, (unsigned __int8 *)(v19 + *((_QWORD *)v14 + 5)), 4u);
              v20->m_iSeekPos += 4;
            }
            if ( *v21 <= 0 )
            {
              *((_QWORD *)v21 + 1) = 0i64;
            }
            else
            {
              v23 = in->f;
              v24 = in->f->m_file.m_ptr;
              if ( v24 )
              {
                v24->read(v24, (unsigned __int8 *)v21 + 4, 4u);
                v23->m_iSeekPos += 4;
              }
              v25 = operator new[](saturated_mul(*v21, 0x20ui64));
              *((_QWORD *)v21 + 1) = v25;
              if ( !v25 )
                goto LABEL_10;
              if ( InputStreamBroker<CFile>::read(in, v25, 32, *v21) < 0 )
              {
                v6 = 11;
                goto $READ_ERROR;
              }
              if ( this->fileHeader.uiFormatVersion < 0x12 && v21[1] == 21 )
              {
                v26 = *((_QWORD *)v21 + 1);
                if ( *(_DWORD *)(v26 + 4) == 2 )
                  *(_DWORD *)(v26 + 16) = 0;
              }
            }
            ++v18;
            v19 += 16i64;
          }
          while ( v18 < *((_DWORD *)v14 + 9) );
        }
        v12 = v34;
      }
      ++v12;
      v11 = v35 + 2;
      v34 = v12;
      v35 += 2;
    }
    while ( v12 < this->dataHeader.iActionCount );
  }
  if ( !CharaFileBase::ReadDataName<CFile>(v11, in, &this->pActNames, this->dataHeader.iActionCount) )
  {
    v6 = 12;
    goto $READ_ERROR;
  }
  if ( this->fileHeader.uiFormatVersion < 0xD )
    goto LABEL_47;
  v27 = in->f;
  v28 = in->f->m_file.m_ptr;
  if ( v28 )
  {
    v28->read(v28, (unsigned __int8 *)&this->transKeyData, 4u);
    v27->m_iSeekPos += 4;
  }
  iDataCount = this->transKeyData.iDataCount;
  if ( iDataCount <= 0
    || CharaFileBase::ReadDataName<CFile>((CharaFileBase *)v28, in, &this->transKeyData.pKeys, iDataCount) )
  {
LABEL_47:
    InputStreamBroker<CFile>::close(in);
    return 1i64;
  }
  else
  {
    v6 = 13;
$READ_ERROR:
    v30 = in->f;
    v31 = in->f->m_file.m_ptr;
    if ( v31 )
    {
      v33.m_ref = v30->m_file.m_ref;
      v30->m_file.m_ref = 0i64;
      v30->m_file.m_ptr = 0i64;
      v33.m_ptr = (KOFApplication *)v31;
      AgPointer<AgUser>::~AgPointer<AgUser>(&v33);
    }
    *(_QWORD *)&v30->m_iSeekPos = 0i64;
    this->InitData(this);
    return v6;
  }
}

__int64 __fastcall CharaActionData::ReadActionData<OGLInputStream>(
        CharaActionData *this,
        InputStreamBroker<OGLInputStream> *in)
{
  OGLInputStream *v4; // rcx
  __int64 m_uiPoint; // rax
  unsigned int v6; // ebx
  OGLInputStream *v7; // rcx
  __int64 v8; // rax
  unsigned __int64 iActionCount; // rax
  CharaActionData::ActionData *v10; // rax
  OGLInputStream *v11; // rcx
  int v12; // er12
  __int64 v13; // r13
  CharaActionData::ActionData *v14; // rdi
  __int64 v15; // rax
  unsigned __int8 *v16; // rax
  unsigned __int64 iLineCount; // rax
  CharaActionData::ActionLine *v18; // rax
  int v19; // esi
  __int64 v20; // r14
  CharaActionData::ActionLine *pLine; // rbx
  __int64 v22; // rax
  OGLInputStream *v23; // rcx
  __int64 v24; // rax
  CharaActionData::ActionLineFrame *v25; // rax
  CharaActionData::ActionLineFrame *pFrame; // rax
  OGLInputStream *v27; // rcx
  __int64 v28; // rax
  int iDataCount; // er9
  OGLInputStream *v30; // rcx
  OGLInputStream *v32; // rax

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
    goto $READ_ERROR_0;
  }
  v7 = in->in;
  v8 = in->in->m_uiPoint;
  if ( in->in->m_uiSize > (unsigned int)v8 )
  {
    this->dataHeader = *(CharaActionData::DataHeader *)&v7->m_pucData[v8];
    v7->m_uiPoint += 8;
  }
  iActionCount = this->dataHeader.iActionCount;
  if ( (int)iActionCount < 1 )
  {
    v6 = 6;
    goto $READ_ERROR_0;
  }
  v10 = (CharaActionData::ActionData *)operator new[](saturated_mul(iActionCount, 0x30ui64));
  this->pActData = v10;
  if ( !v10 )
  {
LABEL_10:
    v6 = 7;
    goto $READ_ERROR_0;
  }
  memset(v10, 0, 48i64 * this->dataHeader.iActionCount);
  v12 = 0;
  if ( this->dataHeader.iActionCount > 0 )
  {
    v13 = 0i64;
    do
    {
      v11 = in->in;
      v14 = &this->pActData[v13];
      v15 = in->in->m_uiPoint;
      if ( in->in->m_uiSize > (unsigned int)v15 )
      {
        v16 = &v11->m_pucData[v15];
        *(_OWORD *)&v14->info.iCategoryID = *(_OWORD *)v16;
        *(_OWORD *)&v14->info.iOptionFlag = *((_OWORD *)v16 + 1);
        *(_QWORD *)&v14->info.iReserve4 = *((_QWORD *)v16 + 4);
        v11->m_uiPoint += 40;
      }
      iLineCount = v14->info.iLineCount;
      if ( (int)iLineCount <= 0 )
      {
        v14->pLine = 0i64;
      }
      else
      {
        v18 = (CharaActionData::ActionLine *)operator new[](saturated_mul(iLineCount, 0x10ui64));
        v14->pLine = v18;
        if ( !v18 )
          goto LABEL_10;
        memset(v18, 0, 16i64 * v14->info.iLineCount);
        v19 = 0;
        if ( v14->info.iLineCount > 0 )
        {
          v20 = 0i64;
          do
          {
            v11 = in->in;
            pLine = v14->pLine;
            v22 = in->in->m_uiPoint;
            if ( in->in->m_uiSize > (unsigned int)v22 )
            {
              pLine[v20].iKeyFrameCount = *(_DWORD *)&v11->m_pucData[v22];
              v11->m_uiPoint += 4;
            }
            if ( pLine[v20].iKeyFrameCount <= 0 )
            {
              pLine[v20].pFrame = 0i64;
            }
            else
            {
              v23 = in->in;
              v24 = in->in->m_uiPoint;
              if ( in->in->m_uiSize > (unsigned int)v24 )
              {
                pLine[v20].iActionLineID = *(_DWORD *)&v23->m_pucData[v24];
                v23->m_uiPoint += 4;
              }
              v25 = (CharaActionData::ActionLineFrame *)operator new[](saturated_mul(pLine[v20].iKeyFrameCount, 0x20ui64));
              pLine[v20].pFrame = v25;
              if ( !v25 )
                goto LABEL_10;
              if ( InputStreamBroker<OGLInputStream>::read(in, v25, 32, pLine[v20].iKeyFrameCount) < 0 )
              {
                v6 = 11;
                goto $READ_ERROR_0;
              }
              if ( this->fileHeader.uiFormatVersion < 0x12 && pLine[v20].iActionLineID == 21 )
              {
                pFrame = pLine[v20].pFrame;
                if ( pFrame->iBase[0] == 2 )
                  pFrame->iBase[3] = 0;
              }
            }
            ++v19;
            ++v20;
          }
          while ( v19 < v14->info.iLineCount );
        }
      }
      ++v12;
      ++v13;
    }
    while ( v12 < this->dataHeader.iActionCount );
  }
  if ( !CharaFileBase::ReadDataName<OGLInputStream>(
          (CharaFileBase *)v11,
          in,
          &this->pActNames,
          this->dataHeader.iActionCount) )
  {
    v6 = 12;
    goto $READ_ERROR_0;
  }
  if ( this->fileHeader.uiFormatVersion < 0xD )
    goto LABEL_45;
  v27 = in->in;
  v28 = in->in->m_uiPoint;
  if ( in->in->m_uiSize > (unsigned int)v28 )
  {
    this->transKeyData.iDataCount = *(_DWORD *)&v27->m_pucData[v28];
    v27->m_uiPoint += 4;
  }
  iDataCount = this->transKeyData.iDataCount;
  if ( iDataCount <= 0
    || CharaFileBase::ReadDataName<OGLInputStream>((CharaFileBase *)v27, in, &this->transKeyData.pKeys, iDataCount) )
  {
LABEL_45:
    v32 = in->in;
    v32->m_pucData = 0i64;
    *(_QWORD *)&v32->m_uiPoint = 0i64;
    return 1i64;
  }
  else
  {
    v6 = 13;
$READ_ERROR_0:
    v30 = in->in;
    v30->m_pucData = 0i64;
    *(_QWORD *)&v30->m_uiPoint = 0i64;
    this->InitData(this);
    return v6;
  }
}

bool __fastcall CharaFileBase::ReadDataName<CFile>(
        CharaFileBase *this,
        InputStreamBroker<CFile> *in,
        char ***pStrArray,
        const int ciStrCount)
{
  char **v7; // rax
  __int64 v8; // rbp
  char **v9; // r9
  int v10; // er8
  unsigned __int64 v11; // rax
  int v12; // edi
  __int64 i; // rcx
  __int64 v14; // rdi
  CFile *f; // rsi
  AgFile *m_ptr; // rcx
  char *v17; // rdx
  CFile *v18; // r14
  int v19; // esi
  AgFile *v20; // rcx
  __int64 j; // rdi
  char *v22; // rcx
  unsigned int v24; // [rsp+68h] [rbp+20h] BYREF

  if ( ciStrCount < 1 )
  {
    LOBYTE(v7) = 1;
    return (char)v7;
  }
  v8 = ciStrCount;
  v7 = (char **)operator new[](saturated_mul(ciStrCount, 8ui64));
  *pStrArray = v7;
  v9 = v7;
  if ( !v7 )
    return (char)v7;
  v10 = 0;
  if ( (unsigned int)ciStrCount >= 2 )
  {
    v11 = (unsigned __int64)&v7[ciStrCount - 1];
    if ( v9 > (char **)pStrArray || v11 < (unsigned __int64)pStrArray )
    {
      v12 = ciStrCount - ciStrCount % 2;
      do
        v10 += 2;
      while ( v10 < v12 );
      memset(v9, 0, 16i64 * ((v12 + 1) / 2));
    }
  }
  for ( i = v10; i < v8; (*pStrArray)[i++] = 0i64 )
    ;
  v14 = 0i64;
  while ( 1 )
  {
    f = in->f;
    m_ptr = in->f->m_file.m_ptr;
    if ( m_ptr )
    {
      ((void (__fastcall *)(AgFile *, unsigned int *, __int64, char **))m_ptr->read)(m_ptr, &v24, 4i64, v9);
      f->m_iSeekPos += 4;
    }
    if ( (int)v24 <= 0 )
      goto LABEL_21;
    (*pStrArray)[v14] = (char *)operator new[]((int)(v24 + 1));
    v17 = (*pStrArray)[v14];
    if ( !v17 )
      goto $READ_ERROR_2;
    v18 = in->f;
    v19 = v24;
    v20 = in->f->m_file.m_ptr;
    if ( v20 )
      break;
LABEL_20:
    (*pStrArray)[v14][v19] = 0;
LABEL_21:
    if ( ++v14 >= v8 )
    {
      LOBYTE(v7) = 1;
      return (char)v7;
    }
  }
  v20->read(v20, (unsigned __int8 *)v17, v24);
  v18->m_iSeekPos += v19;
  if ( v19 >= 0 )
  {
    v19 = v24;
    goto LABEL_20;
  }
$READ_ERROR_2:
  if ( *pStrArray )
  {
    for ( j = 0i64; j < v8; ++j )
    {
      v22 = (*pStrArray)[j];
      if ( v22 )
      {
        operator delete(v22, (unsigned __int64)v17);
        (*pStrArray)[j] = 0i64;
      }
    }
    if ( *pStrArray )
    {
      operator delete(*pStrArray, (unsigned __int64)v17);
      *pStrArray = 0i64;
    }
  }
  LOBYTE(v7) = 0;
  return (char)v7;
}

bool __fastcall CharaFileBase::ReadDataName<OGLInputStream>(
        CharaFileBase *this,
        InputStreamBroker<OGLInputStream> *in,
        char ***pStrArray,
        const int ciStrCount)
{
  char **v7; // rax
  __int64 v8; // r14
  char **v9; // r9
  int v10; // er8
  unsigned __int64 v11; // rax
  int v12; // edi
  __int64 i; // rcx
  __int64 v14; // rsi
  int v15; // edi
  OGLInputStream *v16; // rcx
  unsigned int m_uiPoint; // edx
  unsigned __int64 v18; // rdx
  char *v19; // rcx
  OGLInputStream *v20; // rbp
  unsigned int v21; // eax
  __int64 j; // rdi
  char *v23; // rcx
  int v25; // [rsp+68h] [rbp+20h]

  if ( ciStrCount < 1 )
  {
    LOBYTE(v7) = 1;
    return (char)v7;
  }
  v8 = ciStrCount;
  v7 = (char **)operator new[](saturated_mul(ciStrCount, 8ui64));
  *pStrArray = v7;
  v9 = v7;
  if ( !v7 )
    return (char)v7;
  v10 = 0;
  if ( (unsigned int)ciStrCount >= 2 )
  {
    v11 = (unsigned __int64)&v7[ciStrCount - 1];
    if ( v9 > (char **)pStrArray || v11 < (unsigned __int64)pStrArray )
    {
      v12 = ciStrCount - ciStrCount % 2;
      do
        v10 += 2;
      while ( v10 < v12 );
      memset(v9, 0, 16i64 * ((v12 + 1) / 2));
    }
  }
  for ( i = v10; i < v8; (*pStrArray)[i++] = 0i64 )
    ;
  v14 = 0i64;
  v15 = v25;
  while ( 1 )
  {
    v16 = in->in;
    m_uiPoint = in->in->m_uiPoint;
    if ( in->in->m_uiSize > m_uiPoint )
    {
      v15 = *(_DWORD *)&v16->m_pucData[m_uiPoint];
      v16->m_uiPoint = m_uiPoint + 4;
    }
    if ( v15 <= 0 )
      goto LABEL_20;
    (*pStrArray)[v14] = (char *)operator new[](v15 + 1);
    v19 = (*pStrArray)[v14];
    if ( !v19 )
      break;
    v20 = in->in;
    v21 = in->in->m_uiPoint;
    if ( in->in->m_uiSize > v21 )
    {
      memmove(v19, &v20->m_pucData[v21], v15);
      v20->m_uiPoint += v15;
    }
    (*pStrArray)[v14][v15] = 0;
LABEL_20:
    if ( ++v14 >= v8 )
    {
      LOBYTE(v7) = 1;
      return (char)v7;
    }
  }
  if ( *pStrArray )
  {
    for ( j = 0i64; j < v8; ++j )
    {
      v23 = (*pStrArray)[j];
      if ( v23 )
      {
        operator delete(v23, v18);
        (*pStrArray)[j] = 0i64;
      }
    }
    if ( *pStrArray )
    {
      operator delete(*pStrArray, v18);
      *pStrArray = 0i64;
    }
  }
  LOBYTE(v7) = 0;
  return (char)v7;
}

__int64 __fastcall CharaActionData::ReadSoundActionData<OGLInputStream>(
        CharaActionData *this,
        InputStreamBroker<OGLInputStream> *in)
{
  unsigned int m_uiPoint; // eax
  OGLInputStream *v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // eax
  OGLInputStream *v8; // rcx
  __int64 v9; // rax
  unsigned __int64 iActionCount; // rax
  unsigned int v11; // ebx
  CharaActionData::ActionData *v12; // rax
  int v13; // er12
  __int64 v14; // rbp
  OGLInputStream *v15; // rcx
  CharaActionData::ActionData *pSoundAct; // r14
  __int64 v17; // rax
  unsigned __int64 iLineCount; // rax
  CharaActionData::ActionLine *v19; // rax
  int v20; // er15
  __int64 v21; // rbx
  OGLInputStream *v22; // rcx
  CharaActionData::ActionLine *pLine; // rdi
  __int64 v24; // rax
  unsigned int v25; // eax
  bool v26; // of
  unsigned __int64 v27; // rax
  CharaActionData::ActionLineFrame *v28; // rax
  int v29; // er10
  __int64 v30; // rdx
  OGLInputStream *v31; // rcx
  CharaActionData::ActionLineFrame *pFrame; // r8
  unsigned int v33; // er9
  unsigned __int8 *v34; // rax
  __int128 v35; // xmm1
  OGLInputStream *v36; // rax
  OGLInputStream *v38; // rdx
  __int128 v39; // [rsp+20h] [rbp-68h]
  __int128 v40; // [rsp+30h] [rbp-58h]

  CharaActionData::InitSoundActionData(this);
  m_uiPoint = in->in->m_uiPoint;
  if ( in->in->m_uiSize > m_uiPoint )
    in->in->m_uiPoint = m_uiPoint + 8;
  v5 = in->in;
  v6 = in->in->m_uiPoint;
  if ( in->in->m_uiSize > (unsigned int)v6 )
  {
    this->soundDataHeader.uiDataVersion = *(_DWORD *)&v5->m_pucData[v6];
    v5->m_uiPoint += 4;
  }
  v7 = in->in->m_uiPoint;
  if ( in->in->m_uiSize > v7 )
    in->in->m_uiPoint = v7 + 4;
  v8 = in->in;
  v9 = in->in->m_uiPoint;
  if ( in->in->m_uiSize > (unsigned int)v9 )
  {
    this->soundDataHeader.iActionCount = *(_DWORD *)&v8->m_pucData[v9];
    v8->m_uiPoint += 4;
  }
  iActionCount = this->soundDataHeader.iActionCount;
  if ( (int)iActionCount < 1 )
  {
    v11 = 6;
$READ_ERROR_1:
    v38 = in->in;
    v38->m_pucData = 0i64;
    *(_QWORD *)&v38->m_uiPoint = 0i64;
    CharaActionData::InitSoundActionData(this);
    return v11;
  }
  v12 = (CharaActionData::ActionData *)operator new[](saturated_mul(iActionCount, 0x30ui64));
  this->pSoundAct = v12;
  if ( !v12 )
  {
LABEL_44:
    v11 = 7;
    goto $READ_ERROR_1;
  }
  memset(v12, 0, 48i64 * this->soundDataHeader.iActionCount);
  v13 = 0;
  if ( this->soundDataHeader.iActionCount > 0 )
  {
    v14 = 0i64;
    do
    {
      v15 = in->in;
      pSoundAct = this->pSoundAct;
      v17 = in->in->m_uiPoint;
      if ( in->in->m_uiSize > (unsigned int)v17 )
      {
        pSoundAct[v14].info.iLineCount = *(_DWORD *)&v15->m_pucData[v17];
        v15->m_uiPoint += 4;
      }
      iLineCount = pSoundAct[v14].info.iLineCount;
      if ( (int)iLineCount <= 0 )
      {
        pSoundAct[v14].pLine = 0i64;
      }
      else
      {
        v19 = (CharaActionData::ActionLine *)operator new[](saturated_mul(iLineCount, 0x10ui64));
        pSoundAct[v14].pLine = v19;
        if ( !v19 )
          goto LABEL_44;
        memset(v19, 0, 16i64 * pSoundAct[v14].info.iLineCount);
        v20 = 0;
        if ( pSoundAct[v14].info.iLineCount > 0 )
        {
          v21 = 0i64;
          do
          {
            v22 = in->in;
            pLine = pSoundAct[v14].pLine;
            v24 = in->in->m_uiPoint;
            if ( in->in->m_uiSize > (unsigned int)v24 )
            {
              pLine[v21].iKeyFrameCount = *(_DWORD *)&v22->m_pucData[v24];
              v22->m_uiPoint += 4;
            }
            if ( pLine[v21].iKeyFrameCount <= 0 )
            {
              pLine[v21].pFrame = 0i64;
            }
            else
            {
              v25 = in->in->m_uiPoint;
              if ( in->in->m_uiSize > v25 )
                in->in->m_uiPoint = v25 + 4;
              v27 = 32i64 * pLine[v21].iKeyFrameCount;
              v26 = ((unsigned __int64)pLine[v21].iKeyFrameCount * (unsigned __int128)0x20ui64) >> 64 != 0;
              pLine[v21].iActionLineID = 15;
              if ( v26 )
                v27 = -1i64;
              v28 = (CharaActionData::ActionLineFrame *)operator new[](v27);
              pLine[v21].pFrame = v28;
              if ( !v28 )
                goto LABEL_44;
              v29 = 0;
              if ( pLine[v21].iKeyFrameCount > 0 )
              {
                v30 = 0i64;
                do
                {
                  v31 = in->in;
                  pFrame = pLine[v21].pFrame;
                  v33 = in->in->m_uiPoint;
                  if ( in->in->m_uiSize > v33 )
                  {
                    v34 = &v31->m_pucData[v33];
                    v35 = *((_OWORD *)v34 + 1);
                    v39 = *(_OWORD *)v34;
                    v31->m_uiPoint = v33 + 36;
                    v40 = v35;
                  }
                  pFrame[v30].iFrame = v39;
                  pFrame[v30].iBase[6] = (int)*((float *)&v40 + 3);
                  if ( (int)*((float *)&v40 + 3) )
                  {
                    if ( (int)*((float *)&v40 + 3) == 1 )
                    {
                      pFrame[v30].exclusive.type.nakoruru.iMamahahaAction = WORD5(v39);
                      pFrame[v30].iBase[0] = v40;
                      pFrame[v30].exclusive.type.nakoruru.iMamahahaOption = 0;
                      *(_QWORD *)&pFrame[v30].move.fColX = 0i64;
                      *(_QWORD *)&pFrame[v30].pos.iSettingZ = 0i64;
                    }
                  }
                  else
                  {
                    pFrame[v30].effect.type.set.iPosBase = WORD2(v39);
                    pFrame[v30].iBase[1] = DWORD2(v39);
                    pFrame[v30].effect.type.set.iActFileID = WORD3(v39);
                    pFrame[v30].iBase[0] = v40;
                    pFrame[v30].sound.type.play.iUniqueID = WORD6(v39);
                    pFrame[v30].sound.type.play.iGroupID = HIWORD(v39);
                    pFrame[v30].iBase[5] = DWORD2(v40);
                    pFrame[v30].iBase[3] = (int)*((float *)&v40 + 1);
                  }
                  ++v29;
                  ++v30;
                }
                while ( v29 < pLine[v21].iKeyFrameCount );
              }
            }
            ++v20;
            ++v21;
          }
          while ( v20 < pSoundAct[v14].info.iLineCount );
        }
      }
      ++v13;
      ++v14;
    }
    while ( v13 < this->soundDataHeader.iActionCount );
  }
  v36 = in->in;
  v36->m_pucData = 0i64;
  *(_QWORD *)&v36->m_uiPoint = 0i64;
  return 1i64;
}

void __fastcall InputStreamBroker<CFile>::~InputStreamBroker<CFile>(InputStreamBroker<CFile> *this)
{
  CFile *f; // rbx
  AgFile *m_ptr; // rcx
  AgReferenceCount *m_ref; // rax
  AgPointer<KOFApplication> v4; // [rsp+28h] [rbp-20h] BYREF

  f = this->f;
  m_ptr = this->f->m_file.m_ptr;
  if ( m_ptr )
  {
    m_ref = f->m_file.m_ref;
    f->m_file.m_ref = 0i64;
    f->m_file.m_ptr = 0i64;
    v4.m_ref = m_ref;
    v4.m_ptr = (KOFApplication *)m_ptr;
    AgPointer<AgUser>::~AgPointer<AgUser>(&v4);
  }
  *(_QWORD *)&f->m_iSeekPos = 0i64;
}

void __fastcall InputStreamBroker<OGLInputStream>::~InputStreamBroker<OGLInputStream>(
        InputStreamBroker<OGLInputStream> *this)
{
  OGLInputStream *in; // rax

  in = this->in;
  in->m_pucData = 0i64;
  *(_QWORD *)&in->m_uiPoint = 0i64;
}

bool __fastcall CharaActionData::CheckFileID(CharaActionData *this)
{
  int v1; // eax

  v1 = *(_DWORD *)this->fileHeader.fileIdentifier;
  return v1 == *(_DWORD *)CharaActionData::FILE_IDENTIFIER || v1 == *(_DWORD *)CharaActionData::FILE_IDENTIFIER_EFF;
}

__int64 __fastcall CharaFileBase::GetFormatVersion(CharaFileBase *this)
{
  return this->fileHeader.uiFormatVersion;
}

__int64 __fastcall AgDisplay::getWidth(AgUser *this)
{
  return (unsigned int)this->m_signInBusy;
}

void __fastcall CharaActionData::InitData(CharaActionData *this)
{
  unsigned __int64 v2; // rdx
  int v3; // esi
  __int64 v4; // rdi
  char *v5; // rcx
  char **pActNames; // rcx
  int v7; // esi
  __int64 v8; // rdi
  char *v9; // rcx
  char **pKeys; // rcx
  int v11; // er14
  __int64 v12; // rdi
  CharaActionData::ActionData *pActData; // rax
  int v14; // ebp
  __int64 v15; // rsi
  CharaActionData::ActionLineFrame *pFrame; // rcx
  CharaActionData::ActionLine *pLine; // rcx
  CharaActionData::ActionData *v18; // rcx

  CharaActionData::InitSoundActionData(this);
  if ( this->pActNames )
  {
    v3 = 0;
    if ( this->dataHeader.iActionCount > 0 )
    {
      v4 = 0i64;
      do
      {
        v5 = this->pActNames[v4];
        if ( v5 )
        {
          operator delete(v5, v2);
          this->pActNames[v4] = 0i64;
        }
        ++v3;
        ++v4;
      }
      while ( v3 < this->dataHeader.iActionCount );
    }
    pActNames = this->pActNames;
    if ( pActNames )
    {
      operator delete(pActNames, v2);
      this->pActNames = 0i64;
    }
  }
  if ( this->transKeyData.pKeys )
  {
    v7 = 0;
    if ( this->transKeyData.iDataCount > 0 )
    {
      v8 = 0i64;
      do
      {
        v9 = this->transKeyData.pKeys[v8];
        if ( v9 )
        {
          operator delete(v9, v2);
          this->transKeyData.pKeys[v8] = 0i64;
        }
        ++v7;
        ++v8;
      }
      while ( v7 < this->transKeyData.iDataCount );
    }
    pKeys = this->transKeyData.pKeys;
    if ( pKeys )
    {
      operator delete(pKeys, v2);
      this->transKeyData.pKeys = 0i64;
    }
    this->transKeyData.iDataCount = 0;
  }
  if ( this->pActData )
  {
    v11 = 0;
    if ( this->dataHeader.iActionCount > 0 )
    {
      v12 = 0i64;
      do
      {
        pActData = this->pActData;
        if ( pActData[v12].pLine )
        {
          v14 = 0;
          if ( pActData[v12].info.iLineCount > 0 )
          {
            v15 = 0i64;
            do
            {
              pFrame = this->pActData[v12].pLine[v15].pFrame;
              if ( pFrame )
              {
                operator delete(pFrame, v2);
                this->pActData[v12].pLine[v15].pFrame = 0i64;
              }
              ++v14;
              ++v15;
            }
            while ( v14 < this->pActData[v12].info.iLineCount );
          }
          pLine = this->pActData[v12].pLine;
          if ( pLine )
          {
            operator delete(pLine, v2);
            this->pActData[v12].pLine = 0i64;
          }
        }
        ++v11;
        ++v12;
      }
      while ( v11 < this->dataHeader.iActionCount );
    }
    v18 = this->pActData;
    if ( v18 )
    {
      operator delete(v18, v2);
      this->pActData = 0i64;
    }
  }
  this->dataHeader = 0i64;
  this->fileHeader = 0i64;
  this->iReadErrorID = 0;
}

void __fastcall CharaActionData::InitSoundActionData(CharaActionData *this, unsigned __int64 a2)
{
  int v3; // er14
  __int64 v4; // rdi
  CharaActionData::ActionData *pSoundAct; // rax
  int v6; // ebp
  __int64 v7; // rsi
  CharaActionData::ActionLineFrame *pFrame; // rcx
  CharaActionData::ActionLine *pLine; // rcx
  CharaActionData::ActionData *v10; // rcx

  if ( this->pSoundAct )
  {
    v3 = 0;
    if ( this->soundDataHeader.iActionCount > 0 )
    {
      v4 = 0i64;
      do
      {
        pSoundAct = this->pSoundAct;
        if ( pSoundAct[v4].pLine )
        {
          v6 = 0;
          if ( pSoundAct[v4].info.iLineCount > 0 )
          {
            v7 = 0i64;
            do
            {
              pFrame = this->pSoundAct[v4].pLine[v7].pFrame;
              if ( pFrame )
              {
                operator delete(pFrame, a2);
                this->pSoundAct[v4].pLine[v7].pFrame = 0i64;
              }
              ++v6;
              ++v7;
            }
            while ( v6 < this->pSoundAct[v4].info.iLineCount );
          }
          pLine = this->pSoundAct[v4].pLine;
          if ( pLine )
          {
            operator delete(pLine, a2);
            this->pSoundAct[v4].pLine = 0i64;
          }
        }
        ++v3;
        ++v4;
      }
      while ( v3 < this->soundDataHeader.iActionCount );
    }
    v10 = this->pSoundAct;
    if ( v10 )
    {
      operator delete(v10, a2);
      this->pSoundAct = 0i64;
    }
  }
  this->soundDataHeader = 0i64;
}

bool __fastcall CharaFileBase::IsEmpty(CharaFileBase *this)
{
  return this->iReadErrorID == 0;
}

bool __fastcall CharaActionData::IsReadSuccess(SoundGroupData *this)
{
  return this->iReadErrorID == 1;
}

__int64 __fastcall CharaActionData::ReadBuffer(CharaActionData *this, unsigned __int8 *pBuffer, unsigned int size)
{
  __int64 result; // rax
  unsigned __int8 *v6; // [rsp+28h] [rbp-20h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+38h] [rbp-10h]
  InputStreamBroker<OGLInputStream> in; // [rsp+50h] [rbp+8h] BYREF

  if ( pBuffer )
  {
    v6 = pBuffer;
    LODWORD(v7) = 0;
    HIDWORD(v7) = size;
    v8 = 0;
    in.in = (OGLInputStream *)&v6;
    this->iReadErrorID = CharaActionData::ReadActionData<OGLInputStream>(this, &in);
    v6 = 0i64;
    v7 = 0i64;
  }
  else
  {
    this->iReadErrorID = 2;
  }
  result = this->iReadErrorID;
  if ( (_DWORD)result != 1 )
  {
    _DummyLogging(
      "CharaActionData::%s READ_ERROR_ID::%s [buffer size:%udbytes]",
      "CharaActionData::ReadBuffer",
      CharaActionData::READ_ERROR_ID_NAME[this->iReadErrorID],
      size);
    return (unsigned int)this->iReadErrorID;
  }
  return result;
}

__int64 __fastcall CharaActionData::ReadFile(CharaActionData *this, const char *fileName)
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
    this->iReadErrorID = CharaActionData::ReadActionData<CFile>(this, &v11);
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
      "CharaActionData::%s READ_ERROR_ID::%s [File path:%s]",
      "CharaActionData::ReadFile",
      CharaActionData::READ_ERROR_ID_NAME[this->iReadErrorID],
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

__int64 __fastcall CharaActionData::ReadSoundActionBuffer(
        CharaActionData *this,
        unsigned __int8 *pBuffer,
        unsigned int size)
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
    this->iReadErrorID = CharaActionData::ReadSoundActionData<OGLInputStream>(this, &in);
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
      "CharaActionData::%s READ_ERROR_ID::%s [buffer size:%udbytes]",
      "CharaActionData::ReadSoundActionBuffer",
      CharaActionData::READ_ERROR_ID_NAME[this->iReadErrorID],
      size);
    return (unsigned int)this->iReadErrorID;
  }
  return result;
}

void __fastcall InputStreamBroker<CFile>::close(InputStreamBroker<CFile> *this)
{
  CFile *f; // rbx
  AgFile *m_ptr; // rcx
  AgReferenceCount *m_ref; // rax
  AgPointer<KOFApplication> v4; // [rsp+20h] [rbp-18h] BYREF

  f = this->f;
  m_ptr = this->f->m_file.m_ptr;
  if ( m_ptr )
  {
    m_ref = f->m_file.m_ref;
    v4.m_ptr = (KOFApplication *)m_ptr;
    v4.m_ref = m_ref;
    f->m_file.m_ref = 0i64;
    f->m_file.m_ptr = 0i64;
    AgPointer<AgUser>::~AgPointer<AgUser>(&v4);
  }
  *(_QWORD *)&f->m_iSeekPos = 0i64;
}

__int64 __fastcall InputStreamBroker<CFile>::read(InputStreamBroker<CFile> *this, void *pBuf, int size, int n)
{
  CFile *f; // rdi
  AgFile *m_ptr; // rcx
  unsigned int v7; // ebx

  f = this->f;
  m_ptr = this->f->m_file.m_ptr;
  if ( !m_ptr )
    return 0i64;
  v7 = n * size;
  m_ptr->read(m_ptr, (unsigned __int8 *)pBuf, n * size);
  f->m_iSeekPos += v7;
  return v7;
}

__int64 __fastcall InputStreamBroker<OGLInputStream>::read(
        InputStreamBroker<OGLInputStream> *this,
        void *pBuf,
        int size,
        int n)
{
  OGLInputStream *in; // rdi
  int v5; // ebx
  unsigned int m_uiPoint; // eax

  in = this->in;
  v5 = n * size;
  m_uiPoint = this->in->m_uiPoint;
  if ( this->in->m_uiSize > m_uiPoint )
  {
    memmove(pBuf, &in->m_pucData[m_uiPoint], v5);
    in->m_uiPoint += v5;
  }
  return (unsigned int)v5;
}

