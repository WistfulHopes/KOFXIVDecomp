#pragma once

class Scaleform::ThreadCheckBase
{
public:
	ThreadCheckBase(Scaleform::ThreadCheckBase &);
	ThreadCheckBase(const Scaleform::ThreadCheckBase &);
	ThreadCheckBase(unsigned long);
	bool CheckValidThreadAccess(unsigned long);
	unsigned long GetAccessThreadId();
	void SetAccessThreadId(unsigned long);
protected:
	void enforceValidThreadAccess();
private:
	Scaleform::AtomicValueBase<unsigned long> AccessThread; // 0x0
public:
	Scaleform::ThreadCheckBase & operator=(Scaleform::ThreadCheckBase &);
	Scaleform::ThreadCheckBase & operator=(const Scaleform::ThreadCheckBase &);
	void __dflt_ctor_closure();
};