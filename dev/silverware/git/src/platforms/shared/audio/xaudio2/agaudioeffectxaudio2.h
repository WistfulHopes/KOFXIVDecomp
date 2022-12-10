#pragma once

class AgAudioEffectReverb_XAudio2 :
	AgAudioEffectReverb
{
public:
	AgAudioEffectReverb_XAudio2(const AgAudioEffectReverb_XAudio2 &);
	AgAudioEffectReverb_XAudio2();
	virtual ~AgAudioEffectReverb_XAudio2();
	virtual void add(AgAudioChannelData *);
	virtual void update(AgAudioChannelData *);
	virtual void remove(AgAudioChannelData *);
private:
	IUnknown * m_XAPO; // 0x28
	XAUDIO2FX_REVERB_PARAMETERS m_reverbParameters; // 0x30
public:
	AgAudioEffectReverb_XAudio2 & operator=(const AgAudioEffectReverb_XAudio2 &);
};