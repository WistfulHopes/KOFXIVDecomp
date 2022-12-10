#pragma once

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
class AgDisplayManager :
	AgSingleton<AgDisplayManager>
{
public:
	AgDisplayManager(AgDisplayManager &);
	AgDisplayManager(const AgDisplayManager &);
	AgDisplayManager();
	long registerDisplay(AgPointer<AgDisplay>);
	long unregisterDisplay(AgPointer<AgDisplay>);
	unsigned long getDisplayCount();
	AgPointer<AgDisplay> getDisplayByIndex(unsigned long);
protected:
	virtual long onSingletonInit();
	virtual long onSingletonExit();
	struct InternalData;
private:
	AgDisplayManager::InternalData * m_internalData; // 0x8
public:
	virtual ~AgDisplayManager();
	AgDisplayManager & operator=(AgDisplayManager &);
	AgDisplayManager & operator=(const AgDisplayManager &);
};
class AgSingleton<AgDisplayManager>
{
protected:
	~AgSingleton<AgDisplayManager>();
	long onSingletonInit();
	long onSingletonExit();
public:
	static long createInstance();
	static long destroyInstance();
	static AgDisplayManager & getInstance();
	static long hasInstance();
private:
	static AgDisplayManager * createSingleton();
	static void destroySingleton(AgDisplayManager *);
	static AgSingleton<AgDisplayManager> * ms_instance; // 0xFFFFFFFFFFFFFFFF
public:
	AgSingleton<AgDisplayManager>(const AgSingleton<AgDisplayManager> &);
	AgSingleton<AgDisplayManager>();
	AgSingleton<AgDisplayManager> & operator=(const AgSingleton<AgDisplayManager> &);
};