#pragma once

enum BattleSystem::CONST_VALUE_PLAYER
{
	TEAM_MEMBER_MAX = 3,
	DEFAULT_HANDICAP = 2,
	HANDICAP_MAX = 5,
	EX_POWER_EXTEND_MAX = 2,
};
struct BattleSystem::AKEBONO_TYPE
{
	enum ID
	{
		NONE = 0,
		SUPER = 1,
		CLIMAX = 2,
	};
};
enum BattleSystem::AKEBONO_TYPE::ID
{
	NONE = 0,
	SUPER = 1,
	CLIMAX = 2,
};
enum BattleSystem::BONUS_SCORE_VALUE
{
	SCORE_MAX = 99999999,
	COUNTER_HIT_BONUS = 1000,
	GUARD_CRASH_BONUS = 5000,
	REVERSAL_BONUS = 1000,
	SUPER_CANCEL_BONUS = 2500,
	ADVANCED_CANCEL_BONUS = 5000,
	CLIMAX_CANCEL_BONUS = 10000,
	THROW_ESCAPE_BONUS = 5000,
	GC_EVADE_BONUS = 5000,
	GC_ATTACK_BONUS = 5000,
	JUST_GUARD_BONUS = 1000,
	STUN_BONUS = 1000,
	SUPER_MOVE_FINISH_BONUS = 15000,
	MAX_MOVE_FINISH_BONUS = 30000,
	CLIMAX_MOVE_FINISH_BONUS = 50000,
	COMBO_BONUS_BASE_SCORE = 100,
	TECH_BONUS_BASE_SCORE = 100,
};
struct BattleSystem::BattleScoreInfo
{
	long iLifeBonus; // 0x0
	long iTimeBonus; // 0x4
	long iPerfectBonus; // 0x8
	long iStraightSetBonus; // 0xC
	long iCpuLevelBonus; // 0x10
	long iNoContinueBonus; // 0x14
	long iBattleScore; // 0x18
	BattleScoreInfo();
	void Clear();
	long GetTotalPoint();
};
struct BattleSystem::BattlePlayerRoundEndInfo
{
	Fix32 xVital; // 0x0
	Fix32 xExPower; // 0x4
	Fix32 xClimaxTime; // 0x8
	Fix32 xGuardPower; // 0xC
	Fix32 xStunPower; // 0x10
	Fix32 xRecoveryVital; // 0x14
	bool bTakeOverActor; // 0x18
	void clear();
	BattlePlayerRoundEndInfo();
};
struct BattleSystem::BattlePlayerInfo
{
	CHARACTER_NO charaNo[3]; // 0x0
	long iCharaColor[3]; // 0xC
	long iMemberCount; // 0x18
	long iMemberReferIndex; // 0x1C
	BattleSystem::PLAYER_TYPE playerType; // 0x20
	long iFinishSkill[5]; // 0x24
	long iRoundSetCount; // 0x38
	long iStraightSetCount; // 0x3C
	long iPerfectRoundCount; // 0x40
	long iWinCount; // 0x44
	long iLoseCount; // 0x48
	long iDrawCount; // 0x4C
	long iStraightWin; // 0x50
	long iHandicap; // 0x54
	long iMaxExPowerExtend; // 0x58
	BattleSystem::BattleScoreInfo scoreInfo; // 0x5C
	long iTotalScore; // 0x78
	long iPrevTotalScore; // 0x7C
	BattleSystem::BattlePlayerRoundEndInfo roundEndInfo; // 0x80
	BattlePlayerInfo();
	bool IsEmptyChara();
	bool IsLastMember();
	bool IsAllLoseMember();
	long GetMemberCount();
	CHARACTER_NO GetMemberCharaNo(long);
	CHARACTER_NO GetMemberBaseCharaNo(long);
	long GetMemberCharaColor(long);
	void EntryChara(CHARACTER_NO, long);
	void ReleaseChara(long);
	void SetFinishSkill(long);
	long GetFinishSkill(long);
	BattleSystem::AKEBONO_TYPE::ID GetFinishAkebonoType();
	void SetHandicap(long);
	void SetPrevTotalScore();
	CHARACTER_NO GetBattleCharaNo();
	CHARACTER_NO GetBattleBaseCharaNo();
	long GetBattleCharaColorID();
	CHARACTER_NO GetBattleSupportCharaNo();
	long GetBattleMemberIndex();
	CHARACTER_NO GetLoadCharaNo();
	CHARACTER_NO GetLoadBaseCharaNo();
	long GetLoadCharaColorID();
	CHARACTER_NO GetLoadSupportCharaNo();
	CHARACTER_NO GetLoadSupportBaseCharaNo();
	void BattleResultInit();
	static CHARACTER_NO GetBaseCharaID(CHARACTER_NO);
	static CHARACTER_NO GetSupportCharaID(CHARACTER_NO);
	static CHARACTER_NO GetSupportBaseCharaID(CHARACTER_NO);
	long GetLoseCnt();
	long GetDrawCnt();
private:
	CHARACTER_NO battleCharaNo; // 0x9C
	long iBattleCharaColor; // 0xA0
	long iBattleMemberIndex; // 0xA4
	void Init(bool);
	void BattleInit(BattleSystem::BATTLE_MODE);
	void RoundInit(ActorChara &, bool);
	void ApplyHandicap(ActorChara &, bool);
	void SetLoadComplete();
	void SetRoundWin(bool, ActorChara &);
	void SetPerfectWin(bool, ActorChara &);
	void SetVitalRecovery(unsigned long);
	void SetRoundLose(bool, ActorChara &);
	void SetRoundDraw(bool, ActorChara &);
	void SetBattleWin();
	void SetBattleLose();
	void SetBattleDraw();
	void SetExtraRound(bool);
	void AddTotalScore(long);
	void AddBattleScore(long);
	void AddLifeBonus(long, bool);
	void AddTimeBonus(long, bool);
	void AddPerfectBonus(bool);
	void AddStraightSetBonus();
	void AddNoContinueBonus();
	void AddCpuLevelBonus(AiLevelSpec);
};
CHARACTER_NO BattleSystem::BattlePlayerInfo::GetBattleBaseCharaNo(); // 0x1400BC000