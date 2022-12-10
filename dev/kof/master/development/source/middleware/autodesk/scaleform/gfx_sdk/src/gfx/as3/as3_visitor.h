#pragma once

class Scaleform::GFx::AS3::TR::OnSNodeAction<Scaleform::GFx::AS3::TR::OpCodeGenVisitor,void>
{
public:
	static void OnChildrenDefault(Scaleform::GFx::AS3::TR::SNode &);
	void OnChildren(Scaleform::GFx::AS3::TR::NodeSwitchType &);
	void OnChildren(Scaleform::GFx::AS3::TR::NodeSwitch &);
	void OnChildren(Scaleform::GFx::AS3::TR::NodeAbrupt &);
	void OnChildren(Scaleform::GFx::AS3::TR::NodeIF &);
	void OnChildren(Scaleform::GFx::AS3::TR::NodeJump &);
	void OnChildren(Scaleform::GFx::AS3::TR::NodeBlock &);
	void HandleUse(const Scaleform::GFx::AS3::TR::Use &);
	void HandleSNode(Scaleform::GFx::AS3::TR::SNode &);
};
void Scaleform::GFx::AS3::TR::Accept<Scaleform::GFx::AS3::TR::OpCodeGenVisitor>(Scaleform::GFx::AS3::TR::OpCodeGenVisitor & v, Scaleform::GFx::AS3::TR::SNode & n); // 0x140446910
struct Scaleform::GFx::AS3::TR::SVisitor<Scaleform::GFx::AS3::TR::OpCodeGenVisitor,void,Scaleform::GFx::AS3::TR::OnSNodeAction> :
	Scaleform::GFx::AS3::TR::OnSNodeAction<Scaleform::GFx::AS3::TR::OpCodeGenVisitor,void>
{
	static void OnDefault(Scaleform::GFx::AS3::TR::SNode &);
};
class Scaleform::GFx::AS3::TR::DFInVisitor<Scaleform::GFx::AS3::TR::OpCodeGenVisitor> :
	Scaleform::GFx::AS3::TR::SVisitor<Scaleform::GFx::AS3::TR::OpCodeGenVisitor,void,Scaleform::GFx::AS3::TR::OnSNodeAction>
{
	struct ParentT;
public:
	static bool InNodeDefault(Scaleform::GFx::AS3::TR::SNode &);
};
void Scaleform::GFx::AS3::TR::DFInOutVisitor<Scaleform::GFx::AS3::TR::OpCodeGenVisitor>::Visit<Scaleform::GFx::AS3::TR::NodeBlock>(Scaleform::GFx::AS3::TR::NodeBlock & n); // 0x140447F50
class Scaleform::GFx::AS3::TR::DFInOutVisitor<Scaleform::GFx::AS3::TR::OpCodeGenVisitor> :
	Scaleform::GFx::AS3::TR::DFInVisitor<Scaleform::GFx::AS3::TR::OpCodeGenVisitor>
{
public:
	static void OutNodeDefault(Scaleform::GFx::AS3::TR::SNode &);
};
class Scaleform::GFx::AS3::TR::OpCodeGenVisitor :
	Scaleform::GFx::AS3::TR::DFAInOutVisitor<Scaleform::GFx::AS3::TR::OpCodeGenVisitor>
{
	class ParentT;
private:
	OpCodeGenVisitor(const Scaleform::GFx::AS3::TR::OpCodeGenVisitor &);
public:
	OpCodeGenVisitor(Scaleform::GFx::AS3::Tracer &, Scaleform::GFx::AS3::VMAbcFile &, Scaleform::GFx::AS3::VMMethodBodyInfo &, unsigned long);
	~OpCodeGenVisitor();
	bool InNode(Scaleform::GFx::AS3::TR::NodeJump &);
	bool InNode(Scaleform::GFx::AS3::TR::NodeBlock &);
	void OutNode(Scaleform::GFx::AS3::TR::NodeScopeN &);
	void OutNode(Scaleform::GFx::AS3::TR::NodeNRT &);
	void OutNode(Scaleform::GFx::AS3::TR::NodeN &);
	void OutNode(Scaleform::GFx::AS3::TR::NodeOP &);
	void OutNode(Scaleform::GFx::AS3::TR::NodeHasNext2 &);
	void OutNode(Scaleform::GFx::AS3::TR::NodeSwap &);
	void OutNode(Scaleform::GFx::AS3::TR::NodeExpr1CT &);
	void OutNode(Scaleform::GFx::AS3::TR::NodeExpr1RT &);
	void OutNode(Scaleform::GFx::AS3::TR::NodeExpr2 &);
	void OutNode(Scaleform::GFx::AS3::TR::NodeExprReg &);
	void OutNode(Scaleform::GFx::AS3::TR::NodeExpr1 &);
	void OutNode(Scaleform::GFx::AS3::TR::NodeSink2RT &);
	void OutNode(Scaleform::GFx::AS3::TR::NodeSink2 &);
	void OutNode(Scaleform::GFx::AS3::TR::NodeSink1 &);
	void OutNode(Scaleform::GFx::AS3::TR::NodeGen &);
	void OutNode(Scaleform::GFx::AS3::TR::NodeConst &);
	void OutNode(Scaleform::GFx::AS3::TR::NodeBlock &);
	void OutNode(Scaleform::GFx::AS3::TR::NodeDebug &);
	void Visit(Scaleform::GFx::AS3::TR::NodeSwitchType &);
	void Visit(Scaleform::GFx::AS3::TR::NodeSwitch &);
	void Visit(Scaleform::GFx::AS3::TR::NodeAbrupt &);
	void Visit(Scaleform::GFx::AS3::TR::NodeIF &);
	void Visit(Scaleform::GFx::AS3::TR::NodeJump &);
	void Visit(Scaleform::GFx::AS3::TR::NodeBlock &);
	void PushDestinationOffset(Scaleform::GFx::AS3::TR::NodeBlock *, long);
	void PatchExceptions(Scaleform::List2<Scaleform::GFx::AS3::TR::NodeBlock,Scaleform::GFx::AS3::TR::OrderAccessor<Scaleform::GFx::AS3::TR::NodeBlock> > &);
	void PatchOpCode();
private:
	Scaleform::GFx::AS3::TR::OpCodeGenVisitor & operator=(const Scaleform::GFx::AS3::TR::OpCodeGenVisitor &);
	const Scaleform::GFx::AS3::VMAbcFile & GetFile();
	Scaleform::GFx::AS3::VMAbcFile & GetFile();
	Scaleform::GFx::AS3::VM & GetVM();
	const Scaleform::GFx::AS3::Abc::ConstPool & GetCP();
	Scaleform::GFx::AS3::Tracer & GetTracer();
	void CalcOpStackSize(unsigned long long);
	unsigned long long GetSTOpCode(const Scaleform::GFx::AS3::TR::NodeIF &);
	Scaleform::GFx::AS3::Tracer & Tr; // 0x8
	Scaleform::GFx::AS3::VMAbcFile & File; // 0x10
	Scaleform::GFx::AS3::VMMethodBodyInfo & MBI; // 0x18
	Scaleform::GFx::AS3::TR::NodeBlock * CurrBlock; // 0x20
	Scaleform::ArrayDH_POD<unsigned __int64,348,Scaleform::ArrayDefaultPolicy> ToPatch; // 0x28
	Scaleform::ArrayDH_POD<long,348,Scaleform::ArrayDefaultPolicy> OpCodeDelta; // 0x48
};
class Scaleform::GFx::AS3::TR::DFAInOutVisitor<Scaleform::GFx::AS3::TR::OpCodeGenVisitor> :
	Scaleform::GFx::AS3::TR::DFInOutVisitor<Scaleform::GFx::AS3::TR::OpCodeGenVisitor>
{
public:
	DFAInOutVisitor<Scaleform::GFx::AS3::TR::OpCodeGenVisitor>(unsigned long);
	bool InNodeDefault(Scaleform::GFx::AS3::TR::SNode &);
	unsigned long GetVisitorMarker();
private:
	Scaleform::GFx::AS3::TR::DFAInOutVisitor<Scaleform::GFx::AS3::TR::OpCodeGenVisitor> & operator=(const Scaleform::GFx::AS3::TR::DFAInOutVisitor<Scaleform::GFx::AS3::TR::OpCodeGenVisitor> &);
	const unsigned long VisitorMarker; // 0x0
};
class Scaleform::List2<Scaleform::GFx::AS3::TR::NodeBlock,Scaleform::GFx::AS3::TR::OrderAccessor<Scaleform::GFx::AS3::TR::NodeBlock> >
{
	class ValueType;
public:
	static void SetPrev(Scaleform::GFx::AS3::TR::NodeBlock *, Scaleform::GFx::AS3::TR::NodeBlock *);
	static void SetNext(Scaleform::GFx::AS3::TR::NodeBlock *, Scaleform::GFx::AS3::TR::NodeBlock *);
	static Scaleform::GFx::AS3::TR::NodeBlock * GetPrev(Scaleform::GFx::AS3::TR::NodeBlock *);
	static const Scaleform::GFx::AS3::TR::NodeBlock * GetPrev(const Scaleform::GFx::AS3::TR::NodeBlock *);
	static Scaleform::GFx::AS3::TR::NodeBlock * GetNext(Scaleform::GFx::AS3::TR::NodeBlock *);
	static const Scaleform::GFx::AS3::TR::NodeBlock * GetNext(const Scaleform::GFx::AS3::TR::NodeBlock *);
private:
	List2<Scaleform::GFx::AS3::TR::NodeBlock,Scaleform::GFx::AS3::TR::OrderAccessor<Scaleform::GFx::AS3::TR::NodeBlock> >(const Scaleform::List2<Scaleform::GFx::AS3::TR::NodeBlock,Scaleform::GFx::AS3::TR::OrderAccessor<Scaleform::GFx::AS3::TR::NodeBlock> > &);
public:
	List2<Scaleform::GFx::AS3::TR::NodeBlock,Scaleform::GFx::AS3::TR::OrderAccessor<Scaleform::GFx::AS3::TR::NodeBlock> >();
	void Clear();
	Scaleform::GFx::AS3::TR::NodeBlock * GetFirst();
	const Scaleform::GFx::AS3::TR::NodeBlock * GetFirst();
	Scaleform::GFx::AS3::TR::NodeBlock * GetLast();
	const Scaleform::GFx::AS3::TR::NodeBlock * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::GFx::AS3::TR::NodeBlock *);
	bool IsLast(const Scaleform::GFx::AS3::TR::NodeBlock *);
	bool IsNull(const Scaleform::GFx::AS3::TR::NodeBlock *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	void PushFront(Scaleform::GFx::AS3::TR::NodeBlock *);
	void PushBack(Scaleform::GFx::AS3::TR::NodeBlock *);
	void InsertBefore(Scaleform::GFx::AS3::TR::NodeBlock *, Scaleform::GFx::AS3::TR::NodeBlock *);
	void InsertAfter(Scaleform::GFx::AS3::TR::NodeBlock *, Scaleform::GFx::AS3::TR::NodeBlock *);
	static void Remove(Scaleform::GFx::AS3::TR::NodeBlock *);
	void BringToFront(Scaleform::GFx::AS3::TR::NodeBlock *);
	void SendToBack(Scaleform::GFx::AS3::TR::NodeBlock *);
	void PushListToFront(Scaleform::List2<Scaleform::GFx::AS3::TR::NodeBlock,Scaleform::GFx::AS3::TR::OrderAccessor<Scaleform::GFx::AS3::TR::NodeBlock> > &);
private:
	const Scaleform::List2<Scaleform::GFx::AS3::TR::NodeBlock,Scaleform::GFx::AS3::TR::OrderAccessor<Scaleform::GFx::AS3::TR::NodeBlock> > & operator=(const Scaleform::List2<Scaleform::GFx::AS3::TR::NodeBlock,Scaleform::GFx::AS3::TR::OrderAccessor<Scaleform::GFx::AS3::TR::NodeBlock> > &);
	Scaleform::GFx::AS3::TR::NodeBlock Root; // 0x0
};
struct Scaleform::GFx::AS3::TR::OrderAccessor<Scaleform::GFx::AS3::TR::NodeBlock>
{
	static void SetPrev(Scaleform::GFx::AS3::TR::NodeBlock *, Scaleform::GFx::AS3::TR::NodeBlock *);
	static void SetNext(Scaleform::GFx::AS3::TR::NodeBlock *, Scaleform::GFx::AS3::TR::NodeBlock *);
	static Scaleform::GFx::AS3::TR::NodeBlock * GetPrev(Scaleform::GFx::AS3::TR::NodeBlock *);
	static const Scaleform::GFx::AS3::TR::NodeBlock * GetPrev(const Scaleform::GFx::AS3::TR::NodeBlock *);
	static Scaleform::GFx::AS3::TR::NodeBlock * GetNext(Scaleform::GFx::AS3::TR::NodeBlock *);
	static const Scaleform::GFx::AS3::TR::NodeBlock * GetNext(const Scaleform::GFx::AS3::TR::NodeBlock *);
};
class Scaleform::ArrayDH_POD<unsigned __int64,348,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayDataDH<unsigned __int64,Scaleform::AllocatorDH_POD<unsigned __int64,348>,Scaleform::ArrayDefaultPolicy> >
{
	typedef unsigned long long ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayDH_POD<unsigned __int64,348,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDH_POD<unsigned __int64,348,Scaleform::ArrayDefaultPolicy> &);
	ArrayDH_POD<unsigned __int64,348,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, const Scaleform::ArrayDefaultPolicy &);
	ArrayDH_POD<unsigned __int64,348,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, long);
	ArrayDH_POD<unsigned __int64,348,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *);
	const Scaleform::ArrayDH_POD<unsigned __int64,348,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayDH_POD<unsigned __int64,348,Scaleform::ArrayDefaultPolicy> &);
	~ArrayDH_POD<unsigned __int64,348,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::ArrayDH_POD<long,348,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayDataDH<long,Scaleform::AllocatorDH_POD<long,348>,Scaleform::ArrayDefaultPolicy> >
{
	typedef long ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayDH_POD<long,348,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDH_POD<long,348,Scaleform::ArrayDefaultPolicy> &);
	ArrayDH_POD<long,348,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, const Scaleform::ArrayDefaultPolicy &);
	ArrayDH_POD<long,348,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, long);
	ArrayDH_POD<long,348,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *);
	const Scaleform::ArrayDH_POD<long,348,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayDH_POD<long,348,Scaleform::ArrayDefaultPolicy> &);
	~ArrayDH_POD<long,348,Scaleform::ArrayDefaultPolicy>();
};
struct Scaleform::GFx::AS3::TR::HasVisitor<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> > >
{
	struct SelfT;
	HasVisitor<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> > >(Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> > *, const Scaleform::GFx::AS3::TR::HasVisitor<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> > > &);
	HasVisitor<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> > >(Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> > *);
	HasVisitor<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> > >();
	Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> > & GetVisitor();
private:
	Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> > * Visitor; // 0x0
};
struct Scaleform::GFx::AS3::TR::HasVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2> >
{
	struct SelfT;
	HasVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2> >(Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2> *, const Scaleform::GFx::AS3::TR::HasVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2> > &);
	HasVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2> >(Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2> *);
	HasVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2> >();
	Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2> & GetVisitor();
private:
	Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2> * Visitor; // 0x0
};
struct Scaleform::GFx::AS3::AbcBlockVisitor2<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2> > :
	Scaleform::GFx::AS3::TR::PVoidAction<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2> >
{
	struct SelfT;
	struct ParentT;
	AbcBlockVisitor2<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2> >(Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2> *, const Scaleform::GFx::AS3::AbcBlockVisitor2<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2> > &);
	AbcBlockVisitor2<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2> >();
	void HandleAbcBlock(Scaleform::GFx::AS3::TR::AbcBlock &);
	void Visit(Scaleform::GFx::AS3::TR::AbcBlock &);
};
struct Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> > :
	Scaleform::GFx::AS3::TR::CFGVisitorBase<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor>,Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> > >
{
	struct ParentT;
	struct SelfT;
	CFGVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> >(Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> *, const Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> > &);
	CFGVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> >(Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> *);
	CFGVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> >();
};
struct Scaleform::GFx::AS3::TR::ResultVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> > :
	Scaleform::GFx::AS3::TR::ResultVisitorDelegate<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor>,Scaleform::GFx::AS3::TR::ResultVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> > >
{
	struct ParentT;
	struct SelfT;
	ResultVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> >(Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> *, const Scaleform::GFx::AS3::TR::ResultVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> > &);
	ResultVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> >(Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> *);
	ResultVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> >();
};
struct Scaleform::GFx::AS3::AbcBlockVisitor2<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> > > :
	Scaleform::GFx::AS3::TR::PVoidAction<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> > >
{
	struct SelfT;
	struct ParentT;
	AbcBlockVisitor2<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> > >(Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> > *, const Scaleform::GFx::AS3::AbcBlockVisitor2<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> > > &);
	AbcBlockVisitor2<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> > >();
	void HandleAbcBlock(Scaleform::GFx::AS3::TR::AbcBlock &);
	void Visit(Scaleform::GFx::AS3::TR::AbcBlock &);
};
struct Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> > > :
	Scaleform::GFx::AS3::TR::CFGVisitorBase<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> >,Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> > > >
{
	struct ParentT;
	struct SelfT;
	CFGVisitor<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> > >(Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> > *, const Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> > > &);
	CFGVisitor<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> > >(Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> > *);
	CFGVisitor<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> > >();
};
void Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> >::Visit<Scaleform::GFx::AS3::TR::AbcBlock>(Scaleform::GFx::AS3::TR::AbcBlock & n); // 0x140447EF0
void Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> >::Visit<Scaleform::GFx::AS3::TR::NodeBlock>(Scaleform::GFx::AS3::TR::NodeBlock & n); // 0x140448020
struct Scaleform::GFx::AS3::TR::InMarker
{
	InMarker(unsigned long);
	unsigned long GetMarker();
private:
	Scaleform::GFx::AS3::TR::InMarker & operator=(const Scaleform::GFx::AS3::TR::InMarker &);
	const unsigned long Marker; // 0x0
};
bool Scaleform::GFx::AS3::TR::InMarker::InNodeDefault<Scaleform::GFx::AS3::TR::AbcBlock>(Scaleform::GFx::AS3::TR::AbcBlock & n); // 0x140447090
bool Scaleform::GFx::AS3::TR::InMarker::Visit<Scaleform::GFx::AS3::TR::SNode>(Scaleform::GFx::AS3::TR::SNode & n); // 0x140448370
struct Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2>
{
	struct SelfT;
	Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2> * GetThis();
	InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2>(const Scaleform::GFx::AS3::TR::InMarker &, const Scaleform::GFx::AS3::AbcBlockVisitor2<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2> > &);
private:
	Scaleform::GFx::AS3::TR::InMarker In; // 0x0
	Scaleform::GFx::AS3::AbcBlockVisitor2<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2> > On; // 0x8
public:
	void __dflt_ctor_closure();
};
struct Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor>
{
	struct SelfT;
	Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> * GetThis();
	InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor>(const Scaleform::GFx::AS3::TR::InMarker &, const Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> > &);
private:
	Scaleform::GFx::AS3::TR::InMarker In; // 0x0
	Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> > On; // 0x8
public:
	void __dflt_ctor_closure();
};
struct Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> >
{
	struct SelfT;
	Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> > * GetThis();
	In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> >(const Scaleform::GFx::AS3::TR::InMarker &, const Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> > > &, const Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> &);
private:
	Scaleform::GFx::AS3::TR::InMarker In; // 0x0
	Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> > > On0; // 0x8
	Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> On1; // 0x10
public:
	void __dflt_ctor_closure();
};
struct Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> >
{
	struct SelfT;
	Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> > * GetThis();
	In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> >(const Scaleform::GFx::AS3::TR::InMarker &, const Scaleform::GFx::AS3::AbcBlockVisitor2<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> > > &, const Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> &);
private:
	Scaleform::GFx::AS3::TR::InMarker In; // 0x0
	Scaleform::GFx::AS3::AbcBlockVisitor2<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::AbcBlockVisitor2,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> > > On0; // 0x8
	Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::AbcBlock> On1; // 0x10
public:
	void __dflt_ctor_closure();
};
void Scaleform::GFx::AS3::TR::SNodeVisitorBase<Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> >,void>::Visit(Scaleform::GFx::AS3::TR::SNode & n); // 0x1404B2A00
void Scaleform::GFx::AS3::TR::SNodeVisitorBase<Scaleform::GFx::AS3::TR::ResultVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> >,void>::Visit(Scaleform::GFx::AS3::TR::SNode & n); // 0x1404B2A80
void Scaleform::GFx::AS3::TR::SNodeVisitorBase<Scaleform::GFx::AS3::TR::KillUseVisitor,void>::Visit(Scaleform::GFx::AS3::TR::SNode & n); // 0x1404B2B80
bool Scaleform::GFx::AS3::TR::SNodeVisitorBase<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,bool>::Visit(Scaleform::GFx::AS3::TR::SNode & n); // 0x1404B2C70
void Scaleform::GFx::AS3::TR::SNodeVisitorBase<Scaleform::GFx::AS3::TR::IsUsedVisitor,void>::Visit(Scaleform::GFx::AS3::TR::SNode & n); // 0x1404B2D80
void Scaleform::GFx::AS3::TR::SNodeVisitorBase<Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor,void>::Visit(Scaleform::GFx::AS3::TR::SNode & n); // 0x1404B2ED0
struct Scaleform::GFx::AS3::TR::HasVisitor<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> > >
{
	struct SelfT;
	HasVisitor<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> > >(Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> > *, const Scaleform::GFx::AS3::TR::HasVisitor<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> > > &);
	HasVisitor<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> > >(Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> > *);
	HasVisitor<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> > >();
	Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> > & GetVisitor();
private:
	Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> > * Visitor; // 0x0
};
struct Scaleform::GFx::AS3::TR::SNodeVisitorBase<Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> >,void>
{
	void Visit(Scaleform::GFx::AS3::TR::SNode &);
};
struct Scaleform::GFx::AS3::TR::HasVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> >
{
	struct SelfT;
	HasVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> >(Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> *, const Scaleform::GFx::AS3::TR::HasVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> > &);
	HasVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> >(Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> *);
	HasVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> >();
	Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> & GetVisitor();
private:
	Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> * Visitor; // 0x0
};
struct Scaleform::GFx::AS3::TR::SNodeVisitorBase<Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> > >,void>
{
	void Visit(Scaleform::GFx::AS3::TR::SNode &);
};
void Scaleform::GFx::AS3::TR::CFGVisitorBase<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> >,Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> > > >::Visit(Scaleform::GFx::AS3::TR::NodeBlock & n); // 0x1404B1F40
void Scaleform::GFx::AS3::TR::CFGVisitorBase<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor>,Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> > >::Visit(Scaleform::GFx::AS3::TR::NodeBlock & n); // 0x1404B22C0
void Scaleform::GFx::AS3::TR::CFGVisitorBase<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor>,Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> > >::Visit(Scaleform::GFx::AS3::TR::NodeAbrupt & n); // 0x1404B2280
void Scaleform::GFx::AS3::TR::CFGVisitorBase<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> >,Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> > > >::Visit(Scaleform::GFx::AS3::TR::NodeIF & n); // 0x1404B2080
void Scaleform::GFx::AS3::TR::CFGVisitorBase<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor>,Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> > >::Visit(Scaleform::GFx::AS3::TR::NodeIF & n); // 0x1404B23A0
void Scaleform::GFx::AS3::TR::CFGVisitorBase<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> >,Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> > > >::Visit(Scaleform::GFx::AS3::TR::NodeSwitch & n); // 0x1404B2110
void Scaleform::GFx::AS3::TR::CFGVisitorBase<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor>,Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> > >::Visit(Scaleform::GFx::AS3::TR::NodeSwitch & n); // 0x1404B2470
void Scaleform::GFx::AS3::TR::CFGVisitorBase<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> >,Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> > > >::Visit(Scaleform::GFx::AS3::TR::NodeSwitchType & n); // 0x1404B21C0
void Scaleform::GFx::AS3::TR::CFGVisitorBase<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor>,Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> > >::Visit(Scaleform::GFx::AS3::TR::NodeSwitchType & n); // 0x1404B2560
struct Scaleform::GFx::AS3::TR::SNodeVisitorBase<Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor,void>
{
	void Visit(Scaleform::GFx::AS3::TR::SNode &);
};
void Scaleform::GFx::AS3::TR::UseVisitor<Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor>::Visit(Scaleform::GFx::AS3::TR::NodeIF & n); // 0x1404B3040
void Scaleform::GFx::AS3::TR::UseVisitor<Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor>::Visit(Scaleform::GFx::AS3::TR::NodeN & n); // 0x1404B3070
void Scaleform::GFx::AS3::TR::UseVisitor<Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor>::Visit(Scaleform::GFx::AS3::TR::NodeNRT & n); // 0x1404B3140
void Scaleform::GFx::AS3::TR::UseVisitor<Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor>::Visit(Scaleform::GFx::AS3::TR::NodeScopeN & n); // 0x1404B33E0
void Scaleform::GFx::AS3::TR::UseVisitor<Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor>::Visit(Scaleform::GFx::AS3::TR::NodeSink2RT & n); // 0x1404B3490
void Scaleform::GFx::AS3::TR::UseVisitor<Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor>::Visit(Scaleform::GFx::AS3::TR::NodeExpr1RT & n); // 0x1404B2FC0
void Scaleform::GFx::AS3::TR::UseVisitor<Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor>::Visit(Scaleform::GFx::AS3::TR::NodeSwap & n); // 0x1404B34F0
void Scaleform::GFx::AS3::TR::UseVisitor<Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor>::Visit(Scaleform::GFx::AS3::TR::NodeExpr1 & n); // 0x1404B3010
void Scaleform::GFx::AS3::TR::UseVisitor<Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor>::Visit(Scaleform::GFx::AS3::TR::NodeAbrupt & n); // 0x1404B3220
struct Scaleform::GFx::AS3::TR::SNodeVisitorBase<Scaleform::GFx::AS3::TR::KillUseVisitor,void>
{
	void Visit(Scaleform::GFx::AS3::TR::SNode &);
};
void Scaleform::GFx::AS3::TR::ArgVisitor<Scaleform::GFx::AS3::TR::KillUseVisitor>::Visit(Scaleform::GFx::AS3::TR::NodeIF & n); // 0x1404B1600
void Scaleform::GFx::AS3::TR::ArgVisitor<Scaleform::GFx::AS3::TR::KillUseVisitor>::Visit(Scaleform::GFx::AS3::TR::NodeSink1 & n); // 0x1404B1BB0
void Scaleform::GFx::AS3::TR::ArgVisitor<Scaleform::GFx::AS3::TR::KillUseVisitor>::Visit(Scaleform::GFx::AS3::TR::NodeSwitchType & n); // 0x1404B1EE0
void Scaleform::GFx::AS3::TR::ArgVisitor<Scaleform::GFx::AS3::TR::KillUseVisitor>::Visit(Scaleform::GFx::AS3::TR::NodeN & n); // 0x1404B1810
void Scaleform::GFx::AS3::TR::ArgVisitor<Scaleform::GFx::AS3::TR::KillUseVisitor>::Visit(Scaleform::GFx::AS3::TR::NodeNRT & n); // 0x1404B1940
void Scaleform::GFx::AS3::TR::ArgVisitor<Scaleform::GFx::AS3::TR::KillUseVisitor>::Visit(Scaleform::GFx::AS3::TR::NodeScopeN & n); // 0x1404B1AD0
void Scaleform::GFx::AS3::TR::ArgVisitor<Scaleform::GFx::AS3::TR::KillUseVisitor>::Visit(Scaleform::GFx::AS3::TR::NodeExpr2 & n); // 0x1404B1C10
void Scaleform::GFx::AS3::TR::ArgVisitor<Scaleform::GFx::AS3::TR::KillUseVisitor>::Visit(Scaleform::GFx::AS3::TR::NodeSink2RT & n); // 0x1404B1CC0
void Scaleform::GFx::AS3::TR::ArgVisitor<Scaleform::GFx::AS3::TR::KillUseVisitor>::Visit(Scaleform::GFx::AS3::TR::NodeExpr1 & n); // 0x1404B1420
void Scaleform::GFx::AS3::TR::ArgVisitor<Scaleform::GFx::AS3::TR::KillUseVisitor>::Visit(Scaleform::GFx::AS3::TR::NodeExpr1CT & n); // 0x1404B15A0
void Scaleform::GFx::AS3::TR::ArgVisitor<Scaleform::GFx::AS3::TR::KillUseVisitor>::Visit(Scaleform::GFx::AS3::TR::NodeExpr1RT & n); // 0x1404B1480
void Scaleform::GFx::AS3::TR::ArgVisitor<Scaleform::GFx::AS3::TR::KillUseVisitor>::Visit(Scaleform::GFx::AS3::TR::NodeSwap & n); // 0x1404B1E30
void Scaleform::GFx::AS3::TR::ArgVisitor<Scaleform::GFx::AS3::TR::KillUseVisitor>::Visit(Scaleform::GFx::AS3::TR::NodeAbrupt & n); // 0x1404B16B0
struct Scaleform::GFx::AS3::TR::SNodeVisitorBase<Scaleform::GFx::AS3::TR::IsUsedVisitor,void>
{
	void Visit(Scaleform::GFx::AS3::TR::SNode &);
};
struct Scaleform::GFx::AS3::TR::SNodeVisitorBase<Scaleform::GFx::AS3::TR::ResultVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> >,void>
{
	void Visit(Scaleform::GFx::AS3::TR::SNode &);
};
void Scaleform::GFx::AS3::TR::ResultVisitorBase<Scaleform::GFx::AS3::TR::ResultVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> > >::Visit(Scaleform::GFx::AS3::TR::NodeBlock & n); // 0x1404B2660
void Scaleform::GFx::AS3::TR::ResultVisitorBase<Scaleform::GFx::AS3::TR::IsUsedVisitor>::Visit(Scaleform::GFx::AS3::TR::NodeBlock & n); // 0x1404B28E0
void Scaleform::GFx::AS3::TR::ResultVisitorBase<Scaleform::GFx::AS3::TR::ResultVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> > >::Visit(Scaleform::GFx::AS3::TR::NodeSwitchType & n); // 0x1404B2880
void Scaleform::GFx::AS3::TR::ResultVisitorBase<Scaleform::GFx::AS3::TR::IsUsedVisitor>::Visit(Scaleform::GFx::AS3::TR::NodeSwitchType & n); // 0x1404B29D0
void Scaleform::GFx::AS3::TR::ResultVisitorBase<Scaleform::GFx::AS3::TR::ResultVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> > >::Visit(Scaleform::GFx::AS3::TR::NodeSwap & n); // 0x1404B2850
void Scaleform::GFx::AS3::TR::ResultVisitorBase<Scaleform::GFx::AS3::TR::ResultVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> > >::Visit(Scaleform::GFx::AS3::TR::NodeHasNext2 & n); // 0x1404B2800
void Scaleform::GFx::AS3::TR::ResultVisitorBase<Scaleform::GFx::AS3::TR::IsUsedVisitor>::Visit(Scaleform::GFx::AS3::TR::NodeHasNext2 & n); // 0x1404B29A0
struct Scaleform::GFx::AS3::TR::HasVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> >
{
	struct SelfT;
	HasVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> >(Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> *, const Scaleform::GFx::AS3::TR::HasVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> > &);
	HasVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> >(Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> *);
	HasVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> >();
	Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> & GetVisitor();
private:
	Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> * Visitor; // 0x0
};
struct Scaleform::GFx::AS3::TR::ResultVisitorBase<Scaleform::GFx::AS3::TR::ResultVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> > > :
	Scaleform::GFx::AS3::TR::SNodeVisitorBase<Scaleform::GFx::AS3::TR::ResultVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> >,void>
{
	struct ParentT;
	void Visit(Scaleform::GFx::AS3::TR::NodeHasNext2 &);
	void Visit(Scaleform::GFx::AS3::TR::NodeSwap &);
	void Visit(Scaleform::GFx::AS3::TR::NodeExpr1CT &);
	void Visit(Scaleform::GFx::AS3::TR::NodeExpr1RT &);
	void Visit(Scaleform::GFx::AS3::TR::NodeExpr2 &);
	void Visit(Scaleform::GFx::AS3::TR::NodeExprReg &);
	void Visit(Scaleform::GFx::AS3::TR::NodeExpr1 &);
	void Visit(Scaleform::GFx::AS3::TR::NodeScopeN &);
	void Visit(Scaleform::GFx::AS3::TR::NodeNRT &);
	void Visit(Scaleform::GFx::AS3::TR::NodeN &);
	void Visit(Scaleform::GFx::AS3::TR::NodeSwitchType &);
	void Visit(Scaleform::GFx::AS3::TR::NodeGen &);
	void Visit(Scaleform::GFx::AS3::TR::NodeConst &);
	void Visit(Scaleform::GFx::AS3::TR::NodeBlock &);
protected:
	void HandleDef(const Scaleform::GFx::AS3::TR::Def *);
};
void Scaleform::GFx::AS3::TR::ResultVisitorDelegate<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor>,Scaleform::GFx::AS3::TR::ResultVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> > >::HandleDef(const Scaleform::GFx::AS3::TR::Def * def); // 0x14048CD90
struct Scaleform::GFx::AS3::TR::ResultVisitorDelegate<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor>,Scaleform::GFx::AS3::TR::ResultVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> > > :
	Scaleform::GFx::AS3::TR::ResultVisitorBase<Scaleform::GFx::AS3::TR::ResultVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> > >,
	Scaleform::GFx::AS3::TR::HasVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> >
{
	struct ParentT;
	struct SelfT;
	ResultVisitorDelegate<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor>,Scaleform::GFx::AS3::TR::ResultVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::Propa(Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> *, const Scaleform::GFx::AS3::TR::ResultVisitorDelegate<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor>,Scaleform::GFx::AS3::TR::ResultVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> > > &);
	ResultVisitorDelegate<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor>,Scaleform::GFx::AS3::TR::ResultVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::Propa(Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> *);
	ResultVisitorDelegate<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor>,Scaleform::GFx::AS3::TR::ResultVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::Propa();
	void HandleDef(const Scaleform::GFx::AS3::TR::Def *);
};
struct Scaleform::GFx::AS3::TR::CFGVisitorBase<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> >,Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> > > > :
	Scaleform::GFx::AS3::TR::SNodeVisitorBase<Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> > >,void>,
	Scaleform::GFx::AS3::TR::HasVisitor<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> > >
{
	struct ParentT;
	struct SelfT;
	CFGVisitorBase<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> >,Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::(Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> > *, const Scaleform::GFx::AS3::TR::CFGVisitorBase<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> >,Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> > > > &);
	CFGVisitorBase<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> >,Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::(Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> > *);
	CFGVisitorBase<Scaleform::GFx::AS3::TR::In2PSVisitorTA0<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor,Scaleform::GFx::AS3::RPOAction<Scaleform::GFx::AS3::TR::NodeBlock> >,Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::();
	void Visit(Scaleform::GFx::AS3::TR::NodeSwitchType &);
	void Visit(Scaleform::GFx::AS3::TR::NodeSwitch &);
	void Visit(Scaleform::GFx::AS3::TR::NodeAbrupt &);
	void Visit(Scaleform::GFx::AS3::TR::NodeIF &);
	void Visit(Scaleform::GFx::AS3::TR::NodeJump &);
	void Visit(Scaleform::GFx::AS3::TR::NodeBlock &);
};
struct Scaleform::GFx::AS3::TR::CFGVisitorBase<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor>,Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> > > :
	Scaleform::GFx::AS3::TR::SNodeVisitorBase<Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> >,void>,
	Scaleform::GFx::AS3::TR::HasVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> >
{
	struct ParentT;
	struct SelfT;
	CFGVisitorBase<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor>,Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::T(Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> *, const Scaleform::GFx::AS3::TR::CFGVisitorBase<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor>,Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> > > &);
	CFGVisitorBase<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor>,Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::T(Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor> *);
	CFGVisitorBase<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::TR::CFGVisitor>,Scaleform::GFx::AS3::TR::CFGVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::InMarker,Scaleform::GFx::AS3::T();
	void Visit(Scaleform::GFx::AS3::TR::NodeSwitchType &);
	void Visit(Scaleform::GFx::AS3::TR::NodeSwitch &);
	void Visit(Scaleform::GFx::AS3::TR::NodeAbrupt &);
	void Visit(Scaleform::GFx::AS3::TR::NodeIF &);
	void Visit(Scaleform::GFx::AS3::TR::NodeJump &);
	void Visit(Scaleform::GFx::AS3::TR::NodeBlock &);
};