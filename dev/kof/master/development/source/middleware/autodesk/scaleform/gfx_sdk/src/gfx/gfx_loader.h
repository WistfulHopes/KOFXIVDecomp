#pragma once

class Scaleform::GFx::State :
	Scaleform::RefCountBase<Scaleform::GFx::State,2>
{
	enum StateType
	{
		State_None = 0,
		State_Translator = 1,
		State_Log = 2,
		State_ActionControl = 3,
		State_UserEventHandler = 4,
		State_FSCommandHandler = 5,
		State_ExternalInterface = 6,
		State_MultitouchInterface = 7,
		State_ExtensionContextInterface = 8,
		State_VirtualKeyboardInterface = 9,
		State_AccelerometerInterface = 10,
		State_GeolocationInterface = 11,
		State_FileOpener = 12,
		State_URLBuilder = 13,
		State_ImageCreator = 14,
		State_ImageFileHandlerRegistry = 15,
		State_ParseControl = 16,
		State_ProgressHandler = 17,
		State_ImportVisitor = 18,
		State_FontPackParams = 19,
		State_FontLib = 20,
		State_DefaultFontLibName = 21,
		State_FontProvider = 22,
		State_FontMap = 23,
		State_TaskManager = 24,
		State_Clipboard = 25,
		State_TextKeyMap = 26,
		State_IMEManager = 27,
		State_XMLSupport = 28,
		State_ZlibSupport = 29,
		State_FontCompactorParams = 30,
		State_ImagePackerParams = 31,
		State_Audio = 32,
		State_Video = 33,
		State_TestStream = 34,
		State_SharedObject = 35,
		State_SharedObject3 = 36,
		State_UrlNavigator = 37,
		State_LocSupport = 38,
		State_AS2Support = 39,
		State_AS3Support = 40,
	};
protected:
	Scaleform::GFx::State::StateType SType; // 0x10
public:
	State(const Scaleform::GFx::State &);
	State(Scaleform::GFx::State::StateType);
	virtual ~State();
	Scaleform::GFx::State::StateType GetStateType();
	Scaleform::GFx::State & operator=(const Scaleform::GFx::State &);
	void __dflt_ctor_closure();
};
class Scaleform::RefCountBase<Scaleform::GFx::State,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::GFx::State,2>(Scaleform::RefCountBase<Scaleform::GFx::State,2> &);
	RefCountBase<Scaleform::GFx::State,2>(const Scaleform::RefCountBase<Scaleform::GFx::State,2> &);
	RefCountBase<Scaleform::GFx::State,2>();
	virtual ~RefCountBase<Scaleform::GFx::State,2>();
	Scaleform::RefCountBase<Scaleform::GFx::State,2> & operator=(Scaleform::RefCountBase<Scaleform::GFx::State,2> &);
	Scaleform::RefCountBase<Scaleform::GFx::State,2> & operator=(const Scaleform::RefCountBase<Scaleform::GFx::State,2> &);
};
Scaleform::GFx::State::~State(); // 0x1402708D0
class Scaleform::GFx::Translator :
	Scaleform::GFx::State
{
	enum TranslateCaps
	{
		Cap_ReceiveHtml = 1,
		Cap_StripTrailingNewLines = 2,
		Cap_BidirectionalText = 4,
	};
	enum WordWrappingTypes
	{
		WWT_Default = 0,
		WWT_Asian = 1,
		WWT_Prohibition = 2,
		WWT_NoHangulWrap = 4,
		WWT_Hyphenation = 8,
		WWT_Custom = 128,
		WWT_Korean = 6,
		WWT_Japanese = 2,
		WWT_Chinese = 3,
	};
public:
	unsigned long WWMode; // 0x18
	Translator(Scaleform::GFx::Translator &);
	Translator(const Scaleform::GFx::Translator &);
	Translator(unsigned long);
	Translator();
	unsigned long GetCaps();
	bool CanReceiveHtml();
	bool NeedStripNewLines();
	bool HandlesCustomWordWrapping();
	bool HandlesBidirectionalText();
	class TranslateInfo;
	void Translate(Scaleform::GFx::Translator::TranslateInfo *);
	struct LineFormatDesc;
	bool OnWordWrapping(Scaleform::GFx::Translator::LineFormatDesc *);
	bool OnBidirectionalText(const wchar_t *, unsigned long long, wchar_t *, unsigned long *, bool *);
	virtual ~Translator();
	Scaleform::GFx::Translator & operator=(Scaleform::GFx::Translator &);
	Scaleform::GFx::Translator & operator=(const Scaleform::GFx::Translator &);
};
class Scaleform::GFx::Translator::TranslateInfo
{
protected:
	const wchar_t * pKey; // 0x0
	Scaleform::WStringBuffer * pResult; // 0x8
	const char * pInstanceName; // 0x10
	enum <unnamed-enum-Flag_Translated>
	{
		Flag_Translated = 1,
		Flag_ResultHtml = 2,
		Flag_SourceHtml = 4,
	};
	unsigned char Flags; // 0x18
public:
	TranslateInfo();
	const wchar_t * GetKey();
	bool IsKeyHtml();
	const char * GetInstanceName();
	void SetResult(const char *, unsigned long long);
	void SetResult(const wchar_t *, unsigned long long);
	void SetResultHtml(const char *, unsigned long long);
	void SetResultHtml(const wchar_t *, unsigned long long);
};
struct Scaleform::GFx::Translator::LineFormatDesc
{
	const wchar_t * pParaText; // 0x0
	unsigned long long ParaTextLen; // 0x8
	const float * pWidths; // 0x10
	unsigned long long LineStartPos; // 0x18
	unsigned long long NumCharsInLine; // 0x20
	float VisibleRectWidth; // 0x28
	float CurrentLineWidth; // 0x2C
	float LineWidthBeforeWordWrap; // 0x30
	float DashSymbolWidth; // 0x34
	enum <unnamed-enum-Align_Left>
	{
		Align_Left = 0,
		Align_Right = 1,
		Align_Center = 2,
		Align_Justify = 3,
	};
	unsigned char Alignment; // 0x38
	unsigned long long ProposedWordWrapPoint; // 0x40
	bool UseHyphenation; // 0x48
};
class Scaleform::GFx::ActionControl :
	Scaleform::GFx::State
{
protected:
	unsigned long ActionFlags; // 0x18
	enum ActionControlFlags
	{
		Action_Verbose = 1,
		Action_ErrorSuppress = 2,
		Action_LogRootFilenames = 4,
		Action_LogChildFilenames = 8,
		Action_LogAllFilenames = 12,
		Action_LongFilenames = 16,
	};
public:
	ActionControl(Scaleform::GFx::ActionControl &);
	ActionControl(const Scaleform::GFx::ActionControl &);
	ActionControl(unsigned long);
	void SetActionFlags(unsigned long);
	unsigned long GetActionFlags();
	void SetVerboseAction(bool);
	void SetActionErrorSuppress(bool);
	void SetLogRootFilenames(bool);
	void SetLogChildFilenames(bool);
	void SetLogAllFilenames(bool);
	void SetLongFilenames(bool);
	virtual ~ActionControl();
	Scaleform::GFx::ActionControl & operator=(Scaleform::GFx::ActionControl &);
	Scaleform::GFx::ActionControl & operator=(const Scaleform::GFx::ActionControl &);
	void __dflt_ctor_closure();
};
class Scaleform::GFx::UserEventHandler :
	Scaleform::GFx::State
{
public:
	UserEventHandler(Scaleform::GFx::UserEventHandler &);
	UserEventHandler(const Scaleform::GFx::UserEventHandler &);
	UserEventHandler();
	void HandleEvent(Scaleform::GFx::Movie *, const Scaleform::GFx::Event &);
	virtual ~UserEventHandler();
	Scaleform::GFx::UserEventHandler & operator=(Scaleform::GFx::UserEventHandler &);
	Scaleform::GFx::UserEventHandler & operator=(const Scaleform::GFx::UserEventHandler &);
};
class Scaleform::GFx::TestStream :
	Scaleform::GFx::State
{
public:
	TestStream(Scaleform::GFx::TestStream &);
	TestStream(const Scaleform::GFx::TestStream &);
	TestStream();
	bool GetParameter(const char *, Scaleform::String *);
	bool SetParameter(const char *, const char *);
	enum <unnamed-type-TestStatus>
	{
		Record = 0,
		Play = 1,
	};
	Scaleform::GFx::TestStream::<unnamed-type-TestStatus> TestStatus; // 0x18
	virtual ~TestStream();
	Scaleform::GFx::TestStream & operator=(Scaleform::GFx::TestStream &);
	Scaleform::GFx::TestStream & operator=(const Scaleform::GFx::TestStream &);
};
class Scaleform::GFx::FSCommandHandler :
	Scaleform::GFx::State
{
public:
	FSCommandHandler(Scaleform::GFx::FSCommandHandler &);
	FSCommandHandler(const Scaleform::GFx::FSCommandHandler &);
	FSCommandHandler();
	void Callback(Scaleform::GFx::Movie *, const char *, const char *);
	virtual ~FSCommandHandler();
	Scaleform::GFx::FSCommandHandler & operator=(Scaleform::GFx::FSCommandHandler &);
	Scaleform::GFx::FSCommandHandler & operator=(const Scaleform::GFx::FSCommandHandler &);
};
class Scaleform::GFx::FileOpenerBase :
	Scaleform::GFx::State
{
public:
	FileOpenerBase(Scaleform::GFx::FileOpenerBase &);
	FileOpenerBase(const Scaleform::GFx::FileOpenerBase &);
	FileOpenerBase();
	Scaleform::File * OpenFile(const char *, long, long);
	long long GetFileModifyTime(const char *);
	Scaleform::File * OpenFileEx(const char *, Scaleform::Log *, long, long);
	virtual ~FileOpenerBase();
	Scaleform::GFx::FileOpenerBase & operator=(Scaleform::GFx::FileOpenerBase &);
	Scaleform::GFx::FileOpenerBase & operator=(const Scaleform::GFx::FileOpenerBase &);
};
class Scaleform::GFx::FileOpener :
	Scaleform::GFx::FileOpenerBase
{
public:
	virtual Scaleform::File * OpenFile(const char *, long, long);
	virtual long long GetFileModifyTime(const char *);
	virtual Scaleform::File * OpenFileEx(const char *, Scaleform::Log *, long, long);
	FileOpener(Scaleform::GFx::FileOpener &);
	FileOpener(const Scaleform::GFx::FileOpener &);
	FileOpener();
	virtual ~FileOpener();
	Scaleform::GFx::FileOpener & operator=(Scaleform::GFx::FileOpener &);
	Scaleform::GFx::FileOpener & operator=(const Scaleform::GFx::FileOpener &);
};
class Scaleform::GFx::URLBuilder :
	Scaleform::GFx::State
{
public:
	URLBuilder(Scaleform::GFx::URLBuilder &);
	URLBuilder(const Scaleform::GFx::URLBuilder &);
	URLBuilder();
	enum FileUse
	{
		File_Regular = 0,
		File_Import = 1,
		File_ImageImport = 2,
		File_LoadMovie = 3,
		File_LoadVars = 4,
		File_LoadXML = 5,
		File_LoadCSS = 6,
		File_Sound = 7,
	};
	enum UrlMethod
	{
		Url_Method_None = 0,
		Url_Method_Get = 1,
		Url_Method_Post = 2,
		Url_Method_Put = 3,
		Url_Method_Delete = 4,
	};
	struct LocationInfo;
	void BuildURL(Scaleform::String *, const Scaleform::GFx::URLBuilder::LocationInfo &);
	static bool IsPathAbsolute(const char *);
	static bool ExtractFilePath(Scaleform::String *);
	static bool IsProtocol(const Scaleform::String &);
	static bool SendURLRequest(Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> *, const Scaleform::String &, Scaleform::GFx::URLBuilder::UrlMethod, const char *, long, const Scaleform::Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy> *, const char *);
	static void DefaultBuildURL(Scaleform::String *, const Scaleform::GFx::URLBuilder::LocationInfo &);
	struct PutData;
private:
	static unsigned long long HttpWriteData(char *, unsigned long long, unsigned long long, void *);
	static unsigned long long HttpReadData(void *, unsigned long long, unsigned long long, void *);
public:
	virtual ~URLBuilder();
	Scaleform::GFx::URLBuilder & operator=(Scaleform::GFx::URLBuilder &);
	Scaleform::GFx::URLBuilder & operator=(const Scaleform::GFx::URLBuilder &);
};
struct Scaleform::GFx::URLBuilder::LocationInfo
{
	Scaleform::GFx::URLBuilder::FileUse Use; // 0x0
	Scaleform::String FileName; // 0x8
	Scaleform::String ParentPath; // 0x10
	LocationInfo(Scaleform::GFx::URLBuilder::LocationInfo &);
	LocationInfo(const Scaleform::GFx::URLBuilder::LocationInfo &);
	LocationInfo(Scaleform::GFx::URLBuilder::FileUse, const Scaleform::String &, const Scaleform::String &);
	~LocationInfo();
	Scaleform::GFx::URLBuilder::LocationInfo & operator=(Scaleform::GFx::URLBuilder::LocationInfo &);
	Scaleform::GFx::URLBuilder::LocationInfo & operator=(const Scaleform::GFx::URLBuilder::LocationInfo &);
};
class Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef unsigned char ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> &);
	Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>();
};
struct Scaleform::GFx::URLBuilder::PutData
{
	const char * Data; // 0x0
	unsigned long long DataLeft; // 0x8
};
class Scaleform::GFx::ParseControl :
	Scaleform::GFx::State
{
protected:
	unsigned long ParseFlags; // 0x18
	enum VerboseParseConstants
	{
		VerboseParseNone = 0,
		VerboseParse = 1,
		VerboseParseAction = 2,
		VerboseParseShape = 16,
		VerboseParseMorphShape = 32,
		VerboseParseAllShapes = 48,
		VerboseParseAll = 51,
	};
public:
	ParseControl(Scaleform::GFx::ParseControl &);
	ParseControl(const Scaleform::GFx::ParseControl &);
	ParseControl(unsigned long);
	void SetParseFlags(unsigned long);
	unsigned long GetParseFlags();
	bool IsVerboseParse();
	bool IsVerboseParseShape();
	bool IsVerboseParseMorphShape();
	bool IsVerboseParseAction();
	virtual ~ParseControl();
	Scaleform::GFx::ParseControl & operator=(Scaleform::GFx::ParseControl &);
	Scaleform::GFx::ParseControl & operator=(const Scaleform::GFx::ParseControl &);
	void __dflt_ctor_closure();
};
class Scaleform::GFx::ProgressHandler :
	Scaleform::GFx::State
{
public:
	ProgressHandler(Scaleform::GFx::ProgressHandler &);
	ProgressHandler(const Scaleform::GFx::ProgressHandler &);
	ProgressHandler();
	struct Info;
	void ProgressUpdate(const Scaleform::GFx::ProgressHandler::Info &);
	struct TagInfo;
	void LoadTagUpdate(const Scaleform::GFx::ProgressHandler::TagInfo &, bool);
	virtual ~ProgressHandler();
	Scaleform::GFx::ProgressHandler & operator=(Scaleform::GFx::ProgressHandler &);
	Scaleform::GFx::ProgressHandler & operator=(const Scaleform::GFx::ProgressHandler &);
};
struct Scaleform::GFx::ProgressHandler::Info
{
	Scaleform::String FileUrl; // 0x0
	unsigned long BytesLoaded; // 0x8
	unsigned long TotalBytes; // 0xC
	unsigned long FrameLoading; // 0x10
	unsigned long TotalFrames; // 0x14
	Info(Scaleform::GFx::ProgressHandler::Info &);
	Info(const Scaleform::GFx::ProgressHandler::Info &);
	Info(const Scaleform::String &, unsigned long, unsigned long, unsigned long, unsigned long);
	~Info();
	Scaleform::GFx::ProgressHandler::Info & operator=(Scaleform::GFx::ProgressHandler::Info &);
	Scaleform::GFx::ProgressHandler::Info & operator=(const Scaleform::GFx::ProgressHandler::Info &);
};
struct Scaleform::GFx::ProgressHandler::TagInfo
{
	Scaleform::String FileUrl; // 0x0
	long TagType; // 0x8
	long TagOffset; // 0xC
	long TagLength; // 0x10
	long TagDataOffset; // 0x14
	TagInfo(Scaleform::GFx::ProgressHandler::TagInfo &);
	TagInfo(const Scaleform::GFx::ProgressHandler::TagInfo &);
	TagInfo(const Scaleform::String &, long, long, long, long);
	~TagInfo();
	Scaleform::GFx::ProgressHandler::TagInfo & operator=(Scaleform::GFx::ProgressHandler::TagInfo &);
	Scaleform::GFx::ProgressHandler::TagInfo & operator=(const Scaleform::GFx::ProgressHandler::TagInfo &);
};
class Scaleform::GFx::FontPackParams :
	Scaleform::GFx::State
{
	struct TextureConfig;
public:
	FontPackParams(Scaleform::GFx::FontPackParams &);
	FontPackParams(const Scaleform::GFx::FontPackParams &);
	FontPackParams();
	static const float GlyphBoundBox; // 0xFFFFFFFFFFFFFFFF
	void GetTextureConfig(Scaleform::GFx::FontPackParams::TextureConfig *);
	void SetTextureConfig(const Scaleform::GFx::FontPackParams::TextureConfig &);
	bool GetUseSeparateTextures();
	void SetUseSeparateTextures(bool);
	long GetGlyphCountLimit();
	void SetGlyphCountLimit(long);
	float GetDrawGlyphScale(long);
	static float GetTextureGlyphMaxHeight(const Scaleform::GFx::FontResource *);
	Scaleform::GFx::State::StateType GetStateType();
private:
	Scaleform::GFx::FontPackParams::TextureConfig PackTextureConfig; // 0x18
	bool SeparateTextures; // 0x28
	long GlyphCountLimit; // 0x2C
public:
	virtual ~FontPackParams();
	Scaleform::GFx::FontPackParams & operator=(Scaleform::GFx::FontPackParams &);
	Scaleform::GFx::FontPackParams & operator=(const Scaleform::GFx::FontPackParams &);
};
struct Scaleform::GFx::FontPackParams::TextureConfig
{
	long NominalSize; // 0x0
	long PadPixels; // 0x4
	long TextureWidth; // 0x8
	long TextureHeight; // 0xC
	TextureConfig();
};
class Scaleform::GFx::FontCompactorParams :
	Scaleform::GFx::State
{
public:
	FontCompactorParams(const Scaleform::GFx::FontCompactorParams &);
	FontCompactorParams(unsigned long, bool);
	virtual ~FontCompactorParams();
	unsigned long GetNominalSize();
	bool NeedMergeContours();
private:
	unsigned long NominalSize; // 0x18
	bool MergeContours; // 0x1C
public:
	Scaleform::GFx::FontCompactorParams & operator=(const Scaleform::GFx::FontCompactorParams &);
	void __dflt_ctor_closure();
};
class Scaleform::GFx::FontProvider :
	Scaleform::GFx::State
{
public:
	FontProvider(const Scaleform::GFx::FontProvider &);
	FontProvider(Scaleform::Render::FontProvider *);
	virtual ~FontProvider();
	Scaleform::Render::Font * CreateFontW(const char *, unsigned long);
	void LoadFontNames(Scaleform::StringHash<Scaleform::String,Scaleform::AllocatorGH<Scaleform::String,2> > &);
protected:
	Scaleform::Ptr<Scaleform::Render::FontProvider> pFontProvider; // 0x18
public:
	Scaleform::GFx::FontProvider & operator=(const Scaleform::GFx::FontProvider &);
	void __dflt_ctor_closure();
};
class Scaleform::GFx::FontProvider :
	Scaleform::GFx::State
{
public:
	FontProvider(const Scaleform::GFx::FontProvider &);
	FontProvider(Scaleform::Render::FontProvider *);
	virtual ~FontProvider();
	Scaleform::Render::Font * CreateFont(const char *, unsigned long);
	void LoadFontNames(Scaleform::StringHash<Scaleform::String,Scaleform::AllocatorGH<Scaleform::String,2> > &);
protected:
	Scaleform::Ptr<Scaleform::Render::FontProvider> pFontProvider; // 0x18
public:
	Scaleform::GFx::FontProvider & operator=(const Scaleform::GFx::FontProvider &);
	void __dflt_ctor_closure();
};
class Scaleform::GFx::FontProvider :
	Scaleform::GFx::State
{
public:
	FontProvider(const Scaleform::GFx::FontProvider &);
	FontProvider(Scaleform::Render::FontProvider *);
	virtual ~FontProvider();
	Scaleform::Render::Font * CreateFontA(const char *, unsigned long);
	void LoadFontNames(Scaleform::StringHash<Scaleform::String,Scaleform::AllocatorGH<Scaleform::String,2> > &);
protected:
	Scaleform::Ptr<Scaleform::Render::FontProvider> pFontProvider; // 0x18
public:
	Scaleform::GFx::FontProvider & operator=(const Scaleform::GFx::FontProvider &);
	void __dflt_ctor_closure();
};
Scaleform::Render::Font * Scaleform::GFx::FontProvider::CreateFont(const char * name, unsigned long fontFlags); // 0x140271120
void Scaleform::GFx::FontProvider::LoadFontNames(Scaleform::StringHash<Scaleform::String,Scaleform::AllocatorGH<Scaleform::String,2> > & fontnames); // 0x140271130
class Scaleform::Ptr<Scaleform::Render::FontProvider>
{
protected:
	Scaleform::Render::FontProvider * pObject; // 0x0
public:
	Ptr<Scaleform::Render::FontProvider>(const Scaleform::Ptr<Scaleform::Render::FontProvider> &);
	Ptr<Scaleform::Render::FontProvider>(Scaleform::Render::FontProvider *);
	Ptr<Scaleform::Render::FontProvider>(Scaleform::Ptr<Scaleform::Render::FontProvider> &, Scaleform::PickType);
	Ptr<Scaleform::Render::FontProvider>(Scaleform::Pickable<Scaleform::Render::FontProvider>);
	Ptr<Scaleform::Render::FontProvider>(Scaleform::Render::FontProvider &);
	Ptr<Scaleform::Render::FontProvider>();
	~Ptr<Scaleform::Render::FontProvider>();
	bool operator==(Scaleform::Render::FontProvider *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::FontProvider> &);
	bool operator!=(Scaleform::Render::FontProvider *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::FontProvider> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::FontProvider> &);
	Scaleform::Ptr<Scaleform::Render::FontProvider> & operator=(Scaleform::Pickable<Scaleform::Render::FontProvider>);
	const Scaleform::Ptr<Scaleform::Render::FontProvider> & operator=(Scaleform::Render::FontProvider &);
	const Scaleform::Ptr<Scaleform::Render::FontProvider> & operator=(Scaleform::Render::FontProvider *);
	const Scaleform::Ptr<Scaleform::Render::FontProvider> & operator=(const Scaleform::Ptr<Scaleform::Render::FontProvider> &);
	Scaleform::Ptr<Scaleform::Render::FontProvider> & SetPtr(Scaleform::Pickable<Scaleform::Render::FontProvider>);
	Scaleform::Ptr<Scaleform::Render::FontProvider> & SetPtr(Scaleform::Render::FontProvider &);
	Scaleform::Ptr<Scaleform::Render::FontProvider> & SetPtr(Scaleform::Render::FontProvider *);
	Scaleform::Ptr<Scaleform::Render::FontProvider> & SetPtr(const Scaleform::Ptr<Scaleform::Render::FontProvider> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::FontProvider * & GetRawRef();
	Scaleform::Render::FontProvider * GetPtr();
	Scaleform::Render::FontProvider & operator*();
	Scaleform::Render::FontProvider * operator->();
	Scaleform::Render::FontProvider * operator class Scaleform::Render::FontProvider *();
	Scaleform::Ptr<Scaleform::Render::FontProvider> & Pick(Scaleform::Render::FontProvider *);
	Scaleform::Ptr<Scaleform::Render::FontProvider> & Pick(Scaleform::Pickable<Scaleform::Render::FontProvider>);
	Scaleform::Ptr<Scaleform::Render::FontProvider> & Pick(Scaleform::Ptr<Scaleform::Render::FontProvider> &);
};
class Scaleform::GFx::FontMap :
	Scaleform::GFx::State
{
private:
	Scaleform::GFx::FontMapImpl * pImpl; // 0x18
public:
	FontMap(const Scaleform::GFx::FontMap &);
	FontMap();
	virtual ~FontMap();
	enum MapFontFlags
	{
		MFF_Original = 16,
		MFF_NoAutoFit = 32,
		MFF_Normal = 0,
		MFF_Italic = 1,
		MFF_Bold = 2,
		MFF_BoldItalic = 3,
		MFF_FauxItalic = 4,
		MFF_FauxBold = 8,
		MFF_FauxBoldItalic = 12,
	};
	class MapEntry;
	bool MapFont(const wchar_t *, const wchar_t *, Scaleform::GFx::FontMap::MapFontFlags, float);
	bool MapFont(const char *, const char *, Scaleform::GFx::FontMap::MapFontFlags, float);
	bool GetFontMapping(Scaleform::GFx::FontMap::MapEntry *, const char *);
	Scaleform::GFx::FontMap & operator=(const Scaleform::GFx::FontMap &);
};
class Scaleform::GFx::FontMap::MapEntry
{
public:
	Scaleform::String Name; // 0x0
	float ScaleFactor; // 0x8
	Scaleform::GFx::FontMap::MapFontFlags Flags; // 0xC
	MapEntry(const Scaleform::GFx::FontMap::MapEntry &);
	MapEntry(const Scaleform::String &, Scaleform::GFx::FontMap::MapFontFlags, float);
	MapEntry();
	Scaleform::GFx::FontMap::MapEntry & operator=(const Scaleform::GFx::FontMap::MapEntry &);
	unsigned long UpdateFontFlags(unsigned long);
	unsigned long GetOverridenFlags();
	~MapEntry();
};
class Scaleform::GFx::Clipboard :
	Scaleform::GFx::State
{
	enum Formats
	{
		Format_None = 0,
		Format_Text = 1,
		Format_RichText = 2,
		Format_Bitmap = 4,
		Format_FileList = 8,
		Format_FilePromise_List = 16,
		Format_Html = 32,
		Format_URL = 64,
	};
protected:
	Scaleform::WStringBuffer PlainText; // 0x18
	Scaleform::Render::Text::StyledText * pStyledText; // 0x38
	void SetPlainText(const wchar_t *, unsigned long long);
	void SetStyledText(Scaleform::Render::Text::StyledText *);
	void ReleaseStyledText();
public:
	Clipboard(const Scaleform::GFx::Clipboard &);
	Clipboard();
	virtual ~Clipboard();
	unsigned long GetSupportedFormats();
	unsigned long GetAvailableFormats();
	bool HasFormat(Scaleform::GFx::Clipboard::Formats);
	void SetText(const wchar_t *, unsigned long long);
	void SetText(const Scaleform::String &);
	const Scaleform::WStringBuffer & GetText();
	void SetTextAndStyledText(const wchar_t *, unsigned long long, Scaleform::Render::Text::StyledText *);
	Scaleform::Render::Text::StyledText * GetStyledText();
	bool ContainsRichText();
	void OnTextStore(const wchar_t *, unsigned long long);
	void Clear();
	void ClearData(Scaleform::GFx::Clipboard::Formats);
	Scaleform::GFx::Clipboard & operator=(const Scaleform::GFx::Clipboard &);
};
unsigned long Scaleform::GFx::Clipboard::GetAvailableFormats(); // 0x1400470F0
bool Scaleform::GFx::Clipboard::HasFormat(Scaleform::GFx::Clipboard::Formats format); // 0x14004BBE0
bool Scaleform::GFx::Clipboard::ContainsRichText(); // 0x14038EB90
void Scaleform::GFx::Clipboard::Clear(); // 0x14002E7C0
class Scaleform::GFx::TextKeyMap :
	Scaleform::GFx::State
{
	enum KeyAction
	{
		KeyAct_None = 0,
		KeyAct_ToggleSelectionMode = 1,
		KeyAct_EnterSelectionMode = 2,
		KeyAct_LeaveSelectionMode = 3,
		KeyAct_Left = 4,
		KeyAct_Right = 5,
		KeyAct_Up = 6,
		KeyAct_Down = 7,
		KeyAct_PageUp = 8,
		KeyAct_PageDown = 9,
		KeyAct_LineHome = 10,
		KeyAct_LineEnd = 11,
		KeyAct_PageHome = 12,
		KeyAct_PageEnd = 13,
		KeyAct_DocHome = 14,
		KeyAct_DocEnd = 15,
		KeyAct_Backspace = 16,
		KeyAct_Delete = 17,
		KeyAct_Return = 18,
		KeyAct_Copy = 19,
		KeyAct_Paste = 20,
		KeyAct_Cut = 21,
		KeyAct_SelectAll = 22,
	};
	enum KeyState
	{
		State_Down = 0,
		State_Up = 1,
	};
	struct KeyMapEntry;
public:
	Scaleform::Array<Scaleform::GFx::TextKeyMap::KeyMapEntry,2,Scaleform::ArrayDefaultPolicy> Map; // 0x18
	TextKeyMap(Scaleform::GFx::TextKeyMap &);
	TextKeyMap(const Scaleform::GFx::TextKeyMap &);
	TextKeyMap();
	Scaleform::GFx::TextKeyMap * InitWindowsKeyMap();
	Scaleform::GFx::TextKeyMap * InitMacKeyMap();
	void AddKeyEntry(const Scaleform::GFx::TextKeyMap::KeyMapEntry &);
	const Scaleform::GFx::TextKeyMap::KeyMapEntry * FindFirstEntry(unsigned long);
	const Scaleform::GFx::TextKeyMap::KeyMapEntry * FindNextEntry(const Scaleform::GFx::TextKeyMap::KeyMapEntry *);
	const Scaleform::GFx::TextKeyMap::KeyMapEntry * Find(unsigned long, const Scaleform::KeyModifiers &, Scaleform::GFx::TextKeyMap::KeyState);
	virtual ~TextKeyMap();
	Scaleform::GFx::TextKeyMap & operator=(Scaleform::GFx::TextKeyMap &);
	Scaleform::GFx::TextKeyMap & operator=(const Scaleform::GFx::TextKeyMap &);
};
struct Scaleform::GFx::TextKeyMap::KeyMapEntry
{
	Scaleform::GFx::TextKeyMap::KeyAction Action; // 0x0
	unsigned long KeyCode; // 0x4
	unsigned long SpecKeysPressed; // 0x8
	Scaleform::GFx::TextKeyMap::KeyState mState; // 0xC
	KeyMapEntry(Scaleform::GFx::TextKeyMap::KeyAction, unsigned long, unsigned char, Scaleform::GFx::TextKeyMap::KeyState);
	KeyMapEntry();
};
class Scaleform::Array<Scaleform::GFx::TextKeyMap::KeyMapEntry,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<Scaleform::GFx::TextKeyMap::KeyMapEntry,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<Scaleform::GFx::TextKeyMap::KeyMapEntry,2,Scaleform::ArrayDefaultPolicy> &);
	Array<Scaleform::GFx::TextKeyMap::KeyMapEntry,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<Scaleform::GFx::TextKeyMap::KeyMapEntry,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<Scaleform::GFx::TextKeyMap::KeyMapEntry,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<Scaleform::GFx::TextKeyMap::KeyMapEntry,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<Scaleform::GFx::TextKeyMap::KeyMapEntry,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<Scaleform::GFx::TextKeyMap::KeyMapEntry,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::GFx::ImagePackParamsBase :
	Scaleform::GFx::State
{
	enum SizeOptionType
	{
		PackSize_1 = 0,
		PackSize_4 = 1,
		PackSize_PowerOf2 = 2,
		PackSize_128 = 3,
	};
	struct TextureConfig;
public:
	ImagePackParamsBase(Scaleform::GFx::ImagePackParamsBase &);
	ImagePackParamsBase(const Scaleform::GFx::ImagePackParamsBase &);
	ImagePackParamsBase();
	void GetTextureConfig(Scaleform::GFx::ImagePackParamsBase::TextureConfig *);
	void SetTextureConfig(const Scaleform::GFx::ImagePackParamsBase::TextureConfig &);
	Scaleform::GFx::State::StateType GetStateType();
	Scaleform::GFx::ImagePacker * Begin(Scaleform::GFx::ResourceId *, Scaleform::GFx::ImageCreator *, Scaleform::GFx::ImageCreateInfo *);
private:
	Scaleform::GFx::ImagePackParamsBase::TextureConfig PackTextureConfig; // 0x18
public:
	virtual ~ImagePackParamsBase();
	Scaleform::GFx::ImagePackParamsBase & operator=(Scaleform::GFx::ImagePackParamsBase &);
	Scaleform::GFx::ImagePackParamsBase & operator=(const Scaleform::GFx::ImagePackParamsBase &);
};
struct Scaleform::GFx::ImagePackParamsBase::TextureConfig
{
	long TextureWidth; // 0x0
	long TextureHeight; // 0x4
	Scaleform::GFx::ImagePackParamsBase::SizeOptionType SizeOptions; // 0x8
	bool Square; // 0xC
	TextureConfig();
};
class Scaleform::GFx::ImagePackParams :
	Scaleform::GFx::ImagePackParamsBase
{
public:
	virtual Scaleform::GFx::ImagePacker * Begin(Scaleform::GFx::ResourceId *, Scaleform::GFx::ImageCreator *, Scaleform::GFx::ImageCreateInfo *);
	ImagePackParams(Scaleform::GFx::ImagePackParams &);
	ImagePackParams(const Scaleform::GFx::ImagePackParams &);
	ImagePackParams();
	virtual ~ImagePackParams();
	Scaleform::GFx::ImagePackParams & operator=(Scaleform::GFx::ImagePackParams &);
	Scaleform::GFx::ImagePackParams & operator=(const Scaleform::GFx::ImagePackParams &);
};
class Scaleform::GFx::ZlibSupportBase :
	Scaleform::GFx::State
{
public:
	ZlibSupportBase(Scaleform::GFx::ZlibSupportBase &);
	ZlibSupportBase(const Scaleform::GFx::ZlibSupportBase &);
	ZlibSupportBase();
	Scaleform::File * CreateZlibFile(Scaleform::File *);
	void InflateWrapper(Scaleform::GFx::Stream *, void *, long);
	virtual ~ZlibSupportBase();
	Scaleform::GFx::ZlibSupportBase & operator=(Scaleform::GFx::ZlibSupportBase &);
	Scaleform::GFx::ZlibSupportBase & operator=(const Scaleform::GFx::ZlibSupportBase &);
};
class Scaleform::GFx::ZlibSupport :
	Scaleform::GFx::ZlibSupportBase
{
public:
	virtual Scaleform::File * CreateZlibFile(Scaleform::File *);
	virtual void InflateWrapper(Scaleform::GFx::Stream *, void *, long);
	ZlibSupport(Scaleform::GFx::ZlibSupport &);
	ZlibSupport(const Scaleform::GFx::ZlibSupport &);
	ZlibSupport();
	virtual ~ZlibSupport();
	Scaleform::GFx::ZlibSupport & operator=(Scaleform::GFx::ZlibSupport &);
	Scaleform::GFx::ZlibSupport & operator=(const Scaleform::GFx::ZlibSupport &);
};
class Scaleform::GFx::ASSupport :
	Scaleform::GFx::State
{
public:
	ASSupport(Scaleform::GFx::ASSupport &);
	ASSupport(const Scaleform::GFx::ASSupport &);
	ASSupport(Scaleform::GFx::State::StateType);
	Scaleform::GFx::MovieImpl * CreateMovie(Scaleform::GFx::MemoryContext *);
	Scaleform::Ptr<Scaleform::GFx::ASIMEManager> CreateASIMEManager();
	Scaleform::GFx::MemoryContext * CreateMemoryContext(const char *, const Scaleform::GFx::MemoryParams &, bool);
	Scaleform::GFx::DisplayObjectBase * CreateCharacterInstance(Scaleform::GFx::MovieImpl *, const Scaleform::GFx::CharacterCreateInfo &, Scaleform::GFx::InteractiveObject *, Scaleform::GFx::ResourceId, Scaleform::GFx::CharacterDef::CharacterDefType);
	void DoActions();
	unsigned char GetAVMVersion();
	Scaleform::GFx::PlaceObject2Tag * AllocPlaceObject2Tag(Scaleform::GFx::LoadProcess *, unsigned long long, unsigned char);
	Scaleform::GFx::PlaceObject3Tag * AllocPlaceObject3Tag(Scaleform::GFx::LoadProcess *, unsigned long long);
	Scaleform::GFx::RemoveObjectTag * AllocRemoveObjectTag(Scaleform::GFx::LoadProcess *);
	Scaleform::GFx::RemoveObject2Tag * AllocRemoveObject2Tag(Scaleform::GFx::LoadProcess *);
	void DoActionLoader(Scaleform::GFx::LoadProcess *, const Scaleform::GFx::TagInfo &);
	void DoInitActionLoader(Scaleform::GFx::LoadProcess *, const Scaleform::GFx::TagInfo &);
	void ReadButtonActions(Scaleform::GFx::LoadProcess *, Scaleform::GFx::ButtonDef *, Scaleform::GFx::TagType);
	void ReadButton2ActionConditions(Scaleform::GFx::LoadProcess *, Scaleform::GFx::ButtonDef *, Scaleform::GFx::TagType);
	virtual ~ASSupport();
	Scaleform::GFx::ASSupport & operator=(Scaleform::GFx::ASSupport &);
	Scaleform::GFx::ASSupport & operator=(const Scaleform::GFx::ASSupport &);
};
class Scaleform::Ptr<Scaleform::GFx::ASIMEManager>
{
protected:
	Scaleform::GFx::ASIMEManager * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ASIMEManager>(const Scaleform::Ptr<Scaleform::GFx::ASIMEManager> &);
	Ptr<Scaleform::GFx::ASIMEManager>(Scaleform::GFx::ASIMEManager *);
	Ptr<Scaleform::GFx::ASIMEManager>(Scaleform::Ptr<Scaleform::GFx::ASIMEManager> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ASIMEManager>(Scaleform::Pickable<Scaleform::GFx::ASIMEManager>);
	Ptr<Scaleform::GFx::ASIMEManager>(Scaleform::GFx::ASIMEManager &);
	Ptr<Scaleform::GFx::ASIMEManager>();
	~Ptr<Scaleform::GFx::ASIMEManager>();
	bool operator==(Scaleform::GFx::ASIMEManager *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ASIMEManager> &);
	bool operator!=(Scaleform::GFx::ASIMEManager *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ASIMEManager> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ASIMEManager> &);
	Scaleform::Ptr<Scaleform::GFx::ASIMEManager> & operator=(Scaleform::Pickable<Scaleform::GFx::ASIMEManager>);
	const Scaleform::Ptr<Scaleform::GFx::ASIMEManager> & operator=(Scaleform::GFx::ASIMEManager &);
	const Scaleform::Ptr<Scaleform::GFx::ASIMEManager> & operator=(Scaleform::GFx::ASIMEManager *);
	const Scaleform::Ptr<Scaleform::GFx::ASIMEManager> & operator=(const Scaleform::Ptr<Scaleform::GFx::ASIMEManager> &);
	Scaleform::Ptr<Scaleform::GFx::ASIMEManager> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ASIMEManager>);
	Scaleform::Ptr<Scaleform::GFx::ASIMEManager> & SetPtr(Scaleform::GFx::ASIMEManager &);
	Scaleform::Ptr<Scaleform::GFx::ASIMEManager> & SetPtr(Scaleform::GFx::ASIMEManager *);
	Scaleform::Ptr<Scaleform::GFx::ASIMEManager> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ASIMEManager> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ASIMEManager * & GetRawRef();
	Scaleform::GFx::ASIMEManager * GetPtr();
	Scaleform::GFx::ASIMEManager & operator*();
	Scaleform::GFx::ASIMEManager * operator->();
	Scaleform::GFx::ASIMEManager * operator class Scaleform::GFx::ASIMEManager *();
	Scaleform::Ptr<Scaleform::GFx::ASIMEManager> & Pick(Scaleform::GFx::ASIMEManager *);
	Scaleform::Ptr<Scaleform::GFx::ASIMEManager> & Pick(Scaleform::Pickable<Scaleform::GFx::ASIMEManager>);
	Scaleform::Ptr<Scaleform::GFx::ASIMEManager> & Pick(Scaleform::Ptr<Scaleform::GFx::ASIMEManager> &);
};
class Scaleform::GFx::UrlNavigator :
	Scaleform::GFx::State
{
public:
	UrlNavigator(Scaleform::GFx::UrlNavigator &);
	UrlNavigator(const Scaleform::GFx::UrlNavigator &);
	UrlNavigator();
	void NavigateToUrl(const Scaleform::String &);
	virtual ~UrlNavigator();
	Scaleform::GFx::UrlNavigator & operator=(Scaleform::GFx::UrlNavigator &);
	Scaleform::GFx::UrlNavigator & operator=(const Scaleform::GFx::UrlNavigator &);
};
class Scaleform::GFx::StateBag :
	Scaleform::GFx::FileTypeConstants
{
protected:
	Scaleform::GFx::StateBag * GetStateBagImpl();
public:
	~StateBag();
	void SetState(Scaleform::GFx::State::StateType, Scaleform::GFx::State *);
	Scaleform::GFx::State * GetStateAddRef(Scaleform::GFx::State::StateType);
	void GetStatesAddRef(Scaleform::GFx::State * *, const Scaleform::GFx::State::StateType *, unsigned long);
	void SetLog(Scaleform::Log *);
	Scaleform::Ptr<Scaleform::Log> GetLog();
	void SetLogState(Scaleform::GFx::LogState *);
	Scaleform::Ptr<Scaleform::GFx::LogState> GetLogState();
	void SetTranslator(Scaleform::GFx::Translator *);
	Scaleform::Ptr<Scaleform::GFx::Translator> GetTranslator();
	void SetImageFileHandlerRegistry(Scaleform::GFx::ImageFileHandlerRegistry *);
	Scaleform::Ptr<Scaleform::GFx::ImageFileHandlerRegistry> GetImageFileHandlerRegistry();
	void SetActionControl(Scaleform::GFx::ActionControl *);
	Scaleform::Ptr<Scaleform::GFx::ActionControl> GetActionControl();
	void SetUserEventHandler(Scaleform::GFx::UserEventHandler *);
	Scaleform::Ptr<Scaleform::GFx::UserEventHandler> GetUserEventHandler();
	void SetFSCommandHandler(Scaleform::GFx::FSCommandHandler *);
	Scaleform::Ptr<Scaleform::GFx::FSCommandHandler> GetFSCommandHandler();
	void SetTestStream(Scaleform::GFx::TestStream *);
	Scaleform::Ptr<Scaleform::GFx::TestStream> GetTestStream();
	void SetExternalInterface(Scaleform::GFx::ExternalInterface *);
	Scaleform::Ptr<Scaleform::GFx::ExternalInterface> GetExternalInterface();
	void SetExtensionContextInterface(Scaleform::GFx::ExtensionContextInterface *);
	Scaleform::Ptr<Scaleform::GFx::ExtensionContextInterface> GetExtensionContextInterface();
	void SetMultitouchInterface(Scaleform::GFx::MultitouchInterface *);
	Scaleform::Ptr<Scaleform::GFx::MultitouchInterface> GetMultitouchInterface();
	void SetVirtualKeyboardInterface(Scaleform::GFx::VirtualKeyboardInterface *);
	Scaleform::Ptr<Scaleform::GFx::VirtualKeyboardInterface> GetVirtualKeyboardInterface();
	void SetAccelerometerInterface(Scaleform::GFx::AccelerometerInterface *);
	Scaleform::Ptr<Scaleform::GFx::AccelerometerInterface> GetAccelerometerInterface();
	void SetGeolocationInterface(Scaleform::GFx::GeolocationInterface *);
	Scaleform::Ptr<Scaleform::GFx::GeolocationInterface> GetGeolocationInterface();
	void SetFileOpener(Scaleform::GFx::FileOpenerBase *);
	Scaleform::Ptr<Scaleform::GFx::FileOpenerBase> GetFileOpener();
	Scaleform::File * OpenFileEx(const char *, Scaleform::Log *);
	Scaleform::File * OpenFile(const char *);
	void SetURLBuilder(Scaleform::GFx::URLBuilder *);
	Scaleform::Ptr<Scaleform::GFx::URLBuilder> GetURLBuilder();
	void SetImageCreator(Scaleform::GFx::ImageCreator *);
	Scaleform::Ptr<Scaleform::GFx::ImageCreator> GetImageCreator();
	void SetParseControl(Scaleform::GFx::ParseControl *);
	Scaleform::Ptr<Scaleform::GFx::ParseControl> GetParseControl();
	void SetProgressHandler(Scaleform::GFx::ProgressHandler *);
	Scaleform::Ptr<Scaleform::GFx::ProgressHandler> GetProgressHandler();
	void SetImportVisitor(Scaleform::GFx::ImportVisitor *);
	Scaleform::Ptr<Scaleform::GFx::ImportVisitor> GetImportVisitor();
	void SetFontPackParams(Scaleform::GFx::FontPackParams *);
	Scaleform::Ptr<Scaleform::GFx::FontPackParams> GetFontPackParams();
	void SetFontLib(Scaleform::GFx::FontLib *);
	Scaleform::Ptr<Scaleform::GFx::FontLib> GetFontLib();
	void SetDefaultFontLibName(const char *);
	const char * GetDefaultFontLibName();
	void SetFontProvider(Scaleform::GFx::FontProvider *);
	Scaleform::Ptr<Scaleform::GFx::FontProvider> GetFontProvider();
	void SetFontMap(Scaleform::GFx::FontMap *);
	Scaleform::Ptr<Scaleform::GFx::FontMap> GetFontMap();
	void SetImagePackParams(Scaleform::GFx::ImagePackParams *);
	Scaleform::Ptr<Scaleform::GFx::ImagePackParams> GetImagePackerParams();
	void SetTaskManager(Scaleform::GFx::TaskManager *);
	Scaleform::Ptr<Scaleform::GFx::TaskManager> GetTaskManager();
	void SetClipboard(Scaleform::GFx::Clipboard *);
	Scaleform::Ptr<Scaleform::GFx::Clipboard> GetClipboard();
	void SetTextKeyMap(Scaleform::GFx::TextKeyMap *);
	Scaleform::Ptr<Scaleform::GFx::TextKeyMap> GetTextKeyMap();
	void SetIMEManager(Scaleform::GFx::IMEManagerBase *);
	Scaleform::Ptr<Scaleform::GFx::IMEManagerBase> GetIMEManager();
	void SetXMLSupport(Scaleform::GFx::XML::SupportBase *);
	Scaleform::Ptr<Scaleform::GFx::XML::SupportBase> GetXMLSupport();
	void SetZlibSupport(Scaleform::GFx::ZlibSupportBase *);
	Scaleform::Ptr<Scaleform::GFx::ZlibSupportBase> GetZlibSupport();
	void SetFontCompactorParams(Scaleform::GFx::FontCompactorParams *);
	Scaleform::Ptr<Scaleform::GFx::FontCompactorParams> GetFontCompactorParams();
	void SetSharedObjectManager(Scaleform::GFx::SharedObjectManagerBase *);
	Scaleform::Ptr<Scaleform::GFx::SharedObjectManagerBase> GetSharedObjectManager();
	void SetSharedObject3Manager(Scaleform::GFx::SharedObject3ManagerBase *);
	Scaleform::Ptr<Scaleform::GFx::SharedObject3ManagerBase> GetSharedObject3Manager();
	void SetUrlNavigator(Scaleform::GFx::UrlNavigator *);
	Scaleform::Ptr<Scaleform::GFx::UrlNavigator> GetUrlNavigator();
	void SetAS2Support(Scaleform::GFx::ASSupport *);
	Scaleform::Ptr<Scaleform::GFx::ASSupport> GetAS2Support();
	void SetAS3Support(Scaleform::GFx::ASSupport *);
	Scaleform::Ptr<Scaleform::GFx::ASSupport> GetAS3Support();
	StateBag(const Scaleform::GFx::StateBag &);
	StateBag();
	Scaleform::GFx::StateBag & operator=(const Scaleform::GFx::StateBag &);
};
Scaleform::Render::MemoryBufferImage * Scaleform::Render::Image::GetAsMemoryImage(); // 0x1400470F0
void Scaleform::GFx::StateBag::SetState(Scaleform::GFx::State::StateType state, Scaleform::GFx::State * pstate); // 0x140272AF0
Scaleform::GFx::State * Scaleform::GFx::StateBag::GetStateAddRef(Scaleform::GFx::State::StateType state); // 0x140272B30
void Scaleform::GFx::StateBag::GetStatesAddRef(Scaleform::GFx::State * * pstateList, const Scaleform::GFx::State::StateType * pstates, unsigned long count); // 0x140272B60
class Scaleform::Ptr<Scaleform::Log>
{
protected:
	Scaleform::Log * pObject; // 0x0
public:
	Ptr<Scaleform::Log>(const Scaleform::Ptr<Scaleform::Log> &);
	Ptr<Scaleform::Log>(Scaleform::Log *);
	Ptr<Scaleform::Log>(Scaleform::Ptr<Scaleform::Log> &, Scaleform::PickType);
	Ptr<Scaleform::Log>(Scaleform::Pickable<Scaleform::Log>);
	Ptr<Scaleform::Log>(Scaleform::Log &);
	Ptr<Scaleform::Log>();
	~Ptr<Scaleform::Log>();
	bool operator==(Scaleform::Log *);
	bool operator==(const Scaleform::Ptr<Scaleform::Log> &);
	bool operator!=(Scaleform::Log *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Log> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Log> &);
	Scaleform::Ptr<Scaleform::Log> & operator=(Scaleform::Pickable<Scaleform::Log>);
	const Scaleform::Ptr<Scaleform::Log> & operator=(Scaleform::Log &);
	const Scaleform::Ptr<Scaleform::Log> & operator=(Scaleform::Log *);
	const Scaleform::Ptr<Scaleform::Log> & operator=(const Scaleform::Ptr<Scaleform::Log> &);
	Scaleform::Ptr<Scaleform::Log> & SetPtr(Scaleform::Pickable<Scaleform::Log>);
	Scaleform::Ptr<Scaleform::Log> & SetPtr(Scaleform::Log &);
	Scaleform::Ptr<Scaleform::Log> & SetPtr(Scaleform::Log *);
	Scaleform::Ptr<Scaleform::Log> & SetPtr(const Scaleform::Ptr<Scaleform::Log> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Log * & GetRawRef();
	Scaleform::Log * GetPtr();
	Scaleform::Log & operator*();
	Scaleform::Log * operator->();
	Scaleform::Log * operator class Scaleform::Log *();
	Scaleform::Ptr<Scaleform::Log> & Pick(Scaleform::Log *);
	Scaleform::Ptr<Scaleform::Log> & Pick(Scaleform::Pickable<Scaleform::Log>);
	Scaleform::Ptr<Scaleform::Log> & Pick(Scaleform::Ptr<Scaleform::Log> &);
};
class Scaleform::Ptr<Scaleform::GFx::Translator>
{
protected:
	Scaleform::GFx::Translator * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::Translator>(const Scaleform::Ptr<Scaleform::GFx::Translator> &);
	Ptr<Scaleform::GFx::Translator>(Scaleform::GFx::Translator *);
	Ptr<Scaleform::GFx::Translator>(Scaleform::Ptr<Scaleform::GFx::Translator> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::Translator>(Scaleform::Pickable<Scaleform::GFx::Translator>);
	Ptr<Scaleform::GFx::Translator>(Scaleform::GFx::Translator &);
	Ptr<Scaleform::GFx::Translator>();
	~Ptr<Scaleform::GFx::Translator>();
	bool operator==(Scaleform::GFx::Translator *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::Translator> &);
	bool operator!=(Scaleform::GFx::Translator *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::Translator> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::Translator> &);
	Scaleform::Ptr<Scaleform::GFx::Translator> & operator=(Scaleform::Pickable<Scaleform::GFx::Translator>);
	const Scaleform::Ptr<Scaleform::GFx::Translator> & operator=(Scaleform::GFx::Translator &);
	const Scaleform::Ptr<Scaleform::GFx::Translator> & operator=(Scaleform::GFx::Translator *);
	const Scaleform::Ptr<Scaleform::GFx::Translator> & operator=(const Scaleform::Ptr<Scaleform::GFx::Translator> &);
	Scaleform::Ptr<Scaleform::GFx::Translator> & SetPtr(Scaleform::Pickable<Scaleform::GFx::Translator>);
	Scaleform::Ptr<Scaleform::GFx::Translator> & SetPtr(Scaleform::GFx::Translator &);
	Scaleform::Ptr<Scaleform::GFx::Translator> & SetPtr(Scaleform::GFx::Translator *);
	Scaleform::Ptr<Scaleform::GFx::Translator> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::Translator> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::Translator * & GetRawRef();
	Scaleform::GFx::Translator * GetPtr();
	Scaleform::GFx::Translator & operator*();
	Scaleform::GFx::Translator * operator->();
	Scaleform::GFx::Translator * operator class Scaleform::GFx::Translator *();
	Scaleform::Ptr<Scaleform::GFx::Translator> & Pick(Scaleform::GFx::Translator *);
	Scaleform::Ptr<Scaleform::GFx::Translator> & Pick(Scaleform::Pickable<Scaleform::GFx::Translator>);
	Scaleform::Ptr<Scaleform::GFx::Translator> & Pick(Scaleform::Ptr<Scaleform::GFx::Translator> &);
};
class Scaleform::Ptr<Scaleform::GFx::ImageFileHandlerRegistry>
{
protected:
	Scaleform::GFx::ImageFileHandlerRegistry * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ImageFileHandlerRegistry>(const Scaleform::Ptr<Scaleform::GFx::ImageFileHandlerRegistry> &);
	Ptr<Scaleform::GFx::ImageFileHandlerRegistry>(Scaleform::GFx::ImageFileHandlerRegistry *);
	Ptr<Scaleform::GFx::ImageFileHandlerRegistry>(Scaleform::Ptr<Scaleform::GFx::ImageFileHandlerRegistry> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ImageFileHandlerRegistry>(Scaleform::Pickable<Scaleform::GFx::ImageFileHandlerRegistry>);
	Ptr<Scaleform::GFx::ImageFileHandlerRegistry>(Scaleform::GFx::ImageFileHandlerRegistry &);
	Ptr<Scaleform::GFx::ImageFileHandlerRegistry>();
	~Ptr<Scaleform::GFx::ImageFileHandlerRegistry>();
	bool operator==(Scaleform::GFx::ImageFileHandlerRegistry *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ImageFileHandlerRegistry> &);
	bool operator!=(Scaleform::GFx::ImageFileHandlerRegistry *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ImageFileHandlerRegistry> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ImageFileHandlerRegistry> &);
	Scaleform::Ptr<Scaleform::GFx::ImageFileHandlerRegistry> & operator=(Scaleform::Pickable<Scaleform::GFx::ImageFileHandlerRegistry>);
	const Scaleform::Ptr<Scaleform::GFx::ImageFileHandlerRegistry> & operator=(Scaleform::GFx::ImageFileHandlerRegistry &);
	const Scaleform::Ptr<Scaleform::GFx::ImageFileHandlerRegistry> & operator=(Scaleform::GFx::ImageFileHandlerRegistry *);
	const Scaleform::Ptr<Scaleform::GFx::ImageFileHandlerRegistry> & operator=(const Scaleform::Ptr<Scaleform::GFx::ImageFileHandlerRegistry> &);
	Scaleform::Ptr<Scaleform::GFx::ImageFileHandlerRegistry> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ImageFileHandlerRegistry>);
	Scaleform::Ptr<Scaleform::GFx::ImageFileHandlerRegistry> & SetPtr(Scaleform::GFx::ImageFileHandlerRegistry &);
	Scaleform::Ptr<Scaleform::GFx::ImageFileHandlerRegistry> & SetPtr(Scaleform::GFx::ImageFileHandlerRegistry *);
	Scaleform::Ptr<Scaleform::GFx::ImageFileHandlerRegistry> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ImageFileHandlerRegistry> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ImageFileHandlerRegistry * & GetRawRef();
	Scaleform::GFx::ImageFileHandlerRegistry * GetPtr();
	Scaleform::GFx::ImageFileHandlerRegistry & operator*();
	Scaleform::GFx::ImageFileHandlerRegistry * operator->();
	Scaleform::GFx::ImageFileHandlerRegistry * operator class Scaleform::GFx::ImageFileHandlerRegistry *();
	Scaleform::Ptr<Scaleform::GFx::ImageFileHandlerRegistry> & Pick(Scaleform::GFx::ImageFileHandlerRegistry *);
	Scaleform::Ptr<Scaleform::GFx::ImageFileHandlerRegistry> & Pick(Scaleform::Pickable<Scaleform::GFx::ImageFileHandlerRegistry>);
	Scaleform::Ptr<Scaleform::GFx::ImageFileHandlerRegistry> & Pick(Scaleform::Ptr<Scaleform::GFx::ImageFileHandlerRegistry> &);
};
class Scaleform::Ptr<Scaleform::GFx::ActionControl>
{
protected:
	Scaleform::GFx::ActionControl * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ActionControl>(const Scaleform::Ptr<Scaleform::GFx::ActionControl> &);
	Ptr<Scaleform::GFx::ActionControl>(Scaleform::GFx::ActionControl *);
	Ptr<Scaleform::GFx::ActionControl>(Scaleform::Ptr<Scaleform::GFx::ActionControl> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ActionControl>(Scaleform::Pickable<Scaleform::GFx::ActionControl>);
	Ptr<Scaleform::GFx::ActionControl>(Scaleform::GFx::ActionControl &);
	Ptr<Scaleform::GFx::ActionControl>();
	~Ptr<Scaleform::GFx::ActionControl>();
	bool operator==(Scaleform::GFx::ActionControl *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ActionControl> &);
	bool operator!=(Scaleform::GFx::ActionControl *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ActionControl> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ActionControl> &);
	Scaleform::Ptr<Scaleform::GFx::ActionControl> & operator=(Scaleform::Pickable<Scaleform::GFx::ActionControl>);
	const Scaleform::Ptr<Scaleform::GFx::ActionControl> & operator=(Scaleform::GFx::ActionControl &);
	const Scaleform::Ptr<Scaleform::GFx::ActionControl> & operator=(Scaleform::GFx::ActionControl *);
	const Scaleform::Ptr<Scaleform::GFx::ActionControl> & operator=(const Scaleform::Ptr<Scaleform::GFx::ActionControl> &);
	Scaleform::Ptr<Scaleform::GFx::ActionControl> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ActionControl>);
	Scaleform::Ptr<Scaleform::GFx::ActionControl> & SetPtr(Scaleform::GFx::ActionControl &);
	Scaleform::Ptr<Scaleform::GFx::ActionControl> & SetPtr(Scaleform::GFx::ActionControl *);
	Scaleform::Ptr<Scaleform::GFx::ActionControl> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ActionControl> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ActionControl * & GetRawRef();
	Scaleform::GFx::ActionControl * GetPtr();
	Scaleform::GFx::ActionControl & operator*();
	Scaleform::GFx::ActionControl * operator->();
	Scaleform::GFx::ActionControl * operator class Scaleform::GFx::ActionControl *();
	Scaleform::Ptr<Scaleform::GFx::ActionControl> & Pick(Scaleform::GFx::ActionControl *);
	Scaleform::Ptr<Scaleform::GFx::ActionControl> & Pick(Scaleform::Pickable<Scaleform::GFx::ActionControl>);
	Scaleform::Ptr<Scaleform::GFx::ActionControl> & Pick(Scaleform::Ptr<Scaleform::GFx::ActionControl> &);
};
Scaleform::Ptr<Scaleform::GFx::ActionControl> Scaleform::GFx::StateBag::GetActionControl(); // 0x14027A530
class Scaleform::Ptr<Scaleform::GFx::UserEventHandler>
{
protected:
	Scaleform::GFx::UserEventHandler * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::UserEventHandler>(const Scaleform::Ptr<Scaleform::GFx::UserEventHandler> &);
	Ptr<Scaleform::GFx::UserEventHandler>(Scaleform::GFx::UserEventHandler *);
	Ptr<Scaleform::GFx::UserEventHandler>(Scaleform::Ptr<Scaleform::GFx::UserEventHandler> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::UserEventHandler>(Scaleform::Pickable<Scaleform::GFx::UserEventHandler>);
	Ptr<Scaleform::GFx::UserEventHandler>(Scaleform::GFx::UserEventHandler &);
	Ptr<Scaleform::GFx::UserEventHandler>();
	~Ptr<Scaleform::GFx::UserEventHandler>();
	bool operator==(Scaleform::GFx::UserEventHandler *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::UserEventHandler> &);
	bool operator!=(Scaleform::GFx::UserEventHandler *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::UserEventHandler> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::UserEventHandler> &);
	Scaleform::Ptr<Scaleform::GFx::UserEventHandler> & operator=(Scaleform::Pickable<Scaleform::GFx::UserEventHandler>);
	const Scaleform::Ptr<Scaleform::GFx::UserEventHandler> & operator=(Scaleform::GFx::UserEventHandler &);
	const Scaleform::Ptr<Scaleform::GFx::UserEventHandler> & operator=(Scaleform::GFx::UserEventHandler *);
	const Scaleform::Ptr<Scaleform::GFx::UserEventHandler> & operator=(const Scaleform::Ptr<Scaleform::GFx::UserEventHandler> &);
	Scaleform::Ptr<Scaleform::GFx::UserEventHandler> & SetPtr(Scaleform::Pickable<Scaleform::GFx::UserEventHandler>);
	Scaleform::Ptr<Scaleform::GFx::UserEventHandler> & SetPtr(Scaleform::GFx::UserEventHandler &);
	Scaleform::Ptr<Scaleform::GFx::UserEventHandler> & SetPtr(Scaleform::GFx::UserEventHandler *);
	Scaleform::Ptr<Scaleform::GFx::UserEventHandler> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::UserEventHandler> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::UserEventHandler * & GetRawRef();
	Scaleform::GFx::UserEventHandler * GetPtr();
	Scaleform::GFx::UserEventHandler & operator*();
	Scaleform::GFx::UserEventHandler * operator->();
	Scaleform::GFx::UserEventHandler * operator class Scaleform::GFx::UserEventHandler *();
	Scaleform::Ptr<Scaleform::GFx::UserEventHandler> & Pick(Scaleform::GFx::UserEventHandler *);
	Scaleform::Ptr<Scaleform::GFx::UserEventHandler> & Pick(Scaleform::Pickable<Scaleform::GFx::UserEventHandler>);
	Scaleform::Ptr<Scaleform::GFx::UserEventHandler> & Pick(Scaleform::Ptr<Scaleform::GFx::UserEventHandler> &);
};
class Scaleform::Ptr<Scaleform::GFx::FSCommandHandler>
{
protected:
	Scaleform::GFx::FSCommandHandler * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::FSCommandHandler>(const Scaleform::Ptr<Scaleform::GFx::FSCommandHandler> &);
	Ptr<Scaleform::GFx::FSCommandHandler>(Scaleform::GFx::FSCommandHandler *);
	Ptr<Scaleform::GFx::FSCommandHandler>(Scaleform::Ptr<Scaleform::GFx::FSCommandHandler> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::FSCommandHandler>(Scaleform::Pickable<Scaleform::GFx::FSCommandHandler>);
	Ptr<Scaleform::GFx::FSCommandHandler>(Scaleform::GFx::FSCommandHandler &);
	Ptr<Scaleform::GFx::FSCommandHandler>();
	~Ptr<Scaleform::GFx::FSCommandHandler>();
	bool operator==(Scaleform::GFx::FSCommandHandler *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::FSCommandHandler> &);
	bool operator!=(Scaleform::GFx::FSCommandHandler *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::FSCommandHandler> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::FSCommandHandler> &);
	Scaleform::Ptr<Scaleform::GFx::FSCommandHandler> & operator=(Scaleform::Pickable<Scaleform::GFx::FSCommandHandler>);
	const Scaleform::Ptr<Scaleform::GFx::FSCommandHandler> & operator=(Scaleform::GFx::FSCommandHandler &);
	const Scaleform::Ptr<Scaleform::GFx::FSCommandHandler> & operator=(Scaleform::GFx::FSCommandHandler *);
	const Scaleform::Ptr<Scaleform::GFx::FSCommandHandler> & operator=(const Scaleform::Ptr<Scaleform::GFx::FSCommandHandler> &);
	Scaleform::Ptr<Scaleform::GFx::FSCommandHandler> & SetPtr(Scaleform::Pickable<Scaleform::GFx::FSCommandHandler>);
	Scaleform::Ptr<Scaleform::GFx::FSCommandHandler> & SetPtr(Scaleform::GFx::FSCommandHandler &);
	Scaleform::Ptr<Scaleform::GFx::FSCommandHandler> & SetPtr(Scaleform::GFx::FSCommandHandler *);
	Scaleform::Ptr<Scaleform::GFx::FSCommandHandler> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::FSCommandHandler> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::FSCommandHandler * & GetRawRef();
	Scaleform::GFx::FSCommandHandler * GetPtr();
	Scaleform::GFx::FSCommandHandler & operator*();
	Scaleform::GFx::FSCommandHandler * operator->();
	Scaleform::GFx::FSCommandHandler * operator class Scaleform::GFx::FSCommandHandler *();
	Scaleform::Ptr<Scaleform::GFx::FSCommandHandler> & Pick(Scaleform::GFx::FSCommandHandler *);
	Scaleform::Ptr<Scaleform::GFx::FSCommandHandler> & Pick(Scaleform::Pickable<Scaleform::GFx::FSCommandHandler>);
	Scaleform::Ptr<Scaleform::GFx::FSCommandHandler> & Pick(Scaleform::Ptr<Scaleform::GFx::FSCommandHandler> &);
};
class Scaleform::Ptr<Scaleform::GFx::TestStream>
{
protected:
	Scaleform::GFx::TestStream * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::TestStream>(const Scaleform::Ptr<Scaleform::GFx::TestStream> &);
	Ptr<Scaleform::GFx::TestStream>(Scaleform::GFx::TestStream *);
	Ptr<Scaleform::GFx::TestStream>(Scaleform::Ptr<Scaleform::GFx::TestStream> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::TestStream>(Scaleform::Pickable<Scaleform::GFx::TestStream>);
	Ptr<Scaleform::GFx::TestStream>(Scaleform::GFx::TestStream &);
	Ptr<Scaleform::GFx::TestStream>();
	~Ptr<Scaleform::GFx::TestStream>();
	bool operator==(Scaleform::GFx::TestStream *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::TestStream> &);
	bool operator!=(Scaleform::GFx::TestStream *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::TestStream> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::TestStream> &);
	Scaleform::Ptr<Scaleform::GFx::TestStream> & operator=(Scaleform::Pickable<Scaleform::GFx::TestStream>);
	const Scaleform::Ptr<Scaleform::GFx::TestStream> & operator=(Scaleform::GFx::TestStream &);
	const Scaleform::Ptr<Scaleform::GFx::TestStream> & operator=(Scaleform::GFx::TestStream *);
	const Scaleform::Ptr<Scaleform::GFx::TestStream> & operator=(const Scaleform::Ptr<Scaleform::GFx::TestStream> &);
	Scaleform::Ptr<Scaleform::GFx::TestStream> & SetPtr(Scaleform::Pickable<Scaleform::GFx::TestStream>);
	Scaleform::Ptr<Scaleform::GFx::TestStream> & SetPtr(Scaleform::GFx::TestStream &);
	Scaleform::Ptr<Scaleform::GFx::TestStream> & SetPtr(Scaleform::GFx::TestStream *);
	Scaleform::Ptr<Scaleform::GFx::TestStream> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::TestStream> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::TestStream * & GetRawRef();
	Scaleform::GFx::TestStream * GetPtr();
	Scaleform::GFx::TestStream & operator*();
	Scaleform::GFx::TestStream * operator->();
	Scaleform::GFx::TestStream * operator class Scaleform::GFx::TestStream *();
	Scaleform::Ptr<Scaleform::GFx::TestStream> & Pick(Scaleform::GFx::TestStream *);
	Scaleform::Ptr<Scaleform::GFx::TestStream> & Pick(Scaleform::Pickable<Scaleform::GFx::TestStream>);
	Scaleform::Ptr<Scaleform::GFx::TestStream> & Pick(Scaleform::Ptr<Scaleform::GFx::TestStream> &);
};
class Scaleform::Ptr<Scaleform::GFx::ExternalInterface>
{
protected:
	Scaleform::GFx::ExternalInterface * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ExternalInterface>(const Scaleform::Ptr<Scaleform::GFx::ExternalInterface> &);
	Ptr<Scaleform::GFx::ExternalInterface>(Scaleform::GFx::ExternalInterface *);
	Ptr<Scaleform::GFx::ExternalInterface>(Scaleform::Ptr<Scaleform::GFx::ExternalInterface> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ExternalInterface>(Scaleform::Pickable<Scaleform::GFx::ExternalInterface>);
	Ptr<Scaleform::GFx::ExternalInterface>(Scaleform::GFx::ExternalInterface &);
	Ptr<Scaleform::GFx::ExternalInterface>();
	~Ptr<Scaleform::GFx::ExternalInterface>();
	bool operator==(Scaleform::GFx::ExternalInterface *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ExternalInterface> &);
	bool operator!=(Scaleform::GFx::ExternalInterface *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ExternalInterface> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ExternalInterface> &);
	Scaleform::Ptr<Scaleform::GFx::ExternalInterface> & operator=(Scaleform::Pickable<Scaleform::GFx::ExternalInterface>);
	const Scaleform::Ptr<Scaleform::GFx::ExternalInterface> & operator=(Scaleform::GFx::ExternalInterface &);
	const Scaleform::Ptr<Scaleform::GFx::ExternalInterface> & operator=(Scaleform::GFx::ExternalInterface *);
	const Scaleform::Ptr<Scaleform::GFx::ExternalInterface> & operator=(const Scaleform::Ptr<Scaleform::GFx::ExternalInterface> &);
	Scaleform::Ptr<Scaleform::GFx::ExternalInterface> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ExternalInterface>);
	Scaleform::Ptr<Scaleform::GFx::ExternalInterface> & SetPtr(Scaleform::GFx::ExternalInterface &);
	Scaleform::Ptr<Scaleform::GFx::ExternalInterface> & SetPtr(Scaleform::GFx::ExternalInterface *);
	Scaleform::Ptr<Scaleform::GFx::ExternalInterface> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ExternalInterface> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ExternalInterface * & GetRawRef();
	Scaleform::GFx::ExternalInterface * GetPtr();
	Scaleform::GFx::ExternalInterface & operator*();
	Scaleform::GFx::ExternalInterface * operator->();
	Scaleform::GFx::ExternalInterface * operator class Scaleform::GFx::ExternalInterface *();
	Scaleform::Ptr<Scaleform::GFx::ExternalInterface> & Pick(Scaleform::GFx::ExternalInterface *);
	Scaleform::Ptr<Scaleform::GFx::ExternalInterface> & Pick(Scaleform::Pickable<Scaleform::GFx::ExternalInterface>);
	Scaleform::Ptr<Scaleform::GFx::ExternalInterface> & Pick(Scaleform::Ptr<Scaleform::GFx::ExternalInterface> &);
};
class Scaleform::Ptr<Scaleform::GFx::ExtensionContextInterface>
{
protected:
	Scaleform::GFx::ExtensionContextInterface * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ExtensionContextInterface>(const Scaleform::Ptr<Scaleform::GFx::ExtensionContextInterface> &);
	Ptr<Scaleform::GFx::ExtensionContextInterface>(Scaleform::GFx::ExtensionContextInterface *);
	Ptr<Scaleform::GFx::ExtensionContextInterface>(Scaleform::Ptr<Scaleform::GFx::ExtensionContextInterface> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ExtensionContextInterface>(Scaleform::Pickable<Scaleform::GFx::ExtensionContextInterface>);
	Ptr<Scaleform::GFx::ExtensionContextInterface>(Scaleform::GFx::ExtensionContextInterface &);
	Ptr<Scaleform::GFx::ExtensionContextInterface>();
	~Ptr<Scaleform::GFx::ExtensionContextInterface>();
	bool operator==(Scaleform::GFx::ExtensionContextInterface *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ExtensionContextInterface> &);
	bool operator!=(Scaleform::GFx::ExtensionContextInterface *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ExtensionContextInterface> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ExtensionContextInterface> &);
	Scaleform::Ptr<Scaleform::GFx::ExtensionContextInterface> & operator=(Scaleform::Pickable<Scaleform::GFx::ExtensionContextInterface>);
	const Scaleform::Ptr<Scaleform::GFx::ExtensionContextInterface> & operator=(Scaleform::GFx::ExtensionContextInterface &);
	const Scaleform::Ptr<Scaleform::GFx::ExtensionContextInterface> & operator=(Scaleform::GFx::ExtensionContextInterface *);
	const Scaleform::Ptr<Scaleform::GFx::ExtensionContextInterface> & operator=(const Scaleform::Ptr<Scaleform::GFx::ExtensionContextInterface> &);
	Scaleform::Ptr<Scaleform::GFx::ExtensionContextInterface> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ExtensionContextInterface>);
	Scaleform::Ptr<Scaleform::GFx::ExtensionContextInterface> & SetPtr(Scaleform::GFx::ExtensionContextInterface &);
	Scaleform::Ptr<Scaleform::GFx::ExtensionContextInterface> & SetPtr(Scaleform::GFx::ExtensionContextInterface *);
	Scaleform::Ptr<Scaleform::GFx::ExtensionContextInterface> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ExtensionContextInterface> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ExtensionContextInterface * & GetRawRef();
	Scaleform::GFx::ExtensionContextInterface * GetPtr();
	Scaleform::GFx::ExtensionContextInterface & operator*();
	Scaleform::GFx::ExtensionContextInterface * operator->();
	Scaleform::GFx::ExtensionContextInterface * operator class Scaleform::GFx::ExtensionContextInterface *();
	Scaleform::Ptr<Scaleform::GFx::ExtensionContextInterface> & Pick(Scaleform::GFx::ExtensionContextInterface *);
	Scaleform::Ptr<Scaleform::GFx::ExtensionContextInterface> & Pick(Scaleform::Pickable<Scaleform::GFx::ExtensionContextInterface>);
	Scaleform::Ptr<Scaleform::GFx::ExtensionContextInterface> & Pick(Scaleform::Ptr<Scaleform::GFx::ExtensionContextInterface> &);
};
class Scaleform::Ptr<Scaleform::GFx::MultitouchInterface>
{
protected:
	Scaleform::GFx::MultitouchInterface * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::MultitouchInterface>(const Scaleform::Ptr<Scaleform::GFx::MultitouchInterface> &);
	Ptr<Scaleform::GFx::MultitouchInterface>(Scaleform::GFx::MultitouchInterface *);
	Ptr<Scaleform::GFx::MultitouchInterface>(Scaleform::Ptr<Scaleform::GFx::MultitouchInterface> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::MultitouchInterface>(Scaleform::Pickable<Scaleform::GFx::MultitouchInterface>);
	Ptr<Scaleform::GFx::MultitouchInterface>(Scaleform::GFx::MultitouchInterface &);
	Ptr<Scaleform::GFx::MultitouchInterface>();
	~Ptr<Scaleform::GFx::MultitouchInterface>();
	bool operator==(Scaleform::GFx::MultitouchInterface *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::MultitouchInterface> &);
	bool operator!=(Scaleform::GFx::MultitouchInterface *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::MultitouchInterface> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::MultitouchInterface> &);
	Scaleform::Ptr<Scaleform::GFx::MultitouchInterface> & operator=(Scaleform::Pickable<Scaleform::GFx::MultitouchInterface>);
	const Scaleform::Ptr<Scaleform::GFx::MultitouchInterface> & operator=(Scaleform::GFx::MultitouchInterface &);
	const Scaleform::Ptr<Scaleform::GFx::MultitouchInterface> & operator=(Scaleform::GFx::MultitouchInterface *);
	const Scaleform::Ptr<Scaleform::GFx::MultitouchInterface> & operator=(const Scaleform::Ptr<Scaleform::GFx::MultitouchInterface> &);
	Scaleform::Ptr<Scaleform::GFx::MultitouchInterface> & SetPtr(Scaleform::Pickable<Scaleform::GFx::MultitouchInterface>);
	Scaleform::Ptr<Scaleform::GFx::MultitouchInterface> & SetPtr(Scaleform::GFx::MultitouchInterface &);
	Scaleform::Ptr<Scaleform::GFx::MultitouchInterface> & SetPtr(Scaleform::GFx::MultitouchInterface *);
	Scaleform::Ptr<Scaleform::GFx::MultitouchInterface> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::MultitouchInterface> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::MultitouchInterface * & GetRawRef();
	Scaleform::GFx::MultitouchInterface * GetPtr();
	Scaleform::GFx::MultitouchInterface & operator*();
	Scaleform::GFx::MultitouchInterface * operator->();
	Scaleform::GFx::MultitouchInterface * operator class Scaleform::GFx::MultitouchInterface *();
	Scaleform::Ptr<Scaleform::GFx::MultitouchInterface> & Pick(Scaleform::GFx::MultitouchInterface *);
	Scaleform::Ptr<Scaleform::GFx::MultitouchInterface> & Pick(Scaleform::Pickable<Scaleform::GFx::MultitouchInterface>);
	Scaleform::Ptr<Scaleform::GFx::MultitouchInterface> & Pick(Scaleform::Ptr<Scaleform::GFx::MultitouchInterface> &);
};
class Scaleform::Ptr<Scaleform::GFx::VirtualKeyboardInterface>
{
protected:
	Scaleform::GFx::VirtualKeyboardInterface * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::VirtualKeyboardInterface>(const Scaleform::Ptr<Scaleform::GFx::VirtualKeyboardInterface> &);
	Ptr<Scaleform::GFx::VirtualKeyboardInterface>(Scaleform::GFx::VirtualKeyboardInterface *);
	Ptr<Scaleform::GFx::VirtualKeyboardInterface>(Scaleform::Ptr<Scaleform::GFx::VirtualKeyboardInterface> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::VirtualKeyboardInterface>(Scaleform::Pickable<Scaleform::GFx::VirtualKeyboardInterface>);
	Ptr<Scaleform::GFx::VirtualKeyboardInterface>(Scaleform::GFx::VirtualKeyboardInterface &);
	Ptr<Scaleform::GFx::VirtualKeyboardInterface>();
	~Ptr<Scaleform::GFx::VirtualKeyboardInterface>();
	bool operator==(Scaleform::GFx::VirtualKeyboardInterface *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::VirtualKeyboardInterface> &);
	bool operator!=(Scaleform::GFx::VirtualKeyboardInterface *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::VirtualKeyboardInterface> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::VirtualKeyboardInterface> &);
	Scaleform::Ptr<Scaleform::GFx::VirtualKeyboardInterface> & operator=(Scaleform::Pickable<Scaleform::GFx::VirtualKeyboardInterface>);
	const Scaleform::Ptr<Scaleform::GFx::VirtualKeyboardInterface> & operator=(Scaleform::GFx::VirtualKeyboardInterface &);
	const Scaleform::Ptr<Scaleform::GFx::VirtualKeyboardInterface> & operator=(Scaleform::GFx::VirtualKeyboardInterface *);
	const Scaleform::Ptr<Scaleform::GFx::VirtualKeyboardInterface> & operator=(const Scaleform::Ptr<Scaleform::GFx::VirtualKeyboardInterface> &);
	Scaleform::Ptr<Scaleform::GFx::VirtualKeyboardInterface> & SetPtr(Scaleform::Pickable<Scaleform::GFx::VirtualKeyboardInterface>);
	Scaleform::Ptr<Scaleform::GFx::VirtualKeyboardInterface> & SetPtr(Scaleform::GFx::VirtualKeyboardInterface &);
	Scaleform::Ptr<Scaleform::GFx::VirtualKeyboardInterface> & SetPtr(Scaleform::GFx::VirtualKeyboardInterface *);
	Scaleform::Ptr<Scaleform::GFx::VirtualKeyboardInterface> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::VirtualKeyboardInterface> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::VirtualKeyboardInterface * & GetRawRef();
	Scaleform::GFx::VirtualKeyboardInterface * GetPtr();
	Scaleform::GFx::VirtualKeyboardInterface & operator*();
	Scaleform::GFx::VirtualKeyboardInterface * operator->();
	Scaleform::GFx::VirtualKeyboardInterface * operator class Scaleform::GFx::VirtualKeyboardInterface *();
	Scaleform::Ptr<Scaleform::GFx::VirtualKeyboardInterface> & Pick(Scaleform::GFx::VirtualKeyboardInterface *);
	Scaleform::Ptr<Scaleform::GFx::VirtualKeyboardInterface> & Pick(Scaleform::Pickable<Scaleform::GFx::VirtualKeyboardInterface>);
	Scaleform::Ptr<Scaleform::GFx::VirtualKeyboardInterface> & Pick(Scaleform::Ptr<Scaleform::GFx::VirtualKeyboardInterface> &);
};
class Scaleform::Ptr<Scaleform::GFx::AccelerometerInterface>
{
protected:
	Scaleform::GFx::AccelerometerInterface * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::AccelerometerInterface>(const Scaleform::Ptr<Scaleform::GFx::AccelerometerInterface> &);
	Ptr<Scaleform::GFx::AccelerometerInterface>(Scaleform::GFx::AccelerometerInterface *);
	Ptr<Scaleform::GFx::AccelerometerInterface>(Scaleform::Ptr<Scaleform::GFx::AccelerometerInterface> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::AccelerometerInterface>(Scaleform::Pickable<Scaleform::GFx::AccelerometerInterface>);
	Ptr<Scaleform::GFx::AccelerometerInterface>(Scaleform::GFx::AccelerometerInterface &);
	Ptr<Scaleform::GFx::AccelerometerInterface>();
	~Ptr<Scaleform::GFx::AccelerometerInterface>();
	bool operator==(Scaleform::GFx::AccelerometerInterface *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::AccelerometerInterface> &);
	bool operator!=(Scaleform::GFx::AccelerometerInterface *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::AccelerometerInterface> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::AccelerometerInterface> &);
	Scaleform::Ptr<Scaleform::GFx::AccelerometerInterface> & operator=(Scaleform::Pickable<Scaleform::GFx::AccelerometerInterface>);
	const Scaleform::Ptr<Scaleform::GFx::AccelerometerInterface> & operator=(Scaleform::GFx::AccelerometerInterface &);
	const Scaleform::Ptr<Scaleform::GFx::AccelerometerInterface> & operator=(Scaleform::GFx::AccelerometerInterface *);
	const Scaleform::Ptr<Scaleform::GFx::AccelerometerInterface> & operator=(const Scaleform::Ptr<Scaleform::GFx::AccelerometerInterface> &);
	Scaleform::Ptr<Scaleform::GFx::AccelerometerInterface> & SetPtr(Scaleform::Pickable<Scaleform::GFx::AccelerometerInterface>);
	Scaleform::Ptr<Scaleform::GFx::AccelerometerInterface> & SetPtr(Scaleform::GFx::AccelerometerInterface &);
	Scaleform::Ptr<Scaleform::GFx::AccelerometerInterface> & SetPtr(Scaleform::GFx::AccelerometerInterface *);
	Scaleform::Ptr<Scaleform::GFx::AccelerometerInterface> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::AccelerometerInterface> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::AccelerometerInterface * & GetRawRef();
	Scaleform::GFx::AccelerometerInterface * GetPtr();
	Scaleform::GFx::AccelerometerInterface & operator*();
	Scaleform::GFx::AccelerometerInterface * operator->();
	Scaleform::GFx::AccelerometerInterface * operator class Scaleform::GFx::AccelerometerInterface *();
	Scaleform::Ptr<Scaleform::GFx::AccelerometerInterface> & Pick(Scaleform::GFx::AccelerometerInterface *);
	Scaleform::Ptr<Scaleform::GFx::AccelerometerInterface> & Pick(Scaleform::Pickable<Scaleform::GFx::AccelerometerInterface>);
	Scaleform::Ptr<Scaleform::GFx::AccelerometerInterface> & Pick(Scaleform::Ptr<Scaleform::GFx::AccelerometerInterface> &);
};
class Scaleform::Ptr<Scaleform::GFx::GeolocationInterface>
{
protected:
	Scaleform::GFx::GeolocationInterface * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::GeolocationInterface>(const Scaleform::Ptr<Scaleform::GFx::GeolocationInterface> &);
	Ptr<Scaleform::GFx::GeolocationInterface>(Scaleform::GFx::GeolocationInterface *);
	Ptr<Scaleform::GFx::GeolocationInterface>(Scaleform::Ptr<Scaleform::GFx::GeolocationInterface> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::GeolocationInterface>(Scaleform::Pickable<Scaleform::GFx::GeolocationInterface>);
	Ptr<Scaleform::GFx::GeolocationInterface>(Scaleform::GFx::GeolocationInterface &);
	Ptr<Scaleform::GFx::GeolocationInterface>();
	~Ptr<Scaleform::GFx::GeolocationInterface>();
	bool operator==(Scaleform::GFx::GeolocationInterface *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::GeolocationInterface> &);
	bool operator!=(Scaleform::GFx::GeolocationInterface *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::GeolocationInterface> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::GeolocationInterface> &);
	Scaleform::Ptr<Scaleform::GFx::GeolocationInterface> & operator=(Scaleform::Pickable<Scaleform::GFx::GeolocationInterface>);
	const Scaleform::Ptr<Scaleform::GFx::GeolocationInterface> & operator=(Scaleform::GFx::GeolocationInterface &);
	const Scaleform::Ptr<Scaleform::GFx::GeolocationInterface> & operator=(Scaleform::GFx::GeolocationInterface *);
	const Scaleform::Ptr<Scaleform::GFx::GeolocationInterface> & operator=(const Scaleform::Ptr<Scaleform::GFx::GeolocationInterface> &);
	Scaleform::Ptr<Scaleform::GFx::GeolocationInterface> & SetPtr(Scaleform::Pickable<Scaleform::GFx::GeolocationInterface>);
	Scaleform::Ptr<Scaleform::GFx::GeolocationInterface> & SetPtr(Scaleform::GFx::GeolocationInterface &);
	Scaleform::Ptr<Scaleform::GFx::GeolocationInterface> & SetPtr(Scaleform::GFx::GeolocationInterface *);
	Scaleform::Ptr<Scaleform::GFx::GeolocationInterface> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::GeolocationInterface> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::GeolocationInterface * & GetRawRef();
	Scaleform::GFx::GeolocationInterface * GetPtr();
	Scaleform::GFx::GeolocationInterface & operator*();
	Scaleform::GFx::GeolocationInterface * operator->();
	Scaleform::GFx::GeolocationInterface * operator class Scaleform::GFx::GeolocationInterface *();
	Scaleform::Ptr<Scaleform::GFx::GeolocationInterface> & Pick(Scaleform::GFx::GeolocationInterface *);
	Scaleform::Ptr<Scaleform::GFx::GeolocationInterface> & Pick(Scaleform::Pickable<Scaleform::GFx::GeolocationInterface>);
	Scaleform::Ptr<Scaleform::GFx::GeolocationInterface> & Pick(Scaleform::Ptr<Scaleform::GFx::GeolocationInterface> &);
};
class Scaleform::Ptr<Scaleform::GFx::FileOpenerBase>
{
protected:
	Scaleform::GFx::FileOpenerBase * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::FileOpenerBase>(const Scaleform::Ptr<Scaleform::GFx::FileOpenerBase> &);
	Ptr<Scaleform::GFx::FileOpenerBase>(Scaleform::GFx::FileOpenerBase *);
	Ptr<Scaleform::GFx::FileOpenerBase>(Scaleform::Ptr<Scaleform::GFx::FileOpenerBase> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::FileOpenerBase>(Scaleform::Pickable<Scaleform::GFx::FileOpenerBase>);
	Ptr<Scaleform::GFx::FileOpenerBase>(Scaleform::GFx::FileOpenerBase &);
	Ptr<Scaleform::GFx::FileOpenerBase>();
	~Ptr<Scaleform::GFx::FileOpenerBase>();
	bool operator==(Scaleform::GFx::FileOpenerBase *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::FileOpenerBase> &);
	bool operator!=(Scaleform::GFx::FileOpenerBase *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::FileOpenerBase> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::FileOpenerBase> &);
	Scaleform::Ptr<Scaleform::GFx::FileOpenerBase> & operator=(Scaleform::Pickable<Scaleform::GFx::FileOpenerBase>);
	const Scaleform::Ptr<Scaleform::GFx::FileOpenerBase> & operator=(Scaleform::GFx::FileOpenerBase &);
	const Scaleform::Ptr<Scaleform::GFx::FileOpenerBase> & operator=(Scaleform::GFx::FileOpenerBase *);
	const Scaleform::Ptr<Scaleform::GFx::FileOpenerBase> & operator=(const Scaleform::Ptr<Scaleform::GFx::FileOpenerBase> &);
	Scaleform::Ptr<Scaleform::GFx::FileOpenerBase> & SetPtr(Scaleform::Pickable<Scaleform::GFx::FileOpenerBase>);
	Scaleform::Ptr<Scaleform::GFx::FileOpenerBase> & SetPtr(Scaleform::GFx::FileOpenerBase &);
	Scaleform::Ptr<Scaleform::GFx::FileOpenerBase> & SetPtr(Scaleform::GFx::FileOpenerBase *);
	Scaleform::Ptr<Scaleform::GFx::FileOpenerBase> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::FileOpenerBase> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::FileOpenerBase * & GetRawRef();
	Scaleform::GFx::FileOpenerBase * GetPtr();
	Scaleform::GFx::FileOpenerBase & operator*();
	Scaleform::GFx::FileOpenerBase * operator->();
	Scaleform::GFx::FileOpenerBase * operator class Scaleform::GFx::FileOpenerBase *();
	Scaleform::Ptr<Scaleform::GFx::FileOpenerBase> & Pick(Scaleform::GFx::FileOpenerBase *);
	Scaleform::Ptr<Scaleform::GFx::FileOpenerBase> & Pick(Scaleform::Pickable<Scaleform::GFx::FileOpenerBase>);
	Scaleform::Ptr<Scaleform::GFx::FileOpenerBase> & Pick(Scaleform::Ptr<Scaleform::GFx::FileOpenerBase> &);
};
class Scaleform::Ptr<Scaleform::GFx::URLBuilder>
{
protected:
	Scaleform::GFx::URLBuilder * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::URLBuilder>(const Scaleform::Ptr<Scaleform::GFx::URLBuilder> &);
	Ptr<Scaleform::GFx::URLBuilder>(Scaleform::GFx::URLBuilder *);
	Ptr<Scaleform::GFx::URLBuilder>(Scaleform::Ptr<Scaleform::GFx::URLBuilder> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::URLBuilder>(Scaleform::Pickable<Scaleform::GFx::URLBuilder>);
	Ptr<Scaleform::GFx::URLBuilder>(Scaleform::GFx::URLBuilder &);
	Ptr<Scaleform::GFx::URLBuilder>();
	~Ptr<Scaleform::GFx::URLBuilder>();
	bool operator==(Scaleform::GFx::URLBuilder *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::URLBuilder> &);
	bool operator!=(Scaleform::GFx::URLBuilder *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::URLBuilder> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::URLBuilder> &);
	Scaleform::Ptr<Scaleform::GFx::URLBuilder> & operator=(Scaleform::Pickable<Scaleform::GFx::URLBuilder>);
	const Scaleform::Ptr<Scaleform::GFx::URLBuilder> & operator=(Scaleform::GFx::URLBuilder &);
	const Scaleform::Ptr<Scaleform::GFx::URLBuilder> & operator=(Scaleform::GFx::URLBuilder *);
	const Scaleform::Ptr<Scaleform::GFx::URLBuilder> & operator=(const Scaleform::Ptr<Scaleform::GFx::URLBuilder> &);
	Scaleform::Ptr<Scaleform::GFx::URLBuilder> & SetPtr(Scaleform::Pickable<Scaleform::GFx::URLBuilder>);
	Scaleform::Ptr<Scaleform::GFx::URLBuilder> & SetPtr(Scaleform::GFx::URLBuilder &);
	Scaleform::Ptr<Scaleform::GFx::URLBuilder> & SetPtr(Scaleform::GFx::URLBuilder *);
	Scaleform::Ptr<Scaleform::GFx::URLBuilder> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::URLBuilder> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::URLBuilder * & GetRawRef();
	Scaleform::GFx::URLBuilder * GetPtr();
	Scaleform::GFx::URLBuilder & operator*();
	Scaleform::GFx::URLBuilder * operator->();
	Scaleform::GFx::URLBuilder * operator class Scaleform::GFx::URLBuilder *();
	Scaleform::Ptr<Scaleform::GFx::URLBuilder> & Pick(Scaleform::GFx::URLBuilder *);
	Scaleform::Ptr<Scaleform::GFx::URLBuilder> & Pick(Scaleform::Pickable<Scaleform::GFx::URLBuilder>);
	Scaleform::Ptr<Scaleform::GFx::URLBuilder> & Pick(Scaleform::Ptr<Scaleform::GFx::URLBuilder> &);
};
class Scaleform::Ptr<Scaleform::GFx::ImageCreator>
{
protected:
	Scaleform::GFx::ImageCreator * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ImageCreator>(const Scaleform::Ptr<Scaleform::GFx::ImageCreator> &);
	Ptr<Scaleform::GFx::ImageCreator>(Scaleform::GFx::ImageCreator *);
	Ptr<Scaleform::GFx::ImageCreator>(Scaleform::Ptr<Scaleform::GFx::ImageCreator> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ImageCreator>(Scaleform::Pickable<Scaleform::GFx::ImageCreator>);
	Ptr<Scaleform::GFx::ImageCreator>(Scaleform::GFx::ImageCreator &);
	Ptr<Scaleform::GFx::ImageCreator>();
	~Ptr<Scaleform::GFx::ImageCreator>();
	bool operator==(Scaleform::GFx::ImageCreator *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ImageCreator> &);
	bool operator!=(Scaleform::GFx::ImageCreator *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ImageCreator> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ImageCreator> &);
	Scaleform::Ptr<Scaleform::GFx::ImageCreator> & operator=(Scaleform::Pickable<Scaleform::GFx::ImageCreator>);
	const Scaleform::Ptr<Scaleform::GFx::ImageCreator> & operator=(Scaleform::GFx::ImageCreator &);
	const Scaleform::Ptr<Scaleform::GFx::ImageCreator> & operator=(Scaleform::GFx::ImageCreator *);
	const Scaleform::Ptr<Scaleform::GFx::ImageCreator> & operator=(const Scaleform::Ptr<Scaleform::GFx::ImageCreator> &);
	Scaleform::Ptr<Scaleform::GFx::ImageCreator> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ImageCreator>);
	Scaleform::Ptr<Scaleform::GFx::ImageCreator> & SetPtr(Scaleform::GFx::ImageCreator &);
	Scaleform::Ptr<Scaleform::GFx::ImageCreator> & SetPtr(Scaleform::GFx::ImageCreator *);
	Scaleform::Ptr<Scaleform::GFx::ImageCreator> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ImageCreator> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ImageCreator * & GetRawRef();
	Scaleform::GFx::ImageCreator * GetPtr();
	Scaleform::GFx::ImageCreator & operator*();
	Scaleform::GFx::ImageCreator * operator->();
	Scaleform::GFx::ImageCreator * operator class Scaleform::GFx::ImageCreator *();
	Scaleform::Ptr<Scaleform::GFx::ImageCreator> & Pick(Scaleform::GFx::ImageCreator *);
	Scaleform::Ptr<Scaleform::GFx::ImageCreator> & Pick(Scaleform::Pickable<Scaleform::GFx::ImageCreator>);
	Scaleform::Ptr<Scaleform::GFx::ImageCreator> & Pick(Scaleform::Ptr<Scaleform::GFx::ImageCreator> &);
};
class Scaleform::Ptr<Scaleform::GFx::ParseControl>
{
protected:
	Scaleform::GFx::ParseControl * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ParseControl>(const Scaleform::Ptr<Scaleform::GFx::ParseControl> &);
	Ptr<Scaleform::GFx::ParseControl>(Scaleform::GFx::ParseControl *);
	Ptr<Scaleform::GFx::ParseControl>(Scaleform::Ptr<Scaleform::GFx::ParseControl> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ParseControl>(Scaleform::Pickable<Scaleform::GFx::ParseControl>);
	Ptr<Scaleform::GFx::ParseControl>(Scaleform::GFx::ParseControl &);
	Ptr<Scaleform::GFx::ParseControl>();
	~Ptr<Scaleform::GFx::ParseControl>();
	bool operator==(Scaleform::GFx::ParseControl *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ParseControl> &);
	bool operator!=(Scaleform::GFx::ParseControl *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ParseControl> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ParseControl> &);
	Scaleform::Ptr<Scaleform::GFx::ParseControl> & operator=(Scaleform::Pickable<Scaleform::GFx::ParseControl>);
	const Scaleform::Ptr<Scaleform::GFx::ParseControl> & operator=(Scaleform::GFx::ParseControl &);
	const Scaleform::Ptr<Scaleform::GFx::ParseControl> & operator=(Scaleform::GFx::ParseControl *);
	const Scaleform::Ptr<Scaleform::GFx::ParseControl> & operator=(const Scaleform::Ptr<Scaleform::GFx::ParseControl> &);
	Scaleform::Ptr<Scaleform::GFx::ParseControl> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ParseControl>);
	Scaleform::Ptr<Scaleform::GFx::ParseControl> & SetPtr(Scaleform::GFx::ParseControl &);
	Scaleform::Ptr<Scaleform::GFx::ParseControl> & SetPtr(Scaleform::GFx::ParseControl *);
	Scaleform::Ptr<Scaleform::GFx::ParseControl> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ParseControl> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ParseControl * & GetRawRef();
	Scaleform::GFx::ParseControl * GetPtr();
	Scaleform::GFx::ParseControl & operator*();
	Scaleform::GFx::ParseControl * operator->();
	Scaleform::GFx::ParseControl * operator class Scaleform::GFx::ParseControl *();
	Scaleform::Ptr<Scaleform::GFx::ParseControl> & Pick(Scaleform::GFx::ParseControl *);
	Scaleform::Ptr<Scaleform::GFx::ParseControl> & Pick(Scaleform::Pickable<Scaleform::GFx::ParseControl>);
	Scaleform::Ptr<Scaleform::GFx::ParseControl> & Pick(Scaleform::Ptr<Scaleform::GFx::ParseControl> &);
};
class Scaleform::Ptr<Scaleform::GFx::ProgressHandler>
{
protected:
	Scaleform::GFx::ProgressHandler * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ProgressHandler>(const Scaleform::Ptr<Scaleform::GFx::ProgressHandler> &);
	Ptr<Scaleform::GFx::ProgressHandler>(Scaleform::GFx::ProgressHandler *);
	Ptr<Scaleform::GFx::ProgressHandler>(Scaleform::Ptr<Scaleform::GFx::ProgressHandler> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ProgressHandler>(Scaleform::Pickable<Scaleform::GFx::ProgressHandler>);
	Ptr<Scaleform::GFx::ProgressHandler>(Scaleform::GFx::ProgressHandler &);
	Ptr<Scaleform::GFx::ProgressHandler>();
	~Ptr<Scaleform::GFx::ProgressHandler>();
	bool operator==(Scaleform::GFx::ProgressHandler *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ProgressHandler> &);
	bool operator!=(Scaleform::GFx::ProgressHandler *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ProgressHandler> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ProgressHandler> &);
	Scaleform::Ptr<Scaleform::GFx::ProgressHandler> & operator=(Scaleform::Pickable<Scaleform::GFx::ProgressHandler>);
	const Scaleform::Ptr<Scaleform::GFx::ProgressHandler> & operator=(Scaleform::GFx::ProgressHandler &);
	const Scaleform::Ptr<Scaleform::GFx::ProgressHandler> & operator=(Scaleform::GFx::ProgressHandler *);
	const Scaleform::Ptr<Scaleform::GFx::ProgressHandler> & operator=(const Scaleform::Ptr<Scaleform::GFx::ProgressHandler> &);
	Scaleform::Ptr<Scaleform::GFx::ProgressHandler> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ProgressHandler>);
	Scaleform::Ptr<Scaleform::GFx::ProgressHandler> & SetPtr(Scaleform::GFx::ProgressHandler &);
	Scaleform::Ptr<Scaleform::GFx::ProgressHandler> & SetPtr(Scaleform::GFx::ProgressHandler *);
	Scaleform::Ptr<Scaleform::GFx::ProgressHandler> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ProgressHandler> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ProgressHandler * & GetRawRef();
	Scaleform::GFx::ProgressHandler * GetPtr();
	Scaleform::GFx::ProgressHandler & operator*();
	Scaleform::GFx::ProgressHandler * operator->();
	Scaleform::GFx::ProgressHandler * operator class Scaleform::GFx::ProgressHandler *();
	Scaleform::Ptr<Scaleform::GFx::ProgressHandler> & Pick(Scaleform::GFx::ProgressHandler *);
	Scaleform::Ptr<Scaleform::GFx::ProgressHandler> & Pick(Scaleform::Pickable<Scaleform::GFx::ProgressHandler>);
	Scaleform::Ptr<Scaleform::GFx::ProgressHandler> & Pick(Scaleform::Ptr<Scaleform::GFx::ProgressHandler> &);
};
class Scaleform::Ptr<Scaleform::GFx::ImportVisitor>
{
protected:
	Scaleform::GFx::ImportVisitor * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ImportVisitor>(const Scaleform::Ptr<Scaleform::GFx::ImportVisitor> &);
	Ptr<Scaleform::GFx::ImportVisitor>(Scaleform::GFx::ImportVisitor *);
	Ptr<Scaleform::GFx::ImportVisitor>(Scaleform::Ptr<Scaleform::GFx::ImportVisitor> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ImportVisitor>(Scaleform::Pickable<Scaleform::GFx::ImportVisitor>);
	Ptr<Scaleform::GFx::ImportVisitor>(Scaleform::GFx::ImportVisitor &);
	Ptr<Scaleform::GFx::ImportVisitor>();
	~Ptr<Scaleform::GFx::ImportVisitor>();
	bool operator==(Scaleform::GFx::ImportVisitor *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ImportVisitor> &);
	bool operator!=(Scaleform::GFx::ImportVisitor *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ImportVisitor> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ImportVisitor> &);
	Scaleform::Ptr<Scaleform::GFx::ImportVisitor> & operator=(Scaleform::Pickable<Scaleform::GFx::ImportVisitor>);
	const Scaleform::Ptr<Scaleform::GFx::ImportVisitor> & operator=(Scaleform::GFx::ImportVisitor &);
	const Scaleform::Ptr<Scaleform::GFx::ImportVisitor> & operator=(Scaleform::GFx::ImportVisitor *);
	const Scaleform::Ptr<Scaleform::GFx::ImportVisitor> & operator=(const Scaleform::Ptr<Scaleform::GFx::ImportVisitor> &);
	Scaleform::Ptr<Scaleform::GFx::ImportVisitor> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ImportVisitor>);
	Scaleform::Ptr<Scaleform::GFx::ImportVisitor> & SetPtr(Scaleform::GFx::ImportVisitor &);
	Scaleform::Ptr<Scaleform::GFx::ImportVisitor> & SetPtr(Scaleform::GFx::ImportVisitor *);
	Scaleform::Ptr<Scaleform::GFx::ImportVisitor> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ImportVisitor> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ImportVisitor * & GetRawRef();
	Scaleform::GFx::ImportVisitor * GetPtr();
	Scaleform::GFx::ImportVisitor & operator*();
	Scaleform::GFx::ImportVisitor * operator->();
	Scaleform::GFx::ImportVisitor * operator class Scaleform::GFx::ImportVisitor *();
	Scaleform::Ptr<Scaleform::GFx::ImportVisitor> & Pick(Scaleform::GFx::ImportVisitor *);
	Scaleform::Ptr<Scaleform::GFx::ImportVisitor> & Pick(Scaleform::Pickable<Scaleform::GFx::ImportVisitor>);
	Scaleform::Ptr<Scaleform::GFx::ImportVisitor> & Pick(Scaleform::Ptr<Scaleform::GFx::ImportVisitor> &);
};
class Scaleform::Ptr<Scaleform::GFx::FontPackParams>
{
protected:
	Scaleform::GFx::FontPackParams * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::FontPackParams>(const Scaleform::Ptr<Scaleform::GFx::FontPackParams> &);
	Ptr<Scaleform::GFx::FontPackParams>(Scaleform::GFx::FontPackParams *);
	Ptr<Scaleform::GFx::FontPackParams>(Scaleform::Ptr<Scaleform::GFx::FontPackParams> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::FontPackParams>(Scaleform::Pickable<Scaleform::GFx::FontPackParams>);
	Ptr<Scaleform::GFx::FontPackParams>(Scaleform::GFx::FontPackParams &);
	Ptr<Scaleform::GFx::FontPackParams>();
	~Ptr<Scaleform::GFx::FontPackParams>();
	bool operator==(Scaleform::GFx::FontPackParams *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::FontPackParams> &);
	bool operator!=(Scaleform::GFx::FontPackParams *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::FontPackParams> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::FontPackParams> &);
	Scaleform::Ptr<Scaleform::GFx::FontPackParams> & operator=(Scaleform::Pickable<Scaleform::GFx::FontPackParams>);
	const Scaleform::Ptr<Scaleform::GFx::FontPackParams> & operator=(Scaleform::GFx::FontPackParams &);
	const Scaleform::Ptr<Scaleform::GFx::FontPackParams> & operator=(Scaleform::GFx::FontPackParams *);
	const Scaleform::Ptr<Scaleform::GFx::FontPackParams> & operator=(const Scaleform::Ptr<Scaleform::GFx::FontPackParams> &);
	Scaleform::Ptr<Scaleform::GFx::FontPackParams> & SetPtr(Scaleform::Pickable<Scaleform::GFx::FontPackParams>);
	Scaleform::Ptr<Scaleform::GFx::FontPackParams> & SetPtr(Scaleform::GFx::FontPackParams &);
	Scaleform::Ptr<Scaleform::GFx::FontPackParams> & SetPtr(Scaleform::GFx::FontPackParams *);
	Scaleform::Ptr<Scaleform::GFx::FontPackParams> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::FontPackParams> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::FontPackParams * & GetRawRef();
	Scaleform::GFx::FontPackParams * GetPtr();
	Scaleform::GFx::FontPackParams & operator*();
	Scaleform::GFx::FontPackParams * operator->();
	Scaleform::GFx::FontPackParams * operator class Scaleform::GFx::FontPackParams *();
	Scaleform::Ptr<Scaleform::GFx::FontPackParams> & Pick(Scaleform::GFx::FontPackParams *);
	Scaleform::Ptr<Scaleform::GFx::FontPackParams> & Pick(Scaleform::Pickable<Scaleform::GFx::FontPackParams>);
	Scaleform::Ptr<Scaleform::GFx::FontPackParams> & Pick(Scaleform::Ptr<Scaleform::GFx::FontPackParams> &);
};
class Scaleform::Ptr<Scaleform::GFx::FontLib>
{
protected:
	Scaleform::GFx::FontLib * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::FontLib>(const Scaleform::Ptr<Scaleform::GFx::FontLib> &);
	Ptr<Scaleform::GFx::FontLib>(Scaleform::GFx::FontLib *);
	Ptr<Scaleform::GFx::FontLib>(Scaleform::Ptr<Scaleform::GFx::FontLib> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::FontLib>(Scaleform::Pickable<Scaleform::GFx::FontLib>);
	Ptr<Scaleform::GFx::FontLib>(Scaleform::GFx::FontLib &);
	Ptr<Scaleform::GFx::FontLib>();
	~Ptr<Scaleform::GFx::FontLib>();
	bool operator==(Scaleform::GFx::FontLib *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::FontLib> &);
	bool operator!=(Scaleform::GFx::FontLib *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::FontLib> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::FontLib> &);
	Scaleform::Ptr<Scaleform::GFx::FontLib> & operator=(Scaleform::Pickable<Scaleform::GFx::FontLib>);
	const Scaleform::Ptr<Scaleform::GFx::FontLib> & operator=(Scaleform::GFx::FontLib &);
	const Scaleform::Ptr<Scaleform::GFx::FontLib> & operator=(Scaleform::GFx::FontLib *);
	const Scaleform::Ptr<Scaleform::GFx::FontLib> & operator=(const Scaleform::Ptr<Scaleform::GFx::FontLib> &);
	Scaleform::Ptr<Scaleform::GFx::FontLib> & SetPtr(Scaleform::Pickable<Scaleform::GFx::FontLib>);
	Scaleform::Ptr<Scaleform::GFx::FontLib> & SetPtr(Scaleform::GFx::FontLib &);
	Scaleform::Ptr<Scaleform::GFx::FontLib> & SetPtr(Scaleform::GFx::FontLib *);
	Scaleform::Ptr<Scaleform::GFx::FontLib> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::FontLib> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::FontLib * & GetRawRef();
	Scaleform::GFx::FontLib * GetPtr();
	Scaleform::GFx::FontLib & operator*();
	Scaleform::GFx::FontLib * operator->();
	Scaleform::GFx::FontLib * operator class Scaleform::GFx::FontLib *();
	Scaleform::Ptr<Scaleform::GFx::FontLib> & Pick(Scaleform::GFx::FontLib *);
	Scaleform::Ptr<Scaleform::GFx::FontLib> & Pick(Scaleform::Pickable<Scaleform::GFx::FontLib>);
	Scaleform::Ptr<Scaleform::GFx::FontLib> & Pick(Scaleform::Ptr<Scaleform::GFx::FontLib> &);
};
class Scaleform::Ptr<Scaleform::GFx::FontProvider>
{
protected:
	Scaleform::GFx::FontProvider * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::FontProvider>(const Scaleform::Ptr<Scaleform::GFx::FontProvider> &);
	Ptr<Scaleform::GFx::FontProvider>(Scaleform::GFx::FontProvider *);
	Ptr<Scaleform::GFx::FontProvider>(Scaleform::Ptr<Scaleform::GFx::FontProvider> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::FontProvider>(Scaleform::Pickable<Scaleform::GFx::FontProvider>);
	Ptr<Scaleform::GFx::FontProvider>(Scaleform::GFx::FontProvider &);
	Ptr<Scaleform::GFx::FontProvider>();
	~Ptr<Scaleform::GFx::FontProvider>();
	bool operator==(Scaleform::GFx::FontProvider *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::FontProvider> &);
	bool operator!=(Scaleform::GFx::FontProvider *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::FontProvider> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::FontProvider> &);
	Scaleform::Ptr<Scaleform::GFx::FontProvider> & operator=(Scaleform::Pickable<Scaleform::GFx::FontProvider>);
	const Scaleform::Ptr<Scaleform::GFx::FontProvider> & operator=(Scaleform::GFx::FontProvider &);
	const Scaleform::Ptr<Scaleform::GFx::FontProvider> & operator=(Scaleform::GFx::FontProvider *);
	const Scaleform::Ptr<Scaleform::GFx::FontProvider> & operator=(const Scaleform::Ptr<Scaleform::GFx::FontProvider> &);
	Scaleform::Ptr<Scaleform::GFx::FontProvider> & SetPtr(Scaleform::Pickable<Scaleform::GFx::FontProvider>);
	Scaleform::Ptr<Scaleform::GFx::FontProvider> & SetPtr(Scaleform::GFx::FontProvider &);
	Scaleform::Ptr<Scaleform::GFx::FontProvider> & SetPtr(Scaleform::GFx::FontProvider *);
	Scaleform::Ptr<Scaleform::GFx::FontProvider> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::FontProvider> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::FontProvider * & GetRawRef();
	Scaleform::GFx::FontProvider * GetPtr();
	Scaleform::GFx::FontProvider & operator*();
	Scaleform::GFx::FontProvider * operator->();
	Scaleform::GFx::FontProvider * operator class Scaleform::GFx::FontProvider *();
	Scaleform::Ptr<Scaleform::GFx::FontProvider> & Pick(Scaleform::GFx::FontProvider *);
	Scaleform::Ptr<Scaleform::GFx::FontProvider> & Pick(Scaleform::Pickable<Scaleform::GFx::FontProvider>);
	Scaleform::Ptr<Scaleform::GFx::FontProvider> & Pick(Scaleform::Ptr<Scaleform::GFx::FontProvider> &);
};
class Scaleform::Ptr<Scaleform::GFx::FontMap>
{
protected:
	Scaleform::GFx::FontMap * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::FontMap>(const Scaleform::Ptr<Scaleform::GFx::FontMap> &);
	Ptr<Scaleform::GFx::FontMap>(Scaleform::GFx::FontMap *);
	Ptr<Scaleform::GFx::FontMap>(Scaleform::Ptr<Scaleform::GFx::FontMap> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::FontMap>(Scaleform::Pickable<Scaleform::GFx::FontMap>);
	Ptr<Scaleform::GFx::FontMap>(Scaleform::GFx::FontMap &);
	Ptr<Scaleform::GFx::FontMap>();
	~Ptr<Scaleform::GFx::FontMap>();
	bool operator==(Scaleform::GFx::FontMap *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::FontMap> &);
	bool operator!=(Scaleform::GFx::FontMap *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::FontMap> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::FontMap> &);
	Scaleform::Ptr<Scaleform::GFx::FontMap> & operator=(Scaleform::Pickable<Scaleform::GFx::FontMap>);
	const Scaleform::Ptr<Scaleform::GFx::FontMap> & operator=(Scaleform::GFx::FontMap &);
	const Scaleform::Ptr<Scaleform::GFx::FontMap> & operator=(Scaleform::GFx::FontMap *);
	const Scaleform::Ptr<Scaleform::GFx::FontMap> & operator=(const Scaleform::Ptr<Scaleform::GFx::FontMap> &);
	Scaleform::Ptr<Scaleform::GFx::FontMap> & SetPtr(Scaleform::Pickable<Scaleform::GFx::FontMap>);
	Scaleform::Ptr<Scaleform::GFx::FontMap> & SetPtr(Scaleform::GFx::FontMap &);
	Scaleform::Ptr<Scaleform::GFx::FontMap> & SetPtr(Scaleform::GFx::FontMap *);
	Scaleform::Ptr<Scaleform::GFx::FontMap> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::FontMap> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::FontMap * & GetRawRef();
	Scaleform::GFx::FontMap * GetPtr();
	Scaleform::GFx::FontMap & operator*();
	Scaleform::GFx::FontMap * operator->();
	Scaleform::GFx::FontMap * operator class Scaleform::GFx::FontMap *();
	Scaleform::Ptr<Scaleform::GFx::FontMap> & Pick(Scaleform::GFx::FontMap *);
	Scaleform::Ptr<Scaleform::GFx::FontMap> & Pick(Scaleform::Pickable<Scaleform::GFx::FontMap>);
	Scaleform::Ptr<Scaleform::GFx::FontMap> & Pick(Scaleform::Ptr<Scaleform::GFx::FontMap> &);
};
class Scaleform::Ptr<Scaleform::GFx::ImagePackParams>
{
protected:
	Scaleform::GFx::ImagePackParams * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ImagePackParams>(const Scaleform::Ptr<Scaleform::GFx::ImagePackParams> &);
	Ptr<Scaleform::GFx::ImagePackParams>(Scaleform::GFx::ImagePackParams *);
	Ptr<Scaleform::GFx::ImagePackParams>(Scaleform::Ptr<Scaleform::GFx::ImagePackParams> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ImagePackParams>(Scaleform::Pickable<Scaleform::GFx::ImagePackParams>);
	Ptr<Scaleform::GFx::ImagePackParams>(Scaleform::GFx::ImagePackParams &);
	Ptr<Scaleform::GFx::ImagePackParams>();
	~Ptr<Scaleform::GFx::ImagePackParams>();
	bool operator==(Scaleform::GFx::ImagePackParams *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ImagePackParams> &);
	bool operator!=(Scaleform::GFx::ImagePackParams *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ImagePackParams> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ImagePackParams> &);
	Scaleform::Ptr<Scaleform::GFx::ImagePackParams> & operator=(Scaleform::Pickable<Scaleform::GFx::ImagePackParams>);
	const Scaleform::Ptr<Scaleform::GFx::ImagePackParams> & operator=(Scaleform::GFx::ImagePackParams &);
	const Scaleform::Ptr<Scaleform::GFx::ImagePackParams> & operator=(Scaleform::GFx::ImagePackParams *);
	const Scaleform::Ptr<Scaleform::GFx::ImagePackParams> & operator=(const Scaleform::Ptr<Scaleform::GFx::ImagePackParams> &);
	Scaleform::Ptr<Scaleform::GFx::ImagePackParams> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ImagePackParams>);
	Scaleform::Ptr<Scaleform::GFx::ImagePackParams> & SetPtr(Scaleform::GFx::ImagePackParams &);
	Scaleform::Ptr<Scaleform::GFx::ImagePackParams> & SetPtr(Scaleform::GFx::ImagePackParams *);
	Scaleform::Ptr<Scaleform::GFx::ImagePackParams> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ImagePackParams> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ImagePackParams * & GetRawRef();
	Scaleform::GFx::ImagePackParams * GetPtr();
	Scaleform::GFx::ImagePackParams & operator*();
	Scaleform::GFx::ImagePackParams * operator->();
	Scaleform::GFx::ImagePackParams * operator class Scaleform::GFx::ImagePackParams *();
	Scaleform::Ptr<Scaleform::GFx::ImagePackParams> & Pick(Scaleform::GFx::ImagePackParams *);
	Scaleform::Ptr<Scaleform::GFx::ImagePackParams> & Pick(Scaleform::Pickable<Scaleform::GFx::ImagePackParams>);
	Scaleform::Ptr<Scaleform::GFx::ImagePackParams> & Pick(Scaleform::Ptr<Scaleform::GFx::ImagePackParams> &);
};
class Scaleform::Ptr<Scaleform::GFx::TaskManager>
{
protected:
	Scaleform::GFx::TaskManager * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::TaskManager>(const Scaleform::Ptr<Scaleform::GFx::TaskManager> &);
	Ptr<Scaleform::GFx::TaskManager>(Scaleform::GFx::TaskManager *);
	Ptr<Scaleform::GFx::TaskManager>(Scaleform::Ptr<Scaleform::GFx::TaskManager> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::TaskManager>(Scaleform::Pickable<Scaleform::GFx::TaskManager>);
	Ptr<Scaleform::GFx::TaskManager>(Scaleform::GFx::TaskManager &);
	Ptr<Scaleform::GFx::TaskManager>();
	~Ptr<Scaleform::GFx::TaskManager>();
	bool operator==(Scaleform::GFx::TaskManager *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::TaskManager> &);
	bool operator!=(Scaleform::GFx::TaskManager *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::TaskManager> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::TaskManager> &);
	Scaleform::Ptr<Scaleform::GFx::TaskManager> & operator=(Scaleform::Pickable<Scaleform::GFx::TaskManager>);
	const Scaleform::Ptr<Scaleform::GFx::TaskManager> & operator=(Scaleform::GFx::TaskManager &);
	const Scaleform::Ptr<Scaleform::GFx::TaskManager> & operator=(Scaleform::GFx::TaskManager *);
	const Scaleform::Ptr<Scaleform::GFx::TaskManager> & operator=(const Scaleform::Ptr<Scaleform::GFx::TaskManager> &);
	Scaleform::Ptr<Scaleform::GFx::TaskManager> & SetPtr(Scaleform::Pickable<Scaleform::GFx::TaskManager>);
	Scaleform::Ptr<Scaleform::GFx::TaskManager> & SetPtr(Scaleform::GFx::TaskManager &);
	Scaleform::Ptr<Scaleform::GFx::TaskManager> & SetPtr(Scaleform::GFx::TaskManager *);
	Scaleform::Ptr<Scaleform::GFx::TaskManager> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::TaskManager> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::TaskManager * & GetRawRef();
	Scaleform::GFx::TaskManager * GetPtr();
	Scaleform::GFx::TaskManager & operator*();
	Scaleform::GFx::TaskManager * operator->();
	Scaleform::GFx::TaskManager * operator class Scaleform::GFx::TaskManager *();
	Scaleform::Ptr<Scaleform::GFx::TaskManager> & Pick(Scaleform::GFx::TaskManager *);
	Scaleform::Ptr<Scaleform::GFx::TaskManager> & Pick(Scaleform::Pickable<Scaleform::GFx::TaskManager>);
	Scaleform::Ptr<Scaleform::GFx::TaskManager> & Pick(Scaleform::Ptr<Scaleform::GFx::TaskManager> &);
};
class Scaleform::Ptr<Scaleform::GFx::Clipboard>
{
protected:
	Scaleform::GFx::Clipboard * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::Clipboard>(const Scaleform::Ptr<Scaleform::GFx::Clipboard> &);
	Ptr<Scaleform::GFx::Clipboard>(Scaleform::GFx::Clipboard *);
	Ptr<Scaleform::GFx::Clipboard>(Scaleform::Ptr<Scaleform::GFx::Clipboard> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::Clipboard>(Scaleform::Pickable<Scaleform::GFx::Clipboard>);
	Ptr<Scaleform::GFx::Clipboard>(Scaleform::GFx::Clipboard &);
	Ptr<Scaleform::GFx::Clipboard>();
	~Ptr<Scaleform::GFx::Clipboard>();
	bool operator==(Scaleform::GFx::Clipboard *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::Clipboard> &);
	bool operator!=(Scaleform::GFx::Clipboard *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::Clipboard> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::Clipboard> &);
	Scaleform::Ptr<Scaleform::GFx::Clipboard> & operator=(Scaleform::Pickable<Scaleform::GFx::Clipboard>);
	const Scaleform::Ptr<Scaleform::GFx::Clipboard> & operator=(Scaleform::GFx::Clipboard &);
	const Scaleform::Ptr<Scaleform::GFx::Clipboard> & operator=(Scaleform::GFx::Clipboard *);
	const Scaleform::Ptr<Scaleform::GFx::Clipboard> & operator=(const Scaleform::Ptr<Scaleform::GFx::Clipboard> &);
	Scaleform::Ptr<Scaleform::GFx::Clipboard> & SetPtr(Scaleform::Pickable<Scaleform::GFx::Clipboard>);
	Scaleform::Ptr<Scaleform::GFx::Clipboard> & SetPtr(Scaleform::GFx::Clipboard &);
	Scaleform::Ptr<Scaleform::GFx::Clipboard> & SetPtr(Scaleform::GFx::Clipboard *);
	Scaleform::Ptr<Scaleform::GFx::Clipboard> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::Clipboard> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::Clipboard * & GetRawRef();
	Scaleform::GFx::Clipboard * GetPtr();
	Scaleform::GFx::Clipboard & operator*();
	Scaleform::GFx::Clipboard * operator->();
	Scaleform::GFx::Clipboard * operator class Scaleform::GFx::Clipboard *();
	Scaleform::Ptr<Scaleform::GFx::Clipboard> & Pick(Scaleform::GFx::Clipboard *);
	Scaleform::Ptr<Scaleform::GFx::Clipboard> & Pick(Scaleform::Pickable<Scaleform::GFx::Clipboard>);
	Scaleform::Ptr<Scaleform::GFx::Clipboard> & Pick(Scaleform::Ptr<Scaleform::GFx::Clipboard> &);
};
class Scaleform::Ptr<Scaleform::GFx::TextKeyMap>
{
protected:
	Scaleform::GFx::TextKeyMap * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::TextKeyMap>(const Scaleform::Ptr<Scaleform::GFx::TextKeyMap> &);
	Ptr<Scaleform::GFx::TextKeyMap>(Scaleform::GFx::TextKeyMap *);
	Ptr<Scaleform::GFx::TextKeyMap>(Scaleform::Ptr<Scaleform::GFx::TextKeyMap> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::TextKeyMap>(Scaleform::Pickable<Scaleform::GFx::TextKeyMap>);
	Ptr<Scaleform::GFx::TextKeyMap>(Scaleform::GFx::TextKeyMap &);
	Ptr<Scaleform::GFx::TextKeyMap>();
	~Ptr<Scaleform::GFx::TextKeyMap>();
	bool operator==(Scaleform::GFx::TextKeyMap *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::TextKeyMap> &);
	bool operator!=(Scaleform::GFx::TextKeyMap *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::TextKeyMap> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::TextKeyMap> &);
	Scaleform::Ptr<Scaleform::GFx::TextKeyMap> & operator=(Scaleform::Pickable<Scaleform::GFx::TextKeyMap>);
	const Scaleform::Ptr<Scaleform::GFx::TextKeyMap> & operator=(Scaleform::GFx::TextKeyMap &);
	const Scaleform::Ptr<Scaleform::GFx::TextKeyMap> & operator=(Scaleform::GFx::TextKeyMap *);
	const Scaleform::Ptr<Scaleform::GFx::TextKeyMap> & operator=(const Scaleform::Ptr<Scaleform::GFx::TextKeyMap> &);
	Scaleform::Ptr<Scaleform::GFx::TextKeyMap> & SetPtr(Scaleform::Pickable<Scaleform::GFx::TextKeyMap>);
	Scaleform::Ptr<Scaleform::GFx::TextKeyMap> & SetPtr(Scaleform::GFx::TextKeyMap &);
	Scaleform::Ptr<Scaleform::GFx::TextKeyMap> & SetPtr(Scaleform::GFx::TextKeyMap *);
	Scaleform::Ptr<Scaleform::GFx::TextKeyMap> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::TextKeyMap> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::TextKeyMap * & GetRawRef();
	Scaleform::GFx::TextKeyMap * GetPtr();
	Scaleform::GFx::TextKeyMap & operator*();
	Scaleform::GFx::TextKeyMap * operator->();
	Scaleform::GFx::TextKeyMap * operator class Scaleform::GFx::TextKeyMap *();
	Scaleform::Ptr<Scaleform::GFx::TextKeyMap> & Pick(Scaleform::GFx::TextKeyMap *);
	Scaleform::Ptr<Scaleform::GFx::TextKeyMap> & Pick(Scaleform::Pickable<Scaleform::GFx::TextKeyMap>);
	Scaleform::Ptr<Scaleform::GFx::TextKeyMap> & Pick(Scaleform::Ptr<Scaleform::GFx::TextKeyMap> &);
};
class Scaleform::Ptr<Scaleform::GFx::IMEManagerBase>
{
protected:
	Scaleform::GFx::IMEManagerBase * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::IMEManagerBase>(const Scaleform::Ptr<Scaleform::GFx::IMEManagerBase> &);
	Ptr<Scaleform::GFx::IMEManagerBase>(Scaleform::GFx::IMEManagerBase *);
	Ptr<Scaleform::GFx::IMEManagerBase>(Scaleform::Ptr<Scaleform::GFx::IMEManagerBase> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::IMEManagerBase>(Scaleform::Pickable<Scaleform::GFx::IMEManagerBase>);
	Ptr<Scaleform::GFx::IMEManagerBase>(Scaleform::GFx::IMEManagerBase &);
	Ptr<Scaleform::GFx::IMEManagerBase>();
	~Ptr<Scaleform::GFx::IMEManagerBase>();
	bool operator==(Scaleform::GFx::IMEManagerBase *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::IMEManagerBase> &);
	bool operator!=(Scaleform::GFx::IMEManagerBase *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::IMEManagerBase> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::IMEManagerBase> &);
	Scaleform::Ptr<Scaleform::GFx::IMEManagerBase> & operator=(Scaleform::Pickable<Scaleform::GFx::IMEManagerBase>);
	const Scaleform::Ptr<Scaleform::GFx::IMEManagerBase> & operator=(Scaleform::GFx::IMEManagerBase &);
	const Scaleform::Ptr<Scaleform::GFx::IMEManagerBase> & operator=(Scaleform::GFx::IMEManagerBase *);
	const Scaleform::Ptr<Scaleform::GFx::IMEManagerBase> & operator=(const Scaleform::Ptr<Scaleform::GFx::IMEManagerBase> &);
	Scaleform::Ptr<Scaleform::GFx::IMEManagerBase> & SetPtr(Scaleform::Pickable<Scaleform::GFx::IMEManagerBase>);
	Scaleform::Ptr<Scaleform::GFx::IMEManagerBase> & SetPtr(Scaleform::GFx::IMEManagerBase &);
	Scaleform::Ptr<Scaleform::GFx::IMEManagerBase> & SetPtr(Scaleform::GFx::IMEManagerBase *);
	Scaleform::Ptr<Scaleform::GFx::IMEManagerBase> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::IMEManagerBase> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::IMEManagerBase * & GetRawRef();
	Scaleform::GFx::IMEManagerBase * GetPtr();
	Scaleform::GFx::IMEManagerBase & operator*();
	Scaleform::GFx::IMEManagerBase * operator->();
	Scaleform::GFx::IMEManagerBase * operator class Scaleform::GFx::IMEManagerBase *();
	Scaleform::Ptr<Scaleform::GFx::IMEManagerBase> & Pick(Scaleform::GFx::IMEManagerBase *);
	Scaleform::Ptr<Scaleform::GFx::IMEManagerBase> & Pick(Scaleform::Pickable<Scaleform::GFx::IMEManagerBase>);
	Scaleform::Ptr<Scaleform::GFx::IMEManagerBase> & Pick(Scaleform::Ptr<Scaleform::GFx::IMEManagerBase> &);
};
class Scaleform::Ptr<Scaleform::GFx::XML::SupportBase>
{
protected:
	Scaleform::GFx::XML::SupportBase * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::XML::SupportBase>(const Scaleform::Ptr<Scaleform::GFx::XML::SupportBase> &);
	Ptr<Scaleform::GFx::XML::SupportBase>(Scaleform::GFx::XML::SupportBase *);
	Ptr<Scaleform::GFx::XML::SupportBase>(Scaleform::Ptr<Scaleform::GFx::XML::SupportBase> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::XML::SupportBase>(Scaleform::Pickable<Scaleform::GFx::XML::SupportBase>);
	Ptr<Scaleform::GFx::XML::SupportBase>(Scaleform::GFx::XML::SupportBase &);
	Ptr<Scaleform::GFx::XML::SupportBase>();
	~Ptr<Scaleform::GFx::XML::SupportBase>();
	bool operator==(Scaleform::GFx::XML::SupportBase *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::XML::SupportBase> &);
	bool operator!=(Scaleform::GFx::XML::SupportBase *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::XML::SupportBase> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::XML::SupportBase> &);
	Scaleform::Ptr<Scaleform::GFx::XML::SupportBase> & operator=(Scaleform::Pickable<Scaleform::GFx::XML::SupportBase>);
	const Scaleform::Ptr<Scaleform::GFx::XML::SupportBase> & operator=(Scaleform::GFx::XML::SupportBase &);
	const Scaleform::Ptr<Scaleform::GFx::XML::SupportBase> & operator=(Scaleform::GFx::XML::SupportBase *);
	const Scaleform::Ptr<Scaleform::GFx::XML::SupportBase> & operator=(const Scaleform::Ptr<Scaleform::GFx::XML::SupportBase> &);
	Scaleform::Ptr<Scaleform::GFx::XML::SupportBase> & SetPtr(Scaleform::Pickable<Scaleform::GFx::XML::SupportBase>);
	Scaleform::Ptr<Scaleform::GFx::XML::SupportBase> & SetPtr(Scaleform::GFx::XML::SupportBase &);
	Scaleform::Ptr<Scaleform::GFx::XML::SupportBase> & SetPtr(Scaleform::GFx::XML::SupportBase *);
	Scaleform::Ptr<Scaleform::GFx::XML::SupportBase> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::XML::SupportBase> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::XML::SupportBase * & GetRawRef();
	Scaleform::GFx::XML::SupportBase * GetPtr();
	Scaleform::GFx::XML::SupportBase & operator*();
	Scaleform::GFx::XML::SupportBase * operator->();
	Scaleform::GFx::XML::SupportBase * operator class Scaleform::GFx::XML::SupportBase *();
	Scaleform::Ptr<Scaleform::GFx::XML::SupportBase> & Pick(Scaleform::GFx::XML::SupportBase *);
	Scaleform::Ptr<Scaleform::GFx::XML::SupportBase> & Pick(Scaleform::Pickable<Scaleform::GFx::XML::SupportBase>);
	Scaleform::Ptr<Scaleform::GFx::XML::SupportBase> & Pick(Scaleform::Ptr<Scaleform::GFx::XML::SupportBase> &);
};
class Scaleform::Ptr<Scaleform::GFx::ZlibSupportBase>
{
protected:
	Scaleform::GFx::ZlibSupportBase * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ZlibSupportBase>(const Scaleform::Ptr<Scaleform::GFx::ZlibSupportBase> &);
	Ptr<Scaleform::GFx::ZlibSupportBase>(Scaleform::GFx::ZlibSupportBase *);
	Ptr<Scaleform::GFx::ZlibSupportBase>(Scaleform::Ptr<Scaleform::GFx::ZlibSupportBase> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ZlibSupportBase>(Scaleform::Pickable<Scaleform::GFx::ZlibSupportBase>);
	Ptr<Scaleform::GFx::ZlibSupportBase>(Scaleform::GFx::ZlibSupportBase &);
	Ptr<Scaleform::GFx::ZlibSupportBase>();
	~Ptr<Scaleform::GFx::ZlibSupportBase>();
	bool operator==(Scaleform::GFx::ZlibSupportBase *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ZlibSupportBase> &);
	bool operator!=(Scaleform::GFx::ZlibSupportBase *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ZlibSupportBase> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ZlibSupportBase> &);
	Scaleform::Ptr<Scaleform::GFx::ZlibSupportBase> & operator=(Scaleform::Pickable<Scaleform::GFx::ZlibSupportBase>);
	const Scaleform::Ptr<Scaleform::GFx::ZlibSupportBase> & operator=(Scaleform::GFx::ZlibSupportBase &);
	const Scaleform::Ptr<Scaleform::GFx::ZlibSupportBase> & operator=(Scaleform::GFx::ZlibSupportBase *);
	const Scaleform::Ptr<Scaleform::GFx::ZlibSupportBase> & operator=(const Scaleform::Ptr<Scaleform::GFx::ZlibSupportBase> &);
	Scaleform::Ptr<Scaleform::GFx::ZlibSupportBase> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ZlibSupportBase>);
	Scaleform::Ptr<Scaleform::GFx::ZlibSupportBase> & SetPtr(Scaleform::GFx::ZlibSupportBase &);
	Scaleform::Ptr<Scaleform::GFx::ZlibSupportBase> & SetPtr(Scaleform::GFx::ZlibSupportBase *);
	Scaleform::Ptr<Scaleform::GFx::ZlibSupportBase> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ZlibSupportBase> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ZlibSupportBase * & GetRawRef();
	Scaleform::GFx::ZlibSupportBase * GetPtr();
	Scaleform::GFx::ZlibSupportBase & operator*();
	Scaleform::GFx::ZlibSupportBase * operator->();
	Scaleform::GFx::ZlibSupportBase * operator class Scaleform::GFx::ZlibSupportBase *();
	Scaleform::Ptr<Scaleform::GFx::ZlibSupportBase> & Pick(Scaleform::GFx::ZlibSupportBase *);
	Scaleform::Ptr<Scaleform::GFx::ZlibSupportBase> & Pick(Scaleform::Pickable<Scaleform::GFx::ZlibSupportBase>);
	Scaleform::Ptr<Scaleform::GFx::ZlibSupportBase> & Pick(Scaleform::Ptr<Scaleform::GFx::ZlibSupportBase> &);
};
class Scaleform::Ptr<Scaleform::GFx::FontCompactorParams>
{
protected:
	Scaleform::GFx::FontCompactorParams * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::FontCompactorParams>(const Scaleform::Ptr<Scaleform::GFx::FontCompactorParams> &);
	Ptr<Scaleform::GFx::FontCompactorParams>(Scaleform::GFx::FontCompactorParams *);
	Ptr<Scaleform::GFx::FontCompactorParams>(Scaleform::Ptr<Scaleform::GFx::FontCompactorParams> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::FontCompactorParams>(Scaleform::Pickable<Scaleform::GFx::FontCompactorParams>);
	Ptr<Scaleform::GFx::FontCompactorParams>(Scaleform::GFx::FontCompactorParams &);
	Ptr<Scaleform::GFx::FontCompactorParams>();
	~Ptr<Scaleform::GFx::FontCompactorParams>();
	bool operator==(Scaleform::GFx::FontCompactorParams *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::FontCompactorParams> &);
	bool operator!=(Scaleform::GFx::FontCompactorParams *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::FontCompactorParams> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::FontCompactorParams> &);
	Scaleform::Ptr<Scaleform::GFx::FontCompactorParams> & operator=(Scaleform::Pickable<Scaleform::GFx::FontCompactorParams>);
	const Scaleform::Ptr<Scaleform::GFx::FontCompactorParams> & operator=(Scaleform::GFx::FontCompactorParams &);
	const Scaleform::Ptr<Scaleform::GFx::FontCompactorParams> & operator=(Scaleform::GFx::FontCompactorParams *);
	const Scaleform::Ptr<Scaleform::GFx::FontCompactorParams> & operator=(const Scaleform::Ptr<Scaleform::GFx::FontCompactorParams> &);
	Scaleform::Ptr<Scaleform::GFx::FontCompactorParams> & SetPtr(Scaleform::Pickable<Scaleform::GFx::FontCompactorParams>);
	Scaleform::Ptr<Scaleform::GFx::FontCompactorParams> & SetPtr(Scaleform::GFx::FontCompactorParams &);
	Scaleform::Ptr<Scaleform::GFx::FontCompactorParams> & SetPtr(Scaleform::GFx::FontCompactorParams *);
	Scaleform::Ptr<Scaleform::GFx::FontCompactorParams> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::FontCompactorParams> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::FontCompactorParams * & GetRawRef();
	Scaleform::GFx::FontCompactorParams * GetPtr();
	Scaleform::GFx::FontCompactorParams & operator*();
	Scaleform::GFx::FontCompactorParams * operator->();
	Scaleform::GFx::FontCompactorParams * operator class Scaleform::GFx::FontCompactorParams *();
	Scaleform::Ptr<Scaleform::GFx::FontCompactorParams> & Pick(Scaleform::GFx::FontCompactorParams *);
	Scaleform::Ptr<Scaleform::GFx::FontCompactorParams> & Pick(Scaleform::Pickable<Scaleform::GFx::FontCompactorParams>);
	Scaleform::Ptr<Scaleform::GFx::FontCompactorParams> & Pick(Scaleform::Ptr<Scaleform::GFx::FontCompactorParams> &);
};
class Scaleform::Ptr<Scaleform::GFx::SharedObjectManagerBase>
{
protected:
	Scaleform::GFx::SharedObjectManagerBase * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::SharedObjectManagerBase>(const Scaleform::Ptr<Scaleform::GFx::SharedObjectManagerBase> &);
	Ptr<Scaleform::GFx::SharedObjectManagerBase>(Scaleform::GFx::SharedObjectManagerBase *);
	Ptr<Scaleform::GFx::SharedObjectManagerBase>(Scaleform::Ptr<Scaleform::GFx::SharedObjectManagerBase> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::SharedObjectManagerBase>(Scaleform::Pickable<Scaleform::GFx::SharedObjectManagerBase>);
	Ptr<Scaleform::GFx::SharedObjectManagerBase>(Scaleform::GFx::SharedObjectManagerBase &);
	Ptr<Scaleform::GFx::SharedObjectManagerBase>();
	~Ptr<Scaleform::GFx::SharedObjectManagerBase>();
	bool operator==(Scaleform::GFx::SharedObjectManagerBase *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::SharedObjectManagerBase> &);
	bool operator!=(Scaleform::GFx::SharedObjectManagerBase *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::SharedObjectManagerBase> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::SharedObjectManagerBase> &);
	Scaleform::Ptr<Scaleform::GFx::SharedObjectManagerBase> & operator=(Scaleform::Pickable<Scaleform::GFx::SharedObjectManagerBase>);
	const Scaleform::Ptr<Scaleform::GFx::SharedObjectManagerBase> & operator=(Scaleform::GFx::SharedObjectManagerBase &);
	const Scaleform::Ptr<Scaleform::GFx::SharedObjectManagerBase> & operator=(Scaleform::GFx::SharedObjectManagerBase *);
	const Scaleform::Ptr<Scaleform::GFx::SharedObjectManagerBase> & operator=(const Scaleform::Ptr<Scaleform::GFx::SharedObjectManagerBase> &);
	Scaleform::Ptr<Scaleform::GFx::SharedObjectManagerBase> & SetPtr(Scaleform::Pickable<Scaleform::GFx::SharedObjectManagerBase>);
	Scaleform::Ptr<Scaleform::GFx::SharedObjectManagerBase> & SetPtr(Scaleform::GFx::SharedObjectManagerBase &);
	Scaleform::Ptr<Scaleform::GFx::SharedObjectManagerBase> & SetPtr(Scaleform::GFx::SharedObjectManagerBase *);
	Scaleform::Ptr<Scaleform::GFx::SharedObjectManagerBase> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::SharedObjectManagerBase> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::SharedObjectManagerBase * & GetRawRef();
	Scaleform::GFx::SharedObjectManagerBase * GetPtr();
	Scaleform::GFx::SharedObjectManagerBase & operator*();
	Scaleform::GFx::SharedObjectManagerBase * operator->();
	Scaleform::GFx::SharedObjectManagerBase * operator class Scaleform::GFx::SharedObjectManagerBase *();
	Scaleform::Ptr<Scaleform::GFx::SharedObjectManagerBase> & Pick(Scaleform::GFx::SharedObjectManagerBase *);
	Scaleform::Ptr<Scaleform::GFx::SharedObjectManagerBase> & Pick(Scaleform::Pickable<Scaleform::GFx::SharedObjectManagerBase>);
	Scaleform::Ptr<Scaleform::GFx::SharedObjectManagerBase> & Pick(Scaleform::Ptr<Scaleform::GFx::SharedObjectManagerBase> &);
};
class Scaleform::Ptr<Scaleform::GFx::SharedObject3ManagerBase>
{
protected:
	Scaleform::GFx::SharedObject3ManagerBase * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::SharedObject3ManagerBase>(const Scaleform::Ptr<Scaleform::GFx::SharedObject3ManagerBase> &);
	Ptr<Scaleform::GFx::SharedObject3ManagerBase>(Scaleform::GFx::SharedObject3ManagerBase *);
	Ptr<Scaleform::GFx::SharedObject3ManagerBase>(Scaleform::Ptr<Scaleform::GFx::SharedObject3ManagerBase> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::SharedObject3ManagerBase>(Scaleform::Pickable<Scaleform::GFx::SharedObject3ManagerBase>);
	Ptr<Scaleform::GFx::SharedObject3ManagerBase>(Scaleform::GFx::SharedObject3ManagerBase &);
	Ptr<Scaleform::GFx::SharedObject3ManagerBase>();
	~Ptr<Scaleform::GFx::SharedObject3ManagerBase>();
	bool operator==(Scaleform::GFx::SharedObject3ManagerBase *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::SharedObject3ManagerBase> &);
	bool operator!=(Scaleform::GFx::SharedObject3ManagerBase *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::SharedObject3ManagerBase> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::SharedObject3ManagerBase> &);
	Scaleform::Ptr<Scaleform::GFx::SharedObject3ManagerBase> & operator=(Scaleform::Pickable<Scaleform::GFx::SharedObject3ManagerBase>);
	const Scaleform::Ptr<Scaleform::GFx::SharedObject3ManagerBase> & operator=(Scaleform::GFx::SharedObject3ManagerBase &);
	const Scaleform::Ptr<Scaleform::GFx::SharedObject3ManagerBase> & operator=(Scaleform::GFx::SharedObject3ManagerBase *);
	const Scaleform::Ptr<Scaleform::GFx::SharedObject3ManagerBase> & operator=(const Scaleform::Ptr<Scaleform::GFx::SharedObject3ManagerBase> &);
	Scaleform::Ptr<Scaleform::GFx::SharedObject3ManagerBase> & SetPtr(Scaleform::Pickable<Scaleform::GFx::SharedObject3ManagerBase>);
	Scaleform::Ptr<Scaleform::GFx::SharedObject3ManagerBase> & SetPtr(Scaleform::GFx::SharedObject3ManagerBase &);
	Scaleform::Ptr<Scaleform::GFx::SharedObject3ManagerBase> & SetPtr(Scaleform::GFx::SharedObject3ManagerBase *);
	Scaleform::Ptr<Scaleform::GFx::SharedObject3ManagerBase> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::SharedObject3ManagerBase> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::SharedObject3ManagerBase * & GetRawRef();
	Scaleform::GFx::SharedObject3ManagerBase * GetPtr();
	Scaleform::GFx::SharedObject3ManagerBase & operator*();
	Scaleform::GFx::SharedObject3ManagerBase * operator->();
	Scaleform::GFx::SharedObject3ManagerBase * operator class Scaleform::GFx::SharedObject3ManagerBase *();
	Scaleform::Ptr<Scaleform::GFx::SharedObject3ManagerBase> & Pick(Scaleform::GFx::SharedObject3ManagerBase *);
	Scaleform::Ptr<Scaleform::GFx::SharedObject3ManagerBase> & Pick(Scaleform::Pickable<Scaleform::GFx::SharedObject3ManagerBase>);
	Scaleform::Ptr<Scaleform::GFx::SharedObject3ManagerBase> & Pick(Scaleform::Ptr<Scaleform::GFx::SharedObject3ManagerBase> &);
};
class Scaleform::Ptr<Scaleform::GFx::UrlNavigator>
{
protected:
	Scaleform::GFx::UrlNavigator * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::UrlNavigator>(const Scaleform::Ptr<Scaleform::GFx::UrlNavigator> &);
	Ptr<Scaleform::GFx::UrlNavigator>(Scaleform::GFx::UrlNavigator *);
	Ptr<Scaleform::GFx::UrlNavigator>(Scaleform::Ptr<Scaleform::GFx::UrlNavigator> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::UrlNavigator>(Scaleform::Pickable<Scaleform::GFx::UrlNavigator>);
	Ptr<Scaleform::GFx::UrlNavigator>(Scaleform::GFx::UrlNavigator &);
	Ptr<Scaleform::GFx::UrlNavigator>();
	~Ptr<Scaleform::GFx::UrlNavigator>();
	bool operator==(Scaleform::GFx::UrlNavigator *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::UrlNavigator> &);
	bool operator!=(Scaleform::GFx::UrlNavigator *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::UrlNavigator> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::UrlNavigator> &);
	Scaleform::Ptr<Scaleform::GFx::UrlNavigator> & operator=(Scaleform::Pickable<Scaleform::GFx::UrlNavigator>);
	const Scaleform::Ptr<Scaleform::GFx::UrlNavigator> & operator=(Scaleform::GFx::UrlNavigator &);
	const Scaleform::Ptr<Scaleform::GFx::UrlNavigator> & operator=(Scaleform::GFx::UrlNavigator *);
	const Scaleform::Ptr<Scaleform::GFx::UrlNavigator> & operator=(const Scaleform::Ptr<Scaleform::GFx::UrlNavigator> &);
	Scaleform::Ptr<Scaleform::GFx::UrlNavigator> & SetPtr(Scaleform::Pickable<Scaleform::GFx::UrlNavigator>);
	Scaleform::Ptr<Scaleform::GFx::UrlNavigator> & SetPtr(Scaleform::GFx::UrlNavigator &);
	Scaleform::Ptr<Scaleform::GFx::UrlNavigator> & SetPtr(Scaleform::GFx::UrlNavigator *);
	Scaleform::Ptr<Scaleform::GFx::UrlNavigator> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::UrlNavigator> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::UrlNavigator * & GetRawRef();
	Scaleform::GFx::UrlNavigator * GetPtr();
	Scaleform::GFx::UrlNavigator & operator*();
	Scaleform::GFx::UrlNavigator * operator->();
	Scaleform::GFx::UrlNavigator * operator class Scaleform::GFx::UrlNavigator *();
	Scaleform::Ptr<Scaleform::GFx::UrlNavigator> & Pick(Scaleform::GFx::UrlNavigator *);
	Scaleform::Ptr<Scaleform::GFx::UrlNavigator> & Pick(Scaleform::Pickable<Scaleform::GFx::UrlNavigator>);
	Scaleform::Ptr<Scaleform::GFx::UrlNavigator> & Pick(Scaleform::Ptr<Scaleform::GFx::UrlNavigator> &);
};
class Scaleform::Ptr<Scaleform::GFx::ASSupport>
{
protected:
	Scaleform::GFx::ASSupport * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ASSupport>(const Scaleform::Ptr<Scaleform::GFx::ASSupport> &);
	Ptr<Scaleform::GFx::ASSupport>(Scaleform::GFx::ASSupport *);
	Ptr<Scaleform::GFx::ASSupport>(Scaleform::Ptr<Scaleform::GFx::ASSupport> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ASSupport>(Scaleform::Pickable<Scaleform::GFx::ASSupport>);
	Ptr<Scaleform::GFx::ASSupport>(Scaleform::GFx::ASSupport &);
	Ptr<Scaleform::GFx::ASSupport>();
	~Ptr<Scaleform::GFx::ASSupport>();
	bool operator==(Scaleform::GFx::ASSupport *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ASSupport> &);
	bool operator!=(Scaleform::GFx::ASSupport *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ASSupport> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ASSupport> &);
	Scaleform::Ptr<Scaleform::GFx::ASSupport> & operator=(Scaleform::Pickable<Scaleform::GFx::ASSupport>);
	const Scaleform::Ptr<Scaleform::GFx::ASSupport> & operator=(Scaleform::GFx::ASSupport &);
	const Scaleform::Ptr<Scaleform::GFx::ASSupport> & operator=(Scaleform::GFx::ASSupport *);
	const Scaleform::Ptr<Scaleform::GFx::ASSupport> & operator=(const Scaleform::Ptr<Scaleform::GFx::ASSupport> &);
	Scaleform::Ptr<Scaleform::GFx::ASSupport> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ASSupport>);
	Scaleform::Ptr<Scaleform::GFx::ASSupport> & SetPtr(Scaleform::GFx::ASSupport &);
	Scaleform::Ptr<Scaleform::GFx::ASSupport> & SetPtr(Scaleform::GFx::ASSupport *);
	Scaleform::Ptr<Scaleform::GFx::ASSupport> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ASSupport> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ASSupport * & GetRawRef();
	Scaleform::GFx::ASSupport * GetPtr();
	Scaleform::GFx::ASSupport & operator*();
	Scaleform::GFx::ASSupport * operator->();
	Scaleform::GFx::ASSupport * operator class Scaleform::GFx::ASSupport *();
	Scaleform::Ptr<Scaleform::GFx::ASSupport> & Pick(Scaleform::GFx::ASSupport *);
	Scaleform::Ptr<Scaleform::GFx::ASSupport> & Pick(Scaleform::Pickable<Scaleform::GFx::ASSupport>);
	Scaleform::Ptr<Scaleform::GFx::ASSupport> & Pick(Scaleform::Ptr<Scaleform::GFx::ASSupport> &);
};
struct Scaleform::GFx::MovieInfo
{
	enum SWFFlagConstants
	{
		SWF_Compressed = 1,
		SWF_Stripped = 16,
	};
	unsigned long Version; // 0x0
	unsigned long Flags; // 0x4
	long Width; // 0x8
	long Height; // 0xC
	float FPS; // 0x10
	unsigned long FrameCount; // 0x14
	unsigned long TagCount; // 0x18
	unsigned short ExporterVersion; // 0x1C
	unsigned long ExporterFlags; // 0x20
	void Clear();
	bool IsStripped();
	bool IsCompressed();
};
struct Scaleform::GFx::ExporterInfo
{
	Scaleform::GFx::FileTypeConstants::FileFormatType Format; // 0x0
	const char * pPrefix; // 0x8
	const char * pSWFName; // 0x10
	unsigned short Version; // 0x18
	enum ExportFlagConstants
	{
		EXF_GlyphTexturesExported = 1,
		EXF_GradientTexturesExported = 2,
		EXF_GlyphsStripped = 16,
	};
	unsigned long ExportFlags; // 0x1C
};
class Scaleform::GFx::Loader :
	Scaleform::GFx::StateBag
{
private:
	Scaleform::GFx::LoaderImpl * pImpl; // 0x8
	Scaleform::GFx::ResourceLib * pStrongResourceLib; // 0x10
	unsigned long DefLoadFlags; // 0x18
protected:
	virtual Scaleform::GFx::StateBag * GetStateBagImpl();
	bool CheckTagLoader(long);
	enum LoadConstants
	{
		LoadAll = 0,
		LoadWaitCompletion = 1,
		LoadWaitFrame1 = 2,
		LoadOrdered = 16,
		LoadOnThread = 64,
		LoadKeepBindData = 128,
		LoadImageFiles = 65536,
		LoadDisableSWF = 524288,
		LoadDisableImports = 1048576,
		LoadQuietOpen = 2097152,
		LoadDebugHeap = 268435456,
	};
	struct LoaderConfig;
public:
	Loader(const Scaleform::GFx::Loader &);
	Loader(const Scaleform::Ptr<Scaleform::GFx::FileOpenerBase> &, const Scaleform::Ptr<Scaleform::GFx::ZlibSupportBase> &);
	Loader(const Scaleform::GFx::Loader::LoaderConfig &);
	virtual ~Loader();
	void SetResourceLib(Scaleform::GFx::ResourceLib *);
	Scaleform::GFx::ResourceLib * GetResourceLib();
	bool GetMovieInfo(const char *, Scaleform::GFx::MovieInfo *, bool, unsigned long);
	Scaleform::GFx::MovieDef * CreateMovie(const char *, unsigned long, unsigned long long);
	void UnpinAll();
	void CancelLoading();
	Scaleform::GFx::LoaderImpl * GetLoaderImpl();
private:
	void InitLoader(const Scaleform::GFx::Loader::LoaderConfig &);
	Scaleform::GFx::Loader & operator=(const Scaleform::GFx::Loader &);
public:
	void __dflt_ctor_closure();
};
struct Scaleform::GFx::Loader::LoaderConfig
{
	unsigned long DefLoadFlags; // 0x0
	Scaleform::Ptr<Scaleform::GFx::FileOpenerBase> pFileOpener; // 0x8
	Scaleform::Ptr<Scaleform::GFx::ZlibSupportBase> pZLibSupport; // 0x10
	LoaderConfig(const Scaleform::GFx::Loader::LoaderConfig &);
	LoaderConfig(unsigned long, const Scaleform::Ptr<Scaleform::GFx::FileOpenerBase> &, const Scaleform::Ptr<Scaleform::GFx::ZlibSupportBase> &);
	~LoaderConfig();
	Scaleform::GFx::Loader::LoaderConfig & operator=(const Scaleform::GFx::Loader::LoaderConfig &);
	void __dflt_ctor_closure();
};
class Scaleform::GFx::System :
	Scaleform::System
{
public:
	System(const Scaleform::MemoryHeap::HeapDesc &, Scaleform::SysAllocBase *);
	System(Scaleform::SysAllocBase *);
	~System();
	static void Init(Scaleform::SysAllocBase *);
	static void Init(const Scaleform::MemoryHeap::HeapDesc &, Scaleform::SysAllocBase *);
	static void Destroy();
	void __dflt_ctor_closure();
};
void Scaleform::GFx::System::Init(Scaleform::SysAllocBase * psysAlloc); // 0x14027F7E0