#pragma once

struct AppMain::ENTRY_SETTING
{
	GAME_RULE m_GameRule; // 0x0
	ELobbyDistanceFilter m_AreaType; // 0x4
	NETWORK_ANTENNA_SELECT_UI m_AntennaLevel; // 0x8
	NETWORK_SUCCESSRATE_SELECT m_SuccessHighRate; // 0xC
	NETWORK_LIVE_SELECT m_LiveType; // 0x10
	NETWORK_GRADE_SELECT m_GradeSelect; // 0x14
	char m_RoomName[128]; // 0x18
	NETWORK_ROUND_SELECT m_RoundType; // 0x98
	BATTLE_ROUND_TIMER_TYPE m_RoundTimerType; // 0x9C
};