
void Scaleform::GFx::AS3::TR::OpCodeGenVisitor::OutNode(Scaleform::GFx::AS3::TR::NodeConst & n); // 0x140497890
void Scaleform::GFx::AS3::TR::OpCodeGenVisitor::OutNode(Scaleform::GFx::AS3::TR::NodeGen & n); // 0x1404989B0
void Scaleform::GFx::AS3::TR::OpCodeGenVisitor::OutNode(Scaleform::GFx::AS3::TR::NodeSink1 & n); // 0x140499150
void Scaleform::GFx::AS3::TR::OpCodeGenVisitor::OutNode(Scaleform::GFx::AS3::TR::NodeSink2 & n); // 0x1404992A0
void Scaleform::GFx::AS3::TR::OpCodeGenVisitor::OutNode(Scaleform::GFx::AS3::TR::NodeSink2RT & n); // 0x1404993D0
void Scaleform::GFx::AS3::TR::OpCodeGenVisitor::OutNode(Scaleform::GFx::AS3::TR::NodeExpr1 & n); // 0x140497DC0
void Scaleform::GFx::AS3::TR::OpCodeGenVisitor::OutNode(Scaleform::GFx::AS3::TR::NodeExprReg & n); // 0x140498750
void Scaleform::GFx::AS3::TR::OpCodeGenVisitor::OutNode(Scaleform::GFx::AS3::TR::NodeExpr2 & n); // 0x140498440
void Scaleform::GFx::AS3::TR::OpCodeGenVisitor::OutNode(Scaleform::GFx::AS3::TR::NodeExpr1RT & n); // 0x140498170
void Scaleform::GFx::AS3::TR::OpCodeGenVisitor::OutNode(Scaleform::GFx::AS3::TR::NodeExpr1CT & n); // 0x140497F80
void Scaleform::GFx::AS3::TR::OpCodeGenVisitor::OutNode(Scaleform::GFx::AS3::TR::NodeSwap & __formal); // 0x140499500
void Scaleform::GFx::AS3::TR::OpCodeGenVisitor::OutNode(Scaleform::GFx::AS3::TR::NodeHasNext2 & n); // 0x140498B00
void Scaleform::GFx::AS3::TR::OpCodeGenVisitor::OutNode(Scaleform::GFx::AS3::TR::NodeOP & n); // 0x140498F60
void Scaleform::GFx::AS3::TR::OpCodeGenVisitor::OutNode(Scaleform::GFx::AS3::TR::NodeN & n); // 0x140498C40
void Scaleform::GFx::AS3::TR::OpCodeGenVisitor::OutNode(Scaleform::GFx::AS3::TR::NodeNRT & n); // 0x140498E00
void Scaleform::GFx::AS3::TR::OpCodeGenVisitor::OutNode(Scaleform::GFx::AS3::TR::NodeScopeN & n); // 0x140499060
void Scaleform::GFx::AS3::TR::OpCodeGenVisitor::Visit(Scaleform::GFx::AS3::TR::NodeJump & n); // 0x1404B37C0
void Scaleform::GFx::AS3::TR::OpCodeGenVisitor::Visit(Scaleform::GFx::AS3::TR::NodeIF & n); // 0x1404B3630
void Scaleform::GFx::AS3::TR::OpCodeGenVisitor::Visit(Scaleform::GFx::AS3::TR::NodeAbrupt & n); // 0x1404B3520
void Scaleform::GFx::AS3::TR::OpCodeGenVisitor::Visit(Scaleform::GFx::AS3::TR::NodeSwitch & n); // 0x1404B38C0
void Scaleform::GFx::AS3::TR::OpCodeGenVisitor::Visit(Scaleform::GFx::AS3::TR::NodeSwitchType & n); // 0x1404B3A30
void Scaleform::GFx::AS3::TR::OpCodeGenVisitor::PushDestinationOffset(Scaleform::GFx::AS3::TR::NodeBlock * d, long delta); // 0x14049D870
struct Scaleform::GFx::AS3::TR::Range :
	Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range>
{
	Range(unsigned long, unsigned long);
	Range(const Scaleform::GFx::AS3::TR::NodeBlock &);
	Range();
	unsigned long GetFrom();
	unsigned long GetTo();
	bool operator==(const Scaleform::GFx::AS3::TR::Range &);
	bool IsStrictlyBefore(const Scaleform::GFx::AS3::TR::Range &);
	bool IsStrictlyAfter(const Scaleform::GFx::AS3::TR::Range &);
	bool DoesIntersect(const Scaleform::GFx::AS3::TR::Range &);
	Scaleform::GFx::AS3::TR::Range GetIntersection(const Scaleform::GFx::AS3::TR::Range &);
	void Intersect(const Scaleform::GFx::AS3::TR::Range &);
private:
	unsigned long From; // 0x10
	unsigned long To; // 0x14
};
struct Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range>
{
	Scaleform::GFx::AS3::TR::Range * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::GFx::AS3::TR::Range * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::GFx::AS3::TR::Range>();
	Scaleform::GFx::AS3::TR::Range * GetPrev();
	Scaleform::GFx::AS3::TR::Range * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::GFx::AS3::TR::Range *);
	void InsertNodeAfter(Scaleform::GFx::AS3::TR::Range *);
	void InsertNodeBefore(Scaleform::GFx::AS3::TR::Range *);
};
void Scaleform::GFx::AS3::TR::OpCodeGenVisitor::PatchExceptions(Scaleform::List2<Scaleform::GFx::AS3::TR::NodeBlock,Scaleform::GFx::AS3::TR::OrderAccessor<Scaleform::GFx::AS3::TR::NodeBlock> > & rpo); // 0x14049A100
class Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> >
{
	struct ValueType;
private:
	List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> >(const Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > &);
public:
	List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> >();
	void Clear();
	Scaleform::GFx::AS3::TR::Range * GetFirst();
	Scaleform::GFx::AS3::TR::Range * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::GFx::AS3::TR::Range *);
	bool IsLast(const Scaleform::GFx::AS3::TR::Range *);
	bool IsNull(const Scaleform::GFx::AS3::TR::Range *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::GFx::AS3::TR::Range * GetPrev(const Scaleform::GFx::AS3::TR::Range *);
	static Scaleform::GFx::AS3::TR::Range * GetNext(const Scaleform::GFx::AS3::TR::Range *);
	void PushFront(Scaleform::GFx::AS3::TR::Range *);
	void PushBack(Scaleform::GFx::AS3::TR::Range *);
	static void Remove(Scaleform::GFx::AS3::TR::Range *);
	void BringToFront(Scaleform::GFx::AS3::TR::Range *);
	void SendToBack(Scaleform::GFx::AS3::TR::Range *);
	void PushListToFront(Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > &);
	void PushListToBack(Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > &, Scaleform::GFx::AS3::TR::Range *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > &, Scaleform::GFx::AS3::TR::Range *);
	void PushListItemsToFront(Scaleform::GFx::AS3::TR::Range *, Scaleform::GFx::AS3::TR::Range *);
private:
	const Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > & operator=(const Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > &);
	Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> Root; // 0x0
};
class Scaleform::HashDH<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,2,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >::NodeHashF> > :
	Scaleform::Hash<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::TR::NodeBlock *,2>,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >::NodeHashF>,Scaleform::HashSetDH<Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >::NodeAltHashF,2,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >::NodeHashF> > >
{
	class SelfType;
	class BaseType;
public:
	HashDH<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,2,Scaleform::Ha(const Scaleform::HashDH<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,2,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >::NodeHashF> > &);
	HashDH<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,2,Scaleform::Ha(void *, long);
	HashDH<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,2,Scaleform::Ha(void *);
	~HashDH<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,2,Scaleform::H();
	void operator=(const Scaleform::HashDH<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,2,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >::NodeHashF> > &);
};
void Scaleform::GFx::AS3::TR::OpCodeGenVisitor::CalcOpStackSize(unsigned long long offset); // 0x140463BE0
unsigned long long Scaleform::GFx::AS3::TR::OpCodeGenVisitor::GetSTOpCode(const Scaleform::GFx::AS3::TR::NodeIF & n); // 0x140489890
struct Scaleform::GFx::AS3::TR::AInPSVisitorTA<Scaleform::GFx::AS3::TR::CFGVisitor> :
	Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor>
{
	struct ParentT;
	AInPSVisitorTA<Scaleform::GFx::AS3::TR::CFGVisitor>(unsigned long, const Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> > &);
};
class Scaleform::GFx::AS3::TR::GetVisitorMarker::__l2::InitMarkerPSVisitor :
	Scaleform::GFx::AS3::TR::AInPSVisitorTA<Scaleform::GFx::AS3::TR::CFGVisitor>
{
	struct ParentT;
public:
	InitMarkerPSVisitor();
};