#pragma once

class Fw::NetworkStatusCommon
{
public:
	static bool Startup();
	static void Update();
	static void Shutdown();
	static void NetCtrlCallback(long, void *);
	static Fw::NET_STATE_TYPE GetStatus();
	static Fw::NETWORK_NAT_TYPE GetNatType();
	static bool IsOnline();
	static void SetErrorDialogEnable(bool);
	static bool IsDisconnectedFlag();
	static void ClearDisconnectedFlag();
private:
	static long m_CallbackId; // 0xFFFFFFFFFFFFFFFF
	static long m_Status; // 0xFFFFFFFFFFFFFFFF
	static long m_StatusCheckCount; // 0xFFFFFFFFFFFFFFFF
	static bool m_OnlineFlag; // 0xFFFFFFFFFFFFFFFF
	static bool m_ErrorDialogEnableFlag; // 0xFFFFFFFFFFFFFFFF
	static bool m_DisconnectedFlag; // 0xFFFFFFFFFFFFFFFF
};