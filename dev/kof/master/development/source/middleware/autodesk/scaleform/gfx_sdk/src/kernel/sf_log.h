#pragma once

enum Scaleform::LogMessageType
{
	LogMessage_Text = 0,
	LogMessage_Warning = 131072,
	LogMessage_Error = 196608,
	LogMessage_Assert = 262144,
	LogMessage_Report = 327680,
	LogMessage_Mask = 983040,
};
enum Scaleform::LogChannel
{
	LogChannel_General = 4096,
	LogChannel_Debug = 8192,
	LogChannel_Render = 12288,
	LogChannel_Script = 16384,
	LogChannel_Parse = 20480,
	LogChannel_Action = 24576,
	LogChannel_Memory = 28672,
	LogChannel_Performance = 32768,
	LogChannel_Mask = 61440,
};
class Scaleform::LogMessageId
{
private:
	long Id; // 0x0
public:
	LogMessageId(const Scaleform::LogMessageId &);
	LogMessageId(long);
	Scaleform::LogMessageId & operator=(const Scaleform::LogMessageId &);
	Scaleform::LogMessageId & operator=(long);
	long operator int();
	Scaleform::LogMessageType GetMessageType();
	Scaleform::LogChannel GetChannel();
	void __dflt_ctor_closure();
};
enum Scaleform::LogConstants
{
	Log_Message = 4096,
	Log_Warning = 135168,
	Log_Error = 200704,
	Log_DebugMessage = 8192,
	Log_DebugWarning = 139264,
	Log_DebugError = 204800,
	Log_DebugAssert = 270336,
};
class Scaleform::RefCountBase<Scaleform::Log,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::Log,2>(Scaleform::RefCountBase<Scaleform::Log,2> &);
	RefCountBase<Scaleform::Log,2>(const Scaleform::RefCountBase<Scaleform::Log,2> &);
	RefCountBase<Scaleform::Log,2>();
	virtual ~RefCountBase<Scaleform::Log,2>();
	Scaleform::RefCountBase<Scaleform::Log,2> & operator=(Scaleform::RefCountBase<Scaleform::Log,2> &);
	Scaleform::RefCountBase<Scaleform::Log,2> & operator=(const Scaleform::RefCountBase<Scaleform::Log,2> &);
};
class Scaleform::Log :
	Scaleform::RefCountBase<Scaleform::Log,2>
{
public:
	Log(const Scaleform::Log &);
	Log();
	virtual ~Log();
	void LogMessageVarg(Scaleform::LogMessageId, const char *, char *);
	void LogMessageById(Scaleform::LogMessageId, const char *, ...);
	enum <unnamed-enum-MaxLogBufferMessageSize>
	{
		MaxLogBufferMessageSize = 4096,
	};
	static void FormatLog(char *, unsigned long, Scaleform::LogMessageId, const char *, char *);
	static void DefaultLogMessageVarg(Scaleform::LogMessageId, const char *, char *);
	void LogMessage(const char *, ...);
	void LogError(const char *, ...);
	void LogWarning(const char *, ...);
	static void SetGlobalLog(Scaleform::Log *);
	static Scaleform::Log * GetGlobalLog();
	static Scaleform::Log * GetDefaultLog();
	Scaleform::Log & operator=(const Scaleform::Log &);
};
void Scaleform::Log::LogMessage(const char * fmt, ...); // 0x14030E6A0
void Scaleform::Log::LogError(const char * fmt, ...); // 0x1402EDD30
void Scaleform::Log::LogWarning(const char * fmt, ...); // 0x140277F30