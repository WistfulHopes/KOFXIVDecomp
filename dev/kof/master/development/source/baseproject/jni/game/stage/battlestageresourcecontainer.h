#pragma once

class BattleStageResourceContainer
{
	enum SetupStatus
	{
		SETUP_RESULT_NONE = 0,
		SETUP_RESULT_BUSY = 1,
		SETUP_RESULT_ERROR = 2,
		SETUP_RESULT_CANCELLED = 3,
		SETUP_RESULT_SUCCESSED = 4,
	};
private:
	STAGE_ID m_stageID; // 0x0
	bool m_bResoucesActived; // 0x4
	bool m_bActived; // 0x5
	TknData * * m_pDatas; // 0x8
	long m_dataCount; // 0x10
	BSDataSceneTrigger * * m_pSceneTriggers; // 0x18
	long m_SceneTriggerCount; // 0x20
	BattleStageResourcePack * m_pResourcPack; // 0x28
	void setupDataScene(TknData *);
	void setupDataEventCondition(TknData *);
	void setupDataModel(TknData *);
	void setupDataModelUVAnimation(TknData *);
	void setupDataMotion(TknData *);
	void setupDataObject(TknData *);
	void setupDataEvent(TknData *);
	void setupDataEventAnimation(TknData *);
	void setupDataEventTrans(TknData *);
	void setupDataLight(TknData *);
	void setupDataEffect(TknData *);
	void setupDataEffectAnimation(TknData *);
	void setupDataBillboard(TknData *);
	void setupDataBillboardAnimation(TknData *);
	void setupDataScript(TknData *);
	void setupDataSound(TknData *);
	void setupOGLModel();
	void dataCompatibleConvert(long);
	BattleStageResourceContainer();
	~BattleStageResourceContainer();
	void dispose();
	bool loadResources(const StageProjectData &, STAGE_ID);
	BattleStageResourceContainer::SetupStatus checkLoadStatus();
	bool isActived();
	bool isCheckResource(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>);
	bool setupParameters(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>);
	bool findScene(BSDataScene * *, long *, TknData::SceneTrigger1, TknData::SceneTrigger2, const TknDataEventConditions::CheckParams *);
	OGLModel * getStageModel(long);
	TknData * * getItems();
	long getItemCount();
	EffectDataListManager * * getEffectManager();
	long getEffectManagerCount();
	void setAuroraVisionMessage(const char *);
	OGLTexture * findOGLTextureByName(const char *);
public:
	STAGE_ID getStageID();
	long getNeutralSceneUID();
	BSDataEvent * findSceneEvent(long, long);
	const TknData * * getItemList();
	long getItemListCount();
	const TknData * findItem(long, TknData::DataType);
};