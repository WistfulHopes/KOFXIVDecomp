#pragma once

class Fw::InvitationCommon
{
	struct CCallbackInternal_OnGameJoinRequested;
private:
	Fw::InvitationCommon::CCallbackInternal_OnGameJoinRequested m_steamcallback_OnGameJoinRequested; // 0x0
	void OnGameJoinRequested(GameLobbyJoinRequested_t *);
	struct CCallbackInternal_OnLobbyDataReceived;
	Fw::InvitationCommon::CCallbackInternal_OnLobbyDataReceived m_steamcallback_OnLobbyDataReceived; // 0x10
	void OnLobbyDataReceived(LobbyDataUpdate_t *);
	struct CCallbackInternal_OnP2PSessionRequest;
	Fw::InvitationCommon::CCallbackInternal_OnP2PSessionRequest m_steamcallback_OnP2PSessionRequest; // 0x20
	void OnP2PSessionRequest(P2PSessionRequest_t *);
	struct CCallbackInternal_OnBroadcastUploadStart;
	Fw::InvitationCommon::CCallbackInternal_OnBroadcastUploadStart m_steamcallback_OnBroadcastUploadStart; // 0x30
	void OnBroadcastUploadStart(BroadcastUploadStart_t *);
	struct CCallbackInternal_OnBroadcastUploadStop;
	Fw::InvitationCommon::CCallbackInternal_OnBroadcastUploadStop m_steamcallback_OnBroadcastUploadStop; // 0x40
	void OnBroadcastUploadStop(BroadcastUploadStop_t *);
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
	enum <unnamed-enum-HANDLE_SESSION_CREATE>
	{
		HANDLE_SESSION_CREATE = 0,
		HANDLE_SESSION_GET = 1,
		HANDLE_SESSION_JOIN = 2,
		HANDLE_SESSIONDATA = 3,
		HANDLE_SESSION_DELETE = 4,
		HANDLE_SESSION_LEAVE = 5,
		HANDLE_MAX = 6,
	};
private:
	static bool UpdateRecv(bool *);
	static Fw::HeapMemory * m_pHeap; // 0xFFFFFFFFFFFFFFFF
	static CSteamID m_SessionId; // 0xFFFFFFFFFFFFFFFF
	static bool m_SessionFlag; // 0xFFFFFFFFFFFFFFFF
	static bool m_InvitationFlag; // 0xFFFFFFFFFFFFFFFF
	static bool m_JoinRoomWaitFlag; // 0xFFFFFFFFFFFFFFFF
	static CSteamID m_InviteRoomID; // 0xFFFFFFFFFFFFFFFF
	static unsigned long long m_LiveStreamingTick; // 0xFFFFFFFFFFFFFFFF
public:
	InvitationCommon(Fw::InvitationCommon &);
	InvitationCommon(const Fw::InvitationCommon &);
	InvitationCommon();
	~InvitationCommon();
	Fw::InvitationCommon & operator=(Fw::InvitationCommon &);
	Fw::InvitationCommon & operator=(const Fw::InvitationCommon &);
};
struct Fw::InvitationCommon::CCallbackInternal_OnGameJoinRequested :
	protected CCallbackImpl<16>
{
	CCallbackInternal_OnGameJoinRequested(const Fw::InvitationCommon::CCallbackInternal_OnGameJoinRequested &);
	CCallbackInternal_OnGameJoinRequested();
	Fw::InvitationCommon::CCallbackInternal_OnGameJoinRequested & operator=(const Fw::InvitationCommon::CCallbackInternal_OnGameJoinRequested &);
private:
	virtual void Run(void *);
public:
	~CCallbackInternal_OnGameJoinRequested();
};
class CCallbackImpl<16> :
	public CCallbackBase
{
public:
	~CCallbackImpl<16>();
	void SetGameserverFlag();
protected:
	virtual void Run(void *, bool, unsigned long long);
	void Run(void *) = 0;
	virtual long GetCallbackSizeBytes();
public:
	CCallbackImpl<16>();
};
void Fw::InvitationCommon::CCallbackInternal_OnGameJoinRequested::Run(void * pvParam); // 0x140047A80
struct Fw::InvitationCommon::CCallbackInternal_OnLobbyDataReceived :
	protected CCallbackImpl<24>
{
	CCallbackInternal_OnLobbyDataReceived(const Fw::InvitationCommon::CCallbackInternal_OnLobbyDataReceived &);
	CCallbackInternal_OnLobbyDataReceived();
	Fw::InvitationCommon::CCallbackInternal_OnLobbyDataReceived & operator=(const Fw::InvitationCommon::CCallbackInternal_OnLobbyDataReceived &);
private:
	virtual void Run(void *);
public:
	~CCallbackInternal_OnLobbyDataReceived();
};
class CCallbackImpl<24> :
	public CCallbackBase
{
public:
	~CCallbackImpl<24>();
	void SetGameserverFlag();
protected:
	virtual void Run(void *, bool, unsigned long long);
	void Run(void *) = 0;
	virtual long GetCallbackSizeBytes();
public:
	CCallbackImpl<24>();
};
void Fw::InvitationCommon::CCallbackInternal_OnLobbyDataReceived::Run(void * pvParam); // 0x140047A90
struct Fw::InvitationCommon::CCallbackInternal_OnP2PSessionRequest :
	protected CCallbackImpl<8>
{
	CCallbackInternal_OnP2PSessionRequest(const Fw::InvitationCommon::CCallbackInternal_OnP2PSessionRequest &);
	CCallbackInternal_OnP2PSessionRequest();
	Fw::InvitationCommon::CCallbackInternal_OnP2PSessionRequest & operator=(const Fw::InvitationCommon::CCallbackInternal_OnP2PSessionRequest &);
private:
	virtual void Run(void *);
public:
	~CCallbackInternal_OnP2PSessionRequest();
};
class CCallbackImpl<8> :
	public CCallbackBase
{
public:
	~CCallbackImpl<8>();
	void SetGameserverFlag();
protected:
	virtual void Run(void *, bool, unsigned long long);
	void Run(void *) = 0;
	virtual long GetCallbackSizeBytes();
public:
	CCallbackImpl<8>();
};
void Fw::InvitationCommon::CCallbackInternal_OnP2PSessionRequest::Run(void * pvParam); // 0x140047AF0
struct Fw::InvitationCommon::CCallbackInternal_OnBroadcastUploadStart :
	protected CCallbackImpl<1>
{
	CCallbackInternal_OnBroadcastUploadStart(const Fw::InvitationCommon::CCallbackInternal_OnBroadcastUploadStart &);
	CCallbackInternal_OnBroadcastUploadStart();
	Fw::InvitationCommon::CCallbackInternal_OnBroadcastUploadStart & operator=(const Fw::InvitationCommon::CCallbackInternal_OnBroadcastUploadStart &);
private:
	virtual void Run(void *);
public:
	~CCallbackInternal_OnBroadcastUploadStart();
};
class CCallbackImpl<1> :
	public CCallbackBase
{
public:
	~CCallbackImpl<1>();
	void SetGameserverFlag();
protected:
	virtual void Run(void *, bool, unsigned long long);
	void Run(void *) = 0;
	virtual long GetCallbackSizeBytes();
public:
	CCallbackImpl<1>();
};
void Fw::InvitationCommon::CCallbackInternal_OnBroadcastUploadStart::Run(void * pvParam); // 0x140047B20
struct Fw::InvitationCommon::CCallbackInternal_OnBroadcastUploadStop :
	protected CCallbackImpl<4>
{
	CCallbackInternal_OnBroadcastUploadStop(const Fw::InvitationCommon::CCallbackInternal_OnBroadcastUploadStop &);
	CCallbackInternal_OnBroadcastUploadStop();
	Fw::InvitationCommon::CCallbackInternal_OnBroadcastUploadStop & operator=(const Fw::InvitationCommon::CCallbackInternal_OnBroadcastUploadStop &);
private:
	virtual void Run(void *);
public:
	~CCallbackInternal_OnBroadcastUploadStop();
};
class CCallbackImpl<4> :
	public CCallbackBase
{
public:
	~CCallbackImpl<4>();
	void SetGameserverFlag();
protected:
	virtual void Run(void *, bool, unsigned long long);
	void Run(void *) = 0;
	virtual long GetCallbackSizeBytes();
public:
	CCallbackImpl<4>();
};