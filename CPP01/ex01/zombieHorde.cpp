#include "Zombie.hpp"

Zombie* zombieHorde(unsigned int N,std::string name)
{
    Zombie *z;
    z = new Zombie[N];
    for(unsigned int i = 0; i < N; i++)
    {
        z[i].setName(name);
    }
    return z;
}