#pragma once

struct MatchMakingKeyValuePair_t
{
	MatchMakingKeyValuePair_t(const char *, const char *);
	MatchMakingKeyValuePair_t();
	char m_szKey[256]; // 0x0
	char m_szValue[256]; // 0x100
};
class servernetadr_t
{
public:
	servernetadr_t();
	void Init(unsigned long, unsigned short, unsigned short);
	unsigned short GetQueryPort();
	void SetQueryPort(unsigned short);
	unsigned short GetConnectionPort();
	void SetConnectionPort(unsigned short);
	unsigned long GetIP();
	void SetIP(unsigned long);
	const char * GetConnectionAddressString();
	const char * GetQueryAddressString();
	bool operator<(const servernetadr_t &);
	void operator=(const servernetadr_t &);
private:
	const char * ToString(unsigned long, unsigned short);
	unsigned short m_usConnectionPort; // 0x0
	unsigned short m_usQueryPort; // 0x2
	unsigned long m_unIP; // 0x4
};
class gameserveritem_t
{
public:
	gameserveritem_t();
	const char * GetName();
	void SetName(const char *);
	servernetadr_t m_NetAdr; // 0x0
	long m_nPing; // 0x8
	bool m_bHadSuccessfulResponse; // 0xC
	bool m_bDoNotRefresh; // 0xD
	char m_szGameDir[32]; // 0xE
	char m_szMap[32]; // 0x2E
	char m_szGameDescription[64]; // 0x4E
	unsigned long m_nAppID; // 0x90
	long m_nPlayers; // 0x94
	long m_nMaxPlayers; // 0x98
	long m_nBotPlayers; // 0x9C
	bool m_bPassword; // 0xA0
	bool m_bSecure; // 0xA1
	unsigned long m_ulTimeLastPlayed; // 0xA4
	long m_nServerVersion; // 0xA8
private:
	char m_szServerName[64]; // 0xAC
public:
	char m_szGameTags[128]; // 0xEC
	CSteamID m_steamID; // 0x16C
	gameserveritem_t & operator=(gameserveritem_t &);
	gameserveritem_t & operator=(const gameserveritem_t &);
};