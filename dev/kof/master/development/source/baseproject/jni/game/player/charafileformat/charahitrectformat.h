#pragma once

class CharaHitRect :
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
		RECT_DATA = 8,
		ERROR_MAX = 9,
	};
	struct DataHeader;
	CharaHitRect::DataHeader dataHeader; // 0x18
	Collision::HitRect * pRect; // 0x20
	CharaHitRect();
	virtual ~CharaHitRect();
	virtual bool CheckFileID();
	virtual void InitData();
	virtual long ReadFile(const char *);
	virtual long ReadBuffer(unsigned char *, unsigned long);
	virtual bool IsReadSuccess();
};
enum CharaHitRect::READ_ERROR_ID
{
	NONE = 0,
	SUCCESS = 1,
	OPEN = 2,
	FILE_HEADER = 3,
	FILE_ID = 4,
	DATA_HEADER = 5,
	NO_DATA_BODY = 6,
	NO_HEAP = 7,
	RECT_DATA = 8,
	ERROR_MAX = 9,
};
struct CharaHitRect::DataHeader
{
	unsigned long uiDataVersion; // 0x0
	long iDataCount; // 0x4
};
bool CharaHitRect::IsReadSuccess(); // 0x14017D900