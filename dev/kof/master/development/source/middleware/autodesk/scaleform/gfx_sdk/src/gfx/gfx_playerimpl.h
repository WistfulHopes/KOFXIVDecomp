#pragma once

class Scaleform::GFx::PlaceObjectTag :
	Scaleform::GFx::GFxPlaceObjectBase
{
public:
	PlaceObjectTag();
private:
	PlaceObjectTag(const Scaleform::GFx::PlaceObjectTag &);
	Scaleform::GFx::PlaceObjectTag & operator=(const Scaleform::GFx::PlaceObjectTag &);
public:
	bool HasCxForm; // 0x8
	unsigned char pData[1]; // 0x9
	virtual ~PlaceObjectTag();
	static unsigned long long ComputeDataSize(Scaleform::GFx::Stream *);
	void CheckForCxForm(unsigned long long);
	virtual void Unpack(Scaleform::GFx::GFxPlaceObjectBase::UnpackedData &);
	virtual Scaleform::GFx::CharPosInfoFlags GetFlags();
	virtual void Execute(Scaleform::GFx::DisplayObjContainer *);
	virtual void AddToTimelineSnapshot(Scaleform::GFx::TimelineSnapshot *, unsigned long);
	virtual void Trace(const char *);
protected:
	unsigned short GetDepth();
};
class Scaleform::GFx::RemoveObjectTag :
	Scaleform::GFx::RemoveObject2Tag
{
public:
	unsigned short Id; // 0x10
	virtual void Read(Scaleform::GFx::LoadProcess *);
	virtual void Execute(Scaleform::GFx::DisplayObjContainer *);
	virtual void Trace(const char *);
	RemoveObjectTag(Scaleform::GFx::RemoveObjectTag &);
	RemoveObjectTag(const Scaleform::GFx::RemoveObjectTag &);
	RemoveObjectTag();
	virtual ~RemoveObjectTag();
	Scaleform::GFx::RemoveObjectTag & operator=(Scaleform::GFx::RemoveObjectTag &);
	Scaleform::GFx::RemoveObjectTag & operator=(const Scaleform::GFx::RemoveObjectTag &);
};
class Scaleform::GFx::MovieDefRootNode :
	Scaleform::ListNode<Scaleform::GFx::MovieDefRootNode>,
	Scaleform::NewOverrideBase<327>
{
public:
	MovieDefRootNode(const Scaleform::GFx::MovieDefRootNode &);
	MovieDefRootNode(Scaleform::GFx::MovieDefImpl *, bool);
	~MovieDefRootNode();
	unsigned long SpriteRefCount; // 0x18
	Scaleform::GFx::MovieDefImpl * pDefImpl; // 0x20
	unsigned long LoadingFrame; // 0x28
	unsigned long BytesLoaded; // 0x2C
	bool ImportFlag; // 0x30
	Scaleform::Ptr<Scaleform::GFx::FontManager> pFontManager; // 0x38
	Scaleform::GFx::MovieDefRootNode & operator=(const Scaleform::GFx::MovieDefRootNode &);
};
struct Scaleform::ListNode<Scaleform::GFx::MovieDefRootNode>
{
	Scaleform::GFx::MovieDefRootNode * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::GFx::MovieDefRootNode * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::GFx::MovieDefRootNode>();
	Scaleform::GFx::MovieDefRootNode * GetPrev();
	Scaleform::GFx::MovieDefRootNode * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::GFx::MovieDefRootNode *);
	void InsertNodeAfter(Scaleform::GFx::MovieDefRootNode *);
	void InsertNodeBefore(Scaleform::GFx::MovieDefRootNode *);
};
class Scaleform::Ptr<Scaleform::GFx::FontManager>
{
protected:
	Scaleform::GFx::FontManager * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::FontManager>(const Scaleform::Ptr<Scaleform::GFx::FontManager> &);
	Ptr<Scaleform::GFx::FontManager>(Scaleform::GFx::FontManager *);
	Ptr<Scaleform::GFx::FontManager>(Scaleform::Ptr<Scaleform::GFx::FontManager> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::FontManager>(Scaleform::Pickable<Scaleform::GFx::FontManager>);
	Ptr<Scaleform::GFx::FontManager>(Scaleform::GFx::FontManager &);
	Ptr<Scaleform::GFx::FontManager>();
	~Ptr<Scaleform::GFx::FontManager>();
	bool operator==(Scaleform::GFx::FontManager *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::FontManager> &);
	bool operator!=(Scaleform::GFx::FontManager *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::FontManager> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::FontManager> &);
	Scaleform::Ptr<Scaleform::GFx::FontManager> & operator=(Scaleform::Pickable<Scaleform::GFx::FontManager>);
	const Scaleform::Ptr<Scaleform::GFx::FontManager> & operator=(Scaleform::GFx::FontManager &);
	const Scaleform::Ptr<Scaleform::GFx::FontManager> & operator=(Scaleform::GFx::FontManager *);
	const Scaleform::Ptr<Scaleform::GFx::FontManager> & operator=(const Scaleform::Ptr<Scaleform::GFx::FontManager> &);
	Scaleform::Ptr<Scaleform::GFx::FontManager> & SetPtr(Scaleform::Pickable<Scaleform::GFx::FontManager>);
	Scaleform::Ptr<Scaleform::GFx::FontManager> & SetPtr(Scaleform::GFx::FontManager &);
	Scaleform::Ptr<Scaleform::GFx::FontManager> & SetPtr(Scaleform::GFx::FontManager *);
	Scaleform::Ptr<Scaleform::GFx::FontManager> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::FontManager> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::FontManager * & GetRawRef();
	Scaleform::GFx::FontManager * GetPtr();
	Scaleform::GFx::FontManager & operator*();
	Scaleform::GFx::FontManager * operator->();
	Scaleform::GFx::FontManager * operator class Scaleform::GFx::FontManager *();
	Scaleform::Ptr<Scaleform::GFx::FontManager> & Pick(Scaleform::GFx::FontManager *);
	Scaleform::Ptr<Scaleform::GFx::FontManager> & Pick(Scaleform::Pickable<Scaleform::GFx::FontManager>);
	Scaleform::Ptr<Scaleform::GFx::FontManager> & Pick(Scaleform::Ptr<Scaleform::GFx::FontManager> &);
};
class Scaleform::GFx::TabIndexSortFunctor
{
public:
	bool operator()(const Scaleform::GFx::InteractiveObject *, const Scaleform::GFx::InteractiveObject *);
};
class Scaleform::GFx::AutoTabSortFunctor
{
	enum <unnamed-enum-Epsilon>
	{
		Epsilon = 20,
	};
public:
	bool operator()(const Scaleform::GFx::InteractiveObject *, const Scaleform::GFx::InteractiveObject *);
};
bool Scaleform::GFx::AutoTabSortFunctor::operator()(const Scaleform::GFx::InteractiveObject * a, const Scaleform::GFx::InteractiveObject * b); // 0x1402DE400
class Scaleform::GFx::ASIntervalTimerIntf :
	Scaleform::RefCountBase<Scaleform::GFx::ASIntervalTimerIntf,323>
{
public:
	virtual ~ASIntervalTimerIntf();
	void Start(Scaleform::GFx::MovieImpl *);
	bool Invoke(Scaleform::GFx::MovieImpl *, float);
	bool IsActive();
	void Clear();
	bool ClearFor(Scaleform::GFx::MovieImpl *, Scaleform::GFx::MovieDefImpl *);
	unsigned long long GetNextInvokeTime();
	void SetId(long);
	long GetId();
	ASIntervalTimerIntf(const Scaleform::GFx::ASIntervalTimerIntf &);
	ASIntervalTimerIntf();
	Scaleform::GFx::ASIntervalTimerIntf & operator=(const Scaleform::GFx::ASIntervalTimerIntf &);
};
class Scaleform::RefCountBase<Scaleform::GFx::ASIntervalTimerIntf,323> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,323>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 323,
	};
public:
	RefCountBase<Scaleform::GFx::ASIntervalTimerIntf,323>(Scaleform::RefCountBase<Scaleform::GFx::ASIntervalTimerIntf,323> &);
	RefCountBase<Scaleform::GFx::ASIntervalTimerIntf,323>(const Scaleform::RefCountBase<Scaleform::GFx::ASIntervalTimerIntf,323> &);
	RefCountBase<Scaleform::GFx::ASIntervalTimerIntf,323>();
	virtual ~RefCountBase<Scaleform::GFx::ASIntervalTimerIntf,323>();
	Scaleform::RefCountBase<Scaleform::GFx::ASIntervalTimerIntf,323> & operator=(Scaleform::RefCountBase<Scaleform::GFx::ASIntervalTimerIntf,323> &);
	Scaleform::RefCountBase<Scaleform::GFx::ASIntervalTimerIntf,323> & operator=(const Scaleform::RefCountBase<Scaleform::GFx::ASIntervalTimerIntf,323> &);
};
struct Scaleform::GFx::FocusGroupDescr
{
	Scaleform::Ptr<Scaleform::Render::TreeShape> FocusRectNode; // 0x0
	Scaleform::ArrayDH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327,Scaleform::ArrayDefaultPolicy> TabableArray; // 0x8
	Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject> LastFocused; // 0x28
	Scaleform::Ptr<Scaleform::GFx::CharacterHandle> ModalClip; // 0x30
	unsigned long LastFocusKeyCode; // 0x38
	Scaleform::Render::Rect<float> LastFocusedRect; // 0x40
	bool FocusRectShown; // 0x50
	enum <unnamed-enum-TabableArray_Initialized>
	{
		TabableArray_Initialized = 1,
		TabableArray_WithFocusEnabled = 2,
	};
	unsigned char TabableArrayStatus; // 0x51
	FocusGroupDescr(Scaleform::GFx::FocusGroupDescr &);
	FocusGroupDescr(const Scaleform::GFx::FocusGroupDescr &);
	FocusGroupDescr(Scaleform::MemoryHeap *);
	bool IsFocused(const Scaleform::GFx::InteractiveObject *);
	void ResetFocus();
	void ResetFocusDirection();
	void ResetTabableArray();
	Scaleform::GFx::Sprite * GetModalClip(Scaleform::GFx::MovieImpl *);
private:
	Scaleform::GFx::FocusGroupDescr * GetThis();
public:
	~FocusGroupDescr();
	Scaleform::GFx::FocusGroupDescr & operator=(Scaleform::GFx::FocusGroupDescr &);
	Scaleform::GFx::FocusGroupDescr & operator=(const Scaleform::GFx::FocusGroupDescr &);
	void __dflt_ctor_closure();
};
class Scaleform::Ptr<Scaleform::Render::TreeShape>
{
protected:
	Scaleform::Render::TreeShape * pObject; // 0x0
public:
	Ptr<Scaleform::Render::TreeShape>(const Scaleform::Ptr<Scaleform::Render::TreeShape> &);
	Ptr<Scaleform::Render::TreeShape>(Scaleform::Render::TreeShape *);
	Ptr<Scaleform::Render::TreeShape>(Scaleform::Ptr<Scaleform::Render::TreeShape> &, Scaleform::PickType);
	Ptr<Scaleform::Render::TreeShape>(Scaleform::Pickable<Scaleform::Render::TreeShape>);
	Ptr<Scaleform::Render::TreeShape>(Scaleform::Render::TreeShape &);
	Ptr<Scaleform::Render::TreeShape>();
	~Ptr<Scaleform::Render::TreeShape>();
	bool operator==(Scaleform::Render::TreeShape *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::TreeShape> &);
	bool operator!=(Scaleform::Render::TreeShape *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::TreeShape> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::TreeShape> &);
	Scaleform::Ptr<Scaleform::Render::TreeShape> & operator=(Scaleform::Pickable<Scaleform::Render::TreeShape>);
	const Scaleform::Ptr<Scaleform::Render::TreeShape> & operator=(Scaleform::Render::TreeShape &);
	const Scaleform::Ptr<Scaleform::Render::TreeShape> & operator=(Scaleform::Render::TreeShape *);
	const Scaleform::Ptr<Scaleform::Render::TreeShape> & operator=(const Scaleform::Ptr<Scaleform::Render::TreeShape> &);
	Scaleform::Ptr<Scaleform::Render::TreeShape> & SetPtr(Scaleform::Pickable<Scaleform::Render::TreeShape>);
	Scaleform::Ptr<Scaleform::Render::TreeShape> & SetPtr(Scaleform::Render::TreeShape &);
	Scaleform::Ptr<Scaleform::Render::TreeShape> & SetPtr(Scaleform::Render::TreeShape *);
	Scaleform::Ptr<Scaleform::Render::TreeShape> & SetPtr(const Scaleform::Ptr<Scaleform::Render::TreeShape> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::TreeShape * & GetRawRef();
	Scaleform::Render::TreeShape * GetPtr();
	Scaleform::Render::TreeShape & operator*();
	Scaleform::Render::TreeShape * operator->();
	Scaleform::Render::TreeShape * operator class Scaleform::Render::TreeShape *();
	Scaleform::Ptr<Scaleform::Render::TreeShape> & Pick(Scaleform::Render::TreeShape *);
	Scaleform::Ptr<Scaleform::Render::TreeShape> & Pick(Scaleform::Pickable<Scaleform::Render::TreeShape>);
	Scaleform::Ptr<Scaleform::Render::TreeShape> & Pick(Scaleform::Ptr<Scaleform::Render::TreeShape> &);
};
bool Scaleform::GFx::FocusGroupDescr::IsFocused(const Scaleform::GFx::InteractiveObject * ch); // 0x14035F630
struct Scaleform::GFx::ProcessFocusKeyInfo :
	Scaleform::NewOverrideBase<327>
{
	Scaleform::GFx::FocusGroupDescr * pFocusGroup; // 0x0
	Scaleform::Ptr<Scaleform::GFx::InteractiveObject> CurFocused; // 0x8
	long CurFocusIdx; // 0x10
	Scaleform::Render::Rect<float> Prev_aRect; // 0x20
	unsigned long PrevKeyCode; // 0x30
	unsigned long KeyCode; // 0x34
	unsigned char KeyboardIndex; // 0x38
	unsigned char KeysState; // 0x39
	bool ManualFocus; // 0x3A
	bool InclFocusEnabled; // 0x3B
	bool Initialized; // 0x3C
	ProcessFocusKeyInfo(Scaleform::GFx::ProcessFocusKeyInfo &);
	ProcessFocusKeyInfo(const Scaleform::GFx::ProcessFocusKeyInfo &);
	ProcessFocusKeyInfo();
	~ProcessFocusKeyInfo();
	Scaleform::GFx::ProcessFocusKeyInfo & operator=(Scaleform::GFx::ProcessFocusKeyInfo &);
	Scaleform::GFx::ProcessFocusKeyInfo & operator=(const Scaleform::GFx::ProcessFocusKeyInfo &);
};
class Scaleform::GFx::MovieImpl :
	Scaleform::GFx::Movie
{
	class Matrix;
	class ValueObjectInterface;
	struct WideStringStorage;
	struct LevelInfo;
public:
	Scaleform::Log * GetCachedLog();
	Scaleform::GFx::KeyboardState * GetKeyboardState(unsigned long);
	const Scaleform::GFx::KeyboardState * GetKeyboardState(unsigned long);
	void SetKeyboardListener(Scaleform::GFx::KeyboardState::IListener *);
	struct ReturnValueHolder;
	class DragState;
	struct StickyVarNode;
	enum FlagsType
	{
		Flag_ViewportSet = 1,
		Flag_CachedLogFlag = 2,
		Flag_VerboseAction = 4,
		Flag_LogRootFilenames = 8,
		Flag_LogChildFilenames = 16,
		Flag_LogLongFilenames = 32,
		Flag_SuppressActionErrors = 64,
		Flag_NeedMouseUpdate = 128,
		Flag_LevelClipsChanged = 256,
		Flag_AdvanceCalled = 512,
		Flag_HasChanges = 1024,
		Flag_NoInvisibleAdvanceFlag = 2048,
		Flag_SetCursorTypeFuncOverloaded = 4096,
		Flag_ContinueAnimation = 8192,
		Flag_StageAutoOrients = 16384,
		Flag_OnEventLoadProgressCalled = 32768,
		Flag_DisableFocusAutoRelByClick = 65536,
		Flag_BackgroundSetByTag = 131072,
		Flag_MovieIsFocused = 262144,
		Flag_OptimizedAdvanceListInvalid = 524288,
		Flag_Paused = 1048576,
		Flag_ExitRequested = 2097152,
		Shift_DisableFocusAutoRelease = 22,
		Shift_AlwaysEnableFocusArrowKeys = 24,
		Shift_AlwaysEnableKeyboardPress = 26,
		Shift_DisableFocusRolloverEvent = 28,
		Shift_DisableFocusKeys = 30,
	};
	enum Flags2Type
	{
		Flag2_AcceptAnimMovesWith3D = 1,
		Flag2_RegisteredFontsChanged = 2,
		Flag2_Restarting = 4,
		Flag2_OptAdvListMarker = 8,
		Flag2_BidirectionalTextEnabled = 16,
	};
	struct IndirectTransPair;
	enum MultitouchInputMode
	{
		MTI_None = 0,
		MTI_TouchPoint = 1,
		MTI_Gesture = 2,
		MTI_Mixed = 3,
	};
	enum GestureMask
	{
		MTG_None = 0,
		MTG_Pan = 1,
		MTG_Zoom = 2,
		MTG_Rotate = 4,
		MTG_Swipe = 8,
	};
	MovieImpl(Scaleform::MemoryHeap *);
	virtual ~MovieImpl();
	void SetASMovieRoot(Scaleform::GFx::ASMovieRootBase *);
	bool Init(Scaleform::GFx::MovieDefImpl *);
	Scaleform::GFx::ASStringManager * GetStringManager();
	Scaleform::GFx::InteractiveObject * GetMainContainer();
	void SetMainContainer(Scaleform::GFx::InteractiveObject *);
	Scaleform::GFx::DisplayObjContainer * GetRootMovie(Scaleform::GFx::DisplayObject *);
	void RegisterAuxASClasses();
	bool SetLevelMovie(long, Scaleform::GFx::DisplayObjContainer *);
	bool ReleaseLevelMovie(long);
	void ClearDisplayList();
	void ClearPlayList();
	void SortPlayList(Scaleform::GFx::InteractiveObject *);
	Scaleform::MemoryHeap * GetMovieHeap();
	Scaleform::GFx::InteractiveObject * FindTarget(const Scaleform::GFx::ASString &);
	void SetDragState(const Scaleform::GFx::MovieImpl::DragState &);
	void GetDragState(unsigned long, Scaleform::GFx::MovieImpl::DragState *);
	void StopAllDrags();
	void StopDrag(unsigned long);
	bool IsDragging(unsigned long);
	Scaleform::GFx::InteractiveObject * GetDraggingCharacter(unsigned long);
	const Scaleform::GFx::InteractiveObject * GetDraggingCharacter(unsigned long);
	void StopDragCharacter(const Scaleform::GFx::InteractiveObject *);
	bool IsDraggingMouseIndex(unsigned long);
	void SetDragStateTopmostEntity(unsigned long, Scaleform::GFx::InteractiveObject *);
	void UpdateAllRenderNodes();
	Scaleform::GFx::MouseState * GetMouseState(unsigned long);
	const Scaleform::GFx::MouseState * GetMouseState(unsigned long);
	virtual void GetMouseState(unsigned long, float *, float *, unsigned long *);
	virtual void SetMouseCursorCount(unsigned long);
	virtual unsigned long GetMouseCursorCount();
	virtual void SetControllerCount(unsigned long);
	virtual unsigned long GetControllerCount();
	bool IsMouseSupportEnabled();
	float GetPixelScale();
	double GetTimeElapsed();
	double GetTimeElapsedMs();
	unsigned long long GetTimeElapsedMks();
	float GetFrameTime();
	unsigned long long GetStartTickMs();
	virtual unsigned long long GetASTimerMs();
	virtual bool IsValid();
	Scaleform::GFx::ASString CreateNewInstanceName();
	Scaleform::GFx::LoadQueueEntry * pLoadQueueHead; // 0x20
	unsigned long LastLoadQueueEntryCnt; // 0x28
	void AddLoadQueueEntry(Scaleform::GFx::LoadQueueEntry *);
	void AddLoadQueueEntryMT(Scaleform::GFx::LoadQueueEntryMT *);
	void ProcessLoadQueue();
	enum FileFormatType
	{
		File_Unopened = 0,
		File_Unknown = 1,
		File_SWF = 2,
		File_GFX = 3,
		File_JPEG = 10,
		File_PNG = 11,
		File_GIF = 12,
		File_TGA = 13,
		File_DDS = 14,
		File_HDR = 15,
		File_BMP = 16,
		File_DIB = 17,
		File_PFM = 18,
		File_TIFF = 19,
		File_WAVE = 20,
		File_PVR = 21,
		File_ETC = 22,
		File_SIF = 23,
		File_GXT = 24,
		File_GTX = 25,
		File_GNF = 26,
		File_KTX = 27,
		File_NextAvail = 28,
		File_DDSBC = 65533,
		File_MultiFormat = 65534,
		File_Original = 65535,
	};
	Scaleform::GFx::MovieDefImpl * CreateImageMovieDef(Scaleform::GFx::ImageResource *, bool, const char *, Scaleform::GFx::LoadStates *);
	Scaleform::Ptr<Scaleform::GFx::ImageResource> GetImageResourceByLinkageId(Scaleform::GFx::MovieDefImpl *, const char *);
	bool GetMainMoviePath(Scaleform::String *);
	virtual void SetViewport(const Scaleform::GFx::Viewport &);
	virtual void GetViewport(Scaleform::GFx::Viewport *);
	virtual void SetViewScaleMode(Scaleform::GFx::Movie::ScaleModeType);
	virtual Scaleform::GFx::Movie::ScaleModeType GetViewScaleMode();
	virtual void SetViewAlignment(Scaleform::GFx::Movie::AlignType);
	virtual Scaleform::GFx::Movie::AlignType GetViewAlignment();
	virtual Scaleform::Render::Rect<float> GetVisibleFrameRect();
	const Scaleform::Render::Rect<float> & GetVisibleFrameRectInTwips();
	virtual Scaleform::Render::Rect<float> GetSafeRect();
	virtual void SetSafeRect(const Scaleform::Render::Rect<float> &);
	virtual void SetEdgeAAMode(Scaleform::Render::EdgeAAMode);
	virtual Scaleform::Render::EdgeAAMode GetEdgeAAMode();
	void UpdateViewport();
	void SetVerboseAction(bool);
	void SetActionErrorsSuppress(bool);
	virtual void SetBackgroundColor(const Scaleform::Render::Color);
	virtual void SetBackgroundAlpha(float);
	virtual float GetBackgroundAlpha();
	bool IsBackgroundSetByTag();
	void SetBackgroundColorByTag(const Scaleform::Render::Color);
	virtual float Advance(float, unsigned long, bool);
	virtual void Capture(bool);
	virtual const Scaleform::Render::ContextImpl::DisplayHandle<Scaleform::Render::TreeRoot> & GetDisplayHandle();
	virtual void SetCaptureThread(unsigned long);
	virtual void ShutdownRendering(bool);
	virtual bool IsShutdownRenderingComplete();
	void AdvanceFrame(bool, float);
	void InvalidateOptAdvanceList();
	bool IsOptAdvanceListInvalid();
	bool GetOptAdvListMarker();
	void CheckOptPlaylistConsistency(Scaleform::GFx::InteractiveObject *, Scaleform::GFx::InteractiveObject *, bool);
	void CheckPlaylistConsistency(bool);
	void PrintPlaylist();
	void ProcessUnloadQueue();
	void ReleaseUnloadList();
	virtual unsigned long HandleEvent(const Scaleform::GFx::Event &);
	virtual void NotifyMouseState(float, float, unsigned long, unsigned long);
	virtual bool HitTest(float, float, Scaleform::GFx::Movie::HitTestType, unsigned long);
	virtual void * GetUserData();
	virtual void SetUserData(void *);
	long AddIntervalTimer(Scaleform::GFx::ASIntervalTimerIntf *);
	void ClearIntervalTimer(long);
	void ShutdownTimers();
	void ShutdownTimersForMovieDef(Scaleform::GFx::MovieDefImpl *);
	bool IsShutdowning();
	virtual Scaleform::GFx::MovieDef * GetMovieDef();
	Scaleform::GFx::LoaderImpl * GetLoaderImpl();
	Scaleform::GFx::MovieDefImpl * GetMovieDefImpl();
	void SetMovieDefImpl(Scaleform::GFx::MovieDefImpl *);
	virtual unsigned long GetCurrentFrame();
	virtual bool HasLooped();
	virtual void Restart(bool);
	virtual void GotoFrame(unsigned long);
	virtual bool GotoLabeledFrame(const char *, long);
	virtual void SetPause(bool);
	virtual bool IsPaused();
	virtual void SetPlayState(Scaleform::GFx::PlayState);
	virtual Scaleform::GFx::PlayState GetPlayState();
	virtual void SetVisible(bool);
	virtual bool GetVisible();
	void AddStickyVariableNode(const Scaleform::GFx::ASString &, Scaleform::GFx::MovieImpl::StickyVarNode *);
	void ClearStickyVariables();
	Scaleform::GFx::InteractiveObject * GetTopMostEntity(const Scaleform::Render::Point<float> &, unsigned long, bool, const Scaleform::GFx::InteractiveObject *);
	Scaleform::Ptr<Scaleform::AmpStats> AdvanceStats; // 0x30
	virtual void GetStats(Scaleform::StatBag *, bool);
	virtual Scaleform::MemoryHeap * GetHeap();
	virtual void ForceCollectGarbage(unsigned long);
	virtual void SuspendGC(bool);
	virtual void ScheduleGC(unsigned long);
	virtual void PrintObjectsReport(unsigned long, Scaleform::Log *, const char *, Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> *, Scaleform::MemoryHeap *);
	virtual Scaleform::GFx::StateBag * GetStateBagImpl();
	void OnMovieFocus(bool);
	virtual bool IsMovieFocused();
	virtual bool GetDirtyFlag(bool);
	virtual void ForceUpdateImages();
	virtual void MakeAreaVisible(const Scaleform::Render::Rect<float> &, const Scaleform::Render::Rect<float> &, unsigned long);
	virtual void RestoreViewport();
	void ResetViewportMatrix();
	void SetNoInvisibleAdvanceFlag(bool);
	void ClearNoInvisibleAdvanceFlag();
	bool IsNoInvisibleAdvanceFlagSet();
	void SetContinueAnimationFlag(bool);
	void ClearContinueAnimationFlag();
	bool IsContinueAnimationFlagSet();
	void SetBidirectionalTextEnabledFlag(bool);
	void ClearBidirectionalTextEnabledFlag();
	bool IsBidirectionalTextEnabled();
	bool IsVerboseAction();
	bool IsSuppressActionErrors();
	bool IsLogRootFilenames();
	bool IsLogChildFilenames();
	bool IsLogLongFilenames();
	bool IsAlwaysEnableKeyboardPress();
	bool IsAlwaysEnableKeyboardPressSet();
	void SetAlwaysEnableKeyboardPress(bool);
	bool IsDisableFocusRolloverEvent();
	bool IsDisableFocusRolloverEventSet();
	void SetDisableFocusRolloverEvent(bool);
	bool IsDisableFocusAutoRelease();
	bool IsDisableFocusAutoReleaseSet();
	void SetDisableFocusAutoRelease(bool);
	bool IsDisableFocusAutoReleaseByMouseClick();
	void SetDisableFocusAutoReleaseByMouseClick(bool);
	bool IsAlwaysEnableFocusArrowKeys();
	bool IsAlwaysEnableFocusArrowKeysSet();
	void SetAlwaysEnableFocusArrowKeys(bool);
	bool IsDisableFocusKeys();
	bool IsDisableFocusKeysSet();
	void SetDisableFocusKeys(bool);
	void InitFocusKeyInfo(Scaleform::GFx::ProcessFocusKeyInfo *, const Scaleform::GFx::InputEventsQueueEntry::KeyEntry &, bool, Scaleform::GFx::FocusGroupDescr *);
	void ProcessFocusKey(Scaleform::GFx::Event::EventType, const Scaleform::GFx::InputEventsQueueEntry::KeyEntry &, Scaleform::GFx::ProcessFocusKeyInfo *);
	void FinalizeProcessFocusKey(Scaleform::GFx::ProcessFocusKeyInfo *);
	void ProcessInput();
	void ProcessKeyboard(const Scaleform::GFx::InputEventsQueueEntry *, Scaleform::GFx::ProcessFocusKeyInfo *);
	void ProcessMouse(const Scaleform::GFx::InputEventsQueueEntry *, unsigned long *, bool);
	void ProcessGamePadAnalog(const Scaleform::GFx::InputEventsQueueEntry *);
	void ProcessStatus(const Scaleform::GFx::InputEventsQueueEntry *);
	void ProcessAccelerometer(const Scaleform::GFx::InputEventsQueueEntry *);
	void ProcessGeolocation(const Scaleform::GFx::InputEventsQueueEntry *);
protected:
	void FillTabableArray(const Scaleform::GFx::ProcessFocusKeyInfo *);
	const Scaleform::GFx::FocusGroupDescr & GetFocusGroup(unsigned long);
	Scaleform::GFx::FocusGroupDescr & GetFocusGroup(unsigned long);
	void ResetMouseState();
	void ResetKeyboardState();
	void UpdateFocusRectRenderNodes();
public:
	unsigned long GetFocusGroupIndex(unsigned long);
	unsigned long GetControllerMaskByFocusGroup(unsigned long);
	void HideFocusRect(unsigned long);
	Scaleform::Ptr<Scaleform::GFx::InteractiveObject> GetFocusedCharacter(unsigned long);
	bool IsFocused(const Scaleform::GFx::InteractiveObject *);
	bool IsFocused(const Scaleform::GFx::InteractiveObject *, unsigned long);
	bool IsKeyboardFocused(const Scaleform::GFx::InteractiveObject *, unsigned long);
	bool SetFocusTo(Scaleform::GFx::InteractiveObject *, unsigned long, Scaleform::GFx::FocusMovedType);
	virtual void ResetInputFocus(unsigned long);
	void ResetFocus(unsigned long);
	void ResetFocusForChar(Scaleform::GFx::InteractiveObject *);
	bool QueueSetFocusTo(Scaleform::GFx::InteractiveObject *, Scaleform::GFx::InteractiveObject *, unsigned long, Scaleform::GFx::FocusMovedType, Scaleform::GFx::ProcessFocusKeyInfo *);
	void TransferFocus(Scaleform::GFx::InteractiveObject *, unsigned long, Scaleform::GFx::FocusMovedType);
	void SetKeyboardFocusTo(Scaleform::GFx::InteractiveObject *, unsigned long, Scaleform::GFx::FocusMovedType);
	bool IsFocusRectShown(unsigned long);
	void ResetTabableArrays();
	void ResetFocusStates();
	void ActivateFocusCapture(unsigned long);
	void SetModalClip(Scaleform::GFx::Sprite *, unsigned long);
	Scaleform::GFx::Sprite * GetModalClip(unsigned long);
	virtual bool SetControllerFocusGroup(unsigned long, unsigned long);
	virtual unsigned long GetControllerFocusGroup(unsigned long);
	unsigned long GetFocusGroupCount();
	void AddTopmostLevelCharacter(Scaleform::GFx::InteractiveObject *);
	void RemoveTopmostLevelCharacter(Scaleform::GFx::DisplayObjectBase *);
	void SetIMECandidateListStyle(const Scaleform::GFx::IMECandidateListStyle &);
	void GetIMECandidateListStyle(Scaleform::GFx::IMECandidateListStyle *);
	Scaleform::Render::Text::Allocator * GetTextAllocator();
	virtual Scaleform::Render::Rect<float> TranslateToScreen(const Scaleform::Render::Rect<float> &, Scaleform::Render::Matrix2x4<float> *);
	virtual Scaleform::Render::Point<float> TranslateToScreen(const Scaleform::Render::Point<float> &, Scaleform::Render::Matrix2x4<float> *);
	virtual bool TranslateLocalToScreen(const char *, const Scaleform::Render::Point<float> &, Scaleform::Render::Point<float> *, Scaleform::Render::Matrix2x4<float> *);
	void ChangeMouseCursorType(unsigned long, unsigned long);
	Scaleform::GFx::FontManager * FindFontManager(Scaleform::GFx::MovieDefImpl *);
	static bool ReadTextData(Scaleform::String *, Scaleform::File *, long *, bool);
	static bool ReadBinaryData(Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *, Scaleform::File *, long *);
	virtual bool IsExitRequested();
	void RequestExit();
	bool AcceptAnimMovesWith3D();
	void SetAcceptAnimMovesWith3D(bool);
	bool FindExportedResource(Scaleform::GFx::MovieDefImpl *, Scaleform::GFx::ResourceBindData *, const Scaleform::String &);
	Scaleform::Render::ContextImpl::Context & GetRenderContext();
	Scaleform::Render::DrawableImageContext * GetDrawableImageContext();
	void SetThreadCommandQueue(Scaleform::Render::ThreadCommandQueue *);
	Scaleform::Render::TreeRoot * GetRenderRoot();
	Scaleform::GFx::DrawingContext * CreateDrawingContext();
	void AddMovieDefToKillList(Scaleform::GFx::MovieDefImpl *);
	void ProcessMovieDefToKillList();
	bool Call(const char *, const char *, const char *, unsigned long, const Scaleform::GFx::Value *, Scaleform::GFx::Value *);
	const char * GetExtensionDirectory(const char *);
	void FinalizeExtensionContext(const char *, const char *);
	void InitializeExtensionContext(const char *, const char *);
	Scaleform::GFx::Value * GetActionScriptData(const char *, const char *);
	void SetActionScriptData(const char *, const char *, Scaleform::GFx::Value *);
	bool DoesStageAutoOrients();
	virtual void SetStageAutoOrients(bool);
	Scaleform::GFx::OrientationEvent::OrientationType GetDeviceOrientation();
	void SetDeviceOrientation(Scaleform::GFx::OrientationEvent::OrientationType);
	Scaleform::GFx::MovieImpl::ReturnValueHolder * GetRetValHolder();
private:
	void CheckMouseCursorType(unsigned long, Scaleform::GFx::InteractiveObject *);
	void UpdateAllDrawingContexts();
	void ClearDrawingContextList();
	void UpdateViewAndPerspective();
public:
	Scaleform::GFx::MovieImpl::MultitouchInputMode GetMultitouchInputMode();
	void SetMultitouchInputMode(Scaleform::GFx::MovieImpl::MultitouchInputMode);
	unsigned long GetMaxTouchPoints();
	unsigned long GetSupportedGesturesMask();
	bool RegisterAccelerometer(long);
	bool UnregisterAccelerometer(long);
	bool IsAccelerometerMuted();
	bool IsAccelerometerSupported();
	void SetAccelerometerInterval(long, long);
	bool RegisterGeolocation(long);
	bool UnregisterGeolocation(long);
	bool IsGeolocationMuted();
	bool IsGeolocationSupported();
	void SetGeolocationInterval(long, long);
	static void MakeViewAndPersp3D(Scaleform::Render::Matrix3x4<float> *, Scaleform::Render::Matrix4x4<float> *, const Scaleform::Render::Rect<float> &, const Scaleform::Render::Point<float> &, float, float, bool);
	virtual void GetViewMatrix3D(Scaleform::Render::Matrix3x4<float> *);
	virtual void SetViewMatrix3D(const Scaleform::Render::Matrix3x4<float> &);
	virtual void GetProjectionMatrix3D(Scaleform::Render::Matrix4x4<float> *);
	virtual void SetProjectionMatrix3D(const Scaleform::Render::Matrix4x4<float> &);
	void SetNormalizedScreenCoords(const Scaleform::Render::Point<float> &);
	bool Is3D();
	void AddIndirectTransformPair(Scaleform::GFx::DisplayObjContainer *, Scaleform::Render::TreeNode *, Scaleform::GFx::DisplayObjectBase *);
	Scaleform::GFx::MovieImpl::IndirectTransPair RemoveIndirectTransformPair(Scaleform::GFx::DisplayObjectBase *);
	void ClearIndirectTransformPairs();
	void UpdateTransformParent(Scaleform::GFx::DisplayObjectBase *, Scaleform::GFx::DisplayObjectBase *);
	bool AreRegisteredFontsChanged();
	void SetRegisteredFontsChanged(bool);
	bool RegisterFont(Scaleform::GFx::MovieDef *, Scaleform::GFx::FontResource *);
	Scaleform::GFx::FontResource * FindRegisteredFont(const char *, unsigned long, Scaleform::GFx::MovieDef * *);
	void UnregisterFonts(Scaleform::GFx::MovieDefImpl *);
	void LoadRegisteredFonts(Scaleform::HashSet<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> > > > &);
	Scaleform::GFx::Value::ObjectInterface * pObjectInterface; // 0x38
	Scaleform::MemoryHeap * pHeap; // 0x40
	Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> pMainMovieDef; // 0x48
	Scaleform::GFx::InteractiveObject * pMainMovie; // 0x50
	Scaleform::ArrayLH<Scaleform::GFx::MovieImpl::LevelInfo,327,Scaleform::ArrayDefaultPolicy> MovieLevels; // 0x58
	Scaleform::List<Scaleform::GFx::MovieDefRootNode,Scaleform::GFx::MovieDefRootNode,Scaleform::ListNode<Scaleform::GFx::MovieDefRootNode> > RootMovieDefNodes; // 0x70
	Scaleform::Ptr<Scaleform::GFx::StateBagImpl> pStateBag; // 0x80
	Scaleform::Ptr<Scaleform::Render::TreeRoot> pRenderRoot; // 0x88
	Scaleform::Render::ContextImpl::DisplayHandle<Scaleform::Render::TreeRoot> hDisplayRoot; // 0x90
	Scaleform::Ptr<Scaleform::Render::TreeContainer> pTopMostRoot; // 0x98
	Scaleform::GFx::Viewport mViewport; // 0xA0
	float PixelScale; // 0xD4
	float ViewScaleX; // 0xD8
	float ViewScaleY; // 0xDC
	float ViewOffsetX; // 0xE0
	float ViewOffsetY; // 0xE4
	Scaleform::GFx::Movie::ScaleModeType ViewScaleMode; // 0xE8
	Scaleform::GFx::Movie::AlignType ViewAlignment; // 0xEC
	Scaleform::Render::Rect<float> VisibleFrameRect; // 0xF0
	Scaleform::Render::Rect<float> SafeRect; // 0x100
	Scaleform::Render::Matrix2x4<float> ViewportMatrix; // 0x110
	Scaleform::Render::ScreenToWorld ScreenToWorld; // 0x130
	Scaleform::Ptr<Scaleform::Log> pCachedLog; // 0x220
	Scaleform::Ptr<Scaleform::GFx::UserEventHandler> pUserEventHandler; // 0x228
	Scaleform::Ptr<Scaleform::GFx::FSCommandHandler> pFSCommandHandler; // 0x230
	Scaleform::Ptr<Scaleform::GFx::ExternalInterface> pExtIntfHandler; // 0x238
	Scaleform::Ptr<Scaleform::GFx::ExtensionContextInterface> pExtContextHandler; // 0x240
	Scaleform::Ptr<Scaleform::GFx::FontManagerStates> pFontManagerStates; // 0x248
	Scaleform::GFx::ExternalLibPtr * pXMLObjectManager; // 0x250
	unsigned long long TimeElapsed; // 0x258
	float TimeRemainder; // 0x260
	float FrameTime; // 0x264
	unsigned long ForceFrameCatchUp; // 0x268
	Scaleform::GFx::InputEventsQueue InputEventsQueue; // 0x270
	Scaleform::Render::Color BackgroundColor; // 0x21F8
	Scaleform::GFx::MouseState mMouseState[6]; // 0x2200
	unsigned long MouseCursorCount; // 0x23E0
	unsigned long ControllerCount; // 0x23E4
	void * UserData; // 0x23E8
	Scaleform::GFx::KeyboardState KeyboardStates[6]; // 0x23F0
protected:
	Scaleform::GFx::MovieImpl::ReturnValueHolder * pRetValHolder; // 0x4B20
public:
	unsigned long InstanceNameCount; // 0x4B28
	Scaleform::GFx::MovieImpl::DragState CurrentDragStates[6]; // 0x4B30
	Scaleform::GFx::ASStringHash<Scaleform::GFx::MovieImpl::StickyVarNode *> StickyVariables; // 0x4C50
	Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327,Scaleform::ArrayDefaultPolicy> TopmostLevelCharacters; // 0x4C58
	unsigned long long StartTickMs; // 0x4C70
	unsigned long long PauseTickMs; // 0x4C78
	Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf>,327,Scaleform::ArrayDefaultPolicy> IntervalTimers; // 0x4C80
	long LastIntervalTimerId; // 0x4C98
	Scaleform::Ptr<Scaleform::Render::TreeContainer> FocusRectContainerNode; // 0x4CA0
	Scaleform::GFx::FocusGroupDescr FocusGroups[16]; // 0x4CB0
	unsigned long FocusGroupsCnt; // 0x52B0
	unsigned char FocusGroupIndexes[16]; // 0x52B4
	bool FocusRectChanged; // 0x52C4
	Scaleform::GFx::InteractiveObject * pPlayListHead; // 0x52C8
	Scaleform::GFx::InteractiveObject * pPlayListOptHead; // 0x52D0
	Scaleform::GFx::InteractiveObject * pUnloadListHead; // 0x52D8
	unsigned long Flags; // 0x52E0
	unsigned long Flags2; // 0x52E4
	Scaleform::GFx::IMECandidateListStyle * pIMECandidateListStyle; // 0x52E8
	Scaleform::GFx::LoadQueueEntryMT * pLoadQueueMTHead; // 0x52F0
	struct FontDesc;
	Scaleform::ArrayLH<Scaleform::GFx::MovieImpl::FontDesc,2,Scaleform::ArrayDefaultPolicy> RegisteredFonts; // 0x52F8
private:
	Scaleform::List<Scaleform::GFx::DrawingContext,Scaleform::GFx::DrawingContext,Scaleform::ListNode<Scaleform::GFx::DrawingContext> > DrawingContextList; // 0x5310
	struct MDKillListEntry;
	Scaleform::Array<Scaleform::GFx::MovieImpl::MDKillListEntry,327,Scaleform::ArrayDefaultPolicy> MovieDefKillList; // 0x5320
	Scaleform::Ptr<Scaleform::GFx::ASMovieRootBase> pSavedASMovieRoot; // 0x5338
	Scaleform::Render::ContextImpl::Context RenderContext; // 0x5340
	char PreviouslyCaptured; // 0x5458
	Scaleform::Ptr<Scaleform::Render::DrawableImageContext> DIContext; // 0x5460
	Scaleform::Render::ThreadCommandQueue * pRTCommandQueue; // 0x5468
	Scaleform::Ptr<Scaleform::GFx::MultitouchInterface> MultitouchHAL; // 0x5470
	Scaleform::GFx::MovieImpl::MultitouchInputMode MultitouchMode; // 0x5478
	Scaleform::Ptr<Scaleform::GFx::InteractiveObject> GestureTopMostChar; // 0x5480
	Scaleform::GFx::OrientationEvent::OrientationType DeviceOrientation; // 0x5488
	Scaleform::ArrayLH<Scaleform::GFx::MovieImpl::IndirectTransPair,2,Scaleform::ArrayDefaultPolicy> IndirectTransformPairs; // 0x5490
};
struct Scaleform::GFx::MovieImpl::WideStringStorage :
	Scaleform::RefCountBase<Scaleform::GFx::MovieImpl::WideStringStorage,327>
{
	Scaleform::GFx::ASStringNode * pNode; // 0x10
	unsigned char pData[1]; // 0x18
private:
	WideStringStorage(const Scaleform::GFx::MovieImpl::WideStringStorage &);
public:
	WideStringStorage(Scaleform::GFx::ASStringNode *, unsigned long long);
	virtual ~WideStringStorage();
	const wchar_t * ToWStr();
private:
	const Scaleform::GFx::MovieImpl::WideStringStorage & operator=(const Scaleform::GFx::MovieImpl::WideStringStorage &);
};
class Scaleform::RefCountBase<Scaleform::GFx::MovieImpl::WideStringStorage,327> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,327>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 327,
	};
public:
	RefCountBase<Scaleform::GFx::MovieImpl::WideStringStorage,327>(Scaleform::RefCountBase<Scaleform::GFx::MovieImpl::WideStringStorage,327> &);
	RefCountBase<Scaleform::GFx::MovieImpl::WideStringStorage,327>(const Scaleform::RefCountBase<Scaleform::GFx::MovieImpl::WideStringStorage,327> &);
	RefCountBase<Scaleform::GFx::MovieImpl::WideStringStorage,327>();
	virtual ~RefCountBase<Scaleform::GFx::MovieImpl::WideStringStorage,327>();
	Scaleform::RefCountBase<Scaleform::GFx::MovieImpl::WideStringStorage,327> & operator=(Scaleform::RefCountBase<Scaleform::GFx::MovieImpl::WideStringStorage,327> &);
	Scaleform::RefCountBase<Scaleform::GFx::MovieImpl::WideStringStorage,327> & operator=(const Scaleform::RefCountBase<Scaleform::GFx::MovieImpl::WideStringStorage,327> &);
};
Scaleform::GFx::MovieImpl::WideStringStorage::WideStringStorage(Scaleform::GFx::ASStringNode * pnode, unsigned long long dataSz); // 0x140453230
struct Scaleform::GFx::MovieImpl::LevelInfo
{
	long Level; // 0x0
	Scaleform::Ptr<Scaleform::GFx::InteractiveObject> pSprite; // 0x8
	LevelInfo(Scaleform::GFx::MovieImpl::LevelInfo &);
	LevelInfo(const Scaleform::GFx::MovieImpl::LevelInfo &);
	LevelInfo();
	~LevelInfo();
	Scaleform::GFx::MovieImpl::LevelInfo & operator=(Scaleform::GFx::MovieImpl::LevelInfo &);
	Scaleform::GFx::MovieImpl::LevelInfo & operator=(const Scaleform::GFx::MovieImpl::LevelInfo &);
};
Scaleform::Log * Scaleform::GFx::MovieImpl::GetCachedLog(); // 0x140333910
struct Scaleform::GFx::MovieImpl::ReturnValueHolder :
	Scaleform::NewOverrideBase<323>
{
	char * CharBuffer; // 0x0
	unsigned long CharBufferSize; // 0x8
	Scaleform::ArrayLH_CC<Scaleform::GFx::ASString,323,Scaleform::ArrayDefaultPolicy> StringArray; // 0x10
	unsigned long StringArrayPos; // 0x30
	ReturnValueHolder(const Scaleform::GFx::MovieImpl::ReturnValueHolder &);
	ReturnValueHolder(Scaleform::GFx::ASStringManager *);
	~ReturnValueHolder();
	char * PreAllocateBuffer(unsigned long);
	void ResetPos();
	void ResizeStringArray(unsigned long);
	Scaleform::GFx::MovieImpl::ReturnValueHolder & operator=(const Scaleform::GFx::MovieImpl::ReturnValueHolder &);
};
class Scaleform::NewOverrideBase<323>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 323,
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
class Scaleform::ArrayLH_CC<Scaleform::GFx::ASString,323,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayDataLHCC<Scaleform::GFx::ASString,Scaleform::AllocatorLH<Scaleform::GFx::ASString,323>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH_CC<Scaleform::GFx::ASString,323,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH_CC<Scaleform::GFx::ASString,323,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH_CC<Scaleform::GFx::ASString,323,Scaleform::ArrayDefaultPolicy>(const Scaleform::GFx::ASString &, const Scaleform::ArrayDefaultPolicy &);
	ArrayLH_CC<Scaleform::GFx::ASString,323,Scaleform::ArrayDefaultPolicy>(const Scaleform::GFx::ASString &, long);
	ArrayLH_CC<Scaleform::GFx::ASString,323,Scaleform::ArrayDefaultPolicy>(const Scaleform::GFx::ASString &);
	const Scaleform::ArrayLH_CC<Scaleform::GFx::ASString,323,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH_CC<Scaleform::GFx::ASString,323,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH_CC<Scaleform::GFx::ASString,323,Scaleform::ArrayDefaultPolicy>();
};
Scaleform::GFx::MovieImpl::ReturnValueHolder::ReturnValueHolder(Scaleform::GFx::ASStringManager * pmgr); // 0x1402DD3F0
class Scaleform::GFx::MovieImpl::DragState
{
public:
	Scaleform::GFx::InteractiveObject * pCharacter; // 0x0
	Scaleform::GFx::InteractiveObject * pTopmostEntity; // 0x8
	bool LockCenter; // 0x10
	bool Bound; // 0x11
	Scaleform::Render::Point<float> BoundLT; // 0x14
	Scaleform::Render::Point<float> BoundRB; // 0x1C
	Scaleform::Render::Point<float> CenterDelta; // 0x24
	unsigned long MouseIndex; // 0x2C
	DragState(Scaleform::GFx::MovieImpl::DragState &);
	DragState(const Scaleform::GFx::MovieImpl::DragState &);
	DragState();
	void InitCenterDelta(bool, unsigned long);
	Scaleform::GFx::MovieImpl::DragState & operator=(Scaleform::GFx::MovieImpl::DragState &);
	Scaleform::GFx::MovieImpl::DragState & operator=(const Scaleform::GFx::MovieImpl::DragState &);
};
struct Scaleform::GFx::MovieImpl::StickyVarNode :
	Scaleform::NewOverrideBase<323>
{
	Scaleform::GFx::ASString Name; // 0x8
	Scaleform::GFx::MovieImpl::StickyVarNode * pNext; // 0x10
	bool Permanent; // 0x18
	StickyVarNode(const Scaleform::GFx::MovieImpl::StickyVarNode &);
	StickyVarNode(const Scaleform::GFx::ASString &, bool);
	~StickyVarNode();
	void Assign(const Scaleform::GFx::MovieImpl::StickyVarNode &);
private:
	const Scaleform::GFx::MovieImpl::StickyVarNode & operator=(const Scaleform::GFx::MovieImpl::StickyVarNode &);
};
void Scaleform::GFx::MovieImpl::StickyVarNode::Assign(const Scaleform::GFx::MovieImpl::StickyVarNode & node); // 0x140461060
struct Scaleform::GFx::MovieImpl::IndirectTransPair
{
	Scaleform::Ptr<Scaleform::Render::TreeNode> TransformParent; // 0x0
	Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase> Obj; // 0x8
	Scaleform::Ptr<Scaleform::GFx::DisplayObjContainer> OriginalParent; // 0x10
	long OrigParentDepth; // 0x18
	IndirectTransPair(Scaleform::GFx::MovieImpl::IndirectTransPair &);
	IndirectTransPair(const Scaleform::GFx::MovieImpl::IndirectTransPair &);
	IndirectTransPair();
	void Clear();
	~IndirectTransPair();
	Scaleform::GFx::MovieImpl::IndirectTransPair & operator=(Scaleform::GFx::MovieImpl::IndirectTransPair &);
	Scaleform::GFx::MovieImpl::IndirectTransPair & operator=(const Scaleform::GFx::MovieImpl::IndirectTransPair &);
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
class Scaleform::Ptr<Scaleform::GFx::DisplayObjContainer>
{
protected:
	Scaleform::GFx::DisplayObjContainer * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::DisplayObjContainer>(const Scaleform::Ptr<Scaleform::GFx::DisplayObjContainer> &);
	Ptr<Scaleform::GFx::DisplayObjContainer>(Scaleform::GFx::DisplayObjContainer *);
	Ptr<Scaleform::GFx::DisplayObjContainer>(Scaleform::Ptr<Scaleform::GFx::DisplayObjContainer> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::DisplayObjContainer>(Scaleform::Pickable<Scaleform::GFx::DisplayObjContainer>);
	Ptr<Scaleform::GFx::DisplayObjContainer>(Scaleform::GFx::DisplayObjContainer &);
	Ptr<Scaleform::GFx::DisplayObjContainer>();
	~Ptr<Scaleform::GFx::DisplayObjContainer>();
	bool operator==(Scaleform::GFx::DisplayObjContainer *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::DisplayObjContainer> &);
	bool operator!=(Scaleform::GFx::DisplayObjContainer *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::DisplayObjContainer> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::DisplayObjContainer> &);
	Scaleform::Ptr<Scaleform::GFx::DisplayObjContainer> & operator=(Scaleform::Pickable<Scaleform::GFx::DisplayObjContainer>);
	const Scaleform::Ptr<Scaleform::GFx::DisplayObjContainer> & operator=(Scaleform::GFx::DisplayObjContainer &);
	const Scaleform::Ptr<Scaleform::GFx::DisplayObjContainer> & operator=(Scaleform::GFx::DisplayObjContainer *);
	const Scaleform::Ptr<Scaleform::GFx::DisplayObjContainer> & operator=(const Scaleform::Ptr<Scaleform::GFx::DisplayObjContainer> &);
	Scaleform::Ptr<Scaleform::GFx::DisplayObjContainer> & SetPtr(Scaleform::Pickable<Scaleform::GFx::DisplayObjContainer>);
	Scaleform::Ptr<Scaleform::GFx::DisplayObjContainer> & SetPtr(Scaleform::GFx::DisplayObjContainer &);
	Scaleform::Ptr<Scaleform::GFx::DisplayObjContainer> & SetPtr(Scaleform::GFx::DisplayObjContainer *);
	Scaleform::Ptr<Scaleform::GFx::DisplayObjContainer> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::DisplayObjContainer> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::DisplayObjContainer * & GetRawRef();
	Scaleform::GFx::DisplayObjContainer * GetPtr();
	Scaleform::GFx::DisplayObjContainer & operator*();
	Scaleform::GFx::DisplayObjContainer * operator->();
	Scaleform::GFx::DisplayObjContainer * operator class Scaleform::GFx::DisplayObjContainer *();
	Scaleform::Ptr<Scaleform::GFx::DisplayObjContainer> & Pick(Scaleform::GFx::DisplayObjContainer *);
	Scaleform::Ptr<Scaleform::GFx::DisplayObjContainer> & Pick(Scaleform::Pickable<Scaleform::GFx::DisplayObjContainer>);
	Scaleform::Ptr<Scaleform::GFx::DisplayObjContainer> & Pick(Scaleform::Ptr<Scaleform::GFx::DisplayObjContainer> &);
};
void Scaleform::GFx::MovieImpl::SetMouseCursorCount(unsigned long n); // 0x1402EA950
unsigned long Scaleform::GFx::MovieImpl::GetMouseCursorCount(); // 0x1402E2DB0
void Scaleform::GFx::MovieImpl::SetControllerCount(unsigned long n); // 0x1402E9F40
unsigned long Scaleform::GFx::MovieImpl::GetControllerCount(); // 0x1402E20D0
Scaleform::GFx::Movie::ScaleModeType Scaleform::GFx::MovieImpl::GetViewScaleMode(); // 0x1402E36A0
Scaleform::GFx::Movie::AlignType Scaleform::GFx::MovieImpl::GetViewAlignment(); // 0x1402E3650
Scaleform::Render::Rect<float> Scaleform::GFx::MovieImpl::GetVisibleFrameRect(); // 0x1402E3710
Scaleform::Render::Rect<float> Scaleform::GFx::MovieImpl::GetSafeRect(); // 0x1402E2F80
void Scaleform::GFx::MovieImpl::SetSafeRect(const Scaleform::Render::Rect<float> & rect); // 0x1402EAB10
void Scaleform::GFx::MovieImpl::SetEdgeAAMode(Scaleform::Render::EdgeAAMode edgeAA); // 0x1402EA020
Scaleform::Render::EdgeAAMode Scaleform::GFx::MovieImpl::GetEdgeAAMode(); // 0x1402E2310
void Scaleform::GFx::MovieImpl::SetVerboseAction(bool verboseAction); // 0x1402EADE0
void Scaleform::GFx::MovieImpl::SetActionErrorsSuppress(bool suppressActionErrors); // 0x1402E9DD0
float Scaleform::GFx::MovieImpl::GetBackgroundAlpha(); // 0x1402E20A0
const Scaleform::Render::ContextImpl::DisplayHandle<Scaleform::Render::TreeRoot> & Scaleform::GFx::MovieImpl::GetDisplayHandle(); // 0x1402E2200
void Scaleform::GFx::MovieImpl::SetCaptureThread(unsigned long captureThreadId); // 0x1402E9F30
void Scaleform::GFx::MovieImpl::ShutdownRendering(bool wait); // 0x1402EB220
bool Scaleform::GFx::MovieImpl::IsShutdownRenderingComplete(); // 0x1402E4930
void * Scaleform::GFx::MovieImpl::GetUserData(); // 0x1402E3630
void Scaleform::GFx::MovieImpl::SetUserData(void * ud); // 0x1402EADB0
bool Scaleform::GFx::MovieImpl::IsShutdowning(); // 0x1402E4980
bool Scaleform::GFx::MovieImpl::IsPaused(); // 0x1402E4920
class Scaleform::Ptr<Scaleform::AmpStats>
{
protected:
	Scaleform::AmpStats * pObject; // 0x0
public:
	Ptr<Scaleform::AmpStats>(const Scaleform::Ptr<Scaleform::AmpStats> &);
	Ptr<Scaleform::AmpStats>(Scaleform::AmpStats *);
	Ptr<Scaleform::AmpStats>(Scaleform::Ptr<Scaleform::AmpStats> &, Scaleform::PickType);
	Ptr<Scaleform::AmpStats>(Scaleform::Pickable<Scaleform::AmpStats>);
	Ptr<Scaleform::AmpStats>(Scaleform::AmpStats &);
	Ptr<Scaleform::AmpStats>();
	~Ptr<Scaleform::AmpStats>();
	bool operator==(Scaleform::AmpStats *);
	bool operator==(const Scaleform::Ptr<Scaleform::AmpStats> &);
	bool operator!=(Scaleform::AmpStats *);
	bool operator!=(const Scaleform::Ptr<Scaleform::AmpStats> &);
	bool operator<(const Scaleform::Ptr<Scaleform::AmpStats> &);
	Scaleform::Ptr<Scaleform::AmpStats> & operator=(Scaleform::Pickable<Scaleform::AmpStats>);
	const Scaleform::Ptr<Scaleform::AmpStats> & operator=(Scaleform::AmpStats &);
	const Scaleform::Ptr<Scaleform::AmpStats> & operator=(Scaleform::AmpStats *);
	const Scaleform::Ptr<Scaleform::AmpStats> & operator=(const Scaleform::Ptr<Scaleform::AmpStats> &);
	Scaleform::Ptr<Scaleform::AmpStats> & SetPtr(Scaleform::Pickable<Scaleform::AmpStats>);
	Scaleform::Ptr<Scaleform::AmpStats> & SetPtr(Scaleform::AmpStats &);
	Scaleform::Ptr<Scaleform::AmpStats> & SetPtr(Scaleform::AmpStats *);
	Scaleform::Ptr<Scaleform::AmpStats> & SetPtr(const Scaleform::Ptr<Scaleform::AmpStats> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::AmpStats * & GetRawRef();
	Scaleform::AmpStats * GetPtr();
	Scaleform::AmpStats & operator*();
	Scaleform::AmpStats * operator->();
	Scaleform::AmpStats * operator class Scaleform::AmpStats *();
	Scaleform::Ptr<Scaleform::AmpStats> & Pick(Scaleform::AmpStats *);
	Scaleform::Ptr<Scaleform::AmpStats> & Pick(Scaleform::Pickable<Scaleform::AmpStats>);
	Scaleform::Ptr<Scaleform::AmpStats> & Pick(Scaleform::Ptr<Scaleform::AmpStats> &);
};
Scaleform::MemoryHeap * Scaleform::GFx::MovieImpl::GetHeap(); // 0x1403D6F90
Scaleform::GFx::StateBag * Scaleform::GFx::MovieImpl::GetStateBagImpl(); // 0x1402E3100
bool Scaleform::GFx::MovieImpl::IsMovieFocused(); // 0x1402E4910
bool Scaleform::GFx::MovieImpl::IsKeyboardFocused(const Scaleform::GFx::InteractiveObject * ch, unsigned long controllerIdx); // 0x14035F6C0
bool Scaleform::GFx::MovieImpl::IsExitRequested(); // 0x1402E4790
bool Scaleform::GFx::MovieImpl::AcceptAnimMovesWith3D(); // 0x1402DEC60
void Scaleform::GFx::MovieImpl::SetStageAutoOrients(bool v); // 0x1402EABB0
class Scaleform::ArrayLH<Scaleform::GFx::MovieImpl::LevelInfo,327,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::MovieImpl::LevelInfo,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::LevelInfo,327>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::MovieImpl::LevelInfo,327,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::MovieImpl::LevelInfo,327,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::MovieImpl::LevelInfo,327,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::MovieImpl::LevelInfo,327,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::MovieImpl::LevelInfo,327,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::MovieImpl::LevelInfo,327,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::MovieImpl::LevelInfo,327,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::MovieImpl::LevelInfo,327,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::List<Scaleform::GFx::MovieDefRootNode,Scaleform::GFx::MovieDefRootNode,Scaleform::ListNode<Scaleform::GFx::MovieDefRootNode> >
{
	class ValueType;
private:
	List<Scaleform::GFx::MovieDefRootNode,Scaleform::GFx::MovieDefRootNode,Scaleform::ListNode<Scaleform::GFx::MovieDefRootNode> >(const Scaleform::List<Scaleform::GFx::MovieDefRootNode,Scaleform::GFx::MovieDefRootNode,Scaleform::ListNode<Scaleform::GFx::MovieDefRootNode> > &);
public:
	List<Scaleform::GFx::MovieDefRootNode,Scaleform::GFx::MovieDefRootNode,Scaleform::ListNode<Scaleform::GFx::MovieDefRootNode> >();
	void Clear();
	Scaleform::GFx::MovieDefRootNode * GetFirst();
	Scaleform::GFx::MovieDefRootNode * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::GFx::MovieDefRootNode *);
	bool IsLast(const Scaleform::GFx::MovieDefRootNode *);
	bool IsNull(const Scaleform::GFx::MovieDefRootNode *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::GFx::MovieDefRootNode * GetPrev(const Scaleform::GFx::MovieDefRootNode *);
	static Scaleform::GFx::MovieDefRootNode * GetNext(const Scaleform::GFx::MovieDefRootNode *);
	void PushFront(Scaleform::GFx::MovieDefRootNode *);
	void PushBack(Scaleform::GFx::MovieDefRootNode *);
	static void Remove(Scaleform::GFx::MovieDefRootNode *);
	void BringToFront(Scaleform::GFx::MovieDefRootNode *);
	void SendToBack(Scaleform::GFx::MovieDefRootNode *);
	void PushListToFront(Scaleform::List<Scaleform::GFx::MovieDefRootNode,Scaleform::GFx::MovieDefRootNode,Scaleform::ListNode<Scaleform::GFx::MovieDefRootNode> > &);
	void PushListToBack(Scaleform::List<Scaleform::GFx::MovieDefRootNode,Scaleform::GFx::MovieDefRootNode,Scaleform::ListNode<Scaleform::GFx::MovieDefRootNode> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::GFx::MovieDefRootNode,Scaleform::GFx::MovieDefRootNode,Scaleform::ListNode<Scaleform::GFx::MovieDefRootNode> > &, Scaleform::GFx::MovieDefRootNode *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::GFx::MovieDefRootNode,Scaleform::GFx::MovieDefRootNode,Scaleform::ListNode<Scaleform::GFx::MovieDefRootNode> > &, Scaleform::GFx::MovieDefRootNode *);
	void PushListItemsToFront(Scaleform::GFx::MovieDefRootNode *, Scaleform::GFx::MovieDefRootNode *);
private:
	const Scaleform::List<Scaleform::GFx::MovieDefRootNode,Scaleform::GFx::MovieDefRootNode,Scaleform::ListNode<Scaleform::GFx::MovieDefRootNode> > & operator=(const Scaleform::List<Scaleform::GFx::MovieDefRootNode,Scaleform::GFx::MovieDefRootNode,Scaleform::ListNode<Scaleform::GFx::MovieDefRootNode> > &);
	Scaleform::ListNode<Scaleform::GFx::MovieDefRootNode> Root; // 0x0
};
class Scaleform::Ptr<Scaleform::Render::TreeRoot>
{
protected:
	Scaleform::Render::TreeRoot * pObject; // 0x0
public:
	Ptr<Scaleform::Render::TreeRoot>(const Scaleform::Ptr<Scaleform::Render::TreeRoot> &);
	Ptr<Scaleform::Render::TreeRoot>(Scaleform::Render::TreeRoot *);
	Ptr<Scaleform::Render::TreeRoot>(Scaleform::Ptr<Scaleform::Render::TreeRoot> &, Scaleform::PickType);
	Ptr<Scaleform::Render::TreeRoot>(Scaleform::Pickable<Scaleform::Render::TreeRoot>);
	Ptr<Scaleform::Render::TreeRoot>(Scaleform::Render::TreeRoot &);
	Ptr<Scaleform::Render::TreeRoot>();
	~Ptr<Scaleform::Render::TreeRoot>();
	bool operator==(Scaleform::Render::TreeRoot *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::TreeRoot> &);
	bool operator!=(Scaleform::Render::TreeRoot *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::TreeRoot> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::TreeRoot> &);
	Scaleform::Ptr<Scaleform::Render::TreeRoot> & operator=(Scaleform::Pickable<Scaleform::Render::TreeRoot>);
	const Scaleform::Ptr<Scaleform::Render::TreeRoot> & operator=(Scaleform::Render::TreeRoot &);
	const Scaleform::Ptr<Scaleform::Render::TreeRoot> & operator=(Scaleform::Render::TreeRoot *);
	const Scaleform::Ptr<Scaleform::Render::TreeRoot> & operator=(const Scaleform::Ptr<Scaleform::Render::TreeRoot> &);
	Scaleform::Ptr<Scaleform::Render::TreeRoot> & SetPtr(Scaleform::Pickable<Scaleform::Render::TreeRoot>);
	Scaleform::Ptr<Scaleform::Render::TreeRoot> & SetPtr(Scaleform::Render::TreeRoot &);
	Scaleform::Ptr<Scaleform::Render::TreeRoot> & SetPtr(Scaleform::Render::TreeRoot *);
	Scaleform::Ptr<Scaleform::Render::TreeRoot> & SetPtr(const Scaleform::Ptr<Scaleform::Render::TreeRoot> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::TreeRoot * & GetRawRef();
	Scaleform::Render::TreeRoot * GetPtr();
	Scaleform::Render::TreeRoot & operator*();
	Scaleform::Render::TreeRoot * operator->();
	Scaleform::Render::TreeRoot * operator class Scaleform::Render::TreeRoot *();
	Scaleform::Ptr<Scaleform::Render::TreeRoot> & Pick(Scaleform::Render::TreeRoot *);
	Scaleform::Ptr<Scaleform::Render::TreeRoot> & Pick(Scaleform::Pickable<Scaleform::Render::TreeRoot>);
	Scaleform::Ptr<Scaleform::Render::TreeRoot> & Pick(Scaleform::Ptr<Scaleform::Render::TreeRoot> &);
};
class Scaleform::Ptr<Scaleform::GFx::FontManagerStates>
{
protected:
	Scaleform::GFx::FontManagerStates * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::FontManagerStates>(const Scaleform::Ptr<Scaleform::GFx::FontManagerStates> &);
	Ptr<Scaleform::GFx::FontManagerStates>(Scaleform::GFx::FontManagerStates *);
	Ptr<Scaleform::GFx::FontManagerStates>(Scaleform::Ptr<Scaleform::GFx::FontManagerStates> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::FontManagerStates>(Scaleform::Pickable<Scaleform::GFx::FontManagerStates>);
	Ptr<Scaleform::GFx::FontManagerStates>(Scaleform::GFx::FontManagerStates &);
	Ptr<Scaleform::GFx::FontManagerStates>();
	~Ptr<Scaleform::GFx::FontManagerStates>();
	bool operator==(Scaleform::GFx::FontManagerStates *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::FontManagerStates> &);
	bool operator!=(Scaleform::GFx::FontManagerStates *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::FontManagerStates> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::FontManagerStates> &);
	Scaleform::Ptr<Scaleform::GFx::FontManagerStates> & operator=(Scaleform::Pickable<Scaleform::GFx::FontManagerStates>);
	const Scaleform::Ptr<Scaleform::GFx::FontManagerStates> & operator=(Scaleform::GFx::FontManagerStates &);
	const Scaleform::Ptr<Scaleform::GFx::FontManagerStates> & operator=(Scaleform::GFx::FontManagerStates *);
	const Scaleform::Ptr<Scaleform::GFx::FontManagerStates> & operator=(const Scaleform::Ptr<Scaleform::GFx::FontManagerStates> &);
	Scaleform::Ptr<Scaleform::GFx::FontManagerStates> & SetPtr(Scaleform::Pickable<Scaleform::GFx::FontManagerStates>);
	Scaleform::Ptr<Scaleform::GFx::FontManagerStates> & SetPtr(Scaleform::GFx::FontManagerStates &);
	Scaleform::Ptr<Scaleform::GFx::FontManagerStates> & SetPtr(Scaleform::GFx::FontManagerStates *);
	Scaleform::Ptr<Scaleform::GFx::FontManagerStates> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::FontManagerStates> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::FontManagerStates * & GetRawRef();
	Scaleform::GFx::FontManagerStates * GetPtr();
	Scaleform::GFx::FontManagerStates & operator*();
	Scaleform::GFx::FontManagerStates * operator->();
	Scaleform::GFx::FontManagerStates * operator class Scaleform::GFx::FontManagerStates *();
	Scaleform::Ptr<Scaleform::GFx::FontManagerStates> & Pick(Scaleform::GFx::FontManagerStates *);
	Scaleform::Ptr<Scaleform::GFx::FontManagerStates> & Pick(Scaleform::Pickable<Scaleform::GFx::FontManagerStates>);
	Scaleform::Ptr<Scaleform::GFx::FontManagerStates> & Pick(Scaleform::Ptr<Scaleform::GFx::FontManagerStates> &);
};
class Scaleform::GFx::ASStringHash<Scaleform::GFx::MovieImpl::StickyVarNode *> :
	Scaleform::GFx::ASStringHashBase<Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor,324> >
{
	class SelfType;
	class BaseType;
public:
	ASStringHash<Scaleform::GFx::MovieImpl::StickyVarNode *>(Scaleform::GFx::ASStringHash<Scaleform::GFx::MovieImpl::StickyVarNode *> &);
	ASStringHash<Scaleform::GFx::MovieImpl::StickyVarNode *>(const Scaleform::GFx::ASStringHash<Scaleform::GFx::MovieImpl::StickyVarNode *> &);
	ASStringHash<Scaleform::GFx::MovieImpl::StickyVarNode *>();
	~ASStringHash<Scaleform::GFx::MovieImpl::StickyVarNode *>();
	Scaleform::GFx::ASStringHash<Scaleform::GFx::MovieImpl::StickyVarNode *> & operator=(Scaleform::GFx::ASStringHash<Scaleform::GFx::MovieImpl::StickyVarNode *> &);
	Scaleform::GFx::ASStringHash<Scaleform::GFx::MovieImpl::StickyVarNode *> & operator=(const Scaleform::GFx::ASStringHash<Scaleform::GFx::MovieImpl::StickyVarNode *> &);
};
class Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf>,327,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf>,327>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf>,327,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf>,327,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf>,327,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf>,327,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf>,327,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf>,327,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf>,327,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf>,327,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf>
{
protected:
	Scaleform::GFx::ASIntervalTimerIntf * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ASIntervalTimerIntf>(const Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf> &);
	Ptr<Scaleform::GFx::ASIntervalTimerIntf>(Scaleform::GFx::ASIntervalTimerIntf *);
	Ptr<Scaleform::GFx::ASIntervalTimerIntf>(Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ASIntervalTimerIntf>(Scaleform::Pickable<Scaleform::GFx::ASIntervalTimerIntf>);
	Ptr<Scaleform::GFx::ASIntervalTimerIntf>(Scaleform::GFx::ASIntervalTimerIntf &);
	Ptr<Scaleform::GFx::ASIntervalTimerIntf>();
	~Ptr<Scaleform::GFx::ASIntervalTimerIntf>();
	bool operator==(Scaleform::GFx::ASIntervalTimerIntf *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf> &);
	bool operator!=(Scaleform::GFx::ASIntervalTimerIntf *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf> &);
	Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf> & operator=(Scaleform::Pickable<Scaleform::GFx::ASIntervalTimerIntf>);
	const Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf> & operator=(Scaleform::GFx::ASIntervalTimerIntf &);
	const Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf> & operator=(Scaleform::GFx::ASIntervalTimerIntf *);
	const Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf> & operator=(const Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf> &);
	Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ASIntervalTimerIntf>);
	Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf> & SetPtr(Scaleform::GFx::ASIntervalTimerIntf &);
	Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf> & SetPtr(Scaleform::GFx::ASIntervalTimerIntf *);
	Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ASIntervalTimerIntf * & GetRawRef();
	Scaleform::GFx::ASIntervalTimerIntf * GetPtr();
	Scaleform::GFx::ASIntervalTimerIntf & operator*();
	Scaleform::GFx::ASIntervalTimerIntf * operator->();
	Scaleform::GFx::ASIntervalTimerIntf * operator class Scaleform::GFx::ASIntervalTimerIntf *();
	Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf> & Pick(Scaleform::GFx::ASIntervalTimerIntf *);
	Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf> & Pick(Scaleform::Pickable<Scaleform::GFx::ASIntervalTimerIntf>);
	Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf> & Pick(Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf> &);
};
struct Scaleform::GFx::MovieImpl::FontDesc
{
	Scaleform::Ptr<Scaleform::GFx::MovieDef> pMovieDef; // 0x0
	Scaleform::Ptr<Scaleform::GFx::FontResource> pFont; // 0x8
	FontDesc(Scaleform::GFx::MovieImpl::FontDesc &);
	FontDesc(const Scaleform::GFx::MovieImpl::FontDesc &);
	FontDesc();
	~FontDesc();
	Scaleform::GFx::MovieImpl::FontDesc & operator=(Scaleform::GFx::MovieImpl::FontDesc &);
	Scaleform::GFx::MovieImpl::FontDesc & operator=(const Scaleform::GFx::MovieImpl::FontDesc &);
};
class Scaleform::Ptr<Scaleform::GFx::FontResource>
{
protected:
	Scaleform::GFx::FontResource * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::FontResource>(const Scaleform::Ptr<Scaleform::GFx::FontResource> &);
	Ptr<Scaleform::GFx::FontResource>(Scaleform::GFx::FontResource *);
	Ptr<Scaleform::GFx::FontResource>(Scaleform::Ptr<Scaleform::GFx::FontResource> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::FontResource>(Scaleform::Pickable<Scaleform::GFx::FontResource>);
	Ptr<Scaleform::GFx::FontResource>(Scaleform::GFx::FontResource &);
	Ptr<Scaleform::GFx::FontResource>();
	~Ptr<Scaleform::GFx::FontResource>();
	bool operator==(Scaleform::GFx::FontResource *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::FontResource> &);
	bool operator!=(Scaleform::GFx::FontResource *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::FontResource> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::FontResource> &);
	Scaleform::Ptr<Scaleform::GFx::FontResource> & operator=(Scaleform::Pickable<Scaleform::GFx::FontResource>);
	const Scaleform::Ptr<Scaleform::GFx::FontResource> & operator=(Scaleform::GFx::FontResource &);
	const Scaleform::Ptr<Scaleform::GFx::FontResource> & operator=(Scaleform::GFx::FontResource *);
	const Scaleform::Ptr<Scaleform::GFx::FontResource> & operator=(const Scaleform::Ptr<Scaleform::GFx::FontResource> &);
	Scaleform::Ptr<Scaleform::GFx::FontResource> & SetPtr(Scaleform::Pickable<Scaleform::GFx::FontResource>);
	Scaleform::Ptr<Scaleform::GFx::FontResource> & SetPtr(Scaleform::GFx::FontResource &);
	Scaleform::Ptr<Scaleform::GFx::FontResource> & SetPtr(Scaleform::GFx::FontResource *);
	Scaleform::Ptr<Scaleform::GFx::FontResource> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::FontResource> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::FontResource * & GetRawRef();
	Scaleform::GFx::FontResource * GetPtr();
	Scaleform::GFx::FontResource & operator*();
	Scaleform::GFx::FontResource * operator->();
	Scaleform::GFx::FontResource * operator class Scaleform::GFx::FontResource *();
	Scaleform::Ptr<Scaleform::GFx::FontResource> & Pick(Scaleform::GFx::FontResource *);
	Scaleform::Ptr<Scaleform::GFx::FontResource> & Pick(Scaleform::Pickable<Scaleform::GFx::FontResource>);
	Scaleform::Ptr<Scaleform::GFx::FontResource> & Pick(Scaleform::Ptr<Scaleform::GFx::FontResource> &);
};
class Scaleform::ArrayLH<Scaleform::GFx::MovieImpl::FontDesc,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::MovieImpl::FontDesc,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::FontDesc,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::MovieImpl::FontDesc,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::MovieImpl::FontDesc,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::MovieImpl::FontDesc,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::MovieImpl::FontDesc,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::MovieImpl::FontDesc,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::MovieImpl::FontDesc,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::MovieImpl::FontDesc,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::MovieImpl::FontDesc,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::List<Scaleform::GFx::DrawingContext,Scaleform::GFx::DrawingContext,Scaleform::ListNode<Scaleform::GFx::DrawingContext> >
{
	class ValueType;
private:
	List<Scaleform::GFx::DrawingContext,Scaleform::GFx::DrawingContext,Scaleform::ListNode<Scaleform::GFx::DrawingContext> >(const Scaleform::List<Scaleform::GFx::DrawingContext,Scaleform::GFx::DrawingContext,Scaleform::ListNode<Scaleform::GFx::DrawingContext> > &);
public:
	List<Scaleform::GFx::DrawingContext,Scaleform::GFx::DrawingContext,Scaleform::ListNode<Scaleform::GFx::DrawingContext> >();
	void Clear();
	Scaleform::GFx::DrawingContext * GetFirst();
	Scaleform::GFx::DrawingContext * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::GFx::DrawingContext *);
	bool IsLast(const Scaleform::GFx::DrawingContext *);
	bool IsNull(const Scaleform::GFx::DrawingContext *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::GFx::DrawingContext * GetPrev(const Scaleform::GFx::DrawingContext *);
	static Scaleform::GFx::DrawingContext * GetNext(const Scaleform::GFx::DrawingContext *);
	void PushFront(Scaleform::GFx::DrawingContext *);
	void PushBack(Scaleform::GFx::DrawingContext *);
	static void Remove(Scaleform::GFx::DrawingContext *);
	void BringToFront(Scaleform::GFx::DrawingContext *);
	void SendToBack(Scaleform::GFx::DrawingContext *);
	void PushListToFront(Scaleform::List<Scaleform::GFx::DrawingContext,Scaleform::GFx::DrawingContext,Scaleform::ListNode<Scaleform::GFx::DrawingContext> > &);
	void PushListToBack(Scaleform::List<Scaleform::GFx::DrawingContext,Scaleform::GFx::DrawingContext,Scaleform::ListNode<Scaleform::GFx::DrawingContext> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::GFx::DrawingContext,Scaleform::GFx::DrawingContext,Scaleform::ListNode<Scaleform::GFx::DrawingContext> > &, Scaleform::GFx::DrawingContext *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::GFx::DrawingContext,Scaleform::GFx::DrawingContext,Scaleform::ListNode<Scaleform::GFx::DrawingContext> > &, Scaleform::GFx::DrawingContext *);
	void PushListItemsToFront(Scaleform::GFx::DrawingContext *, Scaleform::GFx::DrawingContext *);
private:
	const Scaleform::List<Scaleform::GFx::DrawingContext,Scaleform::GFx::DrawingContext,Scaleform::ListNode<Scaleform::GFx::DrawingContext> > & operator=(const Scaleform::List<Scaleform::GFx::DrawingContext,Scaleform::GFx::DrawingContext,Scaleform::ListNode<Scaleform::GFx::DrawingContext> > &);
	Scaleform::ListNode<Scaleform::GFx::DrawingContext> Root; // 0x0
};
struct Scaleform::GFx::MovieImpl::MDKillListEntry
{
	unsigned long long KillFrameId; // 0x0
	Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> pMovieDef; // 0x8
	MDKillListEntry(Scaleform::GFx::MovieImpl::MDKillListEntry &);
	MDKillListEntry(const Scaleform::GFx::MovieImpl::MDKillListEntry &);
	MDKillListEntry();
	~MDKillListEntry();
	Scaleform::GFx::MovieImpl::MDKillListEntry & operator=(Scaleform::GFx::MovieImpl::MDKillListEntry &);
	Scaleform::GFx::MovieImpl::MDKillListEntry & operator=(const Scaleform::GFx::MovieImpl::MDKillListEntry &);
};
class Scaleform::Array<Scaleform::GFx::MovieImpl::MDKillListEntry,327,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::MovieImpl::MDKillListEntry,Scaleform::AllocatorGH<Scaleform::GFx::MovieImpl::MDKillListEntry,327>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<Scaleform::GFx::MovieImpl::MDKillListEntry,327,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<Scaleform::GFx::MovieImpl::MDKillListEntry,327,Scaleform::ArrayDefaultPolicy> &);
	Array<Scaleform::GFx::MovieImpl::MDKillListEntry,327,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<Scaleform::GFx::MovieImpl::MDKillListEntry,327,Scaleform::ArrayDefaultPolicy>(long);
	Array<Scaleform::GFx::MovieImpl::MDKillListEntry,327,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<Scaleform::GFx::MovieImpl::MDKillListEntry,327,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<Scaleform::GFx::MovieImpl::MDKillListEntry,327,Scaleform::ArrayDefaultPolicy> &);
	~Array<Scaleform::GFx::MovieImpl::MDKillListEntry,327,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::ArrayLH<Scaleform::GFx::MovieImpl::IndirectTransPair,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::MovieImpl::IndirectTransPair,Scaleform::AllocatorLH<Scaleform::GFx::MovieImpl::IndirectTransPair,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::MovieImpl::IndirectTransPair,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::MovieImpl::IndirectTransPair,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::MovieImpl::IndirectTransPair,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::MovieImpl::IndirectTransPair,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::MovieImpl::IndirectTransPair,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::MovieImpl::IndirectTransPair,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::MovieImpl::IndirectTransPair,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::MovieImpl::IndirectTransPair,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::GFx::DoublePrecisionGuard
{
public:
	DoublePrecisionGuard();
	~DoublePrecisionGuard();
};