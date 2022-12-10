#pragma once

class AgMath
{
public:
	static void initialize();
	static void cleanup();
	static double degToRad(double);
	static float degToRad(float);
	static double radToDeg(double);
	static float radToDeg(float);
	static float sin(float);
	static float cos(float);
	static float sine(float);
	static float cose(float);
	static float sqrt(float);
	static float invSqrt(float);
	static float log(float);
	static float log2(float);
	static float log10(float);
	static float pow(float, float);
	static unsigned long long ceilpow2(unsigned long long);
	static unsigned long ceilpow2(unsigned long);
	static long ispower2(unsigned long long);
	static long ispower2(unsigned long);
	static unsigned long long lowestbit(unsigned long long);
	static unsigned long lowestbit(unsigned long);
	static unsigned long countTrailingZeros(unsigned long);
	static float noise2(float, float);
	static float perlin2(float, float, float, long, long);
	static float calcResolutionScaleInAspect(const AgVector2 &, const AgVector2 &);
	static unsigned long getRandMax();
	static unsigned long rand();
private:
	static float ms_sinLUT[4096]; // 0xFFFFFFFFFFFFFFFF
};