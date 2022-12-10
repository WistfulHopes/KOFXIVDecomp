#pragma once

struct Fw::ROOM_SESSION_INFO
{
	Fw::ONLINEID m_OnlineId; // 0x0
	long slotMax; // 0x8
	char roomName[129]; // 0xC
	char gameRule; // 0x8D
	char liveOpen; // 0x8E
	char battleType; // 0x8F
	char roundTimerType; // 0x90
	char roundType; // 0x91
	unsigned long long roomId; // 0x98
	bool password; // 0xA0
};
class Fw::InvitationSystem
{
public:
	static bool Startup(Fw::HeapMemory &);
	static bool Update(bool *, bool *);
	static void Shutdown();
	static void DialogOpen(const char *);
	static void DialogClose();
	static bool CreateSession(Fw::SESSION_INFO *);
	static bool IsCreateSessionComplete();
	static bool IsJoinRoomWait();
	static void ClearJoinRoomWaitFlag();
	static void GetRoomSessionInfo(Fw::ROOM_SESSION_INFO *);
	static void DeleteSession();
	static bool IsSessionDeleteComplete();
	static void LeaveSession();
	static bool GetUpdateLiveStreaming();
	static bool IsNotGameOwner();
	static void ClearNotGameOwnerFlag();
	static bool IsInvitation();
	static void ClearInvitationFlag();
	static bool IsWaitPlayTogetherOnlineCheck();
	static void ClearPlayTogetherOnlineCheck();
	static unsigned long GetCntPlayTogether();
	static void InvitationPlayTogether(const char *);
	static bool IsInvitationPlayTogetherComplete();
	static bool IsBackgroud();
};