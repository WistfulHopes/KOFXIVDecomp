#pragma once

struct CommonEffect::EFFECT_INDEX
{
	enum ID
	{
		NONE = 0,
		HIT_BLOW_S = 1,
		HIT_BLOW_M = 2,
		HIT_BLOW_L = 3,
		GUARD_S = 4,
		GUARD_M = 5,
		GUARD_L = 6,
		GROUND_HIT = 7,
		WALL_HIT = 8,
		RESERVE_1 = 9,
		SMOKE_S = 10,
		SMOKE_M = 11,
		SMOKE_L = 12,
		SMOKE_H = 13,
		SMOKE_V = 14,
		HIT_THROUGH = 15,
		HIT_SCRATCH_S = 16,
		HIT_SCRATCH_M = 17,
		HIT_SCRATCH_L = 18,
		STUN = 19,
		GUARD_CRASH = 20,
		THROW = 21,
		THROW_FAIL = 22,
		THROW_SP = 23,
		SUPER_MOVE = 24,
		CLIMAX_SP = 25,
		CLIMAX_MODE = 26,
		GUARD_POINT = 27,
		HIT_SLASH_S = 28,
		HIT_SLASH_M = 29,
		HIT_SLASH_L = 30,
		MAX_SUPER_MOVE = 31,
		RED_FIRE_DAMAGE = 32,
		BLUE_FIRE_DAMAGE = 33,
		BLUE_ELEC_DAMAGE = 34,
		AKEBONO_SUPER = 35,
		AKEBONO_CLIMAX = 36,
		COLD_DAMAGE = 37,
		YELLOW_ELEC_DAMAGE = 38,
		RED_AURA_DAMAGE = 39,
		BLUE_AURA_DAMAGE = 40,
		RED_BLUE_AURA_DAMAGE = 41,
		ATEMI = 42,
		GUARD_LIGHT = 43,
		MAX = 44,
	};
};