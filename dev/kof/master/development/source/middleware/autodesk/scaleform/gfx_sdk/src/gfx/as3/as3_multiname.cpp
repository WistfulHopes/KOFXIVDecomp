
Scaleform::GFx::AS3::Multiname::Multiname(Scaleform::GFx::AS3::VM & vm); // 0x14044F790
Scaleform::GFx::AS3::Multiname::Multiname(Scaleform::GFx::AS3::VM & vm, const Scaleform::GFx::AS3::Value & v); // 0x14044F830
Scaleform::GFx::AS3::Multiname::Multiname(Scaleform::GFx::AS3::Instances::fl::Namespace & ns, const Scaleform::GFx::AS3::Value & name); // 0x14044F750
Scaleform::GFx::AS3::Multiname::Multiname(Scaleform::GFx::AS3::VMFile & file, const Scaleform::GFx::AS3::Abc::Multiname & mn); // 0x14044F9F0
Scaleform::GFx::AS3::Multiname::Multiname(const Scaleform::GFx::AS3::VM & vm, const Scaleform::StringDataPtr & qname); // 0x14044FC00
Scaleform::GFx::AS3::Multiname::Multiname(const Scaleform::GFx::AS3::VM & vm, const Scaleform::GFx::AS3::TypeInfo & ti); // 0x14044FAD0
bool Scaleform::GFx::AS3::Multiname::IsAnyType(); // 0x14048F6A0
bool Scaleform::GFx::AS3::Multiname::ContainsNamespace(const Scaleform::GFx::AS3::Instances::fl::Namespace & ns); // 0x140467850
void Scaleform::GFx::AS3::Multiname::PickRTName(Scaleform::GFx::AS3::VSBase & vs); // 0x14049A8D0
void Scaleform::GFx::AS3::Multiname::SetRTNameUnsafe(const Scaleform::GFx::AS3::Value & nameVal); // 0x1404A9290
void Scaleform::GFx::AS3::Multiname::PostProcessName(const bool fromQName); // 0x14049AE90
Scaleform::GFx::AS3::Instances::fl::Namespace & Scaleform::GFx::AS3::Multiname::GetNamespace(); // 0x140487310