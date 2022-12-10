#pragma once

class BattleUI
{
	enum SetupStatus
	{
		SETUP_RESULT_NONE = 0,
		SETUP_RESULT_BUSY = 1,
		SETUP_RESULT_ERROR = 2,
		SETUP_RESULT_CANCELLED = 3,
		SETUP_RESULT_SUCCESSED = 4,
	};
public:
	BattleUI(const BattleUI &);
	BattleUI();
	~BattleUI();
	bool setupResourcesAll();
	void disposeRecoucesAll();
	BattleUI::SetupStatus getSetupStatus();
	BattleUI & operator=(const BattleUI &);
};