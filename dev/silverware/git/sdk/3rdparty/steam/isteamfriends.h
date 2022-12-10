#pragma once

enum EFriendRelationship
{
	k_EFriendRelationshipNone = 0,
	k_EFriendRelationshipBlocked = 1,
	k_EFriendRelationshipRequestRecipient = 2,
	k_EFriendRelationshipFriend = 3,
	k_EFriendRelationshipRequestInitiator = 4,
	k_EFriendRelationshipIgnored = 5,
	k_EFriendRelationshipIgnoredFriend = 6,
	k_EFriendRelationshipSuggested_DEPRECATED = 7,
	k_EFriendRelationshipMax = 8,
};
enum EPersonaState
{
	k_EPersonaStateOffline = 0,
	k_EPersonaStateOnline = 1,
	k_EPersonaStateBusy = 2,
	k_EPersonaStateAway = 3,
	k_EPersonaStateSnooze = 4,
	k_EPersonaStateLookingToTrade = 5,
	k_EPersonaStateLookingToPlay = 6,
	k_EPersonaStateMax = 7,
};
enum EFriendFlags
{
	k_EFriendFlagNone = 0,
	k_EFriendFlagBlocked = 1,
	k_EFriendFlagFriendshipRequested = 2,
	k_EFriendFlagImmediate = 4,
	k_EFriendFlagClanMember = 8,
	k_EFriendFlagOnGameServer = 16,
	k_EFriendFlagRequestingFriendship = 128,
	k_EFriendFlagRequestingInfo = 256,
	k_EFriendFlagIgnored = 512,
	k_EFriendFlagIgnoredFriend = 1024,
	k_EFriendFlagSuggested = 2048,
	k_EFriendFlagChatMember = 4096,
	k_EFriendFlagAll = 65535,
};
struct FriendGameInfo_t
{
	CGameID m_gameID; // 0x0
	unsigned long m_unGameIP; // 0x8
	unsigned short m_usGamePort; // 0xC
	unsigned short m_usQueryPort; // 0xE
	CSteamID m_steamIDLobby; // 0x10
	FriendGameInfo_t();
};
enum <unnamed-enum-k_cchPersonaNameMax>
{
	k_cchPersonaNameMax = 128,
	k_cwchPersonaNameMax = 32,
};
enum EUserRestriction
{
	k_nUserRestrictionNone = 0,
	k_nUserRestrictionUnknown = 1,
	k_nUserRestrictionAnyChat = 2,
	k_nUserRestrictionVoiceChat = 4,
	k_nUserRestrictionGroupChat = 8,
	k_nUserRestrictionRating = 16,
	k_nUserRestrictionGameInvites = 32,
	k_nUserRestrictionTrading = 64,
};
enum <unnamed-enum-k_cchMaxRichPresenceValueLength>
{
	k_cchMaxRichPresenceValueLength = 256,
};
enum EOverlayToStoreFlag
{
	k_EOverlayToStoreFlag_None = 0,
	k_EOverlayToStoreFlag_AddToCart = 1,
	k_EOverlayToStoreFlag_AddToCartAndShow = 2,
};
class ISteamFriends
{
public:
	const char * GetPersonaName();
	unsigned long long SetPersonaName(const char *);
	EPersonaState GetPersonaState();
	long GetFriendCount(long);
	CSteamID GetFriendByIndex(long, long);
	EFriendRelationship GetFriendRelationship(CSteamID);
	EPersonaState GetFriendPersonaState(CSteamID);
	const char * GetFriendPersonaName(CSteamID);
	bool GetFriendGamePlayed(CSteamID, FriendGameInfo_t *);
	const char * GetFriendPersonaNameHistory(CSteamID, long);
	long GetFriendSteamLevel(CSteamID);
	const char * GetPlayerNickname(CSteamID);
	long GetFriendsGroupCount();
	short GetFriendsGroupIDByIndex(long);
	const char * GetFriendsGroupName(short);
	long GetFriendsGroupMembersCount(short);
	void GetFriendsGroupMembersList(short, CSteamID *, long);
	bool HasFriend(CSteamID, long);
	long GetClanCount();
	CSteamID GetClanByIndex(long);
	const char * GetClanName(CSteamID);
	const char * GetClanTag(CSteamID);
	bool GetClanActivityCounts(CSteamID, long *, long *, long *);
	unsigned long long DownloadClanActivityCounts(CSteamID *, long);
	long GetFriendCountFromSource(CSteamID);
	CSteamID GetFriendFromSourceByIndex(CSteamID, long);
	bool IsUserInSource(CSteamID, CSteamID);
	void SetInGameVoiceSpeaking(CSteamID, bool);
	void ActivateGameOverlay(const char *);
	void ActivateGameOverlayToUser(const char *, CSteamID);
	void ActivateGameOverlayToWebPage(const char *);
	void ActivateGameOverlayToStore(unsigned long, EOverlayToStoreFlag);
	void SetPlayedWith(CSteamID);
	void ActivateGameOverlayInviteDialog(CSteamID);
	long GetSmallFriendAvatar(CSteamID);
	long GetMediumFriendAvatar(CSteamID);
	long GetLargeFriendAvatar(CSteamID);
	bool RequestUserInformation(CSteamID, bool);
	unsigned long long RequestClanOfficerList(CSteamID);
	CSteamID GetClanOwner(CSteamID);
	long GetClanOfficerCount(CSteamID);
	CSteamID GetClanOfficerByIndex(CSteamID, long);
	unsigned long GetUserRestrictions();
	bool SetRichPresence(const char *, const char *);
	void ClearRichPresence();
	const char * GetFriendRichPresence(CSteamID, const char *);
	long GetFriendRichPresenceKeyCount(CSteamID);
	const char * GetFriendRichPresenceKeyByIndex(CSteamID, long);
	void RequestFriendRichPresence(CSteamID);
	bool InviteUserToGame(CSteamID, const char *);
	long GetCoplayFriendCount();
	CSteamID GetCoplayFriend(long);
	long GetFriendCoplayTime(CSteamID);
	unsigned long GetFriendCoplayGame(CSteamID);
	unsigned long long JoinClanChatRoom(CSteamID);
	bool LeaveClanChatRoom(CSteamID);
	long GetClanChatMemberCount(CSteamID);
	CSteamID GetChatMemberByIndex(CSteamID, long);
	bool SendClanChatMessage(CSteamID, const char *);
	long GetClanChatMessage(CSteamID, long, void *, long, EChatEntryType *, CSteamID *);
	bool IsClanChatAdmin(CSteamID, CSteamID);
	bool IsClanChatWindowOpenInSteam(CSteamID);
	bool OpenClanChatWindowInSteam(CSteamID);
	bool CloseClanChatWindowInSteam(CSteamID);
	bool SetListenForFriendsMessages(bool);
	bool ReplyToFriendMessage(CSteamID, const char *);
	long GetFriendMessage(CSteamID, long, void *, long, EChatEntryType *);
	unsigned long long GetFollowerCount(CSteamID);
	unsigned long long IsFollowing(CSteamID);
	unsigned long long EnumerateFollowingList(unsigned long);
	ISteamFriends(ISteamFriends &);
	ISteamFriends(const ISteamFriends &);
	ISteamFriends();
	ISteamFriends & operator=(ISteamFriends &);
	ISteamFriends & operator=(const ISteamFriends &);
};
struct PersonaStateChange_t
{
	enum <unnamed-enum-k_iCallback>
	{
		k_iCallback = 304,
	};
	unsigned long long m_ulSteamID; // 0x0
	long m_nChangeFlags; // 0x8
};
enum EPersonaChange
{
	k_EPersonaChangeName = 1,
	k_EPersonaChangeStatus = 2,
	k_EPersonaChangeComeOnline = 4,
	k_EPersonaChangeGoneOffline = 8,
	k_EPersonaChangeGamePlayed = 16,
	k_EPersonaChangeGameServer = 32,
	k_EPersonaChangeAvatar = 64,
	k_EPersonaChangeJoinedSource = 128,
	k_EPersonaChangeLeftSource = 256,
	k_EPersonaChangeRelationshipChanged = 512,
	k_EPersonaChangeNameFirstSet = 1024,
	k_EPersonaChangeFacebookInfo = 2048,
	k_EPersonaChangeNickname = 4096,
	k_EPersonaChangeSteamLevel = 8192,
};
struct GameOverlayActivated_t
{
	enum <unnamed-enum-k_iCallback>
	{
		k_iCallback = 331,
	};
	unsigned char m_bActive; // 0x0
};
struct GameLobbyJoinRequested_t
{
	enum <unnamed-enum-k_iCallback>
	{
		k_iCallback = 333,
	};
	CSteamID m_steamIDLobby; // 0x0
	CSteamID m_steamIDFriend; // 0x8
	GameLobbyJoinRequested_t();
};