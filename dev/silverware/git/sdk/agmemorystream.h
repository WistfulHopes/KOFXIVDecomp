#pragma once

class AgMemoryStream :
	AgStream
{
public:
	AgMemoryStream(const AgMemoryStream &);
	AgMemoryStream(AgPointer<AgFile>);
	AgMemoryStream(unsigned char *, unsigned long long, long);
	AgMemoryStream();
	virtual ~AgMemoryStream();
	void reserve(unsigned long long);
	void increasePosition(unsigned long long);
	void setSize(unsigned long long);
	void reset();
	void resetChangedFlag();
	virtual AgStringRef getName();
	virtual void setPosition(unsigned long long);
	virtual unsigned long read(unsigned char *, unsigned long);
	unsigned long write(AgPointer<AgStream>);
	virtual unsigned long write(const unsigned char *, unsigned long);
	virtual unsigned long long getPosition();
	virtual unsigned long long getSize();
	virtual long isResident();
	virtual unsigned char * getResidentData();
	long long getCapacity();
	unsigned char * getData();
	const unsigned char * getData();
	long hasChanged();
private:
	unsigned char * m_data; // 0x10
	unsigned long long m_size; // 0x18
	unsigned long long m_position; // 0x20
	unsigned long long m_capacity; // 0x28
	long m_changed; // 0x30
	long m_ownsData; // 0x34
public:
	static void * operator new(unsigned long long);
	static void operator delete(void *);
private:
	static AgMemoryPoolLocked s_pool; // 0xFFFFFFFFFFFFFFFF
public:
	AgMemoryStream & operator=(const AgMemoryStream &);
};
class AgPointer<AgFile>
{
public:
	AgPointer<AgFile>(const AgReference<AgFile> &);
	AgPointer<AgFile>(AgPointer<AgFile> &);
	AgPointer<AgFile>(const AgPointer<AgFile> &);
	AgPointer<AgFile>(AgFile *);
	AgPointer<AgFile>();
	~AgPointer<AgFile>();
	AgPointer<AgFile> & operator=(AgPointer<AgFile> &);
	AgPointer<AgFile> & operator=(const AgReference<AgFile> &);
	AgPointer<AgFile> & operator=(const AgPointer<AgFile> &);
	AgPointer<AgFile> & operator=(AgFile *);
	bool operator<(const AgPointer<AgFile> &);
	AgFile * operator->();
	AgFile & operator*();
	bool operator==(const AgPointer<AgFile> &);
	bool operator==(AgFile *);
	bool operator!=(const AgPointer<AgFile> &);
	bool operator!=(AgFile *);
	AgFile * getObject();
	void swap(AgPointer<AgFile> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgFile * m_ptr; // 0x8
};
class AgPointer<AgFile>
{
public:
	AgPointer<AgFile>(const AgReference<AgFile> &);
	AgPointer<AgFile>(AgPointer<AgFile> &);
	AgPointer<AgFile>(const AgPointer<AgFile> &);
	AgPointer<AgFile>(AgFile *);
	AgPointer<AgFile>();
	~AgPointer<AgFile>();
	AgPointer<AgFile> & operator=(AgPointer<AgFile> &);
	AgPointer<AgFile> & operator=(const AgReference<AgFile> &);
	AgPointer<AgFile> & operator=(const AgPointer<AgFile> &);
	AgPointer<AgFile> & operator=(AgFile *);
	bool operator<(const AgPointer<AgFile> &);
	AgFile * operator->();
	AgFile & operator*();
	bool operator==(const AgPointer<AgFile> &);
	bool operator==(AgFile *);
	bool operator!=(const AgPointer<AgFile> &);
	bool operator!=(AgFile *);
	AgFile * getObject();
	void swap(AgPointer<AgFile> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgFile * m_ptr; // 0x8
public:
	AgPointer<AgStream> operator class AgPointer<class AgStream>();
};
AgStringRef AgMemoryStream::getName(); // 0x14065C930
void AgMemoryStream::operator delete(void * p); // 0x140050870