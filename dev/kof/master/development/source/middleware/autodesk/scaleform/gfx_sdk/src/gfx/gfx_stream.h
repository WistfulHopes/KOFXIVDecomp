#pragma once

struct Scaleform::GFx::TagInfo
{
	Scaleform::GFx::TagType TagType; // 0x0
	long TagOffset; // 0x4
	long TagLength; // 0x8
	long TagDataOffset; // 0xC
};
class Scaleform::GFx::LogBase<Scaleform::GFx::Stream>
{
public:
	~LogBase<Scaleform::GFx::Stream>();
protected:
	bool P_IsVerboseParse();
	bool P_IsVerboseParseShape();
	bool P_IsVerboseParseMorphShape();
	bool P_IsVerboseParseAction();
	bool P_IsVerboseAction();
	bool P_IsVerboseActionErrors();
	bool IsVerboseActionErrors();
public:
	bool IsLogNotNull();
	void LogError(const char *, ...);
	void LogWarning(const char *, ...);
	void LogMessage(const char *, ...);
	void LogParse(const char *, ...);
	void LogParseShape(const char *, ...);
	void LogParseMorphShape(const char *, ...);
	void LogParseAction(const char *, ...);
	void LogAction(const char *, ...);
	void LogScriptError(const char *, ...);
	void LogScriptWarning(const char *, ...);
	void LogScriptMessage(const char *, ...);
	LogBase<Scaleform::GFx::Stream>(const Scaleform::GFx::LogBase<Scaleform::GFx::Stream> &);
	LogBase<Scaleform::GFx::Stream>();
	Scaleform::GFx::LogBase<Scaleform::GFx::Stream> & operator=(const Scaleform::GFx::LogBase<Scaleform::GFx::Stream> &);
};
class Scaleform::GFx::Stream :
	Scaleform::GFx::LogBase<Scaleform::GFx::Stream>
{
public:
	Stream(const Scaleform::GFx::Stream &);
	Stream(const unsigned char *, unsigned long, Scaleform::MemoryHeap *, Scaleform::Log *, Scaleform::GFx::ParseControl *);
	Stream(Scaleform::File *, Scaleform::MemoryHeap *, Scaleform::Log *, Scaleform::GFx::ParseControl *);
	virtual ~Stream();
	void Initialize(Scaleform::File *, Scaleform::Log *, Scaleform::GFx::ParseControl *);
	void ShutDown();
	void Align();
	unsigned long ReadUInt(unsigned long);
	long ReadSInt(unsigned long);
	unsigned long ReadUInt1();
	unsigned char ReadU8();
	char ReadS8();
	unsigned short ReadU16();
	short ReadS16();
	bool ReadU32(unsigned long *);
	unsigned long ReadU32();
	long ReadS32();
	float ReadFloat();
	unsigned long ReadVU32();
	unsigned long ReadVU30();
	long ReadVS32();
	double ReadDouble();
	long Tell();
	long GetTagEndPosition();
	void SetPosition(long);
	Scaleform::GFx::TagType OpenTag(Scaleform::GFx::TagInfo *);
	Scaleform::GFx::TagType OpenTag();
	void CloseTag();
	unsigned long ReadVariableCount();
	Scaleform::File * GetUnderlyingFile();
	char * ReadString(Scaleform::MemoryHeap *);
	bool ReadString(Scaleform::String *);
	char * ReadStringWithLength(Scaleform::MemoryHeap *);
	bool ReadStringWithLength(Scaleform::String *);
	void SyncFileStream();
	Scaleform::String & GetFileName();
	void ReadMatrix(Scaleform::Render::Matrix2x4<float> *);
	void ReadCxformRgb(Scaleform::Render::Cxform *);
	void ReadCxformRgba(Scaleform::Render::Cxform *);
	void ReadRect(Scaleform::Render::Rect<float> *);
	void ReadPoint(Scaleform::Render::Point<float> *);
	void ReadRgb(Scaleform::Render::Color *);
	void ReadRgba(Scaleform::Render::Color *);
	long ReadToBuffer(unsigned char *, unsigned long);
	Scaleform::Log * GetLog();
	bool IsVerboseParse();
	bool IsVerboseParseShape();
	bool IsVerboseParseMorphShape();
	bool IsVerboseParseAction();
	void LogTagBytes();
	void LogParseClass(const Scaleform::Render::Matrix2x4<float> &);
	void LogParseClass(const Scaleform::Render::Cxform &);
	void LogParseClass(const Scaleform::Render::Rect<float> &);
	void LogParseClass(Scaleform::Render::Color);
	Scaleform::GFx::ParseControl * GetParseControl();
	Scaleform::MemoryHeap * GetHeap();
private:
	Scaleform::Log * pLog; // 0x8
	Scaleform::GFx::ParseControl * pParseControl; // 0x10
	unsigned long ParseFlags; // 0x18
	Scaleform::Ptr<Scaleform::File> pInput; // 0x20
	unsigned char CurrentByte; // 0x28
	unsigned char UnusedBits; // 0x29
	Scaleform::StringDH FileName; // 0x30
	enum <unnamed-enum-Stream_TagStackSize>
	{
		Stream_TagStackSize = 2,
		Stream_BufferSize = 512,
	};
	long TagStack[2]; // 0x40
	unsigned long TagStackEntryCount; // 0x48
	unsigned long Pos; // 0x4C
	unsigned long DataSize; // 0x50
	unsigned long FilePos; // 0x54
	bool ResyncFile; // 0x58
	unsigned char * pBuffer; // 0x60
	unsigned long BufferSize; // 0x68
	unsigned char BuiltinBuffer[512]; // 0x6C
	bool EnsureBufferSize1();
	bool EnsureBufferSize(long);
	bool PopulateBuffer(long);
	bool PopulateBuffer1();
public:
	Scaleform::GFx::Stream & operator=(const Scaleform::GFx::Stream &);
};