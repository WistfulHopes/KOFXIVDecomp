
Scaleform::GFx::AS3::VMFile::VMFile(Scaleform::GFx::AS3::VM & vm, Scaleform::GFx::AS3::VMAppDomain & appDomain); // 0x140452F10
Scaleform::GFx::AS3::VMFile::~VMFile(); // 0x1404564B0
void Scaleform::GFx::AS3::VMFile::ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> * prcc, void(*op)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *)); // 0x140480630
Scaleform::GFx::AS3::Instances::fl::Namespace & Scaleform::GFx::AS3::VMFile::GetInternedNamespace(const Scaleform::GFx::AS3::Abc::Multiname & mn); // 0x140486810
Scaleform::GFx::AS3::Instances::fl::Namespace & Scaleform::GFx::AS3::VMFile::GetInternedNamespace(unsigned long long nsIndex); // 0x140486910
Scaleform::GFx::AS3::NamespaceSet & Scaleform::GFx::AS3::VMFile::GetInternedNamespaceSet(unsigned long long nsSetIndex); // 0x1404869F0
Scaleform::GFx::ASString Scaleform::GFx::AS3::VMFile::GetInternedString(unsigned long long strIndex); // 0x140486AD0
Scaleform::GFx::AS3::InstanceTraits::Traits & Scaleform::GFx::AS3::VMFile::GetActivationInstanceTraits(const Scaleform::GFx::AS3::Abc::MbiInd mbi_ind); // 0x140483250
Scaleform::GFx::AS3::InstanceTraits::fl::Catch * Scaleform::GFx::AS3::VMExceptionTypeInfo::GetCatchTR(Scaleform::GFx::AS3::VMAbcFile & file); // 0x140483C20
Scaleform::GFx::AS3::VMAbcFile::VMAbcFile(Scaleform::GFx::AS3::VM & vm, const Scaleform::Ptr<Scaleform::GFx::AS3::Abc::File> & file, Scaleform::GFx::AS3::VMAppDomain & appDomain); // 0x140452C40
Scaleform::GFx::AS3::VMAbcFile::~VMAbcFile(); // 0x1404560A0
void Scaleform::GFx::AS3::VMAbcFile::Finalize_GC(); // 0x14047CE00
Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace> Scaleform::GFx::AS3::VMAbcFile::MakeInternedNamespace(const Scaleform::GFx::AS3::Abc::Multiname & mn); // 0x140491A70
Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace> Scaleform::GFx::AS3::VMAbcFile::MakeInternedNamespace(unsigned long long nsIndex); // 0x140491BA0
Scaleform::Pickable<Scaleform::GFx::AS3::NamespaceSet> Scaleform::GFx::AS3::VMAbcFile::MakeInternedNamespaceSet(unsigned long long nsSetIndex); // 0x140491C40
Scaleform::Pickable<Scaleform::GFx::AS3::InstanceTraits::Traits> Scaleform::GFx::AS3::VMAbcFile::MakeActivationInstanceTraits(const Scaleform::GFx::AS3::Abc::MbiInd mbi_ind); // 0x140491280
Scaleform::GFx::ASString Scaleform::GFx::AS3::VMAbcFile::MakeInternedString(unsigned long long strIndex); // 0x140491D80
void Scaleform::GFx::AS3::VMAbcFile::ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> * prcc, void(*op)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *)); // 0x1404802E0
bool Scaleform::GFx::AS3::VMAbcFile::RegisterUserDefinedClassTraits(); // 0x1404A0E60
void Scaleform::GFx::AS3::VMAbcFile::UnregisterUserDefinedClassTraits(); // 0x1404B0DB0
bool Scaleform::GFx::AS3::VMAbcFile::RegisterScrips(bool to_execute); // 0x1404A0B80
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript>(Scaleform::Pickable<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript>);
	SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript> &);
	SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript>(Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript *);
	~SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript> & operator=(Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript> & Pick(Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript> & SetPtr(Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript> &);
	Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript * operator->();
	Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript & operator*();
	Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript * & GetRawRef();
	Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript * * GetRawPtr();
	Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript * GetPtr();
	Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript * operator class Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObjectScript * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
void Scaleform::GFx::AS3::VMAbcFile::UnRegister(); // 0x1404B0350
Scaleform::GFx::AS3::VMMethodBodyInfo & Scaleform::GFx::AS3::VMAbcFile::GetOpCode(const Scaleform::GFx::AS3::CallFrame & cf); // 0x140488580
Scaleform::GFx::AS3::Value Scaleform::GFx::AS3::VMAbcFile::GetDetailValue(const Scaleform::GFx::AS3::Abc::ValueDetail & d); // 0x140485730
Scaleform::GFx::AS3::InstanceTraits::fl::Function & Scaleform::GFx::AS3::VMAbcFile::GetFunctionInstanceTraits(Scaleform::GFx::AS3::Abc::MbiInd method_ind); // 0x140486470
const Scaleform::GFx::AS3::Abc::Multiname & Scaleform::GFx::AS3::VMAbcFile::GetMultiname(unsigned long long ind); // 0x140487240
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::XMLSupport::EqualsXML(bool & stop, bool & result, Scaleform::GFx::AS3::Instances::fl::XML & __formal, const Scaleform::GFx::AS3::Value & __formal); // 0x140475B00
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::XMLSupport::EqualsQName(bool & result, Scaleform::GFx::AS3::Instances::fl::QName & __formal, Scaleform::GFx::AS3::Instances::fl::QName & __formal); // 0x140475DB0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::XMLSupport::ToXMLString(Scaleform::GFx::AS3::VM & vm, Scaleform::GFx::AS3::Value & v); // 0x14050C9D0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::GetArrayInd(Scaleform::GFx::ASStringNode * sn, unsigned long & ind); // 0x1404836F0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::GetArrayInd(const Scaleform::GFx::AS3::Value & name, unsigned long & ind); // 0x140483680
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::GetVectorInd(Scaleform::GFx::ASStringNode * sn, unsigned long & ind); // 0x14048CBA0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::GetVectorInd(const Scaleform::GFx::AS3::Value & name, unsigned long & ind); // 0x14048CAE0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::GetStrNumber(Scaleform::GFx::ASStringNode * sn, double & result); // 0x14048AE70
Scaleform::GFx::AS3::CallFrame::CallFrame(); // 0x14044EA30
Scaleform::GFx::AS3::CallFrame::~CallFrame(); // 0x1404544A0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::CallFrame::SetupRegisters(const Scaleform::GFx::AS3::Value & _this, unsigned long & argc, const unsigned long abc_argc, Scaleform::GFx::AS3::Value * argv, bool strictCall, const Scaleform::GFx::AS3::VMMethodBodyInfo & mbi); // 0x1404AC140
void Scaleform::GFx::AS3::CallFrame::ReserveStack(Scaleform::GFx::AS3::VMMethodBodyInfo & mbi); // 0x1404A3520
Scaleform::GFx::AS3::VMAppDomain::VMAppDomain(Scaleform::GFx::AS3::VM & vm, Scaleform::GFx::AS3::VMAppDomain * parentDomain); // 0x140452EB0
void Scaleform::GFx::AS3::VMAppDomain::AddChild(Scaleform::GFx::AS3::VMAppDomain & childDomain); // 0x14045C1E0
Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain> Scaleform::GFx::AS3::VMAppDomain::AddNewChild(Scaleform::GFx::AS3::VM & vm); // 0x14045E1E0
const Scaleform::GFx::AS3::ClassTraits::Traits & Scaleform::GFx::AS3::Class::ApplyTypeArgs(unsigned long argc, Scaleform::GFx::AS3::Value * argv); // 0x140488880
bool Scaleform::GFx::AS3::VMAppDomain::RemoveChild(Scaleform::GFx::AS3::VMAppDomain & childDomain); // 0x1404A1A90
Scaleform::GFx::AS3::ClassTraits::Traits * * Scaleform::GFx::AS3::VMAppDomain::GetClassTrait(const Scaleform::GFx::ASString & name, const Scaleform::GFx::AS3::Instances::fl::Namespace & ns); // 0x1404841E0
Scaleform::GFx::AS3::ClassTraits::Traits * * Scaleform::GFx::AS3::VMAppDomain::GetClassTrait(const Scaleform::GFx::AS3::Multiname & mn); // 0x140484230
Scaleform::GFx::AS3::ClassTraits::Traits * * Scaleform::GFx::AS3::VMAppDomain::GetClassTrait(Scaleform::GFx::AS3::VMAbcFile & file, const Scaleform::GFx::AS3::Abc::Multiname & mn); // 0x140484190
void Scaleform::GFx::AS3::VMAppDomain::AddClassTrait(const Scaleform::GFx::ASString & name, const Scaleform::GFx::AS3::Instances::fl::Namespace & ns, Scaleform::GFx::AS3::ClassTraits::Traits * val); // 0x14045C410
bool Scaleform::GFx::AS3::VMAppDomain::IsEmpty(); // 0x14048FB00
void Scaleform::GFx::AS3::VMAppDomain::ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> * prcc, void(*op)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *)); // 0x1404805C0
Scaleform::GFx::AS3::VM::VM(Scaleform::GFx::AS3::FlashUI & _ui, Scaleform::GFx::AS3::StringManager & sm, Scaleform::GFx::AS3::ASRefCountCollector & gc); // 0x140451EB0
Scaleform::GFx::AS3::VM::~VM(); // 0x1404558A0
Scaleform::GFx::AS3::VMAppDomain & Scaleform::GFx::AS3::VM::GetFrameAppDomain(); // 0x140485FB0
bool Scaleform::GFx::AS3::VM::RemoveAppDomain(Scaleform::GFx::AS3::VMAppDomain & appDomain); // 0x1404A1880
void Scaleform::GFx::AS3::VM::UnregisterAllAbcFiles(); // 0x1404B0C10
Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> Scaleform::GFx::AS3::VM::FindVMAbcFileWeak(const char * name, Scaleform::GFx::AS3::VMAppDomain & appDomain); // 0x14047F380
bool Scaleform::GFx::AS3::VM::RemoveVMAbcFileWeak(Scaleform::GFx::AS3::VMAbcFile * f); // 0x1404A2440
unsigned long long Scaleform::GFx::AS3::VM::GetAllLoadedAbcFiles(Scaleform::Array<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2,Scaleform::ArrayDefaultPolicy> * destArray); // 0x140483540
bool Scaleform::GFx::AS3::IsScaleformGFx(const Scaleform::GFx::AS3::Instances::fl::Namespace & ns); // 0x1404903A0
Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Object> Scaleform::GFx::AS3::VM::MakeObject(); // 0x140492ED0
Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Array> Scaleform::GFx::AS3::VM::MakeArray(); // 0x140491300
Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl_utils::ByteArray> Scaleform::GFx::AS3::VM::MakeByteArray(); // 0x140491330
Scaleform::GFx::ASString Scaleform::GFx::AS3::VM::AsString(const Scaleform::GFx::AS3::Value & value); // 0x140460EF0
const Scaleform::GFx::AS3::ClassTraits::Traits * Scaleform::GFx::AS3::VM::GetRegisteredClassTraits(const Scaleform::GFx::AS3::Multiname & mn, Scaleform::GFx::AS3::VMAppDomain & appDomain); // 0x140489600
const Scaleform::GFx::AS3::ClassTraits::Traits * Scaleform::GFx::AS3::VM::GetRegisteredClassTraits(const Scaleform::GFx::ASString & name, const Scaleform::GFx::AS3::Instances::fl::Namespace & ns, Scaleform::GFx::AS3::VMAppDomain & appDomain); // 0x140489590
const Scaleform::GFx::AS3::ClassTraits::Traits * Scaleform::GFx::AS3::VM::GetRegisteredClassTraits(Scaleform::GFx::AS3::VMAbcFile & file, const Scaleform::GFx::AS3::Abc::Multiname & mn); // 0x140489410
const Scaleform::GFx::AS3::ClassTraits::Traits * Scaleform::GFx::AS3::VM::Resolve2ClassTraits(const Scaleform::GFx::ASString & name, const Scaleform::GFx::AS3::Instances::fl::Namespace & ns, Scaleform::GFx::AS3::VMAppDomain & appDomain); // 0x1404A4950
const Scaleform::GFx::AS3::ClassTraits::Traits * Scaleform::GFx::AS3::VM::Resolve2ClassTraits(const Scaleform::GFx::AS3::Multiname & mn, Scaleform::GFx::AS3::VMAppDomain & appDomain); // 0x1404A4A00
const Scaleform::GFx::AS3::ClassTraits::Traits * Scaleform::GFx::AS3::VM::Resolve2ClassTraits(Scaleform::GFx::AS3::VMFile & file, const Scaleform::GFx::AS3::Abc::Multiname & mn); // 0x1404A44F0
const Scaleform::GFx::AS3::ClassTraits::Traits * Scaleform::GFx::AS3::VM::Resolve2ClassTraits(const Scaleform::GFx::AS3::TypeInfo & ti); // 0x1404A4740
void Scaleform::GFx::AS3::VM::UnregisterGlobalObject(Scaleform::GFx::AS3::Instances::fl::GlobalObject & go); // 0x1404B0CE0
void Scaleform::GFx::AS3::VM::SetClassAlias(const Scaleform::GFx::ASString & alias, Scaleform::GFx::AS3::Class & cl); // 0x1404A8080
Scaleform::GFx::AS3::Class * Scaleform::GFx::AS3::VM::GetClassByAlias(const Scaleform::GFx::ASString & alias); // 0x140484000
Scaleform::GFx::ASString Scaleform::GFx::AS3::VM::GetAliasByClass(Scaleform::GFx::AS3::Class & cl); // 0x140483450
bool Scaleform::GFx::AS3::VM::IsOfType(const Scaleform::GFx::AS3::Value & v, const char * type_name, Scaleform::GFx::AS3::VMAppDomain & appDomain); // 0x14048FEB0
bool Scaleform::GFx::AS3::VM::IsOfType(const Scaleform::GFx::AS3::Value & v, const Scaleform::GFx::AS3::ClassTraits::Traits & ctr); // 0x14048FFC0
long Scaleform::GFx::AS3::VM::OnException(unsigned long long offset, Scaleform::GFx::AS3::CallFrame & cf); // 0x140496290
void Scaleform::GFx::AS3::VM::exec_getsuper(Scaleform::GFx::AS3::VMFile & file, const Scaleform::GFx::AS3::Traits & ot, const Scaleform::GFx::AS3::Abc::Multiname & mn); // 0x1404BB6B0
void Scaleform::GFx::AS3::VM::exec_setsuper(Scaleform::GFx::AS3::VMFile & file, const Scaleform::GFx::AS3::Traits & ot, const Scaleform::GFx::AS3::Abc::Multiname & mn); // 0x1404C0810
void Scaleform::GFx::AS3::VM::exec_setproperty(Scaleform::GFx::AS3::VMFile & file, const Scaleform::GFx::AS3::Abc::Multiname & mn); // 0x1404C04C0
void Scaleform::GFx::AS3::VM::exec_callproperty(Scaleform::GFx::AS3::VMFile & file, const Scaleform::GFx::AS3::Abc::Multiname & mn, unsigned long long arg_count); // 0x1404B5550
void Scaleform::GFx::AS3::VM::exec_callproplex(Scaleform::GFx::AS3::VMFile & file, const Scaleform::GFx::AS3::Abc::Multiname & mn, unsigned long long arg_count); // 0x1404B59C0
void Scaleform::GFx::AS3::VM::exec_callpropvoid(Scaleform::GFx::AS3::VMFile & file, const Scaleform::GFx::AS3::Abc::Multiname & mn, unsigned long long arg_count); // 0x1404B5E50
void Scaleform::GFx::AS3::VM::exec_callmethod(unsigned long method_index, unsigned long long argc, unsigned long long abc_argc); // 0x1404B5220
void Scaleform::GFx::AS3::VM::exec_callsupermethod(const Scaleform::GFx::AS3::Traits & ot, unsigned long method_index, unsigned long long argc, unsigned long long abc_argc); // 0x1404B6C60
void Scaleform::GFx::AS3::VM::exec_callgetter(unsigned long method_index, unsigned long long arg_count); // 0x1404B4F60
void Scaleform::GFx::AS3::VM::exec_callsupergetter(const Scaleform::GFx::AS3::Traits & ot, unsigned long method_index, unsigned long long arg_count); // 0x1404B6810
void Scaleform::GFx::AS3::VM::exec_newfunction(const Scaleform::GFx::AS3::CallFrame & cf, unsigned long method_ind); // 0x1404BD4A0
void Scaleform::GFx::AS3::VM::exec_call(unsigned long arg_count); // 0x1404B4CB0
void Scaleform::GFx::AS3::VM::exec_callobject(unsigned long arg_count); // 0x1404B5350
void Scaleform::GFx::AS3::VM::exec_callsuper(Scaleform::GFx::AS3::VMFile & file, const Scaleform::GFx::AS3::Traits & ot, const Scaleform::GFx::AS3::Abc::Multiname & mn, unsigned long long arg_count); // 0x1404B6500
void Scaleform::GFx::AS3::VM::exec_callsupervoid(Scaleform::GFx::AS3::VMFile & file, const Scaleform::GFx::AS3::Traits & ot, const Scaleform::GFx::AS3::Abc::Multiname & mn, unsigned long long arg_count); // 0x1404B6DD0
void Scaleform::GFx::AS3::VM::exec_construct(unsigned long arg_count); // 0x1404B7630
void Scaleform::GFx::AS3::VM::exec_construct_strict(unsigned long argc); // 0x1404B7890
void Scaleform::GFx::AS3::VM::exec_constructsuper(const Scaleform::GFx::AS3::Traits & ot, unsigned long arg_count); // 0x1404B8260
void Scaleform::GFx::AS3::VM::exec_constructprop(Scaleform::GFx::AS3::VMFile & file, const Scaleform::GFx::AS3::Abc::Multiname & mn, unsigned long long arg_count); // 0x1404B7A70
void Scaleform::GFx::AS3::VM::exec_getdescendants(Scaleform::GFx::AS3::VMFile & file, const Scaleform::GFx::AS3::Abc::Multiname & mn); // 0x1404B9AF0
void Scaleform::GFx::AS3::VM::exec_findpropstrict(Scaleform::GFx::AS3::VMFile & file, const Scaleform::GFx::AS3::Abc::Multiname & mn, const Scaleform::GFx::AS3::VSBase & ss); // 0x1404B9570
void Scaleform::GFx::AS3::VM::exec_findproperty(Scaleform::GFx::AS3::VMFile & file, const Scaleform::GFx::AS3::Abc::Multiname & mn, const Scaleform::GFx::AS3::VSBase & ss, Scaleform::GFx::AS3::Object & go); // 0x1404B91B0
void Scaleform::GFx::AS3::VM::exec_getlex(Scaleform::GFx::AS3::VMFile & file, const Scaleform::GFx::AS3::Abc::Multiname & mn, const Scaleform::GFx::AS3::VSBase & ss); // 0x1404BA040
void Scaleform::GFx::AS3::VM::exec_getproperty(const unsigned long long * cp, Scaleform::GFx::AS3::VMFile & file, const Scaleform::GFx::AS3::Abc::Multiname & mn, unsigned long long _2, unsigned long long _3, unsigned long long _4, unsigned long long _5); // 0x1404BAC00
void Scaleform::GFx::AS3::VM::exec_initproperty(Scaleform::GFx::AS3::VMFile & file, const Scaleform::GFx::AS3::Abc::Multiname & mn); // 0x1404BC4D0
void Scaleform::GFx::AS3::VM::exec_deleteproperty(Scaleform::GFx::AS3::VMFile & file, const Scaleform::GFx::AS3::Abc::Multiname & mn); // 0x1404B8A40
void Scaleform::GFx::AS3::VM::exec_getslot(unsigned long slot_index); // 0x1404BB560
void Scaleform::GFx::AS3::VM::exec_setabsslot(unsigned long long slot_ind); // 0x1404BFC50
void Scaleform::GFx::AS3::VM::exec_initabsslot(unsigned long long slot_ind); // 0x1404BC3A0
void Scaleform::GFx::AS3::VM::exec_setslot(unsigned long slot_index); // 0x1404C0700
void Scaleform::GFx::AS3::VM::exec_coerce(unsigned long long ctr_val, unsigned long long ind); // 0x1404B73A0
void Scaleform::GFx::AS3::VM::exec_newobject(unsigned long arg_count); // 0x1404BD670
void Scaleform::GFx::AS3::VM::exec_newclass(Scaleform::GFx::AS3::VMAbcFile & file, unsigned long v); // 0x1404BD0D0
void Scaleform::GFx::AS3::VM::exec_astype(unsigned long long ind); // 0x1404B4900
void Scaleform::GFx::AS3::VM::exec_instanceof(); // 0x1404BC640
void Scaleform::GFx::AS3::VM::exec_istype(unsigned long long ind); // 0x1404BCA10
void Scaleform::GFx::AS3::VM::exec_astypelate(); // 0x1404B4990
void Scaleform::GFx::AS3::VM::exec_newarray(unsigned long arr_size); // 0x1404BCDA0
void Scaleform::GFx::AS3::VM::exec_hasnext2(unsigned long object_reg, unsigned long long index_reg); // 0x1404BB8C0
void Scaleform::GFx::AS3::VM::exec_applytype(unsigned long arg_count); // 0x1404B45E0
void Scaleform::GFx::AS3::VM::ExecuteInternal(const Scaleform::GFx::AS3::Value & func, const Scaleform::GFx::AS3::Value & _this, Scaleform::GFx::AS3::Value & result, unsigned long & argc, Scaleform::GFx::AS3::Value * argv, bool result_on_stack, bool extCall); // 0x14047A800
void Scaleform::GFx::AS3::VM::ExecuteVTableInd(unsigned long ind, const Scaleform::GFx::AS3::Traits & tr, Scaleform::GFx::AS3::ReadArgsThisRef & args, unsigned long long abc_argc); // 0x14047C780
void Scaleform::GFx::AS3::VM::ExecuteThunk(const Scaleform::GFx::AS3::ThunkInfo & thunk, const Scaleform::GFx::AS3::Value & _this, Scaleform::GFx::AS3::Value & result, unsigned long & argc, Scaleform::GFx::AS3::Value * argv, bool extCall); // 0x14047B980
void Scaleform::GFx::AS3::VM::ExecuteThunkResolved(const Scaleform::GFx::AS3::ThunkInfo & thunk, Scaleform::GFx::AS3::ReadArgsThisRef & args, bool extCall); // 0x14047C680
void Scaleform::GFx::AS3::VM::ExecuteMethodInd(const Scaleform::GFx::AS3::Value & func, const Scaleform::GFx::AS3::Value & real_func, const Scaleform::GFx::AS3::Value & _this, Scaleform::GFx::AS3::Value & result, unsigned long & argc, Scaleform::GFx::AS3::Value * argv, bool extCall); // 0x14047AD10
Scaleform::GFx::AS3::ClassTraits::UserDefined & Scaleform::GFx::AS3::VM::GetUserDefinedTraits(Scaleform::GFx::AS3::VMFile & file, unsigned long mn_ind); // 0x14048BED0
void Scaleform::GFx::AS3::VM::OutputError(const Scaleform::GFx::AS3::Value & e); // 0x140499690
Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace> Scaleform::GFx::AS3::VM::MakeNamespace(Scaleform::GFx::AS3::Abc::NamespaceKind kind, const Scaleform::GFx::ASString & uri, const Scaleform::GFx::AS3::Value & prefix); // 0x140491DF0
Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace> Scaleform::GFx::AS3::VM::MakeInternedNamespace(Scaleform::GFx::AS3::Abc::NamespaceKind kind, const Scaleform::GFx::ASString & uri); // 0x1404918A0
Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace> Scaleform::GFx::AS3::VM::MakeInternedNamespace(Scaleform::GFx::AS3::Abc::NamespaceKind kind, const char * name); // 0x1404919F0
Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> Scaleform::GFx::AS3::VM::LoadFile(const Scaleform::Ptr<Scaleform::GFx::AS3::Abc::File> & file, Scaleform::GFx::AS3::VMAppDomain & appDomain, bool to_execute); // 0x140490A40
Scaleform::GFx::AS3::Class * Scaleform::GFx::AS3::VM::GetClass(const Scaleform::StringDataPtr & gname, Scaleform::GFx::AS3::VMAppDomain & appDomain); // 0x140483D20
bool Scaleform::GFx::AS3::VM::GetClassUnsafe(const Scaleform::StringDataPtr & gname, Scaleform::GFx::AS3::VMAppDomain & appDomain, Scaleform::GFx::AS3::Value & result); // 0x1404843F0
bool Scaleform::GFx::AS3::VM::Construct(const char * gname, Scaleform::GFx::AS3::VMAppDomain & appDomain, Scaleform::GFx::AS3::Value & result, unsigned long & argc, Scaleform::GFx::AS3::Value * argv); // 0x140467320
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::VM::constructBuiltinObject(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> & pobj, const char * gname, unsigned long argc, Scaleform::GFx::AS3::Value * argv); // 0x1404B4170
Scaleform::GFx::AS3::Traits & Scaleform::GFx::AS3::VM::GetValueTraits(const Scaleform::GFx::AS3::Value & v); // 0x14048C150
const Scaleform::GFx::AS3::ClassTraits::Traits & Scaleform::GFx::AS3::VM::GetClassTraits(const Scaleform::GFx::AS3::Value & v); // 0x140484270
Scaleform::GFx::AS3::InstanceTraits::Traits & Scaleform::GFx::AS3::VM::GetInstanceTraits(const Scaleform::GFx::AS3::Value & v); // 0x1404866E0
Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript * Scaleform::GFx::AS3::VM::GetGlobalObject(); // 0x140486640
Scaleform::GFx::AS3::Value Scaleform::GFx::AS3::VM::GetDefaultValue(const Scaleform::GFx::AS3::ClassTraits::Traits & ctr); // 0x140484FF0
Scaleform::GFx::AS3::InstanceTraits::Traits * Scaleform::GFx::AS3::VM::GetFunctReturnType(const Scaleform::GFx::AS3::ThunkInfo & thunk); // 0x140486020
Scaleform::GFx::AS3::InstanceTraits::Traits * Scaleform::GFx::AS3::VM::GetFunctReturnType(const Scaleform::GFx::AS3::Value & value); // 0x140486100
const Scaleform::GFx::AS3::Traits * Scaleform::GFx::AS3::VM::GetFunctReturnType(const Scaleform::GFx::AS3::TR::Type * t); // 0x1404862D0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::VM::ConstructBuiltinValue(Scaleform::GFx::AS3::Value & v, const Scaleform::GFx::AS3::TypeInfo & ti, unsigned long argc, Scaleform::GFx::AS3::Value * argv); // 0x140467500
void Scaleform::GFx::AS3::VM::GetStackTraceASString(Scaleform::GFx::ASString & result, const char * line_pref); // 0x14048AE10
void Scaleform::GFx::AS3::VM::GetCodeFileName(Scaleform::GFx::ASString & result); // 0x140484510
Scaleform::GFx::ASString Scaleform::GFx::AS3::VM::describeTypeEx(const Scaleform::GFx::AS3::Value & value); // 0x1404B4310
Scaleform::GFx::ASString Scaleform::GFx::AS3::VM::GetTypeOf(const Scaleform::GFx::AS3::Value & v); // 0x14048BCA0
Scaleform::GFx::AS3::Classes::fl::Boolean & Scaleform::GFx::AS3::VM::GetClassBoolean(); // 0x140483FC0
Scaleform::GFx::AS3::Classes::fl::Number & Scaleform::GFx::AS3::VM::GetClassNumber(); // 0x140484050
Scaleform::GFx::AS3::Classes::fl::int_ & Scaleform::GFx::AS3::VM::GetClassSInt(); // 0x140484110
Scaleform::GFx::AS3::Classes::fl::uint & Scaleform::GFx::AS3::VM::GetClassUInt(); // 0x1404843B0
Scaleform::GFx::AS3::Classes::fl::String & Scaleform::GFx::AS3::VM::GetClassString(); // 0x140484150
Scaleform::GFx::AS3::Classes::fl::Array & Scaleform::GFx::AS3::VM::GetClassArray(); // 0x140483F80
Scaleform::GFx::AS3::Classes::fl::QName & Scaleform::GFx::AS3::VM::GetClassQName(); // 0x1404840D0
Scaleform::GFx::AS3::Classes::fl_vec::Vector & Scaleform::GFx::AS3::VM::GetClassVector(); // 0x140484490
Scaleform::GFx::AS3::Classes::fl_vec::Vector_double & Scaleform::GFx::AS3::VM::GetClassVectorNumber(); // 0x1404844D0
Scaleform::GFx::AS3::InstanceTraits::Traits & Scaleform::GFx::AS3::VM::GetITraitsVectorString(); // 0x1404866B0
Scaleform::GFx::AS3::InstanceTraits::Traits & Scaleform::GFx::AS3::VM::GetITraitsApplicationDomain(); // 0x1404866A0
void Scaleform::GFx::AS3::VM::ThrowErrorInternal(const Scaleform::GFx::AS3::VM::Error & e, const Scaleform::GFx::AS3::TypeInfo & ti); // 0x1404AF2E0
void Scaleform::GFx::AS3::VM::ThrowError(const Scaleform::GFx::AS3::VM::Error & e); // 0x1404AF2D0
void Scaleform::GFx::AS3::VM::ThrowEvalError(const Scaleform::GFx::AS3::VM::Error & e); // 0x1404AF690
void Scaleform::GFx::AS3::VM::ThrowRangeError(const Scaleform::GFx::AS3::VM::Error & e); // 0x1404AF6A0
void Scaleform::GFx::AS3::VM::ThrowReferenceError(const Scaleform::GFx::AS3::VM::Error & e); // 0x1404AF6B0
void Scaleform::GFx::AS3::VM::ThrowSecurityError(const Scaleform::GFx::AS3::VM::Error & e); // 0x1404AF6C0
void Scaleform::GFx::AS3::VM::ThrowTypeError(const Scaleform::GFx::AS3::VM::Error & e); // 0x1404AF6D0
void Scaleform::GFx::AS3::VM::ThrowURIError(const Scaleform::GFx::AS3::VM::Error & e); // 0x1404AF6E0
void Scaleform::GFx::AS3::VM::ThrowVerifyError(const Scaleform::GFx::AS3::VM::Error & e); // 0x1404AF6F0
void Scaleform::GFx::AS3::VM::ThrowArgumentError(const Scaleform::GFx::AS3::VM::Error & e); // 0x1404AF2C0
Scaleform::GFx::AS3::VM::Error::Error(Scaleform::GFx::AS3::VM::ErrorID id, Scaleform::GFx::AS3::VM & vm); // 0x14044EC20
void Scaleform::GFx::AS3::ThunkInfo::EmptyFunc(const Scaleform::GFx::AS3::ThunkInfo & ti, Scaleform::GFx::AS3::VM & vm, const Scaleform::GFx::AS3::Value & _this, Scaleform::GFx::AS3::Value & result, unsigned long argc, Scaleform::GFx::AS3::Value * argv); // 0x140475930
Scaleform::GFx::ASString Scaleform::GFx::AS3::ThunkInfo::GetQualifiedName(Scaleform::GFx::AS3::StringManager & sm, Scaleform::GFx::AS3::QNameFormat f); // 0x1404890C0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::SetProperty(Scaleform::GFx::AS3::VM & vm, const Scaleform::GFx::AS3::Value & _this, const Scaleform::GFx::AS3::Multiname & prop_name, const Scaleform::GFx::AS3::Value & value); // 0x1404A8DE0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::GetPropertyUnsafe(Scaleform::GFx::AS3::VM & vm, const Scaleform::GFx::AS3::Value & _this, const Scaleform::GFx::AS3::Multiname & prop_name, Scaleform::GFx::AS3::Value & value); // 0x140488E80
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::Object::SetProperty(const Scaleform::GFx::AS3::Multiname & prop_name, const Scaleform::GFx::AS3::Value & value); // 0x1404A8FE0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::Object::GetProperty(const Scaleform::GFx::AS3::Multiname & prop_name, Scaleform::GFx::AS3::Value & value); // 0x1404888B0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::Object::GetDynamicProperty(Scaleform::GFx::AS3::AbsoluteIndex ind, Scaleform::GFx::AS3::Value & value); // 0x140485C40
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::Object::DeleteProperty(const Scaleform::GFx::AS3::Multiname & prop_name); // 0x14046BDB0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::ReadType(Scaleform::GFx::AS3::VMAbcFile & file, const unsigned char * & offset, const Scaleform::GFx::AS3::ClassTraits::Traits * & ctr); // 0x1404A04E0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::ReadReturnType(Scaleform::GFx::AS3::VMAbcFile & file, Scaleform::GFx::AS3::Abc::MiInd mi_ind, const Scaleform::GFx::AS3::ClassTraits::Traits * & ctr); // 0x1404A0400