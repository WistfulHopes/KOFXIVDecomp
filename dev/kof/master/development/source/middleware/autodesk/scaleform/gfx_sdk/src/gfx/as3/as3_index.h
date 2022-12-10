#pragma once

class Scaleform::GFx::AS3::AbsoluteIndex
{
	class SelfType;
public:
	AbsoluteIndex(Scaleform::GFx::AS3::GlobalSlotIndex);
	AbsoluteIndex(Scaleform::GFx::AS3::SlotIndex, const Scaleform::GFx::AS3::Traits &);
	AbsoluteIndex(Scaleform::GFx::AS3::RelativeIndex, const Scaleform::GFx::AS3::Traits &);
	AbsoluteIndex(long long);
	Scaleform::GFx::AS3::AbsoluteIndex & operator=(const Scaleform::GFx::AS3::AbsoluteIndex &);
	bool operator<(unsigned long long);
	bool operator<(const Scaleform::GFx::AS3::AbsoluteIndex &);
	bool operator>(unsigned long long);
	bool operator>(const Scaleform::GFx::AS3::AbsoluteIndex &);
	void operator+=(long long);
	void operator+=(const Scaleform::GFx::AS3::AbsoluteIndex &);
	Scaleform::GFx::AS3::AbsoluteIndex operator+(const Scaleform::GFx::AS3::AbsoluteIndex &);
	Scaleform::GFx::AS3::AbsoluteIndex operator+(unsigned long long);
	Scaleform::GFx::AS3::AbsoluteIndex operator++(long);
	Scaleform::GFx::AS3::AbsoluteIndex & operator++();
	void operator-=(long long);
	void operator-=(const Scaleform::GFx::AS3::AbsoluteIndex &);
	Scaleform::GFx::AS3::AbsoluteIndex operator-(const Scaleform::GFx::AS3::AbsoluteIndex &);
	Scaleform::GFx::AS3::AbsoluteIndex operator-(unsigned long long);
	Scaleform::GFx::AS3::AbsoluteIndex operator--(long);
	Scaleform::GFx::AS3::AbsoluteIndex & operator--();
	unsigned long Get();
	long long GetRaw();
	bool IsValid();
protected:
	long long Index; // 0x0
};
class Scaleform::GFx::AS3::RelativeIndex
{
	class SelfType;
public:
	RelativeIndex(Scaleform::GFx::AS3::AbsoluteIndex, const Scaleform::GFx::AS3::Traits &);
	RelativeIndex(Scaleform::GFx::AS3::SlotIndex);
	RelativeIndex(long long);
	Scaleform::GFx::AS3::RelativeIndex & operator=(const Scaleform::GFx::AS3::RelativeIndex &);
	void operator+=(const Scaleform::GFx::AS3::RelativeIndex &);
	bool operator<(unsigned long long);
	bool operator<(const Scaleform::GFx::AS3::RelativeIndex &);
	Scaleform::GFx::AS3::RelativeIndex operator+(const Scaleform::GFx::AS3::RelativeIndex &);
	Scaleform::GFx::AS3::RelativeIndex operator+(unsigned long long);
	Scaleform::GFx::AS3::RelativeIndex operator++(long);
	Scaleform::GFx::AS3::RelativeIndex & operator++();
	unsigned long Get();
	bool IsValid();
protected:
	long long Index; // 0x0
};
class Scaleform::GFx::AS3::SlotIndex
{
	class SelfType;
public:
	SlotIndex(Scaleform::GFx::AS3::GlobalSlotIndex, const Scaleform::GFx::AS3::Traits &);
	SlotIndex(Scaleform::GFx::AS3::RelativeIndex);
	SlotIndex(unsigned long);
	Scaleform::GFx::AS3::SlotIndex & operator=(const Scaleform::GFx::AS3::SlotIndex &);
	bool operator<(const Scaleform::GFx::AS3::SlotIndex &);
	bool operator<(unsigned long);
	bool operator>(const Scaleform::GFx::AS3::SlotIndex &);
	bool operator>(unsigned long);
	Scaleform::GFx::AS3::SlotIndex operator-(const Scaleform::GFx::AS3::SlotIndex &);
	Scaleform::GFx::AS3::SlotIndex operator-(unsigned long);
	Scaleform::GFx::AS3::SlotIndex operator+(const Scaleform::GFx::AS3::SlotIndex &);
	Scaleform::GFx::AS3::SlotIndex operator+(unsigned long);
	Scaleform::GFx::AS3::SlotIndex operator++(long);
	Scaleform::GFx::AS3::SlotIndex & operator++();
	void operator+=(const Scaleform::GFx::AS3::SlotIndex &);
	unsigned long Get();
	bool IsValid();
protected:
	unsigned long Index; // 0x0
};
class Scaleform::GFx::AS3::GlobalSlotIndex
{
	class SelfType;
public:
	GlobalSlotIndex(Scaleform::GFx::AS3::AbsoluteIndex);
	GlobalSlotIndex(unsigned long);
	Scaleform::GFx::AS3::GlobalSlotIndex & operator=(const Scaleform::GFx::AS3::GlobalSlotIndex &);
	bool operator<(const Scaleform::GFx::AS3::GlobalSlotIndex &);
	bool operator<(unsigned long);
	bool operator>(const Scaleform::GFx::AS3::GlobalSlotIndex &);
	bool operator>(unsigned long);
	Scaleform::GFx::AS3::GlobalSlotIndex operator-(const Scaleform::GFx::AS3::GlobalSlotIndex &);
	Scaleform::GFx::AS3::GlobalSlotIndex operator-(unsigned long);
	Scaleform::GFx::AS3::GlobalSlotIndex operator--(long);
	Scaleform::GFx::AS3::GlobalSlotIndex & operator--();
	void operator-=(const Scaleform::GFx::AS3::GlobalSlotIndex &);
	void operator-=(unsigned long);
	Scaleform::GFx::AS3::GlobalSlotIndex operator+(const Scaleform::GFx::AS3::GlobalSlotIndex &);
	Scaleform::GFx::AS3::GlobalSlotIndex operator+(unsigned long);
	Scaleform::GFx::AS3::GlobalSlotIndex operator++(long);
	Scaleform::GFx::AS3::GlobalSlotIndex & operator++();
	void operator+=(const Scaleform::GFx::AS3::GlobalSlotIndex &);
	void operator+=(unsigned long);
	unsigned long Get();
	bool IsValid();
protected:
	unsigned long Index; // 0x0
};