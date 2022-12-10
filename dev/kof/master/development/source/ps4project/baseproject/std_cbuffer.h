#pragma once

struct ConstantBase
{
	Matrix4Unaligned u_ModelView; // 0x0
	Matrix4Unaligned u_ModelViewProj; // 0x40
	Matrix4Unaligned u_ModelViewOrthoProj; // 0x80
	Vector4Unaligned u_ModelProjPos; // 0xC0
	Vector4Unaligned u_ModelOrthoPos; // 0xD0
	Vector4Unaligned u_color; // 0xE0
	Vector2Unaligned u_constantBaseFiller1; // 0xF0
	float u_orthoProjRatio; // 0xF8
	float u_zOffset; // 0xFC
	Vector4Unaligned u_projNormAngCosSinRimCosRimSin; // 0x100
	Vector4Unaligned u_eyePosition; // 0x110
	Vector4Unaligned u_rimLightColour; // 0x120
	Vector2Unaligned u_screenSize; // 0x130
};
struct ConstantOption
{
	Vector4Unaligned u_materialDiffuse; // 0x0
	Vector4Unaligned u_materialSpecular; // 0x10
	Vector4Unaligned u_materialEmission; // 0x20
	Vector4Unaligned u_materialReflection; // 0x30
	Matrix4Unaligned u_invModelView; // 0x40
	Vector2Unaligned u_texture; // 0x80
	Vector2Unaligned u_texture1; // 0x88
	Vector4Unaligned u_groundFogUpSettings; // 0x90
	Vector4Unaligned u_groundFogDownSettings; // 0xA0
	Vector4Unaligned u_skyFogUpSettings; // 0xB0
	Vector4Unaligned u_skyFogDownSettings; // 0xC0
	Vector4Unaligned u_groundFogCalcSettings; // 0xD0
	Vector4Unaligned u_skyFogCalcSettings; // 0xE0
	Vector4Unaligned u_fogStrengthGroundUpDownSkyUpDown; // 0xF0
	Vector4Unaligned u_groundFogUpColour; // 0x100
	Vector4Unaligned u_groundFogDownColour; // 0x110
	Vector4Unaligned u_skyFogUpColour; // 0x120
	Vector4Unaligned u_skyFogDownColour; // 0x130
	Vector2Unaligned u_fogGroundSkyCalcType; // 0x140
	Vector2Unaligned u_fogCalcSettingsExtra; // 0x148
	Vector2Unaligned u_fogGroundSkyOn; // 0x150
	Vector2Unaligned u_rimLightMinMax; // 0x158
	Vector3Unaligned u_hemiLightUpperColour; // 0x160
	float u_ambientLightMultiplier; // 0x16C
	Vector4Unaligned u_hemiLightLowerColour; // 0x170
	Vector4Unaligned u_translucencySettings; // 0x180
	Vector4Unaligned u_translucencyOuterCol; // 0x190
	Vector4Unaligned u_translucencyMiddleCol; // 0x1A0
	Vector4Unaligned u_translucencyInnerCol; // 0x1B0
	Vector2Unaligned u_anisotropicSpread; // 0x1C0
	float u_multiUVLerpBlend; // 0x1C8
	float u_reflectionMultiplier; // 0x1CC
	Vector2Unaligned u_nearFarPlanes; // 0x1D0
	float u_matcapVal; // 0x1D8
	float u_constOptFiller3; // 0x1DC
	Vector4Unaligned u_modelEffectNormSettings; // 0x1E0
	Vector4Unaligned u_modelEffectCamSettings; // 0x1F0
	Vector4Unaligned u_vertexColAdj; // 0x200
	Vector4Unaligned u_fillColour; // 0x210
	Vector4Unaligned u_extraEmissionTint; // 0x220
	Vector4Unaligned u_shadowLightAreaPosMinMax; // 0x230
	long u_shadowLightAreaType; // 0x240
	float u_shadowLightAreaRadius; // 0x244
	float u_specularPower; // 0x248
	float u_textureAddPercentage; // 0x24C
	unsigned long u_blendProjection; // 0x250
	long u_fillColourType; // 0x254
	float u_normalHeight; // 0x258
	float u_specularMultiplier; // 0x25C
	float u_elapsedTime; // 0x260
	float u_causticLerp; // 0x264
	float u_reflectionPinching; // 0x268
	unsigned long u_constOptState; // 0x26C
	Vector2Unaligned u_emissiveAddMul; // 0x270
	float u_materialOpacity; // 0x278
	float u_constOptFiller1; // 0x27C
};
struct ConstantLight
{
	Vector4Unaligned u_lightDiffuse[4]; // 0x0
	Vector4Unaligned u_lightPosition[4]; // 0x40
	Vector4Unaligned u_lightDirection[4]; // 0x80
	Vector4Unaligned u_lightCastsShadows[4]; // 0xC0
	Vector4Unaligned u_lightTypeAndSpotSettings[4]; // 0x100
	Vector4Unaligned u_lightIntensityAndDecayRate[4]; // 0x140
	Vector4Unaligned u_lightShadowColour; // 0x180
	unsigned long u_noLighting; // 0x190
	float u_lightCount; // 0x194
	float u_lightShadowMinVisibility; // 0x198
	float u_lightHardShadowEdge; // 0x19C
	Vector4Unaligned u_lightShadowBiasMaxStr; // 0x1A0
	Matrix4Unaligned u_ShadowLightViewProj; // 0x1B0
	Matrix4Unaligned u_ShadowLightViewProjBias[2]; // 0x1F0
	Vector2Unaligned u_lightShadowDotRangeMinMax; // 0x270
	float u_postAddDiffuseFactor; // 0x278
	float u_postAddLightDiffuseFactor; // 0x27C
};
struct ConstantPostFX
{
	float u_postfxBlurStrength; // 0x0
	unsigned long u_postfxBlurSize; // 0x4
	float u_postfxOpacity; // 0x8
	float u_postfxBlendFactor; // 0xC
	Vector2Unaligned u_postfxPixelSize; // 0x10
	Vector2Unaligned u_postfxNearFar; // 0x18
	Vector4Unaligned u_postfxGodRaySettings; // 0x20
	Vector4Unaligned u_postfxDOFNearFarStr; // 0x30
	Vector4Unaligned u_postfxBloomSatIntBaseSatInt; // 0x40
	float u_postfxElapsedTime; // 0x50
	float u_postfxWaterTranslation; // 0x54
	float u_postfxWaterReflectScale; // 0x58
	long u_postfxWaterUseReflection; // 0x5C
	Vector3Unaligned u_postfxWaterTint; // 0x60
	long u_postfxFillColourType; // 0x6C
	Vector2Unaligned u_postfxSunPos; // 0x70
	Vector2Unaligned u_postfxHighlightThresholdBrightness; // 0x78
	Vector4Unaligned u_postfxWindDir; // 0x80
	Vector4Unaligned u_postfxFillColour; // 0x90
	Vector4Unaligned u_postfxFXAA; // 0xA0
	Vector4Unaligned u_postfxHazeFilter; // 0xB0
};
struct ConstantScreenFilter
{
	unsigned long u_screenFilterOn; // 0x0
	unsigned long u_screenFilterBriSatConOn; // 0x4
	unsigned long u_screenFilterPSLevelsOn; // 0x8
	unsigned long u_screenFilterGradientOn; // 0xC
	Vector3Unaligned u_screenFilterBriSatCon; // 0x10
	float u_screenFilterPSLevelsInGamma; // 0x1C
	Vector2Unaligned u_screenFilterPSLevelsInBlackWhite; // 0x20
	Vector2Unaligned u_screenFilterPSLevelsOutBlackWhite; // 0x28
	Vector4Unaligned u_screenFilterGradientStartCol; // 0x30
	Vector4Unaligned u_screenFilterGradientEndCol; // 0x40
	Vector4Unaligned u_monitorFilterBriSatCon_ScreenFilterOverlayOpacity; // 0x50
	Vector4Unaligned u_monitorFilterMidTonesColShift; // 0x60
};
struct ConstantEffect
{
	Vector2Unaligned u_effectColor1UvSize; // 0x0
	Vector2Unaligned u_effectColor2UvSize; // 0x8
	Vector2Unaligned u_effectAlpha1UvSize; // 0x10
	Vector2Unaligned u_effectAlpha2UvSize; // 0x18
	Vector2Unaligned u_effectNormalUvSize; // 0x20
	Vector2Unaligned u_effectUvAnimeNum; // 0x28
	Vector4Unaligned u_effectColor1UvAnimeParam; // 0x30
	Vector4Unaligned u_effectColor2UvAnimeParam; // 0x40
	Vector4Unaligned u_effectAlpha1UvAnimeParam; // 0x50
	Vector4Unaligned u_effectAlpha2UvAnimeParam; // 0x60
	Vector4Unaligned u_effectNormalUvAnimeParam; // 0x70
	Vector2Unaligned u_effectDistortionParam; // 0x80
	float u_effectZOffset; // 0x88
	float u_effectFalloffParam; // 0x8C
	Vector4Unaligned u_effectBlurUV; // 0x90
	Vector4Unaligned u_effectFillColour; // 0xA0
	float u_effectNear; // 0xB0
	float u_effectFar; // 0xB4
	unsigned long u_effectBlendProjection; // 0xB8
	float u_effectProjNormAngLightOffset; // 0xBC
	Vector3Unaligned u_effectCameraPos; // 0xC0
	float u_effectOrthoProjRatio; // 0xCC
	Vector3Unaligned u_effectPosOffset; // 0xD0
	float u_effectActZOffset; // 0xDC
	Vector4Unaligned u_effectLightDiffuse[1]; // 0xE0
	Vector4Unaligned u_effectLightPosition[1]; // 0xF0
	Vector4Unaligned u_effectLightAttenuation[1]; // 0x100
	Vector4Unaligned u_effectLightIntensity[1]; // 0x110
	float u_effectProjNormAngRimlightOffset; // 0x120
	float u_effectBufferScale; // 0x124
	float u_effectInfluenceOfLight; // 0x128
	float u_effectIgnoreUvMirror; // 0x12C
};
struct ConstantBone
{
	Vector4Unaligned u_curFrameBoneMatrix[984]; // 0x0
};
struct ConstantStage
{
	Vector2Unaligned u_uvScroll; // 0x0
	Vector2Unaligned u_uvCenter; // 0x8
	Vector2Unaligned u_uvRotate; // 0x10
	Vector2Unaligned u_uvScroll1; // 0x18
	Vector2Unaligned u_uvCenter1; // 0x20
	Vector2Unaligned u_uvRotate1; // 0x28
	Matrix4Unaligned u_stageGroupObjectTrans[40]; // 0x30
};
struct ConstantExtra
{
	Vector2Unaligned u_waterfallAlphaPan; // 0x0
	float u_opacity; // 0x8
	float u_extraFiller; // 0xC
	Vector2Unaligned u_textureUVPan1; // 0x10
	Vector2Unaligned u_textureUVPan2; // 0x18
	Vector4Unaligned u_vertexCol1Adj; // 0x20
	Vector4Unaligned u_materialDiffuse2; // 0x30
};