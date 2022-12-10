
Scaleform::GFx::AS3::Value Scaleform::GFx::AS3::TR::RetrieveValue(const Scaleform::GFx::AS3::TR::Type * type); // 0x1404A5150
class Scaleform::GFx::AS3::TR::IsUsedVisitor :
	Scaleform::GFx::AS3::TR::ResultVisitorBase<Scaleform::GFx::AS3::TR::IsUsedVisitor>
{
public:
	IsUsedVisitor();
	bool IsUsedNode();
	void HandleDef(const Scaleform::GFx::AS3::TR::Def *);
private:
	bool IsUsed; // 0x0
};
struct Scaleform::GFx::AS3::TR::ResultVisitorBase<Scaleform::GFx::AS3::TR::IsUsedVisitor> :
	Scaleform::GFx::AS3::TR::SNodeVisitorBase<Scaleform::GFx::AS3::TR::IsUsedVisitor,void>
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
void Scaleform::GFx::AS3::TR::KillUse(const Scaleform::GFx::AS3::TR::NodeBuilder & nb, Scaleform::GFx::AS3::TR::Use & use); // 0x1404909F0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::TR::KillPhiValue(const Scaleform::GFx::AS3::TR::NodeBuilder & nbuilder, Scaleform::GFx::AS3::TR::Def * d); // 0x140490830
struct Scaleform::GFx::AS3::TR::KillUseVisitor :
	Scaleform::GFx::AS3::TR::ArgVisitor<Scaleform::GFx::AS3::TR::KillUseVisitor>
{
	struct ParentT;
private:
	KillUseVisitor(const Scaleform::GFx::AS3::TR::KillUseVisitor &);
public:
	KillUseVisitor(const Scaleform::GFx::AS3::TR::NodeBuilder &);
	void HandleUse(Scaleform::GFx::AS3::TR::Use &);
private:
	Scaleform::GFx::AS3::TR::KillUseVisitor & operator=(const Scaleform::GFx::AS3::TR::KillUseVisitor &);
	const Scaleform::GFx::AS3::TR::NodeBuilder & NB; // 0x0
};
struct Scaleform::GFx::AS3::TR::ArgVisitor<Scaleform::GFx::AS3::TR::KillUseVisitor> :
	Scaleform::GFx::AS3::TR::SNodeVisitorBase<Scaleform::GFx::AS3::TR::KillUseVisitor,void>
{
	struct ParentT;
	void Visit(Scaleform::GFx::AS3::TR::NodeAbrupt &);
	void Visit(Scaleform::GFx::AS3::TR::NodeHasNext2 &);
	void Visit(Scaleform::GFx::AS3::TR::NodeSwap &);
	void Visit(Scaleform::GFx::AS3::TR::NodeExpr1CT &);
	void Visit(Scaleform::GFx::AS3::TR::NodeExpr1RT &);
	void Visit(Scaleform::GFx::AS3::TR::NodeExpr2 &);
	void Visit(Scaleform::GFx::AS3::TR::NodeExprReg &);
	void Visit(Scaleform::GFx::AS3::TR::NodeExpr1 &);
	void Visit(Scaleform::GFx::AS3::TR::NodeSink2RT &);
	void Visit(Scaleform::GFx::AS3::TR::NodeSink2 &);
	void Visit(Scaleform::GFx::AS3::TR::NodeSink1 &);
	void Visit(Scaleform::GFx::AS3::TR::NodeSafepoint &);
	void Visit(Scaleform::GFx::AS3::TR::NodeScopeN &);
	void Visit(Scaleform::GFx::AS3::TR::NodeNRT &);
	void Visit(Scaleform::GFx::AS3::TR::NodeN &);
	void Visit(Scaleform::GFx::AS3::TR::NodeSwitchType &);
	void Visit(Scaleform::GFx::AS3::TR::NodeSwitch &);
	void Visit(Scaleform::GFx::AS3::TR::NodeIF &);
	void Visit(Scaleform::GFx::AS3::TR::NodeJump &);
protected:
	void HandleUse(const Scaleform::GFx::AS3::TR::Use &);
};
class Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor :
	Scaleform::GFx::AS3::TR::UseVisitor<Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor>
{
public:
	void HandleUse(Scaleform::GFx::AS3::TR::Use &);
};
struct Scaleform::GFx::AS3::TR::UseVisitor<Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor> :
	Scaleform::GFx::AS3::TR::SNodeVisitorBase<Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor,void>
{
	struct ParentT;
	void Visit(Scaleform::GFx::AS3::TR::NodeAbrupt &);
	void Visit(Scaleform::GFx::AS3::TR::NodeHasNext2 &);
	void Visit(Scaleform::GFx::AS3::TR::NodeSwap &);
	void Visit(Scaleform::GFx::AS3::TR::NodeExpr1CT &);
	void Visit(Scaleform::GFx::AS3::TR::NodeExpr1RT &);
	void Visit(Scaleform::GFx::AS3::TR::NodeExpr2 &);
	void Visit(Scaleform::GFx::AS3::TR::NodeExprReg &);
	void Visit(Scaleform::GFx::AS3::TR::NodeExpr1 &);
	void Visit(Scaleform::GFx::AS3::TR::NodeSink2RT &);
	void Visit(Scaleform::GFx::AS3::TR::NodeSink2 &);
	void Visit(Scaleform::GFx::AS3::TR::NodeSink1 &);
	void Visit(Scaleform::GFx::AS3::TR::NodeSafepoint &);
	void Visit(Scaleform::GFx::AS3::TR::NodeScopeN &);
	void Visit(Scaleform::GFx::AS3::TR::NodeNRT &);
	void Visit(Scaleform::GFx::AS3::TR::NodeN &);
	void Visit(Scaleform::GFx::AS3::TR::NodeSwitchType &);
	void Visit(Scaleform::GFx::AS3::TR::NodeSwitch &);
	void Visit(Scaleform::GFx::AS3::TR::NodeIF &);
	void Visit(Scaleform::GFx::AS3::TR::NodeJump &);
protected:
	void HandleUse(const Scaleform::GFx::AS3::TR::Use &);
};
void Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor::HandleUse(Scaleform::GFx::AS3::TR::Use & use); // 0x14048CE10
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::TR::RemoveNodeConservative(Scaleform::GFx::AS3::TR::SNode & n); // 0x1404A2170
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::TR::ReplaceNodeConservative(Scaleform::GFx::AS3::TR::SNode & n, Scaleform::GFx::AS3::TR::SNode * new_n); // 0x1404A2610
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::TR::RemoveNodeWithResult(const Scaleform::GFx::AS3::TR::NodeBuilder & nb, Scaleform::GFx::AS3::TR::Def * arg, bool enforce); // 0x1404A2220
struct Scaleform::GFx::AS3::TR::HasEffectVisitor :
	Scaleform::GFx::AS3::TR::SNodeVisitorBase<Scaleform::GFx::AS3::TR::HasEffectVisitor,bool>
{
	struct ParentT;
	bool Visit(Scaleform::GFx::AS3::TR::SNode &);
};
struct Scaleform::GFx::AS3::TR::SNodeVisitorBase<Scaleform::GFx::AS3::TR::HasEffectVisitor,bool>
{
	bool Visit(Scaleform::GFx::AS3::TR::SNode &);
};
bool Scaleform::GFx::AS3::TR::HasEffect(Scaleform::GFx::AS3::TR::SNode & n); // 0x14048CF90
void Scaleform::GFx::AS3::TR::Use::Unlink(); // 0x1404B0500
void Scaleform::GFx::AS3::TR::Def::MoveUsesTo(Scaleform::GFx::AS3::TR::Def * d); // 0x140494100
Scaleform::GFx::AS3::TR::NodeBlock::NodeBlock(Scaleform::GFx::AS3::TR::SNode::NodeT t, unsigned long argcR, Scaleform::GFx::AS3::TR::Def * argvR, unsigned long argcOS, Scaleform::GFx::AS3::TR::Def * argvOS, unsigned long argcSS, Scaleform::GFx::AS3::TR::Def * argvSS, Scaleform::GFx::AS3::TR::AbcBlock * ab, const Scaleform::GFx::AS3::TR::Type * eo); // 0x14044FE40
Scaleform::GFx::AS3::TR::NodeIF::OP Scaleform::GFx::AS3::TR::NodeIF::GetOP(Scaleform::GFx::AS3::Abc::Code::OpCode op); // 0x140487860
Scaleform::GFx::AS3::WordCode::OpCode Scaleform::GFx::AS3::TR::NodeIF::GetOpCode(Scaleform::GFx::AS3::TR::NodeIF::OP op); // 0x140488310
void Scaleform::GFx::AS3::TR::NodeIF::Negate(); // 0x1404941C0
Scaleform::GFx::AS3::TR::NodeN::OP Scaleform::GFx::AS3::TR::NodeN::GetOP(Scaleform::GFx::AS3::Abc::Code::OpCode op); // 0x140487930
Scaleform::GFx::AS3::WordCode::OpCode Scaleform::GFx::AS3::TR::NodeN::GetOpCode(Scaleform::GFx::AS3::TR::NodeN::OP op); // 0x1404883E0
Scaleform::GFx::AS3::TR::NodeNRT::OP Scaleform::GFx::AS3::TR::NodeNRT::GetOP(Scaleform::GFx::AS3::Abc::Code::OpCode op); // 0x1404879E0
Scaleform::GFx::AS3::WordCode::OpCode Scaleform::GFx::AS3::TR::NodeNRT::GetOpCode(Scaleform::GFx::AS3::TR::NodeNRT::OP op); // 0x1404884A0
Scaleform::GFx::AS3::TR::NodeNRT::NodeNRT(Scaleform::GFx::AS3::TR::NodeNRT::OP op, const Scaleform::GFx::AS3::TR::ReadArgsMnObject & args, Scaleform::GFx::AS3::TR::Def * ei, const Scaleform::GFx::AS3::TR::Type * eo, const Scaleform::GFx::AS3::TR::Type * rt, long v1, Scaleform::GFx::AS3::TR::NodeSafepoint * spt); // 0x140450760
Scaleform::GFx::AS3::TR::NodeScopeN::OP Scaleform::GFx::AS3::TR::NodeScopeN::GetOP(Scaleform::GFx::AS3::Abc::Code::OpCode op); // 0x140487A60
Scaleform::GFx::AS3::WordCode::OpCode Scaleform::GFx::AS3::TR::NodeScopeN::GetOpCode(Scaleform::GFx::AS3::TR::NodeScopeN::OP op); // 0x140488510
Scaleform::GFx::AS3::TR::NodeSink2RT::NodeSink2RT(Scaleform::GFx::AS3::TR::NodeSink2RT::OP op, const Scaleform::GFx::AS3::TR::ReadValueMnObject & args, long v1, Scaleform::GFx::AS3::TR::NodeSafepoint * spt); // 0x140450AF0
Scaleform::GFx::AS3::WordCode::OpCode Scaleform::GFx::AS3::TR::NodeExpr1::GetOpCode(Scaleform::GFx::AS3::TR::NodeExpr1::OP op); // 0x140488010
bool Scaleform::GFx::AS3::TR::NodeExpr1::UpdateResult(Scaleform::GFx::AS3::TR::TypeSystem & ts); // 0x1404B0EE0
Scaleform::GFx::AS3::WordCode::OpCode Scaleform::GFx::AS3::TR::NodeExprReg::GetOpCode(Scaleform::GFx::AS3::TR::NodeExprReg::OP op); // 0x140488280
bool Scaleform::GFx::AS3::TR::NodeExprReg::UpdateResult(Scaleform::GFx::AS3::TR::TypeSystem & ts); // 0x1404B1040
Scaleform::GFx::AS3::WordCode::OpCode Scaleform::GFx::AS3::TR::NodeExpr2::GetOpCode(Scaleform::GFx::AS3::TR::NodeExpr2::OP op); // 0x140488110
bool Scaleform::GFx::AS3::TR::NodeExpr2::UpdateResult(Scaleform::GFx::AS3::TR::TypeSystem & ts); // 0x1404B0FD0
Scaleform::GFx::AS3::TR::NodeExpr1RT::NodeExpr1RT(Scaleform::GFx::AS3::TR::NodeExpr1RT::OP op, const Scaleform::GFx::AS3::TR::Type * rt, const Scaleform::GFx::AS3::TR::ReadMnObject & args, long v1, Scaleform::GFx::AS3::TR::NodeSafepoint * spt); // 0x1404501A0
bool Scaleform::GFx::AS3::TR::NodeExpr1CT::UpdateResult(Scaleform::GFx::AS3::TR::TypeSystem & ts); // 0x1404B0F50
Scaleform::GFx::AS3::TR::NodeHasNext2::NodeHasNext2(Scaleform::GFx::AS3::TR::TypeSystem & ts, Scaleform::GFx::AS3::TR::Def * cur_obj, Scaleform::GFx::AS3::TR::Def * cur_ind, long object_reg_num, long index_reg_num, Scaleform::GFx::AS3::TR::NodeSafepoint * spt); // 0x140450430
Scaleform::GFx::AS3::TR::Use * Scaleform::GFx::AS3::TR::NodeBuilder::MakeUses(unsigned long argc); // 0x140493200
Scaleform::GFx::AS3::TR::Def * Scaleform::GFx::AS3::TR::NodeBuilder::MakeDefs(unsigned long argc); // 0x140491360
Scaleform::GFx::AS3::TR::NodeBlock * Scaleform::GFx::AS3::TR::NodeBuilder::MakeNodeBlock(unsigned long argcR, unsigned long argcOS, unsigned long argcSS, Scaleform::GFx::AS3::TR::AbcBlock * ab); // 0x140491F50
Scaleform::GFx::AS3::TR::NodeJump * Scaleform::GFx::AS3::TR::NodeBuilder::MakeNodeJump(Scaleform::GFx::AS3::TR::NodeBlock * bs, Scaleform::GFx::AS3::TR::NodeBlock * dest, unsigned long argcR, unsigned long argcOS, unsigned long argcSS, Scaleform::GFx::AS3::TR::Def * ei); // 0x140492690
Scaleform::GFx::AS3::TR::NodeAbrupt * Scaleform::GFx::AS3::TR::NodeBuilder::MakeNodeAbrupt(Scaleform::GFx::AS3::TR::NodeAbrupt::OP op, Scaleform::GFx::AS3::TR::NodeBlock * bs, Scaleform::GFx::AS3::TR::NodeBlock * dest, unsigned long argcR, unsigned long argcOS, unsigned long argcSS, Scaleform::GFx::AS3::TR::NodeSafepoint * spt, Scaleform::GFx::AS3::TR::Def * ei); // 0x140491E20
Scaleform::GFx::AS3::TR::NodeSwitch * Scaleform::GFx::AS3::TR::NodeBuilder::MakeNodeSwitch(Scaleform::GFx::AS3::TR::Def * ind, unsigned long n); // 0x140492BA0
Scaleform::GFx::AS3::TR::NodeSwitchType * Scaleform::GFx::AS3::TR::NodeBuilder::MakeNodeSwitchType(Scaleform::GFx::AS3::TR::NodeSwitchType::OP op, Scaleform::GFx::AS3::TR::NodeJump * def, Scaleform::GFx::AS3::TR::Def * expr, unsigned long n); // 0x140492C40
Scaleform::GFx::AS3::TR::NodeN * Scaleform::GFx::AS3::TR::NodeBuilder::MakeNodeN(Scaleform::GFx::AS3::TR::NodeN::OP op, const Scaleform::GFx::AS3::TR::ReadArgs & args, Scaleform::GFx::AS3::TR::Def * ei, Scaleform::GFx::AS3::TR::Def * obj, Scaleform::GFx::AS3::TR::Def * val, const Scaleform::GFx::AS3::TR::Type * rt, long v1, unsigned long v2, Scaleform::GFx::AS3::TR::NodeSafepoint * spt); // 0x1404927A0
Scaleform::GFx::AS3::TR::NodeNRT * Scaleform::GFx::AS3::TR::NodeBuilder::MakeNodeNRT(Scaleform::GFx::AS3::TR::NodeNRT::OP op, const Scaleform::GFx::AS3::TR::ReadArgsMnObject & args, Scaleform::GFx::AS3::TR::Def * ei, const Scaleform::GFx::AS3::TR::Type * rt, long v1, Scaleform::GFx::AS3::TR::NodeSafepoint * spt); // 0x1404928F0
Scaleform::GFx::AS3::TR::NodeScopeN * Scaleform::GFx::AS3::TR::NodeBuilder::MakeNodeScopeN(Scaleform::GFx::AS3::TR::NodeScopeN::OP op, const Scaleform::GFx::AS3::TR::State & st, const Scaleform::GFx::AS3::TR::Type * rt, long v, Scaleform::GFx::AS3::TR::NodeSafepoint * spt); // 0x140492990
Scaleform::GFx::AS3::TR::NodeConst * Scaleform::GFx::AS3::TR::NodeBuilder::MakeNodeConst(const Scaleform::GFx::AS3::TR::Type * t); // 0x140492030
Scaleform::GFx::AS3::TR::NodeConst * Scaleform::GFx::AS3::TR::NodeBuilder::MakeNodeConstNull(const Scaleform::GFx::AS3::Traits & tr); // 0x1404921B0
Scaleform::GFx::AS3::TR::NodeConst * Scaleform::GFx::AS3::TR::NodeBuilder::MakeNodeConstNumber(double v); // 0x140492220
Scaleform::GFx::AS3::TR::NodeConst * Scaleform::GFx::AS3::TR::NodeBuilder::MakeNodeConstNs(Scaleform::GFx::AS3::Instances::fl::Namespace & v); // 0x140492120
Scaleform::GFx::AS3::TR::NodeConst * Scaleform::GFx::AS3::TR::NodeBuilder::MakeNodeConstSInt(long v); // 0x1404922B0
Scaleform::GFx::AS3::TR::NodeConst * Scaleform::GFx::AS3::TR::NodeBuilder::MakeNodeConstUInt(unsigned long v); // 0x140492340
Scaleform::GFx::AS3::TR::NodeConst * Scaleform::GFx::AS3::TR::NodeBuilder::MakeNodeConstAbsObj(const Scaleform::GFx::AS3::Value & obj); // 0x140492090
Scaleform::GFx::AS3::TR::NodeGen * Scaleform::GFx::AS3::TR::NodeBuilder::MakeNodeGen(Scaleform::GFx::AS3::TR::NodeGen::OP op, const Scaleform::GFx::AS3::TR::Type * rt, long v1); // 0x140492430
Scaleform::GFx::AS3::TR::NodeSink1 * Scaleform::GFx::AS3::TR::NodeBuilder::MakeNodeSink1(Scaleform::GFx::AS3::TR::NodeSink1::OP op, Scaleform::GFx::AS3::TR::Def * d1, long v1, Scaleform::GFx::AS3::TR::NodeSafepoint * spt); // 0x140492AE0
Scaleform::GFx::AS3::TR::NodeExpr1CT * Scaleform::GFx::AS3::TR::NodeBuilder::MakeNodeExpr1CT(Scaleform::GFx::AS3::TR::NodeExpr1CT::OP op, Scaleform::GFx::AS3::TR::Def * arg, const Scaleform::GFx::AS3::TR::Type * rt, const Scaleform::GFx::AS3::ClassTraits::Traits * ctr, unsigned long long ind, Scaleform::GFx::AS3::TR::NodeSafepoint * spt); // 0x1404923D0