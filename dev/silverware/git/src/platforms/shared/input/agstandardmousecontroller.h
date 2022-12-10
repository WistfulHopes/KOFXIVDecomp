#pragma once

class AgStandardMouseController :
	AgController
{
public:
	AgStandardMouseController(AgStandardMouseController &);
	AgStandardMouseController(const AgStandardMouseController &);
	AgStandardMouseController(unsigned long);
	virtual void update();
	virtual void clear();
	void onMove(const AgVector2 &);
	void onButtonDown(AgMouseButton);
	void onButtonUp(AgMouseButton);
	void onScroll(const AgVector2 &);
private:
	AgControllerButtonComponent m_buttons; // 0x50
	AgControllerAxisComponent m_x; // 0x98
	AgControllerAxisComponent m_y; // 0xA4
	AgControllerAxisComponent m_scrollX; // 0xB0
	AgControllerAxisComponent m_scrollY; // 0xBC
	bool m_currentButtons[5]; // 0xC8
	AgVector2 m_currentPosition; // 0xD0
	AgVector2 m_currentScroll; // 0xD8
public:
	virtual ~AgStandardMouseController();
	AgStandardMouseController & operator=(AgStandardMouseController &);
	AgStandardMouseController & operator=(const AgStandardMouseController &);
};
AgStandardMouseController::AgStandardMouseController(unsigned long id); // 0x140674D90
void AgStandardMouseController::update(); // 0x140677A70
void AgStandardMouseController::clear(); // 0x1406768A0