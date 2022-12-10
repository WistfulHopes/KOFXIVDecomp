#pragma once

class Scaleform::GFx::AS3::AvmTextField :
	Scaleform::GFx::AS3::AvmInteractiveObj,
	Scaleform::GFx::AvmTextFieldBase
{
	struct CSSHolder;
public:
	Scaleform::GFx::AS3::AvmTextField::CSSHolder * GetCSSData();
	AvmTextField(Scaleform::GFx::AS3::AvmTextField &);
	AvmTextField(const Scaleform::GFx::AS3::AvmTextField &);
	AvmTextField(Scaleform::GFx::TextField *);
	virtual const char * GetDefaultASClassName();
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
	virtual void CloneInternalData(const Scaleform::GFx::InteractiveObject *);
	virtual void CopyPhysicalProperties(const Scaleform::GFx::InteractiveObject *);
	virtual const char * GetAbsolutePath(Scaleform::String *);
	virtual unsigned long GetCursorType();
	virtual void OnFocus(Scaleform::GFx::InteractiveObject::FocusEventType, Scaleform::GFx::InteractiveObject *, unsigned long, Scaleform::GFx::FocusMovedType);
	virtual void OnGettingKeyboardFocus(unsigned long, Scaleform::GFx::FocusMovedType);
	virtual bool OnKeyEvent(const Scaleform::GFx::EventId &, long *);
	virtual bool OnLosingKeyboardFocus(Scaleform::GFx::InteractiveObject *, unsigned long, Scaleform::GFx::FocusMovedType);
	virtual bool IsFocusEnabled(Scaleform::GFx::FocusMovedType);
	virtual bool IsTabable();
	virtual bool HasStyleSheet();
	virtual void NotifyChanged();
	virtual void OnLinkEventEx(Scaleform::GFx::TextField::LinkEvent, unsigned long, unsigned long);
	virtual bool OnMouseEvent(const Scaleform::GFx::EventId &);
	virtual bool OnCharEvent(wchar_t, unsigned long);
	virtual void OnScroll();
	virtual bool OnEditorInsertingText(unsigned long long, unsigned long long, const wchar_t *, unsigned long);
	virtual bool OnEditorRemovingText(unsigned long long, unsigned long long, unsigned long);
	virtual bool UpdateTextFromVariable();
	virtual void UpdateVariable();
	virtual const Scaleform::GFx::Text::StyleManager * GetStyleSheet();
	Scaleform::GFx::TextField * GetTextField();
	Scaleform::GFx::TextFieldDef * GetTextFieldDef();
	void SetDirtyFlag();
	void UpdateAutosizeSettings();
	void ProceedImageSubstitution(Scaleform::GFx::AS3::VM &, long, const Scaleform::GFx::AS3::Value &);
	virtual ~AvmTextField();
	Scaleform::GFx::AS3::AvmTextField & operator=(Scaleform::GFx::AS3::AvmTextField &);
	Scaleform::GFx::AS3::AvmTextField & operator=(const Scaleform::GFx::AS3::AvmTextField &);
};
struct Scaleform::GFx::AS3::AvmTextField::CSSHolder :
	Scaleform::GFx::TextField::CSSHolderBase
{
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_text::StyleSheet> pASStyleSheet; // 0x50
	virtual bool HasASStyleSheet();
	virtual const Scaleform::GFx::Text::StyleManager * GetTextStyleManager();
	CSSHolder(Scaleform::GFx::AS3::AvmTextField::CSSHolder &);
	CSSHolder(const Scaleform::GFx::AS3::AvmTextField::CSSHolder &);
	CSSHolder();
	virtual ~CSSHolder();
	Scaleform::GFx::AS3::AvmTextField::CSSHolder & operator=(Scaleform::GFx::AS3::AvmTextField::CSSHolder &);
	Scaleform::GFx::AS3::AvmTextField::CSSHolder & operator=(const Scaleform::GFx::AS3::AvmTextField::CSSHolder &);
};
bool Scaleform::GFx::AS3::AvmTextField::CSSHolder::HasASStyleSheet(); // 0x1404CED30
const Scaleform::GFx::Text::StyleManager * Scaleform::GFx::AS3::AvmTextField::CSSHolder::GetTextStyleManager(); // 0x1404CED20
const char * Scaleform::GFx::AS3::AvmTextField::GetDefaultASClassName(); // 0x140484FD0
bool Scaleform::GFx::AS3::AvmTextField::OnEvent(const Scaleform::GFx::EventId & id); // 0x140495C70
void Scaleform::GFx::AS3::AvmButton::OnEventUnload(); // 0x140496100
bool Scaleform::GFx::AS3::AvmTextField::OnKeyEvent(const Scaleform::GFx::EventId & e, long * __formal); // 0x140496B70
bool Scaleform::GFx::AS3::AvmTextField::IsFocusEnabled(Scaleform::GFx::FocusMovedType fmt); // 0x14048FB80