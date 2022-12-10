#pragma once

class Scaleform::GFx::AS3::AvmLoader :
	Scaleform::GFx::DisplayObjContainer,
	Scaleform::GFx::AS3::AvmDisplayObjContainer
{
private:
	Scaleform::GFx::AS3::AvmLoader * GetThis();
public:
	AvmLoader(const Scaleform::GFx::AS3::AvmLoader &);
	AvmLoader(Scaleform::GFx::ASMovieRootBase *, Scaleform::GFx::MovieDefImpl *, Scaleform::GFx::InteractiveObject *, Scaleform::GFx::ResourceId);
	virtual ~AvmLoader();
	virtual const char * GetDefaultASClassName();
	virtual Scaleform::String & GetASClassName(Scaleform::String *);
	virtual Scaleform::GFx::CharacterDef * GetCharacterDef();
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
	Scaleform::GFx::AS3::AvmLoader & operator=(const Scaleform::GFx::AS3::AvmLoader &);
};
const char * Scaleform::GFx::AS3::AvmLoader::GetDefaultASClassName(); // 0x140484F80
Scaleform::String & Scaleform::GFx::AS3::AvmLoader::GetASClassName(Scaleform::String * className); // 0x140482600