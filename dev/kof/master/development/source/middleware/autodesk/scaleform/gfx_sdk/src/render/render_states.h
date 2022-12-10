#pragma once

enum Scaleform::Render::BlendMode
{
	Blend_None = 0,
	Blend_Normal = 1,
	Blend_Layer = 2,
	Blend_Multiply = 3,
	Blend_Screen = 4,
	Blend_Lighten = 5,
	Blend_Darken = 6,
	Blend_Difference = 7,
	Blend_Add = 8,
	Blend_Subtract = 9,
	Blend_Invert = 10,
	Blend_Alpha = 11,
	Blend_Erase = 12,
	Blend_Overlay = 13,
	Blend_HardLight = 14,
	Blend_Overwrite = 15,
	Blend_OverwriteAll = 16,
	Blend_FullAdditive = 17,
	Blend_FilterBlend = 18,
	Blend_Ignore = 19,
	Blend_Count = 20,
	Blend_Invalid = 21,
};
class Scaleform::Render::BlendState :
	Scaleform::Render::State
{
	class Interface;
public:
	static Scaleform::Render::StateData::Interface_Value InterfaceImpl; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::StateType GetType_Static();
	BlendState(Scaleform::Render::BlendState &);
	BlendState(const Scaleform::Render::BlendState &);
	BlendState(Scaleform::Render::BlendMode);
	Scaleform::Render::BlendMode GetBlendMode();
	static bool IsTargetAllocationNeededForBlendMode(Scaleform::Render::BlendMode);
	~BlendState();
};
class Scaleform::Render::Scale9State :
	Scaleform::Render::State
{
	class Interface;
public:
	static Scaleform::Render::StateData::Interface_RefCountImpl InterfaceImpl; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::StateType GetType_Static();
	Scale9State(Scaleform::Render::Scale9State &);
	Scale9State(const Scaleform::Render::Scale9State &);
	Scale9State(Scaleform::Render::Scale9GridRect *);
	Scaleform::Render::Rect<float> GetRect();
	~Scale9State();
};
class Scaleform::Render::MaskNodeState :
	Scaleform::Render::State
{
	class Interface;
public:
	static Scaleform::Render::MaskNodeState::Interface InterfaceImpl; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::StateType GetType_Static();
	MaskNodeState(Scaleform::Render::MaskNodeState &);
	MaskNodeState(const Scaleform::Render::MaskNodeState &);
	MaskNodeState(Scaleform::Render::TreeNode *);
	Scaleform::Render::TreeNode * GetNode();
	~MaskNodeState();
};
class Scaleform::Render::MaskNodeState::Interface :
	Scaleform::Render::StateData::Interface
{
public:
	Interface(Scaleform::Render::MaskNodeState::Interface &);
	Interface(const Scaleform::Render::MaskNodeState::Interface &);
	Interface();
	virtual void AddRef(void *, Scaleform::Render::StateData::Interface::RefBehaviour);
	virtual void Release(void *, Scaleform::Render::StateData::Interface::RefBehaviour);
	virtual ~Interface();
	Scaleform::Render::MaskNodeState::Interface & operator=(Scaleform::Render::MaskNodeState::Interface &);
	Scaleform::Render::MaskNodeState::Interface & operator=(const Scaleform::Render::MaskNodeState::Interface &);
};
class Scaleform::Render::ViewMatrix3DState :
	Scaleform::Render::State
{
	class Interface;
public:
	static Scaleform::Render::StateData::Interface_RefCountImpl InterfaceImpl; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::StateType GetType_Static();
	ViewMatrix3DState(Scaleform::Render::ViewMatrix3DState &);
	ViewMatrix3DState(const Scaleform::Render::ViewMatrix3DState &);
	ViewMatrix3DState(const Scaleform::Render::Matrix3x4Ref<float> *);
	const Scaleform::Render::Matrix3x4Ref<float> * GetViewMatrix3D();
	~ViewMatrix3DState();
};
class Scaleform::RefCountBase<Scaleform::Render::Matrix3x4<float>,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::Render::Matrix3x4<float>,2>(Scaleform::RefCountBase<Scaleform::Render::Matrix3x4<float>,2> &);
	RefCountBase<Scaleform::Render::Matrix3x4<float>,2>(const Scaleform::RefCountBase<Scaleform::Render::Matrix3x4<float>,2> &);
	RefCountBase<Scaleform::Render::Matrix3x4<float>,2>();
	virtual ~RefCountBase<Scaleform::Render::Matrix3x4<float>,2>();
	Scaleform::RefCountBase<Scaleform::Render::Matrix3x4<float>,2> & operator=(Scaleform::RefCountBase<Scaleform::Render::Matrix3x4<float>,2> &);
	Scaleform::RefCountBase<Scaleform::Render::Matrix3x4<float>,2> & operator=(const Scaleform::RefCountBase<Scaleform::Render::Matrix3x4<float>,2> &);
};
class Scaleform::Render::ProjectionMatrix3DState :
	Scaleform::Render::State
{
	class Interface;
public:
	static Scaleform::Render::StateData::Interface_RefCountImpl InterfaceImpl; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::StateType GetType_Static();
	ProjectionMatrix3DState(Scaleform::Render::ProjectionMatrix3DState &);
	ProjectionMatrix3DState(const Scaleform::Render::ProjectionMatrix3DState &);
	ProjectionMatrix3DState(const Scaleform::Render::Matrix4x4Ref<float> *);
	const Scaleform::Render::Matrix4x4Ref<float> * GetProjectionMatrix3D();
	~ProjectionMatrix3DState();
};
class Scaleform::RefCountBase<Scaleform::Render::Matrix4x4<float>,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::Render::Matrix4x4<float>,2>(Scaleform::RefCountBase<Scaleform::Render::Matrix4x4<float>,2> &);
	RefCountBase<Scaleform::Render::Matrix4x4<float>,2>(const Scaleform::RefCountBase<Scaleform::Render::Matrix4x4<float>,2> &);
	RefCountBase<Scaleform::Render::Matrix4x4<float>,2>();
	virtual ~RefCountBase<Scaleform::Render::Matrix4x4<float>,2>();
	Scaleform::RefCountBase<Scaleform::Render::Matrix4x4<float>,2> & operator=(Scaleform::RefCountBase<Scaleform::Render::Matrix4x4<float>,2> &);
	Scaleform::RefCountBase<Scaleform::Render::Matrix4x4<float>,2> & operator=(const Scaleform::RefCountBase<Scaleform::Render::Matrix4x4<float>,2> &);
};
class Scaleform::Render::UserDataState :
	Scaleform::Render::State
{
	struct Data;
	class Interface;
public:
	static Scaleform::Render::StateData::Interface_RefCountImpl InterfaceImpl; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::StateType GetType_Static();
	UserDataState(Scaleform::Render::UserDataState &);
	UserDataState(const Scaleform::Render::UserDataState &);
	UserDataState(const Scaleform::Render::UserDataState::Data *);
	Scaleform::Render::UserDataState::Data * GetUserData();
	~UserDataState();
};
struct Scaleform::Render::UserDataState::Data :
	Scaleform::RefCountBase<Scaleform::Render::UserDataState::Data,2>
{
	enum DataFlags
	{
		Data_String = 1,
		Data_Float = 2,
		Data_Batching = 4,
	};
	Scaleform::StringLH RendererString; // 0x10
	float RendererFloat; // 0x18
	bool BatchingDisabled; // 0x1C
	unsigned long Flags; // 0x20
	Data(Scaleform::Render::UserDataState::Data &);
	Data(const Scaleform::Render::UserDataState::Data &);
	Data();
	virtual ~Data();
	Scaleform::Render::UserDataState::Data & operator=(Scaleform::Render::UserDataState::Data &);
	Scaleform::Render::UserDataState::Data & operator=(const Scaleform::Render::UserDataState::Data &);
};
class Scaleform::RefCountBase<Scaleform::Render::UserDataState::Data,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::Render::UserDataState::Data,2>(Scaleform::RefCountBase<Scaleform::Render::UserDataState::Data,2> &);
	RefCountBase<Scaleform::Render::UserDataState::Data,2>(const Scaleform::RefCountBase<Scaleform::Render::UserDataState::Data,2> &);
	RefCountBase<Scaleform::Render::UserDataState::Data,2>();
	virtual ~RefCountBase<Scaleform::Render::UserDataState::Data,2>();
	Scaleform::RefCountBase<Scaleform::Render::UserDataState::Data,2> & operator=(Scaleform::RefCountBase<Scaleform::Render::UserDataState::Data,2> &);
	Scaleform::RefCountBase<Scaleform::Render::UserDataState::Data,2> & operator=(const Scaleform::RefCountBase<Scaleform::Render::UserDataState::Data,2> &);
};
class Scaleform::Render::OrigScale9ParentState :
	Scaleform::Render::State
{
	class Interface;
public:
	static Scaleform::Render::OrigScale9ParentState::Interface InterfaceImpl; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::StateType GetType_Static();
	OrigScale9ParentState(Scaleform::Render::OrigScale9ParentState &);
	OrigScale9ParentState(const Scaleform::Render::OrigScale9ParentState &);
	OrigScale9ParentState(const Scaleform::Render::TreeNode *);
	Scaleform::Render::TreeNode * GetNode();
	~OrigScale9ParentState();
};
class Scaleform::Render::OrigScale9ParentState::Interface :
	Scaleform::Render::StateData::Interface
{
public:
	Interface(Scaleform::Render::OrigScale9ParentState::Interface &);
	Interface(const Scaleform::Render::OrigScale9ParentState::Interface &);
	Interface();
	virtual void AddRef(void *, Scaleform::Render::StateData::Interface::RefBehaviour);
	virtual void Release(void *, Scaleform::Render::StateData::Interface::RefBehaviour);
	virtual ~Interface();
	Scaleform::Render::OrigScale9ParentState::Interface & operator=(Scaleform::Render::OrigScale9ParentState::Interface &);
	Scaleform::Render::OrigScale9ParentState::Interface & operator=(const Scaleform::Render::OrigScale9ParentState::Interface &);
};
class Scaleform::Render::Internal_MaskOwnerState :
	Scaleform::Render::State
{
	class Interface;
public:
	static Scaleform::Render::StateData::Interface_Value InterfaceImpl; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::StateType GetType_Static();
	Internal_MaskOwnerState(Scaleform::Render::Internal_MaskOwnerState &);
	Internal_MaskOwnerState(const Scaleform::Render::Internal_MaskOwnerState &);
	Internal_MaskOwnerState(Scaleform::Render::TreeNode *);
	Scaleform::Render::TreeNode * GetMaskOwner();
	~Internal_MaskOwnerState();
};
class Scaleform::Render::FilterState :
	Scaleform::Render::State
{
	class Interface;
public:
	static Scaleform::Render::StateData::Interface_RefCountImpl InterfaceImpl; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::StateType GetType_Static();
	FilterState(Scaleform::Render::FilterState &);
	FilterState(const Scaleform::Render::FilterState &);
	FilterState(Scaleform::Render::FilterSet *);
	const Scaleform::Render::FilterSet * GetFilters();
	unsigned long long GetFilterCount();
	const Scaleform::Render::Filter * GetFilter(unsigned long long);
	~FilterState();
};
class Scaleform::Render::OrigNodeBoundsState :
	Scaleform::Render::State
{
	class Interface;
public:
	static Scaleform::Render::StateData::Interface_RefCountImpl InterfaceImpl; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::StateType GetType_Static();
	OrigNodeBoundsState(Scaleform::Render::OrigNodeBoundsState &);
	OrigNodeBoundsState(const Scaleform::Render::OrigNodeBoundsState &);
	OrigNodeBoundsState(const Scaleform::Render::RectRef<float> *);
	const Scaleform::Render::RectRef<float> * GetBounds();
	~OrigNodeBoundsState();
};