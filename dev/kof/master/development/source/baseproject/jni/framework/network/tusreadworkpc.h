#pragma once

class Fw::cTusReadWork
{
private:
	CCallback<Fw::cTusReadWork,UserStatsReceived_t,0> m_CallbackUserStatsReceived; // 0x0
	void OnUserStatsReceived(UserStatsReceived_t *);
public:
	cTusReadWork();
	bool startup();
	void update();
	void cleanup();
	bool beginReadMultiSlotVariable(const Fw::cTusReadRequest *, Fw::TS_HANDLE, Fw::HeapMemory &);
	bool beginReadMultiSlotVariableVUser(const Fw::cTusReadRequest *, Fw::TS_HANDLE, Fw::HeapMemory &);
	bool beginReadMultiUserVariable(const Fw::cTusReadRequest *, Fw::TS_HANDLE, Fw::HeapMemory &);
	bool beginReadMultiUserVariableVUser(const Fw::cTusReadRequest *, Fw::TS_HANDLE, Fw::HeapMemory &);
	bool beginReadFriendsVariable(const Fw::cTusReadRequest *, Fw::TS_HANDLE, Fw::HeapMemory &);
	bool beginReadData(const Fw::cTusReadRequest *, Fw::TS_HANDLE, Fw::HeapMemory &);
	bool beginReadDataVUser(const Fw::cTusReadRequest *, Fw::TS_HANDLE, Fw::HeapMemory &);
	bool beginReadMultiSlotDataStatus(const Fw::cTusReadRequest *, Fw::TS_HANDLE, Fw::HeapMemory &);
	bool beginReadMultiSlotDataStatusVUser(const Fw::cTusReadRequest *, Fw::TS_HANDLE, Fw::HeapMemory &);
	bool beginReadMultiUserDataStatus(const Fw::cTusReadRequest *, Fw::TS_HANDLE, Fw::HeapMemory &);
	bool beginReadMultiUserDataStatusVUser(const Fw::cTusReadRequest *, Fw::TS_HANDLE, Fw::HeapMemory &);
	bool beginReadFriendsDataStatus(const Fw::cTusReadRequest *, Fw::TS_HANDLE, Fw::HeapMemory &);
	bool getReadResultAlloc(Fw::cTusResult * &);
	bool release();
	void setReadCancel();
	bool isWorking();
	Fw::TS_HANDLE getHandle();
	Fw::TS_RESULT getResult();
	void chainWork(Fw::cTusReadWork *);
	Fw::cTusReadWork * unchainWork();
	Fw::cTusReadWork * getPrevWork();
	Fw::cTusReadWork * getNextWork();
	enum RNO
	{
		RNO_NONE = 0,
		RNO_READ_VARIABLE_MULTISLOT_BEGIN = 1,
		RNO_READ_VARIABLE_MULTIUSE_BEGIN = 2,
		RNO_READ_VARIABLE_FRIENDS_BEGIN = 3,
		RNO_READ_DATA_BEGIN = 4,
		RNO_READ_DATASTATUS_MULTISLOT_BEGIN = 5,
		RNO_READ_DATASTATUS_MULTIUSER_BEGIN = 6,
		RNO_READ_DATASTATUS_FRIENDS_BEGIN = 7,
		RNO_READ_WAIT = 8,
		RNO_ERROR_BEGIN = 9,
		RNO_ERROR_WAIT = 10,
		RNO_READ_CANCEL_BEGIN = 11,
		RNO_READ_CANCEL_WAIT = 12,
		RNO_MAX = 13,
	};
	enum FLAG
	{
		FLAG_CANCEL = 1073741824,
		FLAG_ERROR = -2147483648,
	};
	enum READ_TYPE
	{
		READ_TYPE_MULTISLOTVARIABLE = 0,
		READ_TYPE_MULTISLOTVARIABLE_VUSER = 1,
		READ_TYPE_MULTIUSERVARIABLE = 2,
		READ_TYPE_MULTIUSERVARIABLE_VUSER = 3,
		READ_TYPE_FRIENDSVARIABLE = 4,
		READ_TYPE_DATA = 5,
		READ_TYPE_DATA_VSER = 6,
		READ_TYPE_MULTISLOTDATASTATUS = 7,
		READ_TYPE_MULTISLOTDATASTATUS_VUSER = 8,
		READ_TYPE_MULTIUSERDATASTATUS = 9,
		READ_TYPE_MULTIUSERDATASTATUS_VUSER = 10,
		READ_TYPE_FRIENDSDATASTATUS = 11,
	};
private:
	bool beginReadCommon(const Fw::cTusReadRequest *, Fw::cTusReadWork::READ_TYPE, Fw::HeapMemory &);
	bool createResultBuffer(long, Fw::HeapMemory &);
	void releaseBuffer();
	bool updateNone();
	bool updateMultiSlotReadBegin();
	bool updateMultiUserReadBegin();
	bool updateFriendsReadBegin();
	bool updateDataReadBegin();
	bool updateDataStatusMultiSlotReadBegin();
	bool updateDataStatusMultiUserReadBegin();
	bool updateDataStatusFriendsReadBegin();
	bool updateReadWait();
	bool updateErrorBegin();
	bool updateErrorWait();
	bool updateCancelBegin();
	bool updateCancelWait();
	bool setRno(Fw::cTusReadWork::RNO);
	bool setEnd();
	bool setError(Fw::TS_RESULT, long, unsigned long);
	char * getErrorMessage(Fw::TS_RESULT);
	typedef bool(*UpdateFuncPtr)();
	static bool(*m_pUpdateFunc)()[0]; // 0xFFFFFFFFFFFFFFFF
	Fw::cTusReadWork * m_pPrev; // 0x20
	Fw::cTusReadWork * m_pNext; // 0x28
	Fw::TS_HANDLE m_WorkHandle; // 0x30
	Fw::cTusReadWork::RNO m_Rno; // 0x34
	unsigned long m_Flag; // 0x38
	Fw::cTusReadWork::READ_TYPE m_ReadType; // 0x3C
	CSteamID * m_pNpIdArray; // 0x40
	CSteamID * m_pNpIdArrayLeft; // 0x48
	long m_NpIdNum; // 0x50
	unsigned long * m_pNpTusSlotIdArray; // 0x58
	long m_NpTusSlotIdNum; // 0x60
	Fw::SceNpTusVariable * m_pTusVariableArray; // 0x68
	unsigned long long m_TusVariableArraySize; // 0x70
	long m_FriendNum; // 0x78
	bool m_includeSelfFlag; // 0x7C
	long m_SortType; // 0x80
	unsigned long long m_RecvSize; // 0x88
	Fw::TS_RESULT m_Result; // 0x90
	char * m_pErrorMessage; // 0x98
public:
	~cTusReadWork();
};
class CCallback<Fw::cTusReadWork,UserStatsReceived_t,0> :
	CCallbackImpl<24>
{
	typedef void(*func_t)(UserStatsReceived_t *);
public:
	CCallback<Fw::cTusReadWork,UserStatsReceived_t,0>(Fw::cTusReadWork *, void(*)(UserStatsReceived_t *));
	void Register(Fw::cTusReadWork *, void(*)(UserStatsReceived_t *));
	void Unregister();
protected:
	virtual void Run(void *);
	Fw::cTusReadWork * m_pObj; // 0x10
	void(*m_Func)(UserStatsReceived_t *); // 0x18
public:
	~CCallback<Fw::cTusReadWork,UserStatsReceived_t,0>();
};