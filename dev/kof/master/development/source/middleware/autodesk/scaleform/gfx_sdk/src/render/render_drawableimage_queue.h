#pragma once

enum Scaleform::Render::DICommandType
{
	DICommandType_Map = 0,
	DICommandType_Unmap = 1,
	DICommandType_CreateTexture = 2,
	DICommandType_Clear = 3,
	DICommandType_ApplyFilter = 4,
	DICommandType_Draw = 5,
	DICommandType_Dispose = 6,
	DICommandType_CopyChannel = 7,
	DICommandType_CopyPixels = 8,
	DICommandType_ColorTransform = 9,
	DICommandType_Compare = 10,
	DICommandType_FillRect = 11,
	DICommandType_FloodFill = 12,
	DICommandType_GetColorBoundsRect = 13,
	DICommandType_GetPixel32 = 14,
	DICommandType_GetPixels = 15,
	DICommandType_Histogram = 16,
	DICommandType_HitTest = 17,
	DICommandType_Merge = 18,
	DICommandType_Noise = 19,
	DICommandType_PaletteMap = 20,
	DICommandType_PerlinNoise = 21,
	DICommandType_PixelDissolve = 22,
	DICommandType_SetPixel32 = 23,
	DICommandType_SetPixels = 24,
	DICommandType_Scroll = 25,
	DICommandType_Threshold = 26,
	DICommandType_Count = 27,
};
struct Scaleform::Render::DICommandContext
{
	Scaleform::Render::HAL * pHAL; // 0x0
	DICommandContext(Scaleform::Render::ThreadCommandQueue *);
	DICommandContext();
};
struct Scaleform::Render::DISourceImages
{
	static const unsigned long MaximumSources; // 0xFFFFFFFFFFFFFFFF
	Scaleform::Render::Image * pImages[2]; // 0x0
	DISourceImages();
	Scaleform::Render::Image * operator[](unsigned long);
};
struct Scaleform::Render::DICommand
{
	enum RenderCaps
	{
		RC_CPU = 1,
		RC_GPU = 2,
		RC_GPUPreference = 4,
		RC_GPU_NoRT = 8,
		RC_CPU_Return = 16,
		RC_CPU_NoModify = 32,
	};
	DICommand(const Scaleform::Render::DICommand &);
	DICommand(Scaleform::Render::DrawableImage *);
	~DICommand();
	Scaleform::Render::DICommandType GetType();
	unsigned long GetCPUCaps();
	unsigned long GetRenderCaps();
	unsigned long GetSize();
	unsigned long GetSourceImages(Scaleform::Render::DISourceImages *);
	void ExecuteRT(Scaleform::Render::DICommandContext &);
	bool ExecuteSWOnAddCommand(Scaleform::Render::DrawableImage *);
	void ExecuteHW(Scaleform::Render::DICommandContext &);
	void ExecuteSW(Scaleform::Render::DICommandContext &, Scaleform::Render::ImageData &, Scaleform::Render::ImageData * *);
	void ExecuteDiscard();
protected:
	bool executeSWHelper(Scaleform::Render::DICommandContext &, Scaleform::Render::DrawableImage *, Scaleform::Render::DISourceImages &, unsigned long);
	bool executeHWHelper(Scaleform::Render::DICommandContext &, Scaleform::Render::DrawableImage *);
	Scaleform::Ptr<Scaleform::Render::DrawableImage> pImage; // 0x8
public:
	Scaleform::Render::DICommand & operator=(const Scaleform::Render::DICommand &);
	void __dflt_ctor_closure();
};
void Scaleform::Render::DICommand_CopyPixels::Execute(Scaleform::Render::DICommandContext & __formal); // 0x14002E7C0
unsigned long Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Clear,Scaleform::Render::DICommand>::GetSize(); // 0x1400482B0
unsigned long Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Draw,Scaleform::Render::DICommand>::GetSize(); // 0x14032E0D0
unsigned long Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_FillRect,Scaleform::Render::DICommand>::GetSize(); // 0x14032E0C0
unsigned long Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_FloodFill,Scaleform::Render::DICommand>::GetSize(); // 0x14004A850
unsigned long Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_HitTest,Scaleform::Render::DICommand>::GetSize(); // 0x14032E100
unsigned long Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_PerlinNoise,Scaleform::Render::DICommand>::GetSize(); // 0x14032E0E0
struct Scaleform::ListNode<Scaleform::Render::DIQueuePage>
{
	Scaleform::Render::DIQueuePage * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::DIQueuePage * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::Render::DIQueuePage>();
	Scaleform::Render::DIQueuePage * GetPrev();
	Scaleform::Render::DIQueuePage * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::DIQueuePage *);
	void InsertNodeAfter(Scaleform::Render::DIQueuePage *);
	void InsertNodeBefore(Scaleform::Render::DIQueuePage *);
};
struct Scaleform::Render::DIQueuePage :
	Scaleform::ListNode<Scaleform::Render::DIQueuePage>,
	Scaleform::NewOverrideBase<2>
{
	enum <unnamed-enum-BufferSize>
	{
		BufferSize = 496,
	};
	unsigned char Buffer[496]; // 0x10
	unsigned long Offset; // 0x200
	unsigned long CaptureFrameId; // 0x204
	DIQueuePage();
	Scaleform::Render::DICommand * getFirst();
	Scaleform::Render::DICommand * getNext(Scaleform::Render::DICommand *);
	Scaleform::Render::DICommand * destroyAndGetNext(Scaleform::Render::DICommand *);
	void * AllocSize(unsigned long);
	bool HasFreeSize(unsigned long);
};
enum Scaleform::Render::DICommandSetType
{
	DICommand_All = 0,
	DICommand_Displaying = 1,
};
class Scaleform::Render::DICommandSet
{
public:
	DICommandSet(Scaleform::Render::DICommandQueue *);
	~DICommandSet();
	void ExecuteCommandsRT(Scaleform::Render::DICommandContext &);
	bool IsEmpty();
private:
	Scaleform::Render::DICommandQueue * pQueue; // 0x0
	Scaleform::List<Scaleform::Render::DIQueuePage,Scaleform::Render::DIQueuePage,Scaleform::ListNode<Scaleform::Render::DIQueuePage> > QueueList; // 0x8
};
class Scaleform::List<Scaleform::Render::DIQueuePage,Scaleform::Render::DIQueuePage,Scaleform::ListNode<Scaleform::Render::DIQueuePage> >
{
	struct ValueType;
private:
	List<Scaleform::Render::DIQueuePage,Scaleform::Render::DIQueuePage,Scaleform::ListNode<Scaleform::Render::DIQueuePage> >(const Scaleform::List<Scaleform::Render::DIQueuePage,Scaleform::Render::DIQueuePage,Scaleform::ListNode<Scaleform::Render::DIQueuePage> > &);
public:
	List<Scaleform::Render::DIQueuePage,Scaleform::Render::DIQueuePage,Scaleform::ListNode<Scaleform::Render::DIQueuePage> >();
	void Clear();
	Scaleform::Render::DIQueuePage * GetFirst();
	Scaleform::Render::DIQueuePage * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Render::DIQueuePage *);
	bool IsLast(const Scaleform::Render::DIQueuePage *);
	bool IsNull(const Scaleform::Render::DIQueuePage *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::Render::DIQueuePage * GetPrev(const Scaleform::Render::DIQueuePage *);
	static Scaleform::Render::DIQueuePage * GetNext(const Scaleform::Render::DIQueuePage *);
	void PushFront(Scaleform::Render::DIQueuePage *);
	void PushBack(Scaleform::Render::DIQueuePage *);
	static void Remove(Scaleform::Render::DIQueuePage *);
	void BringToFront(Scaleform::Render::DIQueuePage *);
	void SendToBack(Scaleform::Render::DIQueuePage *);
	void PushListToFront(Scaleform::List<Scaleform::Render::DIQueuePage,Scaleform::Render::DIQueuePage,Scaleform::ListNode<Scaleform::Render::DIQueuePage> > &);
	void PushListToBack(Scaleform::List<Scaleform::Render::DIQueuePage,Scaleform::Render::DIQueuePage,Scaleform::ListNode<Scaleform::Render::DIQueuePage> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::Render::DIQueuePage,Scaleform::Render::DIQueuePage,Scaleform::ListNode<Scaleform::Render::DIQueuePage> > &, Scaleform::Render::DIQueuePage *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::Render::DIQueuePage,Scaleform::Render::DIQueuePage,Scaleform::ListNode<Scaleform::Render::DIQueuePage> > &, Scaleform::Render::DIQueuePage *);
	void PushListItemsToFront(Scaleform::Render::DIQueuePage *, Scaleform::Render::DIQueuePage *);
private:
	const Scaleform::List<Scaleform::Render::DIQueuePage,Scaleform::Render::DIQueuePage,Scaleform::ListNode<Scaleform::Render::DIQueuePage> > & operator=(const Scaleform::List<Scaleform::Render::DIQueuePage,Scaleform::Render::DIQueuePage,Scaleform::ListNode<Scaleform::Render::DIQueuePage> > &);
	Scaleform::ListNode<Scaleform::Render::DIQueuePage> Root; // 0x0
};
class Scaleform::RefCountBase<Scaleform::Render::DICommandQueue,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::Render::DICommandQueue,2>(Scaleform::RefCountBase<Scaleform::Render::DICommandQueue,2> &);
	RefCountBase<Scaleform::Render::DICommandQueue,2>(const Scaleform::RefCountBase<Scaleform::Render::DICommandQueue,2> &);
	RefCountBase<Scaleform::Render::DICommandQueue,2>();
	virtual ~RefCountBase<Scaleform::Render::DICommandQueue,2>();
	Scaleform::RefCountBase<Scaleform::Render::DICommandQueue,2> & operator=(Scaleform::RefCountBase<Scaleform::Render::DICommandQueue,2> &);
	Scaleform::RefCountBase<Scaleform::Render::DICommandQueue,2> & operator=(const Scaleform::RefCountBase<Scaleform::Render::DICommandQueue,2> &);
};
class Scaleform::Render::DICommandQueue :
	Scaleform::RefCountBase<Scaleform::Render::DICommandQueue,2>,
	Scaleform::ListNode<Scaleform::Render::DICommandQueue>
{
	enum <unnamed-enum-FreePageLimit>
	{
		FreePageLimit = 3,
		AllocPageLimit = 16,
	};
public:
	DICommandQueue(Scaleform::Render::DrawableImageContext *);
	virtual ~DICommandQueue();
	enum DIQueueType
	{
		DIQueue_Active = 0,
		DIQueue_Captured = 1,
		DIQueue_Displaying = 2,
		DIQueue_Free = 3,
		DIQueue_Item_Count = 4,
	};
	void OnCapture();
	void OnNextCapture(Scaleform::Render::ContextImpl::RenderNotify *);
	void OnShutdown();
	void ExecuteNextCapture(Scaleform::Render::ContextImpl::RenderNotify *);
	void ExecuteCommandsAndWait();
	void DiscardCommands();
	class ExecuteCommand;
protected:
	void * allocCommandFromPage(unsigned long, Scaleform::Lock *);
	Scaleform::Render::DIQueuePage * allocPage();
	void freePage(Scaleform::Render::DIQueuePage *);
	void popCommandSet(Scaleform::Render::DICommandSet *, Scaleform::Render::DICommandSetType);
	Scaleform::Render::DICommandQueue * getThis();
	void updateCPUModifiedImagesRT();
	void updateGPUModifiedImagesRT();
	void lockCommandSetAndWait(Scaleform::Render::DICommandSet * *);
	void unlockCommandSet();
	void notifyCommandSetFinished(Scaleform::Render::DICommandSet * *);
	Scaleform::Mutex CommandSetMutex; // 0x20
	Scaleform::WaitCondition CommandSetWC; // 0x48
	Scaleform::Render::DICommandSet * pRTCommands; // 0x50
	Scaleform::Ptr<Scaleform::Render::DrawableImage> pCPUModifiedImageList; // 0x58
	Scaleform::Ptr<Scaleform::Render::DrawableImage> pGPUModifiedImageList; // 0x60
	Scaleform::Render::ThreadCommandQueue * pRTCommandQueue; // 0x68
	Scaleform::Lock QueueLock; // 0x70
	Scaleform::Ptr<Scaleform::Render::DICommandQueue::ExecuteCommand> ExecuteCmd; // 0xA0
	Scaleform::List<Scaleform::Render::DIQueuePage,Scaleform::Render::DIQueuePage,Scaleform::ListNode<Scaleform::Render::DIQueuePage> > Queues[4]; // 0xA8
	unsigned long CaptureFrameId; // 0xE8
	unsigned long FreePageCount; // 0xEC
	unsigned long AllocPageCount; // 0xF0
};
struct Scaleform::ListNode<Scaleform::Render::DICommandQueue>
{
	Scaleform::Render::DICommandQueue * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::DICommandQueue * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::Render::DICommandQueue>();
	Scaleform::Render::DICommandQueue * GetPrev();
	Scaleform::Render::DICommandQueue * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::DICommandQueue *);
	void InsertNodeAfter(Scaleform::Render::DICommandQueue *);
	void InsertNodeBefore(Scaleform::Render::DICommandQueue *);
};
class Scaleform::Render::DICommandQueue::ExecuteCommand :
	Scaleform::Render::ThreadCommand
{
private:
	Scaleform::Render::DICommandQueue * pQueue; // 0x10
	Scaleform::Event ExecuteDone; // 0x18
public:
	ExecuteCommand(Scaleform::Render::DICommandQueue::ExecuteCommand &);
	ExecuteCommand(const Scaleform::Render::DICommandQueue::ExecuteCommand &);
	ExecuteCommand(Scaleform::Render::DICommandQueue *);
	virtual void Execute();
	void WaitDoneAndReset();
	virtual ~ExecuteCommand();
	Scaleform::Render::DICommandQueue::ExecuteCommand & operator=(Scaleform::Render::DICommandQueue::ExecuteCommand &);
	Scaleform::Render::DICommandQueue::ExecuteCommand & operator=(const Scaleform::Render::DICommandQueue::ExecuteCommand &);
};
class Scaleform::Ptr<Scaleform::Render::DICommandQueue::ExecuteCommand>
{
protected:
	Scaleform::Render::DICommandQueue::ExecuteCommand * pObject; // 0x0
public:
	Ptr<Scaleform::Render::DICommandQueue::ExecuteCommand>(const Scaleform::Ptr<Scaleform::Render::DICommandQueue::ExecuteCommand> &);
	Ptr<Scaleform::Render::DICommandQueue::ExecuteCommand>(Scaleform::Render::DICommandQueue::ExecuteCommand *);
	Ptr<Scaleform::Render::DICommandQueue::ExecuteCommand>(Scaleform::Ptr<Scaleform::Render::DICommandQueue::ExecuteCommand> &, Scaleform::PickType);
	Ptr<Scaleform::Render::DICommandQueue::ExecuteCommand>(Scaleform::Pickable<Scaleform::Render::DICommandQueue::ExecuteCommand>);
	Ptr<Scaleform::Render::DICommandQueue::ExecuteCommand>(Scaleform::Render::DICommandQueue::ExecuteCommand &);
	Ptr<Scaleform::Render::DICommandQueue::ExecuteCommand>();
	~Ptr<Scaleform::Render::DICommandQueue::ExecuteCommand>();
	bool operator==(Scaleform::Render::DICommandQueue::ExecuteCommand *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::DICommandQueue::ExecuteCommand> &);
	bool operator!=(Scaleform::Render::DICommandQueue::ExecuteCommand *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::DICommandQueue::ExecuteCommand> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::DICommandQueue::ExecuteCommand> &);
	Scaleform::Ptr<Scaleform::Render::DICommandQueue::ExecuteCommand> & operator=(Scaleform::Pickable<Scaleform::Render::DICommandQueue::ExecuteCommand>);
	const Scaleform::Ptr<Scaleform::Render::DICommandQueue::ExecuteCommand> & operator=(Scaleform::Render::DICommandQueue::ExecuteCommand &);
	const Scaleform::Ptr<Scaleform::Render::DICommandQueue::ExecuteCommand> & operator=(Scaleform::Render::DICommandQueue::ExecuteCommand *);
	const Scaleform::Ptr<Scaleform::Render::DICommandQueue::ExecuteCommand> & operator=(const Scaleform::Ptr<Scaleform::Render::DICommandQueue::ExecuteCommand> &);
	Scaleform::Ptr<Scaleform::Render::DICommandQueue::ExecuteCommand> & SetPtr(Scaleform::Pickable<Scaleform::Render::DICommandQueue::ExecuteCommand>);
	Scaleform::Ptr<Scaleform::Render::DICommandQueue::ExecuteCommand> & SetPtr(Scaleform::Render::DICommandQueue::ExecuteCommand &);
	Scaleform::Ptr<Scaleform::Render::DICommandQueue::ExecuteCommand> & SetPtr(Scaleform::Render::DICommandQueue::ExecuteCommand *);
	Scaleform::Ptr<Scaleform::Render::DICommandQueue::ExecuteCommand> & SetPtr(const Scaleform::Ptr<Scaleform::Render::DICommandQueue::ExecuteCommand> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::DICommandQueue::ExecuteCommand * & GetRawRef();
	Scaleform::Render::DICommandQueue::ExecuteCommand * GetPtr();
	Scaleform::Render::DICommandQueue::ExecuteCommand & operator*();
	Scaleform::Render::DICommandQueue::ExecuteCommand * operator->();
	Scaleform::Render::DICommandQueue::ExecuteCommand * operator class Scaleform::Render::DICommandQueue::ExecuteCommand *();
	Scaleform::Ptr<Scaleform::Render::DICommandQueue::ExecuteCommand> & Pick(Scaleform::Render::DICommandQueue::ExecuteCommand *);
	Scaleform::Ptr<Scaleform::Render::DICommandQueue::ExecuteCommand> & Pick(Scaleform::Pickable<Scaleform::Render::DICommandQueue::ExecuteCommand>);
	Scaleform::Ptr<Scaleform::Render::DICommandQueue::ExecuteCommand> & Pick(Scaleform::Ptr<Scaleform::Render::DICommandQueue::ExecuteCommand> &);
};
struct Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_CreateTexture,Scaleform::Render::DICommand> :
	Scaleform::Render::DICommand
{
	DICommandImpl<Scaleform::Render::DICommand_CreateTexture,Scaleform::Render::DICommand>(Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_CreateTexture,Scaleform::Render::DICommand> &);
	DICommandImpl<Scaleform::Render::DICommand_CreateTexture,Scaleform::Render::DICommand>(const Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_CreateTexture,Scaleform::Render::DICommand> &);
	DICommandImpl<Scaleform::Render::DICommand_CreateTexture,Scaleform::Render::DICommand>(Scaleform::Render::DrawableImage *);
	DICommandImpl<Scaleform::Render::DICommand_CreateTexture,Scaleform::Render::DICommand>();
	virtual unsigned long GetSize();
	virtual ~DICommandImpl<Scaleform::Render::DICommand_CreateTexture,Scaleform::Render::DICommand>();
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_CreateTexture,Scaleform::Render::DICommand> & operator=(Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_CreateTexture,Scaleform::Render::DICommand> &);
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_CreateTexture,Scaleform::Render::DICommand> & operator=(const Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_CreateTexture,Scaleform::Render::DICommand> &);
};
struct Scaleform::Render::DICommand_CreateTexture :
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_CreateTexture,Scaleform::Render::DICommand>
{
	DICommand_CreateTexture(Scaleform::Render::DICommand_CreateTexture &);
	DICommand_CreateTexture(const Scaleform::Render::DICommand_CreateTexture &);
	DICommand_CreateTexture(Scaleform::Render::DrawableImage *);
	virtual Scaleform::Render::DICommandType GetType();
	virtual unsigned long GetCPUCaps();
	virtual void ExecuteHW(Scaleform::Render::DICommandContext &);
	virtual ~DICommand_CreateTexture();
	Scaleform::Render::DICommand_CreateTexture & operator=(Scaleform::Render::DICommand_CreateTexture &);
	Scaleform::Render::DICommand_CreateTexture & operator=(const Scaleform::Render::DICommand_CreateTexture &);
};
Scaleform::Render::DICommandType Scaleform::Render::DICommand_CreateTexture::GetType(); // 0x1400BB920
struct Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Clear,Scaleform::Render::DICommand> :
	Scaleform::Render::DICommand
{
	DICommandImpl<Scaleform::Render::DICommand_Clear,Scaleform::Render::DICommand>(Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Clear,Scaleform::Render::DICommand> &);
	DICommandImpl<Scaleform::Render::DICommand_Clear,Scaleform::Render::DICommand>(const Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Clear,Scaleform::Render::DICommand> &);
	DICommandImpl<Scaleform::Render::DICommand_Clear,Scaleform::Render::DICommand>(Scaleform::Render::DrawableImage *);
	DICommandImpl<Scaleform::Render::DICommand_Clear,Scaleform::Render::DICommand>();
	virtual unsigned long GetSize();
	virtual ~DICommandImpl<Scaleform::Render::DICommand_Clear,Scaleform::Render::DICommand>();
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Clear,Scaleform::Render::DICommand> & operator=(Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Clear,Scaleform::Render::DICommand> &);
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Clear,Scaleform::Render::DICommand> & operator=(const Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Clear,Scaleform::Render::DICommand> &);
};
struct Scaleform::Render::DICommand_Clear :
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Clear,Scaleform::Render::DICommand>
{
	Scaleform::Render::Color FillColor; // 0x10
	DICommand_Clear(Scaleform::Render::DICommand_Clear &);
	DICommand_Clear(const Scaleform::Render::DICommand_Clear &);
	DICommand_Clear(Scaleform::Render::DrawableImage *, Scaleform::Render::Color);
	virtual Scaleform::Render::DICommandType GetType();
	virtual unsigned long GetCPUCaps();
	virtual void ExecuteSW(Scaleform::Render::DICommandContext &, Scaleform::Render::ImageData &, Scaleform::Render::ImageData * *);
	virtual void ExecuteHW(Scaleform::Render::DICommandContext &);
	virtual ~DICommand_Clear();
	Scaleform::Render::DICommand_Clear & operator=(Scaleform::Render::DICommand_Clear &);
	Scaleform::Render::DICommand_Clear & operator=(const Scaleform::Render::DICommand_Clear &);
};
Scaleform::Render::DICommandType Scaleform::Render::DICommand_Clear::GetType(); // 0x1400BBAA0
struct Scaleform::Render::DICommand_SourceRect :
	Scaleform::Render::DICommand
{
	Scaleform::Ptr<Scaleform::Render::DrawableImage> pSource; // 0x10
	Scaleform::Render::Rect<long> SourceRect; // 0x18
	Scaleform::Render::Point<long> DestPoint; // 0x28
	DICommand_SourceRect(Scaleform::Render::DICommand_SourceRect &);
	DICommand_SourceRect(const Scaleform::Render::DICommand_SourceRect &);
	DICommand_SourceRect(Scaleform::Render::DrawableImage *, Scaleform::Render::DrawableImage *, const Scaleform::Render::Rect<long> &, const Scaleform::Render::Point<long> &);
	virtual unsigned long GetSourceImages(Scaleform::Render::DISourceImages *);
	bool CalculateDestClippedRect(Scaleform::Render::Rect<long> &, Scaleform::Render::Point<long> &);
	virtual ~DICommand_SourceRect();
	Scaleform::Render::DICommand_SourceRect & operator=(Scaleform::Render::DICommand_SourceRect &);
	Scaleform::Render::DICommand_SourceRect & operator=(const Scaleform::Render::DICommand_SourceRect &);
};
Scaleform::Render::DICommand_SourceRect::DICommand_SourceRect(Scaleform::Render::DrawableImage * image, Scaleform::Render::DrawableImage * source, const Scaleform::Render::Rect<long> & sr, const Scaleform::Render::Point<long> & dp); // 0x14032B8F0
unsigned long Scaleform::Render::DICommand_PixelDissolve::GetSourceImages(Scaleform::Render::DISourceImages * ps); // 0x14032E190
unsigned long Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_ApplyFilter>::GetSize(); // 0x14032E0F0
unsigned long Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_ColorTransform>::GetSize(); // 0x140509720
unsigned long Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Merge>::GetSize(); // 0x14032E110
void Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_ColorTransform>::ExecuteHWGetImages(Scaleform::Render::DrawableImage * * images, Scaleform::Render::Size<float> * readOffsets, const Scaleform::Render::Rect<long> & destClippedRect); // 0x14032D840
struct Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_ApplyFilter> :
	Scaleform::Render::DICommand_SourceRect
{
	DICommand_SourceRectImpl<Scaleform::Render::DICommand_ApplyFilter>(Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_ApplyFilter> &);
	DICommand_SourceRectImpl<Scaleform::Render::DICommand_ApplyFilter>(const Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_ApplyFilter> &);
	DICommand_SourceRectImpl<Scaleform::Render::DICommand_ApplyFilter>(Scaleform::Render::DrawableImage *, Scaleform::Render::DrawableImage *, const Scaleform::Render::Rect<long> &, const Scaleform::Render::Point<long> &);
	virtual unsigned long GetSize();
	virtual void ExecuteHW(Scaleform::Render::DICommandContext &);
	void ExecuteHWGetImages(Scaleform::Render::DrawableImage * *, Scaleform::Render::Size<float> *, const Scaleform::Render::Rect<long> &);
	static const unsigned long MaximumDrawableSources; // 0xFFFFFFFFFFFFFFFF
	void ExecuteHWCopyAction(Scaleform::Render::DICommandContext &, Scaleform::Render::Texture * *, const Scaleform::Render::Matrix2x4<float> *);
	bool GetRequireSourceRead();
	virtual ~DICommand_SourceRectImpl<Scaleform::Render::DICommand_ApplyFilter>();
	Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_ApplyFilter> & operator=(Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_ApplyFilter> &);
	Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_ApplyFilter> & operator=(const Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_ApplyFilter> &);
};
struct Scaleform::Render::DICommand_ApplyFilter :
	Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_ApplyFilter>
{
	Scaleform::Ptr<Scaleform::Render::Filter> pFilter; // 0x30
	DICommand_ApplyFilter(Scaleform::Render::DICommand_ApplyFilter &);
	DICommand_ApplyFilter(const Scaleform::Render::DICommand_ApplyFilter &);
	DICommand_ApplyFilter(Scaleform::Render::DrawableImage *, Scaleform::Render::DrawableImage *, const Scaleform::Render::Rect<long> &, const Scaleform::Render::Point<long> &, Scaleform::Render::Filter *);
	virtual Scaleform::Render::DICommandType GetType();
	virtual unsigned long GetCPUCaps();
	virtual void ExecuteHWGetImages(Scaleform::Render::DrawableImage * *, Scaleform::Render::Size<float> *, const Scaleform::Render::Rect<long> &);
	virtual void ExecuteHWCopyAction(Scaleform::Render::DICommandContext &, Scaleform::Render::Texture * *, const Scaleform::Render::Matrix2x4<float> *);
	virtual bool GetRequireSourceRead();
	virtual ~DICommand_ApplyFilter();
	Scaleform::Render::DICommand_ApplyFilter & operator=(Scaleform::Render::DICommand_ApplyFilter &);
	Scaleform::Render::DICommand_ApplyFilter & operator=(const Scaleform::Render::DICommand_ApplyFilter &);
};
Scaleform::Render::DICommandType Scaleform::Render::DICommand_ApplyFilter::GetType(); // 0x14002DEF0
struct Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Draw,Scaleform::Render::DICommand> :
	Scaleform::Render::DICommand
{
	DICommandImpl<Scaleform::Render::DICommand_Draw,Scaleform::Render::DICommand>(Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Draw,Scaleform::Render::DICommand> &);
	DICommandImpl<Scaleform::Render::DICommand_Draw,Scaleform::Render::DICommand>(const Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Draw,Scaleform::Render::DICommand> &);
	DICommandImpl<Scaleform::Render::DICommand_Draw,Scaleform::Render::DICommand>(Scaleform::Render::DrawableImage *);
	DICommandImpl<Scaleform::Render::DICommand_Draw,Scaleform::Render::DICommand>();
	virtual unsigned long GetSize();
	virtual ~DICommandImpl<Scaleform::Render::DICommand_Draw,Scaleform::Render::DICommand>();
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Draw,Scaleform::Render::DICommand> & operator=(Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Draw,Scaleform::Render::DICommand> &);
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Draw,Scaleform::Render::DICommand> & operator=(const Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Draw,Scaleform::Render::DICommand> &);
};
struct Scaleform::Render::DICommand_Draw :
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Draw,Scaleform::Render::DICommand>
{
	Scaleform::Render::TreeRoot * pRoot; // 0x10
	Scaleform::Render::Rect<long> ClipRect; // 0x18
	bool HasClipRect; // 0x28
	DICommand_Draw(Scaleform::Render::DICommand_Draw &);
	DICommand_Draw(const Scaleform::Render::DICommand_Draw &);
	DICommand_Draw(Scaleform::Render::DrawableImage *, Scaleform::Render::TreeRoot *, const Scaleform::Render::Rect<long> *);
	virtual Scaleform::Render::DICommandType GetType();
	virtual unsigned long GetCPUCaps();
	virtual void ExecuteHW(Scaleform::Render::DICommandContext &);
	virtual void ExecuteDiscard();
	virtual ~DICommand_Draw();
	Scaleform::Render::DICommand_Draw & operator=(Scaleform::Render::DICommand_Draw &);
	Scaleform::Render::DICommand_Draw & operator=(const Scaleform::Render::DICommand_Draw &);
};
Scaleform::Render::DICommand_Draw::DICommand_Draw(Scaleform::Render::DrawableImage * image, Scaleform::Render::TreeRoot * root, const Scaleform::Render::Rect<long> * clipRect); // 0x14032B360
Scaleform::Render::DICommandType Scaleform::Render::DICommand_Draw::GetType(); // 0x1403EF7A0
struct Scaleform::Render::DICommand_Dispose :
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Dispose,Scaleform::Render::DICommand>
{
	DICommand_Dispose(Scaleform::Render::DICommand_Dispose &);
	DICommand_Dispose(const Scaleform::Render::DICommand_Dispose &);
	DICommand_Dispose(Scaleform::Render::DrawableImage *);
	virtual Scaleform::Render::DICommandType GetType();
	virtual unsigned long GetCPUCaps();
	virtual void ExecuteHW(Scaleform::Render::DICommandContext &);
	virtual ~DICommand_Dispose();
	Scaleform::Render::DICommand_Dispose & operator=(Scaleform::Render::DICommand_Dispose &);
	Scaleform::Render::DICommand_Dispose & operator=(const Scaleform::Render::DICommand_Dispose &);
};
struct Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Dispose,Scaleform::Render::DICommand> :
	Scaleform::Render::DICommand
{
	DICommandImpl<Scaleform::Render::DICommand_Dispose,Scaleform::Render::DICommand>(Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Dispose,Scaleform::Render::DICommand> &);
	DICommandImpl<Scaleform::Render::DICommand_Dispose,Scaleform::Render::DICommand>(const Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Dispose,Scaleform::Render::DICommand> &);
	DICommandImpl<Scaleform::Render::DICommand_Dispose,Scaleform::Render::DICommand>(Scaleform::Render::DrawableImage *);
	DICommandImpl<Scaleform::Render::DICommand_Dispose,Scaleform::Render::DICommand>();
	virtual unsigned long GetSize();
	virtual ~DICommandImpl<Scaleform::Render::DICommand_Dispose,Scaleform::Render::DICommand>();
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Dispose,Scaleform::Render::DICommand> & operator=(Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Dispose,Scaleform::Render::DICommand> &);
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Dispose,Scaleform::Render::DICommand> & operator=(const Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Dispose,Scaleform::Render::DICommand> &);
};
struct Scaleform::Render::DICommand_CopyChannel :
	Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_CopyChannel>
{
	enum ChannelBits
	{
		Channel_Red = 1,
		Channel_Green = 2,
		Channel_Blue = 4,
		Channel_Alpha = 8,
		Channel_RGB = 7,
	};
	Scaleform::Render::DrawableImage::ChannelBits SourceChannel; // 0x30
	Scaleform::Render::DrawableImage::ChannelBits DestChannel; // 0x34
	DICommand_CopyChannel(Scaleform::Render::DICommand_CopyChannel &);
	DICommand_CopyChannel(const Scaleform::Render::DICommand_CopyChannel &);
	DICommand_CopyChannel(Scaleform::Render::DrawableImage *, Scaleform::Render::DrawableImage *, const Scaleform::Render::Rect<long> &, const Scaleform::Render::Point<long> &, Scaleform::Render::DrawableImage::ChannelBits, Scaleform::Render::DrawableImage::ChannelBits);
	virtual Scaleform::Render::DICommandType GetType();
	virtual unsigned long GetCPUCaps();
	virtual void ExecuteHWCopyAction(Scaleform::Render::DICommandContext &, Scaleform::Render::Texture * *, const Scaleform::Render::Matrix2x4<float> *);
	virtual bool GetRequireSourceRead();
	virtual void ExecuteSW(Scaleform::Render::DICommandContext &, Scaleform::Render::ImageData &, Scaleform::Render::ImageData * *);
	virtual ~DICommand_CopyChannel();
	Scaleform::Render::DICommand_CopyChannel & operator=(Scaleform::Render::DICommand_CopyChannel &);
	Scaleform::Render::DICommand_CopyChannel & operator=(const Scaleform::Render::DICommand_CopyChannel &);
};
struct Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_CopyChannel> :
	Scaleform::Render::DICommand_SourceRect
{
	DICommand_SourceRectImpl<Scaleform::Render::DICommand_CopyChannel>(Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_CopyChannel> &);
	DICommand_SourceRectImpl<Scaleform::Render::DICommand_CopyChannel>(const Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_CopyChannel> &);
	DICommand_SourceRectImpl<Scaleform::Render::DICommand_CopyChannel>(Scaleform::Render::DrawableImage *, Scaleform::Render::DrawableImage *, const Scaleform::Render::Rect<long> &, const Scaleform::Render::Point<long> &);
	virtual unsigned long GetSize();
	virtual void ExecuteHW(Scaleform::Render::DICommandContext &);
	void ExecuteHWGetImages(Scaleform::Render::DrawableImage * *, Scaleform::Render::Size<float> *, const Scaleform::Render::Rect<long> &);
	static const unsigned long MaximumDrawableSources; // 0xFFFFFFFFFFFFFFFF
	void ExecuteHWCopyAction(Scaleform::Render::DICommandContext &, Scaleform::Render::Texture * *, const Scaleform::Render::Matrix2x4<float> *);
	bool GetRequireSourceRead();
	virtual ~DICommand_SourceRectImpl<Scaleform::Render::DICommand_CopyChannel>();
	Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_CopyChannel> & operator=(Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_CopyChannel> &);
	Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_CopyChannel> & operator=(const Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_CopyChannel> &);
};
Scaleform::Render::DICommandType Scaleform::Render::DICommand_CopyChannel::GetType(); // 0x14032E300
bool Scaleform::Render::DICommand_ColorTransform::GetRequireSourceRead(); // 0x1400B8180
struct Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_CopyPixels> :
	Scaleform::Render::DICommand_SourceRect
{
	DICommand_SourceRectImpl<Scaleform::Render::DICommand_CopyPixels>(Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_CopyPixels> &);
	DICommand_SourceRectImpl<Scaleform::Render::DICommand_CopyPixels>(const Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_CopyPixels> &);
	DICommand_SourceRectImpl<Scaleform::Render::DICommand_CopyPixels>(Scaleform::Render::DrawableImage *, Scaleform::Render::DrawableImage *, const Scaleform::Render::Rect<long> &, const Scaleform::Render::Point<long> &);
	virtual unsigned long GetSize();
	virtual void ExecuteHW(Scaleform::Render::DICommandContext &);
	void ExecuteHWGetImages(Scaleform::Render::DrawableImage * *, Scaleform::Render::Size<float> *, const Scaleform::Render::Rect<long> &);
	static const unsigned long MaximumDrawableSources; // 0xFFFFFFFFFFFFFFFF
	void ExecuteHWCopyAction(Scaleform::Render::DICommandContext &, Scaleform::Render::Texture * *, const Scaleform::Render::Matrix2x4<float> *);
	bool GetRequireSourceRead();
	virtual ~DICommand_SourceRectImpl<Scaleform::Render::DICommand_CopyPixels>();
	Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_CopyPixels> & operator=(Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_CopyPixels> &);
	Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_CopyPixels> & operator=(const Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_CopyPixels> &);
};
struct Scaleform::Render::DICommand_CopyPixels :
	Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_CopyPixels>
{
	Scaleform::Ptr<Scaleform::Render::DrawableImage> pAlphaSource; // 0x30
	Scaleform::Render::Point<long> AlphaPoint; // 0x38
	bool MergeAlpha; // 0x40
	DICommand_CopyPixels(Scaleform::Render::DICommand_CopyPixels &);
	DICommand_CopyPixels(const Scaleform::Render::DICommand_CopyPixels &);
	DICommand_CopyPixels(Scaleform::Render::DrawableImage *, Scaleform::Render::DrawableImage *, const Scaleform::Render::Rect<long> &, const Scaleform::Render::Point<long> &, Scaleform::Render::DrawableImage *, const Scaleform::Render::Point<long> *, bool);
	virtual Scaleform::Render::DICommandType GetType();
	virtual unsigned long GetCPUCaps();
	void Execute(Scaleform::Render::DICommandContext &);
	virtual void ExecuteHWGetImages(Scaleform::Render::DrawableImage * *, Scaleform::Render::Size<float> *, const Scaleform::Render::Rect<long> &);
	virtual void ExecuteHWCopyAction(Scaleform::Render::DICommandContext &, Scaleform::Render::Texture * *, const Scaleform::Render::Matrix2x4<float> *);
	virtual bool GetRequireSourceRead();
	virtual void ExecuteSW(Scaleform::Render::DICommandContext &, Scaleform::Render::ImageData &, Scaleform::Render::ImageData * *);
	virtual unsigned long GetSourceImages(Scaleform::Render::DISourceImages *);
	virtual bool CalculateDestClippedRect(Scaleform::Render::Rect<long> &, Scaleform::Render::Point<long> &);
	virtual ~DICommand_CopyPixels();
	Scaleform::Render::DICommand_CopyPixels & operator=(Scaleform::Render::DICommand_CopyPixels &);
	Scaleform::Render::DICommand_CopyPixels & operator=(const Scaleform::Render::DICommand_CopyPixels &);
};
Scaleform::Render::DICommandType Scaleform::Render::DICommand_CopyPixels::GetType(); // 0x14002F6A0
unsigned long Scaleform::Render::DICommand_CopyPixels::GetSourceImages(Scaleform::Render::DISourceImages * ps); // 0x14032E150
struct Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_ColorTransform> :
	Scaleform::Render::DICommand_SourceRect
{
	DICommand_SourceRectImpl<Scaleform::Render::DICommand_ColorTransform>(Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_ColorTransform> &);
	DICommand_SourceRectImpl<Scaleform::Render::DICommand_ColorTransform>(const Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_ColorTransform> &);
	DICommand_SourceRectImpl<Scaleform::Render::DICommand_ColorTransform>(Scaleform::Render::DrawableImage *, Scaleform::Render::DrawableImage *, const Scaleform::Render::Rect<long> &, const Scaleform::Render::Point<long> &);
	virtual unsigned long GetSize();
	virtual void ExecuteHW(Scaleform::Render::DICommandContext &);
	void ExecuteHWGetImages(Scaleform::Render::DrawableImage * *, Scaleform::Render::Size<float> *, const Scaleform::Render::Rect<long> &);
	static const unsigned long MaximumDrawableSources; // 0xFFFFFFFFFFFFFFFF
	void ExecuteHWCopyAction(Scaleform::Render::DICommandContext &, Scaleform::Render::Texture * *, const Scaleform::Render::Matrix2x4<float> *);
	bool GetRequireSourceRead();
	virtual ~DICommand_SourceRectImpl<Scaleform::Render::DICommand_ColorTransform>();
	Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_ColorTransform> & operator=(Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_ColorTransform> &);
	Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_ColorTransform> & operator=(const Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_ColorTransform> &);
};
struct Scaleform::Render::DICommand_ColorTransform :
	Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_ColorTransform>
{
	unsigned char CxBuffer[32]; // 0x30
	DICommand_ColorTransform(Scaleform::Render::DICommand_ColorTransform &);
	DICommand_ColorTransform(const Scaleform::Render::DICommand_ColorTransform &);
	DICommand_ColorTransform(Scaleform::Render::DrawableImage *, const Scaleform::Render::Rect<long> &, const Scaleform::Render::Cxform &);
	virtual Scaleform::Render::DICommandType GetType();
	virtual unsigned long GetCPUCaps();
	virtual void ExecuteHWCopyAction(Scaleform::Render::DICommandContext &, Scaleform::Render::Texture * *, const Scaleform::Render::Matrix2x4<float> *);
	virtual bool GetRequireSourceRead();
	virtual void ExecuteSW(Scaleform::Render::DICommandContext &, Scaleform::Render::ImageData &, Scaleform::Render::ImageData * *);
	virtual ~DICommand_ColorTransform();
	Scaleform::Render::DICommand_ColorTransform & operator=(Scaleform::Render::DICommand_ColorTransform &);
	Scaleform::Render::DICommand_ColorTransform & operator=(const Scaleform::Render::DICommand_ColorTransform &);
};
Scaleform::Render::DICommand_ColorTransform::DICommand_ColorTransform(Scaleform::Render::DrawableImage * image, const Scaleform::Render::Rect<long> & rect, const Scaleform::Render::Cxform & cxform); // 0x14032B220
Scaleform::Render::DICommandType Scaleform::Render::DICommand_ColorTransform::GetType(); // 0x14004A840
struct Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Compare> :
	Scaleform::Render::DICommand_SourceRect
{
	DICommand_SourceRectImpl<Scaleform::Render::DICommand_Compare>(Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Compare> &);
	DICommand_SourceRectImpl<Scaleform::Render::DICommand_Compare>(const Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Compare> &);
	DICommand_SourceRectImpl<Scaleform::Render::DICommand_Compare>(Scaleform::Render::DrawableImage *, Scaleform::Render::DrawableImage *, const Scaleform::Render::Rect<long> &, const Scaleform::Render::Point<long> &);
	virtual unsigned long GetSize();
	virtual void ExecuteHW(Scaleform::Render::DICommandContext &);
	void ExecuteHWGetImages(Scaleform::Render::DrawableImage * *, Scaleform::Render::Size<float> *, const Scaleform::Render::Rect<long> &);
	static const unsigned long MaximumDrawableSources; // 0xFFFFFFFFFFFFFFFF
	void ExecuteHWCopyAction(Scaleform::Render::DICommandContext &, Scaleform::Render::Texture * *, const Scaleform::Render::Matrix2x4<float> *);
	bool GetRequireSourceRead();
	virtual ~DICommand_SourceRectImpl<Scaleform::Render::DICommand_Compare>();
	Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Compare> & operator=(Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Compare> &);
	Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Compare> & operator=(const Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Compare> &);
};
struct Scaleform::Render::DICommand_Compare :
	Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Compare>
{
	Scaleform::Ptr<Scaleform::Render::DrawableImage> pImageCompare1; // 0x30
	DICommand_Compare(Scaleform::Render::DICommand_Compare &);
	DICommand_Compare(const Scaleform::Render::DICommand_Compare &);
	DICommand_Compare(Scaleform::Render::DrawableImage *, Scaleform::Render::DrawableImage *, Scaleform::Render::DrawableImage *);
	virtual unsigned long GetSourceImages(Scaleform::Render::DISourceImages *);
	virtual Scaleform::Render::DICommandType GetType();
	virtual unsigned long GetCPUCaps();
	virtual void ExecuteHWGetImages(Scaleform::Render::DrawableImage * *, Scaleform::Render::Size<float> *, const Scaleform::Render::Rect<long> &);
	virtual void ExecuteHWCopyAction(Scaleform::Render::DICommandContext &, Scaleform::Render::Texture * *, const Scaleform::Render::Matrix2x4<float> *);
	virtual bool GetRequireSourceRead();
	virtual void ExecuteSW(Scaleform::Render::DICommandContext &, Scaleform::Render::ImageData &, Scaleform::Render::ImageData * *);
	virtual ~DICommand_Compare();
	Scaleform::Render::DICommand_Compare & operator=(Scaleform::Render::DICommand_Compare &);
	Scaleform::Render::DICommand_Compare & operator=(const Scaleform::Render::DICommand_Compare &);
};
unsigned long Scaleform::Render::DICommand_Compare::GetSourceImages(Scaleform::Render::DISourceImages * ps); // 0x14032E130
Scaleform::Render::DICommandType Scaleform::Render::DICommand_Compare::GetType(); // 0x14032E2F0
bool Scaleform::Render::DICommand_Compare::GetRequireSourceRead(); // 0x14032E080
struct Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_FillRect,Scaleform::Render::DICommand> :
	Scaleform::Render::DICommand
{
	DICommandImpl<Scaleform::Render::DICommand_FillRect,Scaleform::Render::DICommand>(Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_FillRect,Scaleform::Render::DICommand> &);
	DICommandImpl<Scaleform::Render::DICommand_FillRect,Scaleform::Render::DICommand>(const Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_FillRect,Scaleform::Render::DICommand> &);
	DICommandImpl<Scaleform::Render::DICommand_FillRect,Scaleform::Render::DICommand>(Scaleform::Render::DrawableImage *);
	DICommandImpl<Scaleform::Render::DICommand_FillRect,Scaleform::Render::DICommand>();
	virtual unsigned long GetSize();
	virtual ~DICommandImpl<Scaleform::Render::DICommand_FillRect,Scaleform::Render::DICommand>();
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_FillRect,Scaleform::Render::DICommand> & operator=(Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_FillRect,Scaleform::Render::DICommand> &);
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_FillRect,Scaleform::Render::DICommand> & operator=(const Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_FillRect,Scaleform::Render::DICommand> &);
};
struct Scaleform::Render::DICommand_FillRect :
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_FillRect,Scaleform::Render::DICommand>
{
	Scaleform::Render::Rect<long> ApplyRect; // 0x10
	Scaleform::Render::Color FillColor; // 0x20
	DICommand_FillRect(Scaleform::Render::DICommand_FillRect &);
	DICommand_FillRect(const Scaleform::Render::DICommand_FillRect &);
	DICommand_FillRect(Scaleform::Render::DrawableImage *, const Scaleform::Render::Rect<long> &, Scaleform::Render::Color);
	virtual Scaleform::Render::DICommandType GetType();
	virtual unsigned long GetCPUCaps();
	virtual void ExecuteSW(Scaleform::Render::DICommandContext &, Scaleform::Render::ImageData &, Scaleform::Render::ImageData * *);
	virtual void ExecuteHW(Scaleform::Render::DICommandContext &);
	virtual ~DICommand_FillRect();
	Scaleform::Render::DICommand_FillRect & operator=(Scaleform::Render::DICommand_FillRect &);
	Scaleform::Render::DICommand_FillRect & operator=(const Scaleform::Render::DICommand_FillRect &);
};
Scaleform::Render::DICommandType Scaleform::Render::DICommand_FillRect::GetType(); // 0x14037CE60
struct Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_FloodFill,Scaleform::Render::DICommand> :
	Scaleform::Render::DICommand
{
	DICommandImpl<Scaleform::Render::DICommand_FloodFill,Scaleform::Render::DICommand>(Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_FloodFill,Scaleform::Render::DICommand> &);
	DICommandImpl<Scaleform::Render::DICommand_FloodFill,Scaleform::Render::DICommand>(const Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_FloodFill,Scaleform::Render::DICommand> &);
	DICommandImpl<Scaleform::Render::DICommand_FloodFill,Scaleform::Render::DICommand>(Scaleform::Render::DrawableImage *);
	DICommandImpl<Scaleform::Render::DICommand_FloodFill,Scaleform::Render::DICommand>();
	virtual unsigned long GetSize();
	virtual ~DICommandImpl<Scaleform::Render::DICommand_FloodFill,Scaleform::Render::DICommand>();
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_FloodFill,Scaleform::Render::DICommand> & operator=(Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_FloodFill,Scaleform::Render::DICommand> &);
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_FloodFill,Scaleform::Render::DICommand> & operator=(const Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_FloodFill,Scaleform::Render::DICommand> &);
};
struct Scaleform::Render::DICommand_FloodFill :
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_FloodFill,Scaleform::Render::DICommand>
{
	Scaleform::Render::Point<long> Pt; // 0x10
	Scaleform::Render::Color FillColor; // 0x18
	DICommand_FloodFill(Scaleform::Render::DICommand_FloodFill &);
	DICommand_FloodFill(const Scaleform::Render::DICommand_FloodFill &);
	DICommand_FloodFill(Scaleform::Render::DrawableImage *, const Scaleform::Render::Point<long> &, Scaleform::Render::Color);
	virtual Scaleform::Render::DICommandType GetType();
	virtual unsigned long GetCPUCaps();
	virtual void ExecuteSW(Scaleform::Render::DICommandContext &, Scaleform::Render::ImageData &, Scaleform::Render::ImageData * *);
	virtual ~DICommand_FloodFill();
	Scaleform::Render::DICommand_FloodFill & operator=(Scaleform::Render::DICommand_FloodFill &);
	Scaleform::Render::DICommand_FloodFill & operator=(const Scaleform::Render::DICommand_FloodFill &);
};
Scaleform::Render::DICommandType Scaleform::Render::DICommand_FloodFill::GetType(); // 0x14032E310
struct Scaleform::Render::DICommand_GetColorBoundsRect :
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_GetColorBoundsRect,Scaleform::Render::DICommand>
{
	unsigned long Mask; // 0x10
	unsigned long SearchColor; // 0x14
	bool FindColor; // 0x18
	Scaleform::Render::Rect<long> * Result; // 0x20
	DICommand_GetColorBoundsRect(Scaleform::Render::DICommand_GetColorBoundsRect &);
	DICommand_GetColorBoundsRect(const Scaleform::Render::DICommand_GetColorBoundsRect &);
	DICommand_GetColorBoundsRect(Scaleform::Render::DrawableImage *, unsigned long, unsigned long, bool, Scaleform::Render::Rect<long> *);
	virtual Scaleform::Render::DICommandType GetType();
	virtual unsigned long GetCPUCaps();
	virtual void ExecuteSW(Scaleform::Render::DICommandContext &, Scaleform::Render::ImageData &, Scaleform::Render::ImageData * *);
	virtual ~DICommand_GetColorBoundsRect();
	Scaleform::Render::DICommand_GetColorBoundsRect & operator=(Scaleform::Render::DICommand_GetColorBoundsRect &);
	Scaleform::Render::DICommand_GetColorBoundsRect & operator=(const Scaleform::Render::DICommand_GetColorBoundsRect &);
};
struct Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_GetColorBoundsRect,Scaleform::Render::DICommand> :
	Scaleform::Render::DICommand
{
	DICommandImpl<Scaleform::Render::DICommand_GetColorBoundsRect,Scaleform::Render::DICommand>(Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_GetColorBoundsRect,Scaleform::Render::DICommand> &);
	DICommandImpl<Scaleform::Render::DICommand_GetColorBoundsRect,Scaleform::Render::DICommand>(const Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_GetColorBoundsRect,Scaleform::Render::DICommand> &);
	DICommandImpl<Scaleform::Render::DICommand_GetColorBoundsRect,Scaleform::Render::DICommand>(Scaleform::Render::DrawableImage *);
	DICommandImpl<Scaleform::Render::DICommand_GetColorBoundsRect,Scaleform::Render::DICommand>();
	virtual unsigned long GetSize();
	virtual ~DICommandImpl<Scaleform::Render::DICommand_GetColorBoundsRect,Scaleform::Render::DICommand>();
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_GetColorBoundsRect,Scaleform::Render::DICommand> & operator=(Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_GetColorBoundsRect,Scaleform::Render::DICommand> &);
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_GetColorBoundsRect,Scaleform::Render::DICommand> & operator=(const Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_GetColorBoundsRect,Scaleform::Render::DICommand> &);
};
Scaleform::Render::DICommandType Scaleform::Render::DICommand_GetColorBoundsRect::GetType(); // 0x14032E320
struct Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_GetPixel32,Scaleform::Render::DICommand> :
	Scaleform::Render::DICommand
{
	DICommandImpl<Scaleform::Render::DICommand_GetPixel32,Scaleform::Render::DICommand>(Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_GetPixel32,Scaleform::Render::DICommand> &);
	DICommandImpl<Scaleform::Render::DICommand_GetPixel32,Scaleform::Render::DICommand>(const Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_GetPixel32,Scaleform::Render::DICommand> &);
	DICommandImpl<Scaleform::Render::DICommand_GetPixel32,Scaleform::Render::DICommand>(Scaleform::Render::DrawableImage *);
	DICommandImpl<Scaleform::Render::DICommand_GetPixel32,Scaleform::Render::DICommand>();
	virtual unsigned long GetSize();
	virtual ~DICommandImpl<Scaleform::Render::DICommand_GetPixel32,Scaleform::Render::DICommand>();
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_GetPixel32,Scaleform::Render::DICommand> & operator=(Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_GetPixel32,Scaleform::Render::DICommand> &);
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_GetPixel32,Scaleform::Render::DICommand> & operator=(const Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_GetPixel32,Scaleform::Render::DICommand> &);
};
struct Scaleform::Render::DICommand_GetPixel32 :
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_GetPixel32,Scaleform::Render::DICommand>
{
	unsigned long X; // 0x10
	unsigned long Y; // 0x14
	Scaleform::Render::Color * Result; // 0x18
	DICommand_GetPixel32(Scaleform::Render::DICommand_GetPixel32 &);
	DICommand_GetPixel32(const Scaleform::Render::DICommand_GetPixel32 &);
	DICommand_GetPixel32(Scaleform::Render::DrawableImage *, long, long, Scaleform::Render::Color *);
	virtual Scaleform::Render::DICommandType GetType();
	virtual unsigned long GetCPUCaps();
	virtual void ExecuteSW(Scaleform::Render::DICommandContext &, Scaleform::Render::ImageData &, Scaleform::Render::ImageData * *);
	virtual ~DICommand_GetPixel32();
	Scaleform::Render::DICommand_GetPixel32 & operator=(Scaleform::Render::DICommand_GetPixel32 &);
	Scaleform::Render::DICommand_GetPixel32 & operator=(const Scaleform::Render::DICommand_GetPixel32 &);
};
Scaleform::Render::DICommandType Scaleform::Render::DICommand_GetPixel32::GetType(); // 0x14032E330
struct Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_GetPixels,Scaleform::Render::DICommand> :
	Scaleform::Render::DICommand
{
	DICommandImpl<Scaleform::Render::DICommand_GetPixels,Scaleform::Render::DICommand>(Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_GetPixels,Scaleform::Render::DICommand> &);
	DICommandImpl<Scaleform::Render::DICommand_GetPixels,Scaleform::Render::DICommand>(const Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_GetPixels,Scaleform::Render::DICommand> &);
	DICommandImpl<Scaleform::Render::DICommand_GetPixels,Scaleform::Render::DICommand>(Scaleform::Render::DrawableImage *);
	DICommandImpl<Scaleform::Render::DICommand_GetPixels,Scaleform::Render::DICommand>();
	virtual unsigned long GetSize();
	virtual ~DICommandImpl<Scaleform::Render::DICommand_GetPixels,Scaleform::Render::DICommand>();
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_GetPixels,Scaleform::Render::DICommand> & operator=(Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_GetPixels,Scaleform::Render::DICommand> &);
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_GetPixels,Scaleform::Render::DICommand> & operator=(const Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_GetPixels,Scaleform::Render::DICommand> &);
};
struct Scaleform::Render::DICommand_GetPixels :
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_GetPixels,Scaleform::Render::DICommand>,
	Unassignable
{
	Scaleform::Render::Rect<long> SourceRect; // 0x10
	Scaleform::Render::DIPixelProvider & Provider; // 0x20
	bool * Result; // 0x28
	DICommand_GetPixels(Scaleform::Render::DICommand_GetPixels &);
	DICommand_GetPixels(const Scaleform::Render::DICommand_GetPixels &);
	DICommand_GetPixels(Scaleform::Render::DrawableImage *, Scaleform::Render::Rect<long>, Scaleform::Render::DIPixelProvider &, bool *);
	virtual Scaleform::Render::DICommandType GetType();
	virtual unsigned long GetCPUCaps();
	virtual void ExecuteSW(Scaleform::Render::DICommandContext &, Scaleform::Render::ImageData &, Scaleform::Render::ImageData * *);
	virtual ~DICommand_GetPixels();
};
Scaleform::Render::DICommandType Scaleform::Render::DICommand_GetPixels::GetType(); // 0x14032E340
struct Scaleform::Render::DICommand_Histogram :
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Histogram,Scaleform::Render::DICommand>
{
	Scaleform::Render::Rect<long> SourceRect; // 0x10
	unsigned long * Result; // 0x20
	DICommand_Histogram(Scaleform::Render::DICommand_Histogram &);
	DICommand_Histogram(const Scaleform::Render::DICommand_Histogram &);
	DICommand_Histogram(Scaleform::Render::DrawableImage *, Scaleform::Render::Rect<long>, unsigned long *);
	virtual Scaleform::Render::DICommandType GetType();
	virtual unsigned long GetCPUCaps();
	virtual void ExecuteSW(Scaleform::Render::DICommandContext &, Scaleform::Render::ImageData &, Scaleform::Render::ImageData * *);
	virtual ~DICommand_Histogram();
	Scaleform::Render::DICommand_Histogram & operator=(Scaleform::Render::DICommand_Histogram &);
	Scaleform::Render::DICommand_Histogram & operator=(const Scaleform::Render::DICommand_Histogram &);
};
struct Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Histogram,Scaleform::Render::DICommand> :
	Scaleform::Render::DICommand
{
	DICommandImpl<Scaleform::Render::DICommand_Histogram,Scaleform::Render::DICommand>(Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Histogram,Scaleform::Render::DICommand> &);
	DICommandImpl<Scaleform::Render::DICommand_Histogram,Scaleform::Render::DICommand>(const Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Histogram,Scaleform::Render::DICommand> &);
	DICommandImpl<Scaleform::Render::DICommand_Histogram,Scaleform::Render::DICommand>(Scaleform::Render::DrawableImage *);
	DICommandImpl<Scaleform::Render::DICommand_Histogram,Scaleform::Render::DICommand>();
	virtual unsigned long GetSize();
	virtual ~DICommandImpl<Scaleform::Render::DICommand_Histogram,Scaleform::Render::DICommand>();
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Histogram,Scaleform::Render::DICommand> & operator=(Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Histogram,Scaleform::Render::DICommand> &);
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Histogram,Scaleform::Render::DICommand> & operator=(const Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Histogram,Scaleform::Render::DICommand> &);
};
unsigned long Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_CreateTexture,Scaleform::Render::DICommand>::GetSize(); // 0x1400482C0
struct Scaleform::Render::DICommand_HitTest :
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_HitTest,Scaleform::Render::DICommand>
{
	Scaleform::Ptr<Scaleform::Render::Image> SecondImage; // 0x10
	Scaleform::Render::Rect<long> SecondArea; // 0x18
	Scaleform::Render::Point<long> FirstPoint; // 0x28
	Scaleform::Render::Point<long> SecondPoint; // 0x30
	unsigned long FirstThreshold; // 0x38
	unsigned long SecondThreshold; // 0x3C
	bool * Result; // 0x40
	DICommand_HitTest(Scaleform::Render::DICommand_HitTest &);
	DICommand_HitTest(const Scaleform::Render::DICommand_HitTest &);
	DICommand_HitTest(Scaleform::Render::DrawableImage *, Scaleform::Render::ImageBase *, const Scaleform::Render::Point<long> &, const Scaleform::Render::Point<long> &, unsigned long, unsigned long, bool *);
	DICommand_HitTest(Scaleform::Render::DrawableImage *, const Scaleform::Render::Point<long> &, Scaleform::Render::Rect<long> &, unsigned long, bool *);
	virtual unsigned long GetSourceImages(Scaleform::Render::DISourceImages *);
	virtual Scaleform::Render::DICommandType GetType();
	virtual unsigned long GetCPUCaps();
	virtual void ExecuteSW(Scaleform::Render::DICommandContext &, Scaleform::Render::ImageData &, Scaleform::Render::ImageData * *);
	virtual ~DICommand_HitTest();
	Scaleform::Render::DICommand_HitTest & operator=(Scaleform::Render::DICommand_HitTest &);
	Scaleform::Render::DICommand_HitTest & operator=(const Scaleform::Render::DICommand_HitTest &);
};
struct Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_HitTest,Scaleform::Render::DICommand> :
	Scaleform::Render::DICommand
{
	DICommandImpl<Scaleform::Render::DICommand_HitTest,Scaleform::Render::DICommand>(Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_HitTest,Scaleform::Render::DICommand> &);
	DICommandImpl<Scaleform::Render::DICommand_HitTest,Scaleform::Render::DICommand>(const Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_HitTest,Scaleform::Render::DICommand> &);
	DICommandImpl<Scaleform::Render::DICommand_HitTest,Scaleform::Render::DICommand>(Scaleform::Render::DrawableImage *);
	DICommandImpl<Scaleform::Render::DICommand_HitTest,Scaleform::Render::DICommand>();
	virtual unsigned long GetSize();
	virtual ~DICommandImpl<Scaleform::Render::DICommand_HitTest,Scaleform::Render::DICommand>();
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_HitTest,Scaleform::Render::DICommand> & operator=(Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_HitTest,Scaleform::Render::DICommand> &);
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_HitTest,Scaleform::Render::DICommand> & operator=(const Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_HitTest,Scaleform::Render::DICommand> &);
};
unsigned long Scaleform::Render::DICommand_HitTest::GetSourceImages(Scaleform::Render::DISourceImages * ps); // 0x14032E170
unsigned long Scaleform::Render::DICommand_GetColorBoundsRect::GetCPUCaps(); // 0x14032DBA0
struct Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Merge> :
	Scaleform::Render::DICommand_SourceRect
{
	DICommand_SourceRectImpl<Scaleform::Render::DICommand_Merge>(Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Merge> &);
	DICommand_SourceRectImpl<Scaleform::Render::DICommand_Merge>(const Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Merge> &);
	DICommand_SourceRectImpl<Scaleform::Render::DICommand_Merge>(Scaleform::Render::DrawableImage *, Scaleform::Render::DrawableImage *, const Scaleform::Render::Rect<long> &, const Scaleform::Render::Point<long> &);
	virtual unsigned long GetSize();
	virtual void ExecuteHW(Scaleform::Render::DICommandContext &);
	void ExecuteHWGetImages(Scaleform::Render::DrawableImage * *, Scaleform::Render::Size<float> *, const Scaleform::Render::Rect<long> &);
	static const unsigned long MaximumDrawableSources; // 0xFFFFFFFFFFFFFFFF
	void ExecuteHWCopyAction(Scaleform::Render::DICommandContext &, Scaleform::Render::Texture * *, const Scaleform::Render::Matrix2x4<float> *);
	bool GetRequireSourceRead();
	virtual ~DICommand_SourceRectImpl<Scaleform::Render::DICommand_Merge>();
	Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Merge> & operator=(Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Merge> &);
	Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Merge> & operator=(const Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Merge> &);
};
struct Scaleform::Render::DICommand_Merge :
	Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Merge>
{
	unsigned long RedMultiplier; // 0x30
	unsigned long GreenMultiplier; // 0x34
	unsigned long BlueMultiplier; // 0x38
	unsigned long AlphaMultiplier; // 0x3C
	DICommand_Merge(Scaleform::Render::DICommand_Merge &);
	DICommand_Merge(const Scaleform::Render::DICommand_Merge &);
	DICommand_Merge(Scaleform::Render::DrawableImage *, Scaleform::Render::DrawableImage *, const Scaleform::Render::Rect<long> &, const Scaleform::Render::Point<long> &, unsigned long, unsigned long, unsigned long, unsigned long);
	virtual Scaleform::Render::DICommandType GetType();
	virtual unsigned long GetCPUCaps();
	virtual void ExecuteHWCopyAction(Scaleform::Render::DICommandContext &, Scaleform::Render::Texture * *, const Scaleform::Render::Matrix2x4<float> *);
	virtual bool GetRequireSourceRead();
	virtual void ExecuteSW(Scaleform::Render::DICommandContext &, Scaleform::Render::ImageData &, Scaleform::Render::ImageData * *);
	virtual ~DICommand_Merge();
	Scaleform::Render::DICommand_Merge & operator=(Scaleform::Render::DICommand_Merge &);
	Scaleform::Render::DICommand_Merge & operator=(const Scaleform::Render::DICommand_Merge &);
};
Scaleform::Render::DICommandType Scaleform::Render::DICommand_Merge::GetType(); // 0x14032E360
struct Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Noise,Scaleform::Render::DICommand> :
	Scaleform::Render::DICommand
{
	DICommandImpl<Scaleform::Render::DICommand_Noise,Scaleform::Render::DICommand>(Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Noise,Scaleform::Render::DICommand> &);
	DICommandImpl<Scaleform::Render::DICommand_Noise,Scaleform::Render::DICommand>(const Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Noise,Scaleform::Render::DICommand> &);
	DICommandImpl<Scaleform::Render::DICommand_Noise,Scaleform::Render::DICommand>(Scaleform::Render::DrawableImage *);
	DICommandImpl<Scaleform::Render::DICommand_Noise,Scaleform::Render::DICommand>();
	virtual unsigned long GetSize();
	virtual ~DICommandImpl<Scaleform::Render::DICommand_Noise,Scaleform::Render::DICommand>();
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Noise,Scaleform::Render::DICommand> & operator=(Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Noise,Scaleform::Render::DICommand> &);
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Noise,Scaleform::Render::DICommand> & operator=(const Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Noise,Scaleform::Render::DICommand> &);
};
struct Scaleform::Render::DICommand_Noise :
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_Noise,Scaleform::Render::DICommand>
{
	unsigned long RandomSeed; // 0x10
	unsigned long Low; // 0x14
	unsigned long High; // 0x18
	unsigned long ChannelMask; // 0x1C
	bool GrayScale; // 0x20
	DICommand_Noise(Scaleform::Render::DICommand_Noise &);
	DICommand_Noise(const Scaleform::Render::DICommand_Noise &);
	DICommand_Noise(Scaleform::Render::DrawableImage *, unsigned long, unsigned long, unsigned long, unsigned long, bool);
	virtual Scaleform::Render::DICommandType GetType();
	virtual unsigned long GetCPUCaps();
	virtual void ExecuteSW(Scaleform::Render::DICommandContext &, Scaleform::Render::ImageData &, Scaleform::Render::ImageData * *);
	virtual ~DICommand_Noise();
	Scaleform::Render::DICommand_Noise & operator=(Scaleform::Render::DICommand_Noise &);
	Scaleform::Render::DICommand_Noise & operator=(const Scaleform::Render::DICommand_Noise &);
};
Scaleform::Render::DICommandType Scaleform::Render::DICommand_Noise::GetType(); // 0x14032E370
struct Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_PaletteMap> :
	Scaleform::Render::DICommand_SourceRect
{
	DICommand_SourceRectImpl<Scaleform::Render::DICommand_PaletteMap>(Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_PaletteMap> &);
	DICommand_SourceRectImpl<Scaleform::Render::DICommand_PaletteMap>(const Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_PaletteMap> &);
	DICommand_SourceRectImpl<Scaleform::Render::DICommand_PaletteMap>(Scaleform::Render::DrawableImage *, Scaleform::Render::DrawableImage *, const Scaleform::Render::Rect<long> &, const Scaleform::Render::Point<long> &);
	virtual unsigned long GetSize();
	virtual void ExecuteHW(Scaleform::Render::DICommandContext &);
	void ExecuteHWGetImages(Scaleform::Render::DrawableImage * *, Scaleform::Render::Size<float> *, const Scaleform::Render::Rect<long> &);
	static const unsigned long MaximumDrawableSources; // 0xFFFFFFFFFFFFFFFF
	void ExecuteHWCopyAction(Scaleform::Render::DICommandContext &, Scaleform::Render::Texture * *, const Scaleform::Render::Matrix2x4<float> *);
	bool GetRequireSourceRead();
	virtual ~DICommand_SourceRectImpl<Scaleform::Render::DICommand_PaletteMap>();
	Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_PaletteMap> & operator=(Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_PaletteMap> &);
	Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_PaletteMap> & operator=(const Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_PaletteMap> &);
};
struct Scaleform::Render::DICommand_PaletteMap :
	Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_PaletteMap>
{
	static const unsigned long ChannelSize; // 0xFFFFFFFFFFFFFFFF
	static const unsigned long PaletteSize; // 0xFFFFFFFFFFFFFFFF
	unsigned long * Channels; // 0x30
	unsigned long ChannelMask; // 0x38
	DICommand_PaletteMap(const Scaleform::Render::DICommand_PaletteMap &);
	DICommand_PaletteMap(Scaleform::Render::DrawableImage *, Scaleform::Render::DrawableImage *, const Scaleform::Render::Rect<long> &, const Scaleform::Render::Point<long> &, unsigned long * *);
	virtual ~DICommand_PaletteMap();
	virtual Scaleform::Render::DICommandType GetType();
	virtual unsigned long GetCPUCaps();
	virtual void ExecuteHWCopyAction(Scaleform::Render::DICommandContext &, Scaleform::Render::Texture * *, const Scaleform::Render::Matrix2x4<float> *);
	virtual bool GetRequireSourceRead();
	virtual void ExecuteSW(Scaleform::Render::DICommandContext &, Scaleform::Render::ImageData &, Scaleform::Render::ImageData * *);
	Scaleform::Render::DICommand_PaletteMap & operator=(const Scaleform::Render::DICommand_PaletteMap &);
};
Scaleform::Render::DICommand_PaletteMap::DICommand_PaletteMap(Scaleform::Render::DrawableImage * image, Scaleform::Render::DrawableImage * source, const Scaleform::Render::Rect<long> & sr, const Scaleform::Render::Point<long> & dp, unsigned long * * channels); // 0x14032B570
Scaleform::Render::DICommand_PaletteMap::DICommand_PaletteMap(const Scaleform::Render::DICommand_PaletteMap & other); // 0x14032B4B0
Scaleform::Render::DICommand_PaletteMap::~DICommand_PaletteMap(); // 0x14032BDB0
Scaleform::Render::DICommandType Scaleform::Render::DICommand_PaletteMap::GetType(); // 0x14032E380
bool Scaleform::Render::DICommand_PaletteMap::GetRequireSourceRead(); // 0x14032E0A0
struct Scaleform::Render::DICommand_PerlinNoise :
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_PerlinNoise,Scaleform::Render::DICommand>
{
	float FrequencyX; // 0x10
	float FrequencyY; // 0x14
	unsigned long NumOctaves; // 0x18
	unsigned long RandomSeed; // 0x1C
	bool Stitch; // 0x20
	bool FractalNoise; // 0x21
	unsigned long ChannelMask; // 0x24
	bool GrayScale; // 0x28
	static const unsigned long MaximumOffsetOctaves; // 0xFFFFFFFFFFFFFFFF
	float Offsets[32]; // 0x2C
	unsigned long OffsetCount; // 0xAC
	DICommand_PerlinNoise(const Scaleform::Render::DICommand_PerlinNoise &);
	DICommand_PerlinNoise(Scaleform::Render::DrawableImage *, float, float, unsigned long, unsigned long, bool, bool, unsigned long, bool, float *, unsigned long);
	virtual Scaleform::Render::DICommandType GetType();
	virtual unsigned long GetCPUCaps();
	virtual void ExecuteSW(Scaleform::Render::DICommandContext &, Scaleform::Render::ImageData &, Scaleform::Render::ImageData * *);
	virtual ~DICommand_PerlinNoise();
	Scaleform::Render::DICommand_PerlinNoise & operator=(const Scaleform::Render::DICommand_PerlinNoise &);
};
struct Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_PerlinNoise,Scaleform::Render::DICommand> :
	Scaleform::Render::DICommand
{
	DICommandImpl<Scaleform::Render::DICommand_PerlinNoise,Scaleform::Render::DICommand>(Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_PerlinNoise,Scaleform::Render::DICommand> &);
	DICommandImpl<Scaleform::Render::DICommand_PerlinNoise,Scaleform::Render::DICommand>(const Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_PerlinNoise,Scaleform::Render::DICommand> &);
	DICommandImpl<Scaleform::Render::DICommand_PerlinNoise,Scaleform::Render::DICommand>(Scaleform::Render::DrawableImage *);
	DICommandImpl<Scaleform::Render::DICommand_PerlinNoise,Scaleform::Render::DICommand>();
	virtual unsigned long GetSize();
	virtual ~DICommandImpl<Scaleform::Render::DICommand_PerlinNoise,Scaleform::Render::DICommand>();
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_PerlinNoise,Scaleform::Render::DICommand> & operator=(Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_PerlinNoise,Scaleform::Render::DICommand> &);
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_PerlinNoise,Scaleform::Render::DICommand> & operator=(const Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_PerlinNoise,Scaleform::Render::DICommand> &);
};
Scaleform::Render::DICommand_PerlinNoise::DICommand_PerlinNoise(const Scaleform::Render::DICommand_PerlinNoise & other); // 0x14032B7A0
Scaleform::Render::DICommandType Scaleform::Render::DICommand_PerlinNoise::GetType(); // 0x14032E390
struct Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_PixelDissolve,Scaleform::Render::DICommand> :
	Scaleform::Render::DICommand
{
	DICommandImpl<Scaleform::Render::DICommand_PixelDissolve,Scaleform::Render::DICommand>(Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_PixelDissolve,Scaleform::Render::DICommand> &);
	DICommandImpl<Scaleform::Render::DICommand_PixelDissolve,Scaleform::Render::DICommand>(const Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_PixelDissolve,Scaleform::Render::DICommand> &);
	DICommandImpl<Scaleform::Render::DICommand_PixelDissolve,Scaleform::Render::DICommand>(Scaleform::Render::DrawableImage *);
	DICommandImpl<Scaleform::Render::DICommand_PixelDissolve,Scaleform::Render::DICommand>();
	virtual unsigned long GetSize();
	virtual ~DICommandImpl<Scaleform::Render::DICommand_PixelDissolve,Scaleform::Render::DICommand>();
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_PixelDissolve,Scaleform::Render::DICommand> & operator=(Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_PixelDissolve,Scaleform::Render::DICommand> &);
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_PixelDissolve,Scaleform::Render::DICommand> & operator=(const Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_PixelDissolve,Scaleform::Render::DICommand> &);
};
struct Scaleform::Render::DICommand_PixelDissolve :
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_PixelDissolve,Scaleform::Render::DICommand>
{
	Scaleform::Ptr<Scaleform::Render::DrawableImage> pSource; // 0x10
	Scaleform::Render::Rect<long> SourceRect; // 0x18
	Scaleform::Render::Point<long> DestPoint; // 0x28
	unsigned long RandomSeed; // 0x30
	unsigned long NumPixels; // 0x34
	Scaleform::Render::Color Fill; // 0x38
	unsigned long * Result; // 0x40
	DICommand_PixelDissolve(Scaleform::Render::DICommand_PixelDissolve &);
	DICommand_PixelDissolve(const Scaleform::Render::DICommand_PixelDissolve &);
	DICommand_PixelDissolve(Scaleform::Render::DrawableImage *, Scaleform::Render::DrawableImage *, const Scaleform::Render::Rect<long> &, const Scaleform::Render::Point<long> &, unsigned long, unsigned long, Scaleform::Render::Color, unsigned long *);
	virtual unsigned long GetSourceImages(Scaleform::Render::DISourceImages *);
	virtual Scaleform::Render::DICommandType GetType();
	virtual unsigned long GetCPUCaps();
	virtual void ExecuteSW(Scaleform::Render::DICommandContext &, Scaleform::Render::ImageData &, Scaleform::Render::ImageData * *);
	virtual ~DICommand_PixelDissolve();
	Scaleform::Render::DICommand_PixelDissolve & operator=(Scaleform::Render::DICommand_PixelDissolve &);
	Scaleform::Render::DICommand_PixelDissolve & operator=(const Scaleform::Render::DICommand_PixelDissolve &);
};
Scaleform::Render::DICommandType Scaleform::Render::DICommand_PixelDissolve::GetType(); // 0x14032E3A0
struct Scaleform::Render::DICommand_SetPixel32 :
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_SetPixel32,Scaleform::Render::DICommand>
{
	unsigned long X; // 0x10
	unsigned long Y; // 0x14
	Scaleform::Render::Color Fill; // 0x18
	bool OverwriteAlpha; // 0x1C
	bool Result; // 0x1D
	DICommand_SetPixel32(Scaleform::Render::DICommand_SetPixel32 &);
	DICommand_SetPixel32(const Scaleform::Render::DICommand_SetPixel32 &);
	DICommand_SetPixel32(Scaleform::Render::DrawableImage *, unsigned long, unsigned long, Scaleform::Render::Color, bool);
	virtual Scaleform::Render::DICommandType GetType();
	virtual unsigned long GetCPUCaps();
	virtual void ExecuteSW(Scaleform::Render::DICommandContext &, Scaleform::Render::ImageData &, Scaleform::Render::ImageData * *);
	virtual ~DICommand_SetPixel32();
	Scaleform::Render::DICommand_SetPixel32 & operator=(Scaleform::Render::DICommand_SetPixel32 &);
	Scaleform::Render::DICommand_SetPixel32 & operator=(const Scaleform::Render::DICommand_SetPixel32 &);
};
struct Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_SetPixel32,Scaleform::Render::DICommand> :
	Scaleform::Render::DICommand
{
	DICommandImpl<Scaleform::Render::DICommand_SetPixel32,Scaleform::Render::DICommand>(Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_SetPixel32,Scaleform::Render::DICommand> &);
	DICommandImpl<Scaleform::Render::DICommand_SetPixel32,Scaleform::Render::DICommand>(const Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_SetPixel32,Scaleform::Render::DICommand> &);
	DICommandImpl<Scaleform::Render::DICommand_SetPixel32,Scaleform::Render::DICommand>(Scaleform::Render::DrawableImage *);
	DICommandImpl<Scaleform::Render::DICommand_SetPixel32,Scaleform::Render::DICommand>();
	virtual unsigned long GetSize();
	virtual ~DICommandImpl<Scaleform::Render::DICommand_SetPixel32,Scaleform::Render::DICommand>();
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_SetPixel32,Scaleform::Render::DICommand> & operator=(Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_SetPixel32,Scaleform::Render::DICommand> &);
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_SetPixel32,Scaleform::Render::DICommand> & operator=(const Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_SetPixel32,Scaleform::Render::DICommand> &);
};
Scaleform::Render::DICommandType Scaleform::Render::DICommand_SetPixel32::GetType(); // 0x14032E3C0
struct Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_SetPixels,Scaleform::Render::DICommand> :
	Scaleform::Render::DICommand
{
	DICommandImpl<Scaleform::Render::DICommand_SetPixels,Scaleform::Render::DICommand>(Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_SetPixels,Scaleform::Render::DICommand> &);
	DICommandImpl<Scaleform::Render::DICommand_SetPixels,Scaleform::Render::DICommand>(const Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_SetPixels,Scaleform::Render::DICommand> &);
	DICommandImpl<Scaleform::Render::DICommand_SetPixels,Scaleform::Render::DICommand>(Scaleform::Render::DrawableImage *);
	DICommandImpl<Scaleform::Render::DICommand_SetPixels,Scaleform::Render::DICommand>();
	virtual unsigned long GetSize();
	virtual ~DICommandImpl<Scaleform::Render::DICommand_SetPixels,Scaleform::Render::DICommand>();
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_SetPixels,Scaleform::Render::DICommand> & operator=(Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_SetPixels,Scaleform::Render::DICommand> &);
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_SetPixels,Scaleform::Render::DICommand> & operator=(const Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_SetPixels,Scaleform::Render::DICommand> &);
};
struct Scaleform::Render::DICommand_SetPixels :
	Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_SetPixels,Scaleform::Render::DICommand>
{
	Scaleform::Render::Rect<long> DestRect; // 0x10
	Scaleform::Render::DIPixelProvider & Provider; // 0x20
	bool * Result; // 0x28
	DICommand_SetPixels(const Scaleform::Render::DICommand_SetPixels &);
	DICommand_SetPixels(Scaleform::Render::DrawableImage *, Scaleform::Render::Rect<long>, Scaleform::Render::DIPixelProvider &, bool *);
	Scaleform::Render::DICommand_SetPixels & operator=(const Scaleform::Render::DICommand_SetPixels &);
	virtual Scaleform::Render::DICommandType GetType();
	virtual unsigned long GetCPUCaps();
	virtual void ExecuteSW(Scaleform::Render::DICommandContext &, Scaleform::Render::ImageData &, Scaleform::Render::ImageData * *);
	virtual ~DICommand_SetPixels();
};
unsigned long Scaleform::Render::DICommand_PixelDissolve::GetCPUCaps(); // 0x14032E350
struct Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Scroll> :
	Scaleform::Render::DICommand_SourceRect
{
	DICommand_SourceRectImpl<Scaleform::Render::DICommand_Scroll>(Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Scroll> &);
	DICommand_SourceRectImpl<Scaleform::Render::DICommand_Scroll>(const Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Scroll> &);
	DICommand_SourceRectImpl<Scaleform::Render::DICommand_Scroll>(Scaleform::Render::DrawableImage *, Scaleform::Render::DrawableImage *, const Scaleform::Render::Rect<long> &, const Scaleform::Render::Point<long> &);
	virtual unsigned long GetSize();
	virtual void ExecuteHW(Scaleform::Render::DICommandContext &);
	void ExecuteHWGetImages(Scaleform::Render::DrawableImage * *, Scaleform::Render::Size<float> *, const Scaleform::Render::Rect<long> &);
	static const unsigned long MaximumDrawableSources; // 0xFFFFFFFFFFFFFFFF
	void ExecuteHWCopyAction(Scaleform::Render::DICommandContext &, Scaleform::Render::Texture * *, const Scaleform::Render::Matrix2x4<float> *);
	bool GetRequireSourceRead();
	virtual ~DICommand_SourceRectImpl<Scaleform::Render::DICommand_Scroll>();
	Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Scroll> & operator=(Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Scroll> &);
	Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Scroll> & operator=(const Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Scroll> &);
};
struct Scaleform::Render::DICommand_Scroll :
	Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Scroll>
{
	long X; // 0x30
	long Y; // 0x34
	DICommand_Scroll(Scaleform::Render::DICommand_Scroll &);
	DICommand_Scroll(const Scaleform::Render::DICommand_Scroll &);
	DICommand_Scroll(Scaleform::Render::DrawableImage *, long, long);
	virtual Scaleform::Render::DICommandType GetType();
	virtual unsigned long GetCPUCaps();
	virtual void ExecuteHWCopyAction(Scaleform::Render::DICommandContext &, Scaleform::Render::Texture * *, const Scaleform::Render::Matrix2x4<float> *);
	virtual bool GetRequireSourceRead();
	virtual void ExecuteSW(Scaleform::Render::DICommandContext &, Scaleform::Render::ImageData &, Scaleform::Render::ImageData * *);
	virtual ~DICommand_Scroll();
	Scaleform::Render::DICommand_Scroll & operator=(Scaleform::Render::DICommand_Scroll &);
	Scaleform::Render::DICommand_Scroll & operator=(const Scaleform::Render::DICommand_Scroll &);
};
Scaleform::Render::DICommandType Scaleform::Render::DICommand_Scroll::GetType(); // 0x14032E3B0
struct Scaleform::Render::DICommand_Threshold :
	Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Threshold>
{
	Scaleform::Render::DrawableImage::OperationType Operation; // 0x30
	unsigned long Threshold; // 0x34
	unsigned long ThresholdColor; // 0x38
	unsigned long Mask; // 0x3C
	bool CopySource; // 0x40
	DICommand_Threshold(Scaleform::Render::DICommand_Threshold &);
	DICommand_Threshold(const Scaleform::Render::DICommand_Threshold &);
	DICommand_Threshold(Scaleform::Render::DrawableImage *, Scaleform::Render::DrawableImage *, const Scaleform::Render::Rect<long> &, const Scaleform::Render::Point<long> &, Scaleform::Render::DrawableImage::OperationType, unsigned long, unsigned long, unsigned long, bool);
	virtual Scaleform::Render::DICommandType GetType();
	virtual unsigned long GetCPUCaps();
	virtual void ExecuteHWCopyAction(Scaleform::Render::DICommandContext &, Scaleform::Render::Texture * *, const Scaleform::Render::Matrix2x4<float> *);
	virtual bool GetRequireSourceRead();
	virtual void ExecuteSW(Scaleform::Render::DICommandContext &, Scaleform::Render::ImageData &, Scaleform::Render::ImageData * *);
	virtual ~DICommand_Threshold();
	Scaleform::Render::DICommand_Threshold & operator=(Scaleform::Render::DICommand_Threshold &);
	Scaleform::Render::DICommand_Threshold & operator=(const Scaleform::Render::DICommand_Threshold &);
};
struct Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Threshold> :
	Scaleform::Render::DICommand_SourceRect
{
	DICommand_SourceRectImpl<Scaleform::Render::DICommand_Threshold>(Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Threshold> &);
	DICommand_SourceRectImpl<Scaleform::Render::DICommand_Threshold>(const Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Threshold> &);
	DICommand_SourceRectImpl<Scaleform::Render::DICommand_Threshold>(Scaleform::Render::DrawableImage *, Scaleform::Render::DrawableImage *, const Scaleform::Render::Rect<long> &, const Scaleform::Render::Point<long> &);
	virtual unsigned long GetSize();
	virtual void ExecuteHW(Scaleform::Render::DICommandContext &);
	void ExecuteHWGetImages(Scaleform::Render::DrawableImage * *, Scaleform::Render::Size<float> *, const Scaleform::Render::Rect<long> &);
	static const unsigned long MaximumDrawableSources; // 0xFFFFFFFFFFFFFFFF
	void ExecuteHWCopyAction(Scaleform::Render::DICommandContext &, Scaleform::Render::Texture * *, const Scaleform::Render::Matrix2x4<float> *);
	bool GetRequireSourceRead();
	virtual ~DICommand_SourceRectImpl<Scaleform::Render::DICommand_Threshold>();
	Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Threshold> & operator=(Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Threshold> &);
	Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Threshold> & operator=(const Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Threshold> &);
};
Scaleform::Render::DICommandType Scaleform::Render::DICommand_Threshold::GetType(); // 0x14032E3D0
bool Scaleform::Render::DICommand_Threshold::GetRequireSourceRead(); // 0x14032E0B0