#pragma once

class Scaleform::GFx::AS3::Tracer :
	protected Scaleform::GFx::AS3::FlashUI
{
private:
	Tracer(const Scaleform::GFx::AS3::Tracer &);
public:
	Tracer(Scaleform::MemoryHeap *, const Scaleform::GFx::AS3::CallFrame &, Scaleform::GFx::AS3::VMMethodBodyInfo &);
	virtual ~Tracer();
	void EmitCode();
	Scaleform::MemoryHeap * GetHeap();
private:
	Scaleform::GFx::AS3::TR::AbcBlock & GetFirstBlock();
public:
	const Scaleform::GFx::AS3::TR::AbcBlock & GetFirstBlock();
	const unsigned char * GetByteCode();
	unsigned long long GetCurrOffset();
	Scaleform::GFx::AS3::VMAbcFile & GetFile();
	Scaleform::GFx::AS3::TR::Def * GetGlobalObject();
	Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript & GetGlobalObject();
	const Scaleform::GFx::AS3::VMExceptionInfo & GetVMExceptionInfo(unsigned long long);
	const Scaleform::GFx::AS3::VMExceptionTypeInfo & GetVMExceptionTypeInfo(unsigned long long);
	unsigned long long GetVMExceptionTypeInfoInd(unsigned long long);
	Scaleform::GFx::AS3::Abc::MbiInd GetMethodBodyInd();
	Scaleform::GFx::AS3::Abc::MiInd GetMiInd();
	bool NeedToDiscardResult();
	const Scaleform::GFx::AS3::VSBase & GetSavedScope();
	const Scaleform::GFx::AS3::Traits & GetOriginationTraits();
	const Scaleform::GFx::AS3::Abc::File & GetAbcFile();
	Scaleform::GFx::AS3::VM & GetVM();
	Scaleform::GFx::AS3::TR::State & GetState();
	unsigned long long GetPrintOffset();
	Scaleform::GFx::AS3::TR::NodeBuilder & GetNodeBuilder();
	Scaleform::GFx::AS3::TR::NodeBlock * GetStart();
	Scaleform::GFx::AS3::TR::NodeBlock * GetStop();
	Scaleform::GFx::AS3::TR::Def * GetKilled();
	Scaleform::GFx::AS3::TR::Def * GetVoid();
	Scaleform::GFx::AS3::TypeBarrier1 * GetTB1(unsigned long);
	Scaleform::GFx::AS3::TypeBarrier2 * GetTB2(unsigned long);
	const Scaleform::GFx::AS3::TR::TypeSystem & GetTypeSystem();
	Scaleform::GFx::AS3::TR::TypeSystem & GetTypeSystem();
	const Scaleform::GFx::AS3::Traits * GetTraits(Scaleform::GFx::AS3::TR::Def *, const bool);
	const unsigned long long GetCodeSize();
	const Scaleform::GFx::AS3::Abc::MethodBodyInfoHeader & GetMethodBodyInfoHeader();
	unsigned long GetExcNum();
	const unsigned char * GetExcOffset();
	Scaleform::GFx::AS3::TR::AbcBlock * GetBlock(unsigned long long);
	static Scaleform::GFx::AS3::TR::AbcBlock * GetBlock(const Scaleform::List<Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::ListNode<Scaleform::GFx::AS3::TR::AbcBlock> > &, unsigned long long);
private:
	static void SkipOrigOpCode(unsigned long long &, unsigned long long);
	void RegisterOrigOpCode(unsigned long long);
	Scaleform::GFx::AS3::Abc::Code::OpCode GetCurrOrigOpCode(unsigned long long);
	Scaleform::GFx::AS3::Abc::Code::OpCode GetNextOrigOpCode(unsigned long long);
	Scaleform::GFx::AS3::Abc::Code::OpCode GetOrigValueConsumer(unsigned long long);
	Scaleform::GFx::AS3::TR::AbcBlock * UpdateBlock(const unsigned long long);
	Scaleform::GFx::AS3::Tracer & operator=(const Scaleform::GFx::AS3::Tracer &);
	unsigned long long GetNewOpCode();
	bool IsException();
	const Scaleform::GFx::AS3::TR::Type * GetGlobalObjectType();
	static const Scaleform::GFx::AS3::ClassTraits::Traits * GetSlotCTraits(const Scaleform::GFx::AS3::Traits &, Scaleform::GFx::AS3::SlotIndex);
	Scaleform::GFx::AS3::TR::AbcBlock * GetAddAbcBlock(unsigned long long, bool);
	Scaleform::GFx::AS3::CheckResult InitNodeStart();
	void CreateTryCatchBlocks();
	void SetCatchBlocks(Scaleform::GFx::AS3::TR::AbcBlock *);
	Scaleform::GFx::AS3::Abc::Code::OpCode ReadOpCode(unsigned long long &);
	void BuildAbcGraph();
	void SkipDeadBasicBlock(unsigned long long &, Scaleform::GFx::AS3::TR::AbcBlock *);
	Scaleform::GFx::AS3::TR::AbcBlock * BuildAbcGraphJump(unsigned long long &, Scaleform::GFx::AS3::TR::AbcBlock *, const long);
	unsigned long GetRegNum();
	unsigned long GetOpStackNum();
	unsigned long GetScopeStackNum();
public:
	const Scaleform::GFx::AS3::FlashUI & GetUI();
	Scaleform::GFx::AS3::FlashUI & GetUI();
	virtual void Output(Scaleform::GFx::AS3::FlashUI::OutputMessageType, const char *);
	virtual bool OnOpCode(unsigned long long);
private:
	bool Done; // 0x10
	Scaleform::MemoryHeap * Heap; // 0x18
	const Scaleform::GFx::AS3::CallFrame & CF; // 0x20
	Scaleform::GFx::AS3::VMMethodBodyInfo & MBI; // 0x28
	unsigned long long CurrOffset; // 0x30
	Scaleform::StringDataPtr BCode; // 0x38
	const unsigned char * pCode; // 0x48
	unsigned long long PrintOffset; // 0x50
	const unsigned char * ExcOffset; // 0x58
	unsigned long RegNum; // 0x60
	unsigned long OSNum; // 0x64
	unsigned long SSNum; // 0x68
	Scaleform::GFx::AS3::TR::State St; // 0x70
	unsigned long CodeLen; // 0xF0
	unsigned long ExcNum; // 0xF4
	Scaleform::List<Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::ListNode<Scaleform::GFx::AS3::TR::AbcBlock> > Blocks; // 0xF8
	Scaleform::GFx::AS3::Abc::MethodBodyInfoHeader MBIH; // 0x108
	Scaleform::GFx::AS3::Bubble Allocator; // 0x120
	Scaleform::GFx::AS3::TR::TypeSystem TS; // 0x148
	Scaleform::GFx::AS3::TR::NodeBuilder NB; // 0x260
	Scaleform::GFx::AS3::TR::NodeBlock * Start; // 0x278
	Scaleform::GFx::AS3::TR::NodeBlock * Stop; // 0x280
	Scaleform::GFx::AS3::TR::Def * ImplicitArg; // 0x288
	Scaleform::GFx::AS3::TR::Def Killed; // 0x290
	Scaleform::GFx::AS3::TR::Def Void; // 0x2B0
	Scaleform::GFx::AS3::TR::Def GO; // 0x2D0
};
class Scaleform::List<Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::ListNode<Scaleform::GFx::AS3::TR::AbcBlock> >
{
	class ValueType;
private:
	List<Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::ListNode<Scaleform::GFx::AS3::TR::AbcBlock> >(const Scaleform::List<Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::ListNode<Scaleform::GFx::AS3::TR::AbcBlock> > &);
public:
	List<Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::ListNode<Scaleform::GFx::AS3::TR::AbcBlock> >();
	void Clear();
	Scaleform::GFx::AS3::TR::AbcBlock * GetFirst();
	Scaleform::GFx::AS3::TR::AbcBlock * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::GFx::AS3::TR::AbcBlock *);
	bool IsLast(const Scaleform::GFx::AS3::TR::AbcBlock *);
	bool IsNull(const Scaleform::GFx::AS3::TR::AbcBlock *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::GFx::AS3::TR::AbcBlock * GetPrev(const Scaleform::GFx::AS3::TR::AbcBlock *);
	static Scaleform::GFx::AS3::TR::AbcBlock * GetNext(const Scaleform::GFx::AS3::TR::AbcBlock *);
	void PushFront(Scaleform::GFx::AS3::TR::AbcBlock *);
	void PushBack(Scaleform::GFx::AS3::TR::AbcBlock *);
	static void Remove(Scaleform::GFx::AS3::TR::AbcBlock *);
	void BringToFront(Scaleform::GFx::AS3::TR::AbcBlock *);
	void SendToBack(Scaleform::GFx::AS3::TR::AbcBlock *);
	void PushListToFront(Scaleform::List<Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::ListNode<Scaleform::GFx::AS3::TR::AbcBlock> > &);
	void PushListToBack(Scaleform::List<Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::ListNode<Scaleform::GFx::AS3::TR::AbcBlock> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::ListNode<Scaleform::GFx::AS3::TR::AbcBlock> > &, Scaleform::GFx::AS3::TR::AbcBlock *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::ListNode<Scaleform::GFx::AS3::TR::AbcBlock> > &, Scaleform::GFx::AS3::TR::AbcBlock *);
	void PushListItemsToFront(Scaleform::GFx::AS3::TR::AbcBlock *, Scaleform::GFx::AS3::TR::AbcBlock *);
private:
	const Scaleform::List<Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::ListNode<Scaleform::GFx::AS3::TR::AbcBlock> > & operator=(const Scaleform::List<Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::GFx::AS3::TR::AbcBlock,Scaleform::ListNode<Scaleform::GFx::AS3::TR::AbcBlock> > &);
	Scaleform::ListNode<Scaleform::GFx::AS3::TR::AbcBlock> Root; // 0x0
};