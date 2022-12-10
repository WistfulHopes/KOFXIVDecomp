#pragma once

enum DAMAGE_SET_TYPE
{
	NORMAL = 0,
	STAND_GUARD = 1,
	CROUCH_GUARD = 2,
	RESERVE_DAMAGE = 3,
	GUARD_POINT = 4,
	CATCH_DAMAGE = 5,
};
class DamageSetting
{
public:
	DamageSetting();
	void Clear();
	bool EntryDamageSet(const Collision::HitRectWork &, const Collision::HitRectWork &, const CharaDamageSetting::Setting *, DAMAGE_SET_TYPE, bool);
	void DamageSet();
private:
	Collision::HitRectWork atk; // 0x0
	Collision::HitRectWork psv; // 0x1F8
	const CharaDamageSetting::Setting * pDmgSet; // 0x3F0
	DAMAGE_SET_TYPE damageType; // 0x3F8
	bool bCounterDamage; // 0x3FC
	void PlayerDamageSetting();
	void PlayerCatchSetting();
};
class DamageSetControl
{
private:
	static DamageSetControl * instance; // 0xFFFFFFFFFFFFFFFF
	DamageSetting dmgSet[2]; // 0x0
public:
	~DamageSetControl();
	static DamageSetControl & GetInstance();
	void Clear();
	void EntryDamage(const Collision::HitRectWork &, const Collision::HitRectWork &, const Collision::HitRect &, DAMAGE_SET_TYPE);
	void SetThrowDamage(const Collision::HitRectWork &);
	void DamageSet();
	static void SetNextDamageAction(ActorChara &);
	static void PlayerStatusCheck(ActionSystem &);
private:
	void PlayerAttackDamage(const Collision::HitRectWork &, const Collision::HitRectWork &, const Collision::HitRect &, DAMAGE_SET_TYPE);
	void PlayerCatchDamage(const Collision::HitRectWork &, const Collision::HitRectWork &, const Collision::HitRect &);
	void PlayerGuardPointSetting(const Collision::HitRectWork &, const Collision::HitRectWork &, const Collision::HitRect &);
	static bool CheckNextDamageSetting(ActorChara &);
	static long GetComboAdjustRate(long, CharaAttackData::SKILL_TYPE::ID);
	static void PowerGaugeCalc(ActorChara &, const Collision::HitRectWork &, bool, bool, bool);
	static void DamageCalc(ActorChara &, const Collision::HitRectWork &, bool, DAMAGE_SET_TYPE);
	DamageSetControl(const DamageSetControl &);
	DamageSetControl();
	DamageSetControl & operator=(const DamageSetControl &);
};
DamageSetControl & DamageSetControl::GetInstance(); // 0x1400DDEB0
void DamageSetControl::DamageSet(); // 0x1400DDEF0
DamageSetControl::DamageSetControl(); // 0x1400DDF70