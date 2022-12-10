#pragma once

struct BattleSystem::SequenceCandidateInfo
{
	SequenceCandidateInfo(long, const CpuSequenceData::SequenceData *);
	SequenceCandidateInfo();
	long iIndex; // 0x0
	const CpuSequenceData::SequenceData * pData; // 0x8
};
class BattleSystem::SequenceController
{
	class SequenceCandidates;
public:
	SequenceController(const BattleSystem::SequenceController &);
	SequenceController();
	~SequenceController();
	void Dispose();
	void SetCpuData(ActorChara *, const CpuSequenceData *);
	void ClearSequenceCandidate();
	long CheckSequenceCandidates(AiLevelSpec, std::function<bool __cdecl(ActorChara *,CpuSequenceData::SequenceData const &)>);
	long CheckSequenceCandidates(BattleSystem::SequenceController::WIDE_CATEGORY, AiLevelSpec, long, long, long);
	long CheckSequenceCandidates(CpuSequenceData::SEQUENCE_CATEGORY::ID, AiLevelSpec, long, long, long);
	enum WIDE_CATEGORY
	{
		GR_VS_GR = 0,
		AR_VS_AR = 1,
		GR_VS_AR = 2,
		AR_VS_GR = 3,
	};
	long GetSequenceTotalPriority();
	long GetSequenceTotalCount();
	BattleSystem::SequenceCandidateInfo GetSelectedSequence(long);
	long CheckFrontMoveLevelAdj(long);
	long CheckBackMoveLevelAdj(long);
	long CheckJumpLevelAdj(long);
	long CheckClimaxModeLevelAdj(long);
	long CheckThrowLevelAdj(long);
	bool SetSequenceStart(long);
	void ResetSequence();
	bool IsInvalidSequence();
	const CpuSequenceData::SequenceData * GetNowSequenceData();
	long GetNowSequenceListIndex();
	const CpuSequenceData::SequenceCommandData * GetNowSequenceCommandData();
	long GetNowSequenceCommandIndex();
	const char * GetNowSequenceListName();
	const char * GetSequenceListName(long);
	const CpuSequenceData::SequenceCommandData * SetNextSequenceCommand(bool);
	long GetStandCharge();
	long GetCrouchCharge();
	long GetButtonCharge();
	void ResetButtonCharge();
	bool IsNotAttackHit();
	bool IsNotThrowHit();
	void CheckChargeCountUp();
private:
	std::vector<BattleSystem::SequenceCandidateInfo,std::allocator<BattleSystem::SequenceCandidateInfo> > seqCandidateList; // 0x0
	bool IsNullData();
	bool CheckSequenceTerm(const CpuSequenceData::SequenceData *, AiLevelSpec, long, long, long);
	long CheckSequencePriorityAdj(const CpuSequenceData::SequenceData *);
	bool IsThrowCategory(long);
	ActorChara * pOwner; // 0x18
	const CpuSequenceData * pCpuData; // 0x20
	long iSeqListIndex; // 0x28
	long iSeqCommandIndex; // 0x2C
	long iStandCharge; // 0x30
	long iCrouchCharge; // 0x34
	long iButtonCharge; // 0x38
public:
	BattleSystem::SequenceController & operator=(const BattleSystem::SequenceController &);
};
class std::vector<BattleSystem::SequenceCandidateInfo,std::allocator<BattleSystem::SequenceCandidateInfo> > :
	std::_Vector_alloc<std::_Vec_base_types<BattleSystem::SequenceCandidateInfo,std::allocator<BattleSystem::SequenceCandidateInfo> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef BattleSystem::SequenceCandidateInfo pointer;
	typedef const BattleSystem::SequenceCandidateInfo const_pointer;
	typedef BattleSystem::SequenceCandidateInfo reference;
	typedef const BattleSystem::SequenceCandidateInfo const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<BattleSystem::SequenceCandidateInfo,std::allocator<BattleSystem::SequenceCandidateInfo> >(std::initializer_list<BattleSystem::SequenceCandidateInfo>, const std::allocator<BattleSystem::SequenceCandidateInfo> &);
	vector<BattleSystem::SequenceCandidateInfo,std::allocator<BattleSystem::SequenceCandidateInfo> >(std::vector<BattleSystem::SequenceCandidateInfo,std::allocator<BattleSystem::SequenceCandidateInfo> > &, const std::allocator<BattleSystem::SequenceCandidateInfo> &);
	vector<BattleSystem::SequenceCandidateInfo,std::allocator<BattleSystem::SequenceCandidateInfo> >(std::vector<BattleSystem::SequenceCandidateInfo,std::allocator<BattleSystem::SequenceCandidateInfo> > &);
	vector<BattleSystem::SequenceCandidateInfo,std::allocator<BattleSystem::SequenceCandidateInfo> >(const std::vector<BattleSystem::SequenceCandidateInfo,std::allocator<BattleSystem::SequenceCandidateInfo> > &, const std::allocator<BattleSystem::SequenceCandidateInfo> &);
	vector<BattleSystem::SequenceCandidateInfo,std::allocator<BattleSystem::SequenceCandidateInfo> >(const std::vector<BattleSystem::SequenceCandidateInfo,std::allocator<BattleSystem::SequenceCandidateInfo> > &);
	vector<BattleSystem::SequenceCandidateInfo,std::allocator<BattleSystem::SequenceCandidateInfo> >(unsigned long long, const BattleSystem::SequenceCandidateInfo &, const std::allocator<BattleSystem::SequenceCandidateInfo> &);
	vector<BattleSystem::SequenceCandidateInfo,std::allocator<BattleSystem::SequenceCandidateInfo> >(unsigned long long, const BattleSystem::SequenceCandidateInfo &);
	vector<BattleSystem::SequenceCandidateInfo,std::allocator<BattleSystem::SequenceCandidateInfo> >(unsigned long long);
	vector<BattleSystem::SequenceCandidateInfo,std::allocator<BattleSystem::SequenceCandidateInfo> >(const std::allocator<BattleSystem::SequenceCandidateInfo> &);
	vector<BattleSystem::SequenceCandidateInfo,std::allocator<BattleSystem::SequenceCandidateInfo> >();
	void _Construct_n(unsigned long long, const BattleSystem::SequenceCandidateInfo *);
	std::vector<BattleSystem::SequenceCandidateInfo,std::allocator<BattleSystem::SequenceCandidateInfo> > & operator=(const std::vector<BattleSystem::SequenceCandidateInfo,std::allocator<BattleSystem::SequenceCandidateInfo> > &);
	std::vector<BattleSystem::SequenceCandidateInfo,std::allocator<BattleSystem::SequenceCandidateInfo> > & operator=(std::initializer_list<BattleSystem::SequenceCandidateInfo>);
	std::vector<BattleSystem::SequenceCandidateInfo,std::allocator<BattleSystem::SequenceCandidateInfo> > & operator=(std::vector<BattleSystem::SequenceCandidateInfo,std::allocator<BattleSystem::SequenceCandidateInfo> > &);
	void _Assign_rv(std::vector<BattleSystem::SequenceCandidateInfo,std::allocator<BattleSystem::SequenceCandidateInfo> > &);
	void _Assign_rv(std::vector<BattleSystem::SequenceCandidateInfo,std::allocator<BattleSystem::SequenceCandidateInfo> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<BattleSystem::SequenceCandidateInfo,std::allocator<BattleSystem::SequenceCandidateInfo> > &, std::integral_constant<bool,1>);
	void push_back(const BattleSystem::SequenceCandidateInfo &);
	void push_back(BattleSystem::SequenceCandidateInfo &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleSystem::SequenceCandidateInfo> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleSystem::SequenceCandidateInfo> > >, unsigned long long, const BattleSystem::SequenceCandidateInfo &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleSystem::SequenceCandidateInfo> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleSystem::SequenceCandidateInfo> > >, const BattleSystem::SequenceCandidateInfo &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleSystem::SequenceCandidateInfo> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleSystem::SequenceCandidateInfo> > >, std::initializer_list<BattleSystem::SequenceCandidateInfo>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleSystem::SequenceCandidateInfo> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleSystem::SequenceCandidateInfo> > >, BattleSystem::SequenceCandidateInfo &);
	void assign(unsigned long long, const BattleSystem::SequenceCandidateInfo &);
	void assign(std::initializer_list<BattleSystem::SequenceCandidateInfo>);
	~vector<BattleSystem::SequenceCandidateInfo,std::allocator<BattleSystem::SequenceCandidateInfo> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleSystem::SequenceCandidateInfo> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleSystem::SequenceCandidateInfo> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleSystem::SequenceCandidateInfo> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleSystem::SequenceCandidateInfo> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleSystem::SequenceCandidateInfo> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleSystem::SequenceCandidateInfo> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleSystem::SequenceCandidateInfo> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleSystem::SequenceCandidateInfo> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleSystem::SequenceCandidateInfo> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleSystem::SequenceCandidateInfo> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleSystem::SequenceCandidateInfo> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleSystem::SequenceCandidateInfo> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleSystem::SequenceCandidateInfo> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleSystem::SequenceCandidateInfo> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const BattleSystem::SequenceCandidateInfo &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<BattleSystem::SequenceCandidateInfo> get_allocator();
	BattleSystem::SequenceCandidateInfo & at(unsigned long long);
	const BattleSystem::SequenceCandidateInfo & at(unsigned long long);
	BattleSystem::SequenceCandidateInfo & operator[](unsigned long long);
	const BattleSystem::SequenceCandidateInfo & operator[](unsigned long long);
	const BattleSystem::SequenceCandidateInfo * data();
	BattleSystem::SequenceCandidateInfo * data();
	const BattleSystem::SequenceCandidateInfo & front();
	BattleSystem::SequenceCandidateInfo & front();
	const BattleSystem::SequenceCandidateInfo & back();
	BattleSystem::SequenceCandidateInfo & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleSystem::SequenceCandidateInfo> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleSystem::SequenceCandidateInfo> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleSystem::SequenceCandidateInfo> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleSystem::SequenceCandidateInfo> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleSystem::SequenceCandidateInfo> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<BattleSystem::SequenceCandidateInfo,std::allocator<BattleSystem::SequenceCandidateInfo> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(BattleSystem::SequenceCandidateInfo *, BattleSystem::SequenceCandidateInfo *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const BattleSystem::SequenceCandidateInfo *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleSystem::SequenceCandidateInfo> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleSystem::SequenceCandidateInfo> > >, unsigned long long, const BattleSystem::SequenceCandidateInfo &);
	BattleSystem::SequenceCandidateInfo * _Ufill(BattleSystem::SequenceCandidateInfo *, unsigned long long, const BattleSystem::SequenceCandidateInfo *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(BattleSystem::SequenceCandidateInfo *, BattleSystem::SequenceCandidateInfo *);
};
class std::function<bool __cdecl(ActorChara *,CpuSequenceData::SequenceData const &)> :
	std::_Func_class<bool,ActorChara *,CpuSequenceData::SequenceData const &>
{
	class _Mybase;
	class _Myt;
public:
	function<bool __cdecl(ActorChara *,CpuSequenceData::SequenceData const &)>(std::function<bool __cdecl(ActorChara *,CpuSequenceData::SequenceData const &)> &);
	function<bool __cdecl(ActorChara *,CpuSequenceData::SequenceData const &)>(const std::function<bool __cdecl(ActorChara *,CpuSequenceData::SequenceData const &)> &);
	function<bool __cdecl(ActorChara *,CpuSequenceData::SequenceData const &)>(void *);
	function<bool __cdecl(ActorChara *,CpuSequenceData::SequenceData const &)>();
	~function<bool __cdecl(ActorChara *,CpuSequenceData::SequenceData const &)>();
	std::function<bool __cdecl(ActorChara *,CpuSequenceData::SequenceData const &)> & operator=(void *);
	std::function<bool __cdecl(ActorChara *,CpuSequenceData::SequenceData const &)> & operator=(std::function<bool __cdecl(ActorChara *,CpuSequenceData::SequenceData const &)> &);
	std::function<bool __cdecl(ActorChara *,CpuSequenceData::SequenceData const &)> & operator=(const std::function<bool __cdecl(ActorChara *,CpuSequenceData::SequenceData const &)> &);
	void swap(std::function<bool __cdecl(ActorChara *,CpuSequenceData::SequenceData const &)> &);
	bool operator bool();
	const type_info & target_type();
};