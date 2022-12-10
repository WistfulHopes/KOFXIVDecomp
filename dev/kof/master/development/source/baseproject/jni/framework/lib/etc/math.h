#pragma once

class Math
{
private:
	static long atan0(long, long);
	static long atan1(long, long);
public:
	static float atan2(float, float);
private:
	static long atan2(long, long);
public:
	static const long E; // 0xFFFFFFFFFFFFFFFF
	static const float PI; // 0xFFFFFFFFFFFFFFFF
	static float abs(float);
	static long long abs(long long);
	static long abs(long);
	static float max_(float, float);
	static long long max_(long long, long long);
	static long max_(long, long);
	static float min_(float, float);
	static long long min_(long long, long long);
	static long min_(long, long);
	static float sin(float);
	static long sin(long);
	static long sin16(long);
	static float cos(float);
	static long cos(long);
	static long cos16(long);
	static float tan(float);
	static long tan(long);
	static long tan16(long);
	static float atan(float, float);
	static long atan(long, long);
	static long acos16(long);
	static float acos(float);
	static float sqrt(float);
	static unsigned long sqrt(unsigned long long);
	static unsigned long sqrt(unsigned long);
	static float t_sqrtf(float);
	static float toRadians(float);
	static long toRadians(long);
	static float fixToRadians(float);
	static float toDegrees(float);
	static long toDegrees(long);
	static unsigned long calcCRC(unsigned char *, long);
	static void mul(float *, float *, float *);
	static void mul(long *, long *, long *);
	static void mul33(float *, float *, float *);
	static float lerp_(float, float, float);
};