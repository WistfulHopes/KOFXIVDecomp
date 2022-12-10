#pragma once

struct Scaleform::GFx::AS3::AOT::NamespaceInfo
{
	Scaleform::GFx::AS3::Abc::NamespaceKind GetKind();
	const char * GetNameURI();
	Scaleform::GFx::AS3::Abc::NamespaceKind Kind; // 0x0
	const char * NameURI; // 0x8
};
struct Scaleform::GFx::AS3::AOT::AOReg
{
	unsigned long MBInd; // 0x0
	const Scaleform::GFx::AS3::MemberInfo * MI; // 0x8
	unsigned long MINum; // 0x10
};
class Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectAOT :
	Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject
{
public:
	GlobalObjectAOT(Scaleform::GFx::AS3::VM &, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMFile> &, const Scaleform::GFx::AS3::MemberInfo *, unsigned long);
	virtual void ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> *, void(*)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *));
	Scaleform::GFx::AS3::VMFile & GetFile();
private:
	Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript & operator=(const Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMFile> File; // 0xE8
public:
	virtual ~GlobalObjectAOT();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMFile>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::VMFile>(Scaleform::Pickable<Scaleform::GFx::AS3::VMFile>);
	SPtr<Scaleform::GFx::AS3::VMFile>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMFile> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::VMFile>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMFile> &);
	SPtr<Scaleform::GFx::AS3::VMFile>(Scaleform::GFx::AS3::VMFile *);
	~SPtr<Scaleform::GFx::AS3::VMFile>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMFile> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::VMFile>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMFile> & operator=(Scaleform::GFx::AS3::VMFile *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMFile> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMFile> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMFile> & Pick(Scaleform::GFx::AS3::VMFile *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMFile> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::VMFile>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMFile> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMFile> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMFile> & SetPtr(Scaleform::GFx::AS3::VMFile *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMFile> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMFile> &);
	Scaleform::GFx::AS3::VMFile * operator->();
	Scaleform::GFx::AS3::VMFile & operator*();
	Scaleform::GFx::AS3::VMFile * & GetRawRef();
	Scaleform::GFx::AS3::VMFile * * GetRawPtr();
	Scaleform::GFx::AS3::VMFile * GetPtr();
	Scaleform::GFx::AS3::VMFile * operator class Scaleform::GFx::AS3::VMFile *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::VMFile * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};