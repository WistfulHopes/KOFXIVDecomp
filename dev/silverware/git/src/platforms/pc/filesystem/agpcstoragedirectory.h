#pragma once

class AgPCStorageDirectory :
	AgDirectory
{
public:
	virtual AgDirectory::DirectoryEntry nextEntry();
	virtual AgDirectory::DirectoryEntry firstEntry();
	struct AgPCStorageDirectoryInternalData;
	AgPCStorageDirectory(const AgPCStorageDirectory &);
protected:
	AgPCStorageDirectory(AgPointer<AgPCStorageMount>, const AgPath &, const AgPath &, AgStringRef, unsigned long);
	virtual ~AgPCStorageDirectory();
	AgPCStorageDirectory::AgPCStorageDirectoryInternalData * m_internalData; // 0x88
private:
	AgPath m_systemPath; // 0x90
public:
	AgPCStorageDirectory & operator=(const AgPCStorageDirectory &);
};