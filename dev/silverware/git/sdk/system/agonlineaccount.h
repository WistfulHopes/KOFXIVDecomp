#pragma once

class AgPointer<AgUser>
{
public:
	AgPointer<AgUser>(const AgReference<AgUser> &);
	AgPointer<AgUser>(AgPointer<AgUser> &);
	AgPointer<AgUser>(const AgPointer<AgUser> &);
	AgPointer<AgUser>(AgUser *);
	AgPointer<AgUser>();
	~AgPointer<AgUser>();
	AgPointer<AgUser> & operator=(AgPointer<AgUser> &);
	AgPointer<AgUser> & operator=(const AgReference<AgUser> &);
	AgPointer<AgUser> & operator=(const AgPointer<AgUser> &);
	AgPointer<AgUser> & operator=(AgUser *);
	bool operator<(const AgPointer<AgUser> &);
	AgUser * operator->();
	AgUser & operator*();
	bool operator==(const AgPointer<AgUser> &);
	bool operator==(AgUser *);
	bool operator!=(const AgPointer<AgUser> &);
	bool operator!=(AgUser *);
	AgUser * getObject();
	void swap(AgPointer<AgUser> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgUser * m_ptr; // 0x8
};