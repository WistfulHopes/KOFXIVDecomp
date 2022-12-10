#pragma once

class GameDataInfo
{
private:
	RandomMT randMT; // 0x0
	STAGE_ID m_StageID; // 0x9C4
	bool m_StageRandom; // 0x9C8
	GAME_MODE m_GameMode[10]; // 0x9CC
	long m_GameModeIndex; // 0x9F4
	GAME_RULE m_GameRule[10]; // 0x9F8
	long m_GameRuleIndex; // 0xA20
	USER_ID m_ControllerSetting[2]; // 0xA24
	CHARACTER_NO m_CharacterNo[3][2]; // 0xA2C
	bool m_EditRandom[3][2]; // 0xA44
	bool m_TeamRandom[2]; // 0xA4A
	CHARACTER_COLOR m_CharacterColor[3][2]; // 0xA4C
	long long m_ColorSelectedTime[3][2]; // 0xA68
	CHARACTER_COLOR m_CharacterColorRand[3][2]; // 0xA98
	long m_Order[3][2]; // 0xAB0
	long m_CharacterCostume[3][2]; // 0xAC8
	NETWORK_TITLE m_NetworkTile[3][2]; // 0xAE0
	CHARACTER_NO m_MyBustupCharacterNo; // 0xAF8
	HANDICAP_TYPE m_HandicapSetting[2]; // 0xAFC
	BATTLE_ROUND_TIMER_TYPE m_TimeSetting; // 0xB04
	WIN_ROUND_COUNT m_WinRoundCount; // 0xB08
	AiLevelSpec m_AiLevel; // 0xB0C
	MENU_ID m_MenuID; // 0xB10
	long m_StoryWinCount; // 0xB14
	TEAM_ID m_StoryEnemyTable[18]; // 0xB18
	CHARACTER_NO m_StoryEnemyTableSP[3][18]; // 0xB60
	long m_SurvivalWinCount; // 0xC38
	CHARACTER_NO m_SurvivalEnemyTable[62]; // 0xC3C
	long m_SurvivalEnemyTablePos; // 0xD34
	char m_WinMesKey[256]; // 0xD38
	char m_WinVoiceName[256]; // 0xE38
	bool m_ControllerSelect; // 0xF38
	char m_StageTelop[61]; // 0xF39
	TrainingSetting m_TrainingSetting; // 0xF78
	bool m_TrainingSettingUpdate; // 0xFF8
	bool m_TrainingEntry; // 0xFF9
	long m_MissionTrialNo; // 0xFFC
	long m_TutorialNo; // 0x1000
	CONTINUE_BONUS m_ContinueBous; // 0x1004
	unsigned long m_RandSeed[6]; // 0x1008
	bool m_ReplayFlag; // 0x1020
	unsigned long m_ReplayNo; // 0x1024
	bool m_ReplaySaveFlag; // 0x1028
	PLAYER_ID m_MyPlayerID; // 0x102C
	STAGE_ID m_StageIDSpecial_03; // 0x1030
	STAGE_ID m_StageIDSpecial_07; // 0x1034
public:
	GameDataInfo();
	static GameDataInfo & getInstance();
	static PLAYER_ID rival(PLAYER_ID);
	STAGE_ID GetStageID();
	void SetStageID(STAGE_ID, bool);
	void SetStageIDNew();
	void CommitStageIDRand();
	GAME_MODE GetGameMode();
	GAME_MODE PopGameMode();
	void SetGameMode(GAME_MODE);
	void PushGameMode(GAME_MODE);
	GAME_RULE GetGameRule();
	GAME_RULE PopGameRule();
	void SetGameRule(GAME_RULE);
	void PushGameRule(GAME_RULE);
	void ResetGameRule();
	long GetMemberMax();
	long GetMemberMax(PLAYER_ID);
	bool IsUseControllerSelect();
	void SetUseControllerSelect(bool);
	USER_ID GetControllerSetting(PLAYER_ID);
	void SetControllerSetting(PLAYER_ID, USER_ID);
	bool IsCPUSetting();
	CHARACTER_NO GetCharacterNo(PLAYER_ID, long, bool);
	void SetCharacterNo(PLAYER_ID, long, CHARACTER_NO, bool, bool);
	CHARACTER_NO GetCharacterNoSingle(PLAYER_ID, bool);
	void SetCharacterNoSingle(PLAYER_ID, CHARACTER_NO, bool);
	bool IsEditRandom(PLAYER_ID, long);
	bool IsTeamRandom(PLAYER_ID);
	void CommitCharacterNoRand(PLAYER_ID, long);
	void CommitCharacterNoRand();
	CHARACTER_COLOR GetCharacterColor(PLAYER_ID, long, bool);
	void SetCharacterColor(PLAYER_ID, long, CHARACTER_COLOR, bool);
	CHARACTER_COLOR GetCharacterColorSingle(PLAYER_ID, bool);
	void SetCharacterColorSingle(PLAYER_ID, CHARACTER_COLOR, bool);
	void InitCharacterColorRand();
	void UpdateCharacterColorRand(PLAYER_ID, long);
	void UpdateCharacterColorRand();
	bool IsSameColorSelected(CHARACTER_NO, CHARACTER_COLOR, long);
	bool IsSameColorRand(CHARACTER_NO, CHARACTER_COLOR, long);
	bool IsNegativeColor(PLAYER_ID, long, PLAYER_ID, long);
	CHARACTER_COLOR GetNegativeColor(CHARACTER_NO, CHARACTER_COLOR, long);
	long GetCharacterCostume(PLAYER_ID, long);
	void SetCharacterCostume(PLAYER_ID, long, long);
	long GetCharacterCostumeSingle(PLAYER_ID);
	void SetCharacterCostumeSingle(PLAYER_ID, long);
	long GetOrder(PLAYER_ID, long);
	void SetOrder(PLAYER_ID, long, long);
	long GetOrderSingle(PLAYER_ID);
	void SetOrderSingle(PLAYER_ID, long);
	NETWORK_TITLE GetNetworkTitle(PLAYER_ID, long);
	void SetNetworkTitle(PLAYER_ID, long, NETWORK_TITLE);
	void SetMyBustupCharacterNo(CHARACTER_NO);
	CHARACTER_NO GetMyBustupCharacterNo();
	HANDICAP_TYPE GetHandicap(PLAYER_ID);
	void SetHandicap(PLAYER_ID, HANDICAP_TYPE);
	BATTLE_ROUND_TIMER_TYPE GetBattleRoundTimeSetting();
	void SetBattleRoundTimeSetting(BATTLE_ROUND_TIMER_TYPE);
	WIN_ROUND_COUNT GetWinRoundCount();
	void SetWinRoundCount(WIN_ROUND_COUNT);
	AiLevelSpec GetAiLevel();
	void SetAiLevel(AiLevelSpec);
	long GetBattleRoundTime();
	void SetMenuID(MENU_ID);
	MENU_ID GetMenuID();
	void GetStageTelop(char *, long);
	void SetStageTelop(const char *);
	void Init();
	void InitCharacter(PLAYER_ID);
	void SetDefaultSettingSaveData();
	void SetTeamMember(PLAYER_ID, CHARACTER_NO, CHARACTER_COLOR, long, CHARACTER_NO, CHARACTER_COLOR, long, CHARACTER_NO, CHARACTER_COLOR, long, bool);
	void SetSingleMember(PLAYER_ID, CHARACTER_NO, CHARACTER_COLOR, long, bool);
	void SetTeamOrder(PLAYER_ID, long, long, long);
	bool InsertCharacter(PLAYER_ID, CHARACTER_NO, CHARACTER_COLOR, long);
	bool DeleteCharacter(PLAYER_ID);
	bool IsCompleteCharacter(PLAYER_ID);
	bool IsEmptyCharacter(PLAYER_ID);
	bool IsSelectedCharacter(PLAYER_ID, CHARACTER_NO);
	CHARACTER_NO GetOrderCharacterNo(PLAYER_ID, long);
	CHARACTER_COLOR GetOrderCharacterColor(PLAYER_ID, long);
	long GetOrderCharacterCostume(PLAYER_ID, long);
	long GetStoryWinCount();
	void SetStoryWinCount(long);
	bool IsBossTeam(PLAYER_ID);
	bool IsBossTeam();
	void MakeStoryEnemyTable(PLAYER_ID);
	TEAM_ID GetStoryEnemyRandom(TEAM_ID, TEAM_ID, TEAM_ID *, long);
	CHARACTER_NO GetStoryEnemyRandomSP(CHARACTER_NO[3] *, long, long);
	TEAM_ID GetStoryEnemyFaceOff(TEAM_ID, TEAM_ID, TEAM_ID *, long, CHARACTER_NO, CHARACTER_NO, CHARACTER_NO);
	void GetStoryEnemyFaceOff_Sub(CHARACTER_NO, TEAM_ID, TEAM_ID, TEAM_ID *, long, TEAM_ID *, long &);
	bool IsCollectTeam(TEAM_ID, TEAM_ID, TEAM_ID, TEAM_ID *, long);
	bool IsEntredTeam(TEAM_ID, TEAM_ID *, long);
	bool IsEntredCharacter(CHARACTER_NO, CHARACTER_NO[3] *, long);
	void Shuffle(long *, long);
	TEAM_ID GetStoryEnemyTeamID();
	TEAM_ID GetStoryEnemyTeamID(long);
	CHARACTER_NO GetStoryEnemyCharacterNo(long);
	CHARACTER_NO GetStoryEnemyCharacterNo(long, long);
	long IndexOfStoryEnemy(CHARACTER_NO);
	bool NextStoryEnemy();
	void CommitStoryEnemy();
	MOVIE_ID GetStoryDemoMovieID();
	MOVIE_ID GetEndDemoMovieID(TEAM_ID);
	void SetContinuBonus(CONTINUE_BONUS);
	CONTINUE_BONUS GetContinuBonus();
	bool IsStoryLastBoss();
	long GetSurvivalWinCount();
	void SetSurvivalWinCount(long);
	long GetObfuscatedSurvivalWinCount();
	static long GetTimeAttackMaxStage();
	void MakeSurvivalEnemyTable();
	bool NextSurvivalEnemy(bool);
	void CommitSurvivalEnemy();
	CHARACTER_NO GetSurvivalEnemy(long);
	CHARACTER_NO GetSurvivalEnemy();
	CHARACTER_NO GetCharacterNo_Combination(TEAM_ID, long);
	TEAM_ID GetTeamID_Combination(CHARACTER_NO, CHARACTER_NO, CHARACTER_NO);
	TEAM_ID GetTeamID_Combination(PLAYER_ID);
	TEAM_ID GetTeamID_Combination(CHARACTER_NO);
	long GetSpecial_Combination(CHARACTER_NO, CHARACTER_NO, CHARACTER_NO);
	long GetSpecial_Combination(PLAYER_ID);
	STAGE_ID GetStageID_Combination(PLAYER_ID, bool);
	STAGE_ID GetStageID_Combination(CHARACTER_NO, CHARACTER_NO, CHARACTER_NO, bool);
	STAGE_ID GetStageID_Combination(CHARACTER_NO, bool);
	STAGE_ID GetStageID_Combination(TEAM_ID, bool);
	void CreateStageID_Special();
	STAGE_ID GetStageID_Special();
	STAGE_ID GetRandomStageID();
	const char * GetWinMesKey();
	bool GetWinMesKey(CHARACTER_NO, CHARACTER_NO, char *, long);
	const char * GetWinVoiceName();
	bool GetWinVoiceName(CHARACTER_NO, CHARACTER_NO, char *, long);
	long GetWinMesMax(CHARACTER_NO);
	long GetWinMesRandomNo(CHARACTER_NO);
	long GetRsultRate(PLAYER_ID);
	TrainingSetting & GetTrainingSetting();
	void SetTrainingSetting(TrainingSetting &);
	void SetTrainingSettingDefault(TrainingSetting::PAGE, long, bool);
	bool GetTrainingSettingUpdate();
	void SetTrainingSettingUpdate(bool);
	bool GetTrainingEntry();
	void SetTrainingEntry(bool);
	long GetMissionTrial();
	void SetMissionTrial(long);
	void ClearMissionTrial(CHARACTER_NO, long);
	long GetTutorialNo();
	void SetTutorialNo(long);
	void NextTutorial();
	void PrevTutorial();
	void ClearTutorial(long);
	bool IsOnlineMode();
	void SetMyPlayerID(PLAYER_ID);
	PLAYER_ID GetMyPlayerID();
	unsigned long GetRandSeed(long);
	void SetRandSeed(unsigned long, long);
	void AutoSetRandSeed();
	void SetReplayBattle(bool);
	bool GetReplayBattle();
	void SetReplayNo(unsigned long);
	unsigned long GetReplayNo();
	void SetReplaySaveFlag(bool);
	bool GetReplaySaveFlag();
	long GetRand();
};
GameDataInfo & GameDataInfo::getInstance(); // 0x14009C540
bool GameDataInfo::IsOnlineMode(); // 0x14009C5A0