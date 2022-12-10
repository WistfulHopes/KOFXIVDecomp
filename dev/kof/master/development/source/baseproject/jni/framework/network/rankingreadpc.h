#pragma once

class Fw::RankingRead
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
	static Fw::RANKING_RESULT GetResult(Fw::RANKING_HANDLE);
	static Fw::RANKING_RESULT GetRankingResult(Fw::cRankingReadResult * &, Fw::RANKING_HANDLE);
	static void ReadCancel(Fw::RANKING_HANDLE);
	static Fw::RANKING_RESULT ReleaseHandle(Fw::RANKING_HANDLE);
private:
	static Fw::cRankingReadWork * FindWork(Fw::RANKING_HANDLE);
	static Fw::cRankingReadWork * NewWork(Fw::HeapMemory &);
	static Fw::cRankingReadWork * ReleaseWork(Fw::cRankingReadWork *);
	static Fw::RANKING_HANDLE CycleWorkHandle();
	static long m_CycleWorkHandle; // 0xFFFFFFFFFFFFFFFF
	static Fw::cRankingReadWork * m_pWorkFirst; // 0xFFFFFFFFFFFFFFFF
	static Fw::cRankingReadWork * m_pWorkLast; // 0xFFFFFFFFFFFFFFFF
};