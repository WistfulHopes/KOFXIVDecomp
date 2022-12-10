#pragma once

class CommandData :
	CharaFileBase
{
public:
	static const char FILE_IDENTIFIER[4]; // 0xFFFFFFFFFFFFFFFF
	static const char * READ_ERROR_ID_NAME[0]; // 0xFFFFFFFFFFFFFFFF
	enum READ_ERROR_ID
	{
		NONE = 0,
		SUCCESS = 1,
		OPEN = 2,
		FILE_HEADER = 3,
		FILE_ID = 4,
		DATA_HEADER = 5,
		NO_HEAP = 6,
		SETTING = 7,
		KEY_COUNT = 8,
		KEY_DATA = 9,
		SETTING_NAMES = 10,
		COMMAND_NAMES = 11,
		ERROR_MAX = 12,
	};
	struct GROUP_ID;
	struct SHOT_CHECK_FLAG;
	struct VALID_TERMS_FLAG;
	struct INPUT_KEY;
	struct INPUT_COMP_TYPE;
	struct INPUT_TYPE;
	struct NEXT_KEY_FRAME;
	struct COMMAND_FLAG;
	struct COMMON_COMMAND_ID;
	struct COMMON_LIST_ID;
	struct CHARGE_TYPE;
	struct DataHeader;
	struct Setting;
	struct KeyData;
	struct Command;
	struct AiCommandInfo;
	CommandData::DataHeader dataHeader; // 0x18
	CommandData::Setting * pSetting; // 0x28
	CommandData::Command * pCmdData; // 0x30
	CommandData::AiCommandInfo * pAiCmdInfo; // 0x38
	char * * pSettingNames; // 0x40
	char * * pCmdDataNames; // 0x48
	CommandData();
	virtual ~CommandData();
	virtual bool CheckFileID();
	virtual void InitData();
	virtual long ReadFile(const char *);
	virtual long ReadBuffer(unsigned char *, unsigned long);
	virtual bool IsReadSuccess();
};
enum CommandData::READ_ERROR_ID
{
	NONE = 0,
	SUCCESS = 1,
	OPEN = 2,
	FILE_HEADER = 3,
	FILE_ID = 4,
	DATA_HEADER = 5,
	NO_HEAP = 6,
	SETTING = 7,
	KEY_COUNT = 8,
	KEY_DATA = 9,
	SETTING_NAMES = 10,
	COMMAND_NAMES = 11,
	ERROR_MAX = 12,
};
struct CommandData::GROUP_ID
{
	enum ID
	{
		NONE = 0,
		MOVE = 1,
		DASH = 2,
		BSTEP = 3,
		JUMP = 4,
		JUMP_QUICK = 5,
		LAND_ATK = 6,
		JUMP_ATK = 7,
		LAND_FUTTOBASI = 8,
		JUMP_FUTTOBASI = 9,
		EVADE = 10,
		CLIMAX_ON = 11,
		GUARD_CANCEL = 12,
		DOWN_EVADE = 13,
		EX_ATTACK = 14,
		SPECIAL = 15,
		EX_SPECIAL = 16,
		SUPER_SP = 17,
		MAX_SUPER_SP = 18,
		CLIMAX_SUPER_SP = 19,
		ATK_DER = 20,
		SPECIAL_DER = 21,
		EX_SPECIAL_DER = 22,
		SUPER_SP_DER = 23,
		MAX_SUPER_SP_DER = 24,
		CLIMAX_SUPER_SP_DER = 25,
		EASY_COMBO = 26,
		GROUP_ID_MAX = 27,
	};
};
struct CommandData::SHOT_CHECK_FLAG
{
	enum FLAG
	{
		ALL_NG = 1,
		REFLECT = 2,
		FLAG_MASK = 3,
	};
};
struct CommandData::VALID_TERMS_FLAG
{
	enum FLAG
	{
		LAND_ONLY = 1,
		JUMP_ONLY = 2,
		CLIMAX = 4,
		LEFT_WALL = 8,
		RIGHT_WALL = 16,
		INVALID_EX = 32,
		DASH = 64,
		LOOKS_ANGLE = 128,
		ADD_VALID_COUNT = 256,
		IGNORE_MOVE_X_ANGLE = 512,
		MAMAHAHA_READY = 1024,
		FORCE_TURN_AROUND = 2048,
		KEEP_EXTRA_DAMAGE = 4096,
		REVERSAL_ONLY = 8192,
	};
};
struct CommandData::INPUT_KEY
{
	enum FLAG
	{
		LP = 1,
		LK = 2,
		HP = 4,
		HK = 8,
		LEV_1 = 16,
		LEV_2 = 32,
		LEV_3 = 64,
		LEV_4 = 128,
		N = 256,
		LEV_6 = 512,
		LEV_7 = 1024,
		LEV_8 = 2048,
		LEV_9 = 4096,
		BUTTON_MASK = 15,
		LEVER_MASK = 8176,
	};
};
struct CommandData::INPUT_COMP_TYPE
{
	enum ID
	{
		AND = 0,
		OR = 1,
	};
};
struct CommandData::INPUT_TYPE
{
	enum ID
	{
		SYSTEM = 0,
		TRIGGER = 1,
		PRESS = 2,
		RELEASE = 3,
		NO_INPUT = 4,
		INPUT_TYPE_MAX = 5,
	};
};
struct CommandData::NEXT_KEY_FRAME
{
	enum ID
	{
		SAME = 0,
		NEXT = 1,
	};
};
struct CommandData::COMMAND_FLAG
{
	enum FLAG
	{
		SCR_LEVER = 1,
		STRICT_INPUT = 2,
	};
};
struct CommandData::COMMON_COMMAND_ID
{
	enum ID
	{
		STAND = 0,
		CROUCH = 1,
		FRONT = 2,
		BACK = 3,
		DASH = 4,
		DASH_LOOP_R = 5,
		BSTEP = 6,
		FJUMP = 7,
		BJUMP = 8,
		JUMP = 9,
		FJUMP_HI = 10,
		BJUMP_HI = 11,
		FJUMP_RAPID = 12,
		BJUMP_RAPID = 13,
		JUMP_RAPID = 14,
		STAND_LP = 15,
		STAND_LK = 16,
		STAND_HP = 17,
		STAND_HK = 18,
		CROUCH_LP = 19,
		CROUCH_LK = 20,
		CROUCH_HP = 21,
		CROUCH_HK = 22,
		JUMP_LP = 23,
		JUMP_LK = 24,
		JUMP_HP = 25,
		JUMP_HK = 26,
		BLOW_ATK = 27,
		JUMP_BLOW_ATK = 28,
		FRONT_EVADE = 29,
		BACK_EVADE = 30,
		CLIMAX_MODE = 31,
		GC_FRONT_EVADE = 32,
		GC_BACK_EVADE = 33,
		GC_BLOW_ATK = 34,
		DOWN_EVADE = 35,
		THROW_ESC = 36,
		DASH_LOOP_L = 37,
		STAND_GUARD = 38,
		CROUCH_GUARD = 39,
		PUNCH_THROW = 40,
		KICK_THROW = 41,
		CANCEL_CLIMAX = 42,
		KO_STAND = 43,
		JUMP_PUNCH_THROW = 44,
		JUMP_KICK_THROW = 45,
	};
};
struct CommandData::COMMON_LIST_ID
{
	enum ID
	{
		STAND = 0,
		CROUCH = 1,
		FRONT = 2,
		BACK = 3,
		DASH = 4,
		DASH_LOOP_R = 5,
		DASH_LOOP_L = 6,
		BSTEP = 7,
		FJUMP = 8,
		BJUMP = 9,
		JUMP = 10,
		FJUMP_HI = 11,
		BJUMP_HI = 12,
		FJUMP_RAPID = 13,
		BJUMP_RAPID = 14,
		JUMP_RAPID = 15,
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
		FRONT_EVADE = 30,
		BACK_EVADE = 31,
		CLIMAX_MODE = 32,
		GC_FRONT_EVADE = 33,
		GC_BACK_EVADE = 34,
		GC_BLOW_ATK = 35,
		DOWN_EVADE = 36,
		THROW_ESC = 37,
		STAND_GUARD = 38,
		CROUCH_GUARD = 39,
		PUNCH_THROW = 40,
		KICK_THROW = 41,
		CANCEL_CLIMAX = 42,
		KO_STAND = 43,
		JUMP_PUNCH_THROW = 44,
		JUMP_KICK_THROW = 45,
		REVERSAL_DASH = 46,
		REVERSAL_BSTEP = 47,
		REVERSAL_FRONT_EVADE = 48,
		REVERSAL_BACK_EVADE = 49,
	};
};
struct CommandData::CHARGE_TYPE
{
	enum ID
	{
		NONE = 0,
		BACK = 1,
		DOWN = 2,
		BUTTON = 3,
	};
};
struct CommandData::DataHeader
{
	unsigned long uiDataVersion; // 0x0
	long iCommandCount; // 0x4
	long iInputDataCount; // 0x8
};
struct CommandData::Setting
{
	long iInputDataID; // 0x0
	long iGroup; // 0x4
	long iWaitFrame; // 0x8
	long iPrecedeFrame; // 0xC
	long iPriority; // 0x10
	float fHeightLimit; // 0x14
	float fDistLimit; // 0x18
	long iNeedPower; // 0x1C
	long iNeedClimax; // 0x20
	long iShotCheck; // 0x24
	long iValidTerms; // 0x28
	long iActionID; // 0x2C
	long iActionBranchKey; // 0x30
	long iValidCountLimit; // 0x34
	float fCharaMoveX; // 0x38
	float fCharaMoveY; // 0x3C
	long iReserve4; // 0x40
};
struct CommandData::KeyData
{
	long iKey; // 0x0
	long iCompType; // 0x4
	long iInputType; // 0x8
	long iNextKeyType; // 0xC
	long iChargeFrame; // 0x10
	long iFlag; // 0x14
};
struct CommandData::Command
{
	long iKeyCount; // 0x0
	CommandData::KeyData * pKey; // 0x8
};
struct CommandData::AiCommandInfo
{
	long iChargeType; // 0x0
	long iChargeTime; // 0x4
};
bool CommandData::IsReadSuccess(); // 0x14017D900