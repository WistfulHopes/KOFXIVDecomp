#include "dev/silverware/git/src/platforms/shared/audio/xaudio2/agaudiochanneldataxaudio2.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/silverware/git/sdk/audio/agaudiomanager.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/silverware/git/sdk/agcondition.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "program files (x86)/microsoft directx sdk (june 2010)/include/xma2defs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/silverware/git/sdk/agcurve.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/audio/agaudiotypes.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft directx sdk (june 2010)/include/xaudio2.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "dev/silverware/git/sdk/audio/agaudioeffects.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/silverware/git/src/audio/agaudiochanneldata.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/silverware/git/src/platforms/shared/audio/xaudio2/agaudiomanagerxaudio2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/silverware/git/src/3rdparty/libvorbis-1.3.5/include/vorbis/vorbisfile.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/silverware/git/sdk/audio/agaudiochannel.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/silverware/git/sdk/agmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"

typedef long long ogg_int64_t;
typedef AgAudioManagerXAudio2 AgPlatformAudioManager;
typedef AgAudioChannelXAudio2 AgPlatformAudioChannel;
void AgVolumeArray::applyVolume(float volume); // 0x14065ED10
AgAudioChannel::AgAudioChannel(const long is3D, AgAudioSourceType type); // 0x14065E7B0
AgAudioChannel::~AgAudioChannel(); // 0x14065E9F0
AgAudioChannelBaseData::~AgAudioChannelBaseData(); // 0x14065EA70
AgAudioChannelData & AgAudioChannel::getInternalData(); // 0x14065ED30
void AgAudioChannel::update(AgAudioManager & manager); // 0x14065EFB0
void AgAudioChannel::play(unsigned long playCount); // 0x14065ED60
void AgAudioChannel::stop(); // 0x14065EEB0
long AgAudioChannel::getIsPlaying(); // 0x14065ED50
long AgAudioChannel::getIsFinished(); // 0x14065ED40
void AgAudioChannel::addAllEffects(AgAudioChannelData * data); // 0x14065ECC0
void AgAudioChannel::updateAllEffects(AgAudioChannelData * data); // 0x14065F140
void AgAudioChannel::removeAllEffects(AgAudioChannelData * data); // 0x14065EE60void __fastcall AgAudioChannel::AgAudioChannel(AgAudioChannel *this, const int is3D, AgAudioSourceType type)
{
  AgAudioChannelData *v6; // rdi
  AgAudioChannelData *v7; // rax
  AgAudioChannelData *v8; // rax

  v6 = 0i64;
  this->m_refCount = 0i64;
  this->__vftable = (AgAudioChannel_vtbl *)&AgAudioChannel::`vftable';
  this->m_internalData = 0i64;
  v7 = (AgAudioChannelData *)operator new(0x100ui64);
  if ( v7 )
  {
    AgAudioChannelData::AgAudioChannelData(v7);
    v6 = v8;
  }
  this->m_internalData = v6;
  v6->m_is3D = is3D;
  this->m_internalData->m_type = type;
}

void __fastcall AgAudioChannelBaseData::AgAudioChannelBaseData(AgAudioChannelBaseData *this)
{
  *(_QWORD *)&this->m_type = 0i64;
  *(_WORD *)&this->m_state = 0;
  this->m_dirtyFlags = 0;
  this->m_playCount = 1;
  this->m_position = AgVector3::Zero;
  this->m_pitch = 1.0;
  this->m_distanceSpread = 1.0;
  *(_QWORD *)&this->m_volume = 1065353216i64;
  *(_QWORD *)this->m_channelVolume.m_volumes = 0i64;
  *(_QWORD *)&this->m_channelVolume.m_volumes[2] = 0i64;
  *(_QWORD *)&this->m_channelVolume.m_volumes[4] = 0i64;
  *(_QWORD *)&this->m_channelVolume.m_volumes[6] = 0i64;
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->m_lock);
  this->m_commands._Mypair._Myval2._Myfirst = 0i64;
  this->m_commands._Mypair._Myval2._Mylast = 0i64;
  this->m_commands._Mypair._Myval2._Myend = 0i64;
  this->m_commandCursor = 0;
  this->m_effects._Mypair._Myval2._Myfirst = 0i64;
  this->m_effects._Mypair._Myval2._Mylast = 0i64;
  this->m_effects._Mypair._Myval2._Myend = 0i64;
}

void __fastcall AgAudioChannelData::AgAudioChannelData(AgAudioChannelData *this)
{
  AgAudioChannelBaseData::AgAudioChannelBaseData(&this->AgAudioChannelBaseData);
  this->__vftable = (AgAudioChannelData_vtbl *)&AgAudioChannelData::`vftable';
  this->m_source.m_ref = 0i64;
  this->m_source.m_ptr = 0i64;
  this->m_file.m_ref = 0i64;
  this->m_file.m_ptr = 0i64;
  this->m_loop = 0;
  this->m_stopped = 0;
  this->m_bytesLeftForLoop = -1;
  this->m_totalTime = 0.0;
  this->m_sourceVoice = 0i64;
  this->m_oggData = 0i64;
  this->m_streamGroup = 0;
}

void __fastcall std::vector<AgPointer<AgAudioEffect>>::~vector<AgPointer<AgAudioEffect>>(
        std::vector<AgPointer<AgAudioEffect>> *this)
{
  std::vector<AgPointer<AgAudioEffect>>::_Tidy(this);
}

void __fastcall std::vector<enum AgAudioChannelBaseData::Command>::~vector<enum AgAudioChannelBaseData::Command>(
        std::vector<enum AgAudioChannelBaseData::Command> *this)
{
  if ( this->_Mypair._Myval2._Myfirst )
  {
    std::_Wrap_alloc<std::allocator<enum extension::SoundConstants::LoadSpec>>::deallocate(
      (std::allocator<enum AgKeyboardButton> *)this,
      (AgKeyboardButton *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall AgAudioChannel::~AgAudioChannel(AgAudioChannel *this)
{
  AgAudioChannelData *m_internalData; // rbx

  this->__vftable = (AgAudioChannel_vtbl *)&AgAudioChannel::`vftable';
  m_internalData = this->m_internalData;
  if ( m_internalData )
  {
    AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&m_internalData->m_file);
    AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&m_internalData->m_source);
    AgAudioChannelBaseData::~AgAudioChannelBaseData(&m_internalData->AgAudioChannelBaseData);
    operator delete(m_internalData, 0x100ui64);
    this->m_internalData = 0i64;
  }
  else
  {
    this->m_internalData = 0i64;
  }
}

void __fastcall AgAudioChannelBaseData::~AgAudioChannelBaseData(AgAudioChannelBaseData *this)
{
  AgKeyboardButton *Myfirst; // rdx

  std::vector<AgPointer<AgAudioEffect>>::_Tidy(&this->m_effects);
  Myfirst = (AgKeyboardButton *)this->m_commands._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<enum extension::SoundConstants::LoadSpec>>::deallocate(
      (std::allocator<enum AgKeyboardButton> *)&this->m_commands,
      Myfirst,
      ((char *)this->m_commands._Mypair._Myval2._Myend - (char *)Myfirst) >> 2);
    this->m_commands._Mypair._Myval2._Myfirst = 0i64;
    this->m_commands._Mypair._Myval2._Mylast = 0i64;
    this->m_commands._Mypair._Myval2._Myend = 0i64;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->m_lock);
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall std::vector<enum AgAudioChannelBaseData::Command>::_Reallocate(
        std::vector<enum AgAudioChannelBaseData::Command> *this,
        unsigned __int64 _Count)
{
  AgKeyboardButton *v4; // rsi
  signed __int64 v5; // rdi

  v4 = std::allocator<enum AgAudioChannelBaseData::Command>::allocate(
         (std::allocator<enum AgKeyboardButton> *)this,
         _Count);
  memmove(
    v4,
    this->_Mypair._Myval2._Myfirst,
    (char *)this->_Mypair._Myval2._Mylast - (char *)this->_Mypair._Myval2._Myfirst);
  v5 = this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
    std::_Wrap_alloc<std::allocator<enum extension::SoundConstants::LoadSpec>>::deallocate(
      (std::allocator<enum AgKeyboardButton> *)this,
      (AgKeyboardButton *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  this->_Mypair._Myval2._Myend = (AgAudioChannelBaseData::Command *)&v4[_Count];
  this->_Mypair._Myval2._Mylast = (AgAudioChannelBaseData::Command *)&v4[v5];
  this->_Mypair._Myval2._Myfirst = (AgAudioChannelBaseData::Command *)v4;
}

void __fastcall std::vector<enum AgAudioChannelBaseData::Command>::_Reserve(
        std::vector<enum AgAudioChannelBaseData::Command> *this,
        unsigned __int64 _Count)
{
  AgAudioChannelBaseData::Command *Myend; // r10
  AgAudioChannelBaseData::Command *Mylast; // r8
  AgAudioChannelBaseData::Command *Myfirst; // rcx
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rcx

  Myend = this->_Mypair._Myval2._Myend;
  Mylast = this->_Mypair._Myval2._Mylast;
  if ( Myend - Mylast < _Count )
  {
    Myfirst = this->_Mypair._Myval2._Myfirst;
    v6 = Mylast - Myfirst;
    if ( 0x3FFFFFFFFFFFFFFFi64 - v6 < _Count )
      std::_Xlength_error("vector<T> too long");
    v7 = v6 + _Count;
    v8 = Myend - Myfirst;
    v9 = 0i64;
    if ( 0x3FFFFFFFFFFFFFFFi64 - (v8 >> 1) >= v8 )
      v9 = v8 + (v8 >> 1);
    if ( v9 >= v7 )
      v7 = v9;
    std::vector<enum AgAudioChannelBaseData::Command>::_Reallocate(this, v7);
  }
}

void __fastcall std::vector<AgPointer<AgAudioEffect>>::_Tidy(std::vector<AgPointer<AgAudioEffect>> *this)
{
  AgPointer<AgAudioEffect> *Myfirst; // rbx
  AgPointer<AgAudioEffect> *i; // rdi

  Myfirst = this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    for ( i = this->_Mypair._Myval2._Mylast; Myfirst != i; ++Myfirst )
      AgPointer<AgAudioEffect>::~AgPointer<AgAudioEffect>(Myfirst);
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)this,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall AgAudioChannel::addAllEffects(AgAudioChannel *this, AgAudioChannelData *data)
{
  AgAudioChannelData *m_internalData; // rax
  AgPointer<AgAudioEffect> *i; // rbx

  m_internalData = this->m_internalData;
  for ( i = m_internalData->m_effects._Mypair._Myval2._Myfirst; i != m_internalData->m_effects._Mypair._Myval2._Mylast; ++i )
  {
    i->m_ptr->add(i->m_ptr, m_internalData);
    m_internalData = this->m_internalData;
  }
}

AgKeyboardButton *__fastcall std::allocator<enum AgAudioChannelBaseData::Command>::allocate(
        std::allocator<enum AgKeyboardButton> *this,
        unsigned __int64 _Count)
{
  AgKeyboardButton *result; // rax
  unsigned __int64 v3; // rcx
  void *v4; // rax
  void *v5; // rcx

  if ( !_Count )
    return 0i64;
  if ( _Count > 0x3FFFFFFFFFFFFFFFi64 )
    std::_Xbad_alloc();
  v3 = 4 * _Count;
  if ( 4 * _Count < 0x1000 )
  {
    result = (AgKeyboardButton *)operator new(v3);
    if ( !result )
      invalid_parameter_noinfo_noreturn();
  }
  else
  {
    if ( v3 + 39 <= v3 )
      std::_Xbad_alloc();
    v4 = operator new(v3 + 39);
    v5 = v4;
    if ( !v4 )
      invalid_parameter_noinfo_noreturn();
    result = (AgKeyboardButton *)(((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0ui64);
    *((_QWORD *)result - 1) = v5;
  }
  return result;
}

// local variable allocation has failed, the output may be wrong!
void __fastcall AgVolumeArray::applyVolume(AgVolumeArray *this, double volume)
{
  __m128 v2; // xmm2

  v2 = _mm_shuffle_ps(*(__m128 *)&volume, *(__m128 *)&volume, 0);
  *(__m128 *)this->m_volumes = _mm_mul_ps(*(__m128 *)this->m_volumes, v2);
  *(__m128 *)&this->m_volumes[4] = _mm_mul_ps(*(__m128 *)&this->m_volumes[4], v2);
}

void __fastcall std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
        std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *this,
        AgDelegate1<AgUserUpdatedEvent const &,void> *_Ptr,
        unsigned __int64 _Count)
{
  void (__fastcall *m_pFunction)(detail::GenericClass *); // rax
  char *v4; // rdx

  if ( _Count > 0xFFFFFFFFFFFFFFFi64 )
    invalid_parameter_noinfo_noreturn();
  if ( 16 * _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    m_pFunction = _Ptr[-1].m_Closure.m_pFunction;
    if ( (AgDelegate1<AgUserUpdatedEvent const &,void> *)m_pFunction >= _Ptr )
      invalid_parameter_noinfo_noreturn();
    v4 = (char *)((char *)_Ptr - (char *)m_pFunction);
    if ( (unsigned __int64)v4 < 8 )
      invalid_parameter_noinfo_noreturn();
    if ( (unsigned __int64)v4 > 0x27 )
      invalid_parameter_noinfo_noreturn();
    _Ptr = (AgDelegate1<AgUserUpdatedEvent const &,void> *)m_pFunction;
  }
  operator delete(_Ptr);
}

void __fastcall std::_Wrap_alloc<std::allocator<enum extension::SoundConstants::LoadSpec>>::deallocate(
        std::allocator<enum AgKeyboardButton> *this,
        AgKeyboardButton *_Ptr,
        unsigned __int64 _Count)
{
  AgKeyboardButton *v3; // rax
  char *v4; // rdx

  if ( _Count > 0x3FFFFFFFFFFFFFFFi64 )
    invalid_parameter_noinfo_noreturn();
  if ( 4 * _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    v3 = (AgKeyboardButton *)*((_QWORD *)_Ptr - 1);
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

AgAudioChannelData *__fastcall AgAudioChannel::getInternalData(AgAudioChannel *this)
{
  return this->m_internalData;
}

_BOOL8 __fastcall AgAudioChannel::getIsFinished(AgAudioChannel *this)
{
  return (this->m_internalData->m_state & 1) == 0;
}

__int64 __fastcall AgAudioChannel::getIsPlaying(AgAudioChannel *this)
{
  return this->m_internalData->m_state & 1;
}

void __fastcall AgAudioChannel::play(AgAudioChannel *this, unsigned int playCount)
{
  AgMutex *p_m_lock; // rsi
  std::vector<enum AgAudioChannelBaseData::Command> *p_m_commands; // rbx
  AgAudioChannelBaseData::Command *Mylast; // rcx
  __int64 v7; // rdi
  AgAudioChannelBaseData::Command *v8; // rcx
  AgAudioChannelBaseData::Command *v9; // rax
  int v10; // [rsp+58h] [rbp+10h] BYREF

  p_m_lock = &this->m_internalData->m_lock;
  EnterCriticalSection((LPCRITICAL_SECTION)p_m_lock);
  this->m_internalData->m_state |= 1u;
  this->m_internalData->m_playCount = playCount;
  this->m_internalData->m_dirtyFlags &= ~0x20u;
  v10 = 0;
  p_m_commands = &this->m_internalData->m_commands;
  Mylast = this->m_internalData->m_commands._Mypair._Myval2._Mylast;
  if ( &v10 >= (int *)Mylast || p_m_commands->_Mypair._Myval2._Myfirst > (AgAudioChannelBaseData::Command *)&v10 )
  {
    if ( Mylast == this->m_internalData->m_commands._Mypair._Myval2._Myend )
      std::vector<enum AgAudioChannelBaseData::Command>::_Reserve(&this->m_internalData->m_commands, 1ui64);
    v9 = p_m_commands->_Mypair._Myval2._Mylast;
    if ( v9 )
      *v9 = Command_Play;
  }
  else
  {
    v7 = ((char *)&v10 - (char *)p_m_commands->_Mypair._Myval2._Myfirst) >> 2;
    if ( Mylast == p_m_commands->_Mypair._Myval2._Myend )
      std::vector<enum AgAudioChannelBaseData::Command>::_Reserve(p_m_commands, 1ui64);
    v8 = p_m_commands->_Mypair._Myval2._Mylast;
    if ( v8 )
      *v8 = p_m_commands->_Mypair._Myval2._Myfirst[v7];
  }
  ++p_m_commands->_Mypair._Myval2._Mylast;
  LeaveCriticalSection((LPCRITICAL_SECTION)p_m_lock);
}

void __fastcall AgAudioChannel::removeAllEffects(AgAudioChannel *this, AgAudioChannelData *data)
{
  AgAudioChannelData *m_internalData; // rax
  AgPointer<AgAudioEffect> *i; // rbx

  m_internalData = this->m_internalData;
  for ( i = m_internalData->m_effects._Mypair._Myval2._Myfirst; i != m_internalData->m_effects._Mypair._Myval2._Mylast; ++i )
  {
    i->m_ptr->remove(i->m_ptr, m_internalData);
    m_internalData = this->m_internalData;
  }
}

void __fastcall AgAudioChannel::stop(AgAudioChannel *this)
{
  AgMutex *p_m_lock; // rsi
  AgAudioChannelData *m_internalData; // rcx
  unsigned __int8 m_state; // al
  std::vector<enum AgAudioChannelBaseData::Command> *p_m_commands; // rbx
  AgAudioChannelBaseData::Command *Mylast; // rax
  __int64 v7; // rdi
  AgAudioChannelBaseData::Command *v8; // rcx
  AgAudioChannelBaseData::Command *v9; // rax
  int v10; // [rsp+50h] [rbp+8h] BYREF

  p_m_lock = &this->m_internalData->m_lock;
  EnterCriticalSection((LPCRITICAL_SECTION)p_m_lock);
  m_internalData = this->m_internalData;
  m_state = m_internalData->m_state;
  if ( (m_state & 1) != 0 )
  {
    m_internalData->m_state = m_state & 0xFE;
    v10 = 3;
    p_m_commands = &this->m_internalData->m_commands;
    Mylast = p_m_commands->_Mypair._Myval2._Mylast;
    if ( &v10 >= (int *)Mylast || p_m_commands->_Mypair._Myval2._Myfirst > (AgAudioChannelBaseData::Command *)&v10 )
    {
      if ( Mylast == p_m_commands->_Mypair._Myval2._Myend )
        std::vector<enum AgAudioChannelBaseData::Command>::_Reserve(p_m_commands, 1ui64);
      v9 = p_m_commands->_Mypair._Myval2._Mylast;
      if ( v9 )
        *v9 = Command_Stop;
    }
    else
    {
      v7 = ((char *)&v10 - (char *)p_m_commands->_Mypair._Myval2._Myfirst) >> 2;
      if ( Mylast == p_m_commands->_Mypair._Myval2._Myend )
        std::vector<enum AgAudioChannelBaseData::Command>::_Reserve(p_m_commands, 1ui64);
      v8 = p_m_commands->_Mypair._Myval2._Mylast;
      if ( v8 )
        *v8 = p_m_commands->_Mypair._Myval2._Myfirst[v7];
    }
    ++p_m_commands->_Mypair._Myval2._Mylast;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)p_m_lock);
}

void __fastcall AgAudioChannel::update(AgAudioChannel *this, AgAudioManager *manager)
{
  AgMutex *p_m_lock; // rbp
  unsigned int v5; // ebx
  std::vector<enum AgAudioChannelBaseData::Command> *p_m_commands; // rcx
  __int64 v7; // rdx
  AgAudioChannelBaseData::Command v8; // edx
  __int32 v9; // edx
  __int32 v10; // edx
  AgAudioChannelData *m_internalData; // rax
  AgPointer<AgAudioEffect> *Myfirst; // rbx
  AgAudioChannelData *v13; // rdx

  p_m_lock = &this->m_internalData->m_lock;
  EnterCriticalSection((LPCRITICAL_SECTION)p_m_lock);
  AgAudioChannelXAudio2::_update((AgAudioChannelXAudio2 *)this);
  v5 = 0;
  p_m_commands = &this->m_internalData->m_commands;
  if ( this->m_internalData->m_commands._Mypair._Myval2._Mylast - p_m_commands->_Mypair._Myval2._Myfirst )
  {
    v7 = 0i64;
    do
    {
      v8 = p_m_commands->_Mypair._Myval2._Myfirst[v7];
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( v10 == 1 )
              AgAudioChannelXAudio2::_stop((AgAudioChannelXAudio2 *)this);
          }
          else
          {
            AgAudioChannelXAudio2::_resume((AgAudioChannelXAudio2 *)this);
          }
        }
        else
        {
          AgAudioChannelXAudio2::_pause((AgAudioChannelXAudio2 *)this);
        }
      }
      else
      {
        AgAudioChannelXAudio2::_play((AgAudioChannelXAudio2 *)this, (AgAudioManagerXAudio2 *)manager);
      }
      ++v5;
      p_m_commands = &this->m_internalData->m_commands;
      v7 = v5;
    }
    while ( v5 < (unsigned __int64)(this->m_internalData->m_commands._Mypair._Myval2._Mylast
                                  - p_m_commands->_Mypair._Myval2._Myfirst) );
  }
  this->m_internalData->m_commands._Mypair._Myval2._Mylast = this->m_internalData->m_commands._Mypair._Myval2._Myfirst;
  if ( (this->m_internalData->m_dirtyFlags & 0x9D) != 0 )
    AgAudioChannelXAudio2::updateVolume((AgAudioChannelXAudio2 *)this, (AgAudioManagerXAudio2 *)manager);
  if ( (this->m_internalData->m_dirtyFlags & 2) != 0 )
    AgAudioChannelXAudio2::updatePitch((AgAudioChannelXAudio2 *)this);
  if ( (this->m_internalData->m_dirtyFlags & 0x20) != 0 )
    AgAudioChannelXAudio2::updatePlayCount((AgAudioChannelXAudio2 *)this);
  if ( (this->m_internalData->m_dirtyFlags & 0x40) != 0 )
    AgAudioChannelXAudio2::updateElapsedTime((AgAudioChannelXAudio2 *)this);
  m_internalData = this->m_internalData;
  Myfirst = m_internalData->m_effects._Mypair._Myval2._Myfirst;
  if ( Myfirst != m_internalData->m_effects._Mypair._Myval2._Mylast )
  {
    v13 = this->m_internalData;
    do
    {
      Myfirst->m_ptr->update(Myfirst->m_ptr, v13);
      ++Myfirst;
      v13 = this->m_internalData;
    }
    while ( Myfirst != v13->m_effects._Mypair._Myval2._Mylast );
  }
  this->m_internalData->m_state = this->m_internalData->m_internalState;
  LeaveCriticalSection((LPCRITICAL_SECTION)p_m_lock);
}

void __fastcall AgAudioChannel::updateAllEffects(AgAudioChannel *this, AgAudioChannelData *data)
{
  AgAudioChannelData *m_internalData; // rax
  AgPointer<AgAudioEffect> *i; // rbx

  m_internalData = this->m_internalData;
  for ( i = m_internalData->m_effects._Mypair._Myval2._Myfirst; i != m_internalData->m_effects._Mypair._Myval2._Mylast; ++i )
  {
    i->m_ptr->update(i->m_ptr, m_internalData);
    m_internalData = this->m_internalData;
  }
}

