#pragma once

class ISteamMusicRemote
{
public:
	bool RegisterSteamMusicRemote(const char *);
	bool DeregisterSteamMusicRemote();
	bool BIsCurrentMusicRemote();
	bool BActivationSuccess(bool);
	bool SetDisplayName(const char *);
	bool SetPNGIcon_64x64(void *, unsigned long);
	bool EnablePlayPrevious(bool);
	bool EnablePlayNext(bool);
	bool EnableShuffled(bool);
	bool EnableLooped(bool);
	bool EnableQueue(bool);
	bool EnablePlaylists(bool);
	bool UpdatePlaybackStatus(AudioPlayback_Status);
	bool UpdateShuffled(bool);
	bool UpdateLooped(bool);
	bool UpdateVolume(float);
	bool CurrentEntryWillChange();
	bool CurrentEntryIsAvailable(bool);
	bool UpdateCurrentEntryText(const char *);
	bool UpdateCurrentEntryElapsedSeconds(long);
	bool UpdateCurrentEntryCoverArt(void *, unsigned long);
	bool CurrentEntryDidChange();
	bool QueueWillChange();
	bool ResetQueueEntries();
	bool SetQueueEntry(long, long, const char *);
	bool SetCurrentQueueEntry(long);
	bool QueueDidChange();
	bool PlaylistWillChange();
	bool ResetPlaylistEntries();
	bool SetPlaylistEntry(long, long, const char *);
	bool SetCurrentPlaylistEntry(long);
	bool PlaylistDidChange();
	ISteamMusicRemote(ISteamMusicRemote &);
	ISteamMusicRemote(const ISteamMusicRemote &);
	ISteamMusicRemote();
	ISteamMusicRemote & operator=(ISteamMusicRemote &);
	ISteamMusicRemote & operator=(const ISteamMusicRemote &);
};