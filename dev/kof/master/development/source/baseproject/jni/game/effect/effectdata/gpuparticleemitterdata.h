#pragma once

class GPUParticleEmitterData :
	ParticleEmitterData
{
public:
	GPUParticleEmitterData(const GPUParticleEmitterData &);
	GPUParticleEmitterData();
	virtual ~GPUParticleEmitterData();
	virtual void initialize();
	virtual void terminate();
	virtual void initDialogData(long, long, long, long, long);
	virtual void initDialogData();
	virtual void initChartData(long, long);
	virtual void setDialogData();
	virtual long getDeleteTime(long, long);
	GPUParticleEmitterData & operator=(const GPUParticleEmitterData &);
};