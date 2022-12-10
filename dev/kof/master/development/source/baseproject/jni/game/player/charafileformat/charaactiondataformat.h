#pragma once

class CharaActionData :
	CharaFileBase
{
	struct BaseAnime;
	struct FaceAnime;
	struct Collision;
	struct Attack;
	struct Cancel;
	struct Branch;
	struct Move;
	struct Offset;
	struct Speed;
	struct ActionFlag;
	struct Exclusive;
	struct Effect;
	struct Sound;
	struct Camera;
	struct Etc;
	struct Position;
	struct Blackout;
	struct ThrowAttach;
	struct Shot;
	struct EffectAnime;
	struct EffectMove;
	struct EffectScale;
	struct EffectAngle;
	struct Weapon;
	struct Setting;
public:
	static const char FILE_IDENTIFIER[4]; // 0xFFFFFFFFFFFFFFFF
	static const char FILE_IDENTIFIER_EFF[4]; // 0xFFFFFFFFFFFFFFFF
	static const char * READ_ERROR_ID_NAME[0]; // 0xFFFFFFFFFFFFFFFF
	enum READ_ERROR_ID
	{
		NONE = 0,
		SUCCESS = 1,
		OPEN = 2,
		FILE_HEADER = 3,
		FILE_ID = 4,
		DATA_HEADER = 5,
		NO_ACTION = 6,
		NO_HEAP = 7,
		ACTION_INFO = 8,
		KEY_COUNT = 9,
		LINE_ID = 10,
		FRAME_DATA = 11,
		ACTION_NAMES = 12,
		KEY_NAMES = 13,
		ERROR_MAX = 14,
	};
	struct LINE_ID;
	struct CATEGORY_ID;
	struct SUB_CATEGORY_ID;
	struct MOTION_FILE_ID;
	struct BASE_ANIME_OPTION_SETTING;
	struct ATTACK_FLAG;
	struct COLLISION_ATTR;
	struct COLLISION_FLAG;
	struct CANCEL_SKILL;
	struct CANCEL_TERM;
	struct BRANCH_TERM;
	struct SPEED_SET_FLAG;
	struct MOVE_OPTION_FLAG;
	struct SPEED_OPTION_FLAG;
	struct ACT_FLAG1;
	struct ACT_FLAG2;
	struct EXCLUSIVE_LINE_TYPE;
	struct EXCLUSIVE_NAKORURU;
	struct EXCLUSIVE_MAMAHAHA;
	struct EXCLUSIVE_MIAN;
	struct EXCLUSIVE_GENSAI;
	struct EXCLUSIVE_TUN;
	struct EXCLUSIVE_ZARINA;
	struct EXCLUSIVE_MUIMUI;
	struct EXCLUSIVE_HEIDERN;
	struct SOUND_LINE_TYPE;
	struct SOUND_OPTION_FLAG;
	struct TURN_SETTING;
	struct BRANCH_FLAG_SETTING;
	struct POSITION_BASE;
	struct CAMERA_TYPE;
	struct BLACKOUT_ATTR;
	struct BLACKOUT_TYPE;
	struct THROW_ATTACH_BONE;
	struct THROW_ATTACH_OPTION;
	struct SHOT_CONTROL_TYPE;
	struct SHOT_FIRE_POSITION;
	struct SHOT_FIRE_OPTION;
	struct SHOT_CONTROL_ID;
	struct SHOT_CONTROL_FUNCTION;
	struct EFFECT_CONTROL_TYPE;
	struct EFFECT_SET_POSITION;
	struct EFFECT_FILE_ID;
	struct EFFECT_SET_TERM;
	struct EFFECT_SET_OPTION;
	struct EFFECT_CONTROL_TARGET;
	struct EFFECT_CONTROL_FUNCTION;
	struct EFFECT_ANIME_OPTION_SETTING;
	struct WEAPON_SHOW_SETTING;
	struct WEAPON_SETTING_FLAG;
	struct WEAPON_ATTACH_BONE;
	struct WEAPON_ATTACH_CHILD_BONE;
	struct WEAPON_OPTION_SETTING;
	struct SETTING_CONTROL_TYPE;
	struct SETTING_CHARA_COLOR_TYPE;
	struct SETTING_CHARA_COLOR_OPTION;
	struct SETTING_EYE_CONTROL_TYPE;
	struct SETTING_HEAD_CONTROL_TYPE;
	struct SETTING_MATERIAL_SHOW_TYPE;
	struct SETTING_MATERIAL_OPTION_FLAG;
	struct SETTING_MATERIAL_GROUP;
	struct SETTING_TALK_WINDOW_SHOW;
	struct SETTING_TALK_TEXT_SHOW;
	struct SETTING_SECONDARY_OPTION;
	struct SETTING_SP_EFFECT_BLUR;
	struct SETTING_SP_EFFECT_BLUR_FLAG;
	struct SETTING_SP_EFFECT_SHADOW_PASS;
	struct SETTING_SP_EFFECT_CAMERA_LIGHT;
	struct SETTING_SP_EFFECT_RIM_LIGHT;
	struct ACT_OPTION;
	enum FILE_VERSION
	{
		VERSION_13 = 13,
		VERSION_18 = 18,
	};
	struct DataHeader;
	struct ActionDataInfo;
	struct ActionLineFrame;
	struct ActionLine;
	struct ActionData;
	struct TranslateionTextKey;
	CharaActionData::DataHeader dataHeader; // 0x18
	CharaActionData::ActionData * pActData; // 0x20
	CharaActionData::DataHeader soundDataHeader; // 0x28
	CharaActionData::ActionData * pSoundAct; // 0x30
	char * * pActNames; // 0x38
	CharaActionData::TranslateionTextKey transKeyData; // 0x40
	static const char * ActionCategoryNames[8]; // 0xFFFFFFFFFFFFFFFF
	static const char * ActionSubCategoryNames[9]; // 0xFFFFFFFFFFFFFFFF
	CharaActionData();
	virtual ~CharaActionData();
	virtual bool CheckFileID();
	virtual void InitData();
	virtual long ReadFile(const char *);
	virtual long ReadBuffer(unsigned char *, unsigned long);
	virtual bool IsReadSuccess();
	const char * GetTranslateTextKey(long);
	std::string GetTranslateTextKeyString(long);
	void InitSoundActionData();
	long ReadSoundActionFile(const char *);
	long ReadSoundActionBuffer(unsigned char *, unsigned long);
};
struct CharaActionData::BaseAnime
{
	long iMotionFileID; // 0x0
	long iMotionID; // 0x4
	float fMotionFrame; // 0x8
	float fBlend; // 0xC
	float fTransparent; // 0x10
};
struct CharaActionData::FaceAnime
{
	long iMotionFileID; // 0x0
	long iMotionID; // 0x4
	float fMotionFrame; // 0x8
	float fBlend; // 0xC
};
struct CharaActionData::Collision
{
	long iRectID; // 0x0
	long iRectAttr; // 0x4
	long iFlag; // 0x8
	long iBranchKey; // 0xC
	long iBindIndex; // 0x10
	float fPushRate; // 0x14
};
struct CharaActionData::Attack
{
	long iDataID; // 0x0
	long iGroupID; // 0x4
	Collision::HitRect rect; // 0x8
	long iFlag; // 0x18
};
struct CharaActionData::Cancel
{
	long iFlg1; // 0x0
	long iFlg2; // 0x4
	long iFlg3; // 0x8
	long iTerms; // 0xC
	long iFlg4; // 0x10
	long iPrecedeFrame; // 0x14
};
struct CharaActionData::Branch
{
	long iType; // 0x0
	float fParam; // 0x4
	long iActionID; // 0x8
	long iActionFrame; // 0xC
	long iType2; // 0x10
	float fParam2; // 0x14
};
struct CharaActionData::Move
{
	float x; // 0x0
	float y; // 0x4
	float fColX; // 0x8
	float fColY; // 0xC
	long iOptionFlag; // 0x10
};
struct CharaActionData::Offset
{
	float x; // 0x0
	float y; // 0x4
	float z; // 0x8
};
struct CharaActionData::Speed
{
	long iSetFlag; // 0x0
	float fMoveX; // 0x4
	float fMoveY; // 0x8
	float fAddX; // 0xC
	float fAddY; // 0x10
	long iOptionFlag; // 0x14
};
struct CharaActionData::ActionFlag
{
	long iFlag; // 0x0
	long iParam1; // 0x4
};
struct CharaActionData::Exclusive
{
	long iType; // 0x0
	union Type;
	CharaActionData::Exclusive::Type type; // 0x4
};
union CharaActionData::Exclusive::Type
{
	struct Nakoruru;
	struct
	{
		CharaActionData::Exclusive::Type::Nakoruru nakoruru; // 0x0
		struct Mamahaha;
	};
	struct
	{
		CharaActionData::Exclusive::Type::Mamahaha mamahaha; // 0x0
		struct Mian;
	};
	struct
	{
		CharaActionData::Exclusive::Type::Mian mian; // 0x0
		struct Gensai;
	};
	struct
	{
		CharaActionData::Exclusive::Type::Gensai gensai; // 0x0
		struct Tun;
	};
	struct
	{
		CharaActionData::Exclusive::Type::Tun tun; // 0x0
		struct Zarina;
	};
	struct
	{
		CharaActionData::Exclusive::Type::Zarina zarina; // 0x0
		struct Muimui;
	};
	struct
	{
		CharaActionData::Exclusive::Type::Muimui muimui; // 0x0
		struct Shunei;
	};
	struct
	{
		CharaActionData::Exclusive::Type::Shunei shunei; // 0x0
		struct Heidern;
	};
public:
	CharaActionData::Exclusive::Type::Heidern heidern; // 0x0
};
struct CharaActionData::Exclusive::Type::Nakoruru
{
	short iMamahahaOption; // 0x0
	short iMamahahaAction; // 0x2
};
struct CharaActionData::Exclusive::Type::Mamahaha
{
	short iZMoveFrame; // 0x0
	short iOptionFlag; // 0x2
	float fHomingParam; // 0x4
};
struct CharaActionData::Exclusive::Type::Mian
{
	short iOptionFlag; // 0x0
	short iMaskSetting; // 0x2
};
struct CharaActionData::Exclusive::Type::Gensai
{
	short iOptionFlag; // 0x0
	short iSakeCountAdd; // 0x2
};
struct CharaActionData::Exclusive::Type::Tun
{
	short iOptionFlag; // 0x0
	short iAction; // 0x2
};
struct CharaActionData::Exclusive::Type::Zarina
{
	short iOptionFlag; // 0x0
	short iAction; // 0x2
};
struct CharaActionData::Exclusive::Type::Muimui
{
	short iOptionFlag; // 0x0
	short iAction; // 0x2
};
struct CharaActionData::Exclusive::Type::Shunei
{
	float fStart; // 0x0
	float fEnd; // 0x4
	short iOptionFlag; // 0x8
	short iFadeFrame; // 0xA
};
struct CharaActionData::Exclusive::Type::Heidern
{
	long iExtraDamage; // 0x0
	long iOptionFlag; // 0x4
};
struct CharaActionData::Effect
{
	long iType; // 0x0
	union Type;
	CharaActionData::Effect::Type type; // 0x4
};
union CharaActionData::Effect::Type
{
	struct Set;
	struct
	{
		CharaActionData::Effect::Type::Set set; // 0x0
		struct Control;
	};
public:
	CharaActionData::Effect::Type::Control control; // 0x0
};
struct CharaActionData::Effect::Type::Set
{
	float fPosX; // 0x0
	float fPosY; // 0x4
	float fPosZ; // 0x8
	short iPosBase; // 0xC
	short iActFileID; // 0xE
	short iTermFlag; // 0x10
	short iActNo; // 0x12
	long iOptionFlag; // 0x14
};
struct CharaActionData::Effect::Type::Control
{
	long reserve1; // 0x0
	long reserve2; // 0x4
	long reserve3; // 0x8
	short iFuncID; // 0xC
	short iTarget; // 0xE
	short iActNo; // 0x10
	short iActFileID; // 0x12
	long reserve4; // 0x14
};
struct CharaActionData::Sound
{
	union Type;
	CharaActionData::Sound::Type type; // 0x0
	long iType; // 0x18
};
union CharaActionData::Sound::Type
{
	struct Play;
	struct
	{
		CharaActionData::Sound::Type::Play play; // 0x0
		struct Stop;
	};
public:
	CharaActionData::Sound::Type::Stop stop; // 0x0
};
struct CharaActionData::Sound::Type::Play
{
	float fVolume; // 0x0
	long iCommonID; // 0x4
	short iUniqueID; // 0x8
	short iGroupID; // 0xA
	long iPriority; // 0xC
	short iOptionFlag; // 0x10
	short iTagID; // 0x12
	float fOptionParam; // 0x14
};
struct CharaActionData::Sound::Type::Stop
{
	float fFadeSec; // 0x0
	short iReserve1; // 0x4
	short iTagID; // 0x6
	long iReserve2; // 0x8
	long iReserve3; // 0xC
	long iReserve4; // 0x10
	long iReserve5; // 0x14
};
struct CharaActionData::Camera
{
	short iOffsetBase; // 0x0
	short iType; // 0x2
	long iIndex; // 0x4
	float fFrame; // 0x8
	float x; // 0xC
	float y; // 0x10
	float z; // 0x14
	long iOptionFlag; // 0x18
};
struct CharaActionData::Etc
{
	long iTurn; // 0x0
	long iAddPower; // 0x4
	long iAddClimax; // 0x8
	unsigned char branchFlag4; // 0xC
	unsigned char branchFlag3; // 0xD
	unsigned char branchFlag2; // 0xE
	unsigned char branchFlag1; // 0xF
};
struct CharaActionData::Position
{
	long iSettingX; // 0x0
	long iSettingY; // 0x4
	float x; // 0x8
	float y; // 0xC
	long iSettingZ; // 0x10
	float z; // 0x14
};
struct CharaActionData::Blackout
{
	long iAttr; // 0x0
	long iType; // 0x4
	long iFrame; // 0x8
	long iFadeFrame; // 0xC
	struct <unnamed-type-rgba>;
	CharaActionData::Blackout::<unnamed-type-rgba> rgba; // 0x10
};
struct CharaActionData::Blackout::<unnamed-type-rgba>
{
	unsigned char a; // 0x0
	unsigned char b; // 0x1
	unsigned char g; // 0x2
	unsigned char r; // 0x3
};
struct CharaActionData::ThrowAttach
{
	long iAtkBoneID; // 0x0
	long iPsvBoneID; // 0x4
	long iOptionFlag; // 0x8
};
struct CharaActionData::Shot
{
	long iType; // 0x0
	union Type;
	CharaActionData::Shot::Type type; // 0x4
};
union CharaActionData::Shot::Type
{
	struct Fire;
	struct
	{
		CharaActionData::Shot::Type::Fire fire; // 0x0
		struct Control;
	};
	struct
	{
		CharaActionData::Shot::Type::Control control; // 0x0
		struct Event;
	};
public:
	CharaActionData::Shot::Type::Event event; // 0x0
};
struct CharaActionData::Shot::Type::Fire
{
	long iPosBase; // 0x0
	float fPosX; // 0x4
	float fPosY; // 0x8
	short iShotType; // 0xC
	short iShotID; // 0xE
	short iHitCount; // 0x10
	short iActNo; // 0x12
	long iOptionFlag; // 0x14
};
struct CharaActionData::Shot::Type::Control
{
	long reserve1; // 0x0
	long reserve2; // 0x4
	long reserve3; // 0x8
	unsigned char reserve5; // 0xC
	unsigned char reserve4; // 0xD
	unsigned char iFuncID; // 0xE
	unsigned char iShotID; // 0xF
	long reserve6; // 0x10
	long iOptionFlag; // 0x14
};
struct CharaActionData::Shot::Type::Event
{
	long iRestHitCountActNo; // 0x0
	long iRestHitCount; // 0x4
	long iFastDieActNo; // 0x8
	short iHitActNo; // 0xC
	short iEraseActNo; // 0xE
	short iDieActNo; // 0x10
	short iGuardActNo; // 0x12
	short iWallDieActNo; // 0x14
	short iGroundDieActNo; // 0x16
};
struct CharaActionData::EffectAnime
{
	long iListFileID; // 0x0
	long iEffectID; // 0x4
	float fFrame; // 0x8
	long iOptionFlag; // 0xC
};
struct CharaActionData::EffectMove
{
	float x; // 0x0
	float y; // 0x4
	float z; // 0x8
};
struct CharaActionData::EffectScale
{
	float x; // 0x0
	float y; // 0x4
	float z; // 0x8
};
struct CharaActionData::EffectAngle
{
	float x; // 0x0
	float y; // 0x4
	float z; // 0x8
};
struct CharaActionData::Weapon
{
	char iSettingFlag; // 0x0
	char iShow; // 0x1
	short iModelID; // 0x2
	short iMotionID; // 0x4
	char iAttach; // 0x6
	char iChildAttach; // 0x7
	float fStartFrame; // 0x8
	float fPlayRate; // 0xC
	float fLoopFrame; // 0x10
	float fReserve; // 0x14
	long iOptionFlag; // 0x18
};
struct CharaActionData::Setting
{
	long iType; // 0x0
	union Type;
	CharaActionData::Setting::Type type; // 0x4
};
union CharaActionData::Setting::Type
{
	struct CharaColor;
	struct
	{
		CharaActionData::Setting::Type::CharaColor charaColor; // 0x0
		struct EyeControl;
	};
	struct
	{
		CharaActionData::Setting::Type::EyeControl eye; // 0x0
		struct HeadControl;
	};
	struct
	{
		CharaActionData::Setting::Type::HeadControl head; // 0x0
		struct Material;
	};
	struct
	{
		CharaActionData::Setting::Type::Material material; // 0x0
		struct Talk;
	};
	struct
	{
		CharaActionData::Setting::Type::Talk talk; // 0x0
		struct Secondary;
	};
	struct
	{
		CharaActionData::Setting::Type::Secondary secondary; // 0x0
		struct SpEffect;
	};
	struct
	{
		CharaActionData::Setting::Type::SpEffect spEffect; // 0x0
		struct CharaOffset;
	};
public:
	CharaActionData::Setting::Type::CharaOffset charaOffset; // 0x0
};
struct CharaActionData::Setting::Type::CharaColor
{
	long iColorType; // 0x0
	long iFadeFrame; // 0x4
	struct <unnamed-type-rgba>;
	CharaActionData::Setting::Type::CharaColor::<unnamed-type-rgba> rgba; // 0x8
	long iOptionFlag; // 0xC
};
struct CharaActionData::Setting::Type::CharaColor::<unnamed-type-rgba>
{
	unsigned char a; // 0x0
	unsigned char b; // 0x1
	unsigned char g; // 0x2
	unsigned char r; // 0x3
};
struct CharaActionData::Setting::Type::EyeControl
{
	long iSettingType; // 0x0
	float fAngleUp; // 0x4
	float fAngleLow; // 0x8
	float fAngleLeft; // 0xC
	float fAngleRight; // 0x10
};
struct CharaActionData::Setting::Type::HeadControl
{
	long iSettingType; // 0x0
	float fAngleUp; // 0x4
	float fAngleLow; // 0x8
};
struct CharaActionData::Setting::Type::Material
{
	unsigned char uiShow; // 0x0
	unsigned char uiMaterialID_L; // 0x1
	unsigned char uiMaterialID_R; // 0x2
	unsigned char uiModelID; // 0x3
	long iOptionFlag; // 0x4
	long iGroupID; // 0x8
};
struct CharaActionData::Setting::Type::Talk
{
	short iTextShow; // 0x0
	short iWindowShow; // 0x2
	long iTextID; // 0x4
	short iOptionFlag; // 0x8
	short iNextAction; // 0xA
	long iTextID2; // 0xC
};
struct CharaActionData::Setting::Type::Secondary
{
	long iTargetBone; // 0x0
	float fForceVecX; // 0x4
	float fForceVecY; // 0x8
	float fForceVecZ; // 0xC
	unsigned long uiOptionFlag; // 0x10
	float fBlend; // 0x14
};
struct CharaActionData::Setting::Type::SpEffect
{
	short iBlurSetting; // 0x0
	short iBlurFlag; // 0x2
	short iShadowPass; // 0x4
	short iCameraLight; // 0x6
	long iRimLight; // 0x8
};
struct CharaActionData::Setting::Type::CharaOffset
{
	long iCharaID; // 0x0
	long iFrame; // 0x4
	float fOffX; // 0x8
	float fOffY; // 0xC
	float fOffZ; // 0x10
	long iRimLight; // 0x14
};
enum CharaActionData::READ_ERROR_ID
{
	NONE = 0,
	SUCCESS = 1,
	OPEN = 2,
	FILE_HEADER = 3,
	FILE_ID = 4,
	DATA_HEADER = 5,
	NO_ACTION = 6,
	NO_HEAP = 7,
	ACTION_INFO = 8,
	KEY_COUNT = 9,
	LINE_ID = 10,
	FRAME_DATA = 11,
	ACTION_NAMES = 12,
	KEY_NAMES = 13,
	ERROR_MAX = 14,
};
struct CharaActionData::CATEGORY_ID
{
	enum ID
	{
		STAND = 0,
		CROUCH = 1,
		AIR = 2,
		DOWN_U = 3,
		DOWN_D = 4,
		THROW_XXX = 5,
		SHOT = 6,
		EFFECT = 7,
		CATEGORY_ID_MAX = 8,
	};
};
struct CharaActionData::SUB_CATEGORY_ID
{
	enum ID
	{
		NONE = 0,
		ATTACK = 1,
		DAMAGE = 2,
		GUARD = 3,
		BOUND = 4,
		DOWN = 5,
		KUZURE = 6,
		THROW_ATK = 7,
		THROW_DMG = 8,
		SUB_CATEGORY_ID_MAX = 9,
	};
};
struct CharaActionData::LINE_ID
{
	enum ID
	{
		BASE_ANIME = 0,
		FACE_ANIME_UPPER = 1,
		FACE_ANIME_LOWER = 2,
		COLLISION = 3,
		HIT = 4,
		ATTACK = 5,
		CANCEL = 6,
		BRANCH = 7,
		MOVE = 8,
		OFFSET = 9,
		SPEED = 10,
		ACTION_FLG1 = 11,
		ACTION_FLG2 = 12,
		EXCLUSIVE = 13,
		EFFECT = 14,
		SOUND = 15,
		CAMERA = 16,
		ETC = 17,
		POSITION = 18,
		BLACKOUT = 19,
		THROW_ATTACH = 20,
		SHOT = 21,
		EFFECT_ANIME = 22,
		EFFECT_MOVE = 23,
		EFFECT_SCALE = 24,
		EFFECT_ANGLE = 25,
		WEAPON = 26,
		SETTING = 27,
		SCALE = 28,
		LINE_ID_MAX = 29,
	};
};
struct CharaActionData::MOTION_FILE_ID
{
	enum ID
	{
		UNIQUE = 0,
		COMMON = 1,
	};
};
struct CharaActionData::BASE_ANIME_OPTION_SETTING
{
	enum FLAG
	{
		RESEVE_1 = 1,
		RESEVE_2 = 2,
		RESEVE_3 = 4,
		RESEVE_4 = 8,
	};
};
struct CharaActionData::ATTACK_FLAG
{
	enum ID
	{
		ATK_OK = 1,
		ATK_HIT = 2,
		ATK_GUARD = 4,
		ATK_NO_HIT = 8,
		BRANCH_FLAG1 = 16,
		BRANCH_FLAG2 = 32,
		BRANCH_FLAG3 = 64,
		BRANCH_FLAG4 = 128,
		THROW_INPUT = 256,
	};
};
struct CharaActionData::COLLISION_ATTR
{
	enum ID
	{
		PUSH = 0,
		HIT = 1,
		THROW = 2,
		GUARD = 3,
		DOWN = 4,
		SHOT = 5,
		REFLECT = 6,
		GUARD_POINT = 7,
		ATEMI = 8,
		COLLISION_ATTR_MAX = 9,
	};
};
struct CharaActionData::COLLISION_FLAG
{
	enum FLAG
	{
		UPPER_MUTEKI = 1,
		MIDDLE_MUTEKI = 2,
		LOWER_MUTEKI = 4,
		GUARD_BREAK_MUTEKI = 8,
		JUMP_ATK_MUTEKI = 16,
		LAND_ATK_MUTEKI = 32,
		SHOT_MUTEKI = 64,
		N_THROW_MUTEKI = 128,
		SP_THROW_MUTEKI = 256,
		SHOT_LEVEL1 = 512,
		SHOT_LEVEL2 = 1024,
		SHOT_LEVEL3 = 1536,
		SHOT_LEVEL4 = 2048,
		SHOT_LEVEL5 = 2560,
		SHOT_LEVEL6 = 3072,
		SHOT_LEVEL7 = 3584,
		SHOT_LEVEL_MASK = 3584,
		NO_SHOT_REFLECT = 4096,
		COUNTER = 8192,
		GEESE_UPPER_ATEMI = 16384,
		GEESE_MIDDLE_ATEMI = 32768,
		IGNORE_MOTION_SCALE = 65536,
		ENABLE_PUSH_RATE = 131072,
		SHOT_ERASE_EFFECT_INV = 262144,
	};
};
struct CharaActionData::CANCEL_SKILL
{
	enum ID
	{
		MOVE = 0,
		CROUCH = 0,
		DASH = 1,
		BSTEP = 2,
		JUMP = 3,
		HI_JUMP = 4,
		JUMP_RAPID = 5,
		STAND_LP = 6,
		STAND_LK = 7,
		STAND_HP = 8,
		STAND_HK = 9,
		CROUCH_LP = 10,
		CROUCH_LK = 11,
		CROUCH_HP = 12,
		CROUCH_HK = 13,
		BLOW_ATK = 14,
		JUMP_LP = 15,
		JUMP_LK = 16,
		JUMP_HP = 17,
		JUMP_HK = 18,
		JUMP_BLOW = 19,
		CANCEL_CLIMAX = 20,
		EX_ATTACK_ALL = 21,
		SPECIAL_ALL = 22,
		EX_SPECIAL_ALL = 23,
		SUPER_SP_ALL = 24,
		MAX_SUPER_SP_ALL = 25,
		CLIMAX_SUPER_SP_ALL = 26,
		RESERVE_27 = 27,
		RESERVE_28 = 28,
		RESERVE_29 = 29,
		FRONT_EVADE = 30,
		BACK_EVADE = 31,
		GC_FRONT_EVADE = 32,
		GC_BACK_EVADE = 33,
		GC_BLOW_ATK = 34,
		CLIMAX_SET = 35,
		DOWN_EVADE = 36,
		CHARA_COMMAND_START = 37,
		CHARA_COMMAND_END = 127,
		CHARA_COMMAND_INVALID = 128,
	};
};
struct CharaActionData::CANCEL_TERM
{
	enum ID
	{
		NONE = 0,
		ATK_OK = 1,
		ATK_HIT = 2,
		ATK_GUARD = 3,
		BRANCH_FLAG1 = 4,
		BRANCH_FLAG2 = 5,
		BRANCH_FLAG3 = 6,
		BRANCH_FLAG4 = 7,
		FROM_READY = 8,
		ATK_COUNTER = 9,
		ATK_OK_NOT_FLAG = 10,
		CANCEL_TERM_MAX = 11,
	};
};
struct CharaActionData::BRANCH_TERM
{
	enum ID
	{
		NONE = 0,
		ATK_OK = 1,
		ATK_HIT = 2,
		ATK_GUARD = 3,
		ATK_NO_HIT = 4,
		JUMP = 5,
		LAND = 6,
		STAGE_WALL = 7,
		BRANCH_FLAG1 = 8,
		BRANCH_FLAG2 = 9,
		BRANCH_FLAG3 = 10,
		BRANCH_FLAG4 = 11,
		DISTANCE = 12,
		SHOT_ATK_OK = 13,
		SHOT_HIT = 14,
		SHOT_GUARD = 15,
		SCREEN_WALL = 16,
		LOOP_COUNT = 17,
		SHOT_BRANCH_FLAG1 = 18,
		SHOT_BRANCH_FLAG2 = 19,
		SHOT_BRANCH_FLAG3 = 20,
		SHOT_BRANCH_FLAG4 = 21,
		SHOT_ALIVE = 22,
		SHOT_NOT_ALIVE = 23,
		ATK_COUNTER = 24,
		TARGET_JUMP = 25,
		TARGET_LAND = 26,
		TARGET_BRANCH_FLAG1 = 27,
		TARGET_BRANCH_FLAG2 = 28,
		TARGET_BRANCH_FLAG3 = 29,
		TARGET_BRANCH_FLAG4 = 30,
		RANDOM = 31,
		ACTION_COUNT_OVER = 32,
		ACTION_COUNT_UNDER = 33,
		TARGET_KO = 34,
		TARGET_STAGE_WALL = 35,
		PARENT_BRANCH_FLAG1 = 36,
		PARENT_BRANCH_FLAG2 = 37,
		PARENT_BRANCH_FLAG3 = 38,
		PARENT_BRANCH_FLAG4 = 39,
		COMMAND_COUNT_OVER = 40,
		COMMAND_COUNT_UNDER = 41,
	};
};
struct CharaActionData::SPEED_SET_FLAG
{
	enum FLAG
	{
		NONE = 0,
		SET = 1,
		ADD = 2,
		SET_SCR = 3,
		ADD_SCR = 4,
		HOMING = 5,
		MOVE_X_SHIFT = 0,
		MOVE_Y_SHIFT = 8,
		ADD_X_SHIFT = 16,
		ADD_Y_SHIFT = 24,
		FLAG_MASK = 255,
		MOVE_X_NONE = 0,
		MOVE_X_SET = 1,
		MOVE_X_ADD = 2,
		MOVE_X_SET_SCR = 3,
		MOVE_X_ADD_SCR = 4,
		MOVE_X_HOMING = 5,
		MOVE_Y_NONE = 0,
		MOVE_Y_SET = 256,
		MOVE_Y_ADD = 512,
		MOVE_Y_SET_SCR = 768,
		MOVE_Y_ADD_SCR = 1024,
		MOVE_Y_HOMING = 1280,
		ADD_X_NONE = 0,
		ADD_X_SET = 65536,
		ADD_X_ADD = 131072,
		ADD_X_SET_SCR = 196608,
		ADD_X_ADD_SCR = 262144,
		ADD_X_HOMING = 327680,
		ADD_Y_NONE = 0,
		ADD_Y_SET = 16777216,
		ADD_Y_ADD = 33554432,
		ADD_Y_SET_SCR = 50331648,
		ADD_Y_ADD_SCR = 67108864,
		ADD_Y_HOMING = 83886080,
	};
};
struct CharaActionData::MOVE_OPTION_FLAG
{
	enum FLAG
	{
		DAMAGE_SET_POS = 1,
		CANCEL_SET_POS = 2,
		MOTION_OFFSET = 4,
	};
};
struct CharaActionData::SPEED_OPTION_FLAG
{
	enum FLAG
	{
		X_REV_END_X = 1,
		X_REV_END_Y = 2,
		Y_REV_END_X = 4,
		Y_REV_END_Y = 8,
		Z_REV_END_Z = 128,
	};
};
struct CharaActionData::ACT_FLAG1
{
	enum FLAG
	{
		CROUCH = 1,
		JUMP = 2,
		GUARD_OK = 4,
		NUKE_OK = 8,
		SET_LAND = 16,
		RESET_Z = 32,
		MOTION_OFFSET = 64,
		WALL_BACK_OK = 128,
		NO_LAND_ACTION = 256,
		MOTION_MOVE = 512,
		COUNTER_OFF = 1024,
		X_MOV_STOP = 2048,
		Y_MOV_STOP = 4096,
		MOTION_MOVE_BASE_X = 8192,
		MOTION_MOVE_BASE_Y = 16384,
		IGNORE_MOTION_MOVE_X = 32768,
		IGNORE_MOTION_MOVE_Y = 65536,
	};
};
struct CharaActionData::ACT_FLAG2
{
	enum FLAG
	{
		HIT_BACK_END = 1,
		READY_STAT = 2,
		COMMAND_RESET = 4,
		INVALID_SCREEN_WALL = 8,
		INVALID_STAGE_WALL = 16,
		APART_PARENT = 32,
		CANCEL_LINK_ACTION = 64,
		CANCEL_LINK_DAMAGE = 128,
		INVIBISLE_DRAW = 256,
		COMMAND_COUNT_RESET = 512,
		ANGLE_REVERSE = 1024,
		REFLECT_WALL_HITBACK = 2048,
		CHANGE_ACTION_COUNTER = 4096,
		CHARA_LIGHT_REVERSE = 8192,
		CHARA_LIGHT_MOVE = 16384,
		SECONDARY_ON = 32768,
		Z_OFFSET_ATK = 65536,
		Z_OFFSET_PSV = 131072,
		DISABLE_WEAPON = 262144,
		RUSH_COMBO_COUNT = 524288,
		RESET_ATK_GROUP = 1048576,
		DISABLE_WALL_HITBACK = 2097152,
		REFLECT_LAND_HITBACK = 4194304,
		CANCEL_AT_BASE_POS = 8388608,
		CAMERA_MOVE_LIMIT_OFF = 16777216,
		EXTRA_MODEL_ON = 1073741824,
	};
};
struct CharaActionData::EXCLUSIVE_LINE_TYPE
{
	enum ID
	{
		NAKORURU = 0,
		MAMAHAHA = 1,
		MIAN = 2,
		GENSAI = 3,
		TUN = 4,
		ZARINA = 5,
		MUIMUI = 6,
		SHUNEI = 7,
		HEIDERN = 8,
	};
};
struct CharaActionData::EXCLUSIVE_NAKORURU
{
	struct MAMAHAHA_MOVE;
	struct OPTION_FLAG;
};
struct CharaActionData::EXCLUSIVE_NAKORURU::MAMAHAHA_MOVE
{
	enum ID
	{
		NONE = 0,
		READY = 1,
		AMUBE_YATORO_L = 2,
		AMUBE_YATORO_H = 3,
		AMUBE_YATORO_EX = 4,
		THROW_K = 5,
		WIN_1 = 6,
		SUPER_YATORO_L = 7,
		SUPER_YATORO_H = 8,
		MAX_YATORO = 9,
		RIDE = 10,
		GET_OFF = 11,
		RIDE_READY = 12,
		RIDE_TURN = 13,
		RIDE_F_MOVE = 14,
		RIDE_B_MOVE = 15,
		YATORO = 16,
		KAMUI = 17,
		CLIMAX_KAMUI = 18,
		CLIMAX_KAMUI_HIT = 19,
		WIN_RESULT_MAIN = 20,
	};
};
struct CharaActionData::EXCLUSIVE_NAKORURU::OPTION_FLAG
{
	enum FLAG
	{
		ACCEPT_READY_ONLY = 1,
		RESET_POSITION = 2,
		REVERSE_INIT_POSITION = 4,
		MOTION_BLEND_OFF = 8,
	};
};
struct CharaActionData::EXCLUSIVE_MAMAHAHA
{
	struct OPTION_FLAG;
};
struct CharaActionData::EXCLUSIVE_MAMAHAHA::OPTION_FLAG
{
	enum FLAG
	{
		MOVE_CHARA_Z_POS = 1,
		MOVE_INIT_Z_POS = 2,
		SET_HOMING_PARAM = 4,
		RESET_HOMING_PARAM = 8,
		REFER_PARENT_Z_OFFSET = 16,
		STOP_PARENT_BLACKOUT = 32,
		SYNC_PARENT_ACTION = 64,
		MOVE_STOP = 128,
		MOVE_START = 256,
	};
};
struct CharaActionData::EXCLUSIVE_MIAN
{
	struct MASK_SETTING;
	struct OPTION_FLAG;
};
struct CharaActionData::EXCLUSIVE_MIAN::MASK_SETTING
{
	enum ID
	{
		NONE = 0,
		NEXT = 1,
		PREV = 2,
		NORMAL_FACE = 3,
		MASK_1 = 4,
		MASK_2 = 5,
		MASK_3 = 6,
		MASK_4 = 7,
		MASK_5 = 8,
		MASK_6 = 9,
		MASK_7 = 10,
		MASK_8 = 11,
		MASK_9 = 12,
		MASK_10 = 13,
	};
};
struct CharaActionData::EXCLUSIVE_MIAN::OPTION_FLAG
{
	enum FLAG
	{
		RESERVE_1 = 1,
	};
};
struct CharaActionData::EXCLUSIVE_GENSAI
{
	struct OPTION_FLAG;
};
struct CharaActionData::EXCLUSIVE_GENSAI::OPTION_FLAG
{
	enum FLAG
	{
		DIRECT_VALUE = 1,
	};
};
struct CharaActionData::EXCLUSIVE_TUN
{
	struct BIG_TUN_MOVE;
	struct OPTION_FLAG;
};
struct CharaActionData::EXCLUSIVE_TUN::BIG_TUN_MOVE
{
	enum ID
	{
		NONE = 0,
		READY = 1,
		GEKIHOU = 2,
		GEKIHOU_EX = 3,
		DAI_GEKIHOU = 4,
		MAX_DAI_GEKIHOU = 5,
		SENPU_GOUKEN = 6,
		MAX_SENPU_GOUKEN = 7,
		CLIMAX_KOUREISIN_1 = 8,
		CLIMAX_KOUREISIN_2 = 9,
	};
};
struct CharaActionData::EXCLUSIVE_TUN::OPTION_FLAG
{
	enum FLAG
	{
		RESERVE_1 = 1,
	};
};
struct CharaActionData::EXCLUSIVE_ZARINA
{
	struct COCO_MOVE;
	struct OPTION_FLAG;
};
struct CharaActionData::EXCLUSIVE_ZARINA::COCO_MOVE
{
	enum ID
	{
		NONE = 0,
		READY = 1,
		WIN_2 = 2,
		WIN_RESULT_MAIN = 3,
		RIVAL_DEMO_1 = 4,
		RIVAL_DEMO_2 = 5,
		RIVAL_DEMO_3 = 6,
		RIVAL_DEMO_4 = 7,
		RIVAL_DEMO_5 = 8,
		RIVAL_DEMO_6 = 9,
		RIVAL_DEMO_7 = 10,
		RIVAL_DEMO_8 = 11,
		RIVAL_DEMO_9 = 12,
		RIVAL_DEMO_10 = 13,
	};
};
struct CharaActionData::EXCLUSIVE_ZARINA::OPTION_FLAG
{
	enum FLAG
	{
		RESERVE_1 = 1,
	};
};
struct CharaActionData::EXCLUSIVE_MUIMUI
{
	struct DRAGON_MOVE;
	struct OPTION_FLAG;
};
struct CharaActionData::EXCLUSIVE_MUIMUI::DRAGON_MOVE
{
	enum ID
	{
		NONE = 0,
		READY = 1,
		CLIMAX_START = 2,
		CLIMAX_HIT = 3,
	};
};
struct CharaActionData::EXCLUSIVE_MUIMUI::OPTION_FLAG
{
	enum FLAG
	{
		RESERVE_1 = 1,
	};
};
struct CharaActionData::EXCLUSIVE_HEIDERN
{
	struct OPTION_FLAG;
};
struct CharaActionData::EXCLUSIVE_HEIDERN::OPTION_FLAG
{
	enum FLAG
	{
		ADD_DAMAGE = 1,
	};
};
struct CharaActionData::SOUND_LINE_TYPE
{
	enum ID
	{
		PLAY = 0,
		STOP = 1,
	};
};
struct CharaActionData::SOUND_OPTION_FLAG
{
	enum FLAG
	{
		ACTION_STOP = 1,
		DAMAGE_STOP = 2,
		SP_CANCEL_STOP = 4,
		HI_COMBO_PLAY = 8,
		LOW_COMBO_PLAY = 16,
		ADVANCED_CANCEL = 32,
		NOT_ADVANCED_CANCEL = 64,
		FIRST_LOOP_PLAY = 128,
		KO_STOP = 256,
		LR_REVERSE = 512,
		PLAYER_STATUS_CHECK = 120,
	};
};
struct CharaActionData::TURN_SETTING
{
	enum ID
	{
		NONE = 0,
		TARGET_DIR = 1,
		TARGET_DIR_REV = 2,
		REVERSE = 3,
		SCR_RIGHT = 4,
		SCR_LEFT = 5,
		TARGET_TURN_REV = 6,
		TARGET_TURN_SAME = 7,
	};
};
struct CharaActionData::BRANCH_FLAG_SETTING
{
	enum ID
	{
		NONE = 0,
		ON = 1,
		OFF = 2,
		REVERSE = 3,
		PARENT_ON = 4,
		PARENT_OFF = 5,
		PARENT_REVERSE = 6,
	};
};
struct CharaActionData::POSITION_BASE
{
	enum ID
	{
		NONE = 0,
		TARGET = 1,
		TARGET_NO_DIR = 2,
		PARENT = 3,
		PARENT_NO_DIR = 4,
		CAMERA = 5,
		STAGE = 6,
		STAGE_WALL = 7,
		TARGET_MY_DIR = 8,
		STAGE_WALL_FIX = 9,
	};
};
struct CharaActionData::CAMERA_TYPE
{
	enum ID
	{
		RESET = 0,
		MOTION_CAM_SYNC = 1,
		MOTION_CAM_FRAME = 2,
		MOTION_CAM_END = 3,
		QUAKE_CAM = 4,
		MOVE_CAM = 5,
		MOVE_CAM_END = 6,
		MOVE_CAM_QUAD = 7,
		MOVE_CAM_END_QUAD = 8,
		BATTLE_CAM_FIX_Y = 9,
	};
};
struct CharaActionData::BLACKOUT_ATTR
{
	enum ID
	{
		RESET = 0,
		SINGLE = 1,
		NORMAL = 2,
		SUPER = 3,
		CLIMAX = 4,
	};
};
struct CharaActionData::BLACKOUT_TYPE
{
	enum ID
	{
		NONE = 0,
		STAGE_BLACK = 1,
		STAGE_WHITE = 2,
		SCREEN_BLACK = 3,
		SCREEN_WHITE = 4,
		STAGE_RGBA = 5,
		IORI_YATAGARASU = 6,
	};
};
struct CharaActionData::THROW_ATTACH_BONE
{
	enum ID
	{
		BASE_POS = 0,
		C_HIPS_ATTACH = 1,
		L_HAND_ATTACH = 2,
		R_HAND_ATTACH = 3,
		L_FOOT_ATTACH = 4,
		R_FOOT_ATTACH = 5,
		C_HEAD_ATTACH = 6,
	};
};
struct CharaActionData::THROW_ATTACH_OPTION
{
	enum FLAG
	{
		FIX_BASE_POS = 1,
		DIS_ATK_REV = 2,
		DIS_PSV_REV = 4,
	};
};
struct CharaActionData::SHOT_CONTROL_TYPE
{
	enum ID
	{
		FIRE = 0,
		CONTROL = 1,
		EVENT = 2,
	};
};
struct CharaActionData::SHOT_FIRE_POSITION
{
	enum ID
	{
		BASE_POS = 0,
		CENTER = 1,
		STAGE = 2,
		C_HIPS_ATTACH = 3,
		L_HAND_ATTACH = 4,
		R_HAND_ATTACH = 5,
		L_FOOT_ATTACH = 6,
		R_FOOT_ATTACH = 7,
		C_HEAD_ATTACH = 8,
		C_HEAD = 9,
		C_NECK = 10,
		C_CHEST = 11,
		C_HIPS = 12,
		L_ARM1 = 13,
		L_ARM2 = 14,
		L_HAND = 15,
		R_ARM1 = 16,
		R_ARM2 = 17,
		R_HAND = 18,
		L_LEG2 = 19,
		L_FOOT = 20,
		L_TOE = 21,
		R_LEG2 = 22,
		R_FOOT = 23,
		R_TOE = 24,
		L_WEAPON_ATTACH = 25,
		R_WEAPON_ATTACH = 26,
		MAX = 27,
	};
};
struct CharaActionData::SHOT_FIRE_OPTION
{
	enum FLAG
	{
		BIND_POS = 1,
		NOT_REV_BASE = 2,
		NOT_REV_X = 4,
		TARGET_BASE = 8,
		LINK_ACTION = 16,
		LINK_DAMAGE = 32,
		NOT_SCR_OUT_DIE = 64,
		GROUND_DIE = 128,
		WALL_DIE = 256,
		REVERSE_ANGLE = 512,
		LINK_HITSTOP = 1024,
		TRANS_HITSTOP = 2048,
		CREATE_HIT_ACT = 4096,
		LOCK_POS_Y = 8192,
		Z_OFFSET_BIND = 16384,
		Z_OFFSET_BACK = 32768,
	};
};
struct CharaActionData::SHOT_CONTROL_ID
{
	enum ID
	{
		ALL = 0,
		REFLECT = 1,
		ID_0 = 2,
		ID_1 = 3,
		ID_2 = 4,
		ID_3 = 5,
		ID_4 = 6,
		ID_5 = 7,
		ID_6 = 8,
		ID_7 = 9,
		ID_8 = 10,
		ID_9 = 11,
		ID_10 = 12,
		ID_11 = 13,
	};
};
struct CharaActionData::SHOT_CONTROL_FUNCTION
{
	enum ID
	{
		DELETE_ = 0,
		BRANCH_FLAG1 = 1,
		BRANCH_FLAG2 = 2,
		BRANCH_FLAG3 = 3,
		BRANCH_FLAG4 = 4,
		RELEASE_BIND = 5,
		DELETE_NOW = 6,
		CANCEL_LINK_ACTION = 7,
		CANCEL_LINK_DAMAGE = 8,
		MAX = 9,
	};
};
struct CharaActionData::EFFECT_CONTROL_TYPE
{
	enum ID
	{
		SET = 0,
		CONTROL = 1,
	};
};
struct CharaActionData::EFFECT_SET_POSITION
{
	enum ID
	{
		BASE_POS = 0,
		CENTER = 1,
		STAGE = 2,
		CHARA_BONE_ID_START = 3,
	};
};
struct CharaActionData::EFFECT_FILE_ID
{
	enum ID
	{
		UNIQUE = 0,
		COMMON = 1,
	};
};
struct CharaActionData::EFFECT_SET_TERM
{
	enum FLAG
	{
		ATK_TERM_AND = 1,
		ATK_TERM_NOT = 2,
		ATK_HIT = 4,
		ATK_GUARD = 8,
		ATK_NO_HIT = 16,
		ATK_COUNTER = 32,
		ATK_TERM_ALL = 60,
		FLG_TERM_AND = 64,
		FLG_TERM_NOT = 128,
		BRANCH_FLAG1 = 256,
		BRANCH_FLAG2 = 512,
		BRANCH_FLAG3 = 1024,
		BRANCH_FLAG4 = 2048,
		FLG_TERM_ALL = 3840,
	};
};
struct CharaActionData::EFFECT_SET_OPTION
{
	enum FLAG
	{
		BIND_POS = 1,
		NOT_REV_BASE = 2,
		NOT_REV_X = 4,
		TARGET_BASE = 8,
		LINK_ACTION = 16,
		LINK_DAMAGE = 32,
		LINK_DEAD = 64,
		FAST_DIE = 128,
		BIND_ROTATE = 256,
		NONSTOP_BLACKOUT = 512,
		REVERSE_Z = 1024,
		LINK_HITSTOP = 2048,
		REVERSE_ANGLE = 4096,
		LOCK_POS_Y = 8192,
		LOCK_POS_Z = 16384,
		LINK_INVISIBLE = 32768,
		Z_OFFSET_FRONT = 65536,
		Z_OFFSET_BACK = 131072,
		AUTO_EFFECT_KO = 262144,
		FOOT_SHADOW = 524288,
		ALWAYS_EFFECT = 1048576,
		LINK_BIND_ACTION = 2097152,
		LINK_BIND_DAMAGE = 4194304,
		VRS_ARM_ONLY = 8388608,
		NOT_USE_DEPTH = 536870912,
		INVALID_BLEND_PROJ = 1073741824,
	};
};
struct CharaActionData::EFFECT_CONTROL_TARGET
{
	enum ID
	{
		ALL = 0,
		ACTION = 1,
		BIND_ALL = 2,
		BIND_ACTION = 3,
		NOW_ACTION = 4,
	};
};
struct CharaActionData::EFFECT_CONTROL_FUNCTION
{
	enum ID
	{
		DELETE_ = 0,
		BRANCH_FLAG1 = 1,
		BRANCH_FLAG2 = 2,
		BRANCH_FLAG3 = 3,
		BRANCH_FLAG4 = 4,
		RELEASE_BIND = 5,
		DELETE_NOW = 6,
		CANCEL_LINK_ACTION = 7,
		CANCEL_LINK_DAMAGE = 8,
		MAX = 9,
	};
};
struct CharaActionData::EFFECT_ANIME_OPTION_SETTING
{
	enum FLAG
	{
		RESEVE_1 = 1,
		RESEVE_2 = 2,
		RESEVE_3 = 4,
		RESEVE_4 = 8,
	};
};
struct CharaActionData::WEAPON_SHOW_SETTING
{
	enum ID
	{
		DEFAULT = 0,
		VISIBLE = 1,
		INVISIBLE = 2,
	};
};
struct CharaActionData::WEAPON_SETTING_FLAG
{
	enum ID
	{
		NONE = 0,
		SET = 1,
	};
};
struct CharaActionData::WEAPON_ATTACH_BONE
{
	enum ID
	{
		NONE = 0,
		C_HIPS_ATTACH = 1,
		L_HAND_ATTACH = 2,
		R_HAND_ATTACH = 3,
		L_FOOT_ATTACH = 4,
		R_FOOT_ATTACH = 5,
		C_HEAD_ATTACH = 6,
		L_WEAPON_ATTACH = 7,
		R_WEAPON_ATTACH = 8,
		C_CASE_ATTACH = 9,
		L_P_ATTACH = 10,
		R_P_ATTACH = 11,
		L_ARM1 = 12,
		R_ARM1 = 13,
		L_WEAPON_ATTACH_HEAD = 14,
		R_WEAPON_ATTACH_HEAD = 15,
		C_BASE = 16,
		CENTER = 17,
		C_CHIN_FBD = 18,
		HIP_FOLLOW = 19,
		C_MATCH = 20,
		L_WEAPON_ATTACH_CARD01 = 21,
		L_WEAPON_ATTACH_CARD02 = 22,
		L_WEAPON_ATTACH_CARD03 = 23,
		R_WEAPON_ATTACH_CARD01 = 24,
		R_WEAPON_ATTACH_CARD02 = 25,
		R_WEAPON_ATTACH_CARD03 = 26,
		MAX = 27,
	};
};
struct CharaActionData::WEAPON_ATTACH_CHILD_BONE
{
	enum ID
	{
		NONE = 0,
		P_LIPSTICK = 1,
		P_COMPACT = 2,
		MAX = 3,
	};
};
struct CharaActionData::WEAPON_OPTION_SETTING
{
	enum FLAG
	{
		DEFAULT_PARAM = 1,
		NOT_LINK_CANGLE = 2,
		LINK_MOTION_FRAME = 4,
		LINK_MOTION = 8,
		TRANS_MOTION_FRAME = 16,
		IGNORE_PARENT_INVISIBLE = 32,
		INVISIBLE_COMMON_MOTION = 64,
		VISIBLE_RIGHT_DIR_ONLY = 128,
		VISIBLE_LEFT_DIR_ONLY = 256,
		SECONDARY_ON = 512,
		IGNORE_MOTION_BLEND = 1024,
		RESERVE5 = 2048,
	};
};
struct CharaActionData::SETTING_CONTROL_TYPE
{
	enum ID
	{
		COLOR = 0,
		EYE = 1,
		HEAD = 2,
		MATERIAL = 3,
		TALK = 4,
		SECONDARY = 5,
		SP_EFFECT = 6,
		CHARA_OFFSET = 7,
	};
};
struct CharaActionData::SETTING_CHARA_COLOR_TYPE
{
	enum ID
	{
		RESET = 0,
		ALPHA_BLEND = 1,
		MUL_BLEND = 2,
		PRE_LIGHTING = 3,
	};
};
struct CharaActionData::SETTING_CHARA_COLOR_OPTION
{
	enum FLAG
	{
		NO_CHANGE_WEAPON = 1,
		CHANGE_WEAPON_ONLY = 2,
		HAIR_MATERIAL_ONLY = 4,
		EYE_MATERIAL_ONLY = 8,
		SKIN_MATERIAL_ONLY = 16,
		IGNORE_ACTION_FREEZE = 536870912,
		TRANS_CHANGE_ACTION = 1073741824,
		NOT_NEED_CHARA_COLOR_FLAG = 14,
		NOT_NEED_WEAPON_COLOR_FLAG = 13,
		NAME_MATERIAL_FLAG = 8,
	};
};
struct CharaActionData::SETTING_EYE_CONTROL_TYPE
{
	enum ID
	{
		NONE = 0,
		ON = 1,
		OFF = 2,
		QUICK_ON = 3,
		QUICK_OFF = 4,
		ANGLE_SETTING = 5,
	};
};
struct CharaActionData::SETTING_HEAD_CONTROL_TYPE
{
	enum ID
	{
		NONE = 0,
		ON = 1,
		OFF = 2,
		QUICK_ON = 3,
		QUICK_OFF = 4,
		ANGLE_SETTING = 5,
	};
};
struct CharaActionData::SETTING_MATERIAL_SHOW_TYPE
{
	enum ID
	{
		DEFAULT = 0,
		VISIBLE = 1,
		INVISIBLE = 2,
	};
};
struct CharaActionData::SETTING_MATERIAL_OPTION_FLAG
{
	enum FLAG
	{
		DEFAULT_PARAM = 1,
		ENTRY_MIAN_MASK = 2,
		INVISIBLE_COMMON_MOTION = 4,
	};
};
struct CharaActionData::SETTING_MATERIAL_GROUP
{
	enum ID
	{
		NONE = 0,
		GROUP_A = 1,
		GROUP_B = 2,
		GROUP_C = 3,
		GROUP_D = 4,
		GROUP_E = 5,
		GROUP_F = 6,
		GROUP_G = 7,
		GROUP_H = 8,
	};
};
struct CharaActionData::SETTING_TALK_WINDOW_SHOW
{
	enum ID
	{
		NONE = 0,
		INVISIBLE = 1,
		VISIBLE = 2,
		VISIBLE_EX = 3,
	};
};
struct CharaActionData::SETTING_TALK_TEXT_SHOW
{
	enum ID
	{
		NONE = 0,
		INVISIBLE = 1,
		VISIBLE = 2,
	};
};
struct CharaActionData::SETTING_SECONDARY_OPTION
{
	enum FLAG
	{
		SET_OPTION_ONLY = 1,
		INVALID_GROUND = 2,
		INVALID_COLLISION = 4,
		BONE_RESET = 8,
		INVALID_BONE_MOVE = 16,
		TARGET_BONE_LOW_ALL = 32,
		TARGET_BONE_BETWEEN = 64,
		TARGET_BONE_ALL = 128,
	};
};
struct CharaActionData::SETTING_SP_EFFECT_BLUR
{
	enum ID
	{
		NONE = 255,
		OFF = 0,
		BLUR_1 = 1,
		BLUR_2 = 2,
		BLUR_3 = 3,
		BLUR_4 = 4,
	};
};
struct CharaActionData::SETTING_SP_EFFECT_BLUR_FLAG
{
	enum FLAG
	{
		FRAME_1 = 1,
		FRAME_2 = 2,
		FRAME_3 = 4,
		FRAME_4 = 8,
	};
};
struct CharaActionData::SETTING_SP_EFFECT_SHADOW_PASS
{
	enum ID
	{
		NONE = 0,
		DEFAULT = 1,
		DISABLE_SELF_SHADOW = 2,
		IGNORE_SHADOW_PASS = 3,
	};
};
struct CharaActionData::SETTING_SP_EFFECT_CAMERA_LIGHT
{
	enum ID
	{
		NONE = 0,
		OFF = 1,
		ID_0 = 2,
		ID_1 = 3,
		ID_2 = 4,
		ID_3 = 5,
		ID_0_REV = 6,
		ID_1_REV = 7,
		ID_2_REV = 8,
		ID_3_REV = 9,
	};
};
enum CharaActionData::SETTING_SP_EFFECT_CAMERA_LIGHT::ID
{
	NONE = 0,
	OFF = 1,
	ID_0 = 2,
	ID_1 = 3,
	ID_2 = 4,
	ID_3 = 5,
	ID_0_REV = 6,
	ID_1_REV = 7,
	ID_2_REV = 8,
	ID_3_REV = 9,
};
struct CharaActionData::SETTING_SP_EFFECT_RIM_LIGHT
{
	enum ID
	{
		NONE = 0,
		DEFAULT = 1,
		OFF = 2,
	};
};
struct CharaActionData::ACT_OPTION
{
	enum FLAG
	{
		TRANS_BASE_POS = 1,
		TRANS_BRANCH_FLAG = 2,
		TRANS_SKILL_ADJUST = 4,
		TRANS_CAMERA_SETTING = 8,
		TRANS_LINKED_SHOT = 16,
		EFFECT_LOOP_INIT = 32,
		TRANS_EFFECT_STAT = 64,
		TRANS_LINKED_EFFECT = 128,
		SET_COUNTER = 256,
		TRANS_WEAPON = 512,
		TRANS_MATERIAL = 1024,
	};
};
struct CharaActionData::DataHeader
{
	unsigned long uiDataVersion; // 0x0
	long iActionCount; // 0x4
};
struct CharaActionData::ActionDataInfo
{
	long iCategoryID; // 0x0
	long iSubCategoryID; // 0x4
	long iEndFrame; // 0x8
	long iLoopBackFrame; // 0xC
	long iOptionFlag; // 0x10
	long iReserve1; // 0x14
	long iReserve2; // 0x18
	long iReserve3; // 0x1C
	long iReserve4; // 0x20
	long iLineCount; // 0x24
};
struct CharaActionData::ActionLineFrame
{
	long iFrame; // 0x0
	long iBase[7]; // 0x4
	CharaActionData::BaseAnime baseAnime; // 0x4
	CharaActionData::FaceAnime faceAnime; // 0x4
	CharaActionData::Collision hit; // 0x4
	CharaActionData::Attack atk; // 0x4
	CharaActionData::Cancel cancel; // 0x4
	CharaActionData::Branch branch; // 0x4
	CharaActionData::Move move; // 0x4
	CharaActionData::Offset offset; // 0x4
	CharaActionData::Speed speed; // 0x4
	CharaActionData::ActionFlag actFlag; // 0x4
	CharaActionData::Exclusive exclusive; // 0x4
	CharaActionData::Effect effect; // 0x4
	CharaActionData::Sound sound; // 0x4
	CharaActionData::Etc etc; // 0x4
	CharaActionData::Position pos; // 0x4
	CharaActionData::Camera cam; // 0x4
	CharaActionData::Blackout blackout; // 0x4
	CharaActionData::ThrowAttach throwAttach; // 0x4
	CharaActionData::Shot shot; // 0x4
	CharaActionData::EffectAnime effectAnime; // 0x4
	CharaActionData::EffectMove effectMove; // 0x4
	CharaActionData::EffectScale effectScale; // 0x4
	CharaActionData::EffectAngle effectAngle; // 0x4
	CharaActionData::Weapon weapon; // 0x4
	CharaActionData::Setting setting; // 0x4
};
struct CharaActionData::ActionLine
{
	long iKeyFrameCount; // 0x0
	long iActionLineID; // 0x4
	CharaActionData::ActionLineFrame * pFrame; // 0x8
};
struct CharaActionData::ActionData
{
	CharaActionData::ActionDataInfo info; // 0x0
	CharaActionData::ActionLine * pLine; // 0x28
};
struct CharaActionData::TranslateionTextKey
{
	long iDataCount; // 0x0
	char * * pKeys; // 0x8
};
bool CharaActionData::IsReadSuccess(); // 0x14017D900