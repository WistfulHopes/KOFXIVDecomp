#pragma once

class Scaleform::Render::PrimitivePrepareBuffer :
	Scaleform::Render::RQPrepareBuffer
{
	enum QIPrepareResult
	{
		QIP_Done = 0,
		QIP_NeedCache = 1,
	};
public:
	void StartPrimitive(Scaleform::Render::HAL *, void *, Scaleform::Render::Primitive *, Scaleform::Render::PrimitiveEmitBuffer *, Scaleform::Render::MeshCache *);
	Scaleform::Render::RenderQueueItem::QIPrepareResult ProcessPrimitive(bool);
	enum ProcessorState
	{
		PS_Loop = 0,
		PS_NeedCache = 1,
	};
private:
	Scaleform::Render::PrimitiveEmitBuffer * pEmitBuffer; // 0x8
	Scaleform::Render::HAL * pHal; // 0x10
	Scaleform::Render::MeshCache * pCache; // 0x18
	Scaleform::Render::Primitive * pPrimitive; // 0x20
	unsigned long MaximumBatchCount; // 0x28
	const Scaleform::Render::VertexFormat * pSourceVFormat; // 0x30
	const Scaleform::Render::VertexFormat * pSingleVFormat; // 0x38
	const Scaleform::Render::VertexFormat * pBatchVFormat; // 0x40
	const Scaleform::Render::VertexFormat * pInstancedVFormat; // 0x48
	Scaleform::Render::PrimitivePrepareBuffer::ProcessorState State; // 0x50
	Scaleform::Render::PrimitiveBatch * pPrepare; // 0x58
	Scaleform::Render::PrimitiveBatch * pPrepareTail; // 0x60
	Scaleform::Render::PrimitiveBatch * pConvert; // 0x68
	bool Converting; // 0x70
	PrimitivePrepareBuffer();
	Scaleform::Render::Primitive * getPrimitive();
	Scaleform::Render::MeshCache * getCache();
	bool batchConvertBegin();
	void batchConvertStep();
	bool attemptMergeBatches(Scaleform::Render::PrimitiveBatch *, Scaleform::Render::PrimitiveBatch *, Scaleform::Render::PrimitiveBatch *, Scaleform::Render::PrimitiveBatch *, unsigned long &, unsigned long &);
	void patchEmitDrawStartIfEq(Scaleform::Render::PrimitiveBatch *, Scaleform::Render::PrimitiveBatch *);
};
class Scaleform::Render::PrimitiveEmitBuffer :
	Scaleform::Render::RQEmitBuffer
{
private:
	Scaleform::Render::PrimitiveBatch * pDraw; // 0x8
	PrimitiveEmitBuffer();
public:
	void StartEmitting(void *, Scaleform::Render::PrimitiveBatch *);
};