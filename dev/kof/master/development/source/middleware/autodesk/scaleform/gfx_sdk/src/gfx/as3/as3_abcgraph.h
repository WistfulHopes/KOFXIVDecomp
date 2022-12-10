#pragma once

class Scaleform::GFx::AS3::TR::AbcBlock :
	Scaleform::ListNode<Scaleform::GFx::AS3::TR::AbcBlock>
{
	enum ETypeOffset
	{
		tDeadOffset = 0,
		tExcTryOffset = 1,
		tExcCatchOffset = 2,
		tExcFinallyOffset = 3,
		tLoopBodyOffset = 4,
		tLoopConditionOffset = 5,
		tSwitchCaseOffset = 6,
	};
	enum EType
	{
		tUnknown = 0,
		tExcTry = 2,
		tExcCatch = 4,
		tExcFinally = 8,
		tLoopBody = 16,
		tLoopCondition = 32,
		tSwitchCase = 64,
	};
	enum ScopeType
	{
		stScopeStack = 0,
		stStoredScope = 1,
		stGlobalObject = 2,
	};
public:
	AbcBlock(Scaleform::GFx::AS3::Tracer &, unsigned long, unsigned long, unsigned long, unsigned long long);
	AbcBlock();
	void SetType(Scaleform::GFx::AS3::TR::AbcBlock::EType);
	bool IsInitializedBlock();
	bool IsAbcBackEdge();
	bool IsCatchBlock();
	bool IsTryBlock();
	void SetTryBlock();
	bool IsExcTryBlock();
	bool IsExcCatchBlock();
	bool IsExcFinallyBlock();
	bool IsSwitchCaseBlock();
	bool IsLoopBodyBlock();
	bool IsLoopConditionBlock();
	unsigned long long GetFrom();
	unsigned long long GetTo();
	Scaleform::GFx::AS3::TR::State & GetState();
	Scaleform::GFx::AS3::Tracer & GetTracer();
	Scaleform::GFx::AS3::VM & GetVM();
	Scaleform::GFx::AS3::VMAbcFile & GetFile();
	Scaleform::GFx::AS3::TR::TypeSystem & GetTypeSystem();
	bool CatchBlocksAreSet();
	Scaleform::GFx::AS3::TR::NodeBlock & GetNodes();
	void SetTo(unsigned long long);
	unsigned long GetExceptionTypeInd();
	void SetExceptionTypeInd(unsigned long);
	unsigned long GetNumOfSuccessors();
	Scaleform::GFx::AS3::TR::AbcBlock * GetSuccessor(unsigned long);
	unsigned long GetNumOfCatchBlocks();
	Scaleform::GFx::AS3::TR::AbcBlock * GetCatchBlock(unsigned long);
	void RemoveNodeOrder();
	bool IsInOrderList();
	enum <unnamed-enum-IsInitializedSize>
	{
		IsInitializedSize = 1,
		AbcBackEdgeSize = 1,
		VisitorMarkerSize = 30,
	};
	static unsigned long GetMaxVisitorMarker();
	bool WasVisited(unsigned long);
	unsigned long GetVisitorMarker();
	void SetVisitorMarker(unsigned long);
	void PushNodeDebug(Scaleform::GFx::AS3::TR::NodeDebug::OP, long);
	Scaleform::GFx::AS3::CheckResult PushNodeIF(Scaleform::GFx::AS3::TR::NodeIF::OP, Scaleform::GFx::AS3::TR::NodeBlock *, Scaleform::GFx::AS3::TR::NodeBlock *);
	void PushNodeIfType(const Scaleform::GFx::AS3::ClassTraits::Traits *, Scaleform::GFx::AS3::TR::NodeBlock *, Scaleform::GFx::AS3::TR::NodeBlock *);
	void PushNodeAbrupt(Scaleform::GFx::AS3::TR::NodeAbrupt::OP, Scaleform::GFx::AS3::TR::NodeBlock *);
	Scaleform::GFx::AS3::CheckResult PushNodeJump(Scaleform::GFx::AS3::TR::NodeBlock *);
	Scaleform::GFx::AS3::TR::NodeSwitch * PushNodeSwitch(unsigned long);
	void PushNodeN(Scaleform::GFx::AS3::TR::NodeN::OP, const Scaleform::GFx::AS3::TR::ReadArgs &, Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *, const Scaleform::GFx::AS3::TR::Type *, long, unsigned long);
	void PushNodeNRT(Scaleform::GFx::AS3::TR::NodeNRT::OP, const Scaleform::GFx::AS3::TR::ReadArgsMnObject &, const Scaleform::GFx::AS3::TR::Type *, long);
	void PushNodeCall(Scaleform::GFx::AS3::Abc::Code::OpCode, const Scaleform::GFx::AS3::TR::ReadArgsMnObject &, const Scaleform::GFx::AS3::TR::Type *, long);
	void PushNodeScopeN(Scaleform::GFx::AS3::TR::NodeScopeN::OP, const Scaleform::GFx::AS3::TR::Type *, long);
	void PushNodeConst(const Scaleform::GFx::AS3::TR::Type *);
	void PushNodeConstNull(Scaleform::GFx::AS3::Traits &);
	void PushNodeConstNull();
	void PushNodeConstUndefined();
	void PushNodeConstBool(bool);
	void PushNodeConstString(const Scaleform::GFx::ASString &);
	void PushNodeConstNumber(double);
	void PushNodeConstNs(Scaleform::GFx::AS3::Instances::fl::Namespace &);
	void PushNodeConstInt(long);
	void PushNodeConstUInt(unsigned long);
	void PushNodeConstAbsObj(const Scaleform::GFx::AS3::Value &);
	void PushNodeConstValue(const Scaleform::GFx::AS3::Value &);
	void PushNodeGen(Scaleform::GFx::AS3::TR::NodeGen::OP, const Scaleform::GFx::AS3::TR::Type *, long);
	void PushNodeSink1(Scaleform::GFx::AS3::TR::NodeSink1::OP, long);
	void PushNodeSink2(Scaleform::GFx::AS3::TR::NodeSink2::OP, Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *, long);
	void PushNodeSink2(Scaleform::GFx::AS3::TR::NodeSink2::OP, long);
	void PushNodeSink2RT(Scaleform::GFx::AS3::TR::NodeSink2RT::OP, const Scaleform::GFx::AS3::TR::ReadValueMnObject &, long);
	Scaleform::GFx::AS3::CheckResult PushNodeExpr1(Scaleform::GFx::AS3::TR::NodeExpr1::OP);
	void PushNodeExprReg(Scaleform::GFx::AS3::TR::NodeExprReg::OP, long, unsigned long);
	Scaleform::GFx::AS3::CheckResult PushNodeExpr2(Scaleform::GFx::AS3::TR::NodeExpr2::OP);
	void PushNodeExpr1RT(Scaleform::GFx::AS3::TR::NodeExpr1RT::OP, const Scaleform::GFx::AS3::TR::ReadMnObject &, long);
	Scaleform::GFx::AS3::CheckResult PushNodeExpr1CT(Scaleform::GFx::AS3::TR::NodeExpr1CT::OP, const Scaleform::GFx::AS3::ClassTraits::Traits *, unsigned long);
	void PushNodeSwap();
	void PushNodeHasNext2(long, long);
	void PushNodeOP(Scaleform::GFx::AS3::TR::NodeOP::OP, long);
	Scaleform::GFx::AS3::TR::NodeSafepoint * PushNodeSafepoint(Scaleform::GFx::AS3::TR::AbcBlock *, Scaleform::GFx::AS3::TR::NodeSafepoint *);
	Scaleform::GFx::AS3::TR::Def * NewNodeConstNull(const Scaleform::GFx::AS3::Traits &);
	Scaleform::GFx::AS3::TR::NodeConst * NewNodeConst(const Scaleform::GFx::AS3::TR::Type *);
	Scaleform::GFx::AS3::TR::NodeConst * NewNodeConstString(const Scaleform::GFx::ASString &);
	Scaleform::GFx::AS3::TR::NodeConst * NewNodeConstAbsObj(const Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::AS3::TR::NodeConst * NewNodeConstValue(const Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::AS3::TR::Def * NewNodeExpr1(Scaleform::GFx::AS3::TR::NodeExpr1::OP, Scaleform::GFx::AS3::TR::Def *, const Scaleform::GFx::AS3::TR::Type *);
	Scaleform::GFx::AS3::TR::Def * NewNodeExpr1(Scaleform::GFx::AS3::TR::NodeExpr1::OP, Scaleform::GFx::AS3::TR::Def *);
	Scaleform::GFx::AS3::TR::Def * NewNodeExpr1CT(Scaleform::GFx::AS3::TR::NodeExpr1CT::OP, Scaleform::GFx::AS3::TR::Def *, const Scaleform::GFx::AS3::ClassTraits::Traits *, unsigned long);
	Scaleform::GFx::AS3::TR::Def * NewNodeExprReg(Scaleform::GFx::AS3::TR::NodeExprReg::OP, long, Scaleform::GFx::AS3::TR::Def *, unsigned long);
	Scaleform::GFx::AS3::TR::NodeJump * MakeNodeJump(Scaleform::GFx::AS3::TR::NodeBlock *);
	Scaleform::GFx::AS3::TR::NodeSafepoint * MakeSafepointChain();
	static bool IsOrigPropSetter(Scaleform::GFx::AS3::Abc::Code::OpCode);
	static void SkipOrigOpCode(unsigned long long &, unsigned long long);
	static bool IsBranchOpCode(Scaleform::GFx::AS3::Abc::Code::OpCode);
	static bool IsEndOpCode(Scaleform::GFx::AS3::Abc::Code::OpCode);
	static bool IsBlockEndOpCode(Scaleform::GFx::AS3::Abc::Code::OpCode);
	Scaleform::GFx::AS3::CheckResult EmitGetAbsObject(const Scaleform::GFx::AS3::Value &);
	unsigned long EmitDefaultArgs(const Scaleform::GFx::AS3::Value &, const Scaleform::GFx::AS3::TR::ReadArgs &);
	unsigned long EmitDefaultArgs(Scaleform::GFx::AS3::VMAbcFile &, const Scaleform::GFx::AS3::Abc::MiInd, const Scaleform::GFx::AS3::TR::ReadArgs &);
	Scaleform::GFx::AS3::CheckResult EmitArgTypeConv(const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::TR::ReadArgs &);
	Scaleform::GFx::AS3::CheckResult EmitArgTypeConv(Scaleform::GFx::AS3::VMAbcFile &, const Scaleform::GFx::AS3::Abc::MiInd, Scaleform::GFx::AS3::TR::ReadArgs &);
	void EmitGetOuterScope(const Scaleform::GFx::AS3::TR::Type *, const long);
	Scaleform::GFx::AS3::CheckResult EmitGetClassTraits(const Scaleform::GFx::AS3::Multiname &);
	void EmitGetAbsSlot(const Scaleform::GFx::AS3::AbsoluteIndex);
	void EmitSetAbsSlot(Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *, const Scaleform::GFx::AS3::SlotInfo &, const Scaleform::GFx::AS3::Traits *, const Scaleform::GFx::AS3::AbsoluteIndex);
	void EmitInitAbsSlot(Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *, const Scaleform::GFx::AS3::AbsoluteIndex);
	bool EmitGetSlot(const Scaleform::GFx::AS3::Value &, const Scaleform::GFx::AS3::AbsoluteIndex);
	bool EmitCall(const Scaleform::GFx::AS3::Abc::Code::OpCode, Scaleform::GFx::AS3::TR::ReadArgsMnObject &, const unsigned long);
	void EmitPopPrevResult();
	bool EmitGetProperty(const Scaleform::GFx::AS3::Abc::Code::OpCode, const Scaleform::GFx::AS3::TR::ReadMnObject &, const long);
	bool EmitSetProperty(const Scaleform::GFx::AS3::Abc::Code::OpCode, const Scaleform::GFx::AS3::TR::ReadValueMnObject &, const long);
	Scaleform::GFx::AS3::CheckResult EmitFindProperty(const Scaleform::GFx::AS3::Abc::Code::OpCode, const long, bool, const Scaleform::GFx::AS3::Abc::Code::OpCode);
	Scaleform::GFx::AS3::CheckResult EmitConstruct(const Scaleform::GFx::AS3::Traits *, Scaleform::GFx::AS3::TR::ReadArgs &, Scaleform::GFx::AS3::TR::Def *);
	bool SubstituteGetlocal(unsigned long long &, unsigned long long, long);
	Scaleform::GFx::AS3::CheckResult SubstituteOpCode(const Scaleform::GFx::AS3::Abc::Code::OpCode, unsigned long long &);
	Scaleform::GFx::AS3::CheckResult Trace();
	void Rename(Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *);
	Scaleform::GFx::AS3::CheckResult CheckSize(const unsigned long, unsigned long(*)());
	Scaleform::GFx::AS3::CheckResult MergeNodesIntoState();
	Scaleform::GFx::AS3::CheckResult MergeNodesIntoState(unsigned long, Scaleform::GFx::AS3::TR::Def * *, Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Use &(*)(unsigned long), bool &, bool &);
	Scaleform::GFx::AS3::CheckResult MergeNodesNoState(bool &, bool &);
	Scaleform::GFx::AS3::CheckResult MergeFromPredecessors();
	void CoercePredecessors();
	unsigned long GetNumOfIncomingEdges();
	bool IsOptimistic();
	Scaleform::GFx::AS3::TR::Def * CoerceTypeOnStack(Scaleform::GFx::AS3::TR::Def *, const Scaleform::GFx::AS3::ClassTraits::Traits *, unsigned long);
	static bool CoerceIsNop(Scaleform::GFx::AS3::TR::Def *, const Scaleform::GFx::AS3::TR::Type *);
	static bool CoerceIsNop(Scaleform::GFx::AS3::TR::Def *, const Scaleform::GFx::AS3::ClassTraits::Traits *);
private:
	void BackPropagateType(unsigned long, Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Use &(*)(unsigned long));
	static Scaleform::GFx::AS3::CheckResult CanCoerce2Type(Scaleform::GFx::AS3::TR::Def *, const Scaleform::GFx::AS3::TR::Type *);
	Scaleform::GFx::AS3::CheckResult CanCoercePred2Type(unsigned long, Scaleform::GFx::AS3::TR::Use &(*)(unsigned long), const Scaleform::GFx::AS3::TR::Type *);
	Scaleform::GFx::AS3::CheckResult Coerce2Type(Scaleform::GFx::AS3::TR::Def *, const Scaleform::GFx::AS3::TR::Type *, unsigned long);
public:
	void exec_throw();
	void exec_dxns(unsigned long);
	void exec_dxnslate();
	void exec_kill(unsigned long);
	void exec_popscope();
	void exec_pushundefined();
	void exec_pushbyte(long);
	void exec_pushshort(long);
	void exec_pop();
	void exec_swap(bool);
	void exec_pushstring(long);
	void exec_pushint(long);
	void exec_pushuint(long);
	void exec_pushdouble(long);
	void exec_pushscope();
	void exec_pushnamespace(unsigned long);
	void exec_hasnext2(unsigned long, unsigned long);
	void exec_li8();
	void exec_li16();
	void exec_li32();
	void exec_lf32();
	void exec_lf64();
	void exec_si8();
	void exec_si16();
	void exec_si32();
	void exec_sf32();
	void exec_sf64();
	void exec_newfunction(unsigned long);
	void exec_call(unsigned long);
	void exec_construct(unsigned long);
	void exec_constructsuper(unsigned long);
	void exec_sxi1();
	void exec_sxi8();
	void exec_sxi16();
	void exec_applytype(unsigned long);
	void exec_newobject(unsigned long);
	void exec_newarray(unsigned long);
	void exec_newactivation();
	void exec_newclass(unsigned long);
	void exec_getdescendants(unsigned long);
	void exec_newcatch(unsigned long);
	void exec_getabsobject(Scaleform::GFx::AS3::Abc::Code::OpCode, Scaleform::GFx::AS3::InstanceTraits::Traits &);
	void exec_getlocal(unsigned long);
	void exec_setlocal(unsigned long);
	void exec_getglobalscope(bool);
	void exec_getscopeobject(unsigned long);
	void exec_deleteproperty(unsigned long);
	void exec_getslot(unsigned long, bool);
	void exec_setslot(unsigned long, bool);
	void exec_getglobalslot(unsigned long);
	void exec_setglobalslot(unsigned long);
	void exec_esc_xelem();
	void exec_esc_xattr();
	void exec_convert_i();
	void exec_convert_u();
	void exec_convert_d();
	void exec_convert_b();
	void exec_convert_o();
	Scaleform::GFx::AS3::CheckResult exec_convert_s();
	void exec_checkfilter();
	void exec_coerce(unsigned long);
	void exec_coerce_s();
	void exec_coerce_a();
	void exec_astype(unsigned long);
	void exec_inclocal(unsigned long, unsigned long long);
	void exec_declocal(unsigned long, unsigned long long);
	void exec_not();
	void exec_negate();
	void exec_increment_i();
	void exec_decrement_i();
	void exec_negate_i();
	void exec_istype(unsigned long);
	void exec_inclocal_i(unsigned long, unsigned long long);
	void exec_declocal_i(unsigned long, unsigned long long);
	void exec_getlocal0();
	void exec_getlocal1();
	void exec_getlocal2();
	void exec_getlocal3();
	void exec_setlocal1();
	void exec_setlocal2();
	void exec_setlocal3();
	void exec_if(unsigned long long &, Scaleform::GFx::AS3::Abc::Code::OpCode);
	Scaleform::GFx::AS3::CheckResult exec_jump(unsigned long long &);
	Scaleform::GFx::AS3::CheckResult exec_switch(unsigned long long &);
	Scaleform::GFx::AS3::CheckResult exec_returnvalue();
	Scaleform::GFx::AS3::CheckResult exec_opcode(const Scaleform::GFx::AS3::Abc::Code::OpCode, unsigned long long &);
private:
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetObjectType();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetClassType();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetArrayType();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetXMLListType();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetVoidType();
	Scaleform::GFx::AS3::CheckResult FindProp(Scaleform::GFx::AS3::PropRef &, const Scaleform::GFx::AS3::Multiname &, Scaleform::GFx::AS3::TR::AbcBlock::ScopeType &, unsigned long &);
	Scaleform::GFx::AS3::CheckResult MergeTypes(const Scaleform::GFx::AS3::TR::Type * &, const Scaleform::GFx::AS3::TR::Type *, bool);
	Scaleform::GFx::AS3::CheckResult MergePredTypes(const Scaleform::GFx::AS3::TR::Type * &, unsigned long, Scaleform::GFx::AS3::TR::Use &(*)(unsigned long), bool);
	const Scaleform::GFx::AS3::TR::Type * GetType(const Scaleform::GFx::AS3::TR::Type *, bool);
	void SetupCatchBlock();
	Scaleform::GFx::AS3::CheckResult RemoveDeadBlockFromRPOList(Scaleform::GFx::AS3::TR::AbcBlock *);
	void SetInitialized(bool);
	Scaleform::GFx::AS3::TR::AbcBlock * GetThis();
	void SetSuccessors(Scaleform::GFx::AS3::TR::AbcBlock * *, unsigned long);
	void SetSuccessor(unsigned long, Scaleform::GFx::AS3::TR::AbcBlock *);
	void SetCatchBlocks(Scaleform::GFx::AS3::TR::AbcBlock * *, Scaleform::GFx::AS3::TR::NodeBlock * *, unsigned long);
	Scaleform::GFx::AS3::CheckResult ReductNotNot(Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::NodeExpr1::OP);
	void RemoveNodeConservative(Scaleform::GFx::AS3::TR::Def *);
	unsigned long IsInitialized : 1; // 0x10
	unsigned long AbcBackEdge : 1; // 0x10
	unsigned long VisitorMarker : 30; // 0x10
	unsigned long BType; // 0x14
	unsigned long NumOfIncomingEdges; // 0x18
	unsigned long NumOfSuccessors; // 0x1C
	unsigned long NumOfCatchBlocks; // 0x20
	unsigned long ExceptionTypeInd; // 0x24
	unsigned long OpStackSize; // 0x28
	unsigned long ScopeStackSize; // 0x2C
	Scaleform::GFx::AS3::TR::AbcBlock * * Successors; // 0x30
	Scaleform::GFx::AS3::TR::AbcBlock * * CatchBlocks; // 0x38
	unsigned long long From; // 0x40
	unsigned long long To; // 0x48
	Scaleform::GFx::AS3::Tracer * Tr; // 0x50
	Scaleform::GFx::AS3::TR::NodeBlock * Nodes; // 0x58
	Scaleform::GFx::AS3::TR::AbcBlock * PrevOrder; // 0x60
	Scaleform::GFx::AS3::TR::AbcBlock * NextOrder; // 0x68
};
struct Scaleform::ListNode<Scaleform::GFx::AS3::TR::AbcBlock>
{
	Scaleform::GFx::AS3::TR::AbcBlock * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::GFx::AS3::TR::AbcBlock * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::GFx::AS3::TR::AbcBlock>();
	Scaleform::GFx::AS3::TR::AbcBlock * GetPrev();
	Scaleform::GFx::AS3::TR::AbcBlock * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::GFx::AS3::TR::AbcBlock *);
	void InsertNodeAfter(Scaleform::GFx::AS3::TR::AbcBlock *);
	void InsertNodeBefore(Scaleform::GFx::AS3::TR::AbcBlock *);
};
void Scaleform::GFx::AS3::TR::AbcBlock::EmitGetOuterScope(const Scaleform::GFx::AS3::TR::Type * rt, const long index); // 0x140474CC0