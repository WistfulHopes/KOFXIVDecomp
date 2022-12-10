#pragma once

class AgCondition
{
public:
	AgCondition();
	~AgCondition();
	void signalOne();
	void signalAll();
	long wait(const AgMutex *, long);
	long wait(const AgMutex &, long);
	long wait(long);
private:
	AgMutex m_mutex; // 0x0
	AgConditionVariable m_conditionVariable; // 0x28
};
void AgCondition::signalAll(); // 0x14069E210
long AgCondition::wait(const AgMutex * mutex, long timeoutMS); // 0x1400636E0