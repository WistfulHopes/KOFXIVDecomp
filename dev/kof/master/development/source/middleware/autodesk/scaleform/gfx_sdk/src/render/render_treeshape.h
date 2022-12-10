#pragma once

class Scaleform::Render::TreeShape :
	Scaleform::Render::TreeNode
{
	class NodeData;
public:
	Scaleform::Render::TreeShape::NodeData * GetWritableData(unsigned long);
	const Scaleform::Render::TreeShape::NodeData * GetReadOnlyData();
	const Scaleform::Render::TreeShape::NodeData * GetDisplayData();
	Scaleform::Render::ShapeMeshProvider * GetShape();
	void SetShape(Scaleform::Render::ShapeMeshProvider *);
	float GetMorphRatio();
	void SetMorphRatio(float);
	TreeShape();
};
class Scaleform::Render::TreeShape::NodeData :
	Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeShape::NodeData,Scaleform::Render::TreeNode::NodeData>
{
	class BaseClass;
public:
	NodeData(const Scaleform::Render::TreeShape::NodeData &);
	NodeData(Scaleform::Render::ContextImpl::NonlocalCloneArg<Scaleform::Render::TreeShape::NodeData>);
	NodeData(Scaleform::Render::ShapeMeshProvider *);
	NodeData();
	virtual ~NodeData();
	Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> pMeshProvider; // 0x90
	float MorphRatio; // 0x98
	virtual bool PropagateUp(Scaleform::Render::ContextImpl::Entry *);
	virtual Scaleform::Render::TreeCacheNode * updateCache(Scaleform::Render::HAL *, Scaleform::Render::TreeCacheNode *, Scaleform::Render::TreeCacheNode *, Scaleform::Render::TreeNode *, unsigned short);
	virtual Scaleform::Render::TreeNode * CloneCreate(Scaleform::Render::ContextImpl::Context *);
	Scaleform::Render::TreeShape::NodeData & operator=(const Scaleform::Render::TreeShape::NodeData &);
};
class Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeShape::NodeData,Scaleform::Render::TreeNode::NodeData> :
	Scaleform::Render::TreeNode::NodeData
{
public:
	ContextData_ImplMixin<Scaleform::Render::TreeShape::NodeData,Scaleform::Render::TreeNode::NodeData>(Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeShape::NodeData,Scaleform::Render::TreeNode::NodeData> &);
	ContextData_ImplMixin<Scaleform::Render::TreeShape::NodeData,Scaleform::Render::TreeNode::NodeData>(const Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeShape::NodeData,Scaleform::Render::TreeNode::NodeData> &);
	ContextData_ImplMixin<Scaleform::Render::TreeShape::NodeData,Scaleform::Render::TreeNode::NodeData>(Scaleform::Render::ContextImpl::NonlocalCloneArg<Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeShape::NodeData,Scaleform::Render::TreeNode::NodeData> >);
	ContextData_ImplMixin<Scaleform::Render::TreeShape::NodeData,Scaleform::Render::TreeNode::NodeData>(Scaleform::Render::ContextImpl::EntryData::EntryType);
	virtual Scaleform::Render::ContextImpl::EntryData * ConstructCopy(Scaleform::Render::LinearHeap &);
	virtual void CopyTo(void *);
	virtual void Destroy();
	virtual ~ContextData_ImplMixin<Scaleform::Render::TreeShape::NodeData,Scaleform::Render::TreeNode::NodeData>();
	Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeShape::NodeData,Scaleform::Render::TreeNode::NodeData> & operator=(Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeShape::NodeData,Scaleform::Render::TreeNode::NodeData> &);
	Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeShape::NodeData,Scaleform::Render::TreeNode::NodeData> & operator=(const Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeShape::NodeData,Scaleform::Render::TreeNode::NodeData> &);
	void __dflt_ctor_closure();
};
struct Scaleform::Render::ContextImpl::NonlocalCloneArg<Scaleform::Render::TreeShape::NodeData>
{
	const Scaleform::Render::TreeShape::NodeData * pC; // 0x0
	NonlocalCloneArg<Scaleform::Render::TreeShape::NodeData>(const Scaleform::Render::TreeShape::NodeData &);
	const Scaleform::Render::TreeShape::NodeData * operator->();
};
Scaleform::Render::TreeShape::NodeData::NodeData(Scaleform::Render::ContextImpl::NonlocalCloneArg<Scaleform::Render::TreeShape::NodeData> src); // 0x140356420
class Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>
{
protected:
	Scaleform::Render::ShapeMeshProvider * pObject; // 0x0
public:
	Ptr<Scaleform::Render::ShapeMeshProvider>(const Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> &);
	Ptr<Scaleform::Render::ShapeMeshProvider>(Scaleform::Render::ShapeMeshProvider *);
	Ptr<Scaleform::Render::ShapeMeshProvider>(Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> &, Scaleform::PickType);
	Ptr<Scaleform::Render::ShapeMeshProvider>(Scaleform::Pickable<Scaleform::Render::ShapeMeshProvider>);
	Ptr<Scaleform::Render::ShapeMeshProvider>(Scaleform::Render::ShapeMeshProvider &);
	Ptr<Scaleform::Render::ShapeMeshProvider>();
	~Ptr<Scaleform::Render::ShapeMeshProvider>();
	bool operator==(Scaleform::Render::ShapeMeshProvider *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> &);
	bool operator!=(Scaleform::Render::ShapeMeshProvider *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> &);
	Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> & operator=(Scaleform::Pickable<Scaleform::Render::ShapeMeshProvider>);
	const Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> & operator=(Scaleform::Render::ShapeMeshProvider &);
	const Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> & operator=(Scaleform::Render::ShapeMeshProvider *);
	const Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> & operator=(const Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> &);
	Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> & SetPtr(Scaleform::Pickable<Scaleform::Render::ShapeMeshProvider>);
	Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> & SetPtr(Scaleform::Render::ShapeMeshProvider &);
	Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> & SetPtr(Scaleform::Render::ShapeMeshProvider *);
	Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> & SetPtr(const Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::ShapeMeshProvider * & GetRawRef();
	Scaleform::Render::ShapeMeshProvider * GetPtr();
	Scaleform::Render::ShapeMeshProvider & operator*();
	Scaleform::Render::ShapeMeshProvider * operator->();
	Scaleform::Render::ShapeMeshProvider * operator class Scaleform::Render::ShapeMeshProvider *();
	Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> & Pick(Scaleform::Render::ShapeMeshProvider *);
	Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> & Pick(Scaleform::Pickable<Scaleform::Render::ShapeMeshProvider>);
	Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> & Pick(Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> &);
};
void Scaleform::Render::TreeShape::SetShape(Scaleform::Render::ShapeMeshProvider * pshape); // 0x1402EAB40