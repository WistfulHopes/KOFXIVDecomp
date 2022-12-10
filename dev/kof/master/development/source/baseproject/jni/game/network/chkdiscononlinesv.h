#pragma once

enum <unnamed-enum-CHECK_DISCON_ONLINE_SV_STATUS_DEFAULT>
{
	CHECK_DISCON_ONLINE_SV_STATUS_DEFAULT = 0,
	CHECK_DISCON_ONLINE_SV_STATUS_CONTINUE = 1,
	CHECK_DISCON_ONLINE_SV_STATUS_NORMAL = 2,
	CHECK_DISCON_ONLINE_SV_STATUS_DISCONNECTED = 3,
};
class clasChkDisconOnlineSv
{
private:
	static clasChkDisconOnlineSv * _instance; // 0xFFFFFFFFFFFFFFFF
	clasChkDisconOnlineSv();
	bool m_RankmatchGameStart; // 0x0
	bool m_Patch111_OnlineProfileWrite; // 0x1
public:
	static clasChkDisconOnlineSv * getinstance();
	void startup();
	void init();
	long check();
	void SaveOnlineProfile_ClearRankmatchGameStart();
	void SaveOnlineProfile_RankmatchGameStart();
	void SetRankmatchGameStart(bool);
	bool GetRankmatchGameStart();
	long GetPatch111();
};