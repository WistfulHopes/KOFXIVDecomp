#pragma once

struct NET_PACKET_KEY
{
	long time; // 0x0
	unsigned char key; // 0x4
	unsigned char padding[3]; // 0x5
};
struct NET_KEYLOG_MANAGER
{
	NET_PACKET_KEY * pKeyLog; // 0x0
	long keyLogBegin; // 0x8
	long keyLogEnd; // 0xC
	long LastTime; // 0x10
	bool LogOver; // 0x14
	unsigned char padding[3]; // 0x15
};
struct REPLAY_USER_INFO_FORMAT_000
{
	Fw::ONLINEID onlineId; // 0x0
	unsigned char icon; // 0x8
	unsigned char grade; // 0x9
	unsigned char titleId; // 0xA
	char characterId; // 0xB
	unsigned char characterColorId; // 0xC
	unsigned char order; // 0xD
	unsigned char characterCostumeId; // 0xE
};
struct REPLAY_USER_INFO_FORMAT_001
{
	Fw::ONLINEID onlineId; // 0x0
	unsigned char icon; // 0x8
	unsigned char grade; // 0x9
	unsigned char titleId; // 0xA
	char characterId; // 0xB
	unsigned char characterColorId; // 0xC
	unsigned char order; // 0xD
	unsigned char characterCostumeId; // 0xE
	unsigned char disconnectLevel; // 0xF
};
struct REPLAY_USER_INFO
{
	Fw::ONLINEID onlineId; // 0x0
	unsigned char icon; // 0x8
	unsigned char grade; // 0x9
	unsigned short titleId; // 0xA
	char characterId; // 0xC
	unsigned char characterColorId; // 0xD
	unsigned char order; // 0xE
	unsigned char characterCostumeId; // 0xF
	unsigned char disconnectLevel; // 0x10
};
struct ROUND_PLAYER_INFO
{
	char iMemberReferIndex; // 0x0
	char iRoundSetCount; // 0x1
	char iStraightSetCount; // 0x2
	char iPerfectRoundCount; // 0x3
	char iMaxExPowerExtend; // 0x4
	char iFinishSkill[5]; // 0x5
	unsigned char bTakeOverActor; // 0xA
	unsigned char pad; // 0xB
	long xVital; // 0xC
	long xExPower; // 0x10
	long xClimaxTime; // 0x14
	long xGuardPower; // 0x18
	long xStunPower; // 0x1C
	long xRecoveryVital; // 0x20
};
struct ROUND_INFO
{
	ROUND_PLAYER_INFO player[2]; // 0x0
	char iRoundCount; // 0x48
	unsigned char bExtraRound; // 0x49
	unsigned char padding[2]; // 0x4A
};
struct ROUNDEND_PLAYER_INFO
{
	long xVital; // 0x0
	long xExPower; // 0x4
	long xClimaxTime; // 0x8
	long xGuardPower; // 0xC
	long xStunPower; // 0x10
	long xRecoveryVital; // 0x14
	bool bTakeOverActor; // 0x18
};
struct BestBattleReplay_FORMAT_000
{
	unsigned long long m_Date; // 0x0
	unsigned long long m_UploadDate; // 0x8
	unsigned long m_BufferSize[2][6]; // 0x10
	REPLAY_USER_INFO_FORMAT_000 m_UserInfo[3][2]; // 0x40
	ROUND_INFO m_RoundInfo[6]; // 0xA0
	ROUNDEND_PLAYER_INFO m_RoundEndInfo[2][6]; // 0x268
	unsigned long m_RandSeed[6]; // 0x3B8
	unsigned char m_RoundResult[6]; // 0x3D0
	unsigned char m_GameMode; // 0x3D6
	unsigned char m_GameRule; // 0x3D7
	unsigned char m_Stage; // 0x3D8
	unsigned char m_RoundTimerType; // 0x3D9
	unsigned char m_Result; // 0x3DA
	unsigned char m_Handicap[2]; // 0x3DB
	unsigned char m_DelayFrame; // 0x3DD
	unsigned char m_Ver; // 0x3DE
	unsigned char m_WinRoundCount; // 0x3DF
	char m_StageTelop[61]; // 0x3E0
	char * m_pBuffer[6]; // 0x420
};
struct BestBattleReplay_FORMAT_001
{
	unsigned long long m_Date; // 0x0
	unsigned long long m_UploadDate; // 0x8
	unsigned long m_BufferSize[2][6]; // 0x10
	REPLAY_USER_INFO_FORMAT_001 m_UserInfo[3][2]; // 0x40
	ROUND_INFO m_RoundInfo[6]; // 0xA0
	ROUNDEND_PLAYER_INFO m_RoundEndInfo[2][6]; // 0x268
	unsigned long m_RandSeed[6]; // 0x3B8
	unsigned char m_RoundResult[6]; // 0x3D0
	unsigned char m_GameMode; // 0x3D6
	unsigned char m_GameRule; // 0x3D7
	unsigned char m_Stage; // 0x3D8
	unsigned char m_RoundTimerType; // 0x3D9
	unsigned char m_Result; // 0x3DA
	unsigned char m_Handicap[2]; // 0x3DB
	unsigned char m_DelayFrame; // 0x3DD
	unsigned char m_Ver; // 0x3DE
	unsigned char m_WinRoundCount; // 0x3DF
	char m_StageTelop[61]; // 0x3E0
	char * m_pBuffer[6]; // 0x420
};
struct BestBattleReplay
{
	unsigned long long m_Date; // 0x0
	unsigned long long m_UploadDate; // 0x8
	unsigned long m_BufferSize[2][6]; // 0x10
	REPLAY_USER_INFO m_UserInfo[3][2]; // 0x40
	ROUND_INFO m_RoundInfo[6]; // 0xD0
	ROUNDEND_PLAYER_INFO m_RoundEndInfo[2][6]; // 0x298
	unsigned long m_RandSeed[6]; // 0x3E8
	unsigned char m_RoundResult[6]; // 0x400
	unsigned char m_GameMode; // 0x406
	unsigned char m_GameRule; // 0x407
	unsigned char m_Stage; // 0x408
	unsigned char m_RoundTimerType; // 0x409
	unsigned char m_Result; // 0x40A
	unsigned char m_Handicap[2]; // 0x40B
	unsigned char m_DelayFrame; // 0x40D
	unsigned char m_Ver; // 0x40E
	unsigned char m_WinRoundCount; // 0x40F
	char m_StageTelop[61]; // 0x410
	char * m_pBuffer[6]; // 0x450
};
struct BattleReplay
{
	unsigned long long m_Date; // 0x0
	unsigned long long m_UploadDate; // 0x8
	unsigned long m_BufferSize[2][6]; // 0x10
	REPLAY_USER_INFO m_UserInfo[3][2]; // 0x40
	ROUND_INFO m_RoundInfo[6]; // 0xD0
	ROUNDEND_PLAYER_INFO m_RoundEndInfo[2][6]; // 0x298
	unsigned long m_RandSeed[6]; // 0x3E8
	unsigned char m_RoundResult[6]; // 0x400
	unsigned char m_GameMode; // 0x406
	unsigned char m_GameRule; // 0x407
	unsigned char m_Stage; // 0x408
	unsigned char m_RoundTimerType; // 0x409
	unsigned char m_Result; // 0x40A
	unsigned char m_Handicap[2]; // 0x40B
	unsigned char m_DelayFrame; // 0x40D
	unsigned char m_Ver; // 0x40E
	unsigned char m_WinRoundCount; // 0x40F
	char m_StageTelop[61]; // 0x410
	char * m_pBuffer[6]; // 0x450
	Fw::ONLINEID m_UploadOnlineId; // 0x480
	unsigned long long m_DownloadDate; // 0x488
	unsigned char m_Lock; // 0x490
	unsigned char m_Download; // 0x491
	unsigned char m_Best; // 0x492
	char m_PcId; // 0x493
	unsigned char m_Over; // 0x494
	bool m_NewBuffer; // 0x495
	unsigned char m_Padding[3]; // 0x496
};