#pragma once

class Scaleform::GFx::AS3::IntervalTimer :
	Scaleform::GFx::ASIntervalTimerIntf
{
private:
	Scaleform::GFx::AS3::Value Function; // 0x10
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_utils::Timer> TimerObj; // 0x30
	Scaleform::ArrayLH<Scaleform::GFx::AS3::Value,2,Scaleform::ArrayDefaultPolicy> Params; // 0x38
	unsigned long CurrentCount; // 0x50
	unsigned long RepeatCount; // 0x54
	unsigned long Interval; // 0x58
	unsigned long long InvokeTime; // 0x60
	long Id; // 0x68
	bool Active; // 0x6C
	bool Timeout; // 0x6D
	unsigned long GetNextInterval(unsigned long long, unsigned long long);
public:
	IntervalTimer(Scaleform::GFx::AS3::IntervalTimer &);
	IntervalTimer(const Scaleform::GFx::AS3::IntervalTimer &);
	IntervalTimer(Scaleform::GFx::AS3::Instances::fl_utils::Timer *, unsigned long, unsigned long, unsigned long);
	IntervalTimer(const Scaleform::GFx::AS3::Value &, unsigned long, bool);
	virtual void Start(Scaleform::GFx::MovieImpl *);
	virtual bool Invoke(Scaleform::GFx::MovieImpl *, float);
	virtual bool IsActive();
	virtual void Clear();
	virtual bool ClearFor(Scaleform::GFx::MovieImpl *, Scaleform::GFx::MovieDefImpl *);
	virtual unsigned long long GetNextInvokeTime();
	virtual void SetId(long);
	virtual long GetId();
	void SetArguments(unsigned long, const Scaleform::GFx::AS3::Value *);
	unsigned long GetCurrentCount();
	virtual ~IntervalTimer();
	Scaleform::GFx::AS3::IntervalTimer & operator=(Scaleform::GFx::AS3::IntervalTimer &);
	Scaleform::GFx::AS3::IntervalTimer & operator=(const Scaleform::GFx::AS3::IntervalTimer &);
};
bool Scaleform::GFx::AS3::IntervalTimer::IsActive(); // 0x14048F660
unsigned long long Scaleform::GFx::AS3::IntervalTimer::GetNextInvokeTime(); // 0x14012A870
void Scaleform::GFx::AS3::IntervalTimer::SetId(long id); // 0x1404A8330
unsigned long Scaleform::GFx::AS3::Traits::GetFixedMemSize(); // 0x140270B60