#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/silverware/git/sdk/system/agsystemconfig.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/silverware/git/src/platforms/pc/sdl/include/sdl_endian.h"
#include "dev/silverware/git/src/platforms/pc/agdisplayplatformdatapc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "dev/silverware/git/src/platforms/pc/sdl/include/sdl_rect.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "dev/silverware/git/sdk/system/agwindowconfig.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/silverware/git/sdk/util/agjsondata.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/silverware/git/sdk/agdisplayplatformimplementation.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/silverware/git/src/platforms/pc/sdl/include/sdl_stdinc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/silverware/git/src/platforms/pc/system/agpcsystemmanager.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/silverware/git/sdk/system/agsystemmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agvector2.h"

void(*??m_screenBounds$initializer$@AgDisplayPlatformImplementation@@0P6AXXZEA@@3P6AXXZEA)(); // 0x1407406C8
long NvOptimusEnablement; // 0x140A293D0
long AmdPowerXpressRequestHighPerformance; // 0x140A293D4
AgMultisampleType gs_maxSupportedMSAALevel; // 0x140A8FED0
std::map<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> > > AgDisplayPlatformImplementation::m_screenBounds; // 0x140A8FED8
std::piecewise_construct_t std::piecewise_construct; // 0x140868505
typedef HICON__ * HICON;
typedef HICON__ * HCURSOR;
typedef _devicemodeW DEVMODEW;
typedef _LUID LUID;
typedef tagRECT * LPRECT;
typedef _POINTL POINTL;
typedef tagPOINT * LPPOINT;
typedef _D3DCOMPOSERECTSOP D3DCOMPOSERECTSOP;
typedef _devicemodeW DEVMODE;
AgDisplayPlatformImplementation::AgDisplayPlatformImplementation(AgDisplayPlatformData * platformData); // 0x1406703F0
AgDisplayPlatformImplementation::~AgDisplayPlatformImplementation(); // 0x1406704E0
void AgDisplayPlatformImplementation::use(); // 0x140671490
void AgDisplayPlatformImplementation::lock(); // 0x1406713B0
void AgDisplayPlatformImplementation::unlock(); // 0x140671460
void AgDisplayPlatformImplementation::flush(); // 0x140670DB0
void AgDisplayPlatformImplementation::loadingLock(unsigned long idx); // 0x1406712E0
void AgDisplayPlatformImplementation::loadingUnlock(unsigned long idx); // 0x140671370
long AgDisplayPlatformImplementation::IsMinimized(); // 0x140670540
void AgDisplayPlatformImplementation::setCursor(long show, long lock); // 0x140671420
void AgDisplayPlatformImplementation::getDisplayModes(std::vector<AgDisplayMode,std::allocator<AgDisplayMode> > & modes); // 0x140670E30
void AgDisplayPlatformImplementation::getDisplayNativeMode(AgDisplayMode & nativeMode); // 0x140671030
long AgDisplayPlatformImplementation::setDisplayMode(AgDisplayMode displayMode, AgWindowMode windowMode, long vsync); // 0x1400482A0
long AgDisplayPlatformImplementation::getCurrentScreen(); // 0x140670DC0
AgRectangle AgDisplayPlatformImplementation::getScreenBounds(long displayIndex); // 0x1406710B0
AgRectangle AgDisplayPlatformImplementation::getCurrentScreenBounds(); // 0x140670DF0
AgRectangle AgDisplayPlatformImplementation::getScreenSize(); // 0x140671270
AgMultisampleType AgDisplayPlatformImplementation::getMaxMultisampleType(); // 0x1406710A0
AgDisplayPlatformData::~AgDisplayPlatformData(); // 0x140670460//decompilation failure at 1407406C8!
//decompilation failure at 140A293D0!
//decompilation failure at 140A293D4!
//decompilation failure at 140A8FED0!
//decompilation failure at 140A8FED8!
//decompilation failure at 140868505!
std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<int const &>,std::tuple<>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> >,0> > *this,
        const std::piecewise_construct_t *<_Val_0>,
        std::tuple<int const &> *<_Val_1>,
        std::tuple<> *<_Val_2>)
{
  std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *v5; // r9

  v5 = std::_Tree_comp_alloc<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Buynode0(this);
  *(_WORD *)&v5->_Color = 0;
  if ( v5 != (std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *)-28i64 )
    v5->_Myval.first = *<_Val_1>->_Myfirst._Val;
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

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgRectangle> > > > *__fastcall std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Insert_hint<std::pair<int const,AgRectangle> &,std::_Tree_node<std::pair<int const,AgRectangle>,void *> *>(
        std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgRectangle> > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgRectangle> > > > _Where,
        std::pair<int const ,AgRectangle> *_Val,
        std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *_Newnode)
{
  std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *Myhead; // rax
  std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *Right; // r9
  int first; // er12
  bool v12; // cc
  std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *Ptr; // rax
  std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *Left; // r9
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *Parent; // rcx
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *v16; // rbx
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgUser> > > > > v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+38h] [rbp-30h]
  std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgRectangle> > > >,bool> resulta; // [rsp+40h] [rbp-28h] BYREF

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
    Right = Myhead->_Right;
    if ( Right->_Myval.first < _Val->first )
    {
      std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Insert_at<std::pair<int const,AgRectangle> &,std::_Tree_node<std::pair<int const,AgRectangle>,void *> *>(
        (std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *)this,
        (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > *)result,
        0,
        (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)Right,
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
      Left = _Where._Ptr->_Right;
    }
    else
    {
      Left = _Where._Ptr->_Left;
      if ( _Where._Ptr->_Left->_Isnil )
      {
        while ( 1 )
        {
          Parent = (std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *)Ptr->_Parent;
          if ( Parent->_Isnil || Ptr != (std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *)Parent->_Left )
            break;
          Ptr = Ptr->_Parent;
          v17._Ptr = Parent;
        }
        Left = Ptr;
        if ( !Ptr->_Isnil )
          Left = Ptr->_Parent;
      }
      else
      {
        while ( !Left->_Right->_Isnil )
          Left = Left->_Right;
      }
    }
    v17._Ptr = (std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *)Left;
    if ( Left->_Myval.first < first )
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
    && first >= *(_DWORD *)(&v17._Ptr->_Isnil + 3) )
  {
LABEL_33:
    result->_Ptr = (std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *)std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Insert_nohint<std::pair<int const,AgRectangle> &,std::_Tree_node<std::pair<int const,AgRectangle>,void *> *>(
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

std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgRectangle> > > >,bool> *__fastcall std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Insert_nohint<std::pair<int const,AgRectangle> &,std::_Tree_node<std::pair<int const,AgRectangle>,void *> *>(
        std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> >,0> > *this,
        std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgRectangle> > > >,bool> *result,
        bool _Leftish,
        std::pair<int const ,AgRectangle> *_Val,
        std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *_Newnode)
{
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *Myhead; // r9
  std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *Parent; // r10
  bool v10; // r8
  std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *Right; // rbx
  std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *v13; // rax
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
  Right = (std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *)Myhead;
  if ( v10 )
  {
    if ( Myhead == (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)this->_Mypair._Myval2._Myval2._Myhead->_Left )
    {
      result->first._Ptr = (std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *)std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Insert_at<std::pair<int const,AgRectangle> &,std::_Tree_node<std::pair<int const,AgRectangle>,void *> *>(
                                                                                          (std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *)this,
                                                                                          &resulta,
                                                                                          1,
                                                                                          Myhead,
                                                                                          (std::pair<_SDL_Joystick * const,__int64> *)_Val,
                                                                                          (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)_Newnode)->_Ptr;
      result->second = 1;
      return result;
    }
    if ( Myhead->_Isnil )
    {
      Right = (std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *)Myhead->_Right;
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
      for ( Right = (std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *)Myhead->_Left;
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
    result->first._Ptr = (std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *)std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Insert_at<std::pair<int const,AgRectangle> &,std::_Tree_node<std::pair<int const,AgRectangle>,void *> *>(
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

AgDisplayMode *__fastcall std::_Uninitialized_move_al_unchecked1<AgDisplayMode *,AgDisplayMode *,std::allocator<AgDisplayMode>>(
        AgDisplayMode *_First,
        AgDisplayMode *_Last,
        AgDisplayMode *_Dest,
        std::_Wrap_alloc<std::allocator<AgDisplayMode> > *_Al)
{
  while ( _First != _Last )
  {
    if ( _Dest )
      *_Dest = *_First;
    ++_Dest;
    ++_First;
  }
  return _Dest;
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall Scaleform::Render::SubImage::GetAsImage(std::_Wrap_alloc<std::allocator<AgString> > *this)
{
  ;
}

void __fastcall AgDisplayPlatformImplementation::AgDisplayPlatformImplementation(
        AgDisplayPlatformImplementation *this,
        AgDisplayPlatformData *platformData)
{
  this->m_platformData = platformData;
}

void __fastcall std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::~_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>(
        std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> >,0> > *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgRectangle> > > > result; // [rsp+48h] [rbp+10h] BYREF

  std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgRectangle> > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgRectangle> > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::~_Tree_comp_alloc<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> >,0> > *this)
{
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall AgDisplayPlatformData::~AgDisplayPlatformData(AgDisplayPlatformData *this)
{
  AgMutex *m_loadingMutex; // rcx
  unsigned __int8 *v3; // rbx

  m_loadingMutex = this->m_loadingMutex;
  if ( m_loadingMutex )
  {
    v3 = &m_loadingMutex[-1].m_data.m_criticalSection.data[32];
    `eh vector destructor iterator'(
      m_loadingMutex,
      0x28ui64,
      *(_QWORD *)&m_loadingMutex[-1].m_data.m_criticalSection.data[32],
      (void (__fastcall *)(void *))AgMutex::~AgMutex);
    operator delete[](v3, 40i64 * *(_QWORD *)v3 + 8);
  }
  this->m_loadingMutex = 0i64;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
}

void __fastcall AgDisplayPlatformImplementation::~AgDisplayPlatformImplementation(
        AgDisplayPlatformImplementation *this)
{
  AgDisplayPlatformData *m_platformData; // rdi

  m_platformData = this->m_platformData;
  if ( this->m_platformData )
  {
    AgDisplayPlatformData::~AgDisplayPlatformData(this->m_platformData);
    operator delete(m_platformData, 0x1E0ui64);
    this->m_platformData = 0i64;
  }
  else
  {
    this->m_platformData = 0i64;
  }
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

_BOOL8 __fastcall AgDisplayPlatformImplementation::IsMinimized(AgDisplayPlatformImplementation *this)
{
  tagRECT Rect; // [rsp+20h] [rbp-28h] BYREF

  GetWindowRect(this->m_platformData->m_windowHandle, &Rect);
  return Rect.right < 0 && Rect.bottom < 0;
}

std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Buyheadnode(
        std::_Tree_comp_alloc<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> >,0> > *this)
{
  std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *result; // rax

  result = (std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *)operator new(0x30ui64);
  if ( !result )
    invalid_parameter_noinfo_noreturn();
  result->_Left = result;
  if ( result != (std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *)-8i64 )
    result->_Parent = result;
  if ( result != (std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *)-16i64 )
    result->_Right = result;
  *(_WORD *)&result->_Color = 257;
  return result;
}

std::_Tree_node<std::pair<int const ,AgRectangle>,void *> **__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Buynode0(
        std::_Tree_comp_alloc<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> >,0> > *this)
{
  std::_Tree_node<std::pair<int const ,AgRectangle>,void *> **v2; // rdx

  v2 = (std::_Tree_node<std::pair<int const ,AgRectangle>,void *> **)operator new(0x30ui64);
  if ( !v2 )
    invalid_parameter_noinfo_noreturn();
  *v2 = this->_Mypair._Myval2._Myval2._Myhead;
  if ( v2 != (std::_Tree_node<std::pair<int const ,AgRectangle>,void *> **)-8i64 )
    v2[1] = this->_Mypair._Myval2._Myval2._Myhead;
  if ( v2 != (std::_Tree_node<std::pair<int const ,AgRectangle>,void *> **)-16i64 )
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

void __fastcall std::vector<AgDisplayMode>::_Reallocate(std::vector<AgDisplayMode> *this, unsigned __int64 _Count)
{
  AgDisplayMode *v4; // rsi
  signed __int64 v5; // rdi

  v4 = std::allocator<AgDisplayMode>::allocate((std::allocator<AgDisplayMode> *)this, _Count);
  std::_Uninitialized_move_al_unchecked1<AgDisplayMode *,AgDisplayMode *,std::allocator<AgDisplayMode>>(
    this->_Mypair._Myval2._Myfirst,
    this->_Mypair._Myval2._Mylast,
    v4,
    (std::_Wrap_alloc<std::allocator<AgDisplayMode> > *)this);
  v5 = this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
    std::_Wrap_alloc<std::allocator<ParticleDataForChild>>::deallocate(
      (std::allocator<AgDisplayMode> *)this,
      this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  this->_Mypair._Myval2._Myend = &v4[_Count];
  this->_Mypair._Myval2._Mylast = &v4[v5];
  this->_Mypair._Myval2._Myfirst = v4;
}

void __fastcall std::vector<AgDisplayMode>::_Reserve(std::vector<AgDisplayMode> *this, unsigned __int64 _Count)
{
  AgDisplayMode *Myend; // rcx
  AgDisplayMode *Mylast; // r9
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
    if ( 0x1555555555555555i64 - v6 < _Count )
      std::_Xlength_error("vector<T> too long");
    v7 = v6 + _Count;
    v8 = (unsigned __int128)(((char *)Myend - (char *)this->_Mypair._Myval2._Myfirst) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64;
    v9 = 0i64;
    v10 = ((unsigned __int64)v8 >> 63) + (v8 >> 1);
    if ( 0x1555555555555555i64 - (v10 >> 1) >= v10 )
      v9 = v10 + (v10 >> 1);
    if ( v9 >= v7 )
      v7 = v9;
    std::vector<AgDisplayMode>::_Reallocate(this, v7);
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

AgDisplayMode *__fastcall std::allocator<AgDisplayMode>::allocate(
        std::allocator<AgDisplayMode> *this,
        unsigned __int64 _Count)
{
  AgDisplayMode *result; // rax
  unsigned __int64 v3; // rcx
  void *v4; // rax
  void *v5; // rcx

  if ( !_Count )
    return 0i64;
  if ( _Count > 0x1555555555555555i64 )
    std::_Xbad_alloc();
  v3 = 12 * _Count;
  if ( 12 * _Count < 0x1000 )
  {
    result = (AgDisplayMode *)operator new(v3);
    if ( !result )
      invalid_parameter_noinfo_noreturn();
  }
  else
  {
    if ( v3 + 39 <= v3 )
      std::_Xbad_alloc();
    v4 = operator new(v3 + 39);
    v5 = v4;
    if ( !v4 )
      invalid_parameter_noinfo_noreturn();
    result = (AgDisplayMode *)(((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0ui64);
    *(_QWORD *)&result[-1].m_height = v5;
  }
  return result;
}

void __fastcall std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::clear(
        std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> >,0> > *this)
{
  std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *Parent; // rsi
  std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *i; // rbx

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

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgRectangle> > > > *__fastcall std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgRectangle> > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgRectangle> > > > _First,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgRectangle> > > > _Last)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgRectangle> > > > *v6; // rax
  std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *v7; // rax
  std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *Right; // rdx
  std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *j; // rcx
  std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *i; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > resulta; // [rsp+30h] [rbp+8h] BYREF
  std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *v12; // [rsp+40h] [rbp+18h]
  std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *Ptr; // [rsp+48h] [rbp+20h]

  Ptr = _Last._Ptr;
  v12 = _First._Ptr;
  if ( _First._Ptr == this->_Mypair._Myval2._Myval2._Myhead->_Left
    && _Last._Ptr == this->_Mypair._Myval2._Myval2._Myhead )
  {
    std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::clear(this);
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

void __fastcall AgDisplayPlatformImplementation::flush(AgDisplayPlatformImplementation *this)
{
  SDL_GL_SwapWindow_0(this->m_platformData->m_sdlWindow);
}

__int64 __fastcall AgDisplayPlatformImplementation::getCurrentScreen()
{
  int WindowDisplayIndex_0; // eax
  unsigned int v1; // ecx

  WindowDisplayIndex_0 = SDL_GetWindowDisplayIndex_0(AgSingleton<AgSystemManager>::ms_instance[111].__vftable);
  v1 = 0;
  if ( WindowDisplayIndex_0 >= 0 )
    return (unsigned int)WindowDisplayIndex_0;
  return v1;
}

AgRectangle *__fastcall AgDisplayPlatformImplementation::getCurrentScreenBounds(AgRectangle *result)
{
  int WindowDisplayIndex_0; // eax
  int v3; // edx

  WindowDisplayIndex_0 = SDL_GetWindowDisplayIndex_0(AgSingleton<AgSystemManager>::ms_instance[111].__vftable);
  v3 = 0;
  if ( WindowDisplayIndex_0 >= 0 )
    v3 = WindowDisplayIndex_0;
  AgDisplayPlatformImplementation::getScreenBounds(result, v3);
  return result;
}

void __fastcall AgDisplayPlatformImplementation::getDisplayModes(
        AgDisplayPlatformImplementation *this,
        std::vector<AgDisplayMode> *modes)
{
  int NumDisplayModes_0; // er12
  unsigned int i; // er15
  AgDisplayMode *Myfirst; // rax
  char v6; // cl
  unsigned int v7; // ebp
  unsigned int v8; // er14
  unsigned int v9; // edi
  unsigned int m_refreshRate; // ecx
  AgDisplayMode *Mylast; // r8
  signed __int64 v12; // rsi
  AgDisplayMode *v13; // rdx
  AgDisplayMode *v14; // rax
  AgDisplayMode *v15; // rax
  const char *Error_0; // rax
  __int64 v17; // [rsp+20h] [rbp-68h]
  __int64 v18; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v19; // [rsp+38h] [rbp-50h]
  int v20; // [rsp+40h] [rbp-48h] BYREF
  __int64 v21; // [rsp+44h] [rbp-44h]
  unsigned int v22; // [rsp+4Ch] [rbp-3Ch]

  NumDisplayModes_0 = SDL_GetNumDisplayModes_0(0i64);
  for ( i = 0; (int)i < NumDisplayModes_0; ++i )
  {
    v18 = 0i64;
    v19 = 0;
    if ( (unsigned int)SDL_GetDisplayMode_0(0i64, i, &v20) )
    {
      Error_0 = (const char *)SDL_GetError_0();
      AgTrace("SDL_GetDisplayMode failed: %s", Error_0);
    }
    else if ( (v20 & 0xFF00u) >= 0x1800 )
    {
      Myfirst = modes->_Mypair._Myval2._Myfirst;
      v6 = 0;
      v7 = v21;
      v8 = HIDWORD(v21);
      v9 = v22;
      v18 = v21;
      v19 = v22;
      if ( Myfirst == modes->_Mypair._Myval2._Mylast )
        goto LABEL_12;
      do
      {
        if ( Myfirst->m_width == v7 && Myfirst->m_height == v8 )
        {
          m_refreshRate = Myfirst->m_refreshRate;
          if ( v9 > m_refreshRate )
            m_refreshRate = v9;
          Myfirst->m_refreshRate = m_refreshRate;
          v6 = 1;
        }
        ++Myfirst;
      }
      while ( Myfirst != modes->_Mypair._Myval2._Mylast );
      if ( !v6 )
      {
LABEL_12:
        Mylast = modes->_Mypair._Myval2._Mylast;
        if ( &v18 >= (__int64 *)Mylast || modes->_Mypair._Myval2._Myfirst > (AgDisplayMode *)&v18 )
        {
          if ( Mylast == modes->_Mypair._Myval2._Myend )
            std::vector<AgDisplayMode>::_Reserve(modes, 1ui64);
          v15 = modes->_Mypair._Myval2._Mylast;
          if ( v15 )
          {
            *(_QWORD *)&v15->m_width = v18;
            v15->m_refreshRate = v9;
          }
        }
        else
        {
          v12 = ((char *)&v18 - (char *)modes->_Mypair._Myval2._Myfirst) / 12;
          if ( Mylast == modes->_Mypair._Myval2._Myend )
            std::vector<AgDisplayMode>::_Reserve(modes, 1ui64);
          v13 = modes->_Mypair._Myval2._Mylast;
          if ( v13 )
          {
            v14 = modes->_Mypair._Myval2._Myfirst;
            *(_QWORD *)&v13->m_width = *(_QWORD *)&modes->_Mypair._Myval2._Myfirst[v12].m_width;
            v13->m_refreshRate = v14[v12].m_refreshRate;
          }
        }
        ++modes->_Mypair._Myval2._Mylast;
        LODWORD(v17) = v9;
        AgTrace(
          "[DISPLAY MODES] %i, %i, %i, %i",
          modes->_Mypair._Myval2._Mylast - modes->_Mypair._Myval2._Myfirst,
          v7,
          v8,
          v17);
      }
    }
  }
}

void __fastcall AgDisplayPlatformImplementation::getDisplayNativeMode(
        AgDisplayPlatformImplementation *this,
        AgDisplayMode *nativeMode)
{
  DEVMODEW DevMode; // [rsp+20h] [rbp-F8h] BYREF

  nativeMode->m_width = GetSystemMetrics(0);
  nativeMode->m_height = GetSystemMetrics(1);
  EnumDisplaySettingsW(0i64, 0xFFFFFFFF, &DevMode);
  nativeMode->m_refreshRate = DevMode.dmDisplayFrequency;
}

__int64 __fastcall AgDisplayPlatformImplementation::getMaxMultisampleType()
{
  return (unsigned int)gs_maxSupportedMSAALevel;
}

AgRectangle *__fastcall AgDisplayPlatformImplementation::getScreenBounds(AgRectangle *result, int displayIndex)
{
  int v2; // er8
  std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *Myhead; // rdx
  std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *v5; // rcx
  std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *Parent; // rax
  __int128 v7; // xmm6
  std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *Val; // rbx
  std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *v9; // rax
  std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *_Newnode; // rax
  std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *v11; // rax
  AgRectangle *v12; // rbx
  std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *v13; // rax
  AgRectangle *v14; // rax
  std::tuple<> v15; // [rsp+30h] [rbp-58h] BYREF
  int v16; // [rsp+38h] [rbp-50h] BYREF
  std::tuple<int const &> v17; // [rsp+40h] [rbp-48h] BYREF
  __int128 v18; // [rsp+50h] [rbp-38h] BYREF

  v16 = displayIndex;
  v2 = displayIndex;
  Myhead = AgDisplayPlatformImplementation::m_screenBounds._Mypair._Myval2._Myval2._Myhead;
  v5 = AgDisplayPlatformImplementation::m_screenBounds._Mypair._Myval2._Myval2._Myhead;
  Parent = AgDisplayPlatformImplementation::m_screenBounds._Mypair._Myval2._Myval2._Myhead->_Parent;
  if ( Parent->_Isnil )
    goto LABEL_8;
  do
  {
    if ( Parent->_Myval.first >= v2 )
    {
      v5 = Parent;
      Parent = Parent->_Left;
    }
    else
    {
      Parent = Parent->_Right;
    }
  }
  while ( !Parent->_Isnil );
  if ( v5 == AgDisplayPlatformImplementation::m_screenBounds._Mypair._Myval2._Myval2._Myhead || v2 < v5->_Myval.first )
  {
LABEL_8:
    SDL_GetDisplayBounds_0((unsigned int)v2, &v18);
    v7 = v18;
    Val = AgDisplayPlatformImplementation::m_screenBounds._Mypair._Myval2._Myval2._Myhead;
    v9 = AgDisplayPlatformImplementation::m_screenBounds._Mypair._Myval2._Myval2._Myhead->_Parent;
    if ( v9->_Isnil )
      goto LABEL_15;
    do
    {
      if ( v9->_Myval.first >= v16 )
      {
        Val = v9;
        v9 = v9->_Left;
      }
      else
      {
        v9 = v9->_Right;
      }
    }
    while ( !v9->_Isnil );
    if ( Val == AgDisplayPlatformImplementation::m_screenBounds._Mypair._Myval2._Myval2._Myhead
      || v16 < Val->_Myval.first )
    {
LABEL_15:
      v17._Myfirst._Val = &v16;
      _Newnode = std::_Tree_comp_alloc<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<int const &>,std::tuple<>>(
                   &AgDisplayPlatformImplementation::m_screenBounds,
                   &std::piecewise_construct_4,
                   &v17,
                   &v15);
      std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Insert_hint<std::pair<int const,AgRectangle> &,std::_Tree_node<std::pair<int const,AgRectangle>,void *> *>(
        &AgDisplayPlatformImplementation::m_screenBounds,
        (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgRectangle> > > > *)&v17,
        (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgRectangle> > > >)Val,
        &_Newnode->_Myval,
        _Newnode);
      Val = (std::_Tree_node<std::pair<int const ,AgRectangle>,void *> *)v17._Myfirst._Val;
    }
    Val->_Myval.second = (AgRectangle)v7;
    v2 = v16;
    Myhead = AgDisplayPlatformImplementation::m_screenBounds._Mypair._Myval2._Myval2._Myhead;
  }
  v11 = Myhead->_Parent;
  v12 = (AgRectangle *)Myhead;
  if ( v11->_Isnil )
    goto LABEL_24;
  do
  {
    if ( v11->_Myval.first >= v2 )
    {
      v12 = (AgRectangle *)v11;
      v11 = v11->_Left;
    }
    else
    {
      v11 = v11->_Right;
    }
  }
  while ( !v11->_Isnil );
  if ( v12 == (AgRectangle *)Myhead || v2 < v12[1].m_height )
  {
LABEL_24:
    v17._Myfirst._Val = &v16;
    v13 = std::_Tree_comp_alloc<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<int const &>,std::tuple<>>(
            &AgDisplayPlatformImplementation::m_screenBounds,
            &std::piecewise_construct_4,
            &v17,
            &v15);
    std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Insert_hint<std::pair<int const,AgRectangle> &,std::_Tree_node<std::pair<int const,AgRectangle>,void *> *>(
      &AgDisplayPlatformImplementation::m_screenBounds,
      (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgRectangle> > > > *)&v17,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgRectangle> > > >)v12,
      &v13->_Myval,
      v13);
    v12 = (AgRectangle *)v17._Myfirst._Val;
  }
  v14 = result;
  *result = v12[2];
  return v14;
}

AgRectangle *__fastcall AgDisplayPlatformImplementation::getScreenSize(AgRectangle *result)
{
  int WindowDisplayIndex_0; // eax
  __int64 v3; // rcx
  AgRectangle *v4; // rax
  int v5[4]; // [rsp+20h] [rbp-28h] BYREF

  WindowDisplayIndex_0 = SDL_GetWindowDisplayIndex_0(AgSingleton<AgSystemManager>::ms_instance[111].__vftable);
  v3 = 0i64;
  if ( WindowDisplayIndex_0 >= 0 )
    v3 = (unsigned int)WindowDisplayIndex_0;
  SDL_GetDisplayBounds_0(v3, v5);
  v4 = result;
  result->m_left = v5[0];
  result->m_top = v5[1];
  result->m_width = v5[2];
  result->m_height = v5[3];
  return v4;
}

void __fastcall AgDisplayPlatformImplementation::loadingLock(AgDisplayPlatformImplementation *this, unsigned int idx)
{
  __int64 v3; // rbx
  __int64 v4; // rbx
  const char *Error_0; // rax

  v3 = idx;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_platformData->m_loadingMutex[idx]);
  v4 = v3;
  while ( (int)SDL_GL_MakeCurrent_0(this->m_platformData->m_sdlWindow, this->m_platformData->m_sdlLoadContexts[v4]) < 0 )
  {
    Error_0 = (const char *)SDL_GetError_0();
    AgTrace("loadingLock: SDL_GL_MakeCurrent: %s\n", Error_0);
  }
}

void __fastcall AgDisplayPlatformImplementation::loadingUnlock(AgDisplayPlatformImplementation *this, unsigned int idx)
{
  __int64 v2; // rbx

  v2 = idx;
  SDL_GL_MakeCurrent_0(0i64, 0i64);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_platformData->m_loadingMutex[v2]);
}

void __fastcall AgDisplayPlatformImplementation::lock(AgDisplayPlatformImplementation *this)
{
  const char *Error_0; // rax

  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_platformData->m_mutex);
  while ( (int)SDL_GL_MakeCurrent_0(this->m_platformData->m_sdlWindow, this->m_platformData->m_sdlGlContext) < 0 )
  {
    Error_0 = (const char *)SDL_GetError_0();
    AgTrace("SDK_GL_MakeCurrent: %s\n", Error_0);
  }
}

void __fastcall AgDisplayPlatformImplementation::setCursor(AgDisplayPlatformImplementation *this, int show, int lock)
{
  if ( show )
  {
    SDL_ShowCursor_0(1i64);
    SDL_SetRelativeMouseMode_0(0i64);
  }
  else
  {
    SDL_ShowCursor_0(0i64);
    SDL_SetRelativeMouseMode_0(lock != 0);
  }
}

__int64 __fastcall AgUser::isSignedIn(Concurrency::details::ThreadInternalContext *this)
{
  return 1i64;
}

void __fastcall AgDisplayPlatformImplementation::unlock(AgDisplayPlatformImplementation *this)
{
  SDL_GL_MakeCurrent_0(0i64, 0i64);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_platformData->m_mutex);
}

void __fastcall AgDisplayPlatformImplementation::use(AgDisplayPlatformImplementation *this)
{
  const char *Error_0; // rax

  while ( (int)SDL_GL_MakeCurrent_0(this->m_platformData->m_sdlWindow, this->m_platformData->m_sdlGlContext) < 0 )
  {
    Error_0 = (const char *)SDL_GetError_0();
    AgTrace("SDK_GL_MakeCurrent: %s\n", Error_0);
  }
}

