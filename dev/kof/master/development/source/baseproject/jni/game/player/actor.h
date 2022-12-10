#pragma once

class Actor
{
	enum <unnamed-enum-ATTACK_HIT_GROUP_MAX>
	{
		ATTACK_HIT_GROUP_MAX = 128,
	};
protected:
	void SetSpeedDataSub(float &, const long, const float, const long);
	float _MovePos(const float, const float, const float);
	bool _branchIsAttackHitOrGuard(float);
	bool _branchIsAttackHit(float);
	bool _branchIsAttackGuard(float);
	bool _branchIsAttackNoHit(float);
	bool _branchIsAir(float);
	bool _branchIsLand(float);
	bool _branchIsStageWall(float);
	bool _branchIsFlag1(float);
	bool _branchIsFlag2(float);
	bool _branchIsFlag3(float);
	bool _branchIsFlag4(float);
	bool _branchIsDistance(float);
	bool _branchIsShotAttackHitOrGuard(float);
	bool _branchIsShotAttackHit(float);
	bool _branchIsShotAttackGuard(float);
	bool _branchIsScreenWall(float);
	bool _branchIsActionLoopCount(float);
	bool _branchIsShotFlag1(float);
	bool _branchIsShotFlag2(float);
	bool _branchIsShotFlag3(float);
	bool _branchIsShotFlag4(float);
	bool _branchIsShotAlive(float);
	bool _branchIsShotNotAlive(float);
	bool _branchIsAttackCounter(float);
	bool _branchIsTargetAir(float);
	bool _branchIsTargetLand(float);
	bool _branchIsTargetFlag1(float);
	bool _branchIsTargetFlag2(float);
	bool _branchIsTargetFlag3(float);
	bool _branchIsTargetFlag4(float);
	bool _branchIsRandom(float);
	bool _branchIsActionCountOver(float);
	bool _branchIsActionCountUnder(float);
	bool _branchIsTargetKO(float);
	bool _branchIsTargetStageWall(float);
	bool _branchIsParentFlag1(float);
	bool _branchIsParentFlag2(float);
	bool _branchIsParentFlag3(float);
	bool _branchIsParentFlag4(float);
	bool _branchIsCommandCountOver(float);
	bool _branchIsCommandCountUnder(float);
	bool _isBranchEnable(long, float);
	const CharaActionData::Branch * _branchConfirm();
	void _branchFlagCtrl(long, long);
	bool _checkEffectSetTerm(const CharaActionData::Effect::Type::Set &);
	void ModelUpdatePosture(OGLMatrix &);
	bool ModelSyncPosture();
public:
	Actor(const Actor &);
	Actor();
	~Actor();
	void CreateInit();
	void Dispose();
	void ParamInit(const CharaActionData *, const CharaHitRect *, const CharaAttackData *, const CharaDamageSetting *);
	void ActionParamInit();
	ActionSystem * GetActionSystem();
	enum ACTOR_TYPE
	{
		CHARA = 0,
		EFFECT = 1,
		SHOT = 2,
		WEAPON = 3,
		OPTION = 4,
	};
	Actor::ACTOR_TYPE GetActorType();
	bool IsDataExist();
	float GetActionSystemSpeed();
	Fix32 GetActionSystemSpeedFix();
	float GetActionPlayRate();
	Fix32 GetActionPlayRateFix();
	long GetActionCount(bool);
	long GetActionEndFrame(long, bool);
	const CharaActionData::ActionDataInfo * GetActionDataInfo(const long, bool);
	long GetActionCategoryID(long, bool);
	long GetActionSubCategoryID(long, bool);
	long GetActionOptionFlag(long, bool);
	bool IsLoopAction(long, bool);
	const CharaActionData::ActionLine * GetActionLine(const long, CharaActionData::LINE_ID::ID, const long);
	const CharaActionData::ActionLineFrame * GetKeyFrameLine(const CharaActionData::ActionLine *, const long, const long);
	const CharaActionData::ActionLineFrame * GetKeyFrame(CharaActionData::LINE_ID::ID, const long);
	const CharaActionData::ActionLineFrame * GetKeyFrame(const long, CharaActionData::LINE_ID::ID, const long, const long);
	const CharaActionData::ActionLineFrame * GetAttackKeyFrame(const long, const long);
	const CharaActionData::ActionLineFrame * GetGuardCheckKeyFrame(const long, const long);
	long GetRealActionFrame(const long, const long);
	void SetSpeedData(const CharaActionData::Speed &, long);
	void MoveSpeedData(const float);
	void SetSpeed(const float, const float, const float, const float, long, long);
	void ResetSpeed();
	bool IsLanding();
	void SetPositionData(const CharaActionData::Position &);
	void SetPositionX(float);
	void SetPositionY(float);
	void SetPositionZ(float);
	void SetPosition(OGLVec3 &);
	long GetReverseCAngle();
	bool IsDirectionInfluenceZ();
	long GetTurnAngle(const long);
	void SetTurn(const long);
	void PrevDataSet();
	void PreUpdate();
	void BecomUpdate();
	void MainUpdate();
	void LateUpdate();
	void Draw();
	void UpdatePostureCalc(const CharaActionData::BaseAnime &, bool);
	void UpdatePosture();
	void UpdatePosition();
	void SyncPosture();
	bool IsCancel(long, long, long);
	void BranchCheck();
	void ActionFlagCheck();
	void ActionEtcSet(const CharaActionData::Etc &);
	bool IsAngleChangePostureCalc();
	void ActionChanged();
	void StateChanged();
	float GetRivalDistance();
	bool IsTurnChange();
	bool IsBlackStop();
	void CancelBlackout();
	OGLVec3 GetCenterPosition();
	OGLVec3 GetBindCenterPosition();
	void ActionChangeReq(const long, const long);
	void ActionFrameChangeReq(const long);
	void StateChangeReq(const long);
	bool IsActionNewFrame();
	bool IsIgnoreSystemPlayRate();
	void SetIgnoreSystemPlayRate(bool);
	bool IsHitStopFreeze();
	void CAngleChangeReq(const long);
	void CAngleChangeReq();
	void DrawRequest();
	void ChangeActionDataReq(const CharaActionData *, OGLModel *, const CharaHitRect *);
	void ChangeActionDataTargetReq();
	void SetBackActionDataReq();
	bool IsActionDataChanged();
	long GetPlayerID();
	long GetFounderPlayerID();
	bool IsOptionAsset();
	void SetOptionAsset(bool);
	long GetAssetID();
	void WaitUpdatePosutre();
	void SetModelMoveLightFlag(bool);
	void SetModelMirrorLightFlag(bool);
	bool GetModelMoveLightFlag();
	bool GetModelMirrorLightFlag();
	enum SYSTEM_STAT
	{
		DIE = 0,
		ALIVE = 1,
		INIT = 2,
		DELETE_ = 3,
	};
	long iPriority; // 0x8
	long iDrawPri; // 0xC
	long iDrawPriSub; // 0x10
	Actor::SYSTEM_STAT systemStat; // 0x14
	bool bDrawReq; // 0x18
	bool bDrawCalled; // 0x19
	unsigned long uiActorID; // 0x1C
	Actor::SYSTEM_STAT GetSystemStat();
	bool IsActorInit();
	void ActorActivate();
	bool IsActorAlive();
	void ActorDie();
	bool IsActorDead();
	const Collision::HitRect * GetHitRect(long);
	const CharaAttackData::AttackData * GetAttackData(long);
	const CharaDamageSetting::Setting * GetDamageSetting(long);
	ActionSystem * pActSys; // 0x20
	const CharaActionData * pAct; // 0x28
	const CharaActionData * pActBuf; // 0x30
	const CharaActionData * pActReserve; // 0x38
	const CharaHitRect * pHitRect; // 0x40
	const CharaHitRect * pHitRectBuf; // 0x48
	const CharaHitRect * pHitRectReserve; // 0x50
	const CharaAttackData * pAtkData; // 0x58
	const CharaDamageSetting * pDmgSet; // 0x60
	OGLModel * pModel; // 0x68
	OGLModel * pMotionChangeModel; // 0x70
	OGLModel * pMotionChangeModelReserve; // 0x78
	Actor * pTarget; // 0x80
	Actor * pParent; // 0x88
	OGLVec3 vPos; // 0x90
	OGLVec3 vPosPrev; // 0x9C
	OGLVec3 vMov; // 0xA8
	OGLVec3 vMovPrev; // 0xB4
	OGLVec3 vAdd; // 0xC0
	OGLVec3 vAddPrev; // 0xCC
	OGLVec3 vOff; // 0xD8
	OGLVec3 vOffPrev; // 0xE4
	OGLVec3 vBaseOff; // 0xF0
	OGLVec3 vBaseOffPrev; // 0xFC
	OGLVec3 vColOffBase; // 0x108
	OGLVec3 vColOff; // 0x114
	OGLVec3 vColOffPrev; // 0x120
	OGLVec3 vBuf; // 0x12C
	OGLVec3 vBasePos; // 0x138
	OGLVec3 vBasePosPrev; // 0x144
	OGLVec3 vScale; // 0x150
	OGLVec3 vScalePrev; // 0x15C
	OGLVec3 vAngle; // 0x168
	OGLVec3 vAnglePrev; // 0x174
	long iCharNo; // 0x180
	long iPlayerID; // 0x184
	long iAssetID; // 0x188
	long iCAngle; // 0x18C
	long iCAngleBuf; // 0x190
	long iCAnglePrev; // 0x194
	long iCAngleReserve; // 0x198
	long iActNo; // 0x19C
	long iActNoPrev; // 0x1A0
	long iActFrame; // 0x1A4
	long iActFramePrev; // 0x1A8
	float fActFrameFraction; // 0x1AC
	float fActFrameFractionPrev; // 0x1B0
	long iActReserveNo; // 0x1B4
	long iActReserveFrame; // 0x1B8
	float fActReserveFrameFraction; // 0x1BC
	float fActionPlayRate; // 0x1C0
	float fActionPlayRateReserve; // 0x1C4
	bool bIgnoreSystemPlayRate; // 0x1C8
	long iActorStat; // 0x1CC
	long iActorStatPrev; // 0x1D0
	long iActorStatReserve; // 0x1D4
	long iActorStatBase; // 0x1D8
	bool bActionEnd; // 0x1DC
	bool bActionLooped; // 0x1DD
	long iActionLoopCount; // 0x1E0
	bool bActionFreeze; // 0x1E4
	bool bActionNewFrame; // 0x1E5
	long iActionCounter; // 0x1E8
	CharaActionData::Position positionReserve; // 0x1EC
	CharaActionData::BaseAnime baseAnime; // 0x204
	CharaActionData::FaceAnime faceAnimeUp; // 0x218
	float fFaceAnimeUpBlendBuf; // 0x228
	CharaActionData::FaceAnime faceAnimeLow; // 0x22C
	float fFaceAnimeLowBlendBuf; // 0x23C
	CharaActionData::BaseAnime baseAnimePrev; // 0x240
	CharaActionData::FaceAnime faceAnimeUpPrev; // 0x254
	CharaActionData::FaceAnime faceAnimeLowPrev; // 0x264
	long iActFlg1; // 0x274
	long iActFlg2; // 0x278
	CharaActionData::Exclusive exclusiveParam; // 0x27C
	CharaActionData::Collision bodyPush; // 0x28C
	long iHitDataCount; // 0x2A4
	long iAtkDataCount; // 0x2A8
	long iCancelDataCount; // 0x2AC
	long iBranchCount; // 0x2B0
	long iBranchRandomValue; // 0x2B4
	long iBranchRandomMax; // 0x2B8
	long iSpeedOption; // 0x2BC
	long iMoveOption; // 0x2C0
	long iShotDataCount; // 0x2C4
	long iEffectDataCount; // 0x2C8
	long iWeaponDataCount; // 0x2CC
	long iSettingDataCount; // 0x2D0
	bool bIgnoreMotionBlend; // 0x2D4
	bool bOptionAssetActor; // 0x2D5
	bool bUpdatePostureAsync; // 0x2D6
	bool bSkipSyncPosture; // 0x2D7
	long iActFlg1Next; // 0x2D8
	long iActFlg2Next; // 0x2DC
	Fix32 xHitStopFrame; // 0x2E0
	Fix32 xHitStopTotal; // 0x2E4
	Fix32 xHitStopDelay; // 0x2E8
	Fix32 xMoveWaitFrame; // 0x2EC
	bool bHitStopFreeze; // 0x2F0
	void SetHitStop(long, bool);
	void ResetHitStop();
	std::bitset<128> attackHitGroupBit; // 0x2F8
	void ResetAttackHitGroup();
	void SetAttackGroupID(long);
	bool IsAttackGroupID(long);
	struct BRANCH_KEY;
	unsigned long uiActionBranchKey; // 0x308
	void SetActionBranchKey(long);
	void ResetActionBranchKey(long);
	bool IsActionBranchKey(long);
	const CharaDamageSetting::Setting * pDamageReaction; // 0x310
	void SetDamageReaction(const CharaDamageSetting::Setting *);
	void ResetDamageReaction();
	bool IsDamageReaction();
	bool bInvalidHitCheck; // 0x318
	void SetInvalidHitCheck();
	bool IsInvalidHitCheck();
	void RequestPositionX(float);
	void RequestPositionY(float);
	void RequestPositionTargetOffset(float, float);
	void RequestPositionAtkOffset(Actor &, const CharaAttackData::HitOffsetData &);
	void CancelRequestPosition();
	unsigned long uiInvalidAttackID; // 0x31C
	void SetInvalidAttackID(unsigned long);
	void ResetInvalidAttackID(unsigned long);
	void ResetInvalidAttackID();
	bool IsInvalidAttackID(unsigned long);
	bool bUseZOffset; // 0x320
	void SetUseZOffset(bool);
	bool IsUseZOffset();
	float GetBaseAnimeAlpha();
	float GetBodyPushRate();
	bool IsStageWallHit();
	bool IsStageLeftHit();
	bool IsStageRightHit();
	bool IsScreenWallHit();
	bool IsScreenLeftHit();
	bool IsScreenRightHit();
	bool IsWallHit();
	bool IsLeftWallHit();
	bool IsRightWallHit();
	bool IsMotionCameraInvisibleActor();
	bool IsInvisible();
	bool IsModelDraw();
	void SetExclusiveData(const CharaActionData::Exclusive &, bool);
	void SetThrowAttach(const CharaActionData::ThrowAttach &);
	void CheckShotLine();
	void CheckEffectLine();
	void SetEffectCreateData(const CharaActionData::Effect::Type::Set &);
	void SetEffectControlData(const CharaActionData::Effect::Type::Control &);
	void SetEffectAnime(const CharaActionData::EffectAnime &);
	void CheckWeaponLine();
	void CheckSettingLine();
	float GetSoundPanPosition();
	float GetSoundPanPositionEx();
	Actor & operator=(const Actor &);
};
bool Actor::IsCancel(long cancelID, long precedeFrame, long remainderFrame); // 0x14004BBE0
Actor::Actor(); // 0x1400B7EE0
void Actor::CreateInit(); // 0x1400B8060
ActionSystem * Actor::GetActionSystem(); // 0x1400B8090
bool Actor::IsDataExist(); // 0x1400B80A0
const CharaActionData::ActionLineFrame * Actor::GetKeyFrame(CharaActionData::LINE_ID::ID lineID, const long ciGetIndex); // 0x1400B80C0
void Actor::SetPositionX(float posX); // 0x1400B80F0
void Actor::SetPositionY(float posY); // 0x1400B8110
void Actor::SetPositionZ(float posZ); // 0x1400B8130
void Actor::SetPosition(OGLVec3 & pos); // 0x1400B8150
bool Actor::IsAngleChangePostureCalc(); // 0x1400B8180
bool Actor::IsTurnChange(); // 0x1400B8190
bool Actor::IsActionNewFrame(); // 0x1400B81A0
bool Actor::IsIgnoreSystemPlayRate(); // 0x1400B81B0
void Actor::SetIgnoreSystemPlayRate(bool flag); // 0x1400B81C0
bool Actor::IsHitStopFreeze(); // 0x1400B81D0
bool Actor::IsActionDataChanged(); // 0x1400B81E0
long Actor::GetFounderPlayerID(); // 0x1400B81F0
bool Actor::IsOptionAsset(); // 0x1400B8200
void Actor::SetOptionAsset(bool flag); // 0x1400B8210
long Actor::GetAssetID(); // 0x1400B8220
Actor::SYSTEM_STAT Actor::GetSystemStat(); // 0x1400B8230
bool Actor::IsActorInit(); // 0x1400B8240
void Actor::ActorActivate(); // 0x1400B8250
bool Actor::IsActorAlive(); // 0x1400B8260
void Actor::ActorDie(); // 0x1400B8270
bool Actor::IsActorDead(); // 0x1400B8280
class std::bitset<128>
{
	typedef unsigned long long _Ty;
	class reference;
public:
	static void _Validate(unsigned long long);
	bool _Subscript(unsigned long long);
	std::bitset<128>::reference operator[](unsigned long long);
	bool operator[](unsigned long long);
	bitset<128>(unsigned long long);
	bitset<128>();
	static const bool _Need_mask; // 0xFFFFFFFFFFFFFFFF
	static const unsigned long long _Mask; // 0xFFFFFFFFFFFFFFFF
	std::bitset<128> & operator&=(const std::bitset<128> &);
	std::bitset<128> & operator|=(const std::bitset<128> &);
	std::bitset<128> & operator^=(const std::bitset<128> &);
	std::bitset<128> & operator<<=(unsigned long long);
	std::bitset<128> & operator>>=(unsigned long long);
	std::bitset<128> & set(unsigned long long, bool);
	std::bitset<128> & set();
	std::bitset<128> & reset(unsigned long long);
	std::bitset<128> & reset();
	operator~();
	std::bitset<128> & flip(unsigned long long);
	std::bitset<128> & flip();
	unsigned long to_ulong();
	unsigned long long to_ullong();
	unsigned long long count();
	unsigned long long size();
	unsigned long long hash();
	bool operator==(const std::bitset<128> &);
	bool operator!=(const std::bitset<128> &);
	bool test(unsigned long long);
	bool any();
	bool none();
	bool all();
	std::bitset<128> operator<<(unsigned long long);
	std::bitset<128> operator>>(unsigned long long);
	unsigned long long _Getword(unsigned long long);
	enum <unnamed-enum-_Bitsperword> : long long
	{
		_Bitsperword = 64,
		_Words = 1,
	};
private:
	void _Tidy(unsigned long long);
	void _Trim();
	void _Trim_if(std::integral_constant<bool,0>);
	void _Trim_if(std::integral_constant<bool,1>);
	void _Xinv();
	void _Xoflo();
	void _Xran();
	unsigned long long _Array[2]; // 0x0
};
struct Actor::BRANCH_KEY
{
	enum ID
	{
		NONE = 0,
		FLAG1 = 1,
		FLAG2 = 2,
		FLAG3 = 3,
		FLAG4 = 4,
		FLAG_ID_MAX = 4,
	};
};
void Actor::SetInvalidHitCheck(); // 0x1400B82A0
bool Actor::IsInvalidHitCheck(); // 0x1400B82B0
void Actor::CancelRequestPosition(); // 0x1400B82C0
void Actor::SetInvalidAttackID(unsigned long id); // 0x1400B82D0
void Actor::ResetInvalidAttackID(); // 0x1400B82E0
void Actor::ResetInvalidAttackID(unsigned long id); // 0x1400B82F0
bool Actor::IsInvalidAttackID(unsigned long id); // 0x1400B8300
void Actor::SetUseZOffset(bool flag); // 0x1400B8310
float Actor::GetBaseAnimeAlpha(); // 0x1400B8320
float Actor::GetBodyPushRate(); // 0x1400B8340
bool Actor::IsStageWallHit(); // 0x1400B8350
bool Actor::IsScreenWallHit(); // 0x1400B8390
bool Actor::IsWallHit(); // 0x1400B83D0
bool Actor::IsLeftWallHit(); // 0x1400B8410
bool Actor::IsRightWallHit(); // 0x1400B8450
MaterialShowControl::~MaterialShowControl(); // 0x14002E7C0