#pragma once

struct AppMain::CREATE_ROOM_SETTING
{
	NETWORK_ANTENNA_SELECT_UI m_AntennaLevel; // 0x0
	NETWORK_SUCCESSRATE_SELECT m_SuccessHighRate; // 0x4
	NETWORK_LIVE_SELECT m_LiveType; // 0x8
	ELobbyDistanceFilter m_Area; // 0xC
	NETWORK_GRADE_SELECT m_GradeSelect; // 0x10
	char m_RoomName[129]; // 0x14
	NETWORK_ROOM_BATTLE_TYPE m_RoomBattleType; // 0x98
	NETWORK_ROUND_SELECT m_RoundType; // 0x9C
	BATTLE_ROUND_TIMER_TYPE m_RoundTimerType; // 0xA0
	long m_RoomMemberNum; // 0xA4
	long m_PrivateSlot; // 0xA8
};