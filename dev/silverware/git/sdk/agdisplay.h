#pragma once

struct AgDisplayMode
{
	AgDisplayMode(unsigned long, unsigned long, unsigned long);
	unsigned long m_width; // 0x0
	unsigned long m_height; // 0x4
	unsigned long m_refreshRate; // 0x8
	void __dflt_ctor_closure();
};
enum AgWindowMode
{
	AgWindowMode_Windowed = 0,
	AgWindowMode_Fullscreen = 1,
	AgWindowMode_BorderlessWindowed = 2,
	kNumAgWindowModes = 3,
};
class AgDisplay :
	AgReferencedObject
{
public:
	AgDisplay(const AgDisplay &);
	AgDisplay(AgDisplayPlatformData *);
	~AgDisplay();
	void initialize();
	void onSizing(long *, long *);
	void onSizeChanged(long, long);
	void onFocusChanged(long);
	void onModeChanged(AgWindowMode);
	void onMinimized(long);
	long isMinimized();
	void use();
	void lock();
	void unlock();
	void flush();
	unsigned long getWidth();
	unsigned long getHeight();
	static AgPointer<AgDisplay> getLockedDisplay();
	const AgRectangle & getSize();
	const AgDisplayPlatformData * getPlatformData();
	AgDisplayPlatformImplementation * getPlatformImplementation();
	void setConstrainAspectRatio();
	long getVsyncEnabled();
	AgWindowMode getWindowMode();
	AgMultisampleType getMultisampleType();
	static AgMultisampleType getMaxMultisampleType();
	long getNumScreens();
	long getCurrentScreen();
	void setCurrentScreen(long);
	AgRectangle getScreenBounds(long);
	AgRectangle getCurrentScreenBounds();
	static AgRectangle getScreenSize();
	void setCursor(long, long);
	long getCursorShown();
	unsigned long getNumModes();
	long getMode(unsigned long, unsigned long, AgDisplayMode &);
	AgDisplayMode getMode(unsigned long);
	AgDisplayMode getNativeMode();
	void setResolution(unsigned long, unsigned long);
	void setWindowMode(AgWindowMode);
	void setVsyncEnabled(long);
	void setDisplayProperties(unsigned long, unsigned long, AgWindowMode, long);
private:
	void _updateModes();
	void _updateCursor();
	AgDisplayPlatformImplementation * m_platformImplementation; // 0x8
	unsigned long m_width; // 0x10
	unsigned long m_height; // 0x14
	static AgPointer<AgDisplay> ms_lockedDisplay; // 0xFFFFFFFFFFFFFFFF
	AgRectangle m_size; // 0x18
	AgWindowMode m_windowMode; // 0x28
	float m_aspect; // 0x2C
	long m_constrainAspectRatio; // 0x30
	long m_vsync; // 0x34
	long m_focused; // 0x38
	long m_showCursor; // 0x3C
	long m_lockCursor; // 0x40
	long m_minimized; // 0x44
	std::vector<AgDisplayMode,std::allocator<AgDisplayMode> > m_displayModes; // 0x48
	AgDisplayMode m_nativeMode; // 0x60
public:
	AgDisplay & operator=(const AgDisplay &);
};
class AgPointer<AgDisplay>
{
public:
	AgPointer<AgDisplay>(const AgReference<AgDisplay> &);
	AgPointer<AgDisplay>(AgPointer<AgDisplay> &);
	AgPointer<AgDisplay>(const AgPointer<AgDisplay> &);
	AgPointer<AgDisplay>(AgDisplay *);
	AgPointer<AgDisplay>();
	~AgPointer<AgDisplay>();
	AgPointer<AgDisplay> & operator=(AgPointer<AgDisplay> &);
	AgPointer<AgDisplay> & operator=(const AgReference<AgDisplay> &);
	AgPointer<AgDisplay> & operator=(const AgPointer<AgDisplay> &);
	AgPointer<AgDisplay> & operator=(AgDisplay *);
	bool operator<(const AgPointer<AgDisplay> &);
	AgDisplay * operator->();
	AgDisplay & operator*();
	bool operator==(const AgPointer<AgDisplay> &);
	bool operator==(AgDisplay *);
	bool operator!=(const AgPointer<AgDisplay> &);
	bool operator!=(AgDisplay *);
	AgDisplay * getObject();
	void swap(AgPointer<AgDisplay> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgDisplay * m_ptr; // 0x8
};
class std::vector<AgDisplayMode,std::allocator<AgDisplayMode> > :
	std::_Vector_alloc<std::_Vec_base_types<AgDisplayMode,std::allocator<AgDisplayMode> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgDisplayMode pointer;
	typedef const AgDisplayMode const_pointer;
	typedef AgDisplayMode reference;
	typedef const AgDisplayMode const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgDisplayMode,std::allocator<AgDisplayMode> >(std::initializer_list<AgDisplayMode>, const std::allocator<AgDisplayMode> &);
	vector<AgDisplayMode,std::allocator<AgDisplayMode> >(std::vector<AgDisplayMode,std::allocator<AgDisplayMode> > &, const std::allocator<AgDisplayMode> &);
	vector<AgDisplayMode,std::allocator<AgDisplayMode> >(std::vector<AgDisplayMode,std::allocator<AgDisplayMode> > &);
	vector<AgDisplayMode,std::allocator<AgDisplayMode> >(const std::vector<AgDisplayMode,std::allocator<AgDisplayMode> > &, const std::allocator<AgDisplayMode> &);
	vector<AgDisplayMode,std::allocator<AgDisplayMode> >(const std::vector<AgDisplayMode,std::allocator<AgDisplayMode> > &);
	vector<AgDisplayMode,std::allocator<AgDisplayMode> >(unsigned long long, const AgDisplayMode &, const std::allocator<AgDisplayMode> &);
	vector<AgDisplayMode,std::allocator<AgDisplayMode> >(unsigned long long, const AgDisplayMode &);
	vector<AgDisplayMode,std::allocator<AgDisplayMode> >(unsigned long long);
	vector<AgDisplayMode,std::allocator<AgDisplayMode> >(const std::allocator<AgDisplayMode> &);
	vector<AgDisplayMode,std::allocator<AgDisplayMode> >();
	void _Construct_n(unsigned long long, const AgDisplayMode *);
	std::vector<AgDisplayMode,std::allocator<AgDisplayMode> > & operator=(const std::vector<AgDisplayMode,std::allocator<AgDisplayMode> > &);
	std::vector<AgDisplayMode,std::allocator<AgDisplayMode> > & operator=(std::initializer_list<AgDisplayMode>);
	std::vector<AgDisplayMode,std::allocator<AgDisplayMode> > & operator=(std::vector<AgDisplayMode,std::allocator<AgDisplayMode> > &);
	void _Assign_rv(std::vector<AgDisplayMode,std::allocator<AgDisplayMode> > &);
	void _Assign_rv(std::vector<AgDisplayMode,std::allocator<AgDisplayMode> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgDisplayMode,std::allocator<AgDisplayMode> > &, std::integral_constant<bool,1>);
	void push_back(const AgDisplayMode &);
	void push_back(AgDisplayMode &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDisplayMode> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayMode> > >, unsigned long long, const AgDisplayMode &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDisplayMode> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayMode> > >, const AgDisplayMode &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDisplayMode> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayMode> > >, std::initializer_list<AgDisplayMode>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDisplayMode> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayMode> > >, AgDisplayMode &);
	void assign(unsigned long long, const AgDisplayMode &);
	void assign(std::initializer_list<AgDisplayMode>);
	~vector<AgDisplayMode,std::allocator<AgDisplayMode> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayMode> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDisplayMode> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayMode> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDisplayMode> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDisplayMode> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayMode> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayMode> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDisplayMode> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayMode> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDisplayMode> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayMode> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayMode> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayMode> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayMode> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgDisplayMode &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgDisplayMode> get_allocator();
	AgDisplayMode & at(unsigned long long);
	const AgDisplayMode & at(unsigned long long);
	AgDisplayMode & operator[](unsigned long long);
	const AgDisplayMode & operator[](unsigned long long);
	const AgDisplayMode * data();
	AgDisplayMode * data();
	const AgDisplayMode & front();
	AgDisplayMode & front();
	const AgDisplayMode & back();
	AgDisplayMode & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDisplayMode> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayMode> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayMode> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDisplayMode> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayMode> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgDisplayMode,std::allocator<AgDisplayMode> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgDisplayMode *, AgDisplayMode *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgDisplayMode *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDisplayMode> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayMode> > >, unsigned long long, const AgDisplayMode &);
	AgDisplayMode * _Ufill(AgDisplayMode *, unsigned long long, const AgDisplayMode *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgDisplayMode *, AgDisplayMode *);
};