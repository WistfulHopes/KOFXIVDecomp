
struct Scaleform::GFx::AS3::TR::SNodeVisitorBase<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,bool>
{
	bool Visit(Scaleform::GFx::AS3::TR::SNode &);
};
struct Scaleform::GFx::AS3::TR::PropagateTypeInMarker :
	Scaleform::GFx::AS3::TR::SNodeVisitorBase<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,bool>
{
	struct ParentT;
	PropagateTypeInMarker(const Scaleform::GFx::AS3::TR::PropagateTypeInMarker &);
	PropagateTypeInMarker(unsigned long, Scaleform::HashSetDH<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> > > &, Scaleform::GFx::AS3::TR::TypeSystem &);
	unsigned long GetMarker();
	bool InNodeDefault(Scaleform::GFx::AS3::TR::NodeSwitchType &);
	bool InNodeDefault(Scaleform::GFx::AS3::TR::NodeSwitch &);
	bool InNodeDefault(Scaleform::GFx::AS3::TR::NodeIF &);
	bool InNodeDefault(Scaleform::GFx::AS3::TR::NodeJump &);
	bool InNodeDefault(Scaleform::GFx::AS3::TR::NodeBlock &);
	bool Visit(Scaleform::GFx::AS3::TR::SNode &);
private:
	void AddToWorkList(Scaleform::GFx::AS3::TR::NodeBlock *);
	bool InNodeInternal(Scaleform::GFx::AS3::TR::SNode &);
	Scaleform::GFx::AS3::TR::PropagateTypeInMarker & operator=(const Scaleform::GFx::AS3::TR::PropagateTypeInMarker &);
	const unsigned long Marker; // 0x0
	Scaleform::HashSetDH<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> > > * pWorkList; // 0x8
	Scaleform::GFx::AS3::TR::TypeSystem * pTS; // 0x10
};
class Scaleform::HashSetDH<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> > > :
	Scaleform::HashSetBase<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::TR::NodeBlock *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> > >
{
private:
	void * pHeap; // 0x8
	class SelfType;
	class BaseType;
	typedef Scaleform::GFx::AS3::TR::NodeBlock ValueType;
public:
	HashSetDH<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::Fix(const Scaleform::HashSetDH<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> > > &);
	HashSetDH<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::Fix(void *, long);
	HashSetDH<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::Fix(void *);
	~HashSetDH<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::Fi();
	void operator=(const Scaleform::HashSetDH<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> > > &);
	void CheckExpand();
	void Resize(unsigned long long);
	void SetCapacity(unsigned long long);
};
bool Scaleform::GFx::AS3::TR::PropagateTypeInMarker::InNodeDefault<Scaleform::GFx::AS3::TR::NodeN>(Scaleform::GFx::AS3::TR::NodeN & n); // 0x1404470C0
bool Scaleform::GFx::AS3::TR::PropagateTypeInMarker::InNodeDefault<Scaleform::GFx::AS3::TR::NodeScopeN>(Scaleform::GFx::AS3::TR::NodeScopeN & n); // 0x140447140
bool Scaleform::GFx::AS3::TR::PropagateTypeInMarker::InNodeDefault(Scaleform::GFx::AS3::TR::NodeSwitch & n); // 0x14048D140
bool Scaleform::GFx::AS3::TR::PropagateTypeInMarker::InNodeDefault(Scaleform::GFx::AS3::TR::NodeSwitchType & n); // 0x14048D2A0
bool Scaleform::GFx::AS3::TR::PropagateTypeInMarker::Visit<Scaleform::GFx::AS3::TR::NodeBlock>(Scaleform::GFx::AS3::TR::NodeBlock & n); // 0x1404480A0
bool Scaleform::GFx::AS3::TR::PropagateTypeInMarker::Visit<Scaleform::GFx::AS3::TR::NodeExpr1>(Scaleform::GFx::AS3::TR::NodeExpr1 & n); // 0x140448100
bool Scaleform::GFx::AS3::TR::PropagateTypeInMarker::Visit<Scaleform::GFx::AS3::TR::NodeExpr1CT>(Scaleform::GFx::AS3::TR::NodeExpr1CT & n); // 0x140448150
bool Scaleform::GFx::AS3::TR::PropagateTypeInMarker::Visit<Scaleform::GFx::AS3::TR::NodeExpr2>(Scaleform::GFx::AS3::TR::NodeExpr2 & n); // 0x1404481A0
bool Scaleform::GFx::AS3::TR::PropagateTypeInMarker::Visit<Scaleform::GFx::AS3::TR::NodeExprReg>(Scaleform::GFx::AS3::TR::NodeExprReg & n); // 0x1404481F0
bool Scaleform::GFx::AS3::TR::PropagateTypeInMarker::Visit<Scaleform::GFx::AS3::TR::NodeHasNext2>(Scaleform::GFx::AS3::TR::NodeHasNext2 & n); // 0x140448240
bool Scaleform::GFx::AS3::TR::PropagateTypeInMarker::Visit<Scaleform::GFx::AS3::TR::NodeIF>(Scaleform::GFx::AS3::TR::NodeIF & n); // 0x140448290
bool Scaleform::GFx::AS3::TR::PropagateTypeInMarker::Visit<Scaleform::GFx::AS3::TR::NodeJump>(Scaleform::GFx::AS3::TR::NodeJump & n); // 0x1404482E0
bool Scaleform::GFx::AS3::TR::PropagateTypeInMarker::Visit<Scaleform::GFx::AS3::TR::NodeSwap>(Scaleform::GFx::AS3::TR::NodeSwap & n); // 0x140448320
void Scaleform::GFx::AS3::TR::PropagateTypeInMarker::AddToWorkList(Scaleform::GFx::AS3::TR::NodeBlock * p); // 0x140460020
bool Scaleform::GFx::AS3::TR::PropagateTypeInMarker::InNodeInternal(Scaleform::GFx::AS3::TR::SNode & n); // 0x14048D400
struct Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor>
{
	struct SelfT;
	Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> * GetThis();
	InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor>(Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> &);
	InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor>(const Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> &);
	InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor>(const Scaleform::GFx::AS3::TR::PropagateTypeInMarker &, const Scaleform::GFx::AS3::TR::ResultVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> > &);
private:
	Scaleform::GFx::AS3::TR::PropagateTypeInMarker In; // 0x0
	Scaleform::GFx::AS3::TR::ResultVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> > On; // 0x18
public:
	void __dflt_ctor_closure();
};
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::TR::PropagateType(Scaleform::GFx::AS3::TR::NodeBlock & root, Scaleform::GFx::AS3::TR::TypeSystem & ts); // 0x14049D170
struct Scaleform::GFx::AS3::TR::PropagateTypeVisitor<Scaleform::GFx::AS3::TR::ResultVisitor> :
	Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor>
{
	struct ParentT;
	PropagateTypeVisitor<Scaleform::GFx::AS3::TR::ResultVisitor>(Scaleform::GFx::AS3::TR::PropagateTypeVisitor<Scaleform::GFx::AS3::TR::ResultVisitor> &);
	PropagateTypeVisitor<Scaleform::GFx::AS3::TR::ResultVisitor>(const Scaleform::GFx::AS3::TR::PropagateTypeVisitor<Scaleform::GFx::AS3::TR::ResultVisitor> &);
	PropagateTypeVisitor<Scaleform::GFx::AS3::TR::ResultVisitor>(unsigned long, Scaleform::HashSetDH<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> > > &, Scaleform::GFx::AS3::TR::TypeSystem &, const Scaleform::GFx::AS3::TR::ResultVisitor<Scaleform::GFx::AS3::TR::InPSVisitorTA<Scaleform::GFx::AS3::TR::PropagateTypeInMarker,Scaleform::GFx::AS3::TR::ResultVisitor> > &);
};
Scaleform::GFx::AS3::TR::AbcBlock::AbcBlock(Scaleform::GFx::AS3::Tracer & tr, unsigned long regNum, unsigned long osNum, unsigned long ssNum, unsigned long long from); // 0x14044DFE0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::TR::AbcBlock::PushNodeIF(Scaleform::GFx::AS3::TR::NodeIF::OP op, Scaleform::GFx::AS3::TR::NodeBlock * t, Scaleform::GFx::AS3::TR::NodeBlock * f); // 0x14049E710
void Scaleform::GFx::AS3::TR::AbcBlock::PushNodeIfType(const Scaleform::GFx::AS3::ClassTraits::Traits * type, Scaleform::GFx::AS3::TR::NodeBlock * t, Scaleform::GFx::AS3::TR::NodeBlock * f); // 0x14049F190
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::TR::AbcBlock::RemoveDeadBlockFromRPOList(Scaleform::GFx::AS3::TR::AbcBlock * ab); // 0x1404A1CE0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::TR::AbcBlock::PushNodeJump(Scaleform::GFx::AS3::TR::NodeBlock * dest); // 0x14049F270
void Scaleform::GFx::AS3::TR::AbcBlock::PushNodeN(Scaleform::GFx::AS3::TR::NodeN::OP op, const Scaleform::GFx::AS3::TR::ReadArgs & args, Scaleform::GFx::AS3::TR::Def * obj, Scaleform::GFx::AS3::TR::Def * val, const Scaleform::GFx::AS3::TR::Type * rt, long v1, unsigned long v2); // 0x14049F310
void Scaleform::GFx::AS3::TR::AbcBlock::PushNodeNRT(Scaleform::GFx::AS3::TR::NodeNRT::OP op, const Scaleform::GFx::AS3::TR::ReadArgsMnObject & args, const Scaleform::GFx::AS3::TR::Type * rt, long v1); // 0x14049F430
void Scaleform::GFx::AS3::TR::AbcBlock::PushNodeCall(Scaleform::GFx::AS3::Abc::Code::OpCode opcode, const Scaleform::GFx::AS3::TR::ReadArgsMnObject & args, const Scaleform::GFx::AS3::TR::Type * rt, long mn_index); // 0x14049DA10
void Scaleform::GFx::AS3::TR::AbcBlock::PushNodeScopeN(Scaleform::GFx::AS3::TR::NodeScopeN::OP op, const Scaleform::GFx::AS3::TR::Type * rt, long v); // 0x14049F5F0
void Scaleform::GFx::AS3::TR::AbcBlock::PushNodeConst(const Scaleform::GFx::AS3::TR::Type * t); // 0x14049DAE0
void Scaleform::GFx::AS3::TR::AbcBlock::PushNodeConstNull(); // 0x14049DD30
Scaleform::GFx::AS3::TR::NodeConst * Scaleform::GFx::AS3::TR::AbcBlock::NewNodeConstValue(const Scaleform::GFx::AS3::Value & v); // 0x140494290
void Scaleform::GFx::AS3::TR::AbcBlock::PushNodeConstUndefined(); // 0x14049DEA0
void Scaleform::GFx::AS3::TR::AbcBlock::PushNodeConstBool(bool v); // 0x14049DC00
void Scaleform::GFx::AS3::TR::AbcBlock::PushNodeConstNumber(double v); // 0x14049DDE0
void Scaleform::GFx::AS3::TR::AbcBlock::PushNodeConstInt(long v); // 0x14049DCD0
void Scaleform::GFx::AS3::TR::AbcBlock::PushNodeConstUInt(unsigned long v); // 0x14049DE40
void Scaleform::GFx::AS3::TR::AbcBlock::PushNodeConstAbsObj(const Scaleform::GFx::AS3::Value & obj); // 0x14049DB90
void Scaleform::GFx::AS3::TR::AbcBlock::PushNodeConstValue(const Scaleform::GFx::AS3::Value & v); // 0x14049DF50
void Scaleform::GFx::AS3::TR::AbcBlock::PushNodeSink2RT(Scaleform::GFx::AS3::TR::NodeSink2RT::OP op, const Scaleform::GFx::AS3::TR::ReadValueMnObject & args, long v1); // 0x14049F740
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::TR::AbcBlock::ReductNotNot(Scaleform::GFx::AS3::TR::Def * arg, Scaleform::GFx::AS3::TR::NodeExpr1::OP op); // 0x1404A0920
void Scaleform::GFx::AS3::TR::AbcBlock::RemoveNodeConservative(Scaleform::GFx::AS3::TR::Def * arg); // 0x1404A20D0
Scaleform::GFx::AS3::TR::Def * Scaleform::GFx::AS3::TR::AbcBlock::NewNodeExpr1(Scaleform::GFx::AS3::TR::NodeExpr1::OP op, Scaleform::GFx::AS3::TR::Def * d, const Scaleform::GFx::AS3::TR::Type * rt); // 0x140494430
Scaleform::GFx::AS3::TR::Def * Scaleform::GFx::AS3::TR::AbcBlock::NewNodeExprReg(Scaleform::GFx::AS3::TR::NodeExprReg::OP op, long reg_ind, Scaleform::GFx::AS3::TR::Def * arg, unsigned long offset); // 0x140494650
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::TR::AbcBlock::PushNodeExpr2(Scaleform::GFx::AS3::TR::NodeExpr2::OP op); // 0x14049E480
void Scaleform::GFx::AS3::TR::AbcBlock::PushNodeExpr1RT(Scaleform::GFx::AS3::TR::NodeExpr1RT::OP op, const Scaleform::GFx::AS3::TR::ReadMnObject & args, long mn_index); // 0x14049E1C0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::TR::AbcBlock::PushNodeExpr1CT(Scaleform::GFx::AS3::TR::NodeExpr1CT::OP op, const Scaleform::GFx::AS3::ClassTraits::Traits * ctr, unsigned long ind); // 0x14049E120
Scaleform::GFx::AS3::TR::Def * Scaleform::GFx::AS3::TR::AbcBlock::NewNodeExpr1CT(Scaleform::GFx::AS3::TR::NodeExpr1CT::OP op, Scaleform::GFx::AS3::TR::Def * d, const Scaleform::GFx::AS3::ClassTraits::Traits * ctr, unsigned long ind); // 0x140494520
void Scaleform::GFx::AS3::TR::AbcBlock::PushNodeSwap(); // 0x14049F820
void Scaleform::GFx::AS3::TR::AbcBlock::PushNodeHasNext2(long obj_reg_num, long ind_reg_num); // 0x14049E600
void Scaleform::GFx::AS3::TR::AbcBlock::PushNodeOP(Scaleform::GFx::AS3::TR::NodeOP::OP op, long v1); // 0x14049F520
Scaleform::GFx::AS3::TR::NodeJump * Scaleform::GFx::AS3::TR::AbcBlock::MakeNodeJump(Scaleform::GFx::AS3::TR::NodeBlock * dest); // 0x1404924B0
Scaleform::GFx::AS3::TR::NodeSafepoint * Scaleform::GFx::AS3::TR::AbcBlock::MakeSafepointChain(); // 0x140492FA0
unsigned long Scaleform::GFx::AS3::TR::AbcBlock::EmitDefaultArgs(Scaleform::GFx::AS3::VMAbcFile & file, const Scaleform::GFx::AS3::Abc::MiInd mi_ind, const Scaleform::GFx::AS3::TR::ReadArgs & args); // 0x140472D60
unsigned long Scaleform::GFx::AS3::TR::AbcBlock::EmitDefaultArgs(const Scaleform::GFx::AS3::Value & func, const Scaleform::GFx::AS3::TR::ReadArgs & args); // 0x1404734C0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::TR::AbcBlock::EmitArgTypeConv(Scaleform::GFx::AS3::VMAbcFile & file, const Scaleform::GFx::AS3::Abc::MiInd mi_ind, Scaleform::GFx::AS3::TR::ReadArgs & args); // 0x140471E40
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::TR::AbcBlock::EmitArgTypeConv(const Scaleform::GFx::AS3::Value & func, Scaleform::GFx::AS3::TR::ReadArgs & args); // 0x140471FE0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::TR::AbcBlock::EmitGetClassTraits(const Scaleform::GFx::AS3::Multiname & as3_mn); // 0x1404749A0
void Scaleform::GFx::AS3::TR::AbcBlock::EmitGetAbsSlot(const Scaleform::GFx::AS3::AbsoluteIndex index); // 0x140474800
void Scaleform::GFx::AS3::TR::AbcBlock::EmitSetAbsSlot(Scaleform::GFx::AS3::TR::Def * obj, Scaleform::GFx::AS3::TR::Def * value, const Scaleform::GFx::AS3::SlotInfo & si, const Scaleform::GFx::AS3::Traits * val_tr, const Scaleform::GFx::AS3::AbsoluteIndex index); // 0x140475400
void Scaleform::GFx::AS3::TR::AbcBlock::EmitInitAbsSlot(Scaleform::GFx::AS3::TR::Def * obj, Scaleform::GFx::AS3::TR::Def * value, const Scaleform::GFx::AS3::AbsoluteIndex index); // 0x140475350
bool Scaleform::GFx::AS3::TR::AbcBlock::EmitGetSlot(const Scaleform::GFx::AS3::Value & value, const Scaleform::GFx::AS3::AbsoluteIndex index); // 0x140475250
bool Scaleform::GFx::AS3::TR::AbcBlock::EmitCall(const Scaleform::GFx::AS3::Abc::Code::OpCode opcode, Scaleform::GFx::AS3::TR::ReadArgsMnObject & args, const unsigned long mn_index); // 0x140472150
bool Scaleform::GFx::AS3::TR::AbcBlock::EmitGetProperty(const Scaleform::GFx::AS3::Abc::Code::OpCode opcode, const Scaleform::GFx::AS3::TR::ReadMnObject & args, const long mn_index); // 0x140474D30
bool Scaleform::GFx::AS3::TR::AbcBlock::EmitSetProperty(const Scaleform::GFx::AS3::Abc::Code::OpCode opcode, const Scaleform::GFx::AS3::TR::ReadValueMnObject & args, const long mn_index); // 0x1404754B0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::TR::AbcBlock::EmitFindProperty(const Scaleform::GFx::AS3::Abc::Code::OpCode opcode, const long mn_index, bool get_prop, const Scaleform::GFx::AS3::Abc::Code::OpCode consumer); // 0x140473CB0
enum Scaleform::GFx::AS3::TR::AbcBlock::EmitFindProperty::__l49::en
{
	nothing = 0,
	undef = 1,
	nan = 2,
};
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::TR::AbcBlock::EmitConstruct(const Scaleform::GFx::AS3::Traits * tr, Scaleform::GFx::AS3::TR::ReadArgs & args, Scaleform::GFx::AS3::TR::Def * obj); // 0x140472B80
bool Scaleform::GFx::AS3::TR::AbcBlock::SubstituteGetlocal(unsigned long long & bcp, unsigned long long ccp, long src_reg_num); // 0x1404AD960
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::TR::AbcBlock::SubstituteOpCode(const Scaleform::GFx::AS3::Abc::Code::OpCode opcode, unsigned long long & bcp); // 0x1404ADD50
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::TR::AbcBlock::Trace(); // 0x1404B00C0
void Scaleform::GFx::AS3::TR::AbcBlock::Rename(Scaleform::GFx::AS3::TR::Def * from, Scaleform::GFx::AS3::TR::Def * to); // 0x1404A2580
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::TR::AbcBlock::MergeNodesIntoState(unsigned long size, Scaleform::GFx::AS3::TR::Def * * defs_st, Scaleform::GFx::AS3::TR::Def * defs_from, Scaleform::GFx::AS3::TR::Use &(*use)(unsigned long), bool & retrace, bool & backprop); // 0x140493470
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::TR::AbcBlock::MergePredTypes(const Scaleform::GFx::AS3::TR::Type * & to_type, unsigned long i, Scaleform::GFx::AS3::TR::Use &(*use)(unsigned long), bool strict); // 0x140493B80
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::TR::AbcBlock::MergeNodesIntoState(); // 0x140493790
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::TR::AbcBlock::MergeNodesNoState(bool & retrace, bool & backprop); // 0x1404939B0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::TR::AbcBlock::MergeFromPredecessors(); // 0x140493340
void Scaleform::GFx::AS3::TR::AbcBlock::CoercePredecessors(); // 0x140466300
void Scaleform::GFx::AS3::TR::AbcBlock::BackPropagateType(unsigned long size, Scaleform::GFx::AS3::TR::Def * defs_from, Scaleform::GFx::AS3::TR::Use &(*use)(unsigned long)); // 0x140461490
void Scaleform::GFx::AS3::TR::AbcBlock::SetupCatchBlock(); // 0x1404AC050
Scaleform::GFx::AS3::TR::Def * Scaleform::GFx::AS3::TR::AbcBlock::CoerceTypeOnStack(Scaleform::GFx::AS3::TR::Def * d, const Scaleform::GFx::AS3::ClassTraits::Traits * ctr, unsigned long offset); // 0x140466390
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::TR::AbcBlock::CanCoercePred2Type(unsigned long i, Scaleform::GFx::AS3::TR::Use &(*use)(unsigned long), const Scaleform::GFx::AS3::TR::Type * type); // 0x1404646E0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::TR::AbcBlock::Coerce2Type(Scaleform::GFx::AS3::TR::Def * d, const Scaleform::GFx::AS3::TR::Type * type, unsigned long regNum); // 0x140465C10
void Scaleform::GFx::AS3::TR::AbcBlock::exec_throw(); // 0x1404C0F70
void Scaleform::GFx::AS3::TR::AbcBlock::exec_dxns(unsigned long index); // 0x1404B8BA0
void Scaleform::GFx::AS3::TR::AbcBlock::exec_dxnslate(); // 0x1404B8C90
void Scaleform::GFx::AS3::TR::AbcBlock::exec_popscope(); // 0x1404BF2A0
void Scaleform::GFx::AS3::TR::AbcBlock::exec_pushbyte(long v); // 0x1404BF330
void Scaleform::GFx::AS3::TR::AbcBlock::exec_pop(); // 0x1404BF230
void Scaleform::GFx::AS3::TR::AbcBlock::exec_pushstring(long v); // 0x1404BF610
void Scaleform::GFx::AS3::TR::AbcBlock::exec_pushint(long v); // 0x1404BF430
void Scaleform::GFx::AS3::TR::AbcBlock::exec_pushuint(long v); // 0x1404BF6F0
void Scaleform::GFx::AS3::TR::AbcBlock::exec_pushdouble(long v); // 0x1404BF3A0
void Scaleform::GFx::AS3::TR::AbcBlock::exec_pushnamespace(unsigned long v); // 0x1404BF4B0
void Scaleform::GFx::AS3::TR::AbcBlock::exec_lf32(); // 0x1404C09D0
void Scaleform::GFx::AS3::TR::AbcBlock::exec_newfunction(unsigned long method_ind); // 0x1404BD400
void Scaleform::GFx::AS3::TR::AbcBlock::exec_call(unsigned long arg_count); // 0x1404B4B50
void Scaleform::GFx::AS3::TR::AbcBlock::exec_construct(unsigned long arg_count); // 0x1404B7590
void Scaleform::GFx::AS3::TR::AbcBlock::exec_constructsuper(unsigned long arg_count); // 0x1404B8150
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::TR::AbcBlock::exec_returnvalue(); // 0x1404BF860
void Scaleform::GFx::AS3::TR::AbcBlock::exec_applytype(unsigned long arg_count); // 0x1404B4330
void Scaleform::GFx::AS3::TR::AbcBlock::exec_newobject(unsigned long arg_count); // 0x1404BD570
void Scaleform::GFx::AS3::TR::AbcBlock::exec_newarray(unsigned long arr_size); // 0x1404BCCA0
void Scaleform::GFx::AS3::TR::AbcBlock::exec_newactivation(); // 0x1404BCB30
void Scaleform::GFx::AS3::TR::AbcBlock::exec_newclass(unsigned long v); // 0x1404BCF80
void Scaleform::GFx::AS3::TR::AbcBlock::exec_getdescendants(unsigned long mn_index); // 0x1404B9900
void Scaleform::GFx::AS3::TR::AbcBlock::exec_newcatch(unsigned long v); // 0x1404BCEA0
void Scaleform::GFx::AS3::TR::AbcBlock::exec_getlocal(unsigned long reg_ind); // 0x1404BAA40
void Scaleform::GFx::AS3::TR::AbcBlock::exec_setlocal(unsigned long rnum); // 0x1404C0390
void Scaleform::GFx::AS3::TR::AbcBlock::exec_getglobalscope(bool simulate); // 0x1404B9D40
void Scaleform::GFx::AS3::TR::AbcBlock::exec_getscopeobject(unsigned long scope_index); // 0x1404BB260
void Scaleform::GFx::AS3::TR::AbcBlock::exec_deleteproperty(unsigned long mn_index); // 0x1404B88E0
void Scaleform::GFx::AS3::TR::AbcBlock::exec_getslot(unsigned long slot_index, bool simulate); // 0x1404BB310
void Scaleform::GFx::AS3::TR::AbcBlock::exec_setslot(unsigned long slot_index, bool simulate); // 0x1404C0620
void Scaleform::GFx::AS3::TR::AbcBlock::exec_getglobalslot(unsigned long slot_index); // 0x1404B9E70
void Scaleform::GFx::AS3::TR::AbcBlock::exec_setglobalslot(unsigned long slot_index); // 0x1404BFD60
void Scaleform::GFx::AS3::TR::AbcBlock::exec_convert_i(); // 0x1404B84D0
void Scaleform::GFx::AS3::TR::AbcBlock::exec_convert_u(); // 0x1404B8670
void Scaleform::GFx::AS3::TR::AbcBlock::exec_convert_d(); // 0x1404B8470
void Scaleform::GFx::AS3::TR::AbcBlock::exec_convert_b(); // 0x1404B8410
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::TR::AbcBlock::exec_convert_s(); // 0x1404B8530
void Scaleform::GFx::AS3::TR::AbcBlock::exec_coerce(unsigned long mn_index); // 0x1404B72C0
void Scaleform::GFx::AS3::TR::AbcBlock::exec_coerce_s(); // 0x1404B74C0
void Scaleform::GFx::AS3::TR::AbcBlock::exec_coerce_a(); // 0x1404B7430
void Scaleform::GFx::AS3::TR::AbcBlock::exec_astype(unsigned long mn_index); // 0x1404B4780
void Scaleform::GFx::AS3::TR::AbcBlock::exec_inclocal(unsigned long v, unsigned long long offset); // 0x1404BC2A0
void Scaleform::GFx::AS3::TR::AbcBlock::exec_declocal(unsigned long v, unsigned long long offset); // 0x1404B86D0
void Scaleform::GFx::AS3::TR::AbcBlock::exec_istype(unsigned long mn_index); // 0x1404BC8B0
void Scaleform::GFx::AS3::TR::AbcBlock::exec_inclocal_i(unsigned long reg_num, unsigned long long offset); // 0x1404BC320
void Scaleform::GFx::AS3::TR::AbcBlock::exec_declocal_i(unsigned long reg_num, unsigned long long offset); // 0x1404B8810
void Scaleform::GFx::AS3::TR::AbcBlock::exec_getlocal0(); // 0x1404BA5D0
void Scaleform::GFx::AS3::TR::AbcBlock::exec_getlocal1(); // 0x1404BA6E0
void Scaleform::GFx::AS3::TR::AbcBlock::exec_getlocal2(); // 0x1404BA800
void Scaleform::GFx::AS3::TR::AbcBlock::exec_getlocal3(); // 0x1404BA920
void Scaleform::GFx::AS3::TR::AbcBlock::exec_setlocal1(); // 0x1404BFF10
void Scaleform::GFx::AS3::TR::AbcBlock::exec_setlocal2(); // 0x1404C0090
void Scaleform::GFx::AS3::TR::AbcBlock::exec_setlocal3(); // 0x1404C0210
void Scaleform::GFx::AS3::TR::AbcBlock::exec_if(unsigned long long & bcp, Scaleform::GFx::AS3::Abc::Code::OpCode opcode); // 0x1404BBF60
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::TR::AbcBlock::exec_jump(unsigned long long & bcp); // 0x1404BCA40
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::TR::AbcBlock::exec_switch(unsigned long long & bcp); // 0x1404C0A20
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::TR::AbcBlock::exec_opcode(const Scaleform::GFx::AS3::Abc::Code::OpCode opcode, unsigned long long & bcp); // 0x1404BDBA0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::TR::AbcBlock::FindProp(Scaleform::GFx::AS3::PropRef & result, const Scaleform::GFx::AS3::Multiname & mn, Scaleform::GFx::AS3::TR::AbcBlock::ScopeType & stype, unsigned long & scope_index); // 0x14047E450
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::TR::AbcBlock::MergeTypes(const Scaleform::GFx::AS3::TR::Type * & to_type, const Scaleform::GFx::AS3::TR::Type * from_type, bool strict); // 0x140493CE0