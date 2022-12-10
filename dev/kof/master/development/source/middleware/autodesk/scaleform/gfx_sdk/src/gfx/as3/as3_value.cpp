
Scaleform::GFx::AS3::Value::Value(const Scaleform::GFx::ASString & v); // 0x140453150
Scaleform::GFx::AS3::Value::Value(Scaleform::GFx::ASStringNode * v); // 0x140453170
Scaleform::GFx::AS3::Value::Value(const Scaleform::GFx::AS3::Value & other, Scaleform::GFx::AS3::StrongRefType __formal); // 0x1404530C0
void Scaleform::GFx::AS3::Value::Assign(const Scaleform::GFx::AS3::Value & other); // 0x140461110
void Scaleform::GFx::AS3::Value::AssignUnsafe(const Scaleform::GFx::AS3::Value & other); // 0x1404613D0
void Scaleform::GFx::AS3::Value::Assign(const Scaleform::GFx::ASString & v); // 0x1404611E0
void Scaleform::GFx::AS3::Value::Assign(Scaleform::GFx::ASStringNode * v); // 0x140461260
void Scaleform::GFx::AS3::Value::AssignUnsafe(Scaleform::GFx::ASStringNode * v); // 0x140461440
void Scaleform::GFx::AS3::Value::Swap(Scaleform::GFx::AS3::Value & other); // 0x1404AEE10
const Scaleform::GFx::AS3::Value & Scaleform::GFx::AS3::Value::GetUndefined(); // 0x14048BE60
const Scaleform::GFx::AS3::Value & Scaleform::GFx::AS3::Value::GetNull(); // 0x1404877F0
bool Scaleform::GFx::AS3::Value::Convert2Boolean(); // 0x1404678C0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::Value::Convert2Number(double & result); // 0x140467DE0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::Value::ToNumberValue(); // 0x1404AF840
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::Value::Convert2NumberInternal(double & result, Scaleform::GFx::AS3::Value::KindType kind); // 0x140467EE0
long Scaleform::GFx::AS3::ConvertDouble2SInt32(double n); // 0x1404693E0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::Value::Convert2Int32(long & result); // 0x140467A10
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::Value::Convert2UInt32(unsigned long & result); // 0x140468F00
unsigned long long Scaleform::GFx::AS3::SF_ECMA_dtostr(char * buffer, long bufflen, double val); // 0x1404A54D0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::Value::Convert2String(Scaleform::GFx::ASString & result); // 0x1404684A0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::Value::Convert2String(Scaleform::StringBuffer & result); // 0x140468A90
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::Value::ToInt32Value(); // 0x1404AF7E0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::Value::ToUInt32Value(); // 0x1404AFD00
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::Value::ToStringValue(Scaleform::GFx::AS3::StringManager & sm); // 0x1404AFC30
bool Scaleform::GFx::AS3::Value::MakeWeakRef(); // 0x1404932C0
bool Scaleform::GFx::AS3::Value::MakeStrongRef(); // 0x140493150
bool Scaleform::GFx::AS3::Value::IsValidWeakRef(); // 0x140490780
unsigned long long Scaleform::GFx::AS3::Value::HashFunctor::operator()(const Scaleform::GFx::AS3::Value & v); // 0x140457410
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::AbstractLessThan(Scaleform::GFx::AS3::Boolean3 & result, const Scaleform::GFx::AS3::Value & l, const Scaleform::GFx::AS3::Value & r); // 0x140459D20
bool Scaleform::GFx::AS3::StrictEqual(const Scaleform::GFx::AS3::Value & x, const Scaleform::GFx::AS3::Value & y); // 0x1404AD740
bool Scaleform::GFx::AS3::IsQNameObject(const Scaleform::GFx::AS3::Value & v); // 0x1404902F0
bool Scaleform::GFx::AS3::IsXMLObject(Scaleform::GFx::AS3::Object * obj); // 0x140490800
bool Scaleform::GFx::AS3::IsXMLListObject(Scaleform::GFx::AS3::Object * obj); // 0x1404907A0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::AbstractEqual(bool & result, const Scaleform::GFx::AS3::Value & l, const Scaleform::GFx::AS3::Value & r); // 0x140459220
Scaleform::GFx::AS3::Value Scaleform::GFx::AS3::GetAbsObject(unsigned long long addr); // 0x1404830C0
Scaleform::GFx::AS3::STPtr & Scaleform::GFx::AS3::STPtr::Set(const Scaleform::GFx::AS3::STPtr & other); // 0x1404A79A0