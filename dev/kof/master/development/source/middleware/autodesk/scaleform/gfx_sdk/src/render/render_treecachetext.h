#pragma once

class Scaleform::Render::TreeCacheText :
	Scaleform::Render::TreeCacheMeshBase
{
public:
	TreeCacheText(const Scaleform::Render::TreeCacheText &);
	TreeCacheText(Scaleform::Render::TreeText *, Scaleform::Render::GlyphCache *, unsigned long);
	virtual ~TreeCacheText();
	class NodeData;
	Scaleform::Render::TreeText * GetNode();
	const Scaleform::Render::TreeText::NodeData * GetNodeData();
	void UpdateCache(Scaleform::Render::TreeCacheContainer *, unsigned short);
	virtual void UpdateChildSubtree(Scaleform::Render::HAL *, const Scaleform::Render::TreeNode::NodeData *, unsigned short);
	virtual void UpdateTransform(Scaleform::Render::HAL *, const Scaleform::Render::TreeNode::NodeData *, const Scaleform::Render::TransformArgs &, Scaleform::Render::TransformFlags);
	virtual void HandleChanges(Scaleform::Render::HAL *, unsigned long);
	void UpdateDistanceFieldUniforms();
	virtual void propagateMaskFlag(Scaleform::Render::HAL *, unsigned long);
	virtual Scaleform::Render::MeshBase * GetMesh(Scaleform::Render::HAL *);
	virtual void RemoveMesh();
	Scaleform::Render::TextMeshProvider * GetMeshProvider();
	Scaleform::Render::TextMeshProvider * CreateMeshProvider(Scaleform::Render::HAL *);
	Scaleform::Render::Bundle * GetBundle();
	Scaleform::Render::TreeCacheText * pNextNoBatch; // 0xB8
protected:
	virtual void propagateEdgeAA(Scaleform::Render::HAL *, Scaleform::Render::EdgeAAMode);
	virtual void propagate3DFlag(Scaleform::Render::HAL *, unsigned long);
	void getMatrix4F(Scaleform::Render::Matrix4x4<float> *, const Scaleform::Render::Matrix4x4<float> &);
	unsigned long calcMeshGenFlags();
	virtual void forceUpdateImages(Scaleform::Render::HAL *);
	Scaleform::Render::TextMeshProvider TMProvider; // 0xC0
public:
	Scaleform::Render::TreeCacheText & operator=(const Scaleform::Render::TreeCacheText &);
};
Scaleform::Render::MeshBase * Scaleform::Render::TreeCacheText::GetMesh(Scaleform::Render::HAL * __formal); // 0x1400470F0
void Scaleform::Render::TreeCacheText::RemoveMesh(); // 0x14002E7C0