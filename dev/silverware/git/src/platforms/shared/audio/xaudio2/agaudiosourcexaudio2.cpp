#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/microsoft directx sdk (june 2010)/include/xma2defs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/silverware/git/src/platforms/shared/audio/xaudio2/agaudiosourcedataxaudio2.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/silverware/git/src/audio/agaudiosourcedata.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/silverware/git/sdk/audio/agaudiomanager.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/silverware/git/sdk/audio/agaudiochannel.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/silverware/git/sdk/agmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/microsoft directx sdk (june 2010)/include/xaudio2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/silverware/git/src/audio/agaudiochanneldata.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/silverware/git/src/audio/agwavutils.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "dev/silverware/git/src/platforms/shared/audio/xaudio2/agaudiochanneldataxaudio2.h"
#include "dev/silverware/git/sdk/audio/agaudioeffects.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/silverware/git/src/3rdparty/libvorbis-1.3.5/include/vorbis/vorbisfile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/silverware/git/sdk/agendian.inl"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/silverware/git/sdk/agcurve.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/silverware/git/sdk/audio/agaudiotypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"

struct AgXAudio2RuntimeData
{
	class StreamList;
	AgMutex m_streamsLock; // 0x0
	std::list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > > m_queuedStreams; // 0x28
	std::list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > m_submittedContexts; // 0x38
	AgXAudio2RuntimeData();
	~AgXAudio2RuntimeData();
};
class std::list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > > :
	std::_List_buy<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > >
{
	class _Myt;
	class _Mybase;
	struct _Node;
	typedef std::_List_node<AgPointer<AgStream>,void *> _Nodeptr;
	struct _Alty;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgPointer<AgStream> pointer;
	typedef const AgPointer<AgStream> const_pointer;
	typedef AgPointer<AgStream> reference;
	typedef const AgPointer<AgStream> const_reference;
	class value_type;
	class const_iterator;
	class iterator;
	class _Unchecked_const_iterator;
	class _Unchecked_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > >(std::initializer_list<AgPointer<AgStream> >, const std::allocator<AgPointer<AgStream> > &);
	list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > >(std::list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > > &, const std::allocator<AgPointer<AgStream> > &);
	list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > >(std::list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > > &);
	list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > >(const std::list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > > &, const std::allocator<AgPointer<AgStream> > &);
	list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > >(const std::list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > > &);
	list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > >(unsigned long long, const AgPointer<AgStream> &, const std::allocator<AgPointer<AgStream> > &);
	list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > >(unsigned long long, const AgPointer<AgStream> &);
	list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > >(unsigned long long);
	list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > >(const std::allocator<AgPointer<AgStream> > &);
	list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > >();
	void _Construct_n(unsigned long long, const AgPointer<AgStream> &);
	std::list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > > & operator=(const std::list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > > &);
	std::list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > > & operator=(std::initializer_list<AgPointer<AgStream> >);
	std::list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > > & operator=(std::list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > > &);
	void _Assign_rv(std::list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > > &);
	void push_front(const AgPointer<AgStream> &);
	void push_front(AgPointer<AgStream> &);
	void push_back(const AgPointer<AgStream> &);
	void push_back(AgPointer<AgStream> &);
	std::_List_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > > insert(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > >, unsigned long long, const AgPointer<AgStream> &);
	std::_List_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > > insert(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > >, const AgPointer<AgStream> &);
	std::_List_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > > insert(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > >, std::initializer_list<AgPointer<AgStream> >);
	std::_List_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > > insert(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > >, AgPointer<AgStream> &);
	void assign(unsigned long long, const AgPointer<AgStream> &);
	void assign(std::initializer_list<AgPointer<AgStream> >);
	~list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > >();
	std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > > begin();
	std::_List_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > > begin();
	std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > > end();
	std::_List_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > > end();
	std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > >,std::_Iterator_base0> _Unchecked_begin();
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > > _Unchecked_begin();
	std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > >,std::_Iterator_base0> _Unchecked_end();
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > > _Unchecked_end();
	std::_List_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > > _Make_iter(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > >,std::_Iterator_base0>);
	std::_List_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > > _Make_iter(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > >);
	std::reverse_iterator<std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > > > rbegin();
	std::reverse_iterator<std::_List_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > > > rbegin();
	std::reverse_iterator<std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > > > rend();
	std::reverse_iterator<std::_List_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > > > rend();
	std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > > cbegin();
	std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > > cend();
	std::reverse_iterator<std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > > > crbegin();
	std::reverse_iterator<std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > > > crend();
	void resize(unsigned long long, const AgPointer<AgStream> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgPointer<AgStream> > get_allocator();
	const AgPointer<AgStream> & front();
	AgPointer<AgStream> & front();
	const AgPointer<AgStream> & back();
	AgPointer<AgStream> & back();
	void pop_front();
	void pop_back();
	std::_List_node<AgPointer<AgStream>,void *> * _Unlinknode(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > >);
	std::_List_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > > erase(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > >);
	std::_List_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > > erase(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > >);
	void _Unchecked_erase(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > >,std::_Iterator_base0>);
	void clear();
	void swap(std::list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > > &);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > >, std::list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > >);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > >, std::list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > >);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > >, std::list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > >);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > >, std::list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > >);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > >, std::list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > > &);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > >, std::list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > > &);
	void remove(const AgPointer<AgStream> &);
	void unique();
	void merge(std::list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > > &);
	void merge(std::list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > > &);
	void sort();
	void reverse();
	void _Splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > >, std::list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > >, unsigned long long);
	void _Splice_same(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > >, std::list<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > > >, unsigned long long);
	void _Unchecked_splice(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > >,std::_Iterator_base0>, std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > >,std::_Iterator_base0>, std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > >,std::_Iterator_base0>);
	void _Tidy();
	void _Insert_n(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgStream> > >,std::_Iterator_base0>, unsigned long long, const AgPointer<AgStream> &);
	void _Incsize(unsigned long long);
};
ov_callbacks agOggHeaderCallbacks; // 0x140A29470
class std::list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > :
	std::_List_buy<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > >
{
	class _Myt;
	class _Mybase;
	struct _Node;
	typedef std::_List_node<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,void *> _Nodeptr;
	struct _Alty;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> pointer;
	typedef const std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> const_pointer;
	typedef std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> reference;
	typedef const std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> const_reference;
	struct value_type;
	class const_iterator;
	class iterator;
	class _Unchecked_const_iterator;
	class _Unchecked_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > >(std::initializer_list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> >, const std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > &);
	list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > >(std::list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > &, const std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > &);
	list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > >(std::list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > &);
	list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > >(const std::list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > &, const std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > &);
	list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > >(const std::list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > &);
	list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > >(unsigned long long, const std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> &, const std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > &);
	list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > >(unsigned long long, const std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> &);
	list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > >(unsigned long long);
	list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > >(const std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > &);
	list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > >();
	void _Construct_n(unsigned long long, const std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> &);
	std::list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > & operator=(const std::list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > &);
	std::list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > & operator=(std::initializer_list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> >);
	std::list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > & operator=(std::list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > &);
	void _Assign_rv(std::list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > &);
	void push_front(const std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> &);
	void push_front(std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> &);
	void push_back(const std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> &);
	void push_back(std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> &);
	std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > > insert(std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > >, unsigned long long, const std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> &);
	std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > > insert(std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > >, const std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> &);
	std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > > insert(std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > >, std::initializer_list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> >);
	std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > > insert(std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > >, std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> &);
	void assign(unsigned long long, const std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> &);
	void assign(std::initializer_list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> >);
	~list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > >();
	std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > > begin();
	std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > > begin();
	std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > > end();
	std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > > end();
	std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > >,std::_Iterator_base0> _Unchecked_begin();
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > > _Unchecked_begin();
	std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > >,std::_Iterator_base0> _Unchecked_end();
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > > _Unchecked_end();
	std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > > _Make_iter(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > >,std::_Iterator_base0>);
	std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > > _Make_iter(std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > >);
	std::reverse_iterator<std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > > > rbegin();
	std::reverse_iterator<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > > > rbegin();
	std::reverse_iterator<std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > > > rend();
	std::reverse_iterator<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > > > rend();
	std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > > cbegin();
	std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > > cend();
	std::reverse_iterator<std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > > > crbegin();
	std::reverse_iterator<std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > > > crend();
	void resize(unsigned long long, const std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > get_allocator();
	const std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> & front();
	std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> & front();
	const std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> & back();
	std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> & back();
	void pop_front();
	void pop_back();
	std::_List_node<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,void *> * _Unlinknode(std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > >);
	std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > > erase(std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > >);
	std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > > erase(std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > >);
	void _Unchecked_erase(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > >,std::_Iterator_base0>);
	void clear();
	void swap(std::list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > &);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > >, std::list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > >);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > >, std::list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > >);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > >, std::list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > >);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > >, std::list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > >);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > >, std::list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > &);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > >, std::list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > &);
	void remove(const std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> &);
	void unique();
	void merge(std::list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > &);
	void merge(std::list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > &);
	void sort();
	void reverse();
	void _Splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > >, std::list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > >, unsigned long long);
	void _Splice_same(std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > >, std::list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > > >, unsigned long long);
	void _Unchecked_splice(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > >,std::_Iterator_base0>, std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > >,std::_Iterator_base0>, std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > >,std::_Iterator_base0>);
	void _Tidy();
	void _Insert_n(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> > >,std::_Iterator_base0>, unsigned long long, const std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> &);
	void _Incsize(unsigned long long);
};
class XAudio2RuntimeCallbacks :
	IXAudio2VoiceCallback
{
private:
	virtual void OnBufferEnd(void *);
	virtual void OnBufferStart(void *);
	virtual void OnLoopEnd(void *);
	virtual void OnStreamEnd();
	virtual void OnVoiceError(void *, HRESULT);
	virtual void OnVoiceProcessingPassEnd();
	virtual void OnVoiceProcessingPassStart(unsigned long);
public:
	XAudio2RuntimeCallbacks(XAudio2RuntimeCallbacks &);
	XAudio2RuntimeCallbacks(const XAudio2RuntimeCallbacks &);
	XAudio2RuntimeCallbacks();
	XAudio2RuntimeCallbacks & operator=(XAudio2RuntimeCallbacks &);
	XAudio2RuntimeCallbacks & operator=(const XAudio2RuntimeCallbacks &);
};
void XAudio2RuntimeCallbacks::OnBufferEnd(void * pBufferContext); // 0x14068C4B0
unsigned long long oggReadHeaderFunc(void * ptr, unsigned long long size, unsigned long long nmemb, void * datasource); // 0x14068D030
long oggSeekHeaderFunc(void * datasource, long long offset, long whence); // 0x14068D050
long oggTellHeaderFunc(void * datasource); // 0x14014DD80
AgAudioSourceXAudio2::AgAudioSourceXAudio2(AgPointer<AgFile> file, AgAudioSourceType type, long is3D, float volume); // 0x14068C1A0
AgAudioSourceXAudio2::AgAudioSourceXAudio2(AgAudioSource::RuntimeAudioSource __formal, unsigned long sampleRate, long is3D, float volume); // 0x14068C230
AgXAudio2RuntimeData::AgXAudio2RuntimeData(); // 0x14068C270
std::_List_buy<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData * __ptr64>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData * __ptr64> > >::~_List_buy<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData * __ptr64>,std::allocator<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData * __ptr64> > >(); // 0x14068C330
std::_List_buy<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > >::~_List_buy<AgPointer<AgStream>,std::allocator<AgPointer<AgStream> > >(); // 0x14068C350
std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData * __ptr64>::~pair<AgPointer<AgStream>,AgXAudio2RuntimeData * __ptr64>(); // 0x14068C3D0
AgXAudio2RuntimeData::~AgXAudio2RuntimeData(); // 0x14068C3F0
void AgAudioSourceXAudio2::_createFromFile(AgPointer<AgFile> file); // 0x14068C640
void AgAudioSourceXAudio2::_createFromStream(unsigned long sampleRate); // 0x14068CA70
void AgAudioSourceXAudio2::_pushStream(AgPointer<AgStream> stream); // 0x14068CCE0
std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> * AgAudioSourceXAudio2::_pumpRuntimeStream(); // 0x14068CBF0
IXAudio2VoiceCallback * AgAudioSourceXAudio2::_fetchCallbacks(); // 0x14068CB60
long AgAudioSourceXAudio2::_getNumChannels(); // 0x14068CBE0
void AgAudioSourceXAudio2::_destroy(); // 0x14068CB00
unsigned long AgAudioSourceXAudio2::getChunkSize(); // 0x14068CFF0
unsigned char * AgAudioSourceXAudio2::getData(); // 0x14068D000
tWAVEFORMATEX * AgAudioSourceXAudio2::getWaveFormat(); // 0x14068D020
const AgPath & AgAudioSourceXAudio2::getPath(); // 0x14068D010
void XAudio2RuntimeCallbacks::OnBufferStart(void * pBufferContext); // 0x14002E7C0//decompilation failure at 140A29470!
AgPointer<AgPlayer> *__fastcall std::_List_buy<AgPointer<AgStream>>::_Buynode<AgPointer<AgStream> const &>(
        std::_List_buy<AgPointer<AgStream>> *this,
        std::_List_node<AgPointer<AgStream>,void *> *_Next,
        std::_List_node<AgPointer<AgStream>,void *> *_Prev,
        const AgPointer<AgStream> *<_Val_0>)
{
  AgPointer<AgPlayer> *v5; // rbx

  v5 = (AgPointer<AgPlayer> *)std::_List_alloc<std::_List_base_types<AgPointer<AgStream>>>::_Buynode0(
                                this,
                                _Next,
                                _Prev);
  if ( v5 != (AgPointer<AgPlayer> *)-16i64 )
    AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(
      v5 + 1,
      (const AgPointer<AgPlayer> *)<_Val_0>);
  return v5;
}

std::_List_node<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,void *> *__fastcall std::_List_buy<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>>::_Buynode<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>>(
        std::_List_buy<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>> *this,
        std::_List_node<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,void *> *_Next,
        std::_List_node<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,void *> *_Prev,
        std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> *<_Val_0>)
{
  std::_List_node<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,void *> *result; // rax

  result = std::_List_alloc<std::_List_base_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>>>::_Buynode0(
             this,
             _Next,
             _Prev);
  if ( result != (std::_List_node<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,void *> *)-16i64 )
  {
    result->_Myval.first.m_ref = <_Val_0>->first.m_ref;
    result->_Myval.first.m_ptr = <_Val_0>->first.m_ptr;
    <_Val_0>->first.m_ref = 0i64;
    <_Val_0>->first.m_ptr = 0i64;
    result->_Myval.second = <_Val_0>->second;
  }
  return result;
}

std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> *__fastcall std::make_pair<AgPointer<AgStream> &,AgXAudio2RuntimeData * &>(
        std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> *result,
        AgPointer<AgStream> *_Val1,
        AgXAudio2RuntimeData **_Val2)
{
  AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(
    (AgPointer<AgPlayer> *)result,
    (const AgPointer<AgPlayer> *)_Val1);
  result->second = *_Val2;
  return result;
}

void __fastcall AgAudioSourceXAudio2::AgAudioSourceXAudio2(
        AgAudioSourceXAudio2 *this,
        AgPointer<AgFile> *file,
        AgAudioSourceType type,
        int is3D,
        float volume)
{
  AgPointer<AgFile> *v9; // rax
  AgPointer<AgPlayer> v10; // [rsp+40h] [rbp-28h] BYREF

  AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(&v10, (const AgPointer<AgPlayer> *)file);
  AgAudioSource::AgAudioSource(this, v9, type, is3D, volume);
  this->__vftable = (AgAudioSourceXAudio2_vtbl *)&AgAudioSourceXAudio2::`vftable';
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)file);
}

void __fastcall AgAudioSourceXAudio2::AgAudioSourceXAudio2(
        AgAudioSourceXAudio2 *this,
        AgAudioSource::RuntimeAudioSource __formal,
        unsigned int sampleRate,
        int is3D,
        float volume)
{
  AgAudioSource::AgAudioSource(this, Runtime, sampleRate, is3D, volume);
  this->__vftable = (AgAudioSourceXAudio2_vtbl *)&AgAudioSourceXAudio2::`vftable';
}

void __fastcall AgXAudio2RuntimeData::AgXAudio2RuntimeData(AgXAudio2RuntimeData *this)
{
  InitializeCriticalSection((LPCRITICAL_SECTION)this);
  this->m_queuedStreams._Mypair._Myval2._Myhead = 0i64;
  this->m_queuedStreams._Mypair._Myval2._Mysize = 0i64;
  this->m_queuedStreams._Mypair._Myval2._Myhead = std::_List_alloc<std::_List_base_types<AgPointer<AgStream>>>::_Buynode0(
                                                    &this->m_queuedStreams,
                                                    0i64,
                                                    0i64);
  this->m_submittedContexts._Mypair._Myval2._Myhead = 0i64;
  this->m_submittedContexts._Mypair._Myval2._Mysize = 0i64;
  this->m_submittedContexts._Mypair._Myval2._Myhead = std::_List_alloc<std::_List_base_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>>>::_Buynode0(
                                                        &this->m_submittedContexts,
                                                        0i64,
                                                        0i64);
}

void __fastcall std::_List_alloc<std::_List_base_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>>>::~_List_alloc<std::_List_base_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>>>(
        std::_List_alloc<std::_List_base_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>> > *this)
{
  operator delete(this->_Mypair._Myval2._Myhead);
}

void __fastcall std::_List_alloc<std::_List_base_types<AgPointer<AgStream>>>::~_List_alloc<std::_List_base_types<AgPointer<AgStream>>>(
        std::_List_alloc<std::_List_base_types<AgPointer<AgStream>> > *this)
{
  operator delete(this->_Mypair._Myval2._Myhead);
}

void __fastcall std::_List_buy<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>>::~_List_buy<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>>(
        std::_List_buy<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>> *this)
{
  operator delete(this->_Mypair._Myval2._Myhead);
}

void __fastcall std::_List_buy<AgPointer<AgStream>>::~_List_buy<AgPointer<AgStream>>(
        std::_List_buy<AgPointer<AgStream>> *this)
{
  operator delete(this->_Mypair._Myval2._Myhead);
}

void __fastcall std::list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>>::~list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>>(
        std::list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>> *this)
{
  std::list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>>::clear(this);
  operator delete(this->_Mypair._Myval2._Myhead);
}

void __fastcall std::list<AgPointer<AgStream>>::~list<AgPointer<AgStream>>(std::list<AgPointer<AgStream>> *this)
{
  std::list<AgPointer<AgStream>>::clear(this);
  operator delete(this->_Mypair._Myval2._Myhead);
}

void __fastcall std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>::~pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>(
        std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> *this)
{
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)this);
}

void __fastcall AgXAudio2RuntimeData::~AgXAudio2RuntimeData(AgXAudio2RuntimeData *this)
{
  std::list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>> *p_m_submittedContexts; // rbx

  p_m_submittedContexts = &this->m_submittedContexts;
  std::list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>>::clear(&this->m_submittedContexts);
  operator delete(p_m_submittedContexts->_Mypair._Myval2._Myhead);
  std::list<AgPointer<AgStream>>::clear(&this->m_queuedStreams);
  operator delete(this->m_queuedStreams._Mypair._Myval2._Myhead);
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
}

void __fastcall XAudio2RuntimeCallbacks::OnBufferEnd(XAudio2RuntimeCallbacks *this, void *pBufferContext)
{
  _RTL_CRITICAL_SECTION *v3; // rsi
  __int64 v4; // rdx
  AgPointer<KOFApplication> **v5; // rax
  AgPointer<KOFApplication> *v6; // rbx

  if ( pBufferContext )
  {
    v3 = (_RTL_CRITICAL_SECTION *)*((_QWORD *)pBufferContext + 2);
    EnterCriticalSection(v3);
    v4 = *((_QWORD *)pBufferContext + 2);
    v5 = *(AgPointer<KOFApplication> ***)(v4 + 56);
    v6 = *v5;
    if ( *v5 != (AgPointer<KOFApplication> *)v5 )
    {
      do
      {
        if ( v6[1].m_ref == *(AgReferenceCount **)pBufferContext && v6[2].m_ref == (AgReferenceCount *)v4 )
          break;
        v6 = (AgPointer<KOFApplication> *)v6->m_ref;
      }
      while ( v6 != (AgPointer<KOFApplication> *)v5 );
      if ( v6 != (AgPointer<KOFApplication> *)v5 )
      {
        v6->m_ptr->__vftable = (KOFApplication_vtbl *)v6->m_ref;
        v6->m_ref->m_data = v6->m_ptr;
        --*(_QWORD *)(v4 + 64);
        AgPointer<AgUser>::~AgPointer<AgUser>(v6 + 1);
        operator delete(v6);
      }
    }
    LeaveCriticalSection(v3);
  }
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

std::_List_node<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,void *> *__fastcall std::_List_alloc<std::_List_base_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>>>::_Buynode0(
        std::_List_alloc<std::_List_base_types<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>> > *this,
        std::_List_node<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,void *> *_Next,
        std::_List_node<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,void *> *_Prev)
{
  std::_List_node<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,void *> *result; // rax

  result = (std::_List_node<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,void *> *)operator new(0x28ui64);
  if ( !result )
    invalid_parameter_noinfo_noreturn();
  if ( !_Next )
  {
    _Next = result;
    _Prev = result;
  }
  result->_Next = _Next;
  if ( result != (std::_List_node<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,void *> *)-8i64 )
    result->_Prev = _Prev;
  return result;
}

std::_List_node<AgPointer<AgStream>,void *> *__fastcall std::_List_alloc<std::_List_base_types<AgPointer<AgStream>>>::_Buynode0(
        std::_List_alloc<std::_List_base_types<AgPointer<AgStream>> > *this,
        std::_List_node<AgPointer<AgStream>,void *> *_Next,
        std::_List_node<AgPointer<AgStream>,void *> *_Prev)
{
  std::_List_node<AgPointer<AgStream>,void *> *result; // rax

  result = (std::_List_node<AgPointer<AgStream>,void *> *)operator new(0x20ui64);
  if ( !result )
    invalid_parameter_noinfo_noreturn();
  if ( !_Next )
  {
    _Next = result;
    _Prev = result;
  }
  result->_Next = _Next;
  if ( result != (std::_List_node<AgPointer<AgStream>,void *> *)-8i64 )
    result->_Prev = _Prev;
  return result;
}

void __fastcall AgAudioSourceXAudio2::_createFromFile(AgAudioSourceXAudio2 *this, AgPointer<AgFile> *file)
{
  AgReferenceCount *m_ref; // rdi
  int m_strongCount; // ebx
  int v6; // eax
  AgReferenceCount *v7; // rdi
  int v8; // ebx
  AgReferenceCount *v9; // rdi
  int v10; // ebx
  AgReferenceCount *v11; // rdi
  int v12; // ebx
  AgReferenceCount *v13; // rdi
  int v14; // ebx
  AgReferenceCount *v15; // rdi
  int v16; // ebx
  AgReferenceCount *v17; // rdi
  int v18; // ebx
  int v19; // ebx
  AgPointer<AgStream> result; // [rsp+20h] [rbp-79h] BYREF
  AgPointer<KOFApplication> v21; // [rsp+30h] [rbp-69h] BYREF
  AgPointer<AgStream> v22; // [rsp+40h] [rbp-59h] BYREF
  AgPointer<AgStream> v23; // [rsp+50h] [rbp-49h] BYREF
  AgPointer<AgStream> v24; // [rsp+60h] [rbp-39h] BYREF
  AgPointer<AgStream> v25; // [rsp+70h] [rbp-29h] BYREF
  AgPointer<AgStream> v26; // [rsp+80h] [rbp-19h] BYREF
  AgPointer<AgStream> v27; // [rsp+90h] [rbp-9h] BYREF
  AgPointer<AgStream> v28; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v29; // [rsp+B0h] [rbp+17h]
  unsigned int v30; // [rsp+100h] [rbp+67h] BYREF
  AgPointer<AgFile> *v31; // [rsp+108h] [rbp+6Fh]
  char v32; // [rsp+110h] [rbp+77h] BYREF
  AgPointer<AgStream> *v33; // [rsp+118h] [rbp+7Fh]

  v31 = file;
  v29 = -2i64;
  if ( this->m_internalData->m_type == AgAudioSourceType_Sample )
  {
    AgPointer<AgFile>::operator<AgStream> AgPointer<AgStream>(file, &result);
    v33 = &v22;
    v22 = 0i64;
    m_ref = result.m_ref;
    if ( result.m_ref )
    {
      m_strongCount = result.m_ref->m_strongCount;
      if ( result.m_ref->m_strongCount )
      {
        while ( (unsigned int)AgAtomicCompareExchange(&m_ref->m_strongCount, m_strongCount, m_strongCount + 1) != m_strongCount )
        {
          m_strongCount = m_ref->m_strongCount;
          if ( !m_ref->m_strongCount )
            goto LABEL_9;
        }
        if ( m_strongCount != -1 )
          v22 = result;
      }
    }
LABEL_9:
    v6 = AgWavUtils::startsWith(&v22, 0x46464952u);
    v7 = result.m_ref;
    if ( v6 )
    {
      v33 = &v23;
      v23 = 0i64;
      if ( result.m_ref )
      {
        v8 = result.m_ref->m_strongCount;
        if ( result.m_ref->m_strongCount )
        {
          while ( (unsigned int)AgAtomicCompareExchange(&v7->m_strongCount, v8, v8 + 1) != v8 )
          {
            v8 = v7->m_strongCount;
            if ( !v7->m_strongCount )
              goto LABEL_17;
          }
          if ( v8 != -1 )
            v23 = result;
        }
      }
LABEL_17:
      AgWavUtils::findChunk(&v23, 0x46464952u, &this->m_internalData->m_chunkSize, &v30);
      v33 = (AgPointer<AgStream> *)&v21;
      v21 = 0i64;
      v9 = result.m_ref;
      if ( result.m_ref )
      {
        v10 = result.m_ref->m_strongCount;
        if ( result.m_ref->m_strongCount )
        {
          while ( (unsigned int)AgAtomicCompareExchange(&v9->m_strongCount, v10, v10 + 1) != v10 )
          {
            v10 = v9->m_strongCount;
            if ( !v9->m_strongCount )
              goto LABEL_24;
          }
          if ( v10 != -1 )
            v21 = (AgPointer<KOFApplication>)result;
        }
      }
LABEL_24:
      v22.m_ref = (AgReferenceCount *)&v21;
      ((void (__fastcall *)(KOFApplication *, _QWORD))v21.m_ptr->onExecuteImpl)(v21.m_ptr, v30);
      ((void (__fastcall *)(KOFApplication *, char *, __int64))v21.m_ptr->onJoinThread)(v21.m_ptr, &v32, 4i64);
      AgPointer<AgUser>::~AgPointer<AgUser>(&v21);
      v33 = &v24;
      v24 = 0i64;
      v11 = result.m_ref;
      if ( result.m_ref )
      {
        v12 = result.m_ref->m_strongCount;
        if ( result.m_ref->m_strongCount )
        {
          while ( (unsigned int)AgAtomicCompareExchange(&v11->m_strongCount, v12, v12 + 1) != v12 )
          {
            v12 = v11->m_strongCount;
            if ( !v11->m_strongCount )
              goto LABEL_31;
          }
          if ( v12 != -1 )
            v24 = result;
        }
      }
LABEL_31:
      AgWavUtils::findChunk(&v24, 0x20746D66u, &this->m_internalData->m_chunkSize, &v30);
      v33 = &v25;
      v25 = 0i64;
      v13 = result.m_ref;
      if ( result.m_ref )
      {
        v14 = result.m_ref->m_strongCount;
        if ( result.m_ref->m_strongCount )
        {
          while ( (unsigned int)AgAtomicCompareExchange(&v13->m_strongCount, v14, v14 + 1) != v14 )
          {
            v14 = v13->m_strongCount;
            if ( !v13->m_strongCount )
              goto LABEL_38;
          }
          if ( v14 != -1 )
            v25 = result;
        }
      }
LABEL_38:
      AgWavUtils::readChunkData(
        &v25,
        (unsigned __int8 *)&this->m_internalData->m_waveFormat,
        this->m_internalData->m_chunkSize,
        v30);
      v33 = &v26;
      v26 = 0i64;
      v15 = result.m_ref;
      if ( result.m_ref )
      {
        v16 = result.m_ref->m_strongCount;
        if ( result.m_ref->m_strongCount )
        {
          while ( (unsigned int)AgAtomicCompareExchange(&v15->m_strongCount, v16, v16 + 1) != v16 )
          {
            v16 = v15->m_strongCount;
            if ( !v15->m_strongCount )
              goto LABEL_45;
          }
          if ( v16 != -1 )
            v26 = result;
        }
      }
LABEL_45:
      AgWavUtils::findChunk(&v26, 0x61746164u, &this->m_internalData->m_chunkSize, &v30);
      this->m_internalData->m_data = (unsigned __int8 *)operator new[](this->m_internalData->m_chunkSize);
      v33 = &v27;
      v27 = 0i64;
      v17 = result.m_ref;
      if ( result.m_ref )
      {
        v18 = result.m_ref->m_strongCount;
        if ( result.m_ref->m_strongCount )
        {
          while ( (unsigned int)AgAtomicCompareExchange(&v17->m_strongCount, v18, v18 + 1) != v18 )
          {
            v18 = v17->m_strongCount;
            if ( !v17->m_strongCount )
              goto LABEL_52;
          }
          if ( v18 != -1 )
            v27 = result;
        }
      }
LABEL_52:
      AgWavUtils::readChunkData(&v27, this->m_internalData->m_data, this->m_internalData->m_chunkSize, v30);
      this->m_internalData->m_sampleRate = (float)(int)this->m_internalData->m_waveFormat.Format.nSamplesPerSec;
      this->m_internalData->m_totalTime = (float)(int)this->m_internalData->m_chunkSize
                                        / this->m_internalData->m_sampleRate;
    }
    else
    {
      v33 = &v28;
      v28 = 0i64;
      if ( result.m_ref )
      {
        v19 = result.m_ref->m_strongCount;
        if ( result.m_ref->m_strongCount )
        {
          while ( (unsigned int)AgAtomicCompareExchange(&v7->m_strongCount, v19, v19 + 1) != v19 )
          {
            v19 = v7->m_strongCount;
            if ( !v7->m_strongCount )
              goto LABEL_60;
          }
          if ( v19 != -1 )
            v28 = result;
        }
      }
LABEL_60:
      AgWavUtils::startsWith(&v28, 0x5367674Fu);
    }
    AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&result);
  }
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)file);
}

void __fastcall AgAudioSourceXAudio2::_createFromStream(AgAudioSourceXAudio2 *this, unsigned int sampleRate)
{
  AgAudioSourceData *m_internalData; // r8
  AgXAudio2RuntimeData *v5; // rbx
  AgXAudio2RuntimeData *v6; // rax
  AgXAudio2RuntimeData *v7; // rax

  m_internalData = this->m_internalData;
  v5 = 0i64;
  *(_DWORD *)&m_internalData->m_waveFormat.Format.wBitsPerSample = 16;
  *(_DWORD *)&m_internalData->m_waveFormat.Format.wFormatTag = 65537;
  m_internalData->m_waveFormat.Format.nSamplesPerSec = sampleRate;
  m_internalData->m_waveFormat.Format.nAvgBytesPerSec = 2 * sampleRate;
  m_internalData->m_waveFormat.Format.nBlockAlign = 2;
  v6 = (AgXAudio2RuntimeData *)operator new(0x48ui64);
  if ( v6 )
  {
    AgXAudio2RuntimeData::AgXAudio2RuntimeData(v6);
    v5 = v7;
  }
  this->m_internalData->m_runtimeData = v5;
  this->m_internalData->m_sampleRate = (float)(int)sampleRate;
}

void __fastcall AgAudioSourceXAudio2::_destroy(AgAudioSourceXAudio2 *this, unsigned __int64 a2)
{
  AgAudioSourceData *m_internalData; // rax
  AgXAudio2RuntimeData *m_runtimeData; // rdi

  operator delete(this->m_internalData->m_data, a2);
  m_internalData = this->m_internalData;
  m_runtimeData = m_internalData->m_runtimeData;
  if ( m_runtimeData )
  {
    AgXAudio2RuntimeData::~AgXAudio2RuntimeData(m_internalData->m_runtimeData);
    operator delete(m_runtimeData, 0x48ui64);
  }
  this->m_internalData->m_data = 0i64;
  this->m_internalData->m_runtimeData = 0i64;
}

XAudio2RuntimeCallbacks *__fastcall AgAudioSourceXAudio2::_fetchCallbacks(AgAudioSourceXAudio2 *this)
{
  if ( !this->m_internalData->m_runtimeData )
    return 0i64;
  if ( dword_140A940D0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 40i64) )
  {
    Init_thread_header(&dword_140A940D0);
    if ( dword_140A940D0 == -1 )
    {
      callbacks.__vftable = (XAudio2RuntimeCallbacks_vtbl *)&XAudio2RuntimeCallbacks::`vftable';
      Init_thread_footer(&dword_140A940D0);
    }
  }
  return &callbacks;
}

__int64 __fastcall AgAudioSourceXAudio2::_getNumChannels(AgAudioSourceXAudio2 *this)
{
  return this->m_internalData->m_waveFormat.Format.nChannels;
}

std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> *__fastcall AgAudioSourceXAudio2::_pumpRuntimeStream(
        AgAudioSourceXAudio2 *this)
{
  AgXAudio2RuntimeData *m_runtimeData; // rsi
  std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> *v2; // rax
  AgPointer<KOFApplication> *Next; // rbx
  std::_List_node<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,void *> *Prev; // rbx
  std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> result; // [rsp+38h] [rbp-20h] BYREF
  AgXAudio2RuntimeData *_Val2; // [rsp+60h] [rbp+8h] BYREF

  m_runtimeData = this->m_internalData->m_runtimeData;
  _Val2 = m_runtimeData;
  if ( !m_runtimeData || !m_runtimeData->m_queuedStreams._Mypair._Myval2._Mysize )
    return 0i64;
  EnterCriticalSection((LPCRITICAL_SECTION)m_runtimeData);
  v2 = std::make_pair<AgPointer<AgStream> &,AgXAudio2RuntimeData * &>(
         &result,
         &m_runtimeData->m_queuedStreams._Mypair._Myval2._Myhead->_Next->_Myval,
         &_Val2);
  std::list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>>::push_back(&m_runtimeData->m_submittedContexts, v2);
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&result);
  Next = (AgPointer<KOFApplication> *)m_runtimeData->m_queuedStreams._Mypair._Myval2._Myhead->_Next;
  Next->m_ptr->__vftable = (KOFApplication_vtbl *)Next->m_ref;
  Next->m_ref->m_data = Next->m_ptr;
  --m_runtimeData->m_queuedStreams._Mypair._Myval2._Mysize;
  AgPointer<AgUser>::~AgPointer<AgUser>(Next + 1);
  operator delete(Next);
  Prev = m_runtimeData->m_submittedContexts._Mypair._Myval2._Myhead->_Prev;
  LeaveCriticalSection((LPCRITICAL_SECTION)m_runtimeData);
  return &Prev->_Myval;
}

void __fastcall AgAudioSourceXAudio2::_pushStream(AgAudioSourceXAudio2 *this, AgPointer<AgStream> *stream)
{
  AgXAudio2RuntimeData *m_runtimeData; // rbx
  std::_List_node<AgPointer<AgStream>,void *> *Myhead; // rbp
  AgPointer<AgPlayer> *v6; // rdx
  unsigned __int64 Mysize; // rax

  stream->m_ptr->setPosition(stream->m_ptr, 0i64);
  m_runtimeData = this->m_internalData->m_runtimeData;
  EnterCriticalSection((LPCRITICAL_SECTION)m_runtimeData);
  Myhead = m_runtimeData->m_queuedStreams._Mypair._Myval2._Myhead;
  v6 = std::_List_buy<AgPointer<AgStream>>::_Buynode<AgPointer<AgStream> const &>(
         &m_runtimeData->m_queuedStreams,
         Myhead,
         Myhead->_Prev,
         stream);
  Mysize = m_runtimeData->m_queuedStreams._Mypair._Myval2._Mysize;
  if ( Mysize == 0x7FFFFFFFFFFFFFEi64 )
    std::_Xlength_error("list<T> too long");
  m_runtimeData->m_queuedStreams._Mypair._Myval2._Mysize = Mysize + 1;
  Myhead->_Prev = (std::_List_node<AgPointer<AgStream>,void *> *)v6;
  v6->m_ptr->m_refCount = (AgReferenceCount *)v6;
  LeaveCriticalSection((LPCRITICAL_SECTION)m_runtimeData);
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)stream);
}

void __fastcall std::list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>>::clear(
        std::list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>> *this)
{
  std::_List_node<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,void *> *Next; // rbx
  std::_List_node<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,void *> *v3; // rdi

  Next = this->_Mypair._Myval2._Myhead->_Next;
  this->_Mypair._Myval2._Myhead->_Next = this->_Mypair._Myval2._Myhead;
  this->_Mypair._Myval2._Myhead->_Prev = this->_Mypair._Myval2._Myhead;
  this->_Mypair._Myval2._Mysize = 0i64;
  if ( Next != this->_Mypair._Myval2._Myhead )
  {
    do
    {
      v3 = Next->_Next;
      AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&Next->_Myval);
      operator delete(Next);
      Next = v3;
    }
    while ( v3 != this->_Mypair._Myval2._Myhead );
  }
}

void __fastcall std::list<AgPointer<AgStream>>::clear(std::list<AgPointer<AgStream>> *this)
{
  std::_List_node<AgPointer<AgStream>,void *> *Next; // rbx
  std::_List_node<AgPointer<AgStream>,void *> *v3; // rdi

  Next = this->_Mypair._Myval2._Myhead->_Next;
  this->_Mypair._Myval2._Myhead->_Next = this->_Mypair._Myval2._Myhead;
  this->_Mypair._Myval2._Myhead->_Prev = this->_Mypair._Myval2._Myhead;
  this->_Mypair._Myval2._Mysize = 0i64;
  if ( Next != this->_Mypair._Myval2._Myhead )
  {
    do
    {
      v3 = Next->_Next;
      AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&Next->_Myval);
      operator delete(Next);
      Next = v3;
    }
    while ( v3 != this->_Mypair._Myval2._Myhead );
  }
}

__int64 __fastcall AgWavUtils::findChunk(
        AgPointer<AgStream> *stream,
        unsigned int fourcc,
        unsigned int *dwChunkSize,
        unsigned int *dwChunkDataPosition)
{
  unsigned int v8; // ebp
  AgStream *m_ptr; // rbx
  AgStream_vtbl *v10; // rdi
  __int64 v11; // rax
  unsigned int v12; // ebp
  unsigned int v14; // [rsp+20h] [rbp-48h] BYREF
  int v15; // [rsp+24h] [rbp-44h] BYREF
  char v16[8]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v17; // [rsp+30h] [rbp-38h]

  v17 = -2i64;
  stream->m_ptr->setPosition(stream->m_ptr, 0i64);
  v8 = 0;
  if ( stream->m_ptr->read(stream->m_ptr, (unsigned __int8 *)&v15, 4u) == 4 )
  {
    while ( stream->m_ptr->read(stream->m_ptr, (unsigned __int8 *)&v14, 4u) == 4 )
    {
      if ( v15 == 1179011410 )
      {
        v14 = 4;
        if ( stream->m_ptr->read(stream->m_ptr, (unsigned __int8 *)v16, 4u) != 4 )
          break;
      }
      else
      {
        m_ptr = stream->m_ptr;
        v10 = m_ptr->__vftable;
        v11 = m_ptr->getPosition(m_ptr);
        v10->setPosition(m_ptr, v11 + v14);
      }
      v12 = v8 + 8;
      if ( v15 == fourcc )
      {
        *dwChunkSize = v14;
        *dwChunkDataPosition = v12;
        AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)stream);
        return 1i64;
      }
      v8 = v14 + v12;
      if ( stream->m_ptr->read(stream->m_ptr, (unsigned __int8 *)&v15, 4u) != 4 )
        break;
    }
  }
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)stream);
  return 0i64;
}

__int64 __fastcall AgAudioSourceXAudio2::getChunkSize(AgAudioSourceXAudio2 *this)
{
  return this->m_internalData->m_chunkSize;
}

unsigned __int8 *__fastcall AgAudioSourceXAudio2::getData(AgAudioSourceXAudio2 *this)
{
  return this->m_internalData->m_data;
}

AgPath *__fastcall AgAudioSourceXAudio2::getPath(AgAudioSourceXAudio2 *this)
{
  return &this->m_internalData->m_path;
}

WAVEFORMATEXTENSIBLE *__fastcall AgAudioSourceXAudio2::getWaveFormat(AgAudioSourceXAudio2 *this)
{
  return &this->m_internalData->m_waveFormat;
}

unsigned __int64 __fastcall oggReadHeaderFunc(
        void *ptr,
        unsigned __int64 size,
        unsigned __int64 nmemb,
        void *datasource)
{
  return (*(unsigned int (__fastcall **)(void *, void *, _QWORD))(*(_QWORD *)datasource + 16i64))(
           datasource,
           ptr,
           (unsigned int)(size * nmemb));
}

__int64 __fastcall oggSeekHeaderFunc(void *datasource, __int64 offset, int whence)
{
  __int64 v3; // rdi

  v3 = offset;
  if ( whence == 1 )
  {
    v3 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)datasource + 48i64))(datasource) + offset;
  }
  else if ( whence == 2 )
  {
    v3 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)datasource + 32i64))(datasource) - offset;
  }
  (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)datasource + 40i64))(datasource, v3);
  return 0i64;
}

__int64 __fastcall extension::ExThread::Runnable::onExecuteThread(void *datasource)
{
  return (*(__int64 (__fastcall **)(void *))(*(_QWORD *)datasource + 48i64))(datasource);
}

void __fastcall std::list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>>::push_back(
        std::list<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>> *this,
        std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> *_Val)
{
  std::_List_node<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,void *> *Myhead; // rdi
  std::_List_node<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>,void *> *v4; // r8
  unsigned __int64 Mysize; // rax

  Myhead = this->_Mypair._Myval2._Myhead;
  v4 = std::_List_buy<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>>::_Buynode<std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>>(
         this,
         this->_Mypair._Myval2._Myhead,
         this->_Mypair._Myval2._Myhead->_Prev,
         _Val);
  Mysize = this->_Mypair._Myval2._Mysize;
  if ( Mysize == 0x666666666666665i64 )
    std::_Xlength_error("list<T> too long");
  this->_Mypair._Myval2._Mysize = Mysize + 1;
  Myhead->_Prev = v4;
  v4->_Prev->_Next = v4;
}

__int64 __fastcall AgWavUtils::readChunkData(
        AgPointer<AgStream> *file,
        unsigned __int8 *buffer,
        unsigned int bufferSize,
        unsigned int bufferOffset)
{
  file->m_ptr->setPosition(file->m_ptr, bufferOffset);
  LODWORD(buffer) = ((__int64 (__fastcall *)(AgStream *, unsigned __int8 *, _QWORD))file->m_ptr->read)(
                      file->m_ptr,
                      buffer,
                      bufferSize) == bufferSize;
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)file);
  return (unsigned int)buffer;
}

