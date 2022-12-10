#pragma once

class AgSDLInputManager :
	AgInputManager
{
public:
	static AgSDLInputManager & getInstance();
	static long getSDLScancode(AgKeyboardButton);
	AgSDLInputManager();
	virtual ~AgSDLInputManager();
	void addSDLController(long);
	void removeSDLController(long);
	void addSDLJoystick(long);
	void removeSDLJoystick(long);
	static AgControllerHardwareType getHardwareType(_SDL_Joystick *, AgControllerUID &);
protected:
	virtual long onSingletonInit();
	class AgSDLControllerMap;
	class AgSDLJoystickMap;
private:
	std::map<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> > > m_sdlControllers; // 0x418
	std::map<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> > > m_sdlJoysticks; // 0x428
};
class std::map<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> > > :
	std::_Tree<std::_Tmap_traits<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> >,0> >
{
	class _Myt;
	class _Mybase;
	typedef _SDL_GameController key_type;
	typedef long long mapped_type;
	struct key_compare;
	class value_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<_SDL_GameController * const,__int64> pointer;
	typedef const std::pair<_SDL_GameController * const,__int64> const_pointer;
	typedef std::pair<_SDL_GameController * const,__int64> reference;
	typedef const std::pair<_SDL_GameController * const,__int64> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> > >(std::initializer_list<std::pair<_SDL_GameController * const,__int64> >, const std::less<_SDL_GameController *> &, const std::allocator<std::pair<_SDL_GameController * const,__int64> > &);
	map<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> > >(std::initializer_list<std::pair<_SDL_GameController * const,__int64> >, const std::less<_SDL_GameController *> &);
	map<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> > >(std::initializer_list<std::pair<_SDL_GameController * const,__int64> >);
	map<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> > >(std::map<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> > > &, const std::allocator<std::pair<_SDL_GameController * const,__int64> > &);
	map<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> > >(std::map<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> > > &);
	map<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> > >(const std::less<_SDL_GameController *> &, const std::allocator<std::pair<_SDL_GameController * const,__int64> > &);
	map<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> > >(const std::less<_SDL_GameController *> &);
	map<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> > >(const std::map<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> > > &, const std::allocator<std::pair<_SDL_GameController * const,__int64> > &);
	map<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> > >(const std::map<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> > > &);
	map<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> > >(const std::allocator<std::pair<_SDL_GameController * const,__int64> > &);
	map<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> > >();
	std::map<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> > > & operator=(std::initializer_list<std::pair<_SDL_GameController * const,__int64> >);
	std::map<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> > > & operator=(std::map<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> > > &);
	std::map<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> > > & operator=(const std::map<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> > > &);
	long long & operator[](_SDL_GameController * &);
	long long & operator[](_SDL_GameController * &);
	void swap(std::map<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> > > &);
	const long long & at(_SDL_GameController * &);
	long long & at(_SDL_GameController * &);
	~map<_SDL_GameController *,__int64,std::less<_SDL_GameController *>,std::allocator<std::pair<_SDL_GameController * const,__int64> > >();
};
class std::map<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> > > :
	std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> >
{
	class _Myt;
	class _Mybase;
	typedef _SDL_Joystick key_type;
	typedef long long mapped_type;
	struct key_compare;
	class value_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<_SDL_Joystick * const,__int64> pointer;
	typedef const std::pair<_SDL_Joystick * const,__int64> const_pointer;
	typedef std::pair<_SDL_Joystick * const,__int64> reference;
	typedef const std::pair<_SDL_Joystick * const,__int64> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> > >(std::initializer_list<std::pair<_SDL_Joystick * const,__int64> >, const std::less<_SDL_Joystick *> &, const std::allocator<std::pair<_SDL_Joystick * const,__int64> > &);
	map<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> > >(std::initializer_list<std::pair<_SDL_Joystick * const,__int64> >, const std::less<_SDL_Joystick *> &);
	map<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> > >(std::initializer_list<std::pair<_SDL_Joystick * const,__int64> >);
	map<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> > >(std::map<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> > > &, const std::allocator<std::pair<_SDL_Joystick * const,__int64> > &);
	map<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> > >(std::map<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> > > &);
	map<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> > >(const std::less<_SDL_Joystick *> &, const std::allocator<std::pair<_SDL_Joystick * const,__int64> > &);
	map<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> > >(const std::less<_SDL_Joystick *> &);
	map<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> > >(const std::map<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> > > &, const std::allocator<std::pair<_SDL_Joystick * const,__int64> > &);
	map<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> > >(const std::map<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> > > &);
	map<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> > >(const std::allocator<std::pair<_SDL_Joystick * const,__int64> > &);
	map<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> > >();
	std::map<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> > > & operator=(std::initializer_list<std::pair<_SDL_Joystick * const,__int64> >);
	std::map<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> > > & operator=(std::map<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> > > &);
	std::map<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> > > & operator=(const std::map<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> > > &);
	long long & operator[](_SDL_Joystick * &);
	long long & operator[](_SDL_Joystick * &);
	void swap(std::map<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> > > &);
	const long long & at(_SDL_Joystick * &);
	long long & at(_SDL_Joystick * &);
	~map<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> > >();
};