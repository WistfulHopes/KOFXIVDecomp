#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/silverware/git/sdk/agpointer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft directx sdk (june 2010)/include/xaudio2fx.h"
#include "dev/silverware/git/sdk/audio/agaudioeffects.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/microsoft directx sdk (june 2010)/include/xaudio2.h"
#include "dev/silverware/git/src/3rdparty/libvorbis-1.3.5/include/vorbis/vorbisfile.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/silverware/git/sdk/agcurve.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/silverware/git/sdk/agqueue.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/silverware/git/src/audio/agaudiochanneldata.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/silverware/git/sdk/audio/agaudiochannel.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/8.1/include/um/propkeydef.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/silverware/git/src/platforms/shared/audio/xaudio2/agaudiochanneldataxaudio2.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/windows kits/8.1/include/um/propsys.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/silverware/git/sdk/agringbuffer.h"
#include "dev/silverware/git/sdk/audio/agaudiotypes.h"
#include "dev/silverware/git/sdk/agmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "program files (x86)/microsoft directx sdk (june 2010)/include/xma2defs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/src/platforms/shared/audio/xaudio2/agaudiomanagerxaudio2.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/silverware/git/sdk/audio/agaudiomanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"

class EngineCallback :
	IXAudio2EngineCallback
{
private:
	virtual void OnProcessingPassEnd();
	virtual void OnProcessingPassStart();
	virtual void OnCriticalError(HRESULT);
public:
	EngineCallback(EngineCallback &);
	EngineCallback(const EngineCallback &);
	EngineCallback();
	EngineCallback & operator=(EngineCallback &);
	EngineCallback & operator=(const EngineCallback &);
};
void EngineCallback::OnCriticalError(HRESULT Error); // 0x140689C20
class MMNotificationClient :
	IMMNotificationClient
{
public:
	MMNotificationClient(MMNotificationClient &);
	MMNotificationClient(const MMNotificationClient &);
	MMNotificationClient();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual HRESULT QueryInterface(const _GUID &, void * *);
	virtual HRESULT OnDefaultDeviceChanged(__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001, __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002, const wchar_t *);
	virtual HRESULT OnDeviceAdded(const wchar_t *);
	virtual HRESULT OnDeviceRemoved(const wchar_t *);
	virtual HRESULT OnDeviceStateChanged(const wchar_t *, unsigned long);
	virtual HRESULT OnPropertyValueChanged(const wchar_t *, const _tagpropertykey);
private:
	long _cRef; // 0x8
public:
	MMNotificationClient & operator=(MMNotificationClient &);
	MMNotificationClient & operator=(const MMNotificationClient &);
};
unsigned long MMNotificationClient::AddRef(); // 0x1406ADD60
unsigned long MMNotificationClient::Release(); // 0x140689C40
HRESULT MMNotificationClient::QueryInterface(const _GUID & riid, void * * ppvInterface); // 0x140689C70
HRESULT MMNotificationClient::OnDefaultDeviceChanged(__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 flow, __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 role, const wchar_t * pwstrDeviceId); // 0x140689D00
HRESULT MMNotificationClient::OnDeviceAdded(const wchar_t * pwstrDeviceId); // 0x1400470F0
class AudioStreamJob :
	AgThreadPool::Job
{
public:
	AudioStreamJob(AudioStreamJob &);
	AudioStreamJob(const AudioStreamJob &);
	AudioStreamJob(AgAudioChannelData *);
	virtual long run();
	const AgAudioChannelData * getData();
private:
	AgAudioChannelData * m_channelData; // 0x20
public:
	virtual ~AudioStreamJob();
	AudioStreamJob & operator=(AudioStreamJob &);
	AudioStreamJob & operator=(const AudioStreamJob &);
};
long AudioStreamJob::run(); // 0x14068A4C0
AgAudioManagerXAudio2::AgAudioManagerXAudio2(); // 0x140689EC0
IMMNotificationClient::IMMNotificationClient(); // 0x14004EB00
IXAudio2 * AgAudioManagerXAudio2::getXAudio2(); // 0x14068A0F0
long AgAudioManagerXAudio2::platformInitialize(); // 0x14068A250
long AgAudioManagerXAudio2::platformPreFinalize(); // 0x1400482A0
long AgAudioManagerXAudio2::platformPostFinalize(); // 0x14068A310
long AgAudioManagerXAudio2::initializeXAudio2(); // 0x14068A100
void AgAudioManagerXAudio2::platformUpdate(); // 0x14068A3B0
void AgAudioManagerXAudio2::addStreamJob(AgAudioChannelData * data); // 0x14068A000
void AgAudioManagerXAudio2::cancelStreamJob(AgAudioChannelData * data); // 0x14068A0B0
class AgAudioManagerXAudio2::cancelStreamJob::__l2::<lambda_59c28db3580856550501c533fac68ba7>
{
public:
	long operator()(AgThreadPool::Job *);
	<lambda_59c28db3580856550501c533fac68ba7>(AgAudioManagerXAudio2::cancelStreamJob::__l2::<lambda_59c28db3580856550501c533fac68ba7> &);
	<lambda_59c28db3580856550501c533fac68ba7>();
	<lambda_59c28db3580856550501c533fac68ba7>(AgAudioChannelData * &);
private:
	AgAudioChannelData * data; // 0x0
public:
	AgAudioManagerXAudio2::cancelStreamJob::__l2::<lambda_59c28db3580856550501c533fac68ba7> & operator=(const AgAudioManagerXAudio2::cancelStreamJob::__l2::<lambda_59c28db3580856550501c533fac68ba7> &);
};
EngineCallback engineCallback; // 0x140A29448
MMNotificationClient NotificationClient; // 0x140A940B0
void(*NotificationClient$initializer$)(); // 0x1407406F0
IMMDeviceEnumerator * Enumerator; // 0x140A940A8
typedef __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 EDataFlow;
typedef __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 ERole;//decompilation failure at 140A29448!
//decompilation failure at 140A940B0!
//decompilation failure at 1407406F0!
//decompilation failure at 140A940A8!
__int64 __fastcall AgThreadPool::cancelJobs<_lambda_59c28db3580856550501c533fac68ba7_>(
        AgThreadPool *this,
        AgAudioManagerXAudio2::cancelStreamJob::__l2::<lambda_59c28db3580856550501c533fac68ba7> *p)
{
  AgRingBufferLocked<AgThreadPool::Job *> *m_returnedMem; // rbx
  int v5; // ebp
  unsigned int m_read; // edi
  AgAudioChannelData **v7; // rcx
  unsigned int v8; // edx
  AgRingBufferLocked<AgThreadPool::Job *> *v9; // rdi
  int v10; // esi
  unsigned int i; // ebx
  AgAudioChannelData **v12; // rcx

  m_returnedMem = this->m_work.m_buffer.m_returnedMem;
  EnterCriticalSection((LPCRITICAL_SECTION)&m_returnedMem->m_lock);
  v5 = 0;
  m_read = m_returnedMem->m_read;
  while ( m_read < m_returnedMem->m_write )
  {
    v7 = (AgAudioChannelData **)m_returnedMem->m_buffer[m_read & (m_returnedMem->m_sz - 1)];
    if ( v7[4] == p->data )
    {
      (*(void (__fastcall **)(AgAudioChannelData **))&(*v7)->m_position.m_x)(v7);
      ++v5;
      v8 = --m_returnedMem->m_write;
      if ( v8 == m_read )
      {
        m_returnedMem->m_buffer[v8 & (m_returnedMem->m_sz - 1)] = (AgThreadPool::Job *)`AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex>::enumerate<_lambda_59c28db3580856550501c533fac68ba7_>'::`2'::zero;
        break;
      }
      m_returnedMem->m_buffer[m_read & (m_returnedMem->m_sz - 1)] = m_returnedMem->m_buffer[(m_returnedMem->m_sz - 1) & v8];
      m_returnedMem->m_buffer[m_returnedMem->m_write & (m_returnedMem->m_sz - 1)] = (AgThreadPool::Job *)`AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex>::enumerate<_lambda_59c28db3580856550501c533fac68ba7_>'::`2'::zero;
    }
    else
    {
      ++m_read;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&m_returnedMem->m_lock);
  v9 = this->m_working.m_buffer.m_returnedMem;
  EnterCriticalSection((LPCRITICAL_SECTION)&v9->m_lock);
  v10 = 0;
  for ( i = v9->m_read; i < v9->m_write; ++i )
  {
    v12 = (AgAudioChannelData **)v9->m_buffer[i & (v9->m_sz - 1)];
    if ( v12[4] == p->data )
    {
      (*(void (__fastcall **)(AgAudioChannelData **))&(*v12)->m_position.m_x)(v12);
      ++v10;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&v9->m_lock);
  return (unsigned int)(v10 + v5);
}

void __fastcall AgAudioManagerXAudio2::AgAudioManagerXAudio2(AgAudioManagerXAudio2 *this)
{
  AgAudioManager::AgAudioManager(this);
  this->__vftable = (AgAudioManagerXAudio2_vtbl *)&AgAudioManagerXAudio2::`vftable';
  AgThreadPool::AgThreadPool(&this->m_streamThread);
  this->m_xaudio2 = 0i64;
  this->m_masterVoice = 0i64;
  this->m_criticalError = 0;
  this->m_deviceChangedTimestamp = 0.0;
}

void __fastcall Scaleform::Render::SubImage::GetAsImage(std::_Wrap_alloc<std::allocator<AgString> > *this)
{
  ;
}

void __fastcall AgThreadPool::Job::~Job(AgThreadPool::Job *this)
{
  this->__vftable = (AgThreadPool::Job_vtbl *)&AgThreadPool::Job::`vftable';
}

__int64 __fastcall Concurrency::details::ResourceManager::Reference(Concurrency::details::ResourceManager *this)
{
  return (unsigned int)_InterlockedIncrement(&this->m_referenceCount);
}

void __fastcall EngineCallback::OnCriticalError(EngineCallback *this, HRESULT Error)
{
  LODWORD(AgSingleton<AgAudioManager>::ms_instance[46].__vftable) = 1;
}

__int64 __fastcall MMNotificationClient::OnDefaultDeviceChanged(
        MMNotificationClient *this,
        __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 flow,
        __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 role,
        const wchar_t *pwstrDeviceId)
{
  AgSingleton<AgAudioManager> *v4; // rbx

  if ( flow == eRender && role == eConsole )
  {
    v4 = AgSingleton<AgAudioManager>::ms_instance;
    *(double *)&v4[47].__vftable = AgClock::getSystemTime();
  }
  return 0i64;
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

__int64 __fastcall MMNotificationClient::QueryInterface(
        MMNotificationClient *this,
        const _GUID *riid,
        void **ppvInterface)
{
  __int64 result; // rax

  if ( !ppvInterface )
    return 2147500035i64;
  if ( *(_QWORD *)&IID_IUnknown.Data1 == *(_QWORD *)&riid->Data1
    && *(_QWORD *)IID_IUnknown.Data4 == *(_QWORD *)riid->Data4
    || *(_QWORD *)&GUID_7991eec9_7e89_4d85_8390_6c703cec60c0.Data1 == *(_QWORD *)&riid->Data1
    && *(_QWORD *)GUID_7991eec9_7e89_4d85_8390_6c703cec60c0.Data4 == *(_QWORD *)riid->Data4 )
  {
    this->AddRef(this);
    result = 0i64;
    *ppvInterface = this;
  }
  else
  {
    result = 2147500034i64;
    *ppvInterface = 0i64;
  }
  return result;
}

__int64 __fastcall MMNotificationClient::Release(MMNotificationClient *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(&this->_cRef);
  if ( !v1 )
    operator delete(this, 0x10ui64);
  return v1;
}

void __fastcall AgAudioManagerXAudio2::addStreamJob(AgAudioManagerXAudio2 *this, AgAudioChannelData *data)
{
  AgThreadPool::Job *v4; // rbx
  AgJobCompletion result; // [rsp+28h] [rbp-20h] BYREF

  v4 = (AgThreadPool::Job *)operator new(0x28ui64);
  if ( v4 )
  {
    v4->__vftable = (AgThreadPool::Job_vtbl *)&AgThreadPool::Job::`vftable';
    *(_QWORD *)&v4->m_callCompleteFunc = 0i64;
    v4->__vftable = (AgThreadPool::Job_vtbl *)&AudioStreamJob::`vftable';
    v4[1].__vftable = (AgThreadPool::Job_vtbl *)data;
  }
  else
  {
    v4 = 0i64;
  }
  if ( !data->m_streamGroup )
    data->m_streamGroup = AgThreadPool::getUniqueGroupID(&this->m_streamThread);
  v4->m_groupID = data->m_streamGroup;
  AgThreadPool::pushJob(&this->m_streamThread, &result, v4);
}

void __fastcall AgThreadPool::Job::cancel(AgThreadPool::Job *this)
{
  this->m_cancelled = 1;
}

void __fastcall AgAudioManagerXAudio2::cancelStreamJob(AgAudioManagerXAudio2 *this, AgAudioChannelData *data)
{
  AgThreadPool *p_m_streamThread; // rdi
  unsigned int m_streamGroup; // edx
  AgAudioManagerXAudio2::cancelStreamJob::__l2::<lambda_59c28db3580856550501c533fac68ba7> p; // [rsp+30h] [rbp+8h] BYREF

  p_m_streamThread = &this->m_streamThread;
  p.data = data;
  AgThreadPool::cancelJobs<_lambda_59c28db3580856550501c533fac68ba7_>(&this->m_streamThread, &p);
  m_streamGroup = data->m_streamGroup;
  if ( m_streamGroup )
    AgThreadPool::waitForGroup(p_m_streamThread, m_streamGroup);
}

IXAudio2 *__fastcall AgAudioManagerXAudio2::getXAudio2(AgAudioManagerXAudio2 *this)
{
  return this->m_xaudio2;
}

__int64 __fastcall AgAudioManagerXAudio2::initializeXAudio2(AgAudioManagerXAudio2 *this)
{
  int v2; // ebx
  unsigned int v3; // ebx
  unsigned int v4; // eax
  unsigned int v5; // ecx
  __int64 v6; // rdx
  unsigned int v7; // ecx
  LPVOID ppv; // [rsp+40h] [rbp-458h] BYREF
  char v10[1030]; // [rsp+50h] [rbp-448h] BYREF
  unsigned __int16 v11; // [rsp+456h] [rbp-42h]
  unsigned int v12; // [rsp+468h] [rbp-30h]

  if ( CoCreateInstance(
         &GUID_5a508685_a254_4fba_9b82_9a24b00306af,
         0i64,
         1u,
         &GUID_8bcf1f58_9fe7_4583_8ac6_e2adc465c8bb,
         &ppv) < 0 )
    return 0i64;
  v2 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64))(*(_QWORD *)ppv + 40i64))(ppv, 0i64, 0xFFFFFFFFi64);
  if ( v2 < 0 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16i64))(ppv);
  else
    this->m_xaudio2 = (IXAudio2 *)ppv;
  if ( v2 < 0 )
    return 0i64;
  if ( this->m_xaudio2->RegisterForCallbacks(this->m_xaudio2, &engineCallback) < 0 )
    return 0i64;
  v3 = 0;
  if ( this->m_xaudio2->CreateMasteringVoice(this->m_xaudio2, &this->m_masterVoice, 0, 48000u, 0, 0, 0i64) < 0 )
    return 0i64;
  this->m_xaudio2->GetDeviceDetails(this->m_xaudio2, 0, (XAUDIO2_DEVICE_DETAILS *)v10);
  v4 = v12;
  v5 = v11;
  this->m_numChannels = v11;
  this->m_channelMask = v4;
  if ( !v4 && v5 )
  {
    v6 = v5;
    do
    {
      v7 = 2 * v3 + 1;
      v3 = v7;
      --v6;
    }
    while ( v6 );
    this->m_channelMask = v7;
  }
  return 1i64;
}

__int64 __fastcall AgAudioManagerXAudio2::platformInitialize(AgAudioManagerXAudio2 *this)
{
  IID riid; // [rsp+30h] [rbp-38h] BYREF
  IID rclsid; // [rsp+40h] [rbp-28h] BYREF

  CoInitializeEx(0i64, 0);
  rclsid = GUID_bcde0395_e52f_467c_8e3d_c4579291692e;
  riid = GUID_a95664d2_9614_4f35_a746_de8db63617e6;
  CoCreateInstance(&rclsid, 0i64, 0x17u, &riid, (LPVOID *)&Enumerator);
  if ( Enumerator )
  {
    Enumerator->RegisterEndpointNotificationCallback(Enumerator, &NotificationClient);
    _InterlockedIncrement(&NotificationClient._cRef);
  }
  AgThreadPool::init(&this->m_streamThread, 0x40u, 1u, 0, 50, "AgAudioManagerXAudio2");
  return AgAudioManagerXAudio2::initializeXAudio2(this);
}

__int64 __fastcall AgAudioManagerXAudio2::platformPostFinalize(AgAudioManagerXAudio2 *this)
{
  if ( this->m_masterVoice )
    this->m_masterVoice = 0i64;
  if ( this->m_xaudio2 )
    this->m_xaudio2 = 0i64;
  if ( Enumerator )
  {
    Enumerator->UnregisterEndpointNotificationCallback(Enumerator, &NotificationClient);
    if ( _InterlockedExchangeAdd(&NotificationClient._cRef, 0xFFFFFFFF) == 1 )
      operator delete(&NotificationClient, 0x10ui64);
    Enumerator->Release(Enumerator);
    Enumerator = 0i64;
  }
  AgThreadPool::free(&this->m_streamThread);
  CoUninitialize();
  return 1i64;
}

__int64 __fastcall AgUser::isSignedIn(Concurrency::details::ThreadInternalContext *this)
{
  return 1i64;
}

void __fastcall AgAudioManagerXAudio2::platformUpdate(AgAudioManagerXAudio2 *this)
{
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *Myhead; // rax
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *Left; // rbx
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *Right; // rax
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *j; // rax
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *i; // rax

  if ( this->m_criticalError
    || this->m_deviceChangedTimestamp != 0.0 && AgClock::getSystemTime() - this->m_deviceChangedTimestamp > 0.5 )
  {
    Myhead = this->m_channels._Mypair._Myval2._Myval2._Myhead;
    Left = Myhead->_Left;
    if ( Myhead->_Left != Myhead )
    {
      do
      {
        AgAudioChannel::getInternalData(Left->_Myval.first)->m_sourceVoice = 0i64;
        if ( !Left->_Isnil )
        {
          Right = Left->_Right;
          if ( Right->_Isnil )
          {
            for ( i = Left->_Parent; !i->_Isnil; i = i->_Parent )
            {
              if ( Left != i->_Right )
                break;
              Left = i;
            }
            Left = i;
          }
          else
          {
            Left = Left->_Right;
            for ( j = Right->_Left; !j->_Isnil; j = j->_Left )
              Left = j;
          }
        }
      }
      while ( Left != this->m_channels._Mypair._Myval2._Myval2._Myhead );
    }
    if ( this->m_masterVoice )
      this->m_masterVoice = 0i64;
    if ( this->m_xaudio2 )
      this->m_xaudio2 = 0i64;
    AgThreadPool::cancelAllJobs(&this->m_streamThread);
    AgAudioManagerXAudio2::initializeXAudio2(this);
    this->m_criticalError = 0;
    this->m_deviceChangedTimestamp = 0.0;
  }
}

__int64 __fastcall AudioStreamJob::run(AudioStreamJob *this)
{
  IXAudio2SourceVoice *m_sourceVoice; // rcx
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  unsigned int bufsQueued[2]; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]

  if ( !LODWORD(AgSingleton<AgAudioManager>::ms_instance[46].__vftable)
    || *(double *)&AgSingleton<AgAudioManager>::ms_instance[47].__vftable == 0.0 )
  {
    m_sourceVoice = this->m_channelData->m_sourceVoice;
    if ( m_sourceVoice )
    {
      v4 = 0i64;
      *(_QWORD *)bufsQueued = 0i64;
      v6 = 0;
      m_sourceVoice->GetState(m_sourceVoice, (XAUDIO2_VOICE_STATE *)&v4);
      AgAudioChannelData::streamBuffer(this->m_channelData, bufsQueued[0]);
    }
  }
  return 1i64;
}

