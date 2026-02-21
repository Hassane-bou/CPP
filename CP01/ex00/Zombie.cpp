#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Hi is contructor\n";
}

void Zombie::SetName(std::string input)
{
    name = input;
}

void Zombie::announce()
{
    std::cout << name  << ": BraiiiiiiinnnzzzZ..." << "\n";
 
}