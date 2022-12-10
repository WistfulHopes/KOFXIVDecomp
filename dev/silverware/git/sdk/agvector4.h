#pragma once

class AgVector4
{
public:
	AgVector4(const AgVector2 &, float, float);
	AgVector4(const AgVector3 &, float);
	AgVector4(float, float, float, float);
	AgVector4(float);
	AgVector4();
	AgVector4 operator+(const AgVector4 &);
	void operator+=(const AgVector4 &);
	AgVector4 operator-(const AgVector4 &);
	AgVector4 operator*(float);
	AgVector4 operator*(const AgVector4 &);
	void operator*=(float);
	AgVector4 operator/(const AgVector4 &);
	AgVector4 getNormalized();
	AgVector4 getNormalizedUnsafe();
	float getLengthSquared();
	float getLength();
	static float dotProduct(const AgVector4 &, const AgVector4 &);
	float getComponent(unsigned long);
	void setComponent(unsigned long, float);
	AgVector2 getVector2();
	AgVector3 getVector3();
	unsigned long getRGBA();
	unsigned long getRGBA();
	float * operator float *();
	const float * operator const float *();
	static AgVector4 fromHSV(float, float, float, float);
	static AgVector4 fromHSV(AgVector4);
	static AgVector4 fromHSV(AgVector3, float);
	static AgVector4 fromHSV(AgVector3);
	static AgVector4 fromRGBA(unsigned long);
	float m_x; // 0x0
	float m_y; // 0x4
	float m_z; // 0x8
	float m_w; // 0xC
	static const AgVector4 Zero; // 0xFFFFFFFFFFFFFFFF
	static const AgVector4 One; // 0xFFFFFFFFFFFFFFFF
	static const AgVector4 Right; // 0xFFFFFFFFFFFFFFFF
	static const AgVector4 Left; // 0xFFFFFFFFFFFFFFFF
	static const AgVector4 Up; // 0xFFFFFFFFFFFFFFFF
	static const AgVector4 Down; // 0xFFFFFFFFFFFFFFFF
	static const AgVector4 Forward; // 0xFFFFFFFFFFFFFFFF
	static const AgVector4 Backwards; // 0xFFFFFFFFFFFFFFFF
	static const AgVector4 Identity; // 0xFFFFFFFFFFFFFFFF
};