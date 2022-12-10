#pragma once

class ISteamClient
{
public:
	long CreateSteamPipe();
	bool BReleaseSteamPipe(long);
	long ConnectToGlobalUser(long);
	long CreateLocalUser(long *, EAccountType);
	void ReleaseUser(long, long);
	ISteamUser * GetISteamUser(long, long, const char *);
	ISteamGameServer * GetISteamGameServer(long, long, const char *);
	void SetLocalIPBinding(unsigned long, unsigned short);
	ISteamFriends * GetISteamFriends(long, long, const char *);
	ISteamUtils * GetISteamUtils(long, const char *);
	ISteamMatchmaking * GetISteamMatchmaking(long, long, const char *);
	ISteamMatchmakingServers * GetISteamMatchmakingServers(long, long, const char *);
	void * GetISteamGenericInterface(long, long, const char *);
	ISteamUserStats * GetISteamUserStats(long, long, const char *);
	ISteamGameServerStats * GetISteamGameServerStats(long, long, const char *);
	ISteamApps * GetISteamApps(long, long, const char *);
	ISteamNetworking * GetISteamNetworking(long, long, const char *);
	ISteamRemoteStorage * GetISteamRemoteStorage(long, long, const char *);
	ISteamScreenshots * GetISteamScreenshots(long, long, const char *);
protected:
	void RunFrame();
public:
	unsigned long GetIPCCallCount();
	void SetWarningMessageHook(void(*)(long, const char *));
	bool BShutdownIfAllPipesClosed();
	ISteamHTTP * GetISteamHTTP(long, long, const char *);
	ISteamUnifiedMessages * GetISteamUnifiedMessages(long, long, const char *);
	ISteamController * GetISteamController(long, long, const char *);
	ISteamUGC * GetISteamUGC(long, long, const char *);
	ISteamAppList * GetISteamAppList(long, long, const char *);
	ISteamMusic * GetISteamMusic(long, long, const char *);
	ISteamMusicRemote * GetISteamMusicRemote(long, long, const char *);
	ISteamHTMLSurface * GetISteamHTMLSurface(long, long, const char *);
protected:
	void DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess(void(*)());
	void DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess(void(*)());
	void Set_SteamAPI_CCheckCallbackRegisteredInProcess(unsigned long(*)(long));
public:
	ISteamInventory * GetISteamInventory(long, long, const char *);
	ISteamVideo * GetISteamVideo(long, long, const char *);
	ISteamClient(ISteamClient &);
	ISteamClient(const ISteamClient &);
	ISteamClient();
	ISteamClient & operator=(ISteamClient &);
	ISteamClient & operator=(const ISteamClient &);
};
enum <unnamed-enum-k_iSteamUserCallbacks>
{
	k_iSteamUserCallbacks = 100,
};
enum <unnamed-enum-k_iSteamFriendsCallbacks>
{
	k_iSteamFriendsCallbacks = 300,
};
enum <unnamed-enum-k_iSteamMatchmakingCallbacks>
{
	k_iSteamMatchmakingCallbacks = 500,
};
enum <unnamed-enum-k_iSteamUtilsCallbacks>
{
	k_iSteamUtilsCallbacks = 700,
};
enum <unnamed-enum-k_iSteamAppsCallbacks>
{
	k_iSteamAppsCallbacks = 1000,
};
enum <unnamed-enum-k_iSteamUserStatsCallbacks>
{
	k_iSteamUserStatsCallbacks = 1100,
};
enum <unnamed-enum-k_iSteamNetworkingCallbacks>
{
	k_iSteamNetworkingCallbacks = 1200,
};
enum <unnamed-enum-k_iClientRemoteStorageCallbacks>
{
	k_iClientRemoteStorageCallbacks = 1300,
};
enum <unnamed-enum-k_iClientHTTPCallbacks>
{
	k_iClientHTTPCallbacks = 2100,
};
enum <unnamed-enum-k_iSteamScreenshotsCallbacks>
{
	k_iSteamScreenshotsCallbacks = 2300,
};
enum <unnamed-enum-k_iClientUnifiedMessagesCallbacks>
{
	k_iClientUnifiedMessagesCallbacks = 2500,
};
enum <unnamed-enum-k_iClientUGCCallbacks>
{
	k_iClientUGCCallbacks = 3400,
};
enum <unnamed-enum-k_iSteamAppListCallbacks>
{
	k_iSteamAppListCallbacks = 3900,
};
enum <unnamed-enum-k_iSteamMusicCallbacks>
{
	k_iSteamMusicCallbacks = 4000,
};
enum <unnamed-enum-k_iSteamMusicRemoteCallbacks>
{
	k_iSteamMusicRemoteCallbacks = 4100,
};
enum <unnamed-enum-k_iSteamHTMLSurfaceCallbacks>
{
	k_iSteamHTMLSurfaceCallbacks = 4500,
};
enum <unnamed-enum-k_iClientVideoCallbacks>
{
	k_iClientVideoCallbacks = 4600,
};
enum <unnamed-enum-k_iClientInventoryCallbacks>
{
	k_iClientInventoryCallbacks = 4700,
};