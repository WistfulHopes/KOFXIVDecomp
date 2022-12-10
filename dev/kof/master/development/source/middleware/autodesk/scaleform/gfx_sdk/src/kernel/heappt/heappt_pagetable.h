#pragma once

struct Scaleform::HeapPT::HeapHeader1
{
	Scaleform::Heap::HeapSegment * pSegment; // 0x0
};
class Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256>
{
private:
	Scaleform::HeapPT::HeapHeader1 * pTable; // 0x0
	unsigned long long RefCount; // 0x8
public:
	HeapHeader<Scaleform::HeapPT::HeapHeader1,256>();
	Scaleform::HeapPT::HeapHeader1 * GetTable(unsigned long long);
	Scaleform::HeapPT::HeapHeader1 * GetTable();
	bool HasTable(unsigned long long);
	bool AddRef(Scaleform::HeapPT::Starter *);
	void Release(Scaleform::HeapPT::Starter *);
};
class Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256>,256>
{
private:
	Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256> * pTable; // 0x0
	unsigned long long RefCount; // 0x8
public:
	HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256>,256>();
	Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256> * GetTable(unsigned long long);
	Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256> * GetTable();
	bool HasTable(unsigned long long);
	bool AddRef(Scaleform::HeapPT::Starter *);
	void Release(Scaleform::HeapPT::Starter *);
};
class Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256>,256>,4096>
{
private:
	Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256>,256> * pTable; // 0x0
	unsigned long long RefCount; // 0x8
public:
	HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256>,256>,4096>();
	Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256>,256> * GetTable(unsigned long long);
	Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256>,256> * GetTable();
	bool HasTable(unsigned long long);
	bool AddRef(Scaleform::HeapPT::Starter *);
	void Release(Scaleform::HeapPT::Starter *);
};
class Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256>,256>,4096>,4096>
{
private:
	Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256>,256>,4096> * pTable; // 0x0
	unsigned long long RefCount; // 0x8
public:
	HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256>,256>,4096>,4096>();
	Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256>,256>,4096> * GetTable(unsigned long long);
	Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256>,256>,4096> * GetTable();
	bool HasTable(unsigned long long);
	bool AddRef(Scaleform::HeapPT::Starter *);
	void Release(Scaleform::HeapPT::Starter *);
};
class Scaleform::HeapPT::PageTable
{
public:
	PageTable();
	static void Init();
	void SetStarter(Scaleform::HeapPT::Starter *);
	Scaleform::HeapPT::Starter * GetStarter();
	Scaleform::Heap::HeapSegment * GetSegment(unsigned long long);
	Scaleform::Heap::HeapSegment * GetSegmentSafe(unsigned long long);
	bool MapRange(void *, unsigned long long);
	void UnmapRange(void *, unsigned long long);
	bool RemapRange(void *, unsigned long long, unsigned long long);
	void SetSegmentInRange(unsigned long long, unsigned long long, Scaleform::Heap::HeapSegment *);
	void VisitMem(Scaleform::Heap::MemVisitor *);
private:
	Scaleform::HeapPT::Starter * pStarter; // 0x0
	Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader<Scaleform::HeapPT::HeapHeader1,256>,256>,4096>,4096> RootTable[4096]; // 0x8
};