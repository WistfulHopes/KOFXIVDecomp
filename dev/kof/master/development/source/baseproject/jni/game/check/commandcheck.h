#pragma once

enum PAD_INPUT_KEY
{
	KC_LEFT = 1,
	KC_RIGHT = 2,
	KC_UP = 4,
	KC_DOWN = 8,
	KC_LP = 16,
	KC_LK = 32,
	KC_HP = 64,
	KC_HK = 128,
	KC_LEVER_MASK = 15,
	KC_BUTTON_MASK = 240,
};
struct InputKeyData
{
	long iKeyPress; // 0x0
	long iKeyTrigger; // 0x4
	long iKeyRelease; // 0x8
};
class InputKeyCheck
{
private:
	std::unique_ptr<RestrictRingBuffer<int>,std::default_delete<RestrictRingBuffer<int> > > pKeyBuffer; // 0x0
	enum <unnamed-enum-KEY_BUFFER_SIZE>
	{
		KEY_BUFFER_SIZE = 12,
		DEFAULT_DELAY = 0,
	};
public:
	InputKeyCheck();
	~InputKeyCheck();
	void ClearBuffer();
	void AddKey(const long);
	void SetDelayFrame(unsigned long);
	unsigned long GetDelayFrame();
	long GetKey(unsigned long);
	long GetTrigger(unsigned long);
	long GetRelease(unsigned long);
	InputKeyData GetKeySet(unsigned long);
};
class std::unique_ptr<RestrictRingBuffer<int>,std::default_delete<RestrictRingBuffer<int> > > :
	std::_Unique_ptr_base<RestrictRingBuffer<int>,std::default_delete<RestrictRingBuffer<int> > >
{
	class _Myt;
	class _Mybase;
	typedef RestrictRingBuffer<int> pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<RestrictRingBuffer<int>,std::default_delete<RestrictRingBuffer<int> > >(const std::unique_ptr<RestrictRingBuffer<int>,std::default_delete<RestrictRingBuffer<int> > > &);
	unique_ptr<RestrictRingBuffer<int>,std::default_delete<RestrictRingBuffer<int> > >(std::unique_ptr<RestrictRingBuffer<int>,std::default_delete<RestrictRingBuffer<int> > > &);
	unique_ptr<RestrictRingBuffer<int>,std::default_delete<RestrictRingBuffer<int> > >(RestrictRingBuffer<int> *, std::default_delete<RestrictRingBuffer<int> > &);
	unique_ptr<RestrictRingBuffer<int>,std::default_delete<RestrictRingBuffer<int> > >(RestrictRingBuffer<int> *, const std::default_delete<RestrictRingBuffer<int> > &);
	unique_ptr<RestrictRingBuffer<int>,std::default_delete<RestrictRingBuffer<int> > >(RestrictRingBuffer<int> *);
	unique_ptr<RestrictRingBuffer<int>,std::default_delete<RestrictRingBuffer<int> > >(void *);
	unique_ptr<RestrictRingBuffer<int>,std::default_delete<RestrictRingBuffer<int> > >();
	std::unique_ptr<RestrictRingBuffer<int>,std::default_delete<RestrictRingBuffer<int> > > & operator=(const std::unique_ptr<RestrictRingBuffer<int>,std::default_delete<RestrictRingBuffer<int> > > &);
	std::unique_ptr<RestrictRingBuffer<int>,std::default_delete<RestrictRingBuffer<int> > > & operator=(std::unique_ptr<RestrictRingBuffer<int>,std::default_delete<RestrictRingBuffer<int> > > &);
	std::unique_ptr<RestrictRingBuffer<int>,std::default_delete<RestrictRingBuffer<int> > > & operator=(void *);
	void swap(std::unique_ptr<RestrictRingBuffer<int>,std::default_delete<RestrictRingBuffer<int> > > &);
	~unique_ptr<RestrictRingBuffer<int>,std::default_delete<RestrictRingBuffer<int> > >();
	RestrictRingBuffer<int> & operator*();
	RestrictRingBuffer<int> * operator->();
	RestrictRingBuffer<int> * get();
	bool operator bool();
	RestrictRingBuffer<int> * release();
	void reset(RestrictRingBuffer<int> *);
};
class RestrictRingBuffer<int>
{
private:
	RestrictRingBuffer<int> & operator=(const RestrictRingBuffer<int> &);
	unsigned long uiBufferSize; // 0x8
	unsigned long uiBufferMask; // 0xC
	unsigned long uiDataSize; // 0x10
	long * pBuffer; // 0x18
	unsigned long uiBeginIndex; // 0x20
	unsigned long uiEndIndex; // 0x24
	unsigned long uiDelay; // 0x28
public:
	RestrictRingBuffer<int>(const RestrictRingBuffer<int> &);
	RestrictRingBuffer<int>(unsigned long);
	~RestrictRingBuffer<int>();
	void Clear();
	void Add(const long &);
	void SetDelay(unsigned long);
	long * Get(unsigned long);
	long * GetRev(unsigned long);
	long * GetBegin();
	long * GetEnd();
	long * GetDelayRev(unsigned long);
	bool IsEmpty();
	bool IsFull();
	unsigned long GetBufferSize();
	unsigned long GetDataSize();
	unsigned long GetValidDelayDataSize();
	unsigned long GetDelay();
};
InputKeyCheck::InputKeyCheck(); // 0x140098300
class CommandEventListener
{
public:
	CommandEventListener(const CommandEventListener &);
	CommandEventListener();
	~CommandEventListener();
	void RecvCommandEvent(long, long, const CommandData::Setting &, long, long);
	CommandEventListener & operator=(const CommandEventListener &);
};
CommandEventListener::~CommandEventListener(); // 0x1400B9670
class CommandCheck
{
	enum <unnamed-enum-DEFAULT_WAIT_FRAME>
	{
		DEFAULT_WAIT_FRAME = 6,
		PRESS_EXTEND_FRAME = 10,
		SAME_TIME_TRIGGER_DELAY = 2,
		DEFAULT_PRECEDE_FRAME = 2,
	};
	struct CommandSettingMapData;
private:
	const CommandData * pCmdDat; // 0x0
	InputKeyCheck * pKeyBuf; // 0x8
	long iCommandDataTag; // 0x10
	bool bClimaxDebug; // 0x14
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CommandCheck::CommandSettingMapData,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CommandCheck::CommandSettingMapData> > > cmdSetMap; // 0x18
	static const long ciCommandGroupPriority[27]; // 0xFFFFFFFFFFFFFFFF
	bool IsSameMatch(long);
	long SameTimeTrigger(unsigned long);
	long SameTimeRelease(unsigned long);
	bool Match(const CommandData::KeyData &, unsigned long, long);
	bool MatchSub(long, long, bool, bool);
	bool IsValidCommand(const CommandData::Setting &, long, long, long, long &, long &);
	bool _chargeCmdCheck(const CommandData::KeyData &, unsigned long &, long);
	bool IsClimaxDebugCommand(const CommandData::Setting &);
public:
	CommandCheck(const CommandCheck &);
	CommandCheck();
	~CommandCheck();
	void Init(long, const CommandData *, InputKeyCheck *);
	void Dispose();
	bool IsDataExist();
	void CheckAll(void(*)(long, long, const CommandData::Setting &, long, long), long, long, long);
	void CheckAll(CommandEventListener &, long, long, long);
	const CommandData::Setting * ValidCommandFromName(CommandEventListener &, const std::string);
	const CommandData::Setting * ValidCommandFromIndex(CommandEventListener &, long);
	const CommandData::Setting * GetCommandSettingFromName(const std::string);
	const CommandData::Setting * GetCommandSettingFromIndex(long);
	const CommandData::AiCommandInfo * GetAiCommandInfoFromIndex(long);
	void ClearBuffer();
	long GetKey(unsigned long);
	long GetTrigger(unsigned long);
	long GetRelease(unsigned long);
	static long ConvertCmdToInp(const long);
	static long ConvertInpToCmd(const long);
	static long ReverseCmd(const long);
	static long ReverseInp(const long);
	void SetClimaxDebug(bool);
	bool IsClimaxDebugEnable();
	static long GetGroupPriority(long);
	static long CompGroupPriority(const CommandData::Setting &, const CommandData::Setting &);
	CommandCheck & operator=(const CommandCheck &);
};
struct CommandCheck::CommandSettingMapData
{
	long id; // 0x0
	const CommandData::Setting * pSetting; // 0x8
};
class std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CommandCheck::CommandSettingMapData,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CommandCheck::CommandSettingMapData> > > :
	std::_Hash<std::_Umap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CommandCheck::CommandSettingMapData,std::_Uhash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CommandCheck::CommandSettingMapData> >,0> >
{
	class _Myt;
	class _Mytraits;
	class _Mybase;
	struct hasher;
	class key_type;
	struct mapped_type;
	struct key_equal;
	class key_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CommandCheck::CommandSettingMapData> pointer;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CommandCheck::CommandSettingMapData> const_pointer;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CommandCheck::CommandSettingMapData> reference;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CommandCheck::CommandSettingMapData> const_reference;
	class iterator;
	class const_iterator;
	struct value_type;
	class local_iterator;
	class const_local_iterator;
	struct _Alty;
	struct _Pairib;
public:
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CommandCheck::CommandSettingMapData,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<ch(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CommandCheck::CommandSettingMapData> >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CommandCheck::CommandSettingMapData> > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CommandCheck::CommandSettingMapData,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<ch(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CommandCheck::CommandSettingMapData> >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CommandCheck::CommandSettingMapData,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<ch(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CommandCheck::CommandSettingMapData> >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CommandCheck::CommandSettingMapData,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<ch(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CommandCheck::CommandSettingMapData> >, unsigned long long);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CommandCheck::CommandSettingMapData,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<ch(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CommandCheck::CommandSettingMapData> >);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CommandCheck::CommandSettingMapData,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<ch(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CommandCheck::CommandSettingMapData,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CommandCheck::CommandSettingMapData> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CommandCheck::CommandSettingMapData> > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CommandCheck::CommandSettingMapData,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<ch(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CommandCheck::CommandSettingMapData,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CommandCheck::CommandSettingMapData> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CommandCheck::CommandSettingMapData,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<ch(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CommandCheck::CommandSettingMapData> > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CommandCheck::CommandSettingMapData,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<ch(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CommandCheck::CommandSettingMapData,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<ch(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CommandCheck::CommandSettingMapData,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<ch(unsigned long long);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CommandCheck::CommandSettingMapData,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<ch(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CommandCheck::CommandSettingMapData,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CommandCheck::CommandSettingMapData> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CommandCheck::CommandSettingMapData> > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CommandCheck::CommandSettingMapData,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<ch(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CommandCheck::CommandSettingMapData,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CommandCheck::CommandSettingMapData> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CommandCheck::CommandSettingMapData,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<ch(const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CommandCheck::CommandSettingMapData> > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CommandCheck::CommandSettingMapData,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<ch();
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CommandCheck::CommandSettingMapData,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CommandCheck::CommandSettingMapData> > > & operator=(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CommandCheck::CommandSettingMapData> >);
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CommandCheck::CommandSettingMapData,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CommandCheck::CommandSettingMapData> > > & operator=(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CommandCheck::CommandSettingMapData,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CommandCheck::CommandSettingMapData> > > &);
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CommandCheck::CommandSettingMapData,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CommandCheck::CommandSettingMapData> > > & operator=(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CommandCheck::CommandSettingMapData,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CommandCheck::CommandSettingMapData> > > &);
	CommandCheck::CommandSettingMapData & operator[](const std::string &);
	CommandCheck::CommandSettingMapData & operator[](std::string &);
	void swap(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CommandCheck::CommandSettingMapData,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CommandCheck::CommandSettingMapData> > > &);
	std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > hash_function();
	std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > key_eq();
	const CommandCheck::CommandSettingMapData & at(const std::string &);
	CommandCheck::CommandSettingMapData & at(const std::string &);
	~unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CommandCheck::CommandSettingMapData,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<c();
};
CommandCheck::CommandCheck(); // 0x1400B96B0
CommandCheck::~CommandCheck(); // 0x1400B96E0
class InputKeyHistory
{
	struct History;
private:
	std::unique_ptr<RestrictRingBuffer<InputKeyHistory::History>,std::default_delete<RestrictRingBuffer<InputKeyHistory::History> > > pKeyHistory; // 0x0
	enum <unnamed-enum-KEY_BUFFER_SIZE>
	{
		KEY_BUFFER_SIZE = 8,
	};
public:
	InputKeyHistory();
	~InputKeyHistory();
	void Clear();
	void AddKey(const long);
	InputKeyHistory::History * GetKey(unsigned long);
};
struct InputKeyHistory::History
{
	long iKey; // 0x0
	long iCount; // 0x4
};
class RestrictRingBuffer<InputKeyHistory::History>
{
private:
	RestrictRingBuffer<InputKeyHistory::History> & operator=(const RestrictRingBuffer<InputKeyHistory::History> &);
	unsigned long uiBufferSize; // 0x8
	unsigned long uiBufferMask; // 0xC
	unsigned long uiDataSize; // 0x10
	InputKeyHistory::History * pBuffer; // 0x18
	unsigned long uiBeginIndex; // 0x20
	unsigned long uiEndIndex; // 0x24
	unsigned long uiDelay; // 0x28
public:
	RestrictRingBuffer<InputKeyHistory::History>(const RestrictRingBuffer<InputKeyHistory::History> &);
	RestrictRingBuffer<InputKeyHistory::History>(unsigned long);
	~RestrictRingBuffer<InputKeyHistory::History>();
	void Clear();
	void Add(const InputKeyHistory::History &);
	void SetDelay(unsigned long);
	InputKeyHistory::History * Get(unsigned long);
	InputKeyHistory::History * GetRev(unsigned long);
	InputKeyHistory::History * GetBegin();
	InputKeyHistory::History * GetEnd();
	InputKeyHistory::History * GetDelayRev(unsigned long);
	bool IsEmpty();
	bool IsFull();
	unsigned long GetBufferSize();
	unsigned long GetDataSize();
	unsigned long GetValidDelayDataSize();
	unsigned long GetDelay();
};
class std::unique_ptr<RestrictRingBuffer<InputKeyHistory::History>,std::default_delete<RestrictRingBuffer<InputKeyHistory::History> > > :
	std::_Unique_ptr_base<RestrictRingBuffer<InputKeyHistory::History>,std::default_delete<RestrictRingBuffer<InputKeyHistory::History> > >
{
	class _Myt;
	class _Mybase;
	typedef RestrictRingBuffer<InputKeyHistory::History> pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<RestrictRingBuffer<InputKeyHistory::History>,std::default_delete<RestrictRingBuffer<InputKeyHistory::History> > >(const std::unique_ptr<RestrictRingBuffer<InputKeyHistory::History>,std::default_delete<RestrictRingBuffer<InputKeyHistory::History> > > &);
	unique_ptr<RestrictRingBuffer<InputKeyHistory::History>,std::default_delete<RestrictRingBuffer<InputKeyHistory::History> > >(std::unique_ptr<RestrictRingBuffer<InputKeyHistory::History>,std::default_delete<RestrictRingBuffer<InputKeyHistory::History> > > &);
	unique_ptr<RestrictRingBuffer<InputKeyHistory::History>,std::default_delete<RestrictRingBuffer<InputKeyHistory::History> > >(RestrictRingBuffer<InputKeyHistory::History> *, std::default_delete<RestrictRingBuffer<InputKeyHistory::History> > &);
	unique_ptr<RestrictRingBuffer<InputKeyHistory::History>,std::default_delete<RestrictRingBuffer<InputKeyHistory::History> > >(RestrictRingBuffer<InputKeyHistory::History> *, const std::default_delete<RestrictRingBuffer<InputKeyHistory::History> > &);
	unique_ptr<RestrictRingBuffer<InputKeyHistory::History>,std::default_delete<RestrictRingBuffer<InputKeyHistory::History> > >(RestrictRingBuffer<InputKeyHistory::History> *);
	unique_ptr<RestrictRingBuffer<InputKeyHistory::History>,std::default_delete<RestrictRingBuffer<InputKeyHistory::History> > >(void *);
	unique_ptr<RestrictRingBuffer<InputKeyHistory::History>,std::default_delete<RestrictRingBuffer<InputKeyHistory::History> > >();
	std::unique_ptr<RestrictRingBuffer<InputKeyHistory::History>,std::default_delete<RestrictRingBuffer<InputKeyHistory::History> > > & operator=(const std::unique_ptr<RestrictRingBuffer<InputKeyHistory::History>,std::default_delete<RestrictRingBuffer<InputKeyHistory::History> > > &);
	std::unique_ptr<RestrictRingBuffer<InputKeyHistory::History>,std::default_delete<RestrictRingBuffer<InputKeyHistory::History> > > & operator=(std::unique_ptr<RestrictRingBuffer<InputKeyHistory::History>,std::default_delete<RestrictRingBuffer<InputKeyHistory::History> > > &);
	std::unique_ptr<RestrictRingBuffer<InputKeyHistory::History>,std::default_delete<RestrictRingBuffer<InputKeyHistory::History> > > & operator=(void *);
	void swap(std::unique_ptr<RestrictRingBuffer<InputKeyHistory::History>,std::default_delete<RestrictRingBuffer<InputKeyHistory::History> > > &);
	~unique_ptr<RestrictRingBuffer<InputKeyHistory::History>,std::default_delete<RestrictRingBuffer<InputKeyHistory::History> > >();
	RestrictRingBuffer<InputKeyHistory::History> & operator*();
	RestrictRingBuffer<InputKeyHistory::History> * operator->();
	RestrictRingBuffer<InputKeyHistory::History> * get();
	bool operator bool();
	RestrictRingBuffer<InputKeyHistory::History> * release();
	void reset(RestrictRingBuffer<InputKeyHistory::History> *);
};
InputKeyHistory::InputKeyHistory(); // 0x1400983D0
std::unique_ptr<RestrictRingBuffer<int>,std::default_delete<RestrictRingBuffer<int> > >::~unique_ptr<RestrictRingBuffer<int>,std::default_delete<RestrictRingBuffer<int> > >(); // 0x1400983B0