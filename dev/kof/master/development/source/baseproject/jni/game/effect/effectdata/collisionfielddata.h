#pragma once

class CollisionFieldData :
	FieldData
{
public:
	CollisionFieldData(const CollisionFieldData &);
	CollisionFieldData();
	virtual ~CollisionFieldData();
	virtual void initialize();
	virtual void terminate();
	void initDialogData(long, long, long, long, long);
	void initDialogData();
	void setinitDialogData();
	void initChartData(long, long);
	void setDialogData();
protected:
	CCollisionFieldFormView * pCollisionFieldFormView; // 0x88
public:
	CollisionFieldData & operator=(const CollisionFieldData &);
};