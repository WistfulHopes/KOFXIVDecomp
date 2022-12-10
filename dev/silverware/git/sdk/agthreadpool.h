#pragma once

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
	std::vector<AgPointer<AgThread>,std::allocator<AgPointer<AgThread> > > m_threads; // 0x80
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
class std::vector<AgPointer<AgThread>,std::allocator<AgPointer<AgThread> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgPointer<AgThread>,std::allocator<AgPointer<AgThread> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgPointer<AgThread> pointer;
	typedef const AgPointer<AgThread> const_pointer;
	typedef AgPointer<AgThread> reference;
	typedef const AgPointer<AgThread> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgPointer<AgThread>,std::allocator<AgPointer<AgThread> > >(std::initializer_list<AgPointer<AgThread> >, const std::allocator<AgPointer<AgThread> > &);
	vector<AgPointer<AgThread>,std::allocator<AgPointer<AgThread> > >(std::vector<AgPointer<AgThread>,std::allocator<AgPointer<AgThread> > > &, const std::allocator<AgPointer<AgThread> > &);
	vector<AgPointer<AgThread>,std::allocator<AgPointer<AgThread> > >(std::vector<AgPointer<AgThread>,std::allocator<AgPointer<AgThread> > > &);
	vector<AgPointer<AgThread>,std::allocator<AgPointer<AgThread> > >(const std::vector<AgPointer<AgThread>,std::allocator<AgPointer<AgThread> > > &, const std::allocator<AgPointer<AgThread> > &);
	vector<AgPointer<AgThread>,std::allocator<AgPointer<AgThread> > >(const std::vector<AgPointer<AgThread>,std::allocator<AgPointer<AgThread> > > &);
	vector<AgPointer<AgThread>,std::allocator<AgPointer<AgThread> > >(unsigned long long, const AgPointer<AgThread> &, const std::allocator<AgPointer<AgThread> > &);
	vector<AgPointer<AgThread>,std::allocator<AgPointer<AgThread> > >(unsigned long long, const AgPointer<AgThread> &);
	vector<AgPointer<AgThread>,std::allocator<AgPointer<AgThread> > >(unsigned long long);
	vector<AgPointer<AgThread>,std::allocator<AgPointer<AgThread> > >(const std::allocator<AgPointer<AgThread> > &);
	vector<AgPointer<AgThread>,std::allocator<AgPointer<AgThread> > >();
	void _Construct_n(unsigned long long, const AgPointer<AgThread> *);
	std::vector<AgPointer<AgThread>,std::allocator<AgPointer<AgThread> > > & operator=(const std::vector<AgPointer<AgThread>,std::allocator<AgPointer<AgThread> > > &);
	std::vector<AgPointer<AgThread>,std::allocator<AgPointer<AgThread> > > & operator=(std::initializer_list<AgPointer<AgThread> >);
	std::vector<AgPointer<AgThread>,std::allocator<AgPointer<AgThread> > > & operator=(std::vector<AgPointer<AgThread>,std::allocator<AgPointer<AgThread> > > &);
	void _Assign_rv(std::vector<AgPointer<AgThread>,std::allocator<AgPointer<AgThread> > > &);
	void _Assign_rv(std::vector<AgPointer<AgThread>,std::allocator<AgPointer<AgThread> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgPointer<AgThread>,std::allocator<AgPointer<AgThread> > > &, std::integral_constant<bool,1>);
	void push_back(const AgPointer<AgThread> &);
	void push_back(AgPointer<AgThread> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgThread> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgThread> > > >, unsigned long long, const AgPointer<AgThread> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgThread> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgThread> > > >, const AgPointer<AgThread> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgThread> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgThread> > > >, std::initializer_list<AgPointer<AgThread> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgThread> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgThread> > > >, AgPointer<AgThread> &);
	void assign(unsigned long long, const AgPointer<AgThread> &);
	void assign(std::initializer_list<AgPointer<AgThread> >);
	~vector<AgPointer<AgThread>,std::allocator<AgPointer<AgThread> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgThread> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgThread> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgThread> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgThread> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgThread> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgThread> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgThread> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgThread> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgThread> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgThread> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgThread> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgThread> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgThread> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgThread> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgPointer<AgThread> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgPointer<AgThread> > get_allocator();
	AgPointer<AgThread> & at(unsigned long long);
	const AgPointer<AgThread> & at(unsigned long long);
	AgPointer<AgThread> & operator[](unsigned long long);
	const AgPointer<AgThread> & operator[](unsigned long long);
	const AgPointer<AgThread> * data();
	AgPointer<AgThread> * data();
	const AgPointer<AgThread> & front();
	AgPointer<AgThread> & front();
	const AgPointer<AgThread> & back();
	AgPointer<AgThread> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgThread> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgThread> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgThread> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgThread> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgThread> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgPointer<AgThread>,std::allocator<AgPointer<AgThread> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgPointer<AgThread> *, AgPointer<AgThread> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgPointer<AgThread> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgThread> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgThread> > > >, unsigned long long, const AgPointer<AgThread> &);
	AgPointer<AgThread> * _Ufill(AgPointer<AgThread> *, unsigned long long, const AgPointer<AgThread> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgPointer<AgThread> *, AgPointer<AgThread> *);
};
class AgPointer<AgThread>
{
public:
	AgPointer<AgThread>(const AgReference<AgThread> &);
	AgPointer<AgThread>(AgPointer<AgThread> &);
	AgPointer<AgThread>(const AgPointer<AgThread> &);
	AgPointer<AgThread>(AgThread *);
	AgPointer<AgThread>();
	~AgPointer<AgThread>();
	AgPointer<AgThread> & operator=(AgPointer<AgThread> &);
	AgPointer<AgThread> & operator=(const AgReference<AgThread> &);
	AgPointer<AgThread> & operator=(const AgPointer<AgThread> &);
	AgPointer<AgThread> & operator=(AgThread *);
	bool operator<(const AgPointer<AgThread> &);
	AgThread * operator->();
	AgThread & operator*();
	bool operator==(const AgPointer<AgThread> &);
	bool operator==(AgThread *);
	bool operator!=(const AgPointer<AgThread> &);
	bool operator!=(AgThread *);
	AgThread * getObject();
	void swap(AgPointer<AgThread> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgThread * m_ptr; // 0x8
};
unsigned long AgThreadPool::cancelJobs<<lambda_59c28db3580856550501c533fac68ba7> >(AgAudioManagerXAudio2::cancelStreamJob::__l2::<lambda_59c28db3580856550501c533fac68ba7> & p); // 0x140689D40
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