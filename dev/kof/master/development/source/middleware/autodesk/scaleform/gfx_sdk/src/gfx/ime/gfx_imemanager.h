#pragma once

class Scaleform::GFx::IMECandidateListStyle :
	Scaleform::NewOverrideBase<327>
{
private:
	unsigned long TextColor; // 0x0
	unsigned long BackgroundColor; // 0x4
	unsigned long IndexBackgroundColor; // 0x8
	unsigned long SelectedTextColor; // 0xC
	unsigned long SelectedBackgroundColor; // 0x10
	unsigned long SelectedIndexBackgroundColor; // 0x14
	unsigned long ReadingWindowTextColor; // 0x18
	unsigned long ReadingWindowBackgroundColor; // 0x1C
	unsigned long FontSize; // 0x20
	unsigned long ReadingWindowFontSize; // 0x24
	enum <unnamed-enum-Flag_TextColor>
	{
		Flag_TextColor = 1,
		Flag_BackgroundColor = 2,
		Flag_IndexBackgroundColor = 4,
		Flag_SelectedTextColor = 8,
		Flag_SelectedBackgroundColor = 16,
		Flag_SelectedIndexBackgroundColor = 32,
		Flag_FontSize = 64,
		Flag_ReadingWindowTextColor = 128,
		Flag_ReadingWindowBackgroundColor = 256,
		Flag_ReadingWindowFontSize = 512,
	};
	unsigned short Flags; // 0x28
public:
	IMECandidateListStyle();
	void SetTextColor(unsigned long);
	unsigned long GetTextColor();
	void ClearTextColor();
	bool HasTextColor();
	void SetBackgroundColor(unsigned long);
	unsigned long GetBackgroundColor();
	void ClearBackgroundColor();
	bool HasBackgroundColor();
	void SetIndexBackgroundColor(unsigned long);
	unsigned long GetIndexBackgroundColor();
	void ClearIndexBackgroundColor();
	bool HasIndexBackgroundColor();
	void SetSelectedTextColor(unsigned long);
	unsigned long GetSelectedTextColor();
	void ClearSelectedTextColor();
	bool HasSelectedTextColor();
	void SetSelectedBackgroundColor(unsigned long);
	unsigned long GetSelectedBackgroundColor();
	void ClearSelectedBackgroundColor();
	bool HasSelectedBackgroundColor();
	void SetSelectedIndexBackgroundColor(unsigned long);
	unsigned long GetSelectedIndexBackgroundColor();
	void ClearSelectedIndexBackgroundColor();
	bool HasSelectedIndexBackgroundColor();
	void SetFontSize(unsigned long);
	unsigned long GetFontSize();
	void ClearFontSize();
	bool HasFontSize();
	void SetReadingWindowTextColor(unsigned long);
	unsigned long GetReadingWindowTextColor();
	void ClearReadingWindowTextColor();
	bool HasReadingWindowTextColor();
	void SetReadingWindowBackgroundColor(unsigned long);
	unsigned long GetReadingWindowBackgroundColor();
	void ClearReadingWindowBackgroundColor();
	bool HasReadingWindowBackgroundColor();
	void SetReadingWindowFontSize(unsigned long);
	unsigned long GetReadingWindowFontSize();
	void ClearReadingWindowFontSize();
	bool HasReadingWindowFontSize();
};
class Scaleform::GFx::IMEManagerBase :
	Scaleform::GFx::State
{
private:
	Scaleform::Ptr<Scaleform::GFx::ASIMEManager> pASIMEManager; // 0x18
	Scaleform::GFx::Movie * pMovie; // 0x20
	Scaleform::GFx::Loader * pLoader; // 0x28
	Scaleform::Ptr<Scaleform::GFx::TextField> pTextField; // 0x30
	long long CursorPosition; // 0x38
	Scaleform::String CandidateSwfPath; // 0x40
	bool IMEDisabled; // 0x48
	Scaleform::Hash<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *>,Scaleform::AllocatorGH<Scaleform::GFx::Movie *,2>,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::GFx::Movie *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeHashF> > > MovieASIMEManagerHash; // 0x50
	class MovieASIMEManagerHashDef;
protected:
	bool bCheckIMEExists; // 0x58
	enum TextHighlightStyle
	{
		THS_CompositionSegment = 0,
		THS_ClauseSegment = 1,
		THS_ConvertedSegment = 2,
		THS_PhraseLengthAdj = 3,
		THS_LowConfSegment = 4,
	};
public:
	Scaleform::Log * pLog; // 0x60
	IMEManagerBase(const Scaleform::GFx::IMEManagerBase &);
	IMEManagerBase();
	virtual ~IMEManagerBase();
	unsigned long Init(Scaleform::Log *, Scaleform::GFx::FileOpenerBase *, const char *, bool);
	void SetLoader(Scaleform::GFx::Loader *);
	Scaleform::GFx::Loader * GetLoader();
	void ASRootMovieCreated(Scaleform::Ptr<Scaleform::GFx::Sprite>);
	void IMECommand(Scaleform::GFx::Movie *, const char *, const char *);
	void ProcessIMEMessage(const Scaleform::GFx::FunctionHandler::Params &);
	unsigned long HandleIMEEvent(Scaleform::GFx::Movie *, const Scaleform::GFx::IMEEvent &);
	void SetIMEMoviePath(const char *);
	bool Invoke(const char *, Scaleform::GFx::Value *, const Scaleform::GFx::Value *, unsigned long);
	void ClearCandidateListPath();
	Scaleform::GFx::ASIMEManager * GetASIMEManager();
	void OnMouseDown(Scaleform::GFx::Movie *, long, Scaleform::GFx::InteractiveObject *);
	void OnMouseUp(Scaleform::GFx::Movie *, long, Scaleform::GFx::InteractiveObject *);
	Scaleform::GFx::InteractiveObject * HandleFocus(Scaleform::GFx::Movie *, Scaleform::GFx::InteractiveObject *, Scaleform::GFx::InteractiveObject *, Scaleform::GFx::InteractiveObject *);
	bool IsTextFieldFocused(Scaleform::GFx::InteractiveObject *);
	bool IsTextFieldFocused();
	void StartComposition();
	void FinalizeComposition(const wchar_t *, unsigned long long);
	void ClearComposition();
	void ReleaseComposition();
	void SetCompositionText(const wchar_t *, unsigned long long);
	void SetCompositionPosition();
	void SetCursorInComposition(unsigned long long);
	void SetWideCursor(bool);
	bool SetConversionMode(const unsigned long);
	const char * GetConversionMode();
	bool SetEnabled(bool);
	bool GetEnabled();
	const Scaleform::String GetInputLanguage();
	void BroadcastIMEConversion(const wchar_t *);
	void BroadcastSwitchLanguage(const char *);
	void BroadcastSetSupportedLanguages(const char *);
	void BroadcastSetSupportedIMEs(const char *);
	void BroadcastSetCurrentInputLanguage(const char *);
	void BroadcastSetIMEName(const char *);
	void BroadcastSetConversionStatus(const char *);
	void BroadcastRemoveStatusWindow();
	void BroadcastDisplayStatusWindow();
	void SendLangBarMessage(Scaleform::GFx::DisplayObject *, const Scaleform::GFx::ASString &, const Scaleform::GFx::ASString &);
	bool SetCompositionString(const char *);
	const wchar_t * GetCompositionString();
	void Reset();
	void OnShutdown();
	void GetMetrics(Scaleform::Render::Rect<float> *, Scaleform::Render::Rect<float> *, long);
	void HighlightText(unsigned long long, unsigned long long, Scaleform::GFx::IMEManagerBase::TextHighlightStyle, bool);
	void DoFinalize();
	void OnFinalize();
	bool SetCandidateListStyle(const Scaleform::GFx::IMECandidateListStyle &);
	bool GetCandidateListStyle(Scaleform::GFx::IMECandidateListStyle *);
	bool GetCandidateListErrorMsg(Scaleform::String *);
	void OnCandidateListStyleChanged(const Scaleform::GFx::IMECandidateListStyle &);
	void OnCandidateListLoaded(const char *);
	void OnCandidateListStyleRequest(Scaleform::GFx::IMECandidateListStyle *);
	bool IsCandidateListLoaded();
	void EnableIME(bool);
	void OnEnableIME(bool);
	void SetActiveMovie(Scaleform::GFx::Movie *);
	bool IsMovieActive(Scaleform::GFx::Movie *);
	Scaleform::GFx::Movie * GetActiveMovie();
	void ClearActiveMovie();
	Scaleform::String GetWindowsVersion();
	bool CheckCandListExists();
	Scaleform::GFx::IMEManagerBase & operator=(const Scaleform::GFx::IMEManagerBase &);
};
class Scaleform::Ptr<Scaleform::GFx::TextField>
{
protected:
	Scaleform::GFx::TextField * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::TextField>(const Scaleform::Ptr<Scaleform::GFx::TextField> &);
	Ptr<Scaleform::GFx::TextField>(Scaleform::GFx::TextField *);
	Ptr<Scaleform::GFx::TextField>(Scaleform::Ptr<Scaleform::GFx::TextField> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::TextField>(Scaleform::Pickable<Scaleform::GFx::TextField>);
	Ptr<Scaleform::GFx::TextField>(Scaleform::GFx::TextField &);
	Ptr<Scaleform::GFx::TextField>();
	~Ptr<Scaleform::GFx::TextField>();
	bool operator==(Scaleform::GFx::TextField *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::TextField> &);
	bool operator!=(Scaleform::GFx::TextField *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::TextField> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::TextField> &);
	Scaleform::Ptr<Scaleform::GFx::TextField> & operator=(Scaleform::Pickable<Scaleform::GFx::TextField>);
	const Scaleform::Ptr<Scaleform::GFx::TextField> & operator=(Scaleform::GFx::TextField &);
	const Scaleform::Ptr<Scaleform::GFx::TextField> & operator=(Scaleform::GFx::TextField *);
	const Scaleform::Ptr<Scaleform::GFx::TextField> & operator=(const Scaleform::Ptr<Scaleform::GFx::TextField> &);
	Scaleform::Ptr<Scaleform::GFx::TextField> & SetPtr(Scaleform::Pickable<Scaleform::GFx::TextField>);
	Scaleform::Ptr<Scaleform::GFx::TextField> & SetPtr(Scaleform::GFx::TextField &);
	Scaleform::Ptr<Scaleform::GFx::TextField> & SetPtr(Scaleform::GFx::TextField *);
	Scaleform::Ptr<Scaleform::GFx::TextField> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::TextField> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::TextField * & GetRawRef();
	Scaleform::GFx::TextField * GetPtr();
	Scaleform::GFx::TextField & operator*();
	Scaleform::GFx::TextField * operator->();
	Scaleform::GFx::TextField * operator class Scaleform::GFx::TextField *();
	Scaleform::Ptr<Scaleform::GFx::TextField> & Pick(Scaleform::GFx::TextField *);
	Scaleform::Ptr<Scaleform::GFx::TextField> & Pick(Scaleform::Pickable<Scaleform::GFx::TextField>);
	Scaleform::Ptr<Scaleform::GFx::TextField> & Pick(Scaleform::Ptr<Scaleform::GFx::TextField> &);
};
class Scaleform::Hash<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *>,Scaleform::AllocatorGH<Scaleform::GFx::Movie *,2>,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::GFx::Movie *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeHashF> > >
{
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
	class ValueType;
	class SelfType;
	Scaleform::HashSet<Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::GFx::Movie *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeHashF> > mHash; // 0x0
	Hash<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *>,Scaleform::AllocatorGH<Scaleform::GFx::Movie *,2>,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEMa(const Scaleform::Hash<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *>,Scaleform::AllocatorGH<Scaleform::GFx::Movie *,2>,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::GFx::Movie *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeHashF> > > &);
	Hash<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *>,Scaleform::AllocatorGH<Scaleform::GFx::Movie *,2>,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEMa(void *, long);
	Hash<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *>,Scaleform::AllocatorGH<Scaleform::GFx::Movie *,2>,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEMa(void *);
	Hash<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *>,Scaleform::AllocatorGH<Scaleform::GFx::Movie *,2>,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEMa(long);
	Hash<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *>,Scaleform::AllocatorGH<Scaleform::GFx::Movie *,2>,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEMa();
	~Hash<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *>,Scaleform::AllocatorGH<Scaleform::GFx::Movie *,2>,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEM();
	void operator=(const Scaleform::Hash<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *>,Scaleform::AllocatorGH<Scaleform::GFx::Movie *,2>,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::GFx::Movie *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeHashF> > > &);
	void Clear();
	bool IsEmpty();
	void Set(Scaleform::GFx::Movie * &, const Scaleform::Ptr<Scaleform::GFx::ASIMEManager> &);
	void Add(Scaleform::GFx::Movie * &, const Scaleform::Ptr<Scaleform::GFx::ASIMEManager> &);
	bool Remove(Scaleform::GFx::Movie * &);
	const Scaleform::Ptr<Scaleform::GFx::ASIMEManager> * Get(Scaleform::GFx::Movie * &);
	Scaleform::Ptr<Scaleform::GFx::ASIMEManager> * Get(Scaleform::GFx::Movie * &);
	bool Get(Scaleform::GFx::Movie * &, Scaleform::Ptr<Scaleform::GFx::ASIMEManager> *);
	unsigned long long GetSize();
	void Resize(unsigned long long);
	void SetCapacity(unsigned long long);
	struct ConstIterator;
	struct Iterator;
	Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::GFx::Movie *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeHashF> >::ConstIterator Begin();
	Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::GFx::Movie *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeHashF> >::Iterator Begin();
	Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::GFx::Movie *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeHashF> >::ConstIterator End();
	Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::GFx::Movie *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeHashF> >::Iterator End();
	Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::GFx::Movie *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeHashF> >::ConstIterator Find(Scaleform::GFx::Movie * &);
	Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::GFx::Movie *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >,Scaleform::HashNode<Scaleform::GFx::Movie *,Scaleform::Ptr<Scaleform::GFx::ASIMEManager>,Scaleform::FixedSizeHash<Scaleform::GFx::Movie *> >::NodeHashF> >::Iterator Find(Scaleform::GFx::Movie * &);
};