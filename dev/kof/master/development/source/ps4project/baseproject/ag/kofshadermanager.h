#pragma once

enum ShaderType
{
	ShaderType_Vertex = 0,
	ShaderType_Fragment = 1,
	ShaderType_Compute = 2,
	ShaderType_Geometry = 3,
	ShaderType_Max = 4,
};
enum UniformBuffer
{
	UniformBuffer_Base = 0,
	UniformBuffer_Option = 1,
	UniformBuffer_Light = 2,
	UniformBuffer_PostFX = 3,
	UniformBuffer_ScreenFilter = 4,
	UniformBuffer_Effect = 5,
	UniformBuffer_Bone = 6,
	UniformBuffer_Stage = 7,
	UniformBuffer_Extra = 8,
	UniformBuffer_Base2D = 9,
	UniformBuffer_Fog = 10,
	UniformBuffer_NumberOf = 11,
};
class KOFShaderManager :
	AgSingleton<KOFShaderManager>
{
public:
	KOFShaderManager(KOFShaderManager &);
	KOFShaderManager(const KOFShaderManager &);
	KOFShaderManager();
	unsigned long createProgram(long *);
	unsigned long createShader(unsigned long);
	unsigned long createShaderSlot(unsigned long);
	void attachShaderSlot(long, long);
	void attachShaderSlot2(long, long);
private:
	static void loadShader(unsigned long &, unsigned long, const char *, unsigned char, unsigned char *);
public:
	void loadShader(unsigned long, long, const char * *, const long *, const char *);
	OGLShader * getShader();
	unsigned long getShaderID(unsigned long);
	static unsigned long loadVertShader(const char *, unsigned char, unsigned char *);
	static void loadFragShader(unsigned long &, const char *, unsigned char, unsigned char *);
	static unsigned long loadFragShader(const char *, unsigned char, unsigned char *);
	void preLink(long, OGLShader *, long, const _SHADER_INFO *, long, const _SHADER_INFO *);
private:
	void link(KOFShaderManager::Program &);
public:
	void link(long);
	void linkSlot(long);
	void unloadSlot(long);
	void useProgram(unsigned long);
	void useProgramSlot(long);
	void setProgramUniforms(unsigned long, long);
	void setProgramUniformsSlot(long, long);
	void setContentBufferPtr2D(long);
	void setContentBufferPtr2DFog(long);
	void setContentBufferPtr(long);
	void * getShaderUniformPtr(long);
	void setUniforms();
	void setUniformWriteMask(long);
	void resetConstantBuffers();
	long findProgram(long);
protected:
	virtual long onSingletonInit();
	virtual long onSingletonExit();
	struct Program;
private:
	KOFShaderManager::Program m_program[32768]; // 0x8
	long m_nextProgramIDSlot; // 0x2C0008
	unsigned long m_currentProgramID; // 0x2C000C
	long m_currentProgramSlot; // 0x2C0010
	unsigned long m_currentTypes; // 0x2C0014
	struct Shader;
	KOFShaderManager::Shader m_shader[32768]; // 0x2C0018
	long m_nextShaderSlot; // 0x3C0018
	ConstantBase m_currentConstants; // 0x3C001C
	ConstantBase2D m_currentConstants2D; // 0x3C0154
	ConstantBase2DFog m_currentConstants2DFog; // 0x3C01A4
	ConstantOption m_currentConstantOption; // 0x3C024C
	ConstantLight m_currentConstantLight; // 0x3C04CC
	ConstantPostFX m_currentConstantPostFX; // 0x3C074C
	ConstantScreenFilter m_currentConstantScreenFilter; // 0x3C080C
	ConstantBone m_currentConstantBone; // 0x3C087C
	ConstantEffect m_currentConstantEffect; // 0x3C45FC
	ConstantStage m_currentConstantStage; // 0x3C472C
	ConstantExtra m_currentConstantExtra; // 0x3C515C
	enum <unnamed-enum-UNIFORM_WRITE_MASK_BASE>
	{
		UNIFORM_WRITE_MASK_BASE = 1,
		UNIFORM_WRITE_MASK_2D = 2,
		UNIFORM_WRITE_MASK_FOG = 4,
		UNIFORM_WRITE_MASK_OPTION = 8,
		UNIFORM_WRITE_MASK_LIGHT = 16,
		UNIFORM_WRITE_MASK_POSTFX = 32,
		UNIFORM_WRITE_MASK_SCREENFILTER = 64,
		UNIFORM_WRITE_MASK_BONE = 128,
		UNIFORM_WRITE_MASK_EFFECT = 256,
		UNIFORM_WRITE_MASK_STAGE = 512,
		UNIFORM_WRITE_MASK_EXTRA = 1024,
	};
	unsigned long m_uniformBufferWriteMask; // 0x3C519C
	enum <unnamed-enum-UniformBuffer_RoundRobinCount>
	{
		UniformBuffer_RoundRobinCount = 3,
	};
	unsigned long m_bufferID[3][11]; // 0x3C51A0
	__GLsync * m_bufferSync[3][11]; // 0x3C5228
	unsigned long m_bufferRoundRobin[11]; // 0x3C5330
	unsigned long m_bufferSyncPending; // 0x3C535C
	void * * m_shaderUniformPtr[8]; // 0x3C5360
	long m_shaderUniformSize[8]; // 0x3C53A0
	unsigned long getConstantType(const char *);
	void setUniformBuffer(UniformBuffer, void *, unsigned long long, unsigned long);
public:
	virtual ~KOFShaderManager();
	KOFShaderManager & operator=(KOFShaderManager &);
	KOFShaderManager & operator=(const KOFShaderManager &);
};
class AgSingleton<KOFShaderManager>
{
protected:
	~AgSingleton<KOFShaderManager>();
	long onSingletonInit();
	long onSingletonExit();
public:
	static long createInstance();
	static long destroyInstance();
	static KOFShaderManager & getInstance();
	static long hasInstance();
private:
	static KOFShaderManager * createSingleton();
	static void destroySingleton(KOFShaderManager *);
	static AgSingleton<KOFShaderManager> * ms_instance; // 0xFFFFFFFFFFFFFFFF
public:
	AgSingleton<KOFShaderManager>(const AgSingleton<KOFShaderManager> &);
	AgSingleton<KOFShaderManager>();
	AgSingleton<KOFShaderManager> & operator=(const AgSingleton<KOFShaderManager> &);
};
struct KOFShaderManager::Program
{
	unsigned long m_ID; // 0x0
	unsigned long m_shader[4]; // 0x4
	long m_shaderSlot[4]; // 0x14
	long m_linkID; // 0x24
	bool m_isLinked; // 0x28
	OGLShader * m_pOglShader; // 0x30
	long m_attribNum; // 0x38
	const _SHADER_INFO * m_shaderAttrib; // 0x40
	long m_uniformNum; // 0x48
	const _SHADER_INFO * m_uniformAttrib; // 0x50
};
struct KOFShaderManager::Shader
{
	unsigned long m_ID; // 0x0
	ShaderType m_type; // 0x4
	unsigned long m_constantTypes; // 0x8
	AgString m_fileName; // 0x10
	Shader(KOFShaderManager::Shader &);
	Shader(const KOFShaderManager::Shader &);
	Shader();
	~Shader();
	KOFShaderManager::Shader & operator=(KOFShaderManager::Shader &);
	KOFShaderManager::Shader & operator=(const KOFShaderManager::Shader &);
};