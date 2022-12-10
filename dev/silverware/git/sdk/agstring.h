#pragma once

#include "agstringref.h"
#include <string>

class AgString
{
public:
	AgString(const std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &);
	AgString(const wchar_t *, long);
	AgString(const AgStringRef &);
	AgString(double);
	AgString(long long);
	AgString(long);
	AgString(AgString &);
	AgString(const char);
	AgString(const std::string &);
	AgString(const AgString &);
	AgString(const char *, long);
	AgString();
	~AgString();
	void clear();
	void operator=(const AgStringRef &);
	void operator=(const AgString &);
	void operator=(const char *);
	void operator+=(const AgString &);
	void operator+=(char);
	unsigned long getLength();
	void setLength(unsigned long);
	long getFirstIndexOf(AgStringRef, unsigned long);
	long getFirstIndexOf(char, unsigned long);
	long getLastIndexOf(AgStringRef, unsigned long);
	long getLastIndexOf(char, unsigned long);
	AgStringRef getSubString(unsigned long, long);
	const char * getCString();
	std::string getString();
	std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > getWString();
	long long toInt64();
	unsigned long long toUInt64();
	long format(const char *, ...);
	static AgString fromFormat(const char *, ...);
	static AgString fromInt64(long long, long);
	static AgString fromUInt64(unsigned long long, long);
	static AgString toUpperCase(const AgStringRef &);
	static AgString toLowerCase(const AgStringRef &);
	static long caselessCompare(const AgStringRef &, const AgStringRef &);
	long find(AgStringRef, unsigned long);
	long rfind(AgStringRef, unsigned long);
	AgString & erase(unsigned long, unsigned long);
	AgString & replace(AgStringRef, AgStringRef, long);
	AgString & replace(unsigned long, long, AgStringRef);
	const char & operator[](unsigned long);
private:
	void _allocate(long);
	void _reallocate(long);
	void _discard();
	void _copy(const std::string &);
	void _copy(const AgString &);
	void _copy(const char *, long);
	AgString getFinalPathFromPath(const AgString &);
	long m_length; // 0x0
	char * m_text; // 0x8
};
class AgStringKey
{
	enum StoreKey
	{
		Store = 0,
	};
public:
	AgStringKey(const char *, AgStringKey::StoreKey);
	AgStringKey(const AgStringRef &, AgStringKey::StoreKey);
	AgStringKey(const AgString &, AgStringKey::StoreKey);
	AgStringKey(const AgStringRef &);
	AgStringKey(const AgString &);
	AgStringKey(const AgStringKey &);
	operator const class AgStringRef &();
	bool operator<(const AgStringKey &);
	bool operator==(const AgStringKey &);
private:
	AgString m_string; // 0x0
	AgStringRef m_stringRef; // 0x10
public:
	~AgStringKey();
	AgStringKey & operator=(const AgStringKey &);
};