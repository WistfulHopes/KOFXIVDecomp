#pragma once

enum AgBufferFlags
{
	AgBufferFlag_None = 0,
	AgBufferFlag_Read = 1,
	AgBufferFlag_Write = 2,
	AgBufferFlag_Resizable = 4,
	AgBufferFlags_Default = 7,
};
void AgBuffer<AgAllocator<1> >::reset(unsigned long long size); // 0x1406868E0
void AgBuffer<AgAllocator<1> >::resize(unsigned long long size); // 0x14069E120
class AgBuffer<AgAllocator<1> > :
	AgReferencedObject
{
public:
	AgBuffer<AgAllocator<1> >(const AgBuffer<AgAllocator<1> > &);
	AgBuffer<AgAllocator<1> >(const AgBuffer<AgAllocator<1> > &, unsigned long long);
	AgBuffer<AgAllocator<1> >(const AgBuffer<AgAllocator<1> > &, unsigned long long, unsigned long);
	AgBuffer<AgAllocator<1> >(unsigned char *, unsigned long long, unsigned long long, unsigned long, AgAllocator<1>);
	AgBuffer<AgAllocator<1> >(unsigned long long, unsigned long long, unsigned long, AgAllocator<1>);
	~AgBuffer<AgAllocator<1> >();
	void reset(unsigned long long);
	void resize(unsigned long long);
	unsigned long long getSize();
	unsigned long long getAlignment();
	unsigned char * getData();
	const unsigned char * getData();
	long canRead();
	long canWrite();
	long canResize();
	long getAllocatorType();
private:
	unsigned char * _allocate(unsigned long long);
	void _copy(unsigned char *, unsigned long long);
	void _discard();
	unsigned char * m_data; // 0x10
	unsigned long long m_size; // 0x18
	unsigned long long m_alignment; // 0x20
	unsigned long m_flags; // 0x28
	AgAllocator<1> m_allocator; // 0x2C
public:
	AgBuffer<AgAllocator<1> > & operator=(const AgBuffer<AgAllocator<1> > &);
	void __dflt_ctor_closure();
};