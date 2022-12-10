#pragma once

struct _PORT_CONFIG
{
	long type; // 0x0
	long bit; // 0x4
	long freq; // 0x8
	long channel; // 0xC
	long opt; // 0x10
	long userIndex; // 0x14
};
struct _PORT_SETTING
{
	short * bufferWork; // 0x0
	long bufferWorkPtr; // 0x8
	short * bufferReverbWork; // 0x10
	long bufferReverbWorkPtr; // 0x18
	CAudioPresenter * pAudioPresenter[32]; // 0x20
	bool bDelReserve[32]; // 0x120
	IXAudio2SourceVoice * m_handle; // 0x140
	void * m_event; // 0x148
};
class CMediaManager
{
public:
	unsigned char bsuspend; // 0x0
	long bufferPtr; // 0x4
	long bufferPtrSize; // 0x8
	float m_bReverbAttenuation; // 0xC
	long m_bReverbRepeatCount; // 0x10
	float m_bReverbReflectionAttenuation; // 0x14
	long m_bReverbAttenuationTimes; // 0x18
	_PORT_SETTING m_PortSetting[6]; // 0x20
	AgThread m_thread_sound; // 0x800
	AgThread m_thread_sound_reverb; // 0x828
	AgThread m_thread_sound_reverb2; // 0x850
	AgThread m_thread_sound_bgm; // 0x878
	IXAudio2 * m_xaudio2; // 0x8A0
	IXAudio2MasteringVoice * m_masterVoice; // 0x8A8
	unsigned long m_numChannels; // 0x8B0
	unsigned long m_channelMask; // 0x8B4
	class ThreadHost;
	CMediaManager::ThreadHost m_sound_host; // 0x8B8
	CMediaManager::ThreadHost m_sound_reverb_host; // 0x8D8
	CMediaManager::ThreadHost m_sound_reverb2_host; // 0x8F8
	CMediaManager::ThreadHost m_sound_bgm_host; // 0x918
	CMediaManager(const CMediaManager &);
	CMediaManager();
	~CMediaManager();
	void initialize();
	void finalize();
	void suspend();
	void resume();
	unsigned char checkSuspend();
	unsigned char setAudioPresenter(_PORT_CONFIG *, CAudioPresenter *);
	void delAudioPresenter(_PORT_CONFIG *, CAudioPresenter *);
	void delAudioPresenter(CAudioPresenter *);
	void setReverbParameter(float, unsigned long, unsigned long, float, unsigned long);
private:
	void clearAudioPresenter();
public:
	CMediaManager & operator=(const CMediaManager &);
};
class CMediaManager::ThreadHost :
	AgSimpleThreadHost
{
public:
	ThreadHost(CMediaManager::ThreadHost &);
	ThreadHost(const CMediaManager::ThreadHost &);
	ThreadHost(CMediaManager *, void *(*)(void *));
	virtual void onExecuteThread();
private:
	CMediaManager * m_manager; // 0x10
	void *(*m_func)(void *); // 0x18
public:
	virtual ~ThreadHost();
	CMediaManager::ThreadHost & operator=(CMediaManager::ThreadHost &);
	CMediaManager::ThreadHost & operator=(const CMediaManager::ThreadHost &);
};
void CMediaManager::ThreadHost::onExecuteThread(); // 0x140030640
CMediaManager::~CMediaManager(); // 0x14023F310