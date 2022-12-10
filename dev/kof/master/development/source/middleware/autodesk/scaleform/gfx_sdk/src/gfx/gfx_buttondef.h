#pragma once

class Scaleform::GFx::ButtonRecord
{
	enum MouseState
	{
		MouseUp = 0,
		MouseDown = 1,
		MouseOver = 2,
	};
public:
	Scaleform::Render::Matrix2x4<float> ButtonMatrix; // 0x0
	Scaleform::Render::Cxform ButtonCxform; // 0x20
	Scaleform::Ptr<Scaleform::Render::FilterSet> pFilters; // 0x40
	Scaleform::GFx::ResourceId CharacterId; // 0x48
	unsigned short Depth; // 0x4C
	Scaleform::Render::BlendMode BlendMode; // 0x50
	enum RecordFlags
	{
		Mask_HitTest = 1,
		Mask_Down = 2,
		Mask_Over = 4,
		Mask_Up = 8,
		Mask_All = 15,
	};
	unsigned char Flags; // 0x54
	ButtonRecord(Scaleform::GFx::ButtonRecord &);
	ButtonRecord(const Scaleform::GFx::ButtonRecord &);
	ButtonRecord();
	bool MatchMouseState(Scaleform::GFx::ButtonRecord::MouseState);
	bool Read(Scaleform::GFx::LoadProcess *, Scaleform::GFx::TagType);
	bool IsHitTest();
	bool IsDown();
	bool IsOver();
	bool IsUp();
	unsigned char GetFlags();
	~ButtonRecord();
	Scaleform::GFx::ButtonRecord & operator=(Scaleform::GFx::ButtonRecord &);
	Scaleform::GFx::ButtonRecord & operator=(const Scaleform::GFx::ButtonRecord &);
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
class Scaleform::GFx::ButtonActionBase :
	Scaleform::RefCountBase<Scaleform::GFx::ButtonActionBase,258>
{
protected:
	virtual ~ButtonActionBase();
public:
	void Read(Scaleform::GFx::Stream *, Scaleform::GFx::TagType, unsigned long);
	ButtonActionBase(const Scaleform::GFx::ButtonActionBase &);
	ButtonActionBase();
	Scaleform::GFx::ButtonActionBase & operator=(const Scaleform::GFx::ButtonActionBase &);
};
class Scaleform::RefCountBase<Scaleform::GFx::ButtonActionBase,258> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,258>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 258,
	};
public:
	RefCountBase<Scaleform::GFx::ButtonActionBase,258>(Scaleform::RefCountBase<Scaleform::GFx::ButtonActionBase,258> &);
	RefCountBase<Scaleform::GFx::ButtonActionBase,258>(const Scaleform::RefCountBase<Scaleform::GFx::ButtonActionBase,258> &);
	RefCountBase<Scaleform::GFx::ButtonActionBase,258>();
	virtual ~RefCountBase<Scaleform::GFx::ButtonActionBase,258>();
	Scaleform::RefCountBase<Scaleform::GFx::ButtonActionBase,258> & operator=(Scaleform::RefCountBase<Scaleform::GFx::ButtonActionBase,258> &);
	Scaleform::RefCountBase<Scaleform::GFx::ButtonActionBase,258> & operator=(const Scaleform::RefCountBase<Scaleform::GFx::ButtonActionBase,258> &);
};
class Scaleform::GFx::ButtonDef :
	Scaleform::GFx::CharacterDef
{
protected:
	Scaleform::ArrayLH<Scaleform::GFx::ButtonRecord,258,Scaleform::ArrayDefaultPolicy> ButtonRecords; // 0x20
	Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::GFx::ButtonActionBase>,258,Scaleform::ArrayDefaultPolicy> ButtonActions; // 0x38
	Scaleform::GFx::Scale9Grid * pScale9Grid; // 0x50
	bool Menu; // 0x58
public:
	ButtonDef(const Scaleform::GFx::ButtonDef &);
	ButtonDef();
	virtual ~ButtonDef();
	void InitEmptyButtonDef();
	void Read(Scaleform::GFx::LoadProcess *, Scaleform::GFx::TagType);
	virtual Scaleform::GFx::CharacterDef::CharacterDefType GetType();
	virtual Scaleform::Render::Rect<float> GetBoundsLocal(float);
	void SetScale9Grid(const Scaleform::Render::Rect<float> &);
	Scaleform::Render::Rect<float> GetScale9Grid();
	bool HasScale9Grid();
	virtual unsigned long GetResourceTypeCode();
	const Scaleform::GFx::ButtonRecord & GetRecordAt(unsigned long long);
	unsigned long long GetRecordsCount();
	const Scaleform::GFx::ButtonActionBase * GetButtonAction(unsigned long long);
	unsigned long long GetButtonActionsCount();
	void AddButtonAction(Scaleform::GFx::ButtonActionBase *);
	Scaleform::GFx::ButtonDef & operator=(const Scaleform::GFx::ButtonDef &);
};
class Scaleform::ArrayLH<Scaleform::GFx::ButtonRecord,258,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::ButtonRecord,Scaleform::AllocatorLH<Scaleform::GFx::ButtonRecord,258>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::ButtonRecord,258,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::ButtonRecord,258,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::ButtonRecord,258,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::ButtonRecord,258,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::ButtonRecord,258,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::ButtonRecord,258,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::ButtonRecord,258,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::ButtonRecord,258,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::Ptr<Scaleform::GFx::ButtonActionBase>
{
protected:
	Scaleform::GFx::ButtonActionBase * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ButtonActionBase>(const Scaleform::Ptr<Scaleform::GFx::ButtonActionBase> &);
	Ptr<Scaleform::GFx::ButtonActionBase>(Scaleform::GFx::ButtonActionBase *);
	Ptr<Scaleform::GFx::ButtonActionBase>(Scaleform::Ptr<Scaleform::GFx::ButtonActionBase> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ButtonActionBase>(Scaleform::Pickable<Scaleform::GFx::ButtonActionBase>);
	Ptr<Scaleform::GFx::ButtonActionBase>(Scaleform::GFx::ButtonActionBase &);
	Ptr<Scaleform::GFx::ButtonActionBase>();
	~Ptr<Scaleform::GFx::ButtonActionBase>();
	bool operator==(Scaleform::GFx::ButtonActionBase *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ButtonActionBase> &);
	bool operator!=(Scaleform::GFx::ButtonActionBase *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ButtonActionBase> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ButtonActionBase> &);
	Scaleform::Ptr<Scaleform::GFx::ButtonActionBase> & operator=(Scaleform::Pickable<Scaleform::GFx::ButtonActionBase>);
	const Scaleform::Ptr<Scaleform::GFx::ButtonActionBase> & operator=(Scaleform::GFx::ButtonActionBase &);
	const Scaleform::Ptr<Scaleform::GFx::ButtonActionBase> & operator=(Scaleform::GFx::ButtonActionBase *);
	const Scaleform::Ptr<Scaleform::GFx::ButtonActionBase> & operator=(const Scaleform::Ptr<Scaleform::GFx::ButtonActionBase> &);
	Scaleform::Ptr<Scaleform::GFx::ButtonActionBase> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ButtonActionBase>);
	Scaleform::Ptr<Scaleform::GFx::ButtonActionBase> & SetPtr(Scaleform::GFx::ButtonActionBase &);
	Scaleform::Ptr<Scaleform::GFx::ButtonActionBase> & SetPtr(Scaleform::GFx::ButtonActionBase *);
	Scaleform::Ptr<Scaleform::GFx::ButtonActionBase> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ButtonActionBase> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ButtonActionBase * & GetRawRef();
	Scaleform::GFx::ButtonActionBase * GetPtr();
	Scaleform::GFx::ButtonActionBase & operator*();
	Scaleform::GFx::ButtonActionBase * operator->();
	Scaleform::GFx::ButtonActionBase * operator class Scaleform::GFx::ButtonActionBase *();
	Scaleform::Ptr<Scaleform::GFx::ButtonActionBase> & Pick(Scaleform::GFx::ButtonActionBase *);
	Scaleform::Ptr<Scaleform::GFx::ButtonActionBase> & Pick(Scaleform::Pickable<Scaleform::GFx::ButtonActionBase>);
	Scaleform::Ptr<Scaleform::GFx::ButtonActionBase> & Pick(Scaleform::Ptr<Scaleform::GFx::ButtonActionBase> &);
};
class Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::GFx::ButtonActionBase>,258,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Ptr<Scaleform::GFx::ButtonActionBase>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::ButtonActionBase>,258>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Ptr<Scaleform::GFx::ButtonActionBase>,258,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::GFx::ButtonActionBase>,258,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::Ptr<Scaleform::GFx::ButtonActionBase>,258,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::Ptr<Scaleform::GFx::ButtonActionBase>,258,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::Ptr<Scaleform::GFx::ButtonActionBase>,258,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::GFx::ButtonActionBase>,258,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::GFx::ButtonActionBase>,258,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::Ptr<Scaleform::GFx::ButtonActionBase>,258,Scaleform::ArrayDefaultPolicy>();
};
Scaleform::GFx::CharacterDef::CharacterDefType Scaleform::GFx::ButtonDef::GetType(); // 0x1406F7470
Scaleform::Render::Rect<float> Scaleform::GFx::ButtonDef::GetBoundsLocal(float __formal); // 0x140047540
void Scaleform::GFx::ButtonDef::SetScale9Grid(const Scaleform::Render::Rect<float> & r); // 0x14036EBB0
unsigned long Scaleform::GFx::ButtonDef::GetResourceTypeCode(); // 0x1403E3870