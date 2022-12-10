#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/set"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_game_interface.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

class extension::RefCountable<extension::gfxi_detail::FunctionTable>
{
private:
	extension::AtomicInt m_refCount; // 0x0
	void addRef();
	void release();
protected:
	RefCountable<extension::gfxi_detail::FunctionTable>(const extension::RefCountable<extension::gfxi_detail::FunctionTable> &);
public:
	RefCountable<extension::gfxi_detail::FunctionTable>();
protected:
	extension::RefCountable<extension::gfxi_detail::FunctionTable> & operator=(const extension::RefCountable<extension::gfxi_detail::FunctionTable> &);
	~RefCountable<extension::gfxi_detail::FunctionTable>();
};
class extension::gfxi_detail::FunctionTable :
	extension::RefCountable<extension::gfxi_detail::FunctionTable>
{
public:
	FunctionTable();
private:
	FunctionTable(const extension::gfxi_detail::FunctionTable &);
	extension::gfxi_detail::FunctionTable & operator=(const extension::gfxi_detail::FunctionTable &);
	~FunctionTable();
	class Value;
	class MethodFn;
public:
	void installFunction(const char *, const std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> &);
	Scaleform::GFx::Value call(const char *, extension::GFXIMovieContext &, const Scaleform::GFx::Value *, unsigned long);
	class FunctionNameSet_t;
private:
	static std::set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > s_functionNameSet; // 0xFFFFFFFFFFFFFFFF
	class StringRef;
	class Map_t;
	std::unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > > m_map; // 0x8
};
extension::gfxi_detail::FunctionTable::FunctionTable(); // 0x140277FF0
class std::set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > :
	std::_Tree<std::_Tset_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,0> >
{
	class _Myt;
	class _Mybase;
	class key_type;
	struct key_compare;
	struct value_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > pointer;
	typedef const std::basic_string<char,std::char_traits<char>,std::allocator<char> > const_pointer;
	typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > reference;
	typedef const std::basic_string<char,std::char_traits<char>,std::allocator<char> > const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	class value_type;
	struct _Alty;
public:
	set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(std::initializer_list<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >, const std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(std::initializer_list<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >, const std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(std::initializer_list<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >);
	set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(std::set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &, const std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(std::set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
	set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(const std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(const std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(const std::set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &, const std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(const std::set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
	set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(const std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >();
	std::set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > & operator=(std::initializer_list<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >);
	std::set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > & operator=(std::set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
	std::set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > & operator=(const std::set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
	void swap(std::set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
	~set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >();
};
class extension::gfxi_detail::FunctionTable::StringRef
{
private:
	const char * m_str; // 0x0
	unsigned long long m_hash; // 0x8
public:
	StringRef(const char *);
	const char * c_str();
	bool operator==(const extension::gfxi_detail::FunctionTable::StringRef &);
	bool operator!=(const extension::gfxi_detail::FunctionTable::StringRef &);
	struct Hash;
};
struct extension::gfxi_detail::FunctionTable::StringRef::Hash
{
	unsigned long long operator()(const extension::gfxi_detail::FunctionTable::StringRef &);
};
class std::unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > > :
	std::_Hash<std::_Umap_traits<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,std::_Uhash_compare<extension::gfxi_detail::FunctionTable::StringRef,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef> >,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > >,0> >
{
	class _Myt;
	class _Mytraits;
	class _Mybase;
	struct hasher;
	class key_type;
	class mapped_type;
	struct key_equal;
	class key_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > pointer;
	typedef const std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > const_pointer;
	typedef std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > reference;
	typedef const std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > const_reference;
	class iterator;
	class const_iterator;
	struct value_type;
	class local_iterator;
	class const_local_iterator;
	struct _Alty;
	struct _Pairib;
public:
	unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<exten(std::initializer_list<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > >, unsigned long long, const extension::gfxi_detail::FunctionTable::StringRef::Hash &, const std::equal_to<extension::gfxi_detail::FunctionTable::StringRef> &, const std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > &);
	unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<exten(std::initializer_list<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > >, unsigned long long, const extension::gfxi_detail::FunctionTable::StringRef::Hash &, const std::equal_to<extension::gfxi_detail::FunctionTable::StringRef> &);
	unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<exten(std::initializer_list<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > >, unsigned long long, const extension::gfxi_detail::FunctionTable::StringRef::Hash &);
	unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<exten(std::initializer_list<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > >, unsigned long long);
	unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<exten(std::initializer_list<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > >);
	unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<exten(std::unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > > &, const std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > &);
	unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<exten(std::unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > > &);
	unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<exten(unsigned long long, const extension::gfxi_detail::FunctionTable::StringRef::Hash &, const std::equal_to<extension::gfxi_detail::FunctionTable::StringRef> &, const std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > &);
	unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<exten(unsigned long long, const extension::gfxi_detail::FunctionTable::StringRef::Hash &, const std::equal_to<extension::gfxi_detail::FunctionTable::StringRef> &);
	unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<exten(unsigned long long, const extension::gfxi_detail::FunctionTable::StringRef::Hash &);
	unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<exten(unsigned long long);
	unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<exten(const std::unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > > &, const std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > &);
	unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<exten(const std::unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > > &);
	unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<exten(const std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > &);
	unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<exten();
	std::unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > > & operator=(std::initializer_list<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > >);
	std::unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > > & operator=(std::unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > > &);
	std::unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > > & operator=(const std::unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > > &);
	std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> & operator[](const extension::gfxi_detail::FunctionTable::StringRef &);
	std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> & operator[](extension::gfxi_detail::FunctionTable::StringRef &);
	void swap(std::unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > > &);
	extension::gfxi_detail::FunctionTable::StringRef::Hash hash_function();
	std::equal_to<extension::gfxi_detail::FunctionTable::StringRef> key_eq();
	const std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> & at(const extension::gfxi_detail::FunctionTable::StringRef &);
	std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> & at(const extension::gfxi_detail::FunctionTable::StringRef &);
	~unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<exte();
};
void extension::gfxi_detail::FunctionTable::installFunction(const char * methodName, const std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> & fn); // 0x1402780E0
Scaleform::GFx::Value extension::gfxi_detail::FunctionTable::call(const char * methodName, extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140278390
class extension::gfxi_detail::GameInterfaceImpl :
	extension::RefCountable<extension::gfxi_detail::GameInterfaceImpl>
{
public:
	GameInterfaceImpl();
private:
	GameInterfaceImpl(const extension::gfxi_detail::GameInterfaceImpl &);
	extension::gfxi_detail::GameInterfaceImpl & operator=(const extension::gfxi_detail::GameInterfaceImpl &);
	~GameInterfaceImpl();
	class Value;
	class MethodFn;
public:
	void installFunction(const char *, const std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> &);
	Scaleform::Ptr<Scaleform::GFx::ExternalInterface> getExternalInterface();
	Scaleform::Ptr<Scaleform::GFx::FSCommandHandler> getFSCommandHandler();
	class Exi;
	class Fsc;
private:
	extension::RefCountablePtr<extension::gfxi_detail::FunctionTable> m_functionTable; // 0x8
	Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Exi> m_exi; // 0x10
	Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Fsc> m_fsc; // 0x18
};
class extension::RefCountable<extension::gfxi_detail::GameInterfaceImpl>
{
private:
	extension::AtomicInt m_refCount; // 0x0
	void addRef();
	void release();
protected:
	RefCountable<extension::gfxi_detail::GameInterfaceImpl>(const extension::RefCountable<extension::gfxi_detail::GameInterfaceImpl> &);
public:
	RefCountable<extension::gfxi_detail::GameInterfaceImpl>();
protected:
	extension::RefCountable<extension::gfxi_detail::GameInterfaceImpl> & operator=(const extension::RefCountable<extension::gfxi_detail::GameInterfaceImpl> &);
	~RefCountable<extension::gfxi_detail::GameInterfaceImpl>();
};
Scaleform::Ptr<Scaleform::GFx::ExternalInterface> extension::gfxi_detail::GameInterfaceImpl::getExternalInterface(); // 0x1402785D0
Scaleform::Ptr<Scaleform::GFx::FSCommandHandler> extension::gfxi_detail::GameInterfaceImpl::getFSCommandHandler(); // 0x140278610
class extension::gfxi_detail::GameInterfaceImpl::Exi :
	Scaleform::GFx::ExternalInterface
{
private:
	extension::RefCountablePtr<extension::gfxi_detail::FunctionTable const > m_table; // 0x18
public:
	Exi(const extension::gfxi_detail::GameInterfaceImpl::Exi &);
	Exi(const extension::RefCountablePtr<extension::gfxi_detail::FunctionTable> &);
	virtual ~Exi();
	virtual void Callback(Scaleform::GFx::Movie *, const char *, const Scaleform::GFx::Value *, unsigned long);
	extension::gfxi_detail::GameInterfaceImpl::Exi & operator=(const extension::gfxi_detail::GameInterfaceImpl::Exi &);
};
class extension::RefCountablePtr<extension::gfxi_detail::FunctionTable const >
{
private:
	const extension::gfxi_detail::FunctionTable * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::gfxi_detail::FunctionTable const >(const extension::RefCountablePtr<extension::gfxi_detail::FunctionTable const > &);
	RefCountablePtr<extension::gfxi_detail::FunctionTable const >(const extension::gfxi_detail::FunctionTable *, bool);
	RefCountablePtr<extension::gfxi_detail::FunctionTable const >(const extension::gfxi_detail::FunctionTable *);
	RefCountablePtr<extension::gfxi_detail::FunctionTable const >();
	~RefCountablePtr<extension::gfxi_detail::FunctionTable const >();
	void swap(extension::RefCountablePtr<extension::gfxi_detail::FunctionTable const > &);
	extension::RefCountablePtr<extension::gfxi_detail::FunctionTable const > & operator=(const extension::RefCountablePtr<extension::gfxi_detail::FunctionTable const > &);
	void reset(const extension::gfxi_detail::FunctionTable *);
	void resetWithAddRef(const extension::gfxi_detail::FunctionTable *);
	const extension::gfxi_detail::FunctionTable * get();
	const extension::gfxi_detail::FunctionTable & operator*();
	const extension::gfxi_detail::FunctionTable * operator->();
	bool isNull();
};
class extension::RefCountablePtr<extension::gfxi_detail::FunctionTable>
{
private:
	extension::gfxi_detail::FunctionTable * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::gfxi_detail::FunctionTable>(const extension::RefCountablePtr<extension::gfxi_detail::FunctionTable> &);
	RefCountablePtr<extension::gfxi_detail::FunctionTable>(extension::gfxi_detail::FunctionTable *, bool);
	RefCountablePtr<extension::gfxi_detail::FunctionTable>(extension::gfxi_detail::FunctionTable *);
	RefCountablePtr<extension::gfxi_detail::FunctionTable>();
	~RefCountablePtr<extension::gfxi_detail::FunctionTable>();
	void swap(extension::RefCountablePtr<extension::gfxi_detail::FunctionTable> &);
	extension::RefCountablePtr<extension::gfxi_detail::FunctionTable> & operator=(const extension::RefCountablePtr<extension::gfxi_detail::FunctionTable> &);
	void reset(extension::gfxi_detail::FunctionTable *);
	void resetWithAddRef(extension::gfxi_detail::FunctionTable *);
	extension::gfxi_detail::FunctionTable * get();
	extension::gfxi_detail::FunctionTable & operator*();
	extension::gfxi_detail::FunctionTable * operator->();
	bool isNull();
};
void extension::gfxi_detail::GameInterfaceImpl::Exi::Callback(Scaleform::GFx::Movie * movie, const char * methodName, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140278650
class extension::gfxi_detail::GameInterfaceImpl::Fsc :
	Scaleform::GFx::FSCommandHandler
{
private:
	extension::RefCountablePtr<extension::gfxi_detail::FunctionTable const > m_table; // 0x18
public:
	Fsc(const extension::gfxi_detail::GameInterfaceImpl::Fsc &);
	Fsc(const extension::RefCountablePtr<extension::gfxi_detail::FunctionTable> &);
	virtual ~Fsc();
	virtual void Callback(Scaleform::GFx::Movie *, const char *, const char *);
	extension::gfxi_detail::GameInterfaceImpl::Fsc & operator=(const extension::gfxi_detail::GameInterfaceImpl::Fsc &);
};
void extension::gfxi_detail::GameInterfaceImpl::Fsc::Callback(Scaleform::GFx::Movie * movie, const char * commandName, const char * arg); // 0x140278740
class Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Exi>
{
protected:
	extension::gfxi_detail::GameInterfaceImpl::Exi * pObject; // 0x0
public:
	Ptr<extension::gfxi_detail::GameInterfaceImpl::Exi>(const Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Exi> &);
	Ptr<extension::gfxi_detail::GameInterfaceImpl::Exi>(extension::gfxi_detail::GameInterfaceImpl::Exi *);
	Ptr<extension::gfxi_detail::GameInterfaceImpl::Exi>(Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Exi> &, Scaleform::PickType);
	Ptr<extension::gfxi_detail::GameInterfaceImpl::Exi>(Scaleform::Pickable<extension::gfxi_detail::GameInterfaceImpl::Exi>);
	Ptr<extension::gfxi_detail::GameInterfaceImpl::Exi>(extension::gfxi_detail::GameInterfaceImpl::Exi &);
	Ptr<extension::gfxi_detail::GameInterfaceImpl::Exi>();
	~Ptr<extension::gfxi_detail::GameInterfaceImpl::Exi>();
	bool operator==(extension::gfxi_detail::GameInterfaceImpl::Exi *);
	bool operator==(const Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Exi> &);
	bool operator!=(extension::gfxi_detail::GameInterfaceImpl::Exi *);
	bool operator!=(const Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Exi> &);
	bool operator<(const Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Exi> &);
	Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Exi> & operator=(Scaleform::Pickable<extension::gfxi_detail::GameInterfaceImpl::Exi>);
	const Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Exi> & operator=(extension::gfxi_detail::GameInterfaceImpl::Exi &);
	const Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Exi> & operator=(extension::gfxi_detail::GameInterfaceImpl::Exi *);
	const Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Exi> & operator=(const Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Exi> &);
	Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Exi> & SetPtr(Scaleform::Pickable<extension::gfxi_detail::GameInterfaceImpl::Exi>);
	Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Exi> & SetPtr(extension::gfxi_detail::GameInterfaceImpl::Exi &);
	Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Exi> & SetPtr(extension::gfxi_detail::GameInterfaceImpl::Exi *);
	Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Exi> & SetPtr(const Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Exi> &);
	void NullWithoutRelease();
	void Clear();
	extension::gfxi_detail::GameInterfaceImpl::Exi * & GetRawRef();
	extension::gfxi_detail::GameInterfaceImpl::Exi * GetPtr();
	extension::gfxi_detail::GameInterfaceImpl::Exi & operator*();
	extension::gfxi_detail::GameInterfaceImpl::Exi * operator->();
	extension::gfxi_detail::GameInterfaceImpl::Exi * operator class extension::gfxi_detail::GameInterfaceImpl::Exi *();
	Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Exi> & Pick(extension::gfxi_detail::GameInterfaceImpl::Exi *);
	Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Exi> & Pick(Scaleform::Pickable<extension::gfxi_detail::GameInterfaceImpl::Exi>);
	Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Exi> & Pick(Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Exi> &);
};
class Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Fsc>
{
protected:
	extension::gfxi_detail::GameInterfaceImpl::Fsc * pObject; // 0x0
public:
	Ptr<extension::gfxi_detail::GameInterfaceImpl::Fsc>(const Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Fsc> &);
	Ptr<extension::gfxi_detail::GameInterfaceImpl::Fsc>(extension::gfxi_detail::GameInterfaceImpl::Fsc *);
	Ptr<extension::gfxi_detail::GameInterfaceImpl::Fsc>(Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Fsc> &, Scaleform::PickType);
	Ptr<extension::gfxi_detail::GameInterfaceImpl::Fsc>(Scaleform::Pickable<extension::gfxi_detail::GameInterfaceImpl::Fsc>);
	Ptr<extension::gfxi_detail::GameInterfaceImpl::Fsc>(extension::gfxi_detail::GameInterfaceImpl::Fsc &);
	Ptr<extension::gfxi_detail::GameInterfaceImpl::Fsc>();
	~Ptr<extension::gfxi_detail::GameInterfaceImpl::Fsc>();
	bool operator==(extension::gfxi_detail::GameInterfaceImpl::Fsc *);
	bool operator==(const Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Fsc> &);
	bool operator!=(extension::gfxi_detail::GameInterfaceImpl::Fsc *);
	bool operator!=(const Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Fsc> &);
	bool operator<(const Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Fsc> &);
	Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Fsc> & operator=(Scaleform::Pickable<extension::gfxi_detail::GameInterfaceImpl::Fsc>);
	const Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Fsc> & operator=(extension::gfxi_detail::GameInterfaceImpl::Fsc &);
	const Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Fsc> & operator=(extension::gfxi_detail::GameInterfaceImpl::Fsc *);
	const Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Fsc> & operator=(const Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Fsc> &);
	Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Fsc> & SetPtr(Scaleform::Pickable<extension::gfxi_detail::GameInterfaceImpl::Fsc>);
	Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Fsc> & SetPtr(extension::gfxi_detail::GameInterfaceImpl::Fsc &);
	Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Fsc> & SetPtr(extension::gfxi_detail::GameInterfaceImpl::Fsc *);
	Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Fsc> & SetPtr(const Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Fsc> &);
	void NullWithoutRelease();
	void Clear();
	extension::gfxi_detail::GameInterfaceImpl::Fsc * & GetRawRef();
	extension::gfxi_detail::GameInterfaceImpl::Fsc * GetPtr();
	extension::gfxi_detail::GameInterfaceImpl::Fsc & operator*();
	extension::gfxi_detail::GameInterfaceImpl::Fsc * operator->();
	extension::gfxi_detail::GameInterfaceImpl::Fsc * operator class extension::gfxi_detail::GameInterfaceImpl::Fsc *();
	Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Fsc> & Pick(extension::gfxi_detail::GameInterfaceImpl::Fsc *);
	Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Fsc> & Pick(Scaleform::Pickable<extension::gfxi_detail::GameInterfaceImpl::Fsc>);
	Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Fsc> & Pick(Scaleform::Ptr<extension::gfxi_detail::GameInterfaceImpl::Fsc> &);
};
extension::gfxi_detail::GameInterfaceImpl::GameInterfaceImpl(); // 0x140278960
std::unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext & __ptr64,Scaleform::GFx::Value const * __ptr64,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext & __ptr64,Scaleform::GFx::Value const * __ptr64,unsigned int)> > > >::~unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext & __ptr64,Scaleform::GFx::Value const * __ptr64,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext & __ptr64,Scaleform::GFx::Value const * __ptr64,unsigned int)> > > >(); // 0x140278090
extension::GFXIGameInterface::~GFXIGameInterface(); // 0x140278A90
extension::GFXIMovieContext::~GFXIMovieContext(); // 0x1402788C0
Scaleform::Ptr<Scaleform::GFx::ExternalInterface> extension::GFXIGameInterface::getExternalInterface(); // 0x140278AA0
Scaleform::Ptr<Scaleform::GFx::FSCommandHandler> extension::GFXIGameInterface::getFSCommandHandler(); // 0x140278AD0
extension::GFXIGameInterface & extension::GFXIGameInterface::GlobalInterface(); // 0x140278B00
class extension::GFXIGameInterface::GlobalInterface::__l2::GlobalInterfaceImpl :
	extension::GFXIGameInterface
{
public:
	GlobalInterfaceImpl(extension::GFXIGameInterface::GlobalInterface::__l2::GlobalInterfaceImpl &);
	GlobalInterfaceImpl(const extension::GFXIGameInterface::GlobalInterface::__l2::GlobalInterfaceImpl &);
	GlobalInterfaceImpl();
	~GlobalInterfaceImpl();
	extension::GFXIGameInterface::GlobalInterface::__l2::GlobalInterfaceImpl & operator=(extension::GFXIGameInterface::GlobalInterface::__l2::GlobalInterfaceImpl &);
	extension::GFXIGameInterface::GlobalInterface::__l2::GlobalInterfaceImpl & operator=(const extension::GFXIGameInterface::GlobalInterface::__l2::GlobalInterfaceImpl &);
};
void(*??s_functionNameSet$initializer$@FunctionTable@gfxi_detail@extension@@0P6AXXZEA@@3P6AXXZEA)(); // 0x1407408A8
std::piecewise_construct_t std::piecewise_construct; // 0x1408AED1A//decompilation failure at 1407408A8!
//decompilation failure at 1408AED1A!
std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *__fastcall std::_List_buy<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>>::_Buynode<std::piecewise_construct_t const &,std::tuple<extension::gfxi_detail::FunctionTable::StringRef const &>,std::tuple<>>(
        std::_List_buy<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >> *this,
        std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *_Next,
        std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *_Prev,
        const std::piecewise_construct_t *<_Val_0>,
        std::tuple<extension::gfxi_detail::FunctionTable::StringRef const &> *<_Val_1>)
{
  std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *result; // rax

  result = (std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *)std::_List_alloc<std::_List_base_types<extension::SoundManager::SERequest>>::_Buynode0((std::_List_alloc<std::_List_base_types<extension::SoundManager::SERequest> > *)this, (std::_List_node<extension::SoundManager::SERequest,void *> *)_Next, (std::_List_node<extension::SoundManager::SERequest,void *> *)_Prev);
  if ( result != (std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *)-16i64 )
  {
    result->_Myval.first = *<_Val_1>->_Myfirst._Val;
    result->_Myval.second._Mystorage._Ptrs[7] = 0i64;
  }
  return result;
}

std::_Tree_node<std::string,void *> *__fastcall std::_Tree_comp_alloc<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Buynode<std::string>(
        std::_Tree_comp_alloc<std::_Tset_traits<std::string,std::less<std::string >,std::allocator<std::string >,0> > *this,
        std::string *<_Val_0>)
{
  std::_Tree_node<std::string,void *> *v3; // rbx
  std::string *p_Myval; // rcx
  std::string *Ptr; // rax

  v3 = std::_Tree_comp_alloc<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Buynode0(this);
  *(_WORD *)&v3->_Color = 0;
  p_Myval = &v3->_Myval;
  if ( v3 != (std::_Tree_node<std::string,void *> *)-32i64 )
  {
    v3->_Myval._Mypair._Myval2._Myres = 15i64;
    v3->_Myval._Mypair._Myval2._Mysize = 0i64;
    if ( v3->_Myval._Mypair._Myval2._Myres < 0x10 )
      Ptr = &v3->_Myval;
    else
      Ptr = (std::string *)p_Myval->_Mypair._Myval2._Bx._Ptr;
    Ptr->_Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::_Assign_rv(p_Myval, <_Val_0>);
  }
  return v3;
}

std::pair<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > > >,bool> *__fastcall std::_Hash<std::_Umap_traits<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,std::_Uhash_compare<extension::gfxi_detail::FunctionTable::StringRef,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>>,0>>::_Insert<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>>>>>(
        std::_Hash<std::_Umap_traits<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,std::_Uhash_compare<extension::gfxi_detail::FunctionTable::StringRef,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef> >,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > >,0> > *this,
        std::pair<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > > >,bool> *result,
        std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > *_Val,
        std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > > > _Pnode)
{
  unsigned __int64 m_hash; // r14
  unsigned __int64 v9; // r11
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > > > *Myfirst; // rbx
  std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *Ptr; // rax
  std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *Myhead; // rbx
  const char *m_str; // rcx
  __int64 v14; // rdx
  int v15; // er8
  std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *v16; // rcx
  std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *Next; // rax
  std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *Prev; // rdx
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > > > *v20; // rdx
  std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> **p_Next; // rax
  std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *v22; // rcx

  m_hash = _Val->first.m_hash;
  v9 = 2 * (m_hash & this->_Mask);
  Myfirst = this->_Vec._Mypair._Myval2._Myfirst;
  Ptr = Myfirst[v9]._Ptr;
  if ( Ptr == this->_List._Mypair._Myval2._Myhead )
    Myhead = this->_List._Mypair._Myval2._Myhead;
  else
    Myhead = Myfirst[v9 + 1]._Ptr->_Next;
  if ( Myhead == Ptr )
  {
LABEL_14:
    Next = _Pnode._Ptr->_Next;
    if ( Myhead != _Pnode._Ptr->_Next )
    {
      _Pnode._Ptr->_Prev->_Next = Next;
      Next->_Prev->_Next = Myhead;
      Myhead->_Prev->_Next = _Pnode._Ptr;
      Prev = Myhead->_Prev;
      Myhead->_Prev = Next->_Prev;
      Next->_Prev = _Pnode._Ptr->_Prev;
      _Pnode._Ptr->_Prev = Prev;
    }
    v20 = &this->_Vec._Mypair._Myval2._Myfirst[v9];
    if ( v20->_Ptr == this->_List._Mypair._Myval2._Myhead )
    {
      v20->_Ptr = _Pnode._Ptr;
      this->_Vec._Mypair._Myval2._Myfirst[v9 + 1] = _Pnode;
    }
    else if ( v20->_Ptr == Myhead )
    {
      v20->_Ptr = _Pnode._Ptr;
    }
    else
    {
      p_Next = &v20[1]._Ptr->_Next;
      v22 = *p_Next;
      v20[1]._Ptr = *p_Next;
      if ( v22 != _Pnode._Ptr )
        this->_Vec._Mypair._Myval2._Myfirst[v9 + 1]._Ptr = this->_Vec._Mypair._Myval2._Myfirst[v9 + 1]._Ptr->_Prev;
    }
    std::_Hash<std::_Umap_traits<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,std::_Uhash_compare<extension::gfxi_detail::FunctionTable::StringRef,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>>,0>>::_Check_size(this);
    result->first._Ptr = _Pnode._Ptr;
    result->second = 1;
    return result;
  }
  else
  {
    while ( 1 )
    {
      Myhead = Myhead->_Prev;
      if ( m_hash == Myhead->_Myval.first.m_hash )
      {
        m_str = _Val->first.m_str;
        do
        {
          v14 = (unsigned __int8)m_str[(unsigned __int64)(Myhead->_Myval.first.m_str - _Val->first.m_str)];
          v15 = *(unsigned __int8 *)m_str - (_DWORD)v14;
          if ( v15 )
            break;
          ++m_str;
        }
        while ( (_DWORD)v14 );
        if ( !v15 )
          break;
      }
      if ( Myhead == Ptr )
        goto LABEL_14;
    }
    _Pnode._Ptr->_Prev->_Next = _Pnode._Ptr->_Next;
    _Pnode._Ptr->_Next->_Prev = _Pnode._Ptr->_Prev;
    --this->_List._Mypair._Myval2._Mysize;
    v16 = (std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *)_Pnode._Ptr->_Myval.second._Mystorage._Ptrs[7];
    if ( v16 )
    {
      LOBYTE(v14) = v16 != (std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *)&_Pnode._Ptr->_Myval.second;
      ((void (__fastcall *)(std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *, __int64))v16->_Next->_Myval.second._Mystorage._Ptrs[0])(
        v16,
        v14);
      _Pnode._Ptr->_Myval.second._Mystorage._Ptrs[7] = 0i64;
    }
    operator delete(_Pnode._Ptr);
    result->first._Ptr = Myhead;
    result->second = 0;
    return result;
  }
}

std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::string > > > *__fastcall std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Insert_at<std::string,std::_Nil>(
        std::_Tree<std::_Tset_traits<std::string,std::less<std::string >,std::allocator<std::string >,0> > *this,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::string > > > *result,
        bool _Addleft,
        std::_Tree_node<std::string,void *> *_Wherenode,
        std::string *_Val)
{
  std::_Tree_node<std::string,void *> *v8; // rax
  std::_Tree_node<std::string,void *> *v9; // r9
  std::_Tree_node<std::string,void *> *Parent; // rcx
  std::_Tree_node<std::string,void *> *v11; // r8
  std::_Tree_node<std::string,void *> *Left; // rdx
  std::_Tree_node<std::string,void *> *Right; // rdx
  std::_Tree_node<std::string,void *> *v14; // rdx
  std::_Tree_node<std::string,void *> *v15; // rcx
  std::_Tree_node<std::string,void *> *v16; // rdx
  std::_Tree_node<std::string,void *> *v17; // r8
  std::_Tree_node<std::string,void *> *v18; // rcx
  std::_Tree_node<std::string,void *> *v19; // rcx
  std::_Tree_node<std::string,void *> *v20; // rdx
  std::_Tree_node<std::string,void *> *v21; // rcx
  std::_Tree_node<std::string,void *> *v22; // rcx
  std::_Tree_node<std::string,void *> *v23; // rcx
  std::_Tree_node<std::string,void *> *Myhead; // rax
  std::_Tree_node<std::string,void *> *v25; // rcx
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::string > > > *v26; // rax

  if ( extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Mysize >= 0x3FFFFFFFFFFFFFEi64 )
    std::_Xlength_error("map/set<T> too long");
  v8 = std::_Tree_comp_alloc<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Buynode<std::string>(
         this,
         _Val);
  ++extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Mysize;
  v9 = v8;
  v8->_Parent = _Wherenode;
  if ( _Wherenode == extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead )
  {
    extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Parent = v8;
    extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Left = v8;
    extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Right = v8;
  }
  else if ( _Addleft )
  {
    _Wherenode->_Left = v8;
    if ( _Wherenode == extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Left )
      extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Left = v8;
  }
  else
  {
    _Wherenode->_Right = v8;
    if ( _Wherenode == extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Right )
      extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Right = v8;
  }
  while ( !v8->_Parent->_Color )
  {
    Parent = v8->_Parent;
    v11 = Parent->_Parent;
    Left = v11->_Left;
    if ( Parent == v11->_Left )
    {
      Right = v11->_Right;
      if ( Right->_Color )
      {
        if ( v8 == Parent->_Right )
        {
          v14 = Parent->_Right;
          v8 = v8->_Parent;
          Parent->_Right = v14->_Left;
          if ( !v14->_Left->_Isnil )
            v14->_Left->_Parent = Parent;
          v14->_Parent = Parent->_Parent;
          if ( v8 == extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Parent )
          {
            extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Parent = v14;
          }
          else
          {
            v15 = v8->_Parent;
            if ( v8 == v15->_Left )
              v15->_Left = v14;
            else
              v15->_Right = v14;
          }
          v14->_Left = v8;
          v8->_Parent = v14;
        }
        v8->_Parent->_Color = 1;
        v8->_Parent->_Parent->_Color = 0;
        v16 = v8->_Parent->_Parent;
        v17 = v16->_Left;
        v16->_Left = v16->_Left->_Right;
        v18 = v17->_Right;
        if ( !v18->_Isnil )
          v18->_Parent = v16;
        v17->_Parent = v16->_Parent;
        if ( v16 == extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Parent )
        {
          extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Parent = v17;
          v17->_Right = v16;
        }
        else
        {
          v19 = v16->_Parent;
          if ( v16 == v19->_Right )
            v19->_Right = v17;
          else
            v19->_Left = v17;
          v17->_Right = v16;
        }
LABEL_49:
        v16->_Parent = v17;
        continue;
      }
      Parent->_Color = 1;
      Right->_Color = 1;
      v8->_Parent->_Parent->_Color = 0;
      v8 = v8->_Parent->_Parent;
    }
    else
    {
      if ( Left->_Color )
      {
        if ( v8 == Parent->_Left )
        {
          v20 = Parent->_Left;
          v8 = v8->_Parent;
          Parent->_Left = Parent->_Left->_Right;
          v21 = v20->_Right;
          if ( !v21->_Isnil )
            v21->_Parent = v8;
          v20->_Parent = v8->_Parent;
          if ( v8 == extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Parent )
          {
            extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Parent = v20;
          }
          else
          {
            v22 = v8->_Parent;
            if ( v8 == v22->_Right )
              v22->_Right = v20;
            else
              v22->_Left = v20;
          }
          v20->_Right = v8;
          v8->_Parent = v20;
        }
        v8->_Parent->_Color = 1;
        v8->_Parent->_Parent->_Color = 0;
        v16 = v8->_Parent->_Parent;
        v17 = v16->_Right;
        v16->_Right = v17->_Left;
        if ( !v17->_Left->_Isnil )
          v17->_Left->_Parent = v16;
        v17->_Parent = v16->_Parent;
        if ( v16 == extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Parent )
        {
          extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Parent = v17;
        }
        else
        {
          v23 = v16->_Parent;
          if ( v16 == v23->_Left )
            v23->_Left = v17;
          else
            v23->_Right = v17;
        }
        v17->_Left = v16;
        goto LABEL_49;
      }
      Parent->_Color = 1;
      Left->_Color = 1;
      v8->_Parent->_Parent->_Color = 0;
      v8 = v8->_Parent->_Parent;
    }
  }
  Myhead = extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead;
  result->_Ptr = v9;
  v25 = Myhead->_Parent;
  v26 = result;
  v25->_Color = 1;
  return v26;
}

std::pair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::string > > >,bool> *__fastcall std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Insert_nohint<std::string,std::_Nil>(
        std::_Tree<std::_Tset_traits<std::string,std::less<std::string >,std::allocator<std::string >,0> > *this,
        std::pair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::string > > >,bool> *result,
        bool _Leftish,
        std::string *_Val)
{
  std::_Tree_node<std::string,void *> *Myhead; // rax
  std::_Tree_node<std::string,void *> *Parent; // rbx
  std::_Tree_node<std::string,void *> *v8; // r14
  BOOL v9; // edi
  unsigned __int64 Mysize; // r15
  char **p_Myval; // rdx
  size_t v12; // rsi
  size_t v13; // r8
  unsigned int v14; // edi
  std::_Tree_node<std::string,void *> *Right; // rbx
  std::_Tree_node<std::string,void *> *j; // rax
  std::_Tree_node<std::string,void *> *i; // rax
  std::_Tree<std::_Tset_traits<std::string,std::less<std::string >,std::allocator<std::string >,0> > *v19; // rcx
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::string > > > resulta; // [rsp+70h] [rbp+8h] BYREF

  resulta._Ptr = (std::_Tree_node<std::string,void *> *)this;
  Myhead = extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead;
  Parent = extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Parent;
  v8 = extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead;
  LOBYTE(v9) = 1;
  if ( !Parent->_Isnil )
  {
    Mysize = _Val->_Mypair._Myval2._Mysize;
    do
    {
      v8 = Parent;
      p_Myval = (char **)&Parent->_Myval;
      if ( Parent->_Myval._Mypair._Myval2._Myres >= 0x10 )
        p_Myval = (char **)*p_Myval;
      if ( _Val->_Mypair._Myval2._Myres < 0x10 )
        this = (std::_Tree<std::_Tset_traits<std::string,std::less<std::string >,std::allocator<std::string >,0> > *)_Val;
      else
        this = (std::_Tree<std::_Tset_traits<std::string,std::less<std::string >,std::allocator<std::string >,0> > *)_Val->_Mypair._Myval2._Bx._Ptr;
      v12 = Parent->_Myval._Mypair._Myval2._Mysize;
      v13 = v12;
      if ( Mysize < v12 )
        v13 = Mysize;
      if ( !v13 || (v14 = memcmp(this, p_Myval, v13)) == 0 )
      {
        if ( Mysize >= v12 )
          v14 = Mysize > v12;
        else
          v14 = -1;
      }
      v9 = v14 >> 31;
      if ( v9 )
        Parent = Parent->_Left;
      else
        Parent = Parent->_Right;
    }
    while ( !Parent->_Isnil );
    Myhead = extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead;
  }
  Right = v8;
  if ( v9 )
  {
    if ( v8 == Myhead->_Left )
    {
      result->first = (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::string > > >)std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Insert_at<std::string,std::_Nil>(this, &resulta, 1, v8, _Val)->_Ptr;
      result->second = 1;
      return result;
    }
    if ( v8->_Isnil )
    {
      Right = v8->_Right;
    }
    else if ( v8->_Left->_Isnil )
    {
      for ( i = v8->_Parent; !i->_Isnil; i = i->_Parent )
      {
        if ( Right != i->_Left )
          break;
        Right = i;
      }
      if ( !Right->_Isnil )
        Right = i;
    }
    else
    {
      Right = v8->_Left;
      for ( j = v8->_Left->_Right; !j->_Isnil; j = j->_Right )
        Right = j;
    }
  }
  if ( std::string::compare(&Right->_Myval, _Val) >= 0 )
  {
    result->first._Ptr = Right;
    result->second = 0;
  }
  else
  {
    result->first = (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::string > > >)std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Insert_at<std::string,std::_Nil>(v19, &resulta, v9, v8, _Val)->_Ptr;
    result->second = 1;
  }
  return result;
}

void __fastcall std::_Uninit_alloc_fill_n1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>> *,unsigned __int64,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>>>(
        std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_First,
        unsigned __int64 _Count,
        const std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_Pval,
        std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *_Al)
{
  for ( ; _Count; --_Count )
  {
    if ( _First )
      _First->_Ptr = _Pval->_Ptr;
    ++_First;
  }
}

std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *__fastcall std::_Uninitialized_move_al_unchecked1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>>>>>(
        std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_First,
        std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_Last,
        std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_Dest,
        std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *_Al)
{
  __int64 v4; // r9
  unsigned __int64 v5; // r10
  signed __int64 v6; // rcx

  v4 = 0i64;
  v5 = (unsigned __int64)((char *)_Last - (char *)_First + 7) >> 3;
  if ( _First > _Last )
    v5 = 0i64;
  if ( v5 )
  {
    v6 = (char *)_First - (char *)_Dest;
    do
    {
      if ( _Dest )
        _Dest->_Ptr = *(std::_List_node<std::pair<extension::SoundHashKey const ,int>,void *> **)((char *)_Dest + v6);
      ++_Dest;
      ++v4;
    }
    while ( v4 != v5 );
  }
  return _Dest;
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall std::_Wrap_alloc<std::allocator<std::_Tree_node<std::string,void *>>>::_Wrap_alloc<std::allocator<std::_Tree_node<std::string,void *>>>(
        std::_Wrap_alloc<std::allocator<std::_Tree_node<std::string,void *> > > *this)
{
  ;
}

void __fastcall std::unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>>>::unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>>>(
        std::unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > > *this)
{
  this->_Traitsobj._Mypair._Myval2._Myval2 = 0.0;
  this->_List._Mypair._Myval2._Myhead = 0i64;
  this->_List._Mypair._Myval2._Mysize = 0i64;
  this->_List._Mypair._Myval2._Myhead = (std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *)std::_List_alloc<std::_List_base_types<extension::SoundManager::SERequest>>::_Buynode0((std::_List_alloc<std::_List_base_types<extension::SoundManager::SERequest> > *)this, 0i64, 0i64);
  this->_Vec._Mypair._Myval2._Myfirst = 0i64;
  this->_Vec._Mypair._Myval2._Mylast = 0i64;
  this->_Vec._Mypair._Myval2._Myend = 0i64;
  this->_Traitsobj._Mypair._Myval2._Myval2 = 1.0;
  std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>>>,0>>::_Init(
    (std::_Hash<std::_Umap_traits<extension::SoundHashKey,int,std::_Uhash_compare<extension::SoundHashKey,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey> >,std::allocator<std::pair<extension::SoundHashKey const ,int> >,0> > *)this,
    8ui64);
}

void __fastcall extension::gfxi_detail::FunctionTable::FunctionTable(extension::gfxi_detail::FunctionTable *this)
{
  float v2; // xmm0_4
  unsigned __int64 v3; // rax

  this->m_refCount.m_value._My_val = 1i64;
  std::unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>>>::unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>>>(&this->m_map);
  v2 = (float)((float)64 / this->m_map._Traitsobj._Mypair._Myval2._Myval2) + 0.5;
  v3 = 0i64;
  if ( v2 >= 9.223372e18 )
  {
    v2 = v2 - 9.223372e18;
    if ( v2 < 9.223372e18 )
      v3 = 0x8000000000000000ui64;
  }
  std::_Hash<std::_Umap_traits<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,std::_Uhash_compare<extension::gfxi_detail::FunctionTable::StringRef,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>>,0>>::rehash(
    &this->m_map,
    v3 + (unsigned int)(int)v2);
}

void __fastcall extension::gfxi_detail::GameInterfaceImpl::GameInterfaceImpl(
        extension::gfxi_detail::GameInterfaceImpl *this)
{
  extension::gfxi_detail::FunctionTable *v2; // rax
  extension::gfxi_detail::GameInterfaceImpl::Exi *v3; // rax
  extension::gfxi_detail::GameInterfaceImpl::Exi *v4; // rbx
  extension::gfxi_detail::FunctionTable *m_ptr; // rcx
  Scaleform::RefCountVImpl *pObject; // rcx
  __int64 v7; // rax
  extension::gfxi_detail::GameInterfaceImpl::Fsc *v8; // rbx
  extension::gfxi_detail::FunctionTable *v9; // rax
  Scaleform::RefCountVImpl *v10; // rcx
  extension::gfxi_detail::FunctionTable *v11; // [rsp+58h] [rbp+10h]

  this->m_refCount.m_value._My_val = 1i64;
  v11 = (extension::gfxi_detail::FunctionTable *)operator new(0x48ui64);
  extension::gfxi_detail::FunctionTable::FunctionTable(v11);
  this->m_functionTable.m_ptr = v2;
  this->m_exi.pObject = 0i64;
  this->m_fsc.pObject = 0i64;
  v3 = (extension::gfxi_detail::GameInterfaceImpl::Exi *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                           Scaleform::Memory::pGlobalHeap,
                                                           32i64,
                                                           0i64);
  v4 = v3;
  if ( v3 )
  {
    v3->__vftable = (extension::gfxi_detail::GameInterfaceImpl::Exi_vtbl *)&Scaleform::RefCountImplCore::`vftable';
    v3->RefCount = 1;
    v3->SType = State_ProjectionMatrix3D;
    v3->__vftable = (extension::gfxi_detail::GameInterfaceImpl::Exi_vtbl *)&extension::gfxi_detail::GameInterfaceImpl::Exi::`vftable';
    m_ptr = this->m_functionTable.m_ptr;
    v3->m_table.m_ptr = m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 1ui64);
  }
  else
  {
    v4 = 0i64;
  }
  pObject = (Scaleform::RefCountVImpl *)this->m_exi.pObject;
  if ( v4 != (extension::gfxi_detail::GameInterfaceImpl::Exi *)pObject )
  {
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    this->m_exi.pObject = v4;
  }
  v7 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
         Scaleform::Memory::pGlobalHeap,
         32i64);
  v8 = (extension::gfxi_detail::GameInterfaceImpl::Fsc *)v7;
  if ( v7 )
  {
    *(_QWORD *)v7 = &Scaleform::RefCountImplCore::`vftable';
    *(_DWORD *)(v7 + 8) = 1;
    *(_DWORD *)(v7 + 16) = 5;
    *(_QWORD *)v7 = &extension::gfxi_detail::GameInterfaceImpl::Fsc::`vftable';
    v9 = this->m_functionTable.m_ptr;
    v8->m_table.m_ptr = v9;
    if ( v9 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)v9, 1ui64);
  }
  else
  {
    v8 = 0i64;
  }
  v10 = (Scaleform::RefCountVImpl *)this->m_fsc.pObject;
  if ( v8 != (extension::gfxi_detail::GameInterfaceImpl::Fsc *)v10 )
  {
    if ( v10 )
      Scaleform::RefCountImpl::Release(v10);
    this->m_fsc.pObject = v8;
  }
}

void __fastcall Scaleform::Ptr<Scaleform::GFx::ExternalInterface>::~Ptr<Scaleform::GFx::ExternalInterface>(
        Scaleform::Ptr<Scaleform::Render::ThreadCommand> *this)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  pObject = (Scaleform::RefCountVImpl *)this->pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
}

void __fastcall Scaleform::Ptr<Scaleform::GFx::Movie>::~Ptr<Scaleform::GFx::Movie>(
        Scaleform::Ptr<Scaleform::GFx::Movie> *this)
{
  Scaleform::GFx::Movie *pObject; // rcx

  pObject = this->pObject;
  if ( pObject )
    Scaleform::GFx::Movie::Release(pObject);
}

void __fastcall extension::RefCountablePtr<extension::gfxi_detail::FunctionTable>::~RefCountablePtr<extension::gfxi_detail::FunctionTable>(
        extension::RefCountablePtr<extension::gfxi_detail::FunctionTable> *this)
{
  extension::gfxi_detail::FunctionTable *m_ptr; // rcx

  m_ptr = this->m_ptr;
  if ( m_ptr )
    extension::RefCountable<extension::gfxi_detail::FunctionTable>::release(m_ptr);
}

void __fastcall std::list<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>>::~list<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>>(
        std::list<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >> *this)
{
  std::list<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>>::clear(this);
  operator delete(this->_Mypair._Myval2._Myhead);
}

void __fastcall std::unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>>>::~unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>>>(
        std::unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > > *this)
{
  AgLogger **Myfirst; // rdx

  Myfirst = (AgLogger **)this->_Vec._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      (std::allocator<AgLogger *> *)this,
      Myfirst,
      ((char *)this->_Vec._Mypair._Myval2._Myend - (char *)Myfirst) >> 3);
    this->_Vec._Mypair._Myval2._Myfirst = 0i64;
    this->_Vec._Mypair._Myval2._Mylast = 0i64;
    this->_Vec._Mypair._Myval2._Myend = 0i64;
  }
  std::list<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>>::clear(&this->_List);
  operator delete(this->_List._Mypair._Myval2._Myhead);
}

void __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>>>>>::~vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>>>>>(
        std::vector<unsigned char *> *this)
{
  if ( this->_Mypair._Myval2._Myfirst )
  {
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      (std::allocator<AgLogger *> *)this,
      (AgLogger **)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

// attributes: thunk
void __fastcall extension::GFXIGameInterface::~GFXIGameInterface(extension::GFXIGameInterface *this)
{
  extension::RefCountablePtr<extension::gfxi_detail::GameInterfaceImpl>::release(&this->m_impl);
}

void __fastcall extension::GFXIMovieContext::~GFXIMovieContext(extension::GFXIMovieContext *this)
{
  Scaleform::GFx::Movie *pObject; // rcx

  pObject = this->m_movie.pObject;
  if ( pObject )
    Scaleform::GFx::Movie::Release(pObject);
}

std::function<void __cdecl(void)> *__fastcall std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>::operator=(
        std::function<void __cdecl(void)> *this,
        std::function<void __cdecl(void)> *_Func)
{
  std::_Func_base<void> *v3; // rcx
  _BOOL8 v4; // rdx
  std::_Func_class<void> v6; // [rsp+30h] [rbp-58h] BYREF

  v6._Mystorage._Ptrs[7] = 0i64;
  v3 = _Func->_Mystorage._Ptrs[7];
  if ( v3 )
    v6._Mystorage._Ptrs[7] = (std::_Func_base<void> *)v3->_Copy(v3, &v6);
  std::_Func_class<CommandData::Setting const *,BattleSystem::CpuSequence &,int>::_Swap(&v6, this);
  if ( v6._Mystorage._Ptrs[7] )
  {
    LOBYTE(v4) = v6._Mystorage._Ptrs[7] != (std::_Func_base<void> *)&v6;
    v6._Mystorage._Ptrs[7]->_Delete_this(v6._Mystorage._Ptrs[7], v4);
  }
  return this;
}

Scaleform::GFx::Value *__fastcall std::_Func_class<Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>::operator()(
        std::_Func_class<Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int> *this,
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *<_Args_0>,
        const Scaleform::GFx::Value *<_Args_1>,
        unsigned int <_Args_2>)
{
  std::_Func_base<Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int> *v5; // rcx
  const Scaleform::GFx::Value *v8; // [rsp+68h] [rbp+20h] BYREF

  v8 = <_Args_1>;
  v5 = this->_Mystorage._Ptrs[7];
  if ( !v5 )
    std::_Xbad_function_call();
  v5->_Do_call(v5, result, <_Args_0>, &v8, &<_Args_2>);
  return result;
}

void __fastcall extension::gfxi_detail::GameInterfaceImpl::Exi::Callback(
        extension::gfxi_detail::GameInterfaceImpl::Exi *this,
        Scaleform::GFx::Movie *movie,
        const char *methodName,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Movie *v9; // rcx
  const Scaleform::GFx::Value *v10; // rax
  Scaleform::GFx::Value result; // [rsp+40h] [rbp-48h] BYREF
  extension::GFXIMovieContext ctx; // [rsp+98h] [rbp+10h] BYREF

  if ( movie )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)movie);
  v9 = movie;
  if ( movie )
  {
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)movie);
    v9 = movie;
  }
  ctx.m_movie.pObject = v9;
  if ( v9 )
    Scaleform::GFx::Movie::Release(v9);
  v10 = extension::gfxi_detail::FunctionTable::call(
          (extension::gfxi_detail::FunctionTable *)this->m_table.m_ptr,
          &result,
          methodName,
          &ctx,
          argv,
          argc);
  Scaleform::GFx::Movie::SetExternalInterfaceRetVal(movie, v10);
  if ( (result.Type & 0x40) != 0 )
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      result.pObjectInterface,
      &result,
      result.mValue.pStringManaged);
  if ( ctx.m_movie.pObject )
    Scaleform::GFx::Movie::Release(ctx.m_movie.pObject);
}

void __fastcall extension::gfxi_detail::GameInterfaceImpl::Fsc::Callback(
        extension::gfxi_detail::GameInterfaceImpl::Fsc *this,
        Scaleform::GFx::Movie *movie,
        const char *commandName,
        const char *arg)
{
  Scaleform::RefCountVImpl *v6; // rbx
  Scaleform::GFx::Value val; // [rsp+38h] [rbp-31h] BYREF
  Scaleform::GFx::Value result; // [rsp+68h] [rbp-1h] BYREF
  Scaleform::RefCountVImpl *v10; // [rsp+D0h] [rbp+67h] BYREF
  extension::GFXIMovieContext ctx; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 *v12; // [rsp+E8h] [rbp+7Fh]

  v6 = (Scaleform::RefCountVImpl *)movie;
  if ( movie )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)movie);
  v10 = v6;
  v12 = (__int64 *)&v10;
  if ( v6 )
  {
    Scaleform::Render::RenderBuffer::AddRef(v6);
    v6 = v10;
  }
  ctx.m_movie.pObject = (Scaleform::GFx::Movie *)v6;
  if ( v6 )
    Scaleform::GFx::Movie::Release((Scaleform::GFx::Movie *)v6);
  val.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  val.pObjectInterface = 0i64;
  val.Type = 6;
  val.mValue.pString = arg;
  extension::gfxi_detail::FunctionTable::call(
    (extension::gfxi_detail::FunctionTable *)this->m_table.m_ptr,
    &result,
    commandName,
    &ctx,
    &val,
    0);
  if ( (result.Type & 0x40) != 0 )
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      result.pObjectInterface,
      &result,
      result.mValue.pStringManaged);
  if ( (val.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
    val.pObjectInterface = 0i64;
  }
  val.Type = VT_None;
  if ( ctx.m_movie.pObject )
    Scaleform::GFx::Movie::Release(ctx.m_movie.pObject);
}

extension::GFXIGameInterface::GlobalInterface::__l2::GlobalInterfaceImpl *__fastcall extension::GFXIGameInterface::GlobalInterface()
{
  extension::gfxi_detail::GameInterfaceImpl *v0; // rax
  extension::GFXILoader *v1; // rax
  extension::GFXIGameInterface *v2; // rcx
  extension::gfxi_detail::GameInterfaceImpl *v4; // [rsp+40h] [rbp+8h]

  if ( dword_140ACDF40 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
  {
    Init_thread_header(&dword_140ACDF40);
    if ( dword_140ACDF40 == -1 )
    {
      v4 = (extension::gfxi_detail::GameInterfaceImpl *)operator new(0x20ui64);
      extension::gfxi_detail::GameInterfaceImpl::GameInterfaceImpl(v4);
      the_instance_4.m_impl.m_ptr = v0;
      if ( extension::GFXILoader::Instance()->m_loader._Mypair._Myval2 )
      {
        v1 = extension::GFXILoader::Instance();
        extension::GFXIGameInterface::setState(v2, v1->m_loader._Mypair._Myval2);
      }
      atexit((void (__fastcall *)())extension::GFXIGameInterface::GlobalInterface_::_2_::_dynamic_atexit_destructor_for__the_instance__);
      Init_thread_footer(&dword_140ACDF40);
    }
  }
  return &the_instance_4;
}

void Scaleform::Log::LogWarning(Scaleform::Log *this, const char *fmt, ...)
{
  Scaleform::Log_vtbl *v2; // rax
  int v3[6]; // [rsp+20h] [rbp-18h] BYREF
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, fmt);
  v2 = this->__vftable;
  v3[0] = 135168;
  ((void (__fastcall *)(Scaleform::Log *, int *, const char *, __int64 *))v2->LogMessageVarg)(
    this,
    v3,
    fmt,
    (__int64 *)va);
}

std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *__fastcall std::_Tree_comp_alloc<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Buyheadnode(
        std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char> > >,0> > *this)
{
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *result; // rax

  result = (std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *)operator new(0x40ui64);
  if ( result )
    result->_Left = result;
  if ( result != (std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *)-8i64 )
    result->_Parent = result;
  if ( result != (std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *)-16i64 )
    result->_Right = result;
  *(_WORD *)&result->_Color = 257;
  return result;
}

std::_List_node<extension::SoundManager::SERequest,void *> *__fastcall std::_List_alloc<std::_List_base_types<extension::SoundManager::SERequest>>::_Buynode0(
        std::_List_alloc<std::_List_base_types<extension::SoundManager::SERequest> > *this,
        std::_List_node<extension::SoundManager::SERequest,void *> *_Next,
        std::_List_node<extension::SoundManager::SERequest,void *> *_Prev)
{
  std::_List_node<extension::SoundManager::SERequest,void *> *result; // rax

  result = (std::_List_node<extension::SoundManager::SERequest,void *> *)operator new(0x60ui64);
  if ( !_Next )
  {
    _Next = result;
    _Prev = result;
  }
  if ( result )
    result->_Next = _Next;
  if ( result != (std::_List_node<extension::SoundManager::SERequest,void *> *)-8i64 )
    result->_Prev = _Prev;
  return result;
}

std::_Tree_node<std::string,void *> *__fastcall std::_Tree_comp_alloc<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Buynode0(
        std::_Tree_comp_alloc<std::_Tset_traits<std::string,std::less<std::string >,std::allocator<std::string >,0> > *this)
{
  std::_Tree_node<std::string,void *> *result; // rax

  result = (std::_Tree_node<std::string,void *> *)operator new(0x40ui64);
  if ( result )
    result->_Left = extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead;
  if ( result != (std::_Tree_node<std::string,void *> *)-8i64 )
    result->_Parent = extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead;
  if ( result != (std::_Tree_node<std::string,void *> *)-16i64 )
    result->_Right = extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead;
  return result;
}

void __fastcall std::_Hash<std::_Umap_traits<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,std::_Uhash_compare<extension::gfxi_detail::FunctionTable::StringRef,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>>,0>>::_Check_size(
        std::_Hash<std::_Umap_traits<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,std::_Uhash_compare<extension::gfxi_detail::FunctionTable::StringRef,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef> >,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > >,0> > *this)
{
  signed __int64 Mysize; // rax
  __int64 Maxidx; // rdx
  float v4; // xmm0_4
  float v5; // xmm1_4

  Mysize = this->_List._Mypair._Myval2._Mysize;
  Maxidx = this->_Maxidx;
  v4 = (float)(int)Mysize;
  if ( Mysize < 0 )
    v4 = v4 + 1.8446744e19;
  v5 = (float)(int)Maxidx;
  if ( Maxidx < 0 )
    v5 = v5 + 1.8446744e19;
  if ( (float)(v4 / v5) > this->_Traitsobj._Mypair._Myval2._Myval2 )
  {
    if ( (unsigned __int64)Maxidx >= 0x200 )
    {
      if ( (unsigned __int64)Maxidx < 0xFFFFFFFFFFFFFFFi64 )
        Maxidx *= 2i64;
      std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>>>,0>>::_Init(
        (std::_Hash<std::_Umap_traits<extension::SoundHashKey,int,std::_Uhash_compare<extension::SoundHashKey,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey> >,std::allocator<std::pair<extension::SoundHashKey const ,int> >,0> > *)this,
        Maxidx);
      std::_Hash<std::_Umap_traits<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,std::_Uhash_compare<extension::gfxi_detail::FunctionTable::StringRef,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>>,0>>::_Reinsert(this);
    }
    else
    {
      std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>>>,0>>::_Init(
        (std::_Hash<std::_Umap_traits<extension::SoundHashKey,int,std::_Uhash_compare<extension::SoundHashKey,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey> >,std::allocator<std::pair<extension::SoundHashKey const ,int> >,0> > *)this,
        8 * Maxidx);
      std::_Hash<std::_Umap_traits<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,std::_Uhash_compare<extension::gfxi_detail::FunctionTable::StringRef,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>>,0>>::_Reinsert(this);
    }
  }
}

void __fastcall std::_Hash<std::_Umap_traits<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,std::_Uhash_compare<extension::gfxi_detail::FunctionTable::StringRef,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>>,0>>::_Destroy_if_not_nil(
        std::_Hash<std::_Umap_traits<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,std::_Uhash_compare<extension::gfxi_detail::FunctionTable::StringRef,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef> >,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > >,0> > *this,
        std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > > > _Plist)
{
  std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *Next; // rdx
  std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *v4; // rcx

  _Plist._Ptr->_Prev->_Next = _Plist._Ptr->_Next;
  Next = _Plist._Ptr->_Next;
  Next->_Prev = _Plist._Ptr->_Prev;
  --this->_List._Mypair._Myval2._Mysize;
  v4 = (std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *)_Plist._Ptr->_Myval.second._Mystorage._Ptrs[7];
  if ( v4 )
  {
    LOBYTE(Next) = v4 != (std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *)&_Plist._Ptr->_Myval.second;
    ((void (__fastcall *)(std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *, std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *))v4->_Next->_Myval.second._Mystorage._Ptrs[0])(
      v4,
      Next);
    _Plist._Ptr->_Myval.second._Mystorage._Ptrs[7] = 0i64;
  }
  operator delete(_Plist._Ptr);
}

void __fastcall std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Erase(
        std::_Tree<std::_Tset_traits<std::string,std::less<std::string >,std::allocator<std::string >,0> > *this,
        std::_Tree_node<std::string,void *> *_Rootnode)
{
  std::_Tree_node<std::string,void *> *v2; // rsi
  std::_Tree_node<std::string,void *> *i; // rdi
  unsigned __int64 Myres; // rax
  void **p_Myval; // rbx
  char *v7; // rcx
  char *v8; // rax
  unsigned __int64 v9; // rcx
  bool v10; // cf

  v2 = _Rootnode;
  for ( i = _Rootnode; !i->_Isnil; v2 = i )
  {
    std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Erase(
      this,
      i->_Right);
    Myres = v2->_Myval._Mypair._Myval2._Myres;
    p_Myval = (void **)&v2->_Myval;
    i = i->_Left;
    if ( Myres >= 0x10 )
    {
      v7 = (char *)*p_Myval;
      if ( Myres + 1 >= 0x1000 )
      {
        if ( ((unsigned __int8)v7 & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v8 = (char *)*((_QWORD *)v7 - 1);
        if ( v8 >= v7 )
          invalid_parameter_noinfo_noreturn();
        v9 = v7 - v8;
        if ( v9 < 8 )
          invalid_parameter_noinfo_noreturn();
        if ( v9 > 0x27 )
          invalid_parameter_noinfo_noreturn();
        v7 = v8;
      }
      operator delete(v7);
    }
    v2->_Myval._Mypair._Myval2._Myres = 15i64;
    v10 = v2->_Myval._Mypair._Myval2._Myres < 0x10;
    v2->_Myval._Mypair._Myval2._Mysize = 0i64;
    if ( !v10 )
      p_Myval = (void **)*p_Myval;
    *(_BYTE *)p_Myval = 0;
    operator delete(v2);
  }
}

void __fastcall std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>>>,0>>::_Init(
        std::_Hash<std::_Umap_traits<extension::SoundHashKey,int,std::_Uhash_compare<extension::SoundHashKey,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey> >,std::allocator<std::pair<extension::SoundHashKey const ,int> >,0> > *this,
        unsigned __int64 _Buckets)
{
  unsigned __int64 v2; // rdi
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > _Val; // [rsp+50h] [rbp+8h] BYREF
  std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > result; // [rsp+58h] [rbp+10h] BYREF

  v2 = 2 * _Buckets;
  if ( this->_Vec._Mypair._Myval2._Myend - this->_Vec._Mypair._Myval2._Myfirst < 2 * _Buckets )
  {
    if ( v2 > 0x1FFFFFFFFFFFFFFFi64 )
      std::_Xlength_error("vector<T> too long");
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>>>::_Reallocate(
      &this->_Vec,
      v2);
  }
  _Val._Ptr = this->_List._Mypair._Myval2._Myhead;
  this->_Vec._Mypair._Myval2._Mylast = this->_Vec._Mypair._Myval2._Myfirst;
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,CommandCheck::CommandSettingMapData>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,CommandCheck::CommandSettingMapData>>>>>>>::_Insert_n(
    &this->_Vec,
    &result,
    (std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > >)this->_Vec._Mypair._Myval2._Myfirst,
    v2,
    &_Val);
  this->_Mask = _Buckets - 1;
  this->_Maxidx = _Buckets;
}

std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *__fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,CommandCheck::CommandSettingMapData>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,CommandCheck::CommandSettingMapData>>>>>>>::_Insert_n(
        std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > >,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *this,
        std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *result,
        std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > _Where,
        unsigned __int64 _Count,
        const std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_Val)
{
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *Myfirst; // r8
  signed __int64 v10; // r12
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *Mylast; // r14
  __int64 v12; // r14
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rdx
  std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *v15; // rcx
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *v16; // rbx
  signed __int64 v17; // r14
  std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *v18; // r9
  std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *v19; // r9
  std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *v20; // r9
  std::allocator<AgLogger *> *v21; // rcx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rbx
  std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *v24; // r9
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // r8
  std::_List_node<std::pair<extension::SoundHashKey const ,int>,void *> *v28; // rax
  std::_List_node<std::pair<extension::SoundHashKey const ,int>,void *> *Ptr; // rbx
  unsigned __int64 v30; // r15
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *i; // rdx
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > _Pval; // [rsp+80h] [rbp+8h] BYREF
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_Last; // [rsp+90h] [rbp+18h]
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *v35; // [rsp+98h] [rbp+20h]

  _Last = _Where._Ptr;
  Myfirst = this->_Mypair._Myval2._Myfirst;
  v10 = _Where._Ptr - this->_Mypair._Myval2._Myfirst;
  if ( _Count )
  {
    Mylast = this->_Mypair._Myval2._Mylast;
    if ( this->_Mypair._Myval2._Myend - Mylast >= _Count )
    {
      if ( Mylast - _Where._Ptr >= _Count )
      {
        Ptr = _Val->_Ptr;
        v30 = _Count;
        this->_Mypair._Myval2._Mylast = std::_Uninitialized_move_al_unchecked1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>>>>>(
                                          &Mylast[-_Count],
                                          Mylast,
                                          Mylast,
                                          (std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *)_Count);
        memmove(&_Last[_Count], _Last, (size_t)Mylast - 8 * _Count - (_QWORD)_Last);
        for ( i = _Last; i != &_Last[v30]; ++i )
          i->_Ptr = Ptr;
      }
      else
      {
        _Pval._Ptr = _Val->_Ptr;
        v23 = 8 * _Count;
        std::_Uninitialized_move_al_unchecked1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>>>>>(
          _Where._Ptr,
          Mylast,
          &_Where._Ptr[_Count],
          (std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *)_Count);
        std::_Uninit_alloc_fill_n1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>> *,unsigned __int64,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>>>(
          this->_Mypair._Myval2._Mylast,
          _Count - (this->_Mypair._Myval2._Mylast - _Last),
          &_Pval,
          v24);
        this->_Mypair._Myval2._Mylast = (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *)((char *)this->_Mypair._Myval2._Mylast + v23);
        v25 = _Last;
        v26 = 0i64;
        v27 = (unsigned __int64)((char *)&this->_Mypair._Myval2._Mylast[v23 / 0xFFFFFFFFFFFFFFF8ui64] - (char *)_Last + 7) >> 3;
        if ( _Last > &this->_Mypair._Myval2._Mylast[v23 / 0xFFFFFFFFFFFFFFF8ui64] )
          v27 = 0i64;
        if ( v27 )
        {
          v28 = _Pval._Ptr;
          do
          {
            v25->_Ptr = v28;
            ++v25;
            ++v26;
          }
          while ( v26 != v27 );
        }
      }
    }
    else
    {
      v12 = Mylast - Myfirst;
      if ( 0x1FFFFFFFFFFFFFFFi64 - v12 < _Count )
        std::_Xlength_error("vector<T> too long");
      v13 = v12 + _Count;
      v14 = this->_Mypair._Myval2._Myend - Myfirst;
      v15 = 0i64;
      if ( 0x1FFFFFFFFFFFFFFFi64 - (v14 >> 1) >= v14 )
        v15 = (std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *)(v14 + (v14 >> 1));
      if ( (unsigned __int64)v15 >= v13 )
        v13 = (unsigned __int64)v15;
      _Pval._Ptr = (std::_List_node<std::pair<extension::SoundHashKey const ,int>,void *> *)v13;
      v16 = std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>>>>>>>>::allocate(
              v15,
              v13);
      v35 = v16;
      v17 = _Last - this->_Mypair._Myval2._Myfirst;
      std::_Uninit_alloc_fill_n1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>> *,unsigned __int64,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>>>(
        &v16[v17],
        _Count,
        _Val,
        v18);
      std::_Uninitialized_move_al_unchecked1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>>>>>(
        this->_Mypair._Myval2._Myfirst,
        _Last,
        v16,
        v19);
      std::_Uninitialized_move_al_unchecked1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>>>>>(
        _Last,
        this->_Mypair._Myval2._Mylast,
        &v16[v17 + _Count],
        v20);
      v22 = this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst + _Count;
      if ( this->_Mypair._Myval2._Myfirst )
        std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
          v21,
          (AgLogger **)this->_Mypair._Myval2._Myfirst,
          this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
      this->_Mypair._Myval2._Myend = &v16[v13];
      this->_Mypair._Myval2._Mylast = &v16[v22];
      this->_Mypair._Myval2._Myfirst = v16;
    }
  }
  result->_Ptr = &this->_Mypair._Myval2._Myfirst[v10];
  return result;
}

void __fastcall std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Lrotate(
        std::_Tree<std::_Tset_traits<std::string,std::less<std::string >,std::allocator<std::string >,0> > *this,
        std::_Tree_node<std::string,void *> *_Wherenode)
{
  std::_Tree_node<std::string,void *> *Right; // rcx
  std::_Tree_node<std::string,void *> *Parent; // rax

  Right = _Wherenode->_Right;
  _Wherenode->_Right = Right->_Left;
  if ( !Right->_Left->_Isnil )
    Right->_Left->_Parent = _Wherenode;
  Right->_Parent = _Wherenode->_Parent;
  if ( _Wherenode == extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Parent )
  {
    extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Parent = Right;
    Right->_Left = _Wherenode;
    _Wherenode->_Parent = Right;
  }
  else
  {
    Parent = _Wherenode->_Parent;
    if ( _Wherenode == Parent->_Left )
      Parent->_Left = Right;
    else
      Parent->_Right = Right;
    Right->_Left = _Wherenode;
    _Wherenode->_Parent = Right;
  }
}

void __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>>>::_Reallocate(
        std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > >,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *this,
        unsigned __int64 _Count)
{
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *v4; // rdi
  std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *v5; // r9
  std::allocator<AgLogger *> *v6; // rcx
  signed __int64 v7; // rsi

  v4 = std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>>>>>>>>::allocate(
         (std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *)this,
         _Count);
  std::_Uninitialized_move_al_unchecked1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>>>>>(
    this->_Mypair._Myval2._Myfirst,
    this->_Mypair._Myval2._Mylast,
    v4,
    v5);
  v7 = this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      v6,
      (AgLogger **)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  this->_Mypair._Myval2._Myend = &v4[_Count];
  this->_Mypair._Myval2._Mylast = &v4[v7];
  this->_Mypair._Myval2._Myfirst = v4;
}

void __fastcall std::_Hash<std::_Umap_traits<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,std::_Uhash_compare<extension::gfxi_detail::FunctionTable::StringRef,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>>,0>>::_Reinsert(
        std::_Hash<std::_Umap_traits<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,std::_Uhash_compare<extension::gfxi_detail::FunctionTable::StringRef,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef> >,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > >,0> > *this)
{
  std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *Myhead; // rax
  std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *Prev; // rdi
  std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *Next; // rbx
  std::pair<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > > >,bool> result; // [rsp+20h] [rbp-18h] BYREF

  Myhead = this->_List._Mypair._Myval2._Myhead;
  if ( Myhead->_Next != Myhead )
  {
    Prev = Myhead->_Prev;
    do
    {
      Next = this->_List._Mypair._Myval2._Myhead->_Next;
      std::_Hash<std::_Umap_traits<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,std::_Uhash_compare<extension::gfxi_detail::FunctionTable::StringRef,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>>,0>>::_Insert<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>>>>>(
        this,
        &result,
        &Next->_Myval,
        (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > > >)Next);
    }
    while ( Next != Prev );
  }
}

void __fastcall std::_Func_class<CommandData::Setting const *,BattleSystem::CpuSequence &,int>::_Reset_move(
        std::_Func_class<void> *this,
        std::_Func_class<void> *_Right)
{
  std::_Func_base<void> *v4; // rcx
  __int64 v5; // rdx
  std::_Func_class<void> *v6; // rcx

  v4 = _Right->_Mystorage._Ptrs[7];
  if ( v4 )
  {
    if ( v4 == (std::_Func_base<void> *)_Right )
    {
      this->_Mystorage._Ptrs[7] = v4->_Move(v4, this);
      v6 = (std::_Func_class<void> *)_Right->_Mystorage._Ptrs[7];
      if ( v6 )
      {
        LOBYTE(v5) = v6 != _Right;
        ((void (__fastcall *)(std::_Func_class<void> *, __int64))v6->_Mystorage._Ptrs[0][4].__vftable)(v6, v5);
        _Right->_Mystorage._Ptrs[7] = 0i64;
      }
    }
    else
    {
      this->_Mystorage._Ptrs[7] = v4;
      _Right->_Mystorage._Ptrs[7] = 0i64;
    }
  }
}

void __fastcall std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Rrotate(
        std::_Tree<std::_Tset_traits<std::string,std::less<std::string >,std::allocator<std::string >,0> > *this,
        std::_Tree_node<std::string,void *> *_Wherenode)
{
  std::_Tree_node<std::string,void *> *Left; // rcx
  std::_Tree_node<std::string,void *> *Right; // rax
  std::_Tree_node<std::string,void *> *Parent; // rax

  Left = _Wherenode->_Left;
  _Wherenode->_Left = _Wherenode->_Left->_Right;
  Right = Left->_Right;
  if ( !Right->_Isnil )
    Right->_Parent = _Wherenode;
  Left->_Parent = _Wherenode->_Parent;
  if ( _Wherenode == extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Parent )
  {
    extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Parent = Left;
    Left->_Right = _Wherenode;
    _Wherenode->_Parent = Left;
  }
  else
  {
    Parent = _Wherenode->_Parent;
    if ( _Wherenode == Parent->_Right )
      Parent->_Right = Left;
    else
      Parent->_Left = Left;
    Left->_Right = _Wherenode;
    _Wherenode->_Parent = Left;
  }
}

void __fastcall std::_Func_class<CommandData::Setting const *,BattleSystem::CpuSequence &,int>::_Swap(
        std::_Func_class<void> *this,
        std::_Func_class<void> *_Right)
{
  std::_Func_base<void> *v4; // rcx
  std::_Func_base<void> *v5; // rax
  __int64 v6; // rdx
  std::_Func_class<void> *v7; // rcx
  std::_Func_class<void> *p_Righta; // rdx
  std::_Func_class<void> _Righta; // [rsp+30h] [rbp-58h] BYREF

  v4 = this->_Mystorage._Ptrs[7];
  if ( v4 == (std::_Func_base<void> *)this || (v5 = _Right->_Mystorage._Ptrs[7], v5 == (std::_Func_base<void> *)_Right) )
  {
    _Righta._Mystorage._Ptrs[7] = 0i64;
    if ( v4 )
    {
      if ( v4 == (std::_Func_base<void> *)this )
      {
        _Righta._Mystorage._Ptrs[7] = v4->_Move(v4, &_Righta);
        v7 = (std::_Func_class<void> *)this->_Mystorage._Ptrs[7];
        if ( v7 )
        {
          LOBYTE(v6) = v7 != this;
          ((void (__fastcall *)(std::_Func_class<void> *, __int64))v7->_Mystorage._Ptrs[0][4].__vftable)(v7, v6);
          this->_Mystorage._Ptrs[7] = 0i64;
        }
      }
      else
      {
        _Righta._Mystorage._Ptrs[7] = v4;
        this->_Mystorage._Ptrs[7] = 0i64;
      }
    }
    std::_Func_class<CommandData::Setting const *,BattleSystem::CpuSequence &,int>::_Reset_move(this, _Right);
    std::_Func_class<CommandData::Setting const *,BattleSystem::CpuSequence &,int>::_Reset_move(_Right, &_Righta);
    if ( _Righta._Mystorage._Ptrs[7] )
    {
      p_Righta = &_Righta;
      LOBYTE(p_Righta) = _Righta._Mystorage._Ptrs[7] != (std::_Func_base<void> *)&_Righta;
      _Righta._Mystorage._Ptrs[7]->_Delete_this(_Righta._Mystorage._Ptrs[7], (bool)p_Righta);
    }
  }
  else
  {
    this->_Mystorage._Ptrs[7] = v5;
    _Right->_Mystorage._Ptrs[7] = v4;
  }
}

std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *__fastcall std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>>>>>>>>::allocate(
        std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *this,
        unsigned __int64 _Count)
{
  unsigned __int64 v3; // rcx
  void *v4; // rax

  if ( !_Count )
    return 0i64;
  if ( _Count > 0x1FFFFFFFFFFFFFFFi64 )
    std::_Xbad_alloc();
  v3 = 8 * _Count;
  if ( 8 * _Count < 0x1000 )
    return (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *)operator new(v3);
  if ( v3 + 39 <= v3 )
    std::_Xbad_alloc();
  v4 = operator new(v3 + 39);
  *(_QWORD *)((((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0ui64) - 8) = v4;
  return (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *)(((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0ui64);
}

Scaleform::GFx::Value *__fastcall extension::gfxi_detail::FunctionTable::call(
        extension::gfxi_detail::FunctionTable *this,
        Scaleform::GFx::Value *result,
        const char *methodName,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  const char *v10; // rdi
  char *v11; // rbx
  char *v12; // rax
  const char *v13; // rbx
  char *v14; // rdx
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r9
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > > > *Myfirst; // r11
  std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *i; // rcx
  std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *Myhead; // rax
  const char *m_str; // rax
  signed __int64 v21; // r10
  int v22; // edx
  int v23; // er8
  signed __int64 v24; // r8
  int v25; // eax
  int v26; // edx
  Scaleform::Log *GlobalLog; // rax
  Scaleform::GFx::Value val; // [rsp+40h] [rbp-58h] BYREF

  val.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  val.pObjectInterface = 0i64;
  val.Type = VT_None;
  v10 = &pnewText;
  if ( methodName )
    v10 = methodName;
  v11 = (char *)v10;
  v12 = strchr(v10, 0);
  if ( v10 < v12 )
  {
    do
      v11 += ((v12 - (v11 + 1)) >> 2) + 1;
    while ( v11 < v12 );
  }
  v13 = v10;
  v14 = strchr(v10, 0);
  v15 = (unsigned int)((_DWORD)v14 - (_DWORD)v10);
  if ( v10 < v14 )
  {
    do
    {
      v16 = ((((*(unsigned __int8 *)v13 + v15) << 9) ^ (*(unsigned __int8 *)v13 + v15)) >> 7) ^ ((*(unsigned __int8 *)v13
                                                                                                + v15) << 9) ^ (*(unsigned __int8 *)v13 + v15);
      v15 = (v16 << 18) ^ v16;
      v13 += ((v14 - (v13 + 1)) >> 2) + 1;
    }
    while ( v13 < v14 );
  }
  Myfirst = this->m_map._Vec._Mypair._Myval2._Myfirst;
  for ( i = Myfirst[2 * (v15 & this->m_map._Mask)]._Ptr; ; i = i->_Next )
  {
    if ( Myfirst[2 * (v15 & this->m_map._Mask)]._Ptr == this->m_map._List._Mypair._Myval2._Myhead )
      Myhead = this->m_map._List._Mypair._Myval2._Myhead;
    else
      Myhead = Myfirst[2 * (v15 & this->m_map._Mask) + 1]._Ptr->_Next;
    if ( i == Myhead )
      goto LABEL_23;
    if ( i->_Myval.first.m_hash == v15 )
    {
      m_str = i->_Myval.first.m_str;
      v21 = v10 - m_str;
      do
      {
        v22 = (unsigned __int8)m_str[v21];
        v23 = *(unsigned __int8 *)m_str - v22;
        if ( v23 )
          break;
        ++m_str;
      }
      while ( v22 );
      if ( !v23 )
        break;
    }
  }
  if ( v15 != i->_Myval.first.m_hash )
    goto LABEL_23;
  v24 = i->_Myval.first.m_str - v10;
  do
  {
    v25 = (unsigned __int8)v10[v24];
    v26 = *(unsigned __int8 *)v10 - v25;
    if ( v26 )
      break;
    ++v10;
  }
  while ( v25 );
  if ( v26 )
LABEL_23:
    i = this->m_map._List._Mypair._Myval2._Myhead;
  if ( i == this->m_map._List._Mypair._Myval2._Myhead )
  {
    GlobalLog = Scaleform::Log::GetGlobalLog();
    Scaleform::Log::LogWarning(GlobalLog, "GFXIGameInterface: function[%s] is not installed.", methodName);
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_None;
    if ( (val.Type & 0x40) != 0 )
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
  }
  else
  {
    std::_Func_class<Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>::operator()(
      &i->_Myval.second,
      result,
      ctx,
      argv,
      argc);
  }
  return result;
}

void __fastcall std::list<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>>::clear(
        std::list<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >> *this,
        __int64 a2)
{
  std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *Next; // rbx
  std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *v4; // rdi
  std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> *v5; // rcx

  Next = this->_Mypair._Myval2._Myhead->_Next;
  this->_Mypair._Myval2._Myhead->_Next = this->_Mypair._Myval2._Myhead;
  this->_Mypair._Myval2._Myhead->_Prev = this->_Mypair._Myval2._Myhead;
  this->_Mypair._Myval2._Mysize = 0i64;
  if ( Next != this->_Mypair._Myval2._Myhead )
  {
    do
    {
      v4 = Next->_Next;
      v5 = (std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> *)Next->_Myval.second._Mystorage._Ptrs[7];
      if ( v5 )
      {
        LOBYTE(a2) = v5 != &Next->_Myval.second;
        ((void (__fastcall *)(std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> *, __int64))v5->_Mystorage._Ptrs[0][4].__vftable)(
          v5,
          a2);
        Next->_Myval.second._Mystorage._Ptrs[7] = 0i64;
      }
      operator delete(Next);
      Next = v4;
    }
    while ( v4 != this->_Mypair._Myval2._Myhead );
  }
}

void __fastcall std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
        std::allocator<AgLogger *> *this,
        AgLogger **_Ptr,
        unsigned __int64 _Count)
{
  AgLogger **v3; // rax
  char *v4; // rdx

  if ( _Count > 0x1FFFFFFFFFFFFFFFi64 )
    invalid_parameter_noinfo_noreturn();
  if ( 8 * _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    v3 = (AgLogger **)*(_Ptr - 1);
    if ( v3 >= _Ptr )
      invalid_parameter_noinfo_noreturn();
    v4 = (char *)((char *)_Ptr - (char *)v3);
    if ( (unsigned __int64)v4 < 8 )
      invalid_parameter_noinfo_noreturn();
    if ( (unsigned __int64)v4 > 0x27 )
      invalid_parameter_noinfo_noreturn();
    _Ptr = v3;
  }
  operator delete(_Ptr);
}

std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::string > > > *__fastcall std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::erase(
        std::_Tree<std::_Tset_traits<std::string,std::less<std::string >,std::allocator<std::string >,0> > *this,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::string > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::string > > > _First,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::string > > > _Last)
{
  std::_Tree_node<std::string,void *> *v5; // rax
  std::_Tree<std::_Tset_traits<std::string,std::less<std::string >,std::allocator<std::string >,0> > **Right; // rdx
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::string > > > resulta; // [rsp+40h] [rbp+8h] BYREF
  std::_Tree_node<std::string,void *> *v9; // [rsp+50h] [rbp+18h]
  std::_Tree_node<std::string,void *> *Ptr; // [rsp+58h] [rbp+20h]

  Ptr = _Last._Ptr;
  v9 = _First._Ptr;
  resulta._Ptr = (std::_Tree_node<std::string,void *> *)this;
  if ( _First._Ptr == extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Left
    && _Last._Ptr == extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead )
  {
    std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Erase(
      &extension::gfxi_detail::FunctionTable::s_functionNameSet,
      extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Parent);
    extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Parent = extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead;
    extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Left = extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead;
    extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Right = extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead;
    extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Mysize = 0i64;
    result->_Ptr = extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Left;
  }
  else
  {
    if ( _First._Ptr != _Last._Ptr )
    {
      do
      {
        v5 = _First._Ptr;
        if ( !_First._Ptr->_Isnil )
        {
          Right = (std::_Tree<std::_Tset_traits<std::string,std::less<std::string >,std::allocator<std::string >,0> > **)_First._Ptr->_Right;
          if ( *((_BYTE *)Right + 25) )
          {
            for ( this = (std::_Tree<std::_Tset_traits<std::string,std::less<std::string >,std::allocator<std::string >,0> > *)_First._Ptr->_Parent;
                  !BYTE1(this[1]._Mypair._Myval2._Myval2._Mysize);
                  this = (std::_Tree<std::_Tset_traits<std::string,std::less<std::string >,std::allocator<std::string >,0> > *)this->_Mypair._Myval2._Myval2._Mysize )
            {
              if ( _First._Ptr != this[1]._Mypair._Myval2._Myval2._Myhead )
                break;
              _First._Ptr = (std::_Tree_node<std::string,void *> *)this;
              v9 = (std::_Tree_node<std::string,void *> *)this;
            }
            v9 = (std::_Tree_node<std::string,void *> *)this;
          }
          else
          {
            for ( this = *Right;
                  !BYTE1(this[1]._Mypair._Myval2._Myval2._Mysize);
                  this = (std::_Tree<std::_Tset_traits<std::string,std::less<std::string >,std::allocator<std::string >,0> > *)this->_Mypair._Myval2._Myval2._Myhead )
            {
              Right = (std::_Tree<std::_Tset_traits<std::string,std::less<std::string >,std::allocator<std::string >,0> > **)this;
            }
            v9 = (std::_Tree_node<std::string,void *> *)Right;
          }
        }
        std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::erase(
          this,
          &resulta,
          (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::string > > >)v5);
        _First._Ptr = v9;
      }
      while ( v9 != Ptr );
    }
    result->_Ptr = _First._Ptr;
  }
  return result;
}

std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::string > > > *__fastcall std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::erase(
        std::_Tree<std::_Tset_traits<std::string,std::less<std::string >,std::allocator<std::string >,0> > *this,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::string > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::string > > > _Where)
{
  std::_Tree_node<std::string,void *> *v4; // rdi
  std::_Tree_node<std::string,void *> *Right; // rax
  std::_Tree_node<std::string,void *> *j; // rax
  std::_Tree_node<std::string,void *> *i; // rax
  std::_Tree_node<std::string,void *> *Left; // rcx
  std::_Tree_node<std::string,void *> *v9; // r10
  std::_Tree_node<std::string,void *> *Parent; // r9
  std::_Tree_node<std::string,void *> *v11; // rax
  std::_Tree_node<std::string,void *> *v12; // rax
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::string > > > *v13; // rax
  std::_Tree_node<std::string,void *> *v14; // r8
  std::_Tree_node<std::string,void *> *v15; // r11
  std::_Tree_node<std::string,void *> *v16; // rdx
  unsigned __int64 Myres; // rax
  void **p_Myval; // rbx
  char *v19; // rcx
  char *v20; // rax
  unsigned __int64 v21; // rcx
  bool v22; // cf
  std::_Tree_node<std::string,void *> *Ptr; // [rsp+40h] [rbp+18h]

  Ptr = _Where._Ptr;
  v4 = _Where._Ptr;
  if ( !_Where._Ptr->_Isnil )
  {
    Right = _Where._Ptr->_Right;
    if ( Right->_Isnil )
    {
      for ( i = _Where._Ptr->_Parent; !i->_Isnil; i = i->_Parent )
      {
        if ( _Where._Ptr != i->_Right )
          break;
        _Where._Ptr = i;
      }
      _Where._Ptr = i;
      Ptr = i;
    }
    else
    {
      _Where._Ptr = _Where._Ptr->_Right;
      for ( j = Right->_Left; !j->_Isnil; j = j->_Left )
        _Where._Ptr = j;
      Ptr = _Where._Ptr;
    }
  }
  Left = v4->_Left;
  if ( v4->_Left->_Isnil )
  {
    v9 = v4->_Right;
LABEL_15:
    Parent = v4->_Parent;
    if ( !v9->_Isnil )
      v9->_Parent = Parent;
    if ( extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Parent == v4 )
    {
      extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Parent = v9;
    }
    else if ( Parent->_Left == v4 )
    {
      Parent->_Left = v9;
    }
    else
    {
      Parent->_Right = v9;
    }
    if ( extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Left == v4 )
    {
      if ( v9->_Isnil )
      {
        Left = Parent;
      }
      else
      {
        v11 = v9->_Left;
        for ( Left = v9; !v11->_Isnil; v11 = v11->_Left )
          Left = v11;
      }
      extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Left = Left;
    }
    if ( extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Right == v4 )
    {
      if ( v9->_Isnil )
      {
        Left = Parent;
        extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Right = Parent;
      }
      else
      {
        v12 = v9->_Right;
        for ( Left = v9; !v12->_Isnil; v12 = v12->_Right )
          Left = v12;
        extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Right = Left;
      }
    }
    goto LABEL_45;
  }
  if ( v4->_Right->_Isnil )
  {
    v9 = v4->_Left;
    goto LABEL_15;
  }
  v9 = _Where._Ptr->_Right;
  if ( _Where._Ptr == v4 )
    goto LABEL_15;
  Left->_Parent = _Where._Ptr;
  _Where._Ptr->_Left = v4->_Left;
  if ( _Where._Ptr == v4->_Right )
  {
    Parent = _Where._Ptr;
  }
  else
  {
    Parent = _Where._Ptr->_Parent;
    if ( !v9->_Isnil )
      v9->_Parent = Parent;
    Parent->_Left = v9;
    _Where._Ptr->_Right = v4->_Right;
    v4->_Right->_Parent = _Where._Ptr;
  }
  if ( extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Parent == v4 )
  {
    extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Parent = _Where._Ptr;
  }
  else
  {
    v13 = (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::string > > > *)v4->_Parent;
    if ( v13->_Ptr == v4 )
      v13->_Ptr = _Where._Ptr;
    else
      v13[2]._Ptr = _Where._Ptr;
  }
  _Where._Ptr->_Parent = v4->_Parent;
  Left = (std::_Tree_node<std::string,void *> *)(unsigned __int8)_Where._Ptr->_Color;
  _Where._Ptr->_Color = v4->_Color;
  v4->_Color = (char)Left;
LABEL_45:
  if ( v4->_Color == 1 )
  {
    if ( v9 != extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Parent )
    {
      do
      {
        v14 = Parent;
        v15 = Parent;
        if ( v9->_Color != 1 )
          break;
        v16 = Parent->_Left;
        if ( v9 == Parent->_Left )
        {
          v16 = Parent->_Right;
          if ( !v16->_Color )
          {
            v16->_Color = 1;
            Parent->_Color = 0;
            std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Lrotate(
              (std::_Tree<std::_Tset_traits<std::string,std::less<std::string >,std::allocator<std::string >,0> > *)Left,
              Parent);
            v16 = Parent->_Right;
          }
          if ( v16->_Isnil )
            goto LABEL_63;
          if ( v16->_Left->_Color != 1 || v16->_Right->_Color != 1 )
          {
            if ( v16->_Right->_Color == 1 )
            {
              v16->_Left->_Color = 1;
              v16->_Color = 0;
              std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Rrotate(
                (std::_Tree<std::_Tset_traits<std::string,std::less<std::string >,std::allocator<std::string >,0> > *)Left,
                v16);
              v16 = Parent->_Right;
            }
            v16->_Color = Parent->_Color;
            Parent->_Color = 1;
            v16->_Right->_Color = 1;
            std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Lrotate(
              (std::_Tree<std::_Tset_traits<std::string,std::less<std::string >,std::allocator<std::string >,0> > *)Left,
              Parent);
            break;
          }
        }
        else
        {
          if ( !v16->_Color )
          {
            v16->_Color = 1;
            Parent->_Color = 0;
            std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Rrotate(
              (std::_Tree<std::_Tset_traits<std::string,std::less<std::string >,std::allocator<std::string >,0> > *)Left,
              Parent);
            v16 = Parent->_Left;
          }
          if ( v16->_Isnil )
            goto LABEL_63;
          if ( v16->_Right->_Color != 1 || v16->_Left->_Color != 1 )
          {
            if ( v16->_Left->_Color == 1 )
            {
              v16->_Right->_Color = 1;
              v16->_Color = 0;
              std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Lrotate(
                (std::_Tree<std::_Tset_traits<std::string,std::less<std::string >,std::allocator<std::string >,0> > *)Left,
                v16);
              v16 = Parent->_Left;
            }
            v16->_Color = Parent->_Color;
            Parent->_Color = 1;
            v16->_Left->_Color = 1;
            std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Rrotate(
              (std::_Tree<std::_Tset_traits<std::string,std::less<std::string >,std::allocator<std::string >,0> > *)Left,
              Parent);
            break;
          }
        }
        v16->_Color = 0;
LABEL_63:
        v9 = v15;
        Parent = Parent->_Parent;
      }
      while ( v14 != extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Myhead->_Parent );
    }
    v9->_Color = 1;
  }
  Myres = v4->_Myval._Mypair._Myval2._Myres;
  p_Myval = (void **)&v4->_Myval;
  if ( Myres >= 0x10 )
  {
    v19 = (char *)*p_Myval;
    if ( Myres + 1 >= 0x1000 )
    {
      if ( ((unsigned __int8)v19 & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v20 = (char *)*((_QWORD *)v19 - 1);
      if ( v20 >= v19 )
        invalid_parameter_noinfo_noreturn();
      v21 = v19 - v20;
      if ( v21 < 8 )
        invalid_parameter_noinfo_noreturn();
      if ( v21 > 0x27 )
        invalid_parameter_noinfo_noreturn();
      v19 = v20;
    }
    operator delete(v19);
  }
  v4->_Myval._Mypair._Myval2._Myres = 15i64;
  v22 = v4->_Myval._Mypair._Myval2._Myres < 0x10;
  v4->_Myval._Mypair._Myval2._Mysize = 0i64;
  if ( !v22 )
    p_Myval = (void **)*p_Myval;
  *(_BYTE *)p_Myval = 0;
  operator delete(v4);
  if ( extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Mysize )
    --extension::gfxi_detail::FunctionTable::s_functionNameSet._Mypair._Myval2._Myval2._Mysize;
  result->_Ptr = Ptr;
  return result;
}

Scaleform::Ptr<Scaleform::GFx::ExternalInterface> *__fastcall extension::GFXIGameInterface::getExternalInterface(
        extension::GFXIGameInterface *this,
        Scaleform::Ptr<Scaleform::GFx::ExternalInterface> *result)
{
  extension::gfxi_detail::GameInterfaceImpl::getExternalInterface(the_instance_4.m_impl.m_ptr, result);
  return result;
}

Scaleform::Ptr<Scaleform::GFx::ExternalInterface> *__fastcall extension::gfxi_detail::GameInterfaceImpl::getExternalInterface(
        extension::gfxi_detail::GameInterfaceImpl *this,
        Scaleform::Ptr<Scaleform::GFx::ExternalInterface> *result)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  pObject = (Scaleform::RefCountVImpl *)this->m_exi.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  result->pObject = this->m_exi.pObject;
  return result;
}

Scaleform::Ptr<Scaleform::GFx::FSCommandHandler> *__fastcall extension::GFXIGameInterface::getFSCommandHandler(
        extension::GFXIGameInterface *this,
        Scaleform::Ptr<Scaleform::GFx::FSCommandHandler> *result)
{
  extension::gfxi_detail::GameInterfaceImpl::getFSCommandHandler(the_instance_4.m_impl.m_ptr, result);
  return result;
}

Scaleform::Ptr<Scaleform::GFx::FSCommandHandler> *__fastcall extension::gfxi_detail::GameInterfaceImpl::getFSCommandHandler(
        extension::gfxi_detail::GameInterfaceImpl *this,
        Scaleform::Ptr<Scaleform::GFx::FSCommandHandler> *result)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  pObject = (Scaleform::RefCountVImpl *)this->m_fsc.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  result->pObject = this->m_fsc.pObject;
  return result;
}

void __fastcall extension::gfxi_detail::FunctionTable::installFunction(
        extension::gfxi_detail::FunctionTable *this,
        const char *methodName,
        const std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> *fn)
{
  unsigned __int64 v5; // r8
  std::_Tree<std::_Tset_traits<std::string,std::less<std::string >,std::allocator<std::string >,0> > *v6; // rcx
  bool v7; // r8
  std::string *p_Myval; // rax
  const char *v9; // rbx
  char *v10; // rdx
  __int64 i; // r9
  unsigned __int64 v12; // r9
  char *Ptr; // rcx
  char *v14; // rax
  std::unordered_map<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > > *p_m_map; // rbp
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > > > *Myfirst; // r8
  std::_Tree_node<std::string,void *> *v17; // rcx
  unsigned __int64 v18; // rdx
  std::_Tree_node<std::string,void *> *v19; // rdi
  std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *Myhead; // rax
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > > > *v21; // rsi
  const char *v22; // rbx
  std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *Next; // rdx
  std::_Tree_node<std::string,void *> *Right; // rdx
  signed __int64 v25; // r11
  int v26; // er8
  int v27; // er10
  int v28; // edx
  int v29; // er8
  std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *v30; // rbx
  std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *v31; // rdx
  unsigned __int64 Mysize; // rax
  std::pair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::string > > >,bool> result; // [rsp+38h] [rbp-80h] BYREF
  const char *v34; // [rsp+48h] [rbp-70h] BYREF
  __int64 v35; // [rsp+50h] [rbp-68h]
  __int64 v36; // [rsp+58h] [rbp-60h]
  std::string _Val; // [rsp+60h] [rbp-58h] BYREF

  v36 = -2i64;
  _Val._Mypair._Myval2._Myres = 15i64;
  v5 = 0i64;
  _Val._Mypair._Myval2._Mysize = 0i64;
  _Val._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( *methodName )
  {
    v5 = -1i64;
    do
      ++v5;
    while ( methodName[v5] );
  }
  std::string::assign(&_Val, methodName, v5);
  std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Insert_nohint<std::string,std::_Nil>(
    v6,
    &result,
    v7,
    &_Val);
  p_Myval = &result.first._Ptr->_Myval;
  if ( result.first._Ptr->_Myval._Mypair._Myval2._Myres >= 0x10 )
    p_Myval = (std::string *)p_Myval->_Mypair._Myval2._Bx._Ptr;
  v9 = &pnewText;
  if ( p_Myval )
    v9 = (const char *)p_Myval;
  v34 = v9;
  v10 = strchr(v9, 0);
  for ( i = (unsigned int)((_DWORD)v10 - (_DWORD)v9); v9 < v10; v9 += ((v10 - (v9 + 1)) >> 2) + 1 )
  {
    v12 = ((((*(unsigned __int8 *)v9 + i) << 9) ^ ((unsigned __int64)*(unsigned __int8 *)v9 + i)) >> 7) ^ ((*(unsigned __int8 *)v9 + i) << 9) ^ (*(unsigned __int8 *)v9 + i);
    i = (v12 << 18) ^ v12;
  }
  v35 = i;
  if ( _Val._Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = _Val._Mypair._Myval2._Bx._Ptr;
    if ( _Val._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (_Val._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v14 = (char *)*((_QWORD *)_Val._Mypair._Myval2._Bx._Ptr - 1);
      if ( v14 >= _Val._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Val._Mypair._Myval2._Bx._Ptr - v14) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Val._Mypair._Myval2._Bx._Ptr - v14) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = (char *)*((_QWORD *)_Val._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(Ptr);
    i = v35;
  }
  p_m_map = &this->m_map;
  Myfirst = this->m_map._Vec._Mypair._Myval2._Myfirst;
  v17 = (std::_Tree_node<std::string,void *> *)Myfirst[2 * (i & this->m_map._Mask)]._Ptr;
  v18 = 2 * (i & this->m_map._Mask);
  v19 = v17;
  Myhead = p_m_map->_List._Mypair._Myval2._Myhead;
  v21 = &Myfirst[v18];
  v22 = v34;
  while ( 1 )
  {
    if ( v19 == (std::_Tree_node<std::string,void *> *)Myhead )
      Next = p_m_map->_List._Mypair._Myval2._Myhead;
    else
      Next = v21[1]._Ptr->_Next;
    if ( v17 == (std::_Tree_node<std::string,void *> *)Next )
      goto LABEL_38;
    if ( *(_QWORD *)&v17->_Color == i )
    {
      Right = v17->_Right;
      v25 = v34 - (const char *)Right;
      do
      {
        v26 = *((unsigned __int8 *)&Right->_Left + v25);
        v27 = LOBYTE(Right->_Left) - v26;
        if ( v27 )
          break;
        Right = (std::_Tree_node<std::string,void *> *)((char *)Right + 1);
      }
      while ( v26 );
      if ( !v27 )
        break;
    }
    v17 = v17->_Left;
  }
  if ( i != *(_QWORD *)&v17->_Color )
    goto LABEL_38;
  i = (char *)v17->_Right - (char *)v34;
  do
  {
    v28 = (unsigned __int8)v22[i];
    v29 = *(unsigned __int8 *)v22 - v28;
    if ( v29 )
      break;
    ++v22;
  }
  while ( v28 );
  if ( v29 )
LABEL_38:
    v17 = (std::_Tree_node<std::string,void *> *)p_m_map->_List._Mypair._Myval2._Myhead;
  if ( v17 == (std::_Tree_node<std::string,void *> *)Myhead )
  {
    result.first._Ptr = (std::_Tree_node<std::string,void *> *)&v34;
    v30 = p_m_map->_List._Mypair._Myval2._Myhead->_Next;
    v31 = std::_List_buy<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>>::_Buynode<std::piecewise_construct_t const &,std::tuple<extension::gfxi_detail::FunctionTable::StringRef const &>,std::tuple<>>(
            (std::_List_buy<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >> *)v17,
            v30,
            v30->_Prev,
            (const std::piecewise_construct_t *)i,
            (std::tuple<extension::gfxi_detail::FunctionTable::StringRef const &> *)&result);
    Mysize = p_m_map->_List._Mypair._Myval2._Mysize;
    if ( Mysize == 0x2AAAAAAAAAAAAA9i64 )
      std::_Xlength_error("list<T> too long");
    p_m_map->_List._Mypair._Myval2._Mysize = Mysize + 1;
    v30->_Prev = v31;
    v31->_Prev->_Next = v31;
    std::_Hash<std::_Umap_traits<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,std::_Uhash_compare<extension::gfxi_detail::FunctionTable::StringRef,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>>,0>>::_Insert<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>>>>>(
      p_m_map,
      (std::pair<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > > >,bool> *)&result,
      &p_m_map->_List._Mypair._Myval2._Myhead->_Next->_Myval,
      (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > > >)p_m_map->_List._Mypair._Myval2._Myhead->_Next);
    v17 = result.first._Ptr;
  }
  std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>::operator=(
    (std::function<void __cdecl(void)> *)&v17->_Myval,
    (std::function<void __cdecl(void)> *)fn);
}

void __fastcall std::_Hash<std::_Umap_traits<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,std::_Uhash_compare<extension::gfxi_detail::FunctionTable::StringRef,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>>,0>>::rehash(
        std::_Hash<std::_Umap_traits<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,std::_Uhash_compare<extension::gfxi_detail::FunctionTable::StringRef,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef> >,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > >,0> > *this,
        unsigned __int64 _Buckets)
{
  unsigned __int64 v4; // rdx
  signed __int64 Mysize; // rax
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  bool v9; // sf
  float v10; // xmm0_4
  std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *Myhead; // rax
  std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *Prev; // rdi
  std::_List_node<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >,void *> *Next; // rbx
  std::pair<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > > >,bool> result; // [rsp+20h] [rbp-18h] BYREF

  v4 = 8i64;
  if ( _Buckets > 8 )
  {
    while ( v4 < 0x7FFFFFFFFFFFFFFi64 )
    {
      v4 *= 2i64;
      if ( v4 >= _Buckets )
        goto LABEL_4;
    }
    if ( v4 < _Buckets )
      std::_Xout_of_range("invalid hash bucket count");
  }
LABEL_4:
  Mysize = this->_List._Mypair._Myval2._Mysize;
  v6 = (float)(int)Mysize;
  if ( Mysize < 0 )
    v6 = v6 + 1.8446744e19;
  v7 = v6 / this->_Traitsobj._Mypair._Myval2._Myval2;
  v8 = (float)(int)v4;
  if ( (v4 & 0x8000000000000000ui64) != 0i64 )
    v8 = v8 + 1.8446744e19;
  if ( v8 <= v7 )
  {
    do
    {
      if ( v4 >= 0x7FFFFFFFFFFFFFFi64 )
        break;
      v9 = (v4 & 0x4000000000000000i64) != 0;
      v4 *= 2i64;
      v10 = (float)(int)v4;
      if ( v9 )
        v10 = v10 + 1.8446744e19;
    }
    while ( v10 <= v7 );
  }
  std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>>>,0>>::_Init(
    (std::_Hash<std::_Umap_traits<extension::SoundHashKey,int,std::_Uhash_compare<extension::SoundHashKey,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey> >,std::allocator<std::pair<extension::SoundHashKey const ,int> >,0> > *)this,
    v4);
  Myhead = this->_List._Mypair._Myval2._Myhead;
  if ( Myhead->_Next != Myhead )
  {
    Prev = Myhead->_Prev;
    do
    {
      Next = this->_List._Mypair._Myval2._Myhead->_Next;
      std::_Hash<std::_Umap_traits<extension::gfxi_detail::FunctionTable::StringRef,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>,std::_Uhash_compare<extension::gfxi_detail::FunctionTable::StringRef,extension::gfxi_detail::FunctionTable::StringRef::Hash,std::equal_to<extension::gfxi_detail::FunctionTable::StringRef>>,std::allocator<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>>,0>>::_Insert<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>>>>>(
        this,
        &result,
        &Next->_Myval,
        (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > > > >)Next);
    }
    while ( Next != Prev );
  }
}

void __fastcall extension::RefCountable<extension::gfxi_detail::FunctionTable>::release(
        extension::RefCountable<extension::gfxi_detail::FunctionTable> *this)
{
  AgLogger **My_val; // rdx

  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)this, 0xFFFFFFFFFFFFFFFFui64) == 1 && this )
  {
    My_val = (AgLogger **)this[4].m_refCount.m_value._My_val;
    if ( My_val )
    {
      std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
        (std::allocator<AgLogger *> *)this,
        My_val,
        (__int64)(this[6].m_refCount.m_value._My_val - (_QWORD)My_val) >> 3);
      this[4].m_refCount.m_value._My_val = 0i64;
      this[5].m_refCount.m_value._My_val = 0i64;
      this[6].m_refCount.m_value._My_val = 0i64;
    }
    std::list<std::pair<extension::gfxi_detail::FunctionTable::StringRef const,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>>::clear(
      (std::list<std::pair<extension::gfxi_detail::FunctionTable::StringRef const ,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >> *)&this[2],
      (__int64)My_val);
    operator delete((void *)this[2].m_refCount.m_value._My_val);
    operator delete(this, 0x48ui64);
  }
}

void __fastcall extension::RefCountablePtr<extension::gfxi_detail::GameInterfaceImpl>::release(
        extension::RefCountablePtr<extension::gfxi_detail::GameInterfaceImpl> *this)
{
  extension::gfxi_detail::GameInterfaceImpl *m_ptr; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v3; // rcx
  extension::RefCountable<extension::gfxi_detail::FunctionTable> *v4; // rcx

  m_ptr = the_instance_4.m_impl.m_ptr;
  if ( the_instance_4.m_impl.m_ptr
    && _InterlockedExchangeAdd64((volatile signed __int64 *)the_instance_4.m_impl.m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1
    && m_ptr )
  {
    pObject = (Scaleform::RefCountVImpl *)m_ptr->m_fsc.pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    v3 = (Scaleform::RefCountVImpl *)m_ptr->m_exi.pObject;
    if ( v3 )
      Scaleform::RefCountImpl::Release(v3);
    v4 = m_ptr->m_functionTable.m_ptr;
    if ( v4 )
      extension::RefCountable<extension::gfxi_detail::FunctionTable>::release(v4);
    operator delete(m_ptr, 0x20ui64);
  }
}

void __fastcall extension::GFXIGameInterface::setState(
        extension::GFXIGameInterface *this,
        Scaleform::GFx::StateBag *target)
{
  Scaleform::Ptr<Scaleform::GFx::ExternalInterface> *ExternalInterface; // rax
  Scaleform::GFx::ExternalInterface *pObject; // rcx
  Scaleform::Ptr<Scaleform::GFx::FSCommandHandler> *FSCommandHandler; // rax
  Scaleform::Ptr<Scaleform::GFx::ExternalInterface> result; // [rsp+40h] [rbp+8h] BYREF

  result.pObject = (Scaleform::GFx::ExternalInterface *)this;
  ExternalInterface = extension::GFXIGameInterface::getExternalInterface(this, &result);
  target->SetState(target, State_ProjectionMatrix3D, ExternalInterface->pObject);
  pObject = result.pObject;
  if ( result.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)result.pObject);
  FSCommandHandler = extension::GFXIGameInterface::getFSCommandHandler(
                       (extension::GFXIGameInterface *)pObject,
                       (Scaleform::Ptr<Scaleform::GFx::FSCommandHandler> *)&result);
  target->SetState(target, State_ViewMatrix3D, FSCommandHandler->pObject);
  if ( result.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)result.pObject);
}

