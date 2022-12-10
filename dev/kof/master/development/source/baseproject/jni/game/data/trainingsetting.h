#pragma once

struct TrainingSetting
{
	enum RESTART
	{
		LEFT = 0,
		CENTER = 1,
		RIGHT = 2,
	};
	enum ACTION
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
		PLAYER = 16,
		CPU_VERY_EASY = 17,
		CPU_EASY = 18,
		CPU_NORMAL = 19,
		CPU_HARD = 20,
		CPU_VERY_HARD = 21,
	};
	enum GUARD
	{
		GUARD_OFF = 0,
		GUARD_ON = 1,
		ALLGUARD = 2,
		ONEHIT_GUARD = 3,
		ONEGUARD_JUMP = 4,
		GC_FRONT = 5,
		GC_BACK = 6,
		GC_ATTACK = 7,
		GUARD_RANDOM = 8,
	};
	enum COUNTER
	{
		COUNTER_OFF = 0,
		F_ATTACK = 1,
		COUNTER_RANDOM = 2,
	};
	enum ATTACK
	{
		ATTACK_OFF = 0,
		LP = 1,
		LK = 2,
		HP = 3,
		HK = 4,
		BLOW_OFF = 5,
		THROW_F = 6,
		THROW_B = 7,
	};
	enum PAGE
	{
		PAGE_01 = 1,
		PAGE_02 = 2,
		PAGE_03 = 4,
		PAGE_ALL = 7,
	};
	enum RECORD_TYPE
	{
		NORMAL = 0,
		REVERSAL = 1,
		TYPE_MAX = 2,
	};
	enum REVERSAL_TYPE
	{
		REVERSAL_ALL = 0,
		REVERSAL_DOWN = 1,
		REVERSAL_DAMAGE = 2,
		REVERSAL_GUARD = 3,
	};
	enum RECORD_SLOT
	{
		SLOT_NONE = 0,
		SLOT_1 = 1,
		SLOT_2 = 2,
		SLOT_3 = 3,
		SLOT_4 = 4,
		SLOT_5 = 5,
		SLOT_MAX = 6,
	};
	TrainingSetting::RESTART m_iRestart; // 0x0
	TrainingSetting::ACTION m_iAction; // 0x4
	TrainingSetting::GUARD m_iGuard; // 0x8
	TrainingSetting::COUNTER m_iCounter; // 0xC
	TrainingSetting::ATTACK m_iAttack; // 0x10
	long m_iUkemi; // 0x14
	long m_iKeyData; // 0x18
	long m_iAttackData; // 0x1C
	long m_iPowerGauge[2]; // 0x20
	long m_iMAXModeGauge[2]; // 0x28
	long m_iGuardGauge[2]; // 0x30
	long m_iStun[2]; // 0x38
	bool m_bRestartOn; // 0x40
	TrainingSetting::RECORD_TYPE m_iRecordMode; // 0x44
	TrainingSetting::REVERSAL_TYPE m_iReversalType; // 0x48
	TrainingSetting::RECORD_SLOT m_iRecordSlot; // 0x4C
	long m_iPlaySlot[6][2]; // 0x50
	TrainingSetting();
	void setDefalut(long, long, bool);
};