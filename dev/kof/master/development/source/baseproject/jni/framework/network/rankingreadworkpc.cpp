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
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/network/steamnamecache.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/steamnamecache.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x140889493
SteamNameCache::~SteamNameCache(); // 0x14004C580
bool Fw::cRankingReadWork::beginReadUser(const Fw::cRankingReadRequest * pRequest, Fw::RANKING_HANDLE handle, Fw::HeapMemory & rHeap, bool errorDialogFlag); // 0x14004B7B0
bool Fw::cRankingReadWork::beginReadRank(const Fw::cRankingReadRequest * pRequest, long startRank, long getNum, Fw::RANKING_HANDLE handle, Fw::HeapMemory & rHeap); // 0x14004B850
bool Fw::cRankingReadWork::beginReadRankByPC(const Fw::cRankingReadRequest * pRequest, Fw::RANKING_HANDLE handle, Fw::HeapMemory & rHeap); // 0x14004B8E0
bool Fw::cRankingReadWork::beginReadAttachData(const Fw::cRankingReadRequest * pRequest, Fw::RANKING_HANDLE handle, Fw::HeapMemory & rHeap); // 0x14004B980
bool Fw::cRankingReadWork::createResultBuffer(long num, Fw::HeapMemory & rHeap); // 0x14004BA00
void Fw::cRankingReadWork::releaseBuffer(); // 0x14004BB70
bool Fw::cRankingReadWork::updateFriendEnumBegin(); // 0x14004BBF0
bool Fw::cRankingReadWork::updateNpIdReadBegin(); // 0x14004BD80
bool Fw::cRankingReadWork::updateRankReadBegin(); // 0x14004BE30
bool Fw::cRankingReadWork::updateAttachDataReadWait(); // 0x14004BBE0
void Fw::cRankingReadWork::OnLeaderboardScoresDownloaded(LeaderboardScoresDownloaded_t * pParam, bool bIOFailure); // 0x14004C010
void Fw::cRankingReadWork::OnRemoteStorageDownloadUGCResult(RemoteStorageDownloadUGCResult_t * pParam, bool bIOFailure); // 0x14004C610
bool Fw::cRankingReadWork::updateAttachDataReadBegin(); // 0x14004C710
bool Fw::cRankingReadWork::updateRankReadByNpidPcidBegin(); // 0x14004C7A0
bool Fw::cRankingReadWork::updateRankReadByNpidPcidWait(); // 0x14004C940
bool Fw::cRankingReadWork::updateErrorBegin(); // 0x14004C980
bool Fw::cRankingReadWork::updateNamesWait(); // 0x14004C990//decompilation failure at 140889493!
void __fastcall std::string::~string(std::string *this)
{
  unsigned __int64 Myres; // rax
  std::string *v2; // rbx
  char *Ptr; // rcx
  char *v4; // rax
  unsigned __int64 v5; // rcx
  bool v6; // cf

  Myres = this->_Mypair._Myval2._Myres;
  v2 = this;
  if ( Myres >= 0x10 )
  {
    Ptr = this->_Mypair._Myval2._Bx._Ptr;
    if ( Myres + 1 >= 0x1000 )
    {
      if ( ((unsigned __int8)Ptr & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v4 = (char *)*((_QWORD *)Ptr - 1);
      if ( v4 >= Ptr )
        invalid_parameter_noinfo_noreturn();
      v5 = Ptr - v4;
      if ( v5 < 8 )
        invalid_parameter_noinfo_noreturn();
      if ( v5 > 0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = v4;
    }
    operator delete(Ptr);
  }
  v2->_Mypair._Myval2._Myres = 15i64;
  v6 = v2->_Mypair._Myval2._Myres < 0x10;
  v2->_Mypair._Myval2._Mysize = 0i64;
  if ( !v6 )
    v2 = (std::string *)v2->_Mypair._Myval2._Bx._Ptr;
  v2->_Mypair._Myval2._Bx._Buf[0] = 0;
}

void __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>>>>>::~vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>>>>>(
        std::vector<unsigned char *> *this)
{
  if ( this->_Mypair._Myval2._Myfirst )
  {
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      (std::allocator<AgLogger *> *)this,
      (AgLogger **)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall SteamNameCache::~SteamNameCache(SteamNameCache *this)
{
  SteamNameCache::CCallbackInternal_OnPersonaStateChange *p_m_steamcallback_OnPersonaStateChange; // rcx
  std::allocator<AgLogger *> *v3; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > result; // [rsp+30h] [rbp+8h] BYREF

  p_m_steamcallback_OnPersonaStateChange = &this->m_steamcallback_OnPersonaStateChange;
  p_m_steamcallback_OnPersonaStateChange->__vftable = (SteamNameCache::CCallbackInternal_OnPersonaStateChange_vtbl *)&CCallbackImpl<16>::`vftable';
  if ( (p_m_steamcallback_OnPersonaStateChange->m_nCallbackFlags & 1) != 0 )
    SteamAPI_UnregisterCallback(p_m_steamcallback_OnPersonaStateChange);
  std::string::~string(&this->m_myName);
  std::_Tree<std::_Tmap_traits<std::string,unsigned int,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>,0>>::erase(
    (std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string >,std::allocator<std::pair<std::string const ,OGLModel *> >,0> > *)&this->m_reverseLUT,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >)this->m_reverseLUT._Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >)this->m_reverseLUT._Mypair._Myval2._Myval2._Myhead);
  operator delete(this->m_reverseLUT._Mypair._Myval2._Myval2._Myhead);
  if ( this->m_requests._Mypair._Myval2._Myfirst )
  {
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      v3,
      (AgLogger **)this->m_requests._Mypair._Myval2._Myfirst,
      this->m_requests._Mypair._Myval2._Myend - this->m_requests._Mypair._Myval2._Myfirst);
    this->m_requests._Mypair._Myval2._Myfirst = 0i64;
    this->m_requests._Mypair._Myval2._Mylast = 0i64;
    this->m_requests._Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall Fw::cRankingReadWork::OnLeaderboardScoresDownloaded(
        Fw::cRankingReadWork *this,
        LeaderboardScoresDownloaded_t *pParam,
        bool bIOFailure)
{
  LeaderboardScoresDownloaded_t *v3; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  int v9; // er13
  int v10; // er15
  __int64 v11; // r12
  unsigned int v12; // edi
  __int64 v13; // rax
  std::_Tree_comp_alloc<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string >,std::allocator<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> >,0> > *v14; // rcx
  void *v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  signed int resultIndex; // ecx
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  char *v23; // r8
  char *v24; // r9
  __int64 v25; // r11
  __int64 v26; // r10
  __int64 v27; // r9
  __int64 i; // r8
  CSteamID id; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-C8h]
  int v31; // [rsp+3Ch] [rbp-C4h]
  int v32; // [rsp+40h] [rbp-C0h]
  __int64 v33; // [rsp+48h] [rbp-B8h]
  LeaderboardScoresDownloaded_t *v34; // [rsp+50h] [rbp-B0h]
  __int64 v35; // [rsp+58h] [rbp-A8h]
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > result; // [rsp+68h] [rbp-98h] BYREF
  __int128 Src; // [rsp+70h] [rbp-90h] BYREF
  __int64 v38; // [rsp+80h] [rbp-80h] BYREF
  std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string >,std::allocator<std::pair<std::string const ,OGLModel *> >,0> > v39; // [rsp+88h] [rbp-78h] BYREF
  std::string v40; // [rsp+98h] [rbp-68h] BYREF
  void **v41; // [rsp+B8h] [rbp-48h] BYREF
  char v42; // [rsp+C0h] [rbp-40h]
  int v43; // [rsp+C4h] [rbp-3Ch]
  char v44; // [rsp+C8h] [rbp-38h]
  char v45; // [rsp+C9h] [rbp-37h]
  char v46; // [rsp+CAh] [rbp-36h] BYREF
  int v47; // [rsp+D0h] [rbp-30h] BYREF
  int v48; // [rsp+D4h] [rbp-2Ch]
  char v49[4]; // [rsp+D8h] [rbp-28h]
  char v50[4]; // [rsp+DCh] [rbp-24h]
  __int16 v51[2]; // [rsp+E0h] [rbp-20h]
  char v52[236]; // [rsp+E4h] [rbp-1Ch]

  v35 = -2i64;
  v3 = pParam;
  v34 = pParam;
  if ( this->m_RankingType == RANKING_TYPE_ATTACHDATA )
  {
    id.m_steamid.m_comp = (CSteamID::SteamID_t::SteamIDComponent_t)(__PAIR64__(HIDWORD(id.m_steamid.m_unAll64Bits), 0) & 0xFF0FFFFF00000000ui64);
    HIBYTE(id.m_steamid.m_unAll64Bits) = 0;
    *((_DWORD *)&id.m_steamid.m_comp + 1) &= 0xFFF00000;
    v5 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, pParam);
    (*(void (__fastcall **)(_QWORD, unsigned __int64, _QWORD, CSteamID *, _QWORD, _DWORD))(**(_QWORD **)(v5 + 40)
                                                                                         + 240i64))(
      *(_QWORD *)(v5 + 40),
      v3->m_hSteamLeaderboardEntries,
      0i64,
      &id,
      0i64,
      0);
    v7 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v6);
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v7 + 72) + 192i64))(
           *(_QWORD *)(v7 + 72),
           v33,
           0i64);
    if ( this->m_CallResultRemoteStorageDownloadUGC.m_hAPICall )
      SteamAPI_UnregisterCallResult(&this->m_CallResultRemoteStorageDownloadUGC);
    this->m_CallResultRemoteStorageDownloadUGC.m_hAPICall = v8;
    this->m_CallResultRemoteStorageDownloadUGC.m_pObj = this;
    this->m_CallResultRemoteStorageDownloadUGC.m_Func = Fw::cRankingReadWork::OnRemoteStorageDownloadUGCResult;
    if ( v8 )
      SteamAPI_RegisterCallResult(&this->m_CallResultRemoteStorageDownloadUGC, v8);
    this->m_Rno = 16;
  }
  else
  {
    v9 = 0;
    if ( this->m_BoardId == 531 )
    {
      if ( pParam->m_hSteamLeaderboard == GetLeaderboardHandle(LEADERBOARD_ID_REPLAY_RANK_2) )
      {
        v9 = 1;
      }
      else if ( v3->m_hSteamLeaderboard == GetLeaderboardHandle(LEADERBOARD_ID_REPLAY_RANK_3) )
      {
        v9 = 2;
      }
    }
    v10 = 0;
    if ( v3->m_cEntryCount > 0 )
    {
      v11 = 0i64;
      do
      {
        id.m_steamid.m_comp = (CSteamID::SteamID_t::SteamIDComponent_t)(__PAIR64__(
                                                                          HIDWORD(id.m_steamid.m_unAll64Bits),
                                                                          0) & 0xFF0FFFFF00000000ui64);
        HIBYTE(id.m_steamid.m_unAll64Bits) = 0;
        *((_DWORD *)&id.m_steamid.m_comp + 1) &= 0xFFF00000;
        v12 = 48;
        if ( this->m_BoardId != 531 )
          v12 = 4;
        v13 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, pParam);
        (*(void (__fastcall **)(_QWORD, unsigned __int64, _QWORD, CSteamID *, int *, unsigned int))(**(_QWORD **)(v13 + 40)
                                                                                                  + 240i64))(
          *(_QWORD *)(v13 + 40),
          v3->m_hSteamLeaderboardEntries,
          (unsigned int)v10,
          &id,
          &v47,
          v12);
        Src = 0i64;
        v38 = 0i64;
        v39._Mypair._Myval2._Myval2._Myhead = 0i64;
        v39._Mypair._Myval2._Myval2._Mysize = 0i64;
        v39._Mypair._Myval2._Myval2._Myhead = (std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *)std::_Tree_comp_alloc<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Buyheadnode(v14);
        v40._Mypair._Myval2._Myres = 15i64;
        v40._Mypair._Myval2._Mysize = 0i64;
        v40._Mypair._Myval2._Bx._Buf[0] = 0;
        v42 = 0;
        v43 = 0;
        v41 = &SteamNameCache::CCallbackInternal_OnPersonaStateChange::`vftable';
        SteamAPI_RegisterCallback(&v41, 304i64);
        SteamNameCache::request(SteamNameCache::ms_instance, id);
        v41 = &CCallbackImpl<16>::`vftable';
        if ( (v42 & 1) != 0 )
          SteamAPI_UnregisterCallback(&v41);
        std::string::~string(&v40);
        std::_Tree<std::_Tmap_traits<std::string,unsigned int,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>,0>>::erase(
          &v39,
          &result,
          (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >)v39._Mypair._Myval2._Myval2._Myhead->_Left,
          (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >)v39._Mypair._Myval2._Myval2._Myhead);
        operator delete(v39._Mypair._Myval2._Myval2._Myhead);
        v15 = (void *)Src;
        if ( (_QWORD)Src )
        {
          v16 = (v38 - (__int64)Src) >> 3;
          if ( v16 > 0x1FFFFFFFFFFFFFFFi64 )
            invalid_parameter_noinfo_noreturn();
          if ( 8 * v16 >= 0x1000 )
          {
            if ( (Src & 0x1F) != 0 )
              invalid_parameter_noinfo_noreturn();
            v17 = *(_QWORD *)(Src - 8);
            if ( v17 >= (unsigned __int64)Src )
              invalid_parameter_noinfo_noreturn();
            if ( (unsigned __int64)Src - v17 < 8 )
              invalid_parameter_noinfo_noreturn();
            if ( (unsigned __int64)Src - v17 > 0x27 )
              invalid_parameter_noinfo_noreturn();
            v15 = *(void **)(Src - 8);
          }
          operator delete(v15);
        }
        resultIndex = v10;
        if ( this->m_BoardId == 531 )
        {
          resultIndex = this->resultIndex;
          this->resultIndex = resultIndex + 1;
        }
        if ( (unsigned int)(this->m_RankingType - 1) <= 1 )
        {
          v20 = resultIndex;
          this->m_pScoreRankDataArray[v20].npId = id;
          this->m_pScoreRankDataArray[v20].pcId = v9;
          this->m_pScoreRankDataArray[v20].rank = v30;
          this->m_pScoreRankDataArray[v20].serialRank = v30;
          this->m_pScoreRankDataArray[v20].scoreValue = v31;
          this->m_pScoreRankDataArray[v20].hasGameData = this->m_BoardId == 531;
        }
        else
        {
          v19 = resultIndex;
          this->m_pPlayerRankDataArray[v19].hasData = 1;
          this->m_pPlayerRankDataArray[v19].rankData.npId = id;
          this->m_pPlayerRankDataArray[v19].rankData.pcId = v9;
          this->m_pPlayerRankDataArray[v19].rankData.scoreValue = v31;
          this->m_pPlayerRankDataArray[v19].rankData.highestRank = v30;
          this->m_pPlayerRankDataArray[v19].rankData.serialRank = v30;
          this->m_pPlayerRankDataArray[v19].rankData.hasGameData = this->m_BoardId == 531;
        }
        if ( this->m_BoardId == 531 )
        {
          v21 = v48 | (unsigned __int64)((__int64)v47 << 32);
          *(_QWORD *)&Src = v21;
          BYTE2(v43) = v49[0];
          HIBYTE(v43) = v50[0];
          v44 = v51[0];
          v45 = v52[0];
          if ( (unsigned int)(this->m_RankingType - 1) <= 1 )
            this->m_pScoreRankDataArray[v11].recordDate.tick = v21;
          else
            this->m_pPlayerRankDataArray[resultIndex].rankData.recordDate.tick = v21;
          v22 = 6i64;
          v23 = (char *)&v38 + 1;
          v24 = &v46;
          v25 = 2i64;
          do
          {
            v26 = 3i64;
            do
            {
              *(_QWORD *)(v23 - 9) = *(_DWORD *)&v49[4 * v22 - 4] | (unsigned __int64)((__int64)*(&v47 + v22) << 32);
              *v23 = v49[4 * v22];
              *(v23 - 1) = v50[4 * v22];
              *(_WORD *)(v23 + 1) = v51[2 * v22];
              *(v24 - 10) = v52[4 * v22];
              *v24 = v52[4 * v22 + 4];
              v22 += 7i64;
              v23 += 12;
              ++v24;
              --v26;
            }
            while ( v26 );
            --v25;
          }
          while ( v25 );
          this->m_pGameInfoArray[resultIndex].infoSize = 96;
          memmove(this->m_pGameInfoArray[resultIndex].data, &Src, this->m_pGameInfoArray[resultIndex].infoSize);
        }
        else
        {
          v27 = resultIndex;
          this->m_pGameInfoArray[v27].infoSize = v32;
          for ( i = 0i64; i < v12; ++i )
          {
            pParam = (LeaderboardScoresDownloaded_t *)(v27 * 132 + i);
            this->m_pGameInfoArray[v27].data[i] = *((_BYTE *)&v47 + 4 * i);
          }
        }
        ++v10;
        ++v11;
        v3 = v34;
      }
      while ( v10 < v34->m_cEntryCount );
    }
    if ( this->m_BoardId != 531 || (++this->subCallsCompleted, this->subCallsCompleted == 3) )
      this->m_Rno = RNO_MAX|RNO_WRITE_WAIT;
  }
}

void __fastcall Fw::cRankingReadWork::OnRemoteStorageDownloadUGCResult(
        Fw::cRankingReadWork *this,
        RemoteStorageDownloadUGCResult_t *pParam,
        bool bIOFailure)
{
  __int64 v5; // rax
  signed int m_Flag; // eax
  signed int v7; // edx
  Fw::RANKING_RESULT m_Result; // eax

  if ( pParam->m_eResult == k_EResultOK )
  {
    v5 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, pParam);
    (*(void (__fastcall **)(_QWORD, unsigned __int64, Fw::sRankingAttachData *, _QWORD, _DWORD, int))(**(_QWORD **)(v5 + 72) + 216i64))(
      *(_QWORD *)(v5 + 72),
      pParam->m_hFile,
      this->m_pAttachDataArray,
      (unsigned int)pParam->m_nSizeInBytes,
      0,
      2);
    m_Flag = this->m_Flag;
    if ( (m_Flag & 0x40000000) != 0 )
    {
      this->m_Result = RANKING_RESULT_CANCEL;
      this->m_Rno = RNO_NONE;
      return;
    }
    if ( m_Flag >= 0 )
    {
      this->m_Rno = RNO_NONE;
      this->m_Result = RANKING_RESULT_SUCCEED;
      return;
    }
  }
  else
  {
    this->m_Flag |= 0x80000000;
    v7 = this->m_Flag;
    this->m_Result = RANKING_RESULT_ERROR;
    this->m_pErrorMessage = 0i64;
    if ( (v7 & 0x40000000) != 0 )
    {
      this->m_Result = RANKING_RESULT_CANCEL;
      this->m_Rno = RNO_NONE;
      return;
    }
    m_Result = this->m_Result;
    if ( v7 >= 0 )
      m_Result = RANKING_RESULT_SUCCEED;
    this->m_Result = m_Result;
  }
  this->m_Rno = RNO_NONE;
}

void __fastcall CCallResult<Fw::cRankingReadWork,LeaderboardScoresDownloaded_t>::Set(
        CCallResult<Fw::cRankingReadWork,LeaderboardScoresDownloaded_t> *this,
        unsigned __int64 hAPICall,
        Fw::cRankingReadWork *p,
        void (__fastcall *func)(Fw::cRankingReadWork *this, LeaderboardScoresDownloaded_t *, bool))
{
  if ( this->m_hAPICall )
    SteamAPI_UnregisterCallResult(this);
  this->m_hAPICall = hAPICall;
  this->m_Func = Fw::cRankingReadWork::OnLeaderboardScoresDownloaded;
  this->m_pObj = p;
  if ( hAPICall )
    SteamAPI_RegisterCallResult(this, hAPICall);
}

void __fastcall std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Erase(
        std::_Tree<std::_Tset_traits<std::string,std::less<std::string >,std::allocator<std::string >,0> > *this,
        std::_Tree_node<std::string,void *> *_Rootnode)
{
  std::_Tree_node<std::string,void *> *v2; // rsi
  std::_Tree_node<std::string,void *> *i; // rdi
  unsigned __int64 Myres; // rax
  void **p_Myval; // rbx
  char *v7; // rcx
  char *v8; // rax
  unsigned __int64 v9; // rcx
  bool v10; // cf

  v2 = _Rootnode;
  for ( i = _Rootnode; !i->_Isnil; v2 = i )
  {
    std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Erase(
      this,
      i->_Right);
    Myres = v2->_Myval._Mypair._Myval2._Myres;
    p_Myval = (void **)&v2->_Myval;
    i = i->_Left;
    if ( Myres >= 0x10 )
    {
      v7 = (char *)*p_Myval;
      if ( Myres + 1 >= 0x1000 )
      {
        if ( ((unsigned __int8)v7 & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v8 = (char *)*((_QWORD *)v7 - 1);
        if ( v8 >= v7 )
          invalid_parameter_noinfo_noreturn();
        v9 = v7 - v8;
        if ( v9 < 8 )
          invalid_parameter_noinfo_noreturn();
        if ( v9 > 0x27 )
          invalid_parameter_noinfo_noreturn();
        v7 = v8;
      }
      operator delete(v7);
    }
    v2->_Myval._Mypair._Myval2._Myres = 15i64;
    v10 = v2->_Myval._Mypair._Myval2._Myres < 0x10;
    v2->_Myval._Mypair._Myval2._Mysize = 0i64;
    if ( !v10 )
      p_Myval = (void **)*p_Myval;
    *(_BYTE *)p_Myval = 0;
    operator delete(v2);
  }
}

void __fastcall std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Lrotate(
        std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *this,
        std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *_Wherenode)
{
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Right; // r8
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Parent; // rax

  Right = _Wherenode->_Right;
  _Wherenode->_Right = Right->_Left;
  if ( !Right->_Left->_Isnil )
    Right->_Left->_Parent = _Wherenode;
  Right->_Parent = _Wherenode->_Parent;
  if ( _Wherenode == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
  {
    this->_Mypair._Myval2._Myval2._Myhead->_Parent = Right;
    Right->_Left = _Wherenode;
    _Wherenode->_Parent = Right;
  }
  else
  {
    Parent = _Wherenode->_Parent;
    if ( _Wherenode == Parent->_Left )
      Parent->_Left = Right;
    else
      Parent->_Right = Right;
    Right->_Left = _Wherenode;
    _Wherenode->_Parent = Right;
  }
}

void __fastcall std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Rrotate(
        std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *this,
        std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *_Wherenode)
{
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Left; // r8
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Right; // rax
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Parent; // rax

  Left = _Wherenode->_Left;
  _Wherenode->_Left = _Wherenode->_Left->_Right;
  Right = Left->_Right;
  if ( !Right->_Isnil )
    Right->_Parent = _Wherenode;
  Left->_Parent = _Wherenode->_Parent;
  if ( _Wherenode == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
  {
    this->_Mypair._Myval2._Myval2._Myhead->_Parent = Left;
    Left->_Right = _Wherenode;
    _Wherenode->_Parent = Left;
  }
  else
  {
    Parent = _Wherenode->_Parent;
    if ( _Wherenode == Parent->_Right )
      Parent->_Right = Left;
    else
      Parent->_Left = Left;
    Left->_Right = _Wherenode;
    _Wherenode->_Parent = Left;
  }
}

void __fastcall std::string::_Tidy(std::string *this, bool _Built, unsigned __int64 _Newsize)
{
  std::string *v4; // rbx
  char *Ptr; // rdi
  char *v6; // rax
  unsigned __int64 v7; // rdi
  bool v8; // cf

  v4 = this;
  if ( _Built && this->_Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = this->_Mypair._Myval2._Bx._Ptr;
    if ( _Newsize )
      memmove(this, this->_Mypair._Myval2._Bx._Ptr, _Newsize);
    if ( v4->_Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( ((unsigned __int8)Ptr & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v6 = (char *)*((_QWORD *)Ptr - 1);
      if ( v6 >= Ptr )
        invalid_parameter_noinfo_noreturn();
      v7 = Ptr - v6;
      if ( v7 < 8 )
        invalid_parameter_noinfo_noreturn();
      if ( v7 > 0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = v6;
    }
    operator delete(Ptr);
  }
  v4->_Mypair._Myval2._Myres = 15i64;
  v8 = v4->_Mypair._Myval2._Myres < 0x10;
  v4->_Mypair._Myval2._Mysize = _Newsize;
  if ( !v8 )
    v4 = (std::string *)v4->_Mypair._Myval2._Bx._Ptr;
  v4->_Mypair._Myval2._Bx._Buf[_Newsize] = 0;
}

bool __fastcall Fw::cRankingReadWork::beginReadAttachData(
        Fw::cRankingReadWork *this,
        const Fw::cRankingReadRequest *pRequest,
        Fw::HeapMemory *handle,
        Fw::HeapMemory *rHeap)
{
  Fw::RANKING_HANDLE v4; // edi
  bool result; // al

  v4 = (int)handle;
  if ( this->m_Rno
    || (this->m_RankingType = RANKING_TYPE_ATTACHDATA,
        this->m_Flag = 0,
        this->m_Result = RANKING_RESULT_CONTINUE,
        this->m_pErrorMessage = 0i64,
        this->m_BoardId = pRequest->m_BoardId,
        this->m_PcId = pRequest->m_PcId,
        this->m_pNpIdArray = pRequest->m_AttachData.m_pNpIdArray,
        !Fw::cRankingReadWork::createResultBuffer(this, 1, handle)) )
  {
    Fw::cRankingReadWork::releaseBuffer(this);
    return 0;
  }
  else
  {
    this->m_WorkHandle = v4;
    result = 1;
    this->m_Rno = RNO_MAX;
  }
  return result;
}

bool __fastcall Fw::cRankingReadWork::beginReadRank(
        Fw::cRankingReadWork *this,
        const Fw::cRankingReadRequest *pRequest,
        Fw::HeapMemory *startRank,
        int getNum,
        Fw::RANKING_HANDLE handle)
{
  int v6; // esi
  bool result; // al

  v6 = (int)startRank;
  if ( this->m_Rno
    || (this->m_RankingType = RANKING_TYPE_RANKING,
        this->m_Flag = 0,
        this->m_Result = RANKING_RESULT_CONTINUE,
        this->m_pErrorMessage = 0i64,
        this->m_BoardId = pRequest->m_BoardId,
        this->m_PcId = pRequest->m_PcId,
        !Fw::cRankingReadWork::createResultBuffer(this, getNum, startRank)) )
  {
    Fw::cRankingReadWork::releaseBuffer(this);
    return 0;
  }
  else
  {
    this->m_WorkHandle = handle;
    result = 1;
    this->m_RankStart = v6;
    this->m_GetNum = getNum;
    this->m_Rno = RNO_DELETE_DATA_MULTISLOT_BEGIN;
  }
  return result;
}

bool __fastcall Fw::cRankingReadWork::beginReadRankByPC(
        Fw::cRankingReadWork *this,
        const Fw::cRankingReadRequest *pRequest,
        Fw::HeapMemory *handle,
        Fw::HeapMemory *rHeap)
{
  Fw::RANKING_HANDLE v4; // esi
  bool result; // al

  v4 = (int)handle;
  if ( this->m_Rno )
    goto $error_2;
  this->m_RankingType = RANKING_TYPE_RANKING_BY_PC;
  this->m_Flag = 0;
  this->m_Result = RANKING_RESULT_CONTINUE;
  this->m_pErrorMessage = 0i64;
  this->m_BoardId = pRequest->m_BoardId;
  this->m_PcId = pRequest->m_PcId;
  this->m_pScoreNpIdPcId = pRequest->m_RankByPc.m_pNpIdPcIdArray;
  this->m_ScoreNpIdPcIdSize = pRequest->m_User.m_NpIdNum;
  if ( !Fw::cRankingReadWork::createResultBuffer(this, pRequest->m_User.m_NpIdNum, handle) )
  {
$error_2:
    Fw::cRankingReadWork::releaseBuffer(this);
    return 0;
  }
  else
  {
    this->m_GetNum = pRequest->m_User.m_NpIdNum;
    result = 1;
    this->m_WorkHandle = v4;
    this->m_Rno = RNO_ERROR_BEGIN;
  }
  return result;
}

bool __fastcall Fw::cRankingReadWork::beginReadUser(
        Fw::cRankingReadWork *this,
        const Fw::cRankingReadRequest *pRequest,
        Fw::HeapMemory *handle,
        Fw::HeapMemory *rHeap)
{
  Fw::RANKING_HANDLE v4; // esi
  bool result; // al

  v4 = (int)handle;
  if ( this->m_Rno
    || (*(_QWORD *)&this->m_Flag = 0i64,
        this->m_Result = RANKING_RESULT_CONTINUE,
        this->m_pErrorMessage = 0i64,
        this->m_BoardId = pRequest->m_BoardId,
        this->m_PcId = pRequest->m_PcId,
        this->m_pNpIdArray = pRequest->m_User.m_pNpIdArray,
        this->m_NpIdArraySize = pRequest->m_User.m_NpIdNum,
        !Fw::cRankingReadWork::createResultBuffer(this, pRequest->m_User.m_NpIdNum, handle)) )
  {
    Fw::cRankingReadWork::releaseBuffer(this);
    return 0;
  }
  else
  {
    this->m_GetNum = pRequest->m_User.m_NpIdNum;
    result = 1;
    this->m_ErrorDialog = 0;
    this->m_WorkHandle = v4;
    this->m_Rno = RNO_WRITE_VARIABLE_MULTISLOT_BEGIN;
  }
  return result;
}

char __fastcall Fw::cRankingReadWork::createResultBuffer(Fw::cRankingReadWork *this, int num, Fw::HeapMemory *rHeap)
{
  __int64 v4; // rdi
  Fw::cRankingReadWork::RANKING_TYPE m_RankingType; // ecx
  __int32 v6; // ecx
  __int32 v7; // ecx
  __int32 v8; // ecx
  unsigned __int64 v9; // rcx
  Fw::ScorePlayerRankData *v10; // rax
  Fw::ScoreRankData *v11; // rax
  Fw::cRankingReadWork::RANKING_TYPE v12; // edx
  Fw::ScoreGameInfo *v13; // rax
  Fw::sRankingAttachData *v14; // rax

  v4 = num;
  m_RankingType = this->m_RankingType;
  if ( m_RankingType )
  {
    v6 = m_RankingType - 1;
    if ( !v6 || (v7 = v6 - 1) == 0 )
    {
      this->m_PlayerRankDataArraySize = 0i64;
      this->m_ScoreRankDataArraySize = 48i64 * num;
      goto LABEL_12;
    }
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        goto LABEL_12;
      this->m_PlayerRankDataArraySize = 0i64;
      goto LABEL_11;
    }
    v9 = 168i64 * num;
  }
  else
  {
    v9 = 56i64 * num;
  }
  this->m_PlayerRankDataArraySize = v9;
LABEL_11:
  this->m_ScoreRankDataArraySize = 0i64;
LABEL_12:
  if ( this->m_PlayerRankDataArraySize )
  {
    v10 = (Fw::ScorePlayerRankData *)aligned_malloc(LODWORD(this->m_PlayerRankDataArraySize), 0x20ui64);
    this->m_pPlayerRankDataArray = v10;
    if ( !v10 )
      return 0;
    memset(v10, 0, this->m_PlayerRankDataArraySize);
  }
  if ( !this->m_ScoreRankDataArraySize )
    goto LABEL_18;
  v11 = (Fw::ScoreRankData *)aligned_malloc(LODWORD(this->m_ScoreRankDataArraySize), 0x20ui64);
  this->m_pScoreRankDataArray = v11;
  if ( !v11 )
    return 0;
  memset(v11, 0, this->m_ScoreRankDataArraySize);
LABEL_18:
  v12 = this->m_RankingType;
  if ( v12 != RANKING_TYPE_ATTACHDATA )
  {
    this->m_GameInfoArraySize = 132 * v4;
    if ( v12 == RANKING_TYPE_RANKING_BY_PC )
      this->m_GameInfoArraySize = 396 * v4;
    v13 = (Fw::ScoreGameInfo *)aligned_malloc(LODWORD(this->m_GameInfoArraySize), 0x20ui64);
    this->m_pGameInfoArray = v13;
    if ( !v13 )
      return 0;
    memset(v13, 0, this->m_GameInfoArraySize);
  }
  if ( this->m_RankingType == RANKING_TYPE_ATTACHDATA )
  {
    this->m_AttachDataArraySize = v4 << 20;
    v14 = (Fw::sRankingAttachData *)aligned_malloc((unsigned int)((_DWORD)v4 << 20), 0x20ui64);
    this->m_pAttachDataArray = v14;
    if ( !v14 )
      return 0;
    memset(v14, 0, this->m_AttachDataArraySize);
    this->m_ReceiveSize = 0x100000i64;
  }
  return 1;
}

void __fastcall std::_Wrap_alloc<std::allocator<unsigned char>>::deallocate(
        std::_Wrap_alloc<std::allocator<AgSuspendingEvent> > *this,
        AgSuspendingEvent *_Ptr,
        unsigned __int64 _Count)
{
  AgSuspendingEvent *v3; // rax
  AgSuspendingEvent *v4; // rdx

  if ( _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    v3 = *(AgSuspendingEvent **)&_Ptr[-8];
    if ( v3 >= _Ptr )
      invalid_parameter_noinfo_noreturn();
    v4 = (AgSuspendingEvent *)(_Ptr - v3);
    if ( (unsigned __int64)v4 < 8 )
      invalid_parameter_noinfo_noreturn();
    if ( (unsigned __int64)v4 > 0x27 )
      invalid_parameter_noinfo_noreturn();
    _Ptr = v3;
  }
  operator delete(_Ptr);
}

void __fastcall std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
        std::allocator<AgLogger *> *this,
        AgLogger **_Ptr,
        unsigned __int64 _Count)
{
  AgLogger **v3; // rax
  char *v4; // rdx

  if ( _Count > 0x1FFFFFFFFFFFFFFFi64 )
    invalid_parameter_noinfo_noreturn();
  if ( 8 * _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    v3 = (AgLogger **)*(_Ptr - 1);
    if ( v3 >= _Ptr )
      invalid_parameter_noinfo_noreturn();
    v4 = (char *)((char *)_Ptr - (char *)v3);
    if ( (unsigned __int64)v4 < 8 )
      invalid_parameter_noinfo_noreturn();
    if ( (unsigned __int64)v4 > 0x27 )
      invalid_parameter_noinfo_noreturn();
    _Ptr = v3;
  }
  operator delete(_Ptr);
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > *__fastcall std::_Tree<std::_Tmap_traits<std::string,unsigned int,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string >,std::allocator<std::pair<std::string const ,OGLModel *> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > _First,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > _Last)
{
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Myhead; // rdx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v7; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Right; // rdx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *j; // rcx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *i; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > resulta; // [rsp+40h] [rbp+8h] BYREF
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v13; // [rsp+50h] [rbp+18h]
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Ptr; // [rsp+58h] [rbp+20h]

  Ptr = _Last._Ptr;
  v13 = _First._Ptr;
  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  if ( _First._Ptr == this->_Mypair._Myval2._Myval2._Myhead->_Left && _Last._Ptr == Myhead )
  {
    std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Erase(
      (std::_Tree<std::_Tset_traits<std::string,std::less<std::string >,std::allocator<std::string >,0> > *)this,
      (std::_Tree_node<std::string,void *> *)Myhead->_Parent);
    this->_Mypair._Myval2._Myval2._Myhead->_Parent = this->_Mypair._Myval2._Myval2._Myhead;
    this->_Mypair._Myval2._Myval2._Myhead->_Left = this->_Mypair._Myval2._Myval2._Myhead;
    this->_Mypair._Myval2._Myval2._Myhead->_Right = this->_Mypair._Myval2._Myval2._Myhead;
    this->_Mypair._Myval2._Myval2._Mysize = 0i64;
    result->_Ptr = this->_Mypair._Myval2._Myval2._Myhead->_Left;
  }
  else
  {
    if ( _First._Ptr != _Last._Ptr )
    {
      do
      {
        v7 = _First._Ptr;
        if ( !_First._Ptr->_Isnil )
        {
          Right = _First._Ptr->_Right;
          if ( Right->_Isnil )
          {
            for ( i = _First._Ptr->_Parent; !i->_Isnil; i = i->_Parent )
            {
              if ( _First._Ptr != i->_Right )
                break;
              _First._Ptr = i;
              v13 = i;
            }
            v13 = i;
          }
          else
          {
            for ( j = Right->_Left; !j->_Isnil; j = j->_Left )
              Right = j;
            v13 = Right;
          }
        }
        std::_Tree<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::erase(
          this,
          &resulta,
          (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >)v7);
        _First._Ptr = v13;
      }
      while ( v13 != Ptr );
    }
    result->_Ptr = _First._Ptr;
  }
  return result;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > *__fastcall std::_Tree<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string >,std::allocator<std::pair<std::string const ,OGLModel *> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > _Where)
{
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v5; // rdi
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Right; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *j; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *i; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v9; // r10
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Parent; // r9
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *k; // rcx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Left; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Myhead; // rdx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v14; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *m; // rcx
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > *v16; // rax
  char Color; // cl
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v18; // r11
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v19; // rbx
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v20; // rdx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v21; // rcx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v22; // rax
  unsigned __int64 Myres; // rax
  void **p_Myval; // rbx
  char *v25; // rcx
  char *v26; // rax
  unsigned __int64 v27; // rcx
  bool v28; // cf
  unsigned __int64 Mysize; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Ptr; // [rsp+50h] [rbp+18h]

  Ptr = _Where._Ptr;
  v5 = _Where._Ptr;
  if ( !_Where._Ptr->_Isnil )
  {
    Right = _Where._Ptr->_Right;
    if ( Right->_Isnil )
    {
      for ( i = _Where._Ptr->_Parent; !i->_Isnil; i = i->_Parent )
      {
        if ( _Where._Ptr != i->_Right )
          break;
        _Where._Ptr = i;
      }
      _Where._Ptr = i;
      Ptr = i;
    }
    else
    {
      _Where._Ptr = _Where._Ptr->_Right;
      for ( j = Right->_Left; !j->_Isnil; j = j->_Left )
        _Where._Ptr = j;
      Ptr = _Where._Ptr;
    }
  }
  if ( v5->_Left->_Isnil )
  {
    v9 = v5->_Right;
LABEL_15:
    Parent = v5->_Parent;
    if ( !v9->_Isnil )
      v9->_Parent = Parent;
    if ( this->_Mypair._Myval2._Myval2._Myhead->_Parent == v5 )
    {
      this->_Mypair._Myval2._Myval2._Myhead->_Parent = v9;
    }
    else if ( Parent->_Left == v5 )
    {
      Parent->_Left = v9;
    }
    else
    {
      Parent->_Right = v9;
    }
    if ( this->_Mypair._Myval2._Myval2._Myhead->_Left == v5 )
    {
      if ( v9->_Isnil )
      {
        k = Parent;
      }
      else
      {
        Left = v9->_Left;
        for ( k = v9; !Left->_Isnil; Left = Left->_Left )
          k = Left;
      }
      this->_Mypair._Myval2._Myval2._Myhead->_Left = k;
    }
    Myhead = this->_Mypair._Myval2._Myval2._Myhead;
    if ( this->_Mypair._Myval2._Myval2._Myhead->_Right == v5 )
    {
      if ( v9->_Isnil )
      {
        Myhead->_Right = Parent;
      }
      else
      {
        v14 = v9->_Right;
        for ( m = v9; !v14->_Isnil; v14 = v14->_Right )
          m = v14;
        Myhead->_Right = m;
      }
    }
    goto LABEL_45;
  }
  if ( v5->_Right->_Isnil )
  {
    v9 = v5->_Left;
    goto LABEL_15;
  }
  v9 = _Where._Ptr->_Right;
  if ( _Where._Ptr == v5 )
    goto LABEL_15;
  v5->_Left->_Parent = _Where._Ptr;
  _Where._Ptr->_Left = v5->_Left;
  if ( _Where._Ptr == v5->_Right )
  {
    Parent = _Where._Ptr;
  }
  else
  {
    Parent = _Where._Ptr->_Parent;
    if ( !v9->_Isnil )
      v9->_Parent = Parent;
    Parent->_Left = v9;
    _Where._Ptr->_Right = v5->_Right;
    v5->_Right->_Parent = _Where._Ptr;
  }
  if ( this->_Mypair._Myval2._Myval2._Myhead->_Parent == v5 )
  {
    this->_Mypair._Myval2._Myval2._Myhead->_Parent = _Where._Ptr;
  }
  else
  {
    v16 = (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > *)v5->_Parent;
    if ( v16->_Ptr == v5 )
      v16->_Ptr = _Where._Ptr;
    else
      v16[2]._Ptr = _Where._Ptr;
  }
  _Where._Ptr->_Parent = v5->_Parent;
  Color = _Where._Ptr->_Color;
  _Where._Ptr->_Color = v5->_Color;
  v5->_Color = Color;
LABEL_45:
  if ( v5->_Color == 1 )
  {
    if ( v9 != this->_Mypair._Myval2._Myval2._Myhead->_Parent )
    {
      do
      {
        v18 = Parent;
        v19 = Parent;
        if ( v9->_Color != 1 )
          break;
        v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Left;
        if ( v9 == Parent->_Left )
        {
          v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Right;
          if ( !v20->_Color )
          {
            v20->_Color = 1;
            v21 = Parent->_Right;
            Parent->_Color = 0;
            Parent->_Right = v21->_Left;
            if ( !v21->_Left->_Isnil )
              v21->_Left->_Parent = Parent;
            v21->_Parent = Parent->_Parent;
            if ( Parent == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
            {
              this->_Mypair._Myval2._Myval2._Myhead->_Parent = v21;
            }
            else
            {
              v22 = Parent->_Parent;
              if ( Parent == v22->_Left )
                v22->_Left = v21;
              else
                v22->_Right = v21;
            }
            v21->_Left = Parent;
            v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Right;
            Parent->_Parent = v21;
          }
          if ( v20->_Isnil )
            goto LABEL_70;
          if ( v20->_Left->_Color != 1 || v20->_Right->_Color != 1 )
          {
            if ( v20->_Right->_Color == 1 )
            {
              v20->_Left->_Color = 1;
              v20->_Color = 0;
              std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Rrotate(
                (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
                v20);
              v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Right;
            }
            v20->_Color = Parent->_Color;
            Parent->_Color = 1;
            v20->_Right->_Color = 1;
            std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Lrotate(
              (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
              (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent);
            break;
          }
        }
        else
        {
          if ( !v20->_Color )
          {
            v20->_Color = 1;
            Parent->_Color = 0;
            std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Rrotate(
              (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
              (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent);
            v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Left;
          }
          if ( v20->_Isnil )
            goto LABEL_70;
          if ( v20->_Right->_Color != 1 || v20->_Left->_Color != 1 )
          {
            if ( v20->_Left->_Color == 1 )
            {
              v20->_Right->_Color = 1;
              v20->_Color = 0;
              std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Lrotate(
                (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
                v20);
              v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Left;
            }
            v20->_Color = Parent->_Color;
            Parent->_Color = 1;
            v20->_Left->_Color = 1;
            std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Rrotate(
              (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
              (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent);
            break;
          }
        }
        v20->_Color = 0;
LABEL_70:
        v9 = v19;
        Parent = Parent->_Parent;
      }
      while ( v18 != this->_Mypair._Myval2._Myval2._Myhead->_Parent );
    }
    v9->_Color = 1;
  }
  Myres = v5->_Myval.first._Mypair._Myval2._Myres;
  p_Myval = (void **)&v5->_Myval;
  if ( Myres >= 0x10 )
  {
    v25 = (char *)*p_Myval;
    if ( Myres + 1 >= 0x1000 )
    {
      if ( ((unsigned __int8)v25 & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v26 = (char *)*((_QWORD *)v25 - 1);
      if ( v26 >= v25 )
        invalid_parameter_noinfo_noreturn();
      v27 = v25 - v26;
      if ( v27 < 8 )
        invalid_parameter_noinfo_noreturn();
      if ( v27 > 0x27 )
        invalid_parameter_noinfo_noreturn();
      v25 = v26;
    }
    operator delete(v25);
  }
  v5->_Myval.first._Mypair._Myval2._Myres = 15i64;
  v28 = v5->_Myval.first._Mypair._Myval2._Myres < 0x10;
  v5->_Myval.first._Mypair._Myval2._Mysize = 0i64;
  if ( !v28 )
    p_Myval = (void **)*p_Myval;
  *(_BYTE *)p_Myval = 0;
  operator delete(v5);
  Mysize = this->_Mypair._Myval2._Myval2._Mysize;
  if ( Mysize )
    this->_Mypair._Myval2._Myval2._Mysize = Mysize - 1;
  result->_Ptr = Ptr;
  return result;
}

void __fastcall Fw::cRankingReadWork::releaseBuffer(Fw::cRankingReadWork *this)
{
  Fw::ScorePlayerRankData *m_pPlayerRankDataArray; // rcx
  Fw::ScoreRankData *m_pScoreRankDataArray; // rcx
  Fw::ScoreGameInfo *m_pGameInfoArray; // rcx
  Fw::sRankingAttachData *m_pAttachDataArray; // rcx

  m_pPlayerRankDataArray = this->m_pPlayerRankDataArray;
  if ( m_pPlayerRankDataArray )
  {
    aligned_free(m_pPlayerRankDataArray);
    this->m_pPlayerRankDataArray = 0i64;
  }
  m_pScoreRankDataArray = this->m_pScoreRankDataArray;
  if ( m_pScoreRankDataArray )
  {
    aligned_free(m_pScoreRankDataArray);
    this->m_pScoreRankDataArray = 0i64;
  }
  m_pGameInfoArray = this->m_pGameInfoArray;
  if ( m_pGameInfoArray )
  {
    aligned_free(m_pGameInfoArray);
    this->m_pGameInfoArray = 0i64;
  }
  m_pAttachDataArray = this->m_pAttachDataArray;
  if ( m_pAttachDataArray )
  {
    aligned_free(m_pAttachDataArray);
    this->m_pAttachDataArray = 0i64;
  }
}

bool __fastcall Fw::cRankingReadWork::updateAttachDataReadBegin(Fw::cRankingReadWork *this)
{
  unsigned __int64 LeaderboardHandle; // rax
  unsigned __int64 v3; // rdi
  unsigned __int64 *m_pNpIdArray; // rdx
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  void (__fastcall *v7)(Fw::cRankingReadWork *, LeaderboardScoresDownloaded_t *, bool); // r9
  unsigned __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  LeaderboardHandle = GetLeaderboardHandle((LEADERBOARD_ID)(this->m_BoardId + this->m_PcId));
  v3 = LeaderboardHandle;
  if ( LeaderboardHandle )
  {
    m_pNpIdArray = this->m_pNpIdArray;
    v9 = *m_pNpIdArray;
    v5 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, m_pNpIdArray);
    v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64 *, __int64))(**(_QWORD **)(v5 + 40)
                                                                                          + 232i64))(
           *(_QWORD *)(v5 + 40),
           v3,
           &v9,
           1i64);
    CCallResult<Fw::cRankingReadWork,LeaderboardScoresDownloaded_t>::Set(
      this->m_CallResultLeaderboardScoresDownloaded,
      v6,
      this,
      v7);
    LOBYTE(LeaderboardHandle) = 1;
    this->m_Rno = RNO_ERROR_WAIT|RNO_DELETE_VARIABLE_MULTISLOT_BEGIN;
  }
  return LeaderboardHandle;
}

bool __fastcall Scaleform::GFx::InteractiveObject::OnCharEvent(
        Scaleform::Render::Texture *this,
        Scaleform::Render::RenderTargetData *__formal)
{
  return 0;
}

char __fastcall Fw::cRankingReadWork::updateErrorBegin(Fw::cRankingReadWork *this)
{
  this->m_Rno = RNO_ERROR_WAIT|RNO_WRITE_DATA_BEGIN;
  return 1;
}

bool __fastcall Fw::cRankingReadWork::updateFriendEnumBegin(Fw::cRankingReadWork *this)
{
  unsigned __int64 LeaderboardHandle; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // r15
  __int64 v5; // rax
  int v6; // er14
  __int64 v7; // rbx
  char *v8; // rax
  __int64 v9; // rdx
  int v10; // edi
  char *v11; // rsi
  char *v12; // rax
  char *v13; // rbx
  __int64 v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 m_hAPICall; // rdx
  unsigned __int64 v19; // rdi
  char *v21; // [rsp+48h] [rbp+10h] BYREF

  LeaderboardHandle = GetLeaderboardHandle((LEADERBOARD_ID)this->m_BoardId);
  v4 = LeaderboardHandle;
  if ( !LeaderboardHandle )
    return LeaderboardHandle;
  v5 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v3);
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v5 + 16) + 24i64))(*(_QWORD *)(v5 + 16), 4i64);
  v7 = v6;
  v8 = (char *)operator new[](saturated_mul(v6, 8ui64));
  v10 = 0;
  v21 = v8;
  v11 = v8;
  if ( !v8 )
  {
    v11 = 0i64;
    goto LABEL_8;
  }
  if ( v6 )
  {
    v12 = v8 + 4;
    do
    {
      *(_DWORD *)v12 &= 0xFF0FFFFF;
      v12[3] = 0;
      *(_DWORD *)v12 &= 0xFFF00000;
      *((_DWORD *)v12 - 1) = 0;
      v12 += 8;
      --v7;
    }
    while ( v7 );
LABEL_8:
    if ( v6 > 0 )
    {
      v13 = v11;
      do
      {
        v14 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v9);
        v15 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, char **, _QWORD, __int64))(**(_QWORD **)(v14 + 16) + 32i64))(
                           *(_QWORD *)(v14 + 16),
                           &v21,
                           (unsigned int)v10++,
                           4i64);
        v13 += 8;
        v9 = *v15;
        *((_QWORD *)v13 - 1) = *v15;
      }
      while ( v10 < v6 );
    }
  }
  v16 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v9);
  v17 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *, _QWORD))(**(_QWORD **)(v16 + 40) + 232i64))(
          *(_QWORD *)(v16 + 40),
          v4,
          v11,
          (unsigned int)v6);
  m_hAPICall = this->m_CallResultLeaderboardScoresDownloaded[0].m_hAPICall;
  v19 = v17;
  if ( m_hAPICall )
    SteamAPI_UnregisterCallResult(this->m_CallResultLeaderboardScoresDownloaded);
  this->m_CallResultLeaderboardScoresDownloaded[0].m_hAPICall = v19;
  this->m_CallResultLeaderboardScoresDownloaded[0].m_Func = Fw::cRankingReadWork::OnLeaderboardScoresDownloaded;
  this->m_CallResultLeaderboardScoresDownloaded[0].m_pObj = this;
  if ( v19 )
    SteamAPI_RegisterCallResult(this->m_CallResultLeaderboardScoresDownloaded, v19);
  operator delete(v11, m_hAPICall);
  LOBYTE(LeaderboardHandle) = 1;
  this->m_Rno = RNO_WRITE_DATA_BEGIN;
  return LeaderboardHandle;
}

bool __fastcall Fw::cRankingReadWork::updateNamesWait(Fw::cRankingReadWork *this)
{
  signed int m_Flag; // eax
  bool result; // al

  if ( !(SteamNameCache::ms_instance->m_requests._Mypair._Myval2._Mylast
       - SteamNameCache::ms_instance->m_requests._Mypair._Myval2._Myfirst) )
  {
    m_Flag = this->m_Flag;
    if ( (m_Flag & 0x40000000) != 0 )
    {
      this->m_Result = RANKING_RESULT_CANCEL;
      result = 0;
      this->m_Rno = RNO_NONE;
      return result;
    }
    if ( m_Flag >= 0 )
      this->m_Result = RANKING_RESULT_SUCCEED;
    this->m_Rno = RNO_NONE;
  }
  return 0;
}

bool __fastcall Fw::cRankingReadWork::updateNpIdReadBegin(Fw::cRankingReadWork *this)
{
  __int64 v2; // rdx
  unsigned __int64 LeaderboardHandle; // rdi
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  void (__fastcall *v6)(Fw::cRankingReadWork *, LeaderboardScoresDownloaded_t *, bool); // r9
  bool result; // al
  signed int m_Flag; // eax

  LeaderboardHandle = GetLeaderboardHandle((LEADERBOARD_ID)this->m_BoardId);
  if ( LeaderboardHandle )
  {
    if ( this->m_NpIdArraySize )
    {
      v4 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v2);
      v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64 *, _QWORD))(**(_QWORD **)(v4 + 40)
                                                                                           + 232i64))(
             *(_QWORD *)(v4 + 40),
             LeaderboardHandle,
             this->m_pNpIdArray,
             LODWORD(this->m_NpIdArraySize));
      CCallResult<Fw::cRankingReadWork,LeaderboardScoresDownloaded_t>::Set(
        this->m_CallResultLeaderboardScoresDownloaded,
        v5,
        this,
        v6);
      result = 1;
      this->m_Rno = RNO_WRITE_WAIT;
      return result;
    }
    m_Flag = this->m_Flag;
    if ( (m_Flag & 0x40000000) != 0 )
    {
      this->m_Result = RANKING_RESULT_CANCEL;
    }
    else if ( m_Flag >= 0 )
    {
      this->m_Result = RANKING_RESULT_SUCCEED;
    }
    this->m_Rno = RNO_NONE;
  }
  return 0;
}

bool __fastcall Fw::cRankingReadWork::updateRankReadBegin(Fw::cRankingReadWork *this)
{
  unsigned int v1; // esi
  signed int m_BoardId; // ecx
  char v4; // bp
  unsigned int i; // ebx
  unsigned __int64 v6; // rax
  unsigned __int64 *p_m_hAPICall; // rbx
  unsigned __int64 v8; // rax
  int m_GetNum; // er9
  unsigned __int64 v10; // r15
  int m_RankStart; // er10
  int v12; // er14
  __int64 v13; // rdx
  unsigned int v14; // ebp
  __int64 v15; // rax
  __int64 v16; // rbp
  bool result; // al
  __int64 v18; // rdx
  unsigned __int64 LeaderboardHandle; // rbx
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  void (__fastcall *v22)(Fw::cRankingReadWork *, LeaderboardScoresDownloaded_t *, bool); // r9

  v1 = 0;
  *(_QWORD *)&this->resultIndex = 0i64;
  m_BoardId = this->m_BoardId;
  if ( m_BoardId != 531 )
  {
    LeaderboardHandle = GetLeaderboardHandle((LEADERBOARD_ID)m_BoardId);
    if ( LeaderboardHandle )
    {
      v20 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v18);
      v21 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(**(_QWORD **)(v20 + 40) + 224i64))(
              *(_QWORD *)(v20 + 40),
              LeaderboardHandle,
              0i64);
      CCallResult<Fw::cRankingReadWork,LeaderboardScoresDownloaded_t>::Set(
        this->m_CallResultLeaderboardScoresDownloaded,
        v21,
        this,
        v22);
      result = 1;
      this->m_Rno = RNO_WRITE_WAIT;
      return result;
    }
    return 0;
  }
  v4 = 1;
  for ( i = 0; i < 3; ++i )
  {
    v6 = GetLeaderboardHandle((LEADERBOARD_ID)(i + this->m_BoardId));
    v4 &= v6 != 0;
  }
  if ( !v4 )
    return 0;
  p_m_hAPICall = &this->m_CallResultLeaderboardScoresDownloaded[0].m_hAPICall;
  do
  {
    v8 = GetLeaderboardHandle((LEADERBOARD_ID)(v1 + this->m_BoardId));
    m_GetNum = this->m_GetNum;
    v10 = v8;
    m_RankStart = this->m_RankStart;
    v12 = m_GetNum / 3;
    LODWORD(v13) = (unsigned __int64)(1431655766i64 * m_RankStart) >> 32;
    v14 = m_RankStart / 3;
    if ( !v1 )
    {
      v13 = (unsigned int)(m_RankStart >> 31);
      LODWORD(v13) = m_RankStart % m_GetNum;
      v12 = m_GetNum - 2 * v12;
      v14 += m_RankStart / m_GetNum * (m_GetNum - 3 * v12);
    }
    v15 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v13);
    v16 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD, _QWORD, unsigned int))(**(_QWORD **)(v15 + 40)
                                                                                            + 224i64))(
            *(_QWORD *)(v15 + 40),
            v10,
            0i64,
            v14,
            v14 + v12 - 1);
    if ( *p_m_hAPICall )
      SteamAPI_UnregisterCallResult(p_m_hAPICall - 2);
    *p_m_hAPICall = v16;
    p_m_hAPICall[1] = (unsigned __int64)this;
    p_m_hAPICall[2] = (unsigned __int64)Fw::cRankingReadWork::OnLeaderboardScoresDownloaded;
    if ( v16 )
      SteamAPI_RegisterCallResult(p_m_hAPICall - 2, v16);
    ++v1;
    p_m_hAPICall += 5;
  }
  while ( v1 < 3 );
  result = 1;
  this->m_Rno = RNO_WRITE_WAIT;
  return result;
}

bool __fastcall Fw::cRankingReadWork::updateRankReadByNpidPcidBegin(Fw::cRankingReadWork *this)
{
  unsigned __int64 m_ScoreNpIdPcIdSize; // rbx
  char *v3; // rax
  unsigned int v4; // esi
  unsigned __int64 *v5; // r15
  char *v6; // rax
  unsigned int v7; // er14
  int v8; // edx
  __int64 v9; // rcx
  unsigned __int64 *v10; // r8
  unsigned __int64 npId; // r9
  unsigned __int64 *p_m_hAPICall; // rdi
  unsigned __int64 LeaderboardHandle; // rbx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rbx
  bool result; // al

  m_ScoreNpIdPcIdSize = this->m_ScoreNpIdPcIdSize;
  if ( !m_ScoreNpIdPcIdSize )
    return 0;
  v3 = (char *)operator new[](saturated_mul(m_ScoreNpIdPcIdSize, 8ui64));
  v4 = 0;
  v5 = (unsigned __int64 *)v3;
  if ( v3 )
  {
    v6 = v3 + 4;
    do
    {
      *(_DWORD *)v6 &= 0xFF0FFFFF;
      v6[3] = 0;
      *(_DWORD *)v6 &= 0xFFF00000;
      *((_DWORD *)v6 - 1) = 0;
      v6 += 8;
      --m_ScoreNpIdPcIdSize;
    }
    while ( m_ScoreNpIdPcIdSize );
  }
  else
  {
    v5 = 0i64;
  }
  v7 = 0;
  v8 = 0;
  if ( this->m_ScoreNpIdPcIdSize )
  {
    v9 = 0i64;
    v10 = v5;
    do
    {
      npId = this->m_pScoreNpIdPcId[v9].npId;
      if ( !npId )
        break;
      ++v8;
      *v10 = npId;
      ++v7;
      ++v9;
      ++v10;
    }
    while ( v8 < this->m_ScoreNpIdPcIdSize );
  }
  *(_QWORD *)&this->resultIndex = 0i64;
  p_m_hAPICall = &this->m_CallResultLeaderboardScoresDownloaded[0].m_hAPICall;
  do
  {
    LeaderboardHandle = GetLeaderboardHandle((LEADERBOARD_ID)(v4 + this->m_BoardId));
    v15 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v14);
    v16 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64 *, _QWORD))(**(_QWORD **)(v15 + 40)
                                                                                          + 232i64))(
            *(_QWORD *)(v15 + 40),
            LeaderboardHandle,
            v5,
            v7);
    v17 = *p_m_hAPICall;
    v18 = v16;
    if ( *p_m_hAPICall )
      SteamAPI_UnregisterCallResult(p_m_hAPICall - 2);
    *p_m_hAPICall = v18;
    p_m_hAPICall[1] = (unsigned __int64)this;
    p_m_hAPICall[2] = (unsigned __int64)Fw::cRankingReadWork::OnLeaderboardScoresDownloaded;
    if ( v18 )
      SteamAPI_RegisterCallResult(p_m_hAPICall - 2, v18);
    ++v4;
    p_m_hAPICall += 5;
  }
  while ( v4 < 3 );
  operator delete(v5, v17);
  result = 1;
  this->m_Rno = RNO_ERROR_WAIT;
  return result;
}

bool __fastcall Fw::cRankingReadWork::updateRankReadByNpidPcidWait(Fw::cRankingReadWork *this)
{
  signed int m_Flag; // eax
  bool result; // al

  if ( !this->m_ScoreNpIdPcIdSize )
  {
    m_Flag = this->m_Flag;
    if ( (m_Flag & 0x40000000) != 0 )
    {
      this->m_Result = RANKING_RESULT_CANCEL;
      result = 0;
      this->m_Rno = RNO_NONE;
      return result;
    }
    if ( m_Flag >= 0 )
      this->m_Result = RANKING_RESULT_SUCCEED;
    this->m_Rno = RNO_NONE;
  }
  return 0;
}

