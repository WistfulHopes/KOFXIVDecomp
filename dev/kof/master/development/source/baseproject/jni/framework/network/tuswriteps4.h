#pragma once

class Fw::TusWrite
{
public:
	static bool Startup();
	static void Update();
	static void Shutdown();
	static Fw::TS_HANDLE TusBeginWriteMultiSlotVariable(const Fw::cTusWriteRequest *, bool);
	static Fw::TS_HANDLE TusBeginWriteAddAndGetVariable(const Fw::cTusWriteRequest *, Fw::HeapMemory &, bool);
	static Fw::TS_HANDLE TusBeginDeleteMultiSlotVariable(const Fw::cTusWriteRequest *, bool);
	static Fw::TS_HANDLE TusBeginWriteData(const Fw::cTusWriteRequest *, bool);
	static Fw::TS_HANDLE TusBeginDeleteMultiSlotData(const Fw::cTusWriteRequest *, bool);
	static Fw::TS_RESULT GetResult(Fw::TS_HANDLE);
	static Fw::TS_RESULT GetTusResult(Fw::cTusResult * &, Fw::TS_HANDLE);
	static Fw::TS_RESULT ReleaseHandle(Fw::TS_HANDLE);
	enum <unnamed-enum-WORK_NUM>
	{
		WORK_NUM = 16,
	};
private:
	static Fw::cTusWriteWork * FindWork(Fw::TS_HANDLE);
	static Fw::cTusWriteWork * NewWork();
	static Fw::TS_HANDLE CycleWorkHandle();
	static Fw::cTusWriteWork m_pWork[0]; // 0xFFFFFFFFFFFFFFFF
	static long m_CycleWorkHandle; // 0xFFFFFFFFFFFFFFFF
};