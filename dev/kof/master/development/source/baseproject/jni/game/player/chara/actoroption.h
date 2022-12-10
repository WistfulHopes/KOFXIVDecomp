#pragma once

class ActorOption :
	ActorCharaBase
{
protected:
	virtual bool _branchIsShotAttackHitOrGuard(float);
	virtual bool _branchIsShotAttackHit(float);
	virtual bool _branchIsShotAttackGuard(float);
	virtual bool _branchIsShotFlag1(float);
	virtual bool _branchIsShotFlag2(float);
	virtual bool _branchIsShotFlag3(float);
	virtual bool _branchIsShotFlag4(float);
	virtual bool _branchIsShotAlive(float);
	virtual bool _branchIsShotNotAlive(float);
	void CheckUseZOffset();
	struct ACTOR_STATUS;
	struct MamahahaParam;
public:
	ActorOption(const ActorOption &);
	ActorOption();
	virtual ~ActorOption();
	virtual void CreateInit();
	virtual void Dispose();
	void ParamInit(const CharaDataUnify *, ActorChara *);
	virtual void PrevDataSet();
	virtual void ActionParamInit();
	virtual void PreUpdate();
	virtual void BecomUpdate();
	virtual void MainUpdate();
	virtual void LateUpdate();
	virtual void Draw();
	virtual void UpdateMotionMove();
	virtual void UpdatePosition();
	virtual void BranchCheck();
	virtual void ActionFlagCheck();
	virtual void ActionChanged();
	virtual void StateChanged();
	virtual Actor::ACTOR_TYPE GetActorType();
	ActorChara * GetTargetActor();
	virtual bool IsBlackStop();
	virtual void CancelBlackout();
	virtual OGLVec3 GetCenterPosition();
	virtual OGLVec3 GetBindCenterPosition();
	virtual void SetActionBranchKey(long);
	virtual long GetFounderPlayerID();
	virtual bool IsMotionCameraInvisibleActor();
	virtual bool IsInvisible();
	virtual bool IsModelDraw();
	void DefaultBranchCheck();
	virtual void ActionChangeReqBase(const long, const long, const bool);
	virtual void SetShotFireData(const CharaActionData::Shot::Type::Fire &);
	virtual void SetEffectCreateData(const CharaActionData::Effect::Type::Set &);
	virtual void SetExclusiveData(const CharaActionData::Exclusive &, bool);
	virtual void SetSpecialEffectSettingData(const CharaActionData::Setting::Type::SpEffect &);
	virtual void SetAttackGuard(bool);
	virtual void SetAttackHit(bool);
	virtual bool IsReady();
	void SetReady(bool);
	virtual void SetupAction(bool, long);
	virtual bool IsSetupState();
	bool IsTransmitHitStop();
	virtual void SetHitStop(long, bool);
	ActorChara * pOwner; // 0x388
	bool bPositionInit; // 0x390
	bool bParentBind; // 0x391
	bool bBlackoutInvalid; // 0x392
	bool bExistExtraModel; // 0x393
	bool bChangedExtraModel; // 0x394
	bool bShotErased; // 0x395
	ActorOption::MamahahaParam mamahahaParam; // 0x398
	long iOwnerActionNo; // 0x3E0
	bool IsMamahahaCanMove();
	bool IsMamahahaReady();
	bool IsMamahahaWaitingScreenOut();
	static ActorOption * CreateActorOption(const CharaDataUnify *, ActorChara *);
	ActorOption & operator=(const ActorOption &);
};
struct ActorOption::ACTOR_STATUS
{
	enum ID
	{
		READY = 0,
		SETUP = 1,
		COMMON_STAT_MAX = 2,
		MMH_FRONT_MOVE = 3,
		MMH_BACK_MOVE = 4,
		MMH_DASH = 5,
		MMH_DASH_END = 6,
		MMH_TURN = 7,
		MMH_AMUBE_ATK = 8,
		MMH_AMUBE_BACK = 9,
		MMH_SUPER_YATORO = 10,
		MMH_MAX_YATORO = 11,
		MMH_THROW_K = 12,
		MMH_THROW_K_BACK = 13,
		MMH_WIN = 14,
		MMH_RIDE_WAIT = 15,
		MMH_RIDE = 16,
		MMH_CLIMAX = 17,
		MMH_CLIMAX_HIT = 18,
		MMH_TO_READY = 19,
		BGT_ATTACK = 20,
		COC_ACTION = 21,
		COC_WIN = 22,
		DRG_ACTION = 23,
		ACTOR_STATUS_MAX = 24,
	};
};
struct ActorOption::MamahahaParam
{
	struct OPTION_FLAG;
	OGLVec3 vInitOffsetPos; // 0x0
	OGLVec3 vStartPos; // 0xC
	OGLVec3 vEndPos; // 0x18
	float fMoveCount; // 0x24
	bool bOffsetMirror; // 0x28
	long iOffsetMirrorOwnerAct; // 0x2C
	std::bitset<4> bsOptionFlag; // 0x30
	Fix32 xMergeCount; // 0x34
	Fix32 xMergeCountMax; // 0x38
	OGLVec3 vMergePos; // 0x3C
	void Init();
	float GetDefaultMoveCount();
	void SetDefaultMoveCount();
	MamahahaParam(ActorOption::MamahahaParam &);
	MamahahaParam(const ActorOption::MamahahaParam &);
	MamahahaParam();
};
struct ActorOption::MamahahaParam::OPTION_FLAG
{
	enum ID
	{
		REFER_PARENT_Z_OFFSET = 0,
		STOP_PARENT_BLACKOUT = 1,
		SYNC_PARENT_ACTION = 2,
		MOVE_STOP = 3,
		MAX = 4,
	};
};
class std::bitset<4>
{
	typedef unsigned long _Ty;
	class reference;
public:
	static void _Validate(unsigned long long);
	bool _Subscript(unsigned long long);
	std::bitset<4>::reference operator[](unsigned long long);
	bool operator[](unsigned long long);
	bitset<4>(unsigned long long);
	bitset<4>();
	static const bool _Need_mask; // 0xFFFFFFFFFFFFFFFF
	static const unsigned long long _Mask; // 0xFFFFFFFFFFFFFFFF
	std::bitset<4> & operator&=(const std::bitset<4> &);
	std::bitset<4> & operator|=(const std::bitset<4> &);
	std::bitset<4> & operator^=(const std::bitset<4> &);
	std::bitset<4> & operator<<=(unsigned long long);
	std::bitset<4> & operator>>=(unsigned long long);
	std::bitset<4> & set(unsigned long long, bool);
	std::bitset<4> & set();
	std::bitset<4> & reset(unsigned long long);
	std::bitset<4> & reset();
	operator~();
	std::bitset<4> & flip(unsigned long long);
	std::bitset<4> & flip();
	unsigned long to_ulong();
	unsigned long long to_ullong();
	unsigned long long count();
	unsigned long long size();
	unsigned long long hash();
	bool operator==(const std::bitset<4> &);
	bool operator!=(const std::bitset<4> &);
	bool test(unsigned long long);
	bool any();
	bool none();
	bool all();
	std::bitset<4> operator<<(unsigned long long);
	std::bitset<4> operator>>(unsigned long long);
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
ActorOption::ActorOption(); // 0x1400BBAE0
Actor::ACTOR_TYPE ActorOption::GetActorType(); // 0x14002DEF0
bool ActorOption::IsReady(); // 0x1400BBB50
bool ActorOption::IsSetupState(); // 0x1400BBB60
bool ActorOption::IsMamahahaCanMove(); // 0x1400BBB70