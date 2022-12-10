#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

struct Scaleform::ListNode<Scaleform::Render::ContextImpl::Snapshot>
{
	Scaleform::Render::ContextImpl::Snapshot * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::ContextImpl::Snapshot * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::Render::ContextImpl::Snapshot>();
	Scaleform::Render::ContextImpl::Snapshot * GetPrev();
	Scaleform::Render::ContextImpl::Snapshot * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::ContextImpl::Snapshot *);
	void InsertNodeAfter(Scaleform::Render::ContextImpl::Snapshot *);
	void InsertNodeBefore(Scaleform::Render::ContextImpl::Snapshot *);
};
class Scaleform::Render::ContextImpl::Snapshot :
	Scaleform::ListNode<Scaleform::Render::ContextImpl::Snapshot>,
	Scaleform::NewOverrideBase<69>
{
public:
	Scaleform::Render::ContextImpl::Context * pContext; // 0x10
	Scaleform::List<Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::ListNode<Scaleform::Render::ContextImpl::SnapshotPage> > SnapshotPages; // 0x18
	Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63> Changes; // 0x28
	Scaleform::Render::ContextImpl::EntryChange * pFreeChangeNodes; // 0x38
	Scaleform::List<Scaleform::Render::ContextImpl::Entry::PropagateNode,Scaleform::Render::ContextImpl::Entry::PropagateNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::Entry::PropagateNode> > PropagateEntrys; // 0x40
	Scaleform::List2<Scaleform::Render::ContextImpl::Entry,Scaleform::Render::ContextImpl::EntryListAccessor> DestroyedNodes; // 0x50
	bool ForceUpdateImagesFlag; // 0x88
	struct HeapNode;
	Scaleform::List<Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::Snapshot::HeapNode> > Heaps; // 0x90
	Snapshot(Scaleform::Render::ContextImpl::Context *, Scaleform::MemoryHeap *);
	~Snapshot();
	Scaleform::Render::ContextImpl::EntryChange * AddChangeItem(Scaleform::Render::ContextImpl::Entry *, unsigned long);
	void FreeChangeItem(Scaleform::Render::ContextImpl::EntryChange *);
	Scaleform::Render::LinearHeap & GetChangeHeap();
	void AddToPropagate(Scaleform::Render::ContextImpl::Entry *);
	void RemoveFromPropagate(Scaleform::Render::ContextImpl::Entry *);
	void Merge(Scaleform::Render::ContextImpl::Snapshot *);
};
class Scaleform::NewOverrideBase<69>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 69,
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
class Scaleform::List<Scaleform::Render::ContextImpl::Entry::PropagateNode,Scaleform::Render::ContextImpl::Entry::PropagateNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::Entry::PropagateNode> >
{
	struct ValueType;
private:
	List<Scaleform::Render::ContextImpl::Entry::PropagateNode,Scaleform::Render::ContextImpl::Entry::PropagateNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::Entry::PropagateNode> >(const Scaleform::List<Scaleform::Render::ContextImpl::Entry::PropagateNode,Scaleform::Render::ContextImpl::Entry::PropagateNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::Entry::PropagateNode> > &);
public:
	List<Scaleform::Render::ContextImpl::Entry::PropagateNode,Scaleform::Render::ContextImpl::Entry::PropagateNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::Entry::PropagateNode> >();
	void Clear();
	Scaleform::Render::ContextImpl::Entry::PropagateNode * GetFirst();
	Scaleform::Render::ContextImpl::Entry::PropagateNode * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Render::ContextImpl::Entry::PropagateNode *);
	bool IsLast(const Scaleform::Render::ContextImpl::Entry::PropagateNode *);
	bool IsNull(const Scaleform::Render::ContextImpl::Entry::PropagateNode *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::Render::ContextImpl::Entry::PropagateNode * GetPrev(const Scaleform::Render::ContextImpl::Entry::PropagateNode *);
	static Scaleform::Render::ContextImpl::Entry::PropagateNode * GetNext(const Scaleform::Render::ContextImpl::Entry::PropagateNode *);
	void PushFront(Scaleform::Render::ContextImpl::Entry::PropagateNode *);
	void PushBack(Scaleform::Render::ContextImpl::Entry::PropagateNode *);
	static void Remove(Scaleform::Render::ContextImpl::Entry::PropagateNode *);
	void BringToFront(Scaleform::Render::ContextImpl::Entry::PropagateNode *);
	void SendToBack(Scaleform::Render::ContextImpl::Entry::PropagateNode *);
	void PushListToFront(Scaleform::List<Scaleform::Render::ContextImpl::Entry::PropagateNode,Scaleform::Render::ContextImpl::Entry::PropagateNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::Entry::PropagateNode> > &);
	void PushListToBack(Scaleform::List<Scaleform::Render::ContextImpl::Entry::PropagateNode,Scaleform::Render::ContextImpl::Entry::PropagateNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::Entry::PropagateNode> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::Render::ContextImpl::Entry::PropagateNode,Scaleform::Render::ContextImpl::Entry::PropagateNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::Entry::PropagateNode> > &, Scaleform::Render::ContextImpl::Entry::PropagateNode *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::Render::ContextImpl::Entry::PropagateNode,Scaleform::Render::ContextImpl::Entry::PropagateNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::Entry::PropagateNode> > &, Scaleform::Render::ContextImpl::Entry::PropagateNode *);
	void PushListItemsToFront(Scaleform::Render::ContextImpl::Entry::PropagateNode *, Scaleform::Render::ContextImpl::Entry::PropagateNode *);
private:
	const Scaleform::List<Scaleform::Render::ContextImpl::Entry::PropagateNode,Scaleform::Render::ContextImpl::Entry::PropagateNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::Entry::PropagateNode> > & operator=(const Scaleform::List<Scaleform::Render::ContextImpl::Entry::PropagateNode,Scaleform::Render::ContextImpl::Entry::PropagateNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::Entry::PropagateNode> > &);
	Scaleform::ListNode<Scaleform::Render::ContextImpl::Entry::PropagateNode> Root; // 0x0
};
struct Scaleform::ListNode<Scaleform::Render::ContextImpl::Snapshot::HeapNode>
{
	Scaleform::Render::ContextImpl::Snapshot::HeapNode * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::ContextImpl::Snapshot::HeapNode * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::Render::ContextImpl::Snapshot::HeapNode>();
	Scaleform::Render::ContextImpl::Snapshot::HeapNode * GetPrev();
	Scaleform::Render::ContextImpl::Snapshot::HeapNode * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::ContextImpl::Snapshot::HeapNode *);
	void InsertNodeAfter(Scaleform::Render::ContextImpl::Snapshot::HeapNode *);
	void InsertNodeBefore(Scaleform::Render::ContextImpl::Snapshot::HeapNode *);
};
struct Scaleform::Render::ContextImpl::Snapshot::HeapNode :
	Scaleform::ListNode<Scaleform::Render::ContextImpl::Snapshot::HeapNode>,
	Scaleform::NewOverrideBase<69>
{
	Scaleform::Render::LinearHeap ChangeHeap; // 0x10
	HeapNode(Scaleform::MemoryHeap *);
	~HeapNode();
};
class Scaleform::List<Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::Snapshot::HeapNode> >
{
	struct ValueType;
private:
	List<Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::Snapshot::HeapNode> >(const Scaleform::List<Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::Snapshot::HeapNode> > &);
public:
	List<Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::Snapshot::HeapNode> >();
	void Clear();
	Scaleform::Render::ContextImpl::Snapshot::HeapNode * GetFirst();
	Scaleform::Render::ContextImpl::Snapshot::HeapNode * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Render::ContextImpl::Snapshot::HeapNode *);
	bool IsLast(const Scaleform::Render::ContextImpl::Snapshot::HeapNode *);
	bool IsNull(const Scaleform::Render::ContextImpl::Snapshot::HeapNode *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::Render::ContextImpl::Snapshot::HeapNode * GetPrev(const Scaleform::Render::ContextImpl::Snapshot::HeapNode *);
	static Scaleform::Render::ContextImpl::Snapshot::HeapNode * GetNext(const Scaleform::Render::ContextImpl::Snapshot::HeapNode *);
	void PushFront(Scaleform::Render::ContextImpl::Snapshot::HeapNode *);
	void PushBack(Scaleform::Render::ContextImpl::Snapshot::HeapNode *);
	static void Remove(Scaleform::Render::ContextImpl::Snapshot::HeapNode *);
	void BringToFront(Scaleform::Render::ContextImpl::Snapshot::HeapNode *);
	void SendToBack(Scaleform::Render::ContextImpl::Snapshot::HeapNode *);
	void PushListToFront(Scaleform::List<Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::Snapshot::HeapNode> > &);
	void PushListToBack(Scaleform::List<Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::Snapshot::HeapNode> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::Snapshot::HeapNode> > &, Scaleform::Render::ContextImpl::Snapshot::HeapNode *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::Snapshot::HeapNode> > &, Scaleform::Render::ContextImpl::Snapshot::HeapNode *);
	void PushListItemsToFront(Scaleform::Render::ContextImpl::Snapshot::HeapNode *, Scaleform::Render::ContextImpl::Snapshot::HeapNode *);
private:
	const Scaleform::List<Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::Snapshot::HeapNode> > & operator=(const Scaleform::List<Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::Snapshot::HeapNode> > &);
	Scaleform::ListNode<Scaleform::Render::ContextImpl::Snapshot::HeapNode> Root; // 0x0
};
Scaleform::Render::ContextImpl::Context * Scaleform::Render::ContextImpl::Entry::GetContext(); // 0x140312960
void Scaleform::Render::ContextImpl::Entry::destroyHelper(); // 0x1403139F0
void Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(); // 0x140313800
Scaleform::Render::ContextImpl::EntryData * Scaleform::Render::ContextImpl::Entry::getWritableData(unsigned long changeBits); // 0x140313E70
Scaleform::Render::ContextImpl::EntryData::~EntryData(); // 0x140311CD0
void Scaleform::Render::ContextImpl::EntryPage::AddEntriesToList(Scaleform::List2<Scaleform::Render::ContextImpl::Entry,Scaleform::Render::ContextImpl::EntryListAccessor> * plist); // 0x140312210
void Scaleform::Render::ContextImpl::EntryPage::RemoveEntriesFromList(Scaleform::List2<Scaleform::Render::ContextImpl::Entry,Scaleform::Render::ContextImpl::EntryListAccessor> * plist); // 0x1403133D0
bool Scaleform::Render::ContextImpl::EntryTable::AllocEntryPage(); // 0x140312360
void Scaleform::Render::ContextImpl::EntryTable::FreeEntryPage(Scaleform::Render::ContextImpl::EntryPage * ppage); // 0x140312850
Scaleform::Render::ContextImpl::Entry * Scaleform::Render::ContextImpl::EntryTable::AllocEntry(Scaleform::Render::ContextImpl::EntryData * pdata); // 0x1403122C0
void Scaleform::Render::ContextImpl::EntryTable::FreeEntry(Scaleform::Render::ContextImpl::Entry * p); // 0x1403127E0
void Scaleform::Render::ContextImpl::EntryTable::NextSnapshot(Scaleform::Render::ContextImpl::Snapshot * pnewSnapshot); // 0x140312E50
Scaleform::Render::ContextImpl::Snapshot::Snapshot(Scaleform::Render::ContextImpl::Context * pcontext, Scaleform::MemoryHeap * pheap); // 0x140311AA0
Scaleform::Render::ContextImpl::Snapshot::~Snapshot(); // 0x140311DB0
Scaleform::Render::ContextImpl::EntryChange * Scaleform::Render::ContextImpl::Snapshot::AddChangeItem(Scaleform::Render::ContextImpl::Entry * pentry, unsigned long changeBits); // 0x1403121A0
void Scaleform::Render::ContextImpl::Snapshot::Merge(Scaleform::Render::ContextImpl::Snapshot * pold); // 0x140312A10
Scaleform::Render::ContextImpl::RTHandle::HandleData::HandleData(Scaleform::Render::ContextImpl::Entry * entry, Scaleform::Render::ContextImpl::Context * context); // 0x140311950
Scaleform::Render::ContextImpl::RTHandle::HandleData::~HandleData(); // 0x140311CE0
Scaleform::Render::ContextImpl::RTHandle::RTHandle(Scaleform::Render::ContextImpl::Entry * entry); // 0x1403119D0
Scaleform::Render::ContextImpl::RTHandle::~RTHandle(); // 0x140311D70
bool Scaleform::Render::ContextImpl::RTHandle::NextCapture(Scaleform::Render::ContextImpl::RenderNotify * render); // 0x140312D60
Scaleform::Render::ContextImpl::Entry * Scaleform::Render::ContextImpl::RTHandle::GetRenderEntry(); // 0x140312970
Scaleform::Render::ContextImpl::RenderNotify::~RenderNotify(); // 0x140311D80
void Scaleform::Render::ContextImpl::RenderNotify::NewCapture(Scaleform::Render::ContextImpl::Context * context, bool hasChanges); // 0x140312CC0
void Scaleform::Render::ContextImpl::RenderNotify::ContextReleased(Scaleform::Render::ContextImpl::Context * context); // 0x1403126F0
void Scaleform::Render::ContextImpl::RenderNotify::ServiceQueues(); // 0x1403134C0
void Scaleform::Render::ContextImpl::RenderNotify::ReleaseAllContextData(); // 0x140313340
void Scaleform::Render::ContextImpl::RenderNotify::EndFrameContextNotify(); // 0x140312740
Scaleform::Render::ContextImpl::ContextCaptureNotify::~ContextCaptureNotify(); // 0x140311CC0
class Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor :
	Unassignable
{
public:
	ContextCaptureNotifyListVisitor(const Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor &);
	ContextCaptureNotifyListVisitor(Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,2,Scaleform::ArrayDefaultPolicy> &);
	~ContextCaptureNotifyListVisitor();
	void Execute(Scaleform::Render::ContextImpl::ContextCaptureNotify *);
	void Visit();
private:
	Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,2,Scaleform::ArrayDefaultPolicy> & List; // 0x8
};
void Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor::Visit(); // 0x140313700
class Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor_OnShutdown :
	Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor
{
public:
	ContextCaptureNotifyListVisitor_OnShutdown(Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor_OnShutdown &);
	ContextCaptureNotifyListVisitor_OnShutdown(const Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor_OnShutdown &);
	ContextCaptureNotifyListVisitor_OnShutdown(Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,2,Scaleform::ArrayDefaultPolicy> &, bool);
	virtual void Execute(Scaleform::Render::ContextImpl::ContextCaptureNotify *);
private:
	bool WaitFlag; // 0x10
public:
	virtual ~ContextCaptureNotifyListVisitor_OnShutdown();
};
void Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor_OnShutdown::Execute(Scaleform::Render::ContextImpl::ContextCaptureNotify * notify); // 0x1403127A0
class Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor_OnNextCapture :
	Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor
{
public:
	ContextCaptureNotifyListVisitor_OnNextCapture(Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor_OnNextCapture &);
	ContextCaptureNotifyListVisitor_OnNextCapture(const Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor_OnNextCapture &);
	ContextCaptureNotifyListVisitor_OnNextCapture(Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,2,Scaleform::ArrayDefaultPolicy> &, Scaleform::Render::ContextImpl::RenderNotify *);
	virtual void Execute(Scaleform::Render::ContextImpl::ContextCaptureNotify *);
private:
	Scaleform::Render::ContextImpl::RenderNotify * RNotify; // 0x10
public:
	virtual ~ContextCaptureNotifyListVisitor_OnNextCapture();
};
void Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor_OnNextCapture::Execute(Scaleform::Render::ContextImpl::ContextCaptureNotify * notify); // 0x140312780
class Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor_OnCapture :
	Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor
{
public:
	ContextCaptureNotifyListVisitor_OnCapture(Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor_OnCapture &);
	ContextCaptureNotifyListVisitor_OnCapture(const Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor_OnCapture &);
	ContextCaptureNotifyListVisitor_OnCapture(Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,2,Scaleform::ArrayDefaultPolicy> &);
	virtual void Execute(Scaleform::Render::ContextImpl::ContextCaptureNotify *);
	virtual ~ContextCaptureNotifyListVisitor_OnCapture();
};
void Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor_OnCapture::Execute(Scaleform::Render::ContextImpl::ContextCaptureNotify * notify); // 0x140312770
Scaleform::Render::ContextImpl::Context::Context(Scaleform::MemoryHeap * pheap); // 0x1403117A0
Scaleform::Render::ContextImpl::Context::~Context(); // 0x140311B90
Scaleform::Render::ContextImpl::Entry * Scaleform::Render::ContextImpl::Context::createEntryHelper(Scaleform::Render::ContextImpl::EntryData * pdata); // 0x140313910
void Scaleform::Render::ContextImpl::Context::destroySnapshot(Scaleform::Render::ContextImpl::Snapshot * p); // 0x140313C80
void Scaleform::Render::ContextImpl::Context::destroyNativeNodes(Scaleform::List2<Scaleform::Render::ContextImpl::Entry,Scaleform::Render::ContextImpl::EntryListAccessor> & destroyList); // 0x140313B80
void Scaleform::Render::ContextImpl::Context::clearRTHandle(Scaleform::Render::ContextImpl::Entry * entry); // 0x140313830
void Scaleform::Render::ContextImpl::Context::clearRTHandleList(); // 0x1403138A0
bool Scaleform::Render::ContextImpl::Context::HasChanges(); // 0x140312990
bool Scaleform::Render::ContextImpl::Context::Capture(); // 0x140312440
void Scaleform::Render::ContextImpl::Context::handleFinalizingSnaphot(); // 0x140313F20
void Scaleform::Render::ContextImpl::Context::Shutdown(bool waitFlag); // 0x140313550
bool Scaleform::Render::ContextImpl::Context::IsShutdownComplete(); // 0x1403129C0
bool Scaleform::Render::ContextImpl::Context::nextCapture_LockScope(Scaleform::Render::ContextImpl::Snapshot * * updateSnapshot, Scaleform::Render::ContextImpl::RenderNotify * pnotify, Scaleform::Render::ContextImpl::Context::CaptureMode mode); // 0x140314070
bool Scaleform::Render::ContextImpl::Context::NextCapture(Scaleform::Render::ContextImpl::RenderNotify * pnotify, Scaleform::Render::ContextImpl::Context::CaptureMode mode); // 0x140312D00
void Scaleform::Render::ContextImpl::Context::nextCapture_NotifyChanges(Scaleform::Render::ContextImpl::Snapshot * displaySnaphot, Scaleform::Render::ContextImpl::RenderNotify * pnotify); // 0x140314240
void Scaleform::Render::ContextImpl::Context::ForceUpdateImages(); // 0x1403127C0
void Scaleform::Render::ContextImpl::Context::AddCaptureNotify(Scaleform::Render::ContextImpl::ContextCaptureNotify * notify); // 0x140312100
void Scaleform::Render::ContextImpl::Context::shutdownRendering_NoLock(); // 0x140314370
void Scaleform::Render::ContextImpl::Context::PropagateChangesUp(); // 0x140312FA0
class Scaleform::Render::DepthUpdateArrayPOD<Scaleform::Render::ContextImpl::Entry::PropagateNode *>
{
	enum <unnamed-enum-MaxDepthReserve>
	{
		MaxDepthReserve = 32,
	};
private:
	Scaleform::Render::ContextImpl::Entry::PropagateNode * * pDepth; // 0x0
	unsigned long DepthUsed; // 0x8
	unsigned long DepthAvailable; // 0xC
	Scaleform::MemoryHeap * pHeap; // 0x10
	Scaleform::Render::ContextImpl::Entry::PropagateNode * NullValue; // 0x18
	Scaleform::Render::ContextImpl::Entry::PropagateNode * ArrayReserve[32]; // 0x20
	bool grow(unsigned long);
public:
	DepthUpdateArrayPOD<Scaleform::Render::ContextImpl::Entry::PropagateNode *>(Scaleform::MemoryHeap *, Scaleform::Render::ContextImpl::Entry::PropagateNode *);
	~DepthUpdateArrayPOD<Scaleform::Render::ContextImpl::Entry::PropagateNode *>();
	unsigned long GetDepthUsed();
	Scaleform::Render::ContextImpl::Entry::PropagateNode * Get(unsigned long);
	void Set(unsigned long, Scaleform::Render::ContextImpl::Entry::PropagateNode *);
	void Link(unsigned long, Scaleform::Render::ContextImpl::Entry::PropagateNode * *, Scaleform::Render::ContextImpl::Entry::PropagateNode *);
	void Clear();
};
unsigned long Scaleform::Render::ContextImpl::ConstructCopyCalls; // 0x140A72128
unsigned long Scaleform::Render::ContextImpl::DestroyCalls; // 0x140A7212C
unsigned long Scaleform::Render::ContextImpl::CopyCalls; // 0x140A72130
typedef Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63> Scaleform::Render::ContextImpl::ChangeBuffer;//decompilation failure at 140A72128!
//decompilation failure at 140A7212C!
//decompilation failure at 140A72130!
void __fastcall Scaleform::Render::ContextImpl::Context::Context(
        Scaleform::Render::ContextImpl::Context *this,
        Scaleform::MemoryHeap *pheap)
{
  Scaleform::Render::ContextImpl::ContextLock *v3; // rax
  Scaleform::Render::ContextImpl::ContextLock *v4; // rdi
  Scaleform::RefCountVImpl *pObject; // rcx
  unsigned int CurrentThreadId; // eax
  Scaleform::MemoryHeap *v7; // rcx
  Scaleform::Render::ContextImpl::Snapshot *v8; // rax
  Scaleform::Render::ContextImpl::Snapshot *v9; // rax
  Scaleform::Render::ContextImpl::Snapshot *v10; // rax

  this->pHeap = pheap;
  this->Table.pHeap = pheap;
  this->Table.pContext = this;
  this->Table.EntryPages.Root.pPrev = (Scaleform::Render::ContextImpl::EntryPageBase *)&this->Table.EntryPages;
  this->Table.EntryPages.Root.pNext = (Scaleform::Render::ContextImpl::EntryPageBase *)&this->Table.EntryPages;
  this->Table.FreeNodes.Root.PNode.pPrev = (Scaleform::Render::ContextImpl::Entry::PropagateNode *)-1i64;
  this->Table.FreeNodes.Root.PNode.pNext = (Scaleform::Render::ContextImpl::Entry::PropagateNode *)-1i64;
  this->Table.FreeNodes.Root.pPrev = &this->Table.FreeNodes.Root;
  this->Table.FreeNodes.Root.RefCount = (unsigned __int64)&this->Table.FreeNodes;
  this->Table.pActiveSnapshot = 0i64;
  this->pCaptureLock.pObject = 0i64;
  this->CaptureNotifyList.Data.Data = 0i64;
  this->CaptureNotifyList.Data.Size = 0i64;
  this->CaptureNotifyList.Data.Policy.Capacity = 0i64;
  this->pRenderer = 0i64;
  this->NextCaptureCalledInFrame = 0;
  this->DIChangesRequired = 0;
  this->ShutdownRequested = 0;
  this->pShutdownEvent = 0i64;
  this->RenderNode.pPrev = (Scaleform::Render::ContextImpl::RenderNotify::ContextNode *)-1i64;
  this->RenderNode.pNext = (Scaleform::Render::ContextImpl::RenderNotify::ContextNode *)-1i64;
  this->RenderNode.pContext = this;
  this->RTHandleList.Root.pPrev = (Scaleform::Render::ContextImpl::RTHandle::HandleData *)&this->RenderNode.8;
  this->RTHandleList.Root.pNext = (Scaleform::Render::ContextImpl::RTHandle::HandleData *)&this->RenderNode.8;
  v3 = (Scaleform::Render::ContextImpl::ContextLock *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                        Scaleform::Memory::pGlobalHeap,
                                                        72i64,
                                                        0i64);
  v4 = v3;
  if ( v3 )
  {
    v3->__vftable = (Scaleform::Render::ContextImpl::ContextLock_vtbl *)&Scaleform::RefCountImplCore::`vftable';
    v3->RefCount = 1;
    v3->__vftable = (Scaleform::Render::ContextImpl::ContextLock_vtbl *)&Scaleform::Render::ContextImpl::ContextLock::`vftable';
    Scaleform::Lock::Lock(&v3->LockObject, 0);
    v4->pContext = this;
  }
  else
  {
    v4 = 0i64;
  }
  pObject = (Scaleform::RefCountVImpl *)this->pCaptureLock.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->pCaptureLock.pObject = v4;
  CurrentThreadId = Concurrency::details::platform::GetCurrentThreadId();
  v7 = this->pHeap;
  this->CreateThreadId = CurrentThreadId;
  this->MultiThreadedUse = 0;
  v8 = (Scaleform::Render::ContextImpl::Snapshot *)v7->Alloc(v7, 160ui64, 0i64);
  if ( v8 )
    Scaleform::Render::ContextImpl::Snapshot::Snapshot(v8, this, this->pHeap);
  else
    v9 = 0i64;
  this->pSnapshots[0] = v9;
  this->pSnapshots[3] = 0i64;
  this->pSnapshots[2] = 0i64;
  this->pSnapshots[1] = 0i64;
  this->FinalizedFrameId = 0i64;
  v10 = this->pSnapshots[0];
  this->SnapshotFrameIds[1] = 0i64;
  this->SnapshotFrameIds[2] = 0i64;
  this->SnapshotFrameIds[3] = 0i64;
  this->SnapshotFrameIds[0] = 1i64;
  this->Table.pActiveSnapshot = v10;
  this->CaptureCalled = 0;
}

void __fastcall Scaleform::Render::ContextImpl::RTHandle::HandleData::HandleData(
        Scaleform::Render::ContextImpl::RTHandle::HandleData *this,
        Scaleform::Render::ContextImpl::Entry *entry,
        Scaleform::Render::ContextImpl::Context *context)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  this->__vftable = (Scaleform::Render::ContextImpl::RTHandle::HandleData_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->pPrev = (Scaleform::Render::ContextImpl::RTHandle::HandleData *)-1i64;
  this->pNext = (Scaleform::Render::ContextImpl::RTHandle::HandleData *)-1i64;
  this->__vftable = (Scaleform::Render::ContextImpl::RTHandle::HandleData_vtbl *)&Scaleform::Render::ContextImpl::RTHandle::HandleData::`vftable';
  pObject = (Scaleform::RefCountVImpl *)context->pCaptureLock.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  this->pContextLock.pObject = context->pCaptureLock.pObject;
  this->pEntry = entry;
  this->State = State_InitPending;
}

void __fastcall Scaleform::Render::ContextImpl::RTHandle::RTHandle(
        Scaleform::Render::ContextImpl::RTHandle *this,
        Scaleform::Render::ContextImpl::Entry *entry)
{
  Scaleform::Render::ContextImpl::RTHandle::HandleData *v2; // rbx
  Scaleform::Render::ContextImpl::Context *v5; // rbp
  Scaleform::Render::ContextImpl::RTHandle::HandleData *v6; // rax
  Scaleform::Render::ContextImpl::RTHandle::HandleData *v7; // rax
  Scaleform::Render::ContextImpl::ContextLock *pObject; // rbx
  Scaleform::Render::ContextImpl::RTHandle::HandleData *v9; // rcx

  v2 = 0i64;
  this->pData.pObject = 0i64;
  if ( entry )
  {
    v5 = *(Scaleform::Render::ContextImpl::Context **)(*(_QWORD *)(((unsigned __int64)entry & 0xFFFFFFFFFFFFF000ui64)
                                                                 + 0x18)
                                                     + 16i64);
    v6 = (Scaleform::Render::ContextImpl::RTHandle::HandleData *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                                   Scaleform::Memory::pGlobalHeap,
                                                                   56i64,
                                                                   0i64);
    if ( v6 )
    {
      Scaleform::Render::ContextImpl::RTHandle::HandleData::HandleData(v6, entry, v5);
      v2 = v7;
    }
    if ( this->pData.pObject )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)this->pData.pObject);
    this->pData.pObject = v2;
    pObject = v5->pCaptureLock.pObject;
    Scaleform::Lock::DoLock(&pObject->LockObject);
    entry->pNative = (Scaleform::Render::ContextImpl::EntryData *)((unsigned __int64)entry->pNative | 1);
    v9 = this->pData.pObject;
    v9->pPrev = v5->RTHandleList.Root.pPrev;
    v9->pNext = (Scaleform::Render::ContextImpl::RTHandle::HandleData *)&v5->RenderNode.8;
    v5->RTHandleList.Root.pPrev->pNext = v9;
    v5->RTHandleList.Root.pPrev = v9;
    Scaleform::Lock::Unlock(&pObject->LockObject);
  }
}

void __fastcall Scaleform::Render::ContextImpl::Snapshot::Snapshot(
        Scaleform::Render::ContextImpl::Snapshot *this,
        Scaleform::Render::ContextImpl::Context *pcontext,
        Scaleform::MemoryHeap *pheap)
{
  Scaleform::List<Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::Snapshot::HeapNode> > *p_Heaps; // rbx
  Scaleform::Render::ContextImpl::Snapshot::HeapNode *v5; // rax
  Scaleform::Render::ContextImpl::Snapshot::HeapNode *v6; // rcx

  this->pContext = pcontext;
  this->pPrev = (Scaleform::Render::ContextImpl::Snapshot *)-1i64;
  p_Heaps = &this->Heaps;
  this->pNext = (Scaleform::Render::ContextImpl::Snapshot *)-1i64;
  this->SnapshotPages.Root.pPrev = (Scaleform::Render::ContextImpl::SnapshotPage *)&this->SnapshotPages;
  this->SnapshotPages.Root.pNext = (Scaleform::Render::ContextImpl::SnapshotPage *)&this->SnapshotPages;
  this->Changes.pPages = 0i64;
  this->Changes.pLast = 0i64;
  this->pFreeChangeNodes = 0i64;
  this->PropagateEntrys.Root.pPrev = (Scaleform::Render::ContextImpl::Entry::PropagateNode *)&this->PropagateEntrys;
  this->PropagateEntrys.Root.pNext = (Scaleform::Render::ContextImpl::Entry::PropagateNode *)&this->PropagateEntrys;
  this->DestroyedNodes.Root.PNode.pPrev = (Scaleform::Render::ContextImpl::Entry::PropagateNode *)-1i64;
  this->DestroyedNodes.Root.PNode.pNext = (Scaleform::Render::ContextImpl::Entry::PropagateNode *)-1i64;
  this->DestroyedNodes.Root.pPrev = &this->DestroyedNodes.Root;
  this->DestroyedNodes.Root.RefCount = (unsigned __int64)&this->DestroyedNodes;
  this->ForceUpdateImagesFlag = 0;
  this->Heaps.Root.pPrev = (Scaleform::Render::ContextImpl::Snapshot::HeapNode *)&this->Heaps;
  this->Heaps.Root.pNext = (Scaleform::Render::ContextImpl::Snapshot::HeapNode *)&this->Heaps;
  v5 = (Scaleform::Render::ContextImpl::Snapshot::HeapNode *)pheap->Alloc(pheap, 56i64, 0i64);
  v6 = v5;
  if ( v5 )
  {
    v5->pPrev = (Scaleform::Render::ContextImpl::Snapshot::HeapNode *)-1i64;
    v5->pNext = (Scaleform::Render::ContextImpl::Snapshot::HeapNode *)-1i64;
    v5->ChangeHeap.pHeap = pheap;
    v5->ChangeHeap.Granularity = 0x2000i64;
    v5->ChangeHeap.pPagePool = 0i64;
    v5->ChangeHeap.pLastPage = 0i64;
    v5->ChangeHeap.MaxPages = 0i64;
  }
  else
  {
    v6 = 0i64;
  }
  v6->pPrev = p_Heaps->Root.pPrev;
  v6->pNext = (Scaleform::Render::ContextImpl::Snapshot::HeapNode *)p_Heaps;
  p_Heaps->Root.pPrev->pNext = v6;
  p_Heaps->Root.pPrev = v6;
}

void __fastcall Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32>::~PagedItemBuffer<Scaleform::Render::VertexElement,32>(
        Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32> *this)
{
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32>::Page *pPages; // rbx
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32>::Page *v2; // rax

  pPages = this->pPages;
  v2 = 0i64;
  if ( this->pPages )
  {
    do
    {
      if ( v2 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v2);
      v2 = pPages;
      pPages = pPages->pNext;
    }
    while ( pPages );
    if ( v2 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v2);
    this->pPages = 0i64;
    this->pLast = 0i64;
  }
  else
  {
    this->pPages = 0i64;
    this->pLast = 0i64;
  }
}

void __fastcall Scaleform::Render::ContextImpl::Context::~Context(Scaleform::Render::ContextImpl::Context *this)
{
  Scaleform::Render::ContextImpl::Snapshot *v2; // r8
  Scaleform::Render::ContextImpl::EntryPageBase *pNext; // rdx
  Scaleform::List<Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::ListNode<Scaleform::Render::ContextImpl::SnapshotPage> > *i; // r8
  Scaleform::Render::ContextImpl::SnapshotPage *pSnapshotPage; // rcx
  Scaleform::Render::ContextImpl::ContextLock *pObject; // rbx
  unsigned __int64 Size; // rdi
  Scaleform::RefCountVImpl **j; // rbx
  Scaleform::RefCountVImpl *v9; // rcx

  Scaleform::Render::ContextImpl::Context::Shutdown(this, 1);
  Scaleform::Render::ContextImpl::Context::destroySnapshot(this, this->pSnapshots[3]);
  Scaleform::Render::ContextImpl::Context::destroySnapshot(this, this->pSnapshots[2]);
  Scaleform::Render::ContextImpl::Context::destroySnapshot(this, this->pSnapshots[1]);
  v2 = this->pSnapshots[0];
  if ( v2 )
  {
    pNext = this->Table.EntryPages.Root.pNext;
    for ( i = &v2->SnapshotPages;
          pNext != (Scaleform::Render::ContextImpl::EntryPageBase *)&this->Table.EntryPages;
          pNext = pNext->pNext )
    {
      pSnapshotPage = pNext->pSnapshotPage;
      pSnapshotPage->pPrev = i->Root.pPrev;
      pSnapshotPage->pNext = (Scaleform::Render::ContextImpl::SnapshotPage *)i;
      i->Root.pPrev->pNext = pSnapshotPage;
      i->Root.pPrev = pSnapshotPage;
    }
    Scaleform::Render::ContextImpl::Context::destroySnapshot(this, this->pSnapshots[0]);
  }
  pObject = this->pCaptureLock.pObject;
  Scaleform::Lock::DoLock(&pObject->LockObject);
  Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->CaptureNotifyList.Data,
    &this->CaptureNotifyList,
    0i64);
  Scaleform::Lock::Unlock(&pObject->LockObject);
  Size = this->CaptureNotifyList.Data.Size;
  for ( j = (Scaleform::RefCountVImpl **)&this->CaptureNotifyList.Data.Data[Size - 1]; Size; --Size )
  {
    if ( *j )
      Scaleform::RefCountImpl::Release(*j);
    --j;
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->CaptureNotifyList.Data.Data);
  v9 = (Scaleform::RefCountVImpl *)this->pCaptureLock.pObject;
  if ( v9 )
    Scaleform::RefCountImpl::Release(v9);
}

void __fastcall Scaleform::Render::ContextImpl::ContextCaptureNotify::~ContextCaptureNotify(
        Scaleform::Render::ContextImpl::ContextCaptureNotify *this)
{
  this->__vftable = (Scaleform::Render::ContextImpl::ContextCaptureNotify_vtbl *)&Scaleform::Render::ContextImpl::ContextCaptureNotify::`vftable';
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::Render::ContextImpl::EntryData::~EntryData(Scaleform::Render::ContextImpl::EntryData *this)
{
  this->__vftable = (Scaleform::Render::ContextImpl::EntryData_vtbl *)&Scaleform::Render::ContextImpl::EntryData::`vftable';
}

void __fastcall Scaleform::Render::ContextImpl::RTHandle::HandleData::~HandleData(
        Scaleform::Render::ContextImpl::RTHandle::HandleData *this)
{
  Scaleform::Render::ContextImpl::ContextLock *pObject; // rbx
  Scaleform::Render::ContextImpl::Entry *pEntry; // rax
  Scaleform::RefCountVImpl *v4; // rcx

  pObject = this->pContextLock.pObject;
  this->__vftable = (Scaleform::Render::ContextImpl::RTHandle::HandleData_vtbl *)&Scaleform::Render::ContextImpl::RTHandle::HandleData::`vftable';
  Scaleform::Lock::DoLock(&pObject->LockObject);
  if ( this->pContextLock.pObject->pContext )
  {
    pEntry = this->pEntry;
    if ( pEntry )
    {
      pEntry->pNative = (Scaleform::Render::ContextImpl::EntryData *)((unsigned __int64)pEntry->pNative & ~1ui64);
      this->pPrev->pNext = this->pNext;
      this->pNext->pPrev = this->pPrev;
      this->pPrev = (Scaleform::Render::ContextImpl::RTHandle::HandleData *)-1i64;
      this->pNext = (Scaleform::Render::ContextImpl::RTHandle::HandleData *)-1i64;
    }
  }
  Scaleform::Lock::Unlock(&pObject->LockObject);
  v4 = (Scaleform::RefCountVImpl *)this->pContextLock.pObject;
  if ( v4 )
    Scaleform::RefCountImpl::Release(v4);
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::Render::ContextImpl::RTHandle::~RTHandle(Scaleform::Render::ContextImpl::RTHandle *this)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  pObject = (Scaleform::RefCountVImpl *)this->pData.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
}

void __fastcall Scaleform::Render::ContextImpl::RenderNotify::~RenderNotify(
        Scaleform::Render::ContextImpl::RenderNotify *this)
{
  this->__vftable = (Scaleform::Render::ContextImpl::RenderNotify_vtbl *)&Scaleform::Render::ContextImpl::RenderNotify::`vftable';
  Scaleform::Render::ContextImpl::RenderNotify::ReleaseAllContextData(this);
  Scaleform::RefCountImplCore::~RefCountImplCore(&this->ServiceCommandInstance);
}

void __fastcall Scaleform::Render::ContextImpl::Snapshot::~Snapshot(Scaleform::Render::ContextImpl::Snapshot *this)
{
  Scaleform::List<Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::Snapshot::HeapNode> > *p_Heaps; // rsi
  Scaleform::Render::ContextImpl::Snapshot::HeapNode *pNext; // rbx
  unsigned __int64 MaxPages; // rax
  Scaleform::Render::LinearHeap::PageType *v5; // rdi
  Scaleform::MemoryHeap *pHeap; // rcx
  Scaleform::Render::ContextImpl::SnapshotPage *v7; // rdx
  Scaleform::Render::ContextImpl::SnapshotPage *pNewerSnapshotPage; // rcx
  Scaleform::Render::ContextImpl::SnapshotPage *pOlderSnapshotPage; // rcx

  p_Heaps = &this->Heaps;
  if ( (Scaleform::List<Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::Snapshot::HeapNode> > *)this->Heaps.Root.pNext != &this->Heaps )
  {
    do
    {
      pNext = this->Heaps.Root.pNext;
      pNext->pPrev->pNext = pNext->pNext;
      pNext->pNext->Scaleform::ListNode<Scaleform::Render::ContextImpl::Snapshot::HeapNode>::$1A2924EEF989C2915780FE7E52FAB9F2::pPrev = pNext->pPrev;
      pNext->pPrev = (Scaleform::Render::ContextImpl::Snapshot::HeapNode *)-1i64;
      pNext->pNext = (Scaleform::Render::ContextImpl::Snapshot::HeapNode *)-1i64;
      MaxPages = pNext->ChangeHeap.MaxPages;
      if ( MaxPages )
      {
        v5 = &pNext->ChangeHeap.pPagePool[MaxPages - 1];
        do
        {
          --pNext->ChangeHeap.MaxPages;
          if ( v5->pStart )
            ((void (__fastcall *)(Scaleform::MemoryHeap *))pNext->ChangeHeap.pHeap->Free)(pNext->ChangeHeap.pHeap);
          --v5;
        }
        while ( pNext->ChangeHeap.MaxPages );
        pHeap = pNext->ChangeHeap.pHeap;
        --pNext->ChangeHeap.MaxPages;
        pHeap->Free(pHeap, pNext->ChangeHeap.pPagePool);
      }
      pNext->ChangeHeap.pLastPage = 0i64;
      pNext->ChangeHeap.pPagePool = 0i64;
      pNext->ChangeHeap.MaxPages = 0i64;
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pNext);
    }
    while ( (Scaleform::List<Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::Snapshot::HeapNode> > *)p_Heaps->Root.pNext != p_Heaps );
  }
  while ( (Scaleform::List<Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::ListNode<Scaleform::Render::ContextImpl::SnapshotPage> > *)this->SnapshotPages.Root.pNext != &this->SnapshotPages )
  {
    v7 = this->SnapshotPages.Root.pNext;
    v7->pPrev->pNext = v7->pNext;
    v7->pNext->Scaleform::ListNode<Scaleform::Render::ContextImpl::SnapshotPage>::$C71E71A6F68E478737B35C69B8C2A890::pPrev = v7->pPrev;
    pNewerSnapshotPage = v7->pNewerSnapshotPage;
    v7->pPrev = (Scaleform::Render::ContextImpl::SnapshotPage *)-1i64;
    v7->pNext = (Scaleform::Render::ContextImpl::SnapshotPage *)-1i64;
    if ( pNewerSnapshotPage )
      pNewerSnapshotPage->pOlderSnapshotPage = v7->pOlderSnapshotPage;
    pOlderSnapshotPage = v7->pOlderSnapshotPage;
    if ( pOlderSnapshotPage )
      pOlderSnapshotPage->pNewerSnapshotPage = v7->pNewerSnapshotPage;
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  }
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32>::~PagedItemBuffer<Scaleform::Render::VertexElement,32>((Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32> *)&this->Changes);
}

void __fastcall Scaleform::Render::ContextImpl::Context::AddCaptureNotify(
        Scaleform::Render::ContextImpl::Context *this,
        Scaleform::Render::ContextImpl::ContextCaptureNotify *notify)
{
  Scaleform::Render::ContextImpl::ContextLock *pObject; // rbx
  Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify> *v5; // rdi

  pObject = this->pCaptureLock.pObject;
  Scaleform::Lock::DoLock(&pObject->LockObject);
  if ( notify )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)notify);
  Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->CaptureNotifyList.Data,
    &this->CaptureNotifyList,
    this->CaptureNotifyList.Data.Size + 1);
  v5 = &this->CaptureNotifyList.Data.Data[this->CaptureNotifyList.Data.Size - 1];
  if ( v5 )
  {
    if ( notify )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)notify);
    v5->pObject = notify;
  }
  if ( notify )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)notify);
  Scaleform::Lock::Unlock(&pObject->LockObject);
}

Scaleform::Render::ContextImpl::EntryChange *__fastcall Scaleform::Render::ContextImpl::Snapshot::AddChangeItem(
        Scaleform::Render::ContextImpl::Snapshot *this,
        Scaleform::Render::ContextImpl::Entry *pentry,
        unsigned int changeBits)
{
  Scaleform::Render::ContextImpl::EntryChange *pFreeChangeNodes; // r9
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63> *p_Changes; // rbx
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>::Page *pLast; // rdx
  __int64 Count; // rcx
  Scaleform::Render::ContextImpl::EntryChange *result; // rax

  pFreeChangeNodes = this->pFreeChangeNodes;
  if ( pFreeChangeNodes )
  {
    this->pFreeChangeNodes = pFreeChangeNodes->pNextFreeNode;
  }
  else
  {
    p_Changes = &this->Changes;
    Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>::ensureCountAvailable(
      &this->Changes,
      1u);
    pLast = p_Changes->pLast;
    Count = pLast->Count;
    pFreeChangeNodes = &pLast->Items[Count];
    pLast->Count = Count + 1;
  }
  pFreeChangeNodes->pNode = pentry;
  result = pFreeChangeNodes;
  pFreeChangeNodes->ChangeBits = changeBits;
  return result;
}

void __fastcall Scaleform::Render::ContextImpl::EntryPage::AddEntriesToList(
        Scaleform::Render::ContextImpl::EntryPage *this,
        Scaleform::List2<Scaleform::Render::ContextImpl::Entry,Scaleform::Render::ContextImpl::EntryListAccessor> *plist)
{
  $4DB1FF62457FE652BDDF8B269D434822 *v2; // r9
  __int64 v3; // r10
  Scaleform::Render::ContextImpl::Entry *v4; // r8
  Scaleform::Render::ContextImpl::Entry *v5; // rcx

  v2 = &this->Entries[1].8;
  v3 = 12i64;
  do
  {
    v2[-8].pNext = plist->Root.pPrev;
    v2[-7].RefCount = (unsigned __int64)plist;
    plist->Root.pPrev->RefCount = (unsigned __int64)&v2[-8];
    plist->Root.pPrev = (Scaleform::Render::ContextImpl::Entry *)&v2[-8];
    v2[-1].RefCount = (unsigned __int64)&v2[-8];
    v2->RefCount = (unsigned __int64)plist;
    plist->Root.pPrev->RefCount = (unsigned __int64)&v2[-1];
    plist->Root.pPrev = (Scaleform::Render::ContextImpl::Entry *)&v2[-1];
    v2[6].RefCount = (unsigned __int64)&v2[-1];
    v2[7].RefCount = (unsigned __int64)plist;
    plist->Root.pPrev->RefCount = (unsigned __int64)&v2[6];
    plist->Root.pPrev = (Scaleform::Render::ContextImpl::Entry *)&v2[6];
    v2[13].RefCount = (unsigned __int64)&v2[6];
    v4 = (Scaleform::Render::ContextImpl::Entry *)&v2[20];
    v2[14].RefCount = (unsigned __int64)plist;
    plist->Root.pPrev->RefCount = (unsigned __int64)&v2[13];
    plist->Root.pPrev = (Scaleform::Render::ContextImpl::Entry *)&v2[13];
    v2[20].RefCount = (unsigned __int64)&v2[13];
    v5 = (Scaleform::Render::ContextImpl::Entry *)&v2[27];
    v2[21].RefCount = (unsigned __int64)plist;
    v2 += 42;
    plist->Root.pPrev->RefCount = (unsigned __int64)v4;
    plist->Root.pPrev = v4;
    v5->pPrev = v4;
    v2[-14].RefCount = (unsigned __int64)plist;
    plist->Root.pPrev->RefCount = (unsigned __int64)v5;
    plist->Root.pPrev = v5;
    --v3;
  }
  while ( v3 );
}

Scaleform::Render::ContextImpl::Entry *__fastcall Scaleform::Render::ContextImpl::EntryTable::AllocEntry(
        Scaleform::Render::ContextImpl::EntryTable *this,
        Scaleform::Render::ContextImpl::EntryData *pdata)
{
  Scaleform::Render::ContextImpl::Entry *result; // rax
  Scaleform::Render::ContextImpl::Entry *pNext; // r9

  if ( (Scaleform::List2<Scaleform::Render::ContextImpl::Entry,Scaleform::Render::ContextImpl::EntryListAccessor> *)this->FreeNodes.Root.pNext == &this->FreeNodes
    && !Scaleform::Render::ContextImpl::EntryTable::AllocEntryPage(this) )
  {
    return 0i64;
  }
  pNext = this->FreeNodes.Root.pNext;
  pNext->pPrev->RefCount = pNext->RefCount;
  pNext->pNext->$4DB1FF62457FE652BDDF8B269D434822::pPrev = pNext->pPrev;
  result = pNext;
  ++*(_DWORD *)(((unsigned __int64)pNext & 0xFFFFFFFFFFFFF000ui64) + 0x10);
  *(_QWORD *)(*(_QWORD *)(((unsigned __int64)pNext & 0xFFFFFFFFFFFFF000ui64) + 0x20)
            + 8i64 * (unsigned int)((int)((_DWORD)pNext - ((unsigned int)pNext & 0xFFFFF000) - 56) / 56)
            + 40) = pdata;
  return result;
}

bool __fastcall Scaleform::Render::ContextImpl::EntryTable::AllocEntryPage(
        Scaleform::Render::ContextImpl::EntryTable *this)
{
  Scaleform::Render::ContextImpl::EntryPage *v2; // rax
  Scaleform::Render::ContextImpl::EntryPage *v3; // rbx
  Scaleform::Render::ContextImpl::SnapshotPage *v4; // rax
  bool result; // al
  Scaleform::Render::ContextImpl::Snapshot *pActiveSnapshot; // rax

  v2 = (Scaleform::Render::ContextImpl::EntryPage *)this->pHeap->Alloc(this->pHeap, 4088i64, 4096i64, 0i64);
  v3 = v2;
  if ( !v2 )
    return 0;
  memset(v2, 0, sizeof(Scaleform::Render::ContextImpl::EntryPage));
  v4 = (Scaleform::Render::ContextImpl::SnapshotPage *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64, __int64))this->pHeap->Alloc)(
                                                         this->pHeap,
                                                         616i64,
                                                         16i64);
  if ( v4 )
  {
    v4->pPrev = 0i64;
    v4->pNext = 0i64;
    v4->pEntryPage = v3;
    v4->pOlderSnapshotPage = 0i64;
    v4->pNewerSnapshotPage = 0i64;
  }
  else
  {
    v4 = 0i64;
  }
  v3->pSnapshotPage = v4;
  if ( !v4 )
  {
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v3);
    return 0;
  }
  v3->pDisplaySnapshotPage = 0i64;
  pActiveSnapshot = this->pActiveSnapshot;
  v3->UseCount = 0;
  v3->pSnapshot = pActiveSnapshot;
  Scaleform::Render::ContextImpl::EntryPage::AddEntriesToList(v3, &this->FreeNodes);
  v3->pPrev = this->EntryPages.Root.pPrev;
  v3->pNext = (Scaleform::Render::ContextImpl::EntryPageBase *)&this->EntryPages;
  this->EntryPages.Root.pPrev->pNext = v3;
  result = 1;
  this->EntryPages.Root.pPrev = v3;
  return result;
}

char __fastcall Scaleform::Render::ContextImpl::Context::Capture(Scaleform::Render::ContextImpl::Context *this)
{
  Scaleform::Render::ContextImpl::ContextLock *pObject; // rbx
  Scaleform::Render::ContextImpl::Snapshot *v4; // rdi
  Scaleform::Render::ContextImpl::EntryPageBase *pNext; // rdx
  Scaleform::List<Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::ListNode<Scaleform::Render::ContextImpl::SnapshotPage> > *i; // r8
  Scaleform::Render::ContextImpl::SnapshotPage *pSnapshotPage; // rcx
  Scaleform::Render::ContextImpl::Snapshot *v8; // rdx
  Scaleform::Render::ContextImpl::Snapshot *v9; // rsi
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>::Page *j; // rdx
  unsigned int k; // ecx
  Scaleform::Render::ContextImpl::Entry *pNode; // r8
  Scaleform::Render::ContextImpl::Snapshot *v13; // rax
  Scaleform::Render::ContextImpl::Snapshot *v14; // rax
  Scaleform::Render::ContextImpl::Snapshot *v15; // rdi
  Scaleform::Render::ContextImpl::Snapshot *v16; // r14
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>::Page *m; // r14
  unsigned int n; // edi
  Scaleform::Render::ContextImpl::Entry *v19; // rsi
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r15
  unsigned __int64 v23; // rcx
  Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor v24; // [rsp+20h] [rbp-38h] BYREF

  Scaleform::Render::ContextImpl::Context::PropagateChangesUp(this);
  if ( this->ShutdownRequested )
    return 0;
  pObject = this->pCaptureLock.pObject;
  Scaleform::Lock::DoLock(&pObject->LockObject);
  Scaleform::Render::ContextImpl::Context::handleFinalizingSnaphot(this);
  v4 = this->pSnapshots[0];
  pNext = this->Table.EntryPages.Root.pNext;
  for ( i = &v4->SnapshotPages;
        pNext != (Scaleform::Render::ContextImpl::EntryPageBase *)&this->Table.EntryPages;
        pNext = pNext->pNext )
  {
    pSnapshotPage = pNext->pSnapshotPage;
    pSnapshotPage->pPrev = i->Root.pPrev;
    pSnapshotPage->pNext = (Scaleform::Render::ContextImpl::SnapshotPage *)i;
    i->Root.pPrev->pNext = pSnapshotPage;
    i->Root.pPrev = pSnapshotPage;
  }
  v8 = this->pSnapshots[1];
  if ( v8 )
  {
    Scaleform::Render::ContextImpl::Snapshot::Merge(v4, v8);
    v9 = this->pSnapshots[1];
    if ( v9 )
    {
      Scaleform::Render::ContextImpl::Snapshot::~Snapshot(this->pSnapshots[1]);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v9);
    }
  }
  this->SnapshotFrameIds[1] = this->SnapshotFrameIds[0];
  this->pSnapshots[1] = v4;
  for ( j = v4->Changes.pPages; j; j = j->pNext )
  {
    for ( k = 0; k < j->Count; ++k )
    {
      pNode = j->Items[k].pNode;
      if ( pNode )
        pNode->pPrev = 0i64;
    }
  }
  v13 = (Scaleform::Render::ContextImpl::Snapshot *)this->pHeap->Alloc(this->pHeap, 160i64, 0i64);
  if ( v13 )
  {
    Scaleform::Render::ContextImpl::Snapshot::Snapshot(v13, this, this->pHeap);
    v15 = v14;
  }
  else
  {
    v15 = 0i64;
  }
  Scaleform::Render::ContextImpl::EntryTable::NextSnapshot(&this->Table, v15);
  ++this->SnapshotFrameIds[0];
  v16 = this->pSnapshots[2];
  this->pSnapshots[0] = v15;
  if ( v16 )
  {
    for ( m = v16->Changes.pPages; m; m = m->pNext )
    {
      for ( n = 0; n < m->Count; ++n )
      {
        v19 = m->Items[n].pNode;
        if ( v19 && (m->Items[n].ChangeBits & 0x80000000) == 0 )
        {
          v20 = *(_QWORD *)(((unsigned __int64)v19 & 0xFFFFFFFFFFFFF000ui64) + 0x28);
          v21 = (unsigned int)((int)((_DWORD)v19 - ((unsigned int)v19 & 0xFFFFF000) - 56) / 56);
          v22 = *(_QWORD *)(v20 + 32) + 8 * v21;
          v23 = *(_QWORD *)(v22 + 40) & 0xFFFFFFFFFFFFFFFEui64;
          if ( *(_QWORD *)(v20 + 8 * v21 + 40) == v23 )
          {
            (*(void (__fastcall **)(unsigned __int64, unsigned __int64))(*(_QWORD *)v23 + 16i64))(
              v23,
              (unsigned __int64)v19->pNative & 0xFFFFFFFFFFFFFFFEui64);
            *(_QWORD *)(v22 + 40) = (__int64)v19->pNative ^ (*(_DWORD *)(v22 + 40) ^ LODWORD(v19->pNative)) & 1;
          }
        }
      }
    }
  }
  this->CaptureCalled = 1;
  v24.List = &this->CaptureNotifyList;
  v24.__vftable = (Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor_vtbl *)&Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor_OnCapture::`vftable';
  Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor::Visit(&v24);
  v24.__vftable = (Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor_vtbl *)&Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor::`vftable';
  Scaleform::Lock::Unlock(&pObject->LockObject);
  return 1;
}

void __fastcall Scaleform::Render::ContextImpl::RenderNotify::ContextReleased(
        Scaleform::Render::ContextImpl::RenderNotify *this,
        Scaleform::Render::ContextImpl::Context *context)
{
  context->RenderNode.pPrev->pNext = context->RenderNode.pNext;
  context->RenderNode.pNext->pPrev = context->RenderNode.pPrev;
  context->RenderNode.pPrev = (Scaleform::Render::ContextImpl::RenderNotify::ContextNode *)-1i64;
  context->RenderNode.pNext = (Scaleform::Render::ContextImpl::RenderNotify::ContextNode *)-1i64;
  context->pRenderer = 0i64;
  context->NextCaptureCalledInFrame = 0;
}

void __fastcall Scaleform::Render::ContextImpl::RenderNotify::EndFrameContextNotify(
        Scaleform::Render::ContextImpl::RenderNotify *this)
{
  Scaleform::Render::ContextImpl::RenderNotify::ContextNode *i; // rax

  for ( i = this->ActiveContextSet.Root.pNext;
        i != (Scaleform::Render::ContextImpl::RenderNotify::ContextNode *)&this->ActiveContextSet;
        i = i->pNext )
  {
    i->pContext->NextCaptureCalledInFrame = 0;
  }
}

void __fastcall Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor_OnCapture::Execute(
        Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor_OnCapture *this,
        Scaleform::Render::ContextImpl::ContextCaptureNotify *notify)
{
  notify->OnCapture(notify);
}

void __fastcall Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor_OnNextCapture::Execute(
        Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor_OnNextCapture *this,
        Scaleform::Render::ContextImpl::ContextCaptureNotify *notify)
{
  notify->OnNextCapture(notify, this->RNotify);
}

void __fastcall Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor_OnShutdown::Execute(
        Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor_OnShutdown *this,
        Scaleform::Render::ContextImpl::ContextCaptureNotify *notify)
{
  notify->OnShutdown(notify, this->WaitFlag);
}

void __fastcall Scaleform::Render::ContextImpl::Context::ForceUpdateImages(
        Scaleform::Render::ContextImpl::Context *this)
{
  Scaleform::Render::ContextImpl::Snapshot *v1; // rax

  v1 = this->pSnapshots[0];
  if ( v1 )
    v1->ForceUpdateImagesFlag = 1;
}

void __fastcall Scaleform::Render::ContextImpl::EntryTable::FreeEntry(
        Scaleform::Render::ContextImpl::EntryTable *this,
        Scaleform::Render::ContextImpl::Entry *p)
{
  Scaleform::Render::ContextImpl::Entry *pNext; // rax
  Scaleform::Render::ContextImpl::EntryPage *v3; // r8
  __int64 v4; // rax
  unsigned __int64 v5; // rdx

  pNext = this->FreeNodes.Root.pNext;
  p->pPrev = &this->FreeNodes.Root;
  p->RefCount = (unsigned __int64)pNext;
  this->FreeNodes.Root.pNext->pPrev = p;
  this->FreeNodes.Root.RefCount = (unsigned __int64)p;
  v3 = (Scaleform::Render::ContextImpl::EntryPage *)((unsigned __int64)p & 0xFFFFFFFFFFFFF000ui64);
  v4 = *(_QWORD *)(((unsigned __int64)p & 0xFFFFFFFFFFFFF000ui64) + 0x20);
  v5 = (__int64)((unsigned __int128)((__int64)((__int64)&p[-1] - ((unsigned __int64)p & 0xFFFFFFFFFFFFF000ui64))
                                   * (__int128)0x4924924924924925i64) >> 64) >> 4;
  *(_QWORD *)(v4 + 8 * ((unsigned int)v5 + (v5 >> 63)) + 40) = 0i64;
  if ( v3->UseCount-- == 1 )
    Scaleform::Render::ContextImpl::EntryTable::FreeEntryPage(this, v3);
}

void __fastcall Scaleform::Render::ContextImpl::EntryTable::FreeEntryPage(
        Scaleform::Render::ContextImpl::EntryTable *this,
        Scaleform::Render::ContextImpl::EntryPage *ppage)
{
  Scaleform::Render::ContextImpl::ContextLock *pObject; // rbx
  Scaleform::Render::ContextImpl::SnapshotPage *pSnapshotPage; // rax
  Scaleform::Render::ContextImpl::SnapshotPage *i; // rcx
  Scaleform::Render::ContextImpl::SnapshotPage *v7; // rdx
  Scaleform::Render::ContextImpl::SnapshotPage *v8; // rdx
  Scaleform::Render::ContextImpl::SnapshotPage *pNewerSnapshotPage; // rcx
  Scaleform::Render::ContextImpl::SnapshotPage *pOlderSnapshotPage; // rcx

  pObject = this->pContext->pCaptureLock.pObject;
  Scaleform::Lock::DoLock(&pObject->LockObject);
  ppage->pPrev->pNext = ppage->pNext;
  ppage->pNext->Scaleform::Render::ContextImpl::EntryPageBase::Scaleform::ListNode<Scaleform::Render::ContextImpl::EntryPageBase>::$BAE4183C2E8E935049C7805E23A9E285::pPrev = ppage->pPrev;
  ppage->pPrev = (Scaleform::Render::ContextImpl::EntryPageBase *)-1i64;
  ppage->pNext = (Scaleform::Render::ContextImpl::EntryPageBase *)-1i64;
  Scaleform::Render::ContextImpl::EntryPage::RemoveEntriesFromList(ppage, &this->FreeNodes);
  pSnapshotPage = ppage->pSnapshotPage;
  for ( i = pSnapshotPage->pNewerSnapshotPage; i; i = i->pNewerSnapshotPage )
    pSnapshotPage = i;
  do
  {
    pSnapshotPage->pEntryPage = 0i64;
    pSnapshotPage = pSnapshotPage->pOlderSnapshotPage;
  }
  while ( pSnapshotPage );
  v7 = ppage->pSnapshotPage;
  if ( v7->pNext )
  {
    v7->pPrev->pNext = v7->pNext;
    v7->pNext->Scaleform::ListNode<Scaleform::Render::ContextImpl::SnapshotPage>::$C71E71A6F68E478737B35C69B8C2A890::pPrev = v7->pPrev;
    v7->pPrev = (Scaleform::Render::ContextImpl::SnapshotPage *)-1i64;
    v7->pNext = (Scaleform::Render::ContextImpl::SnapshotPage *)-1i64;
  }
  v8 = ppage->pSnapshotPage;
  pNewerSnapshotPage = v8->pNewerSnapshotPage;
  if ( pNewerSnapshotPage )
    pNewerSnapshotPage->pOlderSnapshotPage = v8->pOlderSnapshotPage;
  pOlderSnapshotPage = v8->pOlderSnapshotPage;
  if ( pOlderSnapshotPage )
    pOlderSnapshotPage->pNewerSnapshotPage = v8->pNewerSnapshotPage;
  ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, ppage);
  Scaleform::Lock::Unlock(&pObject->LockObject);
}

Scaleform::Render::ContextImpl::Context *__fastcall Scaleform::Render::ContextImpl::Entry::GetContext(
        Scaleform::Render::ContextImpl::Entry *this)
{
  return *(Scaleform::Render::ContextImpl::Context **)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64)
                                                                 + 0x18)
                                                     + 16i64);
}

Scaleform::Render::ContextImpl::Entry *__fastcall Scaleform::Render::ContextImpl::RTHandle::GetRenderEntry(
        Scaleform::Render::ContextImpl::RTHandle *this)
{
  Scaleform::Render::ContextImpl::RTHandle::HandleData *pObject; // rax

  pObject = this->pData.pObject;
  if ( this->pData.pObject && pObject->State == State_InitFailed )
    return pObject->pEntry;
  else
    return 0i64;
}

Concurrency::details::ScheduleGroupSegmentBase *__fastcall Scaleform::SwitchFormatter::GetSize(
        Concurrency::details::ContextBase *this)
{
  return this->m_pSegment;
}

bool __fastcall Scaleform::Render::ContextImpl::Context::HasChanges(Scaleform::Render::ContextImpl::Context *this)
{
  Scaleform::Render::ContextImpl::Snapshot *v1; // rdx
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>::Page *pPages; // rax
  volatile bool result; // al

  v1 = this->pSnapshots[0];
  pPages = v1->Changes.pPages;
  if ( pPages && pPages->Count )
    return 1;
  if ( (Scaleform::List2<Scaleform::Render::ContextImpl::Entry,Scaleform::Render::ContextImpl::EntryListAccessor> *)v1->DestroyedNodes.Root.pNext != &v1->DestroyedNodes )
    return 1;
  result = this->DIChangesRequired;
  if ( result )
    return 1;
  return result;
}

_BOOL8 __fastcall Scaleform::Render::ContextImpl::Context::IsShutdownComplete(
        Scaleform::Render::ContextImpl::Context *this)
{
  Scaleform::Render::ContextImpl::ContextLock *pObject; // rbx
  bool v3; // di

  pObject = this->pCaptureLock.pObject;
  Scaleform::Lock::DoLock(&pObject->LockObject);
  v3 = this->ShutdownRequested && !this->pRenderer;
  Scaleform::Lock::Unlock(&pObject->LockObject);
  return v3;
}

void __fastcall Scaleform::Render::ContextImpl::Snapshot::Merge(
        Scaleform::Render::ContextImpl::Snapshot *this,
        Scaleform::Render::ContextImpl::Snapshot *pold)
{
  Scaleform::Render::ContextImpl::Snapshot *v2; // r9
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>::Page *pPages; // r15
  __int64 v5; // r8
  int v6; // esi
  int *v7; // rbx
  Scaleform::Render::ContextImpl::Entry *v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  Scaleform::Render::ContextImpl::EntryChange *pFreeChangeNodes; // rdx
  unsigned int v17; // er14
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>::Page *pLast; // rdi
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>::Page *v19; // rax
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>::Page *v20; // rax
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>::Page *v21; // rcx
  __int64 Count; // rax
  bool ForceUpdateImagesFlag; // al
  Scaleform::List2<Scaleform::Render::ContextImpl::Entry,Scaleform::Render::ContextImpl::EntryListAccessor> *pNext; // r8
  Scaleform::Render::ContextImpl::Entry **p_pPrev; // rax
  Scaleform::Render::ContextImpl::Entry *v26; // rcx
  Scaleform::List<Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::Snapshot::HeapNode> > *p_Heaps; // rax
  Scaleform::List<Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::Render::ContextImpl::Snapshot::HeapNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::Snapshot::HeapNode> > *v28; // r13
  Scaleform::Render::ContextImpl::Snapshot::HeapNode *v29; // rdx
  Scaleform::Render::ContextImpl::Snapshot::HeapNode *pPrev; // rcx

  v2 = pold;
  pPages = pold->Changes.pPages;
  if ( pPages )
  {
    v5 = 0i64;
    while ( 1 )
    {
      v6 = 0;
      if ( pPages->Count )
        break;
LABEL_23:
      pPages = pPages->pNext;
      if ( !pPages )
      {
        v2 = pold;
        goto LABEL_25;
      }
    }
    while ( 1 )
    {
      v7 = (int *)&pPages->Items[v6];
      v8 = *(Scaleform::Render::ContextImpl::Entry **)v7;
      if ( *(_QWORD *)v7 )
        break;
LABEL_22:
      if ( ++v6 >= pPages->Count )
        goto LABEL_23;
    }
    v9 = *(_QWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000ui64) + 0x20);
    v10 = (unsigned int)((int)((_DWORD)v8 - ((unsigned int)v8 & 0xFFFFF000) - 56) / 56);
    v11 = *(_QWORD *)(v9 + 8 * v10 + 40);
    v12 = 8 * v10 + 40;
    v13 = *(_QWORD *)(v12 + *(_QWORD *)(v9 + 24));
    if ( v11 != v13 )
    {
      if ( v7[2] >= 0 )
      {
        v14 = v11 & 0xFFFFFFFFFFFFFFFEui64;
        if ( v14 == v13 )
        {
          (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD, Scaleform::Render::ContextImpl::Snapshot *))(*(_QWORD *)v13 + 16i64))(
            v13,
            (unsigned __int64)v8->pNative & 0xFFFFFFFFFFFFFFFEui64,
            0i64,
            v2);
          v5 = *(_QWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000ui64) + 0x20);
          v14 = *(_QWORD *)(*(_QWORD *)v7 + 16i64) ^ (*(_DWORD *)(v5 + v12) ^ *(_DWORD *)(*(_QWORD *)v7 + 16i64)) & 1;
          *(_QWORD *)(v5 + v12) = v14;
        }
        (*(void (__fastcall **)(__int64, unsigned __int64, __int64, Scaleform::Render::ContextImpl::Snapshot *))(*(_QWORD *)v13 + 32i64))(
          v13,
          v14,
          v5,
          v2);
        v5 = 0i64;
      }
      v15 = **(_QWORD **)v7;
      if ( v15 && (*(_BYTE *)(v12 + *(_QWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000ui64) + 0x20)) & 1) == 0 )
        *(_DWORD *)(v15 + 8) |= v7[2] & 0x7FFFFFFF;
      goto LABEL_22;
    }
    pFreeChangeNodes = this->pFreeChangeNodes;
    v17 = v7[2];
    if ( pFreeChangeNodes )
    {
      this->pFreeChangeNodes = pFreeChangeNodes->pNextFreeNode;
LABEL_21:
      pFreeChangeNodes->pNode = v8;
      pFreeChangeNodes->ChangeBits = v17;
      goto LABEL_22;
    }
    pLast = this->Changes.pLast;
    if ( pLast )
    {
      if ( pLast->Count + 1 <= 0x3F )
      {
LABEL_20:
        v21 = this->Changes.pLast;
        Count = v21->Count;
        pFreeChangeNodes = &v21->Items[Count];
        v21->Count = Count + 1;
        goto LABEL_21;
      }
      v20 = (Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>::Page *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, &this->Changes, 1024i64, 0i64);
      this->Changes.pLast = v20;
      pLast->pNext = v20;
      v19 = this->Changes.pLast;
    }
    else
    {
      v19 = (Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>::Page *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, &this->Changes, 1024i64, 0i64);
      this->Changes.pPages = v19;
      this->Changes.pLast = v19;
    }
    v5 = 0i64;
    v19->pNext = 0i64;
    this->Changes.pLast->Count = 0;
    goto LABEL_20;
  }
LABEL_25:
  ForceUpdateImagesFlag = v2->ForceUpdateImagesFlag;
  if ( ForceUpdateImagesFlag )
    this->ForceUpdateImagesFlag = ForceUpdateImagesFlag;
  pNext = (Scaleform::List2<Scaleform::Render::ContextImpl::Entry,Scaleform::Render::ContextImpl::EntryListAccessor> *)v2->DestroyedNodes.Root.pNext;
  p_pPrev = &v2->DestroyedNodes.Root.pPrev;
  if ( pNext != &v2->DestroyedNodes )
  {
    v26 = *p_pPrev;
    *p_pPrev = (Scaleform::Render::ContextImpl::Entry *)p_pPrev;
    v2->DestroyedNodes.Root.RefCount = (unsigned __int64)&v2->DestroyedNodes;
    v26->RefCount = this->DestroyedNodes.Root.RefCount;
    pNext->Root.pPrev = &this->DestroyedNodes.Root;
    this->DestroyedNodes.Root.pNext->pPrev = v26;
    this->DestroyedNodes.Root.RefCount = (unsigned __int64)pNext;
  }
  p_Heaps = &v2->Heaps;
  v28 = &this->Heaps;
  v29 = v2->Heaps.Root.pNext;
  if ( v29 != (Scaleform::Render::ContextImpl::Snapshot::HeapNode *)&v2->Heaps )
  {
    pPrev = p_Heaps->Root.pPrev;
    p_Heaps->Root.pPrev = (Scaleform::Render::ContextImpl::Snapshot::HeapNode *)p_Heaps;
    v2->Heaps.Root.pNext = (Scaleform::Render::ContextImpl::Snapshot::HeapNode *)&v2->Heaps;
    pPrev->pNext = v28->Root.pNext;
    v29->pPrev = (Scaleform::Render::ContextImpl::Snapshot::HeapNode *)v28;
    v28->Root.pNext->pPrev = pPrev;
    v28->Root.pNext = v29;
  }
}

void __fastcall Scaleform::Render::ContextImpl::RenderNotify::NewCapture(
        Scaleform::Render::ContextImpl::RenderNotify *this,
        Scaleform::Render::ContextImpl::Context *context,
        bool hasChanges)
{
  Scaleform::Render::ContextImpl::RenderNotify::ContextNode *p_RenderNode; // rdx
  Scaleform::Render::ContextImpl::RenderNotify::ContextNode *pPrev; // rax
  Scaleform::List<Scaleform::Render::ContextImpl::RenderNotify::ContextNode,Scaleform::Render::ContextImpl::RenderNotify::ContextNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::RenderNotify::ContextNode> > *p_ActiveContextSet; // rcx

  if ( context->pRenderer != this )
  {
    context->pRenderer = this;
    p_RenderNode = &context->RenderNode;
    pPrev = this->ActiveContextSet.Root.pPrev;
    p_ActiveContextSet = &this->ActiveContextSet;
    p_RenderNode->pPrev = pPrev;
    p_RenderNode->pNext = (Scaleform::Render::ContextImpl::RenderNotify::ContextNode *)p_ActiveContextSet;
    p_ActiveContextSet->Root.pPrev->pNext = p_RenderNode;
    p_ActiveContextSet->Root.pPrev = p_RenderNode;
  }
}

_BOOL8 __fastcall Scaleform::Render::ContextImpl::Context::NextCapture(
        Scaleform::Render::ContextImpl::Context *this,
        Scaleform::Render::ContextImpl::RenderNotify *pnotify,
        Scaleform::Render::ContextImpl::Context::CaptureMode mode)
{
  bool v5; // bl
  Scaleform::Render::ContextImpl::Snapshot *updateSnapshot; // [rsp+48h] [rbp+20h] BYREF

  updateSnapshot = 0i64;
  v5 = Scaleform::Render::ContextImpl::Context::nextCapture_LockScope(this, &updateSnapshot, pnotify, mode);
  if ( updateSnapshot )
    Scaleform::Render::ContextImpl::Context::nextCapture_NotifyChanges(this, updateSnapshot, pnotify);
  return v5;
}

bool __fastcall Scaleform::Render::ContextImpl::RTHandle::NextCapture(
        Scaleform::Render::ContextImpl::RTHandle *this,
        Scaleform::Render::ContextImpl::RenderNotify *render)
{
  Scaleform::Lock *p_LockObject; // rbx
  Scaleform::Render::ContextImpl::Context *pContext; // rsi
  bool v7; // zf
  Scaleform::Render::ContextImpl::RTHandle::HandleData *pObject; // rax
  bool v9; // di
  Scaleform::Render::ContextImpl::Snapshot *updateSnapshot; // [rsp+30h] [rbp+8h] BYREF

  if ( !this->pData.pObject )
    return 0;
  p_LockObject = &this->pData.pObject->pContextLock.pObject->LockObject;
  Scaleform::Lock::DoLock(p_LockObject);
  pContext = this->pData.pObject->pContextLock.pObject->pContext;
  if ( !pContext || this->pData.pObject->State == State_Valid )
    goto LABEL_7;
  updateSnapshot = 0i64;
  v7 = !Scaleform::Render::ContextImpl::Context::nextCapture_LockScope(
          pContext,
          &updateSnapshot,
          render,
          Capture_OnceAFrame);
  pObject = this->pData.pObject;
  if ( v7 )
  {
    pObject->pContextLock.pObject->pContext = 0i64;
LABEL_7:
    Scaleform::Lock::Unlock(p_LockObject);
    return 0;
  }
  if ( pObject->State == State_InitPending )
    pObject->State = State_InitFailed;
  v9 = this->pData.pObject->State == State_InitFailed;
  Scaleform::Lock::Unlock(p_LockObject);
  if ( updateSnapshot )
    Scaleform::Render::ContextImpl::Context::nextCapture_NotifyChanges(pContext, updateSnapshot, render);
  return v9;
}

void __fastcall Scaleform::Render::ContextImpl::EntryTable::NextSnapshot(
        Scaleform::Render::ContextImpl::EntryTable *this,
        Scaleform::Render::ContextImpl::Snapshot *pnewSnapshot)
{
  Scaleform::Render::ContextImpl::EntryTable *pNext; // rbx
  Scaleform::List<Scaleform::Render::ContextImpl::EntryPage,Scaleform::Render::ContextImpl::EntryPageBase,Scaleform::ListNode<Scaleform::Render::ContextImpl::EntryPageBase> > *p_EntryPages; // r14
  Scaleform::Render::ContextImpl::Entry *pPrev; // rdi
  Scaleform::Render::ContextImpl::Entry *v7; // rax
  Scaleform::Render::ContextImpl::Entry *v8; // rdx
  Scaleform::Render::ContextImpl::Entry::PropagateNode *p_PNode; // rcx
  __int64 v10; // r8
  Scaleform::Render::ContextImpl::Entry::PropagateNode *v11; // rax
  Scaleform::Render::ContextImpl::Entry::PropagateNode v12; // xmm0

  pNext = (Scaleform::Render::ContextImpl::EntryTable *)this->EntryPages.Root.pNext;
  p_EntryPages = &this->EntryPages;
  if ( pNext == (Scaleform::Render::ContextImpl::EntryTable *)&this->EntryPages )
  {
    this->pActiveSnapshot = pnewSnapshot;
  }
  else
  {
    do
    {
      pPrev = pNext->FreeNodes.Root.pPrev;
      v7 = (Scaleform::Render::ContextImpl::Entry *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64, __int64))this->pHeap->Alloc)(
                                                      this->pHeap,
                                                      616i64,
                                                      16i64);
      v8 = v7;
      if ( v7 )
      {
        v7->pPrev = 0i64;
        p_PNode = &v7->PNode;
        v7->RefCount = 0i64;
        v10 = 4i64;
        v7->pNative = pPrev->pNative;
        v11 = &pPrev->PNode;
        v8->pRenderer = (Scaleform::Render::TreeCacheNode *)pPrev;
        v8->pParent = 0i64;
        do
        {
          p_PNode += 8;
          v12 = *v11;
          v11 += 8;
          p_PNode[-8] = v12;
          p_PNode[-7] = v11[-7];
          p_PNode[-6] = v11[-6];
          p_PNode[-5] = v11[-5];
          p_PNode[-4] = v11[-4];
          p_PNode[-3] = v11[-3];
          p_PNode[-2] = v11[-2];
          p_PNode[-1] = v11[-1];
          --v10;
        }
        while ( v10 );
        *p_PNode = *v11;
        p_PNode[1] = v11[1];
        p_PNode[2] = v11[2];
        p_PNode[3] = v11[3];
        pPrev->pParent = v8;
      }
      else
      {
        v8 = 0i64;
      }
      pNext->FreeNodes.Root.pPrev = v8;
      pNext->EntryPages.Root.pNext = (Scaleform::Render::ContextImpl::EntryPageBase *)pnewSnapshot;
      pNext = (Scaleform::Render::ContextImpl::EntryTable *)pNext->pHeap;
    }
    while ( pNext != (Scaleform::Render::ContextImpl::EntryTable *)p_EntryPages );
    this->pActiveSnapshot = pnewSnapshot;
  }
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall Scaleform::Render::ContextImpl::Context::PropagateChangesUp(
        Scaleform::Render::ContextImpl::Context *this)
{
  Scaleform::Render::ContextImpl::Snapshot *v1; // r12
  __int64 v2; // rdx
  _QWORD *v3; // rax
  Scaleform::Render::ContextImpl::Entry::PropagateNode *pNext; // r14
  Scaleform::List<Scaleform::Render::ContextImpl::Entry::PropagateNode,Scaleform::Render::ContextImpl::Entry::PropagateNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::Entry::PropagateNode> > *p_PropagateEntrys; // r12
  Scaleform::Render::ContextImpl::Entry::PropagateNode *pPrev; // rax
  unsigned int v7; // ebx
  Scaleform::Render::ContextImpl::Entry::PropagateNode *i; // r15
  _BYTE *v9; // rax
  _BYTE *v10; // rdi
  int v11; // ecx
  unsigned int v12; // edx
  unsigned int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // eax
  _BYTE *v17; // rdx
  __int64 v18; // r12
  __int64 v19; // r15
  _QWORD *v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // r13
  _BYTE *v24; // rax
  _BYTE *v25; // rbx
  int v26; // edx
  unsigned int v27; // ecx
  unsigned int v28; // edi
  __int64 v29; // rdx
  int v30; // eax
  _BYTE *Src; // [rsp+28h] [rbp-E0h]
  __int64 v32; // [rsp+30h] [rbp-D8h]
  Scaleform::MemoryHeap *pHeap; // [rsp+38h] [rbp-D0h]
  _BYTE v34[248]; // [rsp+48h] [rbp-C0h] BYREF
  int v35; // [rsp+178h] [rbp+70h]

  v1 = this->pSnapshots[0];
  v2 = 32i64;
  Src = v34;
  pHeap = this->pHeap;
  v3 = v34;
  v32 = 0x2000000000i64;
  do
  {
    *v3++ = 0i64;
    --v2;
  }
  while ( v2 );
  pNext = v1->PropagateEntrys.Root.pNext;
  p_PropagateEntrys = &v1->PropagateEntrys;
  if ( pNext != (Scaleform::Render::ContextImpl::Entry::PropagateNode *)p_PropagateEntrys )
  {
    while ( 1 )
    {
      pPrev = pNext[-1].pNext;
      v7 = 0;
      for ( i = pNext->pNext; pPrev; ++v7 )
        pPrev = pPrev[2].pPrev;
      if ( v7 < HIDWORD(v32) )
        break;
      v9 = pHeap->Alloc(pHeap, 8i64 * ((v7 + 32) & 0xFFFFFFE0), 0i64);
      v10 = v9;
      if ( v9 )
      {
        memmove(v9, Src, 8i64 * (unsigned int)v32);
        v11 = v32;
        v12 = 0;
        v13 = ((v7 + 32) & 0xFFFFFFE0) - v32;
        if ( v13 )
        {
          while ( 1 )
          {
            v14 = v12 + v11;
            ++v12;
            *(_QWORD *)&v10[8 * v14] = 0i64;
            if ( v12 >= v13 )
              break;
            v11 = v32;
          }
        }
        if ( Src != v34 )
          ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        Src = v10;
        HIDWORD(v32) = v7 + 1;
        goto LABEL_15;
      }
LABEL_18:
      pNext->pPrev = (Scaleform::Render::ContextImpl::Entry::PropagateNode *)1;
      pNext = i;
      if ( i == (Scaleform::Render::ContextImpl::Entry::PropagateNode *)p_PropagateEntrys )
        goto LABEL_19;
    }
    v10 = Src;
LABEL_15:
    v15 = 8i64 * v7;
    pNext->pNext = *(Scaleform::Render::ContextImpl::Entry::PropagateNode **)&v10[v15];
    *(_QWORD *)&Src[v15] = pNext;
    v16 = v32;
    if ( (unsigned int)v32 < v7 + 1 )
      v16 = v7 + 1;
    LODWORD(v32) = v16;
    goto LABEL_18;
  }
LABEL_19:
  p_PropagateEntrys->Root.pPrev = (Scaleform::Render::ContextImpl::Entry::PropagateNode *)p_PropagateEntrys;
  p_PropagateEntrys->Root.pNext = (Scaleform::Render::ContextImpl::Entry::PropagateNode *)p_PropagateEntrys;
  v17 = Src;
  v18 = (unsigned int)(v32 - 1);
  if ( !(_DWORD)v32 )
    goto LABEL_39;
  do
  {
    v19 = *(_QWORD *)&v17[8 * v18];
    v35 = v18;
    if ( !v19 )
      goto LABEL_38;
    do
    {
      v20 = (_QWORD *)(v19 - 40);
      v21 = *(_QWORD *)(*(_QWORD *)(((v19 - 40) & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                      + 8i64 * (unsigned int)((int)(v19 - 40 - ((v19 - 40) & 0xFFFFF000) - 56) / 56)
                      + 40);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 40i64))(v21, v19 - 40) )
      {
        v22 = v20[4];
        if ( v22 )
        {
          if ( !*(_QWORD *)(v22 + 48) )
          {
            v23 = (unsigned int)(v18 - 1);
            if ( (unsigned int)v23 < HIDWORD(v32) )
            {
              v25 = Src;
            }
            else
            {
              v24 = pHeap->Alloc(pHeap, 8i64 * (((_DWORD)v23 + 32) & 0xFFFFFFE0), 0i64);
              v25 = v24;
              if ( !v24 )
                goto LABEL_36;
              memmove(v24, Src, 8i64 * (unsigned int)v32);
              v26 = v32;
              v27 = 0;
              v28 = ((v23 + 32) & 0xFFFFFFE0) - v32;
              if ( v28 )
              {
                while ( 1 )
                {
                  v29 = v27 + v26;
                  ++v27;
                  *(_QWORD *)&v25[8 * v29] = 0i64;
                  if ( v27 >= v28 )
                    break;
                  v26 = v32;
                }
              }
              if ( Src != v34 )
                ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
              Src = v25;
              HIDWORD(v32) = v18;
            }
            *(_QWORD *)(v22 + 48) = *(_QWORD *)&v25[8 * v23];
            *(_QWORD *)&Src[8 * v23] = v22 + 40;
            v30 = v32;
            if ( (unsigned int)v32 < (unsigned int)v18 )
              v30 = v18;
            LODWORD(v32) = v30;
          }
        }
      }
LABEL_36:
      v19 = *(_QWORD *)(v19 + 8);
      v20[6] = 0i64;
      v20[5] = 0i64;
    }
    while ( v19 );
    v17 = Src;
LABEL_38:
    v18 = (unsigned int)(v18 - 1);
  }
  while ( v35 );
LABEL_39:
  if ( v17 != v34 )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
}

void __fastcall Scaleform::Render::ContextImpl::RenderNotify::ReleaseAllContextData(
        Scaleform::Render::ContextImpl::RenderNotify *this)
{
  Scaleform::List<Scaleform::Render::ContextImpl::RenderNotify::ContextNode,Scaleform::Render::ContextImpl::RenderNotify::ContextNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::RenderNotify::ContextNode> > *p_ActiveContextSet; // rsi
  Scaleform::Render::ContextImpl::Context *pContext; // rdi
  Scaleform::Render::ContextImpl::ContextLock *pObject; // rbx

  p_ActiveContextSet = &this->ActiveContextSet;
  if ( (Scaleform::List<Scaleform::Render::ContextImpl::RenderNotify::ContextNode,Scaleform::Render::ContextImpl::RenderNotify::ContextNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::RenderNotify::ContextNode> > *)this->ActiveContextSet.Root.pNext != &this->ActiveContextSet )
  {
    do
    {
      pContext = this->ActiveContextSet.Root.pNext->pContext;
      pObject = pContext->pCaptureLock.pObject;
      Scaleform::Lock::DoLock(&pObject->LockObject);
      if ( pContext->CreateThreadId != Concurrency::details::platform::GetCurrentThreadId() )
        pContext->MultiThreadedUse = 1;
      Scaleform::Render::ContextImpl::Context::shutdownRendering_NoLock(pContext);
      Scaleform::Lock::Unlock(&pObject->LockObject);
    }
    while ( (Scaleform::List<Scaleform::Render::ContextImpl::RenderNotify::ContextNode,Scaleform::Render::ContextImpl::RenderNotify::ContextNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::RenderNotify::ContextNode> > *)p_ActiveContextSet->Root.pNext != p_ActiveContextSet );
  }
}

void __fastcall Scaleform::Render::ContextImpl::EntryPage::RemoveEntriesFromList(
        Scaleform::Render::ContextImpl::EntryPage *this,
        Scaleform::List2<Scaleform::Render::ContextImpl::Entry,Scaleform::Render::ContextImpl::EntryListAccessor> *plist)
{
  $4DB1FF62457FE652BDDF8B269D434822 *v2; // rax
  __int64 v3; // r8
  Scaleform::Render::ContextImpl::Entry *pNext; // rdx
  Scaleform::Render::ContextImpl::Entry *v5; // rcx

  v2 = &this->Entries[1].8;
  v3 = 12i64;
  do
  {
    pNext = v2[-8].pNext;
    v5 = v2[-7].pNext;
    v2 += 42;
    pNext->RefCount = (unsigned __int64)v5;
    v2[-49].pNext->pPrev = v2[-50].pNext;
    *($4DB1FF62457FE652BDDF8B269D434822 *)(v2[-43].RefCount + 8) = v2[-42];
    v2[-42].pNext->pPrev = v2[-43].pNext;
    *($4DB1FF62457FE652BDDF8B269D434822 *)(v2[-36].RefCount + 8) = v2[-35];
    v2[-35].pNext->pPrev = v2[-36].pNext;
    *($4DB1FF62457FE652BDDF8B269D434822 *)(v2[-29].RefCount + 8) = v2[-28];
    v2[-28].pNext->pPrev = v2[-29].pNext;
    *($4DB1FF62457FE652BDDF8B269D434822 *)(v2[-22].RefCount + 8) = v2[-21];
    v2[-21].pNext->pPrev = v2[-22].pNext;
    *($4DB1FF62457FE652BDDF8B269D434822 *)(v2[-15].RefCount + 8) = v2[-14];
    v2[-14].pNext->pPrev = v2[-15].pNext;
    --v3;
  }
  while ( v3 );
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::Text::LineBuffer::Line *,Scaleform::AllocatorLH<Scaleform::Render::Text::LineBuffer::Line *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Render::TextureFormat *,Scaleform::AllocatorLH<Scaleform::Render::TextureFormat *,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::Render::TextureFormat **Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::Render::TextureFormat **v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      v7 = 8 * v6;
      if ( Data )
      {
        v8 = (Scaleform::Render::TextureFormat **)Scaleform::Memory::pGlobalHeap->Realloc(
                                                    Scaleform::Memory::pGlobalHeap,
                                                    Data,
                                                    v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 2;
      this->Data = (Scaleform::Render::TextureFormat **)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                          Scaleform::Memory::pGlobalHeap,
                                                          pheapAddr,
                                                          v7,
                                                          &v9);
    }
    else
    {
      v6 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        this->Data = 0i64;
        this->Policy.Capacity = 0i64;
        return;
      }
    }
    this->Policy.Capacity = v6;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,2>,Scaleform::ArrayDefaultPolicy> *this,
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
      Scaleform::ArrayDataBase<Scaleform::Render::Text::LineBuffer::Line *,Scaleform::AllocatorLH<Scaleform::Render::Text::LineBuffer::Line *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::Render::TextureFormat *,Scaleform::AllocatorLH<Scaleform::Render::TextureFormat *,2>,Scaleform::ArrayDefaultPolicy> *)this,
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
      Scaleform::ArrayDataBase<Scaleform::Render::Text::LineBuffer::Line *,Scaleform::AllocatorLH<Scaleform::Render::Text::LineBuffer::Line *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::Render::TextureFormat *,Scaleform::AllocatorLH<Scaleform::Render::TextureFormat *,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::Render::ContextImpl::RenderNotify::ServiceQueues(
        Scaleform::Render::ContextImpl::RenderNotify *this)
{
  Scaleform::Render::ContextImpl::RenderNotify::ContextNode *pNext; // rdi
  Scaleform::List<Scaleform::Render::ContextImpl::RenderNotify::ContextNode,Scaleform::Render::ContextImpl::RenderNotify::ContextNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::RenderNotify::ContextNode> > *p_ActiveContextSet; // rbp
  Scaleform::Render::ContextImpl::Context *pContext; // rax
  Scaleform::Render::ContextImpl::RenderNotify::ContextNode *v4; // rsi
  Scaleform::Render::ContextImpl::Context *v5; // rsi
  Scaleform::Render::ContextImpl::ContextLock *pObject; // rbx

  pNext = this->ActiveContextSet.Root.pNext;
  p_ActiveContextSet = &this->ActiveContextSet;
  while ( pNext != (Scaleform::Render::ContextImpl::RenderNotify::ContextNode *)p_ActiveContextSet )
  {
    pContext = pNext->pContext;
    v4 = pNext;
    pNext = pNext->pNext;
    if ( pContext->pShutdownEvent )
    {
      v5 = v4->pContext;
      pObject = v5->pCaptureLock.pObject;
      Scaleform::Lock::DoLock(&pObject->LockObject);
      if ( v5->CreateThreadId != Concurrency::details::platform::GetCurrentThreadId() )
        v5->MultiThreadedUse = 1;
      Scaleform::Render::ContextImpl::Context::shutdownRendering_NoLock(v5);
      Scaleform::Lock::Unlock(&pObject->LockObject);
    }
  }
}

void __fastcall Scaleform::Render::ContextImpl::Context::Shutdown(
        Scaleform::Render::ContextImpl::Context *this,
        bool waitFlag)
{
  Scaleform::Render::ContextImpl::ContextLock *pObject; // rbx
  char v5; // si
  $4B3AFED15DEE8EF6678F7AEC98A907B6 *v6; // r9
  Scaleform::Render::ContextImpl::RTHandle::HandleData *pNext; // rax
  Scaleform::Render::ContextImpl::Entry *pEntry; // rcx
  Scaleform::Render::ContextImpl::ContextLock *v9; // rbx
  Scaleform::Render::ContextImpl::RenderNotify *pRenderer; // rdx
  Scaleform::Render::ThreadCommandQueue *pRTCommandQueue; // rcx
  Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor v12; // [rsp+20h] [rbp-88h] BYREF
  bool v13; // [rsp+30h] [rbp-78h]
  Scaleform::Event v14; // [rsp+40h] [rbp-68h] BYREF

  v13 = waitFlag;
  v12.List = &this->CaptureNotifyList;
  v12.__vftable = (Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor_vtbl *)&Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor_OnShutdown::`vftable';
  Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor::Visit(&v12);
  this->DIChangesRequired = 0;
  while ( 1 )
  {
    pObject = this->pCaptureLock.pObject;
    v5 = 0;
    Scaleform::Lock::DoLock(&pObject->LockObject);
    Scaleform::Render::ContextImpl::Context::handleFinalizingSnaphot(this);
    this->ShutdownRequested = 1;
    if ( !waitFlag )
      goto LABEL_14;
    if ( this->pRenderer )
    {
      if ( this->MultiThreadedUse )
      {
        v5 = 1;
        goto LABEL_14;
      }
      Scaleform::Render::ContextImpl::Context::shutdownRendering_NoLock(this);
    }
    v6 = &this->RenderNode.8;
    if ( this == (Scaleform::Render::ContextImpl::Context *)-192i64 )
      v6 = 0i64;
    while ( ($4B3AFED15DEE8EF6678F7AEC98A907B6 *)this->RTHandleList.Root.pNext != v6 )
    {
      pNext = this->RTHandleList.Root.pNext;
      pNext->pPrev->pNext = pNext->pNext;
      pNext->pNext->pPrev = pNext->pPrev;
      pNext->pPrev = (Scaleform::Render::ContextImpl::RTHandle::HandleData *)-1i64;
      pNext->pNext = (Scaleform::Render::ContextImpl::RTHandle::HandleData *)-1i64;
      pEntry = pNext->pEntry;
      pNext->State = State_Valid;
      if ( pEntry )
        pEntry->pNative = (Scaleform::Render::ContextImpl::EntryData *)((unsigned __int64)pEntry->pNative & ~1ui64);
      pNext->pEntry = 0i64;
    }
    this->pCaptureLock.pObject->pContext = 0i64;
LABEL_14:
    Scaleform::Lock::Unlock(&pObject->LockObject);
    if ( !v5 )
      break;
    Scaleform::Event::Event(&v14, 0, 0);
    v9 = this->pCaptureLock.pObject;
    Scaleform::Lock::DoLock(&v9->LockObject);
    if ( this->pRenderer )
    {
      pRenderer = this->pRenderer;
      this->pShutdownEvent = &v14;
      pRTCommandQueue = pRenderer->pRTCommandQueue;
      if ( pRTCommandQueue )
        pRTCommandQueue->PushThreadCommand(pRTCommandQueue, &pRenderer->ServiceCommandInstance);
    }
    else
    {
      v5 = 0;
    }
    Scaleform::Lock::Unlock(&v9->LockObject);
    if ( v5 )
      Scaleform::Event::Wait(&v14, 0xFFFFFFFF);
    Scaleform::Event::~Event(&v14);
  }
}

void __fastcall Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor::Visit(
        Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor *this)
{
  __int64 v1; // rsi
  Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,2,Scaleform::ArrayDefaultPolicy> *List; // rax
  unsigned __int64 Size; // r14
  Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify> *Data; // rax
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::ContextImpl::ContextCaptureNotify **p_pObject; // rbx
  Scaleform::Render::ContextImpl::ContextCaptureNotify *v8; // rbx
  Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,2,Scaleform::ArrayDefaultPolicy> *v9; // rbx
  Scaleform::RefCountVImpl *v10; // rcx

  v1 = 0i64;
  while ( (unsigned int)v1 < this->List->Data.Size )
  {
    List = this->List;
    Size = List->Data.Size;
    Data = List->Data.Data;
    pObject = (Scaleform::RefCountVImpl *)Data[v1].pObject;
    p_pObject = &Data[v1].pObject;
    if ( pObject )
      Scaleform::Render::RenderBuffer::AddRef(pObject);
    v8 = *p_pObject;
    if ( v8 )
    {
      this->Execute(this, v8);
      if ( this->List->Data.Size >= Size )
        v1 = (unsigned int)(v1 + 1);
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v8);
    }
    else
    {
      v9 = this->List;
      if ( v9->Data.Size == 1 )
      {
        Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
          &this->List->Data,
          this->List,
          0i64);
      }
      else
      {
        v10 = (Scaleform::RefCountVImpl *)v9->Data.Data[v1].pObject;
        if ( v10 )
          Scaleform::RefCountImpl::Release(v10);
        memmove(&v9->Data.Data[v1], &v9->Data.Data[v1 + 1], 8 * (v9->Data.Size - (unsigned int)v1) - 8);
        --v9->Data.Size;
      }
    }
  }
}

void __fastcall Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(Scaleform::Render::ContextImpl::Entry *this)
{
  Scaleform::Render::ContextImpl::Entry::PropagateNode *v1; // rdx

  v1 = (Scaleform::Render::ContextImpl::Entry::PropagateNode *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64)
                                                                          + 0x18)
                                                              + 64i64);
  this->PNode.pPrev = v1->pPrev;
  this->PNode.pNext = v1;
  v1->pPrev->pNext = &this->PNode;
  v1->pPrev = &this->PNode;
}

void __fastcall Scaleform::Render::ContextImpl::Context::clearRTHandle(
        Scaleform::Render::ContextImpl::Context *this,
        Scaleform::Render::ContextImpl::Entry *entry)
{
  Scaleform::Render::ContextImpl::RTHandle::HandleData *pNext; // rax
  $4B3AFED15DEE8EF6678F7AEC98A907B6 *v4; // rdx

  pNext = this->RTHandleList.Root.pNext;
  v4 = &this->RenderNode.8;
  if ( this == (Scaleform::Render::ContextImpl::Context *)-192i64 )
    v4 = 0i64;
  while ( pNext != (Scaleform::Render::ContextImpl::RTHandle::HandleData *)v4 )
  {
    if ( pNext->pEntry == entry )
    {
      pNext->pPrev->pNext = pNext->pNext;
      pNext->pNext->pPrev = pNext->pPrev;
      pNext->pPrev = (Scaleform::Render::ContextImpl::RTHandle::HandleData *)-1i64;
      pNext->pNext = (Scaleform::Render::ContextImpl::RTHandle::HandleData *)-1i64;
      pNext->State = State_Valid;
      pNext->pEntry = 0i64;
      entry->pNative = (Scaleform::Render::ContextImpl::EntryData *)((unsigned __int64)entry->pNative & ~1ui64);
      return;
    }
    pNext = pNext->pNext;
  }
}

void __fastcall Scaleform::Render::ContextImpl::Context::clearRTHandleList(
        Scaleform::Render::ContextImpl::Context *this)
{
  Scaleform::List<Scaleform::Render::ContextImpl::RTHandle::HandleData,Scaleform::Render::ContextImpl::RTHandle::HandleData,Scaleform::ListNode<Scaleform::Render::ContextImpl::RTHandle::HandleData> > *p_RTHandleList; // r8
  $4B3AFED15DEE8EF6678F7AEC98A907B6 *v2; // r9
  Scaleform::Render::ContextImpl::RTHandle::HandleData *pNext; // rax
  Scaleform::Render::ContextImpl::Entry *pEntry; // rcx

  p_RTHandleList = &this->RTHandleList;
  v2 = &this->RenderNode.8;
  if ( this == (Scaleform::Render::ContextImpl::Context *)-192i64 )
    v2 = 0i64;
  while ( ($4B3AFED15DEE8EF6678F7AEC98A907B6 *)p_RTHandleList->Root.pNext != v2 )
  {
    pNext = this->RTHandleList.Root.pNext;
    pNext->pPrev->pNext = pNext->pNext;
    pNext->pNext->pPrev = pNext->pPrev;
    pNext->pPrev = (Scaleform::Render::ContextImpl::RTHandle::HandleData *)-1i64;
    pNext->pNext = (Scaleform::Render::ContextImpl::RTHandle::HandleData *)-1i64;
    pEntry = pNext->pEntry;
    pNext->State = State_Valid;
    if ( pEntry )
      pEntry->pNative = (Scaleform::Render::ContextImpl::EntryData *)((unsigned __int64)pEntry->pNative & ~1ui64);
    pNext->pEntry = 0i64;
  }
}

Scaleform::Render::ContextImpl::Entry *__fastcall Scaleform::Render::ContextImpl::Context::createEntryHelper(
        Scaleform::Render::ContextImpl::Context *this,
        Scaleform::Render::ContextImpl::EntryData *pdata)
{
  Scaleform::Render::ContextImpl::Entry *v5; // rax
  Scaleform::Render::ContextImpl::Entry *v6; // rbx
  Scaleform::Render::ContextImpl::EntryChange *v7; // rax
  Scaleform::Render::ContextImpl::Entry::PropagateNode *v8; // rcx
  Scaleform::Render::ContextImpl::Entry::PropagateNode *pPrev; // rax

  if ( !pdata )
    return 0i64;
  v5 = Scaleform::Render::ContextImpl::EntryTable::AllocEntry(&this->Table, pdata);
  v6 = v5;
  if ( v5 )
  {
    v7 = Scaleform::Render::ContextImpl::Snapshot::AddChangeItem(this->pSnapshots[0], v5, 0x80000000);
    v6->RefCount = 1i64;
    v6->pRenderer = 0i64;
    v6->pParent = 0i64;
    v6->pNative = pdata;
    v6->pPrev = (Scaleform::Render::ContextImpl::Entry *)v7;
    v6->PNode.pNext = 0i64;
    v6->PNode.pPrev = 0i64;
    v8 = *(Scaleform::Render::ContextImpl::Entry::PropagateNode **)(((unsigned __int64)v6 & 0xFFFFFFFFFFFFF000ui64)
                                                                  + 0x18);
    pPrev = v8[4].pPrev;
    v8 += 4;
    v6->PNode.pPrev = pPrev;
    v6->PNode.pNext = v8;
    v8->pPrev->pNext = &v6->PNode;
    v8->pPrev = &v6->PNode;
    return v6;
  }
  else
  {
    pdata->Destroy(pdata);
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pdata);
    return 0i64;
  }
}

void __fastcall Scaleform::Render::ContextImpl::Entry::destroyHelper(Scaleform::Render::ContextImpl::Entry *this)
{
  Scaleform::Render::ContextImpl::Entry *pPrev; // r14
  unsigned __int64 v2; // rbx
  __int64 v4; // rsi
  __int64 v5; // r12
  void *v6; // r15
  __int64 v7; // rbx

  pPrev = this->pPrev;
  v2 = (unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64;
  v4 = *(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x18);
  v5 = 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56) + 40;
  v6 = *(void **)(v5 + *(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20));
  (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 24i64))(v6);
  if ( this->PNode.pPrev )
  {
    this->PNode.pPrev->pNext = this->PNode.pNext;
    this->PNode.pNext->pPrev = this->PNode.pPrev;
    this->PNode.pPrev = (Scaleform::Render::ContextImpl::Entry::PropagateNode *)-1i64;
    this->PNode.pNext = (Scaleform::Render::ContextImpl::Entry::PropagateNode *)-1i64;
    this->PNode.pNext = 0i64;
    this->PNode.pPrev = 0i64;
  }
  if ( pPrev )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 32i64))(v6);
    if ( SLODWORD(pPrev->pNext) >= 0 )
    {
      *(_QWORD *)(v5 + *(_QWORD *)(v2 + 32)) |= 1ui64;
      this->pPrev = *(Scaleform::Render::ContextImpl::Entry **)(v4 + 80);
      this->RefCount = v4 + 80;
      *(_QWORD *)(*(_QWORD *)(v4 + 80) + 8i64) = this;
      *(_QWORD *)(v4 + 80) = this;
    }
    else
    {
      if ( ((__int64)this->pNative & 1) != 0 )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 112i64);
        Scaleform::Lock::DoLock((Scaleform::Lock *)(v7 + 16));
        Scaleform::Render::ContextImpl::Context::clearRTHandle(
          *(Scaleform::Render::ContextImpl::Context **)(v4 + 16),
          this);
        Scaleform::Lock::Unlock((Scaleform::Lock *)(v7 + 16));
      }
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v6);
      Scaleform::Render::ContextImpl::EntryTable::FreeEntry(
        (Scaleform::Render::ContextImpl::EntryTable *)(*(_QWORD *)(v4 + 16) + 16i64),
        this);
    }
    pPrev->pPrev = 0i64;
    pPrev->RefCount = *(_QWORD *)(v4 + 56);
    *(_QWORD *)(v4 + 56) = pPrev;
  }
  else
  {
    *(_QWORD *)(v5 + *(_QWORD *)(v2 + 32)) |= 1ui64;
    this->pPrev = *(Scaleform::Render::ContextImpl::Entry **)(v4 + 80);
    this->RefCount = v4 + 80;
    *(_QWORD *)(*(_QWORD *)(v4 + 80) + 8i64) = this;
    *(_QWORD *)(v4 + 80) = this;
  }
}

void __fastcall Scaleform::Render::ContextImpl::Context::destroyNativeNodes(
        Scaleform::Render::ContextImpl::Context *this,
        Scaleform::List2<Scaleform::Render::ContextImpl::Entry,Scaleform::Render::ContextImpl::EntryListAccessor> *destroyList)
{
  unsigned __int64 RefCount; // rbx
  Scaleform::Render::ContextImpl::EntryTable *p_Table; // rsi
  Scaleform::List2<Scaleform::Render::ContextImpl::Entry,Scaleform::Render::ContextImpl::EntryListAccessor> *p_FreeNodes; // rbp
  Scaleform::Render::ContextImpl::EntryPage *v6; // r8
  bool v7; // zf

  RefCount = destroyList->Root.RefCount;
  if ( (Scaleform::List2<Scaleform::Render::ContextImpl::Entry,Scaleform::Render::ContextImpl::EntryListAccessor> *)RefCount != destroyList )
  {
    p_Table = &this->Table;
    p_FreeNodes = &this->Table.FreeNodes;
    do
    {
      *(_QWORD *)(*(_QWORD *)RefCount + 8i64) = *(_QWORD *)(RefCount + 8);
      **(_QWORD **)(RefCount + 8) = *(_QWORD *)RefCount;
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)(*(_QWORD *)(RefCount + 16) & 0xFFFFFFFFFFFFFFFEui64) + 32i64))(*(_QWORD *)(RefCount + 16) & 0xFFFFFFFFFFFFFFFEui64);
      Scaleform::Memory::pGlobalHeap->Free(
        Scaleform::Memory::pGlobalHeap,
        (void *)(*(_QWORD *)(RefCount + 16) & 0xFFFFFFFFFFFFFFFEui64));
      *(_QWORD *)(RefCount + 16) = 0i64;
      v6 = (Scaleform::Render::ContextImpl::EntryPage *)(RefCount & 0xFFFFFFFFFFFFF000ui64);
      *(_QWORD *)(RefCount + 8) = p_FreeNodes->Root.pNext;
      *(_QWORD *)RefCount = p_FreeNodes;
      p_FreeNodes->Root.pNext->pPrev = (Scaleform::Render::ContextImpl::Entry *)RefCount;
      p_FreeNodes->Root.RefCount = RefCount;
      v6->pSnapshotPage->pData[(int)(RefCount - (RefCount & 0xFFFFF000) - 56) / 56] = 0i64;
      v7 = *(_DWORD *)((RefCount & 0xFFFFFFFFFFFFF000ui64) + 0x10) == 1;
      --v6->UseCount;
      if ( v7 )
        Scaleform::Render::ContextImpl::EntryTable::FreeEntryPage(p_Table, v6);
      RefCount = destroyList->Root.RefCount;
    }
    while ( (Scaleform::List2<Scaleform::Render::ContextImpl::Entry,Scaleform::Render::ContextImpl::EntryListAccessor> *)RefCount != destroyList );
  }
}

void __fastcall Scaleform::Render::ContextImpl::Context::destroySnapshot(
        Scaleform::Render::ContextImpl::Context *this,
        Scaleform::Render::ContextImpl::Snapshot *p)
{
  Scaleform::Render::ContextImpl::Snapshot *i; // rax
  Scaleform::Render::ContextImpl::Context *pContext; // r8
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>::Page *j; // rdi
  unsigned int k; // ebx
  Scaleform::Render::ContextImpl::Entry *pNode; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx

  if ( p )
  {
    for ( i = (Scaleform::Render::ContextImpl::Snapshot *)p->SnapshotPages.Root.pNext;
          i != (Scaleform::Render::ContextImpl::Snapshot *)&p->SnapshotPages;
          i = i->pNext )
    {
      pContext = i->pContext;
      if ( pContext )
        pContext->Table.FreeNodes.Root.pPrev = (Scaleform::Render::ContextImpl::Entry *)i;
    }
    for ( j = p->Changes.pPages; j; j = j->pNext )
    {
      for ( k = 0; k < j->Count; ++k )
      {
        pNode = j->Items[k].pNode;
        if ( pNode )
        {
          if ( (j->Items[k].ChangeBits & 0x80000000) == 0 )
          {
            v9 = (unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64;
            v10 = (__int64)((unsigned __int128)((__int64)((__int64)&pNode[-1]
                                                        - ((unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64))
                                              * (__int128)0x4924924924924925i64) >> 64) >> 4;
            v11 = *(_QWORD *)(*(_QWORD *)(v9 + 48) + 8 * ((unsigned int)v10 + (v10 >> 63)) + 40);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 32i64))(v11);
          }
        }
      }
    }
    Scaleform::Render::ContextImpl::Context::destroyNativeNodes(this, &p->DestroyedNodes);
    Scaleform::Render::ContextImpl::Snapshot::~Snapshot(p);
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, p);
  }
}

void __fastcall Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>::ensureCountAvailable(
        Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63> *this,
        unsigned int count)
{
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>::Page *pLast; // rdi
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>::Page *v4; // rax
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>::Page *v5; // rax

  pLast = this->pLast;
  if ( pLast )
  {
    if ( count + pLast->Count <= 0x3F )
      return;
    v5 = (Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>::Page *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, this, 1024i64, 0i64);
    this->pLast = v5;
    pLast->pNext = v5;
    v4 = this->pLast;
  }
  else
  {
    v4 = (Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>::Page *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, this, 1024i64, 0i64);
    this->pPages = v4;
    this->pLast = v4;
  }
  v4->pNext = 0i64;
  this->pLast->Count = 0;
}

void __fastcall Scaleform::Render::ContextImpl::RenderNotify::entryChanges(
        Scaleform::Render::ContextImpl::RenderNotify *this,
        Scaleform::Render::ContextImpl::Context *__formal,
        Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63> *a3,
        bool a4)
{
  char v4; // cl

  v4 = `Scaleform::Render::ContextImpl::RenderNotify::entryChanges'::`3'::warned;
  if ( !`Scaleform::Render::ContextImpl::RenderNotify::entryChanges'::`3'::warned )
    v4 = 1;
  `Scaleform::Render::ContextImpl::RenderNotify::entryChanges'::`3'::warned = v4;
}

void __fastcall Scaleform::Render::ContextImpl::RenderNotify::entryDestroy(
        Scaleform::Render::ContextImpl::RenderNotify *this,
        Scaleform::Render::ContextImpl::Entry *__formal)
{
  char v2; // cl

  v2 = `Scaleform::Render::ContextImpl::RenderNotify::entryDestroy'::`3'::warned;
  if ( !`Scaleform::Render::ContextImpl::RenderNotify::entryDestroy'::`3'::warned )
    v2 = 1;
  `Scaleform::Render::ContextImpl::RenderNotify::entryDestroy'::`3'::warned = v2;
}

void __fastcall Scaleform::Render::ContextImpl::RenderNotify::entryFlush(
        Scaleform::Render::ContextImpl::RenderNotify *this,
        Scaleform::Render::ContextImpl::Entry *__formal)
{
  char v2; // cl

  v2 = `Scaleform::Render::ContextImpl::RenderNotify::entryFlush'::`3'::warned;
  if ( !`Scaleform::Render::ContextImpl::RenderNotify::entryFlush'::`3'::warned )
    v2 = 1;
  `Scaleform::Render::ContextImpl::RenderNotify::entryFlush'::`3'::warned = v2;
}

Scaleform::Render::ContextImpl::EntryData *__fastcall Scaleform::Render::ContextImpl::Entry::getWritableData(
        Scaleform::Render::ContextImpl::Entry *this,
        unsigned int changeBits)
{
  __int64 v4; // rdi
  Scaleform::Render::ContextImpl::Snapshot *v5; // rbx

  v4 = *(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
     + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56);
  if ( this->pPrev )
  {
    LODWORD(this->pPrev->pNext) |= changeBits;
  }
  else
  {
    v5 = *(Scaleform::Render::ContextImpl::Snapshot **)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x18);
    *(_QWORD *)(v4 + 40) = (*(__int64 (__fastcall **)(_QWORD, Scaleform::Render::LinearHeap *))(**(_QWORD **)(v4 + 40)
                                                                                              + 8i64))(
                             *(_QWORD *)(v4 + 40),
                             &v5->Heaps.Root.pNext->ChangeHeap);
    this->pPrev = (Scaleform::Render::ContextImpl::Entry *)Scaleform::Render::ContextImpl::Snapshot::AddChangeItem(
                                                             v5,
                                                             this,
                                                             changeBits);
  }
  return *(Scaleform::Render::ContextImpl::EntryData **)(v4 + 40);
}

void __fastcall Scaleform::Render::ContextImpl::Context::handleFinalizingSnaphot(
        Scaleform::Render::ContextImpl::Context *this)
{
  Scaleform::Render::ContextImpl::Snapshot *v1; // rsi
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>::Page *i; // rdi
  unsigned int j; // ebx
  Scaleform::Render::ContextImpl::Entry *pNode; // r9
  __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx

  v1 = this->pSnapshots[3];
  if ( v1 )
  {
    for ( i = v1->Changes.pPages; i; i = i->pNext )
    {
      for ( j = 0; j < i->Count; ++j )
      {
        pNode = i->Items[j].pNode;
        if ( pNode && (i->Items[j].ChangeBits & 0x80000000) == 0 )
        {
          v6 = *(_QWORD *)(((unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64) + 0x20);
          v7 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28) + 24i64);
          v8 = (unsigned int)((int)((_DWORD)pNode - ((unsigned int)pNode & 0xFFFFF000) - 56) / 56);
          v9 = 8 * v8 + 40;
          if ( *(_QWORD *)(v9 + v7) == (*(_QWORD *)(v6 + 8 * v8 + 40) & 0xFFFFFFFFFFFFFFFEui64) )
            *(_QWORD *)(v9 + v6) = (__int64)pNode->pNative ^ (*(_DWORD *)(v9 + v6) ^ LODWORD(pNode->pNative)) & 1;
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + v7) + 32i64))(*(_QWORD *)(v9 + v7));
        }
      }
    }
    Scaleform::Render::ContextImpl::Context::destroyNativeNodes(this, &v1->DestroyedNodes);
    Scaleform::Render::ContextImpl::Snapshot::~Snapshot(v1);
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v1);
    this->FinalizedFrameId = this->SnapshotFrameIds[3];
    this->pSnapshots[3] = 0i64;
  }
}

__int64 __fastcall Scaleform::Render::ContextImpl::Context::nextCapture_LockScope(
        Scaleform::Render::ContextImpl::Context *this,
        Scaleform::Render::ContextImpl::Snapshot **updateSnapshot,
        Scaleform::Render::ContextImpl::RenderNotify *pnotify,
        Scaleform::Render::ContextImpl::Context::CaptureMode mode)
{
  Scaleform::Render::ContextImpl::ContextLock *pObject; // rbx
  unsigned __int8 v9; // di
  _BOOL8 v10; // r8
  Scaleform::Render::ContextImpl::Snapshot *v11; // rdx
  Scaleform::Render::ContextImpl::SnapshotPage *pNext; // rax
  Scaleform::List<Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::ListNode<Scaleform::Render::ContextImpl::SnapshotPage> > *i; // rdx
  Scaleform::Render::ContextImpl::EntryPage *pEntryPage; // rcx
  Scaleform::Render::ContextImpl::Snapshot *v15; // rcx
  Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor v17; // [rsp+20h] [rbp-38h] BYREF
  Scaleform::Render::ContextImpl::RenderNotify *v18; // [rsp+30h] [rbp-28h]
  Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor v19; // [rsp+38h] [rbp-20h] BYREF
  Scaleform::Render::ContextImpl::RenderNotify *v20; // [rsp+48h] [rbp-10h]

  pObject = this->pCaptureLock.pObject;
  Scaleform::Lock::DoLock(&pObject->LockObject);
  if ( mode == Capture_OnceAFrame && this->NextCaptureCalledInFrame )
  {
LABEL_20:
    v9 = 1;
    goto LABEL_21;
  }
  if ( !this->ShutdownRequested )
  {
    if ( this->CreateThreadId != Concurrency::details::platform::GetCurrentThreadId() )
      this->MultiThreadedUse = 1;
    if ( pnotify && mode == Capture_OnceAFrame )
      this->NextCaptureCalledInFrame = 1;
    v11 = this->pSnapshots[1];
    if ( v11 )
    {
      pNext = v11->SnapshotPages.Root.pNext;
      for ( i = &v11->SnapshotPages; pNext != (Scaleform::Render::ContextImpl::SnapshotPage *)i; pNext = pNext->pNext )
      {
        pEntryPage = pNext->pEntryPage;
        if ( pEntryPage )
          pEntryPage->pDisplaySnapshotPage = pNext;
      }
      v15 = this->pSnapshots[1];
      this->pSnapshots[3] = this->pSnapshots[2];
      this->SnapshotFrameIds[3] = this->SnapshotFrameIds[2];
      this->SnapshotFrameIds[2] = this->SnapshotFrameIds[1];
      this->pSnapshots[2] = v15;
      this->pSnapshots[1] = 0i64;
      if ( pnotify )
      {
        *updateSnapshot = v15;
        LOBYTE(v10) = 1;
        pnotify->NewCapture(pnotify, this, v10);
      }
      v18 = pnotify;
      v17.List = &this->CaptureNotifyList;
      v17.__vftable = (Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor_vtbl *)&Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor_OnNextCapture::`vftable';
      Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor::Visit(&v17);
      this->DIChangesRequired = 0;
      v17.__vftable = (Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor_vtbl *)&Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor::`vftable';
    }
    else if ( pnotify )
    {
      pnotify->NewCapture(pnotify, this, 0);
    }
    goto LABEL_20;
  }
  Scaleform::Render::ContextImpl::Context::clearRTHandleList(this);
  Scaleform::Render::ContextImpl::Context::shutdownRendering_NoLock(this);
  v20 = pnotify;
  v19.List = &this->CaptureNotifyList;
  v19.__vftable = (Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor_vtbl *)&Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor_OnNextCapture::`vftable';
  Scaleform::Render::ContextImpl::ContextCaptureNotifyListVisitor::Visit(&v19);
  this->DIChangesRequired = 0;
  v9 = 0;
LABEL_21:
  Scaleform::Lock::Unlock(&pObject->LockObject);
  return v9;
}

void __fastcall Scaleform::Render::ContextImpl::Context::nextCapture_NotifyChanges(
        Scaleform::Render::ContextImpl::Context *this,
        Scaleform::Render::ContextImpl::Snapshot *displaySnaphot,
        Scaleform::Render::ContextImpl::RenderNotify *pnotify)
{
  Scaleform::Render::ContextImpl::Snapshot *pNext; // rbx
  Scaleform::List2<Scaleform::Render::ContextImpl::Entry,Scaleform::Render::ContextImpl::EntryListAccessor> *p_DestroyedNodes; // rbp
  Scaleform::Render::ContextImpl::ContextLock *pObject; // rbx
  Scaleform::Render::ContextImpl::Entry *v9; // rdi
  Scaleform::Render::ContextImpl::RTHandle::HandleData *v10; // rax
  $4B3AFED15DEE8EF6678F7AEC98A907B6 *v11; // rdx

  if ( displaySnaphot )
  {
    pnotify->entryChanges(pnotify, this, &displaySnaphot->Changes, displaySnaphot->ForceUpdateImagesFlag);
    pNext = (Scaleform::Render::ContextImpl::Snapshot *)displaySnaphot->DestroyedNodes.Root.pNext;
    p_DestroyedNodes = &displaySnaphot->DestroyedNodes;
    displaySnaphot->ForceUpdateImagesFlag = 0;
    if ( pNext != (Scaleform::Render::ContextImpl::Snapshot *)&displaySnaphot->DestroyedNodes )
    {
      do
      {
        pnotify->entryDestroy(pnotify, (Scaleform::Render::ContextImpl::Entry *)pNext);
        pNext->SnapshotPages.Root.pPrev = (Scaleform::Render::ContextImpl::SnapshotPage *)2989;
        pNext = pNext->pNext;
      }
      while ( pNext != (Scaleform::Render::ContextImpl::Snapshot *)p_DestroyedNodes );
      pObject = this->pCaptureLock.pObject;
      v9 = displaySnaphot->DestroyedNodes.Root.pNext;
      Scaleform::Lock::DoLock(&pObject->LockObject);
      do
      {
        if ( ((__int64)v9->pNative & 1) != 0 )
        {
          v10 = this->RTHandleList.Root.pNext;
          v11 = &this->RenderNode.8;
          if ( this == (Scaleform::Render::ContextImpl::Context *)-192i64 )
            v11 = 0i64;
          while ( v10 != (Scaleform::Render::ContextImpl::RTHandle::HandleData *)v11 )
          {
            if ( v10->pEntry == v9 )
            {
              v10->pPrev->pNext = v10->pNext;
              v10->pNext->pPrev = v10->pPrev;
              v10->pPrev = (Scaleform::Render::ContextImpl::RTHandle::HandleData *)-1i64;
              v10->pNext = (Scaleform::Render::ContextImpl::RTHandle::HandleData *)-1i64;
              v10->State = State_Valid;
              v10->pEntry = 0i64;
              v9->pNative = (Scaleform::Render::ContextImpl::EntryData *)((unsigned __int64)v9->pNative & ~1ui64);
              break;
            }
            v10 = v10->pNext;
          }
        }
        v9 = v9->pNext;
      }
      while ( v9 != (Scaleform::Render::ContextImpl::Entry *)p_DestroyedNodes );
      Scaleform::Lock::Unlock(&pObject->LockObject);
    }
  }
}

void __fastcall Scaleform::Render::ContextImpl::Context::shutdownRendering_NoLock(
        Scaleform::Render::ContextImpl::Context *this)
{
  Scaleform::Render::ContextImpl::Snapshot *v2; // rax
  Scaleform::Render::ContextImpl::SnapshotPage *pNext; // rsi
  Scaleform::List<Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::ListNode<Scaleform::Render::ContextImpl::SnapshotPage> > *i; // r14
  Scaleform::Render::ContextImpl::EntryPage *pEntryPage; // rbx
  Scaleform::Render::TreeCacheNode **p_pRenderer; // rbx
  __int64 v7; // rdi

  if ( this->pRenderer )
  {
    v2 = this->pSnapshots[2];
    if ( v2 )
    {
      pNext = v2->SnapshotPages.Root.pNext;
      for ( i = &v2->SnapshotPages; pNext != (Scaleform::Render::ContextImpl::SnapshotPage *)i; pNext = pNext->pNext )
      {
        pEntryPage = pNext->pEntryPage;
        if ( pEntryPage )
        {
          p_pRenderer = &pEntryPage->Entries[0].pRenderer;
          v7 = 72i64;
          do
          {
            if ( *p_pRenderer != (Scaleform::Render::TreeCacheNode *)2989 && *p_pRenderer )
              this->pRenderer->entryFlush(this->pRenderer, (Scaleform::Render::ContextImpl::Entry *)(p_pRenderer - 3));
            p_pRenderer += 7;
            --v7;
          }
          while ( v7 );
        }
      }
      this->pRenderer->ContextReleased(this->pRenderer, this);
      if ( this->pShutdownEvent )
      {
        Scaleform::Event::SetEvent(this->pShutdownEvent);
        this->pShutdownEvent = 0i64;
      }
    }
  }
}

