#pragma once

enum Scaleform::Render::BoundEdges
{
	Bound_OuterEdges = 0,
	Bound_FillEdges = 1,
	Bound_AllEdges = 2,
};
void Scaleform::Render::ExpandBoundsToPath<Scaleform::Render::Matrix2x4<float> >(const Scaleform::Render::ShapeDataInterface & shape, const Scaleform::Render::Matrix2x4<float> & trans, Scaleform::Render::ShapePosInfo * pos, float * coord, Scaleform::Render::Rect<float> * bounds); // 0x14034C1E0
void Scaleform::Render::ExpandBoundsToFill<Scaleform::Render::Matrix2x4<float> >(const Scaleform::Render::ShapeDataInterface & shape, const Scaleform::Render::Matrix2x4<float> & trans, Scaleform::Render::Rect<float> * bounds, Scaleform::Render::BoundEdges edgesToCheck); // 0x14034BDF0
Scaleform::Render::Rect<float> Scaleform::Render::ComputeBoundsRoundStroke<Scaleform::Render::Matrix2x4<float> >(const Scaleform::Render::ShapeDataInterface & shape, const Scaleform::Render::Matrix2x4<float> & trans, Scaleform::Render::ShapePosInfo * pos, float * coord, unsigned long * styles); // 0x14034ABF0
void Scaleform::Render::ExpandBoundsToStrokesSimplified<Scaleform::Render::Matrix2x4<float> >(const Scaleform::Render::ShapeDataInterface & shape, const Scaleform::Render::Matrix2x4<float> & trans, Scaleform::Render::Rect<float> * bounds); // 0x14034CDE0
Scaleform::Render::Rect<float> Scaleform::Render::ComputeBoundsFillAndStrokesSimplified<Scaleform::Render::Matrix2x4<float> >(const Scaleform::Render::ShapeDataInterface & shape, const Scaleform::Render::Matrix2x4<float> & trans, Scaleform::Render::BoundEdges edgesToCheck); // 0x14034AB70
Scaleform::Render::Rect<float> Scaleform::Render::ComputeBoundsRoundStrokeSorter<Scaleform::Render::Matrix2x4<float> >(const Scaleform::Render::ShapeDataInterface & shape, Scaleform::Render::ShapePosInfo * pos, unsigned long strokeStyleIdx, const Scaleform::Render::Matrix2x4<float> & trans, float scaledWidth, Scaleform::Render::StrokeGenerator * gen); // 0x14034AD90
Scaleform::Render::Rect<float> Scaleform::Render::ComputeBoundsSingleStroke<Scaleform::Render::Matrix2x4<float> >(const Scaleform::Render::ShapeDataInterface & shape, Scaleform::Render::ShapePosInfo * pos, unsigned long strokeStyleIdx, const Scaleform::Render::Matrix2x4<float> & trans, Scaleform::Render::StrokeGenerator * gen, const Scaleform::Render::ToleranceParams & tol); // 0x14034B850
void Scaleform::Render::ExpandBoundsToLayerStrokes<Scaleform::Render::Matrix2x4<float> >(const Scaleform::Render::ShapeDataInterface & shape, Scaleform::Render::ShapePosInfo * pos, const Scaleform::Render::Matrix2x4<float> & trans, Scaleform::Render::StrokeGenerator * gen, const Scaleform::Render::ToleranceParams & tol, Scaleform::Render::Rect<float> * bounds); // 0x14034BF10
void Scaleform::Render::ExpandBoundsToStrokes<Scaleform::Render::Matrix2x4<float> >(const Scaleform::Render::ShapeDataInterface & shape, const Scaleform::Render::Matrix2x4<float> & trans, Scaleform::Render::StrokeGenerator * gen, const Scaleform::Render::ToleranceParams & tol, Scaleform::Render::Rect<float> * bounds); // 0x14034CC90