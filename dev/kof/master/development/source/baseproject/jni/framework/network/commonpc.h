#pragma once

struct UserId
{
	AgString handle; // 0x0
	UserId(UserId &);
	UserId(const UserId &);
	UserId();
	~UserId();
	UserId & operator=(UserId &);
	UserId & operator=(const UserId &);
};
struct Fw::ONLINEID
{
	unsigned long long data; // 0x0
};
struct Fw::ParentalControlInfo
{
	bool chatRestriction; // 0x0
	bool ugcRestriction; // 0x1
	bool voiceChatRestriction; // 0x2
	bool inviteRestriction; // 0x3
};
class Fw::NetworkCommon
{
public:
	static bool Startup(char);
	static void Update();
	static void Shutdown();
	static bool RegistPlus();
	static void UnregistPlus();
	static void SetContentRestriction(char);
	static bool GetNpInitializeFlag();
	static bool InitializeNpId();
	static const UserId * getNpId();
	static const Fw::ONLINEID * getNpOnlineId();
	static void GetShortCountryName(unsigned char, char *);
	static unsigned char GetShortCountryName(char *, const Fw::ONLINEID *);
	static bool GetParentalControlInfo(Fw::ParentalControlInfo *);
	static bool RequestGetNetworkAvailability(const Fw::ONLINEID *);
	static bool IsNetworkAvailability();
	static bool GetNetworkAvailability(long *);
	static UserId m_NpId; // 0xFFFFFFFFFFFFFFFF
	static Fw::ONLINEID m_NpOnlineId; // 0xFFFFFFFFFFFFFFFF
	static bool m_NpInitialized; // 0xFFFFFFFFFFFFFFFF
	struct CONTRY_LIST;
	static const Fw::NetworkCommon::CONTRY_LIST m_ContryList[284]; // 0xFFFFFFFFFFFFFFFF
};
struct Fw::NetworkCommon::CONTRY_LIST
{
	const char * iso3166_2; // 0x0
	const char * iso3166_3; // 0x8
};