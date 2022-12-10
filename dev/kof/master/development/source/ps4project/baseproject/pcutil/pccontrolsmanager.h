#pragma once

enum Framework::Input::Button
{
	BUTTON_SELECT = 13,
	BUTTON_L3 = 10,
	BUTTON_R3 = 11,
	BUTTON_START = 12,
	BUTTON_UP = 0,
	BUTTON_RIGHT = 3,
	BUTTON_DOWN = 1,
	BUTTON_LEFT = 2,
	BUTTON_L1 = 8,
	BUTTON_R1 = 9,
	BUTTON_TRIANGLE = 7,
	BUTTON_CIRCLE = 5,
	BUTTON_CROSS = 4,
	BUTTON_SQUARE = 6,
	BUTTON_TOUCH_PAD = 13,
	BUTTON_L2 = 14,
	BUTTON_R2 = 15,
	BUTTON_INTERCEPTED = -2147483648,
	BUTTON_OPTIONS = 12,
};
enum Framework::Input::ButtonEventPattern
{
	PATTERN_ANY = 0,
	PATTERN_ALL = 1,
};
class Framework::Input::ControllerContext
{
public:
	ControllerContext();
private:
	ControllerContext(const Framework::Input::ControllerContext &);
	Framework::Input::ControllerContext & operator=(const Framework::Input::ControllerContext &);
public:
	void initialize();
	bool isUserLogin(long);
	bool isButtonDown(unsigned long, Framework::Input::ButtonEventPattern);
	bool isButtonDown(long, unsigned long, Framework::Input::ButtonEventPattern);
	bool isButtonUp(unsigned long, Framework::Input::ButtonEventPattern);
	bool isButtonUp(long, unsigned long, Framework::Input::ButtonEventPattern);
	bool isButtonPressed(unsigned long, Framework::Input::ButtonEventPattern);
	bool isButtonPressed(long, unsigned long, Framework::Input::ButtonEventPattern);
	bool isButtonReleased(unsigned long, Framework::Input::ButtonEventPattern);
	bool isButtonReleased(long, unsigned long, Framework::Input::ButtonEventPattern);
	bool isButtonPressedNoRepeat(long, unsigned long, Framework::Input::ButtonEventPattern);
	bool isButtonReleasedNoRepeat(long, unsigned long, Framework::Input::ButtonEventPattern);
	void clearButton(long);
	sce::Vectormath::Scalar::Aos::Vector2 getLeftStick();
	sce::Vectormath::Scalar::Aos::Vector2 getLeftStick(long);
	sce::Vectormath::Scalar::Aos::Vector2 getRightStick();
	sce::Vectormath::Scalar::Aos::Vector2 getRightStick(long);
	sce::Vectormath::Scalar::Aos::Vector2 getAnalogLR2(long);
	void setVibration(long, double, unsigned char, unsigned char);
	void setVibration(double, unsigned char, unsigned char);
	void stopVibration(long);
	void stopVibration();
	bool isKeyboardButtonDown(unsigned short, Framework::Input::ButtonEventPattern);
	bool isKeyboardButtonPressedNoRepeat(unsigned short, Framework::Input::ButtonEventPattern);
	bool isKeyboardButtonReleasedNoRepeat(unsigned short, Framework::Input::ButtonEventPattern);
	void update();
	AgControllerType getLastInputDeviceType();
	AgControllerHardwareType getLastInputDeviceHWType();
	unsigned long getLastInputDeviceIndex();
	long isGamepadConnected(long);
	AgPointer<AgController> getGamepad(long);
	AgControllerHardwareType getGamepadHWType(long);
	const std::array<AgPointer<AgController>,4> & getGamepadArray();
	AgPointer<AgController> getControllerByValidDeviceID(long);
	AgPointer<AgController> getControllerByUID(unsigned long long);
	long getRealIndexByValidDeviceID(long);
	long getGenericMapping(AgGamepadButton);
	static const unsigned long long NUM_MAX_CONTROLLERS; // 0xFFFFFFFFFFFFFFFF
private:
	bool isValidUserIndex(long);
	void onControllerAdded(const AgControllerAddedEvent &);
	void onControllerRemoved(const AgControllerRemovedEvent &);
	AgPointer<AgController> m_keyboard; // 0x0
	std::array<AgPointer<AgController>,4> m_gamepad; // 0x10
	AgControllerType m_lastUsedContType; // 0x50
	AgControllerHardwareType m_lastUsedContHWType; // 0x54
	unsigned long m_lastUsedContIndex; // 0x58
	AgSDLMappingParser m_genericMappings; // 0x60
public:
	~ControllerContext();
};
AgPointer<AgController> Framework::Input::ControllerContext::getGamepad(long userIndex); // 0x140098170
class std::array<AgPointer<AgController>,4>
{
	class _Myt;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgPointer<AgController> pointer;
	typedef const AgPointer<AgController> const_pointer;
	typedef AgPointer<AgController> reference;
	typedef const AgPointer<AgController> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	void assign(const AgPointer<AgController> &);
	void fill(const AgPointer<AgController> &);
	std::_Array_const_iterator<AgPointer<AgController>,4> begin();
	std::_Array_iterator<AgPointer<AgController>,4> begin();
	std::_Array_const_iterator<AgPointer<AgController>,4> end();
	std::_Array_iterator<AgPointer<AgController>,4> end();
	std::reverse_iterator<std::_Array_const_iterator<AgPointer<AgController>,4> > rbegin();
	std::reverse_iterator<std::_Array_iterator<AgPointer<AgController>,4> > rbegin();
	std::reverse_iterator<std::_Array_const_iterator<AgPointer<AgController>,4> > rend();
	std::reverse_iterator<std::_Array_iterator<AgPointer<AgController>,4> > rend();
	std::_Array_const_iterator<AgPointer<AgController>,4> cbegin();
	std::_Array_const_iterator<AgPointer<AgController>,4> cend();
	std::reverse_iterator<std::_Array_const_iterator<AgPointer<AgController>,4> > crbegin();
	std::reverse_iterator<std::_Array_const_iterator<AgPointer<AgController>,4> > crend();
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	const AgPointer<AgController> & at(unsigned long long);
	AgPointer<AgController> & at(unsigned long long);
	const AgPointer<AgController> & operator[](unsigned long long);
	AgPointer<AgController> & operator[](unsigned long long);
	static void _Bad_subscript();
	const AgPointer<AgController> & front();
	AgPointer<AgController> & front();
	const AgPointer<AgController> & back();
	AgPointer<AgController> & back();
	const AgPointer<AgController> * data();
	AgPointer<AgController> * data();
	void _Xran();
	AgPointer<AgController> _Elems[4]; // 0x0
	void swap(std::array<AgPointer<AgController>,4> &);
	array<AgPointer<AgController>,4>(std::array<AgPointer<AgController>,4> &);
	array<AgPointer<AgController>,4>(const std::array<AgPointer<AgController>,4> &);
	array<AgPointer<AgController>,4>();
	~array<AgPointer<AgController>,4>();
	std::array<AgPointer<AgController>,4> & operator=(std::array<AgPointer<AgController>,4> &);
	std::array<AgPointer<AgController>,4> & operator=(const std::array<AgPointer<AgController>,4> &);
};