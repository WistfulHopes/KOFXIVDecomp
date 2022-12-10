#pragma once

class Fw::cRankingWriteWork
{
public:
	bool startup();
	void update();
	void cleanup();
	bool beginWrite(const Fw::cRankingWriteRequest *, Fw::RANKING_HANDLE, Fw::HeapMemory &);
	bool beginWriteData(const Fw::cRankingWriteRequest *, Fw::RANKING_HANDLE);
	bool release();
	bool isWorking();
	Fw::RANKING_HANDLE getHandle();
	Fw::RANKING_RESULT getResult();
	enum RNO
	{
		RNO_NONE = 0,
		RNO_DATA_WRITE_BEGIN = 1,
		RNO_DATA_WRITE_WAIT = 2,
		RNO_ATTACHDATA_WRITE_BEGIN = 3,
		RNO_ATTACHDATA_WRITE_WAIT = 4,
		RNO_ERROR_BEGIN = 5,
		RNO_ERROR_WAIT = 6,
		RNO_MAX = 7,
	};
	enum WRITE_TYPE
	{
		WRITE_TYPE_SCORE = 0,
		WRITE_TYPE_ATTACHDATA = 1,
	};
	enum FLAG
	{
		FLAG_ERROR = -2147483648,
	};
private:
	bool beginWriteCommon(const Fw::cRankingWriteRequest *, Fw::cRankingWriteWork::WRITE_TYPE);
	bool createWriteBuffer(const Fw::cRankingWriteRequest *, Fw::HeapMemory &);
	void releaseBuffer();
	bool updateNone();
	bool updateDataWriteBegin();
	bool updateDataWriteWait();
	bool updateAttachDataWriteBegin();
	bool updateAttachDataWriteWait();
	bool updateErrorBegin();
	bool updateErrorWait();
	bool setRno(Fw::cRankingWriteWork::RNO);
	bool setEnd();
	bool setError(Fw::RANKING_RESULT, long, unsigned long);
	char * getErrorMessage(Fw::RANKING_RESULT);
	typedef bool(*UpdateFuncPtr)();
	static bool(*m_pUpdateFunc)()[0]; // 0xFFFFFFFFFFFFFFFF
	Fw::RANKING_HANDLE m_WorkHandle; // 0x0
	Fw::cRankingWriteWork::RNO m_Rno; // 0x4
	unsigned long m_Flag; // 0x8
	Fw::cRankingWriteWork::WRITE_TYPE m_WriteType; // 0xC
	unsigned long m_BoardId; // 0x10
	unsigned long m_Score; // 0x14
	unsigned long m_PcId; // 0x18
	Fw::ScoreGameInfo * m_pGameInfo; // 0x20
	unsigned long long m_TotalSize; // 0x28
	unsigned long long m_SendSize; // 0x30
	const void * m_pData; // 0x38
	Fw::RANKING_RESULT m_Result; // 0x40
	char * m_pErrorMessage; // 0x48
	Fw::sContextId m_TransContextId; // 0x50
	void OnRemoteStorageFileShareResult(RemoteStorageFileShareResult_t *, bool);
	CCallResult<Fw::cRankingWriteWork,RemoteStorageFileShareResult_t> m_CallResultRemoteStorageFileShare; // 0x58
	void OnAttachLeaderboardUGC(LeaderboardUGCSet_t *, bool);
	CCallResult<Fw::cRankingWriteWork,LeaderboardUGCSet_t> m_CallResultAttachLeaderboardUGC; // 0x80
public:
	cRankingWriteWork();
	~cRankingWriteWork();
};
class CCallResult<Fw::cRankingWriteWork,RemoteStorageFileShareResult_t> :
	protected CCallbackBase
{
	typedef void(*func_t)(RemoteStorageFileShareResult_t *, bool);
public:
	CCallResult<Fw::cRankingWriteWork,RemoteStorageFileShareResult_t>();
	~CCallResult<Fw::cRankingWriteWork,RemoteStorageFileShareResult_t>();
	void Set(unsigned long long, Fw::cRankingWriteWork *, void(*)(RemoteStorageFileShareResult_t *, bool));
	bool IsActive();
	void Cancel();
	void SetGameserverFlag();
private:
	virtual void Run(void *, bool, unsigned long long);
	virtual void Run(void *);
	virtual long GetCallbackSizeBytes();
	unsigned long long m_hAPICall; // 0x10
	Fw::cRankingWriteWork * m_pObj; // 0x18
	void(*m_Func)(RemoteStorageFileShareResult_t *, bool); // 0x20
};
class CCallResult<Fw::cRankingWriteWork,LeaderboardUGCSet_t> :
	protected CCallbackBase
{
	typedef void(*func_t)(LeaderboardUGCSet_t *, bool);
public:
	CCallResult<Fw::cRankingWriteWork,LeaderboardUGCSet_t>();
	~CCallResult<Fw::cRankingWriteWork,LeaderboardUGCSet_t>();
	void Set(unsigned long long, Fw::cRankingWriteWork *, void(*)(LeaderboardUGCSet_t *, bool));
	bool IsActive();
	void Cancel();
	void SetGameserverFlag();
private:
	virtual void Run(void *, bool, unsigned long long);
	virtual void Run(void *);
	virtual long GetCallbackSizeBytes();
	unsigned long long m_hAPICall; // 0x10
	Fw::cRankingWriteWork * m_pObj; // 0x18
	void(*m_Func)(LeaderboardUGCSet_t *, bool); // 0x20
};