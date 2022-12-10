#pragma once

enum AgControllerAxisId
{
	AgControllerAxisId_Mouse_X = 0,
	AgControllerAxisId_Mouse_Y = 1,
	AgControllerAxisId_Mouse_ScrollX = 2,
	AgControllerAxisId_Mouse_ScrollY = 3,
	AgControllerAxisId_Stick_LeftX = 4,
	AgControllerAxisId_Stick_LeftY = 5,
	AgControllerAxisId_Trigger_Left = 6,
	AgControllerAxisId_Stick_RightX = 7,
	AgControllerAxisId_Stick_RightY = 8,
	AgControllerAxisId_Trigger_Right = 9,
	AgControllerAxisId_Count = 10,
};
class AgControllerAxisComponent :
	AgControllerComponent
{
public:
	static const AgControllerComponentType ComponentType; // 0xFFFFFFFFFFFFFFFF
	AgControllerAxisComponent(unsigned long);
	void setValue(float);
	float getValue();
	void clear();
private:
	float m_value; // 0x8
};