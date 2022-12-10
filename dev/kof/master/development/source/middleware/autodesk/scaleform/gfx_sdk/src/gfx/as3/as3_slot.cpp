
Scaleform::GFx::AS3::SlotInfo::SlotInfo(const Scaleform::GFx::AS3::SlotInfo & other); // 0x1404511D0
Scaleform::GFx::AS3::SlotInfo::~SlotInfo(); // 0x1404554C0
Scaleform::GFx::AS3::SlotInfo & Scaleform::GFx::AS3::SlotInfo::operator=(const Scaleform::GFx::AS3::SlotInfo & other); // 0x140456F50
bool Scaleform::GFx::AS3::SlotInfo::IsConst(); // 0x14048FAB0
bool Scaleform::GFx::AS3::SlotInfo::IsClass(); // 0x14048F820
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::SlotInfo::GetSlotValueUnsafe(Scaleform::GFx::AS3::VM & vm, Scaleform::GFx::AS3::Value & value, const Scaleform::GFx::AS3::Value & _this, const Scaleform::GFx::AS3::VTable * vt, Scaleform::GFx::AS3::SlotInfo::ValTarget vtt); // 0x14048A2B0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::SlotInfo::GetSlotValue(Scaleform::GFx::AS3::Value & value, Scaleform::GFx::AS3::Object * obj); // 0x140489CD0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::SlotInfo::GetSlotValueUnsafe(Scaleform::GFx::AS3::Value & value, Scaleform::GFx::AS3::Object * obj); // 0x14048A8A0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::SlotInfo::SetSlotValue(Scaleform::GFx::AS3::VM & vm, const Scaleform::GFx::AS3::Value & v, const Scaleform::GFx::AS3::Value & _this, const Scaleform::GFx::AS3::VTable * vt); // 0x1404A9560
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::SlotInfo::SetSlotValue(Scaleform::GFx::AS3::VM & vm, const Scaleform::GFx::AS3::Value & v, Scaleform::GFx::AS3::Object * obj); // 0x1404A9DA0
void Scaleform::GFx::AS3::SlotInfo::CopyPrimitiveMember(Scaleform::GFx::AS3::Object * from, Scaleform::GFx::AS3::Object * to); // 0x1404694E0
void Scaleform::GFx::AS3::SlotInfo::ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> * prcc, const Scaleform::GFx::AS3::Object & obj, void(*op)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *)); // 0x1404800C0
const Scaleform::GFx::AS3::ClassTraits::Traits * Scaleform::GFx::AS3::SlotInfo::GetDataType(Scaleform::GFx::AS3::VM & vm); // 0x140484D60
bool Scaleform::GFx::AS3::SlotInfo::IsClassType(); // 0x14048F960