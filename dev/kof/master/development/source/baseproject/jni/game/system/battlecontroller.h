#pragma once

struct BattleSystem::RESULT_CHARA_PART
{
	enum ID
	{
		MAIN = 0,
		SUB_1 = 1,
		SUB_2 = 2,
		MAX = 3,
	};
};
struct BattleSystem::ResultRankInfo
{
	RANKMATCH_RANK rankMatchRank; // 0x0
	CHARACTER_NO rankMatchCharacterNo[3]; // 0x4
	char rankMatchName[130]; // 0x10
	long rankMatchPoint; // 0x94
	long rankMatchBattleWin; // 0x98
	long rankMatchBattleLose; // 0x9C
	long rankMatchBattleDraw; // 0xA0
	long rankMatchBattleWins; // 0xA4
	long rankMatchCount; // 0xA8
	char rankMatchLosePublication; // 0xAC
	char rankMatchDrawPublication; // 0xAD
	char rankMatchRatePublication; // 0xAE
	RANKMATCH_DISCONNECT_MARKER rankMatchDisconnectMarker; // 0xB0
};
struct BattleSystem::ResultFreeInfo
{
	RANKMATCH_RANK rankMatchRank[3]; // 0x0
	CHARACTER_NO rankMatchCharacterNo[3]; // 0xC
	char rankMatchName[130][3]; // 0x18
	long rankMatchBattleWins[3]; // 0x1A0
	RANKMATCH_DISCONNECT_MARKER rankMatchDisconnectMarker[3]; // 0x1AC
};
struct BattleSystem::ResultMemberInfo
{
	BattleSystem::WINNER_ID::ID battleWinnerID; // 0x0
	long iMemberCount; // 0x4
	CHARACTER_NO charaNo[3]; // 0x8
	long iCharaColor[3]; // 0x14
	CHARACTER_NO rivalCharaNo; // 0x20
	ActorChara * pActor[3]; // 0x28
	bool bFinalKO; // 0x40
	bool bTestMode; // 0x41
	bool bSpecialDirection; // 0x42
	long iRandomMessageNo; // 0x44
	long iWinCount[2]; // 0x48
	long iLoseCount[2]; // 0x50
	long iDrawCount[2]; // 0x58
	long iStraightWin[2]; // 0x60
	BattleSystem::BattleScoreInfo scoreInfo; // 0x68
	unsigned long uiTotalBattleFrame; // 0x84
	BattleSystem::ResultRankInfo rankBefore[2]; // 0x88
	BattleSystem::ResultRankInfo rankAfter[2]; // 0x1F0
	BattleSystem::ResultFreeInfo freematch[2]; // 0x358
	long rankMyPlayerNo; // 0x6C8
	BATTLE_RESULT_TYPE onlineResult; // 0x6CC
	bool bReplaySaveTarget; // 0x6D0
	ResultMemberInfo();
	void Clear();
	CHARACTER_NO GetBaseCharaNo(long);
};
void BattleSystem::ResultMemberInfo::Clear(); // 0x1400BC2E0
CHARACTER_NO BattleSystem::ResultMemberInfo::GetBaseCharaNo(long partID); // 0x1401AA460
class BattleSystem::BattleController
{
private:
	static BattleSystem::BattleController * instance; // 0xFFFFFFFFFFFFFFFF
	enum ROUND_PHASE
	{
		INIT = 0,
		END_SETUP = 1,
		RIVAL_DEMO = 2,
		START_DEMO = 3,
		ROUND_CALL = 4,
		ROUND_CALL_WAIT = 5,
		MAIN = 6,
		KO_SLOW = 7,
		KO_WAIT = 8,
		WINNERS_CAMERA = 9,
		ROUND_END_WAIT = 10,
		FINAL_KO = 11,
		NEXT_ROUND = 12,
		COMPLETE_WAIT = 13,
		RESULT_INIT = 14,
		RESULT_DEMO = 15,
		RESULT_DEMO_END = 16,
	};
	enum KEY_RECORD_MODE
	{
		STOP = 0,
		PLAY = 1,
		REPEAT = 2,
		RECORD = 3,
		REVERSAL_PLAY = 4,
		REVERSAL_RECORD = 5,
		REVERSAL_WAIT = 6,
		MISSION_PLAY = 7,
		MISSION_RECORD = 8,
	};
	struct KEY_RECORD_TYPE;
	struct KEY_RECORD_SLOT;
	enum KEY_RECORD_REVERSAL_TYPE
	{
		ALL = 0,
		DOWN = 1,
		DAMAGE = 2,
		GUARD = 3,
	};
public:
	~BattleController();
	static BattleSystem::BattleController & GetInstance();
	static ActionSystem & GetActionSystem();
	BattleSystem::BattleSystemInfo & GetBattleSystemInfo();
	BattleSystem::BattlePlayerInfo & GetBattlePlayerInfo(long);
	void DefaultBattleInit();
	void AllInit(BattleSystem::BATTLE_MODE, long, bool);
	void BattleResultInit();
	void BattleResultInitRankMatch(unsigned long long);
	void BattleResultInitFreeMatch();
	BattleSystem::BattleController::ROUND_PHASE GetRoundPhase();
	void SetRoundPhase(BattleSystem::BattleController::ROUND_PHASE);
	bool IsRoundPhaseInit(BattleSystem::BattleController::ROUND_PHASE);
	void SetBattleLoopSound();
	void SetBattleBGMFadeStop();
	void CheckBattleBGMStart();
	void SetRivalDemoLoopSound();
	bool IsBattleWaiting();
	bool IsValidInputKey();
	bool IsValidCommandCheck();
	bool IsValidDerivedCommandCheck();
	void BattleStart();
	bool IsInitialPhase();
	bool IsEndSetupPhase();
	bool IsExistRivalDemo();
	bool IsRivalDemoPhase();
	void SetRivalDemoActionPhase();
	bool IsRivalDemoActionEnd();
	void SetRoundCallPhaseFromRivalDemo();
	bool IsRoundStartActionPhase();
	void SetRoundStartActionPhase();
	bool IsRoundCallStart();
	void SetRoundCallWaitPhase();
	void SetRoundEndPausePhase();
	void SetNextRoundPhase();
	bool IsEnableKODraw();
	bool IsGotoRoundEndPausePhase();
	bool IsGotoNextRound();
	bool IsFinalKO();
	bool IsAkebonoEffectDraw();
	void BattleInit(bool);
	void RoundInit(GAME_MODE, unsigned long);
	void RestartBattle(bool);
	bool IsWinnersCameraPhase();
	void SkipRoundEndAction();
	void Update();
	unsigned long GetSystemCount();
	bool IsRoundNotStart();
	bool IsRoundEnd();
	bool IsRoundWinnerPlayer(long);
	bool IsRoundDraw();
	BattleSystem::ROUND_FINISH_TYPE::ID GetRoundFinishType();
	bool IsPerfectWin();
	long GetNowRoundCount();
	unsigned long GetTotalBattleFrame();
	bool IsNeedBattleInit();
	bool IsMatchPoint(long);
	bool IsFinalRound();
	bool IsExtraRound();
	bool IsSuccessiveBattle();
	bool IsSurvivalMode();
	bool IsTimeAttackMode();
	bool IsSuccessiveBattleEnd();
	bool IsMissionMode();
	bool IsTutorialMode();
	bool IsComboMissionMode();
	bool IsBattleEnd();
	bool IsTrainingMode();
	bool IsDevelopMode();
	bool IsBattleWinnerPlayer(long);
	bool IsBattleDraw();
	unsigned long GetRandomSeed();
	unsigned long getRand32();
	static unsigned long GetRand32();
	long getRand31();
	static long GetRand31();
	float getRandFloat();
	static float GetRandFloat();
	long GetFinalKOFadeCount();
	CharaBone * GetMainCharaBone(long);
	CharaBone * GetOptionCharaBone(long);
	CharaBone * GetExtendCharaBone(long);
	BattleSystem::PLAYER_TYPE GetPlayerType(long);
	bool IsCpuPlayer(long);
	void SetPlayerType(long, BattleSystem::PLAYER_TYPE);
	BattleSystem::CpuSequence & GetCpuSequence(long);
	void AddBattleScore(long, long);
	long GetTotalScore(long);
	long GetPrevTotalScore(long);
	void SetPrevTotalScore(long);
	long GetSystemKOVoiceID(bool);
	bool IsDisableHitSound();
	SoundId GetBattleBGMID();
	SoundId GetRivalDemoBGMSoundID();
	SoundId GetRivalBattleBGMSoundID();
	SoundId GetStageBGMSoundID();
	void SetTrainingSetting(const TrainingSetting &);
	void CommitTrainingSettingPlaySlot(TrainingSetting &);
	enum RESTART_POSITION
	{
		NONE = 0,
		LEFT = 1,
		CENTER = 2,
		RIGHT = 3,
	};
	void RequestBattleRestart(BattleSystem::BattleController::RESTART_POSITION);
	bool IsRequestBattleRestart();
	void SetBattleDirectStart(bool);
	bool GetHudVisible();
	void SetHudVisible(bool);
	bool IsShowAttackData();
	void SetShowAttackData(bool);
	bool IsShowKeyData();
	void SetShowKeyData(bool);
	bool IsEnableKeyRecord();
	void CheckKeyRecordButton(bool);
	void SetKeyRecordMode(BattleSystem::BattleController::KEY_RECORD_MODE);
	BattleSystem::BattleController::KEY_RECORD_MODE GetKeyRecordMode();
	void SetKeyRecordType(BattleSystem::BattleController::KEY_RECORD_TYPE::ID);
	long GetKeyRecordType();
	void SetKeyRecordSlot(long);
	long GetKeyRecordSlot();
	void SetKeyPlaySlot(long, bool, long);
	bool IsEnableKeyPlaySlot(long, long);
	bool IsValidKeyRecordData(long, long);
	long GetKeyPlaySlot();
	bool IsRandomKeyPlay();
	bool IsKeyRecordNormalPlay();
	bool IsKeyRecordNormalRec();
	bool IsKeyRecordReversalWait();
	bool IsKeyRecordReversalPlay();
	bool IsKeyRecordReversalRec();
	bool IsMissionKeyPlay();
	bool IsMissionKeyRecord();
	bool IsKeyRecordPlay();
	bool IsKeyRecordRec();
	bool IsInvalidKeyRecordInput();
	bool IsKeyRecordReversalTiming();
	void SetKeyRecordReversalType(BattleSystem::BattleController::KEY_RECORD_REVERSAL_TYPE);
	BattleSystem::BattleController::KEY_RECORD_REVERSAL_TYPE GetKeyRecordReversalType();
	void ResetKeyRecord(long);
	void ResetKeyRecordAll();
	void ResetKeyPlayCountAll();
	InputKeyRecord & GetKeyRecord(long, long);
	InputKeyRecord & GetRecKeyRecord();
	InputKeyRecord & GetPlayKeyRecord();
	void SetKeyPlaySlotsOnRecStart();
	void ResultInit();
	void SetResultActionPhase();
	const BattleSystem::ResultMemberInfo & GetResultMemberInfo();
	bool IsDrawResult();
	ActorChara * GetResultActor(BattleSystem::RESULT_CHARA_PART::ID);
	bool IsResultActionEnd();
	bool IsResultMainMoveEnd();
	bool IsResultDemoEnd();
	void SetResultTestParam(const BattleSystem::ResultMemberInfo &);
	void SetRoundInfo(const BattleSystem::BattleRoundInfo &);
	const BattleSystem::BattleRoundInfo & GetRoundInfo(long);
	const BattleSystem::BattleRoundInfo & GetNowRoundInfo();
	void InitSuccessiveBattleTakeOver();
	bool IsNeedLoadStage();
	bool IsNeedLoadCommonData();
	bool IsNeedLoadChara(PLAYER_ID);
	void SetLoadComplete();
	void InitLoadedInfo();
	void FinishInitialBattleLoading();
	bool IsInitialBattleLoading();
	enum MISSION_SAMPLE_MODE
	{
		NONE = 0,
		PLAY = 1,
		RECORD = 2,
		REQUEST_PLAY = 3,
		REQUEST_RECORD = 4,
	};
	BattleSystem::ComboMissionJudge & GetComboMissionJudge();
	long GetPlayingMissionID();
	void SetComboMissionStartPosition();
	void SetNextMissionRequest(long);
	bool IsNextMissionRequest();
	void SetupNextMissionData(const ComboMissionData *);
	void RequestMissionSamplePlay();
	void RequestMissionSampleRecord();
	bool IsRequestMissionSamplePlay();
	bool IsRequestMissionSampleRecord();
	bool IsMissionSamplePlay();
	bool IsMissionSampleRecord();
	bool IsPartyBattle();
private:
	BattleController(const BattleSystem::BattleController &);
	BattleController();
	BattleSystem::BattleController & operator=(const BattleSystem::BattleController &);
	void InitRandom(unsigned long);
	bool IsMaxSetCount(long);
	void CheckDemoAction(GAME_MODE, ActorChara *, ActorChara *, bool);
	bool CheckFinalKO(BattleSystem::WINNER_ID::ID);
	void PlayerActorSetting(ActorChara *, long, ActorChara *);
	void SetSuccessiveBattleTakeOver();
	void SetResultData(bool);
	void ResultPlayerActorSetting(ActorChara *, long, BattleSystem::RESULT_CHARA_PART::ID);
	void SetInitialStartAction();
	void SetComboMissionSetting();
	void SetRealTimeMultiPlayFlag();
	bool IsMainBGMPlayer2();
	enum <unnamed-enum-WINNERS_CAMERA_FRAME>
	{
		WINNERS_CAMERA_FRAME = 30,
		KO_SLOW_COUNT = 180,
		KO_DRAW_START = 1800,
		KO_GOTO_NEXT_ROUND = 900,
		FINAL_KO_FADE_COUNT = 180,
		KO_STOP_COUNT = 60,
		KO_STOP_DELAY = 4,
	};
	enum START_ACTION
	{
		READY = 0,
		WAIT = 1,
	};
	ActionSystem actSystem; // 0x0
	BattleSystem::BattleSystemInfo battleInfo; // 0x3C138
	BattleSystem::BattlePlayerInfo playerInfo[2]; // 0x3C16C
	BattleSystem::BattleLoadedInfo loadedInfo; // 0x3C2BC
	BattleSystem::CpuSequence cpuPlayer[2]; // 0x3C2D8
	BattleSystem::ComboMissionJudge comboMission; // 0x3C6B8
	BattleSystem::BattleController::ROUND_PHASE roundPhase; // 0x3C6F0
	unsigned long uiRoundPhaseFrame; // 0x3C6F4
	unsigned long uiSystemCount; // 0x3C6F8
	bool bBattleEnd; // 0x3C6FC
	bool bNeedBattleInit; // 0x3C6FD
	bool bRivalDemo; // 0x3C6FE
	bool bDirectStart; // 0x3C6FF
	bool bAkebonoKO; // 0x3C700
	SoundId playBGMID; // 0x3C704
	long iRivalBGMTableID; // 0x3C708
	float fNormalStageBGMPos; // 0x3C70C
	BattleSystem::BattleController::RESTART_POSITION restartPosition; // 0x3C710
	long iNextMissionID; // 0x3C714
	BattleSystem::BattleController::START_ACTION initialStartAction[2]; // 0x3C718
	BattleSystem::ResultMemberInfo resultMember; // 0x3C720
	BattleSystem::BattleRoundInfo roundInfo[10]; // 0x3CDF8
	struct CharaBoneData;
	BattleSystem::BattleController::CharaBoneData charaBoneData[2]; // 0x3D0F0
	struct SuccessiveBattleTakeOverInfo;
	BattleSystem::BattleController::SuccessiveBattleTakeOverInfo successiveBattleTakeOverInfo; // 0x3DA80
	struct KOTimeStopInfo;
	BattleSystem::BattleController::KOTimeStopInfo koTimeStopInfo; // 0x3DAA4
	RandomMT randMT; // 0x3DAB4
	unsigned long uiSeedValue; // 0x3E478
	std::bitset<61> matchedDemoChara; // 0x3E480
	bool bHudVisible; // 0x3E488
	bool bAttackData; // 0x3E489
	bool bKeyData; // 0x3E48A
	bool bEnableKeyRecord; // 0x3E48B
	BattleSystem::BattleController::KEY_RECORD_MODE keyRecordMode; // 0x3E48C
	struct KeyRecordInfo;
	BattleSystem::BattleController::KeyRecordInfo keyRecordInfo; // 0x3E490
	InputKeyRecord m_KeyRecord[6][2]; // 0x3E4A8
	BattleSystem::BattleController::MISSION_SAMPLE_MODE missionSampleMode; // 0x3E568
	bool bPartyBattle; // 0x3E56C
	long rank_win_cnt; // 0x3E570
	long rank_continuous_win_cnt; // 0x3E574
public:
	long GetRankWinCnt();
	long GetRankContinuousWinCnt();
};
enum BattleSystem::BattleController::KEY_RECORD_MODE
{
	STOP = 0,
	PLAY = 1,
	REPEAT = 2,
	RECORD = 3,
	REVERSAL_PLAY = 4,
	REVERSAL_RECORD = 5,
	REVERSAL_WAIT = 6,
	MISSION_PLAY = 7,
	MISSION_RECORD = 8,
};
struct BattleSystem::BattleController::KEY_RECORD_TYPE
{
	enum ID
	{
		NORMAL = 0,
		REVERSAL = 1,
		TYPE_MAX = 2,
	};
	enum VALUE
	{
		REVERSAL_COUNT = 180,
	};
};
struct BattleSystem::BattleController::KEY_RECORD_SLOT
{
	enum ID
	{
		SLOT_NONE = 0,
		SLOT_1 = 1,
		SLOT_2 = 2,
		SLOT_3 = 3,
		SLOT_4 = 4,
		SLOT_5 = 5,
		SLOT_MAX = 6,
	};
};
enum BattleSystem::BattleController::KEY_RECORD_REVERSAL_TYPE
{
	ALL = 0,
	DOWN = 1,
	DAMAGE = 2,
	GUARD = 3,
};
BattleSystem::BattleController & BattleSystem::BattleController::GetInstance(); // 0x1400BC380
ActionSystem & BattleSystem::BattleController::GetActionSystem(); // 0x1400BC380
bool BattleSystem::BattleController::IsMissionMode(); // 0x1400BC3C0
unsigned long BattleSystem::BattleController::GetRand32(); // 0x1400EA760
long BattleSystem::BattleController::GetRand31(); // 0x1400EA7B0
void BattleSystem::BattleController::AddBattleScore(long playerID, long score); // 0x1400E1A80
bool BattleSystem::BattleController::IsKeyRecordPlay(); // 0x1401A8F50
void BattleSystem::BattleController::InitLoadedInfo(); // 0x1401AA4C0
BattleSystem::BattleController::BattleController(); // 0x1400BC3E0
struct BattleSystem::BattleController::CharaBoneData
{
	CharaBone mainChara; // 0x0
	CharaBone optionChara; // 0x198
	CharaBone extendChara; // 0x330
	CharaBoneData();
	void Clear();
};
BattleSystem::BattleController::CharaBoneData::CharaBoneData(); // 0x1400BC6B0
void BattleSystem::BattleController::CharaBoneData::Clear(); // 0x14022E2D0
struct BattleSystem::BattleController::SuccessiveBattleTakeOverInfo
{
	bool bTakeOver; // 0x0
	BattleSystem::BattlePlayerRoundEndInfo roundEndInfo; // 0x4
	SoundId playBGMID; // 0x20
	SuccessiveBattleTakeOverInfo();
	void Clear();
};
struct BattleSystem::BattleController::KOTimeStopInfo
{
	BattleSystem::WINNER_ID::ID winnerID; // 0x0
	unsigned long uiCount; // 0x4
	unsigned long uiStartDelay; // 0x8
	unsigned long uiStopFrame; // 0xC
	KOTimeStopInfo();
	void Clear();
	void SetKOStop(unsigned long, unsigned long, BattleSystem::WINNER_ID::ID);
	void Update();
};
class std::bitset<61>
{
	typedef unsigned long long _Ty;
	class reference;
public:
	static void _Validate(unsigned long long);
	bool _Subscript(unsigned long long);
	std::bitset<61>::reference operator[](unsigned long long);
	bool operator[](unsigned long long);
	bitset<61>(unsigned long long);
	bitset<61>();
	static const bool _Need_mask; // 0xFFFFFFFFFFFFFFFF
	static const unsigned long long _Mask; // 0xFFFFFFFFFFFFFFFF
	std::bitset<61> & operator&=(const std::bitset<61> &);
	std::bitset<61> & operator|=(const std::bitset<61> &);
	std::bitset<61> & operator^=(const std::bitset<61> &);
	std::bitset<61> & operator<<=(unsigned long long);
	std::bitset<61> & operator>>=(unsigned long long);
	std::bitset<61> & set(unsigned long long, bool);
	std::bitset<61> & set();
	std::bitset<61> & reset(unsigned long long);
	std::bitset<61> & reset();
	operator~();
	std::bitset<61> & flip(unsigned long long);
	std::bitset<61> & flip();
	unsigned long to_ulong();
	unsigned long long to_ullong();
	unsigned long long count();
	unsigned long long size();
	unsigned long long hash();
	bool operator==(const std::bitset<61> &);
	bool operator!=(const std::bitset<61> &);
	bool test(unsigned long long);
	bool any();
	bool none();
	bool all();
	std::bitset<61> operator<<(unsigned long long);
	std::bitset<61> operator>>(unsigned long long);
	unsigned long long _Getword(unsigned long long);
	enum <unnamed-enum-_Bitsperword> : long long
	{
		_Bitsperword = 64,
		_Words = 0,
	};
private:
	void _Tidy(unsigned long long);
	void _Trim();
	void _Trim_if(std::integral_constant<bool,0>);
	void _Trim_if(std::integral_constant<bool,1>);
	void _Xinv();
	void _Xoflo();
	void _Xran();
	unsigned long long _Array[1]; // 0x0
};
struct BattleSystem::BattleController::KeyRecordInfo
{
	long iKeyRecordType; // 0x0
	long iKeyRecordSlot; // 0x4
	long iKeyPlaySlot; // 0x8
	BattleSystem::BattleController::KEY_RECORD_REVERSAL_TYPE reversalType; // 0xC
	std::bitset<6> enableKeyPlaySlot[2]; // 0x10
	void Reset();
	KeyRecordInfo();
};
void BattleSystem::BattleController::KeyRecordInfo::Reset(); // 0x14022E390
class BattleSystem::PauseController
{
private:
	static BattleSystem::PauseController * instance; // 0xFFFFFFFFFFFFFFFF
	PauseController();
	~PauseController();
	struct KeyWatch;
public:
	static BattleSystem::PauseController & GetInstance();
	void Init();
	bool IsPause();
	void SetPause(bool, CONTROLLER_ID);
	bool IsPauseInputEnable();
	CONTROLLER_ID GetInputControllerID();
	long CheckInputKey(CONTROLLER_ID, long);
private:
	bool m_Pause; // 0x0
	CONTROLLER_ID m_InputContorollerID; // 0x4
	BattleSystem::PauseController::KeyWatch keyWatch[3]; // 0x8
};
struct BattleSystem::PauseController::KeyWatch
{
	long iBattleInputKey; // 0x0
	long iPauseInputKey; // 0x4
	KeyWatch();
	void Init();
};
BattleSystem::PauseController & BattleSystem::PauseController::GetInstance(); // 0x1400D9640