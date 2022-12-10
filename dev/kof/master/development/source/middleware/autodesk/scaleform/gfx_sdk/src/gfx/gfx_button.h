#pragma once

class Scaleform::GFx::AvmButtonBase :
	Scaleform::GFx::AvmInteractiveObjBase
{
public:
	void CreateCharacters();
	bool OnMouseEvent(const Scaleform::GFx::EventId &);
	bool OnButtonKeyEvent(const Scaleform::GFx::EventId &, long *);
	void SwitchState(Scaleform::GFx::ButtonRecord::MouseState);
	AvmButtonBase(Scaleform::GFx::AvmButtonBase &);
	AvmButtonBase(const Scaleform::GFx::AvmButtonBase &);
	AvmButtonBase();
	virtual ~AvmButtonBase();
	Scaleform::GFx::AvmButtonBase & operator=(Scaleform::GFx::AvmButtonBase &);
	Scaleform::GFx::AvmButtonBase & operator=(const Scaleform::GFx::AvmButtonBase &);
};
class Scaleform::GFx::Button :
	Scaleform::GFx::InteractiveObject
{
	enum ButtonState
	{
		Up = 0,
		Over = 1,
		Down = 2,
		Hit = 3,
		StatesCount = 4,
	};
	struct CharToRec;
	class StateCharArray;
protected:
	Scaleform::GFx::ButtonDef * pDef; // 0xD8
	enum MouseFlags
	{
		IDLE = 0,
		FLAG_OVER = 1,
		FLAG_DOWN = 2,
		OVER_DOWN = 3,
		OVER_UP = 1,
		OUT_DOWN = 2,
	};
	struct StateCharacters;
	Scaleform::GFx::Button::StateCharacters States[4]; // 0xE0
	long LastMouseFlags; // 0x160
	long mMouseFlags; // 0x164
	Scaleform::GFx::ButtonRecord::MouseState MouseState; // 0x168
public:
	Button(const Scaleform::GFx::Button &);
	Button(Scaleform::GFx::ButtonDef *, Scaleform::GFx::MovieDefImpl *, Scaleform::GFx::ASMovieRootBase *, Scaleform::GFx::InteractiveObject *, Scaleform::GFx::ResourceId);
	virtual ~Button();
	virtual void AdvanceFrame(bool, float);
	virtual void OnEventLoad();
	virtual Scaleform::GFx::CharacterDef::CharacterDefType GetType();
	virtual Scaleform::Render::Rect<float> GetBounds(const Scaleform::Render::Matrix2x4<float> &);
	virtual Scaleform::GFx::CharacterDef * GetCharacterDef();
	Scaleform::Render::Rect<float> GetRectBounds(const Scaleform::Render::Matrix2x4<float> &, Scaleform::GFx::DisplayObjectBase *);
	virtual Scaleform::Render::Rect<float> GetRectBounds(const Scaleform::Render::Matrix2x4<float> &);
	virtual Scaleform::GFx::DisplayObjectBase::TopMostResult GetTopMostMouseEntity(const Scaleform::Render::Point<float> &, Scaleform::GFx::DisplayObjectBase::TopMostDescr *);
	virtual void OnEventUnload();
	virtual bool PointTestLocal(const Scaleform::Render::Point<float> &, unsigned char);
	virtual void Restart();
	virtual void SetStateChangeFlags(unsigned char);
	virtual void PropagateScale9GridExists();
	virtual void SetScale9Grid(const Scaleform::Render::Rect<float> &);
	virtual long CheckAdvanceStatus(bool);
	virtual Scaleform::Render::Rect<float> GetFocusRect();
	virtual bool OnMouseEvent(const Scaleform::GFx::EventId &);
	virtual void OnGettingKeyboardFocus(unsigned long, Scaleform::GFx::FocusMovedType);
	virtual bool OnKeyEvent(const Scaleform::GFx::EventId &, long *);
	virtual bool OnLosingKeyboardFocus(Scaleform::GFx::InteractiveObject *, unsigned long, Scaleform::GFx::FocusMovedType);
	virtual void PropagateMouseEvent(const Scaleform::GFx::EventId &);
	virtual void PropagateNoAdvanceGlobalFlag();
	virtual void PropagateNoAdvanceLocalFlag();
	virtual void SetVisible(bool);
	void CreateCharacters();
	const Scaleform::GFx::AvmButtonBase * GetAvmButton();
	Scaleform::GFx::AvmButtonBase * GetAvmButton();
	Scaleform::GFx::ButtonDef * GetButtonDef();
	Scaleform::Render::Rect<float> GetBoundsOfRecord(const Scaleform::Render::Matrix2x4<float> &, Scaleform::GFx::DisplayObjectBase *);
	Scaleform::Render::Rect<float> GetBoundsOfState(const Scaleform::Render::Matrix2x4<float> &, Scaleform::GFx::Button::ButtonState);
	Scaleform::GFx::Button::StateCharacters & GetCharacters(Scaleform::GFx::Button::ButtonState);
	const Scaleform::GFx::Button::StateCharacters & GetCharacters(Scaleform::GFx::Button::ButtonState);
	const Scaleform::GFx::Button::StateCharacters & GetCharacters(Scaleform::GFx::ButtonRecord::MouseState);
	Scaleform::Render::TreeContainer * GetStateRenderContainer(Scaleform::GFx::Button::ButtonState);
	Scaleform::Ptr<Scaleform::Render::TreeContainer> CreateStateRenderContainer(Scaleform::GFx::Button::ButtonState);
	virtual void RemoveDisplayObject(Scaleform::GFx::DisplayObjectBase *);
	void SetDirtyFlag();
	void SwitchState();
	void UnloadCharactersForState(Scaleform::GFx::Button::ButtonState);
	void ClearRenderTreeForState(Scaleform::GFx::Button::ButtonState);
	Scaleform::GFx::Button::ButtonState GetCurrentState();
	static Scaleform::GFx::Button::ButtonState GetButtonState(Scaleform::GFx::ButtonRecord::MouseState);
	Scaleform::GFx::Button & operator=(const Scaleform::GFx::Button &);
};
struct Scaleform::GFx::Button::CharToRec
{
	Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase> Char; // 0x0
	const Scaleform::GFx::ButtonRecord * Record; // 0x8
	CharToRec(Scaleform::GFx::Button::CharToRec &);
	CharToRec(const Scaleform::GFx::Button::CharToRec &);
	CharToRec(Scaleform::GFx::DisplayObjectBase *, const Scaleform::GFx::ButtonRecord *);
	CharToRec();
	~CharToRec();
	Scaleform::GFx::Button::CharToRec & operator=(Scaleform::GFx::Button::CharToRec &);
	Scaleform::GFx::Button::CharToRec & operator=(const Scaleform::GFx::Button::CharToRec &);
};
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
class Scaleform::ArrayLH<Scaleform::GFx::Button::CharToRec,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::Button::CharToRec,Scaleform::AllocatorLH<Scaleform::GFx::Button::CharToRec,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::Button::CharToRec,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::Button::CharToRec,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::Button::CharToRec,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::Button::CharToRec,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::Button::CharToRec,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::Button::CharToRec,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::Button::CharToRec,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::Button::CharToRec,2,Scaleform::ArrayDefaultPolicy>();
};
struct Scaleform::GFx::Button::StateCharacters
{
	Scaleform::Ptr<Scaleform::Render::TreeContainer> pRenNode; // 0x0
	Scaleform::ArrayLH<Scaleform::GFx::Button::CharToRec,2,Scaleform::ArrayDefaultPolicy> Characters; // 0x8
	StateCharacters(Scaleform::GFx::Button::StateCharacters &);
	StateCharacters(const Scaleform::GFx::Button::StateCharacters &);
	StateCharacters();
	~StateCharacters();
	Scaleform::GFx::Button::StateCharacters & operator=(Scaleform::GFx::Button::StateCharacters &);
	Scaleform::GFx::Button::StateCharacters & operator=(const Scaleform::GFx::Button::StateCharacters &);
};
class Scaleform::Ptr<Scaleform::Render::TreeContainer>
{
protected:
	Scaleform::Render::TreeContainer * pObject; // 0x0
public:
	Ptr<Scaleform::Render::TreeContainer>(const Scaleform::Ptr<Scaleform::Render::TreeContainer> &);
	Ptr<Scaleform::Render::TreeContainer>(Scaleform::Render::TreeContainer *);
	Ptr<Scaleform::Render::TreeContainer>(Scaleform::Ptr<Scaleform::Render::TreeContainer> &, Scaleform::PickType);
	Ptr<Scaleform::Render::TreeContainer>(Scaleform::Pickable<Scaleform::Render::TreeContainer>);
	Ptr<Scaleform::Render::TreeContainer>(Scaleform::Render::TreeContainer &);
	Ptr<Scaleform::Render::TreeContainer>();
	~Ptr<Scaleform::Render::TreeContainer>();
	bool operator==(Scaleform::Render::TreeContainer *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::TreeContainer> &);
	bool operator!=(Scaleform::Render::TreeContainer *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::TreeContainer> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::TreeContainer> &);
	Scaleform::Ptr<Scaleform::Render::TreeContainer> & operator=(Scaleform::Pickable<Scaleform::Render::TreeContainer>);
	const Scaleform::Ptr<Scaleform::Render::TreeContainer> & operator=(Scaleform::Render::TreeContainer &);
	const Scaleform::Ptr<Scaleform::Render::TreeContainer> & operator=(Scaleform::Render::TreeContainer *);
	const Scaleform::Ptr<Scaleform::Render::TreeContainer> & operator=(const Scaleform::Ptr<Scaleform::Render::TreeContainer> &);
	Scaleform::Ptr<Scaleform::Render::TreeContainer> & SetPtr(Scaleform::Pickable<Scaleform::Render::TreeContainer>);
	Scaleform::Ptr<Scaleform::Render::TreeContainer> & SetPtr(Scaleform::Render::TreeContainer &);
	Scaleform::Ptr<Scaleform::Render::TreeContainer> & SetPtr(Scaleform::Render::TreeContainer *);
	Scaleform::Ptr<Scaleform::Render::TreeContainer> & SetPtr(const Scaleform::Ptr<Scaleform::Render::TreeContainer> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::TreeContainer * & GetRawRef();
	Scaleform::Render::TreeContainer * GetPtr();
	Scaleform::Render::TreeContainer & operator*();
	Scaleform::Render::TreeContainer * operator->();
	Scaleform::Render::TreeContainer * operator class Scaleform::Render::TreeContainer *();
	Scaleform::Ptr<Scaleform::Render::TreeContainer> & Pick(Scaleform::Render::TreeContainer *);
	Scaleform::Ptr<Scaleform::Render::TreeContainer> & Pick(Scaleform::Pickable<Scaleform::Render::TreeContainer>);
	Scaleform::Ptr<Scaleform::Render::TreeContainer> & Pick(Scaleform::Ptr<Scaleform::Render::TreeContainer> &);
};
Scaleform::GFx::CharacterDef::CharacterDefType Scaleform::GFx::Button::GetType(); // 0x1406F7470
Scaleform::GFx::CharacterDef * Scaleform::GFx::Button::GetCharacterDef(); // 0x1403F3770