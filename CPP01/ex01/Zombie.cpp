#include "Zombie.hpp"

void Zombie::setName(std::string text)
{
    name = text;
}

void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << "\n";
}