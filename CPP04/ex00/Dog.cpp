#include "Dog.hpp"


Dog::Dog():Animal()
{
    std::cout << "Dog Default Constructor Called\n";
    type = "Dog";
}

Dog::Dog(const Dog &obj):Animal(obj)
{
    std::cout << "Dog Copy constructor Called\n";
}

Dog& Dog::operator=(const Dog &obj)
{
    std::cout << "Dog Copy assignement Called\n";
    Animal::operator=(obj);
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor Called\n";
}

void Dog::makeSound() const
{
    std::cout << "HOWHOWHOWHOW!!!!!\n";
}