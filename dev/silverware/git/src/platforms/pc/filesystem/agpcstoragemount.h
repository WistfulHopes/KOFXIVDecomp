#pragma once

struct AgPCStorageMount :
	AgMount
{
	AgPCStorageMount(const AgString &, const AgPath &, AgPointer<AgUser>);
	virtual AgPointer<AgFile> open(const AgPath &, unsigned long);
	virtual AgPointer<AgDirectory> openDirectory(const AgPath &, AgStringRef, unsigned long);
	virtual long createDirectory(const AgPath &, long);
	virtual long removeDirectory(const AgPath &);
	virtual long directoryExists(const AgPath &);
	virtual long exists(const AgPath &);
	virtual long move(const AgPath &, const AgPath &, long);
	virtual long remove(const AgPath &);
	virtual AgPath expandPath(const AgPath &);
	static std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > convertToWidePath(const AgPath &);
protected:
	virtual void mount();
private:
	long createDirectoryRecursive(const AgPath &);
	AgPath m_systemPath; // 0x128
public:
	virtual ~AgPCStorageMount();
};
AgPCStorageMount::AgPCStorageMount(const AgString & mountPoint, const AgPath & systemPath, AgPointer<AgUser> user); // 0x14068D230
class AgPointer<AgPCStorageMount>
{
public:
	AgPointer<AgPCStorageMount>(const AgReference<AgPCStorageMount> &);
	AgPointer<AgPCStorageMount>(AgPointer<AgPCStorageMount> &);
	AgPointer<AgPCStorageMount>(const AgPointer<AgPCStorageMount> &);
	AgPointer<AgPCStorageMount>(AgPCStorageMount *);
	AgPointer<AgPCStorageMount>();
	~AgPointer<AgPCStorageMount>();
	AgPointer<AgPCStorageMount> & operator=(AgPointer<AgPCStorageMount> &);
	AgPointer<AgPCStorageMount> & operator=(const AgReference<AgPCStorageMount> &);
	AgPointer<AgPCStorageMount> & operator=(const AgPointer<AgPCStorageMount> &);
	AgPointer<AgPCStorageMount> & operator=(AgPCStorageMount *);
	bool operator<(const AgPointer<AgPCStorageMount> &);
	AgPCStorageMount * operator->();
	AgPCStorageMount & operator*();
	bool operator==(const AgPointer<AgPCStorageMount> &);
	bool operator==(AgPCStorageMount *);
	bool operator!=(const AgPointer<AgPCStorageMount> &);
	bool operator!=(AgPCStorageMount *);
	AgPCStorageMount * getObject();
	void swap(AgPointer<AgPCStorageMount> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgPCStorageMount * m_ptr; // 0x8
public:
	AgPointer<AgMount> operator class AgPointer<class AgMount>();
};
class AgPointer<AgPCStorageMount>
{
public:
	AgPointer<AgPCStorageMount>(const AgReference<AgPCStorageMount> &);
	AgPointer<AgPCStorageMount>(AgPointer<AgPCStorageMount> &);
	AgPointer<AgPCStorageMount>(const AgPointer<AgPCStorageMount> &);
	AgPointer<AgPCStorageMount>(AgPCStorageMount *);
	AgPointer<AgPCStorageMount>();
	~AgPointer<AgPCStorageMount>();
	AgPointer<AgPCStorageMount> & operator=(AgPointer<AgPCStorageMount> &);
	AgPointer<AgPCStorageMount> & operator=(const AgReference<AgPCStorageMount> &);
	AgPointer<AgPCStorageMount> & operator=(const AgPointer<AgPCStorageMount> &);
	AgPointer<AgPCStorageMount> & operator=(AgPCStorageMount *);
	bool operator<(const AgPointer<AgPCStorageMount> &);
	AgPCStorageMount * operator->();
	AgPCStorageMount & operator*();
	bool operator==(const AgPointer<AgPCStorageMount> &);
	bool operator==(AgPCStorageMount *);
	bool operator!=(const AgPointer<AgPCStorageMount> &);
	bool operator!=(AgPCStorageMount *);
	AgPCStorageMount * getObject();
	void swap(AgPointer<AgPCStorageMount> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgPCStorageMount * m_ptr; // 0x8
};