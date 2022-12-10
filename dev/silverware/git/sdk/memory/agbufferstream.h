#pragma once

AgStringRef AgBufferStream<AgBuffer<AgAllocator<1> > >::getName(); // 0x14065C930
void AgBufferStream<AgBuffer<AgAllocator<1> > >::setPosition(unsigned long long value); // 0x14069E1E0
unsigned long long AgBufferStream<AgBuffer<AgAllocator<1> > >::getPosition(); // 0x1406B4B30
long AgBufferStream<AgBuffer<AgAllocator<1> > >::isResident(); // 0x1400482A0
unsigned char * AgBufferStream<AgBuffer<AgAllocator<1> > >::getResidentData(); // 0x14069D9E0
long AgBufferStream<AgBuffer<AgAllocator<1> > >::getResidentType(); // 0x14069DA00
AgPointer<AgStream> AgBufferStream<AgBuffer<AgAllocator<1> > >::clone(); // 0x14069D920
AgPointer<AgBuffer<AgAllocator<1> > > AgBufferStream<AgBuffer<AgAllocator<1> > >::getBuffer(); // 0x14069D9A0
void AgBufferStream<AgBuffer<AgAllocator<1> > >::operator delete(void * p); // 0x14069D570
AgBufferStream<AgBuffer<AgAllocator<1> > >::AgBufferStream<AgBuffer<AgAllocator<1> > >(const AgBufferStream<AgBuffer<AgAllocator<1> > > & stream); // 0x14069D050
unsigned long long AgBufferStream<AgBuffer<AgAllocator<1> > >::getSize(); // 0x14069DA10
unsigned long AgBufferStream<AgBuffer<AgAllocator<1> > >::read(unsigned char * buffer, unsigned long size); // 0x14069DCD0
unsigned long AgBufferStream<AgBuffer<AgAllocator<1> > >::write(const unsigned char * buffer, unsigned long size); // 0x14069E4A0
class AgBufferStream<AgBuffer<AgAllocator<1> > > :
	AgStream
{
public:
	AgBufferStream<AgBuffer<AgAllocator<1> > >(const AgPointer<AgBuffer<AgAllocator<1> > > &, unsigned long long, unsigned long long);
	AgBufferStream<AgBuffer<AgAllocator<1> > >(const AgBufferStream<AgBuffer<AgAllocator<1> > > &);
	virtual AgStringRef getName();
	virtual unsigned long read(unsigned char *, unsigned long);
	virtual unsigned long write(const unsigned char *, unsigned long);
	virtual unsigned long long getSize();
	virtual void setPosition(unsigned long long);
	virtual unsigned long long getPosition();
	virtual long isResident();
	virtual unsigned char * getResidentData();
	virtual long getResidentType();
	virtual AgPointer<AgStream> clone();
	AgPointer<AgBuffer<AgAllocator<1> > > getBuffer();
	unsigned long long getBufferSize();
private:
	AgPointer<AgBuffer<AgAllocator<1> > > m_buffer; // 0x10
	unsigned long long m_bufferOffset; // 0x20
	unsigned long long m_bufferSize; // 0x28
	unsigned long long m_bufferPosition; // 0x30
public:
	static void * operator new(unsigned long long);
	static void operator delete(void *);
private:
	static AgMemoryPoolLocked s_pool; // 0xFFFFFFFFFFFFFFFF
public:
	virtual ~AgBufferStream<AgBuffer<AgAllocator<1> > >();
	AgBufferStream<AgBuffer<AgAllocator<1> > > & operator=(const AgBufferStream<AgBuffer<AgAllocator<1> > > &);
};