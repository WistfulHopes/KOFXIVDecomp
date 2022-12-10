#pragma once

class AppMain::Scene_PreFightFaceOff
{
	struct ESequence;
private:
	AppMain::Scene_PreFightFaceOff::ESequence::Type m_sequence; // 0x0
	PreFightFaceOff::RenderManager * m_pRenderManager; // 0x8
	const char * m_pTextKey; // 0x10
public:
	Scene_PreFightFaceOff();
	~Scene_PreFightFaceOff();
	bool isFinished();
	void start();
	void end();
	void update();
	void draw();
private:
	void changeSequence(AppMain::Scene_PreFightFaceOff::ESequence::Type);
	void changeNextSequence();
	void startSequence_LoadingWait();
	void updateSequence_LoadingWait();
	void startSequence_CharacterTalk();
	void updateSequence_CharacterTalk();
	void sceneOpen();
	void sceneClose();
	void checkTalkMessage();
};
struct AppMain::Scene_PreFightFaceOff::ESequence
{
	enum Type
	{
		None = 0,
		LoadingWait = 1,
		Talk = 2,
		Finished = 3,
		Exit = 4,
	};
};