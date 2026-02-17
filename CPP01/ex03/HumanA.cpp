#include "HumanA.hpp"


HumanA::HumanA(const std::string &input,Weapon &obj)
    :name(input),weapon(obj)
{
}

void HumanA::attack()
{
    std::cout << name << " attacks with their "  << weapon.getType() << "\n";
}

