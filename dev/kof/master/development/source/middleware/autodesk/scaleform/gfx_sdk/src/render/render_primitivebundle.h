#pragma once

class Scaleform::Render::DrawableBundle :
	Scaleform::Render::Bundle
{
protected:
	Scaleform::Render::TreeCacheRoot * pRoot; // 0x38
public:
	DrawableBundle(Scaleform::Render::DrawableBundle &);
	DrawableBundle(const Scaleform::Render::DrawableBundle &);
	DrawableBundle(Scaleform::Render::HAL *, Scaleform::Render::TreeCacheRoot *);
	void UpdateMesh(Scaleform::Render::HAL *, Scaleform::Render::BundleEntry *) = 0;
	virtual ~DrawableBundle();
	Scaleform::Render::DrawableBundle & operator=(Scaleform::Render::DrawableBundle &);
	Scaleform::Render::DrawableBundle & operator=(const Scaleform::Render::DrawableBundle &);
};
class Scaleform::Render::PrimitiveBundle :
	Scaleform::Render::DrawableBundle
{
public:
	Scaleform::Render::Primitive Prim; // 0x40
	PrimitiveBundle(Scaleform::Render::HAL *, Scaleform::Render::TreeCacheRoot *, const Scaleform::Render::SortKey &);
	void Draw(Scaleform::Render::HAL *);
	virtual void UpdateMesh(Scaleform::Render::HAL *, Scaleform::Render::BundleEntry *);
	virtual void InsertEntry(Scaleform::Render::HAL *, unsigned long long, Scaleform::Render::BundleEntry *);
	virtual void RemoveEntries(unsigned long long, unsigned long long);
	void CheckMatrixConsistency();
	virtual ~PrimitiveBundle();
};
class Scaleform::Render::ComplexPrimitiveBundle :
	Scaleform::Render::Bundle,
	Scaleform::Render::RenderQueueItem::Interface
{
public:
	ComplexPrimitiveBundle(const Scaleform::Render::ComplexPrimitiveBundle &);
	ComplexPrimitiveBundle(Scaleform::Render::HAL *);
	virtual ~ComplexPrimitiveBundle();
	void Draw(Scaleform::Render::HAL *);
	virtual void UpdateMesh(Scaleform::Render::HAL *, Scaleform::Render::BundleEntry *);
	virtual void InsertEntry(Scaleform::Render::HAL *, unsigned long long, Scaleform::Render::BundleEntry *);
	virtual void RemoveEntries(unsigned long long, unsigned long long);
	virtual Scaleform::Render::RenderQueueItem::QIPrepareResult Prepare(Scaleform::Render::RenderQueueItem &, Scaleform::Render::RenderQueueProcessor &, bool);
	virtual void EmitToHAL(Scaleform::Render::RenderQueueItem &, Scaleform::Render::RenderQueueProcessor &);
	struct InstanceEntry;
private:
	unsigned long long countConsecutiveMeshesAtIndex(unsigned long long);
	Scaleform::ArrayLH<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,2,Scaleform::ArrayDefaultPolicy> Instances; // 0x40
public:
	Scaleform::Render::ComplexPrimitiveBundle & operator=(const Scaleform::Render::ComplexPrimitiveBundle &);
};
struct Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry
{
	Scaleform::Render::MatrixPoolImpl::HMatrix M; // 0x0
	Scaleform::Ptr<Scaleform::Render::ComplexMesh> pMesh; // 0x8
	InstanceEntry(Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry &);
	InstanceEntry(const Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry &);
	InstanceEntry();
	~InstanceEntry();
	Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry & operator=(Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry &);
	Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry & operator=(const Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry &);
};
class Scaleform::Ptr<Scaleform::Render::ComplexMesh>
{
protected:
	Scaleform::Render::ComplexMesh * pObject; // 0x0
public:
	Ptr<Scaleform::Render::ComplexMesh>(const Scaleform::Ptr<Scaleform::Render::ComplexMesh> &);
	Ptr<Scaleform::Render::ComplexMesh>(Scaleform::Render::ComplexMesh *);
	Ptr<Scaleform::Render::ComplexMesh>(Scaleform::Ptr<Scaleform::Render::ComplexMesh> &, Scaleform::PickType);
	Ptr<Scaleform::Render::ComplexMesh>(Scaleform::Pickable<Scaleform::Render::ComplexMesh>);
	Ptr<Scaleform::Render::ComplexMesh>(Scaleform::Render::ComplexMesh &);
	Ptr<Scaleform::Render::ComplexMesh>();
	~Ptr<Scaleform::Render::ComplexMesh>();
	bool operator==(Scaleform::Render::ComplexMesh *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::ComplexMesh> &);
	bool operator!=(Scaleform::Render::ComplexMesh *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::ComplexMesh> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::ComplexMesh> &);
	Scaleform::Ptr<Scaleform::Render::ComplexMesh> & operator=(Scaleform::Pickable<Scaleform::Render::ComplexMesh>);
	const Scaleform::Ptr<Scaleform::Render::ComplexMesh> & operator=(Scaleform::Render::ComplexMesh &);
	const Scaleform::Ptr<Scaleform::Render::ComplexMesh> & operator=(Scaleform::Render::ComplexMesh *);
	const Scaleform::Ptr<Scaleform::Render::ComplexMesh> & operator=(const Scaleform::Ptr<Scaleform::Render::ComplexMesh> &);
	Scaleform::Ptr<Scaleform::Render::ComplexMesh> & SetPtr(Scaleform::Pickable<Scaleform::Render::ComplexMesh>);
	Scaleform::Ptr<Scaleform::Render::ComplexMesh> & SetPtr(Scaleform::Render::ComplexMesh &);
	Scaleform::Ptr<Scaleform::Render::ComplexMesh> & SetPtr(Scaleform::Render::ComplexMesh *);
	Scaleform::Ptr<Scaleform::Render::ComplexMesh> & SetPtr(const Scaleform::Ptr<Scaleform::Render::ComplexMesh> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::ComplexMesh * & GetRawRef();
	Scaleform::Render::ComplexMesh * GetPtr();
	Scaleform::Render::ComplexMesh & operator*();
	Scaleform::Render::ComplexMesh * operator->();
	Scaleform::Render::ComplexMesh * operator class Scaleform::Render::ComplexMesh *();
	Scaleform::Ptr<Scaleform::Render::ComplexMesh> & Pick(Scaleform::Render::ComplexMesh *);
	Scaleform::Ptr<Scaleform::Render::ComplexMesh> & Pick(Scaleform::Pickable<Scaleform::Render::ComplexMesh>);
	Scaleform::Ptr<Scaleform::Render::ComplexMesh> & Pick(Scaleform::Ptr<Scaleform::Render::ComplexMesh> &);
};
class Scaleform::ArrayLH<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,Scaleform::AllocatorLH<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::Render::MaskBundle :
	Scaleform::Render::Bundle
{
public:
	Scaleform::Render::MaskPrimitive Prim; // 0x38
	MaskBundle(Scaleform::Render::MaskBundle &);
	MaskBundle(const Scaleform::Render::MaskBundle &);
	MaskBundle(Scaleform::Render::HAL *);
	void Draw(Scaleform::Render::HAL *);
	virtual void InsertEntry(Scaleform::Render::HAL *, unsigned long long, Scaleform::Render::BundleEntry *);
	virtual void RemoveEntries(unsigned long long, unsigned long long);
	virtual ~MaskBundle();
	Scaleform::Render::MaskBundle & operator=(Scaleform::Render::MaskBundle &);
	Scaleform::Render::MaskBundle & operator=(const Scaleform::Render::MaskBundle &);
};
class Scaleform::Render::FilterBundle :
	Scaleform::Render::Bundle
{
public:
	Scaleform::Render::FilterPrimitive Prim; // 0x38
	FilterBundle(Scaleform::Render::FilterBundle &);
	FilterBundle(const Scaleform::Render::FilterBundle &);
	FilterBundle(Scaleform::Render::HAL *, Scaleform::Render::FilterSet *);
	void Draw(Scaleform::Render::HAL *);
	virtual void InsertEntry(Scaleform::Render::HAL *, unsigned long long, Scaleform::Render::BundleEntry *);
	virtual void RemoveEntries(unsigned long long, unsigned long long);
	virtual ~FilterBundle();
	Scaleform::Render::FilterBundle & operator=(Scaleform::Render::FilterBundle &);
	Scaleform::Render::FilterBundle & operator=(const Scaleform::Render::FilterBundle &);
};
class Scaleform::Render::BlendModeBundle :
	Scaleform::Render::Bundle
{
public:
	Scaleform::Render::BlendPrimitive Prim; // 0x38
	BlendModeBundle(Scaleform::Render::BlendModeBundle &);
	BlendModeBundle(const Scaleform::Render::BlendModeBundle &);
	BlendModeBundle(Scaleform::Render::HAL *, Scaleform::Render::BlendMode);
	void Draw(Scaleform::Render::HAL *);
	virtual void InsertEntry(Scaleform::Render::HAL *, unsigned long long, Scaleform::Render::BundleEntry *);
	virtual void RemoveEntries(unsigned long long, unsigned long long);
	virtual ~BlendModeBundle();
	Scaleform::Render::BlendModeBundle & operator=(Scaleform::Render::BlendModeBundle &);
	Scaleform::Render::BlendModeBundle & operator=(const Scaleform::Render::BlendModeBundle &);
};
class Scaleform::Render::ViewMatrix3DBundle :
	Scaleform::Render::Bundle
{
public:
	Scaleform::Render::ViewMatrix3DPrimitive Prim; // 0x40
	ViewMatrix3DBundle(Scaleform::Render::ViewMatrix3DBundle &);
	ViewMatrix3DBundle(const Scaleform::Render::ViewMatrix3DBundle &);
	ViewMatrix3DBundle(Scaleform::Render::HAL *, Scaleform::Render::Matrix3x4Ref<float> *);
	void Draw(Scaleform::Render::HAL *);
	virtual ~ViewMatrix3DBundle();
	Scaleform::Render::ViewMatrix3DBundle & operator=(Scaleform::Render::ViewMatrix3DBundle &);
	Scaleform::Render::ViewMatrix3DBundle & operator=(const Scaleform::Render::ViewMatrix3DBundle &);
};
class Scaleform::Render::ProjectionMatrix3DBundle :
	Scaleform::Render::Bundle
{
public:
	Scaleform::Render::ProjectionMatrix3DPrimitive Prim; // 0x40
	ProjectionMatrix3DBundle(Scaleform::Render::ProjectionMatrix3DBundle &);
	ProjectionMatrix3DBundle(const Scaleform::Render::ProjectionMatrix3DBundle &);
	ProjectionMatrix3DBundle(Scaleform::Render::HAL *, Scaleform::Render::Matrix4x4Ref<float> *);
	void Draw(Scaleform::Render::HAL *);
	virtual ~ProjectionMatrix3DBundle();
	Scaleform::Render::ProjectionMatrix3DBundle & operator=(Scaleform::Render::ProjectionMatrix3DBundle &);
	Scaleform::Render::ProjectionMatrix3DBundle & operator=(const Scaleform::Render::ProjectionMatrix3DBundle &);
};
class Scaleform::Render::UserDataBundle :
	Scaleform::Render::Bundle
{
public:
	Scaleform::Render::UserDataPrimitive Prim; // 0x38
	UserDataBundle(Scaleform::Render::UserDataBundle &);
	UserDataBundle(const Scaleform::Render::UserDataBundle &);
	UserDataBundle(Scaleform::Render::HAL *, Scaleform::Render::UserDataState::Data *);
	void Draw(Scaleform::Render::HAL *);
	virtual ~UserDataBundle();
	Scaleform::Render::UserDataBundle & operator=(Scaleform::Render::UserDataBundle &);
	Scaleform::Render::UserDataBundle & operator=(const Scaleform::Render::UserDataBundle &);
};