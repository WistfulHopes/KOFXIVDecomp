#pragma once

class Scaleform::GFx::Task :
	Scaleform::RefCountBase<Scaleform::GFx::Task,2>
{
	enum TaskType
	{
		Type_Computation = 65536,
		Type_IO = 131072,
		Type_Mask = 16711680,
	};
	enum TaskId
	{
		Id_Unknown = 65537,
		Id_MovieDecoding = 65538,
		Id_MovieDataLoad = 131073,
		Id_MovieImageLoad = 131074,
		Id_MovieBind = 131075,
	};
	enum TaskState
	{
		State_Idle = 0,
		State_Pending = 1,
		State_Running = 2,
		State_Abandoned = 3,
		State_Finished = 4,
	};
protected:
	Scaleform::GFx::Task::TaskId ThisTaskId; // 0x10
	volatile Scaleform::GFx::Task::TaskState CurrentState; // 0x14
public:
	Task(const Scaleform::GFx::Task &);
	Task(Scaleform::GFx::Task::TaskId);
	virtual ~Task();
	Scaleform::GFx::Task::TaskId GetTaskId();
	Scaleform::GFx::Task::TaskType GetTaskType();
	Scaleform::GFx::Task::TaskState GetTaskState();
	void Execute();
	void OnAbandon(bool);
	Scaleform::GFx::Task & operator=(const Scaleform::GFx::Task &);
	void __dflt_ctor_closure();
};
class Scaleform::RefCountBase<Scaleform::GFx::Task,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::GFx::Task,2>(Scaleform::RefCountBase<Scaleform::GFx::Task,2> &);
	RefCountBase<Scaleform::GFx::Task,2>(const Scaleform::RefCountBase<Scaleform::GFx::Task,2> &);
	RefCountBase<Scaleform::GFx::Task,2>();
	virtual ~RefCountBase<Scaleform::GFx::Task,2>();
	Scaleform::RefCountBase<Scaleform::GFx::Task,2> & operator=(Scaleform::RefCountBase<Scaleform::GFx::Task,2> &);
	Scaleform::RefCountBase<Scaleform::GFx::Task,2> & operator=(const Scaleform::RefCountBase<Scaleform::GFx::Task,2> &);
};
class Scaleform::GFx::TaskManager :
	Scaleform::GFx::State
{
public:
	TaskManager(const Scaleform::GFx::TaskManager &);
	TaskManager();
	virtual ~TaskManager();
	bool AddTask(Scaleform::GFx::Task *);
	bool AbandonTask(Scaleform::GFx::Task *);
	void RequestShutdown();
	Scaleform::GFx::TaskManager & operator=(const Scaleform::GFx::TaskManager &);
};
class Scaleform::GFx::ThreadedTaskManager :
	Scaleform::GFx::TaskManager
{
public:
	ThreadedTaskManager(const Scaleform::GFx::ThreadedTaskManager &);
	ThreadedTaskManager(unsigned long long);
	virtual ~ThreadedTaskManager();
	bool AddWorkerThreads(unsigned long, unsigned long, unsigned long long, long);
	virtual bool AddTask(Scaleform::GFx::Task *);
	virtual bool AbandonTask(Scaleform::GFx::Task *);
	virtual void RequestShutdown();
private:
	Scaleform::GFx::ThreadedTaskManagerImpl * pImpl; // 0x18
	unsigned long long ThreadStackSize; // 0x20
public:
	Scaleform::GFx::ThreadedTaskManager & operator=(const Scaleform::GFx::ThreadedTaskManager &);
	void __dflt_ctor_closure();
};