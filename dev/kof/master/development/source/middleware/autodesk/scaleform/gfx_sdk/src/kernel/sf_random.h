#pragma once

class Scaleform::Alg::Random
{
public:
	static unsigned long NextRandom();
	static void SeedRandom(unsigned long);
	static float GetUnitFloat();
	enum RandomConstants
	{
		Random_SeedCount = 8,
	};
	class Generator;
};
class Scaleform::Alg::Random::Generator
{
public:
	unsigned long Q[8]; // 0x0
	unsigned long C; // 0x20
	unsigned long I; // 0x24
	Generator();
	void SeedRandom(unsigned long);
	unsigned long NextRandom();
	float GetUnitFloat();
};