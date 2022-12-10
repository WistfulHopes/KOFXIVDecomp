#pragma once

#include "aghash.h"
#include "memory/agallocators.h"

template <typename T>
class AgHashTable
{
	class _iterator
	{
	private:
		const AgHashTable<T> * m_hash; // 0x0
		long m_idx; // 0x8
		class iterator;
	public:
		_iterator<T &,T *>(const AgHashTable<T>::_iterator<T &,T *> &);
		_iterator<T &,T *>(const AgHashTable<T> *, long);
		_iterator<T &,T *>(const AgHashTable<T> *);
		long index();
		long valid();
		void incr();
		void decr();
		AgHash key();
		T * ptr();
		T * ptr();
		T & value();
		T & value();
		AgHashTable<T>::_iterator<T &,T *> next();
		AgHashTable<T>::_iterator<T &,T *> prev();
		AgHashTable<T>::_iterator<T &,T *> & assign(const AgHashTable<T>::_iterator<T &,T *> &);
		void assign_through(T &);
		bool compare(const AgHashTable<T>::_iterator<T &,T *> &);
		AgHashTable<T>::_iterator<T &,T *> & operator=(const AgHashTable<T>::_iterator<T &,T *> &);
		T & operator=(T &);
		T & operator*();
		T & operator*();
		T * operator->();
		bool operator==(const AgHashTable<T>::_iterator<T &,T *> &);
		bool operator!=(const AgHashTable<T>::_iterator<T &,T *> &);
		const AgHashTable<T>::_iterator<T &,T *> operator++(long);
		const AgHashTable<T>::_iterator<T &,T *> & operator++();
		AgHashTable<T>::_iterator<T &,T *> operator++(long);
		AgHashTable<T>::_iterator<T &,T *> & operator++();
		const AgHashTable<T>::_iterator<T &,T *> operator--(long);
		const AgHashTable<T>::_iterator<T &,T *> & operator--();
		AgHashTable<T>::_iterator<T &,T *> operator--(long);
		AgHashTable<T>::_iterator<T &,T *> & operator--();
	};
private:
	AgHash * m_keys; // 0x0
	T * m_values; // 0x8
	unsigned long * m_occupancy; // 0x10
	unsigned long * m_history; // 0x18
	unsigned long m_mask; // 0x20
	unsigned long m_used; // 0x24
	AgAllocatorTypes m_alloc; // 0x28
	long _slotIsOccupied(unsigned long);
	static long _slotIsOccupied(const unsigned long *, unsigned long);
	static unsigned long _occupancyArraySize(unsigned long);
	void _slotSetOccupied(unsigned long);
	void _slotSetUnoccupied(unsigned long);
	long _slotGetFirstOccupied();
	long _slotGetNextOccupied(long);
	long _getSlot(AgHash);
	long _find(AgHash);
	static const long m_minSize; // 0xFFFFFFFFFFFFFFFF
public:
	AgHashTable<T>();
	~AgHashTable<T>();
	unsigned long capacity();
	unsigned long size();
	void reserve(unsigned long);
	void clear();
	void free();
	class iterator;
	typedef const AgHashTable<T>::_iterator<T &,T *> const_iterator;
	const AgHashTable<T>::_iterator<T &,T *> begin();
	AgHashTable<T>::_iterator<T &,T *> begin();
	const AgHashTable<T>::_iterator<T &,T *> end();
	AgHashTable<T>::_iterator<T &,T *> end();
	AgHashTable<T>::_iterator<T &,T *> find(AgHash);
	long exists(AgHash);
	void remove(AgHashTable<T>::_iterator<T &,T *> &);
	std::pair<AgHashTable<T>::_iterator<T &,T *>,bool> insert(AgHash, T &);
	AgHashTable<T>::_iterator<T &,T *> operator[](AgHash);
};