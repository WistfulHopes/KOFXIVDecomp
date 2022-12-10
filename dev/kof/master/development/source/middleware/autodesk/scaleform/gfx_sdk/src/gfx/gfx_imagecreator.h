#pragma once

class Scaleform::GFx::ImageCreateInfo
{
	enum CreateType
	{
		Create_Protocol = 0,
		Create_FileImage = 1,
		Create_ExportImage = 2,
		Create_SourceImage = 3,
	};
public:
	Scaleform::GFx::ImageCreateInfo::CreateType Type; // 0x0
	Scaleform::MemoryHeap * pHeap; // 0x8
	unsigned long Use; // 0x10
	Scaleform::GFx::Resource::ResourceUse RUse; // 0x14
	Scaleform::Log * pLog; // 0x18
	Scaleform::GFx::FileOpener * pFileOpener; // 0x20
	Scaleform::GFx::ImageFileHandlerRegistry * pIFHRegistry; // 0x28
	Scaleform::GFx::Movie * pMovie; // 0x30
	ImageCreateInfo(Scaleform::GFx::ImageCreateInfo::CreateType, Scaleform::MemoryHeap *, unsigned long, Scaleform::GFx::Resource::ResourceUse);
	void SetStates(Scaleform::Log *, Scaleform::GFx::FileOpener *, Scaleform::GFx::ImageFileHandlerRegistry *);
	Scaleform::MemoryHeap * GetHeap();
	Scaleform::Log * GetLog();
	Scaleform::GFx::FileOpener * GetFileOpener();
	Scaleform::GFx::ImageFileHandlerRegistry * GetImageFileHandlerRegistry();
};
struct Scaleform::GFx::ImageCreateExportInfo :
	Scaleform::GFx::ImageCreateInfo
{
	Scaleform::Render::ImageFileFormat Format; // 0x38
	const Scaleform::GFx::ExporterInfo * pExporterInfo; // 0x40
	Scaleform::String ExportName; // 0x48
	Scaleform::Render::Size<unsigned long> TargetSize; // 0x50
	ImageCreateExportInfo(Scaleform::GFx::ImageCreateExportInfo &);
	ImageCreateExportInfo(const Scaleform::GFx::ImageCreateExportInfo &);
	ImageCreateExportInfo(Scaleform::MemoryHeap *, unsigned long, Scaleform::GFx::Resource::ResourceUse);
	~ImageCreateExportInfo();
	Scaleform::GFx::ImageCreateExportInfo & operator=(Scaleform::GFx::ImageCreateExportInfo &);
	Scaleform::GFx::ImageCreateExportInfo & operator=(const Scaleform::GFx::ImageCreateExportInfo &);
	void __dflt_ctor_closure();
};
class Scaleform::GFx::ImageCreator :
	Scaleform::GFx::State
{
private:
	Scaleform::Ptr<Scaleform::Render::TextureManager> pTextureManager; // 0x18
public:
	ImageCreator(Scaleform::GFx::ImageCreator &);
	ImageCreator(const Scaleform::GFx::ImageCreator &);
	ImageCreator(Scaleform::Render::TextureManager *);
	Scaleform::Render::Image * LoadProtocolImage(const Scaleform::GFx::ImageCreateInfo &, const Scaleform::String &);
	Scaleform::Render::Image * LoadImageFile(const Scaleform::GFx::ImageCreateInfo &, const Scaleform::String &);
	Scaleform::Render::Image * LoadExportedImage(const Scaleform::GFx::ImageCreateExportInfo &, const Scaleform::String &);
	Scaleform::Render::Image * CreateImage(const Scaleform::GFx::ImageCreateInfo &, Scaleform::Render::ImageSource *);
	enum LoadStage
	{
		Stage_Load = 0,
		Stage_Bind = 1,
	};
	Scaleform::RefCountImpl * GetBindKey(Scaleform::GFx::ImageCreator::LoadStage);
	Scaleform::Render::TextureManager * GetTextureManager();
	virtual ~ImageCreator();
	Scaleform::GFx::ImageCreator & operator=(Scaleform::GFx::ImageCreator &);
	Scaleform::GFx::ImageCreator & operator=(const Scaleform::GFx::ImageCreator &);
	void __dflt_ctor_closure();
};
class Scaleform::Ptr<Scaleform::Render::TextureManager>
{
protected:
	Scaleform::Render::TextureManager * pObject; // 0x0
public:
	Ptr<Scaleform::Render::TextureManager>(const Scaleform::Ptr<Scaleform::Render::TextureManager> &);
	Ptr<Scaleform::Render::TextureManager>(Scaleform::Render::TextureManager *);
	Ptr<Scaleform::Render::TextureManager>(Scaleform::Ptr<Scaleform::Render::TextureManager> &, Scaleform::PickType);
	Ptr<Scaleform::Render::TextureManager>(Scaleform::Pickable<Scaleform::Render::TextureManager>);
	Ptr<Scaleform::Render::TextureManager>(Scaleform::Render::TextureManager &);
	Ptr<Scaleform::Render::TextureManager>();
	~Ptr<Scaleform::Render::TextureManager>();
	bool operator==(Scaleform::Render::TextureManager *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::TextureManager> &);
	bool operator!=(Scaleform::Render::TextureManager *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::TextureManager> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::TextureManager> &);
	Scaleform::Ptr<Scaleform::Render::TextureManager> & operator=(Scaleform::Pickable<Scaleform::Render::TextureManager>);
	const Scaleform::Ptr<Scaleform::Render::TextureManager> & operator=(Scaleform::Render::TextureManager &);
	const Scaleform::Ptr<Scaleform::Render::TextureManager> & operator=(Scaleform::Render::TextureManager *);
	const Scaleform::Ptr<Scaleform::Render::TextureManager> & operator=(const Scaleform::Ptr<Scaleform::Render::TextureManager> &);
	Scaleform::Ptr<Scaleform::Render::TextureManager> & SetPtr(Scaleform::Pickable<Scaleform::Render::TextureManager>);
	Scaleform::Ptr<Scaleform::Render::TextureManager> & SetPtr(Scaleform::Render::TextureManager &);
	Scaleform::Ptr<Scaleform::Render::TextureManager> & SetPtr(Scaleform::Render::TextureManager *);
	Scaleform::Ptr<Scaleform::Render::TextureManager> & SetPtr(const Scaleform::Ptr<Scaleform::Render::TextureManager> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::TextureManager * & GetRawRef();
	Scaleform::Render::TextureManager * GetPtr();
	Scaleform::Render::TextureManager & operator*();
	Scaleform::Render::TextureManager * operator->();
	Scaleform::Render::TextureManager * operator class Scaleform::Render::TextureManager *();
	Scaleform::Ptr<Scaleform::Render::TextureManager> & Pick(Scaleform::Render::TextureManager *);
	Scaleform::Ptr<Scaleform::Render::TextureManager> & Pick(Scaleform::Pickable<Scaleform::Render::TextureManager>);
	Scaleform::Ptr<Scaleform::Render::TextureManager> & Pick(Scaleform::Ptr<Scaleform::Render::TextureManager> &);
};
Scaleform::RefCountImpl * Scaleform::GFx::ImageCreator::GetBindKey(Scaleform::GFx::ImageCreator::LoadStage __formal); // 0x1400470F0
class Scaleform::GFx::ImageFileHandlerRegistry :
	Scaleform::GFx::State,
	Scaleform::Render::ImageFileHandlerRegistry
{
	enum InitType
	{
		NoInit = 0,
		AddDefaultHandlers = 1,
	};
public:
	ImageFileHandlerRegistry(Scaleform::GFx::ImageFileHandlerRegistry &);
	ImageFileHandlerRegistry(const Scaleform::GFx::ImageFileHandlerRegistry &);
	ImageFileHandlerRegistry(Scaleform::GFx::ImageFileHandlerRegistry::InitType);
	void AddHandler(Scaleform::Render::ImageFileHandler *);
	virtual ~ImageFileHandlerRegistry();
	Scaleform::GFx::ImageFileHandlerRegistry & operator=(Scaleform::GFx::ImageFileHandlerRegistry &);
	Scaleform::GFx::ImageFileHandlerRegistry & operator=(const Scaleform::GFx::ImageFileHandlerRegistry &);
	void __dflt_ctor_closure();
};