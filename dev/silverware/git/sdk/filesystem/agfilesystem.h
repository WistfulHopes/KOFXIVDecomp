#pragma once

class AgSingleton<AgFileSystem>
{
protected:
	~AgSingleton<AgFileSystem>();
	long onSingletonInit();
	long onSingletonExit();
public:
	static long createInstance();
	static long destroyInstance();
	static AgFileSystem & getInstance();
	static long hasInstance();
private:
	static AgFileSystem * createSingleton();
	static void destroySingleton(AgFileSystem *);
	static AgSingleton<AgFileSystem> * ms_instance; // 0xFFFFFFFFFFFFFFFF
public:
	AgSingleton<AgFileSystem>(const AgSingleton<AgFileSystem> &);
	AgSingleton<AgFileSystem>();
	AgSingleton<AgFileSystem> & operator=(const AgSingleton<AgFileSystem> &);
};
class AgFileSystem :
	AgSingleton<AgFileSystem>
{
	class MountMap;
public:
	AgFileSystem();
	long hasMount(const AgString &);
	AgPointer<AgMount> getMount(const AgString &);
	void unmount(AgPointer<AgMount>);
	void unmount(const AgString &);
	AgPointer<AgMount> mount(AgMountPoint, AgMountType);
	void mount(AgPointer<AgMount>);
	void addMount(AgPointer<AgMount>);
	void removeMount(AgPointer<AgMount>);
	long exists(const AgPath &);
	AgPointer<AgFile> open(const AgPath &, unsigned long);
	long remove(const AgPath &);
	long copy(const AgPath &, const AgPath &, long);
	long createDirectory(const AgPath &, long);
	long removeDirectory(const AgPath &);
	long directoryExists(const AgPath &);
	AgPointer<AgDirectory> openDirectory(const AgPath &, AgStringRef, unsigned long);
	AgPath expandPath(const AgPath &);
	void registerSaveErrorHandler();
private:
	void _mountError(const AgMountErrorEvent &);
	void _handleSaveError(AgPointer<AgDialog>);
	void _showConfirmDelete(const AgMountErrorEvent &);
	void _handleConfirmDelete(AgPointer<AgDialog>);
public:
	static AgString getMountName(AgMountPoint);
	static void setMountPointPath(AgMountPoint, const AgPath &, long);
	static const AgPath & getMountPath(AgMountPoint);
	static AgPath getUserMountName(AgPointer<AgUser>);
	static AgPath getUserMountPath(AgPointer<AgUser>);
private:
	static AgPath ms_mountPointPaths[8]; // 0xFFFFFFFFFFFFFFFF
	static long ms_nextInternalId; // 0xFFFFFFFFFFFFFFFF
	AgMutex m_mutex; // 0x8
	std::map<AgString,AgPointer<AgMount>,std::less<AgString>,std::allocator<std::pair<AgString const ,AgPointer<AgMount> > > > m_mounts; // 0x30
public:
	static AgFileSystem * createSingleton();
protected:
	virtual long onSingletonInit();
	virtual long onSingletonExit();
public:
	void update();
	AgPointer<AgMount> createMount(const AgString &, AgMountType, AgStringRef, AgPointer<AgUser>);
	AgPointer<AgMount> mountUser(AgPointer<AgUser>);
	void onWriteBegin(AgPointer<AgMount>);
	void onWriteEnd(AgPointer<AgMount>);
	void onMounted(const AgMountEvent &);
	void onUnmounted(const AgUnmountEvent &);
	AgAsyncEventDispatcher<AgMountEvent> Mount; // 0x40
	AgAsyncEventDispatcher<AgUnmountEvent> Unmount; // 0xC0
	AgAsyncEventDispatcher<AgMountErrorEvent> Error; // 0x140
	AgAsyncEventDispatcher<AgMountWriteBeginEvent> WriteBegin; // 0x1C0
	AgAsyncEventDispatcher<AgMountWriteEndEvent> WriteEnd; // 0x240
	virtual ~AgFileSystem();
};
class std::map<AgString,AgPointer<AgMount>,std::less<AgString>,std::allocator<std::pair<AgString const ,AgPointer<AgMount> > > > :
	std::_Tree<std::_Tmap_traits<AgString,AgPointer<AgMount>,std::less<AgString>,std::allocator<std::pair<AgString const ,AgPointer<AgMount> > >,0> >
{
	class _Myt;
	class _Mybase;
	class key_type;
	class mapped_type;
	struct key_compare;
	class value_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<AgString const ,AgPointer<AgMount> > pointer;
	typedef const std::pair<AgString const ,AgPointer<AgMount> > const_pointer;
	typedef std::pair<AgString const ,AgPointer<AgMount> > reference;
	typedef const std::pair<AgString const ,AgPointer<AgMount> > const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<AgString,AgPointer<AgMount>,std::less<AgString>,std::allocator<std::pair<AgString const ,AgPointer<AgMount> > > >(std::initializer_list<std::pair<AgString const ,AgPointer<AgMount> > >, const std::less<AgString> &, const std::allocator<std::pair<AgString const ,AgPointer<AgMount> > > &);
	map<AgString,AgPointer<AgMount>,std::less<AgString>,std::allocator<std::pair<AgString const ,AgPointer<AgMount> > > >(std::initializer_list<std::pair<AgString const ,AgPointer<AgMount> > >, const std::less<AgString> &);
	map<AgString,AgPointer<AgMount>,std::less<AgString>,std::allocator<std::pair<AgString const ,AgPointer<AgMount> > > >(std::initializer_list<std::pair<AgString const ,AgPointer<AgMount> > >);
	map<AgString,AgPointer<AgMount>,std::less<AgString>,std::allocator<std::pair<AgString const ,AgPointer<AgMount> > > >(std::map<AgString,AgPointer<AgMount>,std::less<AgString>,std::allocator<std::pair<AgString const ,AgPointer<AgMount> > > > &, const std::allocator<std::pair<AgString const ,AgPointer<AgMount> > > &);
	map<AgString,AgPointer<AgMount>,std::less<AgString>,std::allocator<std::pair<AgString const ,AgPointer<AgMount> > > >(std::map<AgString,AgPointer<AgMount>,std::less<AgString>,std::allocator<std::pair<AgString const ,AgPointer<AgMount> > > > &);
	map<AgString,AgPointer<AgMount>,std::less<AgString>,std::allocator<std::pair<AgString const ,AgPointer<AgMount> > > >(const std::less<AgString> &, const std::allocator<std::pair<AgString const ,AgPointer<AgMount> > > &);
	map<AgString,AgPointer<AgMount>,std::less<AgString>,std::allocator<std::pair<AgString const ,AgPointer<AgMount> > > >(const std::less<AgString> &);
	map<AgString,AgPointer<AgMount>,std::less<AgString>,std::allocator<std::pair<AgString const ,AgPointer<AgMount> > > >(const std::map<AgString,AgPointer<AgMount>,std::less<AgString>,std::allocator<std::pair<AgString const ,AgPointer<AgMount> > > > &, const std::allocator<std::pair<AgString const ,AgPointer<AgMount> > > &);
	map<AgString,AgPointer<AgMount>,std::less<AgString>,std::allocator<std::pair<AgString const ,AgPointer<AgMount> > > >(const std::map<AgString,AgPointer<AgMount>,std::less<AgString>,std::allocator<std::pair<AgString const ,AgPointer<AgMount> > > > &);
	map<AgString,AgPointer<AgMount>,std::less<AgString>,std::allocator<std::pair<AgString const ,AgPointer<AgMount> > > >(const std::allocator<std::pair<AgString const ,AgPointer<AgMount> > > &);
	map<AgString,AgPointer<AgMount>,std::less<AgString>,std::allocator<std::pair<AgString const ,AgPointer<AgMount> > > >();
	std::map<AgString,AgPointer<AgMount>,std::less<AgString>,std::allocator<std::pair<AgString const ,AgPointer<AgMount> > > > & operator=(std::initializer_list<std::pair<AgString const ,AgPointer<AgMount> > >);
	std::map<AgString,AgPointer<AgMount>,std::less<AgString>,std::allocator<std::pair<AgString const ,AgPointer<AgMount> > > > & operator=(std::map<AgString,AgPointer<AgMount>,std::less<AgString>,std::allocator<std::pair<AgString const ,AgPointer<AgMount> > > > &);
	std::map<AgString,AgPointer<AgMount>,std::less<AgString>,std::allocator<std::pair<AgString const ,AgPointer<AgMount> > > > & operator=(const std::map<AgString,AgPointer<AgMount>,std::less<AgString>,std::allocator<std::pair<AgString const ,AgPointer<AgMount> > > > &);
	AgPointer<AgMount> & operator[](const AgString &);
	AgPointer<AgMount> & operator[](AgString &);
	void swap(std::map<AgString,AgPointer<AgMount>,std::less<AgString>,std::allocator<std::pair<AgString const ,AgPointer<AgMount> > > > &);
	const AgPointer<AgMount> & at(const AgString &);
	AgPointer<AgMount> & at(const AgString &);
	~map<AgString,AgPointer<AgMount>,std::less<AgString>,std::allocator<std::pair<AgString const ,AgPointer<AgMount> > > >();
};
struct std::less<AgString>
{
	class first_argument_type;
	class second_argument_type;
	typedef bool result_type;
	bool operator()(const AgString &, const AgString &);
};
class AgPointer<AgDialog>
{
public:
	AgPointer<AgDialog>(const AgReference<AgDialog> &);
	AgPointer<AgDialog>(AgPointer<AgDialog> &);
	AgPointer<AgDialog>(const AgPointer<AgDialog> &);
	AgPointer<AgDialog>(AgDialog *);
	AgPointer<AgDialog>();
	~AgPointer<AgDialog>();
	AgPointer<AgDialog> & operator=(AgPointer<AgDialog> &);
	AgPointer<AgDialog> & operator=(const AgReference<AgDialog> &);
	AgPointer<AgDialog> & operator=(const AgPointer<AgDialog> &);
	AgPointer<AgDialog> & operator=(AgDialog *);
	bool operator<(const AgPointer<AgDialog> &);
	AgDialog * operator->();
	AgDialog & operator*();
	bool operator==(const AgPointer<AgDialog> &);
	bool operator==(AgDialog *);
	bool operator!=(const AgPointer<AgDialog> &);
	bool operator!=(AgDialog *);
	AgDialog * getObject();
	void swap(AgPointer<AgDialog> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgDialog * m_ptr; // 0x8
};
class AgAsyncEventDispatcher<AgMountEvent> :
	AgEventDispatcherBase<AgMountEvent>
{
	class EventQueue;
public:
	void reserve(unsigned long);
	void run();
	void invoke(AgMountEvent &);
	void invoke(const AgMountEvent &);
	void operator()(AgMountEvent &);
	void operator()(const AgMountEvent &);
private:
	AgMutex m_queueMutex; // 0x40
	std::vector<AgMountEvent,std::allocator<AgMountEvent> > m_eventQueue; // 0x68
public:
	AgAsyncEventDispatcher<AgMountEvent>();
	~AgAsyncEventDispatcher<AgMountEvent>();
};
class AgAsyncEventDispatcher<AgUnmountEvent> :
	AgEventDispatcherBase<AgUnmountEvent>
{
	class EventQueue;
public:
	void reserve(unsigned long);
	void run();
	void invoke(AgUnmountEvent &);
	void invoke(const AgUnmountEvent &);
	void operator()(AgUnmountEvent &);
	void operator()(const AgUnmountEvent &);
private:
	AgMutex m_queueMutex; // 0x40
	std::vector<AgUnmountEvent,std::allocator<AgUnmountEvent> > m_eventQueue; // 0x68
public:
	AgAsyncEventDispatcher<AgUnmountEvent>();
	~AgAsyncEventDispatcher<AgUnmountEvent>();
};
class AgAsyncEventDispatcher<AgMountErrorEvent> :
	AgEventDispatcherBase<AgMountErrorEvent>
{
	class EventQueue;
public:
	void reserve(unsigned long);
	void run();
	void invoke(AgMountErrorEvent &);
	void invoke(const AgMountErrorEvent &);
	void operator()(AgMountErrorEvent &);
	void operator()(const AgMountErrorEvent &);
private:
	AgMutex m_queueMutex; // 0x40
	std::vector<AgMountErrorEvent,std::allocator<AgMountErrorEvent> > m_eventQueue; // 0x68
public:
	AgAsyncEventDispatcher<AgMountErrorEvent>();
	~AgAsyncEventDispatcher<AgMountErrorEvent>();
};
class AgAsyncEventDispatcher<AgMountWriteBeginEvent> :
	AgEventDispatcherBase<AgMountWriteBeginEvent>
{
	class EventQueue;
public:
	void reserve(unsigned long);
	void run();
	void invoke(AgMountWriteBeginEvent &);
	void invoke(const AgMountWriteBeginEvent &);
	void operator()(AgMountWriteBeginEvent &);
	void operator()(const AgMountWriteBeginEvent &);
private:
	AgMutex m_queueMutex; // 0x40
	std::vector<AgMountWriteBeginEvent,std::allocator<AgMountWriteBeginEvent> > m_eventQueue; // 0x68
public:
	AgAsyncEventDispatcher<AgMountWriteBeginEvent>();
	~AgAsyncEventDispatcher<AgMountWriteBeginEvent>();
};
class AgAsyncEventDispatcher<AgMountWriteEndEvent> :
	AgEventDispatcherBase<AgMountWriteEndEvent>
{
	class EventQueue;
public:
	void reserve(unsigned long);
	void run();
	void invoke(AgMountWriteEndEvent &);
	void invoke(const AgMountWriteEndEvent &);
	void operator()(AgMountWriteEndEvent &);
	void operator()(const AgMountWriteEndEvent &);
private:
	AgMutex m_queueMutex; // 0x40
	std::vector<AgMountWriteEndEvent,std::allocator<AgMountWriteEndEvent> > m_eventQueue; // 0x68
public:
	AgAsyncEventDispatcher<AgMountWriteEndEvent>();
	~AgAsyncEventDispatcher<AgMountWriteEndEvent>();
};