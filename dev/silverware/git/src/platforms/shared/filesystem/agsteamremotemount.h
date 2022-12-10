#pragma once

class AgSteamRemoteMount :
	AgMount
{
public:
	AgSteamRemoteMount(const AgString &, AgPointer<AgUser>);
	virtual AgPointer<AgFile> open(const AgPath &, unsigned long);
	virtual long exists(const AgPath &);
	virtual long remove(const AgPath &);
	virtual AgPointer<AgDirectory> openDirectory(const AgPath &, AgStringRef, unsigned long);
	virtual void mount();
	virtual ~AgSteamRemoteMount();
};
AgSteamRemoteMount::AgSteamRemoteMount(const AgString & mountPoint, AgPointer<AgUser> user); // 0x14068D2C0
AgPointer<AgDirectory> AgSteamRemoteMount::openDirectory(const AgPath & path, AgStringRef filter, unsigned long filterMask); // 0x14068DF00
class AgPointer<AgSteamRemoteMount>
{
public:
	AgPointer<AgSteamRemoteMount>(const AgReference<AgSteamRemoteMount> &);
	AgPointer<AgSteamRemoteMount>(AgPointer<AgSteamRemoteMount> &);
	AgPointer<AgSteamRemoteMount>(const AgPointer<AgSteamRemoteMount> &);
	AgPointer<AgSteamRemoteMount>(AgSteamRemoteMount *);
	AgPointer<AgSteamRemoteMount>();
	~AgPointer<AgSteamRemoteMount>();
	AgPointer<AgSteamRemoteMount> & operator=(AgPointer<AgSteamRemoteMount> &);
	AgPointer<AgSteamRemoteMount> & operator=(const AgReference<AgSteamRemoteMount> &);
	AgPointer<AgSteamRemoteMount> & operator=(const AgPointer<AgSteamRemoteMount> &);
	AgPointer<AgSteamRemoteMount> & operator=(AgSteamRemoteMount *);
	bool operator<(const AgPointer<AgSteamRemoteMount> &);
	AgSteamRemoteMount * operator->();
	AgSteamRemoteMount & operator*();
	bool operator==(const AgPointer<AgSteamRemoteMount> &);
	bool operator==(AgSteamRemoteMount *);
	bool operator!=(const AgPointer<AgSteamRemoteMount> &);
	bool operator!=(AgSteamRemoteMount *);
	AgSteamRemoteMount * getObject();
	void swap(AgPointer<AgSteamRemoteMount> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgSteamRemoteMount * m_ptr; // 0x8
};
class AgPointer<AgSteamRemoteMount>
{
public:
	AgPointer<AgSteamRemoteMount>(const AgReference<AgSteamRemoteMount> &);
	AgPointer<AgSteamRemoteMount>(AgPointer<AgSteamRemoteMount> &);
	AgPointer<AgSteamRemoteMount>(const AgPointer<AgSteamRemoteMount> &);
	AgPointer<AgSteamRemoteMount>(AgSteamRemoteMount *);
	AgPointer<AgSteamRemoteMount>();
	~AgPointer<AgSteamRemoteMount>();
	AgPointer<AgSteamRemoteMount> & operator=(AgPointer<AgSteamRemoteMount> &);
	AgPointer<AgSteamRemoteMount> & operator=(const AgReference<AgSteamRemoteMount> &);
	AgPointer<AgSteamRemoteMount> & operator=(const AgPointer<AgSteamRemoteMount> &);
	AgPointer<AgSteamRemoteMount> & operator=(AgSteamRemoteMount *);
	bool operator<(const AgPointer<AgSteamRemoteMount> &);
	AgSteamRemoteMount * operator->();
	AgSteamRemoteMount & operator*();
	bool operator==(const AgPointer<AgSteamRemoteMount> &);
	bool operator==(AgSteamRemoteMount *);
	bool operator!=(const AgPointer<AgSteamRemoteMount> &);
	bool operator!=(AgSteamRemoteMount *);
	AgSteamRemoteMount * getObject();
	void swap(AgPointer<AgSteamRemoteMount> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgSteamRemoteMount * m_ptr; // 0x8
public:
	AgPointer<AgMount> operator class AgPointer<class AgMount>();
};