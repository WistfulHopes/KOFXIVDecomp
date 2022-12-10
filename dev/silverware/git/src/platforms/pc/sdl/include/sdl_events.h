#pragma once

enum SDL_EventType
{
	SDL_FIRSTEVENT = 0,
	SDL_QUIT = 256,
	SDL_APP_TERMINATING = 257,
	SDL_APP_LOWMEMORY = 258,
	SDL_APP_WILLENTERBACKGROUND = 259,
	SDL_APP_DIDENTERBACKGROUND = 260,
	SDL_APP_WILLENTERFOREGROUND = 261,
	SDL_APP_DIDENTERFOREGROUND = 262,
	SDL_WINDOWEVENT = 512,
	SDL_SYSWMEVENT = 513,
	SDL_KEYDOWN = 768,
	SDL_KEYUP = 769,
	SDL_TEXTEDITING = 770,
	SDL_TEXTINPUT = 771,
	SDL_KEYMAPCHANGED = 772,
	SDL_MOUSEMOTION = 1024,
	SDL_MOUSEBUTTONDOWN = 1025,
	SDL_MOUSEBUTTONUP = 1026,
	SDL_MOUSEWHEEL = 1027,
	SDL_JOYAXISMOTION = 1536,
	SDL_JOYBALLMOTION = 1537,
	SDL_JOYHATMOTION = 1538,
	SDL_JOYBUTTONDOWN = 1539,
	SDL_JOYBUTTONUP = 1540,
	SDL_JOYDEVICEADDED = 1541,
	SDL_JOYDEVICEREMOVED = 1542,
	SDL_CONTROLLERAXISMOTION = 1616,
	SDL_CONTROLLERBUTTONDOWN = 1617,
	SDL_CONTROLLERBUTTONUP = 1618,
	SDL_CONTROLLERDEVICEADDED = 1619,
	SDL_CONTROLLERDEVICEREMOVED = 1620,
	SDL_CONTROLLERDEVICEREMAPPED = 1621,
	SDL_FINGERDOWN = 1792,
	SDL_FINGERUP = 1793,
	SDL_FINGERMOTION = 1794,
	SDL_DOLLARGESTURE = 2048,
	SDL_DOLLARRECORD = 2049,
	SDL_MULTIGESTURE = 2050,
	SDL_CLIPBOARDUPDATE = 2304,
	SDL_DROPFILE = 4096,
	SDL_DROPTEXT = 4097,
	SDL_DROPBEGIN = 4098,
	SDL_DROPCOMPLETE = 4099,
	SDL_AUDIODEVICEADDED = 4352,
	SDL_AUDIODEVICEREMOVED = 4353,
	SDL_RENDER_TARGETS_RESET = 8192,
	SDL_RENDER_DEVICE_RESET = 8193,
	SDL_USEREVENT = 32768,
	SDL_LASTEVENT = 65535,
};
struct SDL_CommonEvent
{
	unsigned long type; // 0x0
	unsigned long timestamp; // 0x4
};
struct SDL_WindowEvent
{
	unsigned long type; // 0x0
	unsigned long timestamp; // 0x4
	unsigned long windowID; // 0x8
	unsigned char event; // 0xC
	unsigned char padding1; // 0xD
	unsigned char padding2; // 0xE
	unsigned char padding3; // 0xF
	long data1; // 0x10
	long data2; // 0x14
};
struct SDL_KeyboardEvent
{
	unsigned long type; // 0x0
	unsigned long timestamp; // 0x4
	unsigned long windowID; // 0x8
	unsigned char state; // 0xC
	unsigned char repeat; // 0xD
	unsigned char padding2; // 0xE
	unsigned char padding3; // 0xF
	SDL_Keysym keysym; // 0x10
};
struct SDL_TextEditingEvent
{
	unsigned long type; // 0x0
	unsigned long timestamp; // 0x4
	unsigned long windowID; // 0x8
	char text[256]; // 0xC
	long start; // 0x10C
	long length; // 0x110
};
struct SDL_TextInputEvent
{
	unsigned long type; // 0x0
	unsigned long timestamp; // 0x4
	unsigned long windowID; // 0x8
	char text[32]; // 0xC
};
struct SDL_MouseMotionEvent
{
	unsigned long type; // 0x0
	unsigned long timestamp; // 0x4
	unsigned long windowID; // 0x8
	unsigned long which; // 0xC
	unsigned long state; // 0x10
	long x; // 0x14
	long y; // 0x18
	long xrel; // 0x1C
	long yrel; // 0x20
};
struct SDL_MouseButtonEvent
{
	unsigned long type; // 0x0
	unsigned long timestamp; // 0x4
	unsigned long windowID; // 0x8
	unsigned long which; // 0xC
	unsigned char button; // 0x10
	unsigned char state; // 0x11
	unsigned char clicks; // 0x12
	unsigned char padding1; // 0x13
	long x; // 0x14
	long y; // 0x18
};
struct SDL_MouseWheelEvent
{
	unsigned long type; // 0x0
	unsigned long timestamp; // 0x4
	unsigned long windowID; // 0x8
	unsigned long which; // 0xC
	long x; // 0x10
	long y; // 0x14
	unsigned long direction; // 0x18
};
struct SDL_JoyAxisEvent
{
	unsigned long type; // 0x0
	unsigned long timestamp; // 0x4
	long which; // 0x8
	unsigned char axis; // 0xC
	unsigned char padding1; // 0xD
	unsigned char padding2; // 0xE
	unsigned char padding3; // 0xF
	short value; // 0x10
	unsigned short padding4; // 0x12
};
struct SDL_JoyBallEvent
{
	unsigned long type; // 0x0
	unsigned long timestamp; // 0x4
	long which; // 0x8
	unsigned char ball; // 0xC
	unsigned char padding1; // 0xD
	unsigned char padding2; // 0xE
	unsigned char padding3; // 0xF
	short xrel; // 0x10
	short yrel; // 0x12
};
struct SDL_JoyHatEvent
{
	unsigned long type; // 0x0
	unsigned long timestamp; // 0x4
	long which; // 0x8
	unsigned char hat; // 0xC
	unsigned char value; // 0xD
	unsigned char padding1; // 0xE
	unsigned char padding2; // 0xF
};
struct SDL_JoyButtonEvent
{
	unsigned long type; // 0x0
	unsigned long timestamp; // 0x4
	long which; // 0x8
	unsigned char button; // 0xC
	unsigned char state; // 0xD
	unsigned char padding1; // 0xE
	unsigned char padding2; // 0xF
};
struct SDL_JoyDeviceEvent
{
	unsigned long type; // 0x0
	unsigned long timestamp; // 0x4
	long which; // 0x8
};
struct SDL_ControllerAxisEvent
{
	unsigned long type; // 0x0
	unsigned long timestamp; // 0x4
	long which; // 0x8
	unsigned char axis; // 0xC
	unsigned char padding1; // 0xD
	unsigned char padding2; // 0xE
	unsigned char padding3; // 0xF
	short value; // 0x10
	unsigned short padding4; // 0x12
};
struct SDL_ControllerButtonEvent
{
	unsigned long type; // 0x0
	unsigned long timestamp; // 0x4
	long which; // 0x8
	unsigned char button; // 0xC
	unsigned char state; // 0xD
	unsigned char padding1; // 0xE
	unsigned char padding2; // 0xF
};
struct SDL_ControllerDeviceEvent
{
	unsigned long type; // 0x0
	unsigned long timestamp; // 0x4
	long which; // 0x8
};
struct SDL_AudioDeviceEvent
{
	unsigned long type; // 0x0
	unsigned long timestamp; // 0x4
	unsigned long which; // 0x8
	unsigned char iscapture; // 0xC
	unsigned char padding1; // 0xD
	unsigned char padding2; // 0xE
	unsigned char padding3; // 0xF
};
struct SDL_TouchFingerEvent
{
	unsigned long type; // 0x0
	unsigned long timestamp; // 0x4
	long long touchId; // 0x8
	long long fingerId; // 0x10
	float x; // 0x18
	float y; // 0x1C
	float dx; // 0x20
	float dy; // 0x24
	float pressure; // 0x28
};
struct SDL_MultiGestureEvent
{
	unsigned long type; // 0x0
	unsigned long timestamp; // 0x4
	long long touchId; // 0x8
	float dTheta; // 0x10
	float dDist; // 0x14
	float x; // 0x18
	float y; // 0x1C
	unsigned short numFingers; // 0x20
	unsigned short padding; // 0x22
};
struct SDL_DollarGestureEvent
{
	unsigned long type; // 0x0
	unsigned long timestamp; // 0x4
	long long touchId; // 0x8
	long long gestureId; // 0x10
	unsigned long numFingers; // 0x18
	float error; // 0x1C
	float x; // 0x20
	float y; // 0x24
};
struct SDL_DropEvent
{
	unsigned long type; // 0x0
	unsigned long timestamp; // 0x4
	char * file; // 0x8
	unsigned long windowID; // 0x10
};
struct SDL_QuitEvent
{
	unsigned long type; // 0x0
	unsigned long timestamp; // 0x4
};
struct SDL_UserEvent
{
	unsigned long type; // 0x0
	unsigned long timestamp; // 0x4
	unsigned long windowID; // 0x8
	long code; // 0xC
	void * data1; // 0x10
	void * data2; // 0x18
};
struct SDL_SysWMEvent
{
	unsigned long type; // 0x0
	unsigned long timestamp; // 0x4
	SDL_SysWMmsg * msg; // 0x8
};
union SDL_Event
{
public:
	unsigned long type; // 0x0
	SDL_CommonEvent common; // 0x0
	SDL_WindowEvent window; // 0x0
	SDL_KeyboardEvent key; // 0x0
	SDL_TextEditingEvent edit; // 0x0
	SDL_TextInputEvent text; // 0x0
	SDL_MouseMotionEvent motion; // 0x0
	SDL_MouseButtonEvent button; // 0x0
	SDL_MouseWheelEvent wheel; // 0x0
	SDL_JoyAxisEvent jaxis; // 0x0
	SDL_JoyBallEvent jball; // 0x0
	SDL_JoyHatEvent jhat; // 0x0
	SDL_JoyButtonEvent jbutton; // 0x0
	SDL_JoyDeviceEvent jdevice; // 0x0
	SDL_ControllerAxisEvent caxis; // 0x0
	SDL_ControllerButtonEvent cbutton; // 0x0
	SDL_ControllerDeviceEvent cdevice; // 0x0
	SDL_AudioDeviceEvent adevice; // 0x0
	SDL_QuitEvent quit; // 0x0
	SDL_UserEvent user; // 0x0
	SDL_SysWMEvent syswm; // 0x0
	SDL_TouchFingerEvent tfinger; // 0x0
	SDL_MultiGestureEvent mgesture; // 0x0
	SDL_DollarGestureEvent dgesture; // 0x0
	SDL_DropEvent drop; // 0x0
	unsigned char padding[56]; // 0x0
};