
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::Add(Scaleform::GFx::AS3::StringManager & sm, Scaleform::GFx::AS3::Value & result, const Scaleform::GFx::AS3::Value & l, const Scaleform::GFx::AS3::Value & r); // 0x14045B390
void Scaleform::GFx::AS3::VM::exec_dxnslate(); // 0x1404B8DD0
struct Scaleform::GFx::AS3::SH1<1,bool>
{
	struct SelfType;
	SH1<1,bool>(Scaleform::GFx::AS3::VSBase &);
private:
	bool Success; // 0x0
public:
	bool _1; // 0x1
	bool IsOK();
	bool IsException();
private:
	Scaleform::GFx::AS3::SH1<1,bool> & operator=(const Scaleform::GFx::AS3::SH1<1,bool> &);
};
struct Scaleform::GFx::AS3::TSH1<1,bool>
{
	struct SelfType;
	TSH1<1,bool>(Scaleform::GFx::AS3::VSBase &);
	bool _1; // 0x0
private:
	Scaleform::GFx::AS3::TSH1<1,bool> & operator=(const Scaleform::GFx::AS3::TSH1<1,bool> &);
};
void Scaleform::GFx::AS3::VM::exec_pushwith(); // 0x1404BF770
void Scaleform::GFx::AS3::VM::exec_nextname(); // 0x1404BD9C0
struct Scaleform::GFx::AS3::SH2<1,Scaleform::GFx::AS3::Value,long>
{
	struct SelfType;
	SH2<1,Scaleform::GFx::AS3::Value,long>(Scaleform::GFx::AS3::VSBase &);
private:
	bool Success; // 0x0
public:
	long _2; // 0x4
	Scaleform::GFx::AS3::Value & _1; // 0x8
	bool IsOK();
	bool IsException();
private:
	Scaleform::GFx::AS3::SH2<1,Scaleform::GFx::AS3::Value,long> & operator=(const Scaleform::GFx::AS3::SH2<1,Scaleform::GFx::AS3::Value,long> &);
};
void Scaleform::GFx::AS3::VM::exec_pushscope(); // 0x1404BF530
void Scaleform::GFx::AS3::VM::exec_newactivation(unsigned long long addr); // 0x1404BCBD0
class Scaleform::Pickable<Scaleform::GFx::AS3::Instance>
{
public:
	Pickable<Scaleform::GFx::AS3::Instance>(Scaleform::GFx::AS3::Instance *, Scaleform::PickType);
	Pickable<Scaleform::GFx::AS3::Instance>(Scaleform::GFx::AS3::Instance *);
	Pickable<Scaleform::GFx::AS3::Instance>();
	Scaleform::Pickable<Scaleform::GFx::AS3::Instance> & operator=(const Scaleform::Pickable<Scaleform::GFx::AS3::Instance> &);
	Scaleform::GFx::AS3::Instance * GetPtr();
	Scaleform::GFx::AS3::Instance * operator->();
	Scaleform::GFx::AS3::Instance & operator*();
private:
	Scaleform::GFx::AS3::Instance * pV; // 0x0
};
void Scaleform::GFx::AS3::VM::exec_getouterscope(Scaleform::GFx::AS3::CallFrame & cf, unsigned long scope_index); // 0x1404BAB00
void Scaleform::GFx::AS3::VM::exec_getglobalslot(unsigned long slot_index); // 0x1404B9F80
void Scaleform::GFx::AS3::VM::exec_setglobalslot(unsigned long slot_index); // 0x1404BFDF0
void Scaleform::GFx::AS3::VM::exec_esc_xelem(); // 0x1404B9140
void Scaleform::GFx::AS3::VM::exec_esc_xattr(); // 0x1404B9030
void Scaleform::GFx::AS3::VM::exec_checkfilter(); // 0x1404B7220
void Scaleform::GFx::AS3::VM::exec_coerce_s(long index); // 0x1404B7520
struct Scaleform::GFx::AS3::SH2<1,double,double>
{
	struct SelfType;
	SH2<1,double,double>(Scaleform::GFx::AS3::VSBase &);
private:
	bool Success; // 0x0
public:
	double _2; // 0x8
	double & _1; // 0x10
	bool IsOK();
	bool IsException();
private:
	Scaleform::GFx::AS3::SH2<1,double,double> & operator=(const Scaleform::GFx::AS3::SH2<1,double,double> &);
};
struct Scaleform::GFx::AS3::TSH2<1,double,double>
{
	struct SelfType;
	TSH2<1,double,double>(Scaleform::GFx::AS3::VSBase &);
	double _2; // 0x0
	double & _1; // 0x8
private:
	Scaleform::GFx::AS3::TSH2<1,double,double> & operator=(const Scaleform::GFx::AS3::TSH2<1,double,double> &);
};
struct Scaleform::GFx::AS3::SH2<1,long,unsigned long>
{
	struct SelfType;
	SH2<1,long,unsigned long>(Scaleform::GFx::AS3::VSBase &);
private:
	bool Success; // 0x0
public:
	unsigned long _2; // 0x4
	long & _1; // 0x8
	bool IsOK();
	bool IsException();
private:
	Scaleform::GFx::AS3::SH2<1,long,unsigned long> & operator=(const Scaleform::GFx::AS3::SH2<1,long,unsigned long> &);
};
struct Scaleform::GFx::AS3::SH2<1,unsigned long,unsigned long>
{
	struct SelfType;
	SH2<1,unsigned long,unsigned long>(Scaleform::GFx::AS3::VSBase &);
private:
	bool Success; // 0x0
public:
	unsigned long _2; // 0x4
	unsigned long & _1; // 0x8
	bool IsOK();
	bool IsException();
private:
	Scaleform::GFx::AS3::SH2<1,unsigned long,unsigned long> & operator=(const Scaleform::GFx::AS3::SH2<1,unsigned long,unsigned long> &);
};
struct Scaleform::GFx::AS3::SH2<1,long,long>
{
	struct SelfType;
	SH2<1,long,long>(Scaleform::GFx::AS3::VSBase &);
private:
	bool Success; // 0x0
public:
	long _2; // 0x4
	long & _1; // 0x8
	bool IsOK();
	bool IsException();
private:
	Scaleform::GFx::AS3::SH2<1,long,long> & operator=(const Scaleform::GFx::AS3::SH2<1,long,long> &);
};
struct Scaleform::GFx::AS3::TSH2<1,long,long>
{
	struct SelfType;
	TSH2<1,long,long>(Scaleform::GFx::AS3::VSBase &);
	long _2; // 0x0
	long & _1; // 0x8
private:
	Scaleform::GFx::AS3::TSH2<1,long,long> & operator=(const Scaleform::GFx::AS3::TSH2<1,long,long> &);
};
void Scaleform::GFx::AS3::VM::exec_typebarrier_reg(Scaleform::GFx::AS3::CallFrame & cf, unsigned long long nt_val, unsigned long long rn); // 0x1404C1100
enum Scaleform::GFx::AS3::VM::exec_typebarrier_reg::__l2::<unnamed-enum-listSize>
{
	listSize = 6,
};
enum Scaleform::GFx::AS3::VM::exec_typebarrier_reg::__l18::<unnamed-enum-recompileThreshold>
{
	recompileThreshold = 2,
};
void Scaleform::GFx::AS3::VM::exec_hasnext(); // 0x1404BBE80
void Scaleform::GFx::AS3::VM::exec_nextvalue(); // 0x1404BDAB0
void Scaleform::GFx::AS3::VM::exec_in(); // 0x1404BC020
long Scaleform::GFx::AS3::VM::ExecuteCode(unsigned long max_stack_depth); // 0x140476480
union Scaleform::GFx::AS3::VM::ExecuteCode::__l58::<unnamed-type-u>
{
public:
	unsigned long long I; // 0x0
	double D; // 0x0
};
union Scaleform::GFx::AS3::VM::ExecuteCode::__l60::<unnamed-type-u>
{
public:
	unsigned long I[2]; // 0x0
	double D; // 0x0
};