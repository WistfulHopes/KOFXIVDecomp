#pragma once

struct Scaleform::HeapMH::BinNodeMH
{
	enum <unnamed-enum-MinBlocks>
	{
		MinBlocks = 2,
	};
	unsigned long long Prev; // 0x0
	unsigned long long Next; // 0x8
	Scaleform::HeapMH::PageMH * Page; // 0x10
	unsigned long long GetBlocks();
	unsigned long long GetBytes();
	unsigned long long GetPrevBlocks();
	unsigned long long GetPrevBytes();
	void SetBlocks(unsigned long long);
	void SetBytes(unsigned long long);
	Scaleform::HeapMH::PageMH * GetPage();
	void SetPage(Scaleform::HeapMH::PageMH *);
	Scaleform::HeapMH::BinNodeMH * GetPrev();
	Scaleform::HeapMH::BinNodeMH * GetNext();
	void SetPrev(Scaleform::HeapMH::BinNodeMH *);
	void SetNext(Scaleform::HeapMH::BinNodeMH *);
	static Scaleform::HeapMH::BinNodeMH * MakeNode(unsigned char *, unsigned long long, Scaleform::HeapMH::PageMH *);
};
Scaleform::HeapMH::BinNodeMH * Scaleform::HeapMH::BinNodeMH::MakeNode(unsigned char * start, unsigned long long bytes, Scaleform::HeapMH::PageMH * page); // 0x14041D3E0
struct Scaleform::HeapMH::ListBinMH
{
	enum <unnamed-enum-BinSize>
	{
		BinSize = 64,
	};
	ListBinMH();
	void Reset();
	void Push(unsigned char *);
	void Pull(unsigned char *);
	Scaleform::HeapMH::BinNodeMH * PullBest(unsigned long long, unsigned long long);
	Scaleform::HeapMH::BinNodeMH * PullBest(unsigned long long);
	void Merge(unsigned char *, unsigned long long, bool, bool, Scaleform::HeapMH::PageMH *);
	static unsigned char * GetAlignedPtr(unsigned char *, unsigned long long);
	static bool AlignmentIsOK(const Scaleform::HeapMH::BinNodeMH *, unsigned long long, unsigned long long);
private:
	void pushNode(unsigned long long, Scaleform::HeapMH::BinNodeMH *);
	void pullNode(unsigned long long, Scaleform::HeapMH::BinNodeMH *);
	Scaleform::HeapMH::BinNodeMH * findAligned(Scaleform::HeapMH::BinNodeMH *, unsigned long long, unsigned long long);
	Scaleform::HeapMH::BinNodeMH * getPrevAdjacent(unsigned char *);
	Scaleform::HeapMH::BinNodeMH * getNextAdjacent(unsigned char *);
	unsigned long long Mask; // 0x0
	Scaleform::HeapMH::BinNodeMH * Roots[64]; // 0x8
};