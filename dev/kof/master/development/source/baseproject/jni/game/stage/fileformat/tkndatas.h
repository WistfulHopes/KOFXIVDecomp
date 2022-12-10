#pragma once

class OGLInputStream
{
private:
	unsigned char * m_pucData; // 0x0
	unsigned long m_uiPoint; // 0x8
	unsigned long m_uiSize; // 0xC
	unsigned long m_uiVersion; // 0x10
public:
	OGLInputStream(unsigned char *, unsigned long);
	OGLInputStream();
	~OGLInputStream();
	void open(unsigned char *, unsigned long);
	void setVersion(unsigned long);
	void close();
	char getChar();
	short getShort();
	long getInt();
	long getInt24();
	float getFloat();
	void forwardInt24();
	void getData(void *, long);
	unsigned long getPointer();
	void seek(long, long);
	void seekInt(long, long);
};
class CollisionModel
{
	enum MODELTYPE
	{
		MODELTYPE_NONE = 0,
		MODELTYPE_CUBE = 1,
		MODELTYPE_SPHERE = 2,
		MODELTYPE_BOARD = 3,
		MODELTYPE_FRUSTUM = 4,
	};
	enum CALCULATIONTYPE
	{
		CALCULATIONTYPE_DEFAULT = 0,
		CALCULATIONTYPE_EASY = 1,
		CALCULATIONTYPE_NOEMAL = 2,
	};
	struct CubeModelParams;
	struct SphereModelParams;
	struct BoardModelParams;
private:
	CollisionModel::MODELTYPE m_modelType; // 0x0
	CollisionModel::CubeModelParams * m_pCubeParams; // 0x8
	CollisionModel::SphereModelParams * m_pSphereParams; // 0x8
	CollisionModel::BoardModelParams * m_pBoardParams; // 0x8
	OGLMatrix m_transform; // 0x10
	long m_reserveRefreshParamsBits; // 0x50
	bool m_bRefreshTransVertex; // 0x54
	OGLVec3 * m_pPoints; // 0x58
	long m_pointCount; // 0x60
	OGLVec3 * m_pTransVertex; // 0x68
	OGLVec3 * m_pFaceCenters; // 0x70
	OGLVec3 * m_pFaceNormals; // 0x78
	OGLVec3 m_obbCenter; // 0x80
	OGLVec3 * m_pObbVectors; // 0x90
	OGLVec3 m_obbDistance; // 0x98
public:
	CollisionModel(const CollisionModel &);
	CollisionModel(const CollisionModel *);
	CollisionModel();
	~CollisionModel();
	void release();
	void copy(const CollisionModel *);
	bool isActive();
	CollisionModel::MODELTYPE getModelType();
	void setupCubeModel(const CollisionModel::CubeModelParams &);
	void setupSphereModel(const CollisionModel::SphereModelParams &);
	void setupBoardModel(const CollisionModel::BoardModelParams &);
	void setupFrustumModel(const OGLMatrix &, const OGLMatrix &);
	void transform(const OGLMatrix &);
	void transform(const OGLVec3 &, const OGLVec3 &);
	bool collisionTest(CollisionModel &);
	const CollisionModel::CubeModelParams * getCubeParams();
	const CollisionModel::SphereModelParams * getSphereParams();
	const CollisionModel::BoardModelParams * getBoardParams();
	long getVertexCount();
	const OGLVec3 * getTransVertex();
private:
	void clear();
	void initialize(CollisionModel::MODELTYPE, long);
	void setCullingParams();
	void setObbParams();
	void setCullingParams_CubeModel();
	void setObbParams_CubeModel();
	const OGLVec3 * getTransVertex_CubeModel();
	void setCullingParams_SphereModel();
	void setObbParams_SphereModel();
	const OGLVec3 * getTransVertex_SphereModel();
	void setCullingParams_BoardModel();
	void setObbParams_BoardModel();
	const OGLVec3 * getTransVertex_BoardModel();
	void setCullingParams_FrustumModel();
	void setObbParams_FrustumModel();
	const OGLVec3 * getTransVertex_FrustumModel();
	bool collisionTest_FrustumVsCube(CollisionModel &, CollisionModel &);
	bool collisionTest_CubeLineHitTest(CollisionModel &, CollisionModel &, long);
	bool collisionTest_CubeVsCube(CollisionModel &, CollisionModel &);
};
class TknDataScene :
	TknData
{
protected:
	long m_globalEventCount; // 0x20
	long * m_pGlobalEventUIDs; // 0x28
	long m_localEventCount; // 0x30
	long * m_pLocalEventUIDs; // 0x38
	TknDataScene(TknDataScene &);
	TknDataScene(long, long);
private:
	TknDataScene & operator=(const TknDataScene &);
public:
	virtual ~TknDataScene();
	long getGlobalEventCount();
	long getGlobalEventUID(long);
	long getLocalEventCount();
	long getLocalEventUID(long);
	static TknDataScene * create(OGLInputStream &, long);
};
class TknDataEventConditions :
	TknData
{
	struct ValueOperationType;
	struct ValueCheckType;
	struct CheckParams;
protected:
	long m_sceneUID; // 0x20
	TknData::SceneTrigger1 m_triggerEvent; // 0x24
	TknData::SceneTrigger2 m_triggerCondition; // 0x28
	bool m_bNeutral; // 0x2C
	long * m_pSkipCallCharacterIDs; // 0x30
	long * m_pSkipPairCharacterIDs; // 0x38
	long m_skipCallCharacterIDCount; // 0x40
	long m_skipPairCharacterIDCount; // 0x44
	float m_permitAreaSX; // 0x48
	float m_permitAreaEX; // 0x4C
	TknDataEventConditions::ValueOperationType::Type m_valueOperationType; // 0x50
	long m_valueOperatinParam1; // 0x54
	long m_valueOperatinParam2; // 0x58
	TknDataEventConditions::ValueCheckType::Type m_valueCheckType; // 0x5C
	long m_valueCheckNum; // 0x60
	float m_actionRate; // 0x64
	TknDataEventConditions(TknDataEventConditions &);
	TknDataEventConditions(long, long);
private:
	TknDataEventConditions & operator=(const TknDataEventConditions &);
public:
	virtual ~TknDataEventConditions();
	long getSceneUID();
	TknData::SceneTrigger1 getTrigger1();
	TknData::SceneTrigger2 getTrigger2();
	float getPermitAreaStart();
	float getPermitAreaEnd();
	bool checkCondition(TknData::SceneTrigger1, TknData::SceneTrigger2, const TknDataEventConditions::CheckParams *);
	static TknDataEventConditions * create(OGLInputStream &, long);
	static TknData::SceneTrigger2 timeToTorigger(long);
};
struct TknDataEventConditions::ValueOperationType
{
	enum Type
	{
		None = 0,
		Set = 1,
		Add = 2,
		Sub = 3,
		Random = 4,
	};
};
struct TknDataEventConditions::ValueCheckType
{
	enum Type
	{
		None = 0,
		Equal = 1,
		NotGreaterThan = 2,
		NotLessThan = 3,
	};
};
struct TknDataEventConditions::CheckParams
{
	long eventCallCharacterID; // 0x0
	float eventCallCaracterPositionX; // 0x4
	long pairCharacterID; // 0x8
	float pairCharacterPositionX; // 0xC
};
struct TknDataModelMaterial
{
	long textureDivisionCountRow; // 0x0
	long textureDivisionCountCol; // 0x4
	const char * pMaterialName; // 0x8
	const char * pUserName; // 0x10
};
struct TknDataUVAnimationModelInfo
{
	long textureCount; // 0x0
	float * pTransDefaultPositionU; // 0x8
	float * pTransDefaultPositionV; // 0x10
	float uvAnimationTransRateX; // 0x18
	float uvAnimationTransRateY; // 0x1C
	float * pCenterU; // 0x20
	float * pCenterV; // 0x28
	bool * pMirrorFlagsU; // 0x30
	bool * pMirrorFlagsV; // 0x38
};
class TknDataModel :
	TknData
{
protected:
	long m_stageModelIndex; // 0x20
	const char * m_pModelName; // 0x28
	const char * m_pCastFileName; // 0x30
	long m_castFileIndex; // 0x38
	long m_materialCount; // 0x3C
	TknDataModelMaterial * m_pMaterials; // 0x40
	long m_uvAnimationCount; // 0x48
	long * m_pUvAnimationUIDs; // 0x50
	long m_uvAnimationModelCount; // 0x58
	TknDataUVAnimationModelInfo * m_pUvAnimationModelInfos; // 0x60
	CollisionModel * m_pCullingModel; // 0x68
	bool m_bUseLocalLight; // 0x70
	TknDataModel(TknDataModel &);
	TknDataModel(long, long);
private:
	TknDataModel & operator=(const TknDataModel &);
public:
	virtual ~TknDataModel();
	long getStageModelIndex();
	bool isStageModel();
	const char * getModelName();
	const char * getCastModelName();
	long getCastModelIndex();
	long getUVAnimationUID(long);
	long getUVAnimationCount();
	const TknDataModelMaterial * getMaterial(long);
	long getMaterialCount();
	const TknDataUVAnimationModelInfo * getUVModelInfo(long);
	long getUVModelInfoCount();
	const CollisionModel * getCullingModel();
	bool isUseLocalLight();
	static TknDataModel * create(OGLInputStream &, long);
};
class TknDataUVAnimation :
	TknData
{
	enum UVAnimationType
	{
		UV_ANIMTYPE_NONE = 0,
		UV_ANIMTYPE_ANIMATION = 1,
		UV_ANIMTYPE_SCROLL = 2,
		UV_ANIMTYPE_SAME_DIFFUSE = 3,
	};
	enum ModelAnimationType
	{
		MODEL_ANIMTYPE_NONE = 0,
		MODEL_ANIMTYPE_TRANS = 1,
		MODEL_ANIMTYPE_ROTATE = 2,
	};
	enum ModelAnimationRotateType
	{
		MODEL_ANIMROTATETYPE_NONE = 0,
		MODEL_ANIMROTATETYPE_RIGHT = 1,
		MODEL_ANIMROTATETYPE_LEFT = 2,
	};
	struct UVAnimationFrame;
	struct UVAnimation;
protected:
	long m_animationFrameMax; // 0x20
	long m_animationCount; // 0x24
	TknDataUVAnimation::UVAnimation * m_pAnimations; // 0x28
	TknDataUVAnimation::ModelAnimationType m_modelAnimationType; // 0x30
	float m_modelAnimeTransSpeedX; // 0x34
	float m_modelAnimeTransMaxValueX; // 0x38
	float m_modelAnimeTransSpeedY; // 0x3C
	float m_modelAnimeTransMaxValueY; // 0x40
	float m_modelAnimeRotateSpeed; // 0x44
	TknDataUVAnimation::ModelAnimationRotateType m_modelAnimeRotateType[2]; // 0x48
	TknDataUVAnimation(TknDataUVAnimation &);
	TknDataUVAnimation(long, long);
private:
	TknDataUVAnimation & operator=(const TknDataUVAnimation &);
public:
	virtual ~TknDataUVAnimation();
	long getAnimationCount();
	const TknDataUVAnimation::UVAnimation * getAnimation(long);
	long getTotalFrame();
	TknDataUVAnimation::ModelAnimationType getModelAnimationType();
	float getModelAnimeTransSpeedX();
	float getModelAnimeTransMaxValueX();
	float getModelAnimeTransSpeedY();
	float getModelAnimeTransMaxValueY();
	float getModelAnimeRotateSpeed();
	TknDataUVAnimation::ModelAnimationRotateType getModelAnimeRotateType(long);
	static TknDataUVAnimation * create(OGLInputStream &, long);
};
enum TknDataUVAnimation::ModelAnimationType
{
	MODEL_ANIMTYPE_NONE = 0,
	MODEL_ANIMTYPE_TRANS = 1,
	MODEL_ANIMTYPE_ROTATE = 2,
};
struct TknDataUVAnimation::UVAnimationFrame
{
	long texturePanelIndex; // 0x0
	long waitFrame; // 0x4
};
struct TknDataUVAnimation::UVAnimation
{
	long materialIndex; // 0x0
	TknData::TextureType textureType; // 0x4
	long multiTextureIndex; // 0x8
	long textureUID; // 0xC
	TknDataUVAnimation::UVAnimationType uvAnimationType; // 0x10
	TknDataUVAnimation::UVAnimationFrame * pAnimationList; // 0x18
	long animationListCount; // 0x20
	float scrollSpeedX; // 0x24
	float scrollSpeedY; // 0x28
	Tween::EasingType scrollEasingX; // 0x2C
	Tween::EasingType scrollEasingY; // 0x30
	float scrollEasingFrameX; // 0x34
	float scrollEasingFrameY; // 0x38
};
class TknDataMotion :
	TknData
{
protected:
	char * m_pMotionName; // 0x20
	long m_motionTotalFrame; // 0x28
	TknDataMotion(TknDataMotion &);
	TknDataMotion(long, long);
private:
	TknDataMotion & operator=(const TknDataMotion &);
public:
	virtual ~TknDataMotion();
	const char * getMotionName();
	long getMotionTotalFrame();
	static TknDataMotion * create(OGLInputStream &, long);
};
class TknDataObject :
	TknData
{
	struct EyeControlParams;
protected:
	TknData::SceneRegistCategory m_sceneRegistCategory; // 0x20
	TknData::OjectAnimationType m_type; // 0x24
	OGLVec3 m_position; // 0x28
	OGLVec3 m_direction; // 0x34
	OGLVec3 m_scale; // 0x40
	long m_modelUID; // 0x4C
	bool m_bUseGroup; // 0x50
	long m_groupObjectCount; // 0x54
	float m_groupIdealDistance; // 0x58
	float m_groupIdealDistanceAdd; // 0x5C
	float m_groupObjectBodySize; // 0x60
	float m_groupObjectSpeedMaxRate; // 0x64
	float m_groupObjectSpeedMinRate; // 0x68
	float m_groupDestinationSpeedRate; // 0x6C
	float m_groupSverageSpeedApproachRate; // 0x70
	bool m_bGroupRandomAnimationStartFlag; // 0x74
	bool m_bUseBindObject; // 0x75
	long m_bindObjectUID; // 0x78
	bool m_bBindModelBone; // 0x7C
	const char * m_pBindModelBoneName; // 0x80
	long m_shadowModelUID; // 0x88
	float m_shadowSubBoneEffectRate; // 0x8C
	float m_shadowEraseDistance; // 0x90
	OGLVec3 m_shadowPositionCorrection; // 0x94
	float m_shadowScaleW; // 0xA0
	float m_shadowScaleH; // 0xA4
	long m_shadowBindBoneCount; // 0xA8
	const char * * m_shadowBindBoneNames; // 0xB0
	const char * * m_shadowBindBoneNamesSub; // 0xB8
	bool m_bUseEyeControl; // 0xC0
	TknDataObject::EyeControlParams * m_pEyeControlParams; // 0xC8
	long m_eyeControlCount; // 0xD0
	float m_renderPriority; // 0xD4
	TknDataObject(TknDataObject &);
	TknDataObject(long, long);
private:
	TknDataObject & operator=(const TknDataObject &);
public:
	virtual ~TknDataObject();
	TknData::SceneRegistCategory getSceneResistCategory();
	TknData::OjectAnimationType getAnimationType();
	OGLVec3 getPosition();
	OGLVec3 getDirection();
	OGLVec3 getScale();
	long getModelUID();
	bool isUseGroup();
	long getGroupObjectCount();
	float getGroupIdealDistance();
	float getGroupIdealDistanceAdd();
	float getGroupObjectBodySize();
	float getGroupObjectSpeedMaxRate();
	float getGroupObjectSpeedMinRate();
	float getGroupDestinationSpeedRate();
	float getGroupSverageSpeedApproachRate();
	bool isGroupRandomAnimationStart();
	bool isEnableBindObject();
	long getBindObjectUID();
	bool isEnableBindModelBone();
	const char * getBindModelBoneName();
	bool isEnabledShadowModel();
	long getShadowModelUID();
	float getShadowSubBoneEffectRate();
	float getShadowEraseDistanceWithGround();
	OGLVec3 getShadowPositionCorrection();
	float getShadowScaleW();
	float getShadowScaleH();
	long getShadowBindBoneCount();
	const char * getShadowBindBoneName(long);
	const char * getShadowBindBoneNameSub(long);
	bool isUseEyeControl();
	const TknDataObject::EyeControlParams * getEyeControlParam(long);
	long getEyeControlCount();
	static TknDataObject * create(OGLInputStream &, long);
};
struct TknDataObject::EyeControlParams
{
	const char * pBoneName; // 0x0
	float rate; // 0x8
	float rotateMax; // 0xC
	float rotateMin; // 0x10
};
class TknDataEvent :
	TknData
{
	enum FinishAction
	{
		FINISHACTION_GOTO_NEUTRAL = 0,
		FINISHACTION_STOP = 1,
		FINISHACTION_LOOP = 2,
		FINISHACTION_ERASE = 3,
		FINISHACTION_PLAY_SCENE = 4,
	};
protected:
	long m_totalFrame; // 0x20
	long m_startFrame; // 0x24
	long m_objectUID; // 0x28
	TknDataEvent::FinishAction m_finishAction; // 0x2C
	long m_nextSceneUID; // 0x30
	bool m_bFinishActionInitParams; // 0x34
	long m_animationCount; // 0x38
	long * m_pAnimationUIDs; // 0x40
	long m_translationCount; // 0x48
	long * m_pTranslationUIDs; // 0x50
	long m_scriptCount; // 0x58
	long * m_pScriptUIDs; // 0x60
	TknData::OjectAnimationType m_animationType; // 0x68
	bool m_bCullingEnable; // 0x6C
	bool m_bCullingUseReferenceBone; // 0x6D
	const char * m_pCullingReferenceBoneName; // 0x70
	long m_bindEventUID; // 0x78
	bool m_bActive; // 0x7C
	TknDataEvent(TknDataEvent &);
	TknDataEvent(long, long);
private:
	TknDataEvent & operator=(const TknDataEvent &);
public:
	virtual ~TknDataEvent();
	long getStartFrame();
	long getEndFrame();
	long getTotalFrame();
	long getParentEventSceneUID();
	long getObjectUID();
	TknDataEvent::FinishAction getFinishAction();
	long getNextSceneUID();
	bool isFinishActionInitParams();
	TknData::OjectAnimationType getAnimationType();
	bool isEnableAnimationIndex(long);
	long getAnimationCount();
	long getAnimationUID(long);
	bool isEnableTranslationIndex(long);
	long getTranslationCount();
	long getTranslationUID(long);
	bool isEnableScriptIndex(long);
	long getScriptCount();
	long getScriptUID(long);
	bool isEnableCulling();
	bool isCullingUseReferenceBone();
	const char * getCullingReferenceBoneName();
	long getBindEventUID();
	bool isActive();
	static TknDataEvent * create(OGLInputStream &, long);
};
enum TknDataEvent::FinishAction
{
	FINISHACTION_GOTO_NEUTRAL = 0,
	FINISHACTION_STOP = 1,
	FINISHACTION_LOOP = 2,
	FINISHACTION_ERASE = 3,
	FINISHACTION_PLAY_SCENE = 4,
};
class TknDataEventModelAnimation :
	TknData
{
protected:
	long m_startFrame; // 0x20
	long m_totalFrame; // 0x24
	bool m_bTotalFrameFree; // 0x28
	long m_animationUID; // 0x2C
	TknData::LoopType m_loopType; // 0x30
	TknData::ModelAnimationBlendType m_blendType; // 0x34
	Tween::EasingType m_motionBlendEasingType; // 0x38
	long m_motionBlendFrame; // 0x3C
	long m_uvAnimationUID; // 0x40
	TknDataEventModelAnimation(TknDataEventModelAnimation &);
	TknDataEventModelAnimation(long, long);
private:
	TknDataEventModelAnimation & operator=(const TknDataEventModelAnimation &);
public:
	virtual ~TknDataEventModelAnimation();
	long getParentEventUID();
	long getStartFrame();
	long getEndFrame();
	long getTotalFrame();
	long getMotionUID();
	TknData::LoopType getLoopType();
	long getUVAnimationUID();
	bool isUseUVAnimation();
	bool isMotionBlend();
	TknData::ModelAnimationBlendType getMotionBlendType();
	Tween::EasingType getMotionBlendEasingType();
	float getMotionBlendFrame();
	static TknDataEventModelAnimation * create(OGLInputStream &, long);
};
class TknDataEventEffectAnimation :
	TknData
{
protected:
	long m_startFrame; // 0x20
	long m_totalFrame; // 0x24
	long m_effectUID; // 0x28
	TknData::LoopType m_loopType; // 0x2C
	TknDataEventEffectAnimation(TknDataEventEffectAnimation &);
	TknDataEventEffectAnimation(long, long);
private:
	TknDataEventEffectAnimation & operator=(const TknDataEventEffectAnimation &);
public:
	virtual ~TknDataEventEffectAnimation();
	long getParentEventUID();
	long getStartFrame();
	long getEndFrame();
	long getTotalFrame();
	long getEffectUID();
	TknData::LoopType getLoopType();
	static TknDataEventEffectAnimation * create(OGLInputStream &, long);
};
class TknDataEventTranslation :
	TknData
{
	enum CALCULATION_VERSION
	{
		CALCVERSION_100 = 0,
		CALCVERSION_101 = 1,
	};
protected:
	long m_endFrame; // 0x20
	long m_totalFrame; // 0x24
	OGLVec3 m_position; // 0x28
	OGLVec3 m_direction; // 0x34
	OGLVec3 m_scale; // 0x40
	OGLVec3 m_startPosition; // 0x4C
	OGLVec3 m_startDirection; // 0x58
	OGLVec3 m_startScale; // 0x64
	Tween::EasingType m_easingTransX; // 0x70
	Tween::EasingType m_easingTransY; // 0x74
	Tween::EasingType m_easingTransZ; // 0x78
	Tween::EasingType m_easingRotateX; // 0x7C
	Tween::EasingType m_easingRotateY; // 0x80
	Tween::EasingType m_easingRotateZ; // 0x84
	bool m_bTransEasingDifferentSetting; // 0x88
	bool m_bRotateEasingDifferentSetting; // 0x89
	bool m_bStartCurveEnabled; // 0x8A
	OGLVec3 m_startCurvePower; // 0x8C
	bool m_bEndCurveEnabled; // 0x98
	OGLVec3 m_endCurvePower; // 0x9C
	bool m_bAnimationNonTrans; // 0xA8
	bool m_bAnimationErase; // 0xA9
	bool m_bRotateAutoSetting; // 0xAA
	bool m_bRotateAutoSettingYOnly; // 0xAB
	bool m_bRotateAutoSettingFree; // 0xAC
	TknDataEventTranslation::CALCULATION_VERSION m_calculationVersion; // 0xB0
	TknDataEventTranslation(TknDataEventTranslation &);
	TknDataEventTranslation(long, long);
private:
	TknDataEventTranslation & operator=(const TknDataEventTranslation &);
public:
	virtual ~TknDataEventTranslation();
	long getParentEventUID();
	long getStartFrame();
	long getEndFrame();
	long getTotalFrame();
	OGLVec3 getPosition();
	OGLVec3 getDirection();
	OGLVec3 getScale();
	OGLVec3 getStartPosition();
	OGLVec3 getStartDirection();
	OGLVec3 getStartScale();
	Tween::EasingType getEasingTransX();
	Tween::EasingType getEasingTransY();
	Tween::EasingType getEasingTransZ();
	Tween::EasingType getEasingRotateX();
	Tween::EasingType getEasingRotateY();
	Tween::EasingType getEasingRotateZ();
	bool isStartCurve();
	OGLVec3 getStartCurve();
	bool isEndCurve();
	OGLVec3 getEndCurve();
	bool isbRotateAutoSetting();
	bool isRotateAutoSettingYOnly();
	bool isRotateAutoSettingFree();
	TknDataEventTranslation::CALCULATION_VERSION getCalculationVersion();
	static TknDataEventTranslation * create(OGLInputStream &, long);
};
class TknDataEventScript :
	TknData
{
	enum SCRIPT_TYPE
	{
		SCRIPTTYPE_NONE = 0,
		SCRIPTTYPE_COLOR = 1,
	};
protected:
	long m_startFrame; // 0x20
	long m_scriptTypeBits; // 0x24
	long m_colorParams_actionFrame; // 0x28
	float m_colorParams_colorR; // 0x2C
	float m_colorParams_colorG; // 0x30
	float m_colorParams_colorB; // 0x34
	Tween::EasingType m_colorParams_easingType; // 0x38
	TknDataEventScript(TknDataEventScript &);
	TknDataEventScript(long, long);
private:
	TknDataEventScript & operator=(const TknDataEventScript &);
public:
	virtual ~TknDataEventScript();
	long getStartFrame();
	long getScriptType();
	long getColorParamsActionFrame();
	float getColorParamsColorR();
	float getColorParamsColorG();
	float getColorParamsColorB();
	Tween::EasingType getColorParamsEasintType();
	static TknDataEventScript * create(OGLInputStream &, long);
};
class TknDataLight :
	TknData
{
protected:
	long m_type; // 0x20
	OGLVec3 m_position; // 0x24
	TknDataColor4 m_ambient; // 0x30
	TknDataColor4 m_diffuse; // 0x40
	TknDataColor4 m_specular; // 0x50
	float m_shininess; // 0x60
	bool m_bCastsShadows; // 0x64
	float m_constantAtt; // 0x68
	float m_linearAtt; // 0x6C
	float m_quadraticAtt; // 0x70
	OGLVec3 m_direction; // 0x74
	float m_soptCutOff; // 0x80
	float m_spotExponent; // 0x84
	TknDataLight(TknDataLight &);
	TknDataLight(long, long);
private:
	TknDataLight & operator=(const TknDataLight &);
public:
	virtual ~TknDataLight();
	static TknDataLight * create(OGLInputStream &, long);
};
class TknDataEffect :
	TknData
{
protected:
	const char * m_pSearchKey; // 0x20
	long m_effectIndex; // 0x28
	CollisionModel * m_pCullingModel; // 0x30
	const char * m_pUserName; // 0x38
	TknDataEffect(TknDataEffect &);
	TknDataEffect(long, long);
private:
	TknDataEffect & operator=(const TknDataEffect &);
public:
	virtual ~TknDataEffect();
	const char * getSearchKey();
	long getEffectIndex();
	static TknDataEffect * create(OGLInputStream &, long);
};
class TknDataBillboard :
	TknData
{
	struct BillboardRect;
protected:
	TknDataBillboard::BillboardRect * m_pRects; // 0x20
	long m_rectsCount; // 0x28
	long m_animationCount; // 0x2C
	float m_imageAnimationFrame; // 0x30
	float m_imageRenderSize; // 0x34
	long m_textureModelUID; // 0x38
	long m_textureIndex; // 0x3C
	long m_materialIndex; // 0x40
	TknData::TextureType m_textureType; // 0x44
	long m_multiTextureIndex; // 0x48
	const char * m_pTextureFileName; // 0x50
	long m_textureWidth; // 0x58
	long m_textureHeight; // 0x5C
	CollisionModel * m_pCullingModel; // 0x60
	const char * m_pUserName; // 0x68
	TknDataBillboard(TknDataBillboard &);
	TknDataBillboard(long, long);
private:
	TknDataBillboard & operator=(const TknDataBillboard &);
public:
	virtual ~TknDataBillboard();
	const CollisionModel * getCullingModel();
	long getTextureModelUID();
	long getTextureIndex();
	const char * getTextureFileName();
	long getMaterialIndex();
	TknData::TextureType getTextureType();
	long getMultiTextureIndex();
	long getAnimationCount();
	long getImageAnimationFrame();
	float getImageRenderSize();
	const TknDataBillboard::BillboardRect * getRect(long);
	long getRectCount();
	static TknDataBillboard * create(OGLInputStream &, long);
};
struct TknDataBillboard::BillboardRect
{
	long angle; // 0x0
	long * pImagesPanelIndex; // 0x8
	long imagesPanelIndexCount; // 0x10
};
class TknDataEventBillboardAnimation :
	TknData
{
protected:
	long m_startFrame; // 0x20
	long m_totalFrame; // 0x24
	bool m_bTotalFrameFree; // 0x28
	long m_animationUID; // 0x2C
	TknData::LoopType m_loopType; // 0x30
	TknData::ModelAnimationBlendType m_blendType; // 0x34
	Tween::EasingType m_motionBlendEasingType; // 0x38
	long m_motionBlendFrame; // 0x3C
	long m_uvAnimationUID; // 0x40
	TknDataEventBillboardAnimation(TknDataEventBillboardAnimation &);
	TknDataEventBillboardAnimation(long, long);
private:
	TknDataEventBillboardAnimation & operator=(const TknDataEventBillboardAnimation &);
public:
	virtual ~TknDataEventBillboardAnimation();
	long getParentEventUID();
	long getStartFrame();
	long getEndFrame();
	long getTotalFrame();
	long getBillboardUID();
	TknData::LoopType getLoopType();
	long getUVAnimationUID();
	static TknDataEventBillboardAnimation * create(OGLInputStream &, long);
};
class TknDataEventSound :
	TknData
{
	enum NameType
	{
		NAMETYPE_NAME = 0,
		NAMETYPE_GROUP = 1,
	};
protected:
	long m_startFrame; // 0x20
	long m_animationUID; // 0x24
	TknData::LoopType m_loopType; // 0x28
	TknDataEventSound::NameType m_nameType; // 0x2C
	const char * m_pSoundName; // 0x30
	float m_distanceAttenuation; // 0x38
	bool m_bNotDuplicated; // 0x3C
	long m_totalFrame; // 0x40
	TknDataEventSound(TknDataEventSound &);
	TknDataEventSound(long, long);
private:
	TknDataEventSound & operator=(const TknDataEventSound &);
public:
	virtual ~TknDataEventSound();
	long getStartFrame();
	long getEndFrame();
	const char * getSoundName();
	TknDataEventSound::NameType getNameType();
	float getDistanceAttenuation();
	bool isNotDuplicated();
	static TknDataEventSound * create(OGLInputStream &, long);
};