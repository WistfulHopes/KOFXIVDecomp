#pragma once

struct Scaleform::GFx::AS3::detail::Log2<64>
{
	enum <unnamed-enum-value>
	{
		value = 6,
	};
};
struct Scaleform::GFx::AS3::detail::Byte<8>
{
};
unsigned long long Scaleform::GFx::AS3::detail::Byte<8>::GetFirstBitInd<unsigned __int64>(unsigned long long d); // 0x140446FD0
struct Scaleform::GFx::AS3::FixedBitSetView<unsigned __int64>::ForwardRange1
{
	ForwardRange1(unsigned long long *, unsigned long long, unsigned long long);
	ForwardRange1(unsigned long long *, unsigned long long);
	bool IsEmpty();
	unsigned long long Front();
	void PopFront();
protected:
	void FindPositionInSection();
	static unsigned long long ClearBit(unsigned long long, unsigned long long);
	static unsigned long long ClearNBits(unsigned long long, unsigned long long);
	unsigned long long GetSection(unsigned long long);
	unsigned long long * pData; // 0x0
	unsigned long long TotalSectNum; // 0x8
	unsigned long long CurSectNum; // 0x10
	unsigned long long Pos; // 0x18
};
struct Scaleform::GFx::AS3::FixedBitSetView<unsigned __int64>::ForwardRange1Unsafe
{
	ForwardRange1Unsafe(unsigned long long *, unsigned long long, unsigned long long);
	ForwardRange1Unsafe(unsigned long long *, unsigned long long);
	bool IsEmpty();
	unsigned long long Front();
	void PopFront();
protected:
	void FindPositionInSection();
	static unsigned long long ClearBit(unsigned long long, unsigned long long);
	static unsigned long long ClearNBits(unsigned long long, unsigned long long);
	unsigned long long GetSection(unsigned long long);
	unsigned long long * pData; // 0x0
	unsigned long long TotalSectNum; // 0x8
	unsigned long long CurSectNum; // 0x10
	unsigned long long Pos; // 0x18
	unsigned long long Section; // 0x20
};