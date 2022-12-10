#pragma once

class ISteamUnifiedMessages
{
public:
	static const unsigned long long k_InvalidUnifiedMessageHandle; // 0xFFFFFFFFFFFFFFFF
	unsigned long long SendMethod(const char *, const void *, unsigned long, unsigned long long);
	bool GetMethodResponseInfo(unsigned long long, unsigned long *, EResult *);
	bool GetMethodResponseData(unsigned long long, void *, unsigned long, bool);
	bool ReleaseMethod(unsigned long long);
	bool SendNotification(const char *, const void *, unsigned long);
	ISteamUnifiedMessages(ISteamUnifiedMessages &);
	ISteamUnifiedMessages(const ISteamUnifiedMessages &);
	ISteamUnifiedMessages();
	ISteamUnifiedMessages & operator=(ISteamUnifiedMessages &);
	ISteamUnifiedMessages & operator=(const ISteamUnifiedMessages &);
};