#pragma once

enum Scaleform::Render::TransformFlags
{
	TF_None = 0,
	TF_Matrix = 1,
	TF_Cxform = 2,
	TF_NeedCull = 16,
	TF_CullCxform = 32,
	TF_Has2D = 64,
	TF_Has3D = 128,
	TF_ParentCacheable = 256,
	TF_ForceRecache = 512,
	TF_ParentLayerBlend = 1024,
	TF_Matrix_Cxform = 3,
	TF_Matrix_NeedCull = 17,
	TF_Cxform_NeedCull = 18,
	TF_Matrix_Cxform_NeedCull = 19,
	TF_NeedCull_CullCxform = 48,
	TF_Matrix_Cxform_CullCxform = 35,
	TF_Matrix_NeedCull_CullCxform = 49,
	TF_Cxform_NeedCull_CullCxform = 50,
	TF_Matrix_Cxform_NeedCull_CullCxform = 51,
};
struct Scaleform::Render::TransformArgs
{
	Scaleform::Render::Rect<float> CullRect; // 0x0
private:
	Scaleform::Render::Matrix3x4<float> Mat3D; // 0x10
	const Scaleform::Render::ViewMatrix3DState * viewState; // 0x40
	const Scaleform::Render::ProjectionMatrix3DState * projState; // 0x48
	Scaleform::Render::Matrix4x4<float> ViewProj; // 0x50
	bool bRecomputeViewProj; // 0x90
public:
	Scaleform::Render::Matrix2x4<float> Mat; // 0xA0
	Scaleform::Render::Cxform Cx; // 0xC0
	TransformArgs(const Scaleform::Render::Rect<float> &, const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix3x4<float> &, const Scaleform::Render::Cxform &);
	TransformArgs(const Scaleform::Render::TransformArgs &, const Scaleform::Render::Matrix3x4<float> &);
	TransformArgs(const Scaleform::Render::TransformArgs &, const Scaleform::Render::Matrix2x4<float> &);
	TransformArgs(const Scaleform::Render::TransformArgs &);
	Scaleform::Render::TransformArgs & operator=(const Scaleform::Render::TransformArgs &);
	void SetMatrix3D(const Scaleform::Render::Matrix3x4<float> &, const Scaleform::Render::Matrix3x4<float> &);
	void SetMatrix3D(const Scaleform::Render::Matrix3x4<float> &);
	void AppendMatrix3D(const Scaleform::Render::Matrix3x4<float> &);
	void PrependMatrix3D(const Scaleform::Render::Matrix3x4<float> &);
	void GetMatrix3D(Scaleform::Render::TransformFlags, Scaleform::Render::Matrix3x4<float> *);
	const Scaleform::Render::Matrix3x4<float> & GetMat3DDirect();
	const Scaleform::Render::Matrix4x4<float> & GetViewProj();
	void SetViewProj(const Scaleform::Render::TreeNode::NodeData *, const Scaleform::Render::TransformArgs *);
	void SetViewProj(const Scaleform::Render::ViewMatrix3DState *, const Scaleform::Render::ProjectionMatrix3DState *);
private:
	void CopyViewProj(const Scaleform::Render::TransformArgs &);
};
Scaleform::Render::TransformArgs::TransformArgs(const Scaleform::Render::TransformArgs & copy, const Scaleform::Render::Matrix3x4<float> & mat); // 0x140380250
void Scaleform::Render::TransformArgs::GetMatrix3D(Scaleform::Render::TransformFlags flags, Scaleform::Render::Matrix3x4<float> * m); // 0x140381A60
const Scaleform::Render::Matrix4x4<float> & Scaleform::Render::TransformArgs::GetViewProj(); // 0x140356F20
void Scaleform::Render::TransformArgs::SetViewProj(const Scaleform::Render::TreeNode::NodeData * data, const Scaleform::Render::TransformArgs * t); // 0x140382900
class Scaleform::Render::TreeCacheNode :
	Scaleform::ListNode<Scaleform::Render::TreeCacheNode>,
	Scaleform::NewOverrideBase<71>
{
public:
	Scaleform::Render::TreeCacheRoot * pRoot; // 0x20
	Scaleform::Render::TreeNode * pNode; // 0x28
	Scaleform::Render::TreeCacheNode * pParent; // 0x30
	Scaleform::Render::CacheEffectChain Effects; // 0x38
private:
	Scaleform::Render::TreeCacheNode * pMask; // 0x40
public:
	unsigned short Depth; // 0x48
private:
	unsigned short Flags; // 0x4A
public:
	unsigned long UpdateFlags; // 0x4C
	Scaleform::Render::TreeCacheNode * pNextUpdate; // 0x50
	Scaleform::Render::Rect<float> SortParentBounds; // 0x60
	TreeCacheNode(const Scaleform::Render::TreeCacheNode &);
	TreeCacheNode(Scaleform::Render::TreeNode *, unsigned long);
	~TreeCacheNode();
	unsigned long GetFlags();
	void SetFlags(unsigned long);
	void ApplyFlags(unsigned long, unsigned long);
	bool IsMaskNode();
	bool IsDrawn();
	bool HasMask();
	Scaleform::Render::TreeCacheNode * GetMask();
	void SetMask(Scaleform::Render::TreeCacheNode *);
	void ClearMask();
	static Scaleform::Render::EdgeAAMode CalcEdgeAAMode(const Scaleform::Render::TreeNode::NodeData *, Scaleform::Render::EdgeAAMode);
	static Scaleform::Render::EdgeAAMode CalcEdgeAAMode(const Scaleform::Render::TreeNode::NodeData *, Scaleform::Render::TreeCacheNode *);
	class NodeData;
	Scaleform::Render::TreeNode * GetNode();
	const Scaleform::Render::TreeNode::NodeData * GetNodeData();
	void SetParent(Scaleform::Render::TreeCacheNode *);
	Scaleform::Render::TreeCacheNode * GetParent();
	void HandleChanges(Scaleform::Render::HAL *, unsigned long);
	void UpdateInsertIntoParent(Scaleform::Render::HAL *, Scaleform::Render::TreeCacheNode *, Scaleform::Render::TreeCacheNode *, const Scaleform::Render::TreeNode::NodeData *, unsigned short);
	void UpdateChildSubtree(Scaleform::Render::HAL *, const Scaleform::Render::TreeNode::NodeData *, unsigned short);
	void RemoveFromParent(Scaleform::Render::HAL *);
	void HandleRemoveNode();
	void UpdateTransform(Scaleform::Render::HAL *, const Scaleform::Render::TreeNode::NodeData *, const Scaleform::Render::TransformArgs &, Scaleform::Render::TransformFlags);
	void updateMaskCache(Scaleform::Render::HAL *, const Scaleform::Render::TreeNode::NodeData *, unsigned short, bool);
	void updateMaskTransform(Scaleform::Render::HAL *, Scaleform::Render::TransformArgs &, Scaleform::Render::TransformFlags);
	void updateEffectChain(Scaleform::Render::HAL *, Scaleform::Render::BundleEntryRange *);
	void addParentToDepthPatternUpdate();
	void propagateMaskFlag(Scaleform::Render::HAL *, unsigned long);
	void propagateScale9Flag(Scaleform::Render::HAL *, unsigned long);
	void propagateEdgeAA(Scaleform::Render::HAL *, Scaleform::Render::EdgeAAMode);
	void propagate3DFlag(Scaleform::Render::HAL *, unsigned long);
	Scaleform::Render::TransformFlags updateCulling(Scaleform::Render::HAL *, const Scaleform::Render::TreeNode::NodeData *, const Scaleform::Render::TransformArgs &, Scaleform::Render::Rect<float> *, Scaleform::Render::TransformFlags);
	void updateFilterCache(Scaleform::Render::HAL *, const Scaleform::Render::TreeNode::NodeData *, const Scaleform::Render::TransformArgs &, Scaleform::Render::TransformFlags, Scaleform::Render::Rect<float> *, const Scaleform::Render::Matrix3x4<float> &, bool);
	void updateBlendCache(Scaleform::Render::HAL *, const Scaleform::Render::TreeNode::NodeData *, const Scaleform::Render::TransformArgs &, Scaleform::Render::TransformFlags, Scaleform::Render::Rect<float> *, const Scaleform::Render::Matrix3x4<float> &, bool);
	bool calcChildMaskBounds(Scaleform::Render::Rect<float> *, Scaleform::Render::TreeCacheNode *);
	Scaleform::Render::MaskEffectState calcMaskBounds(Scaleform::Render::Rect<float> *, Scaleform::Render::Matrix2x4<float> *, const Scaleform::Render::Matrix3x4<float> &, const Scaleform::Render::Matrix4x4<float> &);
	enum CacheableBoundResult
	{
		CacheableBoundResult_CompletelyClipped = 0,
		CacheableBoundResult_PartiallyClipped = 1,
		CacheableBoundResult_FullyVisible = 2,
	};
	Scaleform::Render::TreeCacheNode::CacheableBoundResult calcCacheableBounds(Scaleform::Render::Rect<float> *, Scaleform::Render::Matrix2x4<float> *, const Scaleform::Render::Matrix3x4<float> &, const Scaleform::Render::Matrix4x4<float> &, Scaleform::Render::Rect<float> *);
	void CalcViewMatrix(Scaleform::Render::Matrix3x4<float> *, Scaleform::Render::Matrix4x4<float> *);
	void CalcViewMatrix(Scaleform::Render::Matrix2x4<float> *);
	void CalcCxform(Scaleform::Render::Cxform &);
	bool CalcFilterFlag();
	Scaleform::Render::Matrix4x4<float> GetViewProj();
	Scaleform::Render::TreeCacheNode * GetScale9GridNode();
	void UpdateBundlePattern(Scaleform::Render::HAL *, unsigned long);
	bool GetPatternChain(Scaleform::Render::HAL *, Scaleform::Render::BundleEntryRange *, unsigned long);
	bool IsPatternChainValid();
	void forceUpdateImages(Scaleform::Render::HAL *);
	Scaleform::Render::TreeCacheNode & operator=(const Scaleform::Render::TreeCacheNode &);
};
bool Scaleform::Render::TreeCacheNode::GetPatternChain(Scaleform::Render::HAL * hal, Scaleform::Render::BundleEntryRange * range, unsigned long flags); // 0x140381D50
bool Scaleform::Render::TreeCacheNode::IsPatternChainValid(); // 0x1400B8180
void Scaleform::Render::TreeCacheMeshBase::HandleChanges(Scaleform::Render::HAL * hal, unsigned long changeBits); // 0x14002E7C0
class Scaleform::Render::TreeCacheContainer :
	Scaleform::Render::TreeCacheNode
{
public:
	Scaleform::List<Scaleform::Render::TreeCacheNode,Scaleform::Render::TreeCacheNode,Scaleform::ListNode<Scaleform::Render::TreeCacheNode> > Children; // 0x70
	Scaleform::Render::BundleEntryRange CachedChildPattern; // 0x80
	TreeCacheContainer(Scaleform::Render::TreeNode *, unsigned long);
	virtual ~TreeCacheContainer();
	class NodeData;
	Scaleform::Render::TreeContainer * GetNode();
	const Scaleform::Render::TreeContainer::NodeData * GetNodeData();
	virtual void HandleChanges(Scaleform::Render::HAL *, unsigned long);
	virtual void HandleRemoveNode();
	virtual void UpdateChildSubtree(Scaleform::Render::HAL *, const Scaleform::Render::TreeNode::NodeData *, unsigned short);
	virtual void UpdateTransform(Scaleform::Render::HAL *, const Scaleform::Render::TreeNode::NodeData *, const Scaleform::Render::TransformArgs &, Scaleform::Render::TransformFlags);
	virtual void propagateMaskFlag(Scaleform::Render::HAL *, unsigned long);
	virtual void propagateScale9Flag(Scaleform::Render::HAL *, unsigned long);
	virtual void propagateEdgeAA(Scaleform::Render::HAL *, Scaleform::Render::EdgeAAMode);
	virtual void propagate3DFlag(Scaleform::Render::HAL *, unsigned long);
	enum <unnamed-enum-Pattern_DisableMatch>
	{
		Pattern_DisableMatch = 1,
	};
	void BuildChildPattern(Scaleform::Render::HAL *, Scaleform::Render::BundleEntryRange *, unsigned long);
	virtual void UpdateBundlePattern(Scaleform::Render::HAL *, unsigned long);
	virtual bool GetPatternChain(Scaleform::Render::HAL *, Scaleform::Render::BundleEntryRange *, unsigned long);
	virtual bool IsPatternChainValid();
	virtual void forceUpdateImages(Scaleform::Render::HAL *);
};
class Scaleform::Render::TreeCacheRoot :
	Scaleform::Render::TreeCacheContainer
{
public:
	Scaleform::Render::Rect<float> ViewCullRect; // 0xA0
	Scaleform::Render::TreeCacheNode * pUpdateList; // 0xB0
	bool ViewValid; // 0xB8
	bool EnableBlendTarget; // 0xB9
	bool DepthUpdatesChained; // 0xBA
	Scaleform::Render::DepthUpdateArrayPOD<Scaleform::Render::TreeCacheNode *> DepthUpdates; // 0xC0
	TreeCacheRoot(unsigned long, Scaleform::Render::TreeRoot *);
	virtual ~TreeCacheRoot();
	class NodeData;
	Scaleform::Render::TreeRoot * GetNode();
	const Scaleform::Render::TreeRoot::NodeData * GetNodeData();
	Scaleform::Render::TreeCacheRoot * GetThis();
	void ChainUpdatesByDepth();
	void ClearDepthUpdates();
	void AddToUpdate(Scaleform::Render::TreeCacheNode *, unsigned long);
	void AddToDepthUpdate(Scaleform::Render::TreeCacheNode *, unsigned long);
	virtual void HandleChanges(Scaleform::Render::HAL *, unsigned long);
	void UpdateTreeData(Scaleform::Render::HAL *);
	void Draw(Scaleform::Render::HAL *);
};
class Scaleform::Render::DepthUpdateArrayPOD<Scaleform::Render::TreeCacheNode *>
{
	enum <unnamed-enum-MaxDepthReserve>
	{
		MaxDepthReserve = 32,
	};
private:
	Scaleform::Render::TreeCacheNode * * pDepth; // 0x0
	unsigned long DepthUsed; // 0x8
	unsigned long DepthAvailable; // 0xC
	Scaleform::MemoryHeap * pHeap; // 0x10
	Scaleform::Render::TreeCacheNode * NullValue; // 0x18
	Scaleform::Render::TreeCacheNode * ArrayReserve[32]; // 0x20
	bool grow(unsigned long);
public:
	DepthUpdateArrayPOD<Scaleform::Render::TreeCacheNode *>(Scaleform::MemoryHeap *, Scaleform::Render::TreeCacheNode *);
	~DepthUpdateArrayPOD<Scaleform::Render::TreeCacheNode *>();
	unsigned long GetDepthUsed();
	Scaleform::Render::TreeCacheNode * Get(unsigned long);
	void Set(unsigned long, Scaleform::Render::TreeCacheNode *);
	void Link(unsigned long, Scaleform::Render::TreeCacheNode * *, Scaleform::Render::TreeCacheNode *);
	void Clear();
};
Scaleform::Render::TreeCacheRoot::TreeCacheRoot(unsigned long flags, Scaleform::Render::TreeRoot * pnode); // 0x140318100
Scaleform::Render::TreeCacheRoot::~TreeCacheRoot(); // 0x140318690
class Scaleform::Render::TreeCacheMeshBase :
	Scaleform::Render::TreeCacheNode
{
protected:
	void ComputeFinalMatrix(const Scaleform::Render::TransformArgs &, Scaleform::Render::MatrixPoolImpl::MatrixPool &, Scaleform::Render::TransformFlags);
public:
	Scaleform::Render::BundleEntry SorterShapeNode; // 0x70
	Scaleform::Render::MatrixPoolImpl::HMatrix M; // 0xB0
	Scaleform::Render::TreeCacheMeshBase * GetThis();
	TreeCacheMeshBase(const Scaleform::Render::TreeCacheMeshBase &);
	TreeCacheMeshBase(Scaleform::Render::TreeNode *, const Scaleform::Render::SortKey &, unsigned long);
	virtual ~TreeCacheMeshBase();
	const Scaleform::Render::Matrix2x4<float> & GetMatrixSafe();
	Scaleform::Render::MeshBase * GetMesh(Scaleform::Render::HAL *);
	void RemoveMesh();
	virtual void HandleRemoveNode();
	virtual void HandleChanges(Scaleform::Render::HAL *, unsigned long);
	virtual bool GetPatternChain(Scaleform::Render::HAL *, Scaleform::Render::BundleEntryRange *, unsigned long);
	virtual void UpdateBundlePattern(Scaleform::Render::HAL *, unsigned long);
	Scaleform::Render::TreeCacheMeshBase & operator=(const Scaleform::Render::TreeCacheMeshBase &);
};
void Scaleform::Render::TreeCacheMeshBase::HandleRemoveNode(); // 0x1403572C0
bool Scaleform::Render::FixedSizeArray<Scaleform::Render::Rect2F>::grow(unsigned long long reserve); // 0x140384D20
class Scaleform::Render::FixedSizeArray<Scaleform::Render::Rect<float> >
{
	enum <unnamed-enum-DefSize>
	{
		DefSize = 32,
	};
protected:
	unsigned char DataReserve[528]; // 0x0
	unsigned long long Size; // 0x210
	unsigned long long Reserve; // 0x218
	Scaleform::Render::Rect<float> * pData; // 0x220
	bool grow(unsigned long long);
public:
	FixedSizeArray<Scaleform::Render::Rect<float> >();
	~FixedSizeArray<Scaleform::Render::Rect<float> >();
	unsigned long long GetSize();
	const Scaleform::Render::Rect<float> & operator[](unsigned long long);
	Scaleform::Render::Rect<float> & operator[](unsigned long long);
	void PushBack(const Scaleform::Render::Rect<float> &);
	void Clear();
};
class Scaleform::Render::FixedSizeArrayRectF :
	Scaleform::Render::FixedSizeArray<Scaleform::Render::Rect<float> >
{
public:
	bool Intersects(const Scaleform::Render::Rect<float> &);
	FixedSizeArrayRectF();
	~FixedSizeArrayRectF();
};
struct Scaleform::Render::Rect2F
{
	__m128 r0; // 0x0
	__m128 r1; // 0x10
};
class Scaleform::Render::FixedSizeArrayRect2F :
	protected Scaleform::Render::FixedSizeArray<Scaleform::Render::Rect2F>
{
private:
	bool HalfRect; // 0x428
public:
	FixedSizeArrayRect2F();
	void PushBack(const Scaleform::Render::Rect<float> &);
	bool Intersects(const Scaleform::Render::Rect<float> &);
	void Clear();
	~FixedSizeArrayRect2F();
};
class Scaleform::Render::FixedSizeArray<Scaleform::Render::Rect2F>
{
	enum <unnamed-enum-DefSize>
	{
		DefSize = 32,
	};
protected:
	unsigned char DataReserve[1040]; // 0x0
	unsigned long long Size; // 0x410
	unsigned long long Reserve; // 0x418
	Scaleform::Render::Rect2F * pData; // 0x420
	bool grow(unsigned long long);
public:
	FixedSizeArray<Scaleform::Render::Rect2F>();
	~FixedSizeArray<Scaleform::Render::Rect2F>();
	unsigned long long GetSize();
	const Scaleform::Render::Rect2F & operator[](unsigned long long);
	Scaleform::Render::Rect2F & operator[](unsigned long long);
	void PushBack(const Scaleform::Render::Rect2F &);
	void Clear();
};