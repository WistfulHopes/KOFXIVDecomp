#pragma once

class Scaleform::GFx::AS3::InstanceTraits::Traits :
	Scaleform::GFx::AS3::Traits
{
public:
	Traits(Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace>, Scaleform::GFx::AS3::VM &, const Scaleform::GFx::AS3::InstanceTraits::Traits *, bool, bool);
	virtual ~Traits();
	virtual void ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> *, void(*)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *));
	void MakeObject(Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::InstanceTraits::Traits &);
	void AS3Constructor(const Scaleform::GFx::AS3::Value &, unsigned long &, Scaleform::GFx::AS3::Value *, bool);
	virtual Scaleform::GFx::ASString GetQualifiedName(Scaleform::GFx::AS3::QNameFormat);
	Scaleform::GFx::AS3::CheckResult PreInit(const Scaleform::GFx::AS3::Value &);
	bool SupportsInterface(const Scaleform::GFx::AS3::InstanceTraits::Traits &);
	const Scaleform::GFx::AS3::InstanceTraits::Traits * GetParent();
	const Scaleform::GFx::AS3::Instances::fl::Namespace & GetNamespace();
protected:
	void AddInterfaceSlots2This(Scaleform::GFx::AS3::VMAbcFile *, Scaleform::GFx::AS3::InstanceTraits::Traits &);
private:
	void AddInterfaceSlots(Scaleform::GFx::AS3::VMAbcFile *, Scaleform::GFx::AS3::InstanceTraits::Traits &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> Ns; // 0xC0
};
class Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace>
{
public:
	Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace>(Scaleform::GFx::AS3::Instances::fl::Namespace *, Scaleform::PickType);
	Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace>(Scaleform::GFx::AS3::Instances::fl::Namespace *);
	Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace>();
	Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace> & operator=(const Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace> &);
	Scaleform::GFx::AS3::Instances::fl::Namespace * GetPtr();
	Scaleform::GFx::AS3::Instances::fl::Namespace * operator->();
	Scaleform::GFx::AS3::Instances::fl::Namespace & operator*();
private:
	Scaleform::GFx::AS3::Instances::fl::Namespace * pV; // 0x0
};
class Scaleform::GFx::AS3::InstanceTraits::CTraits :
	Scaleform::GFx::AS3::InstanceTraits::Traits
{
public:
	CTraits(Scaleform::GFx::AS3::VM &, const Scaleform::GFx::AS3::ClassInfo &);
	virtual ~CTraits();
	const Scaleform::GFx::AS3::ClassInfo & GetCI();
	const Scaleform::ArrayLH<Scaleform::GFx::AS3::Multiname,2,Scaleform::ArrayDefaultPolicy> & GetImplementedInterfaces();
	virtual Scaleform::GFx::ASString GetName();
	virtual void ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> *, void(*)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *));
protected:
	void RegisterImplementedInterface(const Scaleform::GFx::AS3::Multiname &);
	virtual void AddInterfaceSlots2This(Scaleform::GFx::AS3::VMAbcFile *, Scaleform::GFx::AS3::InstanceTraits::Traits &);
private:
	static const Scaleform::GFx::AS3::InstanceTraits::Traits * GetParentInstanceTraits(Scaleform::GFx::AS3::VM &, const Scaleform::GFx::AS3::ClassInfo &, Scaleform::GFx::AS3::VMAppDomain &);
	const Scaleform::GFx::AS3::ClassInfo & CI; // 0xC8
	Scaleform::ArrayLH<Scaleform::GFx::AS3::Multiname,2,Scaleform::ArrayDefaultPolicy> ImplementsInterfaces; // 0xD0
};
class Scaleform::ArrayLH<Scaleform::GFx::AS3::Multiname,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::Multiname,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Multiname,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::AS3::Multiname,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::AS3::Multiname,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::AS3::Multiname,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::AS3::Multiname,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::AS3::Multiname,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::AS3::Multiname,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::AS3::Multiname,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::AS3::Multiname,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::GFx::AS3::InstanceTraits::RTraits :
	Scaleform::GFx::AS3::InstanceTraits::Traits
{
public:
	RTraits(Scaleform::GFx::AS3::VM &, const Scaleform::GFx::ASString &, Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace>, const Scaleform::GFx::AS3::InstanceTraits::Traits *, bool, bool);
	virtual ~RTraits();
	const Scaleform::GFx::ASString & GetNameRef();
	virtual Scaleform::GFx::ASString GetName();
	virtual void MakeObject(Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::InstanceTraits::Traits &);
	virtual unsigned long GetFixedMemSize();
private:
	Scaleform::GFx::ASString Name; // 0xC8
};
class Scaleform::GFx::AS3::InstanceTraits::Prototype :
	Scaleform::GFx::AS3::InstanceTraits::CTraits
{
	class InstanceType;
public:
	Prototype(Scaleform::GFx::AS3::VM &, const Scaleform::GFx::AS3::ClassInfo &, Scaleform::GFx::AS3::Class &);
	Prototype(Scaleform::GFx::AS3::VM &, const Scaleform::GFx::AS3::ClassInfo &);
	virtual void MakeObject(Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::InstanceTraits::Traits &);
	virtual ~Prototype();
};
class Scaleform::GFx::AS3::InstanceTraits::Anonimous :
	Scaleform::GFx::AS3::InstanceTraits::Prototype
{
public:
	Anonimous(Scaleform::GFx::AS3::VM &);
	static const Scaleform::GFx::AS3::TypeInfo TInfo; // 0xFFFFFFFFFFFFFFFF
	static const Scaleform::GFx::AS3::ClassInfo CInfo; // 0xFFFFFFFFFFFFFFFF
	virtual ~Anonimous();
};
class Scaleform::GFx::AS3::Instance :
	Scaleform::GFx::AS3::Object
{
	enum <unnamed-enum-IsClass>
	{
		IsClass = 0,
		IsInstance = 1,
	};
private:
	Instance(Scaleform::GFx::AS3::VM &);
public:
	Instance(Scaleform::GFx::AS3::InstanceTraits::Traits &);
	virtual ~Instance();
	static void * operator new(unsigned long long, void *);
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
	static void operator delete(void *, void *);
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
	const Scaleform::GFx::AS3::InstanceTraits::Traits & GetInstanceTraits();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetInstanceTraits();
protected:
	virtual void Construct(Scaleform::GFx::AS3::Value &, unsigned long &, Scaleform::GFx::AS3::Value *, bool, bool);
private:
	virtual void Destroy();
};