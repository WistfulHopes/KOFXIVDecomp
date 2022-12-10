#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stackmempool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_locale.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_msgformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"

unsigned long Scaleform::FmtResource::Reflect(const Scaleform::FmtResource::TAttrs * & attrs); // 0x140368DA0
class Scaleform::SwitchFormatter :
	Scaleform::Formatter
{
	class ValueType;
public:
	SwitchFormatter(const Scaleform::SwitchFormatter &);
	SwitchFormatter(Scaleform::MsgFormat &, const Scaleform::SwitchFormatter::ValueType &);
	virtual void Parse(const Scaleform::StringDataPtr &);
	virtual void Convert();
	virtual Scaleform::StringDataPtr GetResult();
	virtual unsigned long long GetSize();
private:
	Scaleform::SwitchFormatter & operator=(const Scaleform::SwitchFormatter &);
	long Value; // 0x18
	Scaleform::Hash<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>,Scaleform::AllocatorGH<int,2>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF> > > StringSet; // 0x20
	Scaleform::StringDataPtr StrValue; // 0x28
	Scaleform::StringDataPtr DefaultStrValue; // 0x38
public:
	virtual ~SwitchFormatter();
};
class Scaleform::SwitchFormatter::ValueType
{
	typedef long Type;
public:
	ValueType(long);
	ValueType();
	long GetValue();
	void SetValue(long);
	long operator int();
private:
	long Value; // 0x0
};
class Scaleform::Hash<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>,Scaleform::AllocatorGH<int,2>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF> > >
{
public:
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	class ValueType;
	class SelfType;
	Scaleform::HashSet<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF> > mHash; // 0x0
	Hash<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>,Scaleform::AllocatorGH<int,2>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPt(const Scaleform::Hash<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>,Scaleform::AllocatorGH<int,2>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF> > > &);
	Hash<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>,Scaleform::AllocatorGH<int,2>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPt(void *, long);
	Hash<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>,Scaleform::AllocatorGH<int,2>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPt(void *);
	Hash<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>,Scaleform::AllocatorGH<int,2>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPt(long);
	Hash<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>,Scaleform::AllocatorGH<int,2>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPt();
	~Hash<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>,Scaleform::AllocatorGH<int,2>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataP();
	void operator=(const Scaleform::Hash<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>,Scaleform::AllocatorGH<int,2>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF> > > &);
	void Clear();
	bool IsEmpty();
	void Set(const long &, const Scaleform::StringDataPtr &);
	void Add(const long &, const Scaleform::StringDataPtr &);
	bool Remove(const long &);
	const Scaleform::StringDataPtr * Get(const long &);
	Scaleform::StringDataPtr * Get(const long &);
	bool Get(const long &, Scaleform::StringDataPtr *);
	unsigned long long GetSize();
	void Resize(unsigned long long);
	void SetCapacity(unsigned long long);
	struct ConstIterator;
	struct Iterator;
	Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF> >::ConstIterator Begin();
	Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF> >::Iterator Begin();
	Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF> >::ConstIterator End();
	Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF> >::Iterator End();
	Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF> >::ConstIterator Find(const long &);
	Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF> >::Iterator Find(const long &);
};
void Scaleform::SwitchFormatter::Parse(const Scaleform::StringDataPtr & str); // 0x140368930
enum Scaleform::SwitchFormatter::Parse::__l2::State
{
	stNumber = 0,
	stStr = 1,
};
void Scaleform::SwitchFormatter::Convert(); // 0x140366D30
Scaleform::StringDataPtr Scaleform::SwitchFormatter::GetResult(); // 0x1403677A0
unsigned long long Scaleform::SwitchFormatter::GetSize(); // 0x1406B4B30
class Scaleform::RepeatFormatter :
	Scaleform::Formatter
{
public:
	RepeatFormatter(const Scaleform::RepeatFormatter &);
	RepeatFormatter(Scaleform::MsgFormat &, unsigned long);
	virtual void Parse(const Scaleform::StringDataPtr &);
	virtual void Convert();
	virtual Scaleform::StringDataPtr GetResult();
	virtual unsigned long long GetSize();
private:
	Scaleform::RepeatFormatter & operator=(const Scaleform::RepeatFormatter &);
	const unsigned long N; // 0x18
	Scaleform::StringDataPtr Str; // 0x20
	Scaleform::StringBuffer Buff; // 0x30
public:
	virtual ~RepeatFormatter();
};
Scaleform::RepeatFormatter::RepeatFormatter(Scaleform::MsgFormat & f, unsigned long n); // 0x140365F20
void Scaleform::RepeatFormatter::Parse(const Scaleform::StringDataPtr & str); // 0x140368790
void Scaleform::RepeatFormatter::Convert(); // 0x140366C50
Scaleform::StringDataPtr Scaleform::RepeatFormatter::GetResult(); // 0x140367750
unsigned long long Scaleform::RepeatFormatter::GetSize(); // 0x1406B4B40
Scaleform::Formatter::~Formatter(); // 0x140366010
unsigned char Scaleform::Formatter::GetParentPos(); // 0x14004BBE0
void Scaleform::Formatter::Parse(const Scaleform::StringDataPtr & __formal); // 0x14002E7C0
Scaleform::StringDataPtr Scaleform::Formatter::GetNextStr(); // 0x140047540
Scaleform::Formatter::ParentRef Scaleform::Formatter::GetParentRef(); // 0x1400470F0
Scaleform::StrFormatter::StrFormatter(Scaleform::MsgFormat & f, const char * v); // 0x140365FD0
Scaleform::StrFormatter::StrFormatter(Scaleform::MsgFormat & f, const Scaleform::StringDataPtr & v); // 0x140365FB0
Scaleform::StrFormatter::StrFormatter(Scaleform::MsgFormat & f, const Scaleform::String & v); // 0x140365F70
void Scaleform::StrFormatter::Parse(const Scaleform::StringDataPtr & str); // 0x140368870
void Scaleform::StrFormatter::Convert(); // 0x140366D20
Scaleform::StringDataPtr Scaleform::StrFormatter::GetResult(); // 0x140367790
unsigned long long Scaleform::StrFormatter::GetSize(); // 0x1400B8090
Scaleform::BoolFormatter::BoolFormatter(Scaleform::MsgFormat & f, bool v); // 0x140365B00
void Scaleform::BoolFormatter::Parse(const Scaleform::StringDataPtr & str); // 0x140367BC0
void Scaleform::BoolFormatter::Convert(); // 0x1403667F0
Scaleform::StringDataPtr Scaleform::BoolFormatter::GetResult(); // 0x140367710
unsigned long long Scaleform::BoolFormatter::GetSize(); // 0x140488880
char * Scaleform::AppendCharLeft(char * buff, unsigned long long buffSz, char * value_ptr, unsigned long ucs_char); // 0x1403664C0
void Scaleform::NumericBase::ReadPrintFormat(Scaleform::StringDataPtr token); // 0x140368B20
void Scaleform::NumericBase::ReadWidth(Scaleform::StringDataPtr token); // 0x140368C60
void Scaleform::NumericBase::ULongLong2String(char * buff, unsigned long long value, bool separator, unsigned long base); // 0x140368EF0
void Scaleform::NumericBase::ULong2String(char * buff, unsigned long value, bool separator, unsigned long base); // 0x140368E40
Scaleform::LongFormatter::LongFormatter(long v); // 0x140365D10
Scaleform::LongFormatter::LongFormatter(unsigned long v); // 0x140365D90
Scaleform::LongFormatter::LongFormatter(unsigned long long v); // 0x140365E10
Scaleform::LongFormatter::LongFormatter(Scaleform::MsgFormat & f, unsigned long v); // 0x140365C90
Scaleform::LongFormatter::LongFormatter(Scaleform::MsgFormat & f, long v); // 0x140365C10
void Scaleform::LongFormatter::Parse(const Scaleform::StringDataPtr & str); // 0x1403680B0
void Scaleform::LongFormatter::Convert(); // 0x1403669D0
unsigned long long Scaleform::LongFormatter::GetSize(); // 0x1403677B0
void Scaleform::LongFormatter::AppendSignCharLeft(bool negative); // 0x140366530
Scaleform::DoubleFormatter::DoubleFormatter(double v); // 0x140365BA0
Scaleform::DoubleFormatter::DoubleFormatter(Scaleform::MsgFormat & f, double v); // 0x140365B30
void Scaleform::DoubleFormatter::Parse(const Scaleform::StringDataPtr & str); // 0x140367D30
void Scaleform::DoubleFormatter::Convert(); // 0x140366840
Scaleform::StringDataPtr Scaleform::DoubleFormatter::GetResult(); // 0x140367720
void Scaleform::DoubleFormatter::InitString(char * pbuffer, unsigned long long size); // 0x1403677C0
void Scaleform::ResourceFormatter::Parse(const Scaleform::StringDataPtr & str); // 0x1403687A0
void Scaleform::ResourceFormatter::Convert(); // 0x140366CB0
Scaleform::StringDataPtr Scaleform::ResourceFormatter::GetResult(); // 0x140367780
unsigned long long Scaleform::DoubleFormatter::GetSize(); // 0x1403D6F90
enum Scaleform::<unnamed-enum-NotInitializedFmtrInd>
{
	NotInitializedFmtrInd = 65535,
};
Scaleform::MsgFormat::MsgFormat(const Scaleform::MsgFormat::Sink & r); // 0x140365E90
Scaleform::MsgFormat::~MsgFormat(); // 0x140366020
Scaleform::SwitchFormatter::~SwitchFormatter(); // 0x140366100
void Scaleform::MsgFormat::AddStringRecord(const Scaleform::StringDataPtr & str); // 0x1403663E0
void Scaleform::MsgFormat::Parse(const char * fmt); // 0x140368470
enum Scaleform::MsgFormat::Parse::__l2::<unnamed-type-state>
{
	stInitial = 0,
	stParam = 1,
};
bool Scaleform::MsgFormat::ReplaceFormatter(Scaleform::Formatter * oldf, Scaleform::Formatter * newf, bool allocated); // 0x140368DB0
bool Scaleform::MsgFormat::NextFormatter(); // 0x140367B30
void Scaleform::MsgFormat::Bind(Scaleform::Formatter * formatter, const bool allocated); // 0x1403665D0
void Scaleform::MsgFormat::BindNonPos(); // 0x140366690
void Scaleform::MsgFormat::Evaluate(unsigned long long ind); // 0x140366DA0
void Scaleform::MsgFormat::MakeString(); // 0x140367970
void Scaleform::MsgFormat::InitString(char * pbuffer, unsigned long long size); // 0x1403677E0
bool Scaleform::IsSpace(Scaleform::StringDataPtr s); // 0x1403678E0
long Scaleform::ReadInteger(Scaleform::StringDataPtr & str, long defaultValue, char separator); // 0x140368A70
void Scaleform::MsgFormat::FinishFormatD(); // 0x1403676F0char *__fastcall operator new<512,8>(
        unsigned __int64 nbytes,
        Scaleform::StackMemPool<512,8,Scaleform::MemPoolImmediateFree> *pool)
{
  char *BuffPtr; // r8
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  bool v6; // cf
  char *result; // rax
  Scaleform::MemoryHeap *pHeap; // rcx

  if ( nbytes > pool->BuffSize )
  {
    pHeap = pool->pHeap;
    if ( !pool->pHeap )
      pHeap = Scaleform::Memory::pGlobalHeap;
    return (char *)pHeap->Alloc(pHeap, nbytes, 8ui64, 0i64);
  }
  else
  {
    BuffPtr = pool->BuffPtr;
    pool->BuffPtr = (char *)(((unsigned __int64)&BuffPtr[nbytes - 1] & 0xFFFFFFFFFFFFFFF8ui64) + 8);
    v4 = ((unsigned __int64)&BuffPtr[nbytes - 1] & 0xFFFFFFFFFFFFFFF8ui64) - (_QWORD)pool;
    v5 = 512 - v4;
    v6 = v4 < 0x200;
    result = BuffPtr;
    if ( !v6 )
      v5 = 0i64;
    pool->BuffSize = v5;
  }
  return result;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeHashF>>::add<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>>(
        Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> > *key,
        unsigned __int64 hashValue)
{
  unsigned __int64 v7; // rdi
  Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF> >::TableType *pTable; // r11
  unsigned __int64 v9; // r9
  char *v10; // r10
  __int64 v11; // rdx
  unsigned __int64 *v12; // r8
  __int64 v13; // rax
  unsigned __int64 Size; // xmm1_8
  __int64 v15; // rcx
  bool v16; // zf
  unsigned __int64 *i; // rcx
  __int64 v18; // rcx

  Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeHashF>>::CheckExpand(
    this,
    pmemAddr);
  v7 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  pTable = this->pTable;
  v9 = *(&this->pTable[1].EntryCount + 5 * v7);
  v10 = (char *)this->pTable + 40 * v7;
  if ( v9 == -2i64 )
  {
    *((_QWORD *)v10 + 2) = -1i64;
    *((_QWORD *)v10 + 3) = 0i64;
    *((_DWORD *)v10 + 8) = key->First;
    *(Scaleform::StringDataPtr *)(v10 + 40) = key->Second;
  }
  else
  {
    v11 = v7;
    do
      v11 = pTable->SizeMask & (v11 + 1);
    while ( *(&pTable[1].EntryCount + 5 * v11) != -2i64 );
    v12 = &pTable[2 * v11 + 1].EntryCount + v11;
    v13 = *((_QWORD *)v10 + 3);
    if ( v13 == v7 )
    {
      if ( v12 )
      {
        *v12 = v9;
        v12[1] = *((_QWORD *)v10 + 3);
        *((_DWORD *)v12 + 4) = *((_DWORD *)v10 + 8);
        *(_OWORD *)(v12 + 3) = *(_OWORD *)(v10 + 40);
      }
      *((_OWORD *)v10 + 2) = *(_OWORD *)&key->First;
      Size = key->Second.Size;
      *((_QWORD *)v10 + 2) = v11;
    }
    else
    {
      v15 = v13 + 4 * v13 + 2;
      v16 = *(&pTable->EntryCount + v15) == v7;
      for ( i = &pTable->EntryCount + v15; !v16; i = &pTable->EntryCount + v18 )
      {
        v18 = *i + 4 * *i + 2;
        v16 = *(&pTable->EntryCount + v18) == v7;
      }
      if ( v12 )
      {
        *v12 = v9;
        v12[1] = *((_QWORD *)v10 + 3);
        *((_DWORD *)v12 + 4) = *((_DWORD *)v10 + 8);
        *(_OWORD *)(v12 + 3) = *(_OWORD *)(v10 + 40);
      }
      *i = v11;
      *((_OWORD *)v10 + 2) = *(_OWORD *)&key->First;
      Size = key->Second.Size;
      *((_QWORD *)v10 + 2) = -1i64;
    }
    *((_QWORD *)v10 + 6) = Size;
  }
  *((_QWORD *)v10 + 3) = v7;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeHashF>>::add<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeRef *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rbx
  Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF> >::TableType *v11; // r9
  unsigned __int64 v12; // r11
  char *v13; // r8
  __int64 v14; // rdx
  unsigned __int64 *v15; // r10
  __int64 v16; // rax
  __int64 v17; // rcx
  bool v18; // zf
  unsigned __int64 *i; // rcx
  __int64 v20; // rcx

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount <= 4 * SizeMask + 4 )
      goto LABEL_6;
    v8 = 2 * SizeMask + 2;
  }
  else
  {
    v8 = 8i64;
  }
  Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeHashF>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = *(&this->pTable[1].EntryCount + 5 * v10);
  v13 = (char *)this->pTable + 40 * v10;
  if ( v12 == -2i64 )
  {
    *((_QWORD *)v13 + 2) = -1i64;
    *((_QWORD *)v13 + 3) = 0i64;
    *((_DWORD *)v13 + 8) = *key->pFirst;
    *(Scaleform::StringDataPtr *)(v13 + 40) = *key->pSecond;
  }
  else
  {
    v14 = v10;
    do
      v14 = v11->SizeMask & (v14 + 1);
    while ( *(&v11[1].EntryCount + 5 * v14) != -2i64 );
    v15 = &v11[2 * v14 + 1].EntryCount + v14;
    v16 = *((_QWORD *)v13 + 3);
    if ( v16 == v10 )
    {
      if ( v15 )
      {
        *v15 = v12;
        v15[1] = *((_QWORD *)v13 + 3);
        *((_DWORD *)v15 + 4) = *((_DWORD *)v13 + 8);
        *(_OWORD *)(v15 + 3) = *(_OWORD *)(v13 + 40);
      }
      *((_DWORD *)v13 + 8) = *key->pFirst;
      *(Scaleform::StringDataPtr *)(v13 + 40) = *key->pSecond;
      *((_QWORD *)v13 + 2) = v14;
    }
    else
    {
      v17 = v16 + 4 * v16 + 2;
      v18 = *(&v11->EntryCount + v17) == v10;
      for ( i = &v11->EntryCount + v17; !v18; i = &v11->EntryCount + v20 )
      {
        v20 = *i + 4 * *i + 2;
        v18 = *(&v11->EntryCount + v20) == v10;
      }
      if ( v15 )
      {
        *v15 = v12;
        v15[1] = *((_QWORD *)v13 + 3);
        *((_DWORD *)v15 + 4) = *((_DWORD *)v13 + 8);
        *(_OWORD *)(v15 + 3) = *(_OWORD *)(v13 + 40);
      }
      *i = v14;
      *((_DWORD *)v13 + 8) = *key->pFirst;
      *(Scaleform::StringDataPtr *)(v13 + 40) = *key->pSecond;
      *((_QWORD *)v13 + 2) = -1i64;
    }
  }
  *((_QWORD *)v13 + 3) = v10;
}

__int64 __fastcall Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeHashF>>::findIndexAlt<int>(
        Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF> > *this,
        const int *key)
{
  Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF> >::TableType *pTable; // r10
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 result; // rax
  __int64 v10; // rdx
  bool v11; // zf
  unsigned __int64 *v12; // rdx

  pTable = this->pTable;
  if ( !this->pTable )
    return -1i64;
  v4 = 4i64;
  v5 = 5381i64;
  do
  {
    v6 = *((unsigned __int8 *)key + --v4);
    v7 = 65599 * v5 + v6;
    v5 = v7;
  }
  while ( v4 );
  v8 = v7 & pTable->SizeMask;
  result = v8;
  v10 = v8 + 4 * v8 + 2;
  v11 = *(&pTable->EntryCount + v10) == -2i64;
  v12 = &pTable->EntryCount + v10;
  if ( v11 || v12[1] != v8 )
    return -1i64;
  while ( v12[1] != v8 || *((_DWORD *)v12 + 4) != *key )
  {
    result = *v12;
    if ( *v12 == -1i64 )
      return -1i64;
    v12 = &pTable[2 * result + 1].EntryCount + result;
  }
  return result;
}

void __fastcall Scaleform::BoolFormatter::BoolFormatter(
        Scaleform::BoolFormatter *this,
        Scaleform::MsgFormat *f,
        bool v)
{
  char v3; // al

  this->pParentFmt = f;
  this->__vftable = (Scaleform::BoolFormatter_vtbl *)&Scaleform::BoolFormatter::`vftable';
  v3 = *((_BYTE *)this + 24) & 0xFC;
  this->IsConverted = 0;
  *((_BYTE *)this + 24) = v | v3;
  this->result.pStr = 0i64;
  this->result.Size = 0i64;
}

void __fastcall Scaleform::DoubleFormatter::DoubleFormatter(
        Scaleform::DoubleFormatter *this,
        Scaleform::MsgFormat *f,
        long double v)
{
  char v3; // al

  this->pParentFmt = f;
  this->Scaleform::Formatter::Scaleform::FmtResource::__vftable = (Scaleform::DoubleFormatter_vtbl *)&Scaleform::Formatter::`vftable';
  this->IsConverted = 0;
  v3 = *((_BYTE *)&this->Scaleform::NumericBase + 6);
  *(_DWORD *)&this->Scaleform::NumericBase &= 0xFFFFFC21;
  *((_BYTE *)&this->Scaleform::NumericBase + 4) &= 0xA0u;
  *(_DWORD *)&this->Scaleform::NumericBase |= 0x21u;
  *((_BYTE *)&this->Scaleform::NumericBase + 4) |= 0x20u;
  *((_BYTE *)&this->Scaleform::NumericBase + 6) = v3 & 0xF0 | 1;
  *((_BYTE *)&this->Scaleform::NumericBase + 5) = 0;
  this->Scaleform::Formatter::Scaleform::FmtResource::__vftable = (Scaleform::DoubleFormatter_vtbl *)&Scaleform::DoubleFormatter::`vftable'{for `Scaleform::Formatter'};
  this->Scaleform::String::InitStruct::__vftable = (Scaleform::String::InitStruct_vtbl *)&Scaleform::DoubleFormatter::`vftable'{for `Scaleform::String::InitStruct'};
  this->ValueStr = &this->Buff[347];
  this->Value = v;
  this->Type = FmtDecimal;
  this->Len = 0i64;
  this->Buff[347] = 0;
  *(_DWORD *)&this->Scaleform::NumericBase &= 0xFFFFFFE6;
  *(_DWORD *)&this->Scaleform::NumericBase |= 6u;
}

void __fastcall Scaleform::DoubleFormatter::DoubleFormatter(Scaleform::DoubleFormatter *this, long double v)
{
  char v2; // al

  this->Scaleform::Formatter::Scaleform::FmtResource::__vftable = (Scaleform::DoubleFormatter_vtbl *)&Scaleform::Formatter::`vftable';
  this->pParentFmt = 0i64;
  this->IsConverted = 0;
  v2 = *((_BYTE *)&this->Scaleform::NumericBase + 6);
  *(_DWORD *)&this->Scaleform::NumericBase &= 0xFFFFFC21;
  *((_BYTE *)&this->Scaleform::NumericBase + 4) &= 0xA0u;
  *(_DWORD *)&this->Scaleform::NumericBase |= 0x21u;
  *((_BYTE *)&this->Scaleform::NumericBase + 4) |= 0x20u;
  *((_BYTE *)&this->Scaleform::NumericBase + 6) = v2 & 0xF0 | 1;
  *((_BYTE *)&this->Scaleform::NumericBase + 5) = 0;
  this->Scaleform::Formatter::Scaleform::FmtResource::__vftable = (Scaleform::DoubleFormatter_vtbl *)&Scaleform::DoubleFormatter::`vftable'{for `Scaleform::Formatter'};
  this->Scaleform::String::InitStruct::__vftable = (Scaleform::String::InitStruct_vtbl *)&Scaleform::DoubleFormatter::`vftable'{for `Scaleform::String::InitStruct'};
  this->ValueStr = &this->Buff[347];
  this->Value = v;
  this->Type = FmtDecimal;
  this->Len = 0i64;
  this->Buff[347] = 0;
  *(_DWORD *)&this->Scaleform::NumericBase &= 0xFFFFFFE6;
  *(_DWORD *)&this->Scaleform::NumericBase |= 6u;
}

void __fastcall Scaleform::LongFormatter::LongFormatter(Scaleform::LongFormatter *this, Scaleform::MsgFormat *f, int v)
{
  char v3; // al

  this->pParentFmt = f;
  this->Scaleform::Formatter::Scaleform::FmtResource::__vftable = (Scaleform::LongFormatter_vtbl *)&Scaleform::Formatter::`vftable';
  this->IsConverted = 0;
  v3 = *((_BYTE *)&this->Scaleform::NumericBase + 6);
  *(_DWORD *)&this->Scaleform::NumericBase &= 0xFFFFFC21;
  *((_BYTE *)&this->Scaleform::NumericBase + 4) &= 0xA0u;
  *(_DWORD *)&this->Scaleform::NumericBase |= 0x21u;
  *((_BYTE *)&this->Scaleform::NumericBase + 4) |= 0x20u;
  *((_BYTE *)&this->Scaleform::NumericBase + 6) = v3 & 0xF0 | 1;
  *((_BYTE *)&this->Scaleform::NumericBase + 5) = 0;
  this->ValueStr = 0i64;
  *((_DWORD *)this + 12) &= 0xFFFFFFEA;
  *((_DWORD *)this + 12) |= 0xAu;
  this->Scaleform::Formatter::Scaleform::FmtResource::__vftable = (Scaleform::LongFormatter_vtbl *)&Scaleform::LongFormatter::`vftable'{for `Scaleform::Formatter'};
  this->Scaleform::String::InitStruct::__vftable = (Scaleform::String::InitStruct_vtbl *)&Scaleform::LongFormatter::`vftable'{for `Scaleform::String::InitStruct'};
  *((_BYTE *)this + 52) = *((_BYTE *)this + 52) & 0xFC | 1;
  this->Value = v;
  this->ValueStr = &this->Buff[28];
  this->Buff[28] = 0;
}

void __fastcall Scaleform::LongFormatter::LongFormatter(
        Scaleform::LongFormatter *this,
        Scaleform::MsgFormat *f,
        unsigned int v)
{
  char v3; // al

  this->pParentFmt = f;
  this->Scaleform::Formatter::Scaleform::FmtResource::__vftable = (Scaleform::LongFormatter_vtbl *)&Scaleform::Formatter::`vftable';
  this->IsConverted = 0;
  v3 = *((_BYTE *)&this->Scaleform::NumericBase + 6);
  *(_DWORD *)&this->Scaleform::NumericBase &= 0xFFFFFC21;
  *((_BYTE *)&this->Scaleform::NumericBase + 4) &= 0xA0u;
  *(_DWORD *)&this->Scaleform::NumericBase |= 0x21u;
  *((_BYTE *)&this->Scaleform::NumericBase + 4) |= 0x20u;
  *((_BYTE *)&this->Scaleform::NumericBase + 6) = v3 & 0xF0 | 1;
  *((_BYTE *)&this->Scaleform::NumericBase + 5) = 0;
  this->ValueStr = 0i64;
  *((_DWORD *)this + 12) &= 0xFFFFFFEA;
  *((_DWORD *)this + 12) |= 0xAu;
  *((_BYTE *)this + 52) &= 0xFCu;
  this->Scaleform::Formatter::Scaleform::FmtResource::__vftable = (Scaleform::LongFormatter_vtbl *)&Scaleform::LongFormatter::`vftable'{for `Scaleform::Formatter'};
  this->Scaleform::String::InitStruct::__vftable = (Scaleform::String::InitStruct_vtbl *)&Scaleform::LongFormatter::`vftable'{for `Scaleform::String::InitStruct'};
  this->Value = v;
  this->ValueStr = &this->Buff[28];
  this->Buff[28] = 0;
}

void __fastcall Scaleform::LongFormatter::LongFormatter(Scaleform::LongFormatter *this, unsigned int v)
{
  char v2; // al

  this->Scaleform::Formatter::Scaleform::FmtResource::__vftable = (Scaleform::LongFormatter_vtbl *)&Scaleform::Formatter::`vftable';
  this->pParentFmt = 0i64;
  this->IsConverted = 0;
  v2 = *((_BYTE *)&this->Scaleform::NumericBase + 6);
  *(_DWORD *)&this->Scaleform::NumericBase &= 0xFFFFFC21;
  *((_BYTE *)&this->Scaleform::NumericBase + 4) &= 0xA0u;
  *(_DWORD *)&this->Scaleform::NumericBase |= 0x21u;
  *((_BYTE *)&this->Scaleform::NumericBase + 4) |= 0x20u;
  *((_BYTE *)&this->Scaleform::NumericBase + 6) = v2 & 0xF0 | 1;
  *((_BYTE *)&this->Scaleform::NumericBase + 5) = 0;
  this->ValueStr = 0i64;
  *((_DWORD *)this + 12) &= 0xFFFFFFEA;
  *((_DWORD *)this + 12) |= 0xAu;
  *((_BYTE *)this + 52) &= 0xFCu;
  this->Scaleform::Formatter::Scaleform::FmtResource::__vftable = (Scaleform::LongFormatter_vtbl *)&Scaleform::LongFormatter::`vftable'{for `Scaleform::Formatter'};
  this->Scaleform::String::InitStruct::__vftable = (Scaleform::String::InitStruct_vtbl *)&Scaleform::LongFormatter::`vftable'{for `Scaleform::String::InitStruct'};
  this->Value = v;
  this->ValueStr = &this->Buff[28];
  this->Buff[28] = 0;
}

void __fastcall Scaleform::LongFormatter::LongFormatter(Scaleform::LongFormatter *this, int v)
{
  char v2; // al

  this->Scaleform::Formatter::Scaleform::FmtResource::__vftable = (Scaleform::LongFormatter_vtbl *)&Scaleform::Formatter::`vftable';
  this->pParentFmt = 0i64;
  this->IsConverted = 0;
  v2 = *((_BYTE *)&this->Scaleform::NumericBase + 6);
  *(_DWORD *)&this->Scaleform::NumericBase &= 0xFFFFFC21;
  *((_BYTE *)&this->Scaleform::NumericBase + 4) &= 0xA0u;
  *(_DWORD *)&this->Scaleform::NumericBase |= 0x21u;
  *((_BYTE *)&this->Scaleform::NumericBase + 4) |= 0x20u;
  *((_BYTE *)&this->Scaleform::NumericBase + 6) = v2 & 0xF0 | 1;
  *((_BYTE *)&this->Scaleform::NumericBase + 5) = 0;
  this->ValueStr = 0i64;
  *((_DWORD *)this + 12) &= 0xFFFFFFEA;
  *((_DWORD *)this + 12) |= 0xAu;
  this->Scaleform::Formatter::Scaleform::FmtResource::__vftable = (Scaleform::LongFormatter_vtbl *)&Scaleform::LongFormatter::`vftable'{for `Scaleform::Formatter'};
  this->Scaleform::String::InitStruct::__vftable = (Scaleform::String::InitStruct_vtbl *)&Scaleform::LongFormatter::`vftable'{for `Scaleform::String::InitStruct'};
  *((_BYTE *)this + 52) = *((_BYTE *)this + 52) & 0xFC | 1;
  this->Value = v;
  this->ValueStr = &this->Buff[28];
  this->Buff[28] = 0;
}

void __fastcall Scaleform::LongFormatter::LongFormatter(Scaleform::LongFormatter *this, unsigned __int64 v)
{
  char v2; // al

  this->Scaleform::Formatter::Scaleform::FmtResource::__vftable = (Scaleform::LongFormatter_vtbl *)&Scaleform::Formatter::`vftable';
  this->pParentFmt = 0i64;
  this->IsConverted = 0;
  v2 = *((_BYTE *)&this->Scaleform::NumericBase + 6);
  *(_DWORD *)&this->Scaleform::NumericBase &= 0xFFFFFC21;
  *((_BYTE *)&this->Scaleform::NumericBase + 4) &= 0xA0u;
  *(_DWORD *)&this->Scaleform::NumericBase |= 0x21u;
  *((_BYTE *)&this->Scaleform::NumericBase + 4) |= 0x20u;
  *((_BYTE *)&this->Scaleform::NumericBase + 6) = v2 & 0xF0 | 1;
  *((_BYTE *)&this->Scaleform::NumericBase + 5) = 0;
  this->ValueStr = 0i64;
  *((_DWORD *)this + 12) &= 0xFFFFFFEA;
  *((_BYTE *)this + 52) &= ~1u;
  *((_DWORD *)this + 12) |= 0xAu;
  *((_BYTE *)this + 52) |= 2u;
  this->Scaleform::Formatter::Scaleform::FmtResource::__vftable = (Scaleform::LongFormatter_vtbl *)&Scaleform::LongFormatter::`vftable'{for `Scaleform::Formatter'};
  this->Scaleform::String::InitStruct::__vftable = (Scaleform::String::InitStruct_vtbl *)&Scaleform::LongFormatter::`vftable'{for `Scaleform::String::InitStruct'};
  this->ValueStr = &this->Buff[28];
  this->Value = v;
  this->Buff[28] = 0;
}

void __fastcall Scaleform::MsgFormat::MsgFormat(Scaleform::MsgFormat *this, const Scaleform::MsgFormat::Sink *r)
{
  char *v2; // rax

  *(_WORD *)&this->EscapeChar = 37;
  this->__vftable = (Scaleform::MsgFormat_vtbl *)&Scaleform::MsgFormat::`vftable';
  this->StrSize = 0i64;
  this->pLocaleProvider = 0i64;
  *(_DWORD *)&this->NonPosParamNum = -65536;
  v2 = (char *)((((unsigned __int64)&this->MemPool.pHeap + 7) & 0xFFFFFFFFFFFFFFF8ui64) + 8);
  *(_OWORD *)&this->Result.Type = *(_OWORD *)&r->Type;
  *(_OWORD *)&this->Result.SinkData.DataPtr.Size = r->SinkData.DataPtr.Size;
  this->Data.DynamicArray.Data.Data = 0i64;
  this->Data.DynamicArray.Data.Size = 0i64;
  this->Data.DynamicArray.Data.Policy.Capacity = 0i64;
  this->MemPool.pHeap = 0i64;
  this->MemPool.BuffPtr = v2;
  this->MemPool.BuffSize = (char *)&this->MemPool - v2 + 520;
}

void __fastcall Scaleform::RepeatFormatter::RepeatFormatter(
        Scaleform::RepeatFormatter *this,
        Scaleform::MsgFormat *f,
        unsigned int n)
{
  this->pParentFmt = f;
  this->__vftable = (Scaleform::RepeatFormatter_vtbl *)&Scaleform::RepeatFormatter::`vftable';
  this->IsConverted = 0;
  this->N = n;
  this->Str.pStr = 0i64;
  this->Str.Size = 0i64;
  Scaleform::StringBuffer::StringBuffer(&this->Buff, Scaleform::Memory::pGlobalHeap);
}

void __fastcall Scaleform::StrFormatter::StrFormatter(
        Scaleform::StrFormatter *this,
        Scaleform::MsgFormat *f,
        const Scaleform::String *v)
{
  this->pParentFmt = f;
  this->__vftable = (Scaleform::StrFormatter_vtbl *)&Scaleform::StrFormatter::`vftable';
  this->IsConverted = 0;
  this->Value.pStr = (const char *)((v->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
  this->Value.Size = *(_QWORD *)(v->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64;
}

void __fastcall Scaleform::StrFormatter::StrFormatter(
        Scaleform::StrFormatter *this,
        Scaleform::MsgFormat *f,
        const Scaleform::StringDataPtr *v)
{
  this->pParentFmt = f;
  this->__vftable = (Scaleform::StrFormatter_vtbl *)&Scaleform::StrFormatter::`vftable';
  this->IsConverted = 0;
  this->Value = *v;
}

void __fastcall Scaleform::StrFormatter::StrFormatter(
        Scaleform::StrFormatter *this,
        Scaleform::MsgFormat *f,
        const char *v)
{
  unsigned __int64 v3; // rax

  this->pParentFmt = f;
  this->__vftable = (Scaleform::StrFormatter_vtbl *)&Scaleform::StrFormatter::`vftable';
  this->IsConverted = 0;
  this->Value.pStr = v;
  if ( v )
  {
    v3 = -1i64;
    do
      ++v3;
    while ( v[v3] );
    this->Value.Size = v3;
  }
  else
  {
    this->Value.Size = 0i64;
  }
}

void __fastcall Scaleform::Formatter::~Formatter(Scaleform::Formatter *this)
{
  this->__vftable = (Scaleform::Formatter_vtbl *)&Scaleform::FmtResource::`vftable';
}

void __fastcall Scaleform::MsgFormat::~MsgFormat(Scaleform::MsgFormat *this)
{
  unsigned __int64 Size; // rbp
  unsigned __int64 v3; // rdi
  __int64 v4; // rsi
  char *StaticArray; // rax
  char *v6; // rax
  void (__fastcall ***v7)(void *, _QWORD); // rbx

  Size = this->Data.Size;
  v3 = 0i64;
  this->__vftable = (Scaleform::MsgFormat_vtbl *)&Scaleform::MsgFormat::`vftable';
  if ( Size )
  {
    v4 = 0i64;
    do
    {
      if ( v3 >= 0x10 )
        StaticArray = (char *)&this->Data.DynamicArray.Data.Data[-16];
      else
        StaticArray = this->Data.StaticArray;
      v6 = &StaticArray[v4];
      if ( *(_DWORD *)v6 == 2 )
      {
        if ( v6[16] )
        {
          v7 = (void (__fastcall ***)(void *, _QWORD))*((_QWORD *)v6 + 1);
          if ( v7 )
          {
            (**v7)(v7, 0i64);
            if ( v7 < (void (__fastcall ***)(void *, _QWORD))this->MemPool.Buff
              || v7 >= (void (__fastcall ***)(void *, _QWORD))&this->MemPool.BuffPtr )
            {
              Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v7);
            }
          }
        }
      }
      ++v3;
      v4 += 24i64;
    }
    while ( v3 < Size );
  }
  if ( this->Data.DynamicArray.Data.Data )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  this->__vftable = (Scaleform::MsgFormat_vtbl *)&Scaleform::GFx::AS3::VectorBase<unsigned long>::ArrayFunc::`vftable';
}

void __fastcall Scaleform::SwitchFormatter::~SwitchFormatter(Scaleform::SwitchFormatter *this)
{
  Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF> >::TableType *pTable; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF> >::TableType *v5; // rax

  pTable = this->StringSet.mHash.pTable;
  if ( pTable )
  {
    v3 = 0i64;
    v4 = pTable->SizeMask + 1;
    do
    {
      v5 = this->StringSet.mHash.pTable;
      if ( *(unsigned __int64 *)((char *)&v5[1].EntryCount + v3) != -2i64 )
        *(unsigned __int64 *)((char *)&v5[1].EntryCount + v3) = -2i64;
      v3 += 40i64;
      --v4;
    }
    while ( v4 );
    if ( this->StringSet.mHash.pTable )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    this->StringSet.mHash.pTable = 0i64;
    this->__vftable = (Scaleform::SwitchFormatter_vtbl *)&Scaleform::FmtResource::`vftable';
  }
  else
  {
    this->__vftable = (Scaleform::SwitchFormatter_vtbl *)&Scaleform::FmtResource::`vftable';
  }
}

void __fastcall Scaleform::MsgFormat::AddStringRecord(Scaleform::MsgFormat *this, const Scaleform::StringDataPtr *str)
{
  Scaleform::MsgFormat::StackArray<Scaleform::MsgFormat::fmt_record,16,Scaleform::ArrayPOD<Scaleform::MsgFormat::fmt_record,2,Scaleform::ArrayDefaultPolicy> > *p_Data; // rsi
  unsigned __int64 Size; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::MsgFormat::fmt_record *Data; // rax
  __int64 v9; // rcx
  __int64 v10; // [rsp+28h] [rbp-30h]
  __int128 v11; // [rsp+30h] [rbp-28h]

  p_Data = &this->Data;
  LOBYTE(v10) = str->Size;
  Size = this->Data.Size;
  LODWORD(v11) = 0;
  *((_QWORD *)&v11 + 1) = str->pStr;
  if ( Size < 0x10 )
  {
    v4 = 3 * Size;
    *(_OWORD *)&p_Data->StaticArray[8 * v4] = v11;
    *(_QWORD *)&p_Data->StaticArray[8 * v4 + 16] = v10;
    ++p_Data->Size;
    return;
  }
  v5 = this->Data.DynamicArray.Data.Size;
  v6 = v5 + 1;
  if ( v5 + 1 >= v5 )
  {
    if ( v6 > this->Data.DynamicArray.Data.Policy.Capacity )
    {
      v7 = v6 + (v6 >> 2);
      goto LABEL_8;
    }
  }
  else if ( v6 < this->Data.DynamicArray.Data.Policy.Capacity >> 1 )
  {
    v7 = v5 + 1;
LABEL_8:
    Scaleform::ArrayDataBase<Scaleform::GFx::Text::CSSToken<wchar_t>,Scaleform::AllocatorGH<Scaleform::GFx::Text::CSSToken<wchar_t>,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      (Scaleform::ArrayDataBase<Scaleform::Render::Font::NativeHintingType,Scaleform::AllocatorGH<Scaleform::Render::Font::NativeHintingType,2>,Scaleform::ArrayDefaultPolicy> *)&this->Data.DynamicArray,
      &this->Data.DynamicArray,
      v7);
  }
  Data = p_Data->DynamicArray.Data.Data;
  v9 = v6;
  p_Data->DynamicArray.Data.Size = v6;
  *(_OWORD *)&Data[v9 - 1].RecType = v11;
  *(_QWORD *)&Data[v9 - 1].RecValue.Formatter.Allocated = v10;
  ++p_Data->Size;
}

char *__fastcall Scaleform::AppendCharLeft(char *buff, unsigned __int64 buffSz, char *value_ptr, unsigned int ucs_char)
{
  char *v5; // rbx
  __int64 pindex[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = value_ptr;
  if ( ucs_char )
  {
    v5 = &value_ptr[-Scaleform::UTF8Util::GetEncodeCharSize(ucs_char)];
    if ( buff > v5 )
      return 0i64;
    pindex[0] = 0i64;
    Scaleform::UTF8Util::EncodeCharSafe(v5, buffSz, pindex, ucs_char);
  }
  return v5;
}

void __fastcall Scaleform::LongFormatter::AppendSignCharLeft(Scaleform::LongFormatter *this, bool negative)
{
  Scaleform::MsgFormat *pParentFmt; // rcx
  const Scaleform::LocaleProvider *pLocaleProvider; // rcx
  __int64 v6; // rax
  unsigned int v7; // er9

  pParentFmt = this->pParentFmt;
  if ( pParentFmt && (pLocaleProvider = pParentFmt->pLocaleProvider) != 0i64 )
  {
    v6 = (__int64)pLocaleProvider->GetLocale(pLocaleProvider);
    if ( negative )
    {
      v7 = *(_DWORD *)(v6 + 36);
    }
    else
    {
      if ( *((_BYTE *)&this->Scaleform::NumericBase + 5) < 0x80u )
        return;
      v7 = *(_DWORD *)(v6 + 32);
    }
    this->ValueStr = Scaleform::AppendCharLeft(this->Buff, 0x1Dui64, this->ValueStr, v7);
  }
  else if ( negative )
  {
    *--this->ValueStr = 45;
  }
  else if ( *((_BYTE *)&this->Scaleform::NumericBase + 5) >= 0x80u )
  {
    *--this->ValueStr = 43;
  }
}

void __fastcall Scaleform::MsgFormat::Bind(
        Scaleform::MsgFormat *this,
        Scaleform::Formatter *formatter,
        const bool allocated)
{
  unsigned __int64 DataInd; // r9
  Scaleform::MsgFormat::StackArray<Scaleform::MsgFormat::fmt_record,16,Scaleform::ArrayPOD<Scaleform::MsgFormat::fmt_record,2,Scaleform::ArrayDefaultPolicy> > *p_Data; // r10
  Scaleform::MsgFormat::fmt_record *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // xmm1_8
  __int128 v8; // [rsp+20h] [rbp-48h]
  Scaleform::MsgFormat::fmt_value RecValue; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v10[24]; // [rsp+40h] [rbp-28h]

  DataInd = this->DataInd;
  p_Data = &this->Data;
  if ( DataInd >= 0x10 )
    v5 = &this->Data.DynamicArray.Data.Data[DataInd - 16];
  else
    v5 = (Scaleform::MsgFormat::fmt_record *)&p_Data->StaticArray[16 * DataInd + 8 * DataInd];
  *(_QWORD *)&v8 = formatter;
  BYTE8(v8) = allocated;
  *(_DWORD *)v10 = 2;
  RecValue = v5->RecValue;
  *(_OWORD *)&v10[8] = v8;
  if ( DataInd >= 0x10 )
    v6 = (__int64)&p_Data->DynamicArray.Data.Data[DataInd - 16];
  else
    v6 = (__int64)&p_Data->StaticArray[16 * DataInd + 8 * DataInd];
  v7 = *(_QWORD *)&v10[16];
  *(_OWORD *)v6 = *(_OWORD *)v10;
  *(_QWORD *)(v6 + 16) = v7;
  if ( RecValue.String.Len )
  {
    *(_QWORD *)&RecValue.Formatter.Allocated = RecValue.String.Len;
    formatter->Parse(formatter, (const Scaleform::StringDataPtr *)&RecValue);
  }
}

void __fastcall Scaleform::MsgFormat::BindNonPos(Scaleform::MsgFormat *this)
{
  const Scaleform::LocaleProvider *pLocaleProvider; // rcx
  __int128 v4; // [rsp+20h] [rbp-78h]
  Scaleform::Formatter formatter; // [rsp+40h] [rbp-58h] BYREF
  __int128 v6; // [rsp+58h] [rbp-40h]
  __int64 v7; // [rsp+68h] [rbp-30h]
  Scaleform::ResouceProvider *v8; // [rsp+70h] [rbp-28h]
  __int64 v9; // [rsp+78h] [rbp-20h]
  __int64 v10; // [rsp+80h] [rbp-18h]

  formatter.pParentFmt = this;
  formatter.IsConverted = 0;
  BYTE8(v4) = 1;
  formatter.__vftable = (Scaleform::Formatter_vtbl *)&Scaleform::ResourceFormatter::`vftable';
  *(_QWORD *)&v4 = 0i64;
  v6 = v4;
  v7 = 0i64;
  v9 = 0i64;
  v10 = 0i64;
  v8 = 0i64;
  pLocaleProvider = this->pLocaleProvider;
  if ( pLocaleProvider )
    v8 = pLocaleProvider->GetDefaultRCProvider(pLocaleProvider);
  if ( Scaleform::MsgFormat::NextFormatter(this) )
    Scaleform::MsgFormat::Bind(this, &formatter, 0);
  if ( this->NonPosParamNum-- == 1 )
    Scaleform::MsgFormat::MakeString(this);
  else
    Scaleform::MsgFormat::BindNonPos(this);
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeHashF>>::CheckExpand(
        Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF> > *this,
        void *pmemAddr)
{
  Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 SizeMask; // r8

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount > 4 * SizeMask + 4 )
      Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeHashF>>::setRawCapacity(
        this,
        pmemAddr,
        2 * SizeMask + 2);
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeHashF>>::setRawCapacity(
      this,
      pmemAddr,
      8ui64);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeHashF>>::Clear(
        Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF> > *this)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // r8

  if ( this->pTable )
  {
    v2 = 0i64;
    v3 = this->pTable->SizeMask + 1;
    do
    {
      if ( *(unsigned __int64 *)((char *)&this->pTable[1].EntryCount + v2) != -2i64 )
        *(unsigned __int64 *)((char *)&this->pTable[1].EntryCount + v2) = -2i64;
      v2 += 40i64;
      --v3;
    }
    while ( v3 );
    if ( this->pTable )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    this->pTable = 0i64;
  }
}

void __fastcall Scaleform::BoolFormatter::Convert(Scaleform::BoolFormatter *this)
{
  char v1; // al
  const char *v2; // rax
  Scaleform::StringDataPtr v3; // [rsp+0h] [rbp-18h]

  if ( !this->IsConverted )
  {
    v1 = *((_BYTE *)this + 24);
    if ( (v1 & 2) == 0 )
    {
      if ( (v1 & 1) != 0 )
      {
        v2 = "true";
        v3.Size = 4i64;
      }
      else
      {
        v2 = "false";
        v3.Size = 5i64;
      }
      v3.pStr = v2;
      this->result = v3;
    }
    this->IsConverted = 1;
  }
}

void __fastcall Scaleform::DoubleFormatter::Convert(Scaleform::DoubleFormatter *this)
{
  Scaleform::DoubleFormatter::PresentationType Type; // ecx
  char v3; // dl
  __int32 v4; // ecx
  bool v5; // cf
  char *v6; // rcx
  char v7; // al
  unsigned int v8; // er9
  char *ValueStr; // rax
  char *v10; // rax
  char format[2]; // [rsp+30h] [rbp-58h] BYREF
  char v12; // [rsp+32h] [rbp-56h] BYREF
  char v13; // [rsp+33h] [rbp-55h] BYREF
  char dest[32]; // [rsp+50h] [rbp-38h] BYREF

  if ( !this->IsConverted )
  {
    Type = this->Type;
    v3 = 32;
    if ( Type )
    {
      v4 = Type - 1;
      if ( v4 )
      {
        if ( v4 == 1 )
          v3 = (32 * ((*((_BYTE *)&this->Scaleform::NumericBase + 6) & 1) == 0)) | 0x47;
      }
      else
      {
        v3 = (32 * ((*((_BYTE *)&this->Scaleform::NumericBase + 6) & 1) == 0)) | 0x45;
      }
    }
    else
    {
      v3 = 102;
    }
    v5 = *((_BYTE *)&this->Scaleform::NumericBase + 5) < 0x80u;
    v6 = &v12;
    *(_WORD *)format = 9509;
    if ( !v5 )
    {
      v12 = 43;
      v6 = &v13;
    }
    v7 = *((_BYTE *)&this->Scaleform::NumericBase + 6);
    if ( (v7 & 8) != 0 )
      *v6++ = 35;
    if ( (v7 & 2) != 0 )
      *v6++ = 32;
    if ( (v7 & 4) != 0 )
      *v6++ = 45;
    if ( (*((_BYTE *)&this->Scaleform::NumericBase + 4) & 0x7F) == 48 )
      *v6++ = 48;
    v8 = (unsigned int)this->Scaleform::NumericBase;
    if ( (v8 & 0x3E0) == 32 )
    {
      *(_WORD *)v6 = 9518;
      v6[2] = 100;
      v6[3] = v3;
      v6[4] = 0;
      Scaleform::SFsprintf(dest, 0x20ui64, format, v8 & 0x1F);
    }
    else
    {
      *(_DWORD *)v6 = 623797285;
      v6[4] = 100;
      v6[5] = v3;
      v6[6] = 0;
      Scaleform::SFsprintf(dest, 0x20ui64, format, (v8 >> 5) & 0x1F, v8 & 0x1F);
    }
    this->Len = Scaleform::SFsprintf(this->Buff, 0x15Cui64, dest, this->Value);
    this->ValueStr = this->Buff;
    if ( this->Buff[0] )
    {
      while ( 1 )
      {
        ValueStr = this->ValueStr;
        if ( *ValueStr == 44 )
          break;
        v10 = ValueStr + 1;
        this->ValueStr = v10;
        if ( !*v10 )
          goto LABEL_26;
      }
      *ValueStr = 46;
    }
LABEL_26:
    this->ValueStr = this->Buff;
    this->IsConverted = 1;
  }
}

void __fastcall Scaleform::LongFormatter::Convert(Scaleform::LongFormatter *this)
{
  char v2; // al
  unsigned __int64 i; // rcx
  __int64 Value; // rcx
  unsigned __int64 j; // rdx
  BOOL v6; // ecx
  int v7; // edx
  char v8; // cl
  char *ValueStr; // rdx
  char *v10; // rdi
  unsigned __int64 v11; // rax
  char *v12; // r14
  unsigned __int64 v13; // rax
  char *v14; // r14

  if ( !this->IsConverted )
  {
    if ( (*(_BYTE *)&this->Scaleform::NumericBase & 0x1F) != 0 || this->Value )
    {
      v2 = *((_BYTE *)this + 52);
      if ( (v2 & 2) != 0 )
      {
        Scaleform::NumericBase::ULongLong2String(
          &this->Scaleform::NumericBase,
          this->Buff,
          abs64(this->Value),
          1,
          *((_DWORD *)this + 12) & 0x1F);
      }
      else if ( (v2 & 1) != 0 )
      {
        Scaleform::NumericBase::ULong2String(
          &this->Scaleform::NumericBase,
          this->Buff,
          abs32(this->Value),
          1,
          *((_DWORD *)this + 12) & 0x1F);
      }
      else
      {
        Scaleform::NumericBase::ULong2String(
          &this->Scaleform::NumericBase,
          this->Buff,
          this->Value,
          1,
          *((_DWORD *)this + 12) & 0x1F);
      }
    }
    for ( i = (char *)this - this->ValueStr + 92;
          i < (*(_DWORD *)&this->Scaleform::NumericBase & 0x1Fu);
          *this->ValueStr = 48 )
    {
      --this->ValueStr;
      ++i;
    }
    if ( (*(_BYTE *)&this->Scaleform::NumericBase & 0x1F) == 0 )
    {
      *((_BYTE *)&this->Scaleform::NumericBase + 4) &= 0xA0u;
      *((_BYTE *)&this->Scaleform::NumericBase + 4) |= 0x20u;
    }
    Value = this->Value;
    if ( Value >= 0 )
    {
      v7 = *((_DWORD *)this + 12) & 0x1F;
      if ( ((v7 - 8) & 0xFFFFFFF7) == 0 )
      {
        if ( Value )
        {
          v8 = *((_BYTE *)&this->Scaleform::NumericBase + 6);
          if ( (v8 & 8) != 0 )
          {
            if ( v7 == 16 )
              *--this->ValueStr = (32 * ((v8 & 1) == 0)) | 0x58;
            *--this->ValueStr = 48;
          }
        }
      }
    }
    else
    {
      if ( (*((_BYTE *)&this->Scaleform::NumericBase + 4) & 0x7F) == 48 )
      {
        for ( j = (char *)this - this->ValueStr + 92; ; ++j )
        {
          v6 = *((_BYTE *)&this->Scaleform::NumericBase + 5) >= 0x80u
            || (*((_BYTE *)&this->Scaleform::NumericBase + 6) & 2) != 0;
          if ( j >= ((*(_DWORD *)&this->Scaleform::NumericBase >> 5) & 0x1Fu) - v6 )
            break;
          *--this->ValueStr = (char)(2 * *((_BYTE *)&this->Scaleform::NumericBase + 4)) >> 1;
        }
      }
      Scaleform::LongFormatter::AppendSignCharLeft(this, (__int64)this->Value < 0);
    }
    if ( (*((_BYTE *)&this->Scaleform::NumericBase + 6) & 2) != 0
      && *((_BYTE *)&this->Scaleform::NumericBase + 5) < 0x80u )
    {
      *((_BYTE *)&this->Scaleform::NumericBase + 4) &= 0xA0u;
      *((_BYTE *)&this->Scaleform::NumericBase + 4) |= 0x20u;
      if ( (*((_BYTE *)this + 52) & 1) != 0 && (__int64)this->Value >= 0 )
        *--this->ValueStr = 32;
    }
    ValueStr = this->ValueStr;
    v10 = (char *)((char *)this - ValueStr + 92);
    v11 = (*(_DWORD *)&this->Scaleform::NumericBase >> 5) & 0x1F;
    if ( (*((_BYTE *)&this->Scaleform::NumericBase + 6) & 4) != 0 )
    {
      if ( (unsigned __int64)v10 < v11 )
      {
        v12 = &this->Buff[-v11 + 28];
        memmove(v12, ValueStr, (char *)this - ValueStr + 92);
        v13 = (unsigned __int64)*(_DWORD *)&this->Scaleform::NumericBase >> 5;
        this->ValueStr = v12;
        v14 = &v12[(_QWORD)v10];
        if ( (unsigned __int64)v10 < (v13 & 0x1F) )
        {
          do
          {
            ++v14;
            ++v10;
            *(v14 - 1) = (char)(2 * *((_BYTE *)&this->Scaleform::NumericBase + 4)) >> 1;
          }
          while ( (unsigned __int64)v10 < ((*(_DWORD *)&this->Scaleform::NumericBase >> 5) & 0x1Fu) );
        }
      }
    }
    else if ( (unsigned __int64)v10 < v11 )
    {
      do
      {
        --this->ValueStr;
        ++v10;
        *this->ValueStr = (char)(2 * *((_BYTE *)&this->Scaleform::NumericBase + 4)) >> 1;
      }
      while ( (unsigned __int64)v10 < ((*(_DWORD *)&this->Scaleform::NumericBase >> 5) & 0x1Fu) );
    }
    this->IsConverted = 1;
  }
}

void __fastcall Scaleform::RepeatFormatter::Convert(Scaleform::RepeatFormatter *this)
{
  unsigned int i; // edi

  if ( !this->IsConverted )
  {
    Scaleform::StringBuffer::Reserve(&this->Buff, this->Str.Size * (unsigned int)this->N);
    for ( i = 0; i < this->N; ++i )
      Scaleform::StringBuffer::AppendString(&this->Buff, this->Str.pStr, this->Str.Size);
    this->IsConverted = 1;
  }
}

void __fastcall Scaleform::ResourceFormatter::Convert(Scaleform::ResourceFormatter *this)
{
  const Scaleform::ResouceProvider *pRP; // rcx
  Scaleform::StringDataPtr v3; // xmm0
  Scaleform::StringDataPtr v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+30h] [rbp-18h] BYREF
  __int64 v6; // [rsp+38h] [rbp-10h]

  if ( !this->IsConverted )
  {
    pRP = this->pRP;
    v5 = 0;
    v6 = 0i64;
    if ( pRP )
    {
      pRP->MakeString((Scaleform::ResouceProvider *)pRP, &v4, &this->Value, (const Scaleform::FmtResource::TAttrs *)&v5);
      v3 = v4;
      this->IsConverted = 1;
      this->Result = v3;
    }
    else
    {
      this->IsConverted = 1;
      this->Result = 0ui64;
    }
  }
}

void __fastcall Scaleform::StrFormatter::Convert(Scaleform::StrFormatter *this)
{
  this->IsConverted = 1;
}

void __fastcall Scaleform::SwitchFormatter::Convert(Scaleform::SwitchFormatter *this)
{
  Scaleform::StringDataPtr *p_StrValue; // rdi
  __int64 Index; // rax
  char *v4; // rdx
  Scaleform::StringDataPtr DefaultStrValue; // xmm0

  if ( !this->IsConverted )
  {
    p_StrValue = &this->StrValue;
    Index = Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeHashF>>::findIndexAlt<int>(
              &this->StringSet.mHash,
              &this->Value);
    if ( Index >= 0 && (v4 = (char *)&this->StringSet.mHash.pTable[2] + 40 * Index) != 0i64 )
    {
      if ( !p_StrValue )
      {
LABEL_8:
        this->IsConverted = 1;
        return;
      }
      DefaultStrValue = *(Scaleform::StringDataPtr *)(v4 + 8);
    }
    else
    {
      DefaultStrValue = this->DefaultStrValue;
    }
    *p_StrValue = DefaultStrValue;
    goto LABEL_8;
  }
}

void __fastcall Scaleform::MsgFormat::Evaluate(Scaleform::MsgFormat *this, unsigned __int64 ind)
{
  char *v3; // r8
  char *v4; // rdi
  _BYTE *v5; // rdi
  char v6; // al
  __int64 v7; // rax
  _BYTE *v8; // rcx
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  char v11; // al
  unsigned __int64 v12; // rsi
  char *StaticArray; // rcx
  int v14; // ecx
  char *v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rax
  char *v19; // rax
  char *v20; // rax
  unsigned __int64 v21; // rcx
  const char *v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rsi
  Scaleform::MsgFormat::fmt_record *v26; // rax
  Scaleform::MsgFormat::ERecType RecType; // eax
  char *v28; // rax
  __m128i *v29; // rax
  unsigned __int64 v30; // xmm0_8
  unsigned int Char_Advance0; // eax
  unsigned __int64 v32; // rcx
  int v33; // er8
  int v34; // ecx
  __int64 v35; // rax
  unsigned __int64 v36; // rsi
  __int64 v37; // rbx
  __int64 v38; // rax
  char *v39; // rcx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rbx
  unsigned int v42; // eax
  unsigned __int64 v43; // rcx
  int v44; // er8
  int v45; // ecx
  char v46; // r8
  Scaleform::MsgFormat *v47; // r8
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rdx
  char *v50; // rbx
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rax
  __m128i *v54; // rax
  unsigned __int64 v55; // xmm0_8
  unsigned int v56; // eax
  unsigned __int64 v57; // rcx
  int v58; // er8
  int v59; // ecx
  __int64 v60; // rax
  int v61; // eax
  int v62; // eax
  char v63; // al
  char v64; // dl
  char v65; // r9
  unsigned __int64 Size; // r8
  __int64 v67; // rcx
  char *v68; // rax
  __int64 v69; // rbx
  __int64 v70; // rax
  __int64 v71; // rcx
  unsigned __int64 v72; // rax
  char *v73; // rbx
  unsigned int v74; // eax
  unsigned __int64 v75; // rcx
  int v76; // er8
  int v77; // ecx
  char *v78; // rbx
  __int64 v79; // rbx
  __int64 v80; // rax
  _BYTE *v81; // rcx
  Scaleform::MsgFormat *v82; // rsi
  unsigned __int64 v83; // rdi
  unsigned __int64 v84; // rdx
  __int64 v85; // rcx
  Scaleform::MsgFormat::fmt_record *v86; // rax
  __int64 v87; // rcx
  Scaleform::MsgFormat::fmt_record *v88; // rax
  __int64 v89; // rbx
  char *putf8Buffer; // [rsp+20h] [rbp-59h] BYREF
  _BYTE *v91; // [rsp+28h] [rbp-51h]
  Scaleform::StringDataPtr v92; // [rsp+30h] [rbp-49h] BYREF
  unsigned __int64 inda; // [rsp+40h] [rbp-39h] BYREF
  char *v94[2]; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int128 v95; // [rsp+60h] [rbp-19h] BYREF
  unsigned __int64 v96; // [rsp+70h] [rbp-9h] BYREF
  char *v97[2]; // [rsp+80h] [rbp+7h] BYREF
  char v98[16]; // [rsp+90h] [rbp+17h] BYREF
  char v99[24]; // [rsp+A0h] [rbp+27h] BYREF
  char v102; // [rsp+F0h] [rbp+77h]
  unsigned __int8 v103; // [rsp+F0h] [rbp+77h]
  unsigned __int8 v104; // [rsp+F0h] [rbp+77h]
  char v105; // [rsp+F8h] [rbp+7Fh]

  if ( ind >= 0x10 )
    v3 = (char *)&this->Data.DynamicArray.Data.Data[ind - 16];
  else
    v3 = &this->Data.StaticArray[24 * ind];
  if ( *(_DWORD *)v3 == 2 )
  {
    if ( ind >= 0x10 )
      v4 = (char *)&this->Data.DynamicArray.Data.Data[ind - 16];
    else
      v4 = &this->Data.StaticArray[24 * ind];
    v5 = (_BYTE *)*((_QWORD *)v4 + 1);
    v91 = v5;
    v6 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v5 + 48i64))(v5);
    v105 = v6;
    if ( !v6 )
    {
      if ( v5[16] )
        return;
      v7 = *(_QWORD *)v5;
      v8 = v5;
LABEL_153:
      (*(void (__fastcall **)(_BYTE *))(v7 + 24))(v8);
      return;
    }
    v9 = 0xFFFFFFFFi64;
    if ( (v6 & 2) != 0 )
    {
      v10 = ind - 1;
      v11 = 0;
      putf8Buffer = (char *)(ind - 1);
      v102 = 0;
      if ( ind != 0x100000000i64 )
      {
        v12 = 24 * v10;
        while ( 1 )
        {
          if ( v11 )
            goto LABEL_40;
          if ( v10 >= 0x10 )
          {
            StaticArray = (char *)&this->Data.DynamicArray.Data.Data[-16];
            v11 = v102;
          }
          else
          {
            StaticArray = this->Data.StaticArray;
          }
          v14 = *(_DWORD *)&StaticArray[v12];
          if ( v14 )
          {
            if ( v14 == 2 )
            {
              if ( v10 >= 0x10 )
                v15 = (char *)&this->Data.DynamicArray.Data.Data[v12 / 0x18 - 16];
              else
                v15 = &this->Data.StaticArray[v12];
              v16 = *((_QWORD *)v15 + 1);
              if ( ((*(__int64 (__fastcall **)(__int64, Scaleform::MsgFormat *))(*(_QWORD *)v16 + 48i64))(v16, this) & 4) != 0 )
              {
                v5 = v91;
                v94[0] = "stub";
                v94[1] = (char *)4;
                (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v91 + 56i64))(v91, v94);
                v11 = 1;
                v102 = 1;
              }
              else if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 48i64))(v16) & 8) != 0
                     && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v16 + 88i64))(v16) == 2 )
              {
                v5 = v91;
                v97[0] = "stub";
                v97[1] = (char *)4;
                (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v91 + 56i64))(v91, v97);
                v11 = 1;
                v102 = 1;
              }
              else
              {
                Scaleform::MsgFormat::Evaluate(this, v10);
                v95 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v16 + 32i64))(
                                   v16,
                                   &v96);
                if ( Scaleform::IsSpace((Scaleform::StringDataPtr *)&v95) )
                {
                  v5 = v91;
LABEL_36:
                  v11 = v102;
                  goto LABEL_37;
                }
                v17 = *(_QWORD *)v91;
                v18 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v16 + 32i64))(v16, &inda);
                v5 = v91;
                (*(void (__fastcall **)(_BYTE *, __int64))(v17 + 56))(v91, v18);
                v10 = (unsigned __int64)putf8Buffer;
                v11 = 1;
                v102 = 1;
              }
            }
          }
          else
          {
            if ( v10 >= 0x10 )
              v19 = (char *)&this->Data.DynamicArray.Data.Data[-16];
            else
              v19 = this->Data.StaticArray;
            v20 = &v19[v12];
            v21 = (unsigned __int8)v20[16];
            v22 = (const char *)*((_QWORD *)v20 + 1);
            v92.Size = v21;
            v92.pStr = v22;
            v95 = (unsigned __int128)v92;
            if ( Scaleform::IsSpace((Scaleform::StringDataPtr *)&v95) )
              goto LABEL_36;
            (*(void (__fastcall **)(_BYTE *, Scaleform::StringDataPtr *))(*(_QWORD *)v5 + 56i64))(v5, &v92);
            v11 = 1;
            v102 = 1;
          }
LABEL_37:
          --v10;
          v12 -= 24i64;
          v9 = 0xFFFFFFFFi64;
          putf8Buffer = (char *)v10;
          if ( v10 == 0xFFFFFFFF )
          {
            if ( v11 )
              goto LABEL_40;
            break;
          }
        }
      }
      v23 = *(_QWORD *)v5;
      v92 = (Scaleform::StringDataPtr)0i64;
      (*(void (__fastcall **)(_BYTE *, Scaleform::StringDataPtr *))(v23 + 56))(v5, &v92);
    }
LABEL_40:
    if ( (v105 & 1) != 0 )
    {
      LOBYTE(v9) = 0;
      v24 = ind - 1;
      v103 = 0;
      inda = ind - 1;
      if ( ind != 0x100000000i64 )
      {
        v25 = v24;
        while ( 1 )
        {
          if ( (_BYTE)v9 )
            goto LABEL_74;
          v26 = v24 >= 0x10 ? &this->Data.DynamicArray.Data.Data[-16] : (Scaleform::MsgFormat::fmt_record *)this->Data.StaticArray;
          RecType = v26[v25].RecType;
          if ( RecType == eStrType )
            break;
          if ( RecType == eFmtType )
          {
            if ( inda >= 0x10 )
              v28 = (char *)&this->Data.DynamicArray.Data.Data[-16];
            else
              v28 = this->Data.StaticArray;
            v96 = *(_QWORD *)&v28[v25 * 24 + 8];
            (*(void (__fastcall **)(__int64, Scaleform::MsgFormat *))(*(_QWORD *)v96 + 48i64))(v9, this);
            Scaleform::MsgFormat::Evaluate(this, inda);
            v29 = (__m128i *)(*(__int64 (__fastcall **)(unsigned __int64, unsigned __int128 *))(*(_QWORD *)v96 + 32i64))(
                               v96,
                               &v95);
            v30 = _mm_srli_si128(*v29, 8).m128i_u64[0];
            putf8Buffer = (char *)v29->m128i_i64[0];
            v94[0] = &putf8Buffer[v30];
            if ( putf8Buffer != &putf8Buffer[v30] )
            {
              while ( 1 )
              {
                Char_Advance0 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
                if ( !Char_Advance0 )
                  break;
                v32 = (unsigned __int64)(unsigned __int16)Char_Advance0 >> 8;
                v33 = Scaleform::UnicodeSpaceBits[v32];
                if ( !Scaleform::UnicodeSpaceBits[v32] )
                  break;
                if ( v33 != 1 )
                {
                  v34 = Scaleform::UnicodeSpaceBits[v33 + ((unsigned __int8)Char_Advance0 >> 4)];
                  if ( !_bittest(&v34, Char_Advance0 & 0xF) )
                    break;
                }
                if ( putf8Buffer >= v94[0] )
                  goto LABEL_58;
              }
              v37 = *(_QWORD *)v5;
              v38 = (*(__int64 (__fastcall **)(unsigned __int64, char **))(*(_QWORD *)v96 + 32i64))(v96, v97);
              (*(void (__fastcall **)(_BYTE *, __int64))(v37 + 56))(v5, v38);
              LOBYTE(v9) = 1;
              v103 = 1;
              goto LABEL_59;
            }
            goto LABEL_58;
          }
LABEL_59:
          --v25;
          v24 = inda - 1;
          inda = v24;
          if ( v24 == 0xFFFFFFFF )
          {
            if ( (_BYTE)v9 )
              goto LABEL_74;
            goto LABEL_61;
          }
        }
        if ( inda >= 0x10 )
          v39 = (char *)&this->Data.DynamicArray.Data.Data[v25 - 16];
        else
          v39 = &this->Data.StaticArray[v25 * 24];
        v40 = (unsigned __int8)v39[16];
        v92.pStr = (const char *)*((_QWORD *)v39 + 1);
        v92.Size = v40;
        putf8Buffer = (char *)v92.pStr;
        v41 = (unsigned __int64)&v92.pStr[v40];
        if ( v92.pStr != &v92.pStr[v40] )
        {
          while ( 1 )
          {
            v42 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
            if ( !v42 )
              break;
            v43 = (unsigned __int64)(unsigned __int16)v42 >> 8;
            v44 = Scaleform::UnicodeSpaceBits[v43];
            if ( !Scaleform::UnicodeSpaceBits[v43] )
              break;
            if ( v44 != 1 )
            {
              v45 = Scaleform::UnicodeSpaceBits[v44 + ((unsigned __int8)v42 >> 4)];
              if ( !_bittest(&v45, v42 & 0xF) )
                break;
            }
            if ( (unsigned __int64)putf8Buffer >= v41 )
              goto LABEL_58;
          }
          (*(void (__fastcall **)(_BYTE *, Scaleform::StringDataPtr *))(*(_QWORD *)v5 + 56i64))(v5, &v92);
          LOBYTE(v9) = 1;
          v103 = 1;
          goto LABEL_59;
        }
LABEL_58:
        v9 = v103;
        goto LABEL_59;
      }
LABEL_61:
      v35 = *(_QWORD *)v5;
      v36 = 0i64;
      v92 = (Scaleform::StringDataPtr)0i64;
      (*(void (__fastcall **)(_BYTE *, Scaleform::StringDataPtr *))(v35 + 56))(v5, &v92);
    }
    else
    {
LABEL_74:
      v36 = 0i64;
    }
    v46 = v105;
    if ( (v105 & 4) != 0 )
    {
      v47 = this;
      LOBYTE(v9) = 0;
      v48 = ind + 1;
      v104 = 0;
      v96 = ind + 1;
      inda = this->Data.Size;
      if ( ind + 1 < inda )
      {
        v49 = inda;
        v50 = (char *)(24 * v48);
        putf8Buffer = (char *)(24 * v48);
        while ( 1 )
        {
          if ( (_BYTE)v9 )
            goto LABEL_98;
          v51 = v48 >= 0x10 ? (__int64)&v47->Data.DynamicArray.Data.Data[-16] : (__int64)v47->Data.StaticArray;
          v52 = *(_DWORD *)&v50[v51];
          if ( !v52 )
            break;
          if ( v52 == 2 )
          {
            if ( v96 >= 0x10 )
              v53 = (__int64)&v47->Data.DynamicArray.Data.Data[-16];
            else
              v53 = (__int64)v47->Data.StaticArray;
            v94[0] = *(char **)&v50[v53 + 8];
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v94[0] + 48i64))(v9, v49);
            Scaleform::MsgFormat::Evaluate(this, v96);
            v54 = (__m128i *)(*(__int64 (__fastcall **)(char *, char *))(*(_QWORD *)v94[0] + 32i64))(v94[0], v98);
            v55 = _mm_srli_si128(*v54, 8).m128i_u64[0];
            v97[0] = (char *)v54->m128i_i64[0];
            v92.pStr = &v97[0][v55];
            if ( v97[0] == &v97[0][v55] )
            {
LABEL_93:
              v9 = v104;
            }
            else
            {
              while ( 1 )
              {
                v56 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)v97);
                if ( !v56 )
                  break;
                v57 = (unsigned __int64)(unsigned __int16)v56 >> 8;
                v58 = Scaleform::UnicodeSpaceBits[v57];
                if ( !Scaleform::UnicodeSpaceBits[v57] )
                  break;
                if ( v58 != 1 )
                {
                  v59 = Scaleform::UnicodeSpaceBits[v58 + ((unsigned __int8)v56 >> 4)];
                  if ( !_bittest(&v59, v56 & 0xF) )
                    break;
                }
                if ( v97[0] >= v92.pStr )
                  goto LABEL_93;
              }
              v69 = *(_QWORD *)v5;
              v70 = (*(__int64 (__fastcall **)(char *, char *))(*(_QWORD *)v94[0] + 32i64))(v94[0], v99);
              (*(void (__fastcall **)(_BYTE *, __int64))(v69 + 72))(v5, v70);
              v50 = putf8Buffer;
              LOBYTE(v9) = 1;
              v104 = 1;
            }
LABEL_94:
            v49 = inda;
            v47 = this;
          }
LABEL_95:
          v50 += 24;
          v48 = v96 + 1;
          putf8Buffer = v50;
          v96 = v48;
          if ( v48 >= v49 )
          {
            if ( (_BYTE)v9 )
              goto LABEL_98;
            goto LABEL_97;
          }
        }
        if ( v96 >= 0x10 )
          v71 = (__int64)v47->Data.DynamicArray.Data.Data + (unsigned __int64)(v50 - 384);
        else
          v71 = (__int64)&v47->Data.StaticArray[(_QWORD)v50];
        v72 = *(unsigned __int8 *)(v71 + 16);
        *(_QWORD *)&v95 = *(_QWORD *)(v71 + 8);
        *((_QWORD *)&v95 + 1) = v72;
        v94[0] = (char *)v95;
        v73 = (char *)(v95 + v72);
        if ( (_QWORD)v95 == (_QWORD)v95 + v72 )
        {
          v50 = putf8Buffer;
          v9 = v104;
          goto LABEL_95;
        }
        while ( 1 )
        {
          v74 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)v94);
          if ( !v74 )
            break;
          v75 = (unsigned __int64)(unsigned __int16)v74 >> 8;
          v76 = Scaleform::UnicodeSpaceBits[v75];
          if ( !Scaleform::UnicodeSpaceBits[v75] )
            break;
          if ( v76 != 1 )
          {
            v77 = Scaleform::UnicodeSpaceBits[v76 + ((unsigned __int8)v74 >> 4)];
            if ( !_bittest(&v77, v74 & 0xF) )
              break;
          }
          if ( v94[0] >= v73 )
          {
            v50 = putf8Buffer;
            goto LABEL_93;
          }
        }
        (*(void (__fastcall **)(_BYTE *, unsigned __int128 *))(*(_QWORD *)v5 + 72i64))(v5, &v95);
        v50 = putf8Buffer;
        LOBYTE(v9) = 1;
        v104 = 1;
        goto LABEL_94;
      }
LABEL_97:
      v60 = *(_QWORD *)v5;
      v95 = 0ui64;
      (*(void (__fastcall **)(_BYTE *, unsigned __int128 *))(v60 + 72))(v5, &v95);
LABEL_98:
      v46 = v105;
    }
    if ( (v46 & 8) != 0 )
    {
      v61 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v5 + 88i64))(v5) - 1;
      if ( v61 )
      {
        v62 = v61 - 1;
        if ( v62 )
        {
          if ( v62 == 1 )
          {
            v63 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v5 + 96i64))(v5);
            v64 = 0;
            v65 = v63;
            Size = this->Data.Size;
            if ( Size )
            {
              v67 = 0i64;
              while ( 1 )
              {
                if ( v36 >= 0x10 )
                  v68 = (char *)&this->Data.DynamicArray.Data.Data[-16];
                else
                  v68 = this->Data.StaticArray;
                if ( *(_DWORD *)&v68[v67] == 2 )
                {
                  if ( v64 == v65 )
                  {
                    if ( v36 >= 0x10 )
                      v78 = (char *)&this->Data.DynamicArray.Data.Data[v36 - 16];
                    else
                      v78 = &this->Data.StaticArray[24 * v36];
                    v79 = *((_QWORD *)v78 + 1);
                    Scaleform::MsgFormat::Evaluate(this, v36);
                    v80 = *(_QWORD *)v5;
                    v81 = v5;
                    goto LABEL_150;
                  }
                  ++v64;
                }
                ++v36;
                v67 += 24i64;
                if ( v36 >= Size )
                  goto LABEL_151;
              }
            }
          }
          goto LABEL_151;
        }
        v82 = this;
        v83 = ind + 1;
        v84 = this->Data.Size;
        if ( ind + 1 < v84 )
        {
          v85 = v83;
          while ( 1 )
          {
            v86 = v83 >= 0x10 ? &this->Data.DynamicArray.Data.Data[-16] : (Scaleform::MsgFormat::fmt_record *)this->Data.StaticArray;
            if ( v86[v85].RecType == eFmtType )
              break;
            ++v83;
            ++v85;
            if ( v83 >= v84 )
              goto LABEL_151;
          }
LABEL_146:
          if ( v83 >= 0x10 )
            v89 = (__int64)&v82->Data.DynamicArray.Data.Data[v83 - 16];
          else
            v89 = (__int64)&v82->Data.StaticArray[24 * v83];
          v79 = *(_QWORD *)(v89 + 8);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v79 + 48i64))(v79);
          Scaleform::MsgFormat::Evaluate(v82, v83);
          v81 = v91;
          v80 = *(_QWORD *)v91;
LABEL_150:
          (*(void (__fastcall **)(_BYTE *, __int64))(v80 + 104))(v81, v79);
        }
      }
      else
      {
        v83 = ind - 1;
        if ( ind != 0x100000000i64 )
        {
          v87 = v83;
          do
          {
            v82 = this;
            v88 = v83 >= 0x10 ? &this->Data.DynamicArray.Data.Data[-16] : (Scaleform::MsgFormat::fmt_record *)this->Data.StaticArray;
            if ( v88[v87].RecType == eFmtType )
              goto LABEL_146;
            --v83;
            --v87;
          }
          while ( v83 != 0xFFFFFFFF );
        }
      }
    }
LABEL_151:
    v8 = v91;
    if ( v91[16] )
      return;
    v7 = *(_QWORD *)v91;
    goto LABEL_153;
  }
}

void __fastcall Scaleform::MsgFormat::FinishFormatD(Scaleform::MsgFormat *this)
{
  if ( this->NonPosParamNum )
  {
    this->FirstArgNum = -1;
    Scaleform::MsgFormat::BindNonPos(this);
  }
  else
  {
    Scaleform::MsgFormat::MakeString(this);
  }
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::Formatter::GetPrevStr(
        Scaleform::Render::MeshProvider *this,
        Scaleform::Render::Rect<float> *result,
        const Scaleform::Render::Matrix2x4<float> *m,
        float morphRatio)
{
  *(_QWORD *)&result->x1 = 0i64;
  *(_QWORD *)&result->x2 = 0i64;
  return result;
}

bool __fastcall Scaleform::GFx::InteractiveObject::OnCharEvent(
        Scaleform::Render::Texture *this,
        Scaleform::Render::RenderTargetData *__formal)
{
  return 0;
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

Scaleform::StringDataPtr *__fastcall Scaleform::BoolFormatter::GetResult(
        Scaleform::BoolFormatter *this,
        Scaleform::StringDataPtr *result)
{
  Scaleform::StringDataPtr *v2; // rax

  v2 = result;
  *result = this->result;
  return v2;
}

Scaleform::StringDataPtr *__fastcall Scaleform::LongFormatter::GetResult(
        Scaleform::LongFormatter *this,
        Scaleform::StringDataPtr *result)
{
  unsigned __int64 v4; // rax
  char *ValueStr; // rcx
  Scaleform::StringDataPtr *v6; // rax

  v4 = this->GetSize(this);
  ValueStr = this->ValueStr;
  result->Size = v4;
  v6 = result;
  result->pStr = ValueStr;
  return v6;
}

Scaleform::StringDataPtr *__fastcall Scaleform::RepeatFormatter::GetResult(
        Scaleform::RepeatFormatter *this,
        Scaleform::StringDataPtr *result)
{
  char *pData; // rax
  unsigned __int64 Size; // r8
  const char *v4; // rcx
  Scaleform::StringDataPtr *v5; // rax

  pData = this->Buff.pData;
  Size = this->Buff.Size;
  v4 = &pnewText;
  result->Size = Size;
  if ( pData )
    v4 = pData;
  v5 = result;
  result->pStr = v4;
  return v5;
}

Scaleform::StringDataPtr *__fastcall Scaleform::ResourceFormatter::GetResult(
        Scaleform::ResourceFormatter *this,
        Scaleform::StringDataPtr *result)
{
  Scaleform::StringDataPtr *v2; // rax

  v2 = result;
  *result = this->Result;
  return v2;
}

Scaleform::StringDataPtr *__fastcall Scaleform::StrFormatter::GetResult(
        Scaleform::StrFormatter *this,
        Scaleform::StringDataPtr *result)
{
  Scaleform::StringDataPtr *v2; // rax

  v2 = result;
  *result = this->Value;
  return v2;
}

Scaleform::StringDataPtr *__fastcall Scaleform::SwitchFormatter::GetResult(
        Scaleform::SwitchFormatter *this,
        Scaleform::StringDataPtr *result)
{
  Scaleform::StringDataPtr *v2; // rax

  v2 = result;
  *result = this->StrValue;
  return v2;
}

Scaleform::GFx::AS3::VMAppDomain *__fastcall Scaleform::GFx::FontManagerStates::GetStateBagImpl(
        Scaleform::GFx::AS3::VMAppDomain *this)
{
  return this->ParentDomain;
}

Scaleform::GFx::AS3::ClassTraits::fl::XMLList *__fastcall Scaleform::GFx::MovieImpl::GetHeap(
        Scaleform::GFx::AS3::XMLSupportImpl *this)
{
  return this->TraitsXMLList.pObject;
}

signed __int64 __fastcall Scaleform::LongFormatter::GetSize(Scaleform::LongFormatter *this)
{
  return (char *)this - this->ValueStr + 92;
}

Concurrency::details::SchedulerBase *__fastcall Scaleform::GFx::AS3::XMLSupportImpl::GetClassTraitsXML(
        Concurrency::details::ContextBase *this)
{
  return this->m_pScheduler;
}

unsigned __int64 __fastcall Actor::GetActionSystem(AgMemoryStream *this)
{
  return this->m_position;
}

Concurrency::details::ScheduleGroupSegmentBase *__fastcall Scaleform::SwitchFormatter::GetSize(
        Concurrency::details::ContextBase *this)
{
  return this->m_pSegment;
}

void __fastcall Scaleform::DoubleFormatter::InitString(
        Scaleform::LongFormatter *this,
        char *pbuffer,
        unsigned __int64 size)
{
  if ( this[-1].Buff[24] )
    memmove(pbuffer, *(const void **)&this->IsConverted, size);
}

void __fastcall Scaleform::MsgFormat::InitString(Scaleform::MsgFormat *this, char *pbuffer, unsigned __int64 size)
{
  unsigned __int64 v3; // r12
  Scaleform::MsgFormat::StackArray<Scaleform::MsgFormat::fmt_record,16,Scaleform::ArrayPOD<Scaleform::MsgFormat::fmt_record,2,Scaleform::ArrayDefaultPolicy> > *p_Data; // r14
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  const void *v14; // rdx
  size_t v15; // rdi
  __int64 v16[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( size )
  {
    v3 = this->Data.Size;
    p_Data = &this->Data;
    v5 = 0i64;
    v6 = 0i64;
    v7 = size;
    while ( 1 )
    {
      if ( v5 >= v3 )
        return;
      v9 = v5 >= 0x10 ? (__int64)&p_Data->DynamicArray.Data.Data[-16] : (__int64)p_Data->StaticArray;
      v10 = v6 + v9;
      v11 = v5 >= 0x10 ? (__int64)&p_Data->DynamicArray.Data.Data[-16] : (__int64)p_Data->StaticArray;
      v12 = *(_DWORD *)(v6 + v11);
      if ( !v12 )
        break;
      if ( v12 == 2 )
      {
        v13 = *(_QWORD *)(v10 + 8);
        if ( v13 )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 32i64))(v13, v16);
          v14 = (const void *)v16[0];
          v15 = v16[1];
LABEL_15:
          if ( v7 < v15 )
            v15 = v7;
          memmove(pbuffer, v14, v15);
          v7 -= v15;
          pbuffer += v15;
        }
      }
      ++v5;
      v6 += 24i64;
      if ( !v7 )
        return;
    }
    v15 = *(unsigned __int8 *)(v10 + 16);
    v14 = *(const void **)(v10 + 8);
    goto LABEL_15;
  }
}

char __fastcall Scaleform::IsSpace(Scaleform::StringDataPtr *s)
{
  unsigned __int64 Size; // rax
  char *v2; // rbx
  unsigned int Char_Advance0; // eax
  int v4; // ecx
  int v5; // ecx
  char *putf8Buffer; // [rsp+30h] [rbp+8h] BYREF

  Size = s->Size;
  putf8Buffer = (char *)s->pStr;
  v2 = &putf8Buffer[Size];
  if ( putf8Buffer == &putf8Buffer[Size] )
    return 1;
  while ( 1 )
  {
    Char_Advance0 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
    if ( !Char_Advance0 )
      break;
    v4 = Scaleform::UnicodeSpaceBits[(unsigned __int64)(unsigned __int16)Char_Advance0 >> 8];
    if ( !Scaleform::UnicodeSpaceBits[(unsigned __int64)(unsigned __int16)Char_Advance0 >> 8] )
      break;
    if ( v4 != 1 )
    {
      v5 = Scaleform::UnicodeSpaceBits[v4 + ((unsigned __int8)Char_Advance0 >> 4)];
      if ( !_bittest(&v5, Char_Advance0 & 0xF) )
        break;
    }
    if ( putf8Buffer >= v2 )
      return 1;
  }
  return 0;
}

void __fastcall Scaleform::MsgFormat::MakeString(Scaleform::MsgFormat *this)
{
  unsigned __int64 v1; // rbp
  unsigned __int64 Size; // r12
  unsigned __int64 v4; // rbx
  __int64 v5; // r14
  char *StaticArray; // r15
  char *v7; // r15
  char *v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  Scaleform::MsgFormat::Sink::DataType Type; // ecx
  __int32 v13; // ecx
  char *pStr; // rbx
  unsigned __int64 StrSize; // rcx
  Scaleform::StringBuffer *pStrBuffer; // r14
  unsigned __int64 v17; // r15
  __int64 i; // rbx
  char *v19; // rdx
  char *v20; // rdx
  char *v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r8
  const char *v25; // rdx
  __int64 v26[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0i64;
  Size = this->Data.Size;
  this->StrSize = 0i64;
  v4 = 0i64;
  if ( Size )
  {
    v5 = 0i64;
    do
    {
      if ( v4 >= 0x10 )
        StaticArray = (char *)&this->Data.DynamicArray.Data.Data[-16];
      else
        StaticArray = this->Data.StaticArray;
      v7 = &StaticArray[v5];
      if ( v4 >= 0x10 )
        v8 = (char *)&this->Data.DynamicArray.Data.Data[-16];
      else
        v8 = this->Data.StaticArray;
      v9 = *(_DWORD *)&v8[v5];
      if ( v9 )
      {
        if ( v9 != 2 )
          goto LABEL_15;
        Scaleform::MsgFormat::Evaluate(this, v4);
        v10 = *((_QWORD *)v7 + 1);
        if ( !v10 )
          goto LABEL_15;
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 40i64))(v10);
      }
      else
      {
        v11 = (unsigned __int8)v7[16];
      }
      this->StrSize += v11;
LABEL_15:
      ++v4;
      v5 += 24i64;
    }
    while ( v4 < Size );
  }
  Type = this->Result.Type;
  if ( Type == tStr )
  {
    Scaleform::String::AssignString(this->Result.SinkData.pStr, this, this->StrSize);
    return;
  }
  v13 = Type - 1;
  if ( !v13 )
  {
    pStrBuffer = this->Result.SinkData.pStrBuffer;
    v17 = this->Data.Size;
    Scaleform::StringBuffer::Reserve(pStrBuffer, this->StrSize + pStrBuffer->Size);
    if ( !v17 )
      return;
    for ( i = 0i64; ; i += 24i64 )
    {
      if ( v1 >= 0x10 )
        v19 = (char *)&this->Data.DynamicArray.Data.Data[-16];
      else
        v19 = this->Data.StaticArray;
      v20 = &v19[i];
      if ( v1 >= 0x10 )
        v21 = (char *)&this->Data.DynamicArray.Data.Data[-16];
      else
        v21 = this->Data.StaticArray;
      v22 = *(_DWORD *)&v21[i];
      if ( v22 )
      {
        if ( v22 != 2 )
          goto LABEL_36;
        v23 = *((_QWORD *)v20 + 1);
        if ( !v23 )
          goto LABEL_36;
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 32i64))(v23, v26);
        v24 = v26[1];
        v25 = (const char *)v26[0];
      }
      else
      {
        v24 = (unsigned __int8)v20[16];
        v25 = (const char *)*((_QWORD *)v20 + 1);
      }
      Scaleform::StringBuffer::AppendString(pStrBuffer, v25, v24);
LABEL_36:
      if ( ++v1 >= v17 )
        return;
    }
  }
  if ( v13 == 1 )
  {
    pStr = (char *)this->Result.SinkData.pStr;
    this->InitString(this, pStr, this->Result.SinkData.DataPtr.Size);
    StrSize = this->StrSize;
    if ( this->Result.SinkData.DataPtr.Size - 1 < StrSize )
      StrSize = this->Result.SinkData.DataPtr.Size - 1;
    pStr[StrSize] = 0;
  }
}

char __fastcall Scaleform::MsgFormat::NextFormatter(Scaleform::MsgFormat *this)
{
  unsigned __int64 Size; // r10
  unsigned __int64 UnboundFmtrInd; // rax
  char v4; // r9
  __int64 i; // r8
  char *StaticArray; // rcx
  char *v7; // rcx

  Size = this->Data.Size;
  UnboundFmtrInd = this->UnboundFmtrInd;
  v4 = 1;
  this->DataInd = -1i64;
  if ( UnboundFmtrInd >= Size )
    return 0;
  for ( i = 24 * UnboundFmtrInd; ; i += 24i64 )
  {
    if ( UnboundFmtrInd >= 0x10 )
      StaticArray = (char *)&this->Data.DynamicArray.Data.Data[-16];
    else
      StaticArray = this->Data.StaticArray;
    v7 = &StaticArray[i];
    if ( *(_DWORD *)v7 != 1 )
    {
      if ( v4 )
        ++this->UnboundFmtrInd;
      goto LABEL_11;
    }
    if ( HIBYTE(_mm_srli_si128(*(__m128i *)(v7 + 8), 8).m128i_u16[0]) == this->FirstArgNum )
      break;
    v4 = 0;
LABEL_11:
    if ( ++UnboundFmtrInd >= Size )
      return 0;
  }
  if ( v4 )
    ++this->UnboundFmtrInd;
  this->DataInd = UnboundFmtrInd;
  return 1;
}

void __fastcall Scaleform::BoolFormatter::Parse(Scaleform::BoolFormatter *this, const Scaleform::StringDataPtr *str)
{
  unsigned __int64 Size; // rdx
  unsigned __int64 v5; // r8
  Scaleform::StringDataPtr *NextToken; // rax
  bool v7; // zf
  unsigned __int64 v8; // rcx
  const Scaleform::LocaleProvider *pLocaleProvider; // rcx
  __int64 v10; // rax
  Scaleform::Formatter *v11; // rdi
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  Scaleform::StringDataPtr v14; // [rsp+20h] [rbp-48h] BYREF
  Scaleform::StringDataPtr result; // [rsp+38h] [rbp-30h] BYREF
  Scaleform::StringDataPtr v16; // [rsp+48h] [rbp-20h] BYREF
  Scaleform::StringDataPtr *v17; // [rsp+58h] [rbp-10h]

  Scaleform::StringDataPtr::GetNextToken((Scaleform::StringDataPtr *)str, &result, 58);
  if ( result.pStr && result.Size )
  {
    if ( *result.pStr == 115 && *((_BYTE *)result.pStr + 1) == 119 )
    {
      Size = str->Size;
      v5 = result.Size + 1;
      if ( Size < result.Size + 1 )
        v5 = str->Size;
      v14.pStr = &str->pStr[v5];
      v14.Size = Size - v5;
      NextToken = Scaleform::StringDataPtr::GetNextToken(&v14, &v16, 58);
      v7 = (*((_BYTE *)this + 24) & 1) == 0;
      this->result = *NextToken;
      if ( v7 )
      {
        v8 = this->result.Size + 1;
        if ( v14.Size < v8 )
          v8 = v14.Size;
        v14.pStr += v8;
        v14.Size -= v8;
        this->result = *Scaleform::StringDataPtr::GetNextToken(&v14, &v16, 58);
      }
      *((_BYTE *)this + 24) |= 2u;
    }
    else
    {
      pLocaleProvider = this->pParentFmt->pLocaleProvider;
      if ( pLocaleProvider )
      {
        v16.pStr = (const char *)this->pParentFmt;
        v16.Size = (unsigned __int64)&result;
        v17 = &v14;
        v10 = (__int64)pLocaleProvider->MakeFormatter(
                         &pLocaleProvider->Scaleform::FormatterFactory,
                         (const Scaleform::FormatterFactory::Args *)&v16);
        v11 = (Scaleform::Formatter *)v10;
        if ( v10 )
        {
          v12 = str->Size;
          v13 = result.Size + 1;
          if ( v12 < result.Size + 1 )
            v13 = str->Size;
          v14.pStr = &str->pStr[v13];
          v14.Size = v12 - v13;
          if ( v12 != v13 )
            (*(void (__fastcall **)(__int64, Scaleform::StringDataPtr *))(*(_QWORD *)v10 + 16i64))(v10, &v14);
          Scaleform::MsgFormat::ReplaceFormatter(this->pParentFmt, this, v11, 1);
        }
      }
    }
  }
}

void __fastcall Scaleform::DoubleFormatter::Parse(
        Scaleform::DoubleFormatter *this,
        const Scaleform::StringDataPtr *str)
{
  Scaleform::StringDataPtr v2; // xmm1
  Scaleform::Formatter *v5; // rdi
  Scaleform::StringDataPtr *NextToken; // rax
  __m128i v7; // xmm6
  const char *pStr; // rsi
  unsigned __int64 v9; // xmm0_8
  unsigned __int64 Size; // rcx
  const Scaleform::LocaleProvider *pLocaleProvider; // rcx
  char *v12; // rax
  double Value; // xmm1_8
  double v14; // xmm1_8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  Scaleform::StringDataPtr v17; // [rsp+28h] [rbp-79h] BYREF
  Scaleform::StringDataPtr v18[2]; // [rsp+38h] [rbp-69h] BYREF
  Scaleform::StringDataPtr v19; // [rsp+58h] [rbp-49h] BYREF
  __int64 v20[3]; // [rsp+68h] [rbp-39h] BYREF
  Scaleform::StringDataPtr result; // [rsp+80h] [rbp-21h] BYREF
  Scaleform::StringDataPtr v22; // [rsp+90h] [rbp-11h] BYREF
  Scaleform::StringDataPtr v23; // [rsp+A0h] [rbp-1h] BYREF
  Scaleform::StringDataPtr v24; // [rsp+B0h] [rbp+Fh] BYREF

  v2 = *str;
  v5 = 0i64;
  v17.pStr = str->pStr;
  v17.Size = _mm_srli_si128((__m128i)v2, 8).m128i_u64[0];
  if ( !v17.Size )
    return;
  while ( 1 )
  {
    NextToken = Scaleform::StringDataPtr::GetNextToken(&v17, &result, 58);
    v7 = *(__m128i *)NextToken;
    pStr = NextToken->pStr;
    if ( !NextToken->pStr )
      return;
    v9 = _mm_srli_si128(v7, 8).m128i_u64[0];
    if ( !v9 )
      return;
    Size = v9 + 1;
    if ( v17.Size < v9 + 1 )
      Size = v17.Size;
    v17.pStr += Size;
    v17.Size -= Size;
    if ( !isdigit(*pStr) )
      break;
$LN9_94:
    v18[0] = (Scaleform::StringDataPtr)v7;
    Scaleform::NumericBase::ReadPrintFormat(&this->Scaleform::NumericBase, v18);
LABEL_20:
    if ( !v17.Size )
      goto LABEL_29;
  }
  switch ( *pStr )
  {
    case ' ':
    case '#':
    case '+':
    case '-':
    case '.':
      goto $LN9_94;
    case 'E':
      goto $LN12_95;
    case 'G':
      goto $LN14_67;
    case 'e':
      *((_BYTE *)&this->Scaleform::NumericBase + 6) &= ~1u;
$LN12_95:
      this->Type = FmtScientific;
      v18[0] = *Scaleform::StringDataPtr::GetNextToken(&v17, &v23, 58);
      Scaleform::NumericBase::ReadPrintFormat(&this->Scaleform::NumericBase, v18);
      goto LABEL_20;
    case 'f':
      this->Type = FmtDecimal;
      v18[0] = *Scaleform::StringDataPtr::GetNextToken(&v17, &v22, 58);
      Scaleform::NumericBase::ReadPrintFormat(&this->Scaleform::NumericBase, v18);
      goto LABEL_20;
    case 'g':
      *((_BYTE *)&this->Scaleform::NumericBase + 6) &= ~1u;
$LN14_67:
      this->Type = FmtSignificant;
      v18[0] = *Scaleform::StringDataPtr::GetNextToken(&v17, &v24, 58);
      Scaleform::NumericBase::ReadPrintFormat(&this->Scaleform::NumericBase, v18);
      goto LABEL_20;
    case 's':
      if ( pStr[1] != 119 )
      {
        if ( !strncmp(pStr, "sep", 3ui64) )
        {
          Scaleform::StringDataPtr::GetNextToken(&v17, &v19, 58);
          if ( v19.Size )
            *((_BYTE *)&this->Scaleform::NumericBase + 5) ^= (*v19.pStr ^ *((_BYTE *)&this->Scaleform::NumericBase + 5)) & 0x7F;
        }
        goto LABEL_20;
      }
      v12 = operator new<512,8>(0x48ui64, &this->pParentFmt->MemPool);
      v5 = (Scaleform::Formatter *)v12;
      if ( v12 )
      {
        Value = this->Value;
        if ( Value <= 0.0 )
          v14 = Value - 0.5;
        else
          v14 = Value + 0.5;
        *((_QWORD *)v12 + 1) = this->pParentFmt;
        *(_QWORD *)v12 = &Scaleform::SwitchFormatter::`vftable';
        v12[16] = 0;
        *((_DWORD *)v12 + 6) = (int)v14;
        *((_QWORD *)v12 + 4) = 0i64;
        *((_QWORD *)v12 + 5) = 0i64;
        *((_QWORD *)v12 + 6) = 0i64;
        *((_QWORD *)v12 + 7) = 0i64;
        *((_QWORD *)v12 + 8) = 0i64;
      }
      else
      {
        v5 = 0i64;
      }
      v17.pStr += v17.Size;
      v17.Size = 0i64;
LABEL_29:
      if ( v5 )
      {
        v15 = str->Size;
        v16 = v9 + 1;
        if ( v15 < v9 + 1 )
          v16 = str->Size;
        v19.pStr = &str->pStr[v16];
        v19.Size = v15 - v16;
        if ( v15 != v16 )
          v5->Parse(v5, &v19);
        Scaleform::MsgFormat::ReplaceFormatter(this->pParentFmt, this, v5, 1);
      }
      return;
    default:
      pLocaleProvider = this->pParentFmt->pLocaleProvider;
      if ( pLocaleProvider )
      {
        v20[0] = (__int64)this->pParentFmt;
        v20[1] = (__int64)&v17;
        v20[2] = (__int64)v18;
        v5 = pLocaleProvider->MakeFormatter(
               &pLocaleProvider->Scaleform::FormatterFactory,
               (const Scaleform::FormatterFactory::Args *)v20);
      }
      goto LABEL_20;
  }
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall Scaleform::LongFormatter::Parse(Scaleform::LongFormatter *this, const Scaleform::StringDataPtr *str)
{
  Scaleform::StringDataPtr v2; // xmm1
  char *v5; // rdi
  Scaleform::StringDataPtr *NextToken; // rax
  __m128i v7; // xmm6
  const char *pStr; // rsi
  unsigned __int64 v9; // xmm0_8
  unsigned __int64 Size; // rcx
  char v11; // al
  unsigned __int64 v12; // rdx
  const Scaleform::LocaleProvider *pLocaleProvider; // rcx
  int Value; // eax
  char *v15; // rax
  char *v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  Scaleform::StringDataPtr stra; // [rsp+28h] [rbp-69h] BYREF
  Scaleform::StringDataPtr v20; // [rsp+38h] [rbp-59h] BYREF
  Scaleform::StringDataPtr v21[2]; // [rsp+48h] [rbp-49h] BYREF
  __int64 v22[3]; // [rsp+68h] [rbp-29h] BYREF
  Scaleform::StringDataPtr result; // [rsp+80h] [rbp-11h] BYREF
  Scaleform::StringDataPtr v24; // [rsp+90h] [rbp-1h] BYREF
  Scaleform::StringDataPtr v25; // [rsp+A0h] [rbp+Fh] BYREF

  v2 = *str;
  v5 = 0i64;
  stra.pStr = str->pStr;
  stra.Size = _mm_srli_si128((__m128i)v2, 8).m128i_u64[0];
  if ( !stra.Size )
    return;
  while ( 1 )
  {
    NextToken = Scaleform::StringDataPtr::GetNextToken(&stra, &result, 58);
    v7 = *(__m128i *)NextToken;
    pStr = NextToken->pStr;
    if ( !NextToken->pStr )
      return;
    v9 = _mm_srli_si128(v7, 8).m128i_u64[0];
    if ( !v9 )
      return;
    Size = v9 + 1;
    if ( stra.Size < v9 + 1 )
      Size = stra.Size;
    stra.pStr += Size;
    stra.Size -= Size;
    if ( !isdigit(*pStr) )
      break;
$LN9_95:
    v21[0] = (Scaleform::StringDataPtr)v7;
    Scaleform::NumericBase::ReadPrintFormat(&this->Scaleform::NumericBase, v21);
LABEL_23:
    if ( !stra.Size )
      goto LABEL_31;
  }
  switch ( *pStr )
  {
    case ' ':
    case '#':
    case '+':
    case '-':
    case '.':
      goto $LN9_95;
    case 'X':
      goto $LN14_68;
    case 'b':
      if ( !strncmp(pStr, "base", 4ui64) )
      {
        v11 = Scaleform::ReadInteger(&stra, 10, 58);
        *((_DWORD *)this + 12) &= 0xFFFFFFE0;
        *((_DWORD *)this + 12) |= v11 & 0x1F;
      }
      goto LABEL_23;
    case 'o':
      *((_DWORD *)this + 12) &= 0xFFFFFFE8;
      *((_DWORD *)this + 12) |= 8u;
      v21[0] = *Scaleform::StringDataPtr::GetNextToken(&stra, &v24, 58);
      Scaleform::NumericBase::ReadPrintFormat(&this->Scaleform::NumericBase, v21);
      goto LABEL_23;
    case 'r':
      v15 = operator new<512,8>(0x60ui64, &this->pParentFmt->MemPool);
      if ( !v15 )
        goto LABEL_29;
      Scaleform::RepeatFormatter::RepeatFormatter((Scaleform::RepeatFormatter *)v15, this->pParentFmt, this->Value);
      v5 = v16;
      goto LABEL_30;
    case 's':
      if ( pStr[1] != 119 )
      {
        if ( !strncmp(pStr, "sep", 3ui64) )
        {
          Scaleform::StringDataPtr::GetNextToken(&stra, &v20, 58);
          v12 = v20.Size;
          if ( v20.Size )
            *((_BYTE *)&this->Scaleform::NumericBase + 5) ^= (*v20.pStr ^ *((_BYTE *)&this->Scaleform::NumericBase + 5)) & 0x7F;
          if ( stra.Size < v12 )
            v12 = stra.Size;
          stra.pStr += v12;
          stra.Size -= v12;
        }
        goto LABEL_23;
      }
      v5 = operator new<512,8>(0x48ui64, &this->pParentFmt->MemPool);
      if ( v5 )
      {
        Value = this->Value;
        *((_QWORD *)v5 + 1) = this->pParentFmt;
        *(_QWORD *)v5 = &Scaleform::SwitchFormatter::`vftable';
        v5[16] = 0;
        *((_DWORD *)v5 + 6) = Value;
        *((_QWORD *)v5 + 4) = 0i64;
        *((_QWORD *)v5 + 5) = 0i64;
        *((_QWORD *)v5 + 6) = 0i64;
        *((_QWORD *)v5 + 7) = 0i64;
        *((_QWORD *)v5 + 8) = 0i64;
      }
      else
      {
LABEL_29:
        v5 = 0i64;
      }
LABEL_30:
      stra.pStr += stra.Size;
      stra.Size = 0i64;
LABEL_31:
      if ( v5 )
      {
        v17 = str->Size;
        v18 = v9 + 1;
        if ( v17 < v9 + 1 )
          v18 = str->Size;
        v20.pStr = &str->pStr[v18];
        v20.Size = v17 - v18;
        if ( v17 != v18 )
          (*(void (__fastcall **)(char *, Scaleform::StringDataPtr *))(*(_QWORD *)v5 + 16i64))(v5, &v20);
        Scaleform::MsgFormat::ReplaceFormatter(this->pParentFmt, this, (Scaleform::Formatter *)v5, 1);
      }
      return;
    case 'x':
      *((_BYTE *)&this->Scaleform::NumericBase + 6) &= ~1u;
$LN14_68:
      *((_DWORD *)this + 12) &= 0xFFFFFFF0;
      *((_DWORD *)this + 12) |= 0x10u;
      v21[0] = *Scaleform::StringDataPtr::GetNextToken(&stra, &v25, 58);
      Scaleform::NumericBase::ReadPrintFormat(&this->Scaleform::NumericBase, v21);
      goto LABEL_23;
    default:
      pLocaleProvider = this->pParentFmt->pLocaleProvider;
      if ( pLocaleProvider )
      {
        v22[0] = (__int64)this->pParentFmt;
        v22[1] = (__int64)&stra;
        v22[2] = (__int64)v21;
        v5 = (char *)pLocaleProvider->MakeFormatter(
                       &pLocaleProvider->Scaleform::FormatterFactory,
                       (const Scaleform::FormatterFactory::Args *)v22);
      }
      goto LABEL_23;
  }
}

void __fastcall Scaleform::MsgFormat::Parse(Scaleform::MsgFormat *this, const char *fmt)
{
  char v2; // r12
  const char *v3; // rdi
  int v5; // esi
  const char *v6; // rbx
  char v7; // si
  int v8; // ecx
  char v9; // al
  char v10; // cl
  unsigned __int64 Size; // rax
  __int64 v12; // rax
  __int64 v13; // xmm1_8
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r8
  Scaleform::MsgFormat::fmt_record *Data; // rax
  __int64 v17; // rcx
  __int128 v18; // xmm0
  __int64 v19; // xmm1_8
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // xmm1_8
  const char *v23; // r14
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // r8
  Scaleform::MsgFormat::fmt_record *v27; // rax
  __int64 v28; // rcx
  __int128 v29; // xmm0
  __int64 v30; // xmm1_8
  __int128 v31; // [rsp+20h] [rbp-50h]
  Scaleform::StringDataPtr str; // [rsp+30h] [rbp-40h] BYREF
  Scaleform::StringDataPtr v33; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v34[24]; // [rsp+50h] [rbp-20h]

  v2 = 0;
  v3 = fmt;
  this->UnboundFmtrInd = -1;
  v5 = 0;
  v6 = fmt;
  if ( !fmt )
    return;
  this->NonPosParamNum = 0;
  if ( !*fmt )
    return;
  do
  {
    if ( v5 )
    {
      if ( *v3 == 125 )
      {
        if ( v6 == v3 )
        {
LABEL_28:
          ++v3;
          v5 = 0;
          v6 = v3;
          continue;
        }
        v7 = -1;
        if ( isspace(*v6) )
        {
          do
            v8 = *++v6;
          while ( isspace(v8) );
        }
        if ( isdigit(*v6) )
        {
          v9 = atol(v6);
          v10 = *v6;
          v7 = v9;
          if ( *v6 )
          {
            while ( v10 != 58 && v10 != 125 )
            {
              v10 = *++v6;
              if ( !v10 )
                goto LABEL_17;
            }
            if ( *v6 == 58 )
              ++v6;
          }
        }
        else
        {
          ++this->NonPosParamNum;
        }
LABEL_17:
        *(_QWORD *)&v31 = v6;
        BYTE9(v31) = v7;
        BYTE8(v31) = (_BYTE)v3 - (_BYTE)v6;
        Size = this->Data.Size;
        *(_DWORD *)v34 = 1;
        *(_OWORD *)&v34[8] = v31;
        if ( Size < 0x10 )
        {
          v12 = 3 * Size;
          v13 = *(_QWORD *)&v34[16];
          *(_OWORD *)&this->Data.StaticArray[8 * v12] = *(_OWORD *)v34;
          *(_QWORD *)&this->Data.StaticArray[8 * v12 + 16] = v13;
          goto LABEL_26;
        }
        v14 = this->Data.DynamicArray.Data.Size + 1;
        if ( v14 >= this->Data.DynamicArray.Data.Size )
        {
          if ( v14 > this->Data.DynamicArray.Data.Policy.Capacity )
          {
            v15 = v14 + (v14 >> 2);
            goto LABEL_24;
          }
        }
        else if ( v14 < this->Data.DynamicArray.Data.Policy.Capacity >> 1 )
        {
          v15 = this->Data.DynamicArray.Data.Size + 1;
LABEL_24:
          Scaleform::ArrayDataBase<Scaleform::GFx::Text::CSSToken<wchar_t>,Scaleform::AllocatorGH<Scaleform::GFx::Text::CSSToken<wchar_t>,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
            (Scaleform::ArrayDataBase<Scaleform::Render::Font::NativeHintingType,Scaleform::AllocatorGH<Scaleform::Render::Font::NativeHintingType,2>,Scaleform::ArrayDefaultPolicy> *)&this->Data.DynamicArray,
            &this->Data.DynamicArray,
            v15);
        }
        Data = this->Data.DynamicArray.Data.Data;
        v17 = v14;
        v18 = *(_OWORD *)v34;
        this->Data.DynamicArray.Data.Size = v14;
        v19 = *(_QWORD *)&v34[16];
        *(_OWORD *)&Data[v17 - 1].RecType = v18;
        *(_QWORD *)&Data[v17 - 1].RecValue.Formatter.Allocated = v19;
LABEL_26:
        ++this->Data.Size;
        if ( this->UnboundFmtrInd == 0xFFFF )
          this->UnboundFmtrInd = LOWORD(this->Data.Size) - 1;
        goto LABEL_28;
      }
      goto LABEL_31;
    }
    if ( v2 )
    {
      v2 = 0;
LABEL_31:
      ++v3;
      continue;
    }
    if ( *v3 == 123 )
    {
      if ( v6 != v3 )
      {
        str.pStr = v6;
        str.Size = v3 - v6;
        Scaleform::MsgFormat::AddStringRecord(this, &str);
      }
      ++v3;
      v5 = 1;
      v6 = v3;
    }
    else
    {
      if ( *v3 != this->EscapeChar )
        goto LABEL_31;
      v23 = v3 + 1;
      if ( !v3[1] )
        goto LABEL_31;
      if ( v6 != v3 )
      {
        v33.pStr = v6;
        v33.Size = v3 - v6;
        Scaleform::MsgFormat::AddStringRecord(this, &v33);
      }
      ++v3;
      v6 = v23;
      v2 = 1;
    }
  }
  while ( *v3 );
  if ( !v5 && v6 != v3 )
  {
    v20 = this->Data.Size;
    LOBYTE(v33.Size) = (_BYTE)v3 - (_BYTE)v6;
    v33.pStr = v6;
    *(_DWORD *)v34 = 0;
    *(Scaleform::StringDataPtr *)&v34[8] = v33;
    if ( v20 < 0x10 )
    {
      v21 = 3 * v20;
      v22 = *(_QWORD *)&v34[16];
      *(_OWORD *)&this->Data.StaticArray[8 * v21] = *(_OWORD *)v34;
      *(_QWORD *)&this->Data.StaticArray[8 * v21 + 16] = v22;
      goto LABEL_53;
    }
    v24 = this->Data.DynamicArray.Data.Size;
    v25 = v24 + 1;
    if ( v24 + 1 >= v24 )
    {
      if ( v25 > this->Data.DynamicArray.Data.Policy.Capacity )
      {
        v26 = v25 + (v25 >> 2);
LABEL_51:
        Scaleform::ArrayDataBase<Scaleform::GFx::Text::CSSToken<wchar_t>,Scaleform::AllocatorGH<Scaleform::GFx::Text::CSSToken<wchar_t>,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
          (Scaleform::ArrayDataBase<Scaleform::Render::Font::NativeHintingType,Scaleform::AllocatorGH<Scaleform::Render::Font::NativeHintingType,2>,Scaleform::ArrayDefaultPolicy> *)&this->Data.DynamicArray,
          &this->Data.DynamicArray,
          v26);
      }
    }
    else if ( v25 < this->Data.DynamicArray.Data.Policy.Capacity >> 1 )
    {
      v26 = v24 + 1;
      goto LABEL_51;
    }
    v27 = this->Data.DynamicArray.Data.Data;
    v28 = v25;
    v29 = *(_OWORD *)v34;
    this->Data.DynamicArray.Data.Size = v25;
    v30 = *(_QWORD *)&v34[16];
    *(_OWORD *)&v27[v28 - 1].RecType = v29;
    *(_QWORD *)&v27[v28 - 1].RecValue.Formatter.Allocated = v30;
LABEL_53:
    ++this->Data.Size;
  }
}

void __fastcall Scaleform::RepeatFormatter::Parse(
        Scaleform::RepeatFormatter *this,
        const Scaleform::StringDataPtr *str)
{
  this->Str = *str;
}

void __fastcall Scaleform::ResourceFormatter::Parse(
        Scaleform::ResourceFormatter *this,
        const Scaleform::StringDataPtr *str)
{
  Scaleform::Formatter *v4; // rbx
  const Scaleform::LocaleProvider *pLocaleProvider; // rcx
  unsigned __int64 Size; // rax
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rax
  __int128 v9; // [rsp+20h] [rbp-48h] BYREF
  Scaleform::StringDataPtr result; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11[5]; // [rsp+40h] [rbp-28h] BYREF

  v4 = 0i64;
  v9 = 0ui64;
  Scaleform::StringDataPtr::GetNextToken((Scaleform::StringDataPtr *)str, &result, 58);
  pLocaleProvider = this->pParentFmt->pLocaleProvider;
  if ( pLocaleProvider )
  {
    v11[0] = (__int64)this->pParentFmt;
    v11[1] = (__int64)&result;
    v11[2] = (__int64)&this->Value;
    v4 = pLocaleProvider->MakeFormatter(
           &pLocaleProvider->Scaleform::FormatterFactory,
           (const Scaleform::FormatterFactory::Args *)v11);
  }
  Size = str->Size;
  v7 = result.Size + 1;
  if ( Size < result.Size + 1 )
    v7 = str->Size;
  v8 = Size - v7;
  *(_QWORD *)&v9 = &str->pStr[v7];
  *((_QWORD *)&v9 + 1) = v8;
  if ( v4 )
  {
    if ( v8 )
      v4->Parse(v4, (const Scaleform::StringDataPtr *)&v9);
    Scaleform::MsgFormat::ReplaceFormatter(this->pParentFmt, this, v4, 1);
  }
}

void __fastcall Scaleform::StrFormatter::Parse(Scaleform::StrFormatter *this, const Scaleform::StringDataPtr *str)
{
  Scaleform::MsgFormat *pParentFmt; // rax
  const Scaleform::LocaleProvider *pLocaleProvider; // rcx
  __int64 v6; // rax
  Scaleform::Formatter *v7; // rbx
  unsigned __int64 Size; // r8
  unsigned __int64 v9; // r9
  Scaleform::StringDataPtr result; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11[3]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12[4]; // [rsp+48h] [rbp-20h] BYREF

  Scaleform::StringDataPtr::GetNextToken((Scaleform::StringDataPtr *)str, &result, 58);
  pParentFmt = this->pParentFmt;
  if ( pParentFmt )
  {
    pLocaleProvider = pParentFmt->pLocaleProvider;
    if ( pLocaleProvider )
    {
      v12[0] = (__int64)this->pParentFmt;
      v12[1] = (__int64)&result;
      v12[2] = (__int64)v11;
      v6 = (__int64)pLocaleProvider->MakeFormatter(
                      &pLocaleProvider->Scaleform::FormatterFactory,
                      (const Scaleform::FormatterFactory::Args *)v12);
      v7 = (Scaleform::Formatter *)v6;
      if ( v6 )
      {
        Size = str->Size;
        v9 = result.Size + 1;
        if ( Size < result.Size + 1 )
          v9 = str->Size;
        v11[0] = (__int64)&str->pStr[v9];
        v11[1] = Size - v9;
        if ( Size != v9 )
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 16i64))(v6, v11);
        Scaleform::MsgFormat::ReplaceFormatter(this->pParentFmt, this, v7, 1);
      }
    }
  }
}

void __fastcall Scaleform::SwitchFormatter::Parse(
        Scaleform::SwitchFormatter *this,
        const Scaleform::StringDataPtr *str)
{
  Scaleform::StringDataPtr v2; // xmm0
  int v3; // ebx
  Scaleform::StringDataPtr v5; // xmm2
  unsigned __int64 v6; // xmm1_8
  unsigned __int64 Size; // rcx
  unsigned __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // r8
  Scaleform::StringDataPtr v11; // [rsp+20h] [rbp-48h] BYREF
  Scaleform::StringDataPtr v12; // [rsp+30h] [rbp-38h] BYREF
  Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeRef key; // [rsp+40h] [rbp-28h] BYREF
  Scaleform::StringDataPtr result; // [rsp+50h] [rbp-18h] BYREF
  __int64 v15; // [rsp+70h] [rbp+8h]
  int v16; // [rsp+78h] [rbp+10h] BYREF

  v2 = *str;
  v3 = 0;
  v12 = (Scaleform::StringDataPtr)0i64;
  v11 = v2;
  v16 = 0;
  while ( 1 )
  {
    v5 = *Scaleform::StringDataPtr::GetNextToken(&v11, &result, 58);
    v6 = _mm_srli_si128((__m128i)v5, 8).m128i_u64[0];
    v12 = v5;
    Size = v6 + 1;
    if ( v11.Size < v6 + 1 )
      Size = v11.Size;
    v11.pStr += Size;
    v11.Size -= Size;
    if ( v3 )
    {
      v8 = 5381i64;
      key.pFirst = &v16;
      key.pSecond = &v12;
      v9 = 4i64;
      do
      {
        v10 = *((unsigned __int8 *)&v15 + v9-- + 7);
        v8 = v10 + 65599 * v8;
      }
      while ( v9 );
      Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeHashF>>::add<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeRef>(
        &this->StringSet.mHash,
        &this->StringSet,
        &key,
        v8);
      v3 = 0;
      goto LABEL_12;
    }
    if ( !v6 || !v5.pStr )
      goto LABEL_15;
    if ( !isdigit(*v5.pStr) )
      break;
    v16 = atol(v5.pStr);
    v3 = 1;
LABEL_12:
    if ( !v11.Size )
      return;
  }
  v5 = v12;
LABEL_15:
  this->DefaultStrValue = v5;
}

int __fastcall Scaleform::ReadInteger(Scaleform::StringDataPtr *str, int defaultValue, char separator)
{
  const char *pStr; // rdi
  unsigned __int64 i; // rbx
  unsigned __int64 Size; // rax
  Scaleform::StringDataPtr result; // [rsp+20h] [rbp-18h] BYREF

  Scaleform::StringDataPtr::GetNextToken(str, &result, separator);
  pStr = result.pStr;
  if ( !result.Size || !result.pStr || !isdigit(*result.pStr) )
    return defaultValue;
  for ( i = 1i64; i < result.Size; ++i )
  {
    if ( !isdigit(pStr[i]) )
      break;
  }
  Size = str->Size;
  if ( Size < i )
    i = str->Size;
  str->pStr += i;
  str->Size = Size - i;
  return atol(pStr);
}

void __fastcall Scaleform::NumericBase::ReadPrintFormat(Scaleform::NumericBase *this, Scaleform::StringDataPtr *token)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned __int64 Size; // rax
  char Integer; // al
  Scaleform::StringDataPtr str; // [rsp+20h] [rbp-28h] BYREF
  Scaleform::StringDataPtr v9; // [rsp+30h] [rbp-18h] BYREF

  if ( token->Size && token->pStr )
  {
    switch ( *token->pStr )
    {
      case ' ':
        *((_BYTE *)this + 6) |= 2u;
        goto LABEL_5;
      case '#':
        *((_BYTE *)this + 6) |= 8u;
        goto LABEL_5;
      case '+':
        *((_BYTE *)this + 5) |= 0x80u;
        goto LABEL_5;
      case '-':
        *((_BYTE *)this + 6) |= 4u;
        goto LABEL_5;
      case '.':
        *(_DWORD *)this &= 0xFFFFFFE0;
        v5 = 1i64;
        Size = token->Size;
        if ( !Size )
          v5 = 0i64;
        token->pStr += v5;
        token->Size = Size - v5;
        Integer = Scaleform::ReadInteger(token, *(_DWORD *)this & 0x1F, 58);
        *(_DWORD *)this &= 0xFFFFFFE0;
        *(_DWORD *)this |= Integer & 0x1F;
        return;
      case '0':
        *((_BYTE *)this + 4) &= 0xB0u;
        *((_BYTE *)this + 4) |= 0x30u;
LABEL_5:
        v3 = token->Size;
        v4 = v3 != 0;
        token->pStr += v4;
        token->Size = v3 - v4;
        str = *token;
        Scaleform::NumericBase::ReadPrintFormat(this, &str);
        break;
      default:
        v9 = *token;
        Scaleform::NumericBase::ReadWidth(this, &v9);
        break;
    }
  }
}

void __fastcall Scaleform::NumericBase::ReadWidth(Scaleform::NumericBase *this, Scaleform::StringDataPtr *token)
{
  unsigned __int64 Size; // rax
  __int64 v5; // rdi
  unsigned __int64 i; // rbx
  unsigned __int64 v7; // r15
  const char *pStr; // rbp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  char Integer; // al
  Scaleform::StringDataPtr result; // [rsp+20h] [rbp-28h] BYREF

  Size = token->Size;
  if ( Size )
  {
    v5 = 0i64;
    while ( token->pStr[v5] != 46 )
    {
      if ( ++v5 >= Size )
      {
        v5 = -1i64;
        break;
      }
    }
    LODWORD(i) = (*(_DWORD *)this >> 5) & 0x1F;
    Scaleform::StringDataPtr::GetNextToken(token, &result, 58);
    v7 = 1i64;
    pStr = result.pStr;
    if ( result.Size && result.pStr && isdigit(*result.pStr) )
    {
      for ( i = 1i64; i < result.Size; ++i )
      {
        if ( !isdigit(pStr[i]) )
          break;
      }
      v9 = token->Size;
      if ( v9 < i )
        i = token->Size;
      token->pStr += i;
      token->Size = v9 - i;
      LOBYTE(i) = atol(pStr);
    }
    *(_DWORD *)this &= 0xFFFFFC1F;
    *(_DWORD *)this |= 32 * (i & 0x1F);
    if ( v5 >= 0 )
    {
      *(_DWORD *)this &= 0xFFFFFFE0;
      v10 = token->Size;
      if ( !v10 )
        v7 = token->Size;
      token->pStr += v7;
      token->Size = v10 - v7;
      Integer = Scaleform::ReadInteger(token, *(_DWORD *)this & 0x1F, 58);
      *(_DWORD *)this &= 0xFFFFFFE0;
      *(_DWORD *)this |= Integer & 0x1F;
    }
  }
}

__int64 __fastcall Scaleform::FmtResource::Reflect(
        Scaleform::FmtResource *this,
        const Scaleform::FmtResource::TAttrs **attrs)
{
  *attrs = 0i64;
  return 0i64;
}

char __fastcall Scaleform::MsgFormat::ReplaceFormatter(
        Scaleform::MsgFormat *this,
        Scaleform::Formatter *oldf,
        Scaleform::Formatter *newf,
        bool allocated)
{
  unsigned __int64 Size; // rbx
  Scaleform::MsgFormat::StackArray<Scaleform::MsgFormat::fmt_record,16,Scaleform::ArrayPOD<Scaleform::MsgFormat::fmt_record,2,Scaleform::ArrayDefaultPolicy> > *p_Data; // r11
  unsigned __int64 v6; // rcx
  __int64 i; // r10
  __int64 v8; // rax
  __int64 v9; // rax
  __m128d v11; // [rsp+0h] [rbp-38h]
  __int128 v12; // [rsp+10h] [rbp-28h]

  Size = this->Data.Size;
  p_Data = &this->Data;
  v6 = 0i64;
  if ( !Size )
    return 0;
  for ( i = 0i64; ; i += 24i64 )
  {
    v8 = v6 >= 0x10 ? (__int64)&p_Data->DynamicArray.Data.Data[-16] : (__int64)p_Data->StaticArray;
    v9 = i + v8;
    if ( *(_DWORD *)v9 == 2 && *(Scaleform::Formatter **)(v9 + 8) == oldf )
      break;
    if ( ++v6 >= Size )
      return 0;
  }
  *(_QWORD *)&v11.m128d_f64[0] = newf;
  LOBYTE(v11.m128d_f64[1]) = allocated;
  LODWORD(v12) = 2;
  *((_QWORD *)&v12 + 1) = newf;
  *(_OWORD *)v9 = v12;
  *(_QWORD *)(v9 + 16) = *(_OWORD *)&_mm_unpackhi_pd(v11, v11);
  return 1;
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::GFx::Text::CSSToken<wchar_t>,Scaleform::AllocatorGH<Scaleform::GFx::Text::CSSToken<wchar_t>,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Render::Font::NativeHintingType,Scaleform::AllocatorGH<Scaleform::Render::Font::NativeHintingType,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::Render::Font::NativeHintingType *Data; // rdx
  unsigned __int64 v5; // rdi
  Scaleform::Render::Font::NativeHintingType *v6; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v5 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v6 = (Scaleform::Render::Font::NativeHintingType *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                             Scaleform::Memory::pGlobalHeap,
                                                             Data,
                                                             24 * v5);
        this->Policy.Capacity = v5;
        this->Data = v6;
        return;
      }
      v7 = 2;
      this->Data = (Scaleform::Render::Font::NativeHintingType *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                                   Scaleform::Memory::pGlobalHeap,
                                                                   24 * v5,
                                                                   &v7);
    }
    else
    {
      v5 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        this->Data = 0i64;
        this->Policy.Capacity = 0i64;
        return;
      }
    }
    this->Policy.Capacity = v5;
  }
}

void __fastcall Scaleform::NumericBase::ULong2String(
        Scaleform::NumericBase *this,
        char *buff,
        unsigned int value,
        bool separator,
        unsigned int base)
{
  int v7; // er9
  const char *v8; // r11
  char *ValueStr; // r8
  unsigned int v10; // edx
  char *v11; // r8
  char v12; // al

  if ( !separator || base != 10 || (v7 = 3, (*((_BYTE *)this + 5) & 0x7F) == 0) )
    v7 = 1000;
  v8 = "0123456789ABCDEF";
  if ( (*((_BYTE *)this + 6) & 1) == 0 )
    v8 = "0123456789abcdef";
  if ( base - 2 <= 0xE )
  {
    do
    {
      ValueStr = this->ValueStr;
      if ( buff == ValueStr )
        break;
      v10 = value % base;
      value /= base;
      if ( !v7 )
      {
        v11 = ValueStr - 1;
        v12 = 2 * *((_BYTE *)this + 5);
        this->ValueStr = v11;
        v7 = 3;
        *v11 = v12 >> 1;
      }
      --this->ValueStr;
      --v7;
      *this->ValueStr = v8[(unsigned __int8)v10];
    }
    while ( value );
  }
}

void __fastcall Scaleform::NumericBase::ULongLong2String(
        Scaleform::NumericBase *this,
        char *buff,
        unsigned __int64 value,
        bool separator,
        unsigned int base)
{
  int v7; // er9
  const char *v8; // rbx
  char *ValueStr; // r10
  unsigned __int64 v10; // rdx
  char v11; // al

  if ( !separator || base != 10 || (v7 = 3, (*((_BYTE *)this + 5) & 0x7F) == 0) )
    v7 = 1000;
  v8 = "0123456789ABCDEF";
  if ( (*((_BYTE *)this + 6) & 1) == 0 )
    v8 = "0123456789abcdef";
  if ( base - 2 <= 0xE )
  {
    do
    {
      ValueStr = this->ValueStr;
      if ( buff == ValueStr )
        break;
      v10 = value % base;
      value /= base;
      if ( !v7 )
      {
        v11 = 2 * *((_BYTE *)this + 5);
        this->ValueStr = ValueStr - 1;
        v7 = 3;
        *(ValueStr - 1) = v11 >> 1;
      }
      --this->ValueStr;
      --v7;
      *this->ValueStr = v8[(unsigned __int8)v10];
    }
    while ( value );
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeHashF>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF> >::TableType *pTable; // rbx
  __int64 v10; // rax
  const Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> > *v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // [rsp+50h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF> > v15; // [rsp+58h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v14 = 2;
    v6 = 0i64;
    v15.pTable = 0i64;
    v15.pTable = (Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> >::NodeHashF> >::TableType *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 40 * v5 + 16, &v14);
    v15.pTable->EntryCount = 0i64;
    v15.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v7 = 0i64;
      do
      {
        v7 += 40i64;
        *(_QWORD *)((char *)&v15.pTable[-1] + v7 - 8) = -2i64;
        --v5;
      }
      while ( v5 );
    }
    if ( this->pTable )
    {
      v8 = this->pTable->SizeMask + 1;
      do
      {
        pTable = this->pTable;
        if ( *(unsigned __int64 *)((char *)&this->pTable[1].EntryCount + v6) != -2i64 )
        {
          v10 = 4i64;
          v11 = (const Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int> > *)((char *)&pTable[2] + v6);
          v12 = 5381i64;
          do
          {
            v13 = *((unsigned __int8 *)v11 + --v10);
            v12 = v13 + 65599 * v12;
          }
          while ( v10 );
          Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeHashF>>::add<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>>(
            &v15,
            pheapAddr,
            v11,
            v12);
          *(unsigned __int64 *)((char *)&pTable[1].EntryCount + v6) = -2i64;
        }
        v6 += 40i64;
        --v8;
      }
      while ( v8 );
      if ( this->pTable )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    }
    this->pTable = v15.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeHashF,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeAltHashF,Scaleform::AllocatorGH<int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>,Scaleform::HashNode<int,Scaleform::StringDataPtr,Scaleform::FixedSizeHash<int>>::NodeHashF>>::Clear(this);
  }
}

