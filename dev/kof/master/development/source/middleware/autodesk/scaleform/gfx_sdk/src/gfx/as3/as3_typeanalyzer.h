#pragma once

class Scaleform::GFx::AS3::TR::TypeAnalyzer
{
private:
	TypeAnalyzer(const Scaleform::GFx::AS3::TR::TypeAnalyzer &);
public:
	TypeAnalyzer(Scaleform::GFx::AS3::TR::TypeSystem &);
	const Scaleform::GFx::AS3::TR::Type * CalcNodeN(Scaleform::GFx::AS3::TR::NodeN::OP, const Scaleform::GFx::AS3::TR::Type *, Scaleform::GFx::AS3::TR::Def *);
	const Scaleform::GFx::AS3::TR::Type * CalcNodeScopeN(Scaleform::GFx::AS3::TR::NodeScopeN::OP, const Scaleform::GFx::AS3::TR::Type *, Scaleform::GFx::AS3::TR::Def *);
	Scaleform::GFx::AS3::CheckResult CalcNodeExpr1(const Scaleform::GFx::AS3::TR::Type * &, Scaleform::GFx::AS3::TR::NodeExpr1::OP, Scaleform::GFx::AS3::TR::Def *);
	const Scaleform::GFx::AS3::TR::Type * CalcNodeExprReg(Scaleform::GFx::AS3::TR::NodeExprReg::OP, Scaleform::GFx::AS3::TR::Def *);
	Scaleform::GFx::AS3::CheckResult CalcNodeExpr2(const Scaleform::GFx::AS3::TR::Type * &, Scaleform::GFx::AS3::TR::NodeExpr2::OP, Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *);
	Scaleform::GFx::AS3::CheckResult CalcNodeExpr1CT(const Scaleform::GFx::AS3::TR::Type * &, Scaleform::GFx::AS3::TR::NodeExpr1CT::OP, Scaleform::GFx::AS3::TR::Def *, const Scaleform::GFx::AS3::ClassTraits::Traits *, unsigned long);
	void CalcNodeSwap(const Scaleform::GFx::AS3::TR::Type * &, const Scaleform::GFx::AS3::TR::Type * &, Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *);
	void CalcNodeHasNext2(const Scaleform::GFx::AS3::TR::Type * &, const Scaleform::GFx::AS3::TR::Type * &, Scaleform::GFx::AS3::TR::Def *, Scaleform::GFx::AS3::TR::Def *);
	Scaleform::GFx::AS3::TR::TypeSystem & GetTypeSystem();
	Scaleform::GFx::AS3::VM & GetVM();
private:
	Scaleform::GFx::AS3::TR::TypeAnalyzer & operator=(const Scaleform::GFx::AS3::TR::TypeAnalyzer &);
	Scaleform::GFx::AS3::TR::TypeSystem & TS; // 0x0
};