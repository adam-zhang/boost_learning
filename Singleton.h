#ifndef __SINGLETON__H
#define __SINGLETON__H
template<typename T>
class Singleton
{
public:
	Singleton() {}
	~Singleton() {}
private:
	static T* instance_;
public:
	T& instance()
	{
		if (!instance_)
		{
			instance_ = new T;
		}
		return *T;
	}
};

template<typename T>
T* Singleton<T>::instance_ = 0;
#endif
