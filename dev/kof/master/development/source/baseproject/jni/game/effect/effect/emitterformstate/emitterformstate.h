#pragma once

class EmitterFormState
{
public:
	EmitterFormState(const EmitterFormState &);
	EmitterFormState();
	~EmitterFormState();
	void cleanup();
	bool LoadFigureData(const char *);
	EmitterFormState & operator=(const EmitterFormState &);
};