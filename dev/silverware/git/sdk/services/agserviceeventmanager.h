#pragma once

class AgServiceEvent :
	AgReferencedObject
{
public:
	AgServiceEvent(const AgServiceEvent &);
	AgServiceEvent(const AgString &, AgPointer<AgUser>);
	~AgServiceEvent();
	const AgString & getName();
	AgPointer<AgUser> getUser();
protected:
	AgString m_name; // 0x10
	AgPointer<AgUser> m_user; // 0x20
public:
	long isValid();
	void argument(float);
	void argument(long);
	void argument(const AgString &);
	void argument(AgPointer<AgUser>);
	long submit();
	AgServiceEvent & operator=(const AgServiceEvent &);
};
class AgPointer<AgServiceEvent>
{
public:
	AgPointer<AgServiceEvent>(const AgReference<AgServiceEvent> &);
	AgPointer<AgServiceEvent>(AgPointer<AgServiceEvent> &);
	AgPointer<AgServiceEvent>(const AgPointer<AgServiceEvent> &);
	AgPointer<AgServiceEvent>(AgServiceEvent *);
	AgPointer<AgServiceEvent>();
	~AgPointer<AgServiceEvent>();
	AgPointer<AgServiceEvent> & operator=(AgPointer<AgServiceEvent> &);
	AgPointer<AgServiceEvent> & operator=(const AgReference<AgServiceEvent> &);
	AgPointer<AgServiceEvent> & operator=(const AgPointer<AgServiceEvent> &);
	AgPointer<AgServiceEvent> & operator=(AgServiceEvent *);
	bool operator<(const AgPointer<AgServiceEvent> &);
	AgServiceEvent * operator->();
	AgServiceEvent & operator*();
	bool operator==(const AgPointer<AgServiceEvent> &);
	bool operator==(AgServiceEvent *);
	bool operator!=(const AgPointer<AgServiceEvent> &);
	bool operator!=(AgServiceEvent *);
	AgServiceEvent * getObject();
	void swap(AgPointer<AgServiceEvent> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgServiceEvent * m_ptr; // 0x8
};
class AgSingleton<AgServiceEventManager>
{
protected:
	~AgSingleton<AgServiceEventManager>();
	long onSingletonInit();
	long onSingletonExit();
public:
	static long createInstance();
	static long destroyInstance();
	static AgServiceEventManager & getInstance();
	static long hasInstance();
private:
	static AgServiceEventManager * createSingleton();
	static void destroySingleton(AgServiceEventManager *);
	static AgSingleton<AgServiceEventManager> * ms_instance; // 0xFFFFFFFFFFFFFFFF
public:
	AgSingleton<AgServiceEventManager>(const AgSingleton<AgServiceEventManager> &);
	AgSingleton<AgServiceEventManager>();
	AgSingleton<AgServiceEventManager> & operator=(const AgSingleton<AgServiceEventManager> &);
};
class AgServiceEventManager :
	AgSingleton<AgServiceEventManager>
{
public:
	AgServiceEventManager(AgServiceEventManager &);
	AgServiceEventManager(const AgServiceEventManager &);
	AgServiceEventManager();
	static AgServiceEventManager * createSingleton();
	void update();
	AgPointer<AgServiceEvent> createStatEvent(const AgString &, AgPointer<AgUser>);
	AgPointer<AgServiceEvent> createPresenceEvent(AgStringRef, AgPointer<AgUser>);
	AgPointer<AgServiceEvent> createActivityEvent(AgStringRef, AgPointer<AgUser>);
protected:
	virtual long onSingletonInit();
	virtual long onSingletonExit();
public:
	virtual ~AgServiceEventManager();
	AgServiceEventManager & operator=(AgServiceEventManager &);
	AgServiceEventManager & operator=(const AgServiceEventManager &);
};