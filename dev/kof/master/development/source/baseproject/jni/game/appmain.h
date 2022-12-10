#pragma once

enum <unnamed-enum-FONT_KIND_20>
{
	FONT_KIND_20 = 20,
	FONT_KIND_22 = 22,
	FONT_KIND_24 = 24,
	FONT_KIND_26 = 26,
	FONT_KIND_28 = 28,
	FONT_KIND_30 = 30,
	FONT_KIND_32 = 32,
	FONT_KIND_34 = 34,
	FONT_KIND_36 = 36,
	FONT_KIND_40 = 40,
	FONT_KIND_48 = 48,
	FONT_KIND_64 = 64,
	FONT_KIND_MAX = 65,
};
class RoomMembers :
	ErrorChecker
{
	struct EVoiceChat;
	struct Member;
private:
	bool m_bInitialize; // 0x10
	bool m_bResourcesEnabled; // 0x11
	DrawHelperVertexAddColor * m_pDrawHelper; // 0x18
	extension::BasicFutureObject<Image,extension::FutureImageOption> m_image; // 0x20
	long m_imageIndex; // 0x30
	RoomMembers::Member m_members[12]; // 0x38
	EasingNumber m_alpha; // 0x9F8
	ImageString::CombinationGlyph * m_pImageFontGlyps; // 0xA10
	struct ErrorParam;
	RoomMembers::ErrorParam m_errorParam; // 0xA18
public:
	RoomMembers(const RoomMembers &);
	RoomMembers();
	virtual ~RoomMembers();
	void dispose();
	void readResources();
	void update(float);
	void draw(long, long);
	void setMember(long, unsigned long long, RANKMATCH_DISCONNECT_MARKER);
	void setMember(long, unsigned long long, PLAYER_ID, RANKMATCH_DISCONNECT_MARKER);
	void clearMember(long);
	void clearMembersAll();
	void setMemberParamVoiceChat(long, RoomMembers::EVoiceChat::Type);
	void setMemberParamCheckSymbol(long, bool);
	long getMemberCount();
	const RoomMembers::Member * getMember(long);
	const RoomMembers::Member * findMemberByOnlineID(unsigned long long);
	void setVisible(bool);
	void switchingVisible(bool);
	void switchingVisible();
private:
	bool isDetermineLoadingFiles();
	RoomMembers::Member & getMemberDirect(long);
	void renderWindow(long, long, long, long, float);
	void Debug_init();
public:
	void Debug_entryMembers();
	RoomMembers & operator=(const RoomMembers &);
};
enum TEXSTRING
{
	TEXSTRING_00 = 0,
	TEXSTRING_01 = 1,
	TEXSTRING_02 = 2,
	EASY_PAUSE_1 = 3,
	EASY_PAUSE_2 = 4,
	EASY_PAUSE_3 = 5,
	EASY_PAUSE_4 = 6,
	TSTR_DEBUG_DISP = 7,
	TSTR_DEBUG_00 = 8,
	TSTR_DEBUG_01 = 9,
	TSTR_DEBUG_02 = 10,
	TSTR_DEBUG_03 = 11,
	TEXSTRING_MAX = 12,
};
struct _RGBACOL
{
	unsigned char a; // 0x0
	unsigned char b; // 0x1
	unsigned char g; // 0x2
	unsigned char r; // 0x3
};
union _UNIRGBACOL
{
public:
	long rgba; // 0x0
	_RGBACOL s; // 0x0
};
class AppMain
{
private:
	static AppMain * pApp; // 0xFFFFFFFFFFFFFFFF
	static CharaProjectData s_charaProjData; // 0xFFFFFFFFFFFFFFFF
	static StageProjectData s_stageProjData; // 0xFFFFFFFFFFFFFFFF
	ViewController * bv; // 0x0
	EAGLView * e; // 0x8
	void AppMainBase();
	void initializeNetwork();
	void finalizeNetwork();
	void updateNetwork();
public:
	long m_OrgScreenW; // 0x10
	long m_OrgScreenH; // 0x14
	float m_OrgScale; // 0x18
	long m_iScreenW; // 0x1C
	long m_iScreenH; // 0x20
	long m_VirtualW; // 0x24
	long m_VirtualH; // 0x28
	long m_iAlignX; // 0x2C
	long m_iAlignY; // 0x30
	float m_DrawScale; // 0x34
	float m_PosScale; // 0x38
	float m_FontDrawScale; // 0x3C
	float m_FontPosScale; // 0x40
	bool m_ScalingFlg; // 0x44
	Font * m_pDefaultFont; // 0x48
	OGLRender * m_pRender; // 0x50
	extension::BasicFutureObject<extension::AsyncFileImage,void> m_futureShaderData; // 0x58
	Graphics * m_pGraphics; // 0x68
	GraphicsOpt * g; // 0x70
	_StringRequest m_StrRequest[256]; // 0x78
	long m_iRequestNum; // 0x1C78
	static AppMain * getInstance(long, long, float);
	static AppMain * getInstance();
	AppMain(ViewController *);
	~AppMain();
	void setInit(ViewController *);
	long initialize(long, long, float);
	void finalize();
	void suspend();
	void resume();
	ViewController * getViewController();
	HWND__ * globalHWND; // 0x1C80
	HGLRC__ * glrc; // 0x1C88
	HDC__ * ghdc; // 0x1C90
	void setHWND(HWND__ *);
	GraphicsOpt * getGraphics();
	void initRender();
	float getAlignX();
	float getAlignY();
	long getWidth();
	long getHeight();
	AgVector2 getScale();
	long getVirtualW();
	long getVirtualH();
	long getOriginalW();
	long getOriginalH();
	void setVirtualScreenSize(long, long, unsigned char, float, unsigned char);
	void setDrawScale(long, long, unsigned char, float, float);
	void setTouchScale(long, long, unsigned char, float);
	void setScreenSize(long, long);
	void setScaleFactor(float, float);
	void setFontScale(float, float);
	float getScaleFactor();
	float getPosScale();
	float getDrawScale();
	float getFontDrawScale();
	float getFontPosScale();
	bool isRetina();
	void setFPSValue(float);
	float getFPSValue();
	long getFPS();
	long getTPF();
	void onInit();
	void onDispose();
	void onSuspend();
	void onResume();
	void onRun();
	void onRunExe();
	void onRunDraw();
	void onRunExe_AG_Partial();
	void callNotifyDeviceHotswap();
	void onControllerAdded(const AgControllerAddedEvent &);
	void onControllerRemoved(const AgControllerRemovedEvent &);
	void onExit();
	unsigned long m_iKeyPress; // 0x1C98
	unsigned long m_iKeyTrigger; // 0x1C9C
	unsigned long m_iKeyRelease; // 0x1CA0
	unsigned long m_iKeyTrigger2; // 0x1CA4
	unsigned long m_iKeyRelease2; // 0x1CA8
	long m_iKeyRepeatCount; // 0x1CAC
	long m_iKeyRepeatFirst; // 0x1CB0
	long m_iKeyRepeatInterval; // 0x1CB4
	long m_FuncST; // 0x1CB8
	long m_FuncBT; // 0x1CBC
	long m_FuncCT; // 0x1CC0
	long m_FuncFT; // 0x1CC4
	long m_FadeST; // 0x1CC8
	long m_FuncExit; // 0x1CCC
	long iReserveScene; // 0x1CD0
	long iReserveTimer; // 0x1CD4
	void ChangeST(long);
	void ChangeBT(long);
	void ChangeCT(long);
	void ChangeFT(long);
	void ChangeExeST(long);
	void ChangeExeBT(long);
	void ChangeExeCT(long);
	void ChangeSTBT(long, long);
	void ChangeSTCT(long, long);
	void ChangeExeSTBT(long, long);
	void ChangeExeSTCT(long, long);
	void SetExitFunc(long);
	void FuncST();
	void FuncBT();
	void FuncCT();
	void FuncFT();
	void FuncFadeExit();
	long GetFuncST();
	void SceneFunc(long);
	void SceneJump(long);
	DEV_MODE m_DevMode; // 0x1CD8
	long GetHomeScene();
	long GetMemSelScene();
	long GetVSSelScene();
	long GetOrdSelScene();
	long m_movieFlg; // 0x1CDC
	void ActionSub2D(GENERAL_TASK_BASE *, unsigned char);
	RandomMT randMT; // 0x1CE0
	long iSceneTimer; // 0x26A4
	GENERAL_TASK * pGT_Player[2]; // 0x26A8
	long iRandomMax[2]; // 0x26B8
	GENERAL_TASK * pGT_BG; // 0x26C0
	TexString * m_TexStr[12]; // 0x26C8
	Font * m_pFontTmp[65]; // 0x2728
	static const long TASK_2D_MENU_MAX; // 0xFFFFFFFFFFFFFFFF
	static const long TASK_2D_BG_MAX; // 0xFFFFFFFFFFFFFFFF
	static const long TASK_2D_INFO_MAX; // 0xFFFFFFFFFFFFFFFF
	GENERAL_TASK_BASE * pGT_Menu[16]; // 0x2930
	GENERAL_TASK_BASE * pGT_MenuBG[4]; // 0x29B0
	GENERAL_TASK_BASE * pGT_Info[8]; // 0x29D0
	CTaskSystem2D m_TS2D; // 0x2A10
	static const long TASK_MAX; // 0xFFFFFFFFFFFFFFFF
	static const long PRI_MAX; // 0xFFFFFFFFFFFFFFFF
	CTaskSystem m_TS; // 0x2A48
	static void SetCharaProjData(CharaProjectData &);
	const CharaProjectData * charaProjData; // 0x2A88
	long long onlineProfileTemp[12]; // 0x2A90
	long long galleryItemTmp[8]; // 0x2AF0
	static void SetStageProjData(StageProjectData &);
	const StageProjectData * stageProjData; // 0x2B30
	enum CommonAssets
	{
		COMMONASSET_STAGE = 0,
		COMMONASSET_COMMON_PLAYER = 1,
		COMMONASSET_PLAYER1 = 2,
		COMMONASSET_PLAYER2 = 3,
		COMMONASSET_PLAYER3 = 4,
		COMMONASSET_PLAYER4 = 5,
		COMMONASSET_EFFECT = 6,
		COMMONASSET_MAX = 7,
	};
	extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> * m_pCommonAssets; // 0x2B38
	BattleStage * pBattleStage; // 0x2B40
	void initializeBattleDefine();
	void createFutureAssets();
	long GetCharaColorMax(CHARACTER_NO);
	void ApplicationInit();
	void ApplicationInitRender();
	void ST_StartUpInit();
	void ST_StartUpExit();
	void ST_StartUpLoop();
	void ST_StartUpDraw();
	void ST_LogoInit();
	void ST_LogoExit();
	void ST_LogoLoop();
	void ST_LogoDraw();
	long iLogoMenuScene; // 0x2B48
	long m_SceneState; // 0x2B4C
	long m_SceneTime; // 0x2B50
	void ST_TitleInit();
	void ST_TitleExit();
	void ST_TitleLoop();
	void ST_TitleDraw();
	bool NotificationParentalControl();
	void ST_ThankYouInit();
	void ST_ThankYouExit();
	void ST_ThankYouLoop();
	void ST_ThankYouDraw();
	void ST_ThankYouTrophy();
	void ST_OrderSelectInit();
	void ST_OrderSelectExit();
	void ST_OrderSelectLoop();
	void ST_OrderSelectDraw();
	bool GetOrderIndexOf(long, unsigned char);
	void ResultRankmatchInit(bool);
	void ST_ResultInit();
	void ST_ResultExit();
	void ST_ResultLoop();
	void ST_ResultLoopPartial();
	bool IsResultActionMode();
	bool IsResultAnnounceMode();
	bool IsResultTelopMode();
	bool IsResultContinueMode();
	bool IsResultGameOverMode();
	void ResultSkip();
	void ResultBGDraw();
	void ST_ResultDraw();
	void ResultActionInit();
	void ResultActionExit();
	void ResultActionLoop();
	void ResultActionDraw();
	void ResultTrophyUpdate();
	long m_ReslutTimer; // 0x2B54
	long m_ReslutAlpha; // 0x2B58
	long m_ResultTransition[2]; // 0x2B5C
	enum <unnamed-enum-NEW_MY_RANKING_NONE>
	{
		NEW_MY_RANKING_NONE = 255,
		NEW_MY_RANKING_STORY = 0,
		NEW_MY_RANKING_TIMEATTACK = 1,
		NEW_MY_RANKING_SURVIVAL = 2,
	};
	long m_NewMyRanking; // 0x2B64
	long m_NewMyRankingRank; // 0x2B68
	void ST_GalleryInit();
	void ST_GalleryExit();
	void ST_GalleryLoop();
	void ST_GalleryDraw();
	void MemberSelectStart();
	void ST_MemberSelectInit();
	void ST_MemberSelectExit();
	void ST_MemberSelectLoop();
	void ST_MemberSelectDraw();
	void MembserSelectAddController(USER_ID, long);
	void MembserSelectPartyConnection();
	void MembserSelectNormalConnection();
	void ST_StageSelectInit();
	void ST_StageSelectExit();
	void ST_StageSelectLoop();
	void ST_StageSelectDraw();
	enum ONLINEPROFILE_LOAD_STATE
	{
		ONLINEPROFILE_LOAD_STATE_NONE = 0,
		ONLINEPROFILE_LOAD_STATE_LOAD = 1,
		ONLINEPROFILE_LOAD_STATE_LOADCOMPLETE = 2,
	};
	void ConvertOnlineProfile(long long *, SaveRecord_PlayerData *, unsigned char, unsigned char);
	GENERAL_TASK * TusGetOnlineProfile(unsigned long long *, OnlineProfileData *, AppMain::ONLINEPROFILE_LOAD_STATE *);
	void TusSetOnlineProfile();
	long GetGradePoint(RANKMATCH_RANK);
	long GetGradePointSaveData();
	void SetGradePointSaveData(long);
	long AddGradePointSaveData(long, bool);
	long UpdateGradePointSaveData(BATTLE_RESULT_TYPE, RANKMATCH_RANK, RANKMATCH_RANK, bool);
	long GetCalcGradePointSaveData(BATTLE_RESULT_TYPE, RANKMATCH_RANK, RANKMATCH_RANK, bool);
	RANKMATCH_RANK GetGradeReflectSkip(RANKMATCH_RANK, long);
	void CheckGradePoint4Trophy();
	void SetLastRankMatchPlaytime(unsigned long long);
	void CheckDownDisconnectLevel();
	RANKMATCH_RANK GetRankMatchRank(long);
	RANKMATCH_RANK GetRankMatchRank(bool);
	RANKMATCH_RANK GetRankMatchRank(SaveRecord_PlayerData &);
	RANKMATCH_RANK GetBattleGradeGradeSkipSaveData(long);
	void SetBattleGradeForSkipGradeSaveData();
	RANKMATCH_RANK GetRankMatchRoomAttrGrade();
	struct RANK_MATCH_GRADE_RANGE;
	void SetRankmatchGradeRangeShift(AppMain::RANK_MATCH_GRADE_RANGE *, RANKMATCH_RANK, long, long);
	void SetRankmatchGradeRangeAll(AppMain::RANK_MATCH_GRADE_RANGE *);
	void GetRankMatchGradeRange(RANKMATCH_RANK, long, AppMain::RANK_MATCH_GRADE_RANGE *, NETWORK_GRADE_SELECT);
	long GetRankMatchWinSaveData();
	long AddRankMatchWinSaveData();
	long GetRankMatchLoseSaveData();
	long AddRankMatchLoseSaveData();
	long GetRankMatchDrawSaveData();
	long AddRankMatchDrawSaveData();
	long GetRankMatchWinsSaveData();
	long AddRankMatchWinsSaveData();
	long SetRankMatchWinsSaveData(long);
	long UpdateRankMatchMaxWinsSaveData();
	long GetRankMatchMaxWinsSaveData();
	void SetRankMatchMaxWinsSaveData(long);
	bool GetRankMatchHighSuccessRate();
	long GetCharacterUsedSaveData(CHARACTER_NO);
	void AddCharacterUsedSaveData(CHARACTER_NO);
	long GetCharacterWinsSaveData(CHARACTER_NO);
	void AddCharacterWinsSaveData(CHARACTER_NO);
	void SetTusGalleryFlag();
	long long CalcTusGalleryFlag(TUS_VARIABLE_SLOT);
	void ReadGalleryItemFlag(CSteamID *, long long *, bool *, bool *);
	GALLERY_ID ObtainingGallaryItem(GALLERY_ID);
	GALLERY_ID ObtainingGallaryItem();
	void SetTusLiveStreamingStatusFlag(bool);
	void GetLiveStreamingStatusFlag(long, CSteamID *, bool *, Fw::cTusResult *);
	void SetTusFriendReplayStatusFlag(long long);
	PROFILE_ICON GetPlayerIcon();
	void SetPlayerIcon(PROFILE_ICON);
	void GetOnlineStageTelop(char *, long);
	unsigned char GetOnlineSingleIndex();
	void GetRegistCharacterSingle(NetworkBattleCharacter *, bool);
	unsigned char GetOnlineTeamIndex();
	void GetRegistCharacterTeam(NetworkBattleCharacter *, bool);
	DISCONNECT_LEVEL GetDisconnectLevel();
	void SetDisconnectLevel(DISCONNECT_LEVEL);
	bool GetPrisonWorld();
	void ReadRankingRankingRankMatchWinMonthly(PROFILE_ICON, LEADERBOARD_AREA, RANKMATCH_DISCONNECT_MARKER);
	const unsigned long long TIMEOUT_DISCONNECT_CHECK; // 0x2B70
	SyncMenuImage m_SyncMenuBG; // 0x2B78
	long m_MenuCursor; // 0x2D98
	enum UI_ONLINE_STEP
	{
		UI_ONLINE_STEP_NONE = 0,
		UI_ONLINE_NETWORK_INIT = 1,
		UI_ONLINE_SIGNIN_CHECK = 2,
		UI_ONLINE_SIGNIN_CHECK_WAIT = 3,
		UI_ONLINE_SIGNIN_ERRDLG = 4,
		UI_ONLINE_SIGNIN_ERRDLG_WAIT = 5,
		UI_ONLINE_NET_USE_CHECK = 6,
		UI_ONLINE_NET_USE_CHECK_WAIT = 7,
		UI_ONLINE_NETWORK_CHECK = 8,
		UI_ONLINE_NETWORK_WAIT = 9,
		UI_ONLINE_STEP_PLUS_CHECK = 10,
		UI_ONLINE_STEP_PLUS_WAIT = 11,
		UI_ONLINE_STEP_PLUS_ENTRY_WAIT = 12,
		UI_ONLINE_STEP_PLUS_WAIT_FINAL = 13,
		UI_ONLINE_STEP_LOAD = 14,
		UI_ONLINE_STEP_WAIT = 15,
		UI_ONLINE_STEP_WAIT1_1 = 16,
		UI_ONLINE_STEP_WAIT1_2 = 17,
		UI_ONLINE_STEP_WAIT2 = 18,
		UI_ONLINE_STEP_WAIT3 = 19,
		UI_ONLINE_STEP_OTHER = 20,
		UI_ONLINE_STEP_CHECK_DISCONNECT = 21,
		UI_ONLINE_STEP_END = 22,
		UI_ONLINE_STEP_ERROR = 23,
	};
	enum ONLINE_INIT_RETURN
	{
		ONLINE_INIT_NONE = 0,
		ONLINE_INIT_CONTINUE = 1,
		ONLINE_INIT_FINISH = 2,
		ONLINE_INIT_ERROR = 3,
	};
	enum ONLINE_CONTEXT_STATUS
	{
		ONLINE_CONTEXT_STATUS_DEFAULT = 0,
		ONLINE_CONTEXT_STATUS_1ST = 1,
		ONLINE_CONTEXT_STATUS_FINISH = 2,
	};
	AppMain::UI_ONLINE_STEP m_OnlineStep; // 0x2D9C
	bool m_Startup; // 0x2DA0
	long m_cnt_online_start; // 0x2DA4
	OnlineProfileData m_online_proffile_data; // 0x2DA8
	AppMain::ONLINEPROFILE_LOAD_STATE m_online_load_state; // 0x2DE0
	unsigned long long m_timeout_disconnect_check; // 0x2DE8
	void ST_MenuInit();
	void ST_MenuExit();
	void ST_MenuLoop();
	void ST_MenuDraw();
	long OnlineInitializeStep(bool);
	long m_OnlineContexStop; // 0x2DF0
	long m_MenuVSCursor; // 0x2DF4
	void ST_MenuVSInit();
	void ST_MenuVSExit();
	void ST_MenuVSLoop();
	void ST_MenuVSDraw();
	void ST_TutorialMenuInit();
	void ST_TutorialMenuExit();
	void ST_TutorialMenuLoop();
	void ST_TutorialMenuDraw();
	void ST_TutorialInit();
	void ST_TutorialExit();
	void ST_TutorialLoop();
	void ST_TutorialDraw();
	void ST_MissionMenuInit();
	void ST_MissionMenuExit();
	void ST_MissionMenuLoop();
	void ST_MissionMenuDraw();
	void ST_MissionTrialInit();
	void ST_MissionTrialExit();
	void ST_MissionTrialLoop();
	void ST_MissionTrialDraw();
	long m_PlayerDataMenuCursor; // 0x2DF8
	void ST_PlayerDataMenuInit();
	void ST_PlayerDataMenuExit();
	void ST_PlayerDataMenuLoop();
	void ST_PlayerDataMenuDraw();
	void ST_PlayerRecordInit();
	void ST_PlayerRecordExit();
	void ST_PlayerRecordLoop();
	void ST_PlayerRecordDraw();
	void ST_CharacterRecordInit();
	void ST_CharacterRecordExit();
	void ST_CharacterRecordLoop();
	void ST_CharacterRecordDraw();
	void ST_MyRankingInit();
	void ST_MyRankingExit();
	void ST_MyRankingLoop();
	void ST_MyRankingDraw();
	long m_PrevScene; // 0x2DFC
	void ST_MyProfileInit();
	void ST_MyProfileExit();
	void ST_MyProfileLoop();
	void ST_MyProfileDraw();
	void ST_MyFavoriteInit();
	void ST_MyFavoriteExit();
	void ST_MyFavoriteLoop();
	void ST_MyFavoriteDraw();
	enum <unnamed-enum-MY_FAVORITE_TEAM>
	{
		MY_FAVORITE_TEAM = 2,
		MY_FAVORITE_SINGLE = 3,
		MY_FAVORITE_STAGE = 4,
	};
	Fw::ScoreRankData RankTemp[100]; // 0x2E00
	Fw::ScoreGameInfo LeaderboardGameInfoTemp[100]; // 0x40C0
	Fw::ScorePlayerRankData LeaderboardPlayerRankTemp[100]; // 0x7450
	void ST_LeaderboardInit();
	void ST_LeaderboardExit();
	void ST_LeaderboardLoop();
	void ST_LeaderboardDraw();
	void ST_LeaderboardLoadData(long, long, long, long);
	void ST_LeaderboardShowPSN(long);
	bool OnlineProfileDownloadFriendList();
	bool OnlineProfileAddFriend(long, long);
	bool OnlineProfileAddFriendEnd();
	bool OnlineProfileDowloadOnlineSaveData();
	bool OnlineProfileRequestOnlineSaveData(const Fw::ONLINEID &);
	bool OnlineProfileLoadOnlineSavedataFlag();
	bool OnlineProfileUpdateOnlineSaveData();
	bool OnlineProfileIsConnecting();
	bool OnlineProfileGetResultFriend(const Fw::ONLINEID &);
	const CSteamID & OnlineProfileGetResultFriend(long);
	Fw::SceNpTusVariable * OnlineProfileGetTusResult(const Fw::ONLINEID &);
	void ST_ProfileInit();
	void ST_ProfileExit();
	void ST_ProfileLoop();
	void ST_ProfileDraw();
	bool UpdateOpponentListFriend();
	void ST_ReplayDataInit();
	void ST_ReplayDataExit();
	void ST_ReplayDataLoop();
	void ST_ReplayDataDraw();
	void ST_ReplayDataPlayStart(long, long, long, long);
	void ST_OnlineMenuInit();
	void ST_OnlineMenuExit();
	void ST_OnlineMenuLoop();
	void ST_OnlineMenuDraw();
	long m_PlusCheckTarget; // 0x8A30
	Fw::ScoreRankData * s_ScoreRankTemp; // 0x8A38
	Fw::ScoreGameInfo * s_ScoreGameInfoTemp; // 0x8A40
	Fw::ScoreRankData * s_ScoreRankAllTemp; // 0x8A48
	Fw::ScoreGameInfo * s_ScoreGameInfoAllTemp; // 0x8A50
	unsigned long s_NpTusSlotIdArray; // 0x8A58
	Fw::ScoreNpIdPcId * s_ScoreNpIdPcId; // 0x8A60
	Fw::ScorePlayerRankData * s_ScorePlayerRankFriendData; // 0x8A68
	Fw::ScoreGameInfo * s_ScoreGameInfoFriendTemp; // 0x8A70
	void ST_OnlineReplayInit();
	void ST_OnlineReplayExit();
	void ST_OnlineReplayLoop();
	void ST_OnlineReplayDraw();
	void ST_OnlineReplayLoadData(long, long, long);
	void ST_OnlineReplayDownload(long);
	void ST_OnlineReplayPlayStart(long, long, long, long);
	void ST_FightingListInit();
	void ST_FightingListExit();
	void ST_FightingListLoop();
	void ST_FightingListDraw();
	long ST_FightingListGetBonus(long);
	void ST_FightingListShowPSN(long);
	void ST_FightingListGetAllNpId();
	Fw::ONLINEID fightingListOnlineId[100]; // 0x8A78
	CSteamID fightingListNpId[100]; // 0x8D98
	AgMutex fightingListMutex; // 0x90B8
	bool m_bFightingListNpIdLoad; // 0x90E0
	bool m_bFightingListNpIdLoadError; // 0x90E1
	bool m_bGetFightBonus; // 0x90E2
	void ST_CreditInit();
	void ST_CreditExit();
	void ST_CreditLoop();
	void ST_CreditDraw();
	void ST_NewChallengerInit();
	void ST_NewChallengerExit();
	void ST_NewChallengerLoop();
	void ST_NewChallengerDraw();
	bool InputCheckNewChallenger(bool);
	bool InputCheckNewChallengerTraining();
	void ST_RankmatchInit();
	void ST_RankmatchExit();
	void ST_RankmatchLoop();
	void ST_RankmatchDraw();
	bool m_bRequestCreateRoomSetting; // 0x90E3
	void ST_FreematchMenuInit();
	void ST_FreematchMenuExit();
	void ST_FreematchMenuLoop();
	void ST_FreematchMenuDraw();
	void UpdateRoomNameText(const char *);
	void ST_FreematchInit();
	void ST_FreematchExit();
	void ST_FreematchLoop();
	void ST_FreematchDraw();
	void ST_PlayTogetherInit();
	void ST_PlayTogetherExit();
	void ST_PlayTogetherLoop();
	void ST_PlayTogetherDraw();
	void ST_MatchingInit();
	void ST_MatchingExit();
	void ST_MatchingLoop();
	void ST_MatchingDraw();
	bool m_ST_Matching_RankmatchAccept_systemdialog; // 0x90E4
	NET_USER_DATA RoomMemberInfoBuffer[12]; // 0x90E5
	NETWORK_ROOM_BATTLE_TYPE TableBattleTypeInfoBuffer[12]; // 0x9670
	bool s_RoomInitFlag; // 0x96A0
	void ST_RoomInit();
	void ST_RoomExit();
	void ST_RoomLoop();
	void ST_RoomDraw();
	void ST_RoomSeatSit(long, unsigned char);
	bool ST_RoomLeave(unsigned char);
	void ST_RoomSeatLeave();
	void ST_RoomSeatBattleReady();
	void ST_RoomSeatBattleReadyCancel();
	void ST_RoomTableBattleTypeChange(NETWORK_ROOM_BATTLE_TYPE);
	void ST_StartChatMessageInput();
	void ST_RoomInviteFriend();
	void ST_RoomSendSeatFlag(char, unsigned char, SEAT_FLAG, BATTLE_WAIT_STATE, NETWORK_ROOM_BATTLE_TYPE);
	bool ST_RoomMemberInfoChangeCheck(long);
	long m_Room_PlayTogether_WaitCnt; // 0x96A4
	long m_Room_PlayTogether_StartFlag; // 0x96A8
	Fw::ROOM_ATTR s_RoomListInfo[50]; // 0x96B0
	void ST_RoomListInit();
	void ST_RoomListExit();
	void ST_RoomListLoop();
	void ST_RoomListDraw();
	void ST_RoomListJoinRequest(long);
	void ST_RoomListResearchRoom();
	void ST_OnlineTrainingInit();
	void ST_OnlineTrainingExit();
	void ST_OnlineTrainingLoop();
	void ST_OnlineTrainingDraw();
	long m_EasyBattlePauseCursor; // 0x169A0
	void BattlePauseInit();
	void BattlePauseExit();
	void BattlePauseFunc();
	void BattlePauseDraw();
	void BattlePauseSetTrainingSetting(TrainingSetting &);
	void BattlePauseReplayRoundMove(long);
	bool m_SBankLoading; // 0x169A4
	bool m_PlayMovieReqquest; // 0x169A5
	void ST_OpeningDemoInit();
	void ST_OpeningDemoExit();
	void ST_OpeningDemoLoop();
	void ST_OpeningDemoDraw();
	void ST_StoryDemoInit();
	void ST_StoryDemoExit();
	void ST_StoryDemoLoop();
	void ST_StoryDemoDraw();
	void ST_EndDemoInit();
	void ST_EndDemoExit();
	void ST_EndDemoLoop();
	void ST_EndDemoDraw();
	MOVIE_ID m_LastPlayMovieID; // 0x169A8
	void ST_OptionInit();
	void ST_OptionExit();
	void ST_OptionLoop();
	void ST_OptionDraw();
	enum <unnamed-enum-TASK_LOADING_UI_LIGHT_000>
	{
		TASK_LOADING_UI_LIGHT_000 = 0,
		TASK_LOADING_UI_LIGHT_001 = 1,
		TASK_LOADING_UI_LIGHT_002 = 2,
		TASK_LOADING_UI_LIGHT_003 = 3,
		TASK_LOADING_UI_LIGHT_004 = 4,
		TASK_LOADING_UI_LIGHT_005 = 5,
		TASK_LOADING_UI_LIGHT_006 = 6,
		TASK_LOADING_UI_LIGHT_007 = 7,
		TASK_LOADING_UI_LIGHT_008 = 8,
		TASK_LOADING_UI_LIGHT_009 = 9,
		TASK_LOADING_UI_LIGHT_010 = 10,
		TASK_LOADING_UI_LIGHT_011 = 11,
		TASK_LOADING_UI_LIGHT_012 = 12,
		TASK_LOADING_UI_LIGHT_013 = 13,
		TASK_LOADING_UI_LIGHT_014 = 14,
		TASK_LOADING_UI_LIGHT_015 = 15,
		TASK_LOADING_UI_LIGHT_016 = 16,
		TASK_LOADING_UI_LIGHT_017 = 17,
		TASK_LOADING_UI_LIGHT_018 = 18,
		TASK_LOADING_UI_LIGHT_019 = 19,
		TASK_LOADING_UI_LIGHT_020 = 20,
		TASK_LOADING_UI_LIGHT_021 = 21,
		TASK_LOADING_UI_LIGHT_022 = 22,
		TASK_LOADING_UI_LIGHT_N_000 = 23,
		TASK_LOADING_UI_LIGHT_N_001 = 24,
		TASK_LOADING_UI_LIGHT_N_002 = 25,
		TASK_LOADING_UI_LIGHT_N_003 = 26,
		TASK_LOADING_UI_LIGHT_N_004 = 27,
		TASK_LOADING_UI_LIGHT_N_005 = 28,
		TASK_LOADING_UI_LIGHT_N_006 = 29,
		TASK_LOADING_UI_LIGHT_N_007 = 30,
		TASK_LOADING_UI_LIGHT_N_008 = 31,
		TASK_LOADING_UI_MESSAGE = 32,
		TASK_LOADING_UI_FLASH = 33,
		TASK_LOADING_UI_MAX = 34,
	};
	enum <unnamed-enum-MENU_LOADING_START>
	{
		MENU_LOADING_START = 0,
		MENU_LOADING_CMD = 1,
		MENU_LOADING_MAX = 2,
	};
	enum <unnamed-enum-N_LOADING_NONE_FLG>
	{
		N_LOADING_NONE_FLG = 0,
		N_LOADING_END_FLG = 1,
		N_LOADING_MAX = 2,
	};
	typedef bool(*FUNC_ST_LOADING)();
	long iLoadingST; // 0x169AC
	bool(*pLoadingST)(); // 0x169B0
	long iLoadingFlg; // 0x169B8
	long iLoadingType; // 0x169BC
	long iLoadingTimer; // 0x169C0
	long iLoadingCount; // 0x169C4
	long m_LoadCount00; // 0x169C8
	long m_LoadCount01; // 0x169CC
	long m_LoadCountMax; // 0x169D0
	long iLoadingTestCount; // 0x169D4
	long iLoadingMessageNo; // 0x169D8
	long iMenuLoadingCursor; // 0x169DC
	void setLoadingST(bool(*)());
	void setLoadingST(long, bool(*)(), long);
	void endLodingST();
	static bool exeLoadingST();
	void ST_LoadingBackInit();
	void ST_LoadingInit();
	void ST_LoadingInit2();
	void ST_LoadingLoop();
	void ST_LoadingEndLoop();
	void ST_LoadingDraw();
	void startLoadTask();
	enum <unnamed-enum-CHARA_ID_KYO>
	{
		CHARA_ID_KYO = 0,
		CHARA_ID_BEN = 1,
		CHARA_ID_DMN = 2,
		CHARA_ID_RYO = 3,
		CHARA_ID_RBT = 4,
		CHARA_ID_YRI = 5,
		CHARA_ID_TRY = 6,
		CHARA_ID_ADY = 7,
		CHARA_ID_JOE = 8,
		CHARA_ID_LEO = 9,
		CHARA_ID_RLF = 10,
		CHARA_ID_CLK = 11,
		CHARA_ID_IOR = 12,
		CHARA_ID_MTR = 13,
		CHARA_ID_VIC = 14,
		CHARA_ID_KDS = 15,
		CHARA_ID_KLA = 16,
		CHARA_ID_MXI = 17,
		CHARA_ID_GES = 18,
		CHARA_ID_BLY = 19,
		CHARA_ID_SSL = 20,
		CHARA_ID_KNG = 21,
		CHARA_ID_MAI = 22,
		CHARA_ID_ALC = 23,
		CHARA_ID_KIM = 24,
		CHARA_ID_GAN = 25,
		CHARA_ID_LUO = 26,
		CHARA_ID_ATN = 27,
		CHARA_ID_KNS = 28,
		CHARA_ID_CHN = 29,
		CHARA_ID_XND = 30,
		CHARA_ID_CNG = 31,
		CHARA_ID_CHO = 32,
		CHARA_ID_NKR = 33,
		CHARA_ID_MUI = 34,
		CHARA_ID_LVH = 35,
		CHARA_ID_RMN = 36,
		CHARA_ID_AGL = 37,
		CHARA_ID_KOD = 38,
		CHARA_ID_SHU = 39,
		CHARA_ID_TUN = 40,
		CHARA_ID_MTK = 41,
		CHARA_ID_ZRN = 42,
		CHARA_ID_BDR = 43,
		CHARA_ID_NEL = 44,
		CHARA_ID_SLV = 45,
		CHARA_ID_KKR = 46,
		CHARA_ID_MIA = 47,
		CHARA_ID_ANT = 48,
		CHARA_ID_VRS = 49,
		CHARA_ID_ROC = 50,
		CHARA_ID_MRY = 51,
		CHARA_ID_YMZ = 52,
		CHARA_ID_VNS = 53,
		CHARA_ID_OSW = 54,
		CHARA_ID_YMD = 55,
		CHARA_ID_HDR = 56,
		CHARA_ID_WHP = 57,
		CHARA_ID_SNG = 58,
		CHARA_ID_HNK = 59,
		CHARA_ID_NJD = 60,
		CHARA_ID_MAX = 61,
	};
	enum <unnamed-enum-WATER_MAP_TEXTURE>
	{
		WATER_MAP_TEXTURE = 0,
		GODRAY_TEXTURE = 1,
		MODELROOM_TEX_MAX = 2,
	};
	enum <unnamed-type-MODEL_NO>
	{
		MODELROOM_STAGE_MODEL_START = 0,
		MODELROOM_ROOM00_MODEL_NO = 0,
		MODELROOM_ROOM01_MODEL_NO = 1,
		MODELROOM_ROOM02_MODEL_NO = 2,
		MODELROOM_ROOM03_MODEL_NO = 3,
		MODELROOM_ROOM04_MODEL_NO = 4,
		MODELROOM_ROOM05_MODEL_NO = 5,
		MODELROOM_ROOM06_MODEL_NO = 6,
		MODELROOM_ROOM07_MODEL_NO = 7,
		MODELROOM_ROOM08_MODEL_NO = 8,
		MODELROOM_ROOM09_MODEL_NO = 9,
		MODELROOM_ROOM10_MODEL_NO = 10,
		MODELROOM_ROOM11_MODEL_NO = 11,
		MODELROOM_ROOM12_MODEL_NO = 12,
		MODELROOM_ROOM13_MODEL_NO = 13,
		MODELROOM_ROOM14_MODEL_NO = 14,
		MODELROOM_ROOM15_MODEL_NO = 15,
		MODELROOM_ROOM16_MODEL_NO = 16,
		MODELROOM_ROOM17_MODEL_NO = 17,
		MODELROOM_ROOM18_MODEL_NO = 18,
		MODELROOM_ROOM19_MODEL_NO = 19,
		MODELROOM_ROOM20_MODEL_NO = 20,
		MODELROOM_ROOM21_MODEL_NO = 21,
		MODELROOM_ROOM22_MODEL_NO = 22,
		MODELROOM_ROOM23_MODEL_NO = 23,
		MODELROOM_ROOM24_MODEL_NO = 24,
		MODELROOM_ROOM25_MODEL_NO = 25,
		MODELROOM_ROOM26_MODEL_NO = 26,
		MODELROOM_ROOM27_MODEL_NO = 27,
		MODELROOM_ROOM28_MODEL_NO = 28,
		MODELROOM_ROOM29_MODEL_NO = 29,
		MODELROOM_ROOM30_MODEL_NO = 30,
		MODELROOM_ROOM31_MODEL_NO = 31,
		MODELROOM_ROOM32_MODEL_NO = 32,
		MODELROOM_ROOM33_MODEL_NO = 33,
		MODELROOM_ROOM34_MODEL_NO = 34,
		MODELROOM_ROOM35_MODEL_NO = 35,
		MODELROOM_ROOM36_MODEL_NO = 36,
		MODELROOM_ROOM37_MODEL_NO = 37,
		MODELROOM_ROOM38_MODEL_NO = 38,
		MODELROOM_ROOM39_MODEL_NO = 39,
		MODELROOM_ROOM40_MODEL_NO = 40,
		MODELROOM_ROOM41_MODEL_NO = 41,
		MODELROOM_ROOM_LIGHT_MODEL_NO = 42,
		MODELROOM_ROOM_METAL_MODEL_NO = 43,
		MODELROOM_STAGE_MODEL_END = 44,
		MODELROOM_MAX_MODEL = 44,
	};
	AppMain::<unnamed-type-MODEL_NO> MODEL_NO; // 0x169E0
	enum <unnamed-enum-SCENE_MODELROOM_LOAD_INIT>
	{
		SCENE_MODELROOM_LOAD_INIT = 0,
		SCENE_MODELROOM_LOAD = 1,
		SCENE_MODELROOM_MAIN_INIT = 2,
		SCENE_MODELROOM_MAIN_BACK_INIT = 3,
		SCENE_MODELROOM_MAIN = 4,
		SCENE_MODELROOM_MENU_INVISIBLE_INIT = 5,
		SCENE_MODELROOM_MENU_INVISIBLE = 6,
		SCENE_MODELROOM_WORLD_LIGHT_INIT = 7,
		SCENE_MODELROOM_WORLD_LIGHT = 8,
		SCENE_MODELROOM_PLAYER_LIGHT_INIT = 9,
		SCENE_MODELROOM_PLAYER_LIGHT = 10,
		SCENE_MODELROOM_STAGE_INIT_LIGHT_INIT = 11,
		SCENE_MODELROOM_STAGE_INIT_LIGHT = 12,
		SCENE_MODELROOM_STAGE_LIGHT_INIT = 13,
		SCENE_MODELROOM_STAGE_LIGHT = 14,
		SCENE_MODELROOM_MODEL_INIT = 15,
		SCENE_MODELROOM_MODEL = 16,
		SCENE_MODELROOM_KOKORO_TEST_INIT = 17,
		SCENE_MODELROOM_KOKORO_TEST = 18,
		SCENE_MODELROOM_ORTHORATIO_INIT = 19,
		SCENE_MODELROOM_ORTHORATIO = 20,
		SCENE_MODELROOM_DOF_INIT = 21,
		SCENE_MODELROOM_DOF = 22,
		SCENE_MODELROOM_GROUND_FOG_INIT = 23,
		SCENE_MODELROOM_GROUND_FOG = 24,
		SCENE_MODELROOM_SKY_FOG_INIT = 25,
		SCENE_MODELROOM_SKY_FOG = 26,
		SCENE_MODELROOM_CHAR_TRANSPARENCY_INIT = 27,
		SCENE_MODELROOM_CHAR_TRANSPARENCY = 28,
		SCENE_MODELROOM_MOTION_BLUR_INIT = 29,
		SCENE_MODELROOM_MOTION_BLUR = 30,
		SCENE_MODELROOM_FXAA_INIT = 31,
		SCENE_MODELROOM_FXAA = 32,
		SCENE_MODELROOM_HEATHAZE_INIT = 33,
		SCENE_MODELROOM_HEATHAZE = 34,
		SCENE_MODELROOM_RIMLIGHT_BG_INIT = 35,
		SCENE_MODELROOM_RIMLIGHT_BG = 36,
		SCENE_MODELROOM_RIMLIGHT_MAT_INIT = 37,
		SCENE_MODELROOM_RIMLIGHT_MAT = 38,
		SCENE_MODELROOM_SHADOW_INIT = 39,
		SCENE_MODELROOM_SHADOW = 40,
		SCENE_MODELROOM_SHADOWLIGHTAREA_INIT = 41,
		SCENE_MODELROOM_SHADOWLIGHTAREA = 42,
		SCENE_MODELROOM_FILL_COL_INIT = 43,
		SCENE_MODELROOM_FILL_COL = 44,
		SCENE_MODELROOM_P1ZOFFSET_INIT = 45,
		SCENE_MODELROOM_P1ZOFFSET = 46,
		SCENE_MODELROOM_SCREENFILTER_INIT = 47,
		SCENE_MODELROOM_SCREENFILTER = 48,
		SCENE_MODELROOM_MONITORFILTER_INIT = 49,
		SCENE_MODELROOM_MONITORFILTER = 50,
		SCENE_MODELROOM_BG_BLOOM_INIT = 51,
		SCENE_MODELROOM_BG_BLOOM = 52,
		SCENE_MODELROOM_CHAR_BLOOM_INIT = 53,
		SCENE_MODELROOM_CHAR_BLOOM = 54,
		SCENE_MODELROOM_GODRAY_INIT = 55,
		SCENE_MODELROOM_GODRAY = 56,
		SCENE_MODELROOM_WATERSURFACE_INIT = 57,
		SCENE_MODELROOM_WATERSURFACE = 58,
		SCENE_MODELROOM_FBCOL_INIT = 59,
		SCENE_MODELROOM_FBCOL = 60,
		SCENE_MODELROOM_MODELFX_INIT = 61,
		SCENE_MODELROOM_MODELFX = 62,
		SCENE_MODELROOM_CAUSTIC_INIT = 63,
		SCENE_MODELROOM_CAUSTIC = 64,
		SCENE_MODELROOM_CAMERA_MOTION_INIT = 65,
		SCENE_MODELROOM_CAMERA_MOTION = 66,
		SCENE_MODELROOM_MAX = 67,
		SCENE_MODELROOM_ONLINE_GAMELOAD = 68,
		SCENE_MODELROOM_ONLINE_GAMELOADEND = 69,
		SCENE_MODELROOM_ONLINE_READYBATTLE = 70,
	};
	enum <unnamed-enum-MENU_MODELROOM_CAMERA>
	{
		MENU_MODELROOM_CAMERA = 0,
		MENU_MODELROOM_WORLD_LIGHT = 1,
		MENU_MODELROOM_PLAYER_LIGHT = 2,
		MENU_MODELROOM_STAGE_MODEL_INIT_LIGHT = 3,
		MENU_MODELROOM_STAGE_MODEL_LIGHT = 4,
		MENU_MODELROOM_MODEL = 5,
		MENU_MODELROOM_KOKORO = 6,
		MENU_MODELROOM_DEBUG_TEXTURES = 7,
		MENU_MODELROOM_DEBUG_LIGHT_INFO = 8,
		MENU_MODELROOM_FB_COLOUR = 9,
		MENU_MODELROOM_MODELFX = 10,
		MENU_MODELROOM_FXAA = 11,
		MENU_MODELROOM_RIMLIGHT_BG = 12,
		MENU_MODELROOM_RIMLIGHT_MAT = 13,
		MENU_MODELROOM_SHADOW = 14,
		MENU_MODELROOM_SHADOWLIGHTAREA = 15,
		MENU_MODELROOM_FILL_COLOUR = 16,
		MENU_MODELROOM_P1ZOFFSET = 17,
		MENU_MODELROOM_SCREEN_FILTER = 18,
		MENU_MODELROOM_MONITOR_FILTER = 19,
		MENU_MODELROOM_GROUND_FOG = 20,
		MENU_MODELROOM_SKY_FOG = 21,
		MENU_MODELROOM_DOF = 22,
		MENU_MODELROOM_CHAR_TRANSPARENCY = 23,
		MENU_MODELROOM_BG_BLOOM = 24,
		MENU_MODELROOM_CHAR_BLOOM = 25,
		MENU_MODELROOM_ORTHOPROJ_RATIO = 26,
		MENU_MODELROOM_WATERSURFACE = 27,
		MENU_MODELROOM_CAUSTIC = 28,
		MENU_MODELROOM_GODRAY_SHADER = 29,
		MENU_MODELROOM_MOTION_BLUR = 30,
		MENU_MODELROOM_HEATHAZE = 31,
		MENU_MODELROOM_CAMERA_MOTION = 32,
		MENU_MODELROOM_EXIT = 33,
		MENU_MODELROOM_MAX = 34,
	};
	struct _MONITORFILTER;
	struct MONITORFILTER;
	struct _BLOOMSETTINGS;
	struct BLOOMSETTINGS;
	struct _CHARBLOOMSETTINGS;
	struct CHARBLOOMSETTINGS;
	struct _DOFSETTINGS;
	struct DOFSETTINGS;
	struct _FXAASETTINGS;
	struct FXAASETTINGS;
	struct _FOGSETTINGS;
	struct FOGSETTINGS;
	struct _MOTIONBLURSETTINGS;
	struct MOTIONBLURSETTINGS;
	struct _GODRAYSHADERSETTINGS;
	struct GODRAYSHADERSETTINGS;
	struct _HEATHAZESETTINGS;
	struct HEATHAZESETTINGS;
	struct _WATERSURFACESETTINGS;
	struct WATERSURFACESETTINGS;
	struct _CAUSTICSETTINGS;
	struct CAUSTICSETTINGS;
	struct _EXTRA_BG_SETTINGS;
	struct EXTRA_BG_SETTINGS;
	struct _BUFFER_TRANSPARENCY_SETTINGS;
	struct BUFFER_TRANSPARENCY_SETTINGS;
	struct _FILL_SETTINGS;
	struct FILL_SETTINGS;
	struct _MODEL_FILL_SETTINGS;
	struct MODEL_FILL_SETTINGS;
	struct LIGHT_ASSET_DATA;
	struct _MATERIAL_LIGHT_ASSET_DATA;
	struct MATERIAL_LIGHT_ASSET_DATA;
	struct _MODEL_LIGHT_DATA;
	struct MODEL_LIGHT_DATA;
	struct _MODEL_RIM_LIGHT_DATA;
	struct MODEL_RIM_LIGHT_DATA;
	struct _MODEL_EMISSION_DATA;
	struct MODEL_EMISSION_DATA;
	struct _MODEL_SHADOW_DOT_RANGE_DATA;
	struct MODEL_SHADOW_DOT_RANGE_DATA;
	struct _WORLD_LIGHT_DATA;
	struct WORLD_LIGHT_DATA;
	struct _CHARAINFO;
	struct CHARAINFO;
	struct _STAGEINFO;
	struct STAGEINFO;
	struct _MODEL_FX_SETTINGS;
	struct MODEL_FX_SETTINGS;
	struct _GLOBAL_SHADER_SETTINGS;
	struct GLOBAL_SHADER_SETTINGS;
	struct _POSTPROCESS_SHADER_SETTINGS;
	struct POSTPROCESS_SHADER_SETTINGS;
	struct _MODELROOM_SETTINGS;
	struct MODELROOM_SETTINGS;
	struct _MODELROOM_LIGHTSETTINGS;
	struct MODELROOM_LIGHT_SETTINGS;
	struct _SPECIAL_LIGHT_DATA;
	struct SPECIAL_LIGHT_DATA;
	struct _SPECIAL_LIGHT_SETTINGS;
	struct SPECIAL_LIGHT_SETTINGS;
	AppMain::_MODELROOM_SETTINGS ModelRoomSettings; // 0x169E8
	AppMain::_MODELROOM_LIGHTSETTINGS ModelRoomWorldLightSettings[1]; // 0x17ADA0
	AppMain::_MODELROOM_LIGHTSETTINGS ModelRoomPlayerLightSettings[3][64][4]; // 0x17ADE4
	AppMain::_MODELROOM_LIGHTSETTINGS ModelRoomStageModelLightSettings[3][64][44]; // 0x1879E4
	AppMain::_MODELROOM_LIGHTSETTINGS ModelRoomStageModelInitLightSettings; // 0x213DE4
	AppMain::_SPECIAL_LIGHT_SETTINGS ModelRoomPlayerSpecialLightSettings[4]; // 0x213E28
	bool bModelRoomLoadEnd; // 0x214A78
	long iModelRoomScene; // 0x214A7C
	long iModelRoomCursor; // 0x214A80
	long iModelRoomDeg; // 0x214A84
	long iModelRoomWorldLightCursor[3]; // 0x214A88
	long iModelRoomPlayerLightCursor[5]; // 0x214A94
	long iModelRoomStageModelInitLightCursor[2]; // 0x214AA8
	long iModelRoomStageModelLightCursor[5]; // 0x214AB0
	long iModelRoomRimBGCursor[3]; // 0x214AC4
	long iModelRoomRimMatCursor[4]; // 0x214AD0
	long iModelRoomShadowCursor[2]; // 0x214AE0
	long iModelRoomShadowLightAreaCursor[2]; // 0x214AE8
	long iModelRoomFillColCursor[3]; // 0x214AF0
	long iModelRoomDOFCursor; // 0x214AFC
	long iModelRoomFogCursor[2]; // 0x214B00
	long iModelRoomScreenFilterCursor[2]; // 0x214B08
	long iModelRoomDSCursor; // 0x214B10
	long iModelRoomMotionBlurCursor[2]; // 0x214B14
	long iModelRoomCharBloomCursor; // 0x214B1C
	long iModelRoomBGBloomCursor; // 0x214B20
	long iModelRoomCharTransparencyCursor; // 0x214B24
	long iModelRoomMonitorFilterCursor[2]; // 0x214B28
	long iModelRoomCausticCursor; // 0x214B30
	long iModelRoomHeatHazeCursor; // 0x214B34
	long iModelRoomGodRayCursor; // 0x214B38
	long iModelRoomWaterSurfaceCursor[2]; // 0x214B3C
	long iModelRoomOrthoRatioCursor; // 0x214B44
	long iModelRoomP1ZOffsetCursor; // 0x214B48
	long iModelRoomFBColCursor[2]; // 0x214B4C
	long iModelRoomModelCursor; // 0x214B54
	long iModelRoomModelFXCursor; // 0x214B58
	long iModelRoomFXAACursor; // 0x214B5C
	long iModelRoomKokoroCursor; // 0x214B60
	float fLeverLX; // 0x214B64
	float fLeverLY; // 0x214B68
	float fLeverRX; // 0x214B6C
	float fLeverRY; // 0x214B70
	void releasePS4ModelRoom(bool);
	void ClampMenuToScreen(long &, long &, const long, const long);
	void ModelRoomLoadCharcter1P();
	void ModelRoomLoadCharcter2P();
	const char * GetStageAssetFileName(STAGE_ID);
	void ModelRoomLoadStage(STAGE_ID);
	void DrawBillboardTextures();
	void DrawBillboardTexture(long, long, long, long, long);
	void DrawDebugLights(long);
	void ModelRoomShadowPass(long, unsigned char);
	void ModelRoomCreateBloomMapPass(long);
	void ModelRoomRenderToTexturePass(long, long);
	void RenderToTexturePass(long, long, long);
	void ModelRoomDepthPass(long);
	void ModelDepthPass(long, long);
	void ModelDepthPassDouble(long, long, long, long);
	void RenderReflectionToTexturePass(long, long);
	void ModelRoomCreateBloomMap();
	void DepthFilterBloom();
	void PreFightSceneDepthFilterBloom();
	void DrawFullScreenTextureToScreen();
	void SetUpTPose();
	void ModelRoomDrawTPose(float);
	void ModelRoomReleaseBufferTPose();
	bool SwitchToCameraLights(long, long, bool);
	bool SwitchBackToGameLights(long);
	void SetUpModelRoomCamera();
	void SetUpModelRoomLights();
	void SetUpGodRayData();
	void SetupWorldLights();
	void SetUpPlayerLights();
	void SetUpStageLights();
	void updateGameLights(float *, float *, bool);
	void setEffectLightOn(long, bool);
	bool getEffectLightOn(long);
	void setupModelRoomSettings();
	void setFramebufferColour(long, long, long);
	void setFramebufferColour(long *);
	void setupShadowMatrices(long);
	void setupShadowMatrices();
	void setupLightUniforms(long);
	void SetPostFXUniforms(OGLShader *, const ConstantPostFX &, const ConstantScreenFilter &);
	void RenderFullScreenToTexture(long, OGLTexture *, OGLTexture *, long);
	void DownsampleTexture(long, OGLTexture *, OGLTexture *, long, long);
	void ApplyShaderToTexture(long, OGLTexture *, OGLTexture *, long, long, long, long);
	void BlendTwoTextures(OGLTexture *, OGLTexture *, OGLTexture *, long, const float, const Vector2Unaligned &);
	void BlendTwoTextures(long, OGLTexture *, OGLTexture *, OGLTexture *);
	void BlendThreeTexturesExt(long, OGLTexture *, OGLTexture *, OGLTexture *, OGLTexture *, OGLTexture *, long, long);
	void BlendThreeTexturesUsingDepth(long, OGLTexture *, OGLTexture *, OGLTexture *, OGLTexture *, long, long, long);
	void BlendThreeTexturesInOrder(long, OGLTexture *, OGLTexture *, OGLTexture *, OGLTexture *);
	void BlendTwoTexturesExt(long, OGLTexture *, OGLTexture *, OGLTexture *, long, long);
	void BlendTwoTexturesUsingDepth(long, OGLTexture *, OGLTexture *, OGLTexture *, long, long);
	void MaskTwoTexturesExt(long, OGLTexture *, OGLTexture *, long, long);
	void FadeFrameBuffers(long, long, long, OGLTexture *, long);
	void FadeFrameDepthBuffers(long, long, long, OGLTexture *, long);
	void TextureCopyCS(OGLTexture *, OGLTexture *);
	void TextureCopyTwoCS(unsigned long, OGLTexture *, OGLTexture *, OGLTexture *, OGLTexture *);
	void CopyDepthTextureCS(OGLTexture *, OGLTexture *);
	void ApplyShaderToTextureCS(long, OGLTexture *, OGLTexture *);
	void DownsampleComputeShader(OGLTexture *, OGLTexture *);
	void BlendTwoTexturesCS(long, OGLTexture *, OGLTexture *, OGLTexture *, OGLTexture *);
	void BlendTwoTexturesCS(long, OGLTexture *, OGLTexture *, OGLTexture *);
	void BlendThreeTexturesCS(long, OGLTexture *, OGLTexture *, OGLTexture *, OGLTexture *, OGLTexture *);
	void CombineTwoDepthTexturesCS(OGLTexture *, OGLTexture *, OGLTexture *);
	void BloomDepthFilterCS();
	void RenderDepthMapCS(OGLTexture *, OGLTexture *);
	void BlendFrameBuffers();
	void PreFightSceneBlendFrameBuffers(long);
	void ResultScreenBlendFrameBuffers(long, long);
	void RenderDepthMapToTexture(long, long);
	void RenderDepthMapToTextureExt(long, long, long);
	void RenderBloomDepthMapToTexture(long);
	void RenderVelocityBufferToTexture(long);
	void FullScreenQuadRenderSetup(long);
	void UpdateSaveFrameCounter();
	void MergeCharacterFrames(long, long);
	void ClearMotionBlurFrames(long);
	void GaussianBlurEffect(OGLTexture *, OGLTexture *, float, float, float);
	void SimpleBoxBlurEffect(OGLTexture *, float);
	void DepthOfFieldEffect(float, float, float, long);
	void SepiaEffect(long);
	void RenderDepthMap(long, long);
	void RenderDepthMaps(long);
	void RenderDepthMapWithCS(long, long);
	void RenderDepthMapsWithCS(long);
	void RemoveAlphaFromCharBuffers();
	void RenderGameScreen(long);
	void BackgroundColourEffect(long, float *);
	void GodRayShader(long);
	void TransparencyEffect(long, float);
	void BlendMasks();
	void PreFightSceneBlendMasks(long);
	void FogEffect(long);
	void ScreenFilter(long);
	void BloomEffectPass(long);
	void NewBloomEffectPass(long);
	void PreBloomEffectPass(long);
	void PreFightSceneBloomEffectPass(long, long);
	void PreFightSceneNewBloomEffectPass(long, long);
	void ResultsSceneBloomEffectPass(long);
	void ResultsSceneNewBloomEffectPass(long);
	void HighlightExtractionPass(long);
	void PreFightSceneHighlightExtractionPass(long);
	void ResultsSceneHighlightExtractionPass(long, bool);
	void CharHighlightExtraction(OGLTexture *, OGLTexture *, long, long, long);
	void CharHighlightExtractionWithoutDepth(OGLTexture *, OGLTexture *, long, long, long);
	void CharHighlightExtractionWithoutDepthWithMask(OGLTexture *, OGLTexture *, OGLTexture *, long, long, long);
	void HighlightExtractionTwoBuffersPass();
	void CharHighlightExtractionTwoBuffers(OGLTexture *, OGLTexture *, OGLTexture *, long, long, long, long);
	void BloomEffectBlend(long);
	void DoHeatHaze();
	void HeatHazeShader(float, float, float, long);
	void ApplyFXAA(long);
	void ApplyFXAAToShadows(long);
	void CreateWaterMap();
	void ModelRoomInfoDraw();
	void menuInvisible();
	void worldLightSettingDetail();
	void playerLightSettingDetail();
	void stageLightSettingDetail();
	void stageInitLightSettingDetail();
	void ModelRoomWorldLightInfoDraw();
	void ModelRoomPlayerLightInfoDraw();
	void ModelRoomStageLightInfoDraw();
	void ModelRoomStageInitLightInfoDraw();
	void fxaaSettingDetail();
	void ModelRoomFXAAInfoDraw();
	void waterSurfaceSettingDetail();
	void ModelRoomWaterSurfaceInfoDraw();
	void fbColSettingDetail();
	void ModelRoomFBColInfoDraw();
	void causticSettingDetail();
	void ModelRoomCausticInfoDraw();
	void modelFXSettingDetail();
	void ModelRoomModelFXInfoDraw();
	void dofSettingDetail();
	void ModelRoomDOFInfoDraw();
	void charTransparencySettingDetail();
	void ModelRoomCharTransparencyInfoDraw();
	void rimLightBGSettingDetail();
	void ModelRoomRimLightBGInfoDraw();
	void rimLightMatSettingDetail();
	void ModelRoomRimLightMatInfoDraw();
	void ModelRoomShadowInfoDraw();
	void shadowSettingDetail();
	void ModelRoomShadowLightAreaInfoDraw();
	void shadowLightAreaSettingDetail();
	void ModelRoomFillColInfoDraw();
	void fillColSettingDetail();
	void ModelRoomP1ZOffsetInfoDraw();
	void p1ZOffsetSettingDetail();
	void ModelRoomGroundFogInfoDraw();
	void groundFogSettingDetail();
	void ModelRoomSkyFogInfoDraw();
	void skyFogSettingDetail();
	void ModelRoomMotionBlurInfoDraw();
	void motionBlurSettingDetail();
	void ModelRoomScreenFilterInfoDraw();
	void screenfilterSettingDetail();
	void ModelRoomMonitorFilterInfoDraw();
	void monitorfilterSettingDetail();
	void ModelRoomBGBloomInfoDraw();
	void bgBloomSettingDetail();
	void ModelRoomCharBloomInfoDraw();
	void charBloomSettingDetail();
	void ModelRoomGodRayInfoDraw();
	void godraySettingDetail();
	void ModelRoomOrthoRatioInfoDraw();
	void orthoRatioSettingDetail();
	void heatHazeSettingDetail();
	void ModelRoomHeatHazeInfoDraw();
	void loadShaderFXDataToAsyncAsset(extension::AsyncAsset *, AppMain::_MODEL_LIGHT_DATA *);
	struct AssetFileData;
	struct AssetModelData;
	struct AssetMaterialData;
	struct AssetManager;
	char * getObacFileName(AppMain::AssetManager *, long);
	long loadAsset(const char *, AppMain::AssetManager *, long);
	void releaseAsset(AppMain::AssetManager *);
	void setAssetCamera(long, long, long, bool);
	long loadLightData(const char *, long &, ShaderFxHelper::ShaderFxLightSetting *);
	long loadBasicLightData(const char *, AppMain::_WORLD_LIGHT_DATA *);
	long loadCharacterLightData(const char *, AppMain::_WORLD_LIGHT_DATA *, long);
	long loadCharacterSpecialLightSettings(const char *, AppMain::_SPECIAL_LIGHT_SETTINGS *);
	void processPostProcessData(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &, AppMain::_POSTPROCESS_SHADER_SETTINGS *);
	void processPostProcessDataLine(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &, AppMain::_POSTPROCESS_SHADER_SETTINGS *);
	long loadPostProcessShaderData(const char *, AppMain::_POSTPROCESS_SHADER_SETTINGS *);
	void processGlobalShaderData(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &, AppMain::_GLOBAL_SHADER_SETTINGS *);
	void processGlobalShaderDataLine(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &, AppMain::_GLOBAL_SHADER_SETTINGS *);
	long loadGlobalShaderData(const char *, AppMain::_GLOBAL_SHADER_SETTINGS *);
	void processLightData(const std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &, ShaderFxHelper::ShaderFxLightSetting &);
	void processLightDataLine(const std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &, ShaderFxHelper::ShaderFxLightSetting &);
	void deleteFigure(void *, long);
	void deleteMotion(void *, long);
	void deleteTexture(void *, long);
	void deleteMirror(void *, long);
	void deleteModel(void *, long);
	bool createFigure(void *, long, char *);
	bool createMotion(void *, long, char *);
	bool createTexture(void *, long, char *);
	bool createCubeTexture(void *, long, const char * *);
	bool createMirror(void *, long, char *);
	bool createModel(void *, long, long, long, long);
	void setTextureModel(void *, long, long, long *, long *);
	void setRenderCamera(void *, long, float *, float *, float *);
	void setRenderShadowLight(void *, long, float *, float *, float *);
	BattleStage stageGimmick; // 0x214B78
	CAMERA_MOTION_PREVIEW_SETTINGS cameraMotionPreview; // 0x214CA8
	void ModelRoomCameraMotionSettingDetail();
	void ModelRoomCameraMotionInfoDraw();
	long GetRenderTargetIndexForSize(long);
	volatile long iBattleShaderLoad; // 0x214CE0
	unsigned char bAT_InitializeTpose; // 0x214CE4
	AgPointer<AgThread> m_shaderLoadThread; // 0x214CE8
	AgPointer<AgThread> m_shaderEnsureThread; // 0x214CF8
	class ShaderLoadThreadHost;
	AppMain::ShaderLoadThreadHost * m_shaderLoadThreadHost; // 0x214D08
	class ShaderEnsureThreadHost;
	AppMain::ShaderEnsureThreadHost * m_shaderEnsureThreadHost; // 0x214D10
	void SetBattleSetting(bool);
	long m_iLoadingNextFunc; // 0x214D18
	void SetBattleLoadingNonFade(long, long);
	void SetBattleLoadingFade(long, long, long, long);
	void InitLightData();
	void SetUpPlayerAsset(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> &, long, long, bool);
	void SetUpPlayerModel(AppMain::_CHARAINFO &, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> &, extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> &, bool);
	void SetUpStage();
	void SetResultTestSetting();
	unsigned char battleShaderLoad();
	void ST_BattleLoadingInit();
	void ST_BattleLoadingExit();
	void ST_BattleLoadingLoop();
	void ST_BattleLoadingDraw();
	void battleShaderEnsureShaders(CHARACTER_NO *, long, STAGE_ID);
	void battleShaderWait();
	void battleShaderUnloadStageShaders();
	void battleShaderUnloadCharacterShaders();
	void SetResultLoadingNonFade(long, long);
	void SetResultLoadingFade(long, long, long, long);
	void ST_ResultLoadingInit();
	void ST_ResultLoadingLoop();
	void ST_ResultLoadingDraw();
	void ST_ResultLoadingExit();
	class Scene_PreFightFaceOff;
	struct PreFightFaceOffParams;
	AppMain::PreFightFaceOffParams m_preFightFaceOff; // 0x214D20
	void StartPreFightFaceOffScene(long, long);
	void ExitPreFightFaceOffScene();
	void DeletePreFightFaceOffScene();
	void ST_PreFightFaceOffInit();
	void ST_PreFightFaceOffExit();
	void ST_PreFightFaceOffLoop();
	void ST_PreFightFaceOffDraw();
	void ActionDebugInit();
	void BattleDebugInit();
	void BattleDebugDraw();
	void ActionDebugMenuDraw();
	void MissionDebugMenuDraw();
	void FreeCameraMode();
	void renderSetCamera(bool, long);
	static void CheckProjBlendActor(Actor &);
	static void CheckProjBlendActorP1(Actor &);
	static void CheckProjBlendActorP2(Actor &);
	void checkGameLightFlag();
	void checkSpecialEffectSetting();
	void CheckBGColorSetting();
	void RoundEndSoundStop(bool);
	void SetBattleRoundTransition(const BattleSystem::BattleRoundInfo &);
	void SetRoundRestart(bool, bool);
	void BattleRestartCheck();
	void BattleEndCheck();
	void BattleRoundStartCheck();
	void BattleKOStateCheck();
	void DrawKeyHistory(PLAYER_ID, InputKeyHistory *);
	void BattleAttackDataDraw();
	void BattleKeyRecordDraw();
	void BattleEnteringDraw();
	void MaskTextureDraw(OGLTexture *, bool);
	bool BattleNewChallengerCheck();
	bool BattleNetworkError();
	void BattleNotificationUpdate();
	void PartyBattleDisconnectNotification();
	void UpdatePlayerDataCharaUseCount(PLAYER_ID, CHARACTER_NO, bool, long);
	const BattleEventHandler::Listener::CharacterStatus * createBattleCharacterStatus(BattleEventHandler::Listener::CharacterStatus *);
	long GetBattleRound();
	enum <unnamed-enum-BATTLE_MISSION_MESSAGE_INIT>
	{
		BATTLE_MISSION_MESSAGE_INIT = 0,
		BATTLE_MISSION_MESSAGE_PLAY = 1,
		BATTLE_MISSION_MESSAGE_END = 2,
	};
	bool m_bBattleMissionDraw; // 0x214D30
	long m_BattleMissionState; // 0x214D34
	void BattleMissionMessageInit(bool);
	bool BattleMissionStartMessage();
	bool BattleMissionEndMessage();
	void BattleMissionEndMenu();
	void BattleMissionDraw();
	void BattleMissionUpdate();
	void BattleMissionNextEvent();
	void BattleMissionFailedEvent();
	void BattleMissionMessageEndCallBack();
	bool bAT_NextBattleExit; // 0x214D38
	bool bAT_InitializeFrame; // 0x214D39
	bool bBattleFastForward; // 0x214D3A
	bool bBattlePause; // 0x214D3B
	AsyncCharaDataUnifyLoad m_PlayerCharaDataLoad[2]; // 0x214D40
	AsyncCharaDataUnifyLoad m_SupportCharaDataLoad[2]; // 0x214D60
	AsyncCharaDataUnifyLoad m_CommonCharaDataLoad; // 0x214D80
	std::unique_ptr<CharaDataUnify,std::default_delete<CharaDataUnify> > m_pPlayerCharaData[2]; // 0x214D90
	std::unique_ptr<CharaDataUnify,std::default_delete<CharaDataUnify> > m_pSupportCharaData[2]; // 0x214DA0
	std::unique_ptr<CharaDataUnify,std::default_delete<CharaDataUnify> > m_pCommonCharaData; // 0x214DB0
	extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> m_CharaBaseFigure; // 0x214DB8
	float m_fVignetteStrengthTemp; // 0x214DC8
	bool PauseCheck();
	BattleHud m_BattleHud; // 0x214DD0
	BattleCall m_BattleCall; // 0x214F60
	struct <unnamed-type-m_eventCheckValues>;
	AppMain::<unnamed-type-m_eventCheckValues> m_eventCheckValues; // 0x214F88
	bool m_bTouchPadPressEnable; // 0x214F8A
	bool m_bSwitchingOnlineID; // 0x214F8B
	bool ST_BattleMainLoopInitialize();
	void ST_BattleMainLoopPartial();
	void ST_BattleMainInit();
	void ST_BattleSamplePlayInit();
	void ST_BattleMainLoop();
	void ST_BattleMainDraw();
	void ST_BattleMainExit();
	void ST_BattleResultExit();
	void BattleMainInit();
	void BattleMainLoop(long, long);
	void BattleMainLoopDraw(long, long);
	void BattleRoundInit(bool, bool);
	void BattleMainDraw();
	bool m_ReplayRoundMoveFlag; // 0x214F8C
	BattleSystem::BattleRoundInfo m_ReplayRoundInfo; // 0x214F90
	void RequestReplayRoundMove(bool, BattleSystem::BattleRoundInfo *);
	void ReplayControll();
	bool isPreloadingBattleStartAnimation();
	void entryBattleStartAnimation();
	void TraningWait4RankmatchSTExit(long);
	unsigned long long GayaSeCallTick; // 0x214FE0
	char s_TextChatSendBuffer[256]; // 0x214FE8
	Fw::ROOM_CHATMESSAGE_INFO s_TextChatLog[16]; // 0x2150E8
	NET_USER_DATA myRoomMemberInfo; // 0x2161E8
	void CallGayaSe(NETWORK_GAYA_TYPE, bool);
	bool IsPlayingGayaSe(NETWORK_GAYA_TYPE);
	void OpenCommentIme();
	void OnlineTrainingSendSetting(TrainingSetting &);
	bool IsEnableOnlineTrainingSendSetting();
	struct OnlineRoomMemberParams;
	AppMain::OnlineRoomMemberParams m_onlineRoomMemberParams; // 0x216260
	void setupOnlineRoomMembers();
	void disposeOnlineRoomMembers();
	void updateOnlineRoomMembers(float);
	void drawOnlineRoomMembers();
	void setOnlineRoomBattleMode(bool);
	RoomMembers * getOnlineRoomMembers();
	void visibleOnlineRoomMembers(bool);
	void switchingOnlineRoomMembers(bool);
	void switchingOnlineRoomMembers();
	struct OnlineBattleGUIParams;
	AppMain::OnlineBattleGUIParams m_OnlineBattleGUIParams; // 0x216268
	void OnlineInitializeGUIParams();
	void OnlineClearGUIParams();
	void OnlineSetupGUIParams();
	void OnlineUpdateGUI();
	void OnlineDrawGUI();
	OGLModel * getPlayerModel(PLAYER_ID);
	bool isOnlineMessageAndGayaAccepted();
	bool isOnlineMessageAccepted();
	static bool Debug_isDummyOnlineOperation();
	class ScaleformResult;
	AppMain::ScaleformResult m_scaleformResult; // 0x217398
	struct EWatchingOperation;
	struct WatchingParams;
	AppMain::WatchingParams m_watchingParams; // 0x2173A8
	void clearScaleformResult();
	const AppMain::ScaleformResult & getScaleformResult();
private:
	void BattleOnlineWatchingInitialize();
	void BattleOnlineWatchingDispose();
	void BattleOnlineWatchingUpdate();
	void BattleOnlineWatchingDraw();
	void BattleOnlineWatchingStart();
	void BattleOnlineWatchingStop();
public:
	bool isBattleOnlineSendMessage();
private:
	void BattleOnlineWatching_startNormalScene();
	void BattleOnlineWatching_updateNormalScene(long);
	void BattleOnlineWatching_startFixedPhraseScene();
	void BattleOnlineWatching_updateFixedPhraseScene(long);
	void BattleOnlineWatching_startSESelectScene(BattleHudCommonNumbers::ESESelectorSelectKey::Type, BattleHudCommonNumbers::ESESelectorPage::Type);
	void BattleOnlineWatching_updateSESelectScene(long);
	void BattleOnlineWatching_TestPlaySE(long, GameOperations::GameOpSpec);
	void BattleOnlineWatching_playSE(GameOperations::GameOpSpec);
	NETWORK_GAYA_TYPE BattleOnlineWatching_getGAYAType(BattleHudCommonNumbers::ESESelectorPage::Type, GameOperations::GameOpSpec);
	void BattleOnlineWatching_entryMessage(const char *);
public:
	InputKeyCheck m_KeyData[2]; // 0x217420
	InputKeyCheck m_CmdKeyData[2]; // 0x217430
	InputKeyHistory m_KeyHistory[2]; // 0x217440
	void SetKeyDelayFrame(bool);
	void SetControllerSetting();
	void InputKeyApply();
	void InputKeyRecv();
	void InputKeySend();
	void InputKeyReplay();
	long m_iMissionLoadDataCharaID; // 0x217450
	AsyncCharaFileLoad<ComboMissionData> m_ComboMissionDataLoad; // 0x217458
	AsyncKeyRecordDataLoad m_KeyRecordDataLoad; // 0x217468
	std::unique_ptr<ComboMissionData,std::default_delete<ComboMissionData> > m_pComboMissionData; // 0x217478
	void SetMissionDataLoadingNonFade(long, long, long);
	void SetMissionDataLoadingFade(long, long, long, long, long);
	void ReleaseMissionData();
	void ReleaseMissionKeyData();
	void ST_MissionDataLoadingInit();
	void ST_MissionDataLoadingLoop();
	void ST_MissionDataLoadingDraw();
	void ST_MissionDataLoadingExit();
	long m_iMissionKeyDataID; // 0x217480
	void SetMissionKeyDataLoadingNonFade(long, long, long);
	void SetMissionKeyDataLoadingFade(long, long, long, long, long);
	void ST_MissionKeyDataLoadingInit();
	void ST_MissionKeyDataLoadingLoop();
	void ST_MissionKeyDataLoadingDraw();
	void ST_MissionKeyDataLoadingExit();
	void _DummyFuncVoid();
	long _DummyFuncFalse();
	void ST_StoreInit();
	void ST_StoreExit();
	void ST_StoreLoop();
	void ST_StoreDraw();
	void CreateRoom(bool);
	struct CREATE_ROOM_SETTING;
	AppMain::CREATE_ROOM_SETTING CreateRoomSetting; // 0x217484
	AppMain::CREATE_ROOM_SETTING CreateRoomSettingHistory; // 0x217530
	void ResetCreateRoomSetting(AppMain::CREATE_ROOM_SETTING &);
	void ResetCreateRoomSetting();
	bool RoomListGotoFlag; // 0x2175DC
	enum <unnamed-enum-SEARCH_ROOM_ENTRY_RANK>
	{
		SEARCH_ROOM_ENTRY_RANK = 0,
		SEARCH_ROOM_ENTRY_MAX = 1,
	};
	NETWORK_MATCHING_TYPE MatchingType; // 0x2175E0
	GAME_RULE MatchingGameRule; // 0x2175E4
	struct ENTRY_SETTING;
	AppMain::ENTRY_SETTING SearchSetting; // 0x2175E8
	AppMain::ENTRY_SETTING SearchSettingHistory; // 0x217688
	bool m_bRequestSearchSetting; // 0x217728
	void ResetSearchRoomSetting(AppMain::ENTRY_SETTING &, GAME_RULE);
	void ResetSearchRoomSetting();
	void OnlineFreeMatch1on1SearchRoom();
	void OnlineFreeMatchPartySearchRoom();
	bool RoomInitializeFlag; // 0x217729
	SEND_MESSAGE s_Msg; // 0x21772A
	SEND_MESSAGE s_Msg2; // 0x217B7F
	NET_USER_DATA s_RoomMemberInfo[12]; // 0x217FD4
	void RoomInitializeOn();
	bool IsMySeatTaken(unsigned char, unsigned char);
	bool IsEmptySeat(unsigned char);
	NET_USER_DATA * GetRoomMemberInfo();
	void SetBattleInfoFromRoom();
	bool CheckGradeSkipEnd();
	bool SendRoomBack(bool);
	void SendResultMenu(long);
	void ReplayConvertToLeaderboard(LEADERBOARD_INFO *, BattleReplay *, long);
	void SubmitReplayData(unsigned long long, BattleReplay *, Fw::RANKING_HANDLE, long);
	void SetBattleInfoFromReplayData(unsigned long, BattleReplay *);
	void ConvertLeaderBoardReplaytoSaveReplay(Fw::cRankingReadResult *, Fw::ScoreGameInfo *, Fw::ScoreRankData *);
	static const long SOUND_VOLUME_MAX; // 0xFFFFFFFFFFFFFFFF
	enum SoundGroupSpec
	{
		SoundGroup_Normal = 0,
		SoundGroup_Ambience = 1,
		SoundGroup_StageGaya = 2,
		SoundGroup_Player_Loop_SE = 3,
		SoundGroup_1P_Voice = 4,
		SoundGroup_2P_Voice = 5,
		SoundGroup_3P_Voice = 6,
		SoundGroup_4P_Voice = 7,
		SoundGroup_System_Voice = 8,
		SoundGroup_System_Voice_P1Side = 9,
		SoundGroup_System_Voice_P2Side = 10,
		SoundGroup_Network_Gaya_SE = 11,
		SoundGroup_Hit_SE = 12,
		SoundGroup_1P_SE = 13,
		SoundGroup_2P_SE = 14,
		SoundGroup_3P_SE = 15,
		SoundGroup_4P_SE = 16,
		SoundGroup_System_SE = 17,
		SoundGroup_UseMaxCount = 18,
	};
	enum SoundListIndex
	{
		SoundList_Common = 0,
		SoundList_1P = 1,
		SoundList_2P = 2,
		SoundList_3P = 3,
		SoundList_4P = 4,
		SoundList_Stage = 5,
		SoundList_Common_SysVoiceP1 = 6,
		SoundList_Common_SysVoiceP2 = 7,
		SoundList_Network_Gaya = 8,
		SoundListIndex_Internal_Use_Max_Count = 9,
	};
	CMediaManager * pMediaManager; // 0x218560
	extension::SoundBank m_Snd_Bank_Common; // 0x218568
	extension::SoundBank m_Snd_Bank_BGM; // 0x218578
	extension::SoundBank m_Snd_Bank_Network; // 0x218588
	extension::SoundBank m_Snd_Bank_Menu; // 0x218598
	extension::SoundList m_Snd_Lists[9]; // 0x2185A8
	void Sound_VariableInit();
	void Sound_Create();
	void Sound_Release();
	bool Sound_IsLoadComplete();
	void Sound_LoadCommon();
	void Sound_LoadStage(const char *);
	void Sound_LoadPCharacter(long, const char *);
	void Sound_LoadAppendPCharacter(long, const char *);
	void Sound_UnloadCommon(bool);
	void Sound_UnloadStage();
	void Sound_UnloadPCharacter();
	void Sound_UnloadPCharacter(long);
	void Sound_UnloadAll(bool);
	bool Sound_IsEmpty_StageList();
	void RequestPlayBGM(SoundId, float, float, bool);
	void RequestPlaySE(SoundId);
	extension::SoundHashKey Sound_GetName(AppMain::SoundListIndex, long);
	void Sound_PlayBGMByName(AppMain::SoundListIndex, const extension::SoundHashKey &, float, float, bool);
	void Sound_PlayBGMByName(AppMain::SoundListIndex, const char *, float, float, bool);
	void Sound_PlayBGMByName(const extension::SoundHashKey &, float, float, bool);
	void Sound_PlayBGMByName(const char *, float, float, bool);
	void Sound_PlayBGM(AppMain::SoundListIndex, long, float, float, bool);
	void Sound_PlaySEByName(AppMain::SoundListIndex, const extension::SoundHashKey &, const extension::SoundObject *, const extension::SoundOneshotParameters *);
	void Sound_PlaySEByName(AppMain::SoundListIndex, const char *, const extension::SoundObject *, const extension::SoundOneshotParameters *);
	void Sound_PlaySEByName(AppMain::SoundListIndex, const extension::SoundHashKey &, const extension::SoundOneshotParameters *);
	void Sound_PlaySEByName(AppMain::SoundListIndex, const char *, const extension::SoundOneshotParameters *);
	void Sound_PlaySEByName(const extension::SoundHashKey &, const extension::SoundObject *, const extension::SoundOneshotParameters *);
	void Sound_PlaySEByName(const char *, const extension::SoundObject *, const extension::SoundOneshotParameters *);
	void Sound_PlaySEByName(const extension::SoundHashKey &, const extension::SoundOneshotParameters *);
	void Sound_PlaySEByName(const char *, const extension::SoundOneshotParameters *);
	void Sound_PlaySE(AppMain::SoundListIndex, long, const extension::SoundOneshotParameters *, const extension::SoundObject *);
	bool Sound_IsPlayingSE(AppMain::SoundListIndex, long);
	bool Sound_IsPlayingSEByName(AppMain::SoundListIndex, const char *, const extension::SoundObject *);
	bool Sound_IsPlayingSEByName(AppMain::SoundListIndex, const extension::SoundHashKey &);
	bool Sound_IsPlayingSEByName(AppMain::SoundListIndex, const char *);
	bool Sound_IsPlaying();
	void Sound_StopBGM(float);
	void Sound_StopSE(SoundId);
	void Sound_StopSE(AppMain::SoundListIndex, long, float);
	void Sound_StopSE(float);
	void Sound_StopBattleSE(float);
	void Sound_StopGroupSE(AppMain::SoundGroupSpec);
	void Sound_StopUserTagedSE(unsigned long, float);
	void Sound_StopSEByName(AppMain::SoundListIndex, const extension::SoundHashKey &, float);
	void Sound_StopSEByName(AppMain::SoundListIndex, const char *, float);
	void Sound_StopAll();
	void Sound_PauseBGM(bool);
	void Sound_PauseSE(bool);
	void Sound_PauseBattleSE(bool);
	void Sound_PauseGroupSE(AppMain::SoundGroupSpec, bool);
	void Sound_PauseUserTagedSE(unsigned long, bool);
	void Sound_SetReverb(long, long, long, long, long);
	void Sound_SetStageReverb(long, long, long, long, long);
	void Sound_SetGlobalReverb(bool);
	bool Sound_IsGlobalReverb();
	float Sound_NextRandom();
	void Sound_Volume_Commit();
	void Sound_Volume_BGM_Modulation(float, float);
	void Sound_Volume_BGM_Modulation_Reset();
	void Sound_Volume_Set_BGM(long);
	void Sound_Volume_Set_SE(long);
	void Sound_Volume_NormalSE_Modulation(float, float);
	void Sound_Volume_Ambience_Modulation(float, float);
	void Sound_Volume_CharaVoice_Modulation(float, float);
	void Sound_Volume_SystemVoice_Modulation(float, float);
	void Sound_Volume_SystemSE_Modulation(float, float);
	void Sound_Volume_SE_Modulation(float, float);
	void Sound_Volume_SE_Modulation_Reset();
	void Sound_Volume_BGM_Disable(bool);
	void Sound_Volume_NormalSE_Disable(bool);
	void Sound_Volume_Ambience_Disable(bool);
	void Sound_Volume_CharaVoice_Disable(bool);
	void Sound_Volume_SystemVoice_Disable(bool);
	void Sound_Volume_SystemSE_Disable(bool);
	void Sound_Volume_Pad_Disable(bool);
	void Sound_SetGlobalPadOutputUsers(bool, bool, bool, bool);
	void Sound_ResetGlobalPadOutputUsers();
	void SoundSystem();
	void SoundSuspend();
	void SoundResume();
	bool Sound_BGMPlay_IsActive();
	bool Sound_BGMPlay_IsLoadPending();
	float Sound_BGMPlay_GetPosition();
	bool Sound_BGMPlay_SetPosition(float);
	float Sound_BGMPlay_GetLength();
	bool Sound_SEPlay_IsLoadPending();
	bool Sound_IsBGM(AppMain::SoundListIndex, long);
	bool Sound_BGMPlay_IsPause();
	extension::SoundHashKey Sound_BGMPlay_GetSoundHashKey();
	bool Sound_HasSoundHashKey(const extension::SoundHashKey &);
	float Sound_GetPlayPosition(const extension::SoundHashKey &);
	void Sound_SetMusicPlayerDisable(bool);
	const extension::SoundList * Sound_GetList(long);
	void Sound_Debug_SetIsDisableAllRequest(bool);
	bool Sound_Debug_IsDisableAllRequest();
	enum BGM_MODE
	{
		BGM_MODE_NORMAL = 0,
		BGM_MODE_ACTIVE = 1,
		BGM_MODE_PASSIVE = 2,
	};
	void RequestPlayBGMUtil(extension::SoundHashKey, AppMain::BGM_MODE, float, float, bool);
	void RequestPlayBGMUtil(const char *, AppMain::BGM_MODE, float, float, bool);
	void RequestPlayBGMUtil(SoundId, AppMain::BGM_MODE, float, float, bool);
	void ContinuePlayBGMUtil(AppMain::BGM_MODE, float, float, bool);
	void StopBGMUtil(float);
	extension::SoundHashKey m_nowPlayBGM; // 0x218758
	enum <unnamed-enum-TOUCH_BUTTON_NONE>
	{
		TOUCH_BUTTON_NONE = 0,
		TOUCH_BUTTON_PRESS = 1,
		TOUCH_BUTTON_TRIGGER = 2,
		TOUCH_BUTTON_RELEASE = 3,
	};
	void createFont(long, long, long, long, long, long, long, long, long, long, long, long);
	void releaseMenuTexture();
	void releaseAllTexture();
	void clearTexString();
	void removeTexString();
	Image * pSystemTex; // 0x218760
	extension::BasicFutureObject<Image,extension::FutureImageOption> * m_MenuImgTbl; // 0x218768
	void createMenuImage(long, const ImageDataInfo *);
	void createMenuImage2(long, const ImageDataInfo *);
	void setTaskParamater(GENERAL_TASK_BASE *, float, float, long, long, long, long, long, long);
	void setTaskPos(GENERAL_TASK_BASE *, float, float);
	void setTaskAffine(GENERAL_TASK_BASE *, float, float, float);
	void setTaskRender(GENERAL_TASK_BASE *, long, long);
	void setFogColor(GENERAL_TASK_BASE *, float *);
	void changeTaskPicture(GENERAL_TASK_BASE *, long, long);
	void setInvisible(GENERAL_TASK_BASE *, bool);
	void setPriority(GENERAL_TASK_BASE *, long);
	void setPatternReserveData(GENERAL_TASK_BASE *, long);
	void GT_NormalExe(GENERAL_TASK_BASE *);
	void GT_NormalDelExe(GENERAL_TASK_BASE *);
	void GT_FillDraw(GENERAL_TASK_BASE *, long);
	void GT_GridLinerDraw(GENERAL_TASK_BASE *, long);
	void GT_NormalDraw(GENERAL_TASK_BASE *, long);
	void GT_NormalFillRect(GENERAL_TASK_BASE *, long, long);
	void NormalDraw(float, float, long, long, long, float, float);
	void NormalDraw(float, float, long, long, long, long);
	void NormalDraw(float, float, long, long, long);
	long drawImageNumber(Image * *, long, float, float, long, long, const _C_CONV *);
	void drawImageNumber(long, float, float, long, long, long, long, long);
	long getImageNumberLen(long);
	bool changeScene(long *);
	void setNextScene(long, long);
	bool changeSubScene(long *);
	void setNextSubScene(long, long);
	void createInfoWindowEx(long, long, long, long);
	void setInfoWindow(long, long, long, long, long);
	void setPopupWindow(GENERAL_TASK_BASE *, long, long);
	void drawString(long, long, long, long, const char *);
	void drawString2x(long, long, long, long, const char *);
	void drawString2(unsigned char *, long, long, float, unsigned long, long, float, float, long);
	void setStringShadow(const char *, long, long, long, long, long *, long *, long, long, long);
	void resetText();
	void drawText(const char *, long, long, unsigned long, unsigned long, Font *, bool);
	void drawTextCaller();
	long getStringX(const char * *, long *, long, Font *, char *, long *);
	long getStringX(char *, long, Font *, char *);
	long getStringX(const char * *, long, Font *, char *, long *);
	long getStringY(const char * *, long, long, long, Font *, long *);
	void setStringChar(TexString *, long *, long, const char * *, long, long, long, unsigned long, unsigned long, Font *, bool);
	void fontConvFix(_C_CONV *);
	short indicatorPosX; // 0x218770
	short indicatorPosY; // 0x218772
	short indicatorSize; // 0x218774
	bool indicatorMaskFlag; // 0x218776
	void CreateIndicator(long, bool, bool);
	void CreateIndicator(long, long, long, bool, bool, long);
	void DeleteIndicator(long);
	void AllDeleteIndicator();
	bool IsActiveIndicator();
	void StartIndicator();
	void StopIndicator();
	void indicatorMaskDraw();
	void SetIndicatorFrame();
	void SetIndicatorPosX(long);
	void SetIndicatorPosY(long);
	void AddIndicatorPosX(long);
	void AddIndicatorPosY(long);
	void CreateIndicatorA(long, long);
	void CreateIndicatorA2(long, long, long, long);
	void DeleteIndicatorA(long);
	bool IsActiveIndicatorA(long);
	void clearMenuTask();
	Image * pCapture; // 0x218778
	bool m_RequestCupture; // 0x218780
	void RequestCapture();
	void CreateCapture();
	void ReleaseCapture();
	void DrawCapture();
	void ChangeMainMenuBGM(bool);
	SoundId GetMainMenuBGM();
	bool IsPlayGoOnEnd();
	const char * GetNetworkTitleName(NETWORK_TITLE);
	void createOriginalShader();
	void createOriginalShader2D();
	void ensureCommonShaders();
	void ensureStageShaders(STAGE_ID);
	void ensureCharacterShaders(CHARACTER_NO);
	void unloadStageShaders(STAGE_ID);
	void unloadCharacterShaders(CHARACTER_NO);
	SaveRecord_Main SaveDataMain; // 0x218788
	SaveRecord_Main SaveDataMainTemp; // 0x22FC28
	SaveRecord_Replay SaveDataReplay; // 0x2470C8
	unsigned long long m_iPlayTime; // 0x263F48
	void SaveDataInit();
	void SaveDataFrameUpdate();
	void SaveDataDefault();
	void SaveDataAsyncLoad();
	bool SaveDataIsLoadReady();
	enum <unnamed-enum-SAVE_ALLWAYS>
	{
		SAVE_ALLWAYS = 0,
		SAVE_ON_CHANGED = 1,
	};
	bool SaveDataAsyncSave(long);
	bool SaveDataUpdateCheck();
	void SaveDataAsyncSaveReplay();
	bool SaveDataIsSaveReady();
	bool SaveDataIsReady();
	void SaveDataUpdatePlayTime(unsigned long long);
	void SaveDataInitSysOption();
	void SaveDataInitGameOption();
	void SaveDataInitSoundOption();
	void SaveDataInitDisplayOption();
	void SaveDataInitKeyConfig(USER_ID);
	void SaveDataInitKeyConfig();
	SaveRecord_ButtonConfigUser GetSaveDataKeyConfigUser(USER_ID);
	void SetSaveDataKeyConfigUser(USER_ID, FighterOperationMapper &);
	void SetSaveDataKeyConfigUser(USER_ID, SaveRecord_ButtonConfigUser &);
	FighterOperationMapper GetSaveDataKeyConfigMyMapper(USER_ID);
	FighterOperationKeyboardMapper GetSaveDataKeyboardConfigMyMapper(USER_ID);
	FighterOperationMapper GetSaveDataKeyConfigUserDevice(USER_ID, long);
	FighterOperationMapper GetSaveDataKeyConfigUserUID(USER_ID, AgControllerUID);
	void SetSaveDataKeyConfigUserDevice(USER_ID, long, const FighterOperationMapper &);
	void SetSaveDataKeyConfigUserUID(USER_ID, AgControllerUID, const FighterOperationMapper &);
	void SetSaveDataKeyboardConfigUser(USER_ID, const FighterOperationKeyboardMapper &);
	AgPath SaveData_GetGraphicsOptionsPath();
	void SaveData_SaveGraphicsOptions();
	void SaveData_LoadGraphicsOptions();
	void SetSaveDataLanguage(LANGUAGE_MODE);
	LANGUAGE_MODE GetSaveDataLanguage();
	const char * GetSaveDataLanguageName();
	void SetSaveDataVibration(bool);
	bool GetSaveDataVibration();
	enum <unnamed-enum-REPLAY_SAVE_NONE>
	{
		REPLAY_SAVE_NONE = 0,
		REPLAY_SAVE_ALWAYS = 1,
		REPLAY_SAVE_CONFIRM = 2,
	};
	void SetSaveDataReplayAutoSave(unsigned char);
	unsigned char GetSaveDataReplayAutoSave();
	void SetSaveDataAnnounceType(unsigned char);
	unsigned char GetSaveDataAnnounceType();
	ANNOUNCE_TYPE GetSaveDataMyAnnounceType(PLAYER_ID);
	void CommitSaveDataDisplayGamma();
	void SetSaveDataAiLevel(AiLevelSpec);
	AiLevelSpec GetSaveDataAiLevel();
	void SetSaveDataWinRoundCount(WIN_ROUND_COUNT);
	WIN_ROUND_COUNT GetSaveDataWinRoundCount();
	void SetSaveDataRoundTimerType(BATTLE_ROUND_TIMER_TYPE);
	BATTLE_ROUND_TIMER_TYPE GetSaveDataRoundTimerType();
	void SetGalleryFlag(GALLERY_ID, bool);
	bool GetGalleryFlag(GALLERY_ID);
	void SetGalleryNewFlag(GALLERY_ID, bool);
	bool GetGalleryNewFlag(GALLERY_ID);
	NETWORK_TITLE UpdateNetworkTitle(bool);
	void SetNetworkTitleFlag(NETWORK_TITLE, bool, bool);
	bool GetNetworkTitleFlag(NETWORK_TITLE);
	float GetNetworkTitleRate();
	void SetNetworkTitleNewFlag(NETWORK_TITLE, bool);
	bool GetNetworkTitleNewFlag(NETWORK_TITLE);
	void SetNetworkAgencyFlag(bool);
	bool GetNetworkAgencyFlag();
	void SetRankMatchBattleNum(long long);
	long GetRankMatchBattleNum();
	long GetRankMatchDisconnectNum();
	void SetOnlineBattleRankMatchWinMonthly(unsigned long);
	void AddOnlineBattleRankMatchWinMonthly();
	unsigned long GetOnlineBattleRankMatchWinMonthly();
	void AddDisconnectNum();
	DISCONNECT_LEVEL UpdateDisconnectLevel();
	long GetSaveReplayIndex();
	BattleReplay * GetReplaySaveData(long);
	BattleReplay * GetReplaySaveDataSortDownLoadTime(long, long *);
	bool SetReplaySaveData(BattleReplay *);
	char * GetReplayBufferSaveData(long, unsigned char, unsigned long long *, unsigned long long *);
	bool GetLockFlagReplaySaveData(long);
	void SetLockFlagReplaySaveData(long, bool);
	bool GetBestFlagReplaySaveData(long);
	void SetBestFlagReplaySaveData(long, bool);
	bool IsEmptyBestReplay();
	unsigned char GetBestReplayNum(long *);
	char GetEmptyBestReplayPcIdSaveData();
	void SetBestReplayTusSlotIdSaveData(long, char);
	bool IsSetBestReplaySaveData(long);
	void DeleteReplaySaveData(long);
	OpponentList * GetOpponentList(Fw::ONLINEID);
	OpponentList * GetOpponentList(long);
	void SetOpponentList(Fw::ONLINEID *, BATTLE_RESULT_TYPE, GAME_RULE);
	FightingResult * GetFightingList(long);
	void SetFightingList(FightingResult *);
	void FightingListDateSort();
	bool GetFightingListFightBonus(long);
	void SetFightingListFightBonus(long, bool);
	bool GetFirstNoticeFlag(unsigned long);
	void SetFirstNoticeFlag(unsigned long, bool);
	void SaveDataInitGameData();
	bool * GetGameStartupFlagAddress();
	bool GetGameStartupFlag();
	void SetGameStartupFlag(bool);
	GAME_RULE GetHistoryGameRule();
	void SetHistoryGameRule(GAME_RULE);
	STAGE_ID GetHistoryStageID();
	void SetHistoryStageID(STAGE_ID);
	void CommitTraningSetting(TrainingSetting &);
	void UpdateTraningSetting(TrainingSetting &);
	RANKMATCH_DISCONNECT_MARKER GetRankmatchDisconnectMarker();
	RANKMATCH_DISCONNECT_MARKER GetRankmatchDisconnectMarker(DISCONNECT_LEVEL);
	void SaveDataLoaded_Patch103();
	void SaveDataLoaded_Patch105();
	void SaveDataLoaded_Patch110();
	void SaveDataLoaded_Patch200();
	void SaveDataLoaded_Patch300();
	void SaveDataLoaded_Version0();
	void SaveDataLoaded_Version1();
	void SaveDataLoaded_Steam(bool);
	GALLERY_ID m_NotificationGalleryID; // 0x263F50
	TUS_VARIABLE_SLOT GetTusVariableSlotId(GALLERY_ID);
	float GetGalleryRate();
	void UnlockGallery(GALLERY_ID, bool);
	void UnlockStageBGMSoundGallery(SoundId);
	void UnlockGallery_ItemRandom();
	GALLERY_TYPE GetGalleryType(GALLERY_ID);
	long GetGalleryCategory(GALLERY_ID);
	long GetGalleryNo(GALLERY_ID);
	GALLERY_ID ExportLocalToGlobal(long, long);
	GALLERY_ID ExportLocalToGlobal(long, long, long);
	void SetGalleryCategoryFlag(long, long, bool);
	bool GetGalleryCategoryFlag(long, long);
	void SetGalleryCategoryNewFlag(long, long, bool);
	bool GetGalleryCategoryNewFlag(long, long);
	GALLERY_ID GetGalleryID(MOVIE_ID);
	GALLERY_ID GetGalleryID(CHARACTER_NO);
	GALLERY_ID GetGalleryIDformIndex(long);
	long g_modelCount; // 0x263F54
	long g_figureCount; // 0x263F58
	long g_motionCount; // 0x263F5C
	long g_mirrorCount; // 0x263F60
	long g_textureCount; // 0x263F64
	long g_cameraCount; // 0x263F68
	long g_lightCount; // 0x263F6C
	OGLModel * * pModel; // 0x263F70
	std::vector<extension::BasicFutureObject<OGLMotion,void>,std::allocator<extension::BasicFutureObject<OGLMotion,void> > > pMotion; // 0x263F78
	std::vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>,std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > pFigure; // 0x263F90
	std::vector<extension::BasicFutureObject<OGLMirror,void>,std::allocator<extension::BasicFutureObject<OGLMirror,void> > > pMirror; // 0x263FA8
	std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>,std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > pTexture; // 0x263FC0
	OGLMatrix * * pCamera; // 0x263FD8
	OGLMatrix * * pBillboard; // 0x263FE0
	OGLVec3 posVec3; // 0x263FE8
	OGLVec3 lookVec3; // 0x263FF4
	OGLVec3 upVec3; // 0x264000
	OGLLight m_Light; // 0x26400C
	OGLMaterialLight m_MaterialLight; // 0x2640A8
	OGLVec3 m_LightPos; // 0x26414C
	OGLMatrix * * pShadowLight; // 0x264158
	OGLMatrix * * pShadowLightBillboard; // 0x264160
	bool m_FogEnable; // 0x264168
	OGLFog m_Fog; // 0x26416C
	long m_HeadIndex; // 0x2641EC
	OGLShader * m_pFadeShader; // 0x2641F0
	OGLMatrix mBillBoard; // 0x2641F8
	OGLMatrix mView; // 0x264238
	OGLMatrix mProj; // 0x264278
	void createImage(long, long);
	void RestoreGamma();
	void SetGamma(float);
	float GetGamma();
	void setPause(unsigned char);
	unsigned char getPause();
	void setProgressSpeed(float);
	float getProgressSpeed();
	void pushMarker(const char *);
	void popMarker();
	long getCurrentBackBufferID();
	long getCurrentRenderBufferID();
	void debugClearButton();
	void setClearComputeSync(unsigned char);
	unsigned char isButtonPressed(long);
	unsigned char isButtonDown(long);
	long getFingers();
	_CGPoint getFinger(long);
	float getLeftStickX();
	float getLeftStickY();
	float getRightStickX();
	float getRightStickY();
	bool m_VSync; // 0x2642B8
	void SetVSync(bool);
	bool GetVSync();
	void SetFadeIn(long, long, bool);
	void SetFadeOut(long, long, bool);
	void SetFadeOutEnd(long);
	void UnlockFade();
	void ResetFade();
	bool IsFadeEnd();
	bool IsFadeOut();
	long GetFadeColor();
	void setFadeEnd();
	void FadeDraw();
	void ST_FadeIn();
	void ST_FadeOut();
	void ST_NonFadeOut();
	void ST_ScriptingInit();
	void ST_ScriptingLoop();
	void ST_ScriptingDraw();
	void setFadeST(long, long, long);
	void setFadeSTExit(long, long, long, long);
	void setNonFadeSTExit(long, long);
	void setFadeSubMenuST(long, long, long);
	bool checkFadeOut();
	bool IsFadeOutFunc();
	void screenMask();
	long m_iFadeFrame; // 0x2642BC
	_UNIRGBACOL m_iFadeColor; // 0x2642C0
	long m_iFadeAlpha; // 0x2642C4
	long m_iFadeRate; // 0x2642C8
	long m_FadeExitFunc; // 0x2642CC
	bool m_bFadeEnd; // 0x2642D0
	bool m_bExitFuncWaitFrame; // 0x2642D1
	bool m_bFadeLock; // 0x2642D2
	void resetAchieve();
	enum <unnamed-enum-CHECK_ACHIEVEMENT_SEND>
	{
		CHECK_ACHIEVEMENT_SEND = 0,
		CHECK_ACHIEVEMENT_MYCARD = 1,
	};
	void getAchievementTitle();
	bool checkAchievementPopUp(long);
	bool checkTitlePopUp();
	void updateAchievementPopUp(long);
	void updateTitlePopUp();
	long getNoAchievementPopUp(long, long);
	long m_iRealScreenW; // 0x2642D4
	long m_iRealScreenH; // 0x2642D8
	float m_fRealScaleX; // 0x2642DC
	float m_fRealScaleY; // 0x2642E0
	long iAndroidFlg; // 0x2642E4
	void ResumeWaitDraw();
	void SetResumeWait();
	void ResumeWait();
	void EndResumeWait();
	void beginMultiThread();
	void endMultiThread();
	void setWindowSize(long, long);
	void ResizeDisplay(long, long, AgWindowMode, long);
	extension::GameScript * m_GameScript; // 0x2642E8
	EffectTaskManager * effSystem; // 0x2642F0
	long m_iNeoMode; // 0x2642F8
	bool m_bNotificationRunning; // 0x2642FC
	bool m_bOnlineInitStartFromMenu; // 0x2642FD
	bool m_bNetworkLockMsgFinish; // 0x2642FE
	bool m_bNetworkLockCheckFinish; // 0x2642FF
	bool m_bNetworkLockDlgOpen; // 0x264300
	bool m_bChatLockMsgFinish; // 0x264301
	bool m_bChatLockDlgOpen; // 0x264302
	bool m_bUgcLockMsgFinish; // 0x264303
	bool m_bUgcLockDlgOpen; // 0x264304
	void processCommandLine();
	bool m_noIntro; // 0x264305
	bool GetForceVideoOn();
	void NoticeDiscoonectLevel2();
	void NoticeDiscoonectLevel(bool);
	bool disconnectNotice; // 0x264306
	long windowErrorNo; // 0x264308
	long battleDisconnectMessageState; // 0x26430C
	long invitationState; // 0x264310
	bool m_bInvitePermit; // 0x264314
	bool m_bPlayTogetherNow; // 0x264315
	long m_bPlayTogetherState; // 0x264318
	bool m_bInviteFadeOut; // 0x26431C
	bool m_bInviteInit; // 0x26431D
	bool m_bPlayTogetherInit; // 0x26431E
	void UpdateNetworkError();
	void InvitedTransInit();
	void UpdateInputDevice();
	AgControllerType m_displayedContType; // 0x264320
	AgControllerHardwareType m_displayedContHWType; // 0x264324
	AgControllerUID GetControllerUIDForUser(USER_ID);
	AgControllerUID GetControllerUIDForDeviceID(long);
	bool m_NetDisconnectNextMainMenuFlag; // 0x264328
	long m_FrameCnt4ThreadCheck; // 0x26432C
	bool m_CheatCommand; // 0x264330
};