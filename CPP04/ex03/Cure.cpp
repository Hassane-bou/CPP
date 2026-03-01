#include "Cure.hpp"


Cure::Cure()
{
    std::cout << "Cure Default constructor Called\n";
    type = "cure";
}

AMateria* Cure::clone() const
{
    AMateria *ob = new Cure();
    return ob;
}

void Cure::use(ICharacter& target) const
{
    std::cout << "* heals " << target.getName() << "'s wounds *\n";
}