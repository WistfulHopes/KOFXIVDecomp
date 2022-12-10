#pragma once

enum Scaleform::GFx::AS3::BuiltinType
{
	AS3Builtin_empty_ = 0,
	AS3Builtin_undefined = 1,
	AS3Builtin_null = 2,
	AS3Builtin_void = 3,
	AS3Builtin_true = 4,
	AS3Builtin_false = 5,
	AS3Builtin_boolean = 6,
	AS3Builtin_number = 7,
	AS3Builtin_string = 8,
	AS3Builtin_function = 9,
	AS3Builtin_object = 10,
	AS3Builtin_xml = 11,
	AS3Builtin_unknown = 12,
	AS3Builtin_hitArea = 13,
	AS3Builtin_comma = 14,
	AS3Builtin_zero = 15,
	AS3Builtin_NaN = 16,
	AS3Builtin_Infinity = 17,
	AS3Builtin_minusInfinity_ = 18,
	AS3Builtin_objPrefix = 19,
	AS3Builtin_squareBracketClose = 20,
	AS3Builtin_namespace = 21,
	AS3Builtin_global = 22,
	AS3Builtin_length = 23,
	AS3Builtin_toString = 24,
	AS3Builtin_valueOf = 25,
	AS3Builtin_Class = 26,
	AS3Builtin_Date = 27,
	AS3Builtin_activate = 28,
	AS3Builtin_added = 29,
	AS3Builtin_addedToStage = 30,
	AS3Builtin_removed = 31,
	AS3Builtin_removedFromStage = 32,
	AS3Builtin_deactivate = 33,
	AS3Builtin_enterFrame = 34,
	AS3Builtin_frameConstructed = 35,
	AS3Builtin_exitFrame = 36,
	AS3Builtin_timer = 37,
	AS3Builtin_timerComplete = 38,
	AS3Builtin_complete = 39,
	AS3Builtin_progress = 40,
	AS3Builtin_ioError = 41,
	AS3Builtin_socketData = 42,
	AS3Builtin_open = 43,
	AS3Builtin_close = 44,
	AS3Builtin_init = 45,
	AS3Builtin_render = 46,
	AS3Builtin_resize = 47,
	AS3Builtin_mouseCursorChange = 48,
	AS3Builtin_click = 49,
	AS3Builtin_doubleClick = 50,
	AS3Builtin_mouseDown = 51,
	AS3Builtin_mouseMove = 52,
	AS3Builtin_mouseOut = 53,
	AS3Builtin_mouseOver = 54,
	AS3Builtin_mouseUp = 55,
	AS3Builtin_mouseWheel = 56,
	AS3Builtin_rollOut = 57,
	AS3Builtin_rollOver = 58,
	AS3Builtin_keyDown = 59,
	AS3Builtin_keyUp = 60,
	AS3Builtin_gamePadAnalogChange = 61,
	AS3Builtin_update = 62,
	AS3Builtin_status = 63,
	AS3Builtin_textInput = 64,
	AS3Builtin_change = 65,
	AS3Builtin_scroll = 66,
	AS3BuiltinConst_Count_ = 67,
};
class Scaleform::GFx::ASStringBuiltinManagerT<enum Scaleform::GFx::AS3::BuiltinType,67>
{
private:
	Scaleform::GFx::ASStringNodeHolder Builtins[67]; // 0x0
	Scaleform::GFx::ASStringManager * pStringManager; // 0x218
	const char * * pStaticStrings; // 0x220
public:
	ASStringBuiltinManagerT<enum Scaleform::GFx::AS3::BuiltinType,67>(Scaleform::GFx::ASStringManager *, const char * *);
	~ASStringBuiltinManagerT<enum Scaleform::GFx::AS3::BuiltinType,67>();
	Scaleform::MemoryHeap * GetHeap();
	const Scaleform::GFx::ASStringNodeHolder & GetBuiltinNodeHolder(Scaleform::GFx::AS3::BuiltinType);
	const Scaleform::GFx::ASString & GetBuiltin(Scaleform::GFx::AS3::BuiltinType);
	Scaleform::GFx::ASString CreateConstString(const char *, unsigned long long);
	Scaleform::GFx::ASString CreateConstString(const char *);
	Scaleform::GFx::ASString CreateString(const Scaleform::String &);
	Scaleform::GFx::ASString CreateString(const char *, unsigned long long);
	Scaleform::GFx::ASString CreateString(const wchar_t *, long long);
	Scaleform::GFx::ASString CreateString(const char *);
	Scaleform::GFx::ASStringNode * GetEmptyStringNode();
	Scaleform::GFx::ASString CreateEmptyString();
	Scaleform::GFx::ASStringNode * GetNullStringNode();
	Scaleform::GFx::ASString CreateNullString();
	Scaleform::GFx::ASStringManager * GetStringManager();
	const char * GetBuiltinCStr(Scaleform::GFx::AS3::BuiltinType);
};
class Scaleform::GFx::AS3::StringManager :
	Scaleform::GFx::ASStringBuiltinManagerT<enum Scaleform::GFx::AS3::BuiltinType,67>
{
	class Base;
public:
	StringManager(Scaleform::GFx::ASStringManager *);
	~StringManager();
};