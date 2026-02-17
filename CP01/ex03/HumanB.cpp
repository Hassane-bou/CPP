#include "HumanB.hpp"

void HumanB::setWeapon(Weapon& newWeapon)
{
    weapon = &newWeapon;
}
void HumanB::attack()
{
    if(weapon != NULL)
        std::cout << name << "attacks with their" << weapon->getType() << "\n"; 
    else
        std::cout << name << " has no weapon\n";
}