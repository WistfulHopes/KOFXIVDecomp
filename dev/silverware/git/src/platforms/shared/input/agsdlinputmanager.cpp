#include "dev/silverware/git/src/platforms/pc/sdl/include/sdl_stdinc.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/silverware/git/sdk/agpointer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/silverware/git/src/platforms/pc/sdl/include/sdl_endian.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/src/platforms/pc/sdl/include/sdl_rect.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/silverware/git/src/platforms/shared/input/agsdljoystickcontroller.h"
#include "dev/silverware/git/src/platforms/shared/input/agsdlgamepadcontroller.h"
#include "dev/silverware/git/sdk/input/agcontrolleraxiscomponent.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/silverware/git/sdk/util/agjsondata.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/silverware/git/src/platforms/shared/input/agsdlinputmanager.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/silverware/git/sdk/input/agcontrollerrumblecomponent.h"
#include "dev/silverware/git/sdk/system/agsystemmanager.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/silverware/git/sdk/system/agsystemconfig.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"

std::piecewise_construct_t std::piecewise_construct; // 0x14086F838
AgSDLInputManager::AgSDLInputManager(); // 0x140690A50
std::map<_SDL_GameController * __ptr64,__int64,std::less<_SDL_GameController * __ptr64>,std::allocator<std::pair<_SDL_GameController * __ptr64 const,__int64> > >::~map<_SDL_GameController * __ptr64,__int64,std::less<_SDL_GameController * __ptr64>,std::allocator<std::pair<_SDL_GameController * __ptr64 const,__int64> > >(); // 0x140690BA0
std::map<_SDL_Joystick * __ptr64,__int64,std::less<_SDL_Joystick * __ptr64>,std::allocator<std::pair<_SDL_Joystick * __ptr64 const,__int64> > >::~map<_SDL_Joystick * __ptr64,__int64,std::less<_SDL_Joystick * __ptr64>,std::allocator<std::pair<_SDL_Joystick * __ptr64 const,__int64> > >(); // 0x140690BE0
AgSDLInputManager::~AgSDLInputManager(); // 0x140690C60
void AgSDLInputManager::addSDLController(long id); // 0x140690E90
void AgSDLInputManager::removeSDLController(long instanceId); // 0x140692180
void AgSDLInputManager::addSDLJoystick(long id); // 0x1406910C0
void AgSDLInputManager::removeSDLJoystick(long instanceId); // 0x1406923A0
long AgSDLInputManager::onSingletonInit(); // 0x140691CB0
AgControllerHardwareType AgSDLInputManager::getHardwareType(_SDL_Joystick * joy, AgControllerUID & uid); // 0x1406914D0//decompilation failure at 14086F838!
std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<_SDL_GameController * const &>,std::tuple<>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> >,0> > *this,
        const std::piecewise_construct_t *<_Val_0>,
        std::tuple<_SDL_GameController * const &> *<_Val_1>,
        std::tuple<> *<_Val_2>)
{
  std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *v5; // r9

  v5 = std::_Tree_comp_alloc<std::_Tmap_traits<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64>>,0>>::_Buynode0(this);
  *(_WORD *)&v5->_Color = 0;
  if ( v5 != (std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *)-32i64 )
  {
    v5->_Myval.first = *<_Val_1>->_Myfirst._Val;
    v5->_Myval.second = 0i64;
  }
  return v5;
}

std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<_SDL_Joystick * const &>,std::tuple<>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *this,
        const std::piecewise_construct_t *<_Val_0>,
        std::tuple<_SDL_Joystick * const &> *<_Val_1>,
        std::tuple<> *<_Val_2>)
{
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *v5; // r9

  v5 = std::_Tree_comp_alloc<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64>>,0>>::_Buynode0(this);
  *(_WORD *)&v5->_Color = 0;
  if ( v5 != (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)-32i64 )
  {
    v5->_Myval.first = *<_Val_1>->_Myfirst._Val;
    v5->_Myval.second = 0i64;
  }
  return v5;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > *__fastcall std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Insert_at<std::pair<int const,AgRectangle> &,std::_Tree_node<std::pair<int const,AgRectangle>,void *> *>(
        std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > *result,
        bool _Addleft,
        std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *_Wherenode,
        std::pair<_SDL_Joystick * const,__int64> *_Val,
        std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *_Node)
{
  unsigned __int64 Mysize; // rax
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *Myhead; // rax
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *v10; // rax
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *Parent; // rcx
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *v12; // r8
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *Left; // rdx
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *Right; // rdx
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *v15; // rdx
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *v16; // rcx
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *v17; // rdx
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *v18; // r8
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *v19; // rcx
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *v20; // rcx
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *v21; // rdx
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *v22; // rcx
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *v23; // rcx
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *v24; // rcx
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *v25; // rax
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *v26; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > *v27; // rax

  Mysize = this->_Mypair._Myval2._Myval2._Mysize;
  if ( Mysize >= 0x555555555555554i64 )
  {
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
LABEL_8:
    Myhead->_Right = _Node;
    goto LABEL_9;
  }
  if ( !_Addleft )
  {
    _Wherenode->_Right = _Node;
    Myhead = this->_Mypair._Myval2._Myval2._Myhead;
    if ( _Wherenode != this->_Mypair._Myval2._Myval2._Myhead->_Right )
      goto LABEL_9;
    goto LABEL_8;
  }
  _Wherenode->_Left = _Node;
  if ( _Wherenode == this->_Mypair._Myval2._Myval2._Myhead->_Left )
    this->_Mypair._Myval2._Myval2._Myhead->_Left = _Node;
LABEL_9:
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
          v15 = Parent->_Right;
          v10 = v10->_Parent;
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
      v10->_Parent->_Parent->_Color = 0;
      v10 = v10->_Parent->_Parent;
    }
    else
    {
      if ( Left->_Color )
      {
        if ( v10 == Parent->_Left )
        {
          v21 = Parent->_Left;
          v10 = v10->_Parent;
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
        goto LABEL_49;
      }
      Parent->_Color = 1;
      Left->_Color = 1;
      v10->_Parent->_Parent->_Color = 0;
      v10 = v10->_Parent->_Parent;
    }
  }
  v25 = this->_Mypair._Myval2._Myval2._Myhead;
  result->_Ptr = _Node;
  v26 = v25->_Parent;
  v27 = result;
  v26->_Color = 1;
  return v27;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_GameController * const,__int64> > > > *__fastcall std::_Tree<std::_Tmap_traits<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64>>,0>>::_Insert_hint<std::pair<_SDL_GameController * const,__int64> &,std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *>(
        std::_Tree<std::_Tmap_traits<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_GameController * const,__int64> > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_GameController * const,__int64> > > > _Where,
        std::pair<_SDL_GameController * const,__int64> *_Val,
        std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *_Newnode)
{
  std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *Myhead; // rax
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *Right; // r9
  _SDL_GameController *first; // r12
  bool v12; // cf
  std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *Ptr; // rax
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *Left; // r9
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *Parent; // rcx
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *v16; // rbx
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgUser> > > > > v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+38h] [rbp-30h]
  std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_GameController * const,__int64> > > >,bool> resulta; // [rsp+40h] [rbp-28h] BYREF

  v18 = -2i64;
  v17._Ptr = 0i64;
  if ( !this->_Mypair._Myval2._Myval2._Mysize )
  {
    std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Insert_at<std::pair<int const,AgRectangle> &,std::_Tree_node<std::pair<int const,AgRectangle>,void *> *>(
      (std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *)this,
      (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > *)result,
      1,
      (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)this->_Mypair._Myval2._Myval2._Myhead,
      (std::pair<_SDL_Joystick * const,__int64> *)_Val,
      (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)_Newnode);
    return result;
  }
  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  if ( _Where._Ptr == this->_Mypair._Myval2._Myval2._Myhead->_Left )
  {
    if ( _Val->first < _Where._Ptr->_Myval.first )
    {
      std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Insert_at<std::pair<int const,AgRectangle> &,std::_Tree_node<std::pair<int const,AgRectangle>,void *> *>(
        (std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *)this,
        (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > *)result,
        1,
        (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)_Where._Ptr,
        (std::pair<_SDL_Joystick * const,__int64> *)_Val,
        (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)_Newnode);
      return result;
    }
    goto LABEL_33;
  }
  if ( _Where._Ptr == Myhead )
  {
    Right = (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)Myhead->_Right;
    if ( Right->_Myval.first < _Val->first )
    {
      std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Insert_at<std::pair<int const,AgRectangle> &,std::_Tree_node<std::pair<int const,AgRectangle>,void *> *>(
        (std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *)this,
        (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > *)result,
        0,
        Right,
        (std::pair<_SDL_Joystick * const,__int64> *)_Val,
        (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)_Newnode);
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
            || Ptr != (std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *)Parent->_Left )
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
        std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Insert_at<std::pair<int const,AgRectangle> &,std::_Tree_node<std::pair<int const,AgRectangle>,void *> *>(
          (std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *)this,
          (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > *)result,
          0,
          (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)Left,
          (std::pair<_SDL_Joystick * const,__int64> *)_Val,
          (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)_Newnode);
      else
        std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Insert_at<std::pair<int const,AgRectangle> &,std::_Tree_node<std::pair<int const,AgRectangle>,void *> *>(
          (std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *)this,
          (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > *)result,
          1,
          (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)_Where._Ptr,
          (std::pair<_SDL_Joystick * const,__int64> *)_Val,
          (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)_Newnode);
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
    result->_Ptr = (std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *)std::_Tree<std::_Tmap_traits<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64>>,0>>::_Insert_nohint<std::pair<_SDL_GameController * const,__int64> &,std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *>(
                                                                                               this,
                                                                                               &resulta,
                                                                                               0,
                                                                                               _Val,
                                                                                               _Newnode)->first;
    return result;
  }
  if ( _Where._Ptr->_Right->_Isnil )
    std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Insert_at<std::pair<int const,AgRectangle> &,std::_Tree_node<std::pair<int const,AgRectangle>,void *> *>(
      (std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *)this,
      (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > *)result,
      0,
      (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)_Where._Ptr,
      (std::pair<_SDL_Joystick * const,__int64> *)_Val,
      (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)_Newnode);
  else
    std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Insert_at<std::pair<int const,AgRectangle> &,std::_Tree_node<std::pair<int const,AgRectangle>,void *> *>(
      (std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *)this,
      (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > *)result,
      1,
      (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)v17._Ptr,
      (std::pair<_SDL_Joystick * const,__int64> *)_Val,
      (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)_Newnode);
  return result;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > *__fastcall std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64>>,0>>::_Insert_hint<std::pair<_SDL_Joystick * const,__int64> &,std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *>(
        std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > _Where,
        std::pair<_SDL_Joystick * const,__int64> *_Val,
        std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *_Newnode)
{
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *Myhead; // rax
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *Right; // r9
  _SDL_Joystick *first; // r12
  bool v12; // cf
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *Ptr; // rax
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *Left; // r9
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *Parent; // rcx
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *v16; // rbx
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgUser> > > > > v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+38h] [rbp-30h]
  std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > >,bool> resulta; // [rsp+40h] [rbp-28h] BYREF

  v18 = -2i64;
  v17._Ptr = 0i64;
  if ( !this->_Mypair._Myval2._Myval2._Mysize )
  {
    std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Insert_at<std::pair<int const,AgRectangle> &,std::_Tree_node<std::pair<int const,AgRectangle>,void *> *>(
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
      std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Insert_at<std::pair<int const,AgRectangle> &,std::_Tree_node<std::pair<int const,AgRectangle>,void *> *>(
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
      std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Insert_at<std::pair<int const,AgRectangle> &,std::_Tree_node<std::pair<int const,AgRectangle>,void *> *>(
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
            || Ptr != (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)Parent->_Left )
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
        std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Insert_at<std::pair<int const,AgRectangle> &,std::_Tree_node<std::pair<int const,AgRectangle>,void *> *>(
          this,
          result,
          0,
          (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)Left,
          _Val,
          _Newnode);
      else
        std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Insert_at<std::pair<int const,AgRectangle> &,std::_Tree_node<std::pair<int const,AgRectangle>,void *> *>(
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
    result->_Ptr = (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64>>,0>>::_Insert_nohint<std::pair<_SDL_Joystick * const,__int64> &,std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *>(
                                                                                         this,
                                                                                         &resulta,
                                                                                         0,
                                                                                         _Val,
                                                                                         _Newnode)->first;
    return result;
  }
  if ( _Where._Ptr->_Right->_Isnil )
    std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Insert_at<std::pair<int const,AgRectangle> &,std::_Tree_node<std::pair<int const,AgRectangle>,void *> *>(
      this,
      result,
      0,
      _Where._Ptr,
      _Val,
      _Newnode);
  else
    std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Insert_at<std::pair<int const,AgRectangle> &,std::_Tree_node<std::pair<int const,AgRectangle>,void *> *>(
      this,
      result,
      1,
      (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)v17._Ptr,
      _Val,
      _Newnode);
  return result;
}

std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_GameController * const,__int64> > > >,bool> *__fastcall std::_Tree<std::_Tmap_traits<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64>>,0>>::_Insert_nohint<std::pair<_SDL_GameController * const,__int64> &,std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *>(
        std::_Tree<std::_Tmap_traits<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> >,0> > *this,
        std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_GameController * const,__int64> > > >,bool> *result,
        bool _Leftish,
        std::pair<_SDL_GameController * const,__int64> *_Val,
        std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *_Newnode)
{
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *Myhead; // r9
  std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *Parent; // r10
  bool v10; // r8
  std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *Right; // rbx
  std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *v13; // rax
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > resulta; // [rsp+40h] [rbp-18h] BYREF

  Myhead = (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)this->_Mypair._Myval2._Myval2._Myhead;
  Parent = this->_Mypair._Myval2._Myval2._Myhead->_Parent;
  v10 = 1;
  while ( !Parent->_Isnil )
  {
    Myhead = (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)Parent;
    if ( _Leftish )
      v10 = Parent->_Myval.first >= _Val->first;
    else
      v10 = _Val->first < Parent->_Myval.first;
    if ( v10 )
      Parent = Parent->_Left;
    else
      Parent = Parent->_Right;
  }
  Right = (std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *)Myhead;
  if ( v10 )
  {
    if ( Myhead == (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)this->_Mypair._Myval2._Myval2._Myhead->_Left )
    {
      result->first._Ptr = (std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *)std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Insert_at<std::pair<int const,AgRectangle> &,std::_Tree_node<std::pair<int const,AgRectangle>,void *> *>((std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *)this, &resulta, 1, Myhead, (std::pair<_SDL_Joystick * const,__int64> *)_Val, (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)_Newnode)->_Ptr;
      result->second = 1;
      return result;
    }
    if ( Myhead->_Isnil )
    {
      Right = (std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *)Myhead->_Right;
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
      for ( Right = (std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *)Myhead->_Left;
            !Right->_Right->_Isnil;
            Right = Right->_Right )
      {
        ;
      }
    }
  }
  if ( Right->_Myval.first >= _Val->first )
  {
    operator delete(_Newnode);
    result->first._Ptr = Right;
    result->second = 0;
  }
  else
  {
    result->first._Ptr = (std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *)std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Insert_at<std::pair<int const,AgRectangle> &,std::_Tree_node<std::pair<int const,AgRectangle>,void *> *>(
                                                                                                     (std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *)this,
                                                                                                     &resulta,
                                                                                                     v10,
                                                                                                     Myhead,
                                                                                                     (std::pair<_SDL_Joystick * const,__int64> *)_Val,
                                                                                                     (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)_Newnode)->_Ptr;
    result->second = 1;
  }
  return result;
}

std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > >,bool> *__fastcall std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64>>,0>>::_Insert_nohint<std::pair<_SDL_Joystick * const,__int64> &,std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *>(
        std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *this,
        std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > >,bool> *result,
        bool _Leftish,
        std::pair<_SDL_Joystick * const,__int64> *_Val,
        std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *_Newnode)
{
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *Myhead; // r9
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *Parent; // r10
  bool v10; // r8
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *Right; // rbx
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *v13; // rax
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > resulta; // [rsp+40h] [rbp-18h] BYREF

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
      result->first = (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > >)std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Insert_at<std::pair<int const,AgRectangle> &,std::_Tree_node<std::pair<int const,AgRectangle>,void *> *>(this, &resulta, 1, Myhead, _Val, _Newnode)->_Ptr;
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
    operator delete(_Newnode);
    result->first._Ptr = Right;
    result->second = 0;
  }
  else
  {
    result->first = (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > >)std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Insert_at<std::pair<int const,AgRectangle> &,std::_Tree_node<std::pair<int const,AgRectangle>,void *> *>(this, &resulta, v10, Myhead, _Val, _Newnode)->_Ptr;
    result->second = 1;
  }
  return result;
}

void __fastcall AgSDLInputManager::AgSDLInputManager(AgSDLInputManager *this)
{
  AgInputManager::AgInputManager(this);
  this->__vftable = (AgSDLInputManager_vtbl *)&AgSDLInputManager::`vftable';
  this->m_sdlControllers._Mypair._Myval2._Myval2._Myhead = 0i64;
  this->m_sdlControllers._Mypair._Myval2._Myval2._Mysize = 0i64;
  this->m_sdlControllers._Mypair._Myval2._Myval2._Myhead = std::_Tree_comp_alloc<std::_Tmap_traits<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64>>,0>>::_Buyheadnode(&this->m_sdlControllers);
  this->m_sdlJoysticks._Mypair._Myval2._Myval2._Myhead = 0i64;
  this->m_sdlJoysticks._Mypair._Myval2._Myval2._Mysize = 0i64;
  this->m_sdlJoysticks._Mypair._Myval2._Myval2._Myhead = std::_Tree_comp_alloc<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64>>,0>>::_Buyheadnode(&this->m_sdlJoysticks);
}

void __fastcall std::_Tree<std::_Tmap_traits<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64>>,0>>::~_Tree<std::_Tmap_traits<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64>>,0>>(
        std::_Tree<std::_Tmap_traits<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> >,0> > *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_GameController * const,__int64> > > > result; // [rsp+48h] [rbp+10h] BYREF

  std::_Tree<std::_Tmap_traits<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_GameController * const,__int64> > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_GameController * const,__int64> > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64>>,0>>::~_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64>>,0>>(
        std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > result; // [rsp+48h] [rbp+10h] BYREF

  std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64>>,0>>::~_Tree_comp_alloc<std::_Tmap_traits<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64>>,0>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> >,0> > *this)
{
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64>>,0>>::~_Tree_comp_alloc<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64>>,0>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *this)
{
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::map<_SDL_GameController *,__int64>::~map<_SDL_GameController *,__int64>(
        std::map<_SDL_GameController *,__int64> *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_GameController * const,__int64> > > > result; // [rsp+48h] [rbp+10h] BYREF

  std::_Tree<std::_Tmap_traits<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_GameController * const,__int64> > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_GameController * const,__int64> > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::map<_SDL_Joystick *,__int64>::~map<_SDL_Joystick *,__int64>(
        std::map<_SDL_Joystick *,__int64> *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > result; // [rsp+48h] [rbp+10h] BYREF

  std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::vector<unsigned int>::~vector<unsigned int>(std::vector<unsigned int> *this)
{
  if ( this->_Mypair._Myval2._Myfirst )
  {
    std::_Wrap_alloc<std::allocator<enum extension::SoundConstants::LoadSpec>>::deallocate(
      (std::allocator<enum AgKeyboardButton> *)this,
      (AgKeyboardButton *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall AgSDLInputManager::~AgSDLInputManager(AgSDLInputManager *this)
{
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > *p_m_sdlJoysticks; // rbx
  unsigned __int64 v3; // rdx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > result; // [rsp+50h] [rbp+18h] BYREF

  this->__vftable = (AgSDLInputManager_vtbl *)&AgSDLInputManager::`vftable';
  p_m_sdlJoysticks = (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > *)&this->m_sdlJoysticks;
  std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64>>,0>>::erase(
    &this->m_sdlJoysticks,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > >)p_m_sdlJoysticks->_Ptr->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > >)p_m_sdlJoysticks->_Ptr);
  operator delete(p_m_sdlJoysticks->_Ptr);
  std::_Tree<std::_Tmap_traits<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64>>,0>>::erase(
    &this->m_sdlControllers,
    (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_GameController * const,__int64> > > > *)&result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_GameController * const,__int64> > > >)this->m_sdlControllers._Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_GameController * const,__int64> > > >)this->m_sdlControllers._Mypair._Myval2._Myval2._Myhead);
  operator delete(this->m_sdlControllers._Mypair._Myval2._Myval2._Myhead);
  AgInputManager::~AgInputManager(this, v3);
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

std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64>>,0>>::_Buyheadnode(
        std::_Tree_comp_alloc<std::_Tmap_traits<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> >,0> > *this)
{
  std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *result; // rax

  result = (std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *)operator new(0x30ui64);
  if ( !result )
    invalid_parameter_noinfo_noreturn();
  result->_Left = result;
  if ( result != (std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *)-8i64 )
    result->_Parent = result;
  if ( result != (std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *)-16i64 )
    result->_Right = result;
  *(_WORD *)&result->_Color = 257;
  return result;
}

std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64>>,0>>::_Buyheadnode(
        std::_Tree_comp_alloc<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *this)
{
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *result; // rax

  result = (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)operator new(0x30ui64);
  if ( !result )
    invalid_parameter_noinfo_noreturn();
  result->_Left = result;
  if ( result != (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)-8i64 )
    result->_Parent = result;
  if ( result != (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)-16i64 )
    result->_Right = result;
  *(_WORD *)&result->_Color = 257;
  return result;
}

std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> **__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64>>,0>>::_Buynode0(
        std::_Tree_comp_alloc<std::_Tmap_traits<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> >,0> > *this)
{
  std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> **v2; // rdx

  v2 = (std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> **)operator new(0x30ui64);
  if ( !v2 )
    invalid_parameter_noinfo_noreturn();
  *v2 = this->_Mypair._Myval2._Myval2._Myhead;
  if ( v2 != (std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> **)-8i64 )
    v2[1] = this->_Mypair._Myval2._Myval2._Myhead;
  if ( v2 != (std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> **)-16i64 )
    v2[2] = this->_Mypair._Myval2._Myval2._Myhead;
  return v2;
}

std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> **__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64>>,0>>::_Buynode0(
        std::_Tree_comp_alloc<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *this)
{
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> **v2; // rdx

  v2 = (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> **)operator new(0x30ui64);
  if ( !v2 )
    invalid_parameter_noinfo_noreturn();
  *v2 = this->_Mypair._Myval2._Myval2._Myhead;
  if ( v2 != (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> **)-8i64 )
    v2[1] = this->_Mypair._Myval2._Myval2._Myhead;
  if ( v2 != (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> **)-16i64 )
    v2[2] = this->_Mypair._Myval2._Myval2._Myhead;
  return v2;
}

void __fastcall std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Erase(
        std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *this,
        std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *_Rootnode)
{
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *v2; // rdi
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *i; // rbx

  v2 = _Rootnode;
  for ( i = _Rootnode; !i->_Isnil; v2 = i )
  {
    std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Erase(
      this,
      i->_Right);
    i = i->_Left;
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

void __fastcall AgSDLInputManager::addSDLController(AgSDLInputManager *this, int id)
{
  __int64 v2; // rbx
  _SDL_GameController *v4; // rax
  _SDL_GameController **v5; // rsi
  unsigned int UniqueControllerId; // eax
  AgUser *v7; // rax
  __int64 v8; // rsi
  AgPointer<AgController> *v9; // rax
  std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *Myhead; // rax
  std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *Parent; // rcx
  std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *Ptr; // rbx
  std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *_Newnode; // rax
  std::tuple<_SDL_GameController * const &> v14; // [rsp+30h] [rbp-40h] BYREF
  __int64 v15; // [rsp+38h] [rbp-38h]
  std::vector<unsigned int> v16; // [rsp+40h] [rbp-30h] BYREF
  std::vector<unsigned int> controllers; // [rsp+58h] [rbp-18h] BYREF
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_GameController * const,__int64> > > > result; // [rsp+A0h] [rbp+30h] BYREF
  _SDL_GameController *gameController; // [rsp+A8h] [rbp+38h] BYREF

  v15 = -2i64;
  v2 = id;
  v4 = (_SDL_GameController *)SDL_GameControllerOpen_0((unsigned int)id);
  gameController = v4;
  if ( v4 )
  {
    if ( (unsigned int)SDL_GameControllerGetAttached_0(v4) == 1 )
    {
      memset(&controllers, 0, sizeof(controllers));
      if ( (unsigned int)AgInputManager::getPairedControllerIds(this, v2, &controllers) )
      {
        LODWORD(v2) = 0;
        memset(&v16, 0, sizeof(v16));
        if ( (unsigned int)AgInputManager::getPairedControllerIds(this, 0i64, &v16) )
        {
          do
          {
            if ( v16._Mypair._Myval2._Myfirst )
            {
              std::_Wrap_alloc<std::allocator<enum extension::SoundConstants::LoadSpec>>::deallocate(
                (std::allocator<enum AgKeyboardButton> *)&v16,
                (AgKeyboardButton *)v16._Mypair._Myval2._Myfirst,
                v16._Mypair._Myval2._Myend - v16._Mypair._Myval2._Myfirst);
              memset(&v16, 0, sizeof(v16));
            }
            LODWORD(v2) = v2 + 1;
            memset(&v16, 0, sizeof(v16));
          }
          while ( (unsigned int)AgInputManager::getPairedControllerIds(this, (int)v2, &v16) );
        }
        if ( v16._Mypair._Myval2._Myfirst )
        {
          std::_Wrap_alloc<std::allocator<enum extension::SoundConstants::LoadSpec>>::deallocate(
            (std::allocator<enum AgKeyboardButton> *)&v16,
            (AgKeyboardButton *)v16._Mypair._Myval2._Myfirst,
            v16._Mypair._Myval2._Myend - v16._Mypair._Myval2._Myfirst);
          memset(&v16, 0, sizeof(v16));
        }
      }
      result._Ptr = (std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *)&v16;
      v5 = (_SDL_GameController **)operator new(0x118ui64);
      v14._Myfirst._Val = v5;
      if ( v5 )
      {
        UniqueControllerId = AgInputManager::getUniqueControllerId(this);
        AgSDLGamepadController::AgSDLGamepadController((AgSDLGamepadController *)v5, UniqueControllerId, gameController);
      }
      else
      {
        v7 = 0i64;
      }
      AgPointer<AgUser>::AgPointer<AgUser>((AgPointer<AgUser> *)&v16, v7);
      v8 = (int)v2;
      AgInputManager::addController(this, v9, (int)v2);
      Myhead = this->m_sdlControllers._Mypair._Myval2._Myval2._Myhead;
      Parent = Myhead->_Parent;
      Ptr = Myhead;
      while ( !Parent->_Isnil )
      {
        if ( Parent->_Myval.first >= gameController )
        {
          Ptr = Parent;
          Parent = Parent->_Left;
        }
        else
        {
          Parent = Parent->_Right;
        }
      }
      if ( Ptr == Myhead || gameController < Ptr->_Myval.first )
      {
        v14._Myfirst._Val = &gameController;
        _Newnode = std::_Tree_comp_alloc<std::_Tmap_traits<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<_SDL_GameController * const &>,std::tuple<>>(
                     &this->m_sdlControllers,
                     &std::piecewise_construct_14,
                     &v14,
                     (std::tuple<> *)&result);
        std::_Tree<std::_Tmap_traits<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64>>,0>>::_Insert_hint<std::pair<_SDL_GameController * const,__int64> &,std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *>(
          &this->m_sdlControllers,
          &result,
          (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_GameController * const,__int64> > > >)Ptr,
          &_Newnode->_Myval,
          _Newnode);
        Ptr = result._Ptr;
      }
      Ptr->_Myval.second = v8;
      if ( controllers._Mypair._Myval2._Myfirst )
      {
        std::_Wrap_alloc<std::allocator<enum extension::SoundConstants::LoadSpec>>::deallocate(
          (std::allocator<enum AgKeyboardButton> *)&controllers,
          (AgKeyboardButton *)controllers._Mypair._Myval2._Myfirst,
          controllers._Mypair._Myval2._Myend - controllers._Mypair._Myval2._Myfirst);
        memset(&controllers, 0, sizeof(controllers));
      }
    }
    else
    {
      SDL_GameControllerClose_0(gameController);
    }
  }
}

void __fastcall AgSDLInputManager::addSDLJoystick(AgSDLInputManager *this, int id)
{
  __int64 v2; // rdi
  _SDL_Joystick *v4; // rax
  _SDL_Joystick **v5; // rax
  AgSDLJoystickController *v6; // rbx
  unsigned int UniqueControllerId; // eax
  AgPointer<AgController> *v8; // rax
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *Myhead; // rdx
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *Parent; // rax
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *Ptr; // rbx
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *_Newnode; // rax
  std::tuple<_SDL_Joystick * const &> v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-20h]
  AgPointer<AgUser> v15; // [rsp+40h] [rbp-18h] BYREF
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > result; // [rsp+70h] [rbp+18h] BYREF
  _SDL_Joystick *joystick; // [rsp+78h] [rbp+20h] BYREF

  v14 = -2i64;
  v2 = id;
  if ( !(unsigned int)SDL_IsGameController_0((unsigned int)id) )
  {
    v4 = (_SDL_Joystick *)SDL_JoystickOpen_0((unsigned int)v2);
    joystick = v4;
    if ( v4 )
    {
      if ( (unsigned int)SDL_JoystickGetAttached_0(v4) == 1 )
      {
        result._Ptr = (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)&v15;
        v5 = (_SDL_Joystick **)operator new(0x118ui64);
        v6 = (AgSDLJoystickController *)v5;
        v13._Myfirst._Val = v5;
        if ( v5 )
        {
          UniqueControllerId = AgInputManager::getUniqueControllerId(this);
          AgSDLJoystickController::AgSDLJoystickController(v6, UniqueControllerId, joystick);
        }
        AgPointer<AgUser>::AgPointer<AgUser>(&v15, (AgUser *)v5);
        AgInputManager::addController(this, v8, v2);
        Myhead = this->m_sdlJoysticks._Mypair._Myval2._Myval2._Myhead;
        Parent = Myhead->_Parent;
        Ptr = Myhead;
        while ( !Parent->_Isnil )
        {
          if ( Parent->_Myval.first >= joystick )
          {
            Ptr = Parent;
            Parent = Parent->_Left;
          }
          else
          {
            Parent = Parent->_Right;
          }
        }
        if ( Ptr == Myhead || joystick < Ptr->_Myval.first )
        {
          v13._Myfirst._Val = &joystick;
          _Newnode = std::_Tree_comp_alloc<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<_SDL_Joystick * const &>,std::tuple<>>(
                       &this->m_sdlJoysticks,
                       &std::piecewise_construct_14,
                       &v13,
                       (std::tuple<> *)&result);
          std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64>>,0>>::_Insert_hint<std::pair<_SDL_Joystick * const,__int64> &,std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *>(
            &this->m_sdlJoysticks,
            &result,
            (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > >)Ptr,
            &_Newnode->_Myval,
            _Newnode);
          Ptr = result._Ptr;
        }
        Ptr->_Myval.second = v2;
      }
      else
      {
        SDL_JoystickClose_0(joystick);
      }
    }
  }
}

void __fastcall std::_Tree<std::_Tmap_traits<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64>>,0>>::clear(
        std::_Tree<std::_Tmap_traits<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> >,0> > *this)
{
  std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *Parent; // rsi
  std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *i; // rbx

  Parent = this->_Mypair._Myval2._Myval2._Myhead->_Parent;
  for ( i = Parent; !i->_Isnil; Parent = i )
  {
    std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Erase(
      (std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *)this,
      (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)i->_Right);
    i = i->_Left;
    operator delete(Parent);
  }
  this->_Mypair._Myval2._Myval2._Myhead->_Parent = this->_Mypair._Myval2._Myval2._Myhead;
  this->_Mypair._Myval2._Myval2._Myhead->_Left = this->_Mypair._Myval2._Myval2._Myhead;
  this->_Mypair._Myval2._Myval2._Myhead->_Right = this->_Mypair._Myval2._Myval2._Myhead;
  this->_Mypair._Myval2._Myval2._Mysize = 0i64;
}

void __fastcall std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64>>,0>>::clear(
        std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *this)
{
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *Parent; // rsi
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *i; // rbx

  Parent = this->_Mypair._Myval2._Myval2._Myhead->_Parent;
  for ( i = Parent; !i->_Isnil; Parent = i )
  {
    std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Erase(
      this,
      i->_Right);
    i = i->_Left;
    operator delete(Parent);
  }
  this->_Mypair._Myval2._Myval2._Myhead->_Parent = this->_Mypair._Myval2._Myval2._Myhead;
  this->_Mypair._Myval2._Myval2._Myhead->_Left = this->_Mypair._Myval2._Myval2._Myhead;
  this->_Mypair._Myval2._Myval2._Myhead->_Right = this->_Mypair._Myval2._Myval2._Myhead;
  this->_Mypair._Myval2._Myval2._Mysize = 0i64;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_GameController * const,__int64> > > > *__fastcall std::_Tree<std::_Tmap_traits<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_GameController * const,__int64> > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_GameController * const,__int64> > > > _First,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_GameController * const,__int64> > > > _Last)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_GameController * const,__int64> > > > *v6; // rax
  std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *v7; // rax
  std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *Right; // rdx
  std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *j; // rcx
  std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *i; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > resulta; // [rsp+30h] [rbp+8h] BYREF
  std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *v12; // [rsp+40h] [rbp+18h]
  std::_Tree_node<std::pair<_SDL_GameController * const,__int64>,void *> *Ptr; // [rsp+48h] [rbp+20h]

  Ptr = _Last._Ptr;
  v12 = _First._Ptr;
  if ( _First._Ptr == this->_Mypair._Myval2._Myval2._Myhead->_Left
    && _Last._Ptr == this->_Mypair._Myval2._Myval2._Myhead )
  {
    std::_Tree<std::_Tmap_traits<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64>>,0>>::clear(this);
    v6 = result;
    result->_Ptr = this->_Mypair._Myval2._Myval2._Myhead->_Left;
  }
  else
  {
    if ( _First._Ptr != _Last._Ptr )
    {
      do
      {
        v7 = _First._Ptr;
        if ( !_First._Ptr->_Isnil )
        {
          Right = _First._Ptr->_Right;
          if ( Right->_Isnil )
          {
            for ( i = _First._Ptr->_Parent; !i->_Isnil; i = i->_Parent )
            {
              if ( _First._Ptr != i->_Right )
                break;
              v12 = i;
              _First._Ptr = i;
            }
            v12 = i;
          }
          else
          {
            for ( j = Right->_Left; !j->_Isnil; j = j->_Left )
              Right = j;
            v12 = Right;
          }
        }
        std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::erase(
          (std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *)this,
          &resulta,
          (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > >)v7);
        _First._Ptr = v12;
      }
      while ( v12 != Ptr );
    }
    v6 = result;
    result->_Ptr = _First._Ptr;
  }
  return v6;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > *__fastcall std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > _Where)
{
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *v5; // rsi
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *Right; // rax
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *j; // rax
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *i; // rax
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *v9; // rdi
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *Parent; // rbx
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *k; // rcx
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *Left; // rax
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *Myhead; // rdx
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *v14; // rax
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *m; // rcx
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > *v16; // rax
  char Color; // cl
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *v18; // rdx
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v19; // rcx
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *v20; // rcx
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *v21; // rax
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *v22; // rcx
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *v23; // rax
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *v24; // rax
  unsigned __int64 Mysize; // rax
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *Ptr; // [rsp+50h] [rbp+18h]

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
    v9 = v5->_Right;
LABEL_15:
    Parent = v5->_Parent;
    if ( !v9->_Isnil )
      v9->_Parent = Parent;
    if ( this->_Mypair._Myval2._Myval2._Myhead->_Parent == v5 )
    {
      this->_Mypair._Myval2._Myval2._Myhead->_Parent = v9;
    }
    else if ( Parent->_Left == v5 )
    {
      Parent->_Left = v9;
    }
    else
    {
      Parent->_Right = v9;
    }
    if ( this->_Mypair._Myval2._Myval2._Myhead->_Left == v5 )
    {
      if ( v9->_Isnil )
      {
        k = Parent;
      }
      else
      {
        Left = v9->_Left;
        for ( k = v9; !Left->_Isnil; Left = Left->_Left )
          k = Left;
      }
      this->_Mypair._Myval2._Myval2._Myhead->_Left = k;
    }
    Myhead = this->_Mypair._Myval2._Myval2._Myhead;
    if ( this->_Mypair._Myval2._Myval2._Myhead->_Right == v5 )
    {
      if ( v9->_Isnil )
      {
        Myhead->_Right = Parent;
      }
      else
      {
        v14 = v9->_Right;
        for ( m = v9; !v14->_Isnil; v14 = v14->_Right )
          m = v14;
        Myhead->_Right = m;
      }
    }
    goto LABEL_45;
  }
  if ( v5->_Right->_Isnil )
  {
    v9 = v5->_Left;
    goto LABEL_15;
  }
  v9 = _Where._Ptr->_Right;
  if ( _Where._Ptr == v5 )
    goto LABEL_15;
  v5->_Left->_Parent = _Where._Ptr;
  _Where._Ptr->_Left = v5->_Left;
  if ( _Where._Ptr == v5->_Right )
  {
    Parent = _Where._Ptr;
  }
  else
  {
    Parent = _Where._Ptr->_Parent;
    if ( !v9->_Isnil )
      v9->_Parent = Parent;
    Parent->_Left = v9;
    _Where._Ptr->_Right = v5->_Right;
    v5->_Right->_Parent = _Where._Ptr;
  }
  if ( this->_Mypair._Myval2._Myval2._Myhead->_Parent == v5 )
  {
    this->_Mypair._Myval2._Myval2._Myhead->_Parent = _Where._Ptr;
  }
  else
  {
    v16 = (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > *)v5->_Parent;
    if ( v16->_Ptr == v5 )
      v16->_Ptr = _Where._Ptr;
    else
      v16[2]._Ptr = _Where._Ptr;
  }
  _Where._Ptr->_Parent = v5->_Parent;
  Color = _Where._Ptr->_Color;
  _Where._Ptr->_Color = v5->_Color;
  v5->_Color = Color;
LABEL_45:
  if ( v5->_Color == 1 )
  {
    if ( v9 != this->_Mypair._Myval2._Myval2._Myhead->_Parent )
    {
      do
      {
        v18 = Parent;
        if ( v9->_Color != 1 )
          break;
        v19 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Left;
        if ( v9 == Parent->_Left )
        {
          v19 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Right;
          if ( !v19->_Color )
          {
            v19->_Color = 1;
            v20 = Parent->_Right;
            Parent->_Color = 0;
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
          if ( v19->_Isnil )
            goto LABEL_77;
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
        }
        else
        {
          if ( !v19->_Color )
          {
            v19->_Color = 1;
            v22 = Parent->_Left;
            Parent->_Color = 0;
            Parent->_Left = v22->_Right;
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
          if ( v19->_Isnil )
            goto LABEL_77;
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
        }
        v19->_Color = 0;
LABEL_77:
        v9 = Parent;
        Parent = Parent->_Parent;
      }
      while ( v18 != this->_Mypair._Myval2._Myval2._Myhead->_Parent );
    }
    v9->_Color = 1;
  }
  operator delete(v5);
  Mysize = this->_Mypair._Myval2._Myval2._Mysize;
  if ( Mysize )
    this->_Mypair._Myval2._Myval2._Mysize = Mysize - 1;
  result->_Ptr = Ptr;
  return result;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > *__fastcall std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > _First,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > _Last)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > *v6; // rax
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *v7; // rax
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *Right; // rdx
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *j; // rcx
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *i; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > resulta; // [rsp+30h] [rbp+8h] BYREF
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *v12; // [rsp+40h] [rbp+18h]
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *Ptr; // [rsp+48h] [rbp+20h]

  Ptr = _Last._Ptr;
  v12 = _First._Ptr;
  if ( _First._Ptr == this->_Mypair._Myval2._Myval2._Myhead->_Left
    && _Last._Ptr == this->_Mypair._Myval2._Myval2._Myhead )
  {
    std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64>>,0>>::clear(this);
    v6 = result;
    result->_Ptr = this->_Mypair._Myval2._Myval2._Myhead->_Left;
  }
  else
  {
    if ( _First._Ptr != _Last._Ptr )
    {
      do
      {
        v7 = _First._Ptr;
        if ( !_First._Ptr->_Isnil )
        {
          Right = _First._Ptr->_Right;
          if ( Right->_Isnil )
          {
            for ( i = _First._Ptr->_Parent; !i->_Isnil; i = i->_Parent )
            {
              if ( _First._Ptr != i->_Right )
                break;
              v12 = i;
              _First._Ptr = i;
            }
            v12 = i;
          }
          else
          {
            for ( j = Right->_Left; !j->_Isnil; j = j->_Left )
              Right = j;
            v12 = Right;
          }
        }
        std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::erase(
          this,
          &resulta,
          (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > >)v7);
        _First._Ptr = v12;
      }
      while ( v12 != Ptr );
    }
    v6 = result;
    result->_Ptr = _First._Ptr;
  }
  return v6;
}

__int64 __fastcall AgSDLInputManager::getHardwareType(_SDL_Joystick *joy, AgControllerUID *uid)
{
  int v3; // er14
  const AgStringRef *SubString; // rax
  int v5; // ebx
  unsigned __int64 v6; // rdx
  unsigned int v7; // edi
  bool v8; // si
  unsigned int v9; // ebx
  unsigned __int64 v10; // rdx
  int v11; // ebx
  unsigned __int64 v12; // rdx
  bool v13; // si
  unsigned int v14; // ebx
  int v15; // ebx
  unsigned __int64 v16; // rdx
  bool v17; // di
  unsigned int v18; // ebx
  int v19; // ebx
  char v20; // si
  AgString s1; // [rsp+28h] [rbp-D8h] BYREF
  AgString v23; // [rsp+38h] [rbp-C8h] BYREF
  AgString s2; // [rsp+48h] [rbp-B8h] BYREF
  AgString v25; // [rsp+58h] [rbp-A8h] BYREF
  AgStringRef result; // [rsp+70h] [rbp-90h] BYREF
  AgString v27; // [rsp+80h] [rbp-80h] BYREF
  AgString v28; // [rsp+90h] [rbp-70h] BYREF
  AgString v29; // [rsp+A0h] [rbp-60h] BYREF
  AgString v30; // [rsp+B0h] [rbp-50h] BYREF
  AgString v31; // [rsp+C0h] [rbp-40h] BYREF
  AgString v32; // [rsp+D0h] [rbp-30h] BYREF
  AgString v33; // [rsp+E0h] [rbp-20h] BYREF
  AgString v34; // [rsp+F0h] [rbp-10h] BYREF
  AgString v35; // [rsp+100h] [rbp+0h] BYREF
  __int64 v36; // [rsp+110h] [rbp+10h]
  char left[16]; // [rsp+120h] [rbp+20h] BYREF
  char text[8]; // [rsp+130h] [rbp+30h] BYREF

  v36 = -2i64;
  v3 = 0;
  *uid = 0i64;
  *(_OWORD *)left = *(_OWORD *)SDL_JoystickGetGUID_0(&result, joy);
  if ( AgStringUtils::compare(left, 6u, "xinput", 6u) )
  {
    result = *(AgStringRef *)left;
    SDL_JoystickGetGUIDString_0(&result, text, 64i64);
    AgString::AgString(&s1, text, -1);
    memmove(uid, left, 8ui64);
    if ( (unsigned int)AgString::getLength(&s1) < 8 )
    {
      AgString::operator=(&s1, "generic");
    }
    else
    {
      SubString = AgString::getSubString(&s1, &result, 0, 8);
      AgString::operator=(&s1, SubString);
    }
    AgString::AgString(&s2, "4c05c405", -1);
    v5 = 1;
    v7 = 3;
    v8 = 1;
    if ( !operator==(&s1, &s2) )
    {
      AgString::AgString(&v23, "4c05cc09", -1);
      v5 = 3;
      if ( !operator==(&s1, &v23) )
        v8 = 0;
    }
    if ( (v5 & 2) != 0 )
    {
      v5 &= ~2u;
      AgString::~AgString(&v23, v6);
    }
    v9 = v5 & 0xFFFFFFFE;
    AgString::~AgString(&s2, v6);
    if ( v8 )
    {
      v7 = 4;
    }
    else
    {
      AgString::AgString(&v25, "25090500", -1);
      v11 = v9 | 4;
      v13 = 1;
      if ( !operator==(&s1, &v25) )
      {
        AgString::AgString(&v23, "4c056802", -1);
        v11 |= 8u;
        if ( !operator==(&s1, &v23) )
        {
          AgString::AgString(&s2, "88880803", -1);
          v11 |= 0x10u;
          if ( !operator==(&s1, &s2) )
            v13 = 0;
        }
      }
      if ( (v11 & 0x10) != 0 )
      {
        v11 &= ~0x10u;
        AgString::~AgString(&s2, v12);
      }
      if ( (v11 & 8) != 0 )
      {
        v11 &= ~8u;
        AgString::~AgString(&v23, v12);
      }
      v14 = v11 & 0xFFFFFFFB;
      AgString::~AgString(&v25, v12);
      if ( !v13 )
      {
        AgString::AgString(&v27, "ff113133", -1);
        v15 = v14 | 0x20;
        v17 = 1;
        if ( !operator==(&s1, &v27) )
        {
          AgString::AgString(&v23, "d81d0b00", -1);
          v15 |= 0x40u;
          if ( !operator==(&s1, &v23) )
          {
            AgString::AgString(&s2, "d81d0f00", -1);
            v15 |= 0x80u;
            if ( !operator==(&s1, &s2) )
            {
              AgString::AgString(&v25, "d81d1000", -1);
              v15 |= 0x100u;
              if ( !operator==(&s1, &v25) )
                v17 = 0;
            }
          }
        }
        if ( (v15 & 0x100) != 0 )
        {
          v15 &= ~0x100u;
          AgString::~AgString(&v25, v16);
        }
        if ( (v15 & 0x80u) != 0 )
        {
          v15 &= ~0x80u;
          AgString::~AgString(&s2, v16);
        }
        if ( (v15 & 0x40) != 0 )
        {
          v15 &= ~0x40u;
          AgString::~AgString(&v23, v16);
        }
        v18 = v15 & 0xFFFFFFDF;
        AgString::~AgString(&v27, v16);
        if ( v17 )
        {
          v7 = 5;
        }
        else
        {
          AgString::AgString((AgString *)&result, "38075032", -1);
          v19 = v18 | 0x200;
          if ( operator==(&s1, (const AgString *)&result) )
            goto LABEL_51;
          AgString::AgString(&v35, "38075082", -1);
          v19 |= 0x400u;
          if ( operator==(&s1, &v35) )
            goto LABEL_51;
          AgString::AgString(&v34, "0d0f8500", -1);
          v19 |= 0x800u;
          if ( operator==(&s1, &v34) )
            goto LABEL_51;
          AgString::AgString(&v33, "0d0f8400", -1);
          v19 |= 0x1000u;
          if ( operator==(&s1, &v33) )
            goto LABEL_51;
          AgString::AgString(&v32, "300f0011", -1);
          v19 |= 0x2000u;
          if ( operator==(&s1, &v32) )
            goto LABEL_51;
          AgString::AgString(&v31, "0d0f8b00", -1);
          v19 |= 0x4000u;
          if ( operator==(&s1, &v31) )
            goto LABEL_51;
          AgString::AgString(&v30, "0d0f8a00", -1);
          v19 |= 0x8000u;
          if ( operator==(&s1, &v30) )
            goto LABEL_51;
          AgString::AgString(&v29, "0d0f6b00", -1);
          v19 |= 0x10000u;
          if ( operator==(&s1, &v29) )
            goto LABEL_51;
          AgString::AgString(&v28, "0d0f6a00", -1);
          v19 |= 0x20000u;
          if ( operator==(&s1, &v28) )
            goto LABEL_51;
          AgString::AgString(&v23, "0d0f2200", -1);
          v19 |= 0x40000u;
          if ( operator==(&s1, &v23)
            || (AgString::AgString(&s2, "38078184", -1), v19 |= 0x80000u, operator==(&s1, &s2))
            || (AgString::AgString(&v25, "38078134", -1), v19 |= 0x100000u, operator==(&s1, &v25))
            || (AgString::AgString(&v27, "38078433", -1), v19 |= 0x200000u, operator==(&s1, &v27)) )
          {
LABEL_51:
            v20 = 1;
          }
          else
          {
            v20 = 0;
          }
          if ( (v19 & 0x200000) != 0 )
          {
            v19 &= ~0x200000u;
            AgString::~AgString(&v27, v10);
          }
          if ( (v19 & 0x100000) != 0 )
          {
            v19 &= ~0x100000u;
            AgString::~AgString(&v25, v10);
          }
          if ( (v19 & 0x80000) != 0 )
          {
            v19 &= ~0x80000u;
            AgString::~AgString(&s2, v10);
          }
          if ( (v19 & 0x40000) != 0 )
          {
            v19 &= ~0x40000u;
            AgString::~AgString(&v23, v10);
          }
          if ( (v19 & 0x20000) != 0 )
          {
            v19 &= ~0x20000u;
            AgString::~AgString(&v28, v10);
          }
          if ( (v19 & 0x10000) != 0 )
            AgString::~AgString(&v29, v10);
          if ( (v19 & 0x8000) != 0 )
          {
            LOWORD(v19) = v19 & 0x7FFF;
            AgString::~AgString(&v30, v10);
          }
          if ( (v19 & 0x4000) != 0 )
          {
            LOWORD(v19) = v19 & 0xBFFF;
            AgString::~AgString(&v31, v10);
          }
          if ( (v19 & 0x2000) != 0 )
          {
            LOWORD(v19) = v19 & 0xDFFF;
            AgString::~AgString(&v32, v10);
          }
          if ( (v19 & 0x1000) != 0 )
          {
            LOWORD(v19) = v19 & 0xEFFF;
            AgString::~AgString(&v33, v10);
          }
          if ( (v19 & 0x800) != 0 )
          {
            LOWORD(v19) = v19 & 0xF7FF;
            AgString::~AgString(&v34, v10);
          }
          if ( (v19 & 0x400) != 0 )
          {
            LOWORD(v19) = v19 & 0xFBFF;
            AgString::~AgString(&v35, v10);
          }
          if ( (v19 & 0x200) != 0 )
            AgString::~AgString((AgString *)&result, v10);
          if ( v20 )
            v3 = 4;
          v7 = v3;
        }
      }
    }
    AgString::~AgString(&s1, v10);
    return v7;
  }
  else
  {
    *(_DWORD *)uid->m_uid = 1886284152;
    *(_WORD *)&uid->m_uid[4] = 29813;
    return 2i64;
  }
}

__int64 __fastcall AgSDLInputManager::onSingletonInit(AgSDLInputManager *this)
{
  unsigned __int64 v2; // rdx
  AgMemoryStream *v3; // r14
  AgReferenceCount *m_ref; // rdi
  int m_strongCount; // ebx
  KOFApplication *v6; // rax
  KOFApplication *m_ptr; // rdi
  AgReferenceCount *v8; // rax
  int v9; // eax
  AgReferenceCount *m_refCount; // rbx
  unsigned int v11; // ebx
  AgAudioChannelData *InternalData; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  AgMemoryStream *v15; // r14
  AgReferenceCount *v16; // rdi
  int v17; // ebx
  KOFApplication *v18; // rax
  KOFApplication *v19; // rdi
  AgReferenceCount *v20; // rax
  int v21; // eax
  AgReferenceCount *v22; // rbx
  unsigned int v23; // ebx
  AgAudioChannelData *v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  AgFile *v27; // rdi
  AgReferenceCount *v28; // rbx
  int v29; // esi
  unsigned int v30; // edi
  AgFile *v31; // rsi
  AgReferenceCount *v32; // rbx
  int v33; // er14
  AgFile *v34; // rsi
  AgReferenceCount *v35; // rbx
  int v36; // er14
  AgPointer<AgFile> v38; // [rsp+28h] [rbp-79h] BYREF
  AgPointer<AgFile> result; // [rsp+38h] [rbp-69h] BYREF
  AgPointer<AgFile> v40; // [rsp+48h] [rbp-59h] BYREF
  AgPointer<KOFApplication> v41; // [rsp+58h] [rbp-49h] BYREF
  AgPointer<AgFile> v42; // [rsp+68h] [rbp-39h] BYREF
  AgPointer<KOFApplication> v43; // [rsp+78h] [rbp-29h] BYREF
  AgPointer<AgFile> v44; // [rsp+88h] [rbp-19h] BYREF
  AgString v45; // [rsp+98h] [rbp-9h] BYREF
  AgString v46; // [rsp+A8h] [rbp+7h] BYREF
  AgString v47; // [rsp+B8h] [rbp+17h] BYREF
  __int64 v48; // [rsp+C8h] [rbp+27h]

  v48 = -2i64;
  AgString::AgString(&v45, "content:gamecontrollerdb.txt", -1);
  AgPath::clean((AgPath *)&v45);
  AgFile::open(&result, (const AgPath *)&v45, 1u, 1);
  AgString::~AgString(&v45, v2);
  if ( result.m_ptr && result.m_ptr->m_open )
  {
    v3 = (AgMemoryStream *)AgMemoryPoolImpl<AgMutex,AgMutex>::_alloc(&AgMemoryStream::s_pool);
    if ( v3 )
    {
      v40 = 0i64;
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
              goto LABEL_11;
          }
          if ( m_strongCount != -1 )
            v40 = result;
        }
      }
LABEL_11:
      AgMemoryStream::AgMemoryStream(v3, &v40);
      m_ptr = v6;
    }
    else
    {
      m_ptr = 0i64;
    }
    v41 = 0i64;
    if ( m_ptr )
    {
      if ( m_ptr->m_refCount )
      {
        v9 = 0;
      }
      else
      {
        v8 = (AgReferenceCount *)AgReferenceCount::operator new(0x10ui64);
        if ( v8 )
        {
          v8->m_strongCount = 1;
          v8->m_weakCount = 1;
          v8->m_data = m_ptr;
        }
        else
        {
          v8 = 0i64;
        }
        m_ptr->m_refCount = v8;
        v9 = 1;
      }
      m_refCount = m_ptr->m_refCount;
      if ( !v9 )
        AgReferenceCount::incRef(m_ptr->m_refCount);
      v41.m_ref = m_refCount;
      v41.m_ptr = m_ptr;
    }
    else
    {
      m_ptr = v41.m_ptr;
    }
    v11 = m_ptr->getThreadIsRunning(m_ptr);
    InternalData = AgAudioChannel::getInternalData((AgAudioChannel *)m_ptr);
    v13 = SDL_RWFromMem_0(InternalData, v11);
    SDL_GameControllerAddMappingsFromRW_0(v13, 1i64);
    AgPointer<AgUser>::~AgPointer<AgUser>(&v41);
  }
  AgString::AgString(&v46, "content:customgamecontrollerdb.txt", -1);
  AgPath::clean((AgPath *)&v46);
  AgFile::open(&v38, (const AgPath *)&v46, 1u, 1);
  AgString::~AgString(&v46, v14);
  if ( v38.m_ptr && v38.m_ptr->m_open )
  {
    v15 = (AgMemoryStream *)AgMemoryPoolImpl<AgMutex,AgMutex>::_alloc(&AgMemoryStream::s_pool);
    if ( v15 )
    {
      v42 = 0i64;
      v16 = v38.m_ref;
      if ( v38.m_ref )
      {
        v17 = v38.m_ref->m_strongCount;
        if ( v38.m_ref->m_strongCount )
        {
          while ( (unsigned int)AgAtomicCompareExchange(&v16->m_strongCount, v17, v17 + 1) != v17 )
          {
            v17 = v16->m_strongCount;
            if ( !v16->m_strongCount )
              goto LABEL_35;
          }
          if ( v17 != -1 )
            v42 = v38;
        }
      }
LABEL_35:
      AgMemoryStream::AgMemoryStream(v15, &v42);
      v19 = v18;
    }
    else
    {
      v19 = 0i64;
    }
    v43 = 0i64;
    if ( v19 )
    {
      if ( v19->m_refCount )
      {
        v21 = 0;
      }
      else
      {
        v20 = (AgReferenceCount *)AgReferenceCount::operator new(0x10ui64);
        if ( v20 )
        {
          v20->m_strongCount = 1;
          v20->m_weakCount = 1;
          v20->m_data = v19;
        }
        else
        {
          v20 = 0i64;
        }
        v19->m_refCount = v20;
        v21 = 1;
      }
      v22 = v19->m_refCount;
      if ( !v21 )
        AgReferenceCount::incRef(v19->m_refCount);
      v43.m_ref = v22;
      v43.m_ptr = v19;
    }
    else
    {
      v19 = v43.m_ptr;
    }
    v23 = v19->getThreadIsRunning(v19);
    v24 = AgAudioChannel::getInternalData((AgAudioChannel *)v19);
    v25 = SDL_RWFromMem_0(v24, v23);
    SDL_GameControllerAddMappingsFromRW_0(v25, 1i64);
    AgPointer<AgUser>::~AgPointer<AgUser>(&v43);
  }
  else
  {
    AgString::AgString(&v47, "content:customgamecontrollerdb.txt", -1);
    AgPath::clean((AgPath *)&v47);
    AgFile::open(&v44, (const AgPath *)&v47, 2u, 1);
    v27 = v44.m_ptr;
    v44.m_ptr = 0i64;
    v28 = v44.m_ref;
    if ( v44.m_ref )
    {
      v44.m_ref = 0i64;
      v29 = 0;
      if ( !(unsigned int)AgAtomicDecrement(&v28->m_strongCount) )
      {
        if ( !(unsigned int)AgAtomicDecrement(&v28->m_weakCount) )
          v29 = 1;
        v28->m_data = 0i64;
        if ( v27 )
          ((void (__fastcall *)(AgFile *, __int64))v27->~AgStream)(v27, 1i64);
        if ( v29 )
          AgReferenceCount::operator delete(v28);
      }
    }
    AgString::~AgString(&v47, v26);
  }
  if ( !(unsigned int)SDL_WasInit_0(12288i64) )
  {
    if ( (unsigned int)SDL_WasInit_0(0i64) )
      SDL_InitSubSystem_0(12288i64);
    else
      SDL_Init_0(12288i64);
  }
  v30 = AgInputManager::onSingletonInit(this);
  v31 = v38.m_ptr;
  v38.m_ptr = 0i64;
  v32 = v38.m_ref;
  if ( v38.m_ref )
  {
    v38.m_ref = 0i64;
    v33 = 0;
    if ( !(unsigned int)AgAtomicDecrement(&v32->m_strongCount) )
    {
      if ( !(unsigned int)AgAtomicDecrement(&v32->m_weakCount) )
        v33 = 1;
      v32->m_data = 0i64;
      if ( v31 )
        ((void (__fastcall *)(AgFile *, __int64))v31->~AgStream)(v31, 1i64);
      if ( v33 )
        AgReferenceCount::operator delete(v32);
    }
  }
  v34 = result.m_ptr;
  result.m_ptr = 0i64;
  v35 = result.m_ref;
  if ( result.m_ref )
  {
    result.m_ref = 0i64;
    v36 = 0;
    if ( !(unsigned int)AgAtomicDecrement(&v35->m_strongCount) )
    {
      if ( !(unsigned int)AgAtomicDecrement(&v35->m_weakCount) )
        v36 = 1;
      v35->m_data = 0i64;
      if ( v34 )
        ((void (__fastcall *)(AgFile *, __int64))v34->~AgStream)(v34, 1i64);
      if ( v36 )
        AgReferenceCount::operator delete(v35);
    }
  }
  return v30;
}

void __fastcall AgSDLInputManager::removeSDLController(AgSDLInputManager *this, int instanceId)
{
  AgSDLInputManager *v2; // r12
  unsigned __int64 v3; // rax
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *Myhead; // rdx
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *Parent; // r8
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > v6; // r13
  unsigned int *Myfirst; // rbx
  unsigned int *i; // rdi
  AgReferenceCount *m_ref; // r14
  int m_strongCount; // esi
  AgController *m_ptr; // r14
  AgReferenceCount *v12; // rsi
  int v13; // er15
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > v14; // [rsp+28h] [rbp-48h] BYREF
  AgPointer<AgController> result; // [rsp+30h] [rbp-40h] BYREF
  AgPointer<AgController> v16; // [rsp+40h] [rbp-30h] BYREF
  std::vector<unsigned int> controllers; // [rsp+50h] [rbp-20h] BYREF
  std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *p_m_sdlControllers; // [rsp+C0h] [rbp+50h]

  v2 = this;
  v3 = SDL_GameControllerFromInstanceID_0((unsigned int)instanceId);
  if ( v3 )
  {
    p_m_sdlControllers = (std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *)&v2->m_sdlControllers;
    Myhead = (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)v2->m_sdlControllers._Mypair._Myval2._Myval2._Myhead;
    Parent = Myhead->_Parent;
    v6._Ptr = Myhead;
    while ( !Parent->_Isnil )
    {
      if ( Parent->_Myval.first >= (_SDL_Joystick *const)v3 )
      {
        v6._Ptr = Parent;
        Parent = Parent->_Left;
      }
      else
      {
        Parent = Parent->_Right;
      }
    }
    if ( v6._Ptr == Myhead || (_SDL_Joystick *const)v3 < v6._Ptr->_Myval.first )
      v6._Ptr = (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)v2->m_sdlControllers._Mypair._Myval2._Myval2._Myhead;
    if ( v6._Ptr != Myhead )
    {
      memset(&controllers, 0, sizeof(controllers));
      AgInputManager::getPairedControllerIds(v2, v6._Ptr->_Myval.second, &controllers);
      Myfirst = controllers._Mypair._Myval2._Myfirst;
      for ( i = controllers._Mypair._Myval2._Mylast; Myfirst != i; ++Myfirst )
      {
        AgInputManager::getController(v2, &result, *Myfirst);
        if ( result.m_ptr->m_type == AgControllerType_Gamepad )
        {
          v16 = 0i64;
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
                  goto LABEL_20;
              }
              if ( m_strongCount != -1 )
                v16 = result;
            }
          }
LABEL_20:
          AgInputManager::removeController(v2, &v16);
        }
        m_ptr = result.m_ptr;
        result.m_ptr = 0i64;
        v12 = result.m_ref;
        if ( result.m_ref )
        {
          result.m_ref = 0i64;
          v13 = 0;
          if ( !(unsigned int)AgAtomicDecrement(&v12->m_strongCount) )
          {
            if ( !(unsigned int)AgAtomicDecrement(&v12->m_weakCount) )
              v13 = 1;
            v12->m_data = 0i64;
            if ( m_ptr )
              ((void (__fastcall *)(AgController *, __int64))m_ptr->~AgController)(m_ptr, 1i64);
            if ( v13 )
              AgReferenceCount::operator delete(v12);
            v2 = this;
          }
        }
      }
      std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::erase(
        p_m_sdlControllers,
        &v14,
        v6);
      if ( controllers._Mypair._Myval2._Myfirst )
        std::_Wrap_alloc<std::allocator<enum extension::SoundConstants::LoadSpec>>::deallocate(
          (std::allocator<enum AgKeyboardButton> *)&controllers,
          (AgKeyboardButton *)controllers._Mypair._Myval2._Myfirst,
          controllers._Mypair._Myval2._Myend - controllers._Mypair._Myval2._Myfirst);
    }
  }
}

void __fastcall AgSDLInputManager::removeSDLJoystick(AgSDLInputManager *this, int instanceId)
{
  AgSDLInputManager *v2; // r12
  unsigned __int64 v3; // rax
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *Myhead; // rdx
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *Parent; // r8
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > v6; // r13
  unsigned int *Myfirst; // rbx
  unsigned int *i; // rdi
  AgReferenceCount *m_ref; // r14
  int m_strongCount; // esi
  AgController *m_ptr; // r14
  AgReferenceCount *v12; // rsi
  int v13; // er15
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > v14; // [rsp+28h] [rbp-48h] BYREF
  AgPointer<AgController> result; // [rsp+30h] [rbp-40h] BYREF
  AgPointer<AgController> v16; // [rsp+40h] [rbp-30h] BYREF
  std::vector<unsigned int> controllers; // [rsp+50h] [rbp-20h] BYREF
  std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *p_m_sdlJoysticks; // [rsp+C0h] [rbp+50h]

  v2 = this;
  v3 = SDL_JoystickFromInstanceID_0((unsigned int)instanceId);
  if ( v3 )
  {
    p_m_sdlJoysticks = &v2->m_sdlJoysticks;
    Myhead = v2->m_sdlJoysticks._Mypair._Myval2._Myval2._Myhead;
    Parent = Myhead->_Parent;
    v6._Ptr = Myhead;
    while ( !Parent->_Isnil )
    {
      if ( Parent->_Myval.first >= (_SDL_Joystick *const)v3 )
      {
        v6._Ptr = Parent;
        Parent = Parent->_Left;
      }
      else
      {
        Parent = Parent->_Right;
      }
    }
    if ( v6._Ptr == Myhead || (_SDL_Joystick *const)v3 < v6._Ptr->_Myval.first )
      v6._Ptr = v2->m_sdlJoysticks._Mypair._Myval2._Myval2._Myhead;
    if ( v6._Ptr != Myhead )
    {
      memset(&controllers, 0, sizeof(controllers));
      AgInputManager::getPairedControllerIds(v2, v6._Ptr->_Myval.second, &controllers);
      Myfirst = controllers._Mypair._Myval2._Myfirst;
      for ( i = controllers._Mypair._Myval2._Mylast; Myfirst != i; ++Myfirst )
      {
        AgInputManager::getController(v2, &result, *Myfirst);
        if ( result.m_ptr->m_type == AgControllerType_Gamepad )
        {
          v16 = 0i64;
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
                  goto LABEL_20;
              }
              if ( m_strongCount != -1 )
                v16 = result;
            }
          }
LABEL_20:
          AgInputManager::removeController(v2, &v16);
        }
        m_ptr = result.m_ptr;
        result.m_ptr = 0i64;
        v12 = result.m_ref;
        if ( result.m_ref )
        {
          result.m_ref = 0i64;
          v13 = 0;
          if ( !(unsigned int)AgAtomicDecrement(&v12->m_strongCount) )
          {
            if ( !(unsigned int)AgAtomicDecrement(&v12->m_weakCount) )
              v13 = 1;
            v12->m_data = 0i64;
            if ( m_ptr )
              ((void (__fastcall *)(AgController *, __int64))m_ptr->~AgController)(m_ptr, 1i64);
            if ( v13 )
              AgReferenceCount::operator delete(v12);
            v2 = this;
          }
        }
      }
      std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::erase(
        p_m_sdlJoysticks,
        &v14,
        v6);
      if ( controllers._Mypair._Myval2._Myfirst )
        std::_Wrap_alloc<std::allocator<enum extension::SoundConstants::LoadSpec>>::deallocate(
          (std::allocator<enum AgKeyboardButton> *)&controllers,
          (AgKeyboardButton *)controllers._Mypair._Myval2._Myfirst,
          controllers._Mypair._Myval2._Myend - controllers._Mypair._Myval2._Myfirst);
    }
  }
}

