#pragma once

class ActorEffect :
	Actor
{
protected:
	void _addOffset(OGLVec3 &, const Actor *);
	OGLVec3 GetEffectSetPos(bool);
	OGLMatrix GetEffectBindMatrix();
public:
	ActorEffect(const ActorEffect &);
	ActorEffect();
	virtual ~ActorEffect();
	virtual void CreateInit();
	virtual void Dispose();
	void ParamInit(const CharaDataUnify *, const CharaActionData::Effect::Type::Set &, Actor *, ActorCharaBase *, ActorCharaBase *, long);
	virtual bool IsDirectionInfluenceZ();
	virtual void PrevDataSet();
	virtual void ActionParamInit();
	virtual void PreUpdate();
	virtual void BecomUpdate();
	virtual void MainUpdate();
	virtual void LateUpdate();
	virtual void Draw();
	virtual void UpdatePostureCalc(const CharaActionData::BaseAnime &, bool);
	virtual void UpdatePosture();
	virtual void UpdatePosition();
	virtual void SyncPosture();
	virtual void ActionFlagCheck();
	virtual void ActionChanged();
	virtual void StateChanged();
	virtual Actor::ACTOR_TYPE GetActorType();
	virtual bool IsBlackStop();
	virtual void CancelBlackout();
	virtual OGLVec3 GetCenterPosition();
	virtual OGLVec3 GetBindCenterPosition();
	virtual long GetFounderPlayerID();
	virtual bool IsMotionCameraInvisibleActor();
	virtual bool IsInvisible();
	virtual bool IsModelDraw();
	virtual void SetEffectCreateData(const CharaActionData::Effect::Type::Set &);
	virtual void SetEffectAnime(const CharaActionData::EffectAnime &);
	void RequestEffectControl(const CharaActionData::Effect::Type::Control &);
	struct EFFECT_STATUS;
	bool IsDeadEffect();
	void ImmediateKillEffect();
	void KillEffect();
	Effect * pEffect; // 0x328
	ActorCharaBase * pFounder; // 0x330
	ActorCharaBase * pOwner; // 0x338
	OGLMatrix mWorld; // 0x340
	CharaActionData::EffectAnime effectAnime; // 0x380
	CharaActionData::EffectAnime effectAnimePrev; // 0x390
	CharaActionData::Effect::Type::Set effectData; // 0x3A0
	struct ControlData;
	ActorEffect::ControlData ctrlData; // 0x3B8
	ActorEffect::ControlData ctrlReqData; // 0x3C4
	bool bCleanupEffect; // 0x3D0
	bool bParticleReset; // 0x3D1
	bool bPositionInit; // 0x3D2
	bool bParentBind; // 0x3D3
	long iParentInitActNo; // 0x3D4
	bool bParentInitActDataChanged; // 0x3D8
	bool bBlackoutInvalid; // 0x3D9
	float fEffectAlpha; // 0x3DC
	enum EFFECT_TYPE
	{
		NORMAL = 0,
		DAMAGE = 1,
		AKEBONO = 2,
	};
	ActorEffect::EFFECT_TYPE effectType; // 0x3E0
	ActorEffect::EFFECT_TYPE GetEffectType();
	void SetEffectType(ActorEffect::EFFECT_TYPE);
	long iDamageEffectAttr; // 0x3E4
	Fix32 xDelayCreateCount; // 0x3E8
	void SetDelayCreateCount(long);
	bool IsDelayCreate();
	bool IsAlwaysEffect();
	long iResultSubType; // 0x3EC
	static ActorEffect * CreateActorEffect(const CharaActionData::Effect::Type::Set &, Actor *, ActorCharaBase *, ActorCharaBase *, long);
	static ActorEffect * CreateActorEffectSingle(const CharaActionData::Effect::Type::Set &, Actor *, long);
	static ActorEffect * CreateActorEffectAkebono(long);
	ActorEffect & operator=(const ActorEffect &);
};
ActorEffect::ActorEffect(); // 0x1400BB730
bool ActorEffect::IsDirectionInfluenceZ(); // 0x1400BB7A0
Actor::ACTOR_TYPE ActorEffect::GetActorType(); // 0x1400482A0
struct ActorEffect::EFFECT_STATUS
{
	enum ID
	{
		INIT = 0,
		MAIN = 1,
		ERASE = 2,
		DIE = 3,
	};
};
bool ActorEffect::IsDeadEffect(); // 0x1400BB7B0
struct ActorEffect::ControlData
{
	bool bSetData; // 0x0
	std::bitset<9> bsFuncFlag; // 0x4
	long iOptionFlag; // 0x8
	ControlData();
};
class std::bitset<9>
{
	typedef unsigned long _Ty;
	class reference;
public:
	static void _Validate(unsigned long long);
	bool _Subscript(unsigned long long);
	std::bitset<9>::reference operator[](unsigned long long);
	bool operator[](unsigned long long);
	bitset<9>(unsigned long long);
	bitset<9>();
	static const bool _Need_mask; // 0xFFFFFFFFFFFFFFFF
	static const unsigned long long _Mask; // 0xFFFFFFFFFFFFFFFF
	std::bitset<9> & operator&=(const std::bitset<9> &);
	std::bitset<9> & operator|=(const std::bitset<9> &);
	std::bitset<9> & operator^=(const std::bitset<9> &);
	std::bitset<9> & operator<<=(unsigned long long);
	std::bitset<9> & operator>>=(unsigned long long);
	std::bitset<9> & set(unsigned long long, bool);
	std::bitset<9> & set();
	std::bitset<9> & reset(unsigned long long);
	std::bitset<9> & reset();
	operator~();
	std::bitset<9> & flip(unsigned long long);
	std::bitset<9> & flip();
	unsigned long to_ulong();
	unsigned long long to_ullong();
	unsigned long long count();
	unsigned long long size();
	unsigned long long hash();
	bool operator==(const std::bitset<9> &);
	bool operator!=(const std::bitset<9> &);
	bool test(unsigned long long);
	bool any();
	bool none();
	bool all();
	std::bitset<9> operator<<(unsigned long long);
	std::bitset<9> operator>>(unsigned long long);
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
ActorEffect::EFFECT_TYPE ActorEffect::GetEffectType(); // 0x1400BB7C0
void ActorEffect::SetEffectType(ActorEffect::EFFECT_TYPE type); // 0x1400BB7D0
void ActorEffect::SetDelayCreateCount(long frame); // 0x1400BB7E0
bool ActorEffect::IsDelayCreate(); // 0x1400BB7F0
bool ActorEffect::IsAlwaysEffect(); // 0x1400BB800