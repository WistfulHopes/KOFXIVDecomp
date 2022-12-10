#pragma once

struct ACTION_DEBUG_FLAG
{
	enum PAGE_ID
	{
		PAGE_1 = 0,
		PAGE_2 = 1,
		PAGE_3 = 2,
		PAGE_ID_MAX = 3,
	};
	enum ID
	{
		FLAG_SETTING_MODE = 0,
		PAUSE_MODE = 1,
		SETTING_VALIDATE = 2,
		DEBUG_MENU_START = 3,
		PAGE_1_START = 3,
		EXIT_GAME = 3,
		HUD_OFF = 4,
		ACTOR_CHARA_BONE = 5,
		ACTOR_CHARA_CENTER = 6,
		ACTOR_SHOT_CENTER = 7,
		ACTOR_ETC_CENTER = 8,
		ACTOR_HIT_RECT = 9,
		ACTOR_ATK_RECT = 10,
		ACTOR_GUARD_RANGE = 11,
		ACTOR_INFO = 12,
		COMMAND_INFO = 13,
		ATTACK_DATA = 14,
		CPU_DATA = 15,
		SCORE_DATA = 16,
		KEY_HISTORY = 17,
		INVISIBLE_STAGE = 18,
		INVISIBLE_CHARA = 19,
		INVISIBLE_EFFECT = 20,
		PROJECTION_BLEND = 21,
		DISABLE_MASK_TEX = 22,
		DRAW_DEBUG_TEX = 23,
		INVALID_Z_OFFSET = 24,
		FRAME_BY_FRAME_KEY = 25,
		MIRROR_INPUT = 26,
		CLIMAX_COMMAND_DEBUG = 27,
		FREE_CAMERA_VIEW = 28,
		FREE_CAMERA_CONTROL = 29,
		SAFE_AREA_INFO = 30,
		KEY_RECORD = 31,
		KEY_DELAY = 32,
		DATA_RELOAD = 33,
		PAGE_1_MAX = 34,
		PAGE_2_START = 34,
		VITAL_RECOVER = 34,
		EX_POWER_RECOVER_1P = 35,
		EX_POWER_RECOVER_2P = 36,
		MAX_STOCK_POWER = 37,
		INFINITE_MAX_MODE = 38,
		ALL_GUARD = 39,
		ONE_HIT_GUARD = 40,
		ALL_JUST_GUARD = 41,
		AUTO_UKEMI = 42,
		LOCK_LEVER_DOWN = 43,
		NO_STUN = 44,
		GUARD_CRASH = 45,
		ONE_ATK_KO_1P = 46,
		ONE_ATK_KO_2P = 47,
		ONE_HIT_STUN = 48,
		ALWAYS_COUNTER = 49,
		SET_TIME_OVER = 50,
		ROUND_TIME_STOP = 51,
		ROUND_TIME_12 = 52,
		ACTION_SPEED = 53,
		CPU_PLAYER_1 = 54,
		CPU_PLAYER_2 = 55,
		CPU_LEVEL_1 = 56,
		CPU_LEVEL_2 = 57,
		CPU_DIFFICULTY_1 = 58,
		CPU_DIFFICULTY_2 = 59,
		CPU_SEQUENCE_TEST = 60,
		KEY_RECORD_TYPE = 61,
		KEY_RECORD_SLOT = 62,
		KEY_PLAY_SLOT = 63,
		KEY_REVERSAL_SITUATION = 64,
		ROUND_RESTART = 65,
		PAGE_2_MAX = 66,
		PAGE_3_START = 66,
		PHOTO_MODE = 66,
		BG_COLOR_SET = 67,
		BG_COLOR_R = 68,
		BG_COLOR_G = 69,
		BG_COLOR_B = 70,
		EYE_CONTROL_MODE = 71,
		MOTION_BLUR_TEST_1P = 72,
		MOTION_BLUR_TEST_2P = 73,
		ENABLE_LIGHT_SETTING = 74,
		CAMERA_LIGHT_1P = 75,
		CAMERA_LIGHT_2P = 76,
		CAMERA_LIGHT_3P = 77,
		CAMERA_LIGHT_4P = 78,
		EFFECT_LIGHT_1P = 79,
		EFFECT_LIGHT_2P = 80,
		EFFECT_LIGHT_3P = 81,
		EFFECT_LIGHT_4P = 82,
		LIGHT_FOLLOW_CAMERA = 83,
		POSTPROCESS_EFFECTS = 84,
		DISABLE_SELF_SHADOW = 85,
		IGNORE_SHADOW_PASS = 86,
		IGNORE_FXAA = 87,
		INVALID_SOUND = 88,
		INVALID_AMBIENCE_SE = 89,
		INVALID_CHARA_VOICE = 90,
		INVLAID_SYSTEM_VOICE = 91,
		INVALID_BGM = 92,
		INVALID_PAD_SE = 93,
		UNLIMITED_PAD_VOICE = 94,
		BATTLE_SCORE_CHEAT = 95,
		FORCE_CPU_CONTROL = 96,
		PREV_ROUND_SET = 97,
		PAGE_3_MAX = 98,
		MAX = 98,
	};
	struct PageIndexTable;
	static const char * flagStr[98]; // 0xFFFFFFFFFFFFFFFF
	static const ACTION_DEBUG_FLAG::PageIndexTable pageIndexTbl[6]; // 0xFFFFFFFFFFFFFFFF
	static long iCursor; // 0xFFFFFFFFFFFFFFFF
	static long iPage; // 0xFFFFFFFFFFFFFFFF
	static long iWait; // 0xFFFFFFFFFFFFFFFF
	static long iExPowerStock; // 0xFFFFFFFFFFFFFFFF
	struct BGColor;
	static ACTION_DEBUG_FLAG::BGColor bgColor; // 0xFFFFFFFFFFFFFFFF
	static char iCameraLightID[4]; // 0xFFFFFFFFFFFFFFFF
};
struct ACTION_DEBUG_FLAG::PageIndexTable
{
	long iStartIdx; // 0x0
	long iMaxIdx; // 0x4
};
struct ACTION_DEBUG_FLAG::BGColor
{
	unsigned char r; // 0x0
	unsigned char g; // 0x1
	unsigned char b; // 0x2
	unsigned char col[3]; // 0x0
};
class std::bitset<98>
{
	typedef unsigned long long _Ty;
	class reference;
public:
	static void _Validate(unsigned long long);
	bool _Subscript(unsigned long long);
	std::bitset<98>::reference operator[](unsigned long long);
	bool operator[](unsigned long long);
	bitset<98>(unsigned long long);
	bitset<98>();
	static const bool _Need_mask; // 0xFFFFFFFFFFFFFFFF
	static const unsigned long long _Mask; // 0xFFFFFFFFFFFFFFFF
	std::bitset<98> & operator&=(const std::bitset<98> &);
	std::bitset<98> & operator|=(const std::bitset<98> &);
	std::bitset<98> & operator^=(const std::bitset<98> &);
	std::bitset<98> & operator<<=(unsigned long long);
	std::bitset<98> & operator>>=(unsigned long long);
	std::bitset<98> & set(unsigned long long, bool);
	std::bitset<98> & set();
	std::bitset<98> & reset(unsigned long long);
	std::bitset<98> & reset();
	operator~();
	std::bitset<98> & flip(unsigned long long);
	std::bitset<98> & flip();
	unsigned long to_ulong();
	unsigned long long to_ullong();
	unsigned long long count();
	unsigned long long size();
	unsigned long long hash();
	bool operator==(const std::bitset<98> &);
	bool operator!=(const std::bitset<98> &);
	bool test(unsigned long long);
	bool any();
	bool none();
	bool all();
	std::bitset<98> operator<<(unsigned long long);
	std::bitset<98> operator>>(unsigned long long);
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