#pragma once

struct Fw::RoomSearchAttr
{
	long num; // 0x0
	long attributeIndex; // 0x4
	unsigned char searchOperator; // 0x8
};
class Fw::RoomWriteAttr
{
public:
	long m_AttrSize; // 0x0
};
class Fw::RoomReadAttr
{
public:
	long m_MemberNum; // 0x0
	long m_Rtt; // 0x4
};
struct Fw::ROOM_ATTR
{
	Fw::RoomSearchAttr m_Attr[32]; // 0x0
	long m_WorldIdIndex; // 0x180
	long m_MaxSlot; // 0x184
	long m_PrivateSlotNum; // 0x188
	char m_RoomName[129]; // 0x18C
	UserId m_RoomOwner; // 0x210
	UserId m_BlockedUser[32]; // 0x220
	unsigned long long m_BlockedUserNum; // 0x420
	CSteamID m_RoomId; // 0x428
	Fw::RoomWriteAttr m_Write; // 0x430
	Fw::RoomReadAttr m_Read; // 0x430
	ROOM_ATTR(Fw::ROOM_ATTR &);
	ROOM_ATTR(const Fw::ROOM_ATTR &);
	ROOM_ATTR();
	~ROOM_ATTR();
	Fw::ROOM_ATTR & operator=(Fw::ROOM_ATTR &);
	Fw::ROOM_ATTR & operator=(const Fw::ROOM_ATTR &);
};
Fw::ROOM_ATTR::ROOM_ATTR(); // 0x1400485E0
struct Fw::ROOM_CHATMESSAGE_INFO
{
	unsigned long long npId; // 0x0
	unsigned long long tick; // 0x8
	char message[256]; // 0x10
};
struct Fw::MEMBER_RTTANDBANDWIDTH
{
	unsigned long rtt; // 0x0
	unsigned long bandwidth; // 0x4
};
enum Fw::NET_SOCKET_INDEX
{
	NET_SOCKET_INDEX_SEND_UDP = 0,
	NET_SOCKET_INDEX_RECV_UDP = 1,
	NET_SOCKET_INDEX_MAX = 2,
};
struct Fw::TUdpP2pInfo
{
	TUdpP2pInfo(Fw::TUdpP2pInfo &);
	TUdpP2pInfo(const Fw::TUdpP2pInfo &);
	TUdpP2pInfo();
	UserId npId; // 0x0
	unsigned long long memberId; // 0x10
	bool isStartRequest; // 0x18
	CSteamID addr; // 0x19
	unsigned short port; // 0x22
	unsigned long rtt; // 0x24
	unsigned long bandwidth; // 0x28
	bool hostFlag; // 0x2C
	~TUdpP2pInfo();
	Fw::TUdpP2pInfo & operator=(Fw::TUdpP2pInfo &);
	Fw::TUdpP2pInfo & operator=(const Fw::TUdpP2pInfo &);
};
class Fw::MatchingSystem
{
public:
	static bool Startup();
	static void Shutdown();
	static bool Initialize(Fw::HeapMemory &);
	static void Finalize();
	static bool OnlineStart(Fw::HeapMemory &);
	static bool OnlineStart2();
	static void OnlineStop();
	static long GetLibHttpCtxId();
	static void ClearSystemErrorCode();
	static long GetSystemErrorCode();
	static unsigned long long GetRoomId();
	static long GetRoomMemberNum();
	static void GetRoomMemberName(long, char *);
	static void SetRoomMemberName(CSteamID, const char *);
	static void GetRoomMemberRttAndBandwidth(char *, Fw::MEMBER_RTTANDBANDWIDTH *);
	static bool IsRoomSearchEnd();
	static bool IsJoinRoom();
	static unsigned long GetRoomQosCompleteNum();
	static unsigned long GetRoomQosErrorNum();
	static void FinishQOSRequests();
	static unsigned long GetSearchRoomNum();
	static void GetSearchRoomAttr(long, Fw::ROOM_ATTR *, long, bool);
	static bool IsRoomOwner(const char *);
	static bool CreateJoinRoom(Fw::ROOM_ATTR *);
	static bool SearchRoom(Fw::ROOM_ATTR *);
	static bool JoinRoom(CSteamID, bool);
	static void LeaveRoom();
	static void ClearUserInfo();
	static const char * GetRoomOwnerOnlineId(long);
	static unsigned long long GetRoomOwnerID();
	static void SetRoomOwnerOnlineId(Fw::ONLINEID *);
	static void SendRoomChatMessage(char *, long, char *);
	static long RecvRoomChatMessage(Fw::ROOM_CHATMESSAGE_INFO *);
	static void UpdateTypedChatMessage(char *);
	static void KickoutRoomMember(const unsigned long long &);
	static bool IsKickoutRoom();
	static void ClearKickoutRoom();
	static bool IsHostChange();
	static bool IsAliveMember(unsigned long long);
	static bool ChangeRoomData(ChangeRoomDataList &);
	static unsigned short GetMemberId(const char *);
	static bool GetOnlineId(unsigned short, char *);
	static bool GetSignaling(char *);
	static bool SendUdp(char *, long, long, void *, long, long *, bool, bool);
	static bool RecvUdp(void *, unsigned long long, CSteamID *, unsigned long *);
	static void voiceChatUpdate();
	static bool getVoiceMessage(char, unsigned char *, unsigned long *);
	static bool setVoiceMessage(char, unsigned char *, unsigned long *);
	static void addVoiceConnect(char);
	static void delAllVoiceConnect();
	static void delVoiceConnect(char);
	static void setMicMute(bool);
	static void setSpeakerMute(bool);
	static bool getRemoteMute(char);
	static void setRejectMute(char, bool);
	static void setStateMute(char, bool);
	static bool getHeartBeatNoticeFlag(char);
	static void UpdateConnectInfo(Fw::MEMBER_RTTANDBANDWIDTH *, unsigned long long, bool);
	static long getCntConectedUser();
};