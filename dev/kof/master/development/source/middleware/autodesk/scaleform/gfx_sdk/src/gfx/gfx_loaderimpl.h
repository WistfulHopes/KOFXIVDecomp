#pragma once

class Scaleform::GFx::ExporterInfoImpl
{
private:
	Scaleform::GFx::ExporterInfo SI; // 0x0
	Scaleform::String Prefix; // 0x20
	Scaleform::String SWFName; // 0x28
public:
	Scaleform::Array<unsigned long,2,Scaleform::ArrayDefaultPolicy> CodeOffsets; // 0x30
	ExporterInfoImpl(const Scaleform::GFx::ExporterInfoImpl &);
	ExporterInfoImpl();
	const Scaleform::GFx::ExporterInfoImpl & operator=(const Scaleform::GFx::ExporterInfoImpl &);
	void SetData(unsigned short, Scaleform::GFx::FileTypeConstants::FileFormatType, const char *, const char *, unsigned long, const Scaleform::Array<unsigned long,2,Scaleform::ArrayDefaultPolicy> *);
	const Scaleform::GFx::ExporterInfo * GetExporterInfo();
	void ReadExporterInfoTag(Scaleform::GFx::Stream *, Scaleform::GFx::TagType);
	~ExporterInfoImpl();
};
class Scaleform::Array<unsigned long,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<unsigned long,Scaleform::AllocatorGH<unsigned long,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef unsigned long ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<unsigned long,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<unsigned long,2,Scaleform::ArrayDefaultPolicy> &);
	Array<unsigned long,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<unsigned long,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<unsigned long,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<unsigned long,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<unsigned long,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<unsigned long,2,Scaleform::ArrayDefaultPolicy>();
};
struct Scaleform::GFx::MovieHeaderData
{
	unsigned long FileLength; // 0x0
	long Version; // 0x4
	Scaleform::Render::Rect<float> FrameRect; // 0x10
	float FPS; // 0x20
	unsigned long FrameCount; // 0x24
	unsigned long SWFFlags; // 0x28
	Scaleform::GFx::ExporterInfoImpl mExporterInfo; // 0x30
	MovieHeaderData(Scaleform::GFx::MovieHeaderData &);
	MovieHeaderData(const Scaleform::GFx::MovieHeaderData &);
	MovieHeaderData();
	void GetMovieInfo(Scaleform::GFx::MovieInfo *);
	~MovieHeaderData();
	Scaleform::GFx::MovieHeaderData & operator=(Scaleform::GFx::MovieHeaderData &);
	Scaleform::GFx::MovieHeaderData & operator=(const Scaleform::GFx::MovieHeaderData &);
};
Scaleform::GFx::MovieHeaderData::MovieHeaderData(); // 0x14030BC70
struct Scaleform::GFx::SWFProcessInfo
{
	Scaleform::GFx::Stream Stream; // 0x0
	unsigned long FileStartPos; // 0x270
	unsigned long FileEndPos; // 0x274
	unsigned long NextActionBlock; // 0x278
	Scaleform::GFx::MovieHeaderData Header; // 0x280
	unsigned short FileAttributes; // 0x300
	SWFProcessInfo(Scaleform::GFx::SWFProcessInfo &);
	SWFProcessInfo(const Scaleform::GFx::SWFProcessInfo &);
	SWFProcessInfo(Scaleform::MemoryHeap *);
	bool Initialize(Scaleform::File *, Scaleform::GFx::LogState *, Scaleform::GFx::ZlibSupportBase *, Scaleform::GFx::ParseControl *, bool);
	void ShutDown();
	~SWFProcessInfo();
	Scaleform::GFx::SWFProcessInfo & operator=(Scaleform::GFx::SWFProcessInfo &);
	Scaleform::GFx::SWFProcessInfo & operator=(const Scaleform::GFx::SWFProcessInfo &);
};
class Scaleform::GFx::StateBagImpl :
	Scaleform::RefCountBase<Scaleform::GFx::StateBagImpl,2>,
	Scaleform::GFx::StateBag,
	Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl>
{
protected:
	Scaleform::Ptr<Scaleform::GFx::StateBagImpl> pDelegate; // 0x20
	struct StatePtr;
	struct StatePtrHashOp;
	class StateHash;
	Scaleform::HashSet<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::AllocatorGH<Scaleform::GFx::StateBagImpl::StatePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp> > States; // 0x28
	Scaleform::Lock StateLock; // 0x30
public:
	StateBagImpl(const Scaleform::GFx::StateBagImpl &);
	StateBagImpl(Scaleform::GFx::StateBagImpl *);
	virtual ~StateBagImpl();
	void SetDelegate(Scaleform::GFx::StateBagImpl *);
	Scaleform::GFx::StateBagImpl * GetDelegate();
	void CopyStatesFrom(Scaleform::GFx::StateBagImpl *);
	virtual void SetState(Scaleform::GFx::State::StateType, Scaleform::GFx::State *);
	virtual Scaleform::GFx::State * GetStateAddRef(Scaleform::GFx::State::StateType);
	virtual void GetStatesAddRef(Scaleform::GFx::State * *, const Scaleform::GFx::State::StateType *, unsigned long);
	Scaleform::GFx::StateBagImpl & operator=(const Scaleform::GFx::StateBagImpl &);
};
class Scaleform::RefCountBase<Scaleform::GFx::StateBagImpl,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::GFx::StateBagImpl,2>(Scaleform::RefCountBase<Scaleform::GFx::StateBagImpl,2> &);
	RefCountBase<Scaleform::GFx::StateBagImpl,2>(const Scaleform::RefCountBase<Scaleform::GFx::StateBagImpl,2> &);
	RefCountBase<Scaleform::GFx::StateBagImpl,2>();
	virtual ~RefCountBase<Scaleform::GFx::StateBagImpl,2>();
	Scaleform::RefCountBase<Scaleform::GFx::StateBagImpl,2> & operator=(Scaleform::RefCountBase<Scaleform::GFx::StateBagImpl,2> &);
	Scaleform::RefCountBase<Scaleform::GFx::StateBagImpl,2> & operator=(const Scaleform::RefCountBase<Scaleform::GFx::StateBagImpl,2> &);
};
class Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl>
{
public:
	~LogBase<Scaleform::GFx::StateBagImpl>();
protected:
	bool P_IsVerboseParse();
	bool P_IsVerboseParseShape();
	bool P_IsVerboseParseMorphShape();
	bool P_IsVerboseParseAction();
	bool P_IsVerboseAction();
	bool P_IsVerboseActionErrors();
	bool IsVerboseActionErrors();
public:
	bool IsLogNotNull();
	void LogError(const char *, ...);
	void LogWarning(const char *, ...);
	void LogMessage(const char *, ...);
	void LogParse(const char *, ...);
	void LogParseShape(const char *, ...);
	void LogParseMorphShape(const char *, ...);
	void LogParseAction(const char *, ...);
	void LogAction(const char *, ...);
	void LogScriptError(const char *, ...);
	void LogScriptWarning(const char *, ...);
	void LogScriptMessage(const char *, ...);
	LogBase<Scaleform::GFx::StateBagImpl>(const Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl> &);
	LogBase<Scaleform::GFx::StateBagImpl>();
	Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl> & operator=(const Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl> &);
};
class Scaleform::Ptr<Scaleform::GFx::StateBagImpl>
{
protected:
	Scaleform::GFx::StateBagImpl * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::StateBagImpl>(const Scaleform::Ptr<Scaleform::GFx::StateBagImpl> &);
	Ptr<Scaleform::GFx::StateBagImpl>(Scaleform::GFx::StateBagImpl *);
	Ptr<Scaleform::GFx::StateBagImpl>(Scaleform::Ptr<Scaleform::GFx::StateBagImpl> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::StateBagImpl>(Scaleform::Pickable<Scaleform::GFx::StateBagImpl>);
	Ptr<Scaleform::GFx::StateBagImpl>(Scaleform::GFx::StateBagImpl &);
	Ptr<Scaleform::GFx::StateBagImpl>();
	~Ptr<Scaleform::GFx::StateBagImpl>();
	bool operator==(Scaleform::GFx::StateBagImpl *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::StateBagImpl> &);
	bool operator!=(Scaleform::GFx::StateBagImpl *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::StateBagImpl> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::StateBagImpl> &);
	Scaleform::Ptr<Scaleform::GFx::StateBagImpl> & operator=(Scaleform::Pickable<Scaleform::GFx::StateBagImpl>);
	const Scaleform::Ptr<Scaleform::GFx::StateBagImpl> & operator=(Scaleform::GFx::StateBagImpl &);
	const Scaleform::Ptr<Scaleform::GFx::StateBagImpl> & operator=(Scaleform::GFx::StateBagImpl *);
	const Scaleform::Ptr<Scaleform::GFx::StateBagImpl> & operator=(const Scaleform::Ptr<Scaleform::GFx::StateBagImpl> &);
	Scaleform::Ptr<Scaleform::GFx::StateBagImpl> & SetPtr(Scaleform::Pickable<Scaleform::GFx::StateBagImpl>);
	Scaleform::Ptr<Scaleform::GFx::StateBagImpl> & SetPtr(Scaleform::GFx::StateBagImpl &);
	Scaleform::Ptr<Scaleform::GFx::StateBagImpl> & SetPtr(Scaleform::GFx::StateBagImpl *);
	Scaleform::Ptr<Scaleform::GFx::StateBagImpl> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::StateBagImpl> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::StateBagImpl * & GetRawRef();
	Scaleform::GFx::StateBagImpl * GetPtr();
	Scaleform::GFx::StateBagImpl & operator*();
	Scaleform::GFx::StateBagImpl * operator->();
	Scaleform::GFx::StateBagImpl * operator class Scaleform::GFx::StateBagImpl *();
	Scaleform::Ptr<Scaleform::GFx::StateBagImpl> & Pick(Scaleform::GFx::StateBagImpl *);
	Scaleform::Ptr<Scaleform::GFx::StateBagImpl> & Pick(Scaleform::Pickable<Scaleform::GFx::StateBagImpl>);
	Scaleform::Ptr<Scaleform::GFx::StateBagImpl> & Pick(Scaleform::Ptr<Scaleform::GFx::StateBagImpl> &);
};
struct Scaleform::GFx::StateBagImpl::StatePtr
{
	Scaleform::Ptr<Scaleform::GFx::State> pState; // 0x0
	StatePtr(const Scaleform::GFx::StateBagImpl::StatePtr &);
	StatePtr(const Scaleform::Ptr<Scaleform::GFx::State> &);
	StatePtr(Scaleform::GFx::State *);
	StatePtr();
	bool operator==(const Scaleform::GFx::StateBagImpl::StatePtr &);
	bool operator==(Scaleform::GFx::State::StateType);
	bool operator!=(const Scaleform::GFx::StateBagImpl::StatePtr &);
	bool operator!=(Scaleform::GFx::State::StateType);
	~StatePtr();
	Scaleform::GFx::StateBagImpl::StatePtr & operator=(const Scaleform::GFx::StateBagImpl::StatePtr &);
};
class Scaleform::Ptr<Scaleform::GFx::State>
{
protected:
	Scaleform::GFx::State * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::State>(const Scaleform::Ptr<Scaleform::GFx::State> &);
	Ptr<Scaleform::GFx::State>(Scaleform::GFx::State *);
	Ptr<Scaleform::GFx::State>(Scaleform::Ptr<Scaleform::GFx::State> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::State>(Scaleform::Pickable<Scaleform::GFx::State>);
	Ptr<Scaleform::GFx::State>(Scaleform::GFx::State &);
	Ptr<Scaleform::GFx::State>();
	~Ptr<Scaleform::GFx::State>();
	bool operator==(Scaleform::GFx::State *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::State> &);
	bool operator!=(Scaleform::GFx::State *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::State> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::State> &);
	Scaleform::Ptr<Scaleform::GFx::State> & operator=(Scaleform::Pickable<Scaleform::GFx::State>);
	const Scaleform::Ptr<Scaleform::GFx::State> & operator=(Scaleform::GFx::State &);
	const Scaleform::Ptr<Scaleform::GFx::State> & operator=(Scaleform::GFx::State *);
	const Scaleform::Ptr<Scaleform::GFx::State> & operator=(const Scaleform::Ptr<Scaleform::GFx::State> &);
	Scaleform::Ptr<Scaleform::GFx::State> & SetPtr(Scaleform::Pickable<Scaleform::GFx::State>);
	Scaleform::Ptr<Scaleform::GFx::State> & SetPtr(Scaleform::GFx::State &);
	Scaleform::Ptr<Scaleform::GFx::State> & SetPtr(Scaleform::GFx::State *);
	Scaleform::Ptr<Scaleform::GFx::State> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::State> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::State * & GetRawRef();
	Scaleform::GFx::State * GetPtr();
	Scaleform::GFx::State & operator*();
	Scaleform::GFx::State * operator->();
	Scaleform::GFx::State * operator class Scaleform::GFx::State *();
	Scaleform::Ptr<Scaleform::GFx::State> & Pick(Scaleform::GFx::State *);
	Scaleform::Ptr<Scaleform::GFx::State> & Pick(Scaleform::Pickable<Scaleform::GFx::State>);
	Scaleform::Ptr<Scaleform::GFx::State> & Pick(Scaleform::Ptr<Scaleform::GFx::State> &);
};
struct Scaleform::GFx::StateBagImpl::StatePtrHashOp
{
	unsigned long long operator()(Scaleform::GFx::State::StateType);
	unsigned long long operator()(const Scaleform::GFx::State *);
	unsigned long long operator()(const Scaleform::Ptr<Scaleform::GFx::State> &);
	unsigned long long operator()(const Scaleform::GFx::StateBagImpl::StatePtr &);
};
class Scaleform::HashSet<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::AllocatorGH<Scaleform::GFx::StateBagImpl::StatePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp> > :
	Scaleform::HashSetBase<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::AllocatorGH<Scaleform::GFx::StateBagImpl::StatePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp> >
{
	class BaseType;
	class SelfType;
	struct ValueType;
public:
	HashSet<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::AllocatorGH<Scaleform::GFx::StateBagImpl::StatePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBag(const Scaleform::HashSet<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::AllocatorGH<Scaleform::GFx::StateBagImpl::StatePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp> > &);
	HashSet<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::AllocatorGH<Scaleform::GFx::StateBagImpl::StatePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBag(void *, long);
	HashSet<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::AllocatorGH<Scaleform::GFx::StateBagImpl::StatePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBag(void *);
	HashSet<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::AllocatorGH<Scaleform::GFx::StateBagImpl::StatePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBag(long);
	HashSet<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::AllocatorGH<Scaleform::GFx::StateBagImpl::StatePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBag();
	~HashSet<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::AllocatorGH<Scaleform::GFx::StateBagImpl::StatePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBa();
	void operator=(const Scaleform::HashSet<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::GFx::StateBagImpl::StatePtrHashOp,Scaleform::AllocatorGH<Scaleform::GFx::StateBagImpl::StatePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::StateBagImpl::StatePtr,Scaleform::GFx::StateBagImpl::StatePtrHashOp> > &);
	void CheckExpand();
	void Resize(unsigned long long);
	void SetCapacity(unsigned long long);
};
Scaleform::GFx::StateBagImpl::StateBagImpl(Scaleform::GFx::StateBagImpl * pdelegate); // 0x1402F1040
Scaleform::GFx::StateBagImpl::~StateBagImpl(); // 0x1402DE120
void Scaleform::GFx::StateBagImpl::SetState(Scaleform::GFx::State::StateType state, Scaleform::GFx::State * pstate); // 0x1402EABD0
Scaleform::GFx::State * Scaleform::GFx::StateBagImpl::GetStateAddRef(Scaleform::GFx::State::StateType state); // 0x1402E3020
void Scaleform::GFx::StateBagImpl::GetStatesAddRef(Scaleform::GFx::State * * pstateList, const Scaleform::GFx::State::StateType * pstates, unsigned long count); // 0x1402E3120
class Scaleform::GFx::LoaderTask :
	Scaleform::GFx::Task
{
protected:
	Scaleform::Ptr<Scaleform::GFx::LoadStates> pLoadStates; // 0x18
public:
	LoaderTask(const Scaleform::GFx::LoaderTask &);
	LoaderTask(Scaleform::GFx::LoadStates *, Scaleform::GFx::Task::TaskId);
	virtual ~LoaderTask();
	Scaleform::GFx::LoaderTask & operator=(const Scaleform::GFx::LoaderTask &);
};
class Scaleform::Ptr<Scaleform::GFx::LoadStates>
{
protected:
	Scaleform::GFx::LoadStates * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::LoadStates>(const Scaleform::Ptr<Scaleform::GFx::LoadStates> &);
	Ptr<Scaleform::GFx::LoadStates>(Scaleform::GFx::LoadStates *);
	Ptr<Scaleform::GFx::LoadStates>(Scaleform::Ptr<Scaleform::GFx::LoadStates> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::LoadStates>(Scaleform::Pickable<Scaleform::GFx::LoadStates>);
	Ptr<Scaleform::GFx::LoadStates>(Scaleform::GFx::LoadStates &);
	Ptr<Scaleform::GFx::LoadStates>();
	~Ptr<Scaleform::GFx::LoadStates>();
	bool operator==(Scaleform::GFx::LoadStates *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::LoadStates> &);
	bool operator!=(Scaleform::GFx::LoadStates *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::LoadStates> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::LoadStates> &);
	Scaleform::Ptr<Scaleform::GFx::LoadStates> & operator=(Scaleform::Pickable<Scaleform::GFx::LoadStates>);
	const Scaleform::Ptr<Scaleform::GFx::LoadStates> & operator=(Scaleform::GFx::LoadStates &);
	const Scaleform::Ptr<Scaleform::GFx::LoadStates> & operator=(Scaleform::GFx::LoadStates *);
	const Scaleform::Ptr<Scaleform::GFx::LoadStates> & operator=(const Scaleform::Ptr<Scaleform::GFx::LoadStates> &);
	Scaleform::Ptr<Scaleform::GFx::LoadStates> & SetPtr(Scaleform::Pickable<Scaleform::GFx::LoadStates>);
	Scaleform::Ptr<Scaleform::GFx::LoadStates> & SetPtr(Scaleform::GFx::LoadStates &);
	Scaleform::Ptr<Scaleform::GFx::LoadStates> & SetPtr(Scaleform::GFx::LoadStates *);
	Scaleform::Ptr<Scaleform::GFx::LoadStates> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::LoadStates> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::LoadStates * & GetRawRef();
	Scaleform::GFx::LoadStates * GetPtr();
	Scaleform::GFx::LoadStates & operator*();
	Scaleform::GFx::LoadStates * operator->();
	Scaleform::GFx::LoadStates * operator class Scaleform::GFx::LoadStates *();
	Scaleform::Ptr<Scaleform::GFx::LoadStates> & Pick(Scaleform::GFx::LoadStates *);
	Scaleform::Ptr<Scaleform::GFx::LoadStates> & Pick(Scaleform::Pickable<Scaleform::GFx::LoadStates>);
	Scaleform::Ptr<Scaleform::GFx::LoadStates> & Pick(Scaleform::Ptr<Scaleform::GFx::LoadStates> &);
};
struct Scaleform::GFx::LoadProcessNode :
	Scaleform::ListNode<Scaleform::GFx::LoadProcessNode>,
	Scaleform::NewOverrideBase<2>
{
	LoadProcessNode(Scaleform::GFx::LoaderTask *);
	Scaleform::GFx::LoaderTask * pTask; // 0x10
};
struct Scaleform::ListNode<Scaleform::GFx::LoadProcessNode>
{
	Scaleform::GFx::LoadProcessNode * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::GFx::LoadProcessNode * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::GFx::LoadProcessNode>();
	Scaleform::GFx::LoadProcessNode * GetPrev();
	Scaleform::GFx::LoadProcessNode * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::GFx::LoadProcessNode *);
	void InsertNodeAfter(Scaleform::GFx::LoadProcessNode *);
	void InsertNodeBefore(Scaleform::GFx::LoadProcessNode *);
};
class Scaleform::GFx::LoaderImpl :
	Scaleform::RefCountBase<Scaleform::GFx::LoaderImpl,2>,
	Scaleform::GFx::StateBag,
	Scaleform::GFx::LogBase<Scaleform::GFx::LoaderImpl>
{
	struct LoadStackItem;
private:
	Scaleform::Ptr<Scaleform::GFx::StateBagImpl> pStateBag; // 0x20
	Scaleform::Ptr<Scaleform::GFx::ResourceWeakLib> pWeakResourceLib; // 0x28
	Scaleform::List<Scaleform::GFx::LoadProcessNode,Scaleform::GFx::LoadProcessNode,Scaleform::ListNode<Scaleform::GFx::LoadProcessNode> > LoadProcesses; // 0x30
	Scaleform::Lock LoadProcessesLock; // 0x40
	bool DebugHeap; // 0x70
	class HttpFileCache;
	Scaleform::StringHashLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > HttpFilesOpened; // 0x78
	virtual Scaleform::GFx::StateBag * GetStateBagImpl();
	static Scaleform::GFx::MovieDefImpl * CreateMovieDefImpl(Scaleform::GFx::LoadStates *, Scaleform::GFx::MovieDataDef *, unsigned long, Scaleform::GFx::MovieBindProcess * *, bool, Scaleform::GFx::LoaderImpl::LoadStackItem *, unsigned long long);
	LoaderImpl(const Scaleform::GFx::LoaderImpl &);
public:
	LoaderImpl(Scaleform::GFx::StateBag *, Scaleform::GFx::ResourceLib *, bool);
	LoaderImpl(Scaleform::GFx::LoaderImpl *);
	LoaderImpl(Scaleform::GFx::ResourceLib *, bool);
	virtual ~LoaderImpl();
	void SetWeakResourceLib(Scaleform::GFx::ResourceWeakLib *);
	bool GetMovieInfo(const char *, Scaleform::GFx::MovieInfo *, bool, unsigned long);
	bool IsMovieLoaded(const char *, unsigned long);
	Scaleform::GFx::MovieDef * CreateMovie(const char *, unsigned long, unsigned long long);
	Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> * ReadProtocolFile(const Scaleform::String &);
	void LoadingDone(const char *);
	static Scaleform::GFx::MovieDefImpl * CreateMovie_LoadState(Scaleform::GFx::LoadStates *, const Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> &, unsigned long, Scaleform::GFx::LoaderImpl::LoadStackItem *, unsigned long long);
	static Scaleform::GFx::MovieDefImpl * CreateMovie_LoadState(Scaleform::GFx::LoadStates *, Scaleform::GFx::MovieDataDef *, unsigned long, unsigned long long);
	static Scaleform::GFx::MovieDefImpl * CreateMovie_LoadState(Scaleform::GFx::LoadStates *, const Scaleform::GFx::URLBuilder::LocationInfo &, unsigned long, Scaleform::GFx::LoaderImpl::LoadStackItem *, unsigned long long);
	static Scaleform::GFx::MovieDefImpl * BindMovieAndWait(Scaleform::GFx::MovieDefImpl *, Scaleform::GFx::MovieBindProcess *, Scaleform::GFx::LoadStates *, unsigned long, Scaleform::GFx::LoaderImpl::LoadStackItem *);
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
	static Scaleform::GFx::FileTypeConstants::FileFormatType DetectFileFormat(Scaleform::File *);
	typedef void(*LoaderFunction)(Scaleform::GFx::LoadProcess *, const Scaleform::GFx::TagInfo &);
	static bool GetTagLoader(unsigned long, void(*)(Scaleform::GFx::LoadProcess *, const Scaleform::GFx::TagInfo &) *);
	bool CheckTagLoader(unsigned long);
	Scaleform::GFx::ResourceWeakLib * GetWeakLib();
	void RegisterLoadProcess(Scaleform::GFx::LoaderTask *);
	void UnRegisterLoadProcess(Scaleform::GFx::LoaderTask *);
	void CancelLoading();
	static Scaleform::Render::ImageSource * LoadBuiltinImage(Scaleform::File *, Scaleform::GFx::FileTypeConstants::FileFormatType, Scaleform::GFx::Resource::ResourceUse, Scaleform::GFx::LoadStates *, Scaleform::Log *, Scaleform::MemoryHeap *);
	static Scaleform::Render::ImageFileFormat FileFormat2RenderImageFile(Scaleform::GFx::FileTypeConstants::FileFormatType);
	static bool IsProtocolImage(const Scaleform::String &, bool *, bool *);
private:
	Scaleform::GFx::LoaderImpl & operator=(const Scaleform::GFx::LoaderImpl &);
	static Scaleform::Lock HttpLock; // 0xFFFFFFFFFFFFFFFF
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::LogBase<Scaleform::GFx::LoaderImpl>
{
public:
	~LogBase<Scaleform::GFx::LoaderImpl>();
protected:
	bool P_IsVerboseParse();
	bool P_IsVerboseParseShape();
	bool P_IsVerboseParseMorphShape();
	bool P_IsVerboseParseAction();
	bool P_IsVerboseAction();
	bool P_IsVerboseActionErrors();
	bool IsVerboseActionErrors();
public:
	bool IsLogNotNull();
	void LogError(const char *, ...);
	void LogWarning(const char *, ...);
	void LogMessage(const char *, ...);
	void LogParse(const char *, ...);
	void LogParseShape(const char *, ...);
	void LogParseMorphShape(const char *, ...);
	void LogParseAction(const char *, ...);
	void LogAction(const char *, ...);
	void LogScriptError(const char *, ...);
	void LogScriptWarning(const char *, ...);
	void LogScriptMessage(const char *, ...);
	LogBase<Scaleform::GFx::LoaderImpl>(const Scaleform::GFx::LogBase<Scaleform::GFx::LoaderImpl> &);
	LogBase<Scaleform::GFx::LoaderImpl>();
	Scaleform::GFx::LogBase<Scaleform::GFx::LoaderImpl> & operator=(const Scaleform::GFx::LogBase<Scaleform::GFx::LoaderImpl> &);
};
class Scaleform::RefCountBase<Scaleform::GFx::LoaderImpl,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::GFx::LoaderImpl,2>(Scaleform::RefCountBase<Scaleform::GFx::LoaderImpl,2> &);
	RefCountBase<Scaleform::GFx::LoaderImpl,2>(const Scaleform::RefCountBase<Scaleform::GFx::LoaderImpl,2> &);
	RefCountBase<Scaleform::GFx::LoaderImpl,2>();
	virtual ~RefCountBase<Scaleform::GFx::LoaderImpl,2>();
	Scaleform::RefCountBase<Scaleform::GFx::LoaderImpl,2> & operator=(Scaleform::RefCountBase<Scaleform::GFx::LoaderImpl,2> &);
	Scaleform::RefCountBase<Scaleform::GFx::LoaderImpl,2> & operator=(const Scaleform::RefCountBase<Scaleform::GFx::LoaderImpl,2> &);
};
struct Scaleform::GFx::LoaderImpl::LoadStackItem
{
	LoadStackItem(Scaleform::GFx::MovieDefImpl *);
	Scaleform::GFx::MovieDefImpl * pDefImpl; // 0x0
	Scaleform::GFx::LoaderImpl::LoadStackItem * pNext; // 0x8
};
class Scaleform::List<Scaleform::GFx::LoadProcessNode,Scaleform::GFx::LoadProcessNode,Scaleform::ListNode<Scaleform::GFx::LoadProcessNode> >
{
	struct ValueType;
private:
	List<Scaleform::GFx::LoadProcessNode,Scaleform::GFx::LoadProcessNode,Scaleform::ListNode<Scaleform::GFx::LoadProcessNode> >(const Scaleform::List<Scaleform::GFx::LoadProcessNode,Scaleform::GFx::LoadProcessNode,Scaleform::ListNode<Scaleform::GFx::LoadProcessNode> > &);
public:
	List<Scaleform::GFx::LoadProcessNode,Scaleform::GFx::LoadProcessNode,Scaleform::ListNode<Scaleform::GFx::LoadProcessNode> >();
	void Clear();
	Scaleform::GFx::LoadProcessNode * GetFirst();
	Scaleform::GFx::LoadProcessNode * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::GFx::LoadProcessNode *);
	bool IsLast(const Scaleform::GFx::LoadProcessNode *);
	bool IsNull(const Scaleform::GFx::LoadProcessNode *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::GFx::LoadProcessNode * GetPrev(const Scaleform::GFx::LoadProcessNode *);
	static Scaleform::GFx::LoadProcessNode * GetNext(const Scaleform::GFx::LoadProcessNode *);
	void PushFront(Scaleform::GFx::LoadProcessNode *);
	void PushBack(Scaleform::GFx::LoadProcessNode *);
	static void Remove(Scaleform::GFx::LoadProcessNode *);
	void BringToFront(Scaleform::GFx::LoadProcessNode *);
	void SendToBack(Scaleform::GFx::LoadProcessNode *);
	void PushListToFront(Scaleform::List<Scaleform::GFx::LoadProcessNode,Scaleform::GFx::LoadProcessNode,Scaleform::ListNode<Scaleform::GFx::LoadProcessNode> > &);
	void PushListToBack(Scaleform::List<Scaleform::GFx::LoadProcessNode,Scaleform::GFx::LoadProcessNode,Scaleform::ListNode<Scaleform::GFx::LoadProcessNode> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::GFx::LoadProcessNode,Scaleform::GFx::LoadProcessNode,Scaleform::ListNode<Scaleform::GFx::LoadProcessNode> > &, Scaleform::GFx::LoadProcessNode *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::GFx::LoadProcessNode,Scaleform::GFx::LoadProcessNode,Scaleform::ListNode<Scaleform::GFx::LoadProcessNode> > &, Scaleform::GFx::LoadProcessNode *);
	void PushListItemsToFront(Scaleform::GFx::LoadProcessNode *, Scaleform::GFx::LoadProcessNode *);
private:
	const Scaleform::List<Scaleform::GFx::LoadProcessNode,Scaleform::GFx::LoadProcessNode,Scaleform::ListNode<Scaleform::GFx::LoadProcessNode> > & operator=(const Scaleform::List<Scaleform::GFx::LoadProcessNode,Scaleform::GFx::LoadProcessNode,Scaleform::ListNode<Scaleform::GFx::LoadProcessNode> > &);
	Scaleform::ListNode<Scaleform::GFx::LoadProcessNode> Root; // 0x0
};
class Scaleform::RefCountBase<Scaleform::GFx::LoaderImpl::HttpFileCache,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::GFx::LoaderImpl::HttpFileCache,2>(Scaleform::RefCountBase<Scaleform::GFx::LoaderImpl::HttpFileCache,2> &);
	RefCountBase<Scaleform::GFx::LoaderImpl::HttpFileCache,2>(const Scaleform::RefCountBase<Scaleform::GFx::LoaderImpl::HttpFileCache,2> &);
	RefCountBase<Scaleform::GFx::LoaderImpl::HttpFileCache,2>();
	virtual ~RefCountBase<Scaleform::GFx::LoaderImpl::HttpFileCache,2>();
	Scaleform::RefCountBase<Scaleform::GFx::LoaderImpl::HttpFileCache,2> & operator=(Scaleform::RefCountBase<Scaleform::GFx::LoaderImpl::HttpFileCache,2> &);
	Scaleform::RefCountBase<Scaleform::GFx::LoaderImpl::HttpFileCache,2> & operator=(const Scaleform::RefCountBase<Scaleform::GFx::LoaderImpl::HttpFileCache,2> &);
};
class Scaleform::GFx::LoaderImpl::HttpFileCache :
	Scaleform::RefCountBase<Scaleform::GFx::LoaderImpl::HttpFileCache,2>
{
public:
	Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> HttpFileBytes; // 0x10
	HttpFileCache(Scaleform::GFx::LoaderImpl::HttpFileCache &);
	HttpFileCache(const Scaleform::GFx::LoaderImpl::HttpFileCache &);
	HttpFileCache();
	virtual ~HttpFileCache();
	Scaleform::GFx::LoaderImpl::HttpFileCache & operator=(Scaleform::GFx::LoaderImpl::HttpFileCache &);
	Scaleform::GFx::LoaderImpl::HttpFileCache & operator=(const Scaleform::GFx::LoaderImpl::HttpFileCache &);
};
class Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>
{
protected:
	Scaleform::GFx::LoaderImpl::HttpFileCache * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>(const Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> &);
	Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>(Scaleform::GFx::LoaderImpl::HttpFileCache *);
	Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>(Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>(Scaleform::Pickable<Scaleform::GFx::LoaderImpl::HttpFileCache>);
	Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>(Scaleform::GFx::LoaderImpl::HttpFileCache &);
	Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>();
	~Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>();
	bool operator==(Scaleform::GFx::LoaderImpl::HttpFileCache *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> &);
	bool operator!=(Scaleform::GFx::LoaderImpl::HttpFileCache *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> &);
	Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> & operator=(Scaleform::Pickable<Scaleform::GFx::LoaderImpl::HttpFileCache>);
	const Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> & operator=(Scaleform::GFx::LoaderImpl::HttpFileCache &);
	const Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> & operator=(Scaleform::GFx::LoaderImpl::HttpFileCache *);
	const Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> & operator=(const Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> &);
	Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> & SetPtr(Scaleform::Pickable<Scaleform::GFx::LoaderImpl::HttpFileCache>);
	Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> & SetPtr(Scaleform::GFx::LoaderImpl::HttpFileCache &);
	Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> & SetPtr(Scaleform::GFx::LoaderImpl::HttpFileCache *);
	Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::LoaderImpl::HttpFileCache * & GetRawRef();
	Scaleform::GFx::LoaderImpl::HttpFileCache * GetPtr();
	Scaleform::GFx::LoaderImpl::HttpFileCache & operator*();
	Scaleform::GFx::LoaderImpl::HttpFileCache * operator->();
	Scaleform::GFx::LoaderImpl::HttpFileCache * operator class Scaleform::GFx::LoaderImpl::HttpFileCache *();
	Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> & Pick(Scaleform::GFx::LoaderImpl::HttpFileCache *);
	Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> & Pick(Scaleform::Pickable<Scaleform::GFx::LoaderImpl::HttpFileCache>);
	Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> & Pick(Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> &);
};
class Scaleform::StringHashLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >
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
	struct Allocator;
	class ValueType;
	class SelfType;
	struct HashNodeF;
	class Container;
	Scaleform::HashSet<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > mHash; // 0x0
	StringHashLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCac(const Scaleform::StringHashLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > &);
	StringHashLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCac(long);
	StringHashLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCac();
	~StringHashLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCa();
	void operator=(const Scaleform::StringHashLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > &);
	void Clear();
	bool IsEmpty();
	void Set(const Scaleform::String &, const Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> &);
	void Add(const Scaleform::String &, const Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> &);
	void Remove(const Scaleform::String &);
	const Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> * Get(const Scaleform::String &);
	Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> * Get(const Scaleform::String &);
	bool Get(const Scaleform::String &, Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> *);
	unsigned long long GetSize();
	void Resize(unsigned long long);
	void SetSapacity(unsigned long long);
	struct ConstIterator;
	struct Iterator;
	Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::ConstIterator Begin();
	Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::Iterator Begin();
	Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::ConstIterator End();
	Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::Iterator End();
	Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::ConstIterator Find(const Scaleform::String &);
	Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::Iterator Find(const Scaleform::String &);
	Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> * GetCaseInsensitive(const Scaleform::String &);
	const Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> * GetCaseInsensitive(const Scaleform::String &);
	bool GetCaseInsensitive(const Scaleform::String &, Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> *);
	Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::Iterator FindCaseInsensitive(const Scaleform::String &);
	void SetCaseInsensitive(const Scaleform::String &, const Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> &);
};
Scaleform::GFx::StateBag * Scaleform::GFx::LoaderImpl::GetStateBagImpl(); // 0x14030DE30
class Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef unsigned char ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy>();
};