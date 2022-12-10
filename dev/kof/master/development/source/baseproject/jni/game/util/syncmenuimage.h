#pragma once

class SyncMenuImage
{
	enum FADE_MODE
	{
		FADE_NONE = 0,
		FADE_OUT = 1,
		FADE_IN = 2,
	};
private:
	extension::BasicFutureObject<Image,extension::FutureImageOption> * m_MenuImage; // 0x0
	char m_MenuImageName[256][2]; // 0x8
	long m_MenuImageCurrent; // 0x208
	long m_MenuImageNew; // 0x20C
	long m_ImageAlpha; // 0x210
	SyncMenuImage::FADE_MODE m_FadeMode; // 0x214
	long m_FadeSpeed; // 0x218
	long m_FadeColor; // 0x21C
public:
	SyncMenuImage();
	~SyncMenuImage();
	void Init();
	void Dispose();
	void Release();
	bool Load();
	bool Load(const ImageDataInfo *, SyncMenuImage::FADE_MODE);
	void Update();
	bool Draw(GraphicsOpt *, long, long, float);
	void FadeOut(bool);
	void FadeIn(bool);
	bool HasFinished();
};