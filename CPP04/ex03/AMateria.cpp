#include "AMateria.hpp"

AMateria::AMateria()
{
    // std::cout << "AMateria Default constructor Called\n";
    type="";
}
AMateria::AMateria(std::string const &text)
{
    // std::cout << "AMateria Constructor parametre Called\n";
    type = text;
}

std::string const &AMateria::getType() const
{
    return type;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}

AMateria::~AMateria()
{
    // std::cout << "AMateria Deconstructor Called\n";
}
