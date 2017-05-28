#ifndef SINGLETON_H
#define SINGLETON_H

template<typename T>
class Singleton {
public:
    virtual ~Singleton() { delete mInstance; }
    
    static T* getInstance();

protected:
    Singleton() {}

private:
    static T* mInstance;
};

template<typename T>
T* Singleton<T>::mInstance = nullptr;

template<typename T>
T* Singleton<T>::getInstance() {
    if (!mInstance)
        mInstance = new T;

    return mInstance;
}

#endif // SINGLETON_H
