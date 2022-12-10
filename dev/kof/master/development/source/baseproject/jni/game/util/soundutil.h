#pragma once

enum AppMain::SoundGroupSpec
{
	SoundGroup_Normal = 0,
	SoundGroup_Ambience = 1,
	SoundGroup_StageGaya = 2,
	SoundGroup_Player_Loop_SE = 3,
	SoundGroup_1P_Voice = 4,
	SoundGroup_2P_Voice = 5,
	SoundGroup_3P_Voice = 6,
	SoundGroup_4P_Voice = 7,
	SoundGroup_System_Voice = 8,
	SoundGroup_System_Voice_P1Side = 9,
	SoundGroup_System_Voice_P2Side = 10,
	SoundGroup_Network_Gaya_SE = 11,
	SoundGroup_Hit_SE = 12,
	SoundGroup_1P_SE = 13,
	SoundGroup_2P_SE = 14,
	SoundGroup_3P_SE = 15,
	SoundGroup_4P_SE = 16,
	SoundGroup_System_SE = 17,
	SoundGroup_UseMaxCount = 18,
};
enum AppMain::SoundListIndex
{
	SoundList_Common = 0,
	SoundList_1P = 1,
	SoundList_2P = 2,
	SoundList_3P = 3,
	SoundList_4P = 4,
	SoundList_Stage = 5,
	SoundList_Common_SysVoiceP1 = 6,
	SoundList_Common_SysVoiceP2 = 7,
	SoundList_Network_Gaya = 8,
	SoundListIndex_Internal_Use_Max_Count = 9,
};