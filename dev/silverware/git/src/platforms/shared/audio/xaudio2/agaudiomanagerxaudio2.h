#pragma once

struct IXAudio2MasteringVoice :
	IXAudio2Voice
{
	void GetVoiceDetails(XAUDIO2_VOICE_DETAILS *) = 0;
	HRESULT SetOutputVoices(const XAUDIO2_VOICE_SENDS *) = 0;
	HRESULT SetEffectChain(const XAUDIO2_EFFECT_CHAIN *) = 0;
	HRESULT EnableEffect(unsigned long, unsigned long) = 0;
	HRESULT DisableEffect(unsigned long, unsigned long) = 0;
	void GetEffectState(unsigned long, long *) = 0;
	HRESULT SetEffectParameters(unsigned long, const void *, unsigned long, unsigned long) = 0;
	HRESULT GetEffectParameters(unsigned long, void *, unsigned long) = 0;
	HRESULT SetFilterParameters(const XAUDIO2_FILTER_PARAMETERS *, unsigned long) = 0;
	void GetFilterParameters(XAUDIO2_FILTER_PARAMETERS *) = 0;
	HRESULT SetOutputFilterParameters(IXAudio2Voice *, const XAUDIO2_FILTER_PARAMETERS *, unsigned long) = 0;
	void GetOutputFilterParameters(IXAudio2Voice *, XAUDIO2_FILTER_PARAMETERS *) = 0;
	HRESULT SetVolume(float, unsigned long) = 0;
	void GetVolume(float *) = 0;
	HRESULT SetChannelVolumes(unsigned long, const float *, unsigned long) = 0;
	void GetChannelVolumes(unsigned long, float *) = 0;
	HRESULT SetOutputMatrix(IXAudio2Voice *, unsigned long, unsigned long, const float *, unsigned long) = 0;
	void GetOutputMatrix(IXAudio2Voice *, unsigned long, unsigned long, float *) = 0;
	void DestroyVoice() = 0;
	IXAudio2MasteringVoice(IXAudio2MasteringVoice &);
	IXAudio2MasteringVoice(const IXAudio2MasteringVoice &);
	IXAudio2MasteringVoice();
	IXAudio2MasteringVoice & operator=(IXAudio2MasteringVoice &);
	IXAudio2MasteringVoice & operator=(const IXAudio2MasteringVoice &);
};
class AgAudioManagerXAudio2 :
	AgAudioManager
{
public:
	AgAudioManagerXAudio2();
	IXAudio2 * getXAudio2();
	unsigned long getChannelMask();
	unsigned long getNumChannels();
	long isInitialized();
	long isCriticalError();
	long platformInitialize();
	long platformPreFinalize();
	long platformPostFinalize();
	void platformUpdate();
	void setCriticalError();
	void defaultDeviceChanged();
	void addStreamJob(AgAudioChannelData *);
	void cancelStreamJob(AgAudioChannelData *);
	AgPointer<AgAudioEffect> platformCreateEffect(const AgAudioEffectType);
private:
	long initializeXAudio2();
	long finalizeXAudio2();
	AgThreadPool m_streamThread; // 0x70
	IXAudio2 * m_xaudio2; // 0x158
	IXAudio2MasteringVoice * m_masterVoice; // 0x160
	unsigned long m_channelMask; // 0x168
	unsigned long m_numChannels; // 0x16C
	volatile long m_criticalError; // 0x170
	double m_deviceChangedTimestamp; // 0x178
public:
	virtual ~AgAudioManagerXAudio2();
};