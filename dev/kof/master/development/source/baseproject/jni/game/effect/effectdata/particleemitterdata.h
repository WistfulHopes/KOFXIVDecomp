#pragma once

class ParticleEmitterData :
	EmitterData
{
public:
	ParticleEmitterData(const ParticleEmitterData &);
	ParticleEmitterData();
	virtual ~ParticleEmitterData();
	virtual void initialize();
	virtual void terminate();
	void initDialogData(long, long, long, long, long);
	void initDialogData();
	void initChartData(long, long);
	void setDialogData();
	virtual long getDeleteTime(long, long);
	ParticleEmitterData & operator=(const ParticleEmitterData &);
};