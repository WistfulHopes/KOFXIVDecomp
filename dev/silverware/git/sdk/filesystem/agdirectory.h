#pragma once

class AgDirectory :
	AgReferencedObject
{
public:
	~AgDirectory();
	enum DirectoryEntryType
	{
		DirectoryEntryType_File = 0,
		DirectoryEntryType_Directory = 1,
		DirectoryEntryType_Invalid = 2,
	};
	enum DirectoryFilterMask
	{
		DirectoryFilterMask_Files = 1,
		DirectoryFilterMask_Directories = 2,
	};
	struct DirectoryEntry;
	static AgPointer<AgDirectory> open(const AgPath &, AgStringRef, unsigned long);
	static long create(const AgPath &, long);
	static long remove(const AgPath &);
	static long exists(const AgPath &);
	AgDirectory::DirectoryEntry nextEntry();
	AgDirectory::DirectoryEntry firstEntry();
	const AgPath & getPath();
	const AgString & getFilter();
	AgSilverWareDebugChannel & getChannel();
	AgDirectory(const AgDirectory &);
protected:
	AgDirectory(AgPointer<AgMount>, const AgPath &, AgStringRef, unsigned long);
	AgString m_filter; // 0x10
	AgPath m_path; // 0x20
	AgReference<AgMount> m_mount; // 0x30
	unsigned long m_mask; // 0x48
private:
	AgSilverWareDebugChannel m_channel; // 0x50
public:
	AgDirectory & operator=(const AgDirectory &);
};
AgDirectory::~AgDirectory(); // 0x14066FE20
struct AgDirectory::DirectoryEntry
{
	DirectoryEntry(AgDirectory::DirectoryEntry &);
	DirectoryEntry(const AgDirectory::DirectoryEntry &);
	DirectoryEntry();
	AgPath m_path; // 0x0
	AgDirectory::DirectoryEntryType m_type; // 0x10
	long m_exists; // 0x14
	void * m_internalData; // 0x18
	~DirectoryEntry();
	AgDirectory::DirectoryEntry & operator=(AgDirectory::DirectoryEntry &);
	AgDirectory::DirectoryEntry & operator=(const AgDirectory::DirectoryEntry &);
};
class AgPointer<AgDirectory>
{
public:
	AgPointer<AgDirectory>(const AgReference<AgDirectory> &);
	AgPointer<AgDirectory>(AgPointer<AgDirectory> &);
	AgPointer<AgDirectory>(const AgPointer<AgDirectory> &);
	AgPointer<AgDirectory>(AgDirectory *);
	AgPointer<AgDirectory>();
	~AgPointer<AgDirectory>();
	AgPointer<AgDirectory> & operator=(AgPointer<AgDirectory> &);
	AgPointer<AgDirectory> & operator=(const AgReference<AgDirectory> &);
	AgPointer<AgDirectory> & operator=(const AgPointer<AgDirectory> &);
	AgPointer<AgDirectory> & operator=(AgDirectory *);
	bool operator<(const AgPointer<AgDirectory> &);
	AgDirectory * operator->();
	AgDirectory & operator*();
	bool operator==(const AgPointer<AgDirectory> &);
	bool operator==(AgDirectory *);
	bool operator!=(const AgPointer<AgDirectory> &);
	bool operator!=(AgDirectory *);
	AgDirectory * getObject();
	void swap(AgPointer<AgDirectory> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgDirectory * m_ptr; // 0x8
};