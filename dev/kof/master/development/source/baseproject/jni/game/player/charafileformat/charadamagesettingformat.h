#pragma once

class CharaDamageSetting :
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
		DAMAGE_DATA = 8,
		DAMAGE_NAMES = 9,
		ERROR_MAX = 10,
	};
	struct GROUP_ID;
	struct DataHeader;
	struct FukitobiMoveData;
	struct Setting;
	CharaDamageSetting::DataHeader dataHeader; // 0x18
	CharaDamageSetting::Setting * pSetting; // 0x20
	char * * pDamageNames; // 0x28
	CharaDamageSetting();
	virtual ~CharaDamageSetting();
	virtual bool CheckFileID();
	virtual void InitData();
	virtual long ReadFile(const char *);
	virtual long ReadBuffer(unsigned char *, unsigned long);
	virtual bool IsReadSuccess();
};
enum CharaDamageSetting::READ_ERROR_ID
{
	NONE = 0,
	SUCCESS = 1,
	OPEN = 2,
	FILE_HEADER = 3,
	FILE_ID = 4,
	DATA_HEADER = 5,
	NO_DATA_BODY = 6,
	NO_HEAP = 7,
	DAMAGE_DATA = 8,
	DAMAGE_NAMES = 9,
	ERROR_MAX = 10,
};
struct CharaDamageSetting::GROUP_ID
{
	enum ID
	{
		FUKITOBI = 0,
		NOKEZORI = 1,
		THROW = 2,
		BOUND = 3,
		GUARD = 4,
		FUKITOBI_RET = 5,
		KUZURE = 6,
		DOWN = 7,
		GROUND_SLIDE = 8,
		WALL_FUKITOBI = 9,
		WALL_FALL = 10,
		WALL_REBOUND = 11,
	};
};
struct CharaDamageSetting::DataHeader
{
	unsigned long uiDataVersion; // 0x0
	long iDataCount; // 0x4
};
struct CharaDamageSetting::FukitobiMoveData
{
	float fMoveX; // 0x0
	float fMoveY; // 0x4
	float fAddX; // 0x8
	float fAddY; // 0xC
};
struct CharaDamageSetting::Setting
{
	long iGroupID; // 0x0
	CharaDamageSetting::FukitobiMoveData moveData; // 0x4
	long iActionID; // 0x14
	long iNextDamageID; // 0x18
};
bool CharaDamageSetting::IsReadSuccess(); // 0x14017D900