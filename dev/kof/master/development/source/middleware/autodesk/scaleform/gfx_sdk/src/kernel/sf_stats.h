#pragma once

enum Scaleform::StatBasicValues
{
	StatGroup_Default = 0,
	StatGroup_Core = 16,
	Stat_Mem = 1,
	Stat_Default_Mem = 2,
	StatHeap_Start = 16,
	Stat_MaxId = 4096,
	Stat_EntryCount = 512,
	HeapId_Default = 1,
};
class Scaleform::Stat
{
	enum StatType
	{
		Stat_LogicalGroup = 0,
		Stat_Memory = 1,
		Stat_Timer = 2,
		Stat_Counter = 3,
		Stat_TypeCount = 4,
	};
	struct StatValue;
};
struct Scaleform::Stat::StatValue
{
	enum ValueType
	{
		VT_None = 0,
		VT_Int = 1,
		VT_Int64 = 2,
		VT_Float = 3,
	};
	Scaleform::Stat::StatValue::ValueType Type; // 0x0
	const char * pName; // 0x8
	unsigned long long IValue; // 0x10
	unsigned long long I64Value; // 0x10
	float FValue; // 0x10
	StatValue(const Scaleform::Stat::StatValue &);
	StatValue();
	Scaleform::Stat::StatValue & operator=(const Scaleform::Stat::StatValue &);
	void SetInt(const char *, unsigned long long);
	void SetInt64(const char *, unsigned long long);
	void SetFloat(const char *, float);
};
class Scaleform::MemoryStat :
	Scaleform::Stat
{
public:
	MemoryStat();
	void Init();
	void Increment(unsigned long long, unsigned long long);
	Scaleform::MemoryStat & operator+=(Scaleform::MemoryStat &);
	Scaleform::MemoryStat & operator-=(Scaleform::MemoryStat &);
	Scaleform::Stat::StatType GetStatType();
	unsigned long GetStatCount();
	void GetStat(Scaleform::Stat::StatValue *, unsigned long);
	void Add(Scaleform::MemoryStat *);
	void SetMax(Scaleform::MemoryStat *);
	void SetMin(Scaleform::MemoryStat *);
	void Reset();
	unsigned long long GetAllocated();
	unsigned long long GetUsed();
	unsigned long long GetAllocCount();
};
class Scaleform::TimerStat :
	Scaleform::Stat
{
public:
	TimerStat();
	void Init();
	Scaleform::TimerStat & operator+=(Scaleform::TimerStat &);
	Scaleform::Stat::StatType GetStatType();
	unsigned long GetStatCount();
	void GetStat(Scaleform::Stat::StatValue *, unsigned long);
	void Add(Scaleform::TimerStat *);
	void SetMax(Scaleform::TimerStat *);
	void SetMin(Scaleform::TimerStat *);
	void AddTicks(unsigned long long);
	void Reset();
	class ScopeTimer;
	unsigned long long GetTicks();
};
class Scaleform::TimerStat::ScopeTimer
{
public:
	ScopeTimer(Scaleform::TimerStat *);
};
class Scaleform::CounterStat :
	Scaleform::Stat
{
public:
	CounterStat(unsigned long long);
	CounterStat();
	void Init();
	Scaleform::CounterStat & operator+=(Scaleform::CounterStat &);
	Scaleform::Stat::StatType GetStatType();
	unsigned long GetStatCount();
	void GetStat(Scaleform::Stat::StatValue *, unsigned long);
	void Add(Scaleform::CounterStat *);
	void SetMin(Scaleform::CounterStat *);
	void SetMax(Scaleform::CounterStat *);
	void Reset();
	void AddCount(unsigned long long);
	unsigned long long GetCount();
};
struct Scaleform::StatDesc
{
	enum <unnamed-enum-SF_Group>
	{
		SF_Group = 1,
		SF_Sum = 2,
		SF_AutoSum = 4,
		SF_SumGroup = 3,
		SF_AutoSumGroup = 5,
	};
	class Iterator;
	static void InitChildTree();
	static const Scaleform::StatDesc * GetDesc(unsigned long);
	StatDesc(Scaleform::Stat::StatType, unsigned char, unsigned long, const char *, unsigned long);
	bool IsAutoSumGroup();
	const char * GetName();
	Scaleform::StatDesc::Iterator GetChildIterator();
	static Scaleform::StatDesc::Iterator GetGroupIterator(unsigned long);
	unsigned long GetId();
};
class Scaleform::StatDesc::Iterator
{
private:
	const Scaleform::StatDesc * pDesc; // 0x0
public:
	Iterator(const Scaleform::StatDesc::Iterator &);
	Iterator(const Scaleform::StatDesc *);
	Scaleform::StatDesc::Iterator & operator=(const Scaleform::StatDesc::Iterator &);
	const Scaleform::StatDesc * operator*();
	const Scaleform::StatDesc * operator->();
	bool operator++();
	unsigned long GetId();
	bool operator==(const Scaleform::StatDesc::Iterator &);
	bool operator!=(const Scaleform::StatDesc::Iterator &);
	bool IsEnd();
};
class Scaleform::StatInfo :
	Scaleform::Stat
{
	class StatInterface;
private:
	unsigned long StatId; // 0x0
	Scaleform::StatInfo::StatInterface * pInterface; // 0x8
	Scaleform::Stat * pData; // 0x10
public:
	StatInfo(unsigned long, Scaleform::StatInfo::StatInterface *, Scaleform::Stat *);
	StatInfo();
	bool IsNull();
	Scaleform::Stat::StatType GetType();
	unsigned long GetStatCount();
	void GetStat(Scaleform::Stat::StatValue *, unsigned long);
	void Add(Scaleform::StatInfo &);
	void SetMin(Scaleform::StatInfo &);
	void SetMax(Scaleform::StatInfo &);
	void Reset();
	const char * GetName();
	bool IsMemory();
	bool IsTimer();
	bool IsCounter();
	Scaleform::MemoryStat * ToMemoryStat();
	Scaleform::TimerStat * ToTimerStat();
	Scaleform::CounterStat * ToCounterStat();
};
class Scaleform::StatInfo::StatInterface
{
public:
	~StatInterface();
	Scaleform::Stat::StatType GetType(Scaleform::Stat *);
	unsigned long GetStatCount(Scaleform::Stat *);
	void GetStat(Scaleform::Stat *, Scaleform::Stat::StatValue *, unsigned long);
	unsigned long long GetStatDataSize();
	void Init(Scaleform::Stat *);
	void Add(Scaleform::Stat *, Scaleform::Stat *);
	void SetMin(Scaleform::Stat *, Scaleform::Stat *);
	void SetMax(Scaleform::Stat *, Scaleform::Stat *);
	void Reset(Scaleform::Stat *);
	StatInterface(const Scaleform::StatInfo::StatInterface &);
	StatInterface();
	Scaleform::StatInfo::StatInterface & operator=(const Scaleform::StatInfo::StatInterface &);
};
class Scaleform::StatBag
{
	class StatInterface;
public:
	StatBag(const Scaleform::StatBag &);
	StatBag(Scaleform::MemoryHeap *, unsigned long);
	~StatBag();
	void Clear();
	void Reset();
	bool Add(unsigned long, Scaleform::Stat *);
	Scaleform::StatBag & operator+=(const Scaleform::StatBag &);
	Scaleform::StatBag & operator=(const Scaleform::StatBag &);
	void UpdateGroups();
	bool GetStat(Scaleform::StatInfo *, unsigned long);
	bool AddStat(unsigned long, const Scaleform::Stat &);
	void SetMin(const Scaleform::StatBag &);
	bool SetMin(unsigned long, Scaleform::Stat *);
	void SetMax(const Scaleform::StatBag &);
	bool SetMax(unsigned long, Scaleform::Stat *);
	struct Iterator;
	Scaleform::StatBag::Iterator GetIterator(unsigned long);
	void __dflt_ctor_closure();
};
struct Scaleform::StatBag::Iterator
{
	Scaleform::StatInfo Result; // 0x0
	Iterator(const Scaleform::StatBag::Iterator &);
	Iterator(Scaleform::StatBag *, unsigned long, unsigned long);
	const Scaleform::StatInfo & operator*();
	const Scaleform::StatInfo * operator->();
	bool operator++();
	unsigned long GetId();
	bool operator==(const Scaleform::StatBag::Iterator &);
	bool operator!=(const Scaleform::StatBag::Iterator &);
	bool IsEnd();
};