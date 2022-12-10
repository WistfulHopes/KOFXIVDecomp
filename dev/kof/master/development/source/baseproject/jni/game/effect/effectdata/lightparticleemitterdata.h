#pragma once

class LightParticleEmitterData :
	EffectData
{
public:
	LightParticleEmitterData(const LightParticleEmitterData &);
	LightParticleEmitterData();
	virtual ~LightParticleEmitterData();
	virtual void initialize();
	virtual void terminate();
	void initDialogData(long, long, long, long, long);
	void initDialogData();
	void setinitDialogData();
	void initChartData(long, long);
	void setDialogData();
	LightParticleEmitterData & operator=(const LightParticleEmitterData &);
};