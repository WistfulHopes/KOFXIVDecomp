#pragma once

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
class AgPointer<AgMemoryStream>
{
public:
	AgPointer<AgMemoryStream>(const AgReference<AgMemoryStream> &);
	AgPointer<AgMemoryStream>(AgPointer<AgMemoryStream> &);
	AgPointer<AgMemoryStream>(const AgPointer<AgMemoryStream> &);
	AgPointer<AgMemoryStream>(AgMemoryStream *);
	AgPointer<AgMemoryStream>();
	~AgPointer<AgMemoryStream>();
	AgPointer<AgMemoryStream> & operator=(AgPointer<AgMemoryStream> &);
	AgPointer<AgMemoryStream> & operator=(const AgReference<AgMemoryStream> &);
	AgPointer<AgMemoryStream> & operator=(const AgPointer<AgMemoryStream> &);
	AgPointer<AgMemoryStream> & operator=(AgMemoryStream *);
	bool operator<(const AgPointer<AgMemoryStream> &);
	AgMemoryStream * operator->();
	AgMemoryStream & operator*();
	bool operator==(const AgPointer<AgMemoryStream> &);
	bool operator==(AgMemoryStream *);
	bool operator!=(const AgPointer<AgMemoryStream> &);
	bool operator!=(AgMemoryStream *);
	AgMemoryStream * getObject();
	void swap(AgPointer<AgMemoryStream> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgMemoryStream * m_ptr; // 0x8
};