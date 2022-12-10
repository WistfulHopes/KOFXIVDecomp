#pragma once

enum AgControllerTouchState
{
	AgControllerTouchState_None = 0,
	AgControllerTouchState_Started = 1,
	AgControllerTouchState_Moved = 2,
	AgControllerTouchState_Ended = 3,
};
struct AgControllerTouchInfo
{
	AgControllerTouchInfo();
	long m_touchId; // 0x0
	AgVector2 m_position; // 0x4
	AgVector2 m_delta; // 0xC
	float m_force; // 0x14
	float m_forceDelta; // 0x18
	long m_touched; // 0x1C
	AgControllerTouchState m_touchState; // 0x20
};
enum AgControllerTouchId
{
	AgControllerTouchId_Default = 0,
	AgControllerTouchId_Back = 1,
};
enum AgControllerTouchType
{
	AgControllerTouchType_Unknown = 0,
	AgControllerTouchType_Screen = 1,
	AgControllerTouchType_Pad = 2,
};
class AgControllerTouchComponent :
	AgControllerComponent
{
public:
	static const AgControllerComponentType ComponentType; // 0xFFFFFFFFFFFFFFFF
	AgControllerTouchComponent(unsigned long, AgControllerTouchType, unsigned long);
	~AgControllerTouchComponent();
	unsigned long getMaxTouches();
	AgControllerTouchType getType();
	const AgControllerTouchInfo & getTouchAtIndex(unsigned long);
	void setTouchAtIndex(unsigned long, const AgControllerTouchInfo &);
private:
	AgControllerTouchType m_type; // 0x8
	unsigned long m_maxTouches; // 0xC
	AgControllerTouchInfo * m_touches; // 0x10
	AgControllerTouchInfo m_invalidTouchInfo; // 0x18
};
AgControllerTouchComponent::AgControllerTouchComponent(unsigned long id, AgControllerTouchType type, unsigned long maxTouches); // 0x140674A40
AgControllerTouchComponent::~AgControllerTouchComponent(); // 0x140675250