#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"

Scaleform::Render::Size<unsigned long> Scaleform::Render::ImageSize_RoundUpPow2(Scaleform::Render::Size<unsigned long> sz); // 0x140326370
unsigned long Scaleform::Render::ImageSize_MipLevelCount(Scaleform::Render::Size<unsigned long> sz); // 0x140326330
void Scaleform::Render::ImagePlane::GetMipLevel(Scaleform::Render::ImageFormat format, unsigned long level, Scaleform::Render::ImagePlane * p, unsigned long plane); // 0x140325960
Scaleform::Render::Palette * Scaleform::Render::Palette::Create(unsigned long colorCount, bool hasAlpha, Scaleform::MemoryHeap * pheap); // 0x1403246D0
bool Scaleform::Render::ImageData::allocPlanes(Scaleform::Render::ImageFormat format, unsigned long mipLevelCount, bool separateMipmaps); // 0x1403278E0
void Scaleform::Render::ImageData::freePlanes(); // 0x140327A60
Scaleform::Render::ImageData & Scaleform::Render::ImageData::operator=(const Scaleform::Render::ImageData & rhs); // 0x140323FF0
void Scaleform::Render::ImageData::Clear(); // 0x140324610
bool Scaleform::Render::ImageData::Initialize(const Scaleform::Render::ImageData & source, unsigned long levelIndex, unsigned long levelCount); // 0x140326440
unsigned long Scaleform::Render::ImageData::GetPlaneCount(); // 0x140325F40
void Scaleform::Render::ImageData::GetPlane(unsigned long index, Scaleform::Render::ImagePlane * pplane); // 0x140325ED0
void Scaleform::Render::ImageData::SetPixelInScanline(unsigned char * pline, unsigned long x, unsigned long color); // 0x140326D60
Scaleform::Render::Color Scaleform::Render::ImageData::GetPixelInScanline(const unsigned char * pline, unsigned long x); // 0x140325D70
unsigned long Scaleform::Render::ImageData::GetFormatPlaneCount(Scaleform::Render::ImageFormat fmt); // 0x140325660
unsigned long Scaleform::Render::ImageData::GetFormatBitsPerPixel(Scaleform::Render::ImageFormat fmt, unsigned long plane); // 0x1403253B0
unsigned long long Scaleform::Render::ImageData::GetFormatPitch(Scaleform::Render::ImageFormat fmt, unsigned long width, unsigned long plane); // 0x1403254F0
unsigned long long Scaleform::Render::ImageData::GetFormatScanlineCount(Scaleform::Render::ImageFormat fmt, unsigned long height, unsigned long plane); // 0x1403256E0
Scaleform::Render::Size<unsigned long> Scaleform::Render::ImageData::GetFormatPlaneSize(Scaleform::Render::ImageFormat fmt, const Scaleform::Render::Size<unsigned long> & sz, unsigned long plane); // 0x1403256A0
unsigned long long Scaleform::Render::ImageData::GetMipLevelSize(Scaleform::Render::ImageFormat format, const Scaleform::Render::Size<unsigned long> & sz, unsigned long plane); // 0x140325BA0
unsigned long long Scaleform::Render::ImageData::GetMipLevelsSize(Scaleform::Render::ImageFormat format, const Scaleform::Render::Size<unsigned long> & sz, unsigned long levels, unsigned long plane); // 0x140325C40
void Scaleform::Render::ImageSwizzler::CacheScanline(Scaleform::Render::ImageSwizzlerContext & ctx, unsigned long y); // 0x1403245C0
void Scaleform::Render::ImageSwizzler::SetPixelInScanline(Scaleform::Render::ImageSwizzlerContext & ctx, unsigned long x, Scaleform::Render::Color c); // 0x140326E80
void Scaleform::Render::ImageSwizzler::SetPixelInScanline(Scaleform::Render::ImageSwizzlerContext & ctx, unsigned long x, unsigned long c); // 0x140326E70
Scaleform::Render::Color Scaleform::Render::ImageSwizzler::GetPixelInScanline(Scaleform::Render::ImageSwizzlerContext & ctx, unsigned long x); // 0x140325EB0
void Scaleform::Render::MappedTextureBase::Unmap(bool __formal); // 0x140326EE0
void Scaleform::Render::ImageBase::CopyScanlineDefault(unsigned char * pd, const unsigned char * ps, unsigned long long size, Scaleform::Render::Palette * __formal, void * __formal); // 0x1403246C0
Scaleform::Render::Image::~Image(); // 0x140323CD0
void Scaleform::Render::TextureImage::TextureLost(Scaleform::Render::Image::TextureLossReason __formal); // 0x140326EA0
void Scaleform::Render::Image::initTexture_NoAddRef(Scaleform::Render::Texture * ptexture); // 0x1404A8C00
Scaleform::Render::Image * Scaleform::Render::Image::CreateSubImage(const Scaleform::Render::Rect<unsigned long> & rect, Scaleform::MemoryHeap * pheap); // 0x140324BC0
void Scaleform::Render::Image::SetMatrix(const Scaleform::Render::Matrix2x4<float> & mat, Scaleform::MemoryHeap * heap); // 0x140326C20
void Scaleform::Render::Image::SetMatrixInverse(const Scaleform::Render::Matrix2x4<float> & mat, Scaleform::MemoryHeap * heap); // 0x140326CD0
void Scaleform::Render::Image::GetMatrix(Scaleform::Render::Matrix2x4<float> * mat); // 0x1403257A0
bool Scaleform::Render::Image::GetMatrixInverse(Scaleform::Render::Matrix2x4<float> * mat); // 0x140325880
void Scaleform::Render::Image::GetUVGenMatrix(Scaleform::Render::Matrix2x4<float> * mat, Scaleform::Render::TextureManager * manager); // 0x140326080
void Scaleform::Render::Image::GetUVNormMatrix(Scaleform::Render::Matrix2x4<float> * mat, Scaleform::Render::TextureManager * manager); // 0x1403261E0
bool Scaleform::Render::ImageSource::IsDecodeOnlyImageCompatible(const Scaleform::Render::ImageCreateArgs & args); // 0x1403265B0
Scaleform::Render::Image * Scaleform::Render::ImageSource::CreateCompatibleImage(const Scaleform::Render::ImageCreateArgs & args); // 0x140324960
class Scaleform::Ptr<Scaleform::Render::Texture>
{
protected:
	Scaleform::Render::Texture * pObject; // 0x0
public:
	Ptr<Scaleform::Render::Texture>(const Scaleform::Ptr<Scaleform::Render::Texture> &);
	Ptr<Scaleform::Render::Texture>(Scaleform::Render::Texture *);
	Ptr<Scaleform::Render::Texture>(Scaleform::Ptr<Scaleform::Render::Texture> &, Scaleform::PickType);
	Ptr<Scaleform::Render::Texture>(Scaleform::Pickable<Scaleform::Render::Texture>);
	Ptr<Scaleform::Render::Texture>(Scaleform::Render::Texture &);
	Ptr<Scaleform::Render::Texture>();
	~Ptr<Scaleform::Render::Texture>();
	bool operator==(Scaleform::Render::Texture *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::Texture> &);
	bool operator!=(Scaleform::Render::Texture *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::Texture> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::Texture> &);
	Scaleform::Ptr<Scaleform::Render::Texture> & operator=(Scaleform::Pickable<Scaleform::Render::Texture>);
	const Scaleform::Ptr<Scaleform::Render::Texture> & operator=(Scaleform::Render::Texture &);
	const Scaleform::Ptr<Scaleform::Render::Texture> & operator=(Scaleform::Render::Texture *);
	const Scaleform::Ptr<Scaleform::Render::Texture> & operator=(const Scaleform::Ptr<Scaleform::Render::Texture> &);
	Scaleform::Ptr<Scaleform::Render::Texture> & SetPtr(Scaleform::Pickable<Scaleform::Render::Texture>);
	Scaleform::Ptr<Scaleform::Render::Texture> & SetPtr(Scaleform::Render::Texture &);
	Scaleform::Ptr<Scaleform::Render::Texture> & SetPtr(Scaleform::Render::Texture *);
	Scaleform::Ptr<Scaleform::Render::Texture> & SetPtr(const Scaleform::Ptr<Scaleform::Render::Texture> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::Texture * & GetRawRef();
	Scaleform::Render::Texture * GetPtr();
	Scaleform::Render::Texture & operator*();
	Scaleform::Render::Texture * operator->();
	Scaleform::Render::Texture * operator class Scaleform::Render::Texture *();
	Scaleform::Ptr<Scaleform::Render::Texture> & Pick(Scaleform::Render::Texture *);
	Scaleform::Ptr<Scaleform::Render::Texture> & Pick(Scaleform::Pickable<Scaleform::Render::Texture>);
	Scaleform::Ptr<Scaleform::Render::Texture> & Pick(Scaleform::Ptr<Scaleform::Render::Texture> &);
};
Scaleform::Render::RawImage::~RawImage(); // 0x140323D40
Scaleform::Render::SubImage::~SubImage(); // 0x140323E10
void Scaleform::Render::RawImage::freeData(); // 0x1403279F0
Scaleform::Render::RawImage * Scaleform::Render::RawImage::Create(Scaleform::Render::ImageFormat format, unsigned long mipLevelCount, const Scaleform::Render::Size<unsigned long> & size, unsigned long use, Scaleform::MemoryHeap * pheap, Scaleform::Render::ImageUpdateSync * pupdateSync); // 0x140324750
bool Scaleform::Render::RawImage::GetImageData(Scaleform::Render::ImageData * pdata); // 0x140325710
bool Scaleform::Render::RawImage::Map(Scaleform::Render::ImageData * pdata, unsigned long levelIndex, unsigned long levelCount); // 0x140326750
bool Scaleform::Render::RawImage::Unmap(); // 0x140326F00
bool Scaleform::Render::RawImage::Decode(Scaleform::Render::ImageData * pdest, void(*copyScanline)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void * arg); // 0x140324C10
Scaleform::Render::Texture * Scaleform::Render::RawImage::GetTexture(Scaleform::Render::TextureManager * pmanager); // 0x140325FD0
bool Scaleform::Render::TextureImage::Map(Scaleform::Render::ImageData * pdata, unsigned long mipLevel, unsigned long levelCount); // 0x140326860
bool Scaleform::Render::TextureImage::Unmap(); // 0x1402EE3F0
bool Scaleform::Render::SubImage::GetMatrixInverse(Scaleform::Render::Matrix2x4<float> * mat); // 0x1403258D0
void Scaleform::Render::ImageUpdateQueue::ProcessUpdates(Scaleform::Render::TextureManager * pmanager); // 0x1403269C0
void Scaleform::Render::ImageUpdateQueue::Add(Scaleform::Render::Image * pimage); // 0x140324420
void Scaleform::Render::ImageUpdateQueue::Add(Scaleform::Render::ImageUpdate * pupdate); // 0x1403244B0
Scaleform::Render::TextureManager::TextureManager(unsigned long renderThreadId, Scaleform::Render::ThreadCommandQueue * commandQueue, Scaleform::Render::TextureCache * textureCache); // 0x140323B60
Scaleform::Render::TextureManager::~TextureManager(); // 0x140323E90
void Scaleform::Render::TextureManager::UpdateImage(Scaleform::Render::Image * pimage); // 0x140327840
void Scaleform::Render::TextureManager::UpdateImage(Scaleform::Render::ImageUpdate * pupdate); // 0x140327890
void Scaleform::Render::TextureManager::ProcessQueues(); // 0x140326960
void Scaleform::Render::TextureManager::Reset(); // 0x140326BA0
void Scaleform::Render::TextureManager::BeginFrame(); // 0x140324590
void Scaleform::Render::TextureManager::EndFrame(); // 0x1403252B0
const Scaleform::Render::TextureFormat * Scaleform::Render::TextureManager::precreateTexture(Scaleform::Render::ImageFormat format, unsigned long use, Scaleform::Render::ImageBase * pimage); // 0x140327EA0
Scaleform::Render::Texture * Scaleform::Render::TextureManager::postCreateTexture(Scaleform::Render::Texture * ptexture, unsigned long use); // 0x140327D10
Scaleform::Render::DepthStencilSurface * Scaleform::Render::TextureManager::postCreateDepthStencilSurface(Scaleform::Render::DepthStencilSurface * pdss); // 0x140327C00
const Scaleform::Render::TextureFormat * Scaleform::Render::TextureManager::getTextureFormat(Scaleform::Render::ImageFormat format); // 0x140327AB0
Scaleform::Render::MappedTextureBase * Scaleform::Render::TextureManager::mapTexture(Scaleform::Render::Texture * ptexture, unsigned long mipLevel, unsigned long levelCount); // 0x140327B50
void Scaleform::Render::TextureManager::unmapTexture(Scaleform::Render::Texture * ptexture, bool applyUpdate); // 0x140327F60
Scaleform::Render::ImageSwizzler & Scaleform::Render::TextureManager::GetImageSwizzler(); // 0x140325730
bool Scaleform::Render::Texture::Initialize(); // 0x140326570
void Scaleform::Render::Texture::GetUVGenMatrix(Scaleform::Render::Matrix2x4<float> * mat); // 0x140326190
void Scaleform::Render::Texture::LoseManager(); // 0x140326630
void Scaleform::Render::Texture::LoseTextureData(); // 0x1403266D0
void Scaleform::Render::Texture::DisposeTextureData(); // 0x140325290
void Scaleform::Render::Texture::ReleaseHWTextures(bool __formal); // 0x140326AC0
void Scaleform::Render::Texture::ApplyTexture(unsigned long stage, const Scaleform::Render::ImageFillMode & fillMode); // 0x140324530
bool Scaleform::Render::Texture::Map(Scaleform::Render::ImageData * pdata, unsigned long mipLevel, unsigned long levelCount); // 0x140326780
bool Scaleform::Render::Texture::Unmap(); // 0x140326F10
bool Scaleform::Render::Texture::Update(); // 0x140326F50
class Scaleform::Ptr<Scaleform::Render::RawImage>
{
protected:
	Scaleform::Render::RawImage * pObject; // 0x0
public:
	Ptr<Scaleform::Render::RawImage>(const Scaleform::Ptr<Scaleform::Render::RawImage> &);
	Ptr<Scaleform::Render::RawImage>(Scaleform::Render::RawImage *);
	Ptr<Scaleform::Render::RawImage>(Scaleform::Ptr<Scaleform::Render::RawImage> &, Scaleform::PickType);
	Ptr<Scaleform::Render::RawImage>(Scaleform::Pickable<Scaleform::Render::RawImage>);
	Ptr<Scaleform::Render::RawImage>(Scaleform::Render::RawImage &);
	Ptr<Scaleform::Render::RawImage>();
	~Ptr<Scaleform::Render::RawImage>();
	bool operator==(Scaleform::Render::RawImage *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::RawImage> &);
	bool operator!=(Scaleform::Render::RawImage *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::RawImage> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::RawImage> &);
	Scaleform::Ptr<Scaleform::Render::RawImage> & operator=(Scaleform::Pickable<Scaleform::Render::RawImage>);
	const Scaleform::Ptr<Scaleform::Render::RawImage> & operator=(Scaleform::Render::RawImage &);
	const Scaleform::Ptr<Scaleform::Render::RawImage> & operator=(Scaleform::Render::RawImage *);
	const Scaleform::Ptr<Scaleform::Render::RawImage> & operator=(const Scaleform::Ptr<Scaleform::Render::RawImage> &);
	Scaleform::Ptr<Scaleform::Render::RawImage> & SetPtr(Scaleform::Pickable<Scaleform::Render::RawImage>);
	Scaleform::Ptr<Scaleform::Render::RawImage> & SetPtr(Scaleform::Render::RawImage &);
	Scaleform::Ptr<Scaleform::Render::RawImage> & SetPtr(Scaleform::Render::RawImage *);
	Scaleform::Ptr<Scaleform::Render::RawImage> & SetPtr(const Scaleform::Ptr<Scaleform::Render::RawImage> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::RawImage * & GetRawRef();
	Scaleform::Render::RawImage * GetPtr();
	Scaleform::Render::RawImage & operator*();
	Scaleform::Render::RawImage * operator->();
	Scaleform::Render::RawImage * operator class Scaleform::Render::RawImage *();
	Scaleform::Ptr<Scaleform::Render::RawImage> & Pick(Scaleform::Render::RawImage *);
	Scaleform::Ptr<Scaleform::Render::RawImage> & Pick(Scaleform::Pickable<Scaleform::Render::RawImage>);
	Scaleform::Ptr<Scaleform::Render::RawImage> & Pick(Scaleform::Ptr<Scaleform::Render::RawImage> &);
};
unsigned long long Scaleform::Render::Texture::GetBytes(long * memRegion); // 0x1403252D0void __fastcall Scaleform::Render::SubImage::SubImage(
        Scaleform::Render::SubImage *this,
        Scaleform::Render::Image *pimage,
        const Scaleform::Render::Rect<unsigned long> *rect)
{
  unsigned int y2; // er8
  unsigned int x2; // edx
  unsigned int y1; // ecx

  this->__vftable = (Scaleform::Render::SubImage_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::Render::SubImage_vtbl *)&Scaleform::Render::Image::`vftable';
  this->pTexture.Value = 0i64;
  this->pUpdateSync = 0i64;
  this->pInverseMatrix = 0i64;
  this->__vftable = (Scaleform::Render::SubImage_vtbl *)&Scaleform::Render::SubImage::`vftable';
  if ( pimage )
    pimage->AddRef(pimage);
  this->pImage.pObject = pimage;
  y2 = rect->y2;
  x2 = rect->x2;
  y1 = rect->y1;
  this->SubRect.x1 = rect->x1;
  this->SubRect.y1 = y1;
  this->SubRect.x2 = x2;
  this->SubRect.y2 = y2;
}

void __fastcall Scaleform::Render::TextureImage::TextureImage(
        Scaleform::Render::TextureImage *this,
        Scaleform::Render::ImageFormat format,
        const Scaleform::Render::Size<unsigned long> *size,
        unsigned int use,
        Scaleform::Render::Texture *ptexture,
        Scaleform::Render::ImageUpdateSync *psync)
{
  unsigned int Height; // ecx

  this->__vftable = (Scaleform::Render::TextureImage_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::Render::TextureImage_vtbl *)&Scaleform::Render::Image::`vftable';
  this->pTexture.Value = ptexture;
  this->pUpdateSync = psync;
  this->pInverseMatrix = 0i64;
  if ( ptexture )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)ptexture);
  this->Format = format;
  this->__vftable = (Scaleform::Render::TextureImage_vtbl *)&Scaleform::Render::TextureImage::`vftable';
  Height = size->Height;
  this->Size.Width = size->Width;
  this->Size.Height = Height;
  this->Use = use;
}

void __fastcall Scaleform::Render::TextureManager::TextureManager(
        Scaleform::Render::TextureManager *this,
        unsigned int renderThreadId,
        Scaleform::Render::ThreadCommandQueue *commandQueue,
        Scaleform::Render::TextureCache *textureCache)
{
  Scaleform::Render::TextureManagerLocks *v6; // rax
  Scaleform::Render::TextureManagerLocks *v7; // rdi
  Scaleform::RefCountVImpl *pObject; // rcx
  int v9; // [rsp+38h] [rbp+10h] BYREF

  this->Scaleform::RefCountBase<Scaleform::Render::TextureManager,72>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,72>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::TextureManager_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->Scaleform::RefCountBase<Scaleform::Render::TextureManager,72>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,72>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::TextureManager_vtbl *)&Scaleform::Render::TextureManager::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::TextureManager,72>'};
  this->Scaleform::Render::ImageUpdateSync::__vftable = (Scaleform::Render::ImageUpdateSync_vtbl *)&Scaleform::Render::TextureManager::`vftable'{for `Scaleform::Render::ImageUpdateSync'};
  this->RefCount = 1;
  this->ServiceCommandInstance.__vftable = (Scaleform::Render::TextureManager::ServiceCommand_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->ServiceCommandInstance.__vftable = (Scaleform::Render::TextureManager::ServiceCommand_vtbl *)&Scaleform::Render::TextureManager::ServiceCommand::`vftable';
  this->ServiceCommandInstance.RefCount = 1;
  this->ServiceCommandInstance.pManager = this;
  this->RenderThreadId = renderThreadId;
  this->pRTCommandQueue = commandQueue;
  if ( textureCache )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)textureCache);
  this->pTextureCache.pObject = textureCache;
  v9 = 72;
  this->pRenderSync.pObject = 0i64;
  this->pMemoryManager.pObject = 0i64;
  this->pLocks.pObject = 0i64;
  this->ImageUpdates.Queue.Data.Data = 0i64;
  this->ImageUpdates.Queue.Data.Size = 0i64;
  this->ImageUpdates.Queue.Data.Policy.Capacity = 0i64;
  this->TextureFormats.Data.Data = 0i64;
  this->TextureFormats.Data.Size = 0i64;
  this->TextureFormats.Data.Policy.Capacity = 0i64;
  this->Textures.Root.pPrev = (Scaleform::Render::Texture *)&this->TextureFormats.Data.Size;
  this->Textures.Root.pNext = (Scaleform::Render::Texture *)&this->TextureFormats.Data.Size;
  this->TextureInitQueue.Root.pPrev = (Scaleform::Render::Texture *)&this->Textures;
  this->TextureInitQueue.Root.pNext = (Scaleform::Render::Texture *)&this->Textures;
  this->DepthStencilInitQueue.Root.pPrev = (Scaleform::Render::DepthStencilSurface *)&this->TextureInitQueue;
  this->DepthStencilInitQueue.Root.pNext = (Scaleform::Render::DepthStencilSurface *)&this->TextureInitQueue;
  v6 = (Scaleform::Render::TextureManagerLocks *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                   Scaleform::Memory::pGlobalHeap,
                                                   this,
                                                   120i64,
                                                   &v9);
  v7 = v6;
  if ( v6 )
  {
    v6->__vftable = (Scaleform::Render::TextureManagerLocks_vtbl *)&Scaleform::RefCountImplCore::`vftable';
    v6->RefCount = 1;
    v6->pManager = this;
    v6->__vftable = (Scaleform::Render::TextureManagerLocks_vtbl *)&Scaleform::Render::TextureManagerLocks::`vftable';
    Scaleform::Lock::Lock(&v6->ImageLock, 0);
    Scaleform::Mutex::Mutex(&v7->TextureMutex, 1, 0);
    Scaleform::WaitCondition::WaitCondition(&v7->TextureInitWC);
  }
  else
  {
    v7 = 0i64;
  }
  pObject = (Scaleform::RefCountVImpl *)this->pLocks.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->pLocks.pObject = v7;
}

void __fastcall Scaleform::Render::Image::~Image(Scaleform::Render::Image *this)
{
  __int64 v2; // rax
  Scaleform::RefCountVImpl *v3; // rdi

  this->__vftable = (Scaleform::Render::Image_vtbl *)&Scaleform::Render::Image::`vftable';
  v2 = Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync((volatile __int64 *)&this->pTexture, 0i64);
  v3 = (Scaleform::RefCountVImpl *)v2;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 64i64))(v2);
    Scaleform::RefCountImpl::Release(v3);
  }
  if ( this->pInverseMatrix )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::Render::RawImage::~RawImage(Scaleform::Render::RawImage *this)
{
  unsigned __int8 Flags; // al
  Scaleform::Render::ImagePlane *pPlanes; // rdx
  Scaleform::Render::Palette *pObject; // rdi
  __int64 v5; // rax
  Scaleform::RefCountVImpl *v6; // rdi

  this->__vftable = (Scaleform::Render::RawImage_vtbl *)&Scaleform::Render::RawImage::`vftable';
  Scaleform::Render::RawImage::freeData(this);
  Flags = this->Data.Flags;
  if ( (Flags & 2) != 0 )
  {
    pPlanes = this->Data.pPlanes;
    this->Data.Flags = Flags & 0xFD;
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pPlanes);
  }
  this->Data.pPlanes = &this->Data.Plane0;
  pObject = this->Data.pPalette.pObject;
  if ( pObject
    && (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                       &this->Data.pPalette.pObject->RefCount.Value,
                       -1) == 1 )
  {
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
  }
  this->__vftable = (Scaleform::Render::RawImage_vtbl *)&Scaleform::Render::Image::`vftable';
  v5 = Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync((volatile __int64 *)&this->pTexture, 0i64);
  v6 = (Scaleform::RefCountVImpl *)v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 64i64))(v5);
    Scaleform::RefCountImpl::Release(v6);
  }
  if ( this->pInverseMatrix )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::Render::SubImage::~SubImage(Scaleform::Render::SubImage *this)
{
  Scaleform::Render::Image *pObject; // rcx
  __int64 v3; // rax
  Scaleform::RefCountVImpl *v4; // rdi

  pObject = this->pImage.pObject;
  if ( pObject )
    pObject->Release(pObject);
  this->__vftable = (Scaleform::Render::SubImage_vtbl *)&Scaleform::Render::Image::`vftable';
  v3 = Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync((volatile __int64 *)&this->pTexture, 0i64);
  v4 = (Scaleform::RefCountVImpl *)v3;
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 64i64))(v3);
    Scaleform::RefCountImpl::Release(v4);
  }
  if ( this->pInverseMatrix )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::Render::TextureManager::~TextureManager(Scaleform::Render::TextureManager *this)
{
  unsigned int v1; // edi
  unsigned int v2; // esi
  __int64 v4; // rcx
  Scaleform::Render::TextureFormat *v5; // rcx
  unsigned __int64 Capacity; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v10; // rcx
  Scaleform::RefCountVImpl *v11; // rcx
  Scaleform::RefCountVImpl *v12; // rcx

  v1 = 0;
  this->Scaleform::RefCountBase<Scaleform::Render::TextureManager,72>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,72>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::TextureManager_vtbl *)&Scaleform::Render::TextureManager::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::TextureManager,72>'};
  v2 = 0;
  this->Scaleform::Render::ImageUpdateSync::__vftable = (Scaleform::Render::ImageUpdateSync_vtbl *)&Scaleform::Render::TextureManager::`vftable'{for `Scaleform::Render::ImageUpdateSync'};
  if ( this->TextureFormats.Data.Size )
  {
    v4 = 0i64;
    do
    {
      v5 = this->TextureFormats.Data.Data[v4];
      if ( v5 )
        ((void (__fastcall *)(Scaleform::Render::TextureFormat *, __int64))v5->~TextureFormat)(v5, 1i64);
      v4 = ++v2;
    }
    while ( v2 < this->TextureFormats.Data.Size );
  }
  if ( this->TextureFormats.Data.Size )
  {
    Capacity = this->TextureFormats.Data.Policy.Capacity;
    if ( (Capacity & 0xFFFFFFFFFFFFFFFEui64) != 0 )
    {
      if ( Capacity )
      {
        if ( this->TextureFormats.Data.Data )
        {
          ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
          this->TextureFormats.Data.Data = 0i64;
        }
        this->TextureFormats.Data.Policy.Capacity = 0i64;
      }
    }
  }
  this->TextureFormats.Data.Size = 0i64;
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->TextureFormats.Data.Data);
  if ( this->ImageUpdates.Queue.Data.Size )
  {
    v7 = 0i64;
    do
    {
      v8 = this->ImageUpdates.Queue.Data.Data[v7];
      if ( (v8 & 1) != 0 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFEui64) + 16i64))(v8 & 0xFFFFFFFFFFFFFFFEui64);
      else
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v8);
      v7 = ++v1;
    }
    while ( v1 < this->ImageUpdates.Queue.Data.Size );
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->ImageUpdates.Queue.Data.Data);
  pObject = (Scaleform::RefCountVImpl *)this->pLocks.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  v10 = (Scaleform::RefCountVImpl *)this->pMemoryManager.pObject;
  if ( v10 )
    Scaleform::RefCountImpl::Release(v10);
  v11 = (Scaleform::RefCountVImpl *)this->pRenderSync.pObject;
  if ( v11 )
    Scaleform::RefCountImpl::Release(v11);
  v12 = (Scaleform::RefCountVImpl *)this->pTextureCache.pObject;
  if ( v12 )
    Scaleform::RefCountImpl::Release(v12);
  Scaleform::RefCountImplCore::~RefCountImplCore(&this->ServiceCommandInstance);
  this->Scaleform::Render::ImageUpdateSync::__vftable = (Scaleform::Render::ImageUpdateSync_vtbl *)&Scaleform::Render::ImageUpdateSync::`vftable';
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

Scaleform::Render::ImageData *__fastcall Scaleform::Render::ImageData::operator=(
        Scaleform::Render::ImageData *this,
        const Scaleform::Render::ImageData *rhs)
{
  unsigned __int8 Flags; // al
  Scaleform::Render::ImagePlane *pPlanes; // rdx
  Scaleform::Render::ImagePlane *p_Plane0; // rsi
  Scaleform::Render::Palette *pObject; // rcx
  Scaleform::Render::Palette *v8; // rbp
  unsigned __int16 i; // si
  Scaleform::Render::ImagePlane *v10; // rax
  __int64 v11; // r11
  unsigned int v12; // edx
  unsigned int v13; // er8
  unsigned __int8 *v14; // r10
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rcx
  Scaleform::Render::ImagePlane *v17; // rax

  Flags = this->Flags;
  if ( (Flags & 2) != 0 )
  {
    pPlanes = this->pPlanes;
    this->Flags = Flags & 0xFD;
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pPlanes);
  }
  p_Plane0 = &this->Plane0;
  this->pPlanes = &this->Plane0;
  this->Format = rhs->Format;
  this->Use = rhs->Use;
  this->Flags = rhs->Flags;
  this->LevelCount = rhs->LevelCount;
  this->RawPlaneCount = rhs->RawPlaneCount;
  pObject = rhs->pPalette.pObject;
  if ( pObject )
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&pObject->RefCount.Value, 1);
  v8 = this->pPalette.pObject;
  if ( v8
    && (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&this->pPalette.pObject->RefCount.Value, -1) == 1 )
  {
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v8);
  }
  this->pPalette.pObject = rhs->pPalette.pObject;
  p_Plane0->Width = rhs->Plane0.Width;
  this->Plane0.Height = rhs->Plane0.Height;
  this->Plane0.Pitch = rhs->Plane0.Pitch;
  this->Plane0.DataSize = rhs->Plane0.DataSize;
  this->Plane0.pData = rhs->Plane0.pData;
  if ( (rhs->Flags & 2) != 0 )
  {
    this->Flags &= ~2u;
    Scaleform::Render::ImageData::allocPlanes(this, this->Format, this->LevelCount, this->Flags & 1);
    for ( i = 0; i < rhs->RawPlaneCount; *(unsigned __int8 **)((char *)&v17->pData + v11) = v14 )
    {
      v10 = rhs->pPlanes;
      v11 = i++;
      v11 *= 32i64;
      v12 = *(unsigned int *)((char *)&v10->Width + v11);
      v13 = *(unsigned int *)((char *)&v10->Height + v11);
      v14 = *(unsigned __int8 **)((char *)&v10->pData + v11);
      v15 = *(unsigned __int64 *)((char *)&v10->DataSize + v11);
      v16 = *(unsigned __int64 *)((char *)&v10->Pitch + v11);
      v17 = this->pPlanes;
      *(unsigned int *)((char *)&v17->Width + v11) = v12;
      *(unsigned int *)((char *)&v17->Height + v11) = v13;
      *(unsigned __int64 *)((char *)&v17->Pitch + v11) = v16;
      *(unsigned __int64 *)((char *)&v17->DataSize + v11) = v15;
    }
  }
  else
  {
    this->pPlanes = p_Plane0;
  }
  return this;
}

void __fastcall Scaleform::Render::ImageUpdateQueue::Add(
        Scaleform::Render::ImageUpdateQueue *this,
        Scaleform::Render::Image *pimage)
{
  unsigned __int64 Size; // rax
  unsigned __int64 v3; // rbp
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  unsigned __int64 *v8; // rcx
  unsigned __int64 *v9; // rcx

  Size = this->Queue.Data.Size;
  v3 = (unsigned __int64)pimage | 1;
  v6 = Size + 1;
  if ( Size + 1 >= Size )
  {
    if ( v6 <= this->Queue.Data.Policy.Capacity )
      goto LABEL_7;
    v7 = v6 + (v6 >> 2);
  }
  else
  {
    if ( v6 >= this->Queue.Data.Policy.Capacity >> 1 )
      goto LABEL_7;
    v7 = Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned __int64,Scaleform::AllocatorLH<unsigned __int64,72>,Scaleform::ArrayConstPolicy<4,4,0>>::Reserve(
    &this->Queue.Data,
    this,
    v7);
LABEL_7:
  v8 = this->Queue.Data.Data - 1;
  this->Queue.Data.Size = v6;
  v9 = &v8[v6];
  if ( v9 )
    *v9 = v3;
  pimage->AddRef(pimage);
}

void __fastcall Scaleform::Render::ImageUpdateQueue::Add(
        Scaleform::Render::ImageUpdateQueue *this,
        Scaleform::Render::ImageUpdate *pupdate)
{
  unsigned __int64 Size; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r8
  unsigned __int64 *v7; // rcx
  Scaleform::Render::ImageUpdate **v8; // rcx

  Size = this->Queue.Data.Size;
  v5 = Size + 1;
  if ( Size + 1 >= Size )
  {
    if ( v5 <= this->Queue.Data.Policy.Capacity )
      goto LABEL_7;
    v6 = v5 + (v5 >> 2);
  }
  else
  {
    if ( v5 >= this->Queue.Data.Policy.Capacity >> 1 )
      goto LABEL_7;
    v6 = Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned __int64,Scaleform::AllocatorLH<unsigned __int64,72>,Scaleform::ArrayConstPolicy<4,4,0>>::Reserve(
    &this->Queue.Data,
    this,
    v6);
LABEL_7:
  v7 = this->Queue.Data.Data - 1;
  this->Queue.Data.Size = v5;
  v8 = (Scaleform::Render::ImageUpdate **)&v7[v5];
  if ( v8 )
    *v8 = pupdate;
  Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pupdate);
}

void __fastcall Scaleform::Render::Texture::ApplyTexture(
        Scaleform::Render::Texture *this,
        __int64 stage,
        const Scaleform::Render::ImageFillMode *fillMode)
{
  Scaleform::Render::TextureManagerLocks *pObject; // rdi
  Scaleform::Render::TextureManager *pManager; // rdi
  Scaleform::Render::RenderSync *v6; // rcx
  Scaleform::Render::TextureCache *v7; // rcx

  if ( this->State == State_Lost )
    ((void (__fastcall *)(Scaleform::Render::Texture *, __int64, const Scaleform::Render::ImageFillMode *))this->Initialize)(
      this,
      stage,
      fillMode);
  pObject = this->pManagerLocks.pObject;
  if ( pObject )
  {
    pManager = pObject->pManager;
    if ( pManager )
    {
      v6 = pManager->pRenderSync.pObject;
      if ( v6 )
        Scaleform::Render::RenderSync::AddFenceResource(v6, &this->Scaleform::Render::FenceResource);
      v7 = pManager->pTextureCache.pObject;
      if ( v7 )
        ((void (__fastcall *)(Scaleform::Render::TextureCache *, Scaleform::Render::Texture *, const Scaleform::Render::ImageFillMode *))v7->TextureReference)(
          v7,
          this,
          fillMode);
    }
  }
}

void __fastcall Scaleform::Render::TextureManager::BeginFrame(Scaleform::Render::TextureManager *this)
{
  Scaleform::Render::TextureCache *pObject; // rcx

  this->ProcessQueues(this);
  pObject = this->pTextureCache.pObject;
  if ( pObject )
    pObject->BeginFrame(pObject);
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall Scaleform::Render::ImageSwizzler::CacheScanline(
        Scaleform::Render::ImageSwizzler *this,
        Scaleform::Render::ImageSwizzlerContext *ctx,
        unsigned int y)
{
  ctx->pCurrentScanline = &ctx->pImage->pPlanes->pData[y * ctx->pImage->pPlanes->Pitch];
}

bool __fastcall Scaleform::Render::TextureManager::CanCreateTextureCurrentThread(
        Scaleform::Render::TextureManager *this)
{
  return !this->RenderThreadId || Concurrency::details::platform::GetCurrentThreadId() == this->RenderThreadId;
}

void __fastcall Scaleform::Render::ImageData::Clear(Scaleform::Render::ImageData *this)
{
  unsigned __int8 Flags; // al
  Scaleform::Render::ImagePlane *pPlanes; // rdx
  Scaleform::Render::Palette *pObject; // rsi

  Flags = this->Flags;
  if ( (Flags & 2) != 0 )
  {
    pPlanes = this->pPlanes;
    this->Flags = Flags & 0xFD;
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pPlanes);
  }
  this->Flags &= ~4u;
  this->pPlanes = &this->Plane0;
  *(_QWORD *)&this->Format = 0i64;
  this->LevelCount = 0;
  this->RawPlaneCount = 1;
  pObject = this->pPalette.pObject;
  if ( pObject
    && (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&this->pPalette.pObject->RefCount.Value, -1) == 1 )
  {
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
  }
  this->pPalette.pObject = 0i64;
  *(_QWORD *)&this->Plane0.Width = 0i64;
  this->Plane0.Pitch = 0i64;
  this->Plane0.DataSize = 0i64;
  this->Plane0.pData = 0i64;
}

// attributes: thunk
void __fastcall Scaleform::Render::ImageBase::CopyScanlineDefault(
        unsigned __int8 *pd,
        const unsigned __int8 *ps,
        unsigned __int64 size,
        Scaleform::Render::Palette *__formal)
{
  memmove(pd, ps, size);
}

Scaleform::Render::Palette *__fastcall Scaleform::Render::Palette::Create(
        unsigned int colorCount,
        bool hasAlpha,
        Scaleform::MemoryHeap *pheap)
{
  Scaleform::MemoryHeap *v4; // r10
  Scaleform::Render::Palette *result; // rax
  Scaleform::Render::Palette *v7; // rbx

  v4 = pheap;
  if ( !pheap )
    v4 = Scaleform::Memory::pGlobalHeap;
  result = (Scaleform::Render::Palette *)v4->Alloc(v4, 4i64 * (colorCount - 1) + 12, 0i64);
  v7 = result;
  if ( result )
  {
    result->RefCount.Value = 1;
    result->ColorCount = colorCount;
    result->HasAlphaFlag = hasAlpha;
    memset(result->Colors, 0, 4i64 * colorCount);
    return v7;
  }
  return result;
}

Scaleform::Render::RawImage *__fastcall Scaleform::Render::RawImage::Create(
        Scaleform::Render::ImageFormat format,
        unsigned int mipLevelCount,
        const Scaleform::Render::Size<unsigned long> *size,
        unsigned int use,
        Scaleform::MemoryHeap *pheap,
        Scaleform::Render::ImageUpdateSync *pupdateSync)
{
  Scaleform::MemoryHeap *v6; // r12
  unsigned __int16 v7; // di
  Scaleform::Render::ImageFormat v10; // er13
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned int v14; // ebp
  unsigned int v15; // eax
  unsigned int Width; // edi
  unsigned int Height; // esi
  unsigned __int64 MipLevelsSize; // r13
  __int64 v19; // rbx
  __int64 v20; // [rsp+20h] [rbp-48h]
  unsigned int v23; // [rsp+88h] [rbp+20h]

  v6 = pheap;
  v7 = use;
  v10 = format;
  if ( !pheap )
    v6 = Scaleform::Memory::pGlobalHeap;
  if ( (use & 2) != 0 && mipLevelCount != 1 )
    return 0i64;
  v12 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))v6->Alloc)(v6, 104i64);
  v13 = v12;
  if ( v12 )
  {
    v14 = 0;
    *(_QWORD *)v12 = &Scaleform::RefCountImplCore::`vftable';
    *(_DWORD *)(v12 + 8) = 1;
    *(_QWORD *)v12 = &Scaleform::Render::Image::`vftable';
    *(_QWORD *)(v12 + 16) = 0i64;
    *(_QWORD *)v12 = &Scaleform::Render::RawImage::`vftable';
    *(_QWORD *)(v12 + 24) = 0i64;
    *(_QWORD *)(v12 + 32) = 0i64;
    *(_QWORD *)(v12 + 56) = v12 + 72;
    *(_QWORD *)(v12 + 40) = 0i64;
    *(_DWORD *)(v12 + 48) = 0x10000;
    *(_QWORD *)(v12 + 64) = 0i64;
    *(_QWORD *)(v12 + 72) = 0i64;
    *(_QWORD *)(v12 + 80) = 0i64;
    *(_QWORD *)(v12 + 88) = 0i64;
    *(_QWORD *)(v12 + 96) = 0i64;
    Scaleform::Render::ImageData::Clear((Scaleform::Render::ImageData *)(v12 + 40));
    if ( Scaleform::Render::ImageData::allocPlanes((Scaleform::Render::ImageData *)(v13 + 40), v10, mipLevelCount, 0) )
    {
      *(_DWORD *)(v13 + 44) = v7;
      *(_QWORD *)(v13 + 24) = pupdateSync;
      if ( !*(_WORD *)(v13 + 50) )
        return (Scaleform::Render::RawImage *)v13;
      v15 = (v10 & 0xFFF) - 200;
      v23 = v15;
      while ( 1 )
      {
        if ( v15 > 1 || v14 - 1 > 1 )
        {
          Width = size->Width;
          Height = size->Height;
        }
        else
        {
          Width = size->Width >> 1;
          Height = size->Height >> 1;
        }
        pheap = (Scaleform::MemoryHeap *)__PAIR64__(Height, Width);
        MipLevelsSize = Scaleform::Render::ImageData::GetMipLevelsSize(
                          v10,
                          (const Scaleform::Render::Size<unsigned long> *)&pheap,
                          mipLevelCount,
                          v14);
        v20 = (__int64)v6->Alloc(v6, MipLevelsSize, 0i64);
        if ( !v20 )
          break;
        v19 = *(_QWORD *)(v13 + 56) + 32i64 * v14;
        *(_DWORD *)v19 = Width;
        *(_DWORD *)(v19 + 4) = Height;
        *(_QWORD *)(v19 + 8) = Scaleform::Render::ImageData::GetFormatPitch(format, Width, v14++);
        *(_QWORD *)(v19 + 24) = v20;
        *(_QWORD *)(v19 + 16) = MipLevelsSize;
        v10 = format;
        v15 = v23;
        if ( v14 >= *(unsigned __int16 *)(v13 + 50) )
          return (Scaleform::Render::RawImage *)v13;
      }
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16i64))(v13);
  }
  return 0i64;
}

Scaleform::Render::RawImage *__fastcall Scaleform::Render::ImageSource::CreateCompatibleImage(
        Scaleform::Render::ImageSource *this,
        const Scaleform::Render::ImageCreateArgs *args)
{
  Scaleform::Render::ImageFormat Format; // er13
  Scaleform::Render::ImageUpdateSync *psync; // r12
  Scaleform::Render::Image *v6; // rdi
  Scaleform::Render::TextureManager *pManager; // rax
  Scaleform::MemoryHeap *pHeap; // rbx
  unsigned int Use; // er15
  Scaleform::Render::ImageSource_vtbl *v10; // rax
  Scaleform::Render::TextureManager *v11; // rcx
  __int16 v12; // ax
  Scaleform::Render::TextureManager_vtbl *v13; // rbx
  Scaleform::Render::Size<unsigned long> *v14; // rax
  Scaleform::Render::Texture *ptexture; // rbx
  Scaleform::Render::TextureImage *v16; // r14
  const Scaleform::Render::Size<unsigned long> *v17; // rax
  Scaleform::Render::Image *v18; // rax
  const Scaleform::Render::Size<unsigned long> *v19; // rax
  Scaleform::Render::RawImage *result; // rax
  Scaleform::Render::Image *v21; // r14
  Scaleform::Render::ImageSource_vtbl *v22; // rbx
  Scaleform::Render::ImageFormat v23; // eax
  void (__fastcall *ImageConvertFunc)(unsigned __int8 *, const unsigned __int8 *, unsigned __int64, Scaleform::Render::Palette *, void *); // rax
  Scaleform::Render::Palette *pObject; // rbx
  Scaleform::Render::ImageData v26; // [rsp+40h] [rbp-40h] BYREF
  unsigned int mipLevelCount; // [rsp+C0h] [rbp+40h] BYREF
  Scaleform::MemoryHeap *v28; // [rsp+C8h] [rbp+48h] BYREF
  char v29; // [rsp+D0h] [rbp+50h] BYREF

  Format = args->Format;
  if ( Format == Image_None )
    Format = this->GetFormat(this);
  psync = args->pUpdateSync;
  v6 = 0i64;
  if ( !psync )
  {
    pManager = args->pManager;
    psync = &pManager->Scaleform::Render::ImageUpdateSync;
    if ( !pManager )
      psync = 0i64;
  }
  pHeap = Scaleform::Memory::pGlobalHeap;
  Use = args->Use;
  if ( args->pHeap )
    pHeap = args->pHeap;
  v10 = this->__vftable;
  v28 = pHeap;
  mipLevelCount = v10->GetMipmapCount(this);
  if ( mipLevelCount > 1 )
    Use &= ~2u;
  v11 = args->pManager;
  if ( v11
    && (v12 = v11->GetTextureUseCaps(v11, Format), (args->Use & (unsigned __int8)~(_BYTE)v12 & 0xC0) == 0)
    && (v12 & 0x100) != 0
    && (Use |= 0x100u, args->pManager->CanCreateTextureCurrentThread(args->pManager)) )
  {
    v13 = args->pManager->__vftable;
    v14 = this->GetSize(this, &v29);
    ptexture = v13->CreateTexture(args->pManager, Format, mipLevelCount, v14, Use, this, 0i64);
    if ( ptexture )
    {
      v16 = (Scaleform::Render::TextureImage *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))v28->Alloc)(
                                                 v28,
                                                 56i64);
      if ( v16 )
      {
        v17 = this->GetSize(this, &mipLevelCount);
        Scaleform::Render::TextureImage::TextureImage(v16, Format, v17, Use, ptexture, psync);
        v6 = v18;
      }
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)ptexture);
    }
  }
  else
  {
    v19 = this->GetSize(this, &v28);
    result = Scaleform::Render::RawImage::Create(Format, mipLevelCount, v19, Use, pHeap, psync);
    v21 = result;
    if ( !result )
      return result;
    *(_QWORD *)&v26.Format = 0i64;
    v26.pPlanes = &v26.Plane0;
    *(_DWORD *)&v26.Flags = 0x10000;
    memset(&v26.pPalette, 0, 40);
    Scaleform::Render::ImageData::operator=(&v26, &result->Data);
    v22 = this->__vftable;
    v23 = this->GetFormat(this);
    ImageConvertFunc = Scaleform::Render::GetImageConvertFunc(Format, v23);
    if ( v22->Decode(this, &v26, ImageConvertFunc, 0i64) )
      v6 = v21;
    else
      v21->Release(v21);
    if ( (v26.Flags & 2) != 0 )
    {
      v26.Flags &= ~2u;
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v26.pPlanes);
    }
    pObject = v26.pPalette.pObject;
    v26.pPlanes = &v26.Plane0;
    if ( v26.pPalette.pObject
      && (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&v26.pPalette.pObject->RefCount.Value, -1) == 1 )
    {
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
    }
  }
  return (Scaleform::Render::RawImage *)v6;
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

void __fastcall Scaleform::Render::Image::CreateSubImage(
        Scaleform::Render::Image *this,
        const Scaleform::Render::Rect<unsigned long> *rect,
        Scaleform::MemoryHeap *pheap)
{
  Scaleform::Render::SubImage *v5; // rax

  v5 = (Scaleform::Render::SubImage *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))pheap->Alloc)(
                                        pheap,
                                        64i64);
  if ( v5 )
    Scaleform::Render::SubImage::SubImage(v5, this, rect);
}

char __fastcall Scaleform::Render::RawImage::Decode(
        Scaleform::Render::RawImage *this,
        Scaleform::Render::ImageData *pdest,
        void (__fastcall *copyScanline)(unsigned __int8 *, const unsigned __int8 *, unsigned __int64, Scaleform::Render::Palette *, void *),
        void *arg)
{
  unsigned int v4; // er13
  Scaleform::Render::ImageData *v6; // r15
  Scaleform::Render::ImageFormat Format; // edx
  int v8; // eax
  unsigned int v9; // er8
  int LevelCount; // ecx
  unsigned int v11; // er12
  unsigned int v12; // ecx
  __int64 v13; // rdi
  unsigned int RawPlaneCount; // ecx
  Scaleform::Render::ImagePlane *v15; // rcx
  unsigned __int64 DataSize; // rsi
  unsigned __int8 *pData; // r14
  unsigned int v18; // ecx
  Scaleform::Render::ImagePlane *v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int8 *v21; // rcx
  unsigned int v22; // edi
  int v23; // edx
  __int64 v24; // r8
  int v25; // er9
  unsigned __int8 v26; // cl
  unsigned __int8 *v27; // rsi
  unsigned __int8 v28; // r8
  unsigned __int8 *v29; // r14
  unsigned __int8 v30; // dl
  int v31; // er8
  unsigned int v32; // er13
  unsigned int v33; // ecx
  unsigned int v34; // eax
  Scaleform::Render::ImagePlane *v35; // rcx
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rdi
  unsigned __int8 *v38; // rax
  unsigned __int8 *v39; // rax
  Scaleform::Render::ImagePlane *v40; // rcx
  unsigned __int64 v41; // rdx
  unsigned int v42; // ecx
  unsigned int v43; // eax
  __int64 v44; // rcx
  unsigned __int64 v45; // r12
  unsigned __int8 *v46; // rax
  unsigned __int8 *v47; // rax
  __int64 v48; // rcx
  unsigned int FormatBitsPerPixel; // eax
  unsigned int v50; // eax
  unsigned __int64 v51; // r13
  unsigned __int64 v52; // r15
  unsigned __int8 v53; // dl
  unsigned int v54; // er9
  unsigned __int8 v55; // cl
  unsigned __int8 v56; // r8
  unsigned int v57; // eax
  unsigned int v58; // ecx
  char *v59; // rcx
  unsigned int v60; // edx
  unsigned __int64 Height; // r14
  unsigned __int64 Pitch; // r13
  unsigned __int64 v63; // rax
  unsigned __int8 *v64; // rsi
  unsigned int v65; // ecx
  char *v66; // rcx
  unsigned __int64 v67; // r12
  unsigned __int8 *v68; // rdi
  unsigned int v69; // eax
  unsigned __int64 v70; // r15
  unsigned int v72; // [rsp+30h] [rbp-69h]
  unsigned int Width; // [rsp+30h] [rbp-69h]
  Scaleform::Render::ImagePlane p; // [rsp+38h] [rbp-61h] BYREF
  unsigned int v75; // [rsp+58h] [rbp-41h]
  Scaleform::Render::ImagePlane v76; // [rsp+60h] [rbp-39h] BYREF
  int v77; // [rsp+80h] [rbp-19h]
  int v78; // [rsp+84h] [rbp-15h]
  int v79; // [rsp+88h] [rbp-11h]
  unsigned int v80; // [rsp+8Ch] [rbp-Dh]
  unsigned __int64 v81; // [rsp+90h] [rbp-9h]
  unsigned int v82; // [rsp+98h] [rbp-1h]
  __int64 v83; // [rsp+A0h] [rbp+7h]
  unsigned int v84; // [rsp+100h] [rbp+67h]

  v4 = 0;
  v6 = pdest;
  memset(&p, 0, sizeof(p));
  Format = this->Data.Format;
  v80 = Format & 0xFFF;
  v8 = 1;
  memset(&v76, 0, sizeof(v76));
  if ( (Format & 0xFFF) != 0 )
  {
    switch ( Format & 0xFFF )
    {
      case 66:
        v9 = 2;
        break;
      case 200:
        v9 = 3;
        break;
      case 201:
        v9 = 4;
        break;
      default:
        v9 = 1;
        break;
    }
  }
  else
  {
    v9 = 0;
  }
  v84 = v9;
  if ( (this->Data.Flags & 1) != 0 )
    LevelCount = this->Data.LevelCount;
  else
    LevelCount = 1;
  v11 = LevelCount * this->Data.RawPlaneCount;
  if ( (v6->Flags & 1) != 0 )
    v8 = v6->LevelCount;
  v12 = v8 * v6->RawPlaneCount;
  if ( (int)(Format & 0xFFEFFFFF) >= 4096 )
  {
    if ( v11 )
    {
      v13 = 0i64;
      do
      {
        RawPlaneCount = this->Data.RawPlaneCount;
        if ( v4 >= RawPlaneCount )
        {
          Scaleform::Render::ImagePlane::GetMipLevel(
            &this->Data.pPlanes[v4 % RawPlaneCount],
            this->Data.Format,
            v4 / RawPlaneCount,
            &p,
            v4 % RawPlaneCount);
          pData = p.pData;
          DataSize = p.DataSize;
        }
        else
        {
          v15 = &this->Data.pPlanes[v13];
          DataSize = v15->DataSize;
          pData = v15->pData;
          p.Width = v15->Width;
          p.Height = v15->Height;
          p.Pitch = v15->Pitch;
          p.DataSize = DataSize;
          p.pData = pData;
        }
        v18 = v6->RawPlaneCount;
        if ( v4 >= v18 )
        {
          Scaleform::Render::ImagePlane::GetMipLevel(&v6->pPlanes[v4 % v18], v6->Format, v4 / v18, &v76, v4 % v18);
          v21 = v76.pData;
        }
        else
        {
          v19 = &v6->pPlanes[v13];
          v76.Width = v19->Width;
          v76.Height = v19->Height;
          v76.Pitch = v19->Pitch;
          v20 = v19->DataSize;
          v21 = v19->pData;
          v76.pData = v21;
          v76.DataSize = v20;
        }
        memmove(v21, pData, DataSize);
        ++v4;
        ++v13;
      }
      while ( v4 < v11 );
    }
    return 1;
  }
  v75 = 0;
  v22 = 0;
  if ( v11 < v12 )
    v12 = v11;
  v82 = v12;
  if ( v12 )
  {
    v83 = 0i64;
    v23 = v12 % v9;
    v24 = 0i64;
    v25 = v23;
    v78 = v23;
    do
    {
      if ( ((this->Data.Flags & 1) != 0 || this->Data.LevelCount == 1) && ((v6->Flags & 1) != 0 || v6->LevelCount == 1) )
      {
        v58 = this->Data.RawPlaneCount;
        if ( v22 >= v58 )
        {
          Scaleform::Render::ImagePlane::GetMipLevel(
            &this->Data.pPlanes[v22 % v58],
            this->Data.Format,
            v22 / v58,
            &p,
            v22 % v58);
          v64 = p.pData;
          Pitch = p.Pitch;
          Height = p.Height;
          v24 = v83;
          Width = p.Width;
        }
        else
        {
          v59 = (char *)this->Data.pPlanes + v24;
          v60 = *(_DWORD *)v59;
          Height = *((unsigned int *)v59 + 1);
          Pitch = *((_QWORD *)v59 + 1);
          v63 = *((_QWORD *)v59 + 2);
          v64 = (unsigned __int8 *)*((_QWORD *)v59 + 3);
          p.Height = *((_DWORD *)v59 + 1);
          p.Pitch = Pitch;
          p.DataSize = v63;
          p.pData = v64;
          Width = v60;
          p.Width = v60;
        }
        v65 = v6->RawPlaneCount;
        if ( v22 >= v65 )
        {
          Scaleform::Render::ImagePlane::GetMipLevel(&v6->pPlanes[v22 % v65], v6->Format, v22 / v65, &v76, v22 % v65);
          v68 = v76.pData;
          v67 = v76.Pitch;
        }
        else
        {
          v66 = (char *)v6->pPlanes + v24;
          v67 = *((_QWORD *)v66 + 1);
          v68 = (unsigned __int8 *)*((_QWORD *)v66 + 3);
          v76.Width = *(_DWORD *)v66;
          v76.Height = *((_DWORD *)v66 + 1);
          v76.DataSize = *((_QWORD *)v66 + 2);
          v76.Pitch = v67;
          v76.pData = v68;
        }
        if ( v80 >= 0x32 && (v80 <= 0x35 || v80 - 63 <= 2) )
          Height = (unsigned __int64)(unsigned int)(Height + 3) >> 2;
        v69 = (Width * Scaleform::Render::ImageData::GetFormatBitsPerPixel(this->Data.Format, 0)) >> 3;
        if ( Height )
        {
          v70 = v69;
          do
          {
            copyScanline(v68, v64, v70, this->Data.pPalette.pObject, arg);
            v64 += Pitch;
            v68 += v67;
            --Height;
          }
          while ( Height );
          v6 = pdest;
        }
      }
      else
      {
        v26 = this->Data.LevelCount;
        v27 = 0i64;
        v28 = v6->LevelCount;
        v29 = 0i64;
        v79 = 0;
        v30 = v28;
        if ( v26 < v28 )
          v30 = v26;
        if ( !v30 )
          goto LABEL_87;
        v72 = v22;
        v31 = v25 - v22;
        v32 = v22;
        v77 = v25 - v22;
        do
        {
          v33 = this->Data.RawPlaneCount;
          if ( (this->Data.Flags & 1) != 0 )
          {
            v34 = v31 + v32;
            if ( v31 + v32 >= v33 )
            {
              Scaleform::Render::ImagePlane::GetMipLevel(
                &this->Data.pPlanes[v34 % v33],
                this->Data.Format,
                v34 / v33,
                &p,
                v34 % v33);
              v39 = p.pData;
              v37 = p.Height;
              if ( v27 )
                v39 = v27;
              v31 = v77;
              v27 = v39;
              v81 = p.Pitch;
            }
            else
            {
              v35 = &this->Data.pPlanes[v34];
              v36 = v35->Pitch;
              v37 = v35->Height;
              p.Width = v35->Width;
              p.DataSize = v35->DataSize;
              v38 = v35->pData;
              p.pData = v38;
              if ( v27 )
                v38 = v27;
              v27 = v38;
              p.Height = v37;
              v81 = v36;
              p.Pitch = v36;
            }
          }
          else if ( v32 >= v33 )
          {
            Scaleform::Render::ImagePlane::GetMipLevel(
              &this->Data.pPlanes[v32 % v33],
              this->Data.Format,
              v32 / v33,
              &p,
              v32 % v33);
            v27 = p.pData;
            v37 = p.Height;
            v31 = v77;
            v81 = p.Pitch;
          }
          else
          {
            v40 = &this->Data.pPlanes[v32];
            v41 = v40->Pitch;
            v37 = v40->Height;
            v27 = v40->pData;
            p.Width = v40->Width;
            p.DataSize = v40->DataSize;
            p.Height = v37;
            v81 = v41;
            p.Pitch = v41;
            p.pData = v27;
          }
          v42 = v6->RawPlaneCount;
          if ( (v6->Flags & 1) != 0 )
          {
            v43 = v31 + v32;
            if ( v31 + v32 >= v42 )
            {
              Scaleform::Render::ImagePlane::GetMipLevel(
                &v6->pPlanes[v43 % v42],
                v6->Format,
                v43 / v42,
                &v76,
                v43 % v42);
              v47 = v76.pData;
              v45 = v76.Pitch;
              if ( v29 )
                v47 = v29;
              v29 = v47;
            }
            else
            {
              v44 = (__int64)&v6->pPlanes[v43];
              v45 = *(_QWORD *)(v44 + 8);
              v76.Width = *(_DWORD *)v44;
              v76.Height = *(_DWORD *)(v44 + 4);
              v76.DataSize = *(_QWORD *)(v44 + 16);
              v46 = *(unsigned __int8 **)(v44 + 24);
              v76.pData = v46;
              if ( v29 )
                v46 = v29;
              v29 = v46;
              v76.Pitch = v45;
            }
          }
          else if ( v32 >= v42 )
          {
            Scaleform::Render::ImagePlane::GetMipLevel(&v6->pPlanes[v32 % v42], v6->Format, v32 / v42, &v76, v32 % v42);
            v29 = v76.pData;
            v45 = v76.Pitch;
          }
          else
          {
            v48 = (__int64)&v6->pPlanes[v32];
            v45 = *(_QWORD *)(v48 + 8);
            v29 = *(unsigned __int8 **)(v48 + 24);
            v76.Width = *(_DWORD *)v48;
            v76.Height = *(_DWORD *)(v48 + 4);
            v76.DataSize = *(_QWORD *)(v48 + 16);
            v76.Pitch = v45;
            v76.pData = v29;
          }
          if ( v80 >= 0x32 && (v80 <= 0x35 || v80 - 63 <= 2) )
            v37 = (unsigned __int64)(unsigned int)(v37 + 3) >> 2;
          FormatBitsPerPixel = Scaleform::Render::ImageData::GetFormatBitsPerPixel(this->Data.Format, 0);
          v50 = (p.Width * FormatBitsPerPixel) >> 3;
          if ( v37 )
          {
            v51 = v81;
            v52 = v50;
            do
            {
              copyScanline(v29, v27, v52, this->Data.pPalette.pObject, arg);
              v27 += v51;
              v29 += v45;
              --v37;
            }
            while ( v37 );
            v6 = pdest;
            v32 = v72;
          }
          v32 += v84;
          v53 = v6->LevelCount;
          v54 = v79 + 1;
          v55 = this->Data.LevelCount;
          v56 = v53;
          ++v79;
          v72 = v32;
          if ( v55 < v53 )
            v56 = v55;
          v57 = v56;
          v31 = v77;
        }
        while ( v54 < v57 );
      }
      v22 = v75;
      v25 = v78;
LABEL_87:
      ++v22;
      v24 = v83 + 32;
      v75 = v22;
      v83 += 32i64;
    }
    while ( v22 < v82 );
  }
  return 1;
}

__int64 __fastcall Scaleform::Render::ImageDelegate::Decode(
        Scaleform::Render::SubImage *this,
        Scaleform::Render::ImageData *pdest,
        void (__fastcall *csf)(unsigned __int8 *, const unsigned __int8 *, unsigned __int64, Scaleform::Render::Palette *, void *),
        void *arg)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::Image *, Scaleform::Render::ImageData *, void (__fastcall *)(unsigned __int8 *, const unsigned __int8 *, unsigned __int64, Scaleform::Render::Palette *, void *), void *))this->pImage.pObject->Decode)(
           this->pImage.pObject,
           pdest,
           csf,
           arg);
}

void __fastcall Scaleform::Render::Texture::DisposeTextureData(Scaleform::Render::Texture *this)
{
  this->LoseTextureData(this);
  this->State = State_Disposed;
}

void __fastcall Scaleform::Render::TextureManager::EndFrame(Scaleform::Render::TextureManager *this)
{
  Scaleform::Render::TextureCache *pObject; // rcx

  pObject = this->pTextureCache.pObject;
  if ( pObject )
    pObject->EndFrame(pObject);
}

void __fastcall Scaleform::Render::TextureManager::ServiceCommand::Execute(
        Scaleform::Render::TextureManager::ServiceCommand *this)
{
  this->pManager->ProcessQueues(this->pManager);
}

void __fastcall Scaleform::Render::SubImage::GetAsImage(std::_Wrap_alloc<std::allocator<AgString> > *this)
{
  ;
}

unsigned __int64 __fastcall Scaleform::Render::Texture::GetBytes(Scaleform::Render::Texture *this, int *memRegion)
{
  unsigned int Width; // ebx
  __int64 Height; // rdi
  Scaleform::Render::ImageFormat v4; // eax
  int v5; // er8
  unsigned int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // ecx

  if ( memRegion )
    *memRegion = 1;
  Width = this->ImgSize.Width;
  Height = this->ImgSize.Height;
  v4 = ((unsigned int (*)(void))this->GetFormat)();
  v5 = v4 & 0xFFF;
  if ( v5 == 50 || v5 == 63 )
  {
    v9 = (Width + 3) >> 2;
    v10 = (unsigned int)(Height + 3) >> 2;
    if ( !v10 )
      v10 = 1;
    if ( !v9 )
      v9 = 1;
    return 8 * v10 * v9;
  }
  else if ( (unsigned int)(v5 - 51) <= 2 || (unsigned int)(v5 - 64) <= 1 )
  {
    v7 = (Width + 3) >> 2;
    v8 = (unsigned int)(Height + 3) >> 2;
    if ( !v8 )
      v8 = 1;
    if ( !v7 )
      v7 = 1;
    return 16 * v8 * v7;
  }
  else
  {
    return Height * Scaleform::Render::ImageData::GetFormatPitch(v4, Width, 0);
  }
}

__int64 __fastcall AgUser::isSignedIn(Concurrency::details::ThreadInternalContext *this)
{
  return 1i64;
}

__int64 __fastcall Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStartingPos(
        AgDisplay *this)
{
  return (unsigned int)this->m_windowMode;
}

__int64 __fastcall Scaleform::Render::ImageDelegate::GetFormat(Scaleform::Render::SubImage *this)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::Image *))this->pImage.pObject->GetFormat)(this->pImage.pObject);
}

__int64 __fastcall Scaleform::Render::ImageData::GetFormatBitsPerPixel(
        Scaleform::Render::ImageFormat fmt,
        unsigned int plane)
{
  __int64 result; // rax

  switch ( fmt & 0xFFF )
  {
    case 1:
    case 2:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x40:
    case 0x41:
      result = 32i64;
      break;
    case 3:
    case 4:
      result = 24i64;
      break;
    case 9:
    case 0x64:
    case 0x65:
    case 0xC8:
    case 0xC9:
      result = 8i64;
      break;
    case 0x15:
    case 0x32:
    case 0x3F:
      result = 16i64;
      break;
    case 0x36:
    case 0x37:
    case 0x3A:
    case 0x42:
      result = 4i64;
      break;
    case 0x38:
    case 0x39:
      result = 2i64;
      break;
    default:
      result = 0i64;
      break;
  }
  return result;
}

unsigned __int64 __fastcall Scaleform::Render::ImageData::GetFormatPitch(
        Scaleform::Render::ImageFormat fmt,
        unsigned int width,
        unsigned int plane)
{
  unsigned __int64 result; // rax

  switch ( fmt & 0xFFF )
  {
    case 1:
    case 2:
      result = 4 * width;
      break;
    case 3:
    case 4:
      result = (3 * (width + 1)) & 0xFFFFFFFC;
      break;
    case 9:
    case 0x3D:
    case 0x64:
    case 0x65:
    case 0xC8:
    case 0xC9:
      result = width;
      break;
    case 0x15:
      result = 2 * width;
      break;
    case 0x32:
    case 0x3F:
      result = 8 * ((width + 3) >> 2);
      break;
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x40:
    case 0x41:
      result = 16 * ((width + 3) >> 2);
      break;
    case 0x36:
    case 0x37:
    case 0x3A:
    case 0x3C:
    case 0x3E:
    case 0x42:
      result = (unsigned __int64)width >> 1;
      break;
    case 0x38:
    case 0x39:
      result = (unsigned __int64)width >> 2;
      break;
    default:
      result = 0i64;
      break;
  }
  return result;
}

__int64 __fastcall Scaleform::Render::ImageData::GetFormatPlaneCount(Scaleform::Render::ImageFormat fmt)
{
  __int32 v1; // ecx
  __int32 v2; // ecx
  __int32 v3; // ecx

  v1 = fmt & 0xFFF;
  if ( !v1 )
    return 0i64;
  v2 = v1 - 66;
  if ( !v2 )
    return 2i64;
  v3 = v2 - 134;
  if ( !v3 )
    return 3i64;
  if ( v3 == 1 )
    return 4i64;
  return 1i64;
}

Scaleform::Render::Size<unsigned long> *__fastcall Scaleform::Render::ImageData::GetFormatPlaneSize(
        Scaleform::Render::Size<unsigned long> *result,
        Scaleform::Render::ImageFormat fmt,
        const Scaleform::Render::Size<unsigned long> *sz,
        unsigned int plane)
{
  if ( (fmt & 0xFFFu) - 200 > 1 || plane - 1 > 1 )
  {
    *result = *sz;
    return result;
  }
  else
  {
    result->Width = sz->Width >> 1;
    result->Height = sz->Height >> 1;
    return result;
  }
}

unsigned __int64 __fastcall Scaleform::Render::ImageData::GetFormatScanlineCount(
        Scaleform::Render::ImageFormat fmt,
        unsigned int height,
        unsigned int plane)
{
  __int32 v3; // ecx

  v3 = fmt & 0xFFF;
  if ( (unsigned int)(v3 - 50) <= 3 || (unsigned int)(v3 - 63) <= 2 )
    return (unsigned __int64)(height + 3) >> 2;
  else
    return height;
}

char __fastcall Scaleform::Render::RawImage::GetImageData(
        Scaleform::Render::RawImage *this,
        Scaleform::Render::ImageData *pdata)
{
  Scaleform::Render::ImageData::operator=(pdata, &this->Data);
  return 1;
}

Scaleform::Render::ImageSwizzler *__fastcall Scaleform::Render::TextureManager::GetImageSwizzler(
        Scaleform::Render::TextureManager *this)
{
  if ( dword_140A72270 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 40i64) )
  {
    Init_thread_header(&dword_140A72270);
    if ( dword_140A72270 == -1 )
    {
      atexit(Scaleform::Render::TextureManager::GetImageSwizzler_::_2_::_dynamic_atexit_destructor_for__swizzler__);
      Init_thread_footer(&dword_140A72270);
    }
  }
  return &swizzler;
}

__int64 __fastcall ActorShot::GetActorType(Scaleform::GFx::AS3::Instances::fl::XMLText *this)
{
  return 2i64;
}

__int64 __fastcall Scaleform::Render::DICommand_Draw::GetType(Scaleform::GFx::AS3::Instances::fl::XMLAttr *this)
{
  return 5i64;
}

__int64 __fastcall ActorOption::GetActorType(Scaleform::GFx::AS3::Instances::fl::XMLProcInstr *this)
{
  return 4i64;
}

void __fastcall Scaleform::Render::Image::GetMatrix(
        Scaleform::Render::Image *this,
        Scaleform::Render::Matrix2x4<float> *mat)
{
  Scaleform::Render::Matrix2x4<float> *pInverseMatrix; // rdx
  float v4; // xmm2_4
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  Scaleform::Render::Matrix2x4<float> m; // [rsp+20h] [rbp-28h] BYREF

  pInverseMatrix = this->pInverseMatrix;
  if ( pInverseMatrix )
  {
    mat->M[0][0] = pInverseMatrix->M[0][0];
    mat->M[0][1] = pInverseMatrix->M[0][1];
    mat->M[0][2] = pInverseMatrix->M[0][2];
    mat->M[0][3] = pInverseMatrix->M[0][3];
    mat->M[1][0] = pInverseMatrix->M[1][0];
    mat->M[1][1] = pInverseMatrix->M[1][1];
    mat->M[1][2] = pInverseMatrix->M[1][2];
    v4 = pInverseMatrix->M[1][3];
    mat->M[1][3] = v4;
    v5 = mat->M[0][1];
    m.M[0][0] = mat->M[0][0];
    m.M[0][2] = mat->M[0][2];
    v6 = mat->M[1][0];
    m.M[0][1] = v5;
    v7 = mat->M[0][3];
    m.M[1][0] = v6;
    v8 = mat->M[1][2];
    m.M[0][3] = v7;
    *(_QWORD *)&m.M[1][1] = __PAIR64__(LODWORD(v8), LODWORD(mat->M[1][1]));
    m.M[1][3] = v4;
    Scaleform::Render::Matrix2x4<float>::SetInverse(mat, &m);
  }
  else
  {
    *(_QWORD *)&mat->M[0][0] = 1065353216i64;
    *(_QWORD *)&mat->M[0][2] = 0i64;
    mat->M[1][0] = 0.0;
    mat->M[1][3] = 0.0;
    *(_QWORD *)&mat->M[1][1] = 1065353216i64;
  }
}

bool __fastcall Scaleform::Render::Image::GetMatrixInverse(
        Scaleform::Render::Image *this,
        Scaleform::Render::Matrix2x4<float> *mat)
{
  Scaleform::Render::Matrix2x4<float> *pInverseMatrix; // r8

  pInverseMatrix = this->pInverseMatrix;
  if ( pInverseMatrix )
    *mat = *pInverseMatrix;
  return this->pInverseMatrix != 0i64;
}

char __fastcall Scaleform::Render::SubImage::GetMatrixInverse(
        Scaleform::Render::SubImage *this,
        Scaleform::Render::Matrix2x4<float> *mat)
{
  char result; // al
  float *pInverseMatrix; // r8
  Scaleform::Render::Matrix2x4<float> *v6; // rdx

  result = ((__int64 (__fastcall *)(Scaleform::Render::Image *))this->pImage.pObject->GetMatrixInverse)(this->pImage.pObject);
  if ( !result )
  {
    pInverseMatrix = (float *)this->pInverseMatrix;
    if ( !pInverseMatrix )
      return result;
    mat->M[0][0] = *pInverseMatrix;
    mat->M[0][1] = pInverseMatrix[1];
    mat->M[0][2] = pInverseMatrix[2];
    mat->M[0][3] = pInverseMatrix[3];
    mat->M[1][0] = pInverseMatrix[4];
    mat->M[1][1] = pInverseMatrix[5];
    mat->M[1][2] = pInverseMatrix[6];
    mat->M[1][3] = pInverseMatrix[7];
  }
  v6 = this->pInverseMatrix;
  if ( v6 )
  {
    if ( result )
      Scaleform::Render::Matrix2x4<float>::Append(mat, v6);
  }
  return 1;
}

void __fastcall Scaleform::Render::ImagePlane::GetMipLevel(
        Scaleform::Render::ImagePlane *this,
        Scaleform::Render::ImageFormat format,
        unsigned int level,
        Scaleform::Render::ImagePlane *p,
        unsigned int plane)
{
  Scaleform::Render::ImagePlane *v5; // r12
  unsigned int Height; // esi
  unsigned __int8 *pData; // rax
  __int64 v10; // rcx
  unsigned __int8 *v11; // r12
  __int32 v12; // ebx
  unsigned int Width; // edi
  unsigned __int64 v14; // rbp
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // edi
  unsigned __int64 FormatPitch; // rax
  bool v22; // zf
  unsigned int v24; // [rsp+80h] [rbp+18h]
  __int64 v25; // [rsp+88h] [rbp+20h]

  v5 = this;
  p->Width = this->Width;
  Height = this->Height;
  p->Height = Height;
  p->Pitch = this->Pitch;
  p->DataSize = this->DataSize;
  pData = this->pData;
  v10 = 0i64;
  v24 = level;
  p->pData = pData;
  v25 = 0i64;
  if ( level )
  {
    v11 = pData;
    v12 = format & 0xFFF;
    while ( 1 )
    {
      Width = p->Width;
      if ( v12 == 50 || v12 == 63 )
        break;
      if ( (unsigned int)(v12 - 51) <= 2 || (unsigned int)(v12 - 64) <= 1 )
      {
        v15 = (Width + 3) >> 2;
        v16 = (Height + 3) >> 2;
        if ( !v16 )
          v16 = 1;
        if ( !v15 )
          v15 = 1;
        v17 = 16 * v15 * v16;
LABEL_18:
        v14 = v17;
        goto LABEL_19;
      }
      v14 = Height * Scaleform::Render::ImageData::GetFormatPitch(format, Width, plane);
LABEL_19:
      v20 = Width >> 1;
      v11 += v14;
      if ( !v20 )
        v20 = 1;
      Height >>= 1;
      p->Width = v20;
      if ( !Height )
        Height = 1;
      FormatPitch = Scaleform::Render::ImageData::GetFormatPitch(format, v20, plane);
      v10 = v14 + v25;
      v22 = v24-- == 1;
      v25 += v14;
      if ( v22 )
      {
        p->pData = v11;
        v5 = this;
        p->Height = Height;
        p->Pitch = FormatPitch;
        goto LABEL_25;
      }
    }
    v18 = (Width + 3) >> 2;
    v19 = (Height + 3) >> 2;
    if ( !v19 )
      v19 = 1;
    if ( !v18 )
      v18 = 1;
    v17 = 8 * v18 * v19;
    goto LABEL_18;
  }
LABEL_25:
  p->DataSize = v5->DataSize - v10;
}

void __fastcall Scaleform::Render::ImageData::GetMipLevelPlane(
        Scaleform::Render::ImageData *this,
        unsigned int mipLevel,
        unsigned int plane,
        Scaleform::Render::ImagePlane *pplane)
{
  int v5; // eax
  unsigned int RawPlaneCount; // ecx
  unsigned int v7; // eax

  if ( (this->Format & 0xFFF) != 0 )
  {
    switch ( this->Format & 0xFFF )
    {
      case 66:
        v5 = 2;
        break;
      case 200:
        v5 = 3;
        break;
      case 201:
        v5 = 4;
        break;
      default:
        v5 = 1;
        break;
    }
  }
  else
  {
    v5 = 0;
  }
  RawPlaneCount = this->RawPlaneCount;
  v7 = plane + mipLevel * v5;
  if ( v7 >= RawPlaneCount )
    Scaleform::Render::ImagePlane::GetMipLevel(
      &this->pPlanes[v7 % RawPlaneCount],
      this->Format,
      v7 / RawPlaneCount,
      pplane,
      v7 % RawPlaneCount);
  else
    *pplane = this->pPlanes[v7];
}

unsigned __int64 __fastcall Scaleform::Render::ImageData::GetMipLevelSize(
        Scaleform::Render::ImageFormat format,
        const Scaleform::Render::Size<unsigned long> *sz,
        unsigned int plane)
{
  __int32 v3; // er9
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // eax

  v3 = format & 0xFFF;
  if ( v3 == 50 || v3 == 63 )
  {
    v7 = (sz->Width + 3) >> 2;
    v8 = (sz->Height + 3) >> 2;
    if ( !v8 )
      v8 = 1;
    if ( !v7 )
      v7 = 1;
    return 8 * v7 * v8;
  }
  else if ( (unsigned int)(v3 - 51) <= 2 || (unsigned int)(v3 - 64) <= 1 )
  {
    v5 = (sz->Width + 3) >> 2;
    v6 = (sz->Height + 3) >> 2;
    if ( !v6 )
      v6 = 1;
    if ( !v5 )
      v5 = 1;
    return 16 * v5 * v6;
  }
  else
  {
    return sz->Height * Scaleform::Render::ImageData::GetFormatPitch(format, sz->Width, plane);
  }
}

__int64 __fastcall Scaleform::Render::ImageData::GetMipLevelsSize(
        Scaleform::Render::ImageFormat format,
        const Scaleform::Render::Size<unsigned long> *sz,
        unsigned int levels,
        unsigned int plane)
{
  unsigned int Width; // edi
  __int64 v5; // rbp
  unsigned int Height; // esi
  unsigned int v8; // er15
  __int32 v10; // ebx
  unsigned __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // ecx

  Width = sz->Width;
  v5 = 0i64;
  Height = sz->Height;
  v8 = levels;
  if ( levels )
  {
    v10 = format & 0xFFF;
    do
    {
      if ( v10 == 50 || v10 == 63 )
      {
        v14 = (Width + 3) >> 2;
        v15 = (Height + 3) >> 2;
        if ( !v15 )
          v15 = 1;
        if ( !v14 )
          v14 = 1;
        v11 = 8 * v14 * v15;
      }
      else if ( (unsigned int)(v10 - 51) <= 2 || (unsigned int)(v10 - 64) <= 1 )
      {
        v12 = (Width + 3) >> 2;
        v13 = (Height + 3) >> 2;
        if ( !v13 )
          v13 = 1;
        if ( !v12 )
          v12 = 1;
        v11 = 16 * v12 * v13;
      }
      else
      {
        v11 = Height * Scaleform::Render::ImageData::GetFormatPitch(format, Width, plane);
      }
      Width >>= 1;
      v5 += v11;
      if ( !Width )
        Width = 1;
      Height >>= 1;
      if ( !Height )
        Height = 1;
      --v8;
    }
    while ( v8 );
  }
  return v5;
}

__int64 __fastcall Scaleform::Render::RawImage::GetMipmapCount(Scaleform::Render::RawImage *this)
{
  return this->Data.LevelCount;
}

__int64 __fastcall Scaleform::Render::SubImage::GetMipmapCount(Scaleform::Render::SubImage *this)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::Image *))this->pImage.pObject->GetMipmapCount)(this->pImage.pObject);
}

__int64 __fastcall Scaleform::Render::TextureImage::GetMipmapCount(Scaleform::Render::TextureImage *this)
{
  Scaleform::Render::Texture *volatile Value; // rax

  if ( !this->pTexture.Value )
    return 1i64;
  Value = this->pTexture.Value;
  if ( (Value->Use & 2) != 0 )
    return 1i64;
  else
    return Value->MipLevels;
}

Scaleform::Render::Color *__fastcall Scaleform::Render::ImageData::GetPixelInScanline(
        Scaleform::Render::ImageData *this,
        Scaleform::Render::Color *result,
        const unsigned __int8 *pline,
        unsigned int x)
{
  signed __int32 v4; // er10
  signed __int32 v5; // er10
  signed __int32 v6; // er10
  __int64 v7; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx

  v4 = this->Format & 0xFFEFFFFF;
  if ( v4 <= 4 )
  {
    if ( v4 != 4 )
    {
      v5 = v4 - 1;
      if ( !v5 )
      {
        v10 = 4 * x;
        result->Channels.Red = pline[v10];
        result->Channels.Green = pline[v10 + 1];
        result->Channels.Blue = pline[v10 + 2];
        result->Channels.Alpha = pline[v10 + 3];
        return result;
      }
      v6 = v5 - 1;
      if ( !v6 )
      {
        v9 = 4 * x;
        *result = *(Scaleform::Render::Color *)&pline[v9];
        return result;
      }
      if ( v6 == 1 )
      {
        result->Channels.Alpha = -1;
        v7 = 4 * x;
        result->Channels.Red = pline[v7];
        result->Channels.Green = pline[v7 + 1];
        result->Channels.Blue = pline[v7 + 2];
        return result;
      }
      return result;
    }
    result->Channels.Alpha = -1;
    v11 = 4 * x;
    result->Channels.Red = pline[v11 + 2];
    result->Channels.Green = pline[v11 + 1];
    result->Channels.Blue = pline[v11];
    goto LABEL_10;
  }
  if ( v4 == 9 )
  {
LABEL_10:
    *(_WORD *)&result->Channels.Green = -1;
    result->Channels.Alpha = pline[4 * x];
    result->Channels.Blue = -1;
    return result;
  }
  if ( v4 != 12289 )
    return result;
  v12 = 4 * x;
  result->Channels.Red = pline[v12 + 1];
  result->Channels.Green = pline[v12 + 2];
  result->Channels.Blue = pline[v12 + 3];
  result->Channels.Alpha = pline[v12];
  return result;
}

Scaleform::Render::Color *__fastcall Scaleform::Render::ImageSwizzler::GetPixelInScanline(
        Scaleform::Render::ImageSwizzler *this,
        Scaleform::Render::Color *result,
        Scaleform::Render::ImageSwizzlerContext *ctx,
        unsigned int x)
{
  Scaleform::Render::ImageData::GetPixelInScanline(ctx->pImage, result, ctx->pCurrentScanline, x);
  return result;
}

void __fastcall Scaleform::Render::ImageData::GetPlane(
        Scaleform::Render::ImageData *this,
        unsigned int index,
        Scaleform::Render::ImagePlane *pplane)
{
  unsigned int RawPlaneCount; // ecx

  RawPlaneCount = this->RawPlaneCount;
  if ( index >= RawPlaneCount )
    Scaleform::Render::ImagePlane::GetMipLevel(
      &this->pPlanes[index % RawPlaneCount],
      this->Format,
      index / RawPlaneCount,
      pplane,
      index % RawPlaneCount);
  else
    *pplane = this->pPlanes[index];
}

__int64 __fastcall Scaleform::Render::ImageData::GetPlaneCount(Scaleform::Render::ImageData *this)
{
  if ( (this->Flags & 1) != 0 )
    return this->LevelCount * (unsigned int)this->RawPlaneCount;
  else
    return this->RawPlaneCount;
}

Scaleform::Render::Rect<unsigned long> *__fastcall Scaleform::GFx::ConstShapeWithStyles::GetBoundsLocal(
        Scaleform::Render::SubImage *this,
        Scaleform::Render::Rect<unsigned long> *result)
{
  *result = this->SubRect;
  return result;
}

Scaleform::Render::Size<unsigned long> *__fastcall Scaleform::Render::RawImage::GetSize(
        Scaleform::Render::RawImage *this,
        Scaleform::Render::Size<unsigned long> *result)
{
  Scaleform::Render::ImagePlane *pPlanes; // r8

  pPlanes = this->Data.pPlanes;
  result->Width = pPlanes->Width;
  result->Height = pPlanes->Height;
  return result;
}

Scaleform::GFx::ASString *__fastcall Scaleform::Render::SubImage::GetSize(
        Scaleform::GFx::AS3::Object *this,
        Scaleform::GFx::ASString *result,
        __int64 f)
{
  this->pTraits.pObject->GetQualifiedName(this->pTraits.pObject, result, (Scaleform::GFx::AS3::QNameFormat)f);
  return result;
}

Scaleform::Render::Size<unsigned long> *__fastcall Scaleform::Render::TextureImage::GetSize(
        Scaleform::Render::TextureImage *this,
        Scaleform::Render::Size<unsigned long> *result)
{
  *result = this->Size;
  return result;
}

Scaleform::Render::Texture *__fastcall Scaleform::Render::RawImage::GetTexture(
        Scaleform::Render::RawImage *this,
        Scaleform::Render::TextureManager *pmanager)
{
  Scaleform::Render::Texture *result; // rax
  Scaleform::Render::TextureManagerLocks *pObject; // rax
  Scaleform::Render::TextureManager *v6; // rax
  Scaleform::Render::ImagePlane *pPlanes; // rax
  Scaleform::Render::TextureManager_vtbl *v8; // r10
  __int64 LevelCount; // r8
  int Height; // ecx
  __int64 Format; // rdx
  unsigned int Width; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+54h] [rbp+Ch]

  if ( this->pTexture.Value && this->pTexture.Value->State == State_Disposed )
    return 0i64;
  if ( this->pTexture.Value )
  {
    pObject = this->pTexture.Value->pManagerLocks.pObject;
    v6 = pObject ? pObject->pManager : 0i64;
    if ( v6 == pmanager )
      return this->pTexture.Value;
  }
  if ( !pmanager )
    return 0i64;
  this->pTexture.Value = 0i64;
  pPlanes = this->Data.pPlanes;
  v8 = pmanager->Scaleform::RefCountBase<Scaleform::Render::TextureManager,72>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,72>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
  LevelCount = this->Data.LevelCount;
  Height = pPlanes->Height;
  Format = (unsigned int)this->Data.Format;
  Width = pPlanes->Width;
  LODWORD(pPlanes) = this->Data.Use & 0xFFFFFF3F;
  v13 = Height;
  result = v8->CreateTexture(
             pmanager,
             (Scaleform::Render::ImageFormat)Format,
             LevelCount,
             (const Scaleform::Render::Size<unsigned long> *)&Width,
             (unsigned int)pPlanes,
             this,
             0i64);
  this->pTexture.Value = result;
  return result;
}

Scaleform::Render::Texture *__fastcall Scaleform::Render::ImageDelegate::GetTexture(
        Scaleform::Render::SubImage *this,
        Scaleform::Render::TextureManager *pm)
{
  return this->pImage.pObject->GetTexture(this->pImage.pObject, pm);
}

void __fastcall Scaleform::Render::Image::GetUVGenMatrix(
        Scaleform::Render::Image *this,
        Scaleform::Render::Matrix2x4<float> *mat,
        Scaleform::Render::TextureManager *manager)
{
  Scaleform::Render::Texture *v5; // rdi
  float v6; // xmm1_4
  int v7; // [rsp+20h] [rbp-78h] BYREF
  int v8; // [rsp+24h] [rbp-74h]
  Scaleform::Render::Matrix2x4<float> m1; // [rsp+30h] [rbp-68h] BYREF
  Scaleform::Render::Matrix2x4<float> m0; // [rsp+50h] [rbp-48h] BYREF

  v5 = this->GetTexture(this, manager);
  if ( v5 )
  {
    if ( this->GetMatrixInverse(this, &m0) )
    {
      v5->GetUVGenMatrix(v5, &m1);
      Scaleform::Render::Matrix2x4<float>::SetToAppend(mat, &m0, &m1);
    }
    else
    {
      v5->GetUVGenMatrix(v5, mat);
    }
    this->GetRect(this, (Scaleform::Render::Rect<unsigned long> *)&v7);
    v6 = (float)((float)((float)v8 * mat->M[0][1]) + (float)((float)v7 * mat->M[0][0])) + mat->M[0][3];
    mat->M[1][3] = (float)((float)((float)v7 * mat->M[1][0]) + (float)((float)v8 * mat->M[1][1])) + mat->M[1][3];
    mat->M[0][3] = v6;
  }
  else
  {
    *(_QWORD *)&mat->M[0][0] = 1065353216i64;
    *(_QWORD *)&mat->M[0][2] = 0i64;
    mat->M[1][0] = 0.0;
    mat->M[1][3] = 0.0;
    *(_QWORD *)&mat->M[1][1] = 1065353216i64;
  }
}

void __fastcall Scaleform::Render::Texture::GetUVGenMatrix(
        Scaleform::Render::Texture *this,
        Scaleform::Render::Matrix2x4<float> *mat)
{
  signed int Height; // eax

  Height = this->ImgSize.Height;
  mat->M[0][0] = 1.0 / (float)(int)this->ImgSize.Width;
  *(_OWORD *)&mat->M[0][1] = 0ui64;
  mat->M[1][1] = 1.0 / (float)Height;
  *(_QWORD *)&mat->M[1][2] = 0i64;
}

void __fastcall Scaleform::Render::Image::GetUVNormMatrix(
        Scaleform::Render::Image *this,
        Scaleform::Render::Matrix2x4<float> *mat,
        Scaleform::Render::TextureManager *manager)
{
  Scaleform::Render::Texture *v5; // rax
  Scaleform::Render::Texture *v6; // rsi
  float v7; // xmm1_4
  Scaleform::Render::Rect<unsigned long> *v8; // rax
  int v9; // [rsp+20h] [rbp-58h] BYREF
  int v10; // [rsp+24h] [rbp-54h]
  int v11; // [rsp+28h] [rbp-50h]
  int v12; // [rsp+2Ch] [rbp-4Ch]
  Scaleform::Render::Matrix2x4<float> m; // [rsp+30h] [rbp-48h] BYREF

  v5 = this->GetTexture(this, manager);
  v6 = v5;
  if ( v5 )
  {
    v5->GetUVGenMatrix(v5, mat);
    this->GetRect(this, (Scaleform::Render::Rect<unsigned long> *)&v9);
    if ( (v11 - v9 != v6->ImgSize.Width || v12 - v10 != v6->ImgSize.Height) && this->GetMatrixInverse(this, &m) )
      Scaleform::Render::Matrix2x4<float>::Prepend(mat, &m);
    v7 = (float)((float)((float)v10 * mat->M[0][1]) + (float)((float)v9 * mat->M[0][0])) + mat->M[0][3];
    mat->M[1][3] = (float)((float)((float)v9 * mat->M[1][0]) + (float)((float)v10 * mat->M[1][1])) + mat->M[1][3];
    mat->M[0][3] = v7;
  }
  else
  {
    *(_QWORD *)&mat->M[0][0] = 1065353216i64;
    *(_QWORD *)&mat->M[0][2] = 0i64;
    mat->M[1][0] = 0.0;
    mat->M[1][3] = 0.0;
    *(_QWORD *)&mat->M[1][1] = 1065353216i64;
  }
  v8 = this->GetRect(this, &v9);
  Scaleform::Render::Matrix2x4<float>::PrependScaling(mat, (float)(v8->x2 - v8->x1), (float)(v8->y2 - v8->y1));
}

__int64 __fastcall Scaleform::Render::RawImage::GetUse(Scaleform::Render::RawImage *this)
{
  return this->Data.Use;
}

__int64 __fastcall Scaleform::Render::SubImage::GetUse(Scaleform::Render::SubImage *this)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::Image *))this->pImage.pObject->GetUse)(this->pImage.pObject);
}

__int64 __fastcall AgDisplay::getVsyncEnabled(AgDisplay *this)
{
  return (unsigned int)this->m_vsync;
}

__int64 __fastcall Scaleform::Render::ImageSize_MipLevelCount(Scaleform::Render::Size<unsigned long> sz)
{
  __int64 result; // rax
  unsigned int v3; // edx
  unsigned int v4; // ecx
  int v5; // edx

  result = 1i64;
  if ( *(_DWORD *)sz.Width > 1u )
  {
    do
    {
      v3 = *(_DWORD *)(*(_QWORD *)&sz + 4i64);
      if ( v3 <= 1 )
        break;
      v4 = *(_DWORD *)sz.Width >> 1;
      if ( !v4 )
        v4 = 1;
      v5 = v3 >> 1;
      *(_DWORD *)sz.Width = v4;
      if ( !v5 )
        v5 = 1;
      result = (unsigned int)(result + 1);
      *(_DWORD *)(*(_QWORD *)&sz + 4i64) = v5;
    }
    while ( v4 > 1 );
  }
  return result;
}

Scaleform::Render::Size<unsigned long> *__fastcall Scaleform::Render::ImageSize_RoundUpPow2(
        Scaleform::Render::Size<unsigned long> *result,
        Scaleform::Render::Size<unsigned long> sz)
{
  unsigned int v2; // eax
  unsigned int v4; // er8
  unsigned int v5; // ecx

  v2 = 1;
  result->Width = 1;
  result->Height = 1;
  if ( *(_DWORD *)sz.Width > 1u )
  {
    v4 = 1;
    do
      v4 *= 2;
    while ( v4 < *(_DWORD *)sz.Width );
    result->Width = v4;
  }
  v5 = *(_DWORD *)(*(_QWORD *)&sz + 4i64);
  if ( v5 > 1 )
  {
    do
      v2 *= 2;
    while ( v2 < v5 );
    result->Height = v2;
  }
  return result;
}

void __fastcall Scaleform::Render::ImageData::Initialize(
        Scaleform::Render::ImageData *this,
        Scaleform::Render::ImageFormat format,
        unsigned int mipLevels,
        Scaleform::Render::ImagePlane *pplanes,
        unsigned int planeCount,
        bool separateMipmaps)
{
  unsigned __int8 v7; // di

  v7 = mipLevels;
  Scaleform::Render::ImageData::Clear(this);
  this->RawPlaneCount = planeCount;
  this->Format = format;
  this->LevelCount = v7;
  this->pPlanes = pplanes;
  if ( separateMipmaps )
    this->Flags |= 1u;
  if ( pplanes )
  {
    if ( planeCount == 1 )
    {
      this->Plane0.Width = pplanes->Width;
      this->Plane0.Height = pplanes->Height;
      this->Plane0.Pitch = pplanes->Pitch;
      this->Plane0.DataSize = pplanes->DataSize;
      this->Plane0.pData = pplanes->pData;
    }
  }
}

bool __fastcall Scaleform::Render::ImageData::Initialize(
        Scaleform::Render::ImageData *this,
        const Scaleform::Render::ImageData *source,
        unsigned int levelIndex,
        unsigned int levelCount)
{
  unsigned int v4; // esi
  Scaleform::Render::ImageFormat v8; // ebx
  bool result; // al
  unsigned int plane; // ebx
  Scaleform::Render::ImageFormat Format; // er10
  __int16 v12; // cx
  int v13; // edx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ebx
  bool separateMipmaps; // [rsp+28h] [rbp-10h]

  v4 = levelCount;
  if ( !levelCount )
    v4 = source->LevelCount - levelIndex;
  if ( !levelIndex || (source->Flags & 1) != 0 )
  {
    Format = source->Format;
    v12 = source->Format;
    v13 = 1;
    v14 = v12 & 0xFFF;
    if ( v14 )
    {
      v15 = v14 - 66;
      if ( v15 )
      {
        v16 = v15 - 134;
        if ( v16 )
        {
          if ( v16 == 1 )
            v17 = 4;
          else
            v17 = 1;
        }
        else
        {
          v17 = 3;
        }
      }
      else
      {
        v17 = 2;
      }
    }
    else
    {
      v17 = 0;
    }
    separateMipmaps = source->Flags & 1;
    if ( separateMipmaps )
      v13 = v4;
    Scaleform::Render::ImageData::Initialize(
      this,
      Format,
      v4,
      &source->pPlanes[levelIndex * v17],
      v17 * v13,
      separateMipmaps);
  }
  else
  {
    v8 = source->Format;
    Scaleform::Render::ImageData::Clear(this);
    result = Scaleform::Render::ImageData::allocPlanes(this, v8, v4, 0);
    if ( !result )
      return result;
    for ( plane = 0; plane < source->RawPlaneCount; ++plane )
      Scaleform::Render::ImagePlane::GetMipLevel(
        &source->pPlanes[plane],
        source->Format,
        levelIndex,
        &this->pPlanes[plane],
        plane);
  }
  return 1;
}

char __fastcall Scaleform::Render::Texture::Initialize(Scaleform::Render::Texture *this)
{
  Scaleform::Render::TextureManagerLocks *pObject; // r8
  __int64 v2; // r8

  pObject = this->pManagerLocks.pObject;
  if ( pObject )
    pObject = (Scaleform::Render::TextureManagerLocks *)pObject->pManager;
  v2 = *(_QWORD *)&pObject->ImageLock.csBuf[32];
  if ( this->State == State_Valid && v2 )
    (*(void (__fastcall **)(__int64, Scaleform::Render::Texture *))(*(_QWORD *)v2 + 24i64))(v2, this);
  return 1;
}

bool __fastcall Scaleform::Render::ImageSource::IsDecodeOnlyImageCompatible(
        Scaleform::Render::ImageSource *this,
        const Scaleform::Render::ImageCreateArgs *args)
{
  Scaleform::Render::TextureManager *pManager; // rbx
  Scaleform::Render::TextureManager_vtbl *v4; // rbx
  Scaleform::Render::ImageFormat v5; // eax
  __int16 v6; // ax
  bool result; // al

  pManager = args->pManager;
  result = (!pManager
         || (v4 = pManager->Scaleform::RefCountBase<Scaleform::Render::TextureManager,72>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,72>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable,
             v5 = this->GetFormat(this),
             v6 = v4->GetTextureUseCaps(args->pManager, v5),
             (args->Use & (unsigned __int8)~(_BYTE)v6 & 0xC0) != 0)
         || (v6 & 0x100) == 0
         || args->pManager->pTextureCache.pObject)
        && (args->Use & 0xC0) == 0;
  return result;
}

bool __fastcall Scaleform::Render::TextureManager::IsDrawableImageFormat(
        Scaleform::Render::TextureManager *this,
        Scaleform::Render::ImageFormat format)
{
  return format == Image_R8G8B8A8;
}

char __fastcall Scaleform::Render::BlendModeEffect::canCacheAcrossTransform(const bool __formal)
{
  return 1;
}

void __fastcall Scaleform::Render::Texture::LoseManager(Scaleform::Render::Texture *this)
{
  Scaleform::Render::TextureManagerLocks *pObject; // rbx
  _BOOL8 v3; // rdx
  Scaleform::Render::Texture *pPrev; // rcx
  Scaleform::Render::Texture *pNext; // rax
  Scaleform::Render::ImageBase *pImage; // rcx

  pObject = this->pManagerLocks.pObject;
  Scaleform::Lock::DoLock(&pObject->ImageLock);
  pPrev = this->pPrev;
  if ( pPrev != (Scaleform::Render::Texture *)-1i64 )
  {
    pNext = this->pNext;
    if ( pNext != (Scaleform::Render::Texture *)-1i64 )
    {
      pPrev->pNext = pNext;
      this->pNext->pPrev = this->pPrev;
      this->pPrev = (Scaleform::Render::Texture *)-1i64;
      this->pNext = (Scaleform::Render::Texture *)-1i64;
    }
  }
  LOBYTE(v3) = 1;
  this->ReleaseHWTextures(this, v3);
  pImage = this->pImage;
  this->State = State_Dead;
  this->pFormat = 0i64;
  if ( pImage )
  {
    this->pImage = 0i64;
    ((void (__fastcall *)(Scaleform::Render::ImageBase *, _QWORD))pImage->__vftable[2].Release)(pImage, 0i64);
  }
  Scaleform::Lock::Unlock(&pObject->ImageLock);
}

void __fastcall Scaleform::Render::Texture::LoseTextureData(Scaleform::Render::Texture *this)
{
  Scaleform::Render::ImageBase *pImage; // rcx
  Scaleform::Render::TextureManagerLocks *pObject; // rbx
  Scaleform::Render::ImageBase *v4; // rcx

  pImage = this->pImage;
  if ( pImage && pImage->GetImageType(pImage) == Type_DrawableImage )
    Scaleform::Render::DrawableImage::unmapTextureRT((Scaleform::Render::DrawableImage *)this->pImage);
  pObject = this->pManagerLocks.pObject;
  Scaleform::Lock::DoLock(&pObject->ImageLock);
  this->ReleaseHWTextures(this, 0);
  v4 = this->pImage;
  this->State = State_Lost;
  if ( v4 )
    ((void (__fastcall *)(Scaleform::Render::ImageBase *, __int64))v4->__vftable[2].Release)(v4, 1i64);
  Scaleform::Lock::Unlock(&pObject->ImageLock);
}

char __fastcall Scaleform::Render::RawImage::Map(
        Scaleform::Render::RawImage *this,
        Scaleform::Render::ImageData *pdata,
        unsigned int levelIndex,
        unsigned int levelCount)
{
  if ( !Scaleform::Render::ImageData::Initialize(pdata, &this->Data, levelIndex, levelCount) )
    return 0;
  this->Data.Flags |= 0x10u;
  return 1;
}

bool __fastcall Scaleform::GFx::InteractiveObject::OnCharEvent(
        Scaleform::Render::Texture *this,
        Scaleform::Render::RenderTargetData *__formal)
{
  return 0;
}

bool __fastcall Scaleform::Render::Texture::Map(
        Scaleform::Render::Texture *this,
        Scaleform::Render::ImageData *pdata,
        __int64 mipLevel,
        unsigned int levelCount)
{
  unsigned int v4; // ebp
  Scaleform::Render::TextureManagerLocks *pObject; // rax
  Scaleform::Render::TextureManager *pManager; // rcx
  __int64 v9; // rax
  Scaleform::Render::MappedTextureBase *pMap; // rax
  int RawPlaneCount; // er15
  Scaleform::Render::ImagePlane *pPlanes; // r14
  Scaleform::Render::ImageFormat v13; // ebx

  v4 = levelCount;
  if ( !levelCount )
    v4 = this->MipLevels - (_DWORD)mipLevel;
  pObject = this->pManagerLocks.pObject;
  if ( pObject )
    pManager = pObject->pManager;
  else
    pManager = 0i64;
  v9 = (__int64)pManager->mapTexture(pManager, this, mipLevel, v4);
  if ( v9 )
  {
    pMap = this->pMap;
    RawPlaneCount = pMap->Data.RawPlaneCount;
    pPlanes = pMap->Data.pPlanes;
    v13 = this->GetImageFormat(this);
    Scaleform::Render::ImageData::Clear(pdata);
    pdata->Flags |= 1u;
    pdata->Format = v13;
    pdata->LevelCount = v4;
    pdata->pPlanes = pPlanes;
    pdata->RawPlaneCount = RawPlaneCount;
    if ( pPlanes && RawPlaneCount == 1 )
    {
      pdata->Plane0.Width = pPlanes->Width;
      pdata->Plane0.Height = pPlanes->Height;
      pdata->Plane0.Pitch = pPlanes->Pitch;
      pdata->Plane0.DataSize = pPlanes->DataSize;
      pdata->Plane0.pData = pPlanes->pData;
    }
    pdata->Use = this->Use;
    LOBYTE(v9) = 1;
  }
  return v9;
}

__int64 __fastcall Scaleform::Render::TextureImage::Map(
        Scaleform::Render::TextureImage *this,
        Scaleform::Render::ImageData *pdata,
        __int64 mipLevel,
        __int64 levelCount)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::Texture *volatile, Scaleform::Render::ImageData *, __int64, __int64))this->pTexture.Value->Map)(
           this->pTexture.Value,
           pdata,
           mipLevel,
           levelCount);
}

Scaleform::Render::Matrix2x4<float> *__fastcall Scaleform::Render::Matrix2x4<float>::PrependScaling(
        Scaleform::Render::Matrix2x4<float> *this,
        float sx,
        float sy)
{
  float v3; // xmm10_4
  float v4; // xmm11_4
  float v5; // xmm6_4
  float v6; // xmm4_4
  float v7; // xmm5_4
  float v8; // xmm3_4
  float v9; // xmm0_4
  float v10; // xmm10_4
  Scaleform::Render::Matrix2x4<float> *result; // rax

  v3 = this->M[1][0];
  v4 = this->M[0][0] * 0.0;
  v5 = this->M[0][1] * 0.0;
  v6 = this->M[1][1] * 0.0;
  v7 = this->M[1][1] * sy;
  v8 = (float)(this->M[0][1] * sy) + v4;
  this->M[0][0] = (float)(this->M[0][0] * sx) + v5;
  v9 = v3;
  v10 = v3 * 0.0;
  this->M[1][2] = 0.0;
  this->M[0][2] = 0.0;
  result = this;
  this->M[0][1] = v8;
  this->M[1][1] = v7 + v10;
  this->M[1][0] = (float)(v9 * sx) + v6;
  this->M[0][3] = (float)(v4 + v5) + this->M[0][3];
  this->M[1][3] = (float)(v10 + v6) + this->M[1][3];
  return result;
}

void __fastcall Scaleform::Render::TextureManager::ProcessQueues(Scaleform::Render::TextureManager *this)
{
  Scaleform::Render::TextureManagerLocks *pObject; // rbx

  pObject = this->pLocks.pObject;
  Scaleform::Mutex::DoLock(&pObject->TextureMutex);
  this->processTextureKillList(this);
  this->processInitTextures(this);
  Scaleform::Render::ImageUpdateQueue::ProcessUpdates(&this->ImageUpdates, this);
  Scaleform::Mutex::Unlock(&pObject->TextureMutex);
}

void __fastcall Scaleform::Render::ImageUpdateQueue::ProcessUpdates(
        Scaleform::Render::ImageUpdateQueue *this,
        Scaleform::Render::TextureManager *pmanager)
{
  unsigned int v3; // esi
  __int64 v5; // rax
  Scaleform::RefCountVImpl *v6; // rbx
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 Capacity; // rax
  unsigned __int64 *v10; // rax
  int v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( this->Queue.Data.Size )
  {
    v5 = 0i64;
    do
    {
      v6 = (Scaleform::RefCountVImpl *)this->Queue.Data.Data[v5];
      if ( ((unsigned __int8)v6 & 1) != 0 )
      {
        v7 = (unsigned __int64)v6 & 0xFFFFFFFFFFFFFFFEui64;
        v8 = (*(__int64 (__fastcall **)(unsigned __int64, Scaleform::Render::TextureManager *))(*(_QWORD *)v7 + 168i64))(
               v7,
               pmanager);
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 144i64))(v8);
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v7 + 16i64))(v7);
      }
      else
      {
        ((void (__fastcall *)(Scaleform::RefCountVImpl *, Scaleform::Render::TextureManager *))v6->AddRef)(v6, pmanager);
        Scaleform::RefCountImpl::Release(v6);
      }
      v5 = ++v3;
    }
    while ( v3 < this->Queue.Data.Size );
  }
  if ( this->Queue.Data.Size )
  {
    Capacity = this->Queue.Data.Policy.Capacity;
    if ( (Capacity & 0xFFFFFFFFFFFFFFFEui64) != 0 )
    {
      if ( Capacity )
      {
        if ( this->Queue.Data.Data )
        {
          v10 = (unsigned __int64 *)Scaleform::Memory::pGlobalHeap->Realloc(
                                      Scaleform::Memory::pGlobalHeap,
                                      this->Queue.Data.Data,
                                      32i64);
        }
        else
        {
          v11 = 72;
          v10 = (unsigned __int64 *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                      Scaleform::Memory::pGlobalHeap,
                                      this,
                                      32i64,
                                      &v11);
        }
        this->Queue.Data.Data = v10;
        this->Queue.Data.Policy.Capacity = 4i64;
      }
    }
  }
  this->Queue.Data.Size = 0i64;
}

void __fastcall Scaleform::Render::Texture::ReleaseHWTextures(Scaleform::Render::Texture *this, bool __formal)
{
  Scaleform::Render::TextureManagerLocks *pObject; // rcx
  __int64 v4; // rcx

  pObject = this->pManagerLocks.pObject;
  if ( pObject )
    pObject = (Scaleform::Render::TextureManagerLocks *)pObject->pManager;
  v4 = *(_QWORD *)&pObject->ImageLock.csBuf[32];
  if ( v4 )
    (*(void (__fastcall **)(__int64, Scaleform::Render::Texture *))(*(_QWORD *)v4 + 48i64))(v4, this);
}

void __fastcall Scaleform::ArrayDataBase<unsigned __int64,Scaleform::AllocatorLH<unsigned __int64,72>,Scaleform::ArrayConstPolicy<4,4,0>>::Reserve(
        Scaleform::ArrayDataBase<unsigned __int64,Scaleform::AllocatorLH<unsigned __int64,72>,Scaleform::ArrayConstPolicy<4,4,0> > *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  unsigned __int64 *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r8
  unsigned __int64 *v9; // rax
  int v10; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    v6 = 4i64;
    if ( newCapacity >= 4 )
      v6 = newCapacity;
    v7 = (v6 + 3) & 0xFFFFFFFFFFFFFFFCui64;
    v8 = 8 * v7;
    if ( Data )
    {
      v9 = (unsigned __int64 *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, Data, v8);
      this->Policy.Capacity = v7;
      this->Data = v9;
    }
    else
    {
      v10 = 72;
      this->Data = (unsigned __int64 *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                         Scaleform::Memory::pGlobalHeap,
                                         pheapAddr,
                                         v8,
                                         &v10);
      this->Policy.Capacity = v7;
    }
  }
}

void __fastcall Scaleform::Render::TextureManager::Reset(Scaleform::Render::TextureManager *this)
{
  Scaleform::Render::TextureManagerLocks *pObject; // rbx
  unsigned __int64 *p_Size; // rbp

  pObject = this->pLocks.pObject;
  Scaleform::Mutex::DoLock(&pObject->TextureMutex);
  p_Size = &this->TextureFormats.Data.Size;
  if ( this == (Scaleform::Render::TextureManager *)-144i64 )
    p_Size = 0i64;
  while ( (unsigned __int64 *)this->Textures.Root.pNext != p_Size )
    this->Textures.Root.pNext->LoseManager(this->Textures.Root.pNext);
  this->processTextureKillList(this);
  Scaleform::Mutex::Unlock(&pObject->TextureMutex);
}

void __fastcall Scaleform::Render::Image::SetMatrix(
        Scaleform::Render::Image *this,
        const Scaleform::Render::Matrix2x4<float> *mat,
        Scaleform::MemoryHeap *heap)
{
  Scaleform::MemoryHeap *v3; // rax
  float *pInverseMatrix; // rcx
  Scaleform::Render::Matrix2x4<float> *v7; // rcx
  Scaleform::Render::Matrix2x4<float> m; // [rsp+20h] [rbp-28h] BYREF

  v3 = heap;
  if ( !this->pInverseMatrix )
  {
    if ( !heap )
      v3 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
    this->pInverseMatrix = (Scaleform::Render::Matrix2x4<float> *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64, __int64))v3->Alloc)(
                                                                    v3,
                                                                    32i64,
                                                                    16i64);
  }
  pInverseMatrix = (float *)this->pInverseMatrix;
  *pInverseMatrix = mat->M[0][0];
  pInverseMatrix[1] = mat->M[0][1];
  pInverseMatrix[2] = mat->M[0][2];
  pInverseMatrix[3] = mat->M[0][3];
  pInverseMatrix[4] = mat->M[1][0];
  pInverseMatrix[5] = mat->M[1][1];
  pInverseMatrix[6] = mat->M[1][2];
  pInverseMatrix[7] = mat->M[1][3];
  v7 = this->pInverseMatrix;
  m = *v7;
  Scaleform::Render::Matrix2x4<float>::SetInverse(v7, &m);
}

void __fastcall Scaleform::Render::Image::SetMatrixInverse(
        Scaleform::Render::Image *this,
        const Scaleform::Render::Matrix2x4<float> *mat,
        Scaleform::MemoryHeap *heap)
{
  Scaleform::MemoryHeap *v3; // rax
  float *pInverseMatrix; // rcx

  v3 = heap;
  if ( !this->pInverseMatrix )
  {
    if ( !heap )
      v3 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
    this->pInverseMatrix = (Scaleform::Render::Matrix2x4<float> *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64, __int64))v3->Alloc)(
                                                                    v3,
                                                                    32i64,
                                                                    16i64);
  }
  pInverseMatrix = (float *)this->pInverseMatrix;
  *pInverseMatrix = mat->M[0][0];
  pInverseMatrix[1] = mat->M[0][1];
  pInverseMatrix[2] = mat->M[0][2];
  pInverseMatrix[3] = mat->M[0][3];
  pInverseMatrix[4] = mat->M[1][0];
  pInverseMatrix[5] = mat->M[1][1];
  pInverseMatrix[6] = mat->M[1][2];
  pInverseMatrix[7] = mat->M[1][3];
}

void __fastcall Scaleform::Render::ImageData::SetPixelInScanline(
        Scaleform::Render::ImageData *this,
        unsigned __int8 *pline,
        unsigned int x,
        unsigned int color)
{
  signed __int32 v4; // er10
  signed __int32 v5; // er10
  signed __int32 v6; // er10
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx

  v4 = this->Format & 0xFFEFFFFF;
  if ( v4 > 4 )
  {
    if ( v4 == 9 )
    {
      pline[x] = HIBYTE(color);
    }
    else if ( v4 == 12289 )
    {
      v11 = 4 * x;
      pline[v11] = HIBYTE(color);
      pline[v11 + 1] = BYTE2(color);
      pline[v11 + 2] = BYTE1(color);
      pline[v11 + 3] = color;
    }
  }
  else if ( v4 == 4 )
  {
    v10 = 3 * x;
    pline[v10] = color;
    pline[v10 + 2] = BYTE2(color);
    pline[v10 + 1] = BYTE1(color);
  }
  else
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 == 1 )
        {
          v7 = 3 * x;
          pline[v7] = BYTE2(color);
          pline[v7 + 1] = BYTE1(color);
          pline[v7 + 2] = color;
        }
      }
      else
      {
        v8 = 4 * x;
        *(_DWORD *)&pline[v8] = color;
      }
    }
    else
    {
      v9 = 4 * x;
      pline[v9] = BYTE2(color);
      pline[v9 + 2] = color;
      pline[v9 + 3] = HIBYTE(color);
      pline[v9 + 1] = BYTE1(color);
    }
  }
}

void __fastcall Scaleform::Render::ImageSwizzler::SetPixelInScanline(
        Scaleform::Render::ImageSwizzler *this,
        Scaleform::Render::ImageSwizzlerContext *ctx,
        unsigned int x,
        unsigned int c)
{
  Scaleform::Render::ImageData::SetPixelInScanline(ctx->pImage, ctx->pCurrentScanline, x, c);
}

void __fastcall Scaleform::Render::ImageSwizzler::SetPixelInScanline(
        Scaleform::Render::ImageSwizzler *this,
        Scaleform::Render::ImageSwizzlerContext *ctx,
        __int64 x,
        unsigned int *c)
{
  this->SetPixelInScanline(this, ctx, x, *c);
}

void __fastcall Scaleform::Render::ImageDelegate::TextureLost(Scaleform::Render::SubImage *this, __int64 reason)
{
  this->pImage.pObject->TextureLost(this->pImage.pObject, (Scaleform::Render::Image::TextureLossReason)reason);
}

void __fastcall Scaleform::Render::TextureImage::TextureLost(Scaleform::Render::Image *this)
{
  __int64 v1; // rax
  Scaleform::RefCountVImpl *v2; // rbx

  v1 = Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync((volatile __int64 *)&this->pTexture, 0i64);
  v2 = (Scaleform::RefCountVImpl *)v1;
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 64i64))(v1);
    Scaleform::RefCountImpl::Release(v2);
  }
}

void __fastcall Scaleform::Render::MappedTextureBase::Unmap(Scaleform::Render::MappedTextureBase *this, bool __formal)
{
  this->pTexture->pMap = 0i64;
  this->pTexture = 0i64;
  *(_QWORD *)&this->StartMipLevel = 0i64;
}

char __fastcall Scaleform::Render::RawImage::Unmap(Scaleform::Render::RawImage *this)
{
  this->Data.Flags &= ~0x10u;
  return 1;
}

char __fastcall Scaleform::Render::Texture::Unmap(Scaleform::Render::Texture *this, __int64 a2, _BOOL8 a3)
{
  Scaleform::Render::TextureManagerLocks *pObject; // rax
  Scaleform::Render::TextureManager *pManager; // r9

  if ( !this->pMap )
    return 0;
  pObject = this->pManagerLocks.pObject;
  if ( pObject )
    pManager = pObject->pManager;
  else
    pManager = 0i64;
  LOBYTE(a3) = 1;
  pManager->unmapTexture(pManager, this, a3);
  return 1;
}

__int64 __fastcall Scaleform::Render::TextureImage::Unmap(Scaleform::Render::TextureImage *this)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::Texture *volatile))this->pTexture.Value->Unmap)(this->pTexture.Value);
}

__int64 __fastcall Scaleform::Render::Texture::Update(Scaleform::Render::Texture *this)
{
  Scaleform::Render::ImageFormat v2; // eax
  Scaleform::Render::TextureManagerLocks *pObject; // rcx
  Scaleform::Render::ImageFormat v4; // esi
  unsigned __int8 TextureFlags; // r12
  bool v6; // r13
  bool v7; // r12
  bool v8; // zf
  Scaleform::Render::ImageData *v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rbx
  Scaleform::Render::ImageFormat v12; // eax
  Scaleform::Lock *v13; // rsi
  Scaleform::Render::ImageBase *pImage; // rcx
  Scaleform::Render::Image *v15; // rax
  __int64 v16; // r14
  Scaleform::Render::MappedTextureBase *pMap; // rax
  Scaleform::Render::ImageData *p_Data; // rax
  Scaleform::Render::RawImage *v19; // rax
  void (__fastcall *v20)(unsigned __int8 *, const unsigned __int8 *, unsigned __int64, Scaleform::Render::Palette *); // rax
  const Scaleform::Render::Size<unsigned long> *v21; // rax
  Scaleform::Render::RawImage *v22; // rax
  Scaleform::Render::ResizeImageType ImageFormatRescaleType; // eax
  Scaleform::Render::ImageData *v24; // r12
  _BOOL8 v25; // r8
  const Scaleform::Render::Size<unsigned long> *v26; // rax
  void (__fastcall *v27)(unsigned __int8 *, const unsigned __int8 *, unsigned __int64, Scaleform::Render::Palette *, void *); // rax
  unsigned int v28; // eax
  unsigned int v29; // er13
  Scaleform::Render::ImageFormat v30; // ebx
  unsigned int RawPlaneCount; // ecx
  __int64 v32; // rcx
  unsigned int Width; // er14
  unsigned int Height; // esi
  unsigned int v35; // er14
  unsigned int v36; // esi
  Scaleform::Render::Texture_vtbl *v37; // rax
  unsigned int v38; // er12
  Scaleform::Render::ImageData *v39; // rdi
  Scaleform::Render::MappedTextureBase *v40; // r8
  int v41; // eax
  unsigned int v42; // ecx
  unsigned int v43; // eax
  unsigned int v44; // er14
  unsigned int v45; // esi
  Scaleform::Render::Palette *v46; // r14
  void (__fastcall *v47)(unsigned __int8 *, const unsigned __int8 *, unsigned __int64, Scaleform::Render::Palette *, void *); // rax
  unsigned int MipLevels; // eax
  Scaleform::Render::Palette *v49; // rbx
  Scaleform::Render::Palette *v50; // rbx
  char v52[4]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int FormatPlaneCount; // [rsp+44h] [rbp-BCh]
  Scaleform::Render::ImageData *src; // [rsp+48h] [rbp-B8h]
  unsigned int mipLevelCount; // [rsp+50h] [rbp-B0h]
  Scaleform::Render::ImageFormat format; // [rsp+54h] [rbp-ACh] BYREF
  Scaleform::Render::ImageFormat fmt; // [rsp+58h] [rbp-A8h]
  Scaleform::Render::TextureManager *pManager; // [rsp+60h] [rbp-A0h]
  Scaleform::Render::ResizeImageType resizeType; // [rsp+68h] [rbp-98h] BYREF
  Scaleform::Render::ImagePlane pplane; // [rsp+70h] [rbp-90h] BYREF
  Scaleform::Render::ImagePlane p; // [rsp+90h] [rbp-70h] BYREF
  void *v62; // [rsp+B0h] [rbp-50h]
  Scaleform::Render::RawImage *v63; // [rsp+B8h] [rbp-48h]
  Scaleform::Lock *p_ImageLock; // [rsp+C0h] [rbp-40h]
  Scaleform::Render::ImageData v65; // [rsp+D0h] [rbp-30h] BYREF
  Scaleform::Render::ImageData v66; // [rsp+110h] [rbp+10h] BYREF
  char v67[8]; // [rsp+150h] [rbp+50h] BYREF
  char v68[8]; // [rsp+158h] [rbp+58h] BYREF
  Scaleform::Render::ImagePlane dplane; // [rsp+160h] [rbp+60h] BYREF
  __int64 v70; // [rsp+180h] [rbp+80h]
  __int64 v71; // [rsp+188h] [rbp+88h]
  unsigned int v72; // [rsp+190h] [rbp+90h]

  v2 = this->GetImageFormat(this);
  pObject = this->pManagerLocks.pObject;
  fmt = v2;
  v4 = v2;
  if ( pObject )
    pManager = pObject->pManager;
  else
    pManager = 0i64;
  TextureFlags = this->TextureFlags;
  v65.pPlanes = &v65.Plane0;
  v6 = (TextureFlags & 2) != 0;
  v52[0] = 0;
  v7 = TextureFlags & 1;
  *(_QWORD *)&v65.Format = 0i64;
  v8 = (this->Use & 2) == 0;
  v9 = 0i64;
  *(_DWORD *)&v65.Flags = 0x10000;
  memset(&v65.pPalette, 0, 40);
  v10 = 0i64;
  v11 = 0i64;
  *(_QWORD *)&v66.Format = 0i64;
  *(_DWORD *)&v66.Flags = 0x10000;
  v66.pPlanes = &v66.Plane0;
  memset(&v66.pPalette, 0, 40);
  v63 = 0i64;
  v62 = 0i64;
  if ( v8 )
    mipLevelCount = this->MipLevels;
  else
    mipLevelCount = 1;
  v12 = ((unsigned int (__fastcall *)(Scaleform::Render::Texture *, _QWORD))this->GetImageFormat)(this, 0i64);
  resizeType = ResizeNone;
  format = v12;
  this->computeUpdateConvertRescaleFlags(this, v7, v6, v4, &resizeType, &format, (bool *)v52);
  p_ImageLock = &this->pManagerLocks.pObject->ImageLock;
  v13 = p_ImageLock;
  Scaleform::Lock::DoLock(p_ImageLock);
  pImage = this->pImage;
  if ( !pImage || (this->TextureFlags & 4) != 0 )
    goto LABEL_88;
  if ( pImage->GetImageType(pImage) != Type_RawImage )
  {
    if ( v7 )
      goto LABEL_23;
    goto LABEL_18;
  }
  if ( !v7 )
  {
LABEL_18:
    if ( !v52[0] && pManager->isScanlineCompatible(pManager, this->pFormat) )
    {
      if ( pManager->mapTexture(pManager, this) )
      {
        pMap = this->pMap;
        if ( pMap )
        {
          p_Data = &pMap->Data;
          goto LABEL_25;
        }
      }
    }
LABEL_23:
    v19 = Scaleform::Render::RawImage::Create(format, mipLevelCount, &this->ImgSize, 0, 0i64, 0i64);
    v63 = v19;
    v10 = (__int64)v19;
    if ( !v19 )
      goto LABEL_88;
    Scaleform::Render::ImageData::operator=(&v65, &v19->Data);
    v65.Format = fmt | 0x100000;
    p_Data = &v65;
LABEL_25:
    src = p_Data;
    if ( v52[0] )
      v20 = Scaleform::Render::ImageBase::CopyScanlineDefault;
    else
      v20 = (void (__fastcall *)(unsigned __int8 *, const unsigned __int8 *, unsigned __int64, Scaleform::Render::Palette *))this->pFormat->GetScanlineCopyFn(this->pFormat);
    if ( !this->pImage->Decode(
            this->pImage,
            src,
            (void (__fastcall *)(unsigned __int8 *, const unsigned __int8 *, unsigned __int64, Scaleform::Render::Palette *, void *))v20,
            0i64) )
    {
      if ( src == &this->pMap->Data )
        pManager->unmapTexture(pManager, this, 0);
      goto LABEL_87;
    }
    goto LABEL_12;
  }
  v15 = this->pImage->GetAsImage(this->pImage);
  Scaleform::Render::ImageData::operator=(&v65, (const Scaleform::Render::ImageData *)&v15[1]);
  src = &v65;
LABEL_12:
  if ( v7 )
  {
    if ( !v52[0]
      && (v16 = (__int64)pManager, pManager->isScanlineCompatible(pManager, this->pFormat))
      && (*(__int64 (__fastcall **)(__int64, Scaleform::Render::Texture *))(*(_QWORD *)v16 + 176i64))(v16, this) )
    {
      v9 = &this->pMap->Data;
    }
    else
    {
      v21 = this->GetTextureSize(this, v67, 0i64);
      v22 = Scaleform::Render::RawImage::Create(format, mipLevelCount, v21, 0, 0i64, 0i64);
      v62 = v22;
      v11 = (__int64)v22;
      if ( !v22 )
      {
        LOBYTE(v9) = 0;
        goto LABEL_88;
      }
      Scaleform::Render::ImageData::operator=(&v66, &v22->Data);
      v9 = &v66;
    }
    ImageFormatRescaleType = resizeType;
    if ( resizeType == ResizeNone )
    {
      ImageFormatRescaleType = Scaleform::Render::GetImageFormatRescaleType(fmt);
      resizeType = ImageFormatRescaleType;
    }
    Scaleform::Render::RescaleImageData(v9, src, ImageFormatRescaleType);
    v24 = v9;
    src = v9;
  }
  else
  {
    v24 = src;
  }
  FormatPlaneCount = Scaleform::Render::ImageData::GetFormatPlaneCount(fmt);
  if ( !v52[0] && pManager->isScanlineCompatible(pManager, this->pFormat) )
    goto LABEL_49;
  if ( !pManager->isScanlineCompatible(pManager, this->pFormat) )
  {
    v28 = FormatPlaneCount;
    v35 = 0;
    if ( !FormatPlaneCount )
    {
LABEL_50:
      if ( v6 )
      {
        v29 = 0;
        if ( v28 )
        {
          v30 = fmt;
          do
          {
            RawPlaneCount = v24->RawPlaneCount;
            memset(&p, 0, sizeof(p));
            memset(&pplane, 0, sizeof(pplane));
            if ( v29 >= RawPlaneCount )
            {
              Scaleform::Render::ImagePlane::GetMipLevel(
                &v24->pPlanes[v29 % RawPlaneCount],
                v24->Format,
                v29 / RawPlaneCount,
                &p,
                v29 % RawPlaneCount);
              Height = p.Height;
              Width = p.Width;
            }
            else
            {
              v32 = (__int64)&v24->pPlanes[v29];
              Width = *(_DWORD *)v32;
              p.Width = *(_DWORD *)v32;
              Height = *(_DWORD *)(v32 + 4);
              p.Height = Height;
              p.Pitch = *(_QWORD *)(v32 + 8);
              p.DataSize = *(_QWORD *)(v32 + 16);
              p.pData = *(unsigned __int8 **)(v32 + 24);
            }
            v38 = 1;
            if ( this->MipLevels > 1u )
            {
              v39 = src;
              do
              {
                v40 = this->pMap;
                if ( (v40->Data.Format & 0xFFF) != 0 )
                {
                  switch ( v40->Data.Format & 0xFFF )
                  {
                    case 66:
                      v41 = 2;
                      break;
                    case 200:
                      v41 = 3;
                      break;
                    case 201:
                      v41 = 4;
                      break;
                    default:
                      v41 = 1;
                      break;
                  }
                }
                else
                {
                  v41 = 0;
                }
                v42 = v40->Data.RawPlaneCount;
                v43 = v29 + v38 * v41;
                if ( v43 >= v42 )
                  Scaleform::Render::ImagePlane::GetMipLevel(
                    &v40->Data.pPlanes[v43 % v42],
                    v40->Data.Format,
                    v43 / v42,
                    &pplane,
                    v43 % v42);
                else
                  pplane = v40->Data.pPlanes[v43];
                if ( v52[0] )
                {
                  v44 = Width >> 1;
                  dplane.Pitch = p.Pitch;
                  if ( !v44 )
                    v44 = 1;
                  dplane.DataSize = p.DataSize;
                  v45 = Height >> 1;
                  dplane.pData = p.pData;
                  dplane.Width = v44;
                  if ( !v45 )
                    v45 = 1;
                  dplane.Height = v45;
                  Scaleform::Render::GenerateMipLevel(&dplane, &p, v30, v29);
                  v46 = v39->pPalette.pObject;
                  v47 = this->pFormat->GetScanlineCopyFn(this->pFormat);
                  Scaleform::Render::ConvertImagePlane(&pplane, &dplane, v30, v29, v47, v46, 0i64);
                  Width = dplane.Width;
                  Height = dplane.Height;
                }
                else
                {
                  Scaleform::Render::GenerateMipLevel(&pplane, &p, v30, v29);
                  Width = pplane.Width;
                  Height = pplane.Height;
                  p.Pitch = pplane.Pitch;
                  p.DataSize = pplane.DataSize;
                  p.pData = pplane.pData;
                }
                MipLevels = this->MipLevels;
                ++v38;
                p.Height = Height;
                p.Width = Width;
              }
              while ( v38 < MipLevels );
            }
            v24 = src;
            ++v29;
          }
          while ( v29 < FormatPlaneCount );
          v11 = (__int64)v62;
          v10 = (__int64)v63;
          v13 = p_ImageLock;
        }
      }
      if ( v24 == &this->pMap->Data )
      {
        LOBYTE(v25) = 1;
        pManager->unmapTexture(pManager, this, v25);
      }
      else
      {
        this->uploadImage(this, v24);
      }
LABEL_87:
      LOBYTE(v9) = 1;
      goto LABEL_88;
    }
    v36 = FormatPlaneCount;
    do
    {
      memset(&pplane, 0, sizeof(pplane));
      memset(&dplane, 0, sizeof(dplane));
      v70 = 0i64;
      v71 = 0i64;
      Scaleform::Render::ImageData::GetMipLevelPlane(v24, 0, v35, &pplane);
      dplane.Pitch = pplane.Pitch;
      dplane.DataSize = pplane.DataSize;
      dplane.pData = pplane.pData;
      v70 = 0i64;
      v37 = this->__vftable;
      *(_QWORD *)&dplane.Width = *(_QWORD *)&pplane.Width;
      v71 = *(_QWORD *)&pplane.Width;
      v72 = v35;
      ((void (__fastcall *)(Scaleform::Render::Texture *, Scaleform::Render::ImagePlane *, __int64))v37->Update)(
        this,
        &dplane,
        1i64);
      ++v35;
    }
    while ( v35 < v36 );
    v13 = p_ImageLock;
LABEL_49:
    v28 = FormatPlaneCount;
    goto LABEL_50;
  }
  if ( pManager->mapTexture(pManager, this) )
  {
    v9 = &this->pMap->Data;
LABEL_48:
    v27 = this->pFormat->GetScanlineCopyFn(this->pFormat);
    Scaleform::Render::ConvertImageData(v9, v24, v27, 0i64);
    v24 = v9;
    src = v9;
    goto LABEL_49;
  }
  if ( v9 )
    goto LABEL_48;
  v26 = this->GetTextureSize(this, v68, 0i64);
  v9 = (Scaleform::Render::ImageData *)Scaleform::Render::RawImage::Create(format, mipLevelCount, v26, 0, 0i64, 0i64);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16i64))(v11);
  v11 = (__int64)v9;
  v62 = v9;
  if ( v9 )
  {
    Scaleform::Render::ImageData::operator=(&v66, (const Scaleform::Render::ImageData *)&v9->Plane0.Pitch);
    v9 = &v66;
    goto LABEL_48;
  }
LABEL_88:
  Scaleform::Lock::Unlock(v13);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16i64))(v11);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16i64))(v10);
  if ( (v66.Flags & 2) != 0 )
  {
    v66.Flags &= ~2u;
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v66.pPlanes);
  }
  v49 = v66.pPalette.pObject;
  v66.pPlanes = &v66.Plane0;
  if ( v66.pPalette.pObject
    && (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&v66.pPalette.pObject->RefCount.Value, -1) == 1 )
  {
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v49);
  }
  if ( (v65.Flags & 2) != 0 )
  {
    v65.Flags &= ~2u;
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v65.pPlanes);
  }
  v50 = v65.pPalette.pObject;
  v65.pPlanes = &v65.Plane0;
  if ( v65.pPalette.pObject
    && (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&v65.pPalette.pObject->RefCount.Value, -1) == 1 )
  {
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v50);
  }
  return (unsigned __int8)v9;
}

void __fastcall Scaleform::Render::TextureManager::UpdateImage(
        Scaleform::Render::TextureManager *this,
        Scaleform::Render::Image *pimage)
{
  Scaleform::Render::RenderSync *pObject; // rbx

  pObject = this->pRenderSync.pObject;
  Scaleform::Mutex::DoLock((Scaleform::Mutex *)&pObject->FenceImplAlloc);
  Scaleform::Render::ImageUpdateQueue::Add((Scaleform::Render::ImageUpdateQueue *)&this->pMemoryManager, pimage);
  Scaleform::Mutex::Unlock((Scaleform::Mutex *)&pObject->FenceImplAlloc);
}

void __fastcall Scaleform::Render::TextureManager::UpdateImage(
        Scaleform::Render::TextureManager *this,
        Scaleform::Render::ImageUpdate *pupdate)
{
  Scaleform::Render::RenderSync *pObject; // rbx

  pObject = this->pRenderSync.pObject;
  Scaleform::Mutex::DoLock((Scaleform::Mutex *)&pObject->FenceImplAlloc);
  Scaleform::Render::ImageUpdateQueue::Add((Scaleform::Render::ImageUpdateQueue *)&this->pMemoryManager, pupdate);
  Scaleform::Mutex::Unlock((Scaleform::Mutex *)&pObject->FenceImplAlloc);
}

char __fastcall Scaleform::Render::ImageData::allocPlanes(
        Scaleform::Render::ImageData *this,
        Scaleform::Render::ImageFormat format,
        unsigned int mipLevelCount,
        bool separateMipmaps)
{
  unsigned __int8 v6; // r14
  int v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // edi
  Scaleform::MemoryHeap *v11; // rcx
  Scaleform::Render::ImagePlane *v12; // rax

  v6 = mipLevelCount;
  if ( (format & 0xFFF) != 0 )
  {
    switch ( format & 0xFFF )
    {
      case 66:
        v8 = 2;
        break;
      case 200:
        v8 = 3;
        break;
      case 201:
        v8 = 4;
        break;
      default:
        v8 = 1;
        break;
    }
  }
  else
  {
    v8 = 0;
  }
  v9 = 1;
  if ( separateMipmaps )
    v9 = mipLevelCount;
  v10 = v8 * v9;
  if ( v10 > 1 )
  {
    v11 = Scaleform::Memory::pGlobalHeap;
    if ( (this->Flags & 4) != 0 )
      v11 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
    v12 = (Scaleform::Render::ImagePlane *)v11->Alloc(v11, 32i64 * v10, 0i64);
    this->pPlanes = v12;
    if ( !v12 )
    {
      this->RawPlaneCount = 1;
      this->pPlanes = &this->Plane0;
      return 0;
    }
    memset(v12, 0, 32i64 * v10);
    this->Flags |= 2u;
  }
  this->Format = format;
  this->RawPlaneCount = v10;
  this->LevelCount = v6;
  if ( separateMipmaps )
    this->Flags |= 1u;
  return 1;
}

void __fastcall Scaleform::Render::RawImage::freeData(Scaleform::Render::RawImage *this)
{
  unsigned int i; // ebx
  __int64 v3; // rdi

  for ( i = 0; i < this->Data.RawPlaneCount; ++i )
  {
    v3 = i;
    if ( this->Data.pPlanes[v3].pData )
    {
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      this->Data.pPlanes[v3].pData = 0i64;
    }
  }
}

void __fastcall Scaleform::Render::ImageData::freePlanes(Scaleform::Render::ImageData *this)
{
  unsigned __int8 Flags; // al
  Scaleform::Render::ImagePlane *pPlanes; // rdx

  Flags = this->Flags;
  if ( (Flags & 2) != 0 )
  {
    pPlanes = this->pPlanes;
    this->Flags = Flags & 0xFD;
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pPlanes);
    this->pPlanes = &this->Plane0;
  }
  else
  {
    this->pPlanes = &this->Plane0;
  }
}

Scaleform::Render::TextureFormat *__fastcall Scaleform::Render::TextureManager::getTextureFormat(
        Scaleform::Render::TextureManager *this,
        Scaleform::Render::ImageFormat format)
{
  unsigned int v2; // ebx
  __int64 v5; // r8
  Scaleform::Render::TextureFormat *v6; // rcx

  v2 = 0;
  if ( !this->TextureFormats.Data.Size )
    return 0i64;
  v5 = 0i64;
  while ( 1 )
  {
    v6 = this->TextureFormats.Data.Data[v5];
    if ( v6 )
    {
      if ( v6->GetImageFormat(v6) == format )
        break;
    }
    v5 = ++v2;
    if ( v2 >= this->TextureFormats.Data.Size )
      return 0i64;
  }
  return this->TextureFormats.Data.Data[v2];
}

void __fastcall Scaleform::GFx::KeyboardState::SetListener(
        Scaleform::GFx::ASMovieRootBase *this,
        Scaleform::GFx::MovieImpl *pmovie)
{
  this->pMovieImpl = pmovie;
}

Scaleform::Render::MappedTextureBase *__fastcall Scaleform::Render::TextureManager::mapTexture(
        Scaleform::Render::TextureManager *this,
        Scaleform::Render::Texture *p)
{
  return this->mapTexture(this, p, 0i64, p->MipLevels);
}

Scaleform::Render::MappedTextureBase *__fastcall Scaleform::Render::TextureManager::mapTexture(
        Scaleform::Render::TextureManager *this,
        Scaleform::Render::Texture *ptexture,
        unsigned int mipLevel,
        unsigned int levelCount)
{
  Scaleform::Render::MappedTextureBase *v8; // rdi
  Scaleform::Render::MappedTextureBase *v9; // rbx

  v8 = this->getDefaultMappedTexture(this);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::CompareAndSet_NoSync(&v8->LevelCount, 0, -1) )
  {
    v9 = v8;
  }
  else
  {
    v9 = this->createMappedTexture(this);
    if ( !v9 )
      return 0i64;
  }
  if ( v9->Map(v9, ptexture, mipLevel, levelCount) )
    return v9;
  if ( v9 != v8 )
    ((void (__fastcall *)(Scaleform::Render::MappedTextureBase *, __int64))v9->~MappedTextureBase)(v9, 1i64);
  return 0i64;
}

Scaleform::Render::DepthStencilSurface *__fastcall Scaleform::Render::TextureManager::postCreateDepthStencilSurface(
        Scaleform::Render::TextureManager *this,
        Scaleform::Render::DepthStencilSurface *pdss)
{
  Scaleform::Render::TextureManagerLocks *pObject; // rbx

  if ( !pdss )
    return 0i64;
  pObject = this->pLocks.pObject;
  Scaleform::Mutex::DoLock(&pObject->TextureMutex);
  if ( this->CanCreateTextureCurrentThread(this) )
  {
    this->processTextureKillList(this);
    this->processInitTextures(this);
    pdss->Initialize(pdss);
  }
  else
  {
    pdss->pPrev = this->DepthStencilInitQueue.Root.pPrev;
    pdss->pNext = (Scaleform::Render::DepthStencilSurface *)&this->TextureInitQueue;
    this->DepthStencilInitQueue.Root.pPrev->pNext = pdss;
    this->DepthStencilInitQueue.Root.pPrev = pdss;
    if ( this->pRTCommandQueue )
    {
      Scaleform::Mutex::Unlock(&this->pLocks.pObject->TextureMutex);
      this->pRTCommandQueue->PushThreadCommand(this->pRTCommandQueue, &this->ServiceCommandInstance);
      Scaleform::Mutex::DoLock(&this->pLocks.pObject->TextureMutex);
    }
    while ( pdss->State == State_InitPending )
      Scaleform::WaitCondition::Wait(
        &this->pLocks.pObject->TextureInitWC,
        &this->pLocks.pObject->TextureMutex,
        0xFFFFFFFF);
  }
  Scaleform::Mutex::Unlock(&pObject->TextureMutex);
  return pdss;
}

Scaleform::Render::Texture *__fastcall Scaleform::Render::TextureManager::postCreateTexture(
        Scaleform::Render::TextureManager *this,
        Scaleform::Render::Texture *ptexture,
        unsigned int use)
{
  __int16 v3; // bp
  Scaleform::Render::TextureManagerLocks *pObject; // rbx
  Scaleform::Render::Texture *v8; // rsi
  Scaleform::Render::ImageBase *pImage; // rcx

  v3 = use;
  if ( !ptexture )
    return 0i64;
  if ( !ptexture->IsValid(ptexture) )
  {
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)ptexture);
    return 0i64;
  }
  pObject = this->pLocks.pObject;
  Scaleform::Mutex::DoLock(&pObject->TextureMutex);
  if ( this->CanCreateTextureCurrentThread(this) )
  {
    this->processTextureKillList(this);
    this->processInitTextures(this);
    if ( ptexture->Initialize(ptexture) )
    {
      ptexture->pPrev = this->Textures.Root.pPrev;
      ptexture->pNext = (Scaleform::Render::Texture *)&this->TextureFormats.Data.Size;
      this->Textures.Root.pPrev->pNext = ptexture;
      this->Textures.Root.pPrev = ptexture;
    }
  }
  else
  {
    ptexture->pPrev = this->TextureInitQueue.Root.pPrev;
    ptexture->pNext = (Scaleform::Render::Texture *)&this->Textures;
    this->TextureInitQueue.Root.pPrev->pNext = ptexture;
    this->TextureInitQueue.Root.pPrev = ptexture;
    Scaleform::Mutex::Unlock(&this->pLocks.pObject->TextureMutex);
    this->pRTCommandQueue->PushThreadCommand(this->pRTCommandQueue, &this->ServiceCommandInstance);
    Scaleform::Mutex::DoLock(&this->pLocks.pObject->TextureMutex);
    while ( ptexture->State == State_InitPending )
      Scaleform::WaitCondition::Wait(
        &this->pLocks.pObject->TextureInitWC,
        &this->pLocks.pObject->TextureMutex,
        0xFFFFFFFF);
  }
  v8 = 0i64;
  if ( (v3 & 0x100) != 0 )
  {
    pImage = ptexture->pImage;
    if ( pImage && pImage->GetImageType(pImage) == Type_RawImage )
      Scaleform::Render::RawImage::freeData((Scaleform::Render::RawImage *)ptexture->pImage);
    ptexture->pImage = 0i64;
  }
  if ( ptexture->State == State_InitFailed )
  {
    ptexture->pImage = 0i64;
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)ptexture);
  }
  else
  {
    v8 = ptexture;
  }
  Scaleform::Mutex::Unlock(&pObject->TextureMutex);
  return v8;
}

const Scaleform::Render::TextureFormat *__fastcall Scaleform::Render::TextureManager::precreateTexture(
        Scaleform::Render::TextureManager *this,
        Scaleform::Render::ImageFormat format,
        unsigned int use,
        Scaleform::Render::ImageBase *pimage)
{
  __int16 v5; // bx
  const Scaleform::Render::TextureFormat *v9; // rsi

  v5 = use;
  if ( pimage )
  {
    if ( (((unsigned __int16)format ^ (unsigned __int16)pimage->GetFormat(pimage)) & 0xFFF) != 0
      || pimage->GetImageType(pimage) == Type_ImageBase && (v5 & 0x100) == 0 )
    {
      return 0i64;
    }
  }
  else if ( (use & 0x4F0) == 0 )
  {
    return 0i64;
  }
  v9 = this->getTextureFormat(this, (unsigned int)format);
  if ( !v9
    || (format & 0xFFFu) - 50 <= 0x31 && (v5 & 0x4E2) != 0
    || (v5 & 0xC0) != 0 && !this->isScanlineCompatible(this, v9) )
  {
    return 0i64;
  }
  return v9;
}

void __fastcall Scaleform::Render::TextureManager::unmapTexture(
        Scaleform::Render::TextureManager *this,
        Scaleform::Render::Texture *ptexture,
        bool applyUpdate)
{
  Scaleform::Render::MappedTextureBase *pMap; // rdi

  pMap = ptexture->pMap;
  pMap->Unmap(pMap, applyUpdate);
  if ( pMap != this->getDefaultMappedTexture(this) )
    ((void (__fastcall *)(Scaleform::Render::MappedTextureBase *, __int64))pMap->~MappedTextureBase)(pMap, 1i64);
}

