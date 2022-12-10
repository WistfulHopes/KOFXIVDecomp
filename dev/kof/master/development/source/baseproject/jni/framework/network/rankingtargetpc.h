#pragma once

class Fw::RankingTarget :
	Fw::RankingTargetBase
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
	static Fw::RANKING_RESULT GetRankingResult(Fw::cRankingReadResult * &, Fw::RANKING_HANDLE);
	static void ReadCancel(Fw::RANKING_HANDLE);
	static Fw::RANKING_HANDLE BeginWrite(const Fw::cRankingWriteRequest *, Fw::HeapMemory &);
	static Fw::RANKING_HANDLE BeginWriteAttachData(const Fw::cRankingWriteRequest *);
	static Fw::RANKING_RESULT GetResult(Fw::RANKING_HANDLE);
	static Fw::RANKING_RESULT ReleaseHandle(Fw::RANKING_HANDLE);
	static bool CreateContext();
	static bool DeleteContext();
	static bool GetNpIdFlag();
};