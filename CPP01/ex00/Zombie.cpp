#include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout << "Zombie is Destroyed!!\n";
}


void ::Zombie::setName(std::string text)
{
    name = text;
}

void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << "\n";
}