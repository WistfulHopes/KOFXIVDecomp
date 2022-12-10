#pragma once

class extension::SoundConstants
{
public:
	static const unsigned long Max_Supported_Play_Group; // 0xFFFFFFFFFFFFFFFF
	enum LoadSpec
	{
		LoadSpec_Resident = 0,
		LoadSpec_Scene = 1,
		LoadSpec_Streaming = 2,
		LoadSpec_OnTime = 3,
		LoadSpec_Internal_Use_Upper_Limit = 4,
	};
	enum PlayTag
	{
		PlayTag_Normal = 0,
		PlayTag_SystemVoice = 1,
		PlayTag_CharacterSE = 2,
		PlayTag_CharacterVoice = 3,
		PlayTag_HitEffect = 4,
		PlayTag_LoopSound = 5,
		PlayTag_Internal_Use_Upper_Limit = 6,
	};
	enum SoundFlagSet
	{
		SoundFlag_None = 0,
		SoundFlag_Reverb = 1,
		SoundFlag_NoReverb = 2,
		SoundFlag_PolyPlay = 4,
		SoundFlag_BGM = 8,
		SoundFlag_3DSound = 16,
		SoundFlag_3DPan = 32,
		SoundFlag_StageReverb = 64,
		SoundFlag_PitchBendEnable = 128,
	};
};
class extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition>
{
private:
	extension::exsound_detail::SoundBankElementDefinition * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition>(const extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> &);
	RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition>(extension::exsound_detail::SoundBankElementDefinition *, bool);
	RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition>(extension::exsound_detail::SoundBankElementDefinition *);
	RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition>();
	~RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition>();
	void swap(extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> &);
	extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> & operator=(const extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> &);
	void reset(extension::exsound_detail::SoundBankElementDefinition *);
	void resetWithAddRef(extension::exsound_detail::SoundBankElementDefinition *);
	extension::exsound_detail::SoundBankElementDefinition * get();
	extension::exsound_detail::SoundBankElementDefinition & operator*();
	extension::exsound_detail::SoundBankElementDefinition * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition const >
{
private:
	const extension::exsound_detail::SoundBankElementDefinition * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition const >(const extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition const > &);
	RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition const >(const extension::exsound_detail::SoundBankElementDefinition *, bool);
	RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition const >(const extension::exsound_detail::SoundBankElementDefinition *);
	RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition const >();
	~RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition const >();
	void swap(extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition const > &);
	extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition const > & operator=(const extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition const > &);
	void reset(const extension::exsound_detail::SoundBankElementDefinition *);
	void resetWithAddRef(const extension::exsound_detail::SoundBankElementDefinition *);
	const extension::exsound_detail::SoundBankElementDefinition * get();
	const extension::exsound_detail::SoundBankElementDefinition & operator*();
	const extension::exsound_detail::SoundBankElementDefinition * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>
{
private:
	extension::exsound_detail::PreloadedAudioSet * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>(const extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> &);
	RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>(extension::exsound_detail::PreloadedAudioSet *, bool);
	RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>(extension::exsound_detail::PreloadedAudioSet *);
	RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>();
	~RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>();
	void swap(extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> &);
	extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> & operator=(const extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> &);
	void reset(extension::exsound_detail::PreloadedAudioSet *);
	void resetWithAddRef(extension::exsound_detail::PreloadedAudioSet *);
	extension::exsound_detail::PreloadedAudioSet * get();
	extension::exsound_detail::PreloadedAudioSet & operator*();
	extension::exsound_detail::PreloadedAudioSet * operator->();
	bool isNull();
};
class extension::AsyncContent<extension::exsound_detail::SoundBankImpl> :
	extension::RefCountable<extension::AsyncContent<extension::exsound_detail::SoundBankImpl> >
{
public:
	AsyncContent<extension::exsound_detail::SoundBankImpl>(const std::string &);
	AsyncContent<extension::exsound_detail::SoundBankImpl>(const std::string &, const std::string &);
private:
	AsyncContent<extension::exsound_detail::SoundBankImpl>(const extension::AsyncContent<extension::exsound_detail::SoundBankImpl> &);
	extension::AsyncContent<extension::exsound_detail::SoundBankImpl> & operator=(const extension::AsyncContent<extension::exsound_detail::SoundBankImpl> &);
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x8
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_loadOptionString; // 0x28
	std::unique_ptr<extension::exsound_detail::SoundBankImpl,std::default_delete<extension::exsound_detail::SoundBankImpl> > m_data; // 0x48
	long m_errorCode; // 0x50
	extension::AsyncStatus m_status; // 0x58
	bool m_isDataReleased; // 0x60
	void initRawMember();
protected:
	~AsyncContent<extension::exsound_detail::SoundBankImpl>();
	class SharedPtr_t;
public:
	const std::string & name();
	const std::string & path();
	const std::string & optionString();
	bool isReady();
	void waitForReady();
	long getErrorCode();
	extension::exsound_detail::SoundBankImpl * getData();
	extension::exsound_detail::SoundBankImpl * releaseData();
	bool isDataReleased();
	void requestForCancel();
	void setResult(std::unique_ptr<extension::exsound_detail::SoundBankImpl,std::default_delete<extension::exsound_detail::SoundBankImpl> >);
	void setErrorResult(long);
	void setErrorResultWithData(long, std::unique_ptr<extension::exsound_detail::SoundBankImpl,std::default_delete<extension::exsound_detail::SoundBankImpl> >);
	bool isCancelRequested();
};
class extension::AsyncContent<CMediaSound> :
	extension::RefCountable<extension::AsyncContent<CMediaSound> >
{
public:
	AsyncContent<CMediaSound>(const std::string &);
	AsyncContent<CMediaSound>(const std::string &, const std::string &);
private:
	AsyncContent<CMediaSound>(const extension::AsyncContent<CMediaSound> &);
	extension::AsyncContent<CMediaSound> & operator=(const extension::AsyncContent<CMediaSound> &);
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x8
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_loadOptionString; // 0x28
	std::unique_ptr<CMediaSound,std::default_delete<CMediaSound> > m_data; // 0x48
	long m_errorCode; // 0x50
	extension::AsyncStatus m_status; // 0x58
	bool m_isDataReleased; // 0x60
	void initRawMember();
protected:
	~AsyncContent<CMediaSound>();
	class SharedPtr_t;
public:
	const std::string & name();
	const std::string & path();
	const std::string & optionString();
	bool isReady();
	void waitForReady();
	long getErrorCode();
	CMediaSound * getData();
	CMediaSound * releaseData();
	bool isDataReleased();
	void requestForCancel();
	void setResult(std::unique_ptr<CMediaSound,std::default_delete<CMediaSound> >);
	void setErrorResult(long);
	void setErrorResultWithData(long, std::unique_ptr<CMediaSound,std::default_delete<CMediaSound> >);
	bool isCancelRequested();
};
class extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> :
	extension::AsyncContentConstants,
	extension::FutureObjectSpec
{
	class Content_t;
	class Body;
	class BodySharedPtr_t;
	class BodyWeakPtr_t;
private:
	bool m_isNoCache; // 0x1
	extension::RefCountablePtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> m_body; // 0x8
public:
	BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>(const extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> &);
	BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>(extension::FutureObjectSpec::NoCache_t, const std::string &, const void *);
	BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>(const std::string &, const void *);
	BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>();
	~BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>();
	extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> & operator=(const extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> &);
	bool isEmpty();
	bool isReady();
	void waitForReady();
	const extension::exsound_detail::SoundBankImpl * get();
	bool hasData();
	extension::AsyncContentConstants::ErrorCode getErrorCode();
	const char * getErrorString();
	void reset();
	void dispose();
	extension::exsound_detail::SoundBankImpl * releaseData();
	extension::exsound_detail::SoundBankImpl * operator->();
	extension::exsound_detail::SoundBankImpl & operator*();
	extension::exsound_detail::SoundBankImpl * operator class extension::exsound_detail::SoundBankImpl *const();
	std::string contentPath();
	static extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> MakeDataHolder(extension::exsound_detail::SoundBankImpl *);
	class AssetCache;
private:
	static extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache s_cacheManager; // 0xFFFFFFFFFFFFFFFF
};
class extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> :
	extension::AsyncContentConstants,
	extension::FutureObjectSpec
{
	class Content_t;
	class Body;
	class BodySharedPtr_t;
	class BodyWeakPtr_t;
private:
	bool m_isNoCache; // 0x1
	extension::RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> m_body; // 0x8
public:
	BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>(const extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> &);
	BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>(extension::FutureObjectSpec::NoCache_t, const std::string &, const extension::exsound_detail::FutureSoundOption *);
	BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>(const std::string &, const extension::exsound_detail::FutureSoundOption *);
	BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>();
	~BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>();
	extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> & operator=(const extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> &);
	bool isEmpty();
	bool isReady();
	void waitForReady();
	const CMediaSound * get();
	bool hasData();
	extension::AsyncContentConstants::ErrorCode getErrorCode();
	const char * getErrorString();
	void reset();
	void dispose();
	CMediaSound * releaseData();
	CMediaSound * operator->();
	CMediaSound & operator*();
	CMediaSound * operator class CMediaSound *const();
	std::string contentPath();
	static extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> MakeDataHolder(CMediaSound *);
	class AssetCache;
private:
	static extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::AssetCache s_cacheManager; // 0xFFFFFFFFFFFFFFFF
};
class extension::SoundBank :
	extension::SoundConstants
{
	struct ChannelDef;
public:
	SoundBank(const extension::SoundBank &);
	SoundBank(const char *);
	SoundBank();
	~SoundBank();
	bool isEmpty();
	bool isReady();
	bool hasData();
	long count();
	void load(const char *);
	void dispose();
	bool isLoadComplete();
private:
	extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> m_bankImpl; // 0x0
public:
	extension::SoundBank & operator=(const extension::SoundBank &);
};
class extension::SoundSource
{
public:
	SoundSource(const extension::SoundSource &);
	SoundSource();
	~SoundSource();
	extension::SoundSource & operator=(const extension::SoundSource &);
	bool isNull();
	bool isLoadComplete();
	bool isLoadError();
	std::string getAudioFilePath();
	CMediaSound * getSound();
	bool isSameBankElement(const extension::SoundSource &);
	float lockTime();
	long priority();
	unsigned long soundFlags();
	float baseVolume();
	const extension::exsound_detail::SoundChannelDefinition & channelDef();
	const extension::exsound_detail::SoundBankElementDefinition * elementDef();
	void setToNull();
	float pitchBendFrequencyScale();
	bool isEndlessLoopSound();
	bool isStereoChange();
private:
	extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition const > m_elementDef; // 0x0
	extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> m_sound; // 0x8
	float m_lockTime; // 0x18
	float m_baseVolume; // 0x1C
	float m_pitchBendFrequencyScale; // 0x20
	long m_priority; // 0x24
	unsigned long m_soundFlags; // 0x28
	bool m_bStereoChange; // 0x2C
};
class extension::SoundObject
{
public:
	SoundObject(extension::SoundObject &);
	SoundObject(const extension::SoundObject &);
	SoundObject();
	void setPosition(const OGLVec3 &);
	void setPan3D(float);
	void setDistanceAttenuationBaseLength(float);
	void setPanPositionFunc(std::function<float __cdecl(void)>);
private:
	extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector> m_runtimeEffector; // 0x0
public:
	~SoundObject();
	extension::SoundObject & operator=(extension::SoundObject &);
	extension::SoundObject & operator=(const extension::SoundObject &);
};
class std::function<float __cdecl(void)> :
	std::_Func_class<float>
{
	class _Mybase;
	class _Myt;
public:
	function<float __cdecl(void)>(std::function<float __cdecl(void)> &);
	function<float __cdecl(void)>(const std::function<float __cdecl(void)> &);
	function<float __cdecl(void)>(void *);
	function<float __cdecl(void)>();
	~function<float __cdecl(void)>();
	std::function<float __cdecl(void)> & operator=(void *);
	std::function<float __cdecl(void)> & operator=(std::function<float __cdecl(void)> &);
	std::function<float __cdecl(void)> & operator=(const std::function<float __cdecl(void)> &);
	void swap(std::function<float __cdecl(void)> &);
	bool operator bool();
	const type_info & target_type();
};
class extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>
{
private:
	extension::exsound_detail::RuntimeEffector * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::exsound_detail::RuntimeEffector>(const extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector> &);
	RefCountablePtr<extension::exsound_detail::RuntimeEffector>(extension::exsound_detail::RuntimeEffector *, bool);
	RefCountablePtr<extension::exsound_detail::RuntimeEffector>(extension::exsound_detail::RuntimeEffector *);
	RefCountablePtr<extension::exsound_detail::RuntimeEffector>();
	~RefCountablePtr<extension::exsound_detail::RuntimeEffector>();
	void swap(extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector> &);
	extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector> & operator=(const extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector> &);
	void reset(extension::exsound_detail::RuntimeEffector *);
	void resetWithAddRef(extension::exsound_detail::RuntimeEffector *);
	extension::exsound_detail::RuntimeEffector * get();
	extension::exsound_detail::RuntimeEffector & operator*();
	extension::exsound_detail::RuntimeEffector * operator->();
	bool isNull();
};
struct extension::SoundOneshotParameters
{
	SoundOneshotParameters();
	static const extension::SoundOneshotParameters DefaultValue; // 0xFFFFFFFFFFFFFFFF
	long priority; // 0x0
	float expressionVolume; // 0x4
	unsigned long userTag; // 0x8
	long audioSelect; // 0xC
	long pitchBendCent; // 0x10
	long pitchBendRandomRange; // 0x14
	void setPitchBendRandom(long);
	long getPitchBendRandom();
	bool forceReverb; // 0x18
	bool forceStageReverb; // 0x19
	bool forcePitchBendEnable; // 0x1A
	bool stereoChange; // 0x1B
};
class extension::SoundList :
	extension::SoundConstants
{
public:
	SoundList(const extension::SoundList &);
	SoundList();
	~SoundList();
	long bankCount();
	bool isEmpty();
	void dispose();
	void appendBankToList(const extension::SoundBank &);
	void removeLastFromList();
	void appendBankToListOnlyResident(const extension::SoundBank &);
	void removeBankFromList(const extension::SoundBank &);
	void removeLastBankFromList();
	void copyList(const extension::SoundList &);
	void makeList(const extension::SoundBank &);
	void makeListOnlyResident(const extension::SoundBank &);
	bool isLoadComplete();
	long count();
	bool isValidIndex(long);
	void setPlayGroup(extension::SoundConstants::PlayTag, unsigned long);
	void resetPlayGroup();
	bool playBGM(long, float, float, bool);
	bool playBGMByName(const extension::SoundHashKey &, float, float, bool);
	bool playBGMByName(const char *, float, float, bool);
	void stopBGM(float);
	bool playSE(const extension::SoundObject &, long, const extension::SoundOneshotParameters *);
	bool playSE(long, const extension::SoundOneshotParameters *);
	bool playSEByName(const extension::SoundObject &, const extension::SoundHashKey &, const extension::SoundOneshotParameters *);
	bool playSEByName(const extension::SoundHashKey &, const extension::SoundOneshotParameters *);
	bool playSEByName(const extension::SoundObject &, const char *, const extension::SoundOneshotParameters *);
	bool playSEByName(const char *, const extension::SoundOneshotParameters *);
	bool isPlayingSE(const extension::SoundObject &, long);
	bool isPlayingSE(long);
	bool isPlayingSEByName(const extension::SoundObject &, const extension::SoundHashKey &);
	bool isPlayingSEByName(const extension::SoundHashKey &);
	bool isPlayingSEByName(const extension::SoundObject &, const char *);
	bool isPlayingSEByName(const char *);
	bool stopSE(long, float);
	void stopSE(float);
	bool stopSEByName(const extension::SoundHashKey &, float);
	bool stopSEByName(const char *, float);
	bool stopUserTagedSE(long, unsigned long, float);
	bool stopUserTagedSEByName(const extension::SoundHashKey &, unsigned long, float);
	bool stopUserTagedSEByName(const char *, unsigned long, float);
	long findIndexByName(const extension::SoundHashKey &);
	long findIndexByName(const char *);
	const char * getName(long);
	extension::SoundHashKey getNameKey(long);
	bool isBGM(long);
	bool isEndlessLoop(const extension::SoundHashKey &, const extension::SoundOneshotParameters *);
	enum MediaSetLoadOption
	{
		MediaSetLoad_OnlyResident = 1,
		MediaSetLoad_Normal = 3,
	};
	class FutureSoundBankImpl;
	class PreloadedSound;
	class LazyMediaSetBuildJob;
	class BankContent;
private:
	void appendBankToListImpl(const extension::SoundBank &, extension::SoundList::MediaSetLoadOption);
	const extension::SoundList::BankContent * convertIndex(long &);
	const extension::SoundList::BankContent * resolveName(const extension::SoundHashKey &, long &);
	bool playBGMImpl(const extension::SoundSource &, float, float, bool);
	bool playSEImpl(extension::SoundSource &, const extension::SoundOneshotParameters &, const extension::SoundObject *);
	bool isPlayingSEImpl(const extension::SoundSource &, const extension::SoundObject *);
	bool stopSEImpl(const extension::SoundSource &, unsigned long, float);
	extension::SoundSource createSoundSource(const extension::SoundHashKey &, long);
	extension::SoundSource createSoundSource(long, long);
	std::vector<extension::SoundList::BankContent,std::allocator<extension::SoundList::BankContent> > m_bankContents; // 0x0
	unsigned long m_playGroupMapping[6]; // 0x18
public:
	extension::SoundList & operator=(const extension::SoundList &);
};
class extension::SoundList::PreloadedSound :
	extension::RefCountable<extension::SoundList::PreloadedSound>
{
public:
	PreloadedSound();
private:
	PreloadedSound(const extension::SoundList::PreloadedSound &);
	extension::SoundList::PreloadedSound & operator=(const extension::SoundList::PreloadedSound &);
	~PreloadedSound();
public:
	void setLoadResult(std::vector<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > &);
	bool isLoadComplete();
	extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> getAudioSet(long);
private:
	extension::AtomicInt m_flgNil; // 0x8
	std::vector<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > m_mediaSets; // 0x10
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > > m_loadedPoint; // 0x28
};
class extension::RefCountable<extension::SoundList::PreloadedSound>
{
private:
	extension::AtomicInt m_refCount; // 0x0
	void addRef();
	void release();
protected:
	RefCountable<extension::SoundList::PreloadedSound>(const extension::RefCountable<extension::SoundList::PreloadedSound> &);
public:
	RefCountable<extension::SoundList::PreloadedSound>();
protected:
	extension::RefCountable<extension::SoundList::PreloadedSound> & operator=(const extension::RefCountable<extension::SoundList::PreloadedSound> &);
	~RefCountable<extension::SoundList::PreloadedSound>();
};
class std::vector<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > :
	std::_Vector_alloc<std::_Vec_base_types<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> pointer;
	typedef const extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> const_pointer;
	typedef extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> reference;
	typedef const extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > >(std::initializer_list<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> >, const std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > &);
	vector<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > >(std::vector<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > &, const std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > &);
	vector<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > >(std::vector<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > &);
	vector<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > >(const std::vector<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > &, const std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > &);
	vector<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > >(const std::vector<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > &);
	vector<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > >(unsigned long long, const extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> &, const std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > &);
	vector<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > >(unsigned long long, const extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> &);
	vector<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > >(unsigned long long);
	vector<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > >(const std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > &);
	vector<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > >();
	void _Construct_n(unsigned long long, const extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> *);
	std::vector<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > & operator=(const std::vector<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > &);
	std::vector<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > & operator=(std::initializer_list<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> >);
	std::vector<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > & operator=(std::vector<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > &);
	void _Assign_rv(std::vector<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > &);
	void _Assign_rv(std::vector<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > &, std::integral_constant<bool,1>);
	void push_back(const extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> &);
	void push_back(extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > >, unsigned long long, const extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > >, const extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > >, std::initializer_list<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > >, extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> &);
	void assign(unsigned long long, const extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> &);
	void assign(std::initializer_list<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> >);
	~vector<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > get_allocator();
	extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> & at(unsigned long long);
	const extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> & at(unsigned long long);
	extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> & operator[](unsigned long long);
	const extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> & operator[](unsigned long long);
	const extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> * data();
	extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> * data();
	const extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> & front();
	extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> & front();
	const extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> & back();
	extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> *, extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > >, unsigned long long, const extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> &);
	extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> * _Ufill(extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> *, unsigned long long, const extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> *, extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> *);
};
class extension::SoundList::BankContent
{
public:
	extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> m_bankImpl; // 0x0
	extension::RefCountablePtr<extension::SoundList::PreloadedSound> m_preloadSounds; // 0x10
	BankContent(extension::SoundList::BankContent &);
	BankContent(const extension::SoundList::BankContent &);
	BankContent(const extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> &, extension::SoundList::MediaSetLoadOption);
	bool isLoadComplete();
	long count();
	bool isValidIndex(long);
	long findIndexByName(const extension::SoundHashKey &);
	const char * getName(long);
	extension::SoundHashKey getNameKey(long);
	extension::SoundSource createSoundSource(long, long);
private:
	void loadMedias(extension::SoundList::MediaSetLoadOption);
public:
	~BankContent();
	extension::SoundList::BankContent & operator=(extension::SoundList::BankContent &);
	extension::SoundList::BankContent & operator=(const extension::SoundList::BankContent &);
};
class extension::RefCountablePtr<extension::SoundList::PreloadedSound>
{
private:
	extension::SoundList::PreloadedSound * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::SoundList::PreloadedSound>(const extension::RefCountablePtr<extension::SoundList::PreloadedSound> &);
	RefCountablePtr<extension::SoundList::PreloadedSound>(extension::SoundList::PreloadedSound *, bool);
	RefCountablePtr<extension::SoundList::PreloadedSound>(extension::SoundList::PreloadedSound *);
	RefCountablePtr<extension::SoundList::PreloadedSound>();
	~RefCountablePtr<extension::SoundList::PreloadedSound>();
	void swap(extension::RefCountablePtr<extension::SoundList::PreloadedSound> &);
	extension::RefCountablePtr<extension::SoundList::PreloadedSound> & operator=(const extension::RefCountablePtr<extension::SoundList::PreloadedSound> &);
	void reset(extension::SoundList::PreloadedSound *);
	void resetWithAddRef(extension::SoundList::PreloadedSound *);
	extension::SoundList::PreloadedSound * get();
	extension::SoundList::PreloadedSound & operator*();
	extension::SoundList::PreloadedSound * operator->();
	bool isNull();
};
class std::vector<extension::SoundList::BankContent,std::allocator<extension::SoundList::BankContent> > :
	std::_Vector_alloc<std::_Vec_base_types<extension::SoundList::BankContent,std::allocator<extension::SoundList::BankContent> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef extension::SoundList::BankContent pointer;
	typedef const extension::SoundList::BankContent const_pointer;
	typedef extension::SoundList::BankContent reference;
	typedef const extension::SoundList::BankContent const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<extension::SoundList::BankContent,std::allocator<extension::SoundList::BankContent> >(std::initializer_list<extension::SoundList::BankContent>, const std::allocator<extension::SoundList::BankContent> &);
	vector<extension::SoundList::BankContent,std::allocator<extension::SoundList::BankContent> >(std::vector<extension::SoundList::BankContent,std::allocator<extension::SoundList::BankContent> > &, const std::allocator<extension::SoundList::BankContent> &);
	vector<extension::SoundList::BankContent,std::allocator<extension::SoundList::BankContent> >(std::vector<extension::SoundList::BankContent,std::allocator<extension::SoundList::BankContent> > &);
	vector<extension::SoundList::BankContent,std::allocator<extension::SoundList::BankContent> >(const std::vector<extension::SoundList::BankContent,std::allocator<extension::SoundList::BankContent> > &, const std::allocator<extension::SoundList::BankContent> &);
	vector<extension::SoundList::BankContent,std::allocator<extension::SoundList::BankContent> >(const std::vector<extension::SoundList::BankContent,std::allocator<extension::SoundList::BankContent> > &);
	vector<extension::SoundList::BankContent,std::allocator<extension::SoundList::BankContent> >(unsigned long long, const extension::SoundList::BankContent &, const std::allocator<extension::SoundList::BankContent> &);
	vector<extension::SoundList::BankContent,std::allocator<extension::SoundList::BankContent> >(unsigned long long, const extension::SoundList::BankContent &);
	vector<extension::SoundList::BankContent,std::allocator<extension::SoundList::BankContent> >(unsigned long long);
	vector<extension::SoundList::BankContent,std::allocator<extension::SoundList::BankContent> >(const std::allocator<extension::SoundList::BankContent> &);
	vector<extension::SoundList::BankContent,std::allocator<extension::SoundList::BankContent> >();
	void _Construct_n(unsigned long long, const extension::SoundList::BankContent *);
	std::vector<extension::SoundList::BankContent,std::allocator<extension::SoundList::BankContent> > & operator=(const std::vector<extension::SoundList::BankContent,std::allocator<extension::SoundList::BankContent> > &);
	std::vector<extension::SoundList::BankContent,std::allocator<extension::SoundList::BankContent> > & operator=(std::initializer_list<extension::SoundList::BankContent>);
	std::vector<extension::SoundList::BankContent,std::allocator<extension::SoundList::BankContent> > & operator=(std::vector<extension::SoundList::BankContent,std::allocator<extension::SoundList::BankContent> > &);
	void _Assign_rv(std::vector<extension::SoundList::BankContent,std::allocator<extension::SoundList::BankContent> > &);
	void _Assign_rv(std::vector<extension::SoundList::BankContent,std::allocator<extension::SoundList::BankContent> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<extension::SoundList::BankContent,std::allocator<extension::SoundList::BankContent> > &, std::integral_constant<bool,1>);
	void push_back(const extension::SoundList::BankContent &);
	void push_back(extension::SoundList::BankContent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::SoundList::BankContent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundList::BankContent> > >, unsigned long long, const extension::SoundList::BankContent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::SoundList::BankContent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundList::BankContent> > >, const extension::SoundList::BankContent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::SoundList::BankContent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundList::BankContent> > >, std::initializer_list<extension::SoundList::BankContent>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::SoundList::BankContent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundList::BankContent> > >, extension::SoundList::BankContent &);
	void assign(unsigned long long, const extension::SoundList::BankContent &);
	void assign(std::initializer_list<extension::SoundList::BankContent>);
	~vector<extension::SoundList::BankContent,std::allocator<extension::SoundList::BankContent> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundList::BankContent> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::SoundList::BankContent> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundList::BankContent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::SoundList::BankContent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::SoundList::BankContent> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundList::BankContent> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundList::BankContent> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::SoundList::BankContent> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundList::BankContent> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::SoundList::BankContent> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundList::BankContent> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundList::BankContent> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundList::BankContent> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundList::BankContent> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const extension::SoundList::BankContent &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<extension::SoundList::BankContent> get_allocator();
	extension::SoundList::BankContent & at(unsigned long long);
	const extension::SoundList::BankContent & at(unsigned long long);
	extension::SoundList::BankContent & operator[](unsigned long long);
	const extension::SoundList::BankContent & operator[](unsigned long long);
	const extension::SoundList::BankContent * data();
	extension::SoundList::BankContent * data();
	const extension::SoundList::BankContent & front();
	extension::SoundList::BankContent & front();
	const extension::SoundList::BankContent & back();
	extension::SoundList::BankContent & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::SoundList::BankContent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundList::BankContent> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundList::BankContent> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::SoundList::BankContent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundList::BankContent> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<extension::SoundList::BankContent,std::allocator<extension::SoundList::BankContent> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(extension::SoundList::BankContent *, extension::SoundList::BankContent *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const extension::SoundList::BankContent *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::SoundList::BankContent> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundList::BankContent> > >, unsigned long long, const extension::SoundList::BankContent &);
	extension::SoundList::BankContent * _Ufill(extension::SoundList::BankContent *, unsigned long long, const extension::SoundList::BankContent *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(extension::SoundList::BankContent *, extension::SoundList::BankContent *);
};
struct extension::exsound_detail::SoundChannelDefinition
{
	float m_frontL; // 0x0
	float m_frontR; // 0x4
	float m_frontC; // 0x8
	float m_LFE; // 0xC
	float m_surroundL; // 0x10
	float m_surroundR; // 0x14
	float m_backL; // 0x18
	float m_backR; // 0x1C
	float m_gamePad; // 0x20
	SoundChannelDefinition();
	bool isOutSurround();
	bool isOutGamePad();
};
bool extension::exsound_detail::SoundChannelDefinition::isOutSurround(); // 0x1402BE4B0
struct extension::exsound_detail::SoundBankMediaDefinition
{
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_fileName; // 0x0
	float m_playRate; // 0x20
	float m_lockTime; // 0x24
	float m_loopStartTime; // 0x28
	float m_loopEndTime; // 0x2C
	long m_bankElementLoopCount; // 0x30
	SoundBankMediaDefinition(extension::exsound_detail::SoundBankMediaDefinition &);
	SoundBankMediaDefinition(const extension::exsound_detail::SoundBankMediaDefinition &);
	SoundBankMediaDefinition();
	~SoundBankMediaDefinition();
	extension::exsound_detail::SoundBankMediaDefinition & operator=(extension::exsound_detail::SoundBankMediaDefinition &);
	extension::exsound_detail::SoundBankMediaDefinition & operator=(const extension::exsound_detail::SoundBankMediaDefinition &);
};
class extension::RefCountable<extension::exsound_detail::SoundBankElementDefinition>
{
private:
	extension::AtomicInt m_refCount; // 0x0
	void addRef();
	void release();
protected:
	RefCountable<extension::exsound_detail::SoundBankElementDefinition>(const extension::RefCountable<extension::exsound_detail::SoundBankElementDefinition> &);
public:
	RefCountable<extension::exsound_detail::SoundBankElementDefinition>();
protected:
	extension::RefCountable<extension::exsound_detail::SoundBankElementDefinition> & operator=(const extension::RefCountable<extension::exsound_detail::SoundBankElementDefinition> &);
	~RefCountable<extension::exsound_detail::SoundBankElementDefinition>();
};
struct extension::exsound_detail::SoundBankElementDefinition :
	extension::RefCountable<extension::exsound_detail::SoundBankElementDefinition>
{
	SoundBankElementDefinition();
	SoundBankElementDefinition(const extension::exsound_detail::SoundBankElementDefinition &);
	extension::exsound_detail::SoundBankElementDefinition & operator=(const extension::exsound_detail::SoundBankElementDefinition &);
	~SoundBankElementDefinition();
	extension::SoundHashKey m_name; // 0x8
	extension::exsound_detail::SoundChannelDefinition m_channelDef; // 0x10
	extension::SoundConstants::PlayTag m_playTag; // 0x34
	extension::SoundConstants::LoadSpec m_loadSpec; // 0x38
	long m_priority; // 0x3C
	long m_loopCount; // 0x40
	unsigned long m_soundFlags; // 0x44
	std::vector<extension::exsound_detail::SoundBankMediaDefinition,std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > m_medias; // 0x48
	float m_mediaPlayRateSum; // 0x60
	void setFlag(extension::SoundConstants::SoundFlagSet, bool);
};
extension::exsound_detail::SoundBankElementDefinition::~SoundBankElementDefinition(); // 0x1402B0FD0
class std::vector<extension::exsound_detail::SoundBankMediaDefinition,std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > :
	std::_Vector_alloc<std::_Vec_base_types<extension::exsound_detail::SoundBankMediaDefinition,std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef extension::exsound_detail::SoundBankMediaDefinition pointer;
	typedef const extension::exsound_detail::SoundBankMediaDefinition const_pointer;
	typedef extension::exsound_detail::SoundBankMediaDefinition reference;
	typedef const extension::exsound_detail::SoundBankMediaDefinition const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<extension::exsound_detail::SoundBankMediaDefinition,std::allocator<extension::exsound_detail::SoundBankMediaDefinition> >(std::initializer_list<extension::exsound_detail::SoundBankMediaDefinition>, const std::allocator<extension::exsound_detail::SoundBankMediaDefinition> &);
	vector<extension::exsound_detail::SoundBankMediaDefinition,std::allocator<extension::exsound_detail::SoundBankMediaDefinition> >(std::vector<extension::exsound_detail::SoundBankMediaDefinition,std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > &, const std::allocator<extension::exsound_detail::SoundBankMediaDefinition> &);
	vector<extension::exsound_detail::SoundBankMediaDefinition,std::allocator<extension::exsound_detail::SoundBankMediaDefinition> >(std::vector<extension::exsound_detail::SoundBankMediaDefinition,std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > &);
	vector<extension::exsound_detail::SoundBankMediaDefinition,std::allocator<extension::exsound_detail::SoundBankMediaDefinition> >(const std::vector<extension::exsound_detail::SoundBankMediaDefinition,std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > &, const std::allocator<extension::exsound_detail::SoundBankMediaDefinition> &);
	vector<extension::exsound_detail::SoundBankMediaDefinition,std::allocator<extension::exsound_detail::SoundBankMediaDefinition> >(const std::vector<extension::exsound_detail::SoundBankMediaDefinition,std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > &);
	vector<extension::exsound_detail::SoundBankMediaDefinition,std::allocator<extension::exsound_detail::SoundBankMediaDefinition> >(unsigned long long, const extension::exsound_detail::SoundBankMediaDefinition &, const std::allocator<extension::exsound_detail::SoundBankMediaDefinition> &);
	vector<extension::exsound_detail::SoundBankMediaDefinition,std::allocator<extension::exsound_detail::SoundBankMediaDefinition> >(unsigned long long, const extension::exsound_detail::SoundBankMediaDefinition &);
	vector<extension::exsound_detail::SoundBankMediaDefinition,std::allocator<extension::exsound_detail::SoundBankMediaDefinition> >(unsigned long long);
	vector<extension::exsound_detail::SoundBankMediaDefinition,std::allocator<extension::exsound_detail::SoundBankMediaDefinition> >(const std::allocator<extension::exsound_detail::SoundBankMediaDefinition> &);
	vector<extension::exsound_detail::SoundBankMediaDefinition,std::allocator<extension::exsound_detail::SoundBankMediaDefinition> >();
	void _Construct_n(unsigned long long, const extension::exsound_detail::SoundBankMediaDefinition *);
	std::vector<extension::exsound_detail::SoundBankMediaDefinition,std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > & operator=(const std::vector<extension::exsound_detail::SoundBankMediaDefinition,std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > &);
	std::vector<extension::exsound_detail::SoundBankMediaDefinition,std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > & operator=(std::initializer_list<extension::exsound_detail::SoundBankMediaDefinition>);
	std::vector<extension::exsound_detail::SoundBankMediaDefinition,std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > & operator=(std::vector<extension::exsound_detail::SoundBankMediaDefinition,std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > &);
	void _Assign_rv(std::vector<extension::exsound_detail::SoundBankMediaDefinition,std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > &);
	void _Assign_rv(std::vector<extension::exsound_detail::SoundBankMediaDefinition,std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<extension::exsound_detail::SoundBankMediaDefinition,std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > &, std::integral_constant<bool,1>);
	void push_back(const extension::exsound_detail::SoundBankMediaDefinition &);
	void push_back(extension::exsound_detail::SoundBankMediaDefinition &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::SoundBankMediaDefinition> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::SoundBankMediaDefinition> > >, unsigned long long, const extension::exsound_detail::SoundBankMediaDefinition &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::SoundBankMediaDefinition> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::SoundBankMediaDefinition> > >, const extension::exsound_detail::SoundBankMediaDefinition &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::SoundBankMediaDefinition> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::SoundBankMediaDefinition> > >, std::initializer_list<extension::exsound_detail::SoundBankMediaDefinition>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::SoundBankMediaDefinition> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::SoundBankMediaDefinition> > >, extension::exsound_detail::SoundBankMediaDefinition &);
	void assign(unsigned long long, const extension::exsound_detail::SoundBankMediaDefinition &);
	void assign(std::initializer_list<extension::exsound_detail::SoundBankMediaDefinition>);
	~vector<extension::exsound_detail::SoundBankMediaDefinition,std::allocator<extension::exsound_detail::SoundBankMediaDefinition> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::SoundBankMediaDefinition> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::SoundBankMediaDefinition> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::SoundBankMediaDefinition> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::SoundBankMediaDefinition> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::SoundBankMediaDefinition> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::SoundBankMediaDefinition> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::SoundBankMediaDefinition> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::SoundBankMediaDefinition> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::SoundBankMediaDefinition> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::SoundBankMediaDefinition> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::SoundBankMediaDefinition> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::SoundBankMediaDefinition> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::SoundBankMediaDefinition> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::SoundBankMediaDefinition> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const extension::exsound_detail::SoundBankMediaDefinition &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<extension::exsound_detail::SoundBankMediaDefinition> get_allocator();
	extension::exsound_detail::SoundBankMediaDefinition & at(unsigned long long);
	const extension::exsound_detail::SoundBankMediaDefinition & at(unsigned long long);
	extension::exsound_detail::SoundBankMediaDefinition & operator[](unsigned long long);
	const extension::exsound_detail::SoundBankMediaDefinition & operator[](unsigned long long);
	const extension::exsound_detail::SoundBankMediaDefinition * data();
	extension::exsound_detail::SoundBankMediaDefinition * data();
	const extension::exsound_detail::SoundBankMediaDefinition & front();
	extension::exsound_detail::SoundBankMediaDefinition & front();
	const extension::exsound_detail::SoundBankMediaDefinition & back();
	extension::exsound_detail::SoundBankMediaDefinition & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::SoundBankMediaDefinition> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::SoundBankMediaDefinition> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::SoundBankMediaDefinition> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::SoundBankMediaDefinition> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::SoundBankMediaDefinition> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<extension::exsound_detail::SoundBankMediaDefinition,std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(extension::exsound_detail::SoundBankMediaDefinition *, extension::exsound_detail::SoundBankMediaDefinition *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const extension::exsound_detail::SoundBankMediaDefinition *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::SoundBankMediaDefinition> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::SoundBankMediaDefinition> > >, unsigned long long, const extension::exsound_detail::SoundBankMediaDefinition &);
	extension::exsound_detail::SoundBankMediaDefinition * _Ufill(extension::exsound_detail::SoundBankMediaDefinition *, unsigned long long, const extension::exsound_detail::SoundBankMediaDefinition *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(extension::exsound_detail::SoundBankMediaDefinition *, extension::exsound_detail::SoundBankMediaDefinition *);
};
class extension::exsound_detail::SoundBankImpl :
	extension::SoundConstants
{
private:
	SoundBankImpl();
	SoundBankImpl(const extension::exsound_detail::SoundBankImpl &);
	extension::exsound_detail::SoundBankImpl & operator=(const extension::exsound_detail::SoundBankImpl &);
	class LoadJob;
public:
	~SoundBankImpl();
	long count();
	bool isValidIndex(long);
	extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition const > elementPtrAt(long);
	extension::SoundConstants::LoadSpec getLoadSpec(long);
	const std::string & bankFileDir();
	extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> preloadAudio(long);
	bool isLoadComplete();
	long findIndexByName(const extension::SoundHashKey &);
	const char * getName(long);
	extension::SoundHashKey getNameKey(long);
	float getMasterVolume();
private:
	void clear();
	void clearMediaSetWeakTable();
	long loadData(const extension::BasicFutureObject<extension::AsyncFileImage,void> &);
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_bankFileDir; // 0x0
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_bankFileName; // 0x20
	float m_masterVolume; // 0x40
	std::vector<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > m_bankElements; // 0x48
	std::unordered_map<extension::SoundHashKey,int,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey>,std::allocator<std::pair<extension::SoundHashKey const ,int> > > m_nameIndexMap; // 0x60
	std::vector<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > m_residentSounds; // 0xA0
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> > > > m_loadedResidentSound; // 0xB8
	std::vector<extension::exsound_detail::PreloadedAudioSet *,std::allocator<extension::exsound_detail::PreloadedAudioSet *> > m_preloadedAudioWeakTable; // 0xC0
};
extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition const > extension::exsound_detail::SoundBankImpl::elementPtrAt(long index); // 0x1402B1060
class std::vector<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > :
	std::_Vector_alloc<std::_Vec_base_types<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> pointer;
	typedef const extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> const_pointer;
	typedef extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> reference;
	typedef const extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > >(std::initializer_list<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> >, const std::allocator<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > &);
	vector<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > >(std::vector<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > &, const std::allocator<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > &);
	vector<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > >(std::vector<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > &);
	vector<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > >(const std::vector<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > &, const std::allocator<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > &);
	vector<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > >(const std::vector<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > &);
	vector<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > >(unsigned long long, const extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> &, const std::allocator<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > &);
	vector<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > >(unsigned long long, const extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> &);
	vector<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > >(unsigned long long);
	vector<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > >(const std::allocator<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > &);
	vector<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > >();
	void _Construct_n(unsigned long long, const extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> *);
	std::vector<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > & operator=(const std::vector<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > &);
	std::vector<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > & operator=(std::initializer_list<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> >);
	std::vector<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > & operator=(std::vector<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > &);
	void _Assign_rv(std::vector<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > &);
	void _Assign_rv(std::vector<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > &, std::integral_constant<bool,1>);
	void push_back(const extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> &);
	void push_back(extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > >, unsigned long long, const extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > >, const extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > >, std::initializer_list<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > >, extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> &);
	void assign(unsigned long long, const extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> &);
	void assign(std::initializer_list<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> >);
	~vector<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > get_allocator();
	extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> & at(unsigned long long);
	const extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> & at(unsigned long long);
	extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> & operator[](unsigned long long);
	const extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> & operator[](unsigned long long);
	const extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> * data();
	extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> * data();
	const extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> & front();
	extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> & front();
	const extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> & back();
	extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition>,std::allocator<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> *, extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> > > >, unsigned long long, const extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> &);
	extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> * _Ufill(extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> *, unsigned long long, const extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> *, extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition> *);
};
class std::unordered_map<extension::SoundHashKey,int,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey>,std::allocator<std::pair<extension::SoundHashKey const ,int> > > :
	std::_Hash<std::_Umap_traits<extension::SoundHashKey,int,std::_Uhash_compare<extension::SoundHashKey,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey> >,std::allocator<std::pair<extension::SoundHashKey const ,int> >,0> >
{
	class _Myt;
	class _Mytraits;
	class _Mybase;
	struct hasher;
	class key_type;
	typedef long mapped_type;
	struct key_equal;
	class key_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<extension::SoundHashKey const ,int> pointer;
	typedef const std::pair<extension::SoundHashKey const ,int> const_pointer;
	typedef std::pair<extension::SoundHashKey const ,int> reference;
	typedef const std::pair<extension::SoundHashKey const ,int> const_reference;
	class iterator;
	class const_iterator;
	struct value_type;
	class local_iterator;
	class const_local_iterator;
	struct _Alty;
	struct _Pairib;
public:
	unordered_map<extension::SoundHashKey,int,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey>,std::allocator<std::pair<extension::SoundHashKey const ,int> > >(std::initializer_list<std::pair<extension::SoundHashKey const ,int> >, unsigned long long, const extension::SoundHashKey::Hasher &, const std::equal_to<extension::SoundHashKey> &, const std::allocator<std::pair<extension::SoundHashKey const ,int> > &);
	unordered_map<extension::SoundHashKey,int,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey>,std::allocator<std::pair<extension::SoundHashKey const ,int> > >(std::initializer_list<std::pair<extension::SoundHashKey const ,int> >, unsigned long long, const extension::SoundHashKey::Hasher &, const std::equal_to<extension::SoundHashKey> &);
	unordered_map<extension::SoundHashKey,int,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey>,std::allocator<std::pair<extension::SoundHashKey const ,int> > >(std::initializer_list<std::pair<extension::SoundHashKey const ,int> >, unsigned long long, const extension::SoundHashKey::Hasher &);
	unordered_map<extension::SoundHashKey,int,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey>,std::allocator<std::pair<extension::SoundHashKey const ,int> > >(std::initializer_list<std::pair<extension::SoundHashKey const ,int> >, unsigned long long);
	unordered_map<extension::SoundHashKey,int,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey>,std::allocator<std::pair<extension::SoundHashKey const ,int> > >(std::initializer_list<std::pair<extension::SoundHashKey const ,int> >);
	unordered_map<extension::SoundHashKey,int,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey>,std::allocator<std::pair<extension::SoundHashKey const ,int> > >(std::unordered_map<extension::SoundHashKey,int,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey>,std::allocator<std::pair<extension::SoundHashKey const ,int> > > &, const std::allocator<std::pair<extension::SoundHashKey const ,int> > &);
	unordered_map<extension::SoundHashKey,int,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey>,std::allocator<std::pair<extension::SoundHashKey const ,int> > >(std::unordered_map<extension::SoundHashKey,int,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey>,std::allocator<std::pair<extension::SoundHashKey const ,int> > > &);
	unordered_map<extension::SoundHashKey,int,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey>,std::allocator<std::pair<extension::SoundHashKey const ,int> > >(unsigned long long, const extension::SoundHashKey::Hasher &, const std::equal_to<extension::SoundHashKey> &, const std::allocator<std::pair<extension::SoundHashKey const ,int> > &);
	unordered_map<extension::SoundHashKey,int,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey>,std::allocator<std::pair<extension::SoundHashKey const ,int> > >(unsigned long long, const extension::SoundHashKey::Hasher &, const std::equal_to<extension::SoundHashKey> &);
	unordered_map<extension::SoundHashKey,int,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey>,std::allocator<std::pair<extension::SoundHashKey const ,int> > >(unsigned long long, const extension::SoundHashKey::Hasher &);
	unordered_map<extension::SoundHashKey,int,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey>,std::allocator<std::pair<extension::SoundHashKey const ,int> > >(unsigned long long);
	unordered_map<extension::SoundHashKey,int,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey>,std::allocator<std::pair<extension::SoundHashKey const ,int> > >(const std::unordered_map<extension::SoundHashKey,int,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey>,std::allocator<std::pair<extension::SoundHashKey const ,int> > > &, const std::allocator<std::pair<extension::SoundHashKey const ,int> > &);
	unordered_map<extension::SoundHashKey,int,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey>,std::allocator<std::pair<extension::SoundHashKey const ,int> > >(const std::unordered_map<extension::SoundHashKey,int,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey>,std::allocator<std::pair<extension::SoundHashKey const ,int> > > &);
	unordered_map<extension::SoundHashKey,int,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey>,std::allocator<std::pair<extension::SoundHashKey const ,int> > >(const std::allocator<std::pair<extension::SoundHashKey const ,int> > &);
	unordered_map<extension::SoundHashKey,int,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey>,std::allocator<std::pair<extension::SoundHashKey const ,int> > >();
	std::unordered_map<extension::SoundHashKey,int,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey>,std::allocator<std::pair<extension::SoundHashKey const ,int> > > & operator=(std::initializer_list<std::pair<extension::SoundHashKey const ,int> >);
	std::unordered_map<extension::SoundHashKey,int,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey>,std::allocator<std::pair<extension::SoundHashKey const ,int> > > & operator=(std::unordered_map<extension::SoundHashKey,int,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey>,std::allocator<std::pair<extension::SoundHashKey const ,int> > > &);
	std::unordered_map<extension::SoundHashKey,int,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey>,std::allocator<std::pair<extension::SoundHashKey const ,int> > > & operator=(const std::unordered_map<extension::SoundHashKey,int,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey>,std::allocator<std::pair<extension::SoundHashKey const ,int> > > &);
	long & operator[](const extension::SoundHashKey &);
	long & operator[](extension::SoundHashKey &);
	void swap(std::unordered_map<extension::SoundHashKey,int,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey>,std::allocator<std::pair<extension::SoundHashKey const ,int> > > &);
	extension::SoundHashKey::Hasher hash_function();
	std::equal_to<extension::SoundHashKey> key_eq();
	const long & at(const extension::SoundHashKey &);
	long & at(const extension::SoundHashKey &);
	~unordered_map<extension::SoundHashKey,int,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey>,std::allocator<std::pair<extension::SoundHashKey const ,int> > >();
};
class std::vector<extension::exsound_detail::PreloadedAudioSet *,std::allocator<extension::exsound_detail::PreloadedAudioSet *> > :
	std::_Vector_alloc<std::_Vec_base_types<extension::exsound_detail::PreloadedAudioSet *,std::allocator<extension::exsound_detail::PreloadedAudioSet *> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	typedef extension::exsound_detail::PreloadedAudioSet value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef extension::exsound_detail::PreloadedAudioSet * pointer;
	typedef extension::exsound_detail::PreloadedAudioSet * const_pointer;
	typedef extension::exsound_detail::PreloadedAudioSet * reference;
	typedef extension::exsound_detail::PreloadedAudioSet * const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<extension::exsound_detail::PreloadedAudioSet *,std::allocator<extension::exsound_detail::PreloadedAudioSet *> >(std::initializer_list<extension::exsound_detail::PreloadedAudioSet *>, const std::allocator<extension::exsound_detail::PreloadedAudioSet *> &);
	vector<extension::exsound_detail::PreloadedAudioSet *,std::allocator<extension::exsound_detail::PreloadedAudioSet *> >(std::vector<extension::exsound_detail::PreloadedAudioSet *,std::allocator<extension::exsound_detail::PreloadedAudioSet *> > &, const std::allocator<extension::exsound_detail::PreloadedAudioSet *> &);
	vector<extension::exsound_detail::PreloadedAudioSet *,std::allocator<extension::exsound_detail::PreloadedAudioSet *> >(std::vector<extension::exsound_detail::PreloadedAudioSet *,std::allocator<extension::exsound_detail::PreloadedAudioSet *> > &);
	vector<extension::exsound_detail::PreloadedAudioSet *,std::allocator<extension::exsound_detail::PreloadedAudioSet *> >(const std::vector<extension::exsound_detail::PreloadedAudioSet *,std::allocator<extension::exsound_detail::PreloadedAudioSet *> > &, const std::allocator<extension::exsound_detail::PreloadedAudioSet *> &);
	vector<extension::exsound_detail::PreloadedAudioSet *,std::allocator<extension::exsound_detail::PreloadedAudioSet *> >(const std::vector<extension::exsound_detail::PreloadedAudioSet *,std::allocator<extension::exsound_detail::PreloadedAudioSet *> > &);
	vector<extension::exsound_detail::PreloadedAudioSet *,std::allocator<extension::exsound_detail::PreloadedAudioSet *> >(unsigned long long, extension::exsound_detail::PreloadedAudioSet * &, const std::allocator<extension::exsound_detail::PreloadedAudioSet *> &);
	vector<extension::exsound_detail::PreloadedAudioSet *,std::allocator<extension::exsound_detail::PreloadedAudioSet *> >(unsigned long long, extension::exsound_detail::PreloadedAudioSet * &);
	vector<extension::exsound_detail::PreloadedAudioSet *,std::allocator<extension::exsound_detail::PreloadedAudioSet *> >(unsigned long long);
	vector<extension::exsound_detail::PreloadedAudioSet *,std::allocator<extension::exsound_detail::PreloadedAudioSet *> >(const std::allocator<extension::exsound_detail::PreloadedAudioSet *> &);
	vector<extension::exsound_detail::PreloadedAudioSet *,std::allocator<extension::exsound_detail::PreloadedAudioSet *> >();
	void _Construct_n(unsigned long long, extension::exsound_detail::PreloadedAudioSet * *);
	std::vector<extension::exsound_detail::PreloadedAudioSet *,std::allocator<extension::exsound_detail::PreloadedAudioSet *> > & operator=(const std::vector<extension::exsound_detail::PreloadedAudioSet *,std::allocator<extension::exsound_detail::PreloadedAudioSet *> > &);
	std::vector<extension::exsound_detail::PreloadedAudioSet *,std::allocator<extension::exsound_detail::PreloadedAudioSet *> > & operator=(std::initializer_list<extension::exsound_detail::PreloadedAudioSet *>);
	std::vector<extension::exsound_detail::PreloadedAudioSet *,std::allocator<extension::exsound_detail::PreloadedAudioSet *> > & operator=(std::vector<extension::exsound_detail::PreloadedAudioSet *,std::allocator<extension::exsound_detail::PreloadedAudioSet *> > &);
	void _Assign_rv(std::vector<extension::exsound_detail::PreloadedAudioSet *,std::allocator<extension::exsound_detail::PreloadedAudioSet *> > &);
	void _Assign_rv(std::vector<extension::exsound_detail::PreloadedAudioSet *,std::allocator<extension::exsound_detail::PreloadedAudioSet *> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<extension::exsound_detail::PreloadedAudioSet *,std::allocator<extension::exsound_detail::PreloadedAudioSet *> > &, std::integral_constant<bool,1>);
	void push_back(extension::exsound_detail::PreloadedAudioSet * &);
	void push_back(extension::exsound_detail::PreloadedAudioSet * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::PreloadedAudioSet *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::PreloadedAudioSet *> > >, unsigned long long, extension::exsound_detail::PreloadedAudioSet * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::PreloadedAudioSet *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::PreloadedAudioSet *> > >, extension::exsound_detail::PreloadedAudioSet * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::PreloadedAudioSet *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::PreloadedAudioSet *> > >, std::initializer_list<extension::exsound_detail::PreloadedAudioSet *>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::PreloadedAudioSet *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::PreloadedAudioSet *> > >, extension::exsound_detail::PreloadedAudioSet * &);
	void assign(unsigned long long, extension::exsound_detail::PreloadedAudioSet * &);
	void assign(std::initializer_list<extension::exsound_detail::PreloadedAudioSet *>);
	~vector<extension::exsound_detail::PreloadedAudioSet *,std::allocator<extension::exsound_detail::PreloadedAudioSet *> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::PreloadedAudioSet *> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::PreloadedAudioSet *> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::PreloadedAudioSet *> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::PreloadedAudioSet *> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::PreloadedAudioSet *> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::PreloadedAudioSet *> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::PreloadedAudioSet *> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::PreloadedAudioSet *> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::PreloadedAudioSet *> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::PreloadedAudioSet *> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::PreloadedAudioSet *> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::PreloadedAudioSet *> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::PreloadedAudioSet *> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::PreloadedAudioSet *> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, extension::exsound_detail::PreloadedAudioSet * &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<extension::exsound_detail::PreloadedAudioSet *> get_allocator();
	extension::exsound_detail::PreloadedAudioSet * & at(unsigned long long);
	extension::exsound_detail::PreloadedAudioSet * & at(unsigned long long);
	extension::exsound_detail::PreloadedAudioSet * & operator[](unsigned long long);
	extension::exsound_detail::PreloadedAudioSet * & operator[](unsigned long long);
	extension::exsound_detail::PreloadedAudioSet * * data();
	extension::exsound_detail::PreloadedAudioSet * * data();
	extension::exsound_detail::PreloadedAudioSet * & front();
	extension::exsound_detail::PreloadedAudioSet * & front();
	extension::exsound_detail::PreloadedAudioSet * & back();
	extension::exsound_detail::PreloadedAudioSet * & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::PreloadedAudioSet *> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::PreloadedAudioSet *> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::PreloadedAudioSet *> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::PreloadedAudioSet *> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::PreloadedAudioSet *> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<extension::exsound_detail::PreloadedAudioSet *,std::allocator<extension::exsound_detail::PreloadedAudioSet *> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(extension::exsound_detail::PreloadedAudioSet * *, extension::exsound_detail::PreloadedAudioSet * *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(extension::exsound_detail::PreloadedAudioSet * *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::PreloadedAudioSet *> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::exsound_detail::PreloadedAudioSet *> > >, unsigned long long, extension::exsound_detail::PreloadedAudioSet * &);
	extension::exsound_detail::PreloadedAudioSet * * _Ufill(extension::exsound_detail::PreloadedAudioSet * *, unsigned long long, extension::exsound_detail::PreloadedAudioSet * *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(extension::exsound_detail::PreloadedAudioSet * *, extension::exsound_detail::PreloadedAudioSet * *);
};
struct extension::exsound_detail::FutureSoundOption
{
	_SND_BANK_DATA data; // 0x0
	FutureSoundOption(const _SND_BANK_DATA &);
	FutureSoundOption();
	bool operator==(const extension::exsound_detail::FutureSoundOption &);
	std::string stringize();
};
class extension::exsound_detail::RuntimeEffector :
	extension::RefCountable<extension::exsound_detail::RuntimeEffector>
{
private:
	~RuntimeEffector();
public:
	RuntimeEffector(const extension::exsound_detail::RuntimeEffector &);
	RuntimeEffector();
	const OGLVec3 & soundObjectPosition();
	float pan3D();
	float distanceAttenuation();
	void setSoundObjectPosition(const OGLVec3 &);
	void setPan3D(float);
	void setDistanceAttenuation(float);
	void resetDirty();
	bool isDirty();
	bool isUseSoundPosition();
	void setPanPositionFunc(std::function<float __cdecl(void)>);
	bool isSameEffector(const extension::exsound_detail::RuntimeEffector &);
private:
	bool m_dirty; // 0x8
	bool m_useSoundPosition; // 0x9
	OGLVec3 m_soundObjectPosition; // 0xC
	float m_pan3D; // 0x18
	float m_distanceAttenuation; // 0x1C
	std::function<float __cdecl(void)> getPanPositionFunc; // 0x20
public:
	extension::exsound_detail::RuntimeEffector & operator=(const extension::exsound_detail::RuntimeEffector &);
};
class extension::RefCountable<extension::exsound_detail::RuntimeEffector>
{
private:
	extension::AtomicInt m_refCount; // 0x0
	void addRef();
	void release();
protected:
	RefCountable<extension::exsound_detail::RuntimeEffector>(const extension::RefCountable<extension::exsound_detail::RuntimeEffector> &);
public:
	RefCountable<extension::exsound_detail::RuntimeEffector>();
protected:
	extension::RefCountable<extension::exsound_detail::RuntimeEffector> & operator=(const extension::RefCountable<extension::exsound_detail::RuntimeEffector> &);
	~RefCountable<extension::exsound_detail::RuntimeEffector>();
};
struct extension::FutureObjectJobManager<extension::exsound_detail::SoundBankImpl,void>
{
	class Content_t;
	class ContentSharedPtr_t;
	static extension::RefCountablePtr<extension::AsyncContent<extension::exsound_detail::SoundBankImpl> > LoadStart(const std::string &, const std::string &, const void *);
	static std::string Stringize(const void *);
private:
	static void EnqueueAsyncJob(extension::RefCountablePtr<extension::AsyncContent<extension::exsound_detail::SoundBankImpl> >);
};
void extension::FutureObjectJobManager<extension::exsound_detail::SoundBankImpl,void>::EnqueueAsyncJob(extension::RefCountablePtr<extension::AsyncContent<extension::exsound_detail::SoundBankImpl> > shared); // 0x1402B1090
struct extension::FutureObjectJobManager<CMediaSound,extension::exsound_detail::FutureSoundOption>
{
	class Content_t;
	class ContentSharedPtr_t;
	static extension::RefCountablePtr<extension::AsyncContent<CMediaSound> > LoadStart(const std::string &, const std::string &, const extension::exsound_detail::FutureSoundOption *);
	static std::string Stringize(const extension::exsound_detail::FutureSoundOption *);
private:
	static void EnqueueAsyncJob(extension::RefCountablePtr<extension::AsyncContent<CMediaSound> >, const extension::exsound_detail::FutureSoundOption *);
};