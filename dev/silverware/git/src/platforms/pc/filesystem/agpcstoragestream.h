#pragma once

class AgPCStorageStream :
	AgFile
{
private:
	virtual unsigned long read(unsigned char *, unsigned long);
	virtual unsigned long write(const unsigned char *, unsigned long);
	virtual unsigned long long getSize();
	virtual void setPosition(unsigned long long);
	virtual unsigned long long getPosition();
	virtual void close();
protected:
	virtual void _store();
public:
	AgPCStorageStream(const AgPCStorageStream &);
	AgPCStorageStream(AgPointer<AgPCStorageMount>, const AgPath &, unsigned long);
	virtual ~AgPCStorageStream();
private:
	_iobuf * m_file; // 0x98
};