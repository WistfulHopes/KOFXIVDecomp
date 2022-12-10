#pragma once

AgRingBufferImpl<AgAchievementPlatformData,AgMutex,AgMutex>::~AgRingBufferImpl<AgAchievementPlatformData,AgMutex,AgMutex>(); // 0x140658140
AgRingBufferImpl<AgThreadPool::Job * __ptr64,AgMutex,AgMutex>::~AgRingBufferImpl<AgThreadPool::Job * __ptr64,AgMutex,AgMutex>(); // 0x14067E030
AgRingBufferImpl<AgLeaderboardManager::StoreRankingEntry,void,int>::~AgRingBufferImpl<AgLeaderboardManager::StoreRankingEntry,void,int>(); // 0x1406838B0
void AgRingBufferImpl<AgAchievementPlatformData,AgMutex,AgMutex>::init(unsigned long numItems); // 0x1406588F0
void AgRingBufferImpl<AgLeaderboardManager::StoreRankingEntry,void,int>::init(unsigned long numItems); // 0x140686220
void AgRingBufferImpl<AgAchievementPlatformData,AgMutex,AgMutex>::free(); // 0x140658710
void AgRingBufferImpl<AgThreadPool::Job * __ptr64,AgMutex,AgMutex>::free(); // 0x14067E780
unsigned long AgRingBufferImpl<AgThreadPool::Job * __ptr64,AgMutex,AgMutex>::push(AgThreadPool::Job * item); // 0x14067F290
unsigned long AgRingBufferImpl<AgLeaderboardManager::StoreRankingEntry,void,int>::push(AgLeaderboardManager::StoreRankingEntry item); // 0x140686800
unsigned long AgRingBufferImpl<AgAchievementPlatformData,AgMutex,AgMutex>::push(AgAchievementPlatformData * items, unsigned long numItems); // 0x140658CA0
unsigned long AgRingBufferImpl<AgLeaderboardManager::StoreRankingEntry,void,int>::push(AgLeaderboardManager::StoreRankingEntry * items, unsigned long numItems); // 0x140686700
unsigned long AgRingBufferImpl<AgAchievementPlatformData,AgMutex,AgMutex>::pop(AgAchievementPlatformData * items, unsigned long numItems); // 0x140658B60
unsigned long AgRingBufferImpl<AgThreadPool::Job * __ptr64,AgMutex,AgMutex>::pop(AgThreadPool::Job * * items, unsigned long numItems); // 0x14067F100
unsigned long AgRingBufferImpl<AgLeaderboardManager::StoreRankingEntry,void,int>::pop(AgLeaderboardManager::StoreRankingEntry * items, unsigned long numItems); // 0x140686510
class AgRingBufferImpl<AgLeaderboardManager::StoreRankingEntry,void,int>
{
private:
	unsigned long m_read; // 0x0
	AgLeaderboardManager::StoreRankingEntry * m_buffer; // 0x8
	long m_lock; // 0x10
	unsigned long m_sz; // 0x14
	unsigned long m_write; // 0x40
public:
	AgRingBufferImpl<AgLeaderboardManager::StoreRankingEntry,void,int>(AgLeaderboardManager::StoreRankingEntry *, unsigned long);
	AgRingBufferImpl<AgLeaderboardManager::StoreRankingEntry,void,int>(unsigned long);
	AgRingBufferImpl<AgLeaderboardManager::StoreRankingEntry,void,int>();
private:
	AgRingBufferImpl<AgLeaderboardManager::StoreRankingEntry,void,int>(const AgRingBufferImpl<AgLeaderboardManager::StoreRankingEntry,void,int> &);
	AgRingBufferImpl<AgLeaderboardManager::StoreRankingEntry,void,int> & operator=(const AgRingBufferImpl<AgLeaderboardManager::StoreRankingEntry,void,int> &);
public:
	~AgRingBufferImpl<AgLeaderboardManager::StoreRankingEntry,void,int>();
	void init(AgLeaderboardManager::StoreRankingEntry *, unsigned long);
	void init(unsigned long);
	void free();
	void reset();
	long empty();
	long full();
	unsigned long capacity();
	unsigned long used();
	unsigned long available();
	unsigned long push(AgLeaderboardManager::StoreRankingEntry *, unsigned long);
	unsigned long push(AgLeaderboardManager::StoreRankingEntry);
	unsigned long pop(AgLeaderboardManager::StoreRankingEntry *, unsigned long);
	unsigned long pop(AgLeaderboardManager::StoreRankingEntry &);
	AgLeaderboardManager::StoreRankingEntry & at(unsigned long);
	unsigned long peek(AgLeaderboardManager::StoreRankingEntry *, unsigned long);
};
class AgRingBufferImpl<AgAchievementPlatformData,AgMutex,AgMutex>
{
private:
	unsigned long m_read; // 0x0
	AgAchievementPlatformData * m_buffer; // 0x8
	AgMutex m_lock; // 0x10
	unsigned long m_sz; // 0x38
	unsigned long m_write; // 0x40
public:
	AgRingBufferImpl<AgAchievementPlatformData,AgMutex,AgMutex>(AgAchievementPlatformData *, unsigned long);
	AgRingBufferImpl<AgAchievementPlatformData,AgMutex,AgMutex>(unsigned long);
	AgRingBufferImpl<AgAchievementPlatformData,AgMutex,AgMutex>();
private:
	AgRingBufferImpl<AgAchievementPlatformData,AgMutex,AgMutex>(const AgRingBufferImpl<AgAchievementPlatformData,AgMutex,AgMutex> &);
	AgRingBufferImpl<AgAchievementPlatformData,AgMutex,AgMutex> & operator=(const AgRingBufferImpl<AgAchievementPlatformData,AgMutex,AgMutex> &);
public:
	~AgRingBufferImpl<AgAchievementPlatformData,AgMutex,AgMutex>();
	void init(AgAchievementPlatformData *, unsigned long);
	void init(unsigned long);
	void free();
	void reset();
	long empty();
	long full();
	unsigned long capacity();
	unsigned long used();
	unsigned long available();
	unsigned long push(AgAchievementPlatformData *, unsigned long);
	unsigned long push(AgAchievementPlatformData);
	unsigned long pop(AgAchievementPlatformData *, unsigned long);
	unsigned long pop(AgAchievementPlatformData &);
	AgAchievementPlatformData & at(unsigned long);
	unsigned long peek(AgAchievementPlatformData *, unsigned long);
};
class AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex>
{
private:
	unsigned long m_read; // 0x0
	AgThreadPool::Job * * m_buffer; // 0x8
	AgMutex m_lock; // 0x10
	unsigned long m_sz; // 0x38
	unsigned long m_write; // 0x40
public:
	AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex>(AgThreadPool::Job * *, unsigned long);
	AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex>(unsigned long);
	AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex>();
private:
	AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex>(const AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex> &);
	AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex> & operator=(const AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex> &);
public:
	~AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex>();
	void init(AgThreadPool::Job * *, unsigned long);
	void init(unsigned long);
	void free();
	void reset();
	long empty();
	long full();
	unsigned long capacity();
	unsigned long used();
	unsigned long available();
	unsigned long push(AgThreadPool::Job * *, unsigned long);
	unsigned long push(AgThreadPool::Job *);
	unsigned long pop(AgThreadPool::Job * *, unsigned long);
	unsigned long pop(AgThreadPool::Job * &);
	AgThreadPool::Job * & at(unsigned long);
	unsigned long peek(AgThreadPool::Job * *, unsigned long);
};