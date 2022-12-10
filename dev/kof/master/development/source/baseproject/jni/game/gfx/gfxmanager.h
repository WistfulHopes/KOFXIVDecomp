#pragma once

class GfxManager
{
	enum RESULT_CODE
	{
		RESULT_CODE_CANCEL = 255,
		RESULT_CODE_OK = 0,
		RESLCT_CODE_3ON3 = 0,
		RESLCT_CODE_1ON1 = 1,
		RESULT_CODE_CLOSE = 255,
		RESULT_CODE_MAINMENU = 1,
		RESULT_CODE_MEMBERSELECT = 2,
		RESULT_CODE_ORDERSELECT = 3,
		RESULT_CODE_TRIALMENU = 4,
		RESULT_CODE_TUTORIALMENU = 5,
		RESULT_CODE_MY_TEAM = 6,
		RESULT_CODE_MY_SINGLE = 7,
		RESULT_CODE_MY_STAGE = 8,
		RESULT_CODE_ROOM = 9,
		RESULT_CODE_ROOM_LIST = 10,
		RESULT_CODE_NEXT_TASK = 11,
		RESULT_CODE_BACK_TASK = 12,
		RESULT_CODE_RETRY_TASK = 13,
		RESULT_CODE_DEMOPLAY = 14,
		RESULT_CODE_RESTART_TASK = 15,
		RESULT_CODE_FIRST_ROUND = 16,
		RESULT_CODE_NEXT_ROUND = 17,
		RESULT_CODE_BACK_ROUND = 18,
		RESULT_CODE_REPLAYDATA = 19,
		RESULT_CODE_MY_EDIT_TEAM = 20,
		RESULT_CODE_MY_EDIT_SINGLE = 21,
		RESULT_CODE_MY_EDIT_STAGE = 22,
		RESULT_CODE_ONLINEMENU = 23,
	};
	typedef void(*LoadCompleteEventFunc)();
	enum MENU_TYPE_ID
	{
		MENU_TYPE_ID_MAINMENU_OPT = 0,
		MENU_TYPE_ID_TUTORIAL_OPT = 1,
		MENU_TYPE_ID_TUTORIAL_RSL = 2,
		MENU_TYPE_ID_MEMBER_SELECT = 3,
		MENU_TYPE_ID_STORY_OPT = 4,
		MENU_TYPE_ID_BATTLE_OPT = 5,
		MENU_TYPE_ID_PLAYER_DATA = 6,
		MENU_TYPE_ID_REPLAY_OPT = 7,
		MENU_TYPE_ID_MISSION_BATTLE = 8,
		MENU_TYPE_ID_MISSION_RESULT = 9,
		MENU_TYPE_ID_MISSION_TIMEATTACK = 10,
		MENU_TYPE_ID_MISSION_SURVIVAL = 11,
		MENU_TYPE_ID_RANK_ENTRY = 12,
		MENU_TYPE_ID_RANK_NOTENTRY = 13,
		MENU_TYPE_ID_FREE_TEAMVS = 14,
		MENU_TYPE_ID_FREE_SINGLEVS = 15,
		MENU_TYPE_ID_FREE_PARTYVS = 16,
		MENU_TYPE_ID_ROOM_TEAMVS = 17,
		MENU_TYPE_ID_ROOM_SINGLEVS = 18,
		MENU_TYPE_ID_ROOM_PARTYVS = 19,
		MENU_TYPE_ID_ROOM_TRAINING = 20,
		MENU_TYPE_ID_BATTLE_WATCH = 21,
		MENU_TYPE_ID_REPLAY_CMT = 22,
		MENU_TYPE_ID_TRAINING_PAGE1 = 23,
		MENU_TYPE_ID_TRAINING_PAGE2 = 24,
		MENU_TYPE_ID_ONLINE_TRAINING_HOST = 25,
		MENU_TYPE_ID_ONLINE_TRAINING_GUEST = 26,
		MENU_TYPE_ID_STORY_CONTINUESERVICE = 27,
		MENU_TYPE_ID_SETPHRASES = 28,
		MENU_TYPE_ID_SETPHRASES_CATEGORY1 = 29,
		MENU_TYPE_ID_SETPHRASES_CATEGORY2 = 30,
		MENU_TYPE_ID_SETPHRASES_CATEGORY3 = 31,
		MENU_TYPE_ID_SETPHRASES_CATEGORY4 = 32,
		MENU_TYPE_ID_SETPHRASES_CATEGORY5 = 33,
		MENU_TYPE_ID_LEADERBOARD_RANK = 34,
		MENU_TYPE_ID_LEADERBOARD_WIN = 35,
		MENU_TYPE_ID_LEADERBOARD_BEAT = 36,
		MENU_TYPE_ID_LEADERBOARD_TA = 37,
		MENU_TYPE_ID_LEADERBOARD_SURVIVAL = 38,
		MENU_TYPE_ID_BATTLE_WATCH_RESULT = 39,
		MENU_TYPE_ID_BATTLE_PARTICIPANT = 40,
		MENU_TYPE_ID_TRAINING_PAGE3 = 41,
	};
	enum GFX_FILE_INDEX
	{
		FILE_00_START_UP = 0,
		FILE_00_TITLE = 1,
		FILE_01_UI_MENU = 2,
		FILE_01_UI_MENU_VS = 3,
		FILE_01_UI_MENU_FREEMATCH = 4,
		FILE_01_UI_MENU_MISSION = 5,
		FILE_01_UI_MENU_PLAYERDATA = 6,
		FILE_01_UI_MENU_ONLINE = 7,
		FILE_01_UI_MENU_PLAYTOGETHER = 8,
		FILE_02_TUTORIAL = 9,
		FILE_02_TUTORIAL_MENU = 10,
		FILE_03_MEMBERSELECT = 11,
		FILE_04_ORDERSELECT = 12,
		FILE_05_STAGESELECT = 13,
		FILE_06_RESULT = 14,
		FILE_08_COMMAND_LIST = 15,
		FILE_09_CREDITS = 16,
		FILE_09_THANKYOU = 17,
		FILE_11_GALLERY = 18,
		FILE_13_MISSION_TRIAL = 19,
		FILE_13_TRIALMENU = 20,
		FILE_14_ROOM = 21,
		FILE_14_ROOMLIST = 22,
		FILE_14_MATCHING = 23,
		FILE_14_SEARCH_SETTING = 24,
		FILE_17_CHARA_RECORD = 25,
		FILE_17_REPLAY_DATA = 26,
		FILE_17_MY_RANKING = 27,
		FILE_17_MY_PROFILE = 28,
		FILE_17_PLAYER_RECORD = 29,
		FILE_17_PROFILE = 30,
		FILE_17_FIGHTING_LIST = 31,
		FILE_17_MY_FAVORITE = 32,
		FILE_17_LEADERBOARD = 33,
		FILE_17_ONLINEREPLAY = 34,
		FILE_18_OPTION = 35,
		FILE_99_SYSTEM_MESSAGE = 36,
		FILE_99_NOTIFICATION = 37,
		FILE_99_SCREEN_MENU = 38,
		FILE_99_BG_FLARE = 39,
		FILE_99_COMMON = 40,
		FILE_TEST = 41,
		FILE_MAX = 42,
	};
	enum MENU_CURSOR
	{
		CURSOR_MENU = 0,
		CURSOR_MENU_VS = 1,
		CURSOR_ONLINE = 2,
		CURSOR_MISSION = 3,
		CURSOR_PLAYER_DATA = 4,
		CURSOR_PROFILE = 5,
		CURSOR_MY_TEAM = 6,
		CURSOR_MY_SINGLE = 7,
		CURSOR_MY_STAGE = 8,
		CURSOR_FREEMATCH = 9,
		CURSOR_SEARCH_SETTING = 10,
		CURSOR_PLAY_TOGETHER = 11,
		CURSOR_MAX = 12,
	};
	typedef void(*CallBackEventFunc)(long);
	enum SYSTEM_MESSAGE_STATE
	{
		SYSTEM_MESSAGE_CLOSE = 0,
		SYSTEM_MESSAGE_OPEN = 1,
	};
	enum SYSTEM_MESSAGE_CALLBACK
	{
		SYSTEM_MESSAGE_YES = 0,
		SYSTEM_MESSAGE_NO = 1,
		SYSTEM_MESSAGE_CANCEL = 2,
	};
	enum SYSTEM_MESSAGE_TYPE
	{
		SYSTEM_MESSAGE_NONE = 0,
		SYSTEM_MESSAGE_OK = 1,
		SYSTEM_MESSAGE_YESNO = 2,
		SYSTEM_MESSAGE_YESNOCANCEL = 3,
	};
	enum NOTIFICATION_ICON
	{
		ICON_NO_NONE = 255,
		ICON_NO_PICTURE = 0,
		ICON_NO_MOVIE = 1,
		ICON_NO_SOUND = 2,
		ICON_NO_VOICE = 3,
		ICON_NO_ANT = 4,
		ICON_NO_VRS = 5,
	};
public:
	GfxManager(const GfxManager &);
private:
	GfxManager();
	~GfxManager();
	extension::GFXIMovie m_GFXMovie; // 0x0
	extension::GFXIMovie m_GFXMovieBG; // 0x8
	extension::GFXIMovie m_GFXMovieCommon; // 0x10
	extension::GFXIMovie m_GFXMovieNotification; // 0x18
	extension::GFXIMovie m_GFXMovieTutorial; // 0x20
	extension::GFXIMovie m_GFXMovieSystem; // 0x28
	extension::GFXIMovie m_GFXMovieCross; // 0x30
	extension::BasicFutureObject<extension::GFXIMovieData,void> m_FutureGFXMovie; // 0x38
	extension::BasicFutureObject<extension::GFXIMovieData,void> m_FutureGFXMovieBG; // 0x48
	extension::BasicFutureObject<extension::GFXIMovieData,void> m_FutureGFXMovieCommon; // 0x58
	extension::BasicFutureObject<extension::GFXIMovieData,void> m_FutureGFXMovieNotification; // 0x68
	extension::BasicFutureObject<extension::GFXIMovieData,void> m_FutureGFXMovieTutorial; // 0x78
	extension::BasicFutureObject<extension::GFXIMovieData,void> m_FutureGFXMovieSystem; // 0x88
	void(*m_pCompleteFunc)(); // 0x98
	long m_Priority; // 0xA0
	bool m_bDisposeGFXMovie; // 0xA4
	bool m_bLockGFXMovie; // 0xA5
	bool m_bCrossGFXMovie; // 0xA6
	bool m_bQuitGFXMovie; // 0xA7
	GfxManager::RESULT_CODE m_QuitResultCode; // 0xA8
	bool m_ReleaseFlag; // 0xAC
	bool m_RequestAdvance; // 0xAD
	bool m_RequestRender; // 0xAE
	unsigned long long m_Time; // 0xB0
	bool m_ControlerLive[5]; // 0xB8
	long m_MenuCursor[12]; // 0xC0
	GfxManager::SYSTEM_MESSAGE_STATE m_SystemMessageState; // 0xF0
	long m_SystemMessageCursor; // 0xF4
	void(*m_pCallBackEventFunc)(long); // 0xF8
	bool m_SystemMessageLock; // 0x100
	static GfxManager * instance; // 0xFFFFFFFFFFFFFFFF
public:
	bool m_EditMode; // 0x101
	static GfxManager & getInstance();
	extension::GFXIMovie & GetGFXMovie();
	extension::GFXIMovie & GetGFXMovieCommon();
	extension::GFXIMovie & GetGFXMovieBG();
	const char * GetGfxFileName(GfxManager::GFX_FILE_INDEX);
	void LoadRequestCommon();
	void LoadRequestBG();
	void LoadRequestNotification();
	void LoadRequestTutorial();
	void LoadRequestMissionTrial();
	void LoadRequestSystem();
	void LoadRequest(GfxManager::GFX_FILE_INDEX, void(*)(), long);
	void UpdateLoadMovie();
	void StopMenuGFX();
	void StartMenuGFX();
	void StopGFXMovie();
	void StartGFXMovie();
	void StopGFXMovieBG();
	void StartGFXMovieBG();
	void ReleaseGFXMovieBG();
	void StopGFXMovieNotification();
	void StartGFXMovieNotification();
	void ReleaseAll();
	void ReleaseCommon();
	void ReleaseTutorial();
	void ReleaseGFXMovie(bool);
	void SetReleaseFlag();
	void RequestAdvance();
	void RequestRender();
	void UpdateAdvance();
	void UpdateRender();
	void StackAdvance();
	void StackRender();
	void SystemMovieAdvance();
	void SystemMovieRender();
	void NotificationAdvance();
	void SetQuitGFXMovie(bool);
	bool IsQuitGFXMovie();
	void SetQuitResultCode(GfxManager::RESULT_CODE);
	GfxManager::RESULT_CODE GetQuitResultCode();
	void SetASVariable(const char *, const Scaleform::GFx::Value &, Scaleform::GFx::Movie::SetVarType);
	void SetASString(const char *, const char *, Scaleform::GFx::Movie::SetVarType);
	void SetASNumber(const char *, double, Scaleform::GFx::Movie::SetVarType);
	Scaleform::GFx::Value GetASVariable(const char *);
	std::string GetASString(const char *);
	double GetASNumber(const char *);
	double GetASVariableArray(const char *, unsigned long, Scaleform::GFx::Value *, unsigned long);
	void GFn_Dispose();
	void GFn_Quit(GfxManager::RESULT_CODE);
	void GFn_Quit(const Scaleform::GFx::Value *, unsigned long);
	void GFn_QuitLock(GfxManager::RESULT_CODE);
	void GFn_QuitLock(const Scaleform::GFx::Value *, unsigned long);
	void GFn_QuitCross(GfxManager::RESULT_CODE);
	void GFn_QuitCross(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetMenuCursor(const Scaleform::GFx::Value *, unsigned long);
	Scaleform::GFx::Value GFn_GetMenuCursor(const Scaleform::GFx::Value *, unsigned long);
	void SetMenuCursor(GfxManager::MENU_CURSOR, long);
	long GetMenuCursor(GfxManager::MENU_CURSOR);
	void ClearMenuCursor(GfxManager::MENU_CURSOR);
	void GFn_SetTeamMemberInt(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetTeamMember(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetSingleMember(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetMyBustupCharacterNo(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetStage(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetTeamOrder(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetMenuID(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetControllerSetting(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetLanguageOption(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetGameOption(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetSystemOption(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetReplayAutoSave(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetAutoActing(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetCommentGaya(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetMasterVolume(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetBGMVolume(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetSEVolume(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetCharaVoiceVolume(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetSystemVoiceVolume(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetPadVolume(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetAmbienceVolume(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetDisplayOption(const Scaleform::GFx::Value *, unsigned long);
	void GFn_UpdateBrightnessOnly(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SaveDisplayOption(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetGraphicsOption(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetOperationMapper(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetOperationKeyboardMapper(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetDefaultLanguage(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetDefaultSystemOption(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetDefaultGameOption(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetDefaultSoundOption(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetDefaultDisplayOption(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetDefaultGraphicsOption(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetButtonConfig(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetKeyboardConfig(const Scaleform::GFx::Value *, unsigned long);
	void GFn_CallSaveDataAsync(const Scaleform::GFx::Value *, unsigned long);
	void GFn_CallSaveDataAsyncReplay(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetReplayLockFlag(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetReplayOpenFlag(const Scaleform::GFx::Value *, unsigned long);
	void GFn_DeleteReplayData(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetHudPosition(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetHudPrintStatus(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetKeyDataStatus(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetKeyDataPrint(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetAttackDataStatus(const Scaleform::GFx::Value *, unsigned long);
	void GFn_SetOnlineIDStatus(const Scaleform::GFx::Value *, unsigned long);
	Scaleform::GFx::Value GFn_GetOnlineIDStatus(const Scaleform::GFx::Value *, unsigned long);
	void GFn_GetUserNameToBC(const Scaleform::GFx::Value *, unsigned long);
	Scaleform::GFx::Value GFn_GetGameParam(const Scaleform::GFx::Value *, unsigned long);
	void GFn_PauseMovieProxy();
	void GFn_ResumeMovieProxy();
	long GFn_GetSystemMessageCursor();
	bool GFn_IsSystemMessageOpen();
	void GFn_CallbackSystemMessage(long);
	Scaleform::GFx::Value GFn_Test(const Scaleform::GFx::Value *, unsigned long);
	void GFv_AddController(USER_ID, long, const char *, long);
	void GFv_RemoveController(USER_ID);
	void InitControllerLive();
	bool IsControllerLive(USER_ID);
	bool m_ControllerSelect; // 0x102
	bool IsNowControllerSelect();
	void SetNowControllerSelect(bool);
	void GFv_SetVictoryAnnounce();
	void GFv_RemoveVictoryAnnounce();
	void GFv_SetResult();
	void GFv_SetTelop(const char *);
	void GFv_RemoveTelop(bool);
	void GFv_SetContinueCount();
	void GFv_SetGameOver();
	void GFv_SetCharacter(CHARACTER_NO);
	void GFv_SetSetTransitionMenu(PLAYER_ID);
	void GFv_UpdateTransitionMenu(PLAYER_ID, long, bool);
	void GFv_CallScreenMenu(GfxManager::MENU_TYPE_ID, PLAYER_ID);
	void GFv_CallScreeMenuSetPhrase();
	bool GFv_IsOpenScreenMenu();
	void GFv_ExitScreenMenu();
	void GFv_HideScreenMenu();
	void GFv_SetImage(long);
	void GFv_SetNetTeamOrder(PLAYER_ID, long, long, long);
	void GFv_DecideOrder(PLAYER_ID, long);
	void GFv_CancelOrder(PLAYER_ID, long);
	void GFv_OnlineUserDecide(PLAYER_ID, long, CHARACTER_NO, long, unsigned char, const char *, RANKMATCH_DISCONNECT_MARKER);
	void GFv_Tutorial_SetMessage(TUTORIAL_ID, bool, long);
	void GFv_Tutorial_SetSubject(long);
	void GFv_Tutorial_NextSubject();
	void GFv_Tutorial_ClearSubject();
	void GFv_ComboMission_SetMissionCommand();
	void GFv_ComboMission_InitMissionCommand();
	void GFv_ComboMission_SetNowLabel(long);
	void GFv_ComboMission_NextCommand();
	void GFv_ComboMission_CommandFailed();
	void GFv_ComboMission_ClearCommand();
	long GFv_GetMenuState();
	void GFv_SetPlayGoMessage();
	void GFv_SetSystemMessage(const char *, GfxManager::SYSTEM_MESSAGE_TYPE, long, bool, const char *, const char *, const char *);
	void SetSystemMessageCallback(void(*)(long));
	void ResetSystemMessageCallback();
	void GFv_CloseSystemMessage();
	void GFv_CloseSystemMessageEx();
	void GFv_onNetworkError(NETWORK_ERROR_TYPE);
	void GFv_onNetworkErrorClosed(NETWORK_ERROR_TYPE);
	void GFv_AddNotificationGallery(GALLERY_TYPE, long, long);
	void GFv_AddNotification(const char *, GfxManager::NOTIFICATION_ICON);
	bool GFv_IsItemDisplay();
	void GFv_AllDeleteNotification();
	bool GFv_IsHasNotification();
	void GFv_NewChallenger();
	CHARACTER_NO ExchangeCharacterName(const char *);
	STAGE_ID ExchangeStageName(const char *);
	GfxManager & operator=(const GfxManager &);
};
enum GfxManager::RESULT_CODE
{
	RESULT_CODE_CANCEL = 255,
	RESULT_CODE_OK = 0,
	RESLCT_CODE_3ON3 = 0,
	RESLCT_CODE_1ON1 = 1,
	RESULT_CODE_CLOSE = 255,
	RESULT_CODE_MAINMENU = 1,
	RESULT_CODE_MEMBERSELECT = 2,
	RESULT_CODE_ORDERSELECT = 3,
	RESULT_CODE_TRIALMENU = 4,
	RESULT_CODE_TUTORIALMENU = 5,
	RESULT_CODE_MY_TEAM = 6,
	RESULT_CODE_MY_SINGLE = 7,
	RESULT_CODE_MY_STAGE = 8,
	RESULT_CODE_ROOM = 9,
	RESULT_CODE_ROOM_LIST = 10,
	RESULT_CODE_NEXT_TASK = 11,
	RESULT_CODE_BACK_TASK = 12,
	RESULT_CODE_RETRY_TASK = 13,
	RESULT_CODE_DEMOPLAY = 14,
	RESULT_CODE_RESTART_TASK = 15,
	RESULT_CODE_FIRST_ROUND = 16,
	RESULT_CODE_NEXT_ROUND = 17,
	RESULT_CODE_BACK_ROUND = 18,
	RESULT_CODE_REPLAYDATA = 19,
	RESULT_CODE_MY_EDIT_TEAM = 20,
	RESULT_CODE_MY_EDIT_SINGLE = 21,
	RESULT_CODE_MY_EDIT_STAGE = 22,
	RESULT_CODE_ONLINEMENU = 23,
};
enum GfxManager::MENU_TYPE_ID
{
	MENU_TYPE_ID_MAINMENU_OPT = 0,
	MENU_TYPE_ID_TUTORIAL_OPT = 1,
	MENU_TYPE_ID_TUTORIAL_RSL = 2,
	MENU_TYPE_ID_MEMBER_SELECT = 3,
	MENU_TYPE_ID_STORY_OPT = 4,
	MENU_TYPE_ID_BATTLE_OPT = 5,
	MENU_TYPE_ID_PLAYER_DATA = 6,
	MENU_TYPE_ID_REPLAY_OPT = 7,
	MENU_TYPE_ID_MISSION_BATTLE = 8,
	MENU_TYPE_ID_MISSION_RESULT = 9,
	MENU_TYPE_ID_MISSION_TIMEATTACK = 10,
	MENU_TYPE_ID_MISSION_SURVIVAL = 11,
	MENU_TYPE_ID_RANK_ENTRY = 12,
	MENU_TYPE_ID_RANK_NOTENTRY = 13,
	MENU_TYPE_ID_FREE_TEAMVS = 14,
	MENU_TYPE_ID_FREE_SINGLEVS = 15,
	MENU_TYPE_ID_FREE_PARTYVS = 16,
	MENU_TYPE_ID_ROOM_TEAMVS = 17,
	MENU_TYPE_ID_ROOM_SINGLEVS = 18,
	MENU_TYPE_ID_ROOM_PARTYVS = 19,
	MENU_TYPE_ID_ROOM_TRAINING = 20,
	MENU_TYPE_ID_BATTLE_WATCH = 21,
	MENU_TYPE_ID_REPLAY_CMT = 22,
	MENU_TYPE_ID_TRAINING_PAGE1 = 23,
	MENU_TYPE_ID_TRAINING_PAGE2 = 24,
	MENU_TYPE_ID_ONLINE_TRAINING_HOST = 25,
	MENU_TYPE_ID_ONLINE_TRAINING_GUEST = 26,
	MENU_TYPE_ID_STORY_CONTINUESERVICE = 27,
	MENU_TYPE_ID_SETPHRASES = 28,
	MENU_TYPE_ID_SETPHRASES_CATEGORY1 = 29,
	MENU_TYPE_ID_SETPHRASES_CATEGORY2 = 30,
	MENU_TYPE_ID_SETPHRASES_CATEGORY3 = 31,
	MENU_TYPE_ID_SETPHRASES_CATEGORY4 = 32,
	MENU_TYPE_ID_SETPHRASES_CATEGORY5 = 33,
	MENU_TYPE_ID_LEADERBOARD_RANK = 34,
	MENU_TYPE_ID_LEADERBOARD_WIN = 35,
	MENU_TYPE_ID_LEADERBOARD_BEAT = 36,
	MENU_TYPE_ID_LEADERBOARD_TA = 37,
	MENU_TYPE_ID_LEADERBOARD_SURVIVAL = 38,
	MENU_TYPE_ID_BATTLE_WATCH_RESULT = 39,
	MENU_TYPE_ID_BATTLE_PARTICIPANT = 40,
	MENU_TYPE_ID_TRAINING_PAGE3 = 41,
};
enum GfxManager::MENU_CURSOR
{
	CURSOR_MENU = 0,
	CURSOR_MENU_VS = 1,
	CURSOR_ONLINE = 2,
	CURSOR_MISSION = 3,
	CURSOR_PLAYER_DATA = 4,
	CURSOR_PROFILE = 5,
	CURSOR_MY_TEAM = 6,
	CURSOR_MY_SINGLE = 7,
	CURSOR_MY_STAGE = 8,
	CURSOR_FREEMATCH = 9,
	CURSOR_SEARCH_SETTING = 10,
	CURSOR_PLAY_TOGETHER = 11,
	CURSOR_MAX = 12,
};
enum GfxManager::SYSTEM_MESSAGE_TYPE
{
	SYSTEM_MESSAGE_NONE = 0,
	SYSTEM_MESSAGE_OK = 1,
	SYSTEM_MESSAGE_YESNO = 2,
	SYSTEM_MESSAGE_YESNOCANCEL = 3,
};
GfxManager & GfxManager::getInstance(); // 0x140098880