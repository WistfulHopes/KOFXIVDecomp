#pragma once

class AgVirtualFileStream :
	AgFile
{
public:
	virtual unsigned long read(unsigned char *, unsigned long);
	virtual unsigned long write(const unsigned char *, unsigned long);
	virtual unsigned long long getSize();
	virtual void setPosition(unsigned long long);
	virtual unsigned long long getPosition();
protected:
	virtual void _store();
public:
	AgVirtualFileStream(const AgVirtualFileStream &);
	AgVirtualFileStream(AgPointer<AgMount>, const AgPath &, unsigned long);
	AgVirtualFileStream(AgPointer<AgBuffer<AgAllocator<1> > >, AgPointer<AgMount>, const AgPath &, unsigned long);
	virtual ~AgVirtualFileStream();
	void _setBuffer(AgPointer<AgBuffer<AgAllocator<1> > >);
protected:
	AgBufferStream<AgBuffer<AgAllocator<1> > > m_internalStream; // 0x98
};