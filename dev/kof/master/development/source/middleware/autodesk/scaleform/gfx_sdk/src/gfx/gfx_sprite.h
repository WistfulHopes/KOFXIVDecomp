#pragma once

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
class Scaleform::GFx::AvmSpriteBase :
	Scaleform::GFx::AvmDisplayObjContainerBase
{
public:
	Scaleform::GFx::DisplayObjectBase * AddDisplayObject(const Scaleform::GFx::CharPosInfo &, const Scaleform::GFx::ASString &, const Scaleform::ArrayLH<Scaleform::GFx::SwfEvent *,260,Scaleform::ArrayDefaultPolicy> *, const void *, unsigned long, unsigned long, Scaleform::GFx::CharacterCreateInfo *, Scaleform::GFx::InteractiveObject *);
	void AdvanceFrame(bool, float);
	void CloneInternalData(const Scaleform::GFx::InteractiveObject *) = 0;
	void ExecuteFrame0Events();
	void ExecuteFrameTags(unsigned long);
	void ExecuteInitActionFrameTags(unsigned long);
	void ForceShutdown();
	long GetLevel();
	bool IsLevelMovie();
	bool MustBeInPlaylist();
	void SetHitAreaNotify(Scaleform::GFx::Sprite *);
	bool CheckCandidateListLevel(long);
	AvmSpriteBase(Scaleform::GFx::AvmSpriteBase &);
	AvmSpriteBase(const Scaleform::GFx::AvmSpriteBase &);
	AvmSpriteBase();
	virtual ~AvmSpriteBase();
	Scaleform::GFx::AvmSpriteBase & operator=(Scaleform::GFx::AvmSpriteBase &);
	Scaleform::GFx::AvmSpriteBase & operator=(const Scaleform::GFx::AvmSpriteBase &);
};
long Scaleform::GFx::AvmSpriteBase::GetLevel(); // 0x1400FB800
class Scaleform::GFx::Sprite :
	Scaleform::GFx::DisplayObjContainer
{
	struct Frame;
	class Matrix;
	class Cxform;
private:
	Scaleform::Ptr<Scaleform::GFx::TimelineDef> pDef; // 0x110
	Scaleform::GFx::PlayState PlayStatePriv; // 0x118
	unsigned long CurrentFrame; // 0x11C
	Scaleform::Ptr<Scaleform::GFx::DrawingContext> pDrawingAPI; // 0x120
	Scaleform::Ptr<Scaleform::GFx::CharacterHandle> pHitAreaHandle; // 0x128
	Scaleform::GFx::Sprite * pHitAreaHolder; // 0x130
	enum <unnamed-enum-Flags_UpdateFrame>
	{
		Flags_UpdateFrame = 1,
		Flags_HasLoopedPriv = 2,
		Flags_Unloaded = 4,
		Flags_OnEventLoadCalled = 8,
		Flags_LoadedSeparately = 16,
		Flags_LockRoot = 32,
		Flags_SpriteDef = 64,
		Flags_OnLoadReqd = 128,
	};
	unsigned char Flags; // 0x138
	Scaleform::GFx::Bool3W FocusEnabled; // 0x139
protected:
	void SetLoadedSeparatelyFlag(bool);
	bool MustBeInPlaylist();
public:
	void SetUpdateFrame(bool);
	void SetHasLoopedPriv(bool);
	void SetOnEventLoadCalled(bool);
	void SetLockRoot(bool);
	void SetLoadedSeparately(bool);
	void SetOnLoadReqd(bool);
	bool IsUpdateFrame();
	bool IsOnEventLoadCalled();
	bool IsLockRoot();
	bool IsLoadedSeparately();
	bool IsOnLoadReqd();
	virtual void CloneInternalData(const Scaleform::GFx::InteractiveObject *);
	void SetDirtyFlag();
	const Scaleform::GFx::Bool3W GetFocusEnabledFlag();
	void SetFocusEnabledFlag(bool);
	void UndefineFocusEnabledFlag();
	enum MouseState
	{
		UP = 0,
		DOWN = 1,
		OVER = 2,
	};
	Scaleform::GFx::Sprite::MouseState MouseStatePriv; // 0x13C
	Sprite(const Scaleform::GFx::Sprite &);
	Sprite(Scaleform::GFx::TimelineDef *, Scaleform::GFx::MovieDefImpl *, Scaleform::GFx::ASMovieRootBase *, Scaleform::GFx::InteractiveObject *, Scaleform::GFx::ResourceId, bool);
	virtual ~Sprite();
	virtual void AdvanceFrame(bool, float);
	virtual Scaleform::GFx::CharacterDef * GetCharacterDef();
	virtual Scaleform::Render::Rect<float> GetBounds(const Scaleform::Render::Matrix2x4<float> &);
	bool HasDrawingContext();
	virtual Scaleform::GFx::DrawingContext * GetDrawingContext();
	virtual Scaleform::Render::Rect<float> GetRectBounds(const Scaleform::Render::Matrix2x4<float> &);
	virtual Scaleform::GFx::DisplayObjectBase::TopMostResult GetTopMostMouseEntity(const Scaleform::Render::Point<float> &, Scaleform::GFx::DisplayObjectBase::TopMostDescr *);
	virtual Scaleform::GFx::InteractiveObject * GetTopParent(bool);
	virtual Scaleform::Render::TreeContainer * GetRenderContainer();
	virtual Scaleform::GFx::CharacterDef::CharacterDefType GetType();
	virtual bool PointTestLocal(const Scaleform::Render::Point<float> &, unsigned char);
	void SetName(const Scaleform::GFx::ASString &);
	virtual Scaleform::Render::Rect<float> GetFocusRect();
	virtual void ExecuteFrame0Events();
	virtual void ForceShutdown();
	virtual bool HasLooped();
	virtual bool IsFocusEnabled(Scaleform::GFx::FocusMovedType);
	virtual bool OnMouseEvent(const Scaleform::GFx::EventId &);
	virtual bool OnEvent(const Scaleform::GFx::EventId &);
	virtual void OnEventUnload();
	virtual void OnGettingKeyboardFocus(unsigned long, Scaleform::GFx::FocusMovedType);
	virtual bool OnKeyEvent(const Scaleform::GFx::EventId &, long *);
	virtual bool OnLosingKeyboardFocus(Scaleform::GFx::InteractiveObject *, unsigned long, Scaleform::GFx::FocusMovedType);
	virtual bool OnUnloading();
	virtual Scaleform::GFx::DisplayObjectBase * AddDisplayObject(const Scaleform::GFx::CharPosInfo &, const Scaleform::GFx::ASString &, const Scaleform::ArrayLH<Scaleform::GFx::SwfEvent *,260,Scaleform::ArrayDefaultPolicy> *, const void *, unsigned long, unsigned long, Scaleform::GFx::CharacterCreateInfo *, Scaleform::GFx::InteractiveObject *);
	virtual void CreateAndReplaceDisplayObject(const Scaleform::GFx::CharPosInfo &, const Scaleform::GFx::ASString &, Scaleform::GFx::DisplayObjectBase * *);
	virtual long CheckAdvanceStatus(bool);
	void DefaultOnEventLoad();
	void ExecuteFrameTags(unsigned long);
	void ExecuteInitActionFrameTags(unsigned long);
	virtual void ExecuteImportedInitActions(Scaleform::GFx::MovieDef *);
	virtual unsigned long GetCurrentFrame();
	unsigned long GetFrameCount();
	unsigned long GetBytesLoaded();
	virtual Scaleform::GFx::Sprite * GetHitArea();
	virtual Scaleform::GFx::Sprite * GetHitAreaHolder();
	Scaleform::GFx::CharacterHandle * GetHitAreaHandle();
	long GetHitAreaIndex();
	virtual unsigned long GetLoadingFrame();
	void GetTextSnapshot(Scaleform::GFx::StaticTextSnapshotData *);
	virtual bool GetLabeledFrame(const char *, unsigned long *, bool);
	virtual Scaleform::GFx::PlayState GetPlayState();
	Scaleform::GFx::SpriteDef * GetSpriteDef();
	Scaleform::GFx::TimelineDef * GetDef();
	Scaleform::GFx::DisplayObject * GetDisplayObjectByName(const Scaleform::GFx::ASString &, bool);
	virtual void GotoFrame(unsigned long);
	bool GotoLabeledFrame(const char *, long);
	void IncrementFrameAndCheckForLoop();
	bool IsLevelMovie();
	long GetLevel();
	void OnEventXmlsocketOnxml();
	void OnEventIntervalTimer();
	void OnEventLoadProgress();
	void OnIntervalTimer(void *);
	virtual void PropagateNoAdvanceGlobalFlag();
	virtual void PropagateNoAdvanceLocalFlag();
	virtual void Restart();
	void SetHitAreaHolder(Scaleform::GFx::Sprite *);
	void SetHitArea(Scaleform::GFx::Sprite *);
	virtual void SetPause(bool);
	virtual void SetPlayState(Scaleform::GFx::PlayState);
	void SetRootNodeLoadingStat(unsigned long, unsigned long);
	virtual void SetVisible(bool);
	void SetIMECandidateListFont(Scaleform::GFx::FontHandle *);
	void SetIMECandidateListFont(Scaleform::GFx::FontResource *);
	bool SwapDepths(long, long, unsigned long);
	long Transition(long, long);
	Scaleform::MemoryHeap * GetMovieHeap();
private:
	const Scaleform::GFx::AvmSpriteBase * GetAvmSprite();
	Scaleform::GFx::AvmSpriteBase * GetAvmSprite();
public:
	Scaleform::GFx::Sprite & operator=(const Scaleform::GFx::Sprite &);
};
class Scaleform::Ptr<Scaleform::GFx::TimelineDef>
{
protected:
	Scaleform::GFx::TimelineDef * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::TimelineDef>(const Scaleform::Ptr<Scaleform::GFx::TimelineDef> &);
	Ptr<Scaleform::GFx::TimelineDef>(Scaleform::GFx::TimelineDef *);
	Ptr<Scaleform::GFx::TimelineDef>(Scaleform::Ptr<Scaleform::GFx::TimelineDef> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::TimelineDef>(Scaleform::Pickable<Scaleform::GFx::TimelineDef>);
	Ptr<Scaleform::GFx::TimelineDef>(Scaleform::GFx::TimelineDef &);
	Ptr<Scaleform::GFx::TimelineDef>();
	~Ptr<Scaleform::GFx::TimelineDef>();
	bool operator==(Scaleform::GFx::TimelineDef *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::TimelineDef> &);
	bool operator!=(Scaleform::GFx::TimelineDef *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::TimelineDef> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::TimelineDef> &);
	Scaleform::Ptr<Scaleform::GFx::TimelineDef> & operator=(Scaleform::Pickable<Scaleform::GFx::TimelineDef>);
	const Scaleform::Ptr<Scaleform::GFx::TimelineDef> & operator=(Scaleform::GFx::TimelineDef &);
	const Scaleform::Ptr<Scaleform::GFx::TimelineDef> & operator=(Scaleform::GFx::TimelineDef *);
	const Scaleform::Ptr<Scaleform::GFx::TimelineDef> & operator=(const Scaleform::Ptr<Scaleform::GFx::TimelineDef> &);
	Scaleform::Ptr<Scaleform::GFx::TimelineDef> & SetPtr(Scaleform::Pickable<Scaleform::GFx::TimelineDef>);
	Scaleform::Ptr<Scaleform::GFx::TimelineDef> & SetPtr(Scaleform::GFx::TimelineDef &);
	Scaleform::Ptr<Scaleform::GFx::TimelineDef> & SetPtr(Scaleform::GFx::TimelineDef *);
	Scaleform::Ptr<Scaleform::GFx::TimelineDef> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::TimelineDef> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::TimelineDef * & GetRawRef();
	Scaleform::GFx::TimelineDef * GetPtr();
	Scaleform::GFx::TimelineDef & operator*();
	Scaleform::GFx::TimelineDef * operator->();
	Scaleform::GFx::TimelineDef * operator class Scaleform::GFx::TimelineDef *();
	Scaleform::Ptr<Scaleform::GFx::TimelineDef> & Pick(Scaleform::GFx::TimelineDef *);
	Scaleform::Ptr<Scaleform::GFx::TimelineDef> & Pick(Scaleform::Pickable<Scaleform::GFx::TimelineDef>);
	Scaleform::Ptr<Scaleform::GFx::TimelineDef> & Pick(Scaleform::Ptr<Scaleform::GFx::TimelineDef> &);
};
Scaleform::GFx::CharacterDef * Scaleform::GFx::Sprite::GetCharacterDef(); // 0x14035EAF0
Scaleform::GFx::CharacterDef::CharacterDefType Scaleform::GFx::Sprite::GetType(); // 0x1400BBAA0
bool Scaleform::GFx::Sprite::HasLooped(); // 0x14035F440
unsigned long Scaleform::GFx::Sprite::GetCurrentFrame(); // 0x14035EB00
Scaleform::GFx::Sprite * Scaleform::GFx::Sprite::GetHitAreaHolder(); // 0x14035ED60
bool Scaleform::GFx::Sprite::GetLabeledFrame(const char * label, unsigned long * frameNumber, bool translateNumbers); // 0x14035ED70
Scaleform::GFx::PlayState Scaleform::GFx::Sprite::GetPlayState(); // 0x14035EDE0