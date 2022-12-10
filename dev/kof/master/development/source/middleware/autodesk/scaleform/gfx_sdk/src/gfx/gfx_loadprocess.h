#pragma once

struct Scaleform::GFx::TempBindData :
	Scaleform::NewOverrideBase<2>
{
	Scaleform::HashSetLH<unsigned int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashsetCachedEntry<unsigned int,Scaleform::FixedSizeHash<unsigned int> > > FillStyleImageWrap; // 0x0
	TempBindData(Scaleform::GFx::TempBindData &);
	TempBindData(const Scaleform::GFx::TempBindData &);
	TempBindData();
	~TempBindData();
	Scaleform::GFx::TempBindData & operator=(Scaleform::GFx::TempBindData &);
	Scaleform::GFx::TempBindData & operator=(const Scaleform::GFx::TempBindData &);
};
class Scaleform::HashSetLH<unsigned int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashsetCachedEntry<unsigned int,Scaleform::FixedSizeHash<unsigned int> > > :
	Scaleform::HashSet<unsigned int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedEntry<unsigned int,Scaleform::FixedSizeHash<unsigned int> > >
{
	class SelfType;
	class BaseType;
	typedef unsigned long ValueType;
public:
	HashSetLH<unsigned int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashsetCachedEntry<unsigned int,Scaleform::FixedSizeHash<unsigned int> > >(const Scaleform::HashSetLH<unsigned int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashsetCachedEntry<unsigned int,Scaleform::FixedSizeHash<unsigned int> > > &);
	HashSetLH<unsigned int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashsetCachedEntry<unsigned int,Scaleform::FixedSizeHash<unsigned int> > >(long);
	HashSetLH<unsigned int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashsetCachedEntry<unsigned int,Scaleform::FixedSizeHash<unsigned int> > >();
	~HashSetLH<unsigned int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashsetCachedEntry<unsigned int,Scaleform::FixedSizeHash<unsigned int> > >();
	void operator=(const Scaleform::HashSetLH<unsigned int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashsetCachedEntry<unsigned int,Scaleform::FixedSizeHash<unsigned int> > > &);
};
class Scaleform::GFx::LoadProcess :
	Scaleform::GFx::LoaderTask,
	Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>
{
	class LoadTaskData;
private:
	unsigned long ParseFlags; // 0x28
	Scaleform::Ptr<Scaleform::GFx::MovieBindProcess> pBindProcess; // 0x30
	Scaleform::Ptr<Scaleform::GFx::MovieDataDef::LoadTaskData> pLoadData; // 0x38
	Scaleform::GFx::MovieDataDef * pDataDef_Unsafe; // 0x40
	Scaleform::GFx::SWFProcessInfo ProcessInfo; // 0x50
	Scaleform::Ptr<Scaleform::Render::JPEG::TablesHeader> pJpegTables; // 0x360
	unsigned long LoadFlags; // 0x368
	unsigned long ImportIndex; // 0x36C
	Scaleform::GFx::TempBindData * pTempBindData; // 0x370
	unsigned long ImportDataCount; // 0x378
	unsigned long ResourceDataCount; // 0x37C
	unsigned long FontDataCount; // 0x380
	Scaleform::GFx::ImportData * pImportDataLast; // 0x388
	Scaleform::GFx::ImportData * pImportData; // 0x390
	Scaleform::GFx::ResourceDataNode * pResourceData; // 0x398
	Scaleform::GFx::ResourceDataNode * pResourceDataLast; // 0x3A0
	Scaleform::GFx::FontDataUseNode * pFontData; // 0x3A8
	Scaleform::GFx::FontDataUseNode * pFontDataLast; // 0x3B0
	enum LoadStateType
	{
		LS_LoadingRoot = 0,
		LS_LoadingSprite = 1,
		LS_LoadState_Count = 2,
	};
	Scaleform::GFx::LoadProcess::LoadStateType LoadState; // 0x3B8
	Scaleform::GFx::TimelineIODef * pTimelineDef; // 0x3C0
	struct SizePolicyType;
	class ExecuteTagArrayType;
	Scaleform::Array<Scaleform::GFx::ExecuteTag *,2,Scaleform::ArrayConstPolicy<32,16,0> > FrameTags[2]; // 0x3C8
	Scaleform::Array<Scaleform::GFx::ExecuteTag *,2,Scaleform::ArrayConstPolicy<32,16,0> > InitActionTags; // 0x3F8
	unsigned long ASInitActionTagsNum; // 0x410
	Scaleform::GFx::Stream * pAltStream; // 0x418
public:
	LoadProcess(const Scaleform::GFx::LoadProcess &);
	LoadProcess(Scaleform::GFx::MovieDataDef *, Scaleform::GFx::LoadStates *, unsigned long);
	virtual ~LoadProcess();
	bool BeginSWFLoading(Scaleform::File *);
	void SetBindProcess(Scaleform::GFx::MovieBindProcess *);
	void SetJpegHeader(Scaleform::Render::JPEG::TablesHeader *);
	Scaleform::Render::JPEG::TablesHeader * GetJpegHeader();
	Scaleform::GFx::MovieDataDef * GetDataDef_Unsafe();
	const Scaleform::GFx::SWFProcessInfo & GetProcessInfo();
	Scaleform::GFx::MovieDataDef::LoadTaskData * GetLoadTaskData();
	const char * GetFileURL();
	unsigned long GetVersion();
	unsigned long GetLoadingFrame();
	unsigned long GetTotalFrames();
	const Scaleform::GFx::ExporterInfo * GetExporterInfo();
	Scaleform::GFx::ResourceWeakLib * GetWeakLib();
	Scaleform::GFx::LoadStates * GetLoadStates();
	Scaleform::GFx::MovieDefBindStates * GetBindStates();
	Scaleform::GFx::Stream * GetStream();
	void SetAltStream(Scaleform::GFx::Stream *);
	bool HasAltStream();
	unsigned char ReadU8();
	unsigned short ReadU16();
	unsigned long ReadU32();
	char ReadS8();
	short ReadS16();
	long ReadS32();
	void AlignStream();
	Scaleform::File * GetUnderlyingFile();
	long GetTagEndPosition();
	long Tell();
	void SetPosition(long);
	void ReadRgbaTag(Scaleform::Render::Color *, Scaleform::GFx::TagType);
	Scaleform::GFx::LogState * GetLogState();
	Scaleform::Log * GetLog();
	bool IsVerboseParse();
	bool IsVerboseParseShape();
	bool IsVerboseParseMorphShape();
	bool IsVerboseParseAction();
	bool IsLoadingImageData();
	bool IsLoadingFontShapes();
	Scaleform::MemoryHeap * GetLoadHeap();
	Scaleform::MemoryHeap * GetLoadImageHeap();
	void SetMetadata(unsigned char *, unsigned long);
	void SetFileAttributesA(unsigned long);
	unsigned long GetFileAttributes();
	void * AllocTagMemory(unsigned long long);
	Scaleform::GFx::ResourceId GetNextGradientId();
	Scaleform::GFx::ResourceHandle AddNewResourceHandle(Scaleform::GFx::ResourceId);
	void AddResource(Scaleform::GFx::ResourceId, Scaleform::GFx::Resource *);
	void AddCharacter(Scaleform::GFx::ResourceId, Scaleform::GFx::CharacterDef *);
	Scaleform::GFx::ResourceHandle AddDataResource(Scaleform::GFx::ResourceId, const Scaleform::GFx::ResourceData &);
	Scaleform::GFx::ResourceHandle AddFontDataResource(Scaleform::GFx::ResourceId, Scaleform::Render::Font *);
	void AddImageResource(Scaleform::GFx::ResourceId, Scaleform::Render::ImageSource *);
	void AddImportData(Scaleform::GFx::ImportData *);
	void ExportResource(const Scaleform::String &, Scaleform::GFx::ResourceId, const Scaleform::GFx::ResourceHandle &);
	bool GetResourceHandle(Scaleform::GFx::ResourceHandle *, Scaleform::GFx::ResourceId);
	Scaleform::Render::Font * GetFontData(Scaleform::GFx::ResourceId);
	Scaleform::GFx::FrameBindData * CreateFrameBindData();
	void EnterSpriteDef(Scaleform::GFx::TimelineIODef *);
	void LeaveSpriteDef();
	Scaleform::GFx::PathAllocator * GetPathAllocator();
	void AddFrameName(const Scaleform::String &, Scaleform::GFx::LogState *);
	void AddScene(const Scaleform::String &, unsigned long);
	bool HasScenes();
	Scaleform::GFx::MovieDataDef::SceneInfo * GetScene(unsigned long long);
	const Scaleform::GFx::MovieDataDef::SceneInfo * GetScene(unsigned long long);
	Scaleform::GFx::MovieDataDef::SceneInfo * GetScenes(unsigned long long *);
	const Scaleform::GFx::MovieDataDef::SceneInfo * GetScenes(unsigned long long *);
	void AddExecuteTag(Scaleform::GFx::ExecuteTag *);
	void AddInitAction(Scaleform::GFx::ResourceId, Scaleform::GFx::ExecuteTag *);
	unsigned long long GetInitActionTagsNum();
	unsigned long GetASInitActionTagsNum();
	void IncASInitActionTagsNum();
	Scaleform::GFx::TimelineDef::Frame TagArrayToFrame(Scaleform::Array<Scaleform::GFx::ExecuteTag *,2,Scaleform::ArrayConstPolicy<32,16,0> > &);
	void CommitFrameTags();
	void CleanupFrameTags();
	bool FrameTagsAvailable();
	void SetTempBindData(Scaleform::GFx::TempBindData *);
	Scaleform::GFx::TempBindData * GetTempBindData();
	void ReportProgress(const Scaleform::String &, const Scaleform::GFx::TagInfo &, bool);
	virtual void Execute();
	virtual void OnAbandon(bool);
	bool GetNextCodeOffset(long *);
	Scaleform::GFx::LoadProcess & operator=(const Scaleform::GFx::LoadProcess &);
};
class Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>
{
public:
	~LogBase<Scaleform::GFx::LoadProcess>();
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
	LogBase<Scaleform::GFx::LoadProcess>(const Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> &);
	LogBase<Scaleform::GFx::LoadProcess>();
	Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> & operator=(const Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> &);
};
class Scaleform::Ptr<Scaleform::GFx::MovieBindProcess>
{
protected:
	Scaleform::GFx::MovieBindProcess * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::MovieBindProcess>(const Scaleform::Ptr<Scaleform::GFx::MovieBindProcess> &);
	Ptr<Scaleform::GFx::MovieBindProcess>(Scaleform::GFx::MovieBindProcess *);
	Ptr<Scaleform::GFx::MovieBindProcess>(Scaleform::Ptr<Scaleform::GFx::MovieBindProcess> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::MovieBindProcess>(Scaleform::Pickable<Scaleform::GFx::MovieBindProcess>);
	Ptr<Scaleform::GFx::MovieBindProcess>(Scaleform::GFx::MovieBindProcess &);
	Ptr<Scaleform::GFx::MovieBindProcess>();
	~Ptr<Scaleform::GFx::MovieBindProcess>();
	bool operator==(Scaleform::GFx::MovieBindProcess *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::MovieBindProcess> &);
	bool operator!=(Scaleform::GFx::MovieBindProcess *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::MovieBindProcess> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::MovieBindProcess> &);
	Scaleform::Ptr<Scaleform::GFx::MovieBindProcess> & operator=(Scaleform::Pickable<Scaleform::GFx::MovieBindProcess>);
	const Scaleform::Ptr<Scaleform::GFx::MovieBindProcess> & operator=(Scaleform::GFx::MovieBindProcess &);
	const Scaleform::Ptr<Scaleform::GFx::MovieBindProcess> & operator=(Scaleform::GFx::MovieBindProcess *);
	const Scaleform::Ptr<Scaleform::GFx::MovieBindProcess> & operator=(const Scaleform::Ptr<Scaleform::GFx::MovieBindProcess> &);
	Scaleform::Ptr<Scaleform::GFx::MovieBindProcess> & SetPtr(Scaleform::Pickable<Scaleform::GFx::MovieBindProcess>);
	Scaleform::Ptr<Scaleform::GFx::MovieBindProcess> & SetPtr(Scaleform::GFx::MovieBindProcess &);
	Scaleform::Ptr<Scaleform::GFx::MovieBindProcess> & SetPtr(Scaleform::GFx::MovieBindProcess *);
	Scaleform::Ptr<Scaleform::GFx::MovieBindProcess> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::MovieBindProcess> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::MovieBindProcess * & GetRawRef();
	Scaleform::GFx::MovieBindProcess * GetPtr();
	Scaleform::GFx::MovieBindProcess & operator*();
	Scaleform::GFx::MovieBindProcess * operator->();
	Scaleform::GFx::MovieBindProcess * operator class Scaleform::GFx::MovieBindProcess *();
	Scaleform::Ptr<Scaleform::GFx::MovieBindProcess> & Pick(Scaleform::GFx::MovieBindProcess *);
	Scaleform::Ptr<Scaleform::GFx::MovieBindProcess> & Pick(Scaleform::Pickable<Scaleform::GFx::MovieBindProcess>);
	Scaleform::Ptr<Scaleform::GFx::MovieBindProcess> & Pick(Scaleform::Ptr<Scaleform::GFx::MovieBindProcess> &);
};
class Scaleform::Ptr<Scaleform::Render::JPEG::TablesHeader>
{
protected:
	Scaleform::Render::JPEG::TablesHeader * pObject; // 0x0
public:
	Ptr<Scaleform::Render::JPEG::TablesHeader>(const Scaleform::Ptr<Scaleform::Render::JPEG::TablesHeader> &);
	Ptr<Scaleform::Render::JPEG::TablesHeader>(Scaleform::Render::JPEG::TablesHeader *);
	Ptr<Scaleform::Render::JPEG::TablesHeader>(Scaleform::Ptr<Scaleform::Render::JPEG::TablesHeader> &, Scaleform::PickType);
	Ptr<Scaleform::Render::JPEG::TablesHeader>(Scaleform::Pickable<Scaleform::Render::JPEG::TablesHeader>);
	Ptr<Scaleform::Render::JPEG::TablesHeader>(Scaleform::Render::JPEG::TablesHeader &);
	Ptr<Scaleform::Render::JPEG::TablesHeader>();
	~Ptr<Scaleform::Render::JPEG::TablesHeader>();
	bool operator==(Scaleform::Render::JPEG::TablesHeader *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::JPEG::TablesHeader> &);
	bool operator!=(Scaleform::Render::JPEG::TablesHeader *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::JPEG::TablesHeader> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::JPEG::TablesHeader> &);
	Scaleform::Ptr<Scaleform::Render::JPEG::TablesHeader> & operator=(Scaleform::Pickable<Scaleform::Render::JPEG::TablesHeader>);
	const Scaleform::Ptr<Scaleform::Render::JPEG::TablesHeader> & operator=(Scaleform::Render::JPEG::TablesHeader &);
	const Scaleform::Ptr<Scaleform::Render::JPEG::TablesHeader> & operator=(Scaleform::Render::JPEG::TablesHeader *);
	const Scaleform::Ptr<Scaleform::Render::JPEG::TablesHeader> & operator=(const Scaleform::Ptr<Scaleform::Render::JPEG::TablesHeader> &);
	Scaleform::Ptr<Scaleform::Render::JPEG::TablesHeader> & SetPtr(Scaleform::Pickable<Scaleform::Render::JPEG::TablesHeader>);
	Scaleform::Ptr<Scaleform::Render::JPEG::TablesHeader> & SetPtr(Scaleform::Render::JPEG::TablesHeader &);
	Scaleform::Ptr<Scaleform::Render::JPEG::TablesHeader> & SetPtr(Scaleform::Render::JPEG::TablesHeader *);
	Scaleform::Ptr<Scaleform::Render::JPEG::TablesHeader> & SetPtr(const Scaleform::Ptr<Scaleform::Render::JPEG::TablesHeader> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::JPEG::TablesHeader * & GetRawRef();
	Scaleform::Render::JPEG::TablesHeader * GetPtr();
	Scaleform::Render::JPEG::TablesHeader & operator*();
	Scaleform::Render::JPEG::TablesHeader * operator->();
	Scaleform::Render::JPEG::TablesHeader * operator struct Scaleform::Render::JPEG::TablesHeader *();
	Scaleform::Ptr<Scaleform::Render::JPEG::TablesHeader> & Pick(Scaleform::Render::JPEG::TablesHeader *);
	Scaleform::Ptr<Scaleform::Render::JPEG::TablesHeader> & Pick(Scaleform::Pickable<Scaleform::Render::JPEG::TablesHeader>);
	Scaleform::Ptr<Scaleform::Render::JPEG::TablesHeader> & Pick(Scaleform::Ptr<Scaleform::Render::JPEG::TablesHeader> &);
};
struct Scaleform::ArrayConstPolicy<32,16,0>
{
	struct SelfType;
	ArrayConstPolicy<32,16,0>(const Scaleform::ArrayConstPolicy<32,16,0> &);
	ArrayConstPolicy<32,16,0>();
	unsigned long long GetMinCapacity();
	unsigned long long GetGranularity();
	bool NeverShrinking();
	unsigned long long GetCapacity();
	void SetCapacity(unsigned long long);
private:
	unsigned long long Capacity; // 0x0
};
class Scaleform::Array<Scaleform::GFx::ExecuteTag *,2,Scaleform::ArrayConstPolicy<32,16,0> > :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::ExecuteTag *,Scaleform::AllocatorGH<Scaleform::GFx::ExecuteTag *,2>,Scaleform::ArrayConstPolicy<32,16,0> > >
{
	typedef Scaleform::GFx::ExecuteTag ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<Scaleform::GFx::ExecuteTag *,2,Scaleform::ArrayConstPolicy<32,16,0> >(const Scaleform::Array<Scaleform::GFx::ExecuteTag *,2,Scaleform::ArrayConstPolicy<32,16,0> > &);
	Array<Scaleform::GFx::ExecuteTag *,2,Scaleform::ArrayConstPolicy<32,16,0> >(const Scaleform::ArrayConstPolicy<32,16,0> &);
	Array<Scaleform::GFx::ExecuteTag *,2,Scaleform::ArrayConstPolicy<32,16,0> >(long);
	Array<Scaleform::GFx::ExecuteTag *,2,Scaleform::ArrayConstPolicy<32,16,0> >();
	const Scaleform::Array<Scaleform::GFx::ExecuteTag *,2,Scaleform::ArrayConstPolicy<32,16,0> > & operator=(const Scaleform::Array<Scaleform::GFx::ExecuteTag *,2,Scaleform::ArrayConstPolicy<32,16,0> > &);
	~Array<Scaleform::GFx::ExecuteTag *,2,Scaleform::ArrayConstPolicy<32,16,0> >();
};
void Scaleform::GFx::LoadProcess::SetBindProcess(Scaleform::GFx::MovieBindProcess * pbindProcess); // 0x1406FC110
Scaleform::GFx::Stream * Scaleform::GFx::LoadProcess::GetStream(); // 0x14036E4F0
unsigned char Scaleform::GFx::LoadProcess::ReadU8(); // 0x14036E6C0
unsigned short Scaleform::GFx::LoadProcess::ReadU16(); // 0x1403E2FA0
unsigned long Scaleform::GFx::LoadProcess::ReadU32(); // 0x14036E640
Scaleform::File * Scaleform::GFx::LoadProcess::GetUnderlyingFile(); // 0x14036E510
Scaleform::GFx::AS3::DoAbc * Scaleform::GFx::LoadProcess::AllocTag<Scaleform::GFx::AS3::DoAbc>(); // 0x1404C3820
Scaleform::GFx::ImportData * Scaleform::GFx::LoadProcess::AllocMovieDefClass<Scaleform::GFx::ImportData>(); // 0x14036DD20
void Scaleform::GFx::LoadProcess::AddExecuteTag(Scaleform::GFx::ExecuteTag * ptag); // 0x14036E140
void Scaleform::GFx::LoadProcess::AddInitAction(Scaleform::GFx::ResourceId spriteId, Scaleform::GFx::ExecuteTag * ptag); // 0x1404C3C40
void Scaleform::GFx::LoadProcess::Execute(); // 0x1403477C0
void Scaleform::GFx::LoadProcess::OnAbandon(bool started); // 0x140347850
class Scaleform::GFx::ImageFileResourceCreator :
	Scaleform::GFx::ResourceData::DataInterface
{
	typedef void *DataHandle;
private:
	virtual bool CreateResource(void *, Scaleform::GFx::ResourceBindData *, Scaleform::GFx::LoadStates *, Scaleform::MemoryHeap *);
public:
	static Scaleform::GFx::ResourceData CreateImageFileResourceData(Scaleform::GFx::ImageFileInfo *);
	ImageFileResourceCreator(Scaleform::GFx::ImageFileResourceCreator &);
	ImageFileResourceCreator(const Scaleform::GFx::ImageFileResourceCreator &);
	ImageFileResourceCreator();
	virtual ~ImageFileResourceCreator();
	Scaleform::GFx::ImageFileResourceCreator & operator=(Scaleform::GFx::ImageFileResourceCreator &);
	Scaleform::GFx::ImageFileResourceCreator & operator=(const Scaleform::GFx::ImageFileResourceCreator &);
};
class Scaleform::GFx::ImageResourceCreator :
	Scaleform::GFx::ResourceData::DataInterface
{
	typedef void *DataHandle;
private:
	virtual bool CreateResource(void *, Scaleform::GFx::ResourceBindData *, Scaleform::GFx::LoadStates *, Scaleform::MemoryHeap *);
public:
	static Scaleform::GFx::ResourceData CreateImageResourceData(Scaleform::Render::ImageSource *);
	ImageResourceCreator(Scaleform::GFx::ImageResourceCreator &);
	ImageResourceCreator(const Scaleform::GFx::ImageResourceCreator &);
	ImageResourceCreator();
	virtual ~ImageResourceCreator();
	Scaleform::GFx::ImageResourceCreator & operator=(Scaleform::GFx::ImageResourceCreator &);
	Scaleform::GFx::ImageResourceCreator & operator=(const Scaleform::GFx::ImageResourceCreator &);
};
class Scaleform::GFx::SubImageResourceCreator :
	Scaleform::GFx::ResourceData::DataInterface
{
	typedef void *DataHandle;
private:
	virtual bool CreateResource(void *, Scaleform::GFx::ResourceBindData *, Scaleform::GFx::LoadStates *, Scaleform::MemoryHeap *);
public:
	static Scaleform::GFx::ResourceData CreateSubImageResourceData(Scaleform::GFx::SubImageResourceInfo *);
	SubImageResourceCreator(Scaleform::GFx::SubImageResourceCreator &);
	SubImageResourceCreator(const Scaleform::GFx::SubImageResourceCreator &);
	SubImageResourceCreator();
	virtual ~SubImageResourceCreator();
	Scaleform::GFx::SubImageResourceCreator & operator=(Scaleform::GFx::SubImageResourceCreator &);
	Scaleform::GFx::SubImageResourceCreator & operator=(const Scaleform::GFx::SubImageResourceCreator &);
};
class Scaleform::GFx::FontResourceCreator :
	Scaleform::GFx::ResourceData::DataInterface
{
	typedef void *DataHandle;
private:
	virtual bool CreateResource(void *, Scaleform::GFx::ResourceBindData *, Scaleform::GFx::LoadStates *, Scaleform::MemoryHeap *);
public:
	FontResourceCreator(Scaleform::GFx::FontResourceCreator &);
	FontResourceCreator(const Scaleform::GFx::FontResourceCreator &);
	FontResourceCreator();
	virtual ~FontResourceCreator();
	Scaleform::GFx::FontResourceCreator & operator=(Scaleform::GFx::FontResourceCreator &);
	Scaleform::GFx::FontResourceCreator & operator=(const Scaleform::GFx::FontResourceCreator &);
};