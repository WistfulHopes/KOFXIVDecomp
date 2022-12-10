#pragma once

enum EResult
{
	k_EResultOK = 1,
	k_EResultFail = 2,
	k_EResultNoConnection = 3,
	k_EResultInvalidPassword = 5,
	k_EResultLoggedInElsewhere = 6,
	k_EResultInvalidProtocolVer = 7,
	k_EResultInvalidParam = 8,
	k_EResultFileNotFound = 9,
	k_EResultBusy = 10,
	k_EResultInvalidState = 11,
	k_EResultInvalidName = 12,
	k_EResultInvalidEmail = 13,
	k_EResultDuplicateName = 14,
	k_EResultAccessDenied = 15,
	k_EResultTimeout = 16,
	k_EResultBanned = 17,
	k_EResultAccountNotFound = 18,
	k_EResultInvalidSteamID = 19,
	k_EResultServiceUnavailable = 20,
	k_EResultNotLoggedOn = 21,
	k_EResultPending = 22,
	k_EResultEncryptionFailure = 23,
	k_EResultInsufficientPrivilege = 24,
	k_EResultLimitExceeded = 25,
	k_EResultRevoked = 26,
	k_EResultExpired = 27,
	k_EResultAlreadyRedeemed = 28,
	k_EResultDuplicateRequest = 29,
	k_EResultAlreadyOwned = 30,
	k_EResultIPNotFound = 31,
	k_EResultPersistFailed = 32,
	k_EResultLockingFailed = 33,
	k_EResultLogonSessionReplaced = 34,
	k_EResultConnectFailed = 35,
	k_EResultHandshakeFailed = 36,
	k_EResultIOFailure = 37,
	k_EResultRemoteDisconnect = 38,
	k_EResultShoppingCartNotFound = 39,
	k_EResultBlocked = 40,
	k_EResultIgnored = 41,
	k_EResultNoMatch = 42,
	k_EResultAccountDisabled = 43,
	k_EResultServiceReadOnly = 44,
	k_EResultAccountNotFeatured = 45,
	k_EResultAdministratorOK = 46,
	k_EResultContentVersion = 47,
	k_EResultTryAnotherCM = 48,
	k_EResultPasswordRequiredToKickSession = 49,
	k_EResultAlreadyLoggedInElsewhere = 50,
	k_EResultSuspended = 51,
	k_EResultCancelled = 52,
	k_EResultDataCorruption = 53,
	k_EResultDiskFull = 54,
	k_EResultRemoteCallFailed = 55,
	k_EResultPasswordUnset = 56,
	k_EResultExternalAccountUnlinked = 57,
	k_EResultPSNTicketInvalid = 58,
	k_EResultExternalAccountAlreadyLinked = 59,
	k_EResultRemoteFileConflict = 60,
	k_EResultIllegalPassword = 61,
	k_EResultSameAsPreviousValue = 62,
	k_EResultAccountLogonDenied = 63,
	k_EResultCannotUseOldPassword = 64,
	k_EResultInvalidLoginAuthCode = 65,
	k_EResultAccountLogonDeniedNoMail = 66,
	k_EResultHardwareNotCapableOfIPT = 67,
	k_EResultIPTInitError = 68,
	k_EResultParentalControlRestricted = 69,
	k_EResultFacebookQueryError = 70,
	k_EResultExpiredLoginAuthCode = 71,
	k_EResultIPLoginRestrictionFailed = 72,
	k_EResultAccountLockedDown = 73,
	k_EResultAccountLogonDeniedVerifiedEmailRequired = 74,
	k_EResultNoMatchingURL = 75,
	k_EResultBadResponse = 76,
	k_EResultRequirePasswordReEntry = 77,
	k_EResultValueOutOfRange = 78,
	k_EResultUnexpectedError = 79,
	k_EResultDisabled = 80,
	k_EResultInvalidCEGSubmission = 81,
	k_EResultRestrictedDevice = 82,
	k_EResultRegionLocked = 83,
	k_EResultRateLimitExceeded = 84,
	k_EResultAccountLoginDeniedNeedTwoFactor = 85,
	k_EResultItemDeleted = 86,
	k_EResultAccountLoginDeniedThrottle = 87,
	k_EResultTwoFactorCodeMismatch = 88,
	k_EResultTwoFactorActivationCodeMismatch = 89,
	k_EResultAccountAssociatedToMultiplePartners = 90,
	k_EResultNotModified = 91,
	k_EResultNoMobileDevice = 92,
	k_EResultTimeNotSynced = 93,
	k_EResultSmsCodeFailed = 94,
	k_EResultAccountLimitExceeded = 95,
	k_EResultAccountActivityLimitExceeded = 96,
	k_EResultPhoneActivityLimitExceeded = 97,
	k_EResultRefundToWallet = 98,
	k_EResultEmailSendFailure = 99,
	k_EResultNotSettled = 100,
	k_EResultNeedCaptcha = 101,
	k_EResultGSLTDenied = 102,
	k_EResultGSOwnerDenied = 103,
	k_EResultInvalidItemType = 104,
	k_EResultIPBanned = 105,
	k_EResultGSLTExpired = 106,
};
enum EVoiceResult
{
	k_EVoiceResultOK = 0,
	k_EVoiceResultNotInitialized = 1,
	k_EVoiceResultNotRecording = 2,
	k_EVoiceResultNoData = 3,
	k_EVoiceResultBufferTooSmall = 4,
	k_EVoiceResultDataCorrupted = 5,
	k_EVoiceResultRestricted = 6,
	k_EVoiceResultUnsupportedCodec = 7,
	k_EVoiceResultReceiverOutOfDate = 8,
	k_EVoiceResultReceiverDidNotAnswer = 9,
};
enum EAccountType
{
	k_EAccountTypeInvalid = 0,
	k_EAccountTypeIndividual = 1,
	k_EAccountTypeMultiseat = 2,
	k_EAccountTypeGameServer = 3,
	k_EAccountTypeAnonGameServer = 4,
	k_EAccountTypePending = 5,
	k_EAccountTypeContentServer = 6,
	k_EAccountTypeClan = 7,
	k_EAccountTypeChat = 8,
	k_EAccountTypeConsoleUser = 9,
	k_EAccountTypeAnonUser = 10,
	k_EAccountTypeMax = 11,
};
enum EChatRoomEnterResponse
{
	k_EChatRoomEnterResponseSuccess = 1,
	k_EChatRoomEnterResponseDoesntExist = 2,
	k_EChatRoomEnterResponseNotAllowed = 3,
	k_EChatRoomEnterResponseFull = 4,
	k_EChatRoomEnterResponseError = 5,
	k_EChatRoomEnterResponseBanned = 6,
	k_EChatRoomEnterResponseLimited = 7,
	k_EChatRoomEnterResponseClanDisabled = 8,
	k_EChatRoomEnterResponseCommunityBan = 9,
	k_EChatRoomEnterResponseMemberBlockedYou = 10,
	k_EChatRoomEnterResponseYouBlockedMember = 11,
};
enum EChatSteamIDInstanceFlags
{
	k_EChatAccountInstanceMask = 4095,
	k_EChatInstanceFlagClan = 524288,
	k_EChatInstanceFlagLobby = 262144,
	k_EChatInstanceFlagMMSLobby = 131072,
};
enum EMarketingMessageFlags
{
	k_EMarketingMessageFlagsNone = 0,
	k_EMarketingMessageFlagsHighPriority = 1,
	k_EMarketingMessageFlagsPlatformWindows = 2,
	k_EMarketingMessageFlagsPlatformMac = 4,
	k_EMarketingMessageFlagsPlatformLinux = 8,
	k_EMarketingMessageFlagsPlatformRestrictions = 14,
};
enum ELaunchOptionType
{
	k_ELaunchOptionType_None = 0,
	k_ELaunchOptionType_Default = 1,
	k_ELaunchOptionType_SafeMode = 2,
	k_ELaunchOptionType_Multiplayer = 3,
	k_ELaunchOptionType_Config = 4,
	k_ELaunchOptionType_OpenVR = 5,
	k_ELaunchOptionType_Server = 6,
	k_ELaunchOptionType_Editor = 7,
	k_ELaunchOptionType_Manual = 8,
	k_ELaunchOptionType_Benchmark = 9,
	k_ELaunchOptionType_Option1 = 10,
	k_ELaunchOptionType_Option2 = 11,
	k_ELaunchOptionType_Option3 = 12,
	k_ELaunchOptionType_OculusVR = 13,
	k_ELaunchOptionType_OpenVROverlay = 14,
	k_ELaunchOptionType_OSVR = 15,
	k_ELaunchOptionType_Dialog = 1000,
};
enum EVRHMDType
{
	k_eEVRHMDType_None = 255,
	k_eEVRHMDType_Unknown = 0,
	k_eEVRHMDType_HTC_Dev = 1,
	k_eEVRHMDType_HTC_VivePre = 2,
	k_eEVRHMDType_HTC_Vive = 3,
	k_eEVRHMDType_HTC_Unknown = 20,
	k_eEVRHMDType_Oculus_DK1 = 21,
	k_eEVRHMDType_Oculus_DK2 = 22,
	k_eEVRHMDType_Oculus_Rift = 23,
	k_eEVRHMDType_Oculus_Unknown = 40,
};
class CSteamID
{
private:
	CSteamID(long);
	CSteamID(unsigned long);
public:
	CSteamID(const char *, EUniverse);
	CSteamID(unsigned long long);
	CSteamID(unsigned long, unsigned long, EUniverse, EAccountType);
	CSteamID(unsigned long, EUniverse, EAccountType);
	CSteamID();
	void Set(unsigned long, EUniverse, EAccountType);
	void InstancedSet(unsigned long, unsigned long, EUniverse, EAccountType);
	void FullSet(unsigned long long, EUniverse, EAccountType);
	void SetFromUint64(unsigned long long);
	void Clear();
	unsigned long long ConvertToUint64();
	unsigned long long GetStaticAccountKey();
	void CreateBlankAnonLogon(EUniverse);
	void CreateBlankAnonUserLogon(EUniverse);
	bool BBlankAnonAccount();
	bool BGameServerAccount();
	bool BPersistentGameServerAccount();
	bool BAnonGameServerAccount();
	bool BContentServerAccount();
	bool BClanAccount();
	bool BChatAccount();
	bool IsLobby();
	bool BIndividualAccount();
	bool BAnonAccount();
	bool BAnonUserAccount();
	bool BConsoleUserAccount();
	void SetAccountID(unsigned long);
	void SetAccountInstance(unsigned long);
	void ClearIndividualInstance();
	bool HasNoIndividualInstance();
	unsigned long GetAccountID();
	unsigned long GetUnAccountInstance();
	EAccountType GetEAccountType();
	EUniverse GetEUniverse();
	void SetEUniverse(EUniverse);
	bool IsValid();
	static const char * Render(unsigned long long);
	const char * Render();
	void SetFromString(const char *, EUniverse);
	bool SetFromStringStrict(const char *, EUniverse);
	bool SetFromSteam2String(const char *, EUniverse);
	bool operator==(const CSteamID &);
	bool operator!=(const CSteamID &);
	bool operator<(const CSteamID &);
	bool operator>(const CSteamID &);
	bool BValidExternalSteamID();
	union SteamID_t;
private:
	CSteamID::SteamID_t m_steamid; // 0x0
};
union CSteamID::SteamID_t
{
	struct SteamIDComponent_t;
public:
	CSteamID::SteamID_t::SteamIDComponent_t m_comp; // 0x0
	unsigned long long m_unAll64Bits; // 0x0
};
struct CSteamID::SteamID_t::SteamIDComponent_t
{
	unsigned long m_unAccountID : 32; // 0x0
	unsigned long m_unAccountInstance : 20; // 0x4
	unsigned long m_EAccountType : 4; // 0x4
	EUniverse m_EUniverse : 8; // 0x4
};
bool CSteamID::IsValid(); // 0x140047A10
class CGameID
{
public:
	CGameID(const char *);
	CGameID(unsigned long, unsigned long);
	CGameID(unsigned long);
	CGameID(long);
	CGameID(unsigned long long);
	CGameID();
	static const char * Render(unsigned long long);
	const char * Render();
	unsigned long long ToUint64();
	unsigned long long * GetUint64Ptr();
	void Set(unsigned long long);
	bool IsMod();
	bool IsShortcut();
	bool IsP2PFile();
	bool IsSteamApp();
	unsigned long ModID();
	unsigned long AppID();
	bool operator==(const CGameID &);
	bool operator!=(const CGameID &);
	bool operator<(const CGameID &);
	bool IsValid();
	void Reset();
	enum EGameIDType
	{
		k_EGameIDTypeApp = 0,
		k_EGameIDTypeGameMod = 1,
		k_EGameIDTypeShortcut = 2,
		k_EGameIDTypeP2P = 3,
	};
	struct GameID_t;
private:
	unsigned long long m_ulGameID; // 0x0
	CGameID::GameID_t m_gameID; // 0x0
};
struct CGameID::GameID_t
{
	unsigned long m_nAppID : 24; // 0x0
	unsigned long m_nType : 8; // 0x0
	unsigned long m_nModID : 32; // 0x4
};