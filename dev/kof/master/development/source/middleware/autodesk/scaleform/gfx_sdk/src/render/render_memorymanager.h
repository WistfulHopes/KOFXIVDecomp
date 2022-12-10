#pragma once

class Scaleform::RefCountBase<Scaleform::Render::MemoryManager,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::Render::MemoryManager,2>(Scaleform::RefCountBase<Scaleform::Render::MemoryManager,2> &);
	RefCountBase<Scaleform::Render::MemoryManager,2>(const Scaleform::RefCountBase<Scaleform::Render::MemoryManager,2> &);
	RefCountBase<Scaleform::Render::MemoryManager,2>();
	virtual ~RefCountBase<Scaleform::Render::MemoryManager,2>();
	Scaleform::RefCountBase<Scaleform::Render::MemoryManager,2> & operator=(Scaleform::RefCountBase<Scaleform::Render::MemoryManager,2> &);
	Scaleform::RefCountBase<Scaleform::Render::MemoryManager,2> & operator=(const Scaleform::RefCountBase<Scaleform::Render::MemoryManager,2> &);
};
class Scaleform::Render::MemoryManager :
	Scaleform::RefCountBase<Scaleform::Render::MemoryManager,2>
{
public:
	virtual ~MemoryManager();
	void * Alloc(unsigned long long, unsigned long long, Scaleform::Render::MemoryType, unsigned long);
	void Free(void *, unsigned long long);
	MemoryManager(const Scaleform::Render::MemoryManager &);
	MemoryManager();
	Scaleform::Render::MemoryManager & operator=(const Scaleform::Render::MemoryManager &);
};