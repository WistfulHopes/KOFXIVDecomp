#pragma once

class AgSession :
	AgReferencedObject
{
public:
	AgSession(const AgString &);
	~AgSession();
	const AgString & getName();
	const std::vector<AgPointer<AgUser>,std::allocator<AgPointer<AgUser> > > & getUsers();
	long isStarted();
	long start();
	long pause();
	long resume();
	long stop();
	long add(AgPointer<AgUser>);
	long remove(AgPointer<AgUser>);
	long contains(AgPointer<AgUser>);
protected:
	AgString m_name; // 0x10
	std::vector<AgPointer<AgUser>,std::allocator<AgPointer<AgUser> > > m_users; // 0x20
	long m_started; // 0x38
	long m_paused; // 0x3C
	long m_wasStarted; // 0x40
public:
	long isValid();
protected:
	long startSession();
	long pauseSession();
	long resumeSession();
	long stopSession();
	void startUser(AgPointer<AgUser>);
	void pauseUser(AgPointer<AgUser>);
	void resumeUser(AgPointer<AgUser>);
	void stopUser(AgPointer<AgUser>);
	void onUserRemoved(const AgUserRemovedEvent &);
	void onSuspending(const AgSuspendingEvent &);
	void onResuming(const AgResumingEvent &);
	AgMutex m_mutex; // 0x44
};
long AgSession::pauseSession(); // 0x1400482A0
class AgPointer<AgSession>
{
public:
	AgPointer<AgSession>(const AgReference<AgSession> &);
	AgPointer<AgSession>(AgPointer<AgSession> &);
	AgPointer<AgSession>(const AgPointer<AgSession> &);
	AgPointer<AgSession>(AgSession *);
	AgPointer<AgSession>();
	~AgPointer<AgSession>();
	AgPointer<AgSession> & operator=(AgPointer<AgSession> &);
	AgPointer<AgSession> & operator=(const AgReference<AgSession> &);
	AgPointer<AgSession> & operator=(const AgPointer<AgSession> &);
	AgPointer<AgSession> & operator=(AgSession *);
	bool operator<(const AgPointer<AgSession> &);
	AgSession * operator->();
	AgSession & operator*();
	bool operator==(const AgPointer<AgSession> &);
	bool operator==(AgSession *);
	bool operator!=(const AgPointer<AgSession> &);
	bool operator!=(AgSession *);
	AgSession * getObject();
	void swap(AgPointer<AgSession> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgSession * m_ptr; // 0x8
};