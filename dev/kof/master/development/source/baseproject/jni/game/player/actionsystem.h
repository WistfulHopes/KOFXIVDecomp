#pragma once

struct SimpleQueue<ActorChara,4>::Queue
{
	ActorChara * pData; // 0x0
	SimpleQueue<ActorChara,4>::Queue * pNext; // 0x8
};
struct SimpleQueue<ActorEffect,96>::Queue
{
	ActorEffect * pData; // 0x0
	SimpleQueue<ActorEffect,96>::Queue * pNext; // 0x8
};
struct SimpleQueue<ActorShot,32>::Queue
{
	ActorShot * pData; // 0x0
	SimpleQueue<ActorShot,32>::Queue * pNext; // 0x8
};
struct SimpleQueue<ActorOption,4>::Queue
{
	ActorOption * pData; // 0x0
	SimpleQueue<ActorOption,4>::Queue * pNext; // 0x8
};
struct SimpleQueue<ActorWeapon,96>::Queue
{
	ActorWeapon * pData; // 0x0
	SimpleQueue<ActorWeapon,96>::Queue * pNext; // 0x8
};
SimpleQueue<ActorChara,4>::SimpleQueue<ActorChara,4>(); // 0x1400BFDE0
SimpleQueue<ActorEffect,96>::SimpleQueue<ActorEffect,96>(); // 0x1400BFC70
SimpleQueue<ActorOption,4>::SimpleQueue<ActorOption,4>(); // 0x1400BFA80
SimpleQueue<ActorShot,32>::SimpleQueue<ActorShot,32>(); // 0x1400BFD30
SimpleQueue<ActorWeapon,96>::SimpleQueue<ActorWeapon,96>(); // 0x1400BFBB0
SimpleQueue<ActorChara,4>::~SimpleQueue<ActorChara,4>(); // 0x1400BFDB0
SimpleQueue<ActorEffect,96>::~SimpleQueue<ActorEffect,96>(); // 0x1400BFC30
SimpleQueue<ActorOption,4>::~SimpleQueue<ActorOption,4>(); // 0x1400BFA50
SimpleQueue<ActorShot,32>::~SimpleQueue<ActorShot,32>(); // 0x1400BFCF0
SimpleQueue<ActorWeapon,96>::~SimpleQueue<ActorWeapon,96>(); // 0x1400BFB70
void SimpleQueue<ActorEffect,96>::Init(); // 0x1400C0230
void SimpleQueue<ActorShot,32>::Init(); // 0x1400C02B0
void SimpleQueue<ActorWeapon,96>::Init(); // 0x1400C01B0
class ActionSystem
{
	enum EFFECT_LIST_ID
	{
		EFLIST_ID_COMMON = 0,
		EFLIST_ID_PLAYER_1P = 1,
		EFLIST_ID_PLAYER_2P = 2,
		EFLIST_ID_PLAYER_1P_OPT = 3,
		EFLIST_ID_PLAYER_2P_OPT = 4,
		EFFECT_LIST_ID_MAX = 5,
	};
	enum ACTION_PRI
	{
		APRI_BACK = 0,
		APRI_EFFECT_BACK = 1,
		APRI_PLAYER_1P = 2,
		APRI_PLAYER_2P = 3,
		APRI_WEAPON = 4,
		APRI_SUPPORT = 5,
		APRI_SHOT = 6,
		APRI_EFFECT = 7,
		APRI_FRONT = 8,
		ACTION_PRI_MAX = 9,
	};
	enum DRAW_PRI
	{
		DPRI_BACK = 0,
		DPRI_EFFECT_BACK = 1,
		DPRI_PLAYER_1P = 2,
		DPRI_PLAYER_2P = 3,
		DPRI_PLAYER_1P_SUB = 4,
		DPRI_PLAYER_2P_SUB = 5,
		DPRI_EFFECT_FRONT = 6,
		DPRI_SHOT = 7,
		DPRI_EFFECT = 8,
		DPRI_FRONT = 9,
		DRAW_PRI_MAX = 10,
	};
	enum DRAW_ACTOR_VALUE
	{
		DRAW_ACTOR_P1 = 0,
		DRAW_ACTOR_P2 = 1,
		DRAW_ACTOR_P3 = 2,
		DRAW_ACTOR_P4 = 3,
		DRAW_ACTOR_VALUE_MAX = 4,
	};
public:
	static const float cfZOffsetDefaultValue; // 0xFFFFFFFFFFFFFFFF
	struct CameraLightParam;
	enum <unnamed-enum-INVISIBLE_PLAYER_1P>
	{
		INVISIBLE_PLAYER_1P = 0,
		INVISIBLE_PLAYER_2P = 1,
		INVISIBLE_OPTION_1P = 2,
		INVISIBLE_OPTION_2P = 3,
		INVISIBLE_EFFECT = 4,
		INVISIBLE_FLAG_MAX = 5,
	};
	enum <unnamed-enum-ACTOR_CHARA_MAX>
	{
		ACTOR_CHARA_MAX = 4,
		ACTOR_SHOT_MAX = 32,
		ACTOR_EFFECT_MAX = 96,
		ACTOR_WEAPON_MAX = 96,
		ACTOR_OPTION_MAX = 4,
		ACTOR_LIST_MAX = 232,
	};
	struct ActorList;
	class RivalTalkData;
private:
	static const float cfPlayerInitialPosX[2][3]; // 0xFFFFFFFFFFFFFFFF
	SimpleQueue<ActorChara,4> actorCharaQue; // 0x0
	SimpleQueue<ActorShot,32> actorShotQue; // 0x3DC8
	SimpleQueue<ActorEffect,96> actorEffectQue; // 0xB4F0
	SimpleQueue<ActorWeapon,96> actorWeaponQue; // 0x23518
	SimpleQueue<ActorOption,4> actorOptionQue; // 0x38E40
	ActionSystem::ActorList * pRealiz; // 0x39E48
	ActionSystem::ActorList * * ppPriStart; // 0x39E50
	ActionSystem::ActorList * * ppPriEnd; // 0x39E58
	ActionSystem::ActorList * pEmpty; // 0x39E60
	long iActorMax; // 0x39E68
	long iMaxPriority; // 0x39E6C
	long * pAliveNum; // 0x39E70
	long iAliveTotal; // 0x39E78
	unsigned long uiActorID; // 0x39E7C
	std::vector<Actor *,std::allocator<Actor *> > pReqDraw; // 0x39E80
	long iReqDrawCount; // 0x39E98
	bool bSorted; // 0x39E9C
	ActorChara * pPlayer[2]; // 0x39EA0
	Actor * pDrawActor[4]; // 0x39EB0
	Fix32 xPlaySpeed; // 0x39ED0
	ActionBlackout actBlack; // 0x39ED4
	CameraControl cameraCtrl; // 0x3A0D0
	CameraControl subCameraCtrl[2]; // 0x3A498
	FreeCameraControl freeCamera; // 0x3AC28
	EffectDataListManager * pEffectMgr[5]; // 0x3AD38
	long iThrowChildPlayerID; // 0x3AD60
	std::bitset<5> bsInvisibleFlag; // 0x3AD64
	bool bInvalidZOffset; // 0x3AD68
	bool bFreeCameraMode; // 0x3AD69
	bool bUseSubCamera; // 0x3AD6A
	bool bFastPlayDrawSkipFrame; // 0x3AD6B
	ActionSystem::RivalTalkData rivalTalkData; // 0x3AD70
	long iPrevDamageAnnounce[2]; // 0x3AD88
	long iShadowPassSetting[2]; // 0x3AD90
	ActionSystem::CameraLightParam cameraLightParam[4]; // 0x3AD98
	MaterialShowControl defaultMaterialData[4]; // 0x3ADA8
	void CheckComboDamageAnnounce();
	void CheckThrowChildPlayer(long);
	void Run(Actor &);
	void Delete(ActionSystem::ActorList *);
	void DrawRequest(Actor *);
	void DrawSort();
public:
	ActionSystem(const ActionSystem &);
	ActionSystem();
	~ActionSystem();
	bool IsInit();
	bool Init(long);
	void Final();
	ActorChara * EntryPlayer(long, long);
	Actor * Entry(Actor::ACTOR_TYPE, long);
	void AllDelete(long);
	void AllDelete();
	void SystemInit();
	void SystemUpdate();
	void SystemUpdatePartial();
	void PreCaller(long, long);
	void PreCaller(long);
	void PreCaller();
	void MainCaller(long, long);
	void MainCaller(long);
	void MainCaller();
	void LateCaller(long, long);
	void LateCaller(long);
	void LateCaller();
	void SyncPosture(long, long);
	void SyncPosture(long);
	void SyncPosture();
	void DrawReqClear();
	void DrawCaller(long, long);
	void DrawCaller(long);
	void DrawCaller();
	long GetTotalActor(long);
	long GetTotalActor();
	long GetTotalDrawReq();
	void SetPlaySpeed(Fix32);
	void SetPlaySpeed(float);
	float GetPlaySpeed();
	Fix32 GetPlaySpeedFix();
	enum PLAYER_INIT_POS
	{
		LEFT = 0,
		CENTER = 1,
		RIGHT = 2,
	};
	static float GetPlayerInitialPosX(long, ActionSystem::PLAYER_INIT_POS);
	static float GetPlayerInitialDist();
	static float GetPlayerMaxDistRange();
	static float GetPlayerMaxDistRangeHalf();
	ActorChara * GetPlayerActor(long);
	void SetModelDrawActor(long, Actor *);
	Actor * GetModelDrawActor(long);
	bool IsModelDrawActor(long);
	MaterialShowControl & GetDefaultMaterialData(Actor *);
	MaterialShowControl & GetDefaultMaterialData(long);
	void SetFastPlayDrawSkipFrame(bool);
	bool IsFastPlayDrawSkipFrame();
	bool IsThrowChildPlayer(long);
	ActionBlackout & GetActionBlackout();
	void FuncCallRequest(long, std::function<void __cdecl(Actor &)>);
	void CameraPrevCalc();
	void CameraLateCalc();
	CameraControl & GetCameraControl();
	CameraControl & GetSubCameraControl(long);
	FreeCameraControl & GetFreeCamera();
	EffectDataListManager * GetEffectManager(const Actor &, long);
	EffectDataListManager * GetEffectManager(ActionSystem::EFFECT_LIST_ID);
	void SetEffectDataList(ActionSystem::EFFECT_LIST_ID, EffectDataListManager *);
	void ClearEffectDataList();
	void SetInvisibleChara(bool, long);
	void SetInvisibleEffect(bool);
	bool IsInvisibleChara(long);
	bool IsInvisibleEffect();
	void SetInvalidZOffset(bool);
	bool IsInvalidZOffset();
	float GetPlayerAlphaParam(long);
	void SetFreeCameraMode(bool);
	bool IsFreeCameraMode();
	void SetUseSubCamera(bool);
	bool IsUseSubCamera();
	OGLVec3 GetCameraPos();
	OGLVec3 GetCameraLook();
	OGLVec3 GetCameraUp();
	void GetViewTrans(OGLMatrix &);
	void GetBillboard(OGLMatrix &);
	void GetPerspectiveFov(OGLMatrix);
	OGLVec3 GetSubCameraPos(long);
	OGLVec3 GetSubCameraLook(long);
	OGLVec3 GetSubCameraUp(long);
	void SetProjBlendScale(float);
	float GetProjBlendBaseScale();
	float GetProjBlendScale();
	ActionSystem::RivalTalkData & GetRivalTalkData();
	void RequestSound(Actor &, const CharaActionData::Sound::Type::Play &);
	void RequestSoundStop(unsigned long, float);
	void RequestSoundStop(Actor &, const CharaActionData::Sound::Type::Stop &);
	void RequestSoundStopActionChange(Actor &);
	void RequestSoundStopDamaged(Actor &);
	void RequestSoundStopSuperCancel(Actor &);
	void RequestSoundStopKO();
	bool CheckDependSound(const CharaBaseStatus *, const extension::SoundHashKey &, Actor &, const long, const float, const unsigned long);
	float GetSoundPanPosition(float);
	void SetShadowPassSetting(long, long);
	bool IsDisableCharaSelfShadow();
	bool IsIgnoreShadowPass();
	void SetCameraLightSetting(long, CharaActionData::SETTING_SP_EFFECT_CAMERA_LIGHT::ID, long);
	const ActionSystem::CameraLightParam & GetCameraLightSetting(long, bool);
	bool IsSwitchCameraLight(long);
	void ReqpplyCameraLight(long);
	struct PhotoModeData;
	ActionSystem::PhotoModeData photoModeData; // 0x3C108
	void SetPhotoMode(bool);
	bool IsEnablePhotoMode();
	void PlayPhotoModeAction();
};
struct ActionSystem::CameraLightParam
{
	char iLightID; // 0x0
	char iMirror; // 0x1
	bool bApply; // 0x2
};
struct ActionSystem::ActorList
{
	ActionSystem::ActorList * pNext; // 0x0
	ActionSystem::ActorList * pBefore; // 0x8
	Actor * pActor; // 0x10
};
class ActionSystem::RivalTalkData
{
private:
	long iWindowActive; // 0x0
	long iTextID; // 0x4
	long iTextID2; // 0x8
	bool bNextActionReserve; // 0xC
	bool bNextAction; // 0xD
	bool bSkipTalkReserve; // 0xE
	bool bSkipTalk; // 0xF
	const CharaActionData * pActDat; // 0x10
	void Init();
	void Update();
public:
	RivalTalkData();
	void SetTalkData(long, const CharaActionData::Setting::Type::Talk &, const CharaActionData *);
	void SetNextAction();
	void SetSkipTalk();
	bool IsNextAction();
	bool IsSkipTalk();
	long GetActiveWindow();
	bool IsActiveText();
	const char * GetTextKey(long);
};
class SimpleQueue<ActorChara,4>
{
	struct Queue;
private:
	SimpleQueue<ActorChara,4>::Queue * pFront; // 0x0
	SimpleQueue<ActorChara,4>::Queue * pBack; // 0x8
	SimpleQueue<ActorChara,4>::Queue * pUseFront; // 0x10
	SimpleQueue<ActorChara,4>::Queue * pUseBack; // 0x18
	SimpleQueue<ActorChara,4>::Queue queueBody[4]; // 0x20
	unsigned long uiRestCount; // 0x60
	ActorChara body[4]; // 0x68
public:
	SimpleQueue<ActorChara,4>(const SimpleQueue<ActorChara,4> &);
	SimpleQueue<ActorChara,4>();
	~SimpleQueue<ActorChara,4>();
	void Init();
	ActorChara & Front();
	ActorChara * Pop();
	void Push(ActorChara *);
	bool IsEmpty();
	bool IsFull();
	unsigned long GetSize();
	unsigned long GetRest();
};
class SimpleQueue<ActorShot,32>
{
	struct Queue;
private:
	SimpleQueue<ActorShot,32>::Queue * pFront; // 0x0
	SimpleQueue<ActorShot,32>::Queue * pBack; // 0x8
	SimpleQueue<ActorShot,32>::Queue * pUseFront; // 0x10
	SimpleQueue<ActorShot,32>::Queue * pUseBack; // 0x18
	SimpleQueue<ActorShot,32>::Queue queueBody[32]; // 0x20
	unsigned long uiRestCount; // 0x220
	ActorShot body[32]; // 0x228
public:
	SimpleQueue<ActorShot,32>(const SimpleQueue<ActorShot,32> &);
	SimpleQueue<ActorShot,32>();
	~SimpleQueue<ActorShot,32>();
	void Init();
	ActorShot & Front();
	ActorShot * Pop();
	void Push(ActorShot *);
	bool IsEmpty();
	bool IsFull();
	unsigned long GetSize();
	unsigned long GetRest();
	SimpleQueue<ActorShot,32> & operator=(const SimpleQueue<ActorShot,32> &);
};
class SimpleQueue<ActorEffect,96>
{
	struct Queue;
private:
	SimpleQueue<ActorEffect,96>::Queue * pFront; // 0x0
	SimpleQueue<ActorEffect,96>::Queue * pBack; // 0x8
	SimpleQueue<ActorEffect,96>::Queue * pUseFront; // 0x10
	SimpleQueue<ActorEffect,96>::Queue * pUseBack; // 0x18
	SimpleQueue<ActorEffect,96>::Queue queueBody[96]; // 0x20
	unsigned long uiRestCount; // 0x620
	ActorEffect body[96]; // 0x628
public:
	SimpleQueue<ActorEffect,96>(const SimpleQueue<ActorEffect,96> &);
	SimpleQueue<ActorEffect,96>();
	~SimpleQueue<ActorEffect,96>();
	void Init();
	ActorEffect & Front();
	ActorEffect * Pop();
	void Push(ActorEffect *);
	bool IsEmpty();
	bool IsFull();
	unsigned long GetSize();
	unsigned long GetRest();
	SimpleQueue<ActorEffect,96> & operator=(const SimpleQueue<ActorEffect,96> &);
};
class SimpleQueue<ActorWeapon,96>
{
	struct Queue;
private:
	SimpleQueue<ActorWeapon,96>::Queue * pFront; // 0x0
	SimpleQueue<ActorWeapon,96>::Queue * pBack; // 0x8
	SimpleQueue<ActorWeapon,96>::Queue * pUseFront; // 0x10
	SimpleQueue<ActorWeapon,96>::Queue * pUseBack; // 0x18
	SimpleQueue<ActorWeapon,96>::Queue queueBody[96]; // 0x20
	unsigned long uiRestCount; // 0x620
	ActorWeapon body[96]; // 0x628
public:
	SimpleQueue<ActorWeapon,96>(const SimpleQueue<ActorWeapon,96> &);
	SimpleQueue<ActorWeapon,96>();
	~SimpleQueue<ActorWeapon,96>();
	void Init();
	ActorWeapon & Front();
	ActorWeapon * Pop();
	void Push(ActorWeapon *);
	bool IsEmpty();
	bool IsFull();
	unsigned long GetSize();
	unsigned long GetRest();
	SimpleQueue<ActorWeapon,96> & operator=(const SimpleQueue<ActorWeapon,96> &);
};
class SimpleQueue<ActorOption,4>
{
	struct Queue;
private:
	SimpleQueue<ActorOption,4>::Queue * pFront; // 0x0
	SimpleQueue<ActorOption,4>::Queue * pBack; // 0x8
	SimpleQueue<ActorOption,4>::Queue * pUseFront; // 0x10
	SimpleQueue<ActorOption,4>::Queue * pUseBack; // 0x18
	SimpleQueue<ActorOption,4>::Queue queueBody[4]; // 0x20
	unsigned long uiRestCount; // 0x60
	ActorOption body[4]; // 0x68
public:
	SimpleQueue<ActorOption,4>(const SimpleQueue<ActorOption,4> &);
	SimpleQueue<ActorOption,4>();
	~SimpleQueue<ActorOption,4>();
	void Init();
	ActorOption & Front();
	ActorOption * Pop();
	void Push(ActorOption *);
	bool IsEmpty();
	bool IsFull();
	unsigned long GetSize();
	unsigned long GetRest();
	SimpleQueue<ActorOption,4> & operator=(const SimpleQueue<ActorOption,4> &);
};
class std::vector<Actor *,std::allocator<Actor *> > :
	std::_Vector_alloc<std::_Vec_base_types<Actor *,std::allocator<Actor *> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	typedef Actor value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef Actor * pointer;
	typedef Actor * const_pointer;
	typedef Actor * reference;
	typedef Actor * const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<Actor *,std::allocator<Actor *> >(std::initializer_list<Actor *>, const std::allocator<Actor *> &);
	vector<Actor *,std::allocator<Actor *> >(std::vector<Actor *,std::allocator<Actor *> > &, const std::allocator<Actor *> &);
	vector<Actor *,std::allocator<Actor *> >(std::vector<Actor *,std::allocator<Actor *> > &);
	vector<Actor *,std::allocator<Actor *> >(const std::vector<Actor *,std::allocator<Actor *> > &, const std::allocator<Actor *> &);
	vector<Actor *,std::allocator<Actor *> >(const std::vector<Actor *,std::allocator<Actor *> > &);
	vector<Actor *,std::allocator<Actor *> >(unsigned long long, Actor * &, const std::allocator<Actor *> &);
	vector<Actor *,std::allocator<Actor *> >(unsigned long long, Actor * &);
	vector<Actor *,std::allocator<Actor *> >(unsigned long long);
	vector<Actor *,std::allocator<Actor *> >(const std::allocator<Actor *> &);
	vector<Actor *,std::allocator<Actor *> >();
	void _Construct_n(unsigned long long, Actor * *);
	std::vector<Actor *,std::allocator<Actor *> > & operator=(const std::vector<Actor *,std::allocator<Actor *> > &);
	std::vector<Actor *,std::allocator<Actor *> > & operator=(std::initializer_list<Actor *>);
	std::vector<Actor *,std::allocator<Actor *> > & operator=(std::vector<Actor *,std::allocator<Actor *> > &);
	void _Assign_rv(std::vector<Actor *,std::allocator<Actor *> > &);
	void _Assign_rv(std::vector<Actor *,std::allocator<Actor *> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<Actor *,std::allocator<Actor *> > &, std::integral_constant<bool,1>);
	void push_back(Actor * &);
	void push_back(Actor * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Actor *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Actor *> > >, unsigned long long, Actor * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Actor *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Actor *> > >, Actor * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Actor *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Actor *> > >, std::initializer_list<Actor *>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Actor *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Actor *> > >, Actor * &);
	void assign(unsigned long long, Actor * &);
	void assign(std::initializer_list<Actor *>);
	~vector<Actor *,std::allocator<Actor *> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Actor *> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Actor *> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Actor *> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Actor *> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Actor *> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Actor *> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Actor *> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Actor *> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Actor *> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Actor *> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Actor *> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Actor *> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Actor *> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Actor *> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, Actor * &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<Actor *> get_allocator();
	Actor * & at(unsigned long long);
	Actor * & at(unsigned long long);
	Actor * & operator[](unsigned long long);
	Actor * & operator[](unsigned long long);
	Actor * * data();
	Actor * * data();
	Actor * & front();
	Actor * & front();
	Actor * & back();
	Actor * & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Actor *> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Actor *> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Actor *> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Actor *> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Actor *> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<Actor *,std::allocator<Actor *> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(Actor * *, Actor * *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(Actor * *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Actor *> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Actor *> > >, unsigned long long, Actor * &);
	Actor * * _Ufill(Actor * *, unsigned long long, Actor * *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(Actor * *, Actor * *);
};
class std::bitset<5>
{
	typedef unsigned long _Ty;
	class reference;
public:
	static void _Validate(unsigned long long);
	bool _Subscript(unsigned long long);
	std::bitset<5>::reference operator[](unsigned long long);
	bool operator[](unsigned long long);
	bitset<5>(unsigned long long);
	bitset<5>();
	static const bool _Need_mask; // 0xFFFFFFFFFFFFFFFF
	static const unsigned long long _Mask; // 0xFFFFFFFFFFFFFFFF
	std::bitset<5> & operator&=(const std::bitset<5> &);
	std::bitset<5> & operator|=(const std::bitset<5> &);
	std::bitset<5> & operator^=(const std::bitset<5> &);
	std::bitset<5> & operator<<=(unsigned long long);
	std::bitset<5> & operator>>=(unsigned long long);
	std::bitset<5> & set(unsigned long long, bool);
	std::bitset<5> & set();
	std::bitset<5> & reset(unsigned long long);
	std::bitset<5> & reset();
	operator~();
	std::bitset<5> & flip(unsigned long long);
	std::bitset<5> & flip();
	unsigned long to_ulong();
	unsigned long long to_ullong();
	unsigned long long count();
	unsigned long long size();
	unsigned long long hash();
	bool operator==(const std::bitset<5> &);
	bool operator!=(const std::bitset<5> &);
	bool test(unsigned long long);
	bool any();
	bool none();
	bool all();
	std::bitset<5> operator<<(unsigned long long);
	std::bitset<5> operator>>(unsigned long long);
	unsigned long _Getword(unsigned long long);
	enum <unnamed-enum-_Bitsperword> : long long
	{
		_Bitsperword = 32,
		_Words = 0,
	};
private:
	void _Tidy(unsigned long);
	void _Trim();
	void _Trim_if(std::integral_constant<bool,0>);
	void _Trim_if(std::integral_constant<bool,1>);
	void _Xinv();
	void _Xoflo();
	void _Xran();
	unsigned long _Array[1]; // 0x0
};
ActionSystem::ActionSystem(); // 0x1400BBC50
ActionSystem::~ActionSystem(); // 0x1400BBED0
class std::function<void __cdecl(Actor &)> :
	std::_Func_class<void,Actor &>
{
	class _Mybase;
	class _Myt;
public:
	function<void __cdecl(Actor &)>(std::function<void __cdecl(Actor &)> &);
	function<void __cdecl(Actor &)>(const std::function<void __cdecl(Actor &)> &);
	function<void __cdecl(Actor &)>(void *);
	function<void __cdecl(Actor &)>();
	~function<void __cdecl(Actor &)>();
	std::function<void __cdecl(Actor &)> & operator=(void *);
	std::function<void __cdecl(Actor &)> & operator=(std::function<void __cdecl(Actor &)> &);
	std::function<void __cdecl(Actor &)> & operator=(const std::function<void __cdecl(Actor &)> &);
	void swap(std::function<void __cdecl(Actor &)> &);
	bool operator bool();
	const type_info & target_type();
};
void ActionSystem::CameraPrevCalc(); // 0x140173BE0
void ActionSystem::CameraLateCalc(); // 0x1401A0900
OGLVec3 ActionSystem::GetCameraPos(); // 0x140146A00
OGLVec3 ActionSystem::GetCameraLook(); // 0x140146A80
struct ActionSystem::PhotoModeData
{
	bool bPhotoMode; // 0x0
	bool bInfoDraw; // 0x1
	long iActNo[4]; // 0x4
	long iCAngle[4]; // 0x14
	long iTarget; // 0x24
	long iCursor; // 0x28
};