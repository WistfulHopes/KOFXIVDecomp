
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::Slots::ForEachSlot(Scaleform::GFx::AS3::Slots::SlotFunct & f); // 0x140480A50
void Scaleform::GFx::AS3::Slots::SetKey(Scaleform::GFx::AS3::AbsoluteIndex ind, const Scaleform::GFx::ASString & k); // 0x1404A8400
Scaleform::GFx::AS3::AbsoluteIndex Scaleform::GFx::AS3::Slots::Add(const Scaleform::GFx::ASString & k, const Scaleform::GFx::AS3::SlotInfo & v); // 0x14045BC00
Scaleform::GFx::AS3::AbsoluteIndex Scaleform::GFx::AS3::Slots::FindSlotInfoIndex(const Scaleform::GFx::ASString & name, const Scaleform::GFx::AS3::Instances::fl::Namespace & ns); // 0x14047F1C0
Scaleform::GFx::AS3::Traits::Traits(Scaleform::GFx::AS3::VM & _vm, const Scaleform::GFx::AS3::Traits * pt, bool isDynamic, bool isFinal); // 0x140451740
Scaleform::GFx::AS3::Traits::~Traits(); // 0x1404556C0
struct Scaleform::GFx::AS3::IsTmpBitF
{
	IsTmpBitF();
	bool operator()(const Scaleform::GFx::AS3::Traits &);
	const Scaleform::GFx::AS3::Traits * Tr; // 0x0
};
const Scaleform::GFx::AS3::Traits * Scaleform::GFx::AS3::Traits::IsTmpBitR(); // 0x1404906A0
struct Scaleform::GFx::AS3::SetTmpBitF
{
	SetTmpBitF(bool);
	Scaleform::GFx::AS3::SetTmpBitF & operator=(const Scaleform::GFx::AS3::SetTmpBitF &);
	bool operator()(const Scaleform::GFx::AS3::Traits &);
	const bool Flag; // 0x0
};
void Scaleform::GFx::AS3::Traits::SetTmpBitR(bool flag); // 0x1404AAD90
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::InstanceTraits::Traits::PreInit(const Scaleform::GFx::AS3::Value & _this); // 0x14049AF90
void * Scaleform::GFx::AS3::Traits::Alloc(); // 0x140460660
struct Scaleform::GFx::AS3::VarInfo
{
	VarInfo();
	unsigned long _1; // 0x0
	unsigned long _4; // 0x4
	unsigned long _8; // 0x8
	unsigned long _value; // 0xC
};
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::Traits::SetupSlotValues(Scaleform::GFx::AS3::VMAbcFile & file, const Scaleform::GFx::AS3::Abc::HasTraits & tr, Scaleform::GFx::AS3::Object & for_obj); // 0x1404ACD80
void Scaleform::GFx::AS3::Traits::ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> * prcc, void(*op)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *)); // 0x140480220
Scaleform::GFx::AS3::SlotInfo::BindingType Scaleform::GFx::AS3::Traits::GetBindingType(Scaleform::GFx::AS3::VMAbcFile & file, const Scaleform::GFx::AS3::Abc::Multiname & mn); // 0x140483850
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::Traits::AddSlotsWithID(const Scaleform::GFx::AS3::Abc::HasTraits & traits, Scaleform::GFx::AS3::VMAbcFile & file); // 0x14045EE10
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::Traits::AddSlotsWithoutID(const Scaleform::GFx::AS3::Abc::HasTraits & traits, Scaleform::GFx::AS3::VMAbcFile & file, bool members); // 0x14045F050
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::Traits::AddSlots(const Scaleform::GFx::AS3::Abc::HasTraits & traits, Scaleform::GFx::AS3::VMAbcFile & file, unsigned long parent_size); // 0x14045ED70
void Scaleform::GFx::AS3::Traits::Add2VT(Scaleform::GFx::AS3::SlotInfo & si, const Scaleform::GFx::AS3::Value & v, Scaleform::GFx::AS3::SlotInfo::BindingType new_bt); // 0x14045A840
void Scaleform::GFx::AS3::Traits::UpdateVT(const Scaleform::GFx::AS3::SlotInfo & si, const Scaleform::GFx::AS3::Value & v, Scaleform::GFx::AS3::SlotInfo::BindingType new_bt); // 0x1404B11F0
void Scaleform::GFx::AS3::Traits::CalculateMemSize(unsigned long parent_size); // 0x140463DF0
class Scaleform::ArrayDH_POD<Scaleform::GFx::AS3::AbsoluteIndex,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayDataDH<Scaleform::GFx::AS3::AbsoluteIndex,Scaleform::AllocatorDH_POD<Scaleform::GFx::AS3::AbsoluteIndex,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayDH_POD<Scaleform::GFx::AS3::AbsoluteIndex,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDH_POD<Scaleform::GFx::AS3::AbsoluteIndex,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayDH_POD<Scaleform::GFx::AS3::AbsoluteIndex,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, const Scaleform::ArrayDefaultPolicy &);
	ArrayDH_POD<Scaleform::GFx::AS3::AbsoluteIndex,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, long);
	ArrayDH_POD<Scaleform::GFx::AS3::AbsoluteIndex,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *);
	const Scaleform::ArrayDH_POD<Scaleform::GFx::AS3::AbsoluteIndex,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayDH_POD<Scaleform::GFx::AS3::AbsoluteIndex,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayDH_POD<Scaleform::GFx::AS3::AbsoluteIndex,2,Scaleform::ArrayDefaultPolicy>();
};
const Scaleform::GFx::AS3::ClassTraits::Traits * Scaleform::GFx::AS3::Traits::RetrieveParentClassTraits(Scaleform::GFx::AS3::VM & vm, const Scaleform::GFx::AS3::ClassInfo & ci, Scaleform::GFx::AS3::VMAppDomain & appDomain); // 0x1404A4F20
void Scaleform::GFx::AS3::Traits::Add2StoredScopeStack(const Scaleform::GFx::AS3::Value & o); // 0x14045A7C0
void Scaleform::GFx::AS3::Traits::StoreScopeStack(const Scaleform::GFx::AS3::VSBase & ss, unsigned short plusNum); // 0x1404AD630
Scaleform::GFx::AS3::SlotInfo & Scaleform::GFx::AS3::Traits::AddSetSlot(Scaleform::GFx::AS3::RelativeIndex ind, const Scaleform::GFx::ASString & name, Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace const > ns, Scaleform::GFx::AS3::VMAbcFile & file, const unsigned char * tiOffset, bool _const); // 0x14045E640
void Scaleform::GFx::AS3::Traits::AddSlot(const Scaleform::GFx::ASString & name, Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace const > ns, Scaleform::GFx::AS3::SlotInfo::BindingType dt, Scaleform::GFx::AS3::AbsoluteIndex offset, bool const_); // 0x14045E910
Scaleform::GFx::AS3::AbsoluteIndex Scaleform::GFx::AS3::Traits::AddSlot(const Scaleform::GFx::ASString & name, Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace const > ns, Scaleform::GFx::AS3::VMAbcFile & file, const unsigned char * tiOffset, bool const_); // 0x14045E830
void Scaleform::GFx::AS3::Traits::AddSlotCPP(const Scaleform::GFx::ASString & name, Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace const > ns, const Scaleform::GFx::AS3::ClassTraits::Traits * tr, Scaleform::GFx::AS3::SlotInfo::BindingType dt, Scaleform::GFx::AS3::AbsoluteIndex offset, bool const_); // 0x14045EC60
void Scaleform::GFx::AS3::Traits::AddSlot(const Scaleform::GFx::AS3::MemberInfo & mi); // 0x14045EA10
void Scaleform::GFx::AS3::Traits::Add2VT(const Scaleform::GFx::AS3::ClassInfo & ci, const Scaleform::GFx::AS3::ThunkInfo & func); // 0x14045A940
void Scaleform::GFx::AS3::Traits::UpdateVT4IM(const Scaleform::GFx::ASString & mn_name, const Scaleform::GFx::AS3::Instances::fl::Namespace & mn_ns, const Scaleform::GFx::AS3::Value & v, Scaleform::GFx::AS3::SlotInfo::BindingType bt); // 0x1404B1110
Scaleform::GFx::AS3::VMAppDomain & Scaleform::GFx::AS3::Traits::GetAppDomain(); // 0x140483640
void Scaleform::GFx::AS3::Traits::DestructTail(Scaleform::GFx::AS3::Object & obj); // 0x140471880
void Scaleform::GFx::AS3::Traits::ConstructTail(Scaleform::GFx::AS3::Object & obj); // 0x140467780
void Scaleform::GFx::AS3::Traits::ForEachChild_GC_Slot(Scaleform::GFx::AS3::RefCountCollector<328> * prcc, const Scaleform::GFx::AS3::Object & obj, void(*op)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *)); // 0x1404808A0
bool Scaleform::GFx::AS3::Traits::IsParentTypeOf(const Scaleform::GFx::AS3::Traits & other); // 0x1404901D0
struct Scaleform::GFx::AS3::ThunkFunc0<Scaleform::GFx::AS3::Class,1550,Scaleform::GFx::AS3::Value>
{
	typedef void(*TMethod)(Scaleform::GFx::AS3::Value &);
	static void Func(const Scaleform::GFx::AS3::ThunkInfo &, Scaleform::GFx::AS3::VM &, const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::Value &, unsigned long, Scaleform::GFx::AS3::Value *);
	static void(*Method)(Scaleform::GFx::AS3::Value &); // 0xFFFFFFFFFFFFFFFF
};
struct Scaleform::GFx::AS3::ThunkFunc0<Scaleform::GFx::AS3::Class,1551,long>
{
	typedef void(*TMethod)(long &);
	static void Func(const Scaleform::GFx::AS3::ThunkInfo &, Scaleform::GFx::AS3::VM &, const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::Value &, unsigned long, Scaleform::GFx::AS3::Value *);
	static void(*Method)(long &); // 0xFFFFFFFFFFFFFFFF
};
struct Scaleform::GFx::AS3::ThunkFunc0<Scaleform::GFx::AS3::Class,1552,Scaleform::GFx::ASString>
{
	typedef void(*TMethod)(Scaleform::GFx::ASString &);
	static void Func(const Scaleform::GFx::AS3::ThunkInfo &, Scaleform::GFx::AS3::VM &, const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::Value &, unsigned long, Scaleform::GFx::AS3::Value *);
	static void(*Method)(Scaleform::GFx::ASString &); // 0xFFFFFFFFFFFFFFFF
};
Scaleform::GFx::AS3::ClassTraits::Traits::Traits(Scaleform::GFx::AS3::VM & vm, const Scaleform::GFx::AS3::ClassInfo & ci); // 0x140451930
Scaleform::GFx::AS3::ClassTraits::Traits::Traits(Scaleform::GFx::AS3::VM & vm, const Scaleform::GFx::AS3::ClassTraits::Traits * pt); // 0x140451AC0
Scaleform::GFx::AS3::ClassTraits::Traits::Traits(Scaleform::GFx::AS3::VM & vm); // 0x140451890
void Scaleform::GFx::AS3::ClassTraits::Traits::SetInstanceTraits(Scaleform::Pickable<Scaleform::GFx::AS3::InstanceTraits::Traits> itr); // 0x1404A8380
void Scaleform::GFx::AS3::ClassTraits::Traits::InitOnDemand(); // 0x14048E080
void Scaleform::GFx::AS3::ClassTraits::Traits::ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> * prcc, void(*op)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *)); // 0x1404802A0
void Scaleform::GFx::AS3::ClassTraits::Traits::RegisterSlots(); // 0x1404A0D70
bool Scaleform::GFx::AS3::ClassTraits::Traits::Coerce(const Scaleform::GFx::AS3::Value & value, Scaleform::GFx::AS3::Value & result); // 0x1404662F0
bool Scaleform::GFx::AS3::ClassTraits::Traits::CoerceValue(const Scaleform::GFx::AS3::Value & value, Scaleform::GFx::AS3::Value & result); // 0x140466700
Scaleform::GFx::ASString Scaleform::GFx::AS3::ClassTraits::Traits::GetName(); // 0x1404872F0
Scaleform::GFx::ASString Scaleform::GFx::AS3::ClassTraits::Traits::GetQualifiedName(Scaleform::GFx::AS3::QNameFormat qf); // 0x140489220