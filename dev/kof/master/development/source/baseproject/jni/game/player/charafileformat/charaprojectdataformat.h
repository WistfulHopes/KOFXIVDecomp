#pragma once

class CharaProjectData :
	CharaFileBase
{
public:
	static const char FILE_IDENTIFIER[4]; // 0xFFFFFFFFFFFFFFFF
	static const char * READ_ERROR_ID_NAME[0]; // 0xFFFFFFFFFFFFFFFF
	enum FILE_VERSION
	{
		VERSION_1 = 1,
		VERSION_2 = 2,
		VERSION_3 = 3,
		VERSION_4 = 4,
		VERSION_5 = 5,
		VERSION_6 = 6,
		VERSION_7 = 7,
		VERSION_8 = 8,
		VERSION_10 = 10,
	};
	enum READ_ERROR_ID
	{
		NONE = 0,
		SUCCESS = 1,
		OPEN = 2,
		FILE_HEADER = 3,
		FILE_ID = 4,
		DATA_HEADER = 5,
		NO_DATA_BODY = 6,
		NO_HEAP = 7,
		CHARA_DATA = 8,
		ERROR_MAX = 9,
	};
	enum NAME_INDEX
	{
		CHARA_ID = 0,
		CHARA_NAME = 1,
		DIR_NAME = 2,
		STATUS_FILE = 3,
		COMMAND_FILE = 4,
		ATTACK_FILE = 5,
		RECT_FILE = 6,
		DAMAGE_FILE = 7,
		ACTION_FILE = 8,
		ASSET_FILE = 9,
		VERSION_1_MAX = 10,
		SOUND_COMMON_FILE = 10,
		SOUND_FILE = 11,
		VERSION_2_MAX = 12,
		EFFECT_ACT_FILE = 12,
		VERSION_4_MAX = 13,
		SOUND_GROUP_FILE = 13,
		VERSION_5_MAX = 14,
		CPU_SEQ_FILE = 14,
		VERSION_6_MAX = 15,
		COMBO_MISSION_FILE = 15,
		VERSION_7_MAX = 16,
		MATERIAL_SETTING_FILE = 16,
		NAME_INDEX_MAX = 17,
	};
	enum BASE_DATA_FLAG : unsigned long
	{
		BASE_DATA_STATUS_FILE = 1,
		BASE_DATA_COMMAND_FILE = 2,
		BASE_DATA_ATTACK_FILE = 4,
		BASE_DATA_RECT_FILE = 8,
		BASE_DATA_DAMAGE_FILE = 16,
		BASE_DATA_ACTION_FILE = 32,
		BASE_DATA_ASSET_FILE = 64,
		BASE_DATA_SOUND_CMN_FILE = 128,
		BASE_DATA_SOUND_FILE = 256,
		BASE_DATA_EFFECT_ACTION_FILE = 512,
		BASE_DATA_SOUND_GROUP_FILE = 1024,
		BASE_DATA_CPU_SEQUECNE_FILE = 2048,
		BASE_DATA_COMBO_MISSION_FILE = 4096,
		BASE_DATA_MATERIAL_SETTING_FILE = 8192,
		BASE_DATA_EFFECT_DATA = 262144,
		BASE_DATA_BODY_MOTION = 524288,
		BASE_DATA_FACE_MOTION = 1048576,
		BASE_DATA_PARTS_MOTION = 2097152,
		BASE_DATA_CAMERA_MOTION = 4194304,
		BASE_DATA_SOUND_ACTION = 8388608,
		BASE_DATA_CHINA_ASSET_CHARA = 16777216,
		BASE_DATA_CHINA_EFFECT = 33554432,
		BASE_DATA_MOTION_FLAGS = 7864320,
	};
	struct DataHeader;
	struct CharaData;
	CharaProjectData::DataHeader dataHeader; // 0x18
	CharaProjectData::CharaData * pCharaData; // 0x38
	char * cFilePath; // 0x40
	CharaProjectData();
	virtual ~CharaProjectData();
	CharaProjectData & MoveFrom(CharaProjectData &);
	virtual bool CheckFileID();
	virtual void InitData();
	virtual long ReadFile(const char *);
	long ReadBuffer(const char *, unsigned char *, unsigned long);
	virtual long ReadBuffer(unsigned char *, unsigned long);
	virtual bool IsReadSuccess();
	long GetCharaCount();
	const CharaProjectData::CharaData * GetCharaData(long);
	long GetCharaDataIndex(long);
	long GetBaseCharaID(long);
	const char * GetCharaName(long);
	const char * GetCharaNameIndex(long);
	std::string GetCharaNameString(long);
	std::string GetCharaNameIndexString(long);
	const char * GetDirectoryName(long);
	const char * GetDirectoryNameIndex(long);
	std::string GetDirectoryNameString(long);
	std::string GetDirectoryNameIndexString(long);
	std::string GetDataFilePath(long, CharaProjectData::NAME_INDEX);
	bool GetDataFilePath(long, CharaProjectData::NAME_INDEX, char *);
	std::string GetDataFilePathIndex(long, CharaProjectData::NAME_INDEX);
	bool GetDataFilePathIndex(long, CharaProjectData::NAME_INDEX, char *);
	std::string GetWinnersVoiceFilePath(long);
	std::string GetWinnersVoiceFilePathIndex(long);
	std::string GetGalleryVoiceFilePath(long);
	std::string GetGalleryVoiceFilePathIndex(long);
	std::string GetDirectoryPath(long);
	bool GetDirectoryPath(long, char *);
	std::string GetDirectoryPathIndex(long);
	bool GetDirectoryPathIndex(long, char *);
	std::string GetChinaDirectoryPath(long);
	bool GetChinaDirectoryPath(long, char *);
	std::string GetChinaDirectoryPathIndex(long);
	bool GetChinaDirectoryPathIndex(long, char *);
	long GetAnotherCostumeCharaID(long, long);
	long GetUseableAnotherCostumeCharaID(long, long);
	long GetCostumeCount(long);
	long GetUseableCostumeCount(long);
	long GetCostumeNo(long);
	bool IsExistSoundActionData(long);
	bool IsExistSoundActionDataIndex(long);
	bool IsExistChinaAsset(long);
	bool IsExistChinaAssetIndex(long);
	bool IsExistChinaEffect(long);
	bool IsExistChinaEffectIndex(long);
	bool IsEnableChinaVersion();
protected:
	bool CheckBaseCharaData(long, CharaProjectData::NAME_INDEX);
};
enum CharaProjectData::READ_ERROR_ID
{
	NONE = 0,
	SUCCESS = 1,
	OPEN = 2,
	FILE_HEADER = 3,
	FILE_ID = 4,
	DATA_HEADER = 5,
	NO_DATA_BODY = 6,
	NO_HEAP = 7,
	CHARA_DATA = 8,
	ERROR_MAX = 9,
};
struct CharaProjectData::DataHeader
{
	unsigned long uiDataVersion; // 0x0
	char * cProjectName; // 0x8
	char * cTranslateFileName; // 0x10
	unsigned long uiCharaCount; // 0x18
};
struct CharaProjectData::CharaData
{
	char * pNameData[17]; // 0x0
	char * cCharaID; // 0x0
	char * cCharaName; // 0x8
	char * cDirName; // 0x10
	char * cStatusFileName; // 0x18
	char * cCommandFileName; // 0x20
	char * cAttackFileName; // 0x28
	char * cRectFileName; // 0x30
	char * cDamageFileName; // 0x38
	char * cActionFileName; // 0x40
	char * cAssetFileName; // 0x48
	char * cSoundCmnFileName; // 0x50
	char * cSoundFileName; // 0x58
	char * cEffectActFileName; // 0x60
	char * cSoundGroupFileName; // 0x68
	char * cCpuSequenceFileName; // 0x70
	char * cComboMissionFileName; // 0x78
	char * cMaterialSettingFileName; // 0x80
	long iBaseCharaID; // 0x88
	unsigned long uiBaseDataFlag; // 0x8C
};
long CharaProjectData::ReadBuffer(unsigned char * pBuffer, unsigned long size); // 0x1400BB920
bool CharaProjectData::IsReadSuccess(); // 0x14017D900