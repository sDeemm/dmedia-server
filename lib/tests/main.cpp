#include "RessourceManager.h"
#include <iostream>

int main(int argc, const char** argv)
{
    RessourceManager* m = RessourceManager::getInstance();

    m->Start();
    m->SetRoot("/home/deemm/Desktop");
    m->Stop();
    
    return 0;
}
