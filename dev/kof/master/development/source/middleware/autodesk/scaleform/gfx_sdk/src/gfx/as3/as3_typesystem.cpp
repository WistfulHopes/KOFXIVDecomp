
bool Scaleform::GFx::AS3::TR::Type::IsAny(); // 0x14048F670
bool Scaleform::GFx::AS3::TR::Type::IsString(); // 0x1404904D0
bool Scaleform::GFx::AS3::TR::Type::IsNotRefCountedType(); // 0x14048FCD0
bool Scaleform::GFx::AS3::TR::Type::IsNumericType(); // 0x14048FE20
bool Scaleform::GFx::AS3::TR::Type::operator==(const Scaleform::GFx::AS3::TR::Type & other); // 0x140457020
union Scaleform::GFx::AS3::TR::Type::==::__l19::<unnamed-type-u1>
{
public:
	unsigned long long I; // 0x0
	double D; // 0x0
};
Scaleform::GFx::AS3::TR::TypeSystem::TypeSystem(Scaleform::GFx::AS3::VM & vm, Scaleform::GFx::AS3::VMFile & file, Scaleform::GFx::AS3::Bubble & a); // 0x140451B50
const Scaleform::GFx::AS3::TR::Type * Scaleform::GFx::AS3::TR::TypeSystem::GetNull(const Scaleform::GFx::AS3::Traits & tr); // 0x140487740
const Scaleform::GFx::AS3::TR::Type * Scaleform::GFx::AS3::TR::TypeSystem::GetConstNumber(double v); // 0x1404847B0
const Scaleform::GFx::AS3::TR::Type * Scaleform::GFx::AS3::TR::TypeSystem::GetConstSInt(long v); // 0x1404848A0
const Scaleform::GFx::AS3::TR::Type * Scaleform::GFx::AS3::TR::TypeSystem::GetConstUInt(unsigned long v); // 0x140484C00
const Scaleform::GFx::AS3::TR::Type * Scaleform::GFx::AS3::TR::TypeSystem::GetConstString(Scaleform::GFx::ASStringNode * v); // 0x140484AC0
const Scaleform::GFx::AS3::TR::Type * Scaleform::GFx::AS3::TR::TypeSystem::GetConstString(const Scaleform::GFx::ASString & v); // 0x140484990
const Scaleform::GFx::AS3::TR::Type * Scaleform::GFx::AS3::TR::TypeSystem::GetConstNamespace(Scaleform::GFx::AS3::Instances::fl::Namespace & v); // 0x1404846D0
const Scaleform::GFx::AS3::TR::Type * Scaleform::GFx::AS3::TR::TypeSystem::GetConstAbsObj(const Scaleform::GFx::AS3::Value & v); // 0x1404845A0
const Scaleform::GFx::AS3::TR::Type * Scaleform::GFx::AS3::TR::TypeSystem::GetType(const Scaleform::GFx::AS3::Traits & tr, Scaleform::GFx::AS3::Boolean3 null, bool with); // 0x14048B9C0
const Scaleform::GFx::AS3::TR::Type * Scaleform::GFx::AS3::TR::TypeSystem::GetType(const Scaleform::GFx::AS3::Value & v); // 0x14048BAF0
const Scaleform::GFx::AS3::TR::Type * Scaleform::GFx::AS3::TR::TypeSystem::GetTypeWith(const Scaleform::GFx::AS3::TR::Type * t, bool with); // 0x14048BDA0
const Scaleform::GFx::AS3::Traits * Scaleform::GFx::AS3::TR::TypeSystem::GetValueTraits(const Scaleform::GFx::AS3::Value & v); // 0x14048C0F0
bool Scaleform::GFx::AS3::TR::TypeSystem::IsPrimitiveType(const Scaleform::GFx::AS3::Traits * tr); // 0x140490280
bool Scaleform::GFx::AS3::TR::TypeSystem::IsNotRefCountedType(const Scaleform::GFx::AS3::Traits * tr); // 0x14048FD40
bool Scaleform::GFx::AS3::TR::TypeSystem::IsNumericType(const Scaleform::GFx::AS3::Traits * tr); // 0x14048FE70
bool Scaleform::GFx::AS3::TR::TypeSystem::IsNotObjectType(const Scaleform::GFx::AS3::Traits * tr); // 0x14048FC60
Scaleform::GFx::AS3::InstanceTraits::Traits & Scaleform::GFx::AS3::TR::TypeSystem::GetFunctType(const Scaleform::GFx::AS3::Value & value); // 0x140486410
Scaleform::GFx::AS3::Traits * Scaleform::GFx::AS3::TR::TypeSystem::GetPropertyType(const Scaleform::GFx::AS3::Traits & obj_traits, const Scaleform::GFx::AS3::SlotInfo & si); // 0x140488C80