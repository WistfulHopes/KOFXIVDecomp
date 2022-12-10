#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft directx sdk (june 2010)/include/xaudio2.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/silverware/git/sdk/audio/agaudioeffects.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/silverware/git/sdk/agcurve.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/silverware/git/src/audio/agaudiochanneldata.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "dev/silverware/git/sdk/audio/agaudiochannel.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/silverware/git/src/platforms/shared/audio/xaudio2/agaudiochanneldataxaudio2.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/silverware/git/src/3rdparty/libvorbis-1.3.5/include/vorbis/vorbisfile.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/silverware/git/sdk/audio/agaudiotypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/silverware/git/src/platforms/shared/audio/xaudio2/agaudiomanagerxaudio2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/microsoft directx sdk (june 2010)/include/xma2defs.h"
#include "dev/silverware/git/sdk/audio/agaudiomanager.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"

std::piecewise_construct_t std::piecewise_construct; // 0x1408652CF
float AgAudioManager::ms_requestedDriverSampleRate; // 0x140A8FDFC
typedef AgAudioSourceXAudio2 AgPlatformAudioSource;
AgAudioManager::AgAudioManager(); // 0x14065D290
std::map<AgAudioChannel * __ptr64,AgPointer<AgAudioChannel>,std::less<AgAudioChannel * __ptr64>,std::allocator<std::pair<AgAudioChannel * __ptr64 const,AgPointer<AgAudioChannel> > > >::~map<AgAudioChannel * __ptr64,AgPointer<AgAudioChannel>,std::less<AgAudioChannel * __ptr64>,std::allocator<std::pair<AgAudioChannel * __ptr64 const,AgPointer<AgAudioChannel> > > >(); // 0x14065D450
std::pair<AgAudioChannel * __ptr64 const,AgPointer<AgAudioChannel> >::~pair<AgAudioChannel * __ptr64 const,AgPointer<AgAudioChannel> >(); // 0x14065D490
AgAudioManager::~AgAudioManager(); // 0x14065D4B0
long AgAudioManager::onSingletonInit(); // 0x14065E270
long AgAudioManager::onSingletonExit(); // 0x14065E110
AgAudioManager * AgAudioManager::createSingleton(); // 0x14065DA80
const float AgAudioManager::getGlobalSampleVolume(); // 0x14065E0F0
const float AgAudioManager::getGlobalStreamVolume(); // 0x14065E100
void AgAudioManager::update(); // 0x14065E290
AgPointer<AgAudioSource> AgAudioManager::createSource(AgPointer<AgFile> file, AgAudioSourceType type, const long is3D, const float volume); // 0x14065DAC0
AgPointer<AgAudioSource> AgAudioManager::createRuntimeSource(const unsigned long sampleRate, const long is3D, const float volume); // 0x14065D9E0
void AgAudioManager::destroySource(AgPointer<AgAudioSource> source); // 0x1406A1FC0
AgPointer<AgAudioChannel> AgAudioManager::allocateChannel(const long is3D, AgAudioSourceType type); // 0x14065D880//decompilation failure at 1408652CF!
//decompilation failure at 140A8FDFC!
std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgAudioChannel * &&>,std::tuple<>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > >,0> > *this,
        const std::piecewise_construct_t *<_Val_0>,
        std::tuple<AgAudioChannel * &&> *<_Val_1>,
        std::tuple<> *<_Val_2>)
{
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *v5; // r9

  v5 = std::_Tree_comp_alloc<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::_Buynode0(this);
  *(_WORD *)&v5->_Color = 0;
  if ( v5 != (std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *)-32i64 )
  {
    v5->_Myval.first = *<_Val_1>->_Myfirst._Val;
    v5->_Myval.second.m_ref = 0i64;
    v5->_Myval.second.m_ptr = 0i64;
  }
  return v5;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > > *__fastcall std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::_Insert_at<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>> &,std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>,void *> *>(
        std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > > *result,
        bool _Addleft,
        std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *_Wherenode,
        std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > *_Val,
        std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *_Node)
{
  unsigned __int64 Mysize; // rax
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *Myhead; // rax
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *v10; // rax
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *Parent; // rcx
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *v12; // r8
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *Left; // rdx
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *Right; // rdx
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *v15; // rdx
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *v16; // rcx
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *v17; // rdx
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *v18; // r8
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *v19; // rcx
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *v20; // rcx
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *v21; // rdx
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *v22; // rcx
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *v23; // rcx
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *v24; // rcx

  Mysize = this->_Mypair._Myval2._Myval2._Mysize;
  if ( Mysize >= 0x492492492492491i64 )
  {
    AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&_Node->_Myval.second);
    operator delete(_Node);
    std::_Xlength_error("map/set<T> too long");
  }
  this->_Mypair._Myval2._Myval2._Mysize = Mysize + 1;
  _Node->_Parent = _Wherenode;
  if ( _Wherenode == this->_Mypair._Myval2._Myval2._Myhead )
  {
    this->_Mypair._Myval2._Myval2._Myhead->_Parent = _Node;
    this->_Mypair._Myval2._Myval2._Myhead->_Left = _Node;
    Myhead = this->_Mypair._Myval2._Myval2._Myhead;
LABEL_9:
    Myhead->_Right = _Node;
    goto LABEL_10;
  }
  if ( !_Addleft )
  {
    _Wherenode->_Right = _Node;
    Myhead = this->_Mypair._Myval2._Myval2._Myhead;
    if ( _Wherenode != this->_Mypair._Myval2._Myval2._Myhead->_Right )
      goto LABEL_10;
    goto LABEL_9;
  }
  _Wherenode->_Left = _Node;
  if ( _Wherenode == this->_Mypair._Myval2._Myval2._Myhead->_Left )
    this->_Mypair._Myval2._Myval2._Myhead->_Left = _Node;
LABEL_10:
  v10 = _Node;
  while ( !v10->_Parent->_Color )
  {
    Parent = v10->_Parent;
    v12 = Parent->_Parent;
    Left = v12->_Left;
    if ( Parent == v12->_Left )
    {
      Right = v12->_Right;
      if ( Right->_Color )
      {
        if ( v10 == Parent->_Right )
        {
          v10 = v10->_Parent;
          v15 = Parent->_Right;
          Parent->_Right = v15->_Left;
          if ( !v15->_Left->_Isnil )
            v15->_Left->_Parent = Parent;
          v15->_Parent = Parent->_Parent;
          if ( Parent == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
          {
            this->_Mypair._Myval2._Myval2._Myhead->_Parent = v15;
          }
          else
          {
            v16 = Parent->_Parent;
            if ( v10 == v16->_Left )
              v16->_Left = v15;
            else
              v16->_Right = v15;
          }
          v15->_Left = v10;
          v10->_Parent = v15;
        }
        v10->_Parent->_Color = 1;
        v10->_Parent->_Parent->_Color = 0;
        v17 = v10->_Parent->_Parent;
        v18 = v17->_Left;
        v17->_Left = v17->_Left->_Right;
        v19 = v18->_Right;
        if ( !v19->_Isnil )
          v19->_Parent = v17;
        v18->_Parent = v17->_Parent;
        if ( v17 == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
        {
          this->_Mypair._Myval2._Myval2._Myhead->_Parent = v18;
        }
        else
        {
          v20 = v17->_Parent;
          if ( v17 == v20->_Right )
            v20->_Right = v18;
          else
            v20->_Left = v18;
        }
        v18->_Right = v17;
LABEL_50:
        v17->_Parent = v18;
        continue;
      }
      Parent->_Color = 1;
      Right->_Color = 1;
      v10->_Parent->_Parent->_Color = 0;
      v10 = v10->_Parent->_Parent;
    }
    else
    {
      if ( Left->_Color )
      {
        if ( v10 == Parent->_Left )
        {
          v10 = v10->_Parent;
          v21 = Parent->_Left;
          Parent->_Left = Parent->_Left->_Right;
          v22 = v21->_Right;
          if ( !v22->_Isnil )
            v22->_Parent = v10;
          v21->_Parent = v10->_Parent;
          if ( v10 == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
          {
            this->_Mypair._Myval2._Myval2._Myhead->_Parent = v21;
          }
          else
          {
            v23 = v10->_Parent;
            if ( v10 == v23->_Right )
              v23->_Right = v21;
            else
              v23->_Left = v21;
          }
          v21->_Right = v10;
          v10->_Parent = v21;
        }
        v10->_Parent->_Color = 1;
        v10->_Parent->_Parent->_Color = 0;
        v17 = v10->_Parent->_Parent;
        v18 = v17->_Right;
        v17->_Right = v18->_Left;
        if ( !v18->_Left->_Isnil )
          v18->_Left->_Parent = v17;
        v18->_Parent = v17->_Parent;
        if ( v17 == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
        {
          this->_Mypair._Myval2._Myval2._Myhead->_Parent = v18;
        }
        else
        {
          v24 = v17->_Parent;
          if ( v17 == v24->_Left )
            v24->_Left = v18;
          else
            v24->_Right = v18;
        }
        v18->_Left = v17;
        goto LABEL_50;
      }
      Parent->_Color = 1;
      Left->_Color = 1;
      v10->_Parent->_Parent->_Color = 0;
      v10 = v10->_Parent->_Parent;
    }
  }
  this->_Mypair._Myval2._Myval2._Myhead->_Parent->_Color = 1;
  result->_Ptr = _Node;
  return result;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > > *__fastcall std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::_Insert_hint<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>> &,std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>,void *> *>(
        std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > > _Where,
        std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > *_Val,
        std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *_Newnode)
{
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *Myhead; // rax
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *Right; // r9
  AgAudioChannel *first; // r12
  bool v12; // cf
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *Ptr; // rax
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *Left; // r9
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *Parent; // rcx
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *v16; // rbx
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgUser> > > > > v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+38h] [rbp-40h]
  std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > >,bool> resulta; // [rsp+40h] [rbp-38h] BYREF

  v18 = -2i64;
  v17._Ptr = 0i64;
  if ( !this->_Mypair._Myval2._Myval2._Mysize )
  {
    std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::_Insert_at<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>> &,std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>,void *> *>(
      this,
      result,
      1,
      this->_Mypair._Myval2._Myval2._Myhead,
      _Val,
      _Newnode);
    return result;
  }
  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  if ( _Where._Ptr == this->_Mypair._Myval2._Myval2._Myhead->_Left )
  {
    if ( _Val->first < _Where._Ptr->_Myval.first )
    {
      std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::_Insert_at<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>> &,std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>,void *> *>(
        this,
        result,
        1,
        _Where._Ptr,
        _Val,
        _Newnode);
      return result;
    }
    goto LABEL_33;
  }
  if ( _Where._Ptr == Myhead )
  {
    Right = Myhead->_Right;
    if ( Right->_Myval.first < _Val->first )
    {
      std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::_Insert_at<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>> &,std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>,void *> *>(
        this,
        result,
        0,
        Right,
        _Val,
        _Newnode);
      return result;
    }
    goto LABEL_33;
  }
  first = _Val->first;
  v12 = _Where._Ptr->_Myval.first < _Val->first;
  if ( _Where._Ptr->_Myval.first > _Val->first )
  {
    Ptr = _Where._Ptr;
    v17._Ptr = (std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *)_Where._Ptr;
    if ( _Where._Ptr->_Isnil )
    {
      Left = (std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *)_Where._Ptr->_Right;
    }
    else
    {
      Left = (std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *)_Where._Ptr->_Left;
      if ( _Where._Ptr->_Left->_Isnil )
      {
        while ( 1 )
        {
          Parent = (std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *)Ptr->_Parent;
          if ( Parent->_Isnil
            || Ptr != (std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *)Parent->_Left )
          {
            break;
          }
          Ptr = Ptr->_Parent;
          v17._Ptr = Parent;
        }
        Left = (std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *)Ptr;
        if ( !Ptr->_Isnil )
          Left = (std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *)Ptr->_Parent;
      }
      else
      {
        while ( !Left->_Right->_Isnil )
          Left = Left->_Right;
      }
    }
    v17._Ptr = Left;
    if ( Left->_Myval.first < (unsigned __int64)first )
    {
      if ( Left->_Right->_Isnil )
        std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::_Insert_at<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>> &,std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>,void *> *>(
          this,
          result,
          0,
          (std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *)Left,
          _Val,
          _Newnode);
      else
        std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::_Insert_at<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>> &,std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>,void *> *>(
          this,
          result,
          1,
          _Where._Ptr,
          _Val,
          _Newnode);
      return result;
    }
    v12 = _Where._Ptr->_Myval.first < first;
  }
  if ( !v12
    || (v17._Ptr = (std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *)_Where._Ptr,
        v16 = (std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *)this->_Mypair._Myval2._Myval2._Myhead,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const,AgPointer<AgLeaderboard>>>>>::operator++(&v17)->_Ptr != v16)
    && (unsigned __int64)first >= v17._Ptr->_Myval.first )
  {
LABEL_33:
    result->_Ptr = (std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *)std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::_Insert_nohint<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>> &,std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>,void *> *>(this, &resulta, 0, _Val, _Newnode)->first;
    return result;
  }
  if ( _Where._Ptr->_Right->_Isnil )
    std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::_Insert_at<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>> &,std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>,void *> *>(
      this,
      result,
      0,
      _Where._Ptr,
      _Val,
      _Newnode);
  else
    std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::_Insert_at<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>> &,std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>,void *> *>(
      this,
      result,
      1,
      (std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *)v17._Ptr,
      _Val,
      _Newnode);
  return result;
}

std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > >,bool> *__fastcall std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::_Insert_nohint<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>> &,std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>,void *> *>(
        std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > >,0> > *this,
        std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > >,bool> *result,
        bool _Leftish,
        std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > *_Val,
        std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *_Newnode)
{
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *Myhead; // r9
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *Parent; // r10
  bool v10; // r8
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *Right; // rbx
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *v13; // rax
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > > resulta; // [rsp+40h] [rbp-18h] BYREF

  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  Parent = this->_Mypair._Myval2._Myval2._Myhead->_Parent;
  v10 = 1;
  while ( !Parent->_Isnil )
  {
    Myhead = Parent;
    if ( _Leftish )
      v10 = Parent->_Myval.first >= _Val->first;
    else
      v10 = _Val->first < Parent->_Myval.first;
    if ( v10 )
      Parent = Parent->_Left;
    else
      Parent = Parent->_Right;
  }
  Right = Myhead;
  if ( v10 )
  {
    if ( Myhead == this->_Mypair._Myval2._Myval2._Myhead->_Left )
    {
      result->first = (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > >)std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::_Insert_at<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>> &,std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>,void *> *>(this, &resulta, 1, Myhead, _Val, _Newnode)->_Ptr;
      result->second = 1;
      return result;
    }
    if ( Myhead->_Isnil )
    {
      Right = Myhead->_Right;
    }
    else if ( Myhead->_Left->_Isnil )
    {
      while ( 1 )
      {
        v13 = Right->_Parent;
        if ( v13->_Isnil || Right != v13->_Left )
          break;
        Right = Right->_Parent;
      }
      if ( !Right->_Isnil )
        Right = Right->_Parent;
    }
    else
    {
      for ( Right = Myhead->_Left; !Right->_Right->_Isnil; Right = Right->_Right )
        ;
    }
  }
  if ( Right->_Myval.first >= _Val->first )
  {
    resulta._Ptr = (std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *)&_Newnode->_Myval;
    AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&_Newnode->_Myval.second);
    operator delete(_Newnode);
    result->first._Ptr = Right;
    result->second = 0;
  }
  else
  {
    result->first = (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > >)std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::_Insert_at<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>> &,std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>,void *> *>(this, &resulta, v10, Myhead, _Val, _Newnode)->_Ptr;
    result->second = 1;
  }
  return result;
}

void __fastcall AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(
        AgPointer<AgPlayer> *this,
        const AgPointer<AgPlayer> *rhs)
{
  AgReferenceCount *m_ref; // rsi
  int m_strongCount; // ebx

  this->m_ref = 0i64;
  this->m_ptr = 0i64;
  m_ref = rhs->m_ref;
  if ( rhs->m_ref )
  {
    m_strongCount = m_ref->m_strongCount;
    if ( m_ref->m_strongCount )
    {
      while ( AgAtomicCompareExchange(&m_ref->m_strongCount, m_strongCount, m_strongCount + 1) != m_strongCount )
      {
        m_strongCount = m_ref->m_strongCount;
        if ( !m_ref->m_strongCount )
          return;
      }
      if ( m_strongCount != -1 )
      {
        this->m_ref = rhs->m_ref;
        this->m_ptr = rhs->m_ptr;
      }
    }
  }
}

void __fastcall AgAudioManager::AgAudioManager(AgAudioManager *this)
{
  this->__vftable = (AgAudioManager_vtbl *)&AgSingleton<AgAudioManager>::`vftable';
  this->__vftable = (AgAudioManager_vtbl *)&AgAudioManager::`vftable';
  this->m_channels._Mypair._Myval2._Myval2._Myhead = 0i64;
  this->m_channels._Mypair._Myval2._Myval2._Mysize = 0i64;
  this->m_channels._Mypair._Myval2._Myval2._Myhead = std::_Tree_comp_alloc<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::_Buyheadnode(&this->m_channels);
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->m_channelsLock);
  this->m_listenerPosition = AgVector3::Zero;
  this->m_globalSampleVolume = 1.0;
  this->m_globalStreamVolume = 1.0;
  AgCurve::AgCurve(&this->m_attenuationCurve);
}

void __fastcall AgPointer<AgAudioEffect>::~AgPointer<AgAudioEffect>(AgPointer<AgAudioEffect> *this)
{
  AgAudioEffect *m_ptr; // rdi
  AgReferenceCount *m_ref; // rbx
  int v3; // esi

  m_ptr = this->m_ptr;
  this->m_ptr = 0i64;
  m_ref = this->m_ref;
  if ( this->m_ref )
  {
    this->m_ref = 0i64;
    v3 = 0;
    if ( !AgAtomicDecrement(&m_ref->m_strongCount) )
    {
      if ( !AgAtomicDecrement(&m_ref->m_weakCount) )
        v3 = 1;
      m_ref->m_data = 0i64;
      if ( m_ptr )
        ((void (__fastcall *)(AgAudioEffect *, __int64))m_ptr->~AgAudioEffect)(m_ptr, 1i64);
      if ( v3 )
        AgReferenceCount::operator delete(m_ref);
    }
  }
}

void __fastcall AgSingleton<AgAudioManager>::~AgSingleton<AgAudioManager>(AgSingleton<AgAudioManager> *this)
{
  this->__vftable = (AgSingleton<AgAudioManager>_vtbl *)&AgSingleton<AgAudioManager>::`vftable';
}

void __fastcall std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::~_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>(
        std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > >,0> > *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > > result; // [rsp+48h] [rbp+10h] BYREF

  std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::~_Tree_comp_alloc<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > >,0> > *this)
{
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::map<AgAudioChannel *,AgPointer<AgAudioChannel>>::~map<AgAudioChannel *,AgPointer<AgAudioChannel>>(
        std::map<AgAudioChannel *,AgPointer<AgAudioChannel>> *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > > result; // [rsp+48h] [rbp+10h] BYREF

  std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>::~pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>(
        std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > *this)
{
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&this->second);
}

void __fastcall AgAudioManager::~AgAudioManager(AgAudioManager *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > > result; // [rsp+50h] [rbp+18h] BYREF

  AgCurve::~AgCurve(&this->m_attenuationCurve);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->m_channelsLock);
  std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::erase(
    &this->m_channels,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > >)this->m_channels._Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > >)this->m_channels._Mypair._Myval2._Myval2._Myhead);
  operator delete(this->m_channels._Mypair._Myval2._Myval2._Myhead);
  this->__vftable = (AgAudioManager_vtbl *)&AgSingleton<AgAudioManager>::`vftable';
}

AgPointer<AgAudioChannel> *__fastcall AgPointer<AgAudioChannel>::operator=(
        AgPointer<AgAudioChannel> *this,
        const AgPointer<AgAudioChannel> *rhs)
{
  AgReferenceCount *m_ref; // rdi
  int m_strongCount; // ebx
  AgReferenceCount *v6; // rbx
  AgAudioChannel *m_ptr; // rdi
  int v8; // ebp
  AgPointer<AgAudioChannel> v10; // [rsp+28h] [rbp-20h]

  v10 = 0i64;
  m_ref = rhs->m_ref;
  if ( rhs->m_ref )
  {
    m_strongCount = m_ref->m_strongCount;
    if ( m_ref->m_strongCount )
    {
      while ( AgAtomicCompareExchange(&m_ref->m_strongCount, m_strongCount, m_strongCount + 1) != m_strongCount )
      {
        m_strongCount = m_ref->m_strongCount;
        if ( !m_ref->m_strongCount )
          goto LABEL_8;
      }
      if ( m_strongCount != -1 )
        v10 = *rhs;
    }
  }
LABEL_8:
  v6 = this->m_ref;
  m_ptr = this->m_ptr;
  *this = v10;
  if ( v6 )
  {
    v8 = 0;
    if ( !AgAtomicDecrement(&v6->m_strongCount) )
    {
      if ( !AgAtomicDecrement(&v6->m_weakCount) )
        v8 = 1;
      v6->m_data = 0i64;
      if ( m_ptr )
        ((void (__fastcall *)(AgAudioChannel *, __int64))m_ptr->~AgAudioChannel)(m_ptr, 1i64);
      if ( v8 )
        AgReferenceCount::operator delete(v6);
    }
  }
  return this;
}

std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgUser> > > > > *__fastcall std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const,AgPointer<AgLeaderboard>>>>>::operator++(
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgUser> > > > > *this)
{
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *Ptr; // rax
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *Right; // rcx
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *j; // rax
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *i; // rax

  Ptr = this->_Ptr;
  if ( this->_Ptr->_Isnil )
    return this;
  Right = Ptr->_Right;
  if ( Right->_Isnil )
  {
    for ( i = Ptr->_Parent; !i->_Isnil; i = i->_Parent )
    {
      if ( this->_Ptr != i->_Right )
        break;
      this->_Ptr = i;
    }
    this->_Ptr = i;
    return this;
  }
  for ( j = Right->_Left; !j->_Isnil; j = j->_Left )
    Right = j;
  this->_Ptr = Right;
  return this;
}

std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::_Buyheadnode(
        std::_Tree_comp_alloc<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > >,0> > *this)
{
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *result; // rax

  result = (std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *)operator new(0x38ui64);
  if ( !result )
    invalid_parameter_noinfo_noreturn();
  result->_Left = result;
  if ( result != (std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *)-8i64 )
    result->_Parent = result;
  if ( result != (std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *)-16i64 )
    result->_Right = result;
  *(_WORD *)&result->_Color = 257;
  return result;
}

std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> **__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::_Buynode0(
        std::_Tree_comp_alloc<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > >,0> > *this)
{
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> **v2; // rdx

  v2 = (std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> **)operator new(0x38ui64);
  if ( !v2 )
    invalid_parameter_noinfo_noreturn();
  *v2 = this->_Mypair._Myval2._Myval2._Myhead;
  if ( v2 != (std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> **)-8i64 )
    v2[1] = this->_Mypair._Myval2._Myval2._Myhead;
  if ( v2 != (std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> **)-16i64 )
    v2[2] = this->_Mypair._Myval2._Myval2._Myhead;
  return v2;
}

void __fastcall std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::_Destroy_if_not_nil(
        std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > >,0> > *this,
        std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *_Newnode)
{
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&_Newnode->_Myval.second);
  operator delete(_Newnode);
}

void __fastcall std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::_Erase(
        std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > >,0> > *this,
        std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *_Rootnode)
{
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *v2; // rdi
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *i; // rbx

  v2 = _Rootnode;
  for ( i = _Rootnode; !i->_Isnil; v2 = i )
  {
    std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::_Erase(
      this,
      i->_Right);
    i = i->_Left;
    AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&v2->_Myval.second);
    operator delete(v2);
  }
}

void __fastcall std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Lrotate(
        std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *this,
        std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *_Wherenode)
{
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Right; // r8
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Parent; // rax

  Right = _Wherenode->_Right;
  _Wherenode->_Right = Right->_Left;
  if ( !Right->_Left->_Isnil )
    Right->_Left->_Parent = _Wherenode;
  Right->_Parent = _Wherenode->_Parent;
  if ( _Wherenode == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
  {
    this->_Mypair._Myval2._Myval2._Myhead->_Parent = Right;
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

void __fastcall std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Rrotate(
        std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *this,
        std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *_Wherenode)
{
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Left; // r8
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Right; // rax
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Parent; // rax

  Left = _Wherenode->_Left;
  _Wherenode->_Left = _Wherenode->_Left->_Right;
  Right = Left->_Right;
  if ( !Right->_Isnil )
    Right->_Parent = _Wherenode;
  Left->_Parent = _Wherenode->_Parent;
  if ( _Wherenode == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
  {
    this->_Mypair._Myval2._Myval2._Myhead->_Parent = Left;
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

AgPointer<AgAudioChannel> *__fastcall AgAudioManager::allocateChannel(
        AgAudioManager *this,
        AgPointer<AgAudioChannel> *result,
        const int is3D,
        AgAudioSourceType type)
{
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *v8; // rax
  AgMutex *p_m_channelsLock; // rsi
  AgAudioChannel *m_ptr; // rdx
  std::map<AgAudioChannel *,AgPointer<AgAudioChannel>> *p_m_channels; // r14
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *Myhead; // rax
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *Parent; // rcx
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *Ptr; // rbx
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *_Newnode; // rax
  AgAudioChannel *v17; // [rsp+38h] [rbp-40h] BYREF
  std::tuple<AgAudioChannel * &&> v18; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19; // [rsp+48h] [rbp-30h]
  int v20; // [rsp+50h] [rbp-28h]
  AgMutex *v21; // [rsp+58h] [rbp-20h]
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > > resulta; // [rsp+80h] [rbp+8h] BYREF
  AgPointer<AgAudioChannel> *v23; // [rsp+88h] [rbp+10h]

  v23 = result;
  v19 = -2i64;
  v8 = (std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *)operator new(0x18ui64);
  resulta._Ptr = v8;
  if ( v8 )
    AgAudioChannelXAudio2::AgAudioChannelXAudio2((AgAudioChannelXAudio2 *)v8, is3D, type);
  AgPointer<AgUser>::AgPointer<AgUser>((AgPointer<AgUser> *)result, (AgUser *)v8);
  p_m_channelsLock = &this->m_channelsLock;
  v21 = &this->m_channelsLock;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_channelsLock);
  v20 = 1;
  m_ptr = result->m_ptr;
  v17 = m_ptr;
  p_m_channels = &this->m_channels;
  Myhead = this->m_channels._Mypair._Myval2._Myval2._Myhead;
  Parent = Myhead->_Parent;
  Ptr = Myhead;
  while ( !Parent->_Isnil )
  {
    if ( Parent->_Myval.first >= m_ptr )
    {
      Ptr = Parent;
      Parent = Parent->_Left;
    }
    else
    {
      Parent = Parent->_Right;
    }
  }
  if ( Ptr == Myhead || m_ptr < Ptr->_Myval.first )
  {
    v18._Myfirst._Val = &v17;
    _Newnode = std::_Tree_comp_alloc<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgAudioChannel * &&>,std::tuple<>>(
                 p_m_channels,
                 &std::piecewise_construct_1,
                 &v18,
                 (std::tuple<> *)&resulta);
    std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::_Insert_hint<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>> &,std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>,void *> *>(
      p_m_channels,
      &resulta,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > >)Ptr,
      &_Newnode->_Myval,
      _Newnode);
    Ptr = resulta._Ptr;
  }
  AgPointer<AgAudioChannel>::operator=(&Ptr->_Myval.second, result);
  LeaveCriticalSection((LPCRITICAL_SECTION)p_m_channelsLock);
  return result;
}

AgPointer<AgAudioSource> *__fastcall AgAudioManager::createRuntimeSource(
        AgAudioManager *this,
        AgPointer<AgAudioSource> *result,
        const unsigned int sampleRate,
        const int is3D,
        const float volume)
{
  AgUser *v8; // rdi
  AgAudioSourceXAudio2 *v9; // rax
  AgUser *v10; // rax

  v8 = 0i64;
  v9 = (AgAudioSourceXAudio2 *)operator new(0x20ui64);
  if ( v9 )
  {
    AgAudioSourceXAudio2::AgAudioSourceXAudio2(v9, Runtime, sampleRate, is3D, volume);
    v8 = v10;
  }
  AgPointer<AgUser>::AgPointer<AgUser>((AgPointer<AgUser> *)result, v8);
  return result;
}

void __fastcall AgAudioManager::createSingleton()
{
  AgAudioManagerXAudio2 *v0; // rax

  v0 = (AgAudioManagerXAudio2 *)operator new(0x180ui64);
  if ( v0 )
    AgAudioManagerXAudio2::AgAudioManagerXAudio2(v0);
}

AgPointer<AgAudioSource> *__fastcall AgAudioManager::createSource(
        AgAudioManager *this,
        AgPointer<AgAudioSource> *result,
        AgPointer<AgFile> *file,
        AgAudioSourceType type,
        const int is3D,
        const float volume)
{
  int v9; // edi
  AgAudioSourceXAudio2 *v10; // rsi
  AgPointer<AgFile> *v11; // rax
  AgAudioSource *v12; // rax
  AgAudioSource *v13; // rsi
  AgReferenceCount *v14; // rax
  AgReferenceCount *m_refCount; // r14
  AgPointer<AgPlayer> v17; // [rsp+50h] [rbp-28h] BYREF

  v9 = 0;
  if ( file->m_ptr )
  {
    v10 = (AgAudioSourceXAudio2 *)operator new(0x20ui64);
    if ( v10 )
    {
      AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(&v17, (const AgPointer<AgPlayer> *)file);
      AgAudioSourceXAudio2::AgAudioSourceXAudio2(v10, v11, type, is3D, volume);
      v13 = v12;
    }
    else
    {
      v13 = 0i64;
    }
    result->m_ref = 0i64;
    result->m_ptr = 0i64;
    if ( v13 )
    {
      if ( !v13->m_refCount )
      {
        v14 = (AgReferenceCount *)AgReferenceCount::operator new(0x10ui64);
        if ( v14 )
        {
          v14->m_strongCount = 1;
          v14->m_weakCount = 1;
          v14->m_data = v13;
        }
        else
        {
          v14 = 0i64;
        }
        v13->m_refCount = v14;
        v9 = 1;
      }
      m_refCount = v13->m_refCount;
      if ( !v9 )
        AgReferenceCount::incRef(v13->m_refCount);
      result->m_ref = m_refCount;
      result->m_ptr = v13;
    }
  }
  else
  {
    result->m_ref = 0i64;
    result->m_ptr = 0i64;
  }
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)file);
  return result;
}

void __fastcall AgSession::pauseUser(AgSession *this, AgPointer<AgUser> *user)
{
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)user);
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > > *__fastcall std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > > _First,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > > _Last)
{
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *Myhead; // rdx
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *v7; // rax
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *Left; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > > *v9; // rax
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *v10; // rax
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *Right; // rdx
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *j; // rcx
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *i; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > > resulta; // [rsp+30h] [rbp+8h] BYREF
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *v15; // [rsp+40h] [rbp+18h]
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *Ptr; // [rsp+48h] [rbp+20h]

  Ptr = _Last._Ptr;
  v15 = _First._Ptr;
  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  if ( _First._Ptr == this->_Mypair._Myval2._Myval2._Myhead->_Left && _Last._Ptr == Myhead )
  {
    std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::_Erase(
      this,
      Myhead->_Parent);
    this->_Mypair._Myval2._Myval2._Myhead->_Parent = this->_Mypair._Myval2._Myval2._Myhead;
    this->_Mypair._Myval2._Myval2._Myhead->_Left = this->_Mypair._Myval2._Myval2._Myhead;
    this->_Mypair._Myval2._Myval2._Myhead->_Right = this->_Mypair._Myval2._Myval2._Myhead;
    v7 = this->_Mypair._Myval2._Myval2._Myhead;
    this->_Mypair._Myval2._Myval2._Mysize = 0i64;
    Left = v7->_Left;
    v9 = result;
    result->_Ptr = Left;
  }
  else
  {
    if ( _First._Ptr != _Last._Ptr )
    {
      do
      {
        v10 = _First._Ptr;
        if ( !_First._Ptr->_Isnil )
        {
          Right = _First._Ptr->_Right;
          if ( Right->_Isnil )
          {
            for ( i = _First._Ptr->_Parent; !i->_Isnil; i = i->_Parent )
            {
              if ( _First._Ptr != i->_Right )
                break;
              v15 = i;
              _First._Ptr = i;
            }
            v15 = i;
          }
          else
          {
            for ( j = Right->_Left; !j->_Isnil; j = j->_Left )
              Right = j;
            v15 = Right;
          }
        }
        std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::erase(
          this,
          &resulta,
          (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > >)v10);
        _First._Ptr = v15;
      }
      while ( v15 != Ptr );
    }
    v9 = result;
    result->_Ptr = _First._Ptr;
  }
  return v9;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > > *__fastcall std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > > _Where)
{
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *v5; // rsi
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *Right; // rax
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *j; // rax
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *i; // rax
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *Left; // rdi
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *Parent; // rbx
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *v11; // rcx
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *k; // rax
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *v13; // rcx
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *m; // rax
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > > *v15; // rax
  char Color; // cl
  bool n; // zf
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *v18; // rdx
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *v19; // r8
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v20; // rcx
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *v21; // rcx
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *v22; // rax
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *v23; // rcx
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *v24; // rax
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *v25; // rax
  unsigned __int64 Mysize; // rax
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *Ptr; // [rsp+60h] [rbp+18h]

  Ptr = _Where._Ptr;
  v5 = _Where._Ptr;
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
  if ( v5->_Left->_Isnil )
  {
    Left = v5->_Right;
  }
  else if ( v5->_Right->_Isnil )
  {
    Left = v5->_Left;
  }
  else
  {
    Left = _Where._Ptr->_Right;
    if ( _Where._Ptr != v5 )
    {
      v5->_Left->_Parent = _Where._Ptr;
      _Where._Ptr->_Left = v5->_Left;
      if ( _Where._Ptr == v5->_Right )
      {
        Parent = _Where._Ptr;
      }
      else
      {
        Parent = _Where._Ptr->_Parent;
        if ( !Left->_Isnil )
          Left->_Parent = Parent;
        Parent->_Left = Left;
        _Where._Ptr->_Right = v5->_Right;
        v5->_Right->_Parent = _Where._Ptr;
      }
      if ( this->_Mypair._Myval2._Myval2._Myhead->_Parent == v5 )
      {
        this->_Mypair._Myval2._Myval2._Myhead->_Parent = _Where._Ptr;
      }
      else
      {
        v15 = (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > > *)v5->_Parent;
        if ( v15->_Ptr == v5 )
          v15->_Ptr = _Where._Ptr;
        else
          v15[2]._Ptr = _Where._Ptr;
      }
      _Where._Ptr->_Parent = v5->_Parent;
      Color = _Where._Ptr->_Color;
      _Where._Ptr->_Color = v5->_Color;
      v5->_Color = Color;
      goto LABEL_45;
    }
  }
  Parent = v5->_Parent;
  if ( !Left->_Isnil )
    Left->_Parent = Parent;
  if ( this->_Mypair._Myval2._Myval2._Myhead->_Parent == v5 )
  {
    this->_Mypair._Myval2._Myval2._Myhead->_Parent = Left;
  }
  else if ( Parent->_Left == v5 )
  {
    Parent->_Left = Left;
  }
  else
  {
    Parent->_Right = Left;
  }
  if ( this->_Mypair._Myval2._Myval2._Myhead->_Left == v5 )
  {
    if ( Left->_Isnil )
    {
      v11 = Parent;
    }
    else
    {
      v11 = Left;
      for ( k = Left->_Left; !k->_Isnil; k = k->_Left )
        v11 = k;
    }
    this->_Mypair._Myval2._Myval2._Myhead->_Left = v11;
  }
  if ( this->_Mypair._Myval2._Myval2._Myhead->_Right == v5 )
  {
    if ( Left->_Isnil )
    {
      v13 = Parent;
    }
    else
    {
      v13 = Left;
      for ( m = Left->_Right; !m->_Isnil; m = m->_Right )
        v13 = m;
    }
    this->_Mypair._Myval2._Myval2._Myhead->_Right = v13;
  }
LABEL_45:
  if ( v5->_Color != 1 )
    goto LABEL_84;
  for ( n = Left == this->_Mypair._Myval2._Myval2._Myhead->_Parent;
        !n;
        n = v18 == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
  {
    v18 = Parent;
    v19 = Parent;
    if ( Left->_Color != 1 )
      break;
    v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Left;
    if ( Left == Parent->_Left )
    {
      v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Right;
      if ( !v20->_Color )
      {
        v20->_Color = 1;
        Parent->_Color = 0;
        v21 = Parent->_Right;
        Parent->_Right = v21->_Left;
        if ( !v21->_Left->_Isnil )
          v21->_Left->_Parent = Parent;
        v21->_Parent = Parent->_Parent;
        if ( Parent == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
        {
          this->_Mypair._Myval2._Myval2._Myhead->_Parent = v21;
        }
        else
        {
          v22 = Parent->_Parent;
          if ( Parent == v22->_Left )
            v22->_Left = v21;
          else
            v22->_Right = v21;
        }
        v21->_Left = Parent;
        Parent->_Parent = v21;
        v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Right;
      }
      if ( !v20->_Isnil )
      {
        if ( v20->_Left->_Color != 1 || v20->_Right->_Color != 1 )
        {
          if ( v20->_Right->_Color == 1 )
          {
            v20->_Left->_Color = 1;
            v20->_Color = 0;
            std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Rrotate(
              (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
              v20);
            v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Right;
          }
          v20->_Color = Parent->_Color;
          Parent->_Color = 1;
          v20->_Right->_Color = 1;
          std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Lrotate(
            (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
            (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent);
          break;
        }
LABEL_75:
        v20->_Color = 0;
      }
    }
    else
    {
      if ( !v20->_Color )
      {
        v20->_Color = 1;
        Parent->_Color = 0;
        v23 = Parent->_Left;
        Parent->_Left = Parent->_Left->_Right;
        v24 = v23->_Right;
        if ( !v24->_Isnil )
          v24->_Parent = Parent;
        v23->_Parent = Parent->_Parent;
        if ( Parent == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
        {
          this->_Mypair._Myval2._Myval2._Myhead->_Parent = v23;
        }
        else
        {
          v25 = Parent->_Parent;
          if ( Parent == v25->_Right )
            v25->_Right = v23;
          else
            v25->_Left = v23;
        }
        v23->_Right = Parent;
        Parent->_Parent = v23;
        v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Left;
      }
      if ( !v20->_Isnil )
      {
        if ( v20->_Right->_Color != 1 || v20->_Left->_Color != 1 )
        {
          if ( v20->_Left->_Color == 1 )
          {
            v20->_Right->_Color = 1;
            v20->_Color = 0;
            std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Lrotate(
              (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
              v20);
            v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Left;
          }
          v20->_Color = Parent->_Color;
          Parent->_Color = 1;
          v20->_Left->_Color = 1;
          std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Rrotate(
            (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
            (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent);
          break;
        }
        goto LABEL_75;
      }
    }
    Parent = Parent->_Parent;
    Left = v19;
  }
  Left->_Color = 1;
LABEL_84:
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&v5->_Myval.second);
  operator delete(v5);
  Mysize = this->_Mypair._Myval2._Myval2._Mysize;
  if ( Mysize )
    this->_Mypair._Myval2._Myval2._Mysize = Mysize - 1;
  result->_Ptr = Ptr;
  return result;
}

float __fastcall AgAudioManager::getDriverSampleRate(AgAudioManager *this)
{
  return FLOAT_44100_0;
}

float __fastcall AgAudioManager::getGlobalSampleVolume(AgAudioManager *this)
{
  return this->m_globalSampleVolume;
}

float __fastcall AgAudioManager::getGlobalStreamVolume(AgAudioManager *this)
{
  return this->m_globalStreamVolume;
}

__int64 __fastcall AgAudioManager::onSingletonExit(AgAudioManager *this)
{
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *Myhead; // rax
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *Left; // rbx
  AgAudioChannel *m_ptr; // rcx
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *Right; // rax
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *j; // rax
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *i; // rax
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *Parent; // rdi
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *k; // rbx

  AgUser::isSignedIn((Concurrency::details::ThreadInternalContext *)this);
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_channelsLock);
  Myhead = this->m_channels._Mypair._Myval2._Myval2._Myhead;
  Left = Myhead->_Left;
  if ( Myhead->_Left != Myhead )
  {
    do
    {
      m_ptr = Left->_Myval.second.m_ptr;
      if ( !Left->_Isnil )
      {
        Right = Left->_Right;
        if ( Right->_Isnil )
        {
          for ( i = Left->_Parent; !i->_Isnil; i = i->_Parent )
          {
            if ( Left != i->_Right )
              break;
            Left = i;
          }
          Left = i;
        }
        else
        {
          Left = Left->_Right;
          for ( j = Right->_Left; !j->_Isnil; j = j->_Left )
            Left = j;
        }
      }
      if ( m_ptr )
        AgAudioChannel::stop(m_ptr);
    }
    while ( Left != this->m_channels._Mypair._Myval2._Myval2._Myhead );
  }
  Parent = this->m_channels._Mypair._Myval2._Myval2._Myhead->_Parent;
  for ( k = Parent; !k->_Isnil; Parent = k )
  {
    std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::_Erase(
      &this->m_channels,
      k->_Right);
    k = k->_Left;
    AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&Parent->_Myval.second);
    operator delete(Parent);
  }
  this->m_channels._Mypair._Myval2._Myval2._Myhead->_Parent = this->m_channels._Mypair._Myval2._Myval2._Myhead;
  this->m_channels._Mypair._Myval2._Myval2._Myhead->_Left = this->m_channels._Mypair._Myval2._Myval2._Myhead;
  this->m_channels._Mypair._Myval2._Myval2._Myhead->_Right = this->m_channels._Mypair._Myval2._Myval2._Myhead;
  this->m_channels._Mypair._Myval2._Myval2._Mysize = 0i64;
  AgAudioManagerXAudio2::platformPostFinalize((AgAudioManagerXAudio2 *)this);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_channelsLock);
  return 1i64;
}

__int64 __fastcall AgAudioManager::onSingletonInit(AgAudioManager *this)
{
  AgAudioManagerXAudio2::platformInitialize((AgAudioManagerXAudio2 *)this);
  return 1i64;
}

void __fastcall AgAudioManager::update(AgAudioManager *this)
{
  AgMutex *p_m_channelsLock; // rdi
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *Myhead; // rax
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *Left; // rbx
  AgAudioChannel *m_ptr; // rdi
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *Right; // rax
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *j; // rax
  std::_Tree_node<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> >,void *> *i; // rax
  AgMutex *v9; // [rsp+30h] [rbp-18h]
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > > result; // [rsp+50h] [rbp+8h] BYREF

  p_m_channelsLock = &this->m_channelsLock;
  v9 = &this->m_channelsLock;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_channelsLock);
  Myhead = this->m_channels._Mypair._Myval2._Myval2._Myhead;
  Left = Myhead->_Left;
  if ( Myhead->_Left != Myhead )
  {
    do
    {
      m_ptr = Left->_Myval.second.m_ptr;
      if ( !m_ptr
        || (AgAudioChannel::update(Left->_Myval.second.m_ptr, this), AgAudioChannel::getIsFinished(m_ptr))
        && m_ptr->m_refCount->m_strongCount == 1 )
      {
        Left = std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel>>>,0>>::erase(
                 &this->m_channels,
                 &result,
                 (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > >)Left)->_Ptr;
      }
      else if ( !Left->_Isnil )
      {
        Right = Left->_Right;
        if ( Right->_Isnil )
        {
          for ( i = Left->_Parent; !i->_Isnil; i = i->_Parent )
          {
            if ( Left != i->_Right )
              break;
            Left = i;
          }
          Left = i;
        }
        else
        {
          Left = Left->_Right;
          for ( j = Right->_Left; !j->_Isnil; j = j->_Left )
            Left = j;
        }
      }
    }
    while ( Left != this->m_channels._Mypair._Myval2._Myval2._Myhead );
    p_m_channelsLock = v9;
  }
  AgAudioManagerXAudio2::platformUpdate((AgAudioManagerXAudio2 *)this);
  LeaveCriticalSection((LPCRITICAL_SECTION)p_m_channelsLock);
}

