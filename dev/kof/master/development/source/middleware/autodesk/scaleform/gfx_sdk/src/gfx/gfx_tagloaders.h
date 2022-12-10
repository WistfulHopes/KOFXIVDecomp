#pragma once

struct Scaleform::GFx::TagInfo
{
	Scaleform::GFx::TagType TagType; // 0x0
	long TagOffset; // 0x4
	long TagLength; // 0x8
	long TagDataOffset; // 0xC
};