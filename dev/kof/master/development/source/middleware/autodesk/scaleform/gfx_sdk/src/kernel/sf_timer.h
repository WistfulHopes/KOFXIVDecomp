#pragma once

class Scaleform::Timer
{
	enum <unnamed-enum-MsPerSecond>
	{
		MsPerSecond = 1000,
		MksPerMs = 1000,
		MksPerSecond = 1000000,
	};
public:
	static unsigned long GetTicksMs();
	static unsigned long long GetTicks();
	static unsigned long long GetProfileTicks();
	static double GetProfileSeconds();
	static unsigned long long GetRawTicks();
	static unsigned long long GetRawFrequency();
	static double RawTicksToSeconds(unsigned long long);
	class TimerOverride;
	static void SetTimerOverride(Scaleform::Timer::TimerOverride *);
	static Scaleform::Timer::TimerOverride * GetTimerOverride();
private:
	static void initializeTimerSystem();
	static void shutdownTimerSystem();
	static unsigned long long GetRawTicksNoOverride();
	static unsigned long long GetRawFreqNoOverride();
	static unsigned long long StartRawTicks; // 0xFFFFFFFFFFFFFFFF
	static unsigned long long RawFrequency; // 0xFFFFFFFFFFFFFFFF
};
class Scaleform::Timer::TimerOverride
{
public:
	~TimerOverride();
	unsigned long GetTicksMs(unsigned long);
	unsigned long long GetRawTicks(unsigned long long);
	unsigned long long GetRawFrequency(unsigned long long);
	TimerOverride(const Scaleform::Timer::TimerOverride &);
	TimerOverride();
	Scaleform::Timer::TimerOverride & operator=(const Scaleform::Timer::TimerOverride &);
};