#pragma once

class BattleSystem::ComboMissionJudge :
	BattleSystem::ComboMissionAttackEventListener
{
public:
	ComboMissionJudge();
	virtual ~ComboMissionJudge();
	void SetMission(const ComboMissionData::MissionData *);
	void SetActor(ActorChara *, ActorChara *);
	const ComboMissionData::MissionData * GetMissionData();
	void Dispose();
	void Update();
	bool IsMissionComplete();
	bool IsTutorialTermClear();
	bool IsComboTermClear();
	bool IsComboTermFailed();
	long GetTermClearCount();
	long GetCompleteCount();
	bool IsTermClear(long);
	const char * GetCommandStr(long);
	long GetTermCount();
	void AllReset();
	virtual void RecvAttackHitEvent(long, bool);
	struct TermClearInfo;
private:
	void Reset();
	bool CheckBaseCommandTerm(const ComboMissionData::ComboMissionTermParts *, short &);
	bool CheckCharaCommandTerm(const ComboMissionData::ComboMissionTermParts *, short &);
	bool CheckActionIDTerm(const ComboMissionData::ComboMissionTermParts *, short &);
	bool CheckExtraStateTerm(const ComboMissionData::ComboMissionTermParts *, short &);
	bool CheckShotEvade();
	ActorChara * pPlayer; // 0x8
	ActorChara * pEnemy; // 0x10
	const ComboMissionData::MissionData * pMissionData; // 0x18
	long iCompleteCount; // 0x20
	long iTermClearCount; // 0x24
	bool bOneTermClear; // 0x28
	bool bComboTermFailed; // 0x29
	bool bMaxModeCheck; // 0x2A
	bool bShotEvadeOK; // 0x2B
	std::unique_ptr<BattleSystem::ComboMissionJudge::TermClearInfo [0],std::default_delete<BattleSystem::ComboMissionJudge::TermClearInfo [0]> > pClearInfo; // 0x30
};
BattleSystem::ComboMissionJudge::~ComboMissionJudge(); // 0x1400BC170
struct BattleSystem::ComboMissionJudge::TermClearInfo
{
	std::unique_ptr<short [0],std::default_delete<short [0]> > pCount; // 0x0
	bool bClear; // 0x8
	TermClearInfo(BattleSystem::ComboMissionJudge::TermClearInfo &);
	TermClearInfo();
	~TermClearInfo();
	BattleSystem::ComboMissionJudge::TermClearInfo & operator=(BattleSystem::ComboMissionJudge::TermClearInfo &);
};
class std::unique_ptr<short [0],std::default_delete<short [0]> > :
	std::_Unique_ptr_base<short,std::default_delete<short [0]> >
{
	class _Myt;
	class _Mybase;
	typedef short *pointer;
	typedef short element_type;
	struct deleter_type;
public:
	unique_ptr<short [0],std::default_delete<short [0]> >(const std::unique_ptr<short [0],std::default_delete<short [0]> > &);
	unique_ptr<short [0],std::default_delete<short [0]> >(void *);
	unique_ptr<short [0],std::default_delete<short [0]> >(std::unique_ptr<short [0],std::default_delete<short [0]> > &);
	unique_ptr<short [0],std::default_delete<short [0]> >();
	std::unique_ptr<short [0],std::default_delete<short [0]> > & operator=(const std::unique_ptr<short [0],std::default_delete<short [0]> > &);
	std::unique_ptr<short [0],std::default_delete<short [0]> > & operator=(void *);
	std::unique_ptr<short [0],std::default_delete<short [0]> > & operator=(std::unique_ptr<short [0],std::default_delete<short [0]> > &);
	void reset(void *);
	void swap(std::unique_ptr<short [0],std::default_delete<short [0]> > &);
	~unique_ptr<short [0],std::default_delete<short [0]> >();
	short & operator[](unsigned long long);
	short * get();
	bool operator bool();
	short * release();
private:
	void _Delete();
};
class std::unique_ptr<BattleSystem::ComboMissionJudge::TermClearInfo [0],std::default_delete<BattleSystem::ComboMissionJudge::TermClearInfo [0]> > :
	std::_Unique_ptr_base<BattleSystem::ComboMissionJudge::TermClearInfo,std::default_delete<BattleSystem::ComboMissionJudge::TermClearInfo [0]> >
{
	class _Myt;
	class _Mybase;
	typedef BattleSystem::ComboMissionJudge::TermClearInfo pointer;
	struct element_type;
	struct deleter_type;
public:
	unique_ptr<BattleSystem::ComboMissionJudge::TermClearInfo [0],std::default_delete<BattleSystem::ComboMissionJudge::TermClearInfo [0]> >(const std::unique_ptr<BattleSystem::ComboMissionJudge::TermClearInfo [0],std::default_delete<BattleSystem::ComboMissionJudge::TermClearInfo [0]> > &);
	unique_ptr<BattleSystem::ComboMissionJudge::TermClearInfo [0],std::default_delete<BattleSystem::ComboMissionJudge::TermClearInfo [0]> >(void *);
	unique_ptr<BattleSystem::ComboMissionJudge::TermClearInfo [0],std::default_delete<BattleSystem::ComboMissionJudge::TermClearInfo [0]> >(std::unique_ptr<BattleSystem::ComboMissionJudge::TermClearInfo [0],std::default_delete<BattleSystem::ComboMissionJudge::TermClearInfo [0]> > &);
	unique_ptr<BattleSystem::ComboMissionJudge::TermClearInfo [0],std::default_delete<BattleSystem::ComboMissionJudge::TermClearInfo [0]> >();
	std::unique_ptr<BattleSystem::ComboMissionJudge::TermClearInfo [0],std::default_delete<BattleSystem::ComboMissionJudge::TermClearInfo [0]> > & operator=(const std::unique_ptr<BattleSystem::ComboMissionJudge::TermClearInfo [0],std::default_delete<BattleSystem::ComboMissionJudge::TermClearInfo [0]> > &);
	std::unique_ptr<BattleSystem::ComboMissionJudge::TermClearInfo [0],std::default_delete<BattleSystem::ComboMissionJudge::TermClearInfo [0]> > & operator=(void *);
	std::unique_ptr<BattleSystem::ComboMissionJudge::TermClearInfo [0],std::default_delete<BattleSystem::ComboMissionJudge::TermClearInfo [0]> > & operator=(std::unique_ptr<BattleSystem::ComboMissionJudge::TermClearInfo [0],std::default_delete<BattleSystem::ComboMissionJudge::TermClearInfo [0]> > &);
	void reset(void *);
	void swap(std::unique_ptr<BattleSystem::ComboMissionJudge::TermClearInfo [0],std::default_delete<BattleSystem::ComboMissionJudge::TermClearInfo [0]> > &);
	~unique_ptr<BattleSystem::ComboMissionJudge::TermClearInfo [0],std::default_delete<BattleSystem::ComboMissionJudge::TermClearInfo [0]> >();
	BattleSystem::ComboMissionJudge::TermClearInfo & operator[](unsigned long long);
	BattleSystem::ComboMissionJudge::TermClearInfo * get();
	bool operator bool();
	BattleSystem::ComboMissionJudge::TermClearInfo * release();
private:
	void _Delete();
};