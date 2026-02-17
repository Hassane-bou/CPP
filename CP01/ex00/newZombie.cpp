#include "Zombie.hpp"



Zombie *newZombie(std::string name)
{
    Zombie *z;
    z = new Zombie();
    z->SetName(name);
    return z;
}