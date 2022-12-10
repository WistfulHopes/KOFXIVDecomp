#pragma once

class Fw::MatchingTargetCallbackHandler
{
public:
	MatchingTargetCallbackHandler();
	CCallback<Fw::MatchingTargetCallbackHandler,LobbyCreated_t,0> m_CallbackLobbyCreated; // 0x0
	void OnLobbyCreated(LobbyCreated_t *);
	CCallback<Fw::MatchingTargetCallbackHandler,LobbyEnter_t,0> m_CallbackLobbyEntered; // 0x20
	void OnLobbyEntered(LobbyEnter_t *);
	CCallback<Fw::MatchingTargetCallbackHandler,PersonaStateChange_t,0> m_CallbackPersonaStateChanged; // 0x40
	void OnPersonaStateChanged(PersonaStateChange_t *);
	CCallback<Fw::MatchingTargetCallbackHandler,LobbyMatchList_t,0> m_CallbackLobbyMatchList; // 0x60
	void OnLobbyMatchList(LobbyMatchList_t *);
	CCallback<Fw::MatchingTargetCallbackHandler,LobbyChatUpdate_t,0> m_CallbackLobbyChatUpdate; // 0x80
	void OnLobbyChatUpdate(LobbyChatUpdate_t *);
	CCallback<Fw::MatchingTargetCallbackHandler,LobbyChatMsg_t,0> m_CallbackLobbyChatMessage; // 0xA0
	void OnLobbyChatMessage(LobbyChatMsg_t *);
	CCallback<Fw::MatchingTargetCallbackHandler,P2PSessionRequest_t,0> m_CallbackP2PSessionRequest; // 0xC0
	void OnP2PSessionRequest(P2PSessionRequest_t *);
	CCallback<Fw::MatchingTargetCallbackHandler,P2PSessionConnectFail_t,0> m_CallbackP2PSessionConnectFail; // 0xE0
	void OnP2PSessionConnectFail(P2PSessionConnectFail_t *);
	CCallback<Fw::MatchingTargetCallbackHandler,LobbyKicked_t,0> m_CallbackLobbyKicked; // 0x100
	void OnLobbyKicked(LobbyKicked_t *);
	~MatchingTargetCallbackHandler();
};
class CCallback<Fw::MatchingTargetCallbackHandler,LobbyCreated_t,0> :
	CCallbackImpl<16>
{
	typedef void(*func_t)(LobbyCreated_t *);
public:
	CCallback<Fw::MatchingTargetCallbackHandler,LobbyCreated_t,0>(Fw::MatchingTargetCallbackHandler *, void(*)(LobbyCreated_t *));
	void Register(Fw::MatchingTargetCallbackHandler *, void(*)(LobbyCreated_t *));
	void Unregister();
protected:
	virtual void Run(void *);
	Fw::MatchingTargetCallbackHandler * m_pObj; // 0x10
	void(*m_Func)(LobbyCreated_t *); // 0x18
public:
	~CCallback<Fw::MatchingTargetCallbackHandler,LobbyCreated_t,0>();
};
class CCallback<Fw::MatchingTargetCallbackHandler,LobbyEnter_t,0> :
	CCallbackImpl<24>
{
	typedef void(*func_t)(LobbyEnter_t *);
public:
	CCallback<Fw::MatchingTargetCallbackHandler,LobbyEnter_t,0>(Fw::MatchingTargetCallbackHandler *, void(*)(LobbyEnter_t *));
	void Register(Fw::MatchingTargetCallbackHandler *, void(*)(LobbyEnter_t *));
	void Unregister();
protected:
	virtual void Run(void *);
	Fw::MatchingTargetCallbackHandler * m_pObj; // 0x10
	void(*m_Func)(LobbyEnter_t *); // 0x18
public:
	~CCallback<Fw::MatchingTargetCallbackHandler,LobbyEnter_t,0>();
};
class CCallback<Fw::MatchingTargetCallbackHandler,PersonaStateChange_t,0> :
	CCallbackImpl<16>
{
	typedef void(*func_t)(PersonaStateChange_t *);
public:
	CCallback<Fw::MatchingTargetCallbackHandler,PersonaStateChange_t,0>(Fw::MatchingTargetCallbackHandler *, void(*)(PersonaStateChange_t *));
	void Register(Fw::MatchingTargetCallbackHandler *, void(*)(PersonaStateChange_t *));
	void Unregister();
protected:
	virtual void Run(void *);
	Fw::MatchingTargetCallbackHandler * m_pObj; // 0x10
	void(*m_Func)(PersonaStateChange_t *); // 0x18
public:
	~CCallback<Fw::MatchingTargetCallbackHandler,PersonaStateChange_t,0>();
};
class CCallback<Fw::MatchingTargetCallbackHandler,LobbyMatchList_t,0> :
	CCallbackImpl<4>
{
	typedef void(*func_t)(LobbyMatchList_t *);
public:
	CCallback<Fw::MatchingTargetCallbackHandler,LobbyMatchList_t,0>(Fw::MatchingTargetCallbackHandler *, void(*)(LobbyMatchList_t *));
	void Register(Fw::MatchingTargetCallbackHandler *, void(*)(LobbyMatchList_t *));
	void Unregister();
protected:
	virtual void Run(void *);
	Fw::MatchingTargetCallbackHandler * m_pObj; // 0x10
	void(*m_Func)(LobbyMatchList_t *); // 0x18
public:
	~CCallback<Fw::MatchingTargetCallbackHandler,LobbyMatchList_t,0>();
};
class CCallback<Fw::MatchingTargetCallbackHandler,LobbyChatUpdate_t,0> :
	CCallbackImpl<32>
{
	typedef void(*func_t)(LobbyChatUpdate_t *);
public:
	CCallback<Fw::MatchingTargetCallbackHandler,LobbyChatUpdate_t,0>(Fw::MatchingTargetCallbackHandler *, void(*)(LobbyChatUpdate_t *));
	void Register(Fw::MatchingTargetCallbackHandler *, void(*)(LobbyChatUpdate_t *));
	void Unregister();
protected:
	virtual void Run(void *);
	Fw::MatchingTargetCallbackHandler * m_pObj; // 0x10
	void(*m_Func)(LobbyChatUpdate_t *); // 0x18
public:
	~CCallback<Fw::MatchingTargetCallbackHandler,LobbyChatUpdate_t,0>();
};
class CCallback<Fw::MatchingTargetCallbackHandler,LobbyChatMsg_t,0> :
	CCallbackImpl<24>
{
	typedef void(*func_t)(LobbyChatMsg_t *);
public:
	CCallback<Fw::MatchingTargetCallbackHandler,LobbyChatMsg_t,0>(Fw::MatchingTargetCallbackHandler *, void(*)(LobbyChatMsg_t *));
	void Register(Fw::MatchingTargetCallbackHandler *, void(*)(LobbyChatMsg_t *));
	void Unregister();
protected:
	virtual void Run(void *);
	Fw::MatchingTargetCallbackHandler * m_pObj; // 0x10
	void(*m_Func)(LobbyChatMsg_t *); // 0x18
public:
	~CCallback<Fw::MatchingTargetCallbackHandler,LobbyChatMsg_t,0>();
};
class CCallback<Fw::MatchingTargetCallbackHandler,P2PSessionRequest_t,0> :
	CCallbackImpl<8>
{
	typedef void(*func_t)(P2PSessionRequest_t *);
public:
	CCallback<Fw::MatchingTargetCallbackHandler,P2PSessionRequest_t,0>(Fw::MatchingTargetCallbackHandler *, void(*)(P2PSessionRequest_t *));
	void Register(Fw::MatchingTargetCallbackHandler *, void(*)(P2PSessionRequest_t *));
	void Unregister();
protected:
	virtual void Run(void *);
	Fw::MatchingTargetCallbackHandler * m_pObj; // 0x10
	void(*m_Func)(P2PSessionRequest_t *); // 0x18
public:
	~CCallback<Fw::MatchingTargetCallbackHandler,P2PSessionRequest_t,0>();
};
class CCallback<Fw::MatchingTargetCallbackHandler,P2PSessionConnectFail_t,0> :
	CCallbackImpl<9>
{
	typedef void(*func_t)(P2PSessionConnectFail_t *);
public:
	CCallback<Fw::MatchingTargetCallbackHandler,P2PSessionConnectFail_t,0>(Fw::MatchingTargetCallbackHandler *, void(*)(P2PSessionConnectFail_t *));
	void Register(Fw::MatchingTargetCallbackHandler *, void(*)(P2PSessionConnectFail_t *));
	void Unregister();
protected:
	virtual void Run(void *);
	Fw::MatchingTargetCallbackHandler * m_pObj; // 0x10
	void(*m_Func)(P2PSessionConnectFail_t *); // 0x18
public:
	~CCallback<Fw::MatchingTargetCallbackHandler,P2PSessionConnectFail_t,0>();
};
class CCallback<Fw::MatchingTargetCallbackHandler,LobbyKicked_t,0> :
	CCallbackImpl<24>
{
	typedef void(*func_t)(LobbyKicked_t *);
public:
	CCallback<Fw::MatchingTargetCallbackHandler,LobbyKicked_t,0>(Fw::MatchingTargetCallbackHandler *, void(*)(LobbyKicked_t *));
	void Register(Fw::MatchingTargetCallbackHandler *, void(*)(LobbyKicked_t *));
	void Unregister();
protected:
	virtual void Run(void *);
	Fw::MatchingTargetCallbackHandler * m_pObj; // 0x10
	void(*m_Func)(LobbyKicked_t *); // 0x18
public:
	~CCallback<Fw::MatchingTargetCallbackHandler,LobbyKicked_t,0>();
};
class Fw::MatchingTarget :
	Fw::MatchingTargetBase
{
public:
	static bool Initialize(Fw::HeapMemory &);
	static void Finalize();
	static bool OnlineStart();
	static void OnlineStop();
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
	static void UpdateConnectInfo(Fw::MEMBER_RTTANDBANDWIDTH *, unsigned long long, bool);
	static void SetPacketReceived(CSteamID &, unsigned long long);
	static void CheckTimeout(unsigned long long);
	struct ROOM_MEMBER_INFO;
	struct SEARCH_ROOM_INFO;
	struct TCP_CONNECT_WORK;
private:
	static bool createContext();
	static void destroyContext();
	static bool startContext();
	static void stopContext();
	static void setSystemErrorCode(long);
	static long GetRoomMemberId(long, char *);
	static CSteamID m_RoomId; // 0xFFFFFFFFFFFFFFFF
	static long m_SystemErrorCode; // 0xFFFFFFFFFFFFFFFF
	static bool m_RoomOwnerChanged; // 0xFFFFFFFFFFFFFFFF
	static long m_RoomChatMessageCount; // 0xFFFFFFFFFFFFFFFF
	static Fw::ROOM_CHATMESSAGE_INFO m_RoomChatMessage[8]; // 0xFFFFFFFFFFFFFFFF
	static unsigned long m_SearchRoomNum; // 0xFFFFFFFFFFFFFFFF
	static unsigned long m_QosEndRoomNum; // 0xFFFFFFFFFFFFFFFF
	static unsigned long m_QosEndErrorRoomNum; // 0xFFFFFFFFFFFFFFFF
	static bool m_IsRoomSearchEnd; // 0xFFFFFFFFFFFFFFFF
	static bool m_IsJoinEnd; // 0xFFFFFFFFFFFFFFFF
	static Fw::MatchingTarget::ROOM_MEMBER_INFO m_RoomMember[12]; // 0xFFFFFFFFFFFFFFFF
	static bool m_RoomKickoutFlag; // 0xFFFFFFFFFFFFFFFF
	static bool m_RoomCreate; // 0xFFFFFFFFFFFFFFFF
	static unsigned long long m_MemberId[12]; // 0xFFFFFFFFFFFFFFFF
	static Fw::HeapMemory * m_pHeap; // 0xFFFFFFFFFFFFFFFF
	static bool m_Initialized; // 0xFFFFFFFFFFFFFFFF
	static bool m_IsOnlineStarted; // 0xFFFFFFFFFFFFFFFF
	static Fw::ROOM_ATTR m_RoomAttr; // 0xFFFFFFFFFFFFFFFF
	static Fw::MatchingTargetCallbackHandler * m_callbackHandler; // 0xFFFFFFFFFFFFFFFF
public:
	static Fw::cMutex m_MemberMutex; // 0xFFFFFFFFFFFFFFFF
	static Fw::MatchingTarget::SEARCH_ROOM_INFO SearchRoomInfo[50]; // 0xFFFFFFFFFFFFFFFF
	static void OnLobbyCreated(LobbyCreated_t *);
	static void OnLobbyEntered(LobbyEnter_t *);
	static void OnPersonaStateChanged(PersonaStateChange_t *);
	static void OnLobbyMatchList(LobbyMatchList_t *);
	static void OnLobbyChatUpdate(LobbyChatUpdate_t *);
	static void OnLobbyChatMessage(LobbyChatMsg_t *);
	static void OnP2PSessionRequest(P2PSessionRequest_t *);
	static void OnP2PSessionConnectFail(P2PSessionConnectFail_t *);
	static void OnLobbyKicked(LobbyKicked_t *);
	static void SetRtt(unsigned long long, unsigned long long);
	static void SendQOSRequest();
};
struct Fw::MatchingTarget::ROOM_MEMBER_INFO
{
	bool active; // 0x0
	bool hostFlag; // 0x1
	UserId npId; // 0x8
	unsigned long long memberId; // 0x18
	unsigned long long lastPacketReceived; // 0x20
	void reset();
	ROOM_MEMBER_INFO(Fw::MatchingTarget::ROOM_MEMBER_INFO &);
	ROOM_MEMBER_INFO(const Fw::MatchingTarget::ROOM_MEMBER_INFO &);
	ROOM_MEMBER_INFO();
	~ROOM_MEMBER_INFO();
	Fw::MatchingTarget::ROOM_MEMBER_INFO & operator=(Fw::MatchingTarget::ROOM_MEMBER_INFO &);
	Fw::MatchingTarget::ROOM_MEMBER_INFO & operator=(const Fw::MatchingTarget::ROOM_MEMBER_INFO &);
};
struct Fw::MatchingTarget::SEARCH_ROOM_INFO
{
	UserId ownerNpId; // 0x0
	unsigned long long ownerSteamId; // 0x10
	CSteamID roomId; // 0x18
	Fw::RoomSearchAttr attr[32]; // 0x20
	unsigned short publicSlotsAvailable; // 0x1A0
	unsigned short maxSlot; // 0x1A2
	unsigned short curMemberNum; // 0x1A4
	unsigned long rtt; // 0x1A8
	char bin[129]; // 0x1AC
	unsigned long long binSize; // 0x230
	bool qosFlag; // 0x238
	SEARCH_ROOM_INFO(Fw::MatchingTarget::SEARCH_ROOM_INFO &);
	SEARCH_ROOM_INFO(const Fw::MatchingTarget::SEARCH_ROOM_INFO &);
	SEARCH_ROOM_INFO();
	~SEARCH_ROOM_INFO();
	Fw::MatchingTarget::SEARCH_ROOM_INFO & operator=(Fw::MatchingTarget::SEARCH_ROOM_INFO &);
	Fw::MatchingTarget::SEARCH_ROOM_INFO & operator=(const Fw::MatchingTarget::SEARCH_ROOM_INFO &);
};
struct Fw::MatchingTarget::TCP_CONNECT_WORK
{
	CSteamID peerAddr; // 0x0
	unsigned short peerPort; // 0x8
	TCP_CONNECT_WORK();
};