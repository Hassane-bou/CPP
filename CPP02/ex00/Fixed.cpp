#include "Fixed.hpp"

Fixed::Fixed()
{
    value = 0;
    std::cout << "Default constructor called\n";
}
int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n";
    return value;
}
void Fixed::setRawBits(int const raw)
{
    value = raw;
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called\n";
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator  called\n";
    getRawBits();
    this->value = other.value;
    return *this;
    
}


Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}
