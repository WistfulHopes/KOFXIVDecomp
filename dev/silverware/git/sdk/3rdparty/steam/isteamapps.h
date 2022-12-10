#pragma once

class ISteamApps
{
public:
	bool BIsSubscribed();
	bool BIsLowViolence();
	bool BIsCybercafe();
	bool BIsVACBanned();
	const char * GetCurrentGameLanguage();
	const char * GetAvailableGameLanguages();
	bool BIsSubscribedApp(unsigned long);
	bool BIsDlcInstalled(unsigned long);
	unsigned long GetEarliestPurchaseUnixTime(unsigned long);
	bool BIsSubscribedFromFreeWeekend();
	long GetDLCCount();
	bool BGetDLCDataByIndex(long, unsigned long *, bool *, char *, long);
	void InstallDLC(unsigned long);
	void UninstallDLC(unsigned long);
	void RequestAppProofOfPurchaseKey(unsigned long);
	bool GetCurrentBetaName(char *, long);
	bool MarkContentCorrupt(bool);
	unsigned long GetInstalledDepots(unsigned long, unsigned long *, unsigned long);
	unsigned long GetAppInstallDir(unsigned long, char *, unsigned long);
	bool BIsAppInstalled(unsigned long);
	CSteamID GetAppOwner();
	const char * GetLaunchQueryParam(const char *);
	bool GetDlcDownloadProgress(unsigned long, unsigned long long *, unsigned long long *);
	long GetAppBuildId();
	void RequestAllProofOfPurchaseKeys();
	unsigned long long GetFileDetails(const char *);
	ISteamApps(ISteamApps &);
	ISteamApps(const ISteamApps &);
	ISteamApps();
	ISteamApps & operator=(ISteamApps &);
	ISteamApps & operator=(const ISteamApps &);
};
struct DlcInstalled_t
{
	enum <unnamed-enum-k_iCallback>
	{
		k_iCallback = 1005,
	};
	unsigned long m_nAppID; // 0x0
};