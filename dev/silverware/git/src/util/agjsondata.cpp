#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/silverware/git/sdk/util/agjsondata.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"

std::map<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> > >::~map<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> > >(); // 0x140693110
std::pair<AgStringRef,AgJsonNode>::~pair<AgStringRef,AgJsonNode>(); // 0x140693150
AgJsonArray::~AgJsonArray(); // 0x1406931B0
AgJsonNodeData::~AgJsonNodeData(); // 0x1406931E0
AgJsonNullValue::~AgJsonNullValue(); // 0x140693200
AgJsonNode parseNode(const cJSON & node); // 0x1406940F0
AgJsonNode & AgJsonNode::Null(); // 0x1406932F0
AgJsonNode AgJsonNode::parse(AgPointer<AgStream> stream); // 0x140693DE0
AgJsonNode AgJsonNode::parse(AgStringRef json); // 0x140693F30std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const,AgJsonNode>>,0>>::_Buynode<std::pair<AgStringRef,AgJsonNode>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *this,
        std::pair<AgStringRef,AgJsonNode> *<_Val_0>)
{
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v3; // rax
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v4; // rbx

  v3 = std::_Tree_comp_alloc<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const,AgJsonNode>>,0>>::_Buynode0(this);
  v4 = v3;
  *(_WORD *)&v3->_Color = 0;
  if ( v3 != (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)-32i64 )
  {
    v3->_Myval.first = <_Val_0>->first;
    v3->_Myval.second.__vftable = (AgJsonNode_vtbl *)&AgJsonNode::`vftable';
    AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(
      (AgPointer<AgPlayer> *)&v3->_Myval.second.m_data,
      (const AgPointer<AgPlayer> *)&<_Val_0>->second.m_data);
  }
  return v4;
}

void __fastcall std::_Destroy_range<std::allocator<AgJsonNode>,AgJsonNode *>(
        AgJsonNode *_First,
        AgJsonNode *_Last,
        std::_Wrap_alloc<std::allocator<AgJsonNode> > *_Al)
{
  AgJsonNode *v4; // rbx

  if ( _First != _Last )
  {
    v4 = _First;
    do
    {
      ((void (__fastcall *)(AgJsonNode *, _QWORD, std::_Wrap_alloc<std::allocator<AgJsonNode> > *))v4->~AgJsonNode)(
        v4,
        0i64,
        _Al);
      ++v4;
    }
    while ( v4 != _Last );
  }
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,AgJsonNode> > > > *__fastcall std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const,AgJsonNode>>,0>>::_Insert_at<std::pair<AgStringRef const,AgJsonNode> &,std::_Tree_node<std::pair<AgStringRef const,AgJsonNode>,void *> *>(
        std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,AgJsonNode> > > > *result,
        bool _Addleft,
        std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *_Wherenode,
        std::pair<AgStringRef const ,AgJsonNode> *_Val,
        std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *_Node)
{
  unsigned __int64 Mysize; // rax
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Myhead; // rax
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v10; // rax
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Parent; // rcx
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v12; // r8
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Left; // rdx
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Right; // rdx
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v15; // rdx
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v16; // rcx
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v17; // rdx
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v18; // r8
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v19; // rcx
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v20; // rcx
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v21; // rdx
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v22; // rcx
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v23; // rcx
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v24; // rcx

  Mysize = this->_Mypair._Myval2._Myval2._Mysize;
  if ( Mysize >= 0x38E38E38E38E38Di64 )
  {
    _Node->_Myval.second.__vftable = (AgJsonNode_vtbl *)&AgJsonNode::`vftable';
    AgPointer<AgJsonNodeData>::~AgPointer<AgJsonNodeData>(&_Node->_Myval.second.m_data);
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

std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,AgJsonNode> > > >,bool> *__fastcall std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const,AgJsonNode>>,0>>::_Insert_nohint<std::pair<AgStringRef const,AgJsonNode> &,std::_Tree_node<std::pair<AgStringRef const,AgJsonNode>,void *> *>(
        std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *this,
        std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,AgJsonNode> > > >,bool> *result,
        bool _Leftish,
        std::pair<AgStringRef const ,AgJsonNode> *_Val,
        std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *_Newnode)
{
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Myhead; // rsi
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Parent; // rbx
  bool v11; // di
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Right; // rbx
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v14; // rax
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,AgJsonNode> > > > resulta; // [rsp+40h] [rbp-38h] BYREF

  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  Parent = this->_Mypair._Myval2._Myval2._Myhead->_Parent;
  v11 = 1;
  while ( !Parent->_Isnil )
  {
    Myhead = Parent;
    if ( _Leftish )
      v11 = !operator<(&Parent->_Myval.first, &_Val->first);
    else
      v11 = operator<(&_Val->first, &Parent->_Myval.first);
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
      result->first = (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,AgJsonNode> > > >)std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const,AgJsonNode>>,0>>::_Insert_at<std::pair<AgStringRef const,AgJsonNode> &,std::_Tree_node<std::pair<AgStringRef const,AgJsonNode>,void *> *>(this, &resulta, 1, Myhead, _Val, _Newnode)->_Ptr;
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
  if ( operator<(&Right->_Myval.first, &_Val->first) )
  {
    result->first = (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,AgJsonNode> > > >)std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const,AgJsonNode>>,0>>::_Insert_at<std::pair<AgStringRef const,AgJsonNode> &,std::_Tree_node<std::pair<AgStringRef const,AgJsonNode>,void *> *>(this, &resulta, v11, Myhead, _Val, _Newnode)->_Ptr;
    result->second = 1;
  }
  else
  {
    resulta._Ptr = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)&_Newnode->_Myval.second;
    _Newnode->_Myval.second.__vftable = (AgJsonNode_vtbl *)&AgJsonNode::`vftable';
    AgPointer<AgJsonNodeData>::~AgPointer<AgJsonNodeData>(&_Newnode->_Myval.second.m_data);
    operator delete(_Newnode);
    result->first._Ptr = Right;
    result->second = 0;
  }
  return result;
}

AgJsonNode *__fastcall std::_Uninitialized_move_al_unchecked1<AgJsonNode *,AgJsonNode *,std::allocator<AgJsonNode>>(
        AgJsonNode *_First,
        AgJsonNode *_Last,
        AgJsonNode *_Dest,
        std::_Wrap_alloc<std::allocator<AgJsonNode> > *_Al)
{
  AgJsonNode *i; // r9
  int *p_m_strongCount; // rdi
  int v7; // eax
  int v8; // ebx
  int v9; // esi
  volatile int *value; // [rsp+28h] [rbp-60h]
  AgPointer<AgJsonNodeData> *p_m_data; // [rsp+30h] [rbp-58h]
  AgPointer<AgJsonNodeData> *v13; // [rsp+38h] [rbp-50h]
  AgJsonNode *v14; // [rsp+90h] [rbp+8h]
  AgJsonNode *v15; // [rsp+A0h] [rbp+18h]

  v15 = _Dest;
  v14 = _First;
  for ( i = _First; i != _Last; v14 = i )
  {
    if ( _Dest )
    {
      _Dest->__vftable = (AgJsonNode_vtbl *)&AgJsonNode::`vftable';
      p_m_data = &i->m_data;
      v13 = &_Dest->m_data;
      _Dest->m_data.m_ref = 0i64;
      _Dest->m_data.m_ptr = 0i64;
      p_m_strongCount = (int *)&i->m_data.m_ref->m_strongCount;
      if ( p_m_strongCount )
      {
        value = &i->m_data.m_ref->m_strongCount;
        while ( 1 )
        {
          v7 = *p_m_strongCount;
          v8 = *p_m_strongCount;
          if ( !*p_m_strongCount )
            break;
          v9 = v7 + 1;
          p_m_strongCount = (int *)value;
          if ( (unsigned int)AgAtomicCompareExchange(value, v7, v7 + 1) == v8 )
          {
            if ( v9 )
            {
              v13->m_ref = p_m_data->m_ref;
              v13->m_ptr = p_m_data->m_ptr;
            }
            break;
          }
        }
        i = v14;
        _Dest = v15;
      }
    }
    v15 = ++_Dest;
    ++i;
  }
  return _Dest;
}

std::pair<AgStringRef,AgJsonNode> *__fastcall std::make_pair<AgStringRef,AgJsonNode &>(
        std::pair<AgStringRef,AgJsonNode> *result,
        AgStringRef *_Val1,
        AgJsonNode *_Val2)
{
  result->first = *_Val1;
  result->second.__vftable = (AgJsonNode_vtbl *)&AgJsonNode::`vftable';
  AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(
    (AgPointer<AgPlayer> *)&result->second.m_data,
    (const AgPointer<AgPlayer> *)&_Val2->m_data);
  return result;
}

void __fastcall AgPointer<AgJsonNodeData>::AgPointer<AgJsonNodeData>(
        AgPointer<AgJsonNodeData> *this,
        AgJsonNodeData *t)
{
  AgReferenceCount *v4; // rax
  int v5; // ecx
  AgReferenceCount *m_refCount; // rsi

  this->m_ref = 0i64;
  this->m_ptr = 0i64;
  if ( t )
  {
    if ( t->m_refCount )
    {
      v5 = 0;
    }
    else
    {
      v4 = (AgReferenceCount *)AgReferenceCount::operator new(0x10ui64);
      v5 = 1;
      if ( v4 )
      {
        v4->m_strongCount = 1;
        v4->m_weakCount = 1;
        v4->m_data = t;
      }
      else
      {
        v4 = 0i64;
      }
      t->m_refCount = v4;
    }
    m_refCount = t->m_refCount;
    if ( !v5 )
      AgReferenceCount::incRef(t->m_refCount);
    this->m_ref = m_refCount;
    this->m_ptr = t;
  }
}

void __fastcall AgJsonArray::AgJsonArray(AgJsonArray *this, AgStringRef *name)
{
  AgString *v4; // rax
  AgString *v5; // rbx
  const AgPointer<AgPlayer> *v6; // rax
  AgPointer<AgJsonNodeData> *v7; // rbx
  AgStringRef copy; // [rsp+30h] [rbp-28h] BYREF
  AgPointer<AgJsonNodeData> v9; // [rsp+40h] [rbp-18h] BYREF

  v4 = (AgString *)operator new(0x38ui64);
  v5 = v4;
  if ( v4 )
  {
    copy = *name;
    *(_QWORD *)&v4->m_length = 0i64;
    LODWORD(v4->m_text) = 1;
    AgString::AgString(v4 + 1, &copy);
    *(_QWORD *)&v5[2].m_length = 0i64;
    v5[2].m_text = 0i64;
    *(_QWORD *)&v5[3].m_length = 0i64;
  }
  else
  {
    v5 = 0i64;
  }
  AgPointer<AgJsonNodeData>::AgPointer<AgJsonNodeData>(&v9, (AgJsonNodeData *)v5);
  v7 = (AgPointer<AgJsonNodeData> *)v6;
  this->__vftable = (AgJsonArray_vtbl *)&AgJsonNode::`vftable';
  AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>((AgPointer<AgPlayer> *)&this->m_data, v6);
  AgPointer<AgJsonNodeData>::~AgPointer<AgJsonNodeData>(v7);
  this->__vftable = (AgJsonArray_vtbl *)&AgJsonArray::`vftable';
}

void __fastcall AgJsonNode::AgJsonNode(AgJsonNode *this, const AgJsonNode *other)
{
  this->__vftable = (AgJsonNode_vtbl *)&AgJsonNode::`vftable';
  AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(
    (AgPointer<AgPlayer> *)&this->m_data,
    (const AgPointer<AgPlayer> *)&other->m_data);
}

void __fastcall AgJsonNullValue::AgJsonNullValue(AgJsonNullValue *this)
{
  AgJsonNodeData *v2; // rbx
  AgStringRef *v3; // rax
  const AgPointer<AgPlayer> *v4; // rax
  AgPointer<AgJsonNodeData> *v5; // rbx
  AgStringRef copy; // [rsp+30h] [rbp-38h] BYREF
  AgPointer<AgJsonNodeData> v7; // [rsp+40h] [rbp-28h] BYREF
  AgStringRef v8; // [rsp+50h] [rbp-18h] BYREF

  v2 = (AgJsonNodeData *)operator new(0x20ui64);
  if ( v2 )
  {
    AgStringRef::AgStringRef(&v8, "Null");
    copy = *v3;
    v2->m_refCount = 0i64;
    v2->m_type = AgJsonNodeType_Null;
    AgString::AgString(&v2->m_name, &copy);
  }
  else
  {
    v2 = 0i64;
  }
  AgPointer<AgJsonNodeData>::AgPointer<AgJsonNodeData>(&v7, v2);
  v5 = (AgPointer<AgJsonNodeData> *)v4;
  this->__vftable = (AgJsonNullValue_vtbl *)&AgJsonNode::`vftable';
  AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>((AgPointer<AgPlayer> *)&this->m_data, v4);
  AgPointer<AgJsonNodeData>::~AgPointer<AgJsonNodeData>(v5);
  this->__vftable = (AgJsonNullValue_vtbl *)&AgJsonNullValue::`vftable';
}

void __fastcall AgJsonObject::AgJsonObject(AgJsonObject *this, AgStringRef *name)
{
  AgString *v4; // rax
  AgString *v5; // rdi
  const AgPointer<AgPlayer> *v6; // rax
  AgPointer<AgJsonNodeData> *v7; // rbx
  AgStringRef copy; // [rsp+30h] [rbp-38h] BYREF
  AgPointer<AgJsonNodeData> v9; // [rsp+40h] [rbp-28h] BYREF

  v4 = (AgString *)operator new(0x30ui64);
  v5 = v4;
  if ( v4 )
  {
    copy = *name;
    *(_QWORD *)&v4->m_length = 0i64;
    LODWORD(v4->m_text) = 2;
    AgString::AgString(v4 + 1, &copy);
    *(_QWORD *)&v5[2].m_length = 0i64;
    v5[2].m_text = 0i64;
    *(_QWORD *)&v5[2].m_length = std::_Tree_comp_alloc<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const,AgJsonNode>>,0>>::_Buyheadnode((std::_Tree_comp_alloc<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)&v5[2]);
  }
  else
  {
    v5 = 0i64;
  }
  AgPointer<AgJsonNodeData>::AgPointer<AgJsonNodeData>(&v9, (AgJsonNodeData *)v5);
  v7 = (AgPointer<AgJsonNodeData> *)v6;
  this->__vftable = (AgJsonObject_vtbl *)&AgJsonNode::`vftable';
  AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>((AgPointer<AgPlayer> *)&this->m_data, v6);
  AgPointer<AgJsonNodeData>::~AgPointer<AgJsonNodeData>(v7);
  this->__vftable = (AgJsonObject_vtbl *)&AgJsonObject::`vftable';
}

void __fastcall AgJsonValue::AgJsonValue(AgJsonValue *this, float value, AgStringRef *name)
{
  AgString *v5; // rax
  AgString *v6; // rbx
  const AgPointer<AgPlayer> *v7; // rax
  AgPointer<AgJsonNodeData> *v8; // rbx
  AgStringRef copy; // [rsp+30h] [rbp-38h] BYREF
  AgPointer<AgJsonNodeData> v10; // [rsp+40h] [rbp-28h] BYREF

  v5 = (AgString *)operator new(0x40ui64);
  v6 = v5;
  if ( v5 )
  {
    copy = *name;
    *(_QWORD *)&v5->m_length = 0i64;
    LODWORD(v5->m_text) = 0;
    AgString::AgString(v5 + 1, &copy);
    v6[2].m_length = 0;
    *(double *)&v6[2].m_text = value;
    AgString::AgString(v6 + 3);
  }
  else
  {
    v6 = 0i64;
  }
  AgPointer<AgJsonNodeData>::AgPointer<AgJsonNodeData>(&v10, (AgJsonNodeData *)v6);
  v8 = (AgPointer<AgJsonNodeData> *)v7;
  this->__vftable = (AgJsonValue_vtbl *)&AgJsonNode::`vftable';
  AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>((AgPointer<AgPlayer> *)&this->m_data, v7);
  AgPointer<AgJsonNodeData>::~AgPointer<AgJsonNodeData>(v8);
  this->__vftable = (AgJsonValue_vtbl *)&AgJsonValue::`vftable';
}

void __fastcall std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const,AgJsonNode>>,0>>::~_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const,AgJsonNode>>,0>>(
        std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,AgJsonNode> > > > result; // [rsp+48h] [rbp+10h] BYREF

  std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const,AgJsonNode>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,AgJsonNode> > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,AgJsonNode> > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const,AgJsonNode>>,0>>::~_Tree_comp_alloc<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const,AgJsonNode>>,0>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *this)
{
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::map<AgStringRef,AgJsonNode>::~map<AgStringRef,AgJsonNode>(std::map<AgStringRef,AgJsonNode> *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,AgJsonNode> > > > result; // [rsp+48h] [rbp+10h] BYREF

  std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const,AgJsonNode>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,AgJsonNode> > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,AgJsonNode> > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::pair<AgStringRef,AgJsonNode>::~pair<AgStringRef,AgJsonNode>(
        std::pair<AgStringRef,AgJsonNode> *this)
{
  AgJsonNode *p_second; // rcx

  p_second = &this->second;
  p_second->__vftable = (AgJsonNode_vtbl *)&AgJsonNode::`vftable';
  AgPointer<AgJsonNodeData>::~AgPointer<AgJsonNodeData>(&p_second->m_data);
}

void __fastcall std::vector<AgJsonNode>::~vector<AgJsonNode>(std::vector<AgJsonNode> *this)
{
  std::vector<AgJsonNode>::_Tidy(this);
}

void __fastcall AgJsonArray::~AgJsonArray(AgJsonArray *this)
{
  this->__vftable = (AgJsonArray_vtbl *)&AgJsonNode::`vftable';
  AgPointer<AgJsonNodeData>::~AgPointer<AgJsonNodeData>(&this->m_data);
}

void __fastcall AgJsonNodeData::~AgJsonNodeData(AgJsonNodeData *this, unsigned __int64 a2)
{
  AgString::~AgString(&this->m_name, a2);
}

void __fastcall AgJsonNullValue::~AgJsonNullValue(AgJsonNullValue *this)
{
  this->__vftable = (AgJsonNullValue_vtbl *)&AgJsonNode::`vftable';
  AgPointer<AgJsonNodeData>::~AgPointer<AgJsonNodeData>(&this->m_data);
}

AgJsonNode *__fastcall AgJsonNode::Null()
{
  __int64 v0; // rax
  AgJsonNullValue v2; // [rsp+28h] [rbp-20h] BYREF

  if ( dword_140A94110 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 40i64) )
  {
    Init_thread_header(&dword_140A94110);
    if ( dword_140A94110 == -1 )
    {
      AgJsonNullValue::AgJsonNullValue(&v2);
      Null.__vftable = (AgJsonNode_vtbl *)&AgJsonNode::`vftable';
      AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(
        (AgPointer<AgPlayer> *)&Null.m_data,
        (const AgPointer<AgPlayer> *)(v0 + 8));
      v2.__vftable = (AgJsonNullValue_vtbl *)&AgJsonNode::`vftable';
      AgPointer<AgJsonNodeData>::~AgPointer<AgJsonNodeData>(&v2.m_data);
      atexit(AgJsonNode::Null_::_2_::_dynamic_atexit_destructor_for__Null__);
      Init_thread_footer(&dword_140A94110);
    }
  }
  return &Null;
}

std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const,AgJsonNode>>,0>>::_Buyheadnode(
        std::_Tree_comp_alloc<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *this)
{
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *result; // rax

  result = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)operator new(0x48ui64);
  if ( !result )
    invalid_parameter_noinfo_noreturn();
  result->_Left = result;
  if ( result != (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)-8i64 )
    result->_Parent = result;
  if ( result != (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)-16i64 )
    result->_Right = result;
  *(_WORD *)&result->_Color = 257;
  return result;
}

std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> **__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const,AgJsonNode>>,0>>::_Buynode0(
        std::_Tree_comp_alloc<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *this)
{
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> **v2; // rdx

  v2 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> **)operator new(0x48ui64);
  if ( !v2 )
    invalid_parameter_noinfo_noreturn();
  *v2 = this->_Mypair._Myval2._Myval2._Myhead;
  if ( v2 != (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> **)-8i64 )
    v2[1] = this->_Mypair._Myval2._Myval2._Myhead;
  if ( v2 != (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> **)-16i64 )
    v2[2] = this->_Mypair._Myval2._Myval2._Myhead;
  return v2;
}

void __fastcall std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const,AgJsonNode>>,0>>::_Destroy_if_not_nil(
        std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *this,
        std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *_Newnode)
{
  _Newnode->_Myval.second.__vftable = (AgJsonNode_vtbl *)&AgJsonNode::`vftable';
  AgPointer<AgJsonNodeData>::~AgPointer<AgJsonNodeData>(&_Newnode->_Myval.second.m_data);
  operator delete(_Newnode);
}

void __fastcall std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const,AgJsonNode>>,0>>::_Erase(
        std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *this,
        std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *_Rootnode)
{
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v2; // rdi
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *i; // rbx

  v2 = _Rootnode;
  for ( i = _Rootnode; !i->_Isnil; v2 = i )
  {
    std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const,AgJsonNode>>,0>>::_Erase(
      this,
      i->_Right);
    i = i->_Left;
    v2->_Myval.second.__vftable = (AgJsonNode_vtbl *)&AgJsonNode::`vftable';
    AgPointer<AgJsonNodeData>::~AgPointer<AgJsonNodeData>(&v2->_Myval.second.m_data);
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

void __fastcall std::vector<AgJsonNode>::_Reallocate(std::vector<AgJsonNode> *this, unsigned __int64 _Count)
{
  AgJsonNode *v4; // r14
  AgJsonNode *Mylast; // rsi
  AgJsonNode *Myfirst; // rbx
  signed __int64 v7; // r15

  v4 = std::allocator<AgArchive::DirectoryEntry>::allocate((std::allocator<AgJsonNode> *)this, _Count);
  std::_Uninitialized_move_al_unchecked1<AgJsonNode *,AgJsonNode *,std::allocator<AgJsonNode>>(
    this->_Mypair._Myval2._Myfirst,
    this->_Mypair._Myval2._Mylast,
    v4,
    (std::_Wrap_alloc<std::allocator<AgJsonNode> > *)this);
  Mylast = this->_Mypair._Myval2._Mylast;
  Myfirst = this->_Mypair._Myval2._Myfirst;
  v7 = Mylast - this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    for ( ; Myfirst != Mylast; ++Myfirst )
      ((void (__fastcall *)(AgJsonNode *, _QWORD))Myfirst->~AgJsonNode)(Myfirst, 0i64);
    std::allocator<AgJsonNode>::deallocate(
      (std::allocator<AgJsonNode> *)this,
      this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  }
  this->_Mypair._Myval2._Myend = &v4[_Count];
  this->_Mypair._Myval2._Mylast = &v4[v7];
  this->_Mypair._Myval2._Myfirst = v4;
}

void __fastcall std::vector<AgJsonNode>::_Reserve(std::vector<AgJsonNode> *this, unsigned __int64 _Count)
{
  AgJsonNode *Myend; // rcx
  AgJsonNode *Mylast; // r9
  signed __int64 v6; // rdx
  unsigned __int64 v7; // r8
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx

  Myend = this->_Mypair._Myval2._Myend;
  Mylast = this->_Mypair._Myval2._Mylast;
  if ( Myend - Mylast < _Count )
  {
    v6 = Mylast - this->_Mypair._Myval2._Myfirst;
    if ( 0xAAAAAAAAAAAAAAAi64 - v6 < _Count )
      std::_Xlength_error("vector<T> too long");
    v7 = v6 + _Count;
    v8 = (unsigned __int128)(((char *)Myend - (char *)this->_Mypair._Myval2._Myfirst) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64;
    v9 = 0i64;
    v10 = ((unsigned __int64)v8 >> 63) + (v8 >> 2);
    if ( 0xAAAAAAAAAAAAAAAi64 - (v10 >> 1) >= v10 )
      v9 = v10 + (v10 >> 1);
    if ( v9 >= v7 )
      v7 = v9;
    std::vector<AgJsonNode>::_Reallocate(this, v7);
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

void __fastcall std::vector<AgJsonNode>::_Tidy(std::vector<AgJsonNode> *this)
{
  AgJsonNode *Myfirst; // rbx
  AgJsonNode *i; // rdi

  Myfirst = this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    for ( i = this->_Mypair._Myval2._Mylast; Myfirst != i; ++Myfirst )
      ((void (__fastcall *)(AgJsonNode *, _QWORD))Myfirst->~AgJsonNode)(Myfirst, 0i64);
    std::allocator<AgJsonNode>::deallocate(
      (std::allocator<AgJsonNode> *)this,
      this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

__int64 __fastcall AgJsonObject::addChild(AgJsonObject *this, AgJsonNode *value)
{
  AgReferenceCount *m_refCount; // rbx
  AgJsonNodeData *m_ptr; // rbp
  AgReferenceCount *v6; // rsi
  AgStringRef *m_data; // rdi
  std::pair<AgStringRef,AgJsonNode> *v8; // rax
  std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *v9; // rbx
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *_Newnode; // rax
  AgStringRef s2; // [rsp+38h] [rbp-70h] BYREF
  std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,AgJsonNode> > > >,bool> v13; // [rsp+48h] [rbp-60h] BYREF
  std::pair<AgStringRef,AgJsonNode> result; // [rsp+58h] [rbp-50h] BYREF

  m_refCount = this->m_data.m_ptr[1].m_refCount;
  AgStringRef::AgStringRef(&s2, &value->m_data.m_ptr->m_name);
  m_ptr = this->m_data.m_ptr;
  v6 = m_ptr[1].m_refCount;
  m_data = (AgStringRef *)v6->m_data;
  while ( !BYTE1(m_data[1].m_length) )
  {
    if ( operator<(m_data + 2, &s2) )
    {
      m_data = (AgStringRef *)m_data[1].m_text;
    }
    else
    {
      v6 = (AgReferenceCount *)m_data;
      m_data = (AgStringRef *)m_data->m_text;
    }
  }
  if ( v6 == m_ptr[1].m_refCount || operator<(&s2, (const AgStringRef *)&v6[2]) )
    v6 = m_ptr[1].m_refCount;
  if ( v6 == m_refCount )
  {
    AgStringRef::AgStringRef(&s2, &value->m_data.m_ptr->m_name);
    v8 = std::make_pair<AgStringRef,AgJsonNode &>(&result, &s2, value);
    v9 = (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this->m_data.m_ptr;
    _Newnode = std::_Tree_comp_alloc<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const,AgJsonNode>>,0>>::_Buynode<std::pair<AgStringRef,AgJsonNode>>(
                 v9 + 2,
                 v8);
    std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const,AgJsonNode>>,0>>::_Insert_nohint<std::pair<AgStringRef const,AgJsonNode> &,std::_Tree_node<std::pair<AgStringRef const,AgJsonNode>,void *> *>(
      v9 + 2,
      &v13,
      0,
      &_Newnode->_Myval,
      _Newnode);
    result.second.__vftable = (AgJsonNode_vtbl *)&AgJsonNode::`vftable';
    AgPointer<AgJsonNodeData>::~AgPointer<AgJsonNodeData>(&result.second.m_data);
    value->__vftable = (AgJsonNode_vtbl *)&AgJsonNode::`vftable';
    AgPointer<AgJsonNodeData>::~AgPointer<AgJsonNodeData>(&value->m_data);
    return 1i64;
  }
  else
  {
    value->__vftable = (AgJsonNode_vtbl *)&AgJsonNode::`vftable';
    AgPointer<AgJsonNodeData>::~AgPointer<AgJsonNodeData>(&value->m_data);
    return 0i64;
  }
}

AgJsonNode *__fastcall std::allocator<AgArchive::DirectoryEntry>::allocate(
        std::allocator<AgJsonNode> *this,
        unsigned __int64 _Count)
{
  AgJsonNode *result; // rax
  unsigned __int64 v3; // rcx
  AgJsonNodeData *v4; // rax
  AgJsonNodeData *v5; // rcx

  if ( !_Count )
    return 0i64;
  if ( _Count > 0xAAAAAAAAAAAAAAAi64 )
    std::_Xbad_alloc();
  v3 = 24 * _Count;
  if ( 24 * _Count < 0x1000 )
  {
    result = (AgJsonNode *)operator new(v3);
    if ( !result )
      invalid_parameter_noinfo_noreturn();
  }
  else
  {
    if ( v3 + 39 <= v3 )
      std::_Xbad_alloc();
    v4 = (AgJsonNodeData *)operator new(v3 + 39);
    v5 = v4;
    if ( !v4 )
      invalid_parameter_noinfo_noreturn();
    result = (AgJsonNode *)(((unsigned __int64)&v4[1].m_refCount + 7) & 0xFFFFFFFFFFFFFFE0ui64);
    result[-1].m_data.m_ptr = v5;
  }
  return result;
}

void __fastcall std::allocator<AgJsonNode>::deallocate(
        std::allocator<AgJsonNode> *this,
        AgJsonNode *_Ptr,
        unsigned __int64 _Count)
{
  AgJsonNodeData *m_ptr; // rax
  char *v4; // rdx

  if ( _Count > 0xAAAAAAAAAAAAAAAi64 )
    invalid_parameter_noinfo_noreturn();
  if ( 24 * _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    m_ptr = _Ptr[-1].m_data.m_ptr;
    if ( m_ptr >= (AgJsonNodeData *)_Ptr )
      invalid_parameter_noinfo_noreturn();
    v4 = (char *)((char *)_Ptr - (char *)m_ptr);
    if ( (unsigned __int64)v4 < 8 )
      invalid_parameter_noinfo_noreturn();
    if ( (unsigned __int64)v4 > 0x27 )
      invalid_parameter_noinfo_noreturn();
    _Ptr = (AgJsonNode *)m_ptr;
  }
  operator delete(_Ptr);
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,AgJsonNode> > > > *__fastcall std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const,AgJsonNode>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,AgJsonNode> > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,AgJsonNode> > > > _First,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,AgJsonNode> > > > _Last)
{
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Myhead; // rdx
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v7; // rax
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Left; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,AgJsonNode> > > > *v9; // rax
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v10; // rax
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Right; // rdx
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *j; // rcx
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *i; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,AgJsonNode> > > > resulta; // [rsp+30h] [rbp+8h] BYREF
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v15; // [rsp+40h] [rbp+18h]
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Ptr; // [rsp+48h] [rbp+20h]

  Ptr = _Last._Ptr;
  v15 = _First._Ptr;
  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  if ( _First._Ptr == this->_Mypair._Myval2._Myval2._Myhead->_Left && _Last._Ptr == Myhead )
  {
    std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const,AgJsonNode>>,0>>::_Erase(
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
        std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const,AgJsonNode>>,0>>::erase(
          this,
          &resulta,
          (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,AgJsonNode> > > >)v10);
        _First._Ptr = v15;
      }
      while ( v15 != Ptr );
    }
    v9 = result;
    result->_Ptr = _First._Ptr;
  }
  return v9;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,AgJsonNode> > > > *__fastcall std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const,AgJsonNode>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,AgJsonNode> > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,AgJsonNode> > > > _Where)
{
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v5; // rsi
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Right; // rax
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *j; // rax
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *i; // rax
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Left; // rdi
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Parent; // rbx
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v11; // rcx
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *k; // rax
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v13; // rcx
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *m; // rax
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,AgJsonNode> > > > *v15; // rax
  char Color; // cl
  bool n; // zf
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v18; // rdx
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v19; // r8
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v20; // rcx
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v21; // rcx
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v22; // rax
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v23; // rcx
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v24; // rax
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v25; // rax
  unsigned __int64 Mysize; // rax
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Ptr; // [rsp+60h] [rbp+18h]

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
        v15 = (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,AgJsonNode> > > > *)v5->_Parent;
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
    v20 = Parent->_Left;
    if ( Left == Parent->_Left )
    {
      v20 = Parent->_Right;
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
        v20 = Parent->_Right;
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
              this,
              v20);
            v20 = Parent->_Right;
          }
          v20->_Color = Parent->_Color;
          Parent->_Color = 1;
          v20->_Right->_Color = 1;
          std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Lrotate(
            this,
            Parent);
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
        v20 = Parent->_Left;
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
              this,
              v20);
            v20 = Parent->_Left;
          }
          v20->_Color = Parent->_Color;
          Parent->_Color = 1;
          v20->_Left->_Color = 1;
          std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Rrotate(
            this,
            Parent);
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
  v5->_Myval.second.__vftable = (AgJsonNode_vtbl *)&AgJsonNode::`vftable';
  AgPointer<AgJsonNodeData>::~AgPointer<AgJsonNodeData>(&v5->_Myval.second.m_data);
  operator delete(v5);
  Mysize = this->_Mypair._Myval2._Myval2._Mysize;
  if ( Mysize )
    this->_Mypair._Myval2._Myval2._Mysize = Mysize - 1;
  result->_Ptr = Ptr;
  return result;
}

AgJsonNode *__fastcall AgJsonNode::parse(AgJsonNode *result, AgPointer<AgStream> *stream)
{
  AgStream *m_ptr; // rdi
  unsigned int v5; // ebx
  const char *v6; // rax
  AgStringRef *v7; // rax
  unsigned int v8; // ebx
  unsigned __int8 *v9; // rdi
  unsigned int v10; // ebx
  AgStringRef *v11; // rax
  AgStringRef v13; // [rsp+30h] [rbp-68h] BYREF
  AgStringRef v14; // [rsp+40h] [rbp-58h] BYREF
  AgJsonNode v15[3]; // [rsp+50h] [rbp-48h] BYREF
  AgAllocator<1> v16; // [rsp+B0h] [rbp+18h] BYREF
  AgAllocator<1> v17; // [rsp+B8h] [rbp+20h] BYREF

  if ( stream->m_ptr->isResident(stream->m_ptr) )
  {
    m_ptr = stream->m_ptr;
    v5 = m_ptr->getSize(m_ptr);
    v6 = (const char *)m_ptr->getResidentData(m_ptr);
    AgStringRef::AgStringRef(&v14, v6, v5);
    v13 = *v7;
    AgJsonNode::parse(result, &v13);
  }
  else
  {
    v8 = stream->m_ptr->getSize(stream->m_ptr);
    v9 = (unsigned __int8 *)AgAllocator<1>::allocate(&v16, v8 + 1);
    v10 = stream->m_ptr->read(stream->m_ptr, v9, v8);
    v9[v10] = 0;
    cJSON_Minify((char *)v9);
    AgStringRef::AgStringRef(&v14, (const char *)v9, v10);
    v13 = *v11;
    AgJsonNode::parse(v15, &v13);
    AgAllocator<1>::deallocate(&v17, v9);
    result->__vftable = (AgJsonNode_vtbl *)&AgJsonNode::`vftable';
    AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(
      (AgPointer<AgPlayer> *)&result->m_data,
      (const AgPointer<AgPlayer> *)&v15[0].m_data);
    v15[0].__vftable = (AgJsonNode_vtbl *)&AgJsonNode::`vftable';
    AgPointer<AgJsonNodeData>::~AgPointer<AgJsonNodeData>(&v15[0].m_data);
  }
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)stream);
  return result;
}

AgJsonNode *__fastcall AgJsonNode::parse(AgJsonNode *result, AgStringRef *json)
{
  const char *CString; // rax
  cJSON *v5; // rsi
  const char *v6; // rax
  Concurrency::details::ThreadProxyFactory<Concurrency::details::FreeThreadProxy> *v7; // rax
  signed __int64 IsStopping; // rbp
  const char *ErrorPtr; // rsi
  unsigned int v10; // eax
  int v11; // eax
  int v12; // ebp
  unsigned int v13; // eax
  const AgStringRef *SubString; // rax
  char *v15; // rax
  unsigned __int64 v16; // rdx
  AgJsonNode *v17; // rax
  AgStringRef v19; // [rsp+30h] [rbp-38h] BYREF
  AgJsonNode resulta; // [rsp+40h] [rbp-28h] BYREF

  CString = (const char *)AgStringRef::getCString((std::shared_ptr<__ExceptionPtr> *)json);
  v5 = cJSON_Parse(CString);
  v6 = (const char *)AgStringRef::getCString((std::shared_ptr<__ExceptionPtr> *)json);
  AgStringRef::AgStringRef(&v19, v6);
  IsStopping = (int)AgSimpleThreadHost::getThreadIsStopping(v7);
  if ( v5 )
  {
    parseNode(&resulta, v5);
    cJSON_Delete(v5);
    result->__vftable = (AgJsonNode_vtbl *)&AgJsonNode::`vftable';
    AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(
      (AgPointer<AgPlayer> *)&result->m_data,
      (const AgPointer<AgPlayer> *)&resulta.m_data);
    resulta.__vftable = (AgJsonNode_vtbl *)&AgJsonNode::`vftable';
    AgPointer<AgJsonNodeData>::~AgPointer<AgJsonNodeData>(&resulta.m_data);
  }
  else
  {
    ErrorPtr = cJSON_GetErrorPtr();
    if ( ErrorPtr - (const char *)AgStringRef::getCString((std::shared_ptr<__ExceptionPtr> *)json) <= IsStopping )
    {
      AgTrace("[json] Parse error. Unknown location.");
    }
    else
    {
      v10 = (unsigned int)AgStringRef::getCString((std::shared_ptr<__ExceptionPtr> *)json);
      AgStringRef::operator[](json, (_DWORD)ErrorPtr - v10);
      v11 = IsStopping
          - (_DWORD)ErrorPtr
          + (unsigned int)AgStringRef::getCString((std::shared_ptr<__ExceptionPtr> *)json);
      v12 = 25;
      if ( v11 < 25 )
        v12 = v11;
      if ( ErrorPtr - (const char *)AgStringRef::getCString((std::shared_ptr<__ExceptionPtr> *)json) > 50 )
        AgStringRef::getCString((std::shared_ptr<__ExceptionPtr> *)json);
      v13 = (unsigned int)AgStringRef::getCString((std::shared_ptr<__ExceptionPtr> *)json);
      SubString = AgStringRef::getSubString(json, (AgStringRef *)&resulta, (unsigned int)ErrorPtr - v13, v12);
      AgString::AgString((AgString *)&v19, SubString);
      v15 = AgString::getCString((AgString *)&v19);
      AgTrace("[json] Parse error near: %s", v15);
      AgString::~AgString((AgString *)&v19, v16);
    }
    v17 = AgJsonNode::Null();
    result->__vftable = (AgJsonNode_vtbl *)&AgJsonNode::`vftable';
    AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(
      (AgPointer<AgPlayer> *)&result->m_data,
      (const AgPointer<AgPlayer> *)&v17->m_data);
  }
  return result;
}

AgJsonNode *__fastcall parseNode(AgJsonNode *result, const cJSON *node)
{
  AgJsonNode *v3; // rsi
  char *string; // rax
  const char *v5; // rdx
  const AgJsonNode *v6; // rax
  AgStringRef v7; // xmm6
  const AgString *v8; // rax
  __int128 *v9; // rax
  __int128 v10; // xmm7
  AgString *v11; // rax
  AgString *v12; // rbx
  const AgPointer<AgPlayer> *v13; // rax
  AgPointer<AgJsonNodeData> *v14; // rbx
  unsigned __int64 v15; // rdx
  AgStringRef v16; // xmm6
  AgString *v17; // rax
  AgString *v18; // rbx
  const AgPointer<AgPlayer> *v19; // rax
  AgPointer<AgJsonNodeData> *v20; // rbx
  AgStringRef v21; // xmm6
  AgString *v22; // rax
  cJSON *child; // rsi
  cJSON *i; // rbx
  AgJsonNode *v25; // rax
  AgJsonNode *v26; // rax
  AgJsonObject v28; // [rsp+30h] [rbp-71h] BYREF
  AgJsonNode resulta; // [rsp+48h] [rbp-59h] BYREF
  AgStringRef v30; // [rsp+68h] [rbp-39h] BYREF
  AgPointer<AgJsonNodeData> v31; // [rsp+78h] [rbp-29h] BYREF
  AgJsonNode v32; // [rsp+88h] [rbp-19h] BYREF
  AgStringRef copy; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v34; // [rsp+B8h] [rbp+17h]
  AgJsonNode *v36; // [rsp+110h] [rbp+6Fh]

  v34 = -2i64;
  v3 = result;
  string = node->string;
  v5 = &pnewText;
  if ( string )
    v5 = string;
  AgStringRef::AgStringRef(&v30, v5);
  switch ( node->type )
  {
    case 0:
      v21 = v30;
      v22 = (AgString *)operator new(0x40ui64);
      v18 = v22;
      if ( v22 )
      {
        *(AgStringRef *)&resulta.__vftable = v21;
        *(_QWORD *)&v22->m_length = 0i64;
        LODWORD(v22->m_text) = 0;
        AgString::AgString(v22 + 1, (const AgStringRef *)&resulta);
        v18[2].m_length = 2;
        v18[2].m_text = 0i64;
        AgString::AgString(v18 + 3);
      }
      else
      {
        v18 = 0i64;
      }
      goto LABEL_12;
    case 1:
      v16 = v30;
      v17 = (AgString *)operator new(0x40ui64);
      v18 = v17;
      if ( v17 )
      {
        *(AgStringRef *)&resulta.__vftable = v16;
        *(_QWORD *)&v17->m_length = 0i64;
        LODWORD(v17->m_text) = 0;
        AgString::AgString(v17 + 1, (const AgStringRef *)&resulta);
        v18[2].m_length = 2;
        v18[2].m_text = (char *)0x3FF0000000000000i64;
        AgString::AgString(v18 + 3);
      }
      else
      {
        v18 = 0i64;
      }
LABEL_12:
      AgPointer<AgJsonNodeData>::AgPointer<AgJsonNodeData>(&v31, (AgJsonNodeData *)v18);
      v20 = (AgPointer<AgJsonNodeData> *)v19;
      AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>((AgPointer<AgPlayer> *)&v28.m_data, v19);
      AgPointer<AgJsonNodeData>::~AgPointer<AgJsonNodeData>(v20);
      v28.__vftable = (AgJsonObject_vtbl *)&AgJsonValue::`vftable';
      AgJsonNode::AgJsonNode(v3, &v28);
      v28.__vftable = (AgJsonObject_vtbl *)&AgJsonNode::`vftable';
      AgPointer<AgJsonNodeData>::~AgPointer<AgJsonNodeData>(&v28.m_data);
      return v3;
    case 3:
      copy = v30;
      AgJsonValue::AgJsonValue((AgJsonValue *)&v28, node->valuedouble, &copy);
      AgJsonNode::AgJsonNode(v3, v6);
      v28.__vftable = (AgJsonObject_vtbl *)&AgJsonNode::`vftable';
      AgPointer<AgJsonNodeData>::~AgPointer<AgJsonNodeData>(&v28.m_data);
      return v3;
    case 4:
      v7 = v30;
      AgString::AgString((AgString *)&resulta, node->valuestring, -1);
      AgStringRef::AgStringRef((AgStringRef *)&v28, v8);
      v10 = *v9;
      v11 = (AgString *)operator new(0x40ui64);
      v12 = v11;
      if ( v11 )
      {
        *(_OWORD *)&v32.__vftable = v10;
        copy = v7;
        *(_QWORD *)&v11->m_length = 0i64;
        LODWORD(v11->m_text) = 0;
        AgString::AgString(v11 + 1, &copy);
        v12[2].m_length = 1;
        AgString::AgString(v12 + 3, (const AgStringRef *)&v32);
      }
      else
      {
        v12 = 0i64;
      }
      AgPointer<AgJsonNodeData>::AgPointer<AgJsonNodeData>(&v31, (AgJsonNodeData *)v12);
      v14 = (AgPointer<AgJsonNodeData> *)v13;
      v32.__vftable = (AgJsonNode_vtbl *)&AgJsonNode::`vftable';
      AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>((AgPointer<AgPlayer> *)&v32.m_data, v13);
      AgPointer<AgJsonNodeData>::~AgPointer<AgJsonNodeData>(v14);
      v32.__vftable = (AgJsonNode_vtbl *)&AgJsonValue::`vftable';
      AgJsonNode::AgJsonNode(v3, &v32);
      v32.__vftable = (AgJsonNode_vtbl *)&AgJsonNode::`vftable';
      AgPointer<AgJsonNodeData>::~AgPointer<AgJsonNodeData>(&v32.m_data);
      AgString::~AgString((AgString *)&resulta, v15);
      return v3;
    case 5:
      *(AgStringRef *)&resulta.__vftable = v30;
      AgJsonArray::AgJsonArray((AgJsonArray *)&v28, (AgStringRef *)&resulta);
      if ( node->child )
      {
        child = node->child;
        do
        {
          v36 = parseNode(&resulta, child);
          std::vector<AgJsonNode>::push_back((std::vector<AgJsonNode> *)&v28.m_data.m_ptr[1], v36);
          v36->__vftable = (AgJsonNode_vtbl *)&AgJsonNode::`vftable';
          AgPointer<AgJsonNodeData>::~AgPointer<AgJsonNodeData>(&v36->m_data);
          child = child->next;
        }
        while ( child );
        v3 = result;
      }
      goto LABEL_20;
    case 6:
      *(AgStringRef *)&resulta.__vftable = v30;
      AgJsonObject::AgJsonObject(&v28, (AgStringRef *)&resulta);
      for ( i = node->child; i; i = i->next )
      {
        v25 = parseNode(&resulta, i);
        AgJsonObject::addChild(&v28, v25);
      }
LABEL_20:
      v3->__vftable = (AgJsonNode_vtbl *)&AgJsonNode::`vftable';
      AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(
        (AgPointer<AgPlayer> *)&v3->m_data,
        (const AgPointer<AgPlayer> *)&v28.m_data);
      v28.__vftable = (AgJsonObject_vtbl *)&AgJsonNode::`vftable';
      AgPointer<AgJsonNodeData>::~AgPointer<AgJsonNodeData>(&v28.m_data);
      break;
    default:
      v26 = AgJsonNode::Null();
      v3->__vftable = (AgJsonNode_vtbl *)&AgJsonNode::`vftable';
      AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(
        (AgPointer<AgPlayer> *)&v3->m_data,
        (const AgPointer<AgPlayer> *)&v26->m_data);
      break;
  }
  return v3;
}

void __fastcall std::vector<AgJsonNode>::push_back(std::vector<AgJsonNode> *this, const AgJsonNode *_Val)
{
  AgJsonNode *Mylast; // rcx
  signed __int64 v5; // rdi
  AgJsonNode *v6; // r8
  AgJsonNode *v7; // rdx
  AgJsonNode *v8; // rcx

  Mylast = this->_Mypair._Myval2._Mylast;
  if ( _Val >= Mylast || this->_Mypair._Myval2._Myfirst > _Val )
  {
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<AgJsonNode>::_Reserve(this, 1ui64);
    v8 = this->_Mypair._Myval2._Mylast;
    if ( v8 )
    {
      v8->__vftable = (AgJsonNode_vtbl *)&AgJsonNode::`vftable';
      AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(
        (AgPointer<AgPlayer> *)&v8->m_data,
        (const AgPointer<AgPlayer> *)&_Val->m_data);
    }
  }
  else
  {
    v5 = _Val - this->_Mypair._Myval2._Myfirst;
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<AgJsonNode>::_Reserve(this, 1ui64);
    v6 = this->_Mypair._Myval2._Mylast;
    v7 = &this->_Mypair._Myval2._Myfirst[v5];
    if ( v6 )
    {
      v6->__vftable = (AgJsonNode_vtbl *)&AgJsonNode::`vftable';
      AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(
        (AgPointer<AgPlayer> *)&v6->m_data,
        (const AgPointer<AgPlayer> *)&v7->m_data);
    }
  }
  ++this->_Mypair._Myval2._Mylast;
}

