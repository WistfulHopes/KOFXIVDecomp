#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/silverware/git/sdk/system/agprofile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/silverware/git/sdk/agpointer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
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
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/silverware/git/sdk/system/agprofilemanager.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"

std::piecewise_construct_t std::piecewise_construct; // 0x14086B210
typedef AgDefaultProfileManager AgPlatformProfileManager;
typedef AgPointer<AgProfile> AgProfilePtr;
AgProfileManager::AgProfileManager(); // 0x1406804C0
std::map<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > > >::~map<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > > >(); // 0x1406806C0
std::map<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > >::~map<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > >(); // 0x140680700
AgProfileManager::~AgProfileManager(); // 0x140680740
AgProfileManager * AgProfileManager::createSingleton(); // 0x1406809E0
void AgProfileManager::update(); // 0x14002E7C0
long AgProfileManager::onSingletonExit(); // 0x1400482A0//decompilation failure at 14086B210!
void __fastcall AgProfileManager::AgProfileManager(AgProfileManager *this)
{
  this->__vftable = (AgProfileManager_vtbl *)&AgSingleton<AgProfileManager>::`vftable';
  this->__vftable = (AgProfileManager_vtbl *)&AgProfileManager::`vftable';
  this->m_nextProfileId = 0i64;
  this->m_profiles._Mypair._Myval2._Myval2._Myhead = 0i64;
  this->m_profiles._Mypair._Myval2._Myval2._Mysize = 0i64;
  this->m_profiles._Mypair._Myval2._Myval2._Myhead = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,AgPointer<AgProfile>>>,0>>::_Buyheadnode(&this->m_profiles);
  this->m_userProfiles._Mypair._Myval2._Myval2._Myhead = 0i64;
  this->m_userProfiles._Mypair._Myval2._Myval2._Mysize = 0i64;
  this->m_userProfiles._Mypair._Myval2._Myval2._Myhead = std::_Tree_comp_alloc<std::_Tmap_traits<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const,AgPointer<AgProfile>>>,0>>::_Buyheadnode(&this->m_userProfiles);
}

void __fastcall AgPointer<AgProfile>::~AgPointer<AgProfile>(AgPointer<AgProfile> *this)
{
  AgProfile *m_ptr; // rdi
  AgReferenceCount *m_ref; // rbx
  int v3; // esi

  m_ptr = this->m_ptr;
  this->m_ptr = 0i64;
  m_ref = this->m_ref;
  if ( this->m_ref )
  {
    this->m_ref = 0i64;
    v3 = 0;
    if ( !(unsigned int)AgAtomicDecrement(&m_ref->m_strongCount) )
    {
      if ( !(unsigned int)AgAtomicDecrement(&m_ref->m_weakCount) )
        v3 = 1;
      m_ref->m_data = 0i64;
      if ( m_ptr )
        ((void (__fastcall *)(AgProfile *, __int64))m_ptr->~AgProfile)(m_ptr, 1i64);
      if ( v3 )
        AgReferenceCount::operator delete(m_ref);
    }
  }
}

void __fastcall AgSingleton<AgProfileManager>::~AgSingleton<AgProfileManager>(AgSingleton<AgProfileManager> *this)
{
  this->__vftable = (AgSingleton<AgProfileManager>_vtbl *)&AgSingleton<AgProfileManager>::`vftable';
}

void __fastcall std::_Tree<std::_Tmap_traits<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const,AgPointer<AgProfile>>>,0>>::~_Tree<std::_Tmap_traits<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const,AgPointer<AgProfile>>>,0>>(
        std::_Tree<std::_Tmap_traits<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > >,0> > *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgProfile> > > > > result; // [rsp+48h] [rbp+10h] BYREF

  std::_Tree<std::_Tmap_traits<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const,AgPointer<AgProfile>>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgProfile> > > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgProfile> > > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::_Tree<std::_Tmap_traits<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,AgPointer<AgProfile>>>,0>>::~_Tree<std::_Tmap_traits<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,AgPointer<AgProfile>>>,0>>(
        std::_Tree<std::_Tmap_traits<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > >,0> > *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > > > result; // [rsp+48h] [rbp+10h] BYREF

  std::_Tree<std::_Tmap_traits<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,AgPointer<AgProfile>>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const,AgPointer<AgProfile>>>,0>>::~_Tree_comp_alloc<std::_Tmap_traits<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const,AgPointer<AgProfile>>>,0>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > >,0> > *this)
{
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,AgPointer<AgProfile>>>,0>>::~_Tree_comp_alloc<std::_Tmap_traits<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,AgPointer<AgProfile>>>,0>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > >,0> > *this)
{
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::map<__int64,AgPointer<AgProfile>>::~map<__int64,AgPointer<AgProfile>>(
        std::map<__int64,AgPointer<AgProfile>> *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgProfile> > > > > result; // [rsp+48h] [rbp+10h] BYREF

  std::_Tree<std::_Tmap_traits<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const,AgPointer<AgProfile>>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgProfile> > > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgProfile> > > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::map<unsigned __int64,AgPointer<AgProfile>>::~map<unsigned __int64,AgPointer<AgProfile>>(
        std::map<unsigned __int64,AgPointer<AgProfile>> *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > > > result; // [rsp+48h] [rbp+10h] BYREF

  std::_Tree<std::_Tmap_traits<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,AgPointer<AgProfile>>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall AgProfileManager::~AgProfileManager(AgProfileManager *this)
{
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgProfile> > > > > *p_m_userProfiles; // rbx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgProfile> > > > > result; // [rsp+50h] [rbp+18h] BYREF

  p_m_userProfiles = (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgProfile> > > > > *)&this->m_userProfiles;
  std::_Tree<std::_Tmap_traits<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const,AgPointer<AgProfile>>>,0>>::erase(
    &this->m_userProfiles,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgProfile> > > > >)p_m_userProfiles->_Ptr->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgProfile> > > > >)p_m_userProfiles->_Ptr);
  operator delete(p_m_userProfiles->_Ptr);
  std::_Tree<std::_Tmap_traits<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,AgPointer<AgProfile>>>,0>>::erase(
    &this->m_profiles,
    (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > > > *)&result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > > >)this->m_profiles._Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > > >)this->m_profiles._Mypair._Myval2._Myval2._Myhead);
  operator delete(this->m_profiles._Mypair._Myval2._Myval2._Myhead);
  this->__vftable = (AgProfileManager_vtbl *)&AgSingleton<AgProfileManager>::`vftable';
}

std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const,AgPointer<AgProfile>>>,0>>::_Buyheadnode(
        std::_Tree_comp_alloc<std::_Tmap_traits<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > >,0> > *this)
{
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *result; // rax

  result = (std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *)operator new(0x38ui64);
  if ( !result )
    invalid_parameter_noinfo_noreturn();
  result->_Left = result;
  if ( result != (std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *)-8i64 )
    result->_Parent = result;
  if ( result != (std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *)-16i64 )
    result->_Right = result;
  *(_WORD *)&result->_Color = 257;
  return result;
}

std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,AgPointer<AgProfile>>>,0>>::_Buyheadnode(
        std::_Tree_comp_alloc<std::_Tmap_traits<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > >,0> > *this)
{
  std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *result; // rax

  result = (std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *)operator new(0x38ui64);
  if ( !result )
    invalid_parameter_noinfo_noreturn();
  result->_Left = result;
  if ( result != (std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *)-8i64 )
    result->_Parent = result;
  if ( result != (std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *)-16i64 )
    result->_Right = result;
  *(_WORD *)&result->_Color = 257;
  return result;
}

void __fastcall std::_Tree<std::_Tmap_traits<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const,AgPointer<AgProfile>>>,0>>::_Erase(
        std::_Tree<std::_Tmap_traits<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > >,0> > *this,
        std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *_Rootnode)
{
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *v2; // rdi
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *i; // rbx

  v2 = _Rootnode;
  for ( i = _Rootnode; !i->_Isnil; v2 = i )
  {
    std::_Tree<std::_Tmap_traits<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const,AgPointer<AgProfile>>>,0>>::_Erase(
      this,
      i->_Right);
    i = i->_Left;
    AgPointer<AgProfile>::~AgPointer<AgProfile>(&v2->_Myval.second);
    operator delete(v2);
  }
}

void __fastcall std::_Tree<std::_Tmap_traits<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,AgPointer<AgProfile>>>,0>>::_Erase(
        std::_Tree<std::_Tmap_traits<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > >,0> > *this,
        std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *_Rootnode)
{
  std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *v2; // rdi
  std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *i; // rbx

  v2 = _Rootnode;
  for ( i = _Rootnode; !i->_Isnil; v2 = i )
  {
    std::_Tree<std::_Tmap_traits<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,AgPointer<AgProfile>>>,0>>::_Erase(
      this,
      i->_Right);
    i = i->_Left;
    AgPointer<AgProfile>::~AgPointer<AgProfile>(&v2->_Myval.second);
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

void __fastcall AgProfileManager::createSingleton()
{
  AgDefaultProfileManager *v0; // rax

  v0 = (AgDefaultProfileManager *)operator new(0x30ui64);
  if ( v0 )
    AgDefaultProfileManager::AgDefaultProfileManager(v0);
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgProfile> > > > > *__fastcall std::_Tree<std::_Tmap_traits<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const,AgPointer<AgProfile>>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgProfile> > > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgProfile> > > > > _First,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgProfile> > > > > _Last)
{
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *Myhead; // rdx
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *v7; // rax
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *Left; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgProfile> > > > > *v9; // rax
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *v10; // rax
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *Right; // rdx
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *j; // rcx
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *i; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgProfile> > > > > resulta; // [rsp+30h] [rbp+8h] BYREF
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *v15; // [rsp+40h] [rbp+18h]
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *Ptr; // [rsp+48h] [rbp+20h]

  Ptr = _Last._Ptr;
  v15 = _First._Ptr;
  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  if ( _First._Ptr == this->_Mypair._Myval2._Myval2._Myhead->_Left && _Last._Ptr == Myhead )
  {
    std::_Tree<std::_Tmap_traits<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const,AgPointer<AgProfile>>>,0>>::_Erase(
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
        std::_Tree<std::_Tmap_traits<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const,AgPointer<AgProfile>>>,0>>::erase(
          this,
          &resulta,
          (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgProfile> > > > >)v10);
        _First._Ptr = v15;
      }
      while ( v15 != Ptr );
    }
    v9 = result;
    result->_Ptr = _First._Ptr;
  }
  return v9;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgProfile> > > > > *__fastcall std::_Tree<std::_Tmap_traits<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const,AgPointer<AgProfile>>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgProfile> > > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgProfile> > > > > _Where)
{
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *v5; // rsi
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *Right; // rax
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *j; // rax
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *i; // rax
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *Left; // rdi
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *Parent; // rbx
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *v11; // rcx
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *k; // rax
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *v13; // rcx
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *m; // rax
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgProfile> > > > > *v15; // rax
  char Color; // cl
  bool n; // zf
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *v18; // rdx
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *v19; // r8
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v20; // rcx
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *v21; // rcx
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *v22; // rax
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *v23; // rcx
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *v24; // rax
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *v25; // rax
  unsigned __int64 Mysize; // rax
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgProfile> >,void *> *Ptr; // [rsp+60h] [rbp+18h]

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
        v15 = (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgProfile> > > > > *)v5->_Parent;
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
  AgPointer<AgProfile>::~AgPointer<AgProfile>(&v5->_Myval.second);
  operator delete(v5);
  Mysize = this->_Mypair._Myval2._Myval2._Mysize;
  if ( Mysize )
    this->_Mypair._Myval2._Myval2._Mysize = Mysize - 1;
  result->_Ptr = Ptr;
  return result;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > > > *__fastcall std::_Tree<std::_Tmap_traits<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,AgPointer<AgProfile>>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > > > _First,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > > > _Last)
{
  std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *Myhead; // rdx
  std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *v7; // rax
  std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *Left; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > > > *v9; // rax
  std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *v10; // rax
  std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *Right; // rdx
  std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *j; // rcx
  std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *i; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > > > resulta; // [rsp+30h] [rbp+8h] BYREF
  std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *v15; // [rsp+40h] [rbp+18h]
  std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *Ptr; // [rsp+48h] [rbp+20h]

  Ptr = _Last._Ptr;
  v15 = _First._Ptr;
  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  if ( _First._Ptr == this->_Mypair._Myval2._Myval2._Myhead->_Left && _Last._Ptr == Myhead )
  {
    std::_Tree<std::_Tmap_traits<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,AgPointer<AgProfile>>>,0>>::_Erase(
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
        std::_Tree<std::_Tmap_traits<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,AgPointer<AgProfile>>>,0>>::erase(
          this,
          &resulta,
          (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > > >)v10);
        _First._Ptr = v15;
      }
      while ( v15 != Ptr );
    }
    v9 = result;
    result->_Ptr = _First._Ptr;
  }
  return v9;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > > > *__fastcall std::_Tree<std::_Tmap_traits<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,AgPointer<AgProfile>>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > > > _Where)
{
  std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *v5; // rsi
  std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *Right; // rax
  std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *j; // rax
  std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *i; // rax
  std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *Left; // rdi
  std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *Parent; // rbx
  std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *v11; // rcx
  std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *k; // rax
  std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *v13; // rcx
  std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *m; // rax
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > > > *v15; // rax
  char Color; // cl
  bool n; // zf
  std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *v18; // rdx
  std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *v19; // r8
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v20; // rcx
  std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *v21; // rcx
  std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *v22; // rax
  std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *v23; // rcx
  std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *v24; // rax
  std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *v25; // rax
  unsigned __int64 Mysize; // rax
  std::_Tree_node<std::pair<unsigned __int64 const ,AgPointer<AgProfile> >,void *> *Ptr; // [rsp+60h] [rbp+18h]

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
        v15 = (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > > > *)v5->_Parent;
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
  AgPointer<AgProfile>::~AgPointer<AgProfile>(&v5->_Myval.second);
  operator delete(v5);
  Mysize = this->_Mypair._Myval2._Myval2._Mysize;
  if ( Mysize )
    this->_Mypair._Myval2._Myval2._Mysize = Mysize - 1;
  result->_Ptr = Ptr;
  return result;
}

__int64 __fastcall AgUser::isSignedIn(Concurrency::details::ThreadInternalContext *this)
{
  return 1i64;
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

