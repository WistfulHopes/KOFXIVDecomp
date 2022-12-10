#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/steamnamecache.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"

SteamNameCache::SteamNameCache(); // 0x14004DB80
void SteamNameCache::request(CSteamID id); // 0x14004DC20
const char * SteamNameCache::getName(CSteamID id); // 0x14004DD80
const char * SteamNameCache::getMyName(); // 0x14004E090
void SteamNameCache::OnPersonaStateChange(PersonaStateChange_t * pParam); // 0x14004E160std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Buynode<std::string,CSteamID>(
        std::_Tree_comp_alloc<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const ,CSteamID> >,0> > *this,
        std::string *<_Val_0>,
        CSteamID *<_Val_1>)
{
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v5; // rax
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v6; // rdi
  std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> *p_Myval; // rbx
  std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> *Ptr; // rax

  v5 = std::_Tree_comp_alloc<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Buynode0((std::_Tree_comp_alloc<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string >,std::allocator<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> >,0> > *)this);
  v6 = v5;
  *(_WORD *)&v5->_Color = 0;
  p_Myval = &v5->_Myval;
  if ( v5 != (std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *)-32i64 )
  {
    v5->_Myval.first._Mypair._Myval2._Myres = 15i64;
    v5->_Myval.first._Mypair._Myval2._Mysize = 0i64;
    if ( v5->_Myval.first._Mypair._Myval2._Myres < 0x10 )
      Ptr = &v5->_Myval;
    else
      Ptr = (std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> *)p_Myval->first._Mypair._Myval2._Bx._Ptr;
    Ptr->first._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::_Assign_rv((std::string *)&p_Myval->first, <_Val_0>);
    p_Myval->second.m_impl.m_ptr = (extension::gfxi_detail::LanguageConfigImpl *)<_Val_1>->m_steamid.m_unAll64Bits;
  }
  return v6;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > *__fastcall std::_Tree<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Insert_at<std::pair<std::string const,CSteamID> &,std::_Tree_node<std::pair<std::string const,CSteamID>,void *> *>(
        std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string >,std::allocator<std::pair<std::string const ,OGLModel *> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > *result,
        bool _Addleft,
        std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *_Wherenode,
        std::pair<std::string const ,OGLModel *> *_Val,
        std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *_Node)
{
  unsigned __int64 Mysize; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Myhead; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v10; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Parent; // rcx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v12; // r8
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Left; // rdx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Right; // rdx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v15; // rdx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v16; // rcx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v17; // rdx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v18; // r8
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v19; // rcx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v20; // rcx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v21; // rdx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v22; // rcx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v23; // rcx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v24; // rcx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v25; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v26; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > *v27; // rax

  Mysize = this->_Mypair._Myval2._Myval2._Mysize;
  if ( Mysize >= 0x38E38E38E38E38Di64 )
  {
    std::string::~string((std::string *)&_Node->_Myval.first);
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

std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >,bool> *__fastcall std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string>,std::allocator<std::pair<std::string const,OGLModel *>>,0>>::_Insert_nohint<std::pair<std::string const,OGLModel *> &,std::_Tree_node<std::pair<std::string const,OGLModel *>,void *> *>(
        std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string >,std::allocator<std::pair<std::string const ,OGLModel *> >,0> > *this,
        std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >,bool> *result,
        bool _Leftish,
        std::pair<std::string const ,OGLModel *> *_Val,
        std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *_Newnode)
{
  std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string >,std::allocator<std::pair<std::string const ,OGLModel *> >,0> > *v7; // rsi
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Myhead; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Parent; // rbx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v10; // r14
  BOOL v11; // edi
  unsigned __int64 Mysize; // r15
  char **p_Myval; // rdx
  std::pair<std::string const ,OGLModel *> *Ptr; // rcx
  size_t v15; // rsi
  size_t v16; // r8
  unsigned int v17; // edi
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Right; // rbx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *j; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *i; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v22; // rdi
  std::pair<std::string const ,OGLModel *> *v23; // [rsp+20h] [rbp-48h]
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v24; // [rsp+30h] [rbp-38h]
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > resulta; // [rsp+70h] [rbp+8h] BYREF

  resulta._Ptr = (std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *)this;
  v7 = this;
  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  v24 = this->_Mypair._Myval2._Myval2._Myhead;
  Parent = this->_Mypair._Myval2._Myval2._Myhead->_Parent;
  v10 = this->_Mypair._Myval2._Myval2._Myhead;
  LOBYTE(v11) = 1;
  if ( !Parent->_Isnil )
  {
    Mysize = _Val->first._Mypair._Myval2._Mysize;
    do
    {
      v10 = Parent;
      p_Myval = (char **)&Parent->_Myval;
      if ( Parent->_Myval.first._Mypair._Myval2._Myres >= 0x10 )
        p_Myval = (char **)*p_Myval;
      if ( _Val->first._Mypair._Myval2._Myres < 0x10 )
        Ptr = _Val;
      else
        Ptr = (std::pair<std::string const ,OGLModel *> *)_Val->first._Mypair._Myval2._Bx._Ptr;
      v15 = Parent->_Myval.first._Mypair._Myval2._Mysize;
      v16 = v15;
      if ( Mysize < v15 )
        v16 = Mysize;
      if ( !v16 || (v17 = memcmp(Ptr, p_Myval, v16)) == 0 )
      {
        if ( Mysize >= v15 )
          v17 = Mysize > v15;
        else
          v17 = -1;
      }
      v11 = v17 >> 31;
      if ( v11 )
        Parent = Parent->_Left;
      else
        Parent = Parent->_Right;
    }
    while ( !Parent->_Isnil );
    Myhead = v24;
    v7 = (std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string >,std::allocator<std::pair<std::string const ,OGLModel *> >,0> > *)resulta._Ptr;
  }
  Right = v10;
  if ( v11 )
  {
    if ( v10 == Myhead->_Left )
    {
      result->first = (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >)std::_Tree<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Insert_at<std::pair<std::string const,CSteamID> &,std::_Tree_node<std::pair<std::string const,CSteamID>,void *> *>(v7, &resulta, 1, v10, v23, _Newnode)->_Ptr;
      result->second = 1;
      return result;
    }
    if ( v10->_Isnil )
    {
      Right = v10->_Right;
    }
    else if ( v10->_Left->_Isnil )
    {
      for ( i = v10->_Parent; !i->_Isnil; i = i->_Parent )
      {
        if ( Right != i->_Left )
          break;
        Right = i;
      }
      if ( !Right->_Isnil )
        Right = i;
    }
    else
    {
      Right = v10->_Left;
      for ( j = v10->_Left->_Right; !j->_Isnil; j = j->_Right )
        Right = j;
    }
  }
  if ( std::string::compare((std::string *)&Right->_Myval.first, &_Val->first) >= 0 )
  {
    v22 = _Newnode;
    std::string::~string((std::string *)&_Newnode->_Myval.first);
    operator delete(v22);
    result->first._Ptr = Right;
    result->second = 0;
  }
  else
  {
    result->first = (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >)std::_Tree<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Insert_at<std::pair<std::string const,CSteamID> &,std::_Tree_node<std::pair<std::string const,CSteamID>,void *> *>(v7, &resulta, v11, v10, v23, _Newnode)->_Ptr;
    result->second = 1;
  }
  return result;
}

std::_Tree_node<std::pair<std::string const ,CSteamID>,void *> *__fastcall std::_Tree<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Lbound<char const *>(
        std::_Tree<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const ,CSteamID> >,0> > *this,
        const char *const *_Keyval)
{
  std::_Tree_node<std::pair<std::string const ,CSteamID>,void *> *Myhead; // rbp
  std::_Tree_node<std::pair<std::string const ,CSteamID>,void *> *Parent; // rdi
  const char *v4; // r14
  char v5; // r15
  char **p_Myval; // rcx
  unsigned __int64 v7; // rbx
  unsigned __int64 Mysize; // rsi
  size_t v9; // r8
  int v10; // eax

  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  Parent = this->_Mypair._Myval2._Myval2._Myhead->_Parent;
  if ( !Parent->_Isnil )
  {
    v4 = *_Keyval;
    v5 = **(_BYTE **)_Keyval;
    do
    {
      p_Myval = (char **)&Parent->_Myval;
      if ( v5 )
      {
        v7 = -1i64;
        do
          ++v7;
        while ( v4[v7] );
      }
      else
      {
        v7 = 0i64;
      }
      if ( Parent->_Myval.first._Mypair._Myval2._Myres >= 0x10 )
        p_Myval = (char **)*p_Myval;
      Mysize = Parent->_Myval.first._Mypair._Myval2._Mysize;
      v9 = v7;
      if ( Mysize < v7 )
        v9 = Parent->_Myval.first._Mypair._Myval2._Mysize;
      if ( v9 && (v10 = memcmp(p_Myval, v4, v9)) != 0 )
      {
        if ( v10 >= 0 )
          goto LABEL_18;
      }
      else if ( Mysize >= v7 )
      {
LABEL_18:
        Myhead = Parent;
        Parent = Parent->_Left;
        continue;
      }
      Parent = Parent->_Right;
    }
    while ( !Parent->_Isnil );
  }
  return Myhead;
}

std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *__fastcall std::_Uninitialized_move_al_unchecked1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>>>>>(
        std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_First,
        std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_Last,
        std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_Dest,
        std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *_Al)
{
  __int64 v4; // r9
  unsigned __int64 v5; // r10
  signed __int64 v6; // rcx

  v4 = 0i64;
  v5 = (unsigned __int64)((char *)_Last - (char *)_First + 7) >> 3;
  if ( _First > _Last )
    v5 = 0i64;
  if ( v5 )
  {
    v6 = (char *)_First - (char *)_Dest;
    do
    {
      if ( _Dest )
        _Dest->_Ptr = *(std::_List_node<std::pair<extension::SoundHashKey const ,int>,void *> **)((char *)_Dest + v6);
      ++_Dest;
      ++v4;
    }
    while ( v4 != v5 );
  }
  return _Dest;
}

void __fastcall Scaleform::Render::SubImage::GetAsImage(std::_Wrap_alloc<std::allocator<AgString> > *this)
{
  ;
}

void __fastcall std::string::string(std::string *this, const char *_Ptr)
{
  unsigned __int64 v2; // r8

  v2 = 0i64;
  this->_Mypair._Myval2._Myres = 15i64;
  this->_Mypair._Myval2._Mysize = 0i64;
  this->_Mypair._Myval2._Bx._Buf[0] = 0;
  if ( *_Ptr )
  {
    v2 = -1i64;
    do
      ++v2;
    while ( _Ptr[v2] );
  }
  std::string::assign(this, _Ptr, v2);
}

std::string *__fastcall extension::FutureObjectJobManager<extension::exsound_detail::SoundBankImpl,void>::Stringize(
        std::string *result,
        const void *__formal)
{
  std::string *v2; // rax

  result->_Mypair._Myval2._Myres = 15i64;
  v2 = result;
  result->_Mypair._Myval2._Mysize = 0i64;
  result->_Mypair._Myval2._Bx._Buf[0] = 0;
  return v2;
}

void __fastcall SteamNameCache::SteamNameCache(SteamNameCache *this)
{
  std::string *p_m_myName; // rax

  this->m_requests._Mypair._Myval2._Myfirst = 0i64;
  this->m_requests._Mypair._Myval2._Mylast = 0i64;
  this->m_requests._Mypair._Myval2._Myend = 0i64;
  this->m_reverseLUT._Mypair._Myval2._Myval2._Myhead = 0i64;
  this->m_reverseLUT._Mypair._Myval2._Myval2._Mysize = 0i64;
  this->m_reverseLUT._Mypair._Myval2._Myval2._Myhead = (std::_Tree_node<std::pair<std::string const ,CSteamID>,void *> *)std::_Tree_comp_alloc<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Buyheadnode((std::_Tree_comp_alloc<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string >,std::allocator<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> >,0> > *)this);
  p_m_myName = &this->m_myName;
  this->m_myName._Mypair._Myval2._Myres = 15i64;
  this->m_myName._Mypair._Myval2._Mysize = 0i64;
  if ( this->m_myName._Mypair._Myval2._Myres >= 0x10 )
    p_m_myName = (std::string *)p_m_myName->_Mypair._Myval2._Bx._Ptr;
  p_m_myName->_Mypair._Myval2._Bx._Buf[0] = 0;
  this->m_steamcallback_OnPersonaStateChange.m_nCallbackFlags = 0;
  this->m_steamcallback_OnPersonaStateChange.m_iCallback = 0;
  this->m_steamcallback_OnPersonaStateChange.__vftable = (SteamNameCache::CCallbackInternal_OnPersonaStateChange_vtbl *)&SteamNameCache::CCallbackInternal_OnPersonaStateChange::`vftable';
  SteamAPI_RegisterCallback(&this->m_steamcallback_OnPersonaStateChange, 304i64);
}

void __fastcall SteamNameCache::OnPersonaStateChange(SteamNameCache *this, PersonaStateChange_t *pParam)
{
  __int64 v4; // rax
  bool v5; // cf
  std::string *p_m_myName; // rax
  CSteamID *Myfirst; // rcx
  CSteamID *Mylast; // r8
  char v9; // [rsp+30h] [rbp+8h] BYREF

  if ( (pParam->m_nChangeFlags & 1) != 0 )
  {
    v4 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, pParam);
    if ( pParam->m_ulSteamID == *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(v4 + 8) + 16i64))(
                                             *(_QWORD *)(v4 + 8),
                                             &v9) )
    {
      v5 = this->m_myName._Mypair._Myval2._Myres < 0x10;
      p_m_myName = &this->m_myName;
      this->m_myName._Mypair._Myval2._Mysize = 0i64;
      if ( !v5 )
        p_m_myName = (std::string *)p_m_myName->_Mypair._Myval2._Bx._Ptr;
      p_m_myName->_Mypair._Myval2._Bx._Buf[0] = 0;
    }
  }
  Myfirst = this->m_requests._Mypair._Myval2._Myfirst;
  Mylast = this->m_requests._Mypair._Myval2._Mylast;
  if ( this->m_requests._Mypair._Myval2._Myfirst != Mylast )
  {
    while ( Myfirst->m_steamid.m_unAll64Bits != pParam->m_ulSteamID )
    {
      if ( ++Myfirst == Mylast )
        return;
    }
    memmove(Myfirst, &Myfirst[1], (char *)Mylast - (char *)&Myfirst[1]);
    --this->m_requests._Mypair._Myval2._Mylast;
  }
}

void __fastcall SteamNameCache::CCallbackInternal_OnPersonaStateChange::Run(
        SteamNameCache::CCallbackInternal_OnPersonaStateChange *this,
        void *pvParam)
{
  SteamNameCache::OnPersonaStateChange((SteamNameCache *)&this[-5].m_nCallbackFlags, (PersonaStateChange_t *)pvParam);
}

void __fastcall std::string::_Assign_rv(std::string *this, std::string *_Right)
{
  bool v4; // cf

  if ( _Right->_Mypair._Myval2._Myres >= 0x10 )
  {
    if ( this )
      this->_Mypair._Myval2._Bx._Ptr = _Right->_Mypair._Myval2._Bx._Ptr;
    _Right->_Mypair._Myval2._Bx._Ptr = 0i64;
  }
  else if ( _Right->_Mypair._Myval2._Mysize != -1i64 )
  {
    memmove(this, _Right, _Right->_Mypair._Myval2._Mysize + 1);
  }
  this->_Mypair._Myval2._Mysize = _Right->_Mypair._Myval2._Mysize;
  this->_Mypair._Myval2._Myres = _Right->_Mypair._Myval2._Myres;
  _Right->_Mypair._Myval2._Myres = 15i64;
  v4 = _Right->_Mypair._Myval2._Myres < 0x10;
  _Right->_Mypair._Myval2._Mysize = 0i64;
  if ( v4 )
    _Right->_Mypair._Myval2._Bx._Buf[0] = 0;
  else
    *_Right->_Mypair._Myval2._Bx._Ptr = 0;
}

std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Buyheadnode(
        std::_Tree_comp_alloc<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string >,std::allocator<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> >,0> > *this)
{
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *result; // rax

  result = (std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *)operator new(0x48ui64);
  if ( result )
    result->_Left = result;
  if ( result != (std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *)-8i64 )
    result->_Parent = result;
  if ( result != (std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *)-16i64 )
    result->_Right = result;
  *(_WORD *)&result->_Color = 257;
  return result;
}

std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Buynode0(
        std::_Tree_comp_alloc<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string >,std::allocator<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> >,0> > *this)
{
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *result; // rax

  result = (std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *)operator new(0x48ui64);
  if ( result )
    result->_Left = this->_Mypair._Myval2._Myval2._Myhead;
  if ( result != (std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *)-8i64 )
    result->_Parent = this->_Mypair._Myval2._Myval2._Myhead;
  if ( result != (std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *)-16i64 )
    result->_Right = this->_Mypair._Myval2._Myval2._Myhead;
  return result;
}

void __fastcall std::string::_Copy(std::string *this, unsigned __int64 _Newsize, unsigned __int64 _Oldlen)
{
  std::string *v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 Myres; // r8
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  std::string *v9; // rsi
  void *v10; // rax
  std::string *Ptr; // rdx
  unsigned __int64 v12; // rax
  char *v13; // rcx
  char *v14; // rax
  unsigned __int64 v15; // rcx
  std::string *v16; // rax

  v4 = this;
  v5 = _Newsize | 0xF;
  if ( (_Newsize | 0xF) == -1i64 )
  {
    v5 = _Newsize;
  }
  else
  {
    Myres = this->_Mypair._Myval2._Myres;
    v7 = Myres >> 1;
    if ( Myres >> 1 > v5 / 3 )
    {
      v5 = -2i64;
      if ( Myres <= -2i64 - v7 )
        v5 = v7 + Myres;
    }
  }
  v8 = v5 + 1;
  if ( v5 == -1i64 )
  {
    v9 = 0i64;
  }
  else if ( v8 < 0x1000 )
  {
    v9 = (std::string *)operator new(v8);
  }
  else
  {
    if ( v5 + 40 <= v5 + 1 )
      std::_Xbad_alloc();
    v10 = operator new(v5 + 40);
    v9 = (std::string *)(((unsigned __int64)v10 + 39) & 0xFFFFFFFFFFFFFFE0ui64);
    v9[-1]._Mypair._Myval2._Myres = (unsigned __int64)v10;
  }
  if ( _Oldlen )
  {
    if ( v4->_Mypair._Myval2._Myres < 0x10 )
      Ptr = v4;
    else
      Ptr = (std::string *)v4->_Mypair._Myval2._Bx._Ptr;
    memmove(v9, Ptr, _Oldlen);
  }
  v12 = v4->_Mypair._Myval2._Myres;
  if ( v12 >= 0x10 )
  {
    v13 = v4->_Mypair._Myval2._Bx._Ptr;
    if ( v12 + 1 >= 0x1000 )
    {
      if ( ((unsigned __int8)v13 & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v14 = (char *)*((_QWORD *)v13 - 1);
      if ( v14 >= v13 )
        invalid_parameter_noinfo_noreturn();
      v15 = v13 - v14;
      if ( v15 < 8 )
        invalid_parameter_noinfo_noreturn();
      if ( v15 > 0x27 )
        invalid_parameter_noinfo_noreturn();
      v13 = v14;
    }
    operator delete(v13);
  }
  v4->_Mypair._Myval2._Myres = 15i64;
  v4->_Mypair._Myval2._Mysize = 0i64;
  if ( v4->_Mypair._Myval2._Myres < 0x10 )
    v16 = v4;
  else
    v16 = (std::string *)v4->_Mypair._Myval2._Bx._Ptr;
  v16->_Mypair._Myval2._Bx._Buf[0] = 0;
  v4->_Mypair._Myval2._Bx._Ptr = (char *)v9;
  v4->_Mypair._Myval2._Myres = v5;
  v4->_Mypair._Myval2._Mysize = _Oldlen;
  if ( v4->_Mypair._Myval2._Myres >= 0x10 )
    v4 = v9;
  v4->_Mypair._Myval2._Bx._Buf[_Oldlen] = 0;
}

std::string *__fastcall std::string::c_str(std::string *this)
{
  if ( this->_Mypair._Myval2._Myres < 0x10 )
    return this;
  else
    return (std::string *)this->_Mypair._Myval2._Bx._Ptr;
}

void __fastcall std::vector<CSteamID>::_Reallocate(
        std::vector<CSteamID> *this,
        unsigned __int64 _Count,
        __int64 a3,
        std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *a4)
{
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *v6; // rbx
  unsigned __int64 v7; // rcx
  std::_List_node<std::pair<extension::SoundHashKey const ,int>,void *> *v8; // rax
  std::allocator<AgLogger *> *v9; // rcx
  signed __int64 v10; // r14

  if ( _Count )
  {
    if ( _Count > 0x1FFFFFFFFFFFFFFFi64 )
      std::_Xbad_alloc();
    v7 = 8 * _Count;
    if ( 8 * _Count < 0x1000 )
    {
      v6 = (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *)operator new(v7);
    }
    else
    {
      if ( v7 + 39 <= v7 )
        std::_Xbad_alloc();
      v8 = (std::_List_node<std::pair<extension::SoundHashKey const ,int>,void *> *)operator new(v7 + 39);
      v6 = (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *)(((unsigned __int64)&v8[1]._Next + 7) & 0xFFFFFFFFFFFFFFE0ui64);
      v6[-1]._Ptr = v8;
    }
  }
  else
  {
    v6 = 0i64;
  }
  std::_Uninitialized_move_al_unchecked1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>>>>>(
    (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *)this->_Mypair._Myval2._Myfirst,
    (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *)this->_Mypair._Myval2._Mylast,
    v6,
    a4);
  v10 = this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      v9,
      (AgLogger **)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  this->_Mypair._Myval2._Myend = (CSteamID *)&v6[_Count];
  this->_Mypair._Myval2._Mylast = (CSteamID *)&v6[v10];
  this->_Mypair._Myval2._Myfirst = (CSteamID *)v6;
}

void __fastcall std::vector<CSteamID>::_Reserve(std::vector<CSteamID> *this, unsigned __int64 _Count)
{
  CSteamID *Myend; // r9
  CSteamID *Mylast; // rdx
  CSteamID *Myfirst; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rcx

  Myend = this->_Mypair._Myval2._Myend;
  Mylast = this->_Mypair._Myval2._Mylast;
  if ( !(Myend - Mylast) )
  {
    Myfirst = this->_Mypair._Myval2._Myfirst;
    v6 = Mylast - Myfirst;
    if ( v6 == 0x1FFFFFFFFFFFFFFFi64 )
      std::_Xlength_error("vector<T> too long");
    v7 = v6 + 1;
    v8 = Myend - Myfirst;
    v9 = 0i64;
    if ( 0x1FFFFFFFFFFFFFFFi64 - (v8 >> 1) >= v8 )
      v9 = v8 + (v8 >> 1);
    if ( v9 >= v7 )
      v7 = v9;
    std::vector<CSteamID>::_Reallocate(
      this,
      v7,
      (__int64)this,
      (std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *)v8);
  }
}

int __fastcall std::string::_Traits_compare(
        const char *const _Left,
        const unsigned __int64 _Left_size,
        const char *const _Right,
        const unsigned __int64 _Right_size)
{
  size_t v5; // r8
  int result; // eax

  v5 = _Right_size;
  if ( _Left_size < _Right_size )
    v5 = _Left_size;
  if ( !v5 || (result = memcmp(_Left, _Right, v5)) == 0 )
  {
    if ( _Left_size >= _Right_size )
      return _Left_size > _Right_size;
    else
      return -1;
  }
  return result;
}

unsigned __int8 *__fastcall std::_Wrap_alloc<std::allocator<unsigned char>>::allocate(
        std::_Wrap_alloc<std::allocator<unsigned char> > *this,
        unsigned __int64 _Count)
{
  void *v3; // rax

  if ( !_Count )
    return 0i64;
  if ( _Count < 0x1000 )
    return (unsigned __int8 *)operator new(_Count);
  if ( _Count + 39 <= _Count )
    std::_Xbad_alloc();
  v3 = operator new(_Count + 39);
  *(_QWORD *)((((unsigned __int64)v3 + 39) & 0xFFFFFFFFFFFFFFE0ui64) - 8) = v3;
  return (unsigned __int8 *)(((unsigned __int64)v3 + 39) & 0xFFFFFFFFFFFFFFE0ui64);
}

std::string *__fastcall std::string::assign(
        std::string *this,
        const std::string *_Right,
        unsigned __int64 _Roff,
        unsigned __int64 _Count)
{
  unsigned __int64 Mysize; // rax
  unsigned __int64 v5; // rdi
  const std::string *Ptr; // rsi
  std::string *v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  std::string *v11; // rcx
  bool v12; // cf
  std::string *v13; // rax

  Mysize = _Right->_Mypair._Myval2._Mysize;
  v5 = _Count;
  Ptr = _Right;
  v8 = this;
  if ( Mysize < _Roff )
    std::_Xout_of_range("invalid string position");
  v9 = Mysize - _Roff;
  if ( _Count > v9 )
    v5 = v9;
  if ( this == _Right )
  {
    v10 = _Roff + v5;
    if ( this->_Mypair._Myval2._Mysize < _Roff + v5 )
      std::_Xout_of_range("invalid string position");
    this->_Mypair._Myval2._Mysize = v10;
    if ( this->_Mypair._Myval2._Myres >= 0x10 )
      this = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
    this->_Mypair._Myval2._Bx._Buf[v10] = 0;
    std::string::erase(v8, 0i64, _Roff);
  }
  else
  {
    if ( v5 == -1i64 )
      std::_Xlength_error("string too long");
    if ( this->_Mypair._Myval2._Myres >= v5 )
    {
      if ( !v5 )
      {
        v12 = this->_Mypair._Myval2._Myres < 0x10;
        this->_Mypair._Myval2._Mysize = 0i64;
        if ( v12 )
          this->_Mypair._Myval2._Bx._Buf[0] = 0;
        else
          *this->_Mypair._Myval2._Bx._Ptr = 0;
        return v8;
      }
    }
    else
    {
      std::string::_Copy(this, v5, this->_Mypair._Myval2._Mysize);
      if ( !v5 )
        return v8;
    }
    if ( Ptr->_Mypair._Myval2._Myres >= 0x10 )
      Ptr = (const std::string *)Ptr->_Mypair._Myval2._Bx._Ptr;
    if ( v8->_Mypair._Myval2._Myres < 0x10 )
      v11 = v8;
    else
      v11 = (std::string *)v8->_Mypair._Myval2._Bx._Ptr;
    memmove(v11, &Ptr->_Mypair._Myval2._Bx._Buf[_Roff], v5);
    v12 = v8->_Mypair._Myval2._Myres < 0x10;
    v8->_Mypair._Myval2._Mysize = v5;
    if ( v12 )
      v13 = v8;
    else
      v13 = (std::string *)v8->_Mypair._Myval2._Bx._Ptr;
    v13->_Mypair._Myval2._Bx._Buf[v5] = 0;
  }
  return v8;
}

std::string *__fastcall std::string::assign(std::string *this, const char *_Ptr)
{
  unsigned __int64 v3; // r8

  if ( !*_Ptr )
    return std::string::assign(this, _Ptr, 0i64);
  v3 = -1i64;
  do
    ++v3;
  while ( _Ptr[v3] );
  return std::string::assign(this, _Ptr, v3);
}

std::string *__fastcall std::string::assign(std::string *this, const char *_Ptr, unsigned __int64 _Count)
{
  std::string *v5; // rbx
  unsigned __int64 Myres; // rdx
  std::string *v7; // rax
  std::string *v8; // rax
  std::string *result; // rax
  std::string *Ptr; // rcx
  bool v11; // cf
  std::string *v12; // rax

  v5 = this;
  if ( !_Ptr )
    goto LABEL_13;
  Myres = this->_Mypair._Myval2._Myres;
  v7 = Myres < 0x10 ? this : (std::string *)this->_Mypair._Myval2._Bx._Ptr;
  if ( _Ptr < (const char *)v7 )
    goto LABEL_13;
  if ( Myres >= 0x10 )
    this = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
  if ( (char *)this + v5->_Mypair._Myval2._Mysize <= _Ptr )
  {
LABEL_13:
    if ( _Count == -1i64 )
      std::_Xlength_error("string too long");
    if ( v5->_Mypair._Myval2._Myres >= _Count )
    {
      if ( !_Count )
      {
        v11 = v5->_Mypair._Myval2._Myres < 0x10;
        v5->_Mypair._Myval2._Mysize = 0i64;
        if ( v11 )
        {
          result = v5;
          v5->_Mypair._Myval2._Bx._Buf[0] = 0;
        }
        else
        {
          *v5->_Mypair._Myval2._Bx._Ptr = 0;
          return v5;
        }
        return result;
      }
    }
    else
    {
      std::string::_Copy(v5, _Count, v5->_Mypair._Myval2._Mysize);
      if ( !_Count )
        return v5;
    }
    if ( v5->_Mypair._Myval2._Myres < 0x10 )
      Ptr = v5;
    else
      Ptr = (std::string *)v5->_Mypair._Myval2._Bx._Ptr;
    if ( _Count )
      memmove(Ptr, _Ptr, _Count);
    v11 = v5->_Mypair._Myval2._Myres < 0x10;
    v5->_Mypair._Myval2._Mysize = _Count;
    if ( v11 )
      v12 = v5;
    else
      v12 = (std::string *)v5->_Mypair._Myval2._Bx._Ptr;
    v12->_Mypair._Myval2._Bx._Buf[_Count] = 0;
    return v5;
  }
  if ( Myres < 0x10 )
    v8 = v5;
  else
    v8 = (std::string *)v5->_Mypair._Myval2._Bx._Ptr;
  return std::string::assign(v5, v5, _Ptr - (const char *)v8, _Count);
}

int __fastcall std::string::compare(std::string *this, const std::string *_Right)
{
  unsigned __int64 *p_Mysize; // rbx
  unsigned __int64 *v3; // rdi
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  size_t v6; // r8
  int result; // eax

  p_Mysize = &_Right->_Mypair._Myval2._Mysize;
  if ( _Right->_Mypair._Myval2._Myres >= 0x10 )
    _Right = (const std::string *)_Right->_Mypair._Myval2._Bx._Ptr;
  v3 = &this->_Mypair._Myval2._Mysize;
  if ( this->_Mypair._Myval2._Myres >= 0x10 )
    this = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
  v4 = *p_Mysize;
  v5 = *v3;
  v6 = v4;
  if ( v5 < v4 )
    v6 = v5;
  if ( !v6 || (result = memcmp(this, _Right, v6)) == 0 )
  {
    if ( v5 >= v4 )
      return v5 > v4;
    else
      return -1;
  }
  return result;
}

int __fastcall std::string::compare(std::string *this, const char *_Ptr)
{
  int v2; // esi
  unsigned __int64 v3; // rbx
  unsigned __int64 *p_Mysize; // rdi
  unsigned __int64 v5; // rdi
  size_t v6; // r8
  int result; // eax

  v2 = 0;
  if ( *_Ptr )
  {
    v3 = -1i64;
    do
      ++v3;
    while ( _Ptr[v3] );
  }
  else
  {
    v3 = 0i64;
  }
  p_Mysize = &this->_Mypair._Myval2._Mysize;
  if ( this->_Mypair._Myval2._Myres >= 0x10 )
    this = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
  v5 = *p_Mysize;
  v6 = v3;
  if ( v5 < v3 )
    v6 = v5;
  if ( !v6 || (result = memcmp(this, _Ptr, v6)) == 0 )
  {
    if ( v5 >= v3 )
    {
      LOBYTE(v2) = v5 > v3;
      return v2;
    }
    else
    {
      return -1;
    }
  }
  return result;
}

std::string *__fastcall std::string::erase(std::string *this, unsigned __int64 _Off, unsigned __int64 _Count)
{
  unsigned __int64 Mysize; // rdi
  std::string *result; // rax
  std::string *Ptr; // rax
  unsigned __int64 v7; // rdi
  bool v8; // cf

  Mysize = this->_Mypair._Myval2._Mysize;
  if ( Mysize < _Off )
    std::_Xout_of_range("invalid string position");
  if ( Mysize - _Off > _Count )
  {
    if ( _Count )
    {
      if ( this->_Mypair._Myval2._Myres < 0x10 )
        Ptr = this;
      else
        Ptr = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
      v7 = Mysize - _Count;
      if ( v7 != _Off )
        memmove(&Ptr->_Mypair._Myval2._Bx._Buf[_Off], &Ptr->_Mypair._Myval2._Bx._Buf[_Off + _Count], v7 - _Off);
      v8 = this->_Mypair._Myval2._Myres < 0x10;
      this->_Mypair._Myval2._Mysize = v7;
      if ( !v8 )
      {
        this->_Mypair._Myval2._Bx._Ptr[v7] = 0;
        return this;
      }
      this->_Mypair._Myval2._Bx._Buf[v7] = 0;
    }
    return this;
  }
  else
  {
    this->_Mypair._Myval2._Mysize = _Off;
    if ( this->_Mypair._Myval2._Myres < 0x10 )
    {
      result = this;
      this->_Mypair._Myval2._Bx._Buf[_Off] = 0;
    }
    else
    {
      this->_Mypair._Myval2._Bx._Ptr[_Off] = 0;
      return this;
    }
  }
  return result;
}

unsigned __int64 __fastcall std::string::find(
        std::string *this,
        const char *_Ptr,
        unsigned __int64 _Off,
        unsigned __int64 _Count)
{
  std::string *v6; // r14
  unsigned __int64 Mysize; // rbx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  std::string *Ptr; // rax
  char *i; // rsi
  char *v13; // rax
  char *v14; // rdi

  v6 = this;
  if ( !_Count && _Off <= this->_Mypair._Myval2._Mysize )
    return _Off;
  Mysize = this->_Mypair._Myval2._Mysize;
  if ( _Off < Mysize )
  {
    v9 = Mysize - _Off;
    if ( _Count <= v9 )
    {
      v10 = 1 - _Count + v9;
      if ( this->_Mypair._Myval2._Myres < 0x10 )
        Ptr = this;
      else
        Ptr = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
      for ( i = &Ptr->_Mypair._Myval2._Bx._Buf[_Off]; v10; i = v14 + 1 )
      {
        v13 = (char *)memchr(i, *_Ptr, v10);
        v14 = v13;
        if ( !v13 )
          break;
        if ( !_Count || !memcmp(v13, _Ptr, _Count) )
        {
          if ( v6->_Mypair._Myval2._Myres >= 0x10 )
            v6 = (std::string *)v6->_Mypair._Myval2._Bx._Ptr;
          return v14 - (char *)v6;
        }
        v10 += i - v14 - 1;
      }
    }
  }
  return -1i64;
}

unsigned __int64 __fastcall std::string::find_first_of(std::string *this, char _Ch, unsigned __int64 _Off)
{
  unsigned __int64 Mysize; // rbx
  std::string *v4; // rsi
  unsigned __int64 v5; // rbx
  std::string *Ptr; // rax
  char *i; // rdi
  _BYTE *v8; // rax

  Mysize = this->_Mypair._Myval2._Mysize;
  v4 = this;
  if ( _Off < Mysize )
  {
    v5 = Mysize - _Off;
    if ( v5 )
    {
      if ( this->_Mypair._Myval2._Myres < 0x10 )
        Ptr = this;
      else
        Ptr = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
      for ( i = &Ptr->_Mypair._Myval2._Bx._Buf[_Off]; v5; i = v8 + 1 )
      {
        v8 = memchr(i, 124, v5);
        if ( !v8 )
          break;
        if ( *v8 == 124 )
        {
          if ( v4->_Mypair._Myval2._Myres >= 0x10 )
            v4 = (std::string *)v4->_Mypair._Myval2._Bx._Ptr;
          return v8 - (_BYTE *)v4;
        }
        v5 += i - v8 - 1;
      }
    }
  }
  return -1i64;
}

std::string *__fastcall SteamNameCache::getMyName(SteamNameCache *this, __int64 a2)
{
  __int64 v3; // rax
  const char *v4; // rax
  unsigned __int64 v5; // r8
  char v6; // dl
  unsigned __int64 i; // rax
  char v8; // dl
  std::string *p_m_myName; // rcx
  std::string *result; // rax

  if ( !this->m_myName._Mypair._Myval2._Mysize )
  {
    v3 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, a2);
    v4 = (const char *)(***(__int64 (__fastcall ****)(_QWORD))(v3 + 16))(*(_QWORD *)(v3 + 16));
    if ( *v4 )
    {
      v5 = -1i64;
      do
        ++v5;
      while ( v4[v5] );
    }
    else
    {
      v5 = 0i64;
    }
    std::string::assign(&this->m_myName, v4, v5);
    if ( std::string::find(&this->m_myName, "|$", 0i64, 2ui64) != -1i64 )
    {
      for ( i = std::string::find_first_of(&this->m_myName, v6, 0i64);
            i != -1i64;
            i = std::string::find_first_of(&this->m_myName, v8, i + 1) )
      {
        if ( this->m_myName._Mypair._Myval2._Myres < 0x10 )
          p_m_myName = &this->m_myName;
        else
          p_m_myName = (std::string *)this->m_myName._Mypair._Myval2._Bx._Ptr;
        p_m_myName->_Mypair._Myval2._Bx._Buf[i] = 73;
      }
    }
  }
  result = &this->m_myName;
  if ( this->m_myName._Mypair._Myval2._Myres >= 0x10 )
    return (std::string *)result->_Mypair._Myval2._Bx._Ptr;
  return result;
}

char **__fastcall SteamNameCache::getName(SteamNameCache *this, CSteamID id)
{
  __int64 v3; // rax
  const char *v4; // rax
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rcx
  unsigned __int64 Mysize; // rsi
  unsigned __int64 v8; // rbx
  std::string *v9; // rdi
  char *i; // rdi
  _BYTE *v11; // rax
  std::string *v12; // rcx
  char *Ptr; // r15
  unsigned __int64 Myres; // r13
  __int64 v15; // rax
  std::string *v16; // rcx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *p_m_reverseLUT; // r12
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Left; // rdi
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Parent; // r14
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v20; // rbx
  char **p_Myval; // rcx
  std::string *v22; // rdx
  unsigned __int64 v23; // r12
  size_t v24; // r8
  int v25; // eax
  char **v26; // rdx
  std::string *v27; // rcx
  size_t v28; // r14
  size_t v29; // r8
  int v30; // eax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *_Newnode; // rax
  bool v32; // r8
  char **v33; // rbx
  char *v34; // rax
  unsigned __int64 v35; // r15
  std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >,bool> result; // [rsp+30h] [rbp-40h] BYREF
  __int64 v38; // [rsp+40h] [rbp-30h]
  std::string v39; // [rsp+48h] [rbp-28h] BYREF
  CSteamID v40; // [rsp+B8h] [rbp+48h] BYREF

  v40.m_steamid.m_comp = id.m_steamid.m_comp;
  v38 = -2i64;
  v3 = ((__int64 (__fastcall *)(_QWORD, _QWORD))SteamInternal_ContextInit)(
         &`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext,
         (CSteamID::SteamID_t)id.m_steamid.m_comp);
  v4 = (const char *)(*(__int64 (__fastcall **)(_QWORD, CSteamID::SteamID_t))(**(_QWORD **)(v3 + 16) + 56i64))(
                       *(_QWORD *)(v3 + 16),
                       v40.m_steamid);
  v39._Mypair._Myval2._Myres = 15i64;
  v39._Mypair._Myval2._Mysize = 0i64;
  v39._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( *v4 )
  {
    v5 = -1i64;
    do
      ++v5;
    while ( v4[v5] );
  }
  else
  {
    v5 = 0i64;
  }
  std::string::assign(&v39, v4, v5);
  if ( std::string::find(&v39, "|$", 0i64, 2ui64) != -1i64 )
  {
    v6 = 0i64;
LABEL_7:
    Mysize = v39._Mypair._Myval2._Mysize;
    if ( v6 >= v39._Mypair._Myval2._Mysize || (v8 = v39._Mypair._Myval2._Mysize - v6, v39._Mypair._Myval2._Mysize == v6) )
    {
      Myres = v39._Mypair._Myval2._Myres;
      Ptr = v39._Mypair._Myval2._Bx._Ptr;
      goto LABEL_25;
    }
    v9 = &v39;
    if ( v39._Mypair._Myval2._Myres >= 0x10 )
      v9 = (std::string *)v39._Mypair._Myval2._Bx._Ptr;
    for ( i = &v9->_Mypair._Myval2._Bx._Buf[v6]; v8; i = v11 + 1 )
    {
      v11 = memchr(i, 124, v8);
      if ( !v11 )
        break;
      if ( *v11 == 124 )
      {
        v12 = &v39;
        Ptr = v39._Mypair._Myval2._Bx._Ptr;
        Myres = v39._Mypair._Myval2._Myres;
        if ( v39._Mypair._Myval2._Myres >= 0x10 )
          v12 = (std::string *)v39._Mypair._Myval2._Bx._Ptr;
        v15 = v11 - (_BYTE *)v12;
        if ( v15 != -1 )
        {
          v16 = &v39;
          if ( v39._Mypair._Myval2._Myres >= 0x10 )
            v16 = (std::string *)v39._Mypair._Myval2._Bx._Ptr;
          v16->_Mypair._Myval2._Bx._Buf[v15] = 73;
          v6 = v15 + 1;
          goto LABEL_7;
        }
        goto LABEL_24;
      }
      v8 += i - v11 - 1;
    }
  }
  Ptr = v39._Mypair._Myval2._Bx._Ptr;
  Myres = v39._Mypair._Myval2._Myres;
LABEL_24:
  Mysize = v39._Mypair._Myval2._Mysize;
LABEL_25:
  p_m_reverseLUT = (std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *)&this->m_reverseLUT;
  result.first._Ptr = p_m_reverseLUT;
  Left = p_m_reverseLUT->_Left;
  Parent = p_m_reverseLUT->_Left->_Parent;
  v20 = p_m_reverseLUT->_Left;
  if ( !Parent->_Isnil )
  {
    do
    {
      p_Myval = (char **)&Parent->_Myval;
      v22 = &v39;
      if ( Myres >= 0x10 )
        v22 = (std::string *)Ptr;
      if ( Parent->_Myval.first._Mypair._Myval2._Myres >= 0x10 )
        p_Myval = (char **)*p_Myval;
      v23 = Parent->_Myval.first._Mypair._Myval2._Mysize;
      v24 = Mysize;
      if ( v23 < Mysize )
        v24 = Parent->_Myval.first._Mypair._Myval2._Mysize;
      if ( !v24 || (v25 = memcmp(p_Myval, v22, v24)) == 0 )
      {
        if ( v23 >= Mysize )
          v25 = v23 > Mysize;
        else
          v25 = -1;
      }
      if ( v25 >= 0 )
      {
        v20 = Parent;
        Parent = Parent->_Left;
      }
      else
      {
        Parent = Parent->_Right;
      }
    }
    while ( !Parent->_Isnil );
    p_m_reverseLUT = result.first._Ptr;
  }
  if ( v20 == Left )
    goto LABEL_55;
  v26 = (char **)&v20->_Myval;
  if ( v20->_Myval.first._Mypair._Myval2._Myres >= 0x10 )
    v26 = (char **)*v26;
  v27 = &v39;
  if ( Myres >= 0x10 )
    v27 = (std::string *)Ptr;
  v28 = v20->_Myval.first._Mypair._Myval2._Mysize;
  v29 = v28;
  if ( Mysize < v28 )
    v29 = Mysize;
  if ( !v29 || (v30 = memcmp(v27, v26, v29)) == 0 )
  {
    if ( Mysize >= v28 )
      v30 = Mysize > v28;
    else
      v30 = -1;
  }
  if ( v30 < 0 )
LABEL_55:
    v20 = Left;
  if ( v20 == p_m_reverseLUT->_Left )
  {
    _Newnode = (std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *)std::_Tree_comp_alloc<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Buynode<std::string,CSteamID>(
                                                                                     (std::_Tree_comp_alloc<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const ,CSteamID> >,0> > *)p_m_reverseLUT,
                                                                                     &v39,
                                                                                     &v40);
    std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string>,std::allocator<std::pair<std::string const,OGLModel *>>,0>>::_Insert_nohint<std::pair<std::string const,OGLModel *> &,std::_Tree_node<std::pair<std::string const,OGLModel *>,void *> *>(
      (std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string >,std::allocator<std::pair<std::string const ,OGLModel *> >,0> > *)p_m_reverseLUT,
      &result,
      v32,
      &_Newnode->_Myval,
      _Newnode);
    v20 = result.first._Ptr;
    Myres = v39._Mypair._Myval2._Myres;
    Ptr = v39._Mypair._Myval2._Bx._Ptr;
  }
  v33 = (char **)&v20->_Myval;
  if ( (unsigned __int64)v33[3] >= 0x10 )
    v33 = (char **)*v33;
  if ( Myres >= 0x10 )
  {
    if ( Myres + 1 >= 0x1000 )
    {
      if ( (v39._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v34 = (char *)*((_QWORD *)Ptr - 1);
      if ( v34 >= Ptr )
        invalid_parameter_noinfo_noreturn();
      v35 = Ptr - v34;
      if ( v35 < 8 )
        invalid_parameter_noinfo_noreturn();
      if ( v35 > 0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = v34;
    }
    operator delete(Ptr);
  }
  return v33;
}

void __fastcall SteamNameCache::request(SteamNameCache *this, CSteamID id)
{
  CSteamID *Myfirst; // rax
  CSteamID *Mylast; // r8
  std::_Tree_node<std::pair<std::string const ,CSteamID>,void *> *Myhead; // rcx
  std::_Tree_node<std::pair<std::string const ,CSteamID>,void *> *Left; // rax
  std::_Tree_node<std::pair<std::string const ,CSteamID>,void *> *Right; // r8
  std::_Tree_node<std::pair<std::string const ,CSteamID>,void *> *j; // r8
  std::_Tree_node<std::pair<std::string const ,CSteamID>,void *> *i; // r8
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 *p_Count; // rdx
  CSteamID *v13; // rax
  signed __int64 v14; // rdi
  CSteamID *v15; // rdx
  CSteamID *v16; // rcx
  unsigned __int64 _Count; // [rsp+38h] [rbp+10h] BYREF

  _Count = id.m_steamid.m_unAll64Bits;
  Myfirst = this->m_requests._Mypair._Myval2._Myfirst;
  Mylast = this->m_requests._Mypair._Myval2._Mylast;
  if ( this->m_requests._Mypair._Myval2._Myfirst == Mylast )
  {
LABEL_4:
    Myhead = this->m_reverseLUT._Mypair._Myval2._Myval2._Myhead;
    Left = Myhead->_Left;
    if ( Myhead->_Left == Myhead )
    {
LABEL_16:
      v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD))SteamInternal_ContextInit)(
              &`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext,
              (CSteamID::SteamID_t)id.m_steamid.m_comp);
      LOBYTE(v11) = 1;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, unsigned __int64, __int64))(**(_QWORD **)(v10 + 16) + 296i64))(
             *(_QWORD *)(v10 + 16),
             _Count,
             v11) )
      {
        v13 = this->m_requests._Mypair._Myval2._Mylast;
        if ( &_Count >= (unsigned __int64 *)v13
          || (p_Count = &_Count, this->m_requests._Mypair._Myval2._Myfirst > (CSteamID *)&_Count) )
        {
          if ( v13 == this->m_requests._Mypair._Myval2._Myend )
            std::vector<CSteamID>::_Reserve(&this->m_requests, (unsigned __int64)p_Count);
          v16 = this->m_requests._Mypair._Myval2._Mylast;
          if ( v16 )
            v16->m_steamid.m_unAll64Bits = _Count;
          ++this->m_requests._Mypair._Myval2._Mylast;
        }
        else
        {
          v14 = ((char *)&_Count - (char *)this->m_requests._Mypair._Myval2._Myfirst) >> 3;
          if ( v13 == this->m_requests._Mypair._Myval2._Myend )
            std::vector<CSteamID>::_Reserve(&this->m_requests, (unsigned __int64)&_Count);
          v15 = this->m_requests._Mypair._Myval2._Mylast;
          if ( v15 )
            v15->m_steamid.m_comp = (CSteamID::SteamID_t::SteamIDComponent_t)this->m_requests._Mypair._Myval2._Myfirst[v14];
          ++this->m_requests._Mypair._Myval2._Mylast;
        }
      }
    }
    else
    {
      while ( Left->_Myval.second.m_steamid.m_unAll64Bits != id.m_steamid.m_comp )
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
          goto LABEL_16;
      }
    }
  }
  else
  {
    while ( Myfirst->m_steamid.m_unAll64Bits != id.m_steamid.m_comp )
    {
      if ( ++Myfirst == Mylast )
        goto LABEL_4;
    }
  }
}

