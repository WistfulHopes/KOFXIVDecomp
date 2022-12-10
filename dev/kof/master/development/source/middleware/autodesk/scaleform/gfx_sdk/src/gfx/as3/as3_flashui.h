#pragma once

class Scaleform::GFx::AS3::FlashUI
{
	enum StateType
	{
		sError = 0,
		sBreakpoint = 1,
		sPreStep = 2,
		sStep = 3,
	};
public:
	FlashUI(const Scaleform::GFx::AS3::FlashUI &);
	FlashUI();
	~FlashUI();
	enum OutputMessageType
	{
		Output_Message = 0,
		Output_Error = 1,
		Output_Warning = 2,
		Output_Action = 3,
	};
	void Output(Scaleform::GFx::AS3::FlashUI::OutputMessageType, const char *);
	bool OnOpCode(unsigned long long);
	void SetHandleBreakpoint();
	void SetHandleStep();
	void SetHandleError();
	Scaleform::GFx::AS3::FlashUI::StateType GetState();
	bool NeedToCheckOpCode();
protected:
	void SetState(Scaleform::GFx::AS3::FlashUI::StateType);
public:
	void SetNeedToCheckOpCode(bool);
protected:
	Scaleform::GFx::AS3::FlashUI::StateType State; // 0x8
	bool NeedToCheck; // 0xC
public:
	Scaleform::GFx::AS3::FlashUI & operator=(const Scaleform::GFx::AS3::FlashUI &);
};