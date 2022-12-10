#pragma once

class MeshVertexInfo
{
public:
	Vector3Unaligned m_position; // 0x0
	Vector3Unaligned m_normal; // 0xC
	Vector4Unaligned m_tangent; // 0x18
	Vector4Unaligned m_color; // 0x28
	Vector2Unaligned m_texture; // 0x38
	Vector2Unaligned m_texture1; // 0x40
	Vector2Unaligned m_texture2; // 0x48
	Vector2Unaligned m_texture3; // 0x50
};
class MeshVertexInfoComp
{
public:
	Vector3Unaligned m_position; // 0x0
	Vector3Unaligned m_normal; // 0xC
	Vector4Unaligned m_tangent; // 0x18
	unsigned long m_boneno0[4]; // 0x28
	unsigned long m_boneno1[4]; // 0x38
	float m_boneweight0[4]; // 0x48
	float m_boneweight1[4]; // 0x58
	float m_boneweight2[4]; // 0x68
	float m_boneweight3[4]; // 0x78
};
class MeshVertexInfoComp
{
public:
	Vector3Unaligned m_position; // 0x0
	Vector3Unaligned m_normal; // 0xC
	Vector4Unaligned m_tangent; // 0x18
	unsigned long m_boneno0[4]; // 0x28
	unsigned long m_boneno1[4]; // 0x38
	float m_boneweight0[4]; // 0x48
	float m_boneweight1[4]; // 0x58
	float m_boneweight2[4]; // 0x68
	float m_boneweight3[4]; // 0x78
	MeshVertexInfoComp();
};
class MeshVertexInfo2D
{
public:
	Vector3Unaligned m_position; // 0x0
	Vector3Unaligned m_normal; // 0xC
	Vector4Unaligned m_tangent; // 0x18
	Vector4Unaligned m_color; // 0x28
	Vector2Unaligned m_texture; // 0x38
};
struct ConstantsMulMatrix
{
	unsigned long add0; // 0x0
	unsigned long add1; // 0x4
};
enum Gnm::Alignment
{
	kAlignmentOfShaderInBytes = 256,
	kAlignmentOfTessFactorBufferInBytes = 256,
	kAlignmentOfMipStatsBufferInBytes = 64,
	kAlignmentOfOcclusionQueryInBytes = 16,
	kAlignmentOfIndirectArgsInBytes = 8,
	kAlignmentOfBufferInBytes = 4,
	kAlignmentOfFetchShaderInBytes = 4,
	kAlignmentOfIndexRingBufferInBytes = 256,
	kAlignmentOfComputeQueueRingBufferInBytes = 256,
};
enum Framework::MeshVertexBufferElement
{
	kPosition = 0,
	kNormal = 1,
	kTangent = 2,
	kColor = 3,
	kTexture = 4,
	kTexture1 = 5,
	kTexture2 = 6,
	kTexture3 = 7,
	kMeshElementMax = 8,
};
enum Framework::MeshVertexBufferEffectElement
{
	kEffectTexture0 = 5,
	kEffectParam = 6,
	kEffectTextureAnimeNumColor = 7,
	kEffectTextureAnimeNumAlpha = 8,
	kEffectTextureAnimeNumNormal = 9,
	kEffectLightingCoefficientOfFake = 10,
	kEffectMatrix0 = 11,
	kEffectMatrix1 = 12,
	kEffectMatrix2 = 13,
	kEffectMatrix3 = 14,
	kMeshEffectElementMax = 15,
};
class Framework::ConfigData
{
public:
	unsigned long m_targetWidth; // 0x0
	unsigned long m_targetHeight; // 0x4
	unsigned long m_buffers; // 0x8
	unsigned long m_microSecondsPerFrame; // 0xC
};
struct Framework::_MEM64_HEADER
{
	Framework::_MEM64_HEADER * prev; // 0x0
	Framework::_MEM64_HEADER * next; // 0x8
	long * pointer; // 0x10
	unsigned long size; // 0x18
	unsigned long offset; // 0x1C
	unsigned long long dummy; // 0x20
};
struct Framework::_MEM64_POOL
{
	long * area; // 0x0
	unsigned long long size; // 0x8
	unsigned long alignment; // 0x10
	void * heapStart; // 0x18
	void * nstart; // 0x20
	Framework::_MEM64_HEADER * top; // 0x28
	Framework::_MEM64_HEADER * end; // 0x30
};
class Framework::MemoryManager
{
private:
	Framework::_MEM64_POOL pools; // 0x0
	AgMutex memMutex; // 0x38
public:
	void init(unsigned long);
	void deinit();
	long * getPtr();
	unsigned long long getAreaSize();
	void * allocate(unsigned long long, unsigned long long);
	void release(void *);
	unsigned long getsize(void *);
	void clear();
	void checkMemory();
	bool checkMemoryRange(void *);
	MemoryManager();
	~MemoryManager();
};
class Framework::GLManager :
	AgIThreadHost
{
private:
	static Framework::GLManager * glm; // 0xFFFFFFFFFFFFFFFF
public:
	std::deque<std::function<void __cdecl(void)>,std::allocator<std::function<void __cdecl(void)> > > m_commandBufferSyncLazyFuncQueue; // 0x8
	long m_textureID; // 0x30
	ConstantsMulMatrix * currentConstantMulMat; // 0x38
	volatile unsigned long long * currentLabel; // 0x40
	long commandBufferTotal; // 0x48
	long commandBoneCount; // 0x4C
	long renderSize; // 0x50
	bool m_paused; // 0x54
	float m_frameProgressSpeed; // 0x58
	unsigned long currentRenderID; // 0x5C
	unsigned long systemRenderID[1]; // 0x60
	unsigned long systemBufferID[1]; // 0x64
	struct Framebuffer;
	Framework::IDRecycler<Framework::GLManager::Framebuffer,unsigned char,32> m_renderbuffer; // 0x68
	unsigned char currentFramebufferID; // 0x18C
	long m_renderCount; // 0x190
	void * m_pfVertexBuffer[512]; // 0x198
	void * m_pfIndexBuffer[512]; // 0x1198
	void applyOutputMask();
	long m_outputMask; // 0x2198
	long m_currentOutputMask; // 0x219C
	void * globalResourceTablePtr; // 0x21A0
	Framework::Input::ControllerContext m_controllerContext; // 0x21A8
	AgFrameAllocator<AgAllocator<1> > m_agDrawAllocator; // 0x2218
	AgFrameAllocator<AgAllocator<1> > m_agAllocator; // 0x2260
	GLManager(long, const char * *);
	virtual ~GLManager();
	static Framework::GLManager * getInstance(long, const char * *);
	static Framework::GLManager * getInstance();
	void startUp(long, long);
	void resize(long, long);
	void setCurrentFrameBuffer();
	void swapBuffer();
	void swapStackBuffer();
	void updateClock();
	void setGLParamater();
	void setGLUniform();
	bool getEndFlg();
	Framework::MemoryManager allocateStaticBuffers; // 0x22A8
	Framework::MemoryManager allocateSound; // 0x2308
	Framework::MemoryManager allocateStaticBuffersEffect[7]; // 0x2368
	Framework::MemoryManager allocateScriptBuffers; // 0x2608
	Framework::MemoryManager allocateLuaScriptBuffers; // 0x2668
	Framework::MemoryManager * getCurrentEffectBuffer(long);
	long m_vertexInfoCount; // 0x26C8
	long m_instanceCount; // 0x26CC
	void setVertexInfoCount(long);
	void setInstanceCount(long);
	unsigned long mainGraphicsPthread; // 0x26D0
	void GraphicsLock(bool);
	void GraphicsUnlock(bool);
	void LoadingLock(long, bool);
	void LoadingUnlock(long, bool);
	void waitOpenGLUnlocked();
	void OpenGLLock();
	void OpenGLUnlock();
	unsigned long m_line; // 0x26D4
	const char * m_windowTitle; // 0x26D8
	enum <unnamed-enum-kMaxPath>
	{
		kMaxPath = 512,
	};
	char m_szExePath[512]; // 0x26E0
	double m_secondsElapsedActual; // 0x28E0
	double m_secondsElapsedActualPerFrame; // 0x28E8
	double m_secondsElapsedApparent; // 0x28F0
	double m_secondsElapsedApparentLastFrame; // 0x28F8
	unsigned long long m_lastClock; // 0x2900
	static long s_graphicsLockFlag; // 0xFFFFFFFFFFFFFFFF
	static long s_loadingLockFlag; // 0xFFFFFFFFFFFFFFFF
	enum <unnamed-enum-kFrameTimer>
	{
		kFrameTimer = 0,
		kTimers = 1,
	};
	struct Buffer;
	Framework::IDRecycler<Framework::GLManager::Buffer,unsigned char,25> m_buffer; // 0x2908
	Framework::GLManager::Buffer * m_backBuffer; // 0x2A50
	Framework::GLManager::Buffer * m_currentBuffer; // 0x2A58
private:
	void createFrameBuffers(long, long);
	void destroyFrameBuffers();
	void InitBuffer(Framework::GLManager::Buffer &, long, long);
	void FreeBuffer(Framework::GLManager::Buffer &);
	Framework::GLManager::Buffer * m_frontBuffer; // 0x2A60
	Framework::IDRecycler<Framework::GLManager::Buffer,unsigned char,6> m_customSizeBuffer; // 0x2A68
	Framework::IDRecycler<Framework::GLManager::Buffer,unsigned char,4> m_halfBuffer; // 0x2AB8
	Framework::IDRecycler<Framework::GLManager::Buffer,unsigned char,2> m_thirdBuffer; // 0x2AF0
	Framework::IDRecycler<Framework::GLManager::Buffer,unsigned char,4> m_eighthBuffer; // 0x2B0C
public:
	unsigned long m_backBufferIndex; // 0x2B44
	void glBindCustomSizeRenderbuffer(unsigned long, unsigned long);
	void glGenCustomSizeRenderbuffers(long, unsigned long *);
	void glDeleteCustomSizeRenderbuffers(long, const unsigned long *);
	void glBindHalfRenderbuffer(unsigned long, unsigned long);
	void glGenHalfRenderbuffers(long, unsigned long *);
	void glDeleteHalfRenderbuffers(long, const unsigned long *);
	void glBindThirdRenderbuffer(unsigned long, unsigned long);
	void glGenThirdRenderbuffers(long, unsigned long *);
	void glDeleteThirdRenderbuffers(long, const unsigned long *);
	void glBindEighthRenderbuffer(unsigned long, unsigned long);
	void glGenEighthRenderbuffers(long, unsigned long *);
	void glDeleteEighthRenderbuffers(long, const unsigned long *);
	struct CpuTimer;
	Framework::GLManager::CpuTimer m_cpuTimerIncludingFramework; // 0x2B48
	Framework::GLManager::CpuTimer m_cpuTimerExcludingFramework; // 0x2B60
	unsigned long m_shutdownRequested; // 0x2B78
	unsigned long m_frameCount; // 0x2B7C
	Framework::ConfigData m_config; // 0x2B80
	AgPointer<AgThread> m_renderThread; // 0x2B90
	volatile long m_renderThreadRunning; // 0x2BA0
	std::function<void __cdecl(void)> m_renderThreadExec; // 0x2BA8
	void pushMarker(const char *);
	void popMarker();
	unsigned long GetFrame();
	void RequestTermination();
	bool isButtonPressed(unsigned long);
	bool isButtonDown(unsigned long);
	void debugClearButton();
	AgControllerType getLastInputDeviceType();
	AgControllerHardwareType getLastInputDeviceHWType();
	long isGamepadConnected(long);
	AgPointer<AgController> getGamepad(long);
	AgControllerHardwareType getGamepadHWType(long);
	long getGenericMapping(AgGamepadButton);
	long npInit();
	void npTerm();
	long npToolkitInit();
	void restoreGamma();
	void setGamma(float);
	float getGamma();
	void syncCPU(std::function<void __cdecl(void)>);
	void setupCPU();
	void wakeupCPU();
	void calcCPU();
	void startRenderThread(std::function<void __cdecl(void)>);
	void syncRenderThread();
	virtual void onExecuteThread();
	virtual void onJoinThread();
	virtual long getThreadIsRunning();
private:
	void DisplayKeyboardOptions();
	void ExecuteKeyboardOptions();
	volatile unsigned long long * m_label; // 0x2BE8
	volatile bool m_bOpenGLBlocked; // 0x2BF0
};
class std::function<void __cdecl(void)> :
	std::_Func_class<void>
{
	class _Mybase;
	class _Myt;
public:
	function<void __cdecl(void)>(std::function<void __cdecl(void)> &);
	function<void __cdecl(void)>(const std::function<void __cdecl(void)> &);
	function<void __cdecl(void)>(void *);
	function<void __cdecl(void)>();
	~function<void __cdecl(void)>();
	std::function<void __cdecl(void)> & operator=(void *);
	std::function<void __cdecl(void)> & operator=(std::function<void __cdecl(void)> &);
	std::function<void __cdecl(void)> & operator=(const std::function<void __cdecl(void)> &);
	void swap(std::function<void __cdecl(void)> &);
	bool operator bool();
	const type_info & target_type();
};
class std::deque<std::function<void __cdecl(void)>,std::allocator<std::function<void __cdecl(void)> > > :
	std::_Deque_alloc<std::_Deque_base_types<std::function<void __cdecl(void)>,std::allocator<std::function<void __cdecl(void)> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct _Alpty;
	typedef std::function<void __cdecl(void)> * _Mapptr;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::function<void __cdecl(void)> pointer;
	typedef const std::function<void __cdecl(void)> const_pointer;
	typedef std::function<void __cdecl(void)> reference;
	typedef const std::function<void __cdecl(void)> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	enum <unnamed-enum-_EEN_DS>
	{
		_EEN_DS = 1,
	};
public:
	deque<std::function<void __cdecl(void)>,std::allocator<std::function<void __cdecl(void)> > >(std::initializer_list<std::function<void __cdecl(void)> >, const std::allocator<std::function<void __cdecl(void)> > &);
	deque<std::function<void __cdecl(void)>,std::allocator<std::function<void __cdecl(void)> > >(std::deque<std::function<void __cdecl(void)>,std::allocator<std::function<void __cdecl(void)> > > &, const std::allocator<std::function<void __cdecl(void)> > &);
	deque<std::function<void __cdecl(void)>,std::allocator<std::function<void __cdecl(void)> > >(std::deque<std::function<void __cdecl(void)>,std::allocator<std::function<void __cdecl(void)> > > &);
	deque<std::function<void __cdecl(void)>,std::allocator<std::function<void __cdecl(void)> > >(const std::deque<std::function<void __cdecl(void)>,std::allocator<std::function<void __cdecl(void)> > > &, const std::allocator<std::function<void __cdecl(void)> > &);
	deque<std::function<void __cdecl(void)>,std::allocator<std::function<void __cdecl(void)> > >(const std::deque<std::function<void __cdecl(void)>,std::allocator<std::function<void __cdecl(void)> > > &);
	deque<std::function<void __cdecl(void)>,std::allocator<std::function<void __cdecl(void)> > >(unsigned long long, const std::function<void __cdecl(void)> &, const std::allocator<std::function<void __cdecl(void)> > &);
	deque<std::function<void __cdecl(void)>,std::allocator<std::function<void __cdecl(void)> > >(unsigned long long, const std::function<void __cdecl(void)> &);
	deque<std::function<void __cdecl(void)>,std::allocator<std::function<void __cdecl(void)> > >(unsigned long long);
	deque<std::function<void __cdecl(void)>,std::allocator<std::function<void __cdecl(void)> > >(const std::allocator<std::function<void __cdecl(void)> > &);
	deque<std::function<void __cdecl(void)>,std::allocator<std::function<void __cdecl(void)> > >();
	void _Construct_n(unsigned long long, const std::function<void __cdecl(void)> &);
	std::deque<std::function<void __cdecl(void)>,std::allocator<std::function<void __cdecl(void)> > > & operator=(const std::deque<std::function<void __cdecl(void)>,std::allocator<std::function<void __cdecl(void)> > > &);
	std::deque<std::function<void __cdecl(void)>,std::allocator<std::function<void __cdecl(void)> > > & operator=(std::initializer_list<std::function<void __cdecl(void)> >);
	std::deque<std::function<void __cdecl(void)>,std::allocator<std::function<void __cdecl(void)> > > & operator=(std::deque<std::function<void __cdecl(void)>,std::allocator<std::function<void __cdecl(void)> > > &);
	void _Assign_rv(std::deque<std::function<void __cdecl(void)>,std::allocator<std::function<void __cdecl(void)> > > &);
	void _Assign_rv(std::deque<std::function<void __cdecl(void)>,std::allocator<std::function<void __cdecl(void)> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::deque<std::function<void __cdecl(void)>,std::allocator<std::function<void __cdecl(void)> > > &, std::integral_constant<bool,1>);
	void push_front(const std::function<void __cdecl(void)> &);
	void push_front(std::function<void __cdecl(void)> &);
	void push_back(const std::function<void __cdecl(void)> &);
	void push_back(std::function<void __cdecl(void)> &);
	std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::function<void __cdecl(void)> > > > insert(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::function<void __cdecl(void)> > > >, unsigned long long, const std::function<void __cdecl(void)> &);
	std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::function<void __cdecl(void)> > > > insert(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::function<void __cdecl(void)> > > >, const std::function<void __cdecl(void)> &);
	std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::function<void __cdecl(void)> > > > insert(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::function<void __cdecl(void)> > > >, std::initializer_list<std::function<void __cdecl(void)> >);
	std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::function<void __cdecl(void)> > > > insert(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::function<void __cdecl(void)> > > >, std::function<void __cdecl(void)> &);
	void assign(unsigned long long, const std::function<void __cdecl(void)> &);
	void assign(std::initializer_list<std::function<void __cdecl(void)> >);
	~deque<std::function<void __cdecl(void)>,std::allocator<std::function<void __cdecl(void)> > >();
	std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::function<void __cdecl(void)> > > > begin();
	std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::function<void __cdecl(void)> > > > begin();
	std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::function<void __cdecl(void)> > > > end();
	std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::function<void __cdecl(void)> > > > end();
	std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::function<void __cdecl(void)> > > > _Make_iter(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::function<void __cdecl(void)> > > >);
	std::reverse_iterator<std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::function<void __cdecl(void)> > > > > rbegin();
	std::reverse_iterator<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::function<void __cdecl(void)> > > > > rbegin();
	std::reverse_iterator<std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::function<void __cdecl(void)> > > > > rend();
	std::reverse_iterator<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::function<void __cdecl(void)> > > > > rend();
	std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::function<void __cdecl(void)> > > > cbegin();
	std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::function<void __cdecl(void)> > > > cend();
	std::reverse_iterator<std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::function<void __cdecl(void)> > > > > crbegin();
	std::reverse_iterator<std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::function<void __cdecl(void)> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const std::function<void __cdecl(void)> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<std::function<void __cdecl(void)> > get_allocator();
	std::function<void __cdecl(void)> & at(unsigned long long);
	const std::function<void __cdecl(void)> & at(unsigned long long);
	std::function<void __cdecl(void)> & operator[](unsigned long long);
	const std::function<void __cdecl(void)> & operator[](unsigned long long);
	const std::function<void __cdecl(void)> & front();
	std::function<void __cdecl(void)> & front();
	const std::function<void __cdecl(void)> & back();
	std::function<void __cdecl(void)> & back();
	void pop_front();
	void pop_back();
	std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::function<void __cdecl(void)> > > > erase(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::function<void __cdecl(void)> > > >, std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::function<void __cdecl(void)> > > >);
	std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::function<void __cdecl(void)> > > > erase(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::function<void __cdecl(void)> > > >);
	void clear();
	void swap(std::deque<std::function<void __cdecl(void)>,std::allocator<std::function<void __cdecl(void)> > > &);
protected:
	void _Insert_n(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::function<void __cdecl(void)> > > >, unsigned long long, const std::function<void __cdecl(void)> &);
	void _Xlen();
	void _Xran();
	void _Growmap(unsigned long long);
	void _Tidy();
};
struct Framework::GLManager::Framebuffer
{
	bool m_depthTarget; // 0x0
	unsigned long m_attachment; // 0x4
};
class Framework::IDRecycler<Framework::GLManager::Framebuffer,unsigned char,32>
{
public:
	IDRecycler<Framework::GLManager::Framebuffer,unsigned char,32>();
	Framework::GLManager::Framebuffer & getItem(unsigned char);
	Framework::GLManager::Framebuffer & getItemAt(unsigned long long);
	void recycle(unsigned char);
	unsigned char getNewID();
private:
	unsigned char m_firstOccupiedIndex; // 0x0
	unsigned char m_freeIDs[32]; // 0x1
	Framework::GLManager::Framebuffer m_items[32]; // 0x24
	unsigned long long _idToIndex(unsigned char);
};
class AgFrameAllocator<AgAllocator<1> >
{
	enum <unnamed-enum-Type>
	{
		Type = 0,
	};
public:
	AgFrameAllocator<AgAllocator<1> >(AgFrameAllocator<AgAllocator<1> > &);
	AgFrameAllocator<AgAllocator<1> >(const AgFrameAllocator<AgAllocator<1> > &);
	AgFrameAllocator<AgAllocator<1> >(unsigned long, unsigned long, unsigned long);
	void swapBuffers();
	void * allocate(unsigned long long, unsigned long long);
	void * allocate(unsigned long long);
	void * reallocate(void *, unsigned long long, unsigned long long);
	void * reallocate(void *, unsigned long long);
	void deallocate(void *);
private:
	void _allocateBlock();
	void _useNextBlock();
	unsigned long m_frameCount; // 0x0
	unsigned long m_blockSize; // 0x4
	unsigned long m_currentBlock; // 0x8
	unsigned long m_frameIndex; // 0xC
	unsigned char * m_frameStartOffset; // 0x10
	unsigned char * m_frameEndOffset; // 0x18
	unsigned char * m_lastFrameStartOffset; // 0x20
	unsigned char * m_lastAllocation; // 0x28
	std::vector<unsigned char *,std::allocator<unsigned char *> > m_blocks; // 0x30
public:
	~AgFrameAllocator<AgAllocator<1> >();
	AgFrameAllocator<AgAllocator<1> > & operator=(AgFrameAllocator<AgAllocator<1> > &);
	AgFrameAllocator<AgAllocator<1> > & operator=(const AgFrameAllocator<AgAllocator<1> > &);
};
Framework::GLManager::~GLManager(); // 0x1402C4360
struct Framework::GLManager::Buffer
{
	unsigned long m_frameBuffer; // 0x0
	unsigned long m_renderTarget; // 0x4
	unsigned long m_depthTarget; // 0x8
};
class Framework::IDRecycler<Framework::GLManager::Buffer,unsigned char,25>
{
public:
	IDRecycler<Framework::GLManager::Buffer,unsigned char,25>();
	Framework::GLManager::Buffer & getItem(unsigned char);
	Framework::GLManager::Buffer & getItemAt(unsigned long long);
	void recycle(unsigned char);
	unsigned char getNewID();
private:
	unsigned char m_firstOccupiedIndex; // 0x0
	unsigned char m_freeIDs[25]; // 0x1
	Framework::GLManager::Buffer m_items[25]; // 0x1C
	unsigned long long _idToIndex(unsigned char);
};
class Framework::IDRecycler<Framework::GLManager::Buffer,unsigned char,6>
{
public:
	IDRecycler<Framework::GLManager::Buffer,unsigned char,6>();
	Framework::GLManager::Buffer & getItem(unsigned char);
	Framework::GLManager::Buffer & getItemAt(unsigned long long);
	void recycle(unsigned char);
	unsigned char getNewID();
private:
	unsigned char m_firstOccupiedIndex; // 0x0
	unsigned char m_freeIDs[6]; // 0x1
	Framework::GLManager::Buffer m_items[6]; // 0x8
	unsigned long long _idToIndex(unsigned char);
};
class Framework::IDRecycler<Framework::GLManager::Buffer,unsigned char,4>
{
public:
	IDRecycler<Framework::GLManager::Buffer,unsigned char,4>();
	Framework::GLManager::Buffer & getItem(unsigned char);
	Framework::GLManager::Buffer & getItemAt(unsigned long long);
	void recycle(unsigned char);
	unsigned char getNewID();
private:
	unsigned char m_firstOccupiedIndex; // 0x0
	unsigned char m_freeIDs[4]; // 0x1
	Framework::GLManager::Buffer m_items[4]; // 0x8
	unsigned long long _idToIndex(unsigned char);
};
class Framework::IDRecycler<Framework::GLManager::Buffer,unsigned char,2>
{
public:
	IDRecycler<Framework::GLManager::Buffer,unsigned char,2>();
	Framework::GLManager::Buffer & getItem(unsigned char);
	Framework::GLManager::Buffer & getItemAt(unsigned long long);
	void recycle(unsigned char);
	unsigned char getNewID();
private:
	unsigned char m_firstOccupiedIndex; // 0x0
	unsigned char m_freeIDs[2]; // 0x1
	Framework::GLManager::Buffer m_items[2]; // 0x4
	unsigned long long _idToIndex(unsigned char);
};
struct Framework::GLManager::CpuTimer
{
	unsigned long long m_begin; // 0x0
	unsigned long long m_end; // 0x8
	unsigned long long m_clocks; // 0x10
	CpuTimer();
	void stop();
	void start();
	unsigned long long clocks();
	double seconds();
};
class AgPointer<AgThread>
{
public:
	AgPointer<AgThread>(const AgReference<AgThread> &);
	AgPointer<AgThread>(AgPointer<AgThread> &);
	AgPointer<AgThread>(const AgPointer<AgThread> &);
	AgPointer<AgThread>(AgThread *);
	AgPointer<AgThread>();
	~AgPointer<AgThread>();
	AgPointer<AgThread> & operator=(AgPointer<AgThread> &);
	AgPointer<AgThread> & operator=(const AgReference<AgThread> &);
	AgPointer<AgThread> & operator=(const AgPointer<AgThread> &);
	AgPointer<AgThread> & operator=(AgThread *);
	bool operator<(const AgPointer<AgThread> &);
	AgThread * operator->();
	AgThread & operator*();
	bool operator==(const AgPointer<AgThread> &);
	bool operator==(AgThread *);
	bool operator!=(const AgPointer<AgThread> &);
	bool operator!=(AgThread *);
	AgThread * getObject();
	void swap(AgPointer<AgThread> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgThread * m_ptr; // 0x8
};
AgPointer<AgController> Framework::GLManager::getGamepad(long userIndex); // 0x140257C70
long Framework::GLManager::getGenericMapping(AgGamepadButton button); // 0x1400C32C0