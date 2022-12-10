#pragma once

class ISteamMusic
{
public:
	bool BIsEnabled();
	bool BIsPlaying();
	AudioPlayback_Status GetPlaybackStatus();
	void Play();
	void Pause();
	void PlayPrevious();
	void PlayNext();
	void SetVolume(float);
	float GetVolume();
	ISteamMusic(ISteamMusic &);
	ISteamMusic(const ISteamMusic &);
	ISteamMusic();
	ISteamMusic & operator=(ISteamMusic &);
	ISteamMusic & operator=(const ISteamMusic &);
};