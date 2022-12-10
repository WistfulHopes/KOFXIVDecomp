#pragma once

class AgHashTable<AgFactory::IAllocator *>::_iterator<AgFactory::IAllocator * &,AgFactory::IAllocator * *>
{
private:
	const AgHashTable<AgFactory::IAllocator *> * m_hash; // 0x0
	long m_idx; // 0x8
	class iterator;
public:
	_iterator<AgFactory::IAllocator * &,AgFactory::IAllocator * *>(const AgHashTable<AgFactory::IAllocator *>::_iterator<AgFactory::IAllocator * &,AgFactory::IAllocator * *> &);
	_iterator<AgFactory::IAllocator * &,AgFactory::IAllocator * *>(const AgHashTable<AgFactory::IAllocator *> *, long);
	_iterator<AgFactory::IAllocator * &,AgFactory::IAllocator * *>(const AgHashTable<AgFactory::IAllocator *> *);
	long index();
	long valid();
	void incr();
	void decr();
	AgHash key();
	AgFactory::IAllocator * * ptr();
	AgFactory::IAllocator * * ptr();
	AgFactory::IAllocator * & value();
	AgFactory::IAllocator * & value();
	AgHashTable<AgFactory::IAllocator *>::_iterator<AgFactory::IAllocator * &,AgFactory::IAllocator * *> next();
	AgHashTable<AgFactory::IAllocator *>::_iterator<AgFactory::IAllocator * &,AgFactory::IAllocator * *> prev();
	AgHashTable<AgFactory::IAllocator *>::_iterator<AgFactory::IAllocator * &,AgFactory::IAllocator * *> & assign(const AgHashTable<AgFactory::IAllocator *>::_iterator<AgFactory::IAllocator * &,AgFactory::IAllocator * *> &);
	void assign_through(AgFactory::IAllocator * &);
	bool compare(const AgHashTable<AgFactory::IAllocator *>::_iterator<AgFactory::IAllocator * &,AgFactory::IAllocator * *> &);
	AgHashTable<AgFactory::IAllocator *>::_iterator<AgFactory::IAllocator * &,AgFactory::IAllocator * *> & operator=(const AgHashTable<AgFactory::IAllocator *>::_iterator<AgFactory::IAllocator * &,AgFactory::IAllocator * *> &);
	AgFactory::IAllocator * & operator=(AgFactory::IAllocator * &);
	AgFactory::IAllocator * & operator*();
	AgFactory::IAllocator * & operator*();
	AgFactory::IAllocator * * operator->();
	bool operator==(const AgHashTable<AgFactory::IAllocator *>::_iterator<AgFactory::IAllocator * &,AgFactory::IAllocator * *> &);
	bool operator!=(const AgHashTable<AgFactory::IAllocator *>::_iterator<AgFactory::IAllocator * &,AgFactory::IAllocator * *> &);
	const AgHashTable<AgFactory::IAllocator *>::_iterator<AgFactory::IAllocator * &,AgFactory::IAllocator * *> operator++(long);
	const AgHashTable<AgFactory::IAllocator *>::_iterator<AgFactory::IAllocator * &,AgFactory::IAllocator * *> & operator++();
	AgHashTable<AgFactory::IAllocator *>::_iterator<AgFactory::IAllocator * &,AgFactory::IAllocator * *> operator++(long);
	AgHashTable<AgFactory::IAllocator *>::_iterator<AgFactory::IAllocator * &,AgFactory::IAllocator * *> & operator++();
	const AgHashTable<AgFactory::IAllocator *>::_iterator<AgFactory::IAllocator * &,AgFactory::IAllocator * *> operator--(long);
	const AgHashTable<AgFactory::IAllocator *>::_iterator<AgFactory::IAllocator * &,AgFactory::IAllocator * *> & operator--();
	AgHashTable<AgFactory::IAllocator *>::_iterator<AgFactory::IAllocator * &,AgFactory::IAllocator * *> operator--(long);
	AgHashTable<AgFactory::IAllocator *>::_iterator<AgFactory::IAllocator * &,AgFactory::IAllocator * *> & operator--();
};