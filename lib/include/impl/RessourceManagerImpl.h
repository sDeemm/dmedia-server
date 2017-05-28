#ifndef RESSOURCEMANAGERIMPL_H
#define RESSOURCEMANAGERIMPL_H

#include <array>

class RessourceManagerImpl {
public:
    void Start();
    void Stop();
    bool SetRoot(const char* iPath);
    const char* GetRoot();

private:
    std::array<char, 260> mRoot;
};

#endif // RESSOURCEMANAGERIMPL_H
