#pragma once

class Scaleform::GFx::StaticTextCharacter :
	Scaleform::GFx::DisplayObject
{
private:
	Scaleform::Ptr<Scaleform::GFx::StaticTextDef> pDef; // 0x90
	Scaleform::Render::Matrix2x4<float> OrigMatrix; // 0xA0
	enum <unnamed-enum-Flags_FontsResolved>
	{
		Flags_FontsResolved = 1,
		Flags_NextFrame = 2,
	};
	class Highlighter;
	class LineBuffer;
public:
	Scaleform::Render::Text::LineBuffer TextGlyphRecords; // 0xC0
	Scaleform::Render::Text::TextFilter Filter; // 0x120
	class HighlightDesc;
	Scaleform::GFx::StaticTextCharacter::HighlightDesc * pHighlight; // 0x180
	unsigned char Flags; // 0x188
	StaticTextCharacter(const Scaleform::GFx::StaticTextCharacter &);
	StaticTextCharacter(Scaleform::GFx::StaticTextDef *, Scaleform::GFx::MovieDefImpl *, Scaleform::GFx::ASMovieRootBase *, Scaleform::GFx::InteractiveObject *, Scaleform::GFx::ResourceId);
	virtual ~StaticTextCharacter();
	virtual void AdvanceFrame(bool, float);
	virtual Scaleform::GFx::CharacterDef::CharacterDefType GetType();
	virtual const Scaleform::Render::Matrix2x4<float> & GetMatrix();
	virtual void SetMatrix(const Scaleform::Render::Matrix2x4<float> &);
	virtual void SetFilters(const Scaleform::Render::FilterSet *);
	void SetTextFilters(const Scaleform::Render::Text::TextFilter &);
	bool HasHighlights();
	Scaleform::GFx::StaticTextCharacter::HighlightDesc * CreateTextHighlighter();
	Scaleform::GFx::StaticTextCharacter::HighlightDesc * GetTextHighlighter();
	Scaleform::GFx::StaticTextDef * GetStaticTextDef();
	virtual Scaleform::GFx::CharacterDef * GetCharacterDef();
	virtual Scaleform::Render::Rect<float> GetBounds(const Scaleform::Render::Matrix2x4<float> &);
	virtual Scaleform::Render::Rect<float> GetRectBounds(const Scaleform::Render::Matrix2x4<float> &);
	virtual bool PointTestLocal(const Scaleform::Render::Point<float> &, unsigned char);
	virtual Scaleform::GFx::DisplayObjectBase::TopMostResult GetTopMostMouseEntity(const Scaleform::Render::Point<float> &, Scaleform::GFx::DisplayObjectBase::TopMostDescr *);
protected:
	virtual Scaleform::Ptr<Scaleform::Render::TreeNode> CreateRenderNode(Scaleform::Render::ContextImpl::Context &);
	void RecreateVisibleTextLayout();
public:
	Scaleform::GFx::StaticTextCharacter & operator=(const Scaleform::GFx::StaticTextCharacter &);
};
class Scaleform::Ptr<Scaleform::GFx::StaticTextDef>
{
protected:
	Scaleform::GFx::StaticTextDef * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::StaticTextDef>(const Scaleform::Ptr<Scaleform::GFx::StaticTextDef> &);
	Ptr<Scaleform::GFx::StaticTextDef>(Scaleform::GFx::StaticTextDef *);
	Ptr<Scaleform::GFx::StaticTextDef>(Scaleform::Ptr<Scaleform::GFx::StaticTextDef> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::StaticTextDef>(Scaleform::Pickable<Scaleform::GFx::StaticTextDef>);
	Ptr<Scaleform::GFx::StaticTextDef>(Scaleform::GFx::StaticTextDef &);
	Ptr<Scaleform::GFx::StaticTextDef>();
	~Ptr<Scaleform::GFx::StaticTextDef>();
	bool operator==(Scaleform::GFx::StaticTextDef *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::StaticTextDef> &);
	bool operator!=(Scaleform::GFx::StaticTextDef *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::StaticTextDef> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::StaticTextDef> &);
	Scaleform::Ptr<Scaleform::GFx::StaticTextDef> & operator=(Scaleform::Pickable<Scaleform::GFx::StaticTextDef>);
	const Scaleform::Ptr<Scaleform::GFx::StaticTextDef> & operator=(Scaleform::GFx::StaticTextDef &);
	const Scaleform::Ptr<Scaleform::GFx::StaticTextDef> & operator=(Scaleform::GFx::StaticTextDef *);
	const Scaleform::Ptr<Scaleform::GFx::StaticTextDef> & operator=(const Scaleform::Ptr<Scaleform::GFx::StaticTextDef> &);
	Scaleform::Ptr<Scaleform::GFx::StaticTextDef> & SetPtr(Scaleform::Pickable<Scaleform::GFx::StaticTextDef>);
	Scaleform::Ptr<Scaleform::GFx::StaticTextDef> & SetPtr(Scaleform::GFx::StaticTextDef &);
	Scaleform::Ptr<Scaleform::GFx::StaticTextDef> & SetPtr(Scaleform::GFx::StaticTextDef *);
	Scaleform::Ptr<Scaleform::GFx::StaticTextDef> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::StaticTextDef> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::StaticTextDef * & GetRawRef();
	Scaleform::GFx::StaticTextDef * GetPtr();
	Scaleform::GFx::StaticTextDef & operator*();
	Scaleform::GFx::StaticTextDef * operator->();
	Scaleform::GFx::StaticTextDef * operator class Scaleform::GFx::StaticTextDef *();
	Scaleform::Ptr<Scaleform::GFx::StaticTextDef> & Pick(Scaleform::GFx::StaticTextDef *);
	Scaleform::Ptr<Scaleform::GFx::StaticTextDef> & Pick(Scaleform::Pickable<Scaleform::GFx::StaticTextDef>);
	Scaleform::Ptr<Scaleform::GFx::StaticTextDef> & Pick(Scaleform::Ptr<Scaleform::GFx::StaticTextDef> &);
};
class Scaleform::NewOverrideBase<325>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 325,
	};
public:
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
};
class Scaleform::GFx::StaticTextCharacter::HighlightDesc :
	Scaleform::NewOverrideBase<325>
{
private:
	Scaleform::Render::Text::Highlighter HighlightManager; // 0x0
public:
	Scaleform::Render::Text::Highlighter & GetManager();
	bool IsEmpty();
	void Invalidate();
	void Validate();
	bool IsValid();
	void SetSelectColor(const Scaleform::Render::Color &);
	HighlightDesc(Scaleform::GFx::StaticTextCharacter::HighlightDesc &);
	HighlightDesc(const Scaleform::GFx::StaticTextCharacter::HighlightDesc &);
	HighlightDesc();
	~HighlightDesc();
	Scaleform::GFx::StaticTextCharacter::HighlightDesc & operator=(Scaleform::GFx::StaticTextCharacter::HighlightDesc &);
	Scaleform::GFx::StaticTextCharacter::HighlightDesc & operator=(const Scaleform::GFx::StaticTextCharacter::HighlightDesc &);
};
void Scaleform::GFx::StaticTextCharacter::AdvanceFrame(bool nextFrame, float framePos); // 0x1403EEB50
Scaleform::GFx::CharacterDef::CharacterDefType Scaleform::GFx::StaticTextCharacter::GetType(); // 0x1403EF7A0
void Scaleform::GFx::StaticTextCharacter::SetTextFilters(const Scaleform::Render::Text::TextFilter & f); // 0x1403F0AB0
Scaleform::GFx::CharacterDef * Scaleform::GFx::StaticTextCharacter::GetCharacterDef(); // 0x1403EF3F0
Scaleform::Render::Rect<float> Scaleform::GFx::StaticTextCharacter::GetBounds(const Scaleform::Render::Matrix2x4<float> & transform); // 0x1403EF270
Scaleform::Render::Rect<float> Scaleform::GFx::StaticTextCharacter::GetRectBounds(const Scaleform::Render::Matrix2x4<float> & transform); // 0x1403EF480
bool Scaleform::GFx::StaticTextCharacter::PointTestLocal(const Scaleform::Render::Point<float> & pt, unsigned char hitTestMask); // 0x1403EFD40
Scaleform::GFx::DisplayObjectBase::TopMostResult Scaleform::GFx::StaticTextCharacter::GetTopMostMouseEntity(const Scaleform::Render::Point<float> & pt, Scaleform::GFx::DisplayObjectBase::TopMostDescr * pdescr); // 0x1403EF760
class Scaleform::GFx::StaticTextSnapshotData :
	Scaleform::NewOverrideBase<325>
{
	class LineBuffer;
	class HighlighterRangeIterator;
	struct HighlightDesc;
	class GlyphVisitor;
public:
	StaticTextSnapshotData(Scaleform::GFx::StaticTextSnapshotData &);
	StaticTextSnapshotData(const Scaleform::GFx::StaticTextSnapshotData &);
	StaticTextSnapshotData();
	void Add(Scaleform::GFx::StaticTextCharacter *);
	unsigned long long GetCharCount();
	Scaleform::String GetSubString(unsigned long long, unsigned long long, bool);
	Scaleform::String GetSelectedText(bool);
	long FindTextA(unsigned long long, const char *, bool);
	bool IsSelected(unsigned long long, unsigned long long);
	void SetSelected(unsigned long long, unsigned long long, bool);
	void SetSelectColor(const Scaleform::Render::Color &);
	long HitTestTextNearPos(float, float, float);
	void Visit(Scaleform::GFx::StaticTextSnapshotData::GlyphVisitor *, unsigned long long, unsigned long long);
	struct CharRef;
private:
	Scaleform::ArrayLH<Scaleform::GFx::StaticTextSnapshotData::CharRef,2,Scaleform::ArrayDefaultPolicy> StaticTextCharRefs; // 0x0
	Scaleform::StringLH SnapshotString; // 0x18
	Scaleform::Render::Color SelectColor; // 0x20
public:
	~StaticTextSnapshotData();
	Scaleform::GFx::StaticTextSnapshotData & operator=(Scaleform::GFx::StaticTextSnapshotData &);
	Scaleform::GFx::StaticTextSnapshotData & operator=(const Scaleform::GFx::StaticTextSnapshotData &);
};
class Scaleform::GFx::StaticTextSnapshotData::GlyphVisitor
{
public:
	~GlyphVisitor();
	void OnVisit();
	const char * GetFontName();
	unsigned long long GetRunIndex();
	const Scaleform::Render::Color & GetColor();
	float GetHeight();
	const Scaleform::Render::Matrix2x4<float> & GetMatrix();
	const Scaleform::Render::Rect<float> & GetCorners();
	bool IsSelected();
private:
	Scaleform::Render::Matrix2x4<float> Matrix; // 0x10
	Scaleform::Render::Rect<float> Corners; // 0x30
	Scaleform::Render::Text::LineBuffer::GlyphEntry * pGlyph; // 0x40
	Scaleform::Render::Font * pFont; // 0x48
	unsigned long long RunIdx; // 0x50
	float Height; // 0x58
	Scaleform::Render::Color ColorValue; // 0x5C
	bool bSelected; // 0x60
public:
	GlyphVisitor(const Scaleform::GFx::StaticTextSnapshotData::GlyphVisitor &);
	GlyphVisitor();
	Scaleform::GFx::StaticTextSnapshotData::GlyphVisitor & operator=(const Scaleform::GFx::StaticTextSnapshotData::GlyphVisitor &);
};
struct Scaleform::GFx::StaticTextSnapshotData::CharRef
{
	Scaleform::Ptr<Scaleform::GFx::StaticTextCharacter> pChar; // 0x0
	unsigned long long CharCount; // 0x8
	CharRef(Scaleform::GFx::StaticTextSnapshotData::CharRef &);
	CharRef(const Scaleform::GFx::StaticTextSnapshotData::CharRef &);
	CharRef();
	~CharRef();
	Scaleform::GFx::StaticTextSnapshotData::CharRef & operator=(Scaleform::GFx::StaticTextSnapshotData::CharRef &);
	Scaleform::GFx::StaticTextSnapshotData::CharRef & operator=(const Scaleform::GFx::StaticTextSnapshotData::CharRef &);
};
class Scaleform::Ptr<Scaleform::GFx::StaticTextCharacter>
{
protected:
	Scaleform::GFx::StaticTextCharacter * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::StaticTextCharacter>(const Scaleform::Ptr<Scaleform::GFx::StaticTextCharacter> &);
	Ptr<Scaleform::GFx::StaticTextCharacter>(Scaleform::GFx::StaticTextCharacter *);
	Ptr<Scaleform::GFx::StaticTextCharacter>(Scaleform::Ptr<Scaleform::GFx::StaticTextCharacter> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::StaticTextCharacter>(Scaleform::Pickable<Scaleform::GFx::StaticTextCharacter>);
	Ptr<Scaleform::GFx::StaticTextCharacter>(Scaleform::GFx::StaticTextCharacter &);
	Ptr<Scaleform::GFx::StaticTextCharacter>();
	~Ptr<Scaleform::GFx::StaticTextCharacter>();
	bool operator==(Scaleform::GFx::StaticTextCharacter *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::StaticTextCharacter> &);
	bool operator!=(Scaleform::GFx::StaticTextCharacter *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::StaticTextCharacter> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::StaticTextCharacter> &);
	Scaleform::Ptr<Scaleform::GFx::StaticTextCharacter> & operator=(Scaleform::Pickable<Scaleform::GFx::StaticTextCharacter>);
	const Scaleform::Ptr<Scaleform::GFx::StaticTextCharacter> & operator=(Scaleform::GFx::StaticTextCharacter &);
	const Scaleform::Ptr<Scaleform::GFx::StaticTextCharacter> & operator=(Scaleform::GFx::StaticTextCharacter *);
	const Scaleform::Ptr<Scaleform::GFx::StaticTextCharacter> & operator=(const Scaleform::Ptr<Scaleform::GFx::StaticTextCharacter> &);
	Scaleform::Ptr<Scaleform::GFx::StaticTextCharacter> & SetPtr(Scaleform::Pickable<Scaleform::GFx::StaticTextCharacter>);
	Scaleform::Ptr<Scaleform::GFx::StaticTextCharacter> & SetPtr(Scaleform::GFx::StaticTextCharacter &);
	Scaleform::Ptr<Scaleform::GFx::StaticTextCharacter> & SetPtr(Scaleform::GFx::StaticTextCharacter *);
	Scaleform::Ptr<Scaleform::GFx::StaticTextCharacter> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::StaticTextCharacter> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::StaticTextCharacter * & GetRawRef();
	Scaleform::GFx::StaticTextCharacter * GetPtr();
	Scaleform::GFx::StaticTextCharacter & operator*();
	Scaleform::GFx::StaticTextCharacter * operator->();
	Scaleform::GFx::StaticTextCharacter * operator class Scaleform::GFx::StaticTextCharacter *();
	Scaleform::Ptr<Scaleform::GFx::StaticTextCharacter> & Pick(Scaleform::GFx::StaticTextCharacter *);
	Scaleform::Ptr<Scaleform::GFx::StaticTextCharacter> & Pick(Scaleform::Pickable<Scaleform::GFx::StaticTextCharacter>);
	Scaleform::Ptr<Scaleform::GFx::StaticTextCharacter> & Pick(Scaleform::Ptr<Scaleform::GFx::StaticTextCharacter> &);
};
class Scaleform::ArrayLH<Scaleform::GFx::StaticTextSnapshotData::CharRef,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::StaticTextSnapshotData::CharRef,Scaleform::AllocatorLH<Scaleform::GFx::StaticTextSnapshotData::CharRef,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::StaticTextSnapshotData::CharRef,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::StaticTextSnapshotData::CharRef,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::StaticTextSnapshotData::CharRef,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::StaticTextSnapshotData::CharRef,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::StaticTextSnapshotData::CharRef,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::StaticTextSnapshotData::CharRef,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::StaticTextSnapshotData::CharRef,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::StaticTextSnapshotData::CharRef,2,Scaleform::ArrayDefaultPolicy>();
};