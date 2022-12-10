#pragma once

enum EP2PSessionError
{
	k_EP2PSessionErrorNone = 0,
	k_EP2PSessionErrorNotRunningApp = 1,
	k_EP2PSessionErrorNoRightsToApp = 2,
	k_EP2PSessionErrorDestinationNotLoggedIn = 3,
	k_EP2PSessionErrorTimeout = 4,
	k_EP2PSessionErrorMax = 5,
};
enum EP2PSend
{
	k_EP2PSendUnreliable = 0,
	k_EP2PSendUnreliableNoDelay = 1,
	k_EP2PSendReliable = 2,
	k_EP2PSendReliableWithBuffering = 3,
};
struct P2PSessionState_t
{
	unsigned char m_bConnectionActive; // 0x0
	unsigned char m_bConnecting; // 0x1
	unsigned char m_eP2PSessionError; // 0x2
	unsigned char m_bUsingRelay; // 0x3
	long m_nBytesQueuedForSend; // 0x4
	long m_nPacketsQueuedForSend; // 0x8
	unsigned long m_nRemoteIP; // 0xC
	unsigned short m_nRemotePort; // 0x10
};
class ISteamNetworking
{
public:
	bool SendP2PPacket(CSteamID, const void *, unsigned long, EP2PSend, long);
	bool IsP2PPacketAvailable(unsigned long *, long);
	bool ReadP2PPacket(void *, unsigned long, unsigned long *, CSteamID *, long);
	bool AcceptP2PSessionWithUser(CSteamID);
	bool CloseP2PSessionWithUser(CSteamID);
	bool CloseP2PChannelWithUser(CSteamID, long);
	bool GetP2PSessionState(CSteamID, P2PSessionState_t *);
	bool AllowP2PPacketRelay(bool);
	unsigned long CreateListenSocket(long, unsigned long, unsigned short, bool);
	unsigned long CreateP2PConnectionSocket(CSteamID, long, long, bool);
	unsigned long CreateConnectionSocket(unsigned long, unsigned short, long);
	bool DestroySocket(unsigned long, bool);
	bool DestroyListenSocket(unsigned long, bool);
	bool SendDataOnSocket(unsigned long, void *, unsigned long, bool);
	bool IsDataAvailableOnSocket(unsigned long, unsigned long *);
	bool RetrieveDataFromSocket(unsigned long, void *, unsigned long, unsigned long *);
	bool IsDataAvailable(unsigned long, unsigned long *, unsigned long *);
	bool RetrieveData(unsigned long, void *, unsigned long, unsigned long *, unsigned long *);
	bool GetSocketInfo(unsigned long, CSteamID *, long *, unsigned long *, unsigned short *);
	bool GetListenSocketInfo(unsigned long, unsigned long *, unsigned short *);
	ESNetSocketConnectionType GetSocketConnectionType(unsigned long);
	long GetMaxPacketSize(unsigned long);
	ISteamNetworking(ISteamNetworking &);
	ISteamNetworking(const ISteamNetworking &);
	ISteamNetworking();
	ISteamNetworking & operator=(ISteamNetworking &);
	ISteamNetworking & operator=(const ISteamNetworking &);
};
struct P2PSessionRequest_t
{
	enum <unnamed-enum-k_iCallback>
	{
		k_iCallback = 1202,
	};
	CSteamID m_steamIDRemote; // 0x0
	P2PSessionRequest_t();
};
struct P2PSessionConnectFail_t
{
	enum <unnamed-enum-k_iCallback>
	{
		k_iCallback = 1203,
	};
	CSteamID m_steamIDRemote; // 0x0
	unsigned char m_eP2PSessionError; // 0x8
	P2PSessionConnectFail_t();
};