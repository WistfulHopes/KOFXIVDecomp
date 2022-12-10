#pragma once

class CollisionModel
{
	enum MODELTYPE
	{
		MODELTYPE_NONE = 0,
		MODELTYPE_CUBE = 1,
		MODELTYPE_SPHERE = 2,
		MODELTYPE_BOARD = 3,
		MODELTYPE_FRUSTUM = 4,
	};
	enum CALCULATIONTYPE
	{
		CALCULATIONTYPE_DEFAULT = 0,
		CALCULATIONTYPE_EASY = 1,
		CALCULATIONTYPE_NOEMAL = 2,
	};
	struct CubeModelParams;
	struct SphereModelParams;
	struct BoardModelParams;
private:
	CollisionModel::MODELTYPE m_modelType; // 0x0
	CollisionModel::CubeModelParams * m_pCubeParams; // 0x8
	CollisionModel::SphereModelParams * m_pSphereParams; // 0x8
	CollisionModel::BoardModelParams * m_pBoardParams; // 0x8
	OGLMatrix m_transform; // 0x10
	long m_reserveRefreshParamsBits; // 0x50
	bool m_bRefreshTransVertex; // 0x54
	OGLVec3 * m_pPoints; // 0x58
	long m_pointCount; // 0x60
	OGLVec3 * m_pTransVertex; // 0x68
	OGLVec3 * m_pFaceCenters; // 0x70
	OGLVec3 * m_pFaceNormals; // 0x78
	OGLVec3 m_obbCenter; // 0x80
	OGLVec3 * m_pObbVectors; // 0x90
	OGLVec3 m_obbDistance; // 0x98
public:
	CollisionModel(const CollisionModel &);
	CollisionModel(const CollisionModel *);
	CollisionModel();
	~CollisionModel();
	void release();
	void copy(const CollisionModel *);
	bool isActive();
	CollisionModel::MODELTYPE getModelType();
	void setupCubeModel(const CollisionModel::CubeModelParams &);
	void setupSphereModel(const CollisionModel::SphereModelParams &);
	void setupBoardModel(const CollisionModel::BoardModelParams &);
	void setupFrustumModel(const OGLMatrix &, const OGLMatrix &);
	void transform(const OGLMatrix &);
	void transform(const OGLVec3 &, const OGLVec3 &);
	bool collisionTest(CollisionModel &);
	const CollisionModel::CubeModelParams * getCubeParams();
	const CollisionModel::SphereModelParams * getSphereParams();
	const CollisionModel::BoardModelParams * getBoardParams();
	long getVertexCount();
	const OGLVec3 * getTransVertex();
private:
	void clear();
	void initialize(CollisionModel::MODELTYPE, long);
	void setCullingParams();
	void setObbParams();
	void setCullingParams_CubeModel();
	void setObbParams_CubeModel();
	const OGLVec3 * getTransVertex_CubeModel();
	void setCullingParams_SphereModel();
	void setObbParams_SphereModel();
	const OGLVec3 * getTransVertex_SphereModel();
	void setCullingParams_BoardModel();
	void setObbParams_BoardModel();
	const OGLVec3 * getTransVertex_BoardModel();
	void setCullingParams_FrustumModel();
	void setObbParams_FrustumModel();
	const OGLVec3 * getTransVertex_FrustumModel();
	bool collisionTest_FrustumVsCube(CollisionModel &, CollisionModel &);
	bool collisionTest_CubeLineHitTest(CollisionModel &, CollisionModel &, long);
	bool collisionTest_CubeVsCube(CollisionModel &, CollisionModel &);
};
enum CollisionModel::MODELTYPE
{
	MODELTYPE_NONE = 0,
	MODELTYPE_CUBE = 1,
	MODELTYPE_SPHERE = 2,
	MODELTYPE_BOARD = 3,
	MODELTYPE_FRUSTUM = 4,
};
enum CollisionModel::CALCULATIONTYPE
{
	CALCULATIONTYPE_DEFAULT = 0,
	CALCULATIONTYPE_EASY = 1,
	CALCULATIONTYPE_NOEMAL = 2,
};
struct CollisionModel::CubeModelParams
{
	OGLVec3 size; // 0x0
	OGLVec3 position; // 0xC
	CollisionModel::CALCULATIONTYPE calculationType; // 0x18
	CubeModelParams(const CollisionModel::CubeModelParams &);
	CubeModelParams();
};
struct CollisionModel::SphereModelParams
{
	float radius; // 0x0
	OGLVec3 position; // 0x4
	SphereModelParams(const CollisionModel::SphereModelParams &);
	SphereModelParams();
};
struct CollisionModel::BoardModelParams
{
	float width; // 0x0
	float height; // 0x4
	OGLVec3 position; // 0x8
	bool bBillboard; // 0x14
	bool bEasyCalculation; // 0x15
	BoardModelParams(const CollisionModel::BoardModelParams &);
	BoardModelParams();
};