#pragma once

#include "agstringref.h"

class AgHash
{
private:
	unsigned long m_key; // 0x0
	static unsigned long _hashfunc(const unsigned char *, unsigned long);
public:
	AgHash(const AgStringRef &);
	AgHash(const unsigned char *, unsigned long);
	AgHash(unsigned long long);
	AgHash(unsigned long);
	AgHash();
	unsigned long operator unsigned int();
	unsigned long operator unsigned int();
	static AgHash mix(AgHash, AgHash);
};
struct std::hash<AgHash>
{
	unsigned long long operator()(const AgHash &);
};