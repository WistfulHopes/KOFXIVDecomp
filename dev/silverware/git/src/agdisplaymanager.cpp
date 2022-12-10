#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/silverware/git/sdk/agdisplaymanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"

struct AgDisplayManager::InternalData
{
	class DisplayMap;
	struct DisplayEntry;
	std::map<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > m_displayMap; // 0x0
	InternalData(AgDisplayManager::InternalData &);
	InternalData(const AgDisplayManager::InternalData &);
	InternalData();
	~InternalData();
	AgDisplayManager::InternalData & operator=(AgDisplayManager::InternalData &);
	AgDisplayManager::InternalData & operator=(const AgDisplayManager::InternalData &);
};
class std::map<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > :
	std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > >,0> >
{
	class _Myt;
	class _Mybase;
	typedef AgDisplay key_type;
	class mapped_type;
	struct key_compare;
	class value_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<AgDisplay * const,AgPointer<AgDisplay> > pointer;
	typedef const std::pair<AgDisplay * const,AgPointer<AgDisplay> > const_pointer;
	typedef std::pair<AgDisplay * const,AgPointer<AgDisplay> > reference;
	typedef const std::pair<AgDisplay * const,AgPointer<AgDisplay> > const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > >(std::initializer_list<std::pair<AgDisplay * const,AgPointer<AgDisplay> > >, const std::less<AgDisplay *> &, const std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > &);
	map<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > >(std::initializer_list<std::pair<AgDisplay * const,AgPointer<AgDisplay> > >, const std::less<AgDisplay *> &);
	map<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > >(std::initializer_list<std::pair<AgDisplay * const,AgPointer<AgDisplay> > >);
	map<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > >(std::map<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > &, const std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > &);
	map<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > >(std::map<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > &);
	map<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > >(const std::less<AgDisplay *> &, const std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > &);
	map<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > >(const std::less<AgDisplay *> &);
	map<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > >(const std::map<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > &, const std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > &);
	map<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > >(const std::map<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > &);
	map<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > >(const std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > &);
	map<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > >();
	std::map<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > & operator=(std::initializer_list<std::pair<AgDisplay * const,AgPointer<AgDisplay> > >);
	std::map<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > & operator=(std::map<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > &);
	std::map<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > & operator=(const std::map<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > &);
	AgPointer<AgDisplay> & operator[](AgDisplay * &);
	AgPointer<AgDisplay> & operator[](AgDisplay * &);
	void swap(std::map<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > &);
	const AgPointer<AgDisplay> & at(AgDisplay * &);
	AgPointer<AgDisplay> & at(AgDisplay * &);
	~map<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > >();
};
std::piecewise_construct_t std::piecewise_construct; // 0x140867127
AgDisplayManager::AgDisplayManager(); // 0x140667310
std::map<AgDisplay * __ptr64,AgPointer<AgDisplay>,std::less<AgDisplay * __ptr64>,std::allocator<std::pair<AgDisplay * __ptr64 const,AgPointer<AgDisplay> > > >::~map<AgDisplay * __ptr64,AgPointer<AgDisplay>,std::less<AgDisplay * __ptr64>,std::allocator<std::pair<AgDisplay * __ptr64 const,AgPointer<AgDisplay> > > >(); // 0x1406673C0
std::pair<AgDisplay * __ptr64 const,AgPointer<AgDisplay> >::~pair<AgDisplay * __ptr64 const,AgPointer<AgDisplay> >(); // 0x140667400
long AgDisplayManager::onSingletonInit(); // 0x140667CF0
long AgDisplayManager::onSingletonExit(); // 0x140667C70
long AgDisplayManager::registerDisplay(AgPointer<AgDisplay> display); // 0x140667D60
AgPointer<AgDisplay> AgDisplayManager::getDisplayByIndex(unsigned long index); // 0x140667BB0//decompilation failure at 140867127!
std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgDisplay * &&>,std::tuple<>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > >,0> > *this,
        const std::piecewise_construct_t *<_Val_0>,
        std::tuple<AgDisplay * &&> *<_Val_1>,
        std::tuple<> *<_Val_2>)
{
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *v5; // r9

  v5 = std::_Tree_comp_alloc<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>::_Buynode0(this);
  *(_WORD *)&v5->_Color = 0;
  if ( v5 != (std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *)-32i64 )
  {
    v5->_Myval.first = *<_Val_1>->_Myfirst._Val;
    v5->_Myval.second.m_ref = 0i64;
    v5->_Myval.second.m_ptr = 0i64;
  }
  return v5;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > > *__fastcall std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>::_Insert_at<std::pair<AgDisplay * const,AgPointer<AgDisplay>> &,std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay>>,void *> *>(
        std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > > *result,
        bool _Addleft,
        std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *_Wherenode,
        std::pair<AgDisplay * const,AgPointer<AgDisplay> > *_Val,
        std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *_Node)
{
  unsigned __int64 Mysize; // rax
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *Myhead; // rax
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *v10; // rax
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *Parent; // rcx
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *v12; // r8
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *Left; // rdx
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *Right; // rdx
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *v15; // rdx
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *v16; // rcx
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *v17; // rdx
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *v18; // r8
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *v19; // rcx
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *v20; // rcx
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *v21; // rdx
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *v22; // rcx
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *v23; // rcx
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *v24; // rcx

  Mysize = this->_Mypair._Myval2._Myval2._Mysize;
  if ( Mysize >= 0x492492492492491i64 )
  {
    AgPointer<AgDisplay>::~AgPointer<AgDisplay>(&_Node->_Myval.second);
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

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > > *__fastcall std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>::_Insert_hint<std::pair<AgDisplay * const,AgPointer<AgDisplay>> &,std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay>>,void *> *>(
        std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > > _Where,
        std::pair<AgDisplay * const,AgPointer<AgDisplay> > *_Val,
        std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *_Newnode)
{
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *Myhead; // rax
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *Right; // r9
  AgDisplay *first; // r12
  bool v12; // cf
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *Ptr; // rax
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *Left; // r9
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *Parent; // rcx
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *v16; // rbx
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgUser> > > > > v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+38h] [rbp-40h]
  std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > >,bool> resulta; // [rsp+40h] [rbp-38h] BYREF

  v18 = -2i64;
  v17._Ptr = 0i64;
  if ( !this->_Mypair._Myval2._Myval2._Mysize )
  {
    std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>::_Insert_at<std::pair<AgDisplay * const,AgPointer<AgDisplay>> &,std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay>>,void *> *>(
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
      std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>::_Insert_at<std::pair<AgDisplay * const,AgPointer<AgDisplay>> &,std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay>>,void *> *>(
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
      std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>::_Insert_at<std::pair<AgDisplay * const,AgPointer<AgDisplay>> &,std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay>>,void *> *>(
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
            || Ptr != (std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *)Parent->_Left )
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
        std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>::_Insert_at<std::pair<AgDisplay * const,AgPointer<AgDisplay>> &,std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay>>,void *> *>(
          this,
          result,
          0,
          (std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *)Left,
          _Val,
          _Newnode);
      else
        std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>::_Insert_at<std::pair<AgDisplay * const,AgPointer<AgDisplay>> &,std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay>>,void *> *>(
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
    result->_Ptr = (std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *)std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>::_Insert_nohint<std::pair<AgDisplay * const,AgPointer<AgDisplay>> &,std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay>>,void *> *>(
                                                                                                   this,
                                                                                                   &resulta,
                                                                                                   0,
                                                                                                   _Val,
                                                                                                   _Newnode)->first;
    return result;
  }
  if ( _Where._Ptr->_Right->_Isnil )
    std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>::_Insert_at<std::pair<AgDisplay * const,AgPointer<AgDisplay>> &,std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay>>,void *> *>(
      this,
      result,
      0,
      _Where._Ptr,
      _Val,
      _Newnode);
  else
    std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>::_Insert_at<std::pair<AgDisplay * const,AgPointer<AgDisplay>> &,std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay>>,void *> *>(
      this,
      result,
      1,
      (std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *)v17._Ptr,
      _Val,
      _Newnode);
  return result;
}

std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > >,bool> *__fastcall std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>::_Insert_nohint<std::pair<AgDisplay * const,AgPointer<AgDisplay>> &,std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay>>,void *> *>(
        std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > >,0> > *this,
        std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > >,bool> *result,
        bool _Leftish,
        std::pair<AgDisplay * const,AgPointer<AgDisplay> > *_Val,
        std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *_Newnode)
{
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *Myhead; // r9
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *Parent; // r10
  bool v10; // r8
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *Right; // rbx
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *v13; // rax
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > > resulta; // [rsp+40h] [rbp-18h] BYREF

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
      result->first = (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > >)std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>::_Insert_at<std::pair<AgDisplay * const,AgPointer<AgDisplay>> &,std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay>>,void *> *>(this, &resulta, 1, Myhead, _Val, _Newnode)->_Ptr;
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
    resulta._Ptr = (std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *)&_Newnode->_Myval;
    AgPointer<AgDisplay>::~AgPointer<AgDisplay>(&_Newnode->_Myval.second);
    operator delete(_Newnode);
    result->first._Ptr = Right;
    result->second = 0;
  }
  else
  {
    result->first = (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > >)std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>::_Insert_at<std::pair<AgDisplay * const,AgPointer<AgDisplay>> &,std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay>>,void *> *>(this, &resulta, v10, Myhead, _Val, _Newnode)->_Ptr;
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

void __fastcall AgDisplayManager::AgDisplayManager(AgDisplayManager *this)
{
  this->__vftable = (AgDisplayManager_vtbl *)&AgSingleton<AgDisplayManager>::`vftable';
  this->__vftable = (AgDisplayManager_vtbl *)&AgDisplayManager::`vftable';
  this->m_internalData = 0i64;
}

void __fastcall AgSingleton<AgDisplayManager>::~AgSingleton<AgDisplayManager>(AgSingleton<AgDisplayManager> *this)
{
  this->__vftable = (AgSingleton<AgDisplayManager>_vtbl *)&AgSingleton<AgDisplayManager>::`vftable';
}

void __fastcall std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>::~_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>(
        std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > >,0> > *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > > result; // [rsp+48h] [rbp+10h] BYREF

  std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>::~_Tree_comp_alloc<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > >,0> > *this)
{
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::map<AgDisplay *,AgPointer<AgDisplay>>::~map<AgDisplay *,AgPointer<AgDisplay>>(
        std::map<AgDisplay *,AgPointer<AgDisplay>> *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > > result; // [rsp+48h] [rbp+10h] BYREF

  std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::pair<AgDisplay * const,AgPointer<AgDisplay>>::~pair<AgDisplay * const,AgPointer<AgDisplay>>(
        std::pair<AgDisplay * const,AgPointer<AgDisplay> > *this)
{
  AgPointer<AgDisplay>::~AgPointer<AgDisplay>(&this->second);
}

AgPointer<AgDisplay> *__fastcall AgPointer<AgDisplay>::operator=(
        AgPointer<AgDisplay> *this,
        const AgPointer<AgDisplay> *rhs)
{
  AgReferenceCount *m_ref; // rdi
  int m_strongCount; // ebx
  AgReferenceCount *v6; // rdx
  AgDisplay *m_ptr; // rcx
  AgPointer<AgDisplay> v9; // [rsp+28h] [rbp-20h] BYREF

  v9 = 0i64;
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
        v9 = *rhs;
    }
  }
LABEL_8:
  v6 = this->m_ref;
  m_ptr = this->m_ptr;
  *this = v9;
  v9.m_ref = v6;
  v9.m_ptr = m_ptr;
  AgPointer<AgDisplay>::~AgPointer<AgDisplay>(&v9);
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

std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>::_Buyheadnode(
        std::_Tree_comp_alloc<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > >,0> > *this)
{
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *result; // rax

  result = (std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *)operator new(0x38ui64);
  if ( !result )
    invalid_parameter_noinfo_noreturn();
  result->_Left = result;
  if ( result != (std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *)-8i64 )
    result->_Parent = result;
  if ( result != (std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *)-16i64 )
    result->_Right = result;
  *(_WORD *)&result->_Color = 257;
  return result;
}

std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> **__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>::_Buynode0(
        std::_Tree_comp_alloc<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > >,0> > *this)
{
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> **v2; // rdx

  v2 = (std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> **)operator new(0x38ui64);
  if ( !v2 )
    invalid_parameter_noinfo_noreturn();
  *v2 = this->_Mypair._Myval2._Myval2._Myhead;
  if ( v2 != (std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> **)-8i64 )
    v2[1] = this->_Mypair._Myval2._Myval2._Myhead;
  if ( v2 != (std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> **)-16i64 )
    v2[2] = this->_Mypair._Myval2._Myval2._Myhead;
  return v2;
}

void __fastcall std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>::_Destroy_if_not_nil(
        std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > >,0> > *this,
        std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *_Newnode)
{
  AgPointer<AgDisplay>::~AgPointer<AgDisplay>(&_Newnode->_Myval.second);
  operator delete(_Newnode);
}

void __fastcall std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>::_Erase(
        std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > >,0> > *this,
        std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *_Rootnode)
{
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *v2; // rdi
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *i; // rbx

  v2 = _Rootnode;
  for ( i = _Rootnode; !i->_Isnil; v2 = i )
  {
    std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>::_Erase(
      this,
      i->_Right);
    i = i->_Left;
    AgPointer<AgDisplay>::~AgPointer<AgDisplay>(&v2->_Myval.second);
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

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > > *__fastcall std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > > _First,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > > _Last)
{
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *Myhead; // rdx
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *v7; // rax
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *Left; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > > *v9; // rax
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *v10; // rax
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *Right; // rdx
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *j; // rcx
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *i; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > > resulta; // [rsp+30h] [rbp+8h] BYREF
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *v15; // [rsp+40h] [rbp+18h]
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *Ptr; // [rsp+48h] [rbp+20h]

  Ptr = _Last._Ptr;
  v15 = _First._Ptr;
  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  if ( _First._Ptr == this->_Mypair._Myval2._Myval2._Myhead->_Left && _Last._Ptr == Myhead )
  {
    std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>::_Erase(
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
        std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>::erase(
          this,
          &resulta,
          (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > >)v10);
        _First._Ptr = v15;
      }
      while ( v15 != Ptr );
    }
    v9 = result;
    result->_Ptr = _First._Ptr;
  }
  return v9;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > > *__fastcall std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > > _Where)
{
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *v5; // rsi
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *Right; // rax
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *j; // rax
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *i; // rax
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *Left; // rdi
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *Parent; // rbx
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *v11; // rcx
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *k; // rax
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *v13; // rcx
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *m; // rax
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > > *v15; // rax
  char Color; // cl
  bool n; // zf
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *v18; // rdx
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *v19; // r8
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v20; // rcx
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *v21; // rcx
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *v22; // rax
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *v23; // rcx
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *v24; // rax
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *v25; // rax
  unsigned __int64 Mysize; // rax
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *Ptr; // [rsp+60h] [rbp+18h]

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
        v15 = (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > > *)v5->_Parent;
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
  AgPointer<AgDisplay>::~AgPointer<AgDisplay>(&v5->_Myval.second);
  operator delete(v5);
  Mysize = this->_Mypair._Myval2._Myval2._Mysize;
  if ( Mysize )
    this->_Mypair._Myval2._Myval2._Mysize = Mysize - 1;
  result->_Ptr = Ptr;
  return result;
}

AgPointer<AgDisplay> *__fastcall AgDisplayManager::getDisplayByIndex(
        AgDisplayManager *this,
        AgPointer<AgDisplay> *result,
        unsigned int index)
{
  AgDisplayManager::InternalData *m_internalData; // rax
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *Left; // rdx
  unsigned int v6; // er9
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *Myhead; // rax
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *Right; // rcx
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *j; // rcx
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *i; // rcx

  m_internalData = this->m_internalData;
  Left = m_internalData->m_displayMap._Mypair._Myval2._Myval2._Myhead->_Left;
  v6 = 0;
  if ( Left != m_internalData->m_displayMap._Mypair._Myval2._Myval2._Myhead )
  {
    Myhead = m_internalData->m_displayMap._Mypair._Myval2._Myval2._Myhead;
    while ( v6 <= index )
    {
      if ( v6 == index )
      {
        AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(
          (AgPointer<AgPlayer> *)result,
          (const AgPointer<AgPlayer> *)&Left->_Myval.second);
        return result;
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
      ++v6;
      if ( Left == Myhead )
        break;
    }
  }
  result->m_ref = 0i64;
  result->m_ptr = 0i64;
  return result;
}

__int64 __fastcall AgDisplayManager::onSingletonExit(AgDisplayManager *this)
{
  AgDisplayManager::InternalData *m_internalData; // rbx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > > result; // [rsp+48h] [rbp+10h] BYREF

  m_internalData = this->m_internalData;
  if ( m_internalData )
  {
    std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>::erase(
      &m_internalData->m_displayMap,
      &result,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > >)m_internalData->m_displayMap._Mypair._Myval2._Myval2._Myhead->_Left,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > >)m_internalData->m_displayMap._Mypair._Myval2._Myval2._Myhead);
    operator delete(m_internalData->m_displayMap._Mypair._Myval2._Myval2._Myhead);
    operator delete(m_internalData, 0x10ui64);
    this->m_internalData = 0i64;
  }
  else
  {
    this->m_internalData = 0i64;
  }
  return 1i64;
}

__int64 __fastcall AgDisplayManager::onSingletonInit(AgDisplayManager *this)
{
  std::_Tree_comp_alloc<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > >,0> > *v2; // rax
  AgDisplayManager::InternalData *v3; // rbx

  v2 = (std::_Tree_comp_alloc<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay> > >,0> > *)operator new(0x10ui64);
  v3 = (AgDisplayManager::InternalData *)v2;
  if ( v2 )
  {
    v2->_Mypair._Myval2._Myval2._Myhead = 0i64;
    v2->_Mypair._Myval2._Myval2._Mysize = 0i64;
    v2->_Mypair._Myval2._Myval2._Myhead = std::_Tree_comp_alloc<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>::_Buyheadnode(v2);
  }
  else
  {
    v3 = 0i64;
  }
  this->m_internalData = v3;
  return 1i64;
}

__int64 __fastcall AgDisplayManager::registerDisplay(AgDisplayManager *this, AgPointer<AgDisplay> *display)
{
  AgDisplay *m_ptr; // r8
  AgDisplayManager::InternalData *m_internalData; // rsi
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *Myhead; // rax
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *Parent; // rcx
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *v7; // r9
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *v8; // rcx
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *Ptr; // rbx
  std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay> >,void *> *_Newnode; // rax
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > > result; // [rsp+60h] [rbp+8h] BYREF
  AgPointer<AgDisplay> *v13; // [rsp+68h] [rbp+10h]
  AgDisplay *v14; // [rsp+70h] [rbp+18h] BYREF
  std::tuple<AgDisplay * &&> v15; // [rsp+78h] [rbp+20h] BYREF

  v13 = display;
  m_ptr = display->m_ptr;
  m_internalData = this->m_internalData;
  Myhead = m_internalData->m_displayMap._Mypair._Myval2._Myval2._Myhead;
  Parent = m_internalData->m_displayMap._Mypair._Myval2._Myval2._Myhead->_Parent;
  v7 = m_internalData->m_displayMap._Mypair._Myval2._Myval2._Myhead;
  while ( !Parent->_Isnil )
  {
    if ( Parent->_Myval.first >= m_ptr )
    {
      v7 = Parent;
      Parent = Parent->_Left;
    }
    else
    {
      Parent = Parent->_Right;
    }
  }
  if ( v7 == Myhead || m_ptr < v7->_Myval.first )
    v7 = m_internalData->m_displayMap._Mypair._Myval2._Myval2._Myhead;
  if ( v7 == Myhead )
  {
    v14 = display->m_ptr;
    v8 = Myhead->_Parent;
    Ptr = Myhead;
    while ( !v8->_Isnil )
    {
      if ( v8->_Myval.first >= m_ptr )
      {
        Ptr = v8;
        v8 = v8->_Left;
      }
      else
      {
        v8 = v8->_Right;
      }
    }
    if ( Ptr == Myhead || m_ptr < Ptr->_Myval.first )
    {
      v15._Myfirst._Val = &v14;
      _Newnode = std::_Tree_comp_alloc<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgDisplay * &&>,std::tuple<>>(
                   &m_internalData->m_displayMap,
                   &std::piecewise_construct_3,
                   &v15,
                   (std::tuple<> *)&result);
      std::_Tree<std::_Tmap_traits<AgDisplay *,AgPointer<AgDisplay>,std::less<AgDisplay *>,std::allocator<std::pair<AgDisplay * const,AgPointer<AgDisplay>>>,0>>::_Insert_hint<std::pair<AgDisplay * const,AgPointer<AgDisplay>> &,std::_Tree_node<std::pair<AgDisplay * const,AgPointer<AgDisplay>>,void *> *>(
        &m_internalData->m_displayMap,
        &result,
        (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgDisplay * const,AgPointer<AgDisplay> > > > >)Ptr,
        &_Newnode->_Myval,
        _Newnode);
      Ptr = result._Ptr;
    }
    AgPointer<AgDisplay>::operator=(&Ptr->_Myval.second, display);
    AgPointer<AgDisplay>::~AgPointer<AgDisplay>(display);
    return 1i64;
  }
  else
  {
    AgPointer<AgDisplay>::~AgPointer<AgDisplay>(display);
    return 0i64;
  }
}

