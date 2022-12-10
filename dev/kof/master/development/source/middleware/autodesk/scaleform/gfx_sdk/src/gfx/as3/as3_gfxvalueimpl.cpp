
class Scaleform::GFx::AS3::UserDefinedFunction :
	Scaleform::GFx::AS3::Instances::fl::FunctionBase
{
protected:
	Scaleform::Ptr<Scaleform::GFx::FunctionHandler> pContext; // 0x48
	void * pUserData; // 0x50
public:
	UserDefinedFunction(Scaleform::GFx::AS3::InstanceTraits::Traits &, Scaleform::GFx::FunctionHandler *, void *);
	virtual void Call(const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::Value &, unsigned long &, Scaleform::GFx::AS3::Value *, bool);
	virtual unsigned long GetMaxParamNum();
	virtual ~UserDefinedFunction();
};
class Scaleform::Ptr<Scaleform::GFx::FunctionHandler>
{
protected:
	Scaleform::GFx::FunctionHandler * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::FunctionHandler>(const Scaleform::Ptr<Scaleform::GFx::FunctionHandler> &);
	Ptr<Scaleform::GFx::FunctionHandler>(Scaleform::GFx::FunctionHandler *);
	Ptr<Scaleform::GFx::FunctionHandler>(Scaleform::Ptr<Scaleform::GFx::FunctionHandler> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::FunctionHandler>(Scaleform::Pickable<Scaleform::GFx::FunctionHandler>);
	Ptr<Scaleform::GFx::FunctionHandler>(Scaleform::GFx::FunctionHandler &);
	Ptr<Scaleform::GFx::FunctionHandler>();
	~Ptr<Scaleform::GFx::FunctionHandler>();
	bool operator==(Scaleform::GFx::FunctionHandler *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::FunctionHandler> &);
	bool operator!=(Scaleform::GFx::FunctionHandler *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::FunctionHandler> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::FunctionHandler> &);
	Scaleform::Ptr<Scaleform::GFx::FunctionHandler> & operator=(Scaleform::Pickable<Scaleform::GFx::FunctionHandler>);
	const Scaleform::Ptr<Scaleform::GFx::FunctionHandler> & operator=(Scaleform::GFx::FunctionHandler &);
	const Scaleform::Ptr<Scaleform::GFx::FunctionHandler> & operator=(Scaleform::GFx::FunctionHandler *);
	const Scaleform::Ptr<Scaleform::GFx::FunctionHandler> & operator=(const Scaleform::Ptr<Scaleform::GFx::FunctionHandler> &);
	Scaleform::Ptr<Scaleform::GFx::FunctionHandler> & SetPtr(Scaleform::Pickable<Scaleform::GFx::FunctionHandler>);
	Scaleform::Ptr<Scaleform::GFx::FunctionHandler> & SetPtr(Scaleform::GFx::FunctionHandler &);
	Scaleform::Ptr<Scaleform::GFx::FunctionHandler> & SetPtr(Scaleform::GFx::FunctionHandler *);
	Scaleform::Ptr<Scaleform::GFx::FunctionHandler> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::FunctionHandler> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::FunctionHandler * & GetRawRef();
	Scaleform::GFx::FunctionHandler * GetPtr();
	Scaleform::GFx::FunctionHandler & operator*();
	Scaleform::GFx::FunctionHandler * operator->();
	Scaleform::GFx::FunctionHandler * operator class Scaleform::GFx::FunctionHandler *();
	Scaleform::Ptr<Scaleform::GFx::FunctionHandler> & Pick(Scaleform::GFx::FunctionHandler *);
	Scaleform::Ptr<Scaleform::GFx::FunctionHandler> & Pick(Scaleform::Pickable<Scaleform::GFx::FunctionHandler>);
	Scaleform::Ptr<Scaleform::GFx::FunctionHandler> & Pick(Scaleform::Ptr<Scaleform::GFx::FunctionHandler> &);
};
unsigned long Scaleform::GFx::AS3::UserDefinedFunction::GetMaxParamNum(); // 0x140486BF0
void Scaleform::GFx::AS3::UserDefinedFunction::Call(const Scaleform::GFx::AS3::Value & _this, Scaleform::GFx::AS3::Value & result, unsigned long & argc, Scaleform::GFx::AS3::Value * argv, bool extCall); // 0x140464100
class Scaleform::ArrayCPP<Scaleform::GFx::Value,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::Value,Scaleform::AllocatorGH_CPP<Scaleform::GFx::Value,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayCPP<Scaleform::GFx::Value,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayCPP<Scaleform::GFx::Value,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayCPP<Scaleform::GFx::Value,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayCPP<Scaleform::GFx::Value,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayCPP<Scaleform::GFx::Value,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayCPP<Scaleform::GFx::Value,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayCPP<Scaleform::GFx::Value,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayCPP<Scaleform::GFx::Value,2,Scaleform::ArrayDefaultPolicy>();
};
void Scaleform::GFx::Value::ObjectInterface::ObjectAddRef(Scaleform::GFx::Value * val, void * pobj); // 0x140494DC0
void Scaleform::GFx::Value::ObjectInterface::ObjectRelease(Scaleform::GFx::Value * val, void * pobj); // 0x140494ED0
bool Scaleform::GFx::Value::ObjectInterface::GetMember(void * pdata, const char * name, Scaleform::GFx::Value * pval, bool isdobj); // 0x140486C00
bool Scaleform::GFx::Value::ObjectInterface::SetMember(void * pdata, const char * name, const Scaleform::GFx::Value & value, bool isdobj); // 0x1404A85B0
bool Scaleform::GFx::Value::ObjectInterface::Invoke(void * pdata, Scaleform::GFx::Value * presult, const char * name, const Scaleform::GFx::Value * pargs, unsigned long long nargs, bool isdobj); // 0x14048ED70
unsigned long Scaleform::GFx::Value::ObjectInterface::GetArraySize(void * pdata); // 0x1404837B0
bool Scaleform::GFx::Value::ObjectInterface::SetArraySize(void * pdata, unsigned long sz); // 0x1404A7C80
bool Scaleform::GFx::Value::ObjectInterface::GetElement(void * pdata, unsigned long idx, Scaleform::GFx::Value * pval); // 0x140485C80
bool Scaleform::GFx::Value::ObjectInterface::SetElement(void * pdata, unsigned long idx, const Scaleform::GFx::Value & value); // 0x1404A8220
bool Scaleform::GFx::Value::ObjectInterface::GetWorldMatrix(void * pdata, Scaleform::Render::Matrix2x4<float> * pmat); // 0x14048CC70
void Scaleform::GFx::AS3::MovieRoot::GFxValue2ASValue(const Scaleform::GFx::Value & gfxVal, Scaleform::GFx::AS3::Value * pdestVal); // 0x140480EE0
void Scaleform::GFx::AS3::MovieRoot::ASValue2GFxValue(const Scaleform::GFx::AS3::Value & value, Scaleform::GFx::Value * pdestVal); // 0x140458E10
class Scaleform::Ptr<Scaleform::GFx::MovieImpl::WideStringStorage>
{
protected:
	Scaleform::GFx::MovieImpl::WideStringStorage * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::MovieImpl::WideStringStorage>(const Scaleform::Ptr<Scaleform::GFx::MovieImpl::WideStringStorage> &);
	Ptr<Scaleform::GFx::MovieImpl::WideStringStorage>(Scaleform::GFx::MovieImpl::WideStringStorage *);
	Ptr<Scaleform::GFx::MovieImpl::WideStringStorage>(Scaleform::Ptr<Scaleform::GFx::MovieImpl::WideStringStorage> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::MovieImpl::WideStringStorage>(Scaleform::Pickable<Scaleform::GFx::MovieImpl::WideStringStorage>);
	Ptr<Scaleform::GFx::MovieImpl::WideStringStorage>(Scaleform::GFx::MovieImpl::WideStringStorage &);
	Ptr<Scaleform::GFx::MovieImpl::WideStringStorage>();
	~Ptr<Scaleform::GFx::MovieImpl::WideStringStorage>();
	bool operator==(Scaleform::GFx::MovieImpl::WideStringStorage *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::MovieImpl::WideStringStorage> &);
	bool operator!=(Scaleform::GFx::MovieImpl::WideStringStorage *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::MovieImpl::WideStringStorage> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::MovieImpl::WideStringStorage> &);
	Scaleform::Ptr<Scaleform::GFx::MovieImpl::WideStringStorage> & operator=(Scaleform::Pickable<Scaleform::GFx::MovieImpl::WideStringStorage>);
	const Scaleform::Ptr<Scaleform::GFx::MovieImpl::WideStringStorage> & operator=(Scaleform::GFx::MovieImpl::WideStringStorage &);
	const Scaleform::Ptr<Scaleform::GFx::MovieImpl::WideStringStorage> & operator=(Scaleform::GFx::MovieImpl::WideStringStorage *);
	const Scaleform::Ptr<Scaleform::GFx::MovieImpl::WideStringStorage> & operator=(const Scaleform::Ptr<Scaleform::GFx::MovieImpl::WideStringStorage> &);
	Scaleform::Ptr<Scaleform::GFx::MovieImpl::WideStringStorage> & SetPtr(Scaleform::Pickable<Scaleform::GFx::MovieImpl::WideStringStorage>);
	Scaleform::Ptr<Scaleform::GFx::MovieImpl::WideStringStorage> & SetPtr(Scaleform::GFx::MovieImpl::WideStringStorage &);
	Scaleform::Ptr<Scaleform::GFx::MovieImpl::WideStringStorage> & SetPtr(Scaleform::GFx::MovieImpl::WideStringStorage *);
	Scaleform::Ptr<Scaleform::GFx::MovieImpl::WideStringStorage> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::MovieImpl::WideStringStorage> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::MovieImpl::WideStringStorage * & GetRawRef();
	Scaleform::GFx::MovieImpl::WideStringStorage * GetPtr();
	Scaleform::GFx::MovieImpl::WideStringStorage & operator*();
	Scaleform::GFx::MovieImpl::WideStringStorage * operator->();
	Scaleform::GFx::MovieImpl::WideStringStorage * operator struct Scaleform::GFx::MovieImpl::WideStringStorage *();
	Scaleform::Ptr<Scaleform::GFx::MovieImpl::WideStringStorage> & Pick(Scaleform::GFx::MovieImpl::WideStringStorage *);
	Scaleform::Ptr<Scaleform::GFx::MovieImpl::WideStringStorage> & Pick(Scaleform::Pickable<Scaleform::GFx::MovieImpl::WideStringStorage>);
	Scaleform::Ptr<Scaleform::GFx::MovieImpl::WideStringStorage> & Pick(Scaleform::Ptr<Scaleform::GFx::MovieImpl::WideStringStorage> &);
};
void Scaleform::GFx::AS3::MovieRoot::CreateString(Scaleform::GFx::Value * pvalue, const char * pstring); // 0x14046B710
void Scaleform::GFx::AS3::MovieRoot::CreateStringW(Scaleform::GFx::Value * pvalue, const wchar_t * pstring); // 0x14046B810
void Scaleform::GFx::AS3::MovieRoot::CreateObject(Scaleform::GFx::Value * pvalue, const char * className, const Scaleform::GFx::Value * pargs, unsigned long nargs); // 0x14046AFA0
enum Scaleform::GFx::AS3::MovieRoot::CreateObject::__l2::<unnamed-enum-NumValuesOnStack>
{
	NumValuesOnStack = 10,
};
void Scaleform::GFx::AS3::MovieRoot::CreateArray(Scaleform::GFx::Value * pvalue); // 0x140469F90
void Scaleform::GFx::AS3::MovieRoot::CreateFunction(Scaleform::GFx::Value * pvalue, Scaleform::GFx::FunctionHandler * pfc, void * puserData); // 0x14046AD70