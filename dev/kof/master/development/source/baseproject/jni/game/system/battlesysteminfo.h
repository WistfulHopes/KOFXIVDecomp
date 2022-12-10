#pragma once

enum BattleSystem::BATTLE_MODE
{
	TEAM = 0,
	SINGLE = 1,
	MISSION = 2,
	TRAINING = 3,
	DEVELOP = 4,
	MISSION_DEVELOP = 5,
};
struct BattleSystem::ROUND_TIME_LIMIT
{
	enum ID
	{
		TIME_INFINITY = 0,
		TIME_30 = 1,
		TIME_60 = 2,
		TIME_99 = 3,
		MAX = 4,
	};
};
enum BattleSystem::ROUND_TIME_LIMIT::ID
{
	TIME_INFINITY = 0,
	TIME_30 = 1,
	TIME_60 = 2,
	TIME_99 = 3,
	MAX = 4,
};
struct BattleSystem::WINNER_ID
{
	enum ID
	{
		NONE = 0,
		PLAYER_1 = 1,
		PLAYER_2 = 2,
		DRAW = 3,
	};
};
struct BattleSystem::ROUND_FINISH_TYPE
{
	enum ID
	{
		NONE = 0,
		NORMAL_KO = 1,
		DOUBLE_KO = 2,
		TIME_UP = 3,
		COMPLETE = 4,
	};
};
enum BattleSystem::CONST_VALUE_SYSTEM
{
	ROUND_TIME_FRAME_PER_COUNT = 90,
	TEAM_BATTLE_MAX_ROUND_WIN = 1,
	SINGLE_BATTLE_MAX_ROUND_WIN = 5,
	SINGLE_BATTLE_ROUND_WIN_DEFAULT = 2,
};
struct BattleSystem::BattleLoadedInfo
{
	struct LoadedChara;
	BattleSystem::BattleLoadedInfo::LoadedChara loadedChara[2]; // 0x0
	STAGE_ID loadedStageID; // 0x10
	bool bLoadedCommonData; // 0x14
	bool m_bInitialLoading; // 0x15
	BattleLoadedInfo();
	void Init();
	void InitStage();
	void InitCommonData();
	void InitChara(PLAYER_ID);
	void FinishInitialLoading();
	bool IsInitialLoading();
};
struct BattleSystem::BattleLoadedInfo::LoadedChara
{
	CHARACTER_NO charaNo; // 0x0
	long iCharaColor; // 0x4
};
struct BattleSystem::BattleSystemInfo
{
	BattleSystem::BATTLE_MODE battleMode; // 0x0
	BattleSystem::ROUND_TIME_LIMIT::ID timeLimit; // 0x4
	STAGE_ID battleStageID; // 0x8
	unsigned long uiRoundPassFrame; // 0xC
	long iRoundLimitFrame; // 0x10
	unsigned long uiTotalBattleFrame; // 0x14
	long iMaxRoundWinCount; // 0x18
	long iRoundCount; // 0x1C
	bool bExtraRound; // 0x20
	BattleSystem::WINNER_ID::ID roundWinnerID; // 0x24
	BattleSystem::WINNER_ID::ID battleWinnerID; // 0x28
	BattleSystem::ROUND_FINISH_TYPE::ID roundFinishType; // 0x2C
	bool bReplaySaveTarget; // 0x30
	void SetBattleMode(BattleSystem::BATTLE_MODE, long);
	void SetBattleStageID(STAGE_ID);
	STAGE_ID GetBattleStageID();
	void SetRoundTimeLimit(BattleSystem::ROUND_TIME_LIMIT::ID);
	long GetRoundLimitCount();
	void SetTimeOver();
	void SetRoundLimitCount(long);
	void SetRoundTimeStop(bool);
	bool GetRoundTimeStop();
	bool IsTimeOver();
	long GetRoundLimitFrame();
	unsigned long GetTotalBattleFrame();
	void SetReplaySaveTarget(bool);
	bool GetReplaySaveTarget();
private:
	bool bRoundTimeStop; // 0x31
	void Init();
	void BattleInit();
	void RoundInit();
	void UpdateRoundTime(bool);
};