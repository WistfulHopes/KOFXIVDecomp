#pragma once

class OGLMaterial
{
public:
	unsigned char m_bNewFormat; // 0x0
	long m_cTextureIndex; // 0x4
	float m_Color[4]; // 0x8
	float m_alpha; // 0x18
	unsigned long m_uiBlendMode; // 0x1C
	unsigned long m_ucEffectFlg; // 0x20
	unsigned long m_usIndex; // 0x24
	unsigned long m_usIndexCount; // 0x28
	unsigned long * m_psIndex; // 0x30
	unsigned short * m_pssIndex; // 0x38
	OGLMaterialLight m_MaterialLight; // 0x40
	unsigned char m_bUseLightMaterial; // 0xE4
	unsigned char * m_cName; // 0xE8
	unsigned char m_cNameOrigin[64]; // 0xF0
	long m_cNameLength; // 0x130
	void * m_pfIndexBuffer; // 0x138
	long m_shaderType; // 0x140
	OGLLightManager * m_pLightManager; // 0x148
	float m_hairLength; // 0x150
	float m_hairforceExp; // 0x154
	float m_hairforceStrength; // 0x158
	long m_hairLayers; // 0x15C
	float m_FresnelPower; // 0x160
	float m_FresnelScale; // 0x164
	float m_FresnelBias; // 0x168
	float m_HemiLightSkyCol[3]; // 0x16C
	float m_HemiLightGroundCol[3]; // 0x178
	float m_HemiLightIntensity; // 0x184
	unsigned char m_UseDiffuseColour2; // 0x188
	float m_DiffuseColour2[3]; // 0x18C
	float m_SpecularPower; // 0x198
	float m_SpecularMultiplier; // 0x19C
	float m_NormalHeight; // 0x1A0
	float m_RimLightMin; // 0x1A4
	float m_RimLightMax; // 0x1A8
	float m_RimLightStrength; // 0x1AC
	float m_RimLightColour[3]; // 0x1B0
	float m_Pinching; // 0x1BC
	float m_ReflectionIntensity; // 0x1C0
	float m_ReflectionMultiplier; // 0x1C4
	float m_ReflectionColour[3]; // 0x1C8
	unsigned char m_useAnisotropicDirection; // 0x1D4
	float m_anisotropicSpread[2]; // 0x1D8
	long m_DiffuseFunction; // 0x1E0
	long m_SpecularFunction; // 0x1E4
	float m_multiUVLerpBlend; // 0x1E8
	float m_multiUVAdditionalMul; // 0x1EC
	float m_texturePan1[2]; // 0x1F0
	float m_texturePan2[2]; // 0x1F8
	float m_alphaPan[2]; // 0x200
	float m_emissiveAddition; // 0x208
	float m_emissiveMultiplier; // 0x20C
	float m_textureAddPercentage; // 0x210
	float m_vertexColMult; // 0x214
	float m_vertexColAdj[3]; // 0x218
	float m_vertexCol1Adj[3]; // 0x224
	float m_causticLerp; // 0x230
	unsigned char m_useTransparency; // 0x234
	long m_fillColourType; // 0x238
	float m_fillColour[4]; // 0x23C
	bool m_useMatcap; // 0x24C
	bool m_useMatcapMul; // 0x24D
	bool m_useEmissiveAlpha; // 0x24E
	float m_matcapVal; // 0x250
	float m_ambientLightMultiplier; // 0x254
	float m_TranslucencyMultiplier; // 0x258
	float m_TranslucencyDistortion; // 0x25C
	float m_TranslucencyPower; // 0x260
	float m_TranslucencyMinimum; // 0x264
	float m_TranslucencyOuterCol[3]; // 0x268
	float m_TranslucencyMiddleCol[3]; // 0x274
	float m_TranslucencyInnerCol[3]; // 0x280
	Vector4Unaligned m_shaderLightPosition[4]; // 0x28C
	Vector4Unaligned m_shaderLightDirection[4]; // 0x2CC
	Vector4Unaligned m_shaderLightDiffuseCol[4]; // 0x30C
	Vector4Unaligned m_shaderLightShadowData[4]; // 0x34C
	Vector4Unaligned m_shaderLightTypeAndSpotSettings[4]; // 0x38C
	Vector4Unaligned m_shaderLightIntensityAndDecayRate[4]; // 0x3CC
	Vector3Unaligned m_shaderLightEyePosition[4]; // 0x40C
	float * work0; // 0x440
	float * work1; // 0x448
	float * work2; // 0x450
	float * work3; // 0x458
	long m_iRenderNo; // 0x460
	OGLMaterial();
	~OGLMaterial();
	void initialize();
	void finalize();
	void clear();
	unsigned char load(OGLInputStream *);
	unsigned char loadFloat(OGLInputStream *);
	unsigned char loadMemcpy(OGLInputStream *);
	void copy(OGLMaterial *, long, long);
	void setShader(long);
	void setUseLightMaterial(unsigned char);
	void setLight(long, OGLLight *);
	void setProjectionLightByLightId(OGLMatrix *, long);
	void setProjectionLightByLightIndex(OGLMatrix *, long);
	void setViewTransLightByLightId(OGLMatrix *, long);
	void setViewTransLightByLightIndex(OGLMatrix *, long);
	void setScaleBiasLightMatrix(OGLMatrix *);
	void setFillColType(long);
	long getFillColType();
	void setFillColour(float, float, float, float);
	void setFillColour(float *);
	void prepShaderUniforms(const OGLLight *, const long, const unsigned char, const unsigned char, const unsigned char);
};
char * BSUtil::strCopy(const char * pStr, long len); // 0x1400C29C0
float BSUtil::directionToRadian(const OGLVec3 & v1, const OGLVec3 & v2); // 0x140208390
float BSUtil::toOGLAngle(float angle); // 0x1400A17C0