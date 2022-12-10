#pragma once

class Fw::cTusWriteWork
{
public:
	bool startup();
	void update();
	void cleanup();
	bool beginWriteMultiSlotVariable(const Fw::cTusWriteRequest *, Fw::TS_HANDLE);
	bool beginWriteMultiSlotVariableVUser(const Fw::cTusWriteRequest *, Fw::TS_HANDLE);
	bool beginWriteAddAndGetVariable(const Fw::cTusWriteRequest *, Fw::TS_HANDLE, Fw::HeapMemory &);
	bool beginWriteAddAndGetVariableVUser(const Fw::cTusWriteRequest *, Fw::TS_HANDLE, Fw::HeapMemory &);
	bool beginDeleteMultiSlotVariable(const Fw::cTusWriteRequest *, Fw::TS_HANDLE);
	bool beginDeleteMultiSlotVariableVUser(const Fw::cTusWriteRequest *, Fw::TS_HANDLE);
	bool beginWriteData(const Fw::cTusWriteRequest *, Fw::TS_HANDLE);
	bool beginWriteDataVUser(const Fw::cTusWriteRequest *, Fw::TS_HANDLE);
	bool beginDeleteMultiSlotData(const Fw::cTusWriteRequest *, Fw::TS_HANDLE);
	bool beginDeleteMultiSlotDataVUser(const Fw::cTusWriteRequest *, Fw::TS_HANDLE);
	bool getWriteResultAlloc(Fw::cTusResult * &);
	bool release();
	bool isWorking();
	Fw::TS_HANDLE getHandle();
	Fw::TS_RESULT getResult();
	enum RNO
	{
		RNO_NONE = 0,
		RNO_WRITE_VARIABLE_MULTISLOT_BEGIN = 1,
		RNO_DELETE_VARIABLE_MULTISLOT_BEGIN = 2,
		RNO_WRITE_VARIABLE_ADDANDGET_BEGIN = 3,
		RNO_WRITE_DATA_BEGIN = 4,
		RNO_DELETE_DATA_MULTISLOT_BEGIN = 5,
		RNO_WRITE_WAIT = 6,
		RNO_ERROR_BEGIN = 7,
		RNO_ERROR_WAIT = 8,
		RNO_MAX = 9,
	};
	enum WRITE_TYPE
	{
		WRITE_TYPE_MULTISLOTVARIABLE = 0,
		WRITE_TYPE_MULTISLOTVARIABLE_VUSER = 1,
		WRITE_TYPE_DELETE_MULTISLOTVARIABLE = 2,
		WRITE_TYPE_DELETE_MULTISLOTVARIABLE_VUSER = 3,
		WRITE_TYPE_ADDANDGETVARIABLE = 4,
		WRITE_TYPE_ADDANDGETVARIABLE_VUSER = 5,
		WRITE_TYPE_DATA = 6,
		WRITE_TYPE_DATA_VUSER = 7,
		WRITE_TYPE_DELETE_MULTISLOTDATA = 8,
		WRITE_TYPE_DELETE_MULTISLOTDATA_VUSER = 9,
	};
	enum FLAG
	{
		FLAG_ERROR = -2147483648,
	};
private:
	bool beginWriteCommon(const Fw::cTusWriteRequest *, Fw::cTusWriteWork::WRITE_TYPE);
	bool createResultBuffer(Fw::HeapMemory &);
	void releaseBuffer();
	bool updateNone();
	bool updateMultiSlotVariableWriteBegin();
	bool updateAddAndGetVariableWriteBegin();
	bool updateMultiSlotVariableDeleteBegin();
	bool updateDataWriteBegin();
	bool updateMultiSlotDataDeleteBegin();
	bool updateWriteWait();
	bool updateErrorBegin();
	bool updateErrorWait();
	bool setRno(Fw::cTusWriteWork::RNO);
	bool setEnd();
	bool setError(Fw::TS_RESULT, long, unsigned long);
	char * getErrorMessage(Fw::TS_RESULT);
	typedef bool(*UpdateFuncPtr)();
	static bool(*m_pUpdateFunc)()[0]; // 0xFFFFFFFFFFFFFFFF
	Fw::TS_HANDLE m_WorkHandle; // 0x0
	Fw::cTusWriteWork::RNO m_Rno; // 0x4
	unsigned long m_Flag; // 0x8
	Fw::cTusWriteWork::WRITE_TYPE m_WriteType; // 0xC
	unsigned long * m_pNpTusSlotIdArray; // 0x10
	long m_NpTusSlotIdNum; // 0x18
	long long * m_pVariableArray; // 0x20
	Fw::TS_RESULT m_Result; // 0x28
	Fw::sContextId m_TransContextId; // 0x2C
};