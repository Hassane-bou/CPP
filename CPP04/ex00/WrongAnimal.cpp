#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Default constructor Called\n\n";
    type  = "";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor WrongAnimal Destructor Called\n";
}
std::string WrongAnimal::getType() const
{
    return type;
}
WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
    std::cout << "Copy Constructor WrongAnimal Called\n";
    *this = obj;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
    std::cout << "Copy assignment WrongAnimal Called\n";
    this->type = obj.type;

    return *this;
}
void  WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal IIIIIIIMMMMMMMMMM WWWWWRRRROOOONNNGGG\n";
}