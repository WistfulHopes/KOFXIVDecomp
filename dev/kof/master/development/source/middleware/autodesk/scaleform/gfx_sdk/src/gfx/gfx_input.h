#pragma once

class Scaleform::GFx::InputEventsQueueEntry
{
	typedef unsigned short ButtonsStateType;
	enum MouseButtonMask
	{
		MouseButton_Left = 1,
		MouseButton_Right = 2,
		MouseButton_Middle = 4,
		MouseButton_MaxNum = 16,
		MouseButton_LastButton = 32768,
		MouseButton_AllMask = 65535,
	};
	enum MouseButtonFlags
	{
		MouseButton_Released = 128,
		MouseButton_Move = 64,
		MouseButton_Wheel = 32,
	};
	enum QueueEntryType
	{
		QE_Mouse = 0,
		QE_Key = 1,
		QE_Touch = 2,
		QE_Gesture = 3,
		QE_AnalogGamePad = 4,
		QE_Accelerometer = 5,
		QE_Geolocation = 6,
		QE_Status = 7,
	};
public:
	Scaleform::GFx::InputEventsQueueEntry::QueueEntryType t; // 0x0
	struct MouseEntry;
	struct KeyEntry;
	struct GamePadAnalogEntry;
	enum TouchType
	{
		Touch_Begin = 0,
		Touch_End = 1,
		Touch_Move = 2,
	};
	struct TouchEntry;
	enum GesturePhase
	{
		Phase_All = 0,
		Phase_Begin = 1,
		Phase_End = 2,
		Phase_Update = 3,
	};
	enum GestureMask
	{
		GestureBit_Unknown = 0,
		GestureBit_Pan = 1,
		GestureBit_Zoom = 2,
		GestureBit_Rotate = 4,
		GestureBit_Swipe = 8,
		GestureBit_PressAndTap = 16,
		GestureBit_Last = 32,
		GestureBit_All = 255,
	};
	struct GestureEntry;
	struct AccelerometerEntry;
	struct GeolocationEntry;
	struct StatusEntry;
	union Entry;
	Scaleform::GFx::InputEventsQueueEntry::Entry u; // 0x8
	bool IsMouseEntry();
	bool IsKeyEntry();
	bool IsTouchEntry();
	bool IsGestureEntry();
	bool IsAnalogGampadEntry();
	bool IsAccelerometerEntry();
	bool IsGeolocationEntry();
	bool IsStatusEntry();
	const Scaleform::GFx::InputEventsQueueEntry::MouseEntry & GetMouseEntry();
	Scaleform::GFx::InputEventsQueueEntry::MouseEntry & GetMouseEntry();
	const Scaleform::GFx::InputEventsQueueEntry::KeyEntry & GetKeyEntry();
	Scaleform::GFx::InputEventsQueueEntry::KeyEntry & GetKeyEntry();
	const Scaleform::GFx::InputEventsQueueEntry::TouchEntry & GetTouchEntry();
	Scaleform::GFx::InputEventsQueueEntry::TouchEntry & GetTouchEntry();
	const Scaleform::GFx::InputEventsQueueEntry::GestureEntry & GetGestureEntry();
	Scaleform::GFx::InputEventsQueueEntry::GestureEntry & GetGestureEntry();
	const Scaleform::GFx::InputEventsQueueEntry::GamePadAnalogEntry & GetGamePadAnalogEntry();
	Scaleform::GFx::InputEventsQueueEntry::GamePadAnalogEntry & GetGamePadAnalogEntry();
	const Scaleform::GFx::InputEventsQueueEntry::AccelerometerEntry & GetAccelerometerEntry();
	Scaleform::GFx::InputEventsQueueEntry::AccelerometerEntry & GetAccelerometerEntry();
	const Scaleform::GFx::InputEventsQueueEntry::GeolocationEntry & GetGeolocationEntry();
	Scaleform::GFx::InputEventsQueueEntry::GeolocationEntry & GetGeolocationEntry();
	const Scaleform::GFx::InputEventsQueueEntry::StatusEntry & GetStatusEntry();
	Scaleform::GFx::InputEventsQueueEntry::StatusEntry & GetStatusEntry();
};
struct Scaleform::GFx::InputEventsQueueEntry::MouseEntry
{
	float PosX; // 0x0
	float PosY; // 0x4
	unsigned short ButtonsState; // 0x8
	char WheelScrollDelta; // 0xA
	unsigned char Flags; // 0xB
	unsigned char MouseIndex; // 0xC
	Scaleform::Render::Point<float> GetPosition();
	unsigned long GetMouseIndex();
	bool IsButtonsStateChanged();
	bool IsAnyButtonPressed();
	bool IsAnyButtonReleased();
	bool IsMoved();
	bool IsLeftButton();
	bool IsRightButton();
	bool IsMiddleButton();
	bool IsIndexedButton(unsigned long);
	bool AreButtons(unsigned long);
	bool IsMouseWheel();
};
struct Scaleform::GFx::InputEventsQueueEntry::KeyEntry
{
	unsigned long WcharCode; // 0x0
	unsigned long Code; // 0x4
	unsigned char AsciiCode; // 0x8
	unsigned char KeysState; // 0x9
	unsigned char KeyboardIndex; // 0xA
	bool KeyIsDown; // 0xB
};
struct Scaleform::GFx::InputEventsQueueEntry::GamePadAnalogEntry
{
	unsigned long Code; // 0x0
	float AnalogX; // 0x4
	float AnalogY; // 0x8
	unsigned char ControllerIndex; // 0xC
};
struct Scaleform::GFx::InputEventsQueueEntry::TouchEntry
{
	Scaleform::GFx::InputEventsQueueEntry::TouchType Type; // 0x0
	float PosX; // 0x4
	float PosY; // 0x8
	float Pressure; // 0xC
	unsigned long TouchPointID; // 0x10
	float WContact; // 0x14
	float HContact; // 0x18
	bool PrimaryPoint; // 0x1C
	Scaleform::Render::Point<float> GetPosition();
};
struct Scaleform::GFx::InputEventsQueueEntry::GestureEntry
{
	unsigned long Phase; // 0x0
	float PosX; // 0x4
	float PosY; // 0x8
	float OffsetX; // 0xC
	float OffsetY; // 0x10
	float ScaleX; // 0x14
	float ScaleY; // 0x18
	float Rotation; // 0x1C
	unsigned long GestureMask; // 0x20
	Scaleform::Render::Point<float> GetPosition();
};
struct Scaleform::GFx::InputEventsQueueEntry::AccelerometerEntry
{
	long IdAcc; // 0x0
	double Timestamp; // 0x8
	double AccelerationX; // 0x10
	double AccelerationY; // 0x18
	double AccelerationZ; // 0x20
};
struct Scaleform::GFx::InputEventsQueueEntry::GeolocationEntry
{
	long IdGeo; // 0x0
	double Latitude; // 0x8
	double Longitude; // 0x10
	double Altitude; // 0x18
	double HAccuracy; // 0x20
	double VAccuracy; // 0x28
	double Speed; // 0x30
	double Heading; // 0x38
	double Timestamp; // 0x40
};
struct Scaleform::GFx::InputEventsQueueEntry::StatusEntry
{
	Scaleform::String * Code; // 0x0
	Scaleform::String * Level; // 0x8
	Scaleform::String * ExtensionId; // 0x10
	Scaleform::String * ContextId; // 0x18
};
union Scaleform::GFx::InputEventsQueueEntry::Entry
{
public:
	Scaleform::GFx::InputEventsQueueEntry::MouseEntry mouseEntry; // 0x0
	Scaleform::GFx::InputEventsQueueEntry::KeyEntry keyEntry; // 0x0
	Scaleform::GFx::InputEventsQueueEntry::TouchEntry touchEntry; // 0x0
	Scaleform::GFx::InputEventsQueueEntry::GestureEntry gestureEntry; // 0x0
	Scaleform::GFx::InputEventsQueueEntry::GamePadAnalogEntry gamepadAnalogEntry; // 0x0
	Scaleform::GFx::InputEventsQueueEntry::AccelerometerEntry accelerometerEntry; // 0x0
	Scaleform::GFx::InputEventsQueueEntry::GeolocationEntry geolocationEntry; // 0x0
	Scaleform::GFx::InputEventsQueueEntry::StatusEntry statusEntry; // 0x0
};
class Scaleform::GFx::InputEventsQueue
{
	class QueueEntry;
	typedef unsigned short ButtonsStateType;
	enum MouseButtonMask
	{
		MouseButton_Left = 1,
		MouseButton_Right = 2,
		MouseButton_Middle = 4,
		MouseButton_MaxNum = 16,
		MouseButton_LastButton = 32768,
		MouseButton_AllMask = 65535,
	};
	enum MouseButtonFlags
	{
		MouseButton_Released = 128,
		MouseButton_Move = 64,
		MouseButton_Wheel = 32,
	};
	enum TouchType
	{
		Touch_Begin = 0,
		Touch_End = 1,
		Touch_Move = 2,
	};
	enum GesturePhase
	{
		Phase_All = 0,
		Phase_Begin = 1,
		Phase_End = 2,
		Phase_Update = 3,
	};
	enum <unnamed-enum-Queue_Length>
	{
		Queue_Length = 100,
	};
protected:
	Scaleform::GFx::InputEventsQueueEntry Queue[100]; // 0x0
	unsigned long long StartPos; // 0x1F40
	unsigned long long UsedEntries; // 0x1F48
	Scaleform::Render::Point<float> LastMousePos[6]; // 0x1F50
	unsigned long LastMousePosMask; // 0x1F80
	Scaleform::GFx::InputEventsQueueEntry * PeekLastQueueEntry();
	const Scaleform::GFx::InputEventsQueueEntry * PeekLastQueueEntry();
	Scaleform::GFx::InputEventsQueueEntry * AddEmptyQueueEntry();
	bool IsAnyMouseMoved();
public:
	InputEventsQueue(Scaleform::GFx::InputEventsQueue &);
	InputEventsQueue(const Scaleform::GFx::InputEventsQueue &);
	InputEventsQueue();
	bool IsQueueEmpty();
	const Scaleform::GFx::InputEventsQueueEntry * GetEntry();
	void ResetQueue();
	void AddMouseMove(unsigned long, const Scaleform::Render::Point<float> &);
	void AddMouseButtonEvent(unsigned long, const Scaleform::Render::Point<float> &, unsigned long, unsigned long);
	void AddMouseWheel(unsigned long, const Scaleform::Render::Point<float> &, long);
	void AddMousePress(unsigned long, const Scaleform::Render::Point<float> &, unsigned long);
	void AddMouseRelease(unsigned long, const Scaleform::Render::Point<float> &, unsigned long);
	void AddKeyEvent(unsigned long, unsigned char, unsigned long, bool, Scaleform::KeyModifiers, unsigned char);
	void AddKeyDown(unsigned long, unsigned char, Scaleform::KeyModifiers, unsigned char);
	void AddKeyUp(unsigned long, unsigned char, Scaleform::KeyModifiers, unsigned char);
	void AddCharTyped(unsigned long, unsigned char);
	void AddGamePadAnalogEvent(unsigned long, float, float, unsigned long);
	void AddAccelerometerEvent(long, double, double, double, double);
	void AddGeolocationEvent(long, double, double, double, double, double, double, double, double);
	void AddStatusEvent(Scaleform::String *, Scaleform::String *, Scaleform::String *, Scaleform::String *);
	Scaleform::GFx::InputEventsQueue & operator=(Scaleform::GFx::InputEventsQueue &);
	Scaleform::GFx::InputEventsQueue & operator=(const Scaleform::GFx::InputEventsQueue &);
};
class Scaleform::GFx::MouseState
{
	typedef unsigned short ButtonsStateType;
	enum MouseButtonMask
	{
		MouseButton_Left = 1,
		MouseButton_Right = 2,
		MouseButton_Middle = 4,
		MouseButton_MaxNum = 16,
		MouseButton_LastButton = 32768,
		MouseButton_AllMask = 65535,
	};
	enum MouseButtonFlags
	{
		MouseButton_Released = 128,
		MouseButton_Move = 64,
		MouseButton_Wheel = 32,
	};
protected:
	Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject> TopmostEntity; // 0x0
	Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject> PrevTopmostEntity; // 0x8
	Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject> ActiveEntity; // 0x10
	Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject>,2,Scaleform::ArrayDefaultPolicy> MouseButtonDownEntities; // 0x18
	unsigned long CurButtonsState; // 0x30
	unsigned long PrevButtonsState; // 0x34
	Scaleform::Render::Point<float> LastPosition; // 0x38
	unsigned long mPresetCursorType; // 0x40
	unsigned long CursorType; // 0x44
	long WheelDelta; // 0x48
	bool TopmostEntityIsNull : 1; // 0x4C
	bool PrevTopmostEntityWasNull : 1; // 0x4C
	bool MouseInsideEntityLast : 1; // 0x4C
	bool MouseMoved : 1; // 0x4C
	bool Activated : 1; // 0x4C
public:
	MouseState(Scaleform::GFx::MouseState &);
	MouseState(const Scaleform::GFx::MouseState &);
	MouseState();
	void ResetState();
	void UpdateState(const Scaleform::GFx::InputEventsQueueEntry &);
	bool IsMouseMoved();
	void SetCursorType(unsigned long);
	unsigned long GetCursorType();
	void PresetCursorType(unsigned long);
	unsigned long GetPresetCursorType();
	Scaleform::Render::Point<float> GetLastPosition();
	unsigned long GetButtonsState();
	unsigned long GetPrevButtonsState();
	Scaleform::Ptr<Scaleform::GFx::InteractiveObject> GetActiveEntity();
	Scaleform::Ptr<Scaleform::GFx::InteractiveObject> GetTopmostEntity();
	Scaleform::Ptr<Scaleform::GFx::InteractiveObject> GetMouseButtonDownEntity(unsigned long);
	void SetActiveEntity(Scaleform::GFx::InteractiveObject *);
	void SetTopmostEntity(Scaleform::GFx::InteractiveObject *);
	void SetMouseButtonDownEntity(unsigned long, Scaleform::GFx::InteractiveObject *);
	bool IsTopmostEntityChanged();
	void SetMouseInsideEntityLast(bool);
	bool IsMouseInsideEntityLast();
	bool IsActivated();
	void ResetPrevButtonsState();
	void ResetMouseMovedState();
	long GetWheelDelta();
	~MouseState();
	Scaleform::GFx::MouseState & operator=(Scaleform::GFx::MouseState &);
	Scaleform::GFx::MouseState & operator=(const Scaleform::GFx::MouseState &);
};
class Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject>
{
public:
	WeakPtr<Scaleform::GFx::InteractiveObject>(Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject> &);
	WeakPtr<Scaleform::GFx::InteractiveObject>(const Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject> &);
	WeakPtr<Scaleform::GFx::InteractiveObject>(const Scaleform::Ptr<Scaleform::GFx::InteractiveObject> &);
	WeakPtr<Scaleform::GFx::InteractiveObject>(Scaleform::GFx::InteractiveObject *);
	WeakPtr<Scaleform::GFx::InteractiveObject>();
	Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject> & operator=(Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject> &);
	Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject> & operator=(const Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject> &);
	void operator=(const Scaleform::Ptr<Scaleform::GFx::InteractiveObject> &);
	void operator=(Scaleform::GFx::InteractiveObject *);
	Scaleform::Ptr<Scaleform::GFx::InteractiveObject> operator class Scaleform::Ptr<class Scaleform::GFx::InteractiveObject>();
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::InteractiveObject> &);
	bool operator==(Scaleform::GFx::InteractiveObject *);
private:
	Scaleform::GFx::InteractiveObject * GetObjectThroughProxy();
	Scaleform::Ptr<Scaleform::WeakPtrProxy> pProxy; // 0x0
public:
	~WeakPtr<Scaleform::GFx::InteractiveObject>();
};
class Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject>,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject>,Scaleform::AllocatorLH<Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject>,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject>,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject>,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject>,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject>,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject>,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject>,2,Scaleform::ArrayDefaultPolicy>();
};
void Scaleform::GFx::MouseState::SetTopmostEntity(Scaleform::GFx::InteractiveObject * pch); // 0x1402EACE0
bool Scaleform::GFx::MouseState::IsTopmostEntityChanged(); // 0x1402E49A0
class Scaleform::GFx::EventId
{
	enum IdCode
	{
		Event_Invalid = 0,
		Event_Load = 1,
		Event_EnterFrame = 2,
		Event_Unload = 4,
		Event_MouseMove = 8,
		Event_MouseDown = 16,
		Event_MouseUp = 32,
		Event_KeyDown = 64,
		Event_KeyUp = 128,
		Event_Data = 256,
		Event_Initialize = 512,
		Event_Press = 1024,
		Event_Release = 2048,
		Event_ReleaseOutside = 4096,
		Event_RollOver = 8192,
		Event_RollOut = 16384,
		Event_DragOver = 32768,
		Event_DragOut = 65536,
		Event_KeyPress = 131072,
		Event_Construct = 262144,
		Event_PressAux = 524288,
		Event_ReleaseAux = 1048576,
		Event_ReleaseOutsideAux = 2097152,
		Event_DragOverAux = 4194304,
		Event_DragOutAux = 8388608,
		Event_AuxEventMask = 16252928,
		Event_ButtonEventsMask = 16514048,
		Event_LastCombined = 8388608,
		Event_NextAfterCombined = 16777216,
		Event_LoadStart = 16777216,
		Event_LoadError = 16777217,
		Event_LoadProgress = 16777218,
		Event_LoadInit = 16777219,
		Event_SockClose = 16777220,
		Event_SockConnect = 16777221,
		Event_SockData = 16777222,
		Event_SockXML = 16777223,
		Event_XMLLoad = 16777224,
		Event_XMLData = 16777225,
		Event_MouseOver = 16777226,
		Event_MouseOut = 16777227,
		Event_Click = 16777228,
		Event_DoubleClick = 16777229,
		Event_MouseWheel = 16777230,
		Event_Added = 16777231,
		Event_Removed = 16777232,
		Event_Activate = 16777233,
		Event_Deactivate = 16777234,
		Event_Render = 16777235,
		Event_Resize = 16777236,
		Event_FrameConstructed = 16777237,
		Event_ExitFrame = 16777238,
		Event_TouchBegin = 16777239,
		Event_TouchEnd = 16777240,
		Event_TouchMove = 16777241,
		Event_TouchTap = 16777242,
		Event_TouchOver = 16777243,
		Event_TouchOut = 16777244,
		Event_TouchRollOver = 16777245,
		Event_TouchRollOut = 16777246,
		Event_GestureBegin = 16777247,
		Event_GestureEnd = 16777248,
		Event_GestureUpdate = 16777249,
		Event_GestureAll = 16777250,
		Event_GamePadAnalogChange = 16777251,
		Event_AccelerometerUpdate = 16777252,
		Event_GeolocationUpdate = 16777253,
		Event_Status = 16777254,
		Event_End = 16777255,
		Event_COUNT = 64,
	};
public:
	unsigned long Id; // 0x0
	unsigned long WcharCode; // 0x4
	unsigned long KeyCode; // 0x8
	unsigned char AsciiCode; // 0xC
	unsigned char ButtonId; // 0xC
	unsigned long TouchID; // 0xC
	unsigned char RollOverCnt; // 0x10
	char ControllerIndex; // 0x11
	char MouseIndex; // 0x11
	char KeyboardIndex; // 0x11
	Scaleform::KeyModifiers KeysState; // 0x12
	char MouseWheelDelta; // 0x13
	EventId(unsigned long, unsigned long, unsigned char, unsigned long, unsigned char);
	EventId(unsigned long);
	EventId();
	bool IsButtonEvent();
	bool IsKeyEvent();
	bool operator==(const Scaleform::GFx::EventId &);
	Scaleform::GFx::EventId & operator=(const Scaleform::GFx::EventId &);
	long ConvertToButtonKeyCode();
	unsigned char ConvertKeyCodeToAscii();
	unsigned long long HashCode();
	unsigned long GetEventsCount();
};
class Scaleform::GFx::ButtonEventId :
	Scaleform::GFx::EventId
{
public:
	ButtonEventId(unsigned long, long, unsigned long, unsigned char);
	Scaleform::GFx::ButtonEventId & operator=(Scaleform::GFx::ButtonEventId &);
	Scaleform::GFx::ButtonEventId & operator=(const Scaleform::GFx::ButtonEventId &);
};
class Scaleform::GFx::GamePadAnalogEventId :
	Scaleform::GFx::EventId
{
public:
	float AnalogX; // 0x14
	float AnalogY; // 0x18
	GamePadAnalogEventId(unsigned long, long, float, float);
	Scaleform::GFx::GamePadAnalogEventId & operator=(Scaleform::GFx::GamePadAnalogEventId &);
	Scaleform::GFx::GamePadAnalogEventId & operator=(const Scaleform::GFx::GamePadAnalogEventId &);
};
class Scaleform::GFx::TouchEventId :
	Scaleform::GFx::EventId
{
public:
	float Pressure; // 0x14
	Scaleform::Render::Size<float> Contact; // 0x18
	bool PrimaryPoint; // 0x20
	TouchEventId(Scaleform::GFx::TouchEventId &);
	TouchEventId(const Scaleform::GFx::TouchEventId &);
	TouchEventId(unsigned long, long, unsigned long, float, Scaleform::Render::Size<float>, bool);
	Scaleform::GFx::TouchEventId & operator=(Scaleform::GFx::TouchEventId &);
	Scaleform::GFx::TouchEventId & operator=(const Scaleform::GFx::TouchEventId &);
};
class Scaleform::GFx::GestureEventId :
	Scaleform::GFx::EventId
{
	enum GestureType
	{
		Gesture_Unknown = 0,
		Gesture_Pan = 1,
		Gesture_Zoom = 2,
		Gesture_Rotate = 3,
		Gesture_Swipe = 4,
		Gesture_PressAndTap = 5,
		Gesture_TwoFingerTap = 6,
	};
public:
	Scaleform::GFx::GestureEventId::GestureType Gesture; // 0x14
	float x; // 0x18
	float y; // 0x1C
	float OffsetX; // 0x20
	float OffsetY; // 0x24
	float ScaleX; // 0x28
	float ScaleY; // 0x2C
	float Rotation; // 0x30
	float TapX; // 0x34
	float TapY; // 0x38
	bool TapXYUse; // 0x3C
	GestureEventId(unsigned long, Scaleform::GFx::GestureEventId::GestureType, float, float, float, float, float, float, float);
	Scaleform::GFx::GestureEventId & operator=(Scaleform::GFx::GestureEventId &);
	Scaleform::GFx::GestureEventId & operator=(const Scaleform::GFx::GestureEventId &);
};
class Scaleform::GFx::AccelerometerEventId :
	Scaleform::GFx::EventId
{
public:
	long IdAcc; // 0x14
	double Timestamp; // 0x18
	double AccelerationX; // 0x20
	double AccelerationY; // 0x28
	double AccelerationZ; // 0x30
	AccelerometerEventId(long, double, double, double, double);
	Scaleform::GFx::AccelerometerEventId & operator=(Scaleform::GFx::AccelerometerEventId &);
	Scaleform::GFx::AccelerometerEventId & operator=(const Scaleform::GFx::AccelerometerEventId &);
};
class Scaleform::GFx::GeolocationEventId :
	Scaleform::GFx::EventId
{
public:
	long IdGeo; // 0x14
	double Latitude; // 0x18
	double Longitude; // 0x20
	double Altitude; // 0x28
	double HAccuracy; // 0x30
	double VAccuracy; // 0x38
	double Speed; // 0x40
	double Heading; // 0x48
	double Timestamp; // 0x50
	GeolocationEventId(long, double, double, double, double, double, double, double, double);
	Scaleform::GFx::GeolocationEventId & operator=(Scaleform::GFx::GeolocationEventId &);
	Scaleform::GFx::GeolocationEventId & operator=(const Scaleform::GFx::GeolocationEventId &);
};
class Scaleform::GFx::StatusEventId :
	Scaleform::GFx::EventId
{
public:
	Scaleform::String * Code; // 0x18
	Scaleform::String * Level; // 0x20
	Scaleform::String * ExtensionId; // 0x28
	Scaleform::String * ContextId; // 0x30
	StatusEventId(Scaleform::String *, Scaleform::String *, Scaleform::String *, Scaleform::String *);
	Scaleform::GFx::StatusEventId & operator=(Scaleform::GFx::StatusEventId &);
	Scaleform::GFx::StatusEventId & operator=(const Scaleform::GFx::StatusEventId &);
};
struct Scaleform::GFx::EventIdHashFunctor
{
	unsigned long long operator()(const Scaleform::GFx::EventId &);
};