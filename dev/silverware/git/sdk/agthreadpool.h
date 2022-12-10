#pragma once

#include "agthread.h"
#include "agpointer.h"
#include "agqueue.h"

class AgJobCompletion
{
public:
	AgJobCompletion(const AgJobCompletion &);
	AgJobCompletion(AgThreadPool *, unsigned long);
	AgJobCompletion();
	long isComplete(long);
	long wait(long);
	long cancel();
private:
	AgThreadPool * m_threadPool; // 0x0
	unsigned long m_jobId; // 0x8
};
class AgThreadPool
{
	typedef unsigned long JobID;
	typedef unsigned long GroupID;
	class Job;
protected:
	AgQueue<AgThreadPool::Job *> m_work; // 0x8
	AgQueue<AgThreadPool::Job *> m_working; // 0x30
	struct GroupIDMatches;
	struct JobIDMatches;
	long nextJob(AgThreadPool::Job * &, long);
	struct CompleteJobPredicate;
private:
	AgQueue<AgThreadPool::Job *> m_completed; // 0x58
	std::vector<AgPointer<AgThread>> m_threads; // 0x80
	AgCondition m_completion; // 0x98
	volatile long m_jobCount; // 0xD0
	volatile long m_uniqueJobID; // 0xD4
	volatile long m_uniqueGroupID; // 0xD8
	long m_allowWorkInIdle; // 0xDC
	class ThreadHost;
	AgThreadPool::ThreadHost * m_threadHost; // 0xE0
	unsigned long getUniqueJobID();
	void waitIdle();
	void workerThreadFunction(AgThreadPool::ThreadHost *);
public:
	void runJob(AgThreadPool::Job *);
	long generateUniqueID(long &);
	AgThreadPool();
	~AgThreadPool();
	long isInitialized();
	void init(unsigned long, unsigned long, long, long, const char *);
	void free();
	unsigned long getUniqueGroupID();
	AgJobCompletion pushJob(AgThreadPool::Job *);
	long cancelJob(unsigned long);
	long cancelAllJobs();
	long isJobComplete(unsigned long);
	long isGroupComplete(unsigned long);
	void waitUntilEmpty();
	void waitForJob(unsigned long);
	void waitForGroup(unsigned long);
	void waitForSpace(unsigned long);
	long processCompletedJobs();
};
class AgThreadPool::Job
{
private:
	void * m_userData; // 0x8
	unsigned long m_jobID; // 0x10
	unsigned long m_groupID; // 0x14
	long m_callCompleteFunc; // 0x18
public:
	Job(const AgThreadPool::Job &);
	Job(long);
private:
	Job();
protected:
	long m_cancelled; // 0x1C
public:
	~Job();
	void setUserData(void *);
	void setGroupID(unsigned long);
	void * getUserData();
	unsigned long getJobID();
	unsigned long getGroupID();
	long run();
	void complete();
	void cancel();
	AgThreadPool::Job & operator=(const AgThreadPool::Job &);
};
AgThreadPool::Job::~Job(); // 0x140689F20
void EngineCallback::OnProcessingPassEnd(); // 0x14002E7C0
void AgThreadPool::Job::cancel(); // 0x14068A0A0
class AgQueue<AgThreadPool::Job *>
{
	class TRingBuffer;
private:
	AgAlignedPointer<AgRingBufferLocked<AgThreadPool::Job *>,1> m_buffer; // 0x0
	AgSemaphore m_sem; // 0x18
public:
	AgQueue<AgThreadPool::Job *>(AgThreadPool::Job * *, unsigned long);
	AgQueue<AgThreadPool::Job *>(unsigned long);
	AgQueue<AgThreadPool::Job *>();
private:
	AgQueue<AgThreadPool::Job *>(const AgQueue<AgThreadPool::Job *> &);
	AgQueue<AgThreadPool::Job *> & operator=(const AgQueue<AgThreadPool::Job *> &);
public:
	~AgQueue<AgThreadPool::Job *>();
	void init(AgThreadPool::Job * *, unsigned long);
	void init(unsigned long);
	void free();
	void abort();
	long aborted();
	long empty();
	unsigned long used();
	unsigned long capacity();
	unsigned long available();
	long push(AgThreadPool::Job * *, unsigned long);
	long push(AgThreadPool::Job *);
	long pop(AgThreadPool::Job * *, unsigned long, long);
	long pop(AgThreadPool::Job * &, long);
	long peek(AgThreadPool::Job * *, unsigned long);
};
struct AgThreadPool::GroupIDMatches
{
	GroupIDMatches(unsigned long);
	long operator()(const AgThreadPool::Job *);
	unsigned long m_id; // 0x0
};
struct AgThreadPool::JobIDMatches
{
	JobIDMatches(unsigned long);
	long operator()(const AgThreadPool::Job *);
	unsigned long m_id; // 0x0
};
struct AgThreadPool::CompleteJobPredicate
{
	long operator()(AgThreadPool::Job *);
};
//unsigned long AgThreadPool::cancelJobs<<lambda_59c28db3580856550501c533fac68ba7> >(AgAudioManagerXAudio2::cancelStreamJob::__l2::<lambda_59c28db3580856550501c533fac68ba7> & p); // 0x140689D40
class AgPriorityThreadPool :
	AgThreadPool
{
	typedef long Priority;
	class PriorityJob;
private:
	AgJobCompletion pushJob(AgThreadPool::Job *);
public:
	AgJobCompletion pushJob(AgPriorityThreadPool::PriorityJob *);
protected:
	virtual long nextJob(AgThreadPool::Job * &, long);
public:
	AgPriorityThreadPool();
	virtual ~AgPriorityThreadPool();
};
class AgPriorityThreadPool::PriorityJob :
	AgThreadPool::Job
{
private:
	long m_priority; // 0x20
public:
	PriorityJob(AgPriorityThreadPool::PriorityJob &);
	PriorityJob(const AgPriorityThreadPool::PriorityJob &);
	PriorityJob(long, long);
	long getPriority();
	virtual ~PriorityJob();
	AgPriorityThreadPool::PriorityJob & operator=(AgPriorityThreadPool::PriorityJob &);
	AgPriorityThreadPool::PriorityJob & operator=(const AgPriorityThreadPool::PriorityJob &);
};