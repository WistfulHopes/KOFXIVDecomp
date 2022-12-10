#pragma once

void Scaleform::RadixTree<Scaleform::HeapMH::NodeMH,Scaleform::HeapMH::TreeNodeAccessor>::Remove(Scaleform::HeapMH::NodeMH * node); // 0x1403BEF50
void Scaleform::RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::AddrAccessor>::Remove(Scaleform::HeapPT::DualTNode * node); // 0x1403C10C0
void Scaleform::RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::SizeAccessor>::Remove(Scaleform::HeapPT::DualTNode * node); // 0x1403C1180
void Scaleform::RadixTree<Scaleform::HeapPT::TreeSeg,Scaleform::HeapPT::Granulator::SegTreeAccessor>::Remove(Scaleform::HeapPT::TreeSeg * node); // 0x1403BEF50
void Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::AddrAccessor>::Remove(Scaleform::AllocAddrNode * node); // 0x1403C1180
void Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::SizeAccessor>::Remove(Scaleform::AllocAddrNode * node); // 0x1403C10C0
const Scaleform::HeapMH::NodeMH * Scaleform::RadixTree<Scaleform::HeapMH::NodeMH,Scaleform::HeapMH::TreeNodeAccessor>::FindGrEq(unsigned long long key); // 0x140322670
const Scaleform::HeapPT::DualTNode * Scaleform::RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::AddrAccessor>::FindGrEq(unsigned long long key); // 0x1403C0B40
const Scaleform::HeapPT::DualTNode * Scaleform::RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::SizeAccessor>::FindGrEq(unsigned long long key); // 0x1403C0BF0
const Scaleform::AllocAddrNode * Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::AddrAccessor>::FindGrEq(unsigned long long key); // 0x1406FC6C0
const Scaleform::AllocAddrNode * Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::SizeAccessor>::FindGrEq(unsigned long long key); // 0x1406FC780
const Scaleform::HeapPT::DualTNode * Scaleform::RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::AddrAccessor>::FindLeEq(unsigned long long key); // 0x1403C0CB0
const Scaleform::HeapPT::TreeSeg * Scaleform::RadixTree<Scaleform::HeapPT::TreeSeg,Scaleform::HeapPT::Granulator::SegTreeAccessor>::FindLeEq(unsigned long long key); // 0x140437450
const Scaleform::AllocAddrNode * Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::AddrAccessor>::FindLeEq(unsigned long long key); // 0x1406FC840
void Scaleform::RadixTreeMulti<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::SizeAccessor>::Insert(Scaleform::HeapPT::DualTNode * node); // 0x1403C0EB0
void Scaleform::RadixTreeMulti<Scaleform::AllocAddrNode,Scaleform::AllocAddr::SizeAccessor>::Insert(Scaleform::AllocAddrNode * node); // 0x1406FC9F0
void Scaleform::RadixTreeMulti<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::SizeAccessor>::Remove(Scaleform::HeapPT::DualTNode * node); // 0x1403C1240
void Scaleform::RadixTreeMulti<Scaleform::AllocAddrNode,Scaleform::AllocAddr::SizeAccessor>::Remove(Scaleform::AllocAddrNode * node); // 0x1406FCA70
class Scaleform::RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::SizeAccessor>
{
	enum <unnamed-enum-KeyBits>
	{
		KeyBits = 64,
	};
public:
	RadixTree<Scaleform::AllocAddrNode,Scaleform::AllocAddr::SizeAccessor>();
	void Clear();
	Scaleform::AllocAddrNode * Insert(Scaleform::AllocAddrNode *);
	void Remove(Scaleform::AllocAddrNode *);
	void Remove(Scaleform::AllocAddrNode *, Scaleform::AllocAddrNode *);
	const Scaleform::AllocAddrNode * FindEqual(unsigned long long);
	static const Scaleform::AllocAddrNode * GetLeftmost(const Scaleform::AllocAddrNode *);
	static const Scaleform::AllocAddrNode * GetRightmost(const Scaleform::AllocAddrNode *);
	const Scaleform::AllocAddrNode * FindGrEq(unsigned long long);
	const Scaleform::AllocAddrNode * FindLeEq(unsigned long long);
	Scaleform::AllocAddrNode * Root; // 0x0
};
class Scaleform::RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::SizeAccessor>
{
	enum <unnamed-enum-KeyBits>
	{
		KeyBits = 64,
	};
public:
	RadixTree<Scaleform::HeapPT::DualTNode,Scaleform::HeapPT::AllocLite::SizeAccessor>();
	void Clear();
	Scaleform::HeapPT::DualTNode * Insert(Scaleform::HeapPT::DualTNode *);
	void Remove(Scaleform::HeapPT::DualTNode *);
	void Remove(Scaleform::HeapPT::DualTNode *, Scaleform::HeapPT::DualTNode *);
	const Scaleform::HeapPT::DualTNode * FindEqual(unsigned long long);
	static const Scaleform::HeapPT::DualTNode * GetLeftmost(const Scaleform::HeapPT::DualTNode *);
	static const Scaleform::HeapPT::DualTNode * GetRightmost(const Scaleform::HeapPT::DualTNode *);
	const Scaleform::HeapPT::DualTNode * FindGrEq(unsigned long long);
	const Scaleform::HeapPT::DualTNode * FindLeEq(unsigned long long);
	Scaleform::HeapPT::DualTNode * Root; // 0x0
};