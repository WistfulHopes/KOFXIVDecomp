#pragma once

class AgRandom
{
public:
	unsigned long long u; // 0x0
	unsigned long long v; // 0x8
	unsigned long long w; // 0x10
	AgRandom(unsigned long long);
	AgRandom();
	void init(unsigned long long);
	unsigned long long getInt64();
	double getFloat64();
};
class AgQuickRandom
{
private:
	static unsigned long long v; // 0xFFFFFFFFFFFFFFFF
public:
	static void init(unsigned long long);
	static unsigned long long getInt64();
	static double getFloat64();
};