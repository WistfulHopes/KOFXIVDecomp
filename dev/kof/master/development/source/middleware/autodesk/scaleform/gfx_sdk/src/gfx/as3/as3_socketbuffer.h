#pragma once

class Scaleform::GFx::AS3::SocketBuffer :
	Scaleform::File
{
public:
	virtual const char * GetFilePath();
	virtual bool IsValid();
	virtual bool IsWritable();
	virtual long Tell();
	virtual long long LTell();
	virtual long GetLength();
	virtual long long LGetLength();
	virtual long GetErrorCode();
	virtual bool Flush();
	virtual bool Close();
	void Write(Scaleform::File &);
	virtual long Write(const unsigned char *, long);
	void Read(Scaleform::File &);
	virtual long Read(unsigned char *, long);
	virtual long SkipBytes(long);
	virtual long BytesAvailable();
	virtual long Seek(long, long);
	virtual long SeekToBegin();
	virtual long long LSeek(long long, long);
	virtual bool ChangeSize(long);
	virtual long CopyFromStream(Scaleform::File *, long);
	void Append(const unsigned char *, unsigned long long);
	const unsigned char * GetBuffer();
	unsigned long long GetBufferSize();
	void Clear();
	void DiscardReadBytes();
	long GetReadPosition();
	struct NeverShrinkPolicy;
private:
	Scaleform::ArrayLH<unsigned char,327,Scaleform::ArrayConstPolicy<0,4,1> > Data; // 0x10
	long readPosition; // 0x28
public:
	SocketBuffer(Scaleform::GFx::AS3::SocketBuffer &);
	SocketBuffer(const Scaleform::GFx::AS3::SocketBuffer &);
	SocketBuffer();
	virtual ~SocketBuffer();
	Scaleform::GFx::AS3::SocketBuffer & operator=(Scaleform::GFx::AS3::SocketBuffer &);
	Scaleform::GFx::AS3::SocketBuffer & operator=(const Scaleform::GFx::AS3::SocketBuffer &);
};
struct Scaleform::ArrayConstPolicy<0,4,1>
{
	struct SelfType;
	ArrayConstPolicy<0,4,1>(const Scaleform::ArrayConstPolicy<0,4,1> &);
	ArrayConstPolicy<0,4,1>();
	unsigned long long GetMinCapacity();
	unsigned long long GetGranularity();
	bool NeverShrinking();
	unsigned long long GetCapacity();
	void SetCapacity(unsigned long long);
private:
	unsigned long long Capacity; // 0x0
};
class Scaleform::ArrayLH<unsigned char,327,Scaleform::ArrayConstPolicy<0,4,1> > :
	Scaleform::ArrayBase<Scaleform::ArrayData<unsigned char,Scaleform::AllocatorLH<unsigned char,327>,Scaleform::ArrayConstPolicy<0,4,1> > >
{
	typedef unsigned char ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<unsigned char,327,Scaleform::ArrayConstPolicy<0,4,1> >(const Scaleform::ArrayLH<unsigned char,327,Scaleform::ArrayConstPolicy<0,4,1> > &);
	ArrayLH<unsigned char,327,Scaleform::ArrayConstPolicy<0,4,1> >(const Scaleform::ArrayConstPolicy<0,4,1> &);
	ArrayLH<unsigned char,327,Scaleform::ArrayConstPolicy<0,4,1> >(long);
	ArrayLH<unsigned char,327,Scaleform::ArrayConstPolicy<0,4,1> >();
	const Scaleform::ArrayLH<unsigned char,327,Scaleform::ArrayConstPolicy<0,4,1> > & operator=(const Scaleform::ArrayLH<unsigned char,327,Scaleform::ArrayConstPolicy<0,4,1> > &);
	~ArrayLH<unsigned char,327,Scaleform::ArrayConstPolicy<0,4,1> >();
};