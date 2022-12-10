#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontcompactor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_pathdatastorage.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraypaged.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_stream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_charposinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loadprocess.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loaderimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resourcehandle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_point3.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_taskmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_moviedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_autoptr.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobject.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asmovierootbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shape.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagecreator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asutils.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shapeswf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_streamcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imageresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hittest.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_boundbox.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"

class Scaleform::GFx::FillStyleSwfReader
{
	enum FillFlagConstants
	{
		FF_LinearRGB = 1,
		FF_HasAlpha = 2,
	};
private:
	Scaleform::Render::FillStyleType & FillStyle; // 0x0
public:
	FillStyleSwfReader(Scaleform::Render::FillStyleType &);
	bool HasTextureFill();
	bool NeedsResolving();
	void Read(Scaleform::GFx::LoadProcess *, Scaleform::GFx::TagType);
private:
	Scaleform::GFx::FillStyleSwfReader & operator=(const Scaleform::GFx::FillStyleSwfReader &);
};
void Scaleform::GFx::FillStyleSwfReader::Read(Scaleform::GFx::LoadProcess * p, Scaleform::GFx::TagType tagType); // 0x1403E0940
class Scaleform::GFx::StrokeStyleSwfReader
{
	enum Style
	{
		LineFlag_StrokeHinting = 1,
		LineScaling_Normal = 0,
		LineScaling_Horizontal = 2,
		LineScaling_Vertical = 4,
		LineScaling_None = 6,
		LineScaling_Mask = 6,
		LineFlag_ComplexFill = 8,
		LineJoin_Round = 0,
		LineJoin_Bevel = 16,
		LineJoin_Miter = 32,
		LineJoin_Mask = 48,
		LineCap_Round = 0,
		LineCap_None = 64,
		LineCap_Square = 128,
		LineCap_Mask = 192,
		LineEndCap_Round = 0,
		LineEndCap_None = 256,
		LineEndCap_Square = 512,
		LineEndCap_Mask = 768,
		LineEndCap_ShiftToCap = 2,
	};
private:
	Scaleform::Render::StrokeStyleType & StrokeStyle; // 0x0
public:
	StrokeStyleSwfReader(Scaleform::Render::StrokeStyleType &);
	bool HasTextureFill();
	bool NeedsResolving();
	static unsigned long ConvertSwfLineStyles(unsigned long);
	void Read(Scaleform::GFx::LoadProcess *, Scaleform::GFx::TagType);
private:
	Scaleform::GFx::StrokeStyleSwfReader & operator=(const Scaleform::GFx::StrokeStyleSwfReader &);
};
void Scaleform::GFx::StrokeStyleSwfReader::Read(Scaleform::GFx::LoadProcess * p, Scaleform::GFx::TagType tagType); // 0x1403E1A10
unsigned long Scaleform::GFx::ConvertSwfLineStyles(unsigned long swfLineStyle); // 0x1403E0110
class Scaleform::GFx::SwfShapeDecoder
{
private:
	Scaleform::GFx::StreamContext Stream; // 0x0
	Scaleform::Render::ShapePosInfo * Pos; // 0x20
	enum <unnamed-enum-Signature>
	{
		Signature = 124076833,
	};
public:
	SwfShapeDecoder(Scaleform::Render::ShapePosInfo *, const unsigned char *, float);
	~SwfShapeDecoder();
	bool IsEdgeNext();
	struct Edge;
	Scaleform::Render::PathEdgeType ReadEdge(Scaleform::GFx::SwfShapeDecoder::Edge *);
	Scaleform::Render::ShapePathType ReadNonEdgeRec(Scaleform::Render::ShapePathType);
};
Scaleform::GFx::SwfShapeDecoder::SwfShapeDecoder(Scaleform::Render::ShapePosInfo * pos, const unsigned char * shapeData, float sfactor); // 0x1403DF4E0
struct Scaleform::GFx::SwfShapeDecoder::Edge
{
	long Cx; // 0x0
	long Cy; // 0x4
	long Ax; // 0x8
	long Ay; // 0xC
	bool Curve; // 0x10
};
Scaleform::Render::PathEdgeType Scaleform::GFx::SwfShapeDecoder::ReadEdge(Scaleform::GFx::SwfShapeDecoder::Edge * edge); // 0x1403E1E20
Scaleform::Render::ShapePathType Scaleform::GFx::SwfShapeDecoder::ReadNonEdgeRec(Scaleform::Render::ShapePathType retVal); // 0x1403E2490
class Scaleform::GFx::ShapeSwfReader :
	Unassignable
{
private:
	Scaleform::GFx::ShapeDataBase & Shape; // 0x0
	Scaleform::GFx::PathAllocator * pAllocator; // 0x8
	Scaleform::Array<Scaleform::Render::FillStyleType,259,Scaleform::ArrayDefaultPolicy> FillStyles; // 0x10
	Scaleform::Array<Scaleform::Render::StrokeStyleType,259,Scaleform::ArrayDefaultPolicy> StrokeStyles; // 0x28
	long ReadFillStyles(Scaleform::GFx::LoadProcess *, Scaleform::GFx::TagType);
	long ReadStrokeStyles(Scaleform::GFx::LoadProcess *, Scaleform::GFx::TagType);
public:
	ShapeSwfReader(Scaleform::GFx::ShapeSwfReader &);
	ShapeSwfReader(const Scaleform::GFx::ShapeSwfReader &);
	ShapeSwfReader(Scaleform::GFx::ShapeDataBase &, Scaleform::GFx::PathAllocator *);
	bool Read(Scaleform::GFx::LoadProcess *, Scaleform::GFx::TagType, unsigned long, bool);
	unsigned long GetFillStyleCount();
	unsigned long GetStrokeStyleCount();
	const Scaleform::Render::FillStyleType * GetFillStyle(unsigned long long);
	const Scaleform::Render::StrokeStyleType * GetStrokeStyle(unsigned long long);
	~ShapeSwfReader();
};
long Scaleform::GFx::ShapeSwfReader::ReadFillStyles(Scaleform::GFx::LoadProcess * p, Scaleform::GFx::TagType tagType); // 0x1403E2340
long Scaleform::GFx::ShapeSwfReader::ReadStrokeStyles(Scaleform::GFx::LoadProcess * p, Scaleform::GFx::TagType tagType); // 0x1403E2DB0
bool Scaleform::GFx::ShapeSwfReader::Read(Scaleform::GFx::LoadProcess * p, Scaleform::GFx::TagType tagType, unsigned long lenInBytes, bool withStyle); // 0x1403E1150
Scaleform::GFx::ShapeDataBase::ShapeDataBase(Scaleform::GFx::ShapeDataBase::EmptyShape __formal); // 0x1403DF3F0
void Scaleform::GFx::ShapeDataBase::ComputeBound(Scaleform::Render::Rect<float> * r); // 0x1403DFFF0
bool Scaleform::GFx::ShapeDataBase::DefPointTestLocal(Scaleform::Render::ShapeMeshProvider * pshapeMeshProvider, const Scaleform::Render::Point<float> & pt, bool testShape, const Scaleform::GFx::DisplayObjectBase * pinst); // 0x1403E0260
class Scaleform::Ptr<Scaleform::Render::Scale9GridInfo>
{
protected:
	Scaleform::Render::Scale9GridInfo * pObject; // 0x0
public:
	Ptr<Scaleform::Render::Scale9GridInfo>(const Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> &);
	Ptr<Scaleform::Render::Scale9GridInfo>(Scaleform::Render::Scale9GridInfo *);
	Ptr<Scaleform::Render::Scale9GridInfo>(Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> &, Scaleform::PickType);
	Ptr<Scaleform::Render::Scale9GridInfo>(Scaleform::Pickable<Scaleform::Render::Scale9GridInfo>);
	Ptr<Scaleform::Render::Scale9GridInfo>(Scaleform::Render::Scale9GridInfo &);
	Ptr<Scaleform::Render::Scale9GridInfo>();
	~Ptr<Scaleform::Render::Scale9GridInfo>();
	bool operator==(Scaleform::Render::Scale9GridInfo *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> &);
	bool operator!=(Scaleform::Render::Scale9GridInfo *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> &);
	Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> & operator=(Scaleform::Pickable<Scaleform::Render::Scale9GridInfo>);
	const Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> & operator=(Scaleform::Render::Scale9GridInfo &);
	const Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> & operator=(Scaleform::Render::Scale9GridInfo *);
	const Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> & operator=(const Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> &);
	Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> & SetPtr(Scaleform::Pickable<Scaleform::Render::Scale9GridInfo>);
	Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> & SetPtr(Scaleform::Render::Scale9GridInfo &);
	Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> & SetPtr(Scaleform::Render::Scale9GridInfo *);
	Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> & SetPtr(const Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::Scale9GridInfo * & GetRawRef();
	Scaleform::Render::Scale9GridInfo * GetPtr();
	Scaleform::Render::Scale9GridInfo & operator*();
	Scaleform::Render::Scale9GridInfo * operator->();
	Scaleform::Render::Scale9GridInfo * operator struct Scaleform::Render::Scale9GridInfo *();
	Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> & Pick(Scaleform::Render::Scale9GridInfo *);
	Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> & Pick(Scaleform::Pickable<Scaleform::Render::Scale9GridInfo>);
	Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> & Pick(Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> &);
};
class Scaleform::Render::TransformerWrapper<Scaleform::Render::Matrix2x4<float> > :
	Scaleform::Render::TransformerBase
{
public:
	const Scaleform::Render::Matrix2x4<float> * Tr; // 0x8
	TransformerWrapper<Scaleform::Render::Matrix2x4<float> >(Scaleform::Render::TransformerWrapper<Scaleform::Render::Matrix2x4<float> > &);
	TransformerWrapper<Scaleform::Render::Matrix2x4<float> >(const Scaleform::Render::TransformerWrapper<Scaleform::Render::Matrix2x4<float> > &);
	TransformerWrapper<Scaleform::Render::Matrix2x4<float> >(const Scaleform::Render::Matrix2x4<float> *);
	TransformerWrapper<Scaleform::Render::Matrix2x4<float> >();
	virtual void Transform(float *, float *);
	virtual float GetScale();
	virtual float GetXScale();
	virtual float GetYScale();
	virtual ~TransformerWrapper<Scaleform::Render::Matrix2x4<float> >();
	Scaleform::Render::TransformerWrapper<Scaleform::Render::Matrix2x4<float> > & operator=(Scaleform::Render::TransformerWrapper<Scaleform::Render::Matrix2x4<float> > &);
	Scaleform::Render::TransformerWrapper<Scaleform::Render::Matrix2x4<float> > & operator=(const Scaleform::Render::TransformerWrapper<Scaleform::Render::Matrix2x4<float> > &);
};
class Scaleform::Render::TransformerWrapper<Scaleform::Render::Scale9GridInfo> :
	Scaleform::Render::TransformerBase
{
public:
	const Scaleform::Render::Scale9GridInfo * Tr; // 0x8
	TransformerWrapper<Scaleform::Render::Scale9GridInfo>(Scaleform::Render::TransformerWrapper<Scaleform::Render::Scale9GridInfo> &);
	TransformerWrapper<Scaleform::Render::Scale9GridInfo>(const Scaleform::Render::TransformerWrapper<Scaleform::Render::Scale9GridInfo> &);
	TransformerWrapper<Scaleform::Render::Scale9GridInfo>(const Scaleform::Render::Scale9GridInfo *);
	TransformerWrapper<Scaleform::Render::Scale9GridInfo>();
	virtual void Transform(float *, float *);
	virtual float GetScale();
	virtual float GetXScale();
	virtual float GetYScale();
	virtual ~TransformerWrapper<Scaleform::Render::Scale9GridInfo>();
	Scaleform::Render::TransformerWrapper<Scaleform::Render::Scale9GridInfo> & operator=(Scaleform::Render::TransformerWrapper<Scaleform::Render::Scale9GridInfo> &);
	Scaleform::Render::TransformerWrapper<Scaleform::Render::Scale9GridInfo> & operator=(const Scaleform::Render::TransformerWrapper<Scaleform::Render::Scale9GridInfo> &);
};
typedef Scaleform::Array<Scaleform::Render::StrokeStyleType,259,Scaleform::ArrayDefaultPolicy> Scaleform::GFx::StrokeStyleArrayTemp;
typedef Scaleform::Array<Scaleform::Render::FillStyleType,259,Scaleform::ArrayDefaultPolicy> Scaleform::GFx::FillStyleArrayTemp;
Scaleform::Render::ShapePathType Scaleform::GFx::ShapeDataBase::ReadPathInfo(Scaleform::Render::ShapePosInfo * pos, float * coord, unsigned long * styles); // 0x1403E2CA0
Scaleform::Render::PathEdgeType Scaleform::GFx::ShapeDataBase::ReadEdge(Scaleform::Render::ShapePosInfo * pos, float * coord); // 0x1403E1CF0
bool Scaleform::GFx::ConstShapeNoStyles::Read(Scaleform::GFx::LoadProcess * p, Scaleform::GFx::TagType tagType, unsigned long lenInBytes, bool withStyle); // 0x1403E0660
Scaleform::GFx::ShapeDataBase * Scaleform::GFx::ConstShapeNoStyles::Clone(); // 0x1403DFF20
Scaleform::GFx::ConstShapeWithStyles::ConstShapeWithStyles(const Scaleform::GFx::ConstShapeWithStyles & o); // 0x1403DEDA0
Scaleform::GFx::ConstShapeWithStyles::~ConstShapeWithStyles(); // 0x1403DF9B0
Scaleform::GFx::ShapeDataBase * Scaleform::GFx::ConstShapeWithStyles::Clone(); // 0x1403DFFA0
void Scaleform::GFx::ConstShapeWithStyles::GetFillStyle(unsigned long idx, Scaleform::Render::FillStyleType * p); // 0x1403E04E0
void Scaleform::GFx::ConstShapeWithStyles::GetStrokeStyle(unsigned long idx, Scaleform::Render::StrokeStyleType * p); // 0x1403E0630
bool Scaleform::GFx::ConstShapeWithStyles::Read(Scaleform::GFx::LoadProcess * p, Scaleform::GFx::TagType tagType, unsigned long lenInBytes, bool withStyle); // 0x1403E06D0
void Scaleform::GFx::ConstShapeWithStyles::SetStyles(unsigned long fillStyleCount, const Scaleform::Render::FillStyleType * fillStyles, unsigned long strokeStyleCount, const Scaleform::Render::StrokeStyleType * strokeStyles); // 0x1403E3360
void Scaleform::GFx::ConstShapeWithStyles::BindResourcesInStyles(const Scaleform::GFx::ResourceBinding & resourceBinding); // 0x1403DFBA0
Scaleform::GFx::SwfShapeCharacterDef::SwfShapeCharacterDef(Scaleform::GFx::ShapeDataBase * shp); // 0x1403DF420
Scaleform::Render::Rect<float> Scaleform::GFx::SwfShapeCharacterDef::GetBoundsLocal(float __formal); // 0x1403E0420
Scaleform::Render::Rect<float> Scaleform::GFx::SwfShapeCharacterDef::GetRectBoundsLocal(float mr); // 0x1403E0550
Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> Scaleform::GFx::SwfShapeCharacterDef::BindResourcesInStyles(const Scaleform::GFx::ResourceBinding & resourceBinding); // 0x1403DFE80
Scaleform::GFx::ImageShapeCharacterDef::ImageShapeCharacterDef(Scaleform::GFx::ImageResource * pimage, Scaleform::GFx::ImageCreator * imgCreator, bool bilinear); // 0x1403DEE40
class Scaleform::Ptr<Scaleform::Render::ShapeDataFloat>
{
protected:
	Scaleform::Render::ShapeDataFloat * pObject; // 0x0
public:
	Ptr<Scaleform::Render::ShapeDataFloat>(const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> &);
	Ptr<Scaleform::Render::ShapeDataFloat>(Scaleform::Render::ShapeDataFloat *);
	Ptr<Scaleform::Render::ShapeDataFloat>(Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> &, Scaleform::PickType);
	Ptr<Scaleform::Render::ShapeDataFloat>(Scaleform::Pickable<Scaleform::Render::ShapeDataFloat>);
	Ptr<Scaleform::Render::ShapeDataFloat>(Scaleform::Render::ShapeDataFloat &);
	Ptr<Scaleform::Render::ShapeDataFloat>();
	~Ptr<Scaleform::Render::ShapeDataFloat>();
	bool operator==(Scaleform::Render::ShapeDataFloat *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> &);
	bool operator!=(Scaleform::Render::ShapeDataFloat *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> &);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & operator=(Scaleform::Pickable<Scaleform::Render::ShapeDataFloat>);
	const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & operator=(Scaleform::Render::ShapeDataFloat &);
	const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & operator=(Scaleform::Render::ShapeDataFloat *);
	const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & operator=(const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> &);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & SetPtr(Scaleform::Pickable<Scaleform::Render::ShapeDataFloat>);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & SetPtr(Scaleform::Render::ShapeDataFloat &);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & SetPtr(Scaleform::Render::ShapeDataFloat *);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & SetPtr(const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::ShapeDataFloat * & GetRawRef();
	Scaleform::Render::ShapeDataFloat * GetPtr();
	Scaleform::Render::ShapeDataFloat & operator*();
	Scaleform::Render::ShapeDataFloat * operator->();
	Scaleform::Render::ShapeDataFloat * operator class Scaleform::Render::ShapeDataFloat *();
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & Pick(Scaleform::Render::ShapeDataFloat *);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & Pick(Scaleform::Pickable<Scaleform::Render::ShapeDataFloat>);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & Pick(Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> &);
};
bool Scaleform::GFx::ImageShapeCharacterDef::DefPointTestLocal(const Scaleform::Render::Point<float> & pt, bool testShape, const Scaleform::GFx::DisplayObjectBase * pinst); // 0x1403E01B0void __fastcall Scaleform::HashSet<unsigned int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedEntry<unsigned int,Scaleform::FixedSizeHash<unsigned int>>>::Add<unsigned int>(
        Scaleform::HashSet<unsigned int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedEntry<unsigned int,Scaleform::FixedSizeHash<unsigned int> > > *this,
        const unsigned int *key)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int64 v5; // r9

  v2 = 4i64;
  v3 = 5381i64;
  do
  {
    v4 = *((unsigned __int8 *)key + --v2);
    v5 = 65599 * v3 + v4;
    v3 = v5;
  }
  while ( v2 );
  Scaleform::HashSetBase<unsigned int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedEntry<unsigned int,Scaleform::FixedSizeHash<unsigned int>>>::add<unsigned int>(
    this,
    this,
    key,
    v5);
}

void __fastcall Scaleform::HashSetBase<unsigned int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedEntry<unsigned int,Scaleform::FixedSizeHash<unsigned int>>>::add<unsigned int>(
        Scaleform::HashSetBase<unsigned int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedEntry<unsigned int,Scaleform::FixedSizeHash<unsigned int> > > *this,
        void *pmemAddr,
        const unsigned int *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<unsigned int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedEntry<unsigned int,Scaleform::FixedSizeHash<unsigned int> > >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rbx
  Scaleform::HashSetBase<unsigned int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedEntry<unsigned int,Scaleform::FixedSizeHash<unsigned int> > >::TableType *v11; // r9
  unsigned __int64 v12; // r11
  char *v13; // r8
  unsigned int v14; // eax
  __int64 v15; // rdx
  unsigned __int64 *v16; // r10
  __int64 v17; // rax
  __int64 v18; // rcx
  bool v19; // zf
  unsigned __int64 *i; // rcx
  __int64 v21; // rcx

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount <= 4 * SizeMask + 4 )
      goto LABEL_6;
    v8 = 2 * SizeMask + 2;
  }
  else
  {
    v8 = 8i64;
  }
  Scaleform::HashSetBase<unsigned int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedEntry<unsigned int,Scaleform::FixedSizeHash<unsigned int>>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = *(&this->pTable[1].EntryCount + 3 * v10);
  v13 = (char *)this->pTable + 24 * v10;
  if ( v12 == -2i64 )
  {
    *((_QWORD *)v13 + 2) = -1i64;
    *((_QWORD *)v13 + 3) = 0i64;
    v14 = *key;
  }
  else
  {
    v15 = v10;
    do
      v15 = v11->SizeMask & (v15 + 1);
    while ( *(&v11[1].EntryCount + 3 * v15) != -2i64 );
    v16 = &v11[v15 + 1].EntryCount + v15;
    v17 = *((_QWORD *)v13 + 3);
    if ( v17 == v10 )
    {
      if ( v16 )
      {
        *v16 = v12;
        v16[1] = *((_QWORD *)v13 + 3);
        *((_DWORD *)v16 + 4) = *((_DWORD *)v13 + 8);
      }
      v14 = *key;
      *((_QWORD *)v13 + 2) = v15;
    }
    else
    {
      v18 = v17 + 2 * (v17 + 1);
      v19 = *(&v11->EntryCount + v18) == v10;
      for ( i = &v11->EntryCount + v18; !v19; i = &v11->EntryCount + v21 )
      {
        v21 = *i + 2 * (*i + 1);
        v19 = *(&v11->EntryCount + v21) == v10;
      }
      if ( v16 )
      {
        *v16 = v12;
        v16[1] = *((_QWORD *)v13 + 3);
        *((_DWORD *)v16 + 4) = *((_DWORD *)v13 + 8);
      }
      *i = v15;
      v14 = *key;
      *((_QWORD *)v13 + 2) = -1i64;
    }
  }
  *((_QWORD *)v13 + 3) = v10;
  *((_DWORD *)v13 + 8) = v14;
}

void __fastcall Scaleform::Render::ComplexFill::ComplexFill(
        Scaleform::Render::ComplexFill *this,
        const Scaleform::Render::ComplexFill *o)
{
  Scaleform::Render::Image *pObject; // rcx
  Scaleform::RefCountVImpl *v5; // rcx

  this->__vftable = (Scaleform::Render::ComplexFill_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::Render::ComplexFill_vtbl *)&Scaleform::Render::ComplexFill::`vftable';
  pObject = o->pImage.pObject;
  if ( pObject )
    pObject->AddRef(pObject);
  this->pImage.pObject = o->pImage.pObject;
  v5 = (Scaleform::RefCountVImpl *)o->pGradient.pObject;
  if ( v5 )
    Scaleform::Render::RenderBuffer::AddRef(v5);
  this->pGradient.pObject = o->pGradient.pObject;
  this->ImageMatrix.M[0][0] = o->ImageMatrix.M[0][0];
  this->ImageMatrix.M[0][1] = o->ImageMatrix.M[0][1];
  this->ImageMatrix.M[0][2] = o->ImageMatrix.M[0][2];
  this->ImageMatrix.M[0][3] = o->ImageMatrix.M[0][3];
  this->ImageMatrix.M[1][0] = o->ImageMatrix.M[1][0];
  this->ImageMatrix.M[1][1] = o->ImageMatrix.M[1][1];
  this->ImageMatrix.M[1][2] = o->ImageMatrix.M[1][2];
  this->ImageMatrix.M[1][3] = o->ImageMatrix.M[1][3];
  this->FillMode.Fill = o->FillMode.Fill;
  this->BindIndex = o->BindIndex;
}

void __fastcall Scaleform::GFx::ConstShapeWithStyles::ConstShapeWithStyles(
        Scaleform::GFx::ConstShapeWithStyles *this,
        const Scaleform::GFx::ConstShapeWithStyles *o)
{
  this->__vftable = (Scaleform::GFx::ConstShapeWithStyles_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::ConstShapeWithStyles_vtbl *)&Scaleform::GFx::ShapeDataBase::`vftable';
  this->Paths = o->Paths;
  this->Flags = o->Flags;
  this->__vftable = (Scaleform::GFx::ConstShapeWithStyles_vtbl *)&Scaleform::GFx::ConstShapeWithStyles::`vftable';
  this->Styles = 0i64;
  *(_QWORD *)&this->Bound.x1 = 0i64;
  *(_QWORD *)&this->Bound.x2 = 0i64;
  *(_QWORD *)&this->RectBound.x1 = 0i64;
  *(_QWORD *)&this->RectBound.x2 = 0i64;
  Scaleform::GFx::ConstShapeWithStyles::SetStyles(
    this,
    o->FillStylesNum,
    (const Scaleform::Render::FillStyleType *)o->Styles,
    o->StrokeStylesNum,
    (const Scaleform::Render::StrokeStyleType *)&o->Styles[16 * o->FillStylesNum]);
  *(_QWORD *)&this->RectBound.x1 = 0i64;
  *(_QWORD *)&this->RectBound.x2 = 0i64;
  *(_QWORD *)&this->Bound.x1 = 0i64;
  *(_QWORD *)&this->Bound.x2 = 0i64;
}

void __fastcall Scaleform::GFx::ImageShapeCharacterDef::ImageShapeCharacterDef(
        Scaleform::GFx::ImageShapeCharacterDef *this,
        Scaleform::GFx::ImageResource *pimage,
        Scaleform::GFx::ImageCreator *imgCreator,
        bool bilinear)
{
  Scaleform::Render::ShapeMeshProvider *v4; // r15
  Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *v8; // rax
  Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *v9; // r14
  Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v10; // rax
  char *v11; // rax
  char *v12; // rsi
  Scaleform::Render::ImageBase *v13; // rbx
  Scaleform::MemoryHeap *v14; // rax
  Scaleform::Render::ImageBase *v15; // r8
  Scaleform::GFx::ImageCreator_vtbl *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  float StartX; // xmm1_4
  Scaleform::Render::ShapeMeshProvider *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdi
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::ShapeMeshProvider *v24; // rax
  Scaleform::Render::ShapeMeshProvider *v25; // rax
  Scaleform::Render::ShapeMeshProvider *v26; // rcx
  int v28; // [rsp+24h] [rbp-B5h] BYREF
  int v29; // [rsp+28h] [rbp-B1h] BYREF
  Scaleform::LogMessageId id; // [rsp+2Ch] [rbp-ADh] BYREF
  int v31; // [rsp+30h] [rbp-A9h] BYREF
  int v32; // [rsp+34h] [rbp-A5h] BYREF
  int v33; // [rsp+38h] [rbp-A1h] BYREF
  Scaleform::LogMessageId v34; // [rsp+3Ch] [rbp-9Dh] BYREF
  int v35; // [rsp+40h] [rbp-99h]
  __int64 v36; // [rsp+48h] [rbp-91h]
  int v37; // [rsp+50h] [rbp-89h] BYREF
  Scaleform::MemoryHeap *v38; // [rsp+58h] [rbp-81h]
  int v39; // [rsp+60h] [rbp-79h]
  int v40; // [rsp+64h] [rbp-75h]
  __int128 v41; // [rsp+68h] [rbp-71h]
  __int128 v42; // [rsp+78h] [rbp-61h]
  int v43[6]; // [rsp+88h] [rbp-51h] BYREF
  Scaleform::Render::Rect<float> pr; // [rsp+A0h] [rbp-39h] BYREF
  Scaleform::Render::Rect<float> r; // [rsp+B0h] [rbp-29h] BYREF
  Scaleform::Render::Matrix2x4<float> v46; // [rsp+C0h] [rbp-19h] BYREF

  v4 = 0i64;
  v28 = 71;
  this->pLib = 0i64;
  this->__vftable = (Scaleform::GFx::ImageShapeCharacterDef_vtbl *)&Scaleform::GFx::Resource::`vftable';
  this->RefCount.Value = 1;
  this->Id.Id = 0x40000;
  this->pShapeMeshProvider.pObject = 0i64;
  this->__vftable = (Scaleform::GFx::ImageShapeCharacterDef_vtbl *)&Scaleform::GFx::ImageShapeCharacterDef::`vftable';
  this->pShape.pObject = 0i64;
  v8 = (Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, this, 128i64, &v28);
  v9 = v8;
  if ( v8 )
  {
    v8->__vftable = (Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> >_vtbl *)&Scaleform::RefCountImplCore::`vftable';
    v8->RefCount = 1;
    v8->Status = Status_Clean;
    v8->Fills.Data.Data = 0i64;
    v8->Fills.Data.Size = 0i64;
    v8->Fills.Data.Policy.Capacity = 0i64;
    v8->Strokes.Data.Data = 0i64;
    v8->Strokes.Data.Size = 0i64;
    v8->Strokes.Data.Policy.Capacity = 0i64;
    v10 = (Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> *)&v8[1];
    v9->Data = v10;
    *(_QWORD *)&v9->StartingPos = 0i64;
    *(_QWORD *)&v9->StartY = 0i64;
    v9->LastY = 0.0;
    v9->__vftable = (Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> >_vtbl *)&Scaleform::Render::ShapeDataFloat::`vftable';
    v10->Data.Data = 0i64;
    v10->Data.Size = 0i64;
    v10->Data.Policy.Capacity = 0i64;
  }
  else
  {
    v9 = 0i64;
  }
  v29 = 71;
  v36 = 0i64;
  v11 = (char *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, this, 80i64, &v29);
  v12 = v11;
  if ( v11 )
  {
    *(_QWORD *)v11 = &Scaleform::RefCountImplCore::`vftable';
    *((_DWORD *)v11 + 2) = 1;
    *(_QWORD *)v11 = &Scaleform::Render::ComplexFill::`vftable';
    *((_QWORD *)v11 + 2) = 0i64;
    *((_QWORD *)v11 + 3) = 0i64;
    *((_QWORD *)v11 + 4) = 1065353216i64;
    *((_QWORD *)v11 + 5) = 0i64;
    *((_DWORD *)v11 + 12) = 0;
    *(_QWORD *)(v11 + 52) = 1065353216i64;
    *((_DWORD *)v11 + 15) = 0;
    v11[64] = 0;
    *((_DWORD *)v11 + 17) = -1;
  }
  else
  {
    v12 = 0i64;
  }
  if ( !pimage )
  {
    v34.Id = 135168;
    Scaleform::LogDebugMessage((Scaleform::LogMessageId)&v34, "Image is null in ImageShapeCharacterDef ctor.");
    goto LABEL_40;
  }
  v13 = 0i64;
  if ( pimage->pImage->GetImageType(pimage->pImage) )
  {
    v13 = pimage->pImage;
    if ( v13 )
    {
      v13->AddRef(pimage->pImage);
      goto LABEL_14;
    }
  }
  else
  {
    if ( imgCreator )
    {
      v14 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
      v15 = pimage->pImage;
      v38 = v14;
      v16 = imgCreator->__vftable;
      v37 = 3;
      v39 = 1;
      v40 = 1;
      v41 = 0i64;
      v42 = 0i64;
      v13 = v16->CreateImage(imgCreator, (const Scaleform::GFx::ImageCreateInfo *)&v37, v15);
LABEL_14:
      if ( v13 )
        v13->AddRef(v13);
      goto LABEL_16;
    }
    id.Id = 135168;
    Scaleform::LogDebugMessage((Scaleform::LogMessageId)&id, "ImageCreator is null in ImageShapeCharacterDef ctor");
  }
LABEL_16:
  v17 = *((_QWORD *)v12 + 2);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16i64))(v17);
  *((_QWORD *)v12 + 2) = v13;
  if ( v13 )
  {
    *((_QWORD *)v12 + 4) = 1065353216i64;
    *((_QWORD *)v12 + 5) = 0i64;
    *((_DWORD *)v12 + 12) = 0;
    *(_QWORD *)(v12 + 52) = 1065353216i64;
    *((_DWORD *)v12 + 15) = 0;
    *((float *)v12 + 8) = *((float *)v12 + 8) * 0.050000001;
    *((float *)v12 + 9) = *((float *)v12 + 9) * 0.050000001;
    *((float *)v12 + 10) = *((float *)v12 + 10) * 0.050000001;
    *((float *)v12 + 11) = *((float *)v12 + 11) * 0.050000001;
    *((float *)v12 + 12) = *((float *)v12 + 12) * 0.050000001;
    *((float *)v12 + 13) = *((float *)v12 + 13) * 0.050000001;
    *((float *)v12 + 14) = *((float *)v12 + 14) * 0.050000001;
    *((float *)v12 + 15) = *((float *)v12 + 15) * 0.050000001;
    v12[64] = 1;
    if ( bilinear )
      v12[64] = 3;
    v13->GetRect(v13, (Scaleform::Render::Rect<unsigned long> *)v43);
    *(_OWORD *)&v46.M[0][0] = _xmm;
    *(_OWORD *)&v46.M[1][0] = _xmm;
    ((void (__fastcall *)(Scaleform::Render::ImageBase *, Scaleform::Render::Matrix2x4<float> *))v13->__vftable[1].GetImageType)(
      v13,
      &v46);
    pr = 0i64;
    r.x1 = (float)v43[0];
    r.y1 = (float)v43[1];
    r.x2 = (float)v43[2];
    r.y2 = (float)v43[3];
    Scaleform::Render::Matrix2x4<float>::EncloseTransform(&v46, &pr, &r);
    Scaleform::ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorLH<Scaleform::Render::FillStyleType,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
      &v9->Fills.Data,
      &v9->Fills,
      v9->Fills.Data.Size + 1);
    v18 = (__int64)&v9->Fills.Data.Data[v9->Fills.Data.Size - 1];
    if ( v18 )
    {
      *(_DWORD *)v18 = v35;
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v12);
      *(_QWORD *)(v18 + 8) = v12;
    }
    Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::StartPath(
      v9,
      1u,
      0,
      0);
    Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::MoveTo(
      v9,
      0.0,
      0.0);
    Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::LineTo(
      v9,
      (float)(pr.x2 - pr.x1) * 20.0,
      0.0);
    Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::LineTo(
      v9,
      (float)(pr.x2 - pr.x1) * 20.0,
      (float)(pr.y2 - pr.y1) * 20.0);
    Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::LineTo(
      v9,
      0.0,
      (float)(pr.y2 - pr.y1) * 20.0);
    StartX = v9->StartX;
    if ( v9->LastX != StartX || v9->LastY != v9->StartY )
      Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::LineTo(
        v9,
        StartX,
        v9->StartY);
    Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::EndPath(v9);
    Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::EndShape(v9);
    v32 = 2;
    v20 = (Scaleform::Render::ShapeMeshProvider *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                    Scaleform::Memory::pGlobalHeap,
                                                    this,
                                                    144i64,
                                                    &v32);
    if ( v20 )
    {
      Scaleform::Render::ShapeMeshProvider::ShapeMeshProvider(v20, v9, 0i64);
      v22 = v21;
    }
    else
    {
      v22 = 0i64;
    }
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v9);
    pObject = (Scaleform::RefCountVImpl *)this->pShape.pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    this->pShape.pObject = v9;
    v33 = 2;
    v24 = (Scaleform::Render::ShapeMeshProvider *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                    Scaleform::Memory::pGlobalHeap,
                                                    this,
                                                    144i64,
                                                    &v33);
    if ( v24 )
    {
      Scaleform::Render::ShapeMeshProvider::ShapeMeshProvider(v24, this->pShape.pObject, 0i64);
      v4 = v25;
    }
    v26 = this->pShapeMeshProvider.pObject;
    if ( v26 )
      v26->Release(&v26->Scaleform::Render::MeshProvider);
    this->pShapeMeshProvider.pObject = v4;
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v22 + 16) + 16i64))(v22 + 16);
    v13->Release(v13);
  }
  else
  {
    v31 = 135168;
    Scaleform::LogDebugMessage((Scaleform::LogMessageId)&v31, "Image is not created.");
  }
LABEL_40:
  if ( v12 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v12);
  if ( v9 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v9);
}

void __fastcall Scaleform::GFx::ShapeDataBase::ShapeDataBase(
        Scaleform::GFx::ShapeDataBase *this,
        Scaleform::GFx::ShapeDataBase::EmptyShape __formal)
{
  this->Flags = 0;
  this->__vftable = (Scaleform::GFx::ShapeDataBase_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::GFx::ShapeDataBase_vtbl *)&Scaleform::GFx::ShapeDataBase::`vftable';
  this->Paths = emptyShp;
  this->RefCount = 1;
}

void __fastcall Scaleform::GFx::SwfShapeCharacterDef::SwfShapeCharacterDef(
        Scaleform::GFx::SwfShapeCharacterDef *this,
        Scaleform::GFx::ShapeDataBase *shp)
{
  Scaleform::Render::ShapeMeshProvider *v2; // rdi
  Scaleform::Render::ShapeMeshProvider *v5; // rax
  Scaleform::Render::ShapeMeshProvider *v6; // rax
  Scaleform::Render::ShapeMeshProvider *pObject; // rcx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0i64;
  this->__vftable = (Scaleform::GFx::SwfShapeCharacterDef_vtbl *)&Scaleform::GFx::Resource::`vftable';
  this->RefCount.Value = 1;
  this->pLib = 0i64;
  this->Id.Id = 0x40000;
  this->pShapeMeshProvider.pObject = 0i64;
  this->__vftable = (Scaleform::GFx::SwfShapeCharacterDef_vtbl *)&Scaleform::GFx::SwfShapeCharacterDef::`vftable';
  if ( shp )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)shp);
  this->pShape.pObject = shp;
  v8 = 2;
  v5 = (Scaleform::Render::ShapeMeshProvider *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                 Scaleform::Memory::pGlobalHeap,
                                                 this,
                                                 144i64,
                                                 &v8);
  if ( v5 )
  {
    Scaleform::Render::ShapeMeshProvider::ShapeMeshProvider(v5, this->pShape.pObject, 0i64);
    v2 = v6;
  }
  pObject = this->pShapeMeshProvider.pObject;
  if ( pObject )
    pObject->Release(&pObject->Scaleform::Render::MeshProvider);
  this->pShapeMeshProvider.pObject = v2;
}

void __fastcall Scaleform::GFx::SwfShapeDecoder::SwfShapeDecoder(
        Scaleform::GFx::SwfShapeDecoder *this,
        Scaleform::Render::ShapePosInfo *pos,
        const unsigned __int8 *shapeData,
        float sfactor)
{
  int v5; // edx
  unsigned __int64 CurByteIndex; // rcx
  unsigned __int8 v7; // dl
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned __int64 v15; // rcx
  unsigned __int8 v16; // dl
  unsigned __int64 v17; // rcx
  int v18; // edx
  unsigned __int64 v19; // rcx
  int v20; // edx
  int v21; // eax
  unsigned __int64 v22; // rcx
  int v23; // edx
  int v24; // eax

  this->Stream.pData = shapeData;
  this->Stream.DataSize = -1i64;
  this->Stream.CurByteIndex = 0i64;
  this->Stream.CurBitIndex = 0;
  this->Pos = pos;
  if ( pos->Initialized )
  {
    this->Stream.CurByteIndex = (unsigned __int64)pos->Pos >> 11;
    this->Stream.CurBitIndex = pos->Pos & 7;
  }
  else
  {
    pos->Sfactor = sfactor;
    this->Pos->StrokeBase = 0;
    this->Pos->FillBase = 0;
    if ( pos->Pos )
    {
      this->Pos->NumFillBits = (pos->Pos >> 7) & 0xF;
      this->Pos->NumStrokeBits = (pos->Pos >> 3) & 0xF;
      this->Stream.CurByteIndex = (unsigned __int64)pos->Pos >> 11;
      this->Stream.CurBitIndex = pos->Pos & 7;
    }
    else
    {
      switch ( this->Stream.CurBitIndex )
      {
        case 0u:
          v5 = this->Stream.pData[this->Stream.CurByteIndex] >> 4;
          this->Stream.CurBitIndex = 4;
          break;
        case 1u:
          v5 = (this->Stream.pData[this->Stream.CurByteIndex] >> 3) & 0xF;
          this->Stream.CurBitIndex = 5;
          break;
        case 2u:
          v5 = (this->Stream.pData[this->Stream.CurByteIndex] >> 2) & 0xF;
          this->Stream.CurBitIndex = 6;
          break;
        case 3u:
          v5 = (this->Stream.pData[this->Stream.CurByteIndex] >> 1) & 0xF;
          this->Stream.CurBitIndex = 7;
          break;
        case 4u:
          CurByteIndex = this->Stream.CurByteIndex;
          v7 = this->Stream.pData[CurByteIndex];
          this->Stream.CurByteIndex = CurByteIndex + 1;
          v5 = v7 & 0xF;
          this->Stream.CurBitIndex = 0;
          break;
        case 5u:
          v8 = this->Stream.CurByteIndex;
          v5 = (this->Stream.pData[v8 + 1] >> 7) | (2 * (this->Stream.pData[v8] & 7));
          this->Stream.CurBitIndex = 1;
          this->Stream.CurByteIndex = v8 + 1;
          break;
        case 6u:
          v9 = this->Stream.CurByteIndex;
          v5 = (this->Stream.pData[v9 + 1] >> 6) | (4 * (this->Stream.pData[v9] & 3));
          this->Stream.CurBitIndex = 2;
          this->Stream.CurByteIndex = v9 + 1;
          break;
        case 7u:
          v10 = this->Stream.CurByteIndex;
          v5 = (this->Stream.pData[v10 + 1] >> 5) | (8 * (this->Stream.pData[v10] & 1));
          this->Stream.CurBitIndex = 3;
          this->Stream.CurByteIndex = v10 + 1;
          break;
        default:
          v5 = 0;
          break;
      }
      this->Pos->NumFillBits = v5;
      switch ( this->Stream.CurBitIndex )
      {
        case 0u:
          v11 = this->Stream.pData[this->Stream.CurByteIndex];
          this->Stream.CurBitIndex = 4;
          this->Pos->NumStrokeBits = v11 >> 4;
          break;
        case 1u:
          v12 = this->Stream.pData[this->Stream.CurByteIndex];
          this->Stream.CurBitIndex = 5;
          this->Pos->NumStrokeBits = (v12 >> 3) & 0xF;
          break;
        case 2u:
          v13 = this->Stream.pData[this->Stream.CurByteIndex];
          this->Stream.CurBitIndex = 6;
          this->Pos->NumStrokeBits = (v13 >> 2) & 0xF;
          break;
        case 3u:
          v14 = this->Stream.pData[this->Stream.CurByteIndex];
          this->Stream.CurBitIndex = 7;
          this->Pos->NumStrokeBits = (v14 >> 1) & 0xF;
          break;
        case 4u:
          v15 = this->Stream.CurByteIndex;
          v16 = this->Stream.pData[v15];
          this->Stream.CurByteIndex = v15 + 1;
          this->Stream.CurBitIndex = 0;
          this->Pos->NumStrokeBits = v16 & 0xF;
          break;
        case 5u:
          v17 = this->Stream.CurByteIndex;
          v18 = (this->Stream.pData[v17 + 1] >> 7) | (2 * (this->Stream.pData[v17] & 7));
          this->Stream.CurBitIndex = 1;
          this->Stream.CurByteIndex = v17 + 1;
          this->Pos->NumStrokeBits = v18;
          break;
        case 6u:
          v19 = this->Stream.CurByteIndex;
          v20 = this->Stream.pData[v19] & 3;
          v21 = this->Stream.pData[v19 + 1] >> 6;
          this->Stream.CurBitIndex = 2;
          this->Stream.CurByteIndex = v19 + 1;
          this->Pos->NumStrokeBits = v21 | (4 * v20);
          break;
        case 7u:
          v22 = this->Stream.CurByteIndex;
          v23 = this->Stream.pData[v22] & 1;
          v24 = this->Stream.pData[v22 + 1] >> 5;
          this->Stream.CurBitIndex = 3;
          this->Stream.CurByteIndex = v22 + 1;
          this->Pos->NumStrokeBits = v24 | (8 * v23);
          break;
        default:
          this->Pos->NumStrokeBits = 0;
          break;
      }
    }
    this->Pos->LastY = 0;
    this->Pos->LastX = 0;
    this->Pos->Stroke = 0;
    this->Pos->Fill1 = 0;
    this->Pos->Fill0 = 0;
    this->Pos->Initialized = 1;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorGH<Scaleform::Render::FillStyleType,259>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorGH<Scaleform::Render::FillStyleType,259>,Scaleform::ArrayDefaultPolicy>(
        Scaleform::ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorGH<Scaleform::Render::FillStyleType,259>,Scaleform::ArrayDefaultPolicy> *this)
{
  unsigned __int64 Size; // rdi
  Scaleform::RefCountVImpl **p_pFill; // rbx

  Size = this->Size;
  if ( Size )
  {
    p_pFill = (Scaleform::RefCountVImpl **)&this->Data[this->Size - 1].pFill;
    do
    {
      if ( *p_pFill )
        Scaleform::RefCountImpl::Release(*p_pFill);
      p_pFill -= 2;
      --Size;
    }
    while ( Size );
  }
  if ( this->Data )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorGH<Scaleform::Render::StrokeStyleType,259>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorGH<Scaleform::Render::StrokeStyleType,259>,Scaleform::ArrayDefaultPolicy>(
        Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorGH<Scaleform::Render::StrokeStyleType,259>,Scaleform::ArrayDefaultPolicy> *this)
{
  unsigned __int64 Size; // rdi
  Scaleform::Ptr<Scaleform::Render::ComplexFill> *p_pFill; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx

  Size = this->Size;
  if ( Size )
  {
    p_pFill = &this->Data[Size - 1].pFill;
    do
    {
      pObject = (Scaleform::RefCountVImpl *)p_pFill[1].pObject;
      if ( pObject )
        Scaleform::RefCountImpl::Release(pObject);
      if ( p_pFill->pObject )
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)p_pFill->pObject);
      p_pFill -= 5;
      --Size;
    }
    while ( Size );
  }
  if ( this->Data )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
}

void __fastcall Scaleform::GFx::ConstShapeWithStyles::~ConstShapeWithStyles(Scaleform::GFx::ConstShapeWithStyles *this)
{
  unsigned __int8 *Styles; // rbx
  unsigned int v2; // esi
  unsigned int i; // edi
  Scaleform::RefCountVImpl *v5; // rcx
  Scaleform::RefCountVImpl **v6; // rbx
  Scaleform::RefCountVImpl *v7; // rcx

  Styles = this->Styles;
  v2 = 0;
  this->__vftable = (Scaleform::GFx::ConstShapeWithStyles_vtbl *)&Scaleform::GFx::ConstShapeWithStyles::`vftable';
  for ( i = 0; i < this->FillStylesNum; Styles += 16 )
  {
    v5 = (Scaleform::RefCountVImpl *)*((_QWORD *)Styles + 1);
    if ( v5 )
      Scaleform::RefCountImpl::Release(v5);
    ++i;
  }
  if ( this->StrokeStylesNum )
  {
    v6 = (Scaleform::RefCountVImpl **)(Styles + 24);
    do
    {
      v7 = v6[1];
      if ( v7 )
        Scaleform::RefCountImpl::Release(v7);
      if ( *v6 )
        Scaleform::RefCountImpl::Release(*v6);
      ++v2;
      v6 += 5;
    }
    while ( v2 < this->StrokeStylesNum );
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Styles);
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

unsigned __int64 __fastcall Scaleform::FixedSizeHash<unsigned int>::operator()(
        Scaleform::FixedSizeHash<unsigned int> *this,
        const unsigned int *data)
{
  __int64 v2; // rcx
  unsigned __int64 result; // rax
  __int64 v4; // r8

  v2 = 4i64;
  result = 5381i64;
  do
  {
    v4 = *((unsigned __int8 *)data + --v2);
    result = v4 + 65599 * result;
  }
  while ( v2 );
  return result;
}

void __fastcall Scaleform::GFx::ConstShapeWithStyles::BindResourcesInStyles(
        Scaleform::GFx::ConstShapeWithStyles *this,
        const Scaleform::GFx::ResourceBinding *resourceBinding)
{
  unsigned int v2; // ebp
  unsigned __int8 *Styles; // r15
  unsigned __int8 *v6; // rsi
  __int64 v7; // rax
  unsigned int v8; // er8
  Scaleform::RefCountVImpl **v9; // rbx
  void *pObject; // rcx
  __int64 v11; // rbx
  Scaleform::GFx::Resource_vtbl *v12; // rdi
  __int64 v13; // rcx
  Scaleform::RefCountVImpl *v14; // rcx
  unsigned __int64 v15; // rbp
  Scaleform::RefCountVImpl **v16; // rbx
  unsigned int v17; // er8
  Scaleform::RefCountVImpl **v18; // rdi
  void *v19; // rcx
  Scaleform::RefCountVImpl *v20; // rdi
  Scaleform::GFx::Resource_vtbl *v21; // rsi
  Scaleform::RefCountVImpl_vtbl *v22; // rcx
  Scaleform::GFx::ResourceBindData pdata; // [rsp+20h] [rbp-38h] BYREF

  v2 = 0;
  Styles = this->Styles;
  for ( pdata = 0i64; v2 < this->FillStylesNum; ++v2 )
  {
    v6 = &Styles[16 * v2];
    v7 = *((_QWORD *)v6 + 1);
    if ( v7 )
    {
      v8 = *(_DWORD *)(v7 + 68);
      if ( v8 != -1 )
      {
        if ( resourceBinding->Frozen && v8 < resourceBinding->ResourceCount )
        {
          v9 = (Scaleform::RefCountVImpl **)&resourceBinding->pResources[v8];
          if ( *v9 )
            Scaleform::Render::RenderBuffer::AddRef(*v9);
          if ( pdata.pResource.pObject )
            Scaleform::GFx::Resource::Release(pdata.pResource.pObject);
          pObject = *v9;
          pdata = *(Scaleform::GFx::ResourceBindData *)v9;
        }
        else
        {
          Scaleform::GFx::ResourceBinding::GetResourceData_Locked(
            (Scaleform::GFx::ResourceBinding *)resourceBinding,
            &pdata,
            v8);
          pObject = pdata.pResource.pObject;
        }
        if ( pObject && ((*(__int64 (__fastcall **)(void *))(*(_QWORD *)pObject + 16i64))(pObject) & 0xFF00) == 256 )
        {
          v11 = *((_QWORD *)v6 + 1);
          v12 = pdata.pResource.pObject[1].__vftable;
          if ( v12 )
            (*((void (__fastcall **)(Scaleform::GFx::Resource_vtbl *))v12->~Resource + 1))(pdata.pResource.pObject[1].__vftable);
          v13 = *(_QWORD *)(v11 + 16);
          if ( v13 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16i64))(v13);
          *(_QWORD *)(v11 + 16) = v12;
          *(_DWORD *)(*((_QWORD *)v6 + 1) + 68i64) = -1;
        }
        else
        {
          v14 = (Scaleform::RefCountVImpl *)*((_QWORD *)v6 + 1);
          if ( v14 )
            Scaleform::RefCountImpl::Release(v14);
          *((_QWORD *)v6 + 1) = 0i64;
          *(_DWORD *)v6 = -5776071;
        }
      }
    }
  }
  v15 = 0i64;
  if ( this->StrokeStylesNum )
  {
    v16 = (Scaleform::RefCountVImpl **)&Styles[16 * this->FillStylesNum + 24];
    do
    {
      if ( *v16 )
      {
        v17 = HIDWORD((*v16)[4].__vftable);
        if ( v17 != -1 )
        {
          if ( resourceBinding->Frozen && v17 < resourceBinding->ResourceCount )
          {
            v18 = (Scaleform::RefCountVImpl **)&resourceBinding->pResources[v17];
            if ( *v18 )
              Scaleform::Render::RenderBuffer::AddRef(*v18);
            if ( pdata.pResource.pObject )
              Scaleform::GFx::Resource::Release(pdata.pResource.pObject);
            v19 = *v18;
            pdata = *(Scaleform::GFx::ResourceBindData *)v18;
          }
          else
          {
            Scaleform::GFx::ResourceBinding::GetResourceData_Locked(
              (Scaleform::GFx::ResourceBinding *)resourceBinding,
              &pdata,
              v17);
            v19 = pdata.pResource.pObject;
          }
          if ( v19 && ((*(__int64 (__fastcall **)(void *))(*(_QWORD *)v19 + 16i64))(v19) & 0xFF00) == 256 )
          {
            v20 = *v16;
            v21 = pdata.pResource.pObject[1].__vftable;
            if ( v21 )
              (*((void (__fastcall **)(Scaleform::GFx::Resource_vtbl *))v21->~Resource + 1))(pdata.pResource.pObject[1].__vftable);
            v22 = v20[1].__vftable;
            if ( v22 )
              (*((void (__fastcall **)(Scaleform::RefCountVImpl_vtbl *))v22->~RefCountImplCore + 2))(v22);
            v20[1].__vftable = (Scaleform::RefCountVImpl_vtbl *)v21;
            HIDWORD((*v16)[4].__vftable) = -1;
          }
          else
          {
            if ( *v16 )
              Scaleform::RefCountImpl::Release(*v16);
            *v16 = 0i64;
            *((_DWORD *)v16 - 2) = -5776071;
          }
        }
      }
      ++v15;
      v16 += 5;
    }
    while ( v15 < this->StrokeStylesNum );
  }
  if ( pdata.pResource.pObject )
    Scaleform::GFx::Resource::Release(pdata.pResource.pObject);
}

Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> *__fastcall Scaleform::GFx::ShapeBaseCharacterDef::BindResourcesInStyles(
        Scaleform::GFx::ShapeBaseCharacterDef *this,
        Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> *result,
        const Scaleform::GFx::ResourceBinding *__formal)
{
  Scaleform::Render::ShapeMeshProvider *pObject; // rcx

  pObject = this->pShapeMeshProvider.pObject;
  if ( pObject )
    ((void (__fastcall *)(Scaleform::Render::MeshProvider *, Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> *, const Scaleform::GFx::ResourceBinding *))pObject->AddRef)(
      &pObject->Scaleform::Render::MeshProvider,
      result,
      __formal);
  result->pObject = (Scaleform::Render::ShapeMeshProvider *)this->pShapeMeshProvider;
  return result;
}

Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> *__fastcall Scaleform::GFx::SwfShapeCharacterDef::BindResourcesInStyles(
        Scaleform::GFx::SwfShapeCharacterDef *this,
        Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> *result,
        const Scaleform::GFx::ResourceBinding *resourceBinding)
{
  Scaleform::GFx::ShapeDataBase *v6; // rbx
  Scaleform::Render::ShapeMeshProvider *v7; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v6 = this->pShape.pObject->Clone(this->pShape.pObject);
  v6->BindResourcesInStyles(v6, resourceBinding);
  v9 = 2;
  v7 = (Scaleform::Render::ShapeMeshProvider *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                 Scaleform::Memory::pGlobalHeap,
                                                 this,
                                                 144i64,
                                                 &v9);
  if ( v7 )
    Scaleform::Render::ShapeMeshProvider::ShapeMeshProvider(v7, v6, 0i64);
  result->pObject = v7;
  Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v6);
  return result;
}

void __fastcall Scaleform::HashSetBase<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::TR::NodeBlock *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>>::Clear(
        Scaleform::HashSetBase<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::AllocatorDH<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,348>,Scaleform::HashsetCachedEntry<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor> > *this)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // r8

  if ( this->pTable )
  {
    v2 = 0i64;
    v3 = this->pTable->SizeMask + 1;
    do
    {
      if ( *(unsigned __int64 *)((char *)&this->pTable[1].EntryCount + v2) != -2i64 )
        *(unsigned __int64 *)((char *)&this->pTable[1].EntryCount + v2) = -2i64;
      v2 += 24i64;
      --v3;
    }
    while ( v3 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    this->pTable = 0i64;
  }
}

Scaleform::GFx::ShapeDataBase *__fastcall Scaleform::GFx::ConstShapeNoStyles::Clone(
        Scaleform::GFx::ConstShapeNoStyles *this)
{
  Scaleform::GFx::ShapeDataBase *result; // rax
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 71;
  result = (Scaleform::GFx::ShapeDataBase *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                              Scaleform::Memory::pGlobalHeap,
                                              this,
                                              32i64,
                                              &v3);
  if ( result )
  {
    result->__vftable = (Scaleform::GFx::ShapeDataBase_vtbl *)&Scaleform::RefCountImplCore::`vftable';
    result->__vftable = (Scaleform::GFx::ShapeDataBase_vtbl *)&Scaleform::GFx::ShapeDataBase::`vftable';
    result->RefCount = 1;
    result->Paths = this->Paths;
    result->Flags = this->Flags;
    result->__vftable = (Scaleform::GFx::ShapeDataBase_vtbl *)&Scaleform::GFx::ConstShapeNoStyles::`vftable';
  }
  return result;
}

void __fastcall Scaleform::GFx::ConstShapeWithStyles::Clone(Scaleform::GFx::ConstShapeWithStyles *this)
{
  Scaleform::GFx::ConstShapeWithStyles *v2; // rax
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 71;
  v2 = (Scaleform::GFx::ConstShapeWithStyles *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                 Scaleform::Memory::pGlobalHeap,
                                                 this,
                                                 80i64,
                                                 &v3);
  if ( v2 )
    Scaleform::GFx::ConstShapeWithStyles::ConstShapeWithStyles(v2, this);
}

void __fastcall Scaleform::GFx::ShapeDataBase::ComputeBound(
        Scaleform::GFx::ShapeDataBase *this,
        Scaleform::Render::Rect<float> *r)
{
  Scaleform::GFx::ShapeDataBase_vtbl *v4; // rax
  Scaleform::GFx::ShapeDataBase_vtbl *v5; // rax
  Scaleform::Render::Rect<float> bounds; // [rsp+30h] [rbp-59h] BYREF
  Scaleform::Render::ShapePosInfo pos; // [rsp+40h] [rbp-49h] BYREF
  Scaleform::Render::Matrix2x4<float> trans; // [rsp+80h] [rbp-9h] BYREF
  int v9[4]; // [rsp+A0h] [rbp+17h] BYREF
  float coord[6]; // [rsp+B0h] [rbp+27h] BYREF

  v4 = this->__vftable;
  *(_OWORD *)&trans.M[0][0] = _xmm;
  bounds = (Scaleform::Render::Rect<float>)_xmm_f149f2caf149f2ca7149f2ca7149f2ca;
  *(_OWORD *)&trans.M[1][0] = _xmm;
  pos.Pos = v4->GetStartingPos(this);
  v5 = this->__vftable;
  LODWORD(pos.Sfactor) = FLOAT_1_0;
  memset(&pos.StartX, 0, 44);
  pos.Initialized = 0;
  if ( v5->ReadPathInfo(this, &pos, coord, (unsigned int *)v9) )
  {
    do
    {
      if ( (v9[0] == 0) == (v9[1] == 0) )
        this->SkipPathData(this, &pos);
      else
        Scaleform::Render::ExpandBoundsToPath<Scaleform::Render::Matrix2x4<float>>(this, &trans, &pos, coord, &bounds);
    }
    while ( this->ReadPathInfo(this, &pos, coord, (unsigned int *)v9) );
  }
  *r = bounds;
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

__int64 __fastcall Scaleform::GFx::ConvertSwfLineStyles(unsigned int swfLineStyle)
{
  __int16 v1; // r9
  unsigned int v2; // er8
  int v3; // edx
  int v4; // ecx
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  int v8; // er8
  unsigned int v9; // ecx
  __int64 result; // rax

  v1 = swfLineStyle;
  v2 = swfLineStyle & 1 | 2;
  if ( (swfLineStyle & 2) == 0 )
    v2 = swfLineStyle & 1;
  v3 = v2 | 4;
  if ( (swfLineStyle & 4) == 0 )
    v3 = v2;
  if ( (swfLineStyle & 6) == 6 )
    v3 = 6;
  v4 = v3 | 0x10;
  if ( (v1 & 0x10) == 0 )
    v4 = v3;
  v5 = v4 | 0x20;
  if ( (v1 & 0x20) == 0 )
    v5 = v4;
  v6 = v5 | 0x40;
  if ( (v1 & 0x40) == 0 )
    v6 = v5;
  v7 = v6 | 0x80;
  if ( (v1 & 0x80u) == 0 )
    v7 = v6;
  v8 = v7 | 0x100;
  if ( (v1 & 0x100) == 0 )
    v8 = v7;
  v9 = v8 | 0x200;
  if ( (v1 & 0x200) == 0 )
    v9 = v8;
  result = v9 | 8;
  if ( (v1 & 8) == 0 )
    return v9;
  return result;
}

bool __fastcall Scaleform::GFx::ImageShapeCharacterDef::DefPointTestLocal(
        Scaleform::GFx::ImageShapeCharacterDef *this,
        const Scaleform::Render::Point<float> *pt,
        __int64 testShape,
        const Scaleform::GFx::DisplayObjectBase *pinst)
{
  char v6; // di
  float x; // xmm2_4
  float y; // xmm3_4
  int v10[4]; // [rsp+20h] [rbp-28h] BYREF

  v6 = testShape;
  ((void (__fastcall *)(Scaleform::Render::MeshProvider *, int *, __int64, const Scaleform::GFx::DisplayObjectBase *))this->pShapeMeshProvider.pObject->GetIdentityBounds)(
    &this->pShapeMeshProvider.pObject->Scaleform::Render::MeshProvider,
    v10,
    testShape,
    pinst);
  x = pt->x;
  if ( *(float *)&v10[2] < pt->x )
    return 0;
  if ( x < *(float *)v10 )
    return 0;
  y = pt->y;
  if ( *(float *)&v10[3] < y || y < *(float *)&v10[1] )
    return 0;
  if ( v6 )
    return Scaleform::Render::HitTestFill<Scaleform::Render::Matrix2x4<float>>(
             this->pShape.pObject,
             (const Scaleform::Render::Matrix2x4<float> *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][152],
             x,
             y);
  return 1;
}

_BOOL8 __fastcall Scaleform::GFx::ShapeDataBase::DefPointTestLocal(
        Scaleform::GFx::ShapeDataBase *this,
        Scaleform::Render::ShapeMeshProvider *pshapeMeshProvider,
        const Scaleform::Render::Point<float> *pt,
        bool testShape,
        const Scaleform::GFx::DisplayObjectBase *pinst)
{
  Scaleform::Render::Scale9GridInfo *Scale9Grid; // rbx
  Scaleform::Render::Rect<float> *v10; // rax
  float y2; // xmm5_4
  float x2; // xmm0_4
  float y1; // xmm4_4
  float x1; // xmm1_4
  float x; // xmm2_4
  float y; // xmm3_4
  const Scaleform::Render::TransformerBase *p_result; // rdx
  bool v18; // di
  void **v20; // [rsp+20h] [rbp-68h] BYREF
  char *v21; // [rsp+28h] [rbp-60h]
  Scaleform::Render::Rect<float> bounds; // [rsp+30h] [rbp-58h] BYREF
  Scaleform::Render::Rect<float> result; // [rsp+40h] [rbp-48h] BYREF

  Scale9Grid = 0i64;
  if ( pinst && (pinst->Flags & 1) != 0 )
    Scale9Grid = Scaleform::GFx::DisplayObjectBase::CreateScale9Grid((Scaleform::GFx::DisplayObjectBase *)pinst);
  pshapeMeshProvider->GetIdentityBounds(&pshapeMeshProvider->Scaleform::Render::MeshProvider, &bounds);
  if ( Scale9Grid )
  {
    v10 = Scaleform::Render::Scale9GridInfo::AdjustBounds(Scale9Grid, &result, &bounds);
    y2 = v10->y2;
    x2 = v10->x2;
    y1 = v10->y1;
    x1 = v10->x1;
    bounds.x1 = v10->x1;
    bounds.y1 = y1;
    bounds.x2 = x2;
    bounds.y2 = y2;
  }
  else
  {
    y2 = bounds.y2;
    x2 = bounds.x2;
    y1 = bounds.y1;
    x1 = bounds.x1;
  }
  x = pt->x;
  if ( x2 < pt->x || x < x1 || (y = pt->y, y2 < y) || y < y1 )
  {
    v18 = 0;
  }
  else if ( testShape )
  {
    v21 = 0i64;
    v20 = &Scaleform::Render::TransformerWrapper<Scaleform::Render::Matrix2x4<float>>::`vftable';
    *(_QWORD *)&result.x1 = &Scaleform::Render::TransformerWrapper<Scaleform::Render::Scale9GridInfo>::`vftable';
    *(_QWORD *)&result.x2 = 0i64;
    if ( Scale9Grid )
      *(_QWORD *)&result.x2 = Scale9Grid;
    else
      v21 = &extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][152];
    p_result = (const Scaleform::Render::TransformerBase *)&v20;
    if ( Scale9Grid )
      p_result = (const Scaleform::Render::TransformerBase *)&result;
    v18 = Scaleform::Render::HitTestFill<Scaleform::Render::TransformerBase>(this, p_result, x, y);
  }
  else
  {
    v18 = 1;
  }
  if ( Scale9Grid )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)Scale9Grid);
  return v18;
}

_BOOL8 __fastcall Scaleform::GFx::SwfShapeCharacterDef::DefPointTestLocal(
        Scaleform::GFx::SwfShapeCharacterDef *this,
        const Scaleform::Render::Point<float> *pt,
        bool testShape,
        const Scaleform::GFx::DisplayObjectBase *pinst)
{
  return Scaleform::GFx::ShapeDataBase::DefPointTestLocal(
           this->pShape.pObject,
           this->pShapeMeshProvider.pObject,
           pt,
           testShape,
           pinst);
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::ImageShapeCharacterDef::GetBoundsLocal(
        Scaleform::Render::MeshKeySet *this,
        Scaleform::Render::Rect<float> *result)
{
  ((void (__fastcall *)(Scaleform::Render::MeshProvider *))this->pDelegate->GetIdentityBounds)(&this->pDelegate->Scaleform::Render::MeshProvider);
  return result;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::SwfShapeCharacterDef::GetBoundsLocal(
        Scaleform::GFx::SwfShapeCharacterDef *this,
        Scaleform::Render::Rect<float> *result,
        float __formal)
{
  int *v5; // rax
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // ecx
  Scaleform::Render::Rect<float> *v10; // rax
  int v11[4]; // [rsp+20h] [rbp-38h] BYREF
  float v12; // [rsp+30h] [rbp-28h] BYREF
  float v13; // [rsp+34h] [rbp-24h]
  float v14; // [rsp+38h] [rbp-20h]
  float v15; // [rsp+3Ch] [rbp-1Ch]

  this->pShape.pObject->GetBoundsLocal(this->pShape.pObject, (Scaleform::Render::Rect<float> *)&v12);
  if ( v12 >= v14 || v13 >= v15 )
  {
    v5 = (int *)this->pShapeMeshProvider.pObject->GetIdentityBounds(
                  &this->pShapeMeshProvider.pObject->Scaleform::Render::MeshProvider,
                  v11);
  }
  else
  {
    *(float *)v11 = v12;
    v5 = v11;
    *(float *)&v11[1] = v13;
    *(float *)&v11[2] = v14;
    *(float *)&v11[3] = v15;
  }
  v6 = *((float *)v5 + 3);
  v7 = *((float *)v5 + 2);
  v8 = *((float *)v5 + 1);
  v9 = *(float *)v5;
  v10 = result;
  result->y1 = v8;
  result->x2 = v7;
  result->y2 = v6;
  result->x1 = v9;
  return v10;
}

void __fastcall Scaleform::GFx::ConstShapeWithStyles::GetFillStyle(
        Scaleform::GFx::ConstShapeWithStyles *this,
        unsigned int idx,
        Scaleform::Render::FillStyleType *p)
{
  unsigned __int8 *v4; // rbx
  Scaleform::RefCountVImpl *v5; // rcx
  Scaleform::RefCountVImpl *pObject; // rcx

  v4 = &this->Styles[16 * idx - 16];
  p->Color = *(_DWORD *)v4;
  v5 = (Scaleform::RefCountVImpl *)*((_QWORD *)v4 + 1);
  if ( v5 )
    Scaleform::Render::RenderBuffer::AddRef(v5);
  pObject = (Scaleform::RefCountVImpl *)p->pFill.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  p->pFill.pObject = (Scaleform::Render::ComplexFill *)*((_QWORD *)v4 + 1);
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::ImageShapeCharacterDef::GetRectBoundsLocal(
        Scaleform::GFx::ImageShapeCharacterDef *this,
        Scaleform::Render::Rect<float> *result,
        float __formal)
{
  ((void (__fastcall *)(Scaleform::GFx::ImageShapeCharacterDef *))this->GetBoundsLocal)(this);
  return result;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::SwfShapeCharacterDef::GetRectBoundsLocal(
        Scaleform::GFx::SwfShapeCharacterDef *this,
        Scaleform::Render::Rect<float> *result,
        float mr)
{
  int *v5; // rax
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // ecx
  Scaleform::Render::Rect<float> *v10; // rax
  int v11[4]; // [rsp+20h] [rbp-48h] BYREF
  float v12; // [rsp+30h] [rbp-38h] BYREF
  float v13; // [rsp+34h] [rbp-34h]
  float v14; // [rsp+38h] [rbp-30h]
  float v15; // [rsp+3Ch] [rbp-2Ch]

  this->pShape.pObject->GetRectBoundsLocal(this->pShape.pObject, (Scaleform::Render::Rect<float> *)&v12);
  if ( v12 >= v14 || v13 >= v15 )
  {
    v5 = (int *)((__int64 (__fastcall *)(Scaleform::GFx::SwfShapeCharacterDef *, int *))this->GetBoundsLocal)(this, v11);
  }
  else
  {
    *(float *)v11 = v12;
    v5 = v11;
    *(float *)&v11[1] = v13;
    *(float *)&v11[2] = v14;
    *(float *)&v11[3] = v15;
  }
  v6 = *((float *)v5 + 3);
  v7 = *((float *)v5 + 2);
  v8 = *((float *)v5 + 1);
  v9 = *(float *)v5;
  v10 = result;
  result->y1 = v8;
  result->x2 = v7;
  result->y2 = v6;
  result->x1 = v9;
  return v10;
}

__int64 __fastcall Scaleform::GFx::ShapeBaseCharacterDef::GetResourceTypeCode(
        Scaleform::GFx::ShapeBaseCharacterDef *this)
{
  return 34048i64;
}

Scaleform::GFx::AS3::VMAppDomain *__fastcall Scaleform::GFx::FontManagerStates::GetStateBagImpl(
        Scaleform::GFx::AS3::VMAppDomain *this)
{
  return this->ParentDomain;
}

void __fastcall Scaleform::GFx::ConstShapeWithStyles::GetStrokeStyle(
        Scaleform::GFx::ConstShapeWithStyles *this,
        unsigned int idx,
        Scaleform::Render::StrokeStyleType *p)
{
  Scaleform::Render::StrokeStyleType::operator=(
    p,
    (const Scaleform::Render::StrokeStyleType *)&this->Styles[40 * idx - 40 + 16 * this->FillStylesNum]);
}

__int64 __fastcall AgUser::isSignedIn(Concurrency::details::ThreadInternalContext *this)
{
  return 1i64;
}

bool __fastcall Scaleform::GFx::InteractiveObject::OnCharEvent(
        Scaleform::Render::Texture *this,
        Scaleform::Render::RenderTargetData *__formal)
{
  return 0;
}

bool __fastcall Scaleform::GFx::MorphCharacterDef::IsEqualGeometry(
        Scaleform::GFx::SwfShapeCharacterDef *this,
        const Scaleform::GFx::ShapeBaseCharacterDef *cmpWith)
{
  return 0;
}

void __fastcall Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
        Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *this,
        const char *pfmt)
{
  ;
}

__int64 __fastcall Scaleform::GFx::SwfShapeCharacterDef::NeedsResolving(Scaleform::GFx::SwfShapeCharacterDef *this)
{
  return (this->pShape.pObject->Flags >> 2) & 1;
}

_BOOL8 __fastcall Scaleform::GFx::ConstShapeNoStyles::Read(
        Scaleform::GFx::ConstShapeNoStyles *this,
        Scaleform::GFx::LoadProcess *p,
        Scaleform::GFx::TagType tagType,
        unsigned int lenInBytes,
        bool withStyle)
{
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // rax
  Scaleform::GFx::PathAllocator *pPathAllocator; // rcx
  bool v7; // bl
  Scaleform::GFx::ShapeSwfReader v9; // [rsp+30h] [rbp-48h] BYREF

  pObject = p->pLoadData.pObject;
  v9.Shape = this;
  pPathAllocator = pObject->pPathAllocator;
  memset(&v9.FillStyles, 0, 48);
  v9.pAllocator = pPathAllocator;
  v7 = Scaleform::GFx::ShapeSwfReader::Read(&v9, p, tagType, lenInBytes, withStyle);
  Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorGH<Scaleform::Render::StrokeStyleType,259>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorGH<Scaleform::Render::StrokeStyleType,259>,Scaleform::ArrayDefaultPolicy>(&v9.StrokeStyles.Data);
  Scaleform::ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorGH<Scaleform::Render::FillStyleType,259>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorGH<Scaleform::Render::FillStyleType,259>,Scaleform::ArrayDefaultPolicy>(&v9.FillStyles.Data);
  return v7;
}

__int64 __fastcall Scaleform::GFx::ConstShapeWithStyles::Read(
        Scaleform::GFx::ConstShapeWithStyles *this,
        Scaleform::GFx::LoadProcess *p,
        Scaleform::GFx::TagType tagType,
        unsigned int lenInBytes,
        bool withStyle)
{
  unsigned int v6; // ebp
  Scaleform::GFx::PathAllocator *pPathAllocator; // r10
  bool v9; // al
  unsigned __int64 Size; // r12
  Scaleform::Render::StrokeStyleType *Data; // rsi
  unsigned __int64 v12; // r13
  unsigned __int8 v13; // di
  unsigned int v14; // edi
  unsigned __int8 *v15; // r14
  Scaleform::Render::FillStyleType *v16; // rax
  Scaleform::Render::FillStyleType *v17; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx
  unsigned __int8 *v19; // rdi
  Scaleform::RefCountVImpl *v20; // rcx
  Scaleform::RefCountVImpl *v21; // rcx
  __int64 p_pFill; // rbx
  Scaleform::RefCountVImpl *v23; // rcx
  Scaleform::RefCountVImpl **v24; // rbx
  Scaleform::GFx::ShapeSwfReader v26; // [rsp+30h] [rbp-68h] BYREF

  v6 = 0;
  pPathAllocator = p->pLoadData.pObject->pPathAllocator;
  v26.Shape = this;
  v26.pAllocator = pPathAllocator;
  memset(&v26.FillStyles, 0, 48);
  v9 = Scaleform::GFx::ShapeSwfReader::Read(&v26, p, tagType, lenInBytes, withStyle);
  Size = v26.StrokeStyles.Data.Size;
  Data = v26.StrokeStyles.Data.Data;
  v12 = v26.FillStyles.Data.Size;
  if ( v9 )
  {
    this->FillStylesNum = v26.FillStyles.Data.Size;
    this->StrokeStylesNum = Size;
    if ( (_DWORD)v12 || (_DWORD)Size )
    {
      v14 = 0;
      v15 = (unsigned __int8 *)p->pLoadData.pObject->pHeap->Alloc(
                                 p->pLoadData.pObject->pHeap,
                                 16i64 * (unsigned int)v12 + 40i64 * (unsigned int)Size,
                                 0i64);
      this->Styles = v15;
      if ( this->FillStylesNum )
      {
        v16 = v26.FillStyles.Data.Data;
        do
        {
          v17 = &v16[v14];
          if ( v15 )
          {
            *(_DWORD *)v15 = v17->Color;
            pObject = (Scaleform::RefCountVImpl *)v17->pFill.pObject;
            if ( pObject )
              Scaleform::Render::RenderBuffer::AddRef(pObject);
            *((_QWORD *)v15 + 1) = v17->pFill.pObject;
            v16 = v26.FillStyles.Data.Data;
          }
          v15 += 16;
          ++v14;
        }
        while ( v14 < this->FillStylesNum );
      }
      if ( this->StrokeStylesNum )
      {
        do
        {
          v19 = &v15[40 * v6];
          if ( v19 )
          {
            *(float *)v19 = Data[v6].Width;
            *((_DWORD *)v19 + 1) = LODWORD(Data[v6].Units);
            *((_DWORD *)v19 + 2) = Data[v6].Flags;
            *((_DWORD *)v19 + 3) = LODWORD(Data[v6].Miter);
            *((_DWORD *)v19 + 4) = Data[v6].Color;
            v20 = (Scaleform::RefCountVImpl *)Data[v6].pFill.pObject;
            if ( v20 )
              Scaleform::Render::RenderBuffer::AddRef(v20);
            *((_QWORD *)v19 + 3) = Data[v6].pFill.pObject;
            v21 = (Scaleform::RefCountVImpl *)Data[v6].pDashes.pObject;
            if ( v21 )
              Scaleform::Render::RenderBuffer::AddRef(v21);
            *((_QWORD *)v19 + 4) = Data[v6].pDashes.pObject;
          }
          ++v6;
        }
        while ( v6 < this->StrokeStylesNum );
      }
    }
    else
    {
      this->Styles = 0i64;
    }
    v13 = 1;
  }
  else
  {
    v13 = 0;
  }
  if ( Size )
  {
    p_pFill = (__int64)&Data[Size - 1].pFill;
    do
    {
      v23 = *(Scaleform::RefCountVImpl **)(p_pFill + 8);
      if ( v23 )
        Scaleform::RefCountImpl::Release(v23);
      if ( *(_QWORD *)p_pFill )
        Scaleform::RefCountImpl::Release(*(Scaleform::RefCountVImpl **)p_pFill);
      p_pFill -= 40i64;
      --Size;
    }
    while ( Size );
  }
  if ( Data )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, Data);
  if ( v12 )
  {
    v24 = (Scaleform::RefCountVImpl **)&v26.FillStyles.Data.Data[v12 - 1].pFill;
    do
    {
      if ( *v24 )
        Scaleform::RefCountImpl::Release(*v24);
      v24 -= 2;
      --v12;
    }
    while ( v12 );
  }
  if ( v26.FillStyles.Data.Data )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v26.FillStyles.Data.Data);
  return v13;
}

void __fastcall Scaleform::GFx::FillStyleSwfReader::Read(
        Scaleform::GFx::FillStyleSwfReader *this,
        Scaleform::GFx::LoadProcess *p,
        Scaleform::GFx::TagType tagType)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rbx
  int v6; // eax
  __int64 Pos; // rcx
  Scaleform::GFx::Resource *pResource; // rsi
  int v9; // er13
  Scaleform::Render::FillStyleType *v10; // rbx
  Scaleform::RefCountVImpl *v11; // rcx
  Scaleform::GFx::SWFProcessInfo *p_ProcessInfo; // rcx
  float v13; // xmm8_4
  Scaleform::GFx::SWFProcessInfo *v14; // rbx
  float v15; // xmm12_4
  float v16; // xmm10_4
  float v17; // xmm11_4
  float v18; // xmm13_4
  float v19; // xmm8_4
  float v20; // xmm9_4
  int v21; // eax
  __int64 v22; // rdx
  Scaleform::Render::GradientType v23; // edi
  unsigned __int8 v24; // cl
  char *v25; // rax
  Scaleform::RefCountVImpl *v26; // rbx
  Scaleform::RefCountVImpl **p_pFill; // rax
  Scaleform::Render::GradientData *v28; // rax
  Scaleform::Render::GradientData *v29; // rax
  Scaleform::Render::GradientData *v30; // rdi
  Scaleform::Render::ComplexFill *pObject; // rbx
  Scaleform::RefCountVImpl *v32; // rcx
  __int64 v33; // r15
  Scaleform::GFx::SWFProcessInfo *v34; // rdi
  int v35; // eax
  __int64 v36; // rcx
  unsigned __int8 v37; // bl
  Scaleform::GFx::SWFProcessInfo *v38; // rbx
  int v39; // eax
  __int64 v40; // r9
  __int16 v41; // r8
  Scaleform::Render::ComplexFill *v42; // rcx
  unsigned int U16; // ebx
  Scaleform::GFx::SWFProcessInfo *v44; // rcx
  __int64 v45; // rax
  Scaleform::RefCountVImpl *v46; // rdi
  Scaleform::RefCountVImpl **v47; // rax
  __int128 v48; // xmm0
  Scaleform::Render::ComplexFill *v49; // rcx
  Scaleform::GFx::MovieDataDef::LoadTaskData *v50; // rcx
  Scaleform::Render::ComplexFill *v51; // rdi
  Scaleform::Render::Image *v52; // rbx
  Scaleform::Render::Image *v53; // rcx
  Scaleform::GFx::TempBindData *pTempBindData; // rcx
  Scaleform::Render::FillStyleType *FillStyle; // rdi
  Scaleform::RefCountVImpl *v56; // rcx
  unsigned __int16 v57; // [rsp+22h] [rbp-DEh]
  unsigned int v59; // [rsp+28h] [rbp-D8h]
  Scaleform::LogMessageId id[2]; // [rsp+30h] [rbp-D0h] BYREF
  Scaleform::GFx::ResourceHandle phandle; // [rsp+38h] [rbp-C8h] BYREF
  Scaleform::Render::Color pc; // [rsp+48h] [rbp-B8h] BYREF
  BOOL v63; // [rsp+4Ch] [rbp-B4h]
  Scaleform::Render::Color v64; // [rsp+50h] [rbp-B0h] BYREF
  Scaleform::GFx::ResourceId rid; // [rsp+54h] [rbp-ACh] BYREF
  Scaleform::Render::Matrix2x4<float> v66; // [rsp+60h] [rbp-A0h] BYREF
  Scaleform::Render::Matrix2x4<float> v67; // [rsp+80h] [rbp-80h] BYREF
  float v68; // [rsp+A0h] [rbp-60h]
  float v69; // [rsp+A4h] [rbp-5Ch]
  int v70; // [rsp+A8h] [rbp-58h]
  float v71; // [rsp+ACh] [rbp-54h]
  float v72; // [rsp+B0h] [rbp-50h]
  float v73; // [rsp+B4h] [rbp-4Ch]
  int v74; // [rsp+B8h] [rbp-48h]
  float v75; // [rsp+BCh] [rbp-44h]
  __int128 v76; // [rsp+C0h] [rbp-40h]
  int v77; // [rsp+D0h] [rbp-30h]
  __int64 v78; // [rsp+D4h] [rbp-2Ch]
  float v79; // [rsp+DCh] [rbp-24h]
  Scaleform::Render::Matrix2x4<float> pm; // [rsp+E0h] [rbp-20h] BYREF
  Scaleform::Render::Matrix2x4<float> m; // [rsp+100h] [rbp+0h] BYREF

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  v6 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v6 < 1 )
    Scaleform::GFx::Stream::PopulateBuffer1(&pAltStream->Stream);
  Pos = pAltStream->Stream.Pos;
  pResource = 0i64;
  v9 = pAltStream->Stream.pBuffer[Pos];
  pAltStream->Stream.Pos = Pos + 1;
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
    "  FillStyle read type = 0x%X\n");
  if ( (_BYTE)v9 )
  {
    if ( (v9 & 0x10) != 0 )
    {
      p_ProcessInfo = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
      *(_OWORD *)&pm.M[0][0] = _xmm;
      *(_OWORD *)&pm.M[1][0] = _xmm;
      if ( !p_ProcessInfo )
        p_ProcessInfo = &p->ProcessInfo;
      Scaleform::GFx::Stream::ReadMatrix(&p_ProcessInfo->Stream, &pm);
      if ( (_BYTE)v9 == 16 )
        v13 = 0.0;
      else
        v13 = FLOAT_0_5;
      *(_OWORD *)&v67.M[0][0] = _xmm;
      *(_OWORD *)&v67.M[1][0] = _xmm;
      Scaleform::Render::Matrix2x4<float>::SetInverse(&v67, &pm);
      v14 = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
      v76 = _xmm;
      v77 = 0;
      v78 = 939524096i64;
      v74 = 0;
      v70 = 0;
      v15 = (float)(v67.M[1][0] * 0.0) + (float)(v67.M[0][0] * 0.000030517578);
      v16 = (float)(v67.M[1][0] * 0.000030517578) + (float)(v67.M[0][0] * 0.0);
      v79 = v13;
      v68 = v15;
      v17 = (float)(v67.M[1][1] * 0.000030517578) + (float)(v67.M[0][1] * 0.0);
      v72 = v16;
      v18 = (float)(v67.M[1][1] * 0.0) + (float)(v67.M[0][1] * 0.000030517578);
      v69 = v18;
      v73 = v17;
      v19 = v13 + (float)((float)(v67.M[1][3] * 0.000030517578) + (float)(v67.M[0][3] * 0.0));
      v20 = (float)((float)(v67.M[1][3] * 0.0) + (float)(v67.M[0][3] * 0.000030517578)) + 0.5;
      v75 = v19;
      v71 = v20;
      if ( !v14 )
        v14 = &p->ProcessInfo;
      v21 = v14->Stream.DataSize - v14->Stream.Pos;
      v14->Stream.UnusedBits = 0;
      if ( v21 < 1 )
        Scaleform::GFx::Stream::PopulateBuffer1(&v14->Stream);
      v22 = v14->Stream.Pos;
      v23 = GradientRadial;
      v24 = v14->Stream.pBuffer[v22];
      v14->Stream.Pos = v22 + 1;
      v63 = (v24 & 0x10) != 0;
      v57 = v24 & 0xF;
      v59 = v24 & 0xF;
      Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
        &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
        "  gradients: numGradients = %d\n");
      v25 = (char *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 80i64, 0i64);
      v26 = (Scaleform::RefCountVImpl *)v25;
      if ( v25 )
      {
        *(_QWORD *)v25 = &Scaleform::RefCountImplCore::`vftable';
        *(_QWORD *)v25 = &Scaleform::Render::ComplexFill::`vftable';
        *((_DWORD *)v25 + 2) = 1;
        *((_QWORD *)v25 + 2) = 0i64;
        *((_QWORD *)v25 + 3) = 0i64;
        *((_QWORD *)v25 + 4) = 1065353216i64;
        *((_QWORD *)v25 + 5) = 0i64;
        *((_DWORD *)v25 + 12) = 0;
        *(_QWORD *)(v25 + 52) = 1065353216i64;
        *((_DWORD *)v25 + 15) = 0;
        v25[64] = 0;
        *((_DWORD *)v25 + 17) = -1;
      }
      else
      {
        v26 = 0i64;
      }
      p_pFill = (Scaleform::RefCountVImpl **)&this->FillStyle->pFill;
      *(_QWORD *)&id[0].Id = p_pFill;
      if ( *p_pFill )
      {
        Scaleform::RefCountImpl::Release(*p_pFill);
        p_pFill = *(Scaleform::RefCountVImpl ***)&id[0].Id;
      }
      *p_pFill = v26;
      if ( v9 == 16 || v9 != 18 && (v23 = GradientFocalPoint, v9 != 19) )
        v23 = GradientLinear;
      v28 = (Scaleform::Render::GradientData *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                 Scaleform::Memory::pGlobalHeap,
                                                 48i64);
      if ( v28 )
      {
        Scaleform::Render::GradientData::GradientData(v28, v23, v57, v63);
        v30 = v29;
      }
      else
      {
        v30 = 0i64;
      }
      pObject = this->FillStyle->pFill.pObject;
      v32 = (Scaleform::RefCountVImpl *)pObject->pGradient.pObject;
      if ( v32 )
        Scaleform::RefCountImpl::Release(v32);
      v33 = 0i64;
      pObject->pGradient.pObject = v30;
      if ( v59 )
      {
        do
        {
          v34 = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
          if ( !v34 )
            v34 = &p->ProcessInfo;
          v35 = v34->Stream.DataSize - v34->Stream.Pos;
          v34->Stream.UnusedBits = 0;
          if ( v35 < 1 )
            Scaleform::GFx::Stream::PopulateBuffer1(&v34->Stream);
          v36 = v34->Stream.Pos;
          v37 = v34->Stream.pBuffer[v36];
          v34->Stream.Pos = v36 + 1;
          Scaleform::GFx::LoadProcess::ReadRgbaTag(p, &v64, tagType);
          this->FillStyle->pFill.pObject->pGradient.pObject->pRecords[v33].ColorV = v64;
          this->FillStyle->pFill.pObject->pGradient.pObject->pRecords[v33++].Ratio = v37;
        }
        while ( v33 < v59 );
      }
      if ( (_BYTE)v9 == 19 )
      {
        v38 = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
        if ( !v38 )
          v38 = &p->ProcessInfo;
        v39 = v38->Stream.DataSize - v38->Stream.Pos;
        v38->Stream.UnusedBits = 0;
        if ( v39 < 2 )
          Scaleform::GFx::Stream::PopulateBuffer(&v38->Stream, 2);
        v40 = v38->Stream.Pos;
        v41 = v38->Stream.pBuffer[v40] | (v38->Stream.pBuffer[(unsigned int)(v40 + 1)] << 8);
        v38->Stream.Pos = v40 + 2;
        this->FillStyle->pFill.pObject->pGradient.pObject->FocalRatio = (float)v41 * 0.00390625;
      }
      v42 = this->FillStyle->pFill.pObject;
      v42->ImageMatrix.M[0][0] = v15;
      v42->ImageMatrix.M[0][1] = v18;
      v42->ImageMatrix.M[0][2] = 0.0;
      v42->ImageMatrix.M[0][3] = v20;
      v42->ImageMatrix.M[1][0] = v16;
      v42->ImageMatrix.M[1][1] = v17;
      v42->ImageMatrix.M[1][2] = 0.0;
      v42->ImageMatrix.M[1][3] = v19;
    }
    else if ( (v9 & 0x40) != 0 )
    {
      U16 = Scaleform::GFx::LoadProcess::ReadU16(p);
      Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
        &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
        "  BitmapChar = %d\n");
      v44 = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
      *(_OWORD *)&m.M[0][0] = _xmm;
      *(_OWORD *)&m.M[1][0] = _xmm;
      if ( !v44 )
        v44 = &p->ProcessInfo;
      Scaleform::GFx::Stream::ReadMatrix(&v44->Stream, &m);
      *(_OWORD *)&v66.M[0][0] = _xmm;
      *(_OWORD *)&v66.M[1][0] = _xmm;
      phandle.HType = RH_Pointer;
      phandle.pResource = 0i64;
      Scaleform::Render::Matrix2x4<float>::SetInverse(&v66, &m);
      v45 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
              Scaleform::Memory::pGlobalHeap,
              80i64);
      v46 = (Scaleform::RefCountVImpl *)v45;
      if ( v45 )
      {
        *(_QWORD *)v45 = &Scaleform::RefCountImplCore::`vftable';
        *(_DWORD *)(v45 + 8) = 1;
        *(_QWORD *)v45 = &Scaleform::Render::ComplexFill::`vftable';
        *(_QWORD *)(v45 + 16) = 0i64;
        *(_QWORD *)(v45 + 24) = 0i64;
        *(_QWORD *)(v45 + 32) = 1065353216i64;
        *(_QWORD *)(v45 + 40) = 0i64;
        *(_DWORD *)(v45 + 48) = 0;
        *(_QWORD *)(v45 + 52) = 1065353216i64;
        *(_DWORD *)(v45 + 60) = 0;
        *(_BYTE *)(v45 + 64) = 0;
        *(_DWORD *)(v45 + 68) = -1;
      }
      else
      {
        v46 = 0i64;
      }
      v47 = (Scaleform::RefCountVImpl **)&this->FillStyle->pFill;
      *(_QWORD *)&id[0].Id = v47;
      if ( *v47 )
      {
        Scaleform::RefCountImpl::Release(*v47);
        v47 = *(Scaleform::RefCountVImpl ***)&id[0].Id;
      }
      v48 = *(_OWORD *)&v66.M[0][0];
      *v47 = v46;
      v49 = this->FillStyle->pFill.pObject;
      *(_OWORD *)&v49->ImageMatrix.M[0][0] = v48;
      *(_OWORD *)&v49->ImageMatrix.M[1][0] = *(_OWORD *)&v66.M[1][0];
      switch ( v9 )
      {
        case '@':
          v49->FillMode.Fill = 2;
          break;
        case 'A':
          v49->FillMode.Fill = 3;
          break;
        case 'B':
          v49->FillMode.Fill = 0;
          break;
        case 'C':
          v49->FillMode.Fill = 1;
          break;
      }
      v50 = p->pLoadData.pObject;
      rid.Id = U16;
      if ( (unsigned __int8)Scaleform::GFx::MovieDataDef::LoadTaskData::GetResourceHandle(v50, &phandle, &rid)
        && phandle.HType == RH_Pointer
        && phandle.pResource )
      {
        if ( (((__int64 (__fastcall *)(Scaleform::GFx::Resource *))phandle.pResource->GetResourceTypeCode)(phandle.pResource) & 0xFF00) == 256 )
        {
          if ( phandle.HType == RH_Pointer )
            pResource = phandle.pResource;
          v51 = this->FillStyle->pFill.pObject;
          v52 = (Scaleform::Render::Image *)pResource[1].__vftable;
          if ( v52 )
            v52->AddRef((Scaleform::RefCountVImpl *)pResource[1].__vftable);
          v53 = v51->pImage.pObject;
          if ( v53 )
            v53->Release(v53);
          v51->pImage.pObject = v52;
        }
      }
      else
      {
        this->FillStyle->Color = -5776071;
        if ( phandle.HType == RH_Index )
        {
          this->FillStyle->pFill.pObject->BindIndex = phandle.BindIndex;
          pTempBindData = p->pTempBindData;
          if ( pTempBindData && (((_BYTE)v9 - 64) & 0xFD) == 0 )
            Scaleform::HashSet<unsigned int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedEntry<unsigned int,Scaleform::FixedSizeHash<unsigned int>>>::Add<unsigned int>(
              &pTempBindData->FillStyleImageWrap,
              &this->FillStyle->pFill.pObject->BindIndex);
        }
        else
        {
          FillStyle = this->FillStyle;
          v56 = (Scaleform::RefCountVImpl *)this->FillStyle->pFill.pObject;
          if ( v56 )
            Scaleform::RefCountImpl::Release(v56);
          FillStyle->pFill.pObject = 0i64;
          if ( U16 != 0xFFFF )
          {
            id[0].Id = 135168;
            Scaleform::LogDebugMessage(
              (Scaleform::LogMessageId)id,
              "An image with resource id %d is not found in resource table.",
              U16);
          }
        }
      }
      if ( phandle.HType == RH_Pointer && phandle.pResource )
        Scaleform::GFx::Resource::Release(phandle.pResource);
    }
  }
  else
  {
    Scaleform::GFx::LoadProcess::ReadRgbaTag(p, &pc, tagType);
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
      "  color: ");
    this->FillStyle->Color = pc.Raw;
    v10 = this->FillStyle;
    v11 = (Scaleform::RefCountVImpl *)this->FillStyle->pFill.pObject;
    if ( v11 )
      Scaleform::RefCountImpl::Release(v11);
    v10->pFill.pObject = 0i64;
  }
}

bool __fastcall Scaleform::GFx::ShapeSwfReader::Read(
        Scaleform::GFx::ShapeSwfReader *this,
        Scaleform::GFx::LoadProcess *p,
        Scaleform::GFx::TagType tagType,
        unsigned int lenInBytes,
        bool withStyle)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // r14
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  unsigned int v13; // er15
  unsigned __int8 *v14; // rax
  unsigned __int8 *v15; // r13
  Scaleform::GFx::ParseControl *pparseControl; // rbx
  Scaleform::MemoryHeap *pHeap; // rdi
  Scaleform::Log *plog; // rax
  signed int v20; // er12
  int v21; // er15
  int v22; // er14
  bool v23; // bl
  unsigned int v24; // eax
  char v25; // di
  unsigned int v26; // ebx
  int v27; // eax
  int FillStyles; // er12
  signed int v29; // edi
  int StrokeStyles; // ebx
  signed int v31; // esi
  int v32; // ebx
  unsigned int v33; // ebx
  int v34; // edi
  int v35; // esi
  int v36; // er12
  int v37; // ebx
  int v38; // eax
  int v39; // edi
  int v40; // esi
  unsigned int v41; // ebx
  unsigned int v42; // edx
  unsigned int v43; // eax
  unsigned int v44; // er9
  int v45; // [rsp+40h] [rbp-C0h]
  int v46; // [rsp+44h] [rbp-BCh]
  int Size; // [rsp+48h] [rbp-B8h]
  unsigned int v48; // [rsp+4Ch] [rbp-B4h]
  signed int v49; // [rsp+4Ch] [rbp-B4h]
  int v51; // [rsp+54h] [rbp-ACh]
  unsigned int v52; // [rsp+58h] [rbp-A8h]
  unsigned int v53; // [rsp+5Ch] [rbp-A4h]
  int bitcount; // [rsp+60h] [rbp-A0h]
  unsigned int oldSize; // [rsp+64h] [rbp-9Ch]
  Scaleform::GFx::PathAllocator *pAllocator; // [rsp+68h] [rbp-98h]
  unsigned int v58; // [rsp+78h] [rbp-88h]
  Scaleform::GFx::SWFProcessInfo *p_ProcessInfo; // [rsp+80h] [rbp-80h]
  Scaleform::Render::Rect<float> pr; // [rsp+90h] [rbp-70h] BYREF
  Scaleform::Render::Rect<float> v62; // [rsp+A0h] [rbp-60h] BYREF
  Scaleform::GFx::Stream v63; // [rsp+B0h] [rbp-50h] BYREF

  pAllocator = this->pAllocator;
  if ( !pAllocator )
    pAllocator = p->pLoadData.pObject->pPathAllocator;
  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  p_ProcessInfo = pAltStream;
  if ( !pAltStream )
  {
    pAltStream = &p->ProcessInfo;
    p_ProcessInfo = &p->ProcessInfo;
  }
  this->Shape->Flags = 0;
  if ( withStyle )
  {
    v10 = pAltStream->Stream.FilePos + pAltStream->Stream.Pos - pAltStream->Stream.DataSize;
    this->Shape->Flags |= 0x10u;
    pr = 0i64;
    Scaleform::GFx::Stream::ReadRect(&pAltStream->Stream, &pr);
    this->Shape->SetBoundsLocal(this->Shape, &pr);
    if ( ((tagType - 75) & 0xFFFFFFF7) != 0 )
    {
      this->Shape->SetRectBoundsLocal(this->Shape, &pr);
    }
    else
    {
      v62 = 0i64;
      Scaleform::GFx::Stream::ReadRect(&pAltStream->Stream, &v62);
      this->Shape->SetRectBoundsLocal(this->Shape, &v62);
      v11 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
      pAltStream->Stream.UnusedBits = 0;
      if ( v11 < 1 )
        Scaleform::GFx::Stream::PopulateBuffer1(&pAltStream->Stream);
      ++pAltStream->Stream.Pos;
    }
    Scaleform::GFx::ShapeSwfReader::ReadFillStyles(this, p, tagType);
    Scaleform::GFx::ShapeSwfReader::ReadStrokeStyles(this, p, tagType);
    v12 = pAltStream->Stream.FilePos + pAltStream->Stream.Pos - pAltStream->Stream.DataSize - v10;
  }
  else
  {
    v12 = 0;
  }
  v58 = lenInBytes - v12;
  v13 = lenInBytes - v12;
  v53 = lenInBytes - v12;
  oldSize = lenInBytes - v12;
  v52 = lenInBytes - v12;
  v14 = (unsigned __int8 *)Scaleform::GFx::PathAllocator::AllocRawPath(pAllocator, lenInBytes - v12);
  v15 = v14;
  if ( !v14 )
  {
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogWarning(
      &pAltStream->Stream,
      "Corrupted shape detected in file %s",
      (const char *)((pAltStream->Stream.FileName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12));
    return 0;
  }
  pAltStream->Stream.UnusedBits = 0;
  Scaleform::GFx::Stream::ReadToBuffer(&pAltStream->Stream, v14, v13);
  if ( tagType == Tag_DefineFont3 )
    this->Shape->Flags |= 2u;
  pparseControl = pAltStream->Stream.pParseControl;
  pHeap = p->pLoadData.pObject->pHeap;
  plog = (Scaleform::Log *)Scaleform::GFx::Stream::GetLog((AgDisplay *)pAltStream);
  Scaleform::GFx::Stream::Stream(&v63, v15, v13, pHeap, plog, pparseControl);
  v63.UnusedBits = 0;
  p->pAltStream = &v63;
  v48 = Scaleform::GFx::Stream::ReadUInt(&v63, 4u);
  v20 = v48;
  bitcount = Scaleform::GFx::Stream::ReadUInt(&v63, 4u);
  if ( withStyle )
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)&v63,
      "  ShapeCharacter read: nfillbits = %d, nlinebits = %d\n");
  v21 = 0;
  v22 = 0;
  v45 = 0;
  v23 = 0;
  v46 = 0;
  do
  {
    if ( Scaleform::GFx::Stream::ReadUInt1(&v63) )
    {
      ++v21;
      if ( !Scaleform::GFx::Stream::ReadUInt1(&v63) )
      {
        v33 = Scaleform::GFx::Stream::ReadUInt(&v63, 4u) + 2;
        v34 = Scaleform::GFx::Stream::ReadSInt(&v63, v33);
        v35 = Scaleform::GFx::Stream::ReadSInt(&v63, v33);
        v36 = Scaleform::GFx::Stream::ReadSInt(&v63, v33);
        v37 = Scaleform::GFx::Stream::ReadSInt(&v63, v33);
        if ( Scaleform::GFx::Stream::IsVerboseParseShape(&v63) )
          Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
            (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)&v63,
            "  ShapeCharacter read: curved edge   = %4g %4g - %4g %4g - %4g %4g\n");
        v38 = v36 + v34;
        v20 = v48;
        v45 += v38;
        v46 += v37 + v35;
        goto LABEL_73;
      }
      v39 = 0;
      v40 = 0;
      v41 = Scaleform::GFx::Stream::ReadUInt(&v63, 4u) + 2;
      if ( Scaleform::GFx::Stream::ReadUInt1(&v63) )
      {
        v39 = Scaleform::GFx::Stream::ReadSInt(&v63, v41);
      }
      else if ( !Scaleform::GFx::Stream::ReadUInt1(&v63) )
      {
        v39 = Scaleform::GFx::Stream::ReadSInt(&v63, v41);
        goto LABEL_70;
      }
      v40 = Scaleform::GFx::Stream::ReadSInt(&v63, v41);
LABEL_70:
      if ( Scaleform::GFx::Stream::IsVerboseParseShape(&v63) )
        Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
          (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)&v63,
          "  ShapeCharacter read: straight edge = %4g %4g - %4g %4g\n");
      v46 += v40;
      v45 += v39;
      goto LABEL_73;
    }
    v24 = Scaleform::GFx::Stream::ReadUInt(&v63, 5u);
    v25 = v24;
    if ( !v24 )
      break;
    if ( (v24 & 1) != 0 )
    {
      if ( v21 > 0 )
      {
        v21 = 0;
        ++v22;
      }
      v26 = Scaleform::GFx::Stream::ReadUInt(&v63, 5u);
      v45 = Scaleform::GFx::Stream::ReadSInt(&v63, v26);
      v46 = Scaleform::GFx::Stream::ReadSInt(&v63, v26);
      if ( Scaleform::GFx::Stream::IsVerboseParseShape(&v63) )
        Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
          (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)&v63,
          "  ShapeCharacter read: moveto %4g %4g\n");
    }
    if ( (v25 & 2) != 0 && v20 > 0 )
    {
      if ( v21 > 0 )
      {
        v21 = 0;
        ++v22;
      }
      Scaleform::GFx::Stream::ReadUInt(&v63, v20);
      if ( Scaleform::GFx::Stream::IsVerboseParseShape(&v63) )
        Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
          (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)&v63,
          "  ShapeCharacter read: fill0 = %d\n");
    }
    if ( (v25 & 4) != 0 && v20 > 0 )
    {
      if ( v21 > 0 )
      {
        v21 = 0;
        ++v22;
      }
      Scaleform::GFx::Stream::ReadUInt(&v63, v20);
      if ( Scaleform::GFx::Stream::IsVerboseParseShape(&v63) )
        Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
          (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)&v63,
          "  ShapeCharacter read: fill1 = %d\n");
    }
    if ( (v25 & 8) != 0 && bitcount > 0 )
    {
      if ( v21 > 0 )
      {
        v21 = 0;
        ++v22;
      }
      Scaleform::GFx::Stream::ReadUInt(&v63, bitcount);
      if ( Scaleform::GFx::Stream::IsVerboseParseShape(&v63) )
        Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
          (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)&v63,
          "  ShapeCharacter read: line = %d\n");
    }
    if ( (v25 & 0x10) != 0 )
    {
      Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
        (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)&v63,
        "  ShapeCharacter read: more fill styles\n");
      v27 = 0;
      if ( v22 <= 0 )
        v27 = v22;
      v22 = v27;
      if ( v21 > 0 )
      {
        v21 = 0;
        v22 = v27 + 1;
      }
      Size = this->FillStyles.Data.Size;
      v51 = this->StrokeStyles.Data.Size;
      v49 = v63.FilePos + v63.Pos - v63.DataSize;
      FillStyles = Scaleform::GFx::ShapeSwfReader::ReadFillStyles(this, p, tagType);
      v29 = v63.FilePos + v63.Pos - v63.DataSize;
      StrokeStyles = Scaleform::GFx::ShapeSwfReader::ReadStrokeStyles(this, p, tagType);
      v31 = v63.FilePos + v63.Pos - v63.DataSize;
      if ( v29 != FillStyles )
      {
        if ( FillStyles > v29 || v29 > v52 )
          goto LABEL_80;
        if ( SLODWORD(this->FillStyles.Data.Size) > Size )
        {
          v15[v49 + 1] = BYTE2(Size);
          v15[v49 + 2] = BYTE1(Size);
          v15[v49] = -1;
          v15[v49 + 3] = Size;
          FillStyles = v49 + 4;
        }
        v32 = StrokeStyles - v29;
        memmove(&v15[FillStyles], &v15[v29], v32);
        StrokeStyles = FillStyles + v32;
        v29 = FillStyles;
      }
      if ( StrokeStyles != v31 )
      {
        if ( StrokeStyles > v31 || v31 > v52 )
          goto LABEL_80;
        if ( SLODWORD(this->StrokeStyles.Data.Size) > v51 )
        {
          StrokeStyles = v29 + 4;
          v15[v29 + 1] = BYTE2(v51);
          v15[v29 + 2] = BYTE1(v51);
          v15[v29] = -1;
          v15[v29 + 3] = v51;
        }
        memmove(&v15[StrokeStyles], &v15[v31], v53 - v31);
        v53 += StrokeStyles - v31;
      }
      Scaleform::GFx::Stream::SetPosition(&v63, StrokeStyles);
      v48 = Scaleform::GFx::Stream::ReadUInt(&v63, 4u);
      v20 = v48;
      bitcount = Scaleform::GFx::Stream::ReadUInt(&v63, 4u);
    }
LABEL_73:
    v42 = v63.FilePos + v63.Pos - v63.DataSize;
    v23 = v42 > v52;
  }
  while ( v42 <= v58 );
  if ( !v23 && v53 < 0x200000 )
  {
    v43 = oldSize;
    if ( oldSize <= v53 )
      goto LABEL_83;
    v44 = v53;
    goto LABEL_82;
  }
LABEL_80:
  v23 = 1;
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogWarning(
    &v63,
    "Corrupted shape detected in file %s",
    (const char *)((p_ProcessInfo->Stream.FileName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12));
  v43 = oldSize;
  *(_WORD *)v15 = 0;
  if ( oldSize <= 2 )
    goto LABEL_83;
  v44 = 2;
LABEL_82:
  Scaleform::GFx::PathAllocator::ReallocLastBlock(pAllocator, v15, v43, v44);
LABEL_83:
  this->Shape->Paths = v15;
  p->pAltStream = 0i64;
  Scaleform::GFx::Stream::~Stream(&v63);
  return !v23;
}

void __fastcall Scaleform::GFx::StrokeStyleSwfReader::Read(
        Scaleform::GFx::StrokeStyleSwfReader *this,
        Scaleform::GFx::LoadProcess *p,
        Scaleform::GFx::TagType tagType)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rdi
  int v7; // eax
  __int64 Pos; // r9
  __int16 v9; // bp
  float v10; // xmm6_4
  int v11; // er14
  Scaleform::GFx::SWFProcessInfo *p_ProcessInfo; // rdi
  int v13; // eax
  __int64 v14; // r8
  char v15; // r9
  int v16; // edx
  int v17; // er8
  int v18; // ecx
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  int v22; // er8
  int v23; // ecx
  int v24; // ebp
  Scaleform::RefCountVImpl *v25; // rax
  Scaleform::Render::StrokeStyleType *StrokeStyle; // rdi
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // rax
  Scaleform::Render::StrokeStyleType *v31; // rdi
  Scaleform::RefCountVImpl *v32; // rcx
  unsigned int v33; // [rsp+20h] [rbp-48h] BYREF
  Scaleform::RefCountVImpl *v34; // [rsp+28h] [rbp-40h]
  Scaleform::GFx::FillStyleSwfReader v35; // [rsp+70h] [rbp+8h] BYREF
  Scaleform::Render::Color pc; // [rsp+80h] [rbp+18h] BYREF

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  v7 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v7 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  Pos = pAltStream->Stream.Pos;
  v9 = 0;
  v10 = *(float *)&FLOAT_3_0;
  v11 = pAltStream->Stream.pBuffer[Pos] | (pAltStream->Stream.pBuffer[(unsigned int)(Pos + 1)] << 8);
  pAltStream->Stream.Pos = Pos + 2;
  if ( tagType == Tag_DefineShape4 )
  {
    p_ProcessInfo = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
    if ( !p_ProcessInfo )
      p_ProcessInfo = &p->ProcessInfo;
    v13 = p_ProcessInfo->Stream.DataSize - p_ProcessInfo->Stream.Pos;
    p_ProcessInfo->Stream.UnusedBits = 0;
    if ( v13 < 2 )
      Scaleform::GFx::Stream::PopulateBuffer(&p_ProcessInfo->Stream, 2);
    v14 = p_ProcessInfo->Stream.Pos;
    v9 = p_ProcessInfo->Stream.pBuffer[v14] | (p_ProcessInfo->Stream.pBuffer[(unsigned int)(v14 + 1)] << 8);
    p_ProcessInfo->Stream.Pos = v14 + 2;
    if ( (v9 & 0x20) != 0 )
      v10 = (float)Scaleform::GFx::LoadProcess::ReadU16(p) * 0.00390625;
  }
  v15 = v9;
  v16 = v9 & 1 | 2;
  if ( (v9 & 2) == 0 )
    v16 = v9 & 1;
  v17 = v16 | 4;
  if ( (v9 & 4) == 0 )
    v17 = v16;
  if ( (v9 & 6) == 6 )
    v17 = 6;
  v18 = v17 | 0x10;
  if ( (v9 & 0x10) == 0 )
    v18 = v17;
  v19 = v18 | 0x20;
  if ( (v9 & 0x20) == 0 )
    v19 = v18;
  v20 = v19 | 0x40;
  if ( (v9 & 0x40) == 0 )
    v20 = v19;
  v21 = v20 | 0x80;
  if ( (v9 & 0x80u) == 0 )
    v21 = v20;
  v22 = v21 | 0x100;
  if ( (v9 & 0x100) == 0 )
    v22 = v21;
  v23 = v22 | 0x200;
  if ( (v9 & 0x200) == 0 )
    v23 = v22;
  v24 = v23 | 8;
  if ( (v15 & 8) == 0 )
    v24 = v23;
  if ( (v24 & 8) != 0 )
  {
    v34 = 0i64;
    v35.FillStyle = (Scaleform::Render::FillStyleType *)&v33;
    Scaleform::GFx::FillStyleSwfReader::Read(&v35, p, tagType);
    this->StrokeStyle->Color = v33;
    this->StrokeStyle->Miter = v10;
    this->StrokeStyle->Width = (float)v11;
    v25 = v34;
    StrokeStyle = this->StrokeStyle;
    if ( v34 )
    {
      Scaleform::Render::RenderBuffer::AddRef(v34);
      v25 = v34;
    }
    pObject = (Scaleform::RefCountVImpl *)StrokeStyle->pFill.pObject;
    if ( pObject )
    {
      Scaleform::RefCountImpl::Release(pObject);
      v25 = v34;
    }
    StrokeStyle->pFill.pObject = (Scaleform::Render::ComplexFill *)v25;
    v28 = v34;
    if ( v34 )
    {
      v30 = *(_QWORD *)&v34[1].RefCount;
      if ( !v30 || !*(_WORD *)(v30 + 18) )
      {
LABEL_43:
        if ( v28 )
          Scaleform::RefCountImpl::Release(v28);
        goto LABEL_48;
      }
      v29 = *(_DWORD *)(*(_QWORD *)(v30 + 24) + 4i64);
    }
    else
    {
      v29 = v33;
    }
    this->StrokeStyle->Color = v29;
    v28 = v34;
    goto LABEL_43;
  }
  Scaleform::GFx::LoadProcess::ReadRgbaTag(p, &pc, tagType);
  this->StrokeStyle->Color = pc.Raw;
  this->StrokeStyle->Miter = v10;
  v31 = this->StrokeStyle;
  v32 = (Scaleform::RefCountVImpl *)this->StrokeStyle->pFill.pObject;
  if ( v32 )
    Scaleform::RefCountImpl::Release(v32);
  v31->pFill.pObject = 0i64;
  this->StrokeStyle->Width = (float)v11;
LABEL_48:
  this->StrokeStyle->Units = 0.050000001;
  this->StrokeStyle->Flags = v24;
}

__int64 __fastcall Scaleform::GFx::ShapeDataBase::ReadEdge(
        Scaleform::GFx::ShapeDataBase *this,
        Scaleform::Render::ShapePosInfo *pos,
        float *coord)
{
  Tween::EasingType v5; // xmm3_4
  Scaleform::Render::PathEdgeType v6; // er9
  float Cy; // xmm1_4
  float Ax; // xmm0_4
  float Ay; // xmm1_4
  float v10; // xmm1_4
  __int64 result; // rax
  Scaleform::GFx::SwfShapeDecoder::Edge edge; // [rsp+20h] [rbp-48h] BYREF
  Scaleform::GFx::SwfShapeDecoder v13; // [rsp+38h] [rbp-30h] BYREF

  if ( (this->Flags & 2) != 0 )
    v5 = FLOAT_0_050000001;
  else
    v5 = FLOAT_1_0;
  Scaleform::GFx::SwfShapeDecoder::SwfShapeDecoder(&v13, pos, this->Paths, *(float *)&v5);
  v6 = Edge_EndPath;
  if ( ((unsigned __int8)(1 << (7 - LOBYTE(v13.Stream.CurBitIndex))) & v13.Stream.pData[v13.Stream.CurByteIndex]) != 0 )
  {
    v6 = Scaleform::GFx::SwfShapeDecoder::ReadEdge(&v13, &edge);
    if ( v6 == Edge_QuadTo )
    {
      Cy = (float)edge.Cy;
      *coord = (float)edge.Cx * pos->Sfactor;
      Ax = (float)edge.Ax;
      coord[1] = Cy * pos->Sfactor;
      Ay = (float)edge.Ay;
      coord[2] = Ax * pos->Sfactor;
      coord[3] = Ay * pos->Sfactor;
    }
    else
    {
      v10 = (float)edge.Ay;
      *coord = (float)edge.Ax * pos->Sfactor;
      coord[1] = v10 * pos->Sfactor;
    }
  }
  result = (unsigned int)v6;
  v13.Pos->Pos = v13.Stream.CurBitIndex & 7 | (8
                                             * (v13.Pos->NumStrokeBits & 0xF | (16
                                                                              * ((16 * LODWORD(v13.Stream.CurByteIndex)) | v13.Pos->NumFillBits & 0xF))));
  return result;
}

__int64 __fastcall Scaleform::GFx::SwfShapeDecoder::ReadEdge(
        Scaleform::GFx::SwfShapeDecoder *this,
        Scaleform::GFx::SwfShapeDecoder::Edge *edge)
{
  unsigned int UInt; // esi
  unsigned int CurBitIndex; // er8
  int v6; // er9
  unsigned int v7; // eax
  int v8; // edx
  unsigned __int64 v9; // rcx
  unsigned __int8 v10; // dl
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  unsigned int v14; // esi
  int v15; // er15
  unsigned int v16; // ebp
  unsigned int v17; // er14
  unsigned int v18; // er12
  unsigned int v19; // er8
  __int64 result; // rax
  int v21; // edx
  unsigned __int64 CurByteIndex; // rcx
  unsigned __int8 v23; // dl
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  unsigned int v27; // er8
  unsigned int v28; // ebp
  int v29; // er9
  unsigned int v30; // er14
  int v31; // er12
  unsigned int v32; // edx
  unsigned __int64 v33; // r9
  int v34; // er8

  ++this->Stream.CurBitIndex;
  UInt = 0;
  if ( this->Stream.CurBitIndex >= 8 )
  {
    ++this->Stream.CurByteIndex;
    this->Stream.CurBitIndex = 0;
  }
  CurBitIndex = this->Stream.CurBitIndex;
  v6 = (unsigned __int8)this->Stream.pData[this->Stream.CurByteIndex] & (1 << (7 - CurBitIndex));
  this->Stream.CurBitIndex = CurBitIndex + 1;
  if ( CurBitIndex + 1 >= 8 )
  {
    this->Stream.CurBitIndex = 0;
    ++this->Stream.CurByteIndex;
  }
  v7 = this->Stream.CurBitIndex;
  if ( v6 )
  {
    switch ( v7 )
    {
      case 0u:
        v21 = this->Stream.pData[this->Stream.CurByteIndex] >> 4;
        this->Stream.CurBitIndex = 4;
        break;
      case 1u:
        v21 = (this->Stream.pData[this->Stream.CurByteIndex] >> 3) & 0xF;
        this->Stream.CurBitIndex = 5;
        break;
      case 2u:
        v21 = (this->Stream.pData[this->Stream.CurByteIndex] >> 2) & 0xF;
        this->Stream.CurBitIndex = 6;
        break;
      case 3u:
        v21 = (this->Stream.pData[this->Stream.CurByteIndex] >> 1) & 0xF;
        this->Stream.CurBitIndex = 7;
        break;
      case 4u:
        CurByteIndex = this->Stream.CurByteIndex;
        v23 = this->Stream.pData[CurByteIndex];
        this->Stream.CurByteIndex = CurByteIndex + 1;
        v21 = v23 & 0xF;
        this->Stream.CurBitIndex = 0;
        break;
      case 5u:
        v24 = this->Stream.CurByteIndex;
        v21 = (this->Stream.pData[v24 + 1] >> 7) | (2 * (this->Stream.pData[v24] & 7));
        this->Stream.CurBitIndex = 1;
        this->Stream.CurByteIndex = v24 + 1;
        break;
      case 6u:
        v25 = this->Stream.CurByteIndex;
        v21 = (this->Stream.pData[v25 + 1] >> 6) | (4 * (this->Stream.pData[v25] & 3));
        this->Stream.CurBitIndex = 2;
        this->Stream.CurByteIndex = v25 + 1;
        break;
      case 7u:
        v26 = this->Stream.CurByteIndex;
        v21 = (this->Stream.pData[v26 + 1] >> 5) | (8 * (this->Stream.pData[v26] & 1));
        this->Stream.CurBitIndex = 3;
        this->Stream.CurByteIndex = v26 + 1;
        break;
      default:
        v21 = 0;
        break;
    }
    v27 = this->Stream.CurBitIndex;
    v28 = v21 + 2;
    v29 = (unsigned __int8)this->Stream.pData[this->Stream.CurByteIndex] & (1 << (7 - v27));
    this->Stream.CurBitIndex = v27 + 1;
    if ( v27 + 1 >= 8 )
    {
      this->Stream.CurBitIndex = 0;
      ++this->Stream.CurByteIndex;
    }
    edge->Curve = 0;
    v30 = 0;
    if ( v29 )
    {
      v31 = 1 << (v21 + 1);
      UInt = Scaleform::GFx::StreamContext::ReadUInt(&this->Stream, v28);
      if ( (v31 & UInt) != 0 )
        UInt |= -1 << v28;
      v30 = Scaleform::GFx::StreamContext::ReadUInt(&this->Stream, v28);
      if ( (v30 & v31) == 0 )
        goto LABEL_49;
    }
    else
    {
      v32 = this->Stream.CurBitIndex;
      v33 = this->Stream.CurByteIndex;
      v34 = (unsigned __int8)this->Stream.pData[v33] & (1 << (7 - v32));
      this->Stream.CurBitIndex = v32 + 1;
      if ( v32 + 1 >= 8 )
      {
        this->Stream.CurBitIndex = 0;
        this->Stream.CurByteIndex = v33 + 1;
      }
      if ( !v34 )
      {
        UInt = Scaleform::GFx::StreamContext::ReadUInt(&this->Stream, v28);
        if ( _bittest((const int *)&UInt, (unsigned __int8)(v28 - 1)) )
          UInt |= -1 << v28;
        goto LABEL_49;
      }
      v30 = Scaleform::GFx::StreamContext::ReadUInt(&this->Stream, v28);
      if ( !_bittest((const int *)&v30, (unsigned __int8)(v28 - 1)) )
      {
LABEL_49:
        result = 1i64;
        edge->Ax = UInt + this->Pos->LastX;
        edge->Ay = v30 + this->Pos->LastY;
        this->Pos->LastX += UInt;
        this->Pos->LastY += v30;
        return result;
      }
    }
    v30 |= -1 << v28;
    goto LABEL_49;
  }
  switch ( v7 )
  {
    case 0u:
      v8 = this->Stream.pData[this->Stream.CurByteIndex] >> 4;
      this->Stream.CurBitIndex = 4;
      break;
    case 1u:
      v8 = (this->Stream.pData[this->Stream.CurByteIndex] >> 3) & 0xF;
      this->Stream.CurBitIndex = 5;
      break;
    case 2u:
      v8 = (this->Stream.pData[this->Stream.CurByteIndex] >> 2) & 0xF;
      this->Stream.CurBitIndex = 6;
      break;
    case 3u:
      v8 = (this->Stream.pData[this->Stream.CurByteIndex] >> 1) & 0xF;
      this->Stream.CurBitIndex = 7;
      break;
    case 4u:
      v9 = this->Stream.CurByteIndex;
      v10 = this->Stream.pData[v9];
      this->Stream.CurByteIndex = v9 + 1;
      v8 = v10 & 0xF;
      this->Stream.CurBitIndex = 0;
      break;
    case 5u:
      v11 = this->Stream.CurByteIndex;
      v8 = (this->Stream.pData[v11 + 1] >> 7) | (2 * (this->Stream.pData[v11] & 7));
      this->Stream.CurBitIndex = 1;
      this->Stream.CurByteIndex = v11 + 1;
      break;
    case 6u:
      v12 = this->Stream.CurByteIndex;
      v8 = (this->Stream.pData[v12 + 1] >> 6) | (4 * (this->Stream.pData[v12] & 3));
      this->Stream.CurBitIndex = 2;
      this->Stream.CurByteIndex = v12 + 1;
      break;
    case 7u:
      v13 = this->Stream.CurByteIndex;
      v8 = (this->Stream.pData[v13 + 1] >> 5) | (8 * (this->Stream.pData[v13] & 1));
      this->Stream.CurBitIndex = 3;
      this->Stream.CurByteIndex = v13 + 1;
      break;
    default:
      v8 = 0;
      break;
  }
  v14 = v8 + 2;
  v15 = 1 << (v8 + 1);
  v16 = Scaleform::GFx::StreamContext::ReadUInt(&this->Stream, v8 + 2);
  if ( (v15 & v16) != 0 )
    v16 |= -1 << v14;
  v17 = Scaleform::GFx::StreamContext::ReadUInt(&this->Stream, v14);
  if ( (v15 & v17) != 0 )
    v17 |= -1 << v14;
  v18 = Scaleform::GFx::StreamContext::ReadUInt(&this->Stream, v14);
  if ( (v15 & v18) != 0 )
    v18 |= -1 << v14;
  v19 = Scaleform::GFx::StreamContext::ReadUInt(&this->Stream, v14);
  if ( (v15 & v19) != 0 )
    v19 |= -1 << v14;
  edge->Cx = v16 + this->Pos->LastX;
  edge->Cy = v17 + this->Pos->LastY;
  result = 2i64;
  this->Pos->LastX += v18 + v16;
  this->Pos->LastY += v19 + v17;
  edge->Ax = this->Pos->LastX;
  edge->Ay = this->Pos->LastY;
  edge->Curve = 1;
  return result;
}

__int64 __fastcall Scaleform::GFx::ShapeSwfReader::ReadFillStyles(
        Scaleform::GFx::ShapeSwfReader *this,
        Scaleform::GFx::LoadProcess *p,
        Scaleform::GFx::TagType tagType)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rdi
  int v7; // eax
  __int64 Pos; // rdx
  unsigned int v9; // ecx
  unsigned int U16; // ebp
  Scaleform::GFx::SWFProcessInfo *p_ProcessInfo; // rax
  unsigned int v12; // er14
  int Size; // er15
  unsigned int i; // edi
  Scaleform::GFx::SWFProcessInfo *v15; // rax
  Scaleform::Render::FillStyleType *FillStyle; // rcx
  Scaleform::Render::ComplexFill *pObject; // rax
  Scaleform::Render::ComplexFill *v18; // rcx
  Scaleform::GFx::FillStyleSwfReader v20; // [rsp+50h] [rbp+8h] BYREF

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  v7 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v7 < 1 )
    Scaleform::GFx::Stream::PopulateBuffer1(&pAltStream->Stream);
  Pos = pAltStream->Stream.Pos;
  v9 = pAltStream->Stream.pBuffer[Pos];
  pAltStream->Stream.Pos = Pos + 1;
  U16 = v9;
  if ( tagType > Tag_DefineShape && v9 == 255 )
    U16 = Scaleform::GFx::LoadProcess::ReadU16(p);
  p_ProcessInfo = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !p_ProcessInfo )
    p_ProcessInfo = &p->ProcessInfo;
  v12 = p_ProcessInfo->Stream.Pos + p_ProcessInfo->Stream.FilePos - p_ProcessInfo->Stream.DataSize;
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
    "  GFx_ReadFillStyles: count = %d\n");
  Size = this->FillStyles.Data.Size;
  if ( U16 )
    Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::FillStyleType,Scaleform::AllocatorGH<Scaleform::Render::FillStyleType,259>,Scaleform::ArrayDefaultPolicy>>::Resize(
      &this->FillStyles,
      Size + U16);
  for ( i = 0; i < U16; ++i )
  {
    v15 = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
    if ( !v15 )
      v15 = &p->ProcessInfo;
    v15->Stream.UnusedBits = 0;
    v20.FillStyle = &this->FillStyles.Data.Data[i + Size];
    Scaleform::GFx::FillStyleSwfReader::Read(&v20, p, tagType);
    FillStyle = v20.FillStyle;
    pObject = v20.FillStyle->pFill.pObject;
    if ( pObject && (pObject->pImage.pObject || pObject->BindIndex != -1) )
      this->Shape->Flags |= 1u;
    v18 = FillStyle->pFill.pObject;
    if ( v18 && v18->BindIndex != -1 )
      this->Shape->Flags |= 4u;
  }
  return v12;
}

__int64 __fastcall Scaleform::GFx::SwfShapeDecoder::ReadNonEdgeRec(
        Scaleform::GFx::SwfShapeDecoder *this,
        Scaleform::Render::ShapePathType retVal)
{
  int v4; // edi
  unsigned __int64 CurByteIndex; // rcx
  unsigned int v6; // eax
  int v7; // edi
  unsigned int v8; // eax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  int v12; // esi
  unsigned __int64 v13; // rcx
  unsigned __int8 v14; // si
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  int v19; // er14
  int UInt; // er8
  int v21; // eax
  unsigned int NumFillBits; // edx
  unsigned int v23; // eax
  unsigned int v24; // edx
  signed int v25; // eax
  unsigned int NumStrokeBits; // edx
  signed int v27; // eax
  unsigned __int64 v28; // rax
  const unsigned __int8 *pData; // r10
  unsigned int v30; // ecx
  unsigned int v31; // er9
  unsigned __int64 v32; // rax
  int v33; // er9
  unsigned __int64 v34; // rdx
  int v35; // ecx
  unsigned __int64 v36; // rax
  int v37; // ecx
  int v38; // er8
  int v39; // er8
  int v40; // er8
  int v41; // ecx
  int v42; // edx
  unsigned __int64 v43; // rcx
  unsigned __int8 v44; // dl
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rcx
  unsigned int v48; // edx
  __int64 result; // rax
  unsigned int v50; // edx
  unsigned int v51; // edx
  unsigned int v52; // edx
  unsigned __int64 v53; // rcx
  unsigned __int8 v54; // dl
  unsigned __int64 v55; // rcx
  int v56; // edx
  unsigned __int64 v57; // rcx
  int v58; // edx
  int v59; // eax
  int v60; // edx
  unsigned __int64 v61; // rcx
  int v62; // edx
  int v63; // eax
  int v64; // edx

  if ( ++this->Stream.CurBitIndex >= 8 )
  {
    ++this->Stream.CurByteIndex;
    this->Stream.CurBitIndex = 0;
  }
  switch ( this->Stream.CurBitIndex )
  {
    case 0u:
      v4 = this->Stream.pData[this->Stream.CurByteIndex] >> 3;
      this->Stream.CurBitIndex = 5;
      goto LABEL_14;
    case 1u:
      v4 = (this->Stream.pData[this->Stream.CurByteIndex] >> 2) & 0x1F;
      this->Stream.CurBitIndex = 6;
      goto LABEL_14;
    case 2u:
      v4 = (this->Stream.pData[this->Stream.CurByteIndex] >> 1) & 0x1F;
      this->Stream.CurBitIndex = 7;
      goto LABEL_14;
    case 3u:
      v4 = this->Stream.pData[this->Stream.CurByteIndex] & 0x1F;
      this->Stream.CurBitIndex = 0;
      goto LABEL_13;
    case 4u:
      CurByteIndex = this->Stream.CurByteIndex;
      v6 = this->Stream.pData[CurByteIndex + 1];
      v7 = 2 * (this->Stream.pData[CurByteIndex] & 0xF);
      this->Stream.CurBitIndex = 1;
      v8 = v6 >> 7;
      goto LABEL_12;
    case 5u:
      v9 = this->Stream.CurByteIndex;
      v7 = 4 * (this->Stream.pData[v9] & 7);
      v8 = this->Stream.pData[v9 + 1] >> 6;
      this->Stream.CurBitIndex = 2;
      goto LABEL_12;
    case 6u:
      v10 = this->Stream.CurByteIndex;
      v7 = 8 * (this->Stream.pData[v10] & 3);
      v8 = this->Stream.pData[v10 + 1] >> 5;
      this->Stream.CurBitIndex = 3;
      goto LABEL_12;
    case 7u:
      v11 = this->Stream.CurByteIndex;
      v7 = 16 * (this->Stream.pData[v11] & 1);
      v8 = this->Stream.pData[v11 + 1] >> 4;
      this->Stream.CurBitIndex = 4;
LABEL_12:
      v4 = v8 | v7;
LABEL_13:
      ++this->Stream.CurByteIndex;
LABEL_14:
      if ( !v4 )
        goto LABEL_76;
      if ( (v4 & 1) != 0 )
      {
        switch ( this->Stream.CurBitIndex )
        {
          case 0u:
            v12 = this->Stream.pData[this->Stream.CurByteIndex] >> 3;
            this->Stream.CurBitIndex = 5;
            break;
          case 1u:
            v12 = (this->Stream.pData[this->Stream.CurByteIndex] >> 2) & 0x1F;
            this->Stream.CurBitIndex = 6;
            break;
          case 2u:
            v12 = (this->Stream.pData[this->Stream.CurByteIndex] >> 1) & 0x1F;
            this->Stream.CurBitIndex = 7;
            break;
          case 3u:
            v13 = this->Stream.CurByteIndex;
            v14 = this->Stream.pData[v13];
            this->Stream.CurByteIndex = v13 + 1;
            v12 = v14 & 0x1F;
            this->Stream.CurBitIndex = 0;
            break;
          case 4u:
            v15 = this->Stream.CurByteIndex;
            v12 = (this->Stream.pData[v15 + 1] >> 7) | (2 * (this->Stream.pData[v15] & 0xF));
            this->Stream.CurBitIndex = 1;
            this->Stream.CurByteIndex = v15 + 1;
            break;
          case 5u:
            v16 = this->Stream.CurByteIndex;
            v12 = (this->Stream.pData[v16 + 1] >> 6) | (4 * (this->Stream.pData[v16] & 7));
            this->Stream.CurBitIndex = 2;
            this->Stream.CurByteIndex = v16 + 1;
            break;
          case 6u:
            v17 = this->Stream.CurByteIndex;
            v12 = (this->Stream.pData[v17 + 1] >> 5) | (8 * (this->Stream.pData[v17] & 3));
            this->Stream.CurBitIndex = 3;
            this->Stream.CurByteIndex = v17 + 1;
            break;
          case 7u:
            v18 = this->Stream.CurByteIndex;
            v12 = (this->Stream.pData[v18 + 1] >> 4) | (16 * (this->Stream.pData[v18] & 1));
            this->Stream.CurBitIndex = 4;
            this->Stream.CurByteIndex = v18 + 1;
            break;
          default:
            v12 = 0;
            break;
        }
        v19 = 1 << (v12 - 1);
        UInt = Scaleform::GFx::StreamContext::ReadUInt(&this->Stream, v12);
        if ( (v19 & UInt) != 0 )
          UInt |= -1 << v12;
        this->Pos->LastX = UInt;
        v21 = Scaleform::GFx::StreamContext::ReadUInt(&this->Stream, v12);
        if ( (v19 & v21) != 0 )
          v21 |= -1 << v12;
        this->Pos->LastY = v21;
      }
      if ( (v4 & 2) != 0 )
      {
        NumFillBits = this->Pos->NumFillBits;
        if ( NumFillBits )
        {
          v23 = Scaleform::GFx::StreamContext::ReadUInt(&this->Stream, NumFillBits);
          if ( v23 )
            v23 += this->Pos->FillBase;
          this->Pos->Fill0 = v23;
        }
      }
      if ( (v4 & 4) != 0 )
      {
        v24 = this->Pos->NumFillBits;
        if ( v24 )
        {
          v25 = Scaleform::GFx::StreamContext::ReadUInt(&this->Stream, v24);
          if ( v25 > 0 )
            v25 += this->Pos->FillBase;
          this->Pos->Fill1 = v25;
        }
      }
      if ( (v4 & 8) != 0 )
      {
        NumStrokeBits = this->Pos->NumStrokeBits;
        if ( NumStrokeBits )
        {
          v27 = Scaleform::GFx::StreamContext::ReadUInt(&this->Stream, NumStrokeBits);
          if ( v27 > 0 )
            v27 += this->Pos->StrokeBase;
          this->Pos->Stroke = v27;
        }
      }
      if ( (v4 & 0x10) != 0 )
      {
        this->Pos->Stroke = 0;
        this->Pos->Fill1 = 0;
        this->Pos->Fill0 = 0;
        if ( this->Stream.CurBitIndex )
          ++this->Stream.CurByteIndex;
        this->Stream.CurBitIndex = 0;
        v28 = this->Stream.CurByteIndex;
        pData = this->Stream.pData;
        v30 = this->Stream.pData[v28];
        this->Stream.CurByteIndex = v28 + 1;
        v31 = v30;
        if ( (_BYTE)v30 )
        {
          v32 = this->Stream.CurByteIndex;
          this->Stream.CurBitIndex = 0;
          v33 = pData[v32];
          this->Stream.CurByteIndex = v32 + 1;
          this->Stream.CurBitIndex = 0;
          v34 = v32 + 2;
          LODWORD(v32) = pData[v32 + 1] << 8;
          this->Stream.CurByteIndex = v34;
          this->Stream.CurBitIndex = 0;
          v35 = pData[v34];
          this->Stream.CurByteIndex = v34 + 1;
          v31 = v35 | v32 | (v33 << 16);
        }
        if ( this->Stream.CurBitIndex )
          ++this->Stream.CurByteIndex;
        v36 = this->Stream.CurByteIndex;
        this->Stream.CurBitIndex = 0;
        v37 = pData[v36];
        this->Stream.CurByteIndex = v36 + 1;
        v38 = v37;
        if ( v37 == 255 )
        {
          this->Stream.CurBitIndex = 0;
          v39 = pData[v36 + 1];
          this->Stream.CurByteIndex = v36 + 2;
          this->Stream.CurBitIndex = 0;
          v40 = (pData[v36 + 2] << 8) | (v39 << 16);
          this->Stream.CurByteIndex = v36 + 3;
          this->Stream.CurBitIndex = 0;
          v41 = pData[v36 + 3];
          this->Stream.CurByteIndex = v36 + 4;
          v38 = v41 | v40;
        }
        this->Pos->FillBase = v31;
        this->Pos->StrokeBase = v38;
        switch ( this->Stream.CurBitIndex )
        {
          case 0u:
            v42 = this->Stream.pData[this->Stream.CurByteIndex] >> 4;
            this->Stream.CurBitIndex = 4;
            break;
          case 1u:
            v42 = (this->Stream.pData[this->Stream.CurByteIndex] >> 3) & 0xF;
            this->Stream.CurBitIndex = 5;
            break;
          case 2u:
            v42 = (this->Stream.pData[this->Stream.CurByteIndex] >> 2) & 0xF;
            this->Stream.CurBitIndex = 6;
            break;
          case 3u:
            v42 = (this->Stream.pData[this->Stream.CurByteIndex] >> 1) & 0xF;
            this->Stream.CurBitIndex = 7;
            break;
          case 4u:
            v43 = this->Stream.CurByteIndex;
            v44 = this->Stream.pData[v43];
            this->Stream.CurByteIndex = v43 + 1;
            v42 = v44 & 0xF;
            this->Stream.CurBitIndex = 0;
            break;
          case 5u:
            v45 = this->Stream.CurByteIndex;
            v42 = (this->Stream.pData[v45 + 1] >> 7) | (2 * (this->Stream.pData[v45] & 7));
            this->Stream.CurBitIndex = 1;
            this->Stream.CurByteIndex = v45 + 1;
            break;
          case 6u:
            v46 = this->Stream.CurByteIndex;
            v42 = (this->Stream.pData[v46 + 1] >> 6) | (4 * (this->Stream.pData[v46] & 3));
            this->Stream.CurBitIndex = 2;
            this->Stream.CurByteIndex = v46 + 1;
            break;
          case 7u:
            v47 = this->Stream.CurByteIndex;
            v42 = (this->Stream.pData[v47 + 1] >> 5) | (8 * (this->Stream.pData[v47] & 1));
            this->Stream.CurBitIndex = 3;
            this->Stream.CurByteIndex = v47 + 1;
            break;
          default:
            v42 = 0;
            break;
        }
        this->Pos->NumFillBits = v42;
        switch ( this->Stream.CurBitIndex )
        {
          case 0u:
            v48 = this->Stream.pData[this->Stream.CurByteIndex];
            result = 2i64;
            this->Stream.CurBitIndex = 4;
            this->Pos->NumStrokeBits = v48 >> 4;
            break;
          case 1u:
            v50 = this->Stream.pData[this->Stream.CurByteIndex];
            result = 2i64;
            this->Stream.CurBitIndex = 5;
            this->Pos->NumStrokeBits = (v50 >> 3) & 0xF;
            break;
          case 2u:
            v51 = this->Stream.pData[this->Stream.CurByteIndex];
            result = 2i64;
            this->Stream.CurBitIndex = 6;
            this->Pos->NumStrokeBits = (v51 >> 2) & 0xF;
            break;
          case 3u:
            v52 = this->Stream.pData[this->Stream.CurByteIndex];
            result = 2i64;
            this->Stream.CurBitIndex = 7;
            this->Pos->NumStrokeBits = (v52 >> 1) & 0xF;
            break;
          case 4u:
            v53 = this->Stream.CurByteIndex;
            v54 = this->Stream.pData[v53];
            this->Stream.CurByteIndex = v53 + 1;
            this->Stream.CurBitIndex = 0;
            result = 2i64;
            this->Pos->NumStrokeBits = v54 & 0xF;
            break;
          case 5u:
            v55 = this->Stream.CurByteIndex;
            v56 = (this->Stream.pData[v55 + 1] >> 7) | (2 * (this->Stream.pData[v55] & 7));
            this->Stream.CurBitIndex = 1;
            this->Stream.CurByteIndex = v55 + 1;
            result = 2i64;
            this->Pos->NumStrokeBits = v56;
            break;
          case 6u:
            v57 = this->Stream.CurByteIndex;
            v58 = this->Stream.pData[v57] & 3;
            v59 = this->Stream.pData[v57 + 1] >> 6;
            this->Stream.CurBitIndex = 2;
            v60 = v59 | (4 * v58);
            this->Stream.CurByteIndex = v57 + 1;
            result = 2i64;
            this->Pos->NumStrokeBits = v60;
            break;
          case 7u:
            v61 = this->Stream.CurByteIndex;
            v62 = this->Stream.pData[v61] & 1;
            v63 = this->Stream.pData[v61 + 1] >> 5;
            this->Stream.CurBitIndex = 3;
            v64 = v63 | (8 * v62);
            this->Stream.CurByteIndex = v61 + 1;
            result = 2i64;
            this->Pos->NumStrokeBits = v64;
            break;
          default:
            result = 2i64;
            this->Pos->NumStrokeBits = 0;
            break;
        }
      }
      else
      {
        result = (unsigned int)retVal;
      }
      break;
    default:
LABEL_76:
      result = 0i64;
      break;
  }
  return result;
}

__int64 __fastcall Scaleform::GFx::ShapeDataBase::ReadPathInfo(
        Scaleform::GFx::ShapeDataBase *this,
        Scaleform::Render::ShapePosInfo *pos,
        float *coord,
        unsigned int *styles)
{
  Tween::EasingType v7; // xmm3_4
  Scaleform::Render::ShapePathType v8; // er9
  char CurBitIndex; // r10
  int CurByteIndex; // er11
  __int64 result; // rax
  Scaleform::GFx::SwfShapeDecoder v12; // [rsp+20h] [rbp-38h] BYREF

  if ( (this->Flags & 2) != 0 )
    v7 = FLOAT_0_050000001;
  else
    v7 = FLOAT_1_0;
  Scaleform::GFx::SwfShapeDecoder::SwfShapeDecoder(&v12, pos, this->Paths, *(float *)&v7);
  v8 = Shape_NewPath;
  while ( 1 )
  {
    CurBitIndex = v12.Stream.CurBitIndex;
    CurByteIndex = v12.Stream.CurByteIndex;
    if ( ((unsigned __int8)(1 << (7 - LOBYTE(v12.Stream.CurBitIndex))) & v12.Stream.pData[v12.Stream.CurByteIndex]) != 0 )
      break;
    v8 = (unsigned int)Scaleform::GFx::SwfShapeDecoder::ReadNonEdgeRec(&v12, v8);
    if ( v8 == Shape_EndShape )
    {
      CurBitIndex = v12.Stream.CurBitIndex;
      CurByteIndex = v12.Stream.CurByteIndex;
      goto LABEL_10;
    }
  }
  if ( v8 )
  {
    *styles = pos->Fill0;
    styles[1] = pos->Fill1;
    styles[2] = pos->Stroke;
    *coord = (float)pos->LastX * pos->Sfactor;
    coord[1] = (float)pos->LastY * pos->Sfactor;
  }
LABEL_10:
  result = (unsigned int)v8;
  v12.Pos->Pos = CurBitIndex & 7 | (8
                                  * (v12.Pos->NumStrokeBits & 0xF | (16
                                                                   * ((16 * CurByteIndex) | v12.Pos->NumFillBits & 0xF))));
  return result;
}

__int64 __fastcall Scaleform::GFx::ShapeSwfReader::ReadStrokeStyles(
        Scaleform::GFx::ShapeSwfReader *this,
        Scaleform::GFx::LoadProcess *p,
        Scaleform::GFx::TagType tagType)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rbx
  int v6; // eax
  __int64 Pos; // rdx
  unsigned int v8; // ebp
  Scaleform::GFx::SWFProcessInfo *p_ProcessInfo; // rbx
  int v10; // eax
  __int64 v11; // r10
  Scaleform::GFx::SWFProcessInfo *v12; // rax
  unsigned int v13; // er12
  unsigned __int64 Size; // r15
  unsigned __int64 v15; // rbx
  unsigned int v16; // edi
  Scaleform::Render::StrokeStyleType *v17; // rdx
  unsigned __int64 i; // rbx
  int StrokeStyle; // er15
  Scaleform::GFx::TagType v20; // er12
  Scaleform::GFx::SWFProcessInfo *v21; // rax
  Scaleform::Render::StrokeStyleType *v22; // rbx
  Scaleform::Render::ComplexFill *pObject; // rax
  Scaleform::Render::ComplexFill *v24; // rcx
  Scaleform::GFx::StrokeStyleSwfReader v26; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v27; // [rsp+68h] [rbp+10h]
  Scaleform::GFx::TagType tagTypea; // [rsp+70h] [rbp+18h]

  tagTypea = tagType;
  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  v6 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v6 < 1 )
    Scaleform::GFx::Stream::PopulateBuffer1(&pAltStream->Stream);
  Pos = pAltStream->Stream.Pos;
  v8 = pAltStream->Stream.pBuffer[Pos];
  pAltStream->Stream.Pos = Pos + 1;
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
    "  GFx_ReadStrokeStyles: count = %d\n");
  if ( v8 == 255 )
  {
    p_ProcessInfo = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
    if ( !p_ProcessInfo )
      p_ProcessInfo = &p->ProcessInfo;
    v10 = p_ProcessInfo->Stream.DataSize - p_ProcessInfo->Stream.Pos;
    p_ProcessInfo->Stream.UnusedBits = 0;
    if ( v10 < 2 )
      Scaleform::GFx::Stream::PopulateBuffer(&p_ProcessInfo->Stream, 2);
    v11 = p_ProcessInfo->Stream.Pos;
    v8 = p_ProcessInfo->Stream.pBuffer[v11] | (p_ProcessInfo->Stream.pBuffer[(unsigned int)(v11 + 1)] << 8);
    p_ProcessInfo->Stream.Pos = v11 + 2;
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
      "  GFx_ReadStrokeStyles: count2 = %d\n");
  }
  v12 = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !v12 )
    v12 = &p->ProcessInfo;
  v13 = v12->Stream.Pos + v12->Stream.FilePos - v12->Stream.DataSize;
  Size = this->StrokeStyles.Data.Size;
  LODWORD(v26.StrokeStyle) = this->StrokeStyles.Data.Size;
  v27 = v13;
  v15 = v8 + LODWORD(v26.StrokeStyle);
  Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorGH<Scaleform::Render::StrokeStyleType,259>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->StrokeStyles.Data,
    &this->StrokeStyles,
    v15);
  v16 = 0;
  if ( v15 > Size )
  {
    v17 = &this->StrokeStyles.Data.Data[Size];
    for ( i = v15 - Size; i; --i )
    {
      if ( v17 )
      {
        v17->pFill.pObject = 0i64;
        v17->pDashes.pObject = 0i64;
      }
      ++v17;
    }
  }
  if ( !v8 )
    return v13;
  StrokeStyle = (int)v26.StrokeStyle;
  v20 = tagTypea;
  do
  {
    v21 = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
    if ( !v21 )
      v21 = &p->ProcessInfo;
    v21->Stream.UnusedBits = 0;
    v26.StrokeStyle = &this->StrokeStyles.Data.Data[v16 + StrokeStyle];
    v22 = v26.StrokeStyle;
    Scaleform::GFx::StrokeStyleSwfReader::Read(&v26, p, v20);
    pObject = v22->pFill.pObject;
    if ( pObject && (pObject->pImage.pObject || pObject->BindIndex != -1) )
      this->Shape->Flags |= 1u;
    v24 = v22->pFill.pObject;
    if ( v24 )
    {
      if ( v24->BindIndex != -1 )
        this->Shape->Flags |= 4u;
    }
    ++v16;
  }
  while ( v16 < v8 );
  return v27;
}

unsigned __int16 __fastcall Scaleform::GFx::LoadProcess::ReadU16(Scaleform::GFx::LoadProcess *this)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rbx
  int v2; // eax
  __int64 Pos; // r8
  unsigned __int16 result; // ax

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)this->pAltStream;
  if ( !pAltStream )
    pAltStream = &this->ProcessInfo;
  v2 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v2 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  Pos = pAltStream->Stream.Pos;
  result = pAltStream->Stream.pBuffer[Pos] | (pAltStream->Stream.pBuffer[(unsigned int)(Pos + 1)] << 8);
  pAltStream->Stream.Pos = Pos + 2;
  return result;
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorGH<Scaleform::Render::FillStyleType,259>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorGH<Scaleform::Render::FillStyleType,259>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::Render::FillStyleType *Data; // rdx
  unsigned __int64 v5; // rdi
  Scaleform::Render::FillStyleType *v6; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v5 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v6 = (Scaleform::Render::FillStyleType *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                   Scaleform::Memory::pGlobalHeap,
                                                   Data,
                                                   16 * v5);
        this->Policy.Capacity = v5;
        this->Data = v6;
        return;
      }
      v7 = 259;
      this->Data = (Scaleform::Render::FillStyleType *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                         Scaleform::Memory::pGlobalHeap,
                                                         16 * v5,
                                                         &v7);
    }
    else
    {
      v5 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        this->Data = 0i64;
        this->Policy.Capacity = 0i64;
        return;
      }
    }
    this->Policy.Capacity = v5;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorGH<Scaleform::Render::StrokeStyleType,259>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorGH<Scaleform::Render::StrokeStyleType,259>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::Render::StrokeStyleType *Data; // rdx
  unsigned __int64 v5; // rdi
  Scaleform::Render::StrokeStyleType *v6; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v5 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v6 = (Scaleform::Render::StrokeStyleType *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                     Scaleform::Memory::pGlobalHeap,
                                                     Data,
                                                     40 * v5);
        this->Policy.Capacity = v5;
        this->Data = v6;
        return;
      }
      v7 = 259;
      this->Data = (Scaleform::Render::StrokeStyleType *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                           Scaleform::Memory::pGlobalHeap,
                                                           40 * v5,
                                                           &v7);
    }
    else
    {
      v5 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        this->Data = 0i64;
        this->Policy.Capacity = 0i64;
        return;
      }
    }
    this->Policy.Capacity = v5;
  }
}

void __fastcall Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::FillStyleType,Scaleform::AllocatorGH<Scaleform::Render::FillStyleType,259>,Scaleform::ArrayDefaultPolicy>>::Resize(
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::FillStyleType,Scaleform::AllocatorGH<Scaleform::Render::FillStyleType,259>,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  Scaleform::Render::FillStyleType *v5; // rax
  unsigned __int64 i; // rbx

  Size = this->Data.Size;
  Scaleform::ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorGH<Scaleform::Render::FillStyleType,259>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->Data,
    this,
    newSize);
  if ( newSize > Size )
  {
    v5 = &this->Data.Data[Size];
    for ( i = newSize - Size; i; --i )
    {
      if ( v5 )
        v5->pFill.pObject = 0i64;
      ++v5;
    }
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorGH<Scaleform::Render::FillStyleType,259>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorGH<Scaleform::Render::FillStyleType,259>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rdi
  unsigned __int64 v7; // rdi
  Scaleform::RefCountVImpl **p_pFill; // rbx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorGH<Scaleform::Render::FillStyleType,259>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    v7 = Size - newSize;
    if ( v7 )
    {
      p_pFill = (Scaleform::RefCountVImpl **)&this->Data[v7 - 1 + newSize].pFill;
      do
      {
        if ( *p_pFill )
          Scaleform::RefCountImpl::Release(*p_pFill);
        p_pFill -= 2;
        --v7;
      }
      while ( v7 );
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorGH<Scaleform::Render::FillStyleType,259>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorGH<Scaleform::Render::StrokeStyleType,259>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorGH<Scaleform::Render::StrokeStyleType,259>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v7; // rsi
  Scaleform::Ptr<Scaleform::Render::ComplexFill> *p_pFill; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorGH<Scaleform::Render::StrokeStyleType,259>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    v7 = Size - newSize;
    if ( v7 )
    {
      p_pFill = &this->Data[v7 - 1 + newSize].pFill;
      do
      {
        pObject = (Scaleform::RefCountVImpl *)p_pFill[1].pObject;
        if ( pObject )
          Scaleform::RefCountImpl::Release(pObject);
        if ( p_pFill->pObject )
          Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)p_pFill->pObject);
        p_pFill -= 5;
        --v7;
      }
      while ( v7 );
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorGH<Scaleform::Render::StrokeStyleType,259>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::Render::ImageDelegate::GetMatrix(
        Scaleform::GFx::SwfShapeCharacterDef *this,
        const Scaleform::Render::Rect<float> *r)
{
  this->pShape.pObject->SetRectBoundsLocal(this->pShape.pObject, r);
}

void __fastcall Scaleform::GFx::ConstShapeWithStyles::SetStyles(
        Scaleform::GFx::ConstShapeWithStyles *this,
        unsigned int fillStyleCount,
        const Scaleform::Render::FillStyleType *fillStyles,
        unsigned int strokeStyleCount,
        const Scaleform::Render::StrokeStyleType *strokeStyles)
{
  __int64 v5; // rdi
  __int64 v8; // rbx
  unsigned __int8 *v9; // rax
  unsigned int v10; // esi
  unsigned __int8 *i; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::ComplexFill *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  Scaleform::RefCountVImpl *v16; // rcx
  unsigned __int64 v17; // r15
  unsigned __int8 *v18; // rdi
  signed __int64 v19; // rsi
  Scaleform::RefCountVImpl *v20; // rcx
  Scaleform::RefCountVImpl *v21; // rcx
  Scaleform::Render::ComplexFill *v22; // rax
  __int64 v23; // rax
  __int64 v24; // r14
  Scaleform::RefCountVImpl *v25; // rcx
  int v26; // [rsp+48h] [rbp+10h] BYREF

  v5 = fillStyleCount;
  v8 = strokeStyleCount;
  if ( this->Styles )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  this->FillStylesNum = v5;
  this->StrokeStylesNum = v8;
  if ( (_DWORD)v5 || (_DWORD)v8 )
  {
    v9 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                              Scaleform::Memory::pGlobalHeap,
                              this,
                              16 * v5 + 40 * v8,
                              0i64);
    v10 = 0;
    this->Styles = v9;
    for ( i = v9; v10 < this->FillStylesNum; ++v10 )
    {
      if ( i )
      {
        *(_DWORD *)i = fillStyles[v10].Color;
        pObject = (Scaleform::RefCountVImpl *)fillStyles[v10].pFill.pObject;
        if ( pObject )
          Scaleform::Render::RenderBuffer::AddRef(pObject);
        *((_QWORD *)i + 1) = fillStyles[v10].pFill.pObject;
      }
      if ( *((_QWORD *)i + 1) )
      {
        v26 = 71;
        v13 = (Scaleform::Render::ComplexFill *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                  Scaleform::Memory::pGlobalHeap,
                                                  this,
                                                  80i64,
                                                  &v26);
        if ( v13 )
        {
          Scaleform::Render::ComplexFill::ComplexFill(v13, *((const Scaleform::Render::ComplexFill **)i + 1));
          v15 = v14;
        }
        else
        {
          v15 = 0i64;
        }
        v16 = (Scaleform::RefCountVImpl *)*((_QWORD *)i + 1);
        if ( v16 )
          Scaleform::RefCountImpl::Release(v16);
        *((_QWORD *)i + 1) = v15;
      }
      i += 16;
    }
    v17 = 0i64;
    if ( this->StrokeStylesNum )
    {
      v18 = i + 4;
      v19 = (char *)strokeStyles - (char *)i;
      do
      {
        if ( v18 != (unsigned __int8 *)4 )
        {
          *((_DWORD *)v18 - 1) = *(_DWORD *)&v18[v19 - 4];
          *(_DWORD *)v18 = *(_DWORD *)&v18[v19];
          *((_DWORD *)v18 + 1) = *(_DWORD *)&v18[v19 + 4];
          *((_DWORD *)v18 + 2) = *(_DWORD *)&v18[v19 + 8];
          *((_DWORD *)v18 + 3) = *(_DWORD *)&v18[v19 + 12];
          v20 = *(Scaleform::RefCountVImpl **)&v18[v19 + 20];
          if ( v20 )
            Scaleform::Render::RenderBuffer::AddRef(v20);
          *(_QWORD *)(v18 + 20) = *(_QWORD *)&v18[v19 + 20];
          v21 = *(Scaleform::RefCountVImpl **)&v18[v19 + 28];
          if ( v21 )
            Scaleform::Render::RenderBuffer::AddRef(v21);
          *(_QWORD *)(v18 + 28) = *(_QWORD *)&v18[v19 + 28];
        }
        if ( *((_QWORD *)i + 3) )
        {
          v26 = 71;
          v22 = (Scaleform::Render::ComplexFill *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                    Scaleform::Memory::pGlobalHeap,
                                                    this,
                                                    80i64,
                                                    &v26);
          if ( v22 )
          {
            Scaleform::Render::ComplexFill::ComplexFill(v22, *((const Scaleform::Render::ComplexFill **)i + 3));
            v24 = v23;
          }
          else
          {
            v24 = 0i64;
          }
          v25 = (Scaleform::RefCountVImpl *)*((_QWORD *)i + 3);
          if ( v25 )
            Scaleform::RefCountImpl::Release(v25);
          *((_QWORD *)i + 3) = v24;
        }
        ++v17;
        v18 += 40;
      }
      while ( v17 < this->StrokeStylesNum );
    }
  }
  else
  {
    this->Styles = 0i64;
  }
}

void __fastcall Scaleform::HashSetBase<unsigned int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedEntry<unsigned int,Scaleform::FixedSizeHash<unsigned int>>>::setRawCapacity(
        Scaleform::HashSetBase<unsigned int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedEntry<unsigned int,Scaleform::FixedSizeHash<unsigned int> > > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  const unsigned int *v9; // rsi
  unsigned __int64 v10; // rax
  int v11; // [rsp+60h] [rbp+18h] BYREF
  Scaleform::HashSetBase<unsigned int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedEntry<unsigned int,Scaleform::FixedSizeHash<unsigned int> > > v12; // [rsp+68h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v11 = 2;
    v6 = 0i64;
    v12.pTable = 0i64;
    v12.pTable = (Scaleform::HashSetBase<unsigned int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedEntry<unsigned int,Scaleform::FixedSizeHash<unsigned int> > >::TableType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pheapAddr, 24 * v5 + 16, &v11);
    v12.pTable->EntryCount = 0i64;
    v12.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v7 = 0i64;
      do
      {
        v7 += 24i64;
        *(_QWORD *)((char *)v12.pTable + v7 - 8) = -2i64;
        --v5;
      }
      while ( v5 );
    }
    if ( this->pTable )
    {
      v8 = this->pTable->SizeMask + 1;
      do
      {
        v9 = (const unsigned int *)((char *)this->pTable + v6);
        if ( *((_QWORD *)v9 + 2) != -2i64 )
        {
          v10 = Scaleform::FixedSizeHash<unsigned int>::operator()(
                  (Scaleform::FixedSizeHash<unsigned int> *)&v11,
                  v9 + 8);
          Scaleform::HashSetBase<unsigned int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedEntry<unsigned int,Scaleform::FixedSizeHash<unsigned int>>>::add<unsigned int>(
            &v12,
            pheapAddr,
            v9 + 8,
            v10);
          *((_QWORD *)v9 + 2) = -2i64;
        }
        v6 += 24i64;
        --v8;
      }
      while ( v8 );
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    }
    this->pTable = v12.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::TR::NodeBlock *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>>::Clear((Scaleform::HashSetBase<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::AllocatorDH<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,348>,Scaleform::HashsetCachedEntry<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor> > *)this);
  }
}

