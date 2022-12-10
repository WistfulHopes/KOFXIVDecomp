
Scaleform::GFx::AS3::ASVM::ASVM(Scaleform::GFx::AS3::MovieRoot * pmr, Scaleform::GFx::AS3::FlashUI & _ui, Scaleform::GFx::AS3::StringManager & sm, Scaleform::GFx::AS3::ASRefCountCollector & gc); // 0x14044D930
bool Scaleform::GFx::AS3::ASVM::_constructInstance(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> & pobj, Scaleform::GFx::AS3::Object * classObj, unsigned long argc, Scaleform::GFx::AS3::Value * argv); // 0x1404B3F30
Scaleform::GFx::MovieDefImpl * Scaleform::GFx::AS3::ASVM::GetResourceMovieDef(Scaleform::GFx::AS3::Instances::fl::Object * instance); // 0x140489690
Scaleform::GFx::AS3::MovieDefRootNode::~MovieDefRootNode(); // 0x140454AB0
Scaleform::GFx::AS3::MovieRoot::MovieRoot(Scaleform::GFx::AS3::MemoryContextImpl * memContext, Scaleform::GFx::MovieImpl * pmovie, Scaleform::GFx::ASSupport * pas); // 0x14044F4F0
Scaleform::GFx::AS3::MovieRoot::~MovieRoot(); // 0x140454BB0
void Scaleform::GFx::AS3::MovieRoot::Shutdown(); // 0x1404AD0E0
bool Scaleform::GFx::AS3::MovieRoot::Init(Scaleform::GFx::MovieDefImpl * pmovieDef); // 0x14048D470
bool Scaleform::GFx::AS3::MovieRoot::CheckAvm(); // 0x1404649F0
bool Scaleform::GFx::AS3::MovieRoot::ExecuteAbc(Scaleform::GFx::AS3::AbcDataBuffer * pabc, Scaleform::GFx::DisplayObjContainer * m); // 0x140476050
class Scaleform::AutoPtr<Scaleform::GFx::AS3::Abc::Reader>
{
public:
	AutoPtr<Scaleform::GFx::AS3::Abc::Reader>(const Scaleform::AutoPtr<Scaleform::GFx::AS3::Abc::Reader> &);
	AutoPtr<Scaleform::GFx::AS3::Abc::Reader>(Scaleform::GFx::AS3::Abc::Reader *, bool);
	AutoPtr<Scaleform::GFx::AS3::Abc::Reader>(Scaleform::GFx::AS3::Abc::Reader *);
	~AutoPtr<Scaleform::GFx::AS3::Abc::Reader>();
	Scaleform::AutoPtr<Scaleform::GFx::AS3::Abc::Reader> & operator=(Scaleform::GFx::AS3::Abc::Reader *);
	Scaleform::AutoPtr<Scaleform::GFx::AS3::Abc::Reader> & operator=(const Scaleform::AutoPtr<Scaleform::GFx::AS3::Abc::Reader> &);
	Scaleform::GFx::AS3::Abc::Reader & operator*();
	Scaleform::GFx::AS3::Abc::Reader * operator->();
	Scaleform::GFx::AS3::Abc::Reader * GetPtr();
	bool operator bool();
	Scaleform::GFx::AS3::Abc::Reader * Release();
	void Reset(Scaleform::GFx::AS3::Abc::Reader *, bool);
private:
	Scaleform::GFx::AS3::Abc::Reader * pObject; // 0x0
	bool Owner; // 0x8
	Scaleform::GFx::AS3::Abc::Reader * constRelease();
public:
	void __dflt_ctor_closure();
};
void Scaleform::GFx::AS3::MovieRoot::Output(Scaleform::GFx::AS3::FlashUI::OutputMessageType type, const char * msg); // 0x140499590
void Scaleform::GFx::AS3::MovieRoot::NotifyOnResize(); // 0x140494B90
void Scaleform::GFx::AS3::MovieRoot::GenerateMouseEvents(unsigned long mouseIndex); // 0x140481220
void Scaleform::GFx::AS3::MovieRoot::DoActions(); // 0x140471DE0
void Scaleform::GFx::AS3::MovieRoot::ExecuteActionQueue(Scaleform::GFx::AS3::MovieRoot::ActionLevel lvl); // 0x140476330
void Scaleform::GFx::AS3::MovieRoot::RequeueActionQueue(Scaleform::GFx::AS3::MovieRoot::ActionLevel srclvl, Scaleform::GFx::AS3::MovieRoot::ActionLevel dstlvl); // 0x1404A26D0
void Scaleform::GFx::AS3::MovieRoot::RemoveActionQueueEntriesFor(Scaleform::GFx::AS3::MovieRoot::ActionLevel lvl, Scaleform::GFx::DisplayObject * dobj); // 0x1404A1820
void Scaleform::GFx::AS3::MovieRoot::ExecuteActionQueues(); // 0x1404763C0
void Scaleform::GFx::AS3::MovieRoot::QueueFrameActions(); // 0x14049FD00
void Scaleform::GFx::AS3::MovieRoot::ChangeMouseCursorType(unsigned long mouseIdx, unsigned long newCursorType); // 0x140464840
bool Scaleform::GFx::AS3::MovieRoot::NotifyOnFocusChange(Scaleform::GFx::InteractiveObject * curFocused, Scaleform::GFx::InteractiveObject * toBeFocused, unsigned long controllerIdx, Scaleform::GFx::FocusMovedType fmt, Scaleform::GFx::ProcessFocusKeyInfo * pfocusKeyInfo); // 0x140494B20
void Scaleform::GFx::AS3::MovieRoot::NotifyGamePadAnalogEvent(const Scaleform::GFx::EventId * id); // 0x140494A40
void Scaleform::GFx::AS3::MovieRoot::NotifyQueueSetFocus(Scaleform::GFx::InteractiveObject * ch, unsigned long controllerIdx, Scaleform::GFx::FocusMovedType fmt); // 0x140494BB0
Scaleform::GFx::AS3::AvmStage * Scaleform::GFx::AS3::MovieRoot::CreateStage(Scaleform::GFx::MovieDefImpl * pdefImpl); // 0x14046B4C0
void Scaleform::GFx::AS3::MovieRoot::AdvanceFrame(bool nextFrame); // 0x140460460
void Scaleform::GFx::AS3::MovieRoot::ClearDisplayList(); // 0x140465AE0
Scaleform::GFx::AS3::MovieDefRootNode * Scaleform::GFx::AS3::MovieRoot::CreateMovieDefRootNode(Scaleform::MemoryHeap * pheap, Scaleform::GFx::MovieDefImpl * pdefImpl, bool importFlag); // 0x14046AEE0
void Scaleform::GFx::AS3::MovieRoot::ForceCollect(unsigned long gcFlags); // 0x140480C80
void Scaleform::GFx::AS3::MovieRoot::ForceEmergencyCollect(); // 0x140480CE0
void Scaleform::GFx::AS3::MovieRoot::SuspendGC(bool suspend); // 0x1404AEDF0
void Scaleform::GFx::AS3::MovieRoot::ScheduleGC(unsigned long gcFlags); // 0x1404A5920
void Scaleform::GFx::AS3::MovieRoot::OnKeyDown(Scaleform::GFx::InteractiveObject * pmovie, const Scaleform::GFx::EventId & evt, long keyMask); // 0x140496A20
void Scaleform::GFx::AS3::MovieRoot::OnMovieFocus(bool set); // 0x140497400
void Scaleform::GFx::AS3::MovieRoot::OnNextFrame(); // 0x140497420
void Scaleform::GFx::AS3::MovieRoot::SetExternalInterfaceRetVal(const Scaleform::GFx::Value & retVal); // 0x1404A8310
bool Scaleform::GFx::AS3::MovieRoot::ExtractPathAndName(const char * fullPath, Scaleform::GFx::ASString * ppath, Scaleform::GFx::ASString * pname); // 0x14047CB70
void Scaleform::GFx::AS3::MovieRoot::ResolveStickyVariables(Scaleform::GFx::InteractiveObject * pch); // 0x1404A4C90
class Scaleform::GFx::AS3::PathTokenizer
{
private:
	Scaleform::StringDataPtr Path; // 0x0
	Scaleform::StringDataPtr Token; // 0x10
public:
	PathTokenizer(const char *);
	bool HasToken();
	const Scaleform::StringDataPtr & NextToken();
};
bool Scaleform::GFx::AS3::MovieRoot::GetASVariableAtPath(Scaleform::GFx::AS3::Value * pval, const char * ppathToVar); // 0x140482660
bool Scaleform::GFx::AS3::MovieRoot::GetVariable(Scaleform::GFx::Value * pval, const char * ppathToVar); // 0x14048C290
bool Scaleform::GFx::AS3::MovieRoot::SetVariable(const char * ppathToVar, const Scaleform::GFx::Value & value, Scaleform::GFx::Movie::SetVarType setType); // 0x1404AAF10
unsigned long Scaleform::GFx::AS3::MovieRoot::GetVariableArraySize(const char * ppathToVar); // 0x14048CA00
bool Scaleform::GFx::AS3::MovieRoot::GetVariableArray(Scaleform::GFx::Movie::SetArrayType type, const char * ppathToVar, unsigned long index, void * pdata, unsigned long count); // 0x14048C3A0
bool Scaleform::GFx::AS3::MovieRoot::SetVariableArraySize(const char * ppathToVar, unsigned long count, Scaleform::GFx::Movie::SetVarType setType); // 0x1404ABD10
bool Scaleform::GFx::AS3::MovieRoot::SetVariableArray(Scaleform::GFx::Movie::SetArrayType type, const char * ppathToVar, unsigned long index, const void * pdata, unsigned long count, Scaleform::GFx::Movie::SetVarType setType); // 0x1404AB390
bool Scaleform::GFx::AS3::MovieRoot::IsAvailable(const char * ppathToVar); // 0x14048F750
bool Scaleform::GFx::AS3::MovieRoot::Invoke(const char * pmethodName, Scaleform::GFx::Value * presult, const Scaleform::GFx::Value * pargs, unsigned long numArgs); // 0x14048E890
enum Scaleform::GFx::AS3::MovieRoot::Invoke::__l2::<unnamed-enum-NumValuesOnStack>
{
	NumValuesOnStack = 10,
};
bool Scaleform::GFx::AS3::MovieRoot::Invoke(const char * pmethodName, Scaleform::GFx::Value * presult, const char * pargFmt, ...); // 0x14048E860
void Scaleform::GFx::AS3::MovieRoot::ParseValueArguments(Scaleform::Array<Scaleform::GFx::AS3::Value,2,Scaleform::ArrayDefaultPolicy> & arr, const char * pmethodName, const char * pargFmt, char * args); // 0x140499960
bool Scaleform::GFx::AS3::MovieRoot::InvokeArgs(const char * pmethodName, Scaleform::GFx::Value * presult, const char * pargFmt, char * args); // 0x14048F310
Scaleform::GFx::AS3::MovieRoot::ActionEntry * Scaleform::GFx::AS3::MovieRoot::ActionQueueType::GetNewEntry(); // 0x140487320
Scaleform::GFx::AS3::MovieRoot::ActionEntry * Scaleform::GFx::AS3::MovieRoot::ActionQueueType::InsertEntry(Scaleform::GFx::AS3::MovieRoot::ActionLevel lvl); // 0x14048E560
void Scaleform::GFx::AS3::MovieRoot::ActionQueueType::AddToFreeList(Scaleform::GFx::AS3::MovieRoot::ActionEntry * pentry); // 0x14045FD50
void Scaleform::GFx::AS3::MovieRoot::ActionQueueType::Clear(); // 0x1404658F0
const Scaleform::GFx::AS3::MovieRoot::ActionEntry * Scaleform::GFx::AS3::MovieRoot::ActionQueueIterator::getNext(); // 0x1404C11F0
void Scaleform::GFx::AS3::MovieRoot::ActionEntry::Execute(Scaleform::GFx::AS3::MovieRoot * proot); // 0x140475DE0
void Scaleform::GFx::AS3::MovieRoot::AddInvokeAlias(const Scaleform::GFx::ASString & alias, const Scaleform::GFx::AS3::Value & closure); // 0x14045DC50
Scaleform::GFx::AS3::Value * Scaleform::GFx::AS3::MovieRoot::ResolveInvokeAlias(const char * pstr); // 0x1404A4B90
void Scaleform::GFx::AS3::MovieRoot::AddScriptableMovieClip(Scaleform::GFx::DisplayObjContainer * pspr); // 0x14045E5D0
void Scaleform::GFx::AS3::MovieRoot::AddToExtensionContexts(Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext * pExtensionContext); // 0x14045FC60
void Scaleform::GFx::AS3::MovieRoot::RemoveFromExtensionContexts(Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext * pExtensionContext); // 0x1404A1F30
unsigned long long Scaleform::GFx::AS3::MovieRoot::FindExtensionContexts(const Scaleform::GFx::ASString & extensionID, const Scaleform::GFx::ASString & contextType); // 0x14047D190
void Scaleform::GFx::AS3::MovieRoot::NotifyStatusEvent(const Scaleform::GFx::EventId * id); // 0x140494BC0
void Scaleform::GFx::AS3::MovieRoot::NotifyAccelerometerEvent(const Scaleform::GFx::EventId * id, long evtIdAcc); // 0x1404948B0
void Scaleform::GFx::AS3::MovieRoot::AddToAccelerometers(Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer * pAccelerometer); // 0x14045F990
void Scaleform::GFx::AS3::MovieRoot::RemoveFromAccelerometers(Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer * pAccelerometer); // 0x1404A1DD0
void Scaleform::GFx::AS3::MovieRoot::NotifyGeolocationEvent(const Scaleform::GFx::EventId * id, long evtIdGeo); // 0x140494A60
void Scaleform::GFx::AS3::MovieRoot::BroadcastGeolocationStatusEvent(const Scaleform::GFx::EventId * id); // 0x140461550
void Scaleform::GFx::AS3::MovieRoot::AddToGeolocations(Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation * pGeolocation); // 0x14045FE70
void Scaleform::GFx::AS3::MovieRoot::RemoveFromGeolocations(Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation * pGeolocation); // 0x1404A1F80
void Scaleform::GFx::AS3::EventChains::AddToChain(Scaleform::GFx::EventId::IdCode evtId, Scaleform::GFx::DisplayObject * obj); // 0x14045FA80
void Scaleform::GFx::AS3::EventChains::RemoveFromChain(Scaleform::GFx::EventId::IdCode evtId, Scaleform::GFx::DisplayObject * obj); // 0x1404A1E20
void Scaleform::GFx::AS3::EventChains::Dispatch(Scaleform::GFx::EventId::IdCode evtId); // 0x140471C10
void Scaleform::GFx::AS3::EventChains::QueueEvents(Scaleform::GFx::EventId::IdCode evtId); // 0x14049FA10
unsigned long long Scaleform::GFx::AS3::EventChains::FindObjectIndexInChain(Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy> * chain, Scaleform::GFx::DisplayObject * obj); // 0x14047E390
Scaleform::GFx::AS3::LoadQueueEntry::LoadQueueEntry(Scaleform::GFx::AS3::Instances::fl_net::URLRequest * request, Scaleform::GFx::AS3::Instances::fl_display::Loader * loader, Scaleform::GFx::LoadQueueEntry::LoadMethod method, bool quietOpen); // 0x14044F190
Scaleform::GFx::AS3::LoadQueueEntry::LoadQueueEntry(Scaleform::GFx::AS3::Instances::fl_utils::ByteArray * bytes, Scaleform::GFx::AS3::Instances::fl_display::Loader * loader, Scaleform::GFx::LoadQueueEntry::LoadMethod method); // 0x14044F020
Scaleform::GFx::AS3::LoadQueueEntry::LoadQueueEntry(Scaleform::GFx::AS3::Instances::fl_net::URLRequest * request, Scaleform::GFx::AS3::Instances::fl_net::URLLoader * loader, Scaleform::GFx::LoadQueueEntry::LoadMethod method, bool quietOpen); // 0x14044F2D0
Scaleform::GFx::AS3::LoadQueueEntry::~LoadQueueEntry(); // 0x1404549A0
Scaleform::GFx::AS3::LoadQueueEntryMT_LoadMovie::LoadQueueEntryMT_LoadMovie(Scaleform::GFx::AS3::LoadQueueEntry * pqueueEntry, Scaleform::GFx::MovieImpl * pmovieRoot); // 0x14044F3F0
bool Scaleform::GFx::AS3::LoadQueueEntryMT_LoadMovie::LoadFinished(); // 0x140490B30
class Scaleform::Ptr<Scaleform::GFx::AS3::AvmBitmap>
{
protected:
	Scaleform::GFx::AS3::AvmBitmap * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::AS3::AvmBitmap>(const Scaleform::Ptr<Scaleform::GFx::AS3::AvmBitmap> &);
	Ptr<Scaleform::GFx::AS3::AvmBitmap>(Scaleform::GFx::AS3::AvmBitmap *);
	Ptr<Scaleform::GFx::AS3::AvmBitmap>(Scaleform::Ptr<Scaleform::GFx::AS3::AvmBitmap> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::AS3::AvmBitmap>(Scaleform::Pickable<Scaleform::GFx::AS3::AvmBitmap>);
	Ptr<Scaleform::GFx::AS3::AvmBitmap>(Scaleform::GFx::AS3::AvmBitmap &);
	Ptr<Scaleform::GFx::AS3::AvmBitmap>();
	~Ptr<Scaleform::GFx::AS3::AvmBitmap>();
	bool operator==(Scaleform::GFx::AS3::AvmBitmap *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::AS3::AvmBitmap> &);
	bool operator!=(Scaleform::GFx::AS3::AvmBitmap *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::AS3::AvmBitmap> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::AS3::AvmBitmap> &);
	Scaleform::Ptr<Scaleform::GFx::AS3::AvmBitmap> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::AvmBitmap>);
	const Scaleform::Ptr<Scaleform::GFx::AS3::AvmBitmap> & operator=(Scaleform::GFx::AS3::AvmBitmap &);
	const Scaleform::Ptr<Scaleform::GFx::AS3::AvmBitmap> & operator=(Scaleform::GFx::AS3::AvmBitmap *);
	const Scaleform::Ptr<Scaleform::GFx::AS3::AvmBitmap> & operator=(const Scaleform::Ptr<Scaleform::GFx::AS3::AvmBitmap> &);
	Scaleform::Ptr<Scaleform::GFx::AS3::AvmBitmap> & SetPtr(Scaleform::Pickable<Scaleform::GFx::AS3::AvmBitmap>);
	Scaleform::Ptr<Scaleform::GFx::AS3::AvmBitmap> & SetPtr(Scaleform::GFx::AS3::AvmBitmap &);
	Scaleform::Ptr<Scaleform::GFx::AS3::AvmBitmap> & SetPtr(Scaleform::GFx::AS3::AvmBitmap *);
	Scaleform::Ptr<Scaleform::GFx::AS3::AvmBitmap> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::AS3::AvmBitmap> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::AS3::AvmBitmap * & GetRawRef();
	Scaleform::GFx::AS3::AvmBitmap * GetPtr();
	Scaleform::GFx::AS3::AvmBitmap & operator*();
	Scaleform::GFx::AS3::AvmBitmap * operator->();
	Scaleform::GFx::AS3::AvmBitmap * operator class Scaleform::GFx::AS3::AvmBitmap *();
	Scaleform::Ptr<Scaleform::GFx::AS3::AvmBitmap> & Pick(Scaleform::GFx::AS3::AvmBitmap *);
	Scaleform::Ptr<Scaleform::GFx::AS3::AvmBitmap> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::AvmBitmap>);
	Scaleform::Ptr<Scaleform::GFx::AS3::AvmBitmap> & Pick(Scaleform::Ptr<Scaleform::GFx::AS3::AvmBitmap> &);
};
bool Scaleform::GFx::AS3::LoadQueueEntryMT_LoadMovie::IsPreloadingFinished(); // 0x140490270
void Scaleform::GFx::AS3::MovieRoot::AddLoadQueueEntryMT(Scaleform::GFx::AS3::LoadQueueEntry * pentry); // 0x14045DDE0
void Scaleform::GFx::AS3::MovieRoot::AddNewLoadQueueEntry(Scaleform::GFx::AS3::Instances::fl_net::URLRequest * urlRequest, Scaleform::GFx::AS3::Instances::fl_display::Loader * loader, Scaleform::GFx::LoadQueueEntry::LoadMethod method); // 0x14045E300
void Scaleform::GFx::AS3::MovieRoot::AddNewLoadQueueEntry(Scaleform::GFx::AS3::Instances::fl_utils::ByteArray * bytes, Scaleform::GFx::AS3::Instances::fl_display::Loader * loader, Scaleform::GFx::LoadQueueEntry::LoadMethod method); // 0x14045E280
void Scaleform::GFx::AS3::MovieRoot::AddNewLoadQueueEntry(Scaleform::GFx::AS3::Instances::fl_net::URLRequest * urlRequest, Scaleform::GFx::AS3::Instances::fl_net::URLLoader * loader, Scaleform::GFx::LoadQueueEntry::LoadMethod method); // 0x14045E480
Scaleform::Render::Text::Allocator * Scaleform::GFx::AS3::MovieRoot::GetTextAllocator(); // 0x14048B350
void Scaleform::GFx::AS3::MovieRoot::ProcessLoadQueueEntry(Scaleform::GFx::LoadQueueEntry * pentry, Scaleform::GFx::LoadStates * pls); // 0x14049BD60
void Scaleform::GFx::AS3::MovieRoot::ProcessLoadVarsMT(Scaleform::GFx::LoadQueueEntry * pentry, Scaleform::GFx::LoadStates * __formal, const Scaleform::String & data, unsigned long long fileLen, bool succeeded); // 0x14049CE20
void Scaleform::GFx::AS3::MovieRoot::ProcessLoadBinaryMT(Scaleform::GFx::LoadQueueEntry * pentry, Scaleform::GFx::LoadStates * __formal, const Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> & data, unsigned long long fileLen, bool succeeded); // 0x14049BCB0
bool Scaleform::GFx::AS3::MovieRoot::CancelMovieLoading(Scaleform::GFx::AS3::Instances::fl_display::Loader * ploader); // 0x1404647E0
void Scaleform::GFx::AS3::MovieRoot::UnloadMovie(Scaleform::GFx::AS3::Instances::fl_display::Loader * ploader, bool stop, bool gc); // 0x1404B0540
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::DisplayObject>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::DisplayObject>(Scaleform::Pickable<Scaleform::GFx::DisplayObject>);
	SPtr<Scaleform::GFx::DisplayObject>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::DisplayObject> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::DisplayObject>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::DisplayObject> &);
	SPtr<Scaleform::GFx::DisplayObject>(Scaleform::GFx::DisplayObject *);
	~SPtr<Scaleform::GFx::DisplayObject>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::DisplayObject> & operator=(Scaleform::Pickable<Scaleform::GFx::DisplayObject>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::DisplayObject> & operator=(Scaleform::GFx::DisplayObject *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::DisplayObject> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::DisplayObject> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::DisplayObject> & Pick(Scaleform::GFx::DisplayObject *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::DisplayObject> & Pick(Scaleform::Pickable<Scaleform::GFx::DisplayObject>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::DisplayObject> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::DisplayObject> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::DisplayObject> & SetPtr(Scaleform::GFx::DisplayObject *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::DisplayObject> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::DisplayObject> &);
	Scaleform::GFx::DisplayObject * operator->();
	Scaleform::GFx::DisplayObject & operator*();
	Scaleform::GFx::DisplayObject * & GetRawRef();
	Scaleform::GFx::DisplayObject * * GetRawPtr();
	Scaleform::GFx::DisplayObject * GetPtr();
	Scaleform::GFx::DisplayObject * operator class Scaleform::GFx::DisplayObject *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::DisplayObject * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
struct Scaleform::GFx::AS3::MovieRoot::UnloadMovie::__l42::TextFormatVisitor :
	Scaleform::Render::Text::Allocator::TextFormatVisitor
{
	Scaleform::GFx::MovieDefImpl * pDefImpl; // 0x8
	TextFormatVisitor(Scaleform::GFx::AS3::MovieRoot::UnloadMovie::__l42::TextFormatVisitor &);
	TextFormatVisitor(const Scaleform::GFx::AS3::MovieRoot::UnloadMovie::__l42::TextFormatVisitor &);
	TextFormatVisitor(Scaleform::GFx::MovieDefImpl *);
	virtual bool Visit(const Scaleform::Render::Text::TextFormat &);
	virtual ~TextFormatVisitor();
	Scaleform::GFx::AS3::MovieRoot::UnloadMovie::__l42::TextFormatVisitor & operator=(Scaleform::GFx::AS3::MovieRoot::UnloadMovie::__l42::TextFormatVisitor &);
	Scaleform::GFx::AS3::MovieRoot::UnloadMovie::__l42::TextFormatVisitor & operator=(const Scaleform::GFx::AS3::MovieRoot::UnloadMovie::__l42::TextFormatVisitor &);
};
void Scaleform::GFx::AS3::MovieRoot::OnMovieDefRelease(Scaleform::GFx::MovieDefImpl * defImpl); // 0x1404973E0
void Scaleform::GFx::AS3::MovieRoot::AddLoadedMovieDef(Scaleform::GFx::MovieDefImpl * defImpl); // 0x14045DF10
bool Scaleform::GFx::AS3::MovieRoot::RemoveLoadedMovieDef(Scaleform::GFx::MovieDefImpl * defImpl); // 0x1404A1FD0
Scaleform::GFx::DisplayObjContainer * Scaleform::GFx::AS3::MovieRoot::GetRootMovie(Scaleform::GFx::DisplayObject * dobj); // 0x1404897A0
bool Scaleform::GFx::AS3::MovieRoot::FindLibrarySymbolInAllABCs(const Scaleform::GFx::AS3::Instances::fl_display::DisplayObject * dobj, Scaleform::GFx::CharacterCreateInfo * pccinfo); // 0x14047DFB0
void Scaleform::GFx::AS3::MovieRoot::SetMouseCursorType(const Scaleform::GFx::ASString & cursor, unsigned long mouseIndex); // 0x1404A8AE0
void Scaleform::GFx::AS3::MovieRoot::GetMouseCursorTypeString(Scaleform::GFx::ASString & result, unsigned long cursorType); // 0x140487170
void Scaleform::GFx::AS3::MovieRoot::GetMouseCursorType(Scaleform::GFx::ASString & result, unsigned long mouseIndex); // 0x140487130
Scaleform::AmpMovieObjectDesc * Scaleform::GFx::AS3::MovieRoot::GetDisplayObjectsTree(Scaleform::MemoryHeap * heap); // 0x140485A70
bool Scaleform::GFx::AS3::MemoryContextImpl::HeapLimit::OnExceedLimit(Scaleform::MemoryHeap * heap, unsigned long long overLimit); // 0x140496160
void Scaleform::GFx::AS3::MemoryContextImpl::HeapLimit::OnFreeSegment(Scaleform::MemoryHeap * heap, unsigned long long freeingSize); // 0x140496920
void Scaleform::GFx::AS3::MemoryContextImpl::HeapLimit::Collect(Scaleform::MemoryHeap * heap); // 0x1404670E0