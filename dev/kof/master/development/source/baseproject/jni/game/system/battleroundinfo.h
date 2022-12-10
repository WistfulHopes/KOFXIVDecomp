#pragma once

struct BattleSystem::BattleRoundInfo
{
	struct PlayerData;
	BattleSystem::BattleRoundInfo::PlayerData playerData[2]; // 0x0
	char iRoundCount; // 0x48
	unsigned char bExtraRound; // 0x49
	unsigned char padding[2]; // 0x4A
	void SetRoundInfo(const BattleSystem::BattleSystemInfo &, const BattleSystem::BattlePlayerInfo &, const BattleSystem::BattlePlayerInfo &);
	void RestorRoundInfo(BattleSystem::BattleSystemInfo &, BattleSystem::BattlePlayerInfo &, BattleSystem::BattlePlayerInfo &);
	BattleRoundInfo();
};
struct BattleSystem::BattleRoundInfo::PlayerData
{
	char iMemberReferIndex; // 0x0
	char iRoundSetCount; // 0x1
	char iStraightSetCount; // 0x2
	char iPerfectRoundCount; // 0x3
	char iMaxExPowerExtend; // 0x4
	char iFinishSkill[5]; // 0x5
	unsigned char bTakeOverActor; // 0xA
	unsigned char padding; // 0xB
	Fix32 xVital; // 0xC
	Fix32 xExPower; // 0x10
	Fix32 xClimaxTime; // 0x14
	Fix32 xGuardPower; // 0x18
	Fix32 xStunPower; // 0x1C
	Fix32 xRecoveryVital; // 0x20
	PlayerData();
};