#pragma once

enum RANKMATCH_ACCEPT_TARGET
{
	RANKMATCH_ACCEPT_TARGET_MY = 0,
	RANKMATCH_ACCEPT_TARGET_OPPONENT = 1,
	RANKMATCH_ACCEPT_TARGET_MAX = 2,
};
enum ROOM_ATTR_INDEX
{
	ROOM_ATTR_INDEX_AREA = 0,
	ROOM_ATTR_INDEX_AREA_ALL = 1,
	ROOM_ATTR_INDEX_ANTENNA = 2,
	ROOM_ATTR_INDEX_ANTENNA_SELECT = 3,
	ROOM_ATTR_INDEX_SUCESSRATE = 4,
	ROOM_ATTR_INDEX_CMN_MAX = 5,
	ROOM_ATTR_INDEX_GRADE_LOW = 5,
	ROOM_ATTR_INDEX_GRADE_HIGH = 6,
	ROOM_ATTR_INDEX_GRADE_SELECT = 7,
	ROOM_ATTR_INDEX_RANK_MAX = 8,
	ROOM_ATTR_INDEX_ROOMBATTLETYPE = 5,
	ROOM_ATTR_INDEX_ROUNDNUM = 6,
	ROOM_ATTR_INDEX_ROUNDTIME = 7,
	ROOM_ATTR_INDEX_FREE_MAX = 8,
};
enum ROOM_ATTR_STATUS
{
	ROOM_ATTR_STATUS_INVALID = 254,
	ROOM_ATTR_STATUS_DISREGARD = 255,
};
enum BATTLE_WAIT_STATE
{
	BATTLE_WAIT_STATE_NONE = 0,
	BATTLE_WAIT_STATE_PARTICIPANT = 1,
	BATTLE_WAIT_STATE_SPECTATOR = 2,
};
enum ADVANCE_FLAG
{
	ADVANCE_FLAG_NONE = 0,
	ADVANCE_FLAG_BATTLE_LOAD_COMPLETE = 1,
	ADVANCE_FLAG_BATTLE_LOAD_COMPLETE_ALL = 2,
};
enum <unnamed-enum-RESULT_MENU_REMATCH>
{
	RESULT_MENU_REMATCH = 0,
	RESULT_MENU_ORDERSELECT = 1,
	RESULT_MENU_MEMBERSELECT = 2,
	RESULT_MENU_BACK_ROOM = 3,
	RESULT_MENU_MAX = 4,
};
enum <unnamed-enum-BATTLE_RESULT_NONE>
{
	BATTLE_RESULT_NONE = 255,
	BATTLE_RESULT_1PWIN = 0,
	BATTLE_RESULT_2PWIN = 1,
	BATTLE_RESULT_DRAW = 2,
};
struct NET_USER_INFO
{
	Fw::ONLINEID m_OnlineID; // 0x0
	NetworkBattleCharacter m_Character[3]; // 0x8
	unsigned char m_Antenna; // 0x20
	bool m_AgencyFlag; // 0x21
	unsigned char m_CharacterFix[3]; // 0x22
	unsigned char m_Order[3]; // 0x25
};
struct ROOM_JOIN_USER_RANK
{
	unsigned long icon : 7; // 0x0
	unsigned long grade : 6; // 0x0
	unsigned long padding3 : 1; // 0x0
	unsigned long stageId : 5; // 0x0
	unsigned long antenna : 3; // 0x0
	unsigned long titleId : 9; // 0x0
	unsigned long characterId : 6; // 0x4
	unsigned long characterId2 : 6; // 0x4
	unsigned long characterId3 : 6; // 0x4
	unsigned long colorId : 3; // 0x4
	unsigned long colorId2 : 3; // 0x4
	unsigned long colorId3 : 3; // 0x4
	unsigned long costumeId : 2; // 0x4
	unsigned long costumeId2 : 2; // 0x4
	unsigned long costumeId3 : 2; // 0x8
	unsigned long rankMatchPoint : 32; // 0xC
	unsigned long rankMatchBattleWin : 32; // 0x10
	unsigned long rankMatchBattleLose : 32; // 0x14
	unsigned long rankMatchBattleDraw : 32; // 0x18
	unsigned long rankMatchBattleWins : 32; // 0x1C
	unsigned long rankMatchCount : 32; // 0x20
	unsigned long rankMatchLosePublication : 1; // 0x24
	unsigned long rankMatchDrawPublication : 1; // 0x24
	unsigned long rankMatchRatePublication : 1; // 0x24
	unsigned long rankMatchDisconnectMarker : 2; // 0x24
	unsigned long padding : 5; // 0x24
	char country[4]; // 0x28
	unsigned long rtt; // 0x2C
};
struct ROOM_JOIN_USER_FREE
{
	unsigned long icon : 7; // 0x0
	unsigned long grade : 6; // 0x0
	unsigned long titleId : 9; // 0x0
	unsigned long antenna : 3; // 0x0
	unsigned long rankMatchDisconnectMarker : 2; // 0x0
	unsigned long padding : 5; // 0x0
	char country[4]; // 0x4
	bool privateInvite; // 0x8
};
struct MsgJoinRequest
{
	Fw::ONLINEID joinId; // 0x0
	ROOM_JOIN_USER_RANK rank; // 0x8
	ROOM_JOIN_USER_FREE free; // 0x8
};
struct ROOM_USER_DATA_RANK
{
	unsigned long long steamId; // 0x0
	unsigned long icon : 7; // 0x8
	unsigned long grade : 6; // 0x8
	unsigned long titleId : 9; // 0x8
	unsigned long pno : 4; // 0x8
	unsigned long seatNo : 7; // 0xC
	unsigned long seatFlag : 3; // 0xC
	unsigned long battleType : 3; // 0xC
	unsigned long rankMatchPoint : 32; // 0x10
	unsigned long rankMatchBattleWin : 32; // 0x14
	unsigned long rankMatchBattleLose : 32; // 0x18
	unsigned long rankMatchBattleDraw : 32; // 0x1C
	unsigned long rankMatchBattleWins : 32; // 0x20
	unsigned long rankMatchCount : 32; // 0x24
	unsigned long rankMatchLosePublication : 1; // 0x28
	unsigned long rankMatchDrawPublication : 1; // 0x28
	unsigned long rankMatchRatePublication : 1; // 0x28
	unsigned long antenna : 3; // 0x28
	unsigned long rankMatchDisconnectMarker : 2; // 0x28
	char country[4]; // 0x2C
};
struct ROOM_USER_DATA
{
	unsigned long long steamId; // 0x0
	unsigned long icon : 7; // 0x8
	unsigned long grade : 6; // 0x8
	unsigned long titleId : 9; // 0x8
	unsigned long pno : 4; // 0x8
	unsigned long seatNo : 7; // 0xC
	unsigned long seatFlag : 3; // 0xC
	unsigned long battleType : 3; // 0xC
	unsigned long battleWaitState : 2; // 0xC
	unsigned long rankMatchDisconnectMarker : 2; // 0xC
	unsigned long padding : 5; // 0xC
	char country[4]; // 0x10
};
struct MsgJoinComplete
{
	unsigned char memberNum; // 0x0
	ROOM_USER_DATA_RANK memberRank[2]; // 0x1
	ROOM_USER_DATA member[12]; // 0x1
};
struct MsgLeaveRoom
{
	Fw::ONLINEID senderId; // 0x0
};
struct MsgBackRoom
{
	unsigned long pno : 4; // 0x0
	unsigned long padding : 4; // 0x0
};
struct MsgSeatRequest
{
	MsgSeatRequest::<unnamed-tag>::<unnamed-type-common> common; // 0x0
	MsgSeatRequest::<unnamed-tag>::<unnamed-type-common> depart; // 0x0
	MsgSeatRequest::<unnamed-tag>::<unnamed-type-taking> taking; // 0x0
	MsgSeatRequest::<unnamed-tag>::<unnamed-type-waiting> waiting; // 0x0
	MsgSeatRequest::<unnamed-tag>::<unnamed-type-waitingNotAppend> waitingNotAppend; // 0x0
	MsgSeatRequest::<unnamed-tag>::<unnamed-type-waitingAppendCharacter> waitingAppendCharacter; // 0x0
	MsgSeatRequest::<unnamed-tag>::<unnamed-type-waitingAppendStage> waitingAppendStage; // 0x0
};
struct MsgSeatRequest::<unnamed-tag>::<unnamed-type-common>
{
	unsigned long pno : 4; // 0x0
	unsigned long seatFlag : 3; // 0x0
	unsigned long padding : 1; // 0x0
};
struct MsgSeatRequest::<unnamed-tag>::<unnamed-type-taking>
{
	unsigned long pno : 4; // 0x0
	unsigned long seatFlag : 3; // 0x0
	unsigned long padding : 1; // 0x0
	unsigned long seatNo : 7; // 0x0
	unsigned long battleWaitState : 2; // 0x0
	unsigned long battleType : 3; // 0x0
	unsigned long padding2 : 4; // 0x0
};
struct MsgSeatRequest::<unnamed-tag>::<unnamed-type-waiting>
{
	unsigned long pno : 4; // 0x0
	unsigned long seatFlag : 3; // 0x0
	unsigned long seatNo : 7; // 0x0
	unsigned long characterSend : 1; // 0x0
	unsigned long stageSend : 1; // 0x0
	unsigned long battleWins : 32; // 0x4
	unsigned long agencyFlag : 1; // 0x8
	unsigned long characterId : 6; // 0x8
	unsigned long characterId2 : 6; // 0x8
	unsigned long characterId3 : 6; // 0x8
	unsigned long colorId : 3; // 0x8
	unsigned long colorId2 : 3; // 0x8
	unsigned long colorId3 : 3; // 0x8
	unsigned long costumeId : 2; // 0x8
	unsigned long costumeId2 : 2; // 0x8
	unsigned long costumeId3 : 2; // 0xC
	unsigned long padding2 : 2; // 0xC
	unsigned long stageId : 5; // 0xC
	char stageTelop[61]; // 0x10
};
struct MsgSeatRequest::<unnamed-tag>::<unnamed-type-waitingNotAppend>
{
	unsigned long pno : 4; // 0x0
	unsigned long seatFlag : 3; // 0x0
	unsigned long seatNo : 7; // 0x0
	unsigned long characterSend : 1; // 0x0
	unsigned long stageSend : 1; // 0x0
	unsigned long battleWins : 32; // 0x4
	unsigned long agencyFlag : 1; // 0x8
};
struct MsgSeatRequest::<unnamed-tag>::<unnamed-type-waitingAppendCharacter>
{
	unsigned long pno : 4; // 0x0
	unsigned long seatFlag : 3; // 0x0
	unsigned long seatNo : 7; // 0x0
	unsigned long characterSend : 1; // 0x0
	unsigned long stageSend : 1; // 0x0
	unsigned long battleWins : 32; // 0x4
	unsigned long agencyFlag : 1; // 0x8
	unsigned long characterId : 6; // 0x8
	unsigned long characterId2 : 6; // 0x8
	unsigned long characterId3 : 6; // 0x8
	unsigned long colorId : 3; // 0x8
	unsigned long colorId2 : 3; // 0x8
	unsigned long colorId3 : 3; // 0x8
	unsigned long costumeId : 2; // 0x8
	unsigned long costumeId2 : 2; // 0x8
	unsigned long costumeId3 : 2; // 0xC
	unsigned long padding : 7; // 0xC
};
struct MsgSeatRequest::<unnamed-tag>::<unnamed-type-waitingAppendStage>
{
	unsigned long pno : 4; // 0x0
	unsigned long seatFlag : 3; // 0x0
	unsigned long seatNo : 7; // 0x0
	unsigned long characterSend : 1; // 0x0
	unsigned long stageSend : 1; // 0x0
	unsigned long battleWins : 32; // 0x4
	unsigned long agencyFlag : 1; // 0x8
	unsigned long stageId : 5; // 0x8
	unsigned long padding2 : 3; // 0x8
	char stageTelop[61]; // 0xC
};
struct SEAT_USER_DATA
{
	struct <unnamed-type-common>;
	SEAT_USER_DATA::<unnamed-type-common> common; // 0x0
	struct <unnamed-type-battle>;
	SEAT_USER_DATA::<unnamed-type-battle> battle; // 0x4
};
struct SEAT_USER_DATA::<unnamed-type-common>
{
	unsigned long pno : 4; // 0x0
	unsigned long seatNo : 7; // 0x0
	unsigned long seatFlag : 3; // 0x0
	unsigned long battleWaitState : 2; // 0x0
};
struct SEAT_USER_DATA::<unnamed-type-battle>
{
	unsigned long characterId : 6; // 0x0
	unsigned long characterId2 : 6; // 0x0
	unsigned long characterId3 : 6; // 0x0
	unsigned long colorId : 3; // 0x0
	unsigned long colorId2 : 3; // 0x0
	unsigned long colorId3 : 3; // 0x0
	unsigned long costumeId : 2; // 0x0
	unsigned long costumeId2 : 2; // 0x0
	unsigned long costumeId3 : 2; // 0x4
	unsigned long battleWins : 32; // 0x8
};
struct SEAT_USER_DATA_SPECTATOR
{
	struct <unnamed-type-common>;
	SEAT_USER_DATA_SPECTATOR::<unnamed-type-common> common; // 0x0
};
struct SEAT_USER_DATA_SPECTATOR::<unnamed-type-common>
{
	unsigned long pno : 4; // 0x0
	unsigned long seatNo : 7; // 0x0
	unsigned long seatFlag : 3; // 0x0
	unsigned long battleWaitState : 2; // 0x0
};
struct SEAT_USER_DATA_PARTY
{
	struct <unnamed-type-common>;
	SEAT_USER_DATA_PARTY::<unnamed-type-common> common; // 0x0
	struct <unnamed-type-battle>;
	SEAT_USER_DATA_PARTY::<unnamed-type-battle> battle; // 0x4
};
struct SEAT_USER_DATA_PARTY::<unnamed-type-common>
{
	unsigned long pno : 4; // 0x0
	unsigned long seatNo : 7; // 0x0
	unsigned long seatFlag : 3; // 0x0
	unsigned long battleWaitState : 2; // 0x0
};
struct SEAT_USER_DATA_PARTY::<unnamed-type-battle>
{
	unsigned long order : 2; // 0x0
	unsigned long teamId : 1; // 0x0
	unsigned long padding : 5; // 0x0
	unsigned long battleWins : 32; // 0x4
	unsigned long agencyFlag : 1; // 0x8
};
struct MsgTableComplete
{
	struct <unnamed-type-common>;
	MsgTableComplete::<unnamed-type-common> common; // 0x0
	MsgTableComplete::<unnamed-tag>::<unnamed-type-not_party> not_party; // 0x41
	MsgTableComplete::<unnamed-tag>::<unnamed-type-party> party; // 0x41
};
struct MsgTableComplete::<unnamed-type-common>
{
	unsigned long battleType : 3; // 0x0
	unsigned long stageId : 5; // 0x0
	unsigned long memberNum : 4; // 0x0
	unsigned long isParty : 1; // 0x0
	unsigned long randSeed : 3; // 0x0
	unsigned long delayFrame : 3; // 0x0
	unsigned long padding : 5; // 0x0
	char stageTelop[61]; // 0x4
};
struct MsgTableComplete::<unnamed-tag>::<unnamed-type-not_party>
{
	SEAT_USER_DATA member[2]; // 0x0
	SEAT_USER_DATA_SPECTATOR memberSub[10]; // 0x20
};
struct MsgTableComplete::<unnamed-tag>::<unnamed-type-party>
{
	SEAT_USER_DATA_PARTY member[6]; // 0x0
	SEAT_USER_DATA_SPECTATOR memberSub[6]; // 0x60
};
struct MsgTableCompleteRank
{
	struct <unnamed-type-common>;
	MsgTableCompleteRank::<unnamed-type-common> common; // 0x0
	SEAT_USER_DATA member[2]; // 0x41
	unsigned char memberNum; // 0x61
	ROOM_USER_DATA_RANK memberRank[2]; // 0x62
};
struct MsgTableCompleteRank::<unnamed-type-common>
{
	unsigned long battleType : 3; // 0x0
	unsigned long stageId : 5; // 0x0
	unsigned long memberNum : 4; // 0x0
	unsigned long isParty : 1; // 0x0
	unsigned long randSeed : 3; // 0x0
	unsigned long delayFrame : 3; // 0x0
	unsigned long padding : 5; // 0x0
	char stageTelop[61]; // 0x4
};
struct MsgTableDiscrete
{
	struct <unnamed-type-common>;
	MsgTableDiscrete::<unnamed-type-common> common; // 0x0
	MsgTableDiscrete::<unnamed-tag>::<unnamed-type-not_party> not_party; // 0x4
};
struct MsgTableDiscrete::<unnamed-type-common>
{
	unsigned long memberNum : 4; // 0x0
	unsigned long changeState : 1; // 0x0
	unsigned long padding : 3; // 0x0
};
struct MsgTableDiscrete::<unnamed-tag>::<unnamed-type-not_party>
{
	SEAT_USER_DATA_SPECTATOR member[12]; // 0x0
};
struct MsgBattleLeave
{
	SEAT_USER_DATA_SPECTATOR member; // 0x0
};
struct MsgOrderSelect
{
	unsigned long pno : 4; // 0x0
	unsigned long order : 2; // 0x0
	unsigned long order2 : 2; // 0x0
	unsigned long order3 : 2; // 0x0
	unsigned long padding : 6; // 0x0
};
struct MsgCharacterSelect
{
	unsigned long pno : 4; // 0x0
	unsigned long characterId : 6; // 0x0
	unsigned long colorId : 3; // 0x0
	unsigned long fix : 1; // 0x0
	unsigned long costumeId : 2; // 0x0
};
struct MsgCharacterSelectNotParty
{
	unsigned long pno : 4; // 0x0
	unsigned long characterId : 6; // 0x0
	unsigned long characterId2 : 6; // 0x0
	unsigned long characterId3 : 6; // 0x0
	unsigned long colorId : 3; // 0x0
	unsigned long colorId2 : 3; // 0x0
	unsigned long colorId3 : 3; // 0x0
	unsigned long costumeId : 2; // 0x4
	unsigned long costumeId2 : 2; // 0x4
	unsigned long costumeId3 : 2; // 0x4
	unsigned long fix : 1; // 0x4
	unsigned long fix2 : 1; // 0x4
	unsigned long fix3 : 1; // 0x4
};
struct CHARACTER_SELECT_COMPLETE_PARTY
{
	unsigned long gameRule : 2; // 0x0
	unsigned long pno : 4; // 0x0
	unsigned long characterId : 6; // 0x0
	unsigned long pno2 : 4; // 0x0
	unsigned long characterId2 : 6; // 0x0
	unsigned long pno3 : 4; // 0x0
	unsigned long characterId3 : 6; // 0x0
	unsigned long pno4 : 4; // 0x4
	unsigned long characterId4 : 6; // 0x4
	unsigned long pno5 : 4; // 0x4
	unsigned long characterId5 : 6; // 0x4
	unsigned long pno6 : 4; // 0x4
	unsigned long characterId6 : 6; // 0x4
	unsigned long costumeId : 2; // 0x4
	unsigned long costumeId2 : 2; // 0x8
	unsigned long costumeId3 : 2; // 0x8
	unsigned long costumeId4 : 2; // 0x8
	unsigned long costumeId5 : 2; // 0x8
	unsigned long costumeId6 : 2; // 0x8
	unsigned long delay : 3; // 0x8
	unsigned long padding : 3; // 0x8
};
struct CHARACTER_SELECT_COMPLETE_TEAM
{
	unsigned long gameRule : 2; // 0x0
	unsigned long pno : 4; // 0x0
	unsigned long characterId : 6; // 0x0
	unsigned long characterId2 : 6; // 0x0
	unsigned long characterId3 : 6; // 0x0
	unsigned long costumeId : 2; // 0x0
	unsigned long costumeId2 : 2; // 0x0
	unsigned long costumeId3 : 2; // 0x0
	unsigned long pno2 : 4; // 0x4
	unsigned long characterId4 : 6; // 0x4
	unsigned long characterId5 : 6; // 0x4
	unsigned long characterId6 : 6; // 0x4
	unsigned long costumeId4 : 2; // 0x4
	unsigned long costumeId5 : 2; // 0x4
	unsigned long costumeId6 : 2; // 0x4
	unsigned long delay : 3; // 0x4
	unsigned long padding : 3; // 0x8
};
struct CHARACTER_SELECT_COMPLETE_SINGLE
{
	unsigned long gameRule : 2; // 0x0
	unsigned long pno : 4; // 0x0
	unsigned long characterId : 6; // 0x0
	unsigned long costumeId : 2; // 0x0
	unsigned long pno2 : 4; // 0x0
	unsigned long characterId2 : 6; // 0x0
	unsigned long costumeId2 : 2; // 0x0
	unsigned long delay : 3; // 0x0
	unsigned long padding : 3; // 0x0
};
struct MsgCharacterSelectComplete
{
	CHARACTER_SELECT_COMPLETE_PARTY party; // 0x0
	CHARACTER_SELECT_COMPLETE_TEAM team; // 0x0
	CHARACTER_SELECT_COMPLETE_SINGLE single; // 0x0
};
struct MsgBattleLoadEnd
{
	unsigned long pno : 4; // 0x0
	unsigned long flag : 1; // 0x0
	unsigned long padding : 3; // 0x0
};
struct BATTLE_COMMAND_PACKET
{
	unsigned char key; // 0x0
};
struct MsgBattleCommand
{
	long time; // 0x0
	BATTLE_COMMAND_PACKET cmd[5]; // 0x4
	char controller; // 0x9
	unsigned short crc; // 0xA
};
struct MsgBattleCommandTcpHead
{
	long time; // 0x0
	char controller; // 0x4
	char packet_cnt : 7; // 0x5
	char arc : 1; // 0x5
	char trans_sz; // 0x6
};
struct MsgBattleCommandTcp
{
	MsgBattleCommandTcpHead head; // 0x0
	BATTLE_COMMAND_PACKET cmd[60]; // 0x7
};
struct MsgGameResultMenu
{
	unsigned long pno : 4; // 0x0
	unsigned long cursor : 2; // 0x0
	unsigned long result : 2; // 0x0
	unsigned long characterId : 6; // 0x0
	unsigned long characterId2 : 6; // 0x0
	unsigned long characterId3 : 6; // 0x0
	unsigned long colorId : 3; // 0x0
	unsigned long colorId2 : 3; // 0x0
	unsigned long colorId3 : 3; // 0x4
	unsigned long costumeId : 2; // 0x4
	unsigned long costumeId2 : 2; // 0x4
	unsigned long costumeId3 : 2; // 0x4
	unsigned long stage : 5; // 0x4
	unsigned long padding : 2; // 0x4
};
struct MsgGameResultNextScene
{
	unsigned long nextScene : 2; // 0x0
	unsigned long padding : 6; // 0x0
};
struct MsgTrainingMenu
{
	unsigned long iRestart : 2; // 0x0
	unsigned long iPowerGauge1 : 3; // 0x0
	unsigned long iPowerGauge2 : 3; // 0x0
	unsigned long iMAXModeGauge1 : 2; // 0x0
	unsigned long iMAXModeGauge2 : 2; // 0x0
	unsigned long iGuardGauge1 : 7; // 0x0
	unsigned long iGuardGauge2 : 7; // 0x0
	unsigned long iStun1 : 7; // 0x4
	unsigned long iStun2 : 7; // 0x4
};
struct MsgVoiceData
{
	unsigned long pno : 6; // 0x0
	unsigned long rejectMute : 1; // 0x0
	unsigned long heartBeatNotice : 1; // 0x0
	unsigned long bufSize; // 0x4
	unsigned char dataBuf[1100]; // 0x8
};
struct MsgGayaSe
{
	unsigned long seNo : 4; // 0x0
	unsigned long padding : 4; // 0x0
};
struct MsgRankAccept
{
	unsigned long Flag : 1; // 0x0
	unsigned long padding : 7; // 0x0
};
struct MsgRoomFull
{
	unsigned long long receiverID; // 0x0
};
struct MsgPing
{
	unsigned long long tick; // 0x0
	unsigned short publicSlotsAvailable; // 0x8
};
struct NET_USER_DATA
{
	unsigned long long steamId; // 0x0
	unsigned long characterId : 6; // 0x8
	unsigned long colorId : 3; // 0x8
	unsigned long costumeId : 2; // 0x8
	unsigned long order : 2; // 0x8
	unsigned long fix : 1; // 0x8
	unsigned long characterId2 : 6; // 0x8
	unsigned long colorId2 : 3; // 0x8
	unsigned long costumeId2 : 2; // 0x8
	unsigned long order2 : 2; // 0x8
	unsigned long fix2 : 1; // 0x8
	unsigned long characterId3 : 6; // 0xC
	unsigned long colorId3 : 3; // 0xC
	unsigned long costumeId3 : 2; // 0xC
	unsigned long order3 : 2; // 0xC
	unsigned long fix3 : 1; // 0xC
	unsigned long icon : 7; // 0xC
	unsigned long grade : 6; // 0xC
	unsigned long pno : 4; // 0xC
	unsigned long seatNo : 7; // 0x10
	unsigned long seatFlag : 3; // 0x10
	unsigned long stageId : 5; // 0x10
	unsigned long antenna : 3; // 0x10
	unsigned long battleWaitState : 2; // 0x10
	unsigned long teamId : 1; // 0x10
	unsigned long titleId : 9; // 0x10
	unsigned long agencyFlag : 1; // 0x10
	unsigned long battleWins : 32; // 0x14
	unsigned long rankMatchPoint : 32; // 0x18
	unsigned long rankMatchBattleWin : 32; // 0x1C
	unsigned long rankMatchBattleLose : 32; // 0x20
	unsigned long rankMatchBattleDraw : 32; // 0x24
	unsigned long rankMatchBattleWins : 32; // 0x28
	unsigned long rankMatchCount : 32; // 0x2C
	unsigned long rankMatchLosePublication : 1; // 0x30
	unsigned long rankMatchDrawPublication : 1; // 0x30
	unsigned long rankMatchRatePublication : 1; // 0x30
	unsigned long rankMatchDisconnectMarker : 2; // 0x30
	char stageTelop[61]; // 0x34
	char country[4]; // 0x71
	bool privateInvite; // 0x75
};
struct NET_USER_DATA_SUB
{
	unsigned long advanceFlag; // 0x0
	unsigned long long lastRecvTime; // 0x4
	char resultMenuCursor; // 0xC
	bool chatOffFlag; // 0xD
	long updateAntennaCount; // 0xE
	bool partyDisconnect; // 0x12
	unsigned long long disconnectTick; // 0x13
	unsigned long long resultMenuClearTick; // 0x1B
};
struct SEND_MESSAGE
{
	unsigned char msgType; // 0x0
	MsgJoinRequest msgJoinRequest; // 0x1
	MsgJoinComplete msgJoinComplete; // 0x1
	MsgSeatRequest msgSeatRequest; // 0x1
	MsgTableComplete msgTableComplete; // 0x1
	MsgTableCompleteRank msgTableCompleteRank; // 0x1
	MsgTableDiscrete msgTableDiscrete; // 0x1
	MsgBattleLeave msgBattleLeave; // 0x1
	MsgOrderSelect msgOrderSelect; // 0x1
	MsgCharacterSelect msgCharacterSelect; // 0x1
	MsgCharacterSelectNotParty msgCharacterSelectNotParty; // 0x1
	MsgCharacterSelectComplete msgCharacterSelectComplete; // 0x1
	MsgLeaveRoom msgLeaveRoom; // 0x1
	MsgBackRoom msgBackRoom; // 0x1
	MsgBattleLoadEnd msgBattleLoadEnd; // 0x1
	MsgBattleCommand msgBattleCommand; // 0x1
	MsgBattleCommandTcp msgBattleCommandTcp; // 0x1
	MsgGameResultMenu msgGameResultMenu; // 0x1
	MsgGameResultNextScene msgGameResultNextScene; // 0x1
	MsgTrainingMenu msgTrainingMenu; // 0x1
	MsgVoiceData msgVoiceData; // 0x1
	MsgGayaSe msgGayaSe; // 0x1
	MsgRankAccept msgRankAccept; // 0x1
	MsgRoomFull msgRoomFull; // 0x1
	MsgPing msgPing; // 0x1
};
enum <unnamed-enum-MSG_TYPE_JOIN_REQUEST_RANK>
{
	MSG_TYPE_JOIN_REQUEST_RANK = 0,
	MSG_TYPE_JOIN_REQUEST_FREE = 1,
	MSG_TYPE_JOIN_COMPLETE_RANK = 2,
	MSG_TYPE_JOIN_COMPLETE_FREE = 3,
	MSG_TYPE_SEAT_SIT_REQUEST = 4,
	MSG_TYPE_SEAT_SIT_COMPLETE = 5,
	MSG_TYPE_TABLE_COMPLETE = 6,
	MSG_TYPE_TABLE_DISCRETE = 7,
	MSG_TYPE_TABLE_LEAVEUPDATE = 8,
	MSG_TYPE_BATTLE_LEAVE = 9,
	MSG_TYPE_ORDERSELECT = 10,
	MSG_TYPE_CHARACTERSELECT = 11,
	MSG_TYPE_CHARACTERSELECT_NOT_PARTY = 12,
	MSG_TYPE_CHARACTERSELECT_COMPLETE = 13,
	MSG_TYPE_LEAVE_ROOM = 14,
	MSG_TYPE_BACK_ROOM = 15,
	MSG_TYPE_BATTLE_LOADEND = 16,
	MSG_TYPE_BATTLE_COMMAND = 17,
	MSG_TYPE_BATTLE_COMMAND_TCP = 18,
	MSG_TYPE_GAME_RESULT_MENU = 19,
	MSG_TYPE_GAME_RESULT_NEXT_SCENE = 20,
	MSG_TYPE_TRAININGMENU = 21,
	MSG_TYPE_VOICECHAT = 22,
	MSG_TYPE_GAYASE = 23,
	MSG_TYPE_RANKMATCH_ACCEPT = 24,
	MSG_TYPE_ROOM_FULL = 25,
	MSG_TYPE_PING = 26,
	MSG_TYPE_PING_RESPONSE = 27,
	MSG_TYPE_MAX = 28,
};
enum ONLINE_STATE
{
	NET_STATE_NONE = 255,
	NET_STATE_TOP = 0,
	NET_STATE_CREATINGROOM = 1,
	NET_STATE_CREATECOMPLETE = 2,
	NET_STATE_WAITCLIENT = 3,
	NET_STATE_SEARCHINGROOM = 4,
	NET_STATE_SELECTROOM = 5,
	NET_STATE_JOIN_ROOM = 6,
	NET_STATE_JOIN_COMPLETE = 7,
	NET_STATE_WAITSTART = 8,
	NET_STATE_ORDERSELECT = 9,
	NET_STATE_CHARACTERSELECT = 10,
	NET_STATE_CHARACTERSELECT_NOT_PARTY = 11,
	NET_STATE_BATTLELOADING = 12,
	NET_STATE_BATTLELOADINGEND = 13,
	NET_STATE_READYGAME = 14,
	NET_STATE_BATTLE = 15,
	NET_STATE_GAMERESULT = 16,
	NET_STATE_LEAVEROOM = 17,
	NET_STATE_TRAININGWAIT = 18,
	NET_STATE_ERROR = 19,
	NET_STATE_MAX = 20,
};
enum NETWORK_ERROR_TYPE
{
	NETWORK_ERROR_TYPE_NONE = 0,
	NETWORK_ERROR_TYPE_CONNECTION = 1,
	NETWORK_ERROR_TYPE_ROOMKICKOUT = 2,
	NETWORK_ERROR_TYPE_ROOM_OWNER_CHANGE = 3,
	NETWORK_ERROR_TYPE_NATTYPE2 = 4,
	NETWORK_ERROR_TYPE_NATTYPE3 = 5,
	NETWORK_ERROR_TYPE_ROOMFULL = 6,
	NETWORK_ERROR_TYPE_ROOMNOTFOUND = 7,
	NETWORK_ERROR_TYPE_OTHER = 8,
	NETWORK_ERROR_TYPE_ROOMBACK_CUTTING = 9,
	NETWORK_ERROR_TYPE_DESTROYED = 10,
	NETWORK_ERROR_TYPE_TIMEOUT = 11,
	NETWORK_ERROR_TYPE_JOIN_TIMEOUT = 12,
	NETWORK_ERROR_TYPE_CONNECTION2 = 13,
	NETWORK_ERROR_TYPE_SIGN_OUT = 14,
	NETWORK_ERROR_TYPE_MAX = 15,
};
enum NETWORK_GAYA_TYPE
{
	NETWORK_GAYA_NONE = 255,
	NETWORK_GAYA_BOOING = 0,
	NETWORK_GAYA_WHISTLE = 1,
	NETWORK_GAYA_CLAPPING = 2,
	NETWORK_GAYA_SHOUT = 3,
	NETWORK_GAYA_COOL = 4,
	NETWORK_GAYA_KUROKO = 5,
	NETWORK_GAYA_METAL = 6,
	NETWORK_GAYA_ANT = 7,
	NETWORK_GAYA_LAUGH = 8,
	NETWORK_GAYA_MARVEL = 9,
	NETWORK_GAYA_SIGH = 10,
	NETWORK_GAYA_CHEER = 11,
	NETWORK_GAYA_KLAXON1 = 12,
	NETWORK_GAYA_KLAXON2 = 13,
	NETWORK_GAYA_BELL = 14,
	NETWORK_GAYA_DRUM = 15,
	NETWORK_GAYA_MAX = 16,
};
struct NET_GAMEDATA
{
	NET_USER_INFO userInfo; // 0x0
	NETWORK_MATCHING_TYPE matchMode; // 0x28
	GAME_RULE gameRule; // 0x2C
	ELobbyDistanceFilter searchAreaId; // 0x30
	NETWORK_SUCCESSRATE_SELECT successHighRateFlag; // 0x34
	NETWORK_ANTENNA_SELECT_UI antennaType; // 0x38
	NETWORK_LIVE_SELECT liveType; // 0x3C
	NETWORK_ROOM_BATTLE_TYPE roomBattleType; // 0x40
	BATTLE_ROUND_TIMER_TYPE roundTimerType; // 0x44
	NETWORK_ROUND_SELECT roundType; // 0x48
	long maxSlot; // 0x4C
	long privateSlot; // 0x50
	char m_RoomName[129]; // 0x54
	Fw::ROOM_ATTR m_SearchRoomAttr; // 0xD8
	long selectRoomIdx; // 0x510
	double m_UploadBps; // 0x518
	double m_DownloadBps; // 0x520
	unsigned long m_SearchRoomCount; // 0x528
	bool m_SearchRoomLimit; // 0x52C
	bool m_SessionCreating; // 0x52D
	char myNo; // 0x52E
	unsigned char roomPlayerCount; // 0x52F
	unsigned char battleStartTableNo; // 0x530
	NET_USER_DATA player_data[12]; // 0x531
	NET_USER_DATA_SUB playerDataSub[12]; // 0xAB9
	NETWORK_ROOM_BATTLE_TYPE tableBattleType[6]; // 0xC60
	long sendFrequency[20]; // 0xC78
	bool orderSendFlag; // 0xCC8
	bool reservationCreateRoomFlag; // 0xCC9
	unsigned long long m_TimeStamp; // 0xCD0
	ONLINE_STATE onlineState; // 0xCD8
	NETWORK_ERROR_TYPE error; // 0xCDC
	long systemError; // 0xCE0
	bool leaveRoomFlag; // 0xCE4
	unsigned long randseed; // 0xCE8
	long addDelayFrame; // 0xCEC
	Fw::ROOM_ATTR m_TraingWaitRoomAttr; // 0xCF0
	char hostNo; // 0x1128
	long speakFlag[12]; // 0x112C
	Fw::ROOM_CHATMESSAGE_INFO m_ChatMessageBuffer[8]; // 0x1160
	bool disconnectBattleUser[3][2]; // 0x19E0
	Fw::ONLINEID voiceSendMemberNameList[12]; // 0x19E8
	bool onlinePlay; // 0x1A48
	NET_GAMEDATA(NET_GAMEDATA &);
	NET_GAMEDATA(const NET_GAMEDATA &);
	NET_GAMEDATA();
	~NET_GAMEDATA();
	NET_GAMEDATA & operator=(NET_GAMEDATA &);
	NET_GAMEDATA & operator=(const NET_GAMEDATA &);
};
class class_net_rank_traning_wait
{
public:
	class_net_rank_traning_wait();
	void SetChara(PLAYER_ID, CHARACTER_NO);
	CHARACTER_NO GetChara(PLAYER_ID);
	void SetCostume(PLAYER_ID, long);
	long GetCostume(PLAYER_ID);
	void SetColor(PLAYER_ID, CHARACTER_COLOR);
	CHARACTER_COLOR GetColor(PLAYER_ID);
	void SetStage(STAGE_ID);
	STAGE_ID GetStage();
	void Rest();
	bool IsEnable();
private:
	CHARACTER_NO chara1; // 0x0
	long costume1; // 0x4
	CHARACTER_COLOR color1; // 0x8
	CHARACTER_NO chara2; // 0xC
	long costume2; // 0x10
	CHARACTER_COLOR color2; // 0x14
	STAGE_ID stageID; // 0x18
};
class NetManager
{
public:
	NetManager();
	~NetManager();
	bool Startup();
	void Shutdown();
	void Update();
	class ThreadHost;
	NetManager::ThreadHost m_sendThreadHost; // 0x0
	NetManager::ThreadHost m_recvUDPThreadHost; // 0x20
	void MutexLock();
	void MutexUnlock();
	void MessageAnalyze(bool, SEND_MESSAGE *, unsigned long long, CSteamID &, unsigned long, long);
	bool SkipRecive(long, SEND_MESSAGE *, unsigned long long, CSteamID *, unsigned long *);
	ONLINE_STATE getOnlineState();
	NET_GAMEDATA * GetGameData();
	void InitMyData();
	LEADERBOARD_AREA GetUserCountry(unsigned char *);
	bool IsRoomSearchEnd();
	void KickoutRoomMember(unsigned char);
	unsigned long GetSearchRoomNum();
	void GetSearchRoomAttr(Fw::ROOM_ATTR *, unsigned long);
	long FilteringMyGradeSearchRoom(long);
	bool RequestJoinRoom(long, CSteamID, bool);
	void SendRoomChatMessage(char *, char *, bool);
	long RecvRoomChatMessage(Fw::ROOM_CHATMESSAGE_INFO *);
	void ClearKickoutRoom();
	bool GetReservationCreateRoom();
	void SetReservationCreateRoom(bool);
	void UpdateTypedChatMessage(char *, char *);
	void SetError2(NETWORK_ERROR_TYPE);
	void ResetError();
	NETWORK_ERROR_TYPE GetError();
	void SetCharacterId(long, long, unsigned char);
	unsigned char GetCharacterId(long, long);
	void SetCharacterColorId(long, long, unsigned char);
	unsigned char GetCharacterColorId(long, long);
	void SetCharacterCostumeId(long, long, unsigned char);
	unsigned char GetCharacterCostumeId(long, long);
	void SetAgencyFlag(long, bool);
	bool GetAgencyFlag(long);
	void SetStageId(long, STAGE_ID);
	long GetRoomMemberInfo(Fw::ONLINEID *, long);
	void GetRoomMemberInfo(NET_USER_DATA *, long, long);
	void GetRoomMemberInfo2(NET_USER_DATA *, NET_USER_DATA_SUB *);
	long GetRoomWaitMemberInfo(char *);
	bool isRoomWaitMember(long);
	long GetRoomAllMemberInfo(char *);
	long GetBattleMemberInfo(NET_USER_DATA *);
	long GetBattleMemberNameList(Fw::ONLINEID *);
	bool isBattleMember(long);
	void GetBattleStartTableRoomMemberInfo(long, NET_USER_DATA *);
	unsigned char GetBattleStartTableRoomMemberInfo(NET_USER_DATA *);
	unsigned char GetFreeMatchResultMember(unsigned char, NET_USER_DATA *);
	void SetBattleStartTableRoomMemberInfo(long, NET_USER_DATA *);
	void GetRoomMemberInfoFromUserData(ROOM_USER_DATA *, unsigned char *);
	void SetRequestJoinUser(ROOM_JOIN_USER_FREE *);
	void SetRequestJoinUser(ROOM_JOIN_USER_RANK *);
	unsigned char GetMyNo();
	bool GetMySeatOwner();
	NETWORK_ROOM_BATTLE_TYPE GetTableBattleType(unsigned char);
	NETWORK_ROOM_BATTLE_TYPE GetTableBattleTypeFromSeat(unsigned char);
	void SetSeatBattleInfoFromUserInfo(MsgSeatRequest *, GAME_RULE);
	bool IsTableBattleStartComplete(unsigned char);
	void SendReadyTableBattleStart(unsigned char, MsgJoinComplete *);
	bool IsBattleSeat(GAME_RULE, unsigned char);
	bool IsBattleSeatOwner(unsigned char);
	bool IsBattleWatching();
	void SetOrder(long, unsigned char, unsigned char);
	unsigned char GetOrder(long, unsigned char);
	void ResetMyOrder(unsigned char);
	void SetCharacterFix(long, unsigned char, unsigned char);
	unsigned char GetCharacterFix(long, unsigned char);
	unsigned long GetFreeMatchBattleWins();
	void AddFreeMatchBattleWins(bool);
	void AddFreeMatchBattleWins2(unsigned char, bool);
	bool IsOrderSelectEnd();
	void RequestLeaveRoom();
	void DirectLeaveRoom();
	unsigned char GetRoomPlayerCount();
	bool IsCreateRoom();
	bool IsRoomIn();
	bool IsJoinRoom();
	bool GetSpectatorStartSeatNo(unsigned char, GAME_RULE);
	unsigned char GetTableStartSeatNo(unsigned char);
	long GetBattleMemberMax(GAME_RULE);
	long GetBattleStartTableNo();
	unsigned char GetTableStartSeatNoFromTableNo(unsigned char);
	void SetResultMenuCursor(unsigned char, char);
	char GetResultMenuCursor(unsigned char);
	void LeaveBattle();
	void CreateRoom(Fw::ROOM_ATTR *);
	void SetCreateRoomSetting(Fw::ROOM_ATTR *);
	void RequestSearchRoom(Fw::ROOM_ATTR *, long);
	void SetMatchMode(NETWORK_MATCHING_TYPE);
	NETWORK_MATCHING_TYPE GetMatchMode();
	void SetGameRule(GAME_RULE);
	GAME_RULE GetGameRule();
	void SetSearchArea(ELobbyDistanceFilter);
	ELobbyDistanceFilter GetSearchArea();
	void SetSuccessHighRateType(NETWORK_SUCCESSRATE_SELECT);
	NETWORK_SUCCESSRATE_SELECT GetSuccessHighRateType();
	void SetAntennaLimitType(NETWORK_ANTENNA_SELECT_UI);
	NETWORK_ANTENNA_SELECT_UI GetAntennaLimitType();
	void SetLiveLimitType(NETWORK_LIVE_SELECT);
	NETWORK_LIVE_SELECT GetLiveLimitType();
	void SetRoomBattleType(NETWORK_ROOM_BATTLE_TYPE);
	NETWORK_ROOM_BATTLE_TYPE GetRoomBattleType();
	void SetRoundTimerType(BATTLE_ROUND_TIMER_TYPE);
	BATTLE_ROUND_TIMER_TYPE GetRoundTimerType();
	void SetRoundType(NETWORK_ROUND_SELECT);
	NETWORK_ROUND_SELECT GetRoundType();
	unsigned long GetRandSeed();
	void SetMaxSlot(long);
	long GetMaxSlot();
	void SetPrivateSlot(long);
	long GetPrivateSlot();
	long GetPrivateSlotFree();
	void SetRoomName(char *);
	void GetRoomName(char *);
	bool UpdateSeatLeaveSeat(unsigned char, unsigned char, SEND_MESSAGE *);
	void UpdateSeatLeave(unsigned char, SEND_MESSAGE *);
	void UpdateSeatSit(unsigned char, unsigned char, SEAT_FLAG, BATTLE_WAIT_STATE, NETWORK_ROOM_BATTLE_TYPE, SEND_MESSAGE *, bool);
	void UpdateSeatBattleWait(MsgSeatRequest *);
	void CallGayaSe(NETWORK_GAYA_TYPE);
	bool IsPlayingGayaSe(NETWORK_GAYA_TYPE);
	const char * GetGayaSEName(NETWORK_GAYA_TYPE);
	void setChatOff(unsigned char);
	void resetChatOff(unsigned char);
	bool GetChatOff(unsigned char);
	void setBattleUserDisconnectTick(unsigned char, unsigned long long);
	unsigned long long getBattleUserDisconnectTick(unsigned char);
	unsigned long long getResultMenuClearTick(unsigned char);
	void setDisconnectBattleUser(unsigned char, unsigned char, bool);
	bool GetDisconnectBattleUser(unsigned char, unsigned char);
	void ProcessJoinRequest(SEND_MESSAGE *, CSteamID, bool);
	void ProcessJoinCompleteRank(SEND_MESSAGE *, CSteamID);
	void ProcessJoinComplete(SEND_MESSAGE *, CSteamID);
	void ProcessSitSeatRequest(SEND_MESSAGE *, CSteamID);
	void ProcessSitSeatComple(SEND_MESSAGE *);
	void ProcessTableComple(SEND_MESSAGE *);
	void ProcessTableDiscrete(SEND_MESSAGE *, bool);
	void ProcessBattleLeave(SEND_MESSAGE *);
	void ProcessOrderSelect(SEND_MESSAGE *);
	void ProcessCharacterSelect(SEND_MESSAGE *);
	void ProcessCharacterSelectNotParty(SEND_MESSAGE *);
	void ProcessCharacterSelectComplete(SEND_MESSAGE *);
	void ProcessBattleLoadEnd(SEND_MESSAGE *);
	void ProcessLeaveRoom(SEND_MESSAGE *);
	void ProcessBackRoom(SEND_MESSAGE *);
	void ProcessBattleCommand(SEND_MESSAGE *);
	void ProcessBattleCommandTcp(SEND_MESSAGE *);
	void ProcessGameResultMenu(unsigned char, unsigned char, unsigned char, bool);
	void ProcessGameResultMenu(SEND_MESSAGE *);
	void ProcessGameResultNextScene(SEND_MESSAGE *);
	void ProcessTrainingMenu(SEND_MESSAGE *);
	void ProcessGayaSe(SEND_MESSAGE *);
	void ProcessRoomFull(SEND_MESSAGE *);
	void ProcessRankmatchAccept(SEND_MESSAGE *);
	void ChangeState(ONLINE_STATE, long);
	unsigned char GetAddDelayFrame();
	PLAYER_ID GetPlayerID(long);
	void GetPlayerName(long, char *);
	void GetPlayerName(PLAYER_ID, char *, RANKMATCH_DISCONNECT_MARKER *, long);
	long GetPNo(PLAYER_ID, long);
	long GetPlayerIndex(long);
	long GetSeatNo(long);
	NETWORK_ROOM_BATTLE_TYPE GetMyTableBattleTypeFromSeat(long);
	const char * GetNetworkErrorKey(NETWORK_ERROR_TYPE);
	void resetPlayer(unsigned char);
	unsigned long long m_nextPingTick; // 0x40
	unsigned long long m_nextQOSRequestTick; // 0x48
	Fw::cMutex m_Mutex; // 0x50
	bool m_Invitation_Doing; // 0x79
	NET_GAMEDATA gamedata; // 0x80
	class_net_rank_traning_wait rank_traning_wait; // 0x1AD0
	AgMutex roomsRTTMutex; // 0x1AEC
	long obtainedRoomsRTT[50]; // 0x1B14
	enum <unnamed-enum-THREAD_SEND>
	{
		THREAD_SEND = 0,
		THREAD_RECV_UDP = 1,
		THREAD_RECV_TCP = 2,
		THREAD_MAX = 3,
	};
private:
	AgPointer<AgThread> m_Thread[3]; // 0x1BE0
	Fw::ROOM_ATTR m_SearchEndRoomAttr[50]; // 0x1C10
	Fw::ROOM_ATTR m_AutoJoinRoomAttr[50]; // 0xEF00
	unsigned long m_AutoRoomInIndex; // 0x1C1F0
	void errorCheck(ONLINE_STATE);
	bool kickOutCheck();
	void updateTop();
	void updateCreatingRoom();
	void updateCreateComplete();
	void updateWaitClient();
	void updateSearchingRoom();
	void updateJoiningRoom();
	void updateJoinComplete();
	void updateWaitStart();
	void updateBattleLoadEnd();
	void updateReadyGame();
	void updateBattle();
	void updateLeaveRoom();
	void updateTrainingWait();
	void updateError();
	void checkRoomMemberAntenna();
	void disconnectCheck();
	void setError(NETWORK_ERROR_TYPE);
	void setSystemError(long);
	void sortRoomInfoForRtt(Fw::ROOM_ATTR *, long);
	bool isRoomMember(char *);
	void clearPlayerData(long);
	void setJoinUser(NET_USER_DATA *, char *, ROOM_JOIN_USER_FREE *, unsigned char, CSteamID *);
	void setJoinUser(NET_USER_DATA *, char *, ROOM_JOIN_USER_RANK *, unsigned char, CSteamID *);
	void convertRoomMemberFromUserData(ROOM_USER_DATA *, NET_USER_DATA *);
	void convertRoomMemberFromUserData(ROOM_USER_DATA_RANK *, NET_USER_DATA *);
	void convertUserDataFromRoomMember(NET_USER_DATA *, ROOM_USER_DATA *);
	void convertUserDataFromRoomMember(NET_USER_DATA *, ROOM_USER_DATA_RANK *);
	void setUserDataFromRoomMemberInfo(ROOM_USER_DATA *, unsigned char, unsigned char);
	void setUserDataFromRoomMemberInfo(ROOM_USER_DATA_RANK *, unsigned char);
	void setMyNo(unsigned char);
	void setAllTableBattleType(GAME_RULE, NETWORK_ROOM_BATTLE_TYPE);
	void setSeatBattleType(unsigned char, NETWORK_ROOM_BATTLE_TYPE);
	bool isTableSeating(unsigned char);
	unsigned char getTableNoFromSeatNo(unsigned char);
	void setCharacterInfoFromUserInfo(unsigned char, unsigned char);
	void setSeatUserFromPlayerData(SEAT_USER_DATA_PARTY *, NET_USER_DATA &);
	void setSeatUserFromPlayerData(SEAT_USER_DATA_SPECTATOR *, NET_USER_DATA &);
	void setSeatUserFromPlayerData(SEAT_USER_DATA *, NET_USER_DATA &);
	void setPlayerDataFromSeatUser(NET_USER_DATA *, SEAT_USER_DATA_SPECTATOR *);
	void setPlayerDataFromSeatUser(NET_USER_DATA *, SEAT_USER_DATA_PARTY *, bool);
	void setPlayerDataFromSeatUser(NET_USER_DATA *, SEAT_USER_DATA_SPECTATOR *, bool, GAME_RULE);
	void setPlayerDataFromSeatUser(NET_USER_DATA *, SEAT_USER_DATA_SPECTATOR *, bool);
	void setPlayerDataFromSeatUser(NET_USER_DATA *, SEAT_USER_DATA *, GAME_RULE);
	void setSeatSetting(unsigned char, unsigned char, SEAT_FLAG, BATTLE_WAIT_STATE);
	void setTeamAndOrder(NET_USER_DATA *, unsigned char, unsigned char, unsigned char, unsigned char, bool);
	void SetPresetCharacterSingle(bool);
	void SetPresetCharacterTeam(bool);
	void resetSendFrequency(ONLINE_STATE);
	void updateTimeStamp();
	void updateLastRecvTime(unsigned char, unsigned long long);
	unsigned long long getLastRecvTime(unsigned char);
	void updateRoomInfo(Fw::ROOM_ATTR *);
	void setRoomPlayerCount(unsigned char);
	unsigned char addRoomPlayerCount();
	void subRoomPlayerCount();
	void setAdvanceFlag(unsigned char, long);
	long getAdvanceFlag(unsigned char);
	void resetLocalData();
	BATTLE_WAIT_STATE getBattleWaitState(unsigned char);
	void clearOrderTable(unsigned char, unsigned char, bool);
	void clearOrderTable2(unsigned char, unsigned char, bool);
	void clearOrderTable3(unsigned char, unsigned char);
	bool isTimeout(unsigned long long);
	unsigned char CalcAddDelayFrame();
	unsigned char CalcAddDelayFrame2(bool, float, long, long, float);
public:
	void RequestLoadGame(long);
	bool GetRoomMemberName(long, char *, bool);
	unsigned long long GetRoomMemberId(long);
	void setHostNo(char);
	char getHostNo();
	bool SitSeatRequest(unsigned char, unsigned char, SEAT_FLAG, NETWORK_ROOM_BATTLE_TYPE, BATTLE_WAIT_STATE, unsigned char *, BATTLE_WAIT_STATE *);
	unsigned char GetEmptySeatNo(unsigned char, BATTLE_WAIT_STATE);
	bool isHost();
	bool IsTryJoinRoom();
	unsigned char getGrade(long);
	char CalcRankMatchMemberAntenna(long);
	char CalcFreeMAtchMemberAntenna(long);
	char GetAntennaReal(long);
	void RequestChangeCharacter(unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, bool);
	void GetTableAddrList(unsigned char, Fw::ONLINEID *, long *, bool);
	void SendMessageW(SEND_MESSAGE *, void *, long, long);
	long GetRoomMemberNum();
	unsigned long getIp(char);
	unsigned char CalcBpsAntenaLevel(double, double);
	void SetMyAntenna(unsigned char);
	unsigned char GetMyAntenna();
	unsigned char GetMyAntennaReal();
	char CalcBandWidthAntenna(unsigned long);
	char CalcRttAntenna(unsigned long);
	bool IsSearchRoomLimit();
	void SetSearchRoomLimit(bool);
	bool GetSpeakFlag(char);
	bool IsFlagInvitation();
	void SetFlagInvitation(bool);
	bool IsPlayTogether();
	long GetPlayTogetherSlot();
	void ClearPlayTogether();
private:
	RANKMATCH_ACCEPT m_RankmatchAccept[2]; // 0x1C1F4
	void clearRankmatchAccept();
	void SendRankMatchAccept(RANKMATCH_ACCEPT);
public:
	void SetRankMatchAccept(RANKMATCH_ACCEPT_TARGET, RANKMATCH_ACCEPT);
	RANKMATCH_ACCEPT GetRankMatchAccept(RANKMATCH_ACCEPT_TARGET);
private:
	bool initFlag; // 0x1C1FC
public:
	bool getInitFlag();
	void SetOnlinePlay(bool);
	bool GetOnlinePlay();
private:
	bool m_myTeamRandom; // 0x1C1FD
	bool m_myEditRandom[3]; // 0x1C1FE
	CHARACTER_NO next_character_no1; // 0x1C204
	CHARACTER_NO next_character_no2; // 0x1C208
	CHARACTER_NO next_character_no3; // 0x1C20C
	CHARACTER_COLOR next_color_1; // 0x1C210
	CHARACTER_COLOR next_color_2; // 0x1C214
	CHARACTER_COLOR next_color_3; // 0x1C218
	long next_costume_1; // 0x1C21C
	long next_costume_2; // 0x1C220
	long next_costume_3; // 0x1C224
	STAGE_ID next_stage; // 0x1C228
public:
	void keepRandomFlag();
	void RandomCharaState();
	void NextData2GameDataInfo();
	CHARACTER_NO GetNextCharaNo(long);
	CHARACTER_COLOR GetNextCharaColor(long);
	long GetNextCharaCostume(long);
	void SetNextStage(STAGE_ID);
	STAGE_ID GetNextStage();
private:
	bool m_FlagErrorCreateRoomTimeOut; // 0x1C22C
public:
	bool IsCreateRoomTimeOut();
	void SetCreateRoomTimeOut(bool);
};
class NetManager::ThreadHost :
	AgSimpleThreadHost
{
public:
	ThreadHost(NetManager::ThreadHost &);
	ThreadHost(const NetManager::ThreadHost &);
	ThreadHost(NetManager *, void *(*)(void *));
	virtual void onExecuteThread();
	NetManager * m_manager; // 0x10
private:
	void *(*m_func)(void *); // 0x18
public:
	virtual ~ThreadHost();
	NetManager::ThreadHost & operator=(NetManager::ThreadHost &);
	NetManager::ThreadHost & operator=(const NetManager::ThreadHost &);
};