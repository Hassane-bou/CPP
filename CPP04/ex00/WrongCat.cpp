#include "WrongCat.hpp"


WrongCat::WrongCat()
{
    std::cout << "WrongCat Default constructor Called\n\n";
    type  = "";
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor WrongCat Destructor Called\n";
}
WrongCat::WrongCat(const WrongCat& obj):WrongAnimal(obj)
{
    std::cout << "Copy Constructor WrongCat Called\n";
}

WrongCat& WrongCat::operator=(const WrongCat& obj)
{
    std::cout << "Copy assignment WrongCat Called\n";
    WrongAnimal::operator=(obj);

    return *this;
}
void  WrongCat::makeSound() const
{
    std::cout << "WrongCat MMMMMEEEEEOOOOO\n";
}