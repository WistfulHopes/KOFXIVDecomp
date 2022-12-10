#pragma once

class Scaleform::GFx::AS3::AvmDisplayObj :
	Scaleform::NewOverrideBase<323>,
	Scaleform::GFx::AvmDisplayObjBase
{
private:
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_display::DisplayObject> pAS3CollectiblePtr; // 0x8
	Scaleform::GFx::AS3::Instances::fl_display::DisplayObject * pAS3RawPtr; // 0x10
protected:
	Scaleform::GFx::DisplayObject * pDispObj; // 0x18
	const char * pClassName; // 0x20
	Scaleform::GFx::AS3::VMAppDomain * AppDomain; // 0x28
	enum <unnamed-enum-Flag_RemovedFromStage>
	{
		Flag_RemovedFromStage = 1,
		Flag_FirstFrameCalled = 2,
	};
	unsigned char Flags; // 0x30
private:
	void Bind(Scaleform::GFx::DisplayObject *);
	void SetAS3ObjRaw(Scaleform::GFx::AS3::Instances::fl_display::DisplayObject *);
	void SetAS3ObjCollectible(Scaleform::GFx::AS3::Instances::fl_display::DisplayObject *);
public:
	AvmDisplayObj(const Scaleform::GFx::AS3::AvmDisplayObj &);
	AvmDisplayObj(Scaleform::GFx::DisplayObject *);
	virtual ~AvmDisplayObj();
	virtual Scaleform::GFx::AvmInteractiveObjBase * ToAvmInteractiveObjBase();
	virtual Scaleform::GFx::AvmSpriteBase * ToAvmSpriteBase();
	virtual Scaleform::GFx::AvmButtonBase * ToAvmButttonBase();
	virtual Scaleform::GFx::AvmTextFieldBase * ToAvmTextFieldBase();
	virtual Scaleform::GFx::AvmDisplayObjContainerBase * ToAvmDispContainerBase();
	virtual const char * GetAbsolutePath(Scaleform::String *);
	virtual bool HasEventHandler(const Scaleform::GFx::EventId &);
	virtual bool OnEvent(const Scaleform::GFx::EventId &);
	virtual void OnEventLoad();
	virtual void OnEventUnload();
	void OnRemoved(bool);
	virtual bool OnUnloading(bool);
	Scaleform::GFx::DisplayObject * GetDispObj();
	Scaleform::GFx::AS3::MovieRoot * GetAS3Root();
	Scaleform::MemoryHeap * GetHeap();
	Scaleform::GFx::InteractiveObject * GetParent();
	Scaleform::GFx::AS3::AvmInteractiveObj * GetAvmParent();
	Scaleform::GFx::AS3::Instances::fl_display::DisplayObject * GetAS3Parent();
	Scaleform::GFx::ASString GetName();
	unsigned long CreateASInstance(bool);
	bool CreateASInstanceNoCtor();
	unsigned long CallCtor(bool);
	const char * GetDefaultASClassName();
	Scaleform::String & GetASClassName(Scaleform::String *);
	Scaleform::GFx::AS3::Instances::fl_display::DisplayObject * GetAS3Obj();
	Scaleform::GFx::AS3::Instances::fl_display::DisplayObject * GetAS3ObjSafe();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_display::DisplayObject> * GetCollectibleAS3Ptr();
	void SetAS3Obj(Scaleform::GFx::AS3::Instances::fl_display::DisplayObject *);
	enum AS3ObjPtrType
	{
		Raw = 0,
		Collectible = 1,
	};
	void SwitchAS3ObjPtrType(Scaleform::GFx::AS3::AvmDisplayObj::AS3ObjPtrType);
	bool HasAS3Obj();
	void ForceShutdown();
	Scaleform::GFx::AS3::ASVM * GetAVM();
	void ReleaseAS3Obj();
	void OnDetachFromTimeline();
	void AssignAS3Obj(Scaleform::GFx::AS3::Instances::fl_display::DisplayObject *);
	Scaleform::GFx::DisplayObject * GetRoot();
	Scaleform::GFx::AS3::Stage * GetStage();
	bool IsStageAccessible();
	void FireEvent(const Scaleform::GFx::EventId &);
	void PropagateEvent(const Scaleform::GFx::AS3::Instances::fl_events::Event &, bool);
	void OnAdded(bool);
	void InitClassName(const char *);
	bool HasClassName();
	const char * GetClassNameA();
	Scaleform::GFx::AS3::VMAppDomain & GetAppDomain();
	void SetAppDomain(Scaleform::GFx::AS3::VMAppDomain &);
	bool GetObjectsUnderPoint(Scaleform::ArrayDH<Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase>,2,Scaleform::ArrayDefaultPolicy> *, const Scaleform::Render::Point<float> &);
	bool DoesAbcBelongTo(Scaleform::GFx::MovieDefImpl *);
	void SetFirstFrameCalledFlag(bool);
	bool IsFirstFrameCalledFlagSet();
	bool DetachChild(Scaleform::GFx::DisplayObjectBase *);
	static void * operator new(unsigned long long, void *);
	static void operator delete(void *);
	static void operator delete(void *, void *);
	Scaleform::GFx::AS3::AvmDisplayObj & operator=(const Scaleform::GFx::AS3::AvmDisplayObj &);
};
void Scaleform::GFx::AS3::AvmDisplayObj::Bind(Scaleform::GFx::DisplayObject * po); // 0x140461540
const char * Scaleform::GFx::AS3::AvmDisplayObj::GetDefaultASClassName(); // 0x140484F60
class Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase>
{
protected:
	Scaleform::GFx::DisplayObjectBase * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::DisplayObjectBase>(const Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase> &);
	Ptr<Scaleform::GFx::DisplayObjectBase>(Scaleform::GFx::DisplayObjectBase *);
	Ptr<Scaleform::GFx::DisplayObjectBase>(Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::DisplayObjectBase>(Scaleform::Pickable<Scaleform::GFx::DisplayObjectBase>);
	Ptr<Scaleform::GFx::DisplayObjectBase>(Scaleform::GFx::DisplayObjectBase &);
	Ptr<Scaleform::GFx::DisplayObjectBase>();
	~Ptr<Scaleform::GFx::DisplayObjectBase>();
	bool operator==(Scaleform::GFx::DisplayObjectBase *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase> &);
	bool operator!=(Scaleform::GFx::DisplayObjectBase *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase> &);
	Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase> & operator=(Scaleform::Pickable<Scaleform::GFx::DisplayObjectBase>);
	const Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase> & operator=(Scaleform::GFx::DisplayObjectBase &);
	const Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase> & operator=(Scaleform::GFx::DisplayObjectBase *);
	const Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase> & operator=(const Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase> &);
	Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase> & SetPtr(Scaleform::Pickable<Scaleform::GFx::DisplayObjectBase>);
	Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase> & SetPtr(Scaleform::GFx::DisplayObjectBase &);
	Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase> & SetPtr(Scaleform::GFx::DisplayObjectBase *);
	Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::DisplayObjectBase * & GetRawRef();
	Scaleform::GFx::DisplayObjectBase * GetPtr();
	Scaleform::GFx::DisplayObjectBase & operator*();
	Scaleform::GFx::DisplayObjectBase * operator->();
	Scaleform::GFx::DisplayObjectBase * operator class Scaleform::GFx::DisplayObjectBase *();
	Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase> & Pick(Scaleform::GFx::DisplayObjectBase *);
	Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase> & Pick(Scaleform::Pickable<Scaleform::GFx::DisplayObjectBase>);
	Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase> & Pick(Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase> &);
};
class Scaleform::ArrayDH<Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase>,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayDataDH<Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase>,Scaleform::AllocatorDH<Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase>,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayDH<Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDH<Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase>,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayDH<Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase>,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, const Scaleform::ArrayDefaultPolicy &);
	ArrayDH<Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase>,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, long);
	ArrayDH<Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase>,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *);
	const Scaleform::ArrayDH<Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase>,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayDH<Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase>,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayDH<Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase>,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::GFx::AS3::ShapeObject :
	Scaleform::GFx::DisplayObject,
	Scaleform::GFx::AS3::AvmDisplayObj
{
private:
	Scaleform::Ptr<Scaleform::GFx::ShapeBaseCharacterDef> pDef; // 0xC8
	Scaleform::Ptr<Scaleform::GFx::DrawingContext> pDrawing; // 0xD0
	Scaleform::GFx::AS3::ShapeObject * GetThis();
public:
	ShapeObject(const Scaleform::GFx::AS3::ShapeObject &);
	ShapeObject(Scaleform::GFx::CharacterDef *, Scaleform::GFx::ASMovieRootBase *, Scaleform::GFx::InteractiveObject *, Scaleform::GFx::ResourceId);
	virtual ~ShapeObject();
	virtual Scaleform::GFx::CharacterDef * GetCharacterDef();
	virtual Scaleform::Render::Rect<float> GetBounds(const Scaleform::Render::Matrix2x4<float> &);
	virtual Scaleform::Render::Rect<float> GetRectBounds(const Scaleform::Render::Matrix2x4<float> &);
	virtual bool PointTestLocal(const Scaleform::Render::Point<float> &, unsigned char);
	virtual Scaleform::GFx::DisplayObjectBase::TopMostResult GetTopMostMouseEntity(const Scaleform::Render::Point<float> &, Scaleform::GFx::DisplayObjectBase::TopMostDescr *);
	virtual Scaleform::GFx::DrawingContext * GetDrawingContext();
	virtual Scaleform::Ptr<Scaleform::Render::TreeNode> CreateRenderNode(Scaleform::Render::ContextImpl::Context &);
	virtual const char * GetDefaultASClassName();
	Scaleform::GFx::InteractiveObject * GetParent();
	virtual float GetRatio();
	virtual void SetRatio(float);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	Scaleform::GFx::AS3::ShapeObject & operator=(const Scaleform::GFx::AS3::ShapeObject &);
};
class Scaleform::Ptr<Scaleform::GFx::ShapeBaseCharacterDef>
{
protected:
	Scaleform::GFx::ShapeBaseCharacterDef * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ShapeBaseCharacterDef>(const Scaleform::Ptr<Scaleform::GFx::ShapeBaseCharacterDef> &);
	Ptr<Scaleform::GFx::ShapeBaseCharacterDef>(Scaleform::GFx::ShapeBaseCharacterDef *);
	Ptr<Scaleform::GFx::ShapeBaseCharacterDef>(Scaleform::Ptr<Scaleform::GFx::ShapeBaseCharacterDef> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ShapeBaseCharacterDef>(Scaleform::Pickable<Scaleform::GFx::ShapeBaseCharacterDef>);
	Ptr<Scaleform::GFx::ShapeBaseCharacterDef>(Scaleform::GFx::ShapeBaseCharacterDef &);
	Ptr<Scaleform::GFx::ShapeBaseCharacterDef>();
	~Ptr<Scaleform::GFx::ShapeBaseCharacterDef>();
	bool operator==(Scaleform::GFx::ShapeBaseCharacterDef *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ShapeBaseCharacterDef> &);
	bool operator!=(Scaleform::GFx::ShapeBaseCharacterDef *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ShapeBaseCharacterDef> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ShapeBaseCharacterDef> &);
	Scaleform::Ptr<Scaleform::GFx::ShapeBaseCharacterDef> & operator=(Scaleform::Pickable<Scaleform::GFx::ShapeBaseCharacterDef>);
	const Scaleform::Ptr<Scaleform::GFx::ShapeBaseCharacterDef> & operator=(Scaleform::GFx::ShapeBaseCharacterDef &);
	const Scaleform::Ptr<Scaleform::GFx::ShapeBaseCharacterDef> & operator=(Scaleform::GFx::ShapeBaseCharacterDef *);
	const Scaleform::Ptr<Scaleform::GFx::ShapeBaseCharacterDef> & operator=(const Scaleform::Ptr<Scaleform::GFx::ShapeBaseCharacterDef> &);
	Scaleform::Ptr<Scaleform::GFx::ShapeBaseCharacterDef> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ShapeBaseCharacterDef>);
	Scaleform::Ptr<Scaleform::GFx::ShapeBaseCharacterDef> & SetPtr(Scaleform::GFx::ShapeBaseCharacterDef &);
	Scaleform::Ptr<Scaleform::GFx::ShapeBaseCharacterDef> & SetPtr(Scaleform::GFx::ShapeBaseCharacterDef *);
	Scaleform::Ptr<Scaleform::GFx::ShapeBaseCharacterDef> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ShapeBaseCharacterDef> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ShapeBaseCharacterDef * & GetRawRef();
	Scaleform::GFx::ShapeBaseCharacterDef * GetPtr();
	Scaleform::GFx::ShapeBaseCharacterDef & operator*();
	Scaleform::GFx::ShapeBaseCharacterDef * operator->();
	Scaleform::GFx::ShapeBaseCharacterDef * operator class Scaleform::GFx::ShapeBaseCharacterDef *();
	Scaleform::Ptr<Scaleform::GFx::ShapeBaseCharacterDef> & Pick(Scaleform::GFx::ShapeBaseCharacterDef *);
	Scaleform::Ptr<Scaleform::GFx::ShapeBaseCharacterDef> & Pick(Scaleform::Pickable<Scaleform::GFx::ShapeBaseCharacterDef>);
	Scaleform::Ptr<Scaleform::GFx::ShapeBaseCharacterDef> & Pick(Scaleform::Ptr<Scaleform::GFx::ShapeBaseCharacterDef> &);
};
Scaleform::Render::Rect<float> Scaleform::GFx::AS3::ShapeObject::GetRectBounds(const Scaleform::Render::Matrix2x4<float> & transform); // 0x1404893A0
const char * Scaleform::GFx::AS3::ShapeObject::GetDefaultASClassName(); // 0x140484FE0
union Scaleform::GFx::AS3::AvmDisplayObj::GetAS3Obj::__l2::<unnamed-type-u>
{
public:
	unsigned long long v; // 0x0
	Scaleform::GFx::AS3::Instances::fl_display::DisplayObject * p; // 0x0
};