#pragma once

class EasingNumber
{
private:
	float m_number; // 0x0
	float m_power; // 0x4
	float m_max; // 0x8
	float m_min; // 0xC
	bool m_bAnimation; // 0x10
public:
	EasingNumber(float, float);
	EasingNumber();
	~EasingNumber();
	void clear();
	float setNumber(float);
	void setRange(float, float);
	void start(float, float, float);
	void start(float);
	void update(float);
	float getNumber();
	float getPower();
	bool isFinished();
	bool isEasingAddition();
	bool isEasingSubtract();
	bool operator==(float);
	bool operator!=(float);
	bool operator<=(float);
	bool operator>=(float);
	bool operator<(float);
	bool operator>(float);
};