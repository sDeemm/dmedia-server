#include "RessourceManager.h"
#include "RessourceManagerImpl.h"

RessourceManager::RessourceManager() : d_ptr(new RessourceManagerImpl)
{

}
RessourceManager::~RessourceManager()
{
    delete d_ptr;
}

void RessourceManager::Start()
{
    d_ptr->Start();
}

void RessourceManager::Stop()
{
    d_ptr->Stop();
}

bool RessourceManager::SetRoot(const char* iPath)
{
    return d_ptr->SetRoot(iPath);
}

const char* RessourceManager::GetRoot() const
{
    return d_ptr->GetRoot();
}
