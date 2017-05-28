#include "RessourceManagerImpl.h"
#include <cstring>

void RessourceManagerImpl::Start()
{
    std::strncpy(&std::get<0>(mRoot), "", mRoot.size());
}

void RessourceManagerImpl::Stop()
{

}

bool RessourceManagerImpl::SetRoot(const char* iPath)
{
    std::strncpy(&std::get<0>(mRoot), iPath, mRoot.size());

    return true;
}

const char* RessourceManagerImpl::GetRoot()
{
    return &mRoot[0];
}
