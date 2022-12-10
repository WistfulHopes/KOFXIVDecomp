#pragma once

class Fw::VoiceChat
{
public:
	static bool Initialize(Fw::HeapMemory &);
	static void Finalize();
	static bool addConnect(char);
	static void delConnect(char);
	static void setMicMute(bool);
	static void setSpeakerMute(bool);
	static void setRemoteMute(char);
	static bool getRemoteMute(char);
	static void setRejectMute(char, bool);
	static void setStateMute(char, bool);
	static bool getHeartBeatNoticeFlag(char);
	static void connection(char);
	static void disConnection(char);
	static void reConnect(char);
	static void reConnectAll();
	static void delAllConnect();
	static bool getVoiceMessage(char, unsigned char *, unsigned long *);
	static bool setVoiceMessage(char, unsigned char *, unsigned long *);
	static void update();
	struct VoiceQos;
private:
	static bool m_bMutedMic; // 0xFFFFFFFFFFFFFFFF
	static bool m_bMutedSpeakers; // 0xFFFFFFFFFFFFFFFF
	static void * m_pBuffer; // 0xFFFFFFFFFFFFFFFF
	static void * m_pDecompressBuffer; // 0xFFFFFFFFFFFFFFFF
	static unsigned long m_bufferWritten; // 0xFFFFFFFFFFFFFFFF
	static Fw::VoiceChat::VoiceQos m_VoiceQos[12]; // 0xFFFFFFFFFFFFFFFF
	static bool m_Initialized; // 0xFFFFFFFFFFFFFFFF
	static unsigned long m_optimalSampleRate; // 0xFFFFFFFFFFFFFFFF
	static std::mutex m_VoiceChatMutex; // 0xFFFFFFFFFFFFFFFF
};
struct Fw::VoiceChat::VoiceQos
{
	bool bConnected; // 0x0
	bool bStateMute; // 0x1
	bool bRejectMute; // 0x2
	long sendCount; // 0x4
	long recvCount; // 0x8
	AgPointer<AgAudioSource> source; // 0x10
	AgPointer<AgAudioChannel> channel; // 0x20
	VoiceQos(Fw::VoiceChat::VoiceQos &);
	VoiceQos(const Fw::VoiceChat::VoiceQos &);
	VoiceQos();
	~VoiceQos();
	Fw::VoiceChat::VoiceQos & operator=(Fw::VoiceChat::VoiceQos &);
	Fw::VoiceChat::VoiceQos & operator=(const Fw::VoiceChat::VoiceQos &);
};
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
Fw::VoiceChat::VoiceQos::VoiceQos(); // 0x1400508B0