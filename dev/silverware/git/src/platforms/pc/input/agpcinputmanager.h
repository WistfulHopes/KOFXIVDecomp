#pragma once

class AgPCInputManager :
	AgSDLInputManager
{
public:
	static AgPCInputManager & getInstance();
	AgPCInputManager();
	virtual ~AgPCInputManager();
	virtual void update();
	virtual AgString getPhysicalKeyName(unsigned short);
	virtual long getRealKey(long);
	void processRawInput(HRAWINPUT__ *);
	void processSDLMouse(SDL_MouseMotionEvent &);
	AgPointer<AgStandardKeyboardController> getKeyboard();
	AgPointer<AgStandardMouseController> getMouse();
protected:
	virtual long onSingletonInit();
	virtual long onSingletonExit();
	void onKeyDown(AgKeyboardButton);
	void onKeyUp(AgKeyboardButton);
	void handlePointerMoved(const AgVector2 &);
	void handleMouseButtonDown(AgMouseButton);
	void handleMouseButtonUp(AgMouseButton);
	void handleScrollChanged(const AgVector2 &);
	AgStandardTouchData createTouchData(long, AgVector2);
	void handleKeyDown(SDL_Keysym);
	void handleKeyUp(SDL_Keysym);
	AgKeyboardButton translateKey(SDL_Keysym);
private:
	void registerRawInput();
	void processRawKeyboard(tagRAWINPUT *);
	void processRawMouse(tagRAWINPUT *);
	struct InternalData;
	AgPCInputManager::InternalData * m_internalData; // 0x438
	AgPointer<AgStandardKeyboardController> m_keyboard; // 0x440
	AgPointer<AgStandardMouseController> m_mouse; // 0x450
	AgPointer<AgStandardTouchController> m_touch; // 0x460
};
class AgPointer<AgStandardKeyboardController>
{
public:
	AgPointer<AgStandardKeyboardController>(const AgReference<AgStandardKeyboardController> &);
	AgPointer<AgStandardKeyboardController>(AgPointer<AgStandardKeyboardController> &);
	AgPointer<AgStandardKeyboardController>(const AgPointer<AgStandardKeyboardController> &);
	AgPointer<AgStandardKeyboardController>(AgStandardKeyboardController *);
	AgPointer<AgStandardKeyboardController>();
	~AgPointer<AgStandardKeyboardController>();
	AgPointer<AgStandardKeyboardController> & operator=(AgPointer<AgStandardKeyboardController> &);
	AgPointer<AgStandardKeyboardController> & operator=(const AgReference<AgStandardKeyboardController> &);
	AgPointer<AgStandardKeyboardController> & operator=(const AgPointer<AgStandardKeyboardController> &);
	AgPointer<AgStandardKeyboardController> & operator=(AgStandardKeyboardController *);
	bool operator<(const AgPointer<AgStandardKeyboardController> &);
	AgStandardKeyboardController * operator->();
	AgStandardKeyboardController & operator*();
	bool operator==(const AgPointer<AgStandardKeyboardController> &);
	bool operator==(AgStandardKeyboardController *);
	bool operator!=(const AgPointer<AgStandardKeyboardController> &);
	bool operator!=(AgStandardKeyboardController *);
	AgStandardKeyboardController * getObject();
	void swap(AgPointer<AgStandardKeyboardController> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgStandardKeyboardController * m_ptr; // 0x8
};
AgPointer<AgStandardKeyboardController> AgPCInputManager::getKeyboard(); // 0x1406888C0
class AgPointer<AgStandardMouseController>
{
public:
	AgPointer<AgStandardMouseController>(const AgReference<AgStandardMouseController> &);
	AgPointer<AgStandardMouseController>(AgPointer<AgStandardMouseController> &);
	AgPointer<AgStandardMouseController>(const AgPointer<AgStandardMouseController> &);
	AgPointer<AgStandardMouseController>(AgStandardMouseController *);
	AgPointer<AgStandardMouseController>();
	~AgPointer<AgStandardMouseController>();
	AgPointer<AgStandardMouseController> & operator=(AgPointer<AgStandardMouseController> &);
	AgPointer<AgStandardMouseController> & operator=(const AgReference<AgStandardMouseController> &);
	AgPointer<AgStandardMouseController> & operator=(const AgPointer<AgStandardMouseController> &);
	AgPointer<AgStandardMouseController> & operator=(AgStandardMouseController *);
	bool operator<(const AgPointer<AgStandardMouseController> &);
	AgStandardMouseController * operator->();
	AgStandardMouseController & operator*();
	bool operator==(const AgPointer<AgStandardMouseController> &);
	bool operator==(AgStandardMouseController *);
	bool operator!=(const AgPointer<AgStandardMouseController> &);
	bool operator!=(AgStandardMouseController *);
	AgStandardMouseController * getObject();
	void swap(AgPointer<AgStandardMouseController> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgStandardMouseController * m_ptr; // 0x8
};
AgPointer<AgStandardMouseController> AgPCInputManager::getMouse(); // 0x140688900
class AgPointer<AgStandardTouchController>
{
public:
	AgPointer<AgStandardTouchController>(const AgReference<AgStandardTouchController> &);
	AgPointer<AgStandardTouchController>(AgPointer<AgStandardTouchController> &);
	AgPointer<AgStandardTouchController>(const AgPointer<AgStandardTouchController> &);
	AgPointer<AgStandardTouchController>(AgStandardTouchController *);
	AgPointer<AgStandardTouchController>();
	~AgPointer<AgStandardTouchController>();
	AgPointer<AgStandardTouchController> & operator=(AgPointer<AgStandardTouchController> &);
	AgPointer<AgStandardTouchController> & operator=(const AgReference<AgStandardTouchController> &);
	AgPointer<AgStandardTouchController> & operator=(const AgPointer<AgStandardTouchController> &);
	AgPointer<AgStandardTouchController> & operator=(AgStandardTouchController *);
	bool operator<(const AgPointer<AgStandardTouchController> &);
	AgStandardTouchController * operator->();
	AgStandardTouchController & operator*();
	bool operator==(const AgPointer<AgStandardTouchController> &);
	bool operator==(AgStandardTouchController *);
	bool operator!=(const AgPointer<AgStandardTouchController> &);
	bool operator!=(AgStandardTouchController *);
	AgStandardTouchController * getObject();
	void swap(AgPointer<AgStandardTouchController> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgStandardTouchController * m_ptr; // 0x8
};
class AgPointer<AgStandardTouchController>
{
public:
	AgPointer<AgStandardTouchController>(const AgReference<AgStandardTouchController> &);
	AgPointer<AgStandardTouchController>(AgPointer<AgStandardTouchController> &);
	AgPointer<AgStandardTouchController>(const AgPointer<AgStandardTouchController> &);
	AgPointer<AgStandardTouchController>(AgStandardTouchController *);
	AgPointer<AgStandardTouchController>();
	~AgPointer<AgStandardTouchController>();
	AgPointer<AgStandardTouchController> & operator=(AgPointer<AgStandardTouchController> &);
	AgPointer<AgStandardTouchController> & operator=(const AgReference<AgStandardTouchController> &);
	AgPointer<AgStandardTouchController> & operator=(const AgPointer<AgStandardTouchController> &);
	AgPointer<AgStandardTouchController> & operator=(AgStandardTouchController *);
	bool operator<(const AgPointer<AgStandardTouchController> &);
	AgStandardTouchController * operator->();
	AgStandardTouchController & operator*();
	bool operator==(const AgPointer<AgStandardTouchController> &);
	bool operator==(AgStandardTouchController *);
	bool operator!=(const AgPointer<AgStandardTouchController> &);
	bool operator!=(AgStandardTouchController *);
	AgStandardTouchController * getObject();
	void swap(AgPointer<AgStandardTouchController> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgStandardTouchController * m_ptr; // 0x8
public:
	AgPointer<AgController> operator class AgPointer<class AgController>();
};