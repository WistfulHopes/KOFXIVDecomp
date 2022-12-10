#pragma once

enum Fw::TS_HANDLE
{
	TS_HANDLE_INVALID = 0,
};
enum Fw::TS_RESULT
{
	TS_RESULT_CONTINUE = 0,
	TS_RESULT_SUCCEED = 1,
	TS_RESULT_CANCEL = 2,
	TS_RESULT_ERROR = 3,
	TS_RESULT_WORK_NOT_FOUND = 4,
};
enum Fw::TUS_SORT_TYPE
{
	TUS_SORT_TYPE_VARIABLE_DESC_DATE = 0,
};
class Fw::cTusWriteRequestMultiSlotVariable
{
public:
	CSteamID * m_pNpIdArray; // 0x0
	long long * m_pVariableArray; // 0x8
};
class Fw::cTusDeleteRequestMultiSlotVariable
{
public:
	CSteamID * m_pNpTusVUserIdArray; // 0x0
};
class Fw::cTusWriteRequestGetVariable
{
public:
	CSteamID * m_pNpTusVUserIdArray; // 0x0
	long long * m_pVariableArray; // 0x8
};
class Fw::cTusWriteRequest
{
public:
	long m_SlotIdNum; // 0x0
	unsigned long * m_pNpTusSlotIdArray; // 0x8
	Fw::cTusWriteRequestMultiSlotVariable m_MultiSlotVariable; // 0x10
	Fw::cTusDeleteRequestMultiSlotVariable m_DelMultiSlotVariable; // 0x10
	Fw::cTusWriteRequestGetVariable m_GetVariable; // 0x10
};
class Fw::cTusReadRequestMultiSlotVariable
{
public:
	CSteamID * m_pNpIdArray; // 0x0
};
class Fw::cTusReadRequestMultiUserVariable
{
public:
	long m_NpIdNum; // 0x0
	CSteamID * m_pNpIdArray; // 0x8
};
class Fw::cTusReadRequestFriendsVariable
{
public:
	long m_FriendNum; // 0x0
	bool m_includeSelfFlag; // 0x4
	Fw::TUS_SORT_TYPE m_SortType; // 0x8
};
class Fw::cTusReadRequestFriends
{
public:
	long m_FriendNum; // 0x0
	bool m_includeSelfFlag; // 0x4
	Fw::TUS_SORT_TYPE m_SortType; // 0x8
};
class Fw::cTusReadRequest
{
public:
	long m_SlotIdNum; // 0x0
	unsigned long * m_pNpTusSlotIdArray; // 0x8
	Fw::cTusReadRequestMultiSlotVariable m_MultiSlotVariable; // 0x10
	Fw::cTusReadRequestMultiUserVariable m_MultiUserVariable; // 0x10
	Fw::cTusReadRequestFriendsVariable m_FriendsVariable; // 0x10
	Fw::cTusReadRequestFriends m_FriendsStatus; // 0x10
};
struct Fw::SceNpTusVariable
{
	CSteamID ownerId; // 0x0
	bool hasData; // 0x8
	long long variable; // 0x10
	SceNpTusVariable();
};
class Fw::cTusResultVariable
{
public:
	long m_TusVariableNum; // 0x0
	Fw::SceNpTusVariable * m_pTusVariableArray; // 0x8
	long m_ResultNum; // 0x10
	cTusResultVariable();
	~cTusResultVariable();
};
class Fw::cTusResult
{
public:
	Fw::cTusResultVariable m_Variable; // 0x0
	cTusResult();
	~cTusResult();
};
class Fw::TitleStorageSystem
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
	static Fw::TS_RESULT GetTusResult(Fw::cTusResult *, Fw::TS_HANDLE);
	static void ReadCancel(Fw::TS_HANDLE);
	static Fw::TS_RESULT ReleaseHandle(Fw::TS_HANDLE);
	static bool TusCreateTitleContext();
	static bool TusDestroyTitleContext();
};