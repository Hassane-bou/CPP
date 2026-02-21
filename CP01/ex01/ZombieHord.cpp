#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *z;
    z = new Zombie[N];
    for(int i = 0;i < N ;i++)
    {
        // std::stringstream ss;
        // ss << i;
        // std::string index  = ss.str();
        // std::string zombiename = name + index;
        z[i].SetName(name);
    }
    return z;
}