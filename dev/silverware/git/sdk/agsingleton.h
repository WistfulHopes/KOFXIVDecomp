#pragma once

template <typename T>
class AgSingleton
{
protected:
	~AgSingleton<T>();
	long onSingletonInit();
	long onSingletonExit();
public:
	static long createInstance()
    {
        if (ms_instance)
            return 0;
        ms_instance = new AgSingleton<T>;
        return onSingletonInit();
    }
	static long destroyInstance();
	static T & getInstance();
	static long hasInstance();
private:
	static T * createSingleton();
	static void destroySingleton(T *);
	static AgSingleton<T> * ms_instance; // 0xFFFFFFFFFFFFFFFF
public:
	AgSingleton<T>(const AgSingleton<T> &);
	AgSingleton<T>();
	AgSingleton<T> & operator=(const AgSingleton<T> &);
};