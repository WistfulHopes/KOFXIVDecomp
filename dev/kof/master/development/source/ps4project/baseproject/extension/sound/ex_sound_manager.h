#pragma once

class extension::SoundManager :
	extension::SoundConstants
{
private:
	SoundManager();
	SoundManager(const extension::SoundManager &);
	extension::SoundManager & operator=(const extension::SoundManager &);
	static extension::SoundManager * the_instance; // 0xFFFFFFFFFFFFFFFF
public:
	static const long Nr_Players; // 0xFFFFFFFFFFFFFFFF
	static const long Max_Reverb_Repeat_Count; // 0xFFFFFFFFFFFFFFFF
	struct PlayInfo;
	static extension::SoundManager & Instance();
	~SoundManager();
	static void Initialize(CMediaManager *);
	static void Finalize();
	static void FrameUpdate();
	static void StopBGM(float);
	static void StopSE(float);
	static void StopGroupSE(unsigned long);
	static void StopUserTagedSE(unsigned long, float);
	static void StopAll();
	static void SetGlobalReverb(bool);
	static bool IsGlobalReverb();
	static void SetReverbParameter(long, long, long, long, long);
	static void SetStageReverbParameter(long, long, long, long, long);
	static void SetGlobalPadOutputMaskUsers(unsigned long);
	static void SetMasterVolumeBGM(float);
	static void SetBGMVolumeModulationRef(float *);
	static void SetMasterVolumeSE(float);
	static void SetGroupPlayerLimit(unsigned long, unsigned long);
	static void SetGroupSEVolumeRef(unsigned long, float *);
	static void SetGroupLocalPadOutputMaskUsers(unsigned long, unsigned long);
	static void SetMasterVolumePad(float);
	static void SetPadVolumeModulationRef(float *);
	static void PauseBGM(bool);
	static bool BGMPlay_IsPause();
	static bool BGMPlay_IsActive();
	static bool BGMPlay_IsLoadPending();
	static float BGMPlay_GetPosition();
	static bool BGMPlay_SetPosition(float);
	static float BGMPlay_GetLength();
	static bool SEPlay_IsLoadPending();
	static extension::SoundHashKey BGMPlay_GetSoundHashKey();
	static bool Debug_IsDisableAllRequest();
	static void Debug_SetIsDisableAllRequest(bool);
	static void Debug_DumpPlayInfo(std::vector<extension::SoundManager::PlayInfo,std::allocator<extension::SoundManager::PlayInfo> > &);
	void initialize(CMediaManager *);
	void finalize();
	bool isInitialized();
	void setMasterVolumeBGM(float);
	void setBGMVolumeModulationRef(float *);
	void setMasterVolumeSE(float);
	void setMasterVolumePad(float);
	void setPadVolumeModulationRef(float *);
	void set3DSoundListenerPosition(const OGLVec3 &, const OGLVec3 &);
	void setReverbParameter(long, long, long, long, long);
	void setStageReverbParameter(long, long, long, long, long);
	void setGlobalReverb(bool);
	bool isGlobalReverb();
	void setGlobalPadOutputMaskUsers(unsigned long);
	unsigned long getGlobalPadOutputMaskUsers();
	void setGroupPlayerLimit(unsigned long, unsigned long);
	void setGroupSEVolumeRef(unsigned long, float *);
	void setGroupLocalPadOutputMaskUsers(unsigned long, unsigned long);
	unsigned long getGroupLocalPadOutputMaskUsers(unsigned long);
	unsigned long getGroupEffectivePadOutputMaskUsers(unsigned long);
	bool playBGM(const extension::SoundSource &, float, float, bool);
	void stopBGM(float);
	void pauseBGM(bool);
	bool BGMPlay_isPause();
	struct SEPlayParams;
	bool playSE(const extension::SoundSource &, const extension::SoundManager::SEPlayParams &);
	bool isPlayingSE(const extension::SoundSource &, const extension::SoundManager::SEPlayParams &);
	struct SEStopParams;
	void stopSE(float);
	bool stopSE(const extension::SoundSource &, const extension::SoundManager::SEStopParams &);
	void stopGroupSE(unsigned long);
	void stopUserTagedSE(unsigned long, float);
	void stopAll();
	struct SEPauseParams;
	void pauseSE(bool);
	bool pauseSE(const extension::SoundSource &, const extension::SoundManager::SEPauseParams &);
	void pauseGroupSE(unsigned long, bool);
	void pauseUserTagedSE(unsigned long, bool);
	bool BGMPlay_isActive();
	bool BGMPlay_isLoadPending();
	float BGMPlay_getPosition();
	bool BGMPlay_setPosition(float);
	float BGMPlay_getLength();
	bool SEPlay_isLoadPending();
	extension::SoundHashKey BGMPlay_getSoundHashKey();
	bool HasSoundHashKey(const extension::SoundHashKey &);
	float GetSoundPlayTime(const extension::SoundHashKey &);
	bool Debug_isDisableAllRequest();
	void Debug_setIsDisableAllRequest(bool);
	void Debug_dumpPlayInfo(std::vector<extension::SoundManager::PlayInfo,std::allocator<extension::SoundManager::PlayInfo> > &);
	void frameUpdate();
	void setListenerPosition(const OGLVec3 &);
	static float NextRandom();
	enum PlayerFilterOption
	{
		PlayerFilter_None = 0,
		PlayerFilter_ExcludeBGM = 1,
		PlayerFilter_ExcludeSE = 2,
		PlayerFilter_OnlyBGM = 254,
		PlayerFilter_OnlySE = 253,
	};
	class Player;
	struct BGMRequest;
	struct SERequest;
	class SERequestFilter;
	struct Listener3DState;
	struct ReverbState;
	struct ManagerRealtimeState;
private:
	void initializeGroupPlayerLimits();
	void initializeGroupSEVolumeRefs();
	void initializePlayers();
	void finalizePlayers();
	void handleRequestedGlobalEffect();
	void handleRequestedBGM();
	void assignBGMPlayer(const extension::SoundSource &, float, float);
	static extension::SoundManager::SERequest MakeSERequestPlay(const extension::SoundSource &, const extension::SoundManager::SEPlayParams &);
	static extension::SoundManager::SERequest MakeSERequestStop(const extension::SoundSource &, const extension::SoundManager::SEStopParams &);
	static extension::SoundManager::SERequest MakeSERequestStopGroup(unsigned long);
	static extension::SoundManager::SERequest MakeSERequestStopUserTaged(unsigned long, float);
	static extension::SoundManager::SERequest MakeSERequestStopAll(float);
	static extension::SoundManager::SERequest MakeSERequestPause(const extension::SoundSource &, const extension::SoundManager::SEPauseParams &);
	static extension::SoundManager::SERequest MakeSERequestPauseGroup(unsigned long, bool);
	static extension::SoundManager::SERequest MakeSERequestPauseUserTaged(unsigned long, bool);
	static extension::SoundManager::SERequest MakeSERequestPauseAll(bool);
	void handleRequestedSE(const extension::SoundManager::SERequest &);
	void handleRequestedSE();
	void assignSEPlayer(const extension::SoundManager::SERequest &);
	void stopSEPlayer(const extension::SoundManager::SERequest &);
	bool excludeMultiSEPlayer(const extension::SoundManager::SERequest &);
	bool stopGroupLimitSEPlayer(unsigned long, long);
	void stopPlayer(float, extension::SoundManager::PlayerFilterOption);
	extension::SoundManager::Player * findPlayer(long, extension::SoundManager::PlayerFilterOption);
	void pausePlayer(extension::SoundManager::PlayerFilterOption, bool);
	static unsigned long long s_randomState; // 0xFFFFFFFFFFFFFFFF
	CMediaManager * m_mediaManager; // 0x0
	bool m_isMediaManagerOwner; // 0x8
	bool m_debugIsDisableAllRequest; // 0x9
	extension::SoundManager::ManagerRealtimeState m_rtState; // 0xC
	float m_masterVolumeBGM; // 0x5C
	float m_masterVolumeSE; // 0x60
	unsigned long m_globalPadOutputMaskUsers; // 0x64
	extension::SoundManager::Player * m_lastBGMPlayer; // 0x68
	extension::SoundManager::BGMRequest m_bgmRequest; // 0x70
	std::list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> > m_seRequests; // 0xB8
	std::list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> > m_seRequestsAudioLoadPending; // 0xC8
	unsigned long m_groupPlayerLimits[24]; // 0xD8
	float * m_groupSEVolumeRefs[24]; // 0x138
	float m_groupSEVolumeCombined[24]; // 0x1F8
	float * m_bgmVolumeModulationRef; // 0x258
	float m_bgmVolumeCombined; // 0x260
	float m_padMasterVolume; // 0x264
	float * m_padVolumeModulationRef; // 0x268
	float m_padVolumeCombined; // 0x270
	unsigned long m_groupLocalPadOutputMaskUsers[24]; // 0x274
	OGLVec3 m_vecListenerPosition; // 0x2D4
	std::unique_ptr<extension::SoundManager::Player [0],std::default_delete<extension::SoundManager::Player [0]> > m_players; // 0x2E0
	extension::ExSimpleMutex m_mutex; // 0x2E8
};
struct extension::SoundManager::PlayInfo
{
	bool IsPlaying; // 0x0
	bool IsBGM; // 0x1
	float PlayTime; // 0x4
	float LockTime; // 0x8
	float Volume; // 0xC
	unsigned long Group; // 0x10
	unsigned long UserTag; // 0x14
	extension::SoundHashKey SoundKey; // 0x18
	PlayInfo(extension::SoundManager::PlayInfo &);
	PlayInfo(const extension::SoundManager::PlayInfo &);
	PlayInfo();
	~PlayInfo();
	extension::SoundManager::PlayInfo & operator=(extension::SoundManager::PlayInfo &);
	extension::SoundManager::PlayInfo & operator=(const extension::SoundManager::PlayInfo &);
};
void extension::SoundManager::SetStageReverbParameter(long attenuationPercent, long delayTimeMsec, long repeatCount, long reflectionAttenuationPercent, long fluctuationDelayTimeMsec); // 0x14023F3E0
void extension::SoundManager::SetMasterVolumeBGM(float vol); // 0x14023F470
void extension::SoundManager::SetMasterVolumeSE(float vol); // 0x14023F510
void extension::SoundManager::SetMasterVolumePad(float vol); // 0x14023F5B0
bool extension::SoundManager::Debug_IsDisableAllRequest(); // 0x14023F650
class std::vector<extension::SoundManager::PlayInfo,std::allocator<extension::SoundManager::PlayInfo> > :
	std::_Vector_alloc<std::_Vec_base_types<extension::SoundManager::PlayInfo,std::allocator<extension::SoundManager::PlayInfo> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef extension::SoundManager::PlayInfo pointer;
	typedef const extension::SoundManager::PlayInfo const_pointer;
	typedef extension::SoundManager::PlayInfo reference;
	typedef const extension::SoundManager::PlayInfo const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<extension::SoundManager::PlayInfo,std::allocator<extension::SoundManager::PlayInfo> >(std::initializer_list<extension::SoundManager::PlayInfo>, const std::allocator<extension::SoundManager::PlayInfo> &);
	vector<extension::SoundManager::PlayInfo,std::allocator<extension::SoundManager::PlayInfo> >(std::vector<extension::SoundManager::PlayInfo,std::allocator<extension::SoundManager::PlayInfo> > &, const std::allocator<extension::SoundManager::PlayInfo> &);
	vector<extension::SoundManager::PlayInfo,std::allocator<extension::SoundManager::PlayInfo> >(std::vector<extension::SoundManager::PlayInfo,std::allocator<extension::SoundManager::PlayInfo> > &);
	vector<extension::SoundManager::PlayInfo,std::allocator<extension::SoundManager::PlayInfo> >(const std::vector<extension::SoundManager::PlayInfo,std::allocator<extension::SoundManager::PlayInfo> > &, const std::allocator<extension::SoundManager::PlayInfo> &);
	vector<extension::SoundManager::PlayInfo,std::allocator<extension::SoundManager::PlayInfo> >(const std::vector<extension::SoundManager::PlayInfo,std::allocator<extension::SoundManager::PlayInfo> > &);
	vector<extension::SoundManager::PlayInfo,std::allocator<extension::SoundManager::PlayInfo> >(unsigned long long, const extension::SoundManager::PlayInfo &, const std::allocator<extension::SoundManager::PlayInfo> &);
	vector<extension::SoundManager::PlayInfo,std::allocator<extension::SoundManager::PlayInfo> >(unsigned long long, const extension::SoundManager::PlayInfo &);
	vector<extension::SoundManager::PlayInfo,std::allocator<extension::SoundManager::PlayInfo> >(unsigned long long);
	vector<extension::SoundManager::PlayInfo,std::allocator<extension::SoundManager::PlayInfo> >(const std::allocator<extension::SoundManager::PlayInfo> &);
	vector<extension::SoundManager::PlayInfo,std::allocator<extension::SoundManager::PlayInfo> >();
	void _Construct_n(unsigned long long, const extension::SoundManager::PlayInfo *);
	std::vector<extension::SoundManager::PlayInfo,std::allocator<extension::SoundManager::PlayInfo> > & operator=(const std::vector<extension::SoundManager::PlayInfo,std::allocator<extension::SoundManager::PlayInfo> > &);
	std::vector<extension::SoundManager::PlayInfo,std::allocator<extension::SoundManager::PlayInfo> > & operator=(std::initializer_list<extension::SoundManager::PlayInfo>);
	std::vector<extension::SoundManager::PlayInfo,std::allocator<extension::SoundManager::PlayInfo> > & operator=(std::vector<extension::SoundManager::PlayInfo,std::allocator<extension::SoundManager::PlayInfo> > &);
	void _Assign_rv(std::vector<extension::SoundManager::PlayInfo,std::allocator<extension::SoundManager::PlayInfo> > &);
	void _Assign_rv(std::vector<extension::SoundManager::PlayInfo,std::allocator<extension::SoundManager::PlayInfo> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<extension::SoundManager::PlayInfo,std::allocator<extension::SoundManager::PlayInfo> > &, std::integral_constant<bool,1>);
	void push_back(const extension::SoundManager::PlayInfo &);
	void push_back(extension::SoundManager::PlayInfo &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::SoundManager::PlayInfo> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundManager::PlayInfo> > >, unsigned long long, const extension::SoundManager::PlayInfo &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::SoundManager::PlayInfo> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundManager::PlayInfo> > >, const extension::SoundManager::PlayInfo &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::SoundManager::PlayInfo> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundManager::PlayInfo> > >, std::initializer_list<extension::SoundManager::PlayInfo>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::SoundManager::PlayInfo> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundManager::PlayInfo> > >, extension::SoundManager::PlayInfo &);
	void assign(unsigned long long, const extension::SoundManager::PlayInfo &);
	void assign(std::initializer_list<extension::SoundManager::PlayInfo>);
	~vector<extension::SoundManager::PlayInfo,std::allocator<extension::SoundManager::PlayInfo> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundManager::PlayInfo> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::SoundManager::PlayInfo> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundManager::PlayInfo> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::SoundManager::PlayInfo> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::SoundManager::PlayInfo> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundManager::PlayInfo> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundManager::PlayInfo> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::SoundManager::PlayInfo> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundManager::PlayInfo> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::SoundManager::PlayInfo> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundManager::PlayInfo> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundManager::PlayInfo> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundManager::PlayInfo> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundManager::PlayInfo> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const extension::SoundManager::PlayInfo &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<extension::SoundManager::PlayInfo> get_allocator();
	extension::SoundManager::PlayInfo & at(unsigned long long);
	const extension::SoundManager::PlayInfo & at(unsigned long long);
	extension::SoundManager::PlayInfo & operator[](unsigned long long);
	const extension::SoundManager::PlayInfo & operator[](unsigned long long);
	const extension::SoundManager::PlayInfo * data();
	extension::SoundManager::PlayInfo * data();
	const extension::SoundManager::PlayInfo & front();
	extension::SoundManager::PlayInfo & front();
	const extension::SoundManager::PlayInfo & back();
	extension::SoundManager::PlayInfo & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::SoundManager::PlayInfo> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundManager::PlayInfo> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundManager::PlayInfo> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::SoundManager::PlayInfo> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundManager::PlayInfo> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<extension::SoundManager::PlayInfo,std::allocator<extension::SoundManager::PlayInfo> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(extension::SoundManager::PlayInfo *, extension::SoundManager::PlayInfo *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const extension::SoundManager::PlayInfo *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::SoundManager::PlayInfo> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::SoundManager::PlayInfo> > >, unsigned long long, const extension::SoundManager::PlayInfo &);
	extension::SoundManager::PlayInfo * _Ufill(extension::SoundManager::PlayInfo *, unsigned long long, const extension::SoundManager::PlayInfo *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(extension::SoundManager::PlayInfo *, extension::SoundManager::PlayInfo *);
};
struct extension::SoundManager::SEPlayParams
{
	extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector> m_runtimeEffector; // 0x0
	unsigned long m_playGroup; // 0x8
	float m_fadeTime; // 0xC
	unsigned long m_userTag; // 0x10
	SEPlayParams(extension::SoundManager::SEPlayParams &);
	SEPlayParams(const extension::SoundManager::SEPlayParams &);
	SEPlayParams();
	~SEPlayParams();
	extension::SoundManager::SEPlayParams & operator=(extension::SoundManager::SEPlayParams &);
	extension::SoundManager::SEPlayParams & operator=(const extension::SoundManager::SEPlayParams &);
};
struct extension::SoundManager::SEStopParams
{
	extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector> m_runtimeEffector; // 0x0
	unsigned long m_playGroup; // 0x8
	unsigned long m_userTagMask; // 0xC
	float m_fadeTime; // 0x10
	SEStopParams(extension::SoundManager::SEStopParams &);
	SEStopParams(const extension::SoundManager::SEStopParams &);
	SEStopParams();
	~SEStopParams();
	extension::SoundManager::SEStopParams & operator=(extension::SoundManager::SEStopParams &);
	extension::SoundManager::SEStopParams & operator=(const extension::SoundManager::SEStopParams &);
};
struct extension::SoundManager::SEPauseParams
{
	extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector> m_runtimeEffector; // 0x0
	unsigned long m_playGroup; // 0x8
	unsigned long m_userTagMask; // 0xC
	bool m_pause; // 0x10
	SEPauseParams(extension::SoundManager::SEPauseParams &);
	SEPauseParams(const extension::SoundManager::SEPauseParams &);
	SEPauseParams();
	~SEPauseParams();
	extension::SoundManager::SEPauseParams & operator=(extension::SoundManager::SEPauseParams &);
	extension::SoundManager::SEPauseParams & operator=(const extension::SoundManager::SEPauseParams &);
};
struct extension::SoundManager::BGMRequest
{
	enum PauseTag
	{
		Pause_None = 0,
		Pause_Stop = 1,
		Pause_Play = 2,
	};
	extension::SoundSource m_soundSource; // 0x0
	float m_fadeOutTime; // 0x30
	float m_fadeInTime; // 0x34
	float m_startTime; // 0x38
	bool m_reserved; // 0x3C
	bool m_nonStop; // 0x3D
	extension::SoundManager::BGMRequest::PauseTag m_pause; // 0x40
	BGMRequest(extension::SoundManager::BGMRequest &);
	BGMRequest(const extension::SoundManager::BGMRequest &);
	BGMRequest();
	void clear();
	~BGMRequest();
	extension::SoundManager::BGMRequest & operator=(extension::SoundManager::BGMRequest &);
	extension::SoundManager::BGMRequest & operator=(const extension::SoundManager::BGMRequest &);
};
void extension::SoundManager::BGMRequest::clear(); // 0x1402BE510
struct extension::SoundManager::SERequest
{
	static const unsigned long Stop_Group_Any; // 0xFFFFFFFFFFFFFFFF
	enum Tag
	{
		Tag_Play = 0,
		Tag_Stop = 1,
		Tag_PauseStop = 2,
		Tag_PausePlay = 3,
	};
	extension::SoundManager::SERequest::Tag m_tag; // 0x0
	extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector> m_runtimeEffector; // 0x8
	extension::SoundSource m_soundSource; // 0x10
	unsigned long m_playGroup; // 0x40
	unsigned long m_userTag; // 0x44
	float m_fadeTime; // 0x48
	SERequest(extension::SoundManager::SERequest &);
	SERequest(const extension::SoundManager::SERequest &);
	SERequest();
	~SERequest();
	extension::SoundManager::SERequest & operator=(extension::SoundManager::SERequest &);
	extension::SoundManager::SERequest & operator=(const extension::SoundManager::SERequest &);
};
struct extension::SoundManager::Listener3DState
{
	bool Dirty; // 0x0
	OGLVec3 Position; // 0x4
	OGLVec3 Direction; // 0x10
	Listener3DState(extension::SoundManager::Listener3DState &);
	Listener3DState(const extension::SoundManager::Listener3DState &);
	Listener3DState();
	void reset();
	void set(const OGLVec3 &, const OGLVec3 &);
};
struct extension::SoundManager::ReverbState
{
	float Attenuation; // 0x0
	long DelayTimeMsec; // 0x4
	long RepeatCount; // 0x8
	float ReflectionAttenuation; // 0xC
	long FluctuationTimeMsec; // 0x10
	bool Dirty; // 0x14
	ReverbState();
	void reset();
	void set(long, long, long, long, long);
};
struct extension::SoundManager::ManagerRealtimeState
{
	extension::SoundManager::Listener3DState listener3D; // 0x0
	extension::SoundManager::ReverbState reverb; // 0x1C
	extension::SoundManager::ReverbState stageReverb; // 0x34
	bool isGlobalReverb; // 0x4C
	ManagerRealtimeState(extension::SoundManager::ManagerRealtimeState &);
	ManagerRealtimeState(const extension::SoundManager::ManagerRealtimeState &);
	ManagerRealtimeState();
	void reset();
	void clearDirty();
};
class std::list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> > :
	std::_List_buy<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> >
{
	class _Myt;
	class _Mybase;
	struct _Node;
	typedef std::_List_node<extension::SoundManager::SERequest,void *> _Nodeptr;
	struct _Alty;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef extension::SoundManager::SERequest pointer;
	typedef const extension::SoundManager::SERequest const_pointer;
	typedef extension::SoundManager::SERequest reference;
	typedef const extension::SoundManager::SERequest const_reference;
	struct value_type;
	class const_iterator;
	class iterator;
	class _Unchecked_const_iterator;
	class _Unchecked_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> >(std::initializer_list<extension::SoundManager::SERequest>, const std::allocator<extension::SoundManager::SERequest> &);
	list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> >(std::list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> > &, const std::allocator<extension::SoundManager::SERequest> &);
	list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> >(std::list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> > &);
	list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> >(const std::list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> > &, const std::allocator<extension::SoundManager::SERequest> &);
	list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> >(const std::list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> > &);
	list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> >(unsigned long long, const extension::SoundManager::SERequest &, const std::allocator<extension::SoundManager::SERequest> &);
	list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> >(unsigned long long, const extension::SoundManager::SERequest &);
	list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> >(unsigned long long);
	list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> >(const std::allocator<extension::SoundManager::SERequest> &);
	list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> >();
	void _Construct_n(unsigned long long, const extension::SoundManager::SERequest &);
	std::list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> > & operator=(const std::list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> > &);
	std::list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> > & operator=(std::initializer_list<extension::SoundManager::SERequest>);
	std::list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> > & operator=(std::list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> > &);
	void _Assign_rv(std::list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> > &);
	void push_front(const extension::SoundManager::SERequest &);
	void push_front(extension::SoundManager::SERequest &);
	void push_back(const extension::SoundManager::SERequest &);
	void push_back(extension::SoundManager::SERequest &);
	std::_List_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > insert(std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >, unsigned long long, const extension::SoundManager::SERequest &);
	std::_List_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > insert(std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >, const extension::SoundManager::SERequest &);
	std::_List_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > insert(std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >, std::initializer_list<extension::SoundManager::SERequest>);
	std::_List_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > insert(std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >, extension::SoundManager::SERequest &);
	void assign(unsigned long long, const extension::SoundManager::SERequest &);
	void assign(std::initializer_list<extension::SoundManager::SERequest>);
	~list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> >();
	std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > begin();
	std::_List_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > begin();
	std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > end();
	std::_List_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > end();
	std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> >,std::_Iterator_base0> _Unchecked_begin();
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > _Unchecked_begin();
	std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> >,std::_Iterator_base0> _Unchecked_end();
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > _Unchecked_end();
	std::_List_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > _Make_iter(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> >,std::_Iterator_base0>);
	std::_List_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > _Make_iter(std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >);
	std::reverse_iterator<std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > > rbegin();
	std::reverse_iterator<std::_List_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > > rbegin();
	std::reverse_iterator<std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > > rend();
	std::reverse_iterator<std::_List_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > > rend();
	std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > cbegin();
	std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > cend();
	std::reverse_iterator<std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > > crbegin();
	std::reverse_iterator<std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > > crend();
	void resize(unsigned long long, const extension::SoundManager::SERequest &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<extension::SoundManager::SERequest> get_allocator();
	const extension::SoundManager::SERequest & front();
	extension::SoundManager::SERequest & front();
	const extension::SoundManager::SERequest & back();
	extension::SoundManager::SERequest & back();
	void pop_front();
	void pop_back();
	std::_List_node<extension::SoundManager::SERequest,void *> * _Unlinknode(std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >);
	std::_List_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > erase(std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >);
	std::_List_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > erase(std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >);
	void _Unchecked_erase(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> >,std::_Iterator_base0>);
	void clear();
	void swap(std::list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> > &);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >, std::list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >, std::list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >, std::list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >, std::list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >, std::list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> > &);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >, std::list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> > &);
	void remove(const extension::SoundManager::SERequest &);
	void unique();
	void merge(std::list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> > &);
	void merge(std::list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> > &);
	void sort();
	void reverse();
	void _Splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >, std::list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >, unsigned long long);
	void _Splice_same(std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >, std::list<extension::SoundManager::SERequest,std::allocator<extension::SoundManager::SERequest> > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >, unsigned long long);
	void _Unchecked_splice(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> >,std::_Iterator_base0>, std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> >,std::_Iterator_base0>, std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> >,std::_Iterator_base0>);
	void _Tidy();
	void _Insert_n(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> >,std::_Iterator_base0>, unsigned long long, const extension::SoundManager::SERequest &);
	void _Incsize(unsigned long long);
};
class std::unique_ptr<extension::SoundManager::Player [0],std::default_delete<extension::SoundManager::Player [0]> > :
	std::_Unique_ptr_base<extension::SoundManager::Player,std::default_delete<extension::SoundManager::Player [0]> >
{
	class _Myt;
	class _Mybase;
	typedef extension::SoundManager::Player pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<extension::SoundManager::Player [0],std::default_delete<extension::SoundManager::Player [0]> >(const std::unique_ptr<extension::SoundManager::Player [0],std::default_delete<extension::SoundManager::Player [0]> > &);
	unique_ptr<extension::SoundManager::Player [0],std::default_delete<extension::SoundManager::Player [0]> >(void *);
	unique_ptr<extension::SoundManager::Player [0],std::default_delete<extension::SoundManager::Player [0]> >(std::unique_ptr<extension::SoundManager::Player [0],std::default_delete<extension::SoundManager::Player [0]> > &);
	unique_ptr<extension::SoundManager::Player [0],std::default_delete<extension::SoundManager::Player [0]> >();
	std::unique_ptr<extension::SoundManager::Player [0],std::default_delete<extension::SoundManager::Player [0]> > & operator=(const std::unique_ptr<extension::SoundManager::Player [0],std::default_delete<extension::SoundManager::Player [0]> > &);
	std::unique_ptr<extension::SoundManager::Player [0],std::default_delete<extension::SoundManager::Player [0]> > & operator=(void *);
	std::unique_ptr<extension::SoundManager::Player [0],std::default_delete<extension::SoundManager::Player [0]> > & operator=(std::unique_ptr<extension::SoundManager::Player [0],std::default_delete<extension::SoundManager::Player [0]> > &);
	void reset(void *);
	void swap(std::unique_ptr<extension::SoundManager::Player [0],std::default_delete<extension::SoundManager::Player [0]> > &);
	~unique_ptr<extension::SoundManager::Player [0],std::default_delete<extension::SoundManager::Player [0]> >();
	extension::SoundManager::Player & operator[](unsigned long long);
	extension::SoundManager::Player * get();
	bool operator bool();
	extension::SoundManager::Player * release();
private:
	void _Delete();
};