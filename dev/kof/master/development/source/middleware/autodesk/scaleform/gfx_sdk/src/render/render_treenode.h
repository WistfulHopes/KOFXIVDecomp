#pragma once

class Scaleform::Render::TreeNode :
	Scaleform::Render::ContextImpl::Entry
{
	class NodeData;
public:
	Scaleform::Render::TreeNode::NodeData * GetWritableData(unsigned long);
	const Scaleform::Render::TreeNode::NodeData * GetReadOnlyData();
	const Scaleform::Render::TreeNode::NodeData * GetDisplayData();
	void CopyGeomData(const Scaleform::Render::TreeNode &);
	Scaleform::Render::TreeNode * Clone(Scaleform::Render::ContextImpl::Context *);
	bool HasChanges(unsigned long);
	void SetMatrix(const Scaleform::Render::Matrix2x4<float> &);
	const Scaleform::Render::Matrix2x4<float> & M2D();
	void SetMatrix3D(const Scaleform::Render::Matrix3x4<float> &);
	const Scaleform::Render::Matrix3x4<float> & M3D();
	void SetViewMatrix3D(const Scaleform::Render::Matrix3x4<float> &);
	void ClearViewMatrix3D();
	bool GetViewMatrix3D(Scaleform::Render::Matrix3x4<float> *);
	void SetProjectionMatrix3D(const Scaleform::Render::Matrix4x4<float> &);
	void ClearProjectionMatrix3D();
	bool GetProjectionMatrix3D(Scaleform::Render::Matrix4x4<float> *);
	void CalcViewMatrix(Scaleform::Render::Matrix2x4<float> *);
	void SetCxform(const Scaleform::Render::Cxform &);
	const Scaleform::Render::Cxform & GetCxform();
	void SetVisible(bool);
	bool IsVisible();
	unsigned long GetFlags();
	void SetEdgeAAMode(Scaleform::Render::EdgeAAMode);
	Scaleform::Render::EdgeAAMode GetEdgeAAMode();
	const Scaleform::Render::State * GetState(Scaleform::Render::StateType);
	void SetScale9Grid(const Scaleform::Render::Rect<float> &);
	Scaleform::Render::Rect<float> GetScale9Grid();
	bool HasScale9Grid();
	void SetBlendMode(Scaleform::Render::BlendMode);
	Scaleform::Render::BlendMode GetBlendMode();
	void SetMaskNode(Scaleform::Render::TreeNode *);
	Scaleform::Render::TreeNode * GetMaskNode();
	void SetFilters(const Scaleform::Render::FilterSet *);
	const Scaleform::Render::FilterSet * GetFilters();
	void SetOrigScale9Parent(Scaleform::Render::TreeNode *);
	Scaleform::Render::TreeNode * GetOrigScale9Parent();
	void Clear3D();
	bool Is3D();
	bool IsMaskNode();
	bool HasMask();
	bool HasFilter();
	bool HasProjectionMatrix3D();
	bool HasViewMatrix3D();
	bool IsPartOfMask();
	Scaleform::Render::TreeNode * GetParent();
	const Scaleform::Render::Rect<float> & GetAproxLocalBounds();
	const Scaleform::Render::Rect<float> & GetAproxParentBounds();
	void SetRendererString(const char *);
	const char * GetRendererString();
	void SetRendererFloat(float);
	float GetRendererFloat();
	void DisableBatching(bool);
	bool IsBatchingDisabled();
	void appendAncestorMatrices(Scaleform::Render::Matrix2x4<float> *);
protected:
	bool setThisAsMaskOwner(Scaleform::Render::TreeNode::NodeData *, Scaleform::Render::TreeNode *);
	static bool removeThisAsMaskOwner(const Scaleform::Render::TreeNode::NodeData *);
	static void AddRef_Multiple(Scaleform::Render::TreeNode * *, unsigned long long);
	static void Release_Multiple(Scaleform::Render::TreeNode * *, unsigned long long);
public:
	TreeNode();
};
class Scaleform::Render::TreeNode::NodeData :
	Scaleform::Render::ContextImpl::EntryData
{
private:
	Scaleform::Render::Matrix3x4<float> M34; // 0x10
public:
	NodeData(Scaleform::Render::TreeNode::NodeData &);
	NodeData(const Scaleform::Render::TreeNode::NodeData &);
	NodeData(Scaleform::Render::ContextImpl::NonlocalCloneArg<Scaleform::Render::TreeNode::NodeData>);
	NodeData(Scaleform::Render::ContextImpl::EntryData::EntryType);
	Scaleform::Render::StateBag States; // 0x40
	Scaleform::Render::Cxform Cx; // 0x50
	Scaleform::Render::Rect<float> AproxLocalBounds; // 0x70
	Scaleform::Render::Rect<float> AproxParentBounds; // 0x80
	Scaleform::Render::TreeCacheNode * updateCache(Scaleform::Render::HAL *, Scaleform::Render::TreeCacheNode *, Scaleform::Render::TreeCacheNode *, Scaleform::Render::TreeNode *, unsigned short);
	static void expandByFilterBounds(const Scaleform::Render::Filter *, Scaleform::Render::Rect<float> *);
	bool expandByFilterBounds(Scaleform::Render::Rect<float> *, bool);
	void updateOriginalBoundState(const Scaleform::Render::Rect<float> &);
	virtual void ReleaseNodes();
	void SetVisible(bool);
	bool IsVisible();
	bool IsMaskNode();
	bool HasMask();
	bool HasFilter();
	bool HasProjectionMatrix3D();
	bool HasViewMatrix3D();
	bool Is3D();
	void Clear3D();
	unsigned long GetFlags();
	Scaleform::Render::EdgeAAMode GetEdgeAAMode();
	void SetEdgeAAMode(Scaleform::Render::EdgeAAMode);
	Scaleform::Render::TreeNode * GetMaskOwner();
	Scaleform::Render::Matrix2x4<float> & M2D();
	const Scaleform::Render::Matrix2x4<float> & M2D();
	Scaleform::Render::Matrix3x4<float> & M3D();
	const Scaleform::Render::Matrix3x4<float> & M3D();
	void SetMatrix(const Scaleform::Render::Matrix2x4<float> &);
	void SetMatrix3D(const Scaleform::Render::Matrix3x4<float> &);
	void CopyGeomData(Scaleform::Render::TreeNode *, const Scaleform::Render::TreeNode &);
	Scaleform::Render::TreeNode * CloneCreate(Scaleform::Render::ContextImpl::Context *);
	bool CloneInit(Scaleform::Render::TreeNode *, Scaleform::Render::ContextImpl::Context *);
	virtual ~NodeData();
	Scaleform::Render::TreeNode::NodeData & operator=(Scaleform::Render::TreeNode::NodeData &);
	Scaleform::Render::TreeNode::NodeData & operator=(const Scaleform::Render::TreeNode::NodeData &);
	void __dflt_ctor_closure();
};
Scaleform::Render::TreeNode::NodeData::NodeData(Scaleform::Render::ContextImpl::EntryData::EntryType type); // 0x1402DD210
struct Scaleform::Render::ContextImpl::NonlocalCloneArg<Scaleform::Render::TreeNode::NodeData>
{
	const Scaleform::Render::TreeNode::NodeData * pC; // 0x0
	NonlocalCloneArg<Scaleform::Render::TreeNode::NodeData>(const Scaleform::Render::TreeNode::NodeData &);
	const Scaleform::Render::TreeNode::NodeData * operator->();
};
Scaleform::Render::TreeNode::NodeData::NodeData(Scaleform::Render::ContextImpl::NonlocalCloneArg<Scaleform::Render::TreeNode::NodeData> src); // 0x1402F2DD0
bool Scaleform::Render::TreeNode::GetViewMatrix3D(Scaleform::Render::Matrix3x4<float> * mat); // 0x140334860
bool Scaleform::Render::TreeNode::GetProjectionMatrix3D(Scaleform::Render::Matrix4x4<float> * mat); // 0x140334380
Scaleform::Render::Rect<float> Scaleform::Render::TreeNode::GetScale9Grid(); // 0x1403150C0
class Scaleform::Render::TreeNodeArray
{
	enum <unnamed-enum-FixedStoreSize>
	{
		FixedStoreSize = 2,
		FirstNodeSize = 2,
		RoundMultiple = 4,
		RoundMask = 3,
	};
	struct ArrayData;
public:
	Scaleform::Render::TreeNode * pNodes[2]; // 0x0
	unsigned long long pData[2]; // 0x0
	static bool hasArrayDataBit(unsigned long long);
	static Scaleform::Render::TreeNodeArray::ArrayData * toArrayData(unsigned long long);
	bool hasArrayData();
	Scaleform::Render::TreeNodeArray::ArrayData * getArrayData();
	unsigned long long getCapacity();
	void setArrayData(Scaleform::Render::TreeNodeArray::ArrayData *, unsigned long long);
	void setCapacity(unsigned long long);
	unsigned long long roundUpSize(unsigned long long);
	unsigned long long calcIncreasedCapacity(unsigned long long);
	unsigned long long calcRemoveCapacity(unsigned long long, unsigned long long);
	Scaleform::Render::TreeNodeArray::ArrayData * allocByCapacity(unsigned long long, unsigned long long);
	TreeNodeArray(const Scaleform::Render::TreeNodeArray &);
	TreeNodeArray();
	~TreeNodeArray();
	void operator=(const Scaleform::Render::TreeNodeArray &);
	unsigned long long GetSize();
	Scaleform::Render::TreeNode * GetAt(unsigned long long);
	Scaleform::Render::TreeNode * operator[](unsigned long long);
	Scaleform::Render::TreeNode * * GetMultipleAt(unsigned long long);
	bool Insert(unsigned long long, Scaleform::Render::TreeNode *);
	bool Remove(unsigned long long, unsigned long long);
	void SignalFrameCapture();
};
struct Scaleform::Render::TreeNodeArray::ArrayData
{
	volatile long RefCount; // 0x0
	unsigned long long Size; // 0x8
	Scaleform::Render::TreeNode * pNodes[2]; // 0x10
	void AddRef();
	void Release();
	ArrayData(Scaleform::Render::TreeNodeArray::ArrayData &);
	ArrayData(const Scaleform::Render::TreeNodeArray::ArrayData &);
	Scaleform::Render::TreeNodeArray::ArrayData & operator=(Scaleform::Render::TreeNodeArray::ArrayData &);
	Scaleform::Render::TreeNodeArray::ArrayData & operator=(const Scaleform::Render::TreeNodeArray::ArrayData &);
};
void Scaleform::Render::TreeNodeArray::ArrayData::Release(); // 0x140315820
unsigned long long Scaleform::Render::TreeNodeArray::GetSize(); // 0x140381D60
class Scaleform::Render::TreeContainer :
	Scaleform::Render::TreeNode
{
	class NodeData;
public:
	Scaleform::Render::TreeContainer::NodeData * GetWritableData(unsigned long);
	const Scaleform::Render::TreeContainer::NodeData * GetReadOnlyData();
	const Scaleform::Render::TreeContainer::NodeData * GetDisplayData();
	bool Insert(unsigned long long, Scaleform::Render::TreeNode *);
	void Remove(unsigned long long, unsigned long long);
	bool Add(Scaleform::Render::TreeNode *);
	Scaleform::Render::TreeNode * GetAt(unsigned long long);
	unsigned long long GetSize();
	TreeContainer();
};
class Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeContainer::NodeData,Scaleform::Render::TreeNode::NodeData> :
	Scaleform::Render::TreeNode::NodeData
{
public:
	ContextData_ImplMixin<Scaleform::Render::TreeContainer::NodeData,Scaleform::Render::TreeNode::NodeData>(Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeContainer::NodeData,Scaleform::Render::TreeNode::NodeData> &);
	ContextData_ImplMixin<Scaleform::Render::TreeContainer::NodeData,Scaleform::Render::TreeNode::NodeData>(const Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeContainer::NodeData,Scaleform::Render::TreeNode::NodeData> &);
	ContextData_ImplMixin<Scaleform::Render::TreeContainer::NodeData,Scaleform::Render::TreeNode::NodeData>(Scaleform::Render::ContextImpl::NonlocalCloneArg<Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeContainer::NodeData,Scaleform::Render::TreeNode::NodeData> >);
	ContextData_ImplMixin<Scaleform::Render::TreeContainer::NodeData,Scaleform::Render::TreeNode::NodeData>(Scaleform::Render::ContextImpl::EntryData::EntryType);
	virtual Scaleform::Render::ContextImpl::EntryData * ConstructCopy(Scaleform::Render::LinearHeap &);
	virtual void CopyTo(void *);
	virtual void Destroy();
	virtual ~ContextData_ImplMixin<Scaleform::Render::TreeContainer::NodeData,Scaleform::Render::TreeNode::NodeData>();
	Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeContainer::NodeData,Scaleform::Render::TreeNode::NodeData> & operator=(Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeContainer::NodeData,Scaleform::Render::TreeNode::NodeData> &);
	Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeContainer::NodeData,Scaleform::Render::TreeNode::NodeData> & operator=(const Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeContainer::NodeData,Scaleform::Render::TreeNode::NodeData> &);
	void __dflt_ctor_closure();
};
class Scaleform::Render::TreeContainer::NodeData :
	Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeContainer::NodeData,Scaleform::Render::TreeNode::NodeData>
{
	class BaseClass;
public:
	NodeData(Scaleform::Render::TreeContainer::NodeData &);
	NodeData(const Scaleform::Render::TreeContainer::NodeData &);
	NodeData(Scaleform::Render::ContextImpl::NonlocalCloneArg<Scaleform::Render::TreeContainer::NodeData>);
	NodeData();
protected:
	NodeData(Scaleform::Render::ContextImpl::EntryData::EntryType);
public:
	Scaleform::Render::TreeNodeArray Children; // 0x90
	virtual void ReleaseNodes();
	virtual bool PropagateUp(Scaleform::Render::ContextImpl::Entry *);
	virtual Scaleform::Render::TreeCacheNode * updateCache(Scaleform::Render::HAL *, Scaleform::Render::TreeCacheNode *, Scaleform::Render::TreeCacheNode *, Scaleform::Render::TreeNode *, unsigned short);
	virtual Scaleform::Render::TreeNode * CloneCreate(Scaleform::Render::ContextImpl::Context *);
	virtual bool CloneInit(Scaleform::Render::TreeNode *, Scaleform::Render::ContextImpl::Context *);
	virtual ~NodeData();
	Scaleform::Render::TreeContainer::NodeData & operator=(Scaleform::Render::TreeContainer::NodeData &);
	Scaleform::Render::TreeContainer::NodeData & operator=(const Scaleform::Render::TreeContainer::NodeData &);
};
struct Scaleform::Render::ContextImpl::NonlocalCloneArg<Scaleform::Render::TreeContainer::NodeData>
{
	const Scaleform::Render::TreeContainer::NodeData * pC; // 0x0
	NonlocalCloneArg<Scaleform::Render::TreeContainer::NodeData>(const Scaleform::Render::TreeContainer::NodeData &);
	const Scaleform::Render::TreeContainer::NodeData * operator->();
};
bool Scaleform::Render::TreeContainer::Add(Scaleform::Render::TreeNode * node); // 0x1402DEC70
Scaleform::Render::TreeNode * Scaleform::Render::TreeContainer::GetAt(unsigned long long index); // 0x1403CE9F0
unsigned long long Scaleform::Render::TreeContainer::GetSize(); // 0x1402E2FB0
class Scaleform::Render::TreeRoot :
	Scaleform::Render::TreeContainer
{
	class NodeData;
public:
	Scaleform::Render::TreeRoot::NodeData * GetWritableData(unsigned long);
	const Scaleform::Render::TreeRoot::NodeData * GetReadOnlyData();
	const Scaleform::Render::TreeRoot::NodeData * GetDisplayData();
	bool HasViewport();
	const Scaleform::Render::Viewport & GetViewport();
	Scaleform::Render::Color GetBackgroundColor();
	void SetViewport(const Scaleform::Render::Viewport &);
	void SetBackgroundColor(const Scaleform::Render::Color &);
	TreeRoot();
};
class Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeRoot::NodeData,Scaleform::Render::TreeContainer::NodeData> :
	Scaleform::Render::TreeContainer::NodeData
{
public:
	ContextData_ImplMixin<Scaleform::Render::TreeRoot::NodeData,Scaleform::Render::TreeContainer::NodeData>(Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeRoot::NodeData,Scaleform::Render::TreeContainer::NodeData> &);
	ContextData_ImplMixin<Scaleform::Render::TreeRoot::NodeData,Scaleform::Render::TreeContainer::NodeData>(const Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeRoot::NodeData,Scaleform::Render::TreeContainer::NodeData> &);
	ContextData_ImplMixin<Scaleform::Render::TreeRoot::NodeData,Scaleform::Render::TreeContainer::NodeData>(Scaleform::Render::ContextImpl::NonlocalCloneArg<Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeRoot::NodeData,Scaleform::Render::TreeContainer::NodeData> >);
	ContextData_ImplMixin<Scaleform::Render::TreeRoot::NodeData,Scaleform::Render::TreeContainer::NodeData>(Scaleform::Render::ContextImpl::EntryData::EntryType);
	virtual Scaleform::Render::ContextImpl::EntryData * ConstructCopy(Scaleform::Render::LinearHeap &);
	virtual void CopyTo(void *);
	virtual void Destroy();
	virtual ~ContextData_ImplMixin<Scaleform::Render::TreeRoot::NodeData,Scaleform::Render::TreeContainer::NodeData>();
	Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeRoot::NodeData,Scaleform::Render::TreeContainer::NodeData> & operator=(Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeRoot::NodeData,Scaleform::Render::TreeContainer::NodeData> &);
	Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeRoot::NodeData,Scaleform::Render::TreeContainer::NodeData> & operator=(const Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeRoot::NodeData,Scaleform::Render::TreeContainer::NodeData> &);
	void __dflt_ctor_closure();
};
class Scaleform::Render::TreeRoot::NodeData :
	Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeRoot::NodeData,Scaleform::Render::TreeContainer::NodeData>
{
public:
	NodeData(Scaleform::Render::TreeRoot::NodeData &);
	NodeData(const Scaleform::Render::TreeRoot::NodeData &);
	NodeData();
	Scaleform::Render::Viewport VP; // 0xA0
	Scaleform::Render::Color BGColor; // 0xCC
	Scaleform::Render::Color GetBackgroundColor();
	bool HasViewport();
	virtual ~NodeData();
	Scaleform::Render::TreeRoot::NodeData & operator=(Scaleform::Render::TreeRoot::NodeData &);
	Scaleform::Render::TreeRoot::NodeData & operator=(const Scaleform::Render::TreeRoot::NodeData &);
};
Scaleform::Render::TreeRoot::NodeData::NodeData(); // 0x1402DD380
void Scaleform::Render::TreeRoot::SetBackgroundColor(const Scaleform::Render::Color & color); // 0x1402E9EC0
class Scaleform::Render::ContextImpl::DisplayHandle<Scaleform::Render::TreeRoot> :
	Scaleform::Render::ContextImpl::RTHandle
{
public:
	DisplayHandle<Scaleform::Render::TreeRoot>(const Scaleform::Render::ContextImpl::DisplayHandle<Scaleform::Render::TreeRoot> &);
	DisplayHandle<Scaleform::Render::TreeRoot>(const Scaleform::Render::ContextImpl::RTHandle &);
	DisplayHandle<Scaleform::Render::TreeRoot>(Scaleform::Render::TreeRoot *);
	DisplayHandle<Scaleform::Render::TreeRoot>();
	void operator=(const Scaleform::Render::ContextImpl::DisplayHandle<Scaleform::Render::TreeRoot> &);
	bool operator==(const Scaleform::Render::ContextImpl::DisplayHandle<Scaleform::Render::TreeRoot> &);
	Scaleform::Render::TreeRoot * GetRenderEntry();
	~DisplayHandle<Scaleform::Render::TreeRoot>();
};