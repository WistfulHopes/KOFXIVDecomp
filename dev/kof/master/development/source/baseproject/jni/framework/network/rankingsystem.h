#pragma once

struct Fw::sContextId
{
	bool m_RequestAlive; // 0x0
	long m_RequestId; // 0x4
};
enum Fw::RANKING_HANDLE
{
	RANKING_HANDLE_INVALID = 0,
};
enum Fw::RANKING_RESULT
{
	RANKING_RESULT_CONTINUE = 0,
	RANKING_RESULT_SUCCEED = 1,
	RANKING_RESULT_CANCEL = 2,
	RANKING_RESULT_ERROR = 3,
	RANKING_RESULT_WORK_NOT_FOUND = 4,
};
class Fw::ScoreGameInfo
{
public:
	long infoSize; // 0x0
	unsigned char data[128]; // 0x4
};
class Fw::cRankingWriteScore
{
public:
	Fw::ScoreGameInfo m_GameInfo; // 0x0
};
class Fw::cRankingWriteAttachData
{
public:
	unsigned long long m_TotalSize; // 0x0
	unsigned long long m_SendSize; // 0x8
	void * m_pData; // 0x10
};
class Fw::cRankingWriteRequest
{
public:
	long long m_Score; // 0x0
	long m_BoardId; // 0x8
	long m_PcId; // 0xC
	Fw::cRankingWriteScore m_ScoreData; // 0x10
	Fw::cRankingWriteAttachData m_AttachData; // 0x10
};
class Fw::cRankingReadUser
{
public:
	long m_NpIdNum; // 0x0
	unsigned long long * m_pNpIdArray; // 0x8
};
class Fw::cRankingReadFriend
{
public:
	long m_FriendNum; // 0x0
	bool m_includeSelfFlag; // 0x4
};
struct Fw::ScoreNpIdPcId
{
	unsigned long long npId; // 0x0
	long pcId; // 0x8
};
class Fw::cRankingReadAttachData
{
public:
	unsigned long long * m_pNpIdArray; // 0x0
};
class Fw::cRankingReadPcId
{
public:
	long m_NpIdPcIdNum; // 0x0
	Fw::ScoreNpIdPcId * m_pNpIdPcIdArray; // 0x8
};
class Fw::cRankingReadRequest
{
public:
	long m_BoardId; // 0x0
	long m_PcId; // 0x4
	Fw::cRankingReadUser m_User; // 0x8
	Fw::cRankingReadFriend m_Friend; // 0x8
	Fw::cRankingReadAttachData m_AttachData; // 0x8
	Fw::cRankingReadPcId m_RankByPc; // 0x8
};
struct Fw::sRankingAttachData
{
	char m_Buf[1048576]; // 0x0
};
struct Fw::ScoreRankData
{
	CSteamID npId; // 0x0
	unsigned long long scoreValue; // 0x8
	long pcId; // 0x10
	unsigned long serialRank; // 0x14
	unsigned long rank; // 0x18
	unsigned long highestRank; // 0x1C
	long hasGameData; // 0x20
	Fw::RtcTick recordDate; // 0x28
	ScoreRankData();
};
struct Fw::ScorePlayerRankData
{
	long hasData; // 0x0
	Fw::ScoreRankData rankData; // 0x8
	ScorePlayerRankData();
};
class Fw::cRankingReadResult
{
public:
	long m_BoardId; // 0x0
	Fw::ScorePlayerRankData * m_RankDataArray; // 0x8
	Fw::ScoreGameInfo * m_pGameInfoArray; // 0x10
	Fw::ScoreRankData * m_pScoreRankDataArray; // 0x18
	Fw::sRankingAttachData * m_pAttachDataArray; // 0x20
	unsigned long long m_AttachDataArraySize; // 0x28
};
class Fw::RankingSystem
{
public:
	static bool Startup();
	static void Update();
	static void Shutdown();
	static Fw::RANKING_HANDLE BeginReadUser(const Fw::cRankingReadRequest *, Fw::HeapMemory &, bool);
	static Fw::RANKING_HANDLE BeginReadFriend(const Fw::cRankingReadRequest *, Fw::HeapMemory &);
	static Fw::RANKING_HANDLE BeginReadRank(const Fw::cRankingReadRequest *, long, long, Fw::HeapMemory &);
	static Fw::RANKING_HANDLE BeginReadRankByPC(const Fw::cRankingReadRequest *, Fw::HeapMemory &);
	static Fw::RANKING_HANDLE BeginReadAttachData(const Fw::cRankingReadRequest *, Fw::HeapMemory &);
	static Fw::RANKING_HANDLE BeginWrite(const Fw::cRankingWriteRequest *, Fw::HeapMemory &);
	static Fw::RANKING_HANDLE BeginWriteAttachData(const Fw::cRankingWriteRequest *);
	static Fw::RANKING_RESULT GetResult(Fw::RANKING_HANDLE);
	static Fw::RANKING_RESULT GetRankingResult(Fw::cRankingReadResult *, Fw::RANKING_HANDLE);
	static void RankingReadCancel(Fw::RANKING_HANDLE);
	static Fw::RANKING_RESULT ReleaseHandle(Fw::RANKING_HANDLE);
	static bool CreateContext();
	static bool DeleteContext();
	static bool GetNpIdFlag();
};