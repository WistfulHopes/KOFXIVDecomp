#pragma once

class ActorObject :
	Actor
{
protected:
	virtual bool _branchIsAttackHitOrGuard(float);
	virtual bool _branchIsAttackHit(float);
	virtual bool _branchIsAttackGuard(float);
	virtual bool _branchIsAttackNoHit(float);
	virtual bool _branchIsAttackCounter(float);
	virtual bool _checkEffectSetTerm(const CharaActionData::Effect::Type::Set &);
	struct ATTACK_FLAG;
public:
	std::bitset<6> bsAttackFlag; // 0x328
	struct COLLISION_FLAG;
	std::bitset<15> bsCollisionFlag; // 0x32C
	ActorObject(const ActorObject &);
	ActorObject();
	virtual ~ActorObject();
	virtual void CreateInit();
	virtual void Dispose();
	virtual void ActionParamInit();
	virtual void PrevDataSet();
	virtual void ActionFlagCheck();
	virtual void ActionChanged();
	virtual void CheckShotLine();
	void SetShotFireData(const CharaActionData::Shot::Type::Fire &);
	void SetShotControlData(const CharaActionData::Shot::Type::Control &);
	void SetShotEventData(const CharaActionData::Shot::Type::Event &);
	bool IsAttackGuard();
	bool IsAttackHit();
	bool IsAttackSwing();
	bool IsAttackCatched();
	bool IsAttackKO();
	bool IsAttackCounter();
	void SetAttackAppear(bool);
	void SetAttackGuard(bool);
	void SetAttackHit(bool);
	void SetAttackCatch(bool);
	void SetAttackKO(bool);
	void SetAttackCounter(bool);
	bool IsCollisionHit();
	bool IsCollisionCatch();
	bool IsCollisionGuard();
	bool IsCollisionShotEraseLose();
	bool IsCollisionShotEraseWin();
	bool IsCollisionShotReflectLose();
	bool IsCollisionShotReflectWin();
	bool IsCollisionShotHit();
	bool IsCollisionGuardPoint();
	bool IsCollisionAtemi();
	bool IsCollisionBackHit();
	bool IsCollisionFrontHit();
	void SetCollisionHit(bool);
	void SetCollisionCatch(bool);
	void SetCollisionGuard(bool);
	void SetCollisionShotEraseLose(bool);
	void SetCollisionShotEraseWin(bool);
	void SetCollisionShotReflectLose(bool);
	void SetCollisionShotReflectWin(bool);
	void SetCollisionShotHit(bool);
	void SetCollisionGuardPoint(bool);
	void SetCollisionAtemi(bool);
	void SetCollisionBackHit(bool);
	void SetCollisionFrontHit(bool);
	void SetCollisionHitDirection(const ActorObject &);
	bool IsInvalidShotObject();
	bool IsInvalidShotObjectExcludeShotBody();
	bool IsDisableReflectShot();
	bool IsTargetPush();
	bool IsObjectPush();
	void SetTargetPush(bool);
	void SetObjectPush(bool);
	void ResetPushFlag();
	bool IsWallBack();
	bool IsPreferenceWall();
	bool IsEraseEffectInvalid();
	void SetEraseEffectInvalid(bool);
	ActorObject & operator=(const ActorObject &);
};
bool ActorObject::_branchIsAttackHitOrGuard(float param); // 0x1400B84C0
bool ActorObject::IsAttackHit(); // 0x1400B84D0
bool ActorObject::IsAttackGuard(); // 0x1400B84E0
bool ActorObject::_branchIsAttackNoHit(float param); // 0x1400B84F0
bool ActorObject::IsAttackCounter(); // 0x1400B8520
struct ActorObject::ATTACK_FLAG
{
	enum ID
	{
		APPEAR = 0,
		GUARD = 1,
		HIT = 2,
		CATCH = 3,
		KO = 4,
		COUNTER = 5,
		MAX = 6,
	};
};
class std::bitset<6>
{
	typedef unsigned long _Ty;
	class reference;
public:
	static void _Validate(unsigned long long);
	bool _Subscript(unsigned long long);
	std::bitset<6>::reference operator[](unsigned long long);
	bool operator[](unsigned long long);
	bitset<6>(unsigned long long);
	bitset<6>();
	static const bool _Need_mask; // 0xFFFFFFFFFFFFFFFF
	static const unsigned long long _Mask; // 0xFFFFFFFFFFFFFFFF
	std::bitset<6> & operator&=(const std::bitset<6> &);
	std::bitset<6> & operator|=(const std::bitset<6> &);
	std::bitset<6> & operator^=(const std::bitset<6> &);
	std::bitset<6> & operator<<=(unsigned long long);
	std::bitset<6> & operator>>=(unsigned long long);
	std::bitset<6> & set(unsigned long long, bool);
	std::bitset<6> & set();
	std::bitset<6> & reset(unsigned long long);
	std::bitset<6> & reset();
	operator~();
	std::bitset<6> & flip(unsigned long long);
	std::bitset<6> & flip();
	unsigned long to_ulong();
	unsigned long long to_ullong();
	unsigned long long count();
	unsigned long long size();
	unsigned long long hash();
	bool operator==(const std::bitset<6> &);
	bool operator!=(const std::bitset<6> &);
	bool test(unsigned long long);
	bool any();
	bool none();
	bool all();
	std::bitset<6> operator<<(unsigned long long);
	std::bitset<6> operator>>(unsigned long long);
	unsigned long _Getword(unsigned long long);
	enum <unnamed-enum-_Bitsperword> : long long
	{
		_Bitsperword = 32,
		_Words = 0,
	};
private:
	void _Tidy(unsigned long);
	void _Trim();
	void _Trim_if(std::integral_constant<bool,0>);
	void _Trim_if(std::integral_constant<bool,1>);
	void _Xinv();
	void _Xoflo();
	void _Xran();
	unsigned long _Array[1]; // 0x0
};
struct ActorObject::COLLISION_FLAG
{
	enum ID
	{
		HIT = 0,
		CATCH = 1,
		GUARD = 2,
		SHOT_ERASE_LOSE = 3,
		SHOT_ERASE_WIN = 4,
		SHOT_REFLECT_LOSE = 5,
		SHOT_REFLECT_WIN = 6,
		SHOT_HIT = 7,
		GUARD_POINT = 8,
		ATEMI = 9,
		BACK_HIT = 10,
		FRONT_HIT = 11,
		TARGET_PUSH = 12,
		OBJECT_PUSH = 13,
		ERASE_EFFECT_INV = 14,
		MAX = 15,
	};
};
class std::bitset<15>
{
	typedef unsigned long _Ty;
	class reference;
public:
	static void _Validate(unsigned long long);
	bool _Subscript(unsigned long long);
	std::bitset<15>::reference operator[](unsigned long long);
	bool operator[](unsigned long long);
	bitset<15>(unsigned long long);
	bitset<15>();
	static const bool _Need_mask; // 0xFFFFFFFFFFFFFFFF
	static const unsigned long long _Mask; // 0xFFFFFFFFFFFFFFFF
	std::bitset<15> & operator&=(const std::bitset<15> &);
	std::bitset<15> & operator|=(const std::bitset<15> &);
	std::bitset<15> & operator^=(const std::bitset<15> &);
	std::bitset<15> & operator<<=(unsigned long long);
	std::bitset<15> & operator>>=(unsigned long long);
	std::bitset<15> & set(unsigned long long, bool);
	std::bitset<15> & set();
	std::bitset<15> & reset(unsigned long long);
	std::bitset<15> & reset();
	operator~();
	std::bitset<15> & flip(unsigned long long);
	std::bitset<15> & flip();
	unsigned long to_ulong();
	unsigned long long to_ullong();
	unsigned long long count();
	unsigned long long size();
	unsigned long long hash();
	bool operator==(const std::bitset<15> &);
	bool operator!=(const std::bitset<15> &);
	bool test(unsigned long long);
	bool any();
	bool none();
	bool all();
	std::bitset<15> operator<<(unsigned long long);
	std::bitset<15> operator>>(unsigned long long);
	unsigned long _Getword(unsigned long long);
	enum <unnamed-enum-_Bitsperword> : long long
	{
		_Bitsperword = 32,
		_Words = 0,
	};
private:
	void _Tidy(unsigned long);
	void _Trim();
	void _Trim_if(std::integral_constant<bool,0>);
	void _Trim_if(std::integral_constant<bool,1>);
	void _Xinv();
	void _Xoflo();
	void _Xran();
	unsigned long _Array[1]; // 0x0
};
bool ActorObject::IsAttackCatched(); // 0x1400B8530
bool ActorObject::IsAttackKO(); // 0x1400B8540
void ActorObject::SetAttackAppear(bool flag); // 0x1400B8550
void ActorObject::SetAttackGuard(bool flag); // 0x1400B85C0
void ActorObject::SetAttackHit(bool flag); // 0x1400B8630
void ActorObject::SetAttackCatch(bool flag); // 0x1400B86A0
void ActorObject::SetAttackKO(bool flag); // 0x1400B8710
void ActorObject::SetAttackCounter(bool flag); // 0x1400B8780
bool ActorObject::IsCollisionHit(); // 0x1400B87F0
bool ActorObject::IsCollisionCatch(); // 0x1400B8800
bool ActorObject::IsCollisionGuard(); // 0x1400B8810
bool ActorObject::IsCollisionShotEraseLose(); // 0x1400B8820
bool ActorObject::IsCollisionShotEraseWin(); // 0x1400B8830
bool ActorObject::IsCollisionShotReflectLose(); // 0x1400B8840
bool ActorObject::IsCollisionShotReflectWin(); // 0x1400B8850
bool ActorObject::IsCollisionShotHit(); // 0x1400B8860
bool ActorObject::IsCollisionGuardPoint(); // 0x1400B8870
bool ActorObject::IsCollisionAtemi(); // 0x1400B8880
bool ActorObject::IsCollisionBackHit(); // 0x1400B8890
bool ActorObject::IsCollisionFrontHit(); // 0x1400B88A0
void ActorObject::SetCollisionHit(bool flag); // 0x1400B88B0
void ActorObject::SetCollisionCatch(bool flag); // 0x1400B8920
void ActorObject::SetCollisionGuard(bool flag); // 0x1400B8990
void ActorObject::SetCollisionShotEraseLose(bool flag); // 0x1400B8A00
void ActorObject::SetCollisionShotEraseWin(bool flag); // 0x1400B8A70
void ActorObject::SetCollisionShotReflectLose(bool flag); // 0x1400B8AE0
void ActorObject::SetCollisionShotReflectWin(bool flag); // 0x1400B8B50
void ActorObject::SetCollisionShotHit(bool flag); // 0x1400B8BC0
void ActorObject::SetCollisionGuardPoint(bool flag); // 0x1400B8C30
void ActorObject::SetCollisionAtemi(bool flag); // 0x1400B8CA0
void ActorObject::SetCollisionBackHit(bool flag); // 0x1400B8D10
void ActorObject::SetCollisionFrontHit(bool flag); // 0x1400B8D80
bool ActorObject::IsInvalidShotObject(); // 0x1400B8DF0
bool ActorObject::IsInvalidShotObjectExcludeShotBody(); // 0x1400B8E30
bool ActorObject::IsTargetPush(); // 0x1400B8E70
bool ActorObject::IsObjectPush(); // 0x1400B8E80
void ActorObject::SetTargetPush(bool flag); // 0x1400B8E90
void ActorObject::SetObjectPush(bool flag); // 0x1400B8F00
void ActorObject::ResetPushFlag(); // 0x1400B8F70
bool ActorObject::IsEraseEffectInvalid(); // 0x1400B9010
void ActorObject::SetEraseEffectInvalid(bool flag); // 0x1400B9020