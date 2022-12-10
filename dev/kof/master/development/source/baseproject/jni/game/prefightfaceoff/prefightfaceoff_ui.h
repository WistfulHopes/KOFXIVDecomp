#pragma once

class PreFightFaceOff::UI :
	ErrorChecker
{
private:
	extension::BasicFutureObject<Image,extension::FutureImageOption> m_image; // 0x10
	bool m_bResourcesCreated; // 0x20
public:
	UI(const PreFightFaceOff::UI &);
	UI();
	virtual ~UI();
	void release();
	bool isResoucesCreated();
	bool create();
	void update(float);
	void draw();
	PreFightFaceOff::UI & operator=(const PreFightFaceOff::UI &);
};