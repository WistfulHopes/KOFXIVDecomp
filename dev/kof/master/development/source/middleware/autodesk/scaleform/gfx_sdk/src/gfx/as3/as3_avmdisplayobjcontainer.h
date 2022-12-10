#pragma once

class Scaleform::GFx::AS3::AvmDisplayObjContainer :
	Scaleform::GFx::AS3::AvmInteractiveObj,
	Scaleform::GFx::AvmDisplayObjContainerBase
{
public:
	AvmDisplayObjContainer(const Scaleform::GFx::AS3::AvmDisplayObjContainer &);
	AvmDisplayObjContainer(Scaleform::GFx::DisplayObjContainer *);
	virtual ~AvmDisplayObjContainer();
	virtual Scaleform::GFx::AvmInteractiveObjBase * ToAvmInteractiveObjBase();
	virtual Scaleform::GFx::AvmSpriteBase * ToAvmSpriteBase();
	virtual Scaleform::GFx::AvmButtonBase * ToAvmButttonBase();
	virtual Scaleform::GFx::AvmTextFieldBase * ToAvmTextFieldBase();
	virtual Scaleform::GFx::AvmDisplayObjContainerBase * ToAvmDispContainerBase();
	virtual void OnEventLoad();
	virtual void OnEventUnload();
	virtual bool OnUnloading(bool);
	virtual bool ActsAsButton();
	bool IsLevelMovie();
	virtual void ForceShutdown();
	virtual unsigned long GetCursorType();
	void ExecuteInitActionFrameTags(unsigned long);
	void ExecuteFrame0Events();
	void ExecuteFrameTags(unsigned long);
	virtual void CloneInternalData(const Scaleform::GFx::InteractiveObject *);
	virtual bool HasEventHandler(const Scaleform::GFx::EventId &);
	virtual bool OnEvent(const Scaleform::GFx::EventId &);
	virtual Scaleform::GFx::DisplayObjectBase::TopMostResult GetTopMostEntity(const Scaleform::Render::Point<float> &, Scaleform::GFx::DisplayObjectBase::TopMostDescr *, const Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> &);
	virtual void FillTabableArray(Scaleform::GFx::InteractiveObject::FillTabableParams *);
	virtual bool IsFocusEnabled(Scaleform::GFx::FocusMovedType);
	virtual void CopyPhysicalProperties(const Scaleform::GFx::InteractiveObject *);
	virtual const char * GetAbsolutePath(Scaleform::String *);
	virtual bool IsTabable();
	virtual void OnFocus(Scaleform::GFx::InteractiveObject::FocusEventType, Scaleform::GFx::InteractiveObject *, unsigned long, Scaleform::GFx::FocusMovedType);
	virtual void OnGettingKeyboardFocus(unsigned long, Scaleform::GFx::FocusMovedType);
	virtual bool OnKeyEvent(const Scaleform::GFx::EventId &, long *);
	virtual bool OnLosingKeyboardFocus(Scaleform::GFx::InteractiveObject *, unsigned long, Scaleform::GFx::FocusMovedType);
	virtual const char * GetDefaultASClassName();
	const Scaleform::GFx::DisplayObjContainer * GetDisplayObjContainer();
	Scaleform::GFx::DisplayObjContainer * GetDisplayObjContainer();
	const Scaleform::GFx::DisplayList & GetDisplayList();
	Scaleform::GFx::DisplayList & GetDisplayList();
	unsigned long GetNumChildren();
	void AddChild(Scaleform::GFx::DisplayObjectBase *);
	void AddChildAt(Scaleform::GFx::DisplayObjectBase *, unsigned long);
	virtual Scaleform::GFx::InteractiveObject * FindInsertToPlayList(Scaleform::GFx::InteractiveObject *);
	Scaleform::GFx::DisplayObjectBase * RemoveChild(Scaleform::GFx::DisplayObjectBase *);
	Scaleform::GFx::DisplayObjectBase * RemoveChildAt(unsigned long);
	bool SetChildIndex(Scaleform::GFx::DisplayObjectBase *, unsigned long);
	virtual bool DetachChild(Scaleform::GFx::DisplayObjectBase *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_display::DisplayObject> GetAS3ChildAt(unsigned long);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_display::DisplayObject> GetAS3ChildByName(const Scaleform::GFx::ASString &);
	bool SwapChildren(Scaleform::GFx::DisplayObjectBase *, Scaleform::GFx::DisplayObjectBase *);
	bool SwapChildrenAt(unsigned long, unsigned long);
	virtual void PropagateEvent(const Scaleform::GFx::AS3::Instances::fl_events::Event &, bool);
	virtual bool GetObjectsUnderPoint(Scaleform::ArrayDH<Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase>,2,Scaleform::ArrayDefaultPolicy> *, const Scaleform::Render::Point<float> &);
	Scaleform::GFx::AS3::AvmDisplayObjContainer & operator=(const Scaleform::GFx::AS3::AvmDisplayObjContainer &);
};
Scaleform::GFx::AvmInteractiveObjBase * Scaleform::GFx::AS3::AvmButton::ToAvmInteractiveObjBase(); // 0x1404AF740
Scaleform::GFx::InteractiveObject * Scaleform::GFx::AS3::MovieRoot::FindTarget(const Scaleform::GFx::ASString & path); // 0x1400470F0
Scaleform::GFx::AvmButtonBase * Scaleform::GFx::AS3::AvmButton::ToAvmButttonBase(); // 0x1404AF710
bool Scaleform::GFx::AS3::AvmDisplayObjContainer::OnUnloading(bool mayRemove); // 0x140497850
void Scaleform::GFx::AS3::Object::AS3Constructor(unsigned long __formal, Scaleform::GFx::AS3::Value * __formal); // 0x14002E7C0
bool Scaleform::GFx::AS3::AvmButton::OnEvent(const Scaleform::GFx::EventId & id); // 0x140495850
const char * Scaleform::GFx::AS3::AvmButton::GetAbsolutePath(Scaleform::String * ppath); // 0x140483230
bool Scaleform::GFx::AS3::AvmButton::IsTabable(); // 0x140490550
void Scaleform::GFx::AS3::AvmButton::OnFocus(Scaleform::GFx::InteractiveObject::FocusEventType event, Scaleform::GFx::InteractiveObject * oldOrNewFocusCh, unsigned long controllerIdx, Scaleform::GFx::FocusMovedType fmt); // 0x1404965F0
bool Scaleform::GFx::AS3::AvmButton::ActsAsButton(); // 0x1400B8180