#pragma once

class AgStream :
	AgReferencedObject
{
public:
	~AgStream();
	AgStringRef getName();
	unsigned long read(unsigned char *, unsigned long);
	unsigned long write(const unsigned char *, unsigned long);
	unsigned long long getSize();
	void setPosition(unsigned long long);
	unsigned long long getPosition();
	long isValid();
	long isResident();
	unsigned char * getResidentData();
	long getResidentType();
	AgPointer<AgStream> clone();
	AgStream(const AgStream &);
	AgStream();
	AgStream & operator=(const AgStream &);
};
AgStream::~AgStream(); // 0x14065C7B0
AgStringRef AgStream::getName(); // 0x14065C960
long AgMemoryStream::isResident(); // 0x1400482A0
unsigned char * AgStream::getResidentData(); // 0x1400470F0
class AgPointer<AgStream>
{
public:
	AgPointer<AgStream>(const AgReference<AgStream> &);
	AgPointer<AgStream>(AgPointer<AgStream> &);
	AgPointer<AgStream>(const AgPointer<AgStream> &);
	AgPointer<AgStream>(AgStream *);
	AgPointer<AgStream>();
	~AgPointer<AgStream>();
	AgPointer<AgStream> & operator=(AgPointer<AgStream> &);
	AgPointer<AgStream> & operator=(const AgReference<AgStream> &);
	AgPointer<AgStream> & operator=(const AgPointer<AgStream> &);
	AgPointer<AgStream> & operator=(AgStream *);
	bool operator<(const AgPointer<AgStream> &);
	AgStream * operator->();
	AgStream & operator*();
	bool operator==(const AgPointer<AgStream> &);
	bool operator==(AgStream *);
	bool operator!=(const AgPointer<AgStream> &);
	bool operator!=(AgStream *);
	AgStream * getObject();
	void swap(AgPointer<AgStream> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgStream * m_ptr; // 0x8
};
AgPointer<AgStream> AgStream::clone(); // 0x14065C870