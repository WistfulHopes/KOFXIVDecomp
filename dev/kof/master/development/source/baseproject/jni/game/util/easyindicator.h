#pragma once

class EasyIndicator
{
	enum INDICATOR_TYPE
	{
		TYPE_LOADING = 0,
		TYPE_SAVING = 1,
		TYPE_CONNECTING = 2,
		TYPE_MAX = 3,
	};
	enum IMAGE_TYPE
	{
		IMAGE_LOADING = 0,
		IMAGE_SAVING = 1,
		IMAGE_CONNECTING = 2,
		IMAGE_MAX = 3,
	};
	struct IndicatorStack;
private:
	static EasyIndicator * instance; // 0xFFFFFFFFFFFFFFFF
	extension::BasicFutureObject<Image,extension::FutureImageOption> * m_Image; // 0x0
	EasyIndicator::IndicatorStack m_IndicatorStack[16]; // 0x8
	long m_StackCount; // 0x148
	long m_DrawCount; // 0x14C
	EasyIndicator();
	~EasyIndicator();
public:
	static EasyIndicator & getInstance();
	static void delInstance();
	void Init();
	void Release();
	bool Load(EasyIndicator::IMAGE_TYPE);
	void Unload(EasyIndicator::IMAGE_TYPE);
	void Update();
	void DirectDraw(GraphicsOpt *, long, long, EasyIndicator::INDICATOR_TYPE, long);
	void Draw(GraphicsOpt *);
	void RequestDraw(long, long, EasyIndicator::INDICATOR_TYPE);
};
struct EasyIndicator::IndicatorStack
{
	bool alive; // 0x0
	long x; // 0x4
	long y; // 0x8
	EasyIndicator::INDICATOR_TYPE type; // 0xC
	long count; // 0x10
};
EasyIndicator & EasyIndicator::getInstance(); // 0x1400988C0