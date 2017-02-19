#ifndef RESSOURCEMANAGER_H
#define RESSOURCEMANAGER_H

#include "libdmedia.h"

class LIBDMEDIA_API RessourceManager
{
public:
    RessourceManager() {}
    ~RessourceManager() {}

    void start();
    void stop();
};

#endif // RESSOURCEMANAGER_H
