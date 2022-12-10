#include "dev/silverware/git/sdk/agcondition.inl"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/input/agcontrolleraxiscomponent.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/silverware/git/src/platforms/pc/system/agpcsystemmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
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
#include "dev/silverware/git/sdk/agcondition.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/silverware/git/sdk/util/ageventdispatcher.h"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/silverware/git/src/platforms/shared/input/agstandardtouchcontroller.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/silverware/git/sdk/input/agcontrollertouchcomponent.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/silverware/git/sdk/util/agjsondata.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
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
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/silverware/git/sdk/input/agcontrollerrumblecomponent.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/silverware/git/sdk/system/agsystemmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/silverware/git/sdk/system/agsystemconfig.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/silverware/git/src/platforms/shared/input/agstandardmousecontroller.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/silverware/git/sdk/system/agwindowconfig.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/silverware/git/src/platforms/pc/sdl/include/sdl_stdinc.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/silverware/git/src/platforms/shared/input/agsdlinputmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/silverware/git/sdk/system/agplayermanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/silverware/git/sdk/system/agplayer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/src/platforms/shared/input/agstandardgamepadcontroller.h"
#include "dev/silverware/git/src/platforms/pc/input/agpcinputmanager.h"
#include "dev/silverware/git/src/platforms/shared/input/agstandardkeyboardcontroller.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/silverware/git/src/platforms/pc/sdl/include/sdl_endian.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/silverware/git/src/platforms/pc/sdl/include/sdl_rect.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"

AgControllerComponent AgController::ms_emptyControllerComponent; // 0x140A8FC90
std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > AgController::ms_emptyControllerComponentList; // 0x140A8FC98
std::piecewise_construct_t std::piecewise_construct; // 0x140861B7A
void(*??ms_emptyControllerComponentList$initializer$@AgController@@0P6AXXZEA@@3P6AXXZEA)(); // 0x140740678
typedef long SDL_Keycode;
typedef HRAWINPUT__ * HRAWINPUT;
typedef long Sint32;
typedef std::map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > > AgTouchMap;
typedef tagRAWMOUSE RAWMOUSE;
typedef tagRAWINPUT RAWINPUT;
typedef tagRAWINPUTHEADER RAWINPUTHEADER;
typedef tagRAWKEYBOARD RAWKEYBOARD;
typedef tagRAWHID RAWHID;
typedef AgPCInputManager AgPlatformInputManager;
typedef std::vector<unsigned int,std::allocator<unsigned int> > AgControllerIdArray;
AgSingleton<AgPlayerManager> * AgSingleton<AgPlayerManager>::ms_instance; // 0x140A8FCA8
AgInputManager::AgInputManager(); // 0x14064DCA0
AgAsyncEventDispatcher<AgControllerAddedEvent>::~AgAsyncEventDispatcher<AgControllerAddedEvent>(); // 0x14064E100
AgAsyncEventDispatcher<AgControllerPairingChangedEvent>::~AgAsyncEventDispatcher<AgControllerPairingChangedEvent>(); // 0x14064E180
AgAsyncEventDispatcher<AgControllerRemovedEvent>::~AgAsyncEventDispatcher<AgControllerRemovedEvent>(); // 0x14064E200
AgAsyncEventDispatcher<AgEditedInputEvent>::~AgAsyncEventDispatcher<AgEditedInputEvent>(); // 0x14064E280
AgAsyncEventDispatcher<AgTypingInputEvent>::~AgAsyncEventDispatcher<AgTypingInputEvent>(); // 0x14064E300
AgEventDispatcherBase<AgControllerAddedEvent>::~AgEventDispatcherBase<AgControllerAddedEvent>(); // 0x14064E380
AgEventDispatcherBase<AgControllerPairingChangedEvent>::~AgEventDispatcherBase<AgControllerPairingChangedEvent>(); // 0x14064E3E0
AgEventDispatcherBase<AgControllerRemovedEvent>::~AgEventDispatcherBase<AgControllerRemovedEvent>(); // 0x14064E440
AgEventDispatcherBase<AgEditedInputEvent>::~AgEventDispatcherBase<AgEditedInputEvent>(); // 0x14064E4A0
AgEventDispatcherBase<AgTypingInputEvent>::~AgEventDispatcherBase<AgTypingInputEvent>(); // 0x14064E500
std::_List_buy<AgControllerComponent * __ptr64,std::allocator<AgControllerComponent * __ptr64> >::~_List_buy<AgControllerComponent * __ptr64,std::allocator<AgControllerComponent * __ptr64> >(); // 0x14064E660
std::map<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > > >::~map<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > > >(); // 0x14064E910
std::map<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> > >::~map<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> > >(); // 0x14064E950
std::map<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> > >::~map<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> > >(); // 0x14064E990
std::map<enum AgControllerComponentType,std::list<AgControllerComponent * __ptr64,std::allocator<AgControllerComponent * __ptr64> >,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent * __ptr64,std::allocator<AgControllerComponent * __ptr64> > > > >::~map<enum AgControllerComponentType,std::list<AgControllerComponent * __ptr64,std::allocator<AgControllerComponent * __ptr64> >,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent * __ptr64,std::allocator<AgControllerComponent * __ptr64> > > > >(); // 0x14064E9D0
std::multimap<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> > >::~multimap<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> > >(); // 0x14064EA10
std::pair<unsigned int const ,AgPointer<AgController> >::~pair<unsigned int const ,AgPointer<AgController> >(); // 0x14064EA50
std::pair<AgStringKey const ,AgControllerComponentIndex>::~pair<AgStringKey const ,AgControllerComponentIndex>(); // 0x14064EA70
std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent * __ptr64,std::allocator<AgControllerComponent * __ptr64> > >::~pair<enum AgControllerComponentType const ,std::list<AgControllerComponent * __ptr64,std::allocator<AgControllerComponent * __ptr64> > >(); // 0x14064EA90
AgControllerAddedEvent::~AgControllerAddedEvent(); // 0x14064EE10
AgControllerButtonComponent::~AgControllerButtonComponent(); // 0x14064EE30
AgControllerEvent::~AgControllerEvent(); // 0x14064EED0
AgControllerRemovedEvent::~AgControllerRemovedEvent(); // 0x14064EEF0
AgPointer<AgController> AgInputManager::getController(unsigned long id); // 0x140653460
AgInputManager::~AgInputManager(); // 0x14064EF10
AgStringKey::~AgStringKey(); // 0x14064F0C0
AgInputManager::InputEntry::~InputEntry(); // 0x14064F0E0
AgControllerButtonComponent & AgControllerButtonComponent::operator=(AgControllerButtonComponent & __that); // 0x14064F3D0
AgInputManager::InputEntry & AgInputManager::InputEntry::operator=(const AgInputManager::InputEntry & __that); // 0x14064F470
unsigned long AgInputManager::getControllers(std::vector<AgPointer<AgController>,std::allocator<AgPointer<AgController> > > & controllers); // 0x140653650
unsigned long AgInputManager::getControllersByType(AgControllerType type, std::vector<AgPointer<AgController>,std::allocator<AgPointer<AgController> > > & controllers); // 0x140653730
AgPointer<AgController> AgInputManager::getFirstController(AgControllerType type); // 0x140653830
unsigned long AgInputManager::getPairedControllerIds(long long id, std::vector<unsigned int,std::allocator<unsigned int> > & controllers); // 0x140653A60
long long AgInputManager::getPairedUserId(unsigned long id); // 0x140653CF0
AgPointer<AgController> AgInputManager::getLastUsedController(); // 0x140653910
unsigned long AgInputManager::getUniqueControllerId(); // 0x140653E00
AgInputManager * AgInputManager::createSingleton(); // 0x140651DB0
void AgInputManager::update(); // 0x140655DE0
void AgInputManager::postUpdate(); // 0x140654C40
long AgInputManager::onSingletonInit(); // 0x140653FD0
long AgInputManager::onSingletonExit(); // 0x140653F60
void AgInputManager::addController(AgPointer<AgController> controller); // 0x1406512A0
void AgInputManager::addController(AgPointer<AgController> controller, long long pairedId); // 0x140651420
void AgInputManager::removeController(AgPointer<AgController> controller); // 0x140655100
void AgInputManager::saveData(unsigned char * buffer, unsigned long size); // 0x140655AC0
void AgInputManager::addKeyToLastUsedIgnores(AgKeyboardButton key); // 0x1406515F0
long AgInputManager::isKeyLastUsedIgnored(AgKeyboardButton key); // 0x140653EF0
void AgInputManager::clearControls(); // 0x140651C60
void AgInputManager::startTextInput(); // 0x140655C60
void AgInputManager::stopTextInput(); // 0x140655C70
void AgInputManager::updateTextInput(); // 0x140656700
long AgInputManager::InputEntry::deserialize(AgPointer<AgStream> stream); // 0x140651F00//decompilation failure at 140A8FC90!
//decompilation failure at 140A8FC98!
//decompilation failure at 140861B7A!
//decompilation failure at 140740678!
//decompilation failure at 140A8FCA8!
std::_List_node<AgControllerComponent *,void *> *__fastcall std::_List_buy<AgControllerComponent *>::_Buynode<AgControllerComponent * const &>(
        std::_List_buy<AgControllerComponent *> *this,
        std::_List_node<AgControllerComponent *,void *> *_Next,
        std::_List_node<AgControllerComponent *,void *> *_Prev,
        AgControllerComponent *const *<_Val_0>)
{
  std::_List_node<AgControllerComponent *,void *> *result; // rax

  result = std::_List_alloc<std::_List_base_types<AgControllerComponent *>>::_Buynode0(this, _Next, _Prev);
  if ( result != (std::_List_node<AgControllerComponent *,void *> *)-16i64 )
    result->_Myval = *<_Val_0>;
  return result;
}

std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int &&>,std::tuple<>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > >,0> > *this,
        const std::piecewise_construct_t *<_Val_0>,
        std::tuple<unsigned int &&> *<_Val_1>,
        std::tuple<> *<_Val_2>)
{
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *v5; // r9

  v5 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::_Buynode0(this);
  *(_WORD *)&v5->_Color = 0;
  if ( v5 != (std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *)-32i64 )
  {
    v5->_Myval.first = *<_Val_1>->_Myfirst._Val;
    v5->_Myval.second.m_ref = 0i64;
    v5->_Myval.second.m_ptr = 0i64;
  }
  return v5;
}

std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgStringKey &&>,std::tuple<>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> >,0> > *this,
        const std::piecewise_construct_t *<_Val_0>,
        std::tuple<AgStringKey &&> *<_Val_1>,
        std::tuple<> *<_Val_2>)
{
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v9; // [rsp+30h] [rbp-18h]

  v9 = std::_Tree_comp_alloc<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Buynode0(this);
  *(_WORD *)&v9->_Color = 0;
  std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<AgStringKey const,AgControllerComponentIndex>,void *>>>::construct<std::pair<AgStringKey const,AgControllerComponentIndex>,std::piecewise_construct_t const &,std::tuple<AgStringKey &&>,std::tuple<>>(
    (std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> > > *)this,
    &v9->_Myval,
    <_Val_0>,
    <_Val_1>,
    <_Val_2>);
  return v9;
}

std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<enum AgControllerComponentType &&>,std::tuple<>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > >,0> > *this,
        const std::piecewise_construct_t *<_Val_0>,
        std::tuple<enum AgControllerComponentType &&> *<_Val_1>,
        std::tuple<> *<_Val_2>)
{
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v5; // rax
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v6; // rdi

  v5 = std::_Tree_comp_alloc<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Buynode0(this);
  v6 = v5;
  *(_WORD *)&v5->_Color = 0;
  if ( v5 != (std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *)-32i64 )
  {
    v5->_Myval.first = *<_Val_1>->_Myfirst._Val;
    v5->_Myval.second._Mypair._Myval2._Myhead = 0i64;
    v5->_Myval.second._Mypair._Myval2._Mysize = 0i64;
    v5->_Myval.second._Mypair._Myval2._Myhead = std::_List_alloc<std::_List_base_types<AgControllerComponent *>>::_Buynode0(
                                                  &v5->_Myval.second,
                                                  0i64,
                                                  0i64);
  }
  return v6;
}

std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,__int64>>,0>>::_Buynode<std::pair<unsigned int,__int64>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> >,0> > *this,
        std::pair<unsigned int,__int64> *<_Val_0>)
{
  std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> *v3; // r8

  v3 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,__int64>>,0>>::_Buynode0(this);
  *(_WORD *)&v3->_Color = 0;
  if ( v3 != (std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> *)-32i64 )
  {
    v3->_Myval.first = <_Val_0>->first;
    v3->_Myval.second = <_Val_0>->second;
  }
  return v3;
}

std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const,unsigned int>>,1>>::_Buynode<std::pair<__int64,unsigned int>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> >,1> > *this,
        std::pair<__int64,unsigned int> *<_Val_0>)
{
  std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *v3; // r8

  v3 = std::_Tree_comp_alloc<std::_Tmap_traits<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const,unsigned int>>,1>>::_Buynode0(this);
  *(_WORD *)&v3->_Color = 0;
  if ( v3 != (std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *)-32i64 )
  {
    v3->_Myval.first = <_Val_0>->first;
    v3->_Myval.second = <_Val_0>->second;
  }
  return v3;
}

void __fastcall std::_Destroy_range<std::allocator<AgControllerAddedEvent>,AgControllerAddedEvent *>(
        AgControllerAddedEvent *_First,
        AgControllerAddedEvent *_Last,
        std::_Wrap_alloc<std::allocator<AgControllerAddedEvent> > *_Al)
{
  AgControllerAddedEvent *v4; // rdi

  if ( _First != _Last )
  {
    v4 = _First;
    do
      AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)v4++);
    while ( v4 != _Last );
  }
}

void __fastcall std::_Destroy_range<std::allocator<AgControllerRemovedEvent>,AgControllerRemovedEvent *>(
        AgControllerRemovedEvent *_First,
        AgControllerRemovedEvent *_Last,
        std::_Wrap_alloc<std::allocator<AgControllerRemovedEvent> > *_Al)
{
  AgControllerRemovedEvent *v4; // rdi

  if ( _First != _Last )
  {
    v4 = _First;
    do
      AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)v4++);
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

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > > *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::_Insert_at<std::pair<unsigned int const,AgPointer<AgController>> &,std::_Tree_node<std::pair<unsigned int const,AgPointer<AgController>>,void *> *>(
        std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > > *result,
        bool _Addleft,
        std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *_Wherenode,
        std::pair<unsigned int const ,AgPointer<AgController> > *_Val,
        std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *_Node)
{
  unsigned __int64 Mysize; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Myhead; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *v10; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Parent; // rcx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *v12; // r8
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Left; // rdx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Right; // rdx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *v15; // rdx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *v16; // rcx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *v17; // rdx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *v18; // r8
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *v19; // rcx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *v20; // rcx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *v21; // rdx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *v22; // rcx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *v23; // rcx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *v24; // rcx

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

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > > *__fastcall std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Insert_at<std::pair<AgStringKey const,AgControllerComponentIndex> &,std::_Tree_node<std::pair<AgStringKey const,AgControllerComponentIndex>,void *> *>(
        std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > > *result,
        bool _Addleft,
        std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *_Wherenode,
        std::pair<AgStringKey const ,AgControllerComponentIndex> *_Val,
        std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *_Node)
{
  unsigned __int64 Mysize; // rax
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *Myhead; // rax
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v10; // rax
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *Parent; // rcx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v12; // r8
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *Left; // rdx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *Right; // rdx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v15; // rdx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v16; // rcx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v17; // rdx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v18; // r8
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v19; // rcx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v20; // rcx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v21; // rdx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v22; // rcx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v23; // rcx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v24; // rcx

  Mysize = this->_Mypair._Myval2._Myval2._Mysize;
  if ( Mysize >= 0x38E38E38E38E38Di64 )
  {
    AgString::~AgString(&_Node->_Myval.first.m_string, (unsigned __int64)result);
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

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > > *__fastcall std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Insert_at<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>> &,std::_Tree_node<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>,void *> *>(
        std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > > *result,
        bool _Addleft,
        std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *_Wherenode,
        std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > *_Val,
        std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *_Node)
{
  unsigned __int64 Mysize; // rax
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *Myhead; // rax
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v10; // rax
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *Parent; // rcx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v12; // r8
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *Left; // rdx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *Right; // rdx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v15; // rdx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v16; // rcx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v17; // rdx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v18; // r8
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v19; // rcx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v20; // rcx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v21; // rdx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v22; // rcx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v23; // rcx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v24; // rcx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v25; // rax
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v26; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > > *v27; // rax

  Mysize = this->_Mypair._Myval2._Myval2._Mysize;
  if ( Mysize >= 0x492492492492491i64 )
  {
    std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Destroy_if_not_nil(
      this,
      _Node);
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

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > > *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::_Insert_hint<std::pair<unsigned int const,AgPointer<AgController>> &,std::_Tree_node<std::pair<unsigned int const,AgPointer<AgController>>,void *> *>(
        std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > > _Where,
        std::pair<unsigned int const ,AgPointer<AgController> > *_Val,
        std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *_Newnode)
{
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Myhead; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Right; // r9
  unsigned int first; // er12
  bool v12; // cf
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Ptr; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Left; // r9
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *Parent; // rcx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *v16; // rbx
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgUser> > > > > v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+38h] [rbp-40h]
  std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > >,bool> resulta; // [rsp+40h] [rbp-38h] BYREF

  v18 = -2i64;
  v17._Ptr = 0i64;
  if ( !this->_Mypair._Myval2._Myval2._Mysize )
  {
    std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::_Insert_at<std::pair<unsigned int const,AgPointer<AgController>> &,std::_Tree_node<std::pair<unsigned int const,AgPointer<AgController>>,void *> *>(
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
      std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::_Insert_at<std::pair<unsigned int const,AgPointer<AgController>> &,std::_Tree_node<std::pair<unsigned int const,AgPointer<AgController>>,void *> *>(
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
      std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::_Insert_at<std::pair<unsigned int const,AgPointer<AgController>> &,std::_Tree_node<std::pair<unsigned int const,AgPointer<AgController>>,void *> *>(
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
            || Ptr != (std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *)Parent->_Left )
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
        std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::_Insert_at<std::pair<unsigned int const,AgPointer<AgController>> &,std::_Tree_node<std::pair<unsigned int const,AgPointer<AgController>>,void *> *>(
          this,
          result,
          0,
          Left,
          _Val,
          _Newnode);
      else
        std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::_Insert_at<std::pair<unsigned int const,AgPointer<AgController>> &,std::_Tree_node<std::pair<unsigned int const,AgPointer<AgController>>,void *> *>(
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
        v16 = this->_Mypair._Myval2._Myval2._Myhead,
        (std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *)std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const,AgPointer<AgLeaderboard>>>>>::operator++(&v17)->_Ptr != v16)
    && first >= LODWORD(v17._Ptr->_Myval.first) )
  {
LABEL_33:
    result->_Ptr = (std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *)std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::_Insert_nohint<std::pair<unsigned int const,AgPointer<AgController>> &,std::_Tree_node<std::pair<unsigned int const,AgPointer<AgController>>,void *> *>(this, &resulta, 0, _Val, _Newnode)->first;
    return result;
  }
  if ( _Where._Ptr->_Right->_Isnil )
    std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::_Insert_at<std::pair<unsigned int const,AgPointer<AgController>> &,std::_Tree_node<std::pair<unsigned int const,AgPointer<AgController>>,void *> *>(
      this,
      result,
      0,
      _Where._Ptr,
      _Val,
      _Newnode);
  else
    std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::_Insert_at<std::pair<unsigned int const,AgPointer<AgController>> &,std::_Tree_node<std::pair<unsigned int const,AgPointer<AgController>>,void *> *>(
      this,
      result,
      1,
      (std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *)v17._Ptr,
      _Val,
      _Newnode);
  return result;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > > *__fastcall std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Insert_hint<std::pair<AgStringKey const,AgControllerComponentIndex> &,std::_Tree_node<std::pair<AgStringKey const,AgControllerComponentIndex>,void *> *>(
        std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > > _Where,
        std::pair<AgStringKey const ,AgControllerComponentIndex> *_Val,
        std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *_Newnode)
{
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *Myhead; // rcx
  AgStringRef *p_m_stringRef; // r12
  AgStringRef *v11; // rdi
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *Ptr; // rax
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *Right; // rcx
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *Parent; // rdx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v15; // rdi
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v16; // rbx
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgUser> > > > > v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+38h] [rbp-40h]
  std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >,bool> resulta; // [rsp+40h] [rbp-38h] BYREF

  v18 = -2i64;
  v17._Ptr = 0i64;
  if ( !this->_Mypair._Myval2._Myval2._Mysize )
  {
    std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Insert_at<std::pair<AgStringKey const,AgControllerComponentIndex> &,std::_Tree_node<std::pair<AgStringKey const,AgControllerComponentIndex>,void *> *>(
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
    if ( operator<(&_Val->first.m_stringRef, &_Where._Ptr->_Myval.first.m_stringRef) )
    {
      std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Insert_at<std::pair<AgStringKey const,AgControllerComponentIndex> &,std::_Tree_node<std::pair<AgStringKey const,AgControllerComponentIndex>,void *> *>(
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
    if ( operator<(&Myhead->_Right->_Myval.first.m_stringRef, &_Val->first.m_stringRef) )
    {
      std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Insert_at<std::pair<AgStringKey const,AgControllerComponentIndex> &,std::_Tree_node<std::pair<AgStringKey const,AgControllerComponentIndex>,void *> *>(
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
  p_m_stringRef = &_Val->first.m_stringRef;
  v11 = &_Val->first.m_stringRef;
  if ( operator<(&_Val->first.m_stringRef, &_Where._Ptr->_Myval.first.m_stringRef) )
  {
    Ptr = _Where._Ptr;
    v17._Ptr = (std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *)_Where._Ptr;
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
            || Ptr != (std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *)Parent->_Left )
          {
            break;
          }
          Ptr = Ptr->_Parent;
          v17._Ptr = Parent;
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
    v17._Ptr = (std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *)Right;
    p_m_stringRef = &_Val->first.m_stringRef;
    if ( operator<(&Right->_Myval.first.m_stringRef, &_Val->first.m_stringRef) )
    {
      if ( v17._Ptr->_Right->_Isnil )
        std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Insert_at<std::pair<AgStringKey const,AgControllerComponentIndex> &,std::_Tree_node<std::pair<AgStringKey const,AgControllerComponentIndex>,void *> *>(
          this,
          result,
          0,
          (std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *)v17._Ptr,
          _Val,
          _Newnode);
      else
        std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Insert_at<std::pair<AgStringKey const,AgControllerComponentIndex> &,std::_Tree_node<std::pair<AgStringKey const,AgControllerComponentIndex>,void *> *>(
          this,
          result,
          1,
          _Where._Ptr,
          _Val,
          _Newnode);
      return result;
    }
  }
  if ( !operator<(&_Where._Ptr->_Myval.first.m_stringRef, v11) )
    goto LABEL_33;
  v15 = _Where._Ptr;
  v17._Ptr = (std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *)_Where._Ptr;
  v16 = this->_Mypair._Myval2._Myval2._Myhead;
  if ( (std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *)std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const,AgPointer<AgLeaderboard>>>>>::operator++(&v17)->_Ptr != v16 )
  {
    if ( operator<(p_m_stringRef, (const AgStringRef *)&v17._Ptr->_Myval.second.m_ptr) )
    {
      v15 = _Where._Ptr;
      goto LABEL_29;
    }
LABEL_33:
    result->_Ptr = (std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *)std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Insert_nohint<std::pair<AgStringKey const,AgControllerComponentIndex> &,std::_Tree_node<std::pair<AgStringKey const,AgControllerComponentIndex>,void *> *>(this, &resulta, 0, _Val, _Newnode)->first;
    return result;
  }
LABEL_29:
  if ( v15->_Right->_Isnil )
    std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Insert_at<std::pair<AgStringKey const,AgControllerComponentIndex> &,std::_Tree_node<std::pair<AgStringKey const,AgControllerComponentIndex>,void *> *>(
      this,
      result,
      0,
      v15,
      _Val,
      _Newnode);
  else
    std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Insert_at<std::pair<AgStringKey const,AgControllerComponentIndex> &,std::_Tree_node<std::pair<AgStringKey const,AgControllerComponentIndex>,void *> *>(
      this,
      result,
      1,
      (std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *)v17._Ptr,
      _Val,
      _Newnode);
  return result;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > > *__fastcall std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Insert_hint<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>> &,std::_Tree_node<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>,void *> *>(
        std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > > _Where,
        std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > *_Val,
        std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *_Newnode)
{
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *Myhead; // rax
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *Right; // r9
  AgControllerComponentType first; // er12
  bool v12; // cc
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *Ptr; // rax
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *Left; // r9
  std::_Tree_node<std::pair<__int64 const ,AgPointer<AgUser> >,void *> *Parent; // rcx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v16; // rbx
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,AgPointer<AgUser> > > > > v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+38h] [rbp-40h]
  std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > >,bool> resulta; // [rsp+40h] [rbp-38h] BYREF

  v18 = -2i64;
  v17._Ptr = 0i64;
  if ( !this->_Mypair._Myval2._Myval2._Mysize )
  {
    std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Insert_at<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>> &,std::_Tree_node<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>,void *> *>(
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
      std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Insert_at<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>> &,std::_Tree_node<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>,void *> *>(
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
      std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Insert_at<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>> &,std::_Tree_node<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>,void *> *>(
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
            || Ptr != (std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *)Parent->_Left )
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
        std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Insert_at<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>> &,std::_Tree_node<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>,void *> *>(
          this,
          result,
          0,
          Left,
          _Val,
          _Newnode);
      else
        std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Insert_at<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>> &,std::_Tree_node<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>,void *> *>(
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
        v16 = this->_Mypair._Myval2._Myval2._Myhead,
        (std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *)std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const,AgPointer<AgLeaderboard>>>>>::operator++(&v17)->_Ptr != v16)
    && first >= SLODWORD(v17._Ptr->_Myval.first) )
  {
LABEL_33:
    result->_Ptr = (std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *)std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Insert_nohint<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>> &,std::_Tree_node<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>,void *> *>(this, &resulta, 0, _Val, _Newnode)->first;
    return result;
  }
  if ( _Where._Ptr->_Right->_Isnil )
    std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Insert_at<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>> &,std::_Tree_node<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>,void *> *>(
      this,
      result,
      0,
      _Where._Ptr,
      _Val,
      _Newnode);
  else
    std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Insert_at<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>> &,std::_Tree_node<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>,void *> *>(
      this,
      result,
      1,
      (std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *)v17._Ptr,
      _Val,
      _Newnode);
  return result;
}

std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > >,bool> *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::_Insert_nohint<std::pair<unsigned int const,AgPointer<AgController>> &,std::_Tree_node<std::pair<unsigned int const,AgPointer<AgController>>,void *> *>(
        std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > >,0> > *this,
        std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > >,bool> *result,
        bool _Leftish,
        std::pair<unsigned int const ,AgPointer<AgController> > *_Val,
        std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *_Newnode)
{
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Myhead; // r9
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Parent; // r10
  bool v10; // r8
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Right; // rbx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *v13; // rax
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > > resulta; // [rsp+40h] [rbp-18h] BYREF

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
      result->first = (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > >)std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::_Insert_at<std::pair<unsigned int const,AgPointer<AgController>> &,std::_Tree_node<std::pair<unsigned int const,AgPointer<AgController>>,void *> *>(this, &resulta, 1, Myhead, _Val, _Newnode)->_Ptr;
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
    resulta._Ptr = (std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *)&_Newnode->_Myval;
    AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&_Newnode->_Myval.second);
    operator delete(_Newnode);
    result->first._Ptr = Right;
    result->second = 0;
  }
  else
  {
    result->first = (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > >)std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::_Insert_at<std::pair<unsigned int const,AgPointer<AgController>> &,std::_Tree_node<std::pair<unsigned int const,AgPointer<AgController>>,void *> *>(this, &resulta, v10, Myhead, _Val, _Newnode)->_Ptr;
    result->second = 1;
  }
  return result;
}

std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,__int64> > > >,bool> *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,__int64>>,0>>::_Insert_nohint<std::pair<unsigned int const,__int64> &,std::_Tree_node<std::pair<unsigned int const,__int64>,void *> *>(
        std::_Tree<std::_Tmap_traits<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> >,0> > *this,
        std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,__int64> > > >,bool> *result,
        bool _Leftish,
        std::pair<unsigned int const ,__int64> *_Val,
        std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> *_Newnode)
{
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *Myhead; // r9
  std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> *Parent; // r10
  bool v10; // r8
  std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> *Right; // rbx
  std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> *v13; // rax
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
  Right = (std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> *)Myhead;
  if ( v10 )
  {
    if ( Myhead == (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)this->_Mypair._Myval2._Myval2._Myhead->_Left )
    {
      result->first._Ptr = (std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> *)std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Insert_at<std::pair<int const,AgRectangle> &,std::_Tree_node<std::pair<int const,AgRectangle>,void *> *>(
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
      Right = (std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> *)Myhead->_Right;
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
      for ( Right = (std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> *)Myhead->_Left;
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
    result->first._Ptr = (std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> *)std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Insert_at<std::pair<int const,AgRectangle> &,std::_Tree_node<std::pair<int const,AgRectangle>,void *> *>(
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

std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >,bool> *__fastcall std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Insert_nohint<std::pair<AgStringKey const,AgControllerComponentIndex> &,std::_Tree_node<std::pair<AgStringKey const,AgControllerComponentIndex>,void *> *>(
        std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> >,0> > *this,
        std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >,bool> *result,
        bool _Leftish,
        std::pair<AgStringKey const ,AgControllerComponentIndex> *_Val,
        std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *_Newnode)
{
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *Myhead; // rsi
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *Parent; // rbx
  bool v11; // di
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *Right; // rbx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v14; // rax
  unsigned __int64 v15; // rdx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > > resulta; // [rsp+40h] [rbp-38h] BYREF

  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  Parent = this->_Mypair._Myval2._Myval2._Myhead->_Parent;
  v11 = 1;
  while ( !Parent->_Isnil )
  {
    Myhead = Parent;
    if ( _Leftish )
      v11 = !operator<(&Parent->_Myval.first.m_stringRef, &_Val->first.m_stringRef);
    else
      v11 = operator<(&_Val->first.m_stringRef, &Parent->_Myval.first.m_stringRef);
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
      result->first = (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >)std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Insert_at<std::pair<AgStringKey const,AgControllerComponentIndex> &,std::_Tree_node<std::pair<AgStringKey const,AgControllerComponentIndex>,void *> *>(this, &resulta, 1, Myhead, _Val, _Newnode)->_Ptr;
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
  if ( operator<(&Right->_Myval.first.m_stringRef, &_Val->first.m_stringRef) )
  {
    result->first = (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >)std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Insert_at<std::pair<AgStringKey const,AgControllerComponentIndex> &,std::_Tree_node<std::pair<AgStringKey const,AgControllerComponentIndex>,void *> *>(this, &resulta, v11, Myhead, _Val, _Newnode)->_Ptr;
    result->second = 1;
  }
  else
  {
    resulta._Ptr = (std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *)&_Newnode->_Myval;
    AgString::~AgString(&_Newnode->_Myval.first.m_string, v15);
    operator delete(_Newnode);
    result->first._Ptr = Right;
    result->second = 0;
  }
  return result;
}

std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > >,bool> *__fastcall std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Insert_nohint<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>> &,std::_Tree_node<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>,void *> *>(
        std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > >,0> > *this,
        std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > >,bool> *result,
        bool _Leftish,
        std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > *_Val,
        std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *_Newnode)
{
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *Myhead; // r9
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *Parent; // r10
  bool v10; // r8
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *Right; // rbx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v13; // rax
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > > resulta; // [rsp+40h] [rbp-18h] BYREF

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
      result->first = (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > >)std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Insert_at<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>> &,std::_Tree_node<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>,void *> *>(this, &resulta, 1, Myhead, _Val, _Newnode)->_Ptr;
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
    std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Destroy_if_not_nil(
      this,
      _Newnode);
    result->first._Ptr = Right;
    result->second = 0;
  }
  else
  {
    result->first = (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > >)std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Insert_at<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>> &,std::_Tree_node<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>,void *> *>(this, &resulta, v10, Myhead, _Val, _Newnode)->_Ptr;
    result->second = 1;
  }
  return result;
}

std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,unsigned int> > > >,bool> *__fastcall std::_Tree<std::_Tmap_traits<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const,unsigned int>>,1>>::_Insert_nohint<std::pair<__int64 const,unsigned int> &,std::_Tree_node<std::pair<__int64 const,unsigned int>,void *> *>(
        std::_Tree<std::_Tmap_traits<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> >,1> > *this,
        std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,unsigned int> > > >,bool> *result,
        bool _Leftish,
        std::pair<__int64 const ,unsigned int> *_Val,
        std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *_Newnode)
{
  std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *Myhead; // r11
  std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *Parent; // r10
  bool v9; // r8
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > resulta; // [rsp+38h] [rbp-10h] BYREF

  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  Parent = this->_Mypair._Myval2._Myval2._Myhead->_Parent;
  v9 = 1;
  while ( !Parent->_Isnil )
  {
    Myhead = Parent;
    if ( _Leftish )
      v9 = Parent->_Myval.first >= _Val->first;
    else
      v9 = _Val->first < Parent->_Myval.first;
    if ( v9 )
      Parent = Parent->_Left;
    else
      Parent = Parent->_Right;
  }
  result->first._Ptr = (std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *)std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const,AgRectangle>>,0>>::_Insert_at<std::pair<int const,AgRectangle> &,std::_Tree_node<std::pair<int const,AgRectangle>,void *> *>(
                                                                                           (std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *)this,
                                                                                           &resulta,
                                                                                           v9,
                                                                                           (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)Myhead,
                                                                                           (std::pair<_SDL_Joystick * const,__int64> *)_Val,
                                                                                           (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)_Newnode)->_Ptr;
  result->second = 1;
  return result;
}

std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >,bool> *__fastcall std::map<AgStringKey,AgControllerComponentIndex>::_Try_emplace<AgStringKey,>(
        std::map<AgStringKey,AgControllerComponentIndex> *this,
        std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >,bool> *result,
        AgStringKey *_Keyval)
{
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *Myhead; // rdi
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *Parent; // rbx
  std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >,bool> *v8; // rax
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *_Newnode; // rax
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > > resulta; // [rsp+60h] [rbp+8h] BYREF
  std::tuple<AgStringKey &&> v11; // [rsp+78h] [rbp+20h] BYREF

  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  Parent = this->_Mypair._Myval2._Myval2._Myhead->_Parent;
  while ( !Parent->_Isnil )
  {
    if ( operator<(&Parent->_Myval.first.m_stringRef, &_Keyval->m_stringRef) )
    {
      Parent = Parent->_Right;
    }
    else
    {
      Myhead = Parent;
      Parent = Parent->_Left;
    }
  }
  if ( Myhead == this->_Mypair._Myval2._Myval2._Myhead
    || operator<(&_Keyval->m_stringRef, &Myhead->_Myval.first.m_stringRef) )
  {
    v11._Myfirst._Val = _Keyval;
    _Newnode = std::_Tree_comp_alloc<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgStringKey &&>,std::tuple<>>(
                 this,
                 &std::piecewise_construct,
                 &v11,
                 (std::tuple<> *)&resulta);
    std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Insert_hint<std::pair<AgStringKey const,AgControllerComponentIndex> &,std::_Tree_node<std::pair<AgStringKey const,AgControllerComponentIndex>,void *> *>(
      this,
      &resulta,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >)Myhead,
      &_Newnode->_Myval,
      _Newnode);
    result->first = resulta;
    v8 = result;
    result->second = 1;
  }
  else
  {
    result->second = 0;
    v8 = result;
    result->first._Ptr = Myhead;
  }
  return v8;
}

void __fastcall std::_Uninit_alloc_fill_n1<unsigned int *,unsigned __int64,std::allocator<unsigned int>>(
        unsigned int *_First,
        unsigned __int64 _Count,
        const unsigned int *_Pval,
        std::_Wrap_alloc<std::allocator<unsigned int> > *_Al)
{
  while ( _Count )
  {
    if ( _First )
      *_First = *_Pval;
    --_Count;
    ++_First;
  }
}

void __fastcall std::_Uninit_alloc_fill_n1<enum AgKeyboardButton *,unsigned __int64,std::allocator<enum AgKeyboardButton>>(
        AgKeyboardButton *_First,
        unsigned __int64 _Count,
        const AgKeyboardButton *_Pval,
        std::_Wrap_alloc<std::allocator<enum AgKeyboardButton> > *_Al)
{
  while ( _Count )
  {
    if ( _First )
      *_First = *_Pval;
    --_Count;
    ++_First;
  }
}

AgControllerAddedEvent *__fastcall std::_Uninitialized_move_al_unchecked1<AgControllerAddedEvent *,AgControllerAddedEvent *,std::allocator<AgControllerAddedEvent>>(
        AgControllerAddedEvent *_First,
        AgControllerAddedEvent *_Last,
        AgControllerAddedEvent *_Dest,
        std::_Wrap_alloc<std::allocator<AgControllerAddedEvent> > *_Al)
{
  while ( _First != _Last )
  {
    if ( _Dest )
    {
      _Dest->controller.m_ref = _First->controller.m_ref;
      _Dest->controller.m_ptr = _First->controller.m_ptr;
      _First->controller.m_ref = 0i64;
      _First->controller.m_ptr = 0i64;
      _Dest->pairedId = _First->pairedId;
    }
    ++_Dest;
    ++_First;
  }
  return _Dest;
}

AgControllerRemovedEvent *__fastcall std::_Uninitialized_move_al_unchecked1<AgControllerRemovedEvent *,AgControllerRemovedEvent *,std::allocator<AgControllerRemovedEvent>>(
        AgControllerRemovedEvent *_First,
        AgControllerRemovedEvent *_Last,
        AgControllerRemovedEvent *_Dest,
        std::_Wrap_alloc<std::allocator<AgControllerRemovedEvent> > *_Al)
{
  while ( _First != _Last )
  {
    if ( _Dest )
    {
      _Dest->controller.m_ref = _First->controller.m_ref;
      _Dest->controller.m_ptr = _First->controller.m_ptr;
      _First->controller.m_ref = 0i64;
      _First->controller.m_ptr = 0i64;
      _Dest->pairedId = _First->pairedId;
    }
    ++_Dest;
    ++_First;
  }
  return _Dest;
}

AgDelegate1<AgResumingEvent const &,void> *__fastcall std::_Uninitialized_move_al_unchecked1<AgDelegate1<AgResumingEvent const &,void> *,AgDelegate1<AgResumingEvent const &,void> *,std::allocator<AgDelegate1<AgResumingEvent const &,void>>>(
        AgDelegate1<AgResumingEvent const &,void> *_First,
        AgDelegate1<AgResumingEvent const &,void> *_Last,
        AgDelegate1<AgResumingEvent const &,void> *_Dest,
        std::_Wrap_alloc<std::allocator<AgDelegate1<AgResumingEvent const &,void> > > *_Al)
{
  while ( _First != _Last )
  {
    if ( _Dest )
    {
      _Dest->m_Closure.m_pthis = 0i64;
      _Dest->m_Closure.m_pFunction = 0i64;
      *_Dest = *_First;
    }
    ++_Dest;
    ++_First;
  }
  return _Dest;
}

AgDelegate1<AgSuspendingEvent const &,void> *__fastcall std::_Uninitialized_move_al_unchecked1<AgDelegate1<AgSuspendingEvent const &,void> *,AgDelegate1<AgSuspendingEvent const &,void> *,std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>(
        AgDelegate1<AgSuspendingEvent const &,void> *_First,
        AgDelegate1<AgSuspendingEvent const &,void> *_Last,
        AgDelegate1<AgSuspendingEvent const &,void> *_Dest,
        std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > > *_Al)
{
  while ( _First != _Last )
  {
    if ( _Dest )
    {
      _Dest->m_Closure.m_pthis = 0i64;
      _Dest->m_Closure.m_pFunction = 0i64;
      *_Dest = *_First;
    }
    ++_Dest;
    ++_First;
  }
  return _Dest;
}

AgPointer<AgController> *__fastcall std::_Uninitialized_move_al_unchecked1<AgPointer<AgController> *,AgPointer<AgController> *,std::allocator<AgPointer<AgController>>>(
        AgPointer<AgController> *_First,
        AgPointer<AgController> *_Last,
        AgPointer<AgController> *_Dest,
        std::_Wrap_alloc<std::allocator<AgPointer<AgController> > > *_Al)
{
  while ( _First != _Last )
  {
    if ( _Dest )
    {
      *_Dest = *_First;
      _First->m_ref = 0i64;
      _First->m_ptr = 0i64;
    }
    ++_Dest;
    ++_First;
  }
  return _Dest;
}

void __fastcall std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<AgStringKey const,AgControllerComponentIndex>,void *>>>::construct<std::pair<AgStringKey const,AgControllerComponentIndex>,std::piecewise_construct_t const &,std::tuple<AgStringKey &&>,std::tuple<>>(
        std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> > > *this,
        std::pair<AgStringKey const ,AgControllerComponentIndex> *_Ptr,
        const std::piecewise_construct_t *<_Args_0>,
        std::tuple<AgStringKey &&> *<_Args_1>)
{
  AgStringKey *Val; // rbx
  AgStringRef v6; // [rsp+38h] [rbp-20h] BYREF

  if ( _Ptr )
  {
    Val = <_Args_1>->_Myfirst._Val;
    AgString::AgString(&_Ptr->first.m_string, &<_Args_1>->_Myfirst._Val->m_string);
    _Ptr->first.m_stringRef = Val->m_stringRef;
    if ( (unsigned int)AgString::getLength(&_Ptr->first.m_string) )
    {
      AgStringRef::AgStringRef(&v6, &_Ptr->first.m_string);
      _Ptr->first.m_stringRef = v6;
    }
    _Ptr->second = (AgControllerComponentIndex)-256;
  }
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
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

void __fastcall Scaleform::Render::SubImage::GetAsImage(std::_Wrap_alloc<std::allocator<AgString> > *this)
{
  ;
}

void __fastcall AgController::AgController(AgController *this, AgControllerType type, unsigned int id)
{
  this->m_refCount = 0i64;
  this->__vftable = (AgController_vtbl *)&AgController::`vftable';
  this->m_lastUsed = 0i64;
  this->m_type = type;
  this->m_id = id;
  this->m_components._Mypair._Myval2._Myval2._Myhead = 0i64;
  this->m_components._Mypair._Myval2._Myval2._Mysize = 0i64;
  this->m_components._Mypair._Myval2._Myval2._Myhead = std::_Tree_comp_alloc<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Buyheadnode(&this->m_components);
  this->m_hardwareType = AgControllerHardwareType_Default;
  AgString::AgString(&this->m_name);
  this->m_connected = 1;
}

void __fastcall AgControllerButtonComponent::AgControllerButtonComponent(AgControllerButtonComponent *this)
{
  std::vector<bool> *p_m_buttons; // rbx
  unsigned int _Pval; // [rsp+58h] [rbp+10h] BYREF
  std::vector<bool> *p_m_lastButtons; // [rsp+60h] [rbp+18h]

  this->AgControllerComponent = (AgControllerComponent)1i64;
  p_m_buttons = &this->m_buttons;
  p_m_lastButtons = &this->m_buttons;
  _Pval = 0;
  this->m_buttons._Myvec._Mypair._Myval2._Myfirst = 0i64;
  this->m_buttons._Myvec._Mypair._Myval2._Mylast = 0i64;
  this->m_buttons._Myvec._Mypair._Myval2._Myend = 0i64;
  std::vector<unsigned int>::_Construct_n(&this->m_buttons._Myvec, 0i64, &_Pval);
  p_m_buttons->_Mysize = 0i64;
  p_m_lastButtons = &this->m_lastButtons;
  _Pval = 0;
  this->m_lastButtons._Myvec._Mypair._Myval2._Myfirst = 0i64;
  this->m_lastButtons._Myvec._Mypair._Myval2._Mylast = 0i64;
  this->m_lastButtons._Myvec._Mypair._Myval2._Myend = 0i64;
  std::vector<unsigned int>::_Construct_n(&this->m_lastButtons._Myvec, 0i64, &_Pval);
  this->m_lastButtons._Mysize = 0i64;
}

void __fastcall AgInputManager::AgInputManager(AgInputManager *this)
{
  AgMemoryStream *v2; // rax
  AgUser *v3; // rax
  AgTime result; // [rsp+28h] [rbp-20h] BYREF

  this->__vftable = (AgInputManager_vtbl *)&AgSingleton<AgInputManager>::`vftable';
  this->__vftable = (AgInputManager_vtbl *)&AgInputManager::`vftable';
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  this->m_componentLookup._Mypair._Myval2._Myval2._Myhead = 0i64;
  this->m_componentLookup._Mypair._Myval2._Myval2._Mysize = 0i64;
  this->m_componentLookup._Mypair._Myval2._Myval2._Myhead = std::_Tree_comp_alloc<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Buyheadnode(&this->m_componentLookup);
  this->m_nextControllerId = 0;
  this->m_controllers._Mypair._Myval2._Myval2._Myhead = 0i64;
  this->m_controllers._Mypair._Myval2._Myval2._Mysize = 0i64;
  this->m_controllers._Mypair._Myval2._Myval2._Myhead = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::_Buyheadnode(&this->m_controllers);
  this->m_controllerUserPairings._Mypair._Myval2._Myval2._Myhead = 0i64;
  this->m_controllerUserPairings._Mypair._Myval2._Myval2._Mysize = 0i64;
  this->m_controllerUserPairings._Mypair._Myval2._Myval2._Myhead = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,__int64>>,0>>::_Buyheadnode(&this->m_controllerUserPairings);
  this->m_userControllerPairings._Mypair._Myval2._Myval2._Myhead = 0i64;
  this->m_userControllerPairings._Mypair._Myval2._Myval2._Mysize = 0i64;
  this->m_userControllerPairings._Mypair._Myval2._Myval2._Myhead = std::_Tree_comp_alloc<std::_Tmap_traits<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const,unsigned int>>,1>>::_Buyheadnode(&this->m_userControllerPairings);
  this->m_lastUsedTick = 0i64;
  this->m_ignoredLastUsed._Mypair._Myval2._Myfirst = 0i64;
  this->m_ignoredLastUsed._Mypair._Myval2._Mylast = 0i64;
  this->m_ignoredLastUsed._Mypair._Myval2._Myend = 0i64;
  *(_QWORD *)&this->m_startingTextInput = 0i64;
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->ControllerAdded);
  this->ControllerAdded.m_bindings._Mypair._Myval2._Myfirst = 0i64;
  this->ControllerAdded.m_bindings._Mypair._Myval2._Mylast = 0i64;
  this->ControllerAdded.m_bindings._Mypair._Myval2._Myend = 0i64;
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->ControllerAdded.m_queueMutex);
  this->ControllerAdded.m_eventQueue._Mypair._Myval2._Myfirst = 0i64;
  this->ControllerAdded.m_eventQueue._Mypair._Myval2._Mylast = 0i64;
  this->ControllerAdded.m_eventQueue._Mypair._Myval2._Myend = 0i64;
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->ControllerRemoved);
  this->ControllerRemoved.m_bindings._Mypair._Myval2._Myfirst = 0i64;
  this->ControllerRemoved.m_bindings._Mypair._Myval2._Mylast = 0i64;
  this->ControllerRemoved.m_bindings._Mypair._Myval2._Myend = 0i64;
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->ControllerRemoved.m_queueMutex);
  this->ControllerRemoved.m_eventQueue._Mypair._Myval2._Myfirst = 0i64;
  this->ControllerRemoved.m_eventQueue._Mypair._Myval2._Mylast = 0i64;
  this->ControllerRemoved.m_eventQueue._Mypair._Myval2._Myend = 0i64;
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->ControllerPairingChanged);
  this->ControllerPairingChanged.m_bindings._Mypair._Myval2._Myfirst = 0i64;
  this->ControllerPairingChanged.m_bindings._Mypair._Myval2._Mylast = 0i64;
  this->ControllerPairingChanged.m_bindings._Mypair._Myval2._Myend = 0i64;
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->ControllerPairingChanged.m_queueMutex);
  this->ControllerPairingChanged.m_eventQueue._Mypair._Myval2._Myfirst = 0i64;
  this->ControllerPairingChanged.m_eventQueue._Mypair._Myval2._Mylast = 0i64;
  this->ControllerPairingChanged.m_eventQueue._Mypair._Myval2._Myend = 0i64;
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->TypedText);
  this->TypedText.m_bindings._Mypair._Myval2._Myfirst = 0i64;
  this->TypedText.m_bindings._Mypair._Myval2._Mylast = 0i64;
  this->TypedText.m_bindings._Mypair._Myval2._Myend = 0i64;
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->TypedText.m_queueMutex);
  this->TypedText.m_eventQueue._Mypair._Myval2._Myfirst = 0i64;
  this->TypedText.m_eventQueue._Mypair._Myval2._Mylast = 0i64;
  this->TypedText.m_eventQueue._Mypair._Myval2._Myend = 0i64;
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->EditedText);
  this->EditedText.m_bindings._Mypair._Myval2._Myfirst = 0i64;
  this->EditedText.m_bindings._Mypair._Myval2._Mylast = 0i64;
  this->EditedText.m_bindings._Mypair._Myval2._Myend = 0i64;
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->EditedText.m_queueMutex);
  this->EditedText.m_eventQueue._Mypair._Myval2._Myfirst = 0i64;
  this->EditedText.m_eventQueue._Mypair._Myval2._Mylast = 0i64;
  this->EditedText.m_eventQueue._Mypair._Myval2._Myend = 0i64;
  this->m_lastRecorded.m_timeOccured = 0.0;
  AgControllerButtonComponent::AgControllerButtonComponent(&this->m_lastRecorded.m_state);
  this->m_nextRecorded.m_timeOccured = 0.0;
  AgControllerButtonComponent::AgControllerButtonComponent(&this->m_nextRecorded.m_state);
  this->m_inputFileTimestamp = *AgDateTime::getLocalTime(&result);
  v2 = (AgMemoryStream *)AgMemoryPoolImpl<AgMutex,AgMutex>::_alloc(&AgMemoryStream::s_pool);
  if ( v2 )
    AgMemoryStream::AgMemoryStream(v2);
  else
    v3 = 0i64;
  AgPointer<AgUser>::AgPointer<AgUser>((AgPointer<AgUser> *)&this->m_recordedInputs, v3);
  *(_QWORD *)&this->m_playerState = 0i64;
  AgString::AgString(&this->m_liveSavingPath);
  this->m_liveSavingEnabled = 0;
  AgString::AgString(&this->m_screenshotDirectory);
}

void __fastcall AgStandardGamepadController::AgStandardGamepadController(
        AgStandardGamepadController *this,
        unsigned int id)
{
  AgController::AgController(this, AgControllerType_Gamepad, id);
  this->__vftable = (AgStandardGamepadController_vtbl *)&AgStandardGamepadController::`vftable';
  AgControllerButtonComponent::AgControllerButtonComponent(&this->m_buttons);
  this->m_leftStickX.m_type = AgControllerComponentType_Axis;
  *(_QWORD *)&this->m_leftStickX.m_id = 4i64;
  this->m_leftStickY.m_type = AgControllerComponentType_Axis;
  *(_QWORD *)&this->m_leftStickY.m_id = 5i64;
  this->m_leftTrigger.m_type = AgControllerComponentType_Axis;
  *(_QWORD *)&this->m_leftTrigger.m_id = 6i64;
  this->m_rightStickX.m_type = AgControllerComponentType_Axis;
  *(_QWORD *)&this->m_rightStickX.m_id = 7i64;
  this->m_rightStickY.m_type = AgControllerComponentType_Axis;
  *(_QWORD *)&this->m_rightStickY.m_id = 8i64;
  this->m_rightTrigger.m_type = AgControllerComponentType_Axis;
  *(_QWORD *)&this->m_rightTrigger.m_id = 9i64;
  this->m_currentLeftStick = 0i64;
  this->m_currentRightStick = 0i64;
  this->m_currentLeftTrigger = 0.0;
  this->m_currentRightTrigger = 0.0;
  std::vector<bool>::resize(&this->m_buttons.m_buttons, 0xFui64, 0);
  std::vector<bool>::resize(&this->m_buttons.m_lastButtons, 0xFui64, 0);
  AgController::addComponent(this, &this->m_buttons);
  AgController::addComponent(this, &this->m_leftStickX);
  AgController::addComponent(this, &this->m_leftStickY);
  AgController::addComponent(this, &this->m_leftTrigger);
  AgController::addComponent(this, &this->m_rightStickX);
  AgController::addComponent(this, &this->m_rightStickY);
  AgController::addComponent(this, &this->m_rightTrigger);
}

void __fastcall AgAsyncEventDispatcher<AgControllerAddedEvent>::~AgAsyncEventDispatcher<AgControllerAddedEvent>(
        AgAsyncEventDispatcher<AgControllerAddedEvent> *this)
{
  AgDelegate1<AgControllerAddedEvent const &,void> *Myfirst; // rdx

  std::vector<AgControllerAddedEvent>::_Tidy(&this->m_eventQueue);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->m_queueMutex);
  Myfirst = this->m_bindings._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)&this->m_bindings,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)Myfirst,
      this->m_bindings._Mypair._Myval2._Myend - Myfirst);
    this->m_bindings._Mypair._Myval2._Myfirst = 0i64;
    this->m_bindings._Mypair._Myval2._Mylast = 0i64;
    this->m_bindings._Mypair._Myval2._Myend = 0i64;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
}

void __fastcall AgAsyncEventDispatcher<AgControllerPairingChangedEvent>::~AgAsyncEventDispatcher<AgControllerPairingChangedEvent>(
        AgAsyncEventDispatcher<AgControllerPairingChangedEvent> *this)
{
  AgDelegate1<AgControllerPairingChangedEvent const &,void> *Myfirst; // rdx

  std::vector<AgControllerPairingChangedEvent>::_Tidy(&this->m_eventQueue);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->m_queueMutex);
  Myfirst = this->m_bindings._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)&this->m_bindings,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)Myfirst,
      this->m_bindings._Mypair._Myval2._Myend - Myfirst);
    this->m_bindings._Mypair._Myval2._Myfirst = 0i64;
    this->m_bindings._Mypair._Myval2._Mylast = 0i64;
    this->m_bindings._Mypair._Myval2._Myend = 0i64;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
}

void __fastcall AgAsyncEventDispatcher<AgControllerRemovedEvent>::~AgAsyncEventDispatcher<AgControllerRemovedEvent>(
        AgAsyncEventDispatcher<AgControllerRemovedEvent> *this)
{
  AgDelegate1<AgControllerRemovedEvent const &,void> *Myfirst; // rdx

  std::vector<AgControllerRemovedEvent>::_Tidy(&this->m_eventQueue);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->m_queueMutex);
  Myfirst = this->m_bindings._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)&this->m_bindings,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)Myfirst,
      this->m_bindings._Mypair._Myval2._Myend - Myfirst);
    this->m_bindings._Mypair._Myval2._Myfirst = 0i64;
    this->m_bindings._Mypair._Myval2._Mylast = 0i64;
    this->m_bindings._Mypair._Myval2._Myend = 0i64;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
}

void __fastcall AgAsyncEventDispatcher<AgEditedInputEvent>::~AgAsyncEventDispatcher<AgEditedInputEvent>(
        AgAsyncEventDispatcher<AgEditedInputEvent> *this)
{
  AgDelegate1<AgEditedInputEvent const &,void> *Myfirst; // rdx

  std::vector<AgEditedInputEvent>::_Tidy(&this->m_eventQueue);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->m_queueMutex);
  Myfirst = this->m_bindings._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)&this->m_bindings,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)Myfirst,
      this->m_bindings._Mypair._Myval2._Myend - Myfirst);
    this->m_bindings._Mypair._Myval2._Myfirst = 0i64;
    this->m_bindings._Mypair._Myval2._Mylast = 0i64;
    this->m_bindings._Mypair._Myval2._Myend = 0i64;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
}

void __fastcall AgAsyncEventDispatcher<AgTypingInputEvent>::~AgAsyncEventDispatcher<AgTypingInputEvent>(
        AgAsyncEventDispatcher<AgTypingInputEvent> *this)
{
  AgDelegate1<AgTypingInputEvent const &,void> *Myfirst; // rdx

  std::vector<AgTypingInputEvent>::_Tidy(&this->m_eventQueue);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->m_queueMutex);
  Myfirst = this->m_bindings._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)&this->m_bindings,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)Myfirst,
      this->m_bindings._Mypair._Myval2._Myend - Myfirst);
    this->m_bindings._Mypair._Myval2._Myfirst = 0i64;
    this->m_bindings._Mypair._Myval2._Mylast = 0i64;
    this->m_bindings._Mypair._Myval2._Myend = 0i64;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
}

void __fastcall AgEventDispatcherBase<AgControllerAddedEvent>::~AgEventDispatcherBase<AgControllerAddedEvent>(
        AgEventDispatcherBase<AgControllerAddedEvent> *this)
{
  AgDelegate1<AgControllerAddedEvent const &,void> *Myfirst; // rdx

  Myfirst = this->m_bindings._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)&this->m_bindings,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)Myfirst,
      this->m_bindings._Mypair._Myval2._Myend - Myfirst);
    this->m_bindings._Mypair._Myval2._Myfirst = 0i64;
    this->m_bindings._Mypair._Myval2._Mylast = 0i64;
    this->m_bindings._Mypair._Myval2._Myend = 0i64;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
}

void __fastcall AgEventDispatcherBase<AgControllerPairingChangedEvent>::~AgEventDispatcherBase<AgControllerPairingChangedEvent>(
        AgEventDispatcherBase<AgControllerPairingChangedEvent> *this)
{
  AgDelegate1<AgControllerPairingChangedEvent const &,void> *Myfirst; // rdx

  Myfirst = this->m_bindings._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)&this->m_bindings,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)Myfirst,
      this->m_bindings._Mypair._Myval2._Myend - Myfirst);
    this->m_bindings._Mypair._Myval2._Myfirst = 0i64;
    this->m_bindings._Mypair._Myval2._Mylast = 0i64;
    this->m_bindings._Mypair._Myval2._Myend = 0i64;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
}

void __fastcall AgEventDispatcherBase<AgControllerRemovedEvent>::~AgEventDispatcherBase<AgControllerRemovedEvent>(
        AgEventDispatcherBase<AgControllerRemovedEvent> *this)
{
  AgDelegate1<AgControllerRemovedEvent const &,void> *Myfirst; // rdx

  Myfirst = this->m_bindings._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)&this->m_bindings,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)Myfirst,
      this->m_bindings._Mypair._Myval2._Myend - Myfirst);
    this->m_bindings._Mypair._Myval2._Myfirst = 0i64;
    this->m_bindings._Mypair._Myval2._Mylast = 0i64;
    this->m_bindings._Mypair._Myval2._Myend = 0i64;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
}

void __fastcall AgEventDispatcherBase<AgEditedInputEvent>::~AgEventDispatcherBase<AgEditedInputEvent>(
        AgEventDispatcherBase<AgEditedInputEvent> *this)
{
  AgDelegate1<AgEditedInputEvent const &,void> *Myfirst; // rdx

  Myfirst = this->m_bindings._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)&this->m_bindings,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)Myfirst,
      this->m_bindings._Mypair._Myval2._Myend - Myfirst);
    this->m_bindings._Mypair._Myval2._Myfirst = 0i64;
    this->m_bindings._Mypair._Myval2._Mylast = 0i64;
    this->m_bindings._Mypair._Myval2._Myend = 0i64;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
}

void __fastcall AgEventDispatcherBase<AgTypingInputEvent>::~AgEventDispatcherBase<AgTypingInputEvent>(
        AgEventDispatcherBase<AgTypingInputEvent> *this)
{
  AgDelegate1<AgTypingInputEvent const &,void> *Myfirst; // rdx

  Myfirst = this->m_bindings._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)&this->m_bindings,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)Myfirst,
      this->m_bindings._Mypair._Myval2._Myend - Myfirst);
    this->m_bindings._Mypair._Myval2._Myfirst = 0i64;
    this->m_bindings._Mypair._Myval2._Mylast = 0i64;
    this->m_bindings._Mypair._Myval2._Myend = 0i64;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
}

void __fastcall AgPointer<AgPlayer>::~AgPointer<AgPlayer>(AgPointer<AgPlayer> *this)
{
  AgPlayer *m_ptr; // rdi
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
      {
        std::vector<AgPointer<AgThread>>::_Tidy((std::vector<AgPointer<AgUser>> *)&m_ptr->m_controllers);
        AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&m_ptr->m_user);
        DeleteCriticalSection((LPCRITICAL_SECTION)&m_ptr->m_mutex);
        operator delete(m_ptr, 0x68ui64);
      }
      if ( v3 )
        AgReferenceCount::operator delete(m_ref);
    }
  }
}

void __fastcall AgSingleton<AgInputManager>::~AgSingleton<AgInputManager>(AgSingleton<AgInputManager> *this)
{
  this->__vftable = (AgSingleton<AgInputManager>_vtbl *)&AgSingleton<AgInputManager>::`vftable';
}

void __fastcall std::_List_alloc<std::_List_base_types<AgControllerComponent *>>::~_List_alloc<std::_List_base_types<AgControllerComponent *>>(
        std::_List_alloc<std::_List_base_types<AgControllerComponent *> > *this)
{
  operator delete(this->_Mypair._Myval2._Myhead);
}

void __fastcall std::_List_buy<AgControllerComponent *>::~_List_buy<AgControllerComponent *>(
        std::_List_buy<AgControllerComponent *> *this)
{
  operator delete(this->_Mypair._Myval2._Myhead);
}

void __fastcall std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::~_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>(
        std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > >,0> > *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > > result; // [rsp+48h] [rbp+10h] BYREF

  std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::_Tree<std::_Tmap_traits<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,__int64>>,0>>::~_Tree<std::_Tmap_traits<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,__int64>>,0>>(
        std::_Tree<std::_Tmap_traits<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> >,0> > *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,__int64> > > > result; // [rsp+48h] [rbp+10h] BYREF

  std::_Tree<std::_Tmap_traits<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,__int64>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,__int64> > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,__int64> > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::~_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>(
        std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> >,0> > *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > > result; // [rsp+48h] [rbp+10h] BYREF

  std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::~_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>(
        std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > >,0> > *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > > result; // [rsp+48h] [rbp+10h] BYREF

  std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::_Tree<std::_Tmap_traits<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const,unsigned int>>,1>>::~_Tree<std::_Tmap_traits<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const,unsigned int>>,1>>(
        std::_Tree<std::_Tmap_traits<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> >,1> > *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,unsigned int> > > > result; // [rsp+48h] [rbp+10h] BYREF

  std::_Tree<std::_Tmap_traits<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const,unsigned int>>,1>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,unsigned int> > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,unsigned int> > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::~_Tree_comp_alloc<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > >,0> > *this)
{
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,__int64>>,0>>::~_Tree_comp_alloc<std::_Tmap_traits<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,__int64>>,0>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> >,0> > *this)
{
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::~_Tree_comp_alloc<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> >,0> > *this)
{
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::~_Tree_comp_alloc<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > >,0> > *this)
{
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const,unsigned int>>,1>>::~_Tree_comp_alloc<std::_Tmap_traits<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const,unsigned int>>,1>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> >,1> > *this)
{
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::_Vb_val<std::allocator<bool>>::~_Vb_val<std::allocator<bool>>(
        std::_Vb_val<std::allocator<bool> > *this)
{
  if ( this->_Myvec._Mypair._Myval2._Myfirst )
  {
    std::_Wrap_alloc<std::allocator<enum extension::SoundConstants::LoadSpec>>::deallocate(
      (std::allocator<enum AgKeyboardButton> *)this,
      (AgKeyboardButton *)this->_Myvec._Mypair._Myval2._Myfirst,
      this->_Myvec._Mypair._Myval2._Myend - this->_Myvec._Mypair._Myval2._Myfirst);
    this->_Myvec._Mypair._Myval2._Myfirst = 0i64;
    this->_Myvec._Mypair._Myval2._Mylast = 0i64;
    this->_Myvec._Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall std::list<AgControllerComponent *>::~list<AgControllerComponent *>(
        std::list<AgControllerComponent *> *this)
{
  std::_List_node<AgControllerComponent *,void *> *Myhead; // rax
  std::_List_node<AgControllerComponent *,void *> *Next; // rcx
  std::_List_node<AgControllerComponent *,void *> *v4; // rbx

  Myhead = this->_Mypair._Myval2._Myhead;
  Next = this->_Mypair._Myval2._Myhead->_Next;
  Myhead->_Next = Myhead;
  this->_Mypair._Myval2._Myhead->_Prev = this->_Mypair._Myval2._Myhead;
  this->_Mypair._Myval2._Mysize = 0i64;
  if ( Next != this->_Mypair._Myval2._Myhead )
  {
    do
    {
      v4 = Next->_Next;
      operator delete(Next);
      Next = v4;
    }
    while ( v4 != this->_Mypair._Myval2._Myhead );
  }
  operator delete(this->_Mypair._Myval2._Myhead);
}

void __fastcall std::map<unsigned int,AgPointer<AgController>>::~map<unsigned int,AgPointer<AgController>>(
        std::map<unsigned int,AgPointer<AgController>> *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > > result; // [rsp+48h] [rbp+10h] BYREF

  std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::map<unsigned int,__int64>::~map<unsigned int,__int64>(std::map<unsigned int,__int64> *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,__int64> > > > result; // [rsp+48h] [rbp+10h] BYREF

  std::_Tree<std::_Tmap_traits<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,__int64>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,__int64> > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,__int64> > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::map<AgStringKey,AgControllerComponentIndex>::~map<AgStringKey,AgControllerComponentIndex>(
        std::map<AgStringKey,AgControllerComponentIndex> *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > > result; // [rsp+48h] [rbp+10h] BYREF

  std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::map<enum AgControllerComponentType,std::list<AgControllerComponent *>>::~map<enum AgControllerComponentType,std::list<AgControllerComponent *>>(
        std::map<enum AgControllerComponentType,std::list<AgControllerComponent *>> *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > > result; // [rsp+48h] [rbp+10h] BYREF

  std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::multimap<__int64,unsigned int>::~multimap<__int64,unsigned int>(
        std::multimap<__int64,unsigned int> *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,unsigned int> > > > result; // [rsp+48h] [rbp+10h] BYREF

  std::_Tree<std::_Tmap_traits<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const,unsigned int>>,1>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,unsigned int> > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,unsigned int> > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::pair<unsigned int const,AgPointer<AgController>>::~pair<unsigned int const,AgPointer<AgController>>(
        std::pair<unsigned int const ,AgPointer<AgController> > *this)
{
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&this->second);
}

void __fastcall std::pair<AgStringKey const,AgControllerComponentIndex>::~pair<AgStringKey const,AgControllerComponentIndex>(
        std::pair<AgStringKey const ,AgControllerComponentIndex> *this,
        unsigned __int64 a2)
{
  AgString::~AgString(&this->first.m_string, a2);
}

void __fastcall std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>::~pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>(
        std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > *this)
{
  std::list<AgControllerComponent *> *p_second; // rdi
  std::_List_node<AgControllerComponent *,void *> *Next; // rcx
  std::_List_node<AgControllerComponent *,void *> *v3; // rbx

  p_second = &this->second;
  Next = this->second._Mypair._Myval2._Myhead->_Next;
  p_second->_Mypair._Myval2._Myhead->_Next = p_second->_Mypair._Myval2._Myhead;
  p_second->_Mypair._Myval2._Myhead->_Prev = p_second->_Mypair._Myval2._Myhead;
  p_second->_Mypair._Myval2._Mysize = 0i64;
  if ( Next != p_second->_Mypair._Myval2._Myhead )
  {
    do
    {
      v3 = Next->_Next;
      operator delete(Next);
      Next = v3;
    }
    while ( v3 != p_second->_Mypair._Myval2._Myhead );
  }
  operator delete(p_second->_Mypair._Myval2._Myhead);
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

void __fastcall std::vector<AgControllerAddedEvent>::~vector<AgControllerAddedEvent>(
        std::vector<AgControllerAddedEvent> *this)
{
  std::vector<AgControllerAddedEvent>::_Tidy(this);
}

void __fastcall std::vector<AgControllerPairingChangedEvent>::~vector<AgControllerPairingChangedEvent>(
        std::vector<AgControllerPairingChangedEvent> *this)
{
  std::vector<AgControllerPairingChangedEvent>::_Tidy(this);
}

void __fastcall std::vector<AgControllerRemovedEvent>::~vector<AgControllerRemovedEvent>(
        std::vector<AgControllerRemovedEvent> *this)
{
  std::vector<AgControllerRemovedEvent>::_Tidy(this);
}

void __fastcall std::vector<AgEditedInputEvent>::~vector<AgEditedInputEvent>(std::vector<AgEditedInputEvent> *this)
{
  std::vector<AgEditedInputEvent>::_Tidy(this);
}

void __fastcall std::vector<AgTypingInputEvent>::~vector<AgTypingInputEvent>(std::vector<AgTypingInputEvent> *this)
{
  std::vector<AgTypingInputEvent>::_Tidy(this);
}

void __fastcall std::vector<AgDelegate1<AgControllerAddedEvent const &,void>>::~vector<AgDelegate1<AgControllerAddedEvent const &,void>>(
        std::vector<AgDelegate1<AgControllerAddedEvent const &,void>> *this)
{
  if ( this->_Mypair._Myval2._Myfirst )
  {
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)this,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall std::vector<AgDelegate1<AgControllerPairingChangedEvent const &,void>>::~vector<AgDelegate1<AgControllerPairingChangedEvent const &,void>>(
        std::vector<AgDelegate1<AgControllerPairingChangedEvent const &,void>> *this)
{
  if ( this->_Mypair._Myval2._Myfirst )
  {
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)this,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall std::vector<AgDelegate1<AgControllerRemovedEvent const &,void>>::~vector<AgDelegate1<AgControllerRemovedEvent const &,void>>(
        std::vector<AgDelegate1<AgControllerRemovedEvent const &,void>> *this)
{
  if ( this->_Mypair._Myval2._Myfirst )
  {
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)this,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall std::vector<AgDelegate1<AgEditedInputEvent const &,void>>::~vector<AgDelegate1<AgEditedInputEvent const &,void>>(
        std::vector<AgDelegate1<AgEditedInputEvent const &,void>> *this)
{
  if ( this->_Mypair._Myval2._Myfirst )
  {
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)this,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall std::vector<AgDelegate1<AgTypingInputEvent const &,void>>::~vector<AgDelegate1<AgTypingInputEvent const &,void>>(
        std::vector<AgDelegate1<AgTypingInputEvent const &,void>> *this)
{
  if ( this->_Mypair._Myval2._Myfirst )
  {
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)this,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall std::vector<enum AgKeyboardButton>::~vector<enum AgKeyboardButton>(
        std::vector<enum AgKeyboardButton> *this)
{
  if ( this->_Mypair._Myval2._Myfirst )
  {
    std::_Wrap_alloc<std::allocator<enum extension::SoundConstants::LoadSpec>>::deallocate(
      (std::allocator<enum AgKeyboardButton> *)this,
      this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall std::vector<bool>::~vector<bool>(std::vector<bool> *this)
{
  if ( this->_Myvec._Mypair._Myval2._Myfirst )
  {
    std::_Wrap_alloc<std::allocator<enum extension::SoundConstants::LoadSpec>>::deallocate(
      (std::allocator<enum AgKeyboardButton> *)this,
      (AgKeyboardButton *)this->_Myvec._Mypair._Myval2._Myfirst,
      this->_Myvec._Mypair._Myval2._Myend - this->_Myvec._Mypair._Myval2._Myfirst);
    this->_Myvec._Mypair._Myval2._Myfirst = 0i64;
    this->_Myvec._Mypair._Myval2._Mylast = 0i64;
    this->_Myvec._Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall AgController::~AgController(AgController *this, unsigned __int64 a2)
{
  AgController *v2; // rbx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > > result; // [rsp+48h] [rbp+10h] BYREF

  v2 = this;
  this->__vftable = (AgController_vtbl *)&AgController::`vftable';
  AgString::~AgString(&this->m_name, a2);
  v2 = (AgController *)((char *)v2 + 32);
  std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::erase(
    (std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > >,0> > *)v2,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > >)v2->~AgController,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > >)v2->__vftable);
  operator delete(v2->__vftable);
}

void __fastcall AgControllerAddedEvent::~AgControllerAddedEvent(AgControllerAddedEvent *this)
{
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)this);
}

void __fastcall AgControllerButtonComponent::~AgControllerButtonComponent(AgControllerButtonComponent *this)
{
  std::vector<bool> *p_m_lastButtons; // rbx
  unsigned int *Myfirst; // rdx
  unsigned int *v4; // rdx

  p_m_lastButtons = &this->m_lastButtons;
  Myfirst = this->m_lastButtons._Myvec._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<enum extension::SoundConstants::LoadSpec>>::deallocate(
      (std::allocator<enum AgKeyboardButton> *)&this->m_lastButtons,
      (AgKeyboardButton *)Myfirst,
      this->m_lastButtons._Myvec._Mypair._Myval2._Myend - Myfirst);
    p_m_lastButtons->_Myvec._Mypair._Myval2._Myfirst = 0i64;
    p_m_lastButtons->_Myvec._Mypair._Myval2._Mylast = 0i64;
    p_m_lastButtons->_Myvec._Mypair._Myval2._Myend = 0i64;
  }
  v4 = this->m_buttons._Myvec._Mypair._Myval2._Myfirst;
  if ( v4 )
  {
    std::_Wrap_alloc<std::allocator<enum extension::SoundConstants::LoadSpec>>::deallocate(
      (std::allocator<enum AgKeyboardButton> *)&this->m_buttons,
      (AgKeyboardButton *)v4,
      this->m_buttons._Myvec._Mypair._Myval2._Myend - v4);
    this->m_buttons._Myvec._Mypair._Myval2._Myfirst = 0i64;
    this->m_buttons._Myvec._Mypair._Myval2._Mylast = 0i64;
    this->m_buttons._Myvec._Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall AgControllerEvent::~AgControllerEvent(AgControllerEvent *this)
{
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)this);
}

void __fastcall AgControllerRemovedEvent::~AgControllerRemovedEvent(AgControllerRemovedEvent *this)
{
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)this);
}

void __fastcall AgInputManager::~AgInputManager(AgInputManager *this, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdx
  AgKeyboardButton *Myfirst; // rdx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,unsigned int> > > > result; // [rsp+50h] [rbp+18h] BYREF

  AgString::~AgString(&this->m_screenshotDirectory, a2);
  AgString::~AgString(&this->m_liveSavingPath, v3);
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&this->m_recordedInputs);
  AgControllerButtonComponent::~AgControllerButtonComponent(&this->m_nextRecorded.m_state);
  AgControllerButtonComponent::~AgControllerButtonComponent(&this->m_lastRecorded.m_state);
  AgAsyncEventDispatcher<AgEditedInputEvent>::~AgAsyncEventDispatcher<AgEditedInputEvent>(&this->EditedText);
  AgAsyncEventDispatcher<AgTypingInputEvent>::~AgAsyncEventDispatcher<AgTypingInputEvent>(&this->TypedText);
  AgAsyncEventDispatcher<AgControllerPairingChangedEvent>::~AgAsyncEventDispatcher<AgControllerPairingChangedEvent>(&this->ControllerPairingChanged);
  AgAsyncEventDispatcher<AgControllerRemovedEvent>::~AgAsyncEventDispatcher<AgControllerRemovedEvent>(&this->ControllerRemoved);
  AgAsyncEventDispatcher<AgControllerAddedEvent>::~AgAsyncEventDispatcher<AgControllerAddedEvent>(&this->ControllerAdded);
  Myfirst = this->m_ignoredLastUsed._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<enum extension::SoundConstants::LoadSpec>>::deallocate(
      (std::allocator<enum AgKeyboardButton> *)&this->m_ignoredLastUsed,
      Myfirst,
      this->m_ignoredLastUsed._Mypair._Myval2._Myend - Myfirst);
    this->m_ignoredLastUsed._Mypair._Myval2._Myfirst = 0i64;
    this->m_ignoredLastUsed._Mypair._Myval2._Mylast = 0i64;
    this->m_ignoredLastUsed._Mypair._Myval2._Myend = 0i64;
  }
  std::_Tree<std::_Tmap_traits<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const,unsigned int>>,1>>::erase(
    &this->m_userControllerPairings,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,unsigned int> > > >)this->m_userControllerPairings._Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,unsigned int> > > >)this->m_userControllerPairings._Mypair._Myval2._Myval2._Myhead);
  operator delete(this->m_userControllerPairings._Mypair._Myval2._Myval2._Myhead);
  std::_Tree<std::_Tmap_traits<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,__int64>>,0>>::erase(
    &this->m_controllerUserPairings,
    (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,__int64> > > > *)&result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,__int64> > > >)this->m_controllerUserPairings._Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,__int64> > > >)this->m_controllerUserPairings._Mypair._Myval2._Myval2._Myhead);
  operator delete(this->m_controllerUserPairings._Mypair._Myval2._Myval2._Myhead);
  std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::erase(
    &this->m_controllers,
    (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > > *)&result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > >)this->m_controllers._Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > >)this->m_controllers._Mypair._Myval2._Myval2._Myhead);
  operator delete(this->m_controllers._Mypair._Myval2._Myval2._Myhead);
  std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::erase(
    &this->m_componentLookup,
    (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > > *)&result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >)this->m_componentLookup._Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >)this->m_componentLookup._Mypair._Myval2._Myval2._Myhead);
  operator delete(this->m_componentLookup._Mypair._Myval2._Myval2._Myhead);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  this->__vftable = (AgInputManager_vtbl *)&AgSingleton<AgInputManager>::`vftable';
}

void __fastcall AgStringKey::~AgStringKey(AgStringKey *this, unsigned __int64 a2)
{
  AgString::~AgString(&this->m_string, a2);
}

void __fastcall AgInputManager::InputEntry::~InputEntry(AgInputManager::InputEntry *this)
{
  AgControllerButtonComponent::~AgControllerButtonComponent(&this->m_state);
}

AgPointer<AgUser> *__fastcall AgPointer<AgUser>::operator=(AgPointer<AgUser> *this, const AgPointer<AgUser> *rhs)
{
  AgReferenceCount *m_ref; // rdi
  int m_strongCount; // ebx
  AgReferenceCount *v6; // rbx
  AgUser *m_ptr; // rdi
  int v8; // ebp
  AgPointer<AgUser> v10; // [rsp+28h] [rbp-20h]

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
        ((void (__fastcall *)(AgUser *, __int64))m_ptr->~AgUser)(m_ptr, 1i64);
      if ( v8 )
        AgReferenceCount::operator delete(v6);
    }
  }
  return this;
}

std::vector<unsigned int> *__fastcall std::vector<unsigned int>::operator=(
        std::vector<unsigned int> *this,
        std::vector<unsigned int> *_Right)
{
  if ( this != _Right )
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
    this->_Mypair._Myval2._Myfirst = _Right->_Mypair._Myval2._Myfirst;
    this->_Mypair._Myval2._Mylast = _Right->_Mypair._Myval2._Mylast;
    this->_Mypair._Myval2._Myend = _Right->_Mypair._Myval2._Myend;
    _Right->_Mypair._Myval2._Myfirst = 0i64;
    _Right->_Mypair._Myval2._Mylast = 0i64;
    _Right->_Mypair._Myval2._Myend = 0i64;
  }
  return this;
}

std::vector<unsigned int> *__fastcall std::vector<unsigned int>::operator=(
        std::vector<unsigned int> *this,
        const std::vector<unsigned int> *_Right)
{
  unsigned int *Myfirst; // rdx
  unsigned int *Mylast; // r8
  unsigned __int64 v6; // rax
  unsigned int *v7; // rcx
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r8
  char *v10; // rsi
  unsigned int *v11; // rdi
  char *v12; // rbx
  unsigned int *v13; // rdi
  size_t v14; // rbx

  if ( this != _Right )
  {
    Myfirst = _Right->_Mypair._Myval2._Myfirst;
    Mylast = _Right->_Mypair._Myval2._Mylast;
    if ( Myfirst == Mylast )
    {
      this->_Mypair._Myval2._Mylast = this->_Mypair._Myval2._Myfirst;
    }
    else
    {
      v6 = Mylast - Myfirst;
      v7 = this->_Mypair._Myval2._Myfirst;
      v8 = this->_Mypair._Myval2._Mylast - v7;
      if ( v6 > v8 )
      {
        v9 = this->_Mypair._Myval2._Myend - v7;
        if ( v6 > v9 )
        {
          if ( v7 )
            std::_Wrap_alloc<std::allocator<enum extension::SoundConstants::LoadSpec>>::deallocate(
              (std::allocator<enum AgKeyboardButton> *)this,
              (AgKeyboardButton *)v7,
              v9);
          if ( std::vector<unsigned int>::_Buy(this, _Right->_Mypair._Myval2._Mylast - _Right->_Mypair._Myval2._Myfirst) )
          {
            v13 = this->_Mypair._Myval2._Myfirst;
            v14 = (char *)_Right->_Mypair._Myval2._Mylast - (char *)_Right->_Mypair._Myval2._Myfirst;
            memmove(this->_Mypair._Myval2._Myfirst, _Right->_Mypair._Myval2._Myfirst, v14);
            this->_Mypair._Myval2._Mylast = (unsigned int *)((char *)v13 + v14);
          }
        }
        else
        {
          v10 = (char *)&Myfirst[v8];
          memmove(v7, Myfirst, 4 * v8);
          v11 = this->_Mypair._Myval2._Mylast;
          v12 = (char *)((char *)_Right->_Mypair._Myval2._Mylast - v10);
          memmove(v11, v10, (size_t)v12);
          this->_Mypair._Myval2._Mylast = (unsigned int *)((char *)v11 + (_QWORD)v12);
        }
      }
      else
      {
        memmove(v7, Myfirst, (char *)Mylast - (char *)Myfirst);
        this->_Mypair._Myval2._Mylast = &this->_Mypair._Myval2._Myfirst[_Right->_Mypair._Myval2._Mylast
                                                                      - _Right->_Mypair._Myval2._Myfirst];
      }
    }
  }
  return this;
}

AgControllerButtonComponent *__fastcall AgControllerButtonComponent::operator=(
        AgControllerButtonComponent *this,
        AgControllerButtonComponent *__that)
{
  std::vector<bool> *p_m_buttons; // rsi
  std::vector<bool> *v3; // rbp
  std::vector<bool> *p_m_lastButtons; // rdi

  p_m_buttons = &__that->m_buttons;
  v3 = &this->m_buttons;
  this->AgControllerComponent = __that->AgControllerComponent;
  if ( &this->m_buttons != &__that->m_buttons )
  {
    std::vector<bool>::clear(&this->m_buttons);
    std::vector<unsigned int>::operator=(&v3->_Myvec, &p_m_buttons->_Myvec);
    v3->_Mysize = p_m_buttons->_Mysize;
    p_m_buttons->_Mysize = 0i64;
  }
  p_m_lastButtons = &__that->m_lastButtons;
  if ( &this->m_lastButtons != p_m_lastButtons )
  {
    std::vector<bool>::clear(&this->m_lastButtons);
    std::vector<unsigned int>::operator=(&this->m_lastButtons._Myvec, &p_m_lastButtons->_Myvec);
    this->m_lastButtons._Mysize = p_m_lastButtons->_Mysize;
    p_m_lastButtons->_Mysize = 0i64;
  }
  return this;
}

AgInputManager::InputEntry *__fastcall AgInputManager::InputEntry::operator=(
        AgInputManager::InputEntry *this,
        const AgInputManager::InputEntry *__that)
{
  AgControllerComponent v4; // rax
  std::vector<bool> *p_m_buttons; // rdx
  std::vector<bool> *v6; // rcx

  this->m_timeOccured = __that->m_timeOccured;
  v4 = __that->m_state.AgControllerComponent;
  p_m_buttons = &__that->m_state.m_buttons;
  this->m_state.AgControllerComponent = v4;
  v6 = &this->m_state.m_buttons;
  v6->_Mysize = p_m_buttons->_Mysize;
  std::vector<unsigned int>::operator=(&v6->_Myvec, &p_m_buttons->_Myvec);
  this->m_state.m_lastButtons._Mysize = __that->m_state.m_lastButtons._Mysize;
  std::vector<unsigned int>::operator=(&this->m_state.m_lastButtons._Myvec, &__that->m_state.m_lastButtons._Myvec);
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

char __fastcall std::vector<unsigned int>::_Buy(std::vector<unsigned int> *this, unsigned __int64 _Capacity)
{
  char result; // al
  unsigned int *v5; // rax

  result = 0;
  this->_Mypair._Myval2._Myfirst = 0i64;
  this->_Mypair._Myval2._Mylast = 0i64;
  this->_Mypair._Myval2._Myend = 0i64;
  if ( _Capacity )
  {
    if ( _Capacity > 0x3FFFFFFFFFFFFFFFi64 )
      std::_Xlength_error("vector<T> too long");
    v5 = (unsigned int *)std::allocator<enum AgAudioChannelBaseData::Command>::allocate(
                           (std::allocator<enum AgKeyboardButton> *)this,
                           _Capacity);
    this->_Mypair._Myval2._Myfirst = v5;
    this->_Mypair._Myval2._Mylast = v5;
    this->_Mypair._Myval2._Myend = &v5[_Capacity];
    return 1;
  }
  return result;
}

std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::_Buyheadnode(
        std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > >,0> > *this)
{
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *result; // rax

  result = (std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *)operator new(0x38ui64);
  if ( !result )
    invalid_parameter_noinfo_noreturn();
  result->_Left = result;
  if ( result != (std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *)-8i64 )
    result->_Parent = result;
  if ( result != (std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *)-16i64 )
    result->_Right = result;
  *(_WORD *)&result->_Color = 257;
  return result;
}

std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,__int64>>,0>>::_Buyheadnode(
        std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> >,0> > *this)
{
  std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> *result; // rax

  result = (std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> *)operator new(0x30ui64);
  if ( !result )
    invalid_parameter_noinfo_noreturn();
  result->_Left = result;
  if ( result != (std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> *)-8i64 )
    result->_Parent = result;
  if ( result != (std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> *)-16i64 )
    result->_Right = result;
  *(_WORD *)&result->_Color = 257;
  return result;
}

std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Buyheadnode(
        std::_Tree_comp_alloc<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> >,0> > *this)
{
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *result; // rax

  result = (std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *)operator new(0x48ui64);
  if ( !result )
    invalid_parameter_noinfo_noreturn();
  result->_Left = result;
  if ( result != (std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *)-8i64 )
    result->_Parent = result;
  if ( result != (std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *)-16i64 )
    result->_Right = result;
  *(_WORD *)&result->_Color = 257;
  return result;
}

std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Buyheadnode(
        std::_Tree_comp_alloc<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > >,0> > *this)
{
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *result; // rax

  result = (std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *)operator new(0x38ui64);
  if ( !result )
    invalid_parameter_noinfo_noreturn();
  result->_Left = result;
  if ( result != (std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *)-8i64 )
    result->_Parent = result;
  if ( result != (std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *)-16i64 )
    result->_Right = result;
  *(_WORD *)&result->_Color = 257;
  return result;
}

std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const,unsigned int>>,1>>::_Buyheadnode(
        std::_Tree_comp_alloc<std::_Tmap_traits<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> >,1> > *this)
{
  std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *result; // rax

  result = (std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *)operator new(0x30ui64);
  if ( !result )
    invalid_parameter_noinfo_noreturn();
  result->_Left = result;
  if ( result != (std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *)-8i64 )
    result->_Parent = result;
  if ( result != (std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *)-16i64 )
    result->_Right = result;
  *(_WORD *)&result->_Color = 257;
  return result;
}

std::_List_node<AgControllerComponent *,void *> *__fastcall std::_List_alloc<std::_List_base_types<AgControllerComponent *>>::_Buynode0(
        std::_List_alloc<std::_List_base_types<AgControllerComponent *> > *this,
        std::_List_node<AgControllerComponent *,void *> *_Next,
        std::_List_node<AgControllerComponent *,void *> *_Prev)
{
  std::_List_node<AgControllerComponent *,void *> *result; // rax

  result = (std::_List_node<AgControllerComponent *,void *> *)operator new(0x18ui64);
  if ( !result )
    invalid_parameter_noinfo_noreturn();
  if ( !_Next )
  {
    _Next = result;
    _Prev = result;
  }
  result->_Next = _Next;
  if ( result != (std::_List_node<AgControllerComponent *,void *> *)-8i64 )
    result->_Prev = _Prev;
  return result;
}

std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> **__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::_Buynode0(
        std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > >,0> > *this)
{
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> **v2; // rdx

  v2 = (std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> **)operator new(0x38ui64);
  if ( !v2 )
    invalid_parameter_noinfo_noreturn();
  *v2 = this->_Mypair._Myval2._Myval2._Myhead;
  if ( v2 != (std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> **)-8i64 )
    v2[1] = this->_Mypair._Myval2._Myval2._Myhead;
  if ( v2 != (std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> **)-16i64 )
    v2[2] = this->_Mypair._Myval2._Myval2._Myhead;
  return v2;
}

std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> **__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,__int64>>,0>>::_Buynode0(
        std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> >,0> > *this)
{
  std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> **v2; // rdx

  v2 = (std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> **)operator new(0x30ui64);
  if ( !v2 )
    invalid_parameter_noinfo_noreturn();
  *v2 = this->_Mypair._Myval2._Myval2._Myhead;
  if ( v2 != (std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> **)-8i64 )
    v2[1] = this->_Mypair._Myval2._Myval2._Myhead;
  if ( v2 != (std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> **)-16i64 )
    v2[2] = this->_Mypair._Myval2._Myval2._Myhead;
  return v2;
}

std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> **__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Buynode0(
        std::_Tree_comp_alloc<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> >,0> > *this)
{
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> **v2; // rdx

  v2 = (std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> **)operator new(0x48ui64);
  if ( !v2 )
    invalid_parameter_noinfo_noreturn();
  *v2 = this->_Mypair._Myval2._Myval2._Myhead;
  if ( v2 != (std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> **)-8i64 )
    v2[1] = this->_Mypair._Myval2._Myval2._Myhead;
  if ( v2 != (std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> **)-16i64 )
    v2[2] = this->_Mypair._Myval2._Myval2._Myhead;
  return v2;
}

std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> **__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Buynode0(
        std::_Tree_comp_alloc<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > >,0> > *this)
{
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> **v2; // rdx

  v2 = (std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> **)operator new(0x38ui64);
  if ( !v2 )
    invalid_parameter_noinfo_noreturn();
  *v2 = this->_Mypair._Myval2._Myval2._Myhead;
  if ( v2 != (std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> **)-8i64 )
    v2[1] = this->_Mypair._Myval2._Myval2._Myhead;
  if ( v2 != (std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> **)-16i64 )
    v2[2] = this->_Mypair._Myval2._Myval2._Myhead;
  return v2;
}

std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> **__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const,unsigned int>>,1>>::_Buynode0(
        std::_Tree_comp_alloc<std::_Tmap_traits<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> >,1> > *this)
{
  std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> **v2; // rdx

  v2 = (std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> **)operator new(0x30ui64);
  if ( !v2 )
    invalid_parameter_noinfo_noreturn();
  *v2 = this->_Mypair._Myval2._Myval2._Myhead;
  if ( v2 != (std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> **)-8i64 )
    v2[1] = this->_Mypair._Myval2._Myval2._Myhead;
  if ( v2 != (std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> **)-16i64 )
    v2[2] = this->_Mypair._Myval2._Myval2._Myhead;
  return v2;
}

void __fastcall std::vector<unsigned int>::_Construct_n(
        std::vector<unsigned int> *this,
        unsigned __int64 _Count,
        const unsigned int *_Pval)
{
  unsigned int *v6; // rax
  unsigned int *Myfirst; // rbx

  this->_Mypair._Myval2._Myfirst = 0i64;
  this->_Mypair._Myval2._Mylast = 0i64;
  this->_Mypair._Myval2._Myend = 0i64;
  if ( _Count )
  {
    if ( _Count > 0x3FFFFFFFFFFFFFFFi64 )
      std::_Xlength_error("vector<T> too long");
    v6 = (unsigned int *)std::allocator<enum AgAudioChannelBaseData::Command>::allocate(
                           (std::allocator<enum AgKeyboardButton> *)this,
                           _Count);
    this->_Mypair._Myval2._Myfirst = v6;
    this->_Mypair._Myval2._Mylast = v6;
    this->_Mypair._Myval2._Myend = &v6[_Count];
    Myfirst = this->_Mypair._Myval2._Myfirst;
    std::_Uninit_alloc_fill_n1<unsigned int *,unsigned __int64,std::allocator<unsigned int>>(
      this->_Mypair._Myval2._Myfirst,
      _Count,
      _Pval,
      (std::_Wrap_alloc<std::allocator<unsigned int> > *)this);
    this->_Mypair._Myval2._Mylast = &Myfirst[_Count];
  }
}

void __fastcall std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::_Destroy_if_not_nil(
        std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > >,0> > *this,
        std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *_Newnode)
{
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&_Newnode->_Myval.second);
  operator delete(_Newnode);
}

void __fastcall std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Destroy_if_not_nil(
        std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> >,0> > *this,
        std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *_Newnode)
{
  AgString::~AgString(&_Newnode->_Myval.first.m_string, (unsigned __int64)_Newnode);
  operator delete(_Newnode);
}

void __fastcall std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Destroy_if_not_nil(
        std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > >,0> > *this,
        std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *_Newnode)
{
  std::list<AgControllerComponent *> *p_second; // rdi
  std::_List_node<AgControllerComponent *,void *> *Next; // rcx
  std::_List_node<AgControllerComponent *,void *> *v5; // rbx

  p_second = &_Newnode->_Myval.second;
  Next = _Newnode->_Myval.second._Mypair._Myval2._Myhead->_Next;
  p_second->_Mypair._Myval2._Myhead->_Next = p_second->_Mypair._Myval2._Myhead;
  p_second->_Mypair._Myval2._Myhead->_Prev = p_second->_Mypair._Myval2._Myhead;
  _Newnode->_Myval.second._Mypair._Myval2._Mysize = 0i64;
  if ( Next != _Newnode->_Myval.second._Mypair._Myval2._Myhead )
  {
    do
    {
      v5 = Next->_Next;
      operator delete(Next);
      Next = v5;
    }
    while ( v5 != p_second->_Mypair._Myval2._Myhead );
  }
  operator delete(p_second->_Mypair._Myval2._Myhead);
  operator delete(_Newnode);
}

void __fastcall std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::_Erase(
        std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > >,0> > *this,
        std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *_Rootnode)
{
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *v2; // rdi
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *i; // rbx

  v2 = _Rootnode;
  for ( i = _Rootnode; !i->_Isnil; v2 = i )
  {
    std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::_Erase(
      this,
      i->_Right);
    i = i->_Left;
    AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&v2->_Myval.second);
    operator delete(v2);
  }
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

void __fastcall std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Erase(
        std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> >,0> > *this,
        std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *_Rootnode)
{
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v2; // rdi
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *i; // rbx
  unsigned __int64 v5; // rdx

  v2 = _Rootnode;
  for ( i = _Rootnode; !i->_Isnil; v2 = i )
  {
    std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Erase(
      this,
      i->_Right);
    i = i->_Left;
    AgString::~AgString(&v2->_Myval.first.m_string, v5);
    operator delete(v2);
  }
}

void __fastcall std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Erase(
        std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > >,0> > *this,
        std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *_Rootnode)
{
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v2; // rbp
  std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > >,0> > *v3; // rax
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *i; // rsi
  void **p_Myhead; // rdi
  std::_List_node<AgControllerComponent *,void *> *Next; // rcx
  std::_List_node<AgControllerComponent *,void *> *v7; // rbx

  v2 = _Rootnode;
  v3 = this;
  for ( i = _Rootnode; !i->_Isnil; v3 = this )
  {
    std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Erase(
      v3,
      i->_Right);
    i = i->_Left;
    p_Myhead = (void **)&v2->_Myval.second._Mypair._Myval2._Myhead;
    Next = v2->_Myval.second._Mypair._Myval2._Myhead->_Next;
    *(_QWORD *)*p_Myhead = *p_Myhead;
    *((_QWORD *)*p_Myhead + 1) = *p_Myhead;
    v2->_Myval.second._Mypair._Myval2._Mysize = 0i64;
    if ( Next != v2->_Myval.second._Mypair._Myval2._Myhead )
    {
      do
      {
        v7 = Next->_Next;
        operator delete(Next);
        Next = v7;
      }
      while ( v7 != *p_Myhead );
    }
    operator delete(*p_Myhead);
    operator delete(v2);
    v2 = i;
  }
}

std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > > *__fastcall std::vector<enum AgKeyboardButton>::_Insert_n(
        std::vector<enum AgKeyboardButton> *this,
        std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > > *result,
        std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > > _Where,
        unsigned __int64 _Count,
        const AgKeyboardButton *_Val)
{
  AgKeyboardButton *Myfirst; // r9
  signed __int64 v9; // r12
  AgKeyboardButton *Mylast; // rsi
  __int64 v11; // rsi
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rcx
  AgKeyboardButton *v15; // rsi
  signed __int64 v16; // r15
  unsigned __int64 v17; // rdi
  AgKeyboardButton v18; // er14
  AgKeyboardButton *v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // r8
  AgKeyboardButton v22; // er15
  AgKeyboardButton *v23; // rdx
  std::vector<enum AgKeyboardButton> *_Pval; // [rsp+90h] [rbp+8h] BYREF
  void *Src; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v27; // [rsp+A8h] [rbp+20h]

  Src = _Where._Ptr;
  _Pval = this;
  Myfirst = this->_Mypair._Myval2._Myfirst;
  v9 = _Where._Ptr - this->_Mypair._Myval2._Myfirst;
  if ( _Count )
  {
    Mylast = this->_Mypair._Myval2._Mylast;
    if ( this->_Mypair._Myval2._Myend - Mylast >= _Count )
    {
      if ( Mylast - _Where._Ptr >= _Count )
      {
        v22 = *_Val;
        memmove(Mylast, &Mylast[-_Count], 4 * _Count);
        this->_Mypair._Myval2._Mylast = &Mylast[_Count];
        memmove((char *)Src + 4 * _Count, Src, (size_t)Mylast - 4 * _Count - (_QWORD)Src);
        v23 = (AgKeyboardButton *)Src;
        if ( Src != (char *)Src + 4 * _Count )
        {
          do
            *v23++ = v22;
          while ( v23 != (AgKeyboardButton *)((char *)Src + 4 * _Count) );
        }
      }
      else
      {
        v18 = *_Val;
        SLODWORD(_Pval) = *_Val;
        memmove(&_Where._Ptr[_Count], _Where._Ptr, (char *)Mylast - (char *)_Where._Ptr);
        std::_Uninit_alloc_fill_n1<enum AgKeyboardButton *,unsigned __int64,std::allocator<enum AgKeyboardButton>>(
          this->_Mypair._Myval2._Mylast,
          _Count - (((char *)this->_Mypair._Myval2._Mylast - (char *)Src) >> 2),
          (const AgKeyboardButton *)&_Pval,
          (std::_Wrap_alloc<std::allocator<enum AgKeyboardButton> > *)this);
        this->_Mypair._Myval2._Mylast += _Count;
        v19 = (AgKeyboardButton *)Src;
        v20 = 0i64;
        v21 = (unsigned __int64)((char *)&this->_Mypair._Myval2._Mylast[-_Count] - (char *)Src + 3) >> 2;
        if ( Src > &this->_Mypair._Myval2._Mylast[-_Count] )
          v21 = 0i64;
        if ( v21 )
        {
          do
          {
            *v19++ = v18;
            ++v20;
          }
          while ( v20 != v21 );
        }
      }
    }
    else
    {
      v11 = Mylast - Myfirst;
      if ( 0x3FFFFFFFFFFFFFFFi64 - v11 < _Count )
        std::_Xlength_error("vector<T> too long");
      v12 = v11 + _Count;
      v13 = this->_Mypair._Myval2._Myend - Myfirst;
      v14 = 0i64;
      if ( 0x3FFFFFFFFFFFFFFFi64 - (v13 >> 1) >= v13 )
        v14 = v13 + (v13 >> 1);
      if ( v14 >= v12 )
        v12 = v14;
      v27 = v12;
      v15 = std::allocator<enum AgAudioChannelBaseData::Command>::allocate(
              (std::allocator<enum AgKeyboardButton> *)this,
              v12);
      v16 = (signed __int64)((__int64)Src - (unsigned __int64)this->_Mypair._Myval2._Myfirst) >> 2;
      std::_Uninit_alloc_fill_n1<enum AgKeyboardButton *,unsigned __int64,std::allocator<enum AgKeyboardButton>>(
        &v15[v16],
        _Count,
        _Val,
        (std::_Wrap_alloc<std::allocator<enum AgKeyboardButton> > *)this);
      memmove(v15, this->_Mypair._Myval2._Myfirst, (size_t)Src - (unsigned __int64)this->_Mypair._Myval2._Myfirst);
      memmove(&v15[v16 + _Count], Src, (char *)this->_Mypair._Myval2._Mylast - (char *)Src);
      v17 = this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst + _Count;
      if ( this->_Mypair._Myval2._Myfirst )
        std::_Wrap_alloc<std::allocator<enum extension::SoundConstants::LoadSpec>>::deallocate(
          (std::allocator<enum AgKeyboardButton> *)this,
          this->_Mypair._Myval2._Myfirst,
          this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
      this->_Mypair._Myval2._Myend = &v15[v12];
      this->_Mypair._Myval2._Mylast = &v15[v17];
      this->_Mypair._Myval2._Myfirst = v15;
    }
  }
  result->_Ptr = &this->_Mypair._Myval2._Myfirst[v9];
  return result;
}

std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > *__fastcall std::vector<bool>::_Insert_n(
        std::vector<bool> *this,
        std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > *result,
        std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > *_Where,
        unsigned __int64 _Count,
        const bool *_Val)
{
  __int64 inserted; // rax
  unsigned int *Myfirst; // r11
  __int64 v10; // r8
  unsigned __int64 v11; // r9
  const unsigned int *v12; // rbx
  unsigned __int64 v13; // r9
  unsigned __int64 Myoff; // rcx
  unsigned int *Myptr; // rdx
  unsigned int v16; // eax
  int v17; // eax
  std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > *v18; // rax
  std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > v19; // [rsp+20h] [rbp-10h] BYREF

  v19 = *_Where;
  inserted = std::vector<bool>::_Insert_x(this, &v19, _Count);
  Myfirst = this->_Myvec._Mypair._Myval2._Myfirst;
  v19 = (std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > >)(unsigned __int64)this->_Myvec._Mypair._Myval2._Myfirst;
  v10 = inserted;
  v11 = inserted + _Count;
  if ( (__int64)(inserted + _Count) >= 0 )
    v12 = &v19._Myptr[v11 >> 5];
  else
    v12 = (const unsigned int *)((char *)v19._Myptr - 4i64 - 4 * ((-1i64 - v11) >> 5));
  v19 = (std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > >)(unsigned __int64)Myfirst;
  v13 = v11 & 0x1F;
  if ( inserted >= 0 )
    v19._Myptr += (unsigned __int64)inserted >> 5;
  else
    v19._Myptr = (const unsigned int *)((char *)v19._Myptr - 4i64 - 4 * ((unsigned __int64)(-1 - inserted) >> 5));
  v19._Myoff = inserted & 0x1F;
  Myoff = v19._Myoff;
  Myptr = (unsigned int *)v19._Myptr;
  while ( Myptr != v12 || Myoff != v13 )
  {
    v16 = *Myptr;
    if ( *_Val )
      v17 = v16 | (1 << Myoff);
    else
      v17 = v16 & ~(1 << Myoff);
    *Myptr = v17;
    if ( Myoff >= 0x1F )
    {
      Myoff = 0i64;
      ++Myptr;
    }
    else
    {
      ++Myoff;
    }
  }
  v19 = (std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > >)(unsigned __int64)this->_Myvec._Mypair._Myval2._Myfirst;
  if ( v10 >= 0 )
    v19._Myptr += (unsigned __int64)v10 >> 5;
  else
    v19._Myptr = (const unsigned int *)((char *)v19._Myptr - 4i64 - 4 * ((unsigned __int64)(-1 - v10) >> 5));
  v18 = result;
  v19._Myoff = v10 & 0x1F;
  *(std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > *)result = v19;
  return v18;
}

signed __int64 __fastcall std::vector<bool>::_Insert_x(
        std::vector<bool> *this,
        std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > *_Where,
        unsigned __int64 _Count)
{
  signed __int64 v5; // rdi
  unsigned __int64 Mysize; // rcx
  signed __int64 v7; // rdx
  unsigned int *Myfirst; // r10
  bool v10; // zf
  signed __int64 v11; // rdx
  unsigned int *v12; // r11
  __int64 v13; // rdx
  int *v14; // r8
  __int64 v15; // rcx
  unsigned int *v16; // r9
  int v17; // eax
  unsigned int *v18; // [rsp+20h] [rbp-30h]
  __int64 v19; // [rsp+28h] [rbp-28h]
  unsigned int *v20; // [rsp+30h] [rbp-20h]
  unsigned __int64 v21; // [rsp+38h] [rbp-18h]
  unsigned int _Val; // [rsp+70h] [rbp+20h] BYREF

  v5 = _Where->_Myoff + 32 * (_Where->_Myptr - this->_Myvec._Mypair._Myval2._Myfirst);
  if ( _Count )
  {
    Mysize = this->_Mysize;
    if ( -1i64 - Mysize < _Count )
      std::_Xlength_error("vector<bool> too long");
    _Val = 0;
    std::vector<unsigned int>::resize(&this->_Myvec, (Mysize + _Count + 31) >> 5, &_Val);
    v7 = this->_Mysize;
    if ( v7 )
    {
      Myfirst = this->_Myvec._Mypair._Myval2._Myfirst;
      if ( v7 >= 0 )
        v20 = &Myfirst[(unsigned __int64)v7 >> 5];
      else
        v20 = (unsigned int *)((char *)Myfirst - 4i64 - 4 * ((unsigned __int64)(-1 - v7) >> 5));
      v21 = this->_Mysize & 0x1F;
      v10 = _Count + v7 == 0;
      v11 = _Count + v7;
      v18 = this->_Myvec._Mypair._Myval2._Myfirst;
      this->_Mysize = v11;
      v19 = 0i64;
      if ( !v10 )
      {
        if ( v11 >= 0 )
          v18 = &Myfirst[(unsigned __int64)v11 >> 5];
        else
          v18 = (unsigned int *)((char *)Myfirst - 4i64 - 4 * ((unsigned __int64)(-1 - v11) >> 5));
        v19 = v11 & 0x1F;
      }
      if ( v5 >= 0 )
        v12 = &Myfirst[(unsigned __int64)v5 >> 5];
      else
        v12 = (unsigned int *)((char *)Myfirst - 4i64 - 4 * ((unsigned __int64)(-1 - v5) >> 5));
      v13 = v19;
      v14 = (int *)v18;
      v15 = v21;
      v16 = v20;
      while ( v12 != v16 || (v5 & 0x1F) != v15 )
      {
        if ( v15 )
        {
          --v15;
        }
        else
        {
          v15 = 31i64;
          --v16;
        }
        if ( v13 )
        {
          --v13;
        }
        else
        {
          v13 = 31i64;
          --v14;
        }
        v17 = *v14;
        if ( ((1 << v15) & *v16) != 0 )
          *v14 = v17 | (1 << v13);
        else
          *v14 = v17 & ~(1 << v13);
      }
    }
    else
    {
      this->_Mysize = _Count;
    }
  }
  return v5;
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

void __fastcall std::vector<unsigned int>::_Reallocate(std::vector<unsigned int> *this, unsigned __int64 _Count)
{
  AgKeyboardButton *v4; // rsi
  signed __int64 v5; // rdi

  v4 = std::allocator<enum AgAudioChannelBaseData::Command>::allocate(
         (std::allocator<enum AgKeyboardButton> *)this,
         _Count);
  memmove(
    v4,
    this->_Mypair._Myval2._Myfirst,
    (char *)this->_Mypair._Myval2._Mylast - (char *)this->_Mypair._Myval2._Myfirst);
  v5 = this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
    std::_Wrap_alloc<std::allocator<enum extension::SoundConstants::LoadSpec>>::deallocate(
      (std::allocator<enum AgKeyboardButton> *)this,
      (AgKeyboardButton *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  this->_Mypair._Myval2._Myend = (unsigned int *)&v4[_Count];
  this->_Mypair._Myval2._Mylast = (unsigned int *)&v4[v5];
  this->_Mypair._Myval2._Myfirst = (unsigned int *)v4;
}

void __fastcall std::vector<unsigned int>::_Reallocate(std::vector<unsigned int> *this, unsigned __int64 _Count)
{
  AgKeyboardButton *v4; // rsi
  signed __int64 v5; // rdi

  v4 = std::allocator<enum AgAudioChannelBaseData::Command>::allocate(
         (std::allocator<enum AgKeyboardButton> *)this,
         _Count);
  memmove(
    v4,
    this->_Mypair._Myval2._Myfirst,
    (char *)this->_Mypair._Myval2._Mylast - (char *)this->_Mypair._Myval2._Myfirst);
  v5 = this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
    std::_Wrap_alloc<std::allocator<enum extension::SoundConstants::LoadSpec>>::deallocate(
      (std::allocator<enum AgKeyboardButton> *)this,
      (AgKeyboardButton *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  this->_Mypair._Myval2._Myend = (unsigned int *)&v4[_Count];
  this->_Mypair._Myval2._Mylast = (unsigned int *)&v4[v5];
  this->_Mypair._Myval2._Myfirst = (unsigned int *)v4;
}

void __fastcall std::vector<AgControllerAddedEvent>::_Reallocate(
        std::vector<AgControllerAddedEvent> *this,
        unsigned __int64 _Count)
{
  AgControllerAddedEvent *v4; // r14
  AgControllerAddedEvent *Mylast; // rsi
  AgControllerAddedEvent *Myfirst; // rbx
  signed __int64 v7; // r15

  v4 = (AgControllerAddedEvent *)std::allocator<AgArchive::DirectoryEntry>::allocate(
                                   (std::allocator<AgJsonNode> *)this,
                                   _Count);
  std::_Uninitialized_move_al_unchecked1<AgControllerAddedEvent *,AgControllerAddedEvent *,std::allocator<AgControllerAddedEvent>>(
    this->_Mypair._Myval2._Myfirst,
    this->_Mypair._Myval2._Mylast,
    v4,
    (std::_Wrap_alloc<std::allocator<AgControllerAddedEvent> > *)this);
  Mylast = this->_Mypair._Myval2._Mylast;
  Myfirst = this->_Mypair._Myval2._Myfirst;
  v7 = Mylast - this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    for ( ; Myfirst != Mylast; ++Myfirst )
      AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)Myfirst);
    std::allocator<AgJsonNode>::deallocate(
      (std::allocator<AgJsonNode> *)this,
      (AgJsonNode *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  }
  this->_Mypair._Myval2._Myend = &v4[_Count];
  this->_Mypair._Myval2._Mylast = &v4[v7];
  this->_Mypair._Myval2._Myfirst = v4;
}

void __fastcall std::vector<AgControllerRemovedEvent>::_Reallocate(
        std::vector<AgControllerRemovedEvent> *this,
        unsigned __int64 _Count)
{
  AgControllerRemovedEvent *v4; // r14
  AgControllerRemovedEvent *Mylast; // rsi
  AgControllerRemovedEvent *Myfirst; // rbx
  signed __int64 v7; // r15

  v4 = (AgControllerRemovedEvent *)std::allocator<AgArchive::DirectoryEntry>::allocate(
                                     (std::allocator<AgJsonNode> *)this,
                                     _Count);
  std::_Uninitialized_move_al_unchecked1<AgControllerRemovedEvent *,AgControllerRemovedEvent *,std::allocator<AgControllerRemovedEvent>>(
    this->_Mypair._Myval2._Myfirst,
    this->_Mypair._Myval2._Mylast,
    v4,
    (std::_Wrap_alloc<std::allocator<AgControllerRemovedEvent> > *)this);
  Mylast = this->_Mypair._Myval2._Mylast;
  Myfirst = this->_Mypair._Myval2._Myfirst;
  v7 = Mylast - this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    for ( ; Myfirst != Mylast; ++Myfirst )
      AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)Myfirst);
    std::allocator<AgJsonNode>::deallocate(
      (std::allocator<AgJsonNode> *)this,
      (AgJsonNode *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  }
  this->_Mypair._Myval2._Myend = &v4[_Count];
  this->_Mypair._Myval2._Mylast = &v4[v7];
  this->_Mypair._Myval2._Myfirst = v4;
}

void __fastcall std::vector<AgDelegate1<AgResumingEvent const &,void>>::_Reallocate(
        std::vector<AgDelegate1<AgResumingEvent const &,void>> *this,
        unsigned __int64 _Count)
{
  AgDelegate1<AgResumingEvent const &,void> *v4; // r14
  signed __int64 v5; // rdi

  v4 = (AgDelegate1<AgResumingEvent const &,void> *)std::allocator<AgDelegate1<AgShutdownEvent const &,void>>::allocate(
                                                      (std::allocator<AgDelegate1<AgShutdownEvent const &,void> > *)this,
                                                      _Count);
  std::_Uninitialized_move_al_unchecked1<AgDelegate1<AgResumingEvent const &,void> *,AgDelegate1<AgResumingEvent const &,void> *,std::allocator<AgDelegate1<AgResumingEvent const &,void>>>(
    this->_Mypair._Myval2._Myfirst,
    this->_Mypair._Myval2._Mylast,
    v4,
    (std::_Wrap_alloc<std::allocator<AgDelegate1<AgResumingEvent const &,void> > > *)this);
  v5 = (char *)this->_Mypair._Myval2._Mylast - (char *)this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)this,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  this->_Mypair._Myval2._Myend = &v4[_Count];
  this->_Mypair._Myval2._Mylast = (AgDelegate1<AgResumingEvent const &,void> *)((char *)v4
                                                                              + (v5 & 0xFFFFFFFFFFFFFFF0ui64));
  this->_Mypair._Myval2._Myfirst = v4;
}

void __fastcall std::vector<AgDelegate1<AgSuspendingEvent const &,void>>::_Reallocate(
        std::vector<AgDelegate1<AgSuspendingEvent const &,void>> *this,
        unsigned __int64 _Count)
{
  AgDelegate1<AgSuspendingEvent const &,void> *v4; // r14
  signed __int64 v5; // rdi

  v4 = (AgDelegate1<AgSuspendingEvent const &,void> *)std::allocator<AgDelegate1<AgShutdownEvent const &,void>>::allocate(
                                                        (std::allocator<AgDelegate1<AgShutdownEvent const &,void> > *)this,
                                                        _Count);
  std::_Uninitialized_move_al_unchecked1<AgDelegate1<AgSuspendingEvent const &,void> *,AgDelegate1<AgSuspendingEvent const &,void> *,std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>(
    this->_Mypair._Myval2._Myfirst,
    this->_Mypair._Myval2._Mylast,
    v4,
    (std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > > *)this);
  v5 = (char *)this->_Mypair._Myval2._Mylast - (char *)this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)this,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  this->_Mypair._Myval2._Myend = &v4[_Count];
  this->_Mypair._Myval2._Mylast = (AgDelegate1<AgSuspendingEvent const &,void> *)((char *)v4
                                                                                + (v5 & 0xFFFFFFFFFFFFFFF0ui64));
  this->_Mypair._Myval2._Myfirst = v4;
}

void __fastcall std::vector<AgPointer<AgController>>::_Reallocate(
        std::vector<AgPointer<AgController>> *this,
        unsigned __int64 _Count)
{
  AgPointer<AgController> *v4; // r12
  AgPointer<AgController> *Mylast; // r14
  AgPointer<AgController> *Myfirst; // rbx
  signed __int64 v7; // rsi

  v4 = (AgPointer<AgController> *)std::allocator<AgDelegate1<AgShutdownEvent const &,void>>::allocate(
                                    (std::allocator<AgDelegate1<AgShutdownEvent const &,void> > *)this,
                                    _Count);
  std::_Uninitialized_move_al_unchecked1<AgPointer<AgController> *,AgPointer<AgController> *,std::allocator<AgPointer<AgController>>>(
    this->_Mypair._Myval2._Myfirst,
    this->_Mypair._Myval2._Mylast,
    v4,
    (std::_Wrap_alloc<std::allocator<AgPointer<AgController> > > *)this);
  Mylast = this->_Mypair._Myval2._Mylast;
  Myfirst = this->_Mypair._Myval2._Myfirst;
  v7 = (char *)Mylast - (char *)this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    for ( ; Myfirst != Mylast; ++Myfirst )
      AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)Myfirst);
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)this,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  }
  this->_Mypair._Myval2._Myend = &v4[_Count];
  this->_Mypair._Myval2._Mylast = (AgPointer<AgController> *)((char *)v4 + (v7 & 0xFFFFFFFFFFFFFFF0ui64));
  this->_Mypair._Myval2._Myfirst = v4;
}

void __fastcall std::vector<unsigned int>::_Reserve(std::vector<unsigned int> *this, unsigned __int64 _Count)
{
  unsigned int *Myend; // r10
  unsigned int *Mylast; // r8
  unsigned int *Myfirst; // rcx
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
    if ( 0x3FFFFFFFFFFFFFFFi64 - v6 < _Count )
      std::_Xlength_error("vector<T> too long");
    v7 = v6 + _Count;
    v8 = Myend - Myfirst;
    v9 = 0i64;
    if ( 0x3FFFFFFFFFFFFFFFi64 - (v8 >> 1) >= v8 )
      v9 = v8 + (v8 >> 1);
    if ( v9 >= v7 )
      v7 = v9;
    std::vector<unsigned int>::_Reallocate(this, v7);
  }
}

void __fastcall std::vector<AgControllerAddedEvent>::_Reserve(
        std::vector<AgControllerAddedEvent> *this,
        unsigned __int64 _Count)
{
  AgControllerAddedEvent *Myend; // rcx
  AgControllerAddedEvent *Mylast; // r9
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
    std::vector<AgControllerAddedEvent>::_Reallocate(this, v7);
  }
}

void __fastcall std::vector<AgControllerRemovedEvent>::_Reserve(
        std::vector<AgControllerRemovedEvent> *this,
        unsigned __int64 _Count)
{
  AgControllerRemovedEvent *Myend; // rcx
  AgControllerRemovedEvent *Mylast; // r9
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
    std::vector<AgControllerRemovedEvent>::_Reallocate(this, v7);
  }
}

void __fastcall std::vector<AgDelegate1<AgResumingEvent const &,void>>::_Reserve(
        std::vector<AgDelegate1<AgResumingEvent const &,void>> *this,
        unsigned __int64 _Count)
{
  AgDelegate1<AgResumingEvent const &,void> *Myend; // r10
  AgDelegate1<AgResumingEvent const &,void> *Mylast; // r8
  AgDelegate1<AgResumingEvent const &,void> *Myfirst; // rcx
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
    std::vector<AgDelegate1<AgResumingEvent const &,void>>::_Reallocate(this, v7);
  }
}

void __fastcall std::vector<AgDelegate1<AgSuspendingEvent const &,void>>::_Reserve(
        std::vector<AgDelegate1<AgSuspendingEvent const &,void>> *this,
        unsigned __int64 _Count)
{
  AgDelegate1<AgSuspendingEvent const &,void> *Myend; // r10
  AgDelegate1<AgSuspendingEvent const &,void> *Mylast; // r8
  AgDelegate1<AgSuspendingEvent const &,void> *Myfirst; // rcx
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
    std::vector<AgDelegate1<AgSuspendingEvent const &,void>>::_Reallocate(this, v7);
  }
}

void __fastcall std::vector<AgPointer<AgController>>::_Reserve(
        std::vector<AgPointer<AgController>> *this,
        unsigned __int64 _Count)
{
  AgPointer<AgController> *Myend; // r10
  AgPointer<AgController> *Mylast; // r8
  AgPointer<AgController> *Myfirst; // rcx
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
    std::vector<AgPointer<AgController>>::_Reallocate(this, v7);
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

void __fastcall std::vector<unsigned int>::_Tidy(std::vector<unsigned int> *this)
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

void __fastcall std::vector<AgControllerAddedEvent>::_Tidy(std::vector<AgControllerAddedEvent> *this)
{
  AgControllerAddedEvent *Myfirst; // rbx
  AgControllerAddedEvent *i; // rdi

  Myfirst = this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    for ( i = this->_Mypair._Myval2._Mylast; Myfirst != i; ++Myfirst )
      AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)Myfirst);
    std::allocator<AgJsonNode>::deallocate(
      (std::allocator<AgJsonNode> *)this,
      (AgJsonNode *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall std::vector<AgControllerPairingChangedEvent>::_Tidy(std::vector<AgControllerPairingChangedEvent> *this)
{
  AgPointer<KOFApplication> *Myfirst; // rbx
  AgControllerPairingChangedEvent *i; // rdi

  Myfirst = (AgPointer<KOFApplication> *)this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    for ( i = this->_Mypair._Myval2._Mylast; Myfirst != (AgPointer<KOFApplication> *)i; Myfirst += 3 )
    {
      AgPointer<AgUser>::~AgPointer<AgUser>(Myfirst + 2);
      AgPointer<AgUser>::~AgPointer<AgUser>(Myfirst + 1);
      AgPointer<AgUser>::~AgPointer<AgUser>(Myfirst);
    }
    std::_Wrap_alloc<std::allocator<Fw::TUdpP2pInfo>>::deallocate(
      (std::allocator<AgControllerPairingChangedEvent> *)this,
      this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall std::vector<AgControllerRemovedEvent>::_Tidy(std::vector<AgControllerRemovedEvent> *this)
{
  AgControllerRemovedEvent *Myfirst; // rbx
  AgControllerRemovedEvent *i; // rdi

  Myfirst = this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    for ( i = this->_Mypair._Myval2._Mylast; Myfirst != i; ++Myfirst )
      AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)Myfirst);
    std::allocator<AgJsonNode>::deallocate(
      (std::allocator<AgJsonNode> *)this,
      (AgJsonNode *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall std::vector<AgEditedInputEvent>::_Tidy(std::vector<AgEditedInputEvent> *this, unsigned __int64 a2)
{
  AgEditedInputEvent *Myfirst; // rbx
  AgEditedInputEvent *i; // rdi

  Myfirst = this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    for ( i = this->_Mypair._Myval2._Mylast; Myfirst != i; ++Myfirst )
      AgString::~AgString(&Myfirst->string, a2);
    std::allocator<AgJsonNode>::deallocate(
      (std::allocator<AgJsonNode> *)this,
      (AgJsonNode *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall std::vector<AgTypingInputEvent>::_Tidy(std::vector<AgTypingInputEvent> *this, unsigned __int64 a2)
{
  AgTypingInputEvent *Myfirst; // rbx
  AgTypingInputEvent *i; // rdi

  Myfirst = this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    for ( i = this->_Mypair._Myval2._Mylast; Myfirst != i; ++Myfirst )
      AgString::~AgString(&Myfirst->string, a2);
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)this,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall std::vector<bool>::_Trim(std::vector<bool> *this, unsigned __int64 _Size)
{
  unsigned __int64 v4; // rbp
  unsigned int *Mylast; // rdx
  unsigned int *Myfirst; // rcx
  unsigned __int64 v7; // rbp
  unsigned int *v8; // rbx
  int v9; // esi

  v4 = _Size + 31;
  Mylast = this->_Myvec._Mypair._Myval2._Mylast;
  Myfirst = this->_Myvec._Mypair._Myval2._Myfirst;
  v7 = v4 >> 5;
  if ( v7 < Mylast - Myfirst )
  {
    v8 = &Myfirst[v7];
    if ( v8 == Myfirst )
    {
      this->_Myvec._Mypair._Myval2._Mylast = Myfirst;
    }
    else if ( v8 != Mylast )
    {
      memmove(&Myfirst[v7], Mylast, 0i64);
      this->_Myvec._Mypair._Myval2._Mylast = v8;
    }
  }
  this->_Mysize = _Size;
  v9 = _Size & 0x1F;
  if ( v9 )
    this->_Myvec._Mypair._Myval2._Myfirst[v7 - 1] &= (1 << v9) - 1;
}

void __fastcall AgController::addComponent(AgController *this, AgControllerComponent *component)
{
  AgControllerComponentType m_type; // er8
  std::map<enum AgControllerComponentType,std::list<AgControllerComponent *>> *p_m_components; // rdi
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *Myhead; // rcx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *Ptr; // rbx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *Parent; // rax
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *_Newnode; // rax
  std::_List_node<AgControllerComponent *,void *> *v8; // rdi
  std::_List_node<AgControllerComponent *,void *> *v9; // rdx
  unsigned __int64 Mysize; // rax
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > > result; // [rsp+50h] [rbp+8h] BYREF
  AgControllerComponent *v12; // [rsp+58h] [rbp+10h] BYREF
  AgControllerComponentType v13; // [rsp+60h] [rbp+18h] BYREF
  std::tuple<enum AgControllerComponentType &&> v14; // [rsp+68h] [rbp+20h] BYREF

  v12 = component;
  m_type = component->m_type;
  p_m_components = &this->m_components;
  Myhead = this->m_components._Mypair._Myval2._Myval2._Myhead;
  v13 = component->m_type;
  Ptr = Myhead;
  Parent = Myhead->_Parent;
  while ( !Parent->_Isnil )
  {
    if ( Parent->_Myval.first >= m_type )
    {
      Ptr = Parent;
      Parent = Parent->_Left;
    }
    else
    {
      Parent = Parent->_Right;
    }
  }
  if ( Ptr == Myhead || m_type < Ptr->_Myval.first )
  {
    v14._Myfirst._Val = &v13;
    _Newnode = std::_Tree_comp_alloc<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<enum AgControllerComponentType &&>,std::tuple<>>(
                 p_m_components,
                 &std::piecewise_construct,
                 &v14,
                 (std::tuple<> *)&result);
    std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Insert_hint<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>> &,std::_Tree_node<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>,void *> *>(
      p_m_components,
      &result,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > >)Ptr,
      &_Newnode->_Myval,
      _Newnode);
    Ptr = result._Ptr;
  }
  v8 = Ptr->_Myval.second._Mypair._Myval2._Myhead;
  v9 = std::_List_buy<AgControllerComponent *>::_Buynode<AgControllerComponent * const &>(
         &Ptr->_Myval.second,
         v8,
         v8->_Prev,
         &v12);
  Mysize = Ptr->_Myval.second._Mypair._Myval2._Mysize;
  if ( Mysize == 0xAAAAAAAAAAAAAA9i64 )
    std::_Xlength_error("list<T> too long");
  Ptr->_Myval.second._Mypair._Myval2._Mysize = Mysize + 1;
  v8->_Prev = v9;
  v9->_Prev->_Next = v9;
}

void __fastcall AgInputManager::addController(AgInputManager *this, AgPointer<AgController> *controller)
{
  AgMutex *p_m_mutex; // rbp
  unsigned int m_id; // edx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Myhead; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Parent; // rcx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Ptr; // rbx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *_Newnode; // rax
  AgControllerAddedEvent v10[3]; // [rsp+58h] [rbp-50h] BYREF
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > > result; // [rsp+B0h] [rbp+8h] BYREF
  AgPointer<AgController> *v12; // [rsp+B8h] [rbp+10h]
  unsigned int v13; // [rsp+C0h] [rbp+18h] BYREF
  std::tuple<unsigned int &&> v14; // [rsp+C8h] [rbp+20h] BYREF

  v12 = controller;
  p_m_mutex = &this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  m_id = controller->m_ptr->m_id;
  v13 = m_id;
  Myhead = this->m_controllers._Mypair._Myval2._Myval2._Myhead;
  Parent = Myhead->_Parent;
  Ptr = Myhead;
  while ( !Parent->_Isnil )
  {
    if ( Parent->_Myval.first >= m_id )
    {
      Ptr = Parent;
      Parent = Parent->_Left;
    }
    else
    {
      Parent = Parent->_Right;
    }
  }
  if ( Ptr == Myhead || m_id < Ptr->_Myval.first )
  {
    v14._Myfirst._Val = &v13;
    _Newnode = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int &&>,std::tuple<>>(
                 &this->m_controllers,
                 &std::piecewise_construct,
                 &v14,
                 (std::tuple<> *)&result);
    std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::_Insert_hint<std::pair<unsigned int const,AgPointer<AgController>> &,std::_Tree_node<std::pair<unsigned int const,AgPointer<AgController>>,void *> *>(
      &this->m_controllers,
      &result,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > >)Ptr,
      &_Newnode->_Myval,
      _Newnode);
    Ptr = result._Ptr;
  }
  AgPointer<AgController>::operator=(&Ptr->_Myval.second, controller);
  controller->m_ptr->m_connected = 1;
  v10[0].AgControllerEvent = 0i64;
  AgPointer<AgController>::operator=(&v10[0].controller, controller);
  v10[0].pairedId = -1i64;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->ControllerAdded.m_queueMutex);
  std::vector<AgControllerAddedEvent>::push_back(&this->ControllerAdded.m_eventQueue, v10);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->ControllerAdded.m_queueMutex);
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)v10);
  LeaveCriticalSection((LPCRITICAL_SECTION)p_m_mutex);
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)controller);
}

void __fastcall AgInputManager::addController(
        AgInputManager *this,
        AgPointer<AgController> *controller,
        __int64 pairedId)
{
  AgMutex *p_m_mutex; // r12
  unsigned int m_id; // ecx
  std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *_Newnode; // rax
  std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> *v9; // rax
  unsigned int v10; // edx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Myhead; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Parent; // rcx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Ptr; // rbx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *v14; // rax
  std::pair<__int64,unsigned int> v15; // [rsp+38h] [rbp-40h] BYREF
  int v16; // [rsp+48h] [rbp-30h]
  AgMutex *v17; // [rsp+50h] [rbp-28h]
  AgControllerAddedEvent v18; // [rsp+58h] [rbp-20h] BYREF
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > > result; // [rsp+C0h] [rbp+48h] BYREF
  AgPointer<AgController> *v20; // [rsp+C8h] [rbp+50h]
  unsigned int v21; // [rsp+D0h] [rbp+58h] BYREF
  std::tuple<unsigned int &&> v22; // [rsp+D8h] [rbp+60h] BYREF

  v20 = controller;
  p_m_mutex = &this->m_mutex;
  v17 = &this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  v16 = 1;
  m_id = controller->m_ptr->m_id;
  v15.first = pairedId;
  v15.second = m_id;
  _Newnode = std::_Tree_comp_alloc<std::_Tmap_traits<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const,unsigned int>>,1>>::_Buynode<std::pair<__int64,unsigned int>>(
               &this->m_userControllerPairings,
               &v15);
  std::_Tree<std::_Tmap_traits<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const,unsigned int>>,1>>::_Insert_nohint<std::pair<__int64 const,unsigned int> &,std::_Tree_node<std::pair<__int64 const,unsigned int>,void *> *>(
    &this->m_userControllerPairings,
    (std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,unsigned int> > > >,bool> *)&v15,
    0,
    &_Newnode->_Myval,
    _Newnode);
  LODWORD(v15.first) = controller->m_ptr->m_id;
  *(_QWORD *)&v15.second = pairedId;
  v9 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,__int64>>,0>>::_Buynode<std::pair<unsigned int,__int64>>(
         &this->m_controllerUserPairings,
         (std::pair<unsigned int,__int64> *)&v15);
  std::_Tree<std::_Tmap_traits<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,__int64>>,0>>::_Insert_nohint<std::pair<unsigned int const,__int64> &,std::_Tree_node<std::pair<unsigned int const,__int64>,void *> *>(
    &this->m_controllerUserPairings,
    (std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,__int64> > > >,bool> *)&v15,
    0,
    &v9->_Myval,
    v9);
  v10 = controller->m_ptr->m_id;
  v21 = v10;
  Myhead = this->m_controllers._Mypair._Myval2._Myval2._Myhead;
  Parent = Myhead->_Parent;
  Ptr = Myhead;
  while ( !Parent->_Isnil )
  {
    if ( Parent->_Myval.first >= v10 )
    {
      Ptr = Parent;
      Parent = Parent->_Left;
    }
    else
    {
      Parent = Parent->_Right;
    }
  }
  if ( Ptr == Myhead || v10 < Ptr->_Myval.first )
  {
    v22._Myfirst._Val = &v21;
    v14 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int &&>,std::tuple<>>(
            &this->m_controllers,
            &std::piecewise_construct,
            &v22,
            (std::tuple<> *)&result);
    std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::_Insert_hint<std::pair<unsigned int const,AgPointer<AgController>> &,std::_Tree_node<std::pair<unsigned int const,AgPointer<AgController>>,void *> *>(
      &this->m_controllers,
      &result,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > >)Ptr,
      &v14->_Myval,
      v14);
    Ptr = result._Ptr;
  }
  AgPointer<AgController>::operator=(&Ptr->_Myval.second, controller);
  controller->m_ptr->m_connected = 1;
  v18.AgControllerEvent = 0i64;
  AgPointer<AgController>::operator=(&v18.controller, controller);
  v18.pairedId = pairedId;
  LODWORD(v15.first) = 0;
  *(_QWORD *)&v15.second = &this->ControllerAdded.m_queueMutex;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->ControllerAdded.m_queueMutex);
  LODWORD(v15.first) = 1;
  std::vector<AgControllerAddedEvent>::push_back(&this->ControllerAdded.m_eventQueue, &v18);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->ControllerAdded.m_queueMutex);
  LODWORD(v15.first) = 0;
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&v18);
  LeaveCriticalSection((LPCRITICAL_SECTION)p_m_mutex);
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)controller);
}

void __fastcall AgInputManager::addKeyToLastUsedIgnores(AgInputManager *this, AgKeyboardButton key)
{
  std::vector<enum AgKeyboardButton> *p_m_ignoredLastUsed; // r10
  AgKeyboardButton *Myfirst; // r8
  __int64 v4; // rcx
  std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > > result; // [rsp+40h] [rbp+8h] BYREF
  AgKeyboardButton _Val; // [rsp+48h] [rbp+10h] BYREF

  _Val = key;
  p_m_ignoredLastUsed = &this->m_ignoredLastUsed;
  Myfirst = this->m_ignoredLastUsed._Mypair._Myval2._Myfirst;
  v4 = this->m_ignoredLastUsed._Mypair._Myval2._Mylast - Myfirst;
  while ( v4 > 0 )
  {
    if ( key < Myfirst[v4 / 2] )
    {
      v4 /= 2i64;
    }
    else
    {
      Myfirst += v4 / 2 + 1;
      v4 += -1 - v4 / 2;
    }
  }
  std::vector<enum AgKeyboardButton>::_Insert_n(
    p_m_ignoredLastUsed,
    &result,
    (std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > >)Myfirst,
    1ui64,
    &_Val);
}

AgKeyboardButton *__fastcall std::allocator<enum AgAudioChannelBaseData::Command>::allocate(
        std::allocator<enum AgKeyboardButton> *this,
        unsigned __int64 _Count)
{
  AgKeyboardButton *result; // rax
  unsigned __int64 v3; // rcx
  void *v4; // rax
  void *v5; // rcx

  if ( !_Count )
    return 0i64;
  if ( _Count > 0x3FFFFFFFFFFFFFFFi64 )
    std::_Xbad_alloc();
  v3 = 4 * _Count;
  if ( 4 * _Count < 0x1000 )
  {
    result = (AgKeyboardButton *)operator new(v3);
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
    result = (AgKeyboardButton *)(((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0ui64);
    *((_QWORD *)result - 1) = v5;
  }
  return result;
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

void __fastcall AgEventDispatcherBase<AgControllerAddedEvent>::call(
        AgEventDispatcherBase<AgControllerAddedEvent> *this,
        const AgControllerAddedEvent *e)
{
  AgDelegate1<AgControllerAddedEvent const &,void> *Myfirst; // rbx
  void (__fastcall *m_pFunction)(detail::GenericClass *); // rbp
  detail::GenericClass *m_pthis; // r14

  EnterCriticalSection((LPCRITICAL_SECTION)this);
  Myfirst = this->m_bindings._Mypair._Myval2._Myfirst;
  while ( Myfirst != this->m_bindings._Mypair._Myval2._Mylast )
  {
    m_pFunction = Myfirst->m_Closure.m_pFunction;
    m_pthis = Myfirst->m_Closure.m_pthis;
    ++Myfirst;
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    ((void (__fastcall *)(detail::GenericClass *, const AgControllerAddedEvent *))m_pFunction)(m_pthis, e);
    EnterCriticalSection((LPCRITICAL_SECTION)this);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
}

void __fastcall AgEventDispatcherBase<AgControllerPairingChangedEvent>::call(
        AgEventDispatcherBase<AgControllerPairingChangedEvent> *this,
        const AgControllerPairingChangedEvent *e)
{
  AgDelegate1<AgControllerPairingChangedEvent const &,void> *Myfirst; // rbx
  void (__fastcall *m_pFunction)(detail::GenericClass *); // rbp
  detail::GenericClass *m_pthis; // r14

  EnterCriticalSection((LPCRITICAL_SECTION)this);
  Myfirst = this->m_bindings._Mypair._Myval2._Myfirst;
  while ( Myfirst != this->m_bindings._Mypair._Myval2._Mylast )
  {
    m_pFunction = Myfirst->m_Closure.m_pFunction;
    m_pthis = Myfirst->m_Closure.m_pthis;
    ++Myfirst;
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    ((void (__fastcall *)(detail::GenericClass *, const AgControllerPairingChangedEvent *))m_pFunction)(m_pthis, e);
    EnterCriticalSection((LPCRITICAL_SECTION)this);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
}

void __fastcall AgEventDispatcherBase<AgControllerRemovedEvent>::call(
        AgEventDispatcherBase<AgControllerRemovedEvent> *this,
        const AgControllerRemovedEvent *e)
{
  AgDelegate1<AgControllerRemovedEvent const &,void> *Myfirst; // rbx
  void (__fastcall *m_pFunction)(detail::GenericClass *); // rbp
  detail::GenericClass *m_pthis; // r14

  EnterCriticalSection((LPCRITICAL_SECTION)this);
  Myfirst = this->m_bindings._Mypair._Myval2._Myfirst;
  while ( Myfirst != this->m_bindings._Mypair._Myval2._Mylast )
  {
    m_pFunction = Myfirst->m_Closure.m_pFunction;
    m_pthis = Myfirst->m_Closure.m_pthis;
    ++Myfirst;
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    ((void (__fastcall *)(detail::GenericClass *, const AgControllerRemovedEvent *))m_pFunction)(m_pthis, e);
    EnterCriticalSection((LPCRITICAL_SECTION)this);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
}

void __fastcall AgEventDispatcherBase<AgEditedInputEvent>::call(
        AgEventDispatcherBase<AgEditedInputEvent> *this,
        const AgEditedInputEvent *e)
{
  AgDelegate1<AgEditedInputEvent const &,void> *Myfirst; // rbx
  void (__fastcall *m_pFunction)(detail::GenericClass *); // rbp
  detail::GenericClass *m_pthis; // r14

  EnterCriticalSection((LPCRITICAL_SECTION)this);
  Myfirst = this->m_bindings._Mypair._Myval2._Myfirst;
  while ( Myfirst != this->m_bindings._Mypair._Myval2._Mylast )
  {
    m_pFunction = Myfirst->m_Closure.m_pFunction;
    m_pthis = Myfirst->m_Closure.m_pthis;
    ++Myfirst;
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    ((void (__fastcall *)(detail::GenericClass *, const AgEditedInputEvent *))m_pFunction)(m_pthis, e);
    EnterCriticalSection((LPCRITICAL_SECTION)this);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
}

void __fastcall AgEventDispatcherBase<AgTypingInputEvent>::call(
        AgEventDispatcherBase<AgTypingInputEvent> *this,
        const AgTypingInputEvent *e)
{
  AgDelegate1<AgTypingInputEvent const &,void> *Myfirst; // rbx
  void (__fastcall *m_pFunction)(detail::GenericClass *); // rbp
  detail::GenericClass *m_pthis; // r14

  EnterCriticalSection((LPCRITICAL_SECTION)this);
  Myfirst = this->m_bindings._Mypair._Myval2._Myfirst;
  while ( Myfirst != this->m_bindings._Mypair._Myval2._Mylast )
  {
    m_pFunction = Myfirst->m_Closure.m_pFunction;
    m_pthis = Myfirst->m_Closure.m_pthis;
    ++Myfirst;
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    ((void (__fastcall *)(detail::GenericClass *, const AgTypingInputEvent *))m_pFunction)(m_pthis, e);
    EnterCriticalSection((LPCRITICAL_SECTION)this);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
}

void __fastcall std::_Tree<std::_Tmap_traits<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,__int64>>,0>>::clear(
        std::_Tree<std::_Tmap_traits<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> >,0> > *this)
{
  std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> *Parent; // rsi
  std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> *i; // rbx

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

void __fastcall std::_Tree<std::_Tmap_traits<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const,unsigned int>>,1>>::clear(
        std::_Tree<std::_Tmap_traits<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> >,1> > *this)
{
  std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *Parent; // rsi
  std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *i; // rbx

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

void __fastcall std::vector<bool>::clear(std::vector<bool> *this)
{
  unsigned int *Myfirst; // r9
  unsigned int *v2; // r8
  signed __int64 Mysize; // rdx
  unsigned __int128 v4; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int128 v5; // [rsp+40h] [rbp-28h] BYREF
  std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > v6; // [rsp+50h] [rbp-18h] BYREF

  Myfirst = this->_Myvec._Mypair._Myval2._Myfirst;
  v2 = this->_Myvec._Mypair._Myval2._Myfirst;
  v4 = (unsigned __int64)this->_Myvec._Mypair._Myval2._Myfirst;
  Mysize = this->_Mysize;
  if ( Mysize )
  {
    if ( Mysize >= 0 )
      *(_QWORD *)&v4 = &Myfirst[(unsigned __int64)Mysize >> 5];
    else
      *(_QWORD *)&v4 = (char *)v2 - 4i64 - 4 * ((unsigned __int64)(-1 - Mysize) >> 5);
    *((_QWORD *)&v4 + 1) = Mysize & 0x1F;
  }
  v5 = (unsigned __int64)Myfirst;
  std::vector<bool>::erase(
    this,
    &v6,
    (std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > *)&v5,
    (std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > *)&v4);
}

void __fastcall AgInputManager::clearControls(AgInputManager *this)
{
  AgPointer<AgController> *FirstController; // rax
  AgController *m_ptr; // rdi
  AgReferenceCount *m_ref; // rbx
  int v5; // esi
  AgPointer<AgController> *v6; // rax
  AgController *v7; // rdi
  AgReferenceCount *v8; // rbx
  int v9; // esi
  AgPointer<AgController> value; // [rsp+28h] [rbp-40h] BYREF
  AgPointer<AgController> result; // [rsp+38h] [rbp-30h] BYREF

  FirstController = AgInputManager::getFirstController(this, &value, AgControllerType_Keyboard);
  FirstController->m_ptr->clear(FirstController->m_ptr);
  m_ptr = value.m_ptr;
  value.m_ptr = 0i64;
  m_ref = value.m_ref;
  if ( value.m_ref )
  {
    value.m_ref = 0i64;
    v5 = 0;
    if ( !AgAtomicDecrement(&m_ref->m_strongCount) )
    {
      if ( !AgAtomicDecrement(&m_ref->m_weakCount) )
        v5 = 1;
      m_ref->m_data = 0i64;
      if ( m_ptr )
        ((void (__fastcall *)(AgController *, __int64))m_ptr->~AgController)(m_ptr, 1i64);
      if ( v5 )
        AgReferenceCount::operator delete(m_ref);
    }
  }
  v6 = AgInputManager::getFirstController(this, &result, AgControllerType_Mouse);
  v6->m_ptr->clear(v6->m_ptr);
  v7 = result.m_ptr;
  result.m_ptr = 0i64;
  v8 = result.m_ref;
  if ( result.m_ref )
  {
    result.m_ref = 0i64;
    v9 = 0;
    if ( !AgAtomicDecrement(&v8->m_strongCount) )
    {
      if ( !AgAtomicDecrement(&v8->m_weakCount) )
        v9 = 1;
      v8->m_data = 0i64;
      if ( v7 )
        ((void (__fastcall *)(AgController *, __int64))v7->~AgController)(v7, 1i64);
      if ( v9 )
        AgReferenceCount::operator delete(v8);
    }
  }
}

void __fastcall AgInputManager::createSingleton()
{
  AgPCInputManager *v0; // rax

  v0 = (AgPCInputManager *)operator new(0x470ui64);
  if ( v0 )
    AgPCInputManager::AgPCInputManager(v0);
}

void __fastcall std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
        std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *this,
        AgDelegate1<AgUserUpdatedEvent const &,void> *_Ptr,
        unsigned __int64 _Count)
{
  void (__fastcall *m_pFunction)(detail::GenericClass *); // rax
  char *v4; // rdx

  if ( _Count > 0xFFFFFFFFFFFFFFFi64 )
    invalid_parameter_noinfo_noreturn();
  if ( 16 * _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    m_pFunction = _Ptr[-1].m_Closure.m_pFunction;
    if ( (AgDelegate1<AgUserUpdatedEvent const &,void> *)m_pFunction >= _Ptr )
      invalid_parameter_noinfo_noreturn();
    v4 = (char *)((char *)_Ptr - (char *)m_pFunction);
    if ( (unsigned __int64)v4 < 8 )
      invalid_parameter_noinfo_noreturn();
    if ( (unsigned __int64)v4 > 0x27 )
      invalid_parameter_noinfo_noreturn();
    _Ptr = (AgDelegate1<AgUserUpdatedEvent const &,void> *)m_pFunction;
  }
  operator delete(_Ptr);
}

void __fastcall std::_Wrap_alloc<std::allocator<enum extension::SoundConstants::LoadSpec>>::deallocate(
        std::allocator<enum AgKeyboardButton> *this,
        AgKeyboardButton *_Ptr,
        unsigned __int64 _Count)
{
  AgKeyboardButton *v3; // rax
  char *v4; // rdx

  if ( _Count > 0x3FFFFFFFFFFFFFFFi64 )
    invalid_parameter_noinfo_noreturn();
  if ( 4 * _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    v3 = (AgKeyboardButton *)*((_QWORD *)_Ptr - 1);
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

void __fastcall std::_Wrap_alloc<std::allocator<Fw::TUdpP2pInfo>>::deallocate(
        std::allocator<AgControllerPairingChangedEvent> *this,
        AgControllerPairingChangedEvent *_Ptr,
        unsigned __int64 _Count)
{
  AgUser *m_ptr; // rax
  char *v4; // rdx

  if ( _Count > 0x555555555555555i64 )
    invalid_parameter_noinfo_noreturn();
  if ( 48 * _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    m_ptr = _Ptr[-1].oldUser.m_ptr;
    if ( m_ptr >= (AgUser *)_Ptr )
      invalid_parameter_noinfo_noreturn();
    v4 = (char *)((char *)_Ptr - (char *)m_ptr);
    if ( (unsigned __int64)v4 < 8 )
      invalid_parameter_noinfo_noreturn();
    if ( (unsigned __int64)v4 > 0x27 )
      invalid_parameter_noinfo_noreturn();
    _Ptr = (AgControllerPairingChangedEvent *)m_ptr;
  }
  operator delete(_Ptr);
}

void __fastcall AgControllerButtonComponent::deserialize(
        AgControllerButtonComponent *this,
        AgPointer<AgStream> *stream)
{
  unsigned int *Myfirst; // rdi
  unsigned __int64 v5; // rbx
  unsigned int *v6; // r8
  unsigned __int64 v7; // rax
  signed __int64 Mysize; // rcx
  unsigned __int64 v9; // rax
  unsigned int v10; // eax
  int v11; // eax
  char v12; // [rsp+50h] [rbp+8h] BYREF
  AgPointer<AgStream> *v13; // [rsp+58h] [rbp+10h]
  unsigned __int64 _Newsize; // [rsp+60h] [rbp+18h] BYREF

  v13 = stream;
  LODWORD(_Newsize) = 0;
  stream->m_ptr->read(stream->m_ptr, (unsigned __int8 *)&_Newsize, 4u);
  std::vector<bool>::resize(&this->m_buttons, (unsigned int)_Newsize, 0);
  Myfirst = this->m_buttons._Myvec._Mypair._Myval2._Myfirst;
  v5 = 0i64;
  while ( 1 )
  {
    v6 = this->m_buttons._Myvec._Mypair._Myval2._Myfirst;
    v7 = 0i64;
    Mysize = this->m_buttons._Mysize;
    if ( Mysize )
    {
      v9 = this->m_buttons._Mysize;
      if ( Mysize >= 0 )
        v6 += v9 >> 5;
      else
        v6 = (unsigned int *)((char *)v6 - 4i64 - 4 * ((-1i64 - v9) >> 5));
      v7 = this->m_buttons._Mysize & 0x1F;
    }
    if ( Myfirst == v6 && v5 == v7 )
      break;
    stream->m_ptr->read(stream->m_ptr, (unsigned __int8 *)&v12, 1u);
    v10 = *Myfirst;
    if ( v12 )
      v11 = v10 | (1 << v5);
    else
      v11 = v10 & ~(1 << v5);
    *Myfirst = v11;
    if ( v5 >= 0x1F )
    {
      v5 = 0i64;
      ++Myfirst;
    }
    else
    {
      ++v5;
    }
  }
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)stream);
}

__int64 __fastcall AgInputManager::InputEntry::deserialize(
        AgInputManager::InputEntry *this,
        AgPointer<AgStream> *stream)
{
  AgStream *m_ptr; // rdi
  unsigned __int64 v5; // rbx
  AgPointer<AgStream> *v7; // rax
  AgPointer<AgPlayer> v8; // [rsp+28h] [rbp-30h] BYREF

  m_ptr = stream->m_ptr;
  v5 = m_ptr->getSize(m_ptr);
  if ( m_ptr->getPosition(m_ptr) < v5 )
  {
    stream->m_ptr->read(stream->m_ptr, (unsigned __int8 *)this, 8u);
    AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(&v8, (const AgPointer<AgPlayer> *)stream);
    AgControllerButtonComponent::deserialize(&this->m_state, v7);
    AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)stream);
    return 1i64;
  }
  else
  {
    AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)stream);
    return 0i64;
  }
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > > *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > > _First,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > > _Last)
{
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Myhead; // rdx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *v7; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Left; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > > *v9; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *v10; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Right; // rdx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *j; // rcx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *i; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > > resulta; // [rsp+30h] [rbp+8h] BYREF
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *v15; // [rsp+40h] [rbp+18h]
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Ptr; // [rsp+48h] [rbp+20h]

  Ptr = _Last._Ptr;
  v15 = _First._Ptr;
  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  if ( _First._Ptr == this->_Mypair._Myval2._Myval2._Myhead->_Left && _Last._Ptr == Myhead )
  {
    std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::_Erase(
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
        std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::erase(
          this,
          &resulta,
          (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > >)v10);
        _First._Ptr = v15;
      }
      while ( v15 != Ptr );
    }
    v9 = result;
    result->_Ptr = _First._Ptr;
  }
  return v9;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > > *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > > _Where)
{
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *v5; // rsi
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Right; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *j; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *i; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Left; // rdi
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Parent; // rbx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *v11; // rcx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *k; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *v13; // rcx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *m; // rax
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > > *v15; // rax
  char Color; // cl
  bool n; // zf
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *v18; // rdx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *v19; // r8
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v20; // rcx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *v21; // rcx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *v22; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *v23; // rcx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *v24; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *v25; // rax
  unsigned __int64 Mysize; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Ptr; // [rsp+60h] [rbp+18h]

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
        v15 = (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > > *)v5->_Parent;
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

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > >,0> > *this,
        const unsigned int *_Keyval)
{
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Myhead; // rsi
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Parent; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *v6; // rdi
  unsigned int v7; // er8
  unsigned int first; // edx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> **p_Left; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *v10; // rax
  __int64 v11; // rbx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > > result; // [rsp+30h] [rbp+8h] BYREF

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
  std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > >)Myhead,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,AgPointer<AgController> > > > >)v6);
  return v11;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,__int64> > > > *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,__int64>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,__int64> > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,__int64> > > > _First,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,__int64> > > > _Last)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,__int64> > > > *v6; // rax
  std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> *v7; // rax
  std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> *Right; // rdx
  std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> *j; // rcx
  std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> *i; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > resulta; // [rsp+30h] [rbp+8h] BYREF
  std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> *v12; // [rsp+40h] [rbp+18h]
  std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> *Ptr; // [rsp+48h] [rbp+20h]

  Ptr = _Last._Ptr;
  v12 = _First._Ptr;
  if ( _First._Ptr == this->_Mypair._Myval2._Myval2._Myhead->_Left
    && _Last._Ptr == this->_Mypair._Myval2._Myval2._Myhead )
  {
    std::_Tree<std::_Tmap_traits<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,__int64>>,0>>::clear(this);
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

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,__int64>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> >,0> > *this,
        const unsigned int *_Keyval)
{
  std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> *Myhead; // rsi
  std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> *Parent; // rax
  std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> *v6; // rdi
  unsigned int v7; // er8
  unsigned int first; // edx
  std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> **p_Left; // rax
  std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> *v10; // rax
  __int64 v11; // rbx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,__int64> > > > result; // [rsp+30h] [rbp+8h] BYREF

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
  std::_Tree<std::_Tmap_traits<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,__int64>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,__int64> > > >)Myhead,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,__int64> > > >)v6);
  return v11;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > > *__fastcall std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > > _First,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > > _Last)
{
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *Myhead; // rdx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v7; // rax
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *Left; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > > *v9; // rax
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v10; // rax
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *Right; // rdx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *j; // rcx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *i; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > > resulta; // [rsp+30h] [rbp+8h] BYREF
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v15; // [rsp+40h] [rbp+18h]
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *Ptr; // [rsp+48h] [rbp+20h]

  Ptr = _Last._Ptr;
  v15 = _First._Ptr;
  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  if ( _First._Ptr == this->_Mypair._Myval2._Myval2._Myhead->_Left && _Last._Ptr == Myhead )
  {
    std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Erase(
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
        std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::erase(
          this,
          &resulta,
          (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >)v10);
        _First._Ptr = v15;
      }
      while ( v15 != Ptr );
    }
    v9 = result;
    result->_Ptr = _First._Ptr;
  }
  return v9;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > > *__fastcall std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > > _Where)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > > *v3; // r15
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v5; // rsi
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *Right; // rax
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *j; // rax
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *i; // rax
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *Left; // rdi
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *Parent; // rbx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v11; // rcx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *k; // rax
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v13; // rcx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *m; // rax
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > > *v15; // rax
  char Color; // cl
  bool n; // zf
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v18; // r8
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v19; // rcx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v20; // rcx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v21; // rax
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v22; // rcx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v23; // rax
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v24; // rax
  unsigned __int64 Mysize; // rax
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *Ptr; // [rsp+60h] [rbp+18h]

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
        v15 = (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > > *)v5->_Parent;
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
  result = (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > > *)this->_Mypair._Myval2._Myval2._Myhead;
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
        n = result == (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > > *)this->_Mypair._Myval2._Myval2._Myhead->_Parent )
  {
    result = (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > > *)Parent;
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
  AgString::~AgString(&v5->_Myval.first.m_string, (unsigned __int64)result);
  operator delete(v5);
  Mysize = this->_Mypair._Myval2._Myval2._Mysize;
  if ( Mysize )
    this->_Mypair._Myval2._Myval2._Mysize = Mysize - 1;
  v3->_Ptr = Ptr;
  return v3;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > > *__fastcall std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > > _First,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > > _Last)
{
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *Myhead; // rdx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v7; // rax
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *Left; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > > *v9; // rax
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v10; // rax
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *Right; // rdx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *j; // rcx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *i; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > > resulta; // [rsp+30h] [rbp+8h] BYREF
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v15; // [rsp+40h] [rbp+18h]
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *Ptr; // [rsp+48h] [rbp+20h]

  Ptr = _Last._Ptr;
  v15 = _First._Ptr;
  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  if ( _First._Ptr == this->_Mypair._Myval2._Myval2._Myhead->_Left && _Last._Ptr == Myhead )
  {
    std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Erase(
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
        std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::erase(
          this,
          &resulta,
          (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > >)v10);
        _First._Ptr = v15;
      }
      while ( v15 != Ptr );
    }
    v9 = result;
    result->_Ptr = _First._Ptr;
  }
  return v9;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > > *__fastcall std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > > _Where)
{
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v5; // rsi
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *Right; // rax
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *j; // rax
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *i; // rax
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *Left; // rdi
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *Parent; // rbx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v11; // rcx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *k; // rax
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v13; // rcx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *m; // rax
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > > *v15; // rax
  char Color; // cl
  bool n; // zf
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v18; // rdx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v19; // r8
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v20; // rcx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v21; // rcx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v22; // rax
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v23; // rcx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v24; // rax
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v25; // rax
  void **p_Myhead; // rdi
  std::_List_node<AgControllerComponent *,void *> *Next; // rcx
  std::_List_node<AgControllerComponent *,void *> *v28; // rbx
  unsigned __int64 Mysize; // rax
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *Ptr; // [rsp+60h] [rbp+18h]

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
        v15 = (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> > > > > *)v5->_Parent;
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
  p_Myhead = (void **)&v5->_Myval.second._Mypair._Myval2._Myhead;
  Next = v5->_Myval.second._Mypair._Myval2._Myhead->_Next;
  *(_QWORD *)*p_Myhead = *p_Myhead;
  *((_QWORD *)*p_Myhead + 1) = *p_Myhead;
  v5->_Myval.second._Mypair._Myval2._Mysize = 0i64;
  if ( Next != v5->_Myval.second._Mypair._Myval2._Myhead )
  {
    do
    {
      v28 = Next->_Next;
      operator delete(Next);
      Next = v28;
    }
    while ( v28 != *p_Myhead );
  }
  operator delete(*p_Myhead);
  operator delete(v5);
  Mysize = this->_Mypair._Myval2._Myval2._Mysize;
  if ( Mysize )
    this->_Mypair._Myval2._Myval2._Mysize = Mysize - 1;
  result->_Ptr = Ptr;
  return result;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,unsigned int> > > > *__fastcall std::_Tree<std::_Tmap_traits<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const,unsigned int>>,1>>::erase(
        std::_Tree<std::_Tmap_traits<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> >,1> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,unsigned int> > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,unsigned int> > > > _First,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,unsigned int> > > > _Last)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const ,unsigned int> > > > *v6; // rax
  std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *v7; // rax
  std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *Right; // rdx
  std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *j; // rcx
  std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *i; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > resulta; // [rsp+30h] [rbp+8h] BYREF
  std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *v12; // [rsp+40h] [rbp+18h]
  std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *Ptr; // [rsp+48h] [rbp+20h]

  Ptr = _Last._Ptr;
  v12 = _First._Ptr;
  if ( _First._Ptr == this->_Mypair._Myval2._Myval2._Myhead->_Left
    && _Last._Ptr == this->_Mypair._Myval2._Myval2._Myhead )
  {
    std::_Tree<std::_Tmap_traits<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const,unsigned int>>,1>>::clear(this);
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

std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > *__fastcall std::vector<bool>::erase(
        std::vector<bool> *this,
        std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > *result,
        std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > *_First_arg,
        std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > *_Last_arg)
{
  std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > v4; // xmm0
  unsigned int *Myfirst; // rdi
  __int64 v6; // r8
  signed __int64 Mysize; // r11
  unsigned int *v10; // r10
  __int64 v11; // r8
  std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > v12; // xmm0
  __int64 v13; // rdx
  unsigned int *v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rbx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r8
  int *v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned int *v21; // r10
  int v22; // eax
  int v23; // eax
  std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > *v24; // rax
  __int128 v25; // [rsp+20h] [rbp-30h]
  unsigned int *v26; // [rsp+20h] [rbp-30h]
  std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > v27; // [rsp+20h] [rbp-30h]
  __int128 v28; // [rsp+30h] [rbp-20h]

  v4 = *_First_arg;
  Myfirst = this->_Myvec._Mypair._Myval2._Myfirst;
  v6 = 0i64;
  Mysize = this->_Mysize;
  v25 = (unsigned __int64)this->_Myvec._Mypair._Myval2._Myfirst;
  v10 = this->_Myvec._Mypair._Myval2._Myfirst;
  if ( Mysize )
  {
    v11 = v4._Myoff + 32 * (v4._Myptr - Myfirst);
    if ( v11 >= 0 )
      v10 = &Myfirst[(unsigned __int64)v11 >> 5];
    else
      v10 = (unsigned int *)((char *)Myfirst - 4i64 - 4 * ((unsigned __int64)(-1 - v11) >> 5));
    v6 = v11 & 0x1F;
    *(_QWORD *)&v25 = v10;
    *((_QWORD *)&v25 + 1) = (unsigned int)v6;
  }
  v12 = *_Last_arg;
  v13 = 0i64;
  v28 = (unsigned __int64)Myfirst;
  v14 = this->_Myvec._Mypair._Myval2._Myfirst;
  if ( Mysize )
  {
    v15 = v12._Myoff + 32 * (v12._Myptr - Myfirst);
    if ( v15 >= 0 )
      v14 = &Myfirst[(unsigned __int64)v15 >> 5];
    else
      v14 = (unsigned int *)((char *)Myfirst - 4i64 - 4 * ((unsigned __int64)(-1 - v15) >> 5));
    v13 = v15 & 0x1F;
    *(_QWORD *)&v28 = v14;
    *((_QWORD *)&v28 + 1) = (unsigned int)v13;
  }
  v16 = v6 + 32 * (v10 - Myfirst);
  if ( v10 != v14 || v6 != v13 )
  {
    v17 = 0i64;
    if ( Mysize )
    {
      if ( Mysize >= 0 )
        Myfirst += (unsigned __int64)Mysize >> 5;
      else
        Myfirst = (unsigned int *)((char *)Myfirst - 4i64 - 4 * ((unsigned __int64)(-1 - Mysize) >> 5));
      v17 = this->_Mysize & 0x1F;
    }
    v18 = *((_QWORD *)&v25 + 1);
    v19 = (int *)v25;
    v20 = *((_QWORD *)&v28 + 1);
    v21 = (unsigned int *)v28;
    while ( v21 != Myfirst || v20 != v17 )
    {
      v22 = *v19;
      if ( ((1 << v20) & *v21) != 0 )
        v23 = v22 | (1 << v18);
      else
        v23 = v22 & ~(1 << v18);
      *v19 = v23;
      if ( v18 >= 0x1F )
      {
        v18 = 0i64;
        ++v19;
      }
      else
      {
        ++v18;
      }
      if ( v20 >= 0x1F )
      {
        v20 = 0i64;
        ++v21;
      }
      else
      {
        ++v20;
      }
    }
    std::vector<bool>::_Trim(this, v18 + 32 * (((char *)v19 - (char *)this->_Myvec._Mypair._Myval2._Myfirst) >> 2));
  }
  v26 = this->_Myvec._Mypair._Myval2._Myfirst;
  if ( v16 >= 0 )
    v27._Myptr = &v26[(unsigned __int64)v16 >> 5];
  else
    v27._Myptr = (unsigned int *)((char *)v26 - 4i64 - 4 * ((unsigned __int64)(-1 - v16) >> 5));
  v24 = result;
  v27._Myoff = v16 & 0x1F;
  *result = v27;
  return v24;
}

AgPointer<AgController> *__fastcall AgInputManager::getController(
        AgInputManager *this,
        AgPointer<AgController> *result,
        unsigned int id)
{
  AgMutex *p_m_mutex; // rsi
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Myhead; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Parent; // rcx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *v9; // rdx

  p_m_mutex = &this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  Myhead = this->m_controllers._Mypair._Myval2._Myval2._Myhead;
  Parent = Myhead->_Parent;
  v9 = Myhead;
  while ( !Parent->_Isnil )
  {
    if ( Parent->_Myval.first >= id )
    {
      v9 = Parent;
      Parent = Parent->_Left;
    }
    else
    {
      Parent = Parent->_Right;
    }
  }
  if ( v9 == Myhead || id < v9->_Myval.first )
    v9 = this->m_controllers._Mypair._Myval2._Myval2._Myhead;
  if ( v9 == Myhead )
  {
    result->m_ref = 0i64;
    result->m_ptr = 0i64;
  }
  else
  {
    AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(
      (AgPointer<AgPlayer> *)result,
      (const AgPointer<AgPlayer> *)&v9->_Myval.second);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)p_m_mutex);
  return result;
}

AgPointer<AgController> *__fastcall AgPlayer::getController(
        AgPlayer *this,
        AgPointer<AgController> *result,
        unsigned int index)
{
  AgPointer<KOFApplication> *v4; // r14
  volatile int *p_m_strongCount; // rdi
  int v6; // ebx
  AgPointer<KOFApplication> *v7; // rcx
  char v8; // bl
  char v9; // bl
  AgPointer<KOFApplication> v11; // [rsp+30h] [rbp-38h] BYREF
  AgPointer<KOFApplication> v12; // [rsp+40h] [rbp-28h] BYREF

  if ( index >= (unsigned __int64)(this->m_controllers._Mypair._Myval2._Mylast
                                 - this->m_controllers._Mypair._Myval2._Myfirst) )
  {
    v12 = 0i64;
    v7 = &v12;
    v8 = 2;
  }
  else
  {
    v4 = (AgPointer<KOFApplication> *)&this->m_controllers._Mypair._Myval2._Myfirst[index];
    v11 = 0i64;
    p_m_strongCount = &v4->m_ref->m_strongCount;
    if ( v4->m_ref )
    {
      v6 = *p_m_strongCount;
      if ( *p_m_strongCount )
      {
        while ( AgAtomicCompareExchange(p_m_strongCount, v6, v6 + 1) != v6 )
        {
          v6 = *p_m_strongCount;
          if ( !*p_m_strongCount )
            goto LABEL_9;
        }
        if ( v6 != -1 )
          v11 = *v4;
      }
    }
LABEL_9:
    v7 = &v11;
    v8 = 1;
  }
  result->m_ref = v7->m_ref;
  result->m_ptr = (AgController *)v7->m_ptr;
  v7->m_ref = 0i64;
  v7->m_ptr = 0i64;
  v9 = v8 | 4;
  if ( (v9 & 2) != 0 )
  {
    v9 &= ~2u;
    AgPointer<AgUser>::~AgPointer<AgUser>(&v12);
  }
  if ( (v9 & 1) != 0 )
    AgPointer<AgUser>::~AgPointer<AgUser>(&v11);
  return result;
}

__int64 __fastcall AgInputManager::getControllers(
        AgInputManager *this,
        std::vector<AgPointer<AgController>> *controllers)
{
  AgMutex *p_m_mutex; // rbp
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Myhead; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Left; // rbx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Right; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *j; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *i; // rax
  unsigned __int64 Mysize; // rbx

  p_m_mutex = &this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  Myhead = this->m_controllers._Mypair._Myval2._Myval2._Myhead;
  Left = Myhead->_Left;
  if ( Myhead->_Left != Myhead )
  {
    do
    {
      std::vector<AgPointer<AgController>>::push_back(controllers, &Left->_Myval.second);
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
    }
    while ( Left != this->m_controllers._Mypair._Myval2._Myval2._Myhead );
  }
  Mysize = this->m_controllers._Mypair._Myval2._Myval2._Mysize;
  LeaveCriticalSection((LPCRITICAL_SECTION)p_m_mutex);
  return (unsigned int)Mysize;
}

__int64 __fastcall AgInputManager::getControllersByType(
        AgInputManager *this,
        AgControllerType type,
        std::vector<AgPointer<AgController>> *controllers)
{
  AgMutex *p_m_mutex; // r15
  unsigned int v7; // edi
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Myhead; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Left; // rbx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Right; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *j; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *i; // rdx

  p_m_mutex = &this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  v7 = 0;
  Myhead = this->m_controllers._Mypair._Myval2._Myval2._Myhead;
  Left = Myhead->_Left;
  if ( Myhead->_Left != Myhead )
  {
    do
    {
      if ( Left->_Myval.second.m_ptr->m_type == type )
      {
        std::vector<AgPointer<AgController>>::push_back(controllers, &Left->_Myval.second);
        ++v7;
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
    }
    while ( Left != this->m_controllers._Mypair._Myval2._Myval2._Myhead );
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)p_m_mutex);
  return v7;
}

AgPointer<AgController> *__fastcall AgInputManager::getFirstController(
        AgInputManager *this,
        AgPointer<AgController> *result,
        AgControllerType type)
{
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Myhead; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Left; // rdx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Right; // rcx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *j; // rcx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *i; // rcx

  Myhead = this->m_controllers._Mypair._Myval2._Myval2._Myhead;
  Left = Myhead->_Left;
  if ( type )
  {
    if ( Left != Myhead )
    {
      while ( Left->_Myval.second.m_ptr->m_type != type )
      {
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
        if ( Left == Myhead )
          goto LABEL_18;
      }
      goto LABEL_3;
    }
LABEL_18:
    result->m_ref = 0i64;
    result->m_ptr = 0i64;
    return result;
  }
  if ( Left == Myhead )
    goto LABEL_18;
LABEL_3:
  AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(
    (AgPointer<AgPlayer> *)result,
    (const AgPointer<AgPlayer> *)&Left->_Myval.second);
  return result;
}

AgPointer<AgController> *__fastcall AgInputManager::getLastUsedController(
        AgInputManager *this,
        AgPointer<AgController> *result)
{
  AgMutex *p_m_mutex; // rbp
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Myhead; // rdi
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Left; // rbx
  AgController *m_ptr; // rdx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Right; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *j; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *i; // rax

  p_m_mutex = &this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  result->m_ref = 0i64;
  result->m_ptr = 0i64;
  Myhead = this->m_controllers._Mypair._Myval2._Myval2._Myhead;
  Left = Myhead->_Left;
  while ( Left != Myhead )
  {
    m_ptr = result->m_ptr;
    if ( !m_ptr || Left->_Myval.second.m_ptr->m_lastUsed > m_ptr->m_lastUsed )
      AgPointer<AgController>::operator=(result, &Left->_Myval.second);
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
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)p_m_mutex);
  return result;
}

AgString *__fastcall AgController::getMappingString(AgController *this, AgString *result)
{
  AgString::AgString(result, &pnewText, -1);
  return result;
}

__int64 __fastcall AgInputManager::getPairedControllerIds(
        AgInputManager *this,
        __int64 id,
        std::vector<unsigned int> *controllers)
{
  AgMutex *p_m_mutex; // r15
  unsigned int v7; // er14
  std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *Myhead; // rbx
  std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> **p_Parent; // rdx
  std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *Parent; // rax
  std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *v11; // rbp
  __int64 first; // rcx
  std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *v13; // rax
  std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *Left; // rcx
  unsigned int *p_second; // rsi
  unsigned int *Mylast; // rdx
  unsigned int *Myfirst; // rcx
  __int64 v18; // rsi
  unsigned int *v19; // r9
  __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r8
  unsigned int *v24; // rcx
  unsigned int v25; // eax
  unsigned int *Myend; // r9
  __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // r8
  std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *Right; // rax
  std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *j; // rax
  std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *i; // rax

  p_m_mutex = &this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  v7 = 0;
  Myhead = this->m_userControllerPairings._Mypair._Myval2._Myval2._Myhead;
  p_Parent = &Myhead->_Parent;
  Parent = Myhead->_Parent;
  v11 = Myhead;
  while ( !Parent->_Isnil )
  {
    first = Parent->_Myval.first;
    if ( first >= id )
    {
      if ( v11->_Isnil && id < first )
        v11 = Parent;
      Myhead = Parent;
      Parent = Parent->_Left;
    }
    else
    {
      Parent = Parent->_Right;
    }
  }
  v13 = v11;
  if ( v11->_Isnil )
    v13 = (std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *)p_Parent;
  Left = v13->_Left;
  while ( !Left->_Isnil )
  {
    if ( id >= Left->_Myval.first )
    {
      Left = Left->_Right;
    }
    else
    {
      v11 = Left;
      Left = Left->_Left;
    }
  }
  while ( Myhead != v11 )
  {
    p_second = &Myhead->_Myval.second;
    Mylast = controllers->_Mypair._Myval2._Mylast;
    if ( &Myhead->_Myval.second >= Mylast
      || (Myfirst = controllers->_Mypair._Myval2._Myfirst, controllers->_Mypair._Myval2._Myfirst > p_second) )
    {
      Myend = controllers->_Mypair._Myval2._Myend;
      if ( Mylast == Myend && !(Myend - Mylast) )
      {
        v27 = Mylast - controllers->_Mypair._Myval2._Myfirst;
        if ( v27 == 0x3FFFFFFFFFFFFFFFi64 )
          std::_Xlength_error("vector<T> too long");
        v28 = v27 + 1;
        v29 = Myend - controllers->_Mypair._Myval2._Myfirst;
        v30 = 0i64;
        if ( 0x3FFFFFFFFFFFFFFFi64 - (v29 >> 1) >= v29 )
          v30 = v29 + (v29 >> 1);
        if ( v30 >= v28 )
          v28 = v30;
        std::vector<unsigned int>::_Reallocate(controllers, v28);
      }
      v24 = controllers->_Mypair._Myval2._Mylast;
      if ( !v24 )
        goto LABEL_40;
      v25 = *p_second;
    }
    else
    {
      v18 = p_second - Myfirst;
      v19 = controllers->_Mypair._Myval2._Myend;
      if ( Mylast == v19 && !(v19 - Mylast) )
      {
        v20 = Mylast - Myfirst;
        if ( v20 == 0x3FFFFFFFFFFFFFFFi64 )
          std::_Xlength_error("vector<T> too long");
        v21 = v20 + 1;
        v22 = v19 - Myfirst;
        v23 = 0i64;
        if ( 0x3FFFFFFFFFFFFFFFi64 - (v22 >> 1) >= v22 )
          v23 = v22 + (v22 >> 1);
        if ( v23 >= v21 )
          v21 = v23;
        std::vector<unsigned int>::_Reallocate(controllers, v21);
      }
      v24 = controllers->_Mypair._Myval2._Mylast;
      if ( !v24 )
        goto LABEL_40;
      v25 = controllers->_Mypair._Myval2._Myfirst[v18];
    }
    *v24 = v25;
LABEL_40:
    ++controllers->_Mypair._Myval2._Mylast;
    ++v7;
    if ( !Myhead->_Isnil )
    {
      Right = Myhead->_Right;
      if ( Right->_Isnil )
      {
        for ( i = Myhead->_Parent; !i->_Isnil; i = i->_Parent )
        {
          if ( Myhead != i->_Right )
            break;
          Myhead = i;
        }
        Myhead = i;
      }
      else
      {
        Myhead = Myhead->_Right;
        for ( j = Right->_Left; !j->_Isnil; j = j->_Left )
          Myhead = j;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)p_m_mutex);
  return v7;
}

__int64 __fastcall AgInputManager::getPairedUserId(AgInputManager *this, unsigned int id)
{
  AgMutex *p_m_mutex; // rsi
  std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> *Myhead; // rax
  std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> *Parent; // rdx
  std::_Tree_node<std::pair<unsigned int const ,__int64>,void *> *v7; // rcx
  __int64 second; // rbx

  p_m_mutex = &this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  Myhead = this->m_controllerUserPairings._Mypair._Myval2._Myval2._Myhead;
  Parent = Myhead->_Parent;
  v7 = Myhead;
  while ( !Parent->_Isnil )
  {
    if ( Parent->_Myval.first >= id )
    {
      v7 = Parent;
      Parent = Parent->_Left;
    }
    else
    {
      Parent = Parent->_Right;
    }
  }
  if ( v7 == Myhead || id < v7->_Myval.first )
    v7 = this->m_controllerUserPairings._Mypair._Myval2._Myval2._Myhead;
  if ( v7 == Myhead )
    second = -1i64;
  else
    second = v7->_Myval.second;
  LeaveCriticalSection((LPCRITICAL_SECTION)p_m_mutex);
  return second;
}

AgString *__fastcall AgInputManager::getPhysicalKeyName(
        AgInputManager *this,
        AgString *result,
        unsigned __int16 __formal)
{
  AgString::AgString(result, &pnewText, -1);
  return result;
}

__int64 __fastcall AgInputManager::getRealKey(AgInputManager *this, int button)
{
  return (unsigned int)button;
}

AgControllerUID __fastcall AgController::getUID(AgController *this, _QWORD *a2)
{
  *a2 = 0i64;
  return (AgControllerUID)a2;
}

__int64 __fastcall AgInputManager::getUniqueControllerId(AgInputManager *this)
{
  unsigned int m_nextControllerId; // edi
  AgController *m_ptr; // r12
  AgController *v4; // r14
  AgReferenceCount *m_ref; // rbx
  int v6; // ebp
  AgPointer<AgController> result; // [rsp+28h] [rbp-40h] BYREF

  m_nextControllerId = this->m_nextControllerId;
  for ( this->m_nextControllerId = m_nextControllerId + 1; ; this->m_nextControllerId = m_nextControllerId + 1 )
  {
    m_ptr = AgInputManager::getController(this, &result, m_nextControllerId)->m_ptr;
    v4 = result.m_ptr;
    result.m_ptr = 0i64;
    m_ref = result.m_ref;
    if ( result.m_ref )
    {
      result.m_ref = 0i64;
      v6 = 0;
      if ( !AgAtomicDecrement(&m_ref->m_strongCount) )
      {
        if ( !AgAtomicDecrement(&m_ref->m_weakCount) )
          v6 = 1;
        m_ref->m_data = 0i64;
        if ( v4 )
          ((void (__fastcall *)(AgController *, __int64))v4->~AgController)(v4, 1i64);
        if ( v6 )
          AgReferenceCount::operator delete(m_ref);
      }
    }
    if ( !m_ptr )
      break;
    m_nextControllerId = this->m_nextControllerId;
  }
  return m_nextControllerId;
}

_BOOL8 __fastcall AgInputManager::isKeyLastUsedIgnored(AgInputManager *this, AgKeyboardButton key)
{
  AgKeyboardButton *Mylast; // r8
  AgKeyboardButton *Myfirst; // r9
  __int64 v4; // rcx

  Mylast = this->m_ignoredLastUsed._Mypair._Myval2._Mylast;
  Myfirst = this->m_ignoredLastUsed._Mypair._Myval2._Myfirst;
  v4 = Mylast - Myfirst;
  while ( v4 > 0 )
  {
    if ( Myfirst[v4 / 2] >= key )
    {
      v4 /= 2i64;
    }
    else
    {
      Myfirst += v4 / 2 + 1;
      v4 += -1 - v4 / 2;
    }
  }
  if ( Myfirst == Mylast || key < *Myfirst )
    Myfirst = Mylast;
  return Myfirst != Mylast;
}

__int64 __fastcall AgInputManager::onSingletonExit(AgInputManager *this)
{
  AgSingleton<AgSystemManager> *v1; // rbx
  AgDelegate1<AgSuspendingEvent const &,void> v4; // [rsp+20h] [rbp-18h] BYREF

  v1 = AgSingleton<AgSystemManager>::ms_instance;
  v4.m_Closure.m_pthis = (detail::GenericClass *)this;
  v4.m_Closure.m_pFunction = (void (__fastcall *)(detail::GenericClass *)) AgInputManager::`vcall'{56,{flat}};
  AgEventDispatcherBase<AgSuspendingEvent>::unbind(
    (AgEventDispatcherBase<AgSuspendingEvent> *)&AgSingleton<AgSystemManager>::ms_instance[33],
    &v4);
  v4.m_Closure.m_pthis = (detail::GenericClass *)this;
  v4.m_Closure.m_pFunction = (void (__fastcall *)(detail::GenericClass *)) AgInputManager::`vcall'{64,{flat}};
  AgEventDispatcherBase<AgResumingEvent>::unbind(
    (AgEventDispatcherBase<AgResumingEvent> *)&v1[49],
    (AgDelegate1<AgResumingEvent const &,void> *)&v4);
  return 1i64;
}

__int64 __fastcall AgInputManager::onSingletonInit(AgInputManager *this)
{
  AgSingleton<AgSystemManager> *v2; // rdi
  AgSingleton<AgSystemManager> *v3; // rbx
  std::map<AgStringKey,AgControllerComponentIndex> *p_m_componentLookup; // rdi
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *Myhead; // rbx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *Parent; // rsi
  unsigned __int64 v7; // rdx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *_Newnode; // rax
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *Ptr; // rbx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v10; // rsi
  unsigned __int64 v11; // rdx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v12; // rax
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v13; // rbx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v14; // rsi
  unsigned __int64 v15; // rdx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v16; // rax
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v17; // rbx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v18; // rsi
  unsigned __int64 v19; // rdx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v20; // rax
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v21; // rbx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v22; // rsi
  unsigned __int64 v23; // rdx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v24; // rax
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v25; // rbx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v26; // rsi
  unsigned __int64 v27; // rdx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v28; // rax
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v29; // rbx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v30; // rsi
  unsigned __int64 v31; // rdx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v32; // rax
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v33; // rbx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v34; // rsi
  unsigned __int64 v35; // rdx
  std::_Tree_node<std::pair<AgStringKey const ,AgControllerComponentIndex>,void *> *v36; // rax
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rdx
  unsigned __int64 Ptr_low; // rdx
  AgStringKey v57; // [rsp+48h] [rbp-11h] BYREF
  AgDelegate1<AgSuspendingEvent const &,void> _Val; // [rsp+68h] [rbp+Fh] BYREF
  AgStringRef s2; // [rsp+78h] [rbp+1Fh] BYREF
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > > result; // [rsp+C0h] [rbp+67h] BYREF
  AgControllerComponentIndex v61; // [rsp+C8h] [rbp+6Fh]
  std::tuple<AgStringKey &&> v62; // [rsp+D0h] [rbp+77h] BYREF

  v2 = AgSingleton<AgSystemManager>::ms_instance;
  v3 = AgSingleton<AgSystemManager>::ms_instance + 33;
  _Val.m_Closure.m_pFunction = (void (__fastcall *)(detail::GenericClass *)) AgInputManager::`vcall'{56,{flat}};
  _Val.m_Closure.m_pthis = (detail::GenericClass *)this;
  EnterCriticalSection((LPCRITICAL_SECTION)&AgSingleton<AgSystemManager>::ms_instance[33]);
  std::vector<AgDelegate1<AgSuspendingEvent const &,void>>::push_back(
    (std::vector<AgDelegate1<AgSuspendingEvent const &,void>> *)&v3[5],
    &_Val);
  LeaveCriticalSection((LPCRITICAL_SECTION)v3);
  _Val.m_Closure.m_pFunction = (void (__fastcall *)(detail::GenericClass *)) AgInputManager::`vcall'{64,{flat}};
  _Val.m_Closure.m_pthis = (detail::GenericClass *)this;
  v57.m_string.m_text = (char *)&v2[49];
  EnterCriticalSection((LPCRITICAL_SECTION)&v2[49]);
  std::vector<AgDelegate1<AgResumingEvent const &,void>>::push_back(
    (std::vector<AgDelegate1<AgResumingEvent const &,void>> *)&v2[54],
    (const AgDelegate1<AgResumingEvent const &,void> *)&_Val);
  LeaveCriticalSection((LPCRITICAL_SECTION)&v2[49]);
  v57.m_string.m_length = 0;
  AgString::AgString((AgString *)&_Val);
  AgStringRef::AgStringRef(&s2, "DPad Up", 7u);
  v61 = (AgControllerComponentIndex)1;
  p_m_componentLookup = &this->m_componentLookup;
  Myhead = this->m_componentLookup._Mypair._Myval2._Myval2._Myhead;
  Parent = Myhead->_Parent;
  while ( !Parent->_Isnil )
  {
    if ( operator<(&Parent->_Myval.first.m_stringRef, &s2) )
    {
      Parent = Parent->_Right;
    }
    else
    {
      Myhead = Parent;
      Parent = Parent->_Left;
    }
  }
  if ( Myhead == p_m_componentLookup->_Mypair._Myval2._Myval2._Myhead
    || operator<(&s2, &Myhead->_Myval.first.m_stringRef) )
  {
    v62._Myfirst._Val = (AgStringKey *)&_Val;
    _Newnode = std::_Tree_comp_alloc<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgStringKey &&>,std::tuple<>>(
                 p_m_componentLookup,
                 &std::piecewise_construct,
                 &v62,
                 (std::tuple<> *)&result);
    std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Insert_hint<std::pair<AgStringKey const,AgControllerComponentIndex> &,std::_Tree_node<std::pair<AgStringKey const,AgControllerComponentIndex>,void *> *>(
      p_m_componentLookup,
      &result,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >)Myhead,
      &_Newnode->_Myval,
      _Newnode);
    Myhead = result._Ptr;
  }
  Myhead->_Myval.second = v61;
  AgString::~AgString((AgString *)&_Val, v7);
  AgString::AgString((AgString *)&_Val);
  AgStringRef::AgStringRef(&s2, "DPad Down", 9u);
  v61 = (AgControllerComponentIndex)257;
  Ptr = p_m_componentLookup->_Mypair._Myval2._Myval2._Myhead;
  v10 = p_m_componentLookup->_Mypair._Myval2._Myval2._Myhead->_Parent;
  while ( !v10->_Isnil )
  {
    if ( operator<(&v10->_Myval.first.m_stringRef, &s2) )
    {
      v10 = v10->_Right;
    }
    else
    {
      Ptr = v10;
      v10 = v10->_Left;
    }
  }
  if ( Ptr == p_m_componentLookup->_Mypair._Myval2._Myval2._Myhead || operator<(&s2, &Ptr->_Myval.first.m_stringRef) )
  {
    v62._Myfirst._Val = (AgStringKey *)&_Val;
    v12 = std::_Tree_comp_alloc<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgStringKey &&>,std::tuple<>>(
            p_m_componentLookup,
            &std::piecewise_construct,
            &v62,
            (std::tuple<> *)&result);
    std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Insert_hint<std::pair<AgStringKey const,AgControllerComponentIndex> &,std::_Tree_node<std::pair<AgStringKey const,AgControllerComponentIndex>,void *> *>(
      p_m_componentLookup,
      &result,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >)Ptr,
      &v12->_Myval,
      v12);
    Ptr = result._Ptr;
  }
  Ptr->_Myval.second = v61;
  AgString::~AgString((AgString *)&_Val, v11);
  AgString::AgString((AgString *)&_Val);
  AgStringRef::AgStringRef(&s2, "DPad Left", 9u);
  v61 = (AgControllerComponentIndex)513;
  v13 = p_m_componentLookup->_Mypair._Myval2._Myval2._Myhead;
  v14 = p_m_componentLookup->_Mypair._Myval2._Myval2._Myhead->_Parent;
  while ( !v14->_Isnil )
  {
    if ( operator<(&v14->_Myval.first.m_stringRef, &s2) )
    {
      v14 = v14->_Right;
    }
    else
    {
      v13 = v14;
      v14 = v14->_Left;
    }
  }
  if ( v13 == p_m_componentLookup->_Mypair._Myval2._Myval2._Myhead || operator<(&s2, &v13->_Myval.first.m_stringRef) )
  {
    v62._Myfirst._Val = (AgStringKey *)&_Val;
    v16 = std::_Tree_comp_alloc<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgStringKey &&>,std::tuple<>>(
            p_m_componentLookup,
            &std::piecewise_construct,
            &v62,
            (std::tuple<> *)&result);
    std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Insert_hint<std::pair<AgStringKey const,AgControllerComponentIndex> &,std::_Tree_node<std::pair<AgStringKey const,AgControllerComponentIndex>,void *> *>(
      p_m_componentLookup,
      &result,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >)v13,
      &v16->_Myval,
      v16);
    v13 = result._Ptr;
  }
  v13->_Myval.second = v61;
  AgString::~AgString((AgString *)&_Val, v15);
  AgString::AgString((AgString *)&_Val);
  AgStringRef::AgStringRef(&s2, "DPad Right", 0xAu);
  v61 = (AgControllerComponentIndex)769;
  v17 = p_m_componentLookup->_Mypair._Myval2._Myval2._Myhead;
  v18 = p_m_componentLookup->_Mypair._Myval2._Myval2._Myhead->_Parent;
  while ( !v18->_Isnil )
  {
    if ( operator<(&v18->_Myval.first.m_stringRef, &s2) )
    {
      v18 = v18->_Right;
    }
    else
    {
      v17 = v18;
      v18 = v18->_Left;
    }
  }
  if ( v17 == p_m_componentLookup->_Mypair._Myval2._Myval2._Myhead || operator<(&s2, &v17->_Myval.first.m_stringRef) )
  {
    v62._Myfirst._Val = (AgStringKey *)&_Val;
    v20 = std::_Tree_comp_alloc<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgStringKey &&>,std::tuple<>>(
            p_m_componentLookup,
            &std::piecewise_construct,
            &v62,
            (std::tuple<> *)&result);
    std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Insert_hint<std::pair<AgStringKey const,AgControllerComponentIndex> &,std::_Tree_node<std::pair<AgStringKey const,AgControllerComponentIndex>,void *> *>(
      p_m_componentLookup,
      &result,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >)v17,
      &v20->_Myval,
      v20);
    v17 = result._Ptr;
  }
  v17->_Myval.second = v61;
  AgString::~AgString((AgString *)&_Val, v19);
  AgString::AgString((AgString *)&_Val);
  AgStringRef::AgStringRef(&s2, "Start", 5u);
  v61 = (AgControllerComponentIndex)3073;
  v21 = p_m_componentLookup->_Mypair._Myval2._Myval2._Myhead;
  v22 = p_m_componentLookup->_Mypair._Myval2._Myval2._Myhead->_Parent;
  while ( !v22->_Isnil )
  {
    if ( operator<(&v22->_Myval.first.m_stringRef, &s2) )
    {
      v22 = v22->_Right;
    }
    else
    {
      v21 = v22;
      v22 = v22->_Left;
    }
  }
  if ( v21 == p_m_componentLookup->_Mypair._Myval2._Myval2._Myhead || operator<(&s2, &v21->_Myval.first.m_stringRef) )
  {
    v62._Myfirst._Val = (AgStringKey *)&_Val;
    v24 = std::_Tree_comp_alloc<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgStringKey &&>,std::tuple<>>(
            p_m_componentLookup,
            &std::piecewise_construct,
            &v62,
            (std::tuple<> *)&result);
    std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Insert_hint<std::pair<AgStringKey const,AgControllerComponentIndex> &,std::_Tree_node<std::pair<AgStringKey const,AgControllerComponentIndex>,void *> *>(
      p_m_componentLookup,
      &result,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >)v21,
      &v24->_Myval,
      v24);
    v21 = result._Ptr;
  }
  v21->_Myval.second = v61;
  AgString::~AgString((AgString *)&_Val, v23);
  AgString::AgString((AgString *)&_Val);
  AgStringRef::AgStringRef(&s2, "Menu", 4u);
  v61 = (AgControllerComponentIndex)3073;
  v25 = p_m_componentLookup->_Mypair._Myval2._Myval2._Myhead;
  v26 = p_m_componentLookup->_Mypair._Myval2._Myval2._Myhead->_Parent;
  while ( !v26->_Isnil )
  {
    if ( operator<(&v26->_Myval.first.m_stringRef, &s2) )
    {
      v26 = v26->_Right;
    }
    else
    {
      v25 = v26;
      v26 = v26->_Left;
    }
  }
  if ( v25 == p_m_componentLookup->_Mypair._Myval2._Myval2._Myhead || operator<(&s2, &v25->_Myval.first.m_stringRef) )
  {
    v62._Myfirst._Val = (AgStringKey *)&_Val;
    v28 = std::_Tree_comp_alloc<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgStringKey &&>,std::tuple<>>(
            p_m_componentLookup,
            &std::piecewise_construct,
            &v62,
            (std::tuple<> *)&result);
    std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Insert_hint<std::pair<AgStringKey const,AgControllerComponentIndex> &,std::_Tree_node<std::pair<AgStringKey const,AgControllerComponentIndex>,void *> *>(
      p_m_componentLookup,
      &result,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >)v25,
      &v28->_Myval,
      v28);
    v25 = result._Ptr;
  }
  v25->_Myval.second = v61;
  AgString::~AgString((AgString *)&_Val, v27);
  AgString::AgString((AgString *)&_Val);
  AgStringRef::AgStringRef(&s2, "Back", 4u);
  v61 = (AgControllerComponentIndex)3329;
  v29 = p_m_componentLookup->_Mypair._Myval2._Myval2._Myhead;
  v30 = p_m_componentLookup->_Mypair._Myval2._Myval2._Myhead->_Parent;
  while ( !v30->_Isnil )
  {
    if ( operator<(&v30->_Myval.first.m_stringRef, &s2) )
    {
      v30 = v30->_Right;
    }
    else
    {
      v29 = v30;
      v30 = v30->_Left;
    }
  }
  if ( v29 == p_m_componentLookup->_Mypair._Myval2._Myval2._Myhead || operator<(&s2, &v29->_Myval.first.m_stringRef) )
  {
    v62._Myfirst._Val = (AgStringKey *)&_Val;
    v32 = std::_Tree_comp_alloc<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgStringKey &&>,std::tuple<>>(
            p_m_componentLookup,
            &std::piecewise_construct,
            &v62,
            (std::tuple<> *)&result);
    std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Insert_hint<std::pair<AgStringKey const,AgControllerComponentIndex> &,std::_Tree_node<std::pair<AgStringKey const,AgControllerComponentIndex>,void *> *>(
      p_m_componentLookup,
      &result,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >)v29,
      &v32->_Myval,
      v32);
    v29 = result._Ptr;
  }
  v29->_Myval.second = v61;
  AgString::~AgString((AgString *)&_Val, v31);
  AgString::AgString((AgString *)&_Val);
  AgStringRef::AgStringRef(&s2, "View", 4u);
  v61 = (AgControllerComponentIndex)3329;
  v33 = p_m_componentLookup->_Mypair._Myval2._Myval2._Myhead;
  v34 = p_m_componentLookup->_Mypair._Myval2._Myval2._Myhead->_Parent;
  while ( !v34->_Isnil )
  {
    if ( operator<(&v34->_Myval.first.m_stringRef, &s2) )
    {
      v34 = v34->_Right;
    }
    else
    {
      v33 = v34;
      v34 = v34->_Left;
    }
  }
  if ( v33 == p_m_componentLookup->_Mypair._Myval2._Myval2._Myhead || operator<(&s2, &v33->_Myval.first.m_stringRef) )
  {
    v62._Myfirst._Val = (AgStringKey *)&_Val;
    v36 = std::_Tree_comp_alloc<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgStringKey &&>,std::tuple<>>(
            p_m_componentLookup,
            &std::piecewise_construct,
            &v62,
            (std::tuple<> *)&result);
    std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const,AgControllerComponentIndex>>,0>>::_Insert_hint<std::pair<AgStringKey const,AgControllerComponentIndex> &,std::_Tree_node<std::pair<AgStringKey const,AgControllerComponentIndex>,void *> *>(
      p_m_componentLookup,
      &result,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >)v33,
      &v36->_Myval,
      v36);
    v33 = result._Ptr;
  }
  v33->_Myval.second = v61;
  AgString::~AgString((AgString *)&_Val, v35);
  AgString::AgString(&v57.m_string);
  AgStringRef::AgStringRef(&v57.m_stringRef, "Select", 6u);
  LOWORD(result._Ptr) = 3329;
  std::map<AgStringKey,AgControllerComponentIndex>::_Try_emplace<AgStringKey,>(
    p_m_componentLookup,
    (std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >,bool> *)&_Val,
    &v57);
  *(_WORD *)&_Val.m_Closure.m_pthis[64] = result._Ptr;
  AgString::~AgString(&v57.m_string, v37);
  AgString::AgString(&v57.m_string);
  AgStringRef::AgStringRef(&v57.m_stringRef, "Stick Left", 0xAu);
  LOWORD(result._Ptr) = 2561;
  std::map<AgStringKey,AgControllerComponentIndex>::_Try_emplace<AgStringKey,>(
    p_m_componentLookup,
    (std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >,bool> *)&_Val,
    &v57);
  *(_WORD *)&_Val.m_Closure.m_pthis[64] = result._Ptr;
  AgString::~AgString(&v57.m_string, v38);
  AgString::AgString(&v57.m_string);
  AgStringRef::AgStringRef(&v57.m_stringRef, "Stick Right", 0xBu);
  LOWORD(result._Ptr) = 2817;
  std::map<AgStringKey,AgControllerComponentIndex>::_Try_emplace<AgStringKey,>(
    p_m_componentLookup,
    (std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >,bool> *)&_Val,
    &v57);
  *(_WORD *)&_Val.m_Closure.m_pthis[64] = result._Ptr;
  AgString::~AgString(&v57.m_string, v39);
  AgString::AgString(&v57.m_string);
  AgStringRef::AgStringRef(&v57.m_stringRef, "Bumper Left", 0xBu);
  LOWORD(result._Ptr) = 2049;
  std::map<AgStringKey,AgControllerComponentIndex>::_Try_emplace<AgStringKey,>(
    p_m_componentLookup,
    (std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >,bool> *)&_Val,
    &v57);
  *(_WORD *)&_Val.m_Closure.m_pthis[64] = result._Ptr;
  AgString::~AgString(&v57.m_string, v40);
  AgString::AgString(&v57.m_string);
  AgStringRef::AgStringRef(&v57.m_stringRef, "Bumper Right", 0xCu);
  LOWORD(result._Ptr) = 2305;
  std::map<AgStringKey,AgControllerComponentIndex>::_Try_emplace<AgStringKey,>(
    p_m_componentLookup,
    (std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >,bool> *)&_Val,
    &v57);
  *(_WORD *)&_Val.m_Closure.m_pthis[64] = result._Ptr;
  AgString::~AgString(&v57.m_string, v41);
  AgString::AgString(&v57.m_string);
  AgStringRef::AgStringRef(&v57.m_stringRef, "A", 1u);
  LOWORD(result._Ptr) = 1025;
  std::map<AgStringKey,AgControllerComponentIndex>::_Try_emplace<AgStringKey,>(
    p_m_componentLookup,
    (std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >,bool> *)&_Val,
    &v57);
  *(_WORD *)&_Val.m_Closure.m_pthis[64] = result._Ptr;
  AgString::~AgString(&v57.m_string, v42);
  AgString::AgString(&v57.m_string);
  AgStringRef::AgStringRef(&v57.m_stringRef, "Cross", 5u);
  LOWORD(result._Ptr) = 1025;
  std::map<AgStringKey,AgControllerComponentIndex>::_Try_emplace<AgStringKey,>(
    p_m_componentLookup,
    (std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >,bool> *)&_Val,
    &v57);
  *(_WORD *)&_Val.m_Closure.m_pthis[64] = result._Ptr;
  AgString::~AgString(&v57.m_string, v43);
  AgString::AgString(&v57.m_string);
  AgStringRef::AgStringRef(&v57.m_stringRef, "B", 1u);
  LOWORD(result._Ptr) = 1281;
  std::map<AgStringKey,AgControllerComponentIndex>::_Try_emplace<AgStringKey,>(
    p_m_componentLookup,
    (std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >,bool> *)&_Val,
    &v57);
  *(_WORD *)&_Val.m_Closure.m_pthis[64] = result._Ptr;
  AgString::~AgString(&v57.m_string, v44);
  AgString::AgString(&v57.m_string);
  AgStringRef::AgStringRef(&v57.m_stringRef, "Circle", 6u);
  LOWORD(result._Ptr) = 1281;
  std::map<AgStringKey,AgControllerComponentIndex>::_Try_emplace<AgStringKey,>(
    p_m_componentLookup,
    (std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >,bool> *)&_Val,
    &v57);
  *(_WORD *)&_Val.m_Closure.m_pthis[64] = result._Ptr;
  AgString::~AgString(&v57.m_string, v45);
  AgString::AgString(&v57.m_string);
  AgStringRef::AgStringRef(&v57.m_stringRef, "X", 1u);
  LOWORD(result._Ptr) = 1537;
  std::map<AgStringKey,AgControllerComponentIndex>::_Try_emplace<AgStringKey,>(
    p_m_componentLookup,
    (std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >,bool> *)&_Val,
    &v57);
  *(_WORD *)&_Val.m_Closure.m_pthis[64] = result._Ptr;
  AgString::~AgString(&v57.m_string, v46);
  AgString::AgString(&v57.m_string);
  AgStringRef::AgStringRef(&v57.m_stringRef, "Square", 6u);
  LOWORD(result._Ptr) = 1537;
  std::map<AgStringKey,AgControllerComponentIndex>::_Try_emplace<AgStringKey,>(
    p_m_componentLookup,
    (std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >,bool> *)&_Val,
    &v57);
  *(_WORD *)&_Val.m_Closure.m_pthis[64] = result._Ptr;
  AgString::~AgString(&v57.m_string, v47);
  AgString::AgString(&v57.m_string);
  AgStringRef::AgStringRef(&v57.m_stringRef, "Y", 1u);
  LOWORD(result._Ptr) = 1793;
  std::map<AgStringKey,AgControllerComponentIndex>::_Try_emplace<AgStringKey,>(
    p_m_componentLookup,
    (std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >,bool> *)&_Val,
    &v57);
  *(_WORD *)&_Val.m_Closure.m_pthis[64] = result._Ptr;
  AgString::~AgString(&v57.m_string, v48);
  AgString::AgString(&v57.m_string);
  AgStringRef::AgStringRef(&v57.m_stringRef, "Triangle", 8u);
  LOWORD(result._Ptr) = 1793;
  std::map<AgStringKey,AgControllerComponentIndex>::_Try_emplace<AgStringKey,>(
    p_m_componentLookup,
    (std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >,bool> *)&_Val,
    &v57);
  *(_WORD *)&_Val.m_Closure.m_pthis[64] = result._Ptr;
  AgString::~AgString(&v57.m_string, v49);
  AgString::AgString(&v57.m_string);
  AgStringRef::AgStringRef(&v57.m_stringRef, "Stick Left Horizontal", 0x15u);
  LOWORD(result._Ptr) = 1026;
  std::map<AgStringKey,AgControllerComponentIndex>::_Try_emplace<AgStringKey,>(
    p_m_componentLookup,
    (std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >,bool> *)&_Val,
    &v57);
  *(_WORD *)&_Val.m_Closure.m_pthis[64] = result._Ptr;
  AgString::~AgString(&v57.m_string, v50);
  AgString::AgString(&v57.m_string);
  AgStringRef::AgStringRef(&v57.m_stringRef, "Stick Left Vertical", 0x13u);
  LOWORD(result._Ptr) = 1282;
  std::map<AgStringKey,AgControllerComponentIndex>::_Try_emplace<AgStringKey,>(
    p_m_componentLookup,
    (std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >,bool> *)&_Val,
    &v57);
  *(_WORD *)&_Val.m_Closure.m_pthis[64] = result._Ptr;
  AgString::~AgString(&v57.m_string, v51);
  AgString::AgString(&v57.m_string);
  AgStringRef::AgStringRef(&v57.m_stringRef, "Trigger Left", 0xCu);
  LOWORD(result._Ptr) = 1538;
  std::map<AgStringKey,AgControllerComponentIndex>::_Try_emplace<AgStringKey,>(
    p_m_componentLookup,
    (std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >,bool> *)&_Val,
    &v57);
  *(_WORD *)&_Val.m_Closure.m_pthis[64] = result._Ptr;
  AgString::~AgString(&v57.m_string, v52);
  AgString::AgString(&v57.m_string);
  AgStringRef::AgStringRef(&v57.m_stringRef, "Stick Right Horizontal", 0x16u);
  LOWORD(result._Ptr) = 1794;
  std::map<AgStringKey,AgControllerComponentIndex>::_Try_emplace<AgStringKey,>(
    p_m_componentLookup,
    (std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >,bool> *)&_Val,
    &v57);
  *(_WORD *)&_Val.m_Closure.m_pthis[64] = result._Ptr;
  AgString::~AgString(&v57.m_string, v53);
  AgString::AgString(&v57.m_string);
  AgStringRef::AgStringRef(&v57.m_stringRef, "Stick Right Vertical", 0x14u);
  LOWORD(result._Ptr) = 2050;
  std::map<AgStringKey,AgControllerComponentIndex>::_Try_emplace<AgStringKey,>(
    p_m_componentLookup,
    (std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >,bool> *)&_Val,
    &v57);
  *(_WORD *)&_Val.m_Closure.m_pthis[64] = result._Ptr;
  AgString::~AgString(&v57.m_string, v54);
  AgString::AgString(&v57.m_string);
  AgStringRef::AgStringRef(&v57.m_stringRef, "Trigger Right", 0xDu);
  LOWORD(result._Ptr) = 2306;
  std::map<AgStringKey,AgControllerComponentIndex>::_Try_emplace<AgStringKey,>(
    p_m_componentLookup,
    (std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringKey const ,AgControllerComponentIndex> > > >,bool> *)&_Val,
    &v57);
  Ptr_low = LOWORD(result._Ptr);
  *(_WORD *)&_Val.m_Closure.m_pthis[64] = result._Ptr;
  AgString::~AgString(&v57.m_string, Ptr_low);
  return 1i64;
}

void __fastcall AgInputManager::postUpdate(AgInputManager *this)
{
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Myhead; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Left; // rbx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Right; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *j; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *i; // rax

  Myhead = this->m_controllers._Mypair._Myval2._Myval2._Myhead;
  Left = Myhead->_Left;
  if ( Myhead->_Left != Myhead )
  {
    do
    {
      Left->_Myval.second.m_ptr->postUpdate(Left->_Myval.second.m_ptr);
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
    }
    while ( Left != this->m_controllers._Mypair._Myval2._Myval2._Myhead );
  }
}

void __fastcall std::vector<AgControllerAddedEvent>::push_back(
        std::vector<AgControllerAddedEvent> *this,
        const AgControllerAddedEvent *_Val)
{
  AgControllerAddedEvent *Mylast; // rcx
  signed __int64 v5; // rsi
  AgPointer<AgPlayer> *v6; // rdi
  const AgPointer<AgPlayer> *v7; // rsi
  AgPointer<AgPlayer> *v8; // rdi

  Mylast = this->_Mypair._Myval2._Mylast;
  if ( _Val >= Mylast || this->_Mypair._Myval2._Myfirst > _Val )
  {
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<AgControllerAddedEvent>::_Reserve(this, 1ui64);
    v8 = (AgPointer<AgPlayer> *)this->_Mypair._Myval2._Mylast;
    if ( v8 )
    {
      AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(v8, (const AgPointer<AgPlayer> *)_Val);
      v8[1].m_ref = (AgReferenceCount *)_Val->pairedId;
    }
  }
  else
  {
    v5 = _Val - this->_Mypair._Myval2._Myfirst;
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<AgControllerAddedEvent>::_Reserve(this, 1ui64);
    v6 = (AgPointer<AgPlayer> *)this->_Mypair._Myval2._Mylast;
    v7 = (const AgPointer<AgPlayer> *)&this->_Mypair._Myval2._Myfirst[v5];
    if ( v6 )
    {
      AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(v6, v7);
      v6[1].m_ref = v7[1].m_ref;
    }
  }
  ++this->_Mypair._Myval2._Mylast;
}

void __fastcall std::vector<AgControllerRemovedEvent>::push_back(
        std::vector<AgControllerRemovedEvent> *this,
        const AgControllerRemovedEvent *_Val)
{
  AgControllerRemovedEvent *Mylast; // rcx
  signed __int64 v5; // rsi
  AgPointer<AgPlayer> *v6; // rdi
  const AgPointer<AgPlayer> *v7; // rsi
  AgPointer<AgPlayer> *v8; // rdi

  Mylast = this->_Mypair._Myval2._Mylast;
  if ( _Val >= Mylast || this->_Mypair._Myval2._Myfirst > _Val )
  {
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<AgControllerRemovedEvent>::_Reserve(this, 1ui64);
    v8 = (AgPointer<AgPlayer> *)this->_Mypair._Myval2._Mylast;
    if ( v8 )
    {
      AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(v8, (const AgPointer<AgPlayer> *)_Val);
      v8[1].m_ref = (AgReferenceCount *)_Val->pairedId;
    }
  }
  else
  {
    v5 = _Val - this->_Mypair._Myval2._Myfirst;
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<AgControllerRemovedEvent>::_Reserve(this, 1ui64);
    v6 = (AgPointer<AgPlayer> *)this->_Mypair._Myval2._Mylast;
    v7 = (const AgPointer<AgPlayer> *)&this->_Mypair._Myval2._Myfirst[v5];
    if ( v6 )
    {
      AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(v6, v7);
      v6[1].m_ref = v7[1].m_ref;
    }
  }
  ++this->_Mypair._Myval2._Mylast;
}

void __fastcall std::vector<AgDelegate1<AgResumingEvent const &,void>>::push_back(
        std::vector<AgDelegate1<AgResumingEvent const &,void>> *this,
        const AgDelegate1<AgResumingEvent const &,void> *_Val)
{
  AgDelegate1<AgResumingEvent const &,void> *Mylast; // rax
  AgDelegate1<AgResumingEvent const &,void> *Myfirst; // rcx
  signed __int64 v6; // rdi
  AgDelegate1<AgResumingEvent const &,void> *v7; // rcx
  detail::GenericClass **v8; // rdi
  AgDelegate1<AgResumingEvent const &,void> *v9; // rcx

  Mylast = this->_Mypair._Myval2._Mylast;
  if ( _Val >= Mylast || (Myfirst = this->_Mypair._Myval2._Myfirst, Myfirst > _Val) )
  {
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<AgDelegate1<AgResumingEvent const &,void>>::_Reserve(this, 1ui64);
    v9 = this->_Mypair._Myval2._Mylast;
    if ( v9 )
    {
      v9->m_Closure.m_pthis = 0i64;
      v9->m_Closure.m_pFunction = 0i64;
      v9->m_Closure.m_pFunction = _Val->m_Closure.m_pFunction;
      v9->m_Closure.m_pthis = _Val->m_Closure.m_pthis;
    }
  }
  else
  {
    v6 = (char *)_Val - (char *)Myfirst;
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<AgDelegate1<AgResumingEvent const &,void>>::_Reserve(this, 1ui64);
    v7 = this->_Mypair._Myval2._Mylast;
    v8 = (detail::GenericClass **)((char *)&this->_Mypair._Myval2._Myfirst->m_Closure.m_pthis
                                 + (v6 & 0xFFFFFFFFFFFFFFF0ui64));
    if ( v7 )
    {
      v7->m_Closure.m_pthis = 0i64;
      v7->m_Closure.m_pFunction = 0i64;
      v7->m_Closure.m_pFunction = (void (__fastcall *)(detail::GenericClass *))v8[1];
      v7->m_Closure.m_pthis = *v8;
    }
  }
  ++this->_Mypair._Myval2._Mylast;
}

void __fastcall std::vector<AgDelegate1<AgSuspendingEvent const &,void>>::push_back(
        std::vector<AgDelegate1<AgSuspendingEvent const &,void>> *this,
        const AgDelegate1<AgSuspendingEvent const &,void> *_Val)
{
  AgDelegate1<AgSuspendingEvent const &,void> *Mylast; // rax
  AgDelegate1<AgSuspendingEvent const &,void> *Myfirst; // rcx
  signed __int64 v6; // rdi
  AgDelegate1<AgSuspendingEvent const &,void> *v7; // rcx
  detail::GenericClass **v8; // rdi
  AgDelegate1<AgSuspendingEvent const &,void> *v9; // rcx

  Mylast = this->_Mypair._Myval2._Mylast;
  if ( _Val >= Mylast || (Myfirst = this->_Mypair._Myval2._Myfirst, Myfirst > _Val) )
  {
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<AgDelegate1<AgSuspendingEvent const &,void>>::_Reserve(this, 1ui64);
    v9 = this->_Mypair._Myval2._Mylast;
    if ( v9 )
    {
      v9->m_Closure.m_pthis = 0i64;
      v9->m_Closure.m_pFunction = 0i64;
      v9->m_Closure.m_pFunction = _Val->m_Closure.m_pFunction;
      v9->m_Closure.m_pthis = _Val->m_Closure.m_pthis;
    }
  }
  else
  {
    v6 = (char *)_Val - (char *)Myfirst;
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<AgDelegate1<AgSuspendingEvent const &,void>>::_Reserve(this, 1ui64);
    v7 = this->_Mypair._Myval2._Mylast;
    v8 = (detail::GenericClass **)((char *)&this->_Mypair._Myval2._Myfirst->m_Closure.m_pthis
                                 + (v6 & 0xFFFFFFFFFFFFFFF0ui64));
    if ( v7 )
    {
      v7->m_Closure.m_pthis = 0i64;
      v7->m_Closure.m_pFunction = 0i64;
      v7->m_Closure.m_pFunction = (void (__fastcall *)(detail::GenericClass *))v8[1];
      v7->m_Closure.m_pthis = *v8;
    }
  }
  ++this->_Mypair._Myval2._Mylast;
}

void __fastcall std::vector<AgPointer<AgController>>::push_back(
        std::vector<AgPointer<AgController>> *this,
        const AgPointer<AgController> *_Val)
{
  AgPointer<AgController> *Mylast; // rax
  AgPointer<AgController> *Myfirst; // rcx
  signed __int64 v6; // rdi
  AgPointer<AgController> *v7; // rcx
  const AgPointer<AgPlayer> *v8; // rdi
  AgPointer<AgController> *v9; // rcx

  Mylast = this->_Mypair._Myval2._Mylast;
  if ( _Val >= Mylast || (Myfirst = this->_Mypair._Myval2._Myfirst, Myfirst > _Val) )
  {
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<AgPointer<AgController>>::_Reserve(this, 1ui64);
    v9 = this->_Mypair._Myval2._Mylast;
    if ( v9 )
      AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(
        (AgPointer<AgPlayer> *)v9,
        (const AgPointer<AgPlayer> *)_Val);
  }
  else
  {
    v6 = (char *)_Val - (char *)Myfirst;
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<AgPointer<AgController>>::_Reserve(this, 1ui64);
    v7 = this->_Mypair._Myval2._Mylast;
    v8 = (const AgPointer<AgPlayer> *)((char *)this->_Mypair._Myval2._Myfirst + (v6 & 0xFFFFFFFFFFFFFFF0ui64));
    if ( v7 )
      AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>((AgPointer<AgPlayer> *)v7, v8);
  }
  ++this->_Mypair._Myval2._Mylast;
}

void __fastcall AgInputManager::removeController(AgInputManager *this, AgPointer<AgController> *controller)
{
  AgMutex *p_m_mutex; // r14
  __int64 first; // rsi
  std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *Myhead; // rax
  std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *Left; // rcx
  std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *Right; // rax
  std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *j; // rax
  std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *i; // rax
  AgControllerRemovedEvent v11[2]; // [rsp+48h] [rbp-40h] BYREF
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > > _Keyval; // [rsp+90h] [rbp+8h] BYREF
  AgPointer<AgController> *v13; // [rsp+98h] [rbp+10h]

  v13 = controller;
  p_m_mutex = &this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  first = -1i64;
  controller->m_ptr->m_connected = 0;
  LODWORD(_Keyval._Ptr) = controller->m_ptr->m_id;
  std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AgPointer<AgController>>>,0>>::erase(
    &this->m_controllers,
    (const unsigned int *)&_Keyval);
  LODWORD(_Keyval._Ptr) = controller->m_ptr->m_id;
  std::_Tree<std::_Tmap_traits<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,__int64>>,0>>::erase(
    &this->m_controllerUserPairings,
    (const unsigned int *)&_Keyval);
  Myhead = this->m_userControllerPairings._Mypair._Myval2._Myval2._Myhead;
  Left = Myhead->_Left;
  if ( Myhead->_Left != Myhead )
  {
    do
    {
      if ( Left->_Myval.second == controller->m_ptr->m_id )
      {
        first = Left->_Myval.first;
        Left = (std::_Tree_node<std::pair<__int64 const ,unsigned int>,void *> *)std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const,AgStandardTouchData>>,0>>::erase(
                                                                                   (std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *)&this->m_userControllerPairings,
                                                                                   &_Keyval,
                                                                                   (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_SDL_Joystick * const,__int64> > > >)Left)->_Ptr;
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
    while ( Left != this->m_userControllerPairings._Mypair._Myval2._Myval2._Myhead );
  }
  v11[0].AgControllerEvent = 0i64;
  AgPointer<AgController>::operator=(&v11[0].controller, controller);
  v11[0].pairedId = first;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->ControllerRemoved.m_queueMutex);
  std::vector<AgControllerRemovedEvent>::push_back(&this->ControllerRemoved.m_eventQueue, v11);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->ControllerRemoved.m_queueMutex);
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)v11);
  LeaveCriticalSection((LPCRITICAL_SECTION)p_m_mutex);
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)controller);
}

void __fastcall std::vector<unsigned int>::resize(
        std::vector<unsigned int> *this,
        unsigned __int64 _Newsize,
        const unsigned int *_Val)
{
  unsigned int *v3; // rsi
  unsigned int *Mylast; // rcx
  unsigned int *Myfirst; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rsi

  v3 = (unsigned int *)_Val;
  Mylast = this->_Mypair._Myval2._Mylast;
  Myfirst = this->_Mypair._Myval2._Myfirst;
  v8 = Mylast - this->_Mypair._Myval2._Myfirst;
  if ( v8 <= _Newsize )
  {
    if ( v8 < _Newsize )
    {
      if ( _Val >= Mylast || Myfirst > _Val )
      {
        std::vector<unsigned int>::_Reserve(this, _Newsize - v8);
      }
      else
      {
        v9 = _Val - Myfirst;
        std::vector<unsigned int>::_Reserve(this, _Newsize - v8);
        v3 = &this->_Mypair._Myval2._Myfirst[v9];
      }
      std::_Uninit_alloc_fill_n1<unsigned int *,unsigned __int64,std::allocator<unsigned int>>(
        this->_Mypair._Myval2._Mylast,
        _Newsize - (this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst),
        v3,
        (std::_Wrap_alloc<std::allocator<unsigned int> > *)this);
      this->_Mypair._Myval2._Mylast += _Newsize - (this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst);
    }
  }
  else
  {
    this->_Mypair._Myval2._Mylast = &Mylast[_Newsize - v8];
  }
}

void __fastcall std::vector<bool>::resize(std::vector<bool> *this, unsigned __int64 _Newsize, bool _Val)
{
  __int64 Mysize; // r8
  unsigned int *v5; // rcx
  unsigned int *Myfirst; // rsi
  unsigned __int128 v7; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int128 v8; // [rsp+40h] [rbp-20h] BYREF
  std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > v9; // [rsp+50h] [rbp-10h] BYREF
  bool v10; // [rsp+80h] [rbp+20h] BYREF

  v10 = _Val;
  Mysize = this->_Mysize;
  if ( _Newsize <= Mysize )
  {
    if ( _Newsize < Mysize )
    {
      Myfirst = this->_Myvec._Mypair._Myval2._Myfirst;
      v8 = (unsigned __int64)this->_Myvec._Mypair._Myval2._Myfirst;
      if ( Mysize )
      {
        if ( Mysize >= 0 )
          *(_QWORD *)&v8 = &Myfirst[(unsigned __int64)Mysize >> 5];
        else
          *(_QWORD *)&v8 = (char *)Myfirst - 4i64 - 4 * ((unsigned __int64)(-1 - Mysize) >> 5);
        *((_QWORD *)&v8 + 1) = Mysize & 0x1F;
      }
      v7 = (unsigned __int64)Myfirst;
      if ( (_Newsize & 0x8000000000000000ui64) == 0i64 )
        *(_QWORD *)&v7 = v7 + 4 * (_Newsize >> 5);
      else
        *(_QWORD *)&v7 = -4i64 - 4 * ((-1i64 - _Newsize) >> 5) + v7;
      *((_QWORD *)&v7 + 1) = _Newsize & 0x1F;
      std::vector<bool>::erase(
        this,
        &v9,
        (std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > *)&v7,
        (std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > *)&v8);
    }
  }
  else
  {
    v5 = this->_Myvec._Mypair._Myval2._Myfirst;
    v7 = (unsigned __int64)v5;
    if ( Mysize )
    {
      if ( Mysize >= 0 )
        *(_QWORD *)&v7 = &v5[(unsigned __int64)Mysize >> 5];
      else
        *(_QWORD *)&v7 = (char *)v5 - 4i64 - 4 * ((unsigned __int64)(-1 - Mysize) >> 5);
      *((_QWORD *)&v7 + 1) = Mysize & 0x1F;
    }
    v8 = v7;
    std::vector<bool>::_Insert_n(
      this,
      (std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > *)&v7,
      (std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > *)&v8,
      _Newsize - Mysize,
      &v10);
  }
}

void __fastcall AgAsyncEventDispatcher<AgControllerAddedEvent>::run(
        AgAsyncEventDispatcher<AgControllerAddedEvent> *this)
{
  AgControllerAddedEvent *Myend; // r14
  std::vector<AgControllerAddedEvent> *p_m_eventQueue; // rax
  AgJsonNode *Myfirst; // rsi
  AgControllerAddedEvent *Mylast; // rdi
  const AgControllerAddedEvent *v6; // rbx
  AgPointer<KOFApplication> *v7; // rbx
  __int128 v8; // [rsp+28h] [rbp-30h] BYREF
  AgControllerAddedEvent *v9; // [rsp+38h] [rbp-20h]

  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_queueMutex);
  v8 = 0i64;
  Myend = 0i64;
  v9 = 0i64;
  p_m_eventQueue = &this->m_eventQueue;
  if ( &v8 == (__int128 *)&this->m_eventQueue )
  {
    Mylast = (AgControllerAddedEvent *)*((_QWORD *)&v8 + 1);
    Myfirst = (AgJsonNode *)v8;
  }
  else
  {
    Myfirst = (AgJsonNode *)p_m_eventQueue->_Mypair._Myval2._Myfirst;
    *(_QWORD *)&v8 = p_m_eventQueue->_Mypair._Myval2._Myfirst;
    p_m_eventQueue->_Mypair._Myval2._Myfirst = 0i64;
    Mylast = this->m_eventQueue._Mypair._Myval2._Mylast;
    *((_QWORD *)&v8 + 1) = Mylast;
    this->m_eventQueue._Mypair._Myval2._Mylast = 0i64;
    Myend = this->m_eventQueue._Mypair._Myval2._Myend;
    v9 = Myend;
    this->m_eventQueue._Mypair._Myval2._Myend = 0i64;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_queueMutex);
  v6 = (const AgControllerAddedEvent *)Myfirst;
  if ( Myfirst != (AgJsonNode *)Mylast )
  {
    do
      AgEventDispatcherBase<AgControllerAddedEvent>::call(this, v6++);
    while ( v6 != Mylast );
  }
  if ( Myfirst )
  {
    v7 = (AgPointer<KOFApplication> *)Myfirst;
    if ( Myfirst != (AgJsonNode *)Mylast )
    {
      do
      {
        AgPointer<AgUser>::~AgPointer<AgUser>(v7);
        v7 = (AgPointer<KOFApplication> *)((char *)v7 + 24);
      }
      while ( v7 != (AgPointer<KOFApplication> *)Mylast );
    }
    std::allocator<AgJsonNode>::deallocate(
      (std::allocator<AgJsonNode> *)&v8,
      Myfirst,
      ((char *)Myend - (char *)Myfirst) / 24);
  }
}

void __fastcall AgAsyncEventDispatcher<AgControllerPairingChangedEvent>::run(
        AgAsyncEventDispatcher<AgControllerPairingChangedEvent> *this)
{
  std::vector<AgControllerPairingChangedEvent> *p_m_eventQueue; // rcx
  const AgControllerPairingChangedEvent *Myfirst; // rbx
  AgControllerPairingChangedEvent *Mylast; // rdi
  std::vector<AgControllerPairingChangedEvent> v5; // [rsp+28h] [rbp-20h] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_queueMutex);
  memset(&v5, 0, sizeof(v5));
  p_m_eventQueue = &this->m_eventQueue;
  if ( &v5 == &this->m_eventQueue )
  {
    Mylast = v5._Mypair._Myval2._Mylast;
    Myfirst = v5._Mypair._Myval2._Myfirst;
  }
  else
  {
    Myfirst = p_m_eventQueue->_Mypair._Myval2._Myfirst;
    v5._Mypair._Myval2._Myfirst = p_m_eventQueue->_Mypair._Myval2._Myfirst;
    p_m_eventQueue->_Mypair._Myval2._Myfirst = 0i64;
    Mylast = this->m_eventQueue._Mypair._Myval2._Mylast;
    v5._Mypair._Myval2._Mylast = Mylast;
    this->m_eventQueue._Mypair._Myval2._Mylast = 0i64;
    v5._Mypair._Myval2._Myend = this->m_eventQueue._Mypair._Myval2._Myend;
    this->m_eventQueue._Mypair._Myval2._Myend = 0i64;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_queueMutex);
  for ( ; Myfirst != Mylast; ++Myfirst )
    AgEventDispatcherBase<AgControllerPairingChangedEvent>::call(this, Myfirst);
  std::vector<AgControllerPairingChangedEvent>::_Tidy(&v5);
}

void __fastcall AgAsyncEventDispatcher<AgControllerRemovedEvent>::run(
        AgAsyncEventDispatcher<AgControllerRemovedEvent> *this)
{
  AgControllerRemovedEvent *Myend; // r14
  std::vector<AgControllerRemovedEvent> *p_m_eventQueue; // rax
  AgJsonNode *Myfirst; // rsi
  AgControllerRemovedEvent *Mylast; // rdi
  const AgControllerRemovedEvent *v6; // rbx
  AgPointer<KOFApplication> *v7; // rbx
  __int128 v8; // [rsp+28h] [rbp-30h] BYREF
  AgControllerRemovedEvent *v9; // [rsp+38h] [rbp-20h]

  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_queueMutex);
  v8 = 0i64;
  Myend = 0i64;
  v9 = 0i64;
  p_m_eventQueue = &this->m_eventQueue;
  if ( &v8 == (__int128 *)&this->m_eventQueue )
  {
    Mylast = (AgControllerRemovedEvent *)*((_QWORD *)&v8 + 1);
    Myfirst = (AgJsonNode *)v8;
  }
  else
  {
    Myfirst = (AgJsonNode *)p_m_eventQueue->_Mypair._Myval2._Myfirst;
    *(_QWORD *)&v8 = p_m_eventQueue->_Mypair._Myval2._Myfirst;
    p_m_eventQueue->_Mypair._Myval2._Myfirst = 0i64;
    Mylast = this->m_eventQueue._Mypair._Myval2._Mylast;
    *((_QWORD *)&v8 + 1) = Mylast;
    this->m_eventQueue._Mypair._Myval2._Mylast = 0i64;
    Myend = this->m_eventQueue._Mypair._Myval2._Myend;
    v9 = Myend;
    this->m_eventQueue._Mypair._Myval2._Myend = 0i64;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_queueMutex);
  v6 = (const AgControllerRemovedEvent *)Myfirst;
  if ( Myfirst != (AgJsonNode *)Mylast )
  {
    do
      AgEventDispatcherBase<AgControllerRemovedEvent>::call(this, v6++);
    while ( v6 != Mylast );
  }
  if ( Myfirst )
  {
    v7 = (AgPointer<KOFApplication> *)Myfirst;
    if ( Myfirst != (AgJsonNode *)Mylast )
    {
      do
      {
        AgPointer<AgUser>::~AgPointer<AgUser>(v7);
        v7 = (AgPointer<KOFApplication> *)((char *)v7 + 24);
      }
      while ( v7 != (AgPointer<KOFApplication> *)Mylast );
    }
    std::allocator<AgJsonNode>::deallocate(
      (std::allocator<AgJsonNode> *)&v8,
      Myfirst,
      ((char *)Myend - (char *)Myfirst) / 24);
  }
}

void __fastcall AgAsyncEventDispatcher<AgEditedInputEvent>::run(AgAsyncEventDispatcher<AgEditedInputEvent> *this)
{
  AgEditedInputEvent *Myend; // r14
  std::vector<AgEditedInputEvent> *p_m_eventQueue; // rax
  AgJsonNode *Myfirst; // rsi
  AgEditedInputEvent *Mylast; // rdi
  unsigned __int64 v6; // rdx
  const AgEditedInputEvent *v7; // rbx
  AgString *v8; // rbx
  __int128 v9; // [rsp+28h] [rbp-30h] BYREF
  AgEditedInputEvent *v10; // [rsp+38h] [rbp-20h]

  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_queueMutex);
  v9 = 0i64;
  Myend = 0i64;
  v10 = 0i64;
  p_m_eventQueue = &this->m_eventQueue;
  if ( &v9 == (__int128 *)&this->m_eventQueue )
  {
    Mylast = (AgEditedInputEvent *)*((_QWORD *)&v9 + 1);
    Myfirst = (AgJsonNode *)v9;
  }
  else
  {
    Myfirst = (AgJsonNode *)p_m_eventQueue->_Mypair._Myval2._Myfirst;
    *(_QWORD *)&v9 = p_m_eventQueue->_Mypair._Myval2._Myfirst;
    p_m_eventQueue->_Mypair._Myval2._Myfirst = 0i64;
    Mylast = this->m_eventQueue._Mypair._Myval2._Mylast;
    *((_QWORD *)&v9 + 1) = Mylast;
    this->m_eventQueue._Mypair._Myval2._Mylast = 0i64;
    Myend = this->m_eventQueue._Mypair._Myval2._Myend;
    v10 = Myend;
    this->m_eventQueue._Mypair._Myval2._Myend = 0i64;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_queueMutex);
  v7 = (const AgEditedInputEvent *)Myfirst;
  if ( Myfirst != (AgJsonNode *)Mylast )
  {
    do
      AgEventDispatcherBase<AgEditedInputEvent>::call(this, v7++);
    while ( v7 != Mylast );
  }
  if ( Myfirst )
  {
    v8 = (AgString *)Myfirst;
    if ( Myfirst != (AgJsonNode *)Mylast )
    {
      do
      {
        AgString::~AgString(v8, v6);
        v8 = (AgString *)((char *)v8 + 24);
      }
      while ( v8 != (AgString *)Mylast );
    }
    std::allocator<AgJsonNode>::deallocate(
      (std::allocator<AgJsonNode> *)&v9,
      Myfirst,
      ((char *)Myend - (char *)Myfirst) / 24);
  }
}

void __fastcall AgAsyncEventDispatcher<AgTypingInputEvent>::run(AgAsyncEventDispatcher<AgTypingInputEvent> *this)
{
  AgTypingInputEvent *Myend; // r14
  std::vector<AgTypingInputEvent> *p_m_eventQueue; // rax
  AgDelegate1<AgUserUpdatedEvent const &,void> *Myfirst; // rsi
  AgTypingInputEvent *Mylast; // rdi
  unsigned __int64 v6; // rdx
  const AgTypingInputEvent *v7; // rbx
  AgString *v8; // rbx
  __int128 v9; // [rsp+28h] [rbp-30h] BYREF
  AgTypingInputEvent *v10; // [rsp+38h] [rbp-20h]

  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_queueMutex);
  v9 = 0i64;
  Myend = 0i64;
  v10 = 0i64;
  p_m_eventQueue = &this->m_eventQueue;
  if ( &v9 == (__int128 *)&this->m_eventQueue )
  {
    Mylast = (AgTypingInputEvent *)*((_QWORD *)&v9 + 1);
    Myfirst = (AgDelegate1<AgUserUpdatedEvent const &,void> *)v9;
  }
  else
  {
    Myfirst = (AgDelegate1<AgUserUpdatedEvent const &,void> *)p_m_eventQueue->_Mypair._Myval2._Myfirst;
    *(_QWORD *)&v9 = p_m_eventQueue->_Mypair._Myval2._Myfirst;
    p_m_eventQueue->_Mypair._Myval2._Myfirst = 0i64;
    Mylast = this->m_eventQueue._Mypair._Myval2._Mylast;
    *((_QWORD *)&v9 + 1) = Mylast;
    this->m_eventQueue._Mypair._Myval2._Mylast = 0i64;
    Myend = this->m_eventQueue._Mypair._Myval2._Myend;
    v10 = Myend;
    this->m_eventQueue._Mypair._Myval2._Myend = 0i64;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_queueMutex);
  v7 = (const AgTypingInputEvent *)Myfirst;
  if ( Myfirst != (AgDelegate1<AgUserUpdatedEvent const &,void> *)Mylast )
  {
    do
      AgEventDispatcherBase<AgTypingInputEvent>::call(this, v7++);
    while ( v7 != Mylast );
  }
  if ( Myfirst )
  {
    v8 = (AgString *)Myfirst;
    if ( Myfirst != (AgDelegate1<AgUserUpdatedEvent const &,void> *)Mylast )
    {
      do
        AgString::~AgString(v8++, v6);
      while ( v8 != (AgString *)Mylast );
    }
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)&v9,
      Myfirst,
      ((char *)Myend - (char *)Myfirst) >> 4);
  }
}

void __fastcall AgInputManager::saveData(AgInputManager *this, unsigned __int8 *buffer, unsigned int size)
{
  AgPointer<AgFile> *v6; // rax
  unsigned __int64 v7; // rdx
  AgString v8; // [rsp+28h] [rbp-30h] BYREF
  AgPointer<AgFile> result; // [rsp+38h] [rbp-20h] BYREF

  ((void (__fastcall *)(AgMemoryStream *))this->m_recordedInputs.m_ptr->write)(this->m_recordedInputs.m_ptr);
  if ( this->m_liveSavingEnabled )
  {
    AgString::AgString(&v8, &this->m_liveSavingPath);
    AgPath::clean((AgPath *)&v8);
    v6 = AgFile::open(&result, (const AgPath *)&v8, 8u, 1);
    v6->m_ptr->write(v6->m_ptr, buffer, size);
    AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&result);
    AgString::~AgString(&v8, v7);
  }
}

void __fastcall AgControllerButtonComponent::serialize(AgControllerButtonComponent *this, AgPointer<AgStream> *stream)
{
  unsigned int *Myfirst; // rdi
  unsigned __int64 v5; // rbx
  unsigned int *v6; // r8
  unsigned __int64 v7; // rax
  signed __int64 v8; // rcx
  unsigned __int64 v9; // rax
  bool v10; // [rsp+50h] [rbp+8h] BYREF
  AgPointer<AgStream> *v11; // [rsp+58h] [rbp+10h]
  int Mysize; // [rsp+60h] [rbp+18h] BYREF

  v11 = stream;
  Mysize = this->m_buttons._Mysize;
  stream->m_ptr->write(stream->m_ptr, (const unsigned __int8 *)&Mysize, 4u);
  Myfirst = this->m_buttons._Myvec._Mypair._Myval2._Myfirst;
  v5 = 0i64;
  while ( 1 )
  {
    v6 = this->m_buttons._Myvec._Mypair._Myval2._Myfirst;
    v7 = 0i64;
    v8 = this->m_buttons._Mysize;
    if ( v8 )
    {
      v9 = this->m_buttons._Mysize;
      if ( v8 >= 0 )
        v6 += v9 >> 5;
      else
        v6 = (unsigned int *)((char *)v6 - 4i64 - 4 * ((-1i64 - v9) >> 5));
      v7 = this->m_buttons._Mysize & 0x1F;
    }
    if ( Myfirst == v6 && v5 == v7 )
      break;
    v10 = ((1 << v5) & *Myfirst) != 0;
    stream->m_ptr->write(stream->m_ptr, (const unsigned __int8 *)&v10, 1u);
    if ( v5 >= 0x1F )
    {
      v5 = 0i64;
      ++Myfirst;
    }
    else
    {
      ++v5;
    }
  }
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)stream);
}

void __fastcall AgInputManager::startTextInput(AgInputManager *this)
{
  this->m_startingTextInput = 1;
}

void __fastcall AgInputManager::stopTextInput(AgInputManager *this)
{
  this->m_stoppingTextInput = 1;
}

void __fastcall AgEventDispatcherBase<AgResumingEvent>::unbind(
        AgEventDispatcherBase<AgResumingEvent> *this,
        AgDelegate1<AgResumingEvent const &,void> *f)
{
  AgDelegate1<AgResumingEvent const &,void> *Myfirst; // rax
  AgDelegate1<AgResumingEvent const &,void> *Mylast; // r8
  void (__fastcall **p_m_pFunction)(detail::GenericClass *); // rdx

  EnterCriticalSection((LPCRITICAL_SECTION)this);
  Myfirst = this->m_bindings._Mypair._Myval2._Myfirst;
  Mylast = this->m_bindings._Mypair._Myval2._Mylast;
  if ( Myfirst != Mylast )
  {
    while ( f->m_Closure.m_pthis != Myfirst->m_Closure.m_pthis
         || f->m_Closure.m_pFunction != Myfirst->m_Closure.m_pFunction )
    {
      if ( ++Myfirst == Mylast )
        goto LABEL_10;
    }
    if ( &Myfirst[1] != Mylast )
    {
      p_m_pFunction = &Myfirst[1].m_Closure.m_pFunction;
      do
      {
        *(p_m_pFunction - 2) = *p_m_pFunction;
        *(p_m_pFunction - 3) = *(p_m_pFunction - 1);
        p_m_pFunction += 2;
      }
      while ( p_m_pFunction - 1 != (void (__fastcall **)(detail::GenericClass *))Mylast );
    }
    --this->m_bindings._Mypair._Myval2._Mylast;
  }
LABEL_10:
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
}

void __fastcall AgEventDispatcherBase<AgSuspendingEvent>::unbind(
        AgEventDispatcherBase<AgSuspendingEvent> *this,
        AgDelegate1<AgSuspendingEvent const &,void> *f)
{
  AgDelegate1<AgSuspendingEvent const &,void> *Myfirst; // rax
  AgDelegate1<AgSuspendingEvent const &,void> *Mylast; // r8
  void (__fastcall **p_m_pFunction)(detail::GenericClass *); // rdx

  EnterCriticalSection((LPCRITICAL_SECTION)this);
  Myfirst = this->m_bindings._Mypair._Myval2._Myfirst;
  Mylast = this->m_bindings._Mypair._Myval2._Mylast;
  if ( Myfirst != Mylast )
  {
    while ( f->m_Closure.m_pthis != Myfirst->m_Closure.m_pthis
         || f->m_Closure.m_pFunction != Myfirst->m_Closure.m_pFunction )
    {
      if ( ++Myfirst == Mylast )
        goto LABEL_10;
    }
    if ( &Myfirst[1] != Mylast )
    {
      p_m_pFunction = &Myfirst[1].m_Closure.m_pFunction;
      do
      {
        *(p_m_pFunction - 2) = *p_m_pFunction;
        *(p_m_pFunction - 3) = *(p_m_pFunction - 1);
        p_m_pFunction += 2;
      }
      while ( p_m_pFunction - 1 != (void (__fastcall **)(detail::GenericClass *))Mylast );
    }
    --this->m_bindings._Mypair._Myval2._Mylast;
  }
LABEL_10:
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
}

void __fastcall AgInputManager::update(AgInputManager *this)
{
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Myhead; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Left; // rbx
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *Right; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *j; // rax
  std::_Tree_node<std::pair<unsigned int const ,AgPointer<AgController> >,void *> *i; // rax
  double SystemTime; // xmm6_8
  AgInputManager::PlayerState m_playerState; // eax
  std::list<AgControllerComponent *> *v9; // r15
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v10; // rax
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *Parent; // rcx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v12; // rdx
  std::list<AgControllerComponent *> *p_second; // rcx
  std::_List_node<AgControllerComponent *,void *> *v14; // rcx
  std::_List_node<AgControllerComponent *,void *> *Next; // rax
  AgControllerComponent *Myval; // rbx
  AgMemoryStream *v17; // rax
  AgMemoryStream *v18; // rax
  AgMemoryStream *m_ptr; // rdi
  AgPointer<AgController> *v20; // rax
  int v21; // eax
  AgReferenceCount *m_refCount; // rbx
  AgPointer<AgStream> *v23; // rax
  unsigned int v24; // ebx
  unsigned __int8 *v25; // rax
  AgString *v26; // rax
  char *CString; // rax
  unsigned __int64 v28; // rdx
  AgStandardGamepadController *v29; // rax
  AgReferenceCount *m_ref; // rdi
  int m_strongCount; // ebx
  AgInputManager::InputEntry *p_m_nextRecorded; // r14
  double v33; // xmm0_8
  AgString *v34; // rax
  AgString *v35; // rbx
  AgString *v36; // rax
  AgString *v37; // rdi
  char *v38; // rbx
  char *v39; // rax
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rdx
  AgPointer<AgStream> *v42; // rax
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v43; // rax
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v44; // rcx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v45; // rdx
  std::list<AgControllerComponent *> *v46; // rcx
  std::_List_node<AgControllerComponent *,void *> *v47; // rcx
  std::_List_node<AgControllerComponent *,void *> *v48; // rax
  AgControllerComponent *v49; // r8
  std::vector<bool> *p_m_buttons; // rdx
  std::vector<bool> *v51; // rcx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v52; // rax
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v53; // rcx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v54; // rdx
  std::list<AgControllerComponent *> *v55; // rcx
  std::_List_node<AgControllerComponent *,void *> *v56; // rcx
  std::_List_node<AgControllerComponent *,void *> *v57; // rax
  AgControllerComponent *v58; // rdx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v59; // rax
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v60; // rcx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v61; // rdx
  std::_List_node<AgControllerComponent *,void *> *v62; // rax
  AgControllerComponent *v63; // r9
  double v64; // xmm0_8
  const AgString *v65; // rax
  const AgString *v66; // rax
  AgString *v67; // rax
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rdx
  AgController *v70; // rdi
  AgReferenceCount *v71; // rbx
  int v72; // esi
  AgPointer<AgController> result; // [rsp+20h] [rbp-E0h] BYREF
  AgPointer<AgController> *v74; // [rsp+30h] [rbp-D0h]
  AgPointer<AgMemoryStream> v75; // [rsp+38h] [rbp-C8h] BYREF
  AgPointer<AgController> v76; // [rsp+48h] [rbp-B8h] BYREF
  long double v77; // [rsp+60h] [rbp-A0h] BYREF
  AgControllerButtonComponent v78; // [rsp+68h] [rbp-98h] BYREF
  __int64 v79; // [rsp+B0h] [rbp-50h]
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v80; // [rsp+B8h] [rbp-48h]
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v81; // [rsp+C0h] [rbp-40h]
  AgPointer<AgStream> v82; // [rsp+C8h] [rbp-38h] BYREF
  AgPointer<AgPlayer> v83; // [rsp+D8h] [rbp-28h] BYREF
  AgString v84; // [rsp+E8h] [rbp-18h] BYREF
  AgString v85; // [rsp+F8h] [rbp-8h] BYREF
  AgString v86; // [rsp+108h] [rbp+8h] BYREF
  AgPointer<AgStream> v87; // [rsp+118h] [rbp+18h] BYREF
  AgString v88; // [rsp+128h] [rbp+28h] BYREF
  AgString v89; // [rsp+138h] [rbp+38h] BYREF
  AgString v90; // [rsp+148h] [rbp+48h] BYREF
  long double v91; // [rsp+158h] [rbp+58h]
  AgControllerButtonComponent __that; // [rsp+160h] [rbp+60h] BYREF
  AgPointer<AgPlayer> *v93; // [rsp+200h] [rbp+100h]

  v79 = -2i64;
  Myhead = this->m_controllers._Mypair._Myval2._Myval2._Myhead;
  Left = Myhead->_Left;
  if ( Myhead->_Left != Myhead )
  {
    do
    {
      Left->_Myval.second.m_ptr->update(Left->_Myval.second.m_ptr);
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
    }
    while ( Left != this->m_controllers._Mypair._Myval2._Myval2._Myhead );
  }
  AgAsyncEventDispatcher<AgControllerAddedEvent>::run(&this->ControllerAdded);
  AgAsyncEventDispatcher<AgControllerRemovedEvent>::run(&this->ControllerRemoved);
  AgAsyncEventDispatcher<AgControllerPairingChangedEvent>::run(&this->ControllerPairingChanged);
  AgAsyncEventDispatcher<AgTypingInputEvent>::run(&this->TypedText);
  AgAsyncEventDispatcher<AgEditedInputEvent>::run(&this->EditedText);
  SystemTime = AgClock::getSystemTime();
  AgInputManager::getFirstController(this, &result, AgControllerType_Gamepad);
  m_playerState = this->m_playerState;
  v9 = &AgController::ms_emptyControllerComponentList;
  if ( m_playerState == AgPlayerState_Recording )
  {
    v77 = 0.0;
    AgControllerButtonComponent::AgControllerButtonComponent(&v78);
    v10 = result.m_ptr->m_components._Mypair._Myval2._Myval2._Myhead;
    Parent = v10->_Parent;
    v12 = v10;
    while ( !Parent->_Isnil )
    {
      if ( Parent->_Myval.first >= AgControllerComponentType_Buttons )
      {
        v12 = Parent;
        Parent = Parent->_Left;
      }
      else
      {
        Parent = Parent->_Right;
      }
    }
    if ( v12 == v10 || v12->_Myval.first > AgControllerComponentType_Buttons )
    {
      v12 = result.m_ptr->m_components._Mypair._Myval2._Myval2._Myhead;
      v81 = v12;
    }
    else
    {
      v80 = v12;
    }
    p_second = &v12->_Myval.second;
    if ( v12 == v10 )
      p_second = &AgController::ms_emptyControllerComponentList;
    v14 = p_second->_Mypair._Myval2._Myhead;
    Next = v14->_Next;
    if ( v14->_Next == v14 )
    {
LABEL_27:
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
        if ( Next == v14 )
          goto LABEL_27;
      }
    }
    v78.AgControllerComponent = *Myval;
    v78.m_buttons._Mysize = (unsigned __int64)Myval[4];
    std::vector<unsigned int>::operator=(&v78.m_buttons._Myvec, (const std::vector<unsigned int> *)&Myval[1]);
    v78.m_lastButtons._Mysize = (unsigned __int64)Myval[8];
    std::vector<unsigned int>::operator=(&v78.m_lastButtons._Myvec, (const std::vector<unsigned int> *)&Myval[5]);
    if ( v78.m_buttons._Mysize != this->m_lastRecorded.m_state.m_buttons._Mysize
      || memcmp(
           v78.m_buttons._Myvec._Mypair._Myval2._Myfirst,
           this->m_lastRecorded.m_state.m_buttons._Myvec._Mypair._Myval2._Myfirst,
           (char *)v78.m_buttons._Myvec._Mypair._Myval2._Mylast - (char *)v78.m_buttons._Myvec._Mypair._Myval2._Myfirst) )
    {
      v77 = SystemTime;
      v17 = (AgMemoryStream *)AgMemoryPoolImpl<AgMutex,AgMutex>::_alloc(&AgMemoryStream::s_pool);
      v74 = (AgPointer<AgController> *)v17;
      if ( v17 )
      {
        AgMemoryStream::AgMemoryStream(v17);
        m_ptr = v18;
      }
      else
      {
        m_ptr = 0i64;
      }
      v75 = 0i64;
      if ( m_ptr )
      {
        if ( m_ptr->m_refCount )
        {
          v21 = 0;
        }
        else
        {
          v20 = (AgPointer<AgController> *)AgReferenceCount::operator new(0x10ui64);
          v74 = v20;
          if ( v20 )
          {
            LODWORD(v20->m_ref) = 1;
            HIDWORD(v20->m_ref) = 1;
            v20->m_ptr = (AgController *)m_ptr;
          }
          m_ptr->m_refCount = (AgReferenceCount *)v20;
          v21 = 1;
        }
        m_refCount = m_ptr->m_refCount;
        if ( !v21 )
          AgReferenceCount::incRef(m_ptr->m_refCount);
        v75.m_ref = m_refCount;
        v75.m_ptr = m_ptr;
      }
      else
      {
        m_ptr = v75.m_ptr;
      }
      v93 = (AgPointer<AgPlayer> *)AgPointer<AgMemoryStream>::operator<AgStream> AgPointer<AgStream>(&v75, &v82);
      ((void (__fastcall *)(AgPlayer *, long double *, __int64))v93->m_ptr->m_refCount[1].m_data)(
        v93->m_ptr,
        &v77,
        8i64);
      AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(&v83, v93);
      AgControllerButtonComponent::serialize(&v78, v23);
      AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)v93);
      v24 = m_ptr->getSize(m_ptr);
      v25 = m_ptr->getResidentData(m_ptr);
      AgInputManager::saveData(this, v25, v24);
      this->m_lastRecorded.m_timeOccured = v77;
      this->m_lastRecorded.m_state.AgControllerComponent = v78.AgControllerComponent;
      this->m_lastRecorded.m_state.m_buttons._Mysize = v78.m_buttons._Mysize;
      std::vector<unsigned int>::operator=(&this->m_lastRecorded.m_state.m_buttons._Myvec, &v78.m_buttons._Myvec);
      this->m_lastRecorded.m_state.m_lastButtons._Mysize = v78.m_lastButtons._Mysize;
      std::vector<unsigned int>::operator=(
        &this->m_lastRecorded.m_state.m_lastButtons._Myvec,
        &v78.m_lastButtons._Myvec);
      AgString::AgString(&v84, (unsigned int)(int)SystemTime);
      CString = AgString::getCString(v26);
      AgTrace("[INPUT RECORDER] Recorded input at system time: %s ", CString);
      AgString::~AgString(&v84, v28);
      AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&v75);
    }
    AgControllerButtonComponent::~AgControllerButtonComponent(&v78);
  }
  else
  {
    if ( m_playerState == AgPlayerState_Replaying )
    {
      if ( !result.m_ptr )
      {
        v29 = (AgStandardGamepadController *)operator new(0x110ui64);
        if ( v29 )
          AgStandardGamepadController::AgStandardGamepadController(v29, 0);
        AgPointer<AgThread>::operator=(&result, v29);
        v74 = &v76;
        v76 = 0i64;
        m_ref = result.m_ref;
        if ( result.m_ref )
        {
          m_strongCount = result.m_ref->m_strongCount;
          if ( result.m_ref->m_strongCount )
          {
            while ( AgAtomicCompareExchange(&m_ref->m_strongCount, m_strongCount, m_strongCount + 1) != m_strongCount )
            {
              m_strongCount = m_ref->m_strongCount;
              if ( !m_ref->m_strongCount )
                goto LABEL_56;
            }
            if ( m_strongCount != -1 )
              v76 = result;
          }
        }
LABEL_56:
        AgInputManager::addController(this, &v76);
      }
      p_m_nextRecorded = &this->m_nextRecorded;
      if ( SystemTime >= this->m_nextRecorded.m_timeOccured )
      {
        v33 = AgClock::getSystemTime();
        AgString::AgString(&v86, v33);
        v35 = v34;
        AgString::AgString(&v85, (unsigned int)(int)p_m_nextRecorded->m_timeOccured);
        v37 = v36;
        v38 = AgString::getCString(v35);
        v39 = AgString::getCString(v37);
        AgTrace("[INPUT RECORDER] Replayed input at: %s (system time: %s ) ", v39, v38);
        AgString::~AgString(&v85, v40);
        AgString::~AgString(&v86, v41);
        AgInputManager::InputEntry::operator=(&this->m_lastRecorded, &this->m_nextRecorded);
        v91 = 0.0;
        AgControllerButtonComponent::AgControllerButtonComponent(&__that);
        p_m_nextRecorded->m_timeOccured = v91;
        AgControllerButtonComponent::operator=(&this->m_nextRecorded.m_state, &__that);
        AgControllerButtonComponent::~AgControllerButtonComponent(&__that);
        v42 = AgPointer<AgMemoryStream>::operator<AgStream> AgPointer<AgStream>(&this->m_recordedInputs, &v87);
        if ( !(unsigned int)AgInputManager::InputEntry::deserialize(&this->m_nextRecorded, v42) )
          p_m_nextRecorded->m_timeOccured = 1.797693134862316e308;
      }
      v43 = result.m_ptr->m_components._Mypair._Myval2._Myval2._Myhead;
      v44 = v43->_Parent;
      v45 = v43;
      while ( !v44->_Isnil )
      {
        if ( v44->_Myval.first >= AgControllerComponentType_Buttons )
        {
          v45 = v44;
          v44 = v44->_Left;
        }
        else
        {
          v44 = v44->_Right;
        }
      }
      if ( v45 == v43 || v45->_Myval.first > AgControllerComponentType_Buttons )
        v45 = result.m_ptr->m_components._Mypair._Myval2._Myval2._Myhead;
      v46 = &v45->_Myval.second;
      if ( v45 == v43 )
        v46 = &AgController::ms_emptyControllerComponentList;
      v47 = v46->_Mypair._Myval2._Myhead;
      v48 = v47->_Next;
      if ( v47->_Next == v47 )
      {
LABEL_73:
        v49 = &AgController::ms_emptyControllerComponent;
      }
      else
      {
        while ( 1 )
        {
          v49 = v48->_Myval;
          if ( !v49->m_id )
            break;
          v48 = v48->_Next;
          if ( v48 == v47 )
            goto LABEL_73;
        }
      }
      p_m_buttons = &this->m_lastRecorded.m_state.m_buttons;
      v51 = (std::vector<bool> *)&v49[1];
    }
    else
    {
      if ( !result.m_ptr )
        goto LABEL_92;
      v52 = result.m_ptr->m_components._Mypair._Myval2._Myval2._Myhead;
      v53 = v52->_Parent;
      v54 = v52;
      while ( !v53->_Isnil )
      {
        if ( v53->_Myval.first >= AgControllerComponentType_Buttons )
        {
          v54 = v53;
          v53 = v53->_Left;
        }
        else
        {
          v53 = v53->_Right;
        }
      }
      if ( v54 == v52 || v54->_Myval.first > AgControllerComponentType_Buttons )
        v54 = result.m_ptr->m_components._Mypair._Myval2._Myval2._Myhead;
      v55 = &v54->_Myval.second;
      if ( v54 == v52 )
        v55 = &AgController::ms_emptyControllerComponentList;
      v56 = v55->_Mypair._Myval2._Myhead;
      v57 = v56->_Next;
      if ( v56->_Next == v56 )
      {
LABEL_89:
        v58 = &AgController::ms_emptyControllerComponent;
      }
      else
      {
        while ( 1 )
        {
          v58 = v57->_Myval;
          if ( !v58->m_id )
            break;
          v57 = v57->_Next;
          if ( v57 == v56 )
            goto LABEL_89;
        }
      }
      p_m_buttons = (std::vector<bool> *)&v58[1];
      v51 = &this->m_lastRecorded.m_state.m_buttons;
    }
    v51->_Mysize = p_m_buttons->_Mysize;
    std::vector<unsigned int>::operator=(&v51->_Myvec, &p_m_buttons->_Myvec);
  }
LABEL_92:
  if ( operator!=(&this->m_screenshotDirectory, &pnewText) )
  {
    v59 = result.m_ptr->m_components._Mypair._Myval2._Myval2._Myhead;
    v60 = v59->_Parent;
    v61 = v59;
    while ( !v60->_Isnil )
    {
      if ( v60->_Myval.first >= AgControllerComponentType_Buttons )
      {
        v61 = v60;
        v60 = v60->_Left;
      }
      else
      {
        v60 = v60->_Right;
      }
    }
    if ( v61 == v59 || v61->_Myval.first > AgControllerComponentType_Buttons )
      v61 = result.m_ptr->m_components._Mypair._Myval2._Myval2._Myhead;
    if ( v61 != v59 )
      v9 = &v61->_Myval.second;
    v62 = v9->_Mypair._Myval2._Myhead->_Next;
    if ( v62 == v9->_Mypair._Myval2._Myhead )
    {
LABEL_106:
      v63 = &AgController::ms_emptyControllerComponent;
    }
    else
    {
      while ( 1 )
      {
        v63 = v62->_Myval;
        if ( !v63->m_id )
          break;
        v62 = v62->_Next;
        if ( v62 == v9->_Mypair._Myval2._Myhead )
          goto LABEL_106;
      }
    }
    if ( ((1 << (this->m_screenshotGamepadButton & 0x1F)) & *(_DWORD *)(*(_QWORD *)&v63[5]
                                                                      + 4
                                                                      * ((unsigned __int64)LOWORD(this->m_screenshotGamepadButton) >> 5))) == 0
      && ((1 << (this->m_screenshotGamepadButton & 0x1F)) & *(_DWORD *)(*(_QWORD *)&v63[1]
                                                                      + 4
                                                                      * ((unsigned __int64)LOWORD(this->m_screenshotGamepadButton) >> 5))) != 0 )
    {
      v64 = AgClock::getSystemTime();
      AgString::AgString(&v90, v64);
      v66 = operator+(&v89, &this->m_screenshotDirectory, v65);
      v67 = operator+(&v88, v66, ".png");
      AgUtilities::captureScreenshot(v67);
      AgString::~AgString(&v89, v68);
      AgString::~AgString(&v90, v69);
    }
  }
  v70 = result.m_ptr;
  result.m_ptr = 0i64;
  v71 = result.m_ref;
  if ( result.m_ref )
  {
    result.m_ref = 0i64;
    v72 = 0;
    if ( !AgAtomicDecrement(&v71->m_strongCount) )
    {
      if ( !AgAtomicDecrement(&v71->m_weakCount) )
        v72 = 1;
      v71->m_data = 0i64;
      if ( v70 )
        ((void (__fastcall *)(AgController *, __int64))v70->~AgController)(v70, 1i64);
      if ( v72 )
        AgReferenceCount::operator delete(v71);
    }
  }
}

void __fastcall AgStandardGamepadController::update(AgStandardGamepadController *this)
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
  v6 = 15i64;
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
  if ( this->m_leftStickX.m_type )
    this->m_leftStickX.m_value = this->m_currentLeftStick.m_x;
  if ( this->m_leftStickY.m_type )
    this->m_leftStickY.m_value = this->m_currentLeftStick.m_y;
  if ( this->m_rightStickX.m_type )
    this->m_rightStickX.m_value = this->m_currentRightStick.m_x;
  if ( this->m_rightStickY.m_type )
    this->m_rightStickY.m_value = this->m_currentRightStick.m_y;
  if ( this->m_leftTrigger.m_type )
    this->m_leftTrigger.m_value = this->m_currentLeftTrigger;
  if ( this->m_rightTrigger.m_type )
    this->m_rightTrigger.m_value = this->m_currentRightTrigger;
}

void __fastcall AgInputManager::updateTextInput(AgInputManager *this)
{
  if ( this->m_startingTextInput )
  {
    this->m_startingTextInput = 0;
    SDL_StartTextInput_0();
  }
  if ( this->m_stoppingTextInput )
  {
    this->m_stoppingTextInput = 0;
    SDL_StopTextInput_0();
  }
}

