#pragma once

class Scaleform::GFx::AS3::TR::State
{
private:
	State(const Scaleform::GFx::AS3::TR::State &);
public:
	State(Scaleform::MemoryHeap *);
	unsigned long GetRegNum();
	unsigned long GetOpStackNum();
	unsigned long GetScopeStackNum();
	void ReserveOpStack(unsigned long long);
	void ResizeOpStack(unsigned long);
	void ReserveScopeStack(unsigned long long);
	void ResizeScopeStack(unsigned long);
	void ResizeRegisters(unsigned long);
	Scaleform::GFx::AS3::TR::Def * GetOpStack(unsigned long long);
	Scaleform::GFx::AS3::TR::Def * * GetOpStack();
	Scaleform::GFx::AS3::TR::Def * BackOpStack();
	Scaleform::GFx::AS3::TR::Def * BackOpStack2nd();
	void SetBackOpStack(Scaleform::GFx::AS3::TR::Def *);
	void PopOpStack(unsigned long);
	Scaleform::GFx::AS3::TR::Def * PopOpStack();
	void PushOpStack(Scaleform::GFx::AS3::TR::Def *);
	void SwapOpStack();
	Scaleform::GFx::AS3::TR::Def * GetScopeStack(unsigned long long);
	Scaleform::GFx::AS3::TR::Def * * GetScopeStack();
	void PopScopeStack(unsigned long);
	Scaleform::GFx::AS3::TR::Def * PopScopeStack();
	void PushScopeStack(Scaleform::GFx::AS3::TR::Def *);
	void SetRegister(unsigned long long, Scaleform::GFx::AS3::TR::Def *);
	Scaleform::GFx::AS3::TR::Def * * GetRegisters();
	Scaleform::GFx::AS3::TR::Def * GetRegister(unsigned long long);
	void Clear();
	Scaleform::GFx::AS3::TR::Def * GetEffect();
	Scaleform::GFx::AS3::TR::Def * * GetEffectPtr();
	void SetEffect(Scaleform::GFx::AS3::TR::Def *);
private:
	Scaleform::GFx::AS3::TR::State & operator=(const Scaleform::GFx::AS3::TR::State &);
	unsigned long MaxRegisters; // 0x0
	unsigned long MaxOpStack; // 0x4
	unsigned long MaxScopeStack; // 0x8
	unsigned long NumRegisters; // 0xC
	unsigned long NumOpStack; // 0x10
	unsigned long NumScopeStack; // 0x14
	Scaleform::GFx::AS3::TR::Def * Effect; // 0x18
	Scaleform::ArrayDH_POD<Scaleform::GFx::AS3::TR::Def *,2,Scaleform::ArrayDefaultPolicy> Registers; // 0x20
	Scaleform::ArrayDH_POD<Scaleform::GFx::AS3::TR::Def *,2,Scaleform::ArrayDefaultPolicy> OpStack; // 0x40
	Scaleform::ArrayDH_POD<Scaleform::GFx::AS3::TR::Def *,2,Scaleform::ArrayDefaultPolicy> ScopeStack; // 0x60
public:
	~State();
};
void Scaleform::GFx::AS3::TR::State::PushOpStack(Scaleform::GFx::AS3::TR::Def * v); // 0x14049F8D0
void Scaleform::GFx::AS3::TR::State::PushScopeStack(Scaleform::GFx::AS3::TR::Def * v); // 0x14049F970
class Scaleform::ArrayDH_POD<Scaleform::GFx::AS3::TR::Def *,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayDataDH<Scaleform::GFx::AS3::TR::Def *,Scaleform::AllocatorDH_POD<Scaleform::GFx::AS3::TR::Def *,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef Scaleform::GFx::AS3::TR::Def ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayDH_POD<Scaleform::GFx::AS3::TR::Def *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDH_POD<Scaleform::GFx::AS3::TR::Def *,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayDH_POD<Scaleform::GFx::AS3::TR::Def *,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, const Scaleform::ArrayDefaultPolicy &);
	ArrayDH_POD<Scaleform::GFx::AS3::TR::Def *,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, long);
	ArrayDH_POD<Scaleform::GFx::AS3::TR::Def *,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *);
	const Scaleform::ArrayDH_POD<Scaleform::GFx::AS3::TR::Def *,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayDH_POD<Scaleform::GFx::AS3::TR::Def *,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayDH_POD<Scaleform::GFx::AS3::TR::Def *,2,Scaleform::ArrayDefaultPolicy>();
};