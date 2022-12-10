#pragma once

class AgControllerRumbleComponent :
	AgControllerComponent
{
public:
	static const AgControllerComponentType ComponentType; // 0xFFFFFFFFFFFFFFFF
	static const unsigned long DURATION_INFINITE; // 0xFFFFFFFFFFFFFFFF
	AgControllerRumbleComponent(unsigned long);
	void setValue(float, unsigned long);
	void setValue(float);
	float getValue();
	unsigned long getDuration();
	void clear();
private:
	float m_value; // 0x8
	unsigned long m_duration; // 0xC
	long m_enabled; // 0x10
};
AgControllerRumbleComponent::AgControllerRumbleComponent(unsigned long id); // 0x14069ED00