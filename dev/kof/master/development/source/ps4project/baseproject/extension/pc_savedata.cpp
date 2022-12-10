#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/pplcancellation_token.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/silverware/git/sdk/agpointer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/future"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ppltasks.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/pplwin.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/pplinterface.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ppltaskscheduler.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/silverware/git/sdk/agstream.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/pc_savedata.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncsavedata.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncsavedata.cpp"

extension::savedata_detail::PCSaveDataJob::PCSaveDataJob(); // 0x1402A7F90
std::unique_ptr<extension::savedata_detail::AsyncSaveDataJob,std::default_delete<extension::savedata_detail::AsyncSaveDataJob> > extension::savedata_detail::PCSaveDataJob::CreateLoadJob(); // 0x1402A8050
class std::unique_ptr<extension::savedata_detail::PCSaveDataJob,std::default_delete<extension::savedata_detail::PCSaveDataJob> > :
	std::_Unique_ptr_base<extension::savedata_detail::PCSaveDataJob,std::default_delete<extension::savedata_detail::PCSaveDataJob> >
{
	class _Myt;
	class _Mybase;
	typedef extension::savedata_detail::PCSaveDataJob pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<extension::savedata_detail::PCSaveDataJob,std::default_delete<extension::savedata_detail::PCSaveDataJob> >(const std::unique_ptr<extension::savedata_detail::PCSaveDataJob,std::default_delete<extension::savedata_detail::PCSaveDataJob> > &);
	unique_ptr<extension::savedata_detail::PCSaveDataJob,std::default_delete<extension::savedata_detail::PCSaveDataJob> >(std::unique_ptr<extension::savedata_detail::PCSaveDataJob,std::default_delete<extension::savedata_detail::PCSaveDataJob> > &);
	unique_ptr<extension::savedata_detail::PCSaveDataJob,std::default_delete<extension::savedata_detail::PCSaveDataJob> >(extension::savedata_detail::PCSaveDataJob *, std::default_delete<extension::savedata_detail::PCSaveDataJob> &);
	unique_ptr<extension::savedata_detail::PCSaveDataJob,std::default_delete<extension::savedata_detail::PCSaveDataJob> >(extension::savedata_detail::PCSaveDataJob *, const std::default_delete<extension::savedata_detail::PCSaveDataJob> &);
	unique_ptr<extension::savedata_detail::PCSaveDataJob,std::default_delete<extension::savedata_detail::PCSaveDataJob> >(extension::savedata_detail::PCSaveDataJob *);
	unique_ptr<extension::savedata_detail::PCSaveDataJob,std::default_delete<extension::savedata_detail::PCSaveDataJob> >(void *);
	unique_ptr<extension::savedata_detail::PCSaveDataJob,std::default_delete<extension::savedata_detail::PCSaveDataJob> >();
	std::unique_ptr<extension::savedata_detail::PCSaveDataJob,std::default_delete<extension::savedata_detail::PCSaveDataJob> > & operator=(const std::unique_ptr<extension::savedata_detail::PCSaveDataJob,std::default_delete<extension::savedata_detail::PCSaveDataJob> > &);
	std::unique_ptr<extension::savedata_detail::PCSaveDataJob,std::default_delete<extension::savedata_detail::PCSaveDataJob> > & operator=(std::unique_ptr<extension::savedata_detail::PCSaveDataJob,std::default_delete<extension::savedata_detail::PCSaveDataJob> > &);
	std::unique_ptr<extension::savedata_detail::PCSaveDataJob,std::default_delete<extension::savedata_detail::PCSaveDataJob> > & operator=(void *);
	void swap(std::unique_ptr<extension::savedata_detail::PCSaveDataJob,std::default_delete<extension::savedata_detail::PCSaveDataJob> > &);
	~unique_ptr<extension::savedata_detail::PCSaveDataJob,std::default_delete<extension::savedata_detail::PCSaveDataJob> >();
	extension::savedata_detail::PCSaveDataJob & operator*();
	extension::savedata_detail::PCSaveDataJob * operator->();
	extension::savedata_detail::PCSaveDataJob * get();
	bool operator bool();
	extension::savedata_detail::PCSaveDataJob * release();
	void reset(extension::savedata_detail::PCSaveDataJob *);
};
std::piecewise_construct_t std::piecewise_construct; // 0x1408AF07D
std::unique_ptr<extension::savedata_detail::AsyncSaveDataJob,std::default_delete<extension::savedata_detail::AsyncSaveDataJob> > extension::savedata_detail::PCSaveDataJob::CreateSaveJob(); // 0x1402A80A0
void extension::savedata_detail::PCSaveDataJob::setDataOption(const extension::AsyncSaveDataStorage::DataOption & opt); // 0x1402A80F0
long extension::savedata_detail::PCSaveDataJob::run(); // 0x1402A8180
extension::AsyncSaveDataConstants::ErrorCode extension::savedata_detail::PCSaveDataJob::trySaveOrLoad(); // 0x1402A81C0//decompilation failure at 1408AF07D!
void __fastcall extension::savedata_detail::PCSaveDataJob::PCSaveDataJob(
        extension::savedata_detail::PCSaveDataJob *this)
{
  std::string *p_m_fileImageSaveTo; // rax
  std::string *p_m_dirName; // rcx
  std::string *Ptr; // rax

  this->__vftable = (extension::savedata_detail::PCSaveDataJob_vtbl *)&AgSimpleThreadHost::`vftable';
  this->m_abort = 0;
  this->m_running = 1;
  this->__vftable = (extension::savedata_detail::PCSaveDataJob_vtbl *)&extension::savedata_detail::AsyncSaveDataJob::`vftable';
  this->m_state.m_ptr = 0i64;
  p_m_fileImageSaveTo = &this->m_fileImageSaveTo;
  this->m_fileImageSaveTo._Mypair._Myval2._Myres = 15i64;
  this->m_fileImageSaveTo._Mypair._Myval2._Mysize = 0i64;
  if ( this->m_fileImageSaveTo._Mypair._Myval2._Myres >= 0x10 )
    p_m_fileImageSaveTo = (std::string *)p_m_fileImageSaveTo->_Mypair._Myval2._Bx._Ptr;
  p_m_fileImageSaveTo->_Mypair._Myval2._Bx._Buf[0] = 0;
  this->__vftable = (extension::savedata_detail::PCSaveDataJob_vtbl *)&extension::savedata_detail::PCSaveDataJob::`vftable';
  p_m_dirName = &this->m_dirName;
  p_m_dirName->_Mypair._Myval2._Myres = 15i64;
  p_m_dirName->_Mypair._Myval2._Mysize = 0i64;
  if ( p_m_dirName->_Mypair._Myval2._Myres < 0x10 )
    Ptr = p_m_dirName;
  else
    Ptr = (std::string *)p_m_dirName->_Mypair._Myval2._Bx._Ptr;
  Ptr->_Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(p_m_dirName, "1", a1[0] != 0);
  this->m_progressOption = 0;
}

std::unique_ptr<extension::savedata_detail::AsyncSaveDataJob> *__fastcall extension::savedata_detail::PCSaveDataJob::CreateLoadJob(
        std::unique_ptr<extension::savedata_detail::AsyncSaveDataJob> *result)
{
  extension::savedata_detail::AsyncSaveDataJob *v2; // rax
  extension::savedata_detail::PCSaveDataJob *v4; // [rsp+40h] [rbp+8h]

  v4 = (extension::savedata_detail::PCSaveDataJob *)operator new(0x60ui64);
  extension::savedata_detail::PCSaveDataJob::PCSaveDataJob(v4);
  v2[1].m_fileImageSaveTo._Mypair._Myval2._Bx._Buf[12] = 1;
  result->_Mypair._Myval2 = v2;
  return result;
}

std::unique_ptr<extension::savedata_detail::AsyncSaveDataJob> *__fastcall extension::savedata_detail::PCSaveDataJob::CreateSaveJob(
        std::unique_ptr<extension::savedata_detail::AsyncSaveDataJob> *result)
{
  extension::savedata_detail::AsyncSaveDataJob *v2; // rax
  extension::savedata_detail::PCSaveDataJob *v4; // [rsp+40h] [rbp+8h]

  v4 = (extension::savedata_detail::PCSaveDataJob *)operator new(0x60ui64);
  extension::savedata_detail::PCSaveDataJob::PCSaveDataJob(v4);
  v2[1].m_fileImageSaveTo._Mypair._Myval2._Bx._Buf[12] = 0;
  result->_Mypair._Myval2 = v2;
  return result;
}

__int64 __fastcall extension::savedata_detail::PCSaveDataJob::run(extension::savedata_detail::PCSaveDataJob *this)
{
  unsigned __int64 v2; // r8
  extension::savedata_detail::AsyncSaveDataState *m_ptr; // rcx

  v2 = extension::savedata_detail::PCSaveDataJob::trySaveOrLoad(this);
  if ( (this->m_state.m_ptr->m_result.m_value._My_val & 0x8000000000000000ui64) != 0i64 )
  {
    m_ptr = this->m_state.m_ptr;
    if ( (m_ptr->m_result.m_value._My_val & 0x8000000000000000ui64) != 0i64 )
      m_ptr->m_result.m_value._My_val = v2;
  }
  return 0i64;
}

void __fastcall extension::savedata_detail::PCSaveDataJob::setDataOption(
        extension::savedata_detail::PCSaveDataJob *this,
        const extension::AsyncSaveDataStorage::DataOption *opt)
{
  std::string *p_fsName; // rdx
  unsigned __int64 v5; // r8

  if ( opt->fsName._Mypair._Myval2._Mysize )
  {
    p_fsName = &opt->fsName;
    if ( p_fsName->_Mypair._Myval2._Myres >= 0x10 )
      p_fsName = (std::string *)p_fsName->_Mypair._Myval2._Bx._Ptr;
    if ( p_fsName->_Mypair._Myval2._Bx._Buf[0] )
    {
      v5 = -1i64;
      do
        ++v5;
      while ( p_fsName->_Mypair._Myval2._Bx._Buf[v5] );
      std::string::assign(&this->m_dirName, p_fsName->_Mypair._Myval2._Bx._Buf, v5);
      this->m_progressOption = opt->progressOption;
    }
    else
    {
      std::string::assign(&this->m_dirName, p_fsName->_Mypair._Myval2._Bx._Buf, 0i64);
      this->m_progressOption = opt->progressOption;
    }
  }
  else
  {
    this->m_progressOption = opt->progressOption;
  }
}

__int64 __fastcall extension::savedata_detail::PCSaveDataJob::trySaveOrLoad(
        extension::savedata_detail::PCSaveDataJob *this)
{
  unsigned int v2; // ebx
  std::string *p_m_fileName; // rdx
  const AgString *v4; // rax
  const AgString *v5; // rax
  const AgString *v6; // rax
  extension::savedata_detail::AsyncSaveDataState *v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // esi
  std::string *p_data; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r9
  unsigned __int64 Mysize; // r11
  unsigned __int64 i; // r10
  unsigned __int8 v15; // r8
  std::string *Ptr; // rcx
  extension::savedata_detail::AsyncSaveDataState *m_ptr; // rdi
  __int64 My_val; // rax
  char *v19; // rcx
  char *v20; // rax
  AgPointer<AgFile> *v21; // rcx
  const AgString *v22; // rax
  const AgString *v23; // rax
  const AgString *v24; // rax
  extension::savedata_detail::AsyncSaveDataState *v25; // rcx
  __int64 v26; // rax
  std::string *p_m_fileImageSaveTo; // rdx
  AgString v29; // [rsp+28h] [rbp-E0h] BYREF
  AgString s1; // [rsp+38h] [rbp-D0h] BYREF
  AgPointer<AgFile> v31; // [rsp+48h] [rbp-C0h] BYREF
  AgString v32; // [rsp+58h] [rbp-B0h] BYREF
  AgString v33; // [rsp+68h] [rbp-A0h] BYREF
  AgString s2; // [rsp+78h] [rbp-90h] BYREF
  AgString v35; // [rsp+88h] [rbp-80h] BYREF
  AgString v36; // [rsp+98h] [rbp-70h] BYREF
  AgString v37; // [rsp+A8h] [rbp-60h] BYREF
  AgPointer<AgFile> v38; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v39; // [rsp+C8h] [rbp-40h]
  AgString v40; // [rsp+D0h] [rbp-38h] BYREF
  AgString v41; // [rsp+E0h] [rbp-28h] BYREF
  AgString result; // [rsp+F0h] [rbp-18h] BYREF
  AgString v43; // [rsp+100h] [rbp-8h] BYREF
  AgString v44; // [rsp+110h] [rbp+8h] BYREF
  AgString v45; // [rsp+120h] [rbp+18h] BYREF
  std::string data; // [rsp+130h] [rbp+28h] BYREF

  v39 = -2i64;
  v2 = 0;
  p_m_fileName = &this->m_state.m_ptr->m_fileName;
  if ( this->m_isLoad )
  {
    AgString::AgString(&v35, p_m_fileName);
    AgString::AgString(&s2, &this->m_dirName);
    AgString::AgString(&s1, "savedata:", -1);
    AgPath::clean((AgPath *)&s1);
    v4 = operator+(&result, &s1, &s2);
    v5 = operator+(&v41, v4, "/");
    v6 = operator+(&v40, v5, &v35);
    AgString::AgString(&v29, v6);
    AgPath::clean((AgPath *)&v29);
    AgFile::open(&v31, (const AgPath *)&v29, 1u, 1);
    AgString::~AgString(&v29);
    AgString::~AgString(&v40);
    AgString::~AgString(&v41);
    AgString::~AgString(&result);
    AgString::~AgString(&s1);
    AgString::~AgString(&s2);
    AgString::~AgString(&v35);
    if ( v31.m_ptr->m_open )
    {
      v9 = v31.m_ptr->getSize(v31.m_ptr);
      data._Mypair._Myval2._Myres = 15i64;
      data._Mypair._Myval2._Mysize = 0i64;
      data._Mypair._Myval2._Bx._Buf[0] = 0;
      if ( v9 )
      {
        std::string::append(&data, v9, 0);
      }
      else
      {
        data._Mypair._Myval2._Mysize = 0i64;
        data._Mypair._Myval2._Bx._Buf[0] = 0;
      }
      p_data = &data;
      if ( data._Mypair._Myval2._Myres >= 0x10 )
        p_data = (std::string *)data._Mypair._Myval2._Bx._Ptr;
      v31.m_ptr->read(v31.m_ptr, (unsigned __int8 *)p_data, v9);
      v11 = 0x791FE442F2325BE7i64;
      v12 = 0x6E7EC7A948D56232i64;
      Mysize = data._Mypair._Myval2._Mysize;
      for ( i = 0i64; i < Mysize; ++i )
      {
        v15 = v11 ^ (v12 >> 47);
        Ptr = &data;
        if ( data._Mypair._Myval2._Myres >= 0x10 )
          Ptr = (std::string *)data._Mypair._Myval2._Bx._Ptr;
        Ptr->_Mypair._Myval2._Bx._Buf[i] ^= v15;
        v12 = (v12 << 8) | HIBYTE(v11);
        v11 = v15 | (v11 << 8);
      }
      if ( extension::savedata_detail::DataConverter::CheckHashedData(&data) )
      {
        m_ptr = this->m_state.m_ptr;
        My_val = m_ptr->m_result.m_value._My_val;
        if ( My_val < 0 )
        {
          if ( &m_ptr->m_data != &data )
            std::string::assign(&m_ptr->m_data, &data, 0i64, 0xFFFFFFFFFFFFFFFFui64);
          m_ptr->m_result.m_value._My_val = 0i64;
          LODWORD(My_val) = 0;
        }
        v2 = My_val;
      }
      else
      {
        v2 = 3;
      }
      if ( data._Mypair._Myval2._Myres >= 0x10 )
      {
        v19 = data._Mypair._Myval2._Bx._Ptr;
        if ( data._Mypair._Myval2._Myres + 1 >= 0x1000 )
        {
          if ( (data._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
            invalid_parameter_noinfo_noreturn();
          v20 = (char *)*((_QWORD *)data._Mypair._Myval2._Bx._Ptr - 1);
          if ( v20 >= data._Mypair._Myval2._Bx._Ptr )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(data._Mypair._Myval2._Bx._Ptr - v20) < (char *)8 )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(data._Mypair._Myval2._Bx._Ptr - v20) > (char *)0x27 )
            invalid_parameter_noinfo_noreturn();
          v19 = (char *)*((_QWORD *)data._Mypair._Myval2._Bx._Ptr - 1);
        }
        operator delete(v19);
      }
    }
    else
    {
      v7 = this->m_state.m_ptr;
      v8 = v7->m_result.m_value._My_val;
      if ( v8 < 0 )
      {
        v7->m_result.m_value._My_val = 0i64;
        LODWORD(v8) = 0;
      }
      v2 = v8;
    }
    v21 = &v31;
  }
  else
  {
    AgString::AgString(&v37, p_m_fileName);
    AgString::AgString(&v36, &this->m_dirName);
    AgString::AgString(&v33, "savedata:", -1);
    AgPath::clean((AgPath *)&v33);
    v22 = operator+(&v45, &v33, &v36);
    v23 = operator+(&v44, v22, "/");
    v24 = operator+(&v43, v23, &v37);
    AgString::AgString(&v32, v24);
    AgPath::clean((AgPath *)&v32);
    AgFile::open(&v38, (const AgPath *)&v32, 2u, 1);
    AgString::~AgString(&v32);
    AgString::~AgString(&v43);
    AgString::~AgString(&v44);
    AgString::~AgString(&v45);
    AgString::~AgString(&v33);
    AgString::~AgString(&v36);
    AgString::~AgString(&v37);
    if ( v38.m_ptr->m_open )
    {
      p_m_fileImageSaveTo = &this->m_fileImageSaveTo;
      if ( this->m_fileImageSaveTo._Mypair._Myval2._Myres >= 0x10 )
        p_m_fileImageSaveTo = (std::string *)p_m_fileImageSaveTo->_Mypair._Myval2._Bx._Ptr;
      v38.m_ptr->write(
        v38.m_ptr,
        (const unsigned __int8 *)p_m_fileImageSaveTo,
        this->m_fileImageSaveTo._Mypair._Myval2._Mysize);
    }
    else
    {
      v25 = this->m_state.m_ptr;
      v26 = v25->m_result.m_value._My_val;
      if ( v26 < 0 )
      {
        v25->m_result.m_value._My_val = 0i64;
        LODWORD(v26) = 0;
      }
      v2 = v26;
    }
    v21 = &v38;
  }
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)v21);
  return v2;
}

