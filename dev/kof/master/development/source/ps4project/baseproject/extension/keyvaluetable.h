#pragma once

class extension::KeyValueTable
{
public:
	KeyValueTable();
private:
	KeyValueTable(const extension::KeyValueTable &);
	extension::KeyValueTable & operator=(const extension::KeyValueTable &);
public:
	~KeyValueTable();
	enum DataType
	{
		DataType_None = 0,
		DataType_Double = 1,
		DataType_Integer = 2,
		DataType_String = 3,
		DataType_Table = 4,
	};
	void erase(const std::string &);
	void setDouble(const std::string &, double);
	void setInteger(const std::string &, long long);
	void setInt(const std::string &, long);
	void setString(const std::string &, const std::string &);
	void setString(const std::string &, const char *);
	extension::KeyValueTable & createSubTable(const std::string &);
	bool isEmpty();
	bool isBad();
	extension::KeyValueTable::DataType getValueType(const std::string &);
	bool hasValue(const std::string &);
	double getDouble(const std::string &);
	long long getInteger(const std::string &);
	long getInt(const std::string &);
	std::string getString(const std::string &);
	const extension::KeyValueTable & getSubTable(const std::string &);
	std::string serialize();
	void deserialize(const std::string &);
	class AnyValue;
	class Table_t;
private:
	static void WriteTable(std::basic_ostream<char,std::char_traits<char> > &, const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::KeyValueTable::AnyValue,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::KeyValueTable::AnyValue> > > &);
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::KeyValueTable::AnyValue,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::KeyValueTable::AnyValue> > > ReadTable(std::basic_istream<char,std::char_traits<char> > &);
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::KeyValueTable::AnyValue,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::KeyValueTable::AnyValue> > > m_data; // 0x0
	bool m_isBad; // 0x40
	static const extension::KeyValueTable s_emptyTable; // 0xFFFFFFFFFFFFFFFF
};
bool extension::KeyValueTable::hasValue(const std::string & k); // 0x140102350
long extension::KeyValueTable::getInt(const std::string & k); // 0x140102390
AiLevelSpec extension::KeyValueTable::getEnum<enum AiLevelSpec,5>(const std::string & k, const std::pair<char const *,enum AiLevelSpec>[20] & table, AiLevelSpec defaultValue); // 0x14011B320
LANGUAGE_MODE extension::KeyValueTable::getEnum<enum LANGUAGE_MODE,13>(const std::string & k, const std::pair<char const *,enum LANGUAGE_MODE>[52] & table, LANGUAGE_MODE defaultValue); // 0x14011B230
FighterOperationMapper::Mapped extension::KeyValueTable::getEnum<enum FighterOperationMapper::Mapped,18>(const std::string & k, const std::pair<char const *,enum FighterOperationMapper::Mapped>[72] & table, FighterOperationMapper::Mapped defaultValue); // 0x14011B410
class extension::KeyValueTable::AnyValue
{
private:
	extension::KeyValueTable::DataType m_dataType; // 0x0
	double m_double; // 0x8
	long long m_integer; // 0x8
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_string; // 0x8
	extension::KeyValueTable * m_table; // 0x8
public:
	AnyValue(extension::KeyValueTable::AnyValue &);
	AnyValue();
	AnyValue(const extension::KeyValueTable::AnyValue &);
	extension::KeyValueTable::AnyValue & operator=(const extension::KeyValueTable::AnyValue &);
	~AnyValue();
	void clear();
	void set(const std::string &);
	void set(long long);
	void set(double);
	extension::KeyValueTable & createTable();
	extension::KeyValueTable::DataType getValueType();
	double getDouble();
	long long getInteger();
	std::string getString();
	const extension::KeyValueTable & getTable();
};
class std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::KeyValueTable::AnyValue,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::KeyValueTable::AnyValue> > > :
	std::_Hash<std::_Umap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::KeyValueTable::AnyValue,std::_Uhash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::KeyValueTable::AnyValue> >,0> >
{
	class _Myt;
	class _Mytraits;
	class _Mybase;
	struct hasher;
	class key_type;
	class mapped_type;
	struct key_equal;
	class key_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::KeyValueTable::AnyValue> pointer;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::KeyValueTable::AnyValue> const_pointer;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::KeyValueTable::AnyValue> reference;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::KeyValueTable::AnyValue> const_reference;
	class iterator;
	class const_iterator;
	struct value_type;
	class local_iterator;
	class const_local_iterator;
	struct _Alty;
	struct _Pairib;
public:
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::KeyValueTable::AnyValue,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<cha(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::KeyValueTable::AnyValue> >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::KeyValueTable::AnyValue> > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::KeyValueTable::AnyValue,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<cha(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::KeyValueTable::AnyValue> >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::KeyValueTable::AnyValue,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<cha(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::KeyValueTable::AnyValue> >, unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::KeyValueTable::AnyValue,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<cha(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::KeyValueTable::AnyValue> >, unsigned long long);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::KeyValueTable::AnyValue,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<cha(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::KeyValueTable::AnyValue> >);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::KeyValueTable::AnyValue,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<cha(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::KeyValueTable::AnyValue,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::KeyValueTable::AnyValue> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::KeyValueTable::AnyValue> > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::KeyValueTable::AnyValue,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<cha(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::KeyValueTable::AnyValue,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::KeyValueTable::AnyValue> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::KeyValueTable::AnyValue,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<cha(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::KeyValueTable::AnyValue> > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::KeyValueTable::AnyValue,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<cha(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::KeyValueTable::AnyValue,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<cha(unsigned long long, const std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::KeyValueTable::AnyValue,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<cha(unsigned long long);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::KeyValueTable::AnyValue,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<cha(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::KeyValueTable::AnyValue,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::KeyValueTable::AnyValue> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::KeyValueTable::AnyValue> > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::KeyValueTable::AnyValue,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<cha(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::KeyValueTable::AnyValue,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::KeyValueTable::AnyValue> > > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::KeyValueTable::AnyValue,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<cha(const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::KeyValueTable::AnyValue> > &);
	unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::KeyValueTable::AnyValue,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<cha();
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::KeyValueTable::AnyValue,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::KeyValueTable::AnyValue> > > & operator=(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::KeyValueTable::AnyValue> >);
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::KeyValueTable::AnyValue,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::KeyValueTable::AnyValue> > > & operator=(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::KeyValueTable::AnyValue,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::KeyValueTable::AnyValue> > > &);
	std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::KeyValueTable::AnyValue,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::KeyValueTable::AnyValue> > > & operator=(const std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::KeyValueTable::AnyValue,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::KeyValueTable::AnyValue> > > &);
	extension::KeyValueTable::AnyValue & operator[](const std::string &);
	extension::KeyValueTable::AnyValue & operator[](std::string &);
	void swap(std::unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::KeyValueTable::AnyValue,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::KeyValueTable::AnyValue> > > &);
	std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > hash_function();
	std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > key_eq();
	const extension::KeyValueTable::AnyValue & at(const std::string &);
	extension::KeyValueTable::AnyValue & at(const std::string &);
	~unordered_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::KeyValueTable::AnyValue,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::equal_to<std::basic_string<char,std::char_traits<ch();
};