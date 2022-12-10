#pragma once

struct Fix32
{
	static const long IntMask; // 0xFFFFFFFFFFFFFFFF
	static const long FrcMask; // 0xFFFFFFFFFFFFFFFF
	static const long MIN; // 0xFFFFFFFFFFFFFFFF
	static const long MAX; // 0xFFFFFFFFFFFFFFFF
	static const long ONE; // 0xFFFFFFFFFFFFFFFF
	static float FixToFloat(const Fix32 &);
	static float FixToFloat(const long);
	static long FixToInt(const Fix32 &);
	static long FixToInt(const long);
	static long IntToFixValue(const long);
	static Fix32 IntToFix(const long);
	static long FloatToIntValue(const float);
	static Fix32 FloatToFix(const float);
	Fix32(const float);
	Fix32(const long);
	Fix32();
	bool IsZero();
	long GetFix();
	float GetFloat();
	long GetInt();
	unsigned long GetFrc();
	void SetFix(const long);
	void SetFloat(const float);
	void SetInt(const long);
	void SetFrc(const unsigned long);
	Fix32 operator+(const float &);
	Fix32 operator+(const long &);
	Fix32 operator+(const Fix32 &);
	Fix32 operator+();
	Fix32 operator-(const float &);
	Fix32 operator-(const long &);
	Fix32 operator-(const Fix32 &);
	Fix32 operator-();
	Fix32 operator++(long);
	Fix32 & operator++();
	Fix32 operator--(long);
	Fix32 & operator--();
	Fix32 & operator+=(const float &);
	Fix32 & operator+=(const long &);
	Fix32 & operator+=(const Fix32 &);
	Fix32 & operator-=(const float &);
	Fix32 & operator-=(const long &);
	Fix32 & operator-=(const Fix32 &);
	Fix32 & operator*=(const float &);
	Fix32 & operator*=(const long &);
	Fix32 & operator*=(const Fix32 &);
	Fix32 operator*(const float &);
	Fix32 operator*(const long &);
	Fix32 operator*(const Fix32 &);
	Fix32 & operator/=(const float &);
	Fix32 & operator/=(const long &);
	Fix32 & operator/=(const Fix32 &);
	Fix32 operator/(const float &);
	Fix32 operator/(const long &);
	Fix32 operator/(const Fix32 &);
	Fix32 & operator%=(const float &);
	Fix32 & operator%=(const long &);
	Fix32 & operator%=(const Fix32 &);
	Fix32 operator%(const float &);
	Fix32 operator%(const long &);
	Fix32 operator%(const Fix32 &);
	bool operator==(const float &);
	bool operator==(const long &);
	bool operator==(const Fix32 &);
	bool operator!=(const float &);
	bool operator!=(const long &);
	bool operator!=(const Fix32 &);
	bool operator<(const float &);
	bool operator<(const long &);
	bool operator<(const Fix32 &);
	bool operator<=(const float &);
	bool operator<=(const long &);
	bool operator<=(const Fix32 &);
	bool operator>(const float &);
	bool operator>(const long &);
	bool operator>(const Fix32 &);
	bool operator>=(const float &);
	bool operator>=(const long &);
	bool operator>=(const Fix32 &);
	static Fix32 Round(const Fix32 &);
	void Round();
	static Fix32 Floor(const Fix32 &);
	void Floor();
	Fix32 Ceil(const Fix32 &);
	void Ceil();
	void ClampMin(const long &);
	void ClampMin(const Fix32 &);
	void ClmapMin(const float &);
	void ClampZeroMin();
	void ClampMax(const float &);
	void ClampMax(const long &);
	void ClampMax(const Fix32 &);
	void ClampZeroMax();
	void Clamp(const float &, const float &);
	void Clamp(const long &, const long &);
	void Clamp(const Fix32 &, const Fix32 &);
	long value; // 0x0
};