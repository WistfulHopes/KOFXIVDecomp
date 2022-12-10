#pragma once

struct TknFileAnotherSettingTexture
{
	long modelUniqueID; // 0x0
	long materialIndex; // 0x4
	TknData::TextureType textureType; // 0x8
	long textureIndex; // 0xC
	const char * textureName; // 0x10
};
struct TknFileDataDesc
{
	long dataVersion; // 0x0
	long idMaxNumber; // 0x4
	long sceneCount; // 0x8
	TknDataScene * * pScenes; // 0x10
	long conditionCount; // 0x18
	TknDataEventConditions * * pConditions; // 0x20
	long modelCount; // 0x28
	TknDataModel * * pModels; // 0x30
	long uvAnimationCount; // 0x38
	TknDataUVAnimation * * pUVAnimations; // 0x40
	long motionCount; // 0x48
	TknDataMotion * * pMotions; // 0x50
	long objectCount; // 0x58
	TknDataObject * * pObjects; // 0x60
	long eventCount; // 0x68
	TknDataEvent * * pEvents; // 0x70
	long eventAnimationCount; // 0x78
	TknDataEventModelAnimation * * pEventAnimations; // 0x80
	long eventEffectAnimationCount; // 0x88
	TknDataEventEffectAnimation * * pEventEffectAnimations; // 0x90
	long eventTransCount; // 0x98
	TknDataEventTranslation * * pEventTranslations; // 0xA0
	long eventScriptCount; // 0xA8
	TknDataEventScript * * pEventScripts; // 0xB0
	long lightCount; // 0xB8
	TknDataLight * * pLights; // 0xC0
	long effectCount; // 0xC8
	TknDataEffect * * pEffects; // 0xD0
	long billboardCount; // 0xD8
	TknDataBillboard * * pBillboard; // 0xE0
	long eventBillboardAnimationCount; // 0xE8
	TknDataEventBillboardAnimation * * pEventBillboardAnimations; // 0xF0
	long eventSoundActionCount; // 0xF8
	TknDataEventSound * * pEventSoundActions; // 0x100
	bool bUseReflectionTexture; // 0x108
	const char * pReflectionTextureFilename; // 0x110
	const char * pStageModelFilename; // 0x118
	const char * * pModelFilenames; // 0x120
	long modelFilenameCount; // 0x128
	const char * * pMotionFilenames; // 0x130
	long motionFilenameCount; // 0x138
	const char * * pTextureFilenames; // 0x140
	long textureFilenameCount; // 0x148
	const char * * pEffectFilenames; // 0x150
	long effectFilenameCount; // 0x158
	TknFileAnotherSettingTexture * pAnotherSettingTextures; // 0x160
	long anotherSettingTextureCount; // 0x168
	TknFileDataDesc();
};