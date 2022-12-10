#pragma once

struct TknDataColor4
{
	float r; // 0x0
	float g; // 0x4
	float b; // 0x8
	float a; // 0xC
};
class TknData
{
	enum DataType
	{
		DATATYPE_NONE = 0,
		DATATYPE_SCENE = 1,
		DATATYPE_EVENT_CONDITION = 2,
		DATATYPE_MODEL = 3,
		DATATYPE_MODEL_UV_ANIMATION = 4,
		DATATYPE_MOTION = 5,
		DATATYPE_OBJECT = 6,
		DATATYPE_EVENT = 7,
		DATATYPE_EVENT_MODEL_ANIMATION = 8,
		DATATYPE_EVENT_TRANS = 9,
		DATATYPE_LIGHT = 10,
		DATATYPE_EFFECT = 11,
		DATATYPE_EVENT_EFFECT_ANIMATION = 12,
		DATATYPE_BILLBOARD = 13,
		DATATYPE_EVENT_BILLBOARD_ANIMATION = 14,
		DATATYPE_EVENT_SCRIPT = 15,
		DATATYPE_EVENT_SOUND = 16,
	};
	enum OjectAnimationType
	{
		OBJECT_ANIMATION_NOTHING = 0,
		OBJECT_ANIMATION_MODEL = 1,
		OBJECT_ANIMATION_EFFECT = 2,
		OBJECT_ANIMATION_BILLBOARD = 3,
		OBJECT_ANIMATION_SOUND = 4,
	};
	enum LoopType
	{
		LOOPTYPE_LOOP = 0,
		LOOPTYPE_STOP = 1,
		LOOPTYPE_ERASE = 2,
	};
	enum ModelAnimationBlendType
	{
		MODELANIM_BLENDTYPE_OVERRIDE = 0,
		MODELANIM_BLENDTYPE_BLEND = 1,
	};
	enum TextureType
	{
		TEXTURETYPE_DIFFUSE = 0,
		TEXTURETYPE_NORMALMAP = 1,
		TEXTURETYPE_BUMP = 2,
		TEXTURETYPE_AMBIENT = 3,
		TEXTURETYPE_SPECULAR = 4,
		TEXTURETYPE_EMISSIVE = 5,
		TEXTURETYPE_TRANSPARENCY = 6,
		TEXTURETYPE_REFLECTION = 7,
		TEXTURETYPE_DISPLACEMENT = 8,
		TEXTURETYPE_SHININESS = 9,
	};
	enum ToolTextureType
	{
		TOOL_TEXTURETYPE_START = 0,
		TOOL_TEXTURETYPE_DIFFUSE = 0,
		TOOL_TEXTURETYPE_EMISSIVE = 1,
		TOOL_TEXTURETYPE_AMBIENT = 2,
		TOOL_TEXTURETYPE_SPECULAR = 3,
		TOOL_TEXTURETYPE_SHININESS = 4,
		TOOL_TEXTURETYPE_NORMALMAP = 5,
		TOOL_TEXTURETYPE_BUMP = 6,
		TOOL_TEXTURETYPE_TRANSPARENCY = 7,
		TOOL_TEXTURETYPE_REFLECTION = 8,
		TOOL_TEXTURETYPE_DISPLACEMENT = 9,
		TOOL_TEXTURETYPE_MAX = 10,
	};
	enum SceneTrigger1
	{
		TRIGGER1_NEUTRAL = 0,
		TRIGGER1_ATTACK_HIT = 1,
		TRIGGER1_SKILL_ATACK_HIT = 2,
		TRIGGER1_SP_SKILL_ATACK_HIT = 3,
		TRIGGER1_MAX_SKILL_ATTACK_HIT = 4,
		TRIGGER1_CLIMAX_SKILL_ATTACK_HIT = 5,
		TRIGGER1_CHARACTER_STUN = 6,
		TRIGGER1_CHARACTER_BOUND = 7,
		TRIGGER1_ROUND_START = 8,
		TRIGGER1_KO = 9,
		TRIGGER1_TIME_UP = 10,
		TRIGGER1_DRAW = 11,
		TRIGGER1_SCREEN_SHAKE = 12,
		TRIGGER1_GO = 13,
		TRIGGER1_FADE_IN = 14,
		TRIGGER1_TALK_OUT = 15,
		TRIGGER1_CRASH_WALL = 16,
		TRIGGER1_CRASH_GROUND = 17,
		TRIGGER1_KO_TIME = 18,
		TRIGGER1_TALK_START = 19,
		TRIGGER1_AKEBONO_KO = 20,
		TRIGGER1_MAX = 21,
		TRIGGER1_NONE = 22,
	};
	enum SceneTrigger2
	{
		TRIGGER2_NONE = 0,
		TRIGGER2_TEAMSELECT_NONE = 1,
		TRIGGER2_TEAMSELECT_HOST = 2,
		TRIGGER2_TEAMSELECT_PLAYER = 3,
		TRIGGER2_TEAMSELECT_ENEMY = 4,
		TRIGGER2_TEADSELECT_NOT_HOST = 5,
		TRIGGER2_ROUNDSELECT_NONE = 6,
		TRIGGER2_ROUNDSELECT_FIRST = 7,
		TRIGGER2_ROUNDSELECT_LAST = 8,
		TRIGGER2_ROUNDSELECT_ROUND2 = 9,
		TRIGGER2_ROUNDSELECT_ROUND3 = 10,
		TRIGGER2_ROUNDSELECT_ROUND4 = 11,
		TRIGGER2_ROUNDSELECT_EX_ROUND = 12,
		TRIGGER2_TIMER_01 = 13,
		TRIGGER2_TIMER_02 = 14,
		TRIGGER2_TIMER_03 = 15,
		TRIGGER2_TIMER_04 = 16,
		TRIGGER2_TIMER_05 = 17,
		TRIGGER2_TIMER_06 = 18,
		TRIGGER2_TIMER_07 = 19,
		TRIGGER2_TIMER_08 = 20,
		TRIGGER2_TIMER_09 = 21,
		TRIGGER2_TIMER_10 = 22,
		TRIGGER2_TIMER_20 = 23,
		TRIGGER2_TIMER_30 = 24,
		TRIGGER2_TIMER_99 = 25,
	};
	enum SceneTriggerOperator
	{
		TRIGGER_OPERATOR_EQUAL = 0,
		TRIGGER_OPERATOR_NOT_GREATER_THAN = 1,
		TRIGGER_OPERATOR_NOT_LESS_THAN = 2,
	};
	enum SceneRegistCategory
	{
		SCENE_REGIST_STAGE = 0,
		SCENE_REGIST_GLOBAL = 1,
		SCENE_REGIST_LOCAL = 2,
		SCENE_REGIST_MAX = 3,
	};
public:
	TknData(TknData &);
	TknData(long, long, TknData::DataType);
	~TknData();
	long getUniqueID();
	TknData::DataType getType();
	long getParentUniqueID();
	const char * getUserName();
protected:
	void setParentUniqueID(long);
private:
	long m_uniqueID; // 0x8
	long m_parentUniqueID; // 0xC
	TknData::DataType m_dataType; // 0x10
protected:
	const char * m_pUserName; // 0x18
public:
	TknData & operator=(const TknData &);
};
enum TknData::OjectAnimationType
{
	OBJECT_ANIMATION_NOTHING = 0,
	OBJECT_ANIMATION_MODEL = 1,
	OBJECT_ANIMATION_EFFECT = 2,
	OBJECT_ANIMATION_BILLBOARD = 3,
	OBJECT_ANIMATION_SOUND = 4,
};
enum TknData::TextureType
{
	TEXTURETYPE_DIFFUSE = 0,
	TEXTURETYPE_NORMALMAP = 1,
	TEXTURETYPE_BUMP = 2,
	TEXTURETYPE_AMBIENT = 3,
	TEXTURETYPE_SPECULAR = 4,
	TEXTURETYPE_EMISSIVE = 5,
	TEXTURETYPE_TRANSPARENCY = 6,
	TEXTURETYPE_REFLECTION = 7,
	TEXTURETYPE_DISPLACEMENT = 8,
	TEXTURETYPE_SHININESS = 9,
};