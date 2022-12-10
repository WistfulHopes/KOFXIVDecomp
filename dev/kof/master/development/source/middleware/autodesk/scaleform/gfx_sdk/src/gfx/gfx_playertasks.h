#pragma once

class Scaleform::GFx::LoadQueueEntry :
	Scaleform::NewOverrideBase<327>
{
private:
	Scaleform::GFx::LoadQueueEntry * pNext; // 0x8
	enum LoadTypeFlags
	{
		LTF_None = 0,
		LTF_UnloadFlag = 1,
		LTF_LevelFlag = 2,
		LTF_VarsFlag = 4,
		LTF_XMLFlag = 8,
		LTF_CSSFlag = 16,
		LTF_BinaryFlag = 32,
	};
	enum LoadType
	{
		LT_LoadMovie = 0,
		LT_UnloadMovie = 1,
		LT_LoadLevel = 2,
		LT_UnloadLevel = 3,
		LT_LoadXML = 8,
		LT_LoadCSS = 16,
		LT_LoadText = 4,
		LT_LoadBinary = 32,
	};
	enum LoadMethod
	{
		LM_None = 0,
		LM_Get = 1,
		LM_Post = 2,
		LM_Put = 3,
		LM_Delete = 4,
	};
public:
	Scaleform::GFx::LoadQueueEntry::LoadType Type; // 0x10
	Scaleform::GFx::LoadQueueEntry::LoadMethod Method; // 0x14
	Scaleform::String URL; // 0x18
	unsigned long EntryTime; // 0x20
	bool QuietOpen; // 0x24
	bool Canceled; // 0x25
	void PConstruct(Scaleform::GFx::LoadQueueEntry::LoadType, const Scaleform::String &, Scaleform::GFx::LoadQueueEntry::LoadMethod, bool);
	LoadQueueEntry(const Scaleform::GFx::LoadQueueEntry &);
	LoadQueueEntry(const Scaleform::String &, Scaleform::GFx::LoadQueueEntry::LoadMethod, bool, bool);
	~LoadQueueEntry();
	Scaleform::GFx::LoadQueueEntry * GetNext();
	Scaleform::GFx::LoadQueueEntry & operator=(const Scaleform::GFx::LoadQueueEntry &);
};
class Scaleform::GFx::LoadQueueEntryMT :
	Scaleform::NewOverrideBase<327>
{
protected:
	Scaleform::GFx::LoadQueueEntryMT * pNext; // 0x8
	Scaleform::GFx::LoadQueueEntryMT * pPrev; // 0x10
	Scaleform::GFx::MovieImpl * pMovieImpl; // 0x18
	Scaleform::GFx::LoadQueueEntry * pQueueEntry; // 0x20
public:
	LoadQueueEntryMT(const Scaleform::GFx::LoadQueueEntryMT &);
	LoadQueueEntryMT(Scaleform::GFx::LoadQueueEntry *, Scaleform::GFx::MovieImpl *);
	~LoadQueueEntryMT();
	void Cancel();
	bool LoadFinished();
	bool IsPreloadingFinished();
	Scaleform::GFx::LoadQueueEntry * GetQueueEntry();
	Scaleform::GFx::LoadQueueEntryMT * GetNext();
	Scaleform::GFx::LoadQueueEntryMT * GetPrev();
	Scaleform::GFx::LoadQueueEntryMT & operator=(const Scaleform::GFx::LoadQueueEntryMT &);
};
bool Scaleform::GFx::LoadQueueEntryMT::IsPreloadingFinished(); // 0x1400B8180
class Scaleform::GFx::MoviePreloadTask :
	Scaleform::GFx::Task
{
public:
	MoviePreloadTask(Scaleform::GFx::MoviePreloadTask &);
	MoviePreloadTask(const Scaleform::GFx::MoviePreloadTask &);
	MoviePreloadTask(Scaleform::GFx::MovieImpl *, const Scaleform::String &, bool, bool);
	virtual void Execute();
	Scaleform::GFx::MovieDefImpl * GetMoiveDefImpl();
	bool IsDone();
private:
	Scaleform::Ptr<Scaleform::GFx::LoadStates> pLoadStates; // 0x18
	unsigned long LoadFlags; // 0x20
	Scaleform::String Level0Path; // 0x28
	Scaleform::String Url; // 0x30
	Scaleform::String UrlStrGfx; // 0x38
	Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> pDefImpl; // 0x40
	volatile unsigned long Done; // 0x48
public:
	virtual ~MoviePreloadTask();
	Scaleform::GFx::MoviePreloadTask & operator=(Scaleform::GFx::MoviePreloadTask &);
	Scaleform::GFx::MoviePreloadTask & operator=(const Scaleform::GFx::MoviePreloadTask &);
};
class Scaleform::GFx::LoadVarsTask :
	Scaleform::GFx::Task
{
public:
	LoadVarsTask(Scaleform::GFx::LoadVarsTask &);
	LoadVarsTask(const Scaleform::GFx::LoadVarsTask &);
	LoadVarsTask(Scaleform::GFx::LoadStates *, const Scaleform::String &, const Scaleform::String &);
	virtual void Execute();
	bool GetData(Scaleform::String *, long *, bool *);
private:
	Scaleform::Ptr<Scaleform::GFx::LoadStates> pLoadStates; // 0x18
	Scaleform::String Level0Path; // 0x20
	Scaleform::String Url; // 0x28
	Scaleform::String Data; // 0x30
	long FileLen; // 0x38
	volatile unsigned long Done; // 0x3C
	bool Succeeded; // 0x40
public:
	virtual ~LoadVarsTask();
	Scaleform::GFx::LoadVarsTask & operator=(Scaleform::GFx::LoadVarsTask &);
	Scaleform::GFx::LoadVarsTask & operator=(const Scaleform::GFx::LoadVarsTask &);
};
class Scaleform::GFx::LoadQueueEntryMT_LoadVars :
	Scaleform::GFx::LoadQueueEntryMT
{
private:
	Scaleform::Ptr<Scaleform::GFx::LoadVarsTask> pTask; // 0x28
	Scaleform::Ptr<Scaleform::GFx::LoadStates> pLoadStates; // 0x30
public:
	LoadQueueEntryMT_LoadVars(const Scaleform::GFx::LoadQueueEntryMT_LoadVars &);
	LoadQueueEntryMT_LoadVars(Scaleform::GFx::LoadQueueEntry *, Scaleform::GFx::MovieImpl *);
	virtual ~LoadQueueEntryMT_LoadVars();
	virtual bool LoadFinished();
	Scaleform::GFx::LoadQueueEntryMT_LoadVars & operator=(const Scaleform::GFx::LoadQueueEntryMT_LoadVars &);
};
class Scaleform::Ptr<Scaleform::GFx::LoadVarsTask>
{
protected:
	Scaleform::GFx::LoadVarsTask * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::LoadVarsTask>(const Scaleform::Ptr<Scaleform::GFx::LoadVarsTask> &);
	Ptr<Scaleform::GFx::LoadVarsTask>(Scaleform::GFx::LoadVarsTask *);
	Ptr<Scaleform::GFx::LoadVarsTask>(Scaleform::Ptr<Scaleform::GFx::LoadVarsTask> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::LoadVarsTask>(Scaleform::Pickable<Scaleform::GFx::LoadVarsTask>);
	Ptr<Scaleform::GFx::LoadVarsTask>(Scaleform::GFx::LoadVarsTask &);
	Ptr<Scaleform::GFx::LoadVarsTask>();
	~Ptr<Scaleform::GFx::LoadVarsTask>();
	bool operator==(Scaleform::GFx::LoadVarsTask *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::LoadVarsTask> &);
	bool operator!=(Scaleform::GFx::LoadVarsTask *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::LoadVarsTask> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::LoadVarsTask> &);
	Scaleform::Ptr<Scaleform::GFx::LoadVarsTask> & operator=(Scaleform::Pickable<Scaleform::GFx::LoadVarsTask>);
	const Scaleform::Ptr<Scaleform::GFx::LoadVarsTask> & operator=(Scaleform::GFx::LoadVarsTask &);
	const Scaleform::Ptr<Scaleform::GFx::LoadVarsTask> & operator=(Scaleform::GFx::LoadVarsTask *);
	const Scaleform::Ptr<Scaleform::GFx::LoadVarsTask> & operator=(const Scaleform::Ptr<Scaleform::GFx::LoadVarsTask> &);
	Scaleform::Ptr<Scaleform::GFx::LoadVarsTask> & SetPtr(Scaleform::Pickable<Scaleform::GFx::LoadVarsTask>);
	Scaleform::Ptr<Scaleform::GFx::LoadVarsTask> & SetPtr(Scaleform::GFx::LoadVarsTask &);
	Scaleform::Ptr<Scaleform::GFx::LoadVarsTask> & SetPtr(Scaleform::GFx::LoadVarsTask *);
	Scaleform::Ptr<Scaleform::GFx::LoadVarsTask> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::LoadVarsTask> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::LoadVarsTask * & GetRawRef();
	Scaleform::GFx::LoadVarsTask * GetPtr();
	Scaleform::GFx::LoadVarsTask & operator*();
	Scaleform::GFx::LoadVarsTask * operator->();
	Scaleform::GFx::LoadVarsTask * operator class Scaleform::GFx::LoadVarsTask *();
	Scaleform::Ptr<Scaleform::GFx::LoadVarsTask> & Pick(Scaleform::GFx::LoadVarsTask *);
	Scaleform::Ptr<Scaleform::GFx::LoadVarsTask> & Pick(Scaleform::Pickable<Scaleform::GFx::LoadVarsTask>);
	Scaleform::Ptr<Scaleform::GFx::LoadVarsTask> & Pick(Scaleform::Ptr<Scaleform::GFx::LoadVarsTask> &);
};
class Scaleform::GFx::LoadBinaryTask :
	Scaleform::GFx::Task
{
public:
	LoadBinaryTask(Scaleform::GFx::LoadBinaryTask &);
	LoadBinaryTask(const Scaleform::GFx::LoadBinaryTask &);
	LoadBinaryTask(Scaleform::GFx::LoadStates *, const Scaleform::String &, const Scaleform::String &);
	virtual void Execute();
	bool GetData(Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *, long *, bool *);
private:
	Scaleform::Ptr<Scaleform::GFx::LoadStates> pLoadStates; // 0x18
	Scaleform::String Level0Path; // 0x20
	Scaleform::String Url; // 0x28
	Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> Data; // 0x30
	long FileLen; // 0x48
	volatile unsigned long Done; // 0x4C
	bool Succeeded; // 0x50
public:
	virtual ~LoadBinaryTask();
	Scaleform::GFx::LoadBinaryTask & operator=(Scaleform::GFx::LoadBinaryTask &);
	Scaleform::GFx::LoadBinaryTask & operator=(const Scaleform::GFx::LoadBinaryTask &);
};
class Scaleform::GFx::LoadQueueEntryMT_LoadBinary :
	Scaleform::GFx::LoadQueueEntryMT
{
private:
	Scaleform::Ptr<Scaleform::GFx::LoadBinaryTask> pTask; // 0x28
	Scaleform::Ptr<Scaleform::GFx::LoadStates> pLoadStates; // 0x30
public:
	LoadQueueEntryMT_LoadBinary(const Scaleform::GFx::LoadQueueEntryMT_LoadBinary &);
	LoadQueueEntryMT_LoadBinary(Scaleform::GFx::LoadQueueEntry *, Scaleform::GFx::MovieImpl *);
	virtual ~LoadQueueEntryMT_LoadBinary();
	virtual bool LoadFinished();
	Scaleform::GFx::LoadQueueEntryMT_LoadBinary & operator=(const Scaleform::GFx::LoadQueueEntryMT_LoadBinary &);
};
class Scaleform::Ptr<Scaleform::GFx::LoadBinaryTask>
{
protected:
	Scaleform::GFx::LoadBinaryTask * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::LoadBinaryTask>(const Scaleform::Ptr<Scaleform::GFx::LoadBinaryTask> &);
	Ptr<Scaleform::GFx::LoadBinaryTask>(Scaleform::GFx::LoadBinaryTask *);
	Ptr<Scaleform::GFx::LoadBinaryTask>(Scaleform::Ptr<Scaleform::GFx::LoadBinaryTask> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::LoadBinaryTask>(Scaleform::Pickable<Scaleform::GFx::LoadBinaryTask>);
	Ptr<Scaleform::GFx::LoadBinaryTask>(Scaleform::GFx::LoadBinaryTask &);
	Ptr<Scaleform::GFx::LoadBinaryTask>();
	~Ptr<Scaleform::GFx::LoadBinaryTask>();
	bool operator==(Scaleform::GFx::LoadBinaryTask *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::LoadBinaryTask> &);
	bool operator!=(Scaleform::GFx::LoadBinaryTask *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::LoadBinaryTask> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::LoadBinaryTask> &);
	Scaleform::Ptr<Scaleform::GFx::LoadBinaryTask> & operator=(Scaleform::Pickable<Scaleform::GFx::LoadBinaryTask>);
	const Scaleform::Ptr<Scaleform::GFx::LoadBinaryTask> & operator=(Scaleform::GFx::LoadBinaryTask &);
	const Scaleform::Ptr<Scaleform::GFx::LoadBinaryTask> & operator=(Scaleform::GFx::LoadBinaryTask *);
	const Scaleform::Ptr<Scaleform::GFx::LoadBinaryTask> & operator=(const Scaleform::Ptr<Scaleform::GFx::LoadBinaryTask> &);
	Scaleform::Ptr<Scaleform::GFx::LoadBinaryTask> & SetPtr(Scaleform::Pickable<Scaleform::GFx::LoadBinaryTask>);
	Scaleform::Ptr<Scaleform::GFx::LoadBinaryTask> & SetPtr(Scaleform::GFx::LoadBinaryTask &);
	Scaleform::Ptr<Scaleform::GFx::LoadBinaryTask> & SetPtr(Scaleform::GFx::LoadBinaryTask *);
	Scaleform::Ptr<Scaleform::GFx::LoadBinaryTask> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::LoadBinaryTask> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::LoadBinaryTask * & GetRawRef();
	Scaleform::GFx::LoadBinaryTask * GetPtr();
	Scaleform::GFx::LoadBinaryTask & operator*();
	Scaleform::GFx::LoadBinaryTask * operator->();
	Scaleform::GFx::LoadBinaryTask * operator class Scaleform::GFx::LoadBinaryTask *();
	Scaleform::Ptr<Scaleform::GFx::LoadBinaryTask> & Pick(Scaleform::GFx::LoadBinaryTask *);
	Scaleform::Ptr<Scaleform::GFx::LoadBinaryTask> & Pick(Scaleform::Pickable<Scaleform::GFx::LoadBinaryTask>);
	Scaleform::Ptr<Scaleform::GFx::LoadBinaryTask> & Pick(Scaleform::Ptr<Scaleform::GFx::LoadBinaryTask> &);
};