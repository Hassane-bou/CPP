#include "Zombie.hpp"


int main()
{
    Zombie * z = newZombie("Fii");
    z->announce();
    delete(z);
    randomChump("Fii");
}