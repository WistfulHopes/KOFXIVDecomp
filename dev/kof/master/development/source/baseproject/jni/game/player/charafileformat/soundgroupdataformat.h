#pragma once

class SoundGroupData :
	CharaFileBase
{
public:
	static const char FILE_IDENTIFIER[4]; // 0xFFFFFFFFFFFFFFFF
	static const char * READ_ERROR_ID_NAME[0]; // 0xFFFFFFFFFFFFFFFF
	enum <unnamed-enum-SOUND_ID_DATA_MAX>
	{
		SOUND_ID_DATA_MAX = 4,
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
		FAIL_DATA = 8,
		FAIL_DATA_NAMES = 9,
		ERROR_MAX = 10,
	};
	struct DataHeader;
	struct SoundIDData;
	struct ContentData;
	SoundGroupData::DataHeader dataHeader; // 0x18
	SoundGroupData::ContentData * pContData; // 0x30
	char * * pContNames; // 0x38
	SoundGroupData();
	virtual ~SoundGroupData();
	virtual bool CheckFileID();
	virtual void InitData();
	virtual long ReadFile(const char *);
	virtual long ReadBuffer(unsigned char *, unsigned long);
	virtual bool IsReadSuccess();
	long GetDataCount();
};
enum SoundGroupData::READ_ERROR_ID
{
	NONE = 0,
	SUCCESS = 1,
	OPEN = 2,
	FILE_HEADER = 3,
	FILE_ID = 4,
	DATA_HEADER = 5,
	NO_DATA_BODY = 6,
	NO_HEAP = 7,
	FAIL_DATA = 8,
	FAIL_DATA_NAMES = 9,
	ERROR_MAX = 10,
};
struct SoundGroupData::DataHeader
{
	unsigned long uiDataVersion; // 0x0
	long iReserve[3]; // 0x4
	long iDataCount; // 0x10
};
struct SoundGroupData::SoundIDData
{
	short iUniqueID; // 0x0
	short iCommonID; // 0x2
};
struct SoundGroupData::ContentData
{
	SoundGroupData::SoundIDData soundData[4]; // 0x0
};
bool SoundGroupData::IsReadSuccess(); // 0x14017D900
long SoundGroupData::GetDataCount(); // 0x1401862A0