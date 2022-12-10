#pragma once

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
struct Scaleform::GFx::Text::IMEStyle :
	Scaleform::NewOverrideBase<325>
{
	enum Category
	{
		SC_CompositionSegment = 0,
		SC_ClauseSegment = 1,
		SC_ConvertedSegment = 2,
		SC_PhraseLengthAdj = 3,
		SC_LowConfSegment = 4,
		SC_MaxNum = 5,
	};
	Scaleform::Render::Text::HighlightInfo HighlightStyles[5]; // 0x0
	unsigned char PresenceMask; // 0x50
	IMEStyle(Scaleform::GFx::Text::IMEStyle &);
	IMEStyle(const Scaleform::GFx::Text::IMEStyle &);
	IMEStyle();
	const Scaleform::Render::Text::HighlightInfo & GetElement(unsigned long long);
	bool HasElement(unsigned long long);
	void SetElement(unsigned long long, const Scaleform::Render::Text::HighlightInfo &);
	void Unite(const Scaleform::GFx::Text::IMEStyle &);
	Scaleform::GFx::Text::IMEStyle & operator=(Scaleform::GFx::Text::IMEStyle &);
	Scaleform::GFx::Text::IMEStyle & operator=(const Scaleform::GFx::Text::IMEStyle &);
};
class Scaleform::GFx::Text::CompositionString :
	Scaleform::Render::Text::CompositionStringBase
{
public:
	Scaleform::Ptr<Scaleform::Render::Text::TextFormat> pDefaultFormat; // 0x10
	Scaleform::GFx::Text::EditorKit * pEditorKit; // 0x18
	Scaleform::Ptr<Scaleform::Render::Text::Allocator> pAllocator; // 0x20
	Scaleform::Render::Text::Paragraph String; // 0x28
	unsigned long long CursorPos; // 0x70
	bool HasHighlightingFlag; // 0x78
	Scaleform::GFx::Text::IMEStyle Styles; // 0x7C
	unsigned long HighlightIds[10]; // 0xD0
	unsigned char HighlightIdsUsed; // 0xF8
	Scaleform::Render::Text::Paragraph * GetSourceParagraph();
	void Reformat();
	CompositionString(Scaleform::GFx::Text::EditorKit *);
	virtual ~CompositionString();
	virtual Scaleform::Render::Text::Allocator * GetAllocator();
	void SetText(const wchar_t *, unsigned long long);
	virtual const wchar_t * GetText();
	void SetPosition(unsigned long long);
	virtual unsigned long long GetPosition();
	virtual unsigned long long GetLength();
	Scaleform::Render::Text::Paragraph & GetParagraph();
	virtual Scaleform::Render::Text::TextFormat * GetTextFormat(unsigned long long);
	Scaleform::Render::Text::TextFormat * GetDefaultTextFormat();
	void SetCursorPosition(unsigned long long);
	unsigned long long GetCursorPosition();
	void HighlightText(unsigned long long, unsigned long long, Scaleform::GFx::Text::IMEStyle::Category);
	void UseStyles(const Scaleform::GFx::Text::IMEStyle &);
	void ClearHighlighting();
	bool HasHighlighting();
	static Scaleform::GFx::Text::IMEStyle GetDefaultStyles();
};
class Scaleform::GFx::Text::EditorKit :
	Scaleform::Render::Text::EditorKitBase
{
	class Matrix;
	class Cxform;
	enum <unnamed-enum-Flags_ReadOnly>
	{
		Flags_ReadOnly = 1,
		Flags_Selectable = 2,
		Flags_UseRichClipboard = 4,
		Flags_CursorBlink = 8,
		Flags_CursorTimerBlocked = 16,
		Flags_MouseCaptured = 32,
		Flags_ShiftPressed = 64,
		Flags_OverwriteMode = 128,
		Flags_WideCursor = 256,
		Flags_LastDoubleClick = 512,
		Flags_Focused = 1024,
	};
protected:
	Scaleform::Ptr<Scaleform::Render::Text::DocView> pDocView; // 0x10
	Scaleform::Ptr<Scaleform::GFx::Clipboard> pClipboard; // 0x18
	Scaleform::Ptr<Scaleform::GFx::TextKeyMap> pKeyMap; // 0x20
	Scaleform::Ptr<Scaleform::GFx::Text::CompositionString> pComposStr; // 0x28
	struct RestrictParams;
	Scaleform::AutoPtr<Scaleform::GFx::Text::EditorKit::RestrictParams> pRestrict; // 0x30
	unsigned long long CursorPos; // 0x40
	Scaleform::Render::Color CursorColor; // 0x48
	long SelectPos; // 0x4C
	Scaleform::Render::Text::CachedValue<Scaleform::Render::Rect<float> > CursorRect; // 0x50
	double CursorTimer; // 0x70
	double LastAdvanceTime; // 0x78
	float LastHorizCursorPos; // 0x80
	Scaleform::Render::Point<float> LastMousePos; // 0x84
	unsigned long LastClickTime; // 0x8C
	unsigned long ActiveSelectionBkColor; // 0x90
	unsigned long ActiveSelectionTextColor; // 0x94
	unsigned long InactiveSelectionBkColor; // 0x98
	unsigned long InactiveSelectionTextColor; // 0x9C
	unsigned short Flags; // 0xA0
	void SetCursorBlink();
	void ClearCursorBlink();
	bool IsCursorBlink();
	void SetCursorTimerBlocked();
	void ClearCursorTimerBlocked();
	bool IsCursorTimerBlocked();
	void SetMouseCaptured();
	void ClearMouseCaptured();
	void SetShiftPressed();
	void ClearShiftPressed();
	bool IsShiftPressed();
	void SetLastDoubleClickFlag();
	void ClearLastDoubleClickFlag();
	bool IsLastDoubleClickFlagSet();
	void OnDocumentChanged(unsigned long);
	const Scaleform::Render::Text::LineBuffer::GlyphEntry * GetGlyphEntryAtIndex(unsigned long long, unsigned long long *);
	void InvalidateSelectionColors();
	bool ParseRestrict(const char *, unsigned long long);
public:
	EditorKit(const Scaleform::GFx::Text::EditorKit &);
	EditorKit(Scaleform::Render::Text::DocView *);
	virtual ~EditorKit();
	virtual void AddDrawCursorInfo(Scaleform::Render::TextLayout::Builder &);
	virtual bool IsReadOnly();
	virtual unsigned long long TextPos2GlyphOffset(unsigned long long);
	virtual unsigned long long TextPos2GlyphPos(unsigned long long);
	virtual unsigned long long GlyphPos2TextPos(unsigned long long);
	void SetReadOnly();
	void ClearReadOnly();
	void SetSelectable();
	void ClearSelectable();
	bool IsSelectable();
	void SetUseRichClipboard();
	void ClearUseRichClipboard();
	bool DoesUseRichClipboard();
	void SetOverwriteMode();
	void ClearOverwriteMode();
	bool IsOverwriteMode();
	void SetWideCursor();
	void ClearWideCursor();
	bool IsWideCursor();
	void SetFocused();
	void ClearFocused();
	bool IsFocused();
	bool IsMouseCaptured();
	void Advance(double);
	void UpdateWideCursor();
	void ResetBlink(bool, bool);
	bool HasCursor();
	void SetCursorPos(unsigned long long);
	void SetCursorPos(unsigned long long, bool);
	unsigned long long GetCursorPos();
	Scaleform::Render::Text::CachedValue<Scaleform::Render::Rect<float> > GetCursorRect();
	bool ScrollToPosition(unsigned long long, bool, bool);
	bool ScrollToCursor();
	void OnMouseDown(float, float, long);
	void OnMouseUp(float, float, long);
	void OnMouseMove(float, float);
	bool OnKeyDown(long, const Scaleform::KeyModifiers &);
	bool OnKeyUp(long, const Scaleform::KeyModifiers &);
	bool OnChar(unsigned long);
	void OnSetFocus();
	void OnKillFocus();
	Scaleform::Render::Text::DocView * GetDocument();
	void SetClipboard(Scaleform::GFx::Clipboard *);
	void SetKeyMap(Scaleform::GFx::TextKeyMap *);
	bool CalcCursorRectInLineBuffer(unsigned long long, Scaleform::Render::Rect<float> *, unsigned long *, unsigned long *, bool, Scaleform::Render::Text::LineBuffer::Line::Alignment *);
	bool CalcAbsCursorRectInLineBuffer(unsigned long long, Scaleform::Render::Rect<float> *, unsigned long *, unsigned long *);
	bool CalcCursorRectOnScreen(unsigned long long, Scaleform::Render::Rect<float> *, unsigned long *, unsigned long *, bool, Scaleform::Render::Text::LineBuffer::Line::Alignment *);
	bool CalcAbsCursorRectOnScreen(unsigned long long, Scaleform::Render::Rect<float> *, unsigned long *, unsigned long *);
	void SetSelection(unsigned long long, unsigned long long);
	void ClearSelection();
	unsigned long long GetBeginSelection();
	unsigned long long GetEndSelection();
	void SetBeginSelection(unsigned long long);
	void SetEndSelection(unsigned long long);
	void SetActiveSelectionTextColor(unsigned long);
	void SetActiveSelectionBackgroundColor(unsigned long);
	void SetInactiveSelectionTextColor(unsigned long);
	void SetInactiveSelectionBackgroundColor(unsigned long);
	unsigned long GetActiveSelectionTextColor();
	unsigned long GetActiveSelectionBackgroundColor();
	unsigned long GetInactiveSelectionTextColor();
	unsigned long GetInactiveSelectionBackgroundColor();
	void CopyToClipboard(unsigned long long, unsigned long long, bool);
	void CutToClipboard(unsigned long long, unsigned long long, bool);
	unsigned long long PasteFromClipboard(unsigned long long, unsigned long long, bool);
	bool SetRestrict(const Scaleform::String &);
	const Scaleform::String * GetRestrict();
	void ClearRestrict();
	bool CheckRestrict(wchar_t);
	bool HasRestrict();
	Scaleform::GFx::Text::CompositionString * CreateCompositionString();
	void ReleaseCompositionString();
	virtual bool HasCompositionString();
	virtual Scaleform::GFx::Text::CompositionString * GetCompositionString();
	Scaleform::GFx::Text::EditorKit & operator=(const Scaleform::GFx::Text::EditorKit &);
};
class Scaleform::Ptr<Scaleform::Render::Text::DocView>
{
protected:
	Scaleform::Render::Text::DocView * pObject; // 0x0
public:
	Ptr<Scaleform::Render::Text::DocView>(const Scaleform::Ptr<Scaleform::Render::Text::DocView> &);
	Ptr<Scaleform::Render::Text::DocView>(Scaleform::Render::Text::DocView *);
	Ptr<Scaleform::Render::Text::DocView>(Scaleform::Ptr<Scaleform::Render::Text::DocView> &, Scaleform::PickType);
	Ptr<Scaleform::Render::Text::DocView>(Scaleform::Pickable<Scaleform::Render::Text::DocView>);
	Ptr<Scaleform::Render::Text::DocView>(Scaleform::Render::Text::DocView &);
	Ptr<Scaleform::Render::Text::DocView>();
	~Ptr<Scaleform::Render::Text::DocView>();
	bool operator==(Scaleform::Render::Text::DocView *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::Text::DocView> &);
	bool operator!=(Scaleform::Render::Text::DocView *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::Text::DocView> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::Text::DocView> &);
	Scaleform::Ptr<Scaleform::Render::Text::DocView> & operator=(Scaleform::Pickable<Scaleform::Render::Text::DocView>);
	const Scaleform::Ptr<Scaleform::Render::Text::DocView> & operator=(Scaleform::Render::Text::DocView &);
	const Scaleform::Ptr<Scaleform::Render::Text::DocView> & operator=(Scaleform::Render::Text::DocView *);
	const Scaleform::Ptr<Scaleform::Render::Text::DocView> & operator=(const Scaleform::Ptr<Scaleform::Render::Text::DocView> &);
	Scaleform::Ptr<Scaleform::Render::Text::DocView> & SetPtr(Scaleform::Pickable<Scaleform::Render::Text::DocView>);
	Scaleform::Ptr<Scaleform::Render::Text::DocView> & SetPtr(Scaleform::Render::Text::DocView &);
	Scaleform::Ptr<Scaleform::Render::Text::DocView> & SetPtr(Scaleform::Render::Text::DocView *);
	Scaleform::Ptr<Scaleform::Render::Text::DocView> & SetPtr(const Scaleform::Ptr<Scaleform::Render::Text::DocView> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::Text::DocView * & GetRawRef();
	Scaleform::Render::Text::DocView * GetPtr();
	Scaleform::Render::Text::DocView & operator*();
	Scaleform::Render::Text::DocView * operator->();
	Scaleform::Render::Text::DocView * operator class Scaleform::Render::Text::DocView *();
	Scaleform::Ptr<Scaleform::Render::Text::DocView> & Pick(Scaleform::Render::Text::DocView *);
	Scaleform::Ptr<Scaleform::Render::Text::DocView> & Pick(Scaleform::Pickable<Scaleform::Render::Text::DocView>);
	Scaleform::Ptr<Scaleform::Render::Text::DocView> & Pick(Scaleform::Ptr<Scaleform::Render::Text::DocView> &);
};
class Scaleform::Ptr<Scaleform::GFx::Text::CompositionString>
{
protected:
	Scaleform::GFx::Text::CompositionString * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::Text::CompositionString>(const Scaleform::Ptr<Scaleform::GFx::Text::CompositionString> &);
	Ptr<Scaleform::GFx::Text::CompositionString>(Scaleform::GFx::Text::CompositionString *);
	Ptr<Scaleform::GFx::Text::CompositionString>(Scaleform::Ptr<Scaleform::GFx::Text::CompositionString> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::Text::CompositionString>(Scaleform::Pickable<Scaleform::GFx::Text::CompositionString>);
	Ptr<Scaleform::GFx::Text::CompositionString>(Scaleform::GFx::Text::CompositionString &);
	Ptr<Scaleform::GFx::Text::CompositionString>();
	~Ptr<Scaleform::GFx::Text::CompositionString>();
	bool operator==(Scaleform::GFx::Text::CompositionString *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::Text::CompositionString> &);
	bool operator!=(Scaleform::GFx::Text::CompositionString *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::Text::CompositionString> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::Text::CompositionString> &);
	Scaleform::Ptr<Scaleform::GFx::Text::CompositionString> & operator=(Scaleform::Pickable<Scaleform::GFx::Text::CompositionString>);
	const Scaleform::Ptr<Scaleform::GFx::Text::CompositionString> & operator=(Scaleform::GFx::Text::CompositionString &);
	const Scaleform::Ptr<Scaleform::GFx::Text::CompositionString> & operator=(Scaleform::GFx::Text::CompositionString *);
	const Scaleform::Ptr<Scaleform::GFx::Text::CompositionString> & operator=(const Scaleform::Ptr<Scaleform::GFx::Text::CompositionString> &);
	Scaleform::Ptr<Scaleform::GFx::Text::CompositionString> & SetPtr(Scaleform::Pickable<Scaleform::GFx::Text::CompositionString>);
	Scaleform::Ptr<Scaleform::GFx::Text::CompositionString> & SetPtr(Scaleform::GFx::Text::CompositionString &);
	Scaleform::Ptr<Scaleform::GFx::Text::CompositionString> & SetPtr(Scaleform::GFx::Text::CompositionString *);
	Scaleform::Ptr<Scaleform::GFx::Text::CompositionString> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::Text::CompositionString> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::Text::CompositionString * & GetRawRef();
	Scaleform::GFx::Text::CompositionString * GetPtr();
	Scaleform::GFx::Text::CompositionString & operator*();
	Scaleform::GFx::Text::CompositionString * operator->();
	Scaleform::GFx::Text::CompositionString * operator class Scaleform::GFx::Text::CompositionString *();
	Scaleform::Ptr<Scaleform::GFx::Text::CompositionString> & Pick(Scaleform::GFx::Text::CompositionString *);
	Scaleform::Ptr<Scaleform::GFx::Text::CompositionString> & Pick(Scaleform::Pickable<Scaleform::GFx::Text::CompositionString>);
	Scaleform::Ptr<Scaleform::GFx::Text::CompositionString> & Pick(Scaleform::Ptr<Scaleform::GFx::Text::CompositionString> &);
};
struct Scaleform::GFx::Text::EditorKit::RestrictParams :
	Scaleform::NewOverrideBase<325>
{
	class RestrictRangesArrayType;
	Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> > RestrictRanges; // 0x0
	Scaleform::StringLH RestrictString; // 0x18
	RestrictParams(Scaleform::GFx::Text::EditorKit::RestrictParams &);
	RestrictParams(const Scaleform::GFx::Text::EditorKit::RestrictParams &);
	RestrictParams();
	~RestrictParams();
	Scaleform::GFx::Text::EditorKit::RestrictParams & operator=(Scaleform::GFx::Text::EditorKit::RestrictParams &);
	Scaleform::GFx::Text::EditorKit::RestrictParams & operator=(const Scaleform::GFx::Text::EditorKit::RestrictParams &);
};
class Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<void *>,Scaleform::AllocatorLH<Scaleform::RangeData<void *>,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> >
{
private:
	unsigned long long FindRangeIndex(long long);
	unsigned long long FindNearestRangeIndex(long long);
	class TypedRangeData;
	class RangeArrayType;
public:
	Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> Ranges; // 0x0
	const Scaleform::RangeData<void *> & operator[](unsigned long long);
	Scaleform::RangeData<void *> & operator[](unsigned long long);
	unsigned long long Count();
	void SetRange(const Scaleform::RangeData<void *> &);
	void SetRange(long long, unsigned long long, void * &);
	void ClearRange(long long, unsigned long long);
	Scaleform::RangeData<void *> & Append(unsigned long long, void * &);
	void InsertRange(long long, unsigned long long, void * &);
	void ExpandRange(long long, unsigned long long);
	void RemoveRange(long long, unsigned long long);
	void RemoveAll();
	class Iterator;
	Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> >::ConstIterator Begin();
	Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> >::Iterator Begin();
	Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> >::ConstIterator Last();
	Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> >::Iterator Last();
	Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> >::ConstIterator GetIteratorAt(long long);
	Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> >::Iterator GetIteratorAt(long long);
	Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> >::ConstIterator GetIteratorByNearestIndex(long long);
	Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> >::Iterator GetIteratorByNearestIndex(long long);
	class ConstIterator;
	class ConstPositionIterator;
	void CheckIntegrity();
	RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> >(Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> > &);
	RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> >(const Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> > &);
	RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> >();
	~RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> >();
	Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> > & operator=(Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> > &);
	Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> > & operator=(const Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> > &);
};
class Scaleform::RangeData<void *> :
	Scaleform::Range
{
private:
	void * Data; // 0x10
public:
	RangeData<void *>(Scaleform::RangeData<void *> &);
	RangeData<void *>(const Scaleform::RangeData<void *> &);
	RangeData<void *>(long long, unsigned long long, void * &);
	RangeData<void *>();
	void * & GetData();
	void * & GetData();
	void * & operator->();
	void * & operator->();
	void * & operator*();
	void * & operator*();
	void SetData(void * &);
	bool IsDataEqual(void * &);
};
class Scaleform::AutoPtr<Scaleform::GFx::Text::EditorKit::RestrictParams>
{
public:
	AutoPtr<Scaleform::GFx::Text::EditorKit::RestrictParams>(const Scaleform::AutoPtr<Scaleform::GFx::Text::EditorKit::RestrictParams> &);
	AutoPtr<Scaleform::GFx::Text::EditorKit::RestrictParams>(Scaleform::GFx::Text::EditorKit::RestrictParams *, bool);
	AutoPtr<Scaleform::GFx::Text::EditorKit::RestrictParams>(Scaleform::GFx::Text::EditorKit::RestrictParams *);
	~AutoPtr<Scaleform::GFx::Text::EditorKit::RestrictParams>();
	Scaleform::AutoPtr<Scaleform::GFx::Text::EditorKit::RestrictParams> & operator=(Scaleform::GFx::Text::EditorKit::RestrictParams *);
	Scaleform::AutoPtr<Scaleform::GFx::Text::EditorKit::RestrictParams> & operator=(const Scaleform::AutoPtr<Scaleform::GFx::Text::EditorKit::RestrictParams> &);
	Scaleform::GFx::Text::EditorKit::RestrictParams & operator*();
	Scaleform::GFx::Text::EditorKit::RestrictParams * operator->();
	Scaleform::GFx::Text::EditorKit::RestrictParams * GetPtr();
	bool operator bool();
	Scaleform::GFx::Text::EditorKit::RestrictParams * Release();
	void Reset(Scaleform::GFx::Text::EditorKit::RestrictParams *, bool);
private:
	Scaleform::GFx::Text::EditorKit::RestrictParams * pObject; // 0x0
	bool Owner; // 0x8
	Scaleform::GFx::Text::EditorKit::RestrictParams * constRelease();
public:
	void __dflt_ctor_closure();
};
struct Scaleform::Render::Text::CachedValue<Scaleform::Render::Rect<float> >
{
	Scaleform::Render::Rect<float> Value; // 0x0
	unsigned short FormatCounter; // 0x10
	CachedValue<Scaleform::Render::Rect<float> >(Scaleform::Render::Text::CachedValue<Scaleform::Render::Rect<float> > &);
	CachedValue<Scaleform::Render::Rect<float> >(const Scaleform::Render::Text::CachedValue<Scaleform::Render::Rect<float> > &);
	CachedValue<Scaleform::Render::Rect<float> >(const Scaleform::Render::Rect<float> &, unsigned short);
	CachedValue<Scaleform::Render::Rect<float> >(const Scaleform::Render::Rect<float> &);
	CachedValue<Scaleform::Render::Rect<float> >();
	void SetValue(const Scaleform::Render::Rect<float> &, unsigned short);
	Scaleform::Render::Rect<float> & GetValue();
	Scaleform::Render::Rect<float> & operator*();
	Scaleform::Render::Rect<float> * operator->();
	bool IsValid(unsigned short);
	void Invalidate();
	Scaleform::Render::Text::CachedValue<Scaleform::Render::Rect<float> > & operator=(Scaleform::Render::Text::CachedValue<Scaleform::Render::Rect<float> > &);
	Scaleform::Render::Text::CachedValue<Scaleform::Render::Rect<float> > & operator=(const Scaleform::Render::Text::CachedValue<Scaleform::Render::Rect<float> > &);
};
bool Scaleform::GFx::Text::EditorKit::IsReadOnly(); // 0x14042A970
bool Scaleform::GFx::Text::EditorKit::HasCompositionString(); // 0x14042A7F0
Scaleform::GFx::Text::CompositionString * Scaleform::GFx::Text::EditorKit::GetCompositionString(); // 0x140488880