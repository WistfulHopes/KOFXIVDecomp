#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagecreator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imageresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

class Scaleform::GFx::ImageFileInfoKeyData :
	Scaleform::RefCountBase<Scaleform::GFx::ImageFileInfoKeyData,2>
{
private:
	Scaleform::Ptr<Scaleform::GFx::FileOpener> pFileOpener; // 0x10
	Scaleform::Ptr<Scaleform::GFx::ImageCreator> pImageCreator; // 0x18
	Scaleform::MemoryHeap * pImageHeap; // 0x20
public:
	Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> pFileInfo; // 0x28
	ImageFileInfoKeyData(Scaleform::GFx::ImageFileInfoKeyData &);
	ImageFileInfoKeyData(const Scaleform::GFx::ImageFileInfoKeyData &);
	ImageFileInfoKeyData(Scaleform::GFx::ImageFileInfo *, Scaleform::GFx::FileOpener *, Scaleform::GFx::ImageCreator *, Scaleform::MemoryHeap *);
	bool operator==(Scaleform::GFx::ImageFileInfoKeyData &);
	bool operator!=(Scaleform::GFx::ImageFileInfoKeyData &);
	unsigned long long GetHashCode();
	virtual ~ImageFileInfoKeyData();
	Scaleform::GFx::ImageFileInfoKeyData & operator=(Scaleform::GFx::ImageFileInfoKeyData &);
	Scaleform::GFx::ImageFileInfoKeyData & operator=(const Scaleform::GFx::ImageFileInfoKeyData &);
};
class Scaleform::RefCountBase<Scaleform::GFx::ImageFileInfoKeyData,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::GFx::ImageFileInfoKeyData,2>(Scaleform::RefCountBase<Scaleform::GFx::ImageFileInfoKeyData,2> &);
	RefCountBase<Scaleform::GFx::ImageFileInfoKeyData,2>(const Scaleform::RefCountBase<Scaleform::GFx::ImageFileInfoKeyData,2> &);
	RefCountBase<Scaleform::GFx::ImageFileInfoKeyData,2>();
	virtual ~RefCountBase<Scaleform::GFx::ImageFileInfoKeyData,2>();
	Scaleform::RefCountBase<Scaleform::GFx::ImageFileInfoKeyData,2> & operator=(Scaleform::RefCountBase<Scaleform::GFx::ImageFileInfoKeyData,2> &);
	Scaleform::RefCountBase<Scaleform::GFx::ImageFileInfoKeyData,2> & operator=(const Scaleform::RefCountBase<Scaleform::GFx::ImageFileInfoKeyData,2> &);
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
Scaleform::GFx::ImageFileKeyInterface Scaleform::GFx::ImageFileKeyInterface_Instance; // 0x1409F9FE8
void(*Scaleform::GFx::ImageFileKeyInterface_Instance$initializer$)(); // 0x140739D70
class Scaleform::Ptr<Scaleform::GFx::ImageFileInfo>
{
protected:
	Scaleform::GFx::ImageFileInfo * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ImageFileInfo>(const Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> &);
	Ptr<Scaleform::GFx::ImageFileInfo>(Scaleform::GFx::ImageFileInfo *);
	Ptr<Scaleform::GFx::ImageFileInfo>(Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ImageFileInfo>(Scaleform::Pickable<Scaleform::GFx::ImageFileInfo>);
	Ptr<Scaleform::GFx::ImageFileInfo>(Scaleform::GFx::ImageFileInfo &);
	Ptr<Scaleform::GFx::ImageFileInfo>();
	~Ptr<Scaleform::GFx::ImageFileInfo>();
	bool operator==(Scaleform::GFx::ImageFileInfo *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> &);
	bool operator!=(Scaleform::GFx::ImageFileInfo *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> &);
	Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> & operator=(Scaleform::Pickable<Scaleform::GFx::ImageFileInfo>);
	const Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> & operator=(Scaleform::GFx::ImageFileInfo &);
	const Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> & operator=(Scaleform::GFx::ImageFileInfo *);
	const Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> & operator=(const Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> &);
	Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ImageFileInfo>);
	Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> & SetPtr(Scaleform::GFx::ImageFileInfo &);
	Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> & SetPtr(Scaleform::GFx::ImageFileInfo *);
	Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ImageFileInfo * & GetRawRef();
	Scaleform::GFx::ImageFileInfo * GetPtr();
	Scaleform::GFx::ImageFileInfo & operator*();
	Scaleform::GFx::ImageFileInfo * operator->();
	Scaleform::GFx::ImageFileInfo * operator struct Scaleform::GFx::ImageFileInfo *();
	Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> & Pick(Scaleform::GFx::ImageFileInfo *);
	Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> & Pick(Scaleform::Pickable<Scaleform::GFx::ImageFileInfo>);
	Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> & Pick(Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> &);
};
Scaleform::GFx::ImageFileInfoKeyData::ImageFileInfoKeyData(Scaleform::GFx::ImageFileInfo * pfileInfo, Scaleform::GFx::FileOpener * pfileOpener, Scaleform::GFx::ImageCreator * pimageCreator, Scaleform::MemoryHeap * pimageHeap); // 0x1403E6AB0
class Scaleform::GFx::ImageFileKeyInterface :
	Scaleform::GFx::ResourceKey::KeyInterface
{
	typedef void *KeyHandle;
public:
	virtual void AddRef(void *);
	virtual void Release(void *);
	virtual Scaleform::GFx::ResourceKey::KeyType GetKeyType(void *);
	virtual unsigned long long GetHashCode(void *);
	virtual bool KeyEquals(void *, const Scaleform::GFx::ResourceKey &);
	virtual const char * GetFileURL(void *);
	ImageFileKeyInterface(Scaleform::GFx::ImageFileKeyInterface &);
	ImageFileKeyInterface(const Scaleform::GFx::ImageFileKeyInterface &);
	ImageFileKeyInterface();
	virtual ~ImageFileKeyInterface();
	Scaleform::GFx::ImageFileKeyInterface & operator=(Scaleform::GFx::ImageFileKeyInterface &);
	Scaleform::GFx::ImageFileKeyInterface & operator=(const Scaleform::GFx::ImageFileKeyInterface &);
};
void Scaleform::GFx::ImageFileKeyInterface::AddRef(void * hdata); // 0x140345150
void Scaleform::GFx::ImageFileKeyInterface::Release(void * hdata); // 0x140345160
Scaleform::GFx::ResourceKey::KeyType Scaleform::GFx::ImageFileKeyInterface::GetKeyType(void * hdata); // 0x1400BB920
unsigned long long Scaleform::GFx::ImageFileKeyInterface::GetHashCode(void * hdata); // 0x1403E69D0
bool Scaleform::GFx::ImageFileKeyInterface::KeyEquals(void * hdata, const Scaleform::GFx::ResourceKey & other); // 0x1403E6A20
const char * Scaleform::GFx::ImageFileKeyInterface::GetFileURL(void * hdata); // 0x1403E6A90
Scaleform::GFx::ResourceKey Scaleform::GFx::ImageResource::CreateImageFileKey(Scaleform::GFx::ImageFileInfo * pfileInfo, Scaleform::GFx::FileOpener * pfileOpener, Scaleform::GFx::ImageCreator * pimageCreator, Scaleform::MemoryHeap * pimageHeap); // 0x1403E6C10
class Scaleform::Ptr<Scaleform::GFx::ImageFileInfoKeyData>
{
protected:
	Scaleform::GFx::ImageFileInfoKeyData * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ImageFileInfoKeyData>(const Scaleform::Ptr<Scaleform::GFx::ImageFileInfoKeyData> &);
	Ptr<Scaleform::GFx::ImageFileInfoKeyData>(Scaleform::GFx::ImageFileInfoKeyData *);
	Ptr<Scaleform::GFx::ImageFileInfoKeyData>(Scaleform::Ptr<Scaleform::GFx::ImageFileInfoKeyData> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ImageFileInfoKeyData>(Scaleform::Pickable<Scaleform::GFx::ImageFileInfoKeyData>);
	Ptr<Scaleform::GFx::ImageFileInfoKeyData>(Scaleform::GFx::ImageFileInfoKeyData &);
	Ptr<Scaleform::GFx::ImageFileInfoKeyData>();
	~Ptr<Scaleform::GFx::ImageFileInfoKeyData>();
	bool operator==(Scaleform::GFx::ImageFileInfoKeyData *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ImageFileInfoKeyData> &);
	bool operator!=(Scaleform::GFx::ImageFileInfoKeyData *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ImageFileInfoKeyData> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ImageFileInfoKeyData> &);
	Scaleform::Ptr<Scaleform::GFx::ImageFileInfoKeyData> & operator=(Scaleform::Pickable<Scaleform::GFx::ImageFileInfoKeyData>);
	const Scaleform::Ptr<Scaleform::GFx::ImageFileInfoKeyData> & operator=(Scaleform::GFx::ImageFileInfoKeyData &);
	const Scaleform::Ptr<Scaleform::GFx::ImageFileInfoKeyData> & operator=(Scaleform::GFx::ImageFileInfoKeyData *);
	const Scaleform::Ptr<Scaleform::GFx::ImageFileInfoKeyData> & operator=(const Scaleform::Ptr<Scaleform::GFx::ImageFileInfoKeyData> &);
	Scaleform::Ptr<Scaleform::GFx::ImageFileInfoKeyData> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ImageFileInfoKeyData>);
	Scaleform::Ptr<Scaleform::GFx::ImageFileInfoKeyData> & SetPtr(Scaleform::GFx::ImageFileInfoKeyData &);
	Scaleform::Ptr<Scaleform::GFx::ImageFileInfoKeyData> & SetPtr(Scaleform::GFx::ImageFileInfoKeyData *);
	Scaleform::Ptr<Scaleform::GFx::ImageFileInfoKeyData> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ImageFileInfoKeyData> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ImageFileInfoKeyData * & GetRawRef();
	Scaleform::GFx::ImageFileInfoKeyData * GetPtr();
	Scaleform::GFx::ImageFileInfoKeyData & operator*();
	Scaleform::GFx::ImageFileInfoKeyData * operator->();
	Scaleform::GFx::ImageFileInfoKeyData * operator class Scaleform::GFx::ImageFileInfoKeyData *();
	Scaleform::Ptr<Scaleform::GFx::ImageFileInfoKeyData> & Pick(Scaleform::GFx::ImageFileInfoKeyData *);
	Scaleform::Ptr<Scaleform::GFx::ImageFileInfoKeyData> & Pick(Scaleform::Pickable<Scaleform::GFx::ImageFileInfoKeyData>);
	Scaleform::Ptr<Scaleform::GFx::ImageFileInfoKeyData> & Pick(Scaleform::Ptr<Scaleform::GFx::ImageFileInfoKeyData> &);
};//decompilation failure at 1409F9FE8!
//decompilation failure at 140739D70!
void __fastcall Scaleform::GFx::ImageFileInfoKeyData::ImageFileInfoKeyData(
        Scaleform::GFx::ImageFileInfoKeyData *this,
        Scaleform::GFx::ImageFileInfo *pfileInfo,
        Scaleform::GFx::FileOpener *pfileOpener,
        Scaleform::GFx::ImageCreator *pimageCreator,
        Scaleform::MemoryHeap *pimageHeap)
{
  Scaleform::GFx::ImageFileInfo *pObject; // rcx
  Scaleform::RefCountVImpl *v10; // rcx
  Scaleform::RefCountVImpl *v11; // rcx

  this->__vftable = (Scaleform::GFx::ImageFileInfoKeyData_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::ImageFileInfoKeyData_vtbl *)&Scaleform::GFx::ImageFileInfoKeyData::`vftable';
  this->pFileOpener.pObject = 0i64;
  this->pImageCreator.pObject = 0i64;
  this->pFileInfo.pObject = 0i64;
  if ( pfileInfo )
    ++pfileInfo->RefCount;
  pObject = this->pFileInfo.pObject;
  if ( pObject )
    Scaleform::RefCountNTSImpl::Release(pObject);
  this->pFileInfo.pObject = pfileInfo;
  if ( pfileOpener )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pfileOpener);
  v10 = (Scaleform::RefCountVImpl *)this->pFileOpener.pObject;
  if ( v10 )
    Scaleform::RefCountImpl::Release(v10);
  this->pFileOpener.pObject = pfileOpener;
  if ( pimageCreator )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pimageCreator);
  v11 = (Scaleform::RefCountVImpl *)this->pImageCreator.pObject;
  if ( v11 )
    Scaleform::RefCountImpl::Release(v11);
  this->pImageCreator.pObject = pimageCreator;
  this->pImageHeap = pimageHeap;
}

void __fastcall Scaleform::GFx::ImageFileKeyInterface::AddRef(
        Scaleform::Render::StateData::Interface_RefCountImpl *this,
        void *data,
        Scaleform::Render::StateData::Interface::RefBehaviour __formal)
{
  Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)data);
}

Scaleform::GFx::ResourceKey *__fastcall Scaleform::GFx::ImageResource::CreateImageFileKey(
        Scaleform::GFx::ResourceKey *result,
        Scaleform::GFx::ImageFileInfo *pfileInfo,
        Scaleform::GFx::FileOpener *pfileOpener,
        Scaleform::GFx::ImageCreator *pimageCreator,
        Scaleform::MemoryHeap *pimageHeap)
{
  Scaleform::MemoryHeap *v6; // rcx
  Scaleform::GFx::ImageFileInfoKeyData *v10; // rax
  Scaleform::RefCountVImpl *v11; // rax
  Scaleform::RefCountVImpl *v12; // rbx

  v6 = Scaleform::Memory::pGlobalHeap;
  if ( pimageHeap )
    v6 = pimageHeap;
  v10 = (Scaleform::GFx::ImageFileInfoKeyData *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))v6->Alloc)(
                                                  v6,
                                                  48i64);
  if ( v10 )
  {
    Scaleform::GFx::ImageFileInfoKeyData::ImageFileInfoKeyData(v10, pfileInfo, pfileOpener, pimageCreator, pimageHeap);
    v12 = v11;
  }
  else
  {
    v12 = 0i64;
  }
  Scaleform::GFx::ResourceKey::ResourceKey(result, &Scaleform::GFx::ImageFileKeyInterface_Instance, v12);
  if ( v12 )
    Scaleform::RefCountImpl::Release(v12);
  return result;
}

const char *__fastcall Scaleform::GFx::ImageFileKeyInterface::GetFileURL(
        Scaleform::GFx::ImageFileKeyInterface *this,
        void *hdata)
{
  return (const char *)((*(_QWORD *)(*((_QWORD *)hdata + 5) + 32i64) & 0xFFFFFFFFFFFFFFFCui64) + 12);
}

unsigned __int64 __fastcall Scaleform::GFx::ImageFileKeyInterface::GetHashCode(
        Scaleform::GFx::ImageFileKeyInterface *this,
        void *hdata)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  unsigned __int64 v4; // rbx

  v2 = *((_QWORD *)hdata + 2);
  v3 = *((_QWORD *)hdata + 3);
  v4 = *((_QWORD *)hdata + 4);
  return v2 ^ v3 ^ v4 ^ ((v2 ^ v3 ^ v4) >> 7) ^ Scaleform::GFx::ResourceFileInfo::GetHashCode(*((Scaleform::GFx::ResourceFileInfo **)hdata
                                                                                              + 5));
}

__int64 __fastcall ActorShot::GetActorType(Scaleform::GFx::AS3::Instances::fl::XMLText *this)
{
  return 2i64;
}

bool __fastcall Scaleform::GFx::ImageFileKeyInterface::KeyEquals(
        Scaleform::GFx::ImageFileKeyInterface *this,
        void *hdata,
        const Scaleform::GFx::ResourceKey *other)
{
  _OWORD *hKeyData; // rcx
  unsigned __int8 *v5; // rax
  unsigned __int64 v6; // r8
  int v7; // ecx
  int v8; // edx

  if ( this != other->pKeyInterface )
    return 0;
  hKeyData = other->hKeyData;
  if ( *((_OWORD *)hdata + 1) != hKeyData[1] || *((_QWORD *)hdata + 4) != *((_QWORD *)hKeyData + 4) )
    return 0;
  v5 = (unsigned __int8 *)((*(_QWORD *)(*((_QWORD *)hdata + 5) + 32i64) & 0xFFFFFFFFFFFFFFFCui64) + 12);
  v6 = (*(_QWORD *)(*((_QWORD *)hKeyData + 5) + 32i64) & 0xFFFFFFFFFFFFFFFCui64)
     - (*(_QWORD *)(*((_QWORD *)hdata + 5) + 32i64) & 0xFFFFFFFFFFFFFFFCui64);
  do
  {
    v7 = v5[v6];
    v8 = *v5 - v7;
    if ( v8 )
      break;
    ++v5;
  }
  while ( v7 );
  return !v8;
}

void __fastcall Scaleform::GFx::GFxSystemFontResourceKeyInterface::Release(
        Scaleform::GFx::GFxMovieDefImplKeyInterface *this,
        void *hdata)
{
  Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)hdata);
}

