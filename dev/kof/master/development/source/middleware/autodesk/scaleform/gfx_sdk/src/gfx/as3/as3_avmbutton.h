#pragma once

class Scaleform::GFx::AS3::AvmButton :
	Scaleform::GFx::AS3::AvmInteractiveObj,
	Scaleform::GFx::AvmButtonBase
{
public:
	AvmButton(Scaleform::GFx::AS3::AvmButton &);
	AvmButton(const Scaleform::GFx::AS3::AvmButton &);
	AvmButton(Scaleform::GFx::Button *);
	virtual Scaleform::GFx::AvmInteractiveObjBase * ToAvmInteractiveObjBase();
	virtual Scaleform::GFx::AvmSpriteBase * ToAvmSpriteBase();
	virtual Scaleform::GFx::AvmButtonBase * ToAvmButttonBase();
	virtual Scaleform::GFx::AvmTextFieldBase * ToAvmTextFieldBase();
	virtual Scaleform::GFx::AvmDisplayObjContainerBase * ToAvmDispContainerBase();
	virtual bool OnEvent(const Scaleform::GFx::EventId &);
	virtual void OnEventLoad();
	virtual void OnEventUnload();
	virtual bool OnUnloading(bool);
	virtual bool HasEventHandler(const Scaleform::GFx::EventId &);
	virtual bool ActsAsButton();
	virtual const char * GetAbsolutePath(Scaleform::String *);
	virtual unsigned long GetCursorType();
	virtual void CloneInternalData(const Scaleform::GFx::InteractiveObject *);
	virtual void CopyPhysicalProperties(const Scaleform::GFx::InteractiveObject *);
	virtual void OnFocus(Scaleform::GFx::InteractiveObject::FocusEventType, Scaleform::GFx::InteractiveObject *, unsigned long, Scaleform::GFx::FocusMovedType);
	virtual void OnGettingKeyboardFocus(unsigned long, Scaleform::GFx::FocusMovedType);
	virtual bool OnKeyEvent(const Scaleform::GFx::EventId &, long *);
	virtual bool OnLosingKeyboardFocus(Scaleform::GFx::InteractiveObject *, unsigned long, Scaleform::GFx::FocusMovedType);
	virtual bool IsFocusEnabled(Scaleform::GFx::FocusMovedType);
	virtual bool IsTabable();
	virtual void CreateCharacters();
	virtual bool OnMouseEvent(const Scaleform::GFx::EventId &);
	virtual bool OnButtonKeyEvent(const Scaleform::GFx::EventId &, long *);
	virtual void SwitchState(Scaleform::GFx::ButtonRecord::MouseState);
	virtual const char * GetDefaultASClassName();
	Scaleform::GFx::DisplayObject * GetUpStateObject();
	void SetUpStateObject(Scaleform::GFx::DisplayObject *);
	Scaleform::GFx::DisplayObject * GetOverStateObject();
	void SetOverStateObject(Scaleform::GFx::DisplayObject *);
	Scaleform::GFx::DisplayObject * GetDownStateObject();
	void SetDownStateObject(Scaleform::GFx::DisplayObject *);
	Scaleform::GFx::DisplayObject * GetHitStateObject();
	void SetHitStateObject(Scaleform::GFx::DisplayObject *);
	virtual bool DetachChild(Scaleform::GFx::DisplayObjectBase *);
private:
	Scaleform::GFx::ButtonDef * GetButtonDef();
	Scaleform::GFx::Button * GetButton();
	void SetStateObject(Scaleform::GFx::Button::ButtonState, Scaleform::GFx::DisplayObject *);
	void SwitchStateIntl(Scaleform::GFx::Button::ButtonState);
public:
	virtual ~AvmButton();
	Scaleform::GFx::AS3::AvmButton & operator=(Scaleform::GFx::AS3::AvmButton &);
	Scaleform::GFx::AS3::AvmButton & operator=(const Scaleform::GFx::AS3::AvmButton &);
};
const char * Scaleform::GFx::AS3::AvmButton::GetDefaultASClassName(); // 0x140484F50