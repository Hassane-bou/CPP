#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
    // std::cout << "Ice default constructor Called\n";
}

Ice::~Ice()
{
    // std::cout << "Ice Deconstructor Called\n";
}

AMateria* Ice::clone() const
{
    AMateria *ob = new Ice();
    return ob;
}
void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
