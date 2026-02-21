#include "Zombie.hpp"

void ll()
{
    system("leaks ZombieHord");
}

int main()
{
    atexit(ll);
    Zombie *z;
    z = zombieHorde(5,"Alice");
    for(int i = 0; i < 5;i++)
    {
        z->annonce();
    }
    // delete[] z;
}