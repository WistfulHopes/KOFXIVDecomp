#pragma once

struct AgMountEvent
{
	AgPointer<AgMount> mount; // 0x0
	AgMountEvent(AgMountEvent &);
	AgMountEvent(const AgMountEvent &);
	AgMountEvent();
	~AgMountEvent();
	AgMountEvent & operator=(AgMountEvent &);
	AgMountEvent & operator=(const AgMountEvent &);
};
struct AgUnmountEvent
{
	AgPointer<AgMount> mount; // 0x0
	AgUnmountEvent(AgUnmountEvent &);
	AgUnmountEvent(const AgUnmountEvent &);
	AgUnmountEvent();
	~AgUnmountEvent();
	AgUnmountEvent & operator=(AgUnmountEvent &);
	AgUnmountEvent & operator=(const AgUnmountEvent &);
};
enum AgMountError
{
	AgMountError_None = 0,
	AgMountError_Unknown = 1,
	AgMountError_NotOwned = 2,
	AgMountError_ApplicationError = 3,
	AgMountError_NotInitialized = 4,
	AgMountError_Corrupt = 5,
	AgMountError_DRM = 6,
	AgMountError_NoFreeSpaceQuota = 7,
	AgMountError_NoFreeSpace = 8,
	AgMountError_NoData = 9,
	AgMountError_SignedOut = 10,
	AgMountError_Synchronize = 11,
	AgMountError_Confirm = 12,
	AgMountError_Shutdown = 13,
	AgMountError_Cancelled = 14,
};
enum AgMountType
{
	AgMountType_Default = 0,
	AgMountType_Archive = 1,
	AgMountType_CloudSave = 2,
	AgMountType_Steam = 3,
};
struct AgMountErrorData
{
	AgMountErrorData(AgMountError, unsigned long long);
	AgMountError error; // 0x0
	unsigned long long systemError; // 0x8
	void __dflt_ctor_closure();
};
struct AgMountErrorEvent
{
	AgPointer<AgMount> mount; // 0x0
	AgPath path; // 0x10
	AgMountOperation operation; // 0x20
	unsigned long long expectedSize; // 0x28
	AgMountErrorData errorData; // 0x30
	AgPointer<AgBuffer<AgAllocator<1> > > data; // 0x40
	AgMountErrorEvent(AgMountErrorEvent &);
	AgMountErrorEvent(const AgMountErrorEvent &);
	AgMountErrorEvent();
	~AgMountErrorEvent();
	AgMountErrorEvent & operator=(AgMountErrorEvent &);
	AgMountErrorEvent & operator=(const AgMountErrorEvent &);
};
class AgPointer<AgBuffer<AgAllocator<1> > >
{
public:
	AgPointer<AgBuffer<AgAllocator<1> > >(const AgReference<AgBuffer<AgAllocator<1> > > &);
	AgPointer<AgBuffer<AgAllocator<1> > >(AgPointer<AgBuffer<AgAllocator<1> > > &);
	AgPointer<AgBuffer<AgAllocator<1> > >(const AgPointer<AgBuffer<AgAllocator<1> > > &);
	AgPointer<AgBuffer<AgAllocator<1> > >(AgBuffer<AgAllocator<1> > *);
	AgPointer<AgBuffer<AgAllocator<1> > >();
	~AgPointer<AgBuffer<AgAllocator<1> > >();
	AgPointer<AgBuffer<AgAllocator<1> > > & operator=(AgPointer<AgBuffer<AgAllocator<1> > > &);
	AgPointer<AgBuffer<AgAllocator<1> > > & operator=(const AgReference<AgBuffer<AgAllocator<1> > > &);
	AgPointer<AgBuffer<AgAllocator<1> > > & operator=(const AgPointer<AgBuffer<AgAllocator<1> > > &);
	AgPointer<AgBuffer<AgAllocator<1> > > & operator=(AgBuffer<AgAllocator<1> > *);
	bool operator<(const AgPointer<AgBuffer<AgAllocator<1> > > &);
	AgBuffer<AgAllocator<1> > * operator->();
	AgBuffer<AgAllocator<1> > & operator*();
	bool operator==(const AgPointer<AgBuffer<AgAllocator<1> > > &);
	bool operator==(AgBuffer<AgAllocator<1> > *);
	bool operator!=(const AgPointer<AgBuffer<AgAllocator<1> > > &);
	bool operator!=(AgBuffer<AgAllocator<1> > *);
	AgBuffer<AgAllocator<1> > * getObject();
	void swap(AgPointer<AgBuffer<AgAllocator<1> > > &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgBuffer<AgAllocator<1> > * m_ptr; // 0x8
};
struct AgMountWriteBeginEvent
{
	AgPointer<AgMount> mount; // 0x0
	AgMountWriteBeginEvent(AgMountWriteBeginEvent &);
	AgMountWriteBeginEvent(const AgMountWriteBeginEvent &);
	AgMountWriteBeginEvent();
	~AgMountWriteBeginEvent();
	AgMountWriteBeginEvent & operator=(AgMountWriteBeginEvent &);
	AgMountWriteBeginEvent & operator=(const AgMountWriteBeginEvent &);
};
struct AgMountWriteEndEvent
{
	AgPointer<AgMount> mount; // 0x0
	AgMountWriteEndEvent(AgMountWriteEndEvent &);
	AgMountWriteEndEvent(const AgMountWriteEndEvent &);
	AgMountWriteEndEvent();
	~AgMountWriteEndEvent();
	AgMountWriteEndEvent & operator=(AgMountWriteEndEvent &);
	AgMountWriteEndEvent & operator=(const AgMountWriteEndEvent &);
};
class AgMount :
	AgReferencedObject
{
public:
	AgMount(const AgString &, AgPointer<AgUser>);
	~AgMount();
	long isMounted();
	long hasError();
	long isModified();
	long isBusyWriting();
	void setModified(long);
	const AgString & getMountPoint();
	AgPointer<AgUser> getUser();
	long long getUserId();
	const AgMountErrorData & getErrorData();
	long waitMounted();
	long waitFinishedWriting();
	AgSilverWareDebugChannel & getChannel();
protected:
	AgMutex m_mutex; // 0x10
	long m_mounted; // 0x38
	AgMountErrorData m_error; // 0x40
	long m_modified; // 0x50
	AgPointer<AgUser> m_user; // 0x58
	AgString m_mountPoint; // 0x68
	void update();
public:
	void mount();
	void cancelMount();
	void unmount();
	void retry(const AgMountErrorEvent &);
	AgPointer<AgFile> open(const AgPath &, unsigned long);
	long move(const AgPath &, const AgPath &, long);
	long remove(const AgPath &);
	long exists(const AgPath &);
	AgPointer<AgDirectory> openDirectory(const AgPath &, AgStringRef, unsigned long);
	long createDirectory(const AgPath &, long);
	long removeDirectory(const AgPath &);
	long directoryExists(const AgPath &);
	AgPath expandPath(const AgPath &);
protected:
	void setMounted(long);
	void setError(const AgMountErrorData &);
	void setError(long);
	AgPath getMountPath(const AgString &);
private:
	void waitForStateChange();
	void signalStateChanged();
	void signalFinishedWriting();
	AgCondition m_stateChanged; // 0x78
	AgCondition m_finishedWriting; // 0xB0
	volatile long m_activeWriteOperations; // 0xE8
	AgSilverWareDebugChannel m_channel; // 0xF0
};
AgMount::~AgMount(); // 0x14066CBB0
void AgMount::retry(const AgMountErrorEvent & __formal); // 0x14002E7C0
long AgMount::createDirectory(const AgPath & __formal, long __formal); // 0x1400470F0
AgPath AgMount::expandPath(const AgPath & __formal); // 0x14066EE60