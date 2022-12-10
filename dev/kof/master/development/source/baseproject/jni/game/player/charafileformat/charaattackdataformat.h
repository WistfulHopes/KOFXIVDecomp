#pragma once

class CharaAttackData :
	CharaFileBase
{
public:
	static const char FILE_IDENTIFIER[4]; // 0xFFFFFFFFFFFFFFFF
	static const char * READ_ERROR_ID_NAME[0]; // 0xFFFFFFFFFFFFFFFF
	enum FILE_VERSION
	{
		VERSION_3 = 3,
		VERSION_4 = 4,
		VERSION_5 = 5,
	};
	enum READ_ERROR_ID
	{
		NONE = 0,
		SUCCESS = 1,
		OPEN = 2,
		FILE_HEADER = 3,
		FILE_ID = 4,
		DATA_HEADER = 5,
		NO_DATA_BODY = 6,
		NO_HEAP = 7,
		ATK_DATA = 8,
		ATK_NAMES = 9,
		ERROR_MAX = 10,
	};
	struct DATA_TYPE;
	struct SKILL_TYPE;
	struct COMBO_REVISE;
	struct GUARD_ATTR;
	struct DIRECTION_ATTR;
	struct HITBACK_DIR;
	struct DAMAGE_ATTR;
	struct CONDITION_TYPE;
	struct TARGET_FLAG;
	struct ATTACK_FLAG;
	struct HIT_OFFSET_SETTING;
	struct POISON_DAMAGE_OPTION;
	struct DataHeader;
	struct AttackSubData;
	struct DamageActionSetting;
	struct DamageReserveData;
	struct HitEffectData;
	struct HitOffsetData;
	struct HitQuakeCameraData;
	struct SoundSettingData;
	struct PoisonDamageData;
	struct AttackData_version3;
	struct AttackData;
	CharaAttackData::DataHeader dataHeader; // 0x18
	CharaAttackData::AttackData * pAtkData; // 0x20
	char * * pAtkNames; // 0x28
	CharaAttackData();
	virtual ~CharaAttackData();
	virtual bool CheckFileID();
	virtual void InitData();
	virtual long ReadFile(const char *);
	virtual long ReadBuffer(unsigned char *, unsigned long);
	virtual bool IsReadSuccess();
protected:
	void ConvertVersion3to4(const CharaAttackData::AttackData_version3 &, CharaAttackData::AttackData &);
	void ConvertVersion4to5(CharaAttackData::AttackData &);
};
enum CharaAttackData::READ_ERROR_ID
{
	NONE = 0,
	SUCCESS = 1,
	OPEN = 2,
	FILE_HEADER = 3,
	FILE_ID = 4,
	DATA_HEADER = 5,
	NO_DATA_BODY = 6,
	NO_HEAP = 7,
	ATK_DATA = 8,
	ATK_NAMES = 9,
	ERROR_MAX = 10,
};
struct CharaAttackData::DATA_TYPE
{
	enum ID
	{
		ATTACK = 0,
		SHOT = 1,
		CATCH = 2,
		THROW = 3,
		RESERVE = 4,
		GUARD = 5,
		BRANCH = 6,
		DATA_TYPE_MAX = 7,
	};
};
struct CharaAttackData::SKILL_TYPE
{
	enum ID
	{
		NONE = 0,
		LOW = 1,
		HI = 2,
		FUKITOBASI = 3,
		THROW = 4,
		SPECIAL = 5,
		EX_SPECIAL = 6,
		SUPER_SP = 7,
		MAX_SUPER_SP = 8,
		CLIMAX_SP = 9,
	};
};
enum CharaAttackData::SKILL_TYPE::ID
{
	NONE = 0,
	LOW = 1,
	HI = 2,
	FUKITOBASI = 3,
	THROW = 4,
	SPECIAL = 5,
	EX_SPECIAL = 6,
	SUPER_SP = 7,
	MAX_SUPER_SP = 8,
	CLIMAX_SP = 9,
};
struct CharaAttackData::COMBO_REVISE
{
	enum ID
	{
		NONE = 0,
		SKILL_1 = 1,
		SKILL_2 = 2,
		SKILL_3 = 3,
		ADD_1 = 4,
		ADD_2 = 5,
		ADD_3 = 6,
		SKILL_4 = 7,
		SKILL_5 = 8,
		SKILL_6 = 9,
		SKILL_7 = 10,
		SKILL_8 = 11,
		SKILL_9 = 12,
		SKILL_10 = 13,
		ADD_4 = 14,
		ADD_5 = 15,
		ADD_6 = 16,
		ADD_7 = 17,
		ADD_8 = 18,
		ADD_9 = 19,
		ADD_10 = 20,
	};
};
struct CharaAttackData::GUARD_ATTR
{
	enum ID
	{
		UPPER = 0,
		MIDDLE = 1,
		LOWER = 2,
		NO_GUARD = 3,
	};
};
struct CharaAttackData::DIRECTION_ATTR
{
	enum ID
	{
		NONE = 0,
		FRONT = 1,
		BACK = 2,
	};
};
struct CharaAttackData::HITBACK_DIR
{
	enum ID
	{
		ATK_DIR = 0,
		ATK_DIR_REV = 1,
		ATK_APART = 2,
		ATK_APPROACH = 3,
		DMG_DIR = 4,
		DMG_DIR_REV = 5,
	};
};
struct CharaAttackData::DAMAGE_ATTR
{
	enum ID
	{
		NORMAL = 0,
		RED_FIRE = 1,
		BLUE_FIRE = 2,
		BLUE_ELEC = 3,
		COLD = 4,
		YELLOW_ELEC = 5,
		RED_AURA = 6,
		BLUE_AURA = 7,
		RED_BLUE_AURA = 8,
		MAX = 9,
	};
};
struct CharaAttackData::CONDITION_TYPE
{
	enum ID
	{
		WALL = 1,
		GROUND = 2,
		THROW_END = 4,
	};
};
struct CharaAttackData::TARGET_FLAG
{
	enum FLAG
	{
		NONE = 0,
		NORMAL = 1,
		PUSH = 2,
		DOWN = 4,
		CENTER = 8,
	};
};
struct CharaAttackData::ATTACK_FLAG
{
	enum FLAG
	{
		INVALID_EVADE = 1,
		INVALID_KO = 2,
		INVALID_STUN = 4,
		INVALID_CRASH = 8,
		INVALID_KEZURI_KO = 16,
		NO_COMBO_COUNT = 32,
		INVALID_STAND_HIT = 64,
		INVALID_CROUCH_HIT = 128,
		INVALID_JUMP_HIT = 256,
		INVALID_NORMAL_HIT = 512,
		INVALID_NOKE_HIT = 1024,
		INVALID_FUKI_HIT = 2048,
		INVALID_GUARD_HIT = 4096,
		CANGLE_ATK_SAME = 8192,
		INVALID_DOWN_HIT = 16384,
		VALID_AIR_ATK_THROW = 32768,
		CANGLE_ATK_DIR = 65536,
		INVALID_SHOT_ATK = 131072,
		GUARD_QUAKE_CAMERA = 262144,
		FIXED_RECOVER_VALUE = 524288,
		SP_WIN_DIRECTION = 1048576,
		INVALID_CHANGE_ANGLE = 2097152,
		INVALID_ATEMI_HIT = 4194304,
		INVALID_KO_HIT = 8388608,
		ADD_EXTRA_DAMAGE = 16777216,
		RESET_EXTRA_DAMAGE = 33554432,
		SET_BRANCH_KEY_HIT_ONLY = 67108864,
	};
};
struct CharaAttackData::HIT_OFFSET_SETTING
{
	enum ID
	{
		NONE = 0,
		SELF = 1,
		SELF_NO_DIR = 2,
		PARENT = 3,
		PARENT_NO_DIR = 4,
		CAMERA = 5,
		STAGE = 6,
	};
};
struct CharaAttackData::POISON_DAMAGE_OPTION
{
	enum FLAG
	{
		DAMAGE_RESET = 1,
		GUARD_RESET = 2,
		ADD_COUNT = 4,
		ENABLE_GUARD = 8,
	};
};
struct CharaAttackData::DataHeader
{
	unsigned long uiDataVersion; // 0x0
	long iDataCount; // 0x4
};
struct CharaAttackData::AttackSubData
{
	long iGaugeAddMine; // 0x0
	long iGaugeAddTarget; // 0x4
	long iKnockBackFrame; // 0x8
	float fKnockBackDistance; // 0xC
	long iHitStopFrameMine; // 0x10
	long iHitStopFrameTarget; // 0x14
};
struct CharaAttackData::DamageActionSetting
{
	long iStand; // 0x0
	long iCrouch; // 0x4
	long iJump; // 0x8
	long iCounterStand; // 0xC
	long iCounterCrouch; // 0x10
	long iCounterJump; // 0x14
	long iGuardStand; // 0x18
	long iGuardCrouch; // 0x1C
	long iNokezori; // 0x20
	long iKuzure; // 0x24
	long iFukitobi; // 0x28
	long iDown; // 0x2C
	long iDownDown; // 0x30
	long iReserve2; // 0x34
	long iReserve3; // 0x38
};
struct CharaAttackData::DamageReserveData
{
	long iAtkID; // 0x0
	long iCondition; // 0x4
};
struct CharaAttackData::HitEffectData
{
	short iListID; // 0x0
	short iActNo; // 0x2
	float fAngleX; // 0x4
	float fAngleY; // 0x8
	float fAngleZ; // 0xC
};
struct CharaAttackData::HitOffsetData
{
	long iSettingX; // 0x0
	long iSettingY; // 0x4
	float x; // 0x8
	float y; // 0xC
};
struct CharaAttackData::HitQuakeCameraData
{
	long iPresetID; // 0x0
	long iFrame; // 0x4
	float x; // 0x8
	float y; // 0xC
	float z; // 0x10
};
struct CharaAttackData::SoundSettingData
{
	float fVolume; // 0x0
	long iCommonID; // 0x4
	short iUniqueID; // 0x8
	short iGroupID; // 0xA
	long iPriority; // 0xC
	long iReserve1; // 0x10
	long iReserve2; // 0x14
	long iReserve3; // 0x18
};
struct CharaAttackData::PoisonDamageData
{
	short iCount; // 0x0
	short iIntervalFrame; // 0x2
	short iDamage; // 0x4
	unsigned short uiOptionFlag; // 0x6
};
struct CharaAttackData::AttackData_version3
{
	long iDataType; // 0x0
	long iSkillType; // 0x4
	long iDamage; // 0x8
	long iLowerDamage; // 0xC
	long iCheapDamage; // 0x10
	long iStun; // 0x14
	long iGuard; // 0x18
	long iScore; // 0x1C
	CharaAttackData::AttackSubData hitData; // 0x20
	CharaAttackData::AttackSubData guardData; // 0x38
	long iComboRevise; // 0x50
	long iGuardAttr; // 0x54
	long iDirectionAttr; // 0x58
	CharaAttackData::DamageActionSetting damageAction; // 0x5C
	long iDownFrame; // 0x98
	long iPursuitFrame; // 0x9C
	long iPursuitFrameAdd; // 0xA0
	long iHitNokeDir; // 0xA4
	long iGuardNokeDir; // 0xA8
	CharaAttackData::DamageReserveData damageReserve; // 0xAC
	long iTargetFlag; // 0xB4
	long iAttackFlag; // 0xB8
	long iActionBranchKey; // 0xBC
	long nulldata1; // 0xC0
	float nulldata2; // 0xC4
	long nulldata3; // 0xC8
	float nulldata4; // 0xCC
	long nulldata5; // 0xD0
	long nulldata6; // 0xD4
	long nulldata7; // 0xD8
	CharaAttackData::HitOffsetData hitOffset; // 0xDC
	long iSetInvalidAttackID; // 0xEC
	long iCheckInvalidAttackID; // 0xF0
	long iReserve1; // 0xF4
	long iReserve2; // 0xF8
	long iReserve3; // 0xFC
	long iReserve4; // 0x100
};
struct CharaAttackData::AttackData
{
	long iDataType; // 0x0
	long iSkillType; // 0x4
	long iDamage; // 0x8
	long iLowerDamage; // 0xC
	long iCheapDamage; // 0x10
	long iStun; // 0x14
	long iGuard; // 0x18
	long iScore; // 0x1C
	CharaAttackData::AttackSubData hitData; // 0x20
	CharaAttackData::AttackSubData guardData; // 0x38
	long iComboRevise; // 0x50
	long iGuardAttr; // 0x54
	long iDirectionAttr; // 0x58
	CharaAttackData::DamageActionSetting damageAction; // 0x5C
	long iDownFrame; // 0x98
	long iPursuitFrame; // 0x9C
	long iPursuitFrameAdd; // 0xA0
	long iHitNokeDir; // 0xA4
	long iGuardNokeDir; // 0xA8
	CharaAttackData::DamageReserveData damageReserve; // 0xAC
	long iTargetFlag; // 0xB4
	long iAttackFlag; // 0xB8
	long iActionBranchKey; // 0xBC
	long iDamageAttr; // 0xC0
	long iVitalRecovery; // 0xC4
	CharaAttackData::PoisonDamageData poisonDamage; // 0xC8
	long iAddComboCount; // 0xD0
	long iReserveData2[2]; // 0xD4
	CharaAttackData::HitOffsetData hitOffset; // 0xDC
	long iSetInvalidAttackID; // 0xEC
	long iCheckInvalidAttackID; // 0xF0
	long iDamageActPri; // 0xF4
	CharaAttackData::HitQuakeCameraData quakeCamera; // 0xF8
	CharaAttackData::SoundSettingData hitSound1; // 0x10C
	CharaAttackData::SoundSettingData hitSound2; // 0x128
	CharaAttackData::SoundSettingData hitVoice; // 0x144
	CharaAttackData::SoundSettingData guardSound; // 0x160
	CharaAttackData::HitEffectData hitEffect1; // 0x17C
	CharaAttackData::HitEffectData hitEffect2; // 0x18C
	CharaAttackData::HitEffectData guardEffect; // 0x19C
	long iReserveData[6]; // 0x1AC
};
bool CharaAttackData::IsReadSuccess(); // 0x14017D900