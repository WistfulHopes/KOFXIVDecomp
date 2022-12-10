#pragma once

class Scaleform::GFx::AS3::AvmInteractiveObj :
	Scaleform::GFx::AS3::AvmDisplayObj,
	Scaleform::GFx::AvmInteractiveObjBase
{
private:
	unsigned char MouseOverCnt; // 0x40
	enum <unnamed-enum-Flag_DoubleClickEnabled>
	{
		Flag_DoubleClickEnabled = 2,
	};
	unsigned char Flags; // 0x41
public:
	AvmInteractiveObj(const Scaleform::GFx::AS3::AvmInteractiveObj &);
	AvmInteractiveObj(Scaleform::GFx::InteractiveObject *);
	virtual ~AvmInteractiveObj();
	Scaleform::GFx::InteractiveObject * GetIntObj();
	virtual Scaleform::GFx::AvmInteractiveObjBase * ToAvmInteractiveObjBase();
	virtual Scaleform::GFx::AvmSpriteBase * ToAvmSpriteBase();
	virtual Scaleform::GFx::AvmButtonBase * ToAvmButttonBase();
	virtual Scaleform::GFx::AvmTextFieldBase * ToAvmTextFieldBase();
	virtual Scaleform::GFx::AvmDisplayObjContainerBase * ToAvmDispContainerBase();
	virtual void OnEventLoad();
	virtual void OnEventUnload();
	virtual bool OnUnloading(bool);
	virtual const char * GetAbsolutePath(Scaleform::String *);
	virtual bool ActsAsButton();
	virtual void CopyPhysicalProperties(const Scaleform::GFx::InteractiveObject *);
	virtual void CloneInternalData(const Scaleform::GFx::InteractiveObject *);
	virtual unsigned long GetCursorType();
	virtual bool OnEvent(const Scaleform::GFx::EventId &);
	virtual bool IsTabable();
	virtual void OnFocus(Scaleform::GFx::InteractiveObject::FocusEventType, Scaleform::GFx::InteractiveObject *, unsigned long, Scaleform::GFx::FocusMovedType);
	virtual void OnGettingKeyboardFocus(unsigned long, Scaleform::GFx::FocusMovedType);
	virtual bool OnKeyEvent(const Scaleform::GFx::EventId &, long *);
	virtual bool OnLosingKeyboardFocus(Scaleform::GFx::InteractiveObject *, unsigned long, Scaleform::GFx::FocusMovedType);
	bool OnFocusChange(Scaleform::GFx::InteractiveObject *, unsigned long, Scaleform::GFx::FocusMovedType, Scaleform::GFx::ProcessFocusKeyInfo *);
	virtual const char * GetDefaultASClassName();
	bool IsSprite();
	bool IsStage();
	Scaleform::GFx::MovieDefImpl * GetDefImpl();
	Scaleform::GFx::MovieImpl * GetMovieImpl();
	Scaleform::GFx::AS3::Instances::fl_display::InteractiveObject * GetAS3IntObj();
	Scaleform::GFx::InteractiveObject * GetTopParent(bool);
	Scaleform::GFx::AS3::AvmInteractiveObj * GetAvmTopParent(bool);
	Scaleform::GFx::InteractiveObject * FindInsertToPlayList(Scaleform::GFx::InteractiveObject *);
	void InsertChildToPlayList(Scaleform::GFx::InteractiveObject *);
	void MoveBranchInPlayList();
	virtual void ForceShutdown();
	void SetDoubleClickEnabled(bool);
	bool IsDoubleClickEnabled();
	unsigned long IncrementMouseOverCnt();
	unsigned long DecrementMouseOverCnt();
	Scaleform::GFx::AS3::AvmInteractiveObj & operator=(const Scaleform::GFx::AS3::AvmInteractiveObj &);
};
const char * Scaleform::GFx::AS3::AvmInteractiveObj::GetDefaultASClassName(); // 0x140484F70