#ifndef MANAGER_H
#define MANAGER_H

#include "Singleton.h"

template<typename ManagerImplT>
class Manager : public Singleton<ManagerImplT> {
public:
    Manager() = default;
    Manager(const Manager& m) = delete;
    Manager(Manager&& m) = delete;
    virtual ~Manager() = default;
    
    virtual void Start();
    virtual void Stop();
};

template<typename ManagerImplT>
void Manager<ManagerImplT>::Start() {}

template<typename ManagerImplT>
void Manager<ManagerImplT>::Stop() {}

#endif // MANAGER_H
