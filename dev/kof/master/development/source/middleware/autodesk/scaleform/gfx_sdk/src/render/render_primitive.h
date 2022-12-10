#pragma once

enum Scaleform::Render::MeshUseStatus
{
	MUS_Uncached = 0,
	MUS_LRUTail = 1,
	MUS_PrevFrame = 2,
	MUS_ThisFrame = 3,
	MUS_InUse = 4,
	MUS_Pinned = 5,
};
struct Scaleform::Render::MeshStagingNode :
	Scaleform::ListNode<Scaleform::Render::MeshStagingNode>
{
	unsigned long long StagingBufferSize; // 0x18
	unsigned long long StagingBufferOffset; // 0x20
	unsigned long long StagingBufferIndexOffset; // 0x28
	unsigned long PinCount; // 0x30
	unsigned long VertexCount; // 0x34
	unsigned long IndexCount; // 0x38
	MeshStagingNode(const Scaleform::Render::MeshStagingNode &);
	MeshStagingNode();
	~MeshStagingNode();
	void OnStagingNodeEvict();
	Scaleform::Render::MeshStagingNode & operator=(const Scaleform::Render::MeshStagingNode &);
};
struct Scaleform::ListNode<Scaleform::Render::MeshStagingNode>
{
	Scaleform::Render::MeshStagingNode * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::MeshStagingNode * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::Render::MeshStagingNode>();
	Scaleform::Render::MeshStagingNode * GetPrev();
	Scaleform::Render::MeshStagingNode * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::MeshStagingNode *);
	void InsertNodeAfter(Scaleform::Render::MeshStagingNode *);
	void InsertNodeBefore(Scaleform::Render::MeshStagingNode *);
};
void Scaleform::Render::MeshStagingNode::OnStagingNodeEvict(); // 0x1403997E0
struct Scaleform::Render::Scale9GridData :
	Scaleform::RefCountBase<Scaleform::Render::Scale9GridData,2>
{
	Scaleform::Render::Rect<float> S9Rect; // 0x10
	Scaleform::Render::Rect<float> Bounds; // 0x20
	Scaleform::Render::Matrix2x4<float> ShapeMtx; // 0x30
	Scaleform::Render::Matrix2x4<float> Scale9Mtx; // 0x50
	Scaleform::Render::Matrix2x4<float> ViewMtx; // 0x70
	enum <unnamed-enum-MeshKeySize>
	{
		MeshKeySize = 16,
	};
	Scale9GridData(Scaleform::Render::Scale9GridData &);
	Scale9GridData(const Scaleform::Render::Scale9GridData &);
	Scale9GridData();
	void MakeMeshKey(float *);
	virtual ~Scale9GridData();
	Scaleform::Render::Scale9GridData & operator=(Scaleform::Render::Scale9GridData &);
	Scaleform::Render::Scale9GridData & operator=(const Scaleform::Render::Scale9GridData &);
};
class Scaleform::RefCountBase<Scaleform::Render::Scale9GridData,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::Render::Scale9GridData,2>(Scaleform::RefCountBase<Scaleform::Render::Scale9GridData,2> &);
	RefCountBase<Scaleform::Render::Scale9GridData,2>(const Scaleform::RefCountBase<Scaleform::Render::Scale9GridData,2> &);
	RefCountBase<Scaleform::Render::Scale9GridData,2>();
	virtual ~RefCountBase<Scaleform::Render::Scale9GridData,2>();
	Scaleform::RefCountBase<Scaleform::Render::Scale9GridData,2> & operator=(Scaleform::RefCountBase<Scaleform::Render::Scale9GridData,2> &);
	Scaleform::RefCountBase<Scaleform::Render::Scale9GridData,2> & operator=(const Scaleform::RefCountBase<Scaleform::Render::Scale9GridData,2> &);
};
class Scaleform::Render::MeshProvider
{
public:
	~MeshProvider();
	void AddRef();
	void Release();
	bool GetData(Scaleform::Render::HAL *, Scaleform::Render::MeshBase *, Scaleform::Render::VertexOutput *, unsigned long);
	void OnEvict(Scaleform::Render::MeshBase *);
	Scaleform::Render::Rect<float> GetIdentityBounds();
	Scaleform::Render::Rect<float> GetBounds(const Scaleform::Render::Matrix2x4<float> &);
	Scaleform::Render::Rect<float> GetCorrectBounds(const Scaleform::Render::Matrix2x4<float> &, float, Scaleform::Render::StrokeGenerator *, const Scaleform::Render::ToleranceParams *);
	bool HitTestShape(const Scaleform::Render::Matrix2x4<float> &, float, float, float, Scaleform::Render::StrokeGenerator *, const Scaleform::Render::ToleranceParams *);
	unsigned long GetLayerCount();
	unsigned long GetFillCount(unsigned long, unsigned long);
	void GetFillData(Scaleform::Render::FillData *, unsigned long, unsigned long, unsigned long);
	void GetFillMatrix(Scaleform::Render::HAL *, Scaleform::Render::MeshBase *, Scaleform::Render::Matrix2x4<float> *, unsigned long, unsigned long, unsigned long);
	bool IsValid();
	MeshProvider(const Scaleform::Render::MeshProvider &);
	MeshProvider();
	Scaleform::Render::MeshProvider & operator=(const Scaleform::Render::MeshProvider &);
};
Scaleform::Render::Rect<float> Scaleform::Render::MeshProvider::GetIdentityBounds(); // 0x14034F980
Scaleform::Render::Rect<float> Scaleform::Render::MeshProvider::GetBounds(const Scaleform::Render::Matrix2x4<float> & m); // 0x140047540
bool Scaleform::Render::MeshProvider::HitTestShape(const Scaleform::Render::Matrix2x4<float> & m, float x, float y, float morphRatio, Scaleform::Render::StrokeGenerator * gen, const Scaleform::Render::ToleranceParams * tol); // 0x14004BBE0
unsigned long Scaleform::Render::MeshProvider::GetLayerCount(); // 0x1400482A0
unsigned long Scaleform::Render::MeshProvider::GetFillCount(unsigned long layer, unsigned long meshGenFlags); // 0x1400470F0
void Scaleform::Render::MeshProvider::AddRef(); // 0x14002E7C0
bool Scaleform::Render::MeshProvider::IsValid(); // 0x1400B8180
class Scaleform::RefCountBase<Scaleform::Render::MeshProvider_RCImpl,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::Render::MeshProvider_RCImpl,2>(Scaleform::RefCountBase<Scaleform::Render::MeshProvider_RCImpl,2> &);
	RefCountBase<Scaleform::Render::MeshProvider_RCImpl,2>(const Scaleform::RefCountBase<Scaleform::Render::MeshProvider_RCImpl,2> &);
	RefCountBase<Scaleform::Render::MeshProvider_RCImpl,2>();
	virtual ~RefCountBase<Scaleform::Render::MeshProvider_RCImpl,2>();
	Scaleform::RefCountBase<Scaleform::Render::MeshProvider_RCImpl,2> & operator=(Scaleform::RefCountBase<Scaleform::Render::MeshProvider_RCImpl,2> &);
	Scaleform::RefCountBase<Scaleform::Render::MeshProvider_RCImpl,2> & operator=(const Scaleform::RefCountBase<Scaleform::Render::MeshProvider_RCImpl,2> &);
};
class Scaleform::Render::MeshProvider_RCImpl :
	Scaleform::RefCountBase<Scaleform::Render::MeshProvider_RCImpl,2>,
	Scaleform::Render::MeshProvider
{
public:
	virtual void AddRef();
	virtual void Release();
	MeshProvider_RCImpl(Scaleform::Render::MeshProvider_RCImpl &);
	MeshProvider_RCImpl(const Scaleform::Render::MeshProvider_RCImpl &);
	MeshProvider_RCImpl();
	virtual ~MeshProvider_RCImpl();
	Scaleform::Render::MeshProvider_RCImpl & operator=(Scaleform::Render::MeshProvider_RCImpl &);
	Scaleform::Render::MeshProvider_RCImpl & operator=(const Scaleform::Render::MeshProvider_RCImpl &);
};
void Scaleform::Render::MeshProvider_RCImpl::AddRef(); // 0x14034E9D0
void Scaleform::Render::MeshProvider_RCImpl::Release(); // 0x140350690
class Scaleform::Render::MeshBase :
	Scaleform::RefCountBase<Scaleform::Render::MeshBase,68>,
	Scaleform::Render::MeshStagingNode
{
private:
	Scaleform::Ptr<Scaleform::Render::MeshProvider> pProvider; // 0x50
	Scaleform::Ptr<Scaleform::Render::Scale9GridData> pScale9Grid; // 0x58
	Scaleform::Render::Matrix2x4<float> ViewMatrix; // 0x60
	float MorphRatio; // 0x80
	unsigned long Layer; // 0x84
	unsigned long MGFlags; // 0x88
public:
	MeshBase(Scaleform::Render::MeshBase &);
	MeshBase(const Scaleform::Render::MeshBase &);
	MeshBase(Scaleform::Render::MeshProvider *, const Scaleform::Render::Matrix2x4<float> &, float, unsigned long, unsigned long);
	Scaleform::Render::MeshProvider * GetProvider();
	void ClearProvider();
	void OnEvictProviderNotify();
	const Scaleform::Render::Matrix2x4<float> & GetViewMatrix();
	float GetMorphRatio();
	unsigned long GetLayer();
	unsigned long GetMeshGenFlags();
	Scaleform::Render::Scale9GridData * GetScale9Grid();
	void SetScale9Grid(Scaleform::Render::Scale9GridData *);
	bool IsEvicted();
	virtual ~MeshBase();
	Scaleform::Render::MeshBase & operator=(Scaleform::Render::MeshBase &);
	Scaleform::Render::MeshBase & operator=(const Scaleform::Render::MeshBase &);
};
class Scaleform::RefCountBase<Scaleform::Render::MeshBase,68> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,68>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 68,
	};
public:
	RefCountBase<Scaleform::Render::MeshBase,68>(Scaleform::RefCountBase<Scaleform::Render::MeshBase,68> &);
	RefCountBase<Scaleform::Render::MeshBase,68>(const Scaleform::RefCountBase<Scaleform::Render::MeshBase,68> &);
	RefCountBase<Scaleform::Render::MeshBase,68>();
	virtual ~RefCountBase<Scaleform::Render::MeshBase,68>();
	Scaleform::RefCountBase<Scaleform::Render::MeshBase,68> & operator=(Scaleform::RefCountBase<Scaleform::Render::MeshBase,68> &);
	Scaleform::RefCountBase<Scaleform::Render::MeshBase,68> & operator=(const Scaleform::RefCountBase<Scaleform::Render::MeshBase,68> &);
};
class Scaleform::Ptr<Scaleform::Render::MeshProvider>
{
protected:
	Scaleform::Render::MeshProvider * pObject; // 0x0
public:
	Ptr<Scaleform::Render::MeshProvider>(const Scaleform::Ptr<Scaleform::Render::MeshProvider> &);
	Ptr<Scaleform::Render::MeshProvider>(Scaleform::Render::MeshProvider *);
	Ptr<Scaleform::Render::MeshProvider>(Scaleform::Ptr<Scaleform::Render::MeshProvider> &, Scaleform::PickType);
	Ptr<Scaleform::Render::MeshProvider>(Scaleform::Pickable<Scaleform::Render::MeshProvider>);
	Ptr<Scaleform::Render::MeshProvider>(Scaleform::Render::MeshProvider &);
	Ptr<Scaleform::Render::MeshProvider>();
	~Ptr<Scaleform::Render::MeshProvider>();
	bool operator==(Scaleform::Render::MeshProvider *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::MeshProvider> &);
	bool operator!=(Scaleform::Render::MeshProvider *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::MeshProvider> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::MeshProvider> &);
	Scaleform::Ptr<Scaleform::Render::MeshProvider> & operator=(Scaleform::Pickable<Scaleform::Render::MeshProvider>);
	const Scaleform::Ptr<Scaleform::Render::MeshProvider> & operator=(Scaleform::Render::MeshProvider &);
	const Scaleform::Ptr<Scaleform::Render::MeshProvider> & operator=(Scaleform::Render::MeshProvider *);
	const Scaleform::Ptr<Scaleform::Render::MeshProvider> & operator=(const Scaleform::Ptr<Scaleform::Render::MeshProvider> &);
	Scaleform::Ptr<Scaleform::Render::MeshProvider> & SetPtr(Scaleform::Pickable<Scaleform::Render::MeshProvider>);
	Scaleform::Ptr<Scaleform::Render::MeshProvider> & SetPtr(Scaleform::Render::MeshProvider &);
	Scaleform::Ptr<Scaleform::Render::MeshProvider> & SetPtr(Scaleform::Render::MeshProvider *);
	Scaleform::Ptr<Scaleform::Render::MeshProvider> & SetPtr(const Scaleform::Ptr<Scaleform::Render::MeshProvider> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::MeshProvider * & GetRawRef();
	Scaleform::Render::MeshProvider * GetPtr();
	Scaleform::Render::MeshProvider & operator*();
	Scaleform::Render::MeshProvider * operator->();
	Scaleform::Render::MeshProvider * operator class Scaleform::Render::MeshProvider *();
	Scaleform::Ptr<Scaleform::Render::MeshProvider> & Pick(Scaleform::Render::MeshProvider *);
	Scaleform::Ptr<Scaleform::Render::MeshProvider> & Pick(Scaleform::Pickable<Scaleform::Render::MeshProvider>);
	Scaleform::Ptr<Scaleform::Render::MeshProvider> & Pick(Scaleform::Ptr<Scaleform::Render::MeshProvider> &);
};
class Scaleform::Ptr<Scaleform::Render::Scale9GridData>
{
protected:
	Scaleform::Render::Scale9GridData * pObject; // 0x0
public:
	Ptr<Scaleform::Render::Scale9GridData>(const Scaleform::Ptr<Scaleform::Render::Scale9GridData> &);
	Ptr<Scaleform::Render::Scale9GridData>(Scaleform::Render::Scale9GridData *);
	Ptr<Scaleform::Render::Scale9GridData>(Scaleform::Ptr<Scaleform::Render::Scale9GridData> &, Scaleform::PickType);
	Ptr<Scaleform::Render::Scale9GridData>(Scaleform::Pickable<Scaleform::Render::Scale9GridData>);
	Ptr<Scaleform::Render::Scale9GridData>(Scaleform::Render::Scale9GridData &);
	Ptr<Scaleform::Render::Scale9GridData>();
	~Ptr<Scaleform::Render::Scale9GridData>();
	bool operator==(Scaleform::Render::Scale9GridData *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::Scale9GridData> &);
	bool operator!=(Scaleform::Render::Scale9GridData *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::Scale9GridData> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::Scale9GridData> &);
	Scaleform::Ptr<Scaleform::Render::Scale9GridData> & operator=(Scaleform::Pickable<Scaleform::Render::Scale9GridData>);
	const Scaleform::Ptr<Scaleform::Render::Scale9GridData> & operator=(Scaleform::Render::Scale9GridData &);
	const Scaleform::Ptr<Scaleform::Render::Scale9GridData> & operator=(Scaleform::Render::Scale9GridData *);
	const Scaleform::Ptr<Scaleform::Render::Scale9GridData> & operator=(const Scaleform::Ptr<Scaleform::Render::Scale9GridData> &);
	Scaleform::Ptr<Scaleform::Render::Scale9GridData> & SetPtr(Scaleform::Pickable<Scaleform::Render::Scale9GridData>);
	Scaleform::Ptr<Scaleform::Render::Scale9GridData> & SetPtr(Scaleform::Render::Scale9GridData &);
	Scaleform::Ptr<Scaleform::Render::Scale9GridData> & SetPtr(Scaleform::Render::Scale9GridData *);
	Scaleform::Ptr<Scaleform::Render::Scale9GridData> & SetPtr(const Scaleform::Ptr<Scaleform::Render::Scale9GridData> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::Scale9GridData * & GetRawRef();
	Scaleform::Render::Scale9GridData * GetPtr();
	Scaleform::Render::Scale9GridData & operator*();
	Scaleform::Render::Scale9GridData * operator->();
	Scaleform::Render::Scale9GridData * operator struct Scaleform::Render::Scale9GridData *();
	Scaleform::Ptr<Scaleform::Render::Scale9GridData> & Pick(Scaleform::Render::Scale9GridData *);
	Scaleform::Ptr<Scaleform::Render::Scale9GridData> & Pick(Scaleform::Pickable<Scaleform::Render::Scale9GridData>);
	Scaleform::Ptr<Scaleform::Render::Scale9GridData> & Pick(Scaleform::Ptr<Scaleform::Render::Scale9GridData> &);
};
Scaleform::Render::MeshBase::MeshBase(Scaleform::Render::MeshProvider * provider, const Scaleform::Render::Matrix2x4<float> & viewMatrix, float morphRatio, unsigned long layer, unsigned long meshGenFlags); // 0x140397730
void Scaleform::Render::MeshBase::SetScale9Grid(Scaleform::Render::Scale9GridData * s9g); // 0x140357520
bool Scaleform::Render::MeshBase::IsEvicted(); // 0x140399790
enum Scaleform::Render::FillMergeFlags
{
	FillMerge_None = 0,
	FillMerge_EAlpha = 1,
	FillMerge_Weight = 2,
	FillMerge_EAlpha_Weight = 3,
};
class Scaleform::Render::VertexOutput
{
public:
	~VertexOutput();
	struct Fill;
	bool BeginOutput(const Scaleform::Render::VertexOutput::Fill *, unsigned long, const Scaleform::Render::Matrix2x4<float> &);
	void EndOutput();
	void SetVertices(unsigned long, unsigned long, void *, unsigned long);
	void SetIndices(unsigned long, unsigned long, unsigned short *, unsigned long);
	VertexOutput(const Scaleform::Render::VertexOutput &);
	VertexOutput();
	Scaleform::Render::VertexOutput & operator=(const Scaleform::Render::VertexOutput &);
};
struct Scaleform::Render::VertexOutput::Fill
{
	unsigned long VertexCount; // 0x0
	unsigned long IndexCount; // 0x4
	const Scaleform::Render::VertexFormat * pFormat; // 0x8
	unsigned long FillIndex0; // 0x10
	unsigned long FillIndex1; // 0x14
	unsigned long MergeFlags; // 0x18
	unsigned long MeshIndex; // 0x1C
};
enum Scaleform::Render::MeshGenFlags
{
	Mesh_EdgeAA = 1,
	Mesh_Mask = 2,
	Mesh_Scale9 = 8,
};
class Scaleform::Render::Mesh :
	Scaleform::Render::MeshBase
{
public:
	Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Render::MeshCacheItem *,2> CacheItems; // 0x90
	Scaleform::Render::Matrix2x4<float> VertexMatrix; // 0xB0
	bool LargeMesh; // 0xD0
	Mesh(const Scaleform::Render::Mesh &);
	Mesh(Scaleform::Render::MeshProvider *, const Scaleform::Render::Matrix2x4<float> &, float, unsigned long, unsigned long);
	virtual ~Mesh();
	void RemoveMeshCacheItem(Scaleform::Render::MeshCacheItem *);
	virtual void OnStagingNodeEvict();
	virtual bool IsEvicted();
	Scaleform::Render::MeshUseStatus GetUseStatus();
	void AddRef_NTimes(unsigned long);
	void Release_NTimes(unsigned long);
	static void AddRef_Array(Scaleform::Render::Mesh * *, unsigned long);
	static void Release_Array(Scaleform::Render::Mesh * *, unsigned long);
	Scaleform::Render::Mesh & operator=(const Scaleform::Render::Mesh &);
};
class Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Render::MeshCacheItem *,2>
{
private:
	unsigned long long Size; // 0x0
	struct AllocData;
	Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Render::MeshCacheItem *,2>::AllocData AD; // 0x8
	unsigned char Raw[16]; // 0x8
	static unsigned long long GetAllocSize(unsigned long long);
	Scaleform::Render::MeshCacheItem * * allocInsertCopy(unsigned long long, Scaleform::Render::MeshCacheItem * *, unsigned long long, unsigned long long);
	void insertMemorySpot(unsigned long long, Scaleform::Render::MeshCacheItem * *, unsigned long long);
	Scaleform::Render::MeshCacheItem * * insertSpot(unsigned long long);
public:
	ArrayReserveLH_Mov<Scaleform::Render::MeshCacheItem *,2>(Scaleform::Render::MeshCacheItem * &);
	ArrayReserveLH_Mov<Scaleform::Render::MeshCacheItem *,2>();
	~ArrayReserveLH_Mov<Scaleform::Render::MeshCacheItem *,2>();
	bool Add(Scaleform::Render::MeshCacheItem * &);
	bool InsertAt(unsigned long long, Scaleform::Render::MeshCacheItem * &);
	bool Add_NoDuplicate(Scaleform::Render::MeshCacheItem * &);
	void RemoveAt(unsigned long long);
	void Remove(Scaleform::Render::MeshCacheItem * &);
	void Clear();
	unsigned long long GetSize();
	Scaleform::Render::MeshCacheItem * * GetBuffer();
	Scaleform::Render::MeshCacheItem * * GetBuffer();
	Scaleform::Render::MeshCacheItem * & operator[](unsigned long long);
	Scaleform::Render::MeshCacheItem * & operator[](unsigned long long);
};
void Scaleform::Render::Mesh::OnStagingNodeEvict(); // 0x1403997B0
bool Scaleform::Render::Mesh::IsEvicted(); // 0x140399770
enum Scaleform::Render::PrimitiveFillType
{
	PrimFill_None = 0,
	PrimFill_Mask = 1,
	PrimFill_SolidColor = 2,
	PrimFill_VColor = 3,
	PrimFill_VColor_EAlpha = 4,
	PrimFill_Texture = 5,
	PrimFill_Texture_EAlpha = 6,
	PrimFill_Texture_VColor = 7,
	PrimFill_Texture_VColor_EAlpha = 8,
	PrimFill_2Texture = 9,
	PrimFill_2Texture_EAlpha = 10,
	PrimFill_UVTexture = 11,
	PrimFill_UVTextureAlpha_VColor = 12,
	PrimFill_UVTextureDFAlpha_VColor = 13,
	PrimFill_Type_Count = 14,
};
enum Scaleform::Render::PrimitiveFillFlags
{
	FF_Multiply = 1,
	FF_Invert = 2,
	FF_AlphaWrite = 4,
	FF_Cxform = 8,
	FF_3DProjection = 16,
	FF_Blending = 32,
	FF_BlendMask = 3,
};
struct Scaleform::Render::PrimitiveFillData
{
	Scaleform::Render::PrimitiveFillType Type; // 0x0
	Scaleform::Render::Color SolidColor; // 0x4
	Scaleform::Render::ImageFillMode FillModes[2]; // 0x8
	Scaleform::Ptr<Scaleform::Render::Texture> Textures[2]; // 0x10
	const Scaleform::Render::VertexFormat * pFormat; // 0x20
	PrimitiveFillData(const Scaleform::Render::PrimitiveFillData &);
	PrimitiveFillData(Scaleform::Render::PrimitiveFillType, const Scaleform::Render::VertexFormat *, Scaleform::Render::Texture *, Scaleform::Render::ImageFillMode, Scaleform::Render::Texture *, Scaleform::Render::ImageFillMode);
	PrimitiveFillData(Scaleform::Render::PrimitiveFillType, const Scaleform::Render::VertexFormat *, Scaleform::Render::Color);
	PrimitiveFillData(Scaleform::Render::PrimitiveFillType, const Scaleform::Render::VertexFormat *);
	PrimitiveFillData();
	bool operator==(const Scaleform::Render::PrimitiveFillData &);
	bool operator!=(const Scaleform::Render::PrimitiveFillData &);
	Scaleform::Render::PrimitiveFillData & operator=(const Scaleform::Render::PrimitiveFillData &);
	unsigned char GetTextureCount();
	unsigned char GetTextureMatrixCount();
	unsigned long long GetHashValue();
	bool RequiresBlend();
	static bool CheckVertexFormat(Scaleform::Render::PrimitiveFillType, const Scaleform::Render::VertexFormat *);
	~PrimitiveFillData();
};
class Scaleform::Ptr<Scaleform::Render::Texture>
{
protected:
	Scaleform::Render::Texture * pObject; // 0x0
public:
	Ptr<Scaleform::Render::Texture>(const Scaleform::Ptr<Scaleform::Render::Texture> &);
	Ptr<Scaleform::Render::Texture>(Scaleform::Render::Texture *);
	Ptr<Scaleform::Render::Texture>(Scaleform::Ptr<Scaleform::Render::Texture> &, Scaleform::PickType);
	Ptr<Scaleform::Render::Texture>(Scaleform::Pickable<Scaleform::Render::Texture>);
	Ptr<Scaleform::Render::Texture>(Scaleform::Render::Texture &);
	Ptr<Scaleform::Render::Texture>();
	~Ptr<Scaleform::Render::Texture>();
	bool operator==(Scaleform::Render::Texture *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::Texture> &);
	bool operator!=(Scaleform::Render::Texture *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::Texture> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::Texture> &);
	Scaleform::Ptr<Scaleform::Render::Texture> & operator=(Scaleform::Pickable<Scaleform::Render::Texture>);
	const Scaleform::Ptr<Scaleform::Render::Texture> & operator=(Scaleform::Render::Texture &);
	const Scaleform::Ptr<Scaleform::Render::Texture> & operator=(Scaleform::Render::Texture *);
	const Scaleform::Ptr<Scaleform::Render::Texture> & operator=(const Scaleform::Ptr<Scaleform::Render::Texture> &);
	Scaleform::Ptr<Scaleform::Render::Texture> & SetPtr(Scaleform::Pickable<Scaleform::Render::Texture>);
	Scaleform::Ptr<Scaleform::Render::Texture> & SetPtr(Scaleform::Render::Texture &);
	Scaleform::Ptr<Scaleform::Render::Texture> & SetPtr(Scaleform::Render::Texture *);
	Scaleform::Ptr<Scaleform::Render::Texture> & SetPtr(const Scaleform::Ptr<Scaleform::Render::Texture> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::Texture * & GetRawRef();
	Scaleform::Render::Texture * GetPtr();
	Scaleform::Render::Texture & operator*();
	Scaleform::Render::Texture * operator->();
	Scaleform::Render::Texture * operator class Scaleform::Render::Texture *();
	Scaleform::Ptr<Scaleform::Render::Texture> & Pick(Scaleform::Render::Texture *);
	Scaleform::Ptr<Scaleform::Render::Texture> & Pick(Scaleform::Pickable<Scaleform::Render::Texture>);
	Scaleform::Ptr<Scaleform::Render::Texture> & Pick(Scaleform::Ptr<Scaleform::Render::Texture> &);
};
Scaleform::Render::PrimitiveFillData::PrimitiveFillData(const Scaleform::Render::PrimitiveFillData & src); // 0x1403978A0
unsigned long long Scaleform::Render::PrimitiveFillData::GetHashValue(); // 0x140398E20
bool Scaleform::Render::PrimitiveFillData::RequiresBlend(); // 0x1405C0FE0
enum Scaleform::Render::FillType
{
	Fill_None = 0,
	Fill_Mask = 1,
	Fill_SolidColor = 2,
	Fill_VColor = 3,
	Fill_Image = 4,
	Fill_Gradient = 5,
	Fill_VColor_TestKey = 6,
};
class Scaleform::Render::FillData
{
public:
	FillData(Scaleform::Render::FillData &);
	FillData(const Scaleform::Render::FillData &);
	FillData(Scaleform::Render::GradientData *);
	FillData(Scaleform::Render::Image *, Scaleform::Render::ImageFillMode);
	FillData(unsigned long);
	FillData(Scaleform::Render::FillType);
	Scaleform::Render::FillType Type; // 0x0
	unsigned long Color; // 0x8
	Scaleform::Render::GradientData * pGradient; // 0x8
	Scaleform::Render::Image * pImage; // 0x8
	Scaleform::Render::PrimitiveFillType PrimFill; // 0x10
	Scaleform::Render::ImageFillMode FillMode; // 0x14
	const Scaleform::Render::VertexFormat * pVFormat; // 0x18
	Scaleform::Render::FillData & operator=(Scaleform::Render::FillData &);
	Scaleform::Render::FillData & operator=(const Scaleform::Render::FillData &);
	void __dflt_ctor_closure();
};
class Scaleform::RefCountBaseNTS<Scaleform::Render::PrimitiveFill,71> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,71>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 71,
	};
public:
	RefCountBaseNTS<Scaleform::Render::PrimitiveFill,71>(Scaleform::RefCountBaseNTS<Scaleform::Render::PrimitiveFill,71> &);
	RefCountBaseNTS<Scaleform::Render::PrimitiveFill,71>(const Scaleform::RefCountBaseNTS<Scaleform::Render::PrimitiveFill,71> &);
	RefCountBaseNTS<Scaleform::Render::PrimitiveFill,71>();
	virtual ~RefCountBaseNTS<Scaleform::Render::PrimitiveFill,71>();
	Scaleform::RefCountBaseNTS<Scaleform::Render::PrimitiveFill,71> & operator=(Scaleform::RefCountBaseNTS<Scaleform::Render::PrimitiveFill,71> &);
	Scaleform::RefCountBaseNTS<Scaleform::Render::PrimitiveFill,71> & operator=(const Scaleform::RefCountBaseNTS<Scaleform::Render::PrimitiveFill,71> &);
};
class Scaleform::Render::PrimitiveFill :
	Scaleform::RefCountBaseNTS<Scaleform::Render::PrimitiveFill,71>,
	Unassignable
{
protected:
	const Scaleform::Render::PrimitiveFillData Data; // 0x10
	Scaleform::Render::PrimitiveFillManager * pManager; // 0x38
public:
	PrimitiveFill(const Scaleform::Render::PrimitiveFill &);
	PrimitiveFill(const Scaleform::Render::PrimitiveFillData &, Scaleform::Render::PrimitiveFillManager *);
	virtual ~PrimitiveFill();
	bool operator==(const Scaleform::Render::PrimitiveFill &);
	bool operator!=(const Scaleform::Render::PrimitiveFill &);
	Scaleform::Render::PrimitiveFillType GetType();
	Scaleform::Render::Color GetSolidColor();
	Scaleform::Render::Texture * GetTexture(unsigned long);
	Scaleform::Render::ImageFillMode GetFillMode(unsigned long);
	const Scaleform::Render::VertexFormat * GetVertexFormat();
	unsigned char GetTextureCount();
	unsigned char GetTextureMatrixCount();
	unsigned long long GetHashValue();
	bool RequiresBlend();
	static bool IsSolid(Scaleform::Render::PrimitiveFillType);
	static bool HasTexture(Scaleform::Render::PrimitiveFillType);
	const Scaleform::Render::PrimitiveFillData & GetData();
	void SetManager(Scaleform::Render::PrimitiveFillManager *);
	Scaleform::Render::PrimitiveFillManager * GetManager();
	struct PtrHashFunctor;
};
struct Scaleform::Render::PrimitiveFill::PtrHashFunctor
{
	unsigned long long operator()(const Scaleform::Render::PrimitiveFillData &);
	unsigned long long operator()(const Scaleform::Render::PrimitiveFill *);
};
class Scaleform::RefCountBase<Scaleform::Render::PrimitiveFillManager,71> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,71>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 71,
	};
public:
	RefCountBase<Scaleform::Render::PrimitiveFillManager,71>(Scaleform::RefCountBase<Scaleform::Render::PrimitiveFillManager,71> &);
	RefCountBase<Scaleform::Render::PrimitiveFillManager,71>(const Scaleform::RefCountBase<Scaleform::Render::PrimitiveFillManager,71> &);
	RefCountBase<Scaleform::Render::PrimitiveFillManager,71>();
	virtual ~RefCountBase<Scaleform::Render::PrimitiveFillManager,71>();
	Scaleform::RefCountBase<Scaleform::Render::PrimitiveFillManager,71> & operator=(Scaleform::RefCountBase<Scaleform::Render::PrimitiveFillManager,71> &);
	Scaleform::RefCountBase<Scaleform::Render::PrimitiveFillManager,71> & operator=(const Scaleform::RefCountBase<Scaleform::Render::PrimitiveFillManager,71> &);
};
class Scaleform::Render::PrimitiveFillManager :
	Scaleform::RefCountBase<Scaleform::Render::PrimitiveFillManager,71>
{
	class FillHashSet;
	class GradientHashSet;
public:
	PrimitiveFillManager(const Scaleform::Render::PrimitiveFillManager &);
	PrimitiveFillManager(Scaleform::MemoryHeap *);
	virtual ~PrimitiveFillManager();
	Scaleform::Render::PrimitiveFill * CreateFill(const Scaleform::Render::FillData &, Scaleform::Ptr<Scaleform::Render::Image> *, Scaleform::Render::TextureManager *, float);
	Scaleform::Render::PrimitiveFill * CreateFill(const Scaleform::Render::PrimitiveFillData &);
	Scaleform::Render::PrimitiveFill * CreateMergedFill(unsigned long, const Scaleform::Render::VertexFormat *, const Scaleform::Render::FillData *, const Scaleform::Render::FillData *, Scaleform::Ptr<Scaleform::Render::Image> *, Scaleform::Ptr<Scaleform::Render::Image> *, Scaleform::Render::TextureManager *, float);
	unsigned long long GetNumGradients();
private:
	void removeFill(Scaleform::Render::PrimitiveFill *);
	void removeGradient(Scaleform::Render::GradientImage *);
	Scaleform::Render::Image * createGradientImage(Scaleform::Render::GradientData *, float);
	Scaleform::MemoryHeap * pHeap; // 0x10
	Scaleform::HashSetLH<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::Render::PrimitiveFill::PtrHashFunctor,2,Scaleform::HashsetCachedEntry<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor> > FillSet; // 0x18
	Scaleform::HashSetLH<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,2,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor> > Gradients; // 0x20
public:
	Scaleform::Render::PrimitiveFillManager & operator=(const Scaleform::Render::PrimitiveFillManager &);
};
class Scaleform::HashSetLH<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::Render::PrimitiveFill::PtrHashFunctor,2,Scaleform::HashsetCachedEntry<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor> > :
	Scaleform::HashSet<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::PrimitiveFill *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor> >
{
	class SelfType;
	class BaseType;
	typedef Scaleform::Render::PrimitiveFill ValueType;
public:
	HashSetLH<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::Render::PrimitiveFill::PtrHashFunctor,2,Scaleform::HashsetCachedEntry<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunct(const Scaleform::HashSetLH<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::Render::PrimitiveFill::PtrHashFunctor,2,Scaleform::HashsetCachedEntry<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor> > &);
	HashSetLH<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::Render::PrimitiveFill::PtrHashFunctor,2,Scaleform::HashsetCachedEntry<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunct(long);
	HashSetLH<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::Render::PrimitiveFill::PtrHashFunctor,2,Scaleform::HashsetCachedEntry<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunct();
	~HashSetLH<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::Render::PrimitiveFill::PtrHashFunctor,2,Scaleform::HashsetCachedEntry<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunc();
	void operator=(const Scaleform::HashSetLH<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor,Scaleform::Render::PrimitiveFill::PtrHashFunctor,2,Scaleform::HashsetCachedEntry<Scaleform::Render::PrimitiveFill *,Scaleform::Render::PrimitiveFill::PtrHashFunctor> > &);
};
class Scaleform::HashSetLH<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,2,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor> > :
	Scaleform::HashSet<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Render::GradientImage *,2>,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor> >
{
	class SelfType;
	class BaseType;
	typedef Scaleform::Render::GradientImage ValueType;
public:
	HashSetLH<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,2,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunct(const Scaleform::HashSetLH<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,2,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor> > &);
	HashSetLH<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,2,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunct(long);
	HashSetLH<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,2,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunct();
	~HashSetLH<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,2,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunc();
	void operator=(const Scaleform::HashSetLH<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor,Scaleform::Render::GradientImage::PtrHashFunctor,2,Scaleform::HashsetCachedEntry<Scaleform::Render::GradientImage *,Scaleform::Render::GradientImage::PtrHashFunctor> > &);
};
Scaleform::Render::PrimitiveFillManager::~PrimitiveFillManager(); // 0x1403185C0
struct Scaleform::Render::DistFieldUniforms
{
	float ShadowColor[4]; // 0x0
	float ShadowEnable; // 0x10
	float padding[3]; // 0x14
	float ShadowOffset[4]; // 0x20
	float ShadowWidth; // 0x30
	float padding2[2]; // 0x34
	float Width; // 0x3C
	DistFieldUniforms();
};
class Scaleform::Render::CacheBase
{
public:
	~CacheBase();
	void UnlockBuffers();
	CacheBase(const Scaleform::Render::CacheBase &);
	CacheBase();
	Scaleform::Render::CacheBase & operator=(const Scaleform::Render::CacheBase &);
};
enum Scaleform::Render::CacheType
{
	Cache_Mesh = 0,
	Cache_Glyph = 1,
	Cache_Count = 2,
};
class Scaleform::Render::RQCacheInterface
{
public:
	RQCacheInterface();
	Scaleform::Render::CacheBase * GetCache(Scaleform::Render::CacheType);
	void SetCache(Scaleform::Render::CacheType, Scaleform::Render::CacheBase *);
	bool AreCachesLocked();
	void UnlockCaches();
	void SetCacheLocked(Scaleform::Render::CacheType);
	void ClearCacheLocked(Scaleform::Render::CacheType);
private:
	Scaleform::Render::CacheBase * pCaches[2]; // 0x0
	unsigned long LockFlags; // 0x10
};
void Scaleform::Render::RQCacheInterface::UnlockCaches(); // 0x14039AE70
class Scaleform::Render::RenderQueueItem
{
	enum QIPrepareResult
	{
		QIP_Done = 0,
		QIP_NeedCache = 1,
	};
	class Interface;
public:
	RenderQueueItem(const Scaleform::Render::RenderQueueItem &);
	RenderQueueItem(Scaleform::Render::RenderQueueItem::Interface *, void *);
	RenderQueueItem();
	void Clear();
	void Init(Scaleform::Render::RenderQueueItem::Interface *, void *);
	Scaleform::Render::RenderQueueItem & operator=(const Scaleform::Render::RenderQueueItem &);
	void * GetData();
	Scaleform::Render::RenderQueueItem::Interface * GetInterface();
	Scaleform::Render::RenderQueueItem::QIPrepareResult Prepare(Scaleform::Render::RenderQueueProcessor &, bool);
	void EmitToHAL(Scaleform::Render::RenderQueueProcessor &);
protected:
	Scaleform::Render::RenderQueueItem::Interface * pImpl; // 0x0
	void * Data; // 0x8
};
class Scaleform::Render::RenderQueueItem::Interface
{
	enum QIPrepareResult
	{
		QIP_Done = 0,
		QIP_NeedCache = 1,
	};
public:
	~Interface();
	Scaleform::Render::RenderQueueItem::QIPrepareResult Prepare(Scaleform::Render::RenderQueueItem &, Scaleform::Render::RenderQueueProcessor &, bool);
	void EmitToHAL(Scaleform::Render::RenderQueueItem &, Scaleform::Render::RenderQueueProcessor &);
	Interface(const Scaleform::Render::RenderQueueItem::Interface &);
	Interface();
	Scaleform::Render::RenderQueueItem::Interface & operator=(const Scaleform::Render::RenderQueueItem::Interface &);
};
class Scaleform::RefCountBase<Scaleform::Render::Primitive,67> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 67,
	};
public:
	RefCountBase<Scaleform::Render::Primitive,67>(Scaleform::RefCountBase<Scaleform::Render::Primitive,67> &);
	RefCountBase<Scaleform::Render::Primitive,67>(const Scaleform::RefCountBase<Scaleform::Render::Primitive,67> &);
	RefCountBase<Scaleform::Render::Primitive,67>();
	virtual ~RefCountBase<Scaleform::Render::Primitive,67>();
	Scaleform::RefCountBase<Scaleform::Render::Primitive,67> & operator=(Scaleform::RefCountBase<Scaleform::Render::Primitive,67> &);
	Scaleform::RefCountBase<Scaleform::Render::Primitive,67> & operator=(const Scaleform::RefCountBase<Scaleform::Render::Primitive,67> &);
};
class Scaleform::Render::Primitive :
	Scaleform::RefCountBase<Scaleform::Render::Primitive,67>,
	Scaleform::Render::RenderQueueItem::Interface
{
public:
	Scaleform::Ptr<Scaleform::Render::PrimitiveFill> pFill; // 0x18
	Scaleform::List<Scaleform::Render::PrimitiveBatch,Scaleform::Render::PrimitiveBatch,Scaleform::ListNode<Scaleform::Render::PrimitiveBatch> > Batches; // 0x20
	const unsigned char MatricesPerMesh; // 0x30
	struct MeshEntry;
	Scaleform::ArrayLH<Scaleform::Render::Primitive::MeshEntry,2,Scaleform::ArrayDefaultPolicy> Meshes; // 0x38
	unsigned long ModifyIndex; // 0x50
	Primitive(Scaleform::Render::PrimitiveFill *);
	virtual ~Primitive();
	Scaleform::Render::PrimitiveFill * GetFill();
	const Scaleform::Render::VertexFormat * GetVertexFormat();
	bool Insert(Scaleform::Render::HAL *, unsigned long, Scaleform::Render::Mesh *, const Scaleform::Render::MatrixPoolImpl::HMatrix &);
	void Remove(unsigned long, unsigned long);
	unsigned long GetMeshCount();
	Scaleform::Render::Mesh * GetMesh(unsigned long);
	void SetMesh(unsigned long, Scaleform::Render::Mesh *);
	void SetMatrix(unsigned long, const Scaleform::Render::MatrixPoolImpl::HMatrix &);
	const Scaleform::Render::MatrixPoolImpl::HMatrix & GetMatrix(unsigned long);
	Scaleform::Render::MatrixPoolImpl::HMatrix & GetMatrix(unsigned long);
	virtual Scaleform::Render::RenderQueueItem::QIPrepareResult Prepare(Scaleform::Render::RenderQueueItem &, Scaleform::Render::RenderQueueProcessor &, bool);
	virtual void EmitToHAL(Scaleform::Render::RenderQueueItem &, Scaleform::Render::RenderQueueProcessor &);
	void VerifyMeshIndices();
	void UpdateMeshIndicies();
protected:
	Scaleform::Render::RenderQueueItem::QIPrepareResult prepare(Scaleform::Render::HAL *, void *, Scaleform::Render::PrimitivePrepareBuffer *, Scaleform::Render::PrimitiveEmitBuffer *, Scaleform::Render::MeshCache *, bool);
	void emitToHAL(Scaleform::Render::HAL *, void *, Scaleform::Render::PrimitivePrepareBuffer *, Scaleform::Render::PrimitiveEmitBuffer *);
	void updateMeshIndicies_Impl();
};
class Scaleform::Ptr<Scaleform::Render::PrimitiveFill>
{
protected:
	Scaleform::Render::PrimitiveFill * pObject; // 0x0
public:
	Ptr<Scaleform::Render::PrimitiveFill>(const Scaleform::Ptr<Scaleform::Render::PrimitiveFill> &);
	Ptr<Scaleform::Render::PrimitiveFill>(Scaleform::Render::PrimitiveFill *);
	Ptr<Scaleform::Render::PrimitiveFill>(Scaleform::Ptr<Scaleform::Render::PrimitiveFill> &, Scaleform::PickType);
	Ptr<Scaleform::Render::PrimitiveFill>(Scaleform::Pickable<Scaleform::Render::PrimitiveFill>);
	Ptr<Scaleform::Render::PrimitiveFill>(Scaleform::Render::PrimitiveFill &);
	Ptr<Scaleform::Render::PrimitiveFill>();
	~Ptr<Scaleform::Render::PrimitiveFill>();
	bool operator==(Scaleform::Render::PrimitiveFill *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::PrimitiveFill> &);
	bool operator!=(Scaleform::Render::PrimitiveFill *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::PrimitiveFill> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::PrimitiveFill> &);
	Scaleform::Ptr<Scaleform::Render::PrimitiveFill> & operator=(Scaleform::Pickable<Scaleform::Render::PrimitiveFill>);
	const Scaleform::Ptr<Scaleform::Render::PrimitiveFill> & operator=(Scaleform::Render::PrimitiveFill &);
	const Scaleform::Ptr<Scaleform::Render::PrimitiveFill> & operator=(Scaleform::Render::PrimitiveFill *);
	const Scaleform::Ptr<Scaleform::Render::PrimitiveFill> & operator=(const Scaleform::Ptr<Scaleform::Render::PrimitiveFill> &);
	Scaleform::Ptr<Scaleform::Render::PrimitiveFill> & SetPtr(Scaleform::Pickable<Scaleform::Render::PrimitiveFill>);
	Scaleform::Ptr<Scaleform::Render::PrimitiveFill> & SetPtr(Scaleform::Render::PrimitiveFill &);
	Scaleform::Ptr<Scaleform::Render::PrimitiveFill> & SetPtr(Scaleform::Render::PrimitiveFill *);
	Scaleform::Ptr<Scaleform::Render::PrimitiveFill> & SetPtr(const Scaleform::Ptr<Scaleform::Render::PrimitiveFill> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::PrimitiveFill * & GetRawRef();
	Scaleform::Render::PrimitiveFill * GetPtr();
	Scaleform::Render::PrimitiveFill & operator*();
	Scaleform::Render::PrimitiveFill * operator->();
	Scaleform::Render::PrimitiveFill * operator class Scaleform::Render::PrimitiveFill *();
	Scaleform::Ptr<Scaleform::Render::PrimitiveFill> & Pick(Scaleform::Render::PrimitiveFill *);
	Scaleform::Ptr<Scaleform::Render::PrimitiveFill> & Pick(Scaleform::Pickable<Scaleform::Render::PrimitiveFill>);
	Scaleform::Ptr<Scaleform::Render::PrimitiveFill> & Pick(Scaleform::Ptr<Scaleform::Render::PrimitiveFill> &);
};
class Scaleform::List<Scaleform::Render::PrimitiveBatch,Scaleform::Render::PrimitiveBatch,Scaleform::ListNode<Scaleform::Render::PrimitiveBatch> >
{
	class ValueType;
private:
	List<Scaleform::Render::PrimitiveBatch,Scaleform::Render::PrimitiveBatch,Scaleform::ListNode<Scaleform::Render::PrimitiveBatch> >(const Scaleform::List<Scaleform::Render::PrimitiveBatch,Scaleform::Render::PrimitiveBatch,Scaleform::ListNode<Scaleform::Render::PrimitiveBatch> > &);
public:
	List<Scaleform::Render::PrimitiveBatch,Scaleform::Render::PrimitiveBatch,Scaleform::ListNode<Scaleform::Render::PrimitiveBatch> >();
	void Clear();
	Scaleform::Render::PrimitiveBatch * GetFirst();
	Scaleform::Render::PrimitiveBatch * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Render::PrimitiveBatch *);
	bool IsLast(const Scaleform::Render::PrimitiveBatch *);
	bool IsNull(const Scaleform::Render::PrimitiveBatch *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::Render::PrimitiveBatch * GetPrev(const Scaleform::Render::PrimitiveBatch *);
	static Scaleform::Render::PrimitiveBatch * GetNext(const Scaleform::Render::PrimitiveBatch *);
	void PushFront(Scaleform::Render::PrimitiveBatch *);
	void PushBack(Scaleform::Render::PrimitiveBatch *);
	static void Remove(Scaleform::Render::PrimitiveBatch *);
	void BringToFront(Scaleform::Render::PrimitiveBatch *);
	void SendToBack(Scaleform::Render::PrimitiveBatch *);
	void PushListToFront(Scaleform::List<Scaleform::Render::PrimitiveBatch,Scaleform::Render::PrimitiveBatch,Scaleform::ListNode<Scaleform::Render::PrimitiveBatch> > &);
	void PushListToBack(Scaleform::List<Scaleform::Render::PrimitiveBatch,Scaleform::Render::PrimitiveBatch,Scaleform::ListNode<Scaleform::Render::PrimitiveBatch> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::Render::PrimitiveBatch,Scaleform::Render::PrimitiveBatch,Scaleform::ListNode<Scaleform::Render::PrimitiveBatch> > &, Scaleform::Render::PrimitiveBatch *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::Render::PrimitiveBatch,Scaleform::Render::PrimitiveBatch,Scaleform::ListNode<Scaleform::Render::PrimitiveBatch> > &, Scaleform::Render::PrimitiveBatch *);
	void PushListItemsToFront(Scaleform::Render::PrimitiveBatch *, Scaleform::Render::PrimitiveBatch *);
private:
	const Scaleform::List<Scaleform::Render::PrimitiveBatch,Scaleform::Render::PrimitiveBatch,Scaleform::ListNode<Scaleform::Render::PrimitiveBatch> > & operator=(const Scaleform::List<Scaleform::Render::PrimitiveBatch,Scaleform::Render::PrimitiveBatch,Scaleform::ListNode<Scaleform::Render::PrimitiveBatch> > &);
	Scaleform::ListNode<Scaleform::Render::PrimitiveBatch> Root; // 0x0
};
struct Scaleform::Render::Primitive::MeshEntry
{
	Scaleform::Render::MatrixPoolImpl::HMatrix M; // 0x0
	Scaleform::Ptr<Scaleform::Render::Mesh> pMesh; // 0x8
	MeshEntry(Scaleform::Render::Primitive::MeshEntry &);
	MeshEntry(const Scaleform::Render::Primitive::MeshEntry &);
	MeshEntry();
	~MeshEntry();
	Scaleform::Render::Primitive::MeshEntry & operator=(Scaleform::Render::Primitive::MeshEntry &);
	Scaleform::Render::Primitive::MeshEntry & operator=(const Scaleform::Render::Primitive::MeshEntry &);
};
class Scaleform::Ptr<Scaleform::Render::Mesh>
{
protected:
	Scaleform::Render::Mesh * pObject; // 0x0
public:
	Ptr<Scaleform::Render::Mesh>(const Scaleform::Ptr<Scaleform::Render::Mesh> &);
	Ptr<Scaleform::Render::Mesh>(Scaleform::Render::Mesh *);
	Ptr<Scaleform::Render::Mesh>(Scaleform::Ptr<Scaleform::Render::Mesh> &, Scaleform::PickType);
	Ptr<Scaleform::Render::Mesh>(Scaleform::Pickable<Scaleform::Render::Mesh>);
	Ptr<Scaleform::Render::Mesh>(Scaleform::Render::Mesh &);
	Ptr<Scaleform::Render::Mesh>();
	~Ptr<Scaleform::Render::Mesh>();
	bool operator==(Scaleform::Render::Mesh *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::Mesh> &);
	bool operator!=(Scaleform::Render::Mesh *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::Mesh> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::Mesh> &);
	Scaleform::Ptr<Scaleform::Render::Mesh> & operator=(Scaleform::Pickable<Scaleform::Render::Mesh>);
	const Scaleform::Ptr<Scaleform::Render::Mesh> & operator=(Scaleform::Render::Mesh &);
	const Scaleform::Ptr<Scaleform::Render::Mesh> & operator=(Scaleform::Render::Mesh *);
	const Scaleform::Ptr<Scaleform::Render::Mesh> & operator=(const Scaleform::Ptr<Scaleform::Render::Mesh> &);
	Scaleform::Ptr<Scaleform::Render::Mesh> & SetPtr(Scaleform::Pickable<Scaleform::Render::Mesh>);
	Scaleform::Ptr<Scaleform::Render::Mesh> & SetPtr(Scaleform::Render::Mesh &);
	Scaleform::Ptr<Scaleform::Render::Mesh> & SetPtr(Scaleform::Render::Mesh *);
	Scaleform::Ptr<Scaleform::Render::Mesh> & SetPtr(const Scaleform::Ptr<Scaleform::Render::Mesh> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::Mesh * & GetRawRef();
	Scaleform::Render::Mesh * GetPtr();
	Scaleform::Render::Mesh & operator*();
	Scaleform::Render::Mesh * operator->();
	Scaleform::Render::Mesh * operator class Scaleform::Render::Mesh *();
	Scaleform::Ptr<Scaleform::Render::Mesh> & Pick(Scaleform::Render::Mesh *);
	Scaleform::Ptr<Scaleform::Render::Mesh> & Pick(Scaleform::Pickable<Scaleform::Render::Mesh>);
	Scaleform::Ptr<Scaleform::Render::Mesh> & Pick(Scaleform::Ptr<Scaleform::Render::Mesh> &);
};
class Scaleform::ArrayLH<Scaleform::Render::Primitive::MeshEntry,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Primitive::MeshEntry,Scaleform::AllocatorLH<Scaleform::Render::Primitive::MeshEntry,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Render::Primitive::MeshEntry,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::Render::Primitive::MeshEntry,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::Render::Primitive::MeshEntry,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::Render::Primitive::MeshEntry,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::Render::Primitive::MeshEntry,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::Render::Primitive::MeshEntry,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::Render::Primitive::MeshEntry,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::Render::Primitive::MeshEntry,2,Scaleform::ArrayDefaultPolicy>();
};
struct Scaleform::ListNode<Scaleform::Render::MeshCacheItemUseNode>
{
	Scaleform::Render::MeshCacheItemUseNode * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::MeshCacheItemUseNode * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::Render::MeshCacheItemUseNode>();
	Scaleform::Render::MeshCacheItemUseNode * GetPrev();
	Scaleform::Render::MeshCacheItemUseNode * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::MeshCacheItemUseNode *);
	void InsertNodeAfter(Scaleform::Render::MeshCacheItemUseNode *);
	void InsertNodeBefore(Scaleform::Render::MeshCacheItemUseNode *);
};
struct Scaleform::Render::MeshCacheItemUseNode :
	Scaleform::ListNode<Scaleform::Render::MeshCacheItemUseNode>
{
	Scaleform::Render::MeshCacheItem * pMeshItem; // 0x10
	void ClearMeshItem();
	void SetMeshItem(Scaleform::Render::MeshCacheItem *);
	MeshCacheItemUseNode();
};
class Scaleform::Render::PrimitiveBatch :
	Scaleform::ListNode<Scaleform::Render::PrimitiveBatch>
{
	enum BatchType
	{
		DP_Single = 0,
		DP_Batch = 1,
		DP_Instanced = 2,
		DP_Virtual = 3,
		DP_Failed = 4,
		DP_None = 5,
		DP_DrawableCount = 3,
	};
public:
	Scaleform::Render::MeshCacheItemUseNode MeshNode; // 0x10
	Scaleform::Render::PrimitiveBatch::BatchType Type; // 0x28
	const Scaleform::Render::VertexFormat * pFormat; // 0x30
	bool LargeMesh; // 0x38
protected:
	Scaleform::Render::Primitive * pPrimitive; // 0x40
	unsigned long MeshCount; // 0x48
	unsigned long MeshIndex; // 0x4C
public:
	void Init(Scaleform::Render::Primitive *, Scaleform::Render::PrimitiveBatch::BatchType, unsigned long, unsigned long);
	Scaleform::Render::StrideArray<Scaleform::Render::MeshBase *> GetMeshes_InstanceAdjusted();
	unsigned long GetMeshIndex();
	unsigned long GetMeshCount();
	Scaleform::Render::Primitive * GetPrimitive();
	void ClearCacheItem();
	Scaleform::Render::MeshCacheItem * GetCacheItem();
	void SetCacheItem(Scaleform::Render::MeshCacheItem *);
	bool IsVirtual();
	bool IsInstanced();
	static Scaleform::Render::PrimitiveBatch * Create(Scaleform::Render::Primitive *, Scaleform::Render::PrimitiveBatch::BatchType, unsigned long, unsigned long);
	void RemoveAndFree();
	void CalcMeshSizes(unsigned long *, unsigned long *);
	Scaleform::Render::PrimitiveBatch * GetNext();
	Scaleform::Render::PrimitiveBatch * GetPrev();
	PrimitiveBatch();
};
class Scaleform::Render::StrideArray<Scaleform::Render::MeshBase *>
{
private:
	Scaleform::Render::MeshBase * * pData; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long StrideSize; // 0x10
public:
	StrideArray<Scaleform::Render::MeshBase *>(const Scaleform::Render::StrideArray<Scaleform::Render::MeshBase *> &, unsigned long long, unsigned long long);
	StrideArray<Scaleform::Render::MeshBase *>(Scaleform::Render::MeshBase * *, unsigned long long, unsigned long long);
	Scaleform::Render::MeshBase * * GetDataStart();
	unsigned long long GetSize();
	unsigned long long GetStride();
	Scaleform::Render::MeshBase * & operator[](unsigned long long);
	Scaleform::Render::MeshBase * & operator[](unsigned long long);
};
void Scaleform::Render::PrimitiveBatch::ClearCacheItem(); // 0x140419D30
void Scaleform::Render::PrimitiveBatch::SetCacheItem(Scaleform::Render::MeshCacheItem * p); // 0x14041C3F0
class Scaleform::Render::ComplexMesh :
	Scaleform::Render::MeshBase
{
	struct UpdateNode;
private:
	Scaleform::Render::ComplexMesh::UpdateNode UpdateListNode; // 0x90
public:
	ComplexMesh(const Scaleform::Render::ComplexMesh &);
	ComplexMesh(Scaleform::Render::MeshProvider *, Scaleform::Render::PrimitiveFillManager *, const Scaleform::Render::Matrix2x4<float> &, float, unsigned long, unsigned long);
	virtual ~ComplexMesh();
	Scaleform::Render::PrimitiveFillManager * GetFillManager();
	void RemoveMeshCacheItem(Scaleform::Render::MeshCacheItem *);
	virtual bool IsEvicted();
	bool IsAllocTooBig();
	void SetAllocTooBig();
	struct FillRecord;
	unsigned long GetLayerCount();
	unsigned long GetFillCount(unsigned long, unsigned long);
	void GetFillData(Scaleform::Render::FillData *, unsigned long, unsigned long, unsigned long);
	const Scaleform::Render::ComplexMesh::FillRecord * GetFillRecords();
	unsigned long GetFillRecordCount();
	const Scaleform::Render::Matrix2x4<float> * GetFillMatrixCache();
	Scaleform::Render::MeshCacheItem * GetCacheItem();
	const Scaleform::Render::Matrix2x4<float> & GetVertexMatrix();
	bool InitFillRecords(Scaleform::Render::HAL *, const Scaleform::Render::VertexOutput::Fill *, unsigned long, const Scaleform::Render::Matrix2x4<float> &, unsigned long long *, unsigned long *, unsigned long *);
private:
	void updateFillMatrixCache(Scaleform::Render::HAL *, const Scaleform::Render::Matrix2x4<float> &);
	bool updateFills(Scaleform::Render::HAL *);
	Scaleform::Render::PrimitiveFillManager * pFillManager; // 0xA0
	Scaleform::Render::MeshCacheItem * pCacheMeshItem; // 0xA8
	bool AllocTooBig; // 0xB0
	Scaleform::Render::Matrix2x4<float> VertexMatrix; // 0xC0
	Scaleform::ArrayLH<Scaleform::Render::ComplexMesh::FillRecord,2,Scaleform::ArrayDefaultPolicy> FillRecords; // 0xE0
	Scaleform::ArrayLH<Scaleform::Render::Matrix2x4<float>,2,Scaleform::ArrayDefaultPolicy> FillMatrixCache; // 0xF8
	Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::Render::Image>,2,Scaleform::ArrayDefaultPolicy> GradientImages; // 0x110
public:
	Scaleform::Render::ComplexMesh & operator=(const Scaleform::Render::ComplexMesh &);
};
struct Scaleform::ListNode<Scaleform::Render::ComplexMesh::UpdateNode>
{
	Scaleform::Render::ComplexMesh::UpdateNode * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::ComplexMesh::UpdateNode * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::Render::ComplexMesh::UpdateNode>();
	Scaleform::Render::ComplexMesh::UpdateNode * GetPrev();
	Scaleform::Render::ComplexMesh::UpdateNode * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::ComplexMesh::UpdateNode *);
	void InsertNodeAfter(Scaleform::Render::ComplexMesh::UpdateNode *);
	void InsertNodeBefore(Scaleform::Render::ComplexMesh::UpdateNode *);
};
struct Scaleform::Render::ComplexMesh::UpdateNode :
	Scaleform::ListNode<Scaleform::Render::ComplexMesh::UpdateNode>
{
	UpdateNode();
	Scaleform::Render::ComplexMesh * GetMesh();
};
bool Scaleform::Render::ComplexMesh::IsEvicted(); // 0x140399750
struct Scaleform::Render::ComplexMesh::FillRecord
{
	Scaleform::Ptr<Scaleform::Render::PrimitiveFill> pFill; // 0x0
	Scaleform::Render::VertexFormat * pFormats[2]; // 0x8
	unsigned long IndexOffset; // 0x18
	unsigned long IndexCount; // 0x1C
	unsigned long long VertexByteOffset; // 0x20
	unsigned long VertexCount; // 0x28
	unsigned long FillMatrixIndex[2]; // 0x2C
	unsigned long MergeFlags; // 0x34
	FillRecord(Scaleform::Render::ComplexMesh::FillRecord &);
	FillRecord(const Scaleform::Render::ComplexMesh::FillRecord &);
	FillRecord();
	~FillRecord();
	Scaleform::Render::ComplexMesh::FillRecord & operator=(Scaleform::Render::ComplexMesh::FillRecord &);
	Scaleform::Render::ComplexMesh::FillRecord & operator=(const Scaleform::Render::ComplexMesh::FillRecord &);
};
class Scaleform::ArrayLH<Scaleform::Render::ComplexMesh::FillRecord,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::ComplexMesh::FillRecord,Scaleform::AllocatorLH<Scaleform::Render::ComplexMesh::FillRecord,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Render::ComplexMesh::FillRecord,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::Render::ComplexMesh::FillRecord,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::Render::ComplexMesh::FillRecord,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::Render::ComplexMesh::FillRecord,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::Render::ComplexMesh::FillRecord,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::Render::ComplexMesh::FillRecord,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::Render::ComplexMesh::FillRecord,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::Render::ComplexMesh::FillRecord,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::ArrayLH<Scaleform::Render::Matrix2x4<float>,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Matrix2x4<float>,Scaleform::AllocatorLH<Scaleform::Render::Matrix2x4<float>,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Render::Matrix2x4<float>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::Render::Matrix2x4<float>,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::Render::Matrix2x4<float>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::Render::Matrix2x4<float>,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::Render::Matrix2x4<float>,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::Render::Matrix2x4<float>,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::Render::Matrix2x4<float>,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::Render::Matrix2x4<float>,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::Render::Image>,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Ptr<Scaleform::Render::Image>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Image>,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Ptr<Scaleform::Render::Image>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::Render::Image>,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::Ptr<Scaleform::Render::Image>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::Ptr<Scaleform::Render::Image>,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::Ptr<Scaleform::Render::Image>,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::Render::Image>,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::Render::Image>,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::Ptr<Scaleform::Render::Image>,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::RefCountBase<Scaleform::Render::MaskPrimitive,67> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 67,
	};
public:
	RefCountBase<Scaleform::Render::MaskPrimitive,67>(Scaleform::RefCountBase<Scaleform::Render::MaskPrimitive,67> &);
	RefCountBase<Scaleform::Render::MaskPrimitive,67>(const Scaleform::RefCountBase<Scaleform::Render::MaskPrimitive,67> &);
	RefCountBase<Scaleform::Render::MaskPrimitive,67>();
	virtual ~RefCountBase<Scaleform::Render::MaskPrimitive,67>();
	Scaleform::RefCountBase<Scaleform::Render::MaskPrimitive,67> & operator=(Scaleform::RefCountBase<Scaleform::Render::MaskPrimitive,67> &);
	Scaleform::RefCountBase<Scaleform::Render::MaskPrimitive,67> & operator=(const Scaleform::RefCountBase<Scaleform::Render::MaskPrimitive,67> &);
};
class Scaleform::Render::MaskPrimitive :
	Scaleform::RefCountBase<Scaleform::Render::MaskPrimitive,67>,
	Scaleform::Render::RenderQueueItem::Interface
{
public:
	MaskPrimitive(Scaleform::Render::MaskPrimitive &);
	MaskPrimitive(const Scaleform::Render::MaskPrimitive &);
	MaskPrimitive();
	unsigned long long GetMaskCount();
	const Scaleform::Render::MatrixPoolImpl::HMatrix * GetMaskAreaMatrices();
	const Scaleform::Render::MatrixPoolImpl::HMatrix & GetMaskAreaMatrix(unsigned long long);
	void Insert(unsigned long long, const Scaleform::Render::MatrixPoolImpl::HMatrix &);
	void Remove(unsigned long long, unsigned long long);
	virtual void EmitToHAL(Scaleform::Render::RenderQueueItem &, Scaleform::Render::RenderQueueProcessor &);
private:
	Scaleform::ArrayLH<Scaleform::Render::MatrixPoolImpl::HMatrix,2,Scaleform::ArrayDefaultPolicy> MaskAreas; // 0x18
public:
	virtual ~MaskPrimitive();
	Scaleform::Render::MaskPrimitive & operator=(Scaleform::Render::MaskPrimitive &);
	Scaleform::Render::MaskPrimitive & operator=(const Scaleform::Render::MaskPrimitive &);
};
class Scaleform::ArrayLH<Scaleform::Render::MatrixPoolImpl::HMatrix,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::MatrixPoolImpl::HMatrix,Scaleform::AllocatorLH<Scaleform::Render::MatrixPoolImpl::HMatrix,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Render::MatrixPoolImpl::HMatrix,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::Render::MatrixPoolImpl::HMatrix,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::Render::MatrixPoolImpl::HMatrix,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::Render::MatrixPoolImpl::HMatrix,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::Render::MatrixPoolImpl::HMatrix,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::Render::MatrixPoolImpl::HMatrix,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::Render::MatrixPoolImpl::HMatrix,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::Render::MatrixPoolImpl::HMatrix,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::RefCountBase<Scaleform::Render::CacheablePrimitive,67> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 67,
	};
public:
	RefCountBase<Scaleform::Render::CacheablePrimitive,67>(Scaleform::RefCountBase<Scaleform::Render::CacheablePrimitive,67> &);
	RefCountBase<Scaleform::Render::CacheablePrimitive,67>(const Scaleform::RefCountBase<Scaleform::Render::CacheablePrimitive,67> &);
	RefCountBase<Scaleform::Render::CacheablePrimitive,67>();
	virtual ~RefCountBase<Scaleform::Render::CacheablePrimitive,67>();
	Scaleform::RefCountBase<Scaleform::Render::CacheablePrimitive,67> & operator=(Scaleform::RefCountBase<Scaleform::Render::CacheablePrimitive,67> &);
	Scaleform::RefCountBase<Scaleform::Render::CacheablePrimitive,67> & operator=(const Scaleform::RefCountBase<Scaleform::Render::CacheablePrimitive,67> &);
};
class Scaleform::Render::CacheablePrimitive :
	Scaleform::RefCountBase<Scaleform::Render::CacheablePrimitive,67>,
	Scaleform::Render::RenderQueueItem::Interface
{
	enum CacheState
	{
		Cache_Uncached = 0,
		Cache_PreTarget = 1,
		Cache_Target = 2,
		Cache_Count = 3,
	};
public:
	static const unsigned long MaximumCachedResults; // 0xFFFFFFFFFFFFFFFF
	CacheablePrimitive(const Scaleform::Render::CacheablePrimitive &);
	CacheablePrimitive();
	virtual ~CacheablePrimitive();
	Scaleform::Render::CacheablePrimitive::CacheState GetCacheState();
	void GetCacheResults(Scaleform::Render::RenderTarget * *, unsigned long);
	void SetCacheResults(Scaleform::Render::CacheablePrimitive::CacheState, Scaleform::Render::RenderTarget * *, unsigned long);
	void Insert(unsigned long long, const Scaleform::Render::MatrixPoolImpl::HMatrix &);
	void Remove(unsigned long long, unsigned long long);
	const unsigned long long GetAreaMatrixCount();
	const Scaleform::Render::MatrixPoolImpl::HMatrix & GetAreaMatrix(unsigned long);
protected:
	void uncachePrimitive(unsigned long long);
	bool isExemptFromCaching();
	Scaleform::Render::CacheablePrimitive::CacheState Caching; // 0x18
	Scaleform::Ptr<Scaleform::Render::RenderTarget> CacheResults[2]; // 0x20
	Scaleform::ArrayLH<Scaleform::Render::MatrixPoolImpl::HMatrix,2,Scaleform::ArrayDefaultPolicy> PrimitiveArea; // 0x30
public:
	Scaleform::Render::CacheablePrimitive & operator=(const Scaleform::Render::CacheablePrimitive &);
};
bool Scaleform::Render::CacheablePrimitive::isExemptFromCaching(); // 0x14004BBE0
enum Scaleform::Render::FilterTargets
{
	Target_Source = 0,
	Target_Destination = 1,
	Target_Original = 2,
	Target_Alpha = 2,
	Target_Count = 3,
};
class Scaleform::Render::FilterPrimitive :
	Scaleform::Render::CacheablePrimitive
{
public:
	FilterPrimitive(Scaleform::Render::FilterPrimitive &);
	FilterPrimitive(const Scaleform::Render::FilterPrimitive &);
	FilterPrimitive(Scaleform::Render::FilterSet *);
	const Scaleform::Render::FilterSet * GetFilters();
	virtual void EmitToHAL(Scaleform::Render::RenderQueueItem &, Scaleform::Render::RenderQueueProcessor &);
	virtual Scaleform::Render::RenderQueueItem::QIPrepareResult Prepare(Scaleform::Render::RenderQueueItem &, Scaleform::Render::RenderQueueProcessor &, bool);
private:
	Scaleform::Ptr<Scaleform::Render::FilterSet> pFilters; // 0x48
public:
	virtual ~FilterPrimitive();
	Scaleform::Render::FilterPrimitive & operator=(Scaleform::Render::FilterPrimitive &);
	Scaleform::Render::FilterPrimitive & operator=(const Scaleform::Render::FilterPrimitive &);
};
class Scaleform::Ptr<Scaleform::Render::FilterSet>
{
protected:
	Scaleform::Render::FilterSet * pObject; // 0x0
public:
	Ptr<Scaleform::Render::FilterSet>(const Scaleform::Ptr<Scaleform::Render::FilterSet> &);
	Ptr<Scaleform::Render::FilterSet>(Scaleform::Render::FilterSet *);
	Ptr<Scaleform::Render::FilterSet>(Scaleform::Ptr<Scaleform::Render::FilterSet> &, Scaleform::PickType);
	Ptr<Scaleform::Render::FilterSet>(Scaleform::Pickable<Scaleform::Render::FilterSet>);
	Ptr<Scaleform::Render::FilterSet>(Scaleform::Render::FilterSet &);
	Ptr<Scaleform::Render::FilterSet>();
	~Ptr<Scaleform::Render::FilterSet>();
	bool operator==(Scaleform::Render::FilterSet *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::FilterSet> &);
	bool operator!=(Scaleform::Render::FilterSet *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::FilterSet> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::FilterSet> &);
	Scaleform::Ptr<Scaleform::Render::FilterSet> & operator=(Scaleform::Pickable<Scaleform::Render::FilterSet>);
	const Scaleform::Ptr<Scaleform::Render::FilterSet> & operator=(Scaleform::Render::FilterSet &);
	const Scaleform::Ptr<Scaleform::Render::FilterSet> & operator=(Scaleform::Render::FilterSet *);
	const Scaleform::Ptr<Scaleform::Render::FilterSet> & operator=(const Scaleform::Ptr<Scaleform::Render::FilterSet> &);
	Scaleform::Ptr<Scaleform::Render::FilterSet> & SetPtr(Scaleform::Pickable<Scaleform::Render::FilterSet>);
	Scaleform::Ptr<Scaleform::Render::FilterSet> & SetPtr(Scaleform::Render::FilterSet &);
	Scaleform::Ptr<Scaleform::Render::FilterSet> & SetPtr(Scaleform::Render::FilterSet *);
	Scaleform::Ptr<Scaleform::Render::FilterSet> & SetPtr(const Scaleform::Ptr<Scaleform::Render::FilterSet> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::FilterSet * & GetRawRef();
	Scaleform::Render::FilterSet * GetPtr();
	Scaleform::Render::FilterSet & operator*();
	Scaleform::Render::FilterSet * operator->();
	Scaleform::Render::FilterSet * operator class Scaleform::Render::FilterSet *();
	Scaleform::Ptr<Scaleform::Render::FilterSet> & Pick(Scaleform::Render::FilterSet *);
	Scaleform::Ptr<Scaleform::Render::FilterSet> & Pick(Scaleform::Pickable<Scaleform::Render::FilterSet>);
	Scaleform::Ptr<Scaleform::Render::FilterSet> & Pick(Scaleform::Ptr<Scaleform::Render::FilterSet> &);
};
class Scaleform::Render::BlendPrimitive :
	Scaleform::Render::CacheablePrimitive
{
public:
	BlendPrimitive(Scaleform::Render::BlendPrimitive &);
	BlendPrimitive(const Scaleform::Render::BlendPrimitive &);
	BlendPrimitive(Scaleform::Render::BlendMode);
	Scaleform::Render::BlendMode GetBlendMode();
	virtual void EmitToHAL(Scaleform::Render::RenderQueueItem &, Scaleform::Render::RenderQueueProcessor &);
	virtual Scaleform::Render::RenderQueueItem::QIPrepareResult Prepare(Scaleform::Render::RenderQueueItem &, Scaleform::Render::RenderQueueProcessor &, bool);
private:
	Scaleform::Render::BlendMode BlendModeValue; // 0x48
public:
	virtual ~BlendPrimitive();
	Scaleform::Render::BlendPrimitive & operator=(Scaleform::Render::BlendPrimitive &);
	Scaleform::Render::BlendPrimitive & operator=(const Scaleform::Render::BlendPrimitive &);
};
class Scaleform::RefCountBase<Scaleform::Render::ViewMatrix3DPrimitive,67> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 67,
	};
public:
	RefCountBase<Scaleform::Render::ViewMatrix3DPrimitive,67>(Scaleform::RefCountBase<Scaleform::Render::ViewMatrix3DPrimitive,67> &);
	RefCountBase<Scaleform::Render::ViewMatrix3DPrimitive,67>(const Scaleform::RefCountBase<Scaleform::Render::ViewMatrix3DPrimitive,67> &);
	RefCountBase<Scaleform::Render::ViewMatrix3DPrimitive,67>();
	virtual ~RefCountBase<Scaleform::Render::ViewMatrix3DPrimitive,67>();
	Scaleform::RefCountBase<Scaleform::Render::ViewMatrix3DPrimitive,67> & operator=(Scaleform::RefCountBase<Scaleform::Render::ViewMatrix3DPrimitive,67> &);
	Scaleform::RefCountBase<Scaleform::Render::ViewMatrix3DPrimitive,67> & operator=(const Scaleform::RefCountBase<Scaleform::Render::ViewMatrix3DPrimitive,67> &);
};
class Scaleform::Render::ViewMatrix3DPrimitive :
	Scaleform::RefCountBase<Scaleform::Render::ViewMatrix3DPrimitive,67>,
	Scaleform::Render::RenderQueueItem::Interface
{
public:
	ViewMatrix3DPrimitive(const Scaleform::Render::ViewMatrix3DPrimitive &);
	ViewMatrix3DPrimitive();
	virtual ~ViewMatrix3DPrimitive();
	void SetViewMatrix3D(const Scaleform::Render::Matrix3x4<float> &);
	const Scaleform::Render::Matrix3x4<float> & GetViewMatrix3D();
	void ClearViewMatrix3D();
	bool HasViewMatrix3D();
	virtual void EmitToHAL(Scaleform::Render::RenderQueueItem &, Scaleform::Render::RenderQueueProcessor &);
private:
	Scaleform::Render::Matrix3x4<float> ViewMatrix; // 0x20
	bool bHasViewMatrix; // 0x50
public:
	Scaleform::Render::ViewMatrix3DPrimitive & operator=(const Scaleform::Render::ViewMatrix3DPrimitive &);
};
class Scaleform::RefCountBase<Scaleform::Render::ProjectionMatrix3DPrimitive,67> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 67,
	};
public:
	RefCountBase<Scaleform::Render::ProjectionMatrix3DPrimitive,67>(Scaleform::RefCountBase<Scaleform::Render::ProjectionMatrix3DPrimitive,67> &);
	RefCountBase<Scaleform::Render::ProjectionMatrix3DPrimitive,67>(const Scaleform::RefCountBase<Scaleform::Render::ProjectionMatrix3DPrimitive,67> &);
	RefCountBase<Scaleform::Render::ProjectionMatrix3DPrimitive,67>();
	virtual ~RefCountBase<Scaleform::Render::ProjectionMatrix3DPrimitive,67>();
	Scaleform::RefCountBase<Scaleform::Render::ProjectionMatrix3DPrimitive,67> & operator=(Scaleform::RefCountBase<Scaleform::Render::ProjectionMatrix3DPrimitive,67> &);
	Scaleform::RefCountBase<Scaleform::Render::ProjectionMatrix3DPrimitive,67> & operator=(const Scaleform::RefCountBase<Scaleform::Render::ProjectionMatrix3DPrimitive,67> &);
};
class Scaleform::Render::ProjectionMatrix3DPrimitive :
	Scaleform::RefCountBase<Scaleform::Render::ProjectionMatrix3DPrimitive,67>,
	Scaleform::Render::RenderQueueItem::Interface
{
public:
	ProjectionMatrix3DPrimitive(const Scaleform::Render::ProjectionMatrix3DPrimitive &);
	ProjectionMatrix3DPrimitive();
	virtual ~ProjectionMatrix3DPrimitive();
	void SetProjectionMatrix3D(const Scaleform::Render::Matrix4x4<float> &);
	const Scaleform::Render::Matrix4x4<float> & GetProjectionMatrix3D();
	void ClearProjectionMatrix3D();
	bool HasProjectionMatrix3D();
	virtual void EmitToHAL(Scaleform::Render::RenderQueueItem &, Scaleform::Render::RenderQueueProcessor &);
private:
	Scaleform::Render::Matrix4x4<float> ProjectionMatrix; // 0x20
	bool bHasProjectionMatrix; // 0x60
public:
	Scaleform::Render::ProjectionMatrix3DPrimitive & operator=(const Scaleform::Render::ProjectionMatrix3DPrimitive &);
};
class Scaleform::RefCountBase<Scaleform::Render::UserDataPrimitive,67> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 67,
	};
public:
	RefCountBase<Scaleform::Render::UserDataPrimitive,67>(Scaleform::RefCountBase<Scaleform::Render::UserDataPrimitive,67> &);
	RefCountBase<Scaleform::Render::UserDataPrimitive,67>(const Scaleform::RefCountBase<Scaleform::Render::UserDataPrimitive,67> &);
	RefCountBase<Scaleform::Render::UserDataPrimitive,67>();
	virtual ~RefCountBase<Scaleform::Render::UserDataPrimitive,67>();
	Scaleform::RefCountBase<Scaleform::Render::UserDataPrimitive,67> & operator=(Scaleform::RefCountBase<Scaleform::Render::UserDataPrimitive,67> &);
	Scaleform::RefCountBase<Scaleform::Render::UserDataPrimitive,67> & operator=(const Scaleform::RefCountBase<Scaleform::Render::UserDataPrimitive,67> &);
};
class Scaleform::Render::UserDataPrimitive :
	Scaleform::RefCountBase<Scaleform::Render::UserDataPrimitive,67>,
	Scaleform::Render::RenderQueueItem::Interface
{
public:
	UserDataPrimitive(const Scaleform::Render::UserDataPrimitive &);
	UserDataPrimitive(Scaleform::Render::UserDataState::Data *);
	UserDataPrimitive();
	virtual ~UserDataPrimitive();
	virtual void EmitToHAL(Scaleform::Render::RenderQueueItem &, Scaleform::Render::RenderQueueProcessor &);
private:
	Scaleform::Ptr<Scaleform::Render::UserDataState::Data> pUserData; // 0x18
public:
	Scaleform::Render::UserDataPrimitive & operator=(const Scaleform::Render::UserDataPrimitive &);
};
class Scaleform::Ptr<Scaleform::Render::UserDataState::Data>
{
protected:
	Scaleform::Render::UserDataState::Data * pObject; // 0x0
public:
	Ptr<Scaleform::Render::UserDataState::Data>(const Scaleform::Ptr<Scaleform::Render::UserDataState::Data> &);
	Ptr<Scaleform::Render::UserDataState::Data>(Scaleform::Render::UserDataState::Data *);
	Ptr<Scaleform::Render::UserDataState::Data>(Scaleform::Ptr<Scaleform::Render::UserDataState::Data> &, Scaleform::PickType);
	Ptr<Scaleform::Render::UserDataState::Data>(Scaleform::Pickable<Scaleform::Render::UserDataState::Data>);
	Ptr<Scaleform::Render::UserDataState::Data>(Scaleform::Render::UserDataState::Data &);
	Ptr<Scaleform::Render::UserDataState::Data>();
	~Ptr<Scaleform::Render::UserDataState::Data>();
	bool operator==(Scaleform::Render::UserDataState::Data *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::UserDataState::Data> &);
	bool operator!=(Scaleform::Render::UserDataState::Data *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::UserDataState::Data> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::UserDataState::Data> &);
	Scaleform::Ptr<Scaleform::Render::UserDataState::Data> & operator=(Scaleform::Pickable<Scaleform::Render::UserDataState::Data>);
	const Scaleform::Ptr<Scaleform::Render::UserDataState::Data> & operator=(Scaleform::Render::UserDataState::Data &);
	const Scaleform::Ptr<Scaleform::Render::UserDataState::Data> & operator=(Scaleform::Render::UserDataState::Data *);
	const Scaleform::Ptr<Scaleform::Render::UserDataState::Data> & operator=(const Scaleform::Ptr<Scaleform::Render::UserDataState::Data> &);
	Scaleform::Ptr<Scaleform::Render::UserDataState::Data> & SetPtr(Scaleform::Pickable<Scaleform::Render::UserDataState::Data>);
	Scaleform::Ptr<Scaleform::Render::UserDataState::Data> & SetPtr(Scaleform::Render::UserDataState::Data &);
	Scaleform::Ptr<Scaleform::Render::UserDataState::Data> & SetPtr(Scaleform::Render::UserDataState::Data *);
	Scaleform::Ptr<Scaleform::Render::UserDataState::Data> & SetPtr(const Scaleform::Ptr<Scaleform::Render::UserDataState::Data> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::UserDataState::Data * & GetRawRef();
	Scaleform::Render::UserDataState::Data * GetPtr();
	Scaleform::Render::UserDataState::Data & operator*();
	Scaleform::Render::UserDataState::Data * operator->();
	Scaleform::Render::UserDataState::Data * operator struct Scaleform::Render::UserDataState::Data *();
	Scaleform::Ptr<Scaleform::Render::UserDataState::Data> & Pick(Scaleform::Render::UserDataState::Data *);
	Scaleform::Ptr<Scaleform::Render::UserDataState::Data> & Pick(Scaleform::Pickable<Scaleform::Render::UserDataState::Data>);
	Scaleform::Ptr<Scaleform::Render::UserDataState::Data> & Pick(Scaleform::Ptr<Scaleform::Render::UserDataState::Data> &);
};