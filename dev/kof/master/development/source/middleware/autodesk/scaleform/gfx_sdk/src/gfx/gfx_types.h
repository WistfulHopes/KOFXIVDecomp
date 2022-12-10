#pragma once

class Scaleform::GFx::Bool3W
{
	enum <unnamed-enum-B3W_Undefined>
	{
		B3W_Undefined = 0,
		B3W_True = 1,
		B3W_False = 2,
	};
private:
	unsigned char Value; // 0x0
public:
	Bool3W(const Scaleform::GFx::Bool3W &);
	Bool3W(bool);
	Bool3W();
	Scaleform::GFx::Bool3W & operator=(bool);
	Scaleform::GFx::Bool3W & operator=(const Scaleform::GFx::Bool3W &);
	bool operator==(bool);
	bool operator==(const Scaleform::GFx::Bool3W &);
	bool operator!=(bool);
	bool operator!=(const Scaleform::GFx::Bool3W &);
	bool IsDefined();
	bool IsTrue();
	bool IsFalse();
};
enum Scaleform::GFx::PlayState
{
	State_Playing = 0,
	State_Stopped = 1,
};
enum Scaleform::GFx::FocusMovedType
{
	GFx_FocusMovedByMouse = 1,
	GFx_FocusMovedByKeyboard = 2,
	GFx_FocusMovedByAS = 3,
};