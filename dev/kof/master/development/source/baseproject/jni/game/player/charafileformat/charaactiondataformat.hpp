#pragma once

long CharaActionData::ReadActionData<CFile>(InputStreamBroker<CFile> & in); // 0x14017DE80
long CharaActionData::ReadActionData<OGLInputStream>(InputStreamBroker<OGLInputStream> & in); // 0x14017E200
long CharaActionData::ReadSoundActionData<OGLInputStream>(InputStreamBroker<OGLInputStream> & in); // 0x14017E520
struct CharaActionData::ReadSoundActionData::__l38::halfval
{
	CharaActionData::ReadSoundActionData::__l38::halfval::<unnamed-tag>::<unnamed-type-s> s; // 0x0
	long val; // 0x0
};
struct CharaActionData::ReadSoundActionData::__l38::halfval::<unnamed-tag>::<unnamed-type-s>
{
	short l; // 0x0
	short h; // 0x2
};
struct CharaActionData::ReadSoundActionData::__l38::SoundActionDataTmp
{
	long iFrame; // 0x0
	CharaActionData::ReadSoundActionData::__l38::halfval uiWork0; // 0x4
	CharaActionData::ReadSoundActionData::__l38::halfval iWork0; // 0x8
	CharaActionData::ReadSoundActionData::__l38::halfval iWork1; // 0xC
	float fWork0; // 0x10
	float fWork1; // 0x14
	float fWork2; // 0x18
	float fWork3; // 0x1C
	long bLock; // 0x20
};