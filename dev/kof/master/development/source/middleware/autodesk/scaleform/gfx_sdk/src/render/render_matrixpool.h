#pragma once

class Scaleform::Render::Matrix2x4<float> :
	Scaleform::Render::Matrix2x4Data<float>
{
public:
	static Scaleform::Render::Matrix2x4<float> Identity; // 0xFFFFFFFFFFFFFFFF
	enum NoInitType
	{
		NoInit = 0,
	};
	Matrix2x4<float>(float, float, float, float, float, float);
	Matrix2x4<float>(float, float, float, float, float, float, float, float);
	Matrix2x4<float>(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &);
	Matrix2x4<float>(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &);
	Matrix2x4<float>(const float *);
	Matrix2x4<float>(const Scaleform::Render::Matrix2x4<float> &);
	Matrix2x4<float>(Scaleform::Render::Matrix2x4<float>::NoInitType);
	Matrix2x4<float>();
	const float & Sx();
	float & Sx();
	const float & Shx();
	float & Shx();
	const float & Tx();
	float & Tx();
	const float & Shy();
	float & Shy();
	const float & Sy();
	float & Sy();
	const float & Ty();
	float & Ty();
	void SetMatrix(const float *);
	void SetMatrix(float, float, float, float, float, float);
	void SetMatrix(float, float, float, float, float, float, float, float);
	void SetMatrix(const Scaleform::Render::Matrix2x4<float> &);
	void SetIdentity();
	void SetZero();
	void GetAsFloat2x4(float[4] *);
	void SetInverse(const Scaleform::Render::Matrix2x4<float> &);
	Scaleform::Render::Matrix2x4<float> GetInverse();
	void SetLerp(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &, float);
	void Reset();
	void Swap(Scaleform::Render::Matrix2x4<float> *);
	Scaleform::Render::Matrix2x4<float> & Append(const Scaleform::Render::Matrix2x4<float> &);
	Scaleform::Render::Matrix2x4<float> & Append_NonOpt(const Scaleform::Render::Matrix2x4<float> &);
	Scaleform::Render::Matrix2x4<float> & Prepend(const Scaleform::Render::Matrix2x4<float> &);
	void SetToAppend(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &);
	void SetToAppend(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &);
	void SetToAppend_NonOpt(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &);
	void SetToAppend_NonOpt(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &);
	Scaleform::Render::Matrix2x4<float> & AppendScaling(Scaleform::Render::Size<float>);
	Scaleform::Render::Matrix2x4<float> & AppendScaling(float, float);
	Scaleform::Render::Matrix2x4<float> & AppendScaling(float);
	Scaleform::Render::Matrix2x4<float> & PrependScaling(Scaleform::Render::Size<float>);
	Scaleform::Render::Matrix2x4<float> & PrependScaling(float, float);
	Scaleform::Render::Matrix2x4<float> & PrependScaling(float);
	Scaleform::Render::Matrix2x4<float> & AppendShearing(float, float);
	Scaleform::Render::Matrix2x4<float> & PrependShearing(float, float);
	Scaleform::Render::Matrix2x4<float> & AppendRotation(float);
	Scaleform::Render::Matrix2x4<float> & PrependRotation(float);
	Scaleform::Render::Matrix2x4<float> & AppendTranslation(Scaleform::Render::Point<float>);
	Scaleform::Render::Matrix2x4<float> & AppendTranslation(float, float);
	Scaleform::Render::Matrix2x4<float> & PrependTranslation(Scaleform::Render::Point<float>);
	Scaleform::Render::Matrix2x4<float> & PrependTranslation(float, float);
	Scaleform::Render::Matrix2x4<float> & SetParlToParl(const float *, const float *);
	Scaleform::Render::Matrix2x4<float> & SetRectToParl(float, float, float, float, const float *);
	Scaleform::Render::Matrix2x4<float> & SetParlToRect(const float *, float, float, float, float);
	Scaleform::Render::Matrix2x4<float> & SetRectToRect(float, float, float, float, float, float, float, float);
	Scaleform::Render::Matrix2x4<float> & Invert();
	bool IsValid();
	bool DoesFlip();
	float GetDeterminant();
	float GetScale();
	float GetMaxScale();
	void SetXScale(float);
	void SetYScale(float);
	float GetXScale();
	float GetYScale();
	float GetRotation();
	double GetXScaleDouble();
	double GetYScaleDouble();
	double GetRotationDouble();
	bool IsFreeRotation(float);
	void Decompose(Scaleform::Render::Point<float> *, Scaleform::Render::Point<float> *, float *, Scaleform::Render::Matrix2x4<float> *);
	void Recompose(const Scaleform::Render::Point<float> &, const Scaleform::Render::Point<float> &, float, const Scaleform::Render::Matrix2x4<float> &);
	void Interpolate(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &, float);
	void Transform(float *, float *);
	Scaleform::Render::Point<float> Transform(const Scaleform::Render::Point<float> &);
	void Transform(Scaleform::Render::Point<float> *, const Scaleform::Render::Point<float> &);
	void Transform2x2(float *, float *);
	void TransformVector(Scaleform::Render::Point<float> *, const Scaleform::Render::Point<float> &);
	void TransformByInverse(float *, float *);
	Scaleform::Render::Point<float> TransformByInverse(const Scaleform::Render::Point<float> &);
	void TransformByInverse(Scaleform::Render::Point<float> *, const Scaleform::Render::Point<float> &);
	Scaleform::Render::Rect<float> EncloseTransform(const Scaleform::Render::Rect<float> &);
	void EncloseTransform(Scaleform::Render::Rect<float> *, const Scaleform::Render::Rect<float> &);
	void EncloseTransform_NonOpt(Scaleform::Render::Rect<float> *, const Scaleform::Render::Rect<float> &);
	void SetToAppend_Opt(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &, float *);
	void SetToAppend_Opt(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &, float *);
	Scaleform::Render::Matrix2x4<float> & Append_Opt(const Scaleform::Render::Matrix2x4<float> &, float *);
	static Scaleform::Render::Matrix2x4<float> Translation(float, float);
	static Scaleform::Render::Matrix2x4<float> Translation(const Scaleform::Render::Point<float> &);
	static Scaleform::Render::Matrix2x4<float> Scaling(Scaleform::Render::Size<float>);
	static Scaleform::Render::Matrix2x4<float> Scaling(float, float);
	static Scaleform::Render::Matrix2x4<float> Scaling(float);
	static Scaleform::Render::Matrix2x4<float> Shearing(float, float);
	static Scaleform::Render::Matrix2x4<float> Rotation(float);
	const Scaleform::Render::Matrix2x4<float> & operator=(const Scaleform::Render::Matrix2x4<float> &);
	const Scaleform::Render::Matrix2x4<float> & operator*=(const Scaleform::Render::Matrix2x4<float> &);
private:
	static float _cos(float);
	static double _cos(double);
	static float _sin(float);
	static double _sin(double);
	static float _tan(float);
	static double _tan(double);
	static float _abs(float);
	static double _abs(double);
	static double _atan2(double, double);
	static float _atan2(float, float);
	static double _sqrt(double);
	static float _sqrt(float);
};
class Scaleform::Render::Matrix3x4<float> :
	Scaleform::Render::Matrix3x4Data<float>
{
public:
	static Scaleform::Render::Matrix3x4<float> Identity; // 0xFFFFFFFFFFFFFFFF
	enum NoInitType
	{
		NoInit = 0,
	};
	Matrix3x4<float>(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix3x4<float> &);
	Matrix3x4<float>(const Scaleform::Render::Matrix3x4<float> &, const Scaleform::Render::Matrix2x4<float> &);
	Matrix3x4<float>(const Scaleform::Render::Matrix3x4<float> &, const Scaleform::Render::Matrix3x4<float> &);
	Matrix3x4<float>(const Scaleform::Render::Matrix4x4<float> &);
	Matrix3x4<float>(const Scaleform::Render::Matrix2x4<float> &);
	Matrix3x4<float>(const Scaleform::Render::Matrix3x4<float> &);
	Matrix3x4<float>(float, float, float, float, float, float, float, float, float, float, float, float);
	Matrix3x4<float>(const float[4] *);
	Matrix3x4<float>(const float *, long);
	Matrix3x4<float>();
	Matrix3x4<float>(Scaleform::Render::Matrix3x4<float>::NoInitType);
	bool IsValid();
	float * operator float *();
	const float * operator const float *();
	const float * Data();
	float * Data();
	float operator[](long);
	float operator[](long);
	void Set(const Scaleform::Render::Matrix3x4<float> &);
	void Set(const float[4] *);
	void Set(const float *, long);
	void Transpose(Scaleform::Render::Matrix4x4<float> *);
	void Transpose();
	void SetIdentity();
	void Clear();
	float GetXScale();
	float GetYScale();
	float GetZScale();
	void SetXScale(float);
	void SetYScale(float);
	void SetZScale(float);
	float GetScale();
	void GetScale(float *, float *, float *);
	static Scaleform::Render::Matrix3x4<float> Scaling(float, float, float);
	void GetTranslation(float *, float *, float *);
	const float & Tx();
	float & Tx();
	const float & Ty();
	float & Ty();
	const float & Tz();
	float & Tz();
	static Scaleform::Render::Matrix3x4<float> Translation(float, float, float);
	void MultiplyMatrix(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix3x4<float> &);
	void MultiplyMatrix(const Scaleform::Render::Matrix3x4<float> &, const Scaleform::Render::Matrix2x4<float> &);
	void MultiplyMatrix(const Scaleform::Render::Matrix3x4<float> &, const Scaleform::Render::Matrix3x4<float> &);
	void MultiplyMatrix_NonOpt(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix3x4<float> &);
	void MultiplyMatrix_NonOpt(const Scaleform::Render::Matrix3x4<float> &, const Scaleform::Render::Matrix2x4<float> &);
	void MultiplyMatrix_NonOpt(const Scaleform::Render::Matrix3x4<float> &, const Scaleform::Render::Matrix3x4<float> &);
	void Prepend(const Scaleform::Render::Matrix2x4<float> &);
	void Prepend(const Scaleform::Render::Matrix3x4<float> &);
	void Append(const Scaleform::Render::Matrix2x4<float> &);
	void Append(const Scaleform::Render::Matrix3x4<float> &);
	void SetToAppend(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix3x4<float> &);
	void SetToAppend(const Scaleform::Render::Matrix3x4<float> &, const Scaleform::Render::Matrix2x4<float> &);
	void SetToAppend(const Scaleform::Render::Matrix3x4<float> &, const Scaleform::Render::Matrix3x4<float> &);
	void SetToPrepend(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix3x4<float> &);
	void SetToPrepend(const Scaleform::Render::Matrix3x4<float> &, const Scaleform::Render::Matrix2x4<float> &);
	void SetToPrepend(const Scaleform::Render::Matrix3x4<float> &, const Scaleform::Render::Matrix3x4<float> &);
	const Scaleform::Render::Matrix3x4<float> & operator=(const Scaleform::Render::Matrix3x4<float> &);
	Scaleform::Render::Matrix3x4<float> GetInverse();
	void SetInverse(const Scaleform::Render::Matrix3x4<float> &);
	void Invert();
	Scaleform::Render::Point<float> Transform(const Scaleform::Render::Point<float> &);
	void Transform(Scaleform::Render::Point<float> *, const Scaleform::Render::Point<float> &);
	Scaleform::Render::Point3<float> Transform(const Scaleform::Render::Point3<float> &);
	void Transform(Scaleform::Render::Point3<float> *, const Scaleform::Render::Point3<float> &);
	Scaleform::Render::Point3<float> TransformVector(const Scaleform::Render::Point3<float> &);
	Scaleform::Render::Point3<float> TransformNormal(const Scaleform::Render::Point3<float> &);
	Scaleform::Render::Point<float> TransformByInverse(const Scaleform::Render::Point<float> &);
	Scaleform::Render::Rect<float> EncloseTransform(const Scaleform::Render::Rect<float> &);
	void EncloseTransform(Scaleform::Render::Rect<float> *, const Scaleform::Render::Rect<float> &);
	float GetDeterminant();
	void GetRotation(float *, float *, float *);
	static Scaleform::Render::Matrix3x4<float> RotationX(float);
	static Scaleform::Render::Matrix3x4<float> RotationY(float);
	static Scaleform::Render::Matrix3x4<float> RotationZ(float);
	static Scaleform::Render::Matrix3x4<float> Rotation(float, const Scaleform::Render::Point3<float> &, const Scaleform::Render::Point3<float> &);
	static Scaleform::Render::Matrix3x4<float> Rotation(float, const Scaleform::Render::Point3<float> &);
	void ViewRH(const Scaleform::Render::Point3<float> &, const Scaleform::Render::Point3<float> &, const Scaleform::Render::Point3<float> &);
	void ViewLH(const Scaleform::Render::Point3<float> &, const Scaleform::Render::Point3<float> &, const Scaleform::Render::Point3<float> &);
	void View(const Scaleform::Render::Point3<float> &, const Scaleform::Render::Point3<float> &, const Scaleform::Render::Point3<float> &);
	void PerspectiveRH(float, float, float, float);
	void PerspectiveLH(float, float, float, float);
	void PerspectiveViewVolRH(float, float, float, float);
	void PerspectiveViewVolLH(float, float, float, float);
	void PerspectiveOffCenterLH(float, float, float, float, float, float);
	void PerspectiveOffCenterRH(float, float, float, float, float, float);
	void OrthoRH(float, float, float, float);
	void OrthoLH(float, float, float, float);
	void OrthoOffCenterRH(float, float, float, float, float, float);
	void OrthoOffCenterLH(float, float, float, float, float, float);
	bool Decompose(float[3] &, float[3] &, float[3] &, float[4] &, Scaleform::Render::RotationType);
	void Recompose(const float[3] &, const float[3] &, const float[3] &, const float[4] &, Scaleform::Render::RotationType);
	void Interpolate(const Scaleform::Render::Matrix3x4<float> &, const Scaleform::Render::Matrix3x4<float> &, float);
private:
	void GetEulerAngles(float *, float *, float *);
	void GetAngles(float *, float *, float *);
};
enum Scaleform::Render::MatrixPoolImpl::<unnamed-enum-Pool_DataUnitSize>
{
	Pool_DataUnitSize = 16,
	Pool_DataUnitAlign = 16,
	Pool_DataUnitMask = 15,
	Pool_UserDataUnits = 4,
	Pool_UserDataSize = 64,
};
class Scaleform::Render::MatrixPoolImpl::HMatrixConstants
{
	enum ElementIndex
	{
		Element_Cxform = 0,
		Element_T0 = 1,
		Element_T1 = 2,
		Element_UserData = 3,
		Element_Matrix = 4,
		Element_Last_Index = 4,
	};
	enum FormatBits
	{
		Has_Cxform = 1,
		Has_T0 = 2,
		Has_T1 = 4,
		Has_UserData = 8,
		Has_3D = 16,
		Has_2D = 0,
		Has_T0_T1 = 6,
		Has_Cxform_T0 = 3,
		Has_Cxform_T0_T1 = 7,
		Has_Cxform_3D = 17,
		Has_Cxform_T0_3D = 19,
		Has_Cxform_T0_T1_3D = 23,
	};
	enum <unnamed-enum-Has_TableSize>
	{
		Has_TableSize = 16,
		Has_TableMask = 15,
	};
	struct ElementsInfo;
public:
	static Scaleform::Render::MatrixPoolImpl::HMatrixConstants::ElementsInfo MatrixElementSizeTable[16]; // 0xFFFFFFFFFFFFFFFF
	static unsigned long GetFormatDataSize(unsigned long);
};
struct Scaleform::Render::MatrixPoolImpl::HMatrixConstants::ElementsInfo
{
	unsigned char Offsets[5]; // 0x0
};
struct Scaleform::Render::MatrixPoolImpl::EntryHandle
{
	enum ElementIndex
	{
		Element_Cxform = 0,
		Element_T0 = 1,
		Element_T1 = 2,
		Element_UserData = 3,
		Element_Matrix = 4,
		Element_Last_Index = 4,
	};
	Scaleform::Render::MatrixPoolImpl::DataHeader * pHeader; // 0x0
	Scaleform::Render::MatrixPoolImpl::EntryHandle * pNext; // 0x0
	void ReleaseHandle();
	Scaleform::Render::MatrixPoolImpl::HandlePage * GetHandlePage();
	void ReallocToFormat(unsigned long);
	void ReallocAddElement(Scaleform::Render::MatrixPoolImpl::HMatrixConstants::ElementIndex);
	void AddRef();
	void Release();
	void * GetData(Scaleform::Render::MatrixPoolImpl::HMatrixConstants::ElementIndex);
	void * GetUserDataPtr();
	Scaleform::Render::Matrix2x4<float> * GetMatrixPtr();
	Scaleform::Render::Matrix3x4<float> * GetMatrix3DPtr();
	Scaleform::Render::Cxform * GetCxformPtr();
	Scaleform::Render::Matrix2x4<float> * GetTextureMatrixPtr(Scaleform::Render::MatrixPoolImpl::HMatrixConstants::ElementIndex);
	bool FormatHasElement(Scaleform::Render::MatrixPoolImpl::HMatrixConstants::ElementIndex);
	unsigned long GetFormatBits();
};
class Scaleform::Render::MatrixPoolImpl::EntryHandleTable
{
private:
	Scaleform::MemoryHeap * pHeap; // 0x0
	Scaleform::Render::MatrixPoolImpl::MatrixPool * pPool; // 0x8
	Scaleform::List<Scaleform::Render::MatrixPoolImpl::HandlePage,Scaleform::Render::MatrixPoolImpl::HandlePageBase,Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::HandlePageBase> > FullPages; // 0x10
	Scaleform::List<Scaleform::Render::MatrixPoolImpl::HandlePage,Scaleform::Render::MatrixPoolImpl::HandlePageBase,Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::HandlePageBase> > PartiallyFreePages; // 0x20
	bool allocEntryPage();
	void freeEntryPage(Scaleform::Render::MatrixPoolImpl::HandlePage *);
public:
	EntryHandleTable(Scaleform::MemoryHeap *, Scaleform::Render::MatrixPoolImpl::MatrixPool *);
	~EntryHandleTable();
	Scaleform::Render::MatrixPoolImpl::EntryHandle * AllocEntry(Scaleform::Render::MatrixPoolImpl::DataHeader *);
	void FreeEntry(Scaleform::Render::MatrixPoolImpl::EntryHandle *);
};
class Scaleform::List<Scaleform::Render::MatrixPoolImpl::HandlePage,Scaleform::Render::MatrixPoolImpl::HandlePageBase,Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::HandlePageBase> >
{
	struct ValueType;
private:
	List<Scaleform::Render::MatrixPoolImpl::HandlePage,Scaleform::Render::MatrixPoolImpl::HandlePageBase,Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::HandlePageBase> >(const Scaleform::List<Scaleform::Render::MatrixPoolImpl::HandlePage,Scaleform::Render::MatrixPoolImpl::HandlePage,Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::HandlePage> > &);
public:
	List<Scaleform::Render::MatrixPoolImpl::HandlePage,Scaleform::Render::MatrixPoolImpl::HandlePageBase,Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::HandlePageBase> >();
	void Clear();
	Scaleform::Render::MatrixPoolImpl::HandlePage * GetFirst();
	Scaleform::Render::MatrixPoolImpl::HandlePage * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Render::MatrixPoolImpl::HandlePage *);
	bool IsLast(const Scaleform::Render::MatrixPoolImpl::HandlePage *);
	bool IsNull(const Scaleform::Render::MatrixPoolImpl::HandlePage *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::Render::MatrixPoolImpl::HandlePage * GetPrev(const Scaleform::Render::MatrixPoolImpl::HandlePage *);
	static Scaleform::Render::MatrixPoolImpl::HandlePage * GetNext(const Scaleform::Render::MatrixPoolImpl::HandlePage *);
	void PushFront(Scaleform::Render::MatrixPoolImpl::HandlePage *);
	void PushBack(Scaleform::Render::MatrixPoolImpl::HandlePage *);
	static void Remove(Scaleform::Render::MatrixPoolImpl::HandlePage *);
	void BringToFront(Scaleform::Render::MatrixPoolImpl::HandlePage *);
	void SendToBack(Scaleform::Render::MatrixPoolImpl::HandlePage *);
	void PushListToFront(Scaleform::List<Scaleform::Render::MatrixPoolImpl::HandlePage,Scaleform::Render::MatrixPoolImpl::HandlePage,Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::HandlePage> > &);
	void PushListToBack(Scaleform::List<Scaleform::Render::MatrixPoolImpl::HandlePage,Scaleform::Render::MatrixPoolImpl::HandlePage,Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::HandlePage> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::Render::MatrixPoolImpl::HandlePage,Scaleform::Render::MatrixPoolImpl::HandlePage,Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::HandlePage> > &, Scaleform::Render::MatrixPoolImpl::HandlePage *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::Render::MatrixPoolImpl::HandlePage,Scaleform::Render::MatrixPoolImpl::HandlePage,Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::HandlePage> > &, Scaleform::Render::MatrixPoolImpl::HandlePage *);
	void PushListItemsToFront(Scaleform::Render::MatrixPoolImpl::HandlePage *, Scaleform::Render::MatrixPoolImpl::HandlePage *);
private:
	Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::HandlePageBase> Root; // 0x0
};
class Scaleform::Render::MatrixPoolImpl::DataHeader :
	Scaleform::Render::MatrixPoolImpl::HMatrixConstants
{
public:
	Scaleform::Render::MatrixPoolImpl::EntryHandle * pHandle; // 0x0
	unsigned long RefCount; // 0x8
	short DataPageOffset; // 0xC
	unsigned char UnitSize; // 0xE
	unsigned char Format; // 0xF
	void AddRef();
	void Release();
	unsigned char * GetDataStart();
	void * GetData(Scaleform::Render::MatrixPoolImpl::HMatrixConstants::ElementIndex);
	void * GetUserDataPtr();
	Scaleform::Render::Matrix2x4<float> * GetMatrixPtr();
	Scaleform::Render::Matrix3x4<float> * GetMatrix3DPtr();
	Scaleform::Render::Cxform * GetCxformPtr();
	Scaleform::Render::Matrix2x4<float> * GetTextureMatrixPtr(Scaleform::Render::MatrixPoolImpl::HMatrixConstants::ElementIndex);
	const Scaleform::Render::MatrixPoolImpl::HMatrixConstants::ElementsInfo & GetElementInfo();
	bool FormatHasElement(Scaleform::Render::MatrixPoolImpl::HMatrixConstants::ElementIndex);
	unsigned long GetFormatBits();
	Scaleform::Render::MatrixPoolImpl::DataPage * GetDataPage();
	Scaleform::Render::MatrixPoolImpl::DataHeader * GetNextHeader(unsigned long);
};
class Scaleform::Render::MatrixPoolImpl::HMatrix :
	Scaleform::Render::MatrixPoolImpl::HMatrixConstants
{
private:
	Scaleform::Render::MatrixPoolImpl::EntryHandle * pHandle; // 0x0
	static Scaleform::Render::MatrixPoolImpl::EntryHandle NullHandle; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::MatrixPoolImpl::HMatrixConstants::ElementIndex toTextureElementIndex(unsigned long);
public:
	HMatrix(const Scaleform::Render::MatrixPoolImpl::HMatrix &);
	HMatrix();
private:
	HMatrix(Scaleform::Render::MatrixPoolImpl::EntryHandle *);
public:
	~HMatrix();
	void Clear();
	bool IsNull();
	void operator=(const Scaleform::Render::MatrixPoolImpl::HMatrix &);
	bool operator==(const Scaleform::Render::MatrixPoolImpl::HMatrix &);
	bool operator!=(const Scaleform::Render::MatrixPoolImpl::HMatrix &);
	void SetMatrix2D(const Scaleform::Render::Matrix2x4<float> &);
	void SetCxform(const Scaleform::Render::Cxform &);
	void SetTextureMatrix(const Scaleform::Render::Matrix2x4<float> &, unsigned long);
	void SetMatrix3D(const Scaleform::Render::Matrix3x4<float> &);
	void SetUserData(const void *, unsigned long long);
	void SetUserDataFloat(const float *, unsigned long long);
	const Scaleform::Render::Matrix3x4<float> & GetMatrix3D();
	const Scaleform::Render::Matrix2x4<float> & GetMatrix2D();
	const Scaleform::Render::Cxform & GetCxform();
	const Scaleform::Render::Matrix2x4<float> & GetTextureMatrix(unsigned long);
	const void * GetUserData();
	const float * GetUserDataFloat();
	unsigned long GetFormatBits();
	bool HasCxform();
	bool HasTextureMatrix(unsigned long);
	bool HasUserData();
	bool Has3D();
};
const Scaleform::Render::Cxform & Scaleform::Render::MatrixPoolImpl::HMatrix::GetCxform(); // 0x1405BF2C0
class Scaleform::RefCountBase<Scaleform::Render::MatrixPoolImpl::MatrixPool,73> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,73>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 73,
	};
public:
	RefCountBase<Scaleform::Render::MatrixPoolImpl::MatrixPool,73>(Scaleform::RefCountBase<Scaleform::Render::MatrixPoolImpl::MatrixPool,73> &);
	RefCountBase<Scaleform::Render::MatrixPoolImpl::MatrixPool,73>(const Scaleform::RefCountBase<Scaleform::Render::MatrixPoolImpl::MatrixPool,73> &);
	RefCountBase<Scaleform::Render::MatrixPoolImpl::MatrixPool,73>();
	virtual ~RefCountBase<Scaleform::Render::MatrixPoolImpl::MatrixPool,73>();
	Scaleform::RefCountBase<Scaleform::Render::MatrixPoolImpl::MatrixPool,73> & operator=(Scaleform::RefCountBase<Scaleform::Render::MatrixPoolImpl::MatrixPool,73> &);
	Scaleform::RefCountBase<Scaleform::Render::MatrixPoolImpl::MatrixPool,73> & operator=(const Scaleform::RefCountBase<Scaleform::Render::MatrixPoolImpl::MatrixPool,73> &);
};
class Scaleform::Render::MatrixPoolImpl::MatrixPool :
	Scaleform::RefCountBase<Scaleform::Render::MatrixPoolImpl::MatrixPool,73>,
	Scaleform::Render::MatrixPoolImpl::HMatrixConstants
{
public:
	MatrixPool(Scaleform::MemoryHeap *);
	virtual ~MatrixPool();
	Scaleform::Render::MatrixPoolImpl::HMatrix CreateMatrix(const Scaleform::Render::Matrix3x4<float> &, const Scaleform::Render::Cxform &, unsigned long);
	Scaleform::Render::MatrixPoolImpl::HMatrix CreateMatrix(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Cxform &, unsigned long);
	Scaleform::Render::MatrixPoolImpl::HMatrix CreateMatrix(const Scaleform::Render::Matrix3x4<float> &, unsigned long);
	Scaleform::Render::MatrixPoolImpl::HMatrix CreateMatrix(const Scaleform::Render::Matrix2x4<float> &, unsigned long);
	Scaleform::Render::MatrixPoolImpl::HMatrix CreateMatrix(unsigned long);
	enum SqueezeType
	{
		Squeeze_Incremental = 0,
		Squeeze_Full = 1,
		Squeeze_Force = 2,
	};
	bool MemorySqueeze(Scaleform::Render::MatrixPoolImpl::MatrixPool::SqueezeType);
	unsigned long long GetAllocatedSpace();
private:
	Scaleform::MemoryHeap * pHeap; // 0x10
	unsigned long long AllocatedSpace; // 0x18
	unsigned long long DataPageCount; // 0x20
	unsigned long long FreedSpace; // 0x28
	Scaleform::Render::MatrixPoolImpl::EntryHandleTable HandleTable; // 0x30
	Scaleform::List<Scaleform::Render::MatrixPoolImpl::DataPage,Scaleform::Render::MatrixPoolImpl::DataPage,Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::DataPage> > DataPages; // 0x60
	Scaleform::Render::MatrixPoolImpl::DataPage * pAllocPage; // 0x70
	Scaleform::Render::MatrixPoolImpl::DataPage * pSqueezePage; // 0x78
	Scaleform::Render::MatrixPoolImpl::DataPage * pLastFreedPage; // 0x80
	Scaleform::Render::MatrixPoolImpl::MatrixPool * getThis();
	Scaleform::Render::MatrixPoolImpl::EntryHandle * createMatrixHelper(const Scaleform::Render::Matrix3x4<float> &, const Scaleform::Render::Cxform &, unsigned long);
	Scaleform::Render::MatrixPoolImpl::EntryHandle * createMatrixHelper(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Cxform &, unsigned long);
	bool allocDataPage();
	void freeDataPage(Scaleform::Render::MatrixPoolImpl::DataPage *);
	bool ensureAllocSpace(unsigned long long);
	Scaleform::Render::MatrixPoolImpl::DataHeader * allocData(unsigned long long, Scaleform::Render::MatrixPoolImpl::EntryHandle *);
	Scaleform::Render::MatrixPoolImpl::EntryHandle * allocMatrixData(unsigned long);
	bool reallocMatrixData(Scaleform::Render::MatrixPoolImpl::EntryHandle *, unsigned long);
	bool squeezeMemoryRange(Scaleform::Render::MatrixPoolImpl::DataPage *, Scaleform::Render::MatrixPoolImpl::DataPage *, Scaleform::Render::MatrixPoolImpl::MatrixPool::SqueezeType);
};
class Scaleform::List<Scaleform::Render::MatrixPoolImpl::DataPage,Scaleform::Render::MatrixPoolImpl::DataPage,Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::DataPage> >
{
	struct ValueType;
private:
	List<Scaleform::Render::MatrixPoolImpl::DataPage,Scaleform::Render::MatrixPoolImpl::DataPage,Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::DataPage> >(const Scaleform::List<Scaleform::Render::MatrixPoolImpl::DataPage,Scaleform::Render::MatrixPoolImpl::DataPage,Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::DataPage> > &);
public:
	List<Scaleform::Render::MatrixPoolImpl::DataPage,Scaleform::Render::MatrixPoolImpl::DataPage,Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::DataPage> >();
	void Clear();
	Scaleform::Render::MatrixPoolImpl::DataPage * GetFirst();
	Scaleform::Render::MatrixPoolImpl::DataPage * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Render::MatrixPoolImpl::DataPage *);
	bool IsLast(const Scaleform::Render::MatrixPoolImpl::DataPage *);
	bool IsNull(const Scaleform::Render::MatrixPoolImpl::DataPage *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::Render::MatrixPoolImpl::DataPage * GetPrev(const Scaleform::Render::MatrixPoolImpl::DataPage *);
	static Scaleform::Render::MatrixPoolImpl::DataPage * GetNext(const Scaleform::Render::MatrixPoolImpl::DataPage *);
	void PushFront(Scaleform::Render::MatrixPoolImpl::DataPage *);
	void PushBack(Scaleform::Render::MatrixPoolImpl::DataPage *);
	static void Remove(Scaleform::Render::MatrixPoolImpl::DataPage *);
	void BringToFront(Scaleform::Render::MatrixPoolImpl::DataPage *);
	void SendToBack(Scaleform::Render::MatrixPoolImpl::DataPage *);
	void PushListToFront(Scaleform::List<Scaleform::Render::MatrixPoolImpl::DataPage,Scaleform::Render::MatrixPoolImpl::DataPage,Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::DataPage> > &);
	void PushListToBack(Scaleform::List<Scaleform::Render::MatrixPoolImpl::DataPage,Scaleform::Render::MatrixPoolImpl::DataPage,Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::DataPage> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::Render::MatrixPoolImpl::DataPage,Scaleform::Render::MatrixPoolImpl::DataPage,Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::DataPage> > &, Scaleform::Render::MatrixPoolImpl::DataPage *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::Render::MatrixPoolImpl::DataPage,Scaleform::Render::MatrixPoolImpl::DataPage,Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::DataPage> > &, Scaleform::Render::MatrixPoolImpl::DataPage *);
	void PushListItemsToFront(Scaleform::Render::MatrixPoolImpl::DataPage *, Scaleform::Render::MatrixPoolImpl::DataPage *);
private:
	const Scaleform::List<Scaleform::Render::MatrixPoolImpl::DataPage,Scaleform::Render::MatrixPoolImpl::DataPage,Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::DataPage> > & operator=(const Scaleform::List<Scaleform::Render::MatrixPoolImpl::DataPage,Scaleform::Render::MatrixPoolImpl::DataPage,Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::DataPage> > &);
	Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::DataPage> Root; // 0x0
};