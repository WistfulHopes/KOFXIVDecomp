#pragma once

class AgPath
{
public:
	AgPath(AgPath &);
	AgPath(const AgPath &);
	AgPath(const AgStringRef &);
	AgPath(const AgString &);
	AgPath(const char *);
	AgPath();
	AgPath getRoot();
	AgPath getParent();
	AgPath getRelative();
	AgStringRef getRootName();
	AgStringRef getFileName();
	AgStringRef getFileNameNoExtension();
	AgStringRef getExtension();
	void setExtension(AgStringRef);
	const AgString & getString();
	const char * getCString();
	unsigned long getLength();
	long isValid();
	AgPath append(const AgPath &);
	AgPath & append(const AgString &);
	AgPath operator/(const AgPath &);
	AgPath operator+(const AgPath &);
	const AgString & operator const class AgString &();
	bool operator<(const AgPath &);
	bool operator>(const AgPath &);
	bool operator<=(const AgPath &);
	bool operator>=(const AgPath &);
	bool operator==(const AgPath &);
	bool operator!=(const AgPath &);
	void operator+=(const AgString &);
protected:
	void clean();
private:
	AgString m_path; // 0x0
public:
	~AgPath();
	AgPath & operator=(AgPath &);
	AgPath & operator=(const AgPath &);
};
AgPath::AgPath(); // 0x1400478C0
AgPath & AgPath::append(const AgString & other); // 0x1401020C0
AgPath AgPath::operator/(const AgPath & other); // 0x140662100