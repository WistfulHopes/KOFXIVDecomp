#pragma once

struct _OGLRenderModelFXShaderSettings
{
	enum <unnamed-enum-NORM_TEX_SETTING>
	{
		NORM_TEX_SETTING = 0,
		CAMVEC_TEX_SETTING = 1,
		TEX_SETTING_MAX = 2,
	};
	OGLVec2 fxTexCentre[2]; // 0x0
	float fxSpeed[2]; // 0x10
	_OGLRenderModelFXShaderSettings();
};
struct _OGLRenderShadLightAreaSettings
{
	enum <unnamed-enum-SHADOWLIGHT_NONE>
	{
		SHADOWLIGHT_NONE = 0,
		SHADOWLIGHT_SHADOW = 1,
		SHADOWLIGHT_LIGHT = 2,
		SHADOWLIGHT_MAX = 3,
	};
	long shadLightType; // 0x0
	float shadLightRadius; // 0x4
	OGLVec2 shadLightPos; // 0x8
	OGLVec2 shadLightMinMax; // 0x10
	_OGLRenderShadLightAreaSettings();
};
struct _OGLRenderScreenFilterSettings
{
	unsigned char FilterOn; // 0x0
	unsigned char BriSatConOn; // 0x1
	float Brightness; // 0x4
	float Saturation; // 0x8
	float Contrast; // 0xC
	unsigned char PSLevelsOn; // 0x10
	float PSLevelsInBlack; // 0x14
	float PSLevelsInWhite; // 0x18
	float PSLevelsInGamma; // 0x1C
	float PSLevelsOutBlack; // 0x20
	float PSLevelsOutWhite; // 0x24
	unsigned char GradientOn; // 0x28
	float GradientOverlayOpacity; // 0x2C
	float GradientStartColour[3]; // 0x30
	float GradientEndColour[3]; // 0x3C
};
struct _OGLRenderParameter
{
	OGLTexture * texture; // 0x0
	float * vertex; // 0x8
	float * texCoord; // 0x10
	unsigned long color; // 0x18
	unsigned long * index; // 0x20
	unsigned long type; // 0x28
	long count; // 0x2C
	long count2; // 0x30
};
struct _OGLRenderParameterStack
{
	long renderType; // 0x0
	OGLTexture * texture; // 0x8
	float * vertex; // 0x10
	float * texCoord; // 0x18
	unsigned long * index; // 0x20
	long count; // 0x28
	unsigned long color; // 0x2C
	unsigned long type; // 0x30
	float fogColor[4]; // 0x34
};
struct _OGLRenderTextures
{
	unsigned long m_RenderBufferID[10]; // 0x0
	unsigned long m_RenderBufferDepthID[10]; // 0x28
	OGLTexture m_FullScreenTexture[10]; // 0x50
	OGLTexture m_RenderDepthMapTexture[10]; // 0x370
	OGLTexture m_DepthMapForAlphaTexture[10]; // 0x690
	OGLTexture m_DepthMapTexture[10]; // 0x9B0
	OGLTexture m_FullScreenMaskTexture[10]; // 0xCD0
	OGLTexture m_CombinedMaskTexture[4]; // 0xFF0
	unsigned long m_ShadowRenderBufferID[5]; // 0x1130
	OGLTexture m_ShadowDepthMap[5]; // 0x1148
	unsigned long m_ShadowTransRenderBufferID[5]; // 0x12D8
	OGLTexture m_ShadowTransparencyMap[5]; // 0x12F0
	OGLTexture m_CharacterTexture[2]; // 0x1480
	OGLTexture m_RenderBufferBloomDepthMapTexture; // 0x1520
	OGLTexture m_BloomMapTexture; // 0x1570
	OGLTexture m_CharacterHighlights[2]; // 0x15C0
	OGLTexture m_BloomDepthMapTexture; // 0x1660
	OGLTexture m_BloomMapDownSampleTexture[3]; // 0x16B0
	OGLTexture m_ReflectionTexture[2]; // 0x17A0
	OGLTexture m_CharacterFrames[5][2]; // 0x1840
	OGLTexture m_CharacterFramesDepth[5][2]; // 0x1B60
	OGLTexture m_GameOutputTexture; // 0x1E80
	OGLTexture m_DownsampledTexture; // 0x1ED0
	OGLTexture m_ScreenBlurTexture; // 0x1F20
	OGLTexture m_TempTexture; // 0x1F70
	OGLTexture * m_ReflectionMapTexture; // 0x1FC0
	OGLTexture * m_EnvironmentMapTexture; // 0x1FC8
	OGLTexture m_MergedTexture[2]; // 0x1FD0
	OGLTexture m_MergedDepthTexture[2]; // 0x2070
	unsigned long m_BlendRenderBufferId[2]; // 0x2110
	OGLTexture m_BlendBufferTexture[2]; // 0x2118
	_OGLRenderTextures(_OGLRenderTextures &);
	_OGLRenderTextures(const _OGLRenderTextures &);
	_OGLRenderTextures();
	~_OGLRenderTextures();
	_OGLRenderTextures & operator=(_OGLRenderTextures &);
	_OGLRenderTextures & operator=(const _OGLRenderTextures &);
};
class OGLRender
{
public:
	long m_Width; // 0x0
	long m_Height; // 0x4
	float m_RealWidth; // 0x8
	float m_RealHeight; // 0xC
	unsigned char m_bWorldSetting; // 0x10
	OGLMatrix m_Proj; // 0x14
	OGLMatrix m_OrthoProj; // 0x54
	OGLMatrix m_View; // 0x94
	OGLMatrix m_ViewProj; // 0xD4
	OGLMatrix m_PrevViewProj; // 0x114
	OGLMatrix m_InvView; // 0x154
	OGLMatrix m_invModelViewProj; // 0x194
	OGLMatrix m_prevView; // 0x1D4
	OGLFog m_GroundFog; // 0x214
	OGLFog m_SkyFog; // 0x294
	float m_LightningCol[4]; // 0x314
	OGLLightManager m_WorldLightManager; // 0x328
	OGLMaterialLight m_MaterialLight; // 0x5F8
	unsigned long m_RenderFlg; // 0x69C
	long m_RenderStackNo; // 0x6A0
	unsigned long m_sModelStackCount[8]; // 0x6A4
	unsigned long m_sModelStackMax[8]; // 0x6C4
	OGLModelStackData * * m_pModelStack[8]; // 0x6E8
	float vWork0[4]; // 0x728
	float vWork1[4]; // 0x738
	float vWork2[4]; // 0x748
	float vColor[4]; // 0x758
	OGLTexture * m_CRITex[4]; // 0x768
	OGLShader * m_ShaderTbl[65535]; // 0x788
	OGLShader * m_ShaderFXTbl[12288]; // 0x80780
	OGLShader * m_ComputeShaderTbl[51]; // 0x98780
	void ensureShader(const char *);
	void unloadShader(const char *);
	std::map<AgHash,std::vector<OGLShader *,std::allocator<OGLShader *> >,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > > > m_shadersToLoad; // 0x98918
	long m_CustomShaderNo2D; // 0x98928
	_OGLRenderParameter m_ParameterWork; // 0x98930
	void(*m_pRenderFunc)(OGLRender *, OGLShader *, OGLModelStackData *, OGLModel *)[8]; // 0x98968
	void(*m_pRenderFunc2D)(OGLRender *, OGLShader *, long)[8]; // 0x989A8
	OGLShader * m_pCustomShader[8]; // 0x989E8
	OGLShader * m_pCustomShader2D[8]; // 0x98A28
	void(*m_pEffectRenderFunc)(OGLRender *, OGLShader *, OGLModelStackData *, OGLModel *)[8]; // 0x98A68
	OGLShader * m_pEffectShader[14400]; // 0x98AA8
	OGLShader * m_pEffectCSShader[12]; // 0xB4CA8
	OGLShader * m_pEffectPPShader[6]; // 0xB4D08
	float m_dummyFog[4]; // 0xB4D38
	long m_iRenderStackCount2D; // 0xB4D48
	_OGLRenderParameterStack m_PreDrawParameter[512]; // 0xB4D50
	OGLRender(const OGLRender &);
	OGLRender(long);
	OGLRender();
	~OGLRender();
	void setConfig(long, long, float, float, unsigned char *);
	void setConfigExtra(unsigned char *);
	void setScreenSize(long, long, float, float);
	void initialize(long);
	void finalize();
	void begin();
	void end();
	void unuseShader();
	void clear(float, float, float, float);
	void clear(long);
	void clear();
	void clearColor();
	void clearDepth();
	void setViewport();
	void setViewport(long, long, long, long);
	void setPerspectiveFov(float, float, float, float, float);
	void setOrtho(float, float, float, float, float, float);
	void setOrtho2(float, float, float, float, float, float);
	void setOrthoZ(float, float, float, float, float);
	void setProjection(OGLMatrix *);
	void setViewTrans(OGLMatrix *);
	void setInvViewTrans(OGLMatrix *);
	void setRenderFlg(unsigned long);
	void setCustomShaderNo2D(long);
	void resetScissor();
	void setScissor(long, long, long, long);
	void resetLight();
	void resetLight(long);
	void setWorldLight(long, OGLLight *);
	void setLightMaterial(OGLMaterialLight *);
	void resetFog();
	void setGroundFog(OGLFog *);
	void setGroundFog(long, float *, float, float);
	void setGroundUpFog(float, float, float, float, float, float *);
	void setGroundDownFog(float, float, float, float, float, float *);
	void setGroundFogOn(unsigned char);
	void setGroundFogCalcType(OGLFog::CALC_TYPE);
	void calcGroundFogShaderUniforms(float *, long, float);
	void setSkyUpFog(float, float, float, float, float, float *);
	void setSkyDownFog(float, float, float, float, float, float *);
	void setSkyFogOn(unsigned char);
	void setSkyFogCalcType(OGLFog::CALC_TYPE);
	void calcSkyFogShaderUniforms(float *, long, float);
	void setLightningColour(float, float, float, float);
	void setLightningColour(float *);
	void setLightningOn(unsigned char);
	void clearStack(long);
	void addStack(long);
	void addStack(OGLModel *, float *, long, long, OGLVec3 *);
	void addStack(OGLModel *, float, long, long, OGLVec3 *);
	void drawStack(unsigned char, unsigned char);
	void drawStackPreExe(unsigned char, unsigned char);
	void changeDrawStack(long);
	long getDrawStackNo();
	OGLModelStackData * getStack();
	void setReflectionMaps(OGLTexture *, OGLTexture *);
	void setModelFXShaderSettings(long, long, OGLVec2 &, float &);
	void setBkgndShadLightAreaSettings(long, float, OGLVec2 &, float, float);
	void setBkgndScreenFilterSettings(_OGLRenderScreenFilterSettings &);
	_OGLRenderTextures m_renderTextures; // 0xBDD50
	unsigned char m_NormalRenderPassFlg; // 0xBFF08
	unsigned char m_NormalMapFlg; // 0xBFF09
	unsigned char m_PosMapFlg; // 0xBFF0A
	unsigned char m_MaskPassFlg; // 0xBFF0B
	unsigned char m_DepthPassFlg; // 0xBFF0C
	unsigned char m_BloomPassFlg; // 0xBFF0D
	unsigned char m_ShadowMapFlg; // 0xBFF0E
	long m_ShadowCastingLight; // 0xBFF10
	unsigned char m_bDoShadowPass; // 0xBFF14
	unsigned char m_bDoBloomPass; // 0xBFF15
	unsigned char m_bDoDOFPass; // 0xBFF16
	float m_fBloomStrength; // 0xBFF18
	static float m_maxAnisotropy; // 0xFFFFFFFFFFFFFFFF
	_OGLRenderModelFXShaderSettings m_modelFXShaderSettings[3]; // 0xBFF1C
	_OGLRenderShadLightAreaSettings m_BkgndShadLightAreaSettings; // 0xBFF64
	_OGLRenderScreenFilterSettings m_BkgndScreenFilterSettings; // 0xBFF7C
	float m_fOrthoProjRatio; // 0xBFFC4
	unsigned char shadowOnlyLighting(const OGLMaterial *, long &, long &);
	unsigned char getDoShadowPass();
	void setDoShadowPass(unsigned char);
	unsigned char getDoBloomPass();
	void setDoBloomPass(unsigned char);
	float getBloomStrength();
	void setBloomStrength(float);
	unsigned char getDoDOFPass();
	void setDoDOFPass(unsigned char);
	void setupShaderVariables(OGLMatrix &, OGLMatrix &, OGLMatrix &, OGLModel *, OGLFigure *, OGLShader *, OGLModelStackData *, long, long);
	void setShader(long &, OGLModel *, OGLFigure *, OGLModelStackData *, long *, long);
	void setNormalShader(long &, OGLModel *, OGLFigure *, OGLModelStackData *, long *, long);
	void setFXShader(long &, OGLModel *, OGLFigure *, OGLModelStackData *, long *, long);
	void renderWireFrame(OGLModel *, OGLShader *, OGLModelStackData *, long);
	void enableShadowMap(unsigned char);
	void drawShadowMap();
	void setWorldProjectionLightByLightId(OGLMatrix *, long);
	void setWorldProjectionLightByLightIndex(OGLMatrix *, long);
	void setWorldViewTransLightByLightId(OGLMatrix *, long);
	void setWorldViewTransLightByLightIndex(OGLMatrix *, long);
	void setWorldScaleBiasLightMatrix(OGLMatrix *);
	void setShadowViewByIndex(OGLMatrix *, long);
	void setShadowProjByIndex(OGLMatrix *, long);
	void calcShadowViewProjBiasMatrix(long);
	void setOrthoProjRatio(float);
	float getOrthoProjRatio();
	static float getMaxAnisotropy();
	void drawImage(OGLTexture *, float *, float *, unsigned long, unsigned long *, unsigned long, long, long);
	void drawImage(OGLTexture *, float *, float *, unsigned long, unsigned long, long);
	void drawImage(OGLTexture *, MeshVertexInfo2D *, unsigned long, unsigned long, long);
	void drawImage(OGLTexture *, float, float, float, float, float, float, float, unsigned long);
	void drawPoly(float *, unsigned long, unsigned long, long);
	void drawPolyImage(OGLTexture *, float *, float *, float *, unsigned long, long);
	long selectEffectShader(long);
	void setEffectConstant(BlendProjData *, EffectConstantData *, long);
	void setEffectAttribArray(EffectMeshData *);
	void setEffectAttribArrayFigure(EffectMeshData *);
	void setEffectAttribArrayInstancing(EffectMeshData *);
	void setEffectAttribArrayGPUParticleInstancing(EffectMeshData *);
	void setEffectBindTextrue(EffectTextureData *, long);
	void drawEffectIndex(BlendProjData *, EffectTextureData *, EffectMeshData *, EffectConstantData *);
	void drawEffectIndexUVAnime(BlendProjData *, EffectTextureData *, EffectMeshData *, EffectConstantData *);
	void drawEffectIndexInstancesUVAnime(BlendProjData *, EffectTextureData *, EffectMeshData *, EffectConstantData *);
	void drawEffectIndexInstancesGpuParticle(BlendProjData *, EffectTextureData *, EffectMeshData *, EffectConstantData *);
	void clearPreStack();
	void drawMovie(OGLTexture *, OGLTexture *, OGLTexture *, MeshVertexInfo2D *, unsigned long, unsigned long, long);
	void drawCapture(OGLTexture *, MeshVertexInfo2D *, unsigned long, unsigned long, long);
	void drawTexture(unsigned long, MeshVertexInfo2D *, unsigned long, unsigned long, long);
	void preDrawImage(OGLTexture *, float *, float *, unsigned long, unsigned long *, unsigned long, long, long, long);
	void deferredDrawImage();
	_OGLRenderParameterStack * getPreStack();
	void drawImageFont(OGLTexture *, float *, float *, unsigned long, unsigned long, long);
	void setRenderMode(long, long);
	void drawLine(float, float, float, float, float, float, unsigned long);
	void drawRect(float, float, float, float, float, unsigned long);
	void drawRect2(float, float, float, float, float, float, unsigned long);
	void fillRect(float, float, float, float, float, unsigned long);
	void drawImage3D(OGLTexture *, float, float, float, float, float, float, float, float, float, long);
	void setDataPos(OGLVec3 *, OGLVec3 *, OGLVec3 *, OGLMatrix *);
	void Project(float *, float *);
	void UnProject(float *, float *);
	void drawBone(OGLModel *, unsigned long, unsigned char);
	void drawOctahedron(OGLVec3 *, OGLVec3 *, OGLShader *, unsigned long);
	void drawOctahedronFill(OGLVec3 *, OGLVec3 *, OGLShader *, unsigned long);
	void drawBoneWire(long, OGLModel *, unsigned long);
	long pointTriangle(OGLVec3 *, OGLVec3 *, OGLVec3 *, OGLVec3 *, OGLVec3 *);
	long linePlane(OGLVec3 *, OGLVec3 *, OGLVec3 *, long, OGLVec3 *);
	void * allocateGarlicStack(long, long);
	long getDrawStackMemoryIndex();
	void setRenderSize(long);
	void resetRenderTargets();
	OGLRender & operator=(const OGLRender &);
};
class std::map<AgHash,std::vector<OGLShader *,std::allocator<OGLShader *> >,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > > > :
	std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *,std::allocator<OGLShader *> >,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > >,0> >
{
	class _Myt;
	class _Mybase;
	class key_type;
	class mapped_type;
	struct key_compare;
	class value_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > pointer;
	typedef const std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > const_pointer;
	typedef std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > reference;
	typedef const std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<AgHash,std::vector<OGLShader *,std::allocator<OGLShader *> >,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > > >(std::initializer_list<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > >, const std::less<AgHash> &, const std::allocator<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > > &);
	map<AgHash,std::vector<OGLShader *,std::allocator<OGLShader *> >,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > > >(std::initializer_list<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > >, const std::less<AgHash> &);
	map<AgHash,std::vector<OGLShader *,std::allocator<OGLShader *> >,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > > >(std::initializer_list<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > >);
	map<AgHash,std::vector<OGLShader *,std::allocator<OGLShader *> >,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > > >(std::map<AgHash,std::vector<OGLShader *,std::allocator<OGLShader *> >,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > > > &, const std::allocator<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > > &);
	map<AgHash,std::vector<OGLShader *,std::allocator<OGLShader *> >,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > > >(std::map<AgHash,std::vector<OGLShader *,std::allocator<OGLShader *> >,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > > > &);
	map<AgHash,std::vector<OGLShader *,std::allocator<OGLShader *> >,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > > >(const std::less<AgHash> &, const std::allocator<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > > &);
	map<AgHash,std::vector<OGLShader *,std::allocator<OGLShader *> >,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > > >(const std::less<AgHash> &);
	map<AgHash,std::vector<OGLShader *,std::allocator<OGLShader *> >,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > > >(const std::map<AgHash,std::vector<OGLShader *,std::allocator<OGLShader *> >,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > > > &, const std::allocator<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > > &);
	map<AgHash,std::vector<OGLShader *,std::allocator<OGLShader *> >,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > > >(const std::map<AgHash,std::vector<OGLShader *,std::allocator<OGLShader *> >,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > > > &);
	map<AgHash,std::vector<OGLShader *,std::allocator<OGLShader *> >,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > > >(const std::allocator<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > > &);
	map<AgHash,std::vector<OGLShader *,std::allocator<OGLShader *> >,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > > >();
	std::map<AgHash,std::vector<OGLShader *,std::allocator<OGLShader *> >,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > > > & operator=(std::initializer_list<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > >);
	std::map<AgHash,std::vector<OGLShader *,std::allocator<OGLShader *> >,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > > > & operator=(std::map<AgHash,std::vector<OGLShader *,std::allocator<OGLShader *> >,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > > > &);
	std::map<AgHash,std::vector<OGLShader *,std::allocator<OGLShader *> >,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > > > & operator=(const std::map<AgHash,std::vector<OGLShader *,std::allocator<OGLShader *> >,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > > > &);
	std::vector<OGLShader *,std::allocator<OGLShader *> > & operator[](const AgHash &);
	std::vector<OGLShader *,std::allocator<OGLShader *> > & operator[](AgHash &);
	void swap(std::map<AgHash,std::vector<OGLShader *,std::allocator<OGLShader *> >,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > > > &);
	const std::vector<OGLShader *,std::allocator<OGLShader *> > & at(const AgHash &);
	std::vector<OGLShader *,std::allocator<OGLShader *> > & at(const AgHash &);
	~map<AgHash,std::vector<OGLShader *,std::allocator<OGLShader *> >,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader *,std::allocator<OGLShader *> > > > >();
};
class std::vector<OGLShader *,std::allocator<OGLShader *> > :
	std::_Vector_alloc<std::_Vec_base_types<OGLShader *,std::allocator<OGLShader *> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	typedef OGLShader value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef OGLShader * pointer;
	typedef OGLShader * const_pointer;
	typedef OGLShader * reference;
	typedef OGLShader * const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<OGLShader *,std::allocator<OGLShader *> >(std::initializer_list<OGLShader *>, const std::allocator<OGLShader *> &);
	vector<OGLShader *,std::allocator<OGLShader *> >(std::vector<OGLShader *,std::allocator<OGLShader *> > &, const std::allocator<OGLShader *> &);
	vector<OGLShader *,std::allocator<OGLShader *> >(std::vector<OGLShader *,std::allocator<OGLShader *> > &);
	vector<OGLShader *,std::allocator<OGLShader *> >(const std::vector<OGLShader *,std::allocator<OGLShader *> > &, const std::allocator<OGLShader *> &);
	vector<OGLShader *,std::allocator<OGLShader *> >(const std::vector<OGLShader *,std::allocator<OGLShader *> > &);
	vector<OGLShader *,std::allocator<OGLShader *> >(unsigned long long, OGLShader * &, const std::allocator<OGLShader *> &);
	vector<OGLShader *,std::allocator<OGLShader *> >(unsigned long long, OGLShader * &);
	vector<OGLShader *,std::allocator<OGLShader *> >(unsigned long long);
	vector<OGLShader *,std::allocator<OGLShader *> >(const std::allocator<OGLShader *> &);
	vector<OGLShader *,std::allocator<OGLShader *> >();
	void _Construct_n(unsigned long long, OGLShader * *);
	std::vector<OGLShader *,std::allocator<OGLShader *> > & operator=(const std::vector<OGLShader *,std::allocator<OGLShader *> > &);
	std::vector<OGLShader *,std::allocator<OGLShader *> > & operator=(std::initializer_list<OGLShader *>);
	std::vector<OGLShader *,std::allocator<OGLShader *> > & operator=(std::vector<OGLShader *,std::allocator<OGLShader *> > &);
	void _Assign_rv(std::vector<OGLShader *,std::allocator<OGLShader *> > &);
	void _Assign_rv(std::vector<OGLShader *,std::allocator<OGLShader *> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<OGLShader *,std::allocator<OGLShader *> > &, std::integral_constant<bool,1>);
	void push_back(OGLShader * &);
	void push_back(OGLShader * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<OGLShader *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<OGLShader *> > >, unsigned long long, OGLShader * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<OGLShader *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<OGLShader *> > >, OGLShader * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<OGLShader *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<OGLShader *> > >, std::initializer_list<OGLShader *>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<OGLShader *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<OGLShader *> > >, OGLShader * &);
	void assign(unsigned long long, OGLShader * &);
	void assign(std::initializer_list<OGLShader *>);
	~vector<OGLShader *,std::allocator<OGLShader *> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<OGLShader *> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<OGLShader *> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<OGLShader *> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<OGLShader *> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<OGLShader *> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<OGLShader *> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<OGLShader *> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<OGLShader *> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<OGLShader *> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<OGLShader *> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<OGLShader *> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<OGLShader *> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<OGLShader *> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<OGLShader *> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, OGLShader * &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<OGLShader *> get_allocator();
	OGLShader * & at(unsigned long long);
	OGLShader * & at(unsigned long long);
	OGLShader * & operator[](unsigned long long);
	OGLShader * & operator[](unsigned long long);
	OGLShader * * data();
	OGLShader * * data();
	OGLShader * & front();
	OGLShader * & front();
	OGLShader * & back();
	OGLShader * & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<OGLShader *> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<OGLShader *> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<OGLShader *> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<OGLShader *> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<OGLShader *> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<OGLShader *,std::allocator<OGLShader *> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(OGLShader * *, OGLShader * *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(OGLShader * *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<OGLShader *> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<OGLShader *> > >, unsigned long long, OGLShader * &);
	OGLShader * * _Ufill(OGLShader * *, unsigned long long, OGLShader * *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(OGLShader * *, OGLShader * *);
};