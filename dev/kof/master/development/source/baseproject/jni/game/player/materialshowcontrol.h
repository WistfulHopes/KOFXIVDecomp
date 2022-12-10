#pragma once

class MaterialShowControl
{
	struct MaterialIndexList;
	struct DefaultMaterialState;
	enum <unnamed-enum-DEFAULT_MATERIAL_DATA_MAX>
	{
		DEFAULT_MATERIAL_DATA_MAX = 40,
		MIAN_MASK_MATERIAL_MAX = 10,
		MATERIAL_SETTING_DATA_MAX = 64,
		MODEL_ID_MAX = 24,
	};
private:
	long iDataCount; // 0x0
	CharaActionData::Setting::Type::Material defaultMaterialData[40]; // 0x4
	long iMianMaskCount; // 0x1E4
	long iMianMaskIndex[10]; // 0x1E8
	long iMianMaskType; // 0x210
	MaterialShowControl::MaterialIndexList ListData[64]; // 0x214
	OGLModel * pModelList[24]; // 0x418
public:
	MaterialShowControl();
	~MaterialShowControl();
	void Clear();
	long GetDefaultDataCount();
	long GetMianMaskCount();
	long GetMianMaskType();
	long GetDefaultMaterialDataIndex(const CharaActionData::Setting::Type::Material &);
	void SetDefaultMaterialData(const CharaActionData::Setting::Type::Material &);
	const CharaActionData::Setting::Type::Material & GetMaterialData(long);
	MaterialShowControl::DefaultMaterialState GetDefaultMaterialState(long, bool);
	void SetDefaultMaterial(OGLModel *, long);
	void SetDefaultMaterialAll(long);
	void CreateBaseModelShadow();
	void ChangeMaterialVisible(bool, OGLModel *, long, long);
	void SetMianMaskChange(OGLModel *, long, const CharaActionData::Exclusive::Type::Mian &);
	void CreateMaterialIndex(long, OGLModel *, const CharaMaterialSetting *);
	const MaterialShowControl::MaterialIndexList * GetMaterialIndexList(long);
	void SetMaterialVisible(const CharaActionData::Setting::Type::Material &, long);
private:
	void CheckMaterialGroupData(const CharaActionData::Setting::Type::Material &, long);
};
struct MaterialShowControl::MaterialIndexList
{
	long iModelID; // 0x0
	long iIndex; // 0x4
};
struct MaterialShowControl::DefaultMaterialState
{
	long iModelID; // 0x0
	long iMaterialID; // 0x4
	bool bShow; // 0x8
};
MaterialShowControl::MaterialShowControl(); // 0x1400B9090