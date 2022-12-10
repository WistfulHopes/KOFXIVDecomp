#pragma once

struct _DAT_HEADER
{
	char fileId[4]; // 0x0
	unsigned long version; // 0x4
	unsigned long dataNum; // 0x8
	unsigned long padding[1]; // 0xC
};
struct _LIST_DATA_HEADER
{
	char fileId[4]; // 0x0
	unsigned long version; // 0x4
	unsigned long dataNum; // 0x8
	unsigned long texDataNum; // 0xC
	unsigned long figureDataNum; // 0x10
	unsigned long curveDataNum; // 0x14
	unsigned long padding[2]; // 0x18
};
enum LoadDataType
{
	EFFECT_TEXT = 0,
	EFFECT_EDIT = 1,
	EFFECT_BUTTON = 2,
	EFFECT_COMBO = 3,
	EFFECT_CHART = 4,
	ALL_EFFECT_LOAD_DATA_TYPE = 5,
};
class BinaryFileInput
{
public:
	BinaryFileInput(const BinaryFileInput &);
	BinaryFileInput();
	~BinaryFileInput();
	EffectData * input(std::string);
	EffectData * distributeInput(EffectData *);
	void readBinaryInt(long *);
	void readBinaryDouble(float *);
	void readBinaryString(std::string *);
	void effectBinaryIn(EffectData *, long, long);
	bool emitterDialogBinaryIn(long, LoadDataType);
	bool generateDialogBinaryIn(long, LoadDataType);
	bool colorDialogBinaryIn(long, LoadDataType);
	bool scaleDialogBinaryIn(long, LoadDataType);
	void particleBinaryIn(ParticleEmitterData *);
	void gpuParticleBinaryIn(GPUParticleEmitterData *);
	void lightParticleBinaryIn(LightParticleEmitterData *);
	void turbulenceBinaryIn(TurbulenceData *);
	void collisionBinaryIn(CollisionFieldData *);
	void attractionBinaryIn(AttractionFieldData *);
	void chartDataIn(ChartData *);
	void keyDataIn(KeyData *);
private:
	EffectAppData * m_pAppData; // 0x8
	bool m_LittleEndian; // 0x10
	long m_Align; // 0x14
	unsigned long m_Version; // 0x18
	std::basic_istream<char,std::char_traits<char> > * m_fin; // 0x20
public:
	BinaryFileInput & operator=(const BinaryFileInput &);
};