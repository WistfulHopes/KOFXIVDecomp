#pragma once

class BattleStageShader
{
	struct Param;
private:
	BattleStageShader::Param::RenderType m_renderType; // 0x8
	bool m_bUVChanged; // 0xC
	bool m_bUseUVAnimationCustomShader; // 0xD
	bool m_bUseCustomProcess; // 0xE
	float * * m_pCustomProcessBuffer; // 0x10
	long m_customProcessBufferCount; // 0x18
	long m_customProcessI1; // 0x1C
	BattleStageShaderDef::CustomProcessVals * m_pCustomProcessVals; // 0x20
public:
	BattleStageShader(const BattleStageShader &);
	BattleStageShader();
	~BattleStageShader();
private:
	void release();
public:
	BattleStageShader::Param::RenderType getRenderType();
	bool isUseCustomRender();
	bool isUseCustomProcess();
	bool isSetWorldMatrix();
	float * * getCustomProcessBuffer();
private:
	bool setupParams_groupModelMediate(BattleStageEvent *, long);
	bool createModel_groupModelMediate(BattleStageEvent *, long);
	void setupShaderParams_uvAnimation(BattleStageEvent *, OGLModel *, long);
public:
	void attachShaderParamsByModel(BattleStageEvent *, OGLModel *);
	static void setShaderParams(STAGE_ID);
	bool updateCustomProcess(BattleStageEvent *, float, long, float, OGLMatrix *, bool);
	void renderCustomStackDraw(BattleStageEvent *, OGLModel *);
	void renderCustomDirectDraw(BattleStageEvent *, OGLModel *);
private:
	void attachShaderParamsByModel_GRO(BattleStageEvent *);
	static void setShaderParams_GRO();
	bool updateCustomProcess_GRO(BattleStageEvent *, float, long, float, OGLMatrix *);
	void renderCustomStackDraw_GRO(BattleStageEvent *);
	void attachShaderParamsByModel_SAM(BattleStageEvent *);
	static void setShaderParams_SAM();
	bool updateCustomProcess_SAM(BattleStageEvent *, float, long, float, OGLMatrix *, bool);
	void renderCustomStackDraw_SAM(BattleStageEvent *);
	void attachShaderParamsByModel_MBS(BattleStageEvent *);
	static void setShaderParams_MBS();
	bool updateCustomProcess_MBS(BattleStageEvent *, float, long, float, OGLMatrix *);
	void renderCustomStackDraw_MBS(BattleStageEvent *);
	void attachShaderParamsByModel_STH(BattleStageEvent *);
	static void setShaderParams_STH();
	bool updateCustomProcess_STH(BattleStageEvent *, float, long, float, OGLMatrix *);
	void renderCustomStackDraw_STH(BattleStageEvent *);
	void attachShaderParamsByModel_PSY(BattleStageEvent *);
	static void setShaderParams_PSY();
	bool updateCustomProcess_PSY(BattleStageEvent *, float, long, float, OGLMatrix *);
	void renderCustomStackDraw_PSY(BattleStageEvent *);
	void attachShaderParamsByModel_BAD(BattleStageEvent *);
	static void setShaderParams_BAD();
	bool updateCustomProcess_BAD(BattleStageEvent *, float, long, float, OGLMatrix *);
	void renderCustomStackDraw_BAD(BattleStageEvent *);
	void attachShaderParamsByModel_MEX(BattleStageEvent *);
	static void setShaderParams_MEX();
	bool updateCustomProcess_MEX(BattleStageEvent *, float, long, float, OGLMatrix *);
	void renderCustomStackDraw_MEX(BattleStageEvent *);
	void attachShaderParamsByModel_WMN(BattleStageEvent *);
	static void setShaderParams_WMN();
	bool updateCustomProcess_WMN(BattleStageEvent *, float, long, float, OGLMatrix *);
	void renderCustomStackDraw_WMN(BattleStageEvent *);
	void attachShaderParamsByModel_CHN(BattleStageEvent *);
	static void setShaderParams_CHN();
	bool updateCustomProcess_CHN(BattleStageEvent *, float, long, float, OGLMatrix *);
	void renderCustomStackDraw_CHN(BattleStageEvent *);
	void attachShaderParamsByModel_LBS(BattleStageEvent *);
	static void setShaderParams_LBS();
	bool updateCustomProcess_LBS(BattleStageEvent *, float, long, float, OGLMatrix *);
	void renderCustomStackDraw_LBS(BattleStageEvent *);
	void attachShaderParamsByModel_MAS(BattleStageEvent *);
	static void setShaderParams_MAS();
	bool updateCustomProcess_MAS(BattleStageEvent *, float, long, float, OGLMatrix *);
	void renderCustomStackDraw_MAS(BattleStageEvent *);
	void attachShaderParamsByModel_TRA(BattleStageEvent *);
	static void setShaderParams_TRA();
	bool updateCustomProcess_TRA(BattleStageEvent *, float, long, float, OGLMatrix *, bool);
	void renderCustomStackDraw_TRA(BattleStageEvent *);
public:
	BattleStageShader & operator=(const BattleStageShader &);
};
struct BattleStageShader::Param
{
	enum RenderType
	{
		RENDERTYPE_NORMAL = 0,
		RENDERTYPE_CUSTOM_DRAW_STACK = 1,
		RENDERTYPE_CUSTOM_DRAW_DIRECT = 2,
	};
};