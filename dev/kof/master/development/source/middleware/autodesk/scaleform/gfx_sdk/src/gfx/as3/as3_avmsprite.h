#pragma once

class Scaleform::GFx::AS3::AvmSprite :
	Scaleform::GFx::AS3::AvmDisplayObjContainer,
	Scaleform::GFx::AvmSpriteBase
{
public:
	Scaleform::FixedBitSetLH<323> InitActionsExecuted; // 0x58
	enum <unnamed-enum-Flag_ButtonMode>
	{
		Flag_ButtonMode = 1,
		Flag_NeedExecuteFrame = 2,
		Flag_ChildrenCreated = 4,
	};
private:
	unsigned char Flags; // 0x68
protected:
	void SetChildrenCreatedFlag(bool);
public:
	AvmSprite(const Scaleform::GFx::AS3::AvmSprite &);
	AvmSprite(Scaleform::GFx::Sprite *);
	virtual ~AvmSprite();
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
	virtual void CopyPhysicalProperties(const Scaleform::GFx::InteractiveObject *);
	virtual const char * GetAbsolutePath(Scaleform::String *);
	virtual bool IsTabable();
	virtual void OnFocus(Scaleform::GFx::InteractiveObject::FocusEventType, Scaleform::GFx::InteractiveObject *, unsigned long, Scaleform::GFx::FocusMovedType);
	virtual void OnGettingKeyboardFocus(unsigned long, Scaleform::GFx::FocusMovedType);
	virtual bool OnKeyEvent(const Scaleform::GFx::EventId &, long *);
	virtual bool OnLosingKeyboardFocus(Scaleform::GFx::InteractiveObject *, unsigned long, Scaleform::GFx::FocusMovedType);
	Scaleform::GFx::Sprite * GetSprite();
	Scaleform::GFx::SpriteDef * GetSpriteDef();
	Scaleform::GFx::TimelineDef * GetDef();
	Scaleform::GFx::MovieDefImpl * GetDefImpl();
	bool IsUnloaded();
	bool IsEnabledFlagSet();
	virtual const char * GetDefaultASClassName();
	virtual void AdvanceFrame(bool, float);
	virtual Scaleform::GFx::DisplayObjectBase * AddDisplayObject(const Scaleform::GFx::CharPosInfo &, const Scaleform::GFx::ASString &, const Scaleform::ArrayLH<Scaleform::GFx::SwfEvent *,260,Scaleform::ArrayDefaultPolicy> *, const void *, unsigned long, unsigned long, Scaleform::GFx::CharacterCreateInfo *, Scaleform::GFx::InteractiveObject *);
	virtual bool ActsAsButton();
	virtual bool IsLevelMovie();
	virtual void ForceShutdown();
	virtual unsigned long GetCursorType();
	virtual void ExecuteInitActionFrameTags(unsigned long);
	virtual void ExecuteFrame0Events();
	virtual void ExecuteFrameTags(unsigned long);
	virtual void CloneInternalData(const Scaleform::GFx::InteractiveObject *);
	virtual Scaleform::GFx::DisplayObjectBase::TopMostResult GetTopMostEntity(const Scaleform::Render::Point<float> &, Scaleform::GFx::DisplayObjectBase::TopMostDescr *, const Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> &);
	virtual void FillTabableArray(Scaleform::GFx::InteractiveObject::FillTabableParams *);
	virtual bool IsFocusEnabled(Scaleform::GFx::FocusMovedType);
	virtual bool MustBeInPlaylist();
	void QueueFrameScript(unsigned long);
	bool GetFrameScript(unsigned long, Scaleform::GFx::AS3::Value *);
	bool HasFrameScript();
	unsigned long GetCurrentSprite();
	void SetButtonMode(bool);
	bool IsButtonMode();
	void SetNeedExecuteFrameFlag(bool);
	bool IsNeedExecuteFrameFlagSet();
	void CreateChildren();
	bool IsChildrenCreatedFlagSet();
	virtual bool GetObjectsUnderPoint(Scaleform::ArrayDH<Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase>,2,Scaleform::ArrayDefaultPolicy> *, const Scaleform::Render::Point<float> &);
	Scaleform::GFx::DrawingContext * GetDrawingContext();
	bool HasDrawingContext();
	Scaleform::GFx::AS3::AvmSprite & operator=(const Scaleform::GFx::AS3::AvmSprite &);
};
class Scaleform::FixedBitSetLH<323> :
	Scaleform::FixedBitSetBase<Scaleform::AllocatorLH<unsigned char,323> >
{
	class BaseType;
protected:
	void * getThis();
public:
	FixedBitSetLH<323>(Scaleform::FixedBitSetLH<323> &);
	FixedBitSetLH<323>(const Scaleform::FixedBitSetLH<323> &);
	FixedBitSetLH<323>(unsigned long);
	~FixedBitSetLH<323>();
	Scaleform::FixedBitSetLH<323> & operator=(Scaleform::FixedBitSetLH<323> &);
	Scaleform::FixedBitSetLH<323> & operator=(const Scaleform::FixedBitSetLH<323> &);
};
Scaleform::GFx::AvmSpriteBase * Scaleform::GFx::AS3::AvmSprite::ToAvmSpriteBase(); // 0x1404AF780
const char * Scaleform::GFx::AS3::AvmSprite::GetDefaultASClassName(); // 0x140484FA0
Scaleform::GFx::DisplayObjectBase::TopMostResult Scaleform::GFx::AS3::AvmSprite::GetTopMostEntity(const Scaleform::Render::Point<float> & localPt, Scaleform::GFx::DisplayObjectBase::TopMostDescr * pdescr, const Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> & hitTest); // 0x14048B720
void Scaleform::GFx::AS3::AvmSprite::FillTabableArray(Scaleform::GFx::InteractiveObject::FillTabableParams * params); // 0x14047CDE0
class Scaleform::GFx::AS3::AvmMovieClip :
	Scaleform::GFx::AS3::AvmSprite
{
public:
	AvmMovieClip(const Scaleform::GFx::AS3::AvmMovieClip &);
	AvmMovieClip(Scaleform::GFx::Sprite *);
	virtual ~AvmMovieClip();
	virtual const char * GetDefaultASClassName();
	Scaleform::GFx::AS3::AvmMovieClip & operator=(const Scaleform::GFx::AS3::AvmMovieClip &);
};
Scaleform::GFx::AS3::AvmMovieClip::AvmMovieClip(Scaleform::GFx::Sprite * psprite); // 0x1404C38E0
const char * Scaleform::GFx::AS3::AvmMovieClip::GetDefaultASClassName(); // 0x140484F90