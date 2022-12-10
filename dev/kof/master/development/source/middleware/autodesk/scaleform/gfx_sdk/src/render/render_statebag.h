#pragma once

enum Scaleform::Render::StateType
{
	State_None = 0,
	State_BlendMode = 1,
	State_Scale9 = 2,
	State_Filter = 3,
	State_MaskNode = 4,
	State_ViewMatrix3D = 5,
	State_ProjectionMatrix3D = 6,
	State_UserData = 7,
	State_OrigScale9Parent = 8,
	State_Internal_MaskOwner = 9,
	State_OrigNodeBounds = 10,
	State_Type_Count = 11,
};
class Scaleform::Render::StateData
{
private:
	~StateData();
	class Interface;
	class Interface_Value;
	class Interface_RefCountImpl;
public:
	static void InitDefaultStates_ForceLink();
protected:
	StateData(const Scaleform::Render::StateData &);
	StateData(Scaleform::Render::StateData::Interface *, void *);
	struct ArrayData;
	Scaleform::Render::StateData::Interface * pInterface; // 0x0
	unsigned long long ArraySize; // 0x0
	void * pData; // 0x8
	unsigned long long DataValue; // 0x8
	Scaleform::Render::StateData::ArrayData * pArray; // 0x8
	Scaleform::Render::StateData::Interface * getInterface();
	Scaleform::Render::StateData::Interface * getInterface_Unsafe();
	void initSingleItem(Scaleform::Render::StateData::Interface *, void *);
	void initArrayItem(Scaleform::Render::StateData::Interface *, void *);
	void initArray(Scaleform::Render::StateData::ArrayData *, unsigned long long);
	bool isEmpty();
	bool isSingleItem();
	unsigned long long getArraySize();
	void addRefBag_NotEmpty();
	void destroyBag_NotEmpty();
	void assignBag(const Scaleform::Render::StateData &);
public:
	void __dflt_ctor_closure();
};
class Scaleform::Render::StateData::Interface
{
private:
	Scaleform::Render::StateType Type; // 0x8
	Scaleform::Render::StateData::Interface * getThis();
public:
	Interface(const Scaleform::Render::StateData::Interface &);
	Interface(Scaleform::Render::StateType);
	~Interface();
	Scaleform::Render::StateType GetType();
	static Scaleform::Render::StateData::Interface * FromStateType(Scaleform::Render::StateType);
	enum RefBehaviour
	{
		Ref_All = 0,
		Ref_NoTreeNode = 1,
		Ref_ReleaseTreeNodeOnly = 2,
	};
	void AddRef(void *, Scaleform::Render::StateData::Interface::RefBehaviour);
	void Release(void *, Scaleform::Render::StateData::Interface::RefBehaviour);
	Scaleform::Render::StateData::Interface & operator=(const Scaleform::Render::StateData::Interface &);
};
class Scaleform::Render::StateData::Interface_Value :
	Scaleform::Render::StateData::Interface
{
public:
	Interface_Value(Scaleform::Render::StateData::Interface_Value &);
	Interface_Value(const Scaleform::Render::StateData::Interface_Value &);
	Interface_Value(Scaleform::Render::StateType);
	virtual void AddRef(void *, Scaleform::Render::StateData::Interface::RefBehaviour);
	virtual void Release(void *, Scaleform::Render::StateData::Interface::RefBehaviour);
	virtual ~Interface_Value();
	Scaleform::Render::StateData::Interface_Value & operator=(Scaleform::Render::StateData::Interface_Value &);
	Scaleform::Render::StateData::Interface_Value & operator=(const Scaleform::Render::StateData::Interface_Value &);
};
class Scaleform::Render::StateData::Interface_RefCountImpl :
	Scaleform::Render::StateData::Interface
{
public:
	Interface_RefCountImpl(Scaleform::Render::StateData::Interface_RefCountImpl &);
	Interface_RefCountImpl(const Scaleform::Render::StateData::Interface_RefCountImpl &);
	Interface_RefCountImpl(Scaleform::Render::StateType);
	virtual void AddRef(void *, Scaleform::Render::StateData::Interface::RefBehaviour);
	virtual void Release(void *, Scaleform::Render::StateData::Interface::RefBehaviour);
	virtual ~Interface_RefCountImpl();
	Scaleform::Render::StateData::Interface_RefCountImpl & operator=(Scaleform::Render::StateData::Interface_RefCountImpl &);
	Scaleform::Render::StateData::Interface_RefCountImpl & operator=(const Scaleform::Render::StateData::Interface_RefCountImpl &);
};
void Scaleform::Render::StateData::Interface_RefCountImpl::AddRef(void * data, Scaleform::Render::StateData::Interface::RefBehaviour __formal); // 0x140345150
void Scaleform::Render::StateData::Interface_RefCountImpl::Release(void * data, Scaleform::Render::StateData::Interface::RefBehaviour b); // 0x140393680
struct Scaleform::Render::StateData::ArrayData
{
	volatile long RefCount; // 0x0
	void AddRef();
	void Release(unsigned long long);
	Scaleform::Render::State * GetStates();
	ArrayData(Scaleform::Render::StateData::ArrayData &);
	ArrayData(const Scaleform::Render::StateData::ArrayData &);
	Scaleform::Render::StateData::ArrayData & operator=(Scaleform::Render::StateData::ArrayData &);
	Scaleform::Render::StateData::ArrayData & operator=(const Scaleform::Render::StateData::ArrayData &);
};
class Scaleform::Render::State :
	Scaleform::Render::StateData
{
public:
	Scaleform::Render::StateData::Interface * GetInterface();
	void * GetData();
	Scaleform::Render::StateType GetType();
	enum NoAddRefType
	{
		NoAddRef = 0,
	};
	State(const Scaleform::Render::State &);
	State(Scaleform::Render::StateData::Interface *, void *);
	State(Scaleform::Render::StateData::Interface *, void *, Scaleform::Render::State::NoAddRefType);
	~State();
};
class Scaleform::Render::StateBag :
	protected Scaleform::Render::StateData
{
public:
	StateBag(const Scaleform::Render::StateBag &);
	StateBag();
	~StateBag();
	void operator=(const Scaleform::Render::StateBag &);
	const Scaleform::Render::State * GetState(Scaleform::Render::StateType);
	void SetStateVoid(Scaleform::Render::StateData::Interface *, void *);
	void SetState(const Scaleform::Render::State &);
	void SetState(Scaleform::Render::StateData::Interface *, Scaleform::RefCountImpl *);
	bool RemoveState(Scaleform::Render::StateType);
	bool IsEmpty();
	unsigned long long GetSize();
	const Scaleform::Render::State & GetAt(unsigned long long);
	const Scaleform::Render::State & operator[](unsigned long long);
	void ReleaseNodes();
protected:
	Scaleform::Render::StateData::ArrayData * allocData(Scaleform::Render::State *, unsigned long long, unsigned long long);
	Scaleform::Render::StateData::ArrayData * allocData2(Scaleform::Render::State *, unsigned long long, Scaleform::Render::State *, unsigned long long);
	static void copyArrayAddRef(Scaleform::Render::State *, Scaleform::Render::State *, unsigned long long);
	const Scaleform::Render::State * toState();
	Scaleform::Render::State * toState();
};