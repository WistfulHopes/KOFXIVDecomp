#pragma once

class CharaBaseStatus :
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
		VERSION_6 = 6,
	};
	enum READ_ERROR_ID
	{
		NONE = 0,
		SUCCESS = 1,
		OPEN = 2,
		FILE_HEADER = 3,
		FILE_ID = 4,
		DATA_HEADER = 5,
		STATUS = 6,
		ACTION_HEAP = 7,
		ACTION = 8,
		NO_READY_ACT = 9,
		ERROR_MAX = 10,
	};
	struct STATUS_FLAG;
	struct DataHeader;
	struct EyeLimitAngle;
	struct BattleDemoAction;
	enum <unnamed-enum-BATTLE_DEMO_ACT_DATA_MAX>
	{
		BATTLE_DEMO_ACT_DATA_MAX = 10,
		BATTLE_ROUND_START_DEMO_MAX = 5,
		BATTLE_ROUND_WIN_DEMO_MAX = 5,
	};
	struct Status;
	struct GENDER;
	struct PHYSIQUE;
	struct FOOT_TYPE;
	struct JUMP_THROW_INPUT;
	struct CommonActionData;
	struct MamahahaActionData;
	struct BigTunActionData;
	struct CocoActionData;
	struct DragonActionData;
	CharaBaseStatus::DataHeader dataHeader; // 0x18
	CharaBaseStatus::Status status; // 0x20
	CharaBaseStatus::CommonActionData * pCommonAct; // 0xF0
	CharaBaseStatus();
	virtual ~CharaBaseStatus();
	virtual bool CheckFileID();
	virtual void InitData();
	virtual long ReadFile(const char *);
	virtual long ReadBuffer(unsigned char *, unsigned long);
	virtual bool IsReadSuccess();
	long GetCommonActionType(long);
	long GetCommonActionID(long);
	long GetRivalDemoActionID(long);
	long GetRivalRoundStartAcitonID(long);
	long GetRivalRoundWinActionID(long);
	void SetCharacterVitalStatusOverwrite(long);
protected:
	void ConvertVersion3to4();
	void ConvertVersion4to5();
	void ConvertVersion5to6();
};
enum CharaBaseStatus::READ_ERROR_ID
{
	NONE = 0,
	SUCCESS = 1,
	OPEN = 2,
	FILE_HEADER = 3,
	FILE_ID = 4,
	DATA_HEADER = 5,
	STATUS = 6,
	ACTION_HEAP = 7,
	ACTION = 8,
	NO_READY_ACT = 9,
	ERROR_MAX = 10,
};
struct CharaBaseStatus::STATUS_FLAG
{
	enum FLAG
	{
		INVALID_STUN = 1,
		INVALID_GUARD_CRASH = 2,
		NO_MOVE_HEAD = 4,
		NO_MOVE_EYE = 8,
	};
};
struct CharaBaseStatus::DataHeader
{
	unsigned long uiDataVersion; // 0x0
	unsigned long uiCommonActionCount; // 0x4
};
struct CharaBaseStatus::EyeLimitAngle
{
	float fUp; // 0x0
	float fLow; // 0x4
	float fLeft; // 0x8
	float fRight; // 0xC
};
struct CharaBaseStatus::BattleDemoAction
{
	short iRivalCharaID; // 0x0
	short iActionID; // 0x2
};
struct CharaBaseStatus::Status
{
	long iVital; // 0x0
	long iStun; // 0x4
	long iGuard; // 0x8
	short iStandGuardRectID; // 0xC
	short iCrouchGuardRectID; // 0xE
	float fBackMove; // 0x10
	float fBoneScale; // 0x14
	float fLowPunchDist; // 0x18
	float fLowKickDist; // 0x1C
	float fHiPunchDist; // 0x20
	float fHiKickDist; // 0x24
	short iGender; // 0x28
	short iPhysique; // 0x2A
	short iFootType; // 0x2C
	short iJumpThrowInput; // 0x2E
	float fHeadAngleUp; // 0x30
	float fHeadAngleLow; // 0x34
	CharaBaseStatus::EyeLimitAngle leftEyeLimit; // 0x38
	CharaBaseStatus::EyeLimitAngle rightEyeLimit; // 0x48
	CharaBaseStatus::BattleDemoAction demoActData[10]; // 0x58
	CharaBaseStatus::BattleDemoAction roundStartActData[5]; // 0x80
	CharaBaseStatus::BattleDemoAction roundWinActData[5]; // 0x94
	long iReserveData[8]; // 0xA8
	long iFlag; // 0xC8
};
struct CharaBaseStatus::GENDER
{
	enum ID
	{
		MALE = 0,
		FEMALE = 1,
	};
};
struct CharaBaseStatus::PHYSIQUE
{
	enum ID
	{
		NORMAL = 0,
		SMALL = 1,
		LARGE = 2,
	};
};
struct CharaBaseStatus::FOOT_TYPE
{
	enum ID
	{
		NORMAL = 0,
		BARE = 1,
		GETA = 2,
		HIGH_HEELS = 3,
		NINJA = 4,
	};
};
struct CharaBaseStatus::JUMP_THROW_INPUT
{
	enum FLAG
	{
		FJUMP = 1,
		BJUMP = 2,
		JUMP = 4,
		FJUMP_LOW = 8,
		BJUMP_LOW = 16,
		JUMP_LOW = 32,
		FJUMP_MID = 64,
		BJUMP_MID = 128,
		FJUMP_HI = 256,
		BJUMP_HI = 512,
		PUNCH_OK = 1024,
		KICK_OK = 2048,
	};
};
struct CharaBaseStatus::CommonActionData
{
	enum ACTION_NAME
	{
		STAND = 0,
		S_TO_C = 1,
		CROUCH = 2,
		C_TO_S = 3,
		FRONT_MOVE = 4,
		BACK_MOVE = 5,
		DASH = 6,
		DASH_END = 7,
		BACK_STEP = 8,
		FJUMP_INIT = 9,
		BJUMP_INIT = 10,
		FJUMP_HI_INIT = 11,
		BJUMP_HI_INIT = 12,
		JUMP_INIT = 13,
		FJUMP = 14,
		BJUMP = 15,
		JUMP = 16,
		FJUMP_LOW = 17,
		BJUMP_LOW = 18,
		JUMP_LOW = 19,
		FJUMP_MID = 20,
		BJUMP_MID = 21,
		FJUMP_HI = 22,
		BJUMP_HI = 23,
		FJUMP_LAND = 24,
		BJUMP_LAND = 25,
		JUMP_LAND = 26,
		FJUMP_ATK_LAND = 27,
		BJUMP_ATK_LAND = 28,
		JUMP_ATK_LAND = 29,
		STAND_TURN = 30,
		CROUCH_TURN = 31,
		SGUARD_START = 32,
		SGUARD_HEAD = 33,
		SGUARD_END = 34,
		SGUARD_BODY = 35,
		SGUARD_FOOT = 36,
		CGUARD_START = 37,
		CGUARD_MAIN = 38,
		CGUARD_END = 39,
		FRONT_EVADE = 40,
		BACK_EVADE = 41,
		GC_FRONT_EVADE = 42,
		GC_BACK_EVADE = 43,
		GC_BLOW_ATK = 44,
		DOWN_EVADE = 45,
		THROW_ESC_ATK = 46,
		THROW_ESC_DEF = 47,
		CLIMAX_MODE = 48,
		STAND_NEAR_LP = 49,
		STAND_FAR_LP = 50,
		STAND_NEAR_LK = 51,
		STAND_FAR_LK = 52,
		STAND_NEAR_HP = 53,
		STAND_FAR_HP = 54,
		STAND_NEAR_HK = 55,
		STAND_FAR_HK = 56,
		CROUCH_LP = 57,
		CROUCH_LK = 58,
		CROUCH_HP = 59,
		CROUCH_HK = 60,
		FJUMP_LOW_LP = 61,
		BJUMP_LOW_LP = 62,
		FJUMP_MID_LP = 63,
		BJUMP_MID_LP = 64,
		FJUMP_HI_LP = 65,
		BJUMP_HI_LP = 66,
		FJUMP_LP = 67,
		BJUMP_LP = 68,
		JUMP_LOW_LP = 69,
		JUMP_LP = 70,
		FJUMP_LOW_LK = 71,
		BJUMP_LOW_LK = 72,
		FJUMP_MID_LK = 73,
		BJUMP_MID_LK = 74,
		FJUMP_HI_LK = 75,
		BJUMP_HI_LK = 76,
		FJUMP_LK = 77,
		BJUMP_LK = 78,
		JUMP_LOW_LK = 79,
		JUMP_LK = 80,
		FJUMP_LOW_HP = 81,
		BJUMP_LOW_HP = 82,
		FJUMP_MID_HP = 83,
		BJUMP_MID_HP = 84,
		FJUMP_HI_HP = 85,
		BJUMP_HI_HP = 86,
		FJUMP_HP = 87,
		BJUMP_HP = 88,
		JUMP_LOW_HP = 89,
		JUMP_HP = 90,
		FJUMP_LOW_HK = 91,
		BJUMP_LOW_HK = 92,
		FJUMP_MID_HK = 93,
		BJUMP_MID_HK = 94,
		FJUMP_HI_HK = 95,
		BJUMP_HI_HK = 96,
		FJUMP_HK = 97,
		BJUMP_HK = 98,
		JUMP_LOW_HK = 99,
		JUMP_HK = 100,
		BLOW_ATK = 101,
		FJUMP_LOW_BLOW_ATK = 102,
		BJUMP_LOW_BLOW_ATK = 103,
		FJUMP_MID_BLOW_ATK = 104,
		BJUMP_MID_BLOW_ATK = 105,
		FJUMP_HI_BLOW_ATK = 106,
		BJUMP_HI_BLOW_ATK = 107,
		FJUMP_BLOW_ATK = 108,
		BJUMP_BLOW_ATK = 109,
		JUMP_LOW_BLOW_ATK = 110,
		JUMP_BLOW_ATK = 111,
		HEAD_DMG_LOW = 112,
		HEAD_DMG_MID = 113,
		HEAD_DMG_HI = 114,
		BODY_DMG_LOW = 115,
		BODY_DMG_MID = 116,
		BODY_DMG_HI = 117,
		FOOT_DMG_LOW = 118,
		FOOT_DMG_MID = 119,
		FOOT_DMG_HI = 120,
		KAKATO_DMG = 121,
		STAND_UP_DMG = 122,
		CROUCH_DMG_LOW = 123,
		CROUCH_DMG_MID = 124,
		CROUCH_DMG_HI = 125,
		HARAI_DMG_UP = 126,
		HARAI_DMG_DOWN = 127,
		FUKITOBI_DMG_H_UP_LOW = 128,
		FUKITOBI_DMG_H_UP_MID = 129,
		FUKITOBI_DMG_H_UP_HI = 130,
		FUKITOBI_DMG_H_UP_RET_LOW = 131,
		FUKITOBI_DMG_H_UP_RET_MID = 132,
		FUKITOBI_DMG_H_UP_RET_HI = 133,
		FUKITOBI_DMG_H_DOWN_LOW = 134,
		FUKITOBI_DMG_H_DOWN_MID = 135,
		FUKITOBI_DMG_H_DOWN_HI = 136,
		FUKITOBI_DMG_H_DOWN_RET_LOW = 137,
		FUKITOBI_DMG_H_DOWN_RET_MID = 138,
		FUKITOBI_DMG_H_DOWN_RET_HI = 139,
		FUKITOBI_DMG_V_UP_LOW = 140,
		FUKITOBI_DMG_V_UP_MID = 141,
		FUKITOBI_DMG_V_UP_HI = 142,
		FUKITOBI_DMG_V_DOWN_LOW = 143,
		FUKITOBI_DMG_V_DOWN_MID = 144,
		FUKITOBI_DMG_V_DOWN_HI = 145,
		KIRIMOMI_DMG_H_LOW = 146,
		KIRIMOMI_DMG_H_MID = 147,
		KIRIMOMI_DMG_H_HI = 148,
		KIRIMOMI_DMG_V_LOW = 149,
		KIRIMOMI_DMG_V_MID = 150,
		KIRIMOMI_DMG_V_HI = 151,
		TATAKI_DMG_UP = 152,
		TATAKI_DMG_DOWN = 153,
		TATAKI_DMG_UP_BOUND = 154,
		TATAKI_DMG_DOWN_BOUND = 155,
		TATAKI_DMG_UP_BOUND_NH = 156,
		TATAKI_DMG_DOWN_BOUND_NH = 157,
		BOUND_DMG_UP_LOW = 158,
		BOUND_DMG_UP_HI = 159,
		BOUND_DMG_DOWN_LOW = 160,
		BOUND_DMG_DOWN_HI = 161,
		SLIDE_DMG_UP_LOW = 162,
		SLIDE_DMG_UP_MID = 163,
		SLIDE_DMG_UP_HI = 164,
		SLIDE_DMG_DOWN_LOW = 165,
		SLIDE_DMG_DOWN_MID = 166,
		SLIDE_DMG_DOWN_HI = 167,
		DOWN_ATTACK_DMG_UP = 168,
		DOWN_ATTACK_DMG_DOWN = 169,
		WALL_FUKITOBI_DMG = 170,
		WALL_DMG_FALL = 171,
		WALL_DMG_KUZURE = 172,
		WALL_DMG_REVERSE = 173,
		WALL_DMG_NONE1 = 174,
		WALL_DMG_NONE2 = 175,
		WALL_DMG_NONE3 = 176,
		GROUND_REVERSE_DMG_UP_LOW = 177,
		GROUND_REVERSE_DMG_UP_MID = 178,
		GROUND_REVERSE_DMG_UP_HI = 179,
		GROUND_REVERSE_DMG_DOWN_LOW = 180,
		GROUND_REVERSE_DMG_DOWN_MID = 181,
		GROUND_REVERSE_DMG_DOWN_HI = 182,
		STAND_KUZURE_DMG = 183,
		CROUCH_KUZURE_DMG = 184,
		BLOW_ATK_DMG = 185,
		DOWN_DMG_UP = 186,
		DOWN_DMG_DOWN = 187,
		RISE_UP = 188,
		RISE_DOWN = 189,
		STUN_MAIN = 190,
		STUN_RETURN = 191,
		STUN_FUKITOBI = 192,
		STUN_BOUND = 193,
		STUN_DOWN = 194,
		STUN_RISE = 195,
		GUARD_CRASH_STAND = 196,
		GUARD_CRASH_STAND_RET = 197,
		GUARD_CRASH_CROUCH = 198,
		GUARD_CRASH_CROUCH_RET = 199,
		SGUARD_HEAD_S = 200,
		SGUARD_BODY_S = 201,
		SGUARD_FOOT_S = 202,
		CGUARD_MAIN_S = 203,
		BOUND_DMG_UP_LOW_NH = 204,
		BOUND_DMG_UP_HI_NH = 205,
		BOUND_DMG_DOWN_LOW_NH = 206,
		BOUND_DMG_DOWN_HI_NH = 207,
		DOWN_DMG_UP_NH = 208,
		DOWN_DMG_DOWN_NH = 209,
		THROW_STAND_NEAR_HP = 210,
		THROW_STAND_FAR_HP = 211,
		THROW_STAND_NEAR_HK = 212,
		THROW_STAND_FAR_HK = 213,
		CANCEL_CLIMAX_MODE = 214,
		DASH_FRONT_EVADE = 215,
		TURN_DMG_FRONT = 216,
		TURN_DMG_BACK = 217,
		UP_SPIN_DMG_GROUND = 218,
		UP_SPIN_DMG_AIR = 219,
		BASE_MOVE_RESERVE6 = 220,
		BASE_MOVE_RESERVE7 = 221,
		BASE_MOVE_RESERVE8 = 222,
		BASE_MOVE_RESERVE9 = 223,
		BASE_MOVE_RESERVE10 = 224,
		CHEAP_KO = 225,
		LOW_ATK_KO = 226,
		FUKITOBI_KO = 227,
		SPECIAL_KO = 228,
		WIN_1 = 229,
		WIN_2 = 230,
		WIN_RESULT_MAIN = 231,
		WIN_RESULT_SUB = 232,
		LOSE = 233,
		TIMU_UP_LOSE = 234,
		DRAW_GAME = 235,
		START_WAIT = 236,
		ENTRY = 237,
		SETUP = 238,
		WIN_SP = 239,
		WIN_RESULT_MAIN_SP = 240,
		DIRECTION_MOVE_RESERVE6 = 241,
		DIRECTION_MOVE_RESERVE7 = 242,
		DIRECTION_MOVE_RESERVE8 = 243,
		DIRECTION_MOVE_RESERVE9 = 244,
		DIRECTION_MOVE_RESERVE10 = 245,
		ACTION_NAME_MAX = 246,
	};
	long iActionID; // 0x0
};
struct CharaBaseStatus::MamahahaActionData
{
	enum ACTION_NAME
	{
		AMUBE_YATORO_L = 49,
		AMUBE_YATORO_H = 50,
		AMUBE_YATORO_EX = 51,
		AMUBE_YATORO_BACK = 52,
		YATORO_POCK = 53,
		SUPER_YATORO_L = 57,
		SUPER_YATORO_H = 58,
		SUPER_YATORO_BACK = 59,
		MAX_YATORO = 61,
		MAX_YATORO_BACK = 62,
		THROW_K = 212,
		THROW_K_BACK = 213,
		RIDE = 9,
		GET_OFF = 10,
		RIDE_READY = 11,
		RIDE_TURN = 12,
		RIDE_F_MOVE = 13,
		RIDE_B_MOVE = 14,
		CLIMAX_KAMUI = 71,
		CLIMAX_KAMUI_HIT = 72,
		CLIMAX_KAMUI_BACK = 73,
	};
};
struct CharaBaseStatus::BigTunActionData
{
	enum ACTION_NAME
	{
		GEKIHOU = 4,
		GEKIHOU_EX = 5,
		DAI_GEKIHOU = 6,
		MAX_DAI_GEKIHOU = 7,
		SENPU_GOUKEN = 9,
		MAX_SENPU_GOUKEN = 10,
		CLIMAX_KOUREISIN_1 = 14,
		CLIMAX_KOUREISIN_2 = 15,
	};
};
struct CharaBaseStatus::CocoActionData
{
	enum ACTION_NAME
	{
		RIVAL_DEMO_1 = 9,
		RIVAL_DEMO_2 = 10,
		RIVAL_DEMO_3 = 11,
		RIVAL_DEMO_4 = 12,
		RIVAL_DEMO_5 = 13,
		RIVAL_DEMO_6 = 14,
		RIVAL_DEMO_7 = 15,
		RIVAL_DEMO_8 = 16,
		RIVAL_DEMO_9 = 17,
		RIVAL_DEMO_10 = 18,
	};
};
struct CharaBaseStatus::DragonActionData
{
	enum ACTION_NAME
	{
		CLIMAX_START = 4,
		CLIMAX_HIT = 5,
	};
};
bool CharaBaseStatus::IsReadSuccess(); // 0x14017D900