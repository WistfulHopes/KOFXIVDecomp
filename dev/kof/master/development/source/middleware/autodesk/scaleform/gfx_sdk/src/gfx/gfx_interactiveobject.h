#pragma once

class Scaleform::GFx::InteractiveObject :
	Scaleform::GFx::DisplayObject
{
public:
	void ClearPlayOptList();
	void ClearPlayList();
	void ClearLists();
	Scaleform::GFx::InteractiveObject * GetPlayPrev();
	void SetPlayPrev(Scaleform::GFx::InteractiveObject *);
	Scaleform::GFx::InteractiveObject * GetPlayNext();
	void SetPlayNext(Scaleform::GFx::InteractiveObject *);
	Scaleform::GFx::InteractiveObject * GetPlayPrevOpt();
	void SetPlayPrevOpt(Scaleform::GFx::InteractiveObject *);
	Scaleform::GFx::InteractiveObject * GetPlayNextOpt();
	void SetPlayNextOpt(Scaleform::GFx::InteractiveObject *);
	Scaleform::GFx::InteractiveObject * GetNextUnloaded();
	void SetNextUnloaded2(Scaleform::GFx::InteractiveObject *);
private:
	Scaleform::GFx::InteractiveObject * pPlayPrev; // 0x90
	Scaleform::GFx::InteractiveObject * pPlayNext; // 0x98
	Scaleform::GFx::InteractiveObject * pPlayNextOpt; // 0xA0
	Scaleform::GFx::InteractiveObject * pNextUnloaded; // 0xA0
	Scaleform::GFx::InteractiveObject * pPlayPrevOpt; // 0xA8
protected:
	Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> pDefImpl; // 0xB0
	enum FlagMasks
	{
		Mask_NoAdvanceLocal = 4,
		Mask_NoAdvanceGlobal = 8,
		Mask_Enabled = 16,
		Mask_TabEnabled = 96,
		Mask_FocusRect = 384,
		Mask_UseHandCursor = 1536,
		Mask_HitTestDisable = 2048,
		Mask_MouseDisabled = 4096,
		Mask_MouseChildrenDisabled = 8192,
		Mask_TrackAsMenu = 16384,
		Mask_TabChildrenDisabled = 32768,
		Mask_ChangedFlags = 983040,
		Mask_ReqPartialAdvance = 1048576,
		Mask_OptAdvList = 2097152,
		Mask_MarkedToRemoveFromOptAdvList = 4194304,
		Mask_OptAdvListMarker = 8388608,
		Shift_ChangedFlags = 16,
	};
private:
	unsigned long Flags; // 0xB8
protected:
	short TabIndex; // 0xBC
	unsigned short FocusGroupMask; // 0xBE
	unsigned char RollOverCnt; // 0xC0
	virtual Scaleform::Ptr<Scaleform::Render::TreeNode> CreateRenderNode(Scaleform::Render::ContextImpl::Context &);
public:
	void SetNoAdvanceLocalFlag(bool);
	void ClearNoAdvanceLocalFlag();
	bool IsNoAdvanceLocalFlagSet();
	void SetOptAdvListFlag(bool);
	void ClearOptAdvListFlag();
	bool IsOptAdvListFlagSet();
	void SetReqPartialAdvanceFlag(bool);
	void ClearReqPartialAdvanceFlag();
	bool IsReqPartialAdvanceFlagSet();
	unsigned short GetFocusGroupMask();
	unsigned short GetFocusGroupMask();
	bool IsFocusAllowed(Scaleform::GFx::MovieImpl *, unsigned long);
	bool IsFocusAllowed(Scaleform::GFx::MovieImpl *, unsigned long);
	bool IsAdvanceDisabled();
	void SetNoAdvanceGlobalFlag(bool);
	void ClearNoAdvanceGlobalFlag();
	bool IsNoAdvanceGlobalFlagSet();
	void SetTrackAsMenuFlag(bool);
	void ClearTrackAsMenuFlag();
	bool IsTrackAsMenuFlagSet();
	void SetEnabledFlag(bool);
	void ClearEnabledFlag();
	bool IsEnabledFlagSet();
	void SetMouseDisabledFlag(bool);
	void ClearMouseDisabledFlag();
	bool IsMouseDisabledFlagSet();
	void SetMouseChildrenDisabledFlag(bool);
	void ClearMouseChildrenDisabledFlag();
	bool IsMouseChildrenDisabledFlagSet();
	void SetTabChildrenDisabledFlag(bool);
	void ClearTabChildrenDisabledFlag();
	bool IsTabChildrenDisabledFlagSet();
	void SetTabEnabledFlag(bool);
	void ClearTabEnabledFlag();
	void UndefineTabEnabledFlag();
	bool IsTabEnabledFlagDefined();
	bool IsTabEnabledFlagTrue();
	bool IsTabEnabledFlagFalse();
	void SetFocusRectFlag(bool);
	void ClearFocusRectFlag();
	void UndefineFocusRectFlag();
	bool IsFocusRectFlagDefined();
	bool IsFocusRectFlagTrue();
	bool IsFocusRectFlagFalse();
	void SetUseHandCursorFlag(bool);
	void ClearUseHandCursorFlag();
	void UndefineUseHandCursorFlag();
	bool IsUseHandCursorFlagDefined();
	bool IsUseHandCursorFlagTrue();
	bool IsUseHandCursorFlagFalse();
	void SetHitTestDisableFlag(bool);
	void ClearHitTestDisableFlag();
	bool IsHitTestDisableFlagSet();
	void MarkToRemoveFromOptimizedPlayList();
	void ClearMarkToRemoveFromOptimizedPlayListFlag();
	bool IsMarkedToRemoveFromOptimizedPlayList();
	bool GetOptAdvListMarker();
	void SetOptAdvListMarker(bool);
	bool IsValidOptAdvListMember(Scaleform::GFx::MovieImpl *);
	void(*pDisplayCallback)(void *); // 0xC8
	void * DisplayCallbackUserPtr; // 0xD0
	InteractiveObject(const Scaleform::GFx::InteractiveObject &);
	InteractiveObject(Scaleform::GFx::MovieDefImpl *, Scaleform::GFx::ASMovieRootBase *, Scaleform::GFx::InteractiveObject *, Scaleform::GFx::ResourceId);
	virtual ~InteractiveObject();
	virtual Scaleform::GFx::MovieDefImpl * GetResourceMovieDef();
	virtual void SetBlendMode(Scaleform::Render::BlendMode);
	virtual Scaleform::Render::TreeContainer * GetRenderContainer();
	bool GetTrackAsMenu();
	bool GetEnabled();
	bool IsTabable();
	bool IsTabIndexed();
	long GetTabIndex();
	void SetTabIndex(long);
	bool IsFocusRectEnabled();
	bool IsFocusEnabled(Scaleform::GFx::FocusMovedType);
	struct FillTabableParams;
	virtual void OnEventLoad();
	virtual void OnEventUnload();
	virtual bool OnUnloading();
	enum FocusEventType
	{
		KillFocus = 0,
		SetFocus = 1,
	};
	void OnFocus(Scaleform::GFx::InteractiveObject::FocusEventType, Scaleform::GFx::InteractiveObject *, unsigned long, Scaleform::GFx::FocusMovedType);
	void OnGettingKeyboardFocus(unsigned long, Scaleform::GFx::FocusMovedType);
	bool OnLosingKeyboardFocus(Scaleform::GFx::InteractiveObject *, unsigned long, Scaleform::GFx::FocusMovedType);
	Scaleform::Render::Rect<float> GetFocusRect();
	void CloneInternalData(const Scaleform::GFx::InteractiveObject *);
	void SetPause(bool);
	bool OnKeyEvent(const Scaleform::GFx::EventId &, long *);
	bool OnCharEvent(unsigned long, unsigned long);
	bool OnMouseWheelEvent(long);
	void PropagateMouseEvent(const Scaleform::GFx::EventId &);
	bool OnMouseEvent(const Scaleform::GFx::EventId &);
	enum KeyMask
	{
		KeyMask_KeyPress = 65536,
		KeyMask_onKeyDown = 131072,
		KeyMask_onKeyUp = 262144,
		KeyMask_onClipEvent_keyDown = 524288,
		KeyMask_onClipEvent_keyUp = 1048576,
		KeyMask_FocusedItemHandledMask = 65535,
	};
	void PropagateKeyEvent(const Scaleform::GFx::EventId &, long *);
	void SetDisplayCallback(void(*)(void *), void *);
	virtual void DoDisplayCallback();
	void DoMouseDrag(unsigned long);
	long CheckAdvanceStatus(bool);
	void ModifyOptimizedPlayList();
	void PropagateNoAdvanceGlobalFlag();
	void PropagateNoAdvanceLocalFlag();
	void PropagateFocusGroupMask(unsigned long);
	void AddToPlayList();
	void InsertToPlayListAfter(Scaleform::GFx::InteractiveObject *);
	bool IsInPlayList();
	void AddToOptimizedPlayList();
	void RemoveFromPlayList();
	void RemoveFromOptimizedPlayList();
	void CopyPhysicalProperties(const Scaleform::GFx::InteractiveObject *);
	void MoveNameHandle(Scaleform::GFx::InteractiveObject *);
	unsigned long GetCurrentFrame();
	bool GetLabeledFrame(const char *, unsigned long *, bool);
	const Scaleform::String * GetFrameLabel(unsigned long, unsigned long *);
	void GotoFrame(unsigned long);
	unsigned long GetLoadingFrame();
	void ExecuteFrame0Events();
	bool HasLooped();
	void SetPlayState(Scaleform::GFx::PlayState);
	Scaleform::GFx::PlayState GetPlayState();
	unsigned long GetCursorType();
	virtual void SetStateChangeFlags(unsigned char);
	virtual unsigned char GetStateChangeFlags();
	unsigned long IncrementRollOverCnt();
	unsigned long DecrementRollOverCnt();
	Scaleform::GFx::ASStringManager * GetStringManager();
	void RemoveDisplayObject(Scaleform::GFx::DisplayObjectBase *);
	void RemoveDisplayObject();
	Scaleform::GFx::MovieDefImpl * GetDefImpl();
	Scaleform::GFx::MovieImpl * GetMovieImpl();
	long GetAVMVersion();
	bool IsAVM1();
	bool IsAVM2();
	bool ActsAsButton();
	void SetNextUnloaded(Scaleform::GFx::InteractiveObject *);
	const Scaleform::GFx::AvmInteractiveObjBase * GetAvmIntObj();
	Scaleform::GFx::AvmInteractiveObjBase * GetAvmIntObj();
	Scaleform::GFx::InteractiveObject & operator=(const Scaleform::GFx::InteractiveObject &);
};
void Scaleform::GFx::InteractiveObject::SetBlendMode(Scaleform::Render::BlendMode blend); // 0x140348860
struct Scaleform::GFx::InteractiveObject::FillTabableParams
{
	Scaleform::ArrayDH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327,Scaleform::ArrayDefaultPolicy> * Array; // 0x0
	bool TabIndexed; // 0x8
	bool InclFocusEnabled; // 0x9
	Scaleform::GFx::Bool3W TabChildrenInProto; // 0xA
	unsigned short FocusGroupMask; // 0xC
	unsigned long ControllerIdx; // 0x10
	FillTabableParams(Scaleform::GFx::InteractiveObject::FillTabableParams &);
	FillTabableParams(const Scaleform::GFx::InteractiveObject::FillTabableParams &);
	FillTabableParams();
	Scaleform::GFx::InteractiveObject::FillTabableParams & operator=(Scaleform::GFx::InteractiveObject::FillTabableParams &);
	Scaleform::GFx::InteractiveObject::FillTabableParams & operator=(const Scaleform::GFx::InteractiveObject::FillTabableParams &);
};
class Scaleform::Ptr<Scaleform::GFx::InteractiveObject>
{
protected:
	Scaleform::GFx::InteractiveObject * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::InteractiveObject>(const Scaleform::Ptr<Scaleform::GFx::InteractiveObject> &);
	Ptr<Scaleform::GFx::InteractiveObject>(Scaleform::GFx::InteractiveObject *);
	Ptr<Scaleform::GFx::InteractiveObject>(Scaleform::Ptr<Scaleform::GFx::InteractiveObject> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::InteractiveObject>(Scaleform::Pickable<Scaleform::GFx::InteractiveObject>);
	Ptr<Scaleform::GFx::InteractiveObject>(Scaleform::GFx::InteractiveObject &);
	Ptr<Scaleform::GFx::InteractiveObject>();
	~Ptr<Scaleform::GFx::InteractiveObject>();
	bool operator==(Scaleform::GFx::InteractiveObject *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::InteractiveObject> &);
	bool operator!=(Scaleform::GFx::InteractiveObject *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::InteractiveObject> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::InteractiveObject> &);
	Scaleform::Ptr<Scaleform::GFx::InteractiveObject> & operator=(Scaleform::Pickable<Scaleform::GFx::InteractiveObject>);
	const Scaleform::Ptr<Scaleform::GFx::InteractiveObject> & operator=(Scaleform::GFx::InteractiveObject &);
	const Scaleform::Ptr<Scaleform::GFx::InteractiveObject> & operator=(Scaleform::GFx::InteractiveObject *);
	const Scaleform::Ptr<Scaleform::GFx::InteractiveObject> & operator=(const Scaleform::Ptr<Scaleform::GFx::InteractiveObject> &);
	Scaleform::Ptr<Scaleform::GFx::InteractiveObject> & SetPtr(Scaleform::Pickable<Scaleform::GFx::InteractiveObject>);
	Scaleform::Ptr<Scaleform::GFx::InteractiveObject> & SetPtr(Scaleform::GFx::InteractiveObject &);
	Scaleform::Ptr<Scaleform::GFx::InteractiveObject> & SetPtr(Scaleform::GFx::InteractiveObject *);
	Scaleform::Ptr<Scaleform::GFx::InteractiveObject> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::InteractiveObject> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::InteractiveObject * & GetRawRef();
	Scaleform::GFx::InteractiveObject * GetPtr();
	Scaleform::GFx::InteractiveObject & operator*();
	Scaleform::GFx::InteractiveObject * operator->();
	Scaleform::GFx::InteractiveObject * operator class Scaleform::GFx::InteractiveObject *();
	Scaleform::Ptr<Scaleform::GFx::InteractiveObject> & Pick(Scaleform::GFx::InteractiveObject *);
	Scaleform::Ptr<Scaleform::GFx::InteractiveObject> & Pick(Scaleform::Pickable<Scaleform::GFx::InteractiveObject>);
	Scaleform::Ptr<Scaleform::GFx::InteractiveObject> & Pick(Scaleform::Ptr<Scaleform::GFx::InteractiveObject> &);
};
class Scaleform::ArrayDH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayDataDH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorDH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayDH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327,Scaleform::ArrayDefaultPolicy> &);
	ArrayDH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, const Scaleform::ArrayDefaultPolicy &);
	ArrayDH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, long);
	ArrayDH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *);
	const Scaleform::ArrayDH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayDH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327,Scaleform::ArrayDefaultPolicy> &);
	~ArrayDH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,327,Scaleform::ArrayDefaultPolicy>();
};
bool Scaleform::GFx::InteractiveObject::OnLosingKeyboardFocus(Scaleform::GFx::InteractiveObject * newFocusCh, unsigned long controllerIdx, Scaleform::GFx::FocusMovedType fmt); // 0x1400B8180
Scaleform::Render::Rect<float> Scaleform::GFx::InteractiveObject::GetFocusRect(); // 0x1403482D0
void Scaleform::GFx::InteractiveObject::ExecuteFrame0Events(); // 0x14002E7C0
bool Scaleform::GFx::InteractiveObject::OnKeyEvent(const Scaleform::GFx::EventId & id, long * pkeyMask); // 0x140348690
bool Scaleform::GFx::InteractiveObject::GetLabeledFrame(const char * plabel, unsigned long * frameNumber, bool translateNumbers); // 0x14004BBE0
void Scaleform::GFx::InteractiveObject::PropagateKeyEvent(const Scaleform::GFx::EventId & id, long * pkeyMask); // 0x1403486C0
void Scaleform::GFx::InteractiveObject::SetDisplayCallback(void(*callback)(void *), void * userPtr); // 0x140348880
void Scaleform::GFx::InteractiveObject::DoDisplayCallback(); // 0x140347FC0
long Scaleform::GFx::InteractiveObject::CheckAdvanceStatus(bool playingNow); // 0x1400470F0
void Scaleform::GFx::InteractiveObject::ModifyOptimizedPlayList(); // 0x140493F30
void Scaleform::GFx::InteractiveObject::ModifyOptimizedPlayListLocal<Scaleform::GFx::Button>(); // 0x1406F66B0
void Scaleform::GFx::InteractiveObject::ModifyOptimizedPlayListLocal<Scaleform::GFx::Sprite>(); // 0x14035DEA0
void Scaleform::GFx::InteractiveObject::ModifyOptimizedPlayListLocal<Scaleform::GFx::TextField>(); // 0x1403F1050
void Scaleform::GFx::InteractiveObject::PropagateFocusGroupMask(unsigned long mask); // 0x1403486B0
Scaleform::GFx::PlayState Scaleform::GFx::InteractiveObject::GetPlayState(); // 0x1400482A0
void Scaleform::GFx::InteractiveObject::SetStateChangeFlags(unsigned char flags); // 0x140348890
unsigned char Scaleform::GFx::InteractiveObject::GetStateChangeFlags(); // 0x140348350
class Scaleform::GFx::AvmInteractiveObjBase :
	Scaleform::GFx::AvmDisplayObjBase
{
public:
	bool ActsAsButton();
	unsigned long GetCursorType();
	void CloneInternalData(const Scaleform::GFx::InteractiveObject *);
	void CopyPhysicalProperties(const Scaleform::GFx::InteractiveObject *);
	void OnFocus(Scaleform::GFx::InteractiveObject::FocusEventType, Scaleform::GFx::InteractiveObject *, unsigned long, Scaleform::GFx::FocusMovedType);
	void OnGettingKeyboardFocus(unsigned long, Scaleform::GFx::FocusMovedType);
	bool OnKeyEvent(const Scaleform::GFx::EventId &, long *);
	bool OnLosingKeyboardFocus(Scaleform::GFx::InteractiveObject *, unsigned long, Scaleform::GFx::FocusMovedType);
	bool IsFocusEnabled(Scaleform::GFx::FocusMovedType);
	bool IsTabable();
	AvmInteractiveObjBase(Scaleform::GFx::AvmInteractiveObjBase &);
	AvmInteractiveObjBase(const Scaleform::GFx::AvmInteractiveObjBase &);
	AvmInteractiveObjBase();
	virtual ~AvmInteractiveObjBase();
	Scaleform::GFx::AvmInteractiveObjBase & operator=(Scaleform::GFx::AvmInteractiveObjBase &);
	Scaleform::GFx::AvmInteractiveObjBase & operator=(const Scaleform::GFx::AvmInteractiveObjBase &);
};