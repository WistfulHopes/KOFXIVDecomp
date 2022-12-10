#pragma once

class FieldData :
	EffectData
{
public:
	FieldData(const FieldData &);
	FieldData();
	virtual ~FieldData();
	FieldData & operator=(const FieldData &);
};