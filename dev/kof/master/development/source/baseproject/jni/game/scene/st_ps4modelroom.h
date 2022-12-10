#pragma once

struct AppMain::_MONITORFILTER
{
	bool FilterOn; // 0x0
	float blur; // 0x4
	float brightness; // 0x8
	float saturation; // 0xC
	float contrast; // 0x10
	float midTonesColShift[4]; // 0x14
};
struct AppMain::_BLOOMSETTINGS
{
	enum <unnamed-enum-OLD_BLOOM>
	{
		OLD_BLOOM = 0,
		NEW_BLOOM = 1,
	};
	enum <unnamed-enum-QUALITY_GOOD>
	{
		QUALITY_GOOD = 0,
		QUALITY_HIGH = 1,
	};
	bool bloomOn; // 0x0
	long bloomMethod; // 0x4
	long bloomQuality; // 0x8
	long bloomDownSamplingBlurSize; // 0xC
	float baseSaturation; // 0x10
	float baseIntensity; // 0x14
	float bloomSaturation; // 0x18
	float bloomIntensity; // 0x1C
	float blurStrength; // 0x20
	long downsampleScale; // 0x24
};
struct AppMain::_CHARBLOOMSETTINGS
{
	bool bloomOn; // 0x0
	float highlightThreshold; // 0x4
	float highlightBrightness; // 0x8
	float blurStrength; // 0xC
	long downsampleScale; // 0x10
};
struct AppMain::_DOFSETTINGS
{
	bool faceOffDofOn; // 0x0
	bool fightDofOn; // 0x1
	float faceOffDofNear; // 0x4
	float faceOffDofFar; // 0x8
	float faceOffDofStrength; // 0xC
	float fightDofNear; // 0x10
	float fightDofFar; // 0x14
	float fightDofStrength; // 0x18
};
struct AppMain::_FXAASETTINGS
{
	bool fxaaOn; // 0x0
	float fxaaNormScaleFactor; // 0x4
	float fxaaLowerThreshold; // 0x8
	float fxaaDispRange; // 0xC
};
struct AppMain::_FOGSETTINGS
{
	bool fogOn; // 0x0
	OGLFog::CALC_TYPE calcType; // 0x4
	float upFogDist; // 0x8
	float upFogDistExp; // 0xC
	long upFogHeight; // 0x10
	float upFogHeightExp; // 0x14
	float upFogStrength; // 0x18
	float upFogColour[4]; // 0x1C
	float downFogDist; // 0x2C
	float downFogDistExp; // 0x30
	long downFogHeight; // 0x34
	float downFogHeightExp; // 0x38
	float downFogStrength; // 0x3C
	float downFogColour[4]; // 0x40
};
struct AppMain::_MOTIONBLURSETTINGS
{
	bool motionBlurOn; // 0x0
};
struct AppMain::_GODRAYSHADERSETTINGS
{
	bool shaderOn; // 0x0
	float decay; // 0x4
	float exposure; // 0x8
	float weight; // 0xC
	float density; // 0x10
	float blurStrength; // 0x14
	OGLVec4 sunModelPos; // 0x18
	long sunModelIndex; // 0x28
	bool sunPosSet; // 0x2C
	_GODRAYSHADERSETTINGS();
};
struct AppMain::_HEATHAZESETTINGS
{
	bool heatHazeOn; // 0x0
	float heatHazeNear; // 0x4
	float heatHazeSpeed; // 0x8
	float heatHazeStrength; // 0xC
};
struct AppMain::_WATERSURFACESETTINGS
{
	bool shaderOn; // 0x0
	bool useReflection; // 0x1
	float waterTranslation; // 0x4
	float currentWaterTrans; // 0x8
	float reflectScale; // 0xC
	float windDirection[4]; // 0x10
	float waterCol[3]; // 0x20
};
struct AppMain::_CAUSTICSETTINGS
{
	bool shaderOn; // 0x0
	float lerpVal; // 0x4
};
struct AppMain::_EXTRA_BG_SETTINGS
{
	bool monitorOn; // 0x0
	float lightningCol[4]; // 0x4
};
struct AppMain::_BUFFER_TRANSPARENCY_SETTINGS
{
	enum <unnamed-enum-TRANS_P1_MAIN_BUFFER>
	{
		TRANS_P1_MAIN_BUFFER = 0,
		TRANS_P2_MAIN_BUFFER = 1,
		TRANS_MAX = 2,
	};
	bool transparencyOn[2]; // 0x0
	float opacity[2]; // 0x4
};
struct AppMain::_FILL_SETTINGS
{
	enum <unnamed-enum-FILL_NONE>
	{
		FILL_NONE = 0,
		FILL_OVERWRITE = 1,
		FILL_MULTIPLY = 2,
		FILL_PRE_LIGHTING = 3,
	};
	enum <unnamed-enum-MATERIAL_TYPE_NONE>
	{
		MATERIAL_TYPE_NONE = 0,
		MATERIAL_TYPE_HAIR = 1,
		MATERIAL_TYPE_SKIN = 2,
		MATERIAL_TYPE_MAX = 3,
	};
	long fillType; // 0x0
	float fillColour[4]; // 0x4
	long materialType; // 0x14
};
struct AppMain::_MODEL_FILL_SETTINGS
{
	AppMain::_FILL_SETTINGS fillSettings[5]; // 0x0
};
struct AppMain::_MATERIAL_LIGHT_ASSET_DATA
{
	long numLights; // 0x0
	ShaderFxHelper::ShaderFxLightSetting lightAssetData[3]; // 0x4
	_MATERIAL_LIGHT_ASSET_DATA();
};
struct AppMain::_MODEL_LIGHT_DATA
{
	bool valid; // 0x0
	long numMaterials; // 0x4
	AppMain::_MATERIAL_LIGHT_ASSET_DATA matLightAssetData[64]; // 0x8
	_MODEL_LIGHT_DATA();
};
struct AppMain::_MODEL_RIM_LIGHT_DATA
{
	float rimLightMin; // 0x0
	float rimLightMax; // 0x4
	float rimLightStrength; // 0x8
	float rimLightColour[3]; // 0xC
};
struct AppMain::_MODEL_EMISSION_DATA
{
	float eyeEmissionStrength; // 0x0
	float charEmissionStrength; // 0x4
};
struct AppMain::_MODEL_SHADOW_DOT_RANGE_DATA
{
	float bodySelfShadowDotRangeMin; // 0x0
	float bodySelfShadowDotRangeMax; // 0x4
	float skinSelfShadowDotRangeMin; // 0x8
	float skinSelfShadowDotRangeMax; // 0xC
};
struct AppMain::_WORLD_LIGHT_DATA
{
	long numWorldLights; // 0x0
	ShaderFxHelper::ShaderFxLightSetting worldLightAssetData[1]; // 0x4
	long numCharLights; // 0xA8
	ShaderFxHelper::ShaderFxLightSetting charLightAssetData[3]; // 0xAC
	long numP1Lights; // 0x298
	ShaderFxHelper::ShaderFxLightSetting P1LightAssetData[3]; // 0x29C
	AppMain::_MODEL_RIM_LIGHT_DATA P1RimLightAssetData; // 0x488
	AppMain::_MODEL_EMISSION_DATA P1EmissionData; // 0x4A0
	AppMain::_MODEL_SHADOW_DOT_RANGE_DATA P1ShadowRangeData; // 0x4A8
	long numP2Lights; // 0x4B8
	ShaderFxHelper::ShaderFxLightSetting P2LightAssetData[3]; // 0x4BC
	AppMain::_MODEL_RIM_LIGHT_DATA P2RimLightAssetData; // 0x6A8
	AppMain::_MODEL_EMISSION_DATA P2EmissionData; // 0x6C0
	AppMain::_MODEL_SHADOW_DOT_RANGE_DATA P2ShadowRangeData; // 0x6C8
};
struct AppMain::_CHARAINFO
{
	long iNo; // 0x0
	long iColor; // 0x4
	long iModelCount; // 0x8
	std::unique_ptr<OGLModel * [0],std::default_delete<OGLModel * [0]> > ppModel; // 0x10
	OGLVec3 vPos; // 0x18
	long iMotionNo; // 0x24
	float fFrame; // 0x28
	long iModelEffect; // 0x2C
	float fEXEffectStr; // 0x30
	_CHARAINFO(AppMain::_CHARAINFO &);
	_CHARAINFO();
	~_CHARAINFO();
	AppMain::_CHARAINFO & operator=(AppMain::_CHARAINFO &);
};
class std::unique_ptr<OGLModel * [0],std::default_delete<OGLModel * [0]> > :
	std::_Unique_ptr_base<OGLModel *,std::default_delete<OGLModel * [0]> >
{
	class _Myt;
	class _Mybase;
	typedef OGLModel * pointer;
	typedef OGLModel element_type;
	struct deleter_type;
public:
	unique_ptr<OGLModel * [0],std::default_delete<OGLModel * [0]> >(const std::unique_ptr<OGLModel * [0],std::default_delete<OGLModel * [0]> > &);
	unique_ptr<OGLModel * [0],std::default_delete<OGLModel * [0]> >(void *);
	unique_ptr<OGLModel * [0],std::default_delete<OGLModel * [0]> >(std::unique_ptr<OGLModel * [0],std::default_delete<OGLModel * [0]> > &);
	unique_ptr<OGLModel * [0],std::default_delete<OGLModel * [0]> >();
	std::unique_ptr<OGLModel * [0],std::default_delete<OGLModel * [0]> > & operator=(const std::unique_ptr<OGLModel * [0],std::default_delete<OGLModel * [0]> > &);
	std::unique_ptr<OGLModel * [0],std::default_delete<OGLModel * [0]> > & operator=(void *);
	std::unique_ptr<OGLModel * [0],std::default_delete<OGLModel * [0]> > & operator=(std::unique_ptr<OGLModel * [0],std::default_delete<OGLModel * [0]> > &);
	void reset(void *);
	void swap(std::unique_ptr<OGLModel * [0],std::default_delete<OGLModel * [0]> > &);
	~unique_ptr<OGLModel * [0],std::default_delete<OGLModel * [0]> >();
	OGLModel * & operator[](unsigned long long);
	OGLModel * * get();
	bool operator bool();
	OGLModel * * release();
private:
	void _Delete();
};
AppMain::_CHARAINFO::_CHARAINFO(); // 0x140098860
struct AppMain::_STAGEINFO
{
	long iNo; // 0x0
};
struct AppMain::_MODEL_FX_SETTINGS
{
	OGLVec2 fxCentre[2]; // 0x0
	float fxSpeed[2]; // 0x10
	_MODEL_FX_SETTINGS();
};
struct AppMain::_GLOBAL_SHADER_SETTINGS
{
	enum <unnamed-enum-FX_FIRE>
	{
		FX_FIRE = 0,
		FX_LIGHTNING = 1,
		FX_MAX = 2,
	};
	AppMain::_MODEL_FX_SETTINGS modelFXSettings[2]; // 0x0
	_GLOBAL_SHADER_SETTINGS();
};
struct AppMain::_POSTPROCESS_SHADER_SETTINGS
{
	AppMain::_MOTIONBLURSETTINGS motionBlurSettings[2]; // 0x0
	AppMain::_FOGSETTINGS groundFogSettings; // 0x4
	AppMain::_FOGSETTINGS skyFogSettings; // 0x54
	AppMain::_DOFSETTINGS dofSettings; // 0xA4
	AppMain::_CHARBLOOMSETTINGS charBloomSettings; // 0xC0
	AppMain::_BLOOMSETTINGS bgBloomSettings; // 0xD4
	AppMain::_MONITORFILTER monitorFilter; // 0xFC
	AppMain::_GODRAYSHADERSETTINGS godRaySettings; // 0x120
	AppMain::_HEATHAZESETTINGS heatHazeSettings; // 0x150
	AppMain::_WATERSURFACESETTINGS waterSurfaceSettings; // 0x160
	AppMain::_CAUSTICSETTINGS causticSettings; // 0x18C
	AppMain::_EXTRA_BG_SETTINGS extraBGSettings; // 0x194
	AppMain::_BUFFER_TRANSPARENCY_SETTINGS bufferTransparencySettings; // 0x1A8
	AppMain::_FXAASETTINGS fxaaSettings; // 0x1B4
	_OGLRenderShadLightAreaSettings shadowLightAreaSettings; // 0x1C4
	_OGLRenderScreenFilterSettings screenFilter; // 0x1DC
	_POSTPROCESS_SHADER_SETTINGS();
};
struct AppMain::_MODELROOM_SETTINGS
{
	float perseAngle; // 0x0
	float cameraAngle; // 0x4
	float cameraDist; // 0x8
	float cameraHeight; // 0xC
	long worldLightId[1]; // 0x10
	long playerLightId[3][64][4]; // 0x14
	long stageModelLightId[3][64][44]; // 0xC14
	long numWorldLights; // 0x9014
	long numPlayerLights[64][4]; // 0x9018
	long numStageModelLights[64][44]; // 0x9418
	AppMain::_MODEL_LIGHT_DATA modelLightData[44]; // 0xC018
	AppMain::_WORLD_LIGHT_DATA worldLightData; // 0x161178
	bool worldLightOn[1]; // 0x161850
	bool playerLightOn[3][64][4]; // 0x161851
	bool stageModelLightOn[3][64][44]; // 0x161B51
	bool detachCameraFromLight; // 0x163C51
	bool drawDebugTextures; // 0x163C52
	bool displayLightDebug; // 0x163C53
	bool bInitialiseTPose; // 0x163C54
	long framebufferColour[3]; // 0x163C58
	AppMain::_POSTPROCESS_SHADER_SETTINGS postprocessSettings; // 0x163C64
	float ZOffsetP1; // 0x163E88
	AppMain::_MODEL_FILL_SETTINGS modelFillSettings; // 0x163E8C
	AppMain::_GLOBAL_SHADER_SETTINGS globalShaderSettings; // 0x163F04
	ConstantScreenFilter filterUniforms; // 0x163F34
	ConstantPostFX postfxUniforms; // 0x163FA4
	float fCamPos[3]; // 0x164064
	float fCamLook[3]; // 0x164070
	float fCamUp[3]; // 0x16407C
	float fCamElevation; // 0x164088
	float modelEffectFrame[16]; // 0x16408C
	long motionBlurFrame; // 0x1640CC
	long motionBlurMaxFrames; // 0x1640D0
	char motionBlurShowBit[2]; // 0x1640D4
	unsigned long visibleFlg; // 0x1640D8
	long fMainInfoWindowPos[2]; // 0x1640DC
	long fSubInfoWindowPos[2]; // 0x1640E4
	AppMain::_STAGEINFO StageInfo; // 0x1640EC
	AppMain::_CHARAINFO CharaInfo[4]; // 0x1640F0
	OGLMatrix mView; // 0x1641D0
	OGLMatrix mInvView; // 0x164210
	OGLMatrix mBillboard; // 0x164250
	OGLMatrix mProj[4]; // 0x164290
	OGLVec3 vCamPosVec3; // 0x164390
	OGLVec3 vCamLookNormal; // 0x16439C
	OGLVec3 vCamLookPerpNormal; // 0x1643A8
	void CalcBlendProjParam();
	void SetBlendProjection(OGLModel *);
	float CalcCamDotFromFront();
	_MODELROOM_SETTINGS(AppMain::_MODELROOM_SETTINGS &);
	_MODELROOM_SETTINGS();
	~_MODELROOM_SETTINGS();
	AppMain::_MODELROOM_SETTINGS & operator=(AppMain::_MODELROOM_SETTINGS &);
};
struct AppMain::_MODELROOM_LIGHTSETTINGS
{
	long type; // 0x0
	long decayRate; // 0x4
	float position[4]; // 0x8
	float direction[3]; // 0x18
	float colour[4]; // 0x24
	float coneAngleRad; // 0x34
	float penumbraRad; // 0x38
	float intensity; // 0x3C
	bool castsShadows; // 0x40
	bool emitSpecular; // 0x41
	bool emitDiffuse; // 0x42
};
struct AppMain::_SPECIAL_LIGHT_DATA
{
	bool isValid; // 0x0
	long settingId; // 0x4
	long numLights; // 0x8
	AppMain::_MODELROOM_LIGHTSETTINGS lightData[2]; // 0xC
};
struct AppMain::_SPECIAL_LIGHT_SETTINGS
{
	long numSettings; // 0x0
	AppMain::_SPECIAL_LIGHT_DATA specialLightData[4]; // 0x4
	AppMain::_MODEL_RIM_LIGHT_DATA specialRimLightAssetData[4]; // 0x254
	AppMain::_MODEL_EMISSION_DATA specialEmissionData[4]; // 0x2B4
	AppMain::_MODEL_SHADOW_DOT_RANGE_DATA specialShadowRangeData[4]; // 0x2D4
};
struct AppMain::AssetFileData
{
	long uiFileType; // 0x0
	unsigned long uiFilePathSize; // 0x4
	char * cFilePath; // 0x8
	long iFileTypeIndex; // 0x10
};
struct AppMain::AssetModelData
{
	unsigned long uiModelNo; // 0x0
	long iFigureNo; // 0x4
	long iMotionNo; // 0x8
	long iMotionCommonNo; // 0xC
	long iMotionFaceUp; // 0x10
	long iMotionFaceDown; // 0x14
	long iMotionParts; // 0x18
	long iMirrorNo; // 0x1C
	long iEffectNo; // 0x20
	long iTypeNo; // 0x24
	long iSecondaryNo; // 0x28
	long iCameraNo; // 0x2C
	long iParameterNo; // 0x30
	long iPriority; // 0x34
	long iParentModelNo; // 0x38
	long iParentBoneNo; // 0x3C
};
struct AppMain::AssetMaterialData
{
	char * pMaterialName; // 0x0
	unsigned long uiMaterialNo; // 0x8
	long iColorNo[4]; // 0xC
	long iNormalNo; // 0x1C
	long iBumpNo; // 0x20
	long iSpecularNo; // 0x24
	long iEmissiveNo; // 0x28
	long iReflectionNo; // 0x2C
	long iEnvironmentNo; // 0x30
	long iDisplacementNo; // 0x34
	long iTransparentNo; // 0x38
};
struct AppMain::AssetManager
{
	long iFormatVersion; // 0x0
	long iFileCount; // 0x4
	long iModelCount; // 0x8
	long * iMaterialCount; // 0x10
	char * * ppShaderFXFileName; // 0x18
	AppMain::AssetFileData * FileData; // 0x20
	AppMain::AssetModelData * ModelData; // 0x28
	AppMain::AssetMaterialData * * MaterialData; // 0x30
	OGLModel * * ppModel; // 0x38
	OGLFigure * * ppFigure; // 0x40
	OGLMotion * * ppMotion; // 0x48
	OGLTexture * * ppTexture; // 0x50
	OGLTexture * pExtTexture[9]; // 0x58
	OGLMirror * * ppMirror; // 0xA0
	OGLCamera * * ppCamera; // 0xA8
	OGLSecondary * * ppSecondary; // 0xB0
};