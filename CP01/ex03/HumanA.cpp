#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon& w)
    : weapon(w), name(n) {}

void HumanA::attack()
{
    std::cout << name << " attacks with their "  <<  weapon.getType() << "\n";
}