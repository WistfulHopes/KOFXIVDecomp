#pragma once

enum <unnamed-enum-MODEL_SET_MATERIAL_COLOR>
{
	MODEL_SET_MATERIAL_COLOR = 0,
	MODEL_SET_MATERIAL_NORMAL = 1,
	MODEL_SET_MATERIAL_BUMP = 2,
	MODEL_SET_MATERIAL_AMBIENT = 3,
	MODEL_SET_MATERIAL_SPECULAR = 4,
	MODEL_SET_MATERIAL_EMISSIVE = 5,
	MODEL_SET_MATERIAL_TRANSPARENT = 6,
	MODEL_SET_MATERIAL_OTHER = 6,
	MODEL_SET_MATERIAL_REFLECTION = 7,
	MODEL_SET_MATERIAL_DISPLACEMENT = 8,
	MODEL_SET_MATERIAL_ENVIRONMENT = 9,
	MODEL_SET_MATERIAL_MAX = 10,
};
enum OGL_MODEL_FX_TEXTURE
{
	OGL_MODEL_FX_FIRE_TEX_1 = 0,
	OGL_MODEL_FX_FIRE_TEX_2 = 1,
	OGL_MODEL_FX_LIGHTNING_TEX_1 = 2,
	OGL_MODEL_FX_EX_TEX = 3,
	OGL_MODEL_FX_MAXSTART_TEX = 4,
	OGL_MODEL_FX_LIGHTNING_TEX_2 = 5,
	OGL_MODEL_FX_AURA_TEX = 6,
	OGL_MODEL_FX_POISON_TEX = 7,
	OGL_MODEL_FX_TEX_MAX = 8,
};
enum OGL_MODEL_FX_SETTINGS_INDEX
{
	OGL_MODEL_FX_FIRE_SETTINGS_INDEX = 0,
	OGL_MODEL_FX_LIGHTNING_SETTINGS_INDEX = 1,
	OGL_MODEL_FX_EX_SETTINGS_INDEX = 2,
	OGL_MODEL_FX_SETTINGS_MAX_INDEX = 3,
};
enum <unnamed-enum-MODEL_FX_NONE>
{
	MODEL_FX_NONE = 0,
	MODEL_FX_FIRE_1 = 246,
	MODEL_FX_FIRE_2 = 236,
	MODEL_FX_LIGHTNING_1 = 226,
	MODEL_FX_EX = 10,
	MODEL_FX_MAXSTART = 11,
	MODEL_FX_LIGHTNING_2 = 216,
	MODEL_FX_AURA = 1,
	MODEL_FX_POISON = 12,
	MODEL_FX_MAX = 13,
};
enum <unnamed-enum-MODEL_REN_BUF_MAIN>
{
	MODEL_REN_BUF_MAIN = 0,
	MODEL_REN_BUF_MAX = 1,
};
struct _SECONDARY_BONE_FORCE
{
	long iNo; // 0x0
	OGLVec3 vForce; // 0x4
	unsigned long uiOpt; // 0x10
	float fBlend; // 0x14
	_SECONDARY_BONE_FORCE(_SECONDARY_BONE_FORCE &);
	_SECONDARY_BONE_FORCE(const _SECONDARY_BONE_FORCE &);
	_SECONDARY_BONE_FORCE();
};
struct _TRANS_BONE_INFO
{
	bool bUseFlg; // 0x0
	OGLQuat qPrevRot; // 0x4
	OGLVec3 vTargetPos; // 0x14
	float fLimitUp; // 0x20
	float fLimitDown; // 0x24
	float fLimitLeft; // 0x28
	float fLimitRight; // 0x2C
	float fBlend; // 0x30
	_TRANS_BONE_INFO(_TRANS_BONE_INFO &);
	_TRANS_BONE_INFO(const _TRANS_BONE_INFO &);
	_TRANS_BONE_INFO();
};
struct _OGLModelBone
{
	OGLPrevAnimationBone pPrevStack[3]; // 0x0
	OGLMatrix mTrans; // 0x78
	OGLVec3 vScale; // 0xB8
	OGLQuat vRotQuat; // 0xC4
	OGLMatrix mRot; // 0xD4
	OGLMatrix mBone; // 0x114
	_TRANS_BONE_INFO boneTarget; // 0x154
	long iTargetBoneTensionNo; // 0x188
	unsigned char bChangedFlg; // 0x18C
	unsigned char bZeroFlg; // 0x18D
	unsigned char bChangeFlg; // 0x18E
	unsigned char bTransFlg; // 0x18F
	float fMotOffScale[2]; // 0x190
	OGLMatrix fMotOffRotate[2]; // 0x198
	void init();
	_OGLModelBone(_OGLModelBone &);
	_OGLModelBone(const _OGLModelBone &);
	_OGLModelBone();
	~_OGLModelBone();
};
void _OGLModelBone::init(); // 0x140063790
class OGLModel :
	AgIThreadHost
{
public:
	char cIdentifyStr[64]; // 0x8
	long m_iMotionIndex[5]; // 0x48
	float m_fMotionFrame[5]; // 0x5C
	float m_fMotionBlend[5]; // 0x70
	long m_iPreMotionIndex[5]; // 0x84
	float m_fPreMotionFrame[5]; // 0x98
	float m_fPreMotionBlend[5]; // 0xAC
	unsigned char m_bMotionEnd; // 0xC0
	OGLVec3 m_vPosition; // 0xC4
	OGLVec3 m_vPosition2; // 0xD0
	OGLVec3 m_vCenterPosition; // 0xDC
	OGLMatrix m_mWorld; // 0xE8
	OGLMatrix m_mPreWorld; // 0x128
	OGLFigure * m_pFigure; // 0x168
	OGLMotion * m_pMotion[5]; // 0x170
	OGLMotion * m_pExternalMotion; // 0x198
	char m_pAniboneStr[32][5]; // 0x1A0
	OGLMatrix * m_pmParentPosture; // 0x240
	OGLModel * m_pParentModel; // 0x248
	long m_iParentBone; // 0x250
	long m_iParentBoneDef; // 0x254
	long m_iChildBone; // 0x258
	long m_iBoneStackIndex; // 0x25C
	unsigned char m_bPrevBoneMirrorFlg; // 0x260
	unsigned char m_SecondaryEnable; // 0x261
	unsigned char m_SecondaryHitEnable; // 0x262
	unsigned char m_SecondaryCollisionEnable; // 0x263
	OGLSecondary * m_pSecondary; // 0x268
	_SECONDARY_BONE_INFO * m_SecondaryInfo; // 0x270
	long m_iSecondaryForceCount; // 0x278
	_SECONDARY_BONE_FORCE m_SecondaryForce[12]; // 0x27C
	void * m_pfVertexBuffer; // 0x3A0
	void * m_pfPreVertexBuffer; // 0x3A8
	void * m_pfWorldBuffer; // 0x3B0
	void * m_pfPrevWorldBuffer; // 0x3B8
	Vector4Unaligned * m_pmBoneWorld; // 0x3C0
	Vector4Unaligned * m_pmPrevBoneWorld; // 0x3C8
	Matrix4Unaligned m_mPBoneWorld; // 0x3D0
	unsigned char m_bProjectionBlend; // 0x410
	OGLMatrix m_OrthoProj; // 0x414
	OGLMatrix m_OrthoView; // 0x454
	unsigned char bUseCompute; // 0x494
	float * m_pfVertexCoord; // 0x498
	float * m_pfTexCoord[4]; // 0x4A0
	float * m_pfNormalCoord; // 0x4C0
	unsigned long * m_piVerColor; // 0x4C8
	float * m_pfTangentCoord; // 0x4D0
	char * m_pbBoneMirrorFlg; // 0x4D8
	char * m_pbBoneMirrorFlg2; // 0x4E0
	_OGLModelBone * m_pBoneInfo; // 0x4E8
	OGLTexture * m_pTexture[4][64]; // 0x4F0
	OGLTexture * m_pMaterialMap[10][64]; // 0xCF0
	unsigned char m_bTrans; // 0x20F0
	unsigned char m_bChange; // 0x20F1
	unsigned char m_bPostureChange; // 0x20F2
	unsigned char m_bUpdated; // 0x20F3
	unsigned char * m_bMaterialVisible; // 0x20F8
	unsigned char * m_bMaterialShadowVisible; // 0x2100
	OGLMaterial * m_pMaterial; // 0x2108
	unsigned char m_ucMaterialCount; // 0x2110
	unsigned long * m_pusIndexShadow; // 0x2118
	unsigned short * m_pussIndexShadow; // 0x2120
	unsigned long m_usIndexShadowCount; // 0x2128
	unsigned char m_bMotOffScaleFlg; // 0x212C
	long m_iMotOffScaleBoneNo[2]; // 0x2130
	float m_fMotOffScale[2]; // 0x2138
	float m_fMotOffScaleCommon[2]; // 0x2140
	float m_fMotOffScaleTemp; // 0x2148
	long m_iMotOffSceleIndex; // 0x214C
	unsigned char m_bBaseOffScaleFlg; // 0x2150
	long m_iMotionPostureCount; // 0x2154
	long m_iCurrentMotion; // 0x2158
	long m_iCurrentExternalMotion; // 0x215C
	unsigned long m_uiModeFlg; // 0x2160
	OGLMirror * m_pMirror; // 0x2168
	unsigned char m_MirrorEnable; // 0x2170
	OGLCamera * m_pCamera; // 0x2178
	long m_iPriority; // 0x2180
	unsigned char m_bSearchBoneFlg; // 0x2184
	long m_iSearchBoneNo; // 0x2188
	unsigned char m_bSearchExitFlg; // 0x218C
	unsigned long * indexBuffer; // 0x2190
private:
	unsigned long vertexBuffer; // 0x2198
	unsigned long bonesBuffer; // 0x219C
	unsigned long numVerticesBuffer; // 0x21A0
	unsigned long m_iVaoID; // 0x21A4
	enum CreateBuffersRequest
	{
		CreateBuffersRequest_None = 0,
		CreateBuffersRequest_NoMotion = 1,
		CreateBuffersRequest_Normal = 2,
		CreateBuffersRequest_INVALID = 3,
	};
	OGLModel::CreateBuffersRequest m_createBuffersReq; // 0x21A8
	unsigned char m_ownsVertexBuffer; // 0x21AC
public:
	unsigned long getVertexBuffer();
	unsigned long getVao();
	unsigned char m_bAllocatedVertexPointer; // 0x21AD
	unsigned char m_bVaoFlg; // 0x21AE
	long m_iMaterialNo; // 0x21B0
	long m_iBoneNo; // 0x21B4
	long m_iSecCount; // 0x21B8
	char * m_cFollowBone; // 0x21C0
	char * m_cFollowTargetBone; // 0x21C8
	long m_iMirrorBaseBoneNo; // 0x21D0
	unsigned long m_uiUseMotionFlg; // 0x21D4
	long * m_iMirrorBoneIdx; // 0x21D8
	long * m_iMirrorBoneRIdx; // 0x21E0
	long * m_iSecondaryBoneIdx; // 0x21E8
	long * m_iSecondaryBoneRIdx; // 0x21F0
	long m_iMotionCount[5]; // 0x21F8
	long m_iExternalMotionCount[5]; // 0x220C
	long * * m_iMotionBoneIdx[5]; // 0x2220
	long * * m_iExternalMotionBoneIdx[5]; // 0x2248
	long * m_iFigureBoneIdx; // 0x2270
	char * m_cModelName; // 0x2278
	long m_modelFXFlg; // 0x2280
	float m_modelFXEXStrength; // 0x2284
	OGLTexture * m_pEffectTexture[8]; // 0x2288
	unsigned char m_useShaderFX; // 0x22C8
	unsigned char m_createShadowFlg; // 0x22C9
	unsigned char m_receiveShadowsFlg; // 0x22CA
	unsigned char m_normalMapCreateFlg; // 0x22CB
	unsigned char m_createMaskFlg; // 0x22CC
	unsigned char m_lowAccuracyShadowBias; // 0x22CD
	long m_skipSelfShadowLightId; // 0x22D0
	long m_shadowTextureId; // 0x22D4
	float m_opacity; // 0x22D8
	float m_matOpacity; // 0x22DC
	long m_renderBufferFlg; // 0x22E0
	long m_fillColourType; // 0x22E4
	float m_fillColour[4]; // 0x22E8
	float m_rimLightMin; // 0x22F8
	float m_rimLightMax; // 0x22FC
	float m_rimLightStrength; // 0x2300
	float m_rimLightColour[3]; // 0x2304
	float m_projNormalAngRimLightOffset; // 0x2310
	float m_shaderEyeDiffuseEmiStrength; // 0x2314
	float m_shaderLightDiffuseEmiStrength; // 0x2318
	float m_bodySelfShadowDotRangeMinMax[2]; // 0x231C
	float m_skinSelfShadowDotRangeMinMax[2]; // 0x2324
	float m_zOffset; // 0x232C
	float m_projNormalAngLightOffset; // 0x2330
	float m_fSkinWrap; // 0x2334
	float m_fSkinScatterWidth; // 0x2338
	float m_fSkinScatterCol[4]; // 0x233C
	unsigned long m_nSkinShininess; // 0x234C
	static OGLShader * * m_ComputeShaderTbl; // 0xFFFFFFFFFFFFFFFF
	void * m_pfIndexBuffer; // 0x2350
	unsigned long m_uiUseCommonObac; // 0x2358
	OGLMatrix m_mTmpMatrix; // 0x235C
	float m_fTmpBlend; // 0x239C
	unsigned long m_uiTmpCalcTarget; // 0x23A0
	long m_threadRunning; // 0x23A4
	virtual void onExecuteThread();
	virtual void onJoinThread();
	virtual long getThreadIsRunning();
	AgThread m_updateThread; // 0x23A8
	AgCondition updataCond; // 0x23D0
	AgCondition m_postureReadyCond; // 0x2408
	AgMutex updateCondMutex; // 0x2440
	AgMutex m_postureCondMutex; // 0x2468
	unsigned char bCreateUpdateThread; // 0x2490
	std::atomic<unsigned char> bWakeThread; // 0x2491
	OGLModel();
	virtual ~OGLModel();
	void initialize();
	void finalize();
	void clear();
	void release();
	void createIndex();
	void createFigureIndex(OGLModel *);
	void createExternalIndex(OGLModel *);
	OGLAnimationBone * searchMotionBoneID(long, long *, long *, unsigned char);
	void searchMotionBoneIDLight(long, long *, unsigned char);
	long searchBoneFigureToMirror(long);
	long searchBoneMirrorToFigure(long);
	long searchBoneFigureToSecondary(long);
	long searchBoneSecondaryToFigure(long);
	long getMirrorBone(long);
	void setUseMotionFlg(long, unsigned char);
	void setForcedSecondary(unsigned char);
	void copyModel(OGLModel *);
	void copyMotion(OGLModel *);
	OGLMatrix * getBoneRot(long);
	unsigned char getBoneTrans(long, OGLVec3 *, OGLMatrix *);
	unsigned char getBoneAxis(long, OGLMatrix *, OGLMatrix *);
	void getBoneMatrix(OGLMatrix *, long, float, OGLMatrix *, float, OGLVec3 *, float *);
	void getBoneMatrix(OGLMatrix *, float *, long, float, float, OGLMatrix *);
	void setParent(OGLModel *, long, long);
	void changeParentMirror(unsigned char);
	long getBoneNoFromName(const char *, long);
	long convertBoneMirrorToFigure(long);
	long convertBoneFigureToMirror(long);
	OGLAnimationBone * searchMotionAnibone(long, long *, long *);
	void searchMotionAniboneLight(long, long *);
	void setMotionBoneSuffix(const char *, long);
	void clearMotionBoneSuffix(long);
	long getMaterialNoFromName(const char *, long);
	long convertBoneFigureToSecondary(long);
	long convertBoneToSecondaryIndex(long);
	long convertBoneSecondaryToFigure(long);
	void setBoneForce(long, OGLVec3, unsigned long, float);
	void checkParent(OGLModel *);
	void checkTexture(OGLTexture *);
	void checkFigure(OGLFigure *);
	void checkMotion(OGLMotion *);
	void checkMirror(OGLMirror *);
	void checkCamera(OGLCamera *);
	void checkSecondary(OGLSecondary *);
	void setTrans(OGLMatrix *, long, unsigned char);
	void setTransTarget(OGLVec3 *, long, float, float, float, float, float);
	void setWorldShadow(OGLMatrix *);
	void setWorld(OGLMatrix *);
	void setWorldForObject(OGLMatrix *);
	void resetBoneChange();
	void setOffsetScaleInit(OGLFigure *, long);
	void setFigure(OGLFigure *, unsigned char);
	unsigned char setMotion(long);
	void setMotion(OGLMotion *, long);
	unsigned char setExternalMotion(OGLModel *, long);
	unsigned char setTexture(OGLTexture *, long, long);
	unsigned char setTexture(OGLTexture *, long);
	unsigned char setTexture(OGLTexture *);
	unsigned char setMaterialMap(long, OGLTexture *, long);
	unsigned char setMaterialMap(long, OGLTexture *);
	void savePrevBoneInfo(long);
	void setPrevBoneInfo(long);
	void setPrevBoneInfoMirror(unsigned char);
	unsigned char checkMotionMirror(unsigned char *);
	void updatePosture();
	void updatePosture(OGLMatrix *, float, unsigned char, unsigned long);
	void updatePostureExe(OGLMatrix *, float);
	void updatePostureSecExe(OGLMatrix *, float);
	void updatePostureTPose(OGLMatrix *, float);
	void syncPosture();
	void setPosture(OGLMatrix *);
	void freeBuffers(bool);
	void rebuildVertexBuffer();
	bool checkCreateBuffers();
private:
	void setBoneTrans(OGLBone *, long);
	unsigned long getSecondaryState(long);
	void setBoneTransOnce(long, long);
	void setBoneTransNotSecOnce(long, unsigned char);
	void setBoneTransSecOnce(long, unsigned char);
	void setBoneTransSecOnceNew(long, unsigned char);
	long searchMotionBone(long);
	long searchMotionBoneFromName(const char *);
	long searchMotionBoneFromNameReverse(const char *);
	void checkFollowBone();
public:
	void setFollowBone(const char *, const char *);
	void setMirrorBaseBone(const char *);
	void applyPosture(long);
	void applyPosture();
	long applyPostureNormal(long, OGLVec3 *);
	void applyPrePostureNormal(long, OGLVec3 *);
	void changeUV(OGLMotionData *, float);
	void changeTilingUV(OGLMotionData *, float);
	void setMaterialBlendMode(long, long);
	void setMaterialEffect(long, long);
	void addMaterialEffectFlg(long, long);
	void delMaterialEffectFlg(long, long);
	void setRimLightOff(unsigned char);
	unsigned char getRimLightOff();
	void setMaterialShader(long, long);
	void setMaterialShaderAll(long);
	void calcNormal(long);
	void setMirror(OGLMirror *);
	void setMirrorEnable(unsigned char);
	void setMaterialVisible(long, unsigned char);
	void createBaseModelShadow(unsigned char *);
	void setSecondary(OGLSecondary *);
	void setSecondaryEnable(unsigned char);
	void setCamera(OGLCamera *);
	void setPriority(long);
	long getMotionCount(long);
	float getTotalFrame(long, long);
	void setMotionNo(long, long);
	long getMotionNo(long);
	void setMotionFrame(float, long);
	float getMotionFrame(long);
	void updateMotionFrame(float, long);
	unsigned char isMotionEnd();
	void setMotionBlend(float, long);
	float getMotionBlend(long);
	void setMotionScale(float, long, long);
	void setMotionScaleEnable(unsigned char, long);
	void setMotionAutoScaleEnable(unsigned char, long);
	void updatePostureCalc(float);
	void setBoneTrans2(OGLBone *);
	void changeBoneToWorld();
	void setLightMaterial(OGLMaterialLight *, long);
	void resetLightMaterial(long);
	OGLMaterialLight * getLightMaterial(long);
	void setAllLightMaterial(OGLMaterialLight *);
	void resetAllLightMaterial();
	void addBoneNo(long);
	long getBoneNo();
	long getBoneMax();
	long getMaterialMax();
	void addMaterialNo(long);
	long getMaterialNo();
	void addViewMode(unsigned long);
	void delViewMode(unsigned long);
	OGLVec3 getPosition();
	OGLVec3 getCenterPosition();
	void setCenterPosition(OGLVec3 &);
	void setUseShaderFX(unsigned char);
	unsigned char getUseShaderFX();
	void setCreateShadowFlg(unsigned char);
	unsigned char getCreateShadowFlg();
	void setReceiveShadowsFlg(unsigned char);
	unsigned char getReceiveShadowsFlg();
	void setSkipSelfShadowLightId(long);
	long getSkipSelfShadowLightId();
	void setLowAccuracySelfShadow(unsigned char);
	unsigned char getLowAccuracySelfShadow();
	void setUseShadowIdFlg(long);
	long getUseShadowIdFlg();
	void setNormalMapCreateFlg(unsigned char);
	unsigned char getNormalMapCreateFlg();
	void setCreateMaskFlg(unsigned char);
	unsigned char getCreateMaskFlg();
	void setFresnelFlg(unsigned char);
	unsigned char getFresnelFlg();
	void setOrtho(float, float, float, float, float, float);
	void setOrthoViewTrans(OGLMatrix *);
	void setBlendProjection(unsigned char);
	unsigned char getBlendProjection();
	void setZOffset(float);
	float getZOffset();
	void setOpacity(float);
	float getOpacity();
	void setMatOpacity(float);
	float getMatOpacity();
	void setModelFillColType(long);
	long getModelFillColType();
	void setModelFillColour(float, float, float, float);
	void setModelFillColour(float *);
	void setMaterialFillColour(const char *, float *, long);
	void setMaterialFillColour(long, float *, long);
	void resetMaterialFillColour(const char *);
	void resetMaterialFillColour(long);
	void setRimLightMinMax(float, float);
	void setRimLightMin(float);
	float getRimLightMin();
	void setRimLightMax(float);
	float getRimLightMax();
	void setRimLightStr(float);
	float getRimLightStr();
	void setRimLightColour(float, float, float);
	void setRimLightColour(float *);
	void setEyeDiffuseEmiStrength(float);
	float getEyeDiffuseEmiStrength();
	void setLightDiffuseEmiStrength(float);
	float getLightDiffuseEmiStrength();
	float getBodySelfShadowDotRangeMin();
	float getBodySelfShadowDotRangeMax();
	void setBodySelfShadowDotRangeMin(float);
	void setBodySelfShadowDotRangeMax(float);
	void setBodySelfShadowDotRange(float *);
	float getSkinSelfShadowDotRangeMin();
	float getSkinSelfShadowDotRangeMax();
	void setSkinSelfShadowDotRangeMin(float);
	void setSkinSelfShadowDotRangeMax(float);
	void setSkinSelfShadowDotRange(float *);
	void setModelFXFlg(long);
	long getModelFXFlg();
	void setModelFXTextures(long, OGLTexture *);
	long getModelFXTextureId(long);
	void setModelFXEXStrength(float);
	float getModelFXEXStrength();
	void setSkinWrap(float);
	float getSkinWrap();
	void setSkinScatterWidth(float);
	float getSkinScatterWidth();
	void setSkinScatterColour(float *);
	void setSkinShininess(unsigned long);
	float getSkinShininess();
	void setRenderBufferFlg(long);
	long getRenderBufferFlg();
	void setViewWireFrame(unsigned char);
};