#include "Cure.hpp"

Cure::Cure():AMateria("cure")
{
    // std::cout << "Cure Default constructor Called\n";
}

Cure::~Cure()
{
    // std::cout << "Cure Deconstructor Called\n";
}

AMateria* Cure::clone() const
{
    AMateria *ob = new Cure();
    return ob;
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *\n";
}