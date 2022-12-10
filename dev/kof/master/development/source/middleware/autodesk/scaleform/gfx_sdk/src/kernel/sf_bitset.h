#pragma once

class Scaleform::FixedBitSetView
{
public:
	FixedBitSetView(unsigned char *, unsigned long);
	void Set(unsigned long, bool);
	void Set(unsigned long);
	void Clear(unsigned long);
	bool IsSet(unsigned long);
	bool operator[](unsigned long);
protected:
	unsigned char * pData; // 0x0
	unsigned long BitsCount; // 0x8
};
class Scaleform::FixedBitSetBase<Scaleform::AllocatorLH<unsigned char,323> > :
	Scaleform::FixedBitSetView
{
public:
	FixedBitSetBase<Scaleform::AllocatorLH<unsigned char,323> >(const Scaleform::FixedBitSetBase<Scaleform::AllocatorLH<unsigned char,323> > &);
	FixedBitSetBase<Scaleform::AllocatorLH<unsigned char,323> >(const void *, unsigned long);
	~FixedBitSetBase<Scaleform::AllocatorLH<unsigned char,323> >();
	Scaleform::FixedBitSetBase<Scaleform::AllocatorLH<unsigned char,323> > & operator=(const Scaleform::FixedBitSetBase<Scaleform::AllocatorLH<unsigned char,323> > &);
};