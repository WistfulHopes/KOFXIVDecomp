#pragma once

class EffectAppData
{
private:
	EffectAppData();
public:
	~EffectAppData();
	static EffectAppData * getInstance();
	EffectData * addParticle(EffectData *);
	EffectData * addChildParticle(EffectData *);
	EffectData * addTurbulence(EffectData *);
	EffectData * addChildTurbulence(EffectData *);
	void RecursiveDelEmitterData(EffectData *);
	void delEmitterData(EffectData *);
	void CleanupDialogData();
	void UpdateData(bool);
	void moveEmitterData(long, long);
	EffectData * getTopData();
	std::string getEmitterName(EffectData *);
	std::mutex * getAllDataMutex();
	long getEffectNum(EffectData *, long);
private:
	long m_EmitterNum; // 0x8
	std::mutex allDataMutex; // 0x10
	EffectData * m_TopData; // 0x60
};
EffectAppData * EffectAppData::getInstance(); // 0x14011CD10
EffectData * getLastSiblingEmitter<EffectData>(EffectData * myEmitter); // 0x140120400
Effect * getLastSiblingEmitter<Effect>(Effect * myEmitter); // 0x14012A540
void EffectAppData::chainSibling<EffectData>(EffectData * back, EffectData * front); // 0x1401202B0
void EffectAppData::delChain<EffectData>(EffectData * delEmitter); // 0x1401295C0