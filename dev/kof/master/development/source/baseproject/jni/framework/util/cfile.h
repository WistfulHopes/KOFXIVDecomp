#pragma once

enum FILE_MODE
{
	MODE_NONE = 0,
	MODE_READ_OPEN = 1,
	MODE_WRITE_OPEN = 2,
	MODE_APPEND_OPEN = 3,
	MODE_ASSET_STREAMING_OPEN = 4,
	MODE_EXISTS = 5,
};
class CFile
{
	enum <unnamed-enum-SEARCH_FROM_ASSET>
	{
		SEARCH_FROM_ASSET = 0,
		SEARCH_FROM_LOCAL = 1,
		SEARCH_FROM_SD_CARD = 2,
		ASSET_FOLDER = 255,
		LOCAL_FOLDER = 254,
		SD_CARD = 253,
		FILE_LOCATION_MAX = 3,
	};
protected:
	AgPointer<AgFile> m_file; // 0x0
	long m_iSeekPos; // 0x10
	long m_iFileMode; // 0x14
	long m_iFileLocation; // 0x18
	char * pFileName; // 0x20
	char * * fNameIndex; // 0x28
	long fNameMax; // 0x30
	long m_iSeek; // 0x34
	long m_iSize; // 0x38
	long m_iDstSize; // 0x3C
	unsigned char m_iOption; // 0x40
	unsigned char _readOpenAsset(const char *, long);
	unsigned char _readOpenLocal(const char *);
	unsigned char _readOpenSDCard(const char *);
	unsigned char _writeOpenLocal(const char *);
	unsigned char _writeOpenSDCard(const char *);
	unsigned char _appendOpenSDCard(const char *);
	unsigned char _appendOpenLocal(const char *);
	unsigned char _createDirectory(const char *);
	long _removeData(const char *, long);
public:
	CFile(const CFile &);
	CFile();
	~CFile();
	void initialize();
	void finalize();
	void setFile(char *, long);
	void setFilePointer(char *, long);
	unsigned char copen(const char *, long, long);
	long cread(void *, long, long);
	long cwrite(const void *, long, long);
	long cseek(long, long);
	void cclose();
	long getLength();
	_iobuf * getFilePointer();
	static unsigned char isMediaMounted();
	static long long getMediaRestSize();
	long getURI(char * *, const char *, long, long *, long *);
	unsigned char beginStreamGGZ(const char *, long);
	void endStreamGGZ();
	long loadGGZData(const char *, unsigned char * *);
	long loadGGZData(const char *, long, unsigned char * *);
	long loadGpackBufData(unsigned char *, long, unsigned char * *);
	long searchFile(const char *);
	static long read(const char *, void *, long, long, long);
	static long readNew(const char *, void * *, long, long, long);
	static unsigned char write(const char *, void *, long, long, long);
	long openStream(const char *, long);
	long readStream(unsigned char *, long, long);
	long seekStream(long, long);
	long tellStream();
	static long loadData(const char *, unsigned char *, long);
	static long loadDataNew(const char *, unsigned char * *, long);
	static long loadDataFixKeep(const char *, CFixMemoryPara *, long);
	static long loadDataFixFree(CFixMemoryPara *);
	static void decrypt(unsigned char *, long, long, const char *);
	static long loadLzssBufData(unsigned char *, long, unsigned char * *);
	static long loadGGZBufData(unsigned char *, long, unsigned char * *);
	static long getLzssBufSize(unsigned char *, long);
	static long loadLzssBufData2(unsigned char *, long, unsigned char *);
	static long loadBinaryBufData2(unsigned char *, long, unsigned char *);
	static long ResourceDataLoader(const char *, long, long, long, unsigned char *);
	static long ResourceDataLoaderNew(const char *, long, long, long, unsigned char * *);
	static long ResourceSoundLoaderNew(const char *, long, long, long, unsigned char * *);
	static long ResourceDataLoaderFixKeep(const char *, long, long, long, CFixMemoryPara *);
	static void ResourceDataLoaderFixFree(CFixMemoryPara *);
	static long readFile(const char *, unsigned char * *);
	static unsigned char readFile(const char *, void *, long, unsigned long);
	static long ResourceDataLoaderDecryptNew(const char *, long, unsigned char * *);
	static long ResourceDataLoaderDecrypt(const char *, long, unsigned char *);
	static long ResourceDataLoaderDecryptSeek(const char *, long, unsigned char *, long, long);
	static long ResourceDataLoaderDecryptSeek(const char *, long, unsigned char *, long);
	static void Decrypt(unsigned char *, long, long);
	static long loadBinaryBufData2FromFile(const char *, long, unsigned char * *);
	static unsigned char readCache(const char *, void *, long, long);
	static unsigned char writeCache(const char *, void *, long, long);
	static _iobuf * readOpen(const char *);
	static _iobuf * writeOpen(const char *);
	static _iobuf * readResourceOpen(const char *);
	static _iobuf * readCacheOpen(const char *);
	static _iobuf * writeCacheOpen(const char *);
	static unsigned char exists(const char *);
	static unsigned long length(const char *);
	static unsigned char createNewFile(const char *, long);
	static unsigned char removeData(const char *, long);
	static unsigned char checkFileName(const char *, const char *);
	static unsigned char createDirectory(const char *);
	unsigned char ReadBool();
	unsigned char ReadByte();
	char ReadInt8();
	short ReadInt16();
	unsigned short ReadUInt16();
	long ReadInt32();
	unsigned long ReadUInt32();
	long long ReadInt64();
	unsigned long long ReadUInt64();
	float ReadFloat();
	double ReadDouble();
	char * ReadString();
	char * ReadLineString();
	long Write(const char *);
	long Write(double);
	long Write(float);
	long Write(unsigned long long);
	long Write(long long);
	long Write(unsigned long);
	long Write(long);
	long Write(unsigned short);
	long Write(short);
	long Write(char);
	long Write(unsigned char);
	long WriteLine(const char *);
	CFile & operator=(const CFile &);
};