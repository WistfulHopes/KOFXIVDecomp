#pragma once

class ActorWeapon :
	Actor
{
protected:
	void _checkAttachBoneID();
	void _setDefaultSetting();
	void _setParentCenterPos(Actor *, bool);
	void _resetAngle();
public:
	ActorWeapon(const ActorWeapon &);
	ActorWeapon();
	virtual ~ActorWeapon();
	virtual void CreateInit();
	virtual void Dispose();
	void ParamInit(ActorCharaBase *);
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
	virtual void ActionFlagCheck();
	virtual void ActionChanged();
	virtual void StateChanged();
	virtual Actor::ACTOR_TYPE GetActorType();
	virtual bool IsBlackStop();
	virtual void CancelBlackout();
	virtual OGLVec3 GetCenterPosition();
	virtual OGLVec3 GetBindCenterPosition();
	virtual long GetFounderPlayerID();
	virtual bool IsMotionCameraInvisibleActor();
	virtual bool IsInvisible();
	virtual bool IsModelDraw();
	void SetWeaponParam(const CharaActionData::Weapon &);
	void SetBindActor(Actor *);
	bool IsIgnoreMotionBlend();
	ActorCharaBase * pOwner; // 0x328
	Actor * pBindActor; // 0x330
	long iWeaponID; // 0x338
	bool bInvisible; // 0x33C
	CharaActionData::Weapon defaultWeaponParam; // 0x340
	CharaActionData::Weapon weaponParam; // 0x35C
	bool bUpdateWeaponParam; // 0x378
	float fMotionFrame; // 0x37C
	bool bSavePrevBone; // 0x380
	bool bUpdateMaterialData; // 0x381
	bool bSetUpEnd; // 0x382
	static ActorWeapon * CreateActorWeapon(ActorCharaBase *, OGLModel *, long);
	ActorWeapon & operator=(const ActorWeapon &);
};
ActorWeapon::ActorWeapon(); // 0x1400BBA10
Actor::ACTOR_TYPE ActorWeapon::GetActorType(); // 0x1400BBAA0
long ActorWeapon::GetFounderPlayerID(); // 0x1400BBAB0
bool ActorWeapon::IsIgnoreMotionBlend(); // 0x1400BBAD0