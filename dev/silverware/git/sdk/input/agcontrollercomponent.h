#pragma once

enum AgControllerComponentType
{
	AgControllerComponentType_Unknown = 0,
	AgControllerComponentType_Buttons = 1,
	AgControllerComponentType_Axis = 2,
	AgControllerComponentType_Position = 3,
	AgControllerComponentType_Rumble = 4,
	AgControllerComponentType_Motion = 5,
	AgControllerComponentType_Body = 6,
	AgControllerComponentType_Touch = 7,
	AgControllerComponentType_LightBar = 8,
	AgControllerComponentType_Acceleration = 9,
	AgControllerComponentType_AngularVelocity = 10,
	AgControllerComponentType_Orientation = 11,
	AgControllerComponentType_Speaker = 12,
	AgControllerComponentType_Count = 13,
};
struct AgControllerComponentIndex
{
	AgControllerComponentIndex(AgControllerComponentType, unsigned long);
	AgControllerComponentIndex();
	bool operator==(const AgControllerComponentIndex &);
	unsigned char type; // 0x0
	unsigned char id; // 0x1
};
struct AgControllerInvalidIndex :
	AgControllerComponentIndex
{
	AgControllerInvalidIndex();
};
struct AgControllerAxisIndex :
	AgControllerComponentIndex
{
	AgControllerAxisIndex(unsigned long);
};
struct AgControllerButtonIndex :
	AgControllerComponentIndex
{
	AgControllerButtonIndex(unsigned long);
};
struct AgControllerRumbleIndex :
	AgControllerComponentIndex
{
	AgControllerRumbleIndex(unsigned long);
};
class AgControllerComponent
{
public:
	static const AgControllerComponentType ComponentType; // 0xFFFFFFFFFFFFFFFF
	AgControllerComponent(AgControllerComponentType, unsigned long);
	unsigned long getId();
	AgControllerComponentType getType();
	long isValidComponent();
private:
	AgControllerComponentType m_type; // 0x0
	unsigned long m_id; // 0x4
};