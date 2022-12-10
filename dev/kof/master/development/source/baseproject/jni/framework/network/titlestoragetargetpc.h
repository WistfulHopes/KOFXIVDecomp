#pragma once

class Fw::TitleStorageTarget :
	Fw::TitleStorageTargetBase
{
public:
	static bool Startup();
	static void Update();
	static void Shutdown();
	static Fw::TS_HANDLE TusBeginReadMultiSlotVariable(const Fw::cTusReadRequest *, Fw::HeapMemory &, bool);
	static Fw::TS_HANDLE TusBeginReadMultiUserVariable(const Fw::cTusReadRequest *, Fw::HeapMemory &, bool);
	static Fw::TS_HANDLE TusBeginReadFriendsVariable(const Fw::cTusReadRequest *, Fw::HeapMemory &);
	static Fw::TS_HANDLE TusBeginWriteMultiSlotVariable(const Fw::cTusWriteRequest *, bool);
	static Fw::TS_RESULT GetResult(Fw::TS_HANDLE);
	static Fw::TS_RESULT GetTusResult(Fw::cTusResult * &, Fw::TS_HANDLE);
	static void ReadCancel(Fw::TS_HANDLE);
	static Fw::TS_RESULT ReleaseHandle(Fw::TS_HANDLE);
	static bool TusCreateTitleContext();
	static bool TusDestroyTitleContext();
};