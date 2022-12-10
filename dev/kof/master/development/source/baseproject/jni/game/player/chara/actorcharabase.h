#pragma once

class ActorCharaBase :
	ActorObject
{
protected:
	OGLVec3 GetMotionMovePos();
	OGLVec3 GetMotionMovePosOpt();
	void CheckBasePositionAnchor();
	void SetEndSetupFlag(bool);
	void SetInvalidDefaultBranch(bool);
	void SetResultDemoActor(bool, long);
	void SetResultDemoEnd(bool);
	void SetDisableBlendSave(bool);
	void CheckMotionScale();
	struct CHARA_BASE_FLAG;
public:
	ActorCharaBase(const ActorCharaBase &);
	ActorCharaBase();
	virtual ~ActorCharaBase();
	virtual void CreateInit();
	virtual void Dispose();
	void ParamInit(const CharaDataUnify *);
	virtual void PrevDataSet();
	virtual void ActionParamInit();
	virtual void UpdatePostureCalc(const CharaActionData::BaseAnime &, bool);
	virtual void UpdatePosture();
	virtual void SyncPosture();
	void UpdateMotionMove();
	void UpdateFaceAngle();
	void UpdatePartsMotion(float);
	virtual void ActionFlagCheck();
	virtual void ActionChanged();
	virtual void CheckWeaponLine();
	virtual void CheckSettingLine();
	void SetCharaColorChange(const CharaActionData::Setting::Type::CharaColor &);
	void SetFadeOutColor(const ColorHolder &, long, long);
	void SetEyeControlData(const CharaActionData::Setting::Type::EyeControl &);
	void SetHeadControlData(const CharaActionData::Setting::Type::HeadControl &);
	void SetMaterialSettingData(const CharaActionData::Setting::Type::Material &);
	void SetTalkSettingData(const CharaActionData::Setting::Type::Talk &);
	void SetSecondarySettingData(const CharaActionData::Setting::Type::Secondary &);
	void SetSpecialEffectSettingData(const CharaActionData::Setting::Type::SpEffect &);
	void SetCharaOffsetData(const CharaActionData::Setting::Type::CharaOffset &);
	void ActionChangeReqBase(const long, const long, const bool);
	long GetBaseActionID(long);
	long GetBaseActionID();
	long GetCommonActionID(long);
	bool IsReady();
	void SetupAction(bool, long);
	bool IsSetupState();
	bool IsEndSetup();
	bool IsResultDemoActor();
	bool IsResultDemoSubActor();
	bool IsResultDemoEnd();
	bool IsInvalidDefaultBranch();
	bool IsHitStopVibrate();
	void SetHitStopVibrate(bool);
	void EnableFollowBone(bool);
	bool IsDisableBlendSave();
	long GetBoneIndex(CharaBone::NAME_INDEX, bool);
	OGLVec3 GetBonePosition(CharaBone::NAME_INDEX);
	OGLVec3 GetBonePosition(CharaBone::NAME_INDEX, bool);
	OGLVec3 GetBonePositionNoScale(CharaBone::NAME_INDEX);
	OGLVec3 GetBonePositionNoScale(CharaBone::NAME_INDEX, bool);
	OGLVec3 GetBonePositionLocal(CharaBone::NAME_INDEX, bool, bool);
	OGLVec3 GetCameraPositionOrigin(bool);
	OGLVec3 GetCameraPosition(bool, bool);
	void SetOffsetScaleFigure(OGLFigure *);
	bool IsCalledUpdatePostureCalc();
	bool IsPrevBoneInfoMirror();
	const CharaDataUnify * pDataUnify; // 0x330
	const CharaBaseStatus * pBaseStat; // 0x338
	const CharaBone * pCharaBone; // 0x340
	std::bitset<6> charaBaseFlag; // 0x348
	bool bEnableFollowBone; // 0x34C
	bool bEnableOffsetScaleFigure; // 0x34D
	bool bMotionMoveSlowAdjValue; // 0x34E
	OGLVec3 vMotionMoveAdj; // 0x350
	bool bSavePrevBone; // 0x35C
	bool bCalledUpdatePostureCalc; // 0x35D
	bool bEnablePrevBoneInfoMirror; // 0x35E
	bool bPrevMotionNotUnique; // 0x35F
	long iResultSubType; // 0x360
	struct ColorChange;
	ActorCharaBase::ColorChange colorChangeData; // 0x364
	ActorCharaBase & operator=(const ActorCharaBase &);
};
void ActorCharaBase::SetEndSetupFlag(bool bSet); // 0x1400B9120
void ActorCharaBase::SetInvalidDefaultBranch(bool bSet); // 0x1400B9190
void ActorCharaBase::SetResultDemoActor(bool bSet, long subType); // 0x1400B9200
void ActorCharaBase::SetResultDemoEnd(bool bSet); // 0x1400B9290
void ActorCharaBase::SetDisableBlendSave(bool bSet); // 0x1400B9300
struct ActorCharaBase::CHARA_BASE_FLAG
{
	enum ID
	{
		HIT_STOP_VIB = 0,
		INVALID_DEFAULT_BRANCH = 1,
		END_SETUP = 2,
		RESULT_DEMO_ACTOR = 3,
		RESULT_DEMO_END = 4,
		DISABLE_BLEND_SAVE = 5,
		MAX = 6,
	};
};
ActorCharaBase::ActorCharaBase(); // 0x1400B9370
long ActorCharaBase::GetBaseActionID(); // 0x1400B9410
long ActorCharaBase::GetBaseActionID(long actNo); // 0x1400B9420
long ActorCharaBase::GetCommonActionID(long baseActID); // 0x1400B9490
bool ActorCharaBase::IsEndSetup(); // 0x1400B94E0
bool ActorCharaBase::IsResultDemoActor(); // 0x1400B94F0
bool ActorCharaBase::IsResultDemoSubActor(); // 0x1400B9500
bool ActorCharaBase::IsResultDemoEnd(); // 0x1400B9510
bool ActorCharaBase::IsInvalidDefaultBranch(); // 0x1400B9520
bool ActorCharaBase::IsHitStopVibrate(); // 0x1400B9530
void ActorCharaBase::SetHitStopVibrate(bool bSet); // 0x1400B9540
bool ActorCharaBase::IsDisableBlendSave(); // 0x1400B95B0
OGLVec3 ActorCharaBase::GetBonePosition(CharaBone::NAME_INDEX nameIndex); // 0x1400B95C0
OGLVec3 ActorCharaBase::GetBonePositionNoScale(CharaBone::NAME_INDEX nameIndex); // 0x1400B95F0
bool ActorCharaBase::IsCalledUpdatePostureCalc(); // 0x1400B9620
bool ActorCharaBase::IsPrevBoneInfoMirror(); // 0x1400B9630
struct ActorCharaBase::ColorChange
{
	long iColorType; // 0x0
	Fix32 xMaxFadeFrame; // 0x4
	Fix32 xFadeFrame; // 0x8
	ColorHolder color; // 0xC
	long iOptionFlag; // 0x1C
	bool bFadeOut; // 0x20
	bool bInitial; // 0x21
	ColorChange(const CharaActionData::Setting::Type::CharaColor &);
	ColorChange();
	void Init(bool);
	void SetSettingData(const CharaActionData::Setting::Type::CharaColor &);
	void SetFadeOutColor(const ColorHolder &, long, long);
	void Update(Fix32, bool);
	ColorHolder GetFadeColorValue();
	bool IsNeedCharaColorChange();
	bool IsNeedWeaponColorChange();
	void CheckCharaMaterialColorChange(OGLModel *, long);
	bool IsNeedCharaMaterialFlagColorChange();
	bool IsNeedCharaMaterialNameColorChange();
	long GetMaterialEffectFlag();
};