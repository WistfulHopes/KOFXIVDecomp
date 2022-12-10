#pragma once

class Scaleform::NewOverrideBase<331>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 331,
	};
public:
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
};
class Scaleform::GFx::AS3::VTable :
	Scaleform::NewOverrideBase<331>
{
	class SelfType;
public:
	VTable(Scaleform::GFx::AS3::VTable &);
	VTable(const Scaleform::GFx::AS3::VTable &);
	VTable(const Scaleform::GFx::AS3::Traits &);
	void GetMethod(Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::AbsoluteIndex, Scaleform::GFx::AS3::Object &, bool);
	const Scaleform::GFx::AS3::Value & GetRaw(Scaleform::GFx::AS3::AbsoluteIndex);
	Scaleform::GFx::AS3::Value GetValue(Scaleform::GFx::AS3::AbsoluteIndex);
	const Scaleform::GFx::AS3::Traits & GetTraits();
	Scaleform::GFx::AS3::VMAbcFile * GetFilePtr();
	class Collector;
	void ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> *, void(*)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *));
private:
	void SetMethod(Scaleform::GFx::AS3::AbsoluteIndex, const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::SlotInfo::BindingType);
	Scaleform::GFx::AS3::AbsoluteIndex AddMethod(const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::SlotInfo::BindingType);
	Scaleform::GFx::AS3::VTable & GetSelf();
	class NamesT;
	class MethodsT;
	const Scaleform::GFx::AS3::Traits * pTraits; // 0x0
	Scaleform::ArrayLH<Scaleform::GFx::AS3::Value,331,Scaleform::ArrayDefaultPolicy> VTMethods; // 0x8
public:
	~VTable();
	Scaleform::GFx::AS3::VTable & operator=(Scaleform::GFx::AS3::VTable &);
	Scaleform::GFx::AS3::VTable & operator=(const Scaleform::GFx::AS3::VTable &);
};
class Scaleform::ArrayLH<Scaleform::GFx::AS3::Value,331,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::Value,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Value,331>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::AS3::Value,331,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::AS3::Value,331,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::AS3::Value,331,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::AS3::Value,331,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::AS3::Value,331,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::AS3::Value,331,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::AS3::Value,331,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::AS3::Value,331,Scaleform::ArrayDefaultPolicy>();
};