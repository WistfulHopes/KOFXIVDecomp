#pragma once

class BattleHudKeyHistory
{
private:
	bool m_bError; // 0x8
	bool m_bImageLoading; // 0x9
	extension::BasicFutureObject<Image,extension::FutureImageOption> * m_pImage; // 0x10
public:
	BattleHudKeyHistory(const BattleHudKeyHistory &);
	BattleHudKeyHistory();
	~BattleHudKeyHistory();
	void setupResources();
	bool isResouceLoading();
	bool isError();
	void draw(long, long, InputKeyHistory *, bool);
private:
	void dataClear();
public:
	BattleHudKeyHistory & operator=(const BattleHudKeyHistory &);
};