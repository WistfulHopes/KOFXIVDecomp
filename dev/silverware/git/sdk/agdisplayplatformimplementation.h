#pragma once

class AgDisplayPlatformImplementation
{
public:
	AgDisplayPlatformImplementation(AgDisplayPlatformData *);
	~AgDisplayPlatformImplementation();
	void use();
	void lock();
	void unlock();
	void flush();
	void setCursor(long, long);
	void getDisplayModes(std::vector<AgDisplayMode,std::allocator<AgDisplayMode> > &);
	void getDisplayNativeMode(AgDisplayMode &);
	long setDisplayMode(AgDisplayMode, AgWindowMode, long);
	static long getNumScreens();
	static long getCurrentScreen();
	static AgRectangle getScreenBounds(long);
	static AgRectangle getCurrentScreenBounds();
	static AgRectangle getScreenSize();
	void loadingLock(unsigned long);
	void loadingUnlock(unsigned long);
	void loadingFlush();
	long IsMinimized();
	AgMultisampleType getMultisampleType();
	static AgMultisampleType getMaxMultisampleType();
	const AgDisplayPlatformData * getPlatformData();
private:
	AgDisplayPlatformData * m_platformData; // 0x0
	static std::map<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> > > m_screenBounds; // 0xFFFFFFFFFFFFFFFF
};
class std::map<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> > > :
	std::_Tree<std::_Tmap_traits<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> >,0> >
{
	class _Myt;
	class _Mybase;
	typedef long key_type;
	class mapped_type;
	struct key_compare;
	class value_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<int const ,AgRectangle> pointer;
	typedef const std::pair<int const ,AgRectangle> const_pointer;
	typedef std::pair<int const ,AgRectangle> reference;
	typedef const std::pair<int const ,AgRectangle> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> > >(std::initializer_list<std::pair<int const ,AgRectangle> >, const std::less<int> &, const std::allocator<std::pair<int const ,AgRectangle> > &);
	map<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> > >(std::initializer_list<std::pair<int const ,AgRectangle> >, const std::less<int> &);
	map<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> > >(std::initializer_list<std::pair<int const ,AgRectangle> >);
	map<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> > >(std::map<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> > > &, const std::allocator<std::pair<int const ,AgRectangle> > &);
	map<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> > >(std::map<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> > > &);
	map<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> > >(const std::less<int> &, const std::allocator<std::pair<int const ,AgRectangle> > &);
	map<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> > >(const std::less<int> &);
	map<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> > >(const std::map<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> > > &, const std::allocator<std::pair<int const ,AgRectangle> > &);
	map<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> > >(const std::map<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> > > &);
	map<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> > >(const std::allocator<std::pair<int const ,AgRectangle> > &);
	map<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> > >();
	std::map<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> > > & operator=(std::initializer_list<std::pair<int const ,AgRectangle> >);
	std::map<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> > > & operator=(std::map<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> > > &);
	std::map<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> > > & operator=(const std::map<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> > > &);
	AgRectangle & operator[](const long &);
	AgRectangle & operator[](long &);
	void swap(std::map<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> > > &);
	const AgRectangle & at(const long &);
	AgRectangle & at(const long &);
	~map<int,AgRectangle,std::less<int>,std::allocator<std::pair<int const ,AgRectangle> > >();
};