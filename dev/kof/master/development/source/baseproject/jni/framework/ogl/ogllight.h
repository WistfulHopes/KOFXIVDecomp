#pragma once

class OGLLight
{
private:
	long m_nId; // 0x0
	unsigned char m_bOn; // 0x4
	enum LightType
	{
		LIGHT_TYPE_POINT = 0,
		LIGHT_TYPE_DIR = 1,
		LIGHT_TYPE_SPOT = 2,
		LIGHT_TYPE_AMBIENT = 3,
		LIGHT_TYPE_END = 4,
	};
	enum DecayRate
	{
		DECAYRATE_NONE = 0,
		DECAYRATE_LINEAR = 1,
		DECAYRATE_QUAD = 2,
		DECAYRATE_CUBIC = 3,
	};
public:
	long m_nType; // 0x8
	OGLLight::LightType m_LightType; // 0xC
	OGLLight::DecayRate m_DecayRate; // 0x10
	float m_fAmbient[4]; // 0x14
	float m_fDiffuse[4]; // 0x24
	float m_fSpecular[4]; // 0x34
	float m_fPosition[4]; // 0x44
	float m_fLocalOffset[3]; // 0x54
	float m_fDirection[3]; // 0x60
	float m_fEyePosition[3]; // 0x6C
	float m_fExponent; // 0x78
	float m_fConeAngleRad; // 0x7C
	float m_fPenumbraRad; // 0x80
	float m_fShininess; // 0x84
	float m_fIntensity; // 0x88
	float m_fConstantAttenuation; // 0x8C
	float m_fLinearAttenuation; // 0x90
	float m_fQuadraticAttenuation; // 0x94
	unsigned char m_bCastsShadows; // 0x98
	unsigned char m_bEmitDiffuse; // 0x99
	unsigned char m_bEmitSpecular; // 0x9A
	OGLLight();
	~OGLLight();
	void initialize(long);
	void finalize();
	long getId();
	void set(OGLLight *);
	void setType(long);
	void setLightType(OGLLight::LightType);
	void setAmbient(float, float, float, float);
	void setAmbient(float *);
	void setDiffuse(float, float, float, float);
	void setDiffuse(float *);
	void setSpecular(float, float, float, float);
	void setSpecular(float *);
	void setPosition(float, float, float, float);
	void setPosition(float *);
	void setPosition(OGLVec4 *);
	void setLocalOffset(float, float, float);
	void setLocalOffset(float *);
	void setLocalOffset(OGLVec3 *);
	void setDirection(float, float, float);
	void setDirection(OGLVec3 *);
	void setEyePosition(float, float, float);
	void setEyePosition(OGLVec3 *);
	void setEyePosition(float *);
	void setExponent(float);
	void setConstantAttenuation(float);
	void setLinearAttenuation(float);
	void setQuadraticAttenuation(float);
	void setConeAngle(float);
	void setPenumbra(float);
	void setShininess(float);
	void setIntensity(float);
	void setCastsShadows(unsigned char);
	void setEmitSpecular(unsigned char);
	void setEmitDiffuse(unsigned char);
	void setDecayRate(long);
	void setOn(unsigned char);
	unsigned char getOn();
};
enum OGLLight::LightType
{
	LIGHT_TYPE_POINT = 0,
	LIGHT_TYPE_DIR = 1,
	LIGHT_TYPE_SPOT = 2,
	LIGHT_TYPE_AMBIENT = 3,
	LIGHT_TYPE_END = 4,
};
struct OGLLightNode
{
	OGLLight m_light; // 0x0
	OGLMatrix m_ProjLight; // 0x9C
	OGLMatrix m_ViewLight; // 0xDC
	OGLLightNode * next; // 0x120
	OGLLightNode();
	~OGLLightNode();
};
class OGLLightManager
{
private:
	long m_lightCount; // 0x0
	long m_activeLightCount; // 0x4
	long m_nextLightId; // 0x8
	float m_RimColour[3]; // 0xC
	float m_RimStart; // 0x18
	float m_RimEnd; // 0x1C
	float m_RimMultiplier; // 0x20
	float m_GroundShadowColour[3]; // 0x24
	float m_GroundShadowColIntensity; // 0x30
	float m_BodySelfShadowColour[3]; // 0x34
	float m_BodySelfShadowColIntensity; // 0x40
	float m_BodySelfShadowBias; // 0x44
	float m_BodySelfShadowMaxStrength; // 0x48
	float m_BodySelfShadowHardEdge; // 0x4C
	float m_BodySelfShadowVisibility; // 0x50
	float m_SkinSelfShadowColour[3]; // 0x54
	float m_SkinSelfShadowColIntensity; // 0x60
	float m_SkinSelfShadowBias; // 0x64
	float m_SkinSelfShadowMaxStrength; // 0x68
	float m_SkinSelfShadowHardEdge; // 0x6C
	float m_SkinSelfShadowVisibility; // 0x70
	float m_GroundShadowBias; // 0x74
	float m_GroundShadowMaxStrength; // 0x78
	float m_GroundShadowVisibility; // 0x7C
	long m_ShadowBlur; // 0x80
	unsigned char m_ShadowFXAA; // 0x84
	unsigned char m_ShadowUseSlope; // 0x85
	unsigned char m_moveLight; // 0x86
	unsigned char m_mirrorLight; // 0x87
	OGLMatrix m_ScaleBias; // 0x88
	OGLMatrix m_ShadowViewMatrix[2]; // 0xC8
	OGLMatrix m_ShadowProjMatrix[2]; // 0x148
	OGLMatrix m_ShadowViewProjMatrix[2]; // 0x1C8
	OGLMatrix m_ShadowViewProjBiasMatrix[2]; // 0x248
	OGLLightNode * m_pLightNodeList; // 0x2C8
public:
	OGLLightManager();
	~OGLLightManager();
	void clear();
	void initialize();
	void finalize();
	void reset();
	void copy(const OGLLightManager *);
	long initList();
	long addLight(const OGLLight *);
	long addLight();
	long getLightCount();
	long getActiveLightCount();
	OGLLight * getLightById(long);
	OGLLight * getLightByIndex(long);
	unsigned char setAllLightsOn(unsigned char);
	unsigned char setLightOnById(unsigned char, long);
	unsigned char setLightOnByIndex(unsigned char, long);
	unsigned char getLightOnById(long);
	unsigned char getLightOnByIndex(long);
	unsigned char deleteLightById(long);
	unsigned char deleteLightByIndex(long);
	unsigned char deleteAllLights();
	void setProjMatrixById(OGLMatrix *, long);
	void setProjMatrixByIndex(OGLMatrix *, long);
	void setViewMatrixById(OGLMatrix *, long);
	void setViewMatrixByIndex(OGLMatrix *, long);
	void setScaleBiasMatrix(OGLMatrix *);
	void setRimColour(float *);
	void setRimMultiplier(float);
	void setRimStart(float);
	void setRimEnd(float);
	float * getRimColour();
	float getRimMultiplier();
	float getRimStart();
	float getRimEnd();
	void setGroundShadowColour(float *);
	float * getGroundShadowColour();
	void setGroundShadowColIntensity(float);
	float getGroundShadowColIntensity();
	void setBodySelfShadowColour(float *);
	float * getBodySelfShadowColour();
	void setBodySelfShadowColIntensity(float);
	float getBodySelfShadowColIntensity();
	void setSkinSelfShadowColour(float *);
	float * getSkinSelfShadowColour();
	void setSkinSelfShadowColIntensity(float);
	float getSkinSelfShadowColIntensity();
	void setBodySelfShadowBias(float);
	float getBodySelfShadowBias();
	void setBodySelfShadowMaxStrength(float);
	float getBodySelfShadowMaxStrength();
	void setBodySelfShadowVisibility(float);
	float getBodySelfShadowVisibility();
	void setBodySelfShadowHardEdge(float);
	float getBodySelfShadowHardEdge();
	void setSkinSelfShadowBias(float);
	float getSkinSelfShadowBias();
	void setSkinSelfShadowMaxStrength(float);
	float getSkinSelfShadowMaxStrength();
	void setSkinSelfShadowVisibility(float);
	float getSkinSelfShadowVisibility();
	void setSkinSelfShadowHardEdge(float);
	float getSkinSelfShadowHardEdge();
	void setGroundShadowBias(float);
	float getGroundShadowBias();
	void setGroundShadowMaxStrength(float);
	float getGroundShadowMaxStrength();
	void setGroundShadowVisibility(float);
	float getGroundShadowVisibility();
	void setShadowBlur(long);
	long getShadowBlur();
	void setShadowFXAA(unsigned char);
	unsigned char getShadowFXAA();
	void setShadowUseSlope(unsigned char);
	unsigned char getShadowUseSlope();
	void setShadowProjMatrixByIndex(OGLMatrix *, long);
	void setShadowViewMatrixByIndex(OGLMatrix *, long);
	OGLMatrix * getShadowViewMatrixByIndex(long);
	OGLMatrix * getShadowProjMatrixByIndex(long);
	void setShadowViewProjMatrixByIndex(OGLMatrix *, long);
	void setShadowViewProjBiasMatrixByIndex(OGLMatrix *, long);
	OGLMatrix * getShadowViewProjMatrixByIndex(long);
	OGLMatrix * getShadowViewProjBiasMatrixByIndex(long);
	void calcShadowViewProjBiasMatrix(long);
	void setMoveLightFlg(unsigned char);
	unsigned char getMoveLightFlg();
	void setMirrorLightFlg(unsigned char);
	unsigned char getMirrorLightFlg();
	OGLMatrix * getProjMatrixById(long);
	OGLMatrix * getProjMatrixByIndex(long);
	OGLMatrix * getViewMatrixById(long);
	OGLMatrix * getViewMatrixByIndex(long);
	OGLMatrix * getScaleBiasMatrix();
};