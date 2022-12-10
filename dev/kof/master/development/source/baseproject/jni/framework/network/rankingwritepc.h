#pragma once

class Fw::RankingWrite
{
public:
	static bool Startup();
	static void Update();
	static void Shutdown();
	static Fw::RANKING_HANDLE BeginWrite(const Fw::cRankingWriteRequest *, Fw::HeapMemory &);
	static Fw::RANKING_HANDLE BeginWriteAttachData(const Fw::cRankingWriteRequest *);
	static Fw::RANKING_RESULT GetResult(Fw::RANKING_HANDLE);
	static Fw::RANKING_RESULT ReleaseHandle(Fw::RANKING_HANDLE);
	enum <unnamed-enum-WORK_NUM>
	{
		WORK_NUM = 32,
	};
private:
	static Fw::cRankingWriteWork * FindWork(Fw::RANKING_HANDLE);
	static Fw::cRankingWriteWork * NewWork();
	static Fw::RANKING_HANDLE CycleWorkHandle();
	static Fw::cRankingWriteWork m_pWork[0]; // 0xFFFFFFFFFFFFFFFF
	static long m_CycleWorkHandle; // 0xFFFFFFFFFFFFFFFF
};