#pragma once

class CSteamAPIContext
{
public:
	CSteamAPIContext();
	void Clear();
	bool Init();
	ISteamClient * SteamClient();
	ISteamUser * SteamUser();
	ISteamFriends * SteamFriends();
	ISteamUtils * SteamUtils();
	ISteamMatchmaking * SteamMatchmaking();
	ISteamUserStats * SteamUserStats();
	ISteamApps * SteamApps();
	ISteamMatchmakingServers * SteamMatchmakingServers();
	ISteamNetworking * SteamNetworking();
	ISteamRemoteStorage * SteamRemoteStorage();
	ISteamScreenshots * SteamScreenshots();
	ISteamHTTP * SteamHTTP();
	ISteamUnifiedMessages * SteamUnifiedMessages();
	ISteamController * SteamController();
	ISteamUGC * SteamUGC();
	ISteamAppList * SteamAppList();
	ISteamMusic * SteamMusic();
	ISteamMusicRemote * SteamMusicRemote();
	ISteamHTMLSurface * SteamHTMLSurface();
	ISteamInventory * SteamInventory();
	ISteamVideo * SteamVideo();
private:
	ISteamClient * m_pSteamClient; // 0x0
	ISteamUser * m_pSteamUser; // 0x8
	ISteamFriends * m_pSteamFriends; // 0x10
	ISteamUtils * m_pSteamUtils; // 0x18
	ISteamMatchmaking * m_pSteamMatchmaking; // 0x20
	ISteamUserStats * m_pSteamUserStats; // 0x28
	ISteamApps * m_pSteamApps; // 0x30
	ISteamMatchmakingServers * m_pSteamMatchmakingServers; // 0x38
	ISteamNetworking * m_pSteamNetworking; // 0x40
	ISteamRemoteStorage * m_pSteamRemoteStorage; // 0x48
	ISteamScreenshots * m_pSteamScreenshots; // 0x50
	ISteamHTTP * m_pSteamHTTP; // 0x58
	ISteamUnifiedMessages * m_pSteamUnifiedMessages; // 0x60
	ISteamController * m_pController; // 0x68
	ISteamUGC * m_pSteamUGC; // 0x70
	ISteamAppList * m_pSteamAppList; // 0x78
	ISteamMusic * m_pSteamMusic; // 0x80
	ISteamMusicRemote * m_pSteamMusicRemote; // 0x88
	ISteamHTMLSurface * m_pSteamHTMLSurface; // 0x90
	ISteamInventory * m_pSteamInventory; // 0x98
	ISteamVideo * m_pSteamVideo; // 0xA0
};
class CCallbackBase
{
private:
	CCallbackBase(const CCallbackBase &);
public:
	CCallbackBase();
	void Run(void *, bool, unsigned long long);
	void Run(void *);
	long GetICallback();
	long GetCallbackSizeBytes();
	enum <unnamed-enum-k_ECallbackFlagsRegistered>
	{
		k_ECallbackFlagsRegistered = 1,
		k_ECallbackFlagsGameServer = 2,
	};
protected:
	unsigned char m_nCallbackFlags; // 0x8
	long m_iCallback; // 0xC
private:
	CCallbackBase & operator=(const CCallbackBase &);
};
void CCallbackImpl<4>::Run(void * pvParam, bool __formal, unsigned long long __formal); // 0x14002DF00
void CCallbackImpl<8>::Run(void * pvParam, bool __formal, unsigned long long __formal); // 0x14002DF00
void CCallbackImpl<1>::Run(void * pvParam, bool __formal, unsigned long long __formal); // 0x14002DF00
void CCallbackImpl<9>::Run(void * pvParam, bool __formal, unsigned long long __formal); // 0x14002DF00
long CCallbackImpl<4>::GetCallbackSizeBytes(); // 0x14002DEF0
long CCallbackImpl<8>::GetCallbackSizeBytes(); // 0x14002F6A0
long CCallbackImpl<1>::GetCallbackSizeBytes(); // 0x1400482A0
long CCallbackImpl<16>::GetCallbackSizeBytes(); // 0x1400482C0
long CCallbackImpl<24>::GetCallbackSizeBytes(); // 0x1400482B0
long CCallbackImpl<9>::GetCallbackSizeBytes(); // 0x14004A840
long CCallbackImpl<32>::GetCallbackSizeBytes(); // 0x14004A850
long CCallResult<Fw::cRankingReadWork,LeaderboardScoresDownloaded_t>::GetCallbackSizeBytes(); // 0x1400482B0
long CCallResult<Fw::cRankingReadWork,RemoteStorageDownloadUGCResult_t>::GetCallbackSizeBytes(); // 0x14004B700
long CCallResult<Fw::cRankingWriteWork,LeaderboardUGCSet_t>::GetCallbackSizeBytes(); // 0x1400482C0
long CCallResult<Fw::cRankingWriteWork,RemoteStorageFileShareResult_t>::GetCallbackSizeBytes(); // 0x14004D650
long CCallResult<LeaderboardCallbackHandler,LeaderboardFindResult_t>::GetCallbackSizeBytes(); // 0x1400482C0
class CCallbackImpl<4> :
	public CCallbackBase
{
public:
	~CCallbackImpl<4>();
	void SetGameserverFlag();
protected:
	virtual void Run(void *, bool, unsigned long long);
	void Run(void *) = 0;
	virtual long GetCallbackSizeBytes();
public:
	CCallbackImpl<4>();
};
class CCallbackImpl<16> :
	public CCallbackBase
{
public:
	~CCallbackImpl<16>();
	void SetGameserverFlag();
protected:
	virtual void Run(void *, bool, unsigned long long);
	void Run(void *) = 0;
	virtual long GetCallbackSizeBytes();
public:
	CCallbackImpl<16>();
};
class CCallbackImpl<24> :
	public CCallbackBase
{
public:
	~CCallbackImpl<24>();
	void SetGameserverFlag();
protected:
	virtual void Run(void *, bool, unsigned long long);
	void Run(void *) = 0;
	virtual long GetCallbackSizeBytes();
public:
	CCallbackImpl<24>();
};
class CCallbackImpl<9> :
	public CCallbackBase
{
public:
	~CCallbackImpl<9>();
	void SetGameserverFlag();
protected:
	virtual void Run(void *, bool, unsigned long long);
	void Run(void *) = 0;
	virtual long GetCallbackSizeBytes();
public:
	CCallbackImpl<9>();
};
class CCallbackImpl<32> :
	public CCallbackBase
{
public:
	~CCallbackImpl<32>();
	void SetGameserverFlag();
protected:
	virtual void Run(void *, bool, unsigned long long);
	void Run(void *) = 0;
	virtual long GetCallbackSizeBytes();
public:
	CCallbackImpl<32>();
};