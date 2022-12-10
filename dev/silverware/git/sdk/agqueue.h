#pragma once

class AgRingBufferLocked<AgAchievementPlatformData> :
	AgRingBufferImpl<AgAchievementPlatformData,AgMutex,AgMutex>
{
public:
	AgRingBufferLocked<AgAchievementPlatformData>();
	~AgRingBufferLocked<AgAchievementPlatformData>();
};
class AgRingBufferLocked<AgThreadPool::Job *> :
	AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex>
{
public:
	AgRingBufferLocked<AgThreadPool::Job *>();
	~AgRingBufferLocked<AgThreadPool::Job *>();
};
class AgAlignedPointer<AgRingBufferLocked<AgThreadPool::Job *>,1>
{
private:
	unsigned char * m_baseMem; // 0x0
	AgRingBufferLocked<AgThreadPool::Job *> * m_returnedMem; // 0x8
	unsigned long m_numItems; // 0x10
public:
	AgAlignedPointer<AgRingBufferLocked<AgThreadPool::Job *>,1>(unsigned long, unsigned long);
	AgAlignedPointer<AgRingBufferLocked<AgThreadPool::Job *>,1>(AgAlignedPointer<AgRingBufferLocked<AgThreadPool::Job *>,1> &);
	AgAlignedPointer<AgRingBufferLocked<AgThreadPool::Job *>,1>();
	~AgAlignedPointer<AgRingBufferLocked<AgThreadPool::Job *>,1>();
	const AgRingBufferLocked<AgThreadPool::Job *> * ptr();
	AgRingBufferLocked<AgThreadPool::Job *> * ptr();
	const AgRingBufferLocked<AgThreadPool::Job *> * operator->();
	AgRingBufferLocked<AgThreadPool::Job *> * operator->();
	void operator=(AgAlignedPointer<AgRingBufferLocked<AgThreadPool::Job *>,1> &);
	void free();
};
class AgAlignedPointer<AgRingBufferLocked<AgAchievementPlatformData>,1>
{
private:
	unsigned char * m_baseMem; // 0x0
	AgRingBufferLocked<AgAchievementPlatformData> * m_returnedMem; // 0x8
	unsigned long m_numItems; // 0x10
public:
	AgAlignedPointer<AgRingBufferLocked<AgAchievementPlatformData>,1>(unsigned long, unsigned long);
	AgAlignedPointer<AgRingBufferLocked<AgAchievementPlatformData>,1>(AgAlignedPointer<AgRingBufferLocked<AgAchievementPlatformData>,1> &);
	AgAlignedPointer<AgRingBufferLocked<AgAchievementPlatformData>,1>();
	~AgAlignedPointer<AgRingBufferLocked<AgAchievementPlatformData>,1>();
	const AgRingBufferLocked<AgAchievementPlatformData> * ptr();
	AgRingBufferLocked<AgAchievementPlatformData> * ptr();
	const AgRingBufferLocked<AgAchievementPlatformData> * operator->();
	AgRingBufferLocked<AgAchievementPlatformData> * operator->();
	void operator=(AgAlignedPointer<AgRingBufferLocked<AgAchievementPlatformData>,1> &);
	void free();
};
AgQueue<AgAchievementPlatformData>::~AgQueue<AgAchievementPlatformData>(); // 0x1406580E0
AgQueue<AgThreadPool::Job * __ptr64>::~AgQueue<AgThreadPool::Job * __ptr64>(); // 0x14067DFD0
void AgQueue<AgAchievementPlatformData>::init(unsigned long maxItems); // 0x140658800
void AgQueue<AgThreadPool::Job * __ptr64>::init(unsigned long maxItems); // 0x14067E960
long AgQueue<AgThreadPool::Job * __ptr64>::pop(AgThreadPool::Job * & item, long timeout); // 0x14067F080