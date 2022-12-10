#pragma once

class EasyCommand
{
	enum CommandNo
	{
		CHEAT = 0,
		MAX = 1,
	};
	enum CheckType
	{
		AND = 0,
		OR = 1,
		EXCLUSIVE = 2,
		FIRST = 3,
	};
	enum CheckOption
	{
		NONE = 0,
		BUTTON_NG = 1,
	};
	enum RetValue
	{
		RET_NONE = 255,
		RET_SUCCESS = 0,
		RET_FAIL = 1,
		RET_OK = 2,
		RET_THROUGH = 3,
		RET_MISS = 4,
	};
	enum CommandStatus
	{
		STOP = 0,
		RUNNING = 1,
		FINISH = 2,
		FAIL = 3,
	};
	struct CommandData;
private:
	static EasyCommand * instance; // 0xFFFFFFFFFFFFFFFF
	long m_CommandCount[1]; // 0x0
	long m_TimeCount[1]; // 0x4
	EasyCommand::CommandStatus m_CommandStatus[1]; // 0x8
	EasyCommand();
	~EasyCommand();
public:
	static EasyCommand & getInstance();
	static void delInstance();
	void Init();
	void Release();
	long Update();
	bool KeyCheck(EasyCommand::CommandNo);
	EasyCommand::RetValue KeyCheckAND(long, GameOperations::GameOpSpec, EasyCommand::CheckOption);
	EasyCommand::RetValue KeyCheckOR(long, GameOperations::GameOpSpec, EasyCommand::CheckOption);
	EasyCommand::RetValue KeyCheckExclusive(long, GameOperations::GameOpSpec, EasyCommand::CheckOption);
	EasyCommand::RetValue KeyCheckFirst(long, GameOperations::GameOpSpec, EasyCommand::CheckOption);
	bool IsDirKey(long);
	bool IsDirOpSpec(GameOperations::GameOpSpec);
	EasyCommand::CommandStatus GetStatus(EasyCommand::CommandNo);
	long GetCount(EasyCommand::CommandNo);
	void Start(EasyCommand::CommandNo);
	void Stop(EasyCommand::CommandNo);
	void Stop();
	void Fail(EasyCommand::CommandNo);
	bool Next(EasyCommand::CommandNo);
	void Finish(EasyCommand::CommandNo);
};
struct EasyCommand::CommandData
{
	long Time; // 0x0
	long Key; // 0x4
	EasyCommand::CheckType Type; // 0x8
	EasyCommand::CheckOption Op; // 0xC
};