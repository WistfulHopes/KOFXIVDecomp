#pragma once

class Scaleform::GFx::AS3::FrameExecSnapshot
{
private:
	Scaleform::ArrayDH<Scaleform::Ptr<Scaleform::GFx::Sprite>,2,Scaleform::ArrayDefaultPolicy> mArray; // 0x0
public:
	FrameExecSnapshot(Scaleform::GFx::AS3::FrameExecSnapshot &);
	FrameExecSnapshot(const Scaleform::GFx::AS3::FrameExecSnapshot &);
	FrameExecSnapshot(Scaleform::MemoryHeap *);
	unsigned long long GetSize();
	Scaleform::GFx::Sprite * operator[](unsigned long long);
	void PushBack(Scaleform::GFx::Sprite *);
	~FrameExecSnapshot();
	Scaleform::GFx::AS3::FrameExecSnapshot & operator=(Scaleform::GFx::AS3::FrameExecSnapshot &);
	Scaleform::GFx::AS3::FrameExecSnapshot & operator=(const Scaleform::GFx::AS3::FrameExecSnapshot &);
};
class Scaleform::Ptr<Scaleform::GFx::Sprite>
{
protected:
	Scaleform::GFx::Sprite * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::Sprite>(const Scaleform::Ptr<Scaleform::GFx::Sprite> &);
	Ptr<Scaleform::GFx::Sprite>(Scaleform::GFx::Sprite *);
	Ptr<Scaleform::GFx::Sprite>(Scaleform::Ptr<Scaleform::GFx::Sprite> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::Sprite>(Scaleform::Pickable<Scaleform::GFx::Sprite>);
	Ptr<Scaleform::GFx::Sprite>(Scaleform::GFx::Sprite &);
	Ptr<Scaleform::GFx::Sprite>();
	~Ptr<Scaleform::GFx::Sprite>();
	bool operator==(Scaleform::GFx::Sprite *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::Sprite> &);
	bool operator!=(Scaleform::GFx::Sprite *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::Sprite> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::Sprite> &);
	Scaleform::Ptr<Scaleform::GFx::Sprite> & operator=(Scaleform::Pickable<Scaleform::GFx::Sprite>);
	const Scaleform::Ptr<Scaleform::GFx::Sprite> & operator=(Scaleform::GFx::Sprite &);
	const Scaleform::Ptr<Scaleform::GFx::Sprite> & operator=(Scaleform::GFx::Sprite *);
	const Scaleform::Ptr<Scaleform::GFx::Sprite> & operator=(const Scaleform::Ptr<Scaleform::GFx::Sprite> &);
	Scaleform::Ptr<Scaleform::GFx::Sprite> & SetPtr(Scaleform::Pickable<Scaleform::GFx::Sprite>);
	Scaleform::Ptr<Scaleform::GFx::Sprite> & SetPtr(Scaleform::GFx::Sprite &);
	Scaleform::Ptr<Scaleform::GFx::Sprite> & SetPtr(Scaleform::GFx::Sprite *);
	Scaleform::Ptr<Scaleform::GFx::Sprite> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::Sprite> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::Sprite * & GetRawRef();
	Scaleform::GFx::Sprite * GetPtr();
	Scaleform::GFx::Sprite & operator*();
	Scaleform::GFx::Sprite * operator->();
	Scaleform::GFx::Sprite * operator class Scaleform::GFx::Sprite *();
	Scaleform::Ptr<Scaleform::GFx::Sprite> & Pick(Scaleform::GFx::Sprite *);
	Scaleform::Ptr<Scaleform::GFx::Sprite> & Pick(Scaleform::Pickable<Scaleform::GFx::Sprite>);
	Scaleform::Ptr<Scaleform::GFx::Sprite> & Pick(Scaleform::Ptr<Scaleform::GFx::Sprite> &);
};
class Scaleform::ArrayDH<Scaleform::Ptr<Scaleform::GFx::Sprite>,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayDataDH<Scaleform::Ptr<Scaleform::GFx::Sprite>,Scaleform::AllocatorDH<Scaleform::Ptr<Scaleform::GFx::Sprite>,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayDH<Scaleform::Ptr<Scaleform::GFx::Sprite>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDH<Scaleform::Ptr<Scaleform::GFx::Sprite>,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayDH<Scaleform::Ptr<Scaleform::GFx::Sprite>,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, const Scaleform::ArrayDefaultPolicy &);
	ArrayDH<Scaleform::Ptr<Scaleform::GFx::Sprite>,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, long);
	ArrayDH<Scaleform::Ptr<Scaleform::GFx::Sprite>,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *);
	const Scaleform::ArrayDH<Scaleform::Ptr<Scaleform::GFx::Sprite>,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayDH<Scaleform::Ptr<Scaleform::GFx::Sprite>,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayDH<Scaleform::Ptr<Scaleform::GFx::Sprite>,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::GFx::AS3::Stage :
	Scaleform::GFx::DisplayObjContainer
{
private:
	Scaleform::Ptr<Scaleform::GFx::DisplayObjContainer> pRoot; // 0x110
	Scaleform::Ptr<Scaleform::GFx::InteractiveObject> FrameCounterObj; // 0x118
	Scaleform::GFx::ASString CurrentStageOrientation; // 0x120
	unsigned long MouseCursorEventCnt; // 0x128
public:
	Stage(const Scaleform::GFx::AS3::Stage &);
	Stage(Scaleform::GFx::MovieDefImpl *, Scaleform::GFx::ASMovieRootBase *, Scaleform::GFx::InteractiveObject *, Scaleform::GFx::ResourceId);
	virtual ~Stage();
	virtual unsigned long GetLoadingFrame();
	virtual bool IsFocusEnabled(Scaleform::GFx::FocusMovedType);
	virtual void ExecuteFrame0Events();
	void ExecuteFrameTags(unsigned long);
	virtual void OnInsertionAsLevel(long);
	virtual unsigned long GetCurrentFrame();
	virtual bool GetLabeledFrame(const char *, unsigned long *, bool);
	virtual const Scaleform::String * GetFrameLabel(unsigned long, unsigned long *);
	virtual void GotoFrame(unsigned long);
	void SetHasMouseCursorEventFlag();
	void ClearHasMouseCursorEventFlag();
	bool HasMouseCursorEvent();
	Scaleform::GFx::DisplayObjContainer * GetRoot();
	void SetRoot(Scaleform::GFx::DisplayObjContainer *);
	virtual void ForceShutdown();
	virtual Scaleform::GFx::InteractiveObject * GetTopParent(bool);
	void QueueFrameActions();
	const Scaleform::GFx::ASString & GetCurrentStageOrientation();
	void SetOrientation(const Scaleform::GFx::ASString &);
protected:
	virtual void PropagateMouseEvent(const Scaleform::GFx::EventId &);
	virtual Scaleform::GFx::ASString CreateNewInstanceName();
public:
	Scaleform::GFx::AS3::Stage & operator=(const Scaleform::GFx::AS3::Stage &);
};
long Scaleform::GFx::AS3::FrameCounter::CheckAdvanceStatus(bool playingNow); // 0x1400482A0
Scaleform::GFx::InteractiveObject * Scaleform::GFx::AS3::Stage::GetTopParent(bool ignoreLockRoot); // 0x14048B9A0
class Scaleform::GFx::AS3::AvmStage :
	Scaleform::GFx::AS3::AvmDisplayObjContainer
{
public:
	AvmStage(const Scaleform::GFx::AS3::AvmStage &);
	AvmStage(Scaleform::GFx::DisplayObjContainer *);
	virtual ~AvmStage();
	virtual void OnEventLoad();
	virtual void OnEventUnload();
	virtual bool OnEvent(const Scaleform::GFx::EventId &);
	virtual const char * GetDefaultASClassName();
	virtual bool IsStage();
	Scaleform::GFx::AS3::AvmStage & operator=(const Scaleform::GFx::AS3::AvmStage &);
};
const char * Scaleform::GFx::AS3::AvmStage::GetDefaultASClassName(); // 0x140484FB0