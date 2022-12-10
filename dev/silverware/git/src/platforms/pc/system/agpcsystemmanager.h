#pragma once

class AgPCSystemManager :
	AgSystemManager
{
public:
	static AgPCSystemManager & getInstance();
	AgPCSystemManager();
	virtual ~AgPCSystemManager();
	SDL_Window * getWindow();
	HWND__ * getWindowHandle();
	virtual long run();
private:
	long createWindow();
public:
	virtual void createWindow(const AgWindowConfig &);
	virtual void createDisplay();
	virtual void setWindowProperties(unsigned long, unsigned long, long, AgWindowMode);
	void setFullscreen(long);
	long getFullscreen();
	long getFocused();
	static void processCommandArguments();
	static long isRunningVistaOrLater();
	static long isRunningWin7OrLater();
	void screenCapture(long);
	void onExit();
	AgWindowConfig & getWindowConfig();
	virtual unsigned long long getVideoMemorySize();
protected:
	virtual void onShutdown();
	virtual long onSingletonInit();
	virtual long onSingletonExit();
	void handleWindowFocus(long);
	void handleWindowClose();
	void handleWindowResize(long, long);
	void handleWindowResizing(long *, long *);
private:
	void onWindowActivate(long);
	static long long WndProc(HWND__ *, unsigned long, unsigned long long, long long);
	long waitForWindow();
	void destroyWindow();
	long createWindowD3D();
	long createWindowSDL();
	void processWindowMessage();
	long updateWindowProperties(long);
	void updateProperties();
	void updateWindowActivate();
	long m_activated; // 0x360
	long m_focused; // 0x364
	long m_windowCreated; // 0x368
	HWND__ * m_windowHandle; // 0x370
	SDL_Window * m_sdlWindow; // 0x378
	void * m_sdlGlContext; // 0x380
	void * * m_sdlLoadContexts; // 0x388
	unsigned long m_sdlLoadContextCount; // 0x390
	AgPointer<AgDisplay> m_display; // 0x398
	AgSemaphore m_windowProcSem; // 0x3A8
	AgSemaphore m_windowCreateSem; // 0x3B8
	AgWindowConfig m_windowProperties; // 0x3C8
	AgWindowConfig m_pendingWindowProperties; // 0x3F0
	unsigned long long m_videoMemorySize; // 0x418
};