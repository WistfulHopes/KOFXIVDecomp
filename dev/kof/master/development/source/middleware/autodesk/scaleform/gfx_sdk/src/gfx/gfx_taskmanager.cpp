#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_taskmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

class Scaleform::GFx::TasksContainer
{
public:
	TasksContainer(const Scaleform::GFx::TasksContainer &);
	TasksContainer(Scaleform::Mutex *);
	~TasksContainer();
	void AddTask(Scaleform::GFx::Task *);
	bool RemoveTask(Scaleform::GFx::Task *);
	bool FindTask(Scaleform::GFx::Task *);
	bool AbandonTask(Scaleform::GFx::Task *);
	void AbandonAllTask();
private:
	Scaleform::Mutex * pTasksMutex; // 0x0
	Scaleform::Array<Scaleform::GFx::Task *,2,Scaleform::ArrayDefaultPolicy> Tasks; // 0x8
public:
	Scaleform::GFx::TasksContainer & operator=(const Scaleform::GFx::TasksContainer &);
};
Scaleform::GFx::TasksContainer::~TasksContainer(); // 0x14031EEF0
void Scaleform::GFx::TasksContainer::AddTask(Scaleform::GFx::Task * ptask); // 0x14031F520
bool Scaleform::GFx::TasksContainer::RemoveTask(Scaleform::GFx::Task * ptask); // 0x14031FAA0
bool Scaleform::GFx::TasksContainer::AbandonTask(Scaleform::GFx::Task * ptask); // 0x14031F350
class Scaleform::Array<Scaleform::GFx::Task *,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::Task *,Scaleform::AllocatorGH<Scaleform::GFx::Task *,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef Scaleform::GFx::Task ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<Scaleform::GFx::Task *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<Scaleform::GFx::Task *,2,Scaleform::ArrayDefaultPolicy> &);
	Array<Scaleform::GFx::Task *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<Scaleform::GFx::Task *,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<Scaleform::GFx::Task *,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<Scaleform::GFx::Task *,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<Scaleform::GFx::Task *,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<Scaleform::GFx::Task *,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::RefCountBase<Scaleform::GFx::ThreadedTaskManagerImpl,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::GFx::ThreadedTaskManagerImpl,2>(Scaleform::RefCountBase<Scaleform::GFx::ThreadedTaskManagerImpl,2> &);
	RefCountBase<Scaleform::GFx::ThreadedTaskManagerImpl,2>(const Scaleform::RefCountBase<Scaleform::GFx::ThreadedTaskManagerImpl,2> &);
	RefCountBase<Scaleform::GFx::ThreadedTaskManagerImpl,2>();
	virtual ~RefCountBase<Scaleform::GFx::ThreadedTaskManagerImpl,2>();
	Scaleform::RefCountBase<Scaleform::GFx::ThreadedTaskManagerImpl,2> & operator=(Scaleform::RefCountBase<Scaleform::GFx::ThreadedTaskManagerImpl,2> &);
	Scaleform::RefCountBase<Scaleform::GFx::ThreadedTaskManagerImpl,2> & operator=(const Scaleform::RefCountBase<Scaleform::GFx::ThreadedTaskManagerImpl,2> &);
};
class Scaleform::GFx::ThreadedTaskManagerImpl :
	Scaleform::RefCountBase<Scaleform::GFx::ThreadedTaskManagerImpl,2>
{
public:
	ThreadedTaskManagerImpl(const Scaleform::GFx::ThreadedTaskManagerImpl &);
	ThreadedTaskManagerImpl();
	virtual ~ThreadedTaskManagerImpl();
	bool AddWorkerThreads(unsigned long, unsigned long, unsigned long long, long);
	Scaleform::GFx::TasksContainer * GetRunningTasks();
	Scaleform::GFx::TaskThreadPool * GetThreadPool();
	bool AbandonTask(Scaleform::GFx::Task *);
	void RequestShutdown();
private:
	Scaleform::Mutex TasksMutex; // 0x10
	Scaleform::GFx::TasksContainer RunningTasks; // 0x38
	Scaleform::GFx::TaskThreadPool * pThreadPool; // 0x58
public:
	Scaleform::GFx::ThreadedTaskManagerImpl & operator=(const Scaleform::GFx::ThreadedTaskManagerImpl &);
};
class Scaleform::GFx::TaskThread :
	Scaleform::Thread
{
public:
	TaskThread(const Scaleform::GFx::TaskThread &);
	TaskThread(Scaleform::GFx::Task *, Scaleform::GFx::ThreadedTaskManagerImpl *, unsigned long long, long);
	virtual ~TaskThread();
	virtual long Run();
protected:
	Scaleform::Ptr<Scaleform::GFx::Task> pTask; // 0x58
	Scaleform::Ptr<Scaleform::GFx::ThreadedTaskManagerImpl> pTaskManager; // 0x60
public:
	Scaleform::GFx::TaskThread & operator=(const Scaleform::GFx::TaskThread &);
};
Scaleform::GFx::TaskThread::TaskThread(Scaleform::GFx::Task * ptask, Scaleform::GFx::ThreadedTaskManagerImpl * ptm, unsigned long long stackSize, long processor); // 0x14031EC60
class Scaleform::Ptr<Scaleform::GFx::Task>
{
protected:
	Scaleform::GFx::Task * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::Task>(const Scaleform::Ptr<Scaleform::GFx::Task> &);
	Ptr<Scaleform::GFx::Task>(Scaleform::GFx::Task *);
	Ptr<Scaleform::GFx::Task>(Scaleform::Ptr<Scaleform::GFx::Task> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::Task>(Scaleform::Pickable<Scaleform::GFx::Task>);
	Ptr<Scaleform::GFx::Task>(Scaleform::GFx::Task &);
	Ptr<Scaleform::GFx::Task>();
	~Ptr<Scaleform::GFx::Task>();
	bool operator==(Scaleform::GFx::Task *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::Task> &);
	bool operator!=(Scaleform::GFx::Task *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::Task> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::Task> &);
	Scaleform::Ptr<Scaleform::GFx::Task> & operator=(Scaleform::Pickable<Scaleform::GFx::Task>);
	const Scaleform::Ptr<Scaleform::GFx::Task> & operator=(Scaleform::GFx::Task &);
	const Scaleform::Ptr<Scaleform::GFx::Task> & operator=(Scaleform::GFx::Task *);
	const Scaleform::Ptr<Scaleform::GFx::Task> & operator=(const Scaleform::Ptr<Scaleform::GFx::Task> &);
	Scaleform::Ptr<Scaleform::GFx::Task> & SetPtr(Scaleform::Pickable<Scaleform::GFx::Task>);
	Scaleform::Ptr<Scaleform::GFx::Task> & SetPtr(Scaleform::GFx::Task &);
	Scaleform::Ptr<Scaleform::GFx::Task> & SetPtr(Scaleform::GFx::Task *);
	Scaleform::Ptr<Scaleform::GFx::Task> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::Task> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::Task * & GetRawRef();
	Scaleform::GFx::Task * GetPtr();
	Scaleform::GFx::Task & operator*();
	Scaleform::GFx::Task * operator->();
	Scaleform::GFx::Task * operator class Scaleform::GFx::Task *();
	Scaleform::Ptr<Scaleform::GFx::Task> & Pick(Scaleform::GFx::Task *);
	Scaleform::Ptr<Scaleform::GFx::Task> & Pick(Scaleform::Pickable<Scaleform::GFx::Task>);
	Scaleform::Ptr<Scaleform::GFx::Task> & Pick(Scaleform::Ptr<Scaleform::GFx::Task> &);
};
class Scaleform::Ptr<Scaleform::GFx::ThreadedTaskManagerImpl>
{
protected:
	Scaleform::GFx::ThreadedTaskManagerImpl * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ThreadedTaskManagerImpl>(const Scaleform::Ptr<Scaleform::GFx::ThreadedTaskManagerImpl> &);
	Ptr<Scaleform::GFx::ThreadedTaskManagerImpl>(Scaleform::GFx::ThreadedTaskManagerImpl *);
	Ptr<Scaleform::GFx::ThreadedTaskManagerImpl>(Scaleform::Ptr<Scaleform::GFx::ThreadedTaskManagerImpl> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ThreadedTaskManagerImpl>(Scaleform::Pickable<Scaleform::GFx::ThreadedTaskManagerImpl>);
	Ptr<Scaleform::GFx::ThreadedTaskManagerImpl>(Scaleform::GFx::ThreadedTaskManagerImpl &);
	Ptr<Scaleform::GFx::ThreadedTaskManagerImpl>();
	~Ptr<Scaleform::GFx::ThreadedTaskManagerImpl>();
	bool operator==(Scaleform::GFx::ThreadedTaskManagerImpl *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ThreadedTaskManagerImpl> &);
	bool operator!=(Scaleform::GFx::ThreadedTaskManagerImpl *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ThreadedTaskManagerImpl> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ThreadedTaskManagerImpl> &);
	Scaleform::Ptr<Scaleform::GFx::ThreadedTaskManagerImpl> & operator=(Scaleform::Pickable<Scaleform::GFx::ThreadedTaskManagerImpl>);
	const Scaleform::Ptr<Scaleform::GFx::ThreadedTaskManagerImpl> & operator=(Scaleform::GFx::ThreadedTaskManagerImpl &);
	const Scaleform::Ptr<Scaleform::GFx::ThreadedTaskManagerImpl> & operator=(Scaleform::GFx::ThreadedTaskManagerImpl *);
	const Scaleform::Ptr<Scaleform::GFx::ThreadedTaskManagerImpl> & operator=(const Scaleform::Ptr<Scaleform::GFx::ThreadedTaskManagerImpl> &);
	Scaleform::Ptr<Scaleform::GFx::ThreadedTaskManagerImpl> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ThreadedTaskManagerImpl>);
	Scaleform::Ptr<Scaleform::GFx::ThreadedTaskManagerImpl> & SetPtr(Scaleform::GFx::ThreadedTaskManagerImpl &);
	Scaleform::Ptr<Scaleform::GFx::ThreadedTaskManagerImpl> & SetPtr(Scaleform::GFx::ThreadedTaskManagerImpl *);
	Scaleform::Ptr<Scaleform::GFx::ThreadedTaskManagerImpl> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ThreadedTaskManagerImpl> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ThreadedTaskManagerImpl * & GetRawRef();
	Scaleform::GFx::ThreadedTaskManagerImpl * GetPtr();
	Scaleform::GFx::ThreadedTaskManagerImpl & operator*();
	Scaleform::GFx::ThreadedTaskManagerImpl * operator->();
	Scaleform::GFx::ThreadedTaskManagerImpl * operator class Scaleform::GFx::ThreadedTaskManagerImpl *();
	Scaleform::Ptr<Scaleform::GFx::ThreadedTaskManagerImpl> & Pick(Scaleform::GFx::ThreadedTaskManagerImpl *);
	Scaleform::Ptr<Scaleform::GFx::ThreadedTaskManagerImpl> & Pick(Scaleform::Pickable<Scaleform::GFx::ThreadedTaskManagerImpl>);
	Scaleform::Ptr<Scaleform::GFx::ThreadedTaskManagerImpl> & Pick(Scaleform::Ptr<Scaleform::GFx::ThreadedTaskManagerImpl> &);
};
class Scaleform::GFx::TaskThreadInPool :
	Scaleform::GFx::TaskThread
{
public:
	TaskThreadInPool(const Scaleform::GFx::TaskThreadInPool &);
	TaskThreadInPool(unsigned long, Scaleform::GFx::ThreadedTaskManagerImpl *, unsigned long long, long);
	virtual ~TaskThreadInPool();
	bool SetTask(Scaleform::GFx::Task *);
	virtual long Run();
	unsigned long GetTaskType();
private:
	unsigned long TaskMask; // 0x68
public:
	Scaleform::GFx::TaskThreadInPool & operator=(const Scaleform::GFx::TaskThreadInPool &);
};
class Scaleform::GFx::TaskThreadPool :
	Scaleform::NewOverrideBase<2>
{
public:
	TaskThreadPool(const Scaleform::GFx::TaskThreadPool &);
	TaskThreadPool(Scaleform::GFx::ThreadedTaskManagerImpl *);
	~TaskThreadPool();
	bool AddTask(Scaleform::GFx::Task *);
	bool AbandonTask(Scaleform::GFx::Task *);
	bool AddThreads(unsigned long, unsigned long, unsigned long long, long);
	bool RemoveThread(Scaleform::GFx::TaskThread *);
	Scaleform::GFx::Task * GetTaskAddRef(unsigned long);
	void RequestShutdown();
private:
	Scaleform::GFx::Task * FindTaskByMask(unsigned long);
	Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::Task>,2,Scaleform::ArrayDefaultPolicy> TasksQueue; // 0x0
	Scaleform::Array<Scaleform::GFx::TaskThreadInPool *,2,Scaleform::ArrayDefaultPolicy> Threads; // 0x18
	Scaleform::Lock ThreadsLock; // 0x30
	Scaleform::WaitCondition TaskWaitCondition; // 0x60
	volatile bool ShutdownRequested; // 0x68
	Scaleform::GFx::ThreadedTaskManagerImpl * pTaskManager; // 0x70
public:
	Scaleform::GFx::TaskThreadPool & operator=(const Scaleform::GFx::TaskThreadPool &);
};
class Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::Task>,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Ptr<Scaleform::GFx::Task>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::GFx::Task>,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<Scaleform::Ptr<Scaleform::GFx::Task>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::Task>,2,Scaleform::ArrayDefaultPolicy> &);
	Array<Scaleform::Ptr<Scaleform::GFx::Task>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<Scaleform::Ptr<Scaleform::GFx::Task>,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<Scaleform::Ptr<Scaleform::GFx::Task>,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::Task>,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::Task>,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<Scaleform::Ptr<Scaleform::GFx::Task>,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::Array<Scaleform::GFx::TaskThreadInPool *,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::TaskThreadInPool *,Scaleform::AllocatorGH<Scaleform::GFx::TaskThreadInPool *,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef Scaleform::GFx::TaskThreadInPool ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<Scaleform::GFx::TaskThreadInPool *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<Scaleform::GFx::TaskThreadInPool *,2,Scaleform::ArrayDefaultPolicy> &);
	Array<Scaleform::GFx::TaskThreadInPool *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<Scaleform::GFx::TaskThreadInPool *,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<Scaleform::GFx::TaskThreadInPool *,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<Scaleform::GFx::TaskThreadInPool *,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<Scaleform::GFx::TaskThreadInPool *,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<Scaleform::GFx::TaskThreadInPool *,2,Scaleform::ArrayDefaultPolicy>();
};
Scaleform::GFx::ThreadedTaskManagerImpl::ThreadedTaskManagerImpl(); // 0x14031ED40
Scaleform::GFx::ThreadedTaskManagerImpl::~ThreadedTaskManagerImpl(); // 0x14031EF70
bool Scaleform::GFx::ThreadedTaskManagerImpl::AddWorkerThreads(unsigned long taskMask, unsigned long count, unsigned long long stackSize, long processor); // 0x14031F840
void Scaleform::GFx::ThreadedTaskManagerImpl::RequestShutdown(); // 0x14031FCD0
Scaleform::GFx::TaskThread::~TaskThread(); // 0x14031EDA0
long Scaleform::GFx::TaskThread::Run(); // 0x14031FDF0
long Scaleform::GFx::TaskThreadInPool::Run(); // 0x14031FE40
Scaleform::GFx::TaskThreadPool::~TaskThreadPool(); // 0x14031EE20
bool Scaleform::GFx::TaskThreadPool::AddTask(Scaleform::GFx::Task * ptask); // 0x14031F400
bool Scaleform::GFx::TaskThreadPool::AddThreads(unsigned long taskMask, unsigned long count, unsigned long long stackSize, long processor); // 0x14031F6A0
class Scaleform::Ptr<Scaleform::GFx::TaskThreadInPool>
{
protected:
	Scaleform::GFx::TaskThreadInPool * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::TaskThreadInPool>(const Scaleform::Ptr<Scaleform::GFx::TaskThreadInPool> &);
	Ptr<Scaleform::GFx::TaskThreadInPool>(Scaleform::GFx::TaskThreadInPool *);
	Ptr<Scaleform::GFx::TaskThreadInPool>(Scaleform::Ptr<Scaleform::GFx::TaskThreadInPool> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::TaskThreadInPool>(Scaleform::Pickable<Scaleform::GFx::TaskThreadInPool>);
	Ptr<Scaleform::GFx::TaskThreadInPool>(Scaleform::GFx::TaskThreadInPool &);
	Ptr<Scaleform::GFx::TaskThreadInPool>();
	~Ptr<Scaleform::GFx::TaskThreadInPool>();
	bool operator==(Scaleform::GFx::TaskThreadInPool *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::TaskThreadInPool> &);
	bool operator!=(Scaleform::GFx::TaskThreadInPool *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::TaskThreadInPool> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::TaskThreadInPool> &);
	Scaleform::Ptr<Scaleform::GFx::TaskThreadInPool> & operator=(Scaleform::Pickable<Scaleform::GFx::TaskThreadInPool>);
	const Scaleform::Ptr<Scaleform::GFx::TaskThreadInPool> & operator=(Scaleform::GFx::TaskThreadInPool &);
	const Scaleform::Ptr<Scaleform::GFx::TaskThreadInPool> & operator=(Scaleform::GFx::TaskThreadInPool *);
	const Scaleform::Ptr<Scaleform::GFx::TaskThreadInPool> & operator=(const Scaleform::Ptr<Scaleform::GFx::TaskThreadInPool> &);
	Scaleform::Ptr<Scaleform::GFx::TaskThreadInPool> & SetPtr(Scaleform::Pickable<Scaleform::GFx::TaskThreadInPool>);
	Scaleform::Ptr<Scaleform::GFx::TaskThreadInPool> & SetPtr(Scaleform::GFx::TaskThreadInPool &);
	Scaleform::Ptr<Scaleform::GFx::TaskThreadInPool> & SetPtr(Scaleform::GFx::TaskThreadInPool *);
	Scaleform::Ptr<Scaleform::GFx::TaskThreadInPool> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::TaskThreadInPool> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::TaskThreadInPool * & GetRawRef();
	Scaleform::GFx::TaskThreadInPool * GetPtr();
	Scaleform::GFx::TaskThreadInPool & operator*();
	Scaleform::GFx::TaskThreadInPool * operator->();
	Scaleform::GFx::TaskThreadInPool * operator class Scaleform::GFx::TaskThreadInPool *();
	Scaleform::Ptr<Scaleform::GFx::TaskThreadInPool> & Pick(Scaleform::GFx::TaskThreadInPool *);
	Scaleform::Ptr<Scaleform::GFx::TaskThreadInPool> & Pick(Scaleform::Pickable<Scaleform::GFx::TaskThreadInPool>);
	Scaleform::Ptr<Scaleform::GFx::TaskThreadInPool> & Pick(Scaleform::Ptr<Scaleform::GFx::TaskThreadInPool> &);
};
bool Scaleform::GFx::TaskThreadPool::RemoveThread(Scaleform::GFx::TaskThread * thread); // 0x14031FB50
Scaleform::GFx::Task * Scaleform::GFx::TaskThreadPool::GetTaskAddRef(unsigned long taskMask); // 0x14031F9F0
Scaleform::GFx::Task * Scaleform::GFx::TaskThreadPool::FindTaskByMask(unsigned long taskMask); // 0x14031F900
void Scaleform::GFx::TaskThreadPool::RequestShutdown(); // 0x14031FC30
bool Scaleform::GFx::TaskThreadPool::AbandonTask(Scaleform::GFx::Task * ptask); // 0x14031F200
Scaleform::GFx::ThreadedTaskManager::ThreadedTaskManager(unsigned long long stackSize); // 0x14031ECD0
bool Scaleform::GFx::ThreadedTaskManager::AddTask(Scaleform::GFx::Task * ptask); // 0x14031F5C0
class Scaleform::Ptr<Scaleform::GFx::TaskThread>
{
protected:
	Scaleform::GFx::TaskThread * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::TaskThread>(const Scaleform::Ptr<Scaleform::GFx::TaskThread> &);
	Ptr<Scaleform::GFx::TaskThread>(Scaleform::GFx::TaskThread *);
	Ptr<Scaleform::GFx::TaskThread>(Scaleform::Ptr<Scaleform::GFx::TaskThread> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::TaskThread>(Scaleform::Pickable<Scaleform::GFx::TaskThread>);
	Ptr<Scaleform::GFx::TaskThread>(Scaleform::GFx::TaskThread &);
	Ptr<Scaleform::GFx::TaskThread>();
	~Ptr<Scaleform::GFx::TaskThread>();
	bool operator==(Scaleform::GFx::TaskThread *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::TaskThread> &);
	bool operator!=(Scaleform::GFx::TaskThread *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::TaskThread> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::TaskThread> &);
	Scaleform::Ptr<Scaleform::GFx::TaskThread> & operator=(Scaleform::Pickable<Scaleform::GFx::TaskThread>);
	const Scaleform::Ptr<Scaleform::GFx::TaskThread> & operator=(Scaleform::GFx::TaskThread &);
	const Scaleform::Ptr<Scaleform::GFx::TaskThread> & operator=(Scaleform::GFx::TaskThread *);
	const Scaleform::Ptr<Scaleform::GFx::TaskThread> & operator=(const Scaleform::Ptr<Scaleform::GFx::TaskThread> &);
	Scaleform::Ptr<Scaleform::GFx::TaskThread> & SetPtr(Scaleform::Pickable<Scaleform::GFx::TaskThread>);
	Scaleform::Ptr<Scaleform::GFx::TaskThread> & SetPtr(Scaleform::GFx::TaskThread &);
	Scaleform::Ptr<Scaleform::GFx::TaskThread> & SetPtr(Scaleform::GFx::TaskThread *);
	Scaleform::Ptr<Scaleform::GFx::TaskThread> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::TaskThread> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::TaskThread * & GetRawRef();
	Scaleform::GFx::TaskThread * GetPtr();
	Scaleform::GFx::TaskThread & operator*();
	Scaleform::GFx::TaskThread * operator->();
	Scaleform::GFx::TaskThread * operator class Scaleform::GFx::TaskThread *();
	Scaleform::Ptr<Scaleform::GFx::TaskThread> & Pick(Scaleform::GFx::TaskThread *);
	Scaleform::Ptr<Scaleform::GFx::TaskThread> & Pick(Scaleform::Pickable<Scaleform::GFx::TaskThread>);
	Scaleform::Ptr<Scaleform::GFx::TaskThread> & Pick(Scaleform::Ptr<Scaleform::GFx::TaskThread> &);
};
bool Scaleform::GFx::ThreadedTaskManager::AbandonTask(Scaleform::GFx::Task * ptask); // 0x14031F3E0
bool Scaleform::GFx::ThreadedTaskManager::AddWorkerThreads(unsigned long taskMask, unsigned long count, unsigned long long stackSize, long processor); // 0x14031F830
void Scaleform::GFx::ThreadedTaskManager::RequestShutdown(); // 0x14031FCC0void __fastcall Scaleform::GFx::TaskThread::TaskThread(
        Scaleform::GFx::TaskThread *this,
        Scaleform::GFx::Task *ptask,
        Scaleform::GFx::ThreadedTaskManagerImpl *ptm,
        unsigned __int64 stackSize,
        int processor)
{
  Scaleform::Thread::Thread(this, stackSize, processor);
  this->Scaleform::Thread::Scaleform::Waitable::Scaleform::RefCountBase<Scaleform::Waitable,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::GFx::TaskThread_vtbl *)&Scaleform::GFx::TaskThread::`vftable'{for `Scaleform::Waitable'};
  this->Scaleform::Thread::Scaleform::AcquireInterface::__vftable = (Scaleform::AcquireInterface_vtbl *)&Scaleform::GFx::TaskThread::`vftable'{for `Scaleform::AcquireInterface'};
  if ( ptask )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)ptask);
  this->pTask.pObject = ptask;
  if ( ptm )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)ptm);
  this->pTaskManager.pObject = ptm;
}

void __fastcall Scaleform::GFx::ThreadedTaskManager::ThreadedTaskManager(
        Scaleform::GFx::ThreadedTaskManager *this,
        unsigned __int64 stackSize)
{
  Scaleform::GFx::ThreadedTaskManagerImpl *v3; // rax
  Scaleform::GFx::ThreadedTaskManagerImpl *v4; // rax

  this->ThreadStackSize = stackSize;
  this->__vftable = (Scaleform::GFx::ThreadedTaskManager_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::ThreadedTaskManager_vtbl *)&Scaleform::GFx::ThreadedTaskManager::`vftable';
  this->SType = 24;
  v3 = (Scaleform::GFx::ThreadedTaskManagerImpl *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                    Scaleform::Memory::pGlobalHeap,
                                                    96i64);
  if ( v3 )
  {
    Scaleform::GFx::ThreadedTaskManagerImpl::ThreadedTaskManagerImpl(v3);
    this->pImpl = v4;
  }
  else
  {
    this->pImpl = 0i64;
  }
}

void __fastcall Scaleform::GFx::ThreadedTaskManagerImpl::ThreadedTaskManagerImpl(
        Scaleform::GFx::ThreadedTaskManagerImpl *this)
{
  Scaleform::Mutex *p_TasksMutex; // rbx

  this->__vftable = (Scaleform::GFx::ThreadedTaskManagerImpl_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  p_TasksMutex = &this->TasksMutex;
  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::ThreadedTaskManagerImpl_vtbl *)&Scaleform::GFx::ThreadedTaskManagerImpl::`vftable';
  Scaleform::Mutex::Mutex(&this->TasksMutex, 1, 0);
  this->RunningTasks.pTasksMutex = p_TasksMutex;
  this->RunningTasks.Tasks.Data.Data = 0i64;
  this->RunningTasks.Tasks.Data.Size = 0i64;
  this->RunningTasks.Tasks.Data.Policy.Capacity = 0i64;
  this->pThreadPool = 0i64;
}

void __fastcall Scaleform::GFx::TaskThread::~TaskThread(Scaleform::GFx::TaskThread *this, _BOOL8 a2)
{
  Scaleform::GFx::Task *pObject; // rcx
  Scaleform::GFx::TaskThreadPool *pThreadPool; // rcx
  Scaleform::RefCountVImpl *v5; // rcx
  Scaleform::RefCountVImpl *v6; // rcx

  this->Scaleform::Thread::Scaleform::Waitable::Scaleform::RefCountBase<Scaleform::Waitable,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::GFx::TaskThread_vtbl *)&Scaleform::GFx::TaskThread::`vftable'{for `Scaleform::Waitable'};
  this->Scaleform::Thread::Scaleform::AcquireInterface::__vftable = (Scaleform::AcquireInterface_vtbl *)&Scaleform::GFx::TaskThread::`vftable'{for `Scaleform::AcquireInterface'};
  pObject = this->pTask.pObject;
  if ( pObject )
  {
    LOBYTE(a2) = 1;
    pObject->OnAbandon(pObject, a2);
    Scaleform::GFx::TasksContainer::RemoveTask(&this->pTaskManager.pObject->RunningTasks, this->pTask.pObject);
  }
  pThreadPool = this->pTaskManager.pObject->pThreadPool;
  if ( pThreadPool )
    Scaleform::GFx::TaskThreadPool::RemoveThread(pThreadPool, this);
  v5 = (Scaleform::RefCountVImpl *)this->pTaskManager.pObject;
  if ( v5 )
    Scaleform::RefCountImpl::Release(v5);
  v6 = (Scaleform::RefCountVImpl *)this->pTask.pObject;
  if ( v6 )
    Scaleform::RefCountImpl::Release(v6);
  Scaleform::Thread::~Thread(this);
}

void __fastcall Scaleform::GFx::TaskThreadPool::~TaskThreadPool(Scaleform::GFx::TaskThreadPool *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  unsigned __int64 Size; // rdi
  Scaleform::RefCountVImpl **i; // rbx

  Scaleform::GFx::TaskThreadPool::RequestShutdown(this);
  v2 = 0;
  if ( this->Threads.Data.Size )
  {
    v3 = 0i64;
    do
    {
      Scaleform::Waitable::Wait(this->Threads.Data.Data[v3], 0xFFFFFFFF);
      v3 = ++v2;
    }
    while ( v2 < this->Threads.Data.Size );
  }
  Scaleform::WaitCondition::~WaitCondition(&this->TaskWaitCondition);
  Scaleform::Lock::~Lock(&this->ThreadsLock);
  if ( this->Threads.Data.Data )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  Size = this->TasksQueue.Data.Size;
  for ( i = (Scaleform::RefCountVImpl **)&this->TasksQueue.Data.Data[Size - 1]; Size; --Size )
  {
    if ( *i )
      Scaleform::RefCountImpl::Release(*i);
    --i;
  }
  if ( this->TasksQueue.Data.Data )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
}

void __fastcall Scaleform::GFx::TasksContainer::~TasksContainer(Scaleform::GFx::TasksContainer *this)
{
  Scaleform::Mutex *pTasksMutex; // rbx
  _BOOL8 v3; // rdx
  unsigned int v4; // esi
  __int64 v5; // rcx
  Scaleform::GFx::Task *v6; // rcx

  pTasksMutex = this->pTasksMutex;
  Scaleform::Mutex::DoLock(this->pTasksMutex);
  v4 = 0;
  if ( this->Tasks.Data.Size )
  {
    v5 = 0i64;
    do
    {
      LOBYTE(v3) = 1;
      v6 = this->Tasks.Data.Data[v5];
      v6->OnAbandon(v6, v3);
      v5 = ++v4;
    }
    while ( v4 < this->Tasks.Data.Size );
  }
  Scaleform::Mutex::Unlock(pTasksMutex);
  if ( this->Tasks.Data.Data )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
}

void __fastcall Scaleform::GFx::ThreadedTaskManagerImpl::~ThreadedTaskManagerImpl(
        Scaleform::GFx::ThreadedTaskManagerImpl *this)
{
  Scaleform::Mutex *pTasksMutex; // rbx
  _BOOL8 v3; // rdx
  unsigned int v4; // edi
  __int64 v5; // rcx
  Scaleform::GFx::Task *v6; // rcx
  Scaleform::GFx::TaskThreadPool *pThreadPool; // rbx

  this->__vftable = (Scaleform::GFx::ThreadedTaskManagerImpl_vtbl *)&Scaleform::GFx::ThreadedTaskManagerImpl::`vftable';
  pTasksMutex = this->RunningTasks.pTasksMutex;
  Scaleform::Mutex::DoLock(pTasksMutex);
  v4 = 0;
  if ( this->RunningTasks.Tasks.Data.Size )
  {
    v5 = 0i64;
    do
    {
      LOBYTE(v3) = 1;
      v6 = this->RunningTasks.Tasks.Data.Data[v5];
      v6->OnAbandon(v6, v3);
      v5 = ++v4;
    }
    while ( v4 < this->RunningTasks.Tasks.Data.Size );
  }
  Scaleform::Mutex::Unlock(pTasksMutex);
  pThreadPool = this->pThreadPool;
  if ( pThreadPool )
  {
    Scaleform::GFx::TaskThreadPool::~TaskThreadPool(this->pThreadPool);
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pThreadPool);
  }
  Scaleform::GFx::TasksContainer::~TasksContainer(&this->RunningTasks);
  Scaleform::Mutex::~Mutex(&this->TasksMutex);
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

char __fastcall Scaleform::GFx::TaskThreadPool::AbandonTask(
        Scaleform::GFx::TaskThreadPool *this,
        Scaleform::GFx::Task *ptask)
{
  Scaleform::GFx::ThreadedTaskManagerImpl *pTaskManager; // rdi
  unsigned __int64 Size; // r8
  unsigned int v7; // esi
  unsigned int v8; // ecx
  Scaleform::Ptr<Scaleform::GFx::Task> *Data; // rdx
  __int64 v10; // rax
  Scaleform::GFx::ThreadedTaskManagerImpl *v11; // r14
  Scaleform::Mutex *pTasksMutex; // rbx
  unsigned __int64 v13; // rdx
  Scaleform::GFx::Task **v14; // rcx
  __int64 v15; // rax
  char v16; // bl
  __int64 v17; // rsi
  Scaleform::RefCountVImpl *pObject; // rcx

  if ( !ptask )
    return 0;
  pTaskManager = this->pTaskManager;
  Scaleform::Mutex::DoLock(&pTaskManager->TasksMutex);
  Size = this->TasksQueue.Data.Size;
  v7 = 0;
  v8 = 0;
  if ( Size )
  {
    Data = this->TasksQueue.Data.Data;
    v10 = 0i64;
    while ( Data[v10].pObject != ptask )
    {
      v10 = ++v8;
      if ( v8 >= Size )
        goto LABEL_7;
    }
    v17 = v8;
    Data[v8].pObject->OnAbandon(Data[v8].pObject, 0);
    if ( this->TasksQueue.Data.Size == 1 )
    {
      Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::Filter>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Filter>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        (Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::Filter>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Filter>,2>,Scaleform::ArrayDefaultPolicy> *)this,
        this,
        0i64);
      v16 = 1;
    }
    else
    {
      pObject = (Scaleform::RefCountVImpl *)this->TasksQueue.Data.Data[v17].pObject;
      if ( pObject )
        Scaleform::RefCountImpl::Release(pObject);
      memmove(
        &this->TasksQueue.Data.Data[v17],
        &this->TasksQueue.Data.Data[v17 + 1],
        8 * (this->TasksQueue.Data.Size - v17) - 8);
      --this->TasksQueue.Data.Size;
      v16 = 1;
    }
  }
  else
  {
LABEL_7:
    v11 = this->pTaskManager;
    pTasksMutex = v11->RunningTasks.pTasksMutex;
    Scaleform::Mutex::DoLock(pTasksMutex);
    v13 = v11->RunningTasks.Tasks.Data.Size;
    if ( v13 )
    {
      v14 = v11->RunningTasks.Tasks.Data.Data;
      v15 = 0i64;
      while ( v14[v15] != ptask )
      {
        v15 = ++v7;
        if ( v7 >= v13 )
          goto LABEL_11;
      }
      LOBYTE(v13) = 1;
      v14[v7]->OnAbandon(v14[v7], v13);
      Scaleform::Mutex::Unlock(pTasksMutex);
      v16 = 1;
    }
    else
    {
LABEL_11:
      Scaleform::Mutex::Unlock(pTasksMutex);
      v16 = 0;
    }
  }
  Scaleform::Mutex::Unlock(&pTaskManager->TasksMutex);
  return v16;
}

char __fastcall Scaleform::GFx::TasksContainer::AbandonTask(
        Scaleform::GFx::TasksContainer *this,
        Scaleform::GFx::Task *ptask)
{
  Scaleform::Mutex *pTasksMutex; // rbx
  unsigned __int64 Size; // rdx
  unsigned int v7; // eax
  Scaleform::GFx::Task **Data; // r8
  __int64 v9; // rcx
  char v10; // di

  if ( !ptask )
    return 0;
  pTasksMutex = this->pTasksMutex;
  Scaleform::Mutex::DoLock(this->pTasksMutex);
  Size = this->Tasks.Data.Size;
  v7 = 0;
  if ( Size )
  {
    Data = this->Tasks.Data.Data;
    v9 = 0i64;
    while ( Data[v9] != ptask )
    {
      v9 = ++v7;
      if ( v7 >= Size )
        goto LABEL_7;
    }
    LOBYTE(Size) = 1;
    Data[v7]->OnAbandon(Data[v7], Size);
    v10 = 1;
  }
  else
  {
LABEL_7:
    v10 = 0;
  }
  Scaleform::Mutex::Unlock(pTasksMutex);
  return v10;
}

char __fastcall Scaleform::GFx::ThreadedTaskManager::AbandonTask(
        Scaleform::GFx::ThreadedTaskManager *this,
        Scaleform::GFx::Task *ptask)
{
  Scaleform::GFx::ThreadedTaskManagerImpl *pImpl; // rcx

  pImpl = this->pImpl;
  if ( pImpl->pThreadPool )
    return Scaleform::GFx::TaskThreadPool::AbandonTask(pImpl->pThreadPool, ptask);
  else
    return Scaleform::GFx::TasksContainer::AbandonTask(&pImpl->RunningTasks, ptask);
}

char __fastcall Scaleform::GFx::TaskThreadPool::AddTask(
        Scaleform::GFx::TaskThreadPool *this,
        Scaleform::GFx::Task *ptask)
{
  unsigned __int64 Size; // r9
  unsigned int v6; // edx
  __int64 v7; // rax
  Scaleform::Lock *p_ThreadsLock; // rcx
  Scaleform::GFx::ThreadedTaskManagerImpl *pTaskManager; // rbx
  Scaleform::Ptr<Scaleform::GFx::Task> *v10; // r14

  if ( this->ShutdownRequested )
    return 0;
  Scaleform::Lock::DoLock(&this->ThreadsLock);
  Size = this->Threads.Data.Size;
  v6 = 0;
  if ( Size )
  {
    v7 = 0i64;
    do
    {
      if ( (ptask->ThisTaskId & 0xFF0000 & this->Threads.Data.Data[v7]->TaskMask) == (ptask->ThisTaskId & 0xFF0000) )
        break;
      v7 = ++v6;
    }
    while ( v6 < Size );
  }
  p_ThreadsLock = &this->ThreadsLock;
  if ( v6 == Size )
  {
    Scaleform::Lock::Unlock(p_ThreadsLock);
    return 0;
  }
  else
  {
    Scaleform::Lock::Unlock(p_ThreadsLock);
    pTaskManager = this->pTaskManager;
    Scaleform::Mutex::DoLock(&pTaskManager->TasksMutex);
    if ( ptask )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)ptask);
    Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::Filter>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Filter>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
      (Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::Filter>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Filter>,2>,Scaleform::ArrayDefaultPolicy> *)this,
      this,
      this->TasksQueue.Data.Size + 1);
    v10 = &this->TasksQueue.Data.Data[this->TasksQueue.Data.Size - 1];
    if ( v10 )
    {
      if ( ptask )
        Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)ptask);
      v10->pObject = ptask;
    }
    if ( ptask )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)ptask);
    Scaleform::WaitCondition::NotifyAll(&this->TaskWaitCondition);
    Scaleform::Mutex::Unlock(&pTaskManager->TasksMutex);
    return 1;
  }
}

void __fastcall Scaleform::GFx::TasksContainer::AddTask(
        Scaleform::GFx::TasksContainer *this,
        Scaleform::GFx::Task *ptask)
{
  Scaleform::Mutex *pTasksMutex; // rbx
  unsigned __int64 Size; // rsi
  Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2>,Scaleform::ArrayDefaultPolicy> *p_Tasks; // rdi
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r8
  Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *Data; // rax
  Scaleform::GFx::Task **v10; // rcx

  if ( !ptask )
    return;
  pTasksMutex = this->pTasksMutex;
  Scaleform::Mutex::DoLock(this->pTasksMutex);
  Size = this->Tasks.Data.Size;
  p_Tasks = (Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2>,Scaleform::ArrayDefaultPolicy> *)&this->Tasks;
  v7 = Size + 1;
  if ( v7 >= p_Tasks->Size )
  {
    if ( v7 > p_Tasks->Policy.Capacity )
    {
      v8 = v7 + (v7 >> 2);
      goto LABEL_7;
    }
  }
  else if ( v7 < p_Tasks->Policy.Capacity >> 1 )
  {
    v8 = v7;
LABEL_7:
    Scaleform::ArrayDataBase<Scaleform::Render::ImageFileHandler *,Scaleform::AllocatorGH<Scaleform::Render::ImageFileHandler *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      p_Tasks,
      p_Tasks,
      v8);
  }
  Data = p_Tasks->Data;
  p_Tasks->Size = v7;
  v10 = (Scaleform::GFx::Task **)&Data[v7 - 1];
  if ( v10 )
    *v10 = ptask;
  Scaleform::Mutex::Unlock(pTasksMutex);
}

char __fastcall Scaleform::GFx::ThreadedTaskManager::AddTask(
        Scaleform::GFx::ThreadedTaskManager *this,
        Scaleform::GFx::Task *ptask)
{
  Scaleform::GFx::TaskThreadPool *pThreadPool; // rcx
  Scaleform::GFx::TaskThread *v6; // rax
  Scaleform::RefCountVImpl *v7; // rax
  Scaleform::RefCountVImpl *v8; // rsi

  if ( !ptask )
    return 0;
  pThreadPool = this->pImpl->pThreadPool;
  if ( pThreadPool && Scaleform::GFx::TaskThreadPool::AddTask(pThreadPool, ptask) )
    return 1;
  v6 = (Scaleform::GFx::TaskThread *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                       Scaleform::Memory::pGlobalHeap,
                                       104i64);
  if ( !v6 )
    return 0;
  Scaleform::GFx::TaskThread::TaskThread(v6, ptask, this->pImpl, this->ThreadStackSize, -1);
  v8 = v7;
  if ( !v7 )
    return 0;
  Scaleform::GFx::TasksContainer::AddTask(&this->pImpl->RunningTasks, ptask);
  ((void (__fastcall *)(Scaleform::RefCountVImpl *, __int64))v8->__vftable[1].Release)(v8, 1i64);
  Scaleform::RefCountImpl::Release(v8);
  return 1;
}

char __fastcall Scaleform::GFx::TaskThreadPool::AddThreads(
        Scaleform::GFx::TaskThreadPool *this,
        unsigned int taskMask,
        unsigned int count,
        unsigned __int64 stackSize,
        int processor)
{
  Scaleform::Lock *p_ThreadsLock; // rbx
  Scaleform::Thread *v11; // rax
  Scaleform::RefCountVImpl *v12; // rsi
  Scaleform::RefCountVImpl *pTaskManager; // rdi
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r8
  Scaleform::GFx::TaskThreadInPool **Data; // rax
  Scaleform::RefCountVImpl **v17; // rcx
  Scaleform::Lock *v18; // [rsp+50h] [rbp+8h]

  if ( this->ShutdownRequested )
    return 0;
  p_ThreadsLock = &this->ThreadsLock;
  v18 = &this->ThreadsLock;
  Scaleform::Lock::DoLock(&this->ThreadsLock);
  if ( !count )
    goto LABEL_19;
  do
  {
    --count;
    v11 = (Scaleform::Thread *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                 Scaleform::Memory::pGlobalHeap,
                                 112i64);
    v12 = (Scaleform::RefCountVImpl *)v11;
    if ( v11 )
    {
      pTaskManager = (Scaleform::RefCountVImpl *)this->pTaskManager;
      Scaleform::Thread::Thread(v11, stackSize, processor);
      v12->__vftable = (Scaleform::RefCountVImpl_vtbl *)&Scaleform::GFx::TaskThread::`vftable'{for `Scaleform::Waitable'};
      *(_QWORD *)&v12[1].RefCount = &Scaleform::GFx::TaskThread::`vftable'{for `Scaleform::AcquireInterface'};
      *(_QWORD *)&v12[5].RefCount = 0i64;
      if ( pTaskManager )
        Scaleform::Render::RenderBuffer::AddRef(pTaskManager);
      v12[6].__vftable = (Scaleform::RefCountVImpl_vtbl *)pTaskManager;
      *(_QWORD *)&v12[1].RefCount = &Scaleform::GFx::TaskThreadInPool::`vftable'{for `Scaleform::AcquireInterface'};
      v12->__vftable = (Scaleform::RefCountVImpl_vtbl *)&Scaleform::GFx::TaskThreadInPool::`vftable'{for `Scaleform::Waitable'};
      v12[6].RefCount = taskMask;
    }
    else
    {
      v12 = 0i64;
    }
    ((void (__fastcall *)(Scaleform::RefCountVImpl *, __int64))v12->__vftable[1].Release)(v12, 1i64);
    v14 = this->Threads.Data.Size + 1;
    if ( v14 >= this->Threads.Data.Size )
    {
      if ( v14 <= this->Threads.Data.Policy.Capacity )
        goto LABEL_15;
      v15 = v14 + (v14 >> 2);
    }
    else
    {
      if ( v14 >= this->Threads.Data.Policy.Capacity >> 1 )
        goto LABEL_15;
      v15 = this->Threads.Data.Size + 1;
    }
    Scaleform::ArrayDataBase<Scaleform::Render::ImageFileHandler *,Scaleform::AllocatorGH<Scaleform::Render::ImageFileHandler *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      (Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2>,Scaleform::ArrayDefaultPolicy> *)&this->Threads,
      &this->Threads,
      v15);
LABEL_15:
    Data = this->Threads.Data.Data;
    this->Threads.Data.Size = v14;
    v17 = (Scaleform::RefCountVImpl **)&Data[v14 - 1];
    if ( v17 )
      *v17 = v12;
    Scaleform::RefCountImpl::Release(v12);
  }
  while ( count );
  p_ThreadsLock = v18;
LABEL_19:
  Scaleform::Lock::Unlock(p_ThreadsLock);
  return 1;
}

bool __fastcall Scaleform::GFx::ThreadedTaskManager::AddWorkerThreads(
        Scaleform::GFx::ThreadedTaskManager *this,
        unsigned int taskMask,
        unsigned int count,
        unsigned __int64 stackSize,
        int processor)
{
  return Scaleform::GFx::ThreadedTaskManagerImpl::AddWorkerThreads(this->pImpl, taskMask, count, stackSize, processor);
}

char __fastcall Scaleform::GFx::ThreadedTaskManagerImpl::AddWorkerThreads(
        Scaleform::GFx::ThreadedTaskManagerImpl *this,
        unsigned int taskMask,
        unsigned int count,
        unsigned __int64 stackSize,
        int processor)
{
  Scaleform::GFx::TaskThreadPool *v9; // rbx

  if ( !this->pThreadPool )
  {
    v9 = (Scaleform::GFx::TaskThreadPool *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                             Scaleform::Memory::pGlobalHeap,
                                             120i64);
    if ( v9 )
    {
      v9->TasksQueue.Data.Data = 0i64;
      v9->TasksQueue.Data.Size = 0i64;
      v9->TasksQueue.Data.Policy.Capacity = 0i64;
      v9->Threads.Data.Data = 0i64;
      v9->Threads.Data.Size = 0i64;
      v9->Threads.Data.Policy.Capacity = 0i64;
      Scaleform::Lock::Lock(&v9->ThreadsLock, 0);
      Scaleform::WaitCondition::WaitCondition(&v9->TaskWaitCondition);
      v9->ShutdownRequested = 0;
      v9->pTaskManager = this;
    }
    else
    {
      v9 = 0i64;
    }
    this->pThreadPool = v9;
  }
  return Scaleform::GFx::TaskThreadPool::AddThreads(this->pThreadPool, taskMask, count, stackSize, processor);
}

void __fastcall Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2>,Scaleform::ArrayDefaultPolicy>>::Clear(
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::VMAbcFile *,Scaleform::AllocatorLH_POD<Scaleform::GFx::AS3::VMAbcFile *,329>,Scaleform::ArrayDefaultPolicy> > *this)
{
  unsigned __int64 Capacity; // rax

  if ( this->Data.Size && (Capacity = this->Data.Policy.Capacity, (Capacity & 0xFFFFFFFFFFFFFFFEui64) != 0) && Capacity )
  {
    if ( this->Data.Data )
    {
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      this->Data.Data = 0i64;
    }
    this->Data.Policy.Capacity = 0i64;
    this->Data.Size = 0i64;
  }
  else
  {
    this->Data.Size = 0i64;
  }
}

Scaleform::RefCountVImpl *__fastcall Scaleform::GFx::TaskThreadPool::FindTaskByMask(
        Scaleform::GFx::TaskThreadPool *this,
        unsigned int taskMask)
{
  unsigned __int64 Size; // r10
  __int64 v3; // r8
  __int64 v5; // r9
  Scaleform::Ptr<Scaleform::GFx::Task> *Data; // rdi
  Scaleform::RefCountVImpl *pObject; // rdi
  __int64 v9; // rsi
  Scaleform::RefCountVImpl *v10; // rcx

  Size = this->TasksQueue.Data.Size;
  v3 = 0i64;
  if ( !Size )
    return 0i64;
  v5 = 0i64;
  Data = this->TasksQueue.Data.Data;
  while ( (taskMask & Data[v5].pObject->ThisTaskId & 0xFF0000) == 0 )
  {
    v3 = (unsigned int)(v3 + 1);
    v5 = (unsigned int)v3;
    if ( (unsigned int)v3 >= Size )
      return 0i64;
  }
  pObject = (Scaleform::RefCountVImpl *)Data[v3].pObject;
  v9 = (unsigned int)v3;
  Scaleform::Render::RenderBuffer::AddRef(pObject);
  if ( this->TasksQueue.Data.Size == 1 )
  {
    Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::Filter>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Filter>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
      (Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::Filter>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Filter>,2>,Scaleform::ArrayDefaultPolicy> *)this,
      this,
      0i64);
    return pObject;
  }
  else
  {
    v10 = (Scaleform::RefCountVImpl *)this->TasksQueue.Data.Data[v9].pObject;
    if ( v10 )
      Scaleform::RefCountImpl::Release(v10);
    memmove(
      &this->TasksQueue.Data.Data[v9],
      &this->TasksQueue.Data.Data[v9 + 1],
      8 * (this->TasksQueue.Data.Size - v9) - 8);
    --this->TasksQueue.Data.Size;
    return pObject;
  }
}

Scaleform::RefCountVImpl *__fastcall Scaleform::GFx::TaskThreadPool::GetTaskAddRef(
        Scaleform::GFx::TaskThreadPool *this,
        unsigned int taskMask)
{
  Scaleform::GFx::ThreadedTaskManagerImpl *pTaskManager; // rbx
  Scaleform::RefCountVImpl *v6; // rsi
  Scaleform::RefCountVImpl *TaskByMask; // rax

  if ( this->ShutdownRequested )
    return 0i64;
  pTaskManager = this->pTaskManager;
  Scaleform::Mutex::DoLock(&pTaskManager->TasksMutex);
  v6 = 0i64;
  if ( !this->ShutdownRequested )
  {
    while ( 1 )
    {
      TaskByMask = Scaleform::GFx::TaskThreadPool::FindTaskByMask(this, taskMask);
      v6 = TaskByMask;
      if ( TaskByMask )
        break;
      Scaleform::WaitCondition::Wait(&this->TaskWaitCondition, &this->pTaskManager->TasksMutex, 0xFFFFFFFF);
      if ( this->ShutdownRequested )
        goto LABEL_8;
    }
    Scaleform::GFx::TasksContainer::AddTask(&this->pTaskManager->RunningTasks, (Scaleform::GFx::Task *)TaskByMask);
  }
LABEL_8:
  Scaleform::Mutex::Unlock(&pTaskManager->TasksMutex);
  return v6;
}

char __fastcall Scaleform::GFx::TasksContainer::RemoveTask(
        Scaleform::GFx::TasksContainer *this,
        Scaleform::GFx::Task *ptask)
{
  Scaleform::Mutex *pTasksMutex; // rbx
  unsigned __int64 Size; // rdx
  unsigned int v7; // eax
  __int64 v8; // rcx
  char v9; // di
  unsigned __int64 v10; // r8

  if ( !ptask )
    return 0;
  pTasksMutex = this->pTasksMutex;
  Scaleform::Mutex::DoLock(this->pTasksMutex);
  Size = this->Tasks.Data.Size;
  v7 = 0;
  if ( Size )
  {
    v8 = 0i64;
    while ( this->Tasks.Data.Data[v8] != ptask )
    {
      v8 = ++v7;
      if ( v7 >= Size )
        goto LABEL_7;
    }
    v10 = this->Tasks.Data.Size;
    if ( v10 == 1 )
    {
      Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2>,Scaleform::ArrayDefaultPolicy>>::Clear((Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::VMAbcFile *,Scaleform::AllocatorLH_POD<Scaleform::GFx::AS3::VMAbcFile *,329>,Scaleform::ArrayDefaultPolicy> > *)&this->Tasks);
    }
    else
    {
      memmove(&this->Tasks.Data.Data[v7], &this->Tasks.Data.Data[v7 + 1], 8 * (v10 - v7) - 8);
      --this->Tasks.Data.Size;
    }
    v9 = 1;
  }
  else
  {
LABEL_7:
    v9 = 0;
  }
  Scaleform::Mutex::Unlock(pTasksMutex);
  return v9;
}

__int64 __fastcall Scaleform::GFx::TaskThreadPool::RemoveThread(
        Scaleform::GFx::TaskThreadPool *this,
        Scaleform::GFx::TaskThread *thread)
{
  Scaleform::Lock *p_ThreadsLock; // rbx
  unsigned __int64 Size; // rcx
  __int64 v6; // rax
  Scaleform::GFx::TaskThreadInPool **Data; // r9
  __int64 v8; // r8
  unsigned __int8 v9; // di
  unsigned __int64 Capacity; // rax

  p_ThreadsLock = &this->ThreadsLock;
  Scaleform::Lock::DoLock(&this->ThreadsLock);
  Size = this->Threads.Data.Size;
  v6 = 0i64;
  if ( Size )
  {
    Data = this->Threads.Data.Data;
    v8 = 0i64;
    while ( Data[v8] != thread )
    {
      v6 = (unsigned int)(v6 + 1);
      v8 = (unsigned int)v6;
      if ( (unsigned int)v6 >= Size )
        goto LABEL_5;
    }
    if ( Size == 1 )
    {
      Capacity = this->Threads.Data.Policy.Capacity;
      if ( (Capacity & 0xFFFFFFFFFFFFFFFEui64) != 0 && Capacity )
      {
        if ( Data )
        {
          ((void (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::GFx::TaskThreadInPool **, __int64))Scaleform::Memory::pGlobalHeap->Free)(
            Scaleform::Memory::pGlobalHeap,
            this->Threads.Data.Data,
            1i64);
          this->Threads.Data.Data = 0i64;
        }
        this->Threads.Data.Policy.Capacity = 0i64;
      }
      this->Threads.Data.Size = 0i64;
      v9 = 1;
    }
    else
    {
      memmove(&Data[v6], &Data[v6 + 1], 8 * (Size - (unsigned int)v6) - 8);
      --this->Threads.Data.Size;
      v9 = 1;
    }
  }
  else
  {
LABEL_5:
    v9 = 0;
  }
  Scaleform::Lock::Unlock(p_ThreadsLock);
  return v9;
}

void __fastcall Scaleform::GFx::TaskThreadPool::RequestShutdown(Scaleform::GFx::TaskThreadPool *this)
{
  Scaleform::GFx::ThreadedTaskManagerImpl *pTaskManager; // rbx
  unsigned int v3; // esi
  __int64 v4; // rcx

  pTaskManager = this->pTaskManager;
  Scaleform::Mutex::DoLock(&pTaskManager->TasksMutex);
  if ( !this->ShutdownRequested )
  {
    v3 = 0;
    this->ShutdownRequested = 1;
    if ( this->TasksQueue.Data.Size )
    {
      v4 = 0i64;
      do
      {
        this->TasksQueue.Data.Data[v4].pObject->OnAbandon(this->TasksQueue.Data.Data[v4].pObject, 0);
        v4 = ++v3;
      }
      while ( v3 < this->TasksQueue.Data.Size );
    }
    Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::Filter>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Filter>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
      (Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::Filter>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Filter>,2>,Scaleform::ArrayDefaultPolicy> *)this,
      this,
      0i64);
    Scaleform::WaitCondition::NotifyAll(&this->TaskWaitCondition);
  }
  Scaleform::Mutex::Unlock(&pTaskManager->TasksMutex);
}

void __fastcall Scaleform::GFx::ThreadedTaskManager::RequestShutdown(Scaleform::GFx::ThreadedTaskManager *this)
{
  Scaleform::GFx::ThreadedTaskManagerImpl::RequestShutdown(this->pImpl);
}

void __fastcall Scaleform::GFx::ThreadedTaskManagerImpl::RequestShutdown(Scaleform::GFx::ThreadedTaskManagerImpl *this)
{
  Scaleform::Mutex *pTasksMutex; // rbx
  _BOOL8 v3; // rdx
  unsigned int v4; // esi
  __int64 v5; // rcx
  Scaleform::GFx::Task *v6; // rcx
  Scaleform::GFx::TaskThreadPool *pThreadPool; // rcx

  pTasksMutex = this->RunningTasks.pTasksMutex;
  Scaleform::Mutex::DoLock(pTasksMutex);
  v4 = 0;
  if ( this->RunningTasks.Tasks.Data.Size )
  {
    v5 = 0i64;
    do
    {
      LOBYTE(v3) = 1;
      v6 = this->RunningTasks.Tasks.Data.Data[v5];
      v6->OnAbandon(v6, v3);
      v5 = ++v4;
    }
    while ( v4 < this->RunningTasks.Tasks.Data.Size );
  }
  Scaleform::Mutex::Unlock(pTasksMutex);
  pThreadPool = this->pThreadPool;
  if ( pThreadPool )
    Scaleform::GFx::TaskThreadPool::RequestShutdown(pThreadPool);
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::ImageFileHandler *,Scaleform::AllocatorGH<Scaleform::Render::ImageFileHandler *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *Data; // rdx
  unsigned __int64 v5; // rdi
  Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *v6; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v5 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v6 = (Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                                            Scaleform::Memory::pGlobalHeap,
                                                                            Data,
                                                                            8 * v5);
        this->Policy.Capacity = v5;
        this->Data = v6;
        return;
      }
      v7 = 2;
      this->Data = (Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                                                  Scaleform::Memory::pGlobalHeap,
                                                                                  8 * v5,
                                                                                  &v7);
    }
    else
    {
      v5 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        this->Data = 0i64;
        this->Policy.Capacity = 0i64;
        return;
      }
    }
    this->Policy.Capacity = v5;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::Filter>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Filter>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::Filter>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Filter>,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v7; // rsi
  Scaleform::RefCountVImpl **i; // rbx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::Render::ImageFileHandler *,Scaleform::AllocatorGH<Scaleform::Render::ImageFileHandler *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    v7 = Size - newSize;
    for ( i = (Scaleform::RefCountVImpl **)&this->Data[newSize - 1 + v7]; v7; --v7 )
    {
      if ( *i )
        Scaleform::RefCountImpl::Release(*i);
      --i;
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::ImageFileHandler *,Scaleform::AllocatorGH<Scaleform::Render::ImageFileHandler *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

__int64 __fastcall Scaleform::GFx::TaskThread::Run(Scaleform::GFx::TaskThread *this)
{
  Scaleform::GFx::Task *pObject; // rcx
  Scaleform::RefCountVImpl *v3; // rcx

  pObject = this->pTask.pObject;
  if ( pObject )
  {
    pObject->Execute(pObject);
    Scaleform::GFx::TasksContainer::RemoveTask(&this->pTaskManager.pObject->RunningTasks, this->pTask.pObject);
    v3 = (Scaleform::RefCountVImpl *)this->pTask.pObject;
    if ( v3 )
      Scaleform::RefCountImpl::Release(v3);
    this->pTask.pObject = 0i64;
  }
  return 1i64;
}

__int64 __fastcall Scaleform::GFx::TaskThreadInPool::Run(Scaleform::GFx::TaskThreadInPool *this)
{
  Scaleform::RefCountVImpl *TaskAddRef; // rax
  Scaleform::GFx::Task *v3; // rdi
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::GFx::Task *v5; // rcx
  Scaleform::RefCountVImpl *v6; // rcx

  while ( 1 )
  {
    TaskAddRef = Scaleform::GFx::TaskThreadPool::GetTaskAddRef(this->pTaskManager.pObject->pThreadPool, this->TaskMask);
    v3 = (Scaleform::GFx::Task *)TaskAddRef;
    if ( !TaskAddRef )
      break;
    if ( !this->pTask.pObject )
    {
      Scaleform::Render::RenderBuffer::AddRef(TaskAddRef);
      pObject = (Scaleform::RefCountVImpl *)this->pTask.pObject;
      if ( pObject )
        Scaleform::RefCountImpl::Release(pObject);
      this->pTask.pObject = v3;
    }
    v5 = this->pTask.pObject;
    if ( v5 )
    {
      v5->Execute(v5);
      Scaleform::GFx::TasksContainer::RemoveTask(&this->pTaskManager.pObject->RunningTasks, this->pTask.pObject);
      v6 = (Scaleform::RefCountVImpl *)this->pTask.pObject;
      if ( v6 )
        Scaleform::RefCountImpl::Release(v6);
      this->pTask.pObject = 0i64;
    }
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v3);
  }
  return 1i64;
}

