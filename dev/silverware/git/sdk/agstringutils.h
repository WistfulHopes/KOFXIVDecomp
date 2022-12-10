#pragma once

class AgStringUtils
{
public:
	static long getFirstIndexOf(const char *, unsigned long, const char *, unsigned long, unsigned long);
	static long getFirstIndexOf(const char *, unsigned long, char, unsigned long);
	static long getLastIndexOf(const char *, unsigned long, const char *, unsigned long, unsigned long);
	static long getLastIndexOf(const char *, unsigned long, char, unsigned long);
	static AgStringRef getSubString(const char *, unsigned long, unsigned long, long);
	static std::string getStdString(const char *, unsigned long);
	static std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > getStdWString(const char *, unsigned long);
	static long compare(const char *, unsigned long, const char *, unsigned long);
	static long equal(const char *, unsigned long, const char *, unsigned long);
	static long long getInt64(const char *, unsigned long);
	static unsigned long long getUInt64(const char *, unsigned long);
	static long caselessCompare(const char *, unsigned long, const char *, unsigned long);
	static AgString toUpperCase(const char *, unsigned long);
	static AgString toLowerCase(const char *, unsigned long);
	static AgString replace(const char *, unsigned long, unsigned long, long, const char *, unsigned long);
	static AgString erase(const char *, unsigned long, unsigned long, unsigned long);
	static AgString append(const char *, unsigned long, const char *, unsigned long);
	static char * allocateString(unsigned long);
	static void freeString(char *);
	static long format(char *, long, const char *, char *);
	static long format(char *, long, const char *, ...);
	static long formatLength(const char *, char *);
};