#pragma once

class BattleSystem::CpuSequence
{
public:
	CpuSequence(const BattleSystem::CpuSequence &);
	CpuSequence();
	~CpuSequence();
	long GetRandInt(long, long);
	float GetRandFloat(float, float);
	enum <unnamed-enum-MAX_CPU_LEVEL>
	{
		MAX_CPU_LEVEL = 15,
		JUMP_INIT_FRAME = 4,
	};
	enum SEQUENCE_RESULT
	{
		ERROR_ = 255,
		CONTINUE = 0,
		FINISH = 1,
		NEXT = 2,
		BRANCH = 3,
	};
	enum SEQUENCE_TYPE
	{
		NONE = 0,
		READY = 1,
		CROUCH = 2,
		GUARD = 3,
		C_GUARD = 4,
		MOVE_TARGET = 5,
		JUMP = 6,
		BACK_JUMP = 7,
		BACK_STEP = 8,
		EVADE = 9,
		GUARD_DAMAGE = 10,
		DAMAGED = 11,
		THROW = 12,
		CLIMAX_MODE = 13,
		GUARD_CANCEL = 14,
		BASE_COMMAND = 15,
		CHARA_COMMAND = 16,
		BRANCH_WAIT = 17,
		KEY_INPUT = 18,
		TRAINING_ACTION = 19,
		TRAINING_JUMP = 20,
		ONE_GUARD_JUMP = 21,
		NEAR_ATTACK = 22,
		BACK_JUMP_ATTACK = 23,
		MAX = 24,
	};
	struct JUMP_INFO_INDEX;
	struct NORMAL_THROW;
	struct TARGET_DISTANCE;
	struct GUARD_CANCEL;
	struct SeqParam;
	bool IsChargeSkillChara();
	BattleSystem::CpuSequence::TARGET_DISTANCE::ID GetTargetDistanceID();
	void SetCpuActor(ActorChara *);
	ActorChara * GetCpuActor();
	void DisposeCpuActor();
	void SetAILevel(AiLevelSpec);
	AiLevelSpec GetAILevel();
	long GetCpuLevel();
	const char * GetNowSequenceTypeName();
	const char * GetRequestSequenceTypeName();
	const BattleSystem::CpuSequence::SeqParam & GetNowSeqParam();
	const BattleSystem::CpuSequence::SeqParam & GetReqSeqParam();
	const Fix32 GetSequenceWaitFrame();
	long GetStandCharge();
	long GetCrouchCharge();
	long GetButtonCharge();
	void Update();
	void CheckCommand();
	bool IsKeyInputMode();
	long GetInputKey();
	void RequestReady(long);
	void RequestCrouch(long);
	void RequestGuard(long);
	void RequestCrouchGuard(long);
	void RequestMoveTargetDistance(float, long, bool);
	void RequestJump(BattleSystem::CpuSequence::JUMP_INFO_INDEX::ID);
	void RequestBackStep();
	void RequestEvade(long);
	void RequestGuardDamage();
	void RequestDamaged();
	void RequestNormalThrow(long);
	void RequestClimaxMode();
	void SetTrainingCpu(const TrainingSetting &);
	void CancelTrainingCpu();
	void SetComboMissionCpu(const ComboMissionData::ComboMissionSettingData &);
	const BattleSystem::SequenceController & GetSequenceController();
	void SetDebugCpuLevel(long);
	long GetDebugCpuLevel();
	void SetSequenceTestMode(bool);
	bool IsSequenceTestMode();
	void SetSequenceTestPlay(bool);
	bool IsSequenceTestPlay();
	void SetSequenceTestIndex(long);
	long GetSequenceTestIndex();
private:
	void DecisionCpuLevel();
	bool CheckActorNowSeqUpdate();
	const ActorObject * CheckShot();
	BattleSystem::GUARD_TYPE CheckGuardType();
	bool CheckDownEvade();
	bool CheckThrowEscape();
	bool CheckGuardEscape();
	void SetSequenceWaitFrame();
	bool UpdateShotReaction();
	void UpdateEnemyMoveReaction();
	void UpdateMyGroundReaction();
	void UpdateTrainingMove();
	void RequestSeqDataMove();
	BattleSystem::CpuSequence::SEQUENCE_RESULT SeqNone();
	BattleSystem::CpuSequence::SEQUENCE_RESULT SeqReady();
	BattleSystem::CpuSequence::SEQUENCE_RESULT SeqCrouch();
	BattleSystem::CpuSequence::SEQUENCE_RESULT SeqGuard();
	BattleSystem::CpuSequence::SEQUENCE_RESULT SeqCrouchGuard();
	BattleSystem::CpuSequence::SEQUENCE_RESULT SeqMoveTarget();
	BattleSystem::CpuSequence::SEQUENCE_RESULT SeqJump();
	BattleSystem::CpuSequence::SEQUENCE_RESULT SeqBackJump();
	BattleSystem::CpuSequence::SEQUENCE_RESULT SeqBackStep();
	BattleSystem::CpuSequence::SEQUENCE_RESULT SeqEvade();
	BattleSystem::CpuSequence::SEQUENCE_RESULT SeqGuardDamage();
	BattleSystem::CpuSequence::SEQUENCE_RESULT SeqDamaged();
	BattleSystem::CpuSequence::SEQUENCE_RESULT SeqNormalThrow();
	BattleSystem::CpuSequence::SEQUENCE_RESULT SeqClimaxMode();
	BattleSystem::CpuSequence::SEQUENCE_RESULT SeqBaseCommand();
	BattleSystem::CpuSequence::SEQUENCE_RESULT SeqCharaCommand();
	BattleSystem::CpuSequence::SEQUENCE_RESULT SeqBranchWait();
	BattleSystem::CpuSequence::SEQUENCE_RESULT SeqKeyInput();
	bool IsTrainingDownEvadeCheck();
	bool IsTrainingThrowEscapeCheck();
	bool IsTrainingGuardActionCheck();
	BattleSystem::CpuSequence::SEQUENCE_RESULT SeqTrainingAction();
	BattleSystem::CpuSequence::SEQUENCE_RESULT SeqTrainingJump();
	BattleSystem::CpuSequence::SEQUENCE_RESULT SeqTrainingOneGuardJump();
	BattleSystem::CpuSequence::SEQUENCE_RESULT SeqTutorialNearAttack();
	BattleSystem::CpuSequence::SEQUENCE_RESULT SeqTutorialBackJumpAttack();
	ActorChara * pOwner; // 0x0
	const ActorObject * pEnemyShot; // 0x8
	float fFrontMoveX; // 0x10
	float fBackMoveX; // 0x14
	struct JumpInfo;
	BattleSystem::CpuSequence::JumpInfo jumpInfo[10]; // 0x18
	float fNormalThrowRange[2]; // 0xE0
	AiLevelSpec iDifficulty; // 0xE8
	long iCpuLevel; // 0xEC
	BattleSystem::GUARD_TYPE guardType; // 0xF0
	std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> cmdCheckFunc; // 0xF8
	long iCmdFuncOption; // 0x138
	const CommandData::Setting * pValidCommand; // 0x140
	Fix32 xSeqWaitFrame; // 0x148
	bool bReconsideration; // 0x14C
	bool bTrainingCPU; // 0x14D
	bool bDamageReversal; // 0x14E
	BattleSystem::CpuSequence::SeqParam nowSeq; // 0x150
	BattleSystem::CpuSequence::SeqParam reqSeq; // 0x174
	const CpuSequenceData * pSeqData; // 0x198
	BattleSystem::SequenceController seqCtrl; // 0x1A0
	long iDebugCpuLevel; // 0x1E0
	bool bSequenceTestMode; // 0x1E4
	bool bSequenceTestPlay; // 0x1E5
	long iSequenceTestIndex; // 0x1E8
public:
	BattleSystem::CpuSequence & operator=(const BattleSystem::CpuSequence &);
};
BattleSystem::CpuSequence::CpuSequence(); // 0x1400BC060
BattleSystem::CpuSequence::~CpuSequence(); // 0x1400BC0F0
struct BattleSystem::CpuSequence::JUMP_INFO_INDEX
{
	enum ID
	{
		FJUMP = 0,
		BJUMP = 1,
		JUMP = 2,
		FJUMP_LOW = 3,
		BJUMP_LOW = 4,
		JUMP_LOW = 5,
		FJUMP_MID = 6,
		BJUMP_MID = 7,
		FJUMP_HI = 8,
		BJUMP_HI = 9,
		MAX = 10,
	};
};
struct BattleSystem::CpuSequence::NORMAL_THROW
{
	enum ID
	{
		PUNCH = 0,
		KICK = 1,
		MAX = 2,
	};
};
struct BattleSystem::CpuSequence::TARGET_DISTANCE
{
	enum ID
	{
		NEAREST = 0,
		NEAR_ = 1,
		MIDDLE = 2,
		FAR_ = 3,
		FARTHEST = 4,
		MAX = 5,
	};
};
struct BattleSystem::CpuSequence::GUARD_CANCEL
{
	enum ID
	{
		NONE = 0,
		UN_USE = 1,
		F_EVADE = 2,
		B_EVADE = 3,
		BLOW = 4,
	};
};
struct BattleSystem::CpuSequence::SeqParam
{
	BattleSystem::CpuSequence::SEQUENCE_TYPE iType; // 0x0
	long iSeqCount; // 0x4
	bool bLocked; // 0x8
	bool bRefSeqData; // 0x9
	bool bNextOK; // 0xA
	Fix32 xNowFrame; // 0xC
	Fix32 xMaxFrame; // 0x10
	union Type;
	BattleSystem::CpuSequence::SeqParam::Type type; // 0x14
	bool IsNoSequence();
	void Reset();
	void UpdateFrame();
	bool IsOverMaxFrame();
	SeqParam();
};
union BattleSystem::CpuSequence::SeqParam::Type
{
	struct MoveTarget;
	struct
	{
		BattleSystem::CpuSequence::SeqParam::Type::MoveTarget moveTarget; // 0x0
		struct Jump;
	};
	struct
	{
		BattleSystem::CpuSequence::SeqParam::Type::Jump jump; // 0x0
		struct Evade;
	};
	struct
	{
		BattleSystem::CpuSequence::SeqParam::Type::Evade evade; // 0x0
		struct GuardDamage;
	};
	struct
	{
		BattleSystem::CpuSequence::SeqParam::Type::GuardDamage guardDamage; // 0x0
		struct Damaged;
	};
	struct
	{
		BattleSystem::CpuSequence::SeqParam::Type::Damaged damaged; // 0x0
		struct Throw;
	};
	struct
	{
		BattleSystem::CpuSequence::SeqParam::Type::Throw throwAct; // 0x0
		struct Branch;
	};
	struct
	{
		BattleSystem::CpuSequence::SeqParam::Type::Branch branch; // 0x0
		struct KeyInput;
	};
	struct
	{
		BattleSystem::CpuSequence::SeqParam::Type::KeyInput key; // 0x0
		struct TrainingAction;
	};
public:
	BattleSystem::CpuSequence::SeqParam::Type::TrainingAction trainingAct; // 0x0
};
struct BattleSystem::CpuSequence::SeqParam::Type::MoveTarget
{
	long iMoveAct; // 0x0
	float fEndDist; // 0x4
};
struct BattleSystem::CpuSequence::SeqParam::Type::Jump
{
	long iJumpIndex; // 0x0
	long iStateCount; // 0x4
};
struct BattleSystem::CpuSequence::SeqParam::Type::Evade
{
	long iMoveAct; // 0x0
};
struct BattleSystem::CpuSequence::SeqParam::Type::GuardDamage
{
	long iStartVital; // 0x0
	long iTargetActNo; // 0x4
	long iTargetStat; // 0x8
	long iCancelType; // 0xC
};
struct BattleSystem::CpuSequence::SeqParam::Type::Damaged
{
	long iEscapeFlag; // 0x0
};
struct BattleSystem::CpuSequence::SeqParam::Type::Throw
{
	long iThrowType; // 0x0
};
struct BattleSystem::CpuSequence::SeqParam::Type::Branch
{
	bool bBranchTrue; // 0x0
};
struct BattleSystem::CpuSequence::SeqParam::Type::KeyInput
{
	long iActNo; // 0x0
};
struct BattleSystem::CpuSequence::SeqParam::Type::TrainingAction
{
	long iAction; // 0x0
	long iGuard; // 0x4
	long iCount; // 0x8
	bool bDownEvade; // 0xC
	bool bThrowEscape; // 0xD
};
struct BattleSystem::CpuSequence::JumpInfo
{
	float fMovX; // 0x0
	float fMovY; // 0x4
	float fAddY; // 0x8
	float fDist; // 0xC
	float fFrame; // 0x10
};
class std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> :
	std::_Func_class<CommandData::Setting const *,BattleSystem::CpuSequence &,int>
{
	class _Mybase;
	class _Myt;
public:
	function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)>(std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> &);
	function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)>(const std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> &);
	function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)>(void *);
	function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)>();
	~function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)>();
	std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> & operator=(void *);
	std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> & operator=(std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> &);
	std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> & operator=(const std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> &);
	void swap(std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> &);
	bool operator bool();
	const type_info & target_type();
};