#pragma once

class extension::ExWaitCondition
{
public:
	ExWaitCondition();
private:
	ExWaitCondition(const extension::ExWaitCondition &);
	extension::ExWaitCondition & operator=(extension::ExWaitCondition &);
public:
	~ExWaitCondition();
	void notifyOne();
	void notifyAll();
private:
	AgConditionVariable m_conditionVariable; // 0x0
	AgMutex m_mutex; // 0x10
};
extension::ExWaitCondition::~ExWaitCondition(); // 0x140245F40