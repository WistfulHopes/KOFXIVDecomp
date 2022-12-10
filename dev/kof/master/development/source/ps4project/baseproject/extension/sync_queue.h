#pragma once

class extension::ExSimpleLockable<extension::SynchronizedQueue<extension::ExThread::Runnable> > :
	protected extension::lockable_detail::SimpleLockableBase
{
public:
	ExSimpleLockable<extension::SynchronizedQueue<extension::ExThread::Runnable> >();
private:
	ExSimpleLockable<extension::SynchronizedQueue<extension::ExThread::Runnable> >(const extension::ExSimpleLockable<extension::SynchronizedQueue<extension::ExThread::Runnable> > &);
	extension::ExSimpleLockable<extension::SynchronizedQueue<extension::ExThread::Runnable> > & operator=(const extension::ExSimpleLockable<extension::SynchronizedQueue<extension::ExThread::Runnable> > &);
	class ScopedLock_t;
protected:
	~ExSimpleLockable<extension::SynchronizedQueue<extension::ExThread::Runnable> >();
};
class std::deque<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >,std::allocator<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > :
	std::_Deque_alloc<std::_Deque_base_types<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >,std::allocator<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct _Alpty;
	typedef std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > * _Mapptr;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > pointer;
	typedef const std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > const_pointer;
	typedef std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > reference;
	typedef const std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	enum <unnamed-enum-_EEN_DS>
	{
		_EEN_DS = 2,
	};
public:
	deque<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >,std::allocator<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > >(std::initializer_list<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > >, const std::allocator<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > &);
	deque<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >,std::allocator<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > >(std::deque<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >,std::allocator<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > &, const std::allocator<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > &);
	deque<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >,std::allocator<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > >(std::deque<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >,std::allocator<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > &);
	deque<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >,std::allocator<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > >(const std::deque<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >,std::allocator<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > &, const std::allocator<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > &);
	deque<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >,std::allocator<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > >(const std::deque<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >,std::allocator<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > &);
	deque<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >,std::allocator<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > >(unsigned long long, const std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > &, const std::allocator<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > &);
	deque<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >,std::allocator<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > >(unsigned long long, const std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > &);
	deque<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >,std::allocator<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > >(unsigned long long);
	deque<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >,std::allocator<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > >(const std::allocator<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > &);
	deque<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >,std::allocator<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > >();
	void _Construct_n(unsigned long long, const std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > &);
	std::deque<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >,std::allocator<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > & operator=(const std::deque<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >,std::allocator<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > &);
	std::deque<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >,std::allocator<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > & operator=(std::initializer_list<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > >);
	std::deque<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >,std::allocator<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > & operator=(std::deque<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >,std::allocator<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > &);
	void _Assign_rv(std::deque<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >,std::allocator<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > &);
	void _Assign_rv(std::deque<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >,std::allocator<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::deque<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >,std::allocator<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > &, std::integral_constant<bool,1>);
	void push_front(const std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > &);
	void push_front(std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > &);
	void push_back(const std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > &);
	void push_back(std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > &);
	std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > > insert(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > >, unsigned long long, const std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > &);
	std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > > insert(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > >, const std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > &);
	std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > > insert(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > >, std::initializer_list<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > >);
	std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > > insert(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > >, std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > &);
	void assign(unsigned long long, const std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > &);
	void assign(std::initializer_list<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > >);
	~deque<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >,std::allocator<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > >();
	std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > > begin();
	std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > > begin();
	std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > > end();
	std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > > end();
	std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > > _Make_iter(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > >);
	std::reverse_iterator<std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > > > rbegin();
	std::reverse_iterator<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > > > rbegin();
	std::reverse_iterator<std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > > > rend();
	std::reverse_iterator<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > > > rend();
	std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > > cbegin();
	std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > > cend();
	std::reverse_iterator<std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > > > crbegin();
	std::reverse_iterator<std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > get_allocator();
	std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > & at(unsigned long long);
	const std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > & at(unsigned long long);
	std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > & operator[](unsigned long long);
	const std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > & operator[](unsigned long long);
	const std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > & front();
	std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > & front();
	const std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > & back();
	std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > & back();
	void pop_front();
	void pop_back();
	std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > > erase(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > >, std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > >);
	std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > > erase(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > >);
	void clear();
	void swap(std::deque<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> >,std::allocator<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > &);
protected:
	void _Insert_n(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > > > >, unsigned long long, const std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > &);
	void _Xlen();
	void _Xran();
	void _Growmap(unsigned long long);
	void _Tidy();
};
extension::SynchronizedQueue<extension::ExThread::Runnable>::SynchronizedQueue<extension::ExThread::Runnable>(); // 0x140246A00
extension::SynchronizedQueue<extension::ExThread::Runnable>::~SynchronizedQueue<extension::ExThread::Runnable>(); // 0x140246970
void extension::SynchronizedQueue<extension::ExThread::Runnable>::enqueue(std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > obj); // 0x1402468D0
std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > extension::SynchronizedQueue<extension::ExThread::Runnable>::dequeue(); // 0x140246710