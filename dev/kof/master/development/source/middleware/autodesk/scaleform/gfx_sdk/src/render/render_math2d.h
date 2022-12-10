#pragma once

float Scaleform::Render::Math2D::LinePointDistance(float x1, float y1, float x2, float y2, float x, float y); // 0x1403A40E0
float Scaleform::Render::Math2D::TurnRatio<Scaleform::Render::Hairliner::OutVertexType,Scaleform::Render::Hairliner::OutVertexType,Scaleform::Render::Hairliner::OutVertexType>(const Scaleform::Render::Hairliner::OutVertexType & v1, const Scaleform::Render::Hairliner::OutVertexType & v2, const Scaleform::Render::Hairliner::OutVertexType & v3, float len1, float len2); // 0x1403A2D20
float Scaleform::Render::Math2D::TurnRatio<Scaleform::Render::TessVertex,Scaleform::Render::TessVertex,Scaleform::Render::TessVertex>(const Scaleform::Render::TessVertex & v1, const Scaleform::Render::TessVertex & v2, const Scaleform::Render::TessVertex & v3, float len1, float len2); // 0x1403A2D20
bool Scaleform::Render::Math2D::Intersection(float ax, float ay, float bx, float by, float cx, float cy, float dx, float dy, float * x, float * y, float epsilon); // 0x1403B4D30
float Scaleform::Render::Math2D::PointToSegmentPos<Scaleform::Render::Point<float>,Scaleform::Render::Point<float> >(const Scaleform::Render::Point<float> & v1, const Scaleform::Render::Point<float> & v2, const Scaleform::Render::Point<float> & v); // 0x1403EDBD0
void Scaleform::Render::Math2D::CubicCurveExtremum(float x1, float x2, float x3, float x4, float * t1, float * t2); // 0x14034EB10
enum Scaleform::Render::Math2D::SegmentType
{
	Seg_MoveTo = 0,
	Seg_LineTo = 1,
	Seg_QuadTo = 2,
	Seg_CubicTo = 3,
	Seg_EndPath = 4,
};