#pragma once

class AgVector2
{
public:
	AgVector2(float, float);
	AgVector2(float);
	AgVector2();
	AgVector2 operator+(const AgVector2 &);
	const AgVector2 & operator+=(const AgVector2 &);
	AgVector2 operator-();
	AgVector2 operator-(const AgVector2 &);
	const AgVector2 & operator-=(const AgVector2 &);
	AgVector2 operator*(float);
	AgVector2 operator*(const AgVector2 &);
	void operator*=(float);
	const AgVector2 & operator*=(const AgVector2 &);
	AgVector2 operator/(const AgVector2 &);
	long operator==(const AgVector2 &);
	long operator!=(const AgVector2 &);
	AgVector2 getRotated(float, float);
	AgVector2 getRotated(float);
	AgVector2 getNormalized();
	AgVector2 getNormalizedUnsafe();
	void normalize(float &);
	float normalize();
	void normalizeUnsafe(float &);
	float normalizeUnsafe();
	float getLengthSquared();
	float getLength();
	static float dotProduct(const AgVector2 &, const AgVector2 &);
	AgVector2 getRounded();
	void round();
	static float distance(const AgVector2 &, const AgVector2 &);
	AgVector2 getPerpendicular();
	static float perpDotProduct(const AgVector2 &, const AgVector2 &);
	static float getAngleBetween(const AgVector2 &, const AgVector2 &);
	float getComponent(unsigned long);
	void setComponent(unsigned long, float);
	float m_x; // 0x0
	float m_y; // 0x4
	static const AgVector2 Zero; // 0xFFFFFFFFFFFFFFFF
	static const AgVector2 One; // 0xFFFFFFFFFFFFFFFF
};