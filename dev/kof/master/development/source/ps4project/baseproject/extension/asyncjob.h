#pragma once

class extension::GraphicsLock :
	extension::ExLockableLock<extension::ExLockable<extension::ExMutex> >
{
	class Base_t;
private:
	static extension::ExMutex s_mutex; // 0xFFFFFFFFFFFFFFFF
public:
	GraphicsLock();
	~GraphicsLock();
};
class extension::AsyncJobConsumer :
	protected extension::ExThread::Runnable
{
public:
	AsyncJobConsumer(long);
	virtual ~AsyncJobConsumer();
	void start(const extension::ExThread::StartParam &);
	void join();
	void enqueueJob(std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >);
private:
	virtual long run();
	extension::ExSimpleThreadPool<extension::ExThread> m_threads; // 0x10
	extension::SynchronizedQueue<extension::ExThread::Runnable> m_jobQueue; // 0x20
public:
	void __dflt_ctor_closure();
};
class std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > :
	std::_Unique_ptr_base<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >
{
	class _Myt;
	class _Mybase;
	typedef extension::ExThread::Runnable pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >(const std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > &);
	unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >(std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > &);
	unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >(extension::ExThread::Runnable *, std::default_delete<extension::ExThread::Runnable> &);
	unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >(extension::ExThread::Runnable *, const std::default_delete<extension::ExThread::Runnable> &);
	unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >(extension::ExThread::Runnable *);
	unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >(void *);
	unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >();
	std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > & operator=(const std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > &);
	std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > & operator=(std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > &);
	std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > & operator=(void *);
	void swap(std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > &);
	~unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >();
	extension::ExThread::Runnable & operator*();
	extension::ExThread::Runnable * operator->();
	extension::ExThread::Runnable * get();
	bool operator bool();
	extension::ExThread::Runnable * release();
	void reset(extension::ExThread::Runnable *);
};
class extension::ExSimpleThreadPool<extension::ExThread>
{
private:
	std::unique_ptr<extension::ExThread [0],std::default_delete<extension::ExThread [0]> > m_threads; // 0x0
	long m_count; // 0x8
public:
	ExSimpleThreadPool<extension::ExThread>(long);
	~ExSimpleThreadPool<extension::ExThread>();
	void start(const extension::ExThread::StartParam, extension::ExThread::Runnable *);
	void join();
	void requestForExit();
};
class extension::SynchronizedQueue<extension::ExThread::Runnable> :
	protected extension::ExSimpleLockable<extension::SynchronizedQueue<extension::ExThread::Runnable> >
{
	class Queue_t;
private:
	extension::ExWaitCondition m_enqueueCondition; // 0x28
	std::deque<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >,std::allocator<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > m_queue; // 0x60
	bool m_isClosed; // 0x88
public:
	SynchronizedQueue<extension::ExThread::Runnable>();
private:
	SynchronizedQueue<extension::ExThread::Runnable>(const extension::SynchronizedQueue<extension::ExThread::Runnable> &);
	extension::SynchronizedQueue<extension::ExThread::Runnable> & operator=(const extension::SynchronizedQueue<extension::ExThread::Runnable> &);
	class ScopedLock_t;
public:
	~SynchronizedQueue<extension::ExThread::Runnable>();
	void close();
	bool isClosed();
	void enqueue(std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >);
	std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > dequeue();
};
class extension::AsyncWorker
{
public:
	AsyncWorker();
private:
	AsyncWorker(const extension::AsyncWorker &);
	extension::AsyncWorker & operator=(const extension::AsyncWorker &);
	~AsyncWorker();
public:
	static extension::AsyncWorker & Instance();
	void enqueueLoadJob(std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >);
	void enqueueFixupJob(std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >);
	static std::string NormalizeAssetPath(const std::string &);
	static std::string NormalizeAssetPath(const char *);
	static std::string ExtractAssetDirectory(const std::string &);
	static std::string ExtractAssetDirectory(const char *);
	static std::string ExtractAssetFileName(const std::string &);
	static std::string ExtractAssetFileName(const char *);
	static std::string ExtractAssetBaseName(const std::string &);
	static std::string ExtractAssetBaseName(const char *);
	static std::string ToLowerCasePath(const std::string &);
	static std::string ToLowerCasePath(const char *);
private:
	static extension::AsyncWorker s_instance; // 0xFFFFFFFFFFFFFFFF
	extension::AsyncJobConsumer m_loadJobConsumer; // 0x0
	extension::AsyncJobConsumer m_fixupJobConsumer; // 0xB0
};
std::string extension::AsyncWorker::ExtractAssetDirectory(const char * path_str); // 0x1402B0FB0
std::string extension::AsyncWorker::ExtractAssetFileName(const char * path_str); // 0x140248870
std::string extension::AsyncWorker::ExtractAssetBaseName(const char * path_str); // 0x140248890
std::string extension::AsyncWorker::NormalizeAssetPath(const std::string & path_str); // 0x1400A2870
std::string extension::AsyncWorker::ExtractAssetDirectory(const std::string & path_str); // 0x1402488B0
std::string extension::AsyncWorker::ExtractAssetBaseName(const std::string & path_str); // 0x1402488D0
std::string extension::AsyncWorker::ToLowerCasePath(const std::string & path_str); // 0x1400A2890
class extension::AsyncStatus
{
public:
	AsyncStatus();
private:
	AsyncStatus(const extension::AsyncStatus &);
	extension::AsyncStatus & operator=(const extension::AsyncStatus &);
public:
	~AsyncStatus();
	enum Step
	{
		Step_Pending = 0,
		Step_Ready = 1,
	};
	bool isReady();
	void waitForReady();
	void requestForCancel();
	bool isCancelRequested();
	extension::AsyncStatus::Step getStep();
	void setStep(extension::AsyncStatus::Step);
private:
	void waitFor(extension::AsyncStatus::Step);
	enum StateFlags
	{
		StateFlags_StepReady = 1,
		StateFlags_Canceled = 2,
	};
	extension::AtomicInt m_stateFlags; // 0x0
	static extension::ExSimpleMutex s_mutex; // 0xFFFFFFFFFFFFFFFF
	static extension::ExWaitCondition s_signalCondition; // 0xFFFFFFFFFFFFFFFF
};
struct extension::AsyncContentConstants
{
	enum ErrorCode
	{
		ErrorCode_None = 0,
		ErrorCode_LoadFailed = 1,
		ErrorCode_DataBroken = 2,
		ErrorCode_InvalidFormat = 3,
		ErrorCode_Canceled = 4,
		ErrorCode_Internal = 5,
	};
	static const char * GetErrorString(extension::AsyncContentConstants::ErrorCode);
protected:
	AsyncContentConstants();
	~AsyncContentConstants();
};
enum extension::AsyncContentConstants::ErrorCode
{
	ErrorCode_None = 0,
	ErrorCode_LoadFailed = 1,
	ErrorCode_DataBroken = 2,
	ErrorCode_InvalidFormat = 3,
	ErrorCode_Canceled = 4,
	ErrorCode_Internal = 5,
};
class extension::RefCountable<extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> >
{
private:
	extension::AtomicInt m_refCount; // 0x0
	void addRef();
	void release();
protected:
	RefCountable<extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> >(const extension::RefCountable<extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> > &);
public:
	RefCountable<extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> >();
protected:
	extension::RefCountable<extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> > & operator=(const extension::RefCountable<extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> > &);
	~RefCountable<extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> >();
};
class extension::RefCountable<extension::AsyncContent<extension::AsyncAsset> >
{
private:
	extension::AtomicInt m_refCount; // 0x0
	void addRef();
	void release();
protected:
	RefCountable<extension::AsyncContent<extension::AsyncAsset> >(const extension::RefCountable<extension::AsyncContent<extension::AsyncAsset> > &);
public:
	RefCountable<extension::AsyncContent<extension::AsyncAsset> >();
protected:
	extension::RefCountable<extension::AsyncContent<extension::AsyncAsset> > & operator=(const extension::RefCountable<extension::AsyncContent<extension::AsyncAsset> > &);
	~RefCountable<extension::AsyncContent<extension::AsyncAsset> >();
};
class extension::RefCountable<extension::AsyncContent<extension::AsyncFileImage> >
{
private:
	extension::AtomicInt m_refCount; // 0x0
	void addRef();
	void release();
protected:
	RefCountable<extension::AsyncContent<extension::AsyncFileImage> >(const extension::RefCountable<extension::AsyncContent<extension::AsyncFileImage> > &);
public:
	RefCountable<extension::AsyncContent<extension::AsyncFileImage> >();
protected:
	extension::RefCountable<extension::AsyncContent<extension::AsyncFileImage> > & operator=(const extension::RefCountable<extension::AsyncContent<extension::AsyncFileImage> > &);
	~RefCountable<extension::AsyncContent<extension::AsyncFileImage> >();
};
class extension::RefCountable<extension::AsyncContent<OGLCamera> >
{
private:
	extension::AtomicInt m_refCount; // 0x0
	void addRef();
	void release();
protected:
	RefCountable<extension::AsyncContent<OGLCamera> >(const extension::RefCountable<extension::AsyncContent<OGLCamera> > &);
public:
	RefCountable<extension::AsyncContent<OGLCamera> >();
protected:
	extension::RefCountable<extension::AsyncContent<OGLCamera> > & operator=(const extension::RefCountable<extension::AsyncContent<OGLCamera> > &);
	~RefCountable<extension::AsyncContent<OGLCamera> >();
};
class extension::RefCountable<extension::AsyncContent<OGLSecondary> >
{
private:
	extension::AtomicInt m_refCount; // 0x0
	void addRef();
	void release();
protected:
	RefCountable<extension::AsyncContent<OGLSecondary> >(const extension::RefCountable<extension::AsyncContent<OGLSecondary> > &);
public:
	RefCountable<extension::AsyncContent<OGLSecondary> >();
protected:
	extension::RefCountable<extension::AsyncContent<OGLSecondary> > & operator=(const extension::RefCountable<extension::AsyncContent<OGLSecondary> > &);
	~RefCountable<extension::AsyncContent<OGLSecondary> >();
};
class extension::RefCountable<extension::AsyncContent<Image> >
{
private:
	extension::AtomicInt m_refCount; // 0x0
	void addRef();
	void release();
protected:
	RefCountable<extension::AsyncContent<Image> >(const extension::RefCountable<extension::AsyncContent<Image> > &);
public:
	RefCountable<extension::AsyncContent<Image> >();
protected:
	extension::RefCountable<extension::AsyncContent<Image> > & operator=(const extension::RefCountable<extension::AsyncContent<Image> > &);
	~RefCountable<extension::AsyncContent<Image> >();
};
class extension::RefCountable<extension::AsyncContent<extension::exsound_detail::SoundBankImpl> >
{
private:
	extension::AtomicInt m_refCount; // 0x0
	void addRef();
	void release();
protected:
	RefCountable<extension::AsyncContent<extension::exsound_detail::SoundBankImpl> >(const extension::RefCountable<extension::AsyncContent<extension::exsound_detail::SoundBankImpl> > &);
public:
	RefCountable<extension::AsyncContent<extension::exsound_detail::SoundBankImpl> >();
protected:
	extension::RefCountable<extension::AsyncContent<extension::exsound_detail::SoundBankImpl> > & operator=(const extension::RefCountable<extension::AsyncContent<extension::exsound_detail::SoundBankImpl> > &);
	~RefCountable<extension::AsyncContent<extension::exsound_detail::SoundBankImpl> >();
};
class extension::RefCountable<extension::AsyncContent<CharaDataUnify> >
{
private:
	extension::AtomicInt m_refCount; // 0x0
	void addRef();
	void release();
protected:
	RefCountable<extension::AsyncContent<CharaDataUnify> >(const extension::RefCountable<extension::AsyncContent<CharaDataUnify> > &);
public:
	RefCountable<extension::AsyncContent<CharaDataUnify> >();
protected:
	extension::RefCountable<extension::AsyncContent<CharaDataUnify> > & operator=(const extension::RefCountable<extension::AsyncContent<CharaDataUnify> > &);
	~RefCountable<extension::AsyncContent<CharaDataUnify> >();
};
class extension::RefCountable<extension::AsyncContent<OGLCurve> >
{
private:
	extension::AtomicInt m_refCount; // 0x0
	void addRef();
	void release();
protected:
	RefCountable<extension::AsyncContent<OGLCurve> >(const extension::RefCountable<extension::AsyncContent<OGLCurve> > &);
public:
	RefCountable<extension::AsyncContent<OGLCurve> >();
protected:
	extension::RefCountable<extension::AsyncContent<OGLCurve> > & operator=(const extension::RefCountable<extension::AsyncContent<OGLCurve> > &);
	~RefCountable<extension::AsyncContent<OGLCurve> >();
};
class extension::RefCountable<extension::AsyncContent<extension::GFXIMovieData> >
{
private:
	extension::AtomicInt m_refCount; // 0x0
	void addRef();
	void release();
protected:
	RefCountable<extension::AsyncContent<extension::GFXIMovieData> >(const extension::RefCountable<extension::AsyncContent<extension::GFXIMovieData> > &);
public:
	RefCountable<extension::AsyncContent<extension::GFXIMovieData> >();
protected:
	extension::RefCountable<extension::AsyncContent<extension::GFXIMovieData> > & operator=(const extension::RefCountable<extension::AsyncContent<extension::GFXIMovieData> > &);
	~RefCountable<extension::AsyncContent<extension::GFXIMovieData> >();
};
class extension::RefCountable<extension::AsyncContent<CMediaSound> >
{
private:
	extension::AtomicInt m_refCount; // 0x0
	void addRef();
	void release();
protected:
	RefCountable<extension::AsyncContent<CMediaSound> >(const extension::RefCountable<extension::AsyncContent<CMediaSound> > &);
public:
	RefCountable<extension::AsyncContent<CMediaSound> >();
protected:
	extension::RefCountable<extension::AsyncContent<CMediaSound> > & operator=(const extension::RefCountable<extension::AsyncContent<CMediaSound> > &);
	~RefCountable<extension::AsyncContent<CMediaSound> >();
};
class extension::RefCountable<extension::AsyncContent<OGLTexture> >
{
private:
	extension::AtomicInt m_refCount; // 0x0
	void addRef();
	void release();
protected:
	RefCountable<extension::AsyncContent<OGLTexture> >(const extension::RefCountable<extension::AsyncContent<OGLTexture> > &);
public:
	RefCountable<extension::AsyncContent<OGLTexture> >();
protected:
	extension::RefCountable<extension::AsyncContent<OGLTexture> > & operator=(const extension::RefCountable<extension::AsyncContent<OGLTexture> > &);
	~RefCountable<extension::AsyncContent<OGLTexture> >();
};
class extension::RefCountable<extension::AsyncContent<OGLMotion> >
{
private:
	extension::AtomicInt m_refCount; // 0x0
	void addRef();
	void release();
protected:
	RefCountable<extension::AsyncContent<OGLMotion> >(const extension::RefCountable<extension::AsyncContent<OGLMotion> > &);
public:
	RefCountable<extension::AsyncContent<OGLMotion> >();
protected:
	extension::RefCountable<extension::AsyncContent<OGLMotion> > & operator=(const extension::RefCountable<extension::AsyncContent<OGLMotion> > &);
	~RefCountable<extension::AsyncContent<OGLMotion> >();
};
class extension::RefCountable<extension::AsyncContent<OGLMirror> >
{
private:
	extension::AtomicInt m_refCount; // 0x0
	void addRef();
	void release();
protected:
	RefCountable<extension::AsyncContent<OGLMirror> >(const extension::RefCountable<extension::AsyncContent<OGLMirror> > &);
public:
	RefCountable<extension::AsyncContent<OGLMirror> >();
protected:
	extension::RefCountable<extension::AsyncContent<OGLMirror> > & operator=(const extension::RefCountable<extension::AsyncContent<OGLMirror> > &);
	~RefCountable<extension::AsyncContent<OGLMirror> >();
};
class extension::RefCountable<extension::AsyncContent<OGLFigure> >
{
private:
	extension::AtomicInt m_refCount; // 0x0
	void addRef();
	void release();
protected:
	RefCountable<extension::AsyncContent<OGLFigure> >(const extension::RefCountable<extension::AsyncContent<OGLFigure> > &);
public:
	RefCountable<extension::AsyncContent<OGLFigure> >();
protected:
	extension::RefCountable<extension::AsyncContent<OGLFigure> > & operator=(const extension::RefCountable<extension::AsyncContent<OGLFigure> > &);
	~RefCountable<extension::AsyncContent<OGLFigure> >();
};
class extension::RefCountable<extension::AsyncContent<ComboMissionData> >
{
private:
	extension::AtomicInt m_refCount; // 0x0
	void addRef();
	void release();
protected:
	RefCountable<extension::AsyncContent<ComboMissionData> >(const extension::RefCountable<extension::AsyncContent<ComboMissionData> > &);
public:
	RefCountable<extension::AsyncContent<ComboMissionData> >();
protected:
	extension::RefCountable<extension::AsyncContent<ComboMissionData> > & operator=(const extension::RefCountable<extension::AsyncContent<ComboMissionData> > &);
	~RefCountable<extension::AsyncContent<ComboMissionData> >();
};
class extension::RefCountable<extension::AsyncContent<StageResources> >
{
private:
	extension::AtomicInt m_refCount; // 0x0
	void addRef();
	void release();
protected:
	RefCountable<extension::AsyncContent<StageResources> >(const extension::RefCountable<extension::AsyncContent<StageResources> > &);
public:
	RefCountable<extension::AsyncContent<StageResources> >();
protected:
	extension::RefCountable<extension::AsyncContent<StageResources> > & operator=(const extension::RefCountable<extension::AsyncContent<StageResources> > &);
	~RefCountable<extension::AsyncContent<StageResources> >();
};
class extension::RefCountable<extension::AsyncContent<CharaProjectData> >
{
private:
	extension::AtomicInt m_refCount; // 0x0
	void addRef();
	void release();
protected:
	RefCountable<extension::AsyncContent<CharaProjectData> >(const extension::RefCountable<extension::AsyncContent<CharaProjectData> > &);
public:
	RefCountable<extension::AsyncContent<CharaProjectData> >();
protected:
	extension::RefCountable<extension::AsyncContent<CharaProjectData> > & operator=(const extension::RefCountable<extension::AsyncContent<CharaProjectData> > &);
	~RefCountable<extension::AsyncContent<CharaProjectData> >();
};
class extension::RefCountable<extension::AsyncContent<StageProjectData> >
{
private:
	extension::AtomicInt m_refCount; // 0x0
	void addRef();
	void release();
protected:
	RefCountable<extension::AsyncContent<StageProjectData> >(const extension::RefCountable<extension::AsyncContent<StageProjectData> > &);
public:
	RefCountable<extension::AsyncContent<StageProjectData> >();
protected:
	extension::RefCountable<extension::AsyncContent<StageProjectData> > & operator=(const extension::RefCountable<extension::AsyncContent<StageProjectData> > &);
	~RefCountable<extension::AsyncContent<StageProjectData> >();
};
class std::unique_ptr<extension::AsyncFileImage,std::default_delete<extension::AsyncFileImage> > :
	std::_Unique_ptr_base<extension::AsyncFileImage,std::default_delete<extension::AsyncFileImage> >
{
	class _Myt;
	class _Mybase;
	typedef extension::AsyncFileImage pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<extension::AsyncFileImage,std::default_delete<extension::AsyncFileImage> >(const std::unique_ptr<extension::AsyncFileImage,std::default_delete<extension::AsyncFileImage> > &);
	unique_ptr<extension::AsyncFileImage,std::default_delete<extension::AsyncFileImage> >(std::unique_ptr<extension::AsyncFileImage,std::default_delete<extension::AsyncFileImage> > &);
	unique_ptr<extension::AsyncFileImage,std::default_delete<extension::AsyncFileImage> >(extension::AsyncFileImage *, std::default_delete<extension::AsyncFileImage> &);
	unique_ptr<extension::AsyncFileImage,std::default_delete<extension::AsyncFileImage> >(extension::AsyncFileImage *, const std::default_delete<extension::AsyncFileImage> &);
	unique_ptr<extension::AsyncFileImage,std::default_delete<extension::AsyncFileImage> >(extension::AsyncFileImage *);
	unique_ptr<extension::AsyncFileImage,std::default_delete<extension::AsyncFileImage> >(void *);
	unique_ptr<extension::AsyncFileImage,std::default_delete<extension::AsyncFileImage> >();
	std::unique_ptr<extension::AsyncFileImage,std::default_delete<extension::AsyncFileImage> > & operator=(const std::unique_ptr<extension::AsyncFileImage,std::default_delete<extension::AsyncFileImage> > &);
	std::unique_ptr<extension::AsyncFileImage,std::default_delete<extension::AsyncFileImage> > & operator=(std::unique_ptr<extension::AsyncFileImage,std::default_delete<extension::AsyncFileImage> > &);
	std::unique_ptr<extension::AsyncFileImage,std::default_delete<extension::AsyncFileImage> > & operator=(void *);
	void swap(std::unique_ptr<extension::AsyncFileImage,std::default_delete<extension::AsyncFileImage> > &);
	~unique_ptr<extension::AsyncFileImage,std::default_delete<extension::AsyncFileImage> >();
	extension::AsyncFileImage & operator*();
	extension::AsyncFileImage * operator->();
	extension::AsyncFileImage * get();
	bool operator bool();
	extension::AsyncFileImage * release();
	void reset(extension::AsyncFileImage *);
};
class std::unique_ptr<extension::AsyncAsset,std::default_delete<extension::AsyncAsset> > :
	std::_Unique_ptr_base<extension::AsyncAsset,std::default_delete<extension::AsyncAsset> >
{
	class _Myt;
	class _Mybase;
	typedef extension::AsyncAsset pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<extension::AsyncAsset,std::default_delete<extension::AsyncAsset> >(const std::unique_ptr<extension::AsyncAsset,std::default_delete<extension::AsyncAsset> > &);
	unique_ptr<extension::AsyncAsset,std::default_delete<extension::AsyncAsset> >(std::unique_ptr<extension::AsyncAsset,std::default_delete<extension::AsyncAsset> > &);
	unique_ptr<extension::AsyncAsset,std::default_delete<extension::AsyncAsset> >(extension::AsyncAsset *, std::default_delete<extension::AsyncAsset> &);
	unique_ptr<extension::AsyncAsset,std::default_delete<extension::AsyncAsset> >(extension::AsyncAsset *, const std::default_delete<extension::AsyncAsset> &);
	unique_ptr<extension::AsyncAsset,std::default_delete<extension::AsyncAsset> >(extension::AsyncAsset *);
	unique_ptr<extension::AsyncAsset,std::default_delete<extension::AsyncAsset> >(void *);
	unique_ptr<extension::AsyncAsset,std::default_delete<extension::AsyncAsset> >();
	std::unique_ptr<extension::AsyncAsset,std::default_delete<extension::AsyncAsset> > & operator=(const std::unique_ptr<extension::AsyncAsset,std::default_delete<extension::AsyncAsset> > &);
	std::unique_ptr<extension::AsyncAsset,std::default_delete<extension::AsyncAsset> > & operator=(std::unique_ptr<extension::AsyncAsset,std::default_delete<extension::AsyncAsset> > &);
	std::unique_ptr<extension::AsyncAsset,std::default_delete<extension::AsyncAsset> > & operator=(void *);
	void swap(std::unique_ptr<extension::AsyncAsset,std::default_delete<extension::AsyncAsset> > &);
	~unique_ptr<extension::AsyncAsset,std::default_delete<extension::AsyncAsset> >();
	extension::AsyncAsset & operator*();
	extension::AsyncAsset * operator->();
	extension::AsyncAsset * get();
	bool operator bool();
	extension::AsyncAsset * release();
	void reset(extension::AsyncAsset *);
};
class std::unique_ptr<CMediaSound,std::default_delete<CMediaSound> > :
	std::_Unique_ptr_base<CMediaSound,std::default_delete<CMediaSound> >
{
	class _Myt;
	class _Mybase;
	typedef CMediaSound pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<CMediaSound,std::default_delete<CMediaSound> >(const std::unique_ptr<CMediaSound,std::default_delete<CMediaSound> > &);
	unique_ptr<CMediaSound,std::default_delete<CMediaSound> >(std::unique_ptr<CMediaSound,std::default_delete<CMediaSound> > &);
	unique_ptr<CMediaSound,std::default_delete<CMediaSound> >(CMediaSound *, std::default_delete<CMediaSound> &);
	unique_ptr<CMediaSound,std::default_delete<CMediaSound> >(CMediaSound *, const std::default_delete<CMediaSound> &);
	unique_ptr<CMediaSound,std::default_delete<CMediaSound> >(CMediaSound *);
	unique_ptr<CMediaSound,std::default_delete<CMediaSound> >(void *);
	unique_ptr<CMediaSound,std::default_delete<CMediaSound> >();
	std::unique_ptr<CMediaSound,std::default_delete<CMediaSound> > & operator=(const std::unique_ptr<CMediaSound,std::default_delete<CMediaSound> > &);
	std::unique_ptr<CMediaSound,std::default_delete<CMediaSound> > & operator=(std::unique_ptr<CMediaSound,std::default_delete<CMediaSound> > &);
	std::unique_ptr<CMediaSound,std::default_delete<CMediaSound> > & operator=(void *);
	void swap(std::unique_ptr<CMediaSound,std::default_delete<CMediaSound> > &);
	~unique_ptr<CMediaSound,std::default_delete<CMediaSound> >();
	CMediaSound & operator*();
	CMediaSound * operator->();
	CMediaSound * get();
	bool operator bool();
	CMediaSound * release();
	void reset(CMediaSound *);
};
class std::unique_ptr<OGLMirror,std::default_delete<OGLMirror> > :
	std::_Unique_ptr_base<OGLMirror,std::default_delete<OGLMirror> >
{
	class _Myt;
	class _Mybase;
	typedef OGLMirror pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<OGLMirror,std::default_delete<OGLMirror> >(const std::unique_ptr<OGLMirror,std::default_delete<OGLMirror> > &);
	unique_ptr<OGLMirror,std::default_delete<OGLMirror> >(std::unique_ptr<OGLMirror,std::default_delete<OGLMirror> > &);
	unique_ptr<OGLMirror,std::default_delete<OGLMirror> >(OGLMirror *, std::default_delete<OGLMirror> &);
	unique_ptr<OGLMirror,std::default_delete<OGLMirror> >(OGLMirror *, const std::default_delete<OGLMirror> &);
	unique_ptr<OGLMirror,std::default_delete<OGLMirror> >(OGLMirror *);
	unique_ptr<OGLMirror,std::default_delete<OGLMirror> >(void *);
	unique_ptr<OGLMirror,std::default_delete<OGLMirror> >();
	std::unique_ptr<OGLMirror,std::default_delete<OGLMirror> > & operator=(const std::unique_ptr<OGLMirror,std::default_delete<OGLMirror> > &);
	std::unique_ptr<OGLMirror,std::default_delete<OGLMirror> > & operator=(std::unique_ptr<OGLMirror,std::default_delete<OGLMirror> > &);
	std::unique_ptr<OGLMirror,std::default_delete<OGLMirror> > & operator=(void *);
	void swap(std::unique_ptr<OGLMirror,std::default_delete<OGLMirror> > &);
	~unique_ptr<OGLMirror,std::default_delete<OGLMirror> >();
	OGLMirror & operator*();
	OGLMirror * operator->();
	OGLMirror * get();
	bool operator bool();
	OGLMirror * release();
	void reset(OGLMirror *);
};
class std::unique_ptr<AsyncKeyRecordDataLoad::KeyData,std::default_delete<AsyncKeyRecordDataLoad::KeyData> > :
	std::_Unique_ptr_base<AsyncKeyRecordDataLoad::KeyData,std::default_delete<AsyncKeyRecordDataLoad::KeyData> >
{
	class _Myt;
	class _Mybase;
	typedef AsyncKeyRecordDataLoad::KeyData pointer;
	struct element_type;
	struct deleter_type;
public:
	unique_ptr<AsyncKeyRecordDataLoad::KeyData,std::default_delete<AsyncKeyRecordDataLoad::KeyData> >(const std::unique_ptr<AsyncKeyRecordDataLoad::KeyData,std::default_delete<AsyncKeyRecordDataLoad::KeyData> > &);
	unique_ptr<AsyncKeyRecordDataLoad::KeyData,std::default_delete<AsyncKeyRecordDataLoad::KeyData> >(std::unique_ptr<AsyncKeyRecordDataLoad::KeyData,std::default_delete<AsyncKeyRecordDataLoad::KeyData> > &);
	unique_ptr<AsyncKeyRecordDataLoad::KeyData,std::default_delete<AsyncKeyRecordDataLoad::KeyData> >(AsyncKeyRecordDataLoad::KeyData *, std::default_delete<AsyncKeyRecordDataLoad::KeyData> &);
	unique_ptr<AsyncKeyRecordDataLoad::KeyData,std::default_delete<AsyncKeyRecordDataLoad::KeyData> >(AsyncKeyRecordDataLoad::KeyData *, const std::default_delete<AsyncKeyRecordDataLoad::KeyData> &);
	unique_ptr<AsyncKeyRecordDataLoad::KeyData,std::default_delete<AsyncKeyRecordDataLoad::KeyData> >(AsyncKeyRecordDataLoad::KeyData *);
	unique_ptr<AsyncKeyRecordDataLoad::KeyData,std::default_delete<AsyncKeyRecordDataLoad::KeyData> >(void *);
	unique_ptr<AsyncKeyRecordDataLoad::KeyData,std::default_delete<AsyncKeyRecordDataLoad::KeyData> >();
	std::unique_ptr<AsyncKeyRecordDataLoad::KeyData,std::default_delete<AsyncKeyRecordDataLoad::KeyData> > & operator=(const std::unique_ptr<AsyncKeyRecordDataLoad::KeyData,std::default_delete<AsyncKeyRecordDataLoad::KeyData> > &);
	std::unique_ptr<AsyncKeyRecordDataLoad::KeyData,std::default_delete<AsyncKeyRecordDataLoad::KeyData> > & operator=(std::unique_ptr<AsyncKeyRecordDataLoad::KeyData,std::default_delete<AsyncKeyRecordDataLoad::KeyData> > &);
	std::unique_ptr<AsyncKeyRecordDataLoad::KeyData,std::default_delete<AsyncKeyRecordDataLoad::KeyData> > & operator=(void *);
	void swap(std::unique_ptr<AsyncKeyRecordDataLoad::KeyData,std::default_delete<AsyncKeyRecordDataLoad::KeyData> > &);
	~unique_ptr<AsyncKeyRecordDataLoad::KeyData,std::default_delete<AsyncKeyRecordDataLoad::KeyData> >();
	AsyncKeyRecordDataLoad::KeyData & operator*();
	AsyncKeyRecordDataLoad::KeyData * operator->();
	AsyncKeyRecordDataLoad::KeyData * get();
	bool operator bool();
	AsyncKeyRecordDataLoad::KeyData * release();
	void reset(AsyncKeyRecordDataLoad::KeyData *);
};
class std::unique_ptr<CharaDataUnify,std::default_delete<CharaDataUnify> > :
	std::_Unique_ptr_base<CharaDataUnify,std::default_delete<CharaDataUnify> >
{
	class _Myt;
	class _Mybase;
	typedef CharaDataUnify pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<CharaDataUnify,std::default_delete<CharaDataUnify> >(const std::unique_ptr<CharaDataUnify,std::default_delete<CharaDataUnify> > &);
	unique_ptr<CharaDataUnify,std::default_delete<CharaDataUnify> >(std::unique_ptr<CharaDataUnify,std::default_delete<CharaDataUnify> > &);
	unique_ptr<CharaDataUnify,std::default_delete<CharaDataUnify> >(CharaDataUnify *, std::default_delete<CharaDataUnify> &);
	unique_ptr<CharaDataUnify,std::default_delete<CharaDataUnify> >(CharaDataUnify *, const std::default_delete<CharaDataUnify> &);
	unique_ptr<CharaDataUnify,std::default_delete<CharaDataUnify> >(CharaDataUnify *);
	unique_ptr<CharaDataUnify,std::default_delete<CharaDataUnify> >(void *);
	unique_ptr<CharaDataUnify,std::default_delete<CharaDataUnify> >();
	std::unique_ptr<CharaDataUnify,std::default_delete<CharaDataUnify> > & operator=(const std::unique_ptr<CharaDataUnify,std::default_delete<CharaDataUnify> > &);
	std::unique_ptr<CharaDataUnify,std::default_delete<CharaDataUnify> > & operator=(std::unique_ptr<CharaDataUnify,std::default_delete<CharaDataUnify> > &);
	std::unique_ptr<CharaDataUnify,std::default_delete<CharaDataUnify> > & operator=(void *);
	void swap(std::unique_ptr<CharaDataUnify,std::default_delete<CharaDataUnify> > &);
	~unique_ptr<CharaDataUnify,std::default_delete<CharaDataUnify> >();
	CharaDataUnify & operator*();
	CharaDataUnify * operator->();
	CharaDataUnify * get();
	bool operator bool();
	CharaDataUnify * release();
	void reset(CharaDataUnify *);
};
class std::unique_ptr<OGLTexture,std::default_delete<OGLTexture> > :
	std::_Unique_ptr_base<OGLTexture,std::default_delete<OGLTexture> >
{
	class _Myt;
	class _Mybase;
	typedef OGLTexture pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<OGLTexture,std::default_delete<OGLTexture> >(const std::unique_ptr<OGLTexture,std::default_delete<OGLTexture> > &);
	unique_ptr<OGLTexture,std::default_delete<OGLTexture> >(std::unique_ptr<OGLTexture,std::default_delete<OGLTexture> > &);
	unique_ptr<OGLTexture,std::default_delete<OGLTexture> >(OGLTexture *, std::default_delete<OGLTexture> &);
	unique_ptr<OGLTexture,std::default_delete<OGLTexture> >(OGLTexture *, const std::default_delete<OGLTexture> &);
	unique_ptr<OGLTexture,std::default_delete<OGLTexture> >(OGLTexture *);
	unique_ptr<OGLTexture,std::default_delete<OGLTexture> >(void *);
	unique_ptr<OGLTexture,std::default_delete<OGLTexture> >();
	std::unique_ptr<OGLTexture,std::default_delete<OGLTexture> > & operator=(const std::unique_ptr<OGLTexture,std::default_delete<OGLTexture> > &);
	std::unique_ptr<OGLTexture,std::default_delete<OGLTexture> > & operator=(std::unique_ptr<OGLTexture,std::default_delete<OGLTexture> > &);
	std::unique_ptr<OGLTexture,std::default_delete<OGLTexture> > & operator=(void *);
	void swap(std::unique_ptr<OGLTexture,std::default_delete<OGLTexture> > &);
	~unique_ptr<OGLTexture,std::default_delete<OGLTexture> >();
	OGLTexture & operator*();
	OGLTexture * operator->();
	OGLTexture * get();
	bool operator bool();
	OGLTexture * release();
	void reset(OGLTexture *);
};
class std::unique_ptr<OGLSecondary,std::default_delete<OGLSecondary> > :
	std::_Unique_ptr_base<OGLSecondary,std::default_delete<OGLSecondary> >
{
	class _Myt;
	class _Mybase;
	typedef OGLSecondary pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<OGLSecondary,std::default_delete<OGLSecondary> >(const std::unique_ptr<OGLSecondary,std::default_delete<OGLSecondary> > &);
	unique_ptr<OGLSecondary,std::default_delete<OGLSecondary> >(std::unique_ptr<OGLSecondary,std::default_delete<OGLSecondary> > &);
	unique_ptr<OGLSecondary,std::default_delete<OGLSecondary> >(OGLSecondary *, std::default_delete<OGLSecondary> &);
	unique_ptr<OGLSecondary,std::default_delete<OGLSecondary> >(OGLSecondary *, const std::default_delete<OGLSecondary> &);
	unique_ptr<OGLSecondary,std::default_delete<OGLSecondary> >(OGLSecondary *);
	unique_ptr<OGLSecondary,std::default_delete<OGLSecondary> >(void *);
	unique_ptr<OGLSecondary,std::default_delete<OGLSecondary> >();
	std::unique_ptr<OGLSecondary,std::default_delete<OGLSecondary> > & operator=(const std::unique_ptr<OGLSecondary,std::default_delete<OGLSecondary> > &);
	std::unique_ptr<OGLSecondary,std::default_delete<OGLSecondary> > & operator=(std::unique_ptr<OGLSecondary,std::default_delete<OGLSecondary> > &);
	std::unique_ptr<OGLSecondary,std::default_delete<OGLSecondary> > & operator=(void *);
	void swap(std::unique_ptr<OGLSecondary,std::default_delete<OGLSecondary> > &);
	~unique_ptr<OGLSecondary,std::default_delete<OGLSecondary> >();
	OGLSecondary & operator*();
	OGLSecondary * operator->();
	OGLSecondary * get();
	bool operator bool();
	OGLSecondary * release();
	void reset(OGLSecondary *);
};
class std::unique_ptr<Image,std::default_delete<Image> > :
	std::_Unique_ptr_base<Image,std::default_delete<Image> >
{
	class _Myt;
	class _Mybase;
	typedef Image pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<Image,std::default_delete<Image> >(const std::unique_ptr<Image,std::default_delete<Image> > &);
	unique_ptr<Image,std::default_delete<Image> >(std::unique_ptr<Image,std::default_delete<Image> > &);
	unique_ptr<Image,std::default_delete<Image> >(Image *, std::default_delete<Image> &);
	unique_ptr<Image,std::default_delete<Image> >(Image *, const std::default_delete<Image> &);
	unique_ptr<Image,std::default_delete<Image> >(Image *);
	unique_ptr<Image,std::default_delete<Image> >(void *);
	unique_ptr<Image,std::default_delete<Image> >();
	std::unique_ptr<Image,std::default_delete<Image> > & operator=(const std::unique_ptr<Image,std::default_delete<Image> > &);
	std::unique_ptr<Image,std::default_delete<Image> > & operator=(std::unique_ptr<Image,std::default_delete<Image> > &);
	std::unique_ptr<Image,std::default_delete<Image> > & operator=(void *);
	void swap(std::unique_ptr<Image,std::default_delete<Image> > &);
	~unique_ptr<Image,std::default_delete<Image> >();
	Image & operator*();
	Image * operator->();
	Image * get();
	bool operator bool();
	Image * release();
	void reset(Image *);
};
class std::unique_ptr<ComboMissionData,std::default_delete<ComboMissionData> > :
	std::_Unique_ptr_base<ComboMissionData,std::default_delete<ComboMissionData> >
{
	class _Myt;
	class _Mybase;
	typedef ComboMissionData pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<ComboMissionData,std::default_delete<ComboMissionData> >(const std::unique_ptr<ComboMissionData,std::default_delete<ComboMissionData> > &);
	unique_ptr<ComboMissionData,std::default_delete<ComboMissionData> >(std::unique_ptr<ComboMissionData,std::default_delete<ComboMissionData> > &);
	unique_ptr<ComboMissionData,std::default_delete<ComboMissionData> >(ComboMissionData *, std::default_delete<ComboMissionData> &);
	unique_ptr<ComboMissionData,std::default_delete<ComboMissionData> >(ComboMissionData *, const std::default_delete<ComboMissionData> &);
	unique_ptr<ComboMissionData,std::default_delete<ComboMissionData> >(ComboMissionData *);
	unique_ptr<ComboMissionData,std::default_delete<ComboMissionData> >(void *);
	unique_ptr<ComboMissionData,std::default_delete<ComboMissionData> >();
	std::unique_ptr<ComboMissionData,std::default_delete<ComboMissionData> > & operator=(const std::unique_ptr<ComboMissionData,std::default_delete<ComboMissionData> > &);
	std::unique_ptr<ComboMissionData,std::default_delete<ComboMissionData> > & operator=(std::unique_ptr<ComboMissionData,std::default_delete<ComboMissionData> > &);
	std::unique_ptr<ComboMissionData,std::default_delete<ComboMissionData> > & operator=(void *);
	void swap(std::unique_ptr<ComboMissionData,std::default_delete<ComboMissionData> > &);
	~unique_ptr<ComboMissionData,std::default_delete<ComboMissionData> >();
	ComboMissionData & operator*();
	ComboMissionData * operator->();
	ComboMissionData * get();
	bool operator bool();
	ComboMissionData * release();
	void reset(ComboMissionData *);
};
class std::unique_ptr<OGLMotion,std::default_delete<OGLMotion> > :
	std::_Unique_ptr_base<OGLMotion,std::default_delete<OGLMotion> >
{
	class _Myt;
	class _Mybase;
	typedef OGLMotion pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<OGLMotion,std::default_delete<OGLMotion> >(const std::unique_ptr<OGLMotion,std::default_delete<OGLMotion> > &);
	unique_ptr<OGLMotion,std::default_delete<OGLMotion> >(std::unique_ptr<OGLMotion,std::default_delete<OGLMotion> > &);
	unique_ptr<OGLMotion,std::default_delete<OGLMotion> >(OGLMotion *, std::default_delete<OGLMotion> &);
	unique_ptr<OGLMotion,std::default_delete<OGLMotion> >(OGLMotion *, const std::default_delete<OGLMotion> &);
	unique_ptr<OGLMotion,std::default_delete<OGLMotion> >(OGLMotion *);
	unique_ptr<OGLMotion,std::default_delete<OGLMotion> >(void *);
	unique_ptr<OGLMotion,std::default_delete<OGLMotion> >();
	std::unique_ptr<OGLMotion,std::default_delete<OGLMotion> > & operator=(const std::unique_ptr<OGLMotion,std::default_delete<OGLMotion> > &);
	std::unique_ptr<OGLMotion,std::default_delete<OGLMotion> > & operator=(std::unique_ptr<OGLMotion,std::default_delete<OGLMotion> > &);
	std::unique_ptr<OGLMotion,std::default_delete<OGLMotion> > & operator=(void *);
	void swap(std::unique_ptr<OGLMotion,std::default_delete<OGLMotion> > &);
	~unique_ptr<OGLMotion,std::default_delete<OGLMotion> >();
	OGLMotion & operator*();
	OGLMotion * operator->();
	OGLMotion * get();
	bool operator bool();
	OGLMotion * release();
	void reset(OGLMotion *);
};
class std::unique_ptr<extension::exsound_detail::SoundBankImpl,std::default_delete<extension::exsound_detail::SoundBankImpl> > :
	std::_Unique_ptr_base<extension::exsound_detail::SoundBankImpl,std::default_delete<extension::exsound_detail::SoundBankImpl> >
{
	class _Myt;
	class _Mybase;
	typedef extension::exsound_detail::SoundBankImpl pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<extension::exsound_detail::SoundBankImpl,std::default_delete<extension::exsound_detail::SoundBankImpl> >(const std::unique_ptr<extension::exsound_detail::SoundBankImpl,std::default_delete<extension::exsound_detail::SoundBankImpl> > &);
	unique_ptr<extension::exsound_detail::SoundBankImpl,std::default_delete<extension::exsound_detail::SoundBankImpl> >(std::unique_ptr<extension::exsound_detail::SoundBankImpl,std::default_delete<extension::exsound_detail::SoundBankImpl> > &);
	unique_ptr<extension::exsound_detail::SoundBankImpl,std::default_delete<extension::exsound_detail::SoundBankImpl> >(extension::exsound_detail::SoundBankImpl *, std::default_delete<extension::exsound_detail::SoundBankImpl> &);
	unique_ptr<extension::exsound_detail::SoundBankImpl,std::default_delete<extension::exsound_detail::SoundBankImpl> >(extension::exsound_detail::SoundBankImpl *, const std::default_delete<extension::exsound_detail::SoundBankImpl> &);
	unique_ptr<extension::exsound_detail::SoundBankImpl,std::default_delete<extension::exsound_detail::SoundBankImpl> >(extension::exsound_detail::SoundBankImpl *);
	unique_ptr<extension::exsound_detail::SoundBankImpl,std::default_delete<extension::exsound_detail::SoundBankImpl> >(void *);
	unique_ptr<extension::exsound_detail::SoundBankImpl,std::default_delete<extension::exsound_detail::SoundBankImpl> >();
	std::unique_ptr<extension::exsound_detail::SoundBankImpl,std::default_delete<extension::exsound_detail::SoundBankImpl> > & operator=(const std::unique_ptr<extension::exsound_detail::SoundBankImpl,std::default_delete<extension::exsound_detail::SoundBankImpl> > &);
	std::unique_ptr<extension::exsound_detail::SoundBankImpl,std::default_delete<extension::exsound_detail::SoundBankImpl> > & operator=(std::unique_ptr<extension::exsound_detail::SoundBankImpl,std::default_delete<extension::exsound_detail::SoundBankImpl> > &);
	std::unique_ptr<extension::exsound_detail::SoundBankImpl,std::default_delete<extension::exsound_detail::SoundBankImpl> > & operator=(void *);
	void swap(std::unique_ptr<extension::exsound_detail::SoundBankImpl,std::default_delete<extension::exsound_detail::SoundBankImpl> > &);
	~unique_ptr<extension::exsound_detail::SoundBankImpl,std::default_delete<extension::exsound_detail::SoundBankImpl> >();
	extension::exsound_detail::SoundBankImpl & operator*();
	extension::exsound_detail::SoundBankImpl * operator->();
	extension::exsound_detail::SoundBankImpl * get();
	bool operator bool();
	extension::exsound_detail::SoundBankImpl * release();
	void reset(extension::exsound_detail::SoundBankImpl *);
};
class std::unique_ptr<OGLFigure,std::default_delete<OGLFigure> > :
	std::_Unique_ptr_base<OGLFigure,std::default_delete<OGLFigure> >
{
	class _Myt;
	class _Mybase;
	typedef OGLFigure pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<OGLFigure,std::default_delete<OGLFigure> >(const std::unique_ptr<OGLFigure,std::default_delete<OGLFigure> > &);
	unique_ptr<OGLFigure,std::default_delete<OGLFigure> >(std::unique_ptr<OGLFigure,std::default_delete<OGLFigure> > &);
	unique_ptr<OGLFigure,std::default_delete<OGLFigure> >(OGLFigure *, std::default_delete<OGLFigure> &);
	unique_ptr<OGLFigure,std::default_delete<OGLFigure> >(OGLFigure *, const std::default_delete<OGLFigure> &);
	unique_ptr<OGLFigure,std::default_delete<OGLFigure> >(OGLFigure *);
	unique_ptr<OGLFigure,std::default_delete<OGLFigure> >(void *);
	unique_ptr<OGLFigure,std::default_delete<OGLFigure> >();
	std::unique_ptr<OGLFigure,std::default_delete<OGLFigure> > & operator=(const std::unique_ptr<OGLFigure,std::default_delete<OGLFigure> > &);
	std::unique_ptr<OGLFigure,std::default_delete<OGLFigure> > & operator=(std::unique_ptr<OGLFigure,std::default_delete<OGLFigure> > &);
	std::unique_ptr<OGLFigure,std::default_delete<OGLFigure> > & operator=(void *);
	void swap(std::unique_ptr<OGLFigure,std::default_delete<OGLFigure> > &);
	~unique_ptr<OGLFigure,std::default_delete<OGLFigure> >();
	OGLFigure & operator*();
	OGLFigure * operator->();
	OGLFigure * get();
	bool operator bool();
	OGLFigure * release();
	void reset(OGLFigure *);
};
class std::unique_ptr<OGLCurve,std::default_delete<OGLCurve> > :
	std::_Unique_ptr_base<OGLCurve,std::default_delete<OGLCurve> >
{
	class _Myt;
	class _Mybase;
	typedef OGLCurve pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<OGLCurve,std::default_delete<OGLCurve> >(const std::unique_ptr<OGLCurve,std::default_delete<OGLCurve> > &);
	unique_ptr<OGLCurve,std::default_delete<OGLCurve> >(std::unique_ptr<OGLCurve,std::default_delete<OGLCurve> > &);
	unique_ptr<OGLCurve,std::default_delete<OGLCurve> >(OGLCurve *, std::default_delete<OGLCurve> &);
	unique_ptr<OGLCurve,std::default_delete<OGLCurve> >(OGLCurve *, const std::default_delete<OGLCurve> &);
	unique_ptr<OGLCurve,std::default_delete<OGLCurve> >(OGLCurve *);
	unique_ptr<OGLCurve,std::default_delete<OGLCurve> >(void *);
	unique_ptr<OGLCurve,std::default_delete<OGLCurve> >();
	std::unique_ptr<OGLCurve,std::default_delete<OGLCurve> > & operator=(const std::unique_ptr<OGLCurve,std::default_delete<OGLCurve> > &);
	std::unique_ptr<OGLCurve,std::default_delete<OGLCurve> > & operator=(std::unique_ptr<OGLCurve,std::default_delete<OGLCurve> > &);
	std::unique_ptr<OGLCurve,std::default_delete<OGLCurve> > & operator=(void *);
	void swap(std::unique_ptr<OGLCurve,std::default_delete<OGLCurve> > &);
	~unique_ptr<OGLCurve,std::default_delete<OGLCurve> >();
	OGLCurve & operator*();
	OGLCurve * operator->();
	OGLCurve * get();
	bool operator bool();
	OGLCurve * release();
	void reset(OGLCurve *);
};
class std::unique_ptr<extension::GFXIMovieData,std::default_delete<extension::GFXIMovieData> > :
	std::_Unique_ptr_base<extension::GFXIMovieData,std::default_delete<extension::GFXIMovieData> >
{
	class _Myt;
	class _Mybase;
	typedef extension::GFXIMovieData pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<extension::GFXIMovieData,std::default_delete<extension::GFXIMovieData> >(const std::unique_ptr<extension::GFXIMovieData,std::default_delete<extension::GFXIMovieData> > &);
	unique_ptr<extension::GFXIMovieData,std::default_delete<extension::GFXIMovieData> >(std::unique_ptr<extension::GFXIMovieData,std::default_delete<extension::GFXIMovieData> > &);
	unique_ptr<extension::GFXIMovieData,std::default_delete<extension::GFXIMovieData> >(extension::GFXIMovieData *, std::default_delete<extension::GFXIMovieData> &);
	unique_ptr<extension::GFXIMovieData,std::default_delete<extension::GFXIMovieData> >(extension::GFXIMovieData *, const std::default_delete<extension::GFXIMovieData> &);
	unique_ptr<extension::GFXIMovieData,std::default_delete<extension::GFXIMovieData> >(extension::GFXIMovieData *);
	unique_ptr<extension::GFXIMovieData,std::default_delete<extension::GFXIMovieData> >(void *);
	unique_ptr<extension::GFXIMovieData,std::default_delete<extension::GFXIMovieData> >();
	std::unique_ptr<extension::GFXIMovieData,std::default_delete<extension::GFXIMovieData> > & operator=(const std::unique_ptr<extension::GFXIMovieData,std::default_delete<extension::GFXIMovieData> > &);
	std::unique_ptr<extension::GFXIMovieData,std::default_delete<extension::GFXIMovieData> > & operator=(std::unique_ptr<extension::GFXIMovieData,std::default_delete<extension::GFXIMovieData> > &);
	std::unique_ptr<extension::GFXIMovieData,std::default_delete<extension::GFXIMovieData> > & operator=(void *);
	void swap(std::unique_ptr<extension::GFXIMovieData,std::default_delete<extension::GFXIMovieData> > &);
	~unique_ptr<extension::GFXIMovieData,std::default_delete<extension::GFXIMovieData> >();
	extension::GFXIMovieData & operator*();
	extension::GFXIMovieData * operator->();
	extension::GFXIMovieData * get();
	bool operator bool();
	extension::GFXIMovieData * release();
	void reset(extension::GFXIMovieData *);
};
class std::unique_ptr<OGLCamera,std::default_delete<OGLCamera> > :
	std::_Unique_ptr_base<OGLCamera,std::default_delete<OGLCamera> >
{
	class _Myt;
	class _Mybase;
	typedef OGLCamera pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<OGLCamera,std::default_delete<OGLCamera> >(const std::unique_ptr<OGLCamera,std::default_delete<OGLCamera> > &);
	unique_ptr<OGLCamera,std::default_delete<OGLCamera> >(std::unique_ptr<OGLCamera,std::default_delete<OGLCamera> > &);
	unique_ptr<OGLCamera,std::default_delete<OGLCamera> >(OGLCamera *, std::default_delete<OGLCamera> &);
	unique_ptr<OGLCamera,std::default_delete<OGLCamera> >(OGLCamera *, const std::default_delete<OGLCamera> &);
	unique_ptr<OGLCamera,std::default_delete<OGLCamera> >(OGLCamera *);
	unique_ptr<OGLCamera,std::default_delete<OGLCamera> >(void *);
	unique_ptr<OGLCamera,std::default_delete<OGLCamera> >();
	std::unique_ptr<OGLCamera,std::default_delete<OGLCamera> > & operator=(const std::unique_ptr<OGLCamera,std::default_delete<OGLCamera> > &);
	std::unique_ptr<OGLCamera,std::default_delete<OGLCamera> > & operator=(std::unique_ptr<OGLCamera,std::default_delete<OGLCamera> > &);
	std::unique_ptr<OGLCamera,std::default_delete<OGLCamera> > & operator=(void *);
	void swap(std::unique_ptr<OGLCamera,std::default_delete<OGLCamera> > &);
	~unique_ptr<OGLCamera,std::default_delete<OGLCamera> >();
	OGLCamera & operator*();
	OGLCamera * operator->();
	OGLCamera * get();
	bool operator bool();
	OGLCamera * release();
	void reset(OGLCamera *);
};
class std::unique_ptr<StageResources,std::default_delete<StageResources> > :
	std::_Unique_ptr_base<StageResources,std::default_delete<StageResources> >
{
	class _Myt;
	class _Mybase;
	typedef StageResources pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<StageResources,std::default_delete<StageResources> >(const std::unique_ptr<StageResources,std::default_delete<StageResources> > &);
	unique_ptr<StageResources,std::default_delete<StageResources> >(std::unique_ptr<StageResources,std::default_delete<StageResources> > &);
	unique_ptr<StageResources,std::default_delete<StageResources> >(StageResources *, std::default_delete<StageResources> &);
	unique_ptr<StageResources,std::default_delete<StageResources> >(StageResources *, const std::default_delete<StageResources> &);
	unique_ptr<StageResources,std::default_delete<StageResources> >(StageResources *);
	unique_ptr<StageResources,std::default_delete<StageResources> >(void *);
	unique_ptr<StageResources,std::default_delete<StageResources> >();
	std::unique_ptr<StageResources,std::default_delete<StageResources> > & operator=(const std::unique_ptr<StageResources,std::default_delete<StageResources> > &);
	std::unique_ptr<StageResources,std::default_delete<StageResources> > & operator=(std::unique_ptr<StageResources,std::default_delete<StageResources> > &);
	std::unique_ptr<StageResources,std::default_delete<StageResources> > & operator=(void *);
	void swap(std::unique_ptr<StageResources,std::default_delete<StageResources> > &);
	~unique_ptr<StageResources,std::default_delete<StageResources> >();
	StageResources & operator*();
	StageResources * operator->();
	StageResources * get();
	bool operator bool();
	StageResources * release();
	void reset(StageResources *);
};
class std::unique_ptr<CharaProjectData,std::default_delete<CharaProjectData> > :
	std::_Unique_ptr_base<CharaProjectData,std::default_delete<CharaProjectData> >
{
	class _Myt;
	class _Mybase;
	typedef CharaProjectData pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<CharaProjectData,std::default_delete<CharaProjectData> >(const std::unique_ptr<CharaProjectData,std::default_delete<CharaProjectData> > &);
	unique_ptr<CharaProjectData,std::default_delete<CharaProjectData> >(std::unique_ptr<CharaProjectData,std::default_delete<CharaProjectData> > &);
	unique_ptr<CharaProjectData,std::default_delete<CharaProjectData> >(CharaProjectData *, std::default_delete<CharaProjectData> &);
	unique_ptr<CharaProjectData,std::default_delete<CharaProjectData> >(CharaProjectData *, const std::default_delete<CharaProjectData> &);
	unique_ptr<CharaProjectData,std::default_delete<CharaProjectData> >(CharaProjectData *);
	unique_ptr<CharaProjectData,std::default_delete<CharaProjectData> >(void *);
	unique_ptr<CharaProjectData,std::default_delete<CharaProjectData> >();
	std::unique_ptr<CharaProjectData,std::default_delete<CharaProjectData> > & operator=(const std::unique_ptr<CharaProjectData,std::default_delete<CharaProjectData> > &);
	std::unique_ptr<CharaProjectData,std::default_delete<CharaProjectData> > & operator=(std::unique_ptr<CharaProjectData,std::default_delete<CharaProjectData> > &);
	std::unique_ptr<CharaProjectData,std::default_delete<CharaProjectData> > & operator=(void *);
	void swap(std::unique_ptr<CharaProjectData,std::default_delete<CharaProjectData> > &);
	~unique_ptr<CharaProjectData,std::default_delete<CharaProjectData> >();
	CharaProjectData & operator*();
	CharaProjectData * operator->();
	CharaProjectData * get();
	bool operator bool();
	CharaProjectData * release();
	void reset(CharaProjectData *);
};
class std::unique_ptr<StageProjectData,std::default_delete<StageProjectData> > :
	std::_Unique_ptr_base<StageProjectData,std::default_delete<StageProjectData> >
{
	class _Myt;
	class _Mybase;
	typedef StageProjectData pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<StageProjectData,std::default_delete<StageProjectData> >(const std::unique_ptr<StageProjectData,std::default_delete<StageProjectData> > &);
	unique_ptr<StageProjectData,std::default_delete<StageProjectData> >(std::unique_ptr<StageProjectData,std::default_delete<StageProjectData> > &);
	unique_ptr<StageProjectData,std::default_delete<StageProjectData> >(StageProjectData *, std::default_delete<StageProjectData> &);
	unique_ptr<StageProjectData,std::default_delete<StageProjectData> >(StageProjectData *, const std::default_delete<StageProjectData> &);
	unique_ptr<StageProjectData,std::default_delete<StageProjectData> >(StageProjectData *);
	unique_ptr<StageProjectData,std::default_delete<StageProjectData> >(void *);
	unique_ptr<StageProjectData,std::default_delete<StageProjectData> >();
	std::unique_ptr<StageProjectData,std::default_delete<StageProjectData> > & operator=(const std::unique_ptr<StageProjectData,std::default_delete<StageProjectData> > &);
	std::unique_ptr<StageProjectData,std::default_delete<StageProjectData> > & operator=(std::unique_ptr<StageProjectData,std::default_delete<StageProjectData> > &);
	std::unique_ptr<StageProjectData,std::default_delete<StageProjectData> > & operator=(void *);
	void swap(std::unique_ptr<StageProjectData,std::default_delete<StageProjectData> > &);
	~unique_ptr<StageProjectData,std::default_delete<StageProjectData> >();
	StageProjectData & operator*();
	StageProjectData * operator->();
	StageProjectData * get();
	bool operator bool();
	StageProjectData * release();
	void reset(StageProjectData *);
};
extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData>::~AsyncContent<AsyncKeyRecordDataLoad::KeyData>(); // 0x14009EFB0
extension::AsyncContent<extension::AsyncFileImage>::~AsyncContent<extension::AsyncFileImage>(); // 0x14009F230
extension::AsyncContent<CharaDataUnify>::~AsyncContent<CharaDataUnify>(); // 0x14009F050
extension::AsyncContent<ComboMissionData>::~AsyncContent<ComboMissionData>(); // 0x14009F380
extension::AsyncContent<OGLFigure>::~AsyncContent<OGLFigure>(); // 0x14009F190
extension::AsyncContent<extension::GFXIMovieData>::~AsyncContent<extension::GFXIMovieData>(); // 0x1400FC700
extension::AsyncContent<extension::AsyncAsset>::~AsyncContent<extension::AsyncAsset>(); // 0x14011CAF0
extension::AsyncContent<OGLMirror>::~AsyncContent<OGLMirror>(); // 0x1401A8700
extension::AsyncContent<OGLMotion>::~AsyncContent<OGLMotion>(); // 0x1401A8790
extension::AsyncContent<StageResources>::~AsyncContent<StageResources>(); // 0x140217BE0
extension::AsyncContent<OGLSecondary>::~AsyncContent<OGLSecondary>(); // 0x140255570
extension::AsyncContent<CharaProjectData>::~AsyncContent<CharaProjectData>(); // 0x1402AA140
extension::AsyncContent<StageProjectData>::~AsyncContent<StageProjectData>(); // 0x1402AA080
extension::AsyncContent<CMediaSound>::~AsyncContent<CMediaSound>(); // 0x1402BB2C0
extension::AsyncContent<extension::exsound_detail::SoundBankImpl>::~AsyncContent<extension::exsound_detail::SoundBankImpl>(); // 0x1402BB370
class extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> >
{
private:
	extension::AsyncContent<extension::AsyncAsset> * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> >(const extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > &);
	RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> >(extension::AsyncContent<extension::AsyncAsset> *, bool);
	RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> >(extension::AsyncContent<extension::AsyncAsset> *);
	RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> >();
	~RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> >();
	void swap(extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > &);
	extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > & operator=(const extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > &);
	void reset(extension::AsyncContent<extension::AsyncAsset> *);
	void resetWithAddRef(extension::AsyncContent<extension::AsyncAsset> *);
	extension::AsyncContent<extension::AsyncAsset> * get();
	extension::AsyncContent<extension::AsyncAsset> & operator*();
	extension::AsyncContent<extension::AsyncAsset> * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> >
{
private:
	extension::AsyncContent<extension::AsyncFileImage> * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> >(const extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> > &);
	RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> >(extension::AsyncContent<extension::AsyncFileImage> *, bool);
	RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> >(extension::AsyncContent<extension::AsyncFileImage> *);
	RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> >();
	~RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> >();
	void swap(extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> > &);
	extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> > & operator=(const extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> > &);
	void reset(extension::AsyncContent<extension::AsyncFileImage> *);
	void resetWithAddRef(extension::AsyncContent<extension::AsyncFileImage> *);
	extension::AsyncContent<extension::AsyncFileImage> * get();
	extension::AsyncContent<extension::AsyncFileImage> & operator*();
	extension::AsyncContent<extension::AsyncFileImage> * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::AsyncContent<OGLTexture> >
{
private:
	extension::AsyncContent<OGLTexture> * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::AsyncContent<OGLTexture> >(const extension::RefCountablePtr<extension::AsyncContent<OGLTexture> > &);
	RefCountablePtr<extension::AsyncContent<OGLTexture> >(extension::AsyncContent<OGLTexture> *, bool);
	RefCountablePtr<extension::AsyncContent<OGLTexture> >(extension::AsyncContent<OGLTexture> *);
	RefCountablePtr<extension::AsyncContent<OGLTexture> >();
	~RefCountablePtr<extension::AsyncContent<OGLTexture> >();
	void swap(extension::RefCountablePtr<extension::AsyncContent<OGLTexture> > &);
	extension::RefCountablePtr<extension::AsyncContent<OGLTexture> > & operator=(const extension::RefCountablePtr<extension::AsyncContent<OGLTexture> > &);
	void reset(extension::AsyncContent<OGLTexture> *);
	void resetWithAddRef(extension::AsyncContent<OGLTexture> *);
	extension::AsyncContent<OGLTexture> * get();
	extension::AsyncContent<OGLTexture> & operator*();
	extension::AsyncContent<OGLTexture> * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::AsyncContent<OGLMotion> >
{
private:
	extension::AsyncContent<OGLMotion> * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::AsyncContent<OGLMotion> >(const extension::RefCountablePtr<extension::AsyncContent<OGLMotion> > &);
	RefCountablePtr<extension::AsyncContent<OGLMotion> >(extension::AsyncContent<OGLMotion> *, bool);
	RefCountablePtr<extension::AsyncContent<OGLMotion> >(extension::AsyncContent<OGLMotion> *);
	RefCountablePtr<extension::AsyncContent<OGLMotion> >();
	~RefCountablePtr<extension::AsyncContent<OGLMotion> >();
	void swap(extension::RefCountablePtr<extension::AsyncContent<OGLMotion> > &);
	extension::RefCountablePtr<extension::AsyncContent<OGLMotion> > & operator=(const extension::RefCountablePtr<extension::AsyncContent<OGLMotion> > &);
	void reset(extension::AsyncContent<OGLMotion> *);
	void resetWithAddRef(extension::AsyncContent<OGLMotion> *);
	extension::AsyncContent<OGLMotion> * get();
	extension::AsyncContent<OGLMotion> & operator*();
	extension::AsyncContent<OGLMotion> * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::AsyncContent<OGLFigure> >
{
private:
	extension::AsyncContent<OGLFigure> * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::AsyncContent<OGLFigure> >(const extension::RefCountablePtr<extension::AsyncContent<OGLFigure> > &);
	RefCountablePtr<extension::AsyncContent<OGLFigure> >(extension::AsyncContent<OGLFigure> *, bool);
	RefCountablePtr<extension::AsyncContent<OGLFigure> >(extension::AsyncContent<OGLFigure> *);
	RefCountablePtr<extension::AsyncContent<OGLFigure> >();
	~RefCountablePtr<extension::AsyncContent<OGLFigure> >();
	void swap(extension::RefCountablePtr<extension::AsyncContent<OGLFigure> > &);
	extension::RefCountablePtr<extension::AsyncContent<OGLFigure> > & operator=(const extension::RefCountablePtr<extension::AsyncContent<OGLFigure> > &);
	void reset(extension::AsyncContent<OGLFigure> *);
	void resetWithAddRef(extension::AsyncContent<OGLFigure> *);
	extension::AsyncContent<OGLFigure> * get();
	extension::AsyncContent<OGLFigure> & operator*();
	extension::AsyncContent<OGLFigure> * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::AsyncContent<Image> >
{
private:
	extension::AsyncContent<Image> * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::AsyncContent<Image> >(const extension::RefCountablePtr<extension::AsyncContent<Image> > &);
	RefCountablePtr<extension::AsyncContent<Image> >(extension::AsyncContent<Image> *, bool);
	RefCountablePtr<extension::AsyncContent<Image> >(extension::AsyncContent<Image> *);
	RefCountablePtr<extension::AsyncContent<Image> >();
	~RefCountablePtr<extension::AsyncContent<Image> >();
	void swap(extension::RefCountablePtr<extension::AsyncContent<Image> > &);
	extension::RefCountablePtr<extension::AsyncContent<Image> > & operator=(const extension::RefCountablePtr<extension::AsyncContent<Image> > &);
	void reset(extension::AsyncContent<Image> *);
	void resetWithAddRef(extension::AsyncContent<Image> *);
	extension::AsyncContent<Image> * get();
	extension::AsyncContent<Image> & operator*();
	extension::AsyncContent<Image> * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::AsyncContent<extension::exsound_detail::SoundBankImpl> >
{
private:
	extension::AsyncContent<extension::exsound_detail::SoundBankImpl> * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::AsyncContent<extension::exsound_detail::SoundBankImpl> >(const extension::RefCountablePtr<extension::AsyncContent<extension::exsound_detail::SoundBankImpl> > &);
	RefCountablePtr<extension::AsyncContent<extension::exsound_detail::SoundBankImpl> >(extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *, bool);
	RefCountablePtr<extension::AsyncContent<extension::exsound_detail::SoundBankImpl> >(extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *);
	RefCountablePtr<extension::AsyncContent<extension::exsound_detail::SoundBankImpl> >();
	~RefCountablePtr<extension::AsyncContent<extension::exsound_detail::SoundBankImpl> >();
	void swap(extension::RefCountablePtr<extension::AsyncContent<extension::exsound_detail::SoundBankImpl> > &);
	extension::RefCountablePtr<extension::AsyncContent<extension::exsound_detail::SoundBankImpl> > & operator=(const extension::RefCountablePtr<extension::AsyncContent<extension::exsound_detail::SoundBankImpl> > &);
	void reset(extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *);
	void resetWithAddRef(extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *);
	extension::AsyncContent<extension::exsound_detail::SoundBankImpl> * get();
	extension::AsyncContent<extension::exsound_detail::SoundBankImpl> & operator*();
	extension::AsyncContent<extension::exsound_detail::SoundBankImpl> * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::AsyncContent<OGLCurve> >
{
private:
	extension::AsyncContent<OGLCurve> * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::AsyncContent<OGLCurve> >(const extension::RefCountablePtr<extension::AsyncContent<OGLCurve> > &);
	RefCountablePtr<extension::AsyncContent<OGLCurve> >(extension::AsyncContent<OGLCurve> *, bool);
	RefCountablePtr<extension::AsyncContent<OGLCurve> >(extension::AsyncContent<OGLCurve> *);
	RefCountablePtr<extension::AsyncContent<OGLCurve> >();
	~RefCountablePtr<extension::AsyncContent<OGLCurve> >();
	void swap(extension::RefCountablePtr<extension::AsyncContent<OGLCurve> > &);
	extension::RefCountablePtr<extension::AsyncContent<OGLCurve> > & operator=(const extension::RefCountablePtr<extension::AsyncContent<OGLCurve> > &);
	void reset(extension::AsyncContent<OGLCurve> *);
	void resetWithAddRef(extension::AsyncContent<OGLCurve> *);
	extension::AsyncContent<OGLCurve> * get();
	extension::AsyncContent<OGLCurve> & operator*();
	extension::AsyncContent<OGLCurve> * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> >
{
private:
	extension::AsyncContent<extension::GFXIMovieData> * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> >(const extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> > &);
	RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> >(extension::AsyncContent<extension::GFXIMovieData> *, bool);
	RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> >(extension::AsyncContent<extension::GFXIMovieData> *);
	RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> >();
	~RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> >();
	void swap(extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> > &);
	extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> > & operator=(const extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> > &);
	void reset(extension::AsyncContent<extension::GFXIMovieData> *);
	void resetWithAddRef(extension::AsyncContent<extension::GFXIMovieData> *);
	extension::AsyncContent<extension::GFXIMovieData> * get();
	extension::AsyncContent<extension::GFXIMovieData> & operator*();
	extension::AsyncContent<extension::GFXIMovieData> * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> >
{
private:
	extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> >(const extension::RefCountablePtr<extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> > &);
	RefCountablePtr<extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> >(extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *, bool);
	RefCountablePtr<extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> >(extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *);
	RefCountablePtr<extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> >();
	~RefCountablePtr<extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> >();
	void swap(extension::RefCountablePtr<extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> > &);
	extension::RefCountablePtr<extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> > & operator=(const extension::RefCountablePtr<extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> > &);
	void reset(extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *);
	void resetWithAddRef(extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *);
	extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> * get();
	extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> & operator*();
	extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> >
{
private:
	extension::AsyncContent<OGLSecondary> * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::AsyncContent<OGLSecondary> >(const extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> > &);
	RefCountablePtr<extension::AsyncContent<OGLSecondary> >(extension::AsyncContent<OGLSecondary> *, bool);
	RefCountablePtr<extension::AsyncContent<OGLSecondary> >(extension::AsyncContent<OGLSecondary> *);
	RefCountablePtr<extension::AsyncContent<OGLSecondary> >();
	~RefCountablePtr<extension::AsyncContent<OGLSecondary> >();
	void swap(extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> > &);
	extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> > & operator=(const extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> > &);
	void reset(extension::AsyncContent<OGLSecondary> *);
	void resetWithAddRef(extension::AsyncContent<OGLSecondary> *);
	extension::AsyncContent<OGLSecondary> * get();
	extension::AsyncContent<OGLSecondary> & operator*();
	extension::AsyncContent<OGLSecondary> * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::AsyncContent<CMediaSound> >
{
private:
	extension::AsyncContent<CMediaSound> * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::AsyncContent<CMediaSound> >(const extension::RefCountablePtr<extension::AsyncContent<CMediaSound> > &);
	RefCountablePtr<extension::AsyncContent<CMediaSound> >(extension::AsyncContent<CMediaSound> *, bool);
	RefCountablePtr<extension::AsyncContent<CMediaSound> >(extension::AsyncContent<CMediaSound> *);
	RefCountablePtr<extension::AsyncContent<CMediaSound> >();
	~RefCountablePtr<extension::AsyncContent<CMediaSound> >();
	void swap(extension::RefCountablePtr<extension::AsyncContent<CMediaSound> > &);
	extension::RefCountablePtr<extension::AsyncContent<CMediaSound> > & operator=(const extension::RefCountablePtr<extension::AsyncContent<CMediaSound> > &);
	void reset(extension::AsyncContent<CMediaSound> *);
	void resetWithAddRef(extension::AsyncContent<CMediaSound> *);
	extension::AsyncContent<CMediaSound> * get();
	extension::AsyncContent<CMediaSound> & operator*();
	extension::AsyncContent<CMediaSound> * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::AsyncContent<OGLCamera> >
{
private:
	extension::AsyncContent<OGLCamera> * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::AsyncContent<OGLCamera> >(const extension::RefCountablePtr<extension::AsyncContent<OGLCamera> > &);
	RefCountablePtr<extension::AsyncContent<OGLCamera> >(extension::AsyncContent<OGLCamera> *, bool);
	RefCountablePtr<extension::AsyncContent<OGLCamera> >(extension::AsyncContent<OGLCamera> *);
	RefCountablePtr<extension::AsyncContent<OGLCamera> >();
	~RefCountablePtr<extension::AsyncContent<OGLCamera> >();
	void swap(extension::RefCountablePtr<extension::AsyncContent<OGLCamera> > &);
	extension::RefCountablePtr<extension::AsyncContent<OGLCamera> > & operator=(const extension::RefCountablePtr<extension::AsyncContent<OGLCamera> > &);
	void reset(extension::AsyncContent<OGLCamera> *);
	void resetWithAddRef(extension::AsyncContent<OGLCamera> *);
	extension::AsyncContent<OGLCamera> * get();
	extension::AsyncContent<OGLCamera> & operator*();
	extension::AsyncContent<OGLCamera> * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::AsyncContent<OGLMirror> >
{
private:
	extension::AsyncContent<OGLMirror> * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::AsyncContent<OGLMirror> >(const extension::RefCountablePtr<extension::AsyncContent<OGLMirror> > &);
	RefCountablePtr<extension::AsyncContent<OGLMirror> >(extension::AsyncContent<OGLMirror> *, bool);
	RefCountablePtr<extension::AsyncContent<OGLMirror> >(extension::AsyncContent<OGLMirror> *);
	RefCountablePtr<extension::AsyncContent<OGLMirror> >();
	~RefCountablePtr<extension::AsyncContent<OGLMirror> >();
	void swap(extension::RefCountablePtr<extension::AsyncContent<OGLMirror> > &);
	extension::RefCountablePtr<extension::AsyncContent<OGLMirror> > & operator=(const extension::RefCountablePtr<extension::AsyncContent<OGLMirror> > &);
	void reset(extension::AsyncContent<OGLMirror> *);
	void resetWithAddRef(extension::AsyncContent<OGLMirror> *);
	extension::AsyncContent<OGLMirror> * get();
	extension::AsyncContent<OGLMirror> & operator*();
	extension::AsyncContent<OGLMirror> * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::AsyncContent<CharaDataUnify> >
{
private:
	extension::AsyncContent<CharaDataUnify> * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::AsyncContent<CharaDataUnify> >(const extension::RefCountablePtr<extension::AsyncContent<CharaDataUnify> > &);
	RefCountablePtr<extension::AsyncContent<CharaDataUnify> >(extension::AsyncContent<CharaDataUnify> *, bool);
	RefCountablePtr<extension::AsyncContent<CharaDataUnify> >(extension::AsyncContent<CharaDataUnify> *);
	RefCountablePtr<extension::AsyncContent<CharaDataUnify> >();
	~RefCountablePtr<extension::AsyncContent<CharaDataUnify> >();
	void swap(extension::RefCountablePtr<extension::AsyncContent<CharaDataUnify> > &);
	extension::RefCountablePtr<extension::AsyncContent<CharaDataUnify> > & operator=(const extension::RefCountablePtr<extension::AsyncContent<CharaDataUnify> > &);
	void reset(extension::AsyncContent<CharaDataUnify> *);
	void resetWithAddRef(extension::AsyncContent<CharaDataUnify> *);
	extension::AsyncContent<CharaDataUnify> * get();
	extension::AsyncContent<CharaDataUnify> & operator*();
	extension::AsyncContent<CharaDataUnify> * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::AsyncContent<ComboMissionData> >
{
private:
	extension::AsyncContent<ComboMissionData> * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::AsyncContent<ComboMissionData> >(const extension::RefCountablePtr<extension::AsyncContent<ComboMissionData> > &);
	RefCountablePtr<extension::AsyncContent<ComboMissionData> >(extension::AsyncContent<ComboMissionData> *, bool);
	RefCountablePtr<extension::AsyncContent<ComboMissionData> >(extension::AsyncContent<ComboMissionData> *);
	RefCountablePtr<extension::AsyncContent<ComboMissionData> >();
	~RefCountablePtr<extension::AsyncContent<ComboMissionData> >();
	void swap(extension::RefCountablePtr<extension::AsyncContent<ComboMissionData> > &);
	extension::RefCountablePtr<extension::AsyncContent<ComboMissionData> > & operator=(const extension::RefCountablePtr<extension::AsyncContent<ComboMissionData> > &);
	void reset(extension::AsyncContent<ComboMissionData> *);
	void resetWithAddRef(extension::AsyncContent<ComboMissionData> *);
	extension::AsyncContent<ComboMissionData> * get();
	extension::AsyncContent<ComboMissionData> & operator*();
	extension::AsyncContent<ComboMissionData> * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::AsyncContent<StageResources> >
{
private:
	extension::AsyncContent<StageResources> * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::AsyncContent<StageResources> >(const extension::RefCountablePtr<extension::AsyncContent<StageResources> > &);
	RefCountablePtr<extension::AsyncContent<StageResources> >(extension::AsyncContent<StageResources> *, bool);
	RefCountablePtr<extension::AsyncContent<StageResources> >(extension::AsyncContent<StageResources> *);
	RefCountablePtr<extension::AsyncContent<StageResources> >();
	~RefCountablePtr<extension::AsyncContent<StageResources> >();
	void swap(extension::RefCountablePtr<extension::AsyncContent<StageResources> > &);
	extension::RefCountablePtr<extension::AsyncContent<StageResources> > & operator=(const extension::RefCountablePtr<extension::AsyncContent<StageResources> > &);
	void reset(extension::AsyncContent<StageResources> *);
	void resetWithAddRef(extension::AsyncContent<StageResources> *);
	extension::AsyncContent<StageResources> * get();
	extension::AsyncContent<StageResources> & operator*();
	extension::AsyncContent<StageResources> * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::AsyncContent<StageProjectData> >
{
private:
	extension::AsyncContent<StageProjectData> * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::AsyncContent<StageProjectData> >(const extension::RefCountablePtr<extension::AsyncContent<StageProjectData> > &);
	RefCountablePtr<extension::AsyncContent<StageProjectData> >(extension::AsyncContent<StageProjectData> *, bool);
	RefCountablePtr<extension::AsyncContent<StageProjectData> >(extension::AsyncContent<StageProjectData> *);
	RefCountablePtr<extension::AsyncContent<StageProjectData> >();
	~RefCountablePtr<extension::AsyncContent<StageProjectData> >();
	void swap(extension::RefCountablePtr<extension::AsyncContent<StageProjectData> > &);
	extension::RefCountablePtr<extension::AsyncContent<StageProjectData> > & operator=(const extension::RefCountablePtr<extension::AsyncContent<StageProjectData> > &);
	void reset(extension::AsyncContent<StageProjectData> *);
	void resetWithAddRef(extension::AsyncContent<StageProjectData> *);
	extension::AsyncContent<StageProjectData> * get();
	extension::AsyncContent<StageProjectData> & operator*();
	extension::AsyncContent<StageProjectData> * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::AsyncContent<CharaProjectData> >
{
private:
	extension::AsyncContent<CharaProjectData> * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::AsyncContent<CharaProjectData> >(const extension::RefCountablePtr<extension::AsyncContent<CharaProjectData> > &);
	RefCountablePtr<extension::AsyncContent<CharaProjectData> >(extension::AsyncContent<CharaProjectData> *, bool);
	RefCountablePtr<extension::AsyncContent<CharaProjectData> >(extension::AsyncContent<CharaProjectData> *);
	RefCountablePtr<extension::AsyncContent<CharaProjectData> >();
	~RefCountablePtr<extension::AsyncContent<CharaProjectData> >();
	void swap(extension::RefCountablePtr<extension::AsyncContent<CharaProjectData> > &);
	extension::RefCountablePtr<extension::AsyncContent<CharaProjectData> > & operator=(const extension::RefCountablePtr<extension::AsyncContent<CharaProjectData> > &);
	void reset(extension::AsyncContent<CharaProjectData> *);
	void resetWithAddRef(extension::AsyncContent<CharaProjectData> *);
	extension::AsyncContent<CharaProjectData> * get();
	extension::AsyncContent<CharaProjectData> & operator*();
	extension::AsyncContent<CharaProjectData> * operator->();
	bool isNull();
};
extension::AsyncContent<Image>::AsyncContent<Image>(const std::string & name, const std::string & optstr); // 0x1400A3C50
extension::AsyncContent<extension::GFXIMovieData>::AsyncContent<extension::GFXIMovieData>(const std::string & name, const std::string & optstr); // 0x1400A3C50
extension::AsyncContent<OGLCurve>::AsyncContent<OGLCurve>(const std::string & name, const std::string & optstr); // 0x1400A3C50
extension::AsyncContent<extension::AsyncAsset>::AsyncContent<extension::AsyncAsset>(const std::string & name, const std::string & optstr); // 0x1400A3C50
extension::AsyncContent<OGLMirror>::AsyncContent<OGLMirror>(const std::string & name, const std::string & optstr); // 0x1400A3C50
extension::AsyncContent<StageResources>::AsyncContent<StageResources>(const std::string & name, const std::string & optstr); // 0x1400A3C50
extension::AsyncContent<extension::AsyncFileImage>::AsyncContent<extension::AsyncFileImage>(const std::string & name, const std::string & optstr); // 0x1400A3C50
extension::AsyncContent<CMediaSound>::AsyncContent<CMediaSound>(const std::string & name, const std::string & optstr); // 0x1400A3C50
void extension::AsyncContent<CharaDataUnify>::setResult(std::unique_ptr<CharaDataUnify,std::default_delete<CharaDataUnify> > result); // 0x1401B07C0
void extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData>::setResult(std::unique_ptr<AsyncKeyRecordDataLoad::KeyData,std::default_delete<AsyncKeyRecordDataLoad::KeyData> > result); // 0x1401CA550
void extension::AsyncContent<ComboMissionData>::setResult(std::unique_ptr<ComboMissionData,std::default_delete<ComboMissionData> > result); // 0x1401CA800
void extension::AsyncContent<OGLMirror>::setResult(std::unique_ptr<OGLMirror,std::default_delete<OGLMirror> > result); // 0x1401FA3D0
void extension::AsyncContent<OGLTexture>::setResult(std::unique_ptr<OGLTexture,std::default_delete<OGLTexture> > result); // 0x1401FA4B0
void extension::AsyncContent<StageResources>::setResult(std::unique_ptr<StageResources,std::default_delete<StageResources> > result); // 0x140217790
void extension::AsyncContent<extension::AsyncAsset>::setResult(std::unique_ptr<extension::AsyncAsset,std::default_delete<extension::AsyncAsset> > result); // 0x140252E60
void extension::AsyncContent<extension::AsyncFileImage>::setResult(std::unique_ptr<extension::AsyncFileImage,std::default_delete<extension::AsyncFileImage> > result); // 0x140253940
void extension::AsyncContent<Image>::setResult(std::unique_ptr<Image,std::default_delete<Image> > result); // 0x1401FA4B0
void extension::AsyncContent<OGLCamera>::setResult(std::unique_ptr<OGLCamera,std::default_delete<OGLCamera> > result); // 0x140253380
void extension::AsyncContent<OGLCurve>::setResult(std::unique_ptr<OGLCurve,std::default_delete<OGLCurve> > result); // 0x140252FE0
void extension::AsyncContent<OGLFigure>::setResult(std::unique_ptr<OGLFigure,std::default_delete<OGLFigure> > result); // 0x140253780
void extension::AsyncContent<OGLMotion>::setResult(std::unique_ptr<OGLMotion,std::default_delete<OGLMotion> > result); // 0x1402535D0
void extension::AsyncContent<OGLSecondary>::setResult(std::unique_ptr<OGLSecondary,std::default_delete<OGLSecondary> > result); // 0x140253200
void extension::AsyncContent<extension::GFXIMovieData>::setResult(std::unique_ptr<extension::GFXIMovieData,std::default_delete<extension::GFXIMovieData> > result); // 0x14027B6A0
void extension::AsyncContent<CharaProjectData>::setResult(std::unique_ptr<CharaProjectData,std::default_delete<CharaProjectData> > result); // 0x1402A9F80
void extension::AsyncContent<StageProjectData>::setResult(std::unique_ptr<StageProjectData,std::default_delete<StageProjectData> > result); // 0x1402A9E80
void extension::AsyncContent<CMediaSound>::setResult(std::unique_ptr<CMediaSound,std::default_delete<CMediaSound> > result); // 0x1402B9840
void extension::AsyncContent<extension::exsound_detail::SoundBankImpl>::setResult(std::unique_ptr<extension::exsound_detail::SoundBankImpl,std::default_delete<extension::exsound_detail::SoundBankImpl> > result); // 0x1402BAFB0
void extension::AsyncContent<CMediaSound>::setErrorResult(long e); // 0x1402B97D0
void extension::AsyncContent<CharaDataUnify>::setErrorResultWithData(long e, std::unique_ptr<CharaDataUnify,std::default_delete<CharaDataUnify> > data); // 0x1401B06F0
void extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData>::setErrorResultWithData(long e, std::unique_ptr<AsyncKeyRecordDataLoad::KeyData,std::default_delete<AsyncKeyRecordDataLoad::KeyData> > data); // 0x1401CA470
void extension::AsyncContent<ComboMissionData>::setErrorResultWithData(long e, std::unique_ptr<ComboMissionData,std::default_delete<ComboMissionData> > data); // 0x1401CA750
void extension::AsyncContent<StageResources>::setErrorResultWithData(long e, std::unique_ptr<StageResources,std::default_delete<StageResources> > data); // 0x1402176C0
void extension::AsyncContent<extension::AsyncAsset>::setErrorResultWithData(long e, std::unique_ptr<extension::AsyncAsset,std::default_delete<extension::AsyncAsset> > data); // 0x140252D90
void extension::AsyncContent<extension::AsyncFileImage>::setErrorResultWithData(long e, std::unique_ptr<extension::AsyncFileImage,std::default_delete<extension::AsyncFileImage> > data); // 0x140253860
void extension::AsyncContent<Image>::setErrorResultWithData(long e, std::unique_ptr<Image,std::default_delete<Image> > data); // 0x140253090
void extension::AsyncContent<OGLCamera>::setErrorResultWithData(long e, std::unique_ptr<OGLCamera,std::default_delete<OGLCamera> > data); // 0x1402532E0
void extension::AsyncContent<OGLCurve>::setErrorResultWithData(long e, std::unique_ptr<OGLCurve,std::default_delete<OGLCurve> > data); // 0x140252F40
void extension::AsyncContent<OGLFigure>::setErrorResultWithData(long e, std::unique_ptr<OGLFigure,std::default_delete<OGLFigure> > data); // 0x1402536B0
void extension::AsyncContent<OGLMirror>::setErrorResultWithData(long e, std::unique_ptr<OGLMirror,std::default_delete<OGLMirror> > data); // 0x140253430
void extension::AsyncContent<OGLMotion>::setErrorResultWithData(long e, std::unique_ptr<OGLMotion,std::default_delete<OGLMotion> > data); // 0x140253500
void extension::AsyncContent<OGLSecondary>::setErrorResultWithData(long e, std::unique_ptr<OGLSecondary,std::default_delete<OGLSecondary> > data); // 0x140253130
void extension::AsyncContent<extension::GFXIMovieData>::setErrorResultWithData(long e, std::unique_ptr<extension::GFXIMovieData,std::default_delete<extension::GFXIMovieData> > data); // 0x14027B5C0
void extension::AsyncContent<extension::exsound_detail::SoundBankImpl>::setErrorResultWithData(long e, std::unique_ptr<extension::exsound_detail::SoundBankImpl,std::default_delete<extension::exsound_detail::SoundBankImpl> > data); // 0x1402BAEE0
extension::RefCountablePtr<extension::AsyncContent<Image> > extension::FutureObjectJobManager<Image,extension::FutureImageOption>::LoadStart(const std::string & name, const std::string & optstr, const extension::FutureImageOption * opt); // 0x1400A3AF0
extension::RefCountablePtr<extension::AsyncContent<OGLFigure> > extension::FutureObjectJobManager<OGLFigure,extension::FutureFigureOption>::LoadStart(const std::string & name, const std::string & optstr, const extension::FutureFigureOption * opt); // 0x140128030
extension::RefCountablePtr<extension::AsyncContent<OGLTexture> > extension::FutureObjectJobManager<OGLTexture,extension::FutureTextureOption>::LoadStart(const std::string & name, const std::string & optstr, const extension::FutureTextureOption * opt); // 0x14012A3A0
extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > extension::FutureObjectJobManager<extension::AsyncAsset,extension::FutureAssetOption>::LoadStart(const std::string & name, const std::string & optstr, const extension::FutureAssetOption * opt); // 0x1401B09C0
extension::RefCountablePtr<extension::AsyncContent<StageResources> > extension::FutureObjectJobManager<StageResources,extension::FutureStageOption>::LoadStart(const std::string & name, const std::string & optstr, const extension::FutureStageOption * opt); // 0x140218920
extension::RefCountablePtr<extension::AsyncContent<CMediaSound> > extension::FutureObjectJobManager<CMediaSound,extension::exsound_detail::FutureSoundOption>::LoadStart(const std::string & name, const std::string & optstr, const extension::exsound_detail::FutureSoundOption * opt); // 0x1402BCFB0
std::string extension::FutureObjectJobManager<Image,extension::FutureImageOption>::Stringize(const extension::FutureImageOption * opt); // 0x1400A39F0
std::string extension::FutureObjectJobManager<OGLFigure,extension::FutureFigureOption>::Stringize(const extension::FutureFigureOption * opt); // 0x140127F50
std::string extension::FutureObjectJobManager<OGLTexture,extension::FutureTextureOption>::Stringize(const extension::FutureTextureOption * opt); // 0x14012A280
std::string extension::FutureObjectJobManager<extension::AsyncAsset,extension::FutureAssetOption>::Stringize(const extension::FutureAssetOption * opt); // 0x1401B08A0
std::string extension::FutureObjectJobManager<StageResources,extension::FutureStageOption>::Stringize(const extension::FutureStageOption * opt); // 0x140218840
std::string extension::FutureObjectJobManager<CMediaSound,extension::exsound_detail::FutureSoundOption>::Stringize(const extension::exsound_detail::FutureSoundOption * opt); // 0x1402BCEC0
extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> > extension::FutureObjectJobManager<extension::GFXIMovieData,void>::LoadStart(const std::string & name, const std::string & optstr, const void * __formal); // 0x1400FD110
extension::RefCountablePtr<extension::AsyncContent<OGLCurve> > extension::FutureObjectJobManager<OGLCurve,void>::LoadStart(const std::string & name, const std::string & optstr, const void * __formal); // 0x14012A1B0
extension::RefCountablePtr<extension::AsyncContent<OGLMirror> > extension::FutureObjectJobManager<OGLMirror,void>::LoadStart(const std::string & name, const std::string & optstr, const void * __formal); // 0x1401FA2B0
extension::RefCountablePtr<extension::AsyncContent<OGLMotion> > extension::FutureObjectJobManager<OGLMotion,void>::LoadStart(const std::string & name, const std::string & optstr, const void * __formal); // 0x1401FA340
extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> > extension::FutureObjectJobManager<extension::AsyncFileImage,void>::LoadStart(const std::string & name, const std::string & optstr, const void * __formal); // 0x140256CE0
extension::RefCountablePtr<extension::AsyncContent<OGLCamera> > extension::FutureObjectJobManager<OGLCamera,void>::LoadStart(const std::string & name, const std::string & optstr, const void * __formal); // 0x140256C10
extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> > extension::FutureObjectJobManager<OGLSecondary,void>::LoadStart(const std::string & name, const std::string & optstr, const void * __formal); // 0x140252D00
extension::RefCountablePtr<extension::AsyncContent<extension::exsound_detail::SoundBankImpl> > extension::FutureObjectJobManager<extension::exsound_detail::SoundBankImpl,void>::LoadStart(const std::string & name, const std::string & optstr, const void * __formal); // 0x1402BD0A0
std::string extension::FutureObjectJobManager<extension::GFXIMovieData,void>::Stringize(const void * __formal); // 0x14004E2F0
std::string extension::FutureObjectJobManager<OGLCurve,void>::Stringize(const void * __formal); // 0x14004E2F0
std::string extension::FutureObjectJobManager<OGLMirror,void>::Stringize(const void * __formal); // 0x14004E2F0
std::string extension::FutureObjectJobManager<extension::AsyncFileImage,void>::Stringize(const void * __formal); // 0x14004E2F0
std::string extension::FutureObjectJobManager<extension::exsound_detail::SoundBankImpl,void>::Stringize(const void * __formal); // 0x14004E2F0
struct extension::FutureObjectSpec
{
	struct NoCache_t;
	static extension::FutureObjectSpec::NoCache_t NoCache; // 0xFFFFFFFFFFFFFFFF
	static bool IsReadyAllFutureObjects();
	static void CleanupExpiredCachedEntry();
protected:
	FutureObjectSpec();
	~FutureObjectSpec();
	void incrementFutureObjectJobCount();
	void decrementFutureObjectJobCount();
private:
	static extension::AtomicInt s_futureObjectJobCount; // 0xFFFFFFFFFFFFFFFF
};
struct extension::FutureObjectSpec::NoCache_t
{
};
class extension::RefCountableWeakSupport<extension::asyncjob_detail::FutureObjectBodyBase> :
	extension::RefCountableWeakSupportBase
{
public:
	RefCountableWeakSupport<extension::asyncjob_detail::FutureObjectBodyBase>(extension::RefCountableWeakSupport<extension::asyncjob_detail::FutureObjectBodyBase> &);
	RefCountableWeakSupport<extension::asyncjob_detail::FutureObjectBodyBase>(const extension::RefCountableWeakSupport<extension::asyncjob_detail::FutureObjectBodyBase> &);
	RefCountableWeakSupport<extension::asyncjob_detail::FutureObjectBodyBase>();
	virtual ~RefCountableWeakSupport<extension::asyncjob_detail::FutureObjectBodyBase>();
	extension::RefCountableWeakSupport<extension::asyncjob_detail::FutureObjectBodyBase> & operator=(extension::RefCountableWeakSupport<extension::asyncjob_detail::FutureObjectBodyBase> &);
	extension::RefCountableWeakSupport<extension::asyncjob_detail::FutureObjectBodyBase> & operator=(const extension::RefCountableWeakSupport<extension::asyncjob_detail::FutureObjectBodyBase> &);
};
class extension::asyncjob_detail::FutureObjectBodyBase :
	extension::RefCountableWeakSupport<extension::asyncjob_detail::FutureObjectBodyBase>
{
public:
	FutureObjectBodyBase(extension::asyncjob_detail::FutureObjectBodyBase &);
	FutureObjectBodyBase(const extension::asyncjob_detail::FutureObjectBodyBase &);
	FutureObjectBodyBase();
	virtual ~FutureObjectBodyBase();
	extension::asyncjob_detail::FutureObjectBodyBase & operator=(extension::asyncjob_detail::FutureObjectBodyBase &);
	extension::asyncjob_detail::FutureObjectBodyBase & operator=(const extension::asyncjob_detail::FutureObjectBodyBase &);
};
class extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>
{
private:
	extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode> * m_Prev; // 0x0
	extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode> * m_Next; // 0x8
	BiLinkable<extension::asyncjob_detail::AssetCacheNode>(extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode> &);
public:
	BiLinkable<extension::asyncjob_detail::AssetCacheNode>();
protected:
	~BiLinkable<extension::asyncjob_detail::AssetCacheNode>();
public:
	static extension::asyncjob_detail::AssetCacheNode * Prev(const extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode> *);
	static extension::asyncjob_detail::AssetCacheNode * Next(const extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode> *);
	static void Link(extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode> *, extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode> *);
	static void Isolate(extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode> *);
	static bool IsIsolated(extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode> *);
private:
	extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode> & operator=(extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode> &);
};
class extension::asyncjob_detail::AssetCacheNode :
	extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>
{
public:
	~AssetCacheNode();
	void CleanupExpiredEntry();
	AssetCacheNode();
};
class extension::asyncjob_detail::AssetCacheBase :
	extension::asyncjob_detail::AssetCacheNode
{
public:
	AssetCacheBase();
	virtual ~AssetCacheBase();
};
class extension::BasicFutureObject<OGLMotion,void>::Body :
	extension::asyncjob_detail::FutureObjectBodyBase
{
private:
	extension::RefCountablePtr<extension::AsyncContent<OGLMotion> > m_content; // 0x10
public:
	Body(extension::RefCountablePtr<extension::AsyncContent<OGLMotion> >);
	Body();
private:
	Body(const extension::BasicFutureObject<OGLMotion,void>::Body &);
	extension::BasicFutureObject<OGLMotion,void>::Body & operator=(extension::BasicFutureObject<OGLMotion,void>::Body &);
	virtual ~Body();
public:
	bool isEmpty();
	bool isReady();
	void waitForReady();
	OGLMotion * getData();
	extension::AsyncContentConstants::ErrorCode getErrorCode();
	OGLMotion * releaseData();
	std::string contentPath();
	static extension::RefCountablePtr<extension::BasicFutureObject<OGLMotion,void>::Body> GetSharedEmpty();
};
class extension::BasicFutureObject<OGLMirror,void>::Body :
	extension::asyncjob_detail::FutureObjectBodyBase
{
private:
	extension::RefCountablePtr<extension::AsyncContent<OGLMirror> > m_content; // 0x10
public:
	Body(extension::RefCountablePtr<extension::AsyncContent<OGLMirror> >);
	Body();
private:
	Body(const extension::BasicFutureObject<OGLMirror,void>::Body &);
	extension::BasicFutureObject<OGLMirror,void>::Body & operator=(extension::BasicFutureObject<OGLMirror,void>::Body &);
	virtual ~Body();
public:
	bool isEmpty();
	bool isReady();
	void waitForReady();
	OGLMirror * getData();
	extension::AsyncContentConstants::ErrorCode getErrorCode();
	OGLMirror * releaseData();
	std::string contentPath();
	static extension::RefCountablePtr<extension::BasicFutureObject<OGLMirror,void>::Body> GetSharedEmpty();
};
class extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body :
	extension::asyncjob_detail::FutureObjectBodyBase
{
private:
	extension::RefCountablePtr<extension::AsyncContent<OGLFigure> > m_content; // 0x10
public:
	Body(extension::RefCountablePtr<extension::AsyncContent<OGLFigure> >);
	Body();
private:
	Body(const extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body &);
	extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body & operator=(extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body &);
	virtual ~Body();
public:
	bool isEmpty();
	bool isReady();
	void waitForReady();
	OGLFigure * getData();
	extension::AsyncContentConstants::ErrorCode getErrorCode();
	OGLFigure * releaseData();
	std::string contentPath();
	static extension::RefCountablePtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> GetSharedEmpty();
};
class extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body :
	extension::asyncjob_detail::FutureObjectBodyBase
{
private:
	extension::RefCountablePtr<extension::AsyncContent<OGLTexture> > m_content; // 0x10
public:
	Body(extension::RefCountablePtr<extension::AsyncContent<OGLTexture> >);
	Body();
private:
	Body(const extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body &);
	extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body & operator=(extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body &);
	virtual ~Body();
public:
	bool isEmpty();
	bool isReady();
	void waitForReady();
	OGLTexture * getData();
	extension::AsyncContentConstants::ErrorCode getErrorCode();
	OGLTexture * releaseData();
	std::string contentPath();
	static extension::RefCountablePtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> GetSharedEmpty();
};
class extension::BasicFutureObject<OGLSecondary,void>::Body :
	extension::asyncjob_detail::FutureObjectBodyBase
{
private:
	extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> > m_content; // 0x10
public:
	Body(extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> >);
	Body();
private:
	Body(const extension::BasicFutureObject<OGLSecondary,void>::Body &);
	extension::BasicFutureObject<OGLSecondary,void>::Body & operator=(extension::BasicFutureObject<OGLSecondary,void>::Body &);
	virtual ~Body();
public:
	bool isEmpty();
	bool isReady();
	void waitForReady();
	OGLSecondary * getData();
	extension::AsyncContentConstants::ErrorCode getErrorCode();
	OGLSecondary * releaseData();
	std::string contentPath();
	static extension::RefCountablePtr<extension::BasicFutureObject<OGLSecondary,void>::Body> GetSharedEmpty();
};
class extension::BasicFutureObject<OGLCamera,void>::Body :
	extension::asyncjob_detail::FutureObjectBodyBase
{
private:
	extension::RefCountablePtr<extension::AsyncContent<OGLCamera> > m_content; // 0x10
public:
	Body(extension::RefCountablePtr<extension::AsyncContent<OGLCamera> >);
	Body();
private:
	Body(const extension::BasicFutureObject<OGLCamera,void>::Body &);
	extension::BasicFutureObject<OGLCamera,void>::Body & operator=(extension::BasicFutureObject<OGLCamera,void>::Body &);
	virtual ~Body();
public:
	bool isEmpty();
	bool isReady();
	void waitForReady();
	OGLCamera * getData();
	extension::AsyncContentConstants::ErrorCode getErrorCode();
	OGLCamera * releaseData();
	std::string contentPath();
	static extension::RefCountablePtr<extension::BasicFutureObject<OGLCamera,void>::Body> GetSharedEmpty();
};
class extension::BasicFutureObject<extension::GFXIMovieData,void>::Body :
	extension::asyncjob_detail::FutureObjectBodyBase
{
private:
	extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> > m_content; // 0x10
public:
	Body(extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> >);
	Body();
private:
	Body(const extension::BasicFutureObject<extension::GFXIMovieData,void>::Body &);
	extension::BasicFutureObject<extension::GFXIMovieData,void>::Body & operator=(extension::BasicFutureObject<extension::GFXIMovieData,void>::Body &);
	virtual ~Body();
public:
	bool isEmpty();
	bool isReady();
	void waitForReady();
	extension::GFXIMovieData * getData();
	extension::AsyncContentConstants::ErrorCode getErrorCode();
	extension::GFXIMovieData * releaseData();
	std::string contentPath();
	static extension::RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> GetSharedEmpty();
};
class extension::BasicFutureObject<extension::AsyncFileImage,void>::Body :
	extension::asyncjob_detail::FutureObjectBodyBase
{
private:
	extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> > m_content; // 0x10
public:
	Body(extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> >);
	Body();
private:
	Body(const extension::BasicFutureObject<extension::AsyncFileImage,void>::Body &);
	extension::BasicFutureObject<extension::AsyncFileImage,void>::Body & operator=(extension::BasicFutureObject<extension::AsyncFileImage,void>::Body &);
	virtual ~Body();
public:
	bool isEmpty();
	bool isReady();
	void waitForReady();
	extension::AsyncFileImage * getData();
	extension::AsyncContentConstants::ErrorCode getErrorCode();
	extension::AsyncFileImage * releaseData();
	std::string contentPath();
	static extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> GetSharedEmpty();
};
class extension::BasicFutureObject<Image,extension::FutureImageOption>::Body :
	extension::asyncjob_detail::FutureObjectBodyBase
{
private:
	extension::RefCountablePtr<extension::AsyncContent<Image> > m_content; // 0x10
public:
	Body(extension::RefCountablePtr<extension::AsyncContent<Image> >);
	Body();
private:
	Body(const extension::BasicFutureObject<Image,extension::FutureImageOption>::Body &);
	extension::BasicFutureObject<Image,extension::FutureImageOption>::Body & operator=(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body &);
	virtual ~Body();
public:
	bool isEmpty();
	bool isReady();
	void waitForReady();
	Image * getData();
	extension::AsyncContentConstants::ErrorCode getErrorCode();
	Image * releaseData();
	std::string contentPath();
	static extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> GetSharedEmpty();
};
class extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body :
	extension::asyncjob_detail::FutureObjectBodyBase
{
private:
	extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > m_content; // 0x10
public:
	Body(extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> >);
	Body();
private:
	Body(const extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body &);
	extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body & operator=(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body &);
	virtual ~Body();
public:
	bool isEmpty();
	bool isReady();
	void waitForReady();
	extension::AsyncAsset * getData();
	extension::AsyncContentConstants::ErrorCode getErrorCode();
	extension::AsyncAsset * releaseData();
	std::string contentPath();
	static extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> GetSharedEmpty();
};
class extension::BasicFutureObject<OGLCurve,void>::Body :
	extension::asyncjob_detail::FutureObjectBodyBase
{
private:
	extension::RefCountablePtr<extension::AsyncContent<OGLCurve> > m_content; // 0x10
public:
	Body(extension::RefCountablePtr<extension::AsyncContent<OGLCurve> >);
	Body();
private:
	Body(const extension::BasicFutureObject<OGLCurve,void>::Body &);
	extension::BasicFutureObject<OGLCurve,void>::Body & operator=(extension::BasicFutureObject<OGLCurve,void>::Body &);
	virtual ~Body();
public:
	bool isEmpty();
	bool isReady();
	void waitForReady();
	OGLCurve * getData();
	extension::AsyncContentConstants::ErrorCode getErrorCode();
	OGLCurve * releaseData();
	std::string contentPath();
	static extension::RefCountablePtr<extension::BasicFutureObject<OGLCurve,void>::Body> GetSharedEmpty();
};
class extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body :
	extension::asyncjob_detail::FutureObjectBodyBase
{
private:
	extension::RefCountablePtr<extension::AsyncContent<StageResources> > m_content; // 0x10
public:
	Body(extension::RefCountablePtr<extension::AsyncContent<StageResources> >);
	Body();
private:
	Body(const extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body &);
	extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body & operator=(extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body &);
	virtual ~Body();
public:
	bool isEmpty();
	bool isReady();
	void waitForReady();
	StageResources * getData();
	extension::AsyncContentConstants::ErrorCode getErrorCode();
	StageResources * releaseData();
	std::string contentPath();
	static extension::RefCountablePtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> GetSharedEmpty();
};
class extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body :
	extension::asyncjob_detail::FutureObjectBodyBase
{
private:
	extension::RefCountablePtr<extension::AsyncContent<CMediaSound> > m_content; // 0x10
public:
	Body(extension::RefCountablePtr<extension::AsyncContent<CMediaSound> >);
	Body();
private:
	Body(const extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body &);
	extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body & operator=(extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body &);
	virtual ~Body();
public:
	bool isEmpty();
	bool isReady();
	void waitForReady();
	CMediaSound * getData();
	extension::AsyncContentConstants::ErrorCode getErrorCode();
	CMediaSound * releaseData();
	std::string contentPath();
	static extension::RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> GetSharedEmpty();
};
class extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body :
	extension::asyncjob_detail::FutureObjectBodyBase
{
private:
	extension::RefCountablePtr<extension::AsyncContent<extension::exsound_detail::SoundBankImpl> > m_content; // 0x10
public:
	Body(extension::RefCountablePtr<extension::AsyncContent<extension::exsound_detail::SoundBankImpl> >);
	Body();
private:
	Body(const extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body &);
	extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body & operator=(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body &);
	virtual ~Body();
public:
	bool isEmpty();
	bool isReady();
	void waitForReady();
	extension::exsound_detail::SoundBankImpl * getData();
	extension::AsyncContentConstants::ErrorCode getErrorCode();
	extension::exsound_detail::SoundBankImpl * releaseData();
	std::string contentPath();
	static extension::RefCountablePtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> GetSharedEmpty();
};
extension::BasicFutureObject<extension::AsyncFileImage,void>::Body::~Body(); // 0x14009E5C0
extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::~Body(); // 0x14009E270
extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body::~Body(); // 0x14009E410
extension::BasicFutureObject<extension::GFXIMovieData,void>::Body::~Body(); // 0x1400FBD40
extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body::~Body(); // 0x14011C910
extension::BasicFutureObject<OGLCurve,void>::Body::~Body(); // 0x140127E30
extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body::~Body(); // 0x140128860
extension::BasicFutureObject<OGLMirror,void>::Body::~Body(); // 0x1401A8D90
extension::BasicFutureObject<OGLMotion,void>::Body::~Body(); // 0x1401A8AF0
extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body::~Body(); // 0x140217600
extension::BasicFutureObject<OGLCamera,void>::Body::~Body(); // 0x140252780
extension::BasicFutureObject<OGLSecondary,void>::Body::~Body(); // 0x140252630
extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body::~Body(); // 0x1402BAB30
extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body::~Body(); // 0x1402BAD70
extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::Body(extension::RefCountablePtr<extension::AsyncContent<Image> > shared); // 0x1400A3950
extension::BasicFutureObject<extension::GFXIMovieData,void>::Body::Body(extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> > shared); // 0x1400FD060
extension::BasicFutureObject<OGLCurve,void>::Body::Body(extension::RefCountablePtr<extension::AsyncContent<OGLCurve> > shared); // 0x14012A110
extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body::Body(extension::RefCountablePtr<extension::AsyncContent<OGLFigure> > shared); // 0x140127C00
extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body::Body(extension::RefCountablePtr<extension::AsyncContent<OGLTexture> > shared); // 0x140129EF0
extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body::Body(extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > shared); // 0x1401B0640
extension::BasicFutureObject<OGLMirror,void>::Body::Body(extension::RefCountablePtr<extension::AsyncContent<OGLMirror> > shared); // 0x1401FA040
extension::BasicFutureObject<OGLMotion,void>::Body::Body(extension::RefCountablePtr<extension::AsyncContent<OGLMotion> > shared); // 0x1401FA200
extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body::Body(extension::RefCountablePtr<extension::AsyncContent<StageResources> > shared); // 0x140218790
extension::BasicFutureObject<extension::AsyncFileImage,void>::Body::Body(extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> > shared); // 0x140256B60
extension::BasicFutureObject<OGLCamera,void>::Body::Body(extension::RefCountablePtr<extension::AsyncContent<OGLCamera> > shared); // 0x140256A00
extension::BasicFutureObject<OGLSecondary,void>::Body::Body(extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> > shared); // 0x140252580
extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body::Body(extension::RefCountablePtr<extension::AsyncContent<CMediaSound> > shared); // 0x1402BD3C0
extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body::Body(extension::RefCountablePtr<extension::AsyncContent<extension::exsound_detail::SoundBankImpl> > shared); // 0x1402BD530
Image * extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::getData(); // 0x14009E230
std::string extension::BasicFutureObject<extension::AsyncFileImage,void>::Body::contentPath(); // 0x1402523C0
std::string extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body::contentPath(); // 0x1402523C0
extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> extension::BasicFutureObject<extension::AsyncFileImage,void>::Body::GetSharedEmpty(); // 0x14009E4D0
extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::GetSharedEmpty(); // 0x14009E140
extension::RefCountablePtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body::GetSharedEmpty(); // 0x14009E320
extension::RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> extension::BasicFutureObject<extension::GFXIMovieData,void>::Body::GetSharedEmpty(); // 0x1400FBC50
extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body::GetSharedEmpty(); // 0x14011C820
extension::RefCountablePtr<extension::BasicFutureObject<OGLCurve,void>::Body> extension::BasicFutureObject<OGLCurve,void>::Body::GetSharedEmpty(); // 0x140127D40
extension::RefCountablePtr<extension::BasicFutureObject<OGLMirror,void>::Body> extension::BasicFutureObject<OGLMirror,void>::Body::GetSharedEmpty(); // 0x1401A8CA0
extension::RefCountablePtr<extension::BasicFutureObject<OGLMotion,void>::Body> extension::BasicFutureObject<OGLMotion,void>::Body::GetSharedEmpty(); // 0x1401A8A00
extension::RefCountablePtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body::GetSharedEmpty(); // 0x1401A8BB0
extension::RefCountablePtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body::GetSharedEmpty(); // 0x140217510
extension::RefCountablePtr<extension::BasicFutureObject<OGLCamera,void>::Body> extension::BasicFutureObject<OGLCamera,void>::Body::GetSharedEmpty(); // 0x140257B80
extension::RefCountablePtr<extension::BasicFutureObject<OGLSecondary,void>::Body> extension::BasicFutureObject<OGLSecondary,void>::Body::GetSharedEmpty(); // 0x140257A90
extension::RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body::GetSharedEmpty(); // 0x1402BAA40
extension::RefCountablePtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body::GetSharedEmpty(); // 0x1402BAC80
class extension::RefCountablePtr<extension::BasicFutureObject<OGLMirror,void>::Body>
{
private:
	extension::BasicFutureObject<OGLMirror,void>::Body * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::BasicFutureObject<OGLMirror,void>::Body>(const extension::RefCountablePtr<extension::BasicFutureObject<OGLMirror,void>::Body> &);
	RefCountablePtr<extension::BasicFutureObject<OGLMirror,void>::Body>(extension::BasicFutureObject<OGLMirror,void>::Body *, bool);
	RefCountablePtr<extension::BasicFutureObject<OGLMirror,void>::Body>(extension::BasicFutureObject<OGLMirror,void>::Body *);
	RefCountablePtr<extension::BasicFutureObject<OGLMirror,void>::Body>();
	~RefCountablePtr<extension::BasicFutureObject<OGLMirror,void>::Body>();
	void swap(extension::RefCountablePtr<extension::BasicFutureObject<OGLMirror,void>::Body> &);
	extension::RefCountablePtr<extension::BasicFutureObject<OGLMirror,void>::Body> & operator=(const extension::RefCountablePtr<extension::BasicFutureObject<OGLMirror,void>::Body> &);
	void reset(extension::BasicFutureObject<OGLMirror,void>::Body *);
	void resetWithAddRef(extension::BasicFutureObject<OGLMirror,void>::Body *);
	extension::BasicFutureObject<OGLMirror,void>::Body * get();
	extension::BasicFutureObject<OGLMirror,void>::Body & operator*();
	extension::BasicFutureObject<OGLMirror,void>::Body * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>
{
private:
	extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>(const extension::RefCountablePtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> &);
	RefCountablePtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>(extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *, bool);
	RefCountablePtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>(extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *);
	RefCountablePtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>();
	~RefCountablePtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>();
	void swap(extension::RefCountablePtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> &);
	extension::RefCountablePtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> & operator=(const extension::RefCountablePtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> &);
	void reset(extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *);
	void resetWithAddRef(extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *);
	extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body * get();
	extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body & operator*();
	extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::BasicFutureObject<OGLCamera,void>::Body>
{
private:
	extension::BasicFutureObject<OGLCamera,void>::Body * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::BasicFutureObject<OGLCamera,void>::Body>(const extension::RefCountablePtr<extension::BasicFutureObject<OGLCamera,void>::Body> &);
	RefCountablePtr<extension::BasicFutureObject<OGLCamera,void>::Body>(extension::BasicFutureObject<OGLCamera,void>::Body *, bool);
	RefCountablePtr<extension::BasicFutureObject<OGLCamera,void>::Body>(extension::BasicFutureObject<OGLCamera,void>::Body *);
	RefCountablePtr<extension::BasicFutureObject<OGLCamera,void>::Body>();
	~RefCountablePtr<extension::BasicFutureObject<OGLCamera,void>::Body>();
	void swap(extension::RefCountablePtr<extension::BasicFutureObject<OGLCamera,void>::Body> &);
	extension::RefCountablePtr<extension::BasicFutureObject<OGLCamera,void>::Body> & operator=(const extension::RefCountablePtr<extension::BasicFutureObject<OGLCamera,void>::Body> &);
	void reset(extension::BasicFutureObject<OGLCamera,void>::Body *);
	void resetWithAddRef(extension::BasicFutureObject<OGLCamera,void>::Body *);
	extension::BasicFutureObject<OGLCamera,void>::Body * get();
	extension::BasicFutureObject<OGLCamera,void>::Body & operator*();
	extension::BasicFutureObject<OGLCamera,void>::Body * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::BasicFutureObject<OGLMotion,void>::Body>
{
private:
	extension::BasicFutureObject<OGLMotion,void>::Body * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::BasicFutureObject<OGLMotion,void>::Body>(const extension::RefCountablePtr<extension::BasicFutureObject<OGLMotion,void>::Body> &);
	RefCountablePtr<extension::BasicFutureObject<OGLMotion,void>::Body>(extension::BasicFutureObject<OGLMotion,void>::Body *, bool);
	RefCountablePtr<extension::BasicFutureObject<OGLMotion,void>::Body>(extension::BasicFutureObject<OGLMotion,void>::Body *);
	RefCountablePtr<extension::BasicFutureObject<OGLMotion,void>::Body>();
	~RefCountablePtr<extension::BasicFutureObject<OGLMotion,void>::Body>();
	void swap(extension::RefCountablePtr<extension::BasicFutureObject<OGLMotion,void>::Body> &);
	extension::RefCountablePtr<extension::BasicFutureObject<OGLMotion,void>::Body> & operator=(const extension::RefCountablePtr<extension::BasicFutureObject<OGLMotion,void>::Body> &);
	void reset(extension::BasicFutureObject<OGLMotion,void>::Body *);
	void resetWithAddRef(extension::BasicFutureObject<OGLMotion,void>::Body *);
	extension::BasicFutureObject<OGLMotion,void>::Body * get();
	extension::BasicFutureObject<OGLMotion,void>::Body & operator*();
	extension::BasicFutureObject<OGLMotion,void>::Body * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>
{
private:
	extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>(const extension::RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> &);
	RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>(extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *, bool);
	RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>(extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *);
	RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>();
	~RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>();
	void swap(extension::RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> &);
	extension::RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> & operator=(const extension::RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> &);
	void reset(extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *);
	void resetWithAddRef(extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *);
	extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body * get();
	extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body & operator*();
	extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>
{
private:
	extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>(const extension::RefCountablePtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> &);
	RefCountablePtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *, bool);
	RefCountablePtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *);
	RefCountablePtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>();
	~RefCountablePtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>();
	void swap(extension::RefCountablePtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> &);
	extension::RefCountablePtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> & operator=(const extension::RefCountablePtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> &);
	void reset(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *);
	void resetWithAddRef(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *);
	extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body * get();
	extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body & operator*();
	extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>
{
private:
	extension::BasicFutureObject<extension::AsyncFileImage,void>::Body * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>(const extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> &);
	RefCountablePtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>(extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *, bool);
	RefCountablePtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>(extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *);
	RefCountablePtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>();
	~RefCountablePtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>();
	void swap(extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> &);
	extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> & operator=(const extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> &);
	void reset(extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *);
	void resetWithAddRef(extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *);
	extension::BasicFutureObject<extension::AsyncFileImage,void>::Body * get();
	extension::BasicFutureObject<extension::AsyncFileImage,void>::Body & operator*();
	extension::BasicFutureObject<extension::AsyncFileImage,void>::Body * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::BasicFutureObject<OGLSecondary,void>::Body>
{
private:
	extension::BasicFutureObject<OGLSecondary,void>::Body * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::BasicFutureObject<OGLSecondary,void>::Body>(const extension::RefCountablePtr<extension::BasicFutureObject<OGLSecondary,void>::Body> &);
	RefCountablePtr<extension::BasicFutureObject<OGLSecondary,void>::Body>(extension::BasicFutureObject<OGLSecondary,void>::Body *, bool);
	RefCountablePtr<extension::BasicFutureObject<OGLSecondary,void>::Body>(extension::BasicFutureObject<OGLSecondary,void>::Body *);
	RefCountablePtr<extension::BasicFutureObject<OGLSecondary,void>::Body>();
	~RefCountablePtr<extension::BasicFutureObject<OGLSecondary,void>::Body>();
	void swap(extension::RefCountablePtr<extension::BasicFutureObject<OGLSecondary,void>::Body> &);
	extension::RefCountablePtr<extension::BasicFutureObject<OGLSecondary,void>::Body> & operator=(const extension::RefCountablePtr<extension::BasicFutureObject<OGLSecondary,void>::Body> &);
	void reset(extension::BasicFutureObject<OGLSecondary,void>::Body *);
	void resetWithAddRef(extension::BasicFutureObject<OGLSecondary,void>::Body *);
	extension::BasicFutureObject<OGLSecondary,void>::Body * get();
	extension::BasicFutureObject<OGLSecondary,void>::Body & operator*();
	extension::BasicFutureObject<OGLSecondary,void>::Body * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>
{
private:
	extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>(const extension::RefCountablePtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> &);
	RefCountablePtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>(extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *, bool);
	RefCountablePtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>(extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *);
	RefCountablePtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>();
	~RefCountablePtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>();
	void swap(extension::RefCountablePtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> &);
	extension::RefCountablePtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> & operator=(const extension::RefCountablePtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> &);
	void reset(extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *);
	void resetWithAddRef(extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *);
	extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body * get();
	extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body & operator*();
	extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>
{
private:
	extension::BasicFutureObject<Image,extension::FutureImageOption>::Body * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>(const extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> &);
	RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *, bool);
	RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *);
	RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>();
	~RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>();
	void swap(extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> &);
	extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> & operator=(const extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> &);
	void reset(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *);
	void resetWithAddRef(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *);
	extension::BasicFutureObject<Image,extension::FutureImageOption>::Body * get();
	extension::BasicFutureObject<Image,extension::FutureImageOption>::Body & operator*();
	extension::BasicFutureObject<Image,extension::FutureImageOption>::Body * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>
{
private:
	extension::BasicFutureObject<extension::GFXIMovieData,void>::Body * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>(const extension::RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> &);
	RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>(extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *, bool);
	RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>(extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *);
	RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>();
	~RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>();
	void swap(extension::RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> &);
	extension::RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> & operator=(const extension::RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> &);
	void reset(extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *);
	void resetWithAddRef(extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *);
	extension::BasicFutureObject<extension::GFXIMovieData,void>::Body * get();
	extension::BasicFutureObject<extension::GFXIMovieData,void>::Body & operator*();
	extension::BasicFutureObject<extension::GFXIMovieData,void>::Body * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>
{
private:
	extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>(const extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> &);
	RefCountablePtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *, bool);
	RefCountablePtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *);
	RefCountablePtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>();
	~RefCountablePtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>();
	void swap(extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> &);
	extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> & operator=(const extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> &);
	void reset(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *);
	void resetWithAddRef(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *);
	extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body * get();
	extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body & operator*();
	extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::BasicFutureObject<OGLCurve,void>::Body>
{
private:
	extension::BasicFutureObject<OGLCurve,void>::Body * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::BasicFutureObject<OGLCurve,void>::Body>(const extension::RefCountablePtr<extension::BasicFutureObject<OGLCurve,void>::Body> &);
	RefCountablePtr<extension::BasicFutureObject<OGLCurve,void>::Body>(extension::BasicFutureObject<OGLCurve,void>::Body *, bool);
	RefCountablePtr<extension::BasicFutureObject<OGLCurve,void>::Body>(extension::BasicFutureObject<OGLCurve,void>::Body *);
	RefCountablePtr<extension::BasicFutureObject<OGLCurve,void>::Body>();
	~RefCountablePtr<extension::BasicFutureObject<OGLCurve,void>::Body>();
	void swap(extension::RefCountablePtr<extension::BasicFutureObject<OGLCurve,void>::Body> &);
	extension::RefCountablePtr<extension::BasicFutureObject<OGLCurve,void>::Body> & operator=(const extension::RefCountablePtr<extension::BasicFutureObject<OGLCurve,void>::Body> &);
	void reset(extension::BasicFutureObject<OGLCurve,void>::Body *);
	void resetWithAddRef(extension::BasicFutureObject<OGLCurve,void>::Body *);
	extension::BasicFutureObject<OGLCurve,void>::Body * get();
	extension::BasicFutureObject<OGLCurve,void>::Body & operator*();
	extension::BasicFutureObject<OGLCurve,void>::Body * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>
{
private:
	extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>(const extension::RefCountablePtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> &);
	RefCountablePtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>(extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body *, bool);
	RefCountablePtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>(extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body *);
	RefCountablePtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>();
	~RefCountablePtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>();
	void swap(extension::RefCountablePtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> &);
	extension::RefCountablePtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> & operator=(const extension::RefCountablePtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> &);
	void reset(extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body *);
	void resetWithAddRef(extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body *);
	extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body * get();
	extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body & operator*();
	extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body * operator->();
	bool isNull();
};
class extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>
{
	class WeakProxy;
private:
	extension::BasicFutureObject<Image,extension::FutureImageOption>::Body * m_ptr; // 0x0
	extension::RefCountablePtr<extension::RefCountableWeakSupportBase::WeakProxy> m_proxy; // 0x8
public:
	RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>(const extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> &);
	RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>();
	~RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>();
	void swap(extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> &);
	extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> & operator=(const extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> &);
	void reset();
	extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> lock();
	bool expired();
};
class extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>
{
	class WeakProxy;
private:
	extension::BasicFutureObject<extension::GFXIMovieData,void>::Body * m_ptr; // 0x0
	extension::RefCountablePtr<extension::RefCountableWeakSupportBase::WeakProxy> m_proxy; // 0x8
public:
	RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>(const extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> &);
	RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>();
	~RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>();
	void swap(extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> &);
	extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> & operator=(const extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> &);
	void reset();
	extension::RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> lock();
	bool expired();
};
class extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>
{
	class WeakProxy;
private:
	extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body * m_ptr; // 0x0
	extension::RefCountablePtr<extension::RefCountableWeakSupportBase::WeakProxy> m_proxy; // 0x8
public:
	RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>(const extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> &);
	RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>();
	~RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>();
	void swap(extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> &);
	extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> & operator=(const extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> &);
	void reset();
	extension::RefCountablePtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> lock();
	bool expired();
};
class extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>
{
	class WeakProxy;
private:
	extension::BasicFutureObject<OGLCurve,void>::Body * m_ptr; // 0x0
	extension::RefCountablePtr<extension::RefCountableWeakSupportBase::WeakProxy> m_proxy; // 0x8
public:
	RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>(const extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> &);
	RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>();
	~RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>();
	void swap(extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> &);
	extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> & operator=(const extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> &);
	void reset();
	extension::RefCountablePtr<extension::BasicFutureObject<OGLCurve,void>::Body> lock();
	bool expired();
};
class extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>
{
	class WeakProxy;
private:
	extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body * m_ptr; // 0x0
	extension::RefCountablePtr<extension::RefCountableWeakSupportBase::WeakProxy> m_proxy; // 0x8
public:
	RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>(const extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> &);
	RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>();
	~RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>();
	void swap(extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> &);
	extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> & operator=(const extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> &);
	void reset();
	extension::RefCountablePtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> lock();
	bool expired();
};
class extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>
{
	class WeakProxy;
private:
	extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body * m_ptr; // 0x0
	extension::RefCountablePtr<extension::RefCountableWeakSupportBase::WeakProxy> m_proxy; // 0x8
public:
	RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>(const extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> &);
	RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>();
	~RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>();
	void swap(extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> &);
	extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> & operator=(const extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> &);
	void reset();
	extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> lock();
	bool expired();
};
class extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body>
{
	class WeakProxy;
private:
	extension::BasicFutureObject<OGLMotion,void>::Body * m_ptr; // 0x0
	extension::RefCountablePtr<extension::RefCountableWeakSupportBase::WeakProxy> m_proxy; // 0x8
public:
	RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body>(const extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> &);
	RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body>();
	~RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body>();
	void swap(extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> &);
	extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> & operator=(const extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> &);
	void reset();
	extension::RefCountablePtr<extension::BasicFutureObject<OGLMotion,void>::Body> lock();
	bool expired();
};
class extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>
{
	class WeakProxy;
private:
	extension::BasicFutureObject<OGLMirror,void>::Body * m_ptr; // 0x0
	extension::RefCountablePtr<extension::RefCountableWeakSupportBase::WeakProxy> m_proxy; // 0x8
public:
	RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>(const extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> &);
	RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>();
	~RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>();
	void swap(extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> &);
	extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> & operator=(const extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> &);
	void reset();
	extension::RefCountablePtr<extension::BasicFutureObject<OGLMirror,void>::Body> lock();
	bool expired();
};
class extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>
{
	class WeakProxy;
private:
	extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body * m_ptr; // 0x0
	extension::RefCountablePtr<extension::RefCountableWeakSupportBase::WeakProxy> m_proxy; // 0x8
public:
	RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>(const extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> &);
	RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>();
	~RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>();
	void swap(extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> &);
	extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> & operator=(const extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> &);
	void reset();
	extension::RefCountablePtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> lock();
	bool expired();
};
class extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>
{
	class WeakProxy;
private:
	extension::BasicFutureObject<extension::AsyncFileImage,void>::Body * m_ptr; // 0x0
	extension::RefCountablePtr<extension::RefCountableWeakSupportBase::WeakProxy> m_proxy; // 0x8
public:
	RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>(const extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> &);
	RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>();
	~RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>();
	void swap(extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> &);
	extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> & operator=(const extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> &);
	void reset();
	extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> lock();
	bool expired();
};
class extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>
{
	class WeakProxy;
private:
	extension::BasicFutureObject<OGLCamera,void>::Body * m_ptr; // 0x0
	extension::RefCountablePtr<extension::RefCountableWeakSupportBase::WeakProxy> m_proxy; // 0x8
public:
	RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>(const extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> &);
	RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>();
	~RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>();
	void swap(extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> &);
	extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> & operator=(const extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> &);
	void reset();
	extension::RefCountablePtr<extension::BasicFutureObject<OGLCamera,void>::Body> lock();
	bool expired();
};
class extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>
{
	class WeakProxy;
private:
	extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body * m_ptr; // 0x0
	extension::RefCountablePtr<extension::RefCountableWeakSupportBase::WeakProxy> m_proxy; // 0x8
public:
	RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>(const extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> &);
	RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>();
	~RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>();
	void swap(extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> &);
	extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> & operator=(const extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> &);
	void reset();
	extension::RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> lock();
	bool expired();
};
class extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>
{
	class WeakProxy;
private:
	extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body * m_ptr; // 0x0
	extension::RefCountablePtr<extension::RefCountableWeakSupportBase::WeakProxy> m_proxy; // 0x8
public:
	RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>(const extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> &);
	RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>();
	~RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>();
	void swap(extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> &);
	extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> & operator=(const extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> &);
	void reset();
	extension::RefCountablePtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> lock();
	bool expired();
};
extension::BasicFutureObject<Image,extension::FutureImageOption>::BasicFutureObject<Image,extension::FutureImageOption>(); // 0x14009DFA0
extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>(); // 0x14011C770
extension::BasicFutureObject<extension::AsyncFileImage,void>::~BasicFutureObject<extension::AsyncFileImage,void>(); // 0x14009DF70
extension::BasicFutureObject<extension::GFXIMovieData,void>::~BasicFutureObject<extension::GFXIMovieData,void>(); // 0x14009DF70
extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::~BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>(); // 0x14009DF70
extension::BasicFutureObject<OGLCurve,void>::~BasicFutureObject<OGLCurve,void>(); // 0x14009DF70
extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::~BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>(); // 0x14009DF70
extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::BasicFutureObject<OGLFigure,extension::FutureFigureOption>(extension::FutureObjectSpec::NoCache_t __formal, const std::string & asset_path, const extension::FutureFigureOption * opt); // 0x1401276E0
extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>(extension::FutureObjectSpec::NoCache_t __formal, const std::string & asset_path, const extension::FutureAssetOption * opt); // 0x1401B03E0
extension::BasicFutureObject<OGLMotion,void>::BasicFutureObject<OGLMotion,void>(extension::FutureObjectSpec::NoCache_t __formal, const std::string & asset_path, const void * opt); // 0x140250B30
extension::BasicFutureObject<OGLSecondary,void>::BasicFutureObject<OGLSecondary,void>(extension::FutureObjectSpec::NoCache_t __formal, const std::string & asset_path, const void * opt); // 0x1402509A0
extension::BasicFutureObject<extension::AsyncFileImage,void> & extension::BasicFutureObject<extension::AsyncFileImage,void>::operator=(const extension::BasicFutureObject<extension::AsyncFileImage,void> & other); // 0x14009E710
extension::BasicFutureObject<extension::GFXIMovieData,void> & extension::BasicFutureObject<extension::GFXIMovieData,void>::operator=(const extension::BasicFutureObject<extension::GFXIMovieData,void> & other); // 0x14009E710
extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> & extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::operator=(const extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> & other); // 0x14009E710
extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> & extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::operator=(const extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> & other); // 0x14009E710
extension::BasicFutureObject<OGLMirror,void> & extension::BasicFutureObject<OGLMirror,void>::operator=(const extension::BasicFutureObject<OGLMirror,void> & other); // 0x14009E710
extension::BasicFutureObject<StageResources,extension::FutureStageOption> & extension::BasicFutureObject<StageResources,extension::FutureStageOption>::operator=(const extension::BasicFutureObject<StageResources,extension::FutureStageOption> & other); // 0x14009E710
extension::BasicFutureObject<OGLCamera,void> & extension::BasicFutureObject<OGLCamera,void>::operator=(const extension::BasicFutureObject<OGLCamera,void> & other); // 0x14009E710
extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> & extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::operator=(const extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> & other); // 0x14009E710
const OGLTexture * extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::get(); // 0x14009DE80
bool extension::BasicFutureObject<extension::GFXIMovieData,void>::hasData(); // 0x1400FADC0
bool extension::BasicFutureObject<Image,extension::FutureImageOption>::hasData(); // 0x1400FADC0
extension::AsyncContentConstants::ErrorCode extension::BasicFutureObject<Image,extension::FutureImageOption>::getErrorCode(); // 0x14009FB10
const char * extension::BasicFutureObject<extension::GFXIMovieData,void>::getErrorString(); // 0x1402AF750
void extension::BasicFutureObject<extension::AsyncFileImage,void>::reset(); // 0x14009E770
void extension::BasicFutureObject<Image,extension::FutureImageOption>::reset(); // 0x14009DEC0
void extension::BasicFutureObject<extension::GFXIMovieData,void>::reset(); // 0x1400FBE90
void extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::reset(); // 0x1401B8830
void extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::reset(); // 0x1401F9390
void extension::BasicFutureObject<StageResources,extension::FutureStageOption>::reset(); // 0x140216F20
void extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::reset(); // 0x1402BAE30
extension::GFXIMovieData * extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(); // 0x14009DE80
extension::AsyncAsset * extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::operator extension::AsyncAsset * __ptr64 const(); // 0x14009DE80
OGLFigure * extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::operator OGLFigure * __ptr64 const(); // 0x14009DE80
extension::exsound_detail::SoundBankImpl * extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::operator->(); // 0x14009DE80
Image * extension::BasicFutureObject<Image,extension::FutureImageOption>::operator Image * __ptr64 const(); // 0x14009DE80
StageResources * extension::BasicFutureObject<StageResources,extension::FutureStageOption>::operator StageResources * __ptr64 const(); // 0x14009DE80
std::string extension::BasicFutureObject<extension::AsyncFileImage,void>::contentPath(); // 0x140250970
std::string extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::contentPath(); // 0x140250970
class extension::ExSimpleLockable<extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache> :
	protected extension::lockable_detail::SimpleLockableBase
{
public:
	ExSimpleLockable<extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache>();
private:
	ExSimpleLockable<extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache>(const extension::ExSimpleLockable<extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache> &);
	extension::ExSimpleLockable<extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache> & operator=(const extension::ExSimpleLockable<extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache> &);
	class ScopedLock_t;
protected:
	~ExSimpleLockable<extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache>();
};
class extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache :
	protected extension::ExSimpleLockable<extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache>,
	protected extension::asyncjob_detail::AssetCacheBase
{
public:
	AssetCache();
private:
	AssetCache(const extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache &);
	extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache & operator=(const extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache &);
	class ScopedLock_t;
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> > > > m_cachedObjectMap; // 0x40
public:
	virtual ~AssetCache();
	extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> getCachedOrLoadStart(std::string, const extension::FutureImageOption *);
private:
	virtual void CleanupExpiredEntry();
	void cleanupExpiredEntryNoGuard();
};
class extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache :
	protected extension::ExSimpleLockable<extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache>,
	protected extension::asyncjob_detail::AssetCacheBase
{
public:
	AssetCache();
private:
	AssetCache(const extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache &);
	extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache & operator=(const extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache &);
	class ScopedLock_t;
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> > > > m_cachedObjectMap; // 0x40
public:
	virtual ~AssetCache();
	extension::RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> getCachedOrLoadStart(std::string, const void *);
private:
	virtual void CleanupExpiredEntry();
	void cleanupExpiredEntryNoGuard();
};
class extension::ExSimpleLockable<extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache> :
	protected extension::lockable_detail::SimpleLockableBase
{
public:
	ExSimpleLockable<extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache>();
private:
	ExSimpleLockable<extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache>(const extension::ExSimpleLockable<extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache> &);
	extension::ExSimpleLockable<extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache> & operator=(const extension::ExSimpleLockable<extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache> &);
	class ScopedLock_t;
protected:
	~ExSimpleLockable<extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache>();
};
class extension::BasicFutureObject<OGLCurve,void>::AssetCache :
	protected extension::ExSimpleLockable<extension::BasicFutureObject<OGLCurve,void>::AssetCache>,
	protected extension::asyncjob_detail::AssetCacheBase
{
public:
	AssetCache();
private:
	AssetCache(const extension::BasicFutureObject<OGLCurve,void>::AssetCache &);
	extension::BasicFutureObject<OGLCurve,void>::AssetCache & operator=(const extension::BasicFutureObject<OGLCurve,void>::AssetCache &);
	class ScopedLock_t;
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> > > > m_cachedObjectMap; // 0x40
public:
	virtual ~AssetCache();
	extension::RefCountablePtr<extension::BasicFutureObject<OGLCurve,void>::Body> getCachedOrLoadStart(std::string, const void *);
private:
	virtual void CleanupExpiredEntry();
	void cleanupExpiredEntryNoGuard();
};
class extension::ExSimpleLockable<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache> :
	protected extension::lockable_detail::SimpleLockableBase
{
public:
	ExSimpleLockable<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache>();
private:
	ExSimpleLockable<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache>(const extension::ExSimpleLockable<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache> &);
	extension::ExSimpleLockable<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache> & operator=(const extension::ExSimpleLockable<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache> &);
	class ScopedLock_t;
protected:
	~ExSimpleLockable<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache>();
};
class extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache :
	protected extension::ExSimpleLockable<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache>,
	protected extension::asyncjob_detail::AssetCacheBase
{
public:
	AssetCache();
private:
	AssetCache(const extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache &);
	extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache & operator=(const extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache &);
	class ScopedLock_t;
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> > > > m_cachedObjectMap; // 0x40
public:
	virtual ~AssetCache();
	extension::RefCountablePtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> getCachedOrLoadStart(std::string, const extension::FutureFigureOption *);
private:
	virtual void CleanupExpiredEntry();
	void cleanupExpiredEntryNoGuard();
};
class extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache :
	protected extension::ExSimpleLockable<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache>,
	protected extension::asyncjob_detail::AssetCacheBase
{
public:
	AssetCache();
private:
	AssetCache(const extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache &);
	extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache & operator=(const extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache &);
	class ScopedLock_t;
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> > > > m_cachedObjectMap; // 0x40
public:
	virtual ~AssetCache();
	extension::RefCountablePtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> getCachedOrLoadStart(std::string, const extension::FutureTextureOption *);
private:
	virtual void CleanupExpiredEntry();
	void cleanupExpiredEntryNoGuard();
};
class extension::ExSimpleLockable<extension::BasicFutureObject<OGLCurve,void>::AssetCache> :
	protected extension::lockable_detail::SimpleLockableBase
{
public:
	ExSimpleLockable<extension::BasicFutureObject<OGLCurve,void>::AssetCache>();
private:
	ExSimpleLockable<extension::BasicFutureObject<OGLCurve,void>::AssetCache>(const extension::ExSimpleLockable<extension::BasicFutureObject<OGLCurve,void>::AssetCache> &);
	extension::ExSimpleLockable<extension::BasicFutureObject<OGLCurve,void>::AssetCache> & operator=(const extension::ExSimpleLockable<extension::BasicFutureObject<OGLCurve,void>::AssetCache> &);
	class ScopedLock_t;
protected:
	~ExSimpleLockable<extension::BasicFutureObject<OGLCurve,void>::AssetCache>();
};
class extension::ExSimpleLockable<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache> :
	protected extension::lockable_detail::SimpleLockableBase
{
public:
	ExSimpleLockable<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache>();
private:
	ExSimpleLockable<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache>(const extension::ExSimpleLockable<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache> &);
	extension::ExSimpleLockable<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache> & operator=(const extension::ExSimpleLockable<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache> &);
	class ScopedLock_t;
protected:
	~ExSimpleLockable<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache>();
};
class extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache :
	protected extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache>,
	protected extension::asyncjob_detail::AssetCacheBase
{
public:
	AssetCache();
private:
	AssetCache(const extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache &);
	extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache & operator=(const extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache &);
	class ScopedLock_t;
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> > > > m_cachedObjectMap; // 0x40
public:
	virtual ~AssetCache();
	extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> getCachedOrLoadStart(std::string, const extension::FutureAssetOption *);
private:
	virtual void CleanupExpiredEntry();
	void cleanupExpiredEntryNoGuard();
};
class extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache> :
	protected extension::lockable_detail::SimpleLockableBase
{
public:
	ExSimpleLockable<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache>();
private:
	ExSimpleLockable<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache>(const extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache> &);
	extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache> & operator=(const extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache> &);
	class ScopedLock_t;
protected:
	~ExSimpleLockable<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache>();
};
class extension::BasicFutureObject<OGLMotion,void>::AssetCache :
	protected extension::ExSimpleLockable<extension::BasicFutureObject<OGLMotion,void>::AssetCache>,
	protected extension::asyncjob_detail::AssetCacheBase
{
public:
	AssetCache();
private:
	AssetCache(const extension::BasicFutureObject<OGLMotion,void>::AssetCache &);
	extension::BasicFutureObject<OGLMotion,void>::AssetCache & operator=(const extension::BasicFutureObject<OGLMotion,void>::AssetCache &);
	class ScopedLock_t;
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> > > > m_cachedObjectMap; // 0x40
public:
	virtual ~AssetCache();
	extension::RefCountablePtr<extension::BasicFutureObject<OGLMotion,void>::Body> getCachedOrLoadStart(std::string, const void *);
private:
	virtual void CleanupExpiredEntry();
	void cleanupExpiredEntryNoGuard();
};
class extension::BasicFutureObject<OGLMirror,void>::AssetCache :
	protected extension::ExSimpleLockable<extension::BasicFutureObject<OGLMirror,void>::AssetCache>,
	protected extension::asyncjob_detail::AssetCacheBase
{
public:
	AssetCache();
private:
	AssetCache(const extension::BasicFutureObject<OGLMirror,void>::AssetCache &);
	extension::BasicFutureObject<OGLMirror,void>::AssetCache & operator=(const extension::BasicFutureObject<OGLMirror,void>::AssetCache &);
	class ScopedLock_t;
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> > > > m_cachedObjectMap; // 0x40
public:
	virtual ~AssetCache();
	extension::RefCountablePtr<extension::BasicFutureObject<OGLMirror,void>::Body> getCachedOrLoadStart(std::string, const void *);
private:
	virtual void CleanupExpiredEntry();
	void cleanupExpiredEntryNoGuard();
};
class extension::ExSimpleLockable<extension::BasicFutureObject<OGLMirror,void>::AssetCache> :
	protected extension::lockable_detail::SimpleLockableBase
{
public:
	ExSimpleLockable<extension::BasicFutureObject<OGLMirror,void>::AssetCache>();
private:
	ExSimpleLockable<extension::BasicFutureObject<OGLMirror,void>::AssetCache>(const extension::ExSimpleLockable<extension::BasicFutureObject<OGLMirror,void>::AssetCache> &);
	extension::ExSimpleLockable<extension::BasicFutureObject<OGLMirror,void>::AssetCache> & operator=(const extension::ExSimpleLockable<extension::BasicFutureObject<OGLMirror,void>::AssetCache> &);
	class ScopedLock_t;
protected:
	~ExSimpleLockable<extension::BasicFutureObject<OGLMirror,void>::AssetCache>();
};
class extension::ExSimpleLockable<extension::BasicFutureObject<OGLMotion,void>::AssetCache> :
	protected extension::lockable_detail::SimpleLockableBase
{
public:
	ExSimpleLockable<extension::BasicFutureObject<OGLMotion,void>::AssetCache>();
private:
	ExSimpleLockable<extension::BasicFutureObject<OGLMotion,void>::AssetCache>(const extension::ExSimpleLockable<extension::BasicFutureObject<OGLMotion,void>::AssetCache> &);
	extension::ExSimpleLockable<extension::BasicFutureObject<OGLMotion,void>::AssetCache> & operator=(const extension::ExSimpleLockable<extension::BasicFutureObject<OGLMotion,void>::AssetCache> &);
	class ScopedLock_t;
protected:
	~ExSimpleLockable<extension::BasicFutureObject<OGLMotion,void>::AssetCache>();
};
class extension::ExSimpleLockable<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache> :
	protected extension::lockable_detail::SimpleLockableBase
{
public:
	ExSimpleLockable<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache>();
private:
	ExSimpleLockable<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache>(const extension::ExSimpleLockable<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache> &);
	extension::ExSimpleLockable<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache> & operator=(const extension::ExSimpleLockable<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache> &);
	class ScopedLock_t;
protected:
	~ExSimpleLockable<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache>();
};
class extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache :
	protected extension::ExSimpleLockable<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache>,
	protected extension::asyncjob_detail::AssetCacheBase
{
public:
	AssetCache();
private:
	AssetCache(const extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache &);
	extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache & operator=(const extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache &);
	class ScopedLock_t;
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> > > > m_cachedObjectMap; // 0x40
public:
	virtual ~AssetCache();
	extension::RefCountablePtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> getCachedOrLoadStart(std::string, const extension::FutureStageOption *);
private:
	virtual void CleanupExpiredEntry();
	void cleanupExpiredEntryNoGuard();
};
class extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache> :
	protected extension::lockable_detail::SimpleLockableBase
{
public:
	ExSimpleLockable<extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache>();
private:
	ExSimpleLockable<extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache>(const extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache> &);
	extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache> & operator=(const extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache> &);
	class ScopedLock_t;
protected:
	~ExSimpleLockable<extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache>();
};
class extension::BasicFutureObject<OGLCamera,void>::AssetCache :
	protected extension::ExSimpleLockable<extension::BasicFutureObject<OGLCamera,void>::AssetCache>,
	protected extension::asyncjob_detail::AssetCacheBase
{
public:
	AssetCache();
private:
	AssetCache(const extension::BasicFutureObject<OGLCamera,void>::AssetCache &);
	extension::BasicFutureObject<OGLCamera,void>::AssetCache & operator=(const extension::BasicFutureObject<OGLCamera,void>::AssetCache &);
	class ScopedLock_t;
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> > > > m_cachedObjectMap; // 0x40
public:
	virtual ~AssetCache();
	extension::RefCountablePtr<extension::BasicFutureObject<OGLCamera,void>::Body> getCachedOrLoadStart(std::string, const void *);
private:
	virtual void CleanupExpiredEntry();
	void cleanupExpiredEntryNoGuard();
};
class extension::ExSimpleLockable<extension::BasicFutureObject<OGLCamera,void>::AssetCache> :
	protected extension::lockable_detail::SimpleLockableBase
{
public:
	ExSimpleLockable<extension::BasicFutureObject<OGLCamera,void>::AssetCache>();
private:
	ExSimpleLockable<extension::BasicFutureObject<OGLCamera,void>::AssetCache>(const extension::ExSimpleLockable<extension::BasicFutureObject<OGLCamera,void>::AssetCache> &);
	extension::ExSimpleLockable<extension::BasicFutureObject<OGLCamera,void>::AssetCache> & operator=(const extension::ExSimpleLockable<extension::BasicFutureObject<OGLCamera,void>::AssetCache> &);
	class ScopedLock_t;
protected:
	~ExSimpleLockable<extension::BasicFutureObject<OGLCamera,void>::AssetCache>();
};
class extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache :
	protected extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache>,
	protected extension::asyncjob_detail::AssetCacheBase
{
public:
	AssetCache();
private:
	AssetCache(const extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache &);
	extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache & operator=(const extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache &);
	class ScopedLock_t;
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> > > > m_cachedObjectMap; // 0x40
public:
	virtual ~AssetCache();
	extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> getCachedOrLoadStart(std::string, const void *);
private:
	virtual void CleanupExpiredEntry();
	void cleanupExpiredEntryNoGuard();
};
class extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::AssetCache :
	protected extension::ExSimpleLockable<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::AssetCache>,
	protected extension::asyncjob_detail::AssetCacheBase
{
public:
	AssetCache();
private:
	AssetCache(const extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::AssetCache &);
	extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::AssetCache & operator=(const extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::AssetCache &);
	class ScopedLock_t;
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> > > > m_cachedObjectMap; // 0x40
public:
	virtual ~AssetCache();
	extension::RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> getCachedOrLoadStart(std::string, const extension::exsound_detail::FutureSoundOption *);
private:
	virtual void CleanupExpiredEntry();
	void cleanupExpiredEntryNoGuard();
};
class extension::ExSimpleLockable<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::AssetCache> :
	protected extension::lockable_detail::SimpleLockableBase
{
public:
	ExSimpleLockable<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::AssetCache>();
private:
	ExSimpleLockable<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::AssetCache>(const extension::ExSimpleLockable<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::AssetCache> &);
	extension::ExSimpleLockable<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::AssetCache> & operator=(const extension::ExSimpleLockable<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::AssetCache> &);
	class ScopedLock_t;
protected:
	~ExSimpleLockable<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::AssetCache>();
};
class extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache :
	protected extension::ExSimpleLockable<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache>,
	protected extension::asyncjob_detail::AssetCacheBase
{
public:
	AssetCache();
private:
	AssetCache(const extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache &);
	extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache & operator=(const extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache &);
	class ScopedLock_t;
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > m_cachedObjectMap; // 0x40
public:
	virtual ~AssetCache();
	extension::RefCountablePtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> getCachedOrLoadStart(std::string, const void *);
private:
	virtual void CleanupExpiredEntry();
	void cleanupExpiredEntryNoGuard();
};
class extension::ExSimpleLockable<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache> :
	protected extension::lockable_detail::SimpleLockableBase
{
public:
	ExSimpleLockable<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache>();
private:
	ExSimpleLockable<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache>(const extension::ExSimpleLockable<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache> &);
	extension::ExSimpleLockable<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache> & operator=(const extension::ExSimpleLockable<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache> &);
	class ScopedLock_t;
protected:
	~ExSimpleLockable<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache>();
};
class std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> > > > :
	std::_Hash<std::_Umap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::_Uhash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> > >,0> >
{
	class _Myt;
	class _Mytraits;
	class _Mybase;
	struct hasher;
	class key_type;
	class mapped_type;
	struct key_equal;
	class key_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> > pointer;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> > const_pointer;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> > reference;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> > const_reference;
	class iterator;
	class const_iterator;
	struct value_type;
	class local_iterator;
	class const_local_iterator;
	struct _Alty;
	struct _Pairib;
public:
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> > >, unsigned long long);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> > >);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> > > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> > > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >(unsigned long long);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> > > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> > > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >(const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >();
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> > > > & operator=(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> > >);
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> > > > & operator=(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> > > > &);
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> > > > & operator=(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> > > > &);
	extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> & operator[](const std::string &);
	extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> & operator[](std::string &);
	void swap(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> > > > &);
	std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > hash_function();
	std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > key_eq();
	const extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> & at(const std::string &);
	extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> & at(const std::string &);
	~unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > ();
};
class std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> > > > :
	std::_Hash<std::_Umap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>,std::_Uhash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> > >,0> >
{
	class _Myt;
	class _Mytraits;
	class _Mybase;
	struct hasher;
	class key_type;
	class mapped_type;
	struct key_equal;
	class key_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> > pointer;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> > const_pointer;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> > reference;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> > const_reference;
	class iterator;
	class const_iterator;
	struct value_type;
	class local_iterator;
	class const_local_iterator;
	struct _Alty;
	struct _Pairib;
public:
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std:(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std:(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std:(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std:(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> > >, unsigned long long);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std:(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> > >);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std:(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> > > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std:(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> > > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std:(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std:(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std:(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std:(unsigned long long);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std:(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> > > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std:(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> > > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std:(const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std:();
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> > > > & operator=(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> > >);
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> > > > & operator=(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> > > > &);
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> > > > & operator=(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> > > > &);
	extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> & operator[](const std::string &);
	extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> & operator[](std::string &);
	void swap(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> > > > &);
	std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > hash_function();
	std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > key_eq();
	const extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> & at(const std::string &);
	extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> & at(const std::string &);
	~unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std();
};
class std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> > > > :
	std::_Hash<std::_Umap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>,std::_Uhash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> > >,0> >
{
	class _Myt;
	class _Mytraits;
	class _Mybase;
	struct hasher;
	class key_type;
	class mapped_type;
	struct key_equal;
	class key_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> > pointer;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> > const_pointer;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> > reference;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> > const_reference;
	class iterator;
	class const_iterator;
	struct value_type;
	class local_iterator;
	class const_local_iterator;
	struct _Alty;
	struct _Pairib;
public:
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::b(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::b(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::b(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::b(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> > >, unsigned long long);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::b(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> > >);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::b(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> > > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::b(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> > > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::b(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::b(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::b(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::b(unsigned long long);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::b(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> > > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::b(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> > > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::b(const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::b();
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> > > > & operator=(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> > >);
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> > > > & operator=(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> > > > &);
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> > > > & operator=(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> > > > &);
	extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> & operator[](const std::string &);
	extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> & operator[](std::string &);
	void swap(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> > > > &);
	std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > hash_function();
	std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > key_eq();
	const extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> & at(const std::string &);
	extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body> & at(const std::string &);
	~unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::();
};
class std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> > > > :
	std::_Hash<std::_Umap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>,std::_Uhash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> > >,0> >
{
	class _Myt;
	class _Mytraits;
	class _Mybase;
	struct hasher;
	class key_type;
	class mapped_type;
	struct key_equal;
	class key_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> > pointer;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> > const_pointer;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> > reference;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> > const_reference;
	class iterator;
	class const_iterator;
	struct value_type;
	class local_iterator;
	class const_local_iterator;
	struct _Alty;
	struct _Pairib;
public:
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<ch(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<ch(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<ch(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<ch(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> > >, unsigned long long);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<ch(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> > >);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<ch(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> > > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<ch(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> > > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<ch(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<ch(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<ch(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<ch(unsigned long long);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<ch(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> > > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<ch(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> > > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<ch(const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<ch();
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> > > > & operator=(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> > >);
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> > > > & operator=(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> > > > &);
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> > > > & operator=(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> > > > &);
	extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> & operator[](const std::string &);
	extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> & operator[](std::string &);
	void swap(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> > > > &);
	std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > hash_function();
	std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > key_eq();
	const extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> & at(const std::string &);
	extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> & at(const std::string &);
	~unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<c();
};
class std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> > > > :
	std::_Hash<std::_Umap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::_Uhash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> > >,0> >
{
	class _Myt;
	class _Mytraits;
	class _Mybase;
	struct hasher;
	class key_type;
	class mapped_type;
	struct key_equal;
	class key_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> > pointer;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> > const_pointer;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> > reference;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> > const_reference;
	class iterator;
	class const_iterator;
	struct value_type;
	class local_iterator;
	class const_local_iterator;
	struct _Alty;
	struct _Pairib;
public:
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> > >, unsigned long long);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> > >);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> > > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> > > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char(unsigned long long);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> > > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> > > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char(const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char();
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> > > > & operator=(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> > >);
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> > > > & operator=(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> > > > &);
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> > > > & operator=(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> > > > &);
	extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> & operator[](const std::string &);
	extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> & operator[](std::string &);
	void swap(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> > > > &);
	std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > hash_function();
	std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > key_eq();
	const extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> & at(const std::string &);
	extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> & at(const std::string &);
	~unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<cha();
};
class std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> > > > :
	std::_Hash<std::_Umap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::_Uhash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> > >,0> >
{
	class _Myt;
	class _Mytraits;
	class _Mybase;
	struct hasher;
	class key_type;
	class mapped_type;
	struct key_equal;
	class key_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> > pointer;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> > const_pointer;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> > reference;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> > const_reference;
	class iterator;
	class const_iterator;
	struct value_type;
	class local_iterator;
	class const_local_iterator;
	struct _Alty;
	struct _Pairib;
public:
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::all(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::all(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::all(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::all(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> > >, unsigned long long);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::all(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> > >);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::all(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> > > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::all(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> > > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::all(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::all(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::all(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::all(unsigned long long);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::all(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> > > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::all(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> > > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::all(const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::all();
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> > > > & operator=(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> > >);
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> > > > & operator=(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> > > > &);
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> > > > & operator=(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> > > > &);
	extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> & operator[](const std::string &);
	extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> & operator[](std::string &);
	void swap(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> > > > &);
	std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > hash_function();
	std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > key_eq();
	const extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> & at(const std::string &);
	extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> & at(const std::string &);
	~unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::al();
};
class std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> > > > :
	std::_Hash<std::_Umap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body>,std::_Uhash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> > >,0> >
{
	class _Myt;
	class _Mytraits;
	class _Mybase;
	struct hasher;
	class key_type;
	class mapped_type;
	struct key_equal;
	class key_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> > pointer;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> > const_pointer;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> > reference;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> > const_reference;
	class iterator;
	class const_iterator;
	struct value_type;
	class local_iterator;
	class const_local_iterator;
	struct _Alty;
	struct _Pairib;
public:
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> > >, unsigned long long);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> > >);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> > > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> > > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(unsigned long long);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> > > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> > > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::();
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> > > > & operator=(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> > >);
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> > > > & operator=(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> > > > &);
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> > > > & operator=(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> > > > &);
	extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> & operator[](const std::string &);
	extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> & operator[](std::string &);
	void swap(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> > > > &);
	std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > hash_function();
	std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > key_eq();
	const extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> & at(const std::string &);
	extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body> & at(const std::string &);
	~unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMotion,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std:();
};
class std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> > > > :
	std::_Hash<std::_Umap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::_Uhash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> > >,0> >
{
	class _Myt;
	class _Mytraits;
	class _Mybase;
	struct hasher;
	class key_type;
	class mapped_type;
	struct key_equal;
	class key_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> > pointer;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> > const_pointer;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> > reference;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> > const_reference;
	class iterator;
	class const_iterator;
	struct value_type;
	class local_iterator;
	class const_local_iterator;
	struct _Alty;
	struct _Pairib;
public:
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> > >, unsigned long long);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> > >);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> > > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> > > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(unsigned long long);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> > > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> > > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::();
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> > > > & operator=(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> > >);
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> > > > & operator=(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> > > > &);
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> > > > & operator=(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> > > > &);
	extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> & operator[](const std::string &);
	extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> & operator[](std::string &);
	void swap(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> > > > &);
	std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > hash_function();
	std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > key_eq();
	const extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> & at(const std::string &);
	extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body> & at(const std::string &);
	~unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std:();
};
class std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> > > > :
	std::_Hash<std::_Umap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>,std::_Uhash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> > >,0> >
{
	class _Myt;
	class _Mytraits;
	class _Mybase;
	struct hasher;
	class key_type;
	class mapped_type;
	struct key_equal;
	class key_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> > pointer;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> > const_pointer;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> > reference;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> > const_reference;
	class iterator;
	class const_iterator;
	struct value_type;
	class local_iterator;
	class const_local_iterator;
	struct _Alty;
	struct _Pairib;
public:
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> > >, unsigned long long);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> > >);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> > > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> > > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<(unsigned long long);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> > > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> > > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<(const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<();
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> > > > & operator=(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> > >);
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> > > > & operator=(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> > > > &);
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> > > > & operator=(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> > > > &);
	extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> & operator[](const std::string &);
	extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> & operator[](std::string &);
	void swap(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> > > > &);
	std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > hash_function();
	std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > key_eq();
	const extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> & at(const std::string &);
	extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> & at(const std::string &);
	~unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator();
};
class std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> > > > :
	std::_Hash<std::_Umap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>,std::_Uhash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> > >,0> >
{
	class _Myt;
	class _Mytraits;
	class _Mybase;
	struct hasher;
	class key_type;
	class mapped_type;
	struct key_equal;
	class key_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> > pointer;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> > const_pointer;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> > reference;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> > const_reference;
	class iterator;
	class const_iterator;
	struct value_type;
	class local_iterator;
	class const_local_iterator;
	struct _Alty;
	struct _Pairib;
public:
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> > >, unsigned long long);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> > >);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> > > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> > > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std(unsigned long long);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> > > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> > > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std(const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std();
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> > > > & operator=(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> > >);
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> > > > & operator=(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> > > > &);
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> > > > & operator=(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> > > > &);
	extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> & operator[](const std::string &);
	extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> & operator[](std::string &);
	void swap(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> > > > &);
	std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > hash_function();
	std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > key_eq();
	const extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> & at(const std::string &);
	extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> & at(const std::string &);
	~unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,st();
};
class std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> > > > :
	std::_Hash<std::_Umap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>,std::_Uhash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> > >,0> >
{
	class _Myt;
	class _Mytraits;
	class _Mybase;
	struct hasher;
	class key_type;
	class mapped_type;
	struct key_equal;
	class key_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> > pointer;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> > const_pointer;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> > reference;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> > const_reference;
	class iterator;
	class const_iterator;
	struct value_type;
	class local_iterator;
	class const_local_iterator;
	struct _Alty;
	struct _Pairib;
public:
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> > >, unsigned long long);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> > >);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> > > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> > > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(unsigned long long);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> > > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> > > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::(const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::();
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> > > > & operator=(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> > >);
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> > > > & operator=(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> > > > &);
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> > > > & operator=(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> > > > &);
	extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> & operator[](const std::string &);
	extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> & operator[](std::string &);
	void swap(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> > > > &);
	std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > hash_function();
	std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > key_eq();
	const extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> & at(const std::string &);
	extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> & at(const std::string &);
	~unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std:();
};
class std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > :
	std::_Hash<std::_Umap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::_Uhash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > >,0> >
{
	class _Myt;
	class _Mytraits;
	class _Mybase;
	struct hasher;
	class key_type;
	class mapped_type;
	struct key_equal;
	class key_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > pointer;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > const_pointer;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > reference;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > const_reference;
	class iterator;
	class const_iterator;
	struct value_type;
	class local_iterator;
	class const_local_iterator;
	struct _Alty;
	struct _Pairib;
public:
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocato(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocato(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocato(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocato(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > >, unsigned long long);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocato(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > >);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocato(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocato(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocato(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocato(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocato(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocato(unsigned long long);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocato(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocato(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocato(const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocato();
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > & operator=(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > >);
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > & operator=(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > &);
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > & operator=(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > &);
	extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> & operator[](const std::string &);
	extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> & operator[](std::string &);
	void swap(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > &);
	std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > hash_function();
	std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > key_eq();
	const extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> & at(const std::string &);
	extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> & at(const std::string &);
	~unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocat();
};
class std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> > > > :
	std::_Hash<std::_Umap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::_Uhash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> > >,0> >
{
	class _Myt;
	class _Mytraits;
	class _Mybase;
	struct hasher;
	class key_type;
	class mapped_type;
	struct key_equal;
	class key_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> > pointer;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> > const_pointer;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> > reference;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> > const_reference;
	class iterator;
	class const_iterator;
	struct value_type;
	class local_iterator;
	class const_local_iterator;
	struct _Alty;
	struct _Pairib;
public:
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,st(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,st(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,st(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> > >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,st(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> > >, unsigned long long);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,st(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> > >);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,st(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> > > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,st(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> > > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,st(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,st(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,st(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,st(unsigned long long);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,st(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> > > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,st(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> > > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,st(const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,st();
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> > > > & operator=(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> > >);
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> > > > & operator=(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> > > > &);
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> > > > & operator=(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> > > > &);
	extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> & operator[](const std::string &);
	extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> & operator[](std::string &);
	void swap(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> > > > &);
	std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > hash_function();
	std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > key_eq();
	const extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> & at(const std::string &);
	extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> & at(const std::string &);
	~unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::hash<std::basic_string<char,std::char_traits<char>,s();
};
extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache::AssetCache(); // 0x1400A3820
extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache::AssetCache(); // 0x1400FCFA0
extension::BasicFutureObject<OGLCurve,void>::AssetCache::AssetCache(); // 0x14012A050
extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache::AssetCache(); // 0x140129F90
extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache::AssetCache(); // 0x140129E30
extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache::AssetCache(); // 0x1401B10A0
extension::BasicFutureObject<OGLMirror,void>::AssetCache::AssetCache(); // 0x1401F9F80
extension::BasicFutureObject<OGLMotion,void>::AssetCache::AssetCache(); // 0x1401FA0F0
extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache::AssetCache(); // 0x1402186D0
extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache::AssetCache(); // 0x140256AA0
extension::BasicFutureObject<OGLCamera,void>::AssetCache::AssetCache(); // 0x140256940
extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::AssetCache::AssetCache(); // 0x1402BD300
extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache::AssetCache(); // 0x1402BD470
extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache::~AssetCache(); // 0x1400A2CD0
extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache::~AssetCache(); // 0x1400FBBC0
extension::BasicFutureObject<OGLCurve,void>::AssetCache::~AssetCache(); // 0x140127CB0
extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache::~AssetCache(); // 0x140127B70
extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache::~AssetCache(); // 0x140127AE0
extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache::~AssetCache(); // 0x1401B05B0
extension::BasicFutureObject<OGLMirror,void>::AssetCache::~AssetCache(); // 0x1401F9590
extension::BasicFutureObject<OGLMotion,void>::AssetCache::~AssetCache(); // 0x1401F9620
extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache::~AssetCache(); // 0x140217480
extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache::~AssetCache(); // 0x140252C20
extension::BasicFutureObject<OGLCamera,void>::AssetCache::~AssetCache(); // 0x1402526F0
extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::AssetCache::~AssetCache(); // 0x1402BA9B0
extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache::~AssetCache(); // 0x1402BABF0
void extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache::CleanupExpiredEntry(); // 0x1400A2C40
void extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache::CleanupExpiredEntry(); // 0x1400A2C40
void extension::BasicFutureObject<OGLCurve,void>::AssetCache::CleanupExpiredEntry(); // 0x1400A2C40
void extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache::CleanupExpiredEntry(); // 0x1400A2C40
void extension::BasicFutureObject<OGLMirror,void>::AssetCache::CleanupExpiredEntry(); // 0x1400A2C40
void extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache::CleanupExpiredEntry(); // 0x1400A2C40
void extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache::CleanupExpiredEntry(); // 0x1400A2C40
void extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::AssetCache::CleanupExpiredEntry(); // 0x1400A2C40
extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache::getCachedOrLoadStart(std::basic_string<char,std::char_traits<char>,std::allocator<char> > name, const extension::FutureImageOption * opt); // 0x1400A31C0
extension::RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache::getCachedOrLoadStart(std::basic_string<char,std::char_traits<char>,std::allocator<char> > name, const void * opt); // 0x1400FC9B0
extension::RefCountablePtr<extension::BasicFutureObject<OGLCurve,void>::Body> extension::BasicFutureObject<OGLCurve,void>::AssetCache::getCachedOrLoadStart(std::basic_string<char,std::char_traits<char>,std::allocator<char> > name, const void * opt); // 0x140128A60
extension::RefCountablePtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache::getCachedOrLoadStart(std::basic_string<char,std::char_traits<char>,std::allocator<char> > name, const extension::FutureFigureOption * opt); // 0x140129010
extension::RefCountablePtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache::getCachedOrLoadStart(std::basic_string<char,std::char_traits<char>,std::allocator<char> > name, const extension::FutureTextureOption * opt); // 0x140129660
extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache::getCachedOrLoadStart(std::basic_string<char,std::char_traits<char>,std::allocator<char> > name, const extension::FutureAssetOption * opt); // 0x1401B0AF0
extension::RefCountablePtr<extension::BasicFutureObject<OGLMirror,void>::Body> extension::BasicFutureObject<OGLMirror,void>::AssetCache::getCachedOrLoadStart(std::basic_string<char,std::char_traits<char>,std::allocator<char> > name, const void * opt); // 0x1401F9950
extension::RefCountablePtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache::getCachedOrLoadStart(std::basic_string<char,std::char_traits<char>,std::allocator<char> > name, const extension::FutureStageOption * opt); // 0x140218120
extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache::getCachedOrLoadStart(std::basic_string<char,std::char_traits<char>,std::allocator<char> > name, const void * opt); // 0x140255600
extension::RefCountablePtr<extension::BasicFutureObject<OGLCamera,void>::Body> extension::BasicFutureObject<OGLCamera,void>::AssetCache::getCachedOrLoadStart(std::basic_string<char,std::char_traits<char>,std::allocator<char> > name, const void * opt); // 0x140255E90
extension::RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::AssetCache::getCachedOrLoadStart(std::basic_string<char,std::char_traits<char>,std::allocator<char> > name, const extension::exsound_detail::FutureSoundOption * opt); // 0x1402BB9B0
extension::RefCountablePtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache::getCachedOrLoadStart(std::basic_string<char,std::char_traits<char>,std::allocator<char> > name, const void * opt); // 0x1402BB400
class extension::AsyncContent<StageResources> :
	extension::RefCountable<extension::AsyncContent<StageResources> >
{
public:
	AsyncContent<StageResources>(const std::string &);
	AsyncContent<StageResources>(const std::string &, const std::string &);
private:
	AsyncContent<StageResources>(const extension::AsyncContent<StageResources> &);
	extension::AsyncContent<StageResources> & operator=(const extension::AsyncContent<StageResources> &);
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x8
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_loadOptionString; // 0x28
	std::unique_ptr<StageResources,std::default_delete<StageResources> > m_data; // 0x48
	long m_errorCode; // 0x50
	extension::AsyncStatus m_status; // 0x58
	bool m_isDataReleased; // 0x60
	void initRawMember();
protected:
	~AsyncContent<StageResources>();
	class SharedPtr_t;
public:
	const std::string & name();
	const std::string & path();
	const std::string & optionString();
	bool isReady();
	void waitForReady();
	long getErrorCode();
	StageResources * getData();
	StageResources * releaseData();
	bool isDataReleased();
	void requestForCancel();
	void setResult(std::unique_ptr<StageResources,std::default_delete<StageResources> >);
	void setErrorResult(long);
	void setErrorResultWithData(long, std::unique_ptr<StageResources,std::default_delete<StageResources> >);
	bool isCancelRequested();
};
extension::FutureObjectJob<CharaDataUnify>::FutureObjectJob<CharaDataUnify>(extension::RefCountablePtr<extension::AsyncContent<CharaDataUnify> > c); // 0x1401B0350
extension::FutureObjectJob<AsyncKeyRecordDataLoad::KeyData>::FutureObjectJob<AsyncKeyRecordDataLoad::KeyData>(extension::RefCountablePtr<extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> > c); // 0x1401C9FA0
extension::FutureObjectJob<ComboMissionData>::FutureObjectJob<ComboMissionData>(extension::RefCountablePtr<extension::AsyncContent<ComboMissionData> > c); // 0x1401CA6C0
extension::FutureObjectJob<StageResources>::FutureObjectJob<StageResources>(extension::RefCountablePtr<extension::AsyncContent<StageResources> > c); // 0x140217130
extension::FutureObjectJob<extension::AsyncAsset>::FutureObjectJob<extension::AsyncAsset>(extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > c); // 0x14024FAE0
extension::FutureObjectJob<extension::AsyncFileImage>::FutureObjectJob<extension::AsyncFileImage>(extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> > c); // 0x140250400
extension::FutureObjectJob<OGLFigure>::FutureObjectJob<OGLFigure>(extension::RefCountablePtr<extension::AsyncContent<OGLFigure> > c); // 0x1402501E0
extension::FutureObjectJob<OGLMirror>::FutureObjectJob<OGLMirror>(extension::RefCountablePtr<extension::AsyncContent<OGLMirror> > c); // 0x14024FF20
extension::FutureObjectJob<OGLMotion>::FutureObjectJob<OGLMotion>(extension::RefCountablePtr<extension::AsyncContent<OGLMotion> > c); // 0x140250080
extension::FutureObjectJob<OGLSecondary>::FutureObjectJob<OGLSecondary>(extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> > c); // 0x14024FD00
extension::FutureObjectJob<extension::GFXIMovieData>::FutureObjectJob<extension::GFXIMovieData>(extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> > c); // 0x14027B510
extension::FutureObjectJob<CharaProjectData>::FutureObjectJob<CharaProjectData>(extension::RefCountablePtr<extension::AsyncContent<CharaProjectData> > c); // 0x1402A9B90
extension::FutureObjectJob<StageProjectData>::FutureObjectJob<StageProjectData>(extension::RefCountablePtr<extension::AsyncContent<StageProjectData> > c); // 0x1402A9850
extension::FutureObjectJob<extension::exsound_detail::SoundBankImpl>::FutureObjectJob<extension::exsound_detail::SoundBankImpl>(extension::RefCountablePtr<extension::AsyncContent<extension::exsound_detail::SoundBankImpl> > c); // 0x1402B8C30
extension::FutureObjectJob<CharaDataUnify>::~FutureObjectJob<CharaDataUnify>(); // 0x1401B0280
extension::FutureObjectJob<AsyncKeyRecordDataLoad::KeyData>::~FutureObjectJob<AsyncKeyRecordDataLoad::KeyData>(); // 0x1401C9ED0
extension::FutureObjectJob<ComboMissionData>::~FutureObjectJob<ComboMissionData>(); // 0x1401CA030
extension::FutureObjectJob<StageResources>::~FutureObjectJob<StageResources>(); // 0x140217060
extension::FutureObjectJob<extension::AsyncAsset>::~FutureObjectJob<extension::AsyncAsset>(); // 0x14024FA10
extension::FutureObjectJob<extension::AsyncFileImage>::~FutureObjectJob<extension::AsyncFileImage>(); // 0x140250330
extension::FutureObjectJob<Image>::~FutureObjectJob<Image>(); // 0x14024FB70
extension::FutureObjectJob<OGLCamera>::~FutureObjectJob<OGLCamera>(); // 0x14024FD90
extension::FutureObjectJob<OGLCurve>::~FutureObjectJob<OGLCurve>(); // 0x14024F8A0
extension::FutureObjectJob<OGLFigure>::~FutureObjectJob<OGLFigure>(); // 0x140250110
extension::FutureObjectJob<OGLMirror>::~FutureObjectJob<OGLMirror>(); // 0x14024FE50
extension::FutureObjectJob<OGLMotion>::~FutureObjectJob<OGLMotion>(); // 0x14024FFB0
extension::FutureObjectJob<OGLSecondary>::~FutureObjectJob<OGLSecondary>(); // 0x14024FC30
extension::FutureObjectJob<OGLTexture>::~FutureObjectJob<OGLTexture>(); // 0x140250270
extension::FutureObjectJob<extension::GFXIMovieData>::~FutureObjectJob<extension::GFXIMovieData>(); // 0x14027B440
extension::FutureObjectJob<CharaProjectData>::~FutureObjectJob<CharaProjectData>(); // 0x1402A9AC0
extension::FutureObjectJob<StageProjectData>::~FutureObjectJob<StageProjectData>(); // 0x1402A9780
extension::FutureObjectJob<extension::exsound_detail::SoundBankImpl>::~FutureObjectJob<extension::exsound_detail::SoundBankImpl>(); // 0x1402B8B60
void extension::FutureObjectJob<AsyncKeyRecordDataLoad::KeyData>::setErrorResult(extension::AsyncContentConstants::ErrorCode e); // 0x1401C9E90
void extension::FutureObjectJob<ComboMissionData>::setErrorResult(extension::AsyncContentConstants::ErrorCode e); // 0x1401CA680
void extension::FutureObjectJob<extension::AsyncAsset>::setErrorResult(extension::AsyncContentConstants::ErrorCode e); // 0x14024F9D0
extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > extension::FutureObjectJob<extension::AsyncAsset>::releaseContent(); // 0x14024F960
std::unique_ptr<CharaDataUnify,std::default_delete<CharaDataUnify> > extension::FutureObjectJob<CharaDataUnify>::createOnErrorData(); // 0x1401B0270
std::unique_ptr<AsyncKeyRecordDataLoad::KeyData,std::default_delete<AsyncKeyRecordDataLoad::KeyData> > extension::FutureObjectJob<AsyncKeyRecordDataLoad::KeyData>::createOnErrorData(); // 0x1401B0270
std::unique_ptr<StageResources,std::default_delete<StageResources> > extension::FutureObjectJob<StageResources>::createOnErrorData(); // 0x1401B0270
std::unique_ptr<extension::AsyncAsset,std::default_delete<extension::AsyncAsset> > extension::FutureObjectJob<extension::AsyncAsset>::createOnErrorData(); // 0x1401B0270
std::unique_ptr<extension::GFXIMovieData,std::default_delete<extension::GFXIMovieData> > extension::FutureObjectJob<extension::GFXIMovieData>::createOnErrorData(); // 0x1401B0270
std::unique_ptr<CharaProjectData,std::default_delete<CharaProjectData> > extension::FutureObjectJob<CharaProjectData>::createOnErrorData(); // 0x1401B0270
std::unique_ptr<extension::exsound_detail::SoundBankImpl,std::default_delete<extension::exsound_detail::SoundBankImpl> > extension::FutureObjectJob<extension::exsound_detail::SoundBankImpl>::createOnErrorData(); // 0x1401B0270