#pragma once

class AgPerformanceCounter
{
public:
	AgPerformanceCounter(unsigned long);
	~AgPerformanceCounter();
	void start();
	void stop(long);
	void add(float);
	void swap();
	void update();
	void reset();
	float getLastTime();
	float getAverageTime();
	float getMinTime();
	float getMaxTime();
private:
	double m_startTime; // 0x0
	unsigned long m_frameCount; // 0x8
	float m_currentDeltaTime; // 0xC
	unsigned long m_deltaIndex; // 0x10
	float * m_deltaTime; // 0x18
	float m_lastTime; // 0x20
	float m_averageTime; // 0x24
	float m_minTime; // 0x28
	float m_maxTime; // 0x2C
public:
	void __dflt_ctor_closure();
};
AgPerformanceCounter::~AgPerformanceCounter(); // 0x140658270
class AgScopedPerformanceCounter
{
public:
	AgScopedPerformanceCounter(AgPerformanceCounter &, long);
	~AgScopedPerformanceCounter();
private:
	AgPerformanceCounter & m_counter; // 0x0
	long m_step; // 0x8
	void operator=(const AgScopedPerformanceCounter &);
};
class AgDummyPerformanceCounter
{
public:
	AgDummyPerformanceCounter(unsigned long);
	void start();
	void stop(long);
	void add(float);
	void swap();
	void update();
	void reset();
	float getLastTime();
	float getAverageTime();
	float getMinTime();
	float getMaxTime();
	void __dflt_ctor_closure();
};
class AgDummyScopedPerformanceCounter
{
public:
	AgDummyScopedPerformanceCounter(AgDummyPerformanceCounter &, long);
};