#pragma once

class CpuSequenceData :
	CharaFileBase
{
public:
	static const char FILE_IDENTIFIER[4]; // 0xFFFFFFFFFFFFFFFF
	static const char * READ_ERROR_ID_NAME[0]; // 0xFFFFFFFFFFFFFFFF
	enum FILE_VERSION
	{
		VERSION_1 = 1,
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
	struct SEQUENCE_CATEGORY;
	struct CLIMAX_MODE_SETTING;
	struct SEQUENCE_SET_OPTION;
	struct SEQUENCE_COMMAND_TYPE;
	struct SEQUENCE_BASE_COMMAND;
	struct SEQUENCE_BASE_OPTION;
	struct SEQUENCE_CHARA_OPTION;
	struct SEQUENCE_BRANCH_TYPE;
	struct SEQUENCE_BRANCH_NEXT;
	struct SEQUENCE_KEY_LEVER;
	struct SEQUENCE_KEY_BUTTON;
	struct SEQUENCE_KEY_OPTION;
	struct DataHeader;
	struct CharaFeatureData;
	struct SequenceSetHeader;
	struct SequenceCommandData;
	struct SequenceData;
	CpuSequenceData::DataHeader dataHeader; // 0x18
	CpuSequenceData::CharaFeatureData charaFeatureData; // 0x20
	CpuSequenceData::SequenceData * pSeqData; // 0x58
	char * * pSequenceNames; // 0x60
	CpuSequenceData();
	virtual ~CpuSequenceData();
	virtual bool CheckFileID();
	virtual void InitData();
	virtual long ReadFile(const char *);
	virtual long ReadBuffer(unsigned char *, unsigned long);
	virtual bool IsReadSuccess();
	long GetDataCount();
};
enum CpuSequenceData::READ_ERROR_ID
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
struct CpuSequenceData::SEQUENCE_CATEGORY
{
	enum ID
	{
		GR_VS_GR_ATTACK_HI = 0,
		GR_VS_GR_ATTACK_MID = 1,
		GR_VS_GR_ATTACK_LOW = 2,
		GR_VS_GR_THROW = 3,
		GR_VS_GR_SHOT = 4,
		GR_VS_GR_CHARGE = 5,
		GR_VS_GR_EVADE = 6,
		AR_VS_AR_ATTACK = 7,
		AR_VS_AR_THROW = 8,
		AIR_SHOT = 9,
		AIR_CHARGE = 10,
		AIR_EVADE = 11,
		GR_VS_AR_ATTACK = 12,
		GR_VS_AR_THROW = 13,
		GR_VS_AR_EVADE = 14,
		AR_VS_GR_ATTACK = 15,
		AR_VS_GR_THROW = 16,
		CORNER_ATTACK = 17,
		CORNER_EVADE = 18,
		MOVE_SHOT_EVADE = 19,
		FIX_SHOT_EVADE = 20,
		GROUND_SP_MOVE = 21,
		GROUND_THROW_EVADE = 22,
		MAX = 23,
	};
};
struct CpuSequenceData::CLIMAX_MODE_SETTING
{
	enum ID
	{
		BOTH = 0,
		NORMAL = 1,
		CLIMAX = 2,
	};
};
struct CpuSequenceData::SEQUENCE_SET_OPTION
{
	enum FLAG
	{
		STAND_UP_REVERSUL = 1,
		CHANCE_TIME = 2,
		ENABLE_JUMP_UP = 4,
		SHOT_REFLECT = 8,
	};
};
struct CpuSequenceData::SEQUENCE_COMMAND_TYPE
{
	enum ID
	{
		BASE = 0,
		CHARA = 1,
		BRANCH = 2,
		KEY_INPUT = 3,
	};
};
struct CpuSequenceData::SEQUENCE_BASE_COMMAND
{
	enum ID
	{
		STAND = 0,
		CROUCH = 1,
		FRONT = 2,
		BACK = 3,
		DASH = 4,
		BACK_STEP = 5,
		FJUMP = 6,
		BJUMP = 7,
		JUMP = 8,
		FJUMP_HI = 9,
		BJUMP_HI = 10,
		FJUMP_LOW = 11,
		BJUMP_LOW = 12,
		JUMP_LOW = 13,
		FJUMP_MID = 14,
		BJUMP_MID = 15,
		STAND_LP = 16,
		STAND_LK = 17,
		STAND_HP = 18,
		STAND_HK = 19,
		CROUCH_LP = 20,
		CROUCH_LK = 21,
		CROUCH_HP = 22,
		CROUCH_HK = 23,
		JUMP_LP = 24,
		JUMP_LK = 25,
		JUMP_HP = 26,
		JUMP_HK = 27,
		BLOW_ATK = 28,
		JUMP_BLOW_ATK = 29,
		F_EVADE = 30,
		B_EVADE = 31,
		CLIMAX = 32,
		THROW_P = 33,
		THROW_K = 34,
	};
};
struct CpuSequenceData::SEQUENCE_BASE_OPTION
{
	enum FLAG
	{
		KEEP_COMMAND = 1,
		RESET_BTN_CHARGE = 2,
	};
};
struct CpuSequenceData::SEQUENCE_CHARA_OPTION
{
	enum FLAG
	{
		KEEP_COMMAND = 1,
		RESET_BTN_CHARGE = 2,
	};
};
struct CpuSequenceData::SEQUENCE_BRANCH_TYPE
{
	enum ID
	{
		NONE = 0,
		ATK_OK = 1,
		ATK_HIT = 2,
		ATK_COUNTER = 3,
		SHOT_ATK_OK = 4,
		SHOT_HIT = 5,
		TARGET_AIR = 6,
		TARGET_DIST = 7,
		TARGET_CORNER_DIST = 8,
		CLIMAX_GAUGE = 9,
		POWER_GAUGE = 10,
		GUARD_POINT = 11,
		ATEMI = 12,
		BRANCH_FLAG1 = 13,
		BRANCH_FLAG2 = 14,
		BRANCH_FLAG3 = 15,
		BRANCH_FLAG4 = 16,
		DIFFICULTY = 17,
		TARGET_GROUND = 18,
		CORNER_DIST = 19,
		RANDOM = 20,
		TARGET_VITAL = 21,
		TARGET_STUN = 22,
		TARGET_GUARD_POW = 23,
		TARGET_CROUCH = 24,
		TARGET_ATK_UPPER = 25,
		TARGET_ATK_MIDDLE = 26,
		TARGET_ATK_LOWER = 27,
		TARGET_ATK_SPECIAL = 28,
		SELF_AIR = 29,
		SELF_GROUND = 30,
		TARGET_MOV_Y_OR_OVER = 31,
		TARGET_MOV_Y_OR_LESS = 32,
		SELF_MOV_Y_OR_OVER = 33,
		SELF_MOV_Y_OR_LESS = 34,
		BUTTON_CHARGE_COUNT = 35,
	};
};
struct CpuSequenceData::SEQUENCE_BRANCH_NEXT
{
	enum ID
	{
		END = 0,
		NEXT = 1,
		OFFSET_VALUE = 2,
	};
};
struct CpuSequenceData::SEQUENCE_KEY_LEVER
{
	enum ID
	{
		NONE = 0,
		R = 1,
		RD = 2,
		D = 3,
		LD = 4,
		L = 5,
		LU = 6,
		U = 7,
		RU = 8,
	};
};
struct CpuSequenceData::SEQUENCE_KEY_BUTTON
{
	enum FLAG
	{
		LP = 1,
		LK = 2,
		HP = 4,
		HK = 8,
	};
};
struct CpuSequenceData::SEQUENCE_KEY_OPTION
{
	enum FLAG
	{
		LEVER_REPEAT = 1,
		BUTTON_REPEAT = 2,
		ACTION_CHANGE = 4,
		RESET_BTN_CHARGE = 8,
	};
};
struct CpuSequenceData::DataHeader
{
	unsigned long uiDataVersion; // 0x0
	long iSeqSetCount; // 0x4
};
struct CpuSequenceData::CharaFeatureData
{
	float fLikeRangeMin; // 0x0
	float fLikeRangeMax; // 0x4
	long iChargeRangeFlag; // 0x8
	unsigned char uiFMoveLevel; // 0xC
	unsigned char uiBMoveLevel; // 0xD
	unsigned char uiJumpLevel; // 0xE
	unsigned char uiClimaxLevel; // 0xF
	unsigned char uiThrowLevel; // 0x10
	unsigned char uiShotLevel; // 0x11
	unsigned char uiReserve1; // 0x12
	unsigned char uiReserve2; // 0x13
	long iReserveArr[8]; // 0x14
};
struct CpuSequenceData::SequenceSetHeader
{
	long iSeqCount; // 0x0
	long iCategory; // 0x4
	float fSelectRangeMin; // 0x8
	float fSelectRangeMax; // 0xC
	float fWallRange; // 0x10
	short iDifficulty; // 0x14
	short iCilmaxMode; // 0x16
	short iNeedPowerGauge; // 0x18
	short iPriority; // 0x1A
	short iMutekiFrame; // 0x1C
	short iStartupFrame; // 0x1E
	long iOptionFlag; // 0x20
	long iReserve[10]; // 0x24
};
struct CpuSequenceData::SequenceCommandData
{
	long iType; // 0x0
	union Type;
	CpuSequenceData::SequenceCommandData::Type type; // 0x4
};
union CpuSequenceData::SequenceCommandData::Type
{
	struct
	{
		long iData[9]; // 0x0
		struct BaseCommand;
	};
	struct
	{
		CpuSequenceData::SequenceCommandData::Type::BaseCommand base; // 0x0
		struct CharaCommand;
	};
	struct
	{
		CpuSequenceData::SequenceCommandData::Type::CharaCommand chara; // 0x0
		struct Branch;
	};
	struct
	{
		CpuSequenceData::SequenceCommandData::Type::Branch branch; // 0x0
		struct KeyInput;
	};
public:
	CpuSequenceData::SequenceCommandData::Type::KeyInput key; // 0x0
};
struct CpuSequenceData::SequenceCommandData::Type::BaseCommand
{
	long iCommandID; // 0x0
	long iFrame; // 0x4
	long iOptionFlag; // 0x8
};
struct CpuSequenceData::SequenceCommandData::Type::CharaCommand
{
	long iCommandID; // 0x0
	long iClimaxCommandID; // 0x4
	long iFrame; // 0x8
	long iOptionFlag; // 0xC
};
struct CpuSequenceData::SequenceCommandData::Type::Branch
{
	long iBranchID1; // 0x0
	float fParam1; // 0x4
	long iBranchID2; // 0x8
	float fParam2; // 0xC
	long iFrame; // 0x10
	long iTrueJumpID; // 0x14
	long iFalseJumpID; // 0x18
};
struct CpuSequenceData::SequenceCommandData::Type::KeyInput
{
	long iLever; // 0x0
	long iButton; // 0x4
	long iFrame; // 0x8
	long iOptionFlag; // 0xC
};
struct CpuSequenceData::SequenceData
{
	CpuSequenceData::SequenceSetHeader header; // 0x0
	CpuSequenceData::SequenceCommandData * pCommand; // 0x50
};
bool CpuSequenceData::IsReadSuccess(); // 0x14017D900
long CpuSequenceData::GetDataCount(); // 0x140184530