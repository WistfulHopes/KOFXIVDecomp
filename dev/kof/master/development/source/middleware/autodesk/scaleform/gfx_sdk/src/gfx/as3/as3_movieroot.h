#pragma once

class Scaleform::GFx::AS3::NotifyLoadInitC :
	Scaleform::RefCountBase<Scaleform::GFx::AS3::NotifyLoadInitC,2>
{
public:
	void OpenEventCallback();
	void InitEventCallback();
	void ErrorEventCallback();
	void LoadEventCallback();
	NotifyLoadInitC(Scaleform::GFx::AS3::NotifyLoadInitC &);
	NotifyLoadInitC(const Scaleform::GFx::AS3::NotifyLoadInitC &);
	NotifyLoadInitC();
	virtual ~NotifyLoadInitC();
	Scaleform::GFx::AS3::NotifyLoadInitC & operator=(Scaleform::GFx::AS3::NotifyLoadInitC &);
	Scaleform::GFx::AS3::NotifyLoadInitC & operator=(const Scaleform::GFx::AS3::NotifyLoadInitC &);
};
class Scaleform::RefCountBase<Scaleform::GFx::AS3::NotifyLoadInitC,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::GFx::AS3::NotifyLoadInitC,2>(Scaleform::RefCountBase<Scaleform::GFx::AS3::NotifyLoadInitC,2> &);
	RefCountBase<Scaleform::GFx::AS3::NotifyLoadInitC,2>(const Scaleform::RefCountBase<Scaleform::GFx::AS3::NotifyLoadInitC,2> &);
	RefCountBase<Scaleform::GFx::AS3::NotifyLoadInitC,2>();
	virtual ~RefCountBase<Scaleform::GFx::AS3::NotifyLoadInitC,2>();
	Scaleform::RefCountBase<Scaleform::GFx::AS3::NotifyLoadInitC,2> & operator=(Scaleform::RefCountBase<Scaleform::GFx::AS3::NotifyLoadInitC,2> &);
	Scaleform::RefCountBase<Scaleform::GFx::AS3::NotifyLoadInitC,2> & operator=(const Scaleform::RefCountBase<Scaleform::GFx::AS3::NotifyLoadInitC,2> &);
};
class Scaleform::GFx::AS3::LoadQueueEntry :
	Scaleform::GFx::LoadQueueEntry
{
public:
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_display::Loader> mLoader; // 0x28
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLLoader> mURLLoader; // 0x30
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLRequest> mURLRequest; // 0x38
	Scaleform::AutoPtr<Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > mBytes; // 0x40
	Scaleform::Ptr<Scaleform::GFx::AS3::NotifyLoadInitC> NotifyLoadInitCInterface; // 0x50
	bool FirstExec; // 0x58
	LoadQueueEntry(const Scaleform::GFx::AS3::LoadQueueEntry &);
	LoadQueueEntry(Scaleform::GFx::AS3::Instances::fl_net::URLRequest *, Scaleform::GFx::AS3::Instances::fl_net::URLLoader *, Scaleform::GFx::LoadQueueEntry::LoadMethod, bool);
	LoadQueueEntry(Scaleform::GFx::AS3::Instances::fl_utils::ByteArray *, Scaleform::GFx::AS3::Instances::fl_display::Loader *, Scaleform::GFx::LoadQueueEntry::LoadMethod);
	LoadQueueEntry(Scaleform::GFx::AS3::Instances::fl_net::URLRequest *, Scaleform::GFx::AS3::Instances::fl_display::Loader *, Scaleform::GFx::LoadQueueEntry::LoadMethod, bool);
	virtual ~LoadQueueEntry();
	void SetNotifyLoadInitCInterface(Scaleform::Ptr<Scaleform::GFx::AS3::NotifyLoadInitC>);
	void Cancel(Scaleform::GFx::AS3::LoadQueueEntry *);
	Scaleform::GFx::AS3::LoadQueueEntry & operator=(const Scaleform::GFx::AS3::LoadQueueEntry &);
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_display::Loader>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::Instances::fl_display::Loader>(Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl_display::Loader>);
	SPtr<Scaleform::GFx::AS3::Instances::fl_display::Loader>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_display::Loader> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::Instances::fl_display::Loader>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_display::Loader> &);
	SPtr<Scaleform::GFx::AS3::Instances::fl_display::Loader>(Scaleform::GFx::AS3::Instances::fl_display::Loader *);
	~SPtr<Scaleform::GFx::AS3::Instances::fl_display::Loader>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_display::Loader> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl_display::Loader>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_display::Loader> & operator=(Scaleform::GFx::AS3::Instances::fl_display::Loader *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_display::Loader> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_display::Loader> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_display::Loader> & Pick(Scaleform::GFx::AS3::Instances::fl_display::Loader *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_display::Loader> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl_display::Loader>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_display::Loader> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_display::Loader> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_display::Loader> & SetPtr(Scaleform::GFx::AS3::Instances::fl_display::Loader *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_display::Loader> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_display::Loader> &);
	Scaleform::GFx::AS3::Instances::fl_display::Loader * operator->();
	Scaleform::GFx::AS3::Instances::fl_display::Loader & operator*();
	Scaleform::GFx::AS3::Instances::fl_display::Loader * & GetRawRef();
	Scaleform::GFx::AS3::Instances::fl_display::Loader * * GetRawPtr();
	Scaleform::GFx::AS3::Instances::fl_display::Loader * GetPtr();
	Scaleform::GFx::AS3::Instances::fl_display::Loader * operator class Scaleform::GFx::AS3::Instances::fl_display::Loader *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::Instances::fl_display::Loader * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLLoader>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLLoader>(Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl_net::URLLoader>);
	SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLLoader>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLLoader> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLLoader>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLLoader> &);
	SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLLoader>(Scaleform::GFx::AS3::Instances::fl_net::URLLoader *);
	~SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLLoader>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLLoader> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl_net::URLLoader>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLLoader> & operator=(Scaleform::GFx::AS3::Instances::fl_net::URLLoader *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLLoader> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLLoader> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLLoader> & Pick(Scaleform::GFx::AS3::Instances::fl_net::URLLoader *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLLoader> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl_net::URLLoader>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLLoader> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLLoader> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLLoader> & SetPtr(Scaleform::GFx::AS3::Instances::fl_net::URLLoader *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLLoader> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLLoader> &);
	Scaleform::GFx::AS3::Instances::fl_net::URLLoader * operator->();
	Scaleform::GFx::AS3::Instances::fl_net::URLLoader & operator*();
	Scaleform::GFx::AS3::Instances::fl_net::URLLoader * & GetRawRef();
	Scaleform::GFx::AS3::Instances::fl_net::URLLoader * * GetRawPtr();
	Scaleform::GFx::AS3::Instances::fl_net::URLLoader * GetPtr();
	Scaleform::GFx::AS3::Instances::fl_net::URLLoader * operator class Scaleform::GFx::AS3::Instances::fl_net::URLLoader *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::Instances::fl_net::URLLoader * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLRequest>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLRequest>(Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl_net::URLRequest>);
	SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLRequest>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLRequest> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLRequest>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLRequest> &);
	SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLRequest>(Scaleform::GFx::AS3::Instances::fl_net::URLRequest *);
	~SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLRequest>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLRequest> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl_net::URLRequest>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLRequest> & operator=(Scaleform::GFx::AS3::Instances::fl_net::URLRequest *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLRequest> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLRequest> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLRequest> & Pick(Scaleform::GFx::AS3::Instances::fl_net::URLRequest *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLRequest> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl_net::URLRequest>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLRequest> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLRequest> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLRequest> & SetPtr(Scaleform::GFx::AS3::Instances::fl_net::URLRequest *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLRequest> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::URLRequest> &);
	Scaleform::GFx::AS3::Instances::fl_net::URLRequest * operator->();
	Scaleform::GFx::AS3::Instances::fl_net::URLRequest & operator*();
	Scaleform::GFx::AS3::Instances::fl_net::URLRequest * & GetRawRef();
	Scaleform::GFx::AS3::Instances::fl_net::URLRequest * * GetRawPtr();
	Scaleform::GFx::AS3::Instances::fl_net::URLRequest * GetPtr();
	Scaleform::GFx::AS3::Instances::fl_net::URLRequest * operator class Scaleform::GFx::AS3::Instances::fl_net::URLRequest *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::Instances::fl_net::URLRequest * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::AutoPtr<Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >
{
public:
	AutoPtr<Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >(const Scaleform::AutoPtr<Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > &);
	AutoPtr<Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >(Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *, bool);
	AutoPtr<Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >(Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *);
	~AutoPtr<Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >();
	Scaleform::AutoPtr<Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > & operator=(Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *);
	Scaleform::AutoPtr<Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > & operator=(const Scaleform::AutoPtr<Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > &);
	Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> & operator*();
	Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> * operator->();
	Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> * GetPtr();
	bool operator bool();
	Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> * Release();
	void Reset(Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *, bool);
private:
	Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> * pObject; // 0x0
	bool Owner; // 0x8
	Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> * constRelease();
public:
	void __dflt_ctor_closure();
};
class Scaleform::Ptr<Scaleform::GFx::AS3::NotifyLoadInitC>
{
protected:
	Scaleform::GFx::AS3::NotifyLoadInitC * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::AS3::NotifyLoadInitC>(const Scaleform::Ptr<Scaleform::GFx::AS3::NotifyLoadInitC> &);
	Ptr<Scaleform::GFx::AS3::NotifyLoadInitC>(Scaleform::GFx::AS3::NotifyLoadInitC *);
	Ptr<Scaleform::GFx::AS3::NotifyLoadInitC>(Scaleform::Ptr<Scaleform::GFx::AS3::NotifyLoadInitC> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::AS3::NotifyLoadInitC>(Scaleform::Pickable<Scaleform::GFx::AS3::NotifyLoadInitC>);
	Ptr<Scaleform::GFx::AS3::NotifyLoadInitC>(Scaleform::GFx::AS3::NotifyLoadInitC &);
	Ptr<Scaleform::GFx::AS3::NotifyLoadInitC>();
	~Ptr<Scaleform::GFx::AS3::NotifyLoadInitC>();
	bool operator==(Scaleform::GFx::AS3::NotifyLoadInitC *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::AS3::NotifyLoadInitC> &);
	bool operator!=(Scaleform::GFx::AS3::NotifyLoadInitC *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::AS3::NotifyLoadInitC> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::AS3::NotifyLoadInitC> &);
	Scaleform::Ptr<Scaleform::GFx::AS3::NotifyLoadInitC> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::NotifyLoadInitC>);
	const Scaleform::Ptr<Scaleform::GFx::AS3::NotifyLoadInitC> & operator=(Scaleform::GFx::AS3::NotifyLoadInitC &);
	const Scaleform::Ptr<Scaleform::GFx::AS3::NotifyLoadInitC> & operator=(Scaleform::GFx::AS3::NotifyLoadInitC *);
	const Scaleform::Ptr<Scaleform::GFx::AS3::NotifyLoadInitC> & operator=(const Scaleform::Ptr<Scaleform::GFx::AS3::NotifyLoadInitC> &);
	Scaleform::Ptr<Scaleform::GFx::AS3::NotifyLoadInitC> & SetPtr(Scaleform::Pickable<Scaleform::GFx::AS3::NotifyLoadInitC>);
	Scaleform::Ptr<Scaleform::GFx::AS3::NotifyLoadInitC> & SetPtr(Scaleform::GFx::AS3::NotifyLoadInitC &);
	Scaleform::Ptr<Scaleform::GFx::AS3::NotifyLoadInitC> & SetPtr(Scaleform::GFx::AS3::NotifyLoadInitC *);
	Scaleform::Ptr<Scaleform::GFx::AS3::NotifyLoadInitC> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::AS3::NotifyLoadInitC> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::AS3::NotifyLoadInitC * & GetRawRef();
	Scaleform::GFx::AS3::NotifyLoadInitC * GetPtr();
	Scaleform::GFx::AS3::NotifyLoadInitC & operator*();
	Scaleform::GFx::AS3::NotifyLoadInitC * operator->();
	Scaleform::GFx::AS3::NotifyLoadInitC * operator class Scaleform::GFx::AS3::NotifyLoadInitC *();
	Scaleform::Ptr<Scaleform::GFx::AS3::NotifyLoadInitC> & Pick(Scaleform::GFx::AS3::NotifyLoadInitC *);
	Scaleform::Ptr<Scaleform::GFx::AS3::NotifyLoadInitC> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::NotifyLoadInitC>);
	Scaleform::Ptr<Scaleform::GFx::AS3::NotifyLoadInitC> & Pick(Scaleform::Ptr<Scaleform::GFx::AS3::NotifyLoadInitC> &);
};
void Scaleform::GFx::AS3::LoadQueueEntry::SetNotifyLoadInitCInterface(Scaleform::Ptr<Scaleform::GFx::AS3::NotifyLoadInitC> pinterface); // 0x1405A60F0
class Scaleform::GFx::AS3::LoadQueueEntryMT_LoadMovie :
	Scaleform::GFx::LoadQueueEntryMT
{
private:
	Scaleform::Ptr<Scaleform::GFx::MoviePreloadTask> pPreloadTask; // 0x28
	bool CharSwitched; // 0x30
	unsigned long BytesLoaded; // 0x34
	bool FirstFrameLoaded; // 0x38
public:
	LoadQueueEntryMT_LoadMovie(const Scaleform::GFx::AS3::LoadQueueEntryMT_LoadMovie &);
	LoadQueueEntryMT_LoadMovie(Scaleform::GFx::AS3::LoadQueueEntry *, Scaleform::GFx::MovieImpl *);
	virtual ~LoadQueueEntryMT_LoadMovie();
	virtual bool LoadFinished();
	virtual bool IsPreloadingFinished();
	Scaleform::GFx::AS3::LoadQueueEntryMT_LoadMovie & operator=(const Scaleform::GFx::AS3::LoadQueueEntryMT_LoadMovie &);
};
class Scaleform::Ptr<Scaleform::GFx::MoviePreloadTask>
{
protected:
	Scaleform::GFx::MoviePreloadTask * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::MoviePreloadTask>(const Scaleform::Ptr<Scaleform::GFx::MoviePreloadTask> &);
	Ptr<Scaleform::GFx::MoviePreloadTask>(Scaleform::GFx::MoviePreloadTask *);
	Ptr<Scaleform::GFx::MoviePreloadTask>(Scaleform::Ptr<Scaleform::GFx::MoviePreloadTask> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::MoviePreloadTask>(Scaleform::Pickable<Scaleform::GFx::MoviePreloadTask>);
	Ptr<Scaleform::GFx::MoviePreloadTask>(Scaleform::GFx::MoviePreloadTask &);
	Ptr<Scaleform::GFx::MoviePreloadTask>();
	~Ptr<Scaleform::GFx::MoviePreloadTask>();
	bool operator==(Scaleform::GFx::MoviePreloadTask *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::MoviePreloadTask> &);
	bool operator!=(Scaleform::GFx::MoviePreloadTask *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::MoviePreloadTask> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::MoviePreloadTask> &);
	Scaleform::Ptr<Scaleform::GFx::MoviePreloadTask> & operator=(Scaleform::Pickable<Scaleform::GFx::MoviePreloadTask>);
	const Scaleform::Ptr<Scaleform::GFx::MoviePreloadTask> & operator=(Scaleform::GFx::MoviePreloadTask &);
	const Scaleform::Ptr<Scaleform::GFx::MoviePreloadTask> & operator=(Scaleform::GFx::MoviePreloadTask *);
	const Scaleform::Ptr<Scaleform::GFx::MoviePreloadTask> & operator=(const Scaleform::Ptr<Scaleform::GFx::MoviePreloadTask> &);
	Scaleform::Ptr<Scaleform::GFx::MoviePreloadTask> & SetPtr(Scaleform::Pickable<Scaleform::GFx::MoviePreloadTask>);
	Scaleform::Ptr<Scaleform::GFx::MoviePreloadTask> & SetPtr(Scaleform::GFx::MoviePreloadTask &);
	Scaleform::Ptr<Scaleform::GFx::MoviePreloadTask> & SetPtr(Scaleform::GFx::MoviePreloadTask *);
	Scaleform::Ptr<Scaleform::GFx::MoviePreloadTask> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::MoviePreloadTask> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::MoviePreloadTask * & GetRawRef();
	Scaleform::GFx::MoviePreloadTask * GetPtr();
	Scaleform::GFx::MoviePreloadTask & operator*();
	Scaleform::GFx::MoviePreloadTask * operator->();
	Scaleform::GFx::MoviePreloadTask * operator class Scaleform::GFx::MoviePreloadTask *();
	Scaleform::Ptr<Scaleform::GFx::MoviePreloadTask> & Pick(Scaleform::GFx::MoviePreloadTask *);
	Scaleform::Ptr<Scaleform::GFx::MoviePreloadTask> & Pick(Scaleform::Pickable<Scaleform::GFx::MoviePreloadTask>);
	Scaleform::Ptr<Scaleform::GFx::MoviePreloadTask> & Pick(Scaleform::Ptr<Scaleform::GFx::MoviePreloadTask> &);
};
class Scaleform::GFx::AS3::MemoryContextImpl :
	Scaleform::GFx::MemoryContext
{
public:
	Scaleform::MemoryHeap * Heap; // 0x10
	Scaleform::Ptr<Scaleform::GFx::ASStringManager> StringMgr; // 0x18
	Scaleform::Ptr<Scaleform::GFx::AS3::ASRefCountCollector> ASGC; // 0x20
	Scaleform::Ptr<Scaleform::Render::Text::Allocator> TextAllocator; // 0x28
	struct HeapLimit;
	Scaleform::GFx::AS3::MemoryContextImpl::HeapLimit LimHandler; // 0x30
	MemoryContextImpl(const Scaleform::GFx::AS3::MemoryContextImpl &);
	MemoryContextImpl();
	virtual ~MemoryContextImpl();
	Scaleform::GFx::AS3::MemoryContextImpl & operator=(const Scaleform::GFx::AS3::MemoryContextImpl &);
};
class Scaleform::Ptr<Scaleform::GFx::ASStringManager>
{
protected:
	Scaleform::GFx::ASStringManager * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ASStringManager>(const Scaleform::Ptr<Scaleform::GFx::ASStringManager> &);
	Ptr<Scaleform::GFx::ASStringManager>(Scaleform::GFx::ASStringManager *);
	Ptr<Scaleform::GFx::ASStringManager>(Scaleform::Ptr<Scaleform::GFx::ASStringManager> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ASStringManager>(Scaleform::Pickable<Scaleform::GFx::ASStringManager>);
	Ptr<Scaleform::GFx::ASStringManager>(Scaleform::GFx::ASStringManager &);
	Ptr<Scaleform::GFx::ASStringManager>();
	~Ptr<Scaleform::GFx::ASStringManager>();
	bool operator==(Scaleform::GFx::ASStringManager *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ASStringManager> &);
	bool operator!=(Scaleform::GFx::ASStringManager *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ASStringManager> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ASStringManager> &);
	Scaleform::Ptr<Scaleform::GFx::ASStringManager> & operator=(Scaleform::Pickable<Scaleform::GFx::ASStringManager>);
	const Scaleform::Ptr<Scaleform::GFx::ASStringManager> & operator=(Scaleform::GFx::ASStringManager &);
	const Scaleform::Ptr<Scaleform::GFx::ASStringManager> & operator=(Scaleform::GFx::ASStringManager *);
	const Scaleform::Ptr<Scaleform::GFx::ASStringManager> & operator=(const Scaleform::Ptr<Scaleform::GFx::ASStringManager> &);
	Scaleform::Ptr<Scaleform::GFx::ASStringManager> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ASStringManager>);
	Scaleform::Ptr<Scaleform::GFx::ASStringManager> & SetPtr(Scaleform::GFx::ASStringManager &);
	Scaleform::Ptr<Scaleform::GFx::ASStringManager> & SetPtr(Scaleform::GFx::ASStringManager *);
	Scaleform::Ptr<Scaleform::GFx::ASStringManager> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ASStringManager> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ASStringManager * & GetRawRef();
	Scaleform::GFx::ASStringManager * GetPtr();
	Scaleform::GFx::ASStringManager & operator*();
	Scaleform::GFx::ASStringManager * operator->();
	Scaleform::GFx::ASStringManager * operator class Scaleform::GFx::ASStringManager *();
	Scaleform::Ptr<Scaleform::GFx::ASStringManager> & Pick(Scaleform::GFx::ASStringManager *);
	Scaleform::Ptr<Scaleform::GFx::ASStringManager> & Pick(Scaleform::Pickable<Scaleform::GFx::ASStringManager>);
	Scaleform::Ptr<Scaleform::GFx::ASStringManager> & Pick(Scaleform::Ptr<Scaleform::GFx::ASStringManager> &);
};
class Scaleform::Ptr<Scaleform::GFx::AS3::ASRefCountCollector>
{
protected:
	Scaleform::GFx::AS3::ASRefCountCollector * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::AS3::ASRefCountCollector>(const Scaleform::Ptr<Scaleform::GFx::AS3::ASRefCountCollector> &);
	Ptr<Scaleform::GFx::AS3::ASRefCountCollector>(Scaleform::GFx::AS3::ASRefCountCollector *);
	Ptr<Scaleform::GFx::AS3::ASRefCountCollector>(Scaleform::Ptr<Scaleform::GFx::AS3::ASRefCountCollector> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::AS3::ASRefCountCollector>(Scaleform::Pickable<Scaleform::GFx::AS3::ASRefCountCollector>);
	Ptr<Scaleform::GFx::AS3::ASRefCountCollector>(Scaleform::GFx::AS3::ASRefCountCollector &);
	Ptr<Scaleform::GFx::AS3::ASRefCountCollector>();
	~Ptr<Scaleform::GFx::AS3::ASRefCountCollector>();
	bool operator==(Scaleform::GFx::AS3::ASRefCountCollector *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::AS3::ASRefCountCollector> &);
	bool operator!=(Scaleform::GFx::AS3::ASRefCountCollector *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::AS3::ASRefCountCollector> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::AS3::ASRefCountCollector> &);
	Scaleform::Ptr<Scaleform::GFx::AS3::ASRefCountCollector> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::ASRefCountCollector>);
	const Scaleform::Ptr<Scaleform::GFx::AS3::ASRefCountCollector> & operator=(Scaleform::GFx::AS3::ASRefCountCollector &);
	const Scaleform::Ptr<Scaleform::GFx::AS3::ASRefCountCollector> & operator=(Scaleform::GFx::AS3::ASRefCountCollector *);
	const Scaleform::Ptr<Scaleform::GFx::AS3::ASRefCountCollector> & operator=(const Scaleform::Ptr<Scaleform::GFx::AS3::ASRefCountCollector> &);
	Scaleform::Ptr<Scaleform::GFx::AS3::ASRefCountCollector> & SetPtr(Scaleform::Pickable<Scaleform::GFx::AS3::ASRefCountCollector>);
	Scaleform::Ptr<Scaleform::GFx::AS3::ASRefCountCollector> & SetPtr(Scaleform::GFx::AS3::ASRefCountCollector &);
	Scaleform::Ptr<Scaleform::GFx::AS3::ASRefCountCollector> & SetPtr(Scaleform::GFx::AS3::ASRefCountCollector *);
	Scaleform::Ptr<Scaleform::GFx::AS3::ASRefCountCollector> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::AS3::ASRefCountCollector> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::AS3::ASRefCountCollector * & GetRawRef();
	Scaleform::GFx::AS3::ASRefCountCollector * GetPtr();
	Scaleform::GFx::AS3::ASRefCountCollector & operator*();
	Scaleform::GFx::AS3::ASRefCountCollector * operator->();
	Scaleform::GFx::AS3::ASRefCountCollector * operator class Scaleform::GFx::AS3::ASRefCountCollector *();
	Scaleform::Ptr<Scaleform::GFx::AS3::ASRefCountCollector> & Pick(Scaleform::GFx::AS3::ASRefCountCollector *);
	Scaleform::Ptr<Scaleform::GFx::AS3::ASRefCountCollector> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::ASRefCountCollector>);
	Scaleform::Ptr<Scaleform::GFx::AS3::ASRefCountCollector> & Pick(Scaleform::Ptr<Scaleform::GFx::AS3::ASRefCountCollector> &);
};
class Scaleform::Ptr<Scaleform::Render::Text::Allocator>
{
protected:
	Scaleform::Render::Text::Allocator * pObject; // 0x0
public:
	Ptr<Scaleform::Render::Text::Allocator>(const Scaleform::Ptr<Scaleform::Render::Text::Allocator> &);
	Ptr<Scaleform::Render::Text::Allocator>(Scaleform::Render::Text::Allocator *);
	Ptr<Scaleform::Render::Text::Allocator>(Scaleform::Ptr<Scaleform::Render::Text::Allocator> &, Scaleform::PickType);
	Ptr<Scaleform::Render::Text::Allocator>(Scaleform::Pickable<Scaleform::Render::Text::Allocator>);
	Ptr<Scaleform::Render::Text::Allocator>(Scaleform::Render::Text::Allocator &);
	Ptr<Scaleform::Render::Text::Allocator>();
	~Ptr<Scaleform::Render::Text::Allocator>();
	bool operator==(Scaleform::Render::Text::Allocator *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::Text::Allocator> &);
	bool operator!=(Scaleform::Render::Text::Allocator *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::Text::Allocator> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::Text::Allocator> &);
	Scaleform::Ptr<Scaleform::Render::Text::Allocator> & operator=(Scaleform::Pickable<Scaleform::Render::Text::Allocator>);
	const Scaleform::Ptr<Scaleform::Render::Text::Allocator> & operator=(Scaleform::Render::Text::Allocator &);
	const Scaleform::Ptr<Scaleform::Render::Text::Allocator> & operator=(Scaleform::Render::Text::Allocator *);
	const Scaleform::Ptr<Scaleform::Render::Text::Allocator> & operator=(const Scaleform::Ptr<Scaleform::Render::Text::Allocator> &);
	Scaleform::Ptr<Scaleform::Render::Text::Allocator> & SetPtr(Scaleform::Pickable<Scaleform::Render::Text::Allocator>);
	Scaleform::Ptr<Scaleform::Render::Text::Allocator> & SetPtr(Scaleform::Render::Text::Allocator &);
	Scaleform::Ptr<Scaleform::Render::Text::Allocator> & SetPtr(Scaleform::Render::Text::Allocator *);
	Scaleform::Ptr<Scaleform::Render::Text::Allocator> & SetPtr(const Scaleform::Ptr<Scaleform::Render::Text::Allocator> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::Text::Allocator * & GetRawRef();
	Scaleform::Render::Text::Allocator * GetPtr();
	Scaleform::Render::Text::Allocator & operator*();
	Scaleform::Render::Text::Allocator * operator->();
	Scaleform::Render::Text::Allocator * operator class Scaleform::Render::Text::Allocator *();
	Scaleform::Ptr<Scaleform::Render::Text::Allocator> & Pick(Scaleform::Render::Text::Allocator *);
	Scaleform::Ptr<Scaleform::Render::Text::Allocator> & Pick(Scaleform::Pickable<Scaleform::Render::Text::Allocator>);
	Scaleform::Ptr<Scaleform::Render::Text::Allocator> & Pick(Scaleform::Ptr<Scaleform::Render::Text::Allocator> &);
};
struct Scaleform::GFx::AS3::MemoryContextImpl::HeapLimit :
	Scaleform::MemoryHeap::LimitHandler
{
	enum <unnamed-enum-INITIAL_DYNAMIC_LIMIT>
	{
		INITIAL_DYNAMIC_LIMIT = 131072,
	};
	Scaleform::GFx::AS3::MemoryContextImpl * MemContext; // 0x10
	unsigned long long UserLevelLimit; // 0x18
	unsigned long long LastCollectionFootprint; // 0x20
	unsigned long long CurrentLimit; // 0x28
	float HeapLimitMultiplier; // 0x30
	HeapLimit(Scaleform::GFx::AS3::MemoryContextImpl::HeapLimit &);
	HeapLimit(const Scaleform::GFx::AS3::MemoryContextImpl::HeapLimit &);
	HeapLimit();
	void Collect(Scaleform::MemoryHeap *);
	void Reset(Scaleform::MemoryHeap *);
	virtual bool OnExceedLimit(Scaleform::MemoryHeap *, unsigned long long);
	virtual void OnFreeSegment(Scaleform::MemoryHeap *, unsigned long long);
	virtual ~HeapLimit();
	Scaleform::GFx::AS3::MemoryContextImpl::HeapLimit & operator=(Scaleform::GFx::AS3::MemoryContextImpl::HeapLimit &);
	Scaleform::GFx::AS3::MemoryContextImpl::HeapLimit & operator=(const Scaleform::GFx::AS3::MemoryContextImpl::HeapLimit &);
};
Scaleform::GFx::AS3::MemoryContextImpl::~MemoryContextImpl(); // 0x1404C39B0
class Scaleform::GFx::AS3::ASVM :
	Scaleform::GFx::AS3::VM
{
protected:
	Scaleform::GFx::AS3::MovieRoot * pMovieRoot; // 0x2F8
public:
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> GraphicsClass; // 0x300
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> TransformClass; // 0x308
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> MatrixClass; // 0x310
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> Matrix3DClass; // 0x318
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> PerspectiveProjectionClass; // 0x320
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> ColorTransformClass; // 0x328
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> EventClass; // 0x330
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> MouseEventClass; // 0x338
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> MouseEventExClass; // 0x340
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> KeyboardEventClass; // 0x348
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> KeyboardEventExClass; // 0x350
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> GamePadAnalogEventClass; // 0x358
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> FocusEventClass; // 0x360
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> FocusEventExClass; // 0x368
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> TextEventClass; // 0x370
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> TextEventExClass; // 0x378
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> TimerEventClass; // 0x380
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> ProgressEventClass; // 0x388
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> StageOrientationEventClass; // 0x390
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> AppLifecycleEventClass; // 0x398
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> StatusEventClass; // 0x3A0
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> AccelerometerEventClass; // 0x3A8
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> GeolocationEventClass; // 0x3B0
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> PointClass; // 0x3B8
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> RectangleClass; // 0x3C0
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> TextFormatClass; // 0x3C8
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> EventDispatcherClass; // 0x3D0
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> Vector3DClass; // 0x3D8
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> GeneralClipboard; // 0x3E0
	bool ExtensionsEnabled; // 0x3E8
	class AbcFileWithMovieDef;
private:
	bool _constructInstance(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> &, Scaleform::GFx::AS3::Object *, unsigned long, Scaleform::GFx::AS3::Value *);
public:
	ASVM(Scaleform::GFx::AS3::MovieRoot *, Scaleform::GFx::AS3::FlashUI &, Scaleform::GFx::AS3::StringManager &, Scaleform::GFx::AS3::ASRefCountCollector &);
	Scaleform::GFx::AS3::MovieRoot * GetMovieRoot();
	Scaleform::GFx::MovieImpl * GetMovieImpl();
	Scaleform::MemoryHeap * GetHeap();
	Scaleform::Log * GetLog();
	Scaleform::GFx::LogState * GetLogState();
	const Scaleform::GFx::ASString & GetBuiltin(Scaleform::GFx::AS3::BuiltinType);
	Scaleform::GFx::MovieDefImpl * GetResourceMovieDef(Scaleform::GFx::AS3::Instances::fl::Object *);
	virtual ~ASVM();
};
class Scaleform::GFx::AS3::ASVM::AbcFileWithMovieDef :
	Scaleform::GFx::AS3::Abc::File
{
public:
	Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> pDefImpl; // 0x178
	Scaleform::Ptr<Scaleform::GFx::AS3::AbcDataBuffer> pAbcData; // 0x180
	AbcFileWithMovieDef(Scaleform::GFx::MovieDefImpl *, Scaleform::GFx::AS3::AbcDataBuffer *);
	virtual ~AbcFileWithMovieDef();
};
class Scaleform::Ptr<Scaleform::GFx::AS3::AbcDataBuffer>
{
protected:
	Scaleform::GFx::AS3::AbcDataBuffer * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::AS3::AbcDataBuffer>(const Scaleform::Ptr<Scaleform::GFx::AS3::AbcDataBuffer> &);
	Ptr<Scaleform::GFx::AS3::AbcDataBuffer>(Scaleform::GFx::AS3::AbcDataBuffer *);
	Ptr<Scaleform::GFx::AS3::AbcDataBuffer>(Scaleform::Ptr<Scaleform::GFx::AS3::AbcDataBuffer> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::AS3::AbcDataBuffer>(Scaleform::Pickable<Scaleform::GFx::AS3::AbcDataBuffer>);
	Ptr<Scaleform::GFx::AS3::AbcDataBuffer>(Scaleform::GFx::AS3::AbcDataBuffer &);
	Ptr<Scaleform::GFx::AS3::AbcDataBuffer>();
	~Ptr<Scaleform::GFx::AS3::AbcDataBuffer>();
	bool operator==(Scaleform::GFx::AS3::AbcDataBuffer *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::AS3::AbcDataBuffer> &);
	bool operator!=(Scaleform::GFx::AS3::AbcDataBuffer *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::AS3::AbcDataBuffer> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::AS3::AbcDataBuffer> &);
	Scaleform::Ptr<Scaleform::GFx::AS3::AbcDataBuffer> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::AbcDataBuffer>);
	const Scaleform::Ptr<Scaleform::GFx::AS3::AbcDataBuffer> & operator=(Scaleform::GFx::AS3::AbcDataBuffer &);
	const Scaleform::Ptr<Scaleform::GFx::AS3::AbcDataBuffer> & operator=(Scaleform::GFx::AS3::AbcDataBuffer *);
	const Scaleform::Ptr<Scaleform::GFx::AS3::AbcDataBuffer> & operator=(const Scaleform::Ptr<Scaleform::GFx::AS3::AbcDataBuffer> &);
	Scaleform::Ptr<Scaleform::GFx::AS3::AbcDataBuffer> & SetPtr(Scaleform::Pickable<Scaleform::GFx::AS3::AbcDataBuffer>);
	Scaleform::Ptr<Scaleform::GFx::AS3::AbcDataBuffer> & SetPtr(Scaleform::GFx::AS3::AbcDataBuffer &);
	Scaleform::Ptr<Scaleform::GFx::AS3::AbcDataBuffer> & SetPtr(Scaleform::GFx::AS3::AbcDataBuffer *);
	Scaleform::Ptr<Scaleform::GFx::AS3::AbcDataBuffer> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::AS3::AbcDataBuffer> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::AS3::AbcDataBuffer * & GetRawRef();
	Scaleform::GFx::AS3::AbcDataBuffer * GetPtr();
	Scaleform::GFx::AS3::AbcDataBuffer & operator*();
	Scaleform::GFx::AS3::AbcDataBuffer * operator->();
	Scaleform::GFx::AS3::AbcDataBuffer * operator class Scaleform::GFx::AS3::AbcDataBuffer *();
	Scaleform::Ptr<Scaleform::GFx::AS3::AbcDataBuffer> & Pick(Scaleform::GFx::AS3::AbcDataBuffer *);
	Scaleform::Ptr<Scaleform::GFx::AS3::AbcDataBuffer> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::AbcDataBuffer>);
	Scaleform::Ptr<Scaleform::GFx::AS3::AbcDataBuffer> & Pick(Scaleform::Ptr<Scaleform::GFx::AS3::AbcDataBuffer> &);
};
Scaleform::GFx::AS3::ASVM::AbcFileWithMovieDef::AbcFileWithMovieDef(Scaleform::GFx::MovieDefImpl * pdefImpl, Scaleform::GFx::AS3::AbcDataBuffer * data); // 0x14044E070
class Scaleform::GFx::AS3::EventChains
{
	class Chain;
	class ChainHash;
private:
	Scaleform::HashIdentityLH<int,Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> >,2,Scaleform::IdentityHash<int> > Chains; // 0x0
	unsigned long long FindObjectIndexInChain(Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> *, Scaleform::GFx::DisplayObject *);
public:
	void AddToChain(Scaleform::GFx::EventId::IdCode, Scaleform::GFx::DisplayObject *);
	void RemoveFromChain(Scaleform::GFx::EventId::IdCode, Scaleform::GFx::DisplayObject *);
	const Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> * GetChain(Scaleform::GFx::EventId::IdCode);
	void Dispatch(Scaleform::GFx::EventId::IdCode);
	void QueueEvents(Scaleform::GFx::EventId::IdCode);
	void Shutdown();
	EventChains(Scaleform::GFx::AS3::EventChains &);
	EventChains(const Scaleform::GFx::AS3::EventChains &);
	EventChains();
	~EventChains();
	Scaleform::GFx::AS3::EventChains & operator=(Scaleform::GFx::AS3::EventChains &);
	Scaleform::GFx::AS3::EventChains & operator=(const Scaleform::GFx::AS3::EventChains &);
};
class Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,Scaleform::AllocatorLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>
{
public:
	WeakPtr<Scaleform::GFx::DisplayObject>(Scaleform::WeakPtr<Scaleform::GFx::DisplayObject> &);
	WeakPtr<Scaleform::GFx::DisplayObject>(const Scaleform::WeakPtr<Scaleform::GFx::DisplayObject> &);
	WeakPtr<Scaleform::GFx::DisplayObject>(const Scaleform::Ptr<Scaleform::GFx::DisplayObject> &);
	WeakPtr<Scaleform::GFx::DisplayObject>(Scaleform::GFx::DisplayObject *);
	WeakPtr<Scaleform::GFx::DisplayObject>();
	Scaleform::WeakPtr<Scaleform::GFx::DisplayObject> & operator=(Scaleform::WeakPtr<Scaleform::GFx::DisplayObject> &);
	Scaleform::WeakPtr<Scaleform::GFx::DisplayObject> & operator=(const Scaleform::WeakPtr<Scaleform::GFx::DisplayObject> &);
	void operator=(const Scaleform::Ptr<Scaleform::GFx::DisplayObject> &);
	void operator=(Scaleform::GFx::DisplayObject *);
	Scaleform::Ptr<Scaleform::GFx::DisplayObject> operator class Scaleform::Ptr<class Scaleform::GFx::DisplayObject>();
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::DisplayObject> &);
	bool operator==(Scaleform::GFx::DisplayObject *);
private:
	Scaleform::GFx::DisplayObject * GetObjectThroughProxy();
	Scaleform::Ptr<Scaleform::WeakPtrProxy> pProxy; // 0x0
public:
	~WeakPtr<Scaleform::GFx::DisplayObject>();
};
class Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> >
{
public:
	AutoPtr<Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> >(const Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> > &);
	AutoPtr<Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> >(Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> *, bool);
	AutoPtr<Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> >(Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> *);
	~AutoPtr<Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> >();
	Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> > & operator=(Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> *);
	Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> > & operator=(const Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> > &);
	Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> & operator*();
	Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> * operator->();
	Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> * GetPtr();
	bool operator bool();
	Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> * Release();
	void Reset(Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> *, bool);
private:
	Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> * pObject; // 0x0
	bool Owner; // 0x8
	Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> * constRelease();
public:
	void __dflt_ctor_closure();
};
class Scaleform::HashIdentityLH<int,Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> >,2,Scaleform::IdentityHash<int> > :
	Scaleform::HashUncachedLH<int,Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> >,Scaleform::IdentityHash<int>,2>
{
	class SelfType;
	class BaseType;
public:
	HashIdentityLH<int,Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> >,2,Scaleform::IdentityHash<int> >(const Scaleform::HashIdentityLH<int,Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> >,2,Scaleform::IdentityHash<int> > &);
	HashIdentityLH<int,Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> >,2,Scaleform::IdentityHash<int> >(long);
	HashIdentityLH<int,Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> >,2,Scaleform::IdentityHash<int> >();
	~HashIdentityLH<int,Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> >,2,Scaleform::IdentityHash<int> >();
	void operator=(const Scaleform::HashIdentityLH<int,Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> >,2,Scaleform::IdentityHash<int> > &);
};
class Scaleform::GFx::AS3::MovieDefRootNode :
	Scaleform::GFx::MovieDefRootNode
{
public:
	MovieDefRootNode(const Scaleform::GFx::AS3::MovieDefRootNode &);
	MovieDefRootNode(Scaleform::GFx::MovieDefImpl *, bool);
	virtual ~MovieDefRootNode();
	Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2,Scaleform::ArrayDefaultPolicy> AbcFiles; // 0x40
	Scaleform::GFx::AS3::MovieDefRootNode & operator=(const Scaleform::GFx::AS3::MovieDefRootNode &);
};
class Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,Scaleform::AllocatorLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::GFx::AS3::MovieRoot :
	Scaleform::GFx::ASMovieRootBase,
	Scaleform::GFx::AS3::FlashUI,
	Scaleform::GFx::KeyboardState::IListener,
	Scaleform::GFx::MovieDefImpl::ReleaseNotifier
{
	struct MemContextPtr;
protected:
	Scaleform::GFx::AS3::MovieRoot::MemContextPtr MemContext; // 0x48
	Scaleform::AutoPtr<Scaleform::GFx::AS3::ASVM> pAVM; // 0x50
	enum ActionLevel
	{
		AL_Highest = 0,
		AL_High = 1,
		AL_EnterFrame = 2,
		AL_Frame = 3,
		AL_ControllerEvents = 4,
		AL_Render = 5,
		AL_Count_ = 6,
		AL_Lowest = 5,
		AL_Manual = 6,
		AL_Total = 7,
	};
	struct MouseState;
public:
	Scaleform::GFx::AS3::Value ExternalIntfRetVal; // 0x60
protected:
	unsigned long NumAdvancesSinceCollection; // 0x80
	unsigned long LastCollectionFrame; // 0x84
	Scaleform::GFx::ASStringHash<Scaleform::GFx::AS3::Value> * pInvokeAliases; // 0x88
	struct ActionEntry;
	struct ActionQueueEntry;
	struct ActionQueueType;
	struct ActionQueueIterator;
	Scaleform::GFx::AS3::MovieRoot::ActionQueueType ActionQueue; // 0x90
	Scaleform::GFx::AS3::EventChains mEventChains; // 0x158
	Scaleform::Ptr<Scaleform::GFx::AS3::Stage> pStage; // 0x160
	Scaleform::GFx::AS3::StringManager BuiltinsMgr; // 0x168
	unsigned long ASFramesToExecute; // 0x390
	Scaleform::GFx::AS3::MovieRoot::MouseState mMouseState[6]; // 0x398
	bool StageInvalidated; // 0x8D8
	enum <unnamed-enum-MLISE_InitExecuted>
	{
		MLISE_InitExecuted = 1,
		MLISE_Completed = 2,
	};
	unsigned char MainLoaderInfoEventsState; // 0x8D9
	struct StickyVarNode;
	struct LoadedMovieDefInfo;
	Scaleform::HashIdentityLH<Scaleform::GFx::MovieDefImpl *,Scaleform::GFx::AS3::MovieRoot::LoadedMovieDefInfo,2,Scaleform::IdentityHash<Scaleform::GFx::MovieDefImpl *> > LoadedMovieDefs; // 0x8E0
	enum <unnamed-enum-Mask_InsideGotoFrame>
	{
		Mask_InsideGotoFrame = 1,
	};
	unsigned char Flags; // 0x8E8
public:
	MovieRoot(const Scaleform::GFx::AS3::MovieRoot &);
	MovieRoot(Scaleform::GFx::AS3::MemoryContextImpl *, Scaleform::GFx::MovieImpl *, Scaleform::GFx::ASSupport *);
	virtual ~MovieRoot();
	Scaleform::GFx::MovieDefImpl * GetMovieDefImpl();
	void SetMovieDefImpl(Scaleform::GFx::MovieDefImpl *);
	Scaleform::MemoryHeap * GetMovieHeap();
	virtual Scaleform::GFx::ASStringManager * GetStringManager();
	Scaleform::GFx::AS3::StringManager * GetStringManager();
	Scaleform::Log * GetLog();
	Scaleform::GFx::LogState * GetLogState();
	const Scaleform::GFx::AS3::StringManager & GetBuiltinsMgr();
	const Scaleform::GFx::AS3::MovieRoot::MouseState * GetAS3MouseState(unsigned long);
	void SetInsideGotoFrameFlag(bool);
	void ClearInsideGotoFrameFlag();
	bool IsInsideGotoFrameFlagSet();
	bool GetRootFilePath(Scaleform::String *);
	void AddLoadQueueEntry(Scaleform::GFx::AS3::LoadQueueEntry *);
	void AddLoadQueueEntryMT(Scaleform::GFx::AS3::LoadQueueEntry *);
	void AddNewLoadQueueEntry(Scaleform::GFx::AS3::Instances::fl_net::URLRequest *, Scaleform::GFx::AS3::Instances::fl_net::URLLoader *, Scaleform::GFx::LoadQueueEntry::LoadMethod);
	void AddNewLoadQueueEntry(Scaleform::GFx::AS3::Instances::fl_utils::ByteArray *, Scaleform::GFx::AS3::Instances::fl_display::Loader *, Scaleform::GFx::LoadQueueEntry::LoadMethod);
	void AddNewLoadQueueEntry(Scaleform::GFx::AS3::Instances::fl_net::URLRequest *, Scaleform::GFx::AS3::Instances::fl_display::Loader *, Scaleform::GFx::LoadQueueEntry::LoadMethod);
	void CreateObjectInterface(Scaleform::GFx::MovieImpl *);
	Scaleform::GFx::AS3::MovieRoot::ActionEntry * InsertEmptyAction(Scaleform::GFx::AS3::MovieRoot::ActionLevel);
	Scaleform::GFx::AS3::MovieRoot::ActionEntry * PrependEmptyAction(Scaleform::GFx::AS3::MovieRoot::ActionLevel);
	void * GetActionQueueInsertionPoint(Scaleform::GFx::AS3::MovieRoot::ActionLevel);
	void ExecuteActionQueue(Scaleform::GFx::AS3::MovieRoot::ActionLevel, void *);
	void ExecuteActionQueue(Scaleform::GFx::AS3::MovieRoot::ActionLevel);
	void ExecuteCtors();
	void ExecuteActionQueues();
	void RequeueActionQueue(Scaleform::GFx::AS3::MovieRoot::ActionLevel, Scaleform::GFx::AS3::MovieRoot::ActionLevel);
	void QueueFrameActions();
	void RemoveActionQueueEntriesFor(Scaleform::GFx::AS3::MovieRoot::ActionLevel, Scaleform::GFx::DisplayObject *);
	virtual void Output(Scaleform::GFx::AS3::FlashUI::OutputMessageType, const char *);
	virtual bool OnOpCode(unsigned long long);
	virtual void AdvanceFrame(bool);
	virtual bool CheckAvm();
	virtual void ChangeMouseCursorType(unsigned long, unsigned long);
	virtual void ClearDisplayList();
	virtual Scaleform::GFx::AS3::MovieDefRootNode * CreateMovieDefRootNode(Scaleform::MemoryHeap *, Scaleform::GFx::MovieDefImpl *, bool);
	virtual void DoActions();
	virtual Scaleform::GFx::InteractiveObject * FindTarget(const Scaleform::GFx::ASString &);
	virtual void ForceCollect(unsigned long);
	virtual void ForceEmergencyCollect();
	virtual void SuspendGC(bool);
	virtual void ScheduleGC(unsigned long);
	virtual void GenerateMouseEvents(unsigned long);
	virtual Scaleform::GFx::DisplayObjContainer * GetRootMovie(Scaleform::GFx::DisplayObject *);
	virtual bool Init(Scaleform::GFx::MovieDefImpl *);
	virtual void NotifyMouseEvent(const Scaleform::GFx::InputEventsQueueEntry *, const Scaleform::GFx::MouseState &, long);
	virtual void NotifyOnResize();
	virtual void NotifyQueueSetFocus(Scaleform::GFx::InteractiveObject *, unsigned long, Scaleform::GFx::FocusMovedType);
	virtual void NotifyTransferFocus(Scaleform::GFx::InteractiveObject *, Scaleform::GFx::InteractiveObject *, unsigned long);
	virtual bool NotifyOnFocusChange(Scaleform::GFx::InteractiveObject *, Scaleform::GFx::InteractiveObject *, unsigned long, Scaleform::GFx::FocusMovedType, Scaleform::GFx::ProcessFocusKeyInfo *);
	virtual void NotifyGamePadAnalogEvent(const Scaleform::GFx::EventId *);
	virtual void NotifyStatusEvent(const Scaleform::GFx::EventId *);
	virtual void NotifyAccelerometerEvent(const Scaleform::GFx::EventId *, long);
	void BroadcastGeolocationStatusEvent(const Scaleform::GFx::EventId *);
	virtual void NotifyGeolocationEvent(const Scaleform::GFx::EventId *, long);
	virtual void OnMovieFocus(bool);
	virtual void OnNextFrame();
	virtual Scaleform::GFx::MemoryContext * GetMemoryContext();
	virtual Scaleform::Render::Text::Allocator * GetTextAllocator();
	virtual void PrintObjectsReport(unsigned long, Scaleform::Log *, const char *);
	virtual void GetObjectsTree(Scaleform::Array<Scaleform::Ptr<Scaleform::AmpMovieObjectDesc>,2,Scaleform::ArrayDefaultPolicy> *, Scaleform::MemoryHeap *);
	virtual Scaleform::AmpMovieObjectDesc * GetDisplayObjectsTree(Scaleform::MemoryHeap *);
	virtual void ProcessLoadQueueEntry(Scaleform::GFx::LoadQueueEntry *, Scaleform::GFx::LoadStates *);
	virtual void ProcessLoadVarsMT(Scaleform::GFx::LoadQueueEntry *, Scaleform::GFx::LoadStates *, const Scaleform::String &, unsigned long long, bool);
	virtual void ProcessLoadBinaryMT(Scaleform::GFx::LoadQueueEntry *, Scaleform::GFx::LoadStates *, const Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> &, unsigned long long, bool);
	virtual void RegisterAuxASClasses();
	virtual void ResolveStickyVariables(Scaleform::GFx::InteractiveObject *);
	virtual void SetExternalInterfaceRetVal(const Scaleform::GFx::Value &);
	virtual void SetMemoryParams(unsigned long, unsigned long);
	virtual void Shutdown();
	void GFxValue2ASValue(const Scaleform::GFx::Value &, Scaleform::GFx::AS3::Value *);
	void ASValue2GFxValue(const Scaleform::GFx::AS3::Value &, Scaleform::GFx::Value *);
	bool CreateObjectValue(Scaleform::GFx::Value *, Scaleform::GFx::Value::ObjectInterface *, void *, bool);
	virtual void CreateString(Scaleform::GFx::Value *, const char *);
	virtual void CreateStringW(Scaleform::GFx::Value *, const wchar_t *);
	virtual void CreateObject(Scaleform::GFx::Value *, const char *, const Scaleform::GFx::Value *, unsigned long);
	virtual void CreateArray(Scaleform::GFx::Value *);
	virtual void CreateFunction(Scaleform::GFx::Value *, Scaleform::GFx::FunctionHandler *, void *);
	virtual bool GetVariable(Scaleform::GFx::Value *, const char *);
	virtual bool SetVariable(const char *, const Scaleform::GFx::Value &, Scaleform::GFx::Movie::SetVarType);
	virtual bool GetVariableArray(Scaleform::GFx::Movie::SetArrayType, const char *, unsigned long, void *, unsigned long);
	virtual unsigned long GetVariableArraySize(const char *);
	virtual bool SetVariableArray(Scaleform::GFx::Movie::SetArrayType, const char *, unsigned long, const void *, unsigned long, Scaleform::GFx::Movie::SetVarType);
	virtual bool SetVariableArraySize(const char *, unsigned long, Scaleform::GFx::Movie::SetVarType);
	virtual bool IsAvailable(const char *);
	virtual bool Invoke(const char *, Scaleform::GFx::Value *, const char *, ...);
	virtual bool Invoke(const char *, Scaleform::GFx::Value *, const Scaleform::GFx::Value *, unsigned long);
	virtual bool InvokeArgs(const char *, Scaleform::GFx::Value *, const char *, char *);
	virtual void OnKeyDown(Scaleform::GFx::InteractiveObject *, const Scaleform::GFx::EventId &, long);
	virtual void OnKeyUp(Scaleform::GFx::InteractiveObject *, const Scaleform::GFx::EventId &, long);
	virtual void Update(const Scaleform::GFx::EventId &);
	Scaleform::GFx::Sprite * CreateMovieClip(Scaleform::GFx::TimelineDef *, Scaleform::GFx::MovieDefImpl *, Scaleform::GFx::InteractiveObject *, Scaleform::GFx::ResourceId, bool);
	Scaleform::GFx::Sprite * CreateSprite(Scaleform::GFx::TimelineDef *, Scaleform::GFx::MovieDefImpl *, Scaleform::GFx::InteractiveObject *, Scaleform::GFx::ResourceId, bool);
	Scaleform::GFx::AS3::AvmStage * CreateStage(Scaleform::GFx::MovieDefImpl *);
	Scaleform::GFx::DisplayObjContainer * GetMainContainer();
	Scaleform::GFx::AS3::AvmDisplayObjContainer * GetAvmMainMovie();
	Scaleform::GFx::DisplayObjContainer * GetMainTimeline();
	bool ExecuteAbc(Scaleform::GFx::AS3::AbcDataBuffer *, Scaleform::GFx::DisplayObjContainer *);
	Scaleform::GFx::AS3::ASVM * GetAVM();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_events::Event> CreateEventObject(const Scaleform::GFx::ASString &, bool, bool);
	Scaleform::GFx::AS3::Stage * GetStage();
	void IncASFramesCnt(unsigned long);
	void AddToEventChain(Scaleform::GFx::EventId::IdCode, Scaleform::GFx::DisplayObject *);
	void RemoveFromEventChain(Scaleform::GFx::EventId::IdCode, Scaleform::GFx::DisplayObject *);
	void QueueEventChain(Scaleform::GFx::EventId::IdCode);
	void AddToAccelerometers(Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *);
	unsigned long long FindAccelerometer(Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *);
	void RemoveFromAccelerometers(Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *);
	Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *,2,Scaleform::ArrayDefaultPolicy> > AccelerometerArray; // 0x8F0
	void AddToGeolocations(Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *);
	unsigned long long FindGeolocation(Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *);
	void RemoveFromGeolocations(Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *);
	Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2,Scaleform::ArrayDefaultPolicy> > GeolocationArray; // 0x900
	void AddToExtensionContexts(Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *);
	unsigned long long FindExtensionContexts(const Scaleform::GFx::ASString &, const Scaleform::GFx::ASString &);
	unsigned long long FindExtensionContexts(Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *);
	void RemoveFromExtensionContexts(Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *);
	Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *,2,Scaleform::ArrayDefaultPolicy> > ExtensionContextArray; // 0x910
	void InvalidateStage();
	void ValidateStage();
	bool IsStageInvalidated();
	void AddInvokeAlias(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::AS3::Value * ResolveInvokeAlias(const char *);
	void AddScriptableMovieClip(Scaleform::GFx::DisplayObjContainer *);
	void UnloadMovie(Scaleform::GFx::AS3::Instances::fl_display::Loader *, bool, bool);
	bool CancelMovieLoading(Scaleform::GFx::AS3::Instances::fl_display::Loader *);
	void AddLoadedMovieDef(Scaleform::GFx::MovieDefImpl *);
	bool RemoveLoadedMovieDef(Scaleform::GFx::MovieDefImpl *);
	bool FindLibrarySymbolInAllABCs(const Scaleform::GFx::AS3::Instances::fl_display::DisplayObject *, Scaleform::GFx::CharacterCreateInfo *);
	void SetMouseCursorType(const Scaleform::GFx::ASString &, unsigned long);
	void GetMouseCursorType(Scaleform::GFx::ASString &, unsigned long);
protected:
	void GetMouseCursorTypeString(Scaleform::GFx::ASString &, unsigned long);
	void AddStickyVariable(const Scaleform::GFx::ASString &, const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Value &, Scaleform::GFx::Movie::SetVarType);
	bool ExtractPathAndName(const char *, Scaleform::GFx::ASString *, Scaleform::GFx::ASString *);
	bool GetASVariableAtPath(Scaleform::GFx::AS3::Value *, const char *);
	void ParseValueArguments(Scaleform::Array<Scaleform::GFx::AS3::Value,2,Scaleform::ArrayDefaultPolicy> &, const char *, const char *, char *);
	virtual void OnMovieDefRelease(Scaleform::GFx::MovieDefImpl *);
public:
	Scaleform::GFx::AS3::MovieRoot & operator=(const Scaleform::GFx::AS3::MovieRoot &);
};
struct Scaleform::GFx::AS3::MovieRoot::MemContextPtr :
	Scaleform::Ptr<Scaleform::GFx::AS3::MemoryContextImpl>
{
	MemContextPtr(Scaleform::Ptr<Scaleform::GFx::AS3::MemoryContextImpl> &);
	MemContextPtr(const Scaleform::GFx::AS3::MovieRoot::MemContextPtr &);
	MemContextPtr(Scaleform::GFx::AS3::MemoryContextImpl *);
	~MemContextPtr();
	Scaleform::GFx::AS3::MovieRoot::MemContextPtr & operator=(const Scaleform::GFx::AS3::MovieRoot::MemContextPtr &);
};
class Scaleform::Ptr<Scaleform::GFx::AS3::MemoryContextImpl>
{
protected:
	Scaleform::GFx::AS3::MemoryContextImpl * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::AS3::MemoryContextImpl>(const Scaleform::Ptr<Scaleform::GFx::AS3::MemoryContextImpl> &);
	Ptr<Scaleform::GFx::AS3::MemoryContextImpl>(Scaleform::GFx::AS3::MemoryContextImpl *);
	Ptr<Scaleform::GFx::AS3::MemoryContextImpl>(Scaleform::Ptr<Scaleform::GFx::AS3::MemoryContextImpl> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::AS3::MemoryContextImpl>(Scaleform::Pickable<Scaleform::GFx::AS3::MemoryContextImpl>);
	Ptr<Scaleform::GFx::AS3::MemoryContextImpl>(Scaleform::GFx::AS3::MemoryContextImpl &);
	Ptr<Scaleform::GFx::AS3::MemoryContextImpl>();
	~Ptr<Scaleform::GFx::AS3::MemoryContextImpl>();
	bool operator==(Scaleform::GFx::AS3::MemoryContextImpl *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::AS3::MemoryContextImpl> &);
	bool operator!=(Scaleform::GFx::AS3::MemoryContextImpl *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::AS3::MemoryContextImpl> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::AS3::MemoryContextImpl> &);
	Scaleform::Ptr<Scaleform::GFx::AS3::MemoryContextImpl> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::MemoryContextImpl>);
	const Scaleform::Ptr<Scaleform::GFx::AS3::MemoryContextImpl> & operator=(Scaleform::GFx::AS3::MemoryContextImpl &);
	const Scaleform::Ptr<Scaleform::GFx::AS3::MemoryContextImpl> & operator=(Scaleform::GFx::AS3::MemoryContextImpl *);
	const Scaleform::Ptr<Scaleform::GFx::AS3::MemoryContextImpl> & operator=(const Scaleform::Ptr<Scaleform::GFx::AS3::MemoryContextImpl> &);
	Scaleform::Ptr<Scaleform::GFx::AS3::MemoryContextImpl> & SetPtr(Scaleform::Pickable<Scaleform::GFx::AS3::MemoryContextImpl>);
	Scaleform::Ptr<Scaleform::GFx::AS3::MemoryContextImpl> & SetPtr(Scaleform::GFx::AS3::MemoryContextImpl &);
	Scaleform::Ptr<Scaleform::GFx::AS3::MemoryContextImpl> & SetPtr(Scaleform::GFx::AS3::MemoryContextImpl *);
	Scaleform::Ptr<Scaleform::GFx::AS3::MemoryContextImpl> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::AS3::MemoryContextImpl> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::AS3::MemoryContextImpl * & GetRawRef();
	Scaleform::GFx::AS3::MemoryContextImpl * GetPtr();
	Scaleform::GFx::AS3::MemoryContextImpl & operator*();
	Scaleform::GFx::AS3::MemoryContextImpl * operator->();
	Scaleform::GFx::AS3::MemoryContextImpl * operator class Scaleform::GFx::AS3::MemoryContextImpl *();
	Scaleform::Ptr<Scaleform::GFx::AS3::MemoryContextImpl> & Pick(Scaleform::GFx::AS3::MemoryContextImpl *);
	Scaleform::Ptr<Scaleform::GFx::AS3::MemoryContextImpl> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::MemoryContextImpl>);
	Scaleform::Ptr<Scaleform::GFx::AS3::MemoryContextImpl> & Pick(Scaleform::Ptr<Scaleform::GFx::AS3::MemoryContextImpl> &);
};
class Scaleform::AutoPtr<Scaleform::GFx::AS3::ASVM>
{
public:
	AutoPtr<Scaleform::GFx::AS3::ASVM>(const Scaleform::AutoPtr<Scaleform::GFx::AS3::ASVM> &);
	AutoPtr<Scaleform::GFx::AS3::ASVM>(Scaleform::GFx::AS3::ASVM *, bool);
	AutoPtr<Scaleform::GFx::AS3::ASVM>(Scaleform::GFx::AS3::ASVM *);
	~AutoPtr<Scaleform::GFx::AS3::ASVM>();
	Scaleform::AutoPtr<Scaleform::GFx::AS3::ASVM> & operator=(Scaleform::GFx::AS3::ASVM *);
	Scaleform::AutoPtr<Scaleform::GFx::AS3::ASVM> & operator=(const Scaleform::AutoPtr<Scaleform::GFx::AS3::ASVM> &);
	Scaleform::GFx::AS3::ASVM & operator*();
	Scaleform::GFx::AS3::ASVM * operator->();
	Scaleform::GFx::AS3::ASVM * GetPtr();
	bool operator bool();
	Scaleform::GFx::AS3::ASVM * Release();
	void Reset(Scaleform::GFx::AS3::ASVM *, bool);
private:
	Scaleform::GFx::AS3::ASVM * pObject; // 0x0
	bool Owner; // 0x8
	Scaleform::GFx::AS3::ASVM * constRelease();
public:
	void __dflt_ctor_closure();
};
struct Scaleform::GFx::AS3::MovieRoot::MouseState
{
	enum <unnamed-enum-MouseButton_Left>
	{
		MouseButton_Left = 1,
		MouseButton_Middle = 4,
		MouseButton_Right = 2,
		MouseButton_MaxNum = 16,
	};
	Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,323,Scaleform::ArrayDefaultPolicy> RolloverStack; // 0x0
	Scaleform::Ptr<Scaleform::GFx::InteractiveObject> LastMouseOverObj; // 0x18
	struct DoubleClickInfo;
	Scaleform::GFx::AS3::MovieRoot::MouseState::DoubleClickInfo DblClick[16]; // 0x20
	Scaleform::GFx::AS3::MovieRoot::MouseState::DoubleClickInfo & GetDoubleClickInfo(unsigned long);
	void Clear();
	MouseState(Scaleform::GFx::AS3::MovieRoot::MouseState &);
	MouseState(const Scaleform::GFx::AS3::MovieRoot::MouseState &);
	MouseState();
	~MouseState();
	Scaleform::GFx::AS3::MovieRoot::MouseState & operator=(Scaleform::GFx::AS3::MovieRoot::MouseState &);
	Scaleform::GFx::AS3::MovieRoot::MouseState & operator=(const Scaleform::GFx::AS3::MovieRoot::MouseState &);
};
class Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,323,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,323>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,323,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,323,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,323,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,323,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,323,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,323,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,323,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::Ptr<Scaleform::GFx::InteractiveObject>,323,Scaleform::ArrayDefaultPolicy>();
};
struct Scaleform::GFx::AS3::MovieRoot::MouseState::DoubleClickInfo
{
	unsigned long PrevClickTime; // 0x0
	Scaleform::Render::Point<float> PrevPosition; // 0x4
	DoubleClickInfo(Scaleform::GFx::AS3::MovieRoot::MouseState::DoubleClickInfo &);
	DoubleClickInfo(const Scaleform::GFx::AS3::MovieRoot::MouseState::DoubleClickInfo &);
	DoubleClickInfo();
	Scaleform::GFx::AS3::MovieRoot::MouseState::DoubleClickInfo & operator=(Scaleform::GFx::AS3::MovieRoot::MouseState::DoubleClickInfo &);
	Scaleform::GFx::AS3::MovieRoot::MouseState::DoubleClickInfo & operator=(const Scaleform::GFx::AS3::MovieRoot::MouseState::DoubleClickInfo &);
};
class Scaleform::GFx::ASStringHash<Scaleform::GFx::AS3::Value> :
	Scaleform::GFx::ASStringHashBase<Scaleform::GFx::AS3::Value,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor,324> >
{
	class SelfType;
	class BaseType;
public:
	ASStringHash<Scaleform::GFx::AS3::Value>(Scaleform::GFx::ASStringHash<Scaleform::GFx::AS3::Value> &);
	ASStringHash<Scaleform::GFx::AS3::Value>(const Scaleform::GFx::ASStringHash<Scaleform::GFx::AS3::Value> &);
	ASStringHash<Scaleform::GFx::AS3::Value>();
	~ASStringHash<Scaleform::GFx::AS3::Value>();
	Scaleform::GFx::ASStringHash<Scaleform::GFx::AS3::Value> & operator=(Scaleform::GFx::ASStringHash<Scaleform::GFx::AS3::Value> &);
	Scaleform::GFx::ASStringHash<Scaleform::GFx::AS3::Value> & operator=(const Scaleform::GFx::ASStringHash<Scaleform::GFx::AS3::Value> &);
};
struct Scaleform::GFx::AS3::MovieRoot::ActionEntry :
	Scaleform::NewOverrideBase<323>
{
	enum EntryType
	{
		Entry_None = 0,
		Entry_Event = 1,
		Entry_Function = 2,
		Entry_CFunction = 3,
	};
	typedef void(*CFunctionPtr)(const Scaleform::GFx::AS3::MovieRoot::ActionEntry &);
	Scaleform::GFx::AS3::MovieRoot::ActionEntry * pNextEntry; // 0x0
	Scaleform::GFx::AS3::MovieRoot::ActionEntry::EntryType Type; // 0x8
	Scaleform::Ptr<Scaleform::GFx::DisplayObject> pCharacter; // 0x10
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_display::DisplayObject> pAS3Obj; // 0x18
	Scaleform::GFx::EventId mEventId; // 0x20
	Scaleform::GFx::AS3::Value Function; // 0x38
	void(*CFunction)(const Scaleform::GFx::AS3::MovieRoot::ActionEntry &); // 0x58
	Scaleform::Ptr<Scaleform::GFx::AS3::NotifyLoadInitC> pNLoadInitCL; // 0x60
	ActionEntry(Scaleform::GFx::DisplayObject *, const Scaleform::GFx::EventId &);
	ActionEntry(const Scaleform::GFx::AS3::MovieRoot::ActionEntry &);
	ActionEntry();
	const Scaleform::GFx::AS3::MovieRoot::ActionEntry & operator=(const Scaleform::GFx::AS3::MovieRoot::ActionEntry &);
	void SetAction(Scaleform::GFx::DisplayObject *, Scaleform::GFx::AS3::Instances::fl_display::DisplayObject *, void(*)(const Scaleform::GFx::AS3::MovieRoot::ActionEntry &));
	void SetAction(Scaleform::GFx::DisplayObject *, const Scaleform::GFx::AS3::Value &);
	void SetAction(Scaleform::GFx::DisplayObject *, const Scaleform::GFx::EventId &);
	void ClearAction();
	void Execute(Scaleform::GFx::AS3::MovieRoot *);
private:
	bool operator==(const Scaleform::GFx::AS3::MovieRoot::ActionEntry &);
public:
	~ActionEntry();
};
struct Scaleform::GFx::AS3::MovieRoot::ActionQueueEntry
{
	Scaleform::GFx::AS3::MovieRoot::ActionEntry * pActionRoot; // 0x0
	Scaleform::GFx::AS3::MovieRoot::ActionEntry * pInsertEntry; // 0x8
	Scaleform::GFx::AS3::MovieRoot::ActionEntry * pLastEntry; // 0x10
	ActionQueueEntry();
	void Reset();
};
struct Scaleform::GFx::AS3::MovieRoot::ActionQueueType
{
	Scaleform::GFx::AS3::MovieRoot::ActionQueueEntry Entries[7]; // 0x0
	long ModId; // 0xA8
	Scaleform::GFx::AS3::MovieRoot::ActionEntry * pFreeEntry; // 0xB0
	unsigned long FreeEntriesCount; // 0xB8
	Scaleform::MemoryHeap * pHeap; // 0xC0
	ActionQueueType(Scaleform::MemoryHeap *);
	~ActionQueueType();
	Scaleform::MemoryHeap * GetMovieHeap();
	Scaleform::GFx::AS3::MovieRoot::ActionEntry * GetNewEntry();
	Scaleform::GFx::AS3::MovieRoot::ActionEntry * InsertEntry(Scaleform::GFx::AS3::MovieRoot::ActionLevel);
	Scaleform::GFx::AS3::MovieRoot::ActionEntry * PrependEntry(Scaleform::GFx::AS3::MovieRoot::ActionLevel);
	void AddToFreeList(Scaleform::GFx::AS3::MovieRoot::ActionEntry *);
	void Clear();
	Scaleform::GFx::AS3::MovieRoot::ActionEntry * GetInsertEntry(Scaleform::GFx::AS3::MovieRoot::ActionLevel);
	Scaleform::GFx::AS3::MovieRoot::ActionEntry * SetInsertEntry(Scaleform::GFx::AS3::MovieRoot::ActionLevel, Scaleform::GFx::AS3::MovieRoot::ActionEntry *);
	bool HasEntries(Scaleform::GFx::AS3::MovieRoot::ActionLevel);
};
struct Scaleform::GFx::AS3::MovieRoot::ActionQueueIterator
{
	long ModId; // 0x0
	Scaleform::GFx::AS3::MovieRoot::ActionQueueType * pActionQueue; // 0x8
	Scaleform::GFx::AS3::MovieRoot::ActionEntry * pCurEntry; // 0x10
	Scaleform::GFx::AS3::MovieRoot::ActionEntry * pRootEntry; // 0x18
	Scaleform::GFx::AS3::MovieRoot::ActionEntry * pLastEntry; // 0x20
	Scaleform::GFx::AS3::MovieRoot::ActionLevel Level; // 0x28
	ActionQueueIterator(Scaleform::GFx::AS3::MovieRoot::ActionLevel, Scaleform::GFx::AS3::MovieRoot::ActionQueueType *, Scaleform::GFx::AS3::MovieRoot::ActionEntry *);
	~ActionQueueIterator();
	const Scaleform::GFx::AS3::MovieRoot::ActionEntry * getNext();
};
class Scaleform::Ptr<Scaleform::GFx::AS3::Stage>
{
protected:
	Scaleform::GFx::AS3::Stage * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::AS3::Stage>(const Scaleform::Ptr<Scaleform::GFx::AS3::Stage> &);
	Ptr<Scaleform::GFx::AS3::Stage>(Scaleform::GFx::AS3::Stage *);
	Ptr<Scaleform::GFx::AS3::Stage>(Scaleform::Ptr<Scaleform::GFx::AS3::Stage> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::AS3::Stage>(Scaleform::Pickable<Scaleform::GFx::AS3::Stage>);
	Ptr<Scaleform::GFx::AS3::Stage>(Scaleform::GFx::AS3::Stage &);
	Ptr<Scaleform::GFx::AS3::Stage>();
	~Ptr<Scaleform::GFx::AS3::Stage>();
	bool operator==(Scaleform::GFx::AS3::Stage *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::AS3::Stage> &);
	bool operator!=(Scaleform::GFx::AS3::Stage *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::AS3::Stage> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::AS3::Stage> &);
	Scaleform::Ptr<Scaleform::GFx::AS3::Stage> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::Stage>);
	const Scaleform::Ptr<Scaleform::GFx::AS3::Stage> & operator=(Scaleform::GFx::AS3::Stage &);
	const Scaleform::Ptr<Scaleform::GFx::AS3::Stage> & operator=(Scaleform::GFx::AS3::Stage *);
	const Scaleform::Ptr<Scaleform::GFx::AS3::Stage> & operator=(const Scaleform::Ptr<Scaleform::GFx::AS3::Stage> &);
	Scaleform::Ptr<Scaleform::GFx::AS3::Stage> & SetPtr(Scaleform::Pickable<Scaleform::GFx::AS3::Stage>);
	Scaleform::Ptr<Scaleform::GFx::AS3::Stage> & SetPtr(Scaleform::GFx::AS3::Stage &);
	Scaleform::Ptr<Scaleform::GFx::AS3::Stage> & SetPtr(Scaleform::GFx::AS3::Stage *);
	Scaleform::Ptr<Scaleform::GFx::AS3::Stage> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::AS3::Stage> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::AS3::Stage * & GetRawRef();
	Scaleform::GFx::AS3::Stage * GetPtr();
	Scaleform::GFx::AS3::Stage & operator*();
	Scaleform::GFx::AS3::Stage * operator->();
	Scaleform::GFx::AS3::Stage * operator class Scaleform::GFx::AS3::Stage *();
	Scaleform::Ptr<Scaleform::GFx::AS3::Stage> & Pick(Scaleform::GFx::AS3::Stage *);
	Scaleform::Ptr<Scaleform::GFx::AS3::Stage> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::Stage>);
	Scaleform::Ptr<Scaleform::GFx::AS3::Stage> & Pick(Scaleform::Ptr<Scaleform::GFx::AS3::Stage> &);
};
struct Scaleform::GFx::AS3::MovieRoot::StickyVarNode :
	Scaleform::GFx::MovieImpl::StickyVarNode
{
	Scaleform::GFx::AS3::Value mValue; // 0x20
	StickyVarNode(const Scaleform::GFx::AS3::MovieRoot::StickyVarNode &);
	StickyVarNode(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Value &, bool);
	virtual void Assign(const Scaleform::GFx::MovieImpl::StickyVarNode &);
	virtual ~StickyVarNode();
};
void Scaleform::GFx::AS3::MovieRoot::StickyVarNode::Assign(const Scaleform::GFx::MovieImpl::StickyVarNode & node); // 0x1404610B0
struct Scaleform::GFx::AS3::MovieRoot::LoadedMovieDefInfo
{
	unsigned long UseCnt; // 0x0
	LoadedMovieDefInfo();
};
class Scaleform::HashIdentityLH<Scaleform::GFx::MovieDefImpl *,Scaleform::GFx::AS3::MovieRoot::LoadedMovieDefInfo,2,Scaleform::IdentityHash<Scaleform::GFx::MovieDefImpl *> > :
	Scaleform::HashUncachedLH<Scaleform::GFx::MovieDefImpl *,Scaleform::GFx::AS3::MovieRoot::LoadedMovieDefInfo,Scaleform::IdentityHash<Scaleform::GFx::MovieDefImpl *>,2>
{
	class SelfType;
	class BaseType;
public:
	HashIdentityLH<Scaleform::GFx::MovieDefImpl *,Scaleform::GFx::AS3::MovieRoot::LoadedMovieDefInfo,2,Scaleform::IdentityHash<Scaleform::GFx::MovieDefImpl *> >(const Scaleform::HashIdentityLH<Scaleform::GFx::MovieDefImpl *,Scaleform::GFx::AS3::MovieRoot::LoadedMovieDefInfo,2,Scaleform::IdentityHash<Scaleform::GFx::MovieDefImpl *> > &);
	HashIdentityLH<Scaleform::GFx::MovieDefImpl *,Scaleform::GFx::AS3::MovieRoot::LoadedMovieDefInfo,2,Scaleform::IdentityHash<Scaleform::GFx::MovieDefImpl *> >(long);
	HashIdentityLH<Scaleform::GFx::MovieDefImpl *,Scaleform::GFx::AS3::MovieRoot::LoadedMovieDefInfo,2,Scaleform::IdentityHash<Scaleform::GFx::MovieDefImpl *> >();
	~HashIdentityLH<Scaleform::GFx::MovieDefImpl *,Scaleform::GFx::AS3::MovieRoot::LoadedMovieDefInfo,2,Scaleform::IdentityHash<Scaleform::GFx::MovieDefImpl *> >();
	void operator=(const Scaleform::HashIdentityLH<Scaleform::GFx::MovieDefImpl *,Scaleform::GFx::AS3::MovieRoot::LoadedMovieDefInfo,2,Scaleform::IdentityHash<Scaleform::GFx::MovieDefImpl *> > &);
};
Scaleform::GFx::AS3::MovieRoot::ActionEntry * Scaleform::GFx::AS3::MovieRoot::InsertEmptyAction(Scaleform::GFx::AS3::MovieRoot::ActionLevel lvl); // 0x14048E4F0
Scaleform::GFx::MemoryContext * Scaleform::GFx::AS3::MovieRoot::GetMemoryContext(); // 0x140370730
Scaleform::GFx::ASStringManager * Scaleform::GFx::AS3::MovieRoot::GetStringManager(); // 0x14048AF50
class Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *,2,Scaleform::ArrayDefaultPolicy> >
{
public:
	AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *,2,Scaleform::ArrayDefaultPolicy> >(const Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *,2,Scaleform::ArrayDefaultPolicy> > &);
	AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *,2,Scaleform::ArrayDefaultPolicy> >(Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *,2,Scaleform::ArrayDefaultPolicy> *, bool);
	AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *,2,Scaleform::ArrayDefaultPolicy> >(Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *,2,Scaleform::ArrayDefaultPolicy> *);
	~AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *,2,Scaleform::ArrayDefaultPolicy> >();
	Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *,2,Scaleform::ArrayDefaultPolicy> > & operator=(Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *,2,Scaleform::ArrayDefaultPolicy> *);
	Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *,2,Scaleform::ArrayDefaultPolicy> > & operator=(const Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *,2,Scaleform::ArrayDefaultPolicy> > &);
	Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *,2,Scaleform::ArrayDefaultPolicy> & operator*();
	Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *,2,Scaleform::ArrayDefaultPolicy> * operator->();
	Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *,2,Scaleform::ArrayDefaultPolicy> * GetPtr();
	bool operator bool();
	Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *,2,Scaleform::ArrayDefaultPolicy> * Release();
	void Reset(Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *,2,Scaleform::ArrayDefaultPolicy> *, bool);
private:
	Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *,2,Scaleform::ArrayDefaultPolicy> * pObject; // 0x0
	bool Owner; // 0x8
	Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *,2,Scaleform::ArrayDefaultPolicy> * constRelease();
public:
	void __dflt_ctor_closure();
};
class Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2,Scaleform::ArrayDefaultPolicy> >
{
public:
	AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2,Scaleform::ArrayDefaultPolicy> >(const Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2,Scaleform::ArrayDefaultPolicy> > &);
	AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2,Scaleform::ArrayDefaultPolicy> >(Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2,Scaleform::ArrayDefaultPolicy> *, bool);
	AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2,Scaleform::ArrayDefaultPolicy> >(Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2,Scaleform::ArrayDefaultPolicy> *);
	~AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2,Scaleform::ArrayDefaultPolicy> >();
	Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2,Scaleform::ArrayDefaultPolicy> > & operator=(Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2,Scaleform::ArrayDefaultPolicy> *);
	Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2,Scaleform::ArrayDefaultPolicy> > & operator=(const Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2,Scaleform::ArrayDefaultPolicy> > &);
	Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2,Scaleform::ArrayDefaultPolicy> & operator*();
	Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2,Scaleform::ArrayDefaultPolicy> * operator->();
	Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2,Scaleform::ArrayDefaultPolicy> * GetPtr();
	bool operator bool();
	Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2,Scaleform::ArrayDefaultPolicy> * Release();
	void Reset(Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2,Scaleform::ArrayDefaultPolicy> *, bool);
private:
	Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2,Scaleform::ArrayDefaultPolicy> * pObject; // 0x0
	bool Owner; // 0x8
	Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2,Scaleform::ArrayDefaultPolicy> * constRelease();
public:
	void __dflt_ctor_closure();
};
class Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *,2,Scaleform::ArrayDefaultPolicy> >
{
public:
	AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *,2,Scaleform::ArrayDefaultPolicy> >(const Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *,2,Scaleform::ArrayDefaultPolicy> > &);
	AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *,2,Scaleform::ArrayDefaultPolicy> >(Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *,2,Scaleform::ArrayDefaultPolicy> *, bool);
	AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *,2,Scaleform::ArrayDefaultPolicy> >(Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *,2,Scaleform::ArrayDefaultPolicy> *);
	~AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *,2,Scaleform::ArrayDefaultPolicy> >();
	Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *,2,Scaleform::ArrayDefaultPolicy> > & operator=(Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *,2,Scaleform::ArrayDefaultPolicy> *);
	Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *,2,Scaleform::ArrayDefaultPolicy> > & operator=(const Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *,2,Scaleform::ArrayDefaultPolicy> > &);
	Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *,2,Scaleform::ArrayDefaultPolicy> & operator*();
	Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *,2,Scaleform::ArrayDefaultPolicy> * operator->();
	Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *,2,Scaleform::ArrayDefaultPolicy> * GetPtr();
	bool operator bool();
	Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *,2,Scaleform::ArrayDefaultPolicy> * Release();
	void Reset(Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *,2,Scaleform::ArrayDefaultPolicy> *, bool);
private:
	Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *,2,Scaleform::ArrayDefaultPolicy> * pObject; // 0x0
	bool Owner; // 0x8
	Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *,2,Scaleform::ArrayDefaultPolicy> * constRelease();
public:
	void __dflt_ctor_closure();
};
class Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::Array<Scaleform::GFx::AS3::Value,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::Value,Scaleform::AllocatorGH<Scaleform::GFx::AS3::Value,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<Scaleform::GFx::AS3::Value,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<Scaleform::GFx::AS3::Value,2,Scaleform::ArrayDefaultPolicy> &);
	Array<Scaleform::GFx::AS3::Value,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<Scaleform::GFx::AS3::Value,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<Scaleform::GFx::AS3::Value,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<Scaleform::GFx::AS3::Value,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<Scaleform::GFx::AS3::Value,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<Scaleform::GFx::AS3::Value,2,Scaleform::ArrayDefaultPolicy>();
};
Scaleform::Log * Scaleform::GFx::AS3::ASVM::GetLog(); // 0x140548EE0