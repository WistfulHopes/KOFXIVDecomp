#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"

const unsigned char Scaleform::Alg::UpperBitTable[256]; // 0x140741740
const unsigned char Scaleform::Alg::LowerBitTable[256]; // 0x140741840
unsigned char Scaleform::Alg::RoundUpToPowerOfTwo(unsigned char x); // 0x1402EF970//decompilation failure at 140741740!
//decompilation failure at 140741840!
__int64 __fastcall Scaleform::Alg::RoundUpToPowerOfTwo(unsigned __int8 x)
{
  return (unsigned int)(1 << p2table[x]);
}

