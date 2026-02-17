#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "i'm constructor" << "\n";
}

Zombie::~Zombie()
{
    std::cout << "i'm deconstructor " << "\n";
}


void Zombie::SetName(std::string input)
{
    name = input;
}

void Zombie::annonce()
{
    std::cout << name << " Zombie is created!!" << "\n";
}
