#pragma once

enum <unnamed-enum-k_cchStatNameMax>
{
	k_cchStatNameMax = 128,
};
enum <unnamed-enum-k_cLeaderboardDetailsMax>
{
	k_cLeaderboardDetailsMax = 64,
};
enum ELeaderboardDataRequest
{
	k_ELeaderboardDataRequestGlobal = 0,
	k_ELeaderboardDataRequestGlobalAroundUser = 1,
	k_ELeaderboardDataRequestFriends = 2,
	k_ELeaderboardDataRequestUsers = 3,
};
enum ELeaderboardUploadScoreMethod
{
	k_ELeaderboardUploadScoreMethodNone = 0,
	k_ELeaderboardUploadScoreMethodKeepBest = 1,
	k_ELeaderboardUploadScoreMethodForceUpdate = 2,
};
struct LeaderboardEntry_t
{
	CSteamID m_steamIDUser; // 0x0
	long m_nGlobalRank; // 0x8
	long m_nScore; // 0xC
	long m_cDetails; // 0x10
	unsigned long long m_hUGC; // 0x18
	LeaderboardEntry_t();
};
class ISteamUserStats
{
public:
	bool RequestCurrentStats();
	bool GetStat(const char *, float *);
	bool GetStat(const char *, long *);
	bool SetStat(const char *, float);
	bool SetStat(const char *, long);
	bool UpdateAvgRateStat(const char *, float, double);
	bool GetAchievement(const char *, bool *);
	bool SetAchievement(const char *);
	bool ClearAchievement(const char *);
	bool GetAchievementAndUnlockTime(const char *, bool *, unsigned long *);
	bool StoreStats();
	long GetAchievementIcon(const char *);
	const char * GetAchievementDisplayAttribute(const char *, const char *);
	bool IndicateAchievementProgress(const char *, unsigned long, unsigned long);
	unsigned long GetNumAchievements();
	const char * GetAchievementName(unsigned long);
	unsigned long long RequestUserStats(CSteamID);
	bool GetUserStat(CSteamID, const char *, float *);
	bool GetUserStat(CSteamID, const char *, long *);
	bool GetUserAchievement(CSteamID, const char *, bool *);
	bool GetUserAchievementAndUnlockTime(CSteamID, const char *, bool *, unsigned long *);
	bool ResetAllStats(bool);
	unsigned long long FindOrCreateLeaderboard(const char *, ELeaderboardSortMethod, ELeaderboardDisplayType);
	unsigned long long FindLeaderboard(const char *);
	const char * GetLeaderboardName(unsigned long long);
	long GetLeaderboardEntryCount(unsigned long long);
	ELeaderboardSortMethod GetLeaderboardSortMethod(unsigned long long);
	ELeaderboardDisplayType GetLeaderboardDisplayType(unsigned long long);
	unsigned long long DownloadLeaderboardEntries(unsigned long long, ELeaderboardDataRequest, long, long);
	unsigned long long DownloadLeaderboardEntriesForUsers(unsigned long long, CSteamID *, long);
	bool GetDownloadedLeaderboardEntry(unsigned long long, long, LeaderboardEntry_t *, long *, long);
	unsigned long long UploadLeaderboardScore(unsigned long long, ELeaderboardUploadScoreMethod, long, const long *, long);
	unsigned long long AttachLeaderboardUGC(unsigned long long, unsigned long long);
	unsigned long long GetNumberOfCurrentPlayers();
	unsigned long long RequestGlobalAchievementPercentages();
	long GetMostAchievedAchievementInfo(char *, unsigned long, float *, bool *);
	long GetNextMostAchievedAchievementInfo(long, char *, unsigned long, float *, bool *);
	bool GetAchievementAchievedPercent(const char *, float *);
	unsigned long long RequestGlobalStats(long);
	bool GetGlobalStat(const char *, double *);
	bool GetGlobalStat(const char *, long long *);
	long GetGlobalStatHistory(const char *, double *, unsigned long);
	long GetGlobalStatHistory(const char *, long long *, unsigned long);
	ISteamUserStats(ISteamUserStats &);
	ISteamUserStats(const ISteamUserStats &);
	ISteamUserStats();
	ISteamUserStats & operator=(ISteamUserStats &);
	ISteamUserStats & operator=(const ISteamUserStats &);
};
struct UserStatsReceived_t
{
	enum <unnamed-enum-k_iCallback>
	{
		k_iCallback = 1101,
	};
	unsigned long long m_nGameID; // 0x0
	EResult m_eResult; // 0x8
	CSteamID m_steamIDUser; // 0xC
	UserStatsReceived_t();
};
struct LeaderboardFindResult_t
{
	enum <unnamed-enum-k_iCallback>
	{
		k_iCallback = 1104,
	};
	unsigned long long m_hSteamLeaderboard; // 0x0
	unsigned char m_bLeaderboardFound; // 0x8
};
struct LeaderboardScoresDownloaded_t
{
	enum <unnamed-enum-k_iCallback>
	{
		k_iCallback = 1105,
	};
	unsigned long long m_hSteamLeaderboard; // 0x0
	unsigned long long m_hSteamLeaderboardEntries; // 0x8
	long m_cEntryCount; // 0x10
};
struct LeaderboardUGCSet_t
{
	enum <unnamed-enum-k_iCallback>
	{
		k_iCallback = 1111,
	};
	EResult m_eResult; // 0x0
	unsigned long long m_hSteamLeaderboard; // 0x8
};