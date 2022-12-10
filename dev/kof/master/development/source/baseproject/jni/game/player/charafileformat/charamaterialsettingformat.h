#pragma once

class CharaMaterialSetting :
	CharaFileBase
{
public:
	static const char FILE_IDENTIFIER[4]; // 0xFFFFFFFFFFFFFFFF
	static const char * READ_ERROR_ID_NAME[0]; // 0xFFFFFFFFFFFFFFFF
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
		MATERIAL_DATA = 8,
		ERROR_MAX = 9,
	};
	struct DataHeader;
	struct MaterialSettingData;
	CharaMaterialSetting::DataHeader dataHeader; // 0x18
	CharaMaterialSetting::MaterialSettingData * pMaterialData; // 0x20
	CharaMaterialSetting();
	virtual ~CharaMaterialSetting();
	virtual bool CheckFileID();
	virtual void InitData();
	virtual long ReadFile(const char *);
	virtual long ReadBuffer(unsigned char *, unsigned long);
	virtual bool IsReadSuccess();
};
enum CharaMaterialSetting::READ_ERROR_ID
{
	NONE = 0,
	SUCCESS = 1,
	OPEN = 2,
	FILE_HEADER = 3,
	FILE_ID = 4,
	DATA_HEADER = 5,
	NO_DATA_BODY = 6,
	NO_HEAP = 7,
	MATERIAL_DATA = 8,
	ERROR_MAX = 9,
};
struct CharaMaterialSetting::DataHeader
{
	unsigned long uiDataVersion; // 0x0
	long iDataCount; // 0x4
};
struct CharaMaterialSetting::MaterialSettingData
{
	unsigned long uiOptionFlag; // 0x0
	long iModelID; // 0x4
	char * cMaterialName; // 0x8
};
bool CharaMaterialSetting::IsReadSuccess(); // 0x14017D900