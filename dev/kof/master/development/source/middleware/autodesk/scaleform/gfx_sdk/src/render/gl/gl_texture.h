#pragma once

struct Scaleform::Render::GL::TextureFormat :
	Scaleform::Render::TextureFormat
{
	struct Mapping;
	const Scaleform::Render::GL::TextureFormat::Mapping * pMapping; // 0x8
	TextureFormat(Scaleform::Render::GL::TextureFormat &);
	TextureFormat(const Scaleform::Render::GL::TextureFormat &);
	TextureFormat(Scaleform::Render::GL::TextureFormat::Mapping *);
	virtual Scaleform::Render::ImageFormat GetImageFormat();
	virtual void(*)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *) GetScanlineCopyFn();
	virtual void(*)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *) GetScanlineUncopyFn();
	virtual ~TextureFormat();
	Scaleform::Render::GL::TextureFormat & operator=(Scaleform::Render::GL::TextureFormat &);
	Scaleform::Render::GL::TextureFormat & operator=(const Scaleform::Render::GL::TextureFormat &);
	void __dflt_ctor_closure();
};
struct Scaleform::Render::GL::TextureFormat::Mapping
{
	Scaleform::Render::ImageFormat Format; // 0x0
	Scaleform::Render::ImageFormat ConvFormat; // 0x4
	unsigned long GLColors; // 0x8
	unsigned long GLFormat; // 0xC
	unsigned long GLData; // 0x10
	unsigned char BytesPerPixel; // 0x14
	Scaleform::Render::GL::GLExtensionType Extension; // 0x18
	void(*CopyFunc)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *); // 0x20
	void(*UncopyFunc)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *); // 0x28
};
Scaleform::Render::ImageFormat Scaleform::Render::GL::TextureFormat::GetImageFormat(); // 0x1405F5F40
void(*)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *) Scaleform::Render::GL::TextureFormat::GetScanlineCopyFn(); // 0x1405F5F60
void(*)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *) Scaleform::Render::GL::TextureFormat::GetScanlineUncopyFn(); // 0x1405F5F70
class Scaleform::Render::GL::Texture :
	Scaleform::Render::Texture
{
public:
	Scaleform::Ptr<Scaleform::Render::RawImage> pBackingImage; // 0x60
	struct HWTextureDesc;
	Scaleform::Render::GL::Texture::HWTextureDesc * pTextures; // 0x68
	Scaleform::Render::GL::Texture::HWTextureDesc Texture0; // 0x70
	long LastMinFilter[4]; // 0x80
	long LastAddress[4]; // 0x90
	Texture(const Scaleform::Render::GL::Texture &);
	Texture(Scaleform::Render::TextureManagerLocks *, Scaleform::Render::GL::HALGLTexture *, const Scaleform::Render::Size<unsigned long> &, Scaleform::Render::ImageBase *);
	Texture(Scaleform::Render::TextureManagerLocks *, unsigned long, bool, const Scaleform::Render::Size<unsigned long> &, Scaleform::Render::ImageBase *);
	Texture(Scaleform::Render::TextureManagerLocks *, const Scaleform::Render::GL::TextureFormat *, unsigned long, const Scaleform::Render::Size<unsigned long> &, unsigned long, Scaleform::Render::ImageBase *);
	virtual ~Texture();
	Scaleform::Render::GL::TextureManager * GetManager();
	Scaleform::Render::GL::HAL * GetHAL();
	virtual bool IsValid();
	bool Initialize(Scaleform::Render::GL::HALGLTexture *);
	virtual bool Initialize();
	virtual void DisposeTextureData();
	virtual void ReleaseHWTextures(bool);
	virtual void ApplyTexture(unsigned long, const Scaleform::Render::ImageFillMode &);
	virtual Scaleform::Render::Image * GetImage();
	virtual Scaleform::Render::ImageFormat GetFormat();
	virtual Scaleform::Render::Size<unsigned long> GetTextureSize(unsigned long);
	const Scaleform::Render::GL::TextureFormat * GetTextureFormat();
	const Scaleform::Render::GL::TextureFormat::Mapping * GetTextureFormatMapping();
	virtual bool UpdateRenderTargetData(Scaleform::Render::RenderTargetData *, Scaleform::Render::HAL *);
	virtual bool UpdateStagingData(Scaleform::Render::RenderTargetData *);
	virtual bool Update(const Scaleform::Render::Texture::UpdateDesc *, unsigned long, unsigned long);
	bool Upload(unsigned long, unsigned long, const Scaleform::Render::ImagePlane &);
	void MakeMappable();
protected:
	virtual void computeUpdateConvertRescaleFlags(bool, bool, Scaleform::Render::ImageFormat, Scaleform::Render::ResizeImageType &, Scaleform::Render::ImageFormat &, bool &);
	virtual void uploadImage(Scaleform::Render::ImageData *);
public:
	Scaleform::Render::GL::Texture & operator=(const Scaleform::Render::GL::Texture &);
};
struct Scaleform::Render::GL::Texture::HWTextureDesc
{
	Scaleform::Render::Size<unsigned long> Size; // 0x0
	Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture> TexId; // 0x8
	HWTextureDesc(Scaleform::Render::GL::Texture::HWTextureDesc &);
	HWTextureDesc(const Scaleform::Render::GL::Texture::HWTextureDesc &);
	HWTextureDesc();
	~HWTextureDesc();
	Scaleform::Render::GL::Texture::HWTextureDesc & operator=(Scaleform::Render::GL::Texture::HWTextureDesc &);
	Scaleform::Render::GL::Texture::HWTextureDesc & operator=(const Scaleform::Render::GL::Texture::HWTextureDesc &);
};
bool Scaleform::Render::GL::Texture::IsValid(); // 0x1405F6C20
Scaleform::Render::Image * Scaleform::Render::GL::Texture::GetImage(); // 0x1406B4B30
Scaleform::Render::ImageFormat Scaleform::Render::GL::Texture::GetFormat(); // 0x140147FC0
Scaleform::Render::Size<unsigned long> Scaleform::Render::GL::Texture::GetTextureSize(unsigned long plane); // 0x1405F6030
const Scaleform::Render::GL::TextureFormat::Mapping * Scaleform::Render::GL::Texture::GetTextureFormatMapping(); // 0x1405F5F90
class Scaleform::Render::GL::DepthStencilSurface :
	Scaleform::Render::DepthStencilSurface
{
public:
	DepthStencilSurface(const Scaleform::Render::GL::DepthStencilSurface &);
	DepthStencilSurface(Scaleform::Render::TextureManagerLocks *, const Scaleform::Render::Size<unsigned long> &);
	virtual ~DepthStencilSurface();
	virtual bool Initialize();
	Scaleform::Render::GL::HAL * GetHAL();
	Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer> RenderBufferID; // 0x48
	static bool SetNextGLFormatIndex();
	static void ResetGLFormatIndex();
	static bool CurrentFormatHasDepth();
	struct StencilFormatEntry;
	static long GLFormatIndex; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::GL::DepthStencilSurface::StencilFormatEntry GLStencilFormats[0]; // 0xFFFFFFFFFFFFFFFF
	Scaleform::Render::GL::DepthStencilSurface & operator=(const Scaleform::Render::GL::DepthStencilSurface &);
};
struct Scaleform::Render::GL::DepthStencilSurface::StencilFormatEntry
{
	unsigned long Format; // 0x0
	unsigned long SFGLExtension; // 0x4
	unsigned char GLMajorVersion; // 0x8
	unsigned char GLMinorVersion; // 0x9
};
class Scaleform::Render::GL::MappedTexture :
	Scaleform::Render::MappedTextureBase
{
public:
	MappedTexture(Scaleform::Render::GL::MappedTexture &);
	MappedTexture(const Scaleform::Render::GL::MappedTexture &);
	MappedTexture();
	virtual bool Map(Scaleform::Render::Texture *, unsigned long, unsigned long);
	virtual void Unmap(bool);
	virtual ~MappedTexture();
	Scaleform::Render::GL::MappedTexture & operator=(Scaleform::Render::GL::MappedTexture &);
	Scaleform::Render::GL::MappedTexture & operator=(const Scaleform::Render::GL::MappedTexture &);
};
class Scaleform::Render::GL::TextureManager :
	Scaleform::Render::TextureManager
{
public:
	TextureManager(const Scaleform::Render::GL::TextureManager &);
	TextureManager(unsigned long, Scaleform::Render::ThreadCommandQueue *, Scaleform::Render::TextureCache *);
	virtual ~TextureManager();
	void Initialize(Scaleform::Render::GL::HAL *);
	void NotifyLostContext();
	void ApplyTexture(unsigned long, Scaleform::Render::GL::HALGLTexture *);
	void DestroyFBO(Scaleform::Render::GL::HALGLFramebuffer *);
	virtual unsigned long GetTextureFormatSupport();
	Scaleform::Render::Texture * CreateTexture(Scaleform::Render::GL::HALGLTexture *, Scaleform::Render::Size<unsigned long>, Scaleform::Render::ImageBase *);
	Scaleform::Render::Texture * CreateTexture(unsigned long, bool, Scaleform::Render::Size<unsigned long>, Scaleform::Render::ImageBase *);
	virtual Scaleform::Render::Texture * CreateTexture(Scaleform::Render::ImageFormat, unsigned long, const Scaleform::Render::Size<unsigned long> &, unsigned long, Scaleform::Render::ImageBase *, Scaleform::Render::MemoryManager *);
	Scaleform::Render::DepthStencilSurface * CreateDepthStencilSurface(Scaleform::Render::GL::HALGLRenderbuffer *);
	virtual Scaleform::Render::DepthStencilSurface * CreateDepthStencilSurface(const Scaleform::Render::Size<unsigned long> &, Scaleform::Render::MemoryManager *);
	virtual bool IsDrawableImageFormat(Scaleform::Render::ImageFormat);
	bool IsMultiThreaded();
	virtual unsigned long GetTextureUseCaps(Scaleform::Render::ImageFormat);
	virtual bool IsNonPow2Supported(Scaleform::Render::ImageFormat, unsigned short);
	virtual void BeginFrame();
protected:
	static const long MaximumStages; // 0xFFFFFFFFFFFFFFFF
	class PendingTextureDestroyEntry;
	class TextureResourceDestroyListType;
	enum TextureCaps
	{
		TC_NonPower2Limited = 1,
		TC_NonPower2Full = 2,
		TC_NonPower2RT = 4,
		TC_UseBgra = 8,
		TC_UseAppleMaxLevel = 16,
	};
	Scaleform::Render::GL::MappedTexture MappedTexture0; // 0xC0
	Scaleform::Render::GL::HAL * pHal; // 0x198
	unsigned long Caps; // 0x1A0
	Scaleform::Render::FenceResourceDestroyList<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry> TextureResourceDestroyList; // 0x1A8
	long CurrentTextures[4]; // 0x1C0
	long MaximumTextureSize; // 0x1D0
	Scaleform::Render::GL::HAL * GetHAL();
	void initTextureFormats();
	static unsigned long getBaseTextureFormatFromInternal(unsigned long);
	virtual Scaleform::Render::MappedTextureBase & getDefaultMappedTexture();
	virtual Scaleform::Render::MappedTextureBase * createMappedTexture();
	virtual void processInitTextures();
	virtual void processTextureKillList();
	void addTextureResourceDestroyRequest(const Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry &);
public:
	Scaleform::Render::GL::TextureManager & operator=(const Scaleform::Render::GL::TextureManager &);
};
bool Scaleform::Render::GL::TextureManager::IsDrawableImageFormat(Scaleform::Render::ImageFormat format); // 0x1405F6BD0
class Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry :
	Scaleform::Render::FenceResource
{
public:
	PendingTextureDestroyEntry(Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry &);
	PendingTextureDestroyEntry(const Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry &);
	PendingTextureDestroyEntry(Scaleform::Render::GL::HALGLFramebuffer *);
	PendingTextureDestroyEntry(Scaleform::Render::GL::DepthStencilSurface *);
	PendingTextureDestroyEntry(Scaleform::Render::GL::Texture *);
	PendingTextureDestroyEntry();
	void FreeResource();
protected:
	Scaleform::Render::GL::HAL * GetHAL();
	Scaleform::Ptr<Scaleform::Render::GL::HAL> pHAL; // 0x8
	unsigned long StageCount; // 0x10
	Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture> pTexture[4]; // 0x18
	Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer> pRenderBuffer[4]; // 0x38
	Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer> pFramebuffer[4]; // 0x58
public:
	~PendingTextureDestroyEntry();
	Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry & operator=(Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry &);
	Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry & operator=(const Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry &);
};
class Scaleform::Ptr<Scaleform::Render::GL::HAL>
{
protected:
	Scaleform::Render::GL::HAL * pObject; // 0x0
public:
	Ptr<Scaleform::Render::GL::HAL>(const Scaleform::Ptr<Scaleform::Render::GL::HAL> &);
	Ptr<Scaleform::Render::GL::HAL>(Scaleform::Render::GL::HAL *);
	Ptr<Scaleform::Render::GL::HAL>(Scaleform::Ptr<Scaleform::Render::GL::HAL> &, Scaleform::PickType);
	Ptr<Scaleform::Render::GL::HAL>(Scaleform::Pickable<Scaleform::Render::GL::HAL>);
	Ptr<Scaleform::Render::GL::HAL>(Scaleform::Render::GL::HAL &);
	Ptr<Scaleform::Render::GL::HAL>();
	~Ptr<Scaleform::Render::GL::HAL>();
	bool operator==(Scaleform::Render::GL::HAL *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::GL::HAL> &);
	bool operator!=(Scaleform::Render::GL::HAL *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::GL::HAL> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::GL::HAL> &);
	Scaleform::Ptr<Scaleform::Render::GL::HAL> & operator=(Scaleform::Pickable<Scaleform::Render::GL::HAL>);
	const Scaleform::Ptr<Scaleform::Render::GL::HAL> & operator=(Scaleform::Render::GL::HAL &);
	const Scaleform::Ptr<Scaleform::Render::GL::HAL> & operator=(Scaleform::Render::GL::HAL *);
	const Scaleform::Ptr<Scaleform::Render::GL::HAL> & operator=(const Scaleform::Ptr<Scaleform::Render::GL::HAL> &);
	Scaleform::Ptr<Scaleform::Render::GL::HAL> & SetPtr(Scaleform::Pickable<Scaleform::Render::GL::HAL>);
	Scaleform::Ptr<Scaleform::Render::GL::HAL> & SetPtr(Scaleform::Render::GL::HAL &);
	Scaleform::Ptr<Scaleform::Render::GL::HAL> & SetPtr(Scaleform::Render::GL::HAL *);
	Scaleform::Ptr<Scaleform::Render::GL::HAL> & SetPtr(const Scaleform::Ptr<Scaleform::Render::GL::HAL> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::GL::HAL * & GetRawRef();
	Scaleform::Render::GL::HAL * GetPtr();
	Scaleform::Render::GL::HAL & operator*();
	Scaleform::Render::GL::HAL * operator->();
	Scaleform::Render::GL::HAL * operator class Scaleform::Render::GL::HAL *();
	Scaleform::Ptr<Scaleform::Render::GL::HAL> & Pick(Scaleform::Render::GL::HAL *);
	Scaleform::Ptr<Scaleform::Render::GL::HAL> & Pick(Scaleform::Pickable<Scaleform::Render::GL::HAL>);
	Scaleform::Ptr<Scaleform::Render::GL::HAL> & Pick(Scaleform::Ptr<Scaleform::Render::GL::HAL> &);
};
class Scaleform::Render::FenceResourceDestroyList<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry>
{
public:
	~FenceResourceDestroyList<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry>();
	void PushBack(const Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry &);
	bool IsEmpty();
	void Clear();
	unsigned long long ProcessDestructionList(bool);
	struct KillListArrayPolicy;
	class ResourceArrayType;
protected:
	Scaleform::ArrayLH<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,67,Scaleform::ArrayConstPolicy<8,8,0> > PendingFreeList; // 0x0
public:
	FenceResourceDestroyList<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry>(const Scaleform::Render::FenceResourceDestroyList<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry> &);
	FenceResourceDestroyList<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry>();
	Scaleform::Render::FenceResourceDestroyList<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry> & operator=(const Scaleform::Render::FenceResourceDestroyList<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry> &);
};
Scaleform::Render::MappedTextureBase & Scaleform::Render::GL::TextureManager::getDefaultMappedTexture(); // 0x1405F8420
Scaleform::Render::MappedTextureBase * Scaleform::Render::GL::TextureManager::createMappedTexture(); // 0x1405F8360