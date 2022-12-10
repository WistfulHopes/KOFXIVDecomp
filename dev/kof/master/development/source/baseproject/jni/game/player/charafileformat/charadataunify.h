#pragma once

class IBinaryDataLoadListener
{
public:
	IBinaryDataLoadListener(const IBinaryDataLoadListener &);
	IBinaryDataLoadListener();
	~IBinaryDataLoadListener();
	void ReceiveBinaryLoad(const char *, unsigned char * *, unsigned long &);
	IBinaryDataLoadListener & operator=(const IBinaryDataLoadListener &);
};
class CharaDataUnify
{
	enum DATA_TYPE
	{
		CHARA = 0,
		COMMON = 1,
		EFFECT = 2,
	};
	enum READ_ERROR_ID
	{
		NONE = 0,
		SUCCESS = 1,
		PROJECT = 2,
		CHARA_ID = 3,
		ACTION = 4,
		EFFECT_ACT = 5,
		BASE_STATUS = 6,
		HIT_RECT = 7,
		ATTACK = 8,
		DAMAGE = 9,
		COMMAND = 10,
		SOUND_GROUP = 11,
		CPU_SEQ = 12,
		MATERIAL = 13,
	};
private:
	CharaDataUnify(const CharaDataUnify &);
public:
	CharaDataUnify();
	~CharaDataUnify();
private:
	CharaDataUnify & operator=(const CharaDataUnify &);
public:
	long iCharaID; // 0x0
	long iProjDataIndex; // 0x4
	CharaDataUnify::DATA_TYPE dataType; // 0x8
	long iReadErrorID; // 0xC
	const CharaProjectData * pProjData; // 0x10
	CharaActionData * pActData; // 0x18
	CharaActionData * pEffectAct; // 0x20
	CharaBaseStatus * pBaseStatus; // 0x28
	CharaHitRect * pHitRectData; // 0x30
	CharaAttackData * pAtkData; // 0x38
	CharaDamageSetting * pDmgSetting; // 0x40
	CommandData * pCmdData; // 0x48
	SoundGroupData * pSoundGroup; // 0x50
	CpuSequenceData * pCpuSeqData; // 0x58
	CharaMaterialSetting * pMaterialSetting; // 0x60
	void ReleaseData();
	long LoadData(const CharaProjectData *, long, CharaDataUnify::DATA_TYPE, IBinaryDataLoadListener &);
	long LoadData(const CharaProjectData *, long, CharaDataUnify::DATA_TYPE);
	long ReloadData();
};
bool CharaDataUnify::_binaryDataLoad<CharaActionData>(CharaActionData * & pDat, CharaProjectData::NAME_INDEX nameIndex, IBinaryDataLoadListener & listener); // 0x1401807A0
bool CharaDataUnify::_binaryDataLoad<CharaAttackData>(CharaAttackData * & pDat, CharaProjectData::NAME_INDEX nameIndex, IBinaryDataLoadListener & listener); // 0x1401812A0
bool CharaDataUnify::_binaryDataLoad<CharaBaseStatus>(CharaBaseStatus * & pDat, CharaProjectData::NAME_INDEX nameIndex, IBinaryDataLoadListener & listener); // 0x140180C00
bool CharaDataUnify::_binaryDataLoad<CharaDamageSetting>(CharaDamageSetting * & pDat, CharaProjectData::NAME_INDEX nameIndex, IBinaryDataLoadListener & listener); // 0x1401814D0
bool CharaDataUnify::_binaryDataLoad<CharaHitRect>(CharaHitRect * & pDat, CharaProjectData::NAME_INDEX nameIndex, IBinaryDataLoadListener & listener); // 0x140181070
bool CharaDataUnify::_binaryDataLoad<CharaMaterialSetting>(CharaMaterialSetting * & pDat, CharaProjectData::NAME_INDEX nameIndex, IBinaryDataLoadListener & listener); // 0x140180E40
bool CharaDataUnify::_binaryDataLoad<CommandData>(CommandData * & pDat, CharaProjectData::NAME_INDEX nameIndex, IBinaryDataLoadListener & listener); // 0x140181700
bool CharaDataUnify::_binaryDataLoad<CpuSequenceData>(CpuSequenceData * & pDat, CharaProjectData::NAME_INDEX nameIndex, IBinaryDataLoadListener & listener); // 0x140181B70
bool CharaDataUnify::_binaryDataLoad<SoundGroupData>(SoundGroupData * & pDat, CharaProjectData::NAME_INDEX nameIndex, IBinaryDataLoadListener & listener); // 0x140181940
class std::unique_ptr<unsigned char [0],std::default_delete<unsigned char [0]> > :
	std::_Unique_ptr_base<unsigned char,std::default_delete<unsigned char [0]> >
{
	class _Myt;
	class _Mybase;
	typedef unsigned char *pointer;
	typedef unsigned char element_type;
	struct deleter_type;
public:
	unique_ptr<unsigned char [0],std::default_delete<unsigned char [0]> >(const std::unique_ptr<unsigned char [0],std::default_delete<unsigned char [0]> > &);
	unique_ptr<unsigned char [0],std::default_delete<unsigned char [0]> >(void *);
	unique_ptr<unsigned char [0],std::default_delete<unsigned char [0]> >(std::unique_ptr<unsigned char [0],std::default_delete<unsigned char [0]> > &);
	unique_ptr<unsigned char [0],std::default_delete<unsigned char [0]> >();
	std::unique_ptr<unsigned char [0],std::default_delete<unsigned char [0]> > & operator=(const std::unique_ptr<unsigned char [0],std::default_delete<unsigned char [0]> > &);
	std::unique_ptr<unsigned char [0],std::default_delete<unsigned char [0]> > & operator=(void *);
	std::unique_ptr<unsigned char [0],std::default_delete<unsigned char [0]> > & operator=(std::unique_ptr<unsigned char [0],std::default_delete<unsigned char [0]> > &);
	void reset(void *);
	void swap(std::unique_ptr<unsigned char [0],std::default_delete<unsigned char [0]> > &);
	~unique_ptr<unsigned char [0],std::default_delete<unsigned char [0]> >();
	unsigned char & operator[](unsigned long long);
	unsigned char * get();
	bool operator bool();
	unsigned char * release();
private:
	void _Delete();
};
bool CharaDataUnify::_binarySoundActionDataLoad<CharaActionData>(CharaActionData * & pDat, IBinaryDataLoadListener & listener); // 0x1401809D0