#pragma once

class RandomMT
{
	enum <unnamed-enum-X0D_N>
	{
		X0D_N = 624,
	};
public:
	unsigned long mt[624]; // 0x0
	long mti; // 0x9C0
	RandomMT(unsigned long);
	RandomMT();
	void initialize();
	void setSeed(unsigned long);
	unsigned long getRand32();
	long getRand31();
	long nextInt();
};
RandomMT::RandomMT(); // 0x1400981B0