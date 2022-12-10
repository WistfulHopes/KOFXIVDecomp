#pragma once

struct Scaleform::Render::MeshGenerator
{
	Scaleform::Render::LinearHeap Heap1; // 0x0
	Scaleform::Render::LinearHeap Heap2; // 0x28
	Scaleform::Render::LinearHeap Heap3; // 0x50
	Scaleform::Render::LinearHeap Heap4; // 0x78
	Scaleform::Render::Tessellator mTess; // 0xA0
	Scaleform::Render::Stroker mStroker; // 0x608
	Scaleform::Render::StrokeSorter mStrokeSorter; // 0x660
	Scaleform::Render::Hairliner mHairliner; // 0x730
	Scaleform::Render::StrokerAA mStrokerAA; // 0x9D0
	MeshGenerator(Scaleform::MemoryHeap *);
	void Clear();
	~MeshGenerator();
};
Scaleform::Render::MeshGenerator::MeshGenerator(Scaleform::MemoryHeap * h); // 0x140317C80
void Scaleform::Render::MeshGenerator::Clear(); // 0x14034EA90
struct Scaleform::Render::StrokeGenerator
{
	Scaleform::Render::LinearHeap Heap1; // 0x0
	Scaleform::Render::LinearHeap Heap2; // 0x28
	Scaleform::Render::Stroker mStroker; // 0x50
	Scaleform::Render::StrokeSorter mStrokeSorter; // 0xA8
	Scaleform::Render::VertexPath mPath; // 0x178
	StrokeGenerator(Scaleform::MemoryHeap *);
	void Clear();
	~StrokeGenerator();
};
Scaleform::Render::StrokeGenerator::StrokeGenerator(Scaleform::MemoryHeap * h); // 0x140318030