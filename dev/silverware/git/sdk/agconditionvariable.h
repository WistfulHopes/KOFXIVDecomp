#pragma once

struct AgConditionVariableInternalData
{
	AgConditionVariableInternalData();
	AgDetail::Win32::CONDITION_VARIABLE m_conditionVariable; // 0x0
};
class AgConditionVariable
{
private:
	AgConditionVariable(const AgConditionVariable &);
public:
	AgConditionVariable(AgMutex &);
	~AgConditionVariable();
	void signalOne();
	void signalAll();
	long wait(long);
private:
	AgConditionVariable & operator=(const AgConditionVariable &);
	AgMutex & m_mutex; // 0x0
	AgConditionVariableInternalData m_data; // 0x8
};