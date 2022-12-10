#pragma once

class Scaleform::GFx::Event :
	Scaleform::NewOverrideBase<2>
{
	enum EventType
	{
		Unknown = 0,
		MouseMove = 1,
		MouseDown = 2,
		MouseUp = 3,
		MouseWheel = 4,
		KeyDown = 5,
		KeyUp = 6,
		SceneResize = 7,
		SetFocus = 8,
		KillFocus = 9,
		TouchBegin = 10,
		TouchEnd = 11,
		TouchMove = 12,
		TouchTap = 13,
		GestureBegin = 14,
		Gesture = 15,
		GestureEnd = 16,
		GestureSimple = 17,
		GamePadAnalog = 18,
		OrientationChanged = 19,
		AppLifecycle = 20,
		DoShowMouse = 21,
		DoHideMouse = 22,
		DoSetMouseCursor = 23,
		EnableClipping = 24,
		DisableClipping = 25,
		Accelerometer = 26,
		Geolocation = 27,
		Status = 28,
		Char = 29,
		IME = 30,
	};
public:
	Scaleform::GFx::Event::EventType Type; // 0x0
	Scaleform::KeyModifiers Modifiers; // 0x4
	Event(Scaleform::GFx::Event::EventType, Scaleform::KeyModifiers);
	Event(Scaleform::GFx::Event::EventType);
	void __dflt_ctor_closure();
};
class Scaleform::GFx::MouseEvent :
	Scaleform::GFx::Event
{
public:
	float x; // 0x8
	float y; // 0xC
	float ScrollDelta; // 0x10
	unsigned long Button; // 0x14
	unsigned long MouseIndex; // 0x18
	MouseEvent(Scaleform::GFx::Event::EventType, unsigned long);
	MouseEvent(Scaleform::GFx::Event::EventType, unsigned long, float, float, float, unsigned long);
	MouseEvent();
};
class Scaleform::GFx::TouchEvent :
	Scaleform::GFx::Event
{
public:
	float x; // 0x8
	float y; // 0xC
	unsigned long TouchPointID; // 0x10
	float Pressure; // 0x14
	float WContact; // 0x18
	float HContact; // 0x1C
	unsigned long TimeStamp; // 0x20
	bool PrimaryPoint; // 0x24
	TouchEvent(Scaleform::GFx::Event::EventType, unsigned long, float, float, float, float, bool, float);
	TouchEvent();
};
class Scaleform::GFx::AccelerometerEvent :
	Scaleform::GFx::Event
{
public:
	long idAcc; // 0x8
	double timestamp; // 0x10
	double accelerationX; // 0x18
	double accelerationY; // 0x20
	double accelerationZ; // 0x28
	AccelerometerEvent(Scaleform::GFx::Event::EventType, long, double, double, double, double);
	AccelerometerEvent();
};
class Scaleform::GFx::GeolocationEvent :
	Scaleform::GFx::Event
{
public:
	long idGeo; // 0x8
	double latitude; // 0x10
	double longitude; // 0x18
	double altitude; // 0x20
	double hAccuracy; // 0x28
	double vAccuracy; // 0x30
	double speed; // 0x38
	double heading; // 0x40
	double timestamp; // 0x48
	GeolocationEvent(Scaleform::GFx::Event::EventType, long, double, double, double, double, double, double, double, double);
	GeolocationEvent();
};
class Scaleform::GFx::StatusEvent :
	Scaleform::GFx::Event
{
public:
	Scaleform::String * code; // 0x8
	Scaleform::String * level; // 0x10
	Scaleform::String * extensionId; // 0x18
	Scaleform::String * contextId; // 0x20
	StatusEvent(Scaleform::GFx::Event::EventType, Scaleform::String *, Scaleform::String *, Scaleform::String *, Scaleform::String *);
};
class Scaleform::GFx::GestureEvent :
	Scaleform::GFx::Event
{
	enum GestureMaskBits
	{
		GestureBit_Unknown = 0,
		GestureBit_Pan = 1,
		GestureBit_Zoom = 2,
		GestureBit_Rotate = 4,
		GestureBit_Swipe = 8,
		GestureBit_PressAndTap = 16,
		GestureBit_TwoFingerTap = 32,
		GestureBit_Last = 32,
		GestureBit_All = 255,
	};
public:
	unsigned long GestureMask; // 0x8
	float x; // 0xC
	float y; // 0x10
	float OffsetX; // 0x14
	float OffsetY; // 0x18
	float ScaleX; // 0x1C
	float ScaleY; // 0x20
	float Rotation; // 0x24
	GestureEvent(Scaleform::GFx::Event::EventType, unsigned long, float, float, float, float, float, float, float);
	GestureEvent(Scaleform::GFx::Event::EventType);
	GestureEvent();
};
class Scaleform::GFx::OrientationEvent :
	Scaleform::GFx::Event
{
	enum OrientationType
	{
		Default = 0,
		RotatedLeft = 1,
		RotatedRight = 2,
		UpsideDown = 3,
		Unknown = 4,
	};
public:
	Scaleform::GFx::OrientationEvent::OrientationType Orientation; // 0x8
	OrientationEvent(Scaleform::GFx::OrientationEvent::OrientationType);
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AppLifecycleEvent :
	Scaleform::GFx::Event
{
	enum LifecycleEventType
	{
		OnPause = 0,
		OnResume = 1,
	};
public:
	Scaleform::GFx::AppLifecycleEvent::LifecycleEventType Status; // 0x8
	AppLifecycleEvent(Scaleform::GFx::AppLifecycleEvent::LifecycleEventType);
};
class Scaleform::GFx::ClippingEvent :
	Scaleform::GFx::Event
{
public:
	ClippingEvent(Scaleform::GFx::Event::EventType);
	ClippingEvent();
};
class Scaleform::GFx::MouseCursorEvent :
	Scaleform::GFx::Event
{
	enum CursorShapeType
	{
		ARROW = 0,
		HAND = 1,
		IBEAM = 2,
		BUTTON = 3,
	};
public:
	unsigned long mCursorShape; // 0x8
	unsigned long MouseIndex; // 0xC
	MouseCursorEvent(Scaleform::GFx::Event::EventType, unsigned long);
	MouseCursorEvent(Scaleform::GFx::MouseCursorEvent::CursorShapeType, unsigned long);
	MouseCursorEvent();
	Scaleform::GFx::MouseCursorEvent::CursorShapeType GetCursorShape();
};
class Scaleform::GFx::GamePadAnalogEvent :
	Scaleform::GFx::Event
{
public:
	unsigned long Code; // 0x8
	unsigned char ControllerIndex; // 0xC
	float AnalogX; // 0x10
	float AnalogY; // 0x14
	GamePadAnalogEvent(unsigned long, float, float, unsigned char);
};
class Scaleform::GFx::KeyEvent :
	Scaleform::GFx::Event
{
public:
	Scaleform::Key::Code KeyCode; // 0x8
	unsigned char AsciiCode; // 0xC
	unsigned long WcharCode; // 0x10
	unsigned char KeyboardIndex; // 0x14
	KeyEvent(Scaleform::GFx::Event::EventType, Scaleform::Key::Code, unsigned char, unsigned long, Scaleform::KeyModifiers, unsigned char);
	KeyEvent(Scaleform::GFx::Event::EventType, Scaleform::Key::Code, unsigned char, unsigned long, unsigned char);
	void __dflt_ctor_closure();
};
class Scaleform::GFx::CharEvent :
	Scaleform::GFx::Event
{
public:
	unsigned long WcharCode; // 0x8
	unsigned char KeyboardIndex; // 0xC
	CharEvent(unsigned long, unsigned char);
};
class Scaleform::GFx::KeyboardState :
	Scaleform::RefCountBase<Scaleform::GFx::KeyboardState,2>
{
	class IListener;
protected:
	Scaleform::GFx::KeyboardState::IListener * pListener; // 0x10
	class KeyQueue;
	Scaleform::GFx::KeyboardState::KeyQueue KeyQueue; // 0x18
	unsigned char KeyboardIndex; // 0x664
	unsigned char Keymap[29]; // 0x665
	bool Toggled[3]; // 0x682
public:
	KeyboardState(Scaleform::GFx::KeyboardState &);
	KeyboardState(const Scaleform::GFx::KeyboardState &);
	KeyboardState();
	void SetKeyboardIndex(unsigned char);
	unsigned char GetKeyboardIndex();
	bool IsKeyDown(long);
	bool IsKeyToggled(long);
	void SetKeyToggled(long, bool);
	void SetKeyDown(long, unsigned char, Scaleform::KeyModifiers, bool);
	void SetKeyUp(long, unsigned char, Scaleform::KeyModifiers, bool);
	void SetChar(unsigned long);
	bool IsQueueEmpty();
	bool GetQueueEntry(short *, unsigned char *, unsigned long *, Scaleform::GFx::Event::EventType *, Scaleform::KeyModifiers *);
	void CleanupListener();
	void SetListener(Scaleform::GFx::KeyboardState::IListener *);
	void NotifyListeners(Scaleform::GFx::InteractiveObject *, const Scaleform::GFx::EventId &, long);
	void UpdateListeners(const Scaleform::GFx::EventId &);
	void ResetState();
	Scaleform::KeyModifiers GetKeyModifiers();
	virtual ~KeyboardState();
	Scaleform::GFx::KeyboardState & operator=(Scaleform::GFx::KeyboardState &);
	Scaleform::GFx::KeyboardState & operator=(const Scaleform::GFx::KeyboardState &);
};
class Scaleform::RefCountBase<Scaleform::GFx::KeyboardState,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::GFx::KeyboardState,2>(Scaleform::RefCountBase<Scaleform::GFx::KeyboardState,2> &);
	RefCountBase<Scaleform::GFx::KeyboardState,2>(const Scaleform::RefCountBase<Scaleform::GFx::KeyboardState,2> &);
	RefCountBase<Scaleform::GFx::KeyboardState,2>();
	virtual ~RefCountBase<Scaleform::GFx::KeyboardState,2>();
	Scaleform::RefCountBase<Scaleform::GFx::KeyboardState,2> & operator=(Scaleform::RefCountBase<Scaleform::GFx::KeyboardState,2> &);
	Scaleform::RefCountBase<Scaleform::GFx::KeyboardState,2> & operator=(const Scaleform::RefCountBase<Scaleform::GFx::KeyboardState,2> &);
};
class Scaleform::GFx::KeyboardState::IListener
{
public:
	~IListener();
	void OnKeyDown(Scaleform::GFx::InteractiveObject *, const Scaleform::GFx::EventId &, long);
	void OnKeyUp(Scaleform::GFx::InteractiveObject *, const Scaleform::GFx::EventId &, long);
	void Update(const Scaleform::GFx::EventId &);
	IListener(const Scaleform::GFx::KeyboardState::IListener &);
	IListener();
	Scaleform::GFx::KeyboardState::IListener & operator=(const Scaleform::GFx::KeyboardState::IListener &);
};
class Scaleform::GFx::KeyboardState::KeyQueue
{
	enum <unnamed-enum-KeyQueueSize>
	{
		KeyQueueSize = 100,
	};
	struct KeyRecord;
private:
	Scaleform::GFx::KeyboardState::KeyQueue::KeyRecord Buffer[100]; // 0x0
	unsigned long PutIdx; // 0x640
	unsigned long GetIdx; // 0x644
	unsigned long Count; // 0x648
public:
	KeyQueue();
	void Put(short, unsigned char, unsigned long, Scaleform::GFx::Event::EventType, Scaleform::KeyModifiers);
	bool Get(short *, unsigned char *, unsigned long *, Scaleform::GFx::Event::EventType *, Scaleform::KeyModifiers *);
	bool IsEmpty();
	void ResetState();
};
struct Scaleform::GFx::KeyboardState::KeyQueue::KeyRecord
{
	unsigned long wcharCode; // 0x0
	short code; // 0x4
	Scaleform::GFx::Event::EventType event; // 0x8
	unsigned char ascii; // 0xC
	Scaleform::KeyModifiers keyMods; // 0xD
	KeyRecord();
};
class Scaleform::GFx::IMEEvent :
	Scaleform::GFx::Event
{
	enum IMEEventType
	{
		IME_Default = 0,
		IME_PreProcessKeyboard = 1,
	};
public:
	Scaleform::GFx::IMEEvent::IMEEventType IMEEvtType; // 0x8
	IMEEvent(Scaleform::GFx::IMEEvent::IMEEventType);
	void __dflt_ctor_closure();
};
class Scaleform::GFx::IMEWin32Event :
	Scaleform::GFx::IMEEvent
{
public:
	unsigned long Message; // 0xC
	unsigned long long WParam; // 0x10
	unsigned long long LParam; // 0x18
	unsigned long long hWND; // 0x20
	long Options; // 0x28
	IMEWin32Event(Scaleform::GFx::IMEEvent::IMEEventType, unsigned long long, unsigned long, unsigned long long, unsigned long long, long);
	IMEWin32Event(Scaleform::GFx::IMEEvent::IMEEventType);
	void __dflt_ctor_closure();
};
class Scaleform::GFx::IMEXBox360Event :
	Scaleform::GFx::IMEEvent
{
public:
	unsigned short VirtualKey; // 0xC
	wchar_t Unicode; // 0xE
	unsigned short Flags; // 0x10
	unsigned char UserIndex; // 0x12
	unsigned char HidCode; // 0x13
	void * pLastKey; // 0x18
	unsigned long eType; // 0x20
	IMEXBox360Event(unsigned short, wchar_t, unsigned short, unsigned char, unsigned char, void *, unsigned long);
};
class Scaleform::GFx::IMEPS3Event :
	Scaleform::GFx::IMEEvent
{
public:
	IMEPS3Event(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long);
	IMEPS3Event();
	unsigned long KeyCode; // 0xC
	unsigned long CharCode; // 0x10
	unsigned long Modifiers; // 0x14
	unsigned long LastKeyCode; // 0x18
	unsigned long LastCharCode; // 0x1C
	unsigned long LastModifiers; // 0x20
};
class Scaleform::GFx::IMEMacEvent :
	Scaleform::GFx::IMEEvent
{
public:
	IMEMacEvent(char *, char *, unsigned long);
	IMEMacEvent();
	char * compositionString; // 0x10
	char * attributes; // 0x18
	unsigned long eType; // 0x20
};
class Scaleform::GFx::SetFocusEvent :
	Scaleform::GFx::Event
{
public:
	Scaleform::KeyModifiers KeysStates[6]; // 0x8
	SetFocusEvent(unsigned long, Scaleform::KeyModifiers *);
	SetFocusEvent(Scaleform::KeyModifiers);
	SetFocusEvent();
};