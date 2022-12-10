#pragma once

struct MISSION_DEBUG_FLAG
{
	enum PAGE_ID
	{
		PAGE_1 = 0,
		PAGE_2 = 1,
		PAGE_ID_MAX = 2,
	};
	enum ID
	{
		FLAG_SETTING_MODE = 0,
		PAUSE_MODE = 1,
		SETTING_VALIDATE = 2,
		DEBUG_MENU_START = 3,
		PAGE_1_START = 3,
		EXIT_GAME = 3,
		ROUND_RESTART = 4,
		MISSION_SELECT = 5,
		DEMO_PLAY = 6,
		BLANK_DATA_1 = 7,
		SAMPLE_KEY_RECORD = 8,
		SAMPLE_KEY_PLAY = 9,
		BLANK_DATA_2 = 10,
		SAMPLE_KEY_SAVE = 11,
		BLANK_DATA_3 = 12,
		SAMPLE_KEY_LOAD = 13,
		SAFE_AREA_INFO = 14,
		KEY_DELAY = 15,
		DATA_RELOAD = 16,
		PAGE_1_MAX = 17,
		PAGE_2_START = 17,
		HUD_OFF = 17,
		ACTOR_CHARA_BONE = 18,
		ACTOR_CHARA_CENTER = 19,
		ACTOR_SHOT_CENTER = 20,
		ACTOR_ETC_CENTER = 21,
		ACTOR_HIT_RECT = 22,
		ACTOR_ATK_RECT = 23,
		ACTOR_GUARD_RANGE = 24,
		ACTOR_INFO = 25,
		KEY_HISTORY = 26,
		INVISIBLE_STAGE = 27,
		INVISIBLE_CHARA = 28,
		INVISIBLE_EFFECT = 29,
		INVALID_SOUND = 30,
		INVALID_AMBIENCE_SE = 31,
		INVALID_CHARA_VOICE = 32,
		INVLAID_SYSTEM_VOICE = 33,
		INVALID_BGM = 34,
		INVALID_PAD_SE = 35,
		UNLIMITED_PAD_VOICE = 36,
		PAGE_2_MAX = 37,
		MAX = 37,
	};
	struct PageIndexTable;
	static const char * flagStr[37]; // 0xFFFFFFFFFFFFFFFF
	static const MISSION_DEBUG_FLAG::PageIndexTable pageIndexTbl[4]; // 0xFFFFFFFFFFFFFFFF
	static long iCursor; // 0xFFFFFFFFFFFFFFFF
	static long iPage; // 0xFFFFFFFFFFFFFFFF
	static long iMissionID; // 0xFFFFFFFFFFFFFFFF
};
struct MISSION_DEBUG_FLAG::PageIndexTable
{
	long iStartIdx; // 0x0
	long iMaxIdx; // 0x4
};
class std::bitset<37>
{
	typedef unsigned long long _Ty;
	class reference;
public:
	static void _Validate(unsigned long long);
	bool _Subscript(unsigned long long);
	std::bitset<37>::reference operator[](unsigned long long);
	bool operator[](unsigned long long);
	bitset<37>(unsigned long long);
	bitset<37>();
	static const bool _Need_mask; // 0xFFFFFFFFFFFFFFFF
	static const unsigned long long _Mask; // 0xFFFFFFFFFFFFFFFF
	std::bitset<37> & operator&=(const std::bitset<37> &);
	std::bitset<37> & operator|=(const std::bitset<37> &);
	std::bitset<37> & operator^=(const std::bitset<37> &);
	std::bitset<37> & operator<<=(unsigned long long);
	std::bitset<37> & operator>>=(unsigned long long);
	std::bitset<37> & set(unsigned long long, bool);
	std::bitset<37> & set();
	std::bitset<37> & reset(unsigned long long);
	std::bitset<37> & reset();
	operator~();
	std::bitset<37> & flip(unsigned long long);
	std::bitset<37> & flip();
	unsigned long to_ulong();
	unsigned long long to_ullong();
	unsigned long long count();
	unsigned long long size();
	unsigned long long hash();
	bool operator==(const std::bitset<37> &);
	bool operator!=(const std::bitset<37> &);
	bool test(unsigned long long);
	bool any();
	bool none();
	bool all();
	std::bitset<37> operator<<(unsigned long long);
	std::bitset<37> operator>>(unsigned long long);
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