#pragma once

class Fw::MatchingCommon
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
	static unsigned short GetServerId();
	static bool GetServerIdError();
	static unsigned long long GetRoomId();
	static long GetRoomMemberNum();
	static void GetRoomMemberName(long, char *);
	static void SetRoomMemberName(CSteamID, const char *);
	static void GetRoomMemberRttAndBandwidth(char *, Fw::MEMBER_RTTANDBANDWIDTH *);
	static bool IsRoomSearchEnd();
	static bool IsJoinRoom();
	static unsigned long GetRoomQosCompleteNum();
	static unsigned long GetRoomQosErrorNum();
	static unsigned long GetSearchRoomNum();
	static void FinishQOSRequests();
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
	static void UpdateTypedChatMessage(char *);
	static void SendRoomChatMessage(char *, long, char *);
	static long RecvRoomChatMessage(Fw::ROOM_CHATMESSAGE_INFO *);
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
private:
	static bool m_Initialized; // 0xFFFFFFFFFFFFFFFF
	static long m_libnetMemId; // 0xFFFFFFFFFFFFFFFF
	static long m_libsslCtxId; // 0xFFFFFFFFFFFFFFFF
	static long m_libhttpCtxId; // 0xFFFFFFFFFFFFFFFF
};