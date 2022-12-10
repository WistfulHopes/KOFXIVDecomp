#pragma once

#include "agpointer.h"
#include "filesystem/agdirectory.h"
#include <vector>

class AgArchiveDirectory :
	AgDirectory
{
public:
	virtual ~AgArchiveDirectory();
	virtual AgDirectory::DirectoryEntry nextEntry();
	virtual AgDirectory::DirectoryEntry firstEntry();
protected:
	void addEntry(const AgStringRef, long);
public:
	AgArchiveDirectory(const AgArchiveDirectory &);
protected:
	AgArchiveDirectory(AgPointer<AgMount>, const AgPath &, AgStringRef, unsigned long);
	std::vector<AgDirectory::DirectoryEntry> m_entries; // 0x88
public:
	AgArchiveDirectory & operator=(const AgArchiveDirectory &);
};