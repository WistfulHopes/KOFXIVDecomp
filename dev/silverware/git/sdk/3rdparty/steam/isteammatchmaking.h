#pragma once

enum ELobbyType
{
	k_ELobbyTypePrivate = 0,
	k_ELobbyTypeFriendsOnly = 1,
	k_ELobbyTypePublic = 2,
	k_ELobbyTypeInvisible = 3,
};
enum ELobbyComparison
{
	k_ELobbyComparisonEqualToOrLessThan = 254,
	k_ELobbyComparisonLessThan = 255,
	k_ELobbyComparisonEqual = 0,
	k_ELobbyComparisonGreaterThan = 1,
	k_ELobbyComparisonEqualToOrGreaterThan = 2,
	k_ELobbyComparisonNotEqual = 3,
};
enum ELobbyDistanceFilter
{
	k_ELobbyDistanceFilterClose = 0,
	k_ELobbyDistanceFilterDefault = 1,
	k_ELobbyDistanceFilterFar = 2,
	k_ELobbyDistanceFilterWorldwide = 3,
};
class ISteamMatchmaking
{
public:
	long GetFavoriteGameCount();
	bool GetFavoriteGame(long, unsigned long *, unsigned long *, unsigned short *, unsigned short *, unsigned long *, unsigned long *);
	long AddFavoriteGame(unsigned long, unsigned long, unsigned short, unsigned short, unsigned long, unsigned long);
	bool RemoveFavoriteGame(unsigned long, unsigned long, unsigned short, unsigned short, unsigned long);
	unsigned long long RequestLobbyList();
	void AddRequestLobbyListStringFilter(const char *, const char *, ELobbyComparison);
	void AddRequestLobbyListNumericalFilter(const char *, long, ELobbyComparison);
	void AddRequestLobbyListNearValueFilter(const char *, long);
	void AddRequestLobbyListFilterSlotsAvailable(long);
	void AddRequestLobbyListDistanceFilter(ELobbyDistanceFilter);
	void AddRequestLobbyListResultCountFilter(long);
	void AddRequestLobbyListCompatibleMembersFilter(CSteamID);
	CSteamID GetLobbyByIndex(long);
	unsigned long long CreateLobby(ELobbyType, long);
	unsigned long long JoinLobby(CSteamID);
	void LeaveLobby(CSteamID);
	bool InviteUserToLobby(CSteamID, CSteamID);
	long GetNumLobbyMembers(CSteamID);
	CSteamID GetLobbyMemberByIndex(CSteamID, long);
	const char * GetLobbyData(CSteamID, const char *);
	bool SetLobbyData(CSteamID, const char *, const char *);
	long GetLobbyDataCount(CSteamID);
	bool GetLobbyDataByIndex(CSteamID, long, char *, long, char *, long);
	bool DeleteLobbyData(CSteamID, const char *);
	const char * GetLobbyMemberData(CSteamID, CSteamID, const char *);
	void SetLobbyMemberData(CSteamID, const char *, const char *);
	bool SendLobbyChatMsg(CSteamID, const void *, long);
	long GetLobbyChatEntry(CSteamID, long, CSteamID *, void *, long, EChatEntryType *);
	bool RequestLobbyData(CSteamID);
	void SetLobbyGameServer(CSteamID, unsigned long, unsigned short, CSteamID);
	bool GetLobbyGameServer(CSteamID, unsigned long *, unsigned short *, CSteamID *);
	bool SetLobbyMemberLimit(CSteamID, long);
	long GetLobbyMemberLimit(CSteamID);
	bool SetLobbyType(CSteamID, ELobbyType);
	bool SetLobbyJoinable(CSteamID, bool);
	CSteamID GetLobbyOwner(CSteamID);
	bool SetLobbyOwner(CSteamID, CSteamID);
	bool SetLinkedLobby(CSteamID, CSteamID);
	ISteamMatchmaking(ISteamMatchmaking &);
	ISteamMatchmaking(const ISteamMatchmaking &);
	ISteamMatchmaking();
	ISteamMatchmaking & operator=(ISteamMatchmaking &);
	ISteamMatchmaking & operator=(const ISteamMatchmaking &);
};
class ISteamMatchmakingServerListResponse
{
public:
	void ServerResponded(void *, long);
	void ServerFailedToRespond(void *, long);
	void RefreshComplete(void *, EMatchMakingServerResponse);
	ISteamMatchmakingServerListResponse(ISteamMatchmakingServerListResponse &);
	ISteamMatchmakingServerListResponse(const ISteamMatchmakingServerListResponse &);
	ISteamMatchmakingServerListResponse();
	ISteamMatchmakingServerListResponse & operator=(ISteamMatchmakingServerListResponse &);
	ISteamMatchmakingServerListResponse & operator=(const ISteamMatchmakingServerListResponse &);
};
class ISteamMatchmakingPingResponse
{
public:
	void ServerResponded(gameserveritem_t &);
	void ServerFailedToRespond();
	ISteamMatchmakingPingResponse(ISteamMatchmakingPingResponse &);
	ISteamMatchmakingPingResponse(const ISteamMatchmakingPingResponse &);
	ISteamMatchmakingPingResponse();
	ISteamMatchmakingPingResponse & operator=(ISteamMatchmakingPingResponse &);
	ISteamMatchmakingPingResponse & operator=(const ISteamMatchmakingPingResponse &);
};
class ISteamMatchmakingPlayersResponse
{
public:
	void AddPlayerToList(const char *, long, float);
	void PlayersFailedToRespond();
	void PlayersRefreshComplete();
	ISteamMatchmakingPlayersResponse(ISteamMatchmakingPlayersResponse &);
	ISteamMatchmakingPlayersResponse(const ISteamMatchmakingPlayersResponse &);
	ISteamMatchmakingPlayersResponse();
	ISteamMatchmakingPlayersResponse & operator=(ISteamMatchmakingPlayersResponse &);
	ISteamMatchmakingPlayersResponse & operator=(const ISteamMatchmakingPlayersResponse &);
};
class ISteamMatchmakingRulesResponse
{
public:
	void RulesResponded(const char *, const char *);
	void RulesFailedToRespond();
	void RulesRefreshComplete();
	ISteamMatchmakingRulesResponse(ISteamMatchmakingRulesResponse &);
	ISteamMatchmakingRulesResponse(const ISteamMatchmakingRulesResponse &);
	ISteamMatchmakingRulesResponse();
	ISteamMatchmakingRulesResponse & operator=(ISteamMatchmakingRulesResponse &);
	ISteamMatchmakingRulesResponse & operator=(const ISteamMatchmakingRulesResponse &);
};
class ISteamMatchmakingServers
{
public:
	void * RequestInternetServerList(unsigned long, MatchMakingKeyValuePair_t * *, unsigned long, ISteamMatchmakingServerListResponse *);
	void * RequestLANServerList(unsigned long, ISteamMatchmakingServerListResponse *);
	void * RequestFriendsServerList(unsigned long, MatchMakingKeyValuePair_t * *, unsigned long, ISteamMatchmakingServerListResponse *);
	void * RequestFavoritesServerList(unsigned long, MatchMakingKeyValuePair_t * *, unsigned long, ISteamMatchmakingServerListResponse *);
	void * RequestHistoryServerList(unsigned long, MatchMakingKeyValuePair_t * *, unsigned long, ISteamMatchmakingServerListResponse *);
	void * RequestSpectatorServerList(unsigned long, MatchMakingKeyValuePair_t * *, unsigned long, ISteamMatchmakingServerListResponse *);
	void ReleaseRequest(void *);
	gameserveritem_t * GetServerDetails(void *, long);
	void CancelQuery(void *);
	void RefreshQuery(void *);
	bool IsRefreshing(void *);
	long GetServerCount(void *);
	void RefreshServer(void *, long);
	long PingServer(unsigned long, unsigned short, ISteamMatchmakingPingResponse *);
	long PlayerDetails(unsigned long, unsigned short, ISteamMatchmakingPlayersResponse *);
	long ServerRules(unsigned long, unsigned short, ISteamMatchmakingRulesResponse *);
	void CancelServerQuery(long);
	ISteamMatchmakingServers(ISteamMatchmakingServers &);
	ISteamMatchmakingServers(const ISteamMatchmakingServers &);
	ISteamMatchmakingServers();
	ISteamMatchmakingServers & operator=(ISteamMatchmakingServers &);
	ISteamMatchmakingServers & operator=(const ISteamMatchmakingServers &);
};
enum EChatMemberStateChange
{
	k_EChatMemberStateChangeEntered = 1,
	k_EChatMemberStateChangeLeft = 2,
	k_EChatMemberStateChangeDisconnected = 4,
	k_EChatMemberStateChangeKicked = 8,
	k_EChatMemberStateChangeBanned = 16,
};
struct LobbyEnter_t
{
	enum <unnamed-enum-k_iCallback>
	{
		k_iCallback = 504,
	};
	unsigned long long m_ulSteamIDLobby; // 0x0
	unsigned long m_rgfChatPermissions; // 0x8
	bool m_bLocked; // 0xC
	unsigned long m_EChatRoomEnterResponse; // 0x10
};
struct LobbyDataUpdate_t
{
	enum <unnamed-enum-k_iCallback>
	{
		k_iCallback = 505,
	};
	unsigned long long m_ulSteamIDLobby; // 0x0
	unsigned long long m_ulSteamIDMember; // 0x8
	unsigned char m_bSuccess; // 0x10
};
struct LobbyChatUpdate_t
{
	enum <unnamed-enum-k_iCallback>
	{
		k_iCallback = 506,
	};
	unsigned long long m_ulSteamIDLobby; // 0x0
	unsigned long long m_ulSteamIDUserChanged; // 0x8
	unsigned long long m_ulSteamIDMakingChange; // 0x10
	unsigned long m_rgfChatMemberStateChange; // 0x18
};
struct LobbyChatMsg_t
{
	enum <unnamed-enum-k_iCallback>
	{
		k_iCallback = 507,
	};
	unsigned long long m_ulSteamIDLobby; // 0x0
	unsigned long long m_ulSteamIDUser; // 0x8
	unsigned char m_eChatEntryType; // 0x10
	unsigned long m_iChatID; // 0x14
};
struct LobbyMatchList_t
{
	enum <unnamed-enum-k_iCallback>
	{
		k_iCallback = 510,
	};
	unsigned long m_nLobbiesMatching; // 0x0
};
struct LobbyKicked_t
{
	enum <unnamed-enum-k_iCallback>
	{
		k_iCallback = 512,
	};
	unsigned long long m_ulSteamIDLobby; // 0x0
	unsigned long long m_ulSteamIDAdmin; // 0x8
	unsigned char m_bKickedDueToDisconnect; // 0x10
};
struct LobbyCreated_t
{
	enum <unnamed-enum-k_iCallback>
	{
		k_iCallback = 513,
	};
	EResult m_eResult; // 0x0
	unsigned long long m_ulSteamIDLobby; // 0x8
};