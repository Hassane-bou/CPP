#include "Weapon.hpp"

Weapon::Weapon(std::string text)
    :type(text)
{
}

void Weapon::setType(std::string newtype)
{
    type = newtype;
}

const std::string& Weapon::getType()
{
    return type;    
}