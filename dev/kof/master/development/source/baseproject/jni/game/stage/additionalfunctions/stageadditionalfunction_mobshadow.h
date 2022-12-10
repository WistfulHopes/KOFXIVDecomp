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
class BSDataObject :
	TknDataObject
{
private:
	BSDataModel * m_pModel; // 0xD8
public:
	BSDataObject(BSDataObject &);
	BSDataObject(TknDataObject &);
	virtual ~BSDataObject();
	void setModel(BSDataModel *);
	BSDataModel * getModel();
	static BSDataObject * Cast(TknData *);
};
class StageAdditionalFunction_MobShadow
{
	struct ShadowParams;
	struct ShadowModelParams;
private:
	bool m_bEnable; // 0x8
	StageAdditionalFunction_MobShadow::ShadowModelParams * m_pShadowModels; // 0x10
	long m_shadowModelCount; // 0x18
public:
	StageAdditionalFunction_MobShadow(const StageAdditionalFunction_MobShadow &);
	StageAdditionalFunction_MobShadow();
	~StageAdditionalFunction_MobShadow();
	void release();
	bool isEnabled();
	void setup(BattleStage *);
	void update(BattleStage *);
	void draw(BattleStage *);
	long getOGLModelCount();
	OGLModel * getOGLModel(long);
private:
	void updateShadowTransform();
	void updateVertex();
public:
	StageAdditionalFunction_MobShadow & operator=(const StageAdditionalFunction_MobShadow &);
};
struct StageAdditionalFunction_MobShadow::ShadowParams
{
	OGLModel * pOGLModelBindTarget; // 0x0
	long bindBoneNo; // 0x8
	long bindBoneNoSub; // 0xC
	BSDataObject * pDataObject; // 0x10
	OGLMatrix transMatrix; // 0x18
	float length; // 0x58
	float blendCount; // 0x5C
	OGLVec3 blendDirection; // 0x60
	OGLVec3 blendDirectionSub; // 0x6C
	ShadowParams(StageAdditionalFunction_MobShadow::ShadowParams &);
	ShadowParams(const StageAdditionalFunction_MobShadow::ShadowParams &);
	ShadowParams();
};
struct StageAdditionalFunction_MobShadow::ShadowModelParams
{
	long shadowModelUID; // 0x0
	OGLModel * pOGLModelShadow; // 0x8
	long originalVertexCount; // 0x10
	StageAdditionalFunction_MobShadow::ShadowParams * pShadows; // 0x18
	long shadowCount; // 0x20
};