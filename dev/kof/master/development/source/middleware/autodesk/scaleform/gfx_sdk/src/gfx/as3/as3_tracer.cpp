
Scaleform::GFx::AS3::Tracer::Tracer(Scaleform::MemoryHeap * heap, const Scaleform::GFx::AS3::CallFrame & cf, Scaleform::GFx::AS3::VMMethodBodyInfo & mbi); // 0x1404513B0
Scaleform::GFx::AS3::Tracer::~Tracer(); // 0x1404555F0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::Tracer::InitNodeStart(); // 0x14048D590
struct Scaleform::GFx::AS3::TR::PVoidAction<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> > > :
	Scaleform::GFx::AS3::TR::HasVisitor<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> > >
{
	struct SelfT;
	struct ParentT;
	PVoidAction<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> > >(Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> > *, const Scaleform::GFx::AS3::TR::PVoidAction<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> > > &);
	PVoidAction<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> > >();
};
struct Scaleform::GFx::AS3::TR::PVoidAction<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2> > :
	Scaleform::GFx::AS3::TR::HasVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2> >
{
	struct SelfT;
	struct ParentT;
	PVoidAction<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2> >(Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2> *, const Scaleform::GFx::AS3::TR::PVoidAction<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2> > &);
	PVoidAction<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2> >();
};
void Scaleform::GFx::AS3::AbcBlockVisitor2<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> > >::Visit(Scaleform::GFx::AS3::TR::AbcBlock & n); // 0x1404B12A0
void Scaleform::GFx::AS3::AbcBlockVisitor2<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2> >::Visit(Scaleform::GFx::AS3::TR::AbcBlock & n); // 0x1404B1340
struct Scaleform::GFx::AS3::TR::AInPSVisitorTA<Scaleform::GFx::AS3::AbcBlockVisitor2> :
	Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2>
{
	struct ParentT;
	AInPSVisitorTA<Scaleform::GFx::AS3::AbcBlockVisitor2>(unsigned long, const Scaleform::GFx::AS3::AbcBlockVisitor2<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2> > &);
};
class Scaleform::GFx::AS3::GetVisitorMarker::__l2::InitMarkerPSVisitor :
	Scaleform::GFx::AS3::TR::AInPSVisitorTA<Scaleform::GFx::AS3::AbcBlockVisitor2>
{
	struct ParentT;
public:
	InitMarkerPSVisitor();
};
class Scaleform::List2<Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::GFx::AS3::TR::OrderAccessor<Scaleform::GFx::AS3::TR::AbcBlock> >
{
	class ValueType;
public:
	static void SetPrev(Scaleform::GFx::AS3::TR::AbcBlock *, Scaleform::GFx::AS3::TR::AbcBlock *);
	static void SetNext(Scaleform::GFx::AS3::TR::AbcBlock *, Scaleform::GFx::AS3::TR::AbcBlock *);
	static Scaleform::GFx::AS3::TR::AbcBlock * GetPrev(Scaleform::GFx::AS3::TR::AbcBlock *);
	static const Scaleform::GFx::AS3::TR::AbcBlock * GetPrev(const Scaleform::GFx::AS3::TR::AbcBlock *);
	static Scaleform::GFx::AS3::TR::AbcBlock * GetNext(Scaleform::GFx::AS3::TR::AbcBlock *);
	static const Scaleform::GFx::AS3::TR::AbcBlock * GetNext(const Scaleform::GFx::AS3::TR::AbcBlock *);
private:
	List2<Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::GFx::AS3::TR::OrderAccessor<Scaleform::GFx::AS3::TR::AbcBlock> >(const Scaleform::List2<Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::GFx::AS3::TR::OrderAccessor<Scaleform::GFx::AS3::TR::AbcBlock> > &);
public:
	List2<Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::GFx::AS3::TR::OrderAccessor<Scaleform::GFx::AS3::TR::AbcBlock> >();
	void Clear();
	Scaleform::GFx::AS3::TR::AbcBlock * GetFirst();
	const Scaleform::GFx::AS3::TR::AbcBlock * GetFirst();
	Scaleform::GFx::AS3::TR::AbcBlock * GetLast();
	const Scaleform::GFx::AS3::TR::AbcBlock * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::GFx::AS3::TR::AbcBlock *);
	bool IsLast(const Scaleform::GFx::AS3::TR::AbcBlock *);
	bool IsNull(const Scaleform::GFx::AS3::TR::AbcBlock *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	void PushFront(Scaleform::GFx::AS3::TR::AbcBlock *);
	void PushBack(Scaleform::GFx::AS3::TR::AbcBlock *);
	void InsertBefore(Scaleform::GFx::AS3::TR::AbcBlock *, Scaleform::GFx::AS3::TR::AbcBlock *);
	void InsertAfter(Scaleform::GFx::AS3::TR::AbcBlock *, Scaleform::GFx::AS3::TR::AbcBlock *);
	static void Remove(Scaleform::GFx::AS3::TR::AbcBlock *);
	void BringToFront(Scaleform::GFx::AS3::TR::AbcBlock *);
	void SendToBack(Scaleform::GFx::AS3::TR::AbcBlock *);
	void PushListToFront(Scaleform::List2<Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::GFx::AS3::TR::OrderAccessor<Scaleform::GFx::AS3::TR::AbcBlock> > &);
private:
	const Scaleform::List2<Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::GFx::AS3::TR::OrderAccessor<Scaleform::GFx::AS3::TR::AbcBlock> > & operator=(const Scaleform::List2<Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::GFx::AS3::TR::OrderAccessor<Scaleform::GFx::AS3::TR::AbcBlock> > &);
	Scaleform::GFx::AS3::TR::AbcBlock Root; // 0x0
};
struct Scaleform::GFx::AS3::TR::OrderAccessor<Scaleform::GFx::AS3::TR::AbcBlock>
{
	static void SetPrev(Scaleform::GFx::AS3::TR::AbcBlock *, Scaleform::GFx::AS3::TR::AbcBlock *);
	static void SetNext(Scaleform::GFx::AS3::TR::AbcBlock *, Scaleform::GFx::AS3::TR::AbcBlock *);
	static Scaleform::GFx::AS3::TR::AbcBlock * GetPrev(Scaleform::GFx::AS3::TR::AbcBlock *);
	static const Scaleform::GFx::AS3::TR::AbcBlock * GetPrev(const Scaleform::GFx::AS3::TR::AbcBlock *);
	static Scaleform::GFx::AS3::TR::AbcBlock * GetNext(Scaleform::GFx::AS3::TR::AbcBlock *);
	static const Scaleform::GFx::AS3::TR::AbcBlock * GetNext(const Scaleform::GFx::AS3::TR::AbcBlock *);
};
struct Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock>
{
	class Type;
	RPOAction<Scaleform::GFx::AS3::TR::NodeBlock>(Scaleform::List2<Scaleform::GFx::AS3::TR::NodeBlock,Scaleform::GFx::AS3::TR::OrderAccessor<Scaleform::GFx::AS3::TR::NodeBlock> > &);
	void Visit(Scaleform::GFx::AS3::TR::NodeBlock &);
private:
	Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> & operator=(const Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> &);
	unsigned long LSize; // 0x0
	Scaleform::List2<Scaleform::GFx::AS3::TR::NodeBlock,Scaleform::GFx::AS3::TR::OrderAccessor<Scaleform::GFx::AS3::TR::NodeBlock> > & PO; // 0x8
};
void Scaleform::GFx::AS3::BuildAbcGraphRPO(Scaleform::GFx::AS3::TR::AbcBlock & root, Scaleform::List2<Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::GFx::AS3::TR::OrderAccessor<Scaleform::GFx::AS3::TR::AbcBlock> > & rpo); // 0x140461C30
struct Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock>
{
	class Type;
	RPOAction<Scaleform::GFx::AS3::TR::AbcBlock>(Scaleform::List2<Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::GFx::AS3::TR::OrderAccessor<Scaleform::GFx::AS3::TR::AbcBlock> > &);
	void Visit(Scaleform::GFx::AS3::TR::AbcBlock &);
private:
	Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> & operator=(const Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> &);
	unsigned long LSize; // 0x0
	Scaleform::List2<Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::GFx::AS3::TR::OrderAccessor<Scaleform::GFx::AS3::TR::AbcBlock> > & PO; // 0x8
};
struct Scaleform::GFx::AS3::TR::AIn2PSVisitorTA0<Scaleform::GFx::AS3::AbcBlockVisitor2,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> > :
	Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> >
{
	struct ParentT;
	AIn2PSVisitorTA0<Scaleform::GFx::AS3::AbcBlockVisitor2,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> >(unsigned long, const Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> &, const Scaleform::GFx::AS3::AbcBlockVisitor2<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> > > &);
};
void Scaleform::GFx::AS3::BuildNodeBlockRPO(Scaleform::GFx::AS3::TR::NodeBlock & root, Scaleform::List2<Scaleform::GFx::AS3::TR::NodeBlock,Scaleform::GFx::AS3::TR::OrderAccessor<Scaleform::GFx::AS3::TR::NodeBlock> > & rpo); // 0x140461CF0
struct Scaleform::GFx::AS3::TR::AIn2PSVisitorTA0<Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> > :
	Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> >
{
	struct ParentT;
	AIn2PSVisitorTA0<Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> >(unsigned long, const Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> &, const Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> > > &);
};
void Scaleform::GFx::AS3::Tracer::EmitCode(); // 0x140472770
void Scaleform::GFx::AS3::Tracer::CreateTryCatchBlocks(); // 0x14046B910
Scaleform::GFx::AS3::Abc::Code::OpCode Scaleform::GFx::AS3::Tracer::ReadOpCode(unsigned long long & cp); // 0x1404A02C0
void Scaleform::GFx::AS3::Tracer::BuildAbcGraph(); // 0x1404615F0
void Scaleform::GFx::AS3::Tracer::SkipDeadBasicBlock(unsigned long long & cp, Scaleform::GFx::AS3::TR::AbcBlock * pBlock); // 0x1404AD390
Scaleform::GFx::AS3::Abc::Code::OpCode Scaleform::GFx::AS3::Tracer::GetOrigValueConsumer(unsigned long long bcp); // 0x140488630
void Scaleform::GFx::AS3::Tracer::Output(Scaleform::GFx::AS3::FlashUI::OutputMessageType type, const char * msg); // 0x140499600
Scaleform::GFx::AS3::TR::AbcBlock * Scaleform::GFx::AS3::Tracer::GetAddAbcBlock(unsigned long long from, bool set_catch); // 0x140483350
void Scaleform::GFx::AS3::Tracer::SetCatchBlocks(Scaleform::GFx::AS3::TR::AbcBlock * b); // 0x1404A7DD0
Scaleform::GFx::AS3::TypeBarrier1 * Scaleform::GFx::AS3::Tracer::GetTB1(unsigned long offset); // 0x14048B240