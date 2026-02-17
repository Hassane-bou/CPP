#include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout << name << " is destroyed" << std::endl;
}

int main()
{
    Zombie *z = newZombie("test");
    z->announce();
    delete(z);
    randomChump("Fii");
    
    return 0;
}