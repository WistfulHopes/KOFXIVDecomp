#pragma once

enum Scaleform::GFx::LogConstants_GFx
{
	Log_ScriptError = 212992,
	Log_ScriptWarning = 147456,
	Log_ScriptMessage = 16384,
	Log_Parse = 20480,
	Log_ParseShape = 20481,
	Log_ParseMorphShape = 20482,
	Log_ParseAction = 20483,
	Log_Action = 24576,
};
bool Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::IsVerboseActionErrors(); // 0x1400B8180
bool Scaleform::GFx::LogBase<Scaleform::GFx::LoaderImpl>::IsVerboseActionErrors(); // 0x1400B8180
bool Scaleform::GFx::LogBase<Scaleform::GFx::LogState>::IsVerboseActionErrors(); // 0x1400B8180
bool Scaleform::Render::ImageDelegate::IsDelegate(); // 0x1400B8180
bool Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::IsVerboseActionErrors(); // 0x1400B8180
class Scaleform::GFx::LogState :
	Scaleform::GFx::State,
	Scaleform::GFx::LogBase<Scaleform::GFx::LogState>
{
private:
	Scaleform::Ptr<Scaleform::Log> pLog; // 0x20
public:
	LogState(const Scaleform::GFx::LogState &);
	LogState(Scaleform::Log *);
	virtual ~LogState();
	void LogMessageVarg(Scaleform::LogMessageId, const char *, char *);
	void LogMessageByType(Scaleform::LogMessageId, const char *, ...);
	Scaleform::Log * GetLog();
	bool IsLogNotNull();
	Scaleform::GFx::LogState & operator=(const Scaleform::GFx::LogState &);
};
class Scaleform::GFx::LogBase<Scaleform::GFx::LogState>
{
public:
	~LogBase<Scaleform::GFx::LogState>();
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
	LogBase<Scaleform::GFx::LogState>(const Scaleform::GFx::LogBase<Scaleform::GFx::LogState> &);
	LogBase<Scaleform::GFx::LogState>();
	Scaleform::GFx::LogBase<Scaleform::GFx::LogState> & operator=(const Scaleform::GFx::LogBase<Scaleform::GFx::LogState> &);
};
Scaleform::GFx::LogState::LogState(Scaleform::Log * log); // 0x14031FEF0
void Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>::LogError(const char * pfmt, ...); // 0x140349900
void Scaleform::GFx::LogBase<Scaleform::GFx::LogState>::LogError(const char * pfmt, ...); // 0x14030E640
void Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::LogError(const char * pfmt, ...); // 0x14036E540
void Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogError(const char * pfmt, ...); // 0x140320320
void Scaleform::GFx::LogBase<Scaleform::GFx::LogState>::LogWarning(const char * pfmt, ...); // 0x140342100
void Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogWarning(const char * pfmt, ...); // 0x140342160
void Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>::LogWarning(const char * pfmt, ...); // 0x14035F770
void Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::LogWarning(const char * pfmt, ...); // 0x14036E5D0
void Scaleform::GFx::LogBase<Scaleform::GFx::LogState>::LogScriptError(const char * pfmt, ...); // 0x1402E4C30
void Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>::LogScriptWarning(const char * pfmt, ...); // 0x140491180
void Scaleform::GFx::LogBase<Scaleform::GFx::LogState>::LogScriptWarning(const char * pfmt, ...); // 0x140491200
void Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParse(const char * pfmt, ...); // 0x14036E5B0
void Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::LogParse(const char * pfmt, ...); // 0x14036E5B0
void Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(const char * pfmt, ...); // 0x14036E5B0