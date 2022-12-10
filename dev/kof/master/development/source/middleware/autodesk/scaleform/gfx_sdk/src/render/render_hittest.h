#pragma once

struct Scaleform::Render::Math2D::QuadCoordType
{
	float x1; // 0x0
	float y1; // 0x4
	float x2; // 0x8
	float y2; // 0xC
	float x3; // 0x10
	float y3; // 0x14
};
bool Scaleform::Render::HitTestFill<Scaleform::Render::Matrix2x4<float> >(const Scaleform::Render::ShapeDataInterface & shape, const Scaleform::Render::Matrix2x4<float> & trans, float x, float y); // 0x14034CF40
bool Scaleform::Render::HitTestFill<Scaleform::Render::TransformerBase>(const Scaleform::Render::ShapeDataInterface & shape, const Scaleform::Render::TransformerBase & trans, float x, float y); // 0x14034D430
Scaleform::Render::ShapePathType Scaleform::Render::AddStrokeToSorter<Scaleform::Render::Matrix2x4<float> >(const Scaleform::Render::ShapeDataInterface & shape, Scaleform::Render::ShapePosInfo * pos, unsigned long strokeStyleIdx, const Scaleform::Render::Matrix2x4<float> & trans, Scaleform::Render::StrokeGenerator * gen); // 0x14034A460
Scaleform::Render::ShapePathType Scaleform::Render::AddStrokeToSorter<Scaleform::Render::TransformerBase>(const Scaleform::Render::ShapeDataInterface & shape, Scaleform::Render::ShapePosInfo * pos, unsigned long strokeStyleIdx, const Scaleform::Render::TransformerBase & trans, Scaleform::Render::StrokeGenerator * gen); // 0x14034A8C0
bool Scaleform::Render::HitTestRoundJoinStroke<Scaleform::Render::TransformerBase>(const Scaleform::Render::ShapeDataInterface & shape, Scaleform::Render::ShapePosInfo * pos, unsigned long strokeStyleIdx, const Scaleform::Render::TransformerBase & trans, float scaledWidth, float x, float y, Scaleform::Render::StrokeGenerator * gen, const Scaleform::Render::ToleranceParams & tol); // 0x14034DA40
bool Scaleform::Render::HitTestSingleStroke<Scaleform::Render::TransformerBase>(const Scaleform::Render::ShapeDataInterface & shape, Scaleform::Render::ShapePosInfo * pos, unsigned long strokeStyleIdx, const Scaleform::Render::TransformerBase & trans, float x, float y, Scaleform::Render::StrokeGenerator * gen, const Scaleform::Render::ToleranceParams & tol); // 0x14034DEB0
bool Scaleform::Render::HitTestLayerStrokes<Scaleform::Render::TransformerBase>(const Scaleform::Render::ShapeDataInterface & shape, Scaleform::Render::ShapePosInfo * pos, const Scaleform::Render::TransformerBase & trans, float x, float y, Scaleform::Render::StrokeGenerator * gen, const Scaleform::Render::ToleranceParams & tol); // 0x14034D780
bool Scaleform::Render::HitTestShapeStrokes<Scaleform::Render::TransformerBase>(const Scaleform::Render::ShapeDataInterface & shape, const Scaleform::Render::TransformerBase & trans, float x, float y, Scaleform::Render::StrokeGenerator * gen, const Scaleform::Render::ToleranceParams & tol); // 0x14034DD20