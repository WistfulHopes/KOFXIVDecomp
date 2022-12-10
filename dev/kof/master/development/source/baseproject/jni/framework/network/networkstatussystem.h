#pragma once

enum Fw::NET_STATE_TYPE
{
	NET_STATE_TYPE_DISCONNECTED = 0,
	NET_STATE_TYPE_CONNECTING = 1,
	NET_STATE_TYPE_IPOBTAINING = 2,
	NET_STATE_TYPE_IPOBTAINED = 3,
};
enum Fw::NETWORK_NAT_TYPE
{
	NETWORK_NAT_TYPE_NONE = 0,
	NETWORK_NAT_TYPE_1 = 1,
	NETWORK_NAT_TYPE_2 = 2,
	NETWORK_NAT_TYPE_3 = 3,
};
class Fw::NetworkStatusSystem
{
public:
	static bool Startup();
	static void Update();
	static void Shutdown();
	static Fw::NET_STATE_TYPE GetStatus();
	static Fw::NETWORK_NAT_TYPE GetNatType();
	static bool IsOnline();
	static void SetErrorDialogEnable(bool);
	static bool IsDisconnectedFlag();
	static void ClearDisconnectedFlag();
};