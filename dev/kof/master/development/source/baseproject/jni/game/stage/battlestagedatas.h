#pragma once

class BSDataScene :
	TknDataScene
{
private:
	BSDataEvent * * m_pGlobalEvent; // 0x40
	BSDataEvent * * m_pLocalEvent; // 0x48
public:
	BSDataScene(BSDataScene &);
	BSDataScene(TknDataScene &);
	virtual ~BSDataScene();
	void setGlobalEvent(long, BSDataEvent *);
	void setLocalEvent(long, BSDataEvent *);
	BSDataEvent * getGlobalEvent(long);
	BSDataEvent * getLocalEvent(long);
	static BSDataScene * Cast(TknData *);
};
class BSDataSceneTrigger :
	TknDataEventConditions
{
private:
	BSDataScene * m_pScene; // 0x68
public:
	BSDataSceneTrigger(BSDataSceneTrigger &);
	BSDataSceneTrigger(TknDataEventConditions &);
	virtual ~BSDataSceneTrigger();
	void setScene(BSDataScene *);
	BSDataScene * getScene();
	static BSDataSceneTrigger * Cast(TknData *);
};
class BSDataModel :
	TknDataModel
{
	struct AnotherSettingTexture;
private:
	OGLModel * m_pOGLModel; // 0x78
	BSDataUVAnimation * * m_pUVAnimations; // 0x80
	BSDataModel::AnotherSettingTexture * m_pReplaceTextures; // 0x88
	long m_replaceTextureCount; // 0x90
	bool m_bUse; // 0x94
	bool m_bUseAnimation; // 0x95
public:
	BSDataModel(BSDataModel &);
	BSDataModel(TknDataModel &);
	virtual ~BSDataModel();
	void setOGLModel(OGLModel *);
	OGLModel * getOGLModel();
	bool isOGLModelEnabled();
	void setUVAnimation(long, BSDataUVAnimation *);
	BSDataUVAnimation * getUVAnimation(long);
	void addReplaceTexture(OGLTexture *, long, long);
	void use();
	bool isUse();
	void useAnimation();
	bool isUseAnimation();
	static BSDataModel * Cast(TknData *);
};
struct BSDataModel::AnotherSettingTexture
{
	OGLTexture * pOglTexture; // 0x0
	long materialIndex; // 0x8
	long materialType; // 0xC
};
class BSDataUVAnimation :
	TknDataUVAnimation
{
public:
	BSDataUVAnimation(BSDataUVAnimation &);
	BSDataUVAnimation(TknDataUVAnimation &);
	virtual ~BSDataUVAnimation();
	long getAnimationPanelIndexByFrame(long, float);
	static BSDataUVAnimation * Cast(TknData *);
};
class BSDataMotion :
	TknDataMotion
{
private:
	OGLMotion * m_pMotion; // 0x30
	long m_motionNo; // 0x38
public:
	BSDataMotion(BSDataMotion &);
	BSDataMotion(TknDataMotion &);
	virtual ~BSDataMotion();
	void setOglMotion(OGLMotion *, long);
	OGLMotion * getMotion();
	long getPlayMotionNo();
	bool isMotionEnabled();
	static BSDataMotion * Cast(TknData *);
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
class BSDataEventBillboardAnimation :
	TknDataEventBillboardAnimation
{
private:
	BSDataBillboard * m_pBillboard; // 0x48
public:
	BSDataEventBillboardAnimation(BSDataEventBillboardAnimation &);
	BSDataEventBillboardAnimation(TknDataEventBillboardAnimation &);
	virtual ~BSDataEventBillboardAnimation();
	void setBillboard(BSDataBillboard *);
	BSDataBillboard * getBillboard();
	bool isResourceEnabled();
	static BSDataEventBillboardAnimation * Cast(TknData *);
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
class BSDataEventTranslation :
	TknDataEventTranslation
{
public:
	BSDataEventTranslation(BSDataEventTranslation &);
	BSDataEventTranslation(TknDataEventTranslation &);
	virtual ~BSDataEventTranslation();
	static BSDataEventTranslation * Cast(TknData *);
};
class BSDataEventScript :
	TknDataEventScript
{
public:
	BSDataEventScript(BSDataEventScript &);
	BSDataEventScript(TknDataEventScript &);
	virtual ~BSDataEventScript();
	static BSDataEventScript * Cast(TknData *);
};
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
struct BSDataEvent::TimeTable
{
	long startFrame; // 0x0
	long endFrame; // 0x4
	long eventIndex; // 0x8
};
class BSDataLight :
	TknDataLight
{
public:
	BSDataLight(BSDataLight &);
	BSDataLight(TknDataLight &);
	virtual ~BSDataLight();
	static BSDataLight * Cast(TknData *);
};
class BSDataEffect :
	TknDataEffect
{
public:
	BSDataEffect(BSDataEffect &);
	BSDataEffect(TknDataEffect &);
	virtual ~BSDataEffect();
	static BSDataEffect * Cast(TknData *);
};
class BSDataBillboard :
	TknDataBillboard
{
public:
	BSDataBillboard(BSDataBillboard &);
	BSDataBillboard(TknDataBillboard &);
	virtual ~BSDataBillboard();
	void setModel(BSDataModel *);
	BSDataModel * getModel();
private:
	BSDataModel * m_pModel; // 0x70
public:
	static BSDataBillboard * Cast(TknData *);
};