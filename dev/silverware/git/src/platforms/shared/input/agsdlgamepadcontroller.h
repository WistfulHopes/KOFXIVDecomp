#pragma once

class AgSDLGamepadController :
	AgController
{
public:
	AgSDLGamepadController(const AgSDLGamepadController &);
	AgSDLGamepadController(unsigned long, _SDL_GameController *);
	virtual ~AgSDLGamepadController();
	virtual void update();
	virtual void clear();
	virtual AgString getMappingString();
	virtual AgControllerUID getUID();
	_SDL_GameController * getPlatformController();
	float getAxisValue(short);
	AgVector2 getStickValue(short, short, float);
private:
	AgControllerButtonComponent m_buttons; // 0x50
	AgControllerAxisComponent m_leftStickX; // 0x98
	AgControllerAxisComponent m_leftStickY; // 0xA4
	AgControllerAxisComponent m_leftTrigger; // 0xB0
	AgControllerAxisComponent m_rightStickX; // 0xBC
	AgControllerAxisComponent m_rightStickY; // 0xC8
	AgControllerAxisComponent m_rightTrigger; // 0xD4
	AgControllerRumbleComponent m_rumble; // 0xE0
	_SDL_GameController * m_gameController; // 0xF8
	_SDL_Haptic * m_haptic; // 0x100
	long m_rumblePlaying; // 0x108
	float m_rumbleValue; // 0x10C
	AgControllerUID m_uid; // 0x110
public:
	AgSDLGamepadController & operator=(const AgSDLGamepadController &);
};
AgControllerUID AgSDLGamepadController::getUID(); // 0x14069F960