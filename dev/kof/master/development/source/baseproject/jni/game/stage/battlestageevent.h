#pragma once

class BSDataEvent :
	TknDataEvent
{
	struct TimeTable;
private:
	BSDataObject * m_pObject; // 0x80
	BSDataEventModelAnimation * * m_pModelAnimations; // 0x88
	BSDataEventEffectAnimation * * m_pEffectAnimations; // 0x90
	BSDataEventBillboardAnimation * * m_pBillboardAnimations; // 0x98
	BSDataEventSound * * m_pSounds; // 0xA0
	BSDataEventTranslation * * m_pTranslations; // 0xA8
	BSDataEventScript * * m_pScripts; // 0xB0
	BSDataEvent::TimeTable * m_pAnimationEventTable; // 0xB8
	BSDataEvent::TimeTable * m_pTranslationEventTable; // 0xC0
	BSDataEvent * m_pBindEvent; // 0xC8
public:
	BSDataEvent(BSDataEvent &);
	BSDataEvent(TknDataEvent &);
	virtual ~BSDataEvent();
	void setObject(BSDataObject *);
	BSDataObject * getObject();
	void setAnimation(long, BSDataEventSound *);
	void setAnimation(long, BSDataEventBillboardAnimation *);
	void setAnimation(long, BSDataEventEffectAnimation *);
	void setAnimation(long, BSDataEventModelAnimation *);
	BSDataEventModelAnimation * getModelAnimation(long);
	BSDataEventEffectAnimation * getEffectAnimation(long);
	BSDataEventBillboardAnimation * getBillboardAnimation(long);
	BSDataEventSound * getSoundAction(long);
	void setTranslation(long, BSDataEventTranslation *);
	BSDataEventTranslation * getTranslation(long);
	void setScript(long, BSDataEventScript *);
	BSDataEventScript * getScript(long);
	void setBindEvent(BSDataEvent *);
	BSDataEvent * getBindEvent();
	bool getAnimationStateByFrame(float, long, long *, float *, OGLMatrix *);
	void changeActiveFlag(bool);
private:
	OGLVec3 getTransPosition(long, float);
	OGLVec3 getTransPositionByRate(long, float);
	OGLVec3 getTransRotate(long, OGLVec3 &, float);
	OGLVec3 getTransScale(long, float);
public:
	static BSDataEvent * Cast(TknData *);
};
class BSDataEventModelAnimation :
	TknDataEventModelAnimation
{
private:
	BSDataMotion * m_pMotion; // 0x48
	BSDataUVAnimation * m_pUvAnimation; // 0x50
public:
	BSDataEventModelAnimation(BSDataEventModelAnimation &);
	BSDataEventModelAnimation(TknDataEventModelAnimation &);
	virtual ~BSDataEventModelAnimation();
	void setMotion(BSDataMotion *);
	BSDataMotion * getMotion();
	void setUVAnimation(BSDataUVAnimation *);
	BSDataUVAnimation * getUVAnimation();
	bool isResourceEnabled();
	static BSDataEventModelAnimation * Cast(TknData *);
};
class BSDataEventEffectAnimation :
	TknDataEventEffectAnimation
{
private:
	BSDataEffect * m_pEffect; // 0x30
public:
	BSDataEventEffectAnimation(BSDataEventEffectAnimation &);
	BSDataEventEffectAnimation(TknDataEventEffectAnimation &);
	virtual ~BSDataEventEffectAnimation();
	void setEffect(BSDataEffect *);
	BSDataEffect * getEffect();
	bool isResourceEnabled();
	static BSDataEventEffectAnimation * Cast(TknData *);
};
class BSDataEventSound :
	TknDataEventSound
{
public:
	BSDataEventSound(BSDataEventSound &);
	BSDataEventSound(TknDataEventSound &);
	virtual ~BSDataEventSound();
	static BSDataEventSound * Cast(TknData *);
};
class BattleStageSound :
	protected BattleEventHandler::Listener
{
private:
	STAGE_ID m_playingStageId; // 0x8
public:
	BattleStageSound(const BattleStageSound &);
	BattleStageSound();
	~BattleStageSound();
	void changePlayingStage(STAGE_ID);
	void play3DSoundByName(const char *, extension::SoundObject *, bool);
	bool isEndlessLoop(const char *);
	void OnEventEffectStart(const BattleStageEvent *);
private:
	void playSoundByName(const char *);
	virtual void OnEventRoundStartGO(STAGE_ID, long, const BattleEventHandler::Listener::CharacterStatus *);
	virtual void OnEventRoundEndKO(STAGE_ID, BattleEventHandler::Listener::BattleResult, const BattleEventHandler::Listener::CharacterStatus *);
	virtual void OnEventBattleEnd(STAGE_ID, const BattleEventHandler::Listener::CharacterStatus *);
public:
	BattleStageSound & operator=(const BattleStageSound &);
};
class BattleStageEventUVAnimation
{
	struct Params;
protected:
	bool m_bActive; // 0x8
	bool m_bEnableAnimations; // 0x9
	BattleStageEventUVAnimation::Params * m_pParams; // 0x10
	long m_paramCount; // 0x18
	bool m_bModelUVChanged; // 0x1C
public:
	BattleStageEventUVAnimation(const BattleStageEventUVAnimation &);
	BattleStageEventUVAnimation();
	~BattleStageEventUVAnimation();
	void setup(BattleStageEvent &);
	void update(BattleStageEvent &, float);
	void animation(BattleStageEvent &);
private:
	void release();
public:
	BattleStageEventUVAnimation & operator=(const BattleStageEventUVAnimation &);
};
class SAFEventLookAtCharacter
{
private:
	bool m_bEnable; // 0x8
public:
	SAFEventLookAtCharacter(const SAFEventLookAtCharacter &);
	SAFEventLookAtCharacter();
	~SAFEventLookAtCharacter();
	void release();
	bool isEnabled();
	void setup(BattleStageEvent &);
	void update(BattleStageEvent &);
	void animation(BattleStageEvent &);
	SAFEventLookAtCharacter & operator=(const SAFEventLookAtCharacter &);
};
class extension::SoundObject
{
public:
	SoundObject(extension::SoundObject &);
	SoundObject(const extension::SoundObject &);
	SoundObject();
	void setPosition(const OGLVec3 &);
	void setPan3D(float);
	void setDistanceAttenuationBaseLength(float);
	void setPanPositionFunc(std::function<float __cdecl(void)>);
private:
	extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector> m_runtimeEffector; // 0x0
public:
	~SoundObject();
	extension::SoundObject & operator=(extension::SoundObject &);
	extension::SoundObject & operator=(const extension::SoundObject &);
};
class BattleStageEvent :
	protected BattleStageShader
{
	enum ContentsType
	{
		CONTENTS_TYPE_NONE = 0,
		CONTENTS_TYPE_MODEL = 1,
		CONTENTS_TYPE_EFFECT = 2,
		CONTENTS_TYPE_BILLBOARD = 3,
		CONTENTS_TYPE_SOUND = 4,
	};
	struct GroupObject;
	enum CreateStateBits
	{
		CREATESTATEBITS_NONE = 0,
		CREATESTATEBITS_MODEL = 1,
		CREATESTATEBITS_FIGURE = 2,
	};
private:
	long m_timestamp; // 0x28
	bool m_bActive; // 0x2C
	bool m_bVisible; // 0x2D
	long m_createStateBits; // 0x30
	const BattleStageResourceContainer * m_pResourceContainer; // 0x38
	BattleStageSound * m_pSound; // 0x40
	BSDataObject * m_pObject; // 0x48
	BattleStageEvent::ContentsType m_contentsType; // 0x50
	OGLModel * m_pOGLModel; // 0x58
	bool m_bStageModel; // 0x60
	OGLModel * m_pBillboardModel; // 0x68
	EffectDataListManager * * m_pResourceEffects; // 0x70
	long m_resourceEffectCount; // 0x78
	long m_triggerPriority; // 0x7C
	BSDataEvent * m_pEvent; // 0x80
	float m_frame; // 0x88
	float m_motionChangeFrame; // 0x8C
	OGLMatrix m_originalTransMatrix; // 0x90
	OGLMatrix m_transMatrix; // 0xD0
	Effect * m_pEffect; // 0x110
	long m_useEffectIndex; // 0x118
	bool m_bEffectActived; // 0x11C
	bool m_bPermissionDrawCall; // 0x11D
	long m_selectAnimationIndex; // 0x120
	long m_selectAnimationIndexBefore; // 0x124
	long m_selectTranslationIndex; // 0x128
	long m_selectTranslationIndexBefore; // 0x12C
	float m_animationFrame; // 0x130
	float m_animationChangeFrame; // 0x134
	BSDataEventModelAnimation * m_pPlayingModelAnimation; // 0x138
	BSDataEventEffectAnimation * m_pPlayingEffectAnimation; // 0x140
	bool m_bUVAnimation; // 0x148
	BSDataEventModelAnimation * m_pModelAnimationBlend; // 0x150
	bool m_bUseGroup; // 0x158
	float m_groupAnimationFrame; // 0x15C
	BattleStageEvent::GroupObject * m_pGroupObjects; // 0x160
	long m_groupObjectCount; // 0x168
	OGLVec3 m_groupDestinationPos; // 0x16C
	bool m_bUseCulling; // 0x178
	CollisionModel m_cullingModel; // 0x180
	long m_cullingBindBoneIndex; // 0x228
	bool m_bCullingVisible; // 0x22C
	BattleStageEvent * m_pBindEvent; // 0x230
	long m_runScriptUID; // 0x238
	long m_runScriptIndex; // 0x23C
	float m_scriptColorR; // 0x240
	float m_scriptColorG; // 0x244
	float m_scriptColorB; // 0x248
	struct ScriptParams;
	BattleStageEvent::ScriptParams m_scriptParams; // 0x250
	struct RoundStartParams;
	BattleStageEvent::RoundStartParams m_roundStartParams; // 0x258
	BattleStageEventUVAnimation * m_pUVAnimation; // 0x260
	SAFEventLookAtCharacter * m_pAFLookAtCharacter; // 0x268
public:
	BattleStageEvent(const BattleStageEvent &);
	BattleStageEvent(const BattleStageResourceContainer *, BattleStageSound *, BSDataObject *);
	virtual ~BattleStageEvent();
	void dead();
	bool isDead();
	bool setupModel(OGLModel *, bool);
	bool setupEffect(EffectDataListManager * *, long);
	bool setupBillboard();
	bool setupSound();
	bool isStageModel();
	long getEventUID();
	long getObjectUID();
	BattleStageEvent::ContentsType getContentsType();
	bool isVisible();
	long getTriggerPriority();
	OGLModel * getOGLModel();
	BSDataEvent * getEvent();
	BSDataObject * getObject();
	float getAnimationFrame();
	OGLMatrix getTransMatrix();
	OGLMatrix getBoneTransMatrix(const char *);
	OGLMatrix getBoneTransMatrix(long);
	bool changeEvent(BSDataEvent *, long, bool, bool);
	void setOriginalMatrix(OGLMatrix &);
	void update(long, float);
	void cullingTest(CollisionModel &);
	void clearCullingParams();
	void setBindEvent(BattleStageEvent *);
	BattleStageEvent * getBindEvent();
	bool isCullingVisible();
	void draw();
	void drawDirectRendring();
	float getScriptColorR();
	float getScriptColorG();
	float getScriptColorB();
	bool isScriptChangeColor();
	void roundStart();
private:
	void clear();
	void clearActionParams();
	void releaseOGLModel();
	bool isDrawProcess();
	bool updateModelAnimation(float, bool);
	void setupRenderParams();
	void renderModel();
	void directRenderModel();
	bool updateEffectAnimation(float, bool);
	void renderEffectAnimation();
	void setupBillboardAnimation(BSDataEvent *, long);
	bool updateBillboardAnimation(float, bool);
	void renderBillboardAnimation();
	bool updateSoundAction(float, bool);
	void renderSoundAction();
	void clearCulling();
	void initCulling();
	void initGroupObjects();
	void setupStartParamsGroupObjects();
	void updateGroupObjects(float, OGLVec3, bool);
	void runScript(float);
	void setFuncUVAnimation(BattleStageEventUVAnimation *);
	void setFuncLookAtCharacter(SAFEventLookAtCharacter *);
public:
	BattleStageEvent & operator=(const BattleStageEvent &);
};
struct BattleStageEvent::GroupObject
{
	long id; // 0x0
	OGLVec3 pos; // 0x4
	OGLVec3 speed; // 0x10
	float moveSpeed; // 0x1C
	float distance; // 0x20
	long hitCount; // 0x24
	float startAnimationFrame; // 0x28
	OGLModel * pOGLModel; // 0x30
	GroupObject(BattleStageEvent::GroupObject &);
	GroupObject(const BattleStageEvent::GroupObject &);
	GroupObject();
};
struct BattleStageEvent::ScriptParams
{
	extension::SoundObject * m_pSoundOptionParams; // 0x0
	ScriptParams();
};
struct BattleStageEvent::RoundStartParams
{
	const char * pSoundName; // 0x0
	RoundStartParams();
};