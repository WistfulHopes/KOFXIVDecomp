#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/input/agcontrolleraxiscomponent.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/silverware/git/src/platforms/shared/input/agsdlinputmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/src/platforms/shared/input/agstandardgamepadcontroller.h"
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
#include "dev/silverware/git/sdk/util/ageventdispatcher.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/util/agjsondata.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
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
#include "dev/silverware/git/src/platforms/shared/input/agstandardmousecontroller.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/silverware/git/sdk/input/agcontrollerrumblecomponent.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/silverware/git/sdk/system/agsystemmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/system/agsystemconfig.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/silverware/git/sdk/system/agwindowconfig.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/silverware/git/src/platforms/pc/sdl/include/sdl_stdinc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/silverware/git/src/platforms/pc/system/agpcsystemmanager.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/silverware/git/src/platforms/shared/input/agstandardkeyboardcontroller.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/silverware/git/src/platforms/shared/input/agstandardtouchcontroller.h"
#include "dev/silverware/git/sdk/input/agcontrollertouchcomponent.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/silverware/git/src/platforms/pc/sdl/include/sdl_endian.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/silverware/git/src/platforms/pc/input/agpcinputmanager.h"
#include "dev/silverware/git/src/platforms/pc/sdl/include/sdl_rect.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"

struct AgPCInputManager::InternalData
{
	AgVector2 m_mousePosition; // 0x0
	InternalData();
};
std::piecewise_construct_t std::piecewise_construct; // 0x140868EB0
typedef const tagRAWINPUTDEVICE * PCRAWINPUTDEVICE;
typedef tagRAWINPUTDEVICE RAWINPUTDEVICE;
typedef unsigned long * PUINT;
enum AgScanCode
{
	AgScanCode_Termination = 0,
	AgScanCode_Escape = 1,
	AgScanCode_1 = 2,
	AgScanCode_2 = 3,
	AgScanCode_3 = 4,
	AgScanCode_4 = 5,
	AgScanCode_5 = 6,
	AgScanCode_6 = 7,
	AgScanCode_7 = 8,
	AgScanCode_8 = 9,
	AgScanCode_9 = 10,
	AgScanCode_0 = 11,
	AgScanCode_Subtract = 12,
	AgScanCode_Equal = 13,
	AgScanCode_Backspace = 14,
	AgScanCode_Tab = 15,
	AgScanCode_Q = 16,
	AgScanCode_W = 17,
	AgScanCode_E = 18,
	AgScanCode_R = 19,
	AgScanCode_T = 20,
	AgScanCode_Y = 21,
	AgScanCode_U = 22,
	AgScanCode_I = 23,
	AgScanCode_O = 24,
	AgScanCode_P = 25,
	AgScanCode_BracketLeft = 26,
	AgScanCode_BracketRight = 27,
	AgScanCode_Newline = 28,
	AgScanCode_ControlLeft = 29,
	AgScanCode_A = 30,
	AgScanCode_S = 31,
	AgScanCode_D = 32,
	AgScanCode_F = 33,
	AgScanCode_G = 34,
	AgScanCode_H = 35,
	AgScanCode_J = 36,
	AgScanCode_K = 37,
	AgScanCode_L = 38,
	AgScanCode_Semicolon = 39,
	AgScanCode_Apostrophe = 40,
	AgScanCode_AccentGrave = 41,
	AgScanCode_ShiftLeft = 42,
	AgScanCode_Backslash = 43,
	AgScanCode_Z = 44,
	AgScanCode_X = 45,
	AgScanCode_C = 46,
	AgScanCode_V = 47,
	AgScanCode_B = 48,
	AgScanCode_N = 49,
	AgScanCode_M = 50,
	AgScanCode_Comma = 51,
	AgScanCode_Period = 52,
	AgScanCode_Slash = 53,
	AgScanCode_ShiftRight = 54,
	AgScanCode_Numpad_Multiply = 55,
	AgScanCode_AltLeft = 56,
	AgScanCode_Space = 57,
	AgScanCode_Capital = 58,
	AgScanCode_F1 = 59,
	AgScanCode_F2 = 60,
	AgScanCode_F3 = 61,
	AgScanCode_F4 = 62,
	AgScanCode_F5 = 63,
	AgScanCode_F6 = 64,
	AgScanCode_F7 = 65,
	AgScanCode_F8 = 66,
	AgScanCode_F9 = 67,
	AgScanCode_F10 = 68,
	AgScanCode_NumLock = 69,
	AgScanCode_Scroll = 70,
	AgScanCode_Numpad_7 = 71,
	AgScanCode_Numpad_8 = 72,
	AgScanCode_Numpad_9 = 73,
	AgScanCode_Numpad_Subtract = 74,
	AgScanCode_Numpad_4 = 75,
	AgScanCode_Numpad_5 = 76,
	AgScanCode_Numpad_6 = 77,
	AgScanCode_Numpad_Add = 78,
	AgScanCode_Numpad_1 = 79,
	AgScanCode_Numpad_2 = 80,
	AgScanCode_Numpad_3 = 81,
	AgScanCode_Numpad_0 = 82,
	AgScanCode_Numpad_Decimal = 83,
	AgScanCode_55 = 85,
	AgScanCode_56 = 86,
	AgScanCode_F11 = 87,
	AgScanCode_F12 = 88,
	AgScanCode_SuperLeft = 91,
	AgScanCode_SuperRight = 92,
	AgScanCode_Menu = 93,
};
AgPCInputManager::AgPCInputManager(); // 0x140674B20
std::map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > >::~map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > >(); // 0x140675210
AgPCInputManager::~AgPCInputManager(); // 0x140675270
AgStandardTouchController::~AgStandardTouchController(); // 0x1406752F0
AgTypingInputEvent::~AgTypingInputEvent(); // 0x140675400
void AgPCInputManager::update(); // 0x1406778E0
AgString AgPCInputManager::getPhysicalKeyName(unsigned short button); // 0x140676A80
long AgPCInputManager::getRealKey(long button); // 0x140676B60
long AgPCInputManager::onSingletonInit(); // 0x140677480
long AgPCInputManager::onSingletonExit(); // 0x140677470
void AgPCInputManager::onKeyDown(AgKeyboardButton key); // 0x1406772E0
void AgPCInputManager::handlePointerMoved(const AgVector2 & position); // 0x140676F20
void AgPCInputManager::handleMouseButtonDown(AgMouseButton button); // 0x140676C20
void AgPCInputManager::handleMouseButtonUp(AgMouseButton button); // 0x140676DB0
void AgPCInputManager::handleScrollChanged(const AgVector2 & value); // 0x1406770B0
AgKeyboardButton AgPCInputManager::translateKey(SDL_Keysym keysym); // 0x1406774E0
void AgPCInputManager::processSDLMouse(SDL_MouseMotionEvent & param); // 0x140677490
void AgPCInputManager::handleKeyDown(SDL_Keysym keysym); // 0x140676BB0
void AgPCInputManager::handleKeyUp(SDL_Keysym keysym); // 0x140676BE0
AgScanCode _getScanCodeFromKeyboardButton(AgKeyboardButton button, unsigned short extendBit); // 0x1406762D0
AgKeyboardButton _getRealKeyFromScanCode(unsigned long scancode, long isE0); // 0x140675B70//decompilation failure at 140868EB0!
void __fastcall std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>(
        std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> > *this,
        const std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> > *_Right,
        std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> > > *_Al)
{
  std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> >::_Copy_tag v5; // [rsp+40h] [rbp+8h]

  v5 = (std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> >::_Copy_tag)this;
  this->_Mypair._Myval2._Myval2._Myhead = 0i64;
  this->_Mypair._Myval2._Myval2._Mysize = 0i64;
  this->_Mypair._Myval2._Myval2._Myhead = std::_Tree_comp_alloc<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Buyheadnode(this);
  std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Copy<std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Copy_tag>(
    this,
    _Right,
    v5);
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

AgPointer<AgController> *__fastcall AgPointer<AgStandardKeyboardController>::operator<AgController> AgPointer<AgController>(
        AgPointer<AgStandardKeyboardController> *this,
        AgPointer<AgController> *result)
{
  AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(
    (AgPointer<AgPlayer> *)result,
    (const AgPointer<AgPlayer> *)this);
  return result;
}

AgPointer<AgController> *__fastcall AgPointer<AgStandardMouseController>::operator<AgController> AgPointer<AgController>(
        AgPointer<AgStandardMouseController> *this,
        AgPointer<AgController> *result)
{
  AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(
    (AgPointer<AgPlayer> *)result,
    (const AgPointer<AgPlayer> *)this);
  return result;
}

AgPointer<AgController> *__fastcall AgPointer<AgStandardTouchController>::operator<AgController> AgPointer<AgController>(
        AgPointer<AgStandardTouchController> *this,
        AgPointer<AgController> *result)
{
  AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(
    (AgPointer<AgPlayer> *)result,
    (const AgPointer<AgPlayer> *)this);
  return result;
}

std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Buynode<std::pair<int const,AgStandardTouchData> &>(
        std::_Tree_comp_alloc<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> > *this,
        std::pair<int const ,AgStandardTouchData> *<_Val_0>)
{
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *result; // rax

  result = std::_Tree_comp_alloc<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Buynode0(this);
  *(_WORD *)&result->_Color = 0;
  if ( result != (std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *)-28i64 )
    result->_Myval = *<_Val_0>;
  return result;
}

std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<int const &>,std::tuple<>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> > *this,
        const std::piecewise_construct_t *<_Val_0>,
        std::tuple<int const &> *<_Val_1>,
        std::tuple<> *<_Val_2>)
{
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *v5; // r9

  v5 = std::_Tree_comp_alloc<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Buynode0(this);
  *(_WORD *)&v5->_Color = 0;
  if ( v5 != (std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *)-28i64 )
  {
    v5->_Myval.first = *<_Val_1>->_Myfirst._Val;
    *(_QWORD *)&v5->_Myval.second.m_touchId = 0i64;
    v5->_Myval.second.m_position.m_x = 0.0;
    v5->_Myval.second.m_position.m_y = 0.0;
  }
  return v5;
}

void __fastcall std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Copy<std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Copy_tag>(
        std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> > *this,
        const std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> > *_Right,
        std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> >::_Copy_tag _Movefl)
{
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *Myhead; // rbx
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *v6; // rdx
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *Parent; // rcx
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *i; // rax
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *v9; // rcx
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *j; // rax

  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  Myhead->_Parent = std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Copy_nodes<std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Copy_tag>(
                      this,
                      _Right->_Mypair._Myval2._Myval2._Myhead->_Parent,
                      this->_Mypair._Myval2._Myval2._Myhead,
                      _Movefl);
  v6 = this->_Mypair._Myval2._Myval2._Myhead;
  this->_Mypair._Myval2._Myval2._Mysize = _Right->_Mypair._Myval2._Myval2._Mysize;
  Parent = v6->_Parent;
  if ( Parent->_Isnil )
  {
    v6->_Left = v6;
    this->_Mypair._Myval2._Myval2._Myhead->_Right = this->_Mypair._Myval2._Myval2._Myhead;
  }
  else
  {
    for ( i = Parent->_Left; !i->_Isnil; i = i->_Left )
      Parent = i;
    v6->_Left = Parent;
    v9 = this->_Mypair._Myval2._Myval2._Myhead->_Parent;
    for ( j = v9->_Right; !j->_Isnil; j = j->_Right )
      v9 = j;
    this->_Mypair._Myval2._Myval2._Myhead->_Right = v9;
  }
}

std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *__fastcall std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Copy_nodes<std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Copy_tag>(
        std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> > *this,
        std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *_Rootnode,
        std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *_Wherenode,
        std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> >::_Copy_tag _Movefl)
{
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *Myhead; // rbx
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *v7; // rcx
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *_Wherenodea; // [rsp+58h] [rbp+10h]

  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  if ( !_Rootnode->_Isnil )
  {
    v7 = std::_Tree_comp_alloc<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Buynode<std::pair<int const,AgStandardTouchData> &>(
           this,
           &_Rootnode->_Myval);
    _Wherenodea = v7;
    v7->_Parent = _Wherenode;
    v7->_Color = _Rootnode->_Color;
    if ( Myhead->_Isnil )
      Myhead = v7;
    v7->_Left = std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Copy_nodes<std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Copy_tag>(
                  this,
                  _Rootnode->_Left,
                  v7,
                  _Movefl);
    _Wherenodea->_Right = std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Copy_nodes<std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Copy_tag>(
                            this,
                            _Rootnode->_Right,
                            _Wherenodea,
                            _Movefl);
  }
  return Myhead;
}

void __fastcall std::_Destroy_range<std::allocator<AgTypingInputEvent>,AgTypingInputEvent *>(
        AgTypingInputEvent *_First,
        AgTypingInputEvent *_Last,
        std::_Wrap_alloc<std::allocator<AgTypingInputEvent> > *_Al)
{
  AgTypingInputEvent *v4; // rdi

  if ( _First != _Last )
  {
    v4 = _First;
    do
    {
      AgString::~AgString(&v4->string, (unsigned __int64)_Last);
      ++v4;
    }
    while ( v4 != _Last );
  }
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

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > > *__fastcall std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Insert_hint<std::pair<int const,AgStandardTouchData> &,std::_Tree_node<std::pair<int const,AgStandardTouchData>,void *> *>(
        std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > > _Where,
        std::pair<int const ,AgStandardTouchData> *_Val,
        std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *_Newnode)
{
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *Myhead; // rax
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *Right; // r9
  int first; // er12
  bool v12; // cc
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *Ptr; // rax
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *Left; // r9
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *Parent; // rcx
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *v16; // rbx
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgUser> > > > > v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+38h] [rbp-30h]
  std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > >,bool> resulta; // [rsp+40h] [rbp-28h] BYREF

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
          if ( Parent->_Isnil
            || Ptr != (std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *)Parent->_Left )
          {
            break;
          }
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
    result->_Ptr = (std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *)std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Insert_nohint<std::pair<int const,AgStandardTouchData> &,std::_Tree_node<std::pair<int const,AgStandardTouchData>,void *> *>(
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

std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > >,bool> *__fastcall std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Insert_nohint<std::pair<int const,AgStandardTouchData> &,std::_Tree_node<std::pair<int const,AgStandardTouchData>,void *> *>(
        std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> > *this,
        std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > >,bool> *result,
        bool _Leftish,
        std::pair<int const ,AgStandardTouchData> *_Val,
        std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *_Newnode)
{
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *Myhead; // r9
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *Parent; // r10
  bool v10; // r8
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *Right; // rbx
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *v13; // rax
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
  Right = (std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *)Myhead;
  if ( v10 )
  {
    if ( Myhead == (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)this->_Mypair._Myval2._Myval2._Myhead->_Left )
    {
      result->first._Ptr = (std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *)std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Insert_at<std::pair<int const,AgRectangle> &,std::_Tree_node<std::pair<int const,AgRectangle>,void *> *>(
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
      Right = (std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *)Myhead->_Right;
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
      for ( Right = (std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *)Myhead->_Left;
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
    result->first._Ptr = (std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *)std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Insert_at<std::pair<int const,AgRectangle> &,std::_Tree_node<std::pair<int const,AgRectangle>,void *> *>(
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

AgTypingInputEvent *__fastcall std::_Uninitialized_move_al_unchecked1<AgTypingInputEvent *,AgTypingInputEvent *,std::allocator<AgTypingInputEvent>>(
        AgTypingInputEvent *_First,
        AgTypingInputEvent *_Last,
        AgTypingInputEvent *_Dest,
        std::_Wrap_alloc<std::allocator<AgTypingInputEvent> > *_Al)
{
  while ( _First != _Last )
  {
    if ( _Dest )
      AgString::AgString(&_Dest->string, &_First->string);
    ++_Dest;
    ++_First;
  }
  return _Dest;
}

void __fastcall std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::insert<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const,AgStandardTouchData>>>>>(
        std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > > _First,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > > _Last)
{
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *Myhead; // rbx
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *_Newnode; // rax
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *Right; // rax
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *j; // rax
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *i; // rax
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *Ptr; // [rsp+48h] [rbp+10h]
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > > result; // [rsp+58h] [rbp+20h] BYREF

  if ( _First._Ptr != _Last._Ptr )
  {
    Ptr = _First._Ptr;
    do
    {
      Myhead = this->_Mypair._Myval2._Myval2._Myhead;
      _Newnode = std::_Tree_comp_alloc<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Buynode<std::pair<int const,AgStandardTouchData> &>(
                   this,
                   &_First._Ptr->_Myval);
      std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Insert_hint<std::pair<int const,AgStandardTouchData> &,std::_Tree_node<std::pair<int const,AgStandardTouchData>,void *> *>(
        this,
        &result,
        (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > >)Myhead,
        &_Newnode->_Myval,
        _Newnode);
      _First._Ptr = Ptr;
      if ( !Ptr->_Isnil )
      {
        Right = Ptr->_Right;
        if ( Right->_Isnil )
        {
          for ( i = Ptr->_Parent; !i->_Isnil; i = i->_Parent )
          {
            if ( _First._Ptr != i->_Right )
              break;
            _First._Ptr = i;
          }
          _First._Ptr = i;
          Ptr = i;
        }
        else
        {
          _First._Ptr = Ptr->_Right;
          for ( j = Right->_Left; !j->_Isnil; j = j->_Left )
            _First._Ptr = j;
          Ptr = _First._Ptr;
        }
      }
    }
    while ( _First._Ptr != _Last._Ptr );
  }
}

void __fastcall AgControllerTouchComponent::AgControllerTouchComponent(
        AgControllerTouchComponent *this,
        unsigned int id,
        AgControllerTouchType type,
        unsigned int maxTouches)
{
  __int64 v5; // rbx
  AgControllerTouchInfo *v6; // rax
  AgVector2 *p_m_delta; // rcx

  this->AgControllerComponent::m_type = AgControllerComponentType_Touch;
  this->m_id = id;
  this->m_type = type;
  this->m_maxTouches = maxTouches;
  this->m_touches = 0i64;
  this->m_invalidTouchInfo.m_touchId = -1;
  this->m_invalidTouchInfo.m_position = AgVector2::Zero;
  this->m_invalidTouchInfo.m_delta = AgVector2::Zero;
  *(_QWORD *)&this->m_invalidTouchInfo.m_touched = 0i64;
  v5 = maxTouches;
  v6 = (AgControllerTouchInfo *)operator new[](saturated_mul(maxTouches, 0x24ui64));
  if ( v6 )
  {
    if ( v5 )
    {
      p_m_delta = &v6->m_delta;
      do
      {
        p_m_delta[-2].m_y = NAN;
        p_m_delta[-1] = AgVector2::Zero;
        *p_m_delta = AgVector2::Zero;
        p_m_delta[2] = 0i64;
        p_m_delta = (AgVector2 *)((char *)p_m_delta + 36);
        --v5;
      }
      while ( v5 );
    }
  }
  else
  {
    v6 = 0i64;
  }
  this->m_touches = v6;
}

void __fastcall AgPCInputManager::AgPCInputManager(AgPCInputManager *this)
{
  AgStandardMouseController *v2; // rax
  AgStandardMouseController *v3; // rax
  AgStandardKeyboardController *v4; // rax
  AgStandardKeyboardController *v5; // rax
  AgStandardTouchController *v6; // rax
  AgStandardTouchController *v7; // rax
  AgPointer<AgController> *v8; // rax
  AgPointer<AgController> *v9; // rax
  AgPointer<AgController> *v10; // rax
  AgPCInputManager::InternalData *v11; // rax
  AgPointer<AgController> result; // [rsp+28h] [rbp-30h] BYREF

  AgSDLInputManager::AgSDLInputManager(this);
  this->__vftable = (AgPCInputManager_vtbl *)&AgPCInputManager::`vftable';
  this->m_internalData = 0i64;
  this->m_keyboard.m_ref = 0i64;
  this->m_keyboard.m_ptr = 0i64;
  this->m_mouse.m_ref = 0i64;
  this->m_mouse.m_ptr = 0i64;
  this->m_touch.m_ref = 0i64;
  this->m_touch.m_ptr = 0i64;
  v2 = (AgStandardMouseController *)operator new(0xE0ui64);
  if ( v2 )
    AgStandardMouseController::AgStandardMouseController(v2, 0);
  else
    v3 = 0i64;
  AgPointer<AgStandardMouseController>::operator=(&this->m_mouse, v3);
  v4 = (AgStandardKeyboardController *)operator new(0x198ui64);
  if ( v4 )
    AgStandardKeyboardController::AgStandardKeyboardController(v4, 1u);
  else
    v5 = 0i64;
  AgPointer<AgStandardKeyboardController>::operator=(&this->m_keyboard, v5);
  v6 = (AgStandardTouchController *)operator new(0xE8ui64);
  if ( v6 )
    AgStandardTouchController::AgStandardTouchController(v6, 2u, 1u);
  else
    v7 = 0i64;
  AgPointer<AgStandardTouchController>::operator=(&this->m_touch, v7);
  v8 = AgPointer<AgStandardKeyboardController>::operator<AgController> AgPointer<AgController>(
         &this->m_keyboard,
         &result);
  AgInputManager::addController(this, v8);
  v9 = AgPointer<AgStandardMouseController>::operator<AgController> AgPointer<AgController>(&this->m_mouse, &result);
  AgInputManager::addController(this, v9);
  v10 = AgPointer<AgStandardTouchController>::operator<AgController> AgPointer<AgController>(&this->m_touch, &result);
  AgInputManager::addController(this, v10);
  v11 = (AgPCInputManager::InternalData *)operator new(8ui64);
  if ( v11 )
    *v11 = 0i64;
  else
    v11 = 0i64;
  this->m_internalData = v11;
  v11->m_mousePosition = AgVector2::Zero;
}

void __fastcall AgStandardKeyboardController::AgStandardKeyboardController(
        AgStandardKeyboardController *this,
        unsigned int id)
{
  AgStringRef *v3; // rax
  AgStringRef copy; // [rsp+30h] [rbp-28h] BYREF
  AgStringRef v5; // [rsp+40h] [rbp-18h] BYREF

  AgController::AgController(this, AgControllerType_Keyboard, id);
  this->__vftable = (AgStandardKeyboardController_vtbl *)&AgStandardKeyboardController::`vftable';
  AgControllerButtonComponent::AgControllerButtonComponent(&this->m_keys);
  std::vector<bool>::resize(&this->m_keys.m_buttons, 0x100ui64, 0);
  std::vector<bool>::resize(&this->m_keys.m_lastButtons, 0x100ui64, 0);
  AgController::addComponent(this, &this->m_keys);
  AgStringRef::AgStringRef(&v5, "Keyboard");
  copy = *v3;
  AgString::operator=(&this->m_name, &copy);
}

void __fastcall AgStandardMouseController::AgStandardMouseController(AgStandardMouseController *this, unsigned int id)
{
  AgStringRef *v3; // rax
  AgStringRef copy; // [rsp+30h] [rbp-38h] BYREF
  AgStringRef v5; // [rsp+40h] [rbp-28h] BYREF

  AgController::AgController(this, AgControllerType_Mouse, id);
  this->__vftable = (AgStandardMouseController_vtbl *)&AgStandardMouseController::`vftable';
  AgControllerButtonComponent::AgControllerButtonComponent(&this->m_buttons);
  this->m_x.AgControllerComponent = (AgControllerComponent)2i64;
  this->m_x.m_value = 0.0;
  this->m_y.m_type = AgControllerComponentType_Axis;
  *(_QWORD *)&this->m_y.m_id = 1i64;
  this->m_scrollX.m_type = AgControllerComponentType_Axis;
  *(_QWORD *)&this->m_scrollX.m_id = 2i64;
  this->m_scrollY.m_type = AgControllerComponentType_Axis;
  *(_QWORD *)&this->m_scrollY.m_id = 3i64;
  this->m_currentPosition = 0i64;
  this->m_currentScroll = 0i64;
  std::vector<bool>::resize(&this->m_buttons.m_buttons, 5ui64, 0);
  std::vector<bool>::resize(&this->m_buttons.m_lastButtons, 5ui64, 0);
  AgController::addComponent(this, &this->m_buttons);
  AgController::addComponent(this, &this->m_x);
  AgController::addComponent(this, &this->m_y);
  AgController::addComponent(this, &this->m_scrollX);
  AgController::addComponent(this, &this->m_scrollY);
  AgStringRef::AgStringRef(&v5, "Mouse");
  copy = *v3;
  AgString::operator=(&this->m_name, &copy);
}

void __fastcall AgStandardTouchController::AgStandardTouchController(
        AgStandardTouchController *this,
        unsigned int id,
        unsigned int maxTouches)
{
  AgController::AgController(this, AgControllerType_Touch, id);
  this->__vftable = (AgStandardTouchController_vtbl *)&AgStandardTouchController::`vftable';
  AgControllerTouchComponent::AgControllerTouchComponent(
    &this->m_touchScreen,
    0,
    AgControllerTouchType_Screen,
    maxTouches);
  this->m_startedTouches._Mypair._Myval2._Myval2._Myhead = 0i64;
  this->m_startedTouches._Mypair._Myval2._Myval2._Mysize = 0i64;
  this->m_startedTouches._Mypair._Myval2._Myval2._Myhead = std::_Tree_comp_alloc<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Buyheadnode(&this->m_startedTouches);
  this->m_movedTouches._Mypair._Myval2._Myval2._Myhead = 0i64;
  this->m_movedTouches._Mypair._Myval2._Myval2._Mysize = 0i64;
  this->m_movedTouches._Mypair._Myval2._Myval2._Myhead = std::_Tree_comp_alloc<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Buyheadnode(&this->m_movedTouches);
  this->m_endedTouches._Mypair._Myval2._Myval2._Myhead = 0i64;
  this->m_endedTouches._Mypair._Myval2._Myval2._Mysize = 0i64;
  this->m_endedTouches._Mypair._Myval2._Myval2._Myhead = std::_Tree_comp_alloc<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Buyheadnode(&this->m_endedTouches);
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->m_lock);
  AgController::addComponent(this, &this->m_touchScreen);
}

void __fastcall AgPointer<AgStandardKeyboardController>::~AgPointer<AgStandardKeyboardController>(
        AgPointer<AgStandardKeyboardController> *this)
{
  AgStandardKeyboardController *m_ptr; // rdi
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
        ((void (__fastcall *)(AgStandardKeyboardController *, __int64))m_ptr->~AgController)(m_ptr, 1i64);
      if ( v3 )
        AgReferenceCount::operator delete(m_ref);
    }
  }
}

void __fastcall AgPointer<AgStandardMouseController>::~AgPointer<AgStandardMouseController>(
        AgPointer<AgStandardMouseController> *this)
{
  AgStandardMouseController *m_ptr; // rdi
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
        ((void (__fastcall *)(AgStandardMouseController *, __int64))m_ptr->~AgController)(m_ptr, 1i64);
      if ( v3 )
        AgReferenceCount::operator delete(m_ref);
    }
  }
}

void __fastcall AgPointer<AgStandardTouchController>::~AgPointer<AgStandardTouchController>(
        AgPointer<AgStandardTouchController> *this)
{
  AgStandardTouchController *m_ptr; // rdi
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
        ((void (__fastcall *)(AgStandardTouchController *, __int64))m_ptr->~AgController)(m_ptr, 1i64);
      if ( v3 )
        AgReferenceCount::operator delete(m_ref);
    }
  }
}

void __fastcall std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::~_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>(
        std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> > *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > > result; // [rsp+48h] [rbp+10h] BYREF

  std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::~_Tree_comp_alloc<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> > *this)
{
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::map<int,AgStandardTouchData>::~map<int,AgStandardTouchData>(
        std::map<int,AgStandardTouchData> *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > > result; // [rsp+48h] [rbp+10h] BYREF

  std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall AgControllerTouchComponent::~AgControllerTouchComponent(
        AgControllerTouchComponent *this,
        unsigned __int64 a2)
{
  operator delete(this->m_touches, a2);
  this->m_touches = 0i64;
}

void __fastcall AgPCInputManager::~AgPCInputManager(AgPCInputManager *this)
{
  this->__vftable = (AgPCInputManager_vtbl *)&AgPCInputManager::`vftable';
  operator delete(this->m_internalData, 8ui64);
  this->m_internalData = 0i64;
  AgPointer<AgStandardTouchController>::~AgPointer<AgStandardTouchController>(&this->m_touch);
  AgPointer<AgStandardMouseController>::~AgPointer<AgStandardMouseController>(&this->m_mouse);
  AgPointer<AgStandardKeyboardController>::~AgPointer<AgStandardKeyboardController>(&this->m_keyboard);
  AgSDLInputManager::~AgSDLInputManager(this);
}

void __fastcall AgStandardTouchController::~AgStandardTouchController(AgStandardTouchController *this)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rdx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > > v4; // [rsp+48h] [rbp+10h] BYREF
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > > result; // [rsp+50h] [rbp+18h] BYREF

  DeleteCriticalSection((LPCRITICAL_SECTION)&this->m_lock);
  v4._Ptr = (std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *)&this->m_endedTouches;
  std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::erase(
    &this->m_endedTouches,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > >)this->m_endedTouches._Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > >)this->m_endedTouches._Mypair._Myval2._Myval2._Myhead);
  operator delete(this->m_endedTouches._Mypair._Myval2._Myval2._Myhead);
  v4._Ptr = (std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *)&this->m_movedTouches;
  std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::erase(
    &this->m_movedTouches,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > >)this->m_movedTouches._Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > >)this->m_movedTouches._Mypair._Myval2._Myval2._Myhead);
  operator delete(this->m_movedTouches._Mypair._Myval2._Myval2._Myhead);
  v4._Ptr = (std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *)&this->m_startedTouches;
  std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::erase(
    &this->m_startedTouches,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > >)this->m_startedTouches._Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > >)this->m_startedTouches._Mypair._Myval2._Myval2._Myhead);
  operator delete(this->m_startedTouches._Mypair._Myval2._Myval2._Myhead);
  operator delete(this->m_touchScreen.m_touches, v2);
  this->m_touchScreen.m_touches = 0i64;
  this->__vftable = (AgStandardTouchController_vtbl *)&AgController::`vftable';
  AgString::~AgString(&this->m_name, v3);
  std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::erase(
    &this->m_components,
    &v4,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > >)this->m_components._Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > >)this->m_components._Mypair._Myval2._Myval2._Myhead);
  operator delete(this->m_components._Mypair._Myval2._Myval2._Myhead);
}

void __fastcall AgTypingInputEvent::~AgTypingInputEvent(AgTypingInputEvent *this, unsigned __int64 a2)
{
  AgString::~AgString(&this->string, a2);
}

AgPointer<AgStandardKeyboardController> *__fastcall AgPointer<AgStandardKeyboardController>::operator=(
        AgPointer<AgStandardKeyboardController> *this,
        AgStandardKeyboardController *t)
{
  AgStandardKeyboardController *v2; // rdi
  AgReferenceCount *v4; // rax
  int v5; // eax
  AgReferenceCount *m_refCount; // rbp
  AgReferenceCount *m_ref; // rsi
  AgStandardKeyboardController *m_ptr; // r14
  int v9; // edi

  v2 = t;
  if ( t )
  {
    if ( t->m_refCount )
    {
      v5 = 0;
    }
    else
    {
      v4 = (AgReferenceCount *)AgReferenceCount::operator new(0x10ui64);
      if ( v4 )
      {
        v4->m_strongCount = 1;
        v4->m_weakCount = 1;
        v4->m_data = v2;
      }
      v2->m_refCount = v4;
      v5 = 1;
    }
    m_refCount = v2->m_refCount;
    if ( !v5 )
      AgReferenceCount::incRef(v2->m_refCount);
  }
  else
  {
    v2 = 0i64;
    m_refCount = 0i64;
  }
  m_ref = this->m_ref;
  m_ptr = this->m_ptr;
  this->m_ref = m_refCount;
  this->m_ptr = v2;
  if ( m_ref )
  {
    v9 = 0;
    if ( !(unsigned int)AgAtomicDecrement(&m_ref->m_strongCount) )
    {
      if ( !(unsigned int)AgAtomicDecrement(&m_ref->m_weakCount) )
        v9 = 1;
      m_ref->m_data = 0i64;
      if ( m_ptr )
        ((void (__fastcall *)(AgStandardKeyboardController *, __int64))m_ptr->~AgController)(m_ptr, 1i64);
      if ( v9 )
        AgReferenceCount::operator delete(m_ref);
    }
  }
  return this;
}

AgPointer<AgStandardMouseController> *__fastcall AgPointer<AgStandardMouseController>::operator=(
        AgPointer<AgStandardMouseController> *this,
        AgStandardMouseController *t)
{
  AgStandardMouseController *v2; // rdi
  AgReferenceCount *v4; // rax
  int v5; // eax
  AgReferenceCount *m_refCount; // rbp
  AgReferenceCount *m_ref; // rsi
  AgStandardMouseController *m_ptr; // r14
  int v9; // edi

  v2 = t;
  if ( t )
  {
    if ( t->m_refCount )
    {
      v5 = 0;
    }
    else
    {
      v4 = (AgReferenceCount *)AgReferenceCount::operator new(0x10ui64);
      if ( v4 )
      {
        v4->m_strongCount = 1;
        v4->m_weakCount = 1;
        v4->m_data = v2;
      }
      v2->m_refCount = v4;
      v5 = 1;
    }
    m_refCount = v2->m_refCount;
    if ( !v5 )
      AgReferenceCount::incRef(v2->m_refCount);
  }
  else
  {
    v2 = 0i64;
    m_refCount = 0i64;
  }
  m_ref = this->m_ref;
  m_ptr = this->m_ptr;
  this->m_ref = m_refCount;
  this->m_ptr = v2;
  if ( m_ref )
  {
    v9 = 0;
    if ( !(unsigned int)AgAtomicDecrement(&m_ref->m_strongCount) )
    {
      if ( !(unsigned int)AgAtomicDecrement(&m_ref->m_weakCount) )
        v9 = 1;
      m_ref->m_data = 0i64;
      if ( m_ptr )
        ((void (__fastcall *)(AgStandardMouseController *, __int64))m_ptr->~AgController)(m_ptr, 1i64);
      if ( v9 )
        AgReferenceCount::operator delete(m_ref);
    }
  }
  return this;
}

AgPointer<AgStandardTouchController> *__fastcall AgPointer<AgStandardTouchController>::operator=(
        AgPointer<AgStandardTouchController> *this,
        AgStandardTouchController *t)
{
  AgStandardTouchController *v2; // rdi
  AgReferenceCount *v4; // rax
  int v5; // eax
  AgReferenceCount *m_refCount; // rbp
  AgReferenceCount *m_ref; // rsi
  AgStandardTouchController *m_ptr; // r14
  int v9; // edi

  v2 = t;
  if ( t )
  {
    if ( t->m_refCount )
    {
      v5 = 0;
    }
    else
    {
      v4 = (AgReferenceCount *)AgReferenceCount::operator new(0x10ui64);
      if ( v4 )
      {
        v4->m_strongCount = 1;
        v4->m_weakCount = 1;
        v4->m_data = v2;
      }
      v2->m_refCount = v4;
      v5 = 1;
    }
    m_refCount = v2->m_refCount;
    if ( !v5 )
      AgReferenceCount::incRef(v2->m_refCount);
  }
  else
  {
    v2 = 0i64;
    m_refCount = 0i64;
  }
  m_ref = this->m_ref;
  m_ptr = this->m_ptr;
  this->m_ref = m_refCount;
  this->m_ptr = v2;
  if ( m_ref )
  {
    v9 = 0;
    if ( !(unsigned int)AgAtomicDecrement(&m_ref->m_strongCount) )
    {
      if ( !(unsigned int)AgAtomicDecrement(&m_ref->m_weakCount) )
        v9 = 1;
      m_ref->m_data = 0i64;
      if ( m_ptr )
        ((void (__fastcall *)(AgStandardTouchController *, __int64))m_ptr->~AgController)(m_ptr, 1i64);
      if ( v9 )
        AgReferenceCount::operator delete(m_ref);
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

std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Buyheadnode(
        std::_Tree_comp_alloc<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> > *this)
{
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *result; // rax

  result = (std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *)operator new(0x30ui64);
  if ( !result )
    invalid_parameter_noinfo_noreturn();
  result->_Left = result;
  if ( result != (std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *)-8i64 )
    result->_Parent = result;
  if ( result != (std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *)-16i64 )
    result->_Right = result;
  *(_WORD *)&result->_Color = 257;
  return result;
}

std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> **__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Buynode0(
        std::_Tree_comp_alloc<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> > *this)
{
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> **v2; // rdx

  v2 = (std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> **)operator new(0x30ui64);
  if ( !v2 )
    invalid_parameter_noinfo_noreturn();
  *v2 = this->_Mypair._Myval2._Myval2._Myhead;
  if ( v2 != (std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> **)-8i64 )
    v2[1] = this->_Mypair._Myval2._Myval2._Myhead;
  if ( v2 != (std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> **)-16i64 )
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

void __fastcall std::vector<AgTypingInputEvent>::_Reallocate(
        std::vector<AgTypingInputEvent> *this,
        unsigned __int64 _Count)
{
  AgTypingInputEvent *v4; // r12
  unsigned __int64 v5; // rdx
  AgTypingInputEvent *Mylast; // r14
  AgTypingInputEvent *Myfirst; // rbx
  signed __int64 v8; // rsi

  v4 = (AgTypingInputEvent *)std::allocator<AgDelegate1<AgShutdownEvent const &,void>>::allocate(
                               (std::allocator<AgDelegate1<AgShutdownEvent const &,void> > *)this,
                               _Count);
  std::_Uninitialized_move_al_unchecked1<AgTypingInputEvent *,AgTypingInputEvent *,std::allocator<AgTypingInputEvent>>(
    this->_Mypair._Myval2._Myfirst,
    this->_Mypair._Myval2._Mylast,
    v4,
    (std::_Wrap_alloc<std::allocator<AgTypingInputEvent> > *)this);
  Mylast = this->_Mypair._Myval2._Mylast;
  Myfirst = this->_Mypair._Myval2._Myfirst;
  v8 = (char *)Mylast - (char *)this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    for ( ; Myfirst != Mylast; ++Myfirst )
      AgString::~AgString(&Myfirst->string, v5);
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)this,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  }
  this->_Mypair._Myval2._Myend = &v4[_Count];
  this->_Mypair._Myval2._Mylast = (AgTypingInputEvent *)((char *)v4 + (v8 & 0xFFFFFFFFFFFFFFF0ui64));
  this->_Mypair._Myval2._Myfirst = v4;
}

void __fastcall std::vector<AgTypingInputEvent>::_Reserve(
        std::vector<AgTypingInputEvent> *this,
        unsigned __int64 _Count)
{
  AgTypingInputEvent *Myend; // r10
  AgTypingInputEvent *Mylast; // r8
  AgTypingInputEvent *Myfirst; // rcx
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rcx

  Myend = this->_Mypair._Myval2._Myend;
  Mylast = this->_Mypair._Myval2._Mylast;
  if ( Myend - Mylast < _Count )
  {
    Myfirst = this->_Mypair._Myval2._Myfirst;
    v6 = Mylast - Myfirst;
    if ( 0xFFFFFFFFFFFFFFFi64 - v6 < _Count )
      std::_Xlength_error("vector<T> too long");
    v7 = v6 + _Count;
    v8 = Myend - Myfirst;
    v9 = 0i64;
    if ( 0xFFFFFFFFFFFFFFFi64 - (v8 >> 1) >= v8 )
      v9 = v8 + (v8 >> 1);
    if ( v9 >= v7 )
      v7 = v9;
    std::vector<AgTypingInputEvent>::_Reallocate(this, v7);
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

__int64 __fastcall getRealKeyFromScanCode(unsigned int scancode, int isE0)
{
  int isRunningVistaOrLater; // eax
  UINT v5; // edx
  UINT v6; // er8
  __int64 result; // rax

  isRunningVistaOrLater = AgPCSystemManager::isRunningVistaOrLater();
  v5 = 1;
  if ( isRunningVistaOrLater )
    v5 = 3;
  v6 = MapVirtualKeyW(scancode, v5);
  switch ( v6 )
  {
    case 8u:
      result = 8i64;
      break;
    case 9u:
      result = 9i64;
      break;
    case 0xCu:
      result = 101i64;
      break;
    case 0xDu:
      result = 13i64;
      if ( isE0 )
        result = 138i64;
      break;
    case 0x10u:
    case 0xA0u:
      result = 160i64;
      break;
    case 0x11u:
      result = (unsigned int)(isE0 != 0) + 162;
      break;
    case 0x12u:
      result = (unsigned int)(isE0 != 0) + 164;
      break;
    case 0x14u:
      result = 20i64;
      break;
    case 0x1Bu:
      result = 27i64;
      break;
    case 0x20u:
      result = 32i64;
      break;
    case 0x21u:
      result = 105i64;
      if ( isE0 )
        result = 33i64;
      break;
    case 0x22u:
      result = 99i64;
      if ( isE0 )
        result = 34i64;
      break;
    case 0x23u:
      result = 97i64;
      if ( isE0 )
        result = 35i64;
      break;
    case 0x24u:
      result = 103i64;
      if ( isE0 )
        result = 36i64;
      break;
    case 0x25u:
      result = 100i64;
      if ( isE0 )
        result = 37i64;
      break;
    case 0x26u:
      result = 104i64;
      if ( isE0 )
        result = 38i64;
      break;
    case 0x27u:
      result = 102i64;
      if ( isE0 )
        result = 39i64;
      break;
    case 0x28u:
      result = 98i64;
      if ( isE0 )
        result = 40i64;
      break;
    case 0x2Du:
      result = 96i64;
      if ( isE0 )
        result = 45i64;
      break;
    case 0x2Eu:
      result = 108i64;
      if ( isE0 )
        result = 46i64;
      break;
    case 0x5Bu:
      result = 166i64;
      break;
    case 0x5Cu:
      result = 167i64;
      break;
    case 0x5Du:
      result = 168i64;
      break;
    case 0x6Au:
      result = 106i64;
      break;
    case 0x6Bu:
      result = 107i64;
      break;
    case 0x6Du:
      result = 109i64;
      break;
    case 0x6Fu:
      result = 111i64;
      break;
    case 0x70u:
      result = 112i64;
      break;
    case 0x71u:
      result = 113i64;
      break;
    case 0x72u:
      result = 114i64;
      break;
    case 0x73u:
      result = 115i64;
      break;
    case 0x74u:
      result = 116i64;
      break;
    case 0x75u:
      result = 117i64;
      break;
    case 0x76u:
      result = 118i64;
      break;
    case 0x77u:
      result = 119i64;
      break;
    case 0x78u:
      result = 120i64;
      break;
    case 0x79u:
      result = 121i64;
      break;
    case 0x7Au:
      result = 122i64;
      break;
    case 0x7Bu:
      result = 123i64;
      break;
    case 0x7Cu:
      result = 124i64;
      break;
    case 0x7Du:
      result = 125i64;
      break;
    case 0x7Eu:
      result = 126i64;
      break;
    case 0x7Fu:
      result = 127i64;
      break;
    case 0x80u:
      result = 128i64;
      break;
    case 0x81u:
      result = 129i64;
      break;
    case 0x82u:
      result = 130i64;
      break;
    case 0x83u:
      result = 131i64;
      break;
    case 0x84u:
      result = 132i64;
      break;
    case 0x85u:
      result = 133i64;
      break;
    case 0x86u:
      result = 134i64;
      break;
    case 0x87u:
      result = 135i64;
      break;
    case 0x90u:
      result = 144i64;
      break;
    case 0x91u:
      result = 145i64;
      break;
    case 0xA1u:
      result = 161i64;
      break;
    case 0xA2u:
      result = 162i64;
      break;
    case 0xA3u:
      result = 163i64;
      break;
    case 0xA4u:
      result = 164i64;
      break;
    case 0xA5u:
      result = 165i64;
      break;
    case 0xBAu:
      result = 186i64;
      break;
    case 0xBBu:
      result = 136i64;
      break;
    case 0xBCu:
      result = 188i64;
      break;
    case 0xBDu:
      result = 137i64;
      break;
    case 0xBEu:
      result = 190i64;
      break;
    case 0xBFu:
      result = 191i64;
      break;
    case 0xC0u:
      result = 192i64;
      break;
    case 0xDBu:
      result = 219i64;
      break;
    case 0xDCu:
      result = 220i64;
      break;
    case 0xDDu:
      result = 221i64;
      break;
    case 0xDEu:
      result = 222i64;
      break;
    default:
      if ( v6 - 97 > 0x19 )
      {
        if ( v6 - 65 > 0x19 )
        {
          result = 0i64;
          if ( v6 - 48 <= 9 )
            result = v6;
        }
        else
        {
          result = v6;
        }
      }
      else
      {
        result = v6 - 32;
      }
      break;
  }
  return result;
}

__int64 __fastcall getScanCodeFromKeyboardButton(AgKeyboardButton button, unsigned __int16 extendBit)
{
  __int64 result; // rax

  switch ( button )
  {
    case AgKeyboardButton_Backspace:
      result = 14i64;
      break;
    case AgKeyboardButton_Tab:
      result = 15i64;
      break;
    case AgKeyboardButton_Newline:
      result = 28i64;
      break;
    case AgKeyboardButton_Capital:
      result = 58i64;
      break;
    case AgKeyboardButton_Escape:
      result = 1i64;
      break;
    case AgKeyboardButton_Space:
      result = 57i64;
      break;
    case AgKeyboardButton_PageUp:
      result = (unsigned int)extendBit + 73;
      break;
    case AgKeyboardButton_PageDown:
      result = (unsigned int)extendBit + 81;
      break;
    case AgKeyboardButton_End:
      result = (unsigned int)extendBit + 79;
      break;
    case AgKeyboardButton_Home:
      result = (unsigned int)extendBit + 71;
      break;
    case AgKeyboardButton_ArrowLeft:
      result = (unsigned int)extendBit + 75;
      break;
    case AgKeyboardButton_ArrowUp:
      result = (unsigned int)extendBit + 72;
      break;
    case AgKeyboardButton_ArrowRight:
      result = (unsigned int)extendBit + 77;
      break;
    case AgKeyboardButton_ArrowDown:
      result = (unsigned int)extendBit + 80;
      break;
    case AgKeyboardButton_Insert:
      result = (unsigned int)extendBit + 82;
      break;
    case AgKeyboardButton_Delete:
      result = (unsigned int)extendBit + 83;
      break;
    case AgKeyboardButton_0:
      result = 11i64;
      break;
    case AgKeyboardButton_1:
      result = 2i64;
      break;
    case AgKeyboardButton_2:
      result = 3i64;
      break;
    case AgKeyboardButton_3:
      result = 4i64;
      break;
    case AgKeyboardButton_4:
      result = 5i64;
      break;
    case AgKeyboardButton_5:
      result = 6i64;
      break;
    case AgKeyboardButton_6:
      result = 7i64;
      break;
    case AgKeyboardButton_7:
      result = 8i64;
      break;
    case AgKeyboardButton_8:
      result = 9i64;
      break;
    case AgKeyboardButton_9:
      result = 10i64;
      break;
    case AgKeyboardButton_A:
      result = 30i64;
      break;
    case AgKeyboardButton_B:
      result = 48i64;
      break;
    case AgKeyboardButton_C:
      result = 46i64;
      break;
    case AgKeyboardButton_D:
      result = 32i64;
      break;
    case AgKeyboardButton_E:
      result = 18i64;
      break;
    case AgKeyboardButton_F:
      result = 33i64;
      break;
    case AgKeyboardButton_G:
      result = 34i64;
      break;
    case AgKeyboardButton_H:
      result = 35i64;
      break;
    case AgKeyboardButton_I:
      result = 23i64;
      break;
    case AgKeyboardButton_J:
      result = 36i64;
      break;
    case AgKeyboardButton_K:
      result = 37i64;
      break;
    case AgKeyboardButton_L:
      result = 38i64;
      break;
    case AgKeyboardButton_M:
      result = 50i64;
      break;
    case AgKeyboardButton_N:
      result = 49i64;
      break;
    case AgKeyboardButton_O:
      result = 24i64;
      break;
    case AgKeyboardButton_P:
      result = 25i64;
      break;
    case AgKeyboardButton_Q:
      result = 16i64;
      break;
    case AgKeyboardButton_R:
      result = 19i64;
      break;
    case AgKeyboardButton_S:
      result = 31i64;
      break;
    case AgKeyboardButton_T:
      result = 20i64;
      break;
    case AgKeyboardButton_U:
      result = 22i64;
      break;
    case AgKeyboardButton_V:
      result = 47i64;
      break;
    case AgKeyboardButton_W:
      result = 17i64;
      break;
    case AgKeyboardButton_X:
      result = 45i64;
      break;
    case AgKeyboardButton_Y:
      result = 21i64;
      break;
    case AgKeyboardButton_Z:
      result = 44i64;
      break;
    case AgKeyboardButton_Numpad_0:
      result = 82i64;
      break;
    case AgKeyboardButton_Numpad_1:
      result = 79i64;
      break;
    case AgKeyboardButton_Numpad_2:
      result = 80i64;
      break;
    case AgKeyboardButton_Numpad_3:
      result = 81i64;
      break;
    case AgKeyboardButton_Numpad_4:
      result = 75i64;
      break;
    case AgKeyboardButton_Numpad_5:
      result = 76i64;
      break;
    case AgKeyboardButton_Numpad_6:
      result = 77i64;
      break;
    case AgKeyboardButton_Numpad_7:
      result = 71i64;
      break;
    case AgKeyboardButton_Numpad_8:
      result = 72i64;
      break;
    case AgKeyboardButton_Numpad_9:
      result = 73i64;
      break;
    case AgKeyboardButton_Numpad_Multiply:
      result = 55i64;
      break;
    case AgKeyboardButton_Numpad_Add:
      result = 78i64;
      break;
    case AgKeyboardButton_Numpad_Decimal:
      result = 83i64;
      break;
    case AgKeyboardButton_Numpad_Subtract:
      result = 74i64;
      break;
    case AgKeyboardButton_Numpad_Divide:
      result = (unsigned int)extendBit + 53;
      break;
    case AgKeyboardButton_F1:
      result = 59i64;
      break;
    case AgKeyboardButton_F2:
      result = 60i64;
      break;
    case AgKeyboardButton_F3:
      result = 61i64;
      break;
    case AgKeyboardButton_F4:
      result = 62i64;
      break;
    case AgKeyboardButton_F5:
      result = 63i64;
      break;
    case AgKeyboardButton_F6:
      result = 64i64;
      break;
    case AgKeyboardButton_F7:
      result = 65i64;
      break;
    case AgKeyboardButton_F8:
      result = 66i64;
      break;
    case AgKeyboardButton_F9:
      result = 67i64;
      break;
    case AgKeyboardButton_F10:
      result = 68i64;
      break;
    case AgKeyboardButton_F11:
      result = 87i64;
      break;
    case AgKeyboardButton_F12:
      result = 88i64;
      break;
    case AgKeyboardButton_Equal:
      result = 13i64;
      break;
    case AgKeyboardButton_Subtract:
      result = 12i64;
      break;
    case AgKeyboardButton_Numpad_Enter:
      result = (unsigned int)extendBit + 28;
      break;
    case AgKeyboardButton_NumLock:
      result = 69i64;
      break;
    case AgKeyboardButton_Scroll:
      result = 70i64;
      break;
    case AgKeyboardButton_ShiftLeft:
      result = 42i64;
      break;
    case AgKeyboardButton_ShiftRight:
      result = 54i64;
      break;
    case AgKeyboardButton_ControlLeft:
      result = 29i64;
      break;
    case AgKeyboardButton_ControlRight:
      result = (unsigned int)extendBit + 29;
      break;
    case AgKeyboardButton_AltLeft:
      result = 56i64;
      break;
    case AgKeyboardButton_AltRight:
      result = (unsigned int)extendBit + 56;
      break;
    case AgKeyboardButton_SuperLeft:
      result = (unsigned int)extendBit + 91;
      break;
    case AgKeyboardButton_SuperRight:
      result = (unsigned int)extendBit + 92;
      break;
    case AgKeyboardButton_Menu:
      result = (unsigned int)extendBit + 93;
      break;
    case AgKeyboardButton_Semicolon:
      result = 39i64;
      break;
    case AgKeyboardButton_Comma:
      result = 51i64;
      break;
    case AgKeyboardButton_Period:
      result = 52i64;
      break;
    case AgKeyboardButton_Slash:
      result = 53i64;
      break;
    case AgKeyboardButton_AccentGrave:
      result = 41i64;
      break;
    case AgKeyboardButton_BracketLeft:
      result = 26i64;
      break;
    case AgKeyboardButton_Backslash:
      result = 43i64;
      break;
    case AgKeyboardButton_BracketRight:
      result = 27i64;
      break;
    case AgKeyboardButton_Apostrophe:
      result = 40i64;
      break;
    default:
      result = 0i64;
      break;
  }
  return result;
}

AgDelegate1<AgShutdownEvent const &,void> *__fastcall std::allocator<AgDelegate1<AgShutdownEvent const &,void>>::allocate(
        std::allocator<AgDelegate1<AgShutdownEvent const &,void> > *this,
        unsigned __int64 _Count)
{
  AgDelegate1<AgShutdownEvent const &,void> *result; // rax
  unsigned __int64 v3; // rdx
  void (__fastcall *v4)(detail::GenericClass *); // rax
  void (__fastcall *v5)(detail::GenericClass *); // rcx

  if ( !_Count )
    return 0i64;
  if ( _Count > 0xFFFFFFFFFFFFFFFi64 )
    std::_Xbad_alloc();
  v3 = 16 * _Count;
  if ( v3 < 0x1000 )
  {
    result = (AgDelegate1<AgShutdownEvent const &,void> *)operator new(v3);
    if ( !result )
      invalid_parameter_noinfo_noreturn();
  }
  else
  {
    if ( v3 + 39 <= v3 )
      std::_Xbad_alloc();
    v4 = (void (__fastcall *)(detail::GenericClass *))operator new(v3 + 39);
    v5 = v4;
    if ( !v4 )
      invalid_parameter_noinfo_noreturn();
    result = (AgDelegate1<AgShutdownEvent const &,void> *)(((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0ui64);
    result[-1].m_Closure.m_pFunction = v5;
  }
  return result;
}

void __fastcall std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::clear(
        std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> > *this)
{
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *Parent; // rsi
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *i; // rbx

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

void __fastcall AgStandardKeyboardController::clear(AgStandardKeyboardController *this)
{
  AgControllerButtonComponent::clear(&this->m_keys);
  memset(this->m_currentKeys, 0, sizeof(this->m_currentKeys));
}

void __fastcall AgStandardMouseController::clear(AgStandardMouseController *this)
{
  AgControllerButtonComponent::clear(&this->m_buttons);
  memset(this->m_currentButtons, 0, sizeof(this->m_currentButtons));
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > > *__fastcall std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > > _First,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > > _Last)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > > *v6; // rax
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *v7; // rax
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *Right; // rdx
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *j; // rcx
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *i; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > resulta; // [rsp+30h] [rbp+8h] BYREF
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *v12; // [rsp+40h] [rbp+18h]
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *Ptr; // [rsp+48h] [rbp+20h]

  Ptr = _Last._Ptr;
  v12 = _First._Ptr;
  if ( _First._Ptr == this->_Mypair._Myval2._Myval2._Myhead->_Left
    && _Last._Ptr == this->_Mypair._Myval2._Myval2._Myhead )
  {
    std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::clear(this);
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

__int64 __fastcall std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> > *this,
        const int *_Keyval)
{
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *Myhead; // rsi
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *Parent; // rax
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *v6; // rdi
  int v7; // er8
  int first; // edx
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> **p_Left; // rax
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *v10; // rax
  __int64 v11; // rbx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > > result; // [rsp+30h] [rbp+8h] BYREF

  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  Parent = this->_Mypair._Myval2._Myval2._Myhead->_Parent;
  v6 = this->_Mypair._Myval2._Myval2._Myhead;
  if ( !Parent->_Isnil )
  {
    v7 = *_Keyval;
    do
    {
      first = Parent->_Myval.first;
      if ( first >= v7 )
      {
        if ( v6->_Isnil && v7 < first )
          v6 = Parent;
        Myhead = Parent;
        Parent = Parent->_Left;
      }
      else
      {
        Parent = Parent->_Right;
      }
    }
    while ( !Parent->_Isnil );
  }
  p_Left = &v6->_Left;
  if ( v6->_Isnil )
    p_Left = &this->_Mypair._Myval2._Myval2._Myhead->_Parent;
  v10 = *p_Left;
  while ( !v10->_Isnil )
  {
    if ( *_Keyval >= v10->_Myval.first )
    {
      v10 = v10->_Right;
    }
    else
    {
      v6 = v10;
      v10 = v10->_Left;
    }
  }
  v11 = std::_Distance1<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,AgPointer<AgController>>>>>>(
          (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > >)Myhead,
          (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<AgPath> > >)v6,
          (std::input_iterator_tag)result._Ptr);
  std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > >)Myhead,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > >)v6);
  return v11;
}

AgString *__fastcall AgPCInputManager::getPhysicalKeyName(
        AgPCInputManager *this,
        AgString *result,
        unsigned __int16 button)
{
  int ScanCodeFromKeyboardButton; // eax
  wchar_t String[16]; // [rsp+58h] [rbp-50h] BYREF
  char MultiByteStr[32]; // [rsp+78h] [rbp-30h] BYREF

  ScanCodeFromKeyboardButton = getScanCodeFromKeyboardButton((AgKeyboardButton)button, 0x100u);
  if ( GetKeyNameTextW(ScanCodeFromKeyboardButton << 16, String, 16) )
  {
    WideCharToMultiByte(0xFDE9u, 0, String, -1, MultiByteStr, 32, 0i64, 0i64);
    AgString::AgString(result, MultiByteStr, -1);
  }
  else
  {
    AgString::AgString(result);
  }
  return result;
}

__int64 __fastcall AgPCInputManager::getRealKey(AgPCInputManager *this, int button)
{
  unsigned int ScanCodeFromKeyboardButton; // eax

  if ( button == -1 )
    return 0xFFFFFFFFi64;
  if ( !AgPCSystemManager::isRunningVistaOrLater() && button == 161 )
    return 161i64;
  ScanCodeFromKeyboardButton = getScanCodeFromKeyboardButton((AgKeyboardButton)button, 0xE000u);
  return getRealKeyFromScanCode(ScanCodeFromKeyboardButton, (unsigned __int16)ScanCodeFromKeyboardButton & 0xE000);
}

void __fastcall AgPCInputManager::handleKeyDown(AgPCInputManager *this, SDL_Keysym *keysym)
{
  AgKeyboardButton v2; // eax
  SDL_Keysym v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = *keysym;
  v2 = AgPCInputManager::translateKey(this, &v3);
  AgPCInputManager::onKeyDown((AgPCInputManager *)AgSingleton<AgInputManager>::ms_instance, v2);
}

void __fastcall AgPCInputManager::handleKeyUp(AgPCInputManager *this, SDL_Keysym *keysym)
{
  SDL_Keysym v2; // [rsp+20h] [rbp-18h] BYREF

  v2 = *keysym;
  *((_BYTE *)&AgSingleton<AgInputManager>::ms_instance[137].__vftable[6].onSingletonInit
  + (int)AgPCInputManager::translateKey(this, &v2)) = 0;
}

void __fastcall AgPCInputManager::handleMouseButtonDown(AgPCInputManager *this, AgMouseButton button)
{
  AgStandardMouseController *m_ptr; // r10
  AgSingleton<AgInputManager>_vtbl *v4; // r8
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *Parent; // rax
  int *Myhead; // rbx
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *_Newnode; // rax
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *v8; // rdi
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *v9; // rsi
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *v10; // rbx
  std::_Tree_comp_alloc<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> > v11; // [rsp+38h] [rbp-38h] BYREF
  __int64 v12; // [rsp+48h] [rbp-28h] BYREF
  int v13; // [rsp+50h] [rbp-20h]
  std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> > v14; // [rsp+58h] [rbp-18h] BYREF
  std::tuple<int const &> v15; // [rsp+90h] [rbp+20h] BYREF
  std::tuple<> v16; // [rsp+98h] [rbp+28h] BYREF

  m_ptr = this->m_mouse.m_ptr;
  v4 = AgSingleton<AgInputManager>::ms_instance[15].__vftable;
  AgSingleton<AgInputManager>::ms_instance[15].__vftable = (AgSingleton<AgInputManager>_vtbl *)((char *)&v4->~AgSingleton<AgInputManager>
                                                                                              + 1);
  m_ptr->m_lastUsed = (unsigned __int64)v4;
  m_ptr->m_currentButtons[button] = 1;
  v11._Mypair._Myval2._Myval2._Myhead = 0i64;
  v11._Mypair._Myval2._Myval2._Mysize = 0i64;
  v11._Mypair._Myval2._Myval2._Myhead = std::_Tree_comp_alloc<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Buyheadnode(&v11);
  v12 = 0i64;
  v13 = 0;
  Parent = v11._Mypair._Myval2._Myval2._Myhead->_Parent;
  Myhead = (int *)v11._Mypair._Myval2._Myval2._Myhead;
  if ( Parent->_Isnil )
    goto LABEL_8;
  do
  {
    if ( Parent->_Myval.first >= 0 )
    {
      Myhead = (int *)Parent;
      Parent = Parent->_Left;
    }
    else
    {
      Parent = Parent->_Right;
    }
  }
  while ( !Parent->_Isnil );
  if ( Myhead == (int *)v11._Mypair._Myval2._Myval2._Myhead || Myhead[7] > 0 )
  {
LABEL_8:
    v15._Myfirst._Val = (const int *)&v12;
    _Newnode = std::_Tree_comp_alloc<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<int const &>,std::tuple<>>(
                 &v11,
                 &std::piecewise_construct_6,
                 &v15,
                 &v16);
    std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Insert_hint<std::pair<int const,AgStandardTouchData> &,std::_Tree_node<std::pair<int const,AgStandardTouchData>,void *> *>(
      (std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> > *)&v11,
      (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > > *)&v15,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > >)Myhead,
      &_Newnode->_Myval,
      _Newnode);
    Myhead = (int *)v15._Myfirst._Val;
  }
  *((_QWORD *)Myhead + 4) = v12;
  Myhead[10] = v13;
  v15._Myfirst._Val = (const int *)&v14;
  std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>(
    &v14,
    (const std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> > *)&v11,
    (std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> > > *)&v16);
  AgStandardTouchController::handleTouchesBegan(this->m_touch.m_ptr, (std::map<int,AgStandardTouchData> *)&v14);
  v8 = v11._Mypair._Myval2._Myval2._Myhead;
  v9 = v11._Mypair._Myval2._Myval2._Myhead->_Parent;
  v10 = v9;
  if ( !v9->_Isnil )
  {
    do
    {
      std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Erase(
        (std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *)&v11,
        (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)v10->_Right);
      v10 = v10->_Left;
      operator delete(v9);
      v9 = v10;
    }
    while ( !v10->_Isnil );
    v8 = v11._Mypair._Myval2._Myval2._Myhead;
  }
  v8->_Parent = v8;
  v11._Mypair._Myval2._Myval2._Myhead->_Left = v11._Mypair._Myval2._Myval2._Myhead;
  v11._Mypair._Myval2._Myval2._Myhead->_Right = v11._Mypair._Myval2._Myval2._Myhead;
  v11._Mypair._Myval2._Myval2._Mysize = 0i64;
  operator delete(v11._Mypair._Myval2._Myval2._Myhead);
}

void __fastcall AgPCInputManager::handleMouseButtonUp(AgPCInputManager *this, AgMouseButton button)
{
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *Parent; // rax
  int *Myhead; // rbx
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *_Newnode; // rax
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *v6; // rdi
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *v7; // rsi
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *v8; // rbx
  std::_Tree_comp_alloc<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> > v9; // [rsp+38h] [rbp-38h] BYREF
  __int64 v10; // [rsp+48h] [rbp-28h] BYREF
  int v11; // [rsp+50h] [rbp-20h]
  std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> > v12; // [rsp+58h] [rbp-18h] BYREF
  std::tuple<int const &> v13; // [rsp+90h] [rbp+20h] BYREF
  std::tuple<> v14; // [rsp+98h] [rbp+28h] BYREF

  this->m_mouse.m_ptr->m_currentButtons[button] = 0;
  v9._Mypair._Myval2._Myval2._Myhead = 0i64;
  v9._Mypair._Myval2._Myval2._Mysize = 0i64;
  v9._Mypair._Myval2._Myval2._Myhead = std::_Tree_comp_alloc<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Buyheadnode(&v9);
  v10 = 0i64;
  v11 = 0;
  Parent = v9._Mypair._Myval2._Myval2._Myhead->_Parent;
  Myhead = (int *)v9._Mypair._Myval2._Myval2._Myhead;
  if ( Parent->_Isnil )
    goto LABEL_8;
  do
  {
    if ( Parent->_Myval.first >= 0 )
    {
      Myhead = (int *)Parent;
      Parent = Parent->_Left;
    }
    else
    {
      Parent = Parent->_Right;
    }
  }
  while ( !Parent->_Isnil );
  if ( Myhead == (int *)v9._Mypair._Myval2._Myval2._Myhead || Myhead[7] > 0 )
  {
LABEL_8:
    v13._Myfirst._Val = (const int *)&v10;
    _Newnode = std::_Tree_comp_alloc<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<int const &>,std::tuple<>>(
                 &v9,
                 &std::piecewise_construct_6,
                 &v13,
                 &v14);
    std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Insert_hint<std::pair<int const,AgStandardTouchData> &,std::_Tree_node<std::pair<int const,AgStandardTouchData>,void *> *>(
      (std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> > *)&v9,
      (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > > *)&v13,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > >)Myhead,
      &_Newnode->_Myval,
      _Newnode);
    Myhead = (int *)v13._Myfirst._Val;
  }
  *((_QWORD *)Myhead + 4) = v10;
  Myhead[10] = v11;
  v13._Myfirst._Val = (const int *)&v12;
  std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>(
    &v12,
    (const std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> > *)&v9,
    (std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> > > *)&v14);
  AgStandardTouchController::handleTouchesEnded(this->m_touch.m_ptr, (std::map<int,AgStandardTouchData> *)&v12);
  v6 = v9._Mypair._Myval2._Myval2._Myhead;
  v7 = v9._Mypair._Myval2._Myval2._Myhead->_Parent;
  v8 = v7;
  if ( !v7->_Isnil )
  {
    do
    {
      std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Erase(
        (std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *)&v9,
        (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)v8->_Right);
      v8 = v8->_Left;
      operator delete(v7);
      v7 = v8;
    }
    while ( !v8->_Isnil );
    v6 = v9._Mypair._Myval2._Myval2._Myhead;
  }
  v6->_Parent = v6;
  v9._Mypair._Myval2._Myval2._Myhead->_Left = v9._Mypair._Myval2._Myval2._Myhead;
  v9._Mypair._Myval2._Myval2._Myhead->_Right = v9._Mypair._Myval2._Myval2._Myhead;
  v9._Mypair._Myval2._Myval2._Mysize = 0i64;
  operator delete(v9._Mypair._Myval2._Myval2._Myhead);
}

void __fastcall AgPCInputManager::handlePointerMoved(AgPCInputManager *this, const AgVector2 *position)
{
  AgStandardMouseController *m_ptr; // r10
  AgSingleton<AgInputManager>_vtbl *v4; // r8
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *Parent; // rax
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *Myhead; // rbx
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *_Newnode; // rax
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *v8; // rdi
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *v9; // rsi
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *v10; // rbx
  std::_Tree_comp_alloc<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> > v11; // [rsp+38h] [rbp-38h] BYREF
  __int64 v12; // [rsp+48h] [rbp-28h] BYREF
  float v13; // [rsp+50h] [rbp-20h]
  std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> > v14; // [rsp+58h] [rbp-18h] BYREF
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > > result; // [rsp+90h] [rbp+20h] BYREF
  std::tuple<int const &> v16; // [rsp+98h] [rbp+28h] BYREF

  m_ptr = this->m_mouse.m_ptr;
  v4 = AgSingleton<AgInputManager>::ms_instance[15].__vftable;
  AgSingleton<AgInputManager>::ms_instance[15].__vftable = (AgSingleton<AgInputManager>_vtbl *)((char *)&v4->~AgSingleton<AgInputManager>
                                                                                              + 1);
  m_ptr->m_lastUsed = (unsigned __int64)v4;
  m_ptr->m_currentPosition = *position;
  v11._Mypair._Myval2._Myval2._Myhead = 0i64;
  v11._Mypair._Myval2._Myval2._Mysize = 0i64;
  v11._Mypair._Myval2._Myval2._Myhead = std::_Tree_comp_alloc<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Buyheadnode(&v11);
  v12 = 0i64;
  v13 = 0.0;
  Parent = v11._Mypair._Myval2._Myval2._Myhead->_Parent;
  Myhead = v11._Mypair._Myval2._Myval2._Myhead;
  if ( Parent->_Isnil )
    goto LABEL_8;
  do
  {
    if ( Parent->_Myval.first >= 0 )
    {
      Myhead = Parent;
      Parent = Parent->_Left;
    }
    else
    {
      Parent = Parent->_Right;
    }
  }
  while ( !Parent->_Isnil );
  if ( Myhead == v11._Mypair._Myval2._Myval2._Myhead || Myhead->_Myval.first > 0 )
  {
LABEL_8:
    v16._Myfirst._Val = (const int *)&v12;
    _Newnode = std::_Tree_comp_alloc<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<int const &>,std::tuple<>>(
                 &v11,
                 &std::piecewise_construct_6,
                 &v16,
                 (std::tuple<> *)&result);
    std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Insert_hint<std::pair<int const,AgStandardTouchData> &,std::_Tree_node<std::pair<int const,AgStandardTouchData>,void *> *>(
      (std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> > *)&v11,
      &result,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > >)Myhead,
      &_Newnode->_Myval,
      _Newnode);
    Myhead = result._Ptr;
  }
  *(_QWORD *)&Myhead->_Myval.second.m_touchId = v12;
  Myhead->_Myval.second.m_position.m_y = v13;
  v16._Myfirst._Val = (const int *)&v14;
  std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>(
    &v14,
    (const std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> > *)&v11,
    (std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> > > *)&result);
  AgStandardTouchController::handleTouchesMoved(this->m_touch.m_ptr, (std::map<int,AgStandardTouchData> *)&v14);
  v8 = v11._Mypair._Myval2._Myval2._Myhead;
  v9 = v11._Mypair._Myval2._Myval2._Myhead->_Parent;
  v10 = v9;
  if ( !v9->_Isnil )
  {
    do
    {
      std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Erase(
        (std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *)&v11,
        (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)v10->_Right);
      v10 = v10->_Left;
      operator delete(v9);
      v9 = v10;
    }
    while ( !v10->_Isnil );
    v8 = v11._Mypair._Myval2._Myval2._Myhead;
  }
  v8->_Parent = v8;
  v11._Mypair._Myval2._Myval2._Myhead->_Left = v11._Mypair._Myval2._Myval2._Myhead;
  v11._Mypair._Myval2._Myval2._Myhead->_Right = v11._Mypair._Myval2._Myval2._Myhead;
  v11._Mypair._Myval2._Myval2._Mysize = 0i64;
  operator delete(v11._Mypair._Myval2._Myval2._Myhead);
}

void __fastcall AgPCInputManager::handleScrollChanged(AgPCInputManager *this, const AgVector2 *value)
{
  AgStandardMouseController *m_ptr; // r9
  AgSingleton<AgInputManager>_vtbl *v3; // rcx

  m_ptr = this->m_mouse.m_ptr;
  v3 = AgSingleton<AgInputManager>::ms_instance[15].__vftable;
  AgSingleton<AgInputManager>::ms_instance[15].__vftable = (AgSingleton<AgInputManager>_vtbl *)((char *)&v3->~AgSingleton<AgInputManager>
                                                                                              + 1);
  m_ptr->m_lastUsed = (unsigned __int64)v3;
  m_ptr->m_currentScroll.m_x = m_ptr->m_currentScroll.m_x + value->m_x;
  m_ptr->m_currentScroll.m_y = value->m_y + m_ptr->m_currentScroll.m_y;
}

void __fastcall AgStandardTouchController::handleTouchesBegan(
        AgStandardTouchController *this,
        std::map<int,AgStandardTouchData> *events)
{
  AgMutex *p_m_lock; // rbx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > > result; // [rsp+50h] [rbp+8h] BYREF
  std::map<int,AgStandardTouchData> *v6; // [rsp+58h] [rbp+10h]

  v6 = events;
  p_m_lock = &this->m_lock;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_lock);
  std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::insert<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const,AgStandardTouchData>>>>>(
    &this->m_startedTouches,
    (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > >)events->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > >)events->_Mypair._Myval2._Myval2._Myhead);
  LeaveCriticalSection((LPCRITICAL_SECTION)p_m_lock);
  std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::erase(
    events,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > >)events->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > >)events->_Mypair._Myval2._Myval2._Myhead);
  operator delete(events->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall AgStandardTouchController::handleTouchesEnded(
        AgStandardTouchController *this,
        std::map<int,AgStandardTouchData> *events)
{
  AgMutex *p_m_lock; // rbx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > > result; // [rsp+50h] [rbp+8h] BYREF
  std::map<int,AgStandardTouchData> *v6; // [rsp+58h] [rbp+10h]

  v6 = events;
  p_m_lock = &this->m_lock;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_lock);
  std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::insert<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const,AgStandardTouchData>>>>>(
    &this->m_endedTouches,
    (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > >)events->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > >)events->_Mypair._Myval2._Myval2._Myhead);
  LeaveCriticalSection((LPCRITICAL_SECTION)p_m_lock);
  std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::erase(
    events,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > >)events->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > >)events->_Mypair._Myval2._Myval2._Myhead);
  operator delete(events->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall AgStandardTouchController::handleTouchesMoved(
        AgStandardTouchController *this,
        std::map<int,AgStandardTouchData> *events)
{
  AgMutex *p_m_lock; // rbx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > > result; // [rsp+50h] [rbp+8h] BYREF
  std::map<int,AgStandardTouchData> *v6; // [rsp+58h] [rbp+10h]

  v6 = events;
  p_m_lock = &this->m_lock;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_lock);
  std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::insert<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const,AgStandardTouchData>>>>>(
    &this->m_movedTouches,
    (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > >)events->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > >)events->_Mypair._Myval2._Myval2._Myhead);
  LeaveCriticalSection((LPCRITICAL_SECTION)p_m_lock);
  std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::erase(
    events,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > >)events->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,AgStandardTouchData> > > >)events->_Mypair._Myval2._Myval2._Myhead);
  operator delete(events->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall AgPCInputManager::onKeyDown(AgPCInputManager *this, AgKeyboardButton key)
{
  __int64 v2; // rbx
  AgStandardKeyboardController *m_ptr; // rsi
  AgSingleton<AgInputManager> *v4; // rdi
  AgSingleton<AgInputManager>_vtbl *v5; // rcx
  unsigned __int64 v6; // rdx
  AgSingleton<AgInputManager> *v7; // rbx
  _RTL_CRITICAL_SECTION *v8; // rsi
  std::vector<AgTypingInputEvent> *v9; // rbx
  AgTypingInputEvent *Mylast; // rcx
  signed __int64 v11; // rdi
  AgString *v12; // rcx
  AgString *v13; // rdi
  AgString *p_string; // rcx
  unsigned __int64 v15; // rdx
  AgString move; // [rsp+28h] [rbp-40h] BYREF
  int v17; // [rsp+38h] [rbp-30h]
  AgSingleton<AgInputManager> *v18; // [rsp+40h] [rbp-28h]
  AgString copy; // [rsp+48h] [rbp-20h] BYREF

  v2 = key;
  m_ptr = this->m_keyboard.m_ptr;
  v4 = AgSingleton<AgInputManager>::ms_instance;
  if ( !AgInputManager::isKeyLastUsedIgnored((AgInputManager *)AgSingleton<AgInputManager>::ms_instance, key) )
  {
    v5 = v4[15].__vftable;
    v4[15].__vftable = (AgSingleton<AgInputManager>_vtbl *)((char *)&v5->~AgSingleton<AgInputManager> + 1);
    m_ptr->m_lastUsed = (unsigned __int64)v5;
  }
  m_ptr->m_currentKeys[v2] = 1;
  if ( (_DWORD)v2 == 8 )
  {
    AgString::AgString(&move);
    AgString::AgString(&copy, 8);
    AgString::operator=(&move, &copy);
    AgString::~AgString(&copy, v6);
    v7 = AgSingleton<AgInputManager>::ms_instance;
    v17 = 0;
    v8 = (_RTL_CRITICAL_SECTION *)&AgSingleton<AgInputManager>::ms_instance[76];
    v18 = AgSingleton<AgInputManager>::ms_instance + 76;
    EnterCriticalSection((LPCRITICAL_SECTION)&AgSingleton<AgInputManager>::ms_instance[76]);
    v17 = 1;
    v9 = (std::vector<AgTypingInputEvent> *)&v7[81];
    Mylast = v9->_Mypair._Myval2._Mylast;
    if ( &move >= (AgString *)Mylast || v9->_Mypair._Myval2._Myfirst > (AgTypingInputEvent *)&move )
    {
      if ( Mylast == v9->_Mypair._Myval2._Myend )
        std::vector<AgTypingInputEvent>::_Reserve(v9, 1ui64);
      p_string = &v9->_Mypair._Myval2._Mylast->string;
      if ( p_string )
        AgString::AgString(p_string, &move);
    }
    else
    {
      v11 = (char *)&move - (char *)v9->_Mypair._Myval2._Myfirst;
      if ( Mylast == v9->_Mypair._Myval2._Myend )
        std::vector<AgTypingInputEvent>::_Reserve(v9, 1ui64);
      v12 = &v9->_Mypair._Myval2._Mylast->string;
      v13 = (AgString *)((char *)&v9->_Mypair._Myval2._Myfirst->string + (v11 & 0xFFFFFFFFFFFFFFF0ui64));
      if ( v12 )
        AgString::AgString(v12, v13);
    }
    ++v9->_Mypair._Myval2._Mylast;
    LeaveCriticalSection(v8);
    v17 = 0;
    AgString::~AgString(&move, v15);
  }
}

// attributes: thunk
__int64 __fastcall AgPCInputManager::onSingletonExit(AgPCInputManager *this)
{
  return AgInputManager::onSingletonExit(this);
}

// attributes: thunk
int __fastcall AgPCInputManager::onSingletonInit(AgPCInputManager *this)
{
  return AgSDLInputManager::onSingletonInit(this);
}

void __fastcall AgPCInputManager::processSDLMouse(AgPCInputManager *this, SDL_MouseMotionEvent *param)
{
  AgPCInputManager::InternalData *m_internalData; // rax

  m_internalData = this->m_internalData;
  if ( m_internalData )
  {
    m_internalData->m_mousePosition.m_x = (float)param->xrel + m_internalData->m_mousePosition.m_x;
    this->m_internalData->m_mousePosition.m_y = (float)param->yrel + this->m_internalData->m_mousePosition.m_y;
    AgPCInputManager::handlePointerMoved(this, &this->m_internalData->m_mousePosition);
  }
}

__int64 __fastcall AgPCInputManager::translateKey(AgPCInputManager *this, SDL_Keysym *keysym)
{
  SDL_Scancode scancode; // er8
  __int64 result; // rax
  unsigned int sym; // edx

  scancode = keysym->scancode;
  switch ( keysym->scancode )
  {
    case SDL_SCANCODE_RETURN:
      result = 13i64;
      break;
    case SDL_SCANCODE_ESCAPE:
      result = 27i64;
      break;
    case SDL_SCANCODE_BACKSPACE:
      result = 8i64;
      break;
    case SDL_SCANCODE_TAB:
      result = 9i64;
      break;
    case SDL_SCANCODE_SPACE:
      result = 32i64;
      break;
    case SDL_SCANCODE_MINUS:
      result = 137i64;
      break;
    case SDL_SCANCODE_EQUALS:
      result = 136i64;
      break;
    case SDL_SCANCODE_LEFTBRACKET:
      result = 219i64;
      break;
    case SDL_SCANCODE_RIGHTBRACKET:
      result = 221i64;
      break;
    case SDL_SCANCODE_BACKSLASH:
      result = 220i64;
      break;
    case SDL_SCANCODE_SEMICOLON:
      result = 186i64;
      break;
    case SDL_SCANCODE_APOSTROPHE:
      result = 222i64;
      break;
    case SDL_SCANCODE_GRAVE:
      result = 192i64;
      break;
    case SDL_SCANCODE_COMMA:
      result = 188i64;
      break;
    case SDL_SCANCODE_PERIOD:
      result = 190i64;
      break;
    case SDL_SCANCODE_SLASH:
      result = 191i64;
      break;
    case SDL_SCANCODE_F1:
      result = 112i64;
      break;
    case SDL_SCANCODE_F2:
      result = 113i64;
      break;
    case SDL_SCANCODE_F3:
      result = 114i64;
      break;
    case SDL_SCANCODE_F4:
      result = 115i64;
      break;
    case SDL_SCANCODE_F5:
      result = 116i64;
      break;
    case SDL_SCANCODE_F6:
      result = 117i64;
      break;
    case SDL_SCANCODE_F7:
      result = 118i64;
      break;
    case SDL_SCANCODE_F8:
      result = 119i64;
      break;
    case SDL_SCANCODE_F9:
      result = 120i64;
      break;
    case SDL_SCANCODE_F10:
      result = 121i64;
      break;
    case SDL_SCANCODE_F11:
      result = 122i64;
      break;
    case SDL_SCANCODE_F12:
      result = 123i64;
      break;
    case SDL_SCANCODE_INSERT:
      result = 45i64;
      break;
    case SDL_SCANCODE_HOME:
      result = 36i64;
      break;
    case SDL_SCANCODE_PAGEUP:
      result = 33i64;
      break;
    case SDL_SCANCODE_DELETE:
      result = 46i64;
      break;
    case SDL_SCANCODE_END:
      result = 35i64;
      break;
    case SDL_SCANCODE_PAGEDOWN:
      result = 34i64;
      break;
    case SDL_SCANCODE_RIGHT:
      result = 39i64;
      break;
    case SDL_SCANCODE_LEFT:
      result = 37i64;
      break;
    case SDL_SCANCODE_DOWN:
      result = 40i64;
      break;
    case SDL_SCANCODE_UP:
      result = 38i64;
      break;
    case SDL_SCANCODE_KP_DIVIDE:
      result = 111i64;
      break;
    case SDL_SCANCODE_KP_MULTIPLY:
      result = 106i64;
      break;
    case SDL_SCANCODE_KP_MINUS:
      result = 109i64;
      break;
    case SDL_SCANCODE_KP_PLUS:
      result = 107i64;
      break;
    case SDL_SCANCODE_KP_ENTER:
      result = 138i64;
      break;
    case SDL_SCANCODE_KP_1:
      result = 97i64;
      break;
    case SDL_SCANCODE_KP_2:
      result = 98i64;
      break;
    case SDL_SCANCODE_KP_3:
      result = 99i64;
      break;
    case SDL_SCANCODE_KP_4:
      result = 100i64;
      break;
    case SDL_SCANCODE_KP_5:
      result = 101i64;
      break;
    case SDL_SCANCODE_KP_6:
      result = 102i64;
      break;
    case SDL_SCANCODE_KP_7:
      result = 103i64;
      break;
    case SDL_SCANCODE_KP_8:
      result = 104i64;
      break;
    case SDL_SCANCODE_KP_9:
      result = 105i64;
      break;
    case SDL_SCANCODE_KP_0:
      result = 96i64;
      break;
    case SDL_SCANCODE_KP_PERIOD:
      result = 108i64;
      break;
    case SDL_SCANCODE_F13:
      result = 124i64;
      break;
    case SDL_SCANCODE_F14:
      result = 125i64;
      break;
    case SDL_SCANCODE_F15:
      result = 126i64;
      break;
    case SDL_SCANCODE_F16:
      result = 127i64;
      break;
    case SDL_SCANCODE_F17:
      result = 128i64;
      break;
    case SDL_SCANCODE_F18:
      result = 129i64;
      break;
    case SDL_SCANCODE_F19:
      result = 130i64;
      break;
    case SDL_SCANCODE_F20:
      result = 131i64;
      break;
    case SDL_SCANCODE_F21:
      result = 132i64;
      break;
    case SDL_SCANCODE_F22:
      result = 133i64;
      break;
    case SDL_SCANCODE_F23:
      result = 134i64;
      break;
    case SDL_SCANCODE_F24:
      result = 135i64;
      break;
    case SDL_SCANCODE_LCTRL:
      result = 162i64;
      break;
    case SDL_SCANCODE_LSHIFT:
      result = 160i64;
      break;
    case SDL_SCANCODE_LALT:
      result = 164i64;
      break;
    case SDL_SCANCODE_LGUI:
      result = 166i64;
      break;
    case SDL_SCANCODE_RCTRL:
      result = 163i64;
      break;
    case SDL_SCANCODE_RSHIFT:
      result = 161i64;
      break;
    case SDL_SCANCODE_RALT:
      result = 165i64;
      break;
    case SDL_SCANCODE_RGUI:
      result = 167i64;
      break;
    default:
      if ( (unsigned int)(scancode - 4) > 0x19 )
      {
        sym = keysym->sym;
        result = 0i64;
        if ( sym - 48 <= 9 )
          result = sym;
      }
      else
      {
        result = (unsigned int)(scancode + 61);
      }
      break;
  }
  return result;
}

void __fastcall AgPCInputManager::update(AgPCInputManager *this)
{
  AgStandardKeyboardController *m_ptr; // r9
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *Myhead; // rdx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v4; // rcx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *Parent; // rax
  bool v6; // zf
  std::list<AgControllerComponent *> *v7; // r8
  std::list<AgControllerComponent *> *p_second; // rdx
  std::_List_node<AgControllerComponent *,void *> *v9; // rdx
  std::_List_node<AgControllerComponent *,void *> *Next; // rax
  AgControllerComponent *Myval; // rcx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v12; // rdx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v13; // rcx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v14; // rax
  std::_List_node<AgControllerComponent *,void *> *v15; // rax
  AgControllerComponent *v16; // rcx
  AgProgram *Instance; // rax

  AgInputManager::update(this);
  m_ptr = this->m_keyboard.m_ptr;
  Myhead = m_ptr->m_components._Mypair._Myval2._Myval2._Myhead;
  v4 = Myhead;
  Parent = Myhead->_Parent;
  while ( !Parent->_Isnil )
  {
    if ( Parent->_Myval.first >= AgControllerComponentType_Buttons )
    {
      v4 = Parent;
      Parent = Parent->_Left;
    }
    else
    {
      Parent = Parent->_Right;
    }
  }
  if ( v4 == Myhead || v4->_Myval.first > AgControllerComponentType_Buttons )
    v4 = m_ptr->m_components._Mypair._Myval2._Myval2._Myhead;
  v6 = v4 == Myhead;
  v7 = &AgController::ms_emptyControllerComponentList;
  p_second = &v4->_Myval.second;
  if ( v6 )
    p_second = &AgController::ms_emptyControllerComponentList;
  v9 = p_second->_Mypair._Myval2._Myhead;
  Next = v9->_Next;
  if ( v9->_Next == v9 )
  {
LABEL_14:
    Myval = &AgController::ms_emptyControllerComponent;
  }
  else
  {
    while ( 1 )
    {
      Myval = Next->_Myval;
      if ( !Myval->m_id )
        break;
      Next = Next->_Next;
      if ( Next == v9 )
        goto LABEL_14;
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)&Myval[1] + 20i64) & 0x10) != 0 )
  {
    v12 = m_ptr->m_components._Mypair._Myval2._Myval2._Myhead;
    v13 = v12;
    v14 = v12->_Parent;
    while ( !v14->_Isnil )
    {
      if ( v14->_Myval.first >= AgControllerComponentType_Buttons )
      {
        v13 = v14;
        v14 = v14->_Left;
      }
      else
      {
        v14 = v14->_Right;
      }
    }
    if ( v13 == v12 || v13->_Myval.first > AgControllerComponentType_Buttons )
      v13 = m_ptr->m_components._Mypair._Myval2._Myval2._Myhead;
    if ( v13 != v12 )
      v7 = &v13->_Myval.second;
    v15 = v7->_Mypair._Myval2._Myhead->_Next;
    if ( v15 == v7->_Mypair._Myval2._Myhead )
    {
LABEL_29:
      v16 = &AgController::ms_emptyControllerComponent;
    }
    else
    {
      while ( 1 )
      {
        v16 = v15->_Myval;
        if ( !v16->m_id )
          break;
        v15 = v15->_Next;
        if ( v15 == v7->_Mypair._Myval2._Myhead )
          goto LABEL_29;
      }
    }
    if ( (*(_DWORD *)(*(_QWORD *)&v16[1] + 12i64) & 0x80000) != 0 )
    {
      Instance = AgProgram::getInstance();
      AgProgram::onShutdown(Instance);
    }
  }
}

void __fastcall AgStandardKeyboardController::update(AgStandardKeyboardController *this)
{
  unsigned __int64 Mysize; // rax
  std::vector<bool> *p_m_buttons; // rdx
  std::vector<bool> *p_m_lastButtons; // rcx
  unsigned __int64 v5; // rax
  __int64 v6; // r9
  unsigned int *v7; // r8
  unsigned int v8; // ecx
  char v9; // dl
  int v10; // ecx

  Mysize = this->m_keys.m_buttons._Mysize;
  p_m_buttons = &this->m_keys.m_buttons;
  p_m_lastButtons = &this->m_keys.m_lastButtons;
  p_m_lastButtons->_Mysize = Mysize;
  std::vector<unsigned int>::operator=(&p_m_lastButtons->_Myvec, &p_m_buttons->_Myvec);
  v5 = 0i64;
  v6 = 256i64;
  do
  {
    v7 = &this->m_keys.m_buttons._Myvec._Mypair._Myval2._Myfirst[v5 >> 5];
    v8 = *v7;
    v9 = v5 & 0x1F;
    if ( this->m_currentKeys[v5] )
      v10 = v8 | (1 << v9);
    else
      v10 = v8 & ~(1 << v9);
    ++v5;
    *v7 = v10;
    --v6;
  }
  while ( v6 );
}

void __fastcall AgStandardMouseController::update(AgStandardMouseController *this)
{
  unsigned __int64 Mysize; // rax
  std::vector<bool> *p_m_buttons; // rdx
  std::vector<bool> *p_m_lastButtons; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // r10
  unsigned int *Myfirst; // r8
  unsigned __int64 v8; // rcx
  char v9; // r9
  unsigned int v10; // eax
  int v11; // eax

  Mysize = this->m_buttons.m_buttons._Mysize;
  p_m_buttons = &this->m_buttons.m_buttons;
  p_m_lastButtons = &this->m_buttons.m_lastButtons;
  p_m_lastButtons->_Mysize = Mysize;
  std::vector<unsigned int>::operator=(&p_m_lastButtons->_Myvec, &p_m_buttons->_Myvec);
  v5 = 0i64;
  v6 = 5i64;
  do
  {
    Myfirst = this->m_buttons.m_buttons._Myvec._Mypair._Myval2._Myfirst;
    v8 = v5 >> 5;
    v9 = v5 & 0x1F;
    v10 = Myfirst[v5 >> 5];
    if ( this->m_currentButtons[v5] )
      v11 = v10 | (1 << v9);
    else
      v11 = v10 & ~(1 << v9);
    ++v5;
    Myfirst[v8] = v11;
    --v6;
  }
  while ( v6 );
  if ( this->m_x.m_type )
    this->m_x.m_value = this->m_currentPosition.m_x;
  if ( this->m_y.m_type )
    this->m_y.m_value = this->m_currentPosition.m_y;
  if ( this->m_scrollX.m_type )
    this->m_scrollX.m_value = this->m_currentScroll.m_x;
  if ( this->m_scrollY.m_type )
    this->m_scrollY.m_value = this->m_currentScroll.m_y;
  this->m_currentScroll = AgVector2::Zero;
}

void __fastcall AgStandardTouchController::update(AgStandardTouchController *this)
{
  AgMutex *p_m_lock; // r15
  std::map<int,AgStandardTouchData> *p_m_startedTouches; // r14
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *Left; // rdx
  unsigned int i; // esi
  AgControllerTouchInfo *p_m_invalidTouchInfo; // r8
  int m_touchState; // edi
  int m_touchId; // ebx
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *Myhead; // r8
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *Parent; // rax
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *v11; // rcx
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *v12; // r8
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *v13; // rax
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *v14; // rcx
  __int64 v15; // rcx
  AgControllerTouchInfo *m_touches; // rax
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *v17; // rdi
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *j; // rbx
  std::map<int,AgStandardTouchData> *p_m_movedTouches; // rsi
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *v20; // rdi
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *k; // rbx
  std::map<int,AgStandardTouchData> *p_m_endedTouches; // rsi
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *v23; // rdi
  std::_Tree_node<std::pair<int const ,AgStandardTouchData>,void *> *m; // rbx
  __m256i v25; // [rsp+38h] [rbp-60h]

  p_m_lock = &this->m_lock;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_lock);
  p_m_startedTouches = &this->m_startedTouches;
  Left = this->m_startedTouches._Mypair._Myval2._Myval2._Myhead->_Left;
  for ( i = 0; this->m_touchScreen.m_type && i < this->m_touchScreen.m_maxTouches; ++i )
  {
    if ( this->m_touchScreen.m_type )
      p_m_invalidTouchInfo = &this->m_touchScreen.m_touches[i];
    else
      p_m_invalidTouchInfo = &this->m_touchScreen.m_invalidTouchInfo;
    v25 = *(__m256i *)&p_m_invalidTouchInfo->m_touchId;
    m_touchState = p_m_invalidTouchInfo->m_touchState;
    if ( m_touchState == 1 )
    {
      m_touchState = 2;
    }
    else if ( m_touchState == 3 )
    {
      m_touchState = 0;
      v25.m256i_i32[7] = 0;
    }
    if ( Left == p_m_startedTouches->_Mypair._Myval2._Myval2._Myhead || m_touchState )
    {
      m_touchId = v25.m256i_i32[0];
    }
    else
    {
      m_touchState = 1;
      m_touchId = Left->_Myval.second.m_touchId;
      v25.m256i_i32[0] = m_touchId;
      *(__int64 *)((char *)v25.m256i_i64 + 4) = (__int64)Left->_Myval.second.m_position;
      v25.m256i_i32[7] = 1;
      *(__int64 *)((char *)&v25.m256i_i64[1] + 4) = _mm_unpacklo_ps((__m128)0i64, (__m128)0i64).m128_u64[0];
      std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::erase(
        &this->m_startedTouches,
        &Left->_Myval.first);
      Left = p_m_startedTouches->_Mypair._Myval2._Myval2._Myhead->_Left;
    }
    Myhead = this->m_movedTouches._Mypair._Myval2._Myval2._Myhead;
    Parent = Myhead->_Parent;
    v11 = Myhead;
    while ( !Parent->_Isnil )
    {
      if ( Parent->_Myval.first >= m_touchId )
      {
        v11 = Parent;
        Parent = Parent->_Left;
      }
      else
      {
        Parent = Parent->_Right;
      }
    }
    if ( v11 == Myhead || m_touchId < v11->_Myval.first )
      v11 = this->m_movedTouches._Mypair._Myval2._Myval2._Myhead;
    if ( v11 != Myhead )
      *(__int64 *)((char *)v25.m256i_i64 + 4) = (__int64)v11->_Myval.second.m_position;
    v12 = this->m_endedTouches._Mypair._Myval2._Myval2._Myhead;
    v13 = v12->_Parent;
    v14 = v12;
    while ( !v13->_Isnil )
    {
      if ( v13->_Myval.first >= m_touchId )
      {
        v14 = v13;
        v13 = v13->_Left;
      }
      else
      {
        v13 = v13->_Right;
      }
    }
    if ( v14 == v12 || m_touchId < v14->_Myval.first )
      v14 = this->m_endedTouches._Mypair._Myval2._Myval2._Myhead;
    if ( v14 != v12 )
      m_touchState = 3;
    if ( this->m_touchScreen.m_type )
    {
      v15 = i;
      m_touches = this->m_touchScreen.m_touches;
      *(__m256i *)&m_touches[v15].m_touchId = v25;
      m_touches[v15].m_touchState = m_touchState;
    }
  }
  v17 = p_m_startedTouches->_Mypair._Myval2._Myval2._Myhead->_Parent;
  for ( j = v17; !j->_Isnil; v17 = j )
  {
    std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Erase(
      (std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *)&this->m_startedTouches,
      (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)j->_Right);
    j = j->_Left;
    operator delete(v17);
  }
  p_m_startedTouches->_Mypair._Myval2._Myval2._Myhead->_Parent = p_m_startedTouches->_Mypair._Myval2._Myval2._Myhead;
  p_m_startedTouches->_Mypair._Myval2._Myval2._Myhead->_Left = p_m_startedTouches->_Mypair._Myval2._Myval2._Myhead;
  p_m_startedTouches->_Mypair._Myval2._Myval2._Myhead->_Right = p_m_startedTouches->_Mypair._Myval2._Myval2._Myhead;
  this->m_startedTouches._Mypair._Myval2._Myval2._Mysize = 0i64;
  p_m_movedTouches = &this->m_movedTouches;
  v20 = this->m_movedTouches._Mypair._Myval2._Myval2._Myhead->_Parent;
  for ( k = v20; !k->_Isnil; v20 = k )
  {
    std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Erase(
      (std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *)&this->m_movedTouches,
      (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)k->_Right);
    k = k->_Left;
    operator delete(v20);
  }
  p_m_movedTouches->_Mypair._Myval2._Myval2._Myhead->_Parent = p_m_movedTouches->_Mypair._Myval2._Myval2._Myhead;
  p_m_movedTouches->_Mypair._Myval2._Myval2._Myhead->_Left = p_m_movedTouches->_Mypair._Myval2._Myval2._Myhead;
  p_m_movedTouches->_Mypair._Myval2._Myval2._Myhead->_Right = p_m_movedTouches->_Mypair._Myval2._Myval2._Myhead;
  this->m_movedTouches._Mypair._Myval2._Myval2._Mysize = 0i64;
  p_m_endedTouches = &this->m_endedTouches;
  v23 = this->m_endedTouches._Mypair._Myval2._Myval2._Myhead->_Parent;
  for ( m = v23; !m->_Isnil; v23 = m )
  {
    std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Erase(
      (std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *)&this->m_endedTouches,
      (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)m->_Right);
    m = m->_Left;
    operator delete(v23);
  }
  p_m_endedTouches->_Mypair._Myval2._Myval2._Myhead->_Parent = p_m_endedTouches->_Mypair._Myval2._Myval2._Myhead;
  p_m_endedTouches->_Mypair._Myval2._Myval2._Myhead->_Left = p_m_endedTouches->_Mypair._Myval2._Myval2._Myhead;
  p_m_endedTouches->_Mypair._Myval2._Myval2._Myhead->_Right = p_m_endedTouches->_Mypair._Myval2._Myval2._Myhead;
  this->m_endedTouches._Mypair._Myval2._Myval2._Mysize = 0i64;
  LeaveCriticalSection((LPCRITICAL_SECTION)p_m_lock);
}

