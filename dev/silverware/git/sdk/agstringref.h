#pragma once

class AgStringRef
{
public:
	AgStringRef(const AgString &);
	AgStringRef(const char *, unsigned long);
	AgStringRef(const char *);
	AgStringRef();
	const char * getCString();
	unsigned long getLength();
	long getFirstIndexOf(const AgStringRef &, unsigned long);
	long getFirstIndexOf(char, unsigned long);
	long getLastIndexOf(const AgStringRef &, unsigned long);
	long getLastIndexOf(char, unsigned long);
	AgStringRef getSubString(unsigned long, long);
	std::string getString();
	std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > getWString();
	long long toInt64();
	unsigned long long toUInt64();
	long find(AgStringRef, unsigned long);
	long rfind(AgStringRef, unsigned long);
	AgString erase(unsigned long, unsigned long);
	AgString replace(AgStringRef, AgStringRef);
	AgString replace(unsigned long, long, AgStringRef);
	const char & operator[](unsigned long);
	AgString operator+(const AgString &);
	AgString operator+(const char *);
	AgString operator+(const AgStringRef &);
private:
	const char * m_text; // 0x0
	unsigned long m_length; // 0x8
};