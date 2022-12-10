#pragma once

class Scaleform::GFx::ImportData
{
	struct Symbol;
public:
	Scaleform::ArrayLH<Scaleform::GFx::ImportData::Symbol,2,Scaleform::ArrayDefaultPolicy> Imports; // 0x0
	Scaleform::StringLH SourceUrl; // 0x18
	unsigned long Frame; // 0x20
	unsigned long ImportIndex; // 0x24
	Scaleform::AtomicPtr<Scaleform::GFx::ImportData> pNext; // 0x28
	ImportData(Scaleform::GFx::ImportData &);
	ImportData(const Scaleform::GFx::ImportData &);
	ImportData(const char *, unsigned long);
	ImportData();
	void AddSymbol(const char *, long, unsigned long);
	~ImportData();
	Scaleform::GFx::ImportData & operator=(Scaleform::GFx::ImportData &);
	Scaleform::GFx::ImportData & operator=(const Scaleform::GFx::ImportData &);
};
struct Scaleform::GFx::ImportData::Symbol
{
	Scaleform::String SymbolName; // 0x0
	long CharacterId; // 0x8
	unsigned long BindIndex; // 0xC
	Symbol(Scaleform::GFx::ImportData::Symbol &);
	Symbol(const Scaleform::GFx::ImportData::Symbol &);
	Symbol();
	~Symbol();
	Scaleform::GFx::ImportData::Symbol & operator=(Scaleform::GFx::ImportData::Symbol &);
	Scaleform::GFx::ImportData::Symbol & operator=(const Scaleform::GFx::ImportData::Symbol &);
};
class Scaleform::ArrayLH<Scaleform::GFx::ImportData::Symbol,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::ImportData::Symbol,Scaleform::AllocatorLH<Scaleform::GFx::ImportData::Symbol,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::ImportData::Symbol,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::ImportData::Symbol,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::ImportData::Symbol,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::ImportData::Symbol,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::ImportData::Symbol,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::ImportData::Symbol,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::ImportData::Symbol,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::ImportData::Symbol,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::AtomicPtr<Scaleform::GFx::ImportData> :
	Scaleform::AtomicValueBase<Scaleform::GFx::ImportData *>
{
	class Ops;
public:
	AtomicPtr<Scaleform::GFx::ImportData>(Scaleform::AtomicPtr<Scaleform::GFx::ImportData> &);
	AtomicPtr<Scaleform::GFx::ImportData>(const Scaleform::AtomicPtr<Scaleform::GFx::ImportData> &);
	AtomicPtr<Scaleform::GFx::ImportData>(Scaleform::GFx::ImportData *);
	AtomicPtr<Scaleform::GFx::ImportData>();
	Scaleform::GFx::ImportData * operator->();
	Scaleform::GFx::ImportData * operator class Scaleform::GFx::ImportData *();
	Scaleform::AtomicPtr<Scaleform::GFx::ImportData> & operator=(Scaleform::AtomicPtr<Scaleform::GFx::ImportData> &);
	Scaleform::AtomicPtr<Scaleform::GFx::ImportData> & operator=(const Scaleform::AtomicPtr<Scaleform::GFx::ImportData> &);
	Scaleform::GFx::ImportData * operator=(Scaleform::GFx::ImportData *);
	Scaleform::GFx::ImportData * operator++(long);
	Scaleform::GFx::ImportData * operator++();
	Scaleform::GFx::ImportData * operator--(long);
	Scaleform::GFx::ImportData * operator--();
};
void Scaleform::GFx::ImportData::AddSymbol(const char * psymbolName, long characterId, unsigned long bindIndex); // 0x14036E1D0
struct Scaleform::GFx::ResourceDataNode
{
	Scaleform::GFx::ResourceData Data; // 0x0
	unsigned long BindIndex; // 0x10
	Scaleform::AtomicPtr<Scaleform::GFx::ResourceDataNode> pNext; // 0x18
	ResourceDataNode(Scaleform::GFx::ResourceDataNode &);
	ResourceDataNode(const Scaleform::GFx::ResourceDataNode &);
	ResourceDataNode();
	~ResourceDataNode();
	Scaleform::GFx::ResourceDataNode & operator=(Scaleform::GFx::ResourceDataNode &);
	Scaleform::GFx::ResourceDataNode & operator=(const Scaleform::GFx::ResourceDataNode &);
};
class Scaleform::AtomicPtr<Scaleform::GFx::ResourceDataNode> :
	Scaleform::AtomicValueBase<Scaleform::GFx::ResourceDataNode *>
{
	class Ops;
public:
	AtomicPtr<Scaleform::GFx::ResourceDataNode>(Scaleform::AtomicPtr<Scaleform::GFx::ResourceDataNode> &);
	AtomicPtr<Scaleform::GFx::ResourceDataNode>(const Scaleform::AtomicPtr<Scaleform::GFx::ResourceDataNode> &);
	AtomicPtr<Scaleform::GFx::ResourceDataNode>(Scaleform::GFx::ResourceDataNode *);
	AtomicPtr<Scaleform::GFx::ResourceDataNode>();
	Scaleform::GFx::ResourceDataNode * operator->();
	Scaleform::GFx::ResourceDataNode * operator struct Scaleform::GFx::ResourceDataNode *();
	Scaleform::AtomicPtr<Scaleform::GFx::ResourceDataNode> & operator=(Scaleform::AtomicPtr<Scaleform::GFx::ResourceDataNode> &);
	Scaleform::AtomicPtr<Scaleform::GFx::ResourceDataNode> & operator=(const Scaleform::AtomicPtr<Scaleform::GFx::ResourceDataNode> &);
	Scaleform::GFx::ResourceDataNode * operator=(Scaleform::GFx::ResourceDataNode *);
	Scaleform::GFx::ResourceDataNode * operator++(long);
	Scaleform::GFx::ResourceDataNode * operator++();
	Scaleform::GFx::ResourceDataNode * operator--(long);
	Scaleform::GFx::ResourceDataNode * operator--();
};
struct Scaleform::GFx::FontDataUseNode
{
	Scaleform::GFx::ResourceId Id; // 0x0
	Scaleform::Ptr<Scaleform::Render::Font> pFontData; // 0x8
	unsigned long BindIndex; // 0x10
	Scaleform::AtomicPtr<Scaleform::GFx::FontDataUseNode> pNext; // 0x18
	FontDataUseNode(Scaleform::GFx::FontDataUseNode &);
	FontDataUseNode(const Scaleform::GFx::FontDataUseNode &);
	FontDataUseNode();
	~FontDataUseNode();
	Scaleform::GFx::FontDataUseNode & operator=(Scaleform::GFx::FontDataUseNode &);
	Scaleform::GFx::FontDataUseNode & operator=(const Scaleform::GFx::FontDataUseNode &);
};
class Scaleform::AtomicPtr<Scaleform::GFx::FontDataUseNode> :
	Scaleform::AtomicValueBase<Scaleform::GFx::FontDataUseNode *>
{
	class Ops;
public:
	AtomicPtr<Scaleform::GFx::FontDataUseNode>(Scaleform::AtomicPtr<Scaleform::GFx::FontDataUseNode> &);
	AtomicPtr<Scaleform::GFx::FontDataUseNode>(const Scaleform::AtomicPtr<Scaleform::GFx::FontDataUseNode> &);
	AtomicPtr<Scaleform::GFx::FontDataUseNode>(Scaleform::GFx::FontDataUseNode *);
	AtomicPtr<Scaleform::GFx::FontDataUseNode>();
	Scaleform::GFx::FontDataUseNode * operator->();
	Scaleform::GFx::FontDataUseNode * operator struct Scaleform::GFx::FontDataUseNode *();
	Scaleform::AtomicPtr<Scaleform::GFx::FontDataUseNode> & operator=(Scaleform::AtomicPtr<Scaleform::GFx::FontDataUseNode> &);
	Scaleform::AtomicPtr<Scaleform::GFx::FontDataUseNode> & operator=(const Scaleform::AtomicPtr<Scaleform::GFx::FontDataUseNode> &);
	Scaleform::GFx::FontDataUseNode * operator=(Scaleform::GFx::FontDataUseNode *);
	Scaleform::GFx::FontDataUseNode * operator++(long);
	Scaleform::GFx::FontDataUseNode * operator++();
	Scaleform::GFx::FontDataUseNode * operator--(long);
	Scaleform::GFx::FontDataUseNode * operator--();
};
struct Scaleform::GFx::FrameBindData
{
	unsigned long Frame; // 0x0
	unsigned long BytesLoaded; // 0x4
	unsigned long FontCount; // 0x8
	unsigned long ImportCount; // 0xC
	unsigned long ResourceCount; // 0x10
	Scaleform::GFx::ImportData * pImportData; // 0x18
	Scaleform::GFx::FontDataUseNode * pFontData; // 0x20
	Scaleform::GFx::ResourceDataNode * pResourceData; // 0x28
	Scaleform::AtomicPtr<Scaleform::GFx::FrameBindData> pNextFrame; // 0x30
	FrameBindData(Scaleform::GFx::FrameBindData &);
	FrameBindData(const Scaleform::GFx::FrameBindData &);
	FrameBindData();
	Scaleform::GFx::FrameBindData & operator=(Scaleform::GFx::FrameBindData &);
	Scaleform::GFx::FrameBindData & operator=(const Scaleform::GFx::FrameBindData &);
};
class Scaleform::AtomicPtr<Scaleform::GFx::FrameBindData> :
	Scaleform::AtomicValueBase<Scaleform::GFx::FrameBindData *>
{
	class Ops;
public:
	AtomicPtr<Scaleform::GFx::FrameBindData>(Scaleform::AtomicPtr<Scaleform::GFx::FrameBindData> &);
	AtomicPtr<Scaleform::GFx::FrameBindData>(const Scaleform::AtomicPtr<Scaleform::GFx::FrameBindData> &);
	AtomicPtr<Scaleform::GFx::FrameBindData>(Scaleform::GFx::FrameBindData *);
	AtomicPtr<Scaleform::GFx::FrameBindData>();
	Scaleform::GFx::FrameBindData * operator->();
	Scaleform::GFx::FrameBindData * operator struct Scaleform::GFx::FrameBindData *();
	Scaleform::AtomicPtr<Scaleform::GFx::FrameBindData> & operator=(Scaleform::AtomicPtr<Scaleform::GFx::FrameBindData> &);
	Scaleform::AtomicPtr<Scaleform::GFx::FrameBindData> & operator=(const Scaleform::AtomicPtr<Scaleform::GFx::FrameBindData> &);
	Scaleform::GFx::FrameBindData * operator=(Scaleform::GFx::FrameBindData *);
	Scaleform::GFx::FrameBindData * operator++(long);
	Scaleform::GFx::FrameBindData * operator++();
	Scaleform::GFx::FrameBindData * operator--(long);
	Scaleform::GFx::FrameBindData * operator--();
};
class Scaleform::GFx::DataAllocator
{
	struct Block;
	enum AllocConstants
	{
		BlockSize = 8176,
	};
private:
	unsigned char * pCurrent; // 0x0
	unsigned long long BytesLeft; // 0x8
	Scaleform::GFx::DataAllocator::Block * pAllocations; // 0x10
	Scaleform::MemoryHeap * pHeap; // 0x18
	void * OverflowAlloc(unsigned long long);
public:
	DataAllocator(Scaleform::MemoryHeap *);
	~DataAllocator();
	void * Alloc(unsigned long long);
	void * AllocIndividual(unsigned long long);
	void * AllocIndividualAlign(unsigned long long, unsigned long long);
};
struct Scaleform::GFx::DataAllocator::Block
{
	Scaleform::GFx::DataAllocator::Block * pNext; // 0x0
};
class Scaleform::GFx::LoadUpdateSync :
	Scaleform::RefCountBase<Scaleform::GFx::LoadUpdateSync,264>
{
private:
	Scaleform::Mutex mMutex; // 0x10
	Scaleform::WaitCondition WC; // 0x38
	bool LoadFinished; // 0x40
public:
	LoadUpdateSync(const Scaleform::GFx::LoadUpdateSync &);
	LoadUpdateSync();
	virtual ~LoadUpdateSync();
	Scaleform::Mutex & GetMutex();
	void UpdateNotify();
	void WaitForNotify();
	void NotifyLoadFinished();
	bool IsLoadFinished();
	void WaitForLoadFinished();
	Scaleform::GFx::LoadUpdateSync & operator=(const Scaleform::GFx::LoadUpdateSync &);
};
class Scaleform::RefCountBase<Scaleform::GFx::LoadUpdateSync,264> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,264>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 264,
	};
public:
	RefCountBase<Scaleform::GFx::LoadUpdateSync,264>(Scaleform::RefCountBase<Scaleform::GFx::LoadUpdateSync,264> &);
	RefCountBase<Scaleform::GFx::LoadUpdateSync,264>(const Scaleform::RefCountBase<Scaleform::GFx::LoadUpdateSync,264> &);
	RefCountBase<Scaleform::GFx::LoadUpdateSync,264>();
	virtual ~RefCountBase<Scaleform::GFx::LoadUpdateSync,264>();
	Scaleform::RefCountBase<Scaleform::GFx::LoadUpdateSync,264> & operator=(Scaleform::RefCountBase<Scaleform::GFx::LoadUpdateSync,264> &);
	Scaleform::RefCountBase<Scaleform::GFx::LoadUpdateSync,264> & operator=(const Scaleform::RefCountBase<Scaleform::GFx::LoadUpdateSync,264> &);
};
class Scaleform::GFx::MovieDataDef :
	Scaleform::GFx::TimelineDef,
	Scaleform::GFx::ResourceReport
{
public:
	Scaleform::GFx::ResourceKey mResourceKey; // 0x28
	enum MovieDataType
	{
		MT_Empty = 0,
		MT_Flash = 1,
		MT_Image = 2,
	};
	Scaleform::GFx::MovieDataDef::MovieDataType MovieType; // 0x38
	struct DefBindingData;
	enum MovieLoadState
	{
		LS_Uninitialized = 0,
		LS_LoadingFrames = 1,
		LS_LoadFinished = 2,
		LS_LoadCanceled = 3,
		LS_LoadError = 4,
	};
	class LoadTaskDataBase;
	class ResourceHash;
	struct FrameLabelInfo;
	struct SceneInfo;
	class LoadTaskData;
	Scaleform::Ptr<Scaleform::GFx::MovieDataDef::LoadTaskData> pData; // 0x40
	MovieDataDef(const Scaleform::GFx::MovieDataDef &);
	MovieDataDef(const Scaleform::GFx::ResourceKey &, Scaleform::GFx::MovieDataDef::MovieDataType, const char *, Scaleform::MemoryHeap *, bool, unsigned long long);
	virtual ~MovieDataDef();
	virtual Scaleform::GFx::CharacterDef::CharacterDefType GetType();
	static Scaleform::GFx::MovieDataDef * Create(const Scaleform::GFx::ResourceKey &, Scaleform::GFx::MovieDataDef::MovieDataType, const char *, Scaleform::MemoryHeap *, bool, unsigned long long);
	Scaleform::MemoryHeap * GetHeap();
	Scaleform::MemoryHeap * GetImageHeap();
	void InitEmptyMovieDef();
	bool InitImageFileMovieDef(unsigned long, Scaleform::GFx::ImageResource *, Scaleform::GFx::ImageCreator *, Scaleform::Log *, bool);
	void WaitForLoadFinish(bool);
	void WaitForFrame(unsigned long);
	float GetFrameRate();
	const Scaleform::Render::Rect<float> & GetFrameRectInTwips();
	Scaleform::Render::Rect<float> GetFrameRect();
	float GetWidth();
	float GetHeight();
	virtual unsigned long GetVersion();
	unsigned long GetLoadingFrame();
	unsigned long GetSWFFlags();
	Scaleform::GFx::MovieDataDef::MovieLoadState GetLoadState();
	unsigned long GetFileBytes();
	unsigned long GetTagCount();
	const char * GetFileURL();
	virtual unsigned long GetFrameCount();
	const Scaleform::GFx::ExporterInfo * GetExporterInfo();
	void GetMovieInfo(Scaleform::GFx::MovieInfo *);
	long GetASVersion();
	Scaleform::Ptr<Scaleform::GFx::ASSupport> GetASSupport();
	unsigned long GetFileAttributes();
	unsigned long GetMetadata(char *, unsigned long);
	virtual bool GetLabeledFrame(const char *, unsigned long *, bool);
	virtual const Scaleform::String * GetFrameLabel(unsigned long, unsigned long *);
	virtual Scaleform::Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy> * GetFrameLabels(unsigned long, Scaleform::Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy> *);
	const Scaleform::GFx::MovieDataDef::SceneInfo * GetScenes(unsigned long long *);
	bool GetResourceHandle(Scaleform::GFx::ResourceHandle *, Scaleform::GFx::ResourceId);
	Scaleform::GFx::FontDataUseNode * GetFirstFont();
	Scaleform::GFx::ImportData * GetFirstImport();
	static bool TranslateFrameString(const Scaleform::StringHashLH<unsigned int,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > &, const char *, unsigned long *, bool);
	static const Scaleform::String * TranslateNumberToFrameString(const Scaleform::StringHashLH<unsigned int,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > &, unsigned long, unsigned long *);
	virtual const Scaleform::GFx::TimelineDef::Frame GetPlaylist(long);
	unsigned long GetInitActionListSize();
	bool HasInitActions();
	virtual bool GetInitActions(Scaleform::GFx::TimelineDef::Frame *, long);
	static Scaleform::GFx::ResourceKey CreateMovieFileKey(const char *, long long, Scaleform::GFx::FileOpener *, Scaleform::GFx::ImageCreator *);
	virtual Scaleform::GFx::ResourceKey GetKey();
	virtual unsigned long GetResourceTypeCode();
	virtual Scaleform::GFx::ResourceReport * GetResourceReport();
	virtual Scaleform::String GetResourceName();
	virtual Scaleform::MemoryHeap * GetResourceHeap();
	virtual void GetStats(Scaleform::StatBag *, bool);
	Scaleform::GFx::MovieDataDef & operator=(const Scaleform::GFx::MovieDataDef &);
};
struct Scaleform::GFx::MovieDataDef::DefBindingData
{
	Scaleform::AtomicPtr<Scaleform::GFx::FrameBindData> pFrameData; // 0x0
	Scaleform::GFx::FrameBindData * pFrameDataLast; // 0x8
	Scaleform::AtomicPtr<Scaleform::GFx::ImportData> pImports; // 0x10
	Scaleform::GFx::ImportData * pImportsLast; // 0x18
	Scaleform::AtomicPtr<Scaleform::GFx::FontDataUseNode> pFonts; // 0x20
	Scaleform::GFx::FontDataUseNode * pFontsLast; // 0x28
	Scaleform::AtomicPtr<Scaleform::GFx::ResourceDataNode> pResourceNodes; // 0x30
	Scaleform::GFx::ResourceDataNode * pResourceNodesLast; // 0x38
	DefBindingData(const Scaleform::GFx::MovieDataDef::DefBindingData &);
	DefBindingData();
	~DefBindingData();
	Scaleform::GFx::MovieDataDef::DefBindingData & operator=(const Scaleform::GFx::MovieDataDef::DefBindingData &);
};
class Scaleform::GFx::MovieDataDef::LoadTaskDataBase :
	Scaleform::RefCountBase<Scaleform::GFx::MovieDataDef::LoadTaskDataBase,264>
{
protected:
	Scaleform::GFx::DataAllocator TagMemAllocator; // 0x10
	Scaleform::GFx::PathAllocator * pPathAllocator; // 0x30
public:
	LoadTaskDataBase(Scaleform::GFx::MovieDataDef::LoadTaskDataBase &);
	LoadTaskDataBase(const Scaleform::GFx::MovieDataDef::LoadTaskDataBase &);
protected:
	LoadTaskDataBase(Scaleform::MemoryHeap *);
public:
	virtual ~LoadTaskDataBase();
	Scaleform::GFx::MovieDataDef::LoadTaskDataBase & operator=(Scaleform::GFx::MovieDataDef::LoadTaskDataBase &);
	Scaleform::GFx::MovieDataDef::LoadTaskDataBase & operator=(const Scaleform::GFx::MovieDataDef::LoadTaskDataBase &);
};
class Scaleform::RefCountBase<Scaleform::GFx::MovieDataDef::LoadTaskDataBase,264> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,264>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 264,
	};
public:
	RefCountBase<Scaleform::GFx::MovieDataDef::LoadTaskDataBase,264>(Scaleform::RefCountBase<Scaleform::GFx::MovieDataDef::LoadTaskDataBase,264> &);
	RefCountBase<Scaleform::GFx::MovieDataDef::LoadTaskDataBase,264>(const Scaleform::RefCountBase<Scaleform::GFx::MovieDataDef::LoadTaskDataBase,264> &);
	RefCountBase<Scaleform::GFx::MovieDataDef::LoadTaskDataBase,264>();
	virtual ~RefCountBase<Scaleform::GFx::MovieDataDef::LoadTaskDataBase,264>();
	Scaleform::RefCountBase<Scaleform::GFx::MovieDataDef::LoadTaskDataBase,264> & operator=(Scaleform::RefCountBase<Scaleform::GFx::MovieDataDef::LoadTaskDataBase,264> &);
	Scaleform::RefCountBase<Scaleform::GFx::MovieDataDef::LoadTaskDataBase,264> & operator=(const Scaleform::RefCountBase<Scaleform::GFx::MovieDataDef::LoadTaskDataBase,264> &);
};
class Scaleform::HashUncachedLH<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp,2> :
	Scaleform::HashLH<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp,2,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF> >
{
	class SelfType;
	class BaseType;
public:
	HashUncachedLH<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp,2>(const Scaleform::HashUncachedLH<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp,2> &);
	HashUncachedLH<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp,2>(long);
	HashUncachedLH<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp,2>();
	~HashUncachedLH<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp,2>();
	void operator=(const Scaleform::HashUncachedLH<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp,2> &);
};
struct Scaleform::GFx::MovieDataDef::FrameLabelInfo
{
	Scaleform::StringDH Name; // 0x0
	unsigned long Number; // 0x10
	FrameLabelInfo(Scaleform::GFx::MovieDataDef::FrameLabelInfo &);
	FrameLabelInfo(const Scaleform::GFx::MovieDataDef::FrameLabelInfo &);
	FrameLabelInfo(Scaleform::MemoryHeap *, const Scaleform::String &, unsigned long);
	~FrameLabelInfo();
	Scaleform::GFx::MovieDataDef::FrameLabelInfo & operator=(Scaleform::GFx::MovieDataDef::FrameLabelInfo &);
	Scaleform::GFx::MovieDataDef::FrameLabelInfo & operator=(const Scaleform::GFx::MovieDataDef::FrameLabelInfo &);
};
struct Scaleform::GFx::MovieDataDef::SceneInfo
{
	Scaleform::StringDH Name; // 0x0
	unsigned long Offset; // 0x10
	unsigned long NumFrames; // 0x14
	Scaleform::ArrayDH<Scaleform::GFx::MovieDataDef::FrameLabelInfo,2,Scaleform::ArrayDefaultPolicy> Labels; // 0x18
	SceneInfo(Scaleform::GFx::MovieDataDef::SceneInfo &);
	SceneInfo(const Scaleform::GFx::MovieDataDef::SceneInfo &);
	SceneInfo(Scaleform::MemoryHeap *, const Scaleform::String &, unsigned long);
	void AddFrameLabel(const Scaleform::String &, unsigned long);
	~SceneInfo();
	Scaleform::GFx::MovieDataDef::SceneInfo & operator=(Scaleform::GFx::MovieDataDef::SceneInfo &);
	Scaleform::GFx::MovieDataDef::SceneInfo & operator=(const Scaleform::GFx::MovieDataDef::SceneInfo &);
};
class Scaleform::ArrayDH<Scaleform::GFx::MovieDataDef::FrameLabelInfo,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayDataDH<Scaleform::GFx::MovieDataDef::FrameLabelInfo,Scaleform::AllocatorDH<Scaleform::GFx::MovieDataDef::FrameLabelInfo,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayDH<Scaleform::GFx::MovieDataDef::FrameLabelInfo,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDH<Scaleform::GFx::MovieDataDef::FrameLabelInfo,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayDH<Scaleform::GFx::MovieDataDef::FrameLabelInfo,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, const Scaleform::ArrayDefaultPolicy &);
	ArrayDH<Scaleform::GFx::MovieDataDef::FrameLabelInfo,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, long);
	ArrayDH<Scaleform::GFx::MovieDataDef::FrameLabelInfo,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *);
	const Scaleform::ArrayDH<Scaleform::GFx::MovieDataDef::FrameLabelInfo,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayDH<Scaleform::GFx::MovieDataDef::FrameLabelInfo,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayDH<Scaleform::GFx::MovieDataDef::FrameLabelInfo,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::GFx::MovieDataDef::LoadTaskData :
	Scaleform::GFx::MovieDataDef::LoadTaskDataBase
{
private:
	Scaleform::MemoryHeap * pHeap; // 0x38
	Scaleform::Ptr<Scaleform::MemoryHeap> pImageHeap; // 0x40
	Scaleform::StringLH FileURL; // 0x48
	Scaleform::GFx::MovieHeaderData Header; // 0x50
	unsigned long FileAttributes; // 0xD0
	unsigned char * pMetadata; // 0xD8
	unsigned long MetadataSize; // 0xE0
	Scaleform::GFx::MovieDataDef::MovieLoadState LoadState; // 0xE4
	unsigned long LoadingFrame; // 0xE8
	volatile bool LoadingCanceled; // 0xEC
	unsigned long TagCount; // 0xF0
	Scaleform::Ptr<Scaleform::GFx::LoadUpdateSync> pFrameUpdate; // 0xF8
	Scaleform::GFx::MovieDataDef::DefBindingData BindData; // 0x100
	unsigned long ResIndexCounter; // 0x140
	Scaleform::Lock ResourceLock; // 0x148
	Scaleform::Ptr<Scaleform::GFx::MovieDef> pExtMovieDef; // 0x178
	Scaleform::HashUncachedLH<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp,2> Resources; // 0x180
	Scaleform::StringHashLH<Scaleform::GFx::ResourceHandle,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > Exports; // 0x188
	Scaleform::HashLH<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>,2,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> > InvExports; // 0x190
	Scaleform::Lock PlaylistLock; // 0x198
	Scaleform::ArrayLH<Scaleform::GFx::TimelineDef::Frame,2,Scaleform::ArrayDefaultPolicy> Playlist; // 0x1C8
	Scaleform::ArrayLH<Scaleform::GFx::TimelineDef::Frame,2,Scaleform::ArrayDefaultPolicy> InitActionList; // 0x1E0
	long InitActionsCnt; // 0x1F8
	Scaleform::StringHashLH<unsigned int,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > NamedFrames; // 0x200
	Scaleform::GFx::ResourceId GradientIdGenerator; // 0x208
	unsigned long SwdHandle; // 0x20C
	Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> > Scenes; // 0x210
public:
	LoadTaskData(const Scaleform::GFx::MovieDataDef::LoadTaskData &);
	LoadTaskData(Scaleform::GFx::MovieDataDef *, const char *, Scaleform::MemoryHeap *);
	virtual ~LoadTaskData();
	void OnMovieDataDefRelease();
	void InitEmptyMovieDef();
	bool InitImageFileMovieDef(unsigned long, Scaleform::GFx::ImageResource *, Scaleform::GFx::ImageCreator *, Scaleform::Log *, bool);
	Scaleform::MemoryHeap * GetHeap();
	Scaleform::MemoryHeap * GetImageHeap();
	Scaleform::GFx::PathAllocator * GetPathAllocator();
	const char * GetFileURL();
	unsigned long GetTotalFrames();
	unsigned long GetVersion();
	const Scaleform::GFx::ExporterInfo * GetExporterInfo();
	Scaleform::GFx::LoadUpdateSync * GetFrameUpdateSync();
	void BeginSWFLoading(const Scaleform::GFx::MovieHeaderData &);
	void Read(Scaleform::GFx::LoadProcess *, Scaleform::GFx::MovieBindProcess *);
	bool FinishLoadingFrame(Scaleform::GFx::LoadProcess *, bool);
	void UpdateLoadState(unsigned long, Scaleform::GFx::MovieDataDef::MovieLoadState);
	void NotifyFrameUpdated();
	void WaitForLoadFinish();
	void WaitForFrame(unsigned long);
	unsigned long GetMetadata(char *, unsigned long);
	void SetMetadata(unsigned char *, unsigned long);
	void SetFileAttributesA(unsigned long);
	unsigned long GetFileAttributes();
	void * AllocTagMemory(unsigned long long);
	Scaleform::GFx::ResourceId GetNextGradientId();
	Scaleform::GFx::ResourceHandle AddNewResourceHandle(Scaleform::GFx::ResourceId);
	void AddResource(Scaleform::GFx::ResourceId, Scaleform::GFx::Resource *);
	void AddCharacter(Scaleform::GFx::ResourceId, Scaleform::GFx::CharacterDef *);
	void ExportResource(const Scaleform::String &, Scaleform::GFx::ResourceId, const Scaleform::GFx::ResourceHandle &);
	bool GetResourceHandle(Scaleform::GFx::ResourceHandle *, Scaleform::GFx::ResourceId);
	Scaleform::Render::Font * GetFontData(Scaleform::GFx::ResourceId);
	Scaleform::GFx::FrameBindData * GetFirstFrameBindData();
	Scaleform::GFx::FontDataUseNode * GetFirstFont();
	Scaleform::GFx::ImportData * GetFirstImport();
	void AddFrameName(const Scaleform::String &, Scaleform::GFx::LogState *);
	void SetLoadingPlaylistFrame(const Scaleform::GFx::TimelineDef::Frame &, Scaleform::GFx::LogState *);
	void SetLoadingInitActionFrame(const Scaleform::GFx::TimelineDef::Frame &, Scaleform::GFx::LogState *);
	bool GetLabeledFrame(const char *, unsigned long *, bool);
	const Scaleform::String * GetFrameLabel(unsigned long, unsigned long *);
	Scaleform::Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy> * GetFrameLabels(unsigned long, Scaleform::Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy> *);
	void AddScene(const Scaleform::String &, unsigned long);
	bool HasScenes();
	Scaleform::GFx::MovieDataDef::SceneInfo * GetScene(unsigned long long);
	const Scaleform::GFx::MovieDataDef::SceneInfo * GetScene(unsigned long long);
	Scaleform::GFx::MovieDataDef::SceneInfo * GetScenes(unsigned long long *);
	const Scaleform::GFx::MovieDataDef::SceneInfo * GetScenes(unsigned long long *);
	const Scaleform::GFx::TimelineDef::Frame GetPlaylist(long);
	bool GetInitActions(Scaleform::GFx::TimelineDef::Frame *, long);
	unsigned long GetInitActionListSize();
	bool HasInitActions();
	Scaleform::GFx::SoundStreamDef * GetSoundStream();
	void SetSoundStream(Scaleform::GFx::SoundStreamDef *);
	void SetSwdHandle(unsigned long);
	unsigned long GetSwdHandle();
	struct ResourceLocker;
	void SetExtMovieDef(Scaleform::GFx::MovieDef *);
	Scaleform::GFx::MovieDataDef::LoadTaskData & operator=(const Scaleform::GFx::MovieDataDef::LoadTaskData &);
};
class Scaleform::Ptr<Scaleform::GFx::LoadUpdateSync>
{
protected:
	Scaleform::GFx::LoadUpdateSync * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::LoadUpdateSync>(const Scaleform::Ptr<Scaleform::GFx::LoadUpdateSync> &);
	Ptr<Scaleform::GFx::LoadUpdateSync>(Scaleform::GFx::LoadUpdateSync *);
	Ptr<Scaleform::GFx::LoadUpdateSync>(Scaleform::Ptr<Scaleform::GFx::LoadUpdateSync> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::LoadUpdateSync>(Scaleform::Pickable<Scaleform::GFx::LoadUpdateSync>);
	Ptr<Scaleform::GFx::LoadUpdateSync>(Scaleform::GFx::LoadUpdateSync &);
	Ptr<Scaleform::GFx::LoadUpdateSync>();
	~Ptr<Scaleform::GFx::LoadUpdateSync>();
	bool operator==(Scaleform::GFx::LoadUpdateSync *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::LoadUpdateSync> &);
	bool operator!=(Scaleform::GFx::LoadUpdateSync *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::LoadUpdateSync> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::LoadUpdateSync> &);
	Scaleform::Ptr<Scaleform::GFx::LoadUpdateSync> & operator=(Scaleform::Pickable<Scaleform::GFx::LoadUpdateSync>);
	const Scaleform::Ptr<Scaleform::GFx::LoadUpdateSync> & operator=(Scaleform::GFx::LoadUpdateSync &);
	const Scaleform::Ptr<Scaleform::GFx::LoadUpdateSync> & operator=(Scaleform::GFx::LoadUpdateSync *);
	const Scaleform::Ptr<Scaleform::GFx::LoadUpdateSync> & operator=(const Scaleform::Ptr<Scaleform::GFx::LoadUpdateSync> &);
	Scaleform::Ptr<Scaleform::GFx::LoadUpdateSync> & SetPtr(Scaleform::Pickable<Scaleform::GFx::LoadUpdateSync>);
	Scaleform::Ptr<Scaleform::GFx::LoadUpdateSync> & SetPtr(Scaleform::GFx::LoadUpdateSync &);
	Scaleform::Ptr<Scaleform::GFx::LoadUpdateSync> & SetPtr(Scaleform::GFx::LoadUpdateSync *);
	Scaleform::Ptr<Scaleform::GFx::LoadUpdateSync> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::LoadUpdateSync> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::LoadUpdateSync * & GetRawRef();
	Scaleform::GFx::LoadUpdateSync * GetPtr();
	Scaleform::GFx::LoadUpdateSync & operator*();
	Scaleform::GFx::LoadUpdateSync * operator->();
	Scaleform::GFx::LoadUpdateSync * operator class Scaleform::GFx::LoadUpdateSync *();
	Scaleform::Ptr<Scaleform::GFx::LoadUpdateSync> & Pick(Scaleform::GFx::LoadUpdateSync *);
	Scaleform::Ptr<Scaleform::GFx::LoadUpdateSync> & Pick(Scaleform::Pickable<Scaleform::GFx::LoadUpdateSync>);
	Scaleform::Ptr<Scaleform::GFx::LoadUpdateSync> & Pick(Scaleform::Ptr<Scaleform::GFx::LoadUpdateSync> &);
};
class Scaleform::Ptr<Scaleform::GFx::MovieDef>
{
protected:
	Scaleform::GFx::MovieDef * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::MovieDef>(const Scaleform::Ptr<Scaleform::GFx::MovieDef> &);
	Ptr<Scaleform::GFx::MovieDef>(Scaleform::GFx::MovieDef *);
	Ptr<Scaleform::GFx::MovieDef>(Scaleform::Ptr<Scaleform::GFx::MovieDef> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::MovieDef>(Scaleform::Pickable<Scaleform::GFx::MovieDef>);
	Ptr<Scaleform::GFx::MovieDef>(Scaleform::GFx::MovieDef &);
	Ptr<Scaleform::GFx::MovieDef>();
	~Ptr<Scaleform::GFx::MovieDef>();
	bool operator==(Scaleform::GFx::MovieDef *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::MovieDef> &);
	bool operator!=(Scaleform::GFx::MovieDef *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::MovieDef> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::MovieDef> &);
	Scaleform::Ptr<Scaleform::GFx::MovieDef> & operator=(Scaleform::Pickable<Scaleform::GFx::MovieDef>);
	const Scaleform::Ptr<Scaleform::GFx::MovieDef> & operator=(Scaleform::GFx::MovieDef &);
	const Scaleform::Ptr<Scaleform::GFx::MovieDef> & operator=(Scaleform::GFx::MovieDef *);
	const Scaleform::Ptr<Scaleform::GFx::MovieDef> & operator=(const Scaleform::Ptr<Scaleform::GFx::MovieDef> &);
	Scaleform::Ptr<Scaleform::GFx::MovieDef> & SetPtr(Scaleform::Pickable<Scaleform::GFx::MovieDef>);
	Scaleform::Ptr<Scaleform::GFx::MovieDef> & SetPtr(Scaleform::GFx::MovieDef &);
	Scaleform::Ptr<Scaleform::GFx::MovieDef> & SetPtr(Scaleform::GFx::MovieDef *);
	Scaleform::Ptr<Scaleform::GFx::MovieDef> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::MovieDef> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::MovieDef * & GetRawRef();
	Scaleform::GFx::MovieDef * GetPtr();
	Scaleform::GFx::MovieDef & operator*();
	Scaleform::GFx::MovieDef * operator->();
	Scaleform::GFx::MovieDef * operator class Scaleform::GFx::MovieDef *();
	Scaleform::Ptr<Scaleform::GFx::MovieDef> & Pick(Scaleform::GFx::MovieDef *);
	Scaleform::Ptr<Scaleform::GFx::MovieDef> & Pick(Scaleform::Pickable<Scaleform::GFx::MovieDef>);
	Scaleform::Ptr<Scaleform::GFx::MovieDef> & Pick(Scaleform::Ptr<Scaleform::GFx::MovieDef> &);
};
class Scaleform::StringHashLH<Scaleform::GFx::ResourceHandle,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >
{
public:
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	struct Allocator;
	class ValueType;
	class SelfType;
	struct HashNodeF;
	class Container;
	Scaleform::HashSet<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > mHash; // 0x0
	StringHashLH<Scaleform::GFx::ResourceHandle,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::G(const Scaleform::StringHashLH<Scaleform::GFx::ResourceHandle,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > &);
	StringHashLH<Scaleform::GFx::ResourceHandle,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::G(long);
	StringHashLH<Scaleform::GFx::ResourceHandle,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::G();
	~StringHashLH<Scaleform::GFx::ResourceHandle,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::();
	void operator=(const Scaleform::StringHashLH<Scaleform::GFx::ResourceHandle,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > &);
	void Clear();
	bool IsEmpty();
	void Set(const Scaleform::String &, const Scaleform::GFx::ResourceHandle &);
	void Add(const Scaleform::String &, const Scaleform::GFx::ResourceHandle &);
	void Remove(const Scaleform::String &);
	const Scaleform::GFx::ResourceHandle * Get(const Scaleform::String &);
	Scaleform::GFx::ResourceHandle * Get(const Scaleform::String &);
	bool Get(const Scaleform::String &, Scaleform::GFx::ResourceHandle *);
	unsigned long long GetSize();
	void Resize(unsigned long long);
	void SetSapacity(unsigned long long);
	struct ConstIterator;
	struct Iterator;
	Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::ConstIterator Begin();
	Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::Iterator Begin();
	Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::ConstIterator End();
	Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::Iterator End();
	Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::ConstIterator Find(const Scaleform::String &);
	Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::Iterator Find(const Scaleform::String &);
	Scaleform::GFx::ResourceHandle * GetCaseInsensitive(const Scaleform::String &);
	const Scaleform::GFx::ResourceHandle * GetCaseInsensitive(const Scaleform::String &);
	bool GetCaseInsensitive(const Scaleform::String &, Scaleform::GFx::ResourceHandle *);
	Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::Iterator FindCaseInsensitive(const Scaleform::String &);
	void SetCaseInsensitive(const Scaleform::String &, const Scaleform::GFx::ResourceHandle &);
};
class Scaleform::HashLH<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>,2,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> > :
	Scaleform::Hash<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> > >
{
	class SelfType;
	class BaseType;
public:
	HashLH<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>,2,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashsetCachedN(const Scaleform::HashLH<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>,2,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> > &);
	HashLH<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>,2,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashsetCachedN(long);
	HashLH<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>,2,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashsetCachedN();
	~HashLH<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>,2,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashsetCached();
	void operator=(const Scaleform::HashLH<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>,2,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> > &);
};
class Scaleform::ArrayLH<Scaleform::GFx::TimelineDef::Frame,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::TimelineDef::Frame,Scaleform::AllocatorLH<Scaleform::GFx::TimelineDef::Frame,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::TimelineDef::Frame,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::TimelineDef::Frame,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::TimelineDef::Frame,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::TimelineDef::Frame,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::TimelineDef::Frame,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::TimelineDef::Frame,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::TimelineDef::Frame,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::TimelineDef::Frame,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::StringHashLH<unsigned int,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >
{
public:
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	struct Allocator;
	typedef unsigned long ValueType;
	class SelfType;
	struct HashNodeF;
	class Container;
	Scaleform::HashSet<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > mHash; // 0x0
	StringHashLH<unsigned int,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFuncto(const Scaleform::StringHashLH<unsigned int,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > &);
	StringHashLH<unsigned int,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFuncto(long);
	StringHashLH<unsigned int,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFuncto();
	~StringHashLH<unsigned int,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunct();
	void operator=(const Scaleform::StringHashLH<unsigned int,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > &);
	void Clear();
	bool IsEmpty();
	void Set(const Scaleform::String &, const unsigned long &);
	void Add(const Scaleform::String &, const unsigned long &);
	void Remove(const Scaleform::String &);
	const unsigned long * Get(const Scaleform::String &);
	unsigned long * Get(const Scaleform::String &);
	bool Get(const Scaleform::String &, unsigned long *);
	unsigned long long GetSize();
	void Resize(unsigned long long);
	void SetSapacity(unsigned long long);
	struct ConstIterator;
	struct Iterator;
	Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::ConstIterator Begin();
	Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::Iterator Begin();
	Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::ConstIterator End();
	Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::Iterator End();
	Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::ConstIterator Find(const Scaleform::String &);
	Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::Iterator Find(const Scaleform::String &);
	unsigned long * GetCaseInsensitive(const Scaleform::String &);
	const unsigned long * GetCaseInsensitive(const Scaleform::String &);
	bool GetCaseInsensitive(const Scaleform::String &, unsigned long *);
	Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::Iterator FindCaseInsensitive(const Scaleform::String &);
	void SetCaseInsensitive(const Scaleform::String &, const unsigned long &);
};
class Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> >
{
public:
	AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> >(const Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> > &);
	AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> >(Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> *, bool);
	AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> >(Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> *);
	~AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> >();
	Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> > & operator=(Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> *);
	Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> > & operator=(const Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> > &);
	Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> & operator*();
	Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> * operator->();
	Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> * GetPtr();
	bool operator bool();
	Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> * Release();
	void Reset(Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> *, bool);
private:
	Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> * pObject; // 0x0
	bool Owner; // 0x8
	Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> * constRelease();
public:
	void __dflt_ctor_closure();
};
class Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::MovieDataDef::SceneInfo,Scaleform::AllocatorLH<Scaleform::GFx::MovieDataDef::SceneInfo,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy>();
};
struct Scaleform::GFx::MovieDataDef::LoadTaskData::ResourceLocker
{
	const Scaleform::GFx::MovieDataDef::LoadTaskData * pLoadData; // 0x0
	ResourceLocker(const Scaleform::GFx::MovieDataDef::LoadTaskData *);
	~ResourceLocker();
};
class Scaleform::Ptr<Scaleform::GFx::MovieDataDef::LoadTaskData>
{
protected:
	Scaleform::GFx::MovieDataDef::LoadTaskData * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::MovieDataDef::LoadTaskData>(const Scaleform::Ptr<Scaleform::GFx::MovieDataDef::LoadTaskData> &);
	Ptr<Scaleform::GFx::MovieDataDef::LoadTaskData>(Scaleform::GFx::MovieDataDef::LoadTaskData *);
	Ptr<Scaleform::GFx::MovieDataDef::LoadTaskData>(Scaleform::Ptr<Scaleform::GFx::MovieDataDef::LoadTaskData> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::MovieDataDef::LoadTaskData>(Scaleform::Pickable<Scaleform::GFx::MovieDataDef::LoadTaskData>);
	Ptr<Scaleform::GFx::MovieDataDef::LoadTaskData>(Scaleform::GFx::MovieDataDef::LoadTaskData &);
	Ptr<Scaleform::GFx::MovieDataDef::LoadTaskData>();
	~Ptr<Scaleform::GFx::MovieDataDef::LoadTaskData>();
	bool operator==(Scaleform::GFx::MovieDataDef::LoadTaskData *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::MovieDataDef::LoadTaskData> &);
	bool operator!=(Scaleform::GFx::MovieDataDef::LoadTaskData *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::MovieDataDef::LoadTaskData> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::MovieDataDef::LoadTaskData> &);
	Scaleform::Ptr<Scaleform::GFx::MovieDataDef::LoadTaskData> & operator=(Scaleform::Pickable<Scaleform::GFx::MovieDataDef::LoadTaskData>);
	const Scaleform::Ptr<Scaleform::GFx::MovieDataDef::LoadTaskData> & operator=(Scaleform::GFx::MovieDataDef::LoadTaskData &);
	const Scaleform::Ptr<Scaleform::GFx::MovieDataDef::LoadTaskData> & operator=(Scaleform::GFx::MovieDataDef::LoadTaskData *);
	const Scaleform::Ptr<Scaleform::GFx::MovieDataDef::LoadTaskData> & operator=(const Scaleform::Ptr<Scaleform::GFx::MovieDataDef::LoadTaskData> &);
	Scaleform::Ptr<Scaleform::GFx::MovieDataDef::LoadTaskData> & SetPtr(Scaleform::Pickable<Scaleform::GFx::MovieDataDef::LoadTaskData>);
	Scaleform::Ptr<Scaleform::GFx::MovieDataDef::LoadTaskData> & SetPtr(Scaleform::GFx::MovieDataDef::LoadTaskData &);
	Scaleform::Ptr<Scaleform::GFx::MovieDataDef::LoadTaskData> & SetPtr(Scaleform::GFx::MovieDataDef::LoadTaskData *);
	Scaleform::Ptr<Scaleform::GFx::MovieDataDef::LoadTaskData> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::MovieDataDef::LoadTaskData> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::MovieDataDef::LoadTaskData * & GetRawRef();
	Scaleform::GFx::MovieDataDef::LoadTaskData * GetPtr();
	Scaleform::GFx::MovieDataDef::LoadTaskData & operator*();
	Scaleform::GFx::MovieDataDef::LoadTaskData * operator->();
	Scaleform::GFx::MovieDataDef::LoadTaskData * operator class Scaleform::GFx::MovieDataDef::LoadTaskData *();
	Scaleform::Ptr<Scaleform::GFx::MovieDataDef::LoadTaskData> & Pick(Scaleform::GFx::MovieDataDef::LoadTaskData *);
	Scaleform::Ptr<Scaleform::GFx::MovieDataDef::LoadTaskData> & Pick(Scaleform::Pickable<Scaleform::GFx::MovieDataDef::LoadTaskData>);
	Scaleform::Ptr<Scaleform::GFx::MovieDataDef::LoadTaskData> & Pick(Scaleform::Ptr<Scaleform::GFx::MovieDataDef::LoadTaskData> &);
};
unsigned long Scaleform::GFx::MovieDataDef::GetVersion(); // 0x140341DB0
unsigned long Scaleform::GFx::MovieDataDef::GetLoadingFrame(); // 0x1403415C0
unsigned long Scaleform::GFx::MovieDataDef::GetSWFFlags(); // 0x140341C20
unsigned long Scaleform::GFx::MovieDataDef::GetFrameCount(); // 0x140341090
bool Scaleform::GFx::MovieDataDef::GetLabeledFrame(const char * label, unsigned long * frameNumber, bool translateNumbers); // 0x140341590
const Scaleform::String * Scaleform::GFx::MovieDataDef::GetFrameLabel(unsigned long frameNumber, unsigned long * exactFrameNumberForLabel); // 0x140341140
Scaleform::Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy> * Scaleform::GFx::MovieDataDef::GetFrameLabels(unsigned long frameNumber, Scaleform::Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy> * destArr); // 0x1403412D0
const Scaleform::GFx::TimelineDef::Frame Scaleform::GFx::MovieDataDef::GetPlaylist(long frame); // 0x1403417F0
bool Scaleform::GFx::MovieDataDef::GetInitActions(Scaleform::GFx::TimelineDef::Frame * pframe, long frame); // 0x1403414C0
Scaleform::GFx::ResourceKey Scaleform::GFx::MovieDataDef::GetKey(); // 0x1403D6E10
unsigned long Scaleform::GFx::MovieDataDef::GetResourceTypeCode(); // 0x140341C00
Scaleform::GFx::ResourceReport * Scaleform::GFx::MovieDataDef::GetResourceReport(); // 0x140341BF0
Scaleform::MemoryHeap * Scaleform::GFx::MovieDataDef::GetResourceHeap(); // 0x140341B80
class Scaleform::GFx::MovieDefBindStates :
	Scaleform::RefCountBase<Scaleform::GFx::MovieDefBindStates,2>
{
public:
	Scaleform::Ptr<Scaleform::GFx::FileOpener> pFileOpener; // 0x10
	Scaleform::Ptr<Scaleform::GFx::URLBuilder> pURLBulider; // 0x18
	Scaleform::Ptr<Scaleform::GFx::ImageCreator> pImageCreator; // 0x20
	Scaleform::Ptr<Scaleform::GFx::ImageFileHandlerRegistry> pImageFileHandlerRegistry; // 0x28
	Scaleform::Ptr<Scaleform::GFx::ImportVisitor> pImportVisitor; // 0x30
	Scaleform::Ptr<Scaleform::GFx::FontPackParams> pFontPackParams; // 0x38
	Scaleform::Ptr<Scaleform::GFx::FontCompactorParams> pFontCompactorParams; // 0x40
	Scaleform::Ptr<Scaleform::GFx::ImagePackParamsBase> pImagePackParams; // 0x48
	MovieDefBindStates(Scaleform::GFx::MovieDefBindStates &);
	MovieDefBindStates(const Scaleform::GFx::MovieDefBindStates &);
	MovieDefBindStates(Scaleform::GFx::MovieDefBindStates *);
	MovieDefBindStates(Scaleform::GFx::StateBag *);
	unsigned long long GetHashCode();
	bool operator==(Scaleform::GFx::MovieDefBindStates &);
	bool operator!=(Scaleform::GFx::MovieDefBindStates &);
	virtual ~MovieDefBindStates();
	Scaleform::GFx::MovieDefBindStates & operator=(Scaleform::GFx::MovieDefBindStates &);
	Scaleform::GFx::MovieDefBindStates & operator=(const Scaleform::GFx::MovieDefBindStates &);
};
class Scaleform::RefCountBase<Scaleform::GFx::MovieDefBindStates,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::GFx::MovieDefBindStates,2>(Scaleform::RefCountBase<Scaleform::GFx::MovieDefBindStates,2> &);
	RefCountBase<Scaleform::GFx::MovieDefBindStates,2>(const Scaleform::RefCountBase<Scaleform::GFx::MovieDefBindStates,2> &);
	RefCountBase<Scaleform::GFx::MovieDefBindStates,2>();
	virtual ~RefCountBase<Scaleform::GFx::MovieDefBindStates,2>();
	Scaleform::RefCountBase<Scaleform::GFx::MovieDefBindStates,2> & operator=(Scaleform::RefCountBase<Scaleform::GFx::MovieDefBindStates,2> &);
	Scaleform::RefCountBase<Scaleform::GFx::MovieDefBindStates,2> & operator=(const Scaleform::RefCountBase<Scaleform::GFx::MovieDefBindStates,2> &);
};
class Scaleform::Ptr<Scaleform::GFx::FileOpener>
{
protected:
	Scaleform::GFx::FileOpener * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::FileOpener>(const Scaleform::Ptr<Scaleform::GFx::FileOpener> &);
	Ptr<Scaleform::GFx::FileOpener>(Scaleform::GFx::FileOpener *);
	Ptr<Scaleform::GFx::FileOpener>(Scaleform::Ptr<Scaleform::GFx::FileOpener> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::FileOpener>(Scaleform::Pickable<Scaleform::GFx::FileOpener>);
	Ptr<Scaleform::GFx::FileOpener>(Scaleform::GFx::FileOpener &);
	Ptr<Scaleform::GFx::FileOpener>();
	~Ptr<Scaleform::GFx::FileOpener>();
	bool operator==(Scaleform::GFx::FileOpener *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::FileOpener> &);
	bool operator!=(Scaleform::GFx::FileOpener *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::FileOpener> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::FileOpener> &);
	Scaleform::Ptr<Scaleform::GFx::FileOpener> & operator=(Scaleform::Pickable<Scaleform::GFx::FileOpener>);
	const Scaleform::Ptr<Scaleform::GFx::FileOpener> & operator=(Scaleform::GFx::FileOpener &);
	const Scaleform::Ptr<Scaleform::GFx::FileOpener> & operator=(Scaleform::GFx::FileOpener *);
	const Scaleform::Ptr<Scaleform::GFx::FileOpener> & operator=(const Scaleform::Ptr<Scaleform::GFx::FileOpener> &);
	Scaleform::Ptr<Scaleform::GFx::FileOpener> & SetPtr(Scaleform::Pickable<Scaleform::GFx::FileOpener>);
	Scaleform::Ptr<Scaleform::GFx::FileOpener> & SetPtr(Scaleform::GFx::FileOpener &);
	Scaleform::Ptr<Scaleform::GFx::FileOpener> & SetPtr(Scaleform::GFx::FileOpener *);
	Scaleform::Ptr<Scaleform::GFx::FileOpener> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::FileOpener> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::FileOpener * & GetRawRef();
	Scaleform::GFx::FileOpener * GetPtr();
	Scaleform::GFx::FileOpener & operator*();
	Scaleform::GFx::FileOpener * operator->();
	Scaleform::GFx::FileOpener * operator class Scaleform::GFx::FileOpener *();
	Scaleform::Ptr<Scaleform::GFx::FileOpener> & Pick(Scaleform::GFx::FileOpener *);
	Scaleform::Ptr<Scaleform::GFx::FileOpener> & Pick(Scaleform::Pickable<Scaleform::GFx::FileOpener>);
	Scaleform::Ptr<Scaleform::GFx::FileOpener> & Pick(Scaleform::Ptr<Scaleform::GFx::FileOpener> &);
};
class Scaleform::Ptr<Scaleform::GFx::ImagePackParamsBase>
{
protected:
	Scaleform::GFx::ImagePackParamsBase * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ImagePackParamsBase>(const Scaleform::Ptr<Scaleform::GFx::ImagePackParamsBase> &);
	Ptr<Scaleform::GFx::ImagePackParamsBase>(Scaleform::GFx::ImagePackParamsBase *);
	Ptr<Scaleform::GFx::ImagePackParamsBase>(Scaleform::Ptr<Scaleform::GFx::ImagePackParamsBase> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ImagePackParamsBase>(Scaleform::Pickable<Scaleform::GFx::ImagePackParamsBase>);
	Ptr<Scaleform::GFx::ImagePackParamsBase>(Scaleform::GFx::ImagePackParamsBase &);
	Ptr<Scaleform::GFx::ImagePackParamsBase>();
	~Ptr<Scaleform::GFx::ImagePackParamsBase>();
	bool operator==(Scaleform::GFx::ImagePackParamsBase *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ImagePackParamsBase> &);
	bool operator!=(Scaleform::GFx::ImagePackParamsBase *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ImagePackParamsBase> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ImagePackParamsBase> &);
	Scaleform::Ptr<Scaleform::GFx::ImagePackParamsBase> & operator=(Scaleform::Pickable<Scaleform::GFx::ImagePackParamsBase>);
	const Scaleform::Ptr<Scaleform::GFx::ImagePackParamsBase> & operator=(Scaleform::GFx::ImagePackParamsBase &);
	const Scaleform::Ptr<Scaleform::GFx::ImagePackParamsBase> & operator=(Scaleform::GFx::ImagePackParamsBase *);
	const Scaleform::Ptr<Scaleform::GFx::ImagePackParamsBase> & operator=(const Scaleform::Ptr<Scaleform::GFx::ImagePackParamsBase> &);
	Scaleform::Ptr<Scaleform::GFx::ImagePackParamsBase> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ImagePackParamsBase>);
	Scaleform::Ptr<Scaleform::GFx::ImagePackParamsBase> & SetPtr(Scaleform::GFx::ImagePackParamsBase &);
	Scaleform::Ptr<Scaleform::GFx::ImagePackParamsBase> & SetPtr(Scaleform::GFx::ImagePackParamsBase *);
	Scaleform::Ptr<Scaleform::GFx::ImagePackParamsBase> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ImagePackParamsBase> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ImagePackParamsBase * & GetRawRef();
	Scaleform::GFx::ImagePackParamsBase * GetPtr();
	Scaleform::GFx::ImagePackParamsBase & operator*();
	Scaleform::GFx::ImagePackParamsBase * operator->();
	Scaleform::GFx::ImagePackParamsBase * operator class Scaleform::GFx::ImagePackParamsBase *();
	Scaleform::Ptr<Scaleform::GFx::ImagePackParamsBase> & Pick(Scaleform::GFx::ImagePackParamsBase *);
	Scaleform::Ptr<Scaleform::GFx::ImagePackParamsBase> & Pick(Scaleform::Pickable<Scaleform::GFx::ImagePackParamsBase>);
	Scaleform::Ptr<Scaleform::GFx::ImagePackParamsBase> & Pick(Scaleform::Ptr<Scaleform::GFx::ImagePackParamsBase> &);
};
Scaleform::GFx::MovieDefBindStates::MovieDefBindStates(Scaleform::GFx::StateBag * psharedState); // 0x14030A5C0
Scaleform::GFx::MovieDefBindStates::MovieDefBindStates(Scaleform::GFx::MovieDefBindStates * pother); // 0x140345A20
class Scaleform::GFx::LoadStates :
	Scaleform::RefCountBase<Scaleform::GFx::LoadStates,2>
{
public:
	Scaleform::Ptr<Scaleform::GFx::MovieDefBindStates> pBindStates; // 0x10
	Scaleform::Ptr<Scaleform::GFx::LogState> pLog; // 0x18
	Scaleform::Ptr<Scaleform::GFx::ParseControl> pParseControl; // 0x20
	Scaleform::Ptr<Scaleform::GFx::ProgressHandler> pProgressHandler; // 0x28
	Scaleform::Ptr<Scaleform::GFx::TaskManager> pTaskManager; // 0x30
	Scaleform::Ptr<Scaleform::GFx::ImageFileHandlerRegistry> pImageFileHandlerRegistry; // 0x38
	Scaleform::Ptr<Scaleform::GFx::ZlibSupportBase> pZlibSupport; // 0x40
	Scaleform::Ptr<Scaleform::GFx::ASSupport> pAS2Support; // 0x48
	Scaleform::Ptr<Scaleform::GFx::ASSupport> pAS3Support; // 0x50
	Scaleform::Ptr<Scaleform::GFx::ResourceWeakLib> pWeakResourceLib; // 0x58
	Scaleform::Ptr<Scaleform::GFx::LoaderImpl> pLoaderImpl; // 0x60
	Scaleform::String RelativePath; // 0x68
	bool ThreadedLoading; // 0x70
	Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,2,Scaleform::ArrayDefaultPolicy> SubstituteFontMovieDefs; // 0x78
	LoadStates(const Scaleform::GFx::LoadStates &);
	LoadStates(Scaleform::GFx::LoaderImpl *, Scaleform::GFx::StateBag *, Scaleform::GFx::MovieDefBindStates *);
	LoadStates();
	virtual ~LoadStates();
	Scaleform::GFx::LoadStates * CloneForImport();
	Scaleform::GFx::ResourceWeakLib * GetLib();
	Scaleform::GFx::MovieDefBindStates * GetBindStates();
	Scaleform::GFx::LogState * GetLogState();
	Scaleform::Log * GetLog();
	Scaleform::GFx::TaskManager * GetTaskManager();
	Scaleform::GFx::ProgressHandler * GetProgressHandler();
	Scaleform::GFx::ImageFileHandlerRegistry * GetImageFileHandlerRegistry();
	Scaleform::GFx::ZlibSupportBase * GetZlibSupport();
	Scaleform::GFx::FontCompactorParams * GetFontCompactorParams();
	Scaleform::GFx::FileOpener * GetFileOpener();
	Scaleform::GFx::FontPackParams * GetFontPackParams();
	void SetRelativePathForDataDef(Scaleform::GFx::MovieDataDef *);
	const Scaleform::String & GetRelativePath();
	Scaleform::GFx::ImageCreator * GetLoadTimeImageCreator(unsigned long);
	Scaleform::GFx::ImageCreator * GetImageCreator();
	Scaleform::File * OpenFile(const char *, unsigned long);
	void BuildURL(Scaleform::String *, const Scaleform::GFx::URLBuilder::LocationInfo &);
	bool SubmitBackgroundTask(Scaleform::GFx::LoaderTask *);
	bool IsThreadedLoading();
	Scaleform::GFx::LoadStates & operator=(const Scaleform::GFx::LoadStates &);
};
class Scaleform::RefCountBase<Scaleform::GFx::LoadStates,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::GFx::LoadStates,2>(Scaleform::RefCountBase<Scaleform::GFx::LoadStates,2> &);
	RefCountBase<Scaleform::GFx::LoadStates,2>(const Scaleform::RefCountBase<Scaleform::GFx::LoadStates,2> &);
	RefCountBase<Scaleform::GFx::LoadStates,2>();
	virtual ~RefCountBase<Scaleform::GFx::LoadStates,2>();
	Scaleform::RefCountBase<Scaleform::GFx::LoadStates,2> & operator=(Scaleform::RefCountBase<Scaleform::GFx::LoadStates,2> &);
	Scaleform::RefCountBase<Scaleform::GFx::LoadStates,2> & operator=(const Scaleform::RefCountBase<Scaleform::GFx::LoadStates,2> &);
};
class Scaleform::Ptr<Scaleform::GFx::MovieDefBindStates>
{
protected:
	Scaleform::GFx::MovieDefBindStates * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::MovieDefBindStates>(const Scaleform::Ptr<Scaleform::GFx::MovieDefBindStates> &);
	Ptr<Scaleform::GFx::MovieDefBindStates>(Scaleform::GFx::MovieDefBindStates *);
	Ptr<Scaleform::GFx::MovieDefBindStates>(Scaleform::Ptr<Scaleform::GFx::MovieDefBindStates> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::MovieDefBindStates>(Scaleform::Pickable<Scaleform::GFx::MovieDefBindStates>);
	Ptr<Scaleform::GFx::MovieDefBindStates>(Scaleform::GFx::MovieDefBindStates &);
	Ptr<Scaleform::GFx::MovieDefBindStates>();
	~Ptr<Scaleform::GFx::MovieDefBindStates>();
	bool operator==(Scaleform::GFx::MovieDefBindStates *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::MovieDefBindStates> &);
	bool operator!=(Scaleform::GFx::MovieDefBindStates *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::MovieDefBindStates> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::MovieDefBindStates> &);
	Scaleform::Ptr<Scaleform::GFx::MovieDefBindStates> & operator=(Scaleform::Pickable<Scaleform::GFx::MovieDefBindStates>);
	const Scaleform::Ptr<Scaleform::GFx::MovieDefBindStates> & operator=(Scaleform::GFx::MovieDefBindStates &);
	const Scaleform::Ptr<Scaleform::GFx::MovieDefBindStates> & operator=(Scaleform::GFx::MovieDefBindStates *);
	const Scaleform::Ptr<Scaleform::GFx::MovieDefBindStates> & operator=(const Scaleform::Ptr<Scaleform::GFx::MovieDefBindStates> &);
	Scaleform::Ptr<Scaleform::GFx::MovieDefBindStates> & SetPtr(Scaleform::Pickable<Scaleform::GFx::MovieDefBindStates>);
	Scaleform::Ptr<Scaleform::GFx::MovieDefBindStates> & SetPtr(Scaleform::GFx::MovieDefBindStates &);
	Scaleform::Ptr<Scaleform::GFx::MovieDefBindStates> & SetPtr(Scaleform::GFx::MovieDefBindStates *);
	Scaleform::Ptr<Scaleform::GFx::MovieDefBindStates> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::MovieDefBindStates> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::MovieDefBindStates * & GetRawRef();
	Scaleform::GFx::MovieDefBindStates * GetPtr();
	Scaleform::GFx::MovieDefBindStates & operator*();
	Scaleform::GFx::MovieDefBindStates * operator->();
	Scaleform::GFx::MovieDefBindStates * operator class Scaleform::GFx::MovieDefBindStates *();
	Scaleform::Ptr<Scaleform::GFx::MovieDefBindStates> & Pick(Scaleform::GFx::MovieDefBindStates *);
	Scaleform::Ptr<Scaleform::GFx::MovieDefBindStates> & Pick(Scaleform::Pickable<Scaleform::GFx::MovieDefBindStates>);
	Scaleform::Ptr<Scaleform::GFx::MovieDefBindStates> & Pick(Scaleform::Ptr<Scaleform::GFx::MovieDefBindStates> &);
};
class Scaleform::Ptr<Scaleform::GFx::LoaderImpl>
{
protected:
	Scaleform::GFx::LoaderImpl * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::LoaderImpl>(const Scaleform::Ptr<Scaleform::GFx::LoaderImpl> &);
	Ptr<Scaleform::GFx::LoaderImpl>(Scaleform::GFx::LoaderImpl *);
	Ptr<Scaleform::GFx::LoaderImpl>(Scaleform::Ptr<Scaleform::GFx::LoaderImpl> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::LoaderImpl>(Scaleform::Pickable<Scaleform::GFx::LoaderImpl>);
	Ptr<Scaleform::GFx::LoaderImpl>(Scaleform::GFx::LoaderImpl &);
	Ptr<Scaleform::GFx::LoaderImpl>();
	~Ptr<Scaleform::GFx::LoaderImpl>();
	bool operator==(Scaleform::GFx::LoaderImpl *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::LoaderImpl> &);
	bool operator!=(Scaleform::GFx::LoaderImpl *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::LoaderImpl> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::LoaderImpl> &);
	Scaleform::Ptr<Scaleform::GFx::LoaderImpl> & operator=(Scaleform::Pickable<Scaleform::GFx::LoaderImpl>);
	const Scaleform::Ptr<Scaleform::GFx::LoaderImpl> & operator=(Scaleform::GFx::LoaderImpl &);
	const Scaleform::Ptr<Scaleform::GFx::LoaderImpl> & operator=(Scaleform::GFx::LoaderImpl *);
	const Scaleform::Ptr<Scaleform::GFx::LoaderImpl> & operator=(const Scaleform::Ptr<Scaleform::GFx::LoaderImpl> &);
	Scaleform::Ptr<Scaleform::GFx::LoaderImpl> & SetPtr(Scaleform::Pickable<Scaleform::GFx::LoaderImpl>);
	Scaleform::Ptr<Scaleform::GFx::LoaderImpl> & SetPtr(Scaleform::GFx::LoaderImpl &);
	Scaleform::Ptr<Scaleform::GFx::LoaderImpl> & SetPtr(Scaleform::GFx::LoaderImpl *);
	Scaleform::Ptr<Scaleform::GFx::LoaderImpl> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::LoaderImpl> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::LoaderImpl * & GetRawRef();
	Scaleform::GFx::LoaderImpl * GetPtr();
	Scaleform::GFx::LoaderImpl & operator*();
	Scaleform::GFx::LoaderImpl * operator->();
	Scaleform::GFx::LoaderImpl * operator class Scaleform::GFx::LoaderImpl *();
	Scaleform::Ptr<Scaleform::GFx::LoaderImpl> & Pick(Scaleform::GFx::LoaderImpl *);
	Scaleform::Ptr<Scaleform::GFx::LoaderImpl> & Pick(Scaleform::Pickable<Scaleform::GFx::LoaderImpl>);
	Scaleform::Ptr<Scaleform::GFx::LoaderImpl> & Pick(Scaleform::Ptr<Scaleform::GFx::LoaderImpl> &);
};
class Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>
{
protected:
	Scaleform::GFx::MovieDefImpl * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::MovieDefImpl>(const Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> &);
	Ptr<Scaleform::GFx::MovieDefImpl>(Scaleform::GFx::MovieDefImpl *);
	Ptr<Scaleform::GFx::MovieDefImpl>(Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::MovieDefImpl>(Scaleform::Pickable<Scaleform::GFx::MovieDefImpl>);
	Ptr<Scaleform::GFx::MovieDefImpl>(Scaleform::GFx::MovieDefImpl &);
	Ptr<Scaleform::GFx::MovieDefImpl>();
	~Ptr<Scaleform::GFx::MovieDefImpl>();
	bool operator==(Scaleform::GFx::MovieDefImpl *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> &);
	bool operator!=(Scaleform::GFx::MovieDefImpl *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> &);
	Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> & operator=(Scaleform::Pickable<Scaleform::GFx::MovieDefImpl>);
	const Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> & operator=(Scaleform::GFx::MovieDefImpl &);
	const Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> & operator=(Scaleform::GFx::MovieDefImpl *);
	const Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> & operator=(const Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> &);
	Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> & SetPtr(Scaleform::Pickable<Scaleform::GFx::MovieDefImpl>);
	Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> & SetPtr(Scaleform::GFx::MovieDefImpl &);
	Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> & SetPtr(Scaleform::GFx::MovieDefImpl *);
	Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::MovieDefImpl * & GetRawRef();
	Scaleform::GFx::MovieDefImpl * GetPtr();
	Scaleform::GFx::MovieDefImpl & operator*();
	Scaleform::GFx::MovieDefImpl * operator->();
	Scaleform::GFx::MovieDefImpl * operator class Scaleform::GFx::MovieDefImpl *();
	Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> & Pick(Scaleform::GFx::MovieDefImpl *);
	Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> & Pick(Scaleform::Pickable<Scaleform::GFx::MovieDefImpl>);
	Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> & Pick(Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> &);
};
class Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,2,Scaleform::ArrayDefaultPolicy> &);
	Array<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,2,Scaleform::ArrayDefaultPolicy>();
};
struct Scaleform::GFx::CharacterCreateInfo
{
	Scaleform::GFx::CharacterDef * pCharDef; // 0x0
	Scaleform::GFx::MovieDefImpl * pBindDefImpl; // 0x8
	Scaleform::GFx::Resource * pResource; // 0x10
	CharacterCreateInfo(Scaleform::GFx::CharacterDef *, Scaleform::GFx::MovieDefImpl *);
	CharacterCreateInfo();
};
class Scaleform::GFx::MovieDefImpl :
	Scaleform::GFx::MovieDef
{
public:
	Scaleform::Ptr<Scaleform::GFx::StateBagImpl> pStateBag; // 0x20
	Scaleform::Ptr<Scaleform::GFx::LoaderImpl> pLoaderImpl; // 0x28
	Scaleform::Ptr<Scaleform::GFx::MovieDefBindStates> pBindStates; // 0x30
	class ReleaseNotifier;
	Scaleform::HashSetLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *> > > ReleaseNotifiers; // 0x38
	Scaleform::Lock ReleaseNotifiersLock; // 0x40
	enum BindStateType
	{
		BS_NotStarted = 0,
		BS_InProgress = 1,
		BS_Finished = 2,
		BS_Canceled = 3,
		BS_Error = 4,
		BS_StateMask = 15,
		BSF_Frame1Loaded = 256,
		BSF_LastFrameLoaded = 512,
	};
	class BindTaskData;
	Scaleform::Ptr<Scaleform::GFx::MovieDefImpl::BindTaskData> pBindData; // 0x70
	MovieDefImpl(const Scaleform::GFx::MovieDefImpl &);
	MovieDefImpl(Scaleform::GFx::MovieDataDef *, Scaleform::GFx::MovieDefBindStates *, Scaleform::GFx::LoaderImpl *, unsigned long, Scaleform::GFx::StateBagImpl *, Scaleform::MemoryHeap *, bool, unsigned long long);
	virtual ~MovieDefImpl();
	virtual Scaleform::GFx::MemoryContext * CreateMemoryContext(const char *, const Scaleform::GFx::MemoryParams &, bool);
	virtual Scaleform::GFx::Movie * CreateInstance(Scaleform::GFx::MemoryContext *, bool, Scaleform::GFx::ActionControl *, Scaleform::Render::ThreadCommandQueue *);
	virtual Scaleform::GFx::Movie * CreateInstance(const Scaleform::GFx::MemoryParams &, bool, Scaleform::GFx::ActionControl *, Scaleform::Render::ThreadCommandQueue *);
	virtual Scaleform::MemoryHeap * GetLoadDataHeap();
	virtual Scaleform::MemoryHeap * GetBindDataHeap();
	virtual Scaleform::MemoryHeap * GetImageHeap();
	virtual Scaleform::GFx::Resource * GetMovieDataResource();
	static Scaleform::GFx::ResourceKey CreateMovieKey(Scaleform::GFx::MovieDataDef *, Scaleform::GFx::MovieDefBindStates *);
	Scaleform::GFx::MovieDataDef * GetDataDef();
	virtual unsigned long GetFrameCount();
	virtual float GetFrameRate();
	virtual Scaleform::Render::Rect<float> GetFrameRect();
	virtual float GetWidth();
	virtual float GetHeight();
	virtual unsigned long GetVersion();
	virtual unsigned long GetSWFFlags();
	virtual const char * GetFileURL();
	unsigned long GetFileBytes();
	virtual unsigned long GetLoadingFrame();
	unsigned long GetBytesLoaded();
	Scaleform::GFx::MovieDataDef::MovieLoadState GetLoadState();
	unsigned long GetTagCount();
	unsigned long GetLoadFlags();
	virtual void WaitForLoadFinish(bool);
	virtual void WaitForFrame(unsigned long);
	virtual const Scaleform::GFx::ExporterInfo * GetExporterInfo();
	Scaleform::Render::Rect<float> GetFrameRectInTwips();
	Scaleform::GFx::ResourceWeakLib * GetWeakLib();
	virtual Scaleform::GFx::StateBag * GetStateBagImpl();
	virtual unsigned long GetMetadata(char *, unsigned long);
	virtual unsigned long GetFileAttributes();
	void LogError(const char *, ...);
	bool WaitForBindStateFlags(unsigned long);
	Scaleform::GFx::CharacterCreateInfo GetCharacterCreateInfo(Scaleform::GFx::ResourceId);
	Scaleform::GFx::ResourceBinding & GetResourceBinding();
	const Scaleform::GFx::ResourceBinding & GetResourceBinding();
	virtual void VisitImportedMovies(Scaleform::GFx::MovieDef::ImportVisitor *);
	virtual void VisitResources(Scaleform::GFx::MovieDef::ResourceVisitor *, unsigned long);
	virtual Scaleform::GFx::Resource * GetResource(const char *);
	struct SearchInfo;
	Scaleform::GFx::FontResource * GetFontResource(const char *, unsigned long, Scaleform::GFx::MovieDefImpl::SearchInfo *);
	bool GetExportedResource(Scaleform::GFx::ResourceBindData *, const Scaleform::String &, Scaleform::GFx::MovieDefImpl *);
	const Scaleform::String * GetNameOfExportedResource(Scaleform::GFx::ResourceId);
	Scaleform::GFx::ResourceId GetExportedResourceIdByName(const Scaleform::String &);
	Scaleform::Ptr<Scaleform::GFx::ASSupport> GetASSupport();
	bool DoesDirectlyImport(const Scaleform::GFx::MovieDefImpl *);
	virtual Scaleform::GFx::ResourceKey GetKey();
	virtual unsigned long GetResourceTypeCode();
	void AddReleaseNotifier(Scaleform::GFx::MovieDefImpl::ReleaseNotifier *);
	void RemoveReleaseNotifier(Scaleform::GFx::MovieDefImpl::ReleaseNotifier *);
	Scaleform::GFx::MovieDefImpl & operator=(const Scaleform::GFx::MovieDefImpl &);
};
class Scaleform::GFx::MovieDefImpl :
	Scaleform::GFx::MovieDef
{
public:
	Scaleform::Ptr<Scaleform::GFx::StateBagImpl> pStateBag; // 0x20
	Scaleform::Ptr<Scaleform::GFx::LoaderImpl> pLoaderImpl; // 0x28
	Scaleform::Ptr<Scaleform::GFx::MovieDefBindStates> pBindStates; // 0x30
	class ReleaseNotifier;
	Scaleform::HashSetLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *> > > ReleaseNotifiers; // 0x38
	Scaleform::Lock ReleaseNotifiersLock; // 0x40
	enum BindStateType
	{
		BS_NotStarted = 0,
		BS_InProgress = 1,
		BS_Finished = 2,
		BS_Canceled = 3,
		BS_Error = 4,
		BS_StateMask = 15,
		BSF_Frame1Loaded = 256,
		BSF_LastFrameLoaded = 512,
	};
	class BindTaskData;
	Scaleform::Ptr<Scaleform::GFx::MovieDefImpl::BindTaskData> pBindData; // 0x70
	MovieDefImpl(const Scaleform::GFx::MovieDefImpl &);
	MovieDefImpl(Scaleform::GFx::MovieDataDef *, Scaleform::GFx::MovieDefBindStates *, Scaleform::GFx::LoaderImpl *, unsigned long, Scaleform::GFx::StateBagImpl *, Scaleform::MemoryHeap *, bool, unsigned long long);
	virtual ~MovieDefImpl();
	virtual Scaleform::GFx::MemoryContext * CreateMemoryContext(const char *, const Scaleform::GFx::MemoryParams &, bool);
	virtual Scaleform::GFx::Movie * CreateInstance(Scaleform::GFx::MemoryContext *, bool, Scaleform::GFx::ActionControl *, Scaleform::Render::ThreadCommandQueue *);
	virtual Scaleform::GFx::Movie * CreateInstance(const Scaleform::GFx::MemoryParams &, bool, Scaleform::GFx::ActionControl *, Scaleform::Render::ThreadCommandQueue *);
	virtual Scaleform::MemoryHeap * GetLoadDataHeap();
	virtual Scaleform::MemoryHeap * GetBindDataHeap();
	virtual Scaleform::MemoryHeap * GetImageHeap();
	virtual Scaleform::GFx::Resource * GetMovieDataResource();
	static Scaleform::GFx::ResourceKey CreateMovieKey(Scaleform::GFx::MovieDataDef *, Scaleform::GFx::MovieDefBindStates *);
	Scaleform::GFx::MovieDataDef * GetDataDef();
	virtual unsigned long GetFrameCount();
	virtual float GetFrameRate();
	virtual Scaleform::Render::Rect<float> GetFrameRect();
	virtual float GetWidth();
	virtual float GetHeight();
	virtual unsigned long GetVersion();
	virtual unsigned long GetSWFFlags();
	virtual const char * GetFileURL();
	unsigned long GetFileBytes();
	virtual unsigned long GetLoadingFrame();
	unsigned long GetBytesLoaded();
	Scaleform::GFx::MovieDataDef::MovieLoadState GetLoadState();
	unsigned long GetTagCount();
	unsigned long GetLoadFlags();
	virtual void WaitForLoadFinish(bool);
	virtual void WaitForFrame(unsigned long);
	virtual const Scaleform::GFx::ExporterInfo * GetExporterInfo();
	Scaleform::Render::Rect<float> GetFrameRectInTwips();
	Scaleform::GFx::ResourceWeakLib * GetWeakLib();
	virtual Scaleform::GFx::StateBag * GetStateBagImpl();
	virtual unsigned long GetMetadata(char *, unsigned long);
	unsigned long GetFileAttributes();
	void LogError(const char *, ...);
	bool WaitForBindStateFlags(unsigned long);
	Scaleform::GFx::CharacterCreateInfo GetCharacterCreateInfo(Scaleform::GFx::ResourceId);
	Scaleform::GFx::ResourceBinding & GetResourceBinding();
	const Scaleform::GFx::ResourceBinding & GetResourceBinding();
	virtual void VisitImportedMovies(Scaleform::GFx::MovieDef::ImportVisitor *);
	virtual void VisitResources(Scaleform::GFx::MovieDef::ResourceVisitor *, unsigned long);
	virtual Scaleform::GFx::Resource * GetResource(const char *);
	struct SearchInfo;
	Scaleform::GFx::FontResource * GetFontResource(const char *, unsigned long, Scaleform::GFx::MovieDefImpl::SearchInfo *);
	bool GetExportedResource(Scaleform::GFx::ResourceBindData *, const Scaleform::String &, Scaleform::GFx::MovieDefImpl *);
	const Scaleform::String * GetNameOfExportedResource(Scaleform::GFx::ResourceId);
	Scaleform::GFx::ResourceId GetExportedResourceIdByName(const Scaleform::String &);
	Scaleform::Ptr<Scaleform::GFx::ASSupport> GetASSupport();
	bool DoesDirectlyImport(const Scaleform::GFx::MovieDefImpl *);
	virtual Scaleform::GFx::ResourceKey GetKey();
	virtual unsigned long GetResourceTypeCode();
	void AddReleaseNotifier(Scaleform::GFx::MovieDefImpl::ReleaseNotifier *);
	void RemoveReleaseNotifier(Scaleform::GFx::MovieDefImpl::ReleaseNotifier *);
	Scaleform::GFx::MovieDefImpl & operator=(const Scaleform::GFx::MovieDefImpl &);
};
class Scaleform::GFx::MovieDefImpl::ReleaseNotifier
{
public:
	~ReleaseNotifier();
	void OnMovieDefRelease(Scaleform::GFx::MovieDefImpl *);
	ReleaseNotifier(const Scaleform::GFx::MovieDefImpl::ReleaseNotifier &);
	ReleaseNotifier();
	Scaleform::GFx::MovieDefImpl::ReleaseNotifier & operator=(const Scaleform::GFx::MovieDefImpl::ReleaseNotifier &);
};
class Scaleform::HashSetLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *> > > :
	Scaleform::HashSet<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::AllocatorLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *> > >
{
	class SelfType;
	class BaseType;
	typedef Scaleform::GFx::MovieDefImpl::ReleaseNotifier ValueType;
public:
	HashSetLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::Mo(const Scaleform::HashSetLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *> > > &);
	HashSetLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::Mo(long);
	HashSetLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::Mo();
	~HashSetLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::M();
	void operator=(const Scaleform::HashSetLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *> > > &);
};
class Scaleform::GFx::MovieDefImpl::BindTaskData :
	Scaleform::RefCountBase<Scaleform::GFx::MovieDefImpl::BindTaskData,2>
{
private:
	Scaleform::MemoryHeap * pHeap; // 0x10
	Scaleform::Ptr<Scaleform::GFx::MovieDataDef> pDataDef; // 0x18
	Scaleform::GFx::MovieDefImpl * pDefImpl_Unsafe; // 0x20
	unsigned long LoadFlags; // 0x28
	Scaleform::GFx::ResourceBinding ResourceBinding; // 0x30
	Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264,Scaleform::ArrayDefaultPolicy> ImportSourceMovies; // 0x88
	Scaleform::Lock ImportSourceLock; // 0xA0
	Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264,Scaleform::ArrayDefaultPolicy> ResourceImports; // 0xD0
	Scaleform::HashLH<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>,2,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF> > BoundShapeMeshProviders; // 0xE8
	volatile unsigned long BindState; // 0xF0
	Scaleform::Ptr<Scaleform::GFx::LoadUpdateSync> pBindUpdate; // 0xF8
	volatile unsigned long BindingFrame; // 0x100
	volatile unsigned long BytesLoaded; // 0x104
	volatile bool BindingCanceled; // 0x108
public:
	BindTaskData(const Scaleform::GFx::MovieDefImpl::BindTaskData &);
	BindTaskData(Scaleform::MemoryHeap *, Scaleform::GFx::MovieDataDef *, Scaleform::GFx::MovieDefImpl *, unsigned long, bool);
	virtual ~BindTaskData();
	Scaleform::MemoryHeap * GetBindDataHeap();
	void OnMovieDefRelease();
	Scaleform::GFx::MovieDataDef * GetDataDef();
	Scaleform::GFx::MovieDefImpl * GetMovieDefImplAddRef();
	void SetBindState(unsigned long);
	unsigned long GetBindState();
	Scaleform::GFx::MovieDefImpl::BindStateType GetBindStateType();
	unsigned long GetBindStateFlags();
	Scaleform::GFx::LoadUpdateSync * GetBindUpdateSync();
	void ReleaseBindUpdateSync();
	bool WaitForBindStateFlags(unsigned long);
	unsigned long GetLoadingFrame();
	unsigned long GetBytesLoaded();
	void UpdateBindingFrame(unsigned long, unsigned long);
	Scaleform::GFx::MovieDefImpl * GetImportSourceMovie(unsigned long);
	void AddResourceImportMovie(Scaleform::GFx::MovieDefImpl *);
	void ResolveImport(Scaleform::GFx::ImportData *, Scaleform::GFx::MovieDefImpl *, Scaleform::GFx::LoadStates *, bool);
	bool ResolveImportThroughFontLib(Scaleform::GFx::ImportData *);
	bool SetResourceBindData(Scaleform::GFx::ResourceDataNode *, Scaleform::GFx::Resource *);
	bool SetResourceBindData(Scaleform::GFx::ResourceId, Scaleform::GFx::ResourceBindData &, const char *);
	Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> GetShapeMeshProvider(Scaleform::Render::ShapeMeshProvider *);
	void AddShapeMeshProvider(Scaleform::Render::ShapeMeshProvider *, Scaleform::Render::ShapeMeshProvider *);
	Scaleform::GFx::MovieDefImpl::BindTaskData & operator=(const Scaleform::GFx::MovieDefImpl::BindTaskData &);
};
class Scaleform::RefCountBase<Scaleform::GFx::MovieDefImpl::BindTaskData,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::GFx::MovieDefImpl::BindTaskData,2>(Scaleform::RefCountBase<Scaleform::GFx::MovieDefImpl::BindTaskData,2> &);
	RefCountBase<Scaleform::GFx::MovieDefImpl::BindTaskData,2>(const Scaleform::RefCountBase<Scaleform::GFx::MovieDefImpl::BindTaskData,2> &);
	RefCountBase<Scaleform::GFx::MovieDefImpl::BindTaskData,2>();
	virtual ~RefCountBase<Scaleform::GFx::MovieDefImpl::BindTaskData,2>();
	Scaleform::RefCountBase<Scaleform::GFx::MovieDefImpl::BindTaskData,2> & operator=(Scaleform::RefCountBase<Scaleform::GFx::MovieDefImpl::BindTaskData,2> &);
	Scaleform::RefCountBase<Scaleform::GFx::MovieDefImpl::BindTaskData,2> & operator=(const Scaleform::RefCountBase<Scaleform::GFx::MovieDefImpl::BindTaskData,2> &);
};
class Scaleform::Ptr<Scaleform::GFx::MovieDataDef>
{
protected:
	Scaleform::GFx::MovieDataDef * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::MovieDataDef>(const Scaleform::Ptr<Scaleform::GFx::MovieDataDef> &);
	Ptr<Scaleform::GFx::MovieDataDef>(Scaleform::GFx::MovieDataDef *);
	Ptr<Scaleform::GFx::MovieDataDef>(Scaleform::Ptr<Scaleform::GFx::MovieDataDef> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::MovieDataDef>(Scaleform::Pickable<Scaleform::GFx::MovieDataDef>);
	Ptr<Scaleform::GFx::MovieDataDef>(Scaleform::GFx::MovieDataDef &);
	Ptr<Scaleform::GFx::MovieDataDef>();
	~Ptr<Scaleform::GFx::MovieDataDef>();
	bool operator==(Scaleform::GFx::MovieDataDef *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::MovieDataDef> &);
	bool operator!=(Scaleform::GFx::MovieDataDef *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::MovieDataDef> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::MovieDataDef> &);
	Scaleform::Ptr<Scaleform::GFx::MovieDataDef> & operator=(Scaleform::Pickable<Scaleform::GFx::MovieDataDef>);
	const Scaleform::Ptr<Scaleform::GFx::MovieDataDef> & operator=(Scaleform::GFx::MovieDataDef &);
	const Scaleform::Ptr<Scaleform::GFx::MovieDataDef> & operator=(Scaleform::GFx::MovieDataDef *);
	const Scaleform::Ptr<Scaleform::GFx::MovieDataDef> & operator=(const Scaleform::Ptr<Scaleform::GFx::MovieDataDef> &);
	Scaleform::Ptr<Scaleform::GFx::MovieDataDef> & SetPtr(Scaleform::Pickable<Scaleform::GFx::MovieDataDef>);
	Scaleform::Ptr<Scaleform::GFx::MovieDataDef> & SetPtr(Scaleform::GFx::MovieDataDef &);
	Scaleform::Ptr<Scaleform::GFx::MovieDataDef> & SetPtr(Scaleform::GFx::MovieDataDef *);
	Scaleform::Ptr<Scaleform::GFx::MovieDataDef> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::MovieDataDef> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::MovieDataDef * & GetRawRef();
	Scaleform::GFx::MovieDataDef * GetPtr();
	Scaleform::GFx::MovieDataDef & operator*();
	Scaleform::GFx::MovieDataDef * operator->();
	Scaleform::GFx::MovieDataDef * operator class Scaleform::GFx::MovieDataDef *();
	Scaleform::Ptr<Scaleform::GFx::MovieDataDef> & Pick(Scaleform::GFx::MovieDataDef *);
	Scaleform::Ptr<Scaleform::GFx::MovieDataDef> & Pick(Scaleform::Pickable<Scaleform::GFx::MovieDataDef>);
	Scaleform::Ptr<Scaleform::GFx::MovieDataDef> & Pick(Scaleform::Ptr<Scaleform::GFx::MovieDataDef> &);
};
class Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::HashLH<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>,2,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF> > :
	Scaleform::Hash<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF> > >
{
	class SelfType;
	class BaseType;
public:
	HashLH<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>,2,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Rende(const Scaleform::HashLH<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>,2,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF> > &);
	HashLH<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>,2,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Rende(long);
	HashLH<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>,2,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Rende();
	~HashLH<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>,2,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Rend();
	void operator=(const Scaleform::HashLH<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>,2,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF> > &);
};
class Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>
{
protected:
	Scaleform::Render::ShapeMeshProvider * pObject; // 0x0
public:
	Ptr<Scaleform::Render::ShapeMeshProvider>(const Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> &);
	Ptr<Scaleform::Render::ShapeMeshProvider>(Scaleform::Render::ShapeMeshProvider *);
	Ptr<Scaleform::Render::ShapeMeshProvider>(Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> &, Scaleform::PickType);
	Ptr<Scaleform::Render::ShapeMeshProvider>(Scaleform::Pickable<Scaleform::Render::ShapeMeshProvider>);
	Ptr<Scaleform::Render::ShapeMeshProvider>(Scaleform::Render::ShapeMeshProvider &);
	Ptr<Scaleform::Render::ShapeMeshProvider>();
	~Ptr<Scaleform::Render::ShapeMeshProvider>();
	bool operator==(Scaleform::Render::ShapeMeshProvider *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> &);
	bool operator!=(Scaleform::Render::ShapeMeshProvider *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> &);
	Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> & operator=(Scaleform::Pickable<Scaleform::Render::ShapeMeshProvider>);
	const Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> & operator=(Scaleform::Render::ShapeMeshProvider &);
	const Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> & operator=(Scaleform::Render::ShapeMeshProvider *);
	const Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> & operator=(const Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> &);
	Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> & SetPtr(Scaleform::Pickable<Scaleform::Render::ShapeMeshProvider>);
	Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> & SetPtr(Scaleform::Render::ShapeMeshProvider &);
	Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> & SetPtr(Scaleform::Render::ShapeMeshProvider *);
	Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> & SetPtr(const Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::ShapeMeshProvider * & GetRawRef();
	Scaleform::Render::ShapeMeshProvider * GetPtr();
	Scaleform::Render::ShapeMeshProvider & operator*();
	Scaleform::Render::ShapeMeshProvider * operator->();
	Scaleform::Render::ShapeMeshProvider * operator class Scaleform::Render::ShapeMeshProvider *();
	Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> & Pick(Scaleform::Render::ShapeMeshProvider *);
	Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> & Pick(Scaleform::Pickable<Scaleform::Render::ShapeMeshProvider>);
	Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> & Pick(Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> &);
};
class Scaleform::AtomicOps<unsigned int>
{
	struct Ops;
	typedef long T;
	typedef volatile long PT;
	union C2T_union;
public:
	static unsigned long Exchange_Sync(volatile unsigned long *, unsigned long);
	static unsigned long Exchange_Release(volatile unsigned long *, unsigned long);
	static unsigned long Exchange_Acquire(volatile unsigned long *, unsigned long);
	static unsigned long Exchange_NoSync(volatile unsigned long *, unsigned long);
	static unsigned long ExchangeAdd_Sync(volatile unsigned long *, unsigned long);
	static unsigned long ExchangeAdd_Release(volatile unsigned long *, unsigned long);
	static unsigned long ExchangeAdd_Acquire(volatile unsigned long *, unsigned long);
	static unsigned long ExchangeAdd_NoSync(volatile unsigned long *, unsigned long);
	static bool CompareAndSet_Sync(volatile unsigned long *, unsigned long, unsigned long);
	static bool CompareAndSet_Release(volatile unsigned long *, unsigned long, unsigned long);
	static bool CompareAndSet_Acquire(volatile unsigned long *, unsigned long, unsigned long);
	static bool CompareAndSet_NoSync(volatile unsigned long *, unsigned long, unsigned long);
	static void Store_Release(volatile unsigned long *, unsigned long);
	static unsigned long Load_Acquire(const unsigned long *);
};
class Scaleform::Ptr<Scaleform::GFx::MovieDefImpl::BindTaskData>
{
protected:
	Scaleform::GFx::MovieDefImpl::BindTaskData * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::MovieDefImpl::BindTaskData>(const Scaleform::Ptr<Scaleform::GFx::MovieDefImpl::BindTaskData> &);
	Ptr<Scaleform::GFx::MovieDefImpl::BindTaskData>(Scaleform::GFx::MovieDefImpl::BindTaskData *);
	Ptr<Scaleform::GFx::MovieDefImpl::BindTaskData>(Scaleform::Ptr<Scaleform::GFx::MovieDefImpl::BindTaskData> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::MovieDefImpl::BindTaskData>(Scaleform::Pickable<Scaleform::GFx::MovieDefImpl::BindTaskData>);
	Ptr<Scaleform::GFx::MovieDefImpl::BindTaskData>(Scaleform::GFx::MovieDefImpl::BindTaskData &);
	Ptr<Scaleform::GFx::MovieDefImpl::BindTaskData>();
	~Ptr<Scaleform::GFx::MovieDefImpl::BindTaskData>();
	bool operator==(Scaleform::GFx::MovieDefImpl::BindTaskData *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::MovieDefImpl::BindTaskData> &);
	bool operator!=(Scaleform::GFx::MovieDefImpl::BindTaskData *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::MovieDefImpl::BindTaskData> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::MovieDefImpl::BindTaskData> &);
	Scaleform::Ptr<Scaleform::GFx::MovieDefImpl::BindTaskData> & operator=(Scaleform::Pickable<Scaleform::GFx::MovieDefImpl::BindTaskData>);
	const Scaleform::Ptr<Scaleform::GFx::MovieDefImpl::BindTaskData> & operator=(Scaleform::GFx::MovieDefImpl::BindTaskData &);
	const Scaleform::Ptr<Scaleform::GFx::MovieDefImpl::BindTaskData> & operator=(Scaleform::GFx::MovieDefImpl::BindTaskData *);
	const Scaleform::Ptr<Scaleform::GFx::MovieDefImpl::BindTaskData> & operator=(const Scaleform::Ptr<Scaleform::GFx::MovieDefImpl::BindTaskData> &);
	Scaleform::Ptr<Scaleform::GFx::MovieDefImpl::BindTaskData> & SetPtr(Scaleform::Pickable<Scaleform::GFx::MovieDefImpl::BindTaskData>);
	Scaleform::Ptr<Scaleform::GFx::MovieDefImpl::BindTaskData> & SetPtr(Scaleform::GFx::MovieDefImpl::BindTaskData &);
	Scaleform::Ptr<Scaleform::GFx::MovieDefImpl::BindTaskData> & SetPtr(Scaleform::GFx::MovieDefImpl::BindTaskData *);
	Scaleform::Ptr<Scaleform::GFx::MovieDefImpl::BindTaskData> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::MovieDefImpl::BindTaskData> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::MovieDefImpl::BindTaskData * & GetRawRef();
	Scaleform::GFx::MovieDefImpl::BindTaskData * GetPtr();
	Scaleform::GFx::MovieDefImpl::BindTaskData & operator*();
	Scaleform::GFx::MovieDefImpl::BindTaskData * operator->();
	Scaleform::GFx::MovieDefImpl::BindTaskData * operator class Scaleform::GFx::MovieDefImpl::BindTaskData *();
	Scaleform::Ptr<Scaleform::GFx::MovieDefImpl::BindTaskData> & Pick(Scaleform::GFx::MovieDefImpl::BindTaskData *);
	Scaleform::Ptr<Scaleform::GFx::MovieDefImpl::BindTaskData> & Pick(Scaleform::Pickable<Scaleform::GFx::MovieDefImpl::BindTaskData>);
	Scaleform::Ptr<Scaleform::GFx::MovieDefImpl::BindTaskData> & Pick(Scaleform::Ptr<Scaleform::GFx::MovieDefImpl::BindTaskData> &);
};
Scaleform::MemoryHeap * Scaleform::GFx::MovieDefImpl::GetLoadDataHeap(); // 0x1403415A0
Scaleform::MemoryHeap * Scaleform::GFx::MovieDefImpl::GetBindDataHeap(); // 0x140340510
Scaleform::MemoryHeap * Scaleform::GFx::MovieDefImpl::GetImageHeap(); // 0x1403413E0
Scaleform::GFx::Resource * Scaleform::GFx::MovieDefImpl::GetMovieDataResource(); // 0x140341640
unsigned long Scaleform::GFx::MovieDefImpl::GetFrameCount(); // 0x1403410A0
float Scaleform::GFx::MovieDefImpl::GetFrameRate(); // 0x1403412E0
Scaleform::Render::Rect<float> Scaleform::GFx::MovieDefImpl::GetFrameRect(); // 0x140341300
float Scaleform::GFx::MovieDefImpl::GetWidth(); // 0x140341DD0
float Scaleform::GFx::MovieDefImpl::GetHeight(); // 0x140341320
unsigned long Scaleform::GFx::MovieDefImpl::GetVersion(); // 0x140341DC0
unsigned long Scaleform::GFx::MovieDefImpl::GetSWFFlags(); // 0x140341C30
const char * Scaleform::GFx::MovieDefImpl::GetFileURL(); // 0x140340B00
unsigned long Scaleform::GFx::MovieDefImpl::GetLoadingFrame(); // 0x1403415D0
void Scaleform::GFx::MovieDefImpl::WaitForLoadFinish(bool cancel); // 0x140344460
void Scaleform::GFx::MovieDefImpl::WaitForFrame(unsigned long frame); // 0x1403443D0
const Scaleform::GFx::ExporterInfo * Scaleform::GFx::MovieDefImpl::GetExporterInfo(); // 0x140340AC0
Scaleform::GFx::StateBag * Scaleform::GFx::MovieDefImpl::GetStateBagImpl(); // 0x1402EF1B0
unsigned long Scaleform::GFx::MovieDefImpl::GetMetadata(char * pbuff, unsigned long buffSize); // 0x1403415E0
unsigned long Scaleform::GFx::MovieDefImpl::GetFileAttributes(); // 0x140340AE0
struct Scaleform::GFx::MovieDefImpl::SearchInfo
{
	enum SearchStatus
	{
		NotFound = 0,
		FoundInResources = 1,
		FoundInResourcesNoGlyphs = 2,
		FoundInResourcesNeedFaux = 3,
		FoundInImports = 4,
		FoundInImportsFontLib = 5,
		FoundInExports = 6,
	};
	Scaleform::GFx::MovieDefImpl::SearchInfo::SearchStatus Status; // 0x0
	class StringSet;
	Scaleform::HashSet<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> > ImportSearchUrls; // 0x8
	Scaleform::String ImportFoundUrl; // 0x10
	SearchInfo(Scaleform::GFx::MovieDefImpl::SearchInfo &);
	SearchInfo(const Scaleform::GFx::MovieDefImpl::SearchInfo &);
	SearchInfo();
	~SearchInfo();
	Scaleform::GFx::MovieDefImpl::SearchInfo & operator=(Scaleform::GFx::MovieDefImpl::SearchInfo &);
	Scaleform::GFx::MovieDefImpl::SearchInfo & operator=(const Scaleform::GFx::MovieDefImpl::SearchInfo &);
};
class Scaleform::HashSet<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> > :
	Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> >
{
	class BaseType;
	class SelfType;
	class ValueType;
public:
	HashSet<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> >(const Scaleform::HashSet<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> > &);
	HashSet<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> >(void *, long);
	HashSet<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> >(void *);
	HashSet<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> >(long);
	HashSet<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> >();
	~HashSet<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> >();
	void operator=(const Scaleform::HashSet<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> > &);
	void CheckExpand();
	void Resize(unsigned long long);
	void SetCapacity(unsigned long long);
};
Scaleform::GFx::ResourceKey Scaleform::GFx::MovieDefImpl::GetKey(); // 0x1403414D0
unsigned long Scaleform::GFx::MovieDefImpl::GetResourceTypeCode(); // 0x140341C10
class Scaleform::GFx::MovieBindProcess :
	Scaleform::GFx::LoaderTask
{
	class BindTaskData;
private:
	Scaleform::GFx::FrameBindData * pFrameBindData; // 0x20
	Scaleform::GFx::ResourceId GlyphTextureIdGen; // 0x28
	Scaleform::Ptr<Scaleform::GFx::ImagePacker> pImagePacker; // 0x30
	Scaleform::Ptr<Scaleform::GFx::MovieDefImpl::BindTaskData> pBindData; // 0x38
	Scaleform::GFx::MovieDataDef * pDataDef; // 0x40
	bool Stripped; // 0x48
	Scaleform::GFx::LoaderImpl::LoadStackItem * pLoadStack; // 0x50
	Scaleform::GFx::TempBindData * pTempBindData; // 0x58
public:
	MovieBindProcess(const Scaleform::GFx::MovieBindProcess &);
	MovieBindProcess(Scaleform::GFx::LoadStates *, Scaleform::GFx::MovieDefImpl *, Scaleform::GFx::LoaderImpl::LoadStackItem *);
	virtual ~MovieBindProcess();
	enum BindStateType
	{
		BS_NotStarted = 0,
		BS_InProgress = 1,
		BS_Finished = 2,
		BS_Canceled = 3,
		BS_Error = 4,
		BS_StateMask = 15,
		BSF_Frame1Loaded = 256,
		BSF_LastFrameLoaded = 512,
	};
	Scaleform::GFx::MovieDefImpl::BindStateType BindNextFrame();
	void SetBindState(unsigned long);
	unsigned long GetBindState();
	Scaleform::GFx::MovieDefImpl::BindStateType GetBindStateType();
	unsigned long GetBindStateFlags();
	Scaleform::GFx::FrameBindData * GetNextFrameBindData();
	void FinishBinding();
	void SetTempBindData(Scaleform::GFx::TempBindData *);
	Scaleform::GFx::TempBindData * GetTempBindData();
	virtual void Execute();
	virtual void OnAbandon(bool);
	Scaleform::GFx::MovieBindProcess & operator=(const Scaleform::GFx::MovieBindProcess &);
};
class Scaleform::Ptr<Scaleform::GFx::ImagePacker>
{
protected:
	Scaleform::GFx::ImagePacker * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ImagePacker>(const Scaleform::Ptr<Scaleform::GFx::ImagePacker> &);
	Ptr<Scaleform::GFx::ImagePacker>(Scaleform::GFx::ImagePacker *);
	Ptr<Scaleform::GFx::ImagePacker>(Scaleform::Ptr<Scaleform::GFx::ImagePacker> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ImagePacker>(Scaleform::Pickable<Scaleform::GFx::ImagePacker>);
	Ptr<Scaleform::GFx::ImagePacker>(Scaleform::GFx::ImagePacker &);
	Ptr<Scaleform::GFx::ImagePacker>();
	~Ptr<Scaleform::GFx::ImagePacker>();
	bool operator==(Scaleform::GFx::ImagePacker *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ImagePacker> &);
	bool operator!=(Scaleform::GFx::ImagePacker *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ImagePacker> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ImagePacker> &);
	Scaleform::Ptr<Scaleform::GFx::ImagePacker> & operator=(Scaleform::Pickable<Scaleform::GFx::ImagePacker>);
	const Scaleform::Ptr<Scaleform::GFx::ImagePacker> & operator=(Scaleform::GFx::ImagePacker &);
	const Scaleform::Ptr<Scaleform::GFx::ImagePacker> & operator=(Scaleform::GFx::ImagePacker *);
	const Scaleform::Ptr<Scaleform::GFx::ImagePacker> & operator=(const Scaleform::Ptr<Scaleform::GFx::ImagePacker> &);
	Scaleform::Ptr<Scaleform::GFx::ImagePacker> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ImagePacker>);
	Scaleform::Ptr<Scaleform::GFx::ImagePacker> & SetPtr(Scaleform::GFx::ImagePacker &);
	Scaleform::Ptr<Scaleform::GFx::ImagePacker> & SetPtr(Scaleform::GFx::ImagePacker *);
	Scaleform::Ptr<Scaleform::GFx::ImagePacker> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ImagePacker> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ImagePacker * & GetRawRef();
	Scaleform::GFx::ImagePacker * GetPtr();
	Scaleform::GFx::ImagePacker & operator*();
	Scaleform::GFx::ImagePacker * operator->();
	Scaleform::GFx::ImagePacker * operator class Scaleform::GFx::ImagePacker *();
	Scaleform::Ptr<Scaleform::GFx::ImagePacker> & Pick(Scaleform::GFx::ImagePacker *);
	Scaleform::Ptr<Scaleform::GFx::ImagePacker> & Pick(Scaleform::Pickable<Scaleform::GFx::ImagePacker>);
	Scaleform::Ptr<Scaleform::GFx::ImagePacker> & Pick(Scaleform::Ptr<Scaleform::GFx::ImagePacker> &);
};
void Scaleform::GFx::MovieBindProcess::Execute(); // 0x140340120
void Scaleform::GFx::MovieBindProcess::OnAbandon(bool started); // 0x1403422B0
class Scaleform::GFx::ActionPriority
{
	enum Priority
	{
		AP_Highest = 0,
		AP_Initialize = 1,
		AP_InitClip = 2,
		AP_Construct = 3,
		AP_Frame = 4,
		AP_Normal = 4,
		AP_Load = 5,
		AP_Count = 6,
	};
};
class Scaleform::GFx::ExecuteTag
{
public:
	~ExecuteTag();
	static void LoadData(Scaleform::GFx::Stream *, unsigned char *, unsigned long long, unsigned long long);
	void Execute(Scaleform::GFx::DisplayObjContainer *);
	void ExecuteWithPriority(Scaleform::GFx::DisplayObjContainer *, Scaleform::GFx::ActionPriority::Priority);
	bool IsRemoveTag();
	bool IsActionTag();
	bool IsInitImportActionsTag();
	struct DepthResId;
	void AddToTimelineSnapshot(Scaleform::GFx::TimelineSnapshot *, unsigned long);
	void Trace(const char *);
	ExecuteTag(const Scaleform::GFx::ExecuteTag &);
	ExecuteTag();
	Scaleform::GFx::ExecuteTag & operator=(const Scaleform::GFx::ExecuteTag &);
};
void Scaleform::GFx::ExecuteTag::ExecuteWithPriority(Scaleform::GFx::DisplayObjContainer * m, Scaleform::GFx::ActionPriority::Priority prio); // 0x14002DF00
struct Scaleform::GFx::ExecuteTag::DepthResId
{
	long Depth; // 0x0
	Scaleform::GFx::ResourceId Id; // 0x4
	DepthResId(const Scaleform::GFx::ExecuteTag::DepthResId &);
	DepthResId(Scaleform::GFx::ResourceId, long);
	DepthResId();
	Scaleform::GFx::ExecuteTag::DepthResId & operator=(const Scaleform::GFx::ExecuteTag::DepthResId &);
	bool operator==(const Scaleform::GFx::ExecuteTag::DepthResId &);
	bool operator!=(const Scaleform::GFx::ExecuteTag::DepthResId &);
};
class Scaleform::GFx::GFxPlaceObjectBase :
	Scaleform::GFx::ExecuteTag
{
	class EventArrayType;
	enum PlaceActionType
	{
		Place_Add = 0,
		Place_Move = 1,
		Place_Replace = 2,
	};
	struct UnpackedData;
public:
	void Unpack(Scaleform::GFx::GFxPlaceObjectBase::UnpackedData &);
	Scaleform::ArrayLH<Scaleform::GFx::SwfEvent *,260,Scaleform::ArrayDefaultPolicy> * UnpackEventHandlers();
	Scaleform::GFx::CharPosInfoFlags GetFlags();
	void Trace(const char *) = 0;
	void Execute(Scaleform::GFx::DisplayObjContainer *) = 0;
	GFxPlaceObjectBase(Scaleform::GFx::GFxPlaceObjectBase &);
	GFxPlaceObjectBase(const Scaleform::GFx::GFxPlaceObjectBase &);
	GFxPlaceObjectBase();
	virtual ~GFxPlaceObjectBase();
	Scaleform::GFx::GFxPlaceObjectBase & operator=(Scaleform::GFx::GFxPlaceObjectBase &);
	Scaleform::GFx::GFxPlaceObjectBase & operator=(const Scaleform::GFx::GFxPlaceObjectBase &);
};
struct Scaleform::GFx::GFxPlaceObjectBase::UnpackedData
{
	Scaleform::GFx::CharPosInfo Pos; // 0x0
	Scaleform::ArrayLH<Scaleform::GFx::SwfEvent *,260,Scaleform::ArrayDefaultPolicy> * pEventHandlers; // 0x70
	const char * Name; // 0x78
	Scaleform::GFx::GFxPlaceObjectBase::PlaceActionType PlaceType; // 0x80
	UnpackedData(Scaleform::GFx::GFxPlaceObjectBase::UnpackedData &);
	UnpackedData(const Scaleform::GFx::GFxPlaceObjectBase::UnpackedData &);
	UnpackedData();
	~UnpackedData();
	Scaleform::GFx::GFxPlaceObjectBase::UnpackedData & operator=(Scaleform::GFx::GFxPlaceObjectBase::UnpackedData &);
	Scaleform::GFx::GFxPlaceObjectBase::UnpackedData & operator=(const Scaleform::GFx::GFxPlaceObjectBase::UnpackedData &);
};
class Scaleform::GFx::GFxPlaceObjectUnpacked :
	Scaleform::GFx::GFxPlaceObjectBase
{
public:
	GFxPlaceObjectUnpacked();
private:
	GFxPlaceObjectUnpacked(const Scaleform::GFx::GFxPlaceObjectUnpacked &);
	Scaleform::GFx::GFxPlaceObjectUnpacked & operator=(const Scaleform::GFx::GFxPlaceObjectUnpacked &);
public:
	Scaleform::GFx::CharPosInfo Pos; // 0x10
	virtual ~GFxPlaceObjectUnpacked();
	virtual void Unpack(Scaleform::GFx::GFxPlaceObjectBase::UnpackedData &);
	virtual Scaleform::GFx::CharPosInfoFlags GetFlags();
	virtual void Execute(Scaleform::GFx::DisplayObjContainer *);
	virtual void AddToTimelineSnapshot(Scaleform::GFx::TimelineSnapshot *, unsigned long);
	virtual void Trace(const char *);
	void InitializeToAdd(const Scaleform::GFx::CharPosInfo &);
};
Scaleform::GFx::GFxPlaceObjectUnpacked::GFxPlaceObjectUnpacked(); // 0x14033C690
void Scaleform::GFx::GFxPlaceObjectUnpacked::Unpack(Scaleform::GFx::GFxPlaceObjectBase::UnpackedData & data); // 0x140343A30
Scaleform::GFx::CharPosInfoFlags Scaleform::GFx::GFxPlaceObjectUnpacked::GetFlags(); // 0x140340B20
class Scaleform::GFx::PlaceObject2Tag :
	Scaleform::GFx::GFxPlaceObjectBase
{
public:
	PlaceObject2Tag();
private:
	PlaceObject2Tag(const Scaleform::GFx::PlaceObject2Tag &);
	Scaleform::GFx::PlaceObject2Tag & operator=(const Scaleform::GFx::PlaceObject2Tag &);
	enum PlaceObject2Flags
	{
		PO2_HasActions = 128,
		PO2_HasClipBracket = 64,
		PO2_HasName = 32,
		PO2_HasRatio = 16,
		PO2_HasCxform = 8,
		PO2_HasMatrix = 4,
		PO2_HasChar = 2,
		PO2_FlagMove = 1,
	};
public:
	unsigned char pData[1]; // 0x8
	virtual ~PlaceObject2Tag();
	static bool HasEventHandlers(Scaleform::GFx::Stream *);
	static void RestructureForEventHandlers(unsigned char *);
	static Scaleform::ArrayLH<Scaleform::GFx::SwfEvent *,260,Scaleform::ArrayDefaultPolicy> * GetEventHandlersPtr(const unsigned char *);
	static void SetEventHandlersPtr(unsigned char *, Scaleform::ArrayLH<Scaleform::GFx::SwfEvent *,260,Scaleform::ArrayDefaultPolicy> *);
	static unsigned long long ComputeDataSize(Scaleform::GFx::Stream *, unsigned long);
	virtual void Unpack(Scaleform::GFx::GFxPlaceObjectBase::UnpackedData &);
	virtual Scaleform::ArrayLH<Scaleform::GFx::SwfEvent *,260,Scaleform::ArrayDefaultPolicy> * UnpackEventHandlers();
	virtual Scaleform::GFx::CharPosInfoFlags GetFlags();
	virtual void Execute(Scaleform::GFx::DisplayObjContainer *);
	virtual void AddToTimelineSnapshot(Scaleform::GFx::TimelineSnapshot *, unsigned long);
	virtual void Trace(const char *);
protected:
	unsigned short GetDepth();
	Scaleform::GFx::GFxPlaceObjectBase::PlaceActionType GetPlaceType();
	void ExecuteBase(Scaleform::GFx::DisplayObjContainer *, unsigned char);
	void AddToTimelineSnapshotBase(Scaleform::GFx::TimelineSnapshot *, unsigned long, unsigned char);
	void TraceBase(const char *, unsigned char);
	void UnpackBase(Scaleform::GFx::GFxPlaceObjectBase::UnpackedData &, unsigned char);
	void ProcessEventHandlers(Scaleform::GFx::GFxPlaceObjectBase::UnpackedData &, Scaleform::GFx::StreamContext &, const unsigned char *, unsigned char);
};
void Scaleform::GFx::PlaceObject2Tag::Unpack(Scaleform::GFx::GFxPlaceObjectBase::UnpackedData & data); // 0x14036ED10
void Scaleform::GFx::PlaceObject2Tag::Execute(Scaleform::GFx::DisplayObjContainer * m); // 0x14036E320
void Scaleform::GFx::PlaceObject2Tag::Trace(const char * str); // 0x14036ECF0
class Scaleform::GFx::PlaceObject2Taga :
	Scaleform::GFx::PlaceObject2Tag
{
public:
	PlaceObject2Taga();
private:
	PlaceObject2Taga(const Scaleform::GFx::PlaceObject2Taga &);
	Scaleform::GFx::PlaceObject2Taga & operator=(const Scaleform::GFx::PlaceObject2Taga &);
public:
	virtual void Unpack(Scaleform::GFx::GFxPlaceObjectBase::UnpackedData &);
	virtual void Execute(Scaleform::GFx::DisplayObjContainer *);
	virtual void Trace(const char *);
	virtual ~PlaceObject2Taga();
};
void Scaleform::GFx::PlaceObject2Taga::Unpack(Scaleform::GFx::GFxPlaceObjectBase::UnpackedData & data); // 0x14036ED20
void Scaleform::GFx::PlaceObject2Taga::Execute(Scaleform::GFx::DisplayObjContainer * m); // 0x14036E330
void Scaleform::GFx::PlaceObject2Taga::Trace(const char * str); // 0x14036ED00
class Scaleform::GFx::PlaceObject3Tag :
	Scaleform::GFx::GFxPlaceObjectBase
{
public:
	PlaceObject3Tag();
private:
	PlaceObject3Tag(const Scaleform::GFx::PlaceObject3Tag &);
	Scaleform::GFx::PlaceObject3Tag & operator=(const Scaleform::GFx::PlaceObject3Tag &);
	enum PlaceObject3Flags
	{
		PO3_Invisible = 32,
		PO3_HasImage = 16,
		PO3_HasClassName = 8,
		PO3_BitmapCaching = 4,
		PO3_HasBlendMode = 2,
		PO3_HasFilters = 1,
	};
public:
	unsigned char pData[1]; // 0x8
	virtual ~PlaceObject3Tag();
	static unsigned long long ComputeDataSize(Scaleform::GFx::Stream *);
	virtual void Unpack(Scaleform::GFx::GFxPlaceObjectBase::UnpackedData &);
	virtual Scaleform::ArrayLH<Scaleform::GFx::SwfEvent *,260,Scaleform::ArrayDefaultPolicy> * UnpackEventHandlers();
	virtual Scaleform::GFx::CharPosInfoFlags GetFlags();
	virtual void Execute(Scaleform::GFx::DisplayObjContainer *);
	virtual void AddToTimelineSnapshot(Scaleform::GFx::TimelineSnapshot *, unsigned long);
	virtual void Trace(const char *);
protected:
	void ProcessEventHandlers(Scaleform::GFx::GFxPlaceObjectBase::UnpackedData &, Scaleform::GFx::StreamContext &, const unsigned char *);
	unsigned short GetDepth();
	Scaleform::GFx::GFxPlaceObjectBase::PlaceActionType GetPlaceType();
};
class Scaleform::GFx::RemoveObject2Tag :
	Scaleform::GFx::ExecuteTag
{
public:
	unsigned short Depth; // 0x8
	void Read(Scaleform::GFx::LoadProcess *);
	virtual void Execute(Scaleform::GFx::DisplayObjContainer *);
	virtual bool IsRemoveTag();
protected:
	void AddToTimelineSnapshot(unsigned short, Scaleform::GFx::TimelineSnapshot *);
public:
	virtual void AddToTimelineSnapshot(Scaleform::GFx::TimelineSnapshot *, unsigned long);
	virtual void Trace(const char *);
protected:
	void CheckEventHandlers(void * *, Scaleform::ArrayLH<Scaleform::GFx::SwfEvent *,260,Scaleform::ArrayDefaultPolicy> *);
public:
	RemoveObject2Tag(Scaleform::GFx::RemoveObject2Tag &);
	RemoveObject2Tag(const Scaleform::GFx::RemoveObject2Tag &);
	RemoveObject2Tag();
	virtual ~RemoveObject2Tag();
	Scaleform::GFx::RemoveObject2Tag & operator=(Scaleform::GFx::RemoveObject2Tag &);
	Scaleform::GFx::RemoveObject2Tag & operator=(const Scaleform::GFx::RemoveObject2Tag &);
};
class Scaleform::GFx::RemoveObjectTag :
	Scaleform::GFx::RemoveObject2Tag
{
public:
	unsigned short Id; // 0x10
	virtual void Read(Scaleform::GFx::LoadProcess *);
	virtual void Execute(Scaleform::GFx::DisplayObjContainer *);
	virtual void Trace(const char *);
	RemoveObjectTag(Scaleform::GFx::RemoveObjectTag &);
	RemoveObjectTag(const Scaleform::GFx::RemoveObjectTag &);
	RemoveObjectTag();
	virtual ~RemoveObjectTag();
	Scaleform::GFx::RemoveObjectTag & operator=(Scaleform::GFx::RemoveObjectTag &);
	Scaleform::GFx::RemoveObjectTag & operator=(const Scaleform::GFx::RemoveObjectTag &);
};
class Scaleform::GFx::SetBackgroundColorTag :
	Scaleform::GFx::ExecuteTag
{
public:
	Scaleform::Render::Color Color; // 0x8
	virtual void Execute(Scaleform::GFx::DisplayObjContainer *);
	void ExecuteState(Scaleform::GFx::DisplayObjContainer *);
	void Read(Scaleform::GFx::LoadProcess *);
	SetBackgroundColorTag(Scaleform::GFx::SetBackgroundColorTag &);
	SetBackgroundColorTag(const Scaleform::GFx::SetBackgroundColorTag &);
	SetBackgroundColorTag();
	virtual ~SetBackgroundColorTag();
	Scaleform::GFx::SetBackgroundColorTag & operator=(Scaleform::GFx::SetBackgroundColorTag &);
	Scaleform::GFx::SetBackgroundColorTag & operator=(const Scaleform::GFx::SetBackgroundColorTag &);
};
class Scaleform::GFx::GFxInitImportActions :
	Scaleform::GFx::ExecuteTag
{
private:
	unsigned long ImportIndex; // 0x8
public:
	GFxInitImportActions(Scaleform::GFx::GFxInitImportActions &);
	GFxInitImportActions(const Scaleform::GFx::GFxInitImportActions &);
	GFxInitImportActions();
	void SetImportIndex(unsigned long);
	virtual void Execute(Scaleform::GFx::DisplayObjContainer *);
	void ExecuteInContext(Scaleform::GFx::DisplayObjContainer *, Scaleform::GFx::MovieDefImpl *, bool);
	virtual bool IsInitImportActionsTag();
	virtual ~GFxInitImportActions();
	Scaleform::GFx::GFxInitImportActions & operator=(Scaleform::GFx::GFxInitImportActions &);
	Scaleform::GFx::GFxInitImportActions & operator=(const Scaleform::GFx::GFxInitImportActions &);
};