#pragma once

class Scaleform::RefCountBase<Scaleform::Render::ThreadCommand,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::Render::ThreadCommand,2>(Scaleform::RefCountBase<Scaleform::Render::ThreadCommand,2> &);
	RefCountBase<Scaleform::Render::ThreadCommand,2>(const Scaleform::RefCountBase<Scaleform::Render::ThreadCommand,2> &);
	RefCountBase<Scaleform::Render::ThreadCommand,2>();
	virtual ~RefCountBase<Scaleform::Render::ThreadCommand,2>();
	Scaleform::RefCountBase<Scaleform::Render::ThreadCommand,2> & operator=(Scaleform::RefCountBase<Scaleform::Render::ThreadCommand,2> &);
	Scaleform::RefCountBase<Scaleform::Render::ThreadCommand,2> & operator=(const Scaleform::RefCountBase<Scaleform::Render::ThreadCommand,2> &);
};
class Scaleform::Render::ThreadCommand :
	Scaleform::RefCountBase<Scaleform::Render::ThreadCommand,2>
{
public:
	void Execute();
	ThreadCommand(Scaleform::Render::ThreadCommand &);
	ThreadCommand(const Scaleform::Render::ThreadCommand &);
	ThreadCommand();
	virtual ~ThreadCommand();
	Scaleform::Render::ThreadCommand & operator=(Scaleform::Render::ThreadCommand &);
	Scaleform::Render::ThreadCommand & operator=(const Scaleform::Render::ThreadCommand &);
};
struct Scaleform::Render::Interfaces
{
	Scaleform::Render::TextureManager * pTextureManager; // 0x0
	Scaleform::Render::HAL * pHAL; // 0x8
	unsigned long RenderThreadID; // 0x10
	Interfaces(Scaleform::Render::TextureManager *, Scaleform::Render::HAL *, unsigned long);
	void Clear();
	void __dflt_ctor_closure();
};
class Scaleform::Render::ThreadCommandQueue
{
public:
	~ThreadCommandQueue();
	void PushThreadCommand(Scaleform::Render::ThreadCommand *);
	void GetRenderInterfaces(Scaleform::Render::Interfaces *);
	ThreadCommandQueue(const Scaleform::Render::ThreadCommandQueue &);
	ThreadCommandQueue();
	Scaleform::Render::ThreadCommandQueue & operator=(const Scaleform::Render::ThreadCommandQueue &);
};
void Scaleform::Render::ThreadCommandQueue::GetRenderInterfaces(Scaleform::Render::Interfaces * p); // 0x14027E1F0
class Scaleform::Render::SingleThreadCommandQueue :
	Scaleform::Render::ThreadCommandQueue
{
public:
	SingleThreadCommandQueue(const Scaleform::Render::SingleThreadCommandQueue &);
	SingleThreadCommandQueue();
	virtual ~SingleThreadCommandQueue();
	virtual void PushThreadCommand(Scaleform::Render::ThreadCommand *);
	virtual void GetRenderInterfaces(Scaleform::Render::Interfaces *);
	Scaleform::Render::HAL * pHAL; // 0x8
	Scaleform::Render::SingleThreadCommandQueue & operator=(const Scaleform::Render::SingleThreadCommandQueue &);
};
Scaleform::Render::SingleThreadCommandQueue::~SingleThreadCommandQueue(); // 0x14027E230