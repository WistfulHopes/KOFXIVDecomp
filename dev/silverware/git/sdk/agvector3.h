#pragma once

class AgVector3
{
public:
	static const AgVector3 Zero; // 0xFFFFFFFFFFFFFFFF
	static const AgVector3 One; // 0xFFFFFFFFFFFFFFFF
	static const AgVector3 Right; // 0xFFFFFFFFFFFFFFFF
	static const AgVector3 Left; // 0xFFFFFFFFFFFFFFFF
	static const AgVector3 Up; // 0xFFFFFFFFFFFFFFFF
	static const AgVector3 Down; // 0xFFFFFFFFFFFFFFFF
	static const AgVector3 Forward; // 0xFFFFFFFFFFFFFFFF
	static const AgVector3 Backwards; // 0xFFFFFFFFFFFFFFFF
	AgVector3(const AgVector2 &, float);
	AgVector3(float, float, float);
	AgVector3(const AgVector3 &);
	AgVector3(float);
	AgVector3();
	AgVector3 operator+(const AgVector3 &);
	AgVector3 & operator+=(const AgVector3 &);
	AgVector3 operator-(const AgVector3 &);
	AgVector3 & operator-=(const AgVector3 &);
	AgVector3 operator*(float);
	AgVector3 operator*(const AgVector3 &);
	void operator*=(float);
	AgVector3 & operator*=(const AgVector3 &);
	AgVector3 operator/(float);
	AgVector3 operator/(const AgVector3 &);
	void operator/=(float);
	AgVector3 & operator/=(const AgVector3 &);
	static float dotProduct(const AgVector3 &, const AgVector3 &);
	float dotProduct(const AgVector3 &);
	static float distance(const AgVector3 &, const AgVector3 &);
	float distance(const AgVector3 &);
	static AgVector3 crossProduct(const AgVector3 &, const AgVector3 &);
	AgVector3 getNormalized();
	AgVector3 getNormalizedUnsafe();
	void normalize(float &);
	void normalize();
	void normalizeUnsafe(float &);
	void normalizeUnsafe();
	float getLengthSquared();
	float getLength();
	float getInverseLength(float &);
	float getInverseLength();
	AgVector2 getVector2();
	float getComponent(unsigned long);
	void setComponent(unsigned long, float);
	float m_x; // 0x0
	float m_y; // 0x4
	float m_z; // 0x8
};