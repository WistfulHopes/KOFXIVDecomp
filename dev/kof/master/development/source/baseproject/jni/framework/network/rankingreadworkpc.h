#pragma once

class Fw::cRankingReadWork
{
public:
	void reset();
	bool startup();
	void update();
	void cleanup();
	bool beginReadUser(const Fw::cRankingReadRequest *, Fw::RANKING_HANDLE, Fw::HeapMemory &, bool);
	bool beginReadFriend(const Fw::cRankingReadRequest *, Fw::RANKING_HANDLE, Fw::HeapMemory &);
	bool beginReadRank(const Fw::cRankingReadRequest *, long, long, Fw::RANKING_HANDLE, Fw::HeapMemory &);
	bool beginReadRankByPC(const Fw::cRankingReadRequest *, Fw::RANKING_HANDLE, Fw::HeapMemory &);
	bool beginReadAttachData(const Fw::cRankingReadRequest *, Fw::RANKING_HANDLE, Fw::HeapMemory &);
	bool getReadResultAlloc(Fw::cRankingReadResult * &);
	bool release();
	void setReadCancel();
	bool isWorking();
	Fw::RANKING_RESULT getResult();
	Fw::RANKING_HANDLE getHandle();
	void chainWork(Fw::cRankingReadWork *);
	Fw::cRankingReadWork * unchainWork();
	Fw::cRankingReadWork * getPrevWork();
	Fw::cRankingReadWork * getNextWork();
	enum RNO
	{
		RNO_NONE = 0,
		RNO_NPID_READ_BEGIN = 1,
		RNO_NPID_READ_WAIT = 2,
		RNO_FRIEND_READ_BEGIN = 3,
		RNO_FRIEND_READ_WAIT = 4,
		RNO_RANK_READ_BEGIN = 5,
		RNO_RANK_READ_WAIT = 6,
		RNO_RANK_READ_BY_NPID_PCID_BEGIN = 7,
		RNO_RANK_READ_BY_NPID_PCID_WAIT = 8,
		RNO_ATTACHDATA_READ_BEGIN = 9,
		RNO_ATTACHDATA_READ_WAIT = 10,
		RNO_ERROR_BEGIN = 11,
		RNO_ERROR_WAIT = 12,
		RNO_READ_CANCEL_BEGIN = 13,
		RNO_READ_CANCEL_WAIT = 14,
		RNO_NAMES_WAIT = 15,
		RNO_DOWNLOAD_ATTACHDATA_WAIT = 16,
		RNO_MAX = 17,
	};
	enum FLAG
	{
		FLAG_CANCEL = 1073741824,
		FLAG_ERROR = -2147483648,
	};
	enum RANKING_TYPE
	{
		RANKING_TYPE_USER = 0,
		RANKING_TYPE_FRIEND = 1,
		RANKING_TYPE_RANKING = 2,
		RANKING_TYPE_RANKING_BY_PC = 3,
		RANKING_TYPE_ATTACHDATA = 4,
	};
private:
	bool beginReadCommon(const Fw::cRankingReadRequest *, Fw::cRankingReadWork::RANKING_TYPE);
	bool createResultBuffer(long, Fw::HeapMemory &);
	void releaseBuffer();
	bool updateNone();
	bool updateFriendEnumBegin();
	bool updateFriendEnumWait();
	bool updateNpIdReadBegin();
	bool updateNpIdReadWait();
	bool updateRankReadBegin();
	bool updateRankReadWait();
	bool updateAttachDataReadBegin();
	bool updateAttachDataReadWait();
	bool updateErrorBegin();
	bool updateErrorWait();
	bool updateCancelBegin();
	bool updateCancelWait();
	bool updateRankReadByNpidPcidBegin();
	bool updateRankReadByNpidPcidWait();
	bool updateNamesWait();
	bool updateDownloadAttachDataWait();
	bool setRno(Fw::cRankingReadWork::RNO);
	bool setEnd();
	bool setError(Fw::RANKING_RESULT, long, unsigned long);
	char * getErrorMessage(Fw::RANKING_RESULT);
	typedef bool(*UpdateFuncPtr)();
	static bool(*m_pUpdateFunc)()[0]; // 0xFFFFFFFFFFFFFFFF
	Fw::cRankingReadWork * m_pPrev; // 0x0
	Fw::cRankingReadWork * m_pNext; // 0x8
	Fw::RANKING_HANDLE m_WorkHandle; // 0x10
	Fw::cRankingReadWork::RNO m_Rno; // 0x14
	unsigned long m_Flag; // 0x18
	Fw::cRankingReadWork::RANKING_TYPE m_RankingType; // 0x1C
	unsigned long m_BoardId; // 0x20
	unsigned long m_PcId; // 0x24
	long m_FriendNum; // 0x28
	bool m_includeSelfFlag; // 0x2C
	long m_RankStart; // 0x30
	long m_GetNum; // 0x34
	unsigned long long * m_pNpIdArray; // 0x38
	unsigned long long m_NpIdArraySize; // 0x40
	Fw::ScorePlayerRankData * m_pPlayerRankDataArray; // 0x48
	unsigned long long m_PlayerRankDataArraySize; // 0x50
	Fw::ScoreRankData * m_pScoreRankDataArray; // 0x58
	unsigned long long m_ScoreRankDataArraySize; // 0x60
	Fw::ScoreGameInfo * m_pGameInfoArray; // 0x68
	unsigned long long m_GameInfoArraySize; // 0x70
	Fw::RtcTick m_LastSortDate; // 0x78
	unsigned long m_RecordNum; // 0x80
	Fw::sRankingAttachData * m_pAttachDataArray; // 0x88
	unsigned long long m_AttachDataArraySize; // 0x90
	unsigned long long m_ReceiveSize; // 0x98
	Fw::ScoreNpIdPcId * m_pScoreNpIdPcId; // 0xA0
	unsigned long long m_ScoreNpIdPcIdSize; // 0xA8
	Fw::RANKING_RESULT m_Result; // 0xB0
	char * m_pErrorMessage; // 0xB8
	Fw::sContextId m_TransContextId; // 0xC0
	bool m_ErrorDialog; // 0xC8
	unsigned long resultIndex; // 0xCC
	long subCallsCompleted; // 0xD0
	void OnLeaderboardScoresDownloaded(LeaderboardScoresDownloaded_t *, bool);
	CCallResult<Fw::cRankingReadWork,LeaderboardScoresDownloaded_t> m_CallResultLeaderboardScoresDownloaded[3]; // 0xD8
	void OnRemoteStorageDownloadUGCResult(RemoteStorageDownloadUGCResult_t *, bool);
	CCallResult<Fw::cRankingReadWork,RemoteStorageDownloadUGCResult_t> m_CallResultRemoteStorageDownloadUGC; // 0x150
public:
	cRankingReadWork();
	~cRankingReadWork();
};
class CCallResult<Fw::cRankingReadWork,LeaderboardScoresDownloaded_t> :
	protected CCallbackBase
{
	typedef void(*func_t)(LeaderboardScoresDownloaded_t *, bool);
public:
	CCallResult<Fw::cRankingReadWork,LeaderboardScoresDownloaded_t>();
	~CCallResult<Fw::cRankingReadWork,LeaderboardScoresDownloaded_t>();
	void Set(unsigned long long, Fw::cRankingReadWork *, void(*)(LeaderboardScoresDownloaded_t *, bool));
	bool IsActive();
	void Cancel();
	void SetGameserverFlag();
private:
	virtual void Run(void *, bool, unsigned long long);
	virtual void Run(void *);
	virtual long GetCallbackSizeBytes();
	unsigned long long m_hAPICall; // 0x10
	Fw::cRankingReadWork * m_pObj; // 0x18
	void(*m_Func)(LeaderboardScoresDownloaded_t *, bool); // 0x20
};
class CCallResult<Fw::cRankingReadWork,RemoteStorageDownloadUGCResult_t> :
	protected CCallbackBase
{
	typedef void(*func_t)(RemoteStorageDownloadUGCResult_t *, bool);
public:
	CCallResult<Fw::cRankingReadWork,RemoteStorageDownloadUGCResult_t>();
	~CCallResult<Fw::cRankingReadWork,RemoteStorageDownloadUGCResult_t>();
	void Set(unsigned long long, Fw::cRankingReadWork *, void(*)(RemoteStorageDownloadUGCResult_t *, bool));
	bool IsActive();
	void Cancel();
	void SetGameserverFlag();
private:
	virtual void Run(void *, bool, unsigned long long);
	virtual void Run(void *);
	virtual long GetCallbackSizeBytes();
	unsigned long long m_hAPICall; // 0x10
	Fw::cRankingReadWork * m_pObj; // 0x18
	void(*m_Func)(RemoteStorageDownloadUGCResult_t *, bool); // 0x20
};