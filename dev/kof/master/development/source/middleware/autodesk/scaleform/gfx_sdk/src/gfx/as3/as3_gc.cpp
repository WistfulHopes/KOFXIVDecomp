
Scaleform::GFx::AS3::ASRefCountCollector::ASRefCountCollector(); // 0x14044D840
void Scaleform::GFx::AS3::ASRefCountCollector::SetParams(unsigned long frameBetweenCollections, unsigned long maxRootCount, unsigned long runsToUpgradeGen, unsigned long runsToCollectYoung, unsigned long runsToCollectOld); // 0x1404A8D60
void Scaleform::GFx::AS3::ASRefCountCollector::AdvanceFrame(unsigned long * movieFrameCnt, unsigned long * movieLastCollectFrame, Scaleform::AmpStats * ampStats); // 0x1404600A0
void Scaleform::GFx::AS3::ASRefCountCollector::ForceCollect(Scaleform::AmpStats * ampStats, unsigned long collectFlags); // 0x140480B10
void Scaleform::GFx::AS3::ForEachChild_GC_Internal(Scaleform::GFx::AS3::RefCountCollector<328> * prcc, const Scaleform::GFx::AS3::Value & v, void(*op)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *)); // 0x140480850
void Scaleform::GFx::AS3::ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> * prcc, const Scaleform::ArrayDH<Scaleform::GFx::AS3::Value,2,Scaleform::ArrayDefaultPolicy> & v, void(*op)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *)); // 0x14047FBD0
void Scaleform::GFx::AS3::ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> * prcc, const Scaleform::GFx::AS3::VSBase & v, void(*op)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *)); // 0x14047FC80
Scaleform::GFx::AS3::GASRefCountBase::~GASRefCountBase(); // 0x140454790