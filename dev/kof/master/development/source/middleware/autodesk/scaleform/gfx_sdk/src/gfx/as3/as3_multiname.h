#pragma once

class Scaleform::GFx::AS3::Multiname
{
	enum MultinameKind
	{
		MN_QName = 0,
		MN_QNameA = 8,
		MN_RTQName = 1,
		MN_RTQNameA = 9,
		MN_RTQNameL = 5,
		MN_RTQNameLA = 13,
		MN_Multiname = 2,
		MN_MultinameA = 10,
		MN_MultinameL = 6,
		MN_MultinameLA = 14,
		MN_Typename = 16,
		MN_Invalid = 32,
	};
public:
	Multiname(Scaleform::GFx::AS3::Multiname &);
	Multiname(const Scaleform::GFx::AS3::Multiname &);
	Multiname(const Scaleform::GFx::AS3::VM &, const Scaleform::GFx::AS3::TypeInfo &);
	Multiname(const Scaleform::GFx::AS3::VM &, const Scaleform::StringDataPtr &);
	Multiname(Scaleform::GFx::AS3::VMFile &, const Scaleform::GFx::AS3::Abc::Multiname &);
	Multiname(Scaleform::GFx::AS3::NamespaceSet &, const Scaleform::GFx::AS3::Value &);
	Multiname(Scaleform::GFx::AS3::Instances::fl::Namespace &, const Scaleform::GFx::AS3::Value &);
	Multiname(Scaleform::GFx::AS3::VM &, const Scaleform::GFx::AS3::Value &);
	Multiname(Scaleform::GFx::AS3::VM &);
	Scaleform::GFx::AS3::Abc::MultinameKind GetKind();
	bool isValidKind();
	Scaleform::GFx::AS3::Abc::MultinameKindBits getNamespaceBits();
	bool IsNameLate();
	bool IsAttr();
	bool IsQName();
	bool IsRunTime();
	bool IsMultiname();
	bool IsCompileTime();
	bool IsTypename();
	void SetAttr(bool);
	bool IsAnyType();
	bool IsAnyNamespace();
	bool ContainsNamespace(const Scaleform::GFx::AS3::Instances::fl::Namespace &);
	const Scaleform::GFx::AS3::Value & GetName();
	Scaleform::GFx::AS3::Instances::fl::Namespace & GetNamespace();
	Scaleform::GFx::AS3::NamespaceSet & GetNamespaceSet();
	class Collector;
	void ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> *, void(*)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *));
protected:
	void SetRTNamespace(Scaleform::GFx::AS3::Instances::fl::Namespace &);
	void SetRTName(const Scaleform::GFx::AS3::Value &);
	void SetRTNameUnsafe(const Scaleform::GFx::AS3::Value &);
	void PickRTName(Scaleform::GFx::AS3::StackWindowBase &);
	void PickRTName(Scaleform::GFx::AS3::VSBase &);
	void PickRTName(Scaleform::GFx::AS3::Value &);
private:
	void SetFromQName(const Scaleform::GFx::AS3::Value &);
	void PostProcessName(const bool);
	void setNamespaceBits(Scaleform::GFx::AS3::Abc::MultinameKindBits);
	void setKind(Scaleform::GFx::AS3::Abc::MultinameKind);
	Scaleform::GFx::AS3::Abc::MultinameKind Kind; // 0x0
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> Obj; // 0x8
	Scaleform::GFx::AS3::Value Name; // 0x10
public:
	~Multiname();
	Scaleform::GFx::AS3::Multiname & operator=(Scaleform::GFx::AS3::Multiname &);
	Scaleform::GFx::AS3::Multiname & operator=(const Scaleform::GFx::AS3::Multiname &);
};
bool Scaleform::GFx::AS3::Multiname::IsAnyNamespace(); // 0x14050CAF0