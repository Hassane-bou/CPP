#include "Zombie.hpp"


int main()
{
    Zombie *z;
    z = zombieHorde(5, "Fii");
    for(int i = 0;i <  5; i++)
    {
        z[i].announce();
    }
    delete [] z;
    return 0;
}