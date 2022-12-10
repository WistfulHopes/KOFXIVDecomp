#pragma once

class AgArchiveFile :
	AgFile
{
public:
	AgArchiveFile(const AgArchiveFile &);
	AgArchiveFile(AgReference<AgArchive>, unsigned long long, unsigned long long, const AgPath &, long);
	virtual ~AgArchiveFile();
	virtual unsigned long read(unsigned char *, unsigned long);
	virtual unsigned long write(const unsigned char *, unsigned long);
	virtual unsigned long long getSize();
	virtual void setPosition(unsigned long long);
	virtual unsigned long long getPosition();
	virtual void close();
protected:
	virtual void _store();
private:
	AgReference<AgArchive> m_archive; // 0x98
	unsigned long long m_startOffset; // 0xB0
	unsigned long long m_size; // 0xB8
	AgArchiveFileInternalData * m_internalData; // 0xC0
	unsigned char * m_decryptBuffer; // 0xC8
	unsigned long m_decryptBufferPos; // 0xD0
};
class AgReference<AgArchive>
{
public:
	AgReference<AgArchive>(const AgPointer<AgArchive> &);
	AgReference<AgArchive>(const AgReference<AgArchive> &);
	AgReference<AgArchive>();
	~AgReference<AgArchive>();
	AgReference<AgArchive> operator=(const AgPointer<AgArchive> &);
	AgReference<AgArchive> operator=(const AgReference<AgArchive> &);
	bool operator!=(const AgReference<AgArchive> &);
	bool operator!=(AgArchive *);
	bool operator==(const AgReference<AgArchive> &);
	bool operator==(AgArchive *);
	AgPointer<AgArchive> getPtr();
	void swap(AgReference<AgArchive> &);
private:
	AgReferenceCount * m_ref; // 0x8
	AgArchive * m_ptr; // 0x10
};
void AgArchiveFile::_store(); // 0x14002E7C0