#include "HumanB.hpp"

HumanB::HumanB(std::string text) : name(text) {}


void HumanB::setWeapon(Weapon &weapon)
{
    weaponPoint = &weapon;
}


void HumanB::attack()
{
    if(weaponPoint != NULL)
        std::cout << name << " attacks with their "  << weaponPoint->getType() << "\n";
    else
        std::cout << "sorry: No Weapon for attack " << "\n";

}
