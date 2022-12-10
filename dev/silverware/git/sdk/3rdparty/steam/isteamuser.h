#pragma once

class ISteamUser
{
public:
	long GetHSteamUser();
	bool BLoggedOn();
	CSteamID GetSteamID();
	long InitiateGameConnection(void *, long, CSteamID, unsigned long, unsigned short, bool);
	void TerminateGameConnection(unsigned long, unsigned short);
	void TrackAppUsageEvent(CGameID, long, const char *);
	bool GetUserDataFolder(char *, long);
	void StartVoiceRecording();
	void StopVoiceRecording();
	EVoiceResult GetAvailableVoice(unsigned long *, unsigned long *, unsigned long);
	EVoiceResult GetVoice(bool, void *, unsigned long, unsigned long *, bool, void *, unsigned long, unsigned long *, unsigned long);
	EVoiceResult DecompressVoice(const void *, unsigned long, void *, unsigned long, unsigned long *, unsigned long);
	unsigned long GetVoiceOptimalSampleRate();
	unsigned long GetAuthSessionTicket(void *, long, unsigned long *);
	EBeginAuthSessionResult BeginAuthSession(const void *, long, CSteamID);
	void EndAuthSession(CSteamID);
	void CancelAuthTicket(unsigned long);
	EUserHasLicenseForAppResult UserHasLicenseForApp(CSteamID, unsigned long);
	bool BIsBehindNAT();
	void AdvertiseGame(CSteamID, unsigned long, unsigned short);
	unsigned long long RequestEncryptedAppTicket(void *, long);
	bool GetEncryptedAppTicket(void *, long, unsigned long *);
	long GetGameBadgeLevel(long, bool);
	long GetPlayerSteamLevel();
	unsigned long long RequestStoreAuthURL(const char *);
	bool BIsPhoneVerified();
	bool BIsTwoFactorEnabled();
	bool BIsPhoneIdentifying();
	bool BIsPhoneRequiringVerification();
	ISteamUser(ISteamUser &);
	ISteamUser(const ISteamUser &);
	ISteamUser();
	ISteamUser & operator=(ISteamUser &);
	ISteamUser & operator=(const ISteamUser &);
};