#pragma once

class AttractionFieldData :
	FieldData
{
public:
	AttractionFieldData(const AttractionFieldData &);
	AttractionFieldData();
	virtual ~AttractionFieldData();
	virtual void initialize();
	virtual void terminate();
	void initDialogData(long, long, long, long, long);
	void initDialogData();
	void setinitDialogData();
	void initChartData(long, long);
	void setDialogData();
	AttractionFieldData & operator=(const AttractionFieldData &);
};