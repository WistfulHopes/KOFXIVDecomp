#pragma once

class Scaleform::Render::RectPacker
{
	enum <unnamed-enum-SID>
	{
		SID = 2,
	};
	enum <unnamed-enum-Packed>
	{
		Packed = -2147483648,
	};
	struct RectType;
	struct PackType;
public:
	RectPacker();
	unsigned long long GetNumBytes();
	void SetWidth(unsigned long);
	void SetHeight(unsigned long);
	unsigned long GetWidth();
	unsigned long GetHeight();
	void Clear();
	void ClearAndRelease();
	void AddRect(unsigned long, unsigned long, unsigned long);
	void Pack();
	unsigned long long GetNumPacks();
	const Scaleform::Render::RectPacker::PackType & GetPack(unsigned long long);
	const Scaleform::Render::RectPacker::RectType & GetRect(const Scaleform::Render::RectPacker::PackType &, unsigned long);
	unsigned long long GetNumFailed();
	unsigned long GetFailed(unsigned long long);
	struct NodeType;
private:
	static bool cmpRectsY(const Scaleform::Render::RectPacker::RectType &, const Scaleform::Render::RectPacker::RectType &);
	void packRects(unsigned long, unsigned long);
	void splitSpace(unsigned long, const Scaleform::Render::RectPacker::RectType &);
	void emitPacked();
	unsigned long Width; // 0x0
	unsigned long Height; // 0x4
	unsigned long NumPacked; // 0x8
	unsigned long MinWidth; // 0xC
	unsigned long MinHeight; // 0x10
	Scaleform::ArrayPagedLH_POD<Scaleform::Render::RectPacker::RectType,8,64,2> SrcRects; // 0x18
	Scaleform::ArrayPagedLH_POD<Scaleform::Render::RectPacker::RectType,8,64,2> PackedRects; // 0x40
	Scaleform::ArrayPagedLH_POD<Scaleform::Render::RectPacker::PackType,4,16,2> Packs; // 0x68
	Scaleform::ArrayPagedLH_POD<Scaleform::Render::RectPacker::NodeType,8,64,2> PackTree; // 0x90
	Scaleform::ArrayPagedLH_POD<unsigned int,6,64,2> Failed; // 0xB8
public:
	~RectPacker();
};
struct Scaleform::Render::RectPacker::RectType
{
	unsigned long x; // 0x0
	unsigned long y; // 0x4
	unsigned long Id; // 0x8
};
struct Scaleform::Render::RectPacker::PackType
{
	unsigned long StartRect; // 0x0
	unsigned long NumRects; // 0x4
};
void Scaleform::Render::RectPacker::AddRect(unsigned long w, unsigned long h, unsigned long id); // 0x1403E4BA0
struct Scaleform::Render::RectPacker::NodeType
{
	unsigned long x; // 0x0
	unsigned long y; // 0x4
	unsigned long Width; // 0x8
	unsigned long Height; // 0xC
	unsigned long Id; // 0x10
	unsigned long Node1; // 0x14
	unsigned long Node2; // 0x18
};
bool Scaleform::Render::RectPacker::cmpRectsY(const Scaleform::Render::RectPacker::RectType & a, const Scaleform::Render::RectPacker::RectType & b); // 0x140428FC0
class Scaleform::ArrayPagedLH_POD<Scaleform::Render::RectPacker::RectType,8,64,2> :
	Scaleform::ArrayPagedBase<Scaleform::Render::RectPacker::RectType,8,64,Scaleform::AllocatorPagedLH_POD<Scaleform::Render::RectPacker::RectType,2> >
{
	class SelfType;
	struct ValueType;
	struct AllocatorType;
public:
	ArrayPagedLH_POD<Scaleform::Render::RectPacker::RectType,8,64,2>();
	~ArrayPagedLH_POD<Scaleform::Render::RectPacker::RectType,8,64,2>();
};
class Scaleform::ArrayPagedLH_POD<Scaleform::Render::RectPacker::PackType,4,16,2> :
	Scaleform::ArrayPagedBase<Scaleform::Render::RectPacker::PackType,4,16,Scaleform::AllocatorPagedLH_POD<Scaleform::Render::RectPacker::PackType,2> >
{
	class SelfType;
	struct ValueType;
	struct AllocatorType;
public:
	ArrayPagedLH_POD<Scaleform::Render::RectPacker::PackType,4,16,2>();
	~ArrayPagedLH_POD<Scaleform::Render::RectPacker::PackType,4,16,2>();
};
class Scaleform::ArrayPagedLH_POD<Scaleform::Render::RectPacker::NodeType,8,64,2> :
	Scaleform::ArrayPagedBase<Scaleform::Render::RectPacker::NodeType,8,64,Scaleform::AllocatorPagedLH_POD<Scaleform::Render::RectPacker::NodeType,2> >
{
	class SelfType;
	struct ValueType;
	struct AllocatorType;
public:
	ArrayPagedLH_POD<Scaleform::Render::RectPacker::NodeType,8,64,2>();
	~ArrayPagedLH_POD<Scaleform::Render::RectPacker::NodeType,8,64,2>();
};
class Scaleform::ArrayPagedLH_POD<unsigned int,6,64,2> :
	Scaleform::ArrayPagedBase<unsigned int,6,64,Scaleform::AllocatorPagedLH_POD<unsigned int,2> >
{
	class SelfType;
	typedef unsigned long ValueType;
	struct AllocatorType;
public:
	ArrayPagedLH_POD<unsigned int,6,64,2>();
	~ArrayPagedLH_POD<unsigned int,6,64,2>();
};