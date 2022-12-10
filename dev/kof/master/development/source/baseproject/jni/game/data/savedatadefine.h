#pragma once

enum <unnamed-enum-SV_SOUNDVOLUME_OFF>
{
	SV_SOUNDVOLUME_OFF = 0,
	SV_SOUNDVOLUME_INITIAL = 100,
	SV_SOUNDVOLUME_MASTER_INITIAL = 70,
	SV_SOUNDVOLUME_MAX = 100,
	SV_DISPLAY_BRIGHTNESS_INITIAL = 10,
	SV_DISPLAY_BRIGHTNESS_MIN = 1,
	SV_DISPLAY_BRIGHTNESS_MAX = 15,
};
struct StoryScore
{
	CHARACTER_NO m_CharacterNo[3]; // 0x0
	long m_Score; // 0xC
};
struct SurvivalScore
{
	CHARACTER_NO m_CharacterNo; // 0x0
	long m_Score; // 0x4
};
struct TimeAttackScore
{
	CHARACTER_NO m_CharacterNo; // 0x0
	long m_Score; // 0x4
};
struct GalleryFlag
{
	unsigned long m_Flag[35]; // 0x0
	unsigned long m_NewFlag[35]; // 0x8C
};
struct NetworkTitleFlag
{
	unsigned short m_BattleNum; // 0x0
	unsigned long m_Flag[10]; // 0x4
	unsigned long m_NewFlag[10]; // 0x2C
};
struct FightingResult
{
	Fw::ONLINEID m_OnlineId; // 0x0
	unsigned long long m_Date; // 0x8
	unsigned char m_Icon; // 0x10
	unsigned char m_Character[3][2]; // 0x11
	unsigned char m_Result; // 0x17
	unsigned char m_GameMode; // 0x18
	unsigned char m_GameRule; // 0x19
	unsigned char m_MyPlayerId; // 0x1A
	unsigned char m_MyPlayerIndex; // 0x1B
	unsigned char m_EnemyPlayerId; // 0x1C
	unsigned char m_EnemyPlayerIndex; // 0x1D
	unsigned char m_FightBonus; // 0x1E
	unsigned char m_MyDisconnectLevel; // 0x1F
	unsigned char m_EnemyDisconnectLevel; // 0x20
};
struct OpponentList
{
	Fw::ONLINEID m_OnlineId; // 0x0
	unsigned long long m_Tick; // 0x8
	unsigned long m_BattleWinNum; // 0x10
	unsigned long m_BattleLoseNum; // 0x14
	unsigned long m_BattleDrawNum; // 0x18
	unsigned long m_TrainingNum; // 0x1C
	bool m_FriendFlag; // 0x20
	float GetWinRate();
};
struct FirstNoticeFlag
{
	unsigned long m_Flag[1]; // 0x0
};
enum <unnamed-enum-FIRST_NOTICE_FLAG_NETWORK>
{
	FIRST_NOTICE_FLAG_NETWORK = 0,
	FIRST_NOTICE_FLAG_RANKMATCH = 1,
	FIRST_NOTICE_FLAG_SKIP_GRADE = 2,
	FIRST_NOTICE_FLAG_OPENING_DEMO = 3,
	FIRST_NOTICE_FLAG_SOUND_NOTIFICATION = 4,
	FIRST_NOTICE_FLAG_ANT_NOTIFICATION = 5,
	FIRST_NOTICE_FLAG_VRS_NOTIFICATION = 6,
	FIRST_NOTICE_FLAG_STORY_CLEAR = 7,
	FIRST_NOTICE_FLAG_MAINMENUBGM_VO = 8,
	FIRST_NOTICE_FLAG_TUTORIAL_INITIAL = 9,
	FIRST_NOTICE_FLAG_TUTORIAL_FINAL = 10,
	FIRST_NOTICE_FLAG_NETWORK_SINGLE = 11,
	FIRST_NOTICE_FLAG_NETWORK_STAGE = 12,
	FIRST_NOTICE_FLAG_NETWORK_MESSAGE = 13,
	FIRST_NOTICE_FLAG_GALLERY_MESSAGE = 14,
	FIRST_NOTICE_FLAG_STAGE_NOTIFICATION = 15,
	FIRST_NOTICE_FLAG_PLAYGO = 16,
	FIRST_NOTICE_FLAG_NETWORK_NAT2 = 17,
	FIRST_NOTICE_FLAG_NETWORK_NAT3 = 18,
	FIRST_NOTICE_FLAG_GET_BGM = 19,
	FIRST_NOTICE_FLAG_DISCONNECT_LEVEL = 20,
	FIRST_NOTICE_FLAG_BATTLE_DISCONNECT = 21,
	FIRST_NOTICE_FLAG_MAX = 22,
};
struct OnlineBattleLog
{
	unsigned long m_RankMatchWinMonthly; // 0x0
};
struct SaveRecord_GameHistory
{
	GAME_RULE m_GameRule; // 0x0
	STAGE_ID m_StageID; // 0x4
	void setDefault();
	SaveRecord_GameHistory();
};
struct SaveRecord_RecordKey
{
	long m_Version; // 0x0
	unsigned long m_KeyCount[6][2]; // 0x4
	short * m_RecordKey[6][2]; // 0x38
	void CommitRecordKey();
	void UpdateRecordKey();
	void setDefault();
	SaveRecord_RecordKey();
	~SaveRecord_RecordKey();
};
struct SaveRecord_GameProgress
{
	bool m_GameStartupFlag; // 0x0
	FirstNoticeFlag m_FirstNoticeFlag; // 0x4
	GalleryFlag m_Gallery; // 0x8
	NetworkTitleFlag m_NetworkTitle; // 0x120
	OpponentList m_OpponentList[2000]; // 0x178
	FightingResult m_FightingList[100]; // 0x139F8
	OnlineBattleLog m_OnlineBattleLog; // 0x14998
	TrainingSetting m_TrainingSetting; // 0x1499C
	void setDefault();
	SaveRecord_GameProgress();
};
SaveRecord_GameProgress::SaveRecord_GameProgress(); // 0x1400984D0
struct SaveRecord_SysOption
{
	LANGUAGE_MODE iUILanguage; // 0x0
	bool bVibration; // 0x4
	unsigned char iReplayAutoSave; // 0x5
	unsigned char iAnnounceType; // 0x6
	void setDefault();
	SaveRecord_SysOption();
};
struct SaveRecord_GameOption
{
	AiLevelSpec iAiLevel; // 0x0
	WIN_ROUND_COUNT iWinRoundCount; // 0x4
	BATTLE_ROUND_TIMER_TYPE iRoundTimerType; // 0x8
	void setDefault();
	SaveRecord_GameOption();
};
struct SaveRecord_SoundOption
{
	long iSoundVolumeMaster; // 0x0
	long iSoundVolumeBGM; // 0x4
	long iSoundVolumeSE; // 0x8
	long iSoundVolumeAmbience; // 0xC
	long iSoundVolumeCharacterVoice; // 0x10
	long iSoundVolumeSystemVoice; // 0x14
	long iSoundVolumePad; // 0x18
	void setDefault();
	SaveRecord_SoundOption();
};
struct SaveRecord_DisplayOption
{
	long iBrightness; // 0x0
	bool bCommentDraw; // 0x4
	long iWidth[3]; // 0x8
	long iHeight[3]; // 0x14
	long iWindowMode; // 0x20
	long iLastFullscreenMode; // 0x24
	bool bVSync; // 0x28
	bool bHudDraw; // 0x29
	long iHPGaugePositionPlusY; // 0x2C
	long iComboCounterPositionPlusX; // 0x30
	long iPowerGaugePositionPlusY; // 0x34
	void setDefault();
	void setDefaultOption();
	SaveRecord_DisplayOption();
};
struct SaveRecord_GraphicsOption
{
	bool bBloomEnabled; // 0x0
	bool bDOFEnabled; // 0x1
	bool bFXAAEnabled; // 0x2
	bool bShadowsEnabled; // 0x3
	bool bGodRaysEnabled; // 0x4
	bool bMipMapsEnabled; // 0x5
	bool bAnisotropicFilteringEnabled; // 0x6
	bool bHeatHazeEnabled; // 0x7
	bool bForceShaderPurge; // 0x8
	void setDefault();
	void setDefaultOption();
	SaveRecord_GraphicsOption();
};
class std::map<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> > > :
	std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> >,0> >
{
	class _Myt;
	class _Mybase;
	struct key_type;
	class mapped_type;
	struct key_compare;
	class value_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<AgControllerUID const ,FighterOperationMapper> pointer;
	typedef const std::pair<AgControllerUID const ,FighterOperationMapper> const_pointer;
	typedef std::pair<AgControllerUID const ,FighterOperationMapper> reference;
	typedef const std::pair<AgControllerUID const ,FighterOperationMapper> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> > >(std::initializer_list<std::pair<AgControllerUID const ,FighterOperationMapper> >, const std::less<AgControllerUID> &, const std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> > &);
	map<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> > >(std::initializer_list<std::pair<AgControllerUID const ,FighterOperationMapper> >, const std::less<AgControllerUID> &);
	map<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> > >(std::initializer_list<std::pair<AgControllerUID const ,FighterOperationMapper> >);
	map<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> > >(std::map<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> > > &, const std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> > &);
	map<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> > >(std::map<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> > > &);
	map<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> > >(const std::less<AgControllerUID> &, const std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> > &);
	map<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> > >(const std::less<AgControllerUID> &);
	map<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> > >(const std::map<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> > > &, const std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> > &);
	map<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> > >(const std::map<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> > > &);
	map<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> > >(const std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> > &);
	map<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> > >();
	std::map<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> > > & operator=(std::initializer_list<std::pair<AgControllerUID const ,FighterOperationMapper> >);
	std::map<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> > > & operator=(std::map<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> > > &);
	std::map<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> > > & operator=(const std::map<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> > > &);
	FighterOperationMapper & operator[](const AgControllerUID &);
	FighterOperationMapper & operator[](AgControllerUID &);
	void swap(std::map<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> > > &);
	const FighterOperationMapper & at(const AgControllerUID &);
	FighterOperationMapper & at(const AgControllerUID &);
	~map<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> > >();
};
struct PCSavedDevice
{
	AgControllerUID uid; // 0x0
	unsigned long index; // 0x8
};
struct SaveRecord_ButtonConfigUser
{
	std::map<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> > > buttonMap; // 0x0
	FighterOperationKeyboardMapper keyboardMap; // 0x10
	PCSavedDevice device; // 0x410
	void SetSelectedDevice(long);
	long selectedDevice; // 0x41C
	void setDefault();
	void setDefaultForUser(USER_ID);
	SaveRecord_ButtonConfigUser(SaveRecord_ButtonConfigUser &);
	SaveRecord_ButtonConfigUser(const SaveRecord_ButtonConfigUser &);
	SaveRecord_ButtonConfigUser();
	~SaveRecord_ButtonConfigUser();
	SaveRecord_ButtonConfigUser & operator=(SaveRecord_ButtonConfigUser &);
	SaveRecord_ButtonConfigUser & operator=(const SaveRecord_ButtonConfigUser &);
};
SaveRecord_ButtonConfigUser::SaveRecord_ButtonConfigUser(); // 0x140098590
struct SaveRecord_ButtonConfig
{
	SaveRecord_ButtonConfigUser buttonConfig[5]; // 0x0
	void setDefault();
	SaveRecord_ButtonConfig(SaveRecord_ButtonConfig &);
	SaveRecord_ButtonConfig(const SaveRecord_ButtonConfig &);
	SaveRecord_ButtonConfig();
	~SaveRecord_ButtonConfig();
	SaveRecord_ButtonConfig & operator=(SaveRecord_ButtonConfig &);
	SaveRecord_ButtonConfig & operator=(const SaveRecord_ButtonConfig &);
};
enum ACHIEVMENT_LOG
{
	ACHIEVMENT_LOG_000 = 0,
	ACHIEVMENT_LOG_001 = 1,
	ACHIEVMENT_LOG_002 = 2,
	ACHIEVMENT_LOG_003 = 3,
	ACHIEVMENT_LOG_004 = 4,
	ACHIEVMENT_LOG_005 = 5,
	ACHIEVMENT_LOG_006 = 6,
	ACHIEVMENT_LOG_007 = 7,
	ACHIEVMENT_LOG_008 = 8,
	ACHIEVMENT_LOG_009 = 9,
	ACHIEVMENT_LOG_010 = 10,
	ACHIEVMENT_LOG_011 = 11,
	ACHIEVMENT_LOG_012 = 12,
	ACHIEVMENT_LOG_013 = 13,
	ACHIEVMENT_LOG_014 = 14,
	ACHIEVMENT_LOG_015 = 15,
	ACHIEVMENT_LOG_016 = 16,
	ACHIEVMENT_LOG_017 = 17,
	ACHIEVMENT_LOG_018 = 18,
	ACHIEVMENT_LOG_022 = 19,
	ACHIEVMENT_LOG_023 = 20,
	ACHIEVMENT_LOG_024 = 21,
	ACHIEVMENT_LOG_025 = 22,
	ACHIEVMENT_LOG_026 = 23,
	ACHIEVMENT_LOG_027 = 24,
	ACHIEVMENT_LOG_028 = 25,
	ACHIEVMENT_LOG_029 = 26,
	ACHIEVMENT_LOG_030 = 27,
	ACHIEVMENT_LOG_031 = 28,
	ACHIEVMENT_LOG_032 = 29,
	ACHIEVMENT_LOG_033 = 30,
	ACHIEVMENT_LOG_034 = 31,
	ACHIEVMENT_LOG_035 = 32,
	ACHIEVMENT_LOG_036 = 33,
	ACHIEVMENT_LOG_037 = 34,
	ACHIEVMENT_LOG_038 = 35,
	ACHIEVMENT_LOG_039 = 36,
	ACHIEVMENT_LOG_040 = 37,
	ACHIEVMENT_LOG_041 = 38,
	ACHIEVMENT_LOG_042 = 39,
	ACHIEVMENT_LOG_043 = 40,
	ACHIEVMENT_LOG_044 = 41,
	ACHIEVMENT_LOG_045 = 42,
	ACHIEVMENT_LOG_046 = 43,
	ACHIEVMENT_LOG_047 = 44,
	ACHIEVMENT_LOG_048 = 45,
	ACHIEVMENT_LOG_049 = 46,
	ACHIEVMENT_LOG_050 = 47,
	ACHIEVMENT_LOG_MAX = 48,
};
enum ACHIEVMENT_COUNT
{
	WIN_PERFECT = 0,
	WIN_STRAIGHT = 1,
	FINISH_SSP = 2,
	FINISH_MAX_SSP = 3,
	FINISH_CRIMAX_SSP = 4,
	CANCEL_SUPER = 5,
	CANCEL_ADVANCED = 6,
	CANCEL_CRIMAX = 7,
	DO_RUSH = 8,
	CREATE_ROOM = 9,
	PLAY_SINGLE_VS = 10,
	PLAY_PARTY_VS = 11,
	PLAY_TEAM_VS = 12,
	WIN_RANKED_MATCH = 13,
	WINS_RANKED_MATCH = 14,
	PLAY_BATTLE = 15,
	ACHIEVMENT_COUNT_MAX = 16,
};
struct SaveRecord_CharacterData
{
	CHARACTER_NO iCharacterNo; // 0x0
	long iUseCountOffLine; // 0x4
	long iWinCountOffLine; // 0x8
	long iUseCountOnLine; // 0xC
	long iWinCountOnLine; // 0x10
	long iTimeAttackScore; // 0x14
	long iSurvivalScore; // 0x18
	unsigned long iTrialsAchived; // 0x1C
	void setDefault(CHARACTER_NO);
	SaveRecord_CharacterData();
	bool GetTrialsAchived(long);
	void SetTrialsAchived(long, bool);
	long GetTrialsAchivedCount();
	long GetTrialsAchivedMax();
	float GetTrialsAchivedRate();
	CHARACTER_RANK GetRank();
};
struct OnlineProfileData
{
	bool find; // 0x0
	bool notplay; // 0x1
	PROFILE_ICON m_ProfileIcon; // 0x4
	NETWORK_TITLE m_MyNetWorkTitle; // 0x8
	long m_Country; // 0xC
	RANKMATCH_RANK m_Rank; // 0x10
	long m_RankMatchRankPoint; // 0x14
	long m_RankMatchWin; // 0x18
	long m_RankMatchLose; // 0x1C
	long m_RankMatchDraw; // 0x20
	float m_RankRate; // 0x24
	long m_RankMatchMaxWins; // 0x28
	float m_RankSuccesRate; // 0x2C
	char m_RankMatchLosePublication; // 0x30
	char m_RankMatchDrawPublication; // 0x31
	char m_RankMatchRatePublication; // 0x32
	char m_RankMatchDisConnectMarker; // 0x33
	bool m_RankMatchStart; // 0x34
	bool m_Patch_0111_After; // 0x35
};
struct SaveRecord_PlayerData
{
	long m_Version; // 0x0
	unsigned long long m_iPlayTime; // 0x8
	PROFILE_ICON m_ProfileIcon; // 0x10
	NETWORK_TITLE m_MyNetWorkTitle; // 0x14
	char m_RankMatchLosePublication; // 0x18
	char m_RankMatchDrawPublication; // 0x19
	char m_RankMatchRatePublication; // 0x1A
	bool m_SkipRankMatchRank; // 0x1B
	long m_RankMatchRankPoint; // 0x1C
	long m_RankMatchWin; // 0x20
	long m_RankMatchLose; // 0x24
	long m_RankMatchDraw; // 0x28
	long m_RankMatchWins; // 0x2C
	long m_RankMatchMaxWins; // 0x30
	long m_RankMatchCount; // 0x34
	unsigned long long m_LastRankMatchTime; // 0x38
	long m_DisconnectNum; // 0x40
	DISCONNECT_LEVEL m_DisconnectLevel; // 0x44
	long m_DisconnectLevelRankCount; // 0x48
	SaveRecord_CharacterData m_CharacterData[61]; // 0x4C
	StoryScore m_StoryScore[8]; // 0x7EC
	SurvivalScore m_SurvivalScore[8]; // 0x86C
	TimeAttackScore m_TimeAttackScore[8]; // 0x8AC
	unsigned long m_IconEnableFlag[5]; // 0x8EC
	unsigned long m_IconNewFlag[5]; // 0x900
	unsigned long long m_TutorialFlag; // 0x918
	char m_AchivementLog[48]; // 0x920
	unsigned long m_AchivementCount[16]; // 0x950
	long m_AchivementStoryClear; // 0x990
	unsigned long m_AchivementCount_TMP[16]; // 0x994
	long m_MyFavoriteStageNo; // 0x9D4
	STAGE_ID m_MyFavoriteStage[3]; // 0x9D8
	long m_MyFavoriteSingleNo; // 0x9E4
	CHARACTER_NO m_MyFavoriteSingle[3]; // 0x9E8
	CHARACTER_COLOR m_MyFavoriteSingleColor[3]; // 0x9F4
	char m_MyFavoriteSingleCostume[3]; // 0xA00
	long m_MyFavoriteTeamNo; // 0xA04
	CHARACTER_NO m_MyFavoriteTeam[3][3]; // 0xA08
	CHARACTER_COLOR m_MyFavoriteTeamColor[3][3]; // 0xA2C
	char m_MyFavoriteTeamCostume[3][3]; // 0xA50
	CHARACTER_NO m_MyFavoriteTeamRandom[3]; // 0xA5C
	CHARACTER_COLOR m_MyFavoriteTeamColorRandom[3]; // 0xA68
	CHARACTER_NO m_MyFavoriteSingleRandom; // 0xA74
	CHARACTER_COLOR m_MyFavoriteSingleColorRandom; // 0xA78
	STAGE_ID m_MyFavoriteStageRandom; // 0xA7C
	char m_MyFavoriteTelop[61]; // 0xA80
	char m_MyRoomName[49]; // 0xABD
	unsigned long long m_EnableCharcterFlag; // 0xAF0
	char m_OnlineIDStatus; // 0xAF8
	char m_VoiceChatStatus; // 0xAF9
	char m_TouchpadStatus; // 0xAFA
	RandomMT randMT; // 0xAFC
	char m_Patch111Flag; // 0x14C0
	void setDefault();
	SaveRecord_PlayerData();
	void SetDefaultTelop();
	void SetDefaultRoomName();
	void UpdatePlatyTime(unsigned long long);
	NETWORK_TITLE GetNetworkTitle();
	void SetNetworkTitle(NETWORK_TITLE);
	void GetCharacterOfflineRanking(SaveRecord_CharacterData *);
	void GetCharacterOnlineRanking(SaveRecord_CharacterData *);
	long GetTrialsAchivedCount();
	long GetTrialsAchivedMax();
	float GetTrialsAchivedRate();
	float GetRankMatchWinRate();
	float GetRankMatchEndRate();
	void UnlockIconFlag(PROFILE_ICON);
	bool GetIconEnableFlag(PROFILE_ICON);
	void SetIconEnableFlag(PROFILE_ICON, bool);
	float GetIconEnableRate();
	bool GetIconNewFlag(PROFILE_ICON);
	void SetIconNewFlag(PROFILE_ICON, bool);
	bool GetTutorialClear(long);
	void SetTutorialClear(long, bool);
	float GetTutorialRate();
	void AddAchivementCount(ACHIEVMENT_COUNT, long, bool);
	long GetAchivementCount(ACHIEVMENT_COUNT);
	void ResetAchivementCount(ACHIEVMENT_COUNT);
	void AddAchivementCount_TMP(ACHIEVMENT_COUNT, long);
	long GetAchivementCount_TMP(ACHIEVMENT_COUNT);
	void SetAchivementCount_TMP(ACHIEVMENT_COUNT, long);
	void ResetAchivementCount_TMP(ACHIEVMENT_COUNT);
	void ResetAchivementCount_TMP_ALL();
	void SetAchivementStoryClear(TEAM_ID, bool);
	bool GetAchivementStoryClear(TEAM_ID);
	void CheckAchivementCountComplete(std::list<int,std::allocator<int> >);
	void CheckAchivementCountComplete(ACHIEVMENT_COUNT);
	bool CheckAchivementStroyTeam();
	ACHIEVMENT_COUNT GetCountIdx(ACHIEVMENT_LOG);
	bool SetAchivementLog(ACHIEVMENT_LOG, char, bool);
	char GetAchivementLog(ACHIEVMENT_LOG);
	void SendAchivementLog();
	void SetMyFavoriteStage(STAGE_ID, long);
	void SetMyFavoriteStage(STAGE_ID);
	STAGE_ID GetMyFavoriteStage(long, bool);
	STAGE_ID GetMyFavoriteStage(bool);
	STAGE_ID GetRandomEnableStageID(STAGE_ID, STAGE_ID, STAGE_ID, STAGE_ID, STAGE_ID);
	void UpdatetMyFavoriteStageRandom();
	void SetMyFavoriteTeam(long, long, CHARACTER_NO, CHARACTER_COLOR, char, bool, bool);
	CHARACTER_NO GetMyFavoriteTeam(long, long, bool);
	CHARACTER_COLOR GetMyFavoriteTeamColor(long, long, bool);
	char GetMyFavoriteTeamCostume(long, long);
	void UpdatetMyFavoriteTeamRandom();
	void SetMyFavoriteSingle(long, CHARACTER_NO, CHARACTER_COLOR, char, bool);
	CHARACTER_NO GetMyFavoriteSingle(long, bool);
	CHARACTER_COLOR GetMyFavoriteSingleColor(long, bool);
	char GetMyFavoriteSingleCostume(long);
	void UpdatetMyFavoriteSingleRandom();
	CHARACTER_NO GetRandomEnableCharacter(CHARACTER_NO, CHARACTER_NO, CHARACTER_NO, CHARACTER_NO, CHARACTER_NO, CHARACTER_NO);
	bool IsEnableCharcter(CHARACTER_NO);
	static bool IsIgnoreCharcter(CHARACTER_NO);
	static bool IsSpecialeCharcter(CHARACTER_NO);
	void AddEnableCharcter(CHARACTER_NO);
	void DelEnableCharcter(CHARACTER_NO);
	long UpdateStoryScore(CHARACTER_NO, CHARACTER_NO, CHARACTER_NO, long);
	long UpdateTimeAttackScore(CHARACTER_NO, long);
	long UpdateSurvivalScore(CHARACTER_NO, long);
};
class std::list<int,std::allocator<int> > :
	std::_List_buy<int,std::allocator<int> >
{
	class _Myt;
	class _Mybase;
	struct _Node;
	typedef std::_List_node<int,void *> _Nodeptr;
	struct _Alty;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef long *pointer;
	typedef const long const_pointer;
	typedef long reference;
	typedef const long const_reference;
	typedef long value_type;
	class const_iterator;
	class iterator;
	class _Unchecked_const_iterator;
	class _Unchecked_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	list<int,std::allocator<int> >(std::initializer_list<int>, const std::allocator<int> &);
	list<int,std::allocator<int> >(std::list<int,std::allocator<int> > &, const std::allocator<int> &);
	list<int,std::allocator<int> >(std::list<int,std::allocator<int> > &);
	list<int,std::allocator<int> >(const std::list<int,std::allocator<int> > &, const std::allocator<int> &);
	list<int,std::allocator<int> >(const std::list<int,std::allocator<int> > &);
	list<int,std::allocator<int> >(unsigned long long, const long &, const std::allocator<int> &);
	list<int,std::allocator<int> >(unsigned long long, const long &);
	list<int,std::allocator<int> >(unsigned long long);
	list<int,std::allocator<int> >(const std::allocator<int> &);
	list<int,std::allocator<int> >();
	void _Construct_n(unsigned long long, const long &);
	std::list<int,std::allocator<int> > & operator=(const std::list<int,std::allocator<int> > &);
	std::list<int,std::allocator<int> > & operator=(std::initializer_list<int>);
	std::list<int,std::allocator<int> > & operator=(std::list<int,std::allocator<int> > &);
	void _Assign_rv(std::list<int,std::allocator<int> > &);
	void push_front(const long &);
	void push_front(long &);
	void push_back(const long &);
	void push_back(long &);
	std::_List_iterator<std::_List_val<std::_List_simple_types<int> > > insert(std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > >, unsigned long long, const long &);
	std::_List_iterator<std::_List_val<std::_List_simple_types<int> > > insert(std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > >, const long &);
	std::_List_iterator<std::_List_val<std::_List_simple_types<int> > > insert(std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > >, std::initializer_list<int>);
	std::_List_iterator<std::_List_val<std::_List_simple_types<int> > > insert(std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > >, long &);
	void assign(unsigned long long, const long &);
	void assign(std::initializer_list<int>);
	~list<int,std::allocator<int> >();
	std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > > begin();
	std::_List_iterator<std::_List_val<std::_List_simple_types<int> > > begin();
	std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > > end();
	std::_List_iterator<std::_List_val<std::_List_simple_types<int> > > end();
	std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int> >,std::_Iterator_base0> _Unchecked_begin();
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<int> > > _Unchecked_begin();
	std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int> >,std::_Iterator_base0> _Unchecked_end();
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<int> > > _Unchecked_end();
	std::_List_iterator<std::_List_val<std::_List_simple_types<int> > > _Make_iter(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int> >,std::_Iterator_base0>);
	std::_List_iterator<std::_List_val<std::_List_simple_types<int> > > _Make_iter(std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > >);
	std::reverse_iterator<std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > > > rbegin();
	std::reverse_iterator<std::_List_iterator<std::_List_val<std::_List_simple_types<int> > > > rbegin();
	std::reverse_iterator<std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > > > rend();
	std::reverse_iterator<std::_List_iterator<std::_List_val<std::_List_simple_types<int> > > > rend();
	std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > > cbegin();
	std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > > cend();
	std::reverse_iterator<std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > > > crbegin();
	std::reverse_iterator<std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > > > crend();
	void resize(unsigned long long, const long &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<int> get_allocator();
	const long & front();
	long & front();
	const long & back();
	long & back();
	void pop_front();
	void pop_back();
	std::_List_node<int,void *> * _Unlinknode(std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > >);
	std::_List_iterator<std::_List_val<std::_List_simple_types<int> > > erase(std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > >);
	std::_List_iterator<std::_List_val<std::_List_simple_types<int> > > erase(std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > >);
	void _Unchecked_erase(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int> >,std::_Iterator_base0>);
	void clear();
	void swap(std::list<int,std::allocator<int> > &);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > >, std::list<int,std::allocator<int> > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > >);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > >, std::list<int,std::allocator<int> > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > >);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > >, std::list<int,std::allocator<int> > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > >);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > >, std::list<int,std::allocator<int> > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > >);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > >, std::list<int,std::allocator<int> > &);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > >, std::list<int,std::allocator<int> > &);
	void remove(const long &);
	void unique();
	void merge(std::list<int,std::allocator<int> > &);
	void merge(std::list<int,std::allocator<int> > &);
	void sort();
	void reverse();
	void _Splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > >, std::list<int,std::allocator<int> > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > >, unsigned long long);
	void _Splice_same(std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > >, std::list<int,std::allocator<int> > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<int> > >, unsigned long long);
	void _Unchecked_splice(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int> >,std::_Iterator_base0>, std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int> >,std::_Iterator_base0>, std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int> >,std::_Iterator_base0>);
	void _Tidy();
	void _Insert_n(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int> >,std::_Iterator_base0>, unsigned long long, const long &);
	void _Incsize(unsigned long long);
};
struct SaveRecord_Main
{
	SaveRecord_SysOption SysOptionData; // 0x0
	SaveRecord_GameOption GameOptionData; // 0x8
	SaveRecord_SoundOption SoundOptionData; // 0x14
	SaveRecord_DisplayOption DisplayOptionData; // 0x30
	SaveRecord_GraphicsOption GraphicsOptionData; // 0x68
	SaveRecord_ButtonConfig ButtonConfData; // 0x78
	SaveRecord_PlayerData PlayerData; // 0x1518
	SaveRecord_GameProgress GameData; // 0x29E0
	SaveRecord_GameHistory HistoryData; // 0x17400
	SaveRecord_RecordKey RecordKey; // 0x17408
	void setDefault();
	SaveRecord_Main(const SaveRecord_Main &);
	SaveRecord_Main();
	SaveRecord_Main & operator=(const SaveRecord_Main &);
	~SaveRecord_Main();
};
SaveRecord_Main::SaveRecord_Main(); // 0x140098600
struct SaveRecord_Replay
{
	BattleReplay m_Replay[100]; // 0x0
	void initialize();
	void setDefault();
	SaveRecord_Replay(const SaveRecord_Replay &);
	SaveRecord_Replay();
	~SaveRecord_Replay();
	SaveRecord_Replay & operator=(const SaveRecord_Replay &);
};
SaveRecord_Replay::~SaveRecord_Replay(); // 0x1400987A0