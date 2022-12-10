#pragma once

class Scaleform::GFx::AS3::AbcDataBuffer :
	Scaleform::RefCountBase<Scaleform::GFx::AS3::AbcDataBuffer,263>
{
public:
	Scaleform::String Name; // 0x10
	unsigned long DataSize; // 0x18
	unsigned char Flags; // 0x1C
	enum <unnamed-enum-Flags_None>
	{
		Flags_None = 0,
		Flags_LazyInit = 1,
	};
	Scaleform::StringLH FileName; // 0x20
	unsigned char Data[1]; // 0x28
	AbcDataBuffer(Scaleform::GFx::AS3::AbcDataBuffer &);
	AbcDataBuffer(const Scaleform::GFx::AS3::AbcDataBuffer &);
	AbcDataBuffer(const Scaleform::String &, unsigned long, unsigned long);
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
	static void * operator new(unsigned long long, void *);
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
	static void operator delete(void *, void *);
	bool IsNull();
	unsigned long GetLength();
	const unsigned char * GetBufferPtr();
	const char * GetFileName();
	virtual ~AbcDataBuffer();
	Scaleform::GFx::AS3::AbcDataBuffer & operator=(Scaleform::GFx::AS3::AbcDataBuffer &);
	Scaleform::GFx::AS3::AbcDataBuffer & operator=(const Scaleform::GFx::AS3::AbcDataBuffer &);
};
class Scaleform::RefCountBase<Scaleform::GFx::AS3::AbcDataBuffer,263> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,263>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 263,
	};
public:
	RefCountBase<Scaleform::GFx::AS3::AbcDataBuffer,263>(Scaleform::RefCountBase<Scaleform::GFx::AS3::AbcDataBuffer,263> &);
	RefCountBase<Scaleform::GFx::AS3::AbcDataBuffer,263>(const Scaleform::RefCountBase<Scaleform::GFx::AS3::AbcDataBuffer,263> &);
	RefCountBase<Scaleform::GFx::AS3::AbcDataBuffer,263>();
	virtual ~RefCountBase<Scaleform::GFx::AS3::AbcDataBuffer,263>();
	Scaleform::RefCountBase<Scaleform::GFx::AS3::AbcDataBuffer,263> & operator=(Scaleform::RefCountBase<Scaleform::GFx::AS3::AbcDataBuffer,263> &);
	Scaleform::RefCountBase<Scaleform::GFx::AS3::AbcDataBuffer,263> & operator=(const Scaleform::RefCountBase<Scaleform::GFx::AS3::AbcDataBuffer,263> &);
};