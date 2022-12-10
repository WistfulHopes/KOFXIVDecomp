#pragma once

struct AppMain::OnlineRoomMemberParams
{
	Scene_RoomMember * pScene; // 0x0
	OnlineRoomMemberParams();
};
struct AppMain::OnlineBattleGUIParams
{
	bool bInitialize; // 0x0
	bool bOnlineGUIEnabled; // 0x1
	bool bOnlineBattleWatching; // 0x2
	bool bPlayWatching; // 0x3
	PLAYER_ID battleCharacterPlayerID; // 0x4
	long boneIndexHead; // 0x8
	long boneIndexRoot; // 0xC
	float beforePosX; // 0x10
	float beforePosY; // 0x14
	Fw::ROOM_CHATMESSAGE_INFO s_TextChatLog[16]; // 0x18
	unsigned long long s_TextChatTick; // 0x1118
	float descriptionFadeFrame; // 0x1120
	float descriptionRenderFrame; // 0x1124
	long debug_number1; // 0x1128
	OnlineBattleGUIParams();
};