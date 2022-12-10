#pragma once

class extension::TranslateTable
{
private:
	TranslateTable();
	TranslateTable(const extension::TranslateTable &);
	extension::TranslateTable & operator=(const extension::TranslateTable &);
public:
	~TranslateTable();
	static extension::TranslateTable & Instance();
	static const char * GetText(const char *, LANGUAGE_MODE);
	static const char * GetText(const char *);
	static LANGUAGE_MODE GetSaveDataLanguage();
	static void setUseKBTexts(bool);
	const char * getText(const char *, LANGUAGE_MODE);
	const char * searchText(const char *, LANGUAGE_MODE);
	static void UnescapeSpecialHTML(char *, const char *);
	void setLuaContext(const extension::SharedLuaContext &, bool);
	bool isOpen();
	void loadStart(const char *);
	bool isReady();
	const char * getSaveDataLangCodeName();
	class LuaLib;
private:
	void clearTable();
	bool installLoadedData();
	void install(const extension::AsyncFileImage &);
	const char * executeTranslate(const char *, const char *);
	bool LuaTranslateString(lua_State *, long, const char *);
	static bool s_useKBTexts; // 0xFFFFFFFFFFFFFFFF
	extension::SharedLuaContext m_luaContext; // 0x0
	std::deque<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > m_loadingChunks; // 0x18
};
class std::deque<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > :
	std::_Deque_alloc<std::_Deque_base_types<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct _Alpty;
	typedef extension::BasicFutureObject<extension::AsyncFileImage,void> * _Mapptr;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef extension::BasicFutureObject<extension::AsyncFileImage,void> pointer;
	typedef const extension::BasicFutureObject<extension::AsyncFileImage,void> const_pointer;
	typedef extension::BasicFutureObject<extension::AsyncFileImage,void> reference;
	typedef const extension::BasicFutureObject<extension::AsyncFileImage,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	enum <unnamed-enum-_EEN_DS>
	{
		_EEN_DS = 1,
	};
public:
	deque<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > >(std::initializer_list<extension::BasicFutureObject<extension::AsyncFileImage,void> >, const std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > &);
	deque<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > >(std::deque<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > &, const std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > &);
	deque<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > >(std::deque<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > &);
	deque<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > >(const std::deque<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > &, const std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > &);
	deque<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > >(const std::deque<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > &);
	deque<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > >(unsigned long long, const extension::BasicFutureObject<extension::AsyncFileImage,void> &, const std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > &);
	deque<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > >(unsigned long long, const extension::BasicFutureObject<extension::AsyncFileImage,void> &);
	deque<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > >(unsigned long long);
	deque<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > >(const std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > &);
	deque<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > >();
	void _Construct_n(unsigned long long, const extension::BasicFutureObject<extension::AsyncFileImage,void> &);
	std::deque<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > & operator=(const std::deque<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > &);
	std::deque<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > & operator=(std::initializer_list<extension::BasicFutureObject<extension::AsyncFileImage,void> >);
	std::deque<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > & operator=(std::deque<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > &);
	void _Assign_rv(std::deque<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > &);
	void _Assign_rv(std::deque<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::deque<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > &, std::integral_constant<bool,1>);
	void push_front(const extension::BasicFutureObject<extension::AsyncFileImage,void> &);
	void push_front(extension::BasicFutureObject<extension::AsyncFileImage,void> &);
	void push_back(const extension::BasicFutureObject<extension::AsyncFileImage,void> &);
	void push_back(extension::BasicFutureObject<extension::AsyncFileImage,void> &);
	std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > insert(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > >, unsigned long long, const extension::BasicFutureObject<extension::AsyncFileImage,void> &);
	std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > insert(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > >, const extension::BasicFutureObject<extension::AsyncFileImage,void> &);
	std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > insert(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > >, std::initializer_list<extension::BasicFutureObject<extension::AsyncFileImage,void> >);
	std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > insert(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > >, extension::BasicFutureObject<extension::AsyncFileImage,void> &);
	void assign(unsigned long long, const extension::BasicFutureObject<extension::AsyncFileImage,void> &);
	void assign(std::initializer_list<extension::BasicFutureObject<extension::AsyncFileImage,void> >);
	~deque<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > >();
	std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > begin();
	std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > begin();
	std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > end();
	std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > end();
	std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > _Make_iter(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > >);
	std::reverse_iterator<std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > > rbegin();
	std::reverse_iterator<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > > rbegin();
	std::reverse_iterator<std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > > rend();
	std::reverse_iterator<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > > rend();
	std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > cbegin();
	std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > cend();
	std::reverse_iterator<std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > > crbegin();
	std::reverse_iterator<std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const extension::BasicFutureObject<extension::AsyncFileImage,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > get_allocator();
	extension::BasicFutureObject<extension::AsyncFileImage,void> & at(unsigned long long);
	const extension::BasicFutureObject<extension::AsyncFileImage,void> & at(unsigned long long);
	extension::BasicFutureObject<extension::AsyncFileImage,void> & operator[](unsigned long long);
	const extension::BasicFutureObject<extension::AsyncFileImage,void> & operator[](unsigned long long);
	const extension::BasicFutureObject<extension::AsyncFileImage,void> & front();
	extension::BasicFutureObject<extension::AsyncFileImage,void> & front();
	const extension::BasicFutureObject<extension::AsyncFileImage,void> & back();
	extension::BasicFutureObject<extension::AsyncFileImage,void> & back();
	void pop_front();
	void pop_back();
	std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > erase(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > >, std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > >);
	std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > erase(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > >);
	void clear();
	void swap(std::deque<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > &);
protected:
	void _Insert_n(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > >, unsigned long long, const extension::BasicFutureObject<extension::AsyncFileImage,void> &);
	void _Xlen();
	void _Xran();
	void _Growmap(unsigned long long);
	void _Tidy();
};