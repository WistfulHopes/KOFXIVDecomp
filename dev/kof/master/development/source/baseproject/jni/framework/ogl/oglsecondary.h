#pragma once

struct _SECONDARY_BONE_BASE_INFO
{
	unsigned char * pUseBone; // 0x0
	float fRadianLimitMax; // 0x8
	float fRadianLimitMin; // 0xC
	float fWeight; // 0x10
	float fRadius; // 0x14
	long iSettingFlg; // 0x18
	float fGravity; // 0x1C
	OGLVec3 vSize; // 0x20
	float fOffsetY; // 0x2C
	float fMass; // 0x30
	float fGround; // 0x34
	float fRegist; // 0x38
	OGLVec3 vRot; // 0x3C
	_SECONDARY_BONE_BASE_INFO(_SECONDARY_BONE_BASE_INFO &);
	_SECONDARY_BONE_BASE_INFO(const _SECONDARY_BONE_BASE_INFO &);
	_SECONDARY_BONE_BASE_INFO();
};
struct _SECONDARY_BONE_COLLISION_INFO
{
	long iBoneNo; // 0x0
	OGLVec3 vSize; // 0x4
	float fOffsetY; // 0x10
	long iSettingFlg; // 0x14
	_SECONDARY_BONE_COLLISION_INFO(_SECONDARY_BONE_COLLISION_INFO &);
	_SECONDARY_BONE_COLLISION_INFO(const _SECONDARY_BONE_COLLISION_INFO &);
	_SECONDARY_BONE_COLLISION_INFO();
};
struct _SECONDARY_BONE_BASE_INFO2
{
	long iBoneNo; // 0x0
	OGLVec3 vSize; // 0x4
	OGLVec3 vRot; // 0x10
	float fRadianLimitMax; // 0x1C
	float fRadianLimitMin; // 0x20
	float fWeight; // 0x24
	long iSettingFlg; // 0x28
	float fGravity; // 0x2C
	float fOffsetY; // 0x30
	float fMass; // 0x34
	float fGround; // 0x38
	float fTension; // 0x3C
	long iTensionBone; // 0x40
	long iColLen; // 0x44
	_SECONDARY_BONE_COLLISION_INFO * colInfo; // 0x48
	_SECONDARY_BONE_BASE_INFO2(_SECONDARY_BONE_BASE_INFO2 &);
	_SECONDARY_BONE_BASE_INFO2(const _SECONDARY_BONE_BASE_INFO2 &);
	_SECONDARY_BONE_BASE_INFO2();
};
struct _SECONDARY_BONE_INFO
{
	OGLVec3 vPrevAxis; // 0x0
	float fPrevRadian; // 0xC
	double mPrevPosWorldX[16]; // 0x10
	double mPrevPosWorldY[16]; // 0x90
	double mPrevPosWorldZ[16]; // 0x110
	long iStateFlg; // 0x190
	long iStateWorkFlg; // 0x194
	long iStateTakeOverFlg; // 0x198
	float fBlend; // 0x19C
	OGLMatrix mBaseMat; // 0x1A0
	OGLVec3 vScale; // 0x1E0
	OGLMatrix mBaseMat2; // 0x1EC
	OGLVec3 vScale2; // 0x22C
	float fPosY; // 0x238
	OGLVec3 vRebound; // 0x23C
	long iHitNo; // 0x248
	_SECONDARY_BONE_INFO(_SECONDARY_BONE_INFO &);
	_SECONDARY_BONE_INFO(const _SECONDARY_BONE_INFO &);
	_SECONDARY_BONE_INFO();
};
class OBB
{
protected:
	OGLVec3 m_Pos; // 0x0
	OGLVec3 m_NormDir[3]; // 0xC
	float m_fLength[3]; // 0x30
public:
	OGLVec3 * getDirect(long);
	float getLen_W(long);
	OGLVec3 * getPos_W();
	void setNormDir(OGLMatrix *, float, float, float);
	OBB(OBB &);
	OBB(const OBB &);
	OBB();
};
class OGLSecondary
{
public:
	unsigned long m_uiFormatVer; // 0x0
	unsigned long m_uiFormatType; // 0x4
	unsigned long m_uiBoneCount; // 0x8
	unsigned long m_uiBoneListCount; // 0xC
	_SECONDARY_BONE_BASE_INFO * m_pSecondaryBoneInfo; // 0x10
	_SECONDARY_BONE_BASE_INFO2 * m_pSecondaryBoneInfo2; // 0x18
	unsigned char * * m_cBoneName; // 0x20
	OGLSecondary();
	~OGLSecondary();
	void initialize();
	void finalize();
	static OGLSecondary * createSecondary(unsigned char *, long);
	static OGLSecondary * createSecondary(const char *);
	long loadOsecData(unsigned char *, unsigned long);
	unsigned char loadOsecData(const char *);
	void createFigureIndex();
	void setSecondaryParamater(long, float *, unsigned long);
	void setCollisionParamater(long, long, long, OGLVec3 *, float, unsigned long);
	static unsigned char checkOBBCollision(OGLMatrix *, float, float, float, OGLMatrix *, float, float, float);
	static unsigned char checkOBBSphereCollision(OGLMatrix *, float, float, float, OGLVec3 *, float);
	static unsigned char checkSphereCollision(OGLVec3 *, float, OGLVec3 *, float);
	static unsigned char ColObbs(OBB &, OBB &);
	static unsigned char ColObbSphere(OBB &, OGLVec3 &, float);
	static float distSqPointPoint(OGLVec3 *, OGLVec3 *);
	static float calcDistSegmentSegment(OGLVec3 *, OGLVec3 *, OGLVec3 *, OGLVec3 *);
	static unsigned char colCapsules(OGLVec3 *, OGLVec3 *, float, OGLVec3 *, OGLVec3 *, float);
};