#pragma once

class AgStandardGamepadController :
	AgController
{
public:
	AgStandardGamepadController(AgStandardGamepadController &);
	AgStandardGamepadController(const AgStandardGamepadController &);
	AgStandardGamepadController(unsigned long);
	virtual void update();
	void onButtonDown(AgMouseButton);
	void onButtonUp(AgMouseButton);
	void onMoveLeftStick(const AgVector2 &);
	void onMoveRightStick(const AgVector2 &);
	void onLeftTrigger(double);
	void onRightTrigger(double);
private:
	AgControllerButtonComponent m_buttons; // 0x50
	AgControllerAxisComponent m_leftStickX; // 0x98
	AgControllerAxisComponent m_leftStickY; // 0xA4
	AgControllerAxisComponent m_leftTrigger; // 0xB0
	AgControllerAxisComponent m_rightStickX; // 0xBC
	AgControllerAxisComponent m_rightStickY; // 0xC8
	AgControllerAxisComponent m_rightTrigger; // 0xD4
	bool m_currentButtons[15]; // 0xE0
	AgVector2 m_currentLeftStick; // 0xF0
	AgVector2 m_currentRightStick; // 0xF8
	double m_currentLeftTrigger; // 0x100
	double m_currentRightTrigger; // 0x108
public:
	virtual ~AgStandardGamepadController();
	AgStandardGamepadController & operator=(AgStandardGamepadController &);
	AgStandardGamepadController & operator=(const AgStandardGamepadController &);
};
AgStandardGamepadController::AgStandardGamepadController(unsigned long id); // 0x14064DF40
void AgStandardGamepadController::update(); // 0x140656600