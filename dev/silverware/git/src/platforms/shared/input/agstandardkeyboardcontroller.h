#pragma once

class AgStandardKeyboardController :
	AgController
{
public:
	AgStandardKeyboardController(AgStandardKeyboardController &);
	AgStandardKeyboardController(const AgStandardKeyboardController &);
	AgStandardKeyboardController(unsigned long);
	virtual void update();
	virtual void clear();
	void onKeyDown(AgKeyboardButton);
	void onKeyUp(AgKeyboardButton);
private:
	AgControllerButtonComponent m_keys; // 0x50
	bool m_currentKeys[256]; // 0x98
public:
	virtual ~AgStandardKeyboardController();
	AgStandardKeyboardController & operator=(AgStandardKeyboardController &);
	AgStandardKeyboardController & operator=(const AgStandardKeyboardController &);
};
AgStandardKeyboardController::AgStandardKeyboardController(unsigned long id); // 0x140674CE0
void AgStandardKeyboardController::update(); // 0x140677A00
void AgStandardKeyboardController::clear(); // 0x140676870