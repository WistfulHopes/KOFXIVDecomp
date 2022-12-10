#pragma once

class AgAudioChannelXAudio2 :
	AgAudioChannel
{
public:
	AgAudioChannelXAudio2(AgAudioChannelXAudio2 &);
	AgAudioChannelXAudio2(const AgAudioChannelXAudio2 &);
	AgAudioChannelXAudio2(const long, AgAudioSourceType);
	void updateVolume(AgAudioManagerXAudio2 &);
	void updatePitch();
	void updatePlayCount();
	void updateElapsedTime();
	float getElapsedTime();
	void _play(AgAudioManagerXAudio2 &);
	void _pause();
	void _resume();
	void _stop();
	void _update();
	virtual ~AgAudioChannelXAudio2();
	AgAudioChannelXAudio2 & operator=(AgAudioChannelXAudio2 &);
	AgAudioChannelXAudio2 & operator=(const AgAudioChannelXAudio2 &);
};