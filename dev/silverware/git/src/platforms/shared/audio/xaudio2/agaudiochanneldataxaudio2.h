#pragma once

struct IXAudio2SourceVoice :
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
	HRESULT Start(unsigned long, unsigned long);
	HRESULT Stop(unsigned long, unsigned long);
	HRESULT SubmitSourceBuffer(const XAUDIO2_BUFFER *, const XAUDIO2_BUFFER_WMA *);
	HRESULT FlushSourceBuffers();
	HRESULT Discontinuity();
	HRESULT ExitLoop(unsigned long);
	void GetState(XAUDIO2_VOICE_STATE *);
	HRESULT SetFrequencyRatio(float, unsigned long);
	void GetFrequencyRatio(float *);
	HRESULT SetSourceSampleRate(unsigned long);
	IXAudio2SourceVoice(IXAudio2SourceVoice &);
	IXAudio2SourceVoice(const IXAudio2SourceVoice &);
	IXAudio2SourceVoice();
	IXAudio2SourceVoice & operator=(IXAudio2SourceVoice &);
	IXAudio2SourceVoice & operator=(const IXAudio2SourceVoice &);
};
struct AgXAudio2OGGData
{
	static const unsigned long long NUM_OGG_BUFFERS; // 0xFFFFFFFFFFFFFFFF
	static const unsigned long long OGG_BUFFER_SIZE; // 0xFFFFFFFFFFFFFFFF
	AgMutex m_oggMutex; // 0x0
	OggVorbis_File m_vf; // 0x28
	unsigned long m_currentOggBuffer; // 0x370
	unsigned char m_buffer[65536][3]; // 0x374
	AgXAudio2OGGData();
	~AgXAudio2OGGData();
};
struct AgAudioChannelData :
	IXAudio2VoiceCallback,
	AgAudioChannelBaseData
{
	AgAudioChannelData();
	virtual void OnBufferEnd(void *);
	virtual void OnBufferStart(void *);
	virtual void OnLoopEnd(void *);
	virtual void OnVoiceError(void *, HRESULT);
	virtual void OnStreamEnd();
	virtual void OnVoiceProcessingPassEnd();
	virtual void OnVoiceProcessingPassStart(unsigned long);
	void streamBuffer(unsigned long);
	void streamRuntimeBuffers();
	void recalculateLoopingPoints(bool);
	AgPointer<AgAudioSource> m_source; // 0xB8
	AgPointer<AgFile> m_file; // 0xC8
	long m_loop; // 0xD8
	volatile long m_stopped; // 0xDC
	long m_bytesLeftForLoop; // 0xE0
	float m_totalTime; // 0xE4
	IXAudio2SourceVoice * m_sourceVoice; // 0xE8
	AgXAudio2OGGData * m_oggData; // 0xF0
	unsigned long m_streamGroup; // 0xF8
	~AgAudioChannelData();
};
AgAudioChannelData::AgAudioChannelData(); // 0x14065E900
void AgAudioChannelData::OnBufferStart(void * __formal); // 0x14002E7C0
class AgPointer<AgAudioSource>
{
public:
	AgPointer<AgAudioSource>(const AgReference<AgAudioSource> &);
	AgPointer<AgAudioSource>(AgPointer<AgAudioSource> &);
	AgPointer<AgAudioSource>(const AgPointer<AgAudioSource> &);
	AgPointer<AgAudioSource>(AgAudioSource *);
	AgPointer<AgAudioSource>();
	~AgPointer<AgAudioSource>();
	AgPointer<AgAudioSource> & operator=(AgPointer<AgAudioSource> &);
	AgPointer<AgAudioSource> & operator=(const AgReference<AgAudioSource> &);
	AgPointer<AgAudioSource> & operator=(const AgPointer<AgAudioSource> &);
	AgPointer<AgAudioSource> & operator=(AgAudioSource *);
	bool operator<(const AgPointer<AgAudioSource> &);
	AgAudioSource * operator->();
	AgAudioSource & operator*();
	bool operator==(const AgPointer<AgAudioSource> &);
	bool operator==(AgAudioSource *);
	bool operator!=(const AgPointer<AgAudioSource> &);
	bool operator!=(AgAudioSource *);
	AgAudioSource * getObject();
	void swap(AgPointer<AgAudioSource> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgAudioSource * m_ptr; // 0x8
};