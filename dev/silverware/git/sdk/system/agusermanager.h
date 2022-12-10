#pragma once

struct AgSuspendingEvent
{
};
struct AgResumingEvent
{
};
class std::map<__int64,AgPointer<AgUser>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgUser> > > > :
	std::_Tree<std::_Tmap_traits<__int64,AgPointer<AgUser>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgUser> > >,0> >
{
	class _Myt;
	class _Mybase;
	typedef long long key_type;
	class mapped_type;
	struct key_compare;
	class value_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<__int64 const ,AgPointer<AgUser> > pointer;
	typedef const std::pair<__int64 const ,AgPointer<AgUser> > const_pointer;
	typedef std::pair<__int64 const ,AgPointer<AgUser> > reference;
	typedef const std::pair<__int64 const ,AgPointer<AgUser> > const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<__int64,AgPointer<AgUser>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgUser> > > >(std::initializer_list<std::pair<__int64 const ,AgPointer<AgUser> > >, const std::less<__int64> &, const std::allocator<std::pair<__int64 const ,AgPointer<AgUser> > > &);
	map<__int64,AgPointer<AgUser>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgUser> > > >(std::initializer_list<std::pair<__int64 const ,AgPointer<AgUser> > >, const std::less<__int64> &);
	map<__int64,AgPointer<AgUser>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgUser> > > >(std::initializer_list<std::pair<__int64 const ,AgPointer<AgUser> > >);
	map<__int64,AgPointer<AgUser>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgUser> > > >(std::map<__int64,AgPointer<AgUser>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgUser> > > > &, const std::allocator<std::pair<__int64 const ,AgPointer<AgUser> > > &);
	map<__int64,AgPointer<AgUser>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgUser> > > >(std::map<__int64,AgPointer<AgUser>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgUser> > > > &);
	map<__int64,AgPointer<AgUser>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgUser> > > >(const std::less<__int64> &, const std::allocator<std::pair<__int64 const ,AgPointer<AgUser> > > &);
	map<__int64,AgPointer<AgUser>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgUser> > > >(const std::less<__int64> &);
	map<__int64,AgPointer<AgUser>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgUser> > > >(const std::map<__int64,AgPointer<AgUser>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgUser> > > > &, const std::allocator<std::pair<__int64 const ,AgPointer<AgUser> > > &);
	map<__int64,AgPointer<AgUser>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgUser> > > >(const std::map<__int64,AgPointer<AgUser>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgUser> > > > &);
	map<__int64,AgPointer<AgUser>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgUser> > > >(const std::allocator<std::pair<__int64 const ,AgPointer<AgUser> > > &);
	map<__int64,AgPointer<AgUser>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgUser> > > >();
	std::map<__int64,AgPointer<AgUser>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgUser> > > > & operator=(std::initializer_list<std::pair<__int64 const ,AgPointer<AgUser> > >);
	std::map<__int64,AgPointer<AgUser>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgUser> > > > & operator=(std::map<__int64,AgPointer<AgUser>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgUser> > > > &);
	std::map<__int64,AgPointer<AgUser>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgUser> > > > & operator=(const std::map<__int64,AgPointer<AgUser>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgUser> > > > &);
	AgPointer<AgUser> & operator[](const long long &);
	AgPointer<AgUser> & operator[](long long &);
	void swap(std::map<__int64,AgPointer<AgUser>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgUser> > > > &);
	const AgPointer<AgUser> & at(const long long &);
	AgPointer<AgUser> & at(const long long &);
	~map<__int64,AgPointer<AgUser>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgUser> > > >();
};
struct AgUserEvent
{
	AgPointer<AgUser> user; // 0x0
	const AgPointer<AgUser> & operator const class AgPointer<class AgUser> &();
	AgUserEvent(AgUserEvent &);
	AgUserEvent(const AgUserEvent &);
	AgUserEvent();
	~AgUserEvent();
	AgUserEvent & operator=(AgUserEvent &);
	AgUserEvent & operator=(const AgUserEvent &);
};
struct AgUserAddedEvent :
	AgUserEvent
{
	AgUserAddedEvent(AgUserAddedEvent &);
	AgUserAddedEvent(const AgUserAddedEvent &);
	AgUserAddedEvent();
	~AgUserAddedEvent();
	AgUserAddedEvent & operator=(AgUserAddedEvent &);
	AgUserAddedEvent & operator=(const AgUserAddedEvent &);
};
struct AgUserRemovedEvent :
	AgUserEvent
{
	AgUserRemovedEvent(AgUserRemovedEvent &);
	AgUserRemovedEvent(const AgUserRemovedEvent &);
	AgUserRemovedEvent();
	~AgUserRemovedEvent();
	AgUserRemovedEvent & operator=(AgUserRemovedEvent &);
	AgUserRemovedEvent & operator=(const AgUserRemovedEvent &);
};
struct AgUserUpdatedEvent :
	AgUserEvent
{
	AgUserUpdatedEvent(AgUserUpdatedEvent &);
	AgUserUpdatedEvent(const AgUserUpdatedEvent &);
	AgUserUpdatedEvent();
	enum Flags
	{
		Flag_Name = 0,
		Flag_SignInState = 1,
		Flag_OnlineState = 2,
	};
	unsigned long m_flags; // 0x10
	~AgUserUpdatedEvent();
	AgUserUpdatedEvent & operator=(AgUserUpdatedEvent &);
	AgUserUpdatedEvent & operator=(const AgUserUpdatedEvent &);
};
class AgSingleton<AgUserManager>
{
protected:
	~AgSingleton<AgUserManager>();
	long onSingletonInit();
	long onSingletonExit();
public:
	static long createInstance();
	static long destroyInstance();
	static AgUserManager & getInstance();
	static long hasInstance();
private:
	static AgUserManager * createSingleton();
	static void destroySingleton(AgUserManager *);
	static AgSingleton<AgUserManager> * ms_instance; // 0xFFFFFFFFFFFFFFFF
public:
	AgSingleton<AgUserManager>(const AgSingleton<AgUserManager> &);
	AgSingleton<AgUserManager>();
	AgSingleton<AgUserManager> & operator=(const AgSingleton<AgUserManager> &);
};
class AgUserManager :
	AgSingleton<AgUserManager>
{
protected:
	AgUserManager();
public:
	AgPointer<AgUser> getUser(long long);
	unsigned long getUsers(std::vector<AgPointer<AgUser>,std::allocator<AgPointer<AgUser> > > &);
protected:
	AgMutex m_mutex; // 0x8
	std::map<__int64,AgPointer<AgUser>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgUser> > > > m_users; // 0x30
public:
	static AgUserManager * createSingleton();
	void update();
protected:
	virtual long onSingletonInit();
	virtual long onSingletonExit();
	void onSuspending(const AgSuspendingEvent &);
	void onResuming(const AgResumingEvent &);
public:
	AgAsyncEventDispatcher<AgUserAddedEvent> UserAdded; // 0x40
	AgAsyncEventDispatcher<AgUserRemovedEvent> UserRemoved; // 0xC0
	AgAsyncEventDispatcher<AgUserUpdatedEvent> UserUpdated; // 0x140
protected:
	void _addUser(AgPointer<AgUser>);
	void _removeUser(AgPointer<AgUser>);
	void _updateUser(AgPointer<AgUser>);
	AgPointer<AgUser> _getUser(long long);
	unsigned long _getUsers(std::vector<AgPointer<AgUser>,std::allocator<AgPointer<AgUser> > > &);
public:
	virtual ~AgUserManager();
};
void AgUserManager::onResuming(const AgResumingEvent & __formal); // 0x14002E7C0
class AgAsyncEventDispatcher<AgUserAddedEvent> :
	AgEventDispatcherBase<AgUserAddedEvent>
{
	class EventQueue;
public:
	void reserve(unsigned long);
	void run();
	void invoke(AgUserAddedEvent &);
	void invoke(const AgUserAddedEvent &);
	void operator()(AgUserAddedEvent &);
	void operator()(const AgUserAddedEvent &);
private:
	AgMutex m_queueMutex; // 0x40
	std::vector<AgUserAddedEvent,std::allocator<AgUserAddedEvent> > m_eventQueue; // 0x68
public:
	AgAsyncEventDispatcher<AgUserAddedEvent>();
	~AgAsyncEventDispatcher<AgUserAddedEvent>();
};
class AgAsyncEventDispatcher<AgUserRemovedEvent> :
	AgEventDispatcherBase<AgUserRemovedEvent>
{
	class EventQueue;
public:
	void reserve(unsigned long);
	void run();
	void invoke(AgUserRemovedEvent &);
	void invoke(const AgUserRemovedEvent &);
	void operator()(AgUserRemovedEvent &);
	void operator()(const AgUserRemovedEvent &);
private:
	AgMutex m_queueMutex; // 0x40
	std::vector<AgUserRemovedEvent,std::allocator<AgUserRemovedEvent> > m_eventQueue; // 0x68
public:
	AgAsyncEventDispatcher<AgUserRemovedEvent>();
	~AgAsyncEventDispatcher<AgUserRemovedEvent>();
};
class AgAsyncEventDispatcher<AgUserUpdatedEvent> :
	AgEventDispatcherBase<AgUserUpdatedEvent>
{
	class EventQueue;
public:
	void reserve(unsigned long);
	void run();
	void invoke(AgUserUpdatedEvent &);
	void invoke(const AgUserUpdatedEvent &);
	void operator()(AgUserUpdatedEvent &);
	void operator()(const AgUserUpdatedEvent &);
private:
	AgMutex m_queueMutex; // 0x40
	std::vector<AgUserUpdatedEvent,std::allocator<AgUserUpdatedEvent> > m_eventQueue; // 0x68
public:
	AgAsyncEventDispatcher<AgUserUpdatedEvent>();
	~AgAsyncEventDispatcher<AgUserUpdatedEvent>();
};