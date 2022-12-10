#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft directx sdk (june 2010)/include/xaudio2.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/microsoft directx sdk (june 2010)/include/xma2defs.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.cpp"

enum AgAudioStreamIndex
{
	AgAudioStreamIndex_FrontLeft = 0,
	AgAudioStreamIndex_FrontRight = 1,
	AgAudioStreamIndex_FrontCenter = 2,
	AgAudioStreamIndex_LowFrequency = 3,
	AgAudioStreamIndex_BackLeft = 4,
	AgAudioStreamIndex_BackRight = 5,
	AgAudioStreamIndex_BackCenter = 6,
	AgAudioStreamIndex_SideLeft = 7,
	AgAudioStreamIndex_SideRight = 8,
	AgAudioStreamIndex_Count = 9,
};
class VoiceCallbacks :
	IXAudio2VoiceCallback
{
private:
	virtual void OnBufferStart(void *);
	virtual void OnBufferEnd(void *);
	virtual void OnLoopEnd(void *);
	virtual void OnStreamEnd();
	virtual void OnVoiceError(void *, HRESULT);
	virtual void OnVoiceProcessingPassEnd();
	virtual void OnVoiceProcessingPassStart(unsigned long);
public:
	VoiceCallbacks(VoiceCallbacks &);
	VoiceCallbacks(const VoiceCallbacks &);
	VoiceCallbacks();
	VoiceCallbacks & operator=(VoiceCallbacks &);
	VoiceCallbacks & operator=(const VoiceCallbacks &);
};
void VoiceCallbacks::OnBufferStart(void * pBufferContext); // 0x140030710
void VoiceCallbacks::OnBufferEnd(void * pBufferContext); // 0x14002E7C0
void convertSpeedUp(long * offset0, short * pIn, long * offset1, short * pOut, _SND_BANK_INFO * pData, float speed); // 0x140030730
void convertSpeedDown(long * offset0, short * pIn, long * offset1, short * pOut, _SND_BANK_INFO * pData, float speed); // 0x140030C40
long pitchShift(CAudioPresenter * this_player, unsigned long index, unsigned long sizeDefault, unsigned long maxsize, short * outData); // 0x1400311A0
void * APBufferQueueCallback(void * arg, long sizeDefault); // 0x1400315B0
void * MMBufferQueueCallback(void * arg); // 0x140031C80
void * MMBufferQueueCallbackBGM(void * arg); // 0x1400336C0
void * MMBufferQueueCallbackReverb(void * arg); // 0x1400344B0
void * MMBufferQueueCallbackReverb2(void * arg); // 0x1400363C0
class std::array<int,9>
{
	class _Myt;
	typedef long value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef long *pointer;
	typedef const long const_pointer;
	typedef long reference;
	typedef const long const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	void assign(const long &);
	void fill(const long &);
	std::_Array_const_iterator<int,9> begin();
	std::_Array_iterator<int,9> begin();
	std::_Array_const_iterator<int,9> end();
	std::_Array_iterator<int,9> end();
	std::reverse_iterator<std::_Array_const_iterator<int,9> > rbegin();
	std::reverse_iterator<std::_Array_iterator<int,9> > rbegin();
	std::reverse_iterator<std::_Array_const_iterator<int,9> > rend();
	std::reverse_iterator<std::_Array_iterator<int,9> > rend();
	std::_Array_const_iterator<int,9> cbegin();
	std::_Array_const_iterator<int,9> cend();
	std::reverse_iterator<std::_Array_const_iterator<int,9> > crbegin();
	std::reverse_iterator<std::_Array_const_iterator<int,9> > crend();
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	const long & at(unsigned long long);
	long & at(unsigned long long);
	const long & operator[](unsigned long long);
	long & operator[](unsigned long long);
	static void _Bad_subscript();
	const long & front();
	long & front();
	const long & back();
	long & back();
	const long * data();
	long * data();
	void _Xran();
	long _Elems[9]; // 0x0
	void swap(std::array<int,9> &);
};
void CMediaManager::initialize(); // 0x1400382D0
class CMediaManager::initialize::__l61::<lambda_8ebe504a780340bd285d1dc165118a8b>
{
public:
	unsigned long long operator()(AgAudioStreamIndex, AgAudioStreamIndex);
	<lambda_8ebe504a780340bd285d1dc165118a8b>(CMediaManager::initialize::__l61::<lambda_8ebe504a780340bd285d1dc165118a8b> &);
	<lambda_8ebe504a780340bd285d1dc165118a8b>();
	<lambda_8ebe504a780340bd285d1dc165118a8b>(const unsigned long &, const std::array<int,9> &, const std::array<int,9> &);
private:
	const unsigned long & srcChannels; // 0x0
	const std::array<int,9> & speakerConfiguration; // 0x8
	const std::array<int,9> & voiceConfiguration; // 0x10
public:
	CMediaManager::initialize::__l61::<lambda_8ebe504a780340bd285d1dc165118a8b> & operator=(const CMediaManager::initialize::__l61::<lambda_8ebe504a780340bd285d1dc165118a8b> &);
};
std::piecewise_construct_t std::piecewise_construct; // 0x140888AA7
VoiceCallbacks voiceCallbacks; // 0x140A5BBC0
const long channels[4]; // 0x140888B20
const _PORT_CONFIG portConfig[36]; // 0x140888B30
CMediaManager::CMediaManager(); // 0x140038C80
unsigned char CMediaManager::setAudioPresenter(_PORT_CONFIG * port, CAudioPresenter * ptr); // 0x140038DC0
void CMediaManager::delAudioPresenter(_PORT_CONFIG * port, CAudioPresenter * ptr); // 0x140039050
void CMediaManager::finalize(); // 0x140039130//decompilation failure at 140888AA7!
//decompilation failure at 140A5BBC0!
//decompilation failure at 140888B20!
//decompilation failure at 140888B30!
void __fastcall CMediaManager::CMediaManager(CMediaManager *this)
{
  AgThread::AgThread(&this->m_thread_sound, NotRunning);
  AgThread::AgThread(&this->m_thread_sound_reverb, NotRunning);
  AgThread::AgThread(&this->m_thread_sound_reverb2, NotRunning);
  AgThread::AgThread(&this->m_thread_sound_bgm, NotRunning);
  this->m_sound_host.__vftable = (CMediaManager::ThreadHost_vtbl *)&AgSimpleThreadHost::`vftable';
  this->m_sound_host.m_abort = 0;
  this->m_sound_host.m_running = 1;
  this->m_sound_host.__vftable = (CMediaManager::ThreadHost_vtbl *)&CMediaManager::ThreadHost::`vftable';
  this->m_sound_host.m_manager = this;
  this->m_sound_host.m_func = MMBufferQueueCallback;
  this->m_sound_reverb_host.__vftable = (CMediaManager::ThreadHost_vtbl *)&AgSimpleThreadHost::`vftable';
  this->m_sound_reverb_host.m_abort = 0;
  this->m_sound_reverb_host.m_running = 1;
  this->m_sound_reverb_host.__vftable = (CMediaManager::ThreadHost_vtbl *)&CMediaManager::ThreadHost::`vftable';
  this->m_sound_reverb_host.m_manager = this;
  this->m_sound_reverb_host.m_func = MMBufferQueueCallbackReverb;
  this->m_sound_reverb2_host.__vftable = (CMediaManager::ThreadHost_vtbl *)&AgSimpleThreadHost::`vftable';
  this->m_sound_reverb2_host.m_abort = 0;
  this->m_sound_reverb2_host.m_running = 1;
  this->m_sound_reverb2_host.__vftable = (CMediaManager::ThreadHost_vtbl *)&CMediaManager::ThreadHost::`vftable';
  this->m_sound_reverb2_host.m_manager = this;
  this->m_sound_reverb2_host.m_func = MMBufferQueueCallbackReverb2;
  this->m_sound_bgm_host.__vftable = (CMediaManager::ThreadHost_vtbl *)&AgSimpleThreadHost::`vftable';
  this->m_sound_bgm_host.m_abort = 0;
  this->m_sound_bgm_host.m_running = 1;
  this->m_sound_bgm_host.__vftable = (CMediaManager::ThreadHost_vtbl *)&CMediaManager::ThreadHost::`vftable';
  this->m_sound_bgm_host.m_manager = this;
  this->m_sound_bgm_host.m_func = MMBufferQueueCallbackBGM;
  CMediaManager::initialize(this);
}

void __fastcall extension::ExThread::Runnable::~Runnable(extension::ExThread::Runnable *this)
{
  this->__vftable = (extension::ExThread::Runnable_vtbl *)&AgIThreadHost::`vftable';
}

__int16 *__fastcall APBufferQueueCallback(void *arg, int sizeDefault)
{
  size_t v2; // rbx
  int v4; // ecx
  __int64 v5; // rdx
  __int16 *v6; // rbp
  __int64 v7; // rax
  char *outData; // r14
  size_t v9; // r12
  __int64 v10; // rax
  int *v11; // r15
  int v12; // er13
  int v13; // esi
  int v14; // eax
  __int64 v16; // rcx
  int v17; // eax
  int v18; // ebx
  int v19; // edx
  _SND_BANK_INFO *v20; // rdx
  int *v21; // r8
  int *v22; // rcx
  __int16 *v23; // r9
  _SND_BANK_INFO *v24; // rax
  __int16 *bufferPtr; // rdx
  __int64 v26; // rbx
  __int64 v27; // rsi
  int v28; // er11
  __int64 v29; // r8
  float *v30; // rdx
  __int64 v31; // r9
  int v32; // eax
  float v33; // xmm0_4
  int v34; // eax
  int v35; // eax
  _SND_BANK_INFO *v36; // rdx
  int *v37; // r8
  float v38; // xmm0_4
  __int16 *v39; // r9
  int v40; // ebx
  int *v41; // rcx
  _SND_BANK_INFO *v42; // rax
  __int16 *v43; // rdx
  __int64 v44; // rcx
  int v45; // ebp
  __int64 v46; // rbx
  __int64 v47; // r14
  __int16 *v48; // rsi
  int v49; // er11
  __int64 v50; // r9
  __int64 v51; // r8
  float *v52; // rdx
  int v53; // eax
  float v54; // xmm0_4
  float speed; // [rsp+28h] [rbp-70h]
  __int64 v56; // [rsp+30h] [rbp-68h]
  int v57; // [rsp+A0h] [rbp+8h]
  int v59; // [rsp+B0h] [rbp+18h]
  unsigned int v60; // [rsp+B8h] [rbp+20h]

  v2 = sizeDefault;
  if ( !arg )
    return 0i64;
  if ( !*((_QWORD *)arg + 19) )
    return 0i64;
  v4 = *((_DWORD *)arg + 8);
  v5 = sizeDefault * v4;
  v6 = (__int16 *)(*((_QWORD *)arg + 3) + 2 * v5);
  if ( *(_BYTE *)arg )
    return 0i64;
  v7 = *((_QWORD *)arg + 2);
  if ( !v7 )
    return 0i64;
  outData = (char *)(v7 + 2 * v5);
  *((_DWORD *)arg + 8) = (v4 + 1) % 4;
  v9 = 2 * v2;
  v56 = v2;
  memset(outData, 0, 2 * v2);
  v10 = *((_QWORD *)arg + 19);
  v11 = (int *)((char *)arg + 4);
  v57 = v2;
  v12 = *(int *)(v10 + 316) >> 1;
  v13 = *(int *)(v10 + 320) >> 1;
  v59 = v13;
  v60 = *((_DWORD *)arg + 1);
  v14 = pitchShift((CAudioPresenter *)arg, v60, v2, v12, (__int16 *)outData);
  if ( v14 == 1 )
    return (__int16 *)outData;
  if ( v14 || (v16 = *v11, (int)v16 >= v12) )
  {
    v44 = *((_QWORD *)arg + 19);
    v45 = *(int *)(v44 + 324) >> 1;
    if ( *((_DWORD *)arg + 74) == 3 && !(*(int *)(v44 + 320) >> 1) )
    {
      v46 = *((unsigned int *)arg + 144);
      if ( *((_DWORD *)arg + 36) < 2 * *((_DWORD *)arg + v46 + 78) + 4096 )
      {
        v47 = *(_QWORD *)(v44 + 296);
        v48 = (__int16 *)(*((_QWORD *)arg + 2) + 2i64 * sizeDefault * *((_DWORD *)arg + 8));
        memset(v48, 0, v9);
        v49 = 0;
        if ( sizeDefault <= 0 )
          goto LABEL_87;
        v50 = 0i64;
        while ( 1 )
        {
          v51 = (int)v46;
          if ( (int)v46 <= 0 )
            goto LABEL_86;
          v52 = (float *)((char *)arg + 4 * (int)v46 + 444);
          while ( 1 )
          {
            v53 = *((_DWORD *)arg + 36) + v60 + v49 - *((_DWORD *)v52 - 33);
            if ( v53 >= 0 )
              break;
LABEL_80:
            --v51;
            --v52;
            if ( v51 <= 0 )
              goto LABEL_86;
          }
          if ( v53 < v45 )
            break;
          if ( v51 == (int)v46 )
          {
            if ( v50 )
            {
              v49 = sizeDefault;
              v50 = sizeDefault;
            }
            else
            {
              *((_DWORD *)arg + 36) = 2 * *((_DWORD *)arg + *((unsigned int *)arg + 144) + 78) + 4096;
            }
          }
LABEL_86:
          ++v49;
          if ( ++v50 >= sizeDefault )
          {
LABEL_87:
            *((_DWORD *)arg + 36) += sizeDefault;
            return v48;
          }
        }
        v54 = (float)(v48[v50] + (int)(float)((float)*(__int16 *)(v47 + 2i64 * v53) * *v52));
        if ( v54 <= 26213.6 )
        {
          if ( v54 < -26213.6 )
            v54 = (float)((float)(v54 + 26213.6) * 0.16) - 26213.6;
        }
        else
        {
          v54 = (float)((float)(v54 - 26213.6) * 0.16) + 26213.6;
        }
        v48[v50] = (int)v54;
        goto LABEL_80;
      }
    }
    *(_BYTE *)arg = 1;
    return 0i64;
  }
  if ( *((float *)arg + 72) == 1.0 )
  {
    if ( (int)v16 + (int)v2 < v12 )
    {
      memmove(outData, (const void *)(*(_QWORD *)(*((_QWORD *)arg + 19) + 296i64) + 2 * v16), 2 * v2);
      *v11 += v2;
    }
    else
    {
      v17 = *((_DWORD *)arg + 23);
      v18 = v12 - v16;
      v57 = v12 - v16;
      if ( v17 )
      {
        if ( v17 > 0 )
          *((_DWORD *)arg + 23) = v17 - 1;
        ++*((_DWORD *)arg + 24);
        if ( v18 )
          memmove(outData, (const void *)(*(_QWORD *)(*((_QWORD *)arg + 19) + 296i64) + 2i64 * *v11), 2i64 * v18);
        if ( sizeDefault != v18 )
          memmove(
            &outData[2 * v18],
            (const void *)(*(_QWORD *)(*((_QWORD *)arg + 19) + 296i64) + 2i64 * v13),
            2i64 * (sizeDefault - v18));
        *v11 = sizeDefault + v13 - v18;
        *((_BYTE *)arg + 136) = 1;
      }
      else
      {
        if ( v18 )
          memmove(outData, (const void *)(*(_QWORD *)(*((_QWORD *)arg + 19) + 296i64) + 2 * v16), 2i64 * v18);
        *v11 = v12;
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v19 = *((_DWORD *)arg + 10);
      if ( v12 <= v19 + *v11 && v19 - (int)v2 < 0 )
        break;
      if ( v19 - (int)v2 < 0 )
      {
        v20 = (_SND_BANK_INFO *)*((_QWORD *)arg + 19);
        v21 = (int *)((char *)arg + 40);
        v22 = (int *)((char *)arg + 4);
        v23 = (__int16 *)*((_QWORD *)arg + 3);
        v24 = v20 + 4;
        bufferPtr = v20[4].bufferPtr;
        speed = *((float *)arg + 72);
        if ( speed <= 1.0 )
          convertSpeedDown(v22, bufferPtr, v21, v23, v24, speed);
        else
          convertSpeedUp(v22, bufferPtr, v21, v23, v24, speed);
        if ( *((_DWORD *)arg + 10) - (int)v2 < 0 )
          continue;
      }
      memmove(outData, *((const void **)arg + 3), 2 * v2);
      memmove(*((void **)arg + 3), (const void *)(v9 + *((_QWORD *)arg + 3)), 2i64 * (*((_DWORD *)arg + 10) - (int)v2));
LABEL_31:
      *((_DWORD *)arg + 10) -= v2;
      goto LABEL_32;
    }
    v2 = *((int *)arg + 10);
    v34 = *((_DWORD *)arg + 23);
    v57 = *((_DWORD *)arg + 10);
    if ( !v34 )
    {
      memset((void *)(*((_QWORD *)arg + 3) + 2 * v2), 0, 2i64 * (sizeDefault - (int)v2));
      memmove(outData, *((const void **)arg + 3), v9);
      *v11 = v12;
      goto LABEL_31;
    }
    if ( v34 > 0 )
      *((_DWORD *)arg + 23) = v34 - 1;
    ++*((_DWORD *)arg + 24);
    if ( (_DWORD)v2 )
    {
      v2 *= 2i64;
      memmove(outData, *((const void **)arg + 3), v2);
      memmove(*((void **)arg + 3), (const void *)(*((_QWORD *)arg + 3) + v2), 2i64 * (*((_DWORD *)arg + 10) - v57));
      LODWORD(v2) = v57;
      *((_DWORD *)arg + 10) -= v57;
    }
    v35 = sizeDefault - v2;
    if ( sizeDefault - (int)v2 > 0 )
    {
      v36 = (_SND_BANK_INFO *)*((_QWORD *)arg + 19);
      v37 = (int *)((char *)arg + 40);
      v38 = *((float *)arg + 72);
      v39 = (__int16 *)*((_QWORD *)arg + 3);
      v40 = sizeDefault;
      if ( v35 <= sizeDefault )
        v40 = v35;
      v41 = (int *)((char *)arg + 4);
      *v11 = v13;
      v42 = v36 + 4;
      v43 = v36[4].bufferPtr;
      if ( v38 <= 1.0 )
        convertSpeedDown(v41, v43, v37, v39, v42, v38);
      else
        convertSpeedUp(v41, v43, v37, v39, v42, v38);
      memmove(&outData[2 * v57], *((const void **)arg + 3), 2i64 * v40);
      if ( *((_DWORD *)arg + 10) - v40 > 0 )
      {
        memmove(
          *((void **)arg + 3),
          (const void *)(2i64 * v40 + *((_QWORD *)arg + 3)),
          2i64 * (*((_DWORD *)arg + 10) - v40));
        *((_DWORD *)arg + 10) -= v40;
      }
      v11 = (int *)((char *)arg + 4);
    }
    *((_BYTE *)arg + 136) = 1;
  }
LABEL_32:
  if ( *((_DWORD *)arg + 74) != 3 )
    return (__int16 *)outData;
  v26 = *((int *)arg + 144);
  v27 = *(_QWORD *)(*((_QWORD *)arg + 19) + 296i64);
  memmove(v6, outData, v9);
  v28 = 0;
  v29 = 0i64;
  if ( v56 > 0 )
  {
    while ( v26 < 1 )
    {
LABEL_62:
      ++v28;
      if ( ++v29 >= v56 )
        goto LABEL_63;
    }
    v30 = (float *)((char *)arg + 448);
    v31 = v26;
    while ( 1 )
    {
      v32 = v60 + v28 - *((_DWORD *)v30 - 33);
      if ( v32 >= 0 )
      {
        if ( v32 < v12 )
          goto LABEL_40;
        if ( *((_BYTE *)arg + 136) )
          break;
      }
LABEL_61:
      ++v30;
      if ( !--v31 )
        goto LABEL_62;
    }
    v32 = v59 + v32 - v12;
LABEL_40:
    v33 = (float)(v6[v29] + (int)(float)((float)*(__int16 *)(v27 + 2i64 * v32) * *v30));
    if ( v33 <= 26213.6 )
    {
      if ( v33 < -26213.6 )
        v33 = (float)((float)(v33 + 26213.6) * 0.16) - 26213.6;
    }
    else
    {
      v33 = (float)((float)(v33 - 26213.6) * 0.16) + 26213.6;
    }
    v6[v29] = (int)v33;
    goto LABEL_61;
  }
LABEL_63:
  if ( *v11 == v12 )
    *((_DWORD *)arg + 36) += sizeDefault - v57;
  return v6;
}

void __fastcall __noreturn MMBufferQueueCallback(void *arg)
{
  void *v1; // rdx
  int v2; // ecx
  __int64 v3; // rax
  __int64 v4; // r15
  int v5; // er14
  __int64 v6; // rdi
  __int64 v7; // r13
  __int16 *v8; // rbx
  int v9; // er12
  __int64 v10; // rsi
  __int64 v11; // rax
  _RTL_CRITICAL_SECTION *v12; // rbp
  _QWORD *v13; // rcx
  __int64 v14; // rax
  __int16 *v15; // r8
  __int64 v16; // r11
  __int64 v17; // rbp
  int v18; // eax
  __int64 v19; // r12
  int v20; // eax
  __int64 v21; // r10
  signed __int64 v22; // r8
  __int16 *v23; // rdx
  int v24; // er9
  float v25; // xmm0_4
  int v26; // eax
  float v27; // xmm0_4
  signed __int64 v28; // r8
  __int16 *v29; // rdx
  int v30; // er9
  float v31; // xmm0_4
  int v32; // eax
  float v33; // xmm0_4
  __int64 v34; // r14
  __int64 v35; // r13
  signed __int64 v36; // r9
  __int16 *v37; // rdx
  __int64 v38; // rbx
  int v39; // er8
  int v40; // er10
  int v41; // edi
  int v42; // esi
  int v43; // ebp
  int v44; // er15
  int v45; // er12
  float v46; // xmm0_4
  int v47; // eax
  float v48; // xmm0_4
  int v49; // eax
  float v50; // xmm0_4
  int v51; // eax
  float v52; // xmm0_4
  int v53; // eax
  float v54; // xmm0_4
  int v55; // eax
  float v56; // xmm0_4
  int v57; // eax
  float v58; // xmm0_4
  int v59; // eax
  float v60; // xmm0_4
  __int64 v61; // r13
  signed __int64 v62; // r9
  __int16 *v63; // rdx
  __int64 v64; // rbx
  int v65; // er8
  int v66; // er10
  int v67; // edi
  int v68; // ebp
  int v69; // esi
  int v70; // er12
  int v71; // er15
  float v72; // xmm0_4
  int v73; // eax
  float v74; // xmm0_4
  int v75; // eax
  float v76; // xmm0_4
  int v77; // eax
  float v78; // xmm0_4
  int v79; // eax
  float v80; // xmm0_4
  int v81; // eax
  float v82; // xmm0_4
  int v83; // eax
  float v84; // xmm0_4
  int v85; // eax
  float v86; // xmm0_4
  __int64 i; // rdx
  int v88; // er9
  float v89; // xmm0_4
  int v90; // eax
  float v91; // xmm0_4
  __int64 v92; // r14
  __int64 v93; // r15
  signed __int64 v94; // r9
  __int16 *v95; // rdx
  int v96; // er8
  int v97; // er10
  int v98; // edi
  int v99; // esi
  int v100; // ebp
  float v101; // xmm0_4
  int v102; // eax
  float v103; // xmm0_4
  int v104; // eax
  float v105; // xmm0_4
  int v106; // eax
  float v107; // xmm0_4
  int v108; // eax
  float v109; // xmm0_4
  int v110; // eax
  float v111; // xmm0_4
  int v112; // edx
  __int16 *v113; // r10
  __int64 v114; // r15
  int v115; // er8
  __int64 v116; // r12
  float v117; // xmm0_4
  int v118; // er9
  __int64 v119; // r13
  int v120; // edi
  int v121; // ebp
  int v122; // er14
  int v123; // eax
  float v124; // xmm0_4
  int v125; // eax
  float v126; // xmm0_4
  int v127; // eax
  float v128; // xmm0_4
  int v129; // eax
  float v130; // xmm0_4
  int v131; // eax
  float v132; // xmm0_4
  int v133; // edx
  __int16 *v134; // r8
  double v135; // xmm2_8
  __int64 v136; // rdi
  float v137; // xmm0_4
  int v138; // er9
  int v139; // eax
  float v140; // xmm0_4
  __int16 *v141; // r8
  __int64 v142; // rdi
  double v143; // xmm2_8
  int v144; // er9
  float v145; // xmm0_4
  int v146; // eax
  float v147; // xmm0_4
  signed __int64 v148; // r8
  __int16 *v149; // rdx
  unsigned __int64 v150; // rdi
  int v151; // er9
  int v152; // er10
  float v153; // xmm0_4
  int v154; // eax
  float v155; // xmm0_4
  int v156; // eax
  float v157; // xmm0_4
  __int64 j; // r9
  int v159; // edx
  float v160; // xmm0_4
  int v161; // eax
  float v162; // xmm0_4
  __int16 *v163; // r9
  unsigned __int64 v164; // rdi
  int v165; // er10
  int v166; // edx
  float v167; // xmm0_4
  int v168; // eax
  float v169; // xmm0_4
  int v170; // eax
  float v171; // xmm0_4
  signed __int64 v172; // r8
  __int16 *v173; // rdx
  unsigned __int64 v174; // r10
  int v175; // er9
  float v176; // xmm0_4
  int v177; // eax
  float v178; // xmm0_4
  __int64 k; // r10
  int v180; // er9
  float v181; // xmm0_4
  int v182; // eax
  float v183; // xmm0_4
  __int64 m; // rdx
  int v185; // er9
  float v186; // xmm0_4
  int v187; // eax
  float v188; // xmm0_4
  int v189; // edx
  __int64 v190; // r9
  int v191; // esi
  __int64 v192; // r14
  __int16 *v193; // r10
  __int16 *v194; // rdi
  __int64 v195; // r15
  unsigned __int64 v196; // r12
  float v197; // xmm0_4
  int v198; // edx
  __int64 v199; // r9
  float v200; // xmm0_4
  int v201; // edx
  __int64 v202; // r9
  float v203; // xmm0_4
  int v204; // edx
  __int64 v205; // r9
  float v206; // xmm0_4
  __int16 *v207; // r10
  float v208; // xmm0_4
  __int64 v209; // rcx
  __int64 v210; // [rsp+20h] [rbp-108h]
  __int64 v211; // [rsp+28h] [rbp-100h]
  __int64 v212; // [rsp+30h] [rbp-F8h]
  __int64 v213; // [rsp+38h] [rbp-F0h]
  __int16 *v214; // [rsp+40h] [rbp-E8h]
  __int64 v215; // [rsp+50h] [rbp-D8h]
  __int64 v216; // [rsp+58h] [rbp-D0h]
  _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+60h] [rbp-C8h]
  __int64 v218; // [rsp+68h] [rbp-C0h]
  _DWORD v219[2]; // [rsp+70h] [rbp-B8h] BYREF
  __int16 *v220; // [rsp+78h] [rbp-B0h]
  __int64 v221; // [rsp+80h] [rbp-A8h]
  __int64 v222; // [rsp+88h] [rbp-A0h]
  _DWORD v223[38]; // [rsp+90h] [rbp-98h]
  int v225; // [rsp+138h] [rbp+10h]
  int v226; // [rsp+140h] [rbp+18h]
  int v227; // [rsp+148h] [rbp+20h]

  v1 = arg;
LABEL_2:
  v2 = 0;
  v3 = 0i64;
  v227 = 0;
  v215 = 0i64;
LABEL_3:
  v4 = 3 * v3;
  v212 = v3;
  if ( portConfig[v3].type || (portConfig[v3].opt & 0xC) != 0 )
    goto LABEL_343;
  v5 = portConfig[v3].channel << 11;
  v6 = (__int64)v1 + 336 * v3 + 32;
  v225 = v5;
  v218 = v6;
  if ( portConfig[v3].channel == 1 )
  {
    v5 = portConfig[v3].channel << 12;
    v225 = v5;
  }
  v7 = v5;
  v211 = v5;
  v8 = (__int16 *)(*(_QWORD *)v6 + 2i64 * v5 * *(_DWORD *)(v6 + 8));
  v214 = v8;
  memset(v8, 0, 2i64 * v5);
  v9 = 0;
  v10 = 0i64;
  v226 = 0;
  v210 = 0i64;
  while ( 1 )
  {
    v11 = *(_QWORD *)(v6 + 8 * v10 + 32);
    if ( v11 )
    {
      v12 = (_RTL_CRITICAL_SECTION *)(v11 + 188);
      lpCriticalSection = (_RTL_CRITICAL_SECTION *)(v11 + 188);
      EnterCriticalSection((LPCRITICAL_SECTION)(v11 + 188));
      v13 = *(_QWORD **)(v6 + 8 * v10 + 32);
      if ( v13 )
      {
        if ( *(_BYTE *)(v10 + v6 + 288) == 1
          || (v14 = v13[19]) == 0
          || (v15 = APBufferQueueCallback(v13, *(_DWORD *)(v14 + 328) << 11)) == 0i64 )
        {
          LeaveCriticalSection(v12);
          *(_BYTE *)(v10 + v6 + 288) = 0;
          *(_QWORD *)(v6 + 8 * v10 + 32) = 0i64;
          goto LABEL_339;
        }
        v16 = *(_QWORD *)(v6 + 8 * v10 + 32);
        v17 = *(int *)(*(_QWORD *)(v16 + 152) + 328i64);
        v18 = *(_DWORD *)(v16 + 180);
        v19 = v17;
        v213 = v17;
        if ( (v18 & 0x12) == 0 )
        {
          v20 = *(&portConfig[0].channel + 2 * v4);
          if ( v20 == (_DWORD)v17 )
          {
            switch ( (_DWORD)v17 )
            {
              case 2:
                v21 = 0i64;
                if ( *(_BYTE *)(v16 + 1) )
                {
                  if ( v7 > 0 )
                  {
                    v28 = (char *)v15 - (char *)v8;
                    v29 = v8 + 1;
                    do
                    {
                      v30 = *v29 + ((*(_DWORD *)(v16 + 256) * *(__int16 *)((char *)v29 + v28 - 2)) >> 12);
                      v31 = (float)(*(v29 - 1) + ((*(_DWORD *)(v16 + 260) * *(__int16 *)((char *)v29 + v28)) >> 12));
                      if ( v31 <= 26213.6 )
                      {
                        if ( v31 < -26213.6 )
                          v31 = (float)((float)(v31 + 26213.6) * 0.16) - 26213.6;
                      }
                      else
                      {
                        v31 = (float)((float)(v31 - 26213.6) * 0.16) + 26213.6;
                      }
                      v32 = (int)v31;
                      v33 = (float)v30;
                      *(v29 - 1) = v32;
                      if ( (float)v30 <= 26213.6 )
                      {
                        if ( v33 < -26213.6 )
                          v33 = (float)((float)(v33 + 26213.6) * 0.16) - 26213.6;
                      }
                      else
                      {
                        v33 = (float)((float)(v33 - 26213.6) * 0.16) + 26213.6;
                      }
                      v21 += v17;
                      *v29 = (int)v33;
                      v29 += v17;
                    }
                    while ( v21 < v7 );
                  }
                }
                else if ( v7 > 0 )
                {
                  v22 = (char *)v15 - (char *)v8;
                  v23 = v8 + 1;
                  do
                  {
                    v24 = *v23 + ((*(_DWORD *)(v16 + 260) * *(__int16 *)((char *)v23 + v22)) >> 12);
                    v25 = (float)(*(v23 - 1) + ((*(_DWORD *)(v16 + 256) * *(__int16 *)((char *)v23 + v22 - 2)) >> 12));
                    if ( v25 <= 26213.6 )
                    {
                      if ( v25 < -26213.6 )
                        v25 = (float)((float)(v25 + 26213.6) * 0.16) - 26213.6;
                    }
                    else
                    {
                      v25 = (float)((float)(v25 - 26213.6) * 0.16) + 26213.6;
                    }
                    v26 = (int)v25;
                    v27 = (float)v24;
                    *(v23 - 1) = v26;
                    if ( (float)v24 <= 26213.6 )
                    {
                      if ( v27 < -26213.6 )
                        v27 = (float)((float)(v27 + 26213.6) * 0.16) - 26213.6;
                    }
                    else
                    {
                      v27 = (float)((float)(v27 - 26213.6) * 0.16) + 26213.6;
                    }
                    v21 += v17;
                    *v23 = (int)v27;
                    v23 += v17;
                  }
                  while ( v21 < v7 );
                }
                goto LABEL_83;
              case 8:
                v34 = 0i64;
                if ( !*(_BYTE *)(v16 + 1) )
                {
                  if ( v7 > 0 )
                  {
                    v35 = 2 * v17;
                    v36 = (char *)v8 - (char *)v15;
                    v37 = v15 + 1;
                    v38 = *(int *)(*(_QWORD *)(v16 + 152) + 328i64);
                    do
                    {
                      v39 = *(__int16 *)((char *)v37 + v36) + ((*(_DWORD *)(v16 + 260) * v37[1]) >> 12);
                      v40 = *(__int16 *)((char *)v37 + v36 + 2) + ((*(_DWORD *)(v16 + 264) * *v37) >> 12);
                      v41 = *(__int16 *)((char *)v37 + v36 + 4) + ((*(_DWORD *)(v16 + 268) * v37[6]) >> 12);
                      v42 = *(__int16 *)((char *)v37 + v36 + 6) + ((*(_DWORD *)(v16 + 272) * v37[2]) >> 12);
                      v43 = *(__int16 *)((char *)v37 + v36 + 8) + ((*(_DWORD *)(v16 + 276) * v37[3]) >> 12);
                      v44 = *(__int16 *)((char *)v37 + v36 + 10) + ((*(_DWORD *)(v16 + 280) * v37[4]) >> 12);
                      v45 = *(__int16 *)((char *)v37 + v36 + 12) + ((*(_DWORD *)(v16 + 284) * v37[5]) >> 12);
                      v46 = (float)(*(__int16 *)((char *)v37 + v36 - 2) + ((*(_DWORD *)(v16 + 256) * *(v37 - 1)) >> 12));
                      if ( v46 <= 26213.6 )
                      {
                        if ( v46 < -26213.6 )
                          v46 = (float)((float)(v46 + 26213.6) * 0.16) - 26213.6;
                      }
                      else
                      {
                        v46 = (float)((float)(v46 - 26213.6) * 0.16) + 26213.6;
                      }
                      v47 = (int)v46;
                      v48 = (float)v39;
                      *(__int16 *)((char *)v37 + v36 - 2) = v47;
                      if ( (float)v39 <= 26213.6 )
                      {
                        if ( v48 < -26213.6 )
                          v48 = (float)((float)(v48 + 26213.6) * 0.16) - 26213.6;
                      }
                      else
                      {
                        v48 = (float)((float)(v48 - 26213.6) * 0.16) + 26213.6;
                      }
                      v49 = (int)v48;
                      v50 = (float)v40;
                      *(__int16 *)((char *)v37 + v36) = v49;
                      if ( (float)v40 <= 26213.6 )
                      {
                        if ( v50 < -26213.6 )
                          v50 = (float)((float)(v50 + 26213.6) * 0.16) - 26213.6;
                      }
                      else
                      {
                        v50 = (float)((float)(v50 - 26213.6) * 0.16) + 26213.6;
                      }
                      v51 = (int)v50;
                      v52 = (float)v41;
                      *(__int16 *)((char *)v37 + v36 + 2) = v51;
                      if ( (float)v41 <= 26213.6 )
                      {
                        if ( v52 < -26213.6 )
                          v52 = (float)((float)(v52 + 26213.6) * 0.16) - 26213.6;
                      }
                      else
                      {
                        v52 = (float)((float)(v52 - 26213.6) * 0.16) + 26213.6;
                      }
                      v53 = (int)v52;
                      v54 = (float)v42;
                      *(__int16 *)((char *)v37 + v36 + 4) = v53;
                      if ( (float)v42 <= 26213.6 )
                      {
                        if ( v54 < -26213.6 )
                          v54 = (float)((float)(v54 + 26213.6) * 0.16) - 26213.6;
                      }
                      else
                      {
                        v54 = (float)((float)(v54 - 26213.6) * 0.16) + 26213.6;
                      }
                      v55 = (int)v54;
                      v56 = (float)v43;
                      *(__int16 *)((char *)v37 + v36 + 6) = v55;
                      if ( (float)v43 <= 26213.6 )
                      {
                        if ( v56 < -26213.6 )
                          v56 = (float)((float)(v56 + 26213.6) * 0.16) - 26213.6;
                      }
                      else
                      {
                        v56 = (float)((float)(v56 - 26213.6) * 0.16) + 26213.6;
                      }
                      v57 = (int)v56;
                      v58 = (float)v44;
                      *(__int16 *)((char *)v37 + v36 + 8) = v57;
                      if ( (float)v44 <= 26213.6 )
                      {
                        if ( v58 < -26213.6 )
                          v58 = (float)((float)(v58 + 26213.6) * 0.16) - 26213.6;
                      }
                      else
                      {
                        v58 = (float)((float)(v58 - 26213.6) * 0.16) + 26213.6;
                      }
                      v59 = (int)v58;
                      v60 = (float)v45;
                      *(__int16 *)((char *)v37 + v36 + 10) = v59;
                      if ( (float)v45 <= 26213.6 )
                      {
                        if ( v60 < -26213.6 )
                          v60 = (float)((float)(v60 + 26213.6) * 0.16) - 26213.6;
                      }
                      else
                      {
                        v60 = (float)((float)(v60 - 26213.6) * 0.16) + 26213.6;
                      }
                      v34 += v38;
                      *(__int16 *)((char *)v37 + v36 + 12) = (int)v60;
                      v37 = (__int16 *)((char *)v37 + v35);
                    }
                    while ( v34 < v211 );
                    goto LABEL_79;
                  }
LABEL_337:
                  v5 = v225;
LABEL_83:
                  LeaveCriticalSection(lpCriticalSection);
                  v6 = v218;
                  v9 = v226;
                  goto LABEL_339;
                }
                if ( v7 <= 0 )
                  goto LABEL_337;
                v61 = 2 * v17;
                v62 = (char *)v8 - (char *)v15;
                v63 = v15 + 1;
                v64 = *(int *)(*(_QWORD *)(v16 + 152) + 328i64);
                do
                {
                  v65 = *(__int16 *)((char *)v63 + v62) + ((*(_DWORD *)(v16 + 256) * *(v63 - 1)) >> 12);
                  v66 = *(__int16 *)((char *)v63 + v62 + 2) + ((*(_DWORD *)(v16 + 264) * *v63) >> 12);
                  v67 = *(__int16 *)((char *)v63 + v62 + 4) + ((*(_DWORD *)(v16 + 268) * v63[6]) >> 12);
                  v68 = *(__int16 *)((char *)v63 + v62 + 8) + ((*(_DWORD *)(v16 + 272) * v63[2]) >> 12);
                  v69 = *(__int16 *)((char *)v63 + v62 + 6) + ((*(_DWORD *)(v16 + 276) * v63[3]) >> 12);
                  v70 = *(__int16 *)((char *)v63 + v62 + 12) + ((*(_DWORD *)(v16 + 280) * v63[4]) >> 12);
                  v71 = *(__int16 *)((char *)v63 + v62 + 10) + ((*(_DWORD *)(v16 + 284) * v63[5]) >> 12);
                  v72 = (float)(*(__int16 *)((char *)v63 + v62 - 2) + ((*(_DWORD *)(v16 + 260) * v63[1]) >> 12));
                  if ( v72 <= 26213.6 )
                  {
                    if ( v72 < -26213.6 )
                      v72 = (float)((float)(v72 + 26213.6) * 0.16) - 26213.6;
                  }
                  else
                  {
                    v72 = (float)((float)(v72 - 26213.6) * 0.16) + 26213.6;
                  }
                  v73 = (int)v72;
                  v74 = (float)v65;
                  *(__int16 *)((char *)v63 + v62 - 2) = v73;
                  if ( (float)v65 <= 26213.6 )
                  {
                    if ( v74 < -26213.6 )
                      v74 = (float)((float)(v74 + 26213.6) * 0.16) - 26213.6;
                  }
                  else
                  {
                    v74 = (float)((float)(v74 - 26213.6) * 0.16) + 26213.6;
                  }
                  v75 = (int)v74;
                  v76 = (float)v66;
                  *(__int16 *)((char *)v63 + v62) = v75;
                  if ( (float)v66 <= 26213.6 )
                  {
                    if ( v76 < -26213.6 )
                      v76 = (float)((float)(v76 + 26213.6) * 0.16) - 26213.6;
                  }
                  else
                  {
                    v76 = (float)((float)(v76 - 26213.6) * 0.16) + 26213.6;
                  }
                  v77 = (int)v76;
                  v78 = (float)v67;
                  *(__int16 *)((char *)v63 + v62 + 2) = v77;
                  if ( (float)v67 <= 26213.6 )
                  {
                    if ( v78 < -26213.6 )
                      v78 = (float)((float)(v78 + 26213.6) * 0.16) - 26213.6;
                  }
                  else
                  {
                    v78 = (float)((float)(v78 - 26213.6) * 0.16) + 26213.6;
                  }
                  v79 = (int)v78;
                  v80 = (float)v69;
                  *(__int16 *)((char *)v63 + v62 + 4) = v79;
                  if ( (float)v69 <= 26213.6 )
                  {
                    if ( v80 < -26213.6 )
                      v80 = (float)((float)(v80 + 26213.6) * 0.16) - 26213.6;
                  }
                  else
                  {
                    v80 = (float)((float)(v80 - 26213.6) * 0.16) + 26213.6;
                  }
                  v81 = (int)v80;
                  v82 = (float)v68;
                  *(__int16 *)((char *)v63 + v62 + 6) = v81;
                  if ( (float)v68 <= 26213.6 )
                  {
                    if ( v82 < -26213.6 )
                      v82 = (float)((float)(v82 + 26213.6) * 0.16) - 26213.6;
                  }
                  else
                  {
                    v82 = (float)((float)(v82 - 26213.6) * 0.16) + 26213.6;
                  }
                  v83 = (int)v82;
                  v84 = (float)v71;
                  *(__int16 *)((char *)v63 + v62 + 8) = v83;
                  if ( (float)v71 <= 26213.6 )
                  {
                    if ( v84 < -26213.6 )
                      v84 = (float)((float)(v84 + 26213.6) * 0.16) - 26213.6;
                  }
                  else
                  {
                    v84 = (float)((float)(v84 - 26213.6) * 0.16) + 26213.6;
                  }
                  v85 = (int)v84;
                  v86 = (float)v70;
                  *(__int16 *)((char *)v63 + v62 + 10) = v85;
                  if ( (float)v70 <= 26213.6 )
                  {
                    if ( v86 < -26213.6 )
                      v86 = (float)((float)(v86 + 26213.6) * 0.16) - 26213.6;
                  }
                  else
                  {
                    v86 = (float)((float)(v86 - 26213.6) * 0.16) + 26213.6;
                  }
                  v34 += v64;
                  *(__int16 *)((char *)v63 + v62 + 12) = (int)v86;
                  v63 = (__int16 *)((char *)v63 + v61);
                }
                while ( v34 < v211 );
LABEL_79:
                v8 = v214;
                v7 = v211;
                break;
              case 1:
                for ( i = 0i64; i < v7; i += 2i64 )
                {
                  v88 = ((*(_DWORD *)(v16 + 256) * *v15) >> 12) + v8[i + 1];
                  v89 = (float)(((*(_DWORD *)(v16 + 256) * *v15) >> 12) + v8[i]);
                  if ( v89 <= 26213.6 )
                  {
                    if ( v89 < -26213.6 )
                      v89 = (float)((float)(v89 + 26213.6) * 0.16) - 26213.6;
                  }
                  else
                  {
                    v89 = (float)((float)(v89 - 26213.6) * 0.16) + 26213.6;
                  }
                  v90 = (int)v89;
                  v91 = (float)v88;
                  v8[i] = v90;
                  if ( (float)v88 <= 26213.6 )
                  {
                    if ( v91 < -26213.6 )
                      v91 = (float)((float)(v91 + 26213.6) * 0.16) - 26213.6;
                  }
                  else
                  {
                    v91 = (float)((float)(v91 - 26213.6) * 0.16) + 26213.6;
                  }
                  ++v15;
                  v8[i + 1] = (int)v91;
                }
                goto LABEL_83;
              default:
                v92 = 0i64;
                if ( v7 <= 0 )
                  goto LABEL_337;
                v93 = 2 * v17;
                v94 = (char *)v8 - (char *)v15;
                v95 = v15 + 1;
                do
                {
                  v96 = *(__int16 *)((char *)v95 + v94) + ((*(_DWORD *)(v16 + 260) * v95[1]) >> 12);
                  v97 = *(__int16 *)((char *)v95 + v94 + 2) + ((*(_DWORD *)(v16 + 264) * *v95) >> 12);
                  v98 = *(__int16 *)((char *)v95 + v94 + 4) + ((*(_DWORD *)(v16 + 268) * v95[4]) >> 12);
                  v99 = *(__int16 *)((char *)v95 + v94 + 6) + ((*(_DWORD *)(v16 + 272) * v95[2]) >> 12);
                  v100 = *(__int16 *)((char *)v95 + v94 + 8) + ((*(_DWORD *)(v16 + 276) * v95[3]) >> 12);
                  v101 = (float)(*(__int16 *)((char *)v95 + v94 - 2) + ((*(_DWORD *)(v16 + 256) * *(v95 - 1)) >> 12));
                  if ( v101 <= 26213.6 )
                  {
                    if ( v101 < -26213.6 )
                      v101 = (float)((float)(v101 + 26213.6) * 0.16) - 26213.6;
                  }
                  else
                  {
                    v101 = (float)((float)(v101 - 26213.6) * 0.16) + 26213.6;
                  }
                  v102 = (int)v101;
                  v103 = (float)v96;
                  *(__int16 *)((char *)v95 + v94 - 2) = v102;
                  if ( (float)v96 <= 26213.6 )
                  {
                    if ( v103 < -26213.6 )
                      v103 = (float)((float)(v103 + 26213.6) * 0.16) - 26213.6;
                  }
                  else
                  {
                    v103 = (float)((float)(v103 - 26213.6) * 0.16) + 26213.6;
                  }
                  v104 = (int)v103;
                  v105 = (float)v97;
                  *(__int16 *)((char *)v95 + v94) = v104;
                  if ( (float)v97 <= 26213.6 )
                  {
                    if ( v105 < -26213.6 )
                      v105 = (float)((float)(v105 + 26213.6) * 0.16) - 26213.6;
                  }
                  else
                  {
                    v105 = (float)((float)(v105 - 26213.6) * 0.16) + 26213.6;
                  }
                  v106 = (int)v105;
                  v107 = (float)v98;
                  *(__int16 *)((char *)v95 + v94 + 2) = v106;
                  if ( (float)v98 <= 26213.6 )
                  {
                    if ( v107 < -26213.6 )
                      v107 = (float)((float)(v107 + 26213.6) * 0.16) - 26213.6;
                  }
                  else
                  {
                    v107 = (float)((float)(v107 - 26213.6) * 0.16) + 26213.6;
                  }
                  v108 = (int)v107;
                  v109 = (float)v99;
                  *(__int16 *)((char *)v95 + v94 + 4) = v108;
                  if ( (float)v99 <= 26213.6 )
                  {
                    if ( v109 < -26213.6 )
                      v109 = (float)((float)(v109 + 26213.6) * 0.16) - 26213.6;
                  }
                  else
                  {
                    v109 = (float)((float)(v109 - 26213.6) * 0.16) + 26213.6;
                  }
                  v110 = (int)v109;
                  v111 = (float)v100;
                  *(__int16 *)((char *)v95 + v94 + 6) = v110;
                  if ( (float)v100 <= 26213.6 )
                  {
                    if ( v111 < -26213.6 )
                      v111 = (float)((float)(v111 + 26213.6) * 0.16) - 26213.6;
                  }
                  else
                  {
                    v111 = (float)((float)(v111 - 26213.6) * 0.16) + 26213.6;
                  }
                  v92 += v19;
                  *(__int16 *)((char *)v95 + v94 + 8) = (int)v111;
                  v95 = (__int16 *)((char *)v95 + v93);
                }
                while ( v92 < v7 );
                break;
            }
            v4 = v212 * 3;
LABEL_81:
            v5 = v225;
          }
          else
          {
            if ( (_DWORD)v17 != 8 )
              goto LABEL_83;
            if ( v20 == 6 )
            {
              v112 = 0;
              if ( v5 <= 0 )
                goto LABEL_83;
              v113 = v15 + 1;
              do
              {
                v114 = v112 + 1;
                v115 = v8[v114] + ((*(_DWORD *)(v16 + 260) * v113[1]) >> 12);
                v116 = v112 + 2;
                v117 = (float)(v8[v112] + ((*(_DWORD *)(v16 + 256) * *(v113 - 1)) >> 12));
                v118 = v8[v116] + ((*(_DWORD *)(v16 + 264) * *v113) >> 12);
                v119 = v112 + 3;
                v120 = v8[v119] + ((*(_DWORD *)(v16 + 268) * v113[6]) >> 12);
                v216 = v112 + 4;
                v121 = v8[v216] + ((*(_DWORD *)(v16 + 272) * v113[2] + *(_DWORD *)(v16 + 280) * v113[4]) >> 12);
                v122 = v8[v112 + 5] + ((*(_DWORD *)(v16 + 276) * v113[3] + *(_DWORD *)(v16 + 284) * v113[5]) >> 12);
                if ( v117 <= 26213.6 )
                {
                  if ( v117 < -26213.6 )
                    v117 = (float)((float)(v117 + 26213.6) * 0.16) - 26213.6;
                }
                else
                {
                  v117 = (float)((float)(v117 - 26213.6) * 0.16) + 26213.6;
                }
                v123 = (int)v117;
                v124 = (float)v115;
                v8[v112] = v123;
                if ( (float)v115 <= 26213.6 )
                {
                  if ( v124 < -26213.6 )
                    v124 = (float)((float)(v124 + 26213.6) * 0.16) - 26213.6;
                }
                else
                {
                  v124 = (float)((float)(v124 - 26213.6) * 0.16) + 26213.6;
                }
                v125 = (int)v124;
                v126 = (float)v118;
                v8[v114] = v125;
                if ( (float)v118 <= 26213.6 )
                {
                  if ( v126 < -26213.6 )
                    v126 = (float)((float)(v126 + 26213.6) * 0.16) - 26213.6;
                }
                else
                {
                  v126 = (float)((float)(v126 - 26213.6) * 0.16) + 26213.6;
                }
                v127 = (int)v126;
                v128 = (float)v120;
                v8[v116] = v127;
                if ( (float)v120 <= 26213.6 )
                {
                  if ( v128 < -26213.6 )
                    v128 = (float)((float)(v128 + 26213.6) * 0.16) - 26213.6;
                }
                else
                {
                  v128 = (float)((float)(v128 - 26213.6) * 0.16) + 26213.6;
                }
                v129 = (int)v128;
                v130 = (float)v121;
                v8[v119] = v129;
                if ( (float)v121 <= 26213.6 )
                {
                  if ( v130 < -26213.6 )
                    v130 = (float)((float)(v130 + 26213.6) * 0.16) - 26213.6;
                }
                else
                {
                  v130 = (float)((float)(v130 - 26213.6) * 0.16) + 26213.6;
                }
                v131 = (int)v130;
                v132 = (float)v122;
                v8[v216] = v131;
                if ( (float)v122 <= 26213.6 )
                {
                  if ( v132 < -26213.6 )
                    v132 = (float)((float)(v132 + 26213.6) * 0.16) - 26213.6;
                }
                else
                {
                  v132 = (float)((float)(v132 - 26213.6) * 0.16) + 26213.6;
                }
                v4 = v212 * 3;
                v5 = v225;
                v8[v112 + 5] = (int)v132;
                v112 += portConfig[v212].channel;
                v113 += v213;
              }
              while ( v112 < v225 );
              v7 = v211;
            }
            else
            {
              if ( v20 != 2 )
                goto LABEL_83;
              v133 = 0;
              if ( *(_BYTE *)(v16 + 1) )
              {
                if ( v5 <= 0 )
                  goto LABEL_83;
                v141 = v15 + 3;
                do
                {
                  v142 = v133 + 1;
                  v143 = (double)(*(_DWORD *)(v16 + 264) * *(v141 - 2)) * 0.707;
                  v144 = v8[v142]
                       + ((int)((double)(*(_DWORD *)(v16 + 256) * *(v141 - 3))
                              + v143
                              + (double)(*(_DWORD *)(v16 + 272) * *v141) * 0.707
                              + (double)(*(_DWORD *)(v16 + 280) * v141[2]) * 0.707) >> 12);
                  v145 = (float)(v8[v133]
                               + ((int)((double)(*(_DWORD *)(v16 + 260) * *(v141 - 1))
                                      + v143
                                      + (double)(*(_DWORD *)(v16 + 276) * v141[1]) * 0.707
                                      + (double)(*(_DWORD *)(v16 + 284) * v141[3]) * 0.707) >> 12));
                  if ( v145 <= 26213.6 )
                  {
                    if ( v145 < -26213.6 )
                      v145 = (float)((float)(v145 + 26213.6) * 0.16) - 26213.6;
                  }
                  else
                  {
                    v145 = (float)((float)(v145 - 26213.6) * 0.16) + 26213.6;
                  }
                  v146 = (int)v145;
                  v147 = (float)v144;
                  v8[v133] = v146;
                  if ( (float)v144 <= 26213.6 )
                  {
                    if ( v147 < -26213.6 )
                      v147 = (float)((float)(v147 + 26213.6) * 0.16) - 26213.6;
                  }
                  else
                  {
                    v147 = (float)((float)(v147 - 26213.6) * 0.16) + 26213.6;
                  }
                  v141 += v17;
                  v8[v142] = (int)v147;
                  v133 += *(&portConfig[0].channel + 2 * v4);
                }
                while ( v133 < v5 );
                v7 = v5;
              }
              else
              {
                if ( v5 <= 0 )
                  goto LABEL_83;
                v134 = v15 + 3;
                do
                {
                  v135 = (double)(*(_DWORD *)(v16 + 264) * *(v134 - 2)) * 0.707;
                  v136 = v133 + 1;
                  v137 = (float)(v8[v133]
                               + ((int)((double)(*(_DWORD *)(v16 + 256) * *(v134 - 3))
                                      + v135
                                      + (double)(*(_DWORD *)(v16 + 272) * *v134) * 0.707
                                      + (double)(*(_DWORD *)(v16 + 280) * v134[2]) * 0.707) >> 12));
                  v138 = v8[v136]
                       + ((int)((double)(*(_DWORD *)(v16 + 260) * *(v134 - 1))
                              + v135
                              + (double)(*(_DWORD *)(v16 + 276) * v134[1]) * 0.707
                              + (double)(*(_DWORD *)(v16 + 284) * v134[3]) * 0.707) >> 12);
                  if ( v137 <= 26213.6 )
                  {
                    if ( v137 < -26213.6 )
                      v137 = (float)((float)(v137 + 26213.6) * 0.16) - 26213.6;
                  }
                  else
                  {
                    v137 = (float)((float)(v137 - 26213.6) * 0.16) + 26213.6;
                  }
                  v139 = (int)v137;
                  v140 = (float)v138;
                  v8[v133] = v139;
                  if ( (float)v138 <= 26213.6 )
                  {
                    if ( v140 < -26213.6 )
                      v140 = (float)((float)(v140 + 26213.6) * 0.16) - 26213.6;
                  }
                  else
                  {
                    v140 = (float)((float)(v140 - 26213.6) * 0.16) + 26213.6;
                  }
                  v134 += v17;
                  v8[v136] = (int)v140;
                  v133 += *(&portConfig[0].channel + 2 * v4);
                }
                while ( v133 < v5 );
                v7 = v5;
              }
            }
          }
          v10 = v210;
          goto LABEL_83;
        }
        if ( (v18 & 0x10) != 0 )
        {
          if ( (_DWORD)v17 == 8 )
          {
            if ( v7 > 0 )
            {
              v148 = (char *)v15 - (char *)v8;
              v149 = v8 + 1;
              v150 = ((unsigned __int64)(v7 - 1) >> 3) + 1;
              do
              {
                v151 = *v149 + ((*(_DWORD *)(v16 + 260) * *(__int16 *)((char *)v149 + v148 + 2)) >> 12);
                v152 = v149[2] + ((*(_DWORD *)(v16 + 268) * *(__int16 *)((char *)v149 + v148 + 12)) >> 12);
                v153 = (float)(*(v149 - 1) + ((*(_DWORD *)(v16 + 256) * *(__int16 *)((char *)v149 + v148 - 2)) >> 12));
                if ( v153 <= 26213.6 )
                {
                  if ( v153 < -26213.6 )
                    v153 = (float)((float)(v153 + 26213.6) * 0.16) - 26213.6;
                }
                else
                {
                  v153 = (float)((float)(v153 - 26213.6) * 0.16) + 26213.6;
                }
                v154 = (int)v153;
                v155 = (float)v151;
                *(v149 - 1) = v154;
                if ( (float)v151 <= 26213.6 )
                {
                  if ( v155 < -26213.6 )
                    v155 = (float)((float)(v155 + 26213.6) * 0.16) - 26213.6;
                }
                else
                {
                  v155 = (float)((float)(v155 - 26213.6) * 0.16) + 26213.6;
                }
                v156 = (int)v155;
                v157 = (float)v152;
                *v149 = v156;
                if ( (float)v152 <= 26213.6 )
                {
                  if ( v157 < -26213.6 )
                    v157 = (float)((float)(v157 + 26213.6) * 0.16) - 26213.6;
                }
                else
                {
                  v157 = (float)((float)(v157 - 26213.6) * 0.16) + 26213.6;
                }
                v149[2] = (int)v157;
                v149 += 8;
                --v150;
              }
              while ( v150 );
            }
          }
          else if ( (v18 & 2) != 0 )
          {
            if ( (_DWORD)v17 == 2 )
            {
              for ( j = 0i64; j < v7; j += 8i64 )
              {
                v159 = v8[j + 1] + ((*(_DWORD *)(v16 + 260) * v15[1]) >> 12);
                v160 = (float)(v8[j] + ((*(_DWORD *)(v16 + 256) * *v15) >> 12));
                if ( v160 <= 26213.6 )
                {
                  if ( v160 < -26213.6 )
                    v160 = (float)((float)(v160 + 26213.6) * 0.16) - 26213.6;
                }
                else
                {
                  v160 = (float)((float)(v160 - 26213.6) * 0.16) + 26213.6;
                }
                v161 = (int)v160;
                v162 = (float)v159;
                v8[j] = v161;
                if ( (float)v159 <= 26213.6 )
                {
                  if ( v162 < -26213.6 )
                    v162 = (float)((float)(v162 + 26213.6) * 0.16) - 26213.6;
                }
                else
                {
                  v162 = (float)((float)(v162 - 26213.6) * 0.16) + 26213.6;
                }
                v15 += 2;
                v8[j + 1] = (int)v162;
              }
            }
            else if ( v7 > 0 )
            {
              v163 = v8 + 3;
              v164 = ((unsigned __int64)(v7 - 1) >> 3) + 1;
              do
              {
                v165 = *(v163 - 2) + ((*(_DWORD *)(v16 + 260) * *v15) >> 12);
                v166 = *v163 + ((*(_DWORD *)(v16 + 268) * *v15) >> 12);
                v167 = (float)(*(v163 - 3) + ((*(_DWORD *)(v16 + 256) * *v15) >> 12));
                if ( v167 <= 26213.6 )
                {
                  if ( v167 < -26213.6 )
                    v167 = (float)((float)(v167 + 26213.6) * 0.16) - 26213.6;
                }
                else
                {
                  v167 = (float)((float)(v167 - 26213.6) * 0.16) + 26213.6;
                }
                v168 = (int)v167;
                v169 = (float)v165;
                *(v163 - 3) = v168;
                if ( (float)v165 <= 26213.6 )
                {
                  if ( v169 < -26213.6 )
                    v169 = (float)((float)(v169 + 26213.6) * 0.16) - 26213.6;
                }
                else
                {
                  v169 = (float)((float)(v169 - 26213.6) * 0.16) + 26213.6;
                }
                v170 = (int)v169;
                v171 = (float)v166;
                *(v163 - 2) = v170;
                if ( (float)v166 <= 26213.6 )
                {
                  if ( v171 < -26213.6 )
                    v171 = (float)((float)(v171 + 26213.6) * 0.16) - 26213.6;
                }
                else
                {
                  v171 = (float)((float)(v171 - 26213.6) * 0.16) + 26213.6;
                }
                ++v15;
                *v163 = (int)v171;
                v163 += 8;
                --v164;
              }
              while ( v164 );
            }
          }
          else if ( (_DWORD)v17 == 2 )
          {
            if ( v7 > 0 )
            {
              v172 = (char *)v15 - (char *)v8;
              v173 = v8 + 1;
              v174 = ((unsigned __int64)(v7 - 1) >> 1) + 1;
              do
              {
                v175 = *v173 + ((*(_DWORD *)(v16 + 260) * *(__int16 *)((char *)v173 + v172)) >> 12);
                v176 = (float)(*(v173 - 1) + ((*(_DWORD *)(v16 + 256) * *(__int16 *)((char *)v173 + v172 - 2)) >> 12));
                if ( v176 <= 26213.6 )
                {
                  if ( v176 < -26213.6 )
                    v176 = (float)((float)(v176 + 26213.6) * 0.16) - 26213.6;
                }
                else
                {
                  v176 = (float)((float)(v176 - 26213.6) * 0.16) + 26213.6;
                }
                v177 = (int)v176;
                v178 = (float)v175;
                *(v173 - 1) = v177;
                if ( (float)v175 <= 26213.6 )
                {
                  if ( v178 < -26213.6 )
                    v178 = (float)((float)(v178 + 26213.6) * 0.16) - 26213.6;
                }
                else
                {
                  v178 = (float)((float)(v178 - 26213.6) * 0.16) + 26213.6;
                }
                *v173 = (int)v178;
                v173 += 2;
                --v174;
              }
              while ( v174 );
            }
          }
          else
          {
            for ( k = 0i64; k < v7; k += 2i64 )
            {
              v180 = v8[k + 1] + ((*v15 * *(_DWORD *)(v16 + 260)) >> 12);
              v181 = (float)(v8[k] + ((*v15 * *(_DWORD *)(v16 + 256)) >> 12));
              if ( v181 <= 26213.6 )
              {
                if ( v181 < -26213.6 )
                  v181 = (float)((float)(v181 + 26213.6) * 0.16) - 26213.6;
              }
              else
              {
                v181 = (float)((float)(v181 - 26213.6) * 0.16) + 26213.6;
              }
              v182 = (int)v181;
              v183 = (float)v180;
              v8[k] = v182;
              if ( (float)v180 <= 26213.6 )
              {
                if ( v183 < -26213.6 )
                  v183 = (float)((float)(v183 + 26213.6) * 0.16) - 26213.6;
              }
              else
              {
                v183 = (float)((float)(v183 - 26213.6) * 0.16) + 26213.6;
              }
              ++v15;
              v8[k + 1] = (int)v183;
            }
          }
          goto LABEL_83;
        }
        if ( *(&portConfig[0].channel + 2 * v4) == 1 )
        {
          for ( m = 0i64; m < v7; m += 2i64 )
          {
            v185 = ((*(_DWORD *)(v16 + 256) * *v15) >> 12) + v8[m + 1];
            v186 = (float)(((*(_DWORD *)(v16 + 256) * *v15) >> 12) + v8[m]);
            if ( v186 <= 26213.6 )
            {
              if ( v186 < -26213.6 )
                v186 = (float)((float)(v186 + 26213.6) * 0.16) - 26213.6;
            }
            else
            {
              v186 = (float)((float)(v186 - 26213.6) * 0.16) + 26213.6;
            }
            v187 = (int)v186;
            v188 = (float)v185;
            v8[m] = v187;
            if ( (float)v185 <= 26213.6 )
            {
              if ( v188 < -26213.6 )
                v188 = (float)((float)(v188 + 26213.6) * 0.16) - 26213.6;
            }
            else
            {
              v188 = (float)((float)(v188 - 26213.6) * 0.16) + 26213.6;
            }
            ++v15;
            v8[m + 1] = (int)v188;
          }
          goto LABEL_83;
        }
        v189 = 0;
        v190 = 0i64;
        v191 = 0;
        v192 = 0i64;
        if ( v7 >= 4 )
        {
          v193 = v15;
          v194 = v8 + 2;
          v195 = 2 * v17;
          v196 = ((unsigned __int64)(v7 - 4) >> 2) + 1;
          v192 = 4 * v196;
          do
          {
            v197 = (float)(*(v194 - 2) + ((*v193 * *(_DWORD *)(v16 + 4 * v190 + 256)) >> 12));
            if ( v197 <= 26213.6 )
            {
              if ( v197 < -26213.6 )
                v197 = (float)((float)(v197 + 26213.6) * 0.16) - 26213.6;
            }
            else
            {
              v197 = (float)((float)(v197 - 26213.6) * 0.16) + 26213.6;
            }
            v198 = v189 + 1;
            v199 = v190 + 1;
            *(v194 - 2) = (int)v197;
            if ( v198 >= portConfig[v212].channel )
            {
              v198 = 0;
              v199 = 0i64;
              v191 += v17;
              v193 = (__int16 *)((char *)v193 + v195);
            }
            v200 = (float)(*(v194 - 1) + ((*v193 * *(_DWORD *)(v16 + 4 * v199 + 256)) >> 12));
            if ( v200 <= 26213.6 )
            {
              if ( v200 < -26213.6 )
                v200 = (float)((float)(v200 + 26213.6) * 0.16) - 26213.6;
            }
            else
            {
              v200 = (float)((float)(v200 - 26213.6) * 0.16) + 26213.6;
            }
            v201 = v198 + 1;
            v202 = v199 + 1;
            *(v194 - 1) = (int)v200;
            if ( v201 >= portConfig[v212].channel )
            {
              v201 = 0;
              v202 = 0i64;
              v191 += v17;
              v193 = (__int16 *)((char *)v193 + v195);
            }
            v203 = (float)(*v194 + ((*v193 * *(_DWORD *)(v16 + 4 * v202 + 256)) >> 12));
            if ( v203 <= 26213.6 )
            {
              if ( v203 < -26213.6 )
                v203 = (float)((float)(v203 + 26213.6) * 0.16) - 26213.6;
            }
            else
            {
              v203 = (float)((float)(v203 - 26213.6) * 0.16) + 26213.6;
            }
            v204 = v201 + 1;
            v205 = v202 + 1;
            *v194 = (int)v203;
            if ( v204 >= portConfig[v212].channel )
            {
              v204 = 0;
              v205 = 0i64;
              v191 += v17;
              v193 = (__int16 *)((char *)v193 + v195);
            }
            v206 = (float)(v194[1] + ((*v193 * *(_DWORD *)(v16 + 4 * v205 + 256)) >> 12));
            if ( v206 <= 26213.6 )
            {
              if ( v206 < -26213.6 )
                v206 = (float)((float)(v206 + 26213.6) * 0.16) - 26213.6;
            }
            else
            {
              v206 = (float)((float)(v206 - 26213.6) * 0.16) + 26213.6;
            }
            v189 = v204 + 1;
            v190 = v205 + 1;
            v194[1] = (int)v206;
            if ( v189 >= portConfig[v212].channel )
            {
              v189 = 0;
              v190 = 0i64;
              v191 += v17;
              v193 = (__int16 *)((char *)v193 + v195);
            }
            v194 += 4;
            --v196;
          }
          while ( v196 );
          v8 = v214;
          v19 = v17;
          v7 = v211;
          v4 = v212 * 3;
        }
        if ( v192 < v7 )
        {
          v207 = &v15[v191];
          do
          {
            v208 = (float)(v8[v192] + ((*v207 * *(_DWORD *)(v16 + 4 * v190 + 256)) >> 12));
            if ( v208 <= 26213.6 )
            {
              if ( v208 < -26213.6 )
                v208 = (float)((float)(v208 + 26213.6) * 0.16) - 26213.6;
            }
            else
            {
              v208 = (float)((float)(v208 - 26213.6) * 0.16) + 26213.6;
            }
            ++v189;
            ++v190;
            v8[v192] = (int)v208;
            if ( v189 >= *(&portConfig[0].channel + 2 * v4) )
            {
              v189 = 0;
              v190 = 0i64;
              v207 += v19;
            }
            ++v192;
          }
          while ( v192 < v7 );
        }
        goto LABEL_81;
      }
      LeaveCriticalSection(v12);
    }
LABEL_339:
    ++v9;
    ++v10;
    v226 = v9;
    v210 = v10;
    if ( v9 >= 32 )
    {
      v209 = *(_QWORD *)(v6 + 320);
      if ( v209 )
      {
        v220 = v8;
        v219[0] = 0;
        v223[0] = 0;
        v221 = 0i64;
        v222 = 0i64;
        v219[1] = 2 * v5;
        *(_QWORD *)&v223[1] = v6;
        (*(void (__fastcall **)(__int64, _DWORD *, _QWORD))(*(_QWORD *)v209 + 168i64))(v209, v219, 0i64);
        WaitForSingleObject(*(HANDLE *)(v6 + 328), 0xFFFFFFFF);
      }
      v2 = v227;
      v1 = arg;
      *(_DWORD *)(v6 + 8) = (*(_DWORD *)(v6 + 8) + 1) % 4;
      v3 = v215;
LABEL_343:
      ++v2;
      ++v3;
      v227 = v2;
      v215 = v3;
      if ( v2 >= 6 )
        goto LABEL_2;
      goto LABEL_3;
    }
  }
}

void __fastcall __noreturn MMBufferQueueCallbackBGM(void *arg)
{
  void *v1; // rdx
  int v2; // ecx
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // r15
  __int64 v6; // rsi
  __int64 v7; // r14
  __int16 *v8; // rbx
  int v9; // er12
  __int64 v10; // rdi
  __int64 v11; // rax
  _RTL_CRITICAL_SECTION *v12; // rbp
  _QWORD *v13; // rcx
  __int64 v14; // rax
  __int16 *v15; // r8
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // er14
  __int16 *v20; // rdi
  int v21; // ebp
  __int64 v22; // r12
  int v23; // ecx
  __int64 v24; // r13
  int v25; // edx
  int v26; // er8
  int v27; // er9
  int v28; // er10
  int v29; // er11
  int v30; // edi
  __int16 v31; // ax
  __int16 v32; // ax
  __int16 v33; // ax
  __int16 v34; // ax
  __int16 v35; // ax
  __int16 v36; // ax
  __int16 v37; // ax
  __int16 v38; // ax
  int v39; // er10
  __int16 *v40; // rbp
  int v41; // er9
  __int64 v42; // r15
  int v43; // ecx
  __int64 v44; // r12
  int v45; // edx
  __int64 v46; // r13
  int v47; // er8
  int v48; // er11
  int v49; // edi
  __int16 v50; // ax
  __int16 v51; // ax
  __int16 v52; // ax
  __int16 v53; // ax
  __int16 v54; // r8
  __int16 v55; // ax
  __int16 v56; // dx
  __int16 v57; // ax
  int v58; // er9
  __int64 v59; // rdi
  int v60; // edx
  __int64 v61; // r11
  int v62; // ecx
  __int16 v63; // ax
  __int16 v64; // ax
  int channel; // ecx
  int v66; // edi
  __int16 *v67; // rcx
  int v68; // er11
  __int64 v69; // r14
  int v70; // edx
  __int64 v71; // r15
  int v72; // er8
  __int64 v73; // r12
  int v74; // er9
  int v75; // er10
  int v76; // ecx
  __int16 v77; // ax
  __int16 v78; // ax
  __int16 v79; // ax
  __int16 v80; // ax
  __int16 v81; // ax
  __int16 v82; // ax
  __int16 v83; // ax
  __int16 v84; // ax
  int v85; // er9
  __int64 v86; // rdi
  __int16 *v87; // r8
  double v88; // xmm2_8
  int v89; // edx
  __int64 v90; // r11
  int v91; // ecx
  __int16 v92; // ax
  __int16 v93; // ax
  int v94; // er9
  __int64 v95; // r10
  __int16 *v96; // rdx
  signed __int64 v97; // r8
  __int64 v98; // r11
  int v99; // ecx
  __int16 v100; // ax
  int v101; // er9
  __int64 v102; // rax
  int v103; // eax
  int v104; // er9
  __int64 v105; // r10
  __int64 v106; // rdx
  __int64 v107; // r11
  int v108; // ecx
  __int16 v109; // ax
  __int64 v110; // rcx
  int v111; // [rsp+20h] [rbp-F8h]
  __int64 v112; // [rsp+28h] [rbp-F0h]
  __int64 v113; // [rsp+30h] [rbp-E8h]
  __int16 *v114; // [rsp+30h] [rbp-E8h]
  __int64 v115; // [rsp+38h] [rbp-E0h]
  __int64 v116; // [rsp+40h] [rbp-D8h]
  __int64 v117; // [rsp+48h] [rbp-D0h]
  __int64 v118; // [rsp+48h] [rbp-D0h]
  __int64 v119; // [rsp+48h] [rbp-D0h]
  int v120; // [rsp+50h] [rbp-C8h]
  __int16 *v121; // [rsp+58h] [rbp-C0h]
  __int64 v122; // [rsp+58h] [rbp-C0h]
  _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+60h] [rbp-B8h]
  __int64 v124; // [rsp+68h] [rbp-B0h]
  __int64 v125; // [rsp+70h] [rbp-A8h]
  __int64 v126; // [rsp+78h] [rbp-A0h]
  _DWORD v127[2]; // [rsp+80h] [rbp-98h] BYREF
  __int16 *v128; // [rsp+88h] [rbp-90h]
  __int64 v129; // [rsp+90h] [rbp-88h]
  __int64 v130; // [rsp+98h] [rbp-80h]
  _DWORD v131[30]; // [rsp+A0h] [rbp-78h]
  int v133; // [rsp+128h] [rbp+10h]
  __int64 v134; // [rsp+130h] [rbp+18h]
  __int64 v135; // [rsp+130h] [rbp+18h]
  int v136; // [rsp+130h] [rbp+18h]
  __int64 v137; // [rsp+138h] [rbp+20h]
  __int64 v138; // [rsp+138h] [rbp+20h]
  int v139; // [rsp+138h] [rbp+20h]

  v1 = arg;
LABEL_2:
  v2 = 0;
  v3 = 0i64;
  v120 = 0;
  v124 = 0i64;
LABEL_3:
  v4 = v3;
  if ( !portConfig[v3].type || (portConfig[v3].opt & 0xC) != 0 )
    goto LABEL_233;
  LODWORD(v5) = portConfig[v3].channel << 11;
  v6 = (__int64)v1 + 336 * v3 + 32;
  v7 = (int)v5;
  v126 = v6;
  v111 = v5;
  v8 = (__int16 *)(*(_QWORD *)v6 + 2i64 * (int)v5 * *(_DWORD *)(v6 + 8));
  memset(v8, 0, 2i64 * (int)v5);
  v9 = 0;
  v10 = 0i64;
  v133 = 0;
  v112 = 0i64;
  while ( 1 )
  {
    v11 = *(_QWORD *)(v6 + 8 * v10 + 32);
    if ( v11 )
    {
      v12 = (_RTL_CRITICAL_SECTION *)(v11 + 188);
      lpCriticalSection = (_RTL_CRITICAL_SECTION *)(v11 + 188);
      EnterCriticalSection((LPCRITICAL_SECTION)(v11 + 188));
      v13 = *(_QWORD **)(v6 + 8 * v10 + 32);
      if ( v13 )
      {
        if ( *(_BYTE *)(v10 + v6 + 288) == 1
          || (v14 = v13[19]) == 0
          || (v15 = APBufferQueueCallback(v13, *(_DWORD *)(v14 + 328) << 11)) == 0i64 )
        {
          LeaveCriticalSection(v12);
          *(_BYTE *)(v10 + v6 + 288) = 0;
          *(_QWORD *)(v6 + 8 * v10 + 32) = 0i64;
          goto LABEL_229;
        }
        v16 = *(_QWORD *)(v6 + 8 * v10 + 32);
        v17 = *(int *)(*(_QWORD *)(v16 + 152) + 328i64);
        v18 = v17;
        if ( (*(_BYTE *)(v16 + 180) & 2) != 0 )
        {
          v104 = 0;
          v105 = 0i64;
          v106 = 0i64;
          if ( v7 > 0 )
          {
            v107 = 2 * v17;
            do
            {
              v108 = v8[v106] + ((*v15 * *(_DWORD *)(v16 + 4 * v105 + 256)) >> 12);
              if ( v108 >= 0 )
              {
                v109 = 0x7FFF;
                if ( v108 < 0x7FFF )
                  v109 = v8[v106] + ((*v15 * *(_DWORD *)(v16 + 4 * v105 + 256)) >> 12);
              }
              else
              {
                v109 = 0x8000;
                if ( v108 > -32768 )
                  v109 = v8[v106] + ((*v15 * *(_DWORD *)(v16 + 4 * v105 + 256)) >> 12);
              }
              ++v104;
              v8[v106] = v109;
              ++v105;
              if ( v104 >= portConfig[v4].channel )
              {
                v104 = 0;
                v105 = 0i64;
                v15 = (__int16 *)((char *)v15 + v107);
              }
              ++v106;
            }
            while ( v106 < v7 );
            v9 = v133;
            LeaveCriticalSection(v12);
            v6 = v126;
            goto LABEL_229;
          }
        }
        else if ( portConfig[v4].type == 1 )
        {
          switch ( (_DWORD)v17 )
          {
            case 8:
              v19 = 0;
              if ( (int)v5 > 0 )
              {
                v20 = v15 + 1;
                v117 = v17;
                v121 = v15 + 1;
                do
                {
                  v21 = v8[v19] + ((*(_DWORD *)(v16 + 256) * *(v20 - 1)) >> 12);
                  v22 = v19 + 1;
                  v23 = v8[v22] + ((*(_DWORD *)(v16 + 260) * v20[1]) >> 12);
                  v24 = v19 + 2;
                  v25 = v8[v24] + ((*(_DWORD *)(v16 + 264) * *v20) >> 12);
                  v134 = v19 + 3;
                  v26 = v8[v134] + ((*(_DWORD *)(v16 + 268) * v20[6]) >> 12);
                  v137 = v19 + 4;
                  v27 = v8[v137] + ((*(_DWORD *)(v16 + 272) * v20[2]) >> 12);
                  v116 = v19 + 5;
                  v28 = v8[v116] + ((*(_DWORD *)(v16 + 276) * v20[3]) >> 12);
                  v115 = v19 + 6;
                  v29 = v8[v115] + ((*(_DWORD *)(v16 + 280) * v20[4]) >> 12);
                  v113 = v19 + 7;
                  v30 = v8[v113] + ((*(_DWORD *)(v16 + 284) * v20[5]) >> 12);
                  if ( v21 >= 0 )
                  {
                    v31 = 0x7FFF;
                    if ( v21 < 0x7FFF )
                      v31 = v21;
                  }
                  else
                  {
                    v31 = 0x8000;
                    if ( v21 > -32768 )
                      v31 = v21;
                  }
                  v8[v19] = v31;
                  if ( v23 >= 0 )
                  {
                    v32 = 0x7FFF;
                    if ( v23 < 0x7FFF )
                      v32 = v23;
                  }
                  else
                  {
                    v32 = 0x8000;
                    if ( v23 > -32768 )
                      v32 = v23;
                  }
                  v8[v22] = v32;
                  if ( v25 >= 0 )
                  {
                    v33 = 0x7FFF;
                    if ( v25 < 0x7FFF )
                      v33 = v25;
                  }
                  else
                  {
                    v33 = 0x8000;
                    if ( v25 > -32768 )
                      v33 = v25;
                  }
                  v8[v24] = v33;
                  if ( v26 >= 0 )
                  {
                    v34 = 0x7FFF;
                    if ( v26 < 0x7FFF )
                      v34 = v26;
                  }
                  else
                  {
                    v34 = 0x8000;
                    if ( v26 > -32768 )
                      v34 = v26;
                  }
                  v8[v134] = v34;
                  if ( v27 >= 0 )
                  {
                    v35 = 0x7FFF;
                    if ( v27 < 0x7FFF )
                      v35 = v27;
                  }
                  else
                  {
                    v35 = 0x8000;
                    if ( v27 > -32768 )
                      v35 = v27;
                  }
                  v8[v137] = v35;
                  if ( v28 >= 0 )
                  {
                    v36 = 0x7FFF;
                    if ( v28 < 0x7FFF )
                      v36 = v28;
                  }
                  else
                  {
                    v36 = 0x8000;
                    if ( v28 > -32768 )
                      v36 = v28;
                  }
                  v8[v116] = v36;
                  if ( v29 >= 0 )
                  {
                    v37 = 0x7FFF;
                    if ( v29 < 0x7FFF )
                      v37 = v29;
                  }
                  else
                  {
                    v37 = 0x8000;
                    if ( v29 > -32768 )
                      v37 = v29;
                  }
                  v8[v115] = v37;
                  if ( v30 >= 0 )
                  {
                    v38 = 0x7FFF;
                    if ( v30 < 0x7FFF )
                      v38 = v30;
                  }
                  else
                  {
                    v38 = 0x8000;
                    if ( v30 > -32768 )
                      v38 = v30;
                  }
                  v20 = &v121[v117];
                  v5 = v111;
                  v8[v113] = v38;
                  v121 = (__int16 *)((char *)v121 + v117 * 2);
                  v4 = v124;
                  v19 += portConfig[v124].channel;
                }
                while ( v19 < v111 );
LABEL_182:
                v7 = v5;
                v10 = v112;
                v9 = v133;
                LeaveCriticalSection(lpCriticalSection);
                v6 = v126;
                goto LABEL_229;
              }
LABEL_127:
              v7 = (int)v5;
              break;
            case 6:
              v39 = 0;
              if ( (int)v5 > 0 )
              {
                v40 = v15 + 1;
                v118 = 2 * v17;
                do
                {
                  v41 = v8[v39] + ((*(_DWORD *)(v16 + 256) * *(v40 - 1)) >> 12);
                  v42 = v39 + 1;
                  v43 = v8[v42] + ((*(_DWORD *)(v16 + 260) * v40[1]) >> 12);
                  v44 = v39 + 2;
                  v45 = v8[v44] + ((*(_DWORD *)(v16 + 264) * *v40) >> 12);
                  v46 = v39 + 3;
                  v47 = v8[v46] + ((*(_DWORD *)(v16 + 268) * v40[4]) >> 12);
                  v138 = v39 + 4;
                  v48 = v8[v138] + ((int)(float)((float)(*(_DWORD *)(v16 + 272) * v40[2]) * 1.4142135) >> 12);
                  v135 = v39 + 5;
                  v49 = v8[v135] + ((int)(float)((float)(*(_DWORD *)(v16 + 276) * v40[3]) * 1.4142135) >> 12);
                  if ( v41 >= 0 )
                  {
                    v50 = 0x7FFF;
                    if ( v41 < 0x7FFF )
                      v50 = v8[v39] + ((*(_DWORD *)(v16 + 256) * *(v40 - 1)) >> 12);
                  }
                  else
                  {
                    v50 = 0x8000;
                    if ( v41 > -32768 )
                      v50 = v8[v39] + ((*(_DWORD *)(v16 + 256) * *(v40 - 1)) >> 12);
                  }
                  v8[v39] = v50;
                  if ( v43 >= 0 )
                  {
                    v51 = 0x7FFF;
                    if ( v43 < 0x7FFF )
                      v51 = v43;
                  }
                  else
                  {
                    v51 = 0x8000;
                    if ( v43 > -32768 )
                      v51 = v43;
                  }
                  v8[v42] = v51;
                  if ( v45 >= 0 )
                  {
                    v52 = 0x7FFF;
                    if ( v45 < 0x7FFF )
                      v52 = v45;
                  }
                  else
                  {
                    v52 = 0x8000;
                    if ( v45 > -32768 )
                      v52 = v45;
                  }
                  v8[v44] = v52;
                  if ( v47 >= 0 )
                  {
                    v53 = 0x7FFF;
                    if ( v47 < 0x7FFF )
                      v53 = v47;
                  }
                  else
                  {
                    v53 = 0x8000;
                    if ( v47 > -32768 )
                      v53 = v47;
                  }
                  v8[v46] = v53;
                  if ( v48 >= 0 )
                  {
                    v55 = 0x7FFF;
                    if ( v48 < 0x7FFF )
                      v55 = v48;
                    v54 = v55;
                    v8[v138] = v55;
                  }
                  else
                  {
                    v54 = 0x8000;
                    if ( v48 > -32768 )
                      v54 = v48;
                    v8[v138] = v54;
                  }
                  if ( v49 >= 0 )
                  {
                    v57 = 0x7FFF;
                    if ( v49 < 0x7FFF )
                      v57 = v49;
                    v56 = v57;
                    v8[v135] = v57;
                  }
                  else
                  {
                    v56 = 0x8000;
                    if ( v49 > -32768 )
                      v56 = v49;
                    v8[v135] = v56;
                  }
                  v40 = (__int16 *)((char *)v40 + v118);
                  v5 = v111;
                  v8[v39 + 6] = v54;
                  v8[v39 + 7] = v56;
                  v4 = v124;
                  v39 += portConfig[v124].channel;
                }
                while ( v39 < v111 );
                goto LABEL_182;
              }
              break;
            case 2:
              v58 = 0;
              if ( (int)v5 > 0 )
              {
                v59 = 2 * v17;
                do
                {
                  v60 = v8[v58] + ((*(_DWORD *)(v16 + 256) * *v15) >> 12);
                  v61 = v58 + 1;
                  v62 = v8[v61] + ((*(_DWORD *)(v16 + 260) * v15[1]) >> 12);
                  if ( v60 >= 0 )
                  {
                    v63 = 0x7FFF;
                    if ( v60 < 0x7FFF )
                      v63 = v8[v58] + ((*(_DWORD *)(v16 + 256) * *v15) >> 12);
                  }
                  else
                  {
                    v63 = 0x8000;
                    if ( v60 > -32768 )
                      v63 = v8[v58] + ((*(_DWORD *)(v16 + 256) * *v15) >> 12);
                  }
                  v8[v58] = v63;
                  if ( v62 >= 0 )
                  {
                    v64 = 0x7FFF;
                    if ( v62 < 0x7FFF )
                      v64 = v62;
                  }
                  else
                  {
                    v64 = 0x8000;
                    if ( v62 > -32768 )
                      v64 = v62;
                  }
                  v8[v61] = v64;
                  v15 = (__int16 *)((char *)v15 + v59);
                  v58 += portConfig[v4].channel;
                }
                while ( v58 < (int)v5 );
                v10 = v112;
                goto LABEL_127;
              }
              break;
          }
        }
        else if ( (_DWORD)v17 == 8 )
        {
          channel = portConfig[v4].channel;
          if ( channel == 8 )
          {
            v66 = 0;
            if ( (int)v5 <= 0 )
            {
              v10 = v112;
              LeaveCriticalSection(v12);
              v6 = v126;
              goto LABEL_229;
            }
            v67 = v15 + 1;
            v125 = v18;
            v114 = v15 + 1;
            do
            {
              v68 = v8[v66] + ((*(_DWORD *)(v16 + 256) * *(v67 - 1)) >> 12);
              v69 = v66 + 1;
              v70 = v8[v69] + ((*(_DWORD *)(v16 + 260) * v67[1]) >> 12);
              v71 = v66 + 2;
              v72 = v8[v71] + ((*(_DWORD *)(v16 + 264) * *v67) >> 12);
              v73 = v66 + 3;
              v74 = v8[v73] + ((*(_DWORD *)(v16 + 268) * v67[6]) >> 12);
              v122 = v66 + 4;
              v75 = v8[v122] + ((*(_DWORD *)(v16 + 272) * v67[2]) >> 12);
              v119 = v66 + 5;
              v76 = v8[v119] + ((*(_DWORD *)(v16 + 276) * v67[3]) >> 12);
              v136 = v8[v66 + 6] + ((*(_DWORD *)(v16 + 280) * v114[4]) >> 12);
              v139 = v8[v66 + 7] + ((*(_DWORD *)(v16 + 284) * v114[5]) >> 12);
              if ( v68 >= 0 )
              {
                v77 = 0x7FFF;
                if ( v68 < 0x7FFF )
                  v77 = v68;
              }
              else
              {
                v77 = 0x8000;
                if ( v68 > -32768 )
                  v77 = v68;
              }
              v8[v66] = v77;
              if ( v70 >= 0 )
              {
                v78 = 0x7FFF;
                if ( v70 < 0x7FFF )
                  v78 = v70;
              }
              else
              {
                v78 = 0x8000;
                if ( v70 > -32768 )
                  v78 = v70;
              }
              v8[v69] = v78;
              if ( v72 >= 0 )
              {
                v79 = 0x7FFF;
                if ( v72 < 0x7FFF )
                  v79 = v72;
              }
              else
              {
                v79 = 0x8000;
                if ( v72 > -32768 )
                  v79 = v72;
              }
              v8[v71] = v79;
              if ( v74 >= 0 )
              {
                v80 = 0x7FFF;
                if ( v74 < 0x7FFF )
                  v80 = v74;
              }
              else
              {
                v80 = 0x8000;
                if ( v74 > -32768 )
                  v80 = v74;
              }
              v8[v73] = v80;
              if ( v75 >= 0 )
              {
                v81 = 0x7FFF;
                if ( v75 < 0x7FFF )
                  v81 = v75;
              }
              else
              {
                v81 = 0x8000;
                if ( v75 > -32768 )
                  v81 = v75;
              }
              v8[v122] = v81;
              if ( v76 >= 0 )
              {
                v82 = 0x7FFF;
                if ( v76 < 0x7FFF )
                  v82 = v76;
              }
              else
              {
                v82 = 0x8000;
                if ( v76 > -32768 )
                  v82 = v76;
              }
              v8[v119] = v82;
              if ( v136 >= 0 )
              {
                v83 = 0x7FFF;
                if ( v76 < 0x7FFF )
                  v83 = v76;
              }
              else
              {
                v83 = 0x8000;
                if ( v76 > -32768 )
                  v83 = v76;
              }
              v8[v66 + 6] = v83;
              if ( v139 >= 0 )
              {
                v84 = 0x7FFF;
                if ( v76 < 0x7FFF )
                  v84 = v76;
              }
              else
              {
                v84 = 0x8000;
                if ( v76 > -32768 )
                  v84 = v76;
              }
              v5 = v111;
              v8[v66 + 7] = v84;
              v67 = &v114[v125];
              v66 += portConfig[v4].channel;
              v114 = (__int16 *)((char *)v114 + v125 * 2);
            }
            while ( v66 < v111 );
            goto LABEL_182;
          }
          if ( channel == 2 )
          {
            v85 = 0;
            if ( (int)v5 > 0 )
            {
              v86 = 2 * v18;
              v87 = v15 + 3;
              do
              {
                v88 = (double)(*(_DWORD *)(v16 + 264) * *(v87 - 2)) * 0.707;
                v89 = v8[v85]
                    + ((int)((double)(*(_DWORD *)(v16 + 256) * *(v87 - 3))
                           + v88
                           + (double)(*(_DWORD *)(v16 + 272) * *v87) * 0.707
                           + (double)(*(_DWORD *)(v16 + 280) * v87[2]) * 0.707) >> 12);
                v90 = v85 + 1;
                v91 = v8[v90]
                    + ((int)((double)(*(_DWORD *)(v16 + 260) * *(v87 - 1))
                           + v88
                           + (double)(*(_DWORD *)(v16 + 276) * v87[1]) * 0.707
                           + (double)(*(_DWORD *)(v16 + 284) * v87[3]) * 0.707) >> 12);
                if ( v89 >= 0 )
                {
                  v92 = 0x7FFF;
                  if ( v89 < 0x7FFF )
                    v92 = v8[v85]
                        + ((int)((double)(*(_DWORD *)(v16 + 256) * *(v87 - 3))
                               + v88
                               + (double)(*(_DWORD *)(v16 + 272) * *v87) * 0.707
                               + (double)(*(_DWORD *)(v16 + 280) * v87[2]) * 0.707) >> 12);
                }
                else
                {
                  v92 = 0x8000;
                  if ( v89 > -32768 )
                    v92 = v8[v85]
                        + ((int)((double)(*(_DWORD *)(v16 + 256) * *(v87 - 3))
                               + v88
                               + (double)(*(_DWORD *)(v16 + 272) * *v87) * 0.707
                               + (double)(*(_DWORD *)(v16 + 280) * v87[2]) * 0.707) >> 12);
                }
                v8[v85] = v92;
                if ( v91 >= 0 )
                {
                  v93 = 0x7FFF;
                  if ( v91 < 0x7FFF )
                    v93 = v91;
                }
                else
                {
                  v93 = 0x8000;
                  if ( v91 > -32768 )
                    v93 = v91;
                }
                v8[v90] = v93;
                v87 = (__int16 *)((char *)v87 + v86);
                v85 += portConfig[v4].channel;
              }
              while ( v85 < (int)v5 );
              v10 = v112;
              v9 = v133;
              LeaveCriticalSection(v12);
              v6 = v126;
              goto LABEL_229;
            }
          }
        }
        else if ( portConfig[v4].channel == (_DWORD)v17 )
        {
          v94 = 0;
          v95 = 0i64;
          if ( v7 > 0 )
          {
            v96 = v8;
            v97 = (char *)v15 - (char *)v8;
            v98 = v7;
            do
            {
              v99 = *v96 + ((*(__int16 *)((char *)v96 + v97) * *(_DWORD *)(v16 + 4 * v95 + 256)) >> 12);
              if ( v99 >= 0 )
              {
                v100 = 0x7FFF;
                if ( v99 < 0x7FFF )
                  v100 = *v96 + ((*(__int16 *)((char *)v96 + v97) * *(_DWORD *)(v16 + 4 * v95 + 256)) >> 12);
              }
              else
              {
                v100 = 0x8000;
                if ( v99 > -32768 )
                  v100 = *v96 + ((*(__int16 *)((char *)v96 + v97) * *(_DWORD *)(v16 + 4 * v95 + 256)) >> 12);
              }
              *v96 = v100;
              v101 = v94 + 1;
              v102 = v95 + 1;
              v95 = 0i64;
              if ( v101 < portConfig[v4].channel )
                v95 = v102;
              v103 = 0;
              ++v96;
              if ( v101 < portConfig[v4].channel )
                v103 = v101;
              v94 = v103;
              --v98;
            }
            while ( v98 );
            LeaveCriticalSection(lpCriticalSection);
            v6 = v126;
            goto LABEL_229;
          }
        }
        LeaveCriticalSection(v12);
        v6 = v126;
        goto LABEL_229;
      }
      LeaveCriticalSection(v12);
    }
LABEL_229:
    ++v9;
    ++v10;
    v133 = v9;
    v112 = v10;
    if ( v9 >= 32 )
    {
      v110 = *(_QWORD *)(v6 + 320);
      if ( v110 )
      {
        v128 = v8;
        v127[0] = 0;
        v131[0] = 0;
        v129 = 0i64;
        v130 = 0i64;
        v127[1] = 2 * v5;
        *(_QWORD *)&v131[1] = v6;
        (*(void (__fastcall **)(__int64, _DWORD *, _QWORD))(*(_QWORD *)v110 + 168i64))(v110, v127, 0i64);
        WaitForSingleObject(*(HANDLE *)(v6 + 328), 0xFFFFFFFF);
      }
      v2 = v120;
      v1 = arg;
      *(_DWORD *)(v6 + 8) = (*(_DWORD *)(v6 + 8) + 1) % 4;
      v3 = v124;
LABEL_233:
      ++v2;
      ++v3;
      v120 = v2;
      v124 = v3;
      if ( v2 >= 6 )
        goto LABEL_2;
      goto LABEL_3;
    }
  }
}

void __fastcall __noreturn MMBufferQueueCallbackReverb2(void *arg)
{
  void *v1; // rbp
  __int64 v2; // r12
  __int64 v3; // r15
  int v4; // er13
  __int64 v5; // r14
  __int16 *v6; // rdi
  __int16 *v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rax
  _RTL_CRITICAL_SECTION *v10; // rbx
  _QWORD *v11; // rcx
  __int64 v12; // rax
  __int16 *v13; // r12
  _DWORD *v14; // rbx
  __int64 v15; // rcx
  int v16; // er13
  __int16 *v17; // r11
  int v18; // ecx
  int v19; // eax
  float v20; // xmm0_4
  int v21; // edx
  int v22; // ebx
  __int64 v23; // r10
  __int64 v24; // r14
  int v25; // er15
  int v26; // er12
  __int64 v27; // rbp
  int v28; // ecx
  int v29; // edx
  int v30; // er9
  float v31; // xmm0_4
  int v32; // er11
  int v33; // er15
  int v34; // eax
  float v35; // xmm0_4
  int v36; // eax
  float v37; // xmm0_4
  int v38; // eax
  float v39; // xmm0_4
  int v40; // eax
  float v41; // xmm0_4
  float v42; // xmm0_4
  float v43; // xmm0_4
  int v44; // eax
  float v45; // xmm0_4
  int v46; // eax
  float v47; // xmm0_4
  int v48; // eax
  float v49; // xmm0_4
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  int v53; // er11
  __int64 v54; // rbp
  __int64 v55; // r9
  int v56; // ecx
  int v57; // edx
  int v58; // er10
  int v59; // ecx
  int v60; // ebx
  int v61; // edx
  float v62; // xmm0_4
  int v63; // eax
  float v64; // xmm0_4
  int v65; // eax
  float v66; // xmm0_4
  int v67; // eax
  float v68; // xmm0_4
  int v69; // eax
  int v70; // ebx
  __int64 v71; // rbp
  __int64 v72; // r10
  int v73; // ecx
  int v74; // er9
  int v75; // ecx
  int v76; // eax
  int v77; // edx
  int v78; // er11
  float v79; // xmm0_4
  float v80; // xmm0_4
  float v81; // xmm0_4
  float v82; // xmm0_4
  int v83; // er13
  __int64 v84; // rax
  int v85; // er15
  __int64 v86; // r10
  __int64 v87; // rcx
  __int64 v88; // r13
  int v89; // er14
  int v90; // edx
  int v91; // er9
  int v92; // er8
  int v93; // ebx
  int v94; // edx
  int v95; // er8
  __int64 v96; // r15
  int v97; // er11
  int v98; // ebp
  int v99; // er14
  float v100; // xmm0_4
  int v101; // eax
  float v102; // xmm0_4
  int v103; // eax
  float v104; // xmm0_4
  int v105; // eax
  float v106; // xmm0_4
  int v107; // eax
  float v108; // xmm0_4
  float v109; // xmm0_4
  float v110; // xmm0_4
  int v111; // eax
  float v112; // xmm0_4
  int v113; // eax
  float v114; // xmm0_4
  __int64 v115; // rcx
  int v116; // eax
  float v117; // xmm0_4
  int v118; // eax
  float v119; // xmm0_4
  __int64 v120; // rcx
  int v121; // eax
  float v122; // xmm0_4
  int v123; // eax
  float v124; // xmm0_4
  __int64 v125; // rcx
  int v126; // eax
  float v127; // xmm0_4
  int v128; // eax
  int v129; // ebp
  __int16 *v130; // r11
  int v131; // ecx
  int v132; // eax
  float v133; // xmm0_4
  int v134; // edx
  int v135; // ebx
  __int64 v136; // r10
  __int64 v137; // r13
  int v138; // er14
  int v139; // er15
  __int64 v140; // r12
  int v141; // ecx
  int v142; // edx
  int v143; // er9
  float v144; // xmm0_4
  int v145; // er11
  int v146; // er14
  int v147; // eax
  float v148; // xmm0_4
  int v149; // eax
  float v150; // xmm0_4
  int v151; // eax
  float v152; // xmm0_4
  int v153; // eax
  float v154; // xmm0_4
  float v155; // xmm0_4
  float v156; // xmm0_4
  int v157; // eax
  float v158; // xmm0_4
  int v159; // eax
  float v160; // xmm0_4
  int v161; // eax
  float v162; // xmm0_4
  int v163; // eax
  __int16 v164; // ax
  __int16 v165; // ax
  int v166; // er8
  __int64 v167; // rbp
  __int64 v168; // r10
  int v169; // ecx
  int v170; // er9
  int v171; // er11
  int v172; // ecx
  int v173; // ebx
  int v174; // er9
  float v175; // xmm0_4
  int v176; // eax
  float v177; // xmm0_4
  float v178; // xmm1_4
  int v179; // eax
  float v180; // xmm1_4
  int v181; // eax
  float v182; // xmm1_4
  int v183; // eax
  float v184; // xmm1_4
  float v185; // xmm0_4
  int v186; // eax
  float v187; // xmm0_4
  float v188; // xmm1_4
  int v189; // eax
  float v190; // xmm1_4
  int v191; // eax
  float v192; // xmm1_4
  int v193; // eax
  float v194; // xmm1_4
  __int64 v195; // rbp
  __int64 v196; // r11
  int v197; // er9
  int v198; // er10
  int v199; // ecx
  int v200; // er9
  int v201; // ebx
  float v202; // xmm0_4
  float v203; // xmm0_4
  float v204; // xmm1_4
  int v205; // eax
  float v206; // xmm1_4
  int v207; // eax
  float v208; // xmm1_4
  float v209; // xmm0_4
  float v210; // xmm0_4
  float v211; // xmm1_4
  int v212; // eax
  float v213; // xmm1_4
  int v214; // eax
  float v215; // xmm1_4
  int v216; // er8
  __int64 v217; // r14
  int v218; // er10
  int v219; // ecx
  int v220; // er9
  int v221; // er10
  __int64 v222; // r11
  int v223; // ebp
  int v224; // ebx
  int v225; // er10
  int v226; // ecx
  int v227; // er9
  float v228; // xmm0_4
  int v229; // eax
  float v230; // xmm0_4
  float v231; // xmm1_4
  int v232; // eax
  float v233; // xmm1_4
  float v234; // xmm0_4
  int v235; // eax
  float v236; // xmm0_4
  float v237; // xmm1_4
  int v238; // eax
  float v239; // xmm1_4
  float v240; // xmm0_4
  __int64 v241; // rdx
  int v242; // esi
  int v243; // er8
  float v244; // xmm3_4
  int v245; // ebx
  __int64 i; // r10
  float v247; // xmm2_4
  int v248; // er9
  float v249; // xmm4_4
  int v250; // er10
  int v251; // eax
  int v252; // ecx
  float v253; // xmm0_4
  float v254; // xmm2_4
  int v255; // eax
  int v256; // ecx
  float v257; // xmm0_4
  float v258; // xmm2_4
  int v259; // eax
  int v260; // ecx
  float v261; // xmm0_4
  float v262; // xmm2_4
  int v263; // eax
  int v264; // ecx
  float v265; // xmm0_4
  int v266; // eax
  int v267; // ecx
  float v268; // xmm0_4
  __int64 v269; // rcx
  int v270; // ecx
  __int64 v271; // [rsp+20h] [rbp-148h]
  int v272; // [rsp+28h] [rbp-140h]
  int v273; // [rsp+28h] [rbp-140h]
  int v274; // [rsp+28h] [rbp-140h]
  _DWORD *v275; // [rsp+30h] [rbp-138h]
  int v276; // [rsp+38h] [rbp-130h]
  int v277; // [rsp+38h] [rbp-130h]
  __int64 v278; // [rsp+40h] [rbp-128h]
  __int16 *v279; // [rsp+48h] [rbp-120h]
  __int64 v280; // [rsp+48h] [rbp-120h]
  __int16 *v281; // [rsp+48h] [rbp-120h]
  __int64 v282; // [rsp+50h] [rbp-118h]
  __int64 v283; // [rsp+50h] [rbp-118h]
  __int64 v284; // [rsp+50h] [rbp-118h]
  __int64 v285; // [rsp+58h] [rbp-110h]
  __int64 v286; // [rsp+58h] [rbp-110h]
  __int64 v287; // [rsp+58h] [rbp-110h]
  __int64 v288; // [rsp+60h] [rbp-108h]
  int v289; // [rsp+68h] [rbp-100h]
  int v290; // [rsp+68h] [rbp-100h]
  int v291; // [rsp+6Ch] [rbp-FCh]
  int v292; // [rsp+70h] [rbp-F8h]
  int v293; // [rsp+74h] [rbp-F4h]
  int v294; // [rsp+78h] [rbp-F0h]
  __int64 v295; // [rsp+88h] [rbp-E0h]
  __int64 v296; // [rsp+90h] [rbp-D8h]
  _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+98h] [rbp-D0h]
  _DWORD v298[2]; // [rsp+A0h] [rbp-C8h] BYREF
  __int16 *v299; // [rsp+A8h] [rbp-C0h]
  __int64 v300; // [rsp+B0h] [rbp-B8h]
  __int64 v301; // [rsp+B8h] [rbp-B0h]
  _DWORD v302[42]; // [rsp+C0h] [rbp-A8h]
  int v304; // [rsp+178h] [rbp+10h]
  int v305; // [rsp+180h] [rbp+18h]
  int v306; // [rsp+180h] [rbp+18h]
  int v307; // [rsp+180h] [rbp+18h]
  int v308; // [rsp+188h] [rbp+20h]
  int v309; // [rsp+188h] [rbp+20h]
  int v310; // [rsp+188h] [rbp+20h]
  int v311; // [rsp+188h] [rbp+20h]

  v1 = arg;
LABEL_2:
  v2 = 0i64;
  v271 = 0i64;
LABEL_3:
  v3 = v2;
  if ( (portConfig[v2].opt & 8) == 0 )
    goto LABEL_421;
  v4 = portConfig[v2].channel << 11;
  v5 = (__int64)v1 + 336 * v2 + 32;
  v288 = v5;
  v304 = v4;
  v6 = (__int16 *)(*(_QWORD *)v5 + 2i64 * v4 * *(_DWORD *)(v5 + 8));
  memset(v6, 0, 2i64 * v4);
  v7 = (__int16 *)(*(_QWORD *)(v5 + 16) + 2i64 * v4 * *(_DWORD *)(v5 + 24));
  memset(v7, 0, 2i64 * v4);
  v8 = 0i64;
  v294 = 0;
  v278 = 0i64;
  while ( 1 )
  {
    v9 = *(_QWORD *)(v5 + 8 * v8 + 32);
    if ( v9 )
    {
      v10 = (_RTL_CRITICAL_SECTION *)(v9 + 188);
      lpCriticalSection = (_RTL_CRITICAL_SECTION *)(v9 + 188);
      EnterCriticalSection((LPCRITICAL_SECTION)(v9 + 188));
      v11 = *(_QWORD **)(v5 + 8 * v8 + 32);
      if ( v11 )
      {
        if ( *(_BYTE *)(v5 + v8 + 288) == 1 || (v12 = v11[19]) == 0 )
        {
          LeaveCriticalSection(v10);
          goto LABEL_353;
        }
        v13 = APBufferQueueCallback(v11, *(_DWORD *)(v12 + 328) << 11);
        if ( !v13 )
        {
          LeaveCriticalSection(v10);
          v2 = v271;
LABEL_353:
          *(_BYTE *)(v5 + v8 + 288) = 0;
          *(_QWORD *)(v5 + 8 * v8 + 32) = 0i64;
          goto LABEL_354;
        }
        v14 = *(_DWORD **)(v5 + 8 * v8 + 32);
        v275 = v14;
        v15 = *(int *)(*((_QWORD *)v14 + 19) + 328i64);
        v296 = v15;
        if ( (v14[45] & 0x12) != 0 )
        {
          if ( (_DWORD)v15 == 8 )
          {
            v83 = 0;
            v306 = 0;
            if ( v304 <= 0 )
              goto LABEL_351;
            v84 = 0i64;
            v286 = 0i64;
            do
            {
              v85 = v14[71] * v13[v84 + 6];
              v86 = v83 + 1;
              v309 = (v14[69] * v13[v84 + 4]) >> 12;
              v289 = (v14[70] * v13[v84 + 5]) >> 12;
              v87 = v83;
              v88 = v83 + 4;
              v89 = (v14[68] * v13[v84 + 3]) >> 12;
              v90 = (v14[64] * v13[v84]) >> 12;
              v291 = v89 + v7[v88];
              v91 = v90 + v7[v87];
              v92 = (v14[65] * v13[v84 + 2]) >> 12;
              v93 = v92 + v7[v86];
              v295 = v306 + 5;
              v273 = v85 >> 12;
              v292 = v309 + v7[v295];
              v280 = v306 + 6;
              v293 = v289 + v7[v280];
              v283 = v306 + 7;
              v276 = (v85 >> 12) + v7[v283];
              v94 = v6[v87] + v90;
              v95 = v6[v86] + v92;
              v96 = v306 + 2;
              v97 = v6[v96] + ((v275[66] * v13[v286 + 1]) >> 12);
              v98 = v6[v306 + 3] + ((v275[67] * v13[v286 + 7]) >> 12);
              v99 = v6[v88] + v89;
              v310 = v6[v295] + v309;
              v100 = (float)v94;
              v290 = v6[v280] + v289;
              v274 = v6[v283] + v273;
              if ( v94 >= 0 )
              {
                if ( v100 > 26213.6 )
                  v100 = (float)((float)(v100 - 26213.6) * 0.16) + 26213.6;
                v103 = (int)v100;
                v102 = (float)v91;
                v6[v87] = v103;
                if ( (float)v91 > 26213.6 )
                  v102 = (float)((float)(v102 - 26213.6) * 0.16) + 26213.6;
              }
              else
              {
                if ( v100 < -26213.6 )
                  v100 = (float)((float)(v100 + 26213.6) * 0.16) - 26213.6;
                v101 = (int)v100;
                v102 = (float)v91;
                v6[v87] = v101;
                if ( (float)v91 < -26213.6 )
                  v102 = (float)((float)(v102 + 26213.6) * 0.16) - 26213.6;
              }
              v7[v87] = (int)v102;
              v104 = (float)v95;
              if ( v95 >= 0 )
              {
                if ( v104 > 26213.6 )
                  v104 = (float)((float)(v104 - 26213.6) * 0.16) + 26213.6;
                v107 = (int)v104;
                v106 = (float)v93;
                v6[v86] = v107;
                if ( (float)v93 > 26213.6 )
                  v106 = (float)((float)(v106 - 26213.6) * 0.16) + 26213.6;
              }
              else
              {
                if ( v104 < -26213.6 )
                  v104 = (float)((float)(v104 + 26213.6) * 0.16) - 26213.6;
                v105 = (int)v104;
                v106 = (float)v93;
                v6[v86] = v105;
                if ( (float)v93 < -26213.6 )
                  v106 = (float)((float)(v106 + 26213.6) * 0.16) - 26213.6;
              }
              v7[v86] = (int)v106;
              v108 = (float)v97;
              if ( v97 >= 0 )
              {
                if ( v108 > 26213.6 )
                  v108 = (float)((float)(v108 - 26213.6) * 0.16) + 26213.6;
              }
              else if ( v108 < -26213.6 )
              {
                v108 = (float)((float)(v108 + 26213.6) * 0.16) - 26213.6;
              }
              v6[v96] = (int)v108;
              v109 = (float)v98;
              if ( v98 >= 0 )
              {
                if ( v109 > 26213.6 )
                  v109 = (float)((float)(v109 - 26213.6) * 0.16) + 26213.6;
              }
              else if ( v109 < -26213.6 )
              {
                v109 = (float)((float)(v109 + 26213.6) * 0.16) - 26213.6;
              }
              v6[v306 + 3] = (int)v109;
              v110 = (float)v99;
              if ( v99 >= 0 )
              {
                if ( v110 > 26213.6 )
                  v110 = (float)((float)(v110 - 26213.6) * 0.16) + 26213.6;
                v113 = (int)v110;
                v112 = (float)v291;
                v6[v88] = v113;
                if ( (float)v291 > 26213.6 )
                  v112 = (float)((float)(v112 - 26213.6) * 0.16) + 26213.6;
              }
              else
              {
                if ( v110 < -26213.6 )
                  v110 = (float)((float)(v110 + 26213.6) * 0.16) - 26213.6;
                v111 = (int)v110;
                v112 = (float)v291;
                v6[v88] = v111;
                if ( (float)v291 < -26213.6 )
                  v112 = (float)((float)(v112 + 26213.6) * 0.16) - 26213.6;
              }
              v7[v88] = (int)v112;
              v114 = (float)v310;
              if ( v310 >= 0 )
              {
                if ( v114 > 26213.6 )
                  v114 = (float)((float)(v114 - 26213.6) * 0.16) + 26213.6;
                v115 = v306 + 5;
                v118 = (int)v114;
                v117 = (float)v292;
                v6[v295] = v118;
                if ( (float)v292 > 26213.6 )
                  v117 = (float)((float)(v117 - 26213.6) * 0.16) + 26213.6;
              }
              else
              {
                if ( v114 < -26213.6 )
                  v114 = (float)((float)(v114 + 26213.6) * 0.16) - 26213.6;
                v115 = v306 + 5;
                v116 = (int)v114;
                v117 = (float)v292;
                v6[v295] = v116;
                if ( (float)v292 < -26213.6 )
                  v117 = (float)((float)(v117 + 26213.6) * 0.16) - 26213.6;
              }
              v7[v115] = (int)v117;
              v119 = (float)v290;
              if ( v290 >= 0 )
              {
                if ( v119 > 26213.6 )
                  v119 = (float)((float)(v119 - 26213.6) * 0.16) + 26213.6;
                v120 = v306 + 6;
                v123 = (int)v119;
                v122 = (float)v293;
                v6[v280] = v123;
                if ( (float)v293 > 26213.6 )
                  v122 = (float)((float)(v122 - 26213.6) * 0.16) + 26213.6;
              }
              else
              {
                if ( v119 < -26213.6 )
                  v119 = (float)((float)(v119 + 26213.6) * 0.16) - 26213.6;
                v120 = v306 + 6;
                v121 = (int)v119;
                v122 = (float)v293;
                v6[v280] = v121;
                if ( (float)v293 < -26213.6 )
                  v122 = (float)((float)(v122 + 26213.6) * 0.16) - 26213.6;
              }
              v7[v120] = (int)v122;
              v124 = (float)v274;
              if ( v274 >= 0 )
              {
                if ( v124 > 26213.6 )
                  v124 = (float)((float)(v124 - 26213.6) * 0.16) + 26213.6;
                v125 = v306 + 7;
                v128 = (int)v124;
                v127 = (float)v276;
                v6[v283] = v128;
                if ( (float)v276 > 26213.6 )
                  v127 = (float)((float)(v127 - 26213.6) * 0.16) + 26213.6;
              }
              else
              {
                if ( v124 < -26213.6 )
                  v124 = (float)((float)(v124 + 26213.6) * 0.16) - 26213.6;
                v125 = v306 + 7;
                v126 = (int)v124;
                v127 = (float)v276;
                v6[v283] = v126;
                if ( (float)v276 < -26213.6 )
                  v127 = (float)((float)(v127 + 26213.6) * 0.16) - 26213.6;
              }
              v14 = v275;
              v7[v125] = (int)v127;
              v3 = v271;
              v84 = v296 + v286;
              v83 = portConfig[v271].channel + v306;
              v306 = v83;
              v286 += v296;
            }
            while ( v83 < v304 );
            v4 = v304;
            goto LABEL_88;
          }
          if ( (_DWORD)v15 != 6 )
          {
            if ( (_DWORD)v15 == 2 )
            {
              v166 = 0;
              if ( *((_BYTE *)v14 + 1) )
              {
                if ( v4 <= 0 )
                  goto LABEL_90;
                v195 = 2 * v15;
                do
                {
                  v196 = v166 + 1;
                  v197 = (v14[64] * *v13) >> 12;
                  v198 = v197 + v7[v166];
                  v199 = (v14[65] * v13[1]) >> 12;
                  v200 = v6[v196] + v197;
                  v201 = v199 + v7[v196];
                  v202 = (float)(v6[v166] + v199);
                  if ( v6[v166] + v199 >= 0 )
                  {
                    if ( v202 > 26213.6 )
                      v202 = (float)((float)(v202 - 26213.6) * 0.16) + 26213.6;
                  }
                  else if ( v202 < -26213.6 )
                  {
                    v202 = (float)((float)(v202 + 26213.6) * 0.16) - 26213.6;
                  }
                  v6[v166] = (int)v202;
                  v203 = (float)v198;
                  v204 = (float)v198;
                  if ( v198 >= 0 )
                  {
                    if ( v203 > 26213.6 )
                      v204 = (float)((float)(v203 - 26213.6) * 0.16) + 26213.6;
                    v207 = (int)v204;
                    v208 = (float)v198;
                    v7[v166] = v207;
                    if ( v203 > 26213.6 )
                      v208 = (float)((float)(v203 - 26213.6) * 0.16) + 26213.6;
                    v7[v166 + 4] = (int)v208;
                    if ( v203 > 26213.6 )
                      v203 = (float)((float)(v203 - 26213.6) * 0.16) + 26213.6;
                  }
                  else
                  {
                    if ( v203 < -26213.6 )
                      v204 = (float)((float)(v203 + 26213.6) * 0.16) - 26213.6;
                    v205 = (int)v204;
                    v206 = (float)v198;
                    v7[v166] = v205;
                    if ( v203 < -26213.6 )
                      v206 = (float)((float)(v203 + 26213.6) * 0.16) - 26213.6;
                    v7[v166 + 4] = (int)v206;
                    if ( v203 < -26213.6 )
                      v203 = (float)((float)(v203 + 26213.6) * 0.16) - 26213.6;
                  }
                  v7[v166 + 6] = (int)v203;
                  v209 = (float)v200;
                  if ( v200 >= 0 )
                  {
                    if ( v209 > 26213.6 )
                      v209 = (float)((float)(v209 - 26213.6) * 0.16) + 26213.6;
                  }
                  else if ( v209 < -26213.6 )
                  {
                    v209 = (float)((float)(v209 + 26213.6) * 0.16) - 26213.6;
                  }
                  v6[v196] = (int)v209;
                  v210 = (float)v201;
                  v211 = (float)v201;
                  if ( v201 >= 0 )
                  {
                    if ( v210 > 26213.6 )
                      v211 = (float)((float)(v210 - 26213.6) * 0.16) + 26213.6;
                    v214 = (int)v211;
                    v215 = (float)v201;
                    v7[v196] = v214;
                    if ( v210 > 26213.6 )
                      v215 = (float)((float)(v210 - 26213.6) * 0.16) + 26213.6;
                    v7[v166 + 5] = (int)v215;
                    if ( v210 > 26213.6 )
                      v210 = (float)((float)(v210 - 26213.6) * 0.16) + 26213.6;
                  }
                  else
                  {
                    if ( v210 < -26213.6 )
                      v211 = (float)((float)(v210 + 26213.6) * 0.16) - 26213.6;
                    v212 = (int)v211;
                    v213 = (float)v201;
                    v7[v196] = v212;
                    if ( v210 < -26213.6 )
                      v213 = (float)((float)(v210 + 26213.6) * 0.16) - 26213.6;
                    v7[v166 + 5] = (int)v213;
                    if ( v210 < -26213.6 )
                      v210 = (float)((float)(v210 + 26213.6) * 0.16) - 26213.6;
                  }
                  v14 = v275;
                  v13 = (__int16 *)((char *)v13 + v195);
                  v7[v166 + 7] = (int)v210;
                  v166 += portConfig[v3].channel;
                }
                while ( v166 < v4 );
              }
              else
              {
                if ( v4 <= 0 )
                  goto LABEL_90;
                v167 = 2 * v15;
                do
                {
                  v168 = v166 + 1;
                  v169 = (v14[64] * *v13) >> 12;
                  v170 = (v14[65] * v13[1]) >> 12;
                  v171 = v169 + v7[v166];
                  v172 = v6[v166] + v169;
                  v173 = v170 + v7[v168];
                  v174 = v6[v168] + v170;
                  v175 = (float)v172;
                  if ( v172 >= 0 )
                  {
                    if ( v175 > 26213.6 )
                      v175 = (float)((float)(v175 - 26213.6) * 0.16) + 26213.6;
                    v181 = (int)v175;
                    v177 = (float)v171;
                    v6[v166] = v181;
                    v182 = (float)v171;
                    if ( (float)v171 > 26213.6 )
                      v182 = (float)((float)(v177 - 26213.6) * 0.16) + 26213.6;
                    v183 = (int)v182;
                    v184 = (float)v171;
                    v7[v166] = v183;
                    if ( v177 > 26213.6 )
                      v184 = (float)((float)(v177 - 26213.6) * 0.16) + 26213.6;
                    v7[v166 + 4] = (int)v184;
                    if ( v177 > 26213.6 )
                      v177 = (float)((float)(v177 - 26213.6) * 0.16) + 26213.6;
                  }
                  else
                  {
                    if ( v175 < -26213.6 )
                      v175 = (float)((float)(v175 + 26213.6) * 0.16) - 26213.6;
                    v176 = (int)v175;
                    v177 = (float)v171;
                    v6[v166] = v176;
                    v178 = (float)v171;
                    if ( (float)v171 < -26213.6 )
                      v178 = (float)((float)(v177 + 26213.6) * 0.16) - 26213.6;
                    v179 = (int)v178;
                    v180 = (float)v171;
                    v7[v166] = v179;
                    if ( v177 < -26213.6 )
                      v180 = (float)((float)(v177 + 26213.6) * 0.16) - 26213.6;
                    v7[v166 + 4] = (int)v180;
                    if ( v177 < -26213.6 )
                      v177 = (float)((float)(v177 + 26213.6) * 0.16) - 26213.6;
                  }
                  v7[v166 + 6] = (int)v177;
                  v185 = (float)v174;
                  if ( v174 >= 0 )
                  {
                    if ( v185 > 26213.6 )
                      v185 = (float)((float)(v185 - 26213.6) * 0.16) + 26213.6;
                    v191 = (int)v185;
                    v187 = (float)v173;
                    v6[v168] = v191;
                    v192 = (float)v173;
                    if ( (float)v173 > 26213.6 )
                      v192 = (float)((float)(v187 - 26213.6) * 0.16) + 26213.6;
                    v193 = (int)v192;
                    v194 = (float)v173;
                    v7[v168] = v193;
                    if ( v187 > 26213.6 )
                      v194 = (float)((float)(v187 - 26213.6) * 0.16) + 26213.6;
                    v7[v166 + 5] = (int)v194;
                    if ( v187 > 26213.6 )
                      v187 = (float)((float)(v187 - 26213.6) * 0.16) + 26213.6;
                  }
                  else
                  {
                    if ( v185 < -26213.6 )
                      v185 = (float)((float)(v185 + 26213.6) * 0.16) - 26213.6;
                    v186 = (int)v185;
                    v187 = (float)v173;
                    v6[v168] = v186;
                    v188 = (float)v173;
                    if ( (float)v173 < -26213.6 )
                      v188 = (float)((float)(v187 + 26213.6) * 0.16) - 26213.6;
                    v189 = (int)v188;
                    v190 = (float)v173;
                    v7[v168] = v189;
                    if ( v187 < -26213.6 )
                      v190 = (float)((float)(v187 + 26213.6) * 0.16) - 26213.6;
                    v7[v166 + 5] = (int)v190;
                    if ( v187 < -26213.6 )
                      v187 = (float)((float)(v187 + 26213.6) * 0.16) - 26213.6;
                  }
                  v14 = v275;
                  v13 = (__int16 *)((char *)v13 + v167);
                  v7[v166 + 7] = (int)v187;
                  v166 += portConfig[v3].channel;
                }
                while ( v166 < v4 );
              }
            }
            else
            {
              if ( (_DWORD)v15 != 1 )
                goto LABEL_90;
              v216 = 0;
              if ( v4 <= 0 )
                goto LABEL_90;
              v217 = 2 * v15;
              do
              {
                v218 = *v13;
                v219 = v218 * v14[64];
                v220 = v218 * v14[65];
                v221 = v14[67] * v218;
                v222 = v216 + 1;
                v219 >>= 12;
                v220 >>= 12;
                v223 = v220 + v7[v222];
                v224 = v219 + v7[v216];
                v225 = v221 >> 12;
                v226 = v6[v216] + v219;
                v227 = v6[v222] + v220;
                v228 = (float)v226;
                if ( v226 >= 0 )
                {
                  if ( v228 > 26213.6 )
                    v228 = (float)((float)(v228 - 26213.6) * 0.16) + 26213.6;
                  v232 = (int)v228;
                  v230 = (float)v224;
                  v6[v216] = v232;
                  v233 = (float)v224;
                  if ( (float)v224 > 26213.6 )
                    v233 = (float)((float)(v230 - 26213.6) * 0.16) + 26213.6;
                  v7[v216] = (int)v233;
                  if ( v230 > 26213.6 )
                    v230 = (float)((float)(v230 - 26213.6) * 0.16) + 26213.6;
                }
                else
                {
                  if ( v228 < -26213.6 )
                    v228 = (float)((float)(v228 + 26213.6) * 0.16) - 26213.6;
                  v229 = (int)v228;
                  v230 = (float)v224;
                  v6[v216] = v229;
                  v231 = (float)v224;
                  if ( (float)v224 < -26213.6 )
                    v231 = (float)((float)(v230 + 26213.6) * 0.16) - 26213.6;
                  v7[v216] = (int)v231;
                  if ( v230 < -26213.6 )
                    v230 = (float)((float)(v230 + 26213.6) * 0.16) - 26213.6;
                }
                v7[v216 + 4] = (int)v230;
                v234 = (float)v227;
                if ( v227 >= 0 )
                {
                  if ( v234 > 26213.6 )
                    v234 = (float)((float)(v234 - 26213.6) * 0.16) + 26213.6;
                  v238 = (int)v234;
                  v236 = (float)v223;
                  v6[v222] = v238;
                  v239 = (float)v223;
                  if ( (float)v223 > 26213.6 )
                    v239 = (float)((float)(v236 - 26213.6) * 0.16) + 26213.6;
                  v7[v222] = (int)v239;
                  if ( v236 > 26213.6 )
                    v236 = (float)((float)(v236 - 26213.6) * 0.16) + 26213.6;
                }
                else
                {
                  if ( v234 < -26213.6 )
                    v234 = (float)((float)(v234 + 26213.6) * 0.16) - 26213.6;
                  v235 = (int)v234;
                  v236 = (float)v223;
                  v6[v222] = v235;
                  v237 = (float)v223;
                  if ( (float)v223 < -26213.6 )
                    v237 = (float)((float)(v236 + 26213.6) * 0.16) - 26213.6;
                  v7[v222] = (int)v237;
                  if ( v236 < -26213.6 )
                    v236 = (float)((float)(v236 + 26213.6) * 0.16) - 26213.6;
                }
                v7[v216 + 5] = (int)v236;
                v240 = (float)v225;
                if ( v225 >= 0 )
                {
                  if ( v240 > 26213.6 )
                    v240 = (float)((float)(v240 - 26213.6) * 0.16) + 26213.6;
                }
                else if ( v240 < -26213.6 )
                {
                  v240 = (float)((float)(v240 + 26213.6) * 0.16) - 26213.6;
                }
                v14 = v275;
                v13 = (__int16 *)((char *)v13 + v217);
                v6[v216 + 3] = (int)v240;
                v216 += portConfig[v3].channel;
              }
              while ( v216 < v4 );
            }
            goto LABEL_88;
          }
          v129 = 0;
          if ( v4 > 0 )
          {
            v130 = v13 + 3;
            v281 = v13 + 3;
            do
            {
              v131 = (v14[64] * *(v130 - 3)) >> 12;
              v132 = v14[69] * v130[1];
              v133 = (float)(v14[68] * *v130);
              v134 = (v14[65] * *(v130 - 1)) >> 12;
              v135 = v131 + v7[v129];
              v136 = v129 + 1;
              v137 = v129 + 4;
              v138 = (int)(float)(v133 * 1.4142135) >> 12;
              v139 = v134 + v7[v136];
              v311 = v138 + v7[v137];
              v140 = v129 + 5;
              v277 = ((int)(float)((float)v132 * 1.4142135) >> 12) + v7[v140];
              v141 = v6[v129] + v131;
              v142 = v6[v136] + v134;
              v287 = v129 + 2;
              v143 = v6[v287] + ((v275[66] * *(v130 - 2)) >> 12);
              v284 = v129 + 3;
              v144 = (float)v141;
              v145 = v6[v284] + ((v275[67] * v130[2]) >> 12);
              v146 = v6[v137] + v138;
              v307 = v6[v140] + ((int)(float)((float)v132 * 1.4142135) >> 12);
              if ( v141 >= 0 )
              {
                if ( v144 > 26213.6 )
                  v144 = (float)((float)(v144 - 26213.6) * 0.16) + 26213.6;
                v149 = (int)v144;
                v148 = (float)v135;
                v6[v129] = v149;
                if ( (float)v135 > 26213.6 )
                  v148 = (float)((float)(v148 - 26213.6) * 0.16) + 26213.6;
              }
              else
              {
                if ( v144 < -26213.6 )
                  v144 = (float)((float)(v144 + 26213.6) * 0.16) - 26213.6;
                v147 = (int)v144;
                v148 = (float)v135;
                v6[v129] = v147;
                if ( (float)v135 < -26213.6 )
                  v148 = (float)((float)(v148 + 26213.6) * 0.16) - 26213.6;
              }
              v7[v129] = (int)v148;
              v150 = (float)v142;
              if ( v142 >= 0 )
              {
                if ( v150 > 26213.6 )
                  v150 = (float)((float)(v150 - 26213.6) * 0.16) + 26213.6;
                v153 = (int)v150;
                v152 = (float)v139;
                v6[v136] = v153;
                if ( (float)v139 > 26213.6 )
                  v152 = (float)((float)(v152 - 26213.6) * 0.16) + 26213.6;
              }
              else
              {
                if ( v150 < -26213.6 )
                  v150 = (float)((float)(v150 + 26213.6) * 0.16) - 26213.6;
                v151 = (int)v150;
                v152 = (float)v139;
                v6[v136] = v151;
                if ( (float)v139 < -26213.6 )
                  v152 = (float)((float)(v152 + 26213.6) * 0.16) - 26213.6;
              }
              v7[v136] = (int)v152;
              v154 = (float)v143;
              if ( v143 >= 0 )
              {
                if ( v154 > 26213.6 )
                  v154 = (float)((float)(v154 - 26213.6) * 0.16) + 26213.6;
              }
              else if ( v154 < -26213.6 )
              {
                v154 = (float)((float)(v154 + 26213.6) * 0.16) - 26213.6;
              }
              v6[v287] = (int)v154;
              v155 = (float)v145;
              if ( v145 >= 0 )
              {
                if ( v155 > 26213.6 )
                  v155 = (float)((float)(v155 - 26213.6) * 0.16) + 26213.6;
              }
              else if ( v155 < -26213.6 )
              {
                v155 = (float)((float)(v155 + 26213.6) * 0.16) - 26213.6;
              }
              v6[v284] = (int)v155;
              v156 = (float)v146;
              if ( v146 >= 0 )
              {
                if ( v156 > 26213.6 )
                  v156 = (float)((float)(v156 - 26213.6) * 0.16) + 26213.6;
                v159 = (int)v156;
                v158 = (float)v311;
                v6[v137] = v159;
                if ( (float)v311 > 26213.6 )
                  v158 = (float)((float)(v158 - 26213.6) * 0.16) + 26213.6;
              }
              else
              {
                if ( v156 < -26213.6 )
                  v156 = (float)((float)(v156 + 26213.6) * 0.16) - 26213.6;
                v157 = (int)v156;
                v158 = (float)v311;
                v6[v137] = v157;
                if ( (float)v311 < -26213.6 )
                  v158 = (float)((float)(v158 + 26213.6) * 0.16) - 26213.6;
              }
              v7[v137] = (int)v158;
              v160 = (float)v307;
              if ( v307 >= 0 )
              {
                if ( v160 > 26213.6 )
                  v160 = (float)((float)(v160 - 26213.6) * 0.16) + 26213.6;
                v163 = (int)v160;
                v162 = (float)v277;
                v6[v140] = v163;
                if ( (float)v277 > 26213.6 )
                  v162 = (float)((float)(v162 - 26213.6) * 0.16) + 26213.6;
              }
              else
              {
                if ( v160 < -26213.6 )
                  v160 = (float)((float)(v160 + 26213.6) * 0.16) - 26213.6;
                v161 = (int)v160;
                v162 = (float)v277;
                v6[v140] = v161;
                if ( (float)v277 < -26213.6 )
                  v162 = (float)((float)(v162 + 26213.6) * 0.16) - 26213.6;
              }
              v14 = v275;
              v7[v140] = (int)v162;
              v164 = v6[v137];
              v4 = v304;
              v6[v129 + 6] = v164;
              v165 = v6[v140];
              v2 = v271;
              v6[v129 + 7] = v165;
              v3 = v271;
              v129 += portConfig[v271].channel;
              v130 = &v281[v296];
              v281 = v130;
            }
            while ( v129 < v304 );
            v5 = v288;
            v8 = v278;
            LeaveCriticalSection(lpCriticalSection);
            goto LABEL_354;
          }
        }
        else
        {
          if ( portConfig[v3].channel == (_DWORD)v15 )
            goto LABEL_90;
          if ( (_DWORD)v15 == 6 )
          {
            v16 = 0;
            if ( v304 > 0 )
            {
              v17 = v13 + 3;
              v279 = v13 + 3;
              do
              {
                v18 = (v14[64] * *(v17 - 3)) >> 12;
                v19 = v14[69] * v17[1];
                v20 = (float)(v14[68] * *v17);
                v21 = (v14[65] * *(v17 - 1)) >> 12;
                v22 = v18 + v7[v16];
                v23 = v16 + 1;
                v24 = v16 + 4;
                v25 = (int)(float)(v20 * 1.4142135) >> 12;
                v26 = v21 + v7[v23];
                v308 = v25 + v7[v24];
                v27 = v16 + 5;
                v272 = ((int)(float)((float)v19 * 1.4142135) >> 12) + v7[v27];
                v28 = v6[v16] + v18;
                v29 = v6[v23] + v21;
                v285 = v16 + 2;
                v30 = v6[v285] + ((v275[66] * *(v17 - 2)) >> 12);
                v282 = v16 + 3;
                v31 = (float)v28;
                v32 = v6[v282] + ((v275[67] * v17[2]) >> 12);
                v33 = v6[v24] + v25;
                v305 = v6[v27] + ((int)(float)((float)v19 * 1.4142135) >> 12);
                if ( v28 >= 0 )
                {
                  if ( v31 > 26213.6 )
                    v31 = (float)((float)(v31 - 26213.6) * 0.16) + 26213.6;
                  v36 = (int)v31;
                  v35 = (float)v22;
                  v6[v16] = v36;
                  if ( (float)v22 > 26213.6 )
                    v35 = (float)((float)(v35 - 26213.6) * 0.16) + 26213.6;
                }
                else
                {
                  if ( v31 < -26213.6 )
                    v31 = (float)((float)(v31 + 26213.6) * 0.16) - 26213.6;
                  v34 = (int)v31;
                  v35 = (float)v22;
                  v6[v16] = v34;
                  if ( (float)v22 < -26213.6 )
                    v35 = (float)((float)(v35 + 26213.6) * 0.16) - 26213.6;
                }
                v7[v16] = (int)v35;
                v37 = (float)v29;
                if ( v29 >= 0 )
                {
                  if ( v37 > 26213.6 )
                    v37 = (float)((float)(v37 - 26213.6) * 0.16) + 26213.6;
                  v40 = (int)v37;
                  v39 = (float)v26;
                  v6[v23] = v40;
                  if ( (float)v26 > 26213.6 )
                    v39 = (float)((float)(v39 - 26213.6) * 0.16) + 26213.6;
                }
                else
                {
                  if ( v37 < -26213.6 )
                    v37 = (float)((float)(v37 + 26213.6) * 0.16) - 26213.6;
                  v38 = (int)v37;
                  v39 = (float)v26;
                  v6[v23] = v38;
                  if ( (float)v26 < -26213.6 )
                    v39 = (float)((float)(v39 + 26213.6) * 0.16) - 26213.6;
                }
                v7[v23] = (int)v39;
                v41 = (float)v30;
                if ( v30 >= 0 )
                {
                  if ( v41 > 26213.6 )
                    v41 = (float)((float)(v41 - 26213.6) * 0.16) + 26213.6;
                }
                else if ( v41 < -26213.6 )
                {
                  v41 = (float)((float)(v41 + 26213.6) * 0.16) - 26213.6;
                }
                v6[v285] = (int)v41;
                v42 = (float)v32;
                if ( v32 >= 0 )
                {
                  if ( v42 > 26213.6 )
                    v42 = (float)((float)(v42 - 26213.6) * 0.16) + 26213.6;
                }
                else if ( v42 < -26213.6 )
                {
                  v42 = (float)((float)(v42 + 26213.6) * 0.16) - 26213.6;
                }
                v6[v282] = (int)v42;
                v43 = (float)v33;
                if ( v33 >= 0 )
                {
                  if ( v43 > 26213.6 )
                    v43 = (float)((float)(v43 - 26213.6) * 0.16) + 26213.6;
                  v46 = (int)v43;
                  v45 = (float)v308;
                  v6[v24] = v46;
                  if ( (float)v308 > 26213.6 )
                    v45 = (float)((float)(v45 - 26213.6) * 0.16) + 26213.6;
                }
                else
                {
                  if ( v43 < -26213.6 )
                    v43 = (float)((float)(v43 + 26213.6) * 0.16) - 26213.6;
                  v44 = (int)v43;
                  v45 = (float)v308;
                  v6[v24] = v44;
                  if ( (float)v308 < -26213.6 )
                    v45 = (float)((float)(v45 + 26213.6) * 0.16) - 26213.6;
                }
                v7[v24] = (int)v45;
                v47 = (float)v305;
                if ( v305 >= 0 )
                {
                  if ( v47 > 26213.6 )
                    v47 = (float)((float)(v47 - 26213.6) * 0.16) + 26213.6;
                  v50 = (int)v47;
                  v49 = (float)v272;
                  v6[v27] = v50;
                  if ( (float)v272 > 26213.6 )
                    v49 = (float)((float)(v49 - 26213.6) * 0.16) + 26213.6;
                }
                else
                {
                  if ( v47 < -26213.6 )
                    v47 = (float)((float)(v47 + 26213.6) * 0.16) - 26213.6;
                  v48 = (int)v47;
                  v49 = (float)v272;
                  v6[v27] = v48;
                  if ( (float)v272 < -26213.6 )
                    v49 = (float)((float)(v49 + 26213.6) * 0.16) - 26213.6;
                }
                v2 = v271;
                v14 = v275;
                v3 = v271;
                v7[v27] = (int)v49;
                v51 = v16 + 6;
                v6[v51] = v6[v24];
                v52 = v16 + 7;
                v6[v52] = v6[v27];
                v7[v51] = v7[v24];
                v7[v52] = v7[v27];
                v16 += portConfig[v271].channel;
                v17 = &v279[v296];
                v279 = v17;
              }
              while ( v16 < v304 );
              v4 = v304;
              v5 = v288;
              v8 = v278;
              LeaveCriticalSection(lpCriticalSection);
              goto LABEL_354;
            }
LABEL_351:
            v4 = v304;
            v2 = v271;
            LeaveCriticalSection(lpCriticalSection);
            goto LABEL_354;
          }
          if ( (_DWORD)v15 != 2 )
            goto LABEL_90;
          if ( !*((_BYTE *)v14 + 1) )
          {
            v53 = 0;
            if ( v4 > 0 )
            {
              v54 = 2 * v15;
              do
              {
                v55 = v53 + 1;
                v56 = (v14[64] * *v13) >> 12;
                v57 = (v14[65] * v13[1]) >> 12;
                v58 = v56 + v7[v53];
                v59 = v6[v53] + v56;
                v60 = v57 + v7[v55];
                v61 = v6[v55] + v57;
                v62 = (float)v59;
                if ( v59 >= 0 )
                {
                  if ( v62 > 26213.6 )
                    v62 = (float)((float)(v62 - 26213.6) * 0.16) + 26213.6;
                  v65 = (int)v62;
                  v64 = (float)v58;
                  v6[v53] = v65;
                  if ( (float)v58 > 26213.6 )
                    v64 = (float)((float)(v64 - 26213.6) * 0.16) + 26213.6;
                }
                else
                {
                  if ( v62 < -26213.6 )
                    v62 = (float)((float)(v62 + 26213.6) * 0.16) - 26213.6;
                  v63 = (int)v62;
                  v64 = (float)v58;
                  v6[v53] = v63;
                  if ( (float)v58 < -26213.6 )
                    v64 = (float)((float)(v64 + 26213.6) * 0.16) - 26213.6;
                }
                v7[v53] = (int)v64;
                v66 = (float)v61;
                if ( v61 >= 0 )
                {
                  if ( v66 > 26213.6 )
                    v66 = (float)((float)(v66 - 26213.6) * 0.16) + 26213.6;
                  v69 = (int)v66;
                  v68 = (float)v60;
                  v6[v55] = v69;
                  if ( (float)v60 > 26213.6 )
                    v68 = (float)((float)(v68 - 26213.6) * 0.16) + 26213.6;
                }
                else
                {
                  if ( v66 < -26213.6 )
                    v66 = (float)((float)(v66 + 26213.6) * 0.16) - 26213.6;
                  v67 = (int)v66;
                  v68 = (float)v60;
                  v6[v55] = v67;
                  if ( (float)v60 < -26213.6 )
                    v68 = (float)((float)(v68 + 26213.6) * 0.16) - 26213.6;
                }
                v14 = v275;
                v13 = (__int16 *)((char *)v13 + v54);
                v7[v55] = (int)v68;
                v53 += portConfig[v3].channel;
              }
              while ( v53 < v4 );
              goto LABEL_88;
            }
LABEL_90:
            v2 = v271;
            LeaveCriticalSection(lpCriticalSection);
            goto LABEL_354;
          }
          v70 = 0;
          if ( v4 <= 0 )
            goto LABEL_90;
          v71 = 2 * v15;
          do
          {
            v72 = v70 + 1;
            v73 = (v275[64] * *v13) >> 12;
            v74 = v73 + v7[v70];
            v75 = v6[v72] + v73;
            v76 = v6[v70];
            v77 = (v275[65] * v13[1]) >> 12;
            v78 = v77 + v7[v72];
            v79 = (float)(v76 + v77);
            if ( v76 + v77 >= 0 )
            {
              if ( v79 > 26213.6 )
                v79 = (float)((float)(v79 - 26213.6) * 0.16) + 26213.6;
            }
            else if ( v79 < -26213.6 )
            {
              v79 = (float)((float)(v79 + 26213.6) * 0.16) - 26213.6;
            }
            v6[v70] = (int)v79;
            v80 = (float)v74;
            if ( v74 >= 0 )
            {
              if ( v80 > 26213.6 )
                v80 = (float)((float)(v80 - 26213.6) * 0.16) + 26213.6;
            }
            else if ( v80 < -26213.6 )
            {
              v80 = (float)((float)(v80 + 26213.6) * 0.16) - 26213.6;
            }
            v7[v70] = (int)v80;
            v81 = (float)v75;
            if ( v75 >= 0 )
            {
              if ( v81 > 26213.6 )
                v81 = (float)((float)(v81 - 26213.6) * 0.16) + 26213.6;
            }
            else if ( v81 < -26213.6 )
            {
              v81 = (float)((float)(v81 + 26213.6) * 0.16) - 26213.6;
            }
            v6[v72] = (int)v81;
            v82 = (float)v78;
            if ( v78 >= 0 )
            {
              if ( v82 > 26213.6 )
                v82 = (float)((float)(v82 - 26213.6) * 0.16) + 26213.6;
            }
            else if ( v82 < -26213.6 )
            {
              v82 = (float)((float)(v82 + 26213.6) * 0.16) - 26213.6;
            }
            v13 = (__int16 *)((char *)v13 + v71);
            v7[v72] = (int)v82;
            v70 += portConfig[v3].channel;
          }
          while ( v70 < v4 );
LABEL_88:
          v5 = v288;
        }
        v8 = v278;
        goto LABEL_90;
      }
      LeaveCriticalSection(v10);
    }
LABEL_354:
    v278 = ++v8;
    if ( ++v294 >= 32 )
    {
      v1 = arg;
      v241 = 0i64;
      v242 = v4 * *(_DWORD *)(v5 + 24);
      v243 = 1500 * v4;
      v244 = *((float *)arg + 3);
      v245 = *((_DWORD *)arg + 4);
      for ( i = v4; v241 < i; ++v241 )
      {
        v247 = *((float *)arg + 5);
        v248 = 1;
        if ( v245 >= 4 )
        {
          v249 = (float)v242;
          v250 = 3;
          do
          {
            v251 = (int)(float)(v249 - (float)((float)(v248 * *((_DWORD *)arg + 6)) * 0.5));
            if ( v243 > v251 )
            {
              if ( v251 < 0 )
                v251 += v243;
            }
            else
            {
              v251 -= v243;
            }
            v252 = (int)(float)((float)*(__int16 *)(*(_QWORD *)(v5 + 16) + 2i64 * v251) * v247);
            if ( v252 )
            {
              v253 = (float)(v6[v241] + v252);
              if ( v6[v241] + v252 >= 0 )
              {
                if ( v253 > 26213.6 )
                  v253 = (float)((float)(v253 - 26213.6) * 0.16) + 26213.6;
              }
              else if ( v253 < -26213.6 )
              {
                v253 = (float)((float)(v253 + 26213.6) * 0.16) - 26213.6;
              }
              v6[v241] = (int)v253;
            }
            v254 = v247 * v244;
            v255 = (int)(float)(v249 - (float)((float)(*((_DWORD *)arg + 6) * (v250 - 1)) * 0.5));
            if ( v243 > v255 )
            {
              if ( v255 < 0 )
                v255 += v243;
            }
            else
            {
              v255 -= v243;
            }
            v256 = (int)(float)((float)*(__int16 *)(*(_QWORD *)(v5 + 16) + 2i64 * v255) * v254);
            if ( v256 )
            {
              v257 = (float)(v6[v241] + v256);
              if ( v6[v241] + v256 >= 0 )
              {
                if ( v257 > 26213.6 )
                  v257 = (float)((float)(v257 - 26213.6) * 0.16) + 26213.6;
              }
              else if ( v257 < -26213.6 )
              {
                v257 = (float)((float)(v257 + 26213.6) * 0.16) - 26213.6;
              }
              v6[v241] = (int)v257;
            }
            v258 = v254 * v244;
            v259 = (int)(float)(v249 - (float)((float)(v250 * *((_DWORD *)arg + 6)) * 0.5));
            if ( v243 > v259 )
            {
              if ( v259 < 0 )
                v259 += v243;
            }
            else
            {
              v259 -= v243;
            }
            v260 = (int)(float)((float)*(__int16 *)(*(_QWORD *)(v5 + 16) + 2i64 * v259) * v258);
            if ( v260 )
            {
              v261 = (float)(v6[v241] + v260);
              if ( v6[v241] + v260 >= 0 )
              {
                if ( v261 > 26213.6 )
                  v261 = (float)((float)(v261 - 26213.6) * 0.16) + 26213.6;
              }
              else if ( v261 < -26213.6 )
              {
                v261 = (float)((float)(v261 + 26213.6) * 0.16) - 26213.6;
              }
              v6[v241] = (int)v261;
            }
            v262 = v258 * v244;
            v263 = (int)(float)(v249 - (float)((float)(*((_DWORD *)arg + 6) * (v250 + 1)) * 0.5));
            if ( v243 > v263 )
            {
              if ( v263 < 0 )
                v263 += v243;
            }
            else
            {
              v263 -= v243;
            }
            v264 = (int)(float)((float)*(__int16 *)(*(_QWORD *)(v5 + 16) + 2i64 * v263) * v262);
            if ( v264 )
            {
              v265 = (float)(v6[v241] + v264);
              if ( v6[v241] + v264 >= 0 )
              {
                if ( v265 > 26213.6 )
                  v265 = (float)((float)(v265 - 26213.6) * 0.16) + 26213.6;
              }
              else if ( v265 < -26213.6 )
              {
                v265 = (float)((float)(v265 + 26213.6) * 0.16) - 26213.6;
              }
              v6[v241] = (int)v265;
            }
            v248 += 4;
            v247 = v262 * v244;
            v250 += 4;
          }
          while ( v248 <= v245 - 3 );
          i = v4;
        }
        for ( ; v248 <= v245; v247 = v247 * v244 )
        {
          v266 = (int)(float)((float)v242 - (float)((float)(v248 * *((_DWORD *)arg + 6)) * 0.5));
          if ( v243 > v266 )
          {
            if ( v266 < 0 )
              v266 += v243;
          }
          else
          {
            v266 -= v243;
          }
          v267 = (int)(float)((float)*(__int16 *)(*(_QWORD *)(v5 + 16) + 2i64 * v266) * v247);
          if ( v267 )
          {
            v268 = (float)(v6[v241] + v267);
            if ( v6[v241] + v267 >= 0 )
            {
              if ( v268 > 26213.6 )
                v268 = (float)((float)(v268 - 26213.6) * 0.16) + 26213.6;
            }
            else if ( v268 < -26213.6 )
            {
              v268 = (float)((float)(v268 + 26213.6) * 0.16) - 26213.6;
            }
            v6[v241] = (int)v268;
          }
          ++v248;
        }
        ++v242;
      }
      v269 = *(_QWORD *)(v5 + 320);
      if ( v269 )
      {
        v299 = v6;
        v298[0] = 0;
        v302[0] = 0;
        v300 = 0i64;
        v301 = 0i64;
        v298[1] = 2 * v4;
        *(_QWORD *)&v302[1] = v5;
        (*(void (__fastcall **)(__int64, _DWORD *, _QWORD))(*(_QWORD *)v269 + 168i64))(v269, v298, 0i64);
        WaitForSingleObject(*(HANDLE *)(v5 + 328), 0xFFFFFFFF);
      }
      v270 = *(_DWORD *)(v5 + 24);
      *(_DWORD *)(v5 + 8) = (*(_DWORD *)(v5 + 8) + 1) % 4;
      *(_DWORD *)(v5 + 24) = (v270 + 1) % 1500;
LABEL_421:
      v271 = ++v2;
      if ( v2 >= 6 )
        goto LABEL_2;
      goto LABEL_3;
    }
  }
}

void __fastcall __noreturn MMBufferQueueCallbackReverb(void *arg)
{
  void *v1; // rbp
  __int64 v2; // r12
  __int64 v3; // r15
  int v4; // er13
  __int64 v5; // r14
  __int16 *v6; // rdi
  __int16 *v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rax
  _RTL_CRITICAL_SECTION *v10; // rbx
  _QWORD *v11; // rcx
  __int64 v12; // rax
  __int16 *v13; // r12
  _DWORD *v14; // rbx
  __int64 v15; // rcx
  int v16; // er13
  __int16 *v17; // r11
  int v18; // ecx
  int v19; // eax
  float v20; // xmm0_4
  int v21; // edx
  int v22; // ebx
  __int64 v23; // r10
  __int64 v24; // r14
  int v25; // er15
  int v26; // er12
  __int64 v27; // rbp
  int v28; // ecx
  int v29; // edx
  int v30; // er9
  float v31; // xmm0_4
  int v32; // er11
  int v33; // er15
  int v34; // eax
  float v35; // xmm0_4
  int v36; // eax
  float v37; // xmm0_4
  int v38; // eax
  float v39; // xmm0_4
  int v40; // eax
  float v41; // xmm0_4
  float v42; // xmm0_4
  float v43; // xmm0_4
  int v44; // eax
  float v45; // xmm0_4
  int v46; // eax
  float v47; // xmm0_4
  int v48; // eax
  float v49; // xmm0_4
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  int v53; // er11
  __int64 v54; // rbp
  __int64 v55; // r9
  int v56; // ecx
  int v57; // edx
  int v58; // er10
  int v59; // ecx
  int v60; // ebx
  int v61; // edx
  float v62; // xmm0_4
  int v63; // eax
  float v64; // xmm0_4
  int v65; // eax
  float v66; // xmm0_4
  int v67; // eax
  float v68; // xmm0_4
  int v69; // eax
  int v70; // ebx
  __int64 v71; // rbp
  __int64 v72; // r10
  int v73; // ecx
  int v74; // er9
  int v75; // ecx
  int v76; // eax
  int v77; // edx
  int v78; // er11
  float v79; // xmm0_4
  float v80; // xmm0_4
  float v81; // xmm0_4
  float v82; // xmm0_4
  int v83; // er13
  __int64 v84; // rax
  int v85; // er15
  __int64 v86; // r10
  __int64 v87; // rcx
  __int64 v88; // r13
  int v89; // er14
  int v90; // edx
  int v91; // er9
  int v92; // er8
  int v93; // ebx
  int v94; // edx
  int v95; // er8
  __int64 v96; // r15
  int v97; // er11
  int v98; // ebp
  int v99; // er14
  float v100; // xmm0_4
  int v101; // eax
  float v102; // xmm0_4
  int v103; // eax
  float v104; // xmm0_4
  int v105; // eax
  float v106; // xmm0_4
  int v107; // eax
  float v108; // xmm0_4
  float v109; // xmm0_4
  float v110; // xmm0_4
  int v111; // eax
  float v112; // xmm0_4
  int v113; // eax
  float v114; // xmm0_4
  __int64 v115; // rcx
  int v116; // eax
  float v117; // xmm0_4
  int v118; // eax
  float v119; // xmm0_4
  __int64 v120; // rcx
  int v121; // eax
  float v122; // xmm0_4
  int v123; // eax
  float v124; // xmm0_4
  __int64 v125; // rcx
  int v126; // eax
  float v127; // xmm0_4
  int v128; // eax
  int v129; // ebp
  __int16 *v130; // r11
  int v131; // ecx
  int v132; // eax
  float v133; // xmm0_4
  int v134; // edx
  int v135; // ebx
  __int64 v136; // r10
  __int64 v137; // r13
  int v138; // er14
  int v139; // er15
  __int64 v140; // r12
  int v141; // ecx
  int v142; // edx
  int v143; // er9
  float v144; // xmm0_4
  int v145; // er11
  int v146; // er14
  int v147; // eax
  float v148; // xmm0_4
  int v149; // eax
  float v150; // xmm0_4
  int v151; // eax
  float v152; // xmm0_4
  int v153; // eax
  float v154; // xmm0_4
  float v155; // xmm0_4
  float v156; // xmm0_4
  int v157; // eax
  float v158; // xmm0_4
  int v159; // eax
  float v160; // xmm0_4
  int v161; // eax
  float v162; // xmm0_4
  int v163; // eax
  __int16 v164; // ax
  __int16 v165; // ax
  int v166; // er8
  __int64 v167; // rbp
  __int64 v168; // r10
  int v169; // ecx
  int v170; // er9
  int v171; // er11
  int v172; // ecx
  int v173; // ebx
  int v174; // er9
  float v175; // xmm0_4
  int v176; // eax
  float v177; // xmm0_4
  float v178; // xmm1_4
  int v179; // eax
  float v180; // xmm1_4
  int v181; // eax
  float v182; // xmm1_4
  int v183; // eax
  float v184; // xmm1_4
  float v185; // xmm0_4
  int v186; // eax
  float v187; // xmm0_4
  float v188; // xmm1_4
  int v189; // eax
  float v190; // xmm1_4
  int v191; // eax
  float v192; // xmm1_4
  int v193; // eax
  float v194; // xmm1_4
  __int64 v195; // rbp
  __int64 v196; // r11
  int v197; // er9
  int v198; // er10
  int v199; // ecx
  int v200; // er9
  int v201; // ebx
  float v202; // xmm0_4
  float v203; // xmm0_4
  float v204; // xmm1_4
  int v205; // eax
  float v206; // xmm1_4
  int v207; // eax
  float v208; // xmm1_4
  float v209; // xmm0_4
  float v210; // xmm0_4
  float v211; // xmm1_4
  int v212; // eax
  float v213; // xmm1_4
  int v214; // eax
  float v215; // xmm1_4
  int v216; // er8
  __int64 v217; // r14
  int v218; // er10
  int v219; // ecx
  int v220; // er9
  int v221; // er10
  __int64 v222; // r11
  int v223; // ebp
  int v224; // ebx
  int v225; // er10
  int v226; // ecx
  int v227; // er9
  float v228; // xmm0_4
  int v229; // eax
  float v230; // xmm0_4
  float v231; // xmm1_4
  int v232; // eax
  float v233; // xmm1_4
  float v234; // xmm0_4
  int v235; // eax
  float v236; // xmm0_4
  float v237; // xmm1_4
  int v238; // eax
  float v239; // xmm1_4
  float v240; // xmm0_4
  __int64 v241; // rdx
  int v242; // esi
  int v243; // er8
  float v244; // xmm3_4
  int v245; // ebx
  __int64 i; // r10
  float v247; // xmm2_4
  int v248; // er9
  float v249; // xmm4_4
  int v250; // er10
  int v251; // eax
  int v252; // ecx
  float v253; // xmm0_4
  float v254; // xmm2_4
  int v255; // eax
  int v256; // ecx
  float v257; // xmm0_4
  float v258; // xmm2_4
  int v259; // eax
  int v260; // ecx
  float v261; // xmm0_4
  float v262; // xmm2_4
  int v263; // eax
  int v264; // ecx
  float v265; // xmm0_4
  int v266; // eax
  int v267; // ecx
  float v268; // xmm0_4
  __int64 v269; // rcx
  int v270; // ecx
  __int64 v271; // [rsp+20h] [rbp-148h]
  int v272; // [rsp+28h] [rbp-140h]
  int v273; // [rsp+28h] [rbp-140h]
  int v274; // [rsp+28h] [rbp-140h]
  _DWORD *v275; // [rsp+30h] [rbp-138h]
  int v276; // [rsp+38h] [rbp-130h]
  int v277; // [rsp+38h] [rbp-130h]
  __int64 v278; // [rsp+40h] [rbp-128h]
  __int16 *v279; // [rsp+48h] [rbp-120h]
  __int64 v280; // [rsp+48h] [rbp-120h]
  __int16 *v281; // [rsp+48h] [rbp-120h]
  __int64 v282; // [rsp+50h] [rbp-118h]
  __int64 v283; // [rsp+50h] [rbp-118h]
  __int64 v284; // [rsp+50h] [rbp-118h]
  __int64 v285; // [rsp+58h] [rbp-110h]
  __int64 v286; // [rsp+58h] [rbp-110h]
  __int64 v287; // [rsp+58h] [rbp-110h]
  __int64 v288; // [rsp+60h] [rbp-108h]
  int v289; // [rsp+68h] [rbp-100h]
  int v290; // [rsp+68h] [rbp-100h]
  int v291; // [rsp+6Ch] [rbp-FCh]
  int v292; // [rsp+70h] [rbp-F8h]
  int v293; // [rsp+74h] [rbp-F4h]
  int v294; // [rsp+78h] [rbp-F0h]
  __int64 v295; // [rsp+88h] [rbp-E0h]
  __int64 v296; // [rsp+90h] [rbp-D8h]
  _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+98h] [rbp-D0h]
  _DWORD v298[2]; // [rsp+A0h] [rbp-C8h] BYREF
  __int16 *v299; // [rsp+A8h] [rbp-C0h]
  __int64 v300; // [rsp+B0h] [rbp-B8h]
  __int64 v301; // [rsp+B8h] [rbp-B0h]
  _DWORD v302[42]; // [rsp+C0h] [rbp-A8h]
  int v304; // [rsp+178h] [rbp+10h]
  int v305; // [rsp+180h] [rbp+18h]
  int v306; // [rsp+180h] [rbp+18h]
  int v307; // [rsp+180h] [rbp+18h]
  int v308; // [rsp+188h] [rbp+20h]
  int v309; // [rsp+188h] [rbp+20h]
  int v310; // [rsp+188h] [rbp+20h]
  int v311; // [rsp+188h] [rbp+20h]

  v1 = arg;
LABEL_2:
  v2 = 0i64;
  v271 = 0i64;
LABEL_3:
  v3 = v2;
  if ( (portConfig[v2].opt & 4) == 0 )
    goto LABEL_421;
  v4 = portConfig[v2].channel << 11;
  v5 = (__int64)v1 + 336 * v2 + 32;
  v288 = v5;
  v304 = v4;
  v6 = (__int16 *)(*(_QWORD *)v5 + 2i64 * v4 * *(_DWORD *)(v5 + 8));
  memset(v6, 0, 2i64 * v4);
  v7 = (__int16 *)(*(_QWORD *)(v5 + 16) + 2i64 * v4 * *(_DWORD *)(v5 + 24));
  memset(v7, 0, 2i64 * v4);
  v8 = 0i64;
  v294 = 0;
  v278 = 0i64;
  while ( 1 )
  {
    v9 = *(_QWORD *)(v5 + 8 * v8 + 32);
    if ( v9 )
    {
      v10 = (_RTL_CRITICAL_SECTION *)(v9 + 188);
      lpCriticalSection = (_RTL_CRITICAL_SECTION *)(v9 + 188);
      EnterCriticalSection((LPCRITICAL_SECTION)(v9 + 188));
      v11 = *(_QWORD **)(v5 + 8 * v8 + 32);
      if ( v11 )
      {
        if ( *(_BYTE *)(v5 + v8 + 288) == 1 || (v12 = v11[19]) == 0 )
        {
          LeaveCriticalSection(v10);
          goto LABEL_353;
        }
        v13 = APBufferQueueCallback(v11, *(_DWORD *)(v12 + 328) << 11);
        if ( !v13 )
        {
          LeaveCriticalSection(v10);
          v2 = v271;
LABEL_353:
          *(_BYTE *)(v5 + v8 + 288) = 0;
          *(_QWORD *)(v5 + 8 * v8 + 32) = 0i64;
          goto LABEL_354;
        }
        v14 = *(_DWORD **)(v5 + 8 * v8 + 32);
        v275 = v14;
        v15 = *(int *)(*((_QWORD *)v14 + 19) + 328i64);
        v296 = v15;
        if ( (v14[45] & 0x12) != 0 )
        {
          if ( (_DWORD)v15 == 8 )
          {
            v83 = 0;
            v306 = 0;
            if ( v304 <= 0 )
              goto LABEL_351;
            v84 = 0i64;
            v286 = 0i64;
            do
            {
              v85 = v14[71] * v13[v84 + 6];
              v86 = v83 + 1;
              v309 = (v14[69] * v13[v84 + 4]) >> 12;
              v289 = (v14[70] * v13[v84 + 5]) >> 12;
              v87 = v83;
              v88 = v83 + 4;
              v89 = (v14[68] * v13[v84 + 3]) >> 12;
              v90 = (v14[64] * v13[v84]) >> 12;
              v291 = v89 + v7[v88];
              v91 = v90 + v7[v87];
              v92 = (v14[65] * v13[v84 + 2]) >> 12;
              v93 = v92 + v7[v86];
              v295 = v306 + 5;
              v273 = v85 >> 12;
              v292 = v309 + v7[v295];
              v280 = v306 + 6;
              v293 = v289 + v7[v280];
              v283 = v306 + 7;
              v276 = (v85 >> 12) + v7[v283];
              v94 = v6[v87] + v90;
              v95 = v6[v86] + v92;
              v96 = v306 + 2;
              v97 = v6[v96] + ((v275[66] * v13[v286 + 1]) >> 12);
              v98 = v6[v306 + 3] + ((v275[67] * v13[v286 + 7]) >> 12);
              v99 = v6[v88] + v89;
              v310 = v6[v295] + v309;
              v100 = (float)v94;
              v290 = v6[v280] + v289;
              v274 = v6[v283] + v273;
              if ( v94 >= 0 )
              {
                if ( v100 > 26213.6 )
                  v100 = (float)((float)(v100 - 26213.6) * 0.16) + 26213.6;
                v103 = (int)v100;
                v102 = (float)v91;
                v6[v87] = v103;
                if ( (float)v91 > 26213.6 )
                  v102 = (float)((float)(v102 - 26213.6) * 0.16) + 26213.6;
              }
              else
              {
                if ( v100 < -26213.6 )
                  v100 = (float)((float)(v100 + 26213.6) * 0.16) - 26213.6;
                v101 = (int)v100;
                v102 = (float)v91;
                v6[v87] = v101;
                if ( (float)v91 < -26213.6 )
                  v102 = (float)((float)(v102 + 26213.6) * 0.16) - 26213.6;
              }
              v7[v87] = (int)v102;
              v104 = (float)v95;
              if ( v95 >= 0 )
              {
                if ( v104 > 26213.6 )
                  v104 = (float)((float)(v104 - 26213.6) * 0.16) + 26213.6;
                v107 = (int)v104;
                v106 = (float)v93;
                v6[v86] = v107;
                if ( (float)v93 > 26213.6 )
                  v106 = (float)((float)(v106 - 26213.6) * 0.16) + 26213.6;
              }
              else
              {
                if ( v104 < -26213.6 )
                  v104 = (float)((float)(v104 + 26213.6) * 0.16) - 26213.6;
                v105 = (int)v104;
                v106 = (float)v93;
                v6[v86] = v105;
                if ( (float)v93 < -26213.6 )
                  v106 = (float)((float)(v106 + 26213.6) * 0.16) - 26213.6;
              }
              v7[v86] = (int)v106;
              v108 = (float)v97;
              if ( v97 >= 0 )
              {
                if ( v108 > 26213.6 )
                  v108 = (float)((float)(v108 - 26213.6) * 0.16) + 26213.6;
              }
              else if ( v108 < -26213.6 )
              {
                v108 = (float)((float)(v108 + 26213.6) * 0.16) - 26213.6;
              }
              v6[v96] = (int)v108;
              v109 = (float)v98;
              if ( v98 >= 0 )
              {
                if ( v109 > 26213.6 )
                  v109 = (float)((float)(v109 - 26213.6) * 0.16) + 26213.6;
              }
              else if ( v109 < -26213.6 )
              {
                v109 = (float)((float)(v109 + 26213.6) * 0.16) - 26213.6;
              }
              v6[v306 + 3] = (int)v109;
              v110 = (float)v99;
              if ( v99 >= 0 )
              {
                if ( v110 > 26213.6 )
                  v110 = (float)((float)(v110 - 26213.6) * 0.16) + 26213.6;
                v113 = (int)v110;
                v112 = (float)v291;
                v6[v88] = v113;
                if ( (float)v291 > 26213.6 )
                  v112 = (float)((float)(v112 - 26213.6) * 0.16) + 26213.6;
              }
              else
              {
                if ( v110 < -26213.6 )
                  v110 = (float)((float)(v110 + 26213.6) * 0.16) - 26213.6;
                v111 = (int)v110;
                v112 = (float)v291;
                v6[v88] = v111;
                if ( (float)v291 < -26213.6 )
                  v112 = (float)((float)(v112 + 26213.6) * 0.16) - 26213.6;
              }
              v7[v88] = (int)v112;
              v114 = (float)v310;
              if ( v310 >= 0 )
              {
                if ( v114 > 26213.6 )
                  v114 = (float)((float)(v114 - 26213.6) * 0.16) + 26213.6;
                v115 = v306 + 5;
                v118 = (int)v114;
                v117 = (float)v292;
                v6[v295] = v118;
                if ( (float)v292 > 26213.6 )
                  v117 = (float)((float)(v117 - 26213.6) * 0.16) + 26213.6;
              }
              else
              {
                if ( v114 < -26213.6 )
                  v114 = (float)((float)(v114 + 26213.6) * 0.16) - 26213.6;
                v115 = v306 + 5;
                v116 = (int)v114;
                v117 = (float)v292;
                v6[v295] = v116;
                if ( (float)v292 < -26213.6 )
                  v117 = (float)((float)(v117 + 26213.6) * 0.16) - 26213.6;
              }
              v7[v115] = (int)v117;
              v119 = (float)v290;
              if ( v290 >= 0 )
              {
                if ( v119 > 26213.6 )
                  v119 = (float)((float)(v119 - 26213.6) * 0.16) + 26213.6;
                v120 = v306 + 6;
                v123 = (int)v119;
                v122 = (float)v293;
                v6[v280] = v123;
                if ( (float)v293 > 26213.6 )
                  v122 = (float)((float)(v122 - 26213.6) * 0.16) + 26213.6;
              }
              else
              {
                if ( v119 < -26213.6 )
                  v119 = (float)((float)(v119 + 26213.6) * 0.16) - 26213.6;
                v120 = v306 + 6;
                v121 = (int)v119;
                v122 = (float)v293;
                v6[v280] = v121;
                if ( (float)v293 < -26213.6 )
                  v122 = (float)((float)(v122 + 26213.6) * 0.16) - 26213.6;
              }
              v7[v120] = (int)v122;
              v124 = (float)v274;
              if ( v274 >= 0 )
              {
                if ( v124 > 26213.6 )
                  v124 = (float)((float)(v124 - 26213.6) * 0.16) + 26213.6;
                v125 = v306 + 7;
                v128 = (int)v124;
                v127 = (float)v276;
                v6[v283] = v128;
                if ( (float)v276 > 26213.6 )
                  v127 = (float)((float)(v127 - 26213.6) * 0.16) + 26213.6;
              }
              else
              {
                if ( v124 < -26213.6 )
                  v124 = (float)((float)(v124 + 26213.6) * 0.16) - 26213.6;
                v125 = v306 + 7;
                v126 = (int)v124;
                v127 = (float)v276;
                v6[v283] = v126;
                if ( (float)v276 < -26213.6 )
                  v127 = (float)((float)(v127 + 26213.6) * 0.16) - 26213.6;
              }
              v14 = v275;
              v7[v125] = (int)v127;
              v3 = v271;
              v84 = v296 + v286;
              v83 = portConfig[v271].channel + v306;
              v306 = v83;
              v286 += v296;
            }
            while ( v83 < v304 );
            v4 = v304;
            goto LABEL_88;
          }
          if ( (_DWORD)v15 != 6 )
          {
            if ( (_DWORD)v15 == 2 )
            {
              v166 = 0;
              if ( *((_BYTE *)v14 + 1) )
              {
                if ( v4 <= 0 )
                  goto LABEL_90;
                v195 = 2 * v15;
                do
                {
                  v196 = v166 + 1;
                  v197 = (v14[64] * *v13) >> 12;
                  v198 = v197 + v7[v166];
                  v199 = (v14[65] * v13[1]) >> 12;
                  v200 = v6[v196] + v197;
                  v201 = v199 + v7[v196];
                  v202 = (float)(v6[v166] + v199);
                  if ( v6[v166] + v199 >= 0 )
                  {
                    if ( v202 > 26213.6 )
                      v202 = (float)((float)(v202 - 26213.6) * 0.16) + 26213.6;
                  }
                  else if ( v202 < -26213.6 )
                  {
                    v202 = (float)((float)(v202 + 26213.6) * 0.16) - 26213.6;
                  }
                  v6[v166] = (int)v202;
                  v203 = (float)v198;
                  v204 = (float)v198;
                  if ( v198 >= 0 )
                  {
                    if ( v203 > 26213.6 )
                      v204 = (float)((float)(v203 - 26213.6) * 0.16) + 26213.6;
                    v207 = (int)v204;
                    v208 = (float)v198;
                    v7[v166] = v207;
                    if ( v203 > 26213.6 )
                      v208 = (float)((float)(v203 - 26213.6) * 0.16) + 26213.6;
                    v7[v166 + 4] = (int)v208;
                    if ( v203 > 26213.6 )
                      v203 = (float)((float)(v203 - 26213.6) * 0.16) + 26213.6;
                  }
                  else
                  {
                    if ( v203 < -26213.6 )
                      v204 = (float)((float)(v203 + 26213.6) * 0.16) - 26213.6;
                    v205 = (int)v204;
                    v206 = (float)v198;
                    v7[v166] = v205;
                    if ( v203 < -26213.6 )
                      v206 = (float)((float)(v203 + 26213.6) * 0.16) - 26213.6;
                    v7[v166 + 4] = (int)v206;
                    if ( v203 < -26213.6 )
                      v203 = (float)((float)(v203 + 26213.6) * 0.16) - 26213.6;
                  }
                  v7[v166 + 6] = (int)v203;
                  v209 = (float)v200;
                  if ( v200 >= 0 )
                  {
                    if ( v209 > 26213.6 )
                      v209 = (float)((float)(v209 - 26213.6) * 0.16) + 26213.6;
                  }
                  else if ( v209 < -26213.6 )
                  {
                    v209 = (float)((float)(v209 + 26213.6) * 0.16) - 26213.6;
                  }
                  v6[v196] = (int)v209;
                  v210 = (float)v201;
                  v211 = (float)v201;
                  if ( v201 >= 0 )
                  {
                    if ( v210 > 26213.6 )
                      v211 = (float)((float)(v210 - 26213.6) * 0.16) + 26213.6;
                    v214 = (int)v211;
                    v215 = (float)v201;
                    v7[v196] = v214;
                    if ( v210 > 26213.6 )
                      v215 = (float)((float)(v210 - 26213.6) * 0.16) + 26213.6;
                    v7[v166 + 5] = (int)v215;
                    if ( v210 > 26213.6 )
                      v210 = (float)((float)(v210 - 26213.6) * 0.16) + 26213.6;
                  }
                  else
                  {
                    if ( v210 < -26213.6 )
                      v211 = (float)((float)(v210 + 26213.6) * 0.16) - 26213.6;
                    v212 = (int)v211;
                    v213 = (float)v201;
                    v7[v196] = v212;
                    if ( v210 < -26213.6 )
                      v213 = (float)((float)(v210 + 26213.6) * 0.16) - 26213.6;
                    v7[v166 + 5] = (int)v213;
                    if ( v210 < -26213.6 )
                      v210 = (float)((float)(v210 + 26213.6) * 0.16) - 26213.6;
                  }
                  v14 = v275;
                  v13 = (__int16 *)((char *)v13 + v195);
                  v7[v166 + 7] = (int)v210;
                  v166 += portConfig[v3].channel;
                }
                while ( v166 < v4 );
              }
              else
              {
                if ( v4 <= 0 )
                  goto LABEL_90;
                v167 = 2 * v15;
                do
                {
                  v168 = v166 + 1;
                  v169 = (v14[64] * *v13) >> 12;
                  v170 = (v14[65] * v13[1]) >> 12;
                  v171 = v169 + v7[v166];
                  v172 = v6[v166] + v169;
                  v173 = v170 + v7[v168];
                  v174 = v6[v168] + v170;
                  v175 = (float)v172;
                  if ( v172 >= 0 )
                  {
                    if ( v175 > 26213.6 )
                      v175 = (float)((float)(v175 - 26213.6) * 0.16) + 26213.6;
                    v181 = (int)v175;
                    v177 = (float)v171;
                    v6[v166] = v181;
                    v182 = (float)v171;
                    if ( (float)v171 > 26213.6 )
                      v182 = (float)((float)(v177 - 26213.6) * 0.16) + 26213.6;
                    v183 = (int)v182;
                    v184 = (float)v171;
                    v7[v166] = v183;
                    if ( v177 > 26213.6 )
                      v184 = (float)((float)(v177 - 26213.6) * 0.16) + 26213.6;
                    v7[v166 + 4] = (int)v184;
                    if ( v177 > 26213.6 )
                      v177 = (float)((float)(v177 - 26213.6) * 0.16) + 26213.6;
                  }
                  else
                  {
                    if ( v175 < -26213.6 )
                      v175 = (float)((float)(v175 + 26213.6) * 0.16) - 26213.6;
                    v176 = (int)v175;
                    v177 = (float)v171;
                    v6[v166] = v176;
                    v178 = (float)v171;
                    if ( (float)v171 < -26213.6 )
                      v178 = (float)((float)(v177 + 26213.6) * 0.16) - 26213.6;
                    v179 = (int)v178;
                    v180 = (float)v171;
                    v7[v166] = v179;
                    if ( v177 < -26213.6 )
                      v180 = (float)((float)(v177 + 26213.6) * 0.16) - 26213.6;
                    v7[v166 + 4] = (int)v180;
                    if ( v177 < -26213.6 )
                      v177 = (float)((float)(v177 + 26213.6) * 0.16) - 26213.6;
                  }
                  v7[v166 + 6] = (int)v177;
                  v185 = (float)v174;
                  if ( v174 >= 0 )
                  {
                    if ( v185 > 26213.6 )
                      v185 = (float)((float)(v185 - 26213.6) * 0.16) + 26213.6;
                    v191 = (int)v185;
                    v187 = (float)v173;
                    v6[v168] = v191;
                    v192 = (float)v173;
                    if ( (float)v173 > 26213.6 )
                      v192 = (float)((float)(v187 - 26213.6) * 0.16) + 26213.6;
                    v193 = (int)v192;
                    v194 = (float)v173;
                    v7[v168] = v193;
                    if ( v187 > 26213.6 )
                      v194 = (float)((float)(v187 - 26213.6) * 0.16) + 26213.6;
                    v7[v166 + 5] = (int)v194;
                    if ( v187 > 26213.6 )
                      v187 = (float)((float)(v187 - 26213.6) * 0.16) + 26213.6;
                  }
                  else
                  {
                    if ( v185 < -26213.6 )
                      v185 = (float)((float)(v185 + 26213.6) * 0.16) - 26213.6;
                    v186 = (int)v185;
                    v187 = (float)v173;
                    v6[v168] = v186;
                    v188 = (float)v173;
                    if ( (float)v173 < -26213.6 )
                      v188 = (float)((float)(v187 + 26213.6) * 0.16) - 26213.6;
                    v189 = (int)v188;
                    v190 = (float)v173;
                    v7[v168] = v189;
                    if ( v187 < -26213.6 )
                      v190 = (float)((float)(v187 + 26213.6) * 0.16) - 26213.6;
                    v7[v166 + 5] = (int)v190;
                    if ( v187 < -26213.6 )
                      v187 = (float)((float)(v187 + 26213.6) * 0.16) - 26213.6;
                  }
                  v14 = v275;
                  v13 = (__int16 *)((char *)v13 + v167);
                  v7[v166 + 7] = (int)v187;
                  v166 += portConfig[v3].channel;
                }
                while ( v166 < v4 );
              }
            }
            else
            {
              if ( (_DWORD)v15 != 1 )
                goto LABEL_90;
              v216 = 0;
              if ( v4 <= 0 )
                goto LABEL_90;
              v217 = 2 * v15;
              do
              {
                v218 = *v13;
                v219 = v218 * v14[64];
                v220 = v218 * v14[65];
                v221 = v14[67] * v218;
                v222 = v216 + 1;
                v219 >>= 12;
                v220 >>= 12;
                v223 = v220 + v7[v222];
                v224 = v219 + v7[v216];
                v225 = v221 >> 12;
                v226 = v6[v216] + v219;
                v227 = v6[v222] + v220;
                v228 = (float)v226;
                if ( v226 >= 0 )
                {
                  if ( v228 > 26213.6 )
                    v228 = (float)((float)(v228 - 26213.6) * 0.16) + 26213.6;
                  v232 = (int)v228;
                  v230 = (float)v224;
                  v6[v216] = v232;
                  v233 = (float)v224;
                  if ( (float)v224 > 26213.6 )
                    v233 = (float)((float)(v230 - 26213.6) * 0.16) + 26213.6;
                  v7[v216] = (int)v233;
                  if ( v230 > 26213.6 )
                    v230 = (float)((float)(v230 - 26213.6) * 0.16) + 26213.6;
                }
                else
                {
                  if ( v228 < -26213.6 )
                    v228 = (float)((float)(v228 + 26213.6) * 0.16) - 26213.6;
                  v229 = (int)v228;
                  v230 = (float)v224;
                  v6[v216] = v229;
                  v231 = (float)v224;
                  if ( (float)v224 < -26213.6 )
                    v231 = (float)((float)(v230 + 26213.6) * 0.16) - 26213.6;
                  v7[v216] = (int)v231;
                  if ( v230 < -26213.6 )
                    v230 = (float)((float)(v230 + 26213.6) * 0.16) - 26213.6;
                }
                v7[v216 + 4] = (int)v230;
                v234 = (float)v227;
                if ( v227 >= 0 )
                {
                  if ( v234 > 26213.6 )
                    v234 = (float)((float)(v234 - 26213.6) * 0.16) + 26213.6;
                  v238 = (int)v234;
                  v236 = (float)v223;
                  v6[v222] = v238;
                  v239 = (float)v223;
                  if ( (float)v223 > 26213.6 )
                    v239 = (float)((float)(v236 - 26213.6) * 0.16) + 26213.6;
                  v7[v222] = (int)v239;
                  if ( v236 > 26213.6 )
                    v236 = (float)((float)(v236 - 26213.6) * 0.16) + 26213.6;
                }
                else
                {
                  if ( v234 < -26213.6 )
                    v234 = (float)((float)(v234 + 26213.6) * 0.16) - 26213.6;
                  v235 = (int)v234;
                  v236 = (float)v223;
                  v6[v222] = v235;
                  v237 = (float)v223;
                  if ( (float)v223 < -26213.6 )
                    v237 = (float)((float)(v236 + 26213.6) * 0.16) - 26213.6;
                  v7[v222] = (int)v237;
                  if ( v236 < -26213.6 )
                    v236 = (float)((float)(v236 + 26213.6) * 0.16) - 26213.6;
                }
                v7[v216 + 5] = (int)v236;
                v240 = (float)v225;
                if ( v225 >= 0 )
                {
                  if ( v240 > 26213.6 )
                    v240 = (float)((float)(v240 - 26213.6) * 0.16) + 26213.6;
                }
                else if ( v240 < -26213.6 )
                {
                  v240 = (float)((float)(v240 + 26213.6) * 0.16) - 26213.6;
                }
                v14 = v275;
                v13 = (__int16 *)((char *)v13 + v217);
                v6[v216 + 3] = (int)v240;
                v216 += portConfig[v3].channel;
              }
              while ( v216 < v4 );
            }
            goto LABEL_88;
          }
          v129 = 0;
          if ( v4 > 0 )
          {
            v130 = v13 + 3;
            v281 = v13 + 3;
            do
            {
              v131 = (v14[64] * *(v130 - 3)) >> 12;
              v132 = v14[69] * v130[1];
              v133 = (float)(v14[68] * *v130);
              v134 = (v14[65] * *(v130 - 1)) >> 12;
              v135 = v131 + v7[v129];
              v136 = v129 + 1;
              v137 = v129 + 4;
              v138 = (int)(float)(v133 * 1.4142135) >> 12;
              v139 = v134 + v7[v136];
              v311 = v138 + v7[v137];
              v140 = v129 + 5;
              v277 = ((int)(float)((float)v132 * 1.4142135) >> 12) + v7[v140];
              v141 = v6[v129] + v131;
              v142 = v6[v136] + v134;
              v287 = v129 + 2;
              v143 = v6[v287] + ((v275[66] * *(v130 - 2)) >> 12);
              v284 = v129 + 3;
              v144 = (float)v141;
              v145 = v6[v284] + ((v275[67] * v130[2]) >> 12);
              v146 = v6[v137] + v138;
              v307 = v6[v140] + ((int)(float)((float)v132 * 1.4142135) >> 12);
              if ( v141 >= 0 )
              {
                if ( v144 > 26213.6 )
                  v144 = (float)((float)(v144 - 26213.6) * 0.16) + 26213.6;
                v149 = (int)v144;
                v148 = (float)v135;
                v6[v129] = v149;
                if ( (float)v135 > 26213.6 )
                  v148 = (float)((float)(v148 - 26213.6) * 0.16) + 26213.6;
              }
              else
              {
                if ( v144 < -26213.6 )
                  v144 = (float)((float)(v144 + 26213.6) * 0.16) - 26213.6;
                v147 = (int)v144;
                v148 = (float)v135;
                v6[v129] = v147;
                if ( (float)v135 < -26213.6 )
                  v148 = (float)((float)(v148 + 26213.6) * 0.16) - 26213.6;
              }
              v7[v129] = (int)v148;
              v150 = (float)v142;
              if ( v142 >= 0 )
              {
                if ( v150 > 26213.6 )
                  v150 = (float)((float)(v150 - 26213.6) * 0.16) + 26213.6;
                v153 = (int)v150;
                v152 = (float)v139;
                v6[v136] = v153;
                if ( (float)v139 > 26213.6 )
                  v152 = (float)((float)(v152 - 26213.6) * 0.16) + 26213.6;
              }
              else
              {
                if ( v150 < -26213.6 )
                  v150 = (float)((float)(v150 + 26213.6) * 0.16) - 26213.6;
                v151 = (int)v150;
                v152 = (float)v139;
                v6[v136] = v151;
                if ( (float)v139 < -26213.6 )
                  v152 = (float)((float)(v152 + 26213.6) * 0.16) - 26213.6;
              }
              v7[v136] = (int)v152;
              v154 = (float)v143;
              if ( v143 >= 0 )
              {
                if ( v154 > 26213.6 )
                  v154 = (float)((float)(v154 - 26213.6) * 0.16) + 26213.6;
              }
              else if ( v154 < -26213.6 )
              {
                v154 = (float)((float)(v154 + 26213.6) * 0.16) - 26213.6;
              }
              v6[v287] = (int)v154;
              v155 = (float)v145;
              if ( v145 >= 0 )
              {
                if ( v155 > 26213.6 )
                  v155 = (float)((float)(v155 - 26213.6) * 0.16) + 26213.6;
              }
              else if ( v155 < -26213.6 )
              {
                v155 = (float)((float)(v155 + 26213.6) * 0.16) - 26213.6;
              }
              v6[v284] = (int)v155;
              v156 = (float)v146;
              if ( v146 >= 0 )
              {
                if ( v156 > 26213.6 )
                  v156 = (float)((float)(v156 - 26213.6) * 0.16) + 26213.6;
                v159 = (int)v156;
                v158 = (float)v311;
                v6[v137] = v159;
                if ( (float)v311 > 26213.6 )
                  v158 = (float)((float)(v158 - 26213.6) * 0.16) + 26213.6;
              }
              else
              {
                if ( v156 < -26213.6 )
                  v156 = (float)((float)(v156 + 26213.6) * 0.16) - 26213.6;
                v157 = (int)v156;
                v158 = (float)v311;
                v6[v137] = v157;
                if ( (float)v311 < -26213.6 )
                  v158 = (float)((float)(v158 + 26213.6) * 0.16) - 26213.6;
              }
              v7[v137] = (int)v158;
              v160 = (float)v307;
              if ( v307 >= 0 )
              {
                if ( v160 > 26213.6 )
                  v160 = (float)((float)(v160 - 26213.6) * 0.16) + 26213.6;
                v163 = (int)v160;
                v162 = (float)v277;
                v6[v140] = v163;
                if ( (float)v277 > 26213.6 )
                  v162 = (float)((float)(v162 - 26213.6) * 0.16) + 26213.6;
              }
              else
              {
                if ( v160 < -26213.6 )
                  v160 = (float)((float)(v160 + 26213.6) * 0.16) - 26213.6;
                v161 = (int)v160;
                v162 = (float)v277;
                v6[v140] = v161;
                if ( (float)v277 < -26213.6 )
                  v162 = (float)((float)(v162 + 26213.6) * 0.16) - 26213.6;
              }
              v14 = v275;
              v7[v140] = (int)v162;
              v164 = v6[v137];
              v4 = v304;
              v6[v129 + 6] = v164;
              v165 = v6[v140];
              v2 = v271;
              v6[v129 + 7] = v165;
              v3 = v271;
              v129 += portConfig[v271].channel;
              v130 = &v281[v296];
              v281 = v130;
            }
            while ( v129 < v304 );
            v5 = v288;
            v8 = v278;
            LeaveCriticalSection(lpCriticalSection);
            goto LABEL_354;
          }
        }
        else
        {
          if ( portConfig[v3].channel == (_DWORD)v15 )
            goto LABEL_90;
          if ( (_DWORD)v15 == 6 )
          {
            v16 = 0;
            if ( v304 > 0 )
            {
              v17 = v13 + 3;
              v279 = v13 + 3;
              do
              {
                v18 = (v14[64] * *(v17 - 3)) >> 12;
                v19 = v14[69] * v17[1];
                v20 = (float)(v14[68] * *v17);
                v21 = (v14[65] * *(v17 - 1)) >> 12;
                v22 = v18 + v7[v16];
                v23 = v16 + 1;
                v24 = v16 + 4;
                v25 = (int)(float)(v20 * 1.4142135) >> 12;
                v26 = v21 + v7[v23];
                v308 = v25 + v7[v24];
                v27 = v16 + 5;
                v272 = ((int)(float)((float)v19 * 1.4142135) >> 12) + v7[v27];
                v28 = v6[v16] + v18;
                v29 = v6[v23] + v21;
                v285 = v16 + 2;
                v30 = v6[v285] + ((v275[66] * *(v17 - 2)) >> 12);
                v282 = v16 + 3;
                v31 = (float)v28;
                v32 = v6[v282] + ((v275[67] * v17[2]) >> 12);
                v33 = v6[v24] + v25;
                v305 = v6[v27] + ((int)(float)((float)v19 * 1.4142135) >> 12);
                if ( v28 >= 0 )
                {
                  if ( v31 > 26213.6 )
                    v31 = (float)((float)(v31 - 26213.6) * 0.16) + 26213.6;
                  v36 = (int)v31;
                  v35 = (float)v22;
                  v6[v16] = v36;
                  if ( (float)v22 > 26213.6 )
                    v35 = (float)((float)(v35 - 26213.6) * 0.16) + 26213.6;
                }
                else
                {
                  if ( v31 < -26213.6 )
                    v31 = (float)((float)(v31 + 26213.6) * 0.16) - 26213.6;
                  v34 = (int)v31;
                  v35 = (float)v22;
                  v6[v16] = v34;
                  if ( (float)v22 < -26213.6 )
                    v35 = (float)((float)(v35 + 26213.6) * 0.16) - 26213.6;
                }
                v7[v16] = (int)v35;
                v37 = (float)v29;
                if ( v29 >= 0 )
                {
                  if ( v37 > 26213.6 )
                    v37 = (float)((float)(v37 - 26213.6) * 0.16) + 26213.6;
                  v40 = (int)v37;
                  v39 = (float)v26;
                  v6[v23] = v40;
                  if ( (float)v26 > 26213.6 )
                    v39 = (float)((float)(v39 - 26213.6) * 0.16) + 26213.6;
                }
                else
                {
                  if ( v37 < -26213.6 )
                    v37 = (float)((float)(v37 + 26213.6) * 0.16) - 26213.6;
                  v38 = (int)v37;
                  v39 = (float)v26;
                  v6[v23] = v38;
                  if ( (float)v26 < -26213.6 )
                    v39 = (float)((float)(v39 + 26213.6) * 0.16) - 26213.6;
                }
                v7[v23] = (int)v39;
                v41 = (float)v30;
                if ( v30 >= 0 )
                {
                  if ( v41 > 26213.6 )
                    v41 = (float)((float)(v41 - 26213.6) * 0.16) + 26213.6;
                }
                else if ( v41 < -26213.6 )
                {
                  v41 = (float)((float)(v41 + 26213.6) * 0.16) - 26213.6;
                }
                v6[v285] = (int)v41;
                v42 = (float)v32;
                if ( v32 >= 0 )
                {
                  if ( v42 > 26213.6 )
                    v42 = (float)((float)(v42 - 26213.6) * 0.16) + 26213.6;
                }
                else if ( v42 < -26213.6 )
                {
                  v42 = (float)((float)(v42 + 26213.6) * 0.16) - 26213.6;
                }
                v6[v282] = (int)v42;
                v43 = (float)v33;
                if ( v33 >= 0 )
                {
                  if ( v43 > 26213.6 )
                    v43 = (float)((float)(v43 - 26213.6) * 0.16) + 26213.6;
                  v46 = (int)v43;
                  v45 = (float)v308;
                  v6[v24] = v46;
                  if ( (float)v308 > 26213.6 )
                    v45 = (float)((float)(v45 - 26213.6) * 0.16) + 26213.6;
                }
                else
                {
                  if ( v43 < -26213.6 )
                    v43 = (float)((float)(v43 + 26213.6) * 0.16) - 26213.6;
                  v44 = (int)v43;
                  v45 = (float)v308;
                  v6[v24] = v44;
                  if ( (float)v308 < -26213.6 )
                    v45 = (float)((float)(v45 + 26213.6) * 0.16) - 26213.6;
                }
                v7[v24] = (int)v45;
                v47 = (float)v305;
                if ( v305 >= 0 )
                {
                  if ( v47 > 26213.6 )
                    v47 = (float)((float)(v47 - 26213.6) * 0.16) + 26213.6;
                  v50 = (int)v47;
                  v49 = (float)v272;
                  v6[v27] = v50;
                  if ( (float)v272 > 26213.6 )
                    v49 = (float)((float)(v49 - 26213.6) * 0.16) + 26213.6;
                }
                else
                {
                  if ( v47 < -26213.6 )
                    v47 = (float)((float)(v47 + 26213.6) * 0.16) - 26213.6;
                  v48 = (int)v47;
                  v49 = (float)v272;
                  v6[v27] = v48;
                  if ( (float)v272 < -26213.6 )
                    v49 = (float)((float)(v49 + 26213.6) * 0.16) - 26213.6;
                }
                v2 = v271;
                v14 = v275;
                v3 = v271;
                v7[v27] = (int)v49;
                v51 = v16 + 6;
                v6[v51] = v6[v24];
                v52 = v16 + 7;
                v6[v52] = v6[v27];
                v7[v51] = v7[v24];
                v7[v52] = v7[v27];
                v16 += portConfig[v271].channel;
                v17 = &v279[v296];
                v279 = v17;
              }
              while ( v16 < v304 );
              v4 = v304;
              v5 = v288;
              v8 = v278;
              LeaveCriticalSection(lpCriticalSection);
              goto LABEL_354;
            }
LABEL_351:
            v4 = v304;
            v2 = v271;
            LeaveCriticalSection(lpCriticalSection);
            goto LABEL_354;
          }
          if ( (_DWORD)v15 != 2 )
            goto LABEL_90;
          if ( !*((_BYTE *)v14 + 1) )
          {
            v53 = 0;
            if ( v4 > 0 )
            {
              v54 = 2 * v15;
              do
              {
                v55 = v53 + 1;
                v56 = (v14[64] * *v13) >> 12;
                v57 = (v14[65] * v13[1]) >> 12;
                v58 = v56 + v7[v53];
                v59 = v6[v53] + v56;
                v60 = v57 + v7[v55];
                v61 = v6[v55] + v57;
                v62 = (float)v59;
                if ( v59 >= 0 )
                {
                  if ( v62 > 26213.6 )
                    v62 = (float)((float)(v62 - 26213.6) * 0.16) + 26213.6;
                  v65 = (int)v62;
                  v64 = (float)v58;
                  v6[v53] = v65;
                  if ( (float)v58 > 26213.6 )
                    v64 = (float)((float)(v64 - 26213.6) * 0.16) + 26213.6;
                }
                else
                {
                  if ( v62 < -26213.6 )
                    v62 = (float)((float)(v62 + 26213.6) * 0.16) - 26213.6;
                  v63 = (int)v62;
                  v64 = (float)v58;
                  v6[v53] = v63;
                  if ( (float)v58 < -26213.6 )
                    v64 = (float)((float)(v64 + 26213.6) * 0.16) - 26213.6;
                }
                v7[v53] = (int)v64;
                v66 = (float)v61;
                if ( v61 >= 0 )
                {
                  if ( v66 > 26213.6 )
                    v66 = (float)((float)(v66 - 26213.6) * 0.16) + 26213.6;
                  v69 = (int)v66;
                  v68 = (float)v60;
                  v6[v55] = v69;
                  if ( (float)v60 > 26213.6 )
                    v68 = (float)((float)(v68 - 26213.6) * 0.16) + 26213.6;
                }
                else
                {
                  if ( v66 < -26213.6 )
                    v66 = (float)((float)(v66 + 26213.6) * 0.16) - 26213.6;
                  v67 = (int)v66;
                  v68 = (float)v60;
                  v6[v55] = v67;
                  if ( (float)v60 < -26213.6 )
                    v68 = (float)((float)(v68 + 26213.6) * 0.16) - 26213.6;
                }
                v14 = v275;
                v13 = (__int16 *)((char *)v13 + v54);
                v7[v55] = (int)v68;
                v53 += portConfig[v3].channel;
              }
              while ( v53 < v4 );
              goto LABEL_88;
            }
LABEL_90:
            v2 = v271;
            LeaveCriticalSection(lpCriticalSection);
            goto LABEL_354;
          }
          v70 = 0;
          if ( v4 <= 0 )
            goto LABEL_90;
          v71 = 2 * v15;
          do
          {
            v72 = v70 + 1;
            v73 = (v275[64] * *v13) >> 12;
            v74 = v73 + v7[v70];
            v75 = v6[v72] + v73;
            v76 = v6[v70];
            v77 = (v275[65] * v13[1]) >> 12;
            v78 = v77 + v7[v72];
            v79 = (float)(v76 + v77);
            if ( v76 + v77 >= 0 )
            {
              if ( v79 > 26213.6 )
                v79 = (float)((float)(v79 - 26213.6) * 0.16) + 26213.6;
            }
            else if ( v79 < -26213.6 )
            {
              v79 = (float)((float)(v79 + 26213.6) * 0.16) - 26213.6;
            }
            v6[v70] = (int)v79;
            v80 = (float)v74;
            if ( v74 >= 0 )
            {
              if ( v80 > 26213.6 )
                v80 = (float)((float)(v80 - 26213.6) * 0.16) + 26213.6;
            }
            else if ( v80 < -26213.6 )
            {
              v80 = (float)((float)(v80 + 26213.6) * 0.16) - 26213.6;
            }
            v7[v70] = (int)v80;
            v81 = (float)v75;
            if ( v75 >= 0 )
            {
              if ( v81 > 26213.6 )
                v81 = (float)((float)(v81 - 26213.6) * 0.16) + 26213.6;
            }
            else if ( v81 < -26213.6 )
            {
              v81 = (float)((float)(v81 + 26213.6) * 0.16) - 26213.6;
            }
            v6[v72] = (int)v81;
            v82 = (float)v78;
            if ( v78 >= 0 )
            {
              if ( v82 > 26213.6 )
                v82 = (float)((float)(v82 - 26213.6) * 0.16) + 26213.6;
            }
            else if ( v82 < -26213.6 )
            {
              v82 = (float)((float)(v82 + 26213.6) * 0.16) - 26213.6;
            }
            v13 = (__int16 *)((char *)v13 + v71);
            v7[v72] = (int)v82;
            v70 += portConfig[v3].channel;
          }
          while ( v70 < v4 );
LABEL_88:
          v5 = v288;
        }
        v8 = v278;
        goto LABEL_90;
      }
      LeaveCriticalSection(v10);
    }
LABEL_354:
    v278 = ++v8;
    if ( ++v294 >= 32 )
    {
      v1 = arg;
      v241 = 0i64;
      v242 = v4 * *(_DWORD *)(v5 + 24);
      v243 = 1500 * v4;
      v244 = *((float *)arg + 3);
      v245 = *((_DWORD *)arg + 4);
      for ( i = v4; v241 < i; ++v241 )
      {
        v247 = *((float *)arg + 5);
        v248 = 1;
        if ( v245 >= 4 )
        {
          v249 = (float)v242;
          v250 = 3;
          do
          {
            v251 = (int)(float)(v249 - (float)((float)(v248 * *((_DWORD *)arg + 6)) * 0.5));
            if ( v243 > v251 )
            {
              if ( v251 < 0 )
                v251 += v243;
            }
            else
            {
              v251 -= v243;
            }
            v252 = (int)(float)((float)*(__int16 *)(*(_QWORD *)(v5 + 16) + 2i64 * v251) * v247);
            if ( v252 )
            {
              v253 = (float)(v6[v241] + v252);
              if ( v6[v241] + v252 >= 0 )
              {
                if ( v253 > 26213.6 )
                  v253 = (float)((float)(v253 - 26213.6) * 0.16) + 26213.6;
              }
              else if ( v253 < -26213.6 )
              {
                v253 = (float)((float)(v253 + 26213.6) * 0.16) - 26213.6;
              }
              v6[v241] = (int)v253;
            }
            v254 = v247 * v244;
            v255 = (int)(float)(v249 - (float)((float)(*((_DWORD *)arg + 6) * (v250 - 1)) * 0.5));
            if ( v243 > v255 )
            {
              if ( v255 < 0 )
                v255 += v243;
            }
            else
            {
              v255 -= v243;
            }
            v256 = (int)(float)((float)*(__int16 *)(*(_QWORD *)(v5 + 16) + 2i64 * v255) * v254);
            if ( v256 )
            {
              v257 = (float)(v6[v241] + v256);
              if ( v6[v241] + v256 >= 0 )
              {
                if ( v257 > 26213.6 )
                  v257 = (float)((float)(v257 - 26213.6) * 0.16) + 26213.6;
              }
              else if ( v257 < -26213.6 )
              {
                v257 = (float)((float)(v257 + 26213.6) * 0.16) - 26213.6;
              }
              v6[v241] = (int)v257;
            }
            v258 = v254 * v244;
            v259 = (int)(float)(v249 - (float)((float)(v250 * *((_DWORD *)arg + 6)) * 0.5));
            if ( v243 > v259 )
            {
              if ( v259 < 0 )
                v259 += v243;
            }
            else
            {
              v259 -= v243;
            }
            v260 = (int)(float)((float)*(__int16 *)(*(_QWORD *)(v5 + 16) + 2i64 * v259) * v258);
            if ( v260 )
            {
              v261 = (float)(v6[v241] + v260);
              if ( v6[v241] + v260 >= 0 )
              {
                if ( v261 > 26213.6 )
                  v261 = (float)((float)(v261 - 26213.6) * 0.16) + 26213.6;
              }
              else if ( v261 < -26213.6 )
              {
                v261 = (float)((float)(v261 + 26213.6) * 0.16) - 26213.6;
              }
              v6[v241] = (int)v261;
            }
            v262 = v258 * v244;
            v263 = (int)(float)(v249 - (float)((float)(*((_DWORD *)arg + 6) * (v250 + 1)) * 0.5));
            if ( v243 > v263 )
            {
              if ( v263 < 0 )
                v263 += v243;
            }
            else
            {
              v263 -= v243;
            }
            v264 = (int)(float)((float)*(__int16 *)(*(_QWORD *)(v5 + 16) + 2i64 * v263) * v262);
            if ( v264 )
            {
              v265 = (float)(v6[v241] + v264);
              if ( v6[v241] + v264 >= 0 )
              {
                if ( v265 > 26213.6 )
                  v265 = (float)((float)(v265 - 26213.6) * 0.16) + 26213.6;
              }
              else if ( v265 < -26213.6 )
              {
                v265 = (float)((float)(v265 + 26213.6) * 0.16) - 26213.6;
              }
              v6[v241] = (int)v265;
            }
            v248 += 4;
            v247 = v262 * v244;
            v250 += 4;
          }
          while ( v248 <= v245 - 3 );
          i = v4;
        }
        for ( ; v248 <= v245; v247 = v247 * v244 )
        {
          v266 = (int)(float)((float)v242 - (float)((float)(v248 * *((_DWORD *)arg + 6)) * 0.5));
          if ( v243 > v266 )
          {
            if ( v266 < 0 )
              v266 += v243;
          }
          else
          {
            v266 -= v243;
          }
          v267 = (int)(float)((float)*(__int16 *)(*(_QWORD *)(v5 + 16) + 2i64 * v266) * v247);
          if ( v267 )
          {
            v268 = (float)(v6[v241] + v267);
            if ( v6[v241] + v267 >= 0 )
            {
              if ( v268 > 26213.6 )
                v268 = (float)((float)(v268 - 26213.6) * 0.16) + 26213.6;
            }
            else if ( v268 < -26213.6 )
            {
              v268 = (float)((float)(v268 + 26213.6) * 0.16) - 26213.6;
            }
            v6[v241] = (int)v268;
          }
          ++v248;
        }
        ++v242;
      }
      v269 = *(_QWORD *)(v5 + 320);
      if ( v269 )
      {
        v299 = v6;
        v298[0] = 0;
        v302[0] = 0;
        v300 = 0i64;
        v301 = 0i64;
        v298[1] = 2 * v4;
        *(_QWORD *)&v302[1] = v5;
        (*(void (__fastcall **)(__int64, _DWORD *, _QWORD))(*(_QWORD *)v269 + 168i64))(v269, v298, 0i64);
        WaitForSingleObject(*(HANDLE *)(v5 + 328), 0xFFFFFFFF);
      }
      v270 = *(_DWORD *)(v5 + 24);
      *(_DWORD *)(v5 + 8) = (*(_DWORD *)(v5 + 8) + 1) % 4;
      *(_DWORD *)(v5 + 24) = (v270 + 1) % 1500;
LABEL_421:
      v271 = ++v2;
      if ( v2 >= 6 )
        goto LABEL_2;
      goto LABEL_3;
    }
  }
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall VoiceCallbacks::OnBufferStart(VoiceCallbacks *this, void *pBufferContext)
{
  if ( pBufferContext )
    SetEvent(*((HANDLE *)pBufferContext + 41));
}

HRESULT __fastcall XAudio2Create(
        IXAudio2 **ppXAudio2,
        unsigned int Flags,
        XAUDIO2_WINDOWS_PROCESSOR_SPECIFIER XAudio2Processor)
{
  HRESULT result; // eax
  HRESULT v5; // ebx
  LPVOID ppv; // [rsp+58h] [rbp+20h] BYREF

  result = CoCreateInstance(
             &GUID_5a508685_a254_4fba_9b82_9a24b00306af,
             0i64,
             1u,
             &GUID_8bcf1f58_9fe7_4583_8ac6_e2adc465c8bb,
             &ppv);
  if ( result >= 0 )
  {
    result = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64))(*(_QWORD *)ppv + 40i64))(ppv, 0i64, 0xFFFFFFFFi64);
    v5 = result;
    if ( result < 0 )
    {
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16i64))(ppv);
      return v5;
    }
    else
    {
      *ppXAudio2 = (IXAudio2 *)ppv;
    }
  }
  return result;
}

void __fastcall convertSpeedDown(
        int *offset0,
        __int16 *pIn,
        int *offset1,
        __int16 *pOut,
        _SND_BANK_INFO *pData,
        float speed)
{
  __int16 *v8; // rdi
  int v9; // edx
  int *v10; // r13
  float freq; // xmm1_4
  int v12; // ecx
  int v13; // er15
  int v14; // ebx
  int v15; // esi
  __int64 v16; // r14
  int v17; // ebx
  __int64 v18; // r12
  int v19; // ebp
  int v20; // er13
  _DWORD *v21; // r15
  int v22; // edi
  __int64 v23; // r12
  int v24; // er8
  __int64 i; // rdx
  int v26; // ecx
  int v27; // eax
  int v28; // er9
  __int64 v29; // r8
  int v30; // ecx
  float v31; // xmm1_4
  int v32; // ebp
  __int64 v33; // r8
  int v34; // ecx
  float v35; // xmm1_4
  __int64 v36; // r8
  int v37; // ecx
  float v38; // xmm1_4
  __int64 v39; // r8
  int v40; // ecx
  float v41; // xmm1_4
  int v42; // er8
  __int64 v43; // r9
  int v44; // ecx
  float v45; // xmm1_4
  int v46; // er8
  int v47; // er9
  int v48; // ecx
  int v49; // eax
  int v50; // [rsp+20h] [rbp-1728h]
  __int16 *Src; // [rsp+48h] [rbp-1700h]
  _DWORD v56[964]; // [rsp+60h] [rbp-16E8h] BYREF
  __int16 v57[480]; // [rsp+F70h] [rbp-7D8h] BYREF
  __int16 v58[480]; // [rsp+1330h] [rbp-418h] BYREF

  v8 = pOut;
  v9 = *offset0;
  v10 = offset1;
  freq = pData->freq;
  v12 = pData->bufferSize >> 1;
  v13 = (int)(float)(freq * 0.02);
  v14 = (int)(float)(freq * 0.0099999998);
  v15 = (int)(float)(freq * 0.0049999999);
  if ( v9 + 2 * v13 >= v12 )
  {
    v13 = (v12 - v9) >> 1;
    v14 = (v12 - v9) >> 2;
    v15 = (v12 - v9) >> 3;
  }
  memset(&pOut[*offset1], 0, 2i64 * (0x8000 - *offset1));
  v50 = *offset0;
  v16 = v14;
  Src = &pIn[*offset0];
  memmove(v58, Src, 2i64 * v14);
  v17 = 0;
  v18 = v13;
  v19 = v15;
  if ( v15 <= (__int64)v13 )
  {
    v20 = v15 + v50;
    v21 = &v56[v15];
    v22 = 0;
    v23 = v18 - v15 + 1;
    do
    {
      memmove(v57, &pIn[v20], 2 * v16);
      v24 = 0;
      for ( i = 0i64; i < v16; v24 += (v27 * v26) >> 16 )
      {
        v26 = v57[i];
        v27 = v58[i++];
      }
      if ( v24 > v22 )
      {
        v22 = v24;
        v15 = v19;
      }
      ++v19;
      ++v20;
      ++v21;
      --v23;
    }
    while ( v23 );
    v8 = pOut;
    v10 = offset1;
  }
  memmove(&v8[*v10], Src, 2i64 * v15);
  if ( v15 >= 4 )
  {
    v28 = v15 - 2;
    do
    {
      v8[*v10 + v17 + v15] = (v28 + 2) * pIn[v15 + v17 + *offset0] / v15;
      v29 = *v10 + v17 + v15;
      v30 = v8[v29];
      v31 = (float)(v30 + v17 * pIn[v17 + *offset0] / v15);
      if ( v30 + v17 * pIn[v17 + *offset0] / v15 >= 0 )
      {
        if ( v31 > 26213.6 )
          v31 = (float)((float)(v31 - 26213.6) * 0.16) + 26213.6;
      }
      else if ( v31 < -26213.6 )
      {
        v31 = (float)((float)(v31 + 26213.6) * 0.16) - 26213.6;
      }
      v32 = v17 + 2;
      v8[v29] = (int)v31;
      v8[*v10 + 1 + v17 + v15] = (v28 + 1) * pIn[v15 + 1 + v17 + *offset0] / v15;
      v33 = *v10 + 1 + v17 + v15;
      v34 = v8[v33];
      v35 = (float)(v34 + (v17 + 1) * pIn[v17 + 1 + *offset0] / v15);
      if ( v34 + (v17 + 1) * pIn[v17 + 1 + *offset0] / v15 >= 0 )
      {
        if ( v35 > 26213.6 )
          v35 = (float)((float)(v35 - 26213.6) * 0.16) + 26213.6;
      }
      else if ( v35 < -26213.6 )
      {
        v35 = (float)((float)(v35 + 26213.6) * 0.16) - 26213.6;
      }
      v8[v33] = (int)v35;
      v8[*v10 + 2 + v17 + v15] = v28 * pIn[v15 + 2 + v17 + *offset0] / v15;
      v36 = *v10 + 2 + v17 + v15;
      v37 = v8[v36];
      v38 = (float)(v37 + v32 * pIn[v17 + 2 + *offset0] / v15);
      if ( v37 + v32 * pIn[v17 + 2 + *offset0] / v15 >= 0 )
      {
        if ( v38 > 26213.6 )
          v38 = (float)((float)(v38 - 26213.6) * 0.16) + 26213.6;
      }
      else if ( v38 < -26213.6 )
      {
        v38 = (float)((float)(v38 + 26213.6) * 0.16) - 26213.6;
      }
      v8[v36] = (int)v38;
      v8[*v10 + 3 + v17 + v15] = (v28 - 1) * pIn[v15 + 3 + v17 + *offset0] / v15;
      v39 = *v10 + 3 + v17 + v15;
      v40 = v8[v39];
      v41 = (float)(v40 + (v17 + 3) * pIn[v17 + 3 + *offset0] / v15);
      if ( v40 + (v17 + 3) * pIn[v17 + 3 + *offset0] / v15 >= 0 )
      {
        if ( v41 > 26213.6 )
          v41 = (float)((float)(v41 - 26213.6) * 0.16) + 26213.6;
      }
      else if ( v41 < -26213.6 )
      {
        v41 = (float)((float)(v41 + 26213.6) * 0.16) - 26213.6;
      }
      v17 += 4;
      v28 -= 4;
      v8[v39] = (int)v41;
    }
    while ( v17 < v15 - 3 );
  }
  if ( v17 < v15 )
  {
    v42 = v15 - v17;
    do
    {
      v8[*v10 + v17 + v15] = v42 * pIn[v15 + v17 + *offset0] / v15;
      v43 = *v10 + v17 + v15;
      v44 = v8[v43];
      v45 = (float)(v44 + v17 * pIn[v17 + *offset0] / v15);
      if ( v44 + v17 * pIn[v17 + *offset0] / v15 >= 0 )
      {
        if ( v45 > 26213.6 )
          v45 = (float)((float)(v45 - 26213.6) * 0.16) + 26213.6;
      }
      else if ( v45 < -26213.6 )
      {
        v45 = (float)((float)(v45 + 26213.6) * 0.16) - 26213.6;
      }
      ++v17;
      --v42;
      v8[v43] = (int)v45;
    }
    while ( v17 < v15 );
  }
  v46 = v15;
  v47 = (int)(float)((float)((float)((float)v15 * speed) / (float)(1.0 - speed)) + 0.5);
  if ( v15 < v47 )
  {
    do
    {
      v48 = v46 + *offset0;
      if ( v48 >= pData->bufferSize >> 1 )
        break;
      v49 = *v10 + v46 + v15;
      ++v46;
      v8[v49] = pIn[v48];
    }
    while ( v46 < v47 );
  }
  *offset0 += v47;
  *v10 += v47 + v15;
}

void __fastcall convertSpeedUp(
        int *offset0,
        __int16 *pIn,
        int *offset1,
        __int16 *pOut,
        _SND_BANK_INFO *pData,
        float speed)
{
  __int16 *v8; // rdi
  int v9; // edx
  float freq; // xmm1_4
  int v11; // ecx
  int v12; // er15
  int v13; // ebx
  int v14; // esi
  __int64 v15; // r14
  int v16; // ebx
  int v17; // er13
  int v18; // ebp
  __int64 v19; // r12
  _DWORD *v20; // r15
  __int64 v21; // r12
  int v22; // er8
  __int64 i; // rdx
  int v24; // ecx
  int v25; // eax
  int v26; // er9
  __int64 v27; // r8
  int v28; // ecx
  float v29; // xmm1_4
  int v30; // ebp
  __int64 v31; // r8
  int v32; // ecx
  float v33; // xmm1_4
  __int64 v34; // r8
  int v35; // ecx
  float v36; // xmm1_4
  __int64 v37; // r8
  int v38; // ecx
  float v39; // xmm1_4
  int v40; // er8
  __int64 v41; // r9
  int v42; // ecx
  float v43; // xmm1_4
  int v44; // er8
  int v45; // er9
  int v46; // ecx
  __int64 v47; // rdx
  __int64 v48; // rcx
  int v49; // [rsp+20h] [rbp-1718h]
  _DWORD v54[964]; // [rsp+50h] [rbp-16E8h] BYREF
  __int16 v55[480]; // [rsp+F60h] [rbp-7D8h] BYREF
  __int16 v56[480]; // [rsp+1320h] [rbp-418h] BYREF

  v8 = pOut;
  v9 = *offset0;
  freq = pData->freq;
  v11 = pData->bufferSize >> 1;
  v12 = (int)(float)(freq * 0.02);
  v13 = (int)(float)(freq * 0.0099999998);
  v14 = (int)(float)(freq * 0.0049999999);
  if ( v9 + 2 * v12 >= v11 )
  {
    v12 = (v11 - v9) >> 1;
    v13 = (v11 - v9) >> 2;
    v14 = (v11 - v9) >> 3;
  }
  memset(&pOut[*offset1], 0, 2i64 * (0x8000 - *offset1));
  v15 = v13;
  v49 = *offset0;
  memmove(v56, &pIn[*offset0], 2i64 * v13);
  v16 = 0;
  v17 = 0;
  v18 = v14;
  if ( v14 <= (__int64)v12 )
  {
    v19 = v12 - (__int64)v14;
    v20 = &v54[v14];
    v21 = v19 + 1;
    do
    {
      memmove(v55, &pIn[v18 + v49], 2 * v15);
      v22 = 0;
      for ( i = 0i64; i < v15; v22 += (v25 * v24) >> 16 )
      {
        v24 = v55[i];
        v25 = v56[i++];
      }
      if ( v22 > v17 )
      {
        v17 = v22;
        v14 = v18;
      }
      ++v18;
      ++v20;
      --v21;
    }
    while ( v21 );
    v8 = pOut;
  }
  if ( v14 >= 4 )
  {
    v26 = v14 - 2;
    do
    {
      v8[v16 + *offset1] = (v26 + 2) * pIn[v16 + *offset0] / v14;
      v27 = v16 + *offset1;
      v28 = v8[v27];
      v29 = (float)(v28 + v16 * pIn[v14 + v16 + *offset0] / v14);
      if ( v28 + v16 * pIn[v14 + v16 + *offset0] / v14 >= 0 )
      {
        if ( v29 > 26213.6 )
          v29 = (float)((float)(v29 - 26213.6) * 0.16) + 26213.6;
      }
      else if ( v29 < -26213.6 )
      {
        v29 = (float)((float)(v29 + 26213.6) * 0.16) - 26213.6;
      }
      v30 = v16 + 2;
      v8[v27] = (int)v29;
      v8[v16 + 1 + *offset1] = (v26 + 1) * pIn[v16 + 1 + *offset0] / v14;
      v31 = v16 + *offset1 + 1;
      v32 = v8[v31];
      v33 = (float)(v32 + (v16 + 1) * pIn[v14 + 1 + v16 + *offset0] / v14);
      if ( v32 + (v16 + 1) * pIn[v14 + 1 + v16 + *offset0] / v14 >= 0 )
      {
        if ( v33 > 26213.6 )
          v33 = (float)((float)(v33 - 26213.6) * 0.16) + 26213.6;
      }
      else if ( v33 < -26213.6 )
      {
        v33 = (float)((float)(v33 + 26213.6) * 0.16) - 26213.6;
      }
      v8[v31] = (int)v33;
      v8[v16 + 2 + *offset1] = v26 * pIn[v16 + 2 + *offset0] / v14;
      v34 = v16 + *offset1 + 2;
      v35 = v8[v34];
      v36 = (float)(v35 + v30 * pIn[v14 + 2 + v16 + *offset0] / v14);
      if ( v35 + v30 * pIn[v14 + 2 + v16 + *offset0] / v14 >= 0 )
      {
        if ( v36 > 26213.6 )
          v36 = (float)((float)(v36 - 26213.6) * 0.16) + 26213.6;
      }
      else if ( v36 < -26213.6 )
      {
        v36 = (float)((float)(v36 + 26213.6) * 0.16) - 26213.6;
      }
      v8[v34] = (int)v36;
      v8[v16 + 3 + *offset1] = (v26 - 1) * pIn[v16 + 3 + *offset0] / v14;
      v37 = v16 + *offset1 + 3;
      v38 = v8[v37];
      v39 = (float)(v38 + (v16 + 3) * pIn[v14 + 3 + v16 + *offset0] / v14);
      if ( v38 + (v16 + 3) * pIn[v14 + 3 + v16 + *offset0] / v14 >= 0 )
      {
        if ( v39 > 26213.6 )
          v39 = (float)((float)(v39 - 26213.6) * 0.16) + 26213.6;
      }
      else if ( v39 < -26213.6 )
      {
        v39 = (float)((float)(v39 + 26213.6) * 0.16) - 26213.6;
      }
      v16 += 4;
      v26 -= 4;
      v8[v37] = (int)v39;
    }
    while ( v16 < v14 - 3 );
  }
  if ( v16 < v14 )
  {
    v40 = v14 - v16;
    do
    {
      v8[v16 + *offset1] = v40 * pIn[v16 + *offset0] / v14;
      v41 = v16 + *offset1;
      v42 = v8[v41];
      v43 = (float)(v42 + v16 * pIn[v14 + v16 + *offset0] / v14);
      if ( v42 + v16 * pIn[v14 + v16 + *offset0] / v14 >= 0 )
      {
        if ( v43 > 26213.6 )
          v43 = (float)((float)(v43 - 26213.6) * 0.16) + 26213.6;
      }
      else if ( v43 < -26213.6 )
      {
        v43 = (float)((float)(v43 + 26213.6) * 0.16) - 26213.6;
      }
      ++v16;
      --v40;
      v8[v41] = (int)v43;
    }
    while ( v16 < v14 );
  }
  v44 = v14;
  v45 = (int)(float)((float)((float)v14 / (float)(speed - 1.0)) + 0.5);
  if ( v14 < v45 )
  {
    do
    {
      v46 = v14 + v44 + *offset0;
      if ( v46 >= pData->bufferSize >> 1 )
        break;
      v47 = v46;
      v48 = v44 + *offset1;
      ++v44;
      v8[v48] = pIn[v47];
    }
    while ( v44 < v45 );
  }
  *offset0 += v45 + v14;
  *offset1 += v45;
}

void __fastcall CMediaManager::delAudioPresenter(CMediaManager *this, _PORT_CONFIG *port, CAudioPresenter *ptr)
{
  int freq; // ebp
  const _PORT_CONFIG *v4; // rdi
  int v5; // esi
  _PORT_SETTING *m_PortSetting; // r10
  int v7; // ebx
  const _PORT_CONFIG *v8; // r11
  _PORT_SETTING *v9; // r9
  int v11; // ecx
  __int64 v12; // rax
  int v13; // edx
  int v14; // ecx
  __int64 v15; // rax

  freq = port->freq;
  v4 = portConfig;
  v5 = -1;
  m_PortSetting = this->m_PortSetting;
  v7 = 0;
  v8 = portConfig;
  v9 = this->m_PortSetting;
  while ( v8->freq != freq || v8->type != port->type )
  {
LABEL_7:
    ++v7;
    ++v8;
    ++v9;
    if ( v7 >= 6 )
    {
      if ( v5 < 0 )
      {
        v13 = 0;
        while ( v4->freq != freq || v4->type != port->type )
        {
LABEL_15:
          ++v13;
          ++v4;
          ++m_PortSetting;
          if ( v13 >= 6 )
            return;
        }
        v14 = 0;
        v15 = 32i64;
        while ( *(CAudioPresenter **)((char *)&m_PortSetting->bufferWork + v15) != ptr )
        {
          ++v14;
          v15 += 8i64;
          if ( v15 >= 288 )
            goto LABEL_15;
        }
        m_PortSetting->bDelReserve[v14] = 1;
      }
      return;
    }
  }
  v5 = v7;
  v11 = 0;
  v12 = 32i64;
  while ( *(CAudioPresenter **)((char *)&v9->bufferWork + v12) != ptr )
  {
    ++v11;
    v12 += 8i64;
    if ( v12 >= 288 )
      goto LABEL_7;
  }
  v9->bDelReserve[v11] = 1;
}

void __fastcall CMediaManager::finalize(CMediaManager *this)
{
  unsigned __int64 v2; // rdx
  _PORT_SETTING *m_PortSetting; // r14
  __int64 v4; // rbp
  CAudioPresenter **pAudioPresenter; // rbx
  __int64 v6; // rsi
  bool *bDelReserve; // rdi

  AgThread::detach(&this->m_thread_sound);
  AgThread::detach(&this->m_thread_sound_reverb);
  AgThread::detach(&this->m_thread_sound_reverb2);
  AgThread::detach(&this->m_thread_sound_bgm);
  m_PortSetting = this->m_PortSetting;
  v4 = 6i64;
  do
  {
    pAudioPresenter = m_PortSetting->pAudioPresenter;
    v6 = 32i64;
    bDelReserve = m_PortSetting->bDelReserve;
    do
    {
      if ( *pAudioPresenter )
        LeaveCriticalSection((LPCRITICAL_SECTION)&(*pAudioPresenter)->m_sound_mutex);
      *bDelReserve++ = 0;
      *pAudioPresenter++ = 0i64;
      --v6;
    }
    while ( v6 );
    if ( m_PortSetting->bufferWork )
    {
      operator delete(m_PortSetting->bufferWork, v2);
      m_PortSetting->bufferWork = 0i64;
    }
    ++m_PortSetting;
    --v4;
  }
  while ( v4 );
}

__int64 __fastcall CharaFileBase::GetFormatVersion(CharaFileBase *this)
{
  return this->fileHeader.uiFormatVersion;
}

__int64 __fastcall AgSimpleThreadHost::getThreadIsStopping(
        Concurrency::details::ThreadProxyFactory<Concurrency::details::FreeThreadProxy> *this)
{
  return this->m_executionResourceTlsIndex;
}

void __fastcall CMediaManager::initialize(CMediaManager *this)
{
  CMediaManager *v1; // r14
  CAudioPresenter **pAudioPresenter; // r8
  __int64 v3; // r9
  __int64 v4; // rax
  CAudioPresenter **v5; // rdx
  IXAudio2 **p_m_xaudio2; // r12
  int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // eax
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  int channel; // er8
  bool v15; // zf
  unsigned __int16 v16; // cx
  unsigned __int16 v17; // ax
  int v18; // eax
  __int64 v19; // rbx
  __int16 *v20; // rax
  int *v21; // rbx
  int v22; // ecx
  __int64 v23; // rbx
  __int16 *v24; // rax
  int v25; // eax
  IXAudio2 *v26; // rcx
  IXAudio2_vtbl *v27; // rax
  unsigned int m_channelMask; // ecx
  int v29; // edx
  unsigned int v30; // edi
  int v31; // eax
  bool v32; // cf
  int v33; // ecx
  int v34; // edx
  int v35; // eax
  int v36; // er15
  int v37; // er13
  int v38; // er12
  int v39; // er14
  size_t v40; // rsi
  int v41; // ecx
  size_t v42; // rax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rcx
  bool v45; // cc
  size_t v46; // rax
  __int64 v47; // rax
  void *v48; // rsp
  int *v49; // rax
  int v50; // er11
  int v51; // er9
  int v52; // er8
  int v53; // ecx
  int v54; // edx
  int v55; // edx
  IXAudio2SourceVoice **v56; // rsi
  HANDLE EventW; // rax
  __int64 v58; // rdx
  int v59; // er15
  __int64 v60; // [rsp+0h] [rbp-40h] BYREF
  char *threadName; // [rsp+20h] [rbp-20h]
  VoiceCallbacks *v62; // [rsp+28h] [rbp-18h]
  __int64 v63; // [rsp+30h] [rbp-10h]
  __int64 v64; // [rsp+38h] [rbp-8h]
  int v65; // [rsp+40h] [rbp+0h] BYREF
  int v66; // [rsp+44h] [rbp+4h]
  int v67; // [rsp+48h] [rbp+8h]
  int v68; // [rsp+4Ch] [rbp+Ch]
  int v69; // [rsp+50h] [rbp+10h]
  int v70; // [rsp+54h] [rbp+14h]
  int v71; // [rsp+58h] [rbp+18h]
  int v72; // [rsp+5Ch] [rbp+1Ch]
  int v73; // [rsp+60h] [rbp+20h]
  int v74; // [rsp+64h] [rbp+24h]
  int v75; // [rsp+68h] [rbp+28h]
  int v76; // [rsp+6Ch] [rbp+2Ch]
  __int64 v77; // [rsp+70h] [rbp+30h]
  __int64 v78; // [rsp+78h] [rbp+38h]
  __int64 v79; // [rsp+80h] [rbp+40h]
  __int64 v80; // [rsp+88h] [rbp+48h]
  int v81; // [rsp+98h] [rbp+58h]
  int v82; // [rsp+9Ch] [rbp+5Ch]
  int v83; // [rsp+A0h] [rbp+60h]
  unsigned int m_numChannels; // [rsp+A4h] [rbp+64h]
  __int64 v85; // [rsp+A8h] [rbp+68h]
  IXAudio2SourceVoice **p_m_handle; // [rsp+B0h] [rbp+70h]
  CMediaManager *v87; // [rsp+B8h] [rbp+78h]
  unsigned __int64 v88; // [rsp+C0h] [rbp+80h]
  __int64 v89; // [rsp+C8h] [rbp+88h] BYREF
  __int64 v90; // [rsp+D0h] [rbp+90h]
  __int64 v91; // [rsp+D8h] [rbp+98h]
  GUID v92; // [rsp+E0h] [rbp+A0h]
  char v93; // [rsp+F0h] [rbp+B0h] BYREF
  unsigned __int16 v94; // [rsp+4F6h] [rbp+4B6h]
  int v95; // [rsp+508h] [rbp+4C8h]

  v87 = this;
  v1 = this;
  pAudioPresenter = this->m_PortSetting[0].pAudioPresenter;
  v3 = 6i64;
  do
  {
    pAudioPresenter[36] = 0i64;
    v4 = 0i64;
    v5 = pAudioPresenter;
    do
    {
      *((_BYTE *)pAudioPresenter + v4++ + 256) = 0;
      *v5++ = 0i64;
    }
    while ( v4 < 32 );
    pAudioPresenter += 42;
    --v3;
  }
  while ( v3 );
  p_m_xaudio2 = &this->m_xaudio2;
  if ( XAudio2Create(&this->m_xaudio2, (unsigned int)v5, (XAUDIO2_WINDOWS_PROCESSOR_SPECIFIER)pAudioPresenter) >= 0
    && (*p_m_xaudio2)->CreateMasteringVoice(*p_m_xaudio2, &v1->m_masterVoice, 0, 48000u, 0, 0, 0i64) >= 0 )
  {
    (*p_m_xaudio2)->GetDeviceDetails(*p_m_xaudio2, 0, (XAUDIO2_DEVICE_DETAILS *)&v93);
    v7 = v95;
    v8 = v94;
    v1->m_numChannels = v94;
    v1->m_channelMask = v7;
    if ( !v7 )
    {
      v9 = 0;
      if ( v8 )
      {
        v10 = 0;
        do
        {
          ++v9;
          v10 = 2 * v10 + 1;
        }
        while ( v9 < v8 );
        v1->m_channelMask = v10;
      }
    }
    v76 = 0;
    v11 = 0i64;
    v85 = 0i64;
    v1->m_bReverbAttenuation = 0.80000001;
    v1->m_bReverbRepeatCount = 5;
    v1->m_bReverbReflectionAttenuation = 0.60000002;
    v1->m_bReverbAttenuationTimes = 9600;
    while ( 1 )
    {
      v12 = v11;
      v89 = 65534i64;
      v13 = v11;
      v91 = 22i64;
      channel = portConfig[v11].channel;
      v88 = 336 * v11;
      v90 = 0i64;
      v92 = (GUID)0i64;
      if ( channel == 1 )
      {
        v15 = portConfig[v11].bit == 0;
        v16 = 2;
        WORD1(v89) = 2;
        HIDWORD(v91) = 3;
        if ( !v15 )
        {
          v17 = 32;
          WORD1(v91) = 32;
          HIWORD(v90) = 32;
          v92 = GUID_00000003_0000_0010_8000_00aa00389b71;
          goto LABEL_25;
        }
LABEL_19:
        v17 = 16;
        HIWORD(v90) = 16;
        WORD1(v91) = 16;
        v92 = GUID_00000001_0000_0010_8000_00aa00389b71;
        goto LABEL_25;
      }
      if ( channel == 2 )
        break;
      if ( channel == 8 )
      {
        v15 = portConfig[v11].opt == 0;
        v16 = 8;
        WORD1(v89) = 8;
        HIDWORD(v91) = 1599;
        if ( v15 )
        {
          if ( !portConfig[v11].bit )
            goto LABEL_19;
          goto LABEL_23;
        }
LABEL_18:
        if ( !portConfig[v11].bit )
          goto LABEL_19;
LABEL_23:
        v17 = 32;
        WORD1(v91) = 32;
        HIWORD(v90) = 32;
        v92 = GUID_00000003_0000_0010_8000_00aa00389b71;
        goto LABEL_25;
      }
      v17 = HIWORD(v90);
      v16 = WORD1(v89);
LABEL_25:
      WORD2(v90) = v16 * v17 / 8;
      v18 = channel << 13;
      if ( channel == 1 )
        v18 = 0x4000;
      v19 = v18;
      v20 = (__int16 *)operator new[](saturated_mul(v18, 2ui64));
      v1->m_PortSetting[v12].bufferWork = v20;
      memset(v20, 0, 2 * v19);
      v21 = 0i64;
      v1->m_PortSetting[v12].bufferWorkPtr = 0;
      if ( (portConfig[v13].opt & 0xC) != 0 )
      {
        v22 = 3072000 * portConfig[v13].channel;
        if ( portConfig[v13].channel == 1 )
          v22 = 6144000 * portConfig[v13].channel;
        v23 = v22;
        v24 = (__int16 *)operator new[](saturated_mul(v22, 2ui64));
        v1->m_PortSetting[v12].bufferReverbWork = v24;
        memset(v24, 0, 2 * v23);
        v21 = 0i64;
      }
      v1->m_PortSetting[v12].bufferReverbWorkPtr = 0;
      v25 = portConfig[v13].freq * WORD2(v90);
      HIDWORD(v89) = portConfig[v13].freq;
      v26 = *p_m_xaudio2;
      v64 = 0i64;
      v63 = 0i64;
      v62 = &voiceCallbacks;
      LODWORD(v90) = v25;
      v27 = v26->__vftable;
      *(float *)&threadName = FLOAT_2_0;
      p_m_handle = &v1->m_PortSetting[v12].m_handle;
      ((void (__fastcall *)(IXAudio2 *, IXAudio2SourceVoice **, __int64 *, __int64, char *, VoiceCallbacks *, _QWORD, _QWORD))v27->CreateSourceVoice)(
        v26,
        p_m_handle,
        &v89,
        6i64,
        threadName,
        &voiceCallbacks,
        0i64,
        0i64);
      m_channelMask = v1->m_channelMask;
      v29 = -1;
      v30 = WORD1(v89);
      m_numChannels = v1->m_numChannels;
      v77 = -1i64;
      v78 = -1i64;
      v79 = -1i64;
      v80 = -1i64;
      v31 = m_channelMask & 1;
      if ( (m_channelMask & 1) != 0 )
        v29 = 0;
      v68 = v29;
      if ( (m_channelMask & 2) != 0 )
      {
        v67 = m_channelMask & 1;
        ++v31;
      }
      else
      {
        v67 = HIDWORD(v77);
      }
      if ( (m_channelMask & 4) != 0 )
        v70 = v31++;
      else
        v70 = v78;
      if ( (m_channelMask & 8) != 0 )
        v72 = v31++;
      else
        v72 = HIDWORD(v78);
      if ( (m_channelMask & 0x10) != 0 )
        v66 = v31++;
      else
        v66 = v79;
      if ( (m_channelMask & 0x20) != 0 )
        v65 = v31++;
      else
        v65 = HIDWORD(v79);
      if ( (m_channelMask & 0x100) != 0 )
        v73 = v31++;
      else
        v73 = v80;
      if ( (m_channelMask & 0x200) != 0 )
        v75 = v31++;
      else
        v75 = HIDWORD(v80);
      v32 = (m_channelMask & 0x400) != 0;
      v77 = -1i64;
      v33 = -1;
      v78 = -1i64;
      if ( v32 )
        v33 = v31;
      v79 = -1i64;
      v83 = v33;
      v34 = -1;
      v35 = BYTE4(v91) & 1;
      v80 = -1i64;
      if ( (v91 & 0x100000000i64) != 0 )
        v34 = 0;
      v81 = v34;
      if ( (v91 & 0x200000000i64) != 0 )
      {
        v69 = BYTE4(v91) & 1;
        ++v35;
      }
      else
      {
        v69 = HIDWORD(v77);
      }
      if ( (v91 & 0x400000000i64) != 0 )
        v36 = v35++;
      else
        v36 = v78;
      if ( (v91 & 0x800000000i64) != 0 )
        v71 = v35++;
      else
        v71 = HIDWORD(v78);
      if ( (v91 & 0x1000000000i64) != 0 )
        v37 = v35++;
      else
        v37 = v79;
      if ( (v91 & 0x2000000000i64) != 0 )
        v38 = v35++;
      else
        v38 = HIDWORD(v79);
      if ( (v91 & 0x10000000000i64) != 0 )
        v39 = v35++;
      else
        v39 = v80;
      if ( (v91 & 0x20000000000i64) != 0 )
        v74 = v35++;
      else
        v74 = HIDWORD(v80);
      v40 = 4i64 * WORD1(v89) * m_numChannels;
      v41 = -1;
      if ( (v91 & 0x40000000000i64) != 0 )
        v41 = v35;
      v42 = 0i64;
      v82 = v41;
      if ( v40 + 16 > v40 )
        v42 = v40 + 16;
      if ( !v42 )
        goto LABEL_98;
      v43 = 0i64;
      if ( v40 + 16 > v40 )
        v43 = v40 + 16;
      v44 = 0i64;
      v45 = v43 <= 0x400;
      v46 = v40 + 16;
      if ( v45 )
      {
        if ( v46 > v40 )
          v44 = v40 + 16;
        v47 = v44 + 15;
        if ( v44 + 15 <= v44 )
          v47 = 0xFFFFFFFFFFFFFF0i64;
        v48 = alloca(v47 & 0xFFFFFFFFFFFFFFF0ui64);
        v21 = &v65;
        if ( &v60 == (__int64 *)-64i64 )
          goto LABEL_98;
        v65 = 52428;
      }
      else
      {
        if ( v46 > v40 )
          v44 = v40 + 16;
        v49 = (int *)malloc(v44);
        v21 = v49;
        if ( !v49 )
          goto LABEL_98;
        *v49 = 56797;
      }
      v21 += 4;
LABEL_98:
      memset(v21, 0, v40);
      v50 = v68;
      if ( v81 != -1 && v68 != -1 )
        v21[v81 + v30 * v68] = 1065353216;
      v51 = v67;
      if ( v69 != -1 && v67 != -1 )
        v21[v69 + v30 * v67] = 1065353216;
      if ( v36 != -1 )
      {
        if ( v70 == -1 )
        {
          v21[v36 + v30 * v51] = 1062836634;
          v21[v36 + v30 * v50] = 1062836634;
        }
        else
        {
          v21[v36 + v30 * v70] = 1065353216;
        }
      }
      v52 = v66;
      if ( v37 == -1 || v38 == -1 )
      {
        v53 = v65;
      }
      else
      {
        if ( v66 == -1 )
          v21[v37 + v30 * v50] = 1060320051;
        else
          v21[v37 + v30 * v66] = 1065353216;
        v53 = v65;
        if ( v65 == -1 )
          v21[v38 + v30 * v51] = 1060320051;
        else
          v21[v38 + v30 * v65] = 1065353216;
      }
      v54 = v71;
      if ( v71 != -1 )
      {
        if ( v72 == -1 )
        {
          v21[v71 + v30 * v51] = 1048576000;
          v21[v54 + v30 * v50] = 1048576000;
        }
        else
        {
          v21[v71 + v30 * v72] = 1065353216;
        }
      }
      if ( v39 != -1 )
      {
        if ( v73 == -1 )
        {
          if ( v52 == -1 )
            v21[v39 + v30 * v50] = 1059481190;
          else
            v21[v39 + v30 * v52] = 1062836634;
          if ( v53 == -1 )
            v21[v39 + v30 * v51] = 1059481190;
          else
            v21[v39 + v30 * v53] = 1062836634;
        }
        else
        {
          v21[v39 + v30 * v73] = 1065353216;
        }
      }
      if ( v74 != -1 )
      {
        v55 = v82;
        if ( v82 != -1 )
        {
          if ( v75 == -1 )
          {
            if ( v52 == -1 )
              v21[v74 + v30 * v50] = 1059481190;
            else
              v21[v74 + v30 * v52] = 1062836634;
          }
          else
          {
            v21[v74 + v30 * v75] = 1065353216;
          }
          if ( v83 == -1 )
          {
            if ( v53 == -1 )
              v21[v55 + v30 * v51] = 1059481190;
            else
              v21[v55 + v30 * v53] = 1062836634;
          }
          else
          {
            v21[v55 + v30 * v83] = 1065353216;
          }
        }
      }
      v56 = p_m_handle;
      (*p_m_handle)->SetOutputMatrix(*p_m_handle, 0i64, v30, m_numChannels, (const float *)v21, 0);
      if ( v21 )
      {
        if ( *(v21 - 4) == 56797 )
          free(v21 - 4);
      }
      (*v56)->Start(*v56, 0, 0);
      EventW = CreateEventW(0i64, 0, 0, 0i64);
      v1 = v87;
      v87->m_PortSetting[v88 / 0x150].m_event = EventW;
      ((void (__fastcall *)(IXAudio2SourceVoice *, __int64, _QWORD))(*v56)->SetVolume)(*v56, v58, 0i64);
      v59 = v76;
      p_m_xaudio2 = &v1->m_xaudio2;
      v11 = v85 + 1;
      ++v76;
      ++v85;
      if ( v59 + 1 >= 6 )
      {
        AgThread::start(&v1->m_thread_sound, &v1->m_sound_host, 0x100000ui64, -1, "MediaManager");
        AgThread::start(&v1->m_thread_sound_reverb, &v1->m_sound_reverb_host, 0x100000ui64, -1, "MediaManagerReverb");
        AgThread::start(&v1->m_thread_sound_reverb2, &v1->m_sound_reverb2_host, 0x100000ui64, -1, "MediaManagerReverb2");
        AgThread::start(&v1->m_thread_sound_bgm, &v1->m_sound_bgm_host, 0x100000ui64, -1, "MediaManagerBGM");
        return;
      }
    }
    v16 = 2;
    HIDWORD(v91) = 3;
    WORD1(v89) = 2;
    goto LABEL_18;
  }
}

void __fastcall CMediaManager::ThreadHost::onExecuteThread(CMediaManager::ThreadHost *this)
{
  this->m_func(this->m_manager);
  this->m_running = 0;
}

void __fastcall AgSimpleThreadHost::onJoinThread(AgSimpleThreadHost *this)
{
  this->m_abort = 1;
}

__int64 __fastcall pitchShift(
        CAudioPresenter *this_player,
        unsigned int index,
        unsigned int sizeDefault,
        unsigned int maxsize,
        __int16 *outData)
{
  float m_fPitchScale; // xmm0_4
  unsigned int v6; // esi
  CMediaSound *m_Sound; // rax
  __int64 channel; // rbp
  signed int v12; // er12
  int v13; // er15
  int v14; // edi
  signed int v15; // ecx
  int v16; // er10
  int v17; // er11
  int v18; // er9
  __int64 v19; // r8
  int v20; // er13
  int v21; // edi
  float v22; // xmm12_4
  int v23; // esi
  __int64 v24; // rdx
  __int64 v25; // r15
  int v26; // ecx
  __int64 v27; // rdi
  __int16 *v28; // rbx
  float v29; // xmm7_4
  char *v30; // rbp
  float v31; // xmm0_4
  int v32; // eax
  float v33; // xmm1_4
  float v34; // xmm0_4
  int loopCount; // eax
  float v36; // xmm2_4
  int v37; // [rsp+20h] [rbp-108h]
  int v38; // [rsp+24h] [rbp-104h]
  signed int v39; // [rsp+28h] [rbp-100h]
  int v40; // [rsp+2Ch] [rbp-FCh]
  unsigned int v41; // [rsp+30h] [rbp-F8h]
  int v42; // [rsp+38h] [rbp-F0h]
  int v43; // [rsp+3Ch] [rbp-ECh]
  signed int v44; // [rsp+40h] [rbp-E8h]
  unsigned int v45; // [rsp+48h] [rbp-E0h]
  __int16 *bufferPtr; // [rsp+50h] [rbp-D8h]
  __int64 v47; // [rsp+58h] [rbp-D0h]
  __int64 v48; // [rsp+60h] [rbp-C8h]
  int v49; // [rsp+130h] [rbp+8h]

  m_fPitchScale = this_player->m_fPitchScale;
  v6 = index;
  m_Sound = this_player->m_Sound;
  channel = m_Sound->m_BankInfo.channel;
  v45 = index;
  if ( m_fPitchScale == 1.0 || m_fPitchScale == 0.0 )
    return 0i64;
  bufferPtr = m_Sound->m_BankInfo.bufferPtr;
  v12 = maxsize / (unsigned int)channel;
  v13 = sizeDefault + this_player->bufferPtr;
  v14 = 24 / (int)channel;
  v49 = m_Sound->m_BankInfo.introSize >> 1;
  v38 = v13;
  memset(outData, 0, 2i64 * sizeDefault);
  v15 = 0;
  v39 = 0;
  v44 = sizeDefault / (unsigned int)channel;
  if ( (int)(sizeDefault / (unsigned int)channel) > 0 )
  {
    v16 = v49;
    v17 = 0;
    v18 = v49 + sizeDefault;
    v19 = channel;
    v20 = v14 / 2;
    v37 = v14 / 2;
    v47 = channel;
    v40 = 0;
    v41 = v49 + sizeDefault;
    v21 = v14 / -2;
    v42 = v21;
    v43 = -(int)channel;
    do
    {
      v22 = (float)(int)(v15 + v6 / (unsigned int)channel) * this_player->m_fPitchScale;
      if ( v21 <= v20 )
      {
        v23 = v21 + (int)v22;
        v24 = v17;
        v48 = v17;
        v25 = (unsigned int)(v37 - v21 + 1);
        do
        {
          v26 = v23;
          if ( v23 >= v12 && this_player->m_PlayerInfo.loopCount )
            v26 = v23 - v12;
          if ( v26 >= 0 && v26 < v12 && v19 > 0 )
          {
            v27 = v19;
            v28 = &outData[v24];
            v29 = (float)(v22 - (float)v26) * 3.1415927;
            v30 = (char *)bufferPtr + 2 * (v16 + (int)channel * v26 - v24) - (_QWORD)outData;
            do
            {
              if ( v29 == 0.0 )
                v31 = *(float *)&FLOAT_1_0;
              else
                v31 = sinf(v29) / v29;
              v32 = *v28;
              v33 = (float)*(__int16 *)&v30[(_QWORD)v28] * v31;
              v34 = (float)(v32 + (int)v33);
              if ( v32 + (int)v33 >= 0 )
              {
                if ( v34 > 26213.6 )
                  v34 = (float)((float)(v34 - 26213.6) * 0.16) + 26213.6;
              }
              else if ( v34 < -26213.6 )
              {
                v34 = (float)((float)(v34 + 26213.6) * 0.16) - 26213.6;
              }
              *v28++ = (int)v34;
              --v27;
            }
            while ( v27 );
            v19 = v47;
            v24 = v48;
            LODWORD(channel) = v47;
            v16 = v49;
          }
          ++v23;
          --v25;
        }
        while ( v25 );
        v15 = v39;
        v18 = v41;
        v17 = v40;
        v21 = v42;
        v6 = v45;
        v13 = v38;
        v20 = v37;
      }
      if ( v22 >= (float)v12 )
      {
        loopCount = this_player->m_PlayerInfo.loopCount;
        if ( loopCount )
        {
          if ( loopCount > 0 )
            this_player->m_PlayerInfo.loopCount = loopCount - 1;
          ++this_player->m_PlayerInfo.loopCountUp;
          v36 = this_player->m_fPitchScale;
          this_player->m_PlayerInfo.deley = 0;
          this_player->m_PlayerInfo.bLoop = 1;
          v6 = (int)(float)((float)v16 / v36);
          v13 = (int)(float)((float)v18 / v36);
          v45 = v6;
          v38 = v13;
        }
        else if ( !v15 )
        {
          return 2i64;
        }
      }
      v18 += v43;
      ++v15;
      v17 += channel;
      v39 = v15;
      v40 = v17;
      v41 = v18;
    }
    while ( v15 < v44 );
  }
  this_player->bufferPtr = v13;
  return 1i64;
}

unsigned __int8 __fastcall CMediaManager::setAudioPresenter(
        CMediaManager *this,
        _PORT_CONFIG *port,
        CAudioPresenter *ptr)
{
  int v3; // er10
  int opt; // edi
  int *p_freq; // r8
  int v9; // ebx
  int v10; // ecx
  int *p_opt; // rax
  int *v12; // rax
  int type; // edx
  const _PORT_CONFIG *v14; // rax
  const int *v15; // r14
  unsigned int v16; // er15
  __int64 v17; // r11
  int *v18; // rcx
  bool v19; // zf
  int v20; // ecx
  __int64 v21; // r9
  __int64 v22; // r8
  _PORT_SETTING *m_PortSetting; // rdx
  int v24; // ecx
  __int64 i; // rax
  char *v26; // rdx

  v3 = -1;
  if ( !ptr->m_Sound )
    return 0;
  opt = port->opt;
  if ( (opt & 0xE) == 2 && port->channel != 1 )
    return 0;
  p_freq = &portConfig[0].freq;
  v9 = 0;
  if ( (opt & 4) != 0 )
  {
    v10 = 0;
    p_opt = &portConfig[0].opt;
    while ( (*(_BYTE *)p_opt & 4) == 0 )
    {
      ++v10;
      p_opt += 6;
      if ( (__int64)p_opt >= (__int64)&channel_position[2][4] )
        goto LABEL_37;
    }
  }
  else if ( (opt & 8) != 0 )
  {
    v10 = 0;
    v12 = &portConfig[0].opt;
    while ( (*(_BYTE *)v12 & 8) == 0 )
    {
      ++v10;
      v12 += 6;
      if ( (__int64)v12 >= (__int64)&channel_position[2][4] )
        goto LABEL_37;
    }
  }
  else
  {
    type = port->type;
    if ( type != 1 )
    {
      v15 = channels;
      v16 = 0;
      while ( 1 )
      {
        v17 = *v15;
        if ( (int)v17 <= port->channel )
          break;
LABEL_35:
        ++v16;
        ++v15;
        if ( v16 >= 4 )
        {
          v3 = -1;
          goto LABEL_37;
        }
      }
      v3 = 0;
      v18 = &portConfig[0].freq;
      while ( 1 )
      {
        if ( (opt & 2) != 0 )
          v19 = v18[1] == 8;
        else
          v19 = (opt & 0x10) != 0 && v17 <= 2 ? v18[1] == 2 : v18[1] == (_DWORD)v17;
        if ( v19 && *v18 == port->freq && *(v18 - 2) == type )
          goto $_AUDIO_PRESENTER_SETTING;
        ++v3;
        v18 += 6;
        if ( (__int64)v18 >= (__int64)&channel_position[1][2] )
          goto LABEL_35;
      }
    }
    v10 = 0;
    v14 = portConfig;
    while ( v14->type != 1 )
    {
      ++v10;
      if ( (__int64)++v14 >= (__int64)channel_position )
        goto LABEL_37;
    }
  }
  v3 = v10;
$_AUDIO_PRESENTER_SETTING:
  if ( v3 < 0 )
  {
LABEL_37:
    v20 = 0;
    while ( p_freq[1] != port->channel || *p_freq != port->freq || *(p_freq - 2) != port->type )
    {
      ++v20;
      p_freq += 6;
      if ( (__int64)p_freq >= (__int64)&channel_position[1][2] )
        goto LABEL_46;
    }
    v3 = v20;
  }
LABEL_46:
  v21 = 0i64;
  v22 = 32i64;
  m_PortSetting = this->m_PortSetting;
  while ( 2 )
  {
    v24 = 0;
    for ( i = 32i64; i < 288; i += 8i64 )
    {
      if ( *(CAudioPresenter **)((char *)&m_PortSetting->bufferWork + i) == ptr )
      {
        m_PortSetting->bDelReserve[v24] = 1;
        goto LABEL_53;
      }
      ++v24;
    }
    ++v21;
    ++m_PortSetting;
    if ( v21 < 6 )
      continue;
    break;
  }
LABEL_53:
  if ( v3 < 0 )
    return 0;
  v26 = (char *)this + 336 * v3;
  while ( *(_QWORD *)&v26[v22 + 32] )
  {
    ++v9;
    v22 += 8i64;
    if ( v22 >= 288 )
      return 0;
  }
  v26[v9 + 320] = 0;
  *(_QWORD *)&v26[8 * v9 + 64] = ptr;
  return 1;
}

