#pragma once

class ActorChara :
	ActorCharaBase,
	CommandEventListener
{
protected:
	bool _isLandAtkEnable(long, CharaActionData::CANCEL_SKILL::ID, long, long);
	bool _isJumpAtkEnable(long, CharaActionData::CANCEL_SKILL::ID, long, long);
	bool _isCommandReadyStat(long);
	bool _isGuardInputStat(long, bool);
	bool _isDashCancelEnable();
	bool _commonCommandCheck(long, const CommandData::Setting &, long);
	bool _charaCommandCheck(long, long, const CommandData::Setting &, long);
	void _autoEffectSet();
	CharaBone::NAME_INDEX _getThrowAttachBoneID(long);
	virtual bool _branchIsShotAttackHitOrGuard(float);
	virtual bool _branchIsShotAttackHit(float);
	virtual bool _branchIsShotAttackGuard(float);
	virtual bool _branchIsShotFlag1(float);
	virtual bool _branchIsShotFlag2(float);
	virtual bool _branchIsShotFlag3(float);
	virtual bool _branchIsShotFlag4(float);
	virtual bool _branchIsShotAlive(float);
	virtual bool _branchIsShotNotAlive(float);
	virtual bool _branchIsCommandCountOver(float);
	virtual bool _branchIsCommandCountUnder(float);
	enum CANCEL_BONUS_TYPE
	{
		NONE = 0,
		SUPER = 1,
		ADVANCED = 2,
		CLIMAX = 3,
	};
	ActorChara::CANCEL_BONUS_TYPE cancelBonusType; // 0x390
	unsigned long uiCancelBonusFlag; // 0x394
	void _cancelBonusCheck();
	bool _checkCancelTerm(long);
	long _getCancelHitStopRemainderFrame(long);
	long _getCancelRemainderFrame();
	bool _checkCancelRemainderFrame(long, long, long);
	void CheckUseZOffset();
	void CommonActionRequestDuringHitStop();
	enum <unnamed-enum-COMMAND_SUCCESS_DATA_ARRAY_MAX>
	{
		COMMAND_SUCCESS_DATA_ARRAY_MAX = 256,
		JUST_GUARD_ENABLE_FRAME = 8,
		JUST_GUARD_INVALID_FRAME = 30,
		GC_EVADE_CANCEL_FRAME = 6,
		GC_BLOW_ATK_CANCEL_FRAME = 8,
		GUARD_POWER_RECOVER_WAIT_FRAME = 60,
		STUN_RECOVER_WAIT_FRAME = 120,
		DASH_REMAIN_FRAME = 12,
		EXTRA_EFFECT_DATA_MAX = 5,
		EX_EFFECT_LOOP_COUNT = 3,
		EX_EFFECT_FRAME_MAX = 3,
		EX_EFFECT_FADE_FRAME = 3,
		EX_EFFECT_LAST_FADE_FRAME = 10,
		CLIMAX_MODE_EFFECT_LOOP_FRAME = 60,
		POISON_EFFECT_LOOP_FRAME = 90,
	};
	struct ACTOR_STATUS;
	struct COMMAND_DATA_TAG;
	struct SYSTEM_FLAG;
public:
	static const char * ActorStatusStr[67]; // 0xFFFFFFFFFFFFFFFF
	const char * GetStatStr(bool);
	ActorChara(const ActorChara &);
	ActorChara();
	virtual ~ActorChara();
	virtual void CreateInit();
	virtual void Dispose();
	virtual Actor::ACTOR_TYPE GetActorType();
	ActorChara * GetTargetActor();
	void ParamInit(const CharaDataUnify *, const CharaDataUnify *, InputKeyCheck *);
	virtual void ActionParamInit();
	virtual void PrevDataSet();
	virtual void PreUpdate();
	virtual void BecomUpdate();
	virtual void MainUpdate();
	virtual void LateUpdate();
	virtual void Draw();
	virtual void UpdatePosition();
	virtual void UpdateMotionMove();
	virtual void UpdateFaceAngle();
	virtual void UpdatePartsMotion(float);
	virtual bool IsCancel(long, long, long);
	virtual void BranchCheck();
	virtual void ActionFlagCheck();
	virtual void ActionEtcSet(const CharaActionData::Etc &);
	virtual void ActionChanged();
	virtual void StateChanged();
	virtual bool IsLanding();
	virtual bool IsBlackStop();
	virtual void CancelBlackout();
	virtual OGLVec3 GetCenterPosition();
	virtual OGLVec3 GetBindCenterPosition();
	virtual bool IsMotionCameraInvisibleActor();
	virtual bool IsInvisible();
	virtual bool IsModelDraw();
	virtual bool IsAngleChangePostureCalc();
	virtual void RecvCommandEvent(long, long, const CommandData::Setting &, long, long);
	void CommonActionRequest();
	void CommandActionRequest();
	void DefaultBranchCheck();
	virtual void ActionChangeReqBase(const long, const long, const bool);
	virtual void SetShotFireData(const CharaActionData::Shot::Type::Fire &);
	virtual void SetEffectCreateData(const CharaActionData::Effect::Type::Set &);
	virtual void SetEyeControlData(const CharaActionData::Setting::Type::EyeControl &);
	virtual void SetHeadControlData(const CharaActionData::Setting::Type::HeadControl &);
	virtual void SetTalkSettingData(const CharaActionData::Setting::Type::Talk &);
	virtual void SetSpecialEffectSettingData(const CharaActionData::Setting::Type::SpEffect &);
	virtual void SetCharaOffsetData(const CharaActionData::Setting::Type::CharaOffset &);
	virtual void SetExclusiveData(const CharaActionData::Exclusive &, bool);
	virtual void SetThrowAttach(const CharaActionData::ThrowAttach &);
	void ResetThrowAttach(bool);
	long GetHitBackEndFrame(long, bool);
	long GetActionEndFrame(long, bool, bool);
	long GetJumpState(bool);
	bool IsReadyFlag();
	virtual bool IsReady();
	bool IsValidCommandCheck();
	bool IsValidDerivedCommandCheck();
	bool IsStand();
	bool IsCrouch();
	bool IsAir();
	bool IsLandAttack();
	bool IsAirAttack();
	bool IsSkillStatus();
	bool IsDash(bool);
	bool IsFrontJump();
	bool IsVerticalJump();
	bool IsBackJump();
	bool IsJump();
	virtual bool IsStageWallHit();
	virtual bool IsStageLeftHit();
	virtual bool IsStageRightHit();
	virtual bool IsScreenWallHit();
	virtual bool IsScreenLeftHit();
	virtual bool IsScreenRightHit();
	virtual bool IsWallHit();
	void SetTargetWallHit(ActorChara &);
	virtual float GetBodyPushRate();
	virtual bool IsLeftWallHit();
	virtual bool IsRightWallHit();
	virtual bool IsWallBack();
	bool IsReflectWallBack();
	void SetReflectWallBackOnce();
	bool IsDisableReflectWallBack();
	bool IsReflectLandWallBack();
	virtual bool IsPreferenceWall();
	void ResetWallHit();
	float GetWallBackDistance();
	float GetWallFrontDistance();
	float GetStageCornerBackDistance();
	float GetStageCornerFrontDistance();
	bool IsGuardInputOK();
	bool IsInputStandGuard();
	bool IsInputCrouchGuard();
	bool IsInputGuard();
	bool IsJustGuard();
	void ResetGuardInput();
	bool IsGuardValid();
	bool IsGuard();
	bool IsGuardCrash();
	bool IsBasicDamaged();
	bool IsShotDamaged();
	bool IsAirAtkDamage();
	bool IsGuardDamaged();
	bool IsCounterDamaged();
	bool IsWallHitDamage();
	bool IsGroundQuakeDamage();
	bool IsAttackThrow();
	bool IsThrow();
	ActorChara * GetThrowLockTarget();
	bool IsThrowLock();
	bool IsNotEvade();
	bool IsEvade();
	bool IsDownEvadeState();
	bool IsValidEvadeCommand();
	bool IsDamageLandState();
	bool IsStandUpState();
	bool IsStun();
	bool IsStunDamaged();
	bool IsCheap();
	bool IsKO();
	bool IsGotoNextRound();
	bool IsDamaged();
	bool IsLandDamaged();
	bool IsAirDamaged();
	bool IsNokezori();
	bool IsKuzure();
	bool IsAirThrowDamaged();
	bool IsLandThrowDamaged();
	bool IsThrowDamaged();
	bool IsBound();
	bool IsDown();
	bool IsPursuitDamaged();
	bool IsInvalidShotAtk();
	bool IsInvalidAttackHitState();
	bool IsComboSoundException();
	bool IsClimaxSuperMove();
	bool IsClimaxMode();
	bool IsClimaxModeCombo();
	void ResetCommandFlags();
	bool IsGuardCancelEvade();
	bool IsGuardCancelEvadeState();
	bool IsGuardCancelBlowAtk();
	bool IsThrowEscape();
	bool IsThrowEscapeAction();
	bool IsValidThrowEscapeCommand();
	bool IsNormalThrowInputAction();
	bool IsInviteCounter();
	long GetDamageAttr();
	bool IsValidDamageEffect();
	void SetValidDamageEffect();
	void SetReversalChance();
	bool IsReversalChance();
	void SetReversalMove();
	void CheckReversalTiming();
	bool IsReversalMove();
	bool IsSuperCancel();
	bool IsAdvancedCancel();
	bool IsClimaxCancel();
	bool IsCommandFromClimax();
	bool IsAdvancedCancelActionPlay();
	void SetMamahahaBusy(bool);
	bool IsMamahahaBusy();
	void SetReady(bool, bool);
	void SetReadyFlags();
	void SetDamageActionDeclare();
	bool IsDamageActionDeclared();
	void SetGuardActionDeclare();
	void SetThrowEscapePermit();
	void ResetDamageFlags();
	void ResetStunDamageFlags();
	void SetRoundStartWaitAction();
	void SetRoundStartEntryAction();
	bool IsExistRivalDemoAction(long);
	void SetRivalDemoAction(long);
	bool IsRivalDemoActionEnd();
	bool IsRoundStartDemoState();
	bool IsExistRivalRoundStartAction(long);
	bool IsExistRivalRoundWinAction(long);
	void SetRoundEndAction();
	bool IsRoundEndState();
	void SetSpecialWinDirection();
	bool IsSpecialWinDirection();
	void SetResultDemoAction();
	void SetKOVoice(bool, bool);
	void SetStandUpVoice();
	void SetPlayedFinishHitSound();
	bool IsPlayedFinishHitSound();
	virtual void SetupAction(bool, long);
	virtual bool IsSetupState();
	long GetVital();
	long GetVitalPercent();
	long GetExPower();
	long GetClimaxTime();
	long GetGuardPower();
	long GetStunPower();
	long GetMaxVital();
	long GetMaxGuardPower();
	long GetMaxStunPower();
	long GetMaxExPower();
	long GetMaxClimaxTime();
	long GetStunRecoverMax();
	long GetGuardRecoverMax();
	long GetDrinkCount();
	bool IsVitalMax();
	void SetVital(Fix32);
	void SetExPower(Fix32);
	void SetMaxExPower(long);
	void SetStartExPower(Fix32);
	void ResetExPower();
	void SetMaxClimaxTime(long);
	void SetMaxClimaxTimeStockBase(long);
	void SetMaxGaugeStockExtend(long);
	void SetClimaxMode(bool);
	void EndClimaxMode();
	void SetStunWaitCount();
	void SetStunRecoverMaxPer(long);
	void ResetStunPower();
	void SetGuardPowerWaitCount();
	void SetGuardRecoverMaxPer(long);
	void ResetGuardPower();
	void AddExPower(long, bool);
	void AddClimaxTime(float);
	void AddClimaxTime(long);
	void SetVitalDamage(long);
	void SetStunPowerDamage(long);
	void SetGuardPowerDamage(long);
	void SetReserveRecoverValue(long);
	void ReserveRecoverCalc();
	void SetPoisonDamage(const CharaAttackData::PoisonDamageData &);
	void ResetPoisonDamage();
	bool IsPoisonDamaged();
	void PoisonDamageCalc();
	bool IsInvalidStunStatus();
	bool IsInvalidGuardCrashStatus();
	CommandCheck & GetCommonCommandCheck();
	CommandCheck & GetCharaCommandCheck();
	long GetInputKey(unsigned long);
	long GetInputTrigger(unsigned long);
	long GetInputRelease(unsigned long);
	void SetUnlimitedPadVoice(bool);
	void SetClimaxCommandDebug(bool);
	bool IsNextStatCommandCheck();
	CommandCheck cmdCheck[2]; // 0x398
	std::bitset<62> systemFlag; // 0x448
	bool bNextStatCommandCheck; // 0x450
	Fix32 xVital; // 0x454
	Fix32 xVitalPrev; // 0x458
	Fix32 xExPower; // 0x45C
	Fix32 xExPowerPrev; // 0x460
	Fix32 xMaxExPower; // 0x464
	Fix32 xStartExPower; // 0x468
	Fix32 xClimaxTime; // 0x46C
	Fix32 xClimaxTimePrev; // 0x470
	Fix32 xMaxClimaxTime; // 0x474
	Fix32 xGuardPower; // 0x478
	Fix32 xGuardRecoverMax; // 0x47C
	Fix32 xGuardPowerPrev; // 0x480
	Fix32 xStunPower; // 0x484
	Fix32 xStunRecoverMax; // 0x488
	Fix32 xStunPowerPrev; // 0x48C
	struct ThrowAttach;
	ActorChara::ThrowAttach throwAttach; // 0x490
	struct DamageMagnification;
	ActorChara::DamageMagnification damageMagnification; // 0x4AC
	struct DamageInfo;
	ActorChara::DamageInfo damageInfo; // 0x4C4
	ActorChara::DamageInfo * GetTargetDamageInfo();
	Fix32 xPursuitFrame; // 0x518
	Fix32 xDownFrame; // 0x51C
	Fix32 xHitBackFrame; // 0x520
	Fix32 xStunWaitCount; // 0x524
	Fix32 xStunDamageFrame; // 0x528
	Fix32 xStunRapidFrame; // 0x52C
	Fix32 xGuardPowerWaitCount; // 0x530
	Fix32 xPerfectMutekiCount; // 0x534
	Fix32 xThrowMutekiCount; // 0x538
	Fix32 xNormalThrowDisableCount; // 0x53C
	Fix32 xDashRemainCount; // 0x540
	long iExEffectLoopCount; // 0x544
	Fix32 xExEffectFrame; // 0x548
	Fix32 xExEffectFadeFrame; // 0x54C
	Fix32 xClimaxEffectFrame; // 0x550
	Fix32 xPoisonEffectFrame; // 0x554
	long iGuardInputCount; // 0x558
	long iDamageSkillType; // 0x55C
	CharaAttackData::DamageReserveData damageReserve; // 0x560
	long iNextDamageID; // 0x568
	long iHitBackAngle; // 0x56C
	long iDamageAttr; // 0x570
	struct ALIVE_SHOT_ID;
	std::bitset<13> bsAliveShotID; // 0x574
	std::bitset<13> bsAttackHitShotID; // 0x578
	std::bitset<13> bsAttackGuardShotID; // 0x57C
	std::bitset<13> bsBranchFlgShotID[4]; // 0x580
	void SetAliveShot(const ActorShot *);
	void SetAttackHitShot(const ActorShot *);
	void SetAttackGuardShot(const ActorShot *);
	void SetBranchFlgShot(const ActorShot *, long);
	struct CommandInfo;
	ActorChara::CommandInfo cmdInfo; // 0x590
	struct HeadControl;
	ActorChara::HeadControl headCtrl; // 0xE08
	struct EyeControl;
	ActorChara::EyeControl eyeCtrl; // 0xE28
	void SetEyeControlMode(bool);
	void SetEyeAngle(bool, float, float);
	void AddEyeAngle(bool, float, float);
	long iRivalTalkNextActionNo; // 0xE80
	struct ExtraEffectData;
	ActorChara::ExtraEffectData extraEffectData; // 0xE84
	long iBlurEffectCount; // 0xF08
	long iBlurFrameFlag; // 0xF0C
	long GetBlurEffectCount();
	long GetBlurFrameFlag();
	struct CharaUniqueParam;
	ActorChara::CharaUniqueParam charaUniqueParam; // 0xF10
	struct CharaOffsetParam;
	ActorChara::CharaOffsetParam charaOffsetParam; // 0xF18
	long iExtraDamageValue; // 0xF3C
	long GetExtraDamage();
	void ResetExtraDamage();
	const CpuSequenceData * pCpuSeqData; // 0xF40
	BattleSystem::ComboMissionAttackEventListener * pComboMissionAtkEvent; // 0xF48
	void SetComboMissionAtkEvent(BattleSystem::ComboMissionAttackEventListener *);
	void CallComboMissionAtkEvent(long, bool);
	struct TRAINING_FLAG;
	std::bitset<21> bsTrainingFlag; // 0xF50
	void SetVitalRecover(bool);
	void SetExPowerRecover(bool);
	void SetDisableExPowerAdd(bool);
	void SetAllGuardMode(bool);
	void SetOneHitGuardMode(bool);
	void SetInvalidGuardChange(bool);
	bool IsInvalidGuardChange();
	void SetAllJustGuard(bool);
	bool IsAllJustGuardMode();
	bool IsAutoGuardOK();
	void SetNoStun(bool);
	bool IsNoStunMode();
	void SetGuardCrashMode(bool);
	bool IsGuardCrashMode();
	void SetNoGuardCrash(bool);
	bool IsNoGuardCrashMode();
	void SetDisableKO(bool);
	bool IsDisableKO();
	void SetOneAtkKO(bool);
	bool IsOneAtkKO();
	void SetOneHitStun(bool);
	bool IsOneHitStun();
	void SetAlwaysCounter(bool);
	bool IsAlwaysCounter();
	void SetCheckAdvantageFrame(bool);
	bool IsCheckAdvantageFrame();
	void SetRandomGuard(bool);
	bool IsRandomGuardValid();
	void SetRandomCounter(bool);
	bool IsRandomCounterValid();
	void SetAutoUkemiMode(bool);
	bool IsAutoUkemiMode();
	void SetInfiniteClimaxMode(bool);
	bool IsInfiniteClimaxMode();
	void SetReversalRecordMode();
	bool IsReversalRecordMode();
	void CheckReversalRecordTiming();
	bool IsEnableReversalKeyPlay();
};
struct ActorChara::ACTOR_STATUS
{
	enum ID
	{
		STAND = 0,
		CROUCH = 1,
		FRONT_MOVE = 2,
		BACK_MOVE = 3,
		DASH = 4,
		BACK_STEP = 5,
		FJUMP_INIT = 6,
		BJUMP_INIT = 7,
		FJUMP_HI_INIT = 8,
		BJUMP_HI_INIT = 9,
		JUMP_INIT = 10,
		FJUMP = 11,
		BJUMP = 12,
		JUMP = 13,
		FJUMP_LOW = 14,
		BJUMP_LOW = 15,
		JUMP_LOW = 16,
		FJUMP_MID = 17,
		BJUMP_MID = 18,
		FJUMP_HI = 19,
		BJUMP_HI = 20,
		JUMP_LAND = 21,
		JUMP_ATK_LAND = 22,
		STAND_TURN = 23,
		CROUCH_TURN = 24,
		GUARD_START = 25,
		GUARD_NOKEZORI = 26,
		FRONT_EVADE = 27,
		BACK_EVADE = 28,
		GC_FRONT_EVADE = 29,
		GC_BACK_EVADE = 30,
		GC_BLOW_ATK = 31,
		DOWN_EVADE = 32,
		THROW_ESC_ATK = 33,
		THROW_ESC_DEF = 34,
		CLIMAX_MODE = 35,
		SKILL = 36,
		SKILL_SP = 37,
		SKILL_EX = 38,
		SKILL_SUPER = 39,
		SKILL_MAX_SUPER = 40,
		SKILL_CLIMAX = 41,
		DAMAGE_NOKEZORI = 42,
		DAMAGE_AIR = 43,
		DAMAGE_AIR_RECOVER = 44,
		DAMAGE_KUZURE = 45,
		DAMAGE_BOUND = 46,
		DAMAGE_DOWN = 47,
		DAMAGE_STAND_UP = 48,
		DAMAGE_THROW = 49,
		DAMAGE_STUN = 50,
		DAMAGE_STUN_UP = 51,
		DAMAGE_WALL_AIR = 52,
		DAMAGE_WALL_FALL = 53,
		DAMAGE_LAND = 54,
		GUARD_CRASH = 55,
		GUARD_CRASH_RET = 56,
		DAMAGE_CHEAP_KO = 57,
		DAMAGE_WEAK_KO = 58,
		DAMAGE_KO = 59,
		DAMAGE_SPECIAL_KO = 60,
		ROUND_START = 61,
		RIVAL_DEMO = 62,
		ROUND_END = 63,
		SETUP = 64,
		RESULT_DEMO = 65,
		ETC = 66,
		ACTOR_STATUS_MAX = 67,
	};
};
struct ActorChara::COMMAND_DATA_TAG
{
	enum ID
	{
		CMDTAG_COMMON = 0,
		CMDTAG_CHARA = 1,
		COMMAND_DATA_TAG_MAX = 2,
	};
};
struct ActorChara::SYSTEM_FLAG
{
	enum ID
	{
		STAGE_LEFT_HIT = 0,
		STAGE_RIGHT_HIT = 1,
		SCREEN_LEFT_HIT = 2,
		SCREEN_RIGHT_HIT = 3,
		GUARD_INPUT_OK = 4,
		INPUT_STAND_GUARD = 5,
		INPUT_CROUCH_GUARD = 6,
		IS_GUARD_VALID = 7,
		PERMIT_GUARD_PAUSE = 8,
		IS_GUARD_CRASH = 9,
		IS_DAMAGE = 10,
		IS_SHOT_DAMAGE = 11,
		IS_AIR_ATK_DAMAGE = 12,
		IS_GUARD_DAMAGE = 13,
		IS_COUNTER_DAMAGE = 14,
		IS_WALL_HIT_DAMAGE = 15,
		IS_GROUND_QUAKE_DAMAGE = 16,
		IS_THROW = 17,
		INVALID_SHOT_ATK = 18,
		NOT_EVADE = 19,
		IS_EVADE = 20,
		IS_STUN = 21,
		IS_STUN_DAMAGE = 22,
		IS_CHEAP = 23,
		IS_KO = 24,
		IS_HIZA_KO = 25,
		PLAYED_KO_VOICE = 26,
		PLAYED_FINISH_HIT_SOUND = 27,
		PLAYED_PAD_VOICE = 28,
		UNLIMITED_PAD_VOICE = 29,
		IS_CLIMAX = 30,
		IS_GC_EVADE = 31,
		IS_GC_BLOW_ATK = 32,
		IS_GC_BLOW_ATK_VS_AIR = 33,
		IS_JUST_GUARD = 34,
		PERMIT_THROW_ESCAPE = 35,
		IS_THROW_ESCAPE = 36,
		DAMAGE_ACTION_INIT = 37,
		VALID_DAMAGE_EFFECT = 38,
		REFLECT_WALL_BACK_RESERVE = 39,
		IS_REFLECT_WALL_BACK = 40,
		REVERSAL_CHANCE = 41,
		IS_REVERSAL_MOVE = 42,
		IS_SUPER_CANCEL = 43,
		IS_ADVANCED_CANCEL = 44,
		IS_CLIMAX_CANCEL = 45,
		IS_SND_ADVANCED_CANCEL = 46,
		IS_EX_SPECIAL_MOVE = 47,
		CANCEL_BONUS_CHECK = 48,
		COMMAND_FROM_READY = 49,
		COMMAND_FROM_CLIMAX = 50,
		INVITE_COUNTER = 51,
		COMMAND_RESET = 52,
		GOTO_NEXT_ROUND = 53,
		IS_END_RIVAL_DEMO = 54,
		MAMAHAHA_BUSY = 55,
		NORMAL_THROW_INPUT_OK = 56,
		IS_NORMAL_THROW_INPUT_ACTION = 57,
		EXIST_KO_MODEL = 58,
		CHANGED_KO_MODEL = 59,
		SPECIAL_WIN_DIRECTION = 60,
		GUARD_REVERSAL = 61,
		MAX = 62,
	};
};
ActorChara::ActorChara(); // 0x1400B9760
ActorChara::~ActorChara(); // 0x1400B9900
Actor::ACTOR_TYPE ActorChara::GetActorType(); // 0x1400470F0
ActorChara * ActorChara::GetTargetActor(); // 0x1400B9990
bool ActorChara::IsAngleChangePostureCalc(); // 0x1400B99A0
bool ActorChara::IsReadyFlag(); // 0x1400B99B0
bool ActorChara::IsReady(); // 0x1400B99C0
bool ActorChara::IsFrontJump(); // 0x1400B99D0
bool ActorChara::IsVerticalJump(); // 0x1400B99F0
bool ActorChara::IsBackJump(); // 0x1400B9A10
bool ActorChara::IsJump(); // 0x1400B9A30
bool ActorChara::IsStageWallHit(); // 0x1400B9A40
bool ActorChara::IsStageLeftHit(); // 0x1400B9A60
bool ActorChara::IsStageRightHit(); // 0x1400B9A70
bool ActorChara::IsScreenWallHit(); // 0x1400B9A80
bool ActorChara::IsScreenLeftHit(); // 0x1400B9AA0
bool ActorChara::IsScreenRightHit(); // 0x1400B9AB0
bool ActorChara::IsWallHit(); // 0x1400B9AC0
void ActorChara::SetTargetWallHit(ActorChara & target); // 0x1400B9AF0
bool ActorChara::IsLeftWallHit(); // 0x1400B9EC0
bool ActorChara::IsRightWallHit(); // 0x1400B9EE0
bool ActorChara::IsWallBack(); // 0x1400B9F00
bool ActorChara::IsReflectWallBack(); // 0x1400B9F10
void ActorChara::SetReflectWallBackOnce(); // 0x1400B9F40
bool ActorChara::IsDisableReflectWallBack(); // 0x1400B9FA0
bool ActorChara::IsReflectLandWallBack(); // 0x1400B9FD0
void ActorChara::ResetWallHit(); // 0x1400B9FE0
bool ActorChara::IsGuardInputOK(); // 0x1400BA110
bool ActorChara::IsInputStandGuard(); // 0x1400BA130
bool ActorChara::IsInputCrouchGuard(); // 0x1400BA140
bool ActorChara::IsInputGuard(); // 0x1400BA150
bool ActorChara::IsJustGuard(); // 0x1400BA190
void ActorChara::ResetGuardInput(); // 0x1400BA1A0
bool ActorChara::IsGuardValid(); // 0x1400BA2E0
bool ActorChara::IsGuardCrash(); // 0x1400BA2F0
bool ActorChara::IsBasicDamaged(); // 0x1400BA300
bool ActorChara::IsShotDamaged(); // 0x1400BA310
bool ActorChara::IsAirAtkDamage(); // 0x1400BA320
bool ActorChara::IsGuardDamaged(); // 0x1400BA330
bool ActorChara::IsCounterDamaged(); // 0x1400BA340
bool ActorChara::IsWallHitDamage(); // 0x1400BA350
bool ActorChara::IsGroundQuakeDamage(); // 0x1400BA360
bool ActorChara::IsThrow(); // 0x1400BA370
bool ActorChara::IsNotEvade(); // 0x1400BA380
bool ActorChara::IsEvade(); // 0x1400BA390
bool ActorChara::IsDownEvadeState(); // 0x1400BA3A0
bool ActorChara::IsDamageLandState(); // 0x1400BA3B0
bool ActorChara::IsStandUpState(); // 0x1400BA3C0
bool ActorChara::IsStun(); // 0x1400BA3E0
bool ActorChara::IsStunDamaged(); // 0x1400BA3F0
bool ActorChara::IsCheap(); // 0x1400BA400
bool ActorChara::IsKO(); // 0x1400BA410
bool ActorChara::IsGotoNextRound(); // 0x1400BA420
bool ActorChara::IsDamaged(); // 0x1400BA430
bool ActorChara::IsPursuitDamaged(); // 0x1400BA4A0
bool ActorChara::IsInvalidShotAtk(); // 0x1400BA500
bool ActorChara::IsInvalidAttackHitState(); // 0x1400BA510
bool ActorChara::IsClimaxSuperMove(); // 0x1400BA570
bool ActorChara::IsGuardCancelEvade(); // 0x1400BA580
bool ActorChara::IsGuardCancelEvadeState(); // 0x1400BA590
bool ActorChara::IsGuardCancelBlowAtk(); // 0x1400BA5A0
bool ActorChara::IsThrowEscape(); // 0x1400BA5B0
bool ActorChara::IsThrowEscapeAction(); // 0x1400BA5C0
bool ActorChara::IsNormalThrowInputAction(); // 0x1400BA5D0
bool ActorChara::IsInviteCounter(); // 0x1400BA5E0
long ActorChara::GetDamageAttr(); // 0x1400BA5F0
bool ActorChara::IsValidDamageEffect(); // 0x1400BA620
void ActorChara::SetValidDamageEffect(); // 0x1400BA630
void ActorChara::SetReversalChance(); // 0x1400BA690
bool ActorChara::IsReversalChance(); // 0x1400BA6F0
void ActorChara::SetReversalMove(); // 0x1400BA700
bool ActorChara::IsReversalMove(); // 0x1400BA760
bool ActorChara::IsSuperCancel(); // 0x1400BA770
bool ActorChara::IsAdvancedCancel(); // 0x1400BA780
bool ActorChara::IsClimaxCancel(); // 0x1400BA790
bool ActorChara::IsCommandFromClimax(); // 0x1400BA7A0
bool ActorChara::IsAdvancedCancelActionPlay(); // 0x1400BA7B0
void ActorChara::SetMamahahaBusy(bool flag); // 0x1400BA7C0
bool ActorChara::IsMamahahaBusy(); // 0x1400BA830
bool ActorChara::IsDamageActionDeclared(); // 0x1400BA840
bool ActorChara::IsRivalDemoActionEnd(); // 0x1400BA850
bool ActorChara::IsRoundStartDemoState(); // 0x1400BA860
bool ActorChara::IsRoundEndState(); // 0x1400BA870
void ActorChara::SetSpecialWinDirection(); // 0x1400BA880
bool ActorChara::IsSpecialWinDirection(); // 0x1400BA8E0
void ActorChara::SetPlayedFinishHitSound(); // 0x1400BA8F0
bool ActorChara::IsPlayedFinishHitSound(); // 0x1400BA950
bool ActorChara::IsSetupState(); // 0x1400BA960
long ActorChara::GetVital(); // 0x1400BA970
long ActorChara::GetExPower(); // 0x1400BA980
long ActorChara::GetClimaxTime(); // 0x1400BA990
long ActorChara::GetGuardPower(); // 0x1400BA9A0
long ActorChara::GetStunPower(); // 0x1400BA9B0
long ActorChara::GetMaxExPower(); // 0x1400BA9C0
long ActorChara::GetMaxClimaxTime(); // 0x1400BA9D0
bool ActorChara::IsVitalMax(); // 0x1400BA9E0
void ActorChara::SetMaxExPower(long gaugeCount); // 0x1400BAA10
void ActorChara::SetMaxClimaxTime(long maxTime); // 0x1400BAA40
void ActorChara::SetStunWaitCount(); // 0x1400BAB00
void ActorChara::SetGuardPowerWaitCount(); // 0x1400BAB10
bool ActorChara::IsPoisonDamaged(); // 0x1400BAB20
bool ActorChara::IsInvalidStunStatus(); // 0x1400BAB30
bool ActorChara::IsInvalidGuardCrashStatus(); // 0x1400BAB50
CommandCheck & ActorChara::GetCommonCommandCheck(); // 0x1400BAB70
CommandCheck & ActorChara::GetCharaCommandCheck(); // 0x1400BAB80
long ActorChara::GetInputKey(unsigned long backFrame); // 0x1400BAB90
long ActorChara::GetInputTrigger(unsigned long backFrame); // 0x1400BABE0
long ActorChara::GetInputRelease(unsigned long backFrame); // 0x1400BABF0
void ActorChara::SetUnlimitedPadVoice(bool flag); // 0x1400BAC00
void ActorChara::SetClimaxCommandDebug(bool flag); // 0x1400BAC70
bool ActorChara::IsNextStatCommandCheck(); // 0x1400BAC80
class std::bitset<62>
{
	typedef unsigned long long _Ty;
	class reference;
public:
	static void _Validate(unsigned long long);
	bool _Subscript(unsigned long long);
	std::bitset<62>::reference operator[](unsigned long long);
	bool operator[](unsigned long long);
	bitset<62>(unsigned long long);
	bitset<62>();
	static const bool _Need_mask; // 0xFFFFFFFFFFFFFFFF
	static const unsigned long long _Mask; // 0xFFFFFFFFFFFFFFFF
	std::bitset<62> & operator&=(const std::bitset<62> &);
	std::bitset<62> & operator|=(const std::bitset<62> &);
	std::bitset<62> & operator^=(const std::bitset<62> &);
	std::bitset<62> & operator<<=(unsigned long long);
	std::bitset<62> & operator>>=(unsigned long long);
	std::bitset<62> & set(unsigned long long, bool);
	std::bitset<62> & set();
	std::bitset<62> & reset(unsigned long long);
	std::bitset<62> & reset();
	operator~();
	std::bitset<62> & flip(unsigned long long);
	std::bitset<62> & flip();
	unsigned long to_ulong();
	unsigned long long to_ullong();
	unsigned long long count();
	unsigned long long size();
	unsigned long long hash();
	bool operator==(const std::bitset<62> &);
	bool operator!=(const std::bitset<62> &);
	bool test(unsigned long long);
	bool any();
	bool none();
	bool all();
	std::bitset<62> operator<<(unsigned long long);
	std::bitset<62> operator>>(unsigned long long);
	unsigned long long _Getword(unsigned long long);
	enum <unnamed-enum-_Bitsperword> : long long
	{
		_Bitsperword = 64,
		_Words = 0,
	};
private:
	void _Tidy(unsigned long long);
	void _Trim();
	void _Trim_if(std::integral_constant<bool,0>);
	void _Trim_if(std::integral_constant<bool,1>);
	void _Xinv();
	void _Xoflo();
	void _Xran();
	unsigned long long _Array[1]; // 0x0
};
struct ActorChara::ThrowAttach :
	CharaActionData::ThrowAttach
{
	bool bNextReset; // 0xC
	CharaActionData::ThrowAttach reserveAttach; // 0x10
	void Reset();
	void ResetReserve();
	bool IsThrowAttached();
	bool IsReserved();
};
struct ActorChara::DamageMagnification
{
	float fAtkDamage; // 0x0
	float fAtkStun; // 0x4
	float fAtkGuard; // 0x8
	float fDefDamage; // 0xC
	float fDefStun; // 0x10
	float fDefGuard; // 0x14
	void Init();
};
struct ActorChara::DamageInfo
{
	long iCombo; // 0x0
	long iMaxCombo; // 0x4
	long iSkillBonusCount; // 0x8
	long iPrevDamageSkill; // 0xC
	long iOneHitDamage; // 0x10
	long iComboDamage; // 0x14
	long iMaxComboDamage; // 0x18
	long iOneHitStunDamage; // 0x1C
	long iComboStunDamage; // 0x20
	long iMaxComboStunDamage; // 0x24
	long iComboAdjust; // 0x28
	long iNextComboAdjust; // 0x2C
	bool bEnableAdvantageFrame; // 0x30
	long iAdvantageFrame; // 0x34
	long iOneHitScore; // 0x38
	long iComboScore; // 0x3C
	long iReserveRecover; // 0x40
	CharaAttackData::PoisonDamageData poisonDamage; // 0x44
	Fix32 xPoisonIntervalFrame; // 0x4C
	bool bMaxModeComboAttack; // 0x50
	bool bMaxModeComboDamage; // 0x51
	DamageInfo();
};
struct ActorChara::ALIVE_SHOT_ID
{
	enum ID
	{
		ID_0 = 0,
		ID_1 = 1,
		ID_2 = 2,
		ID_3 = 3,
		ID_4 = 4,
		ID_5 = 5,
		ID_6 = 6,
		ID_7 = 7,
		ID_8 = 8,
		ID_9 = 9,
		ID_10 = 10,
		ID_11 = 11,
		SHOT_ID_MAX = 12,
		REFLECT = 12,
		MAX = 13,
	};
};
class std::bitset<13>
{
	typedef unsigned long _Ty;
	class reference;
public:
	static void _Validate(unsigned long long);
	bool _Subscript(unsigned long long);
	std::bitset<13>::reference operator[](unsigned long long);
	bool operator[](unsigned long long);
	bitset<13>(unsigned long long);
	bitset<13>();
	static const bool _Need_mask; // 0xFFFFFFFFFFFFFFFF
	static const unsigned long long _Mask; // 0xFFFFFFFFFFFFFFFF
	std::bitset<13> & operator&=(const std::bitset<13> &);
	std::bitset<13> & operator|=(const std::bitset<13> &);
	std::bitset<13> & operator^=(const std::bitset<13> &);
	std::bitset<13> & operator<<=(unsigned long long);
	std::bitset<13> & operator>>=(unsigned long long);
	std::bitset<13> & set(unsigned long long, bool);
	std::bitset<13> & set();
	std::bitset<13> & reset(unsigned long long);
	std::bitset<13> & reset();
	operator~();
	std::bitset<13> & flip(unsigned long long);
	std::bitset<13> & flip();
	unsigned long to_ulong();
	unsigned long long to_ullong();
	unsigned long long count();
	unsigned long long size();
	unsigned long long hash();
	bool operator==(const std::bitset<13> &);
	bool operator!=(const std::bitset<13> &);
	bool test(unsigned long long);
	bool any();
	bool none();
	bool all();
	std::bitset<13> operator<<(unsigned long long);
	std::bitset<13> operator>>(unsigned long long);
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
struct ActorChara::CommandInfo
{
	CommandInfo(ActorChara::CommandInfo &);
	CommandInfo(const ActorChara::CommandInfo &);
	CommandInfo();
	struct ConcludedData;
	ActorChara::CommandInfo::ConcludedData entry; // 0x0
	ActorChara::CommandInfo::ConcludedData hitStopReserve; // 0x10
	ActorChara::CommandInfo::ConcludedData actionReserve; // 0x20
	long iValidCount; // 0x30
	struct CommandMoveSet;
	ActorChara::CommandInfo::CommandMoveSet CommandMove; // 0x34
	struct HitStopInfo;
	RestrictRingBuffer<ActorChara::CommandInfo::HitStopInfo> hitStopInfo; // 0x40
	long iSuccessCount; // 0x70
	struct CommandSuccessData;
	ActorChara::CommandInfo::CommandSuccessData CommandSuccess[256]; // 0x74
	void Reset();
	~CommandInfo();
};
struct ActorChara::CommandInfo::ConcludedData
{
	long iPriTag; // 0x0
	long iExPri; // 0x4
	const CommandData::Setting * pCmdSet; // 0x8
	void Reset();
};
struct ActorChara::CommandInfo::CommandMoveSet
{
	long iOptionFlag; // 0x0
	float fMoveX; // 0x4
	float fMoveY; // 0x8
	void Reset();
};
struct ActorChara::CommandInfo::HitStopInfo
{
	short iActFrame; // 0x0
	short iHitStopFrame; // 0x2
};
class RestrictRingBuffer<ActorChara::CommandInfo::HitStopInfo>
{
private:
	RestrictRingBuffer<ActorChara::CommandInfo::HitStopInfo> & operator=(const RestrictRingBuffer<ActorChara::CommandInfo::HitStopInfo> &);
	unsigned long uiBufferSize; // 0x8
	unsigned long uiBufferMask; // 0xC
	unsigned long uiDataSize; // 0x10
	ActorChara::CommandInfo::HitStopInfo * pBuffer; // 0x18
	unsigned long uiBeginIndex; // 0x20
	unsigned long uiEndIndex; // 0x24
	unsigned long uiDelay; // 0x28
public:
	RestrictRingBuffer<ActorChara::CommandInfo::HitStopInfo>(const RestrictRingBuffer<ActorChara::CommandInfo::HitStopInfo> &);
	RestrictRingBuffer<ActorChara::CommandInfo::HitStopInfo>(unsigned long);
	~RestrictRingBuffer<ActorChara::CommandInfo::HitStopInfo>();
	void Clear();
	void Add(const ActorChara::CommandInfo::HitStopInfo &);
	void SetDelay(unsigned long);
	ActorChara::CommandInfo::HitStopInfo * Get(unsigned long);
	ActorChara::CommandInfo::HitStopInfo * GetRev(unsigned long);
	ActorChara::CommandInfo::HitStopInfo * GetBegin();
	ActorChara::CommandInfo::HitStopInfo * GetEnd();
	ActorChara::CommandInfo::HitStopInfo * GetDelayRev(unsigned long);
	bool IsEmpty();
	bool IsFull();
	unsigned long GetBufferSize();
	unsigned long GetDataSize();
	unsigned long GetValidDelayDataSize();
	unsigned long GetDelay();
};
struct ActorChara::CommandInfo::CommandSuccessData
{
	long tag; // 0x0
	long id; // 0x4
};
struct ActorChara::HeadControl
{
	OGLVec3 vHeadPos; // 0x0
	float fHeadAngle; // 0xC
	float fHeadAnglePrev; // 0x10
	float fHeadAngleLimitUp; // 0x14
	float fHeadAngleLimitLow; // 0x18
	long iSettingType; // 0x1C
	HeadControl(ActorChara::HeadControl &);
	HeadControl(const ActorChara::HeadControl &);
	HeadControl();
};
struct ActorChara::EyeControl
{
	OGLQuat qLEyeQuat; // 0x0
	OGLQuat qREyeQuat; // 0x10
	CharaBaseStatus::EyeLimitAngle leftEyeLimit; // 0x20
	CharaBaseStatus::EyeLimitAngle rightEyeLimit; // 0x30
	long iSettingType; // 0x40
	bool bControlMode; // 0x44
	float fLAngleX; // 0x48
	float fLAngleY; // 0x4C
	float fRAngleX; // 0x50
	float fRAngleY; // 0x54
	EyeControl();
};
void ActorChara::SetEyeControlMode(bool flag); // 0x1400BAC90
struct ActorChara::ExtraEffectData
{
	long iDataCount; // 0x0
	bool bCreated[5]; // 0x4
	CharaActionData::Effect::Type::Set effectDat[5]; // 0xC
	void Clear();
	void DeadEffectCheck(const CharaActionData::Effect::Type::Set &);
};
long ActorChara::GetBlurEffectCount(); // 0x1400BACA0
long ActorChara::GetBlurFrameFlag(); // 0x1400BACB0
struct ActorChara::CharaUniqueParam
{
	enum <unnamed-enum-GENSAI_SAKE_COUNTER_MAX>
	{
		GENSAI_SAKE_COUNTER_MAX = 10,
	};
	long iDrinkCount; // 0x0
	ActorChara::CharaUniqueParam::<unnamed-tag>::<unnamed-type-shuneiArm> shuneiArm; // 0x0
	void Init(long);
	CharaUniqueParam();
};
struct ActorChara::CharaUniqueParam::<unnamed-tag>::<unnamed-type-shuneiArm>
{
	long iSetActNo; // 0x0
	Fix32 xFadeFrame; // 0x4
	<unnamed-type-shuneiArm>();
};
struct ActorChara::CharaOffsetParam
{
	OGLVec3 vPrevOff; // 0x0
	OGLVec3 vNextOff; // 0xC
	Fix32 xNowFrame; // 0x18
	long iMaxFrame; // 0x1C
	long iCharaID; // 0x20
	void Init();
	void Update(Fix32, const long);
	void SetData(const CharaActionData::Setting::Type::CharaOffset &);
	OGLVec3 GetOffset(long);
	CharaOffsetParam(ActorChara::CharaOffsetParam &);
	CharaOffsetParam(const ActorChara::CharaOffsetParam &);
	CharaOffsetParam();
};
long ActorChara::GetExtraDamage(); // 0x1400BACC0
void ActorChara::ResetExtraDamage(); // 0x1400BACD0
void ActorChara::SetComboMissionAtkEvent(BattleSystem::ComboMissionAttackEventListener * p); // 0x1400BACE0
void ActorChara::CallComboMissionAtkEvent(long atkID, bool bOption); // 0x1400BACF0
struct ActorChara::TRAINING_FLAG
{
	enum ID
	{
		VITAL_RECOVER = 0,
		EX_POWER_RECOVER = 1,
		DISABLE_EX_POWER_ADD = 2,
		AUTO_GUARD_OK = 3,
		ALL_GUARD = 4,
		ONE_HIT_GUARD = 5,
		INVALID_GUARD_CHANGE = 6,
		ALL_JUST_GUARD = 7,
		NO_STUN = 8,
		GUARD_CRASH = 9,
		NO_GUARD_CRASH = 10,
		NO_KO = 11,
		ONE_ATK_KO = 12,
		ONE_HIT_STUN = 13,
		ALWAYS_COUNTER = 14,
		CHECK_ADVANTAGE_FRAME = 15,
		RANDOM_GUARD = 16,
		RANDOM_COUNTER = 17,
		AUTO_UKEMI = 18,
		INFINITE_CLIMAX_MODE = 19,
		REVERSAL_RECORD_MODE = 20,
		MAX = 21,
	};
};
class std::bitset<21>
{
	typedef unsigned long _Ty;
	class reference;
public:
	static void _Validate(unsigned long long);
	bool _Subscript(unsigned long long);
	std::bitset<21>::reference operator[](unsigned long long);
	bool operator[](unsigned long long);
	bitset<21>(unsigned long long);
	bitset<21>();
	static const bool _Need_mask; // 0xFFFFFFFFFFFFFFFF
	static const unsigned long long _Mask; // 0xFFFFFFFFFFFFFFFF
	std::bitset<21> & operator&=(const std::bitset<21> &);
	std::bitset<21> & operator|=(const std::bitset<21> &);
	std::bitset<21> & operator^=(const std::bitset<21> &);
	std::bitset<21> & operator<<=(unsigned long long);
	std::bitset<21> & operator>>=(unsigned long long);
	std::bitset<21> & set(unsigned long long, bool);
	std::bitset<21> & set();
	std::bitset<21> & reset(unsigned long long);
	std::bitset<21> & reset();
	operator~();
	std::bitset<21> & flip(unsigned long long);
	std::bitset<21> & flip();
	unsigned long to_ulong();
	unsigned long long to_ullong();
	unsigned long long count();
	unsigned long long size();
	unsigned long long hash();
	bool operator==(const std::bitset<21> &);
	bool operator!=(const std::bitset<21> &);
	bool test(unsigned long long);
	bool any();
	bool none();
	bool all();
	std::bitset<21> operator<<(unsigned long long);
	std::bitset<21> operator>>(unsigned long long);
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
void ActorChara::SetVitalRecover(bool flag); // 0x1400BAD10
void ActorChara::SetExPowerRecover(bool flag); // 0x1400BAD80
void ActorChara::SetDisableExPowerAdd(bool flag); // 0x1400BADF0
void ActorChara::SetAllGuardMode(bool flag); // 0x1400BAE60
void ActorChara::SetOneHitGuardMode(bool flag); // 0x1400BAED0
void ActorChara::SetInvalidGuardChange(bool flag); // 0x1400BAF40
bool ActorChara::IsInvalidGuardChange(); // 0x1400BAFB0
void ActorChara::SetAllJustGuard(bool flag); // 0x1400BAFC0
bool ActorChara::IsAllJustGuardMode(); // 0x1400BB030
bool ActorChara::IsAutoGuardOK(); // 0x1400BB040
void ActorChara::SetNoStun(bool flag); // 0x1400BB050
bool ActorChara::IsNoStunMode(); // 0x1400BB0C0
void ActorChara::SetGuardCrashMode(bool flag); // 0x1400BB0D0
bool ActorChara::IsGuardCrashMode(); // 0x1400BB140
void ActorChara::SetNoGuardCrash(bool flag); // 0x1400BB150
bool ActorChara::IsNoGuardCrashMode(); // 0x1400BB1C0
void ActorChara::SetDisableKO(bool flag); // 0x1400BB1D0
bool ActorChara::IsDisableKO(); // 0x1400BB240
void ActorChara::SetOneAtkKO(bool flag); // 0x1400BB250
bool ActorChara::IsOneAtkKO(); // 0x1400BB2C0
void ActorChara::SetOneHitStun(bool flag); // 0x1400BB2D0
bool ActorChara::IsOneHitStun(); // 0x1400BB340
void ActorChara::SetAlwaysCounter(bool flag); // 0x1400BB350
bool ActorChara::IsAlwaysCounter(); // 0x1400BB3C0
void ActorChara::SetCheckAdvantageFrame(bool flag); // 0x1400BB420
bool ActorChara::IsCheckAdvantageFrame(); // 0x1400BB490
void ActorChara::SetRandomGuard(bool flag); // 0x1400BB4A0
void ActorChara::SetRandomCounter(bool flag); // 0x1400BB510
void ActorChara::SetAutoUkemiMode(bool flag); // 0x1400BB580
bool ActorChara::IsAutoUkemiMode(); // 0x1400BB5F0
void ActorChara::SetInfiniteClimaxMode(bool flag); // 0x1400BB600
bool ActorChara::IsInfiniteClimaxMode(); // 0x1400BB670
void ActorChara::SetReversalRecordMode(); // 0x1400BB680
bool ActorChara::IsReversalRecordMode(); // 0x1400BB6E0