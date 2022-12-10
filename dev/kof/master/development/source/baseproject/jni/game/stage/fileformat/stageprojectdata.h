#pragma once

class StageProjectData
{
	enum STAGEPROJ_ERR_ID
	{
		STAGEPROJ_ERR_NONE = 0,
		STAGEPROJ_ERR_SUCCESS = 1,
		STAGEPROJ_ERR_FAILED = 2,
		STAGEPROJ_ERR_OPEN = 3,
		STAGEPROJ_ERR_FILE_HEADER = 4,
		STAGEPROJ_ERR_FILE_ID = 5,
		STAGEPROJ_ERR_DATA_HEADER = 6,
		STAGEPROJ_ERR_NO_DATA = 7,
		STAGEPROJ_ERR_NO_HEAP = 8,
		STAGEPROJ_ERR_CHARA_DATA = 9,
	};
	struct StageSoundReverb;
	enum SoundType
	{
		SOUNDTYPE_NONE = 0,
		SOUNDTYPE_GAYA = 1,
		SOUNDTYPE_BOUND = 2,
		SOUNDTYPE_LANDING = 3,
		SOUNDTYPE_DASH_LEFT = 4,
		SOUNDTYPE_DASH_RIGHT = 5,
		SOUNDTYPE_WALK_LEFT = 6,
		SOUNDTYPE_WALK_RIGHT = 7,
	};
	struct DataHeader;
	struct StageSpCharaLightData;
	struct StageSound;
	struct StageData;
private:
	StageProjectData::STAGEPROJ_ERR_ID m_readStatus; // 0x0
	StageProjectData::DataHeader m_fileHeader; // 0x8
	long m_stageCount; // 0x18
	StageProjectData::StageData * m_pDatas; // 0x20
	CHARACTER_NO * m_pCameraLightCharacterIDs; // 0x28
	long m_cameraLightCharacterIDCount; // 0x30
	char * m_pProjectFileDir; // 0x38
public:
	StageProjectData();
private:
	StageProjectData(const StageProjectData &);
	StageProjectData & operator=(const StageProjectData &);
public:
	~StageProjectData();
	void InitData();
	long GetStageCount();
	bool IsEnableStageData(STAGE_ID);
	long GetStageID(const char *);
	const char * GetStageID(STAGE_ID);
	bool GetStageName(STAGE_ID, char *, long);
	const char * GetStageName(STAGE_ID);
	bool GetHostTeamNo(STAGE_ID, long *, long *, long *);
	bool IsHostTeamCharacter(STAGE_ID, CHARACTER_NO);
	bool IsEnableGimmickFile(STAGE_ID);
	bool GetStageModelFilePath(STAGE_ID, char *, long);
	bool GetGimmickFilePath(STAGE_ID, char *, long);
	bool GetLightFilePath(STAGE_ID, char *, long);
	bool GetPostEffectFilePath(STAGE_ID, char *, long);
	long GetCharacterLightCount(STAGE_ID);
	CHARACTER_NO GetCharacterLightCharacteNo(STAGE_ID, long);
	bool IsCharacterLightByCharacterNo(STAGE_ID, CHARACTER_NO);
	bool GetCharacterLightFilePath(STAGE_ID, CHARACTER_NO, char *, long);
	bool GetCurrentDir(STAGE_ID, char *, long);
	bool GetGimmickResourceDir(STAGE_ID, char *, long);
	bool GetCommonSettingFilePath(char *, long);
	bool GetSoundBankFilePath(STAGE_ID, char *, long);
	bool GetSoundReverbParams(STAGE_ID, StageProjectData::StageSoundReverb *);
	const char * FindPlaySoundByCharacterPosition(STAGE_ID, SoundId, float);
	bool IsCharacterCameraLightExists(CHARACTER_NO);
	bool GetStageNameByIndex(long, char *, long);
	bool GetStageIDByIndex(long, STAGE_ID *);
	bool GetHostTeamNoByIndex(long, long *, long *, long *);
	bool GetGimmickFilePathByIndex(long, char *, long);
	bool GetCurrentDirByIndex(long, char *, long);
	bool GetGimmickResourceDirByIndex(long, char *, long);
	StageProjectData::STAGEPROJ_ERR_ID ReadFile(const char *);
	bool IsReadSuccess();
	StageProjectData & MoveFrom(StageProjectData &);
private:
	const StageProjectData::StageData * GetStageData(STAGE_ID);
	long GetStageDataIndex(STAGE_ID);
	bool isEnableStageDataByIndex(long);
	const StageProjectData::StageSpCharaLightData * findCharacterLightData(STAGE_ID, CHARACTER_NO);
};
struct StageProjectData::StageSoundReverb
{
	float attenuationRate; // 0x0
	long delayTime; // 0x4
	long repeatCount; // 0x8
	long fluctuation; // 0xC
	float reflectionAttenuationRate; // 0x10
	void set(const StageProjectData::StageSoundReverb &);
};
enum StageProjectData::SoundType
{
	SOUNDTYPE_NONE = 0,
	SOUNDTYPE_GAYA = 1,
	SOUNDTYPE_BOUND = 2,
	SOUNDTYPE_LANDING = 3,
	SOUNDTYPE_DASH_LEFT = 4,
	SOUNDTYPE_DASH_RIGHT = 5,
	SOUNDTYPE_WALK_LEFT = 6,
	SOUNDTYPE_WALK_RIGHT = 7,
};
struct StageProjectData::DataHeader
{
	long dataVersion; // 0x0
	char * pProjectName; // 0x8
};
struct StageProjectData::StageSpCharaLightData
{
	CHARACTER_NO no; // 0x0
	char * id; // 0x8
	char * filename; // 0x10
};
struct StageProjectData::StageSound
{
	char * pFileName; // 0x0
	char * pName; // 0x8
	StageProjectData::SoundType type; // 0x10
	float areaMin; // 0x14
	float areaMax; // 0x18
};
struct StageProjectData::StageData
{
	STAGE_ID stageNo; // 0x0
	char * pStageID; // 0x8
	char * pStageName; // 0x10
	long * pHostCharacterID; // 0x18
	long hostCharacterCount; // 0x20
	char * pGimmickFileName; // 0x28
	bool isEnableGimmickData; // 0x30
	char * pWorldLightFilename; // 0x38
	char * pPostEffectFilename; // 0x40
	StageProjectData::StageSpCharaLightData * pSpCharaLight; // 0x48
	long spCharaLightCount; // 0x50
	bool bUseSoundBank; // 0x54
	char * pSoundBankFilePath; // 0x58
	StageProjectData::StageSound * pSounds; // 0x60
	long soundCount; // 0x68
	StageProjectData::StageSoundReverb reverbParams; // 0x6C
};