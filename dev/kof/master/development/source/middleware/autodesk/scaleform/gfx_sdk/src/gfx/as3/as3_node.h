#pragma once

class Scaleform::GFx::AS3::TR::SNode :
	Scaleform::ListNode<Scaleform::GFx::AS3::TR::SNode>
{
	enum NodeT
	{
		nDebug = 0,
		nBlock = 1,
		nConst = 2,
		nGen = 3,
		nJump = 4,
		nIF = 5,
		nSwitch = 6,
		nSwitchType = 7,
		nN = 8,
		nNRT = 9,
		nScopeN = 10,
		nSafepoint = 11,
		nSink1 = 12,
		nSink2 = 13,
		nSink2RT = 14,
		nExpr1 = 15,
		nExprReg = 16,
		nExpr2 = 17,
		nExpr1RT = 18,
		nExpr1CT = 19,
		nSwap = 20,
		nHasNext2 = 21,
		nOP = 22,
		nAbrupt = 23,
	};
public:
	Scaleform::GFx::AS3::TR::SNode & GetThis();
protected:
	SNode(Scaleform::GFx::AS3::TR::SNode::NodeT);
public:
	Scaleform::GFx::AS3::TR::SNode::NodeT GetNodeT();
	static unsigned long GetMaxVisitorMarker();
	bool WasVisited(unsigned long);
	unsigned long GetVisitorMarker();
	void SetVisitorMarker(unsigned long);
	enum <unnamed-enum-NodeTypeSize>
	{
		NodeTypeSize = 5,
		VisitorMarkerSize = 27,
	};
private:
	unsigned long NodeType : 5; // 0x10
	unsigned long VisitorMarker : 27; // 0x10
};
struct Scaleform::ListNode<Scaleform::GFx::AS3::TR::SNode>
{
	Scaleform::GFx::AS3::TR::SNode * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::GFx::AS3::TR::SNode * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::GFx::AS3::TR::SNode>();
	Scaleform::GFx::AS3::TR::SNode * GetPrev();
	Scaleform::GFx::AS3::TR::SNode * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::GFx::AS3::TR::SNode *);
	void InsertNodeAfter(Scaleform::GFx::AS3::TR::SNode *);
	void InsertNodeBefore(Scaleform::GFx::AS3::TR::SNode *);
};
class Scaleform::GFx::AS3::TR::Use :
	Scaleform::ListNode<Scaleform::GFx::AS3::TR::Use>
{
private:
	Use(const Scaleform::GFx::AS3::TR::Use &);
public:
	Use(Scaleform::GFx::AS3::TR::SNode &, Scaleform::GFx::AS3::TR::Def *);
	Use();
	Scaleform::GFx::AS3::TR::SNode & GetOwner();
	Scaleform::GFx::AS3::TR::Def * GetResult();
	bool operator bool();
private:
	Scaleform::GFx::AS3::TR::Use & operator=(const Scaleform::GFx::AS3::TR::Use &);
public:
	void operator=(Scaleform::GFx::AS3::TR::Def *);
	void Unlink();
	void Link(Scaleform::GFx::AS3::TR::Def *);
private:
	Scaleform::GFx::AS3::TR::SNode * Owner; // 0x10
	Scaleform::GFx::AS3::TR::Def * Result; // 0x18
};
struct Scaleform::ListNode<Scaleform::GFx::AS3::TR::Use>
{
	Scaleform::GFx::AS3::TR::Use * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::GFx::AS3::TR::Use * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::GFx::AS3::TR::Use>();
	Scaleform::GFx::AS3::TR::Use * GetPrev();
	Scaleform::GFx::AS3::TR::Use * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::GFx::AS3::TR::Use *);
	void InsertNodeAfter(Scaleform::GFx::AS3::TR::Use *);
	void InsertNodeBefore(Scaleform::GFx::AS3::TR::Use *);
};
class Scaleform::GFx::AS3::TR::Def
{
private:
	Def(const Scaleform::GFx::AS3::TR::Def &);
public:
	Def(Scaleform::GFx::AS3::TR::SNode &, const Scaleform::GFx::AS3::TR::Type *);
	Def();
	bool IsUsed();
	bool IsPhi();
	Scaleform::GFx::AS3::TR::SNode & GetOwner();
	const Scaleform::List<Scaleform::GFx::AS3::TR::Use,Scaleform::GFx::AS3::TR::Use,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Use> > & GetUses();
	void MoveUsesTo(Scaleform::GFx::AS3::TR::Def *);
	void SetType(const Scaleform::GFx::AS3::TR::Type *);
protected:
	const Scaleform::GFx::AS3::TR::Type * GetType();
private:
	Scaleform::GFx::AS3::TR::Def & operator=(const Scaleform::GFx::AS3::TR::Def &);
	Scaleform::GFx::AS3::TR::SNode * Owner; // 0x0
	const Scaleform::GFx::AS3::TR::Type * RType; // 0x8
	Scaleform::List<Scaleform::GFx::AS3::TR::Use,Scaleform::GFx::AS3::TR::Use,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Use> > Uses; // 0x10
};
class Scaleform::List<Scaleform::GFx::AS3::TR::Use,Scaleform::GFx::AS3::TR::Use,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Use> >
{
	class ValueType;
private:
	List<Scaleform::GFx::AS3::TR::Use,Scaleform::GFx::AS3::TR::Use,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Use> >(const Scaleform::List<Scaleform::GFx::AS3::TR::Use,Scaleform::GFx::AS3::TR::Use,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Use> > &);
public:
	List<Scaleform::GFx::AS3::TR::Use,Scaleform::GFx::AS3::TR::Use,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Use> >();
	void Clear();
	Scaleform::GFx::AS3::TR::Use * GetFirst();
	Scaleform::GFx::AS3::TR::Use * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::GFx::AS3::TR::Use *);
	bool IsLast(const Scaleform::GFx::AS3::TR::Use *);
	bool IsNull(const Scaleform::GFx::AS3::TR::Use *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::GFx::AS3::TR::Use * GetPrev(const Scaleform::GFx::AS3::TR::Use *);
	static Scaleform::GFx::AS3::TR::Use * GetNext(const Scaleform::GFx::AS3::TR::Use *);
	void PushFront(Scaleform::GFx::AS3::TR::Use *);
	void PushBack(Scaleform::GFx::AS3::TR::Use *);
	static void Remove(Scaleform::GFx::AS3::TR::Use *);
	void BringToFront(Scaleform::GFx::AS3::TR::Use *);
	void SendToBack(Scaleform::GFx::AS3::TR::Use *);
	void PushListToFront(Scaleform::List<Scaleform::GFx::AS3::TR::Use,Scaleform::GFx::AS3::TR::Use,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Use> > &);
	void PushListToBack(Scaleform::List<Scaleform::GFx::AS3::TR::Use,Scaleform::GFx::AS3::TR::Use,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Use> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::GFx::AS3::TR::Use,Scaleform::GFx::AS3::TR::Use,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Use> > &, Scaleform::GFx::AS3::TR::Use *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::GFx::AS3::TR::Use,Scaleform::GFx::AS3::TR::Use,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Use> > &, Scaleform::GFx::AS3::TR::Use *);
	void PushListItemsToFront(Scaleform::GFx::AS3::TR::Use *, Scaleform::GFx::AS3::TR::Use *);
private:
	const Scaleform::List<Scaleform::GFx::AS3::TR::Use,Scaleform::GFx::AS3::TR::Use,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Use> > & operator=(const Scaleform::List<Scaleform::GFx::AS3::TR::Use,Scaleform::GFx::AS3::TR::Use,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Use> > &);
	Scaleform::ListNode<Scaleform::GFx::AS3::TR::Use> Root; // 0x0
};
class Scaleform::GFx::AS3::TR::NodeDebug :
	Scaleform::GFx::AS3::TR::SNode
{
	enum OP
	{
		opFile = 0,
		opLine = 1,
	};
public:
	static Scaleform::GFx::AS3::TR::NodeDebug::OP GetOP(Scaleform::GFx::AS3::Abc::Code::OpCode);
	Scaleform::GFx::AS3::TR::NodeDebug::OP GetOP();
	static Scaleform::GFx::AS3::WordCode::OpCode GetOpCode(Scaleform::GFx::AS3::TR::NodeDebug::OP);
private:
	NodeDebug(const Scaleform::GFx::AS3::TR::NodeDebug &);
protected:
	NodeDebug(Scaleform::GFx::AS3::TR::NodeDebug::OP, long);
	NodeDebug(Scaleform::GFx::AS3::TR::NodeDebug::OP);
public:
	long GetArg1();
	static bool IsValidOpCode(Scaleform::GFx::AS3::Abc::Code::OpCode);
	bool UpdateResult(Scaleform::GFx::AS3::TR::TypeSystem &);
private:
	Scaleform::GFx::AS3::TR::NodeDebug & operator=(const Scaleform::GFx::AS3::TR::NodeDebug &);
	Scaleform::GFx::AS3::TR::NodeDebug::OP Op; // 0x18
	long Arg1; // 0x1C
};
class Scaleform::GFx::AS3::TR::NodeBEO :
	Scaleform::GFx::AS3::TR::SNode
{
private:
	NodeBEO(const Scaleform::GFx::AS3::TR::NodeBEO &);
protected:
	NodeBEO(Scaleform::GFx::AS3::TR::SNode::NodeT, Scaleform::GFx::AS3::TR::NodeBlock *, Scaleform::GFx::AS3::TR::NodeBlock *, unsigned long, Scaleform::GFx::AS3::TR::Use *, unsigned long, Scaleform::GFx::AS3::TR::Use *, unsigned long, Scaleform::GFx::AS3::TR::Use *, Scaleform::GFx::AS3::TR::Def *);
	NodeBEO(Scaleform::GFx::AS3::TR::SNode::NodeT);
public:
	Scaleform::GFx::AS3::TR::NodeBlock * GetBlockStart();
	Scaleform::GFx::AS3::TR::NodeBlock * GetSuccessor();
	unsigned long GetNumOfRegs();
	Scaleform::GFx::AS3::TR::Use & GetReg(unsigned long);
	unsigned long GetNumOfOpStacks();
	Scaleform::GFx::AS3::TR::Use & GetOpStack(unsigned long);
	unsigned long GetNumOfScopeStacks();
	Scaleform::GFx::AS3::TR::Use & GetScopeStack(unsigned long);
	Scaleform::GFx::AS3::TR::Use & GetEffectIn();
	const Scaleform::GFx::AS3::TR::Use & GetEffectIn();
	static bool IsValidOpCode(Scaleform::GFx::AS3::Abc::Code::OpCode);
	Scaleform::GFx::AS3::TR::Use & GetEffectInArg(unsigned long);
private:
	Scaleform::GFx::AS3::TR::NodeBEO & operator=(const Scaleform::GFx::AS3::TR::NodeBEO &);
	unsigned long NumOfRegs; // 0x18
	unsigned long NumOfOpStacks; // 0x1C
	unsigned long NumOfScopeStacks; // 0x20
	Scaleform::GFx::AS3::TR::NodeBlock * BlockStart; // 0x28
	Scaleform::GFx::AS3::TR::NodeBlock * Successor; // 0x30
	Scaleform::GFx::AS3::TR::Use * Reg; // 0x38
	Scaleform::GFx::AS3::TR::Use * OpStack; // 0x40
	Scaleform::GFx::AS3::TR::Use * ScopeStack; // 0x48
	Scaleform::GFx::AS3::TR::Use EffectIn; // 0x50
};
Scaleform::GFx::AS3::TR::Use & Scaleform::GFx::AS3::TR::NodeBEO::GetReg(unsigned long n); // 0x140489400
Scaleform::GFx::AS3::TR::Use & Scaleform::GFx::AS3::TR::NodeBEO::GetOpStack(unsigned long n); // 0x140488620
Scaleform::GFx::AS3::TR::Use & Scaleform::GFx::AS3::TR::NodeBEO::GetScopeStack(unsigned long n); // 0x140489C00
Scaleform::GFx::AS3::TR::Use & Scaleform::GFx::AS3::TR::NodeBEO::GetEffectInArg(unsigned long n); // 0x140485C70
class Scaleform::GFx::AS3::TR::NodeBEM :
	Scaleform::GFx::AS3::TR::NodeBEO
{
private:
	NodeBEM(const Scaleform::GFx::AS3::TR::NodeBEM &);
protected:
	NodeBEM(Scaleform::GFx::AS3::TR::SNode::NodeT, Scaleform::GFx::AS3::TR::NodeBlock *, Scaleform::GFx::AS3::TR::NodeBlock *, unsigned long, Scaleform::GFx::AS3::TR::Use *, unsigned long, Scaleform::GFx::AS3::TR::Use *, unsigned long, Scaleform::GFx::AS3::TR::Use *, Scaleform::GFx::AS3::TR::Def *);
public:
	NodeBEM();
protected:
	NodeBEM(Scaleform::GFx::AS3::TR::SNode::NodeT);
public:
	static bool IsValidOpCode(Scaleform::GFx::AS3::Abc::Code::OpCode);
protected:
	void PatchSuccessor();
private:
	Scaleform::GFx::AS3::TR::NodeBEM & operator=(const Scaleform::GFx::AS3::TR::NodeBEM &);
	Scaleform::GFx::AS3::TR::NodeBEM * PrevBEM; // 0x70
	Scaleform::GFx::AS3::TR::NodeBEM * NextBEM; // 0x78
};
Scaleform::GFx::AS3::TR::NodeBEM::NodeBEM(Scaleform::GFx::AS3::TR::SNode::NodeT t, Scaleform::GFx::AS3::TR::NodeBlock * bs, Scaleform::GFx::AS3::TR::NodeBlock * dest, unsigned long argcR, Scaleform::GFx::AS3::TR::Use * argvR, unsigned long argcOS, Scaleform::GFx::AS3::TR::Use * argvOS, unsigned long argcSS, Scaleform::GFx::AS3::TR::Use * argvSS, Scaleform::GFx::AS3::TR::Def * ei); // 0x14044FD80
class Scaleform::GFx::AS3::TR::NodeBlock :
	Scaleform::GFx::AS3::TR::SNode
{
	enum EType
	{
		tNormal = 0,
		tTry = 1,
		tCatch = 2,
	};
private:
	NodeBlock(const Scaleform::GFx::AS3::TR::NodeBlock &);
protected:
	NodeBlock(Scaleform::GFx::AS3::TR::SNode::NodeT, unsigned long, Scaleform::GFx::AS3::TR::Def *, unsigned long, Scaleform::GFx::AS3::TR::Def *, unsigned long, Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::AbcBlock *, const Scaleform::GFx::AS3::TR::Type *);
	NodeBlock(Scaleform::GFx::AS3::TR::SNode::NodeT, Scaleform::GFx::AS3::TR::AbcBlock *, const Scaleform::GFx::AS3::TR::Type *);
	NodeBlock(const Scaleform::GFx::AS3::TR::Type *);
public:
	NodeBlock();
	unsigned long GetNumOfRegs();
	Scaleform::GFx::AS3::TR::Def * GetReg();
	Scaleform::GFx::AS3::TR::Def * GetReg(unsigned long);
	unsigned long GetNumOfOpStacks();
	Scaleform::GFx::AS3::TR::Def * GetOpStack();
	Scaleform::GFx::AS3::TR::Def * GetOpStack(unsigned long);
	unsigned long GetNumOfScopeStacks();
	Scaleform::GFx::AS3::TR::Def * GetScopeStack();
	Scaleform::GFx::AS3::TR::Def * GetScopeStack(unsigned long);
	unsigned long GetNumOfXSuccs();
	Scaleform::GFx::AS3::TR::NodeBlock * GetXSucc(unsigned long);
	Scaleform::GFx::AS3::TR::Def * GetEffectOut();
	static bool IsValidOpCode(Scaleform::GFx::AS3::Abc::Code::OpCode);
	class NodeCont;
	class PredCont;
	Scaleform::GFx::AS3::TR::NodeBlock::EType GetType();
	unsigned long GetFrom();
	void SetFrom(unsigned long);
	unsigned long GetTo();
	void SetTo(unsigned long);
	void PushNode(Scaleform::GFx::AS3::TR::SNode &);
	void PushNodeFront(Scaleform::GFx::AS3::TR::SNode &);
	Scaleform::List<Scaleform::GFx::AS3::TR::SNode,Scaleform::GFx::AS3::TR::SNode,Scaleform::ListNode<Scaleform::GFx::AS3::TR::SNode> > & GetNodes();
	const Scaleform::List2<Scaleform::GFx::AS3::TR::NodeBEM,Scaleform::GFx::AS3::TR::BEM_Accessor> & GetPreds();
	Scaleform::GFx::AS3::TR::AbcBlock * GetAbcBlock();
	void SetCatchBlocks(Scaleform::GFx::AS3::TR::NodeBlock * *, unsigned long);
	unsigned long GetCurOpStackSize();
	void SetCurOpStackSize(unsigned long);
	Scaleform::GFx::AS3::TR::NodeBlock * GetNextOrder();
	Scaleform::GFx::AS3::TR::NodeBlock * GetIDom();
	void SetIDom(Scaleform::GFx::AS3::TR::NodeBlock *);
	unsigned long GetPONum();
	void SetPONum(unsigned long);
	unsigned long GetNumOfPreds();
	bool IsOptimistic();
	bool IsReg(Scaleform::GFx::AS3::TR::Def *);
	unsigned long GetRegInd(Scaleform::GFx::AS3::TR::Def *);
	bool IsOpStack(Scaleform::GFx::AS3::TR::Def *);
	unsigned long GetOpStackInd(Scaleform::GFx::AS3::TR::Def *);
	bool IsScopeStack(Scaleform::GFx::AS3::TR::Def *);
	unsigned long GetScopeStackInd(Scaleform::GFx::AS3::TR::Def *);
	bool UpdateResult(Scaleform::GFx::AS3::TR::TypeSystem &);
private:
	void SetType(Scaleform::GFx::AS3::TR::NodeBlock::EType);
	void SetPredecessor(Scaleform::GFx::AS3::TR::NodeBEO *);
	void AddPredecessor(Scaleform::GFx::AS3::TR::NodeBEM *);
	void RemovePredecessor(Scaleform::GFx::AS3::TR::NodeBEM *);
	Scaleform::GFx::AS3::TR::NodeBlock & operator=(const Scaleform::GFx::AS3::TR::NodeBlock &);
	Scaleform::GFx::AS3::TR::NodeBlock::EType Type; // 0x18
	unsigned long PONum; // 0x1C
	Scaleform::GFx::AS3::TR::NodeBlock * IDom; // 0x20
	unsigned long From; // 0x28
	unsigned long To; // 0x2C
	unsigned long NumOfPreds; // 0x30
	unsigned long CurOpStackSize; // 0x34
	Scaleform::GFx::AS3::TR::AbcBlock * pAbcBlock; // 0x38
	Scaleform::List<Scaleform::GFx::AS3::TR::SNode,Scaleform::GFx::AS3::TR::SNode,Scaleform::ListNode<Scaleform::GFx::AS3::TR::SNode> > Nodes; // 0x40
	Scaleform::List2<Scaleform::GFx::AS3::TR::NodeBEM,Scaleform::GFx::AS3::TR::BEM_Accessor> Preds; // 0x50
	Scaleform::GFx::AS3::TR::NodeBlock * PrevOrder; // 0xD0
	Scaleform::GFx::AS3::TR::NodeBlock * NextOrder; // 0xD8
	unsigned long NumOfRegs; // 0xE0
	unsigned long NumOfOpStacks; // 0xE4
	unsigned long NumOfScopeStacks; // 0xE8
	unsigned long NumOfXSuccs; // 0xEC
	Scaleform::GFx::AS3::TR::Def * Reg; // 0xF0
	Scaleform::GFx::AS3::TR::Def * OpStack; // 0xF8
	Scaleform::GFx::AS3::TR::Def * ScopeStack; // 0x100
	Scaleform::GFx::AS3::TR::NodeBlock * * XSucc; // 0x108
	Scaleform::GFx::AS3::TR::Def EffectOut; // 0x110
};
Scaleform::GFx::AS3::TR::NodeBlock::NodeBlock(); // 0x14044FF50
class Scaleform::List<Scaleform::GFx::AS3::TR::SNode,Scaleform::GFx::AS3::TR::SNode,Scaleform::ListNode<Scaleform::GFx::AS3::TR::SNode> >
{
	class ValueType;
private:
	List<Scaleform::GFx::AS3::TR::SNode,Scaleform::GFx::AS3::TR::SNode,Scaleform::ListNode<Scaleform::GFx::AS3::TR::SNode> >(const Scaleform::List<Scaleform::GFx::AS3::TR::SNode,Scaleform::GFx::AS3::TR::SNode,Scaleform::ListNode<Scaleform::GFx::AS3::TR::SNode> > &);
public:
	List<Scaleform::GFx::AS3::TR::SNode,Scaleform::GFx::AS3::TR::SNode,Scaleform::ListNode<Scaleform::GFx::AS3::TR::SNode> >();
	void Clear();
	Scaleform::GFx::AS3::TR::SNode * GetFirst();
	Scaleform::GFx::AS3::TR::SNode * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::GFx::AS3::TR::SNode *);
	bool IsLast(const Scaleform::GFx::AS3::TR::SNode *);
	bool IsNull(const Scaleform::GFx::AS3::TR::SNode *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::GFx::AS3::TR::SNode * GetPrev(const Scaleform::GFx::AS3::TR::SNode *);
	static Scaleform::GFx::AS3::TR::SNode * GetNext(const Scaleform::GFx::AS3::TR::SNode *);
	void PushFront(Scaleform::GFx::AS3::TR::SNode *);
	void PushBack(Scaleform::GFx::AS3::TR::SNode *);
	static void Remove(Scaleform::GFx::AS3::TR::SNode *);
	void BringToFront(Scaleform::GFx::AS3::TR::SNode *);
	void SendToBack(Scaleform::GFx::AS3::TR::SNode *);
	void PushListToFront(Scaleform::List<Scaleform::GFx::AS3::TR::SNode,Scaleform::GFx::AS3::TR::SNode,Scaleform::ListNode<Scaleform::GFx::AS3::TR::SNode> > &);
	void PushListToBack(Scaleform::List<Scaleform::GFx::AS3::TR::SNode,Scaleform::GFx::AS3::TR::SNode,Scaleform::ListNode<Scaleform::GFx::AS3::TR::SNode> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::GFx::AS3::TR::SNode,Scaleform::GFx::AS3::TR::SNode,Scaleform::ListNode<Scaleform::GFx::AS3::TR::SNode> > &, Scaleform::GFx::AS3::TR::SNode *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::GFx::AS3::TR::SNode,Scaleform::GFx::AS3::TR::SNode,Scaleform::ListNode<Scaleform::GFx::AS3::TR::SNode> > &, Scaleform::GFx::AS3::TR::SNode *);
	void PushListItemsToFront(Scaleform::GFx::AS3::TR::SNode *, Scaleform::GFx::AS3::TR::SNode *);
private:
	const Scaleform::List<Scaleform::GFx::AS3::TR::SNode,Scaleform::GFx::AS3::TR::SNode,Scaleform::ListNode<Scaleform::GFx::AS3::TR::SNode> > & operator=(const Scaleform::List<Scaleform::GFx::AS3::TR::SNode,Scaleform::GFx::AS3::TR::SNode,Scaleform::ListNode<Scaleform::GFx::AS3::TR::SNode> > &);
	Scaleform::ListNode<Scaleform::GFx::AS3::TR::SNode> Root; // 0x0
};
class Scaleform::List2<Scaleform::GFx::AS3::TR::NodeBEM,Scaleform::GFx::AS3::TR::BEM_Accessor>
{
	class ValueType;
public:
	static void SetPrev(Scaleform::GFx::AS3::TR::NodeBEM *, Scaleform::GFx::AS3::TR::NodeBEM *);
	static void SetNext(Scaleform::GFx::AS3::TR::NodeBEM *, Scaleform::GFx::AS3::TR::NodeBEM *);
	static Scaleform::GFx::AS3::TR::NodeBEM * GetPrev(Scaleform::GFx::AS3::TR::NodeBEM *);
	static const Scaleform::GFx::AS3::TR::NodeBEM * GetPrev(const Scaleform::GFx::AS3::TR::NodeBEM *);
	static Scaleform::GFx::AS3::TR::NodeBEM * GetNext(Scaleform::GFx::AS3::TR::NodeBEM *);
	static const Scaleform::GFx::AS3::TR::NodeBEM * GetNext(const Scaleform::GFx::AS3::TR::NodeBEM *);
private:
	List2<Scaleform::GFx::AS3::TR::NodeBEM,Scaleform::GFx::AS3::TR::BEM_Accessor>(const Scaleform::List2<Scaleform::GFx::AS3::TR::NodeBEM,Scaleform::GFx::AS3::TR::BEM_Accessor> &);
public:
	List2<Scaleform::GFx::AS3::TR::NodeBEM,Scaleform::GFx::AS3::TR::BEM_Accessor>();
	void Clear();
	Scaleform::GFx::AS3::TR::NodeBEM * GetFirst();
	const Scaleform::GFx::AS3::TR::NodeBEM * GetFirst();
	Scaleform::GFx::AS3::TR::NodeBEM * GetLast();
	const Scaleform::GFx::AS3::TR::NodeBEM * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::GFx::AS3::TR::NodeBEM *);
	bool IsLast(const Scaleform::GFx::AS3::TR::NodeBEM *);
	bool IsNull(const Scaleform::GFx::AS3::TR::NodeBEM *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	void PushFront(Scaleform::GFx::AS3::TR::NodeBEM *);
	void PushBack(Scaleform::GFx::AS3::TR::NodeBEM *);
	void InsertBefore(Scaleform::GFx::AS3::TR::NodeBEM *, Scaleform::GFx::AS3::TR::NodeBEM *);
	void InsertAfter(Scaleform::GFx::AS3::TR::NodeBEM *, Scaleform::GFx::AS3::TR::NodeBEM *);
	static void Remove(Scaleform::GFx::AS3::TR::NodeBEM *);
	void BringToFront(Scaleform::GFx::AS3::TR::NodeBEM *);
	void SendToBack(Scaleform::GFx::AS3::TR::NodeBEM *);
	void PushListToFront(Scaleform::List2<Scaleform::GFx::AS3::TR::NodeBEM,Scaleform::GFx::AS3::TR::BEM_Accessor> &);
private:
	const Scaleform::List2<Scaleform::GFx::AS3::TR::NodeBEM,Scaleform::GFx::AS3::TR::BEM_Accessor> & operator=(const Scaleform::List2<Scaleform::GFx::AS3::TR::NodeBEM,Scaleform::GFx::AS3::TR::BEM_Accessor> &);
	Scaleform::GFx::AS3::TR::NodeBEM Root; // 0x0
};
class Scaleform::GFx::AS3::TR::NodeConst :
	Scaleform::GFx::AS3::TR::SNode
{
public:
	static Scaleform::GFx::AS3::WordCode::OpCode GetOpCode();
private:
	NodeConst(const Scaleform::GFx::AS3::TR::NodeConst &);
protected:
	NodeConst(const Scaleform::GFx::AS3::TR::Type *);
	NodeConst();
public:
	Scaleform::GFx::AS3::TR::Def * GetResult();
	static bool IsValidOpCode(Scaleform::GFx::AS3::Abc::Code::OpCode);
	long long GetArg1();
	long long GetArg2();
	bool GetBool();
	double GetNumber();
	long GetSInt();
	unsigned long GetUInt();
	Scaleform::GFx::ASStringNode * GetStringNode();
	Scaleform::GFx::AS3::Value::ObjectTag GetTag();
	Scaleform::GFx::AS3::Value GetAbsObject();
	unsigned long long GetAbsObjectEncoded();
	bool UpdateResult(Scaleform::GFx::AS3::TR::TypeSystem &);
private:
	Scaleform::GFx::AS3::TR::NodeConst & operator=(const Scaleform::GFx::AS3::TR::NodeConst &);
	Scaleform::GFx::AS3::TR::Def Result; // 0x18
};
class Scaleform::GFx::AS3::TR::NodeGen :
	Scaleform::GFx::AS3::TR::SNode
{
	enum OP
	{
		opGetGlobalObj = 0,
		opGetGlobalSlot = 1,
		opNewActivation = 2,
		opGetOuterScope = 3,
		opNewCatch = 4,
	};
public:
	static Scaleform::GFx::AS3::TR::NodeGen::OP GetOP(Scaleform::GFx::AS3::Abc::Code::OpCode);
	Scaleform::GFx::AS3::TR::NodeGen::OP GetOP();
	static Scaleform::GFx::AS3::WordCode::OpCode GetOpCode(Scaleform::GFx::AS3::TR::NodeGen::OP);
private:
	NodeGen(const Scaleform::GFx::AS3::TR::NodeGen &);
protected:
	NodeGen(Scaleform::GFx::AS3::TR::NodeGen::OP, const Scaleform::GFx::AS3::TR::Type *, long);
	NodeGen(Scaleform::GFx::AS3::TR::NodeGen::OP);
public:
	long GetArg1();
	Scaleform::GFx::AS3::TR::Def * GetResult();
	static bool IsValidOpCode(Scaleform::GFx::AS3::Abc::Code::OpCode);
	bool UpdateResult(Scaleform::GFx::AS3::TR::TypeSystem &);
private:
	Scaleform::GFx::AS3::TR::NodeGen & operator=(const Scaleform::GFx::AS3::TR::NodeGen &);
	Scaleform::GFx::AS3::TR::NodeGen::OP Op; // 0x18
	long Arg1; // 0x1C
	Scaleform::GFx::AS3::TR::Def Result; // 0x20
};
class Scaleform::GFx::AS3::TR::NodeJump :
	Scaleform::GFx::AS3::TR::NodeBEM
{
	enum OP
	{
		opArm = 0,
		opJump = 1,
	};
public:
	static Scaleform::GFx::AS3::TR::NodeJump::OP GetOP(Scaleform::GFx::AS3::Abc::Code::OpCode);
	Scaleform::GFx::AS3::TR::NodeJump::OP GetOP();
	static Scaleform::GFx::AS3::WordCode::OpCode GetOpCode(Scaleform::GFx::AS3::TR::NodeJump::OP);
private:
	NodeJump(const Scaleform::GFx::AS3::TR::NodeJump &);
protected:
	NodeJump(Scaleform::GFx::AS3::TR::NodeBlock *, Scaleform::GFx::AS3::TR::NodeBlock *, unsigned long, Scaleform::GFx::AS3::TR::Use *, unsigned long, Scaleform::GFx::AS3::TR::Use *, unsigned long, Scaleform::GFx::AS3::TR::Use *, Scaleform::GFx::AS3::TR::Def *);
	NodeJump(Scaleform::GFx::AS3::TR::NodeJump::OP);
public:
	static bool IsValidOpCode(Scaleform::GFx::AS3::Abc::Code::OpCode);
	bool UpdateResult(Scaleform::GFx::AS3::TR::TypeSystem &);
private:
	Scaleform::GFx::AS3::TR::NodeJump & operator=(const Scaleform::GFx::AS3::TR::NodeJump &);
	Scaleform::GFx::AS3::TR::NodeJump::OP Op; // 0x80
};
class Scaleform::GFx::AS3::TR::NodeIF :
	Scaleform::GFx::AS3::TR::SNode
{
	enum OP
	{
		opTrue = 0,
		opFalse = 1,
		opNLT = 2,
		opNLE = 3,
		opNGT = 4,
		opNGE = 5,
		opEQ = 6,
		opNE = 7,
		opLT = 8,
		opLE = 9,
		opGT = 10,
		opGE = 11,
		opStrictEQ = 12,
		opStrictNE = 13,
	};
public:
	static Scaleform::GFx::AS3::TR::NodeIF::OP GetOP(Scaleform::GFx::AS3::Abc::Code::OpCode);
	Scaleform::GFx::AS3::TR::NodeIF::OP GetOP();
	static Scaleform::GFx::AS3::WordCode::OpCode GetOpCode(Scaleform::GFx::AS3::TR::NodeIF::OP);
private:
	NodeIF(const Scaleform::GFx::AS3::TR::NodeIF &);
protected:
	NodeIF(Scaleform::GFx::AS3::TR::NodeIF::OP, Scaleform::GFx::AS3::TR::NodeJump *, Scaleform::GFx::AS3::TR::NodeJump *, Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::NodeSafepoint *);
	NodeIF(Scaleform::GFx::AS3::TR::NodeIF::OP);
public:
	Scaleform::GFx::AS3::TR::NodeSafepoint * GetSPt();
	Scaleform::GFx::AS3::TR::NodeJump * GetTrue();
	Scaleform::GFx::AS3::TR::NodeJump * GetFalse();
	Scaleform::GFx::AS3::TR::Use & GetLExpr();
	const Scaleform::GFx::AS3::TR::Use & GetLExpr();
	Scaleform::GFx::AS3::TR::Use & GetRExpr();
	const Scaleform::GFx::AS3::TR::Use & GetRExpr();
	static bool IsValidOpCode(Scaleform::GFx::AS3::Abc::Code::OpCode);
	void Negate();
	void Inverse();
	bool UpdateResult(Scaleform::GFx::AS3::TR::TypeSystem &);
private:
	Scaleform::GFx::AS3::TR::NodeIF & operator=(const Scaleform::GFx::AS3::TR::NodeIF &);
	Scaleform::GFx::AS3::TR::NodeIF::OP Op; // 0x18
	Scaleform::GFx::AS3::TR::NodeSafepoint * SPt; // 0x20
	Scaleform::GFx::AS3::TR::NodeJump * True; // 0x28
	Scaleform::GFx::AS3::TR::NodeJump * False; // 0x30
	Scaleform::GFx::AS3::TR::Use LExpr; // 0x38
	Scaleform::GFx::AS3::TR::Use RExpr; // 0x58
};
Scaleform::GFx::AS3::TR::NodeIF::NodeIF(Scaleform::GFx::AS3::TR::NodeIF::OP op, Scaleform::GFx::AS3::TR::NodeJump * t, Scaleform::GFx::AS3::TR::NodeJump * f, Scaleform::GFx::AS3::TR::Def * l, Scaleform::GFx::AS3::TR::Def * r, Scaleform::GFx::AS3::TR::NodeSafepoint * spt); // 0x140450550
class Scaleform::GFx::AS3::TR::NodeSwitch :
	Scaleform::GFx::AS3::TR::SNode
{
public:
	static Scaleform::GFx::AS3::WordCode::OpCode GetOpCode();
private:
	NodeSwitch(const Scaleform::GFx::AS3::TR::NodeSwitch &);
protected:
	NodeSwitch(Scaleform::GFx::AS3::TR::Def *, unsigned long);
	NodeSwitch(Scaleform::GFx::AS3::TR::NodeJump *, Scaleform::GFx::AS3::TR::Def *);
	NodeSwitch();
public:
	Scaleform::GFx::AS3::TR::NodeJump * GetDefault();
	unsigned long GetNumOfCases();
	Scaleform::GFx::AS3::TR::NodeJump * GetCase(unsigned long);
	Scaleform::GFx::AS3::TR::Use & GetExpr();
	const Scaleform::GFx::AS3::TR::Use & GetExpr();
	static bool IsValidOpCode(Scaleform::GFx::AS3::Abc::Code::OpCode);
	bool UpdateResult(Scaleform::GFx::AS3::TR::TypeSystem &);
private:
	Scaleform::GFx::AS3::TR::NodeSwitch & operator=(const Scaleform::GFx::AS3::TR::NodeSwitch &);
	unsigned long NumOfCases; // 0x18
	Scaleform::GFx::AS3::TR::NodeJump * Default; // 0x20
	Scaleform::GFx::AS3::TR::Use Expr; // 0x28
	Scaleform::GFx::AS3::TR::NodeJump * Case[1]; // 0x48
};
class Scaleform::GFx::AS3::TR::NodeSwitchType :
	Scaleform::GFx::AS3::TR::SNode
{
	enum OP
	{
		opIfType = 0,
	};
public:
	static Scaleform::GFx::AS3::TR::NodeSwitchType::OP GetOP(Scaleform::GFx::AS3::Abc::Code::OpCode);
	Scaleform::GFx::AS3::TR::NodeSwitchType::OP GetOP();
	static Scaleform::GFx::AS3::WordCode::OpCode GetOpCode(Scaleform::GFx::AS3::TR::NodeSwitchType::OP);
private:
	NodeSwitchType(const Scaleform::GFx::AS3::TR::NodeSwitchType &);
protected:
	NodeSwitchType(Scaleform::GFx::AS3::TR::NodeSwitchType::OP, Scaleform::GFx::AS3::TR::NodeJump *, Scaleform::GFx::AS3::TR::Def *);
	NodeSwitchType(Scaleform::GFx::AS3::TR::NodeSwitchType::OP);
public:
	Scaleform::GFx::AS3::TR::NodeJump * GetDefault();
	unsigned long GetNumOfTs();
	Scaleform::GFx::AS3::TR::Def * GetT(unsigned long);
	unsigned long GetNumOfCases();
	Scaleform::GFx::AS3::TR::NodeJump * GetCase(unsigned long);
	Scaleform::GFx::AS3::TR::Use & GetExpr();
	const Scaleform::GFx::AS3::TR::Use & GetExpr();
	static bool IsValidOpCode(Scaleform::GFx::AS3::Abc::Code::OpCode);
	bool UpdateResult(Scaleform::GFx::AS3::TR::TypeSystem &);
private:
	Scaleform::GFx::AS3::TR::NodeSwitchType & operator=(const Scaleform::GFx::AS3::TR::NodeSwitchType &);
	Scaleform::GFx::AS3::TR::NodeSwitchType::OP Op; // 0x18
	unsigned long NumOfTs; // 0x1C
	unsigned long NumOfCases; // 0x20
	Scaleform::GFx::AS3::TR::NodeJump * Default; // 0x28
	Scaleform::GFx::AS3::TR::Def * T; // 0x30
	Scaleform::GFx::AS3::TR::NodeJump * * Case; // 0x38
	Scaleform::GFx::AS3::TR::Use Expr; // 0x40
};
class Scaleform::GFx::AS3::TR::NodeN :
	Scaleform::GFx::AS3::TR::SNode
{
	enum OP
	{
		opNewObject = 0,
		opNewArray = 1,
		opConstruct = 2,
		opConstructStrict = 3,
		opConstructSuper = 4,
		opCallObject = 5,
		opCall = 6,
		opCallMethod = 7,
		opCallSuperMethod = 8,
		opCallGetter = 9,
		opCallSuperGetter = 10,
		opApplyType = 11,
	};
public:
	static Scaleform::GFx::AS3::TR::NodeN::OP GetOP(Scaleform::GFx::AS3::Abc::Code::OpCode);
	Scaleform::GFx::AS3::TR::NodeN::OP GetOP();
	static Scaleform::GFx::AS3::WordCode::OpCode GetOpCode(Scaleform::GFx::AS3::TR::NodeN::OP);
private:
	NodeN(const Scaleform::GFx::AS3::TR::NodeN &);
protected:
	NodeN(Scaleform::GFx::AS3::TR::NodeN::OP, unsigned long, Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *, const Scaleform::GFx::AS3::TR::Type *, const Scaleform::GFx::AS3::TR::Type *, long, unsigned long, Scaleform::GFx::AS3::TR::NodeSafepoint *);
	NodeN(Scaleform::GFx::AS3::TR::NodeN::OP);
public:
	long GetVal1();
	unsigned long GetVal2();
	Scaleform::GFx::AS3::TR::NodeSafepoint * GetSPt();
	unsigned long GetNumOfArgs();
	Scaleform::GFx::AS3::TR::Use & GetArg(unsigned long);
	const Scaleform::GFx::AS3::TR::Use & GetArg(unsigned long);
	Scaleform::GFx::AS3::TR::Use & GetEffectIn();
	const Scaleform::GFx::AS3::TR::Use & GetEffectIn();
	Scaleform::GFx::AS3::TR::Use & GetObj();
	const Scaleform::GFx::AS3::TR::Use & GetObj();
	Scaleform::GFx::AS3::TR::Use & GetArg1();
	const Scaleform::GFx::AS3::TR::Use & GetArg1();
	Scaleform::GFx::AS3::TR::Def * GetEffectOut();
	Scaleform::GFx::AS3::TR::Def * GetResult();
	static bool IsValidOpCode(Scaleform::GFx::AS3::Abc::Code::OpCode);
	bool UpdateResult(Scaleform::GFx::AS3::TR::TypeSystem &);
private:
	Scaleform::GFx::AS3::TR::NodeN & operator=(const Scaleform::GFx::AS3::TR::NodeN &);
	Scaleform::GFx::AS3::TR::NodeN::OP Op; // 0x18
	long Val1; // 0x1C
	unsigned long Val2; // 0x20
	Scaleform::GFx::AS3::TR::NodeSafepoint * SPt; // 0x28
	unsigned long NumOfArgs; // 0x30
	Scaleform::GFx::AS3::TR::Use EffectIn; // 0x38
	Scaleform::GFx::AS3::TR::Use Obj; // 0x58
	Scaleform::GFx::AS3::TR::Use Arg1; // 0x78
	Scaleform::GFx::AS3::TR::Def EffectOut; // 0x98
	Scaleform::GFx::AS3::TR::Def Result; // 0xB8
	Scaleform::GFx::AS3::TR::Use Arg[1]; // 0xD8
};
Scaleform::GFx::AS3::TR::NodeN::NodeN(Scaleform::GFx::AS3::TR::NodeN::OP op, unsigned long argc_Arg, Scaleform::GFx::AS3::TR::Def * ei, Scaleform::GFx::AS3::TR::Def * o, Scaleform::GFx::AS3::TR::Def * a1, const Scaleform::GFx::AS3::TR::Type * eo, const Scaleform::GFx::AS3::TR::Type * rt, long v1, unsigned long v2, Scaleform::GFx::AS3::TR::NodeSafepoint * spt); // 0x140450600
class Scaleform::GFx::AS3::TR::NodeNRT :
	Scaleform::GFx::AS3::TR::SNode
{
	enum OP
	{
		opConstructProp = 0,
		opCallPropLex = 1,
		opCallPropVoid = 2,
		opCallProp = 3,
		opCallSuper = 4,
		opCallSuperVoid = 5,
	};
public:
	static Scaleform::GFx::AS3::TR::NodeNRT::OP GetOP(Scaleform::GFx::AS3::Abc::Code::OpCode);
	Scaleform::GFx::AS3::TR::NodeNRT::OP GetOP();
	static Scaleform::GFx::AS3::WordCode::OpCode GetOpCode(Scaleform::GFx::AS3::TR::NodeNRT::OP);
private:
	NodeNRT(const Scaleform::GFx::AS3::TR::NodeNRT &);
protected:
	NodeNRT(Scaleform::GFx::AS3::TR::NodeNRT::OP, const Scaleform::GFx::AS3::TR::ReadArgsMnObject &, Scaleform::GFx::AS3::TR::Def *, const Scaleform::GFx::AS3::TR::Type *, const Scaleform::GFx::AS3::TR::Type *, long, Scaleform::GFx::AS3::TR::NodeSafepoint *);
	NodeNRT(Scaleform::GFx::AS3::TR::NodeNRT::OP, unsigned long, Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *, const Scaleform::GFx::AS3::TR::Type *, const Scaleform::GFx::AS3::TR::Type *, long, Scaleform::GFx::AS3::TR::NodeSafepoint *);
	NodeNRT(Scaleform::GFx::AS3::TR::NodeNRT::OP);
public:
	long GetVal1();
	Scaleform::GFx::AS3::TR::NodeSafepoint * GetSPt();
	unsigned long GetNumOfArgs();
	Scaleform::GFx::AS3::TR::Use & GetArg(unsigned long);
	const Scaleform::GFx::AS3::TR::Use & GetArg(unsigned long);
	Scaleform::GFx::AS3::TR::Use & GetEffectIn();
	const Scaleform::GFx::AS3::TR::Use & GetEffectIn();
	Scaleform::GFx::AS3::TR::Use & GetObj();
	const Scaleform::GFx::AS3::TR::Use & GetObj();
	Scaleform::GFx::AS3::TR::Use & GetNs();
	const Scaleform::GFx::AS3::TR::Use & GetNs();
	Scaleform::GFx::AS3::TR::Use & GetName();
	const Scaleform::GFx::AS3::TR::Use & GetName();
	Scaleform::GFx::AS3::TR::Def * GetEffectOut();
	Scaleform::GFx::AS3::TR::Def * GetResult();
	static bool IsValidOpCode(Scaleform::GFx::AS3::Abc::Code::OpCode);
	bool UpdateResult(Scaleform::GFx::AS3::TR::TypeSystem &);
private:
	Scaleform::GFx::AS3::TR::NodeNRT & operator=(const Scaleform::GFx::AS3::TR::NodeNRT &);
	Scaleform::GFx::AS3::TR::NodeNRT::OP Op; // 0x18
	long Val1; // 0x1C
	Scaleform::GFx::AS3::TR::NodeSafepoint * SPt; // 0x20
	unsigned long NumOfArgs; // 0x28
	Scaleform::GFx::AS3::TR::Use EffectIn; // 0x30
	Scaleform::GFx::AS3::TR::Use Obj; // 0x50
	Scaleform::GFx::AS3::TR::Use Ns; // 0x70
	Scaleform::GFx::AS3::TR::Use Name; // 0x90
	Scaleform::GFx::AS3::TR::Def EffectOut; // 0xB0
	Scaleform::GFx::AS3::TR::Def Result; // 0xD0
	Scaleform::GFx::AS3::TR::Use Arg[1]; // 0xF0
};
class Scaleform::GFx::AS3::TR::NodeScopeN :
	Scaleform::GFx::AS3::TR::SNode
{
	enum OP
	{
		opFindProp = 0,
		opFindPropStrict = 1,
		opGetLex = 2,
		opNewClass = 3,
		opGetScopeObject = 4,
		opNewFunction = 5,
	};
public:
	static Scaleform::GFx::AS3::TR::NodeScopeN::OP GetOP(Scaleform::GFx::AS3::Abc::Code::OpCode);
	Scaleform::GFx::AS3::TR::NodeScopeN::OP GetOP();
	static Scaleform::GFx::AS3::WordCode::OpCode GetOpCode(Scaleform::GFx::AS3::TR::NodeScopeN::OP);
private:
	NodeScopeN(const Scaleform::GFx::AS3::TR::NodeScopeN &);
protected:
	NodeScopeN(Scaleform::GFx::AS3::TR::NodeScopeN::OP, unsigned long, const Scaleform::GFx::AS3::TR::Type *, long, Scaleform::GFx::AS3::TR::NodeSafepoint *);
	NodeScopeN(Scaleform::GFx::AS3::TR::NodeScopeN::OP, unsigned long, Scaleform::GFx::AS3::TR::Def *, const Scaleform::GFx::AS3::TR::Type *, long, Scaleform::GFx::AS3::TR::NodeSafepoint *);
	NodeScopeN(Scaleform::GFx::AS3::TR::NodeScopeN::OP);
public:
	long GetVal();
	Scaleform::GFx::AS3::TR::NodeSafepoint * GetSPt();
	unsigned long GetNumOfArgs();
	Scaleform::GFx::AS3::TR::Use & GetArg(unsigned long);
	const Scaleform::GFx::AS3::TR::Use & GetArg(unsigned long);
	Scaleform::GFx::AS3::TR::Use & GetBase();
	const Scaleform::GFx::AS3::TR::Use & GetBase();
	Scaleform::GFx::AS3::TR::Def * GetResult();
	static bool IsValidOpCode(Scaleform::GFx::AS3::Abc::Code::OpCode);
	bool UpdateResult(Scaleform::GFx::AS3::TR::TypeSystem &);
private:
	Scaleform::GFx::AS3::TR::NodeScopeN & operator=(const Scaleform::GFx::AS3::TR::NodeScopeN &);
	Scaleform::GFx::AS3::TR::NodeScopeN::OP Op; // 0x18
	long Val; // 0x1C
	Scaleform::GFx::AS3::TR::NodeSafepoint * SPt; // 0x20
	unsigned long NumOfArgs; // 0x28
	Scaleform::GFx::AS3::TR::Use Base; // 0x30
	Scaleform::GFx::AS3::TR::Def Result; // 0x50
	Scaleform::GFx::AS3::TR::Use Arg[1]; // 0x70
};
class Scaleform::GFx::AS3::TR::NodeSafepoint :
	Scaleform::GFx::AS3::TR::NodeBEM
{
private:
	NodeSafepoint(const Scaleform::GFx::AS3::TR::NodeSafepoint &);
public:
	NodeSafepoint(Scaleform::GFx::AS3::TR::NodeBlock *, Scaleform::GFx::AS3::TR::NodeBlock *, unsigned long, Scaleform::GFx::AS3::TR::Use *, Scaleform::GFx::AS3::TR::NodeSafepoint *, Scaleform::GFx::AS3::TR::Def *);
protected:
	NodeSafepoint();
public:
	Scaleform::GFx::AS3::TR::NodeSafepoint * GetPrev();
	static bool IsValidOpCode(Scaleform::GFx::AS3::Abc::Code::OpCode);
	bool UpdateResult(Scaleform::GFx::AS3::TR::TypeSystem &);
private:
	Scaleform::GFx::AS3::TR::NodeSafepoint & operator=(const Scaleform::GFx::AS3::TR::NodeSafepoint &);
	Scaleform::GFx::AS3::TR::NodeSafepoint * Prev; // 0x80
};
Scaleform::GFx::AS3::TR::NodeSafepoint::NodeSafepoint(Scaleform::GFx::AS3::TR::NodeBlock * bs, Scaleform::GFx::AS3::TR::NodeBlock * dest, unsigned long argcR, Scaleform::GFx::AS3::TR::Use * argvR, Scaleform::GFx::AS3::TR::NodeSafepoint * prev, Scaleform::GFx::AS3::TR::Def * ei); // 0x140450980
class Scaleform::GFx::AS3::TR::NodeSink1 :
	Scaleform::GFx::AS3::TR::SNode
{
	enum OP
	{
		opDxnsLate = 0,
		opSetGlobalSlot = 1,
		opPop = 2,
		opPopScope = 3,
	};
public:
	static Scaleform::GFx::AS3::TR::NodeSink1::OP GetOP(Scaleform::GFx::AS3::Abc::Code::OpCode);
	Scaleform::GFx::AS3::TR::NodeSink1::OP GetOP();
	static Scaleform::GFx::AS3::WordCode::OpCode GetOpCode(Scaleform::GFx::AS3::TR::NodeSink1::OP);
private:
	NodeSink1(const Scaleform::GFx::AS3::TR::NodeSink1 &);
protected:
	NodeSink1(Scaleform::GFx::AS3::TR::NodeSink1::OP, Scaleform::GFx::AS3::TR::Def *, long, Scaleform::GFx::AS3::TR::NodeSafepoint *);
	NodeSink1(Scaleform::GFx::AS3::TR::NodeSink1::OP);
public:
	long GetVal1();
	Scaleform::GFx::AS3::TR::NodeSafepoint * GetSPt();
	Scaleform::GFx::AS3::TR::Use & GetArg();
	const Scaleform::GFx::AS3::TR::Use & GetArg();
	static bool IsValidOpCode(Scaleform::GFx::AS3::Abc::Code::OpCode);
	bool UpdateResult(Scaleform::GFx::AS3::TR::TypeSystem &);
private:
	Scaleform::GFx::AS3::TR::NodeSink1 & operator=(const Scaleform::GFx::AS3::TR::NodeSink1 &);
	Scaleform::GFx::AS3::TR::NodeSink1::OP Op; // 0x18
	long Val1; // 0x1C
	Scaleform::GFx::AS3::TR::NodeSafepoint * SPt; // 0x20
	Scaleform::GFx::AS3::TR::Use Arg; // 0x28
};
class Scaleform::GFx::AS3::TR::NodeSink2 :
	Scaleform::GFx::AS3::TR::SNode
{
	enum OP
	{
		opSetSlot = 0,
		opSetAbsSlot = 1,
		opInitAbsSlot = 2,
	};
public:
	static Scaleform::GFx::AS3::TR::NodeSink2::OP GetOP(Scaleform::GFx::AS3::Abc::Code::OpCode);
	Scaleform::GFx::AS3::TR::NodeSink2::OP GetOP();
	static Scaleform::GFx::AS3::WordCode::OpCode GetOpCode(Scaleform::GFx::AS3::TR::NodeSink2::OP);
private:
	NodeSink2(const Scaleform::GFx::AS3::TR::NodeSink2 &);
protected:
	NodeSink2(Scaleform::GFx::AS3::TR::NodeSink2::OP, Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *, long, Scaleform::GFx::AS3::TR::NodeSafepoint *);
	NodeSink2(Scaleform::GFx::AS3::TR::NodeSink2::OP);
public:
	long GetVal1();
	Scaleform::GFx::AS3::TR::NodeSafepoint * GetSPt();
	Scaleform::GFx::AS3::TR::Use & GetObj();
	const Scaleform::GFx::AS3::TR::Use & GetObj();
	Scaleform::GFx::AS3::TR::Use & GetValue();
	const Scaleform::GFx::AS3::TR::Use & GetValue();
	static bool IsValidOpCode(Scaleform::GFx::AS3::Abc::Code::OpCode);
	bool UpdateResult(Scaleform::GFx::AS3::TR::TypeSystem &);
private:
	Scaleform::GFx::AS3::TR::NodeSink2 & operator=(const Scaleform::GFx::AS3::TR::NodeSink2 &);
	Scaleform::GFx::AS3::TR::NodeSink2::OP Op; // 0x18
	long Val1; // 0x1C
	Scaleform::GFx::AS3::TR::NodeSafepoint * SPt; // 0x20
	Scaleform::GFx::AS3::TR::Use Obj; // 0x28
	Scaleform::GFx::AS3::TR::Use Value; // 0x48
};
Scaleform::GFx::AS3::TR::NodeSink2::NodeSink2(Scaleform::GFx::AS3::TR::NodeSink2::OP op, Scaleform::GFx::AS3::TR::Def * o, Scaleform::GFx::AS3::TR::Def * v, long v1, Scaleform::GFx::AS3::TR::NodeSafepoint * spt); // 0x140450A40
class Scaleform::GFx::AS3::TR::NodeSink2RT :
	Scaleform::GFx::AS3::TR::SNode
{
	enum OP
	{
		opSetProperty = 0,
		opSetSuperProperty = 1,
		opInitProperty = 2,
	};
public:
	static Scaleform::GFx::AS3::TR::NodeSink2RT::OP GetOP(Scaleform::GFx::AS3::Abc::Code::OpCode);
	Scaleform::GFx::AS3::TR::NodeSink2RT::OP GetOP();
	static Scaleform::GFx::AS3::WordCode::OpCode GetOpCode(Scaleform::GFx::AS3::TR::NodeSink2RT::OP);
private:
	NodeSink2RT(const Scaleform::GFx::AS3::TR::NodeSink2RT &);
protected:
	NodeSink2RT(Scaleform::GFx::AS3::TR::NodeSink2RT::OP, const Scaleform::GFx::AS3::TR::ReadValueMnObject &, long, Scaleform::GFx::AS3::TR::NodeSafepoint *);
	NodeSink2RT(Scaleform::GFx::AS3::TR::NodeSink2RT::OP, Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *, const Scaleform::GFx::AS3::TR::Type *, long, Scaleform::GFx::AS3::TR::NodeSafepoint *);
	NodeSink2RT(Scaleform::GFx::AS3::TR::NodeSink2RT::OP);
public:
	long GetVal1();
	Scaleform::GFx::AS3::TR::NodeSafepoint * GetSPt();
	Scaleform::GFx::AS3::TR::Use & GetEffectIn();
	const Scaleform::GFx::AS3::TR::Use & GetEffectIn();
	Scaleform::GFx::AS3::TR::Use & GetObj();
	const Scaleform::GFx::AS3::TR::Use & GetObj();
	Scaleform::GFx::AS3::TR::Use & GetNs();
	const Scaleform::GFx::AS3::TR::Use & GetNs();
	Scaleform::GFx::AS3::TR::Use & GetName();
	const Scaleform::GFx::AS3::TR::Use & GetName();
	Scaleform::GFx::AS3::TR::Use & GetValue();
	const Scaleform::GFx::AS3::TR::Use & GetValue();
	Scaleform::GFx::AS3::TR::Def * GetEffectOut();
	static bool IsValidOpCode(Scaleform::GFx::AS3::Abc::Code::OpCode);
	bool UpdateResult(Scaleform::GFx::AS3::TR::TypeSystem &);
private:
	Scaleform::GFx::AS3::TR::NodeSink2RT & operator=(const Scaleform::GFx::AS3::TR::NodeSink2RT &);
	Scaleform::GFx::AS3::TR::NodeSink2RT::OP Op; // 0x18
	long Val1; // 0x1C
	Scaleform::GFx::AS3::TR::NodeSafepoint * SPt; // 0x20
	Scaleform::GFx::AS3::TR::Use EffectIn; // 0x28
	Scaleform::GFx::AS3::TR::Use Obj; // 0x48
	Scaleform::GFx::AS3::TR::Use Ns; // 0x68
	Scaleform::GFx::AS3::TR::Use Name; // 0x88
	Scaleform::GFx::AS3::TR::Use Value; // 0xA8
	Scaleform::GFx::AS3::TR::Def EffectOut; // 0xC8
};
class Scaleform::GFx::AS3::TR::NodeExpr1 :
	Scaleform::GFx::AS3::TR::SNode
{
	enum OP
	{
		opNot = 0,
		opNegate = 1,
		opNegateInt = 2,
		opIncr = 3,
		opIncrInt = 4,
		opDecr = 5,
		opDecrInt = 6,
		opConvertObj = 7,
		opConvertS = 8,
		opTypeOf = 9,
		opBitNot = 10,
		opDup = 11,
		opPushScope = 12,
		opPushWith = 13,
		opCheckFilter = 14,
		opEscXAttr = 15,
		opEscXElem = 16,
	};
public:
	static Scaleform::GFx::AS3::TR::NodeExpr1::OP GetOP(Scaleform::GFx::AS3::Abc::Code::OpCode);
	Scaleform::GFx::AS3::TR::NodeExpr1::OP GetOP();
	static Scaleform::GFx::AS3::WordCode::OpCode GetOpCode(Scaleform::GFx::AS3::TR::NodeExpr1::OP);
private:
	NodeExpr1(const Scaleform::GFx::AS3::TR::NodeExpr1 &);
protected:
	NodeExpr1(Scaleform::GFx::AS3::TR::NodeExpr1::OP, Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *, const Scaleform::GFx::AS3::TR::Type *, const Scaleform::GFx::AS3::TR::Type *, Scaleform::GFx::AS3::TR::NodeSafepoint *);
	NodeExpr1(Scaleform::GFx::AS3::TR::NodeExpr1::OP);
public:
	Scaleform::GFx::AS3::TR::NodeSafepoint * GetSPt();
	Scaleform::GFx::AS3::TR::Use & GetEffectIn();
	const Scaleform::GFx::AS3::TR::Use & GetEffectIn();
	Scaleform::GFx::AS3::TR::Use & GetArg();
	const Scaleform::GFx::AS3::TR::Use & GetArg();
	Scaleform::GFx::AS3::TR::Def * GetEffectOut();
	Scaleform::GFx::AS3::TR::Def * GetResult();
	static bool IsValidOpCode(Scaleform::GFx::AS3::Abc::Code::OpCode);
	bool UpdateResult(Scaleform::GFx::AS3::TR::TypeSystem &);
private:
	Scaleform::GFx::AS3::TR::NodeExpr1 & operator=(const Scaleform::GFx::AS3::TR::NodeExpr1 &);
	Scaleform::GFx::AS3::TR::NodeExpr1::OP Op; // 0x18
	Scaleform::GFx::AS3::TR::NodeSafepoint * SPt; // 0x20
	Scaleform::GFx::AS3::TR::Use EffectIn; // 0x28
	Scaleform::GFx::AS3::TR::Use Arg; // 0x48
	Scaleform::GFx::AS3::TR::Def EffectOut; // 0x68
	Scaleform::GFx::AS3::TR::Def Result; // 0x88
};
Scaleform::GFx::AS3::TR::NodeExpr1::NodeExpr1(Scaleform::GFx::AS3::TR::NodeExpr1::OP op, Scaleform::GFx::AS3::TR::Def * ei, Scaleform::GFx::AS3::TR::Def * a, const Scaleform::GFx::AS3::TR::Type * eo, const Scaleform::GFx::AS3::TR::Type * rt, Scaleform::GFx::AS3::TR::NodeSafepoint * spt); // 0x140450030
class Scaleform::GFx::AS3::TR::NodeExprReg :
	Scaleform::GFx::AS3::TR::SNode
{
	enum OP
	{
		opIncrLocal = 0,
		opIncrLocalSInt = 1,
		opIncrLocalUInt = 2,
		opDecrLocal = 3,
		opDecrLocalSInt = 4,
		opDecrLocalUInt = 5,
		opSetLocal = 6,
		opGetLocal = 7,
	};
public:
	static Scaleform::GFx::AS3::TR::NodeExprReg::OP GetOP(Scaleform::GFx::AS3::Abc::Code::OpCode);
	Scaleform::GFx::AS3::TR::NodeExprReg::OP GetOP();
	static Scaleform::GFx::AS3::WordCode::OpCode GetOpCode(Scaleform::GFx::AS3::TR::NodeExprReg::OP);
private:
	NodeExprReg(const Scaleform::GFx::AS3::TR::NodeExprReg &);
protected:
	NodeExprReg(Scaleform::GFx::AS3::TR::NodeExprReg::OP, Scaleform::GFx::AS3::TR::Def *, const Scaleform::GFx::AS3::TR::Type *, Scaleform::GFx::AS3::TR::NodeSafepoint *, Scaleform::GFx::AS3::TypeBarrier1 *, long);
	NodeExprReg(Scaleform::GFx::AS3::TR::NodeExprReg::OP);
public:
	Scaleform::GFx::AS3::TR::NodeSafepoint * GetSPt();
	Scaleform::GFx::AS3::TypeBarrier1 * GetAT();
	long GetRegNum();
	Scaleform::GFx::AS3::TR::Use & GetArg();
	const Scaleform::GFx::AS3::TR::Use & GetArg();
	Scaleform::GFx::AS3::TR::Def * GetResult();
	static bool IsValidOpCode(Scaleform::GFx::AS3::Abc::Code::OpCode);
	bool UpdateResult(Scaleform::GFx::AS3::TR::TypeSystem &);
private:
	Scaleform::GFx::AS3::TR::NodeExprReg & operator=(const Scaleform::GFx::AS3::TR::NodeExprReg &);
	Scaleform::GFx::AS3::TR::NodeExprReg::OP Op; // 0x18
	Scaleform::GFx::AS3::TR::NodeSafepoint * SPt; // 0x20
	Scaleform::GFx::AS3::TypeBarrier1 * AT; // 0x28
	long RegNum; // 0x30
	Scaleform::GFx::AS3::TR::Use Arg; // 0x38
	Scaleform::GFx::AS3::TR::Def Result; // 0x58
};
Scaleform::GFx::AS3::TR::NodeExprReg::NodeExprReg(Scaleform::GFx::AS3::TR::NodeExprReg::OP op, Scaleform::GFx::AS3::TR::Def * a, const Scaleform::GFx::AS3::TR::Type * rt, Scaleform::GFx::AS3::TR::NodeSafepoint * spt, Scaleform::GFx::AS3::TypeBarrier1 * at, long rn); // 0x1404503A0
class Scaleform::GFx::AS3::TR::NodeExpr2 :
	Scaleform::GFx::AS3::TR::SNode
{
	enum OP
	{
		opAdd = 0,
		opAddInt = 1,
		opSub = 2,
		opSubInt = 3,
		opMul = 4,
		opMulInt = 5,
		opDiv = 6,
		opModulo = 7,
		opBitOr = 8,
		opBitXOr = 9,
		opBitAnd = 10,
		opLSchift = 11,
		opRSchift = 12,
		opURSchift = 13,
		opNextValue = 14,
		opAsTypeLate = 15,
		opEq = 16,
		opStrictEq = 17,
		opLessThan = 18,
		opLessEquals = 19,
		opGreaterThan = 20,
		opGreaterEquals = 21,
		opNextName = 22,
		opIn = 23,
		opInstanceOf = 24,
		opIsTypeLate = 25,
		opHasNext = 26,
	};
public:
	static Scaleform::GFx::AS3::TR::NodeExpr2::OP GetOP(Scaleform::GFx::AS3::Abc::Code::OpCode);
	Scaleform::GFx::AS3::TR::NodeExpr2::OP GetOP();
	static Scaleform::GFx::AS3::WordCode::OpCode GetOpCode(Scaleform::GFx::AS3::TR::NodeExpr2::OP);
private:
	NodeExpr2(const Scaleform::GFx::AS3::TR::NodeExpr2 &);
protected:
	NodeExpr2(Scaleform::GFx::AS3::TR::NodeExpr2::OP, Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *, const Scaleform::GFx::AS3::TR::Type *, Scaleform::GFx::AS3::TR::NodeSafepoint *);
	NodeExpr2(Scaleform::GFx::AS3::TR::NodeExpr2::OP);
public:
	Scaleform::GFx::AS3::TR::NodeSafepoint * GetSPt();
	Scaleform::GFx::AS3::TR::Use & GetArg1();
	const Scaleform::GFx::AS3::TR::Use & GetArg1();
	Scaleform::GFx::AS3::TR::Use & GetArg2();
	const Scaleform::GFx::AS3::TR::Use & GetArg2();
	Scaleform::GFx::AS3::TR::Def * GetResult();
	static bool IsValidOpCode(Scaleform::GFx::AS3::Abc::Code::OpCode);
	bool UpdateResult(Scaleform::GFx::AS3::TR::TypeSystem &);
private:
	Scaleform::GFx::AS3::TR::NodeExpr2 & operator=(const Scaleform::GFx::AS3::TR::NodeExpr2 &);
	Scaleform::GFx::AS3::TR::NodeExpr2::OP Op; // 0x18
	Scaleform::GFx::AS3::TR::NodeSafepoint * SPt; // 0x20
	Scaleform::GFx::AS3::TR::Use Arg1; // 0x28
	Scaleform::GFx::AS3::TR::Use Arg2; // 0x48
	Scaleform::GFx::AS3::TR::Def Result; // 0x68
};
Scaleform::GFx::AS3::TR::NodeExpr2::NodeExpr2(Scaleform::GFx::AS3::TR::NodeExpr2::OP op, Scaleform::GFx::AS3::TR::Def * a1, Scaleform::GFx::AS3::TR::Def * a2, const Scaleform::GFx::AS3::TR::Type * rt, Scaleform::GFx::AS3::TR::NodeSafepoint * spt); // 0x1404502E0
class Scaleform::GFx::AS3::TR::NodeExpr1RT :
	Scaleform::GFx::AS3::TR::SNode
{
	enum OP
	{
		opGetProperty = 0,
		opGetSuperProperty = 1,
		opGetDescendants = 2,
		opDeleteProp = 3,
	};
public:
	static Scaleform::GFx::AS3::TR::NodeExpr1RT::OP GetOP(Scaleform::GFx::AS3::Abc::Code::OpCode);
	Scaleform::GFx::AS3::TR::NodeExpr1RT::OP GetOP();
	static Scaleform::GFx::AS3::WordCode::OpCode GetOpCode(Scaleform::GFx::AS3::TR::NodeExpr1RT::OP);
private:
	NodeExpr1RT(const Scaleform::GFx::AS3::TR::NodeExpr1RT &);
protected:
	NodeExpr1RT(Scaleform::GFx::AS3::TR::NodeExpr1RT::OP, const Scaleform::GFx::AS3::TR::Type *, const Scaleform::GFx::AS3::TR::ReadMnObject &, long, Scaleform::GFx::AS3::TR::NodeSafepoint *);
	NodeExpr1RT(Scaleform::GFx::AS3::TR::NodeExpr1RT::OP, Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *, const Scaleform::GFx::AS3::TR::Type *, const Scaleform::GFx::AS3::TR::Type *, long, Scaleform::GFx::AS3::TR::NodeSafepoint *);
	NodeExpr1RT(Scaleform::GFx::AS3::TR::NodeExpr1RT::OP);
public:
	long GetVal1();
	Scaleform::GFx::AS3::TR::NodeSafepoint * GetSPt();
	Scaleform::GFx::AS3::TR::Use & GetEffectIn();
	const Scaleform::GFx::AS3::TR::Use & GetEffectIn();
	Scaleform::GFx::AS3::TR::Use & GetObj();
	const Scaleform::GFx::AS3::TR::Use & GetObj();
	Scaleform::GFx::AS3::TR::Use & GetNs();
	const Scaleform::GFx::AS3::TR::Use & GetNs();
	Scaleform::GFx::AS3::TR::Use & GetName();
	const Scaleform::GFx::AS3::TR::Use & GetName();
	Scaleform::GFx::AS3::TR::Def * GetEffectOut();
	Scaleform::GFx::AS3::TR::Def * GetResult();
	static bool IsValidOpCode(Scaleform::GFx::AS3::Abc::Code::OpCode);
	bool UpdateResult(Scaleform::GFx::AS3::TR::TypeSystem &);
private:
	Scaleform::GFx::AS3::TR::NodeExpr1RT & operator=(const Scaleform::GFx::AS3::TR::NodeExpr1RT &);
	Scaleform::GFx::AS3::TR::NodeExpr1RT::OP Op; // 0x18
	long Val1; // 0x1C
	Scaleform::GFx::AS3::TR::NodeSafepoint * SPt; // 0x20
	Scaleform::GFx::AS3::TR::Use EffectIn; // 0x28
	Scaleform::GFx::AS3::TR::Use Obj; // 0x48
	Scaleform::GFx::AS3::TR::Use Ns; // 0x68
	Scaleform::GFx::AS3::TR::Use Name; // 0x88
	Scaleform::GFx::AS3::TR::Def EffectOut; // 0xA8
	Scaleform::GFx::AS3::TR::Def Result; // 0xC8
};
class Scaleform::GFx::AS3::TR::NodeExpr1CT :
	Scaleform::GFx::AS3::TR::SNode
{
	enum OP
	{
		opAsType = 0,
		opGetSlot = 1,
		opCoerce = 2,
		opCoerceNop = 3,
		opIsType = 4,
		opGetAbsSlot = 5,
	};
public:
	static Scaleform::GFx::AS3::TR::NodeExpr1CT::OP GetOP(Scaleform::GFx::AS3::Abc::Code::OpCode);
	Scaleform::GFx::AS3::TR::NodeExpr1CT::OP GetOP();
	static Scaleform::GFx::AS3::WordCode::OpCode GetOpCode(Scaleform::GFx::AS3::TR::NodeExpr1CT::OP);
private:
	NodeExpr1CT(const Scaleform::GFx::AS3::TR::NodeExpr1CT &);
protected:
	NodeExpr1CT(Scaleform::GFx::AS3::TR::NodeExpr1CT::OP, Scaleform::GFx::AS3::TR::Def *, const Scaleform::GFx::AS3::TR::Type *, const Scaleform::GFx::AS3::ClassTraits::Traits *, unsigned long long, Scaleform::GFx::AS3::TR::NodeSafepoint *);
	NodeExpr1CT(Scaleform::GFx::AS3::TR::NodeExpr1CT::OP);
public:
	const Scaleform::GFx::AS3::ClassTraits::Traits * GetCTraits();
	unsigned long long GetInd();
	Scaleform::GFx::AS3::TR::NodeSafepoint * GetSPt();
	Scaleform::GFx::AS3::TR::Use & GetArg();
	const Scaleform::GFx::AS3::TR::Use & GetArg();
	Scaleform::GFx::AS3::TR::Def * GetResult();
	static bool IsValidOpCode(Scaleform::GFx::AS3::Abc::Code::OpCode);
	bool UpdateResult(Scaleform::GFx::AS3::TR::TypeSystem &);
private:
	Scaleform::GFx::AS3::TR::NodeExpr1CT & operator=(const Scaleform::GFx::AS3::TR::NodeExpr1CT &);
	Scaleform::GFx::AS3::TR::NodeExpr1CT::OP Op; // 0x18
	const Scaleform::GFx::AS3::ClassTraits::Traits * CTraits; // 0x20
	unsigned long long Ind; // 0x28
	Scaleform::GFx::AS3::TR::NodeSafepoint * SPt; // 0x30
	Scaleform::GFx::AS3::TR::Use Arg; // 0x38
	Scaleform::GFx::AS3::TR::Def Result; // 0x58
};
Scaleform::GFx::AS3::TR::NodeExpr1CT::NodeExpr1CT(Scaleform::GFx::AS3::TR::NodeExpr1CT::OP op, Scaleform::GFx::AS3::TR::Def * a, const Scaleform::GFx::AS3::TR::Type * rt, const Scaleform::GFx::AS3::ClassTraits::Traits * ctr, unsigned long long ind, Scaleform::GFx::AS3::TR::NodeSafepoint * spt); // 0x140450110
class Scaleform::GFx::AS3::TR::NodeSwap :
	Scaleform::GFx::AS3::TR::SNode
{
public:
	static Scaleform::GFx::AS3::WordCode::OpCode GetOpCode();
private:
	NodeSwap(const Scaleform::GFx::AS3::TR::NodeSwap &);
protected:
	NodeSwap(Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *);
	NodeSwap(Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *, const Scaleform::GFx::AS3::TR::Type *, const Scaleform::GFx::AS3::TR::Type *);
	NodeSwap();
public:
	Scaleform::GFx::AS3::TR::Use & GetArg1();
	const Scaleform::GFx::AS3::TR::Use & GetArg1();
	Scaleform::GFx::AS3::TR::Use & GetArg2();
	const Scaleform::GFx::AS3::TR::Use & GetArg2();
	Scaleform::GFx::AS3::TR::Def * GetResult1();
	Scaleform::GFx::AS3::TR::Def * GetResult2();
	static bool IsValidOpCode(Scaleform::GFx::AS3::Abc::Code::OpCode);
	bool UpdateResult(Scaleform::GFx::AS3::TR::TypeSystem &);
private:
	Scaleform::GFx::AS3::TR::NodeSwap & operator=(const Scaleform::GFx::AS3::TR::NodeSwap &);
	Scaleform::GFx::AS3::TR::Use Arg1; // 0x18
	Scaleform::GFx::AS3::TR::Use Arg2; // 0x38
	Scaleform::GFx::AS3::TR::Def Result1; // 0x58
	Scaleform::GFx::AS3::TR::Def Result2; // 0x78
};
Scaleform::GFx::AS3::TR::NodeSwap::NodeSwap(Scaleform::GFx::AS3::TR::Def * a1, Scaleform::GFx::AS3::TR::Def * a2); // 0x140450C50
class Scaleform::GFx::AS3::TR::NodeHasNext2 :
	Scaleform::GFx::AS3::TR::SNode
{
public:
	static Scaleform::GFx::AS3::WordCode::OpCode GetOpCode();
private:
	NodeHasNext2(const Scaleform::GFx::AS3::TR::NodeHasNext2 &);
protected:
	NodeHasNext2(Scaleform::GFx::AS3::TR::TypeSystem &, Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *, long, long, Scaleform::GFx::AS3::TR::NodeSafepoint *);
	NodeHasNext2(Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *, const Scaleform::GFx::AS3::TR::Type *, const Scaleform::GFx::AS3::TR::Type *, const Scaleform::GFx::AS3::TR::Type *, long, long, Scaleform::GFx::AS3::TR::NodeSafepoint *);
	NodeHasNext2();
public:
	long GetObjRegNum();
	long GetIndRegNum();
	Scaleform::GFx::AS3::TR::NodeSafepoint * GetSPt();
	Scaleform::GFx::AS3::TR::Use & GetCurObj();
	const Scaleform::GFx::AS3::TR::Use & GetCurObj();
	Scaleform::GFx::AS3::TR::Use & GetCurInd();
	const Scaleform::GFx::AS3::TR::Use & GetCurInd();
	Scaleform::GFx::AS3::TR::Def * GetNextObj();
	Scaleform::GFx::AS3::TR::Def * GetNextInd();
	Scaleform::GFx::AS3::TR::Def * GetStackResult();
	static bool IsValidOpCode(Scaleform::GFx::AS3::Abc::Code::OpCode);
	bool UpdateResult(Scaleform::GFx::AS3::TR::TypeSystem &);
private:
	Scaleform::GFx::AS3::TR::NodeHasNext2 & operator=(const Scaleform::GFx::AS3::TR::NodeHasNext2 &);
	long ObjRegNum; // 0x18
	long IndRegNum; // 0x1C
	Scaleform::GFx::AS3::TR::NodeSafepoint * SPt; // 0x20
	Scaleform::GFx::AS3::TR::Use CurObj; // 0x28
	Scaleform::GFx::AS3::TR::Use CurInd; // 0x48
	Scaleform::GFx::AS3::TR::Def NextObj; // 0x68
	Scaleform::GFx::AS3::TR::Def NextInd; // 0x88
	Scaleform::GFx::AS3::TR::Def StackResult; // 0xA8
};
class Scaleform::GFx::AS3::TR::NodeOP :
	Scaleform::GFx::AS3::TR::SNode
{
	enum OP
	{
		opDxNs = 0,
	};
public:
	static Scaleform::GFx::AS3::TR::NodeOP::OP GetOP(Scaleform::GFx::AS3::Abc::Code::OpCode);
	Scaleform::GFx::AS3::TR::NodeOP::OP GetOP();
	static Scaleform::GFx::AS3::WordCode::OpCode GetOpCode(Scaleform::GFx::AS3::TR::NodeOP::OP);
private:
	NodeOP(const Scaleform::GFx::AS3::TR::NodeOP &);
protected:
	NodeOP(Scaleform::GFx::AS3::TR::NodeOP::OP, long, Scaleform::GFx::AS3::TR::NodeSafepoint *);
	NodeOP(Scaleform::GFx::AS3::TR::NodeOP::OP);
public:
	long GetVal1();
	Scaleform::GFx::AS3::TR::NodeSafepoint * GetSPt();
	static bool IsValidOpCode(Scaleform::GFx::AS3::Abc::Code::OpCode);
	bool UpdateResult(Scaleform::GFx::AS3::TR::TypeSystem &);
private:
	Scaleform::GFx::AS3::TR::NodeOP & operator=(const Scaleform::GFx::AS3::TR::NodeOP &);
	Scaleform::GFx::AS3::TR::NodeOP::OP Op; // 0x18
	long Val1; // 0x1C
	Scaleform::GFx::AS3::TR::NodeSafepoint * SPt; // 0x20
};
class Scaleform::GFx::AS3::TR::NodeAbrupt :
	Scaleform::GFx::AS3::TR::NodeBEM
{
	enum OP
	{
		opThrow = 0,
		opReturnVoid = 1,
		opReturnValue = 2,
	};
public:
	static Scaleform::GFx::AS3::TR::NodeAbrupt::OP GetOP(Scaleform::GFx::AS3::Abc::Code::OpCode);
	Scaleform::GFx::AS3::TR::NodeAbrupt::OP GetOP();
	static Scaleform::GFx::AS3::WordCode::OpCode GetOpCode(Scaleform::GFx::AS3::TR::NodeAbrupt::OP);
private:
	NodeAbrupt(const Scaleform::GFx::AS3::TR::NodeAbrupt &);
protected:
	NodeAbrupt(Scaleform::GFx::AS3::TR::NodeAbrupt::OP, Scaleform::GFx::AS3::TR::NodeBlock *, Scaleform::GFx::AS3::TR::NodeBlock *, unsigned long, Scaleform::GFx::AS3::TR::Use *, unsigned long, Scaleform::GFx::AS3::TR::Use *, unsigned long, Scaleform::GFx::AS3::TR::Use *, Scaleform::GFx::AS3::TR::NodeSafepoint *, Scaleform::GFx::AS3::TR::Def *);
	NodeAbrupt(Scaleform::GFx::AS3::TR::NodeAbrupt::OP);
public:
	Scaleform::GFx::AS3::TR::NodeSafepoint * GetSPt();
	static bool IsValidOpCode(Scaleform::GFx::AS3::Abc::Code::OpCode);
	bool UpdateResult(Scaleform::GFx::AS3::TR::TypeSystem &);
private:
	Scaleform::GFx::AS3::TR::NodeAbrupt & operator=(const Scaleform::GFx::AS3::TR::NodeAbrupt &);
	Scaleform::GFx::AS3::TR::NodeAbrupt::OP Op; // 0x80
	Scaleform::GFx::AS3::TR::NodeSafepoint * SPt; // 0x88
};
struct Scaleform::GFx::AS3::TR::BEM_Accessor
{
	static void SetPrev(Scaleform::GFx::AS3::TR::NodeBEM *, Scaleform::GFx::AS3::TR::NodeBEM *);
	static void SetNext(Scaleform::GFx::AS3::TR::NodeBEM *, Scaleform::GFx::AS3::TR::NodeBEM *);
	static Scaleform::GFx::AS3::TR::NodeBEM * GetPrev(Scaleform::GFx::AS3::TR::NodeBEM *);
	static const Scaleform::GFx::AS3::TR::NodeBEM * GetPrev(const Scaleform::GFx::AS3::TR::NodeBEM *);
	static Scaleform::GFx::AS3::TR::NodeBEM * GetNext(Scaleform::GFx::AS3::TR::NodeBEM *);
	static const Scaleform::GFx::AS3::TR::NodeBEM * GetNext(const Scaleform::GFx::AS3::TR::NodeBEM *);
};
class Scaleform::GFx::AS3::TR::NodeBuilder
{
public:
	NodeBuilder(Scaleform::GFx::AS3::VM &, Scaleform::GFx::AS3::Bubble &, Scaleform::GFx::AS3::TR::TypeSystem &);
	Scaleform::GFx::AS3::TR::Use * MakeUses(unsigned long);
	Scaleform::GFx::AS3::TR::Def * MakeDefs(unsigned long);
	Scaleform::GFx::AS3::TR::NodeDebug * MakeNodeDebug(Scaleform::GFx::AS3::TR::NodeDebug::OP, long);
	Scaleform::GFx::AS3::TR::NodeBlock * MakeNodeBlock(unsigned long, unsigned long, unsigned long, Scaleform::GFx::AS3::TR::AbcBlock *);
	Scaleform::GFx::AS3::TR::NodeJump * MakeNodeJump(Scaleform::GFx::AS3::TR::NodeBlock *, Scaleform::GFx::AS3::TR::NodeBlock *, unsigned long, unsigned long, unsigned long, Scaleform::GFx::AS3::TR::Def *);
	Scaleform::GFx::AS3::TR::NodeIF * MakeNodeIF(Scaleform::GFx::AS3::TR::NodeIF::OP, Scaleform::GFx::AS3::TR::NodeJump *, Scaleform::GFx::AS3::TR::NodeJump *, Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::NodeSafepoint *);
	Scaleform::GFx::AS3::TR::NodeAbrupt * MakeNodeAbrupt(Scaleform::GFx::AS3::TR::NodeAbrupt::OP, Scaleform::GFx::AS3::TR::NodeBlock *, Scaleform::GFx::AS3::TR::NodeBlock *, unsigned long, unsigned long, unsigned long, Scaleform::GFx::AS3::TR::NodeSafepoint *, Scaleform::GFx::AS3::TR::Def *);
	Scaleform::GFx::AS3::TR::NodeSwitch * MakeNodeSwitch(Scaleform::GFx::AS3::TR::Def *, unsigned long);
	Scaleform::GFx::AS3::TR::NodeSwitchType * MakeNodeSwitchType(Scaleform::GFx::AS3::TR::NodeSwitchType::OP, Scaleform::GFx::AS3::TR::NodeJump *, Scaleform::GFx::AS3::TR::Def *, unsigned long);
	Scaleform::GFx::AS3::TR::NodeN * MakeNodeN(Scaleform::GFx::AS3::TR::NodeN::OP, const Scaleform::GFx::AS3::TR::ReadArgs &, Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *, const Scaleform::GFx::AS3::TR::Type *, long, unsigned long, Scaleform::GFx::AS3::TR::NodeSafepoint *);
	Scaleform::GFx::AS3::TR::NodeNRT * MakeNodeNRT(Scaleform::GFx::AS3::TR::NodeNRT::OP, const Scaleform::GFx::AS3::TR::ReadArgsMnObject &, Scaleform::GFx::AS3::TR::Def *, const Scaleform::GFx::AS3::TR::Type *, long, Scaleform::GFx::AS3::TR::NodeSafepoint *);
	Scaleform::GFx::AS3::TR::NodeScopeN * MakeNodeScopeN(Scaleform::GFx::AS3::TR::NodeScopeN::OP, const Scaleform::GFx::AS3::TR::State &, const Scaleform::GFx::AS3::TR::Type *, long, Scaleform::GFx::AS3::TR::NodeSafepoint *);
	Scaleform::GFx::AS3::TR::NodeConst * MakeNodeConst(const Scaleform::GFx::AS3::TR::Type *);
	Scaleform::GFx::AS3::TR::NodeConst * MakeNodeConstNull(const Scaleform::GFx::AS3::Traits &);
	Scaleform::GFx::AS3::TR::NodeConst * MakeNodeConstString(const Scaleform::GFx::ASString &);
	Scaleform::GFx::AS3::TR::NodeConst * MakeNodeConstNumber(double);
	Scaleform::GFx::AS3::TR::NodeConst * MakeNodeConstNs(Scaleform::GFx::AS3::Instances::fl::Namespace &);
	Scaleform::GFx::AS3::TR::NodeConst * MakeNodeConstSInt(long);
	Scaleform::GFx::AS3::TR::NodeConst * MakeNodeConstUInt(unsigned long);
	Scaleform::GFx::AS3::TR::NodeConst * MakeNodeConstAbsObj(const Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::AS3::TR::NodeGen * MakeNodeGen(Scaleform::GFx::AS3::TR::NodeGen::OP, const Scaleform::GFx::AS3::TR::Type *, long);
	Scaleform::GFx::AS3::TR::NodeSink1 * MakeNodeSink1(Scaleform::GFx::AS3::TR::NodeSink1::OP, Scaleform::GFx::AS3::TR::Def *, long, Scaleform::GFx::AS3::TR::NodeSafepoint *);
	Scaleform::GFx::AS3::TR::NodeSink2 * MakeNodeSink2(Scaleform::GFx::AS3::TR::NodeSink2::OP, Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *, long, Scaleform::GFx::AS3::TR::NodeSafepoint *);
	Scaleform::GFx::AS3::TR::NodeSink2RT * MakeNodeSink2RT(Scaleform::GFx::AS3::TR::NodeSink2RT::OP, const Scaleform::GFx::AS3::TR::ReadValueMnObject &, long, Scaleform::GFx::AS3::TR::NodeSafepoint *);
	Scaleform::GFx::AS3::TR::NodeExpr1 * MakeNodeExpr1(Scaleform::GFx::AS3::TR::NodeExpr1::OP, Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *, const Scaleform::GFx::AS3::TR::Type *, Scaleform::GFx::AS3::TR::NodeSafepoint *);
	Scaleform::GFx::AS3::TR::NodeExprReg * MakeNodeExprReg(Scaleform::GFx::AS3::TR::NodeExprReg::OP, Scaleform::GFx::AS3::TR::Def *, const Scaleform::GFx::AS3::TR::Type *, long, Scaleform::GFx::AS3::TypeBarrier1 *, Scaleform::GFx::AS3::TR::NodeSafepoint *);
	Scaleform::GFx::AS3::TR::NodeExpr2 * MakeNodeExpr2(Scaleform::GFx::AS3::TR::NodeExpr2::OP, Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *, const Scaleform::GFx::AS3::TR::Type *, Scaleform::GFx::AS3::TR::NodeSafepoint *);
	Scaleform::GFx::AS3::TR::NodeExpr1RT * MakeNodeExpr1RT(Scaleform::GFx::AS3::TR::NodeExpr1RT::OP, const Scaleform::GFx::AS3::TR::Type *, const Scaleform::GFx::AS3::TR::ReadMnObject &, long, Scaleform::GFx::AS3::TR::NodeSafepoint *);
	Scaleform::GFx::AS3::TR::NodeExpr1CT * MakeNodeExpr1CT(Scaleform::GFx::AS3::TR::NodeExpr1CT::OP, Scaleform::GFx::AS3::TR::Def *, const Scaleform::GFx::AS3::TR::Type *, const Scaleform::GFx::AS3::ClassTraits::Traits *, unsigned long long, Scaleform::GFx::AS3::TR::NodeSafepoint *);
	Scaleform::GFx::AS3::TR::NodeSwap * MakeNodeSwap(Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *);
	Scaleform::GFx::AS3::TR::NodeHasNext2 * MakeNodeHasNext2(Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *, long, long, Scaleform::GFx::AS3::TR::NodeSafepoint *);
	Scaleform::GFx::AS3::TR::NodeOP * MakeNodeOP(Scaleform::GFx::AS3::TR::NodeOP::OP, long, Scaleform::GFx::AS3::TR::NodeSafepoint *);
	Scaleform::GFx::AS3::TR::NodeSafepoint * MakeNodeSafepoint(Scaleform::GFx::AS3::TR::NodeBlock *, Scaleform::GFx::AS3::TR::NodeBlock *, unsigned long, Scaleform::GFx::AS3::TR::NodeSafepoint *, Scaleform::GFx::AS3::TR::Def *);
	Scaleform::GFx::AS3::VM & GetVM();
	Scaleform::GFx::AS3::TR::TypeSystem & GetTypeSystem();
private:
	Scaleform::GFx::AS3::TR::NodeBuilder & operator=(const Scaleform::GFx::AS3::TR::NodeBuilder &);
	Scaleform::GFx::AS3::VM & VMRef; // 0x0
	Scaleform::GFx::AS3::Bubble & Allocator; // 0x8
	Scaleform::GFx::AS3::TR::TypeSystem & TS; // 0x10
};