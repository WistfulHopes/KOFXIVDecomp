#pragma once

class ComboMissionData :
	CharaFileBase
{
public:
	static const char FILE_IDENTIFIER[4]; // 0xFFFFFFFFFFFFFFFF
	static const char * READ_ERROR_ID_NAME[0]; // 0xFFFFFFFFFFFFFFFF
	enum FILE_VERSION
	{
		VERSION_1 = 1,
		VERSION_2 = 2,
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
		FAIL_DATA = 8,
		FAIL_DATA_NAMES = 9,
		ERROR_MAX = 10,
	};
	struct SETTING_POWER_GAUGE;
	struct SETTING_GUARD_GAUGE;
	struct SETTING_STUN;
	struct SETTING_START_POSITION;
	struct SETTING_TARGET_GUARD;
	struct SETTING_TARGET_COUNTER;
	struct SETTING_TARGET_MOVE;
	struct SETTING_COMPLETE_TYPE;
	struct SETTING_THROW_ESCAPE;
	struct MISSION_CONCLUD_TYPE;
	struct MISSION_TERM_TYPE;
	struct MISSION_TERM_BASE_COMMAND;
	struct MISSION_TERM_EXTRA_STATE;
	struct DataHeader;
	struct ComboMissionSettingData;
	struct ComboMissionTermParts;
	struct ComboMissionTermData;
	struct MissionData;
	ComboMissionData::DataHeader dataHeader; // 0x18
	ComboMissionData::MissionData * pMissionData; // 0x20
	char * * pMissionNames; // 0x28
	ComboMissionData();
	virtual ~ComboMissionData();
	virtual bool CheckFileID();
	virtual void InitData();
	virtual long ReadFile(const char *);
	virtual long ReadBuffer(unsigned char *, unsigned long);
	virtual bool IsReadSuccess();
	long GetDataCount();
	const char * GetSampleKeyDataPath(long);
};
enum ComboMissionData::READ_ERROR_ID
{
	NONE = 0,
	SUCCESS = 1,
	OPEN = 2,
	FILE_HEADER = 3,
	FILE_ID = 4,
	DATA_HEADER = 5,
	NO_DATA_BODY = 6,
	NO_HEAP = 7,
	FAIL_DATA = 8,
	FAIL_DATA_NAMES = 9,
	ERROR_MAX = 10,
};
struct ComboMissionData::SETTING_POWER_GAUGE
{
	enum ID
	{
		NORMAL = 0,
		DISABLE_ADD = 1,
		INIFINITY = 2,
	};
};
struct ComboMissionData::SETTING_GUARD_GAUGE
{
	enum ID
	{
		NORMAL = 0,
		NO_GUARD_CRASH = 1,
	};
};
struct ComboMissionData::SETTING_STUN
{
	enum ID
	{
		NORMAL = 0,
		NO_STUN = 1,
	};
};
struct ComboMissionData::SETTING_START_POSITION
{
	enum ID
	{
		CENTER = 0,
		LEFT = 1,
		RIGHT = 2,
	};
};
struct ComboMissionData::SETTING_TARGET_GUARD
{
	enum ID
	{
		NO = 0,
		ALL = 1,
		ONE_HIT = 2,
		JUMP = 3,
	};
};
struct ComboMissionData::SETTING_TARGET_COUNTER
{
	enum ID
	{
		OFF = 0,
		ALWAYS = 1,
	};
};
struct ComboMissionData::SETTING_TARGET_MOVE
{
	enum ID
	{
		STAND = 0,
		CROUCH = 1,
		FORWARD = 2,
		BACKWARD = 3,
		DASH = 4,
		BSTEP = 5,
		JUMPV_N = 6,
		JUMPV_S = 7,
		JUMPF_N = 8,
		JUMPF_S = 9,
		JUMPF_M = 10,
		JUMPF_L = 11,
		JUMPB_N = 12,
		JUMPB_S = 13,
		JUMPB_M = 14,
		JUMPB_L = 15,
		NEAR_HP = 16,
		NEAR_C_HK = 17,
		BJUMP_YAMIBARAI = 18,
		NEAR_ONIYAKI = 19,
		NEAR_THROW = 20,
	};
};
struct ComboMissionData::SETTING_COMPLETE_TYPE
{
	enum ID
	{
		COMBO = 0,
		TUTORIAL = 1,
	};
};
struct ComboMissionData::SETTING_THROW_ESCAPE
{
	enum ID
	{
		OFF = 0,
		ALWAYS = 1,
	};
};
struct ComboMissionData::MISSION_CONCLUD_TYPE
{
	enum ID
	{
		COUNT = 0,
		FRAME = 1,
	};
};
struct ComboMissionData::MISSION_TERM_TYPE
{
	enum ID
	{
		BASE_COMMAND = 0,
		CHARA_COMMAND = 1,
		ACTION_ID = 2,
		ATTACK_ID = 3,
		EXTRA_STATE = 4,
		MAMAHAHA_ATK = 5,
	};
};
struct ComboMissionData::MISSION_TERM_BASE_COMMAND
{
	enum ID
	{
		STAND = 0,
		CROUCH = 1,
		FRONT = 2,
		BACK = 3,
		DASH = 4,
		BACK_STEP = 5,
		STAND_LP = 6,
		STAND_LK = 7,
		STAND_HP = 8,
		STAND_HK = 9,
		CROUCH_LP = 10,
		CROUCH_LK = 11,
		CROUCH_HP = 12,
		CROUCH_HK = 13,
		JUMP_LP = 14,
		JUMP_LK = 15,
		JUMP_HP = 16,
		JUMP_HK = 17,
		BLOW_ATK = 18,
		JUMP_BLOW_ATK = 19,
		F_EVADE = 20,
		B_EVADE = 21,
		CLIMAX = 22,
		CANCEL_CLIMAX = 23,
	};
};
struct ComboMissionData::MISSION_TERM_EXTRA_STATE
{
	enum ID
	{
		STAND_GUARD = 0,
		CROUCH_GUARD = 1,
		GUARD_CRASH = 2,
		SHOT_EVADE = 3,
		SUPER_CANCEL = 4,
		ADVANCED_CANCEL = 5,
		CLIMAX_CANCEL = 6,
	};
};
struct ComboMissionData::DataHeader
{
	unsigned long uiDataVersion; // 0x0
	long iDataCount; // 0x4
};
struct ComboMissionData::ComboMissionSettingData
{
	long iTermCount; // 0x0
	long iEnemyCharaID; // 0x4
	struct StateSetting;
	ComboMissionData::ComboMissionSettingData::StateSetting stateSetting[2]; // 0x8
	char iStartPos; // 0x18
	char iGuardSetting; // 0x19
	char iCounterSetting; // 0x1A
	char iMoveSetting; // 0x1B
	char iCompleteType; // 0x1C
	char iCompleteCount; // 0x1D
	char iThrowEscape; // 0x1E
	char iReserve2; // 0x1F
	long iReserveArr[8]; // 0x20
};
struct ComboMissionData::ComboMissionSettingData::StateSetting
{
	char iPowerGaugeType; // 0x0
	char iMaxPowerGauge; // 0x1
	char iMaxClimaxGauge; // 0x2
	char iGuardGaugeType; // 0x3
	char iMaxGuardGauge; // 0x4
	char iStunType; // 0x5
	char iMaxStun; // 0x6
	char iReserve; // 0x7
};
struct ComboMissionData::ComboMissionTermParts
{
	short iConcludType; // 0x0
	short iConcludParam; // 0x2
	long iTermType; // 0x4
	union Type;
	ComboMissionData::ComboMissionTermParts::Type type; // 0x8
};
union ComboMissionData::ComboMissionTermParts::Type
{
	struct
	{
		long iData[2]; // 0x0
		struct BaseCommand;
	};
	struct
	{
		ComboMissionData::ComboMissionTermParts::Type::BaseCommand base; // 0x0
		struct CharaCommand;
	};
	struct
	{
		ComboMissionData::ComboMissionTermParts::Type::CharaCommand chara; // 0x0
		struct Action;
	};
	struct
	{
		ComboMissionData::ComboMissionTermParts::Type::Action action; // 0x0
		struct Attack;
	};
	struct
	{
		ComboMissionData::ComboMissionTermParts::Type::Attack attack; // 0x0
		struct Extra;
	};
	struct
	{
		ComboMissionData::ComboMissionTermParts::Type::Extra extra; // 0x0
		struct MamahahaAtk;
	};
public:
	ComboMissionData::ComboMissionTermParts::Type::MamahahaAtk mamahahaAtk; // 0x0
};
struct ComboMissionData::ComboMissionTermParts::Type::BaseCommand
{
	long iCommandID; // 0x0
};
struct ComboMissionData::ComboMissionTermParts::Type::CharaCommand
{
	long iCommandID; // 0x0
};
struct ComboMissionData::ComboMissionTermParts::Type::Action
{
	long iActionID; // 0x0
};
struct ComboMissionData::ComboMissionTermParts::Type::Attack
{
	long iAttackID; // 0x0
};
struct ComboMissionData::ComboMissionTermParts::Type::Extra
{
	long iExtraID; // 0x0
};
struct ComboMissionData::ComboMissionTermParts::Type::MamahahaAtk
{
	long iAttackID; // 0x0
};
struct ComboMissionData::ComboMissionTermData
{
	long iTermPartsCount; // 0x0
	ComboMissionData::ComboMissionTermParts * pTermParts; // 0x8
};
struct ComboMissionData::MissionData
{
	ComboMissionData::ComboMissionSettingData settingData; // 0x0
	ComboMissionData::ComboMissionTermData * pTermData; // 0x40
	char * pSampleDataFilePath; // 0x48
	char * * pTermNames; // 0x50
	char * * pCommandStr; // 0x58
};
bool ComboMissionData::IsReadSuccess(); // 0x14017D900
long ComboMissionData::GetDataCount(); // 0x140184530