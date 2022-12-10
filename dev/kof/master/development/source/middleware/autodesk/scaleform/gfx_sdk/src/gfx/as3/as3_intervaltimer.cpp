
Scaleform::GFx::AS3::IntervalTimer::IntervalTimer(const Scaleform::GFx::AS3::Value & function, unsigned long delay, bool timeOut); // 0x14044EED0
Scaleform::GFx::AS3::IntervalTimer::IntervalTimer(Scaleform::GFx::AS3::Instances::fl_utils::Timer * timerObj, unsigned long delay, unsigned long curCount, unsigned long repeatCount); // 0x14044EFB0
void Scaleform::GFx::AS3::IntervalTimer::SetArguments(unsigned long num, const Scaleform::GFx::AS3::Value * argArr); // 0x1404A7C30
void Scaleform::GFx::AS3::IntervalTimer::Start(Scaleform::GFx::MovieImpl * proot); // 0x1404AD620
bool Scaleform::GFx::AS3::IntervalTimer::Invoke(Scaleform::GFx::MovieImpl * proot, float frameTime); // 0x14048E5D0
unsigned long Scaleform::GFx::AS3::IntervalTimer::GetNextInterval(unsigned long long currentTime, unsigned long long frameTime); // 0x140487680
void Scaleform::GFx::AS3::IntervalTimer::Clear(); // 0x140465980
bool Scaleform::GFx::AS3::IntervalTimer::ClearFor(Scaleform::GFx::MovieImpl * proot, Scaleform::GFx::MovieDefImpl * defimpl); // 0x140465B50