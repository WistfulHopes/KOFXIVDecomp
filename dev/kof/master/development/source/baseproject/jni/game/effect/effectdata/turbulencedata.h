#pragma once

class TurbulenceData :
	FieldData
{
public:
	TurbulenceData(const TurbulenceData &);
	TurbulenceData();
	virtual ~TurbulenceData();
	virtual void initialize();
	virtual void terminate();
	void initDialogData(long, long, long, long, long);
	void initDialogData();
	void initChartData(long, long);
	void setDialogData();
	TurbulenceData & operator=(const TurbulenceData &);
};