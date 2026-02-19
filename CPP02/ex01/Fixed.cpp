#include "Fixed.hpp"

Fixed::Fixed()
{
    value  = 0;
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int N)
{
    std::cout << "Int constructor called\n";
    value = N << bits;
}

Fixed::Fixed(const float number)
{
    std::cout << "Float constructor called\n";
    value =  roundf(number *(1 << bits));
    
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called\n";
    *this = other;
    
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called\n";
    this->value = other.value;
    return *this;
}
Fixed::~Fixed()
{
    std::cout << "Destructor Called\n";
}
float Fixed::toFloat(void)const
{
    return (float)value / (1 << bits);
}

int  Fixed::toInt(void) const{
    return value >> bits;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return out;
}
