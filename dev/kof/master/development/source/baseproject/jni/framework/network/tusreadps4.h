#pragma once

class Fw::TusRead
{
public:
	static bool Startup();
	static void Update();
	static void Shutdown();
	static Fw::TS_HANDLE TusBeginReadMultiSlotVariable(const Fw::cTusReadRequest *, Fw::HeapMemory &, bool);
	static Fw::TS_HANDLE TusBeginReadMultiUserVariable(const Fw::cTusReadRequest *, Fw::HeapMemory &, bool);
	static Fw::TS_HANDLE TusBeginReadFriendsVariable(const Fw::cTusReadRequest *, Fw::HeapMemory &);
	static Fw::TS_HANDLE TusBeginReadData(const Fw::cTusReadRequest *, Fw::HeapMemory &, bool);
	static Fw::TS_HANDLE TusBeginReadMultiSlotDataStatus(const Fw::cTusReadRequest *, Fw::HeapMemory &, bool);
	static Fw::TS_HANDLE TusBeginReadMultiUserDataStatus(const Fw::cTusReadRequest *, Fw::HeapMemory &, bool);
	static Fw::TS_HANDLE TusBeginReadFriendsDataStatus(const Fw::cTusReadRequest *, Fw::HeapMemory &);
	static Fw::TS_RESULT GetResult(Fw::TS_HANDLE);
	static Fw::TS_RESULT GetTusResult(Fw::cTusResult * &, Fw::TS_HANDLE);
	static Fw::TS_RESULT ReleaseHandle(Fw::TS_HANDLE);
	static void ReadCancel(Fw::TS_HANDLE);
private:
	static Fw::cTusReadWork * FindWork(Fw::TS_HANDLE);
	static Fw::cTusReadWork * NewWork(Fw::HeapMemory &);
	static Fw::cTusReadWork * ReleaseWork(Fw::cTusReadWork *);
	static Fw::TS_HANDLE CycleWorkHandle();
	static long m_CycleWorkHandle; // 0xFFFFFFFFFFFFFFFF
	static Fw::cTusReadWork * m_pWorkFirst; // 0xFFFFFFFFFFFFFFFF
	static Fw::cTusReadWork * m_pWorkLast; // 0xFFFFFFFFFFFFFFFF
};