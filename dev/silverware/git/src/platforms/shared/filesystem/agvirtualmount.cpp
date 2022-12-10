#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/set"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/silverware/git/sdk/memory/agbuffer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/silverware/git/sdk/memory/agbufferstream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/silverware/git/src/platforms/shared/filesystem/agvirtualmount.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"

std::piecewise_construct_t std::piecewise_construct; // 0x14087108B
AgMemoryPoolLocked AgBufferStream<AgBuffer<AgAllocator<1> > >::s_pool; // 0x140A2A3A0
void(*??s_pool$initializer$@?$AgBufferStream@V?$AgBuffer@V?$AgAllocator@$00@@@@@@0P6AXXZEA@@3P6AXXZEA)(); // 0x1407406F8
AgVirtualMount::AgVirtualMount(const AgString & mountPoint, AgPointer<AgUser> user); // 0x14069B1E0
std::map<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> > >::~map<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> > >(); // 0x14069B360
std::pair<AgPath const ,AgVirtualMount::FileData>::~pair<AgPath const ,AgVirtualMount::FileData>(); // 0x14069B3A0
std::set<AgPath,std::less<AgPath>,std::allocator<AgPath> >::~set<AgPath,std::less<AgPath>,std::allocator<AgPath> >(); // 0x14069B3E0
AgVirtualMount::~AgVirtualMount(); // 0x14069B420
AgVirtualMount::FileData::~FileData(); // 0x14069B4C0
AgPointer<AgFile> AgVirtualMount::open(const AgPath & path, unsigned long accessMode); // 0x14069C9B0
long AgVirtualMount::remove(const AgPath & path); // 0x14069CBF0
long AgVirtualMount::exists(const AgPath & path); // 0x14069C6D0
AgPointer<AgDirectory> AgVirtualMount::openDirectory(const AgPath & path, AgStringRef filter, unsigned long filterMask); // 0x14069CBC0
long AgVirtualMount::createDirectory(const AgPath & path, long recursive); // 0x1400482A0
long AgVirtualMount::directoryExists(const AgPath & path); // 0x14069BBD0
void AgVirtualMount::mount(); // 0x14002E7C0
AgVirtualMount::FileData * AgVirtualMount::getFileData(const AgPath & path, unsigned long accessMode); // 0x14069C790
void AgVirtualMount::eraseAllFiles(); // 0x14069C600
void AgVirtualMount::serialize(AgPointer<AgStream> stream); // 0x14069CCF0
void AgVirtualMount::deserialize(AgPointer<AgStream> stream); // 0x14069B7D0//decompilation failure at 14087108B!
//decompilation failure at 140A2A3A0!
//decompilation failure at 1407406F8!
std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgPath const &>,std::tuple<>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> >,0> > *this,
        const std::piecewise_construct_t *<_Val_0>,
        std::tuple<AgPath const &> *<_Val_1>,
        std::tuple<> *<_Val_2>)
{
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *v5; // rax
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *v6; // rdi
  std::pair<AgPath const ,AgVirtualMount::FileData> *p_Myval; // rbx

  v5 = std::_Tree_comp_alloc<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::_Buynode0(this);
  v6 = v5;
  *(_WORD *)&v5->_Color = 0;
  p_Myval = &v5->_Myval;
  if ( v5 != (std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *)-32i64 )
  {
    AgString::AgString(&v5->_Myval.first.m_path, &<_Val_1>->_Myfirst._Val->m_path);
    p_Myval->second.m_data.m_ref = 0i64;
    p_Myval->second.m_data.m_ptr = 0i64;
    p_Myval->second.m_changed = 0;
  }
  return v6;
}

std::_Tree_node<AgPath,void *> *__fastcall std::_Tree_comp_alloc<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0>>::_Buynode<AgPath>(
        std::_Tree_comp_alloc<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0> > *this,
        AgPath *<_Val_0>)
{
  std::_Tree_node<AgPath,void *> *v3; // rbx

  v3 = std::_Tree_comp_alloc<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0>>::_Buynode0(this);
  *(_WORD *)&v3->_Color = 0;
  if ( v3 != (std::_Tree_node<AgPath,void *> *)-32i64 )
    AgString::AgString(&v3->_Myval.m_path, &<_Val_0>->m_path);
  return v3;
}

__int64 __fastcall std::_Distance1<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,AgPointer<AgController>>>>>>(
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > > _First,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > > _Last,
        std::input_iterator_tag __formal)
{
  __int64 v3; // r9
  std::_Tree_node<AgPath,void *> *Right; // rax
  std::_Tree_node<AgPath,void *> *j; // rax
  std::_Tree_node<AgPath,void *> *i; // r8

  v3 = 0i64;
  while ( _First._Ptr != _Last._Ptr )
  {
    ++v3;
    if ( !_First._Ptr->_Isnil )
    {
      Right = _First._Ptr->_Right;
      if ( Right->_Isnil )
      {
        for ( i = _First._Ptr->_Parent; !i->_Isnil; i = i->_Parent )
        {
          if ( _First._Ptr != i->_Right )
            break;
          _First._Ptr = i;
        }
        _First._Ptr = i;
      }
      else
      {
        _First._Ptr = _First._Ptr->_Right;
        for ( j = Right->_Left; !j->_Isnil; j = j->_Left )
          _First._Ptr = j;
      }
    }
  }
  return v3;
}

std::pair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > >,std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > > > *__fastcall std::_Tree<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0>>::_Eqrange<AgPath>(
        std::_Tree<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0> > *this,
        std::pair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > >,std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > > > *result,
        const AgPath *_Keyval)
{
  std::_Tree_node<AgPath,void *> *Myhead; // r14
  std::_Tree_node<AgPath,void *> *v7; // rdi
  std::_Tree_node<AgPath,void *> *Parent; // rbx
  std::_Tree_node<AgPath,void *> **p_Parent; // rbx
  std::_Tree_node<AgPath,void *> *v10; // rbx
  std::pair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > >,std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > > > *v11; // rax

  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  v7 = this->_Mypair._Myval2._Myval2._Myhead;
  Parent = this->_Mypair._Myval2._Myval2._Myhead->_Parent;
  while ( !Parent->_Isnil )
  {
    if ( operator<(&Parent->_Myval.m_path, &_Keyval->m_path) )
    {
      Parent = Parent->_Right;
    }
    else
    {
      if ( v7->_Isnil && operator<(&_Keyval->m_path, &Parent->_Myval.m_path) )
        v7 = Parent;
      Myhead = Parent;
      Parent = Parent->_Left;
    }
  }
  if ( v7->_Isnil )
    p_Parent = &this->_Mypair._Myval2._Myval2._Myhead->_Parent;
  else
    p_Parent = &v7->_Left;
  v10 = *p_Parent;
  while ( !v10->_Isnil )
  {
    if ( operator<(&_Keyval->m_path, &v10->_Myval.m_path) )
    {
      v7 = v10;
      v10 = v10->_Left;
    }
    else
    {
      v10 = v10->_Right;
    }
  }
  v11 = result;
  result->first._Ptr = Myhead;
  result->second._Ptr = v7;
  return v11;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > > *__fastcall std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::_Insert_at<std::pair<AgPath const,AgVirtualMount::FileData> &,std::_Tree_node<std::pair<AgPath const,AgVirtualMount::FileData>,void *> *>(
        std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > > *result,
        bool _Addleft,
        std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *_Wherenode,
        std::pair<AgPath const ,AgVirtualMount::FileData> *_Val,
        std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *_Node)
{
  unsigned __int64 Mysize; // rax
  unsigned __int64 v9; // rdx
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *Myhead; // rax
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *v11; // rax
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *Parent; // rcx
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *v13; // r8
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *Left; // rdx
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *Right; // rdx
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *v16; // rdx
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *v17; // rcx
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *v18; // rdx
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *v19; // r8
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *v20; // rcx
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *v21; // rcx
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *v22; // rdx
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *v23; // rcx
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *v24; // rcx
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *v25; // rcx

  Mysize = this->_Mypair._Myval2._Myval2._Mysize;
  if ( Mysize >= 0x38E38E38E38E38Di64 )
  {
    AgPointer<AgBuffer<AgAllocator<1>>>::~AgPointer<AgBuffer<AgAllocator<1>>>(&_Node->_Myval.second.m_data);
    AgString::~AgString(&_Node->_Myval.first.m_path, v9);
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
  v11 = _Node;
  while ( !v11->_Parent->_Color )
  {
    Parent = v11->_Parent;
    v13 = Parent->_Parent;
    Left = v13->_Left;
    if ( Parent == v13->_Left )
    {
      Right = v13->_Right;
      if ( Right->_Color )
      {
        if ( v11 == Parent->_Right )
        {
          v11 = v11->_Parent;
          v16 = Parent->_Right;
          Parent->_Right = v16->_Left;
          if ( !v16->_Left->_Isnil )
            v16->_Left->_Parent = Parent;
          v16->_Parent = Parent->_Parent;
          if ( Parent == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
          {
            this->_Mypair._Myval2._Myval2._Myhead->_Parent = v16;
          }
          else
          {
            v17 = Parent->_Parent;
            if ( v11 == v17->_Left )
              v17->_Left = v16;
            else
              v17->_Right = v16;
          }
          v16->_Left = v11;
          v11->_Parent = v16;
        }
        v11->_Parent->_Color = 1;
        v11->_Parent->_Parent->_Color = 0;
        v18 = v11->_Parent->_Parent;
        v19 = v18->_Left;
        v18->_Left = v18->_Left->_Right;
        v20 = v19->_Right;
        if ( !v20->_Isnil )
          v20->_Parent = v18;
        v19->_Parent = v18->_Parent;
        if ( v18 == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
        {
          this->_Mypair._Myval2._Myval2._Myhead->_Parent = v19;
        }
        else
        {
          v21 = v18->_Parent;
          if ( v18 == v21->_Right )
            v21->_Right = v19;
          else
            v21->_Left = v19;
        }
        v19->_Right = v18;
LABEL_50:
        v18->_Parent = v19;
        continue;
      }
      Parent->_Color = 1;
      Right->_Color = 1;
      v11->_Parent->_Parent->_Color = 0;
      v11 = v11->_Parent->_Parent;
    }
    else
    {
      if ( Left->_Color )
      {
        if ( v11 == Parent->_Left )
        {
          v11 = v11->_Parent;
          v22 = Parent->_Left;
          Parent->_Left = Parent->_Left->_Right;
          v23 = v22->_Right;
          if ( !v23->_Isnil )
            v23->_Parent = v11;
          v22->_Parent = v11->_Parent;
          if ( v11 == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
          {
            this->_Mypair._Myval2._Myval2._Myhead->_Parent = v22;
          }
          else
          {
            v24 = v11->_Parent;
            if ( v11 == v24->_Right )
              v24->_Right = v22;
            else
              v24->_Left = v22;
          }
          v22->_Right = v11;
          v11->_Parent = v22;
        }
        v11->_Parent->_Color = 1;
        v11->_Parent->_Parent->_Color = 0;
        v18 = v11->_Parent->_Parent;
        v19 = v18->_Right;
        v18->_Right = v19->_Left;
        if ( !v19->_Left->_Isnil )
          v19->_Left->_Parent = v18;
        v19->_Parent = v18->_Parent;
        if ( v18 == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
        {
          this->_Mypair._Myval2._Myval2._Myhead->_Parent = v19;
        }
        else
        {
          v25 = v18->_Parent;
          if ( v18 == v25->_Left )
            v25->_Left = v19;
          else
            v25->_Right = v19;
        }
        v19->_Left = v18;
        goto LABEL_50;
      }
      Parent->_Color = 1;
      Left->_Color = 1;
      v11->_Parent->_Parent->_Color = 0;
      v11 = v11->_Parent->_Parent;
    }
  }
  this->_Mypair._Myval2._Myval2._Myhead->_Parent->_Color = 1;
  result->_Ptr = _Node;
  return result;
}

std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > > *__fastcall std::_Tree<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0>>::_Insert_at<AgPath,std::_Nil>(
        std::_Tree<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0> > *this,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > > *result,
        bool _Addleft,
        std::_Tree_node<AgPath,void *> *_Wherenode,
        AgPath *_Val)
{
  std::_Tree_node<AgPath,void *> *v9; // rax
  std::_Tree_node<AgPath,void *> *v10; // r9
  std::_Tree_node<AgPath,void *> *Parent; // rcx
  std::_Tree_node<AgPath,void *> *v12; // r8
  std::_Tree_node<AgPath,void *> *Left; // rdx
  std::_Tree_node<AgPath,void *> *Right; // rdx
  std::_Tree_node<AgPath,void *> *v15; // rdx
  std::_Tree_node<AgPath,void *> *v16; // rcx
  std::_Tree_node<AgPath,void *> *v17; // rdx
  std::_Tree_node<AgPath,void *> *v18; // r8
  std::_Tree_node<AgPath,void *> *v19; // rcx
  std::_Tree_node<AgPath,void *> *v20; // rcx
  std::_Tree_node<AgPath,void *> *v21; // rdx
  std::_Tree_node<AgPath,void *> *v22; // rcx
  std::_Tree_node<AgPath,void *> *v23; // rcx
  std::_Tree_node<AgPath,void *> *v24; // rcx
  std::_Tree_node<AgPath,void *> *v25; // rcx
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > > *v26; // rax

  if ( this->_Mypair._Myval2._Myval2._Mysize >= 0x555555555555554i64 )
    std::_Xlength_error("map/set<T> too long");
  v9 = std::_Tree_comp_alloc<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0>>::_Buynode<AgPath>(
         this,
         _Val);
  ++this->_Mypair._Myval2._Myval2._Mysize;
  v10 = v9;
  v9->_Parent = _Wherenode;
  if ( _Wherenode == this->_Mypair._Myval2._Myval2._Myhead )
  {
    this->_Mypair._Myval2._Myval2._Myhead->_Parent = v9;
    this->_Mypair._Myval2._Myval2._Myhead->_Left = v9;
    this->_Mypair._Myval2._Myval2._Myhead->_Right = v9;
  }
  else if ( _Addleft )
  {
    _Wherenode->_Left = v9;
    if ( _Wherenode == this->_Mypair._Myval2._Myval2._Myhead->_Left )
      this->_Mypair._Myval2._Myval2._Myhead->_Left = v9;
  }
  else
  {
    _Wherenode->_Right = v9;
    if ( _Wherenode == this->_Mypair._Myval2._Myval2._Myhead->_Right )
      this->_Mypair._Myval2._Myval2._Myhead->_Right = v9;
  }
  while ( !v9->_Parent->_Color )
  {
    Parent = v9->_Parent;
    v12 = Parent->_Parent;
    Left = v12->_Left;
    if ( Parent == v12->_Left )
    {
      Right = v12->_Right;
      if ( Right->_Color )
      {
        if ( v9 == Parent->_Right )
        {
          v15 = Parent->_Right;
          v9 = v9->_Parent;
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
            if ( v9 == v16->_Left )
              v16->_Left = v15;
            else
              v16->_Right = v15;
          }
          v15->_Left = v9;
          v9->_Parent = v15;
        }
        v9->_Parent->_Color = 1;
        v9->_Parent->_Parent->_Color = 0;
        v17 = v9->_Parent->_Parent;
        v18 = v17->_Left;
        v17->_Left = v17->_Left->_Right;
        v19 = v18->_Right;
        if ( !v19->_Isnil )
          v19->_Parent = v17;
        v18->_Parent = v17->_Parent;
        if ( v17 == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
        {
          this->_Mypair._Myval2._Myval2._Myhead->_Parent = v18;
          v18->_Right = v17;
        }
        else
        {
          v20 = v17->_Parent;
          if ( v17 == v20->_Right )
            v20->_Right = v18;
          else
            v20->_Left = v18;
          v18->_Right = v17;
        }
LABEL_49:
        v17->_Parent = v18;
        continue;
      }
      Parent->_Color = 1;
      Right->_Color = 1;
      v9->_Parent->_Parent->_Color = 0;
      v9 = v9->_Parent->_Parent;
    }
    else
    {
      if ( Left->_Color )
      {
        if ( v9 == Parent->_Left )
        {
          v21 = Parent->_Left;
          v9 = v9->_Parent;
          Parent->_Left = Parent->_Left->_Right;
          v22 = v21->_Right;
          if ( !v22->_Isnil )
            v22->_Parent = v9;
          v21->_Parent = v9->_Parent;
          if ( v9 == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
          {
            this->_Mypair._Myval2._Myval2._Myhead->_Parent = v21;
          }
          else
          {
            v23 = v9->_Parent;
            if ( v9 == v23->_Right )
              v23->_Right = v21;
            else
              v23->_Left = v21;
          }
          v21->_Right = v9;
          v9->_Parent = v21;
        }
        v9->_Parent->_Color = 1;
        v9->_Parent->_Parent->_Color = 0;
        v17 = v9->_Parent->_Parent;
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
        goto LABEL_49;
      }
      Parent->_Color = 1;
      Left->_Color = 1;
      v9->_Parent->_Parent->_Color = 0;
      v9 = v9->_Parent->_Parent;
    }
  }
  v25 = this->_Mypair._Myval2._Myval2._Myhead->_Parent;
  v26 = result;
  result->_Ptr = v10;
  v25->_Color = 1;
  return v26;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > > *__fastcall std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::_Insert_hint<std::pair<AgPath const,AgVirtualMount::FileData> &,std::_Tree_node<std::pair<AgPath const,AgVirtualMount::FileData>,void *> *>(
        std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > > _Where,
        std::pair<AgPath const ,AgVirtualMount::FileData> *_Val,
        std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *_Newnode)
{
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *Myhead; // rcx
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *Ptr; // rax
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *Right; // rcx
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *Parent; // rdx
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *v13; // rdi
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *v14; // rbx
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgUser> > > > > v15; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+38h] [rbp-30h]
  std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > >,bool> resulta; // [rsp+40h] [rbp-28h] BYREF

  v16 = -2i64;
  v15._Ptr = 0i64;
  if ( !this->_Mypair._Myval2._Myval2._Mysize )
  {
    std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::_Insert_at<std::pair<AgPath const,AgVirtualMount::FileData> &,std::_Tree_node<std::pair<AgPath const,AgVirtualMount::FileData>,void *> *>(
      this,
      result,
      1,
      this->_Mypair._Myval2._Myval2._Myhead,
      _Val,
      _Newnode);
    return result;
  }
  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  if ( _Where._Ptr == Myhead->_Left )
  {
    if ( operator<(&_Val->first.m_path, &_Where._Ptr->_Myval.first.m_path) )
    {
      std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::_Insert_at<std::pair<AgPath const,AgVirtualMount::FileData> &,std::_Tree_node<std::pair<AgPath const,AgVirtualMount::FileData>,void *> *>(
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
    if ( operator<(&Myhead->_Right->_Myval.first.m_path, &_Val->first.m_path) )
    {
      std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::_Insert_at<std::pair<AgPath const,AgVirtualMount::FileData> &,std::_Tree_node<std::pair<AgPath const,AgVirtualMount::FileData>,void *> *>(
        this,
        result,
        0,
        this->_Mypair._Myval2._Myval2._Myhead->_Right,
        _Val,
        _Newnode);
      return result;
    }
    goto LABEL_33;
  }
  if ( operator<(&_Val->first.m_path, &_Where._Ptr->_Myval.first.m_path) )
  {
    Ptr = _Where._Ptr;
    v15._Ptr = (std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *)_Where._Ptr;
    if ( _Where._Ptr->_Isnil )
    {
      Right = _Where._Ptr->_Right;
    }
    else
    {
      Right = _Where._Ptr->_Left;
      if ( _Where._Ptr->_Left->_Isnil )
      {
        while ( 1 )
        {
          Parent = (std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *)Ptr->_Parent;
          if ( Parent->_Isnil
            || Ptr != (std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *)Parent->_Left )
          {
            break;
          }
          Ptr = Ptr->_Parent;
          v15._Ptr = Parent;
        }
        Right = Ptr;
        if ( !Ptr->_Isnil )
          Right = Ptr->_Parent;
      }
      else
      {
        while ( !Right->_Right->_Isnil )
          Right = Right->_Right;
      }
    }
    v15._Ptr = (std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *)Right;
    if ( operator<(&Right->_Myval.first.m_path, &_Val->first.m_path) )
    {
      if ( v15._Ptr->_Right->_Isnil )
        std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::_Insert_at<std::pair<AgPath const,AgVirtualMount::FileData> &,std::_Tree_node<std::pair<AgPath const,AgVirtualMount::FileData>,void *> *>(
          this,
          result,
          0,
          (std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *)v15._Ptr,
          _Val,
          _Newnode);
      else
        std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::_Insert_at<std::pair<AgPath const,AgVirtualMount::FileData> &,std::_Tree_node<std::pair<AgPath const,AgVirtualMount::FileData>,void *> *>(
          this,
          result,
          1,
          _Where._Ptr,
          _Val,
          _Newnode);
      return result;
    }
  }
  if ( !operator<(&_Where._Ptr->_Myval.first.m_path, &_Val->first.m_path) )
    goto LABEL_33;
  v13 = _Where._Ptr;
  v15._Ptr = (std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *)_Where._Ptr;
  v14 = (std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *)this->_Mypair._Myval2._Myval2._Myhead;
  if ( std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const,AgPointer<AgLeaderboard>>>>>::operator++(&v15)->_Ptr != v14 )
  {
    if ( operator<(&_Val->first.m_path, (const AgString *)&v15._Ptr->_Myval) )
    {
      v13 = _Where._Ptr;
      goto LABEL_29;
    }
LABEL_33:
    result->_Ptr = (std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *)std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::_Insert_nohint<std::pair<AgPath const,AgVirtualMount::FileData> &,std::_Tree_node<std::pair<AgPath const,AgVirtualMount::FileData>,void *> *>(
                                                                                                  this,
                                                                                                  &resulta,
                                                                                                  0,
                                                                                                  _Val,
                                                                                                  _Newnode)->first;
    return result;
  }
LABEL_29:
  if ( v13->_Right->_Isnil )
    std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::_Insert_at<std::pair<AgPath const,AgVirtualMount::FileData> &,std::_Tree_node<std::pair<AgPath const,AgVirtualMount::FileData>,void *> *>(
      this,
      result,
      0,
      v13,
      _Val,
      _Newnode);
  else
    std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::_Insert_at<std::pair<AgPath const,AgVirtualMount::FileData> &,std::_Tree_node<std::pair<AgPath const,AgVirtualMount::FileData>,void *> *>(
      this,
      result,
      1,
      (std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *)v15._Ptr,
      _Val,
      _Newnode);
  return result;
}

std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > >,bool> *__fastcall std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::_Insert_nohint<std::pair<AgPath const,AgVirtualMount::FileData> &,std::_Tree_node<std::pair<AgPath const,AgVirtualMount::FileData>,void *> *>(
        std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> >,0> > *this,
        std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > >,bool> *result,
        bool _Leftish,
        std::pair<AgPath const ,AgVirtualMount::FileData> *_Val,
        std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *_Newnode)
{
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *Myhead; // rsi
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *Parent; // rbx
  bool v11; // di
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *Right; // rbx
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *v14; // rax
  unsigned __int64 v15; // rdx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > > resulta; // [rsp+40h] [rbp-38h] BYREF

  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  Parent = this->_Mypair._Myval2._Myval2._Myhead->_Parent;
  v11 = 1;
  while ( !Parent->_Isnil )
  {
    Myhead = Parent;
    if ( _Leftish )
      v11 = !operator<(&Parent->_Myval.first.m_path, &_Val->first.m_path);
    else
      v11 = operator<(&_Val->first.m_path, &Parent->_Myval.first.m_path);
    if ( v11 )
      Parent = Parent->_Left;
    else
      Parent = Parent->_Right;
  }
  Right = Myhead;
  if ( v11 )
  {
    if ( Myhead == this->_Mypair._Myval2._Myval2._Myhead->_Left )
    {
      result->first = (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > >)std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::_Insert_at<std::pair<AgPath const,AgVirtualMount::FileData> &,std::_Tree_node<std::pair<AgPath const,AgVirtualMount::FileData>,void *> *>(this, &resulta, 1, Myhead, _Val, _Newnode)->_Ptr;
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
        v14 = Right->_Parent;
        if ( v14->_Isnil || Right != v14->_Left )
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
  if ( operator<(&Right->_Myval.first.m_path, &_Val->first.m_path) )
  {
    result->first = (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > >)std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::_Insert_at<std::pair<AgPath const,AgVirtualMount::FileData> &,std::_Tree_node<std::pair<AgPath const,AgVirtualMount::FileData>,void *> *>(this, &resulta, v11, Myhead, _Val, _Newnode)->_Ptr;
    result->second = 1;
  }
  else
  {
    resulta._Ptr = (std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *)&_Newnode->_Myval;
    AgPointer<AgBuffer<AgAllocator<1>>>::~AgPointer<AgBuffer<AgAllocator<1>>>(&_Newnode->_Myval.second.m_data);
    AgString::~AgString(&_Newnode->_Myval.first.m_path, v15);
    operator delete(_Newnode);
    result->first._Ptr = Right;
    result->second = 0;
  }
  return result;
}

std::pair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > >,bool> *__fastcall std::_Tree<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0>>::_Insert_nohint<AgPath,std::_Nil>(
        std::_Tree<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0> > *this,
        std::pair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > >,bool> *result,
        bool _Leftish,
        AgPath *_Val)
{
  std::_Tree_node<AgPath,void *> *Myhead; // rsi
  std::_Tree_node<AgPath,void *> *Parent; // rbx
  bool v10; // di
  std::_Tree_node<AgPath,void *> *Right; // rbx
  std::_Tree_node<AgPath,void *> *v13; // rax
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > > resulta; // [rsp+40h] [rbp-28h] BYREF

  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  Parent = this->_Mypair._Myval2._Myval2._Myhead->_Parent;
  v10 = 1;
  while ( !Parent->_Isnil )
  {
    Myhead = Parent;
    if ( _Leftish )
      v10 = !operator<(&Parent->_Myval.m_path, &_Val->m_path);
    else
      v10 = operator<(&_Val->m_path, &Parent->_Myval.m_path);
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
      result->first = (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > >)std::_Tree<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0>>::_Insert_at<AgPath,std::_Nil>(this, &resulta, 1, Myhead, _Val)->_Ptr;
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
  if ( operator<(&Right->_Myval.m_path, &_Val->m_path) )
  {
    result->first = (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > >)std::_Tree<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0>>::_Insert_at<AgPath,std::_Nil>(
                                                                                                    this,
                                                                                                    &resulta,
                                                                                                    v10,
                                                                                                    Myhead,
                                                                                                    _Val)->_Ptr;
    result->second = 1;
  }
  else
  {
    result->first._Ptr = Right;
    result->second = 0;
  }
  return result;
}

void __fastcall AgVirtualMount::AgVirtualMount(
        AgVirtualMount *this,
        const AgString *mountPoint,
        AgPointer<AgUser> *user)
{
  AgPointer<AgUser> *v6; // rax
  AgPointer<AgPlayer> v7; // [rsp+28h] [rbp-30h] BYREF

  AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(&v7, (const AgPointer<AgPlayer> *)user);
  AgMount::AgMount(this, mountPoint, v6);
  this->__vftable = (AgVirtualMount_vtbl *)&AgVirtualMount::`vftable';
  this->m_hasData = 0;
  this->m_directories._Mypair._Myval2._Myval2._Myhead = 0i64;
  this->m_directories._Mypair._Myval2._Myval2._Mysize = 0i64;
  this->m_directories._Mypair._Myval2._Myval2._Myhead = std::_Tree_comp_alloc<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0>>::_Buyheadnode(&this->m_directories);
  this->m_files._Mypair._Myval2._Myval2._Myhead = 0i64;
  this->m_files._Mypair._Myval2._Myval2._Mysize = 0i64;
  this->m_files._Mypair._Myval2._Myval2._Myhead = std::_Tree_comp_alloc<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::_Buyheadnode(&this->m_files);
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)user);
}

void __fastcall std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::~_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>(
        std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> >,0> > *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > > result; // [rsp+48h] [rbp+10h] BYREF

  std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::_Tree<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0>>::~_Tree<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0>>(
        std::_Tree<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0> > *this)
{
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > > result; // [rsp+48h] [rbp+10h] BYREF

  std::_Tree<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::~_Tree_comp_alloc<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> >,0> > *this)
{
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::_Tree_comp_alloc<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0>>::~_Tree_comp_alloc<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0>>(
        std::_Tree_comp_alloc<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0> > *this)
{
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::map<AgPath,AgVirtualMount::FileData>::~map<AgPath,AgVirtualMount::FileData>(
        std::map<AgPath,AgVirtualMount::FileData> *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > > result; // [rsp+48h] [rbp+10h] BYREF

  std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::pair<AgPath const,AgVirtualMount::FileData>::~pair<AgPath const,AgVirtualMount::FileData>(
        std::pair<AgPath const ,AgVirtualMount::FileData> *this)
{
  unsigned __int64 v2; // rdx

  AgPointer<AgBuffer<AgAllocator<1>>>::~AgPointer<AgBuffer<AgAllocator<1>>>(&this->second.m_data);
  AgString::~AgString(&this->first.m_path, v2);
}

void __fastcall std::set<AgPath>::~set<AgPath>(std::set<AgPath> *this)
{
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > > result; // [rsp+48h] [rbp+10h] BYREF

  std::_Tree<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall AgVirtualMount::~AgVirtualMount(AgVirtualMount *this)
{
  unsigned __int64 v2; // rdx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > > result; // [rsp+50h] [rbp+18h] BYREF

  this->__vftable = (AgVirtualMount_vtbl *)&AgVirtualMount::`vftable';
  AgVirtualMount::eraseAllFiles(this);
  std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::erase(
    &this->m_files,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > >)this->m_files._Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > >)this->m_files._Mypair._Myval2._Myval2._Myhead);
  operator delete(this->m_files._Mypair._Myval2._Myval2._Myhead);
  std::_Tree<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0>>::erase(
    &this->m_directories,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > > *)&result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > >)this->m_directories._Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > >)this->m_directories._Mypair._Myval2._Myval2._Myhead);
  operator delete(this->m_directories._Mypair._Myval2._Myval2._Myhead);
  AgMount::~AgMount(this, v2);
}

void __fastcall AgVirtualMount::FileData::~FileData(AgVirtualMount::FileData *this)
{
  AgPointer<AgBuffer<AgAllocator<1>>>::~AgPointer<AgBuffer<AgAllocator<1>>>(&this->m_data);
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

std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::_Buyheadnode(
        std::_Tree_comp_alloc<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> >,0> > *this)
{
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *result; // rax

  result = (std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *)operator new(0x48ui64);
  if ( !result )
    invalid_parameter_noinfo_noreturn();
  result->_Left = result;
  if ( result != (std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *)-8i64 )
    result->_Parent = result;
  if ( result != (std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *)-16i64 )
    result->_Right = result;
  *(_WORD *)&result->_Color = 257;
  return result;
}

std::_Tree_node<AgPath,void *> *__fastcall std::_Tree_comp_alloc<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0>>::_Buyheadnode(
        std::_Tree_comp_alloc<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0> > *this)
{
  std::_Tree_node<AgPath,void *> *result; // rax

  result = (std::_Tree_node<AgPath,void *> *)operator new(0x30ui64);
  if ( !result )
    invalid_parameter_noinfo_noreturn();
  result->_Left = result;
  if ( result != (std::_Tree_node<AgPath,void *> *)-8i64 )
    result->_Parent = result;
  if ( result != (std::_Tree_node<AgPath,void *> *)-16i64 )
    result->_Right = result;
  *(_WORD *)&result->_Color = 257;
  return result;
}

std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> **__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::_Buynode0(
        std::_Tree_comp_alloc<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> >,0> > *this)
{
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> **v2; // rdx

  v2 = (std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> **)operator new(0x48ui64);
  if ( !v2 )
    invalid_parameter_noinfo_noreturn();
  *v2 = this->_Mypair._Myval2._Myval2._Myhead;
  if ( v2 != (std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> **)-8i64 )
    v2[1] = this->_Mypair._Myval2._Myval2._Myhead;
  if ( v2 != (std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> **)-16i64 )
    v2[2] = this->_Mypair._Myval2._Myval2._Myhead;
  return v2;
}

std::_Tree_node<AgPath,void *> **__fastcall std::_Tree_comp_alloc<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0>>::_Buynode0(
        std::_Tree_comp_alloc<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0> > *this)
{
  std::_Tree_node<AgPath,void *> **v2; // rdx

  v2 = (std::_Tree_node<AgPath,void *> **)operator new(0x30ui64);
  if ( !v2 )
    invalid_parameter_noinfo_noreturn();
  *v2 = this->_Mypair._Myval2._Myval2._Myhead;
  if ( v2 != (std::_Tree_node<AgPath,void *> **)-8i64 )
    v2[1] = this->_Mypair._Myval2._Myval2._Myhead;
  if ( v2 != (std::_Tree_node<AgPath,void *> **)-16i64 )
    v2[2] = this->_Mypair._Myval2._Myval2._Myhead;
  return v2;
}

void __fastcall std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::_Destroy_if_not_nil(
        std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> >,0> > *this,
        std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *_Newnode)
{
  std::pair<AgPath const ,AgVirtualMount::FileData> *p_Myval; // rbx
  unsigned __int64 v4; // rdx

  p_Myval = &_Newnode->_Myval;
  AgPointer<AgBuffer<AgAllocator<1>>>::~AgPointer<AgBuffer<AgAllocator<1>>>(&_Newnode->_Myval.second.m_data);
  AgString::~AgString(&p_Myval->first.m_path, v4);
  operator delete(_Newnode);
}

void __fastcall std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::_Erase(
        std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> >,0> > *this,
        std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *_Rootnode)
{
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *v2; // rsi
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *i; // rdi
  unsigned __int64 v5; // rdx

  v2 = _Rootnode;
  for ( i = _Rootnode; !i->_Isnil; v2 = i )
  {
    std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::_Erase(
      this,
      i->_Right);
    i = i->_Left;
    AgPointer<AgBuffer<AgAllocator<1>>>::~AgPointer<AgBuffer<AgAllocator<1>>>(&v2->_Myval.second.m_data);
    AgString::~AgString(&v2->_Myval.first.m_path, v5);
    operator delete(v2);
  }
}

void __fastcall std::_Tree<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0>>::_Erase(
        std::_Tree<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0> > *this,
        std::_Tree_node<AgPath,void *> *_Rootnode)
{
  std::_Tree_node<AgPath,void *> *v2; // rdi
  std::_Tree_node<AgPath,void *> *i; // rbx
  unsigned __int64 v5; // rdx

  v2 = _Rootnode;
  for ( i = _Rootnode; !i->_Isnil; v2 = i )
  {
    std::_Tree<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0>>::_Erase(this, i->_Right);
    i = i->_Left;
    AgString::~AgString(&v2->_Myval.m_path, v5);
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

__int64 __fastcall AgUser::isSignedIn(Concurrency::details::ThreadInternalContext *this)
{
  return 1i64;
}

void __fastcall AgVirtualMount::deserialize(AgVirtualMount *this, AgPointer<AgStream> *stream)
{
  AgVirtualMount *v3; // rdi
  _RTL_CRITICAL_SECTION *p_m_mutex; // rbx
  int v5; // edx
  std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> >,0> > *p_m_files; // r12
  std::_Tree<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0> > *p_m_directories; // r14
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *Myhead; // rbx
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *Parent; // rsi
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *_Newnode; // rax
  AgVirtualMount::FileData *p_second; // r15
  AgPath *Root; // rax
  unsigned __int64 v13; // rdx
  AgBuffer<AgAllocator<1> > *v14; // rax
  AgBuffer<AgAllocator<1> > *m_ptr; // rsi
  unsigned __int64 v16; // rdx
  AgReferenceCount *v17; // rax
  int v18; // eax
  AgReferenceCount *m_refCount; // r14
  int i; // ebx
  int v21; // er15
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  int length; // [rsp+30h] [rbp-D0h] BYREF
  char v25; // [rsp+34h] [rbp-CCh]
  std::tuple<> v26; // [rsp+35h] [rbp-CBh] BYREF
  std::set<AgPath> *v27; // [rsp+38h] [rbp-C8h]
  AgPointer<AgBuffer<AgAllocator<1> > > rhs; // [rsp+40h] [rbp-C0h] BYREF
  AgString s2; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+60h] [rbp-A0h]
  AgMutex *v31; // [rsp+68h] [rbp-98h]
  std::tuple<AgPath const &> v32; // [rsp+70h] [rbp-90h] BYREF
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > > result; // [rsp+78h] [rbp-88h] BYREF
  AgVirtualMount *v34; // [rsp+80h] [rbp-80h]
  AgString copy; // [rsp+88h] [rbp-78h] BYREF
  __int64 v36; // [rsp+98h] [rbp-68h]
  AgPointer<AgStream> *v37; // [rsp+A0h] [rbp-60h]
  AgBuffer<AgAllocator<1> > *v38; // [rsp+A8h] [rbp-58h]
  AgReferenceCount *v39; // [rsp+B0h] [rbp-50h]
  AgPath v40; // [rsp+B8h] [rbp-48h] BYREF
  std::pair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > >,bool> v41; // [rsp+C8h] [rbp-38h] BYREF
  char text[200]; // [rsp+E0h] [rbp-20h] BYREF

  v36 = -2i64;
  v3 = this;
  v34 = this;
  v37 = stream;
  AgVirtualMount::eraseAllFiles(this);
  p_m_mutex = (_RTL_CRITICAL_SECTION *)&v3->m_mutex;
  v31 = &v3->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)&v3->m_mutex);
  v30 = 1;
  v3->m_hasData = 1;
  length = 0;
  stream->m_ptr->read(stream->m_ptr, (unsigned __int8 *)&length, 4u);
  v5 = length;
  if ( length )
  {
    if ( length != -559038737 )
    {
      p_m_files = &v3->m_files;
      p_m_directories = &v3->m_directories;
      v27 = &v3->m_directories;
      do
      {
        stream->m_ptr->read(stream->m_ptr, (unsigned __int8 *)text, v5);
        AgString::AgString(&copy, text, length);
        AgString::AgString(&s2, &copy);
        AgPath::clean((AgPath *)&s2);
        Myhead = p_m_files->_Mypair._Myval2._Myval2._Myhead;
        Parent = p_m_files->_Mypair._Myval2._Myval2._Myhead->_Parent;
        while ( !Parent->_Isnil )
        {
          if ( operator<(&Parent->_Myval.first.m_path, &s2) )
          {
            Parent = Parent->_Right;
          }
          else
          {
            Myhead = Parent;
            Parent = Parent->_Left;
          }
        }
        if ( Myhead == p_m_files->_Mypair._Myval2._Myval2._Myhead || operator<(&s2, &Myhead->_Myval.first.m_path) )
        {
          v25 = 0;
          v32._Myfirst._Val = (const AgPath *)&s2;
          _Newnode = std::_Tree_comp_alloc<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgPath const &>,std::tuple<>>(
                       p_m_files,
                       &std::piecewise_construct_16,
                       &v32,
                       &v26);
          std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::_Insert_hint<std::pair<AgPath const,AgVirtualMount::FileData> &,std::_Tree_node<std::pair<AgPath const,AgVirtualMount::FileData>,void *> *>(
            p_m_files,
            &result,
            (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > >)Myhead,
            &_Newnode->_Myval,
            _Newnode);
          Myhead = result._Ptr;
        }
        p_second = &Myhead->_Myval.second;
        Root = AgPath::getRoot((AgPath *)&s2, &v40);
        std::_Tree<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0>>::_Insert_nohint<AgPath,std::_Nil>(
          p_m_directories,
          &v41,
          0,
          Root);
        AgString::~AgString(&v40.m_path, v13);
        stream->m_ptr->read(stream->m_ptr, (unsigned __int8 *)&length, 4u);
        if ( length > 0 )
        {
          v14 = (AgBuffer<AgAllocator<1> > *)operator new(0x30ui64);
          m_ptr = v14;
          v38 = v14;
          if ( v14 )
          {
            v16 = length;
            v14->m_refCount = 0i64;
            v14->__vftable = (AgBuffer<AgAllocator<1> >_vtbl *)&AgBuffer<AgAllocator<1>>::`vftable';
            v14->m_data = 0i64;
            v14->m_size = 0i64;
            v14->m_alignment = 0i64;
            v14->m_flags = 7;
            AgBuffer<AgAllocator<1>>::reset(v14, v16);
          }
          else
          {
            m_ptr = 0i64;
          }
          rhs = 0i64;
          if ( m_ptr )
          {
            if ( m_ptr->m_refCount )
            {
              v18 = 0;
            }
            else
            {
              v17 = (AgReferenceCount *)AgReferenceCount::operator new(0x10ui64);
              v39 = v17;
              if ( v17 )
              {
                v17->m_strongCount = 1;
                v17->m_weakCount = 1;
                v17->m_data = m_ptr;
              }
              else
              {
                v17 = 0i64;
              }
              m_ptr->m_refCount = v17;
              v18 = 1;
            }
            m_refCount = m_ptr->m_refCount;
            if ( !v18 )
            {
              for ( i = m_refCount->m_strongCount; m_refCount->m_strongCount; i = m_refCount->m_strongCount )
              {
                if ( (unsigned int)AgAtomicCompareExchange(&m_refCount->m_strongCount, i, i + 1) == i )
                  break;
              }
            }
            rhs.m_ref = m_refCount;
            rhs.m_ptr = m_ptr;
          }
          else
          {
            m_ptr = rhs.m_ptr;
            m_refCount = rhs.m_ref;
          }
          stream->m_ptr->read(stream->m_ptr, m_ptr->m_data, length);
          AgPointer<AgBuffer<AgAllocator<1>>>::operator=(&p_second->m_data, &rhs);
          p_second->m_changed = 0;
          rhs.m_ptr = 0i64;
          if ( m_refCount )
          {
            rhs.m_ref = 0i64;
            v21 = 0;
            if ( !(unsigned int)AgAtomicDecrement(&m_refCount->m_strongCount) )
            {
              if ( !(unsigned int)AgAtomicDecrement(&m_refCount->m_weakCount) )
                v21 = 1;
              m_refCount->m_data = 0i64;
              if ( m_ptr )
                ((void (__fastcall *)(AgBuffer<AgAllocator<1> > *, __int64))m_ptr->~AgBuffer<AgAllocator<1> >)(
                  m_ptr,
                  1i64);
              if ( v21 )
                AgReferenceCount::operator delete(m_refCount);
            }
          }
          p_m_directories = v27;
        }
        stream->m_ptr->read(stream->m_ptr, (unsigned __int8 *)&length, 4u);
        AgString::~AgString(&s2, v22);
        AgString::~AgString(&copy, v23);
        v5 = length;
      }
      while ( length != -559038737 );
      p_m_mutex = (_RTL_CRITICAL_SECTION *)v31;
      v3 = v34;
    }
    v3->m_modified = 0;
  }
  LeaveCriticalSection(p_m_mutex);
  v30 = 0;
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)stream);
}

_BOOL8 __fastcall AgVirtualMount::directoryExists(AgVirtualMount *this, const AgPath *path)
{
  std::pair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > >,std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > > > result; // [rsp+20h] [rbp-18h] BYREF
  std::input_iterator_tag v4; // [rsp+40h] [rbp+8h]

  std::_Tree<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0>>::_Eqrange<AgPath>(
    &this->m_directories,
    &result,
    path);
  return std::_Distance1<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,AgPointer<AgController>>>>>>(
           result.first,
           result.second,
           v4) != 0;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > > *__fastcall std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > > _First,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > > _Last)
{
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *Myhead; // rdx
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *v7; // rax
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *Left; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > > *v9; // rax
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *v10; // rax
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *Right; // rdx
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *j; // rcx
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *i; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > > resulta; // [rsp+30h] [rbp+8h] BYREF
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *v15; // [rsp+40h] [rbp+18h]
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *Ptr; // [rsp+48h] [rbp+20h]

  Ptr = _Last._Ptr;
  v15 = _First._Ptr;
  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  if ( _First._Ptr == this->_Mypair._Myval2._Myval2._Myhead->_Left && _Last._Ptr == Myhead )
  {
    std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::_Erase(
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
        std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::erase(
          this,
          &resulta,
          (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > >)v10);
        _First._Ptr = v15;
      }
      while ( v15 != Ptr );
    }
    v9 = result;
    result->_Ptr = _First._Ptr;
  }
  return v9;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > > *__fastcall std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > > _Where)
{
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *v5; // rsi
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *Right; // rax
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *j; // rax
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *i; // rax
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *Left; // rdi
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *Parent; // rbx
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *v11; // rcx
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *k; // rax
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *v13; // rcx
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *m; // rax
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > > *v15; // rax
  char Color; // cl
  bool n; // zf
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *v18; // rdx
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *v19; // r8
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v20; // rcx
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *v21; // rcx
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *v22; // rax
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *v23; // rcx
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *v24; // rax
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 Mysize; // rax
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *Ptr; // [rsp+60h] [rbp+18h]

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
        v15 = (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > > *)v5->_Parent;
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
  AgPointer<AgBuffer<AgAllocator<1>>>::~AgPointer<AgBuffer<AgAllocator<1>>>(&v5->_Myval.second.m_data);
  AgString::~AgString(&v5->_Myval.first.m_path, v26);
  operator delete(v5);
  Mysize = this->_Mypair._Myval2._Myval2._Mysize;
  if ( Mysize )
    this->_Mypair._Myval2._Myval2._Mysize = Mysize - 1;
  result->_Ptr = Ptr;
  return result;
}

std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > > *__fastcall std::_Tree<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0>>::erase(
        std::_Tree<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0> > *this,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > > _First,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > > _Last)
{
  std::_Tree_node<AgPath,void *> *Myhead; // rdx
  std::_Tree_node<AgPath,void *> *v7; // rax
  std::_Tree_node<AgPath,void *> *Left; // rcx
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > > *v9; // rax
  std::_Tree_node<AgPath,void *> *v10; // rax
  std::_Tree_node<AgPath,void *> *Right; // rdx
  std::_Tree_node<AgPath,void *> *j; // rcx
  std::_Tree_node<AgPath,void *> *i; // rcx
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > > resulta; // [rsp+30h] [rbp+8h] BYREF
  std::_Tree_node<AgPath,void *> *v15; // [rsp+40h] [rbp+18h]
  std::_Tree_node<AgPath,void *> *Ptr; // [rsp+48h] [rbp+20h]

  Ptr = _Last._Ptr;
  v15 = _First._Ptr;
  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  if ( _First._Ptr == this->_Mypair._Myval2._Myval2._Myhead->_Left && _Last._Ptr == Myhead )
  {
    std::_Tree<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0>>::_Erase(this, Myhead->_Parent);
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
        std::_Tree<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0>>::erase(
          this,
          &resulta,
          (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > >)v10);
        _First._Ptr = v15;
      }
      while ( v15 != Ptr );
    }
    v9 = result;
    result->_Ptr = _First._Ptr;
  }
  return v9;
}

std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > > *__fastcall std::_Tree<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0>>::erase(
        std::_Tree<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0> > *this,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > > _Where)
{
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > > *v3; // r15
  std::_Tree_node<AgPath,void *> *v5; // rsi
  std::_Tree_node<AgPath,void *> *Right; // rax
  std::_Tree_node<AgPath,void *> *j; // rax
  std::_Tree_node<AgPath,void *> *i; // rax
  std::_Tree_node<AgPath,void *> *Left; // rdi
  std::_Tree_node<AgPath,void *> *Parent; // rbx
  std::_Tree_node<AgPath,void *> *v11; // rcx
  std::_Tree_node<AgPath,void *> *k; // rax
  std::_Tree_node<AgPath,void *> *v13; // rcx
  std::_Tree_node<AgPath,void *> *m; // rax
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > > *v15; // rax
  char Color; // cl
  bool n; // zf
  std::_Tree_node<AgPath,void *> *v18; // r8
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v19; // rcx
  std::_Tree_node<AgPath,void *> *v20; // rcx
  std::_Tree_node<AgPath,void *> *v21; // rax
  std::_Tree_node<AgPath,void *> *v22; // rcx
  std::_Tree_node<AgPath,void *> *v23; // rax
  std::_Tree_node<AgPath,void *> *v24; // rax
  unsigned __int64 Mysize; // rax
  std::_Tree_node<AgPath,void *> *Ptr; // [rsp+60h] [rbp+18h]

  Ptr = _Where._Ptr;
  v3 = result;
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
        v15 = (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > > *)v5->_Parent;
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
  result = (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > > *)this->_Mypair._Myval2._Myval2._Myhead;
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
    result[2]._Ptr = v13;
  }
LABEL_45:
  if ( v5->_Color != 1 )
    goto LABEL_84;
  for ( n = Left == this->_Mypair._Myval2._Myval2._Myhead->_Parent;
        !n;
        n = result == (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > > *)this->_Mypair._Myval2._Myval2._Myhead->_Parent )
  {
    result = (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > > *)Parent;
    v18 = Parent;
    if ( Left->_Color != 1 )
      break;
    v19 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Left;
    if ( Left == Parent->_Left )
    {
      v19 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Right;
      if ( !v19->_Color )
      {
        v19->_Color = 1;
        Parent->_Color = 0;
        v20 = Parent->_Right;
        Parent->_Right = v20->_Left;
        if ( !v20->_Left->_Isnil )
          v20->_Left->_Parent = Parent;
        v20->_Parent = Parent->_Parent;
        if ( Parent == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
        {
          this->_Mypair._Myval2._Myval2._Myhead->_Parent = v20;
        }
        else
        {
          v21 = Parent->_Parent;
          if ( Parent == v21->_Left )
            v21->_Left = v20;
          else
            v21->_Right = v20;
        }
        v20->_Left = Parent;
        Parent->_Parent = v20;
        v19 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Right;
      }
      if ( !v19->_Isnil )
      {
        if ( v19->_Left->_Color != 1 || v19->_Right->_Color != 1 )
        {
          if ( v19->_Right->_Color == 1 )
          {
            v19->_Left->_Color = 1;
            v19->_Color = 0;
            std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Rrotate(
              (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
              v19);
            v19 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Right;
          }
          v19->_Color = Parent->_Color;
          Parent->_Color = 1;
          v19->_Right->_Color = 1;
          std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Lrotate(
            (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
            (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent);
          break;
        }
LABEL_75:
        v19->_Color = 0;
      }
    }
    else
    {
      if ( !v19->_Color )
      {
        v19->_Color = 1;
        Parent->_Color = 0;
        v22 = Parent->_Left;
        Parent->_Left = Parent->_Left->_Right;
        v23 = v22->_Right;
        if ( !v23->_Isnil )
          v23->_Parent = Parent;
        v22->_Parent = Parent->_Parent;
        if ( Parent == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
        {
          this->_Mypair._Myval2._Myval2._Myhead->_Parent = v22;
        }
        else
        {
          v24 = Parent->_Parent;
          if ( Parent == v24->_Right )
            v24->_Right = v22;
          else
            v24->_Left = v22;
        }
        v22->_Right = Parent;
        Parent->_Parent = v22;
        v19 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Left;
      }
      if ( !v19->_Isnil )
      {
        if ( v19->_Right->_Color != 1 || v19->_Left->_Color != 1 )
        {
          if ( v19->_Left->_Color == 1 )
          {
            v19->_Right->_Color = 1;
            v19->_Color = 0;
            std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Lrotate(
              (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
              v19);
            v19 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Left;
          }
          v19->_Color = Parent->_Color;
          Parent->_Color = 1;
          v19->_Left->_Color = 1;
          std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Rrotate(
            (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
            (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent);
          break;
        }
        goto LABEL_75;
      }
    }
    Parent = Parent->_Parent;
    Left = v18;
  }
  Left->_Color = 1;
LABEL_84:
  AgString::~AgString(&v5->_Myval.m_path, (unsigned __int64)result);
  operator delete(v5);
  Mysize = this->_Mypair._Myval2._Myval2._Mysize;
  if ( Mysize )
    this->_Mypair._Myval2._Myval2._Mysize = Mysize - 1;
  v3->_Ptr = Ptr;
  return v3;
}

void __fastcall AgVirtualMount::eraseAllFiles(AgVirtualMount *this)
{
  AgMutex *p_m_mutex; // rsi
  std::set<AgPath> *p_m_directories; // rbx
  std::map<AgPath,AgVirtualMount::FileData> *p_m_files; // rbx

  p_m_mutex = &this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  this->m_hasData = 0;
  p_m_directories = &this->m_directories;
  std::_Tree<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0>>::_Erase(
    &this->m_directories,
    this->m_directories._Mypair._Myval2._Myval2._Myhead->_Parent);
  p_m_directories->_Mypair._Myval2._Myval2._Myhead->_Parent = p_m_directories->_Mypair._Myval2._Myval2._Myhead;
  p_m_directories->_Mypair._Myval2._Myval2._Myhead->_Left = p_m_directories->_Mypair._Myval2._Myval2._Myhead;
  p_m_directories->_Mypair._Myval2._Myval2._Myhead->_Right = p_m_directories->_Mypair._Myval2._Myval2._Myhead;
  this->m_directories._Mypair._Myval2._Myval2._Mysize = 0i64;
  p_m_files = &this->m_files;
  std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::_Erase(
    &this->m_files,
    this->m_files._Mypair._Myval2._Myval2._Myhead->_Parent);
  p_m_files->_Mypair._Myval2._Myval2._Myhead->_Parent = p_m_files->_Mypair._Myval2._Myval2._Myhead;
  p_m_files->_Mypair._Myval2._Myval2._Myhead->_Left = p_m_files->_Mypair._Myval2._Myval2._Myhead;
  p_m_files->_Mypair._Myval2._Myval2._Myhead->_Right = p_m_files->_Mypair._Myval2._Myval2._Myhead;
  this->m_files._Mypair._Myval2._Myval2._Mysize = 0i64;
  LeaveCriticalSection((LPCRITICAL_SECTION)p_m_mutex);
}

_BOOL8 __fastcall AgVirtualMount::exists(AgVirtualMount *this, const AgPath *path)
{
  unsigned __int64 v3; // rdx
  AgPath *Relative; // rsi
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *Myhead; // rdi
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *Parent; // rbx
  AgPath result; // [rsp+28h] [rbp-20h] BYREF

  Relative = AgPath::getRelative((AgPath *)path, &result);
  Myhead = this->m_files._Mypair._Myval2._Myval2._Myhead;
  Parent = Myhead->_Parent;
  while ( !Parent->_Isnil )
  {
    if ( operator<(&Parent->_Myval.first.m_path, &Relative->m_path) )
    {
      Parent = Parent->_Right;
    }
    else
    {
      Myhead = Parent;
      Parent = Parent->_Left;
    }
  }
  if ( Myhead == this->m_files._Mypair._Myval2._Myval2._Myhead
    || operator<(&Relative->m_path, &Myhead->_Myval.first.m_path) )
  {
    Myhead = this->m_files._Mypair._Myval2._Myval2._Myhead;
  }
  AgString::~AgString(&result.m_path, v3);
  return Myhead != this->m_files._Mypair._Myval2._Myval2._Myhead;
}

AgPointer<AgBuffer<AgAllocator<1> > > *__fastcall AgVirtualMount::getFileData(
        AgVirtualMount *this,
        const AgPath *path,
        unsigned int accessMode)
{
  char v3; // bp
  AgPointer<AgBuffer<AgAllocator<1> > > *p_m_data; // rsi
  unsigned __int64 v6; // rdx
  std::map<AgPath,AgVirtualMount::FileData> *p_m_files; // r14
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *Myhead; // rdi
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *Parent; // rbx
  const AgPath *Val; // rbx
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *v11; // rdi
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *_Newnode; // rax
  AgPath *Root; // rax
  unsigned __int64 v14; // rdx
  AgPath *v15; // rax
  AgString s2; // [rsp+38h] [rbp-60h] BYREF
  AgPath result; // [rsp+48h] [rbp-50h] BYREF
  std::pair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > >,bool> v19; // [rsp+58h] [rbp-40h] BYREF
  std::tuple<AgPath const &> v20; // [rsp+A0h] [rbp+8h] BYREF
  std::tuple<> v21; // [rsp+B0h] [rbp+18h] BYREF

  v3 = accessMode;
  p_m_data = 0i64;
  AgPath::getRelative((AgPath *)path, (AgPath *)&s2);
  p_m_files = &this->m_files;
  Myhead = this->m_files._Mypair._Myval2._Myval2._Myhead;
  Parent = Myhead->_Parent;
  while ( !Parent->_Isnil )
  {
    if ( operator<(&Parent->_Myval.first.m_path, &s2) )
    {
      Parent = Parent->_Right;
    }
    else
    {
      Myhead = Parent;
      Parent = Parent->_Left;
    }
  }
  if ( Myhead == p_m_files->_Mypair._Myval2._Myval2._Myhead || operator<(&s2, &Myhead->_Myval.first.m_path) )
    Myhead = p_m_files->_Mypair._Myval2._Myval2._Myhead;
  if ( Myhead == p_m_files->_Mypair._Myval2._Myval2._Myhead )
  {
    if ( (v3 & 2) == 0 )
      goto LABEL_28;
    Val = (const AgPath *)p_m_files->_Mypair._Myval2._Myval2._Myhead;
    v11 = p_m_files->_Mypair._Myval2._Myval2._Myhead->_Parent;
    while ( !v11->_Isnil )
    {
      if ( operator<(&v11->_Myval.first.m_path, &s2) )
      {
        v11 = v11->_Right;
      }
      else
      {
        Val = (const AgPath *)v11;
        v11 = v11->_Left;
      }
    }
    if ( Val == (const AgPath *)p_m_files->_Mypair._Myval2._Myval2._Myhead || operator<(&s2, &Val[2].m_path) )
    {
      v20._Myfirst._Val = (const AgPath *)&s2;
      _Newnode = std::_Tree_comp_alloc<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgPath const &>,std::tuple<>>(
                   &this->m_files,
                   &std::piecewise_construct_16,
                   &v20,
                   &v21);
      std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::_Insert_hint<std::pair<AgPath const,AgVirtualMount::FileData> &,std::_Tree_node<std::pair<AgPath const,AgVirtualMount::FileData>,void *> *>(
        &this->m_files,
        (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > > *)&v20,
        (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > >)Val,
        &_Newnode->_Myval,
        _Newnode);
      Val = v20._Myfirst._Val;
    }
    p_m_data = (AgPointer<AgBuffer<AgAllocator<1> > > *)&Val[3];
    Root = AgPath::getRoot((AgPath *)&s2, &result);
    std::_Tree<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0>>::_Insert_nohint<AgPath,std::_Nil>(
      &this->m_directories,
      &v19,
      0,
      Root);
    AgString::~AgString(&result.m_path, v14);
  }
  else
  {
    p_m_data = &Myhead->_Myval.second.m_data;
  }
  if ( (v3 & 2) != 0 && p_m_data && !p_m_data->m_ptr )
  {
    v15 = (AgPath *)operator new(0x30ui64);
    v20._Myfirst._Val = v15;
    if ( v15 )
    {
      v15->m_path.m_text = 0i64;
      *(_QWORD *)&v15->m_path.m_length = &AgBuffer<AgAllocator<1>>::`vftable';
      *(_QWORD *)&v15[2].m_path.m_length = 0i64;
      LODWORD(v15[2].m_path.m_text) = 7;
      *(_QWORD *)&v15[1].m_path.m_length = 0i64;
      v15[1].m_path.m_text = 0i64;
    }
    else
    {
      v15 = 0i64;
    }
    AgPointer<AgBuffer<AgAllocator<1>>>::operator=(p_m_data, (AgBuffer<AgAllocator<1> > *)v15);
    this->m_hasData = 1;
  }
LABEL_28:
  AgString::~AgString(&s2, v6);
  return p_m_data;
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

AgPointer<AgFile> *__fastcall AgVirtualMount::open(
        AgVirtualMount *this,
        AgPointer<AgFile> *result,
        const AgPath *path,
        unsigned int accessMode)
{
  char v8; // bl
  int v9; // er15
  AgPointer<AgBuffer<AgAllocator<1> > > *FileData; // r12
  AgUser *v11; // rax
  volatile int *p_m_strongCount; // rdi
  int v13; // ebx
  AgPointer<AgBuffer<AgAllocator<1> > > *v14; // rdi
  AgReferenceCount *v15; // rax
  AgReferenceCount *m_refCount; // rsi
  char v17; // bl
  AgPointer<AgMount> v19; // [rsp+38h] [rbp-71h] BYREF
  AgPointer<AgBuffer<AgAllocator<1> > > v20; // [rsp+48h] [rbp-61h] BYREF
  int v21; // [rsp+58h] [rbp-51h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp-49h]
  AgPointer<AgBuffer<AgAllocator<1> > > v23; // [rsp+68h] [rbp-41h] BYREF
  AgPointer<AgBuffer<AgAllocator<1> > > v24; // [rsp+78h] [rbp-31h] BYREF
  __int64 v25; // [rsp+88h] [rbp-21h]
  AgPointer<AgMount> *v26; // [rsp+90h] [rbp-19h]
  AgPointer<AgBuffer<AgAllocator<1> > > *v27; // [rsp+98h] [rbp-11h]
  AgReferenceCount *v28; // [rsp+A0h] [rbp-9h]
  __int128 v29; // [rsp+A8h] [rbp-1h]
  AgVirtualFileStream *v30; // [rsp+110h] [rbp+67h]

  v25 = -2i64;
  v8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)&this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  v9 = 1;
  v21 = 1;
  v29 = 0i64;
  FileData = AgVirtualMount::getFileData(this, path, accessMode);
  v11 = (AgUser *)operator new(0xD0ui64);
  v30 = (AgVirtualFileStream *)v11;
  if ( v11 )
  {
    v26 = &v19;
    v27 = &v23;
    if ( FileData )
    {
      v20 = 0i64;
      p_m_strongCount = &FileData->m_ref->m_strongCount;
      if ( FileData->m_ref )
      {
        v13 = *p_m_strongCount;
        if ( *p_m_strongCount )
        {
          while ( (unsigned int)AgAtomicCompareExchange(p_m_strongCount, v13, v13 + 1) != v13 )
          {
            v13 = *p_m_strongCount;
            if ( !*p_m_strongCount )
              goto LABEL_10;
          }
          if ( v13 != -1 )
            v20 = *FileData;
        }
      }
LABEL_10:
      v14 = &v20;
      v8 = 1;
    }
    else
    {
      v24 = 0i64;
      v14 = &v24;
      v8 = 2;
    }
    v19 = 0i64;
    if ( this )
    {
      if ( this->m_refCount )
      {
        v9 = 0;
      }
      else
      {
        v15 = (AgReferenceCount *)AgReferenceCount::operator new(0x10ui64);
        v28 = v15;
        if ( v15 )
        {
          v15->m_strongCount = 1;
          v15->m_weakCount = 1;
          v15->m_data = this;
        }
        this->m_refCount = v15;
      }
      m_refCount = this->m_refCount;
      if ( !v9 )
        AgReferenceCount::incRef(this->m_refCount);
      v19.m_ref = m_refCount;
      v19.m_ptr = this;
    }
    v23 = *v14;
    v14->m_ref = 0i64;
    v14->m_ptr = 0i64;
    AgVirtualFileStream::AgVirtualFileStream(v30, &v23, &v19, path, accessMode);
  }
  AgPointer<AgUser>::AgPointer<AgUser>((AgPointer<AgUser> *)result, v11);
  v17 = v8 | 4;
  if ( (v17 & 2) != 0 )
  {
    v17 &= ~2u;
    AgPointer<AgBuffer<AgAllocator<1>>>::~AgPointer<AgBuffer<AgAllocator<1>>>(&v24);
  }
  if ( (v17 & 1) != 0 )
    AgPointer<AgBuffer<AgAllocator<1>>>::~AgPointer<AgBuffer<AgAllocator<1>>>(&v20);
  *((_QWORD *)&v29 + 1) = 0i64;
  LeaveCriticalSection(lpCriticalSection);
  return result;
}

AgPointer<AgDirectory> *__fastcall AgVirtualMount::openDirectory(
        AgVirtualMount *this,
        AgPointer<AgDirectory> *result,
        const AgPath *path,
        AgStringRef *filter)
{
  result->m_ref = 0i64;
  result->m_ptr = 0i64;
  return result;
}

__int64 __fastcall AgVirtualMount::remove(AgVirtualMount *this, const AgPath *path)
{
  std::map<AgPath,AgVirtualMount::FileData> *p_m_files; // rsi
  AgMutex *p_m_mutex; // r15
  unsigned int v5; // er14
  unsigned __int64 v6; // rdx
  AgPath *Relative; // rbp
  const AgString *Myhead; // rdi
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *Parent; // rbx
  AgPath result; // [rsp+38h] [rbp-30h] BYREF
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > > v12; // [rsp+70h] [rbp+8h] BYREF

  p_m_files = &this->m_files;
  p_m_mutex = &this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  v5 = 1;
  Relative = AgPath::getRelative((AgPath *)path, &result);
  Myhead = (const AgString *)p_m_files->_Mypair._Myval2._Myval2._Myhead;
  Parent = p_m_files->_Mypair._Myval2._Myval2._Myhead->_Parent;
  while ( !Parent->_Isnil )
  {
    if ( operator<(&Parent->_Myval.first.m_path, &Relative->m_path) )
    {
      Parent = Parent->_Right;
    }
    else
    {
      Myhead = (const AgString *)Parent;
      Parent = Parent->_Left;
    }
  }
  if ( Myhead == (const AgString *)p_m_files->_Mypair._Myval2._Myval2._Myhead
    || operator<(&Relative->m_path, Myhead + 2) )
  {
    Myhead = (const AgString *)p_m_files->_Mypair._Myval2._Myval2._Myhead;
  }
  AgString::~AgString(&result.m_path, v6);
  if ( Myhead == (const AgString *)p_m_files->_Mypair._Myval2._Myval2._Myhead )
    v5 = 0;
  else
    std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const,AgVirtualMount::FileData>>,0>>::erase(
      p_m_files,
      &v12,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgPath const ,AgVirtualMount::FileData> > > >)Myhead);
  LeaveCriticalSection((LPCRITICAL_SECTION)p_m_mutex);
  return v5;
}

void __fastcall AgVirtualMount::serialize(AgVirtualMount *this, AgPointer<AgStream> *stream)
{
  AgMutex *p_m_mutex; // rdi
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *Myhead; // rax
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *Left; // rbx
  unsigned int IsStopping; // er14
  AgStream *m_ptr; // rdi
  AgStream_vtbl *v9; // rsi
  __ExceptionPtr *CString; // rax
  volatile int *p_m_strongCount; // rsi
  int v12; // edi
  AgReferenceCount *m_ref; // rsi
  AgBuffer<AgAllocator<1> > *v14; // rdi
  unsigned __int64 m_size; // rax
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *Right; // rax
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *j; // rax
  std::_Tree_node<std::pair<AgPath const ,AgVirtualMount::FileData>,void *> *i; // rax
  int v19; // er14
  AgMutex *v20; // [rsp+40h] [rbp-20h]
  AgStringRef v21; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v22; // [rsp+A0h] [rbp+40h] BYREF
  AgPointer<AgStream> *v23; // [rsp+A8h] [rbp+48h]
  int v24; // [rsp+B0h] [rbp+50h] BYREF

  v23 = stream;
  p_m_mutex = &this->m_mutex;
  v20 = &this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  Myhead = this->m_files._Mypair._Myval2._Myval2._Myhead;
  Left = Myhead->_Left;
  if ( Myhead->_Left != Myhead )
  {
    do
    {
      AgStringRef::AgStringRef(&v21, &Left->_Myval.first.m_path);
      IsStopping = AgSimpleThreadHost::getThreadIsStopping((Concurrency::details::ThreadProxyFactory<Concurrency::details::FreeThreadProxy> *)&v21);
      v22 = IsStopping;
      stream->m_ptr->write(stream->m_ptr, (const unsigned __int8 *)&v22, 4u);
      m_ptr = stream->m_ptr;
      v9 = m_ptr->__vftable;
      CString = AgStringRef::getCString((std::shared_ptr<__ExceptionPtr> *)&v21);
      v9->write(m_ptr, (const unsigned __int8 *)CString, IsStopping);
      p_m_strongCount = &Left->_Myval.second.m_data.m_ref->m_strongCount;
      if ( !p_m_strongCount )
        goto LABEL_9;
      v12 = *p_m_strongCount;
      if ( !*p_m_strongCount )
        goto LABEL_9;
      while ( (unsigned int)AgAtomicCompareExchange(p_m_strongCount, v12, v12 + 1) != v12 )
      {
        v12 = *p_m_strongCount;
        if ( !*p_m_strongCount )
          goto LABEL_9;
      }
      if ( v12 != -1 )
      {
        m_ref = Left->_Myval.second.m_data.m_ref;
        v14 = Left->_Myval.second.m_data.m_ptr;
      }
      else
      {
LABEL_9:
        v14 = 0i64;
        m_ref = 0i64;
      }
      if ( v14 )
        m_size = v14->m_size;
      else
        LODWORD(m_size) = 0;
      v22 = m_size;
      stream->m_ptr->write(stream->m_ptr, (const unsigned __int8 *)&v22, 4u);
      if ( v14 )
      {
        stream->m_ptr->write(stream->m_ptr, v14->m_data, v14->m_size);
        Left->_Myval.second.m_changed = 0;
      }
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
      if ( m_ref )
      {
        v19 = 0;
        if ( !(unsigned int)AgAtomicDecrement(&m_ref->m_strongCount) )
        {
          if ( !(unsigned int)AgAtomicDecrement(&m_ref->m_weakCount) )
            v19 = 1;
          m_ref->m_data = 0i64;
          if ( v14 )
            ((void (__fastcall *)(AgBuffer<AgAllocator<1> > *, __int64))v14->~AgBuffer<AgAllocator<1> >)(v14, 1i64);
          if ( v19 )
            AgReferenceCount::operator delete(m_ref);
        }
      }
    }
    while ( Left != this->m_files._Mypair._Myval2._Myval2._Myhead );
    p_m_mutex = v20;
  }
  v24 = -559038737;
  stream->m_ptr->write(stream->m_ptr, (const unsigned __int8 *)&v24, 4u);
  LeaveCriticalSection((LPCRITICAL_SECTION)p_m_mutex);
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)stream);
}

