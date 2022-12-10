#pragma once

struct EffectListNodeData
{
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > id; // 0x0
	long index; // 0x20
	EffectData * effectData; // 0x28
	EffectListNodeData(EffectListNodeData &);
	EffectListNodeData(const EffectListNodeData &);
	EffectListNodeData();
	~EffectListNodeData();
	EffectListNodeData & operator=(EffectListNodeData &);
	EffectListNodeData & operator=(const EffectListNodeData &);
};
struct EffectDataList
{
	long category; // 0x0
	long subCategory; // 0x4
	std::vector<EffectListNodeData,StlAllocator<EffectListNodeData,&g_EffectHeap0> > effectDataList; // 0x8
	EffectDataList(EffectDataList &);
	EffectDataList(const EffectDataList &);
	EffectDataList();
	~EffectDataList();
	EffectDataList & operator=(EffectDataList &);
	EffectDataList & operator=(const EffectDataList &);
};
struct StlAllocator<EffectListNodeData,&g_EffectHeap0> :
	std::allocator<EffectListNodeData>
{
	StlAllocator<EffectListNodeData,&g_EffectHeap0>(const StlAllocator<EffectListNodeData,&g_EffectHeap0> &);
	StlAllocator<EffectListNodeData,&g_EffectHeap0>();
	EffectListNodeData * allocate(unsigned long long);
	void deallocate(EffectListNodeData *, unsigned long long);
	struct ?$rebind@UEffectListNodeData@@;
};
class std::vector<EffectListNodeData,StlAllocator<EffectListNodeData,&g_EffectHeap0> > :
	std::_Vector_alloc<std::_Vec_base_types<EffectListNodeData,StlAllocator<EffectListNodeData,&g_EffectHeap0> > >
{
	class _Myt;
	class _Mybase;
	struct allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef EffectListNodeData pointer;
	typedef const EffectListNodeData const_pointer;
	typedef EffectListNodeData reference;
	typedef const EffectListNodeData const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<EffectListNodeData,StlAllocator<EffectListNodeData,&g_EffectHeap0> >(std::initializer_list<EffectListNodeData>, const StlAllocator<EffectListNodeData,&g_EffectHeap0> &);
	vector<EffectListNodeData,StlAllocator<EffectListNodeData,&g_EffectHeap0> >(std::vector<EffectListNodeData,StlAllocator<EffectListNodeData,&g_EffectHeap0> > &, const StlAllocator<EffectListNodeData,&g_EffectHeap0> &);
	vector<EffectListNodeData,StlAllocator<EffectListNodeData,&g_EffectHeap0> >(std::vector<EffectListNodeData,StlAllocator<EffectListNodeData,&g_EffectHeap0> > &);
	vector<EffectListNodeData,StlAllocator<EffectListNodeData,&g_EffectHeap0> >(const std::vector<EffectListNodeData,StlAllocator<EffectListNodeData,&g_EffectHeap0> > &, const StlAllocator<EffectListNodeData,&g_EffectHeap0> &);
	vector<EffectListNodeData,StlAllocator<EffectListNodeData,&g_EffectHeap0> >(const std::vector<EffectListNodeData,StlAllocator<EffectListNodeData,&g_EffectHeap0> > &);
	vector<EffectListNodeData,StlAllocator<EffectListNodeData,&g_EffectHeap0> >(unsigned long long, const EffectListNodeData &, const StlAllocator<EffectListNodeData,&g_EffectHeap0> &);
	vector<EffectListNodeData,StlAllocator<EffectListNodeData,&g_EffectHeap0> >(unsigned long long, const EffectListNodeData &);
	vector<EffectListNodeData,StlAllocator<EffectListNodeData,&g_EffectHeap0> >(unsigned long long);
	vector<EffectListNodeData,StlAllocator<EffectListNodeData,&g_EffectHeap0> >(const StlAllocator<EffectListNodeData,&g_EffectHeap0> &);
	vector<EffectListNodeData,StlAllocator<EffectListNodeData,&g_EffectHeap0> >();
	void _Construct_n(unsigned long long, const EffectListNodeData *);
	std::vector<EffectListNodeData,StlAllocator<EffectListNodeData,&g_EffectHeap0> > & operator=(const std::vector<EffectListNodeData,StlAllocator<EffectListNodeData,&g_EffectHeap0> > &);
	std::vector<EffectListNodeData,StlAllocator<EffectListNodeData,&g_EffectHeap0> > & operator=(std::initializer_list<EffectListNodeData>);
	std::vector<EffectListNodeData,StlAllocator<EffectListNodeData,&g_EffectHeap0> > & operator=(std::vector<EffectListNodeData,StlAllocator<EffectListNodeData,&g_EffectHeap0> > &);
	void _Assign_rv(std::vector<EffectListNodeData,StlAllocator<EffectListNodeData,&g_EffectHeap0> > &);
	void _Assign_rv(std::vector<EffectListNodeData,StlAllocator<EffectListNodeData,&g_EffectHeap0> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<EffectListNodeData,StlAllocator<EffectListNodeData,&g_EffectHeap0> > &, std::integral_constant<bool,1>);
	void push_back(const EffectListNodeData &);
	void push_back(EffectListNodeData &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > >, unsigned long long, const EffectListNodeData &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > >, const EffectListNodeData &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > >, std::initializer_list<EffectListNodeData>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > >, EffectListNodeData &);
	void assign(unsigned long long, const EffectListNodeData &);
	void assign(std::initializer_list<EffectListNodeData>);
	~vector<EffectListNodeData,StlAllocator<EffectListNodeData,&g_EffectHeap0> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const EffectListNodeData &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	StlAllocator<EffectListNodeData,&g_EffectHeap0> get_allocator();
	EffectListNodeData & at(unsigned long long);
	const EffectListNodeData & at(unsigned long long);
	EffectListNodeData & operator[](unsigned long long);
	const EffectListNodeData & operator[](unsigned long long);
	const EffectListNodeData * data();
	EffectListNodeData * data();
	const EffectListNodeData & front();
	EffectListNodeData & front();
	const EffectListNodeData & back();
	EffectListNodeData & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<EffectListNodeData,StlAllocator<EffectListNodeData,&g_EffectHeap0> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(EffectListNodeData *, EffectListNodeData *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const EffectListNodeData *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > >, unsigned long long, const EffectListNodeData &);
	EffectListNodeData * _Ufill(EffectListNodeData *, unsigned long long, const EffectListNodeData *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(EffectListNodeData *, EffectListNodeData *);
};
struct EffectListNode
{
	long deleteMarginCount; // 0x0
	long index; // 0x4
	Effect * pEffect; // 0x8
	EffectListNode();
};
enum CharaIdType
{
	NAME_ID = 0,
	NUM_ID = 1,
};
class extension::BasicFutureObject<OGLCurve,void> :
	extension::AsyncContentConstants,
	extension::FutureObjectSpec
{
	class Content_t;
	class Body;
	class BodySharedPtr_t;
	class BodyWeakPtr_t;
private:
	bool m_isNoCache; // 0x1
	extension::RefCountablePtr<extension::BasicFutureObject<OGLCurve,void>::Body> m_body; // 0x8
public:
	BasicFutureObject<OGLCurve,void>(const extension::BasicFutureObject<OGLCurve,void> &);
	BasicFutureObject<OGLCurve,void>(extension::FutureObjectSpec::NoCache_t, const std::string &, const void *);
	BasicFutureObject<OGLCurve,void>(const std::string &, const void *);
	BasicFutureObject<OGLCurve,void>();
	~BasicFutureObject<OGLCurve,void>();
	extension::BasicFutureObject<OGLCurve,void> & operator=(const extension::BasicFutureObject<OGLCurve,void> &);
	bool isEmpty();
	bool isReady();
	void waitForReady();
	const OGLCurve * get();
	bool hasData();
	extension::AsyncContentConstants::ErrorCode getErrorCode();
	const char * getErrorString();
	void reset();
	void dispose();
	OGLCurve * releaseData();
	OGLCurve * operator->();
	OGLCurve & operator*();
	OGLCurve * operator class OGLCurve *const();
	std::string contentPath();
	static extension::BasicFutureObject<OGLCurve,void> MakeDataHolder(OGLCurve *);
	class AssetCache;
private:
	static extension::BasicFutureObject<OGLCurve,void>::AssetCache s_cacheManager; // 0xFFFFFFFFFFFFFFFF
};
class EffectDataListManager
{
public:
	EffectDataListManager(const EffectDataListManager &);
	EffectDataListManager();
	~EffectDataListManager();
	void recursiveDelEffect(Effect *);
	void recursiveDelEffectData(EffectData *);
	void terminate();
	void update();
	void clearEffectData();
	void clearEffect();
	void clearResourceData();
	bool isReady();
	bool loadEffectData(std::string);
	void loadRoundData();
	void singleDataLoad(std::string, std::basic_istream<char,std::char_traits<char> > *, long);
	void recursiveRenameResource(std::string, EffectData *);
	void recursiveRenameResourceCharaID(EffectData *);
	bool checkName(std::string *, EffectData *);
	bool checkRenameTexture(std::string *);
	void renameAddCharaIDBack(std::string *);
	bool checkChinaSupport(long);
	void addCharaIDBack(std::string *, long, long);
	void texDataLoad(std::string, std::string);
	void figureDataLoad(std::string, std::string, long);
	void figureDataLoadToGpu(std::string, std::string);
	long figureDataLoadToCpu(std::string, std::string);
	void curveDataLoad(std::string, std::string);
	void * getCpuFigure(long);
	long getIndex(std::string);
	long getIndexSize();
	long getIdSize(long);
	char * getId(long);
	Effect * createEffect(EffectData *, Effect *, Effect *);
	Effect * createEffect(std::string);
	Effect * createEffect(long);
	void recursiveLoadResource(std::string, EffectData *);
	std::string createFilePath(long, long, long);
	unsigned long getEffectIndexSize();
	long getDeleteTime(long);
	void setEffectSystem(EffectTaskManager *);
	void setBindModel(OGLModel *);
	OGLModel * getBindModel();
	void setPlayerNum(long);
	long getPlayerNum();
	void createBlurEffectTexture();
	void setFillColor(OGLVec4 *);
	OGLVec4 * getFillColor();
	void calcAllBindUVPosition();
	void recursiveCalcBindUVPosition(EffectData *);
	void updateStack();
	void renderStack();
private:
	OGLModel * m_pBindModel; // 0x8
	long m_PlayerNum; // 0x10
	bool m_LittleEndian; // 0x14
	long m_Align; // 0x18
	OGLEffectVec4 m_FillColor; // 0x20
	std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > loadTexPathName; // 0x38
	std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > loadFigurePathName; // 0x50
	std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > loadCpuFigurePathName; // 0x68
	std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > loadCurvePathName; // 0x80
	std::vector<void *,std::allocator<void *> > loadTexData; // 0x98
	std::vector<void *,std::allocator<void *> > loadFigureData; // 0xB0
	std::vector<void *,std::allocator<void *> > loadCpuFigureData; // 0xC8
	std::vector<extension::BasicFutureObject<OGLCurve,void>,std::allocator<extension::BasicFutureObject<OGLCurve,void> > > loadCurveData; // 0xE0
	std::vector<EffectListNodeData,std::allocator<EffectListNodeData> > m_EffectDataList; // 0xF8
	std::vector<EffectDataList,std::allocator<EffectDataList> > m_CharaEffectDataLists; // 0x110
	std::vector<EffectListNode,std::allocator<EffectListNode> > m_EffectList; // 0x128
	BinaryFileInput m_BinaryFileInput; // 0x140
public:
	EffectDataListManager & operator=(const EffectDataListManager &);
};
class std::vector<void *,std::allocator<void *> > :
	std::_Vector_alloc<std::_Vec_base_types<void *,std::allocator<void *> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	typedef void *value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef void * pointer;
	typedef void * const_pointer;
	typedef void * reference;
	typedef void * const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<void *,std::allocator<void *> >(std::initializer_list<void *>, const std::allocator<void *> &);
	vector<void *,std::allocator<void *> >(std::vector<void *,std::allocator<void *> > &, const std::allocator<void *> &);
	vector<void *,std::allocator<void *> >(std::vector<void *,std::allocator<void *> > &);
	vector<void *,std::allocator<void *> >(const std::vector<void *,std::allocator<void *> > &, const std::allocator<void *> &);
	vector<void *,std::allocator<void *> >(const std::vector<void *,std::allocator<void *> > &);
	vector<void *,std::allocator<void *> >(unsigned long long, void * &, const std::allocator<void *> &);
	vector<void *,std::allocator<void *> >(unsigned long long, void * &);
	vector<void *,std::allocator<void *> >(unsigned long long);
	vector<void *,std::allocator<void *> >(const std::allocator<void *> &);
	vector<void *,std::allocator<void *> >();
	void _Construct_n(unsigned long long, void * *);
	std::vector<void *,std::allocator<void *> > & operator=(const std::vector<void *,std::allocator<void *> > &);
	std::vector<void *,std::allocator<void *> > & operator=(std::initializer_list<void *>);
	std::vector<void *,std::allocator<void *> > & operator=(std::vector<void *,std::allocator<void *> > &);
	void _Assign_rv(std::vector<void *,std::allocator<void *> > &);
	void _Assign_rv(std::vector<void *,std::allocator<void *> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<void *,std::allocator<void *> > &, std::integral_constant<bool,1>);
	void push_back(void * &);
	void push_back(void * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<void *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<void *> > >, unsigned long long, void * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<void *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<void *> > >, void * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<void *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<void *> > >, std::initializer_list<void *>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<void *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<void *> > >, void * &);
	void assign(unsigned long long, void * &);
	void assign(std::initializer_list<void *>);
	~vector<void *,std::allocator<void *> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<void *> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<void *> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<void *> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<void *> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<void *> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<void *> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<void *> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<void *> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<void *> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<void *> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<void *> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<void *> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<void *> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<void *> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, void * &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<void *> get_allocator();
	void * & at(unsigned long long);
	void * & at(unsigned long long);
	void * & operator[](unsigned long long);
	void * & operator[](unsigned long long);
	void * * data();
	void * * data();
	void * & front();
	void * & front();
	void * & back();
	void * & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<void *> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<void *> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<void *> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<void *> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<void *> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<void *,std::allocator<void *> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(void * *, void * *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(void * *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<void *> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<void *> > >, unsigned long long, void * &);
	void * * _Ufill(void * *, unsigned long long, void * *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(void * *, void * *);
};
class std::vector<extension::BasicFutureObject<OGLCurve,void>,std::allocator<extension::BasicFutureObject<OGLCurve,void> > > :
	std::_Vector_alloc<std::_Vec_base_types<extension::BasicFutureObject<OGLCurve,void>,std::allocator<extension::BasicFutureObject<OGLCurve,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef extension::BasicFutureObject<OGLCurve,void> pointer;
	typedef const extension::BasicFutureObject<OGLCurve,void> const_pointer;
	typedef extension::BasicFutureObject<OGLCurve,void> reference;
	typedef const extension::BasicFutureObject<OGLCurve,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<extension::BasicFutureObject<OGLCurve,void>,std::allocator<extension::BasicFutureObject<OGLCurve,void> > >(std::initializer_list<extension::BasicFutureObject<OGLCurve,void> >, const std::allocator<extension::BasicFutureObject<OGLCurve,void> > &);
	vector<extension::BasicFutureObject<OGLCurve,void>,std::allocator<extension::BasicFutureObject<OGLCurve,void> > >(std::vector<extension::BasicFutureObject<OGLCurve,void>,std::allocator<extension::BasicFutureObject<OGLCurve,void> > > &, const std::allocator<extension::BasicFutureObject<OGLCurve,void> > &);
	vector<extension::BasicFutureObject<OGLCurve,void>,std::allocator<extension::BasicFutureObject<OGLCurve,void> > >(std::vector<extension::BasicFutureObject<OGLCurve,void>,std::allocator<extension::BasicFutureObject<OGLCurve,void> > > &);
	vector<extension::BasicFutureObject<OGLCurve,void>,std::allocator<extension::BasicFutureObject<OGLCurve,void> > >(const std::vector<extension::BasicFutureObject<OGLCurve,void>,std::allocator<extension::BasicFutureObject<OGLCurve,void> > > &, const std::allocator<extension::BasicFutureObject<OGLCurve,void> > &);
	vector<extension::BasicFutureObject<OGLCurve,void>,std::allocator<extension::BasicFutureObject<OGLCurve,void> > >(const std::vector<extension::BasicFutureObject<OGLCurve,void>,std::allocator<extension::BasicFutureObject<OGLCurve,void> > > &);
	vector<extension::BasicFutureObject<OGLCurve,void>,std::allocator<extension::BasicFutureObject<OGLCurve,void> > >(unsigned long long, const extension::BasicFutureObject<OGLCurve,void> &, const std::allocator<extension::BasicFutureObject<OGLCurve,void> > &);
	vector<extension::BasicFutureObject<OGLCurve,void>,std::allocator<extension::BasicFutureObject<OGLCurve,void> > >(unsigned long long, const extension::BasicFutureObject<OGLCurve,void> &);
	vector<extension::BasicFutureObject<OGLCurve,void>,std::allocator<extension::BasicFutureObject<OGLCurve,void> > >(unsigned long long);
	vector<extension::BasicFutureObject<OGLCurve,void>,std::allocator<extension::BasicFutureObject<OGLCurve,void> > >(const std::allocator<extension::BasicFutureObject<OGLCurve,void> > &);
	vector<extension::BasicFutureObject<OGLCurve,void>,std::allocator<extension::BasicFutureObject<OGLCurve,void> > >();
	void _Construct_n(unsigned long long, const extension::BasicFutureObject<OGLCurve,void> *);
	std::vector<extension::BasicFutureObject<OGLCurve,void>,std::allocator<extension::BasicFutureObject<OGLCurve,void> > > & operator=(const std::vector<extension::BasicFutureObject<OGLCurve,void>,std::allocator<extension::BasicFutureObject<OGLCurve,void> > > &);
	std::vector<extension::BasicFutureObject<OGLCurve,void>,std::allocator<extension::BasicFutureObject<OGLCurve,void> > > & operator=(std::initializer_list<extension::BasicFutureObject<OGLCurve,void> >);
	std::vector<extension::BasicFutureObject<OGLCurve,void>,std::allocator<extension::BasicFutureObject<OGLCurve,void> > > & operator=(std::vector<extension::BasicFutureObject<OGLCurve,void>,std::allocator<extension::BasicFutureObject<OGLCurve,void> > > &);
	void _Assign_rv(std::vector<extension::BasicFutureObject<OGLCurve,void>,std::allocator<extension::BasicFutureObject<OGLCurve,void> > > &);
	void _Assign_rv(std::vector<extension::BasicFutureObject<OGLCurve,void>,std::allocator<extension::BasicFutureObject<OGLCurve,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<extension::BasicFutureObject<OGLCurve,void>,std::allocator<extension::BasicFutureObject<OGLCurve,void> > > &, std::integral_constant<bool,1>);
	void push_back(const extension::BasicFutureObject<OGLCurve,void> &);
	void push_back(extension::BasicFutureObject<OGLCurve,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCurve,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCurve,void> > > >, unsigned long long, const extension::BasicFutureObject<OGLCurve,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCurve,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCurve,void> > > >, const extension::BasicFutureObject<OGLCurve,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCurve,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCurve,void> > > >, std::initializer_list<extension::BasicFutureObject<OGLCurve,void> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCurve,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCurve,void> > > >, extension::BasicFutureObject<OGLCurve,void> &);
	void assign(unsigned long long, const extension::BasicFutureObject<OGLCurve,void> &);
	void assign(std::initializer_list<extension::BasicFutureObject<OGLCurve,void> >);
	~vector<extension::BasicFutureObject<OGLCurve,void>,std::allocator<extension::BasicFutureObject<OGLCurve,void> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCurve,void> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCurve,void> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCurve,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCurve,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCurve,void> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCurve,void> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCurve,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCurve,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCurve,void> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCurve,void> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCurve,void> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCurve,void> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCurve,void> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCurve,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const extension::BasicFutureObject<OGLCurve,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<extension::BasicFutureObject<OGLCurve,void> > get_allocator();
	extension::BasicFutureObject<OGLCurve,void> & at(unsigned long long);
	const extension::BasicFutureObject<OGLCurve,void> & at(unsigned long long);
	extension::BasicFutureObject<OGLCurve,void> & operator[](unsigned long long);
	const extension::BasicFutureObject<OGLCurve,void> & operator[](unsigned long long);
	const extension::BasicFutureObject<OGLCurve,void> * data();
	extension::BasicFutureObject<OGLCurve,void> * data();
	const extension::BasicFutureObject<OGLCurve,void> & front();
	extension::BasicFutureObject<OGLCurve,void> & front();
	const extension::BasicFutureObject<OGLCurve,void> & back();
	extension::BasicFutureObject<OGLCurve,void> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCurve,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCurve,void> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCurve,void> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCurve,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCurve,void> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<extension::BasicFutureObject<OGLCurve,void>,std::allocator<extension::BasicFutureObject<OGLCurve,void> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(extension::BasicFutureObject<OGLCurve,void> *, extension::BasicFutureObject<OGLCurve,void> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const extension::BasicFutureObject<OGLCurve,void> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCurve,void> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCurve,void> > > >, unsigned long long, const extension::BasicFutureObject<OGLCurve,void> &);
	extension::BasicFutureObject<OGLCurve,void> * _Ufill(extension::BasicFutureObject<OGLCurve,void> *, unsigned long long, const extension::BasicFutureObject<OGLCurve,void> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(extension::BasicFutureObject<OGLCurve,void> *, extension::BasicFutureObject<OGLCurve,void> *);
};
class std::vector<EffectListNodeData,std::allocator<EffectListNodeData> > :
	std::_Vector_alloc<std::_Vec_base_types<EffectListNodeData,std::allocator<EffectListNodeData> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef EffectListNodeData pointer;
	typedef const EffectListNodeData const_pointer;
	typedef EffectListNodeData reference;
	typedef const EffectListNodeData const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<EffectListNodeData,std::allocator<EffectListNodeData> >(std::initializer_list<EffectListNodeData>, const std::allocator<EffectListNodeData> &);
	vector<EffectListNodeData,std::allocator<EffectListNodeData> >(std::vector<EffectListNodeData,std::allocator<EffectListNodeData> > &, const std::allocator<EffectListNodeData> &);
	vector<EffectListNodeData,std::allocator<EffectListNodeData> >(std::vector<EffectListNodeData,std::allocator<EffectListNodeData> > &);
	vector<EffectListNodeData,std::allocator<EffectListNodeData> >(const std::vector<EffectListNodeData,std::allocator<EffectListNodeData> > &, const std::allocator<EffectListNodeData> &);
	vector<EffectListNodeData,std::allocator<EffectListNodeData> >(const std::vector<EffectListNodeData,std::allocator<EffectListNodeData> > &);
	vector<EffectListNodeData,std::allocator<EffectListNodeData> >(unsigned long long, const EffectListNodeData &, const std::allocator<EffectListNodeData> &);
	vector<EffectListNodeData,std::allocator<EffectListNodeData> >(unsigned long long, const EffectListNodeData &);
	vector<EffectListNodeData,std::allocator<EffectListNodeData> >(unsigned long long);
	vector<EffectListNodeData,std::allocator<EffectListNodeData> >(const std::allocator<EffectListNodeData> &);
	vector<EffectListNodeData,std::allocator<EffectListNodeData> >();
	void _Construct_n(unsigned long long, const EffectListNodeData *);
	std::vector<EffectListNodeData,std::allocator<EffectListNodeData> > & operator=(const std::vector<EffectListNodeData,std::allocator<EffectListNodeData> > &);
	std::vector<EffectListNodeData,std::allocator<EffectListNodeData> > & operator=(std::initializer_list<EffectListNodeData>);
	std::vector<EffectListNodeData,std::allocator<EffectListNodeData> > & operator=(std::vector<EffectListNodeData,std::allocator<EffectListNodeData> > &);
	void _Assign_rv(std::vector<EffectListNodeData,std::allocator<EffectListNodeData> > &);
	void _Assign_rv(std::vector<EffectListNodeData,std::allocator<EffectListNodeData> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<EffectListNodeData,std::allocator<EffectListNodeData> > &, std::integral_constant<bool,1>);
	void push_back(const EffectListNodeData &);
	void push_back(EffectListNodeData &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > >, unsigned long long, const EffectListNodeData &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > >, const EffectListNodeData &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > >, std::initializer_list<EffectListNodeData>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > >, EffectListNodeData &);
	void assign(unsigned long long, const EffectListNodeData &);
	void assign(std::initializer_list<EffectListNodeData>);
	~vector<EffectListNodeData,std::allocator<EffectListNodeData> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const EffectListNodeData &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<EffectListNodeData> get_allocator();
	EffectListNodeData & at(unsigned long long);
	const EffectListNodeData & at(unsigned long long);
	EffectListNodeData & operator[](unsigned long long);
	const EffectListNodeData & operator[](unsigned long long);
	const EffectListNodeData * data();
	EffectListNodeData * data();
	const EffectListNodeData & front();
	EffectListNodeData & front();
	const EffectListNodeData & back();
	EffectListNodeData & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<EffectListNodeData,std::allocator<EffectListNodeData> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(EffectListNodeData *, EffectListNodeData *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const EffectListNodeData *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeData> > >, unsigned long long, const EffectListNodeData &);
	EffectListNodeData * _Ufill(EffectListNodeData *, unsigned long long, const EffectListNodeData *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(EffectListNodeData *, EffectListNodeData *);
};
class std::vector<EffectDataList,std::allocator<EffectDataList> > :
	std::_Vector_alloc<std::_Vec_base_types<EffectDataList,std::allocator<EffectDataList> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef EffectDataList pointer;
	typedef const EffectDataList const_pointer;
	typedef EffectDataList reference;
	typedef const EffectDataList const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<EffectDataList,std::allocator<EffectDataList> >(std::initializer_list<EffectDataList>, const std::allocator<EffectDataList> &);
	vector<EffectDataList,std::allocator<EffectDataList> >(std::vector<EffectDataList,std::allocator<EffectDataList> > &, const std::allocator<EffectDataList> &);
	vector<EffectDataList,std::allocator<EffectDataList> >(std::vector<EffectDataList,std::allocator<EffectDataList> > &);
	vector<EffectDataList,std::allocator<EffectDataList> >(const std::vector<EffectDataList,std::allocator<EffectDataList> > &, const std::allocator<EffectDataList> &);
	vector<EffectDataList,std::allocator<EffectDataList> >(const std::vector<EffectDataList,std::allocator<EffectDataList> > &);
	vector<EffectDataList,std::allocator<EffectDataList> >(unsigned long long, const EffectDataList &, const std::allocator<EffectDataList> &);
	vector<EffectDataList,std::allocator<EffectDataList> >(unsigned long long, const EffectDataList &);
	vector<EffectDataList,std::allocator<EffectDataList> >(unsigned long long);
	vector<EffectDataList,std::allocator<EffectDataList> >(const std::allocator<EffectDataList> &);
	vector<EffectDataList,std::allocator<EffectDataList> >();
	void _Construct_n(unsigned long long, const EffectDataList *);
	std::vector<EffectDataList,std::allocator<EffectDataList> > & operator=(const std::vector<EffectDataList,std::allocator<EffectDataList> > &);
	std::vector<EffectDataList,std::allocator<EffectDataList> > & operator=(std::initializer_list<EffectDataList>);
	std::vector<EffectDataList,std::allocator<EffectDataList> > & operator=(std::vector<EffectDataList,std::allocator<EffectDataList> > &);
	void _Assign_rv(std::vector<EffectDataList,std::allocator<EffectDataList> > &);
	void _Assign_rv(std::vector<EffectDataList,std::allocator<EffectDataList> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<EffectDataList,std::allocator<EffectDataList> > &, std::integral_constant<bool,1>);
	void push_back(const EffectDataList &);
	void push_back(EffectDataList &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectDataList> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectDataList> > >, unsigned long long, const EffectDataList &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectDataList> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectDataList> > >, const EffectDataList &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectDataList> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectDataList> > >, std::initializer_list<EffectDataList>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectDataList> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectDataList> > >, EffectDataList &);
	void assign(unsigned long long, const EffectDataList &);
	void assign(std::initializer_list<EffectDataList>);
	~vector<EffectDataList,std::allocator<EffectDataList> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectDataList> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectDataList> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectDataList> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectDataList> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectDataList> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectDataList> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectDataList> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectDataList> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectDataList> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectDataList> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectDataList> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectDataList> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectDataList> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectDataList> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const EffectDataList &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<EffectDataList> get_allocator();
	EffectDataList & at(unsigned long long);
	const EffectDataList & at(unsigned long long);
	EffectDataList & operator[](unsigned long long);
	const EffectDataList & operator[](unsigned long long);
	const EffectDataList * data();
	EffectDataList * data();
	const EffectDataList & front();
	EffectDataList & front();
	const EffectDataList & back();
	EffectDataList & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectDataList> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectDataList> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectDataList> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectDataList> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectDataList> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<EffectDataList,std::allocator<EffectDataList> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(EffectDataList *, EffectDataList *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const EffectDataList *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectDataList> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectDataList> > >, unsigned long long, const EffectDataList &);
	EffectDataList * _Ufill(EffectDataList *, unsigned long long, const EffectDataList *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(EffectDataList *, EffectDataList *);
};
class std::vector<EffectListNode,std::allocator<EffectListNode> > :
	std::_Vector_alloc<std::_Vec_base_types<EffectListNode,std::allocator<EffectListNode> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef EffectListNode pointer;
	typedef const EffectListNode const_pointer;
	typedef EffectListNode reference;
	typedef const EffectListNode const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<EffectListNode,std::allocator<EffectListNode> >(std::initializer_list<EffectListNode>, const std::allocator<EffectListNode> &);
	vector<EffectListNode,std::allocator<EffectListNode> >(std::vector<EffectListNode,std::allocator<EffectListNode> > &, const std::allocator<EffectListNode> &);
	vector<EffectListNode,std::allocator<EffectListNode> >(std::vector<EffectListNode,std::allocator<EffectListNode> > &);
	vector<EffectListNode,std::allocator<EffectListNode> >(const std::vector<EffectListNode,std::allocator<EffectListNode> > &, const std::allocator<EffectListNode> &);
	vector<EffectListNode,std::allocator<EffectListNode> >(const std::vector<EffectListNode,std::allocator<EffectListNode> > &);
	vector<EffectListNode,std::allocator<EffectListNode> >(unsigned long long, const EffectListNode &, const std::allocator<EffectListNode> &);
	vector<EffectListNode,std::allocator<EffectListNode> >(unsigned long long, const EffectListNode &);
	vector<EffectListNode,std::allocator<EffectListNode> >(unsigned long long);
	vector<EffectListNode,std::allocator<EffectListNode> >(const std::allocator<EffectListNode> &);
	vector<EffectListNode,std::allocator<EffectListNode> >();
	void _Construct_n(unsigned long long, const EffectListNode *);
	std::vector<EffectListNode,std::allocator<EffectListNode> > & operator=(const std::vector<EffectListNode,std::allocator<EffectListNode> > &);
	std::vector<EffectListNode,std::allocator<EffectListNode> > & operator=(std::initializer_list<EffectListNode>);
	std::vector<EffectListNode,std::allocator<EffectListNode> > & operator=(std::vector<EffectListNode,std::allocator<EffectListNode> > &);
	void _Assign_rv(std::vector<EffectListNode,std::allocator<EffectListNode> > &);
	void _Assign_rv(std::vector<EffectListNode,std::allocator<EffectListNode> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<EffectListNode,std::allocator<EffectListNode> > &, std::integral_constant<bool,1>);
	void push_back(const EffectListNode &);
	void push_back(EffectListNode &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNode> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNode> > >, unsigned long long, const EffectListNode &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNode> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNode> > >, const EffectListNode &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNode> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNode> > >, std::initializer_list<EffectListNode>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNode> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNode> > >, EffectListNode &);
	void assign(unsigned long long, const EffectListNode &);
	void assign(std::initializer_list<EffectListNode>);
	~vector<EffectListNode,std::allocator<EffectListNode> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNode> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNode> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNode> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNode> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNode> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNode> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNode> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNode> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNode> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNode> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNode> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNode> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNode> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNode> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const EffectListNode &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<EffectListNode> get_allocator();
	EffectListNode & at(unsigned long long);
	const EffectListNode & at(unsigned long long);
	EffectListNode & operator[](unsigned long long);
	const EffectListNode & operator[](unsigned long long);
	const EffectListNode * data();
	EffectListNode * data();
	const EffectListNode & front();
	EffectListNode & front();
	const EffectListNode & back();
	EffectListNode & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNode> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNode> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNode> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNode> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNode> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<EffectListNode,std::allocator<EffectListNode> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(EffectListNode *, EffectListNode *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const EffectListNode *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNode> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNode> > >, unsigned long long, const EffectListNode &);
	EffectListNode * _Ufill(EffectListNode *, unsigned long long, const EffectListNode *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(EffectListNode *, EffectListNode *);
};