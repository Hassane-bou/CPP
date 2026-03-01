#include "Ice.hpp"

Ice::Ice()
{
    std::cout << "Ice default constructor Called\n";
    type = "ice";
}

AMateria* Ice::clone() const
{
    AMateria *ob = new Ice();
    return ob;
}
void Ice::use(ICharacter& target) const
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
