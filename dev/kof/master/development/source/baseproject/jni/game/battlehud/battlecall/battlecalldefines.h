#pragma once

class BattleCallDefines
{
	enum VoiceType
	{
		VOICETYPE_SYSTEM = 0,
		VOICETYPE_MALE = 1,
		VOICETYPE_FEMALE = 2,
	};
	enum AnimationCategory
	{
		ANIMCATEGORY_NONE = 0,
		ANIMCATEGORY_ROUND_START = 1,
		ANIMCATEGORY_KO = 2,
		ANIMCATEGORY_BATTLE_RESULT = 3,
	};
	struct EAnimationType;
};
enum BattleCallDefines::AnimationCategory
{
	ANIMCATEGORY_NONE = 0,
	ANIMCATEGORY_ROUND_START = 1,
	ANIMCATEGORY_KO = 2,
	ANIMCATEGORY_BATTLE_RESULT = 3,
};
struct BattleCallDefines::EAnimationType
{
	enum Type
	{
		NONE = 0,
		READY_GO = 1,
		KO = 2,
		DOUBLE_KO = 3,
		TIME_UP = 4,
		COMPLETE = 5,
		YOU_WIN = 6,
		YOU_LOSE = 7,
		DRAW = 8,
		PLAYER_WIN = 9,
		PERFECT = 10,
	};
};