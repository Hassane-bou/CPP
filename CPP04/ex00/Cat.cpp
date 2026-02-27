#include "Cat.hpp"

Cat::Cat():Animal()
{
    std::cout << "Cat Default Constructor Called\n";
    type = "Cat";
}

Cat::Cat(const Cat &obj):Animal(obj)
{
    std::cout << "Cat Copy constructor Called\n";
}

Cat& Cat::operator=(const Cat &obj)
{
    std::cout << "Cat Copy assignement Called\n";
    Animal::operator=(obj);
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor Called\n";
}

void Cat::makeSound() const
{
    std::cout << "MEOAMEAOMEAO!!!!!\n";
}