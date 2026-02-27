#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default constructor\n";
    type = "Agrzam";
}

Animal::Animal(const Animal &obj)
{
    std::cout << "Animal Copy constructor\n";
    *this  = obj;
}

Animal& Animal::operator=(const Animal &obj)
{
    std::cout << "Animal Copy Assignement Called\n";
    this->type = obj.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor Called\n";
}

std::string Animal::getType() const
{
    return type;
}

void  Animal::makeSound() const
{
    std::cout << "HAAAAAAAAAAAAAA!!!\n";
}
