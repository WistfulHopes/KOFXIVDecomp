#pragma once

class AgPointer<AgMount>
{
public:
	AgPointer<AgMount>(const AgReference<AgMount> &);
	AgPointer<AgMount>(AgPointer<AgMount> &);
	AgPointer<AgMount>(const AgPointer<AgMount> &);
	AgPointer<AgMount>(AgMount *);
	AgPointer<AgMount>();
	~AgPointer<AgMount>();
	AgPointer<AgMount> & operator=(AgPointer<AgMount> &);
	AgPointer<AgMount> & operator=(const AgReference<AgMount> &);
	AgPointer<AgMount> & operator=(const AgPointer<AgMount> &);
	AgPointer<AgMount> & operator=(AgMount *);
	bool operator<(const AgPointer<AgMount> &);
	AgMount * operator->();
	AgMount & operator*();
	bool operator==(const AgPointer<AgMount> &);
	bool operator==(AgMount *);
	bool operator!=(const AgPointer<AgMount> &);
	bool operator!=(AgMount *);
	AgMount * getObject();
	void swap(AgPointer<AgMount> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgMount * m_ptr; // 0x8
};
class AgReference<AgMount>
{
public:
	AgReference<AgMount>(const AgPointer<AgMount> &);
	AgReference<AgMount>(const AgReference<AgMount> &);
	AgReference<AgMount>();
	~AgReference<AgMount>();
	AgReference<AgMount> operator=(const AgPointer<AgMount> &);
	AgReference<AgMount> operator=(const AgReference<AgMount> &);
	bool operator!=(const AgReference<AgMount> &);
	bool operator!=(AgMount *);
	bool operator==(const AgReference<AgMount> &);
	bool operator==(AgMount *);
	AgPointer<AgMount> getPtr();
	void swap(AgReference<AgMount> &);
private:
	AgReferenceCount * m_ref; // 0x8
	AgMount * m_ptr; // 0x10
};
enum AgAccessMode
{
	AgAccessMode_Unknown = 0,
	AgAccessMode_Read = 1,
	AgAccessMode_Write = 2,
	AgAccessMode_ForceSync = 4,
	AgAccessMode_Append = 8,
};
enum AgMountPoint
{
	AgMountPoint_Unknown = 0,
	AgMountPoint_Content = 1,
	AgMountPoint_Config = 2,
	AgMountPoint_SaveData = 3,
	AgMountPoint_System = 4,
	AgMountPoint_CloudData = 5,
	AgMountPoint_Temp = 6,
	AgMountPoint_Internal = 7,
	AgMountPoint_Count = 8,
};
enum AgFileError
{
	AgFileError_None = 0,
	AgFileError_Unknown = 1,
	AgFileError_NotFound = 2,
};
struct AgFileErrorData
{
	AgFileErrorData(AgFileError, unsigned long long);
	AgFileError error; // 0x0
	unsigned long long systemError; // 0x8
	void __dflt_ctor_closure();
};
class AgFile :
	AgStream
{
public:
	static AgPointer<AgFile> open(const AgPath &, unsigned long, long);
	static long remove(const AgPath &);
	static long copy(const AgPath &, const AgPath &, long);
	static long exists(const AgPath &);
	AgFile(const AgFile &);
	AgFile(AgPointer<AgMount>, const AgPath &, unsigned long);
	virtual ~AgFile();
	long isOpen();
	long isStoring();
	long isFlushed();
	long isModified();
	long hasError();
	long waitOpen();
	long waitStored();
	unsigned long getAccessMode();
	const AgPath & getPath();
	const AgFileErrorData & getErrorData();
	AgSilverWareDebugChannel & getChannel();
protected:
	void setOpen(long);
	void setError(const AgFileErrorData &);
	void setError(long);
	void setModified(long);
	void setFlushed(long);
	void setStoring(long);
	void _store();
public:
	void flush();
	void close();
	virtual AgStringRef getName();
	unsigned long read(unsigned char *, unsigned long) = 0;
	unsigned long write(const unsigned char *, unsigned long) = 0;
	unsigned long long getSize() = 0;
	void setPosition(unsigned long long) = 0;
	unsigned long long getPosition() = 0;
	virtual long isValid();
protected:
	AgMutex & m_mutex; // 0x10
	AgPointer<AgMount> m_mount; // 0x18
	AgPath m_path; // 0x28
	unsigned long m_accessMode; // 0x38
private:
	void waitForStateChange();
	void signalStateChanged();
	void postStoreJob();
	void internalClose();
	void operator=(const AgFile &);
	long m_open; // 0x3C
	long m_flushed; // 0x40
	long m_modified; // 0x44
	long m_storing; // 0x48
	AgFileErrorData m_error; // 0x50
	AgSilverWareDebugChannel m_channel; // 0x60
};
class AgPointer<AgFile>
{
public:
	AgPointer<AgFile>(const AgReference<AgFile> &);
	AgPointer<AgFile>(AgPointer<AgFile> &);
	AgPointer<AgFile>(const AgPointer<AgFile> &);
	AgPointer<AgFile>(AgFile *);
	AgPointer<AgFile>();
	~AgPointer<AgFile>();
	AgPointer<AgFile> & operator=(AgPointer<AgFile> &);
	AgPointer<AgFile> & operator=(const AgReference<AgFile> &);
	AgPointer<AgFile> & operator=(const AgPointer<AgFile> &);
	AgPointer<AgFile> & operator=(AgFile *);
	bool operator<(const AgPointer<AgFile> &);
	AgFile * operator->();
	AgFile & operator*();
	bool operator==(const AgPointer<AgFile> &);
	bool operator==(AgFile *);
	bool operator!=(const AgPointer<AgFile> &);
	bool operator!=(AgFile *);
	AgFile * getObject();
	void swap(AgPointer<AgFile> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgFile * m_ptr; // 0x8
};
class AgPointer<AgFile>
{
public:
	AgPointer<AgFile>(const AgReference<AgFile> &);
	AgPointer<AgFile>(AgPointer<AgFile> &);
	AgPointer<AgFile>(const AgPointer<AgFile> &);
	AgPointer<AgFile>(AgFile *);
	AgPointer<AgFile>();
	~AgPointer<AgFile>();
	AgPointer<AgFile> & operator=(AgPointer<AgFile> &);
	AgPointer<AgFile> & operator=(const AgReference<AgFile> &);
	AgPointer<AgFile> & operator=(const AgPointer<AgFile> &);
	AgPointer<AgFile> & operator=(AgFile *);
	bool operator<(const AgPointer<AgFile> &);
	AgFile * operator->();
	AgFile & operator*();
	bool operator==(const AgPointer<AgFile> &);
	bool operator==(AgFile *);
	bool operator!=(const AgPointer<AgFile> &);
	bool operator!=(AgFile *);
	AgFile * getObject();
	void swap(AgPointer<AgFile> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgFile * m_ptr; // 0x8
public:
	AgPointer<AgStream> operator class AgPointer<class AgStream>();
};
AgStringRef AgFile::getName(); // 0x14065F7C0
long AgFile::isValid(); // 0x14065F7E0