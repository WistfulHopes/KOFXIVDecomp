#pragma once

class Scaleform::Heap::BitSet2
{
public:
	static unsigned long long GetBitSetSize(unsigned long long, unsigned long long);
	static void Clear(unsigned long *, unsigned long long);
	static unsigned long GetValue(const unsigned long *, unsigned long long);
	static void ClearValue(unsigned long *, unsigned long long);
	static void SetValue(unsigned long *, unsigned long long, unsigned long);
	static void MarkFree(unsigned long *, unsigned long long, unsigned long long);
	static void MarkBusy(unsigned long *, unsigned long long, unsigned long long, unsigned long long);
	static void MarkBusy(unsigned long *, unsigned long long, unsigned long long);
	static unsigned long long GetBlockSize(const unsigned long *, unsigned long long);
	static unsigned long GetAlignShift(const unsigned long *, unsigned long long, unsigned long long);
};
void Scaleform::Heap::BitSet2::MarkBusy(unsigned long * buf, unsigned long long start, unsigned long long num); // 0x14041D440
void Scaleform::Heap::BitSet2::MarkBusy(unsigned long * buf, unsigned long long start, unsigned long long num, unsigned long long alignShift); // 0x1404389D0
unsigned long long Scaleform::Heap::BitSet2::GetBlockSize(const unsigned long * buf, unsigned long long start); // 0x14041D000
unsigned long Scaleform::Heap::BitSet2::GetAlignShift(const unsigned long * buf, unsigned long long start, unsigned long long num); // 0x140438870