#pragma once

struct Scaleform::Render::TextLayerPrimitive :
	Scaleform::Render::Primitive
{
	Scaleform::Render::TextLayerType Type; // 0x58
	Scaleform::ArrayLH<Scaleform::Render::BundleEntry *,2,Scaleform::ArrayDefaultPolicy> Entries; // 0x60
	TextLayerPrimitive(Scaleform::Render::TextLayerType, Scaleform::Render::PrimitiveFill *);
	bool AddEntry(Scaleform::Render::HAL *, Scaleform::Render::BundleEntry *, Scaleform::Render::Mesh *, const Scaleform::Render::MatrixPoolImpl::HMatrix &);
	bool RemoveEntry(Scaleform::Render::BundleEntry *);
	void PinEntryBatches();
	void UnpinEntryBatches();
	void ShuffleAndMergeVirtualBatches();
	virtual ~TextLayerPrimitive();
};
class Scaleform::Render::TextPrimitiveBundle :
	Scaleform::Render::Bundle,
	Scaleform::Render::RenderQueueItem::Interface
{
public:
	TextPrimitiveBundle(const Scaleform::Render::TextPrimitiveBundle &);
	TextPrimitiveBundle(Scaleform::Render::HAL *);
	virtual ~TextPrimitiveBundle();
	void Draw(Scaleform::Render::HAL *);
	virtual void UpdateMesh(Scaleform::Render::HAL *, Scaleform::Render::BundleEntry *);
	virtual void InsertEntry(Scaleform::Render::HAL *, unsigned long long, Scaleform::Render::BundleEntry *);
	virtual void RemoveEntries(unsigned long long, unsigned long long);
	virtual Scaleform::Render::RenderQueueItem::QIPrepareResult Prepare(Scaleform::Render::RenderQueueItem &, Scaleform::Render::RenderQueueProcessor &, bool);
	virtual void EmitToHAL(Scaleform::Render::RenderQueueItem &, Scaleform::Render::RenderQueueProcessor &);
private:
	void startPrimitive(Scaleform::Render::RenderQueueItem &, Scaleform::Render::TextPrepareBuffer *, Scaleform::Render::RenderQueueProcessor &);
	bool addAndPinBatchLayers(Scaleform::Render::HAL *, Scaleform::Render::TreeCacheText *, Scaleform::Render::TextMeshProvider *);
	void clearBatchLayers();
	void pinLayerBatches();
	void unpinLayerBatches();
	void removeEntryFromLayers(Scaleform::Render::BundleEntry *);
	Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive>,2> Layers; // 0x40
	Scaleform::Ptr<Scaleform::Render::MaskPrimitive> pMaskPrimitive; // 0x58
public:
	Scaleform::Render::TextPrimitiveBundle & operator=(const Scaleform::Render::TextPrimitiveBundle &);
};
void Scaleform::Render::TextPrimitiveBundle::unpinLayerBatches(); // 0x140419BD0
class Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive>
{
protected:
	Scaleform::Render::TextLayerPrimitive * pObject; // 0x0
public:
	Ptr<Scaleform::Render::TextLayerPrimitive>(const Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> &);
	Ptr<Scaleform::Render::TextLayerPrimitive>(Scaleform::Render::TextLayerPrimitive *);
	Ptr<Scaleform::Render::TextLayerPrimitive>(Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> &, Scaleform::PickType);
	Ptr<Scaleform::Render::TextLayerPrimitive>(Scaleform::Pickable<Scaleform::Render::TextLayerPrimitive>);
	Ptr<Scaleform::Render::TextLayerPrimitive>(Scaleform::Render::TextLayerPrimitive &);
	Ptr<Scaleform::Render::TextLayerPrimitive>();
	~Ptr<Scaleform::Render::TextLayerPrimitive>();
	bool operator==(Scaleform::Render::TextLayerPrimitive *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> &);
	bool operator!=(Scaleform::Render::TextLayerPrimitive *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> &);
	Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> & operator=(Scaleform::Pickable<Scaleform::Render::TextLayerPrimitive>);
	const Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> & operator=(Scaleform::Render::TextLayerPrimitive &);
	const Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> & operator=(Scaleform::Render::TextLayerPrimitive *);
	const Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> & operator=(const Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> &);
	Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> & SetPtr(Scaleform::Pickable<Scaleform::Render::TextLayerPrimitive>);
	Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> & SetPtr(Scaleform::Render::TextLayerPrimitive &);
	Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> & SetPtr(Scaleform::Render::TextLayerPrimitive *);
	Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> & SetPtr(const Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::TextLayerPrimitive * & GetRawRef();
	Scaleform::Render::TextLayerPrimitive * GetPtr();
	Scaleform::Render::TextLayerPrimitive & operator*();
	Scaleform::Render::TextLayerPrimitive * operator->();
	Scaleform::Render::TextLayerPrimitive * operator struct Scaleform::Render::TextLayerPrimitive *();
	Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> & Pick(Scaleform::Render::TextLayerPrimitive *);
	Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> & Pick(Scaleform::Pickable<Scaleform::Render::TextLayerPrimitive>);
	Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> & Pick(Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> &);
};
class Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive>,2>
{
private:
	unsigned long long Size; // 0x0
	struct AllocData;
	Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive>,2>::AllocData AD; // 0x8
	unsigned char Raw[16]; // 0x8
	static unsigned long long GetAllocSize(unsigned long long);
	Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> * allocInsertCopy(unsigned long long, Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> *, unsigned long long, unsigned long long);
	void insertMemorySpot(unsigned long long, Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> *, unsigned long long);
	Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> * insertSpot(unsigned long long);
public:
	ArrayReserveLH_Mov<Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive>,2>(const Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> &);
	ArrayReserveLH_Mov<Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive>,2>();
	~ArrayReserveLH_Mov<Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive>,2>();
	bool Add(const Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> &);
	bool InsertAt(unsigned long long, const Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> &);
	bool Add_NoDuplicate(const Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> &);
	void RemoveAt(unsigned long long);
	void Remove(const Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> &);
	void Clear();
	unsigned long long GetSize();
	Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> * GetBuffer();
	const Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> * GetBuffer();
	Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> & operator[](unsigned long long);
	const Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> & operator[](unsigned long long);
};