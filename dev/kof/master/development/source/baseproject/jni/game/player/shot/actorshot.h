#pragma once

class ActorShot :
	ActorObject
{
protected:
	void _addOffset(OGLVec3 &, const Actor *);
	OGLVec3 GetShotFirePos();
	CharaBone::NAME_INDEX _getShotFirePositionBoneID(long);
	virtual bool _branchIsShotAttackHitOrGuard(float);
	virtual bool _branchIsShotAttackHit(float);
	virtual bool _branchIsShotAttackGuard(float);
	virtual bool _branchIsShotFlag1(float);
	virtual bool _branchIsShotFlag2(float);
	virtual bool _branchIsShotFlag3(float);
	virtual bool _branchIsShotFlag4(float);
	virtual bool _branchIsShotAlive(float);
	virtual bool _branchIsShotNotAlive(float);
	void EraseShotInit(ActorShot *, long, long);
public:
	ActorShot(const ActorShot &);
	ActorShot();
	virtual ~ActorShot();
	virtual void CreateInit();
	virtual void Dispose();
	void ParamInit(const CharaActionData::Shot::Type::Fire &, Actor *, ActorCharaBase *, ActorChara *);
	virtual void PrevDataSet();
	virtual void ActionParamInit();
	virtual void PreUpdate();
	virtual void BecomUpdate();
	virtual void MainUpdate();
	virtual void LateUpdate();
	virtual void Draw();
	virtual void UpdatePostureCalc(const CharaActionData::BaseAnime &, bool);
	virtual void UpdatePosture();
	virtual void UpdatePosition();
	virtual void SyncPosture();
	virtual void BranchCheck();
	virtual void ActionFlagCheck();
	virtual void ActionChanged();
	virtual void StateChanged();
	virtual Actor::ACTOR_TYPE GetActorType();
	virtual bool IsBlackStop();
	virtual void CancelBlackout();
	virtual OGLVec3 GetCenterPosition();
	virtual OGLVec3 GetBindCenterPosition();
	virtual void SetActionBranchKey(long);
	virtual long GetFounderPlayerID();
	virtual bool IsMotionCameraInvisibleActor();
	virtual bool IsInvisible();
	virtual bool IsModelDraw();
	virtual void SetShotFireData(const CharaActionData::Shot::Type::Fire &);
	virtual void SetShotEventData(const CharaActionData::Shot::Type::Event &);
	virtual void SetEffectCreateData(const CharaActionData::Effect::Type::Set &);
	virtual void SetAttackGuard(bool);
	virtual void SetAttackHit(bool);
	virtual bool IsDisableReflectShot();
	bool IsShotDeadOutRange();
	bool IsShotEraseOutRange();
	virtual void CheckWeaponLine();
	struct SHOT_STATUS;
	struct SHOT_TYPE;
	ActorShot::SHOT_TYPE::ID GetShotType();
	long GetShotID();
	bool IsReflectShot();
	void SetReflectOwner(ActorChara *);
	bool IsDeadShot();
	void RequestShotControl(const CharaActionData::Shot::Type::Control &);
	void DecShotVital();
	long GetShotVital();
	bool IsTransmitHitStop();
	OGLVec3 GetPerentMoveValue();
	OGLVec3 GetPerentAddValue();
	virtual void SetHitStop(long, bool);
	ActorCharaBase * pFounder; // 0x330
	ActorChara * pOwner; // 0x338
	ActorChara * pReflectOwner; // 0x340
	CharaActionData::Shot::Type::Fire shotData; // 0x348
	CharaActionData::Shot::Type::Event eventData; // 0x360
	struct ControlData;
	ActorShot::ControlData ctrlData; // 0x378
	ActorShot::ControlData ctrlReqData; // 0x384
	bool bReflectShot; // 0x390
	bool bPositionInit; // 0x391
	bool bParentBind; // 0x392
	long iShotVital; // 0x394
	bool bNextHitWait; // 0x398
	long iParentInitActNo; // 0x39C
	bool bParentInitActDataChanged; // 0x3A0
	bool bDeadShot; // 0x3A1
	bool bBlackoutInvalid; // 0x3A2
	long iShotVitalPrev; // 0x3A4
	static ActorShot * CreateActorShot(const CharaActionData::Shot::Type::Fire &, Actor *, ActorCharaBase *, ActorChara *);
	static ActorShot * CreateEraseShot(ActorShot *, long, long);
	ActorShot & operator=(const ActorShot &);
};
ActorShot::ActorShot(); // 0x1400BB880
Actor::ACTOR_TYPE ActorShot::GetActorType(); // 0x1400BB920
void ActorShot::SetShotEventData(const CharaActionData::Shot::Type::Event & eventData); // 0x1400BB930
struct ActorShot::SHOT_STATUS
{
	enum ID
	{
		INIT = 0,
		MAIN = 1,
		SCREEN_OUT = 2,
		ERASE = 3,
		HIT = 4,
		GUARD = 5,
		DIE = 6,
		GROUND = 7,
		WALL = 8,
	};
};
struct ActorShot::SHOT_TYPE
{
	enum ID
	{
		NORMAL = 0,
		CHARA_BODY = 1,
		CRYSTAL_BIT = 2,
	};
};
ActorShot::SHOT_TYPE::ID ActorShot::GetShotType(); // 0x1400BB950
long ActorShot::GetShotID(); // 0x1400BB960
bool ActorShot::IsReflectShot(); // 0x1400BB970
void ActorShot::SetReflectOwner(ActorChara * pOwner); // 0x1400BB980
bool ActorShot::IsDeadShot(); // 0x1400BB990
void ActorShot::DecShotVital(); // 0x1400BB9A0
long ActorShot::GetShotVital(); // 0x1400BB9C0
bool ActorShot::IsTransmitHitStop(); // 0x1400BB9D0
struct ActorShot::ControlData
{
	bool bSetData; // 0x0
	std::bitset<9> bsFuncFlag; // 0x4
	long iOptionFlag; // 0x8
	ControlData();
};