#pragma once

class AgProfile :
	AgReferencedObject
{
public:
	AgProfile(const AgProfile &);
	AgProfile(unsigned long long, long long);
	~AgProfile();
	unsigned long long getId();
	unsigned long long getUserId();
	AgStringRef getUserName();
	AgStringRef getDisplayName();
protected:
	void setUserName(AgStringRef);
	void setDisplayName(AgStringRef);
private:
	unsigned long long m_id; // 0x10
	unsigned long long m_userId; // 0x18
	AgString m_userName; // 0x20
	AgString m_displayName; // 0x30
public:
	AgProfile & operator=(const AgProfile &);
};
class AgPointer<AgProfile>
{
public:
	AgPointer<AgProfile>(const AgReference<AgProfile> &);
	AgPointer<AgProfile>(AgPointer<AgProfile> &);
	AgPointer<AgProfile>(const AgPointer<AgProfile> &);
	AgPointer<AgProfile>(AgProfile *);
	AgPointer<AgProfile>();
	~AgPointer<AgProfile>();
	AgPointer<AgProfile> & operator=(AgPointer<AgProfile> &);
	AgPointer<AgProfile> & operator=(const AgReference<AgProfile> &);
	AgPointer<AgProfile> & operator=(const AgPointer<AgProfile> &);
	AgPointer<AgProfile> & operator=(AgProfile *);
	bool operator<(const AgPointer<AgProfile> &);
	AgProfile * operator->();
	AgProfile & operator*();
	bool operator==(const AgPointer<AgProfile> &);
	bool operator==(AgProfile *);
	bool operator!=(const AgPointer<AgProfile> &);
	bool operator!=(AgProfile *);
	AgProfile * getObject();
	void swap(AgPointer<AgProfile> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgProfile * m_ptr; // 0x8
};