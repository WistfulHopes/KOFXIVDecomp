#pragma once

class std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > :
	std::_Vector_alloc<std::_Vec_base_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > pointer;
	typedef const std::basic_string<char,std::char_traits<char>,std::allocator<char> > const_pointer;
	typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > reference;
	typedef const std::basic_string<char,std::char_traits<char>,std::allocator<char> > const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(std::initializer_list<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >, const std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &, const std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
	vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(const std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &, const std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(const std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
	vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(unsigned long long, const std::string &, const std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(unsigned long long, const std::string &);
	vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(unsigned long long);
	vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(const std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >();
	void _Construct_n(unsigned long long, const std::string *);
	std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > & operator=(const std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
	std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > & operator=(std::initializer_list<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >);
	std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > & operator=(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
	void _Assign_rv(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
	void _Assign_rv(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &, std::integral_constant<bool,1>);
	void push_back(const std::string &);
	void push_back(std::string &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >, unsigned long long, const std::string &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >, const std::string &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >, std::initializer_list<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >, std::string &);
	void assign(unsigned long long, const std::string &);
	void assign(std::initializer_list<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >);
	~vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const std::string &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > get_allocator();
	std::string & at(unsigned long long);
	const std::string & at(unsigned long long);
	std::string & operator[](unsigned long long);
	const std::string & operator[](unsigned long long);
	const std::string * data();
	std::string * data();
	const std::string & front();
	std::string & front();
	const std::string & back();
	std::string & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(std::string *, std::string *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const std::string *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >, unsigned long long, const std::string &);
	std::string * _Ufill(std::string *, unsigned long long, const std::string *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(std::string *, std::string *);
};
struct ShaderFxHelper::ShaderFxLightSetting
{
	long type; // 0x0
	float direction[3]; // 0x4
	float position[3]; // 0x10
	float colour[3]; // 0x1C
	float intensity; // 0x28
	float coneAngleRad; // 0x2C
	float penumbraRad; // 0x30
	bool emitSpecular; // 0x34
	bool emitDiffuse; // 0x35
	long decayRate; // 0x38
	bool castShadow; // 0x3C
	float groundShadowColour[3]; // 0x40
	float groundShadowIntensity; // 0x4C
	float groundShadowMaxStrength; // 0x50
	float groundShadowBias; // 0x54
	float bodySelfShadowColour[3]; // 0x58
	float bodySelfShadowIntensity; // 0x64
	float bodySelfShadowBias; // 0x68
	float bodySelfShadowMaxStrength; // 0x6C
	float skinSelfShadowColour[3]; // 0x70
	float skinSelfShadowIntensity; // 0x7C
	float skinSelfShadowBias; // 0x80
	float skinSelfShadowMaxStrength; // 0x84
	long shadowBlur; // 0x88
	bool shadowUseFXAA; // 0x8C
	bool shadowUseSlope; // 0x8D
	float bodySelfShadowVisibility; // 0x90
	float skinSelfShadowVisibility; // 0x94
	float groundShadowVisibility; // 0x98
	float bodySelfShadowHardEdge; // 0x9C
	float skinSelfShadowHardEdge; // 0xA0
};
struct ShaderFxHelper::ShaderFxParseOption
{
	bool disableMaterialLight; // 0x0
	ShaderFxParseOption();
};
class std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,OGLModel *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,OGLModel *> > > :
	std::_Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,OGLModel *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,OGLModel *> >,0> >
{
	class _Myt;
	class _Mybase;
	class key_type;
	typedef OGLModel mapped_type;
	struct key_compare;
	class value_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,OGLModel *> pointer;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,OGLModel *> const_pointer;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,OGLModel *> reference;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,OGLModel *> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,OGLModel *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,OGLModel *> >, const std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,OGLModel *> > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,OGLModel *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,OGLModel *> >, const std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,OGLModel *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,OGLModel *> >);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,OGLModel *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>(std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,OGLModel *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,OGLModel *> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,OGLModel *> > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,OGLModel *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>(std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,OGLModel *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,OGLModel *> > > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,OGLModel *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>(const std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,OGLModel *> > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,OGLModel *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>(const std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,OGLModel *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>(const std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,OGLModel *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,OGLModel *> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,OGLModel *> > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,OGLModel *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>(const std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,OGLModel *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,OGLModel *> > > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,OGLModel *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>(const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,OGLModel *> > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,OGLModel *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>();
	std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,OGLModel *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,OGLModel *> > > & operator=(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,OGLModel *> >);
	std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,OGLModel *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,OGLModel *> > > & operator=(std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,OGLModel *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,OGLModel *> > > &);
	std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,OGLModel *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,OGLModel *> > > & operator=(const std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,OGLModel *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,OGLModel *> > > &);
	OGLModel * & operator[](const std::string &);
	OGLModel * & operator[](std::string &);
	void swap(std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,OGLModel *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,OGLModel *> > > &);
	OGLModel * & at(const std::string &);
	OGLModel * & at(const std::string &);
	~map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,OGLModel *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char();
};