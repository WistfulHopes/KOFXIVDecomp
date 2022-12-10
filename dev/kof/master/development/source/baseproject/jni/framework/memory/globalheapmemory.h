#pragma once

class Fw::GlobalHeapMemory :
	Fw::VariableHeapMemoryBase
{
public:
	GlobalHeapMemory(const Fw::GlobalHeapMemory &);
	GlobalHeapMemory();
	virtual ~GlobalHeapMemory();
	static bool create(const char *);
	virtual void destroy();
	virtual unsigned long getUsedSize();
	virtual unsigned long getAllocatableSize();
	static Fw::GlobalHeapMemory & GetInstance();
private:
	void destroyLocal();
public:
	Fw::GlobalHeapMemory & operator=(const Fw::GlobalHeapMemory &);
};