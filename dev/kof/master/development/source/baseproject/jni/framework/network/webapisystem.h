#pragma once

enum Fw::WEBAPI_PLAYED_WITH
{
	RANKMATCH = 0,
	SINGLEVS = 1,
	TEAMVS = 2,
	TRANING = 3,
	PARTY = 4,
	NUM = 5,
	NOT_PARTY_NUM = 4,
};
struct Fw::SESSION_INFO
{
	char sessionType[16]; // 0x0
	char sessionName[32]; // 0x10
	char sessionStatus[128]; // 0x30
	long long roomMaxUser; // 0xB0
	char roomName[129]; // 0xB8
	char gameRule; // 0x139
	char liveOpen; // 0x13A
	char battleType; // 0x13B
	char roundTimerType; // 0x13C
	char roundType; // 0x13D
	unsigned long long roomId; // 0x140
	bool password; // 0x148
};