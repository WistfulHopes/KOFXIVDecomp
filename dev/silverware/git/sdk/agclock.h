#pragma once

class AgClock
{
public:
	AgClock(double);
	void tick();
	void addDeltaTime(double);
	double getElapsedFrameTime();
	double getTotalElapsedTime();
	void setMaxElapsedFrameTime(double);
	double getMaxElapsedFrameTime();
	void reset();
	static double getSystemTime();
private:
	double m_elapsedFrameTime; // 0x0
	double m_totalElapsedTime; // 0x8
	double m_maxElapsedFrameTime; // 0x10
	double m_time; // 0x18
	double m_conversion; // 0x20
public:
	void __dflt_ctor_closure();
};
struct AgScopeTimer
{
	double m_startTime; // 0x0
	double m_endTime; // 0x8
	const char * m_name; // 0x10
	AgScopeTimer(const char *);
	~AgScopeTimer();
	void __dflt_ctor_closure();
};