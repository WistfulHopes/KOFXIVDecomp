#pragma once

class BattleCallAnimationReadyGO :
	BattleCallAnimation
{
	struct ERound;
private:
	STAGE_ID m_stageID; // 0x58
	BattleCallAnimationReadyGO::ERound::Type m_round; // 0x5C
public:
	BattleCallAnimationReadyGO(const BattleCallAnimationReadyGO &);
	BattleCallAnimationReadyGO(STAGE_ID, BattleCallAnimationReadyGO::ERound::Type);
	virtual ~BattleCallAnimationReadyGO();
private:
	SoundId getAnnouncerVoiceSoundID();
protected:
	virtual void readResources();
	virtual bool updateAnimations(float);
	virtual void drawAnimations(float);
private:
	void readResources_EN();
	void drawAnimations_EN(float);
	void drawAnimations_ReadyGo_Round_EN(GraphicsOpt *, float);
	void drawAnimations_ReadyGo_RoundFinalAndExtra_EN(GraphicsOpt *, float);
	void drawAnimations_ReadyGo_RoundLineEfftcts_EN(GraphicsOpt *, float);
	void drawAnimations_ReadyGo_Ready_EN(GraphicsOpt *, float);
	void drawAnimations_ReadyGo_Go_EN(GraphicsOpt *, float);
	void readResources_CN();
	void drawAnimations_CN(float);
	void drawAnimations_ReadyGo_Round_CN(GraphicsOpt *, float);
	void drawAnimations_ReadyGo_RoundFinalAndExtra_CN(GraphicsOpt *, float);
	void drawAnimations_ReadyGo_RoundLineEfftcts_CN(GraphicsOpt *, float);
	void drawAnimations_ReadyGo_Ready_CN(GraphicsOpt *, float);
	void drawAnimations_ReadyGo_Go_CN(GraphicsOpt *, float);
public:
	BattleCallAnimationReadyGO & operator=(const BattleCallAnimationReadyGO &);
};
struct BattleCallAnimationReadyGO::ERound
{
	enum Type
	{
		ROUND_1 = 0,
		ROUND_2 = 1,
		ROUND_3 = 2,
		ROUND_4 = 3,
		ROUND_5 = 4,
		ROUND_6 = 5,
		ROUND_7 = 6,
		ROUND_8 = 7,
		ROUND_9 = 8,
		FINAL = 255,
		EXTRA = 254,
		SKIP = 253,
	};
};
enum BattleCallAnimationReadyGO::ERound::Type
{
	ROUND_1 = 0,
	ROUND_2 = 1,
	ROUND_3 = 2,
	ROUND_4 = 3,
	ROUND_5 = 4,
	ROUND_6 = 5,
	ROUND_7 = 6,
	ROUND_8 = 7,
	ROUND_9 = 8,
	FINAL = 255,
	EXTRA = 254,
	SKIP = 253,
};