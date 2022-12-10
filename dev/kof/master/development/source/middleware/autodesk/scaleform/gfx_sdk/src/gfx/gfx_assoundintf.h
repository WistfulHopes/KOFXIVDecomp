#pragma once

class Scaleform::GFx::ASSoundIntf
{
public:
	~ASSoundIntf();
	void ReleaseTarget();
	void ExecuteOnSoundComplete();
	void * GetOwner();
	bool HasPrivateOverride();
	long PrivateVolume();
	long PrivatePan();
	ASSoundIntf(const Scaleform::GFx::ASSoundIntf &);
	ASSoundIntf();
	Scaleform::GFx::ASSoundIntf & operator=(const Scaleform::GFx::ASSoundIntf &);
};