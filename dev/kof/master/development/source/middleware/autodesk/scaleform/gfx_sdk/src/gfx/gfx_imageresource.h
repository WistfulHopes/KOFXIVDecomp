#pragma once

struct Scaleform::GFx::ImageFileInfo :
	Scaleform::GFx::ResourceFileInfo
{
	unsigned short TargetWidth; // 0x28
	unsigned short TargetHeight; // 0x2A
	Scaleform::GFx::Resource::ResourceUse Use; // 0x2C
	Scaleform::String ExportName; // 0x30
	ImageFileInfo(const Scaleform::GFx::ImageFileInfo &);
	ImageFileInfo();
	virtual ~ImageFileInfo();
	Scaleform::GFx::ImageFileInfo & operator=(const Scaleform::GFx::ImageFileInfo &);
};
Scaleform::GFx::ImageFileInfo::ImageFileInfo(const Scaleform::GFx::ImageFileInfo & other); // 0x140345390
class Scaleform::GFx::ImageResource :
	Scaleform::GFx::Resource
{
protected:
	Scaleform::Render::ImageBase * pImage; // 0x18
	class ImageDelegate;
	Scaleform::GFx::ImageResource::ImageDelegate Delegate; // 0x20
	Scaleform::GFx::ResourceKey Key; // 0x50
	Scaleform::GFx::Resource::ResourceUse UseType; // 0x60
public:
	ImageResource(const Scaleform::GFx::ImageResource &);
	ImageResource(Scaleform::Render::Image *, const Scaleform::GFx::ResourceKey &, Scaleform::GFx::Resource::ResourceUse);
	ImageResource(Scaleform::Render::Image *, Scaleform::GFx::Resource::ResourceUse);
	ImageResource(Scaleform::Render::ImageSource *, Scaleform::GFx::Resource::ResourceUse);
	ImageResource(Scaleform::Render::ImageBase *, Scaleform::GFx::Resource::ResourceUse);
	virtual ~ImageResource();
	Scaleform::Render::ImageBase * GetImage();
	const Scaleform::Render::ImageBase * GetImage();
	void SetImageSource(Scaleform::Render::ImageSource *);
	void SetImage(Scaleform::Render::Image *);
	unsigned long GetWidth();
	unsigned long GetHeight();
	Scaleform::GFx::ResourceId GetBaseImageId();
	const char * GetFileURL();
	virtual Scaleform::GFx::ResourceKey GetKey();
	Scaleform::GFx::Resource::ResourceUse GetImageUse();
	virtual unsigned long GetResourceTypeCode();
	static Scaleform::GFx::ResourceKey CreateImageFileKey(Scaleform::GFx::ImageFileInfo *, Scaleform::GFx::FileOpener *, Scaleform::GFx::ImageCreator *, Scaleform::MemoryHeap *);
	Scaleform::GFx::ImageResource & operator=(const Scaleform::GFx::ImageResource &);
};
class Scaleform::GFx::ImageResource::ImageDelegate :
	Scaleform::Render::ImageDelegate
{
private:
	Scaleform::GFx::ImageResource * GetImageResource();
public:
	virtual void AddRef();
	virtual void Release();
	ImageDelegate(Scaleform::GFx::ImageResource::ImageDelegate &);
	ImageDelegate(const Scaleform::GFx::ImageResource::ImageDelegate &);
	ImageDelegate();
	virtual ~ImageDelegate();
	Scaleform::GFx::ImageResource::ImageDelegate & operator=(Scaleform::GFx::ImageResource::ImageDelegate &);
	Scaleform::GFx::ImageResource::ImageDelegate & operator=(const Scaleform::GFx::ImageResource::ImageDelegate &);
};
void Scaleform::GFx::ImageResource::ImageDelegate::AddRef(); // 0x1402DEFF0
void Scaleform::GFx::ImageResource::ImageDelegate::Release(); // 0x1402E82F0
Scaleform::GFx::ImageResource::ImageResource(Scaleform::Render::ImageBase * pimageBase, Scaleform::GFx::Resource::ResourceUse use); // 0x140573E60
Scaleform::GFx::ImageResource::ImageResource(Scaleform::Render::ImageSource * pimageSrc, Scaleform::GFx::Resource::ResourceUse use); // 0x14030B780
Scaleform::GFx::ImageResource::ImageResource(Scaleform::Render::Image * pimage, Scaleform::GFx::Resource::ResourceUse use); // 0x1402DC9A0
Scaleform::GFx::ImageResource::ImageResource(Scaleform::Render::Image * pimage, const Scaleform::GFx::ResourceKey & key, Scaleform::GFx::Resource::ResourceUse use); // 0x140345410
Scaleform::GFx::ImageResource::~ImageResource(); // 0x1402DD850
void Scaleform::GFx::ImageResource::SetImageSource(Scaleform::Render::ImageSource * pimageSrc); // 0x14057A660
void Scaleform::GFx::ImageResource::SetImage(Scaleform::Render::Image * pimage); // 0x14057A600
Scaleform::GFx::ResourceId Scaleform::GFx::ImageResource::GetBaseImageId(); // 0x1402E20C0
Scaleform::GFx::ResourceKey Scaleform::GFx::ImageResource::GetKey(); // 0x1402E2C50
Scaleform::GFx::Resource::ResourceUse Scaleform::GFx::ImageResource::GetImageUse(); // 0x140270B70
unsigned long Scaleform::GFx::ImageResource::GetResourceTypeCode(); // 0x1402E2F00
struct Scaleform::GFx::SubImageResourceInfo :
	Scaleform::RefCountBaseNTS<Scaleform::GFx::SubImageResourceInfo,2>
{
	Scaleform::GFx::ResourceId ImageId; // 0x10
	Scaleform::Ptr<Scaleform::GFx::ImageResource> Image; // 0x18
	Scaleform::Render::Rect<unsigned long> Rect; // 0x20
	unsigned long long GetHashCode();
	SubImageResourceInfo(Scaleform::GFx::SubImageResourceInfo &);
	SubImageResourceInfo(const Scaleform::GFx::SubImageResourceInfo &);
	SubImageResourceInfo();
	virtual ~SubImageResourceInfo();
	Scaleform::GFx::SubImageResourceInfo & operator=(Scaleform::GFx::SubImageResourceInfo &);
	Scaleform::GFx::SubImageResourceInfo & operator=(const Scaleform::GFx::SubImageResourceInfo &);
};
class Scaleform::RefCountBaseNTS<Scaleform::GFx::SubImageResourceInfo,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBaseNTS<Scaleform::GFx::SubImageResourceInfo,2>(Scaleform::RefCountBaseNTS<Scaleform::GFx::SubImageResourceInfo,2> &);
	RefCountBaseNTS<Scaleform::GFx::SubImageResourceInfo,2>(const Scaleform::RefCountBaseNTS<Scaleform::GFx::SubImageResourceInfo,2> &);
	RefCountBaseNTS<Scaleform::GFx::SubImageResourceInfo,2>();
	virtual ~RefCountBaseNTS<Scaleform::GFx::SubImageResourceInfo,2>();
	Scaleform::RefCountBaseNTS<Scaleform::GFx::SubImageResourceInfo,2> & operator=(Scaleform::RefCountBaseNTS<Scaleform::GFx::SubImageResourceInfo,2> &);
	Scaleform::RefCountBaseNTS<Scaleform::GFx::SubImageResourceInfo,2> & operator=(const Scaleform::RefCountBaseNTS<Scaleform::GFx::SubImageResourceInfo,2> &);
};
class Scaleform::Ptr<Scaleform::GFx::ImageResource>
{
protected:
	Scaleform::GFx::ImageResource * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ImageResource>(const Scaleform::Ptr<Scaleform::GFx::ImageResource> &);
	Ptr<Scaleform::GFx::ImageResource>(Scaleform::GFx::ImageResource *);
	Ptr<Scaleform::GFx::ImageResource>(Scaleform::Ptr<Scaleform::GFx::ImageResource> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ImageResource>(Scaleform::Pickable<Scaleform::GFx::ImageResource>);
	Ptr<Scaleform::GFx::ImageResource>(Scaleform::GFx::ImageResource &);
	Ptr<Scaleform::GFx::ImageResource>();
	~Ptr<Scaleform::GFx::ImageResource>();
	bool operator==(Scaleform::GFx::ImageResource *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ImageResource> &);
	bool operator!=(Scaleform::GFx::ImageResource *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ImageResource> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ImageResource> &);
	Scaleform::Ptr<Scaleform::GFx::ImageResource> & operator=(Scaleform::Pickable<Scaleform::GFx::ImageResource>);
	const Scaleform::Ptr<Scaleform::GFx::ImageResource> & operator=(Scaleform::GFx::ImageResource &);
	const Scaleform::Ptr<Scaleform::GFx::ImageResource> & operator=(Scaleform::GFx::ImageResource *);
	const Scaleform::Ptr<Scaleform::GFx::ImageResource> & operator=(const Scaleform::Ptr<Scaleform::GFx::ImageResource> &);
	Scaleform::Ptr<Scaleform::GFx::ImageResource> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ImageResource>);
	Scaleform::Ptr<Scaleform::GFx::ImageResource> & SetPtr(Scaleform::GFx::ImageResource &);
	Scaleform::Ptr<Scaleform::GFx::ImageResource> & SetPtr(Scaleform::GFx::ImageResource *);
	Scaleform::Ptr<Scaleform::GFx::ImageResource> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ImageResource> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ImageResource * & GetRawRef();
	Scaleform::GFx::ImageResource * GetPtr();
	Scaleform::GFx::ImageResource & operator*();
	Scaleform::GFx::ImageResource * operator->();
	Scaleform::GFx::ImageResource * operator class Scaleform::GFx::ImageResource *();
	Scaleform::Ptr<Scaleform::GFx::ImageResource> & Pick(Scaleform::GFx::ImageResource *);
	Scaleform::Ptr<Scaleform::GFx::ImageResource> & Pick(Scaleform::Pickable<Scaleform::GFx::ImageResource>);
	Scaleform::Ptr<Scaleform::GFx::ImageResource> & Pick(Scaleform::Ptr<Scaleform::GFx::ImageResource> &);
};
class Scaleform::GFx::SubImageResource :
	Scaleform::GFx::ImageResource
{
private:
	Scaleform::Render::Rect<unsigned long> Rect; // 0x68
	Scaleform::GFx::ResourceId BaseImageId; // 0x78
public:
	SubImageResource(Scaleform::GFx::SubImageResource &);
	SubImageResource(const Scaleform::GFx::SubImageResource &);
	SubImageResource(Scaleform::GFx::ImageResource *, Scaleform::GFx::ResourceId, const Scaleform::Render::Rect<unsigned long> &, Scaleform::MemoryHeap *);
	virtual Scaleform::GFx::ResourceId GetBaseImageId();
	virtual ~SubImageResource();
	Scaleform::GFx::SubImageResource & operator=(Scaleform::GFx::SubImageResource &);
	Scaleform::GFx::SubImageResource & operator=(const Scaleform::GFx::SubImageResource &);
};
Scaleform::GFx::SubImageResource::SubImageResource(Scaleform::GFx::ImageResource * pbase, Scaleform::GFx::ResourceId baseid, const Scaleform::Render::Rect<unsigned long> & rect, Scaleform::MemoryHeap * pheap); // 0x140345B80
Scaleform::GFx::ResourceId Scaleform::GFx::SubImageResource::GetBaseImageId(); // 0x1403477D0