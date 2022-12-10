#pragma once

#include "agreferencecount.h"

class AgPointer;

template <typename T>
class AgReference
{
public:
	AgReference<T>(const AgPointer<T> &);
	AgReference<T>(const AgReference<T> &);
	AgReference<T>();
	~AgReference<T>();
	AgReference<T> operator=(const AgPointer<T> &);
	AgReference<T> operator=(const AgReference<T> &);
	operator!=(const AgReference<T> &);
	operator!=(T *);
	operator==(const AgReference<T> &);
	operator==(T *);
	AgPointer<T> getPtr();
	void swap(AgReference<T> &);
private:
	AgReferenceCount * m_ref; // 0x8
	T * m_ptr; // 0x10
};