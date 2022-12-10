
const Scaleform::GFx::AS3::ClassTraits::Traits * Scaleform::GFx::AS3::FindGOTraits(Scaleform::GFx::AS3::VM & vm, const Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl::GlobalObject *,2,Scaleform::ArrayDefaultPolicy> & go, const Scaleform::GFx::AS3::Multiname & mn, Scaleform::GFx::AS3::VMAppDomain & appDomain); // 0x14047DB00
void Scaleform::GFx::AS3::Value::AddRefInternal(); // 0x14045E580
void Scaleform::GFx::AS3::Value::AddRefWeakRef(); // 0x14045E5C0
void Scaleform::GFx::AS3::Value::ReleaseWeakRef(); // 0x1404A16B0
void Scaleform::GFx::AS3::Value::ReleaseInternal(); // 0x1404A14D0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::Value::Convert2PrimitiveValueUnsafe(Scaleform::GFx::ASStringManager & sm, Scaleform::GFx::AS3::Value & result, Scaleform::GFx::AS3::Value::Hint hint); // 0x140468340
Scaleform::Pickable<Scaleform::GFx::AS3::WeakProxy> Scaleform::GFx::AS3::GASRefCountBase::CreateWeakProxy(); // 0x14046BB50
void Scaleform::GFx::AS3::NamespaceSet::ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> * prcc, void(*op)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *)); // 0x14047FED0
void Scaleform::GFx::AS3::FindScopeProperty(Scaleform::GFx::AS3::PropRef & result, Scaleform::GFx::AS3::VM & vm, const Scaleform::GFx::AS3::VSBase & scope_stack, const Scaleform::GFx::AS3::Multiname & mn); // 0x14047EFE0
void Scaleform::GFx::AS3::FindGOProperty(Scaleform::GFx::AS3::PropRef & result, Scaleform::GFx::AS3::VM & vm, const Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl::GlobalObject *,2,Scaleform::ArrayDefaultPolicy> & go, const Scaleform::GFx::AS3::Multiname & mn, const Scaleform::GFx::AS3::ClassTraits::Traits * ctr); // 0x14047D9E0
const Scaleform::GFx::AS3::SlotInfo * Scaleform::GFx::AS3::FindFixedSlot(const Scaleform::GFx::AS3::Traits & t, const Scaleform::GFx::ASString & name, const Scaleform::GFx::AS3::Instances::fl::Namespace & ns, Scaleform::GFx::AS3::AbsoluteIndex & index, Scaleform::GFx::AS3::Object * obj); // 0x14047D4B0
const Scaleform::GFx::AS3::ClassTraits::Traits * Scaleform::GFx::AS3::FindClassTraits(Scaleform::GFx::AS3::VM & vm, const Scaleform::GFx::AS3::Multiname & mn, Scaleform::GFx::AS3::VMAppDomain & appDomain); // 0x14047CE10
const Scaleform::GFx::AS3::SlotInfo * Scaleform::GFx::AS3::FindFixedSlot(Scaleform::GFx::AS3::VM & vm, const Scaleform::GFx::AS3::Traits & t, const Scaleform::GFx::AS3::Multiname & mn, Scaleform::GFx::AS3::AbsoluteIndex & index, Scaleform::GFx::AS3::Object * obj); // 0x14047D280
const Scaleform::GFx::AS3::ClassTraits::Traits * Scaleform::GFx::AS3::FindFixedTraits(Scaleform::GFx::AS3::VM & vm, const Scaleform::GFx::AS3::Traits & t, const Scaleform::GFx::AS3::Multiname & mn, Scaleform::GFx::AS3::VMAppDomain & appDomain); // 0x14047D5F0
void Scaleform::GFx::AS3::FindObjProperty(Scaleform::GFx::AS3::PropRef & result, Scaleform::GFx::AS3::VM & vm, const Scaleform::GFx::AS3::Value & scope, const Scaleform::GFx::AS3::Multiname & mn, Scaleform::GFx::AS3::FindPropAttr attr); // 0x14047E200
void Scaleform::GFx::AS3::FindObjDynProperty(Scaleform::GFx::AS3::PropRef & result, Scaleform::GFx::AS3::VM & vm, Scaleform::GFx::AS3::Object * obj, const Scaleform::GFx::AS3::Traits & tr, const Scaleform::GFx::AS3::Multiname & mn, Scaleform::GFx::AS3::FindPropAttr attr); // 0x14047E040
void Scaleform::GFx::AS3::FindPropertyWith(Scaleform::GFx::AS3::PropRef & result, Scaleform::GFx::AS3::VM & vm, const Scaleform::GFx::AS3::Value & scope, const Scaleform::GFx::AS3::Multiname & mn, Scaleform::GFx::AS3::FindPropAttr attr); // 0x14047EBD0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::ExecutePropertyUnsafe(Scaleform::GFx::AS3::VM & vm, const Scaleform::GFx::AS3::Multiname & prop_name, const Scaleform::GFx::AS3::Value & _this, Scaleform::GFx::AS3::Value & result, unsigned long argc, Scaleform::GFx::AS3::Value * argv); // 0x14047AFE0
Scaleform::GFx::AS3::Object::~Object(); // 0x140454FA0
void Scaleform::GFx::AS3::Object::ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> * prcc, void(*op)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *)); // 0x14047FF40
bool Scaleform::GFx::AS3::Object::HasProperty(const Scaleform::GFx::AS3::Multiname & prop_name, bool check_prototype); // 0x14048D060
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::Object::GetDefaultValueUnsafe(Scaleform::GFx::AS3::Value & result, Scaleform::GFx::AS3::Value::Hint hint); // 0x140485140
void Scaleform::GFx::AS3::Object::FindProperty(Scaleform::GFx::AS3::PropRef & result, const Scaleform::GFx::AS3::Multiname & mn, Scaleform::GFx::AS3::FindPropAttr attr); // 0x14047E9A0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::Object::ExecutePropertyUnsafe(const Scaleform::GFx::AS3::Multiname & prop_name, Scaleform::GFx::AS3::Value & result, unsigned long argc, Scaleform::GFx::AS3::Value * argv); // 0x14047B460
void Scaleform::GFx::AS3::Object::AddDynamicSlotValuePair(const Scaleform::GFx::ASString & prop_name, const Scaleform::GFx::AS3::Value & v, Scaleform::GFx::AS3::SlotInfo::Attribute a); // 0x14045CF60
void Scaleform::GFx::AS3::Object::AddDynamicSlotValuePair(const Scaleform::GFx::AS3::Value & prop_name, const Scaleform::GFx::AS3::Value & v, Scaleform::GFx::AS3::SlotInfo::Attribute a); // 0x14045D010
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::Object::DeleteDynamicSlotValuePair(const Scaleform::GFx::AS3::Multiname & mn); // 0x14046BD00
void Scaleform::GFx::AS3::Object::Call(const Scaleform::GFx::AS3::Value & _this, Scaleform::GFx::AS3::Value & result, unsigned long & argc, Scaleform::GFx::AS3::Value * argv, bool extCall); // 0x140464090
Scaleform::GFx::ASString Scaleform::GFx::AS3::Object::GetName(); // 0x1404872B0
Scaleform::GFx::ASString Scaleform::GFx::AS3::Object::GetQualifiedName(Scaleform::GFx::AS3::QNameFormat f); // 0x140325FA0
Scaleform::GFx::AS3::GlobalSlotIndex Scaleform::GFx::AS3::Object::GetNextDynPropIndex(Scaleform::GFx::AS3::GlobalSlotIndex ind); // 0x140487470
void Scaleform::GFx::AS3::Object::GetNextPropertyName(Scaleform::GFx::AS3::Value & name, Scaleform::GFx::AS3::GlobalSlotIndex ind); // 0x1404876D0
void Scaleform::GFx::AS3::Object::GetNextPropertyValue(Scaleform::GFx::AS3::Value & value, Scaleform::GFx::AS3::GlobalSlotIndex ind); // 0x140487710
const Scaleform::GFx::AS3::SlotInfo * Scaleform::GFx::AS3::Object::InitializeOnDemand(const Scaleform::GFx::AS3::SlotInfo * si, const Scaleform::GFx::ASString & __formal, const Scaleform::GFx::AS3::Instances::fl::Namespace & __formal, Scaleform::GFx::AS3::AbsoluteIndex & __formal); // 0x1406BB680
Scaleform::GFx::AS3::PropRef Scaleform::GFx::AS3::Object::FindDynamicSlot(const Scaleform::GFx::AS3::Multiname & mn); // 0x14047D010
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::GetSuperProperty(Scaleform::GFx::AS3::VM & vm, const Scaleform::GFx::AS3::Traits * ot, Scaleform::GFx::AS3::Value & result, const Scaleform::GFx::AS3::Value & _this, const Scaleform::GFx::AS3::Multiname & mn, Scaleform::GFx::AS3::SlotInfo::ValTarget vtt); // 0x14048AFB0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::SetSuperProperty(Scaleform::GFx::AS3::VM & vm, const Scaleform::GFx::AS3::Traits * ot, const Scaleform::GFx::AS3::Value & _this, const Scaleform::GFx::AS3::Multiname & mn, const Scaleform::GFx::AS3::Value & value); // 0x1404AA7F0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::PropRef::GetSlotValueUnsafe(Scaleform::GFx::AS3::VM & vm, Scaleform::GFx::AS3::Value & value, Scaleform::GFx::AS3::SlotInfo::ValTarget vtt); // 0x14048A200
Scaleform::GFx::AS3::Class::Class(Scaleform::GFx::AS3::ClassTraits::Traits & t); // 0x14044EB10
Scaleform::GFx::AS3::Class::~Class(); // 0x140454700
void Scaleform::GFx::AS3::Class::Construct(Scaleform::GFx::AS3::Value & _this, unsigned long & argc, Scaleform::GFx::AS3::Value * argv, bool extCall, bool strictCall); // 0x1404671E0
void Scaleform::GFx::AS3::Class::ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> * prcc, void(*op)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *)); // 0x14047FE80
void Scaleform::GFx::AS3::Class::InitPrototypeFromVTable(Scaleform::GFx::AS3::Object & obj, Scaleform::GFx::AS3::Value(*f)(const Scaleform::GFx::AS3::Value &, const Scaleform::GFx::AS3::Traits &)); // 0x14048E120
void Scaleform::GFx::AS3::Class::InitPrototypeFromVTableCheckType(Scaleform::GFx::AS3::Object & obj); // 0x14048E3A0
void Scaleform::GFx::AS3::Class::InitPrototype(Scaleform::GFx::AS3::Object & obj); // 0x14048E0A0
void Scaleform::GFx::AS3::Class::AddConstructor(Scaleform::GFx::AS3::Object & obj); // 0x14045C430
Scaleform::Pickable<Scaleform::GFx::AS3::Object> Scaleform::GFx::AS3::Class::MakePrototype(); // 0x140492F00
Scaleform::GFx::AS3::Value Scaleform::GFx::AS3::Class::ConvertCopy(const Scaleform::GFx::AS3::Value & v, const Scaleform::GFx::AS3::Traits & __formal); // 0x140469370
Scaleform::GFx::AS3::Value Scaleform::GFx::AS3::Class::ConvertCheckType(const Scaleform::GFx::AS3::Value & v, const Scaleform::GFx::AS3::Traits & ot); // 0x1404692D0
Scaleform::GFx::AS3::Object & Scaleform::GFx::AS3::Class::GetPrototype(); // 0x140489030
void Scaleform::GFx::AS3::Class::lengthGet(long & result); // 0x1404F3440
void Scaleform::GFx::AS3::Class::prototypeGet(Scaleform::GFx::AS3::Value & result); // 0x1404C1300
void Scaleform::GFx::AS3::Class::toString(Scaleform::GFx::ASString & result); // 0x1404C3690
void Scaleform::GFx::AS3::Class::Call(const Scaleform::GFx::AS3::Value & __formal, Scaleform::GFx::AS3::Value & result, unsigned long & argc, Scaleform::GFx::AS3::Value * argv, bool extCall); // 0x140464000
void Scaleform::GFx::AS3::ClassCallConstruct::Call(const Scaleform::GFx::AS3::Value & __formal, Scaleform::GFx::AS3::Value & result, unsigned long & argc, Scaleform::GFx::AS3::Value * argv, bool extCall); // 0x1404FD980
Scaleform::GFx::AS3::Value::Value(Scaleform::GFx::AS3::Object * v); // 0x140453190
void Scaleform::GFx::AS3::Value::Assign(Scaleform::GFx::AS3::Object * v); // 0x1404612E0
void Scaleform::GFx::AS3::Value::AssignUnsafe(Scaleform::GFx::AS3::Object * v); // 0x140461460
void Scaleform::GFx::AS3::Value::PickUnsafe(Scaleform::GFx::AS3::Object * v); // 0x14049AA40