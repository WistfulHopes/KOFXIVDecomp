#pragma once

class BattleStage :
	protected BattleEventHandler::Listener
{
	class Events_t;
	enum PlayerType
	{
		PLAYER_TYPE_NONE = 0,
		PLAYER_TYPE_PLAYER = 1,
		PLAYER_TYPE_ENEMY = 2,
	};
	enum CharacterType
	{
		CHARACTER_TYPE_NONE = 0,
		CHARACTER_TYPE_NORMAL = 1,
		CHARACTER_TYPE_HOST = 2,
	};
	struct BattleCharacterInfo;
private:
	std::vector<BattleStageEvent *,std::allocator<BattleStageEvent *> > m_pGlobalEvents; // 0x8
	std::vector<BattleStageEvent *,std::allocator<BattleStageEvent *> > m_pLocalEvents; // 0x20
	CollisionModel m_cullingViewModel; // 0x38
	BattleStageResourceContainer * m_pResourceContainer; // 0xE0
	BattleStageSound * m_pSound; // 0xE8
	char * m_pAuroraVisionMessage; // 0xF0
	bool m_bChangeColor; // 0xF8
	BattleStage::BattleCharacterInfo m_characterInfos[2]; // 0xFC
	StageAdditionalFunction_MobShadow * m_pAdditionalFuncton_MobShadow; // 0x118
	bool m_bResourcesInitialized; // 0x120
	long m_updateCount; // 0x124
	bool m_bRestart; // 0x128
public:
	BattleStage(const BattleStage &);
	BattleStage();
	~BattleStage();
	void dispose();
	bool isEnabled();
	const BattleStageResourceContainer * getResouceContainer();
	bool loadResources(const StageProjectData &, STAGE_ID);
	bool isLoadFinised();
	bool setupParameters(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>);
	bool notifyEvent(TknData::SceneTrigger1, TknData::SceneTrigger2, const TknDataEventConditions::CheckParams *, bool);
	void update(float);
	void cullingTest(const OGLMatrix &, const OGLMatrix &);
	void clearCullingParams();
	bool checkVisibleState(const OGLModel *);
	void draw();
	void drawDirectRendring();
	void setAuroraVisionMessage(const char *);
	void callEffectManagers(std::function<void __cdecl(EffectDataListManager &)>);
	void setPlayerAndCharacterType(PLAYER_ID, CHARACTER_NO, BattleStage::PlayerType, BattleStage::CharacterType);
	long getEventCount();
	const BattleStageEvent * getEventByIndex(long);
	const BattleStageEvent * findEventByObjectName(const char *);
	long getGimmickOGLModelCount();
	OGLModel * getGimmickOGLModel(long);
	bool isGimmickOGLModelLocalLight(long);
	bool isResourcesInitialized();
	void resoucesInitialize();
	void battleRestart(long);
	void setBattleState(STAGE_ID, bool);
private:
	BattleStageEvent * createEvent(BSDataEvent *, long);
	virtual void OnEventCharacterDamage(BattleEventHandler::Listener::SkillType, PLAYER_ID, long, long, long, long, const BattleEventHandler::Listener::CharacterStatus *);
	virtual void OnEventCharacterStun(PLAYER_ID, const BattleEventHandler::Listener::CharacterStatus *);
	virtual void OnEventCharacterBound(PLAYER_ID, const BattleEventHandler::Listener::CharacterStatus *);
	virtual void OnEventRoundStartRound(STAGE_ID, long, const BattleEventHandler::Listener::CharacterStatus *);
	virtual void OnEventRoundStartGO(STAGE_ID, long, const BattleEventHandler::Listener::CharacterStatus *);
	virtual void OnEventRoundStartFadeIn(STAGE_ID, long);
	virtual void OnEventRoundStartTalkStart(STAGE_ID, long);
	virtual void OnEventRoundStartTalkOut(STAGE_ID, long);
	virtual void OnEventRoundEnd(BattleEventHandler::Listener::BattleResult, long, const BattleEventHandler::Listener::CharacterStatus *);
	virtual void OnEventTimeup(const BattleEventHandler::Listener::CharacterStatus *);
	virtual void OnEventScreenShake(const BattleEventHandler::Listener::CharacterStatus *);
	virtual void OnEventWallHit(const BattleEventHandler::Listener::CharacterStatus *);
	virtual void OnEventGroundHit(const BattleEventHandler::Listener::CharacterStatus *);
	virtual void OnEventAkebonoKO();
	TknData::SceneTrigger2 roundToTrigger(long);
public:
	BattleStage & operator=(const BattleStage &);
};
class std::vector<BattleStageEvent *,std::allocator<BattleStageEvent *> > :
	std::_Vector_alloc<std::_Vec_base_types<BattleStageEvent *,std::allocator<BattleStageEvent *> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	typedef BattleStageEvent value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef BattleStageEvent * pointer;
	typedef BattleStageEvent * const_pointer;
	typedef BattleStageEvent * reference;
	typedef BattleStageEvent * const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<BattleStageEvent *,std::allocator<BattleStageEvent *> >(std::initializer_list<BattleStageEvent *>, const std::allocator<BattleStageEvent *> &);
	vector<BattleStageEvent *,std::allocator<BattleStageEvent *> >(std::vector<BattleStageEvent *,std::allocator<BattleStageEvent *> > &, const std::allocator<BattleStageEvent *> &);
	vector<BattleStageEvent *,std::allocator<BattleStageEvent *> >(std::vector<BattleStageEvent *,std::allocator<BattleStageEvent *> > &);
	vector<BattleStageEvent *,std::allocator<BattleStageEvent *> >(const std::vector<BattleStageEvent *,std::allocator<BattleStageEvent *> > &, const std::allocator<BattleStageEvent *> &);
	vector<BattleStageEvent *,std::allocator<BattleStageEvent *> >(const std::vector<BattleStageEvent *,std::allocator<BattleStageEvent *> > &);
	vector<BattleStageEvent *,std::allocator<BattleStageEvent *> >(unsigned long long, BattleStageEvent * &, const std::allocator<BattleStageEvent *> &);
	vector<BattleStageEvent *,std::allocator<BattleStageEvent *> >(unsigned long long, BattleStageEvent * &);
	vector<BattleStageEvent *,std::allocator<BattleStageEvent *> >(unsigned long long);
	vector<BattleStageEvent *,std::allocator<BattleStageEvent *> >(const std::allocator<BattleStageEvent *> &);
	vector<BattleStageEvent *,std::allocator<BattleStageEvent *> >();
	void _Construct_n(unsigned long long, BattleStageEvent * *);
	std::vector<BattleStageEvent *,std::allocator<BattleStageEvent *> > & operator=(const std::vector<BattleStageEvent *,std::allocator<BattleStageEvent *> > &);
	std::vector<BattleStageEvent *,std::allocator<BattleStageEvent *> > & operator=(std::initializer_list<BattleStageEvent *>);
	std::vector<BattleStageEvent *,std::allocator<BattleStageEvent *> > & operator=(std::vector<BattleStageEvent *,std::allocator<BattleStageEvent *> > &);
	void _Assign_rv(std::vector<BattleStageEvent *,std::allocator<BattleStageEvent *> > &);
	void _Assign_rv(std::vector<BattleStageEvent *,std::allocator<BattleStageEvent *> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<BattleStageEvent *,std::allocator<BattleStageEvent *> > &, std::integral_constant<bool,1>);
	void push_back(BattleStageEvent * &);
	void push_back(BattleStageEvent * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleStageEvent *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleStageEvent *> > >, unsigned long long, BattleStageEvent * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleStageEvent *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleStageEvent *> > >, BattleStageEvent * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleStageEvent *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleStageEvent *> > >, std::initializer_list<BattleStageEvent *>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleStageEvent *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleStageEvent *> > >, BattleStageEvent * &);
	void assign(unsigned long long, BattleStageEvent * &);
	void assign(std::initializer_list<BattleStageEvent *>);
	~vector<BattleStageEvent *,std::allocator<BattleStageEvent *> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleStageEvent *> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleStageEvent *> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleStageEvent *> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleStageEvent *> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleStageEvent *> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleStageEvent *> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleStageEvent *> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleStageEvent *> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleStageEvent *> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleStageEvent *> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleStageEvent *> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleStageEvent *> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleStageEvent *> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleStageEvent *> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, BattleStageEvent * &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<BattleStageEvent *> get_allocator();
	BattleStageEvent * & at(unsigned long long);
	BattleStageEvent * & at(unsigned long long);
	BattleStageEvent * & operator[](unsigned long long);
	BattleStageEvent * & operator[](unsigned long long);
	BattleStageEvent * * data();
	BattleStageEvent * * data();
	BattleStageEvent * & front();
	BattleStageEvent * & front();
	BattleStageEvent * & back();
	BattleStageEvent * & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleStageEvent *> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleStageEvent *> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleStageEvent *> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleStageEvent *> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleStageEvent *> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<BattleStageEvent *,std::allocator<BattleStageEvent *> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(BattleStageEvent * *, BattleStageEvent * *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(BattleStageEvent * *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleStageEvent *> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleStageEvent *> > >, unsigned long long, BattleStageEvent * &);
	BattleStageEvent * * _Ufill(BattleStageEvent * *, unsigned long long, BattleStageEvent * *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(BattleStageEvent * *, BattleStageEvent * *);
};
enum BattleStage::PlayerType
{
	PLAYER_TYPE_NONE = 0,
	PLAYER_TYPE_PLAYER = 1,
	PLAYER_TYPE_ENEMY = 2,
};
struct BattleStage::BattleCharacterInfo
{
	CHARACTER_NO characterNo; // 0x0
	BattleStage::PlayerType playerType; // 0x4
	BattleStage::CharacterType characterType; // 0x8
	BattleCharacterInfo();
};
class std::function<void __cdecl(EffectDataListManager &)> :
	std::_Func_class<void,EffectDataListManager &>
{
	class _Mybase;
	class _Myt;
public:
	function<void __cdecl(EffectDataListManager &)>(std::function<void __cdecl(EffectDataListManager &)> &);
	function<void __cdecl(EffectDataListManager &)>(const std::function<void __cdecl(EffectDataListManager &)> &);
	function<void __cdecl(EffectDataListManager &)>(void *);
	function<void __cdecl(EffectDataListManager &)>();
	~function<void __cdecl(EffectDataListManager &)>();
	std::function<void __cdecl(EffectDataListManager &)> & operator=(void *);
	std::function<void __cdecl(EffectDataListManager &)> & operator=(std::function<void __cdecl(EffectDataListManager &)> &);
	std::function<void __cdecl(EffectDataListManager &)> & operator=(const std::function<void __cdecl(EffectDataListManager &)> &);
	void swap(std::function<void __cdecl(EffectDataListManager &)> &);
	bool operator bool();
	const type_info & target_type();
};