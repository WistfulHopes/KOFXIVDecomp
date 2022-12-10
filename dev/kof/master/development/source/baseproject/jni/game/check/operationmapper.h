#pragma once

class FighterOperationMapper
{
	enum MapKey
	{
		MapKey_Button_Square = 0,
		MapKey_Button_Cross = 1,
		MapKey_Button_Circle = 2,
		MapKey_Button_Triangle = 3,
		MapKey_Button_L1 = 4,
		MapKey_Button_R1 = 5,
		MapKey_Button_L2 = 6,
		MapKey_Button_R2 = 7,
		MapKey_Button_L3 = 8,
		MapKey_Button_R3 = 9,
		MapKey_Internal_Use_Upper_Limit = 10,
	};
	enum Mapped
	{
		Mapped_Unused = 0,
		Mapped_LP = 1,
		Mapped_LK = 2,
		Mapped_HK = 3,
		Mapped_HP = 4,
		Mapped_HP_LP = 5,
		Mapped_LP_LK = 6,
		Mapped_LK_HK = 7,
		Mapped_HK_HP = 8,
		Mapped_LP_HK = 9,
		Mapped_LK_HP = 10,
		Mapped_REC = 11,
		Mapped_PLAY = 12,
		Mapped_REPEAT = 13,
		Mapped_L = 14,
		Mapped_D = 15,
		Mapped_R = 16,
		Mapped_U = 17,
		Mapped_Internal_Use_Upper_Limit = 18,
	};
public:
	FighterOperationMapper();
	FighterOperationMapper::Mapped get(FighterOperationMapper::MapKey);
	void set(FighterOperationMapper::MapKey, FighterOperationMapper::Mapped);
	void reset();
	void stickreset();
	bool equalTo(const FighterOperationMapper &);
	bool operator==(const FighterOperationMapper &);
	bool operator!=(const FighterOperationMapper &);
	long serializeBindings(long *);
	void deserializeBindings(long *);
private:
	FighterOperationMapper::Mapped m_mapping[10]; // 0x0
};
enum FighterOperationMapper::Mapped
{
	Mapped_Unused = 0,
	Mapped_LP = 1,
	Mapped_LK = 2,
	Mapped_HK = 3,
	Mapped_HP = 4,
	Mapped_HP_LP = 5,
	Mapped_LP_LK = 6,
	Mapped_LK_HK = 7,
	Mapped_HK_HP = 8,
	Mapped_LP_HK = 9,
	Mapped_LK_HP = 10,
	Mapped_REC = 11,
	Mapped_PLAY = 12,
	Mapped_REPEAT = 13,
	Mapped_L = 14,
	Mapped_D = 15,
	Mapped_R = 16,
	Mapped_U = 17,
	Mapped_Internal_Use_Upper_Limit = 18,
};
class FighterOperationKeyboardMapper
{
public:
	FighterOperationKeyboardMapper();
	FighterOperationMapper::Mapped get(AgKeyboardButton);
	void set(AgKeyboardButton, FighterOperationMapper::Mapped);
	void reset(long);
	void clear();
	bool equalTo(const FighterOperationKeyboardMapper &);
	bool operator==(const FighterOperationKeyboardMapper &);
	bool operator!=(const FighterOperationKeyboardMapper &);
	long serializeBindings(long *);
	void deserializeBindings(long *);
private:
	FighterOperationMapper::Mapped m_mapping[256]; // 0x0
};
struct GameOperations
{
	enum FighterOpSpec
	{
		FighterOp_Dir_L = 0,
		FighterOp_Dir_D = 1,
		FighterOp_Dir_R = 2,
		FighterOp_Dir_U = 3,
		FighterOp_LP = 4,
		FighterOp_HP = 5,
		FighterOp_LK = 6,
		FighterOp_HK = 7,
		FighterOp_REC = 8,
		FighterOp_PLAY = 9,
		FighterOp_REPEAT = 10,
		FighterOpSpec_Internal_Use_Upper_Limit = 11,
	};
	enum GameOpSpec
	{
		GameOp_Dir_L = 0,
		GameOp_Dir_D = 1,
		GameOp_Dir_R = 2,
		GameOp_Dir_U = 3,
		GameOp_UI_OK = 4,
		GameOp_UI_Cancel = 5,
		GameOp_UI_FuncX = 6,
		GameOp_UI_FuncY = 7,
		GameOp_UI_PageBack = 8,
		GameOp_UI_PageNext = 9,
		GameOp_UI_LShift = 10,
		GameOp_UI_RShift = 11,
		GameOp_GameStart = 12,
		GameOp_TouchPad = 13,
		GameOp_Cheat = 14,
		GameOp_LStick = 15,
		GameOp_MenuStart = 16,
		GameOp_MessageInput = 17,
		GameOp_SetPhrases = 18,
		GameOp_Leaderboard_Up = 19,
		GameOp_Leaderboard_Down = 20,
		GameOp_SetDialog1 = 21,
		GameOp_SetDialog2 = 22,
		GameOp_SetDialog3 = 23,
		GameOp_SetDialog4 = 24,
		GameOp_Continue = 25,
		GameOp_ReplayDataDisplay = 26,
		GameOpSpec_Internal_Upper_Limit = 27,
		GameOp_RStick = 14,
		GameOp_Squar = 6,
		GameOp_Triangle = 7,
		GameOp_Cross = 4,
		GameOp_Circle = 5,
		GameOp_L1 = 8,
		GameOp_R1 = 9,
		GameOp_L2 = 10,
		GameOp_R2 = 11,
		GameOp_Option = 12,
	};
	static const unsigned long long IGNORE_GAMEOP_ON_GAMEPAD; // 0xFFFFFFFFFFFFFFFF
	enum OperationSourceChannel
	{
		OpSrcCh_Dir_L = 0,
		OpSrcCh_Dir_D = 1,
		OpSrcCh_Dir_R = 2,
		OpSrcCh_Dir_U = 3,
		OpSrcCh_Button_L1 = 4,
		OpSrcCh_Button_R1 = 5,
		OpSrcCh_Button_L2 = 6,
		OpSrcCh_Button_R2 = 7,
		OpSrcCh_Button_Square = 8,
		OpSrcCh_Button_Cross = 9,
		OpSrcCh_Button_Circle = 10,
		OpSrcCh_Button_Triangle = 11,
		OpSrcCh_Button_Start = 12,
		OpSrcCh_TouchPad = 13,
		OpSrcCh_Button_LStick = 14,
		OpSrcCh_Button_RStick = 15,
		OperationSourceChannel_Internal_Upper_Limit = 16,
	};
	class BooleanSrcChannelValueSet_t;
	class AGBooleanSrcKeyboardChannelValueSet_t;
};
enum GameOperations::GameOpSpec
{
	GameOp_Dir_L = 0,
	GameOp_Dir_D = 1,
	GameOp_Dir_R = 2,
	GameOp_Dir_U = 3,
	GameOp_UI_OK = 4,
	GameOp_UI_Cancel = 5,
	GameOp_UI_FuncX = 6,
	GameOp_UI_FuncY = 7,
	GameOp_UI_PageBack = 8,
	GameOp_UI_PageNext = 9,
	GameOp_UI_LShift = 10,
	GameOp_UI_RShift = 11,
	GameOp_GameStart = 12,
	GameOp_TouchPad = 13,
	GameOp_Cheat = 14,
	GameOp_LStick = 15,
	GameOp_MenuStart = 16,
	GameOp_MessageInput = 17,
	GameOp_SetPhrases = 18,
	GameOp_Leaderboard_Up = 19,
	GameOp_Leaderboard_Down = 20,
	GameOp_SetDialog1 = 21,
	GameOp_SetDialog2 = 22,
	GameOp_SetDialog3 = 23,
	GameOp_SetDialog4 = 24,
	GameOp_Continue = 25,
	GameOp_ReplayDataDisplay = 26,
	GameOpSpec_Internal_Upper_Limit = 27,
	GameOp_RStick = 14,
	GameOp_Squar = 6,
	GameOp_Triangle = 7,
	GameOp_Cross = 4,
	GameOp_Circle = 5,
	GameOp_L1 = 8,
	GameOp_R1 = 9,
	GameOp_L2 = 10,
	GameOp_R2 = 11,
	GameOp_Option = 12,
};
enum GameOperations::OperationSourceChannel
{
	OpSrcCh_Dir_L = 0,
	OpSrcCh_Dir_D = 1,
	OpSrcCh_Dir_R = 2,
	OpSrcCh_Dir_U = 3,
	OpSrcCh_Button_L1 = 4,
	OpSrcCh_Button_R1 = 5,
	OpSrcCh_Button_L2 = 6,
	OpSrcCh_Button_R2 = 7,
	OpSrcCh_Button_Square = 8,
	OpSrcCh_Button_Cross = 9,
	OpSrcCh_Button_Circle = 10,
	OpSrcCh_Button_Triangle = 11,
	OpSrcCh_Button_Start = 12,
	OpSrcCh_TouchPad = 13,
	OpSrcCh_Button_LStick = 14,
	OpSrcCh_Button_RStick = 15,
	OperationSourceChannel_Internal_Upper_Limit = 16,
};
class std::bitset<16>
{
	typedef unsigned long _Ty;
	class reference;
public:
	static void _Validate(unsigned long long);
	bool _Subscript(unsigned long long);
	std::bitset<16>::reference operator[](unsigned long long);
	bool operator[](unsigned long long);
	bitset<16>(unsigned long long);
	bitset<16>();
	static const bool _Need_mask; // 0xFFFFFFFFFFFFFFFF
	static const unsigned long long _Mask; // 0xFFFFFFFFFFFFFFFF
	std::bitset<16> & operator&=(const std::bitset<16> &);
	std::bitset<16> & operator|=(const std::bitset<16> &);
	std::bitset<16> & operator^=(const std::bitset<16> &);
	std::bitset<16> & operator<<=(unsigned long long);
	std::bitset<16> & operator>>=(unsigned long long);
	std::bitset<16> & set(unsigned long long, bool);
	std::bitset<16> & set();
	std::bitset<16> & reset(unsigned long long);
	std::bitset<16> & reset();
	operator~();
	std::bitset<16> & flip(unsigned long long);
	std::bitset<16> & flip();
	unsigned long to_ulong();
	unsigned long long to_ullong();
	unsigned long long count();
	unsigned long long size();
	unsigned long long hash();
	bool operator==(const std::bitset<16> &);
	bool operator!=(const std::bitset<16> &);
	bool test(unsigned long long);
	bool any();
	bool none();
	bool all();
	std::bitset<16> operator<<(unsigned long long);
	std::bitset<16> operator>>(unsigned long long);
	unsigned long _Getword(unsigned long long);
	enum <unnamed-enum-_Bitsperword> : long long
	{
		_Bitsperword = 32,
		_Words = 0,
	};
private:
	void _Tidy(unsigned long);
	void _Trim();
	void _Trim_if(std::integral_constant<bool,0>);
	void _Trim_if(std::integral_constant<bool,1>);
	void _Xinv();
	void _Xoflo();
	void _Xran();
	unsigned long _Array[1]; // 0x0
};
class std::bitset<256>
{
	typedef unsigned long long _Ty;
	class reference;
public:
	static void _Validate(unsigned long long);
	bool _Subscript(unsigned long long);
	std::bitset<256>::reference operator[](unsigned long long);
	bool operator[](unsigned long long);
	bitset<256>(unsigned long long);
	bitset<256>();
	static const bool _Need_mask; // 0xFFFFFFFFFFFFFFFF
	static const unsigned long long _Mask; // 0xFFFFFFFFFFFFFFFF
	std::bitset<256> & operator&=(const std::bitset<256> &);
	std::bitset<256> & operator|=(const std::bitset<256> &);
	std::bitset<256> & operator^=(const std::bitset<256> &);
	std::bitset<256> & operator<<=(unsigned long long);
	std::bitset<256> & operator>>=(unsigned long long);
	std::bitset<256> & set(unsigned long long, bool);
	std::bitset<256> & set();
	std::bitset<256> & reset(unsigned long long);
	std::bitset<256> & reset();
	operator~();
	std::bitset<256> & flip(unsigned long long);
	std::bitset<256> & flip();
	unsigned long to_ulong();
	unsigned long long to_ullong();
	unsigned long long count();
	unsigned long long size();
	unsigned long long hash();
	bool operator==(const std::bitset<256> &);
	bool operator!=(const std::bitset<256> &);
	bool test(unsigned long long);
	bool any();
	bool none();
	bool all();
	std::bitset<256> operator<<(unsigned long long);
	std::bitset<256> operator>>(unsigned long long);
	unsigned long long _Getword(unsigned long long);
	enum <unnamed-enum-_Bitsperword> : long long
	{
		_Bitsperword = 64,
		_Words = 3,
	};
private:
	void _Tidy(unsigned long long);
	void _Trim();
	void _Trim_if(std::integral_constant<bool,0>);
	void _Trim_if(std::integral_constant<bool,1>);
	void _Xinv();
	void _Xoflo();
	void _Xran();
	unsigned long long _Array[4]; // 0x0
};
class FighterOperation :
	GameOperations
{
private:
	FighterOperation();
	FighterOperation(const FighterOperation &);
	FighterOperation & operator=(const FighterOperation &);
	class ListenerNode;
public:
	~FighterOperation();
	static FighterOperation & Instance();
	static void AssignUser(long, long, long);
	static void SetOperationMapper(long, const FighterOperationMapper &);
	static void SetOperationKeyboardMapper(long, const FighterOperationKeyboardMapper &);
	void assignUser(long, long, long);
	long getAssignedUserIndex(long);
	long getAssignedUserId(long);
	void setOperationMapper(long, const FighterOperationMapper &);
	void setOperationKeyboardMapper(long, const FighterOperationKeyboardMapper &);
	void setOperationMapperPart(long, FighterOperationMapper::MapKey, FighterOperationMapper::Mapped);
	static void SetOperationMapperPart(long, FighterOperationMapper::MapKey, FighterOperationMapper::Mapped);
	bool test(long, GameOperations::FighterOpSpec);
	static bool Test(long, GameOperations::FighterOpSpec);
	bool testEdge(long, GameOperations::FighterOpSpec);
	static bool TestEdge(long, GameOperations::FighterOpSpec);
	void setVibration(long, double, unsigned char, unsigned char);
	static void SetVibration(long, double, unsigned char, unsigned char);
	void stopVibration(long);
	static void StopVibration(long);
	void setInvalidVibration(long, bool);
	static void SetInvalidVibration(long, bool);
	bool getInvalidVibration(long);
	static void GetInvalidVibration(long);
	long getUserColor(long);
	static long GetUserColor(long);
	void setLightBar(long, unsigned char, unsigned char, unsigned char);
	static void SetLightBar(long, unsigned char, unsigned char, unsigned char);
	void resetLightBar(long);
	static void ResetLightBar(long);
	void getUserName(long, char *, unsigned long long);
	static void GetUserName(long, char *, unsigned long long);
	class ReverseOperationMapper;
	class ReverseOperationKeyboardMapper;
	const FighterOperation::ReverseOperationKeyboardMapper & getReverseKeyboardMapper(long);
	class FighterOperationAssignListener;
	void registerAssignListener(FighterOperation::FighterOperationAssignListener &);
	void unregisterAssignListener(FighterOperation::FighterOperationAssignListener &);
	struct Slot;
private:
	void tryRegisterPS4UserContextListener();
	bool isValidFighterIndex(long);
	const FighterOperation::Slot * getFighterSlot(long);
	FighterOperation::Slot * getFighterSlot(long);
	void dispatchFighterAssignedUserChanged(long, long, long);
	FighterOperation::Slot m_slots[2]; // 0x8
	FighterOperation::ListenerNode m_assignListenerListEnd; // 0xB98
};
class extension::BiLinkable<FighterOperation::ListenerNode>
{
private:
	extension::BiLinkable<FighterOperation::ListenerNode> * m_Prev; // 0x0
	extension::BiLinkable<FighterOperation::ListenerNode> * m_Next; // 0x8
	BiLinkable<FighterOperation::ListenerNode>(extension::BiLinkable<FighterOperation::ListenerNode> &);
public:
	BiLinkable<FighterOperation::ListenerNode>();
protected:
	~BiLinkable<FighterOperation::ListenerNode>();
public:
	static FighterOperation::ListenerNode * Prev(const extension::BiLinkable<FighterOperation::ListenerNode> *);
	static FighterOperation::ListenerNode * Next(const extension::BiLinkable<FighterOperation::ListenerNode> *);
	static void Link(extension::BiLinkable<FighterOperation::ListenerNode> *, extension::BiLinkable<FighterOperation::ListenerNode> *);
	static void Isolate(extension::BiLinkable<FighterOperation::ListenerNode> *);
	static bool IsIsolated(extension::BiLinkable<FighterOperation::ListenerNode> *);
private:
	extension::BiLinkable<FighterOperation::ListenerNode> & operator=(extension::BiLinkable<FighterOperation::ListenerNode> &);
};
class FighterOperation::ListenerNode :
	extension::BiLinkable<FighterOperation::ListenerNode>
{
public:
	ListenerNode();
	~ListenerNode();
};
void FighterOperation::AssignUser(long fighterIndex, long userIndex, long maskType); // 0x140157270
void FighterOperation::SetVibration(long fighterIndex, double vibSec, unsigned char largeMotor, unsigned char smallMotor); // 0x1400E1A00
void FighterOperation::SetInvalidVibration(long fighterIndex, bool flag); // 0x1401A8ED0
void FighterOperation::SetLightBar(long fighterIndex, unsigned char r, unsigned char g, unsigned char b); // 0x14022E290
class FighterOperation::ReverseOperationMapper
{
private:
	std::bitset<16> channels[11]; // 0x0
	static GameOperations::OperationSourceChannel convertMapKey(FighterOperationMapper::MapKey);
public:
	ReverseOperationMapper();
	FighterOperation::ReverseOperationMapper & assign(const FighterOperationMapper &);
	std::bitset<16> operator[](GameOperations::FighterOpSpec);
};
class FighterOperation::ReverseOperationKeyboardMapper
{
private:
	std::bitset<256> channels[11]; // 0x0
public:
	ReverseOperationKeyboardMapper();
	FighterOperation::ReverseOperationKeyboardMapper & assign(const FighterOperationKeyboardMapper &);
	std::bitset<256> operator[](GameOperations::FighterOpSpec);
};
const FighterOperation::ReverseOperationKeyboardMapper & FighterOperation::getReverseKeyboardMapper(long fighterIndex); // 0x1400D9890
class FighterOperation::FighterOperationAssignListener :
	protected FighterOperation::ListenerNode
{
public:
	FighterOperationAssignListener();
private:
	FighterOperationAssignListener(const FighterOperation::FighterOperationAssignListener &);
	FighterOperation::FighterOperationAssignListener & operator=(const FighterOperation::FighterOperationAssignListener &);
public:
	~FighterOperationAssignListener();
	void OnFighterOperationAssignChanged(long, long, long);
};
struct FighterOperation::Slot
{
	long userIndex; // 0x0
	long userId; // 0x4
	FighterOperationMapper operationMapper; // 0x8
	FighterOperation::ReverseOperationMapper reverseMapper; // 0x30
	FighterOperationKeyboardMapper operationKeyboardMapper; // 0x5C
	FighterOperation::ReverseOperationKeyboardMapper reverseKeyboardMapper; // 0x460
	bool bInvalidVibration; // 0x5C0
	Slot();
};
FighterOperation::Slot::Slot(); // 0x1400D98C0
class UserGameOperation :
	GameOperations
{
private:
	UserGameOperation();
	UserGameOperation(const UserGameOperation &);
	UserGameOperation & operator=(const UserGameOperation &);
public:
	static UserGameOperation & Instance();
	~UserGameOperation();
	enum REPEAT_PERIOD_DEFAULT : long long
	{
		RepeatPeriod_Initial_Default = 512,
		RepeatPeriod_Final_Default = 96,
	};
	static const long Max_Multi_User; // 0xFFFFFFFFFFFFFFFF
	enum PseudoUserIndex
	{
		PseudoUser_Any = -2147483648,
		PseudoUser_Network_Local = -2147483647,
		PseudoUser_NetWork_Remote = -2147483646,
	};
	enum TestPolicy
	{
		Test_Stable = 0,
		Test_OnEdge = 1,
		Test_Repeat = 2,
	};
	static bool Test(long, GameOperations::GameOpSpec, UserGameOperation::TestPolicy);
	static bool TestAnyUser(GameOperations::GameOpSpec, UserGameOperation::TestPolicy);
	static bool TestAnyUserNoRepeat(GameOperations::GameOpSpec);
	static bool IsValidUserIndex(long);
	void setRepeatPeriodInitial(long long);
	static void SetRepeatPeriodInitial(long long);
	void setRepeatPeriodFinal(long long);
	static void SetRepeatPeriodFinal(long long);
	void update();
	bool test(long, GameOperations::GameOpSpec, UserGameOperation::TestPolicy, bool, bool *);
	bool testInvert(long, GameOperations::GameOpSpec, UserGameOperation::TestPolicy, bool, bool *);
	bool testGamepad(long, GameOperations::GameOpSpec, UserGameOperation::TestPolicy);
	bool testKeyboard(long, GameOperations::GameOpSpec, UserGameOperation::TestPolicy);
	bool testUpDownEvent(long, GameOperations::GameOpSpec, bool, bool, bool, bool *);
	long checkUser(GameOperations::GameOpSpec);
	bool testFighter(long, GameOperations::GameOpSpec, UserGameOperation::TestPolicy);
	bool testFighter(long, const FighterOperation::ReverseOperationMapper &, GameOperations::FighterOpSpec, UserGameOperation::TestPolicy);
	bool testFighter(long, const FighterOperation::ReverseOperationMapper &, GameOperations::FighterOpSpec);
	bool testFighterKeyboard(long, const FighterOperation::ReverseOperationKeyboardMapper &, GameOperations::FighterOpSpec, UserGameOperation::TestPolicy);
	bool testFighterKeyboard(long, const FighterOperation::ReverseOperationKeyboardMapper &, GameOperations::FighterOpSpec);
	void lockKeyboard(bool);
	static bool TestFighter(long, GameOperations::GameOpSpec, UserGameOperation::TestPolicy);
	static void LockKeyboard(bool);
	void clear();
	void SetButtonConfig(std::bitset<16> *);
	void SetKeyboardButtonConfig(std::bitset<16> *);
	void SetDummy(long, long);
	bool GetDummy(long);
	void setVibration(long, double, unsigned char, unsigned char);
	static void SetVibration(long, double, unsigned char, unsigned char);
	void stopVibration(long);
	static void StopVibration(long);
	void stopVibrationAll();
	static void StopVibrationAll();
	long getUserColor(long);
	static long GetUserColor(long);
	void setLightBar(long, unsigned char, unsigned char, unsigned char);
	static void SetLightBar(long, unsigned char, unsigned char, unsigned char);
	void resetLightBar(long);
	static void ResetLightBar(long);
	void resetLightBarAll();
	static void ResetLightBarAll();
	void getUserName(long, char *, unsigned long long);
	static void GetUserName(long, char *, unsigned long long);
	enum LegacyCtrl
	{
		ERROR = 0,
		SUCCESS = 1,
		ALREADY = 2,
	};
	static UserGameOperation::LegacyCtrl SetupLegacyStick(long);
	static bool IsAlreadyConectLegacyStick(long);
	struct OperationSource;
	struct AGKeyboardOperationSource;
	struct UserSlot;
private:
	const UserGameOperation::UserSlot * getUserSlot(long);
	UserGameOperation::UserSlot * getUserSlot(long);
	UserGameOperation::UserSlot * getControllerSlot(long);
	UserGameOperation::UserSlot m_slots[4]; // 0x0
	UserGameOperation::UserSlot m_anyUserSlot; // 0x9A0
	UserGameOperation::UserSlot m_emptyUserSlot; // 0xC08
	long long m_lastTime; // 0xE70
	std::bitset<16> m_ButtonConfig[27]; // 0xE78
	std::bitset<256> m_KeyboardButtonConfig[27]; // 0xEE8
	std::bitset<256> m_2pKeyboardButtonConfig[27]; // 0x1248
	bool m_keyboardLocked; // 0x15A8
};
enum UserGameOperation::TestPolicy
{
	Test_Stable = 0,
	Test_OnEdge = 1,
	Test_Repeat = 2,
};
bool UserGameOperation::Test(long userIndex, GameOperations::GameOpSpec op, UserGameOperation::TestPolicy testPolicy); // 0x14002E920
bool UserGameOperation::TestFighter(long userIndex, GameOperations::GameOpSpec op, UserGameOperation::TestPolicy testPolicy); // 0x1401B1170
struct UserGameOperation::OperationSource
{
	float channels[16]; // 0x0
	void clear();
	void merge(const UserGameOperation::OperationSource &);
	bool readCurrent(long, long);
	float operator[](GameOperations::OperationSourceChannel);
	float & operator[](GameOperations::OperationSourceChannel);
};
struct UserGameOperation::AGKeyboardOperationSource
{
	std::bitset<256> channels; // 0x0
	void clear();
	void merge(const UserGameOperation::AGKeyboardOperationSource &);
	bool readCurrent();
	AGKeyboardOperationSource();
};
struct UserGameOperation::UserSlot
{
	enum RepeatTimerSrc
	{
		RepeatTimerSrc_Dirs = 15,
		RepeatTimerSrc_GamePad_Shoulder1 = 48,
		RepeatTimerSrc_GamePad_Shoulder2 = 192,
		RepeatTimerSrc_Button_Square = 256,
		RepeatTimerSrc_Button_Cross = 512,
		RepeatTimerSrc_Button_Circle = 1024,
		RepeatTimerSrc_Button_Triangle = 2048,
		RepeatTimerSrc_Button_Start = 4096,
		RepeatTimerSrc_TouchPad = 8192,
		RepeatTimerSrc_Button_LStick = 16384,
		RepeatTimerSrc_Button_RStick = 32768,
	};
	static const long Repeat_Timer_Count; // 0xFFFFFFFFFFFFFFFF
	static const long Keyboard_Repeat_Timer_Count; // 0xFFFFFFFFFFFFFFFF
	std::bitset<256> m_stableKeyboardChannels; // 0x0
	std::bitset<256> m_invertStableKeyboardChannels; // 0x20
	std::bitset<256> m_pressedEventKeyboardChannels; // 0x40
	std::bitset<256> m_releasedEventKeyboardChannels; // 0x60
	std::bitset<256> m_repeatPressedEventKeyboardChannels; // 0x80
	std::bitset<256> m_repeatReleasedEventKeyboardChannels; // 0xA0
	std::bitset<256> m_pressedKeyboardEventEnabledMask; // 0xC0
	long long m_keyboardRepeatTimer[11]; // 0xE0
	long long m_keyboardRepeatInterval[11]; // 0x138
	std::bitset<16> m_stableChannels; // 0x190
	std::bitset<16> m_invertStableChannels; // 0x194
	std::bitset<16> m_pressedEventChannels; // 0x198
	std::bitset<16> m_releasedEventChannels; // 0x19C
	std::bitset<16> m_repeatPressedEventChannels; // 0x1A0
	std::bitset<16> m_repeatReleasedEventChannels; // 0x1A4
	std::bitset<16> m_pressedEventEnabledMask; // 0x1A8
	long long m_repeatTimer[11]; // 0x1B0
	long long m_repeatInterval[11]; // 0x208
	long m_dummyMode; // 0x260
	static const std::bitset<16> s_repeatTimerSourceTable[0]; // 0xFFFFFFFFFFFFFFFF
	static bool s_keyboardRepeatTimerInit; // 0xFFFFFFFFFFFFFFFF
	static std::bitset<256> s_keyboardRepeatTimerSourceTable[0]; // 0xFFFFFFFFFFFFFFFF
	UserSlot();
	void update(const UserGameOperation::OperationSource &, bool, long long);
	void clear();
	void updateKeyboard(const UserGameOperation::AGKeyboardOperationSource &, bool, long long);
	bool testKeyboard(const std::bitset<256> &, UserGameOperation::TestPolicy);
	bool testKeyboardInvert(const std::bitset<256> &, UserGameOperation::TestPolicy);
	bool test(std::bitset<16> &, UserGameOperation::TestPolicy);
	bool testInvert(std::bitset<16> &, UserGameOperation::TestPolicy);
};