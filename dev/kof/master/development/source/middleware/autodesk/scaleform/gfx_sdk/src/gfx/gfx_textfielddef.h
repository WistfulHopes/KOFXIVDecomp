#pragma once

struct Scaleform::GFx::TextFieldDef :
	Scaleform::GFx::CharacterDef
{
	Scaleform::GFx::ResourcePtr<Scaleform::GFx::FontResource> pFont; // 0x20
	Scaleform::GFx::ResourceId FontId; // 0x30
	Scaleform::StringLH FontClass; // 0x38
	Scaleform::Render::Rect<float> TextRect; // 0x40
	float TextHeight; // 0x50
	Scaleform::Render::Color ColorV; // 0x54
	long MaxLength; // 0x58
	float LeftMargin; // 0x5C
	float RightMargin; // 0x60
	float Indent; // 0x64
	float Leading; // 0x68
	Scaleform::StringLH DefaultText; // 0x70
	Scaleform::StringLH VariableName; // 0x78
	enum <unnamed-enum-Flags_WordWrap>
	{
		Flags_WordWrap = 1,
		Flags_Multiline = 2,
		Flags_Password = 4,
		Flags_ReadOnly = 8,
		Flags_AutoSize = 16,
		Flags_Selectable = 32,
		Flags_Border = 64,
		Flags_Html = 128,
		Flags_UseDeviceFont = 256,
		Flags_HasLayout = 512,
		Flags_AAReadability = 1024,
		Flags_EmptyTextDef = 2048,
		Flags_WasStatic = 4096,
	};
	unsigned short Flags; // 0x80
	enum alignment
	{
		ALIGN_LEFT = 0,
		ALIGN_RIGHT = 1,
		ALIGN_CENTER = 2,
		ALIGN_JUSTIFY = 3,
	};
	Scaleform::GFx::TextFieldDef::alignment Alignment; // 0x84
	TextFieldDef(const Scaleform::GFx::TextFieldDef &);
	TextFieldDef();
	virtual ~TextFieldDef();
	virtual Scaleform::GFx::CharacterDef::CharacterDefType GetType();
	void SetWordWrap(bool);
	void ClearWordWrap();
	bool IsWordWrap();
	void SetMultiline(bool);
	void ClearMultiline();
	bool IsMultiline();
	void SetPassword(bool);
	void ClearPassword();
	bool IsPassword();
	void SetReadOnly(bool);
	void ClearReadOnly();
	bool IsReadOnly();
	void SetAutoSize(bool);
	void ClearAutoSize();
	bool IsAutoSize();
	void SetSelectable(bool);
	void ClearSelectable();
	bool IsSelectable();
	void SetBorder(bool);
	void ClearBorder();
	bool IsBorder();
	void SetHtml(bool);
	void ClearHtml();
	bool IsHtml();
	void SetUseDeviceFont(bool);
	void ClearUseDeviceFont();
	bool DoesUseDeviceFont();
	void SetHasLayout(bool);
	void ClearHasLayout();
	bool HasLayout();
	void SetAAForReadability(bool);
	void ClearAAForReadability();
	bool IsAAForReadability();
	void SetEmptyTextDef(bool);
	void ClearEmptyTextDef();
	bool IsEmptyTextDef();
	void SetWasStatic(bool);
	void ClearWasStatic();
	bool WasStatic();
	void InitEmptyTextDef();
	void Read(Scaleform::GFx::LoadProcess *, Scaleform::GFx::TagType);
	virtual unsigned long GetResourceTypeCode();
	Scaleform::GFx::TextFieldDef & operator=(const Scaleform::GFx::TextFieldDef &);
};
class Scaleform::GFx::ResourcePtr<Scaleform::GFx::FontResource> :
	Scaleform::GFx::ResourceHandle
{
public:
	ResourcePtr<Scaleform::GFx::FontResource>(const Scaleform::GFx::ResourcePtr<Scaleform::GFx::FontResource> &);
	ResourcePtr<Scaleform::GFx::FontResource>(Scaleform::GFx::FontResource *);
	ResourcePtr<Scaleform::GFx::FontResource>();
	Scaleform::GFx::ResourcePtr<Scaleform::GFx::FontResource> & operator=(Scaleform::GFx::FontResource *);
	Scaleform::GFx::ResourcePtr<Scaleform::GFx::FontResource> & operator=(const Scaleform::GFx::ResourcePtr<Scaleform::GFx::FontResource> &);
	bool operator==(const Scaleform::GFx::ResourcePtr<Scaleform::GFx::FontResource> &);
	bool operator!=(const Scaleform::GFx::ResourcePtr<Scaleform::GFx::FontResource> &);
	void SetFromHandle(const Scaleform::GFx::ResourceHandle &);
	~ResourcePtr<Scaleform::GFx::FontResource>();
};
Scaleform::GFx::CharacterDef::CharacterDefType Scaleform::GFx::TextFieldDef::GetType(); // 0x14002DEF0
unsigned long Scaleform::GFx::TextFieldDef::GetResourceTypeCode(); // 0x14038F030
class Scaleform::GFx::StaticTextRecord :
	Scaleform::NewOverrideBase<258>
{
	class GlyphEntry;
public:
	Scaleform::ArrayLH<Scaleform::GFx::StaticTextRecord::GlyphEntry,258,Scaleform::ArrayDefaultPolicy> Glyphs; // 0x0
	Scaleform::GFx::ResourcePtr<Scaleform::GFx::FontResource> pFont; // 0x18
	Scaleform::Render::Color ColorV; // 0x28
	Scaleform::Render::Point<float> Offset; // 0x2C
	float TextHeight; // 0x34
	unsigned short FontId; // 0x38
	StaticTextRecord(Scaleform::GFx::StaticTextRecord &);
	StaticTextRecord(const Scaleform::GFx::StaticTextRecord &);
	StaticTextRecord();
	void Read(Scaleform::GFx::Stream *, long, long, long);
	float GetCumulativeAdvance();
	~StaticTextRecord();
	Scaleform::GFx::StaticTextRecord & operator=(Scaleform::GFx::StaticTextRecord &);
	Scaleform::GFx::StaticTextRecord & operator=(const Scaleform::GFx::StaticTextRecord &);
};
class Scaleform::GFx::StaticTextRecord::GlyphEntry
{
public:
	unsigned long GlyphIndex; // 0x0
	float GlyphAdvance; // 0x4
	GlyphEntry(unsigned long, float);
	void __dflt_ctor_closure();
};
class Scaleform::ArrayLH<Scaleform::GFx::StaticTextRecord::GlyphEntry,258,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::StaticTextRecord::GlyphEntry,Scaleform::AllocatorLH<Scaleform::GFx::StaticTextRecord::GlyphEntry,258>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::StaticTextRecord::GlyphEntry,258,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::StaticTextRecord::GlyphEntry,258,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::StaticTextRecord::GlyphEntry,258,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::StaticTextRecord::GlyphEntry,258,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::StaticTextRecord::GlyphEntry,258,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::StaticTextRecord::GlyphEntry,258,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::StaticTextRecord::GlyphEntry,258,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::StaticTextRecord::GlyphEntry,258,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::GFx::StaticTextRecordList
{
public:
	Scaleform::ArrayLH<Scaleform::GFx::StaticTextRecord *,258,Scaleform::ArrayDefaultPolicy> Records; // 0x0
	StaticTextRecordList(const Scaleform::GFx::StaticTextRecordList &);
	StaticTextRecordList();
	~StaticTextRecordList();
	void Clear();
	unsigned long GetSize();
	Scaleform::GFx::StaticTextRecord * AddRecord();
	Scaleform::GFx::StaticTextRecordList & operator=(const Scaleform::GFx::StaticTextRecordList &);
};
class Scaleform::ArrayLH<Scaleform::GFx::StaticTextRecord *,258,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::StaticTextRecord *,Scaleform::AllocatorLH<Scaleform::GFx::StaticTextRecord *,258>,Scaleform::ArrayDefaultPolicy> >
{
	typedef Scaleform::GFx::StaticTextRecord ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::StaticTextRecord *,258,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::StaticTextRecord *,258,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::StaticTextRecord *,258,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::StaticTextRecord *,258,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::StaticTextRecord *,258,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::StaticTextRecord *,258,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::StaticTextRecord *,258,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::StaticTextRecord *,258,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::GFx::StaticTextDef :
	Scaleform::GFx::CharacterDef
{
public:
	Scaleform::Render::Rect<float> TextRect; // 0x20
	Scaleform::Render::Matrix2x4<float> MatrixPriv; // 0x30
	Scaleform::GFx::StaticTextRecordList TextRecords; // 0x50
	enum <unnamed-enum-Flags_AAReadability>
	{
		Flags_AAReadability = 1,
		Flags_HasInstances = 2,
	};
	unsigned char Flags; // 0x68
	StaticTextDef(Scaleform::GFx::StaticTextDef &);
	StaticTextDef(const Scaleform::GFx::StaticTextDef &);
	StaticTextDef();
	virtual Scaleform::GFx::CharacterDef::CharacterDefType GetType();
	void SetAAForReadability(bool);
	void ClearAAForReadability();
	bool IsAAForReadability();
	void SetHasInstances(bool);
	void ClearHasInstances();
	bool HasInstances();
	void Read(Scaleform::GFx::LoadProcess *, Scaleform::GFx::TagType);
	virtual Scaleform::Render::Rect<float> GetBoundsLocal(float);
	virtual bool DefPointTestLocal(const Scaleform::Render::Point<float> &, bool, const Scaleform::GFx::DisplayObjectBase *);
	virtual unsigned long GetResourceTypeCode();
	virtual ~StaticTextDef();
	Scaleform::GFx::StaticTextDef & operator=(Scaleform::GFx::StaticTextDef &);
	Scaleform::GFx::StaticTextDef & operator=(const Scaleform::GFx::StaticTextDef &);
};
Scaleform::Render::Rect<float> Scaleform::GFx::StaticTextDef::GetBoundsLocal(float __formal); // 0x1403EF2D0
unsigned long Scaleform::GFx::StaticTextDef::GetResourceTypeCode(); // 0x1403EF4E0