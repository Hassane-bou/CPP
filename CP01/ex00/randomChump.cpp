#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie z;
    z.SetName(name);
    z.announce();
}