
enum Scaleform::GFx::AS3::AMF3DataType
{
	undefined_marker = 0,
	null_marker = 1,
	false_marker = 2,
	true_marker = 3,
	integer_marker = 4,
	double_marker = 5,
	string_marker = 6,
	xml_doc_marker = 7,
	date_marker = 8,
	array_marker = 9,
	object_marker = 10,
	xml_marker = 11,
	byte_array_marker = 12,
	vector_int_marker = 13,
	vector_uint_marker = 14,
	vector_double_marker = 15,
	vector_object_marker = 16,
	dictionary_marker = 17,
};
Scaleform::GFx::AS3::AMF3Reader::AMF3Reader(Scaleform::GFx::AS3::Instances::fl::Object & s, Scaleform::GFx::AS3::Reader & r); // 0x14044D6A0
unsigned long Scaleform::GFx::AS3::AMF3Reader::ReadUInt29(); // 0x1404A05B0
double Scaleform::GFx::AS3::AMF3Reader::DeserializeDouble(); // 0x14046F8A0
union Scaleform::GFx::AS3::AMF3Reader::DeserializeDouble::__l2::<unnamed-type-$S2>
{
public:
	unsigned char b[8]; // 0x0
	unsigned long long u; // 0x0
	double d; // 0x0
};
Scaleform::GFx::ASString Scaleform::GFx::AS3::AMF3Reader::DeserializeStr(); // 0x1404705F0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::AMF3Reader::DeserializeObjDefault(Scaleform::GFx::AS3::Value & result); // 0x14046F990
class Scaleform::ArrayDH<Scaleform::GFx::ASString,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayDataDH<Scaleform::GFx::ASString,Scaleform::AllocatorDH<Scaleform::GFx::ASString,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayDH<Scaleform::GFx::ASString,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDH<Scaleform::GFx::ASString,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayDH<Scaleform::GFx::ASString,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, const Scaleform::ArrayDefaultPolicy &);
	ArrayDH<Scaleform::GFx::ASString,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, long);
	ArrayDH<Scaleform::GFx::ASString,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *);
	const Scaleform::ArrayDH<Scaleform::GFx::ASString,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayDH<Scaleform::GFx::ASString,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayDH<Scaleform::GFx::ASString,2,Scaleform::ArrayDefaultPolicy>();
};
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::AMF3Reader::DeserializeArray(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Array> & result); // 0x14046EE40
void Scaleform::GFx::AS3::AMF3Reader::DeserializeByteArray(Scaleform::GFx::AS3::Value & result); // 0x14046F180
Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Date> Scaleform::GFx::AS3::AMF3Reader::DeserializeDate(); // 0x14046F360
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::AMF3Reader::DeserializeDictionary(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_utils::Dictionary> & result); // 0x14046F4C0
Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XML> Scaleform::GFx::AS3::AMF3Reader::DeserializeXML(); // 0x1404713F0
Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_vec::Vector_int> Scaleform::GFx::AS3::AMF3Reader::DeserializeVector_int(); // 0x140470B60
Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_vec::Vector_uint> Scaleform::GFx::AS3::AMF3Reader::DeserializeVector_uint(); // 0x140471230
Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_vec::Vector_double> Scaleform::GFx::AS3::AMF3Reader::DeserializeVector_double(); // 0x1404709D0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::AMF3Reader::DeserializeVector_object(Scaleform::GFx::AS3::Value & result); // 0x140470D20
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::AMF3Reader::DeserializeValue(Scaleform::GFx::AS3::Value & v); // 0x140470740
Scaleform::GFx::AS3::AMF3Writer::AMF3Writer(Scaleform::GFx::AS3::Instances::fl::Object & s, Scaleform::GFx::AS3::Writer & w); // 0x14044D760
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::AMF3Writer::WriteUInt29(unsigned long v); // 0x1404B3D70
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::AMF3Writer::SerializeDouble(double v); // 0x1404A5FF0
union Scaleform::GFx::AS3::AMF3Writer::SerializeDouble::__l2::<unnamed-type-$S4>
{
public:
	unsigned char b[8]; // 0x0
	unsigned long long u; // 0x0
	double d; // 0x0
};
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::AMF3Writer::SerializeStr(const Scaleform::GFx::ASString & v); // 0x1404A69C0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::AMF3Writer::SerializeObj(Scaleform::GFx::AS3::Object & v); // 0x1404A60D0
struct Scaleform::GFx::AS3::BASlotFunctCalc :
	Scaleform::GFx::AS3::Slots::SlotFunct
{
	BASlotFunctCalc(Scaleform::GFx::AS3::BASlotFunctCalc &);
	BASlotFunctCalc(const Scaleform::GFx::AS3::BASlotFunctCalc &);
	BASlotFunctCalc();
	virtual Scaleform::GFx::AS3::CheckResult operator()(const Scaleform::GFx::AS3::SlotInfo &);
	unsigned long GetResult();
private:
	unsigned long result; // 0x8
public:
	virtual ~BASlotFunctCalc();
	Scaleform::GFx::AS3::BASlotFunctCalc & operator=(Scaleform::GFx::AS3::BASlotFunctCalc &);
	Scaleform::GFx::AS3::BASlotFunctCalc & operator=(const Scaleform::GFx::AS3::BASlotFunctCalc &);
};
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::BASlotFunctCalc::operator()(const Scaleform::GFx::AS3::SlotInfo & si); // 0x140457160
struct Scaleform::GFx::AS3::BASlotFunctSrlzFixedName :
	Scaleform::GFx::AS3::Slots::SlotFunct
{
	BASlotFunctSrlzFixedName(const Scaleform::GFx::AS3::BASlotFunctSrlzFixedName &);
	BASlotFunctSrlzFixedName(Scaleform::GFx::AS3::AMF3Writer &);
	virtual Scaleform::GFx::AS3::CheckResult operator()(const Scaleform::GFx::AS3::SlotInfo &);
private:
	Scaleform::GFx::AS3::BASlotFunctSrlzFixedName & operator=(const Scaleform::GFx::AS3::BASlotFunctSrlzFixedName &);
	Scaleform::GFx::AS3::AMF3Writer & W; // 0x8
public:
	virtual ~BASlotFunctSrlzFixedName();
};
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::BASlotFunctSrlzFixedName::operator()(const Scaleform::GFx::AS3::SlotInfo & si); // 0x1404571C0
struct Scaleform::GFx::AS3::BASlotFunctSrlzFixedValue :
	Scaleform::GFx::AS3::Slots::SlotFunct
{
private:
	BASlotFunctSrlzFixedValue(const Scaleform::GFx::AS3::BASlotFunctSrlzFixedValue &);
public:
	BASlotFunctSrlzFixedValue(Scaleform::GFx::AS3::AMF3Writer &, Scaleform::GFx::AS3::Object *);
	virtual Scaleform::GFx::AS3::CheckResult operator()(const Scaleform::GFx::AS3::SlotInfo &);
private:
	Scaleform::GFx::AS3::BASlotFunctSrlzFixedValue & operator=(const Scaleform::GFx::AS3::BASlotFunctSrlzFixedValue &);
	Scaleform::GFx::AS3::AMF3Writer & W; // 0x8
	Scaleform::GFx::AS3::Object * Obj; // 0x10
public:
	virtual ~BASlotFunctSrlzFixedValue();
};
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::BASlotFunctSrlzFixedValue::operator()(const Scaleform::GFx::AS3::SlotInfo & si); // 0x1404572B0
unsigned long Scaleform::GFx::AS3::CalcSealedPropNum(const Scaleform::GFx::AS3::Traits & tr); // 0x140463D10
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::AMF3Writer::SerializeObjDefault(Scaleform::GFx::AS3::Object & v); // 0x1404A6230
class Scaleform::GFx::AS3::SerializeArrSparse :
	Scaleform::GFx::AS3::Impl::ArrayFunc
{
public:
	SerializeArrSparse(const Scaleform::GFx::AS3::SerializeArrSparse &);
	SerializeArrSparse(const Scaleform::GFx::AS3::Instances::fl::Array &, Scaleform::GFx::AS3::AMF3Writer &);
	virtual Scaleform::GFx::AS3::CheckResult operator()(unsigned long, const Scaleform::GFx::AS3::Value &);
private:
	Scaleform::GFx::AS3::SerializeArrSparse & operator=(const Scaleform::GFx::AS3::SerializeArrSparse &);
	Scaleform::GFx::AS3::StringManager & SM; // 0x8
	const Scaleform::GFx::AS3::Instances::fl::Array & A; // 0x10
	Scaleform::GFx::AS3::AMF3Writer & W; // 0x18
public:
	virtual ~SerializeArrSparse();
};
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::SerializeArrSparse::operator()(unsigned long ind, const Scaleform::GFx::AS3::Value & v); // 0x140457780
class Scaleform::GFx::AS3::SerializeArrDense :
	Scaleform::GFx::AS3::Impl::ArrayFunc
{
public:
	SerializeArrDense(const Scaleform::GFx::AS3::SerializeArrDense &);
	SerializeArrDense(const Scaleform::GFx::AS3::Instances::fl::Array &, Scaleform::GFx::AS3::AMF3Writer &);
	virtual Scaleform::GFx::AS3::CheckResult operator()(unsigned long, const Scaleform::GFx::AS3::Value &);
private:
	Scaleform::GFx::AS3::SerializeArrDense & operator=(const Scaleform::GFx::AS3::SerializeArrDense &);
	const Scaleform::GFx::AS3::Instances::fl::Array & A; // 0x8
	Scaleform::GFx::AS3::AMF3Writer & W; // 0x10
public:
	virtual ~SerializeArrDense();
};
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::SerializeArrDense::operator()(unsigned long ind, const Scaleform::GFx::AS3::Value & v); // 0x140457710
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::AMF3Writer::SerializeArray(Scaleform::GFx::AS3::Instances::fl::Array & v); // 0x1404A5960
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::AMF3Writer::SerializeByteArray(Scaleform::GFx::AS3::Instances::fl_utils::ByteArray & v); // 0x1404A5B30
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::AMF3Writer::SerializeDate(Scaleform::GFx::AS3::Instances::fl::Date & v); // 0x1404A5C50
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::AMF3Writer::SerializeDictionary(Scaleform::GFx::AS3::Instances::fl_utils::Dictionary & v); // 0x1404A5D90
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::AMF3Writer::SerializeXML(Scaleform::GFx::AS3::Instances::fl::XML & v); // 0x1404A7620
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::AMF3Writer::SerializeVector_int(Scaleform::GFx::AS3::Instances::fl_vec::Vector_int & v); // 0x1404A7100
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::AMF3Writer::SerializeVector_uint(Scaleform::GFx::AS3::Instances::fl_vec::Vector_uint & v); // 0x1404A7470
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::AMF3Writer::SerializeVector_double(Scaleform::GFx::AS3::Instances::fl_vec::Vector_double & v); // 0x1404A6F60
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::AMF3Writer::SerializeVector_String(Scaleform::GFx::AS3::Instances::fl_vec::Vector_String & v); // 0x1404A6D60
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::AMF3Writer::SerializeVector_object(Scaleform::GFx::AS3::Instances::fl_vec::Vector_object & v); // 0x1404A72B0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::AMF3Writer::SerializeValue(const Scaleform::GFx::AS3::Value & v); // 0x1404A6AC0