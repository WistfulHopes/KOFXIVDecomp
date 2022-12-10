#pragma once

enum LodePNGColorType
{
	LCT_GREY = 0,
	LCT_RGB = 2,
	LCT_PALETTE = 3,
	LCT_GREY_ALPHA = 4,
	LCT_RGBA = 6,
};
class std::vector<unsigned char,std::allocator<unsigned char> > :
	std::_Vector_alloc<std::_Vec_base_types<unsigned char,std::allocator<unsigned char> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	typedef unsigned char value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef unsigned char *pointer;
	typedef const unsigned char const_pointer;
	typedef unsigned char reference;
	typedef const unsigned char const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<unsigned char,std::allocator<unsigned char> >(std::initializer_list<unsigned char>, const std::allocator<unsigned char> &);
	vector<unsigned char,std::allocator<unsigned char> >(std::vector<unsigned char,std::allocator<unsigned char> > &, const std::allocator<unsigned char> &);
	vector<unsigned char,std::allocator<unsigned char> >(std::vector<unsigned char,std::allocator<unsigned char> > &);
	vector<unsigned char,std::allocator<unsigned char> >(const std::vector<unsigned char,std::allocator<unsigned char> > &, const std::allocator<unsigned char> &);
	vector<unsigned char,std::allocator<unsigned char> >(const std::vector<unsigned char,std::allocator<unsigned char> > &);
	vector<unsigned char,std::allocator<unsigned char> >(unsigned long long, const unsigned char &, const std::allocator<unsigned char> &);
	vector<unsigned char,std::allocator<unsigned char> >(unsigned long long, const unsigned char &);
	vector<unsigned char,std::allocator<unsigned char> >(unsigned long long);
	vector<unsigned char,std::allocator<unsigned char> >(const std::allocator<unsigned char> &);
	vector<unsigned char,std::allocator<unsigned char> >();
	void _Construct_n(unsigned long long, const unsigned char *);
	std::vector<unsigned char,std::allocator<unsigned char> > & operator=(const std::vector<unsigned char,std::allocator<unsigned char> > &);
	std::vector<unsigned char,std::allocator<unsigned char> > & operator=(std::initializer_list<unsigned char>);
	std::vector<unsigned char,std::allocator<unsigned char> > & operator=(std::vector<unsigned char,std::allocator<unsigned char> > &);
	void _Assign_rv(std::vector<unsigned char,std::allocator<unsigned char> > &);
	void _Assign_rv(std::vector<unsigned char,std::allocator<unsigned char> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<unsigned char,std::allocator<unsigned char> > &, std::integral_constant<bool,1>);
	void push_back(const unsigned char &);
	void push_back(unsigned char &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > >, unsigned long long, const unsigned char &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > >, const unsigned char &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > >, std::initializer_list<unsigned char>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > >, unsigned char &);
	void assign(unsigned long long, const unsigned char &);
	void assign(std::initializer_list<unsigned char>);
	~vector<unsigned char,std::allocator<unsigned char> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const unsigned char &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<unsigned char> get_allocator();
	unsigned char & at(unsigned long long);
	const unsigned char & at(unsigned long long);
	unsigned char & operator[](unsigned long long);
	const unsigned char & operator[](unsigned long long);
	const unsigned char * data();
	unsigned char * data();
	const unsigned char & front();
	unsigned char & front();
	const unsigned char & back();
	unsigned char & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<unsigned char,std::allocator<unsigned char> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(unsigned char *, unsigned char *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const unsigned char *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > >, unsigned long long, const unsigned char &);
	unsigned char * _Ufill(unsigned char *, unsigned long long, const unsigned char *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(unsigned char *, unsigned char *);
};
struct LodePNGDecompressSettings
{
	unsigned long ignore_adler32; // 0x0
	unsigned long(*custom_zlib)(unsigned char * *, unsigned long long *, const unsigned char *, unsigned long long, const LodePNGDecompressSettings *); // 0x8
	unsigned long(*custom_inflate)(unsigned char * *, unsigned long long *, const unsigned char *, unsigned long long, const LodePNGDecompressSettings *); // 0x10
	const void * custom_context; // 0x18
};
struct LodePNGCompressSettings
{
	unsigned long btype; // 0x0
	unsigned long use_lz77; // 0x4
	unsigned long windowsize; // 0x8
	unsigned long minmatch; // 0xC
	unsigned long nicematch; // 0x10
	unsigned long lazymatching; // 0x14
	unsigned long(*custom_zlib)(unsigned char * *, unsigned long long *, const unsigned char *, unsigned long long, const LodePNGCompressSettings *); // 0x18
	unsigned long(*custom_deflate)(unsigned char * *, unsigned long long *, const unsigned char *, unsigned long long, const LodePNGCompressSettings *); // 0x20
	const void * custom_context; // 0x28
};
struct LodePNGColorMode
{
	LodePNGColorType colortype; // 0x0
	unsigned long bitdepth; // 0x4
	unsigned char * palette; // 0x8
	unsigned long long palettesize; // 0x10
	unsigned long key_defined; // 0x18
	unsigned long key_r; // 0x1C
	unsigned long key_g; // 0x20
	unsigned long key_b; // 0x24
};
struct LodePNGTime
{
	unsigned long year; // 0x0
	unsigned long month; // 0x4
	unsigned long day; // 0x8
	unsigned long hour; // 0xC
	unsigned long minute; // 0x10
	unsigned long second; // 0x14
};
struct LodePNGInfo
{
	unsigned long compression_method; // 0x0
	unsigned long filter_method; // 0x4
	unsigned long interlace_method; // 0x8
	LodePNGColorMode color; // 0x10
	unsigned long background_defined; // 0x38
	unsigned long background_r; // 0x3C
	unsigned long background_g; // 0x40
	unsigned long background_b; // 0x44
	unsigned long long text_num; // 0x48
	char * * text_keys; // 0x50
	char * * text_strings; // 0x58
	unsigned long long itext_num; // 0x60
	char * * itext_keys; // 0x68
	char * * itext_langtags; // 0x70
	char * * itext_transkeys; // 0x78
	char * * itext_strings; // 0x80
	unsigned long time_defined; // 0x88
	LodePNGTime time; // 0x8C
	unsigned long phys_defined; // 0xA4
	unsigned long phys_x; // 0xA8
	unsigned long phys_y; // 0xAC
	unsigned long phys_unit; // 0xB0
	unsigned char * unknown_chunks_data[3]; // 0xB8
	unsigned long long unknown_chunks_size[3]; // 0xD0
};
struct LodePNGDecoderSettings
{
	LodePNGDecompressSettings zlibsettings; // 0x0
	unsigned long ignore_crc; // 0x20
	unsigned long color_convert; // 0x24
	unsigned long read_text_chunks; // 0x28
	unsigned long remember_unknown_chunks; // 0x2C
};
enum LodePNGFilterStrategy
{
	LFS_ZERO = 0,
	LFS_MINSUM = 1,
	LFS_ENTROPY = 2,
	LFS_BRUTE_FORCE = 3,
	LFS_PREDEFINED = 4,
};
struct LodePNGColorProfile
{
	unsigned long colored; // 0x0
	unsigned long key; // 0x4
	unsigned short key_r; // 0x8
	unsigned short key_g; // 0xA
	unsigned short key_b; // 0xC
	unsigned long alpha; // 0x10
	unsigned long numcolors; // 0x14
	unsigned char palette[1024]; // 0x18
	unsigned long bits; // 0x418
};
struct LodePNGEncoderSettings
{
	LodePNGCompressSettings zlibsettings; // 0x0
	unsigned long auto_convert; // 0x30
	unsigned long filter_palette_zero; // 0x34
	LodePNGFilterStrategy filter_strategy; // 0x38
	const unsigned char * predefined_filters; // 0x40
	unsigned long force_palette; // 0x48
	unsigned long add_id; // 0x4C
	unsigned long text_compression; // 0x50
};
struct LodePNGState
{
	LodePNGDecoderSettings decoder; // 0x8
	LodePNGEncoderSettings encoder; // 0x38
	LodePNGColorMode info_raw; // 0x90
	LodePNGInfo info_png; // 0xB8
	unsigned long error; // 0x1A0
	~LodePNGState();
	LodePNGState(const LodePNGState &);
	LodePNGState();
	LodePNGState & operator=(const LodePNGState &);
};
class lodepng::State :
	LodePNGState
{
public:
	State(const lodepng::State &);
	State();
	virtual ~State();
	lodepng::State & operator=(const lodepng::State &);
};