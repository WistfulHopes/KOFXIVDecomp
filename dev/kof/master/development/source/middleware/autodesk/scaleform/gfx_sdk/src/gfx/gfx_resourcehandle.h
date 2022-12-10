#pragma once

class Scaleform::GFx::ResourceHandle
{
	enum HandleType
	{
		RH_Pointer = 0,
		RH_Index = 1,
	};
protected:
	Scaleform::GFx::ResourceHandle::HandleType HType; // 0x0
	unsigned long BindIndex; // 0x8
	Scaleform::GFx::Resource * pResource; // 0x8
public:
	ResourceHandle(const Scaleform::GFx::ResourceHandle &);
	ResourceHandle(Scaleform::GFx::ResourceHandle::HandleType, unsigned long);
	ResourceHandle(Scaleform::GFx::Resource *);
	ResourceHandle();
	~ResourceHandle();
	Scaleform::GFx::ResourceHandle & operator=(const Scaleform::GFx::ResourceHandle &);
	bool Equals(const Scaleform::GFx::ResourceHandle &);
	bool IsNull();
	bool IsIndex();
	unsigned long GetBindIndex();
	Scaleform::GFx::Resource * GetResourcePtr();
	Scaleform::GFx::Resource * GetResource(const Scaleform::GFx::ResourceBinding *);
	Scaleform::GFx::Resource * GetResourceAndBinding(Scaleform::GFx::ResourceBinding *, Scaleform::GFx::ResourceBinding * *);
};
struct Scaleform::GFx::ResourceBindData
{
	Scaleform::Ptr<Scaleform::GFx::Resource> pResource; // 0x0
	Scaleform::GFx::ResourceBinding * pBinding; // 0x8
	ResourceBindData(const Scaleform::GFx::ResourceBindData &);
	ResourceBindData();
	Scaleform::GFx::ResourceBindData & operator=(const Scaleform::GFx::ResourceBindData &);
	~ResourceBindData();
};
class Scaleform::GFx::ResourceBinding
{
private:
	Scaleform::MemoryHeap * pHeap; // 0x0
	volatile unsigned long ResourceCount; // 0x8
	Scaleform::GFx::ResourceBindData * pResources; // 0x10
	Scaleform::Lock ResourceLock; // 0x18
	volatile bool Frozen; // 0x48
	Scaleform::GFx::Resource * pOwnerDefRes; // 0x50
	Scaleform::GFx::MovieDefImpl * pOwnerDefImpl; // 0x50
public:
	ResourceBinding(const Scaleform::GFx::ResourceBinding &);
	ResourceBinding(Scaleform::MemoryHeap *);
	~ResourceBinding();
	void Destroy();
	void SetOwnerDefImpl(Scaleform::GFx::MovieDefImpl *);
	Scaleform::GFx::MovieDefImpl * GetOwnerDefImpl();
	Scaleform::GFx::MovieDefImpl * GetOwnerDefImplAddRef();
	void SetBindData(unsigned long, const Scaleform::GFx::ResourceBindData &);
	void GetResourceData_Locked(Scaleform::GFx::ResourceBindData *, unsigned long);
	Scaleform::GFx::ResourceBindData GetResourceData(const Scaleform::GFx::ResourceHandle &);
	void GetResourceData(Scaleform::GFx::ResourceBindData *, unsigned long);
	unsigned long GetResourceCount();
	void Freeze();
	Scaleform::GFx::ResourceBinding & operator=(const Scaleform::GFx::ResourceBinding &);
};
void Scaleform::GFx::ResourceBinding::GetResourceData(Scaleform::GFx::ResourceBindData * pdata, unsigned long index); // 0x140341A10
Scaleform::GFx::Resource * Scaleform::GFx::ResourceHandle::GetResource(const Scaleform::GFx::ResourceBinding * pbinding); // 0x140341960
class Scaleform::GFx::ResourceData
{
	typedef void *DataHandle;
	class DataInterface;
protected:
	Scaleform::GFx::ResourceData::DataInterface * pInterface; // 0x0
	void * hData; // 0x8
public:
	ResourceData(const Scaleform::GFx::ResourceData &);
	ResourceData(Scaleform::GFx::ResourceData::DataInterface *, void *);
	ResourceData();
	~ResourceData();
	Scaleform::GFx::ResourceData & operator=(const Scaleform::GFx::ResourceData &);
	bool IsValid();
	Scaleform::GFx::ResourceData::DataInterface * GetDataInterface();
	void * GetData();
	bool CreateResource(Scaleform::GFx::ResourceBindData *, Scaleform::GFx::LoadStates *, Scaleform::MemoryHeap *);
};
class Scaleform::GFx::ResourceData::DataInterface
{
public:
	~DataInterface();
	void AddRef(void *);
	void Release(void *);
	bool CreateResource(void *, Scaleform::GFx::ResourceBindData *, Scaleform::GFx::LoadStates *, Scaleform::MemoryHeap *);
	DataInterface(const Scaleform::GFx::ResourceData::DataInterface &);
	DataInterface();
	Scaleform::GFx::ResourceData::DataInterface & operator=(const Scaleform::GFx::ResourceData::DataInterface &);
};
void Scaleform::GFx::ResourceData::DataInterface::AddRef(void * hdata); // 0x140345150
void Scaleform::GFx::ResourceData::DataInterface::Release(void * hdata); // 0x140345160