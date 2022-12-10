#pragma once

enum Scaleform::Render::VertexFormatFlags
{
	MVF_AlignVertexStride = 1,
	MVF_AlignVertexAttrs = 2,
	MVF_Align = 3,
	MVF_ReverseColor = 4,
	MVF_HasInstancing = 8,
	MVF_NoBatching = 16,
	MVF_EndianSwapFactors = 32,
};
void Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(const Scaleform::Render::GL::ShaderPair & sd, unsigned long var, const float * v, unsigned long n, unsigned long index, unsigned long batch); // 0x1405C2E80
void Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetColor(const Scaleform::Render::GL::ShaderPair & sd, unsigned long var, Scaleform::Render::Color c, unsigned long index, unsigned long batch); // 0x1405C1550
void Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetMatrix(const Scaleform::Render::GL::ShaderPair & sd, unsigned long var, const Scaleform::Render::Matrix2x4<float> & m1, const Scaleform::Render::MatrixPoolImpl::HMatrix & m2, const Scaleform::Render::MatrixState * Matrices, unsigned long index, unsigned long batch); // 0x1405C2730
void Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetCxform(const Scaleform::Render::GL::ShaderPair & sd, const Scaleform::Render::Cxform & cx, unsigned long index, unsigned long batch); // 0x1405C1600
unsigned long Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::GetUniformSize(const Scaleform::Render::GL::ShaderPair & sd, unsigned long i); // 0x1405BF540
void Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUserUniforms(const Scaleform::Render::GL::ShaderPair & sd, const Scaleform::Render::MatrixPoolImpl::HMatrix & m, long batch); // 0x1405C3040
struct Scaleform::Render::SourceFormatHash
{
	SourceFormatHash(Scaleform::Render::PrimitiveFillType, const Scaleform::Render::VertexFormat *, unsigned long);
	bool operator==(const Scaleform::Render::SourceFormatHash &);
	Scaleform::Render::PrimitiveFillType FillType; // 0x0
	unsigned long FormatFlags; // 0x4
	const Scaleform::Render::VertexFormat * SourceFormat; // 0x8
};
struct Scaleform::Render::ResultFormat
{
	const Scaleform::Render::VertexFormat * single; // 0x0
	const Scaleform::Render::VertexFormat * batch; // 0x8
	const Scaleform::Render::VertexFormat * instanced; // 0x10
};
class Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>
{
	struct ValueItem;
	class KeyBufferType;
	class ValueBufferType;
private:
	Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32> KeyBuffer; // 0x0
	Scaleform::Render::PagedItemBuffer<Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem,8> ValueBuffer; // 0x10
public:
	MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>();
	~MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>();
	Scaleform::Render::VertexFormat * Find(Scaleform::Render::VertexElement *, unsigned long);
	Scaleform::Render::VertexFormat * Add(Scaleform::Render::VertexElement * *, Scaleform::Render::VertexElement *, unsigned long);
	Scaleform::Render::VertexFormat * Add(Scaleform::Render::VertexElement *, unsigned long);
	void Clear();
};
Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::~StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>(); // 0x1405BBBF0
Scaleform::Render::GL::ShaderDesc::ShaderVersion Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::GetShaderVersion(); // 0x1400470F0
unsigned long Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::GetNumberOfUniforms(); // 0x1405BF3D0
Scaleform::Render::GL::ShaderDesc::ShaderType Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::StaticShaderForFill(Scaleform::Render::PrimitiveFill * pfill, unsigned long & fillflags, unsigned long batchType); // 0x1405C3460
Scaleform::Render::GL::ShaderDesc::ShaderType Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::StaticShaderForFill(Scaleform::Render::PrimitiveFillType fill, unsigned long & fillflags, unsigned long batchType); // 0x1405C3660
class Scaleform::HashLH<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>,2,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF> > :
	Scaleform::Hash<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF> > >
{
	class SelfType;
	class BaseType;
public:
	HashLH<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>,2,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scal(const Scaleform::HashLH<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>,2,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF> > &);
	HashLH<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>,2,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scal(long);
	HashLH<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>,2,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scal();
	~HashLH<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>,2,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Sca();
	void operator=(const Scaleform::HashLH<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>,2,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF> > &);
};
void Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::MapVertexFormat(Scaleform::Render::PrimitiveFillType fill, const Scaleform::Render::VertexFormat * sourceFormat, const Scaleform::Render::VertexFormat * * single, const Scaleform::Render::VertexFormat * * batch, const Scaleform::Render::VertexFormat * * instanced, unsigned long flags); // 0x1405BFB60
const Scaleform::Render::GL::ShaderPair & Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::SetPrimitiveFill(Scaleform::Render::PrimitiveFill * pfill, unsigned long & fillFlags, unsigned long batchType, const Scaleform::Render::VertexFormat * pvf, unsigned long meshCount, const Scaleform::Render::MatrixState * Matrices, const Scaleform::Render::Primitive::MeshEntry * pmeshes, Scaleform::Render::GL::ShaderInterface * psi); // 0x1405C2860
void Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::GenerateBlurFilterParameters(const Scaleform::Render::BlurFilterParams & params, Scaleform::Render::GL::ShaderDesc::ShaderType type, unsigned long pass, float * fsize, const Scaleform::Render::Matrix2x4<float> & viewMatrix, float * texscale, unsigned long passCount); // 0x1405BF010
bool Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::SetFilterFill(const Scaleform::Render::Matrix2x4<float> & mvp, const Scaleform::Render::Cxform & cx, const Scaleform::Render::Matrix2x4<float> & viewMatrix, const Scaleform::Render::Filter * filter, Scaleform::Ptr<Scaleform::Render::RenderTarget> * targets, unsigned long * shaders, unsigned long pass, unsigned long passCount, const Scaleform::Render::VertexFormat * pvf, Scaleform::Render::GL::ShaderInterface * psi); // 0x1405C1C70
unsigned long Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::GetFilterPasses(const Scaleform::Render::Filter * filter, unsigned long fillFlags, unsigned long * passes); // 0x1405F02A0
bool Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::SetDrawableCopyPixelsFill(Scaleform::Render::Texture * * tex, const Scaleform::Render::Matrix2x4<float> * texgen, const Scaleform::Render::Size<int> texsize, const Scaleform::Render::Matrix2x4<float> & mvp, bool mergeAlpha, bool destAlpha, const Scaleform::Render::VertexFormat * pvf, Scaleform::Render::GL::ShaderInterface * psi, unsigned long flags); // 0x1405C1790
bool Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::SetDrawableMergeFill(Scaleform::Render::Texture * * tex, const Scaleform::Render::Matrix2x4<float> * texgen, const Scaleform::Render::Size<int> texsize, const Scaleform::Render::Matrix4x4<float> * cxmul, const Scaleform::Render::VertexFormat * pvf, Scaleform::Render::GL::ShaderInterface * psi, unsigned long flags); // 0x1405C19D0
bool Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::SetDrawableCxform(Scaleform::Render::Texture * * tex, const Scaleform::Render::Matrix2x4<float> * texgen, const Scaleform::Render::Size<int> texsize, const Scaleform::Render::Cxform * cx, const Scaleform::Render::VertexFormat * pvf, Scaleform::Render::GL::ShaderInterface * psi, unsigned long flags); // 0x1405C18B0
bool Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::SetDrawableCompare(Scaleform::Render::Texture * * tex, const Scaleform::Render::Matrix2x4<float> * texgen, const Scaleform::Render::Size<int> texsize, const Scaleform::Render::VertexFormat * pvf, Scaleform::Render::GL::ShaderInterface * psi, unsigned long flags); // 0x1405C1690
bool Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::SetDrawablePaletteMap(Scaleform::Render::Texture * * tex, const Scaleform::Render::Matrix2x4<float> * texgen, const Scaleform::Render::Size<int> texsize, const Scaleform::Render::Matrix2x4<float> & mvp, Scaleform::Render::Texture * paletteMap, const Scaleform::Render::VertexFormat * pvf, Scaleform::Render::GL::ShaderInterface * psi, unsigned long flags); // 0x1405C1B50
bool Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::DrawableFinish(unsigned long srcCount, Scaleform::Render::Texture * * tex, const Scaleform::Render::Matrix2x4<float> * texgen, const Scaleform::Render::Size<int> texsize, const Scaleform::Render::Matrix2x4<float> & mvpOriginal, Scaleform::Render::GL::ShaderInterface * psi, unsigned long flags); // 0x1405BE7D0
void Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::SetBlendFill(Scaleform::Render::BlendMode mode, const Scaleform::Render::Matrix2x4<float> & mvp, const Scaleform::Render::Cxform & cx, Scaleform::Render::Texture * * ptextures, const Scaleform::Render::Matrix2x4<float> * texgen, const Scaleform::Render::VertexFormat * pvf, Scaleform::Render::GL::ShaderInterface * psi); // 0x1405C1290
class Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>
{
protected:
	bool UniformSet[26]; // 0x8
	Scaleform::Render::Texture * Textures[4]; // 0x28
	bool PrimitiveOpen; // 0x48
	unsigned long CurrentPrimitiveMeshCount; // 0x4C
public:
	ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>(const Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair> &);
	ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>();
	~ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>();
	unsigned long GetParameterStage(const Scaleform::Render::GL::ShaderPair &, unsigned long, long);
	void BeginPrimitive(unsigned long);
	void Finish(unsigned long);
	void SetUniformRaw(const Scaleform::Render::GL::ShaderPair &, unsigned long, const float *, unsigned long, unsigned long, unsigned long);
	void SetUniform(const Scaleform::Render::GL::ShaderPair &, unsigned long, const float *, unsigned long, unsigned long, unsigned long);
	void SetColor(const Scaleform::Render::GL::ShaderPair &, unsigned long, Scaleform::Render::Color, unsigned long, unsigned long);
	void SetMatrix(const Scaleform::Render::GL::ShaderPair &, unsigned long, const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::MatrixPoolImpl::HMatrix &, const Scaleform::Render::MatrixState *, unsigned long, unsigned long);
	void SetMatrix(const Scaleform::Render::GL::ShaderPair &, unsigned long, const Scaleform::Render::Matrix2x4<float> &, unsigned long, unsigned long);
	void SetCxform(const Scaleform::Render::GL::ShaderPair &, const Scaleform::Render::Cxform &, unsigned long, unsigned long);
	unsigned long GetUniformSize(const Scaleform::Render::GL::ShaderPair &, unsigned long);
	static bool IsBuiltinUniform(unsigned long);
	void SetUserUniforms(const Scaleform::Render::GL::ShaderPair &, const Scaleform::Render::MatrixPoolImpl::HMatrix &, long);
	bool SetStaticShader(Scaleform::Render::GL::ShaderDesc::ShaderType, const Scaleform::Render::VertexFormat *);
	bool SetFilterShader(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Filter *, Scaleform::Render::GL::ShaderDesc::ShaderType, unsigned long, unsigned long, const Scaleform::Render::VertexFormat *);
	void BeginScene();
	Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair> & operator=(const Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair> &);
};
void Scaleform::Render::ShaderInterfaceBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniformRaw(const Scaleform::Render::GL::ShaderPair & sd, unsigned long var, const float * v, unsigned long n, unsigned long index, unsigned long batch); // 0x1405C2F70
void Scaleform::Render::BuildVertexArray<Scaleform::Render::GL::VertexBuilder_Core30>(const Scaleform::Render::VertexFormat * pfmt, Scaleform::Render::GL::VertexBuilder_Core30 & output); // 0x1405BAF80
void Scaleform::Render::BuildVertexArray<Scaleform::Render::GL::VertexBuilder_Legacy>(const Scaleform::Render::VertexFormat * pfmt, Scaleform::Render::GL::VertexBuilder_Legacy & output); // 0x1405BB0C0