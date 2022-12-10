
void Scaleform::GFx::AS3::InstanceTraits::Traits::MakeObject(Scaleform::GFx::AS3::Value & result, Scaleform::GFx::AS3::InstanceTraits::Traits & t); // 0x140492D90
void Scaleform::GFx::AS3::InstanceTraits::Traits::AS3Constructor(const Scaleform::GFx::AS3::Value & _this, unsigned long & argc, Scaleform::GFx::AS3::Value * argv, bool strictCall); // 0x140458DF0
Scaleform::GFx::ASString Scaleform::GFx::AS3::InstanceTraits::Traits::GetQualifiedName(Scaleform::GFx::AS3::QNameFormat f); // 0x140489240
bool Scaleform::GFx::AS3::InstanceTraits::Traits::SupportsInterface(const Scaleform::GFx::AS3::InstanceTraits::Traits & itraits); // 0x1404AEC80
Scaleform::GFx::AS3::InstanceTraits::CTraits::CTraits(Scaleform::GFx::AS3::VM & vm, const Scaleform::GFx::AS3::ClassInfo & ci); // 0x14044E570
Scaleform::GFx::AS3::InstanceTraits::CTraits::~CTraits(); // 0x1404543E0
Scaleform::GFx::ASString Scaleform::GFx::AS3::InstanceTraits::CTraits::GetName(); // 0x140487260
void Scaleform::GFx::AS3::InstanceTraits::CTraits::ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> * prcc, void(*op)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *)); // 0x14047FDA0
void Scaleform::GFx::AS3::InstanceTraits::CTraits::AddInterfaceSlots2This(Scaleform::GFx::AS3::VMAbcFile * file_ptr, Scaleform::GFx::AS3::InstanceTraits::Traits & This); // 0x14045D120
Scaleform::GFx::AS3::InstanceTraits::RTraits::RTraits(Scaleform::GFx::AS3::VM & vm, const Scaleform::GFx::ASString & n, Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace> ns, const Scaleform::GFx::AS3::InstanceTraits::Traits * pt, bool isDynamic, bool isFinal); // 0x140450D20
Scaleform::GFx::AS3::InstanceTraits::RTraits::~RTraits(); // 0x140455140
void Scaleform::GFx::AS3::InstanceTraits::RTraits::MakeObject(Scaleform::GFx::AS3::Value & result, Scaleform::GFx::AS3::InstanceTraits::Traits & t); // 0x140492D60
unsigned long Scaleform::GFx::AS3::InstanceTraits::RTraits::GetFixedMemSize(); // 0x140485F90
Scaleform::GFx::ASString Scaleform::GFx::AS3::InstanceTraits::RTraits::GetName(); // 0x1404872D0
Scaleform::GFx::AS3::Instance::Instance(Scaleform::GFx::AS3::InstanceTraits::Traits & t); // 0x14044EE60
Scaleform::GFx::AS3::Instance::~Instance(); // 0x1404548B0
void Scaleform::GFx::AS3::Instance::Construct(Scaleform::GFx::AS3::Value & __formal, unsigned long & __formal, Scaleform::GFx::AS3::Value * __formal, bool __formal, bool __formal); // 0x1404672D0
void Scaleform::GFx::AS3::Instance::Destroy(); // 0x1404715C0