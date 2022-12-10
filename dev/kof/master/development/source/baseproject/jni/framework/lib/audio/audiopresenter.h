#pragma once

enum <unnamed-enum-ATTR_SYNC_OFF>
{
	ATTR_SYNC_OFF = 0,
	ATTR_SYNC_ON = 1,
	SYNC_MODE = 2,
	TRANSPOSE_KEY = 3,
	SET_VOLUME = 4,
	CHANGE_TEMPO = 5,
	LOOP_COUNT = 6,
	SET_PITCH = 7,
	SET_POSITION = 8,
	AUDIO_PLAYING = 1,
	AUDIO_STOPPED = 2,
	AUDIO_COMPLETE = 3,
	AUDIO_SYNC = 4,
	AUDIO_PAUSED = 5,
	AUDIO_RESTARTED = 6,
	AUDIO_LOOPED = 7,
};
union _AUDIO_VOLUME
{
	struct <unnamed-type-_7_1ch>;
	struct
	{
		_AUDIO_VOLUME::<unnamed-type-_7_1ch> _7_1ch; // 0x0
		struct <unnamed-type-_5_1ch>;
	};
	struct
	{
		_AUDIO_VOLUME::<unnamed-type-_5_1ch> _5_1ch; // 0x0
		struct <unnamed-type-_2ch>;
	};
	struct
	{
		_AUDIO_VOLUME::<unnamed-type-_2ch> _2ch; // 0x0
		struct <unnamed-type-_1ch>;
	};
public:
	_AUDIO_VOLUME::<unnamed-type-_1ch> _1ch; // 0x0
};
struct _AUDIO_VOLUME::<unnamed-type-_7_1ch>
{
	float FrontLeft; // 0x0
	float FrontRight; // 0x4
	float FrontCenter; // 0x8
	float Subwoofer; // 0xC
	float SurroundL; // 0x10
	float SurroundR; // 0x14
	float SurroundBackL; // 0x18
	float SurroundBackR; // 0x1C
};
struct _AUDIO_VOLUME::<unnamed-type-_5_1ch>
{
	float FrontLeft; // 0x0
	float FrontRight; // 0x4
	float FrontCenter; // 0x8
	float Subwoofer; // 0xC
	float SurroundL; // 0x10
	float SurroundR; // 0x14
};
struct _AUDIO_VOLUME::<unnamed-type-_2ch>
{
	float Left; // 0x0
	float Right; // 0x4
};
struct _AUDIO_VOLUME::<unnamed-type-_1ch>
{
	float Center; // 0x0
};
union _AUDIO_VOLUME_i32
{
	struct <unnamed-type-_7_1ch>;
	struct
	{
		_AUDIO_VOLUME_i32::<unnamed-type-_7_1ch> _7_1ch; // 0x0
		struct <unnamed-type-_5_1ch>;
	};
	struct
	{
		_AUDIO_VOLUME_i32::<unnamed-type-_5_1ch> _5_1ch; // 0x0
		struct <unnamed-type-_2ch>;
	};
	struct
	{
		_AUDIO_VOLUME_i32::<unnamed-type-_2ch> _2ch; // 0x0
		struct <unnamed-type-_1ch>;
	};
public:
	_AUDIO_VOLUME_i32::<unnamed-type-_1ch> _1ch; // 0x0
};
struct _AUDIO_VOLUME_i32::<unnamed-type-_7_1ch>
{
	long FrontLeft; // 0x0
	long FrontRight; // 0x4
	long FrontCenter; // 0x8
	long Subwoofer; // 0xC
	long SurroundL; // 0x10
	long SurroundR; // 0x14
	long SurroundBackL; // 0x18
	long SurroundBackR; // 0x1C
};
struct _AUDIO_VOLUME_i32::<unnamed-type-_5_1ch>
{
	long FrontLeft; // 0x0
	long FrontRight; // 0x4
	long FrontCenter; // 0x8
	long Subwoofer; // 0xC
	long SurroundL; // 0x10
	long SurroundR; // 0x14
};
struct _AUDIO_VOLUME_i32::<unnamed-type-_2ch>
{
	long Left; // 0x0
	long Right; // 0x4
};
struct _AUDIO_VOLUME_i32::<unnamed-type-_1ch>
{
	long Center; // 0x0
};
struct _SETTING_3D_SOUND
{
	unsigned char bUse3DSound; // 0x0
	float fBaseVolume; // 0x4
	OGLVec3 vSoundPos; // 0x8
	OGLVec3 vListenerPos; // 0x14
	OGLVec3 vListenerDic; // 0x20
	_SETTING_3D_SOUND(_SETTING_3D_SOUND &);
	_SETTING_3D_SOUND(const _SETTING_3D_SOUND &);
	_SETTING_3D_SOUND();
};
class CAudioPresenter
{
private:
	void initialize(CMediaManager *);
	void finalize();
	unsigned char setResumeInit();
	long stop2();
	float GetPos();
	float GetPos2();
	void UnuseSoundData();
	CMediaManager * Instance();
public:
	CAudioPresenter(CMediaManager *);
	~CAudioPresenter();
	unsigned char setInit(long, long, long);
	void destroy();
	unsigned char setSound(CMediaSound *);
	unsigned char play(float);
	unsigned char play();
	void Pause();
	void resume();
	void suspend(unsigned char);
	void stop();
	float getCurrentByte();
	float getCurrentTime();
	float getCurrentTotalByte();
	float getCurrentTotalTime();
	float getTotalByte();
	float getTotalTime();
	long setPauseByte(float);
	void setPauseTime(float);
	long getLoopCount();
	CMediaSound * getMediaResource();
	void setAttribute(long, long);
	void seekHead();
	long GetState();
	void set3DSound(unsigned char);
	void setStereoPan(unsigned char);
	void setVolume(_AUDIO_VOLUME *);
	void setVolume(float);
	void setVolume3D();
	void setSoundPosition(OGLVec3 *, float);
	void setListenerPosition(OGLVec3 *, OGLVec3 *);
	void Mute(unsigned char);
	void setReverb(long);
	void setReverbParameter(float, unsigned long, unsigned long, float, unsigned long);
	void setPlaySpeed(float);
	void setPitchScale(float);
	unsigned char IsPlayend();
	void Playend(unsigned char);
	unsigned char seek(float);
	unsigned char loopCheck();
	void setLoop(unsigned char, float, float);
	unsigned char releaseBuffer(CMediaSound *);
	void setStereoChange(unsigned char);
	void setPortType(long);
	long getPortType();
	long BufferQueueCallbackWrite(void *, void *, long);
	unsigned char m_playend; // 0x0
	unsigned char m_bChangeRL; // 0x1
	unsigned char m_bStereoPan; // 0x2
	long bufferPtr; // 0x4
	long bufferPtrSize; // 0x8
	short * bufferWork; // 0x10
	short * bufferEffect; // 0x18
	long bufferWorkPtr; // 0x20
	long bufferWorkPtr0; // 0x24
	long bufferWorkPtr1; // 0x28
	_SETTING_3D_SOUND m_3DSound; // 0x2C
	_SND_PLAYER_INFO m_PlayerInfo; // 0x58
	CMediaSound * m_Sound; // 0x98
	unsigned char m_player_play; // 0xA0
	_PORT_CONFIG m_Port; // 0xA4
	AgMutex m_sound_mutex; // 0xBC
	long m_handle; // 0xE4
	CMediaManager * m_pMediaManager; // 0xE8
private:
	double Position();
	unsigned long playerState; // 0xF0
	long m_Counter; // 0xF4
	long m_UserIndex; // 0xF8
	long m_Type; // 0xFC
public:
	_AUDIO_VOLUME_i32 m_volume; // 0x100
	float m_fSpeed; // 0x120
	float m_fPitchScale; // 0x124
	long m_iReverb; // 0x128
	float m_bReverbAttenuation; // 0x12C
	float m_bReverbReflectionAttenuation; // 0x130
	unsigned long m_bReverbAttenuationTime; // 0x134
	unsigned long m_bReverbAttenuationTimes[33]; // 0x138
	float m_fReverbRefAttenuations[33]; // 0x1BC
	unsigned long m_bReverbRepeatCount; // 0x240
};