#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/istream"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ostream"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/streambuf"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/fstream"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/silverware/git/src/3rdparty/lodepng/lodepng.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

struct uivector
{
	unsigned long * data; // 0x0
	unsigned long long size; // 0x8
	unsigned long long allocsize; // 0x10
};
struct ucvector
{
	unsigned char * data; // 0x0
	unsigned long long size; // 0x8
	unsigned long long allocsize; // 0x10
};
struct HuffmanTree
{
	unsigned long * tree2d; // 0x0
	unsigned long * tree1d; // 0x8
	unsigned long * lengths; // 0x10
	unsigned long maxbitlen; // 0x18
	unsigned long numcodes; // 0x1C
};
struct BPMNode
{
	long weight; // 0x0
	unsigned long index; // 0x4
	BPMNode * tail; // 0x8
	long in_use; // 0x10
};
struct BPMLists
{
	unsigned long memsize; // 0x0
	BPMNode * memory; // 0x8
	unsigned long numfree; // 0x10
	unsigned long nextfree; // 0x14
	BPMNode * * freelist; // 0x18
	unsigned long listsize; // 0x20
	BPMNode * * chains0; // 0x28
	BPMNode * * chains1; // 0x30
};
const unsigned long ADAM7_IX[7]; // 0x14086F530
const unsigned long ADAM7_IY[7]; // 0x14086F550
const unsigned long ADAM7_DX[7]; // 0x14086F570
const unsigned long ADAM7_DY[7]; // 0x14086F590
LodePNGDecompressSettings lodepng_default_decompress_settings; // 0x14086F290
LodePNGCompressSettings lodepng_default_compress_settings; // 0x14086F2B0
const unsigned long LENGTHBASE[29]; // 0x14086F2E0
const unsigned long LENGTHEXTRA[29]; // 0x14086F3E0
const unsigned long DISTANCEBASE[30]; // 0x14086F360
const unsigned long DISTANCEEXTRA[30]; // 0x14086F460
const unsigned long CLCL_ORDER[19]; // 0x14086F4E0
unsigned long lodepng_crc32_table[256]; // 0x140A29510
const char * LODEPNG_VERSION_STRING; // 0x140A29500
typedef std::basic_ofstream<char,std::char_traits<char> > std::ofstream;
typedef std::basic_ifstream<char,std::char_traits<char> > std::ifstream;
typedef std::fpos<_Mbstatet> std::streampos;
std::locale::id std::codecvt<char,char,_Mbstatet>::id; // 0x140A940E8
struct Hash
{
	long * head; // 0x0
	unsigned short * chain; // 0x8
	long * val; // 0x10
	long * headz; // 0x18
	unsigned short * chainz; // 0x20
	unsigned short * zeros; // 0x28
};
struct ColorTree
{
	ColorTree * children[16]; // 0x0
	long index; // 0x80
};//decompilation failure at 14086F530!
//decompilation failure at 14086F550!
//decompilation failure at 14086F570!
//decompilation failure at 14086F590!
//decompilation failure at 14086F290!
//decompilation failure at 14086F2B0!
//decompilation failure at 14086F2E0!
//decompilation failure at 14086F3E0!
//decompilation failure at 14086F360!
//decompilation failure at 14086F460!
//decompilation failure at 14086F4E0!
//decompilation failure at 140A29510!
//decompilation failure at 140A29500!
//decompilation failure at 140A940E8!
