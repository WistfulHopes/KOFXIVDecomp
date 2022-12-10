#pragma once

class AgService :
	AgReferencedObject
{
	typedef AgServiceCommandBase Command;
	class CommandList;
public:
	AgService(AgStringRef, unsigned long long);
	void post(AgServiceCommandBase *);
	long runOne(long);
	void runAll(long);
	void abort();
	void waitEmpty();
protected:
	std::vector<AgServiceCommandBase *,std::allocator<AgServiceCommandBase *> > m_commands; // 0x8
	AgServiceCommandBase * m_command; // 0x20
	long m_commandListMask; // 0x28
	volatile long m_read; // 0x2C
	volatile long m_write; // 0x30
	AgCondition m_condition; // 0x38
	AgSilverWareDebugChannel m_channel; // 0x70
public:
	~AgService();
};
class std::vector<AgServiceCommandBase *,std::allocator<AgServiceCommandBase *> > :
	std::_Vector_alloc<std::_Vec_base_types<AgServiceCommandBase *,std::allocator<AgServiceCommandBase *> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	typedef AgServiceCommandBase value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgServiceCommandBase * pointer;
	typedef AgServiceCommandBase * const_pointer;
	typedef AgServiceCommandBase * reference;
	typedef AgServiceCommandBase * const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgServiceCommandBase *,std::allocator<AgServiceCommandBase *> >(std::initializer_list<AgServiceCommandBase *>, const std::allocator<AgServiceCommandBase *> &);
	vector<AgServiceCommandBase *,std::allocator<AgServiceCommandBase *> >(std::vector<AgServiceCommandBase *,std::allocator<AgServiceCommandBase *> > &, const std::allocator<AgServiceCommandBase *> &);
	vector<AgServiceCommandBase *,std::allocator<AgServiceCommandBase *> >(std::vector<AgServiceCommandBase *,std::allocator<AgServiceCommandBase *> > &);
	vector<AgServiceCommandBase *,std::allocator<AgServiceCommandBase *> >(const std::vector<AgServiceCommandBase *,std::allocator<AgServiceCommandBase *> > &, const std::allocator<AgServiceCommandBase *> &);
	vector<AgServiceCommandBase *,std::allocator<AgServiceCommandBase *> >(const std::vector<AgServiceCommandBase *,std::allocator<AgServiceCommandBase *> > &);
	vector<AgServiceCommandBase *,std::allocator<AgServiceCommandBase *> >(unsigned long long, AgServiceCommandBase * &, const std::allocator<AgServiceCommandBase *> &);
	vector<AgServiceCommandBase *,std::allocator<AgServiceCommandBase *> >(unsigned long long, AgServiceCommandBase * &);
	vector<AgServiceCommandBase *,std::allocator<AgServiceCommandBase *> >(unsigned long long);
	vector<AgServiceCommandBase *,std::allocator<AgServiceCommandBase *> >(const std::allocator<AgServiceCommandBase *> &);
	vector<AgServiceCommandBase *,std::allocator<AgServiceCommandBase *> >();
	void _Construct_n(unsigned long long, AgServiceCommandBase * *);
	std::vector<AgServiceCommandBase *,std::allocator<AgServiceCommandBase *> > & operator=(const std::vector<AgServiceCommandBase *,std::allocator<AgServiceCommandBase *> > &);
	std::vector<AgServiceCommandBase *,std::allocator<AgServiceCommandBase *> > & operator=(std::initializer_list<AgServiceCommandBase *>);
	std::vector<AgServiceCommandBase *,std::allocator<AgServiceCommandBase *> > & operator=(std::vector<AgServiceCommandBase *,std::allocator<AgServiceCommandBase *> > &);
	void _Assign_rv(std::vector<AgServiceCommandBase *,std::allocator<AgServiceCommandBase *> > &);
	void _Assign_rv(std::vector<AgServiceCommandBase *,std::allocator<AgServiceCommandBase *> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgServiceCommandBase *,std::allocator<AgServiceCommandBase *> > &, std::integral_constant<bool,1>);
	void push_back(AgServiceCommandBase * &);
	void push_back(AgServiceCommandBase * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgServiceCommandBase *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgServiceCommandBase *> > >, unsigned long long, AgServiceCommandBase * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgServiceCommandBase *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgServiceCommandBase *> > >, AgServiceCommandBase * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgServiceCommandBase *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgServiceCommandBase *> > >, std::initializer_list<AgServiceCommandBase *>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgServiceCommandBase *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgServiceCommandBase *> > >, AgServiceCommandBase * &);
	void assign(unsigned long long, AgServiceCommandBase * &);
	void assign(std::initializer_list<AgServiceCommandBase *>);
	~vector<AgServiceCommandBase *,std::allocator<AgServiceCommandBase *> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgServiceCommandBase *> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgServiceCommandBase *> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgServiceCommandBase *> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgServiceCommandBase *> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgServiceCommandBase *> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgServiceCommandBase *> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgServiceCommandBase *> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgServiceCommandBase *> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgServiceCommandBase *> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgServiceCommandBase *> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgServiceCommandBase *> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgServiceCommandBase *> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgServiceCommandBase *> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgServiceCommandBase *> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, AgServiceCommandBase * &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgServiceCommandBase *> get_allocator();
	AgServiceCommandBase * & at(unsigned long long);
	AgServiceCommandBase * & at(unsigned long long);
	AgServiceCommandBase * & operator[](unsigned long long);
	AgServiceCommandBase * & operator[](unsigned long long);
	AgServiceCommandBase * * data();
	AgServiceCommandBase * * data();
	AgServiceCommandBase * & front();
	AgServiceCommandBase * & front();
	AgServiceCommandBase * & back();
	AgServiceCommandBase * & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgServiceCommandBase *> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgServiceCommandBase *> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgServiceCommandBase *> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgServiceCommandBase *> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgServiceCommandBase *> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgServiceCommandBase *,std::allocator<AgServiceCommandBase *> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgServiceCommandBase * *, AgServiceCommandBase * *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(AgServiceCommandBase * *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgServiceCommandBase *> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgServiceCommandBase *> > >, unsigned long long, AgServiceCommandBase * &);
	AgServiceCommandBase * * _Ufill(AgServiceCommandBase * *, unsigned long long, AgServiceCommandBase * *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgServiceCommandBase * *, AgServiceCommandBase * *);
};
AgService::AgService(AgStringRef name, unsigned long long reserved); // 0x140658ED0
class AgPointer<AgService>
{
public:
	AgPointer<AgService>(const AgReference<AgService> &);
	AgPointer<AgService>(AgPointer<AgService> &);
	AgPointer<AgService>(const AgPointer<AgService> &);
	AgPointer<AgService>(AgService *);
	AgPointer<AgService>();
	~AgPointer<AgService>();
	AgPointer<AgService> & operator=(AgPointer<AgService> &);
	AgPointer<AgService> & operator=(const AgReference<AgService> &);
	AgPointer<AgService> & operator=(const AgPointer<AgService> &);
	AgPointer<AgService> & operator=(AgService *);
	bool operator<(const AgPointer<AgService> &);
	AgService * operator->();
	AgService & operator*();
	bool operator==(const AgPointer<AgService> &);
	bool operator==(AgService *);
	bool operator!=(const AgPointer<AgService> &);
	bool operator!=(AgService *);
	AgService * getObject();
	void swap(AgPointer<AgService> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgService * m_ptr; // 0x8
};
class AgServiceCommandJob :
	AgThreadPool::Job
{
public:
	AgServiceCommandJob(const AgServiceCommandJob &);
	AgServiceCommandJob(AgServiceCommandBase *, AgPointer<AgService>, AgServiceCommandBase *);
	virtual ~AgServiceCommandJob();
	virtual long run();
	virtual void complete();
private:
	AgServiceCommandBase * m_runCommand; // 0x20
	AgPointer<AgService> m_service; // 0x28
	AgServiceCommandBase * m_completeCommand; // 0x38
public:
	static void * operator new(unsigned long long);
	static void operator delete(void *);
private:
	static AgMemoryPoolLocked s_pool; // 0xFFFFFFFFFFFFFFFF
public:
	AgServiceCommandJob & operator=(const AgServiceCommandJob &);
};
class AgServiceThread :
	AgIThreadHost
{
public:
	AgServiceThread(const AgServiceThread &);
	AgServiceThread(AgPointer<AgService>, unsigned long long, long, const char *);
	virtual ~AgServiceThread();
	virtual void onExecuteThread();
	virtual void onJoinThread();
	virtual void onDetachThread();
	virtual long getThreadIsRunning();
protected:
	AgPointer<AgService> m_service; // 0x8
	long m_running; // 0x18
	AgThread m_thread; // 0x20
public:
	AgServiceThread & operator=(const AgServiceThread &);
};