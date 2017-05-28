#ifndef RESSOURCEMANAGER_H
#define RESSOURCEMANAGER_H

#include "libdmedia.h"
#include "Manager.h"

class RessourceManagerImpl;

class LIBDMEDIA_API RessourceManager : public Manager<RessourceManager>
{
public:
    RessourceManager();
    ~RessourceManager();

    void Start() override;
    void Stop() override;

    bool SetRoot(const char* iPath);
    const char* GetRoot() const;

private:
    RessourceManagerImpl* const d_ptr;
};

#endif // RESSOURCEMANAGER_H
