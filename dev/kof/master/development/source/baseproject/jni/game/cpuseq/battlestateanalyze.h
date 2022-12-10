#pragma once

struct BattleSystem::AttackStartupData
{
	long iStartupFrame; // 0x0
	Collision::HitRect rect; // 0x4
	const CharaAttackData::AttackData * pAtk; // 0x18
};
enum BattleSystem::GUARD_TYPE
{
	NONE = 0,
	UPPER = 1,
	MIDDLE = 2,
	LOWER = 3,
	NO_GUARD = 4,
	THROW = 5,
};