#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/silverware/git/sdk/agclock.h"
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
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
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
#include "dev/silverware/git/sdk/util/agservice.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/baseproject/jni/game/taskfunc/generaltask.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x1408A0C7D
unsigned char CTaskSystem::initialize(long MaxTask, long MaxPri); // 0x140237AA0
void CTaskSystem::finalize(); // 0x140237CA0
void CTaskSystem::Caller(long pri); // 0x140237D20
GENERAL_TASK * CTaskSystem::Entry(long(*pFunc)(GENERAL_TASK *), long iPriority, long iCategory, GENERAL_TASK * pParent); // 0x140237DE0
unsigned char CTaskSystem::Delete(GENERAL_TASK * pGT); // 0x140237EF0
unsigned char CTaskSystem2D::initialize(long MaxTask, long MaxPri); // 0x140238000
void CTaskSystem2D::finalize(); // 0x140238240
void CTaskSystem2D::AllDelete(); // 0x140238310//decompilation failure at 1408A0C7D!
void __fastcall CTaskSystem2D::AllDelete(CTaskSystem2D *this)
{
  int v2; // ebp
  __int64 v3; // r14
  GENERAL_TASK_BASE *pEmpty; // rsi
  GENERAL_TASK_BASE *v5; // rbx
  void (__fastcall *pReleaseFunc)(GENERAL_TASK_BASE *); // rax
  GENERAL_TASK_BASE *pBefore; // rdx
  __int64 iPriority; // r8
  __int64 v9; // rcx
  GENERAL_TASK_BASE *pNext; // rax
  GENERAL_TASK_BASE *pParent; // rax

  v2 = 0;
  if ( this->iMaxPriority > 0 )
  {
    v3 = 0i64;
    do
    {
      while ( this->ppPriStart[v3] )
      {
        pEmpty = this->pEmpty;
        v5 = this->ppPriStart[v3];
        if ( v5 && (v5->iStat & 1) != 0 )
        {
          pReleaseFunc = v5->pReleaseFunc;
          if ( pReleaseFunc )
            pReleaseFunc(this->ppPriStart[v3]);
          pBefore = v5->pBefore;
          iPriority = v5->iPriority;
          v5->pReleaseFunc = 0i64;
          v5->iStat = 0;
          if ( pBefore )
          {
            pNext = v5->pNext;
            if ( pNext )
            {
              pBefore->pNext = pNext;
              v5->pNext->pBefore = v5->pBefore;
            }
            else
            {
              this->ppPriEnd[iPriority] = pBefore;
              v5->pBefore->pNext = 0i64;
            }
          }
          else if ( v5->pNext )
          {
            this->ppPriStart[iPriority] = v5->pNext;
            v5->pNext->pBefore = 0i64;
          }
          else
          {
            v9 = iPriority;
            this->ppPriStart[v9] = 0i64;
            this->ppPriEnd[v9] = 0i64;
          }
          if ( pEmpty )
          {
            pEmpty->pBefore = v5;
            this->pEmpty = v5;
            v5->pBefore = 0i64;
            this->pEmpty->pNext = pEmpty;
          }
          else
          {
            this->pEmpty = v5;
            v5->pBefore = 0i64;
            this->pEmpty->pNext = 0i64;
          }
          pParent = v5->pParent;
          if ( pParent )
          {
            if ( --pParent->iChildNum < 0 )
              v5->pParent->iChildNum = 0;
            v5->pParent = 0i64;
          }
          --this->pAliveNum[iPriority];
          if ( --this->iAliveTotal <= 0 )
            this->iTaskID = 0;
        }
      }
      ++v2;
      ++v3;
    }
    while ( v2 < this->iMaxPriority );
  }
}

void __fastcall CTaskSystem::Caller(CTaskSystem *this, int pri)
{
  GENERAL_TASK *v3; // rbx
  int iStat; // edx
  int (__fastcall *pPreFunc)(GENERAL_TASK *); // rax
  int (__fastcall *pLateFunc)(GENERAL_TASK *); // rax
  GENERAL_TASK *pParent; // rax
  GENERAL_TASK *pNext; // rdi

  v3 = (GENERAL_TASK *)*((_QWORD *)this->ppPriStart + 9);
  if ( v3 )
  {
    do
    {
      iStat = v3->iStat;
      if ( (iStat & 2) != 0 )
      {
        pNext = v3->pNext;
        CTaskSystem::Delete(this, v3);
      }
      else
      {
        v3->iStat = iStat ^ ((unsigned __int16)iStat ^ (unsigned __int16)~(_WORD)iStat) & 0x100;
        pPreFunc = v3->pPreFunc;
        if ( pPreFunc )
          v3->iStat |= ((__int64 (__fastcall *)(GENERAL_TASK *))pPreFunc)(v3);
        if ( (v3->iStat & 0x10) == 0 )
          v3->iStat |= ((__int64 (__fastcall *)(GENERAL_TASK *))v3->pFunc)(v3);
        pLateFunc = v3->pLateFunc;
        if ( pLateFunc )
          v3->iStat |= ((__int64 (__fastcall *)(GENERAL_TASK *))pLateFunc)(v3);
        pParent = v3->pParent;
        if ( pParent )
        {
          if ( (pParent->iStat & 2) != 0 )
            v3->iStat |= 2u;
        }
        v3->iStat &= 0x10Fu;
        pNext = v3->pNext;
      }
      v3 = pNext;
    }
    while ( pNext );
  }
}

unsigned __int8 __fastcall CTaskSystem::Delete(CTaskSystem *this, GENERAL_TASK *pGT)
{
  GENERAL_TASK *pEmpty; // r10
  __int64 iPriority; // r11
  GENERAL_TASK *pBefore; // rdx
  __int64 v8; // rcx
  GENERAL_TASK *pNext; // rax
  GENERAL_TASK *pParent; // rax

  pEmpty = this->pEmpty;
  if ( !pGT || (pGT->iStat & 1) == 0 )
    return 0;
  iPriority = pGT->iPriority;
  pGT->iStat = 0;
  pBefore = pGT->pBefore;
  if ( pBefore )
  {
    pNext = pGT->pNext;
    if ( pNext )
    {
      pBefore->pNext = pNext;
      pGT->pNext->pBefore = pGT->pBefore;
    }
    else
    {
      this->ppPriEnd[iPriority] = pBefore;
      pGT->pBefore->pNext = 0i64;
    }
  }
  else if ( pGT->pNext )
  {
    this->ppPriStart[iPriority] = pGT->pNext;
    pGT->pNext->pBefore = 0i64;
  }
  else
  {
    v8 = iPriority;
    this->ppPriStart[v8] = 0i64;
    this->ppPriEnd[v8] = 0i64;
  }
  if ( pEmpty )
  {
    pEmpty->pBefore = pGT;
    this->pEmpty = pGT;
    pGT->pBefore = 0i64;
    this->pEmpty->pNext = pEmpty;
  }
  else
  {
    this->pEmpty = pGT;
    pGT->pBefore = 0i64;
    this->pEmpty->pNext = 0i64;
  }
  pParent = pGT->pParent;
  if ( pParent )
  {
    if ( --pParent->iChildNum < 0 )
      pGT->pParent->iChildNum = 0;
    pGT->pParent = 0i64;
  }
  --this->pAliveNum[iPriority];
  if ( --this->iAliveTotal <= 0 )
    this->iTaskID = 0;
  return 1;
}

GENERAL_TASK *__fastcall CTaskSystem::Entry(
        CTaskSystem *this,
        int (__fastcall *pFunc)(GENERAL_TASK *),
        int iPriority,
        int iCategory)
{
  GENERAL_TASK *pEmpty; // rbx
  GENERAL_TASK *result; // rax
  GENERAL_TASK **ppPriEnd; // rax
  GENERAL_TASK *v9; // rsi
  GENERAL_TASK *pNext; // rcx
  char *v11; // rcx

  pEmpty = this->pEmpty;
  if ( !pEmpty || this->iMaxPriority <= 9 )
    return 0i64;
  ppPriEnd = this->ppPriEnd;
  v9 = ppPriEnd[9];
  ppPriEnd[9] = pEmpty;
  pNext = this->pEmpty->pNext;
  this->pEmpty = pNext;
  if ( pNext )
    pNext->pBefore = 0i64;
  memset(pEmpty, 0, sizeof(GENERAL_TASK));
  if ( v9 )
  {
    v9->pNext = pEmpty;
    pEmpty->pBefore = v9;
  }
  else
  {
    *((_QWORD *)this->ppPriStart + 9) = pEmpty;
    pEmpty->pBefore = 0i64;
  }
  pEmpty->pNext = 0i64;
  pEmpty->pFunc = pFunc;
  pEmpty->pPreFunc = 0i64;
  pEmpty->pLateFunc = 0i64;
  pEmpty->pParent = 0i64;
  pEmpty->iPriority = 9;
  pEmpty->iStat = 1;
  pEmpty->iTaskID = this->iTaskID;
  pEmpty->iChildNum = 0;
  v11 = &this->pBuffer[this->iTaskID << 8];
  pEmpty->pBuffer = v11;
  memset(v11, 0, 0x100ui64);
  result = pEmpty;
  pEmpty->iTaskCategory = 0;
  ++this->pAliveNum[9];
  ++this->iAliveTotal;
  ++this->iTaskID;
  return result;
}

void __fastcall CTaskSystem2D::finalize(CTaskSystem2D *this, unsigned __int64 a2)
{
  int *pAliveNum; // rcx
  GENERAL_TASK_BASE **ppPriEnd; // rcx
  GENERAL_TASK_BASE **ppPriStart; // rcx
  int v6; // edi
  __int64 v7; // r14
  GENERAL_TASK_BASE *v8; // rsi
  void (__fastcall *pReleaseFunc)(GENERAL_TASK_BASE *); // rax

  pAliveNum = this->pAliveNum;
  if ( pAliveNum )
  {
    operator delete(pAliveNum, a2);
    this->pAliveNum = 0i64;
  }
  ppPriEnd = this->ppPriEnd;
  if ( ppPriEnd )
  {
    operator delete(ppPriEnd, a2);
    this->ppPriEnd = 0i64;
  }
  ppPriStart = this->ppPriStart;
  if ( ppPriStart )
  {
    operator delete(ppPriStart, a2);
    this->ppPriStart = 0i64;
  }
  if ( this->pRealiz )
  {
    v6 = 0;
    if ( this->iTaskMax > 0 )
    {
      v7 = 0i64;
      do
      {
        v8 = &this->pRealiz[v7];
        pReleaseFunc = v8->pReleaseFunc;
        if ( pReleaseFunc )
          pReleaseFunc(&this->pRealiz[v7]);
        ++v6;
        v8->pReleaseFunc = 0i64;
        ++v7;
      }
      while ( v6 < this->iTaskMax );
    }
    if ( this->pRealiz )
    {
      operator delete(this->pRealiz, a2);
      this->pRealiz = 0i64;
    }
  }
  *(_QWORD *)&this->iTaskMax = 0i64;
  this->iAliveTotal = 0;
}

void __fastcall CTaskSystem::finalize(CTaskSystem *this, unsigned __int64 a2)
{
  char *pBuffer; // rcx
  int *pAliveNum; // rcx
  GENERAL_TASK **ppPriEnd; // rcx
  GENERAL_TASK **ppPriStart; // rcx

  pBuffer = this->pBuffer;
  if ( pBuffer )
  {
    operator delete(pBuffer, a2);
    this->pBuffer = 0i64;
  }
  pAliveNum = this->pAliveNum;
  if ( pAliveNum )
  {
    operator delete(pAliveNum, a2);
    this->pAliveNum = 0i64;
  }
  ppPriEnd = this->ppPriEnd;
  if ( ppPriEnd )
  {
    operator delete(ppPriEnd, a2);
    this->ppPriEnd = 0i64;
  }
  ppPriStart = this->ppPriStart;
  if ( ppPriStart )
  {
    operator delete(ppPriStart, a2);
    this->ppPriStart = 0i64;
  }
  if ( this->pRealiz )
  {
    operator delete(this->pRealiz, a2);
    this->pRealiz = 0i64;
  }
  *(_QWORD *)&this->iTaskMax = 0i64;
  this->iAliveTotal = 0;
}

unsigned __int8 __fastcall CTaskSystem2D::initialize(CTaskSystem2D *this, int MaxTask, int MaxPri)
{
  __int64 v3; // rdi
  GENERAL_TASK_BASE *v5; // rax
  float *p_z; // rcx
  unsigned __int64 iMaxPriority; // rcx
  GENERAL_TASK_BASE **v8; // rax
  unsigned __int64 v9; // rcx
  GENERAL_TASK_BASE **v10; // rax
  unsigned __int64 v11; // rcx
  int *v12; // rax
  unsigned __int64 v13; // rdx
  int v14; // edx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r9
  int v18; // er10
  GENERAL_TASK_BASE *pRealiz; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rcx

  v3 = 128i64;
  this->iMaxPriority = 5;
  this->iTaskMax = 128;
  this->iTaskID = 0;
  v5 = (GENERAL_TASK_BASE *)operator new[](saturated_mul(0x80ui64, 0x180ui64));
  if ( v5 )
  {
    p_z = &v5->vPos.z;
    do
    {
      *((_QWORD *)p_z - 1) = 0i64;
      *(_QWORD *)p_z = 0i64;
      *((_QWORD *)p_z + 1) = 0i64;
      *((_QWORD *)p_z + 2) = 0i64;
      *((_QWORD *)p_z + 3) = 0i64;
      *((_QWORD *)p_z + 4) = 0i64;
      *((_QWORD *)p_z + 5) = 0i64;
      *((_QWORD *)p_z + 6) = 0i64;
      *((_QWORD *)p_z + 7) = 0i64;
      *((_QWORD *)p_z + 8) = 0i64;
      *((_QWORD *)p_z + 9) = 0i64;
      *((_QWORD *)p_z + 10) = 0i64;
      *((_QWORD *)p_z + 11) = 0i64;
      p_z[24] = 0.0;
      p_z += 96;
      --v3;
    }
    while ( v3 );
  }
  else
  {
    v5 = 0i64;
  }
  iMaxPriority = this->iMaxPriority;
  this->pRealiz = v5;
  v8 = (GENERAL_TASK_BASE **)operator new[](saturated_mul(iMaxPriority, 8ui64));
  v9 = this->iMaxPriority;
  this->ppPriStart = v8;
  v10 = (GENERAL_TASK_BASE **)operator new[](saturated_mul(v9, 8ui64));
  v11 = this->iMaxPriority;
  this->ppPriEnd = v10;
  v12 = (int *)operator new[](saturated_mul(v11, 4ui64));
  this->pAliveNum = v12;
  if ( this->pRealiz && this->ppPriStart && this->ppPriEnd && v12 )
  {
    v14 = 0;
    if ( this->iMaxPriority > 0 )
    {
      v15 = 0i64;
      v16 = 0i64;
      do
      {
        ++v16;
        ++v14;
        ++v15;
        this->ppPriStart[v16 - 1] = 0i64;
        this->ppPriEnd[v16 - 1] = 0i64;
        this->pAliveNum[v15 - 1] = 0;
      }
      while ( v14 < this->iMaxPriority );
    }
    this->pEmpty = this->pRealiz;
    this->iAliveTotal = 0;
    if ( this->iTaskMax > 0 )
    {
      v17 = 0i64;
      v18 = 1;
      do
      {
        if ( v17 )
        {
          pRealiz = this->pRealiz;
          v20 = v17;
          v21 = v18 - 2;
          if ( v18 - 1 == this->iTaskMax - 1 )
          {
            pRealiz[v20].pBefore = &pRealiz[v21];
            this->pRealiz[v20].pNext = 0i64;
          }
          else
          {
            pRealiz[v20].pBefore = &pRealiz[v21];
            this->pRealiz[v20].pNext = &this->pRealiz[v18];
          }
        }
        else
        {
          this->pRealiz->pBefore = 0i64;
          this->pRealiz->pNext = &this->pRealiz[v18];
        }
        v22 = v17;
        ++v18;
        ++v17;
        this->pRealiz[v22].iStat = 0;
      }
      while ( v18 - 1 < this->iTaskMax );
    }
    return 1;
  }
  else
  {
    CTaskSystem2D::finalize(this, v13);
    return 0;
  }
}

unsigned __int8 __fastcall CTaskSystem::initialize(CTaskSystem *this, int MaxTask, int MaxPri)
{
  unsigned __int64 v4; // rax
  GENERAL_TASK *v5; // rax
  unsigned __int64 iMaxPriority; // rcx
  GENERAL_TASK **v7; // rax
  unsigned __int64 v8; // rcx
  GENERAL_TASK **v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  char *v12; // rax
  unsigned __int64 v13; // rdx
  int v14; // edx
  __int64 v15; // r9
  __int64 v16; // rcx
  char *pBuffer; // rcx
  __int64 v18; // r10
  int v19; // er9
  GENERAL_TASK *pRealiz; // rdx
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rcx

  v4 = 11264i64;
  this->iTaskMax = 128;
  this->iMaxPriority = 10;
  if ( !is_mul_ok(0x80ui64, 0x58ui64) )
    v4 = -1i64;
  this->iTaskID = 0;
  v5 = (GENERAL_TASK *)operator new[](v4);
  iMaxPriority = this->iMaxPriority;
  this->pRealiz = v5;
  v7 = (GENERAL_TASK **)operator new[](saturated_mul(iMaxPriority, 8ui64));
  v8 = this->iMaxPriority;
  this->ppPriStart = v7;
  v9 = (GENERAL_TASK **)operator new[](saturated_mul(v8, 8ui64));
  v10 = this->iMaxPriority;
  this->ppPriEnd = v9;
  v11 = 4 * v10;
  if ( !is_mul_ok(v10, 4ui64) )
    v11 = -1i64;
  this->pAliveNum = (int *)operator new[](v11);
  v12 = (char *)operator new[](0x8000ui64);
  this->pBuffer = v12;
  if ( this->pRealiz && this->ppPriStart && this->ppPriEnd && this->pAliveNum && v12 )
  {
    v14 = 0;
    if ( this->iMaxPriority > 0 )
    {
      v15 = 0i64;
      v16 = 0i64;
      do
      {
        ++v16;
        ++v14;
        ++v15;
        this->ppPriStart[v16 - 1] = 0i64;
        this->ppPriEnd[v16 - 1] = 0i64;
        this->pAliveNum[v15 - 1] = 0;
      }
      while ( v14 < this->iMaxPriority );
    }
    pBuffer = this->pBuffer;
    this->pEmpty = this->pRealiz;
    this->iAliveTotal = 0;
    memset(pBuffer, 0, 0x8000ui64);
    if ( this->iTaskMax > 0 )
    {
      v18 = 0i64;
      v19 = 1;
      do
      {
        if ( v18 )
        {
          pRealiz = this->pRealiz;
          v21 = v18;
          v22 = v19 - 2;
          if ( v19 - 1 == this->iTaskMax - 1 )
          {
            pRealiz[v21].pBefore = &pRealiz[v22];
            this->pRealiz[v21].pNext = 0i64;
          }
          else
          {
            pRealiz[v21].pBefore = &pRealiz[v22];
            this->pRealiz[v21].pNext = &this->pRealiz[v19];
          }
        }
        else
        {
          this->pRealiz->pBefore = 0i64;
          this->pRealiz->pNext = &this->pRealiz[v19];
        }
        ++v19;
        v23 = v18++;
        this->pRealiz[v23].iStat = 0;
      }
      while ( v19 - 1 < this->iTaskMax );
    }
    return 1;
  }
  else
  {
    CTaskSystem::finalize(this, v13);
    return 0;
  }
}

