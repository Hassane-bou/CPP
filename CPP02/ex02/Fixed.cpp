#include "Fixed.hpp"

Fixed::Fixed()
{
    value = 0;
    std::cout << "Default constrctor called\n";
}

Fixed::Fixed(const int number)
{
    value = number << bits;
}
Fixed::Fixed(const float number)
{
    value = roundf(number * (1 << bits));
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor Called\n";
    *this = other;
}

Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignement Called\n";
    this->value = other.value;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor Called\n";
}

float Fixed::toFloat(void) const
{
    return roundf(value /(1 << bits));
}
int Fixed::toInt(void) const
{
    return value >> bits;
}

bool Fixed::operator>(const Fixed& ex) const
{
    return (this->value > ex.value);
}

bool Fixed::operator<(const Fixed& ex) const
{
    return (this->value < ex.value);
}

bool Fixed::operator>=(const Fixed& ex) const 
{
    return (this->value >= ex.value);
}

bool Fixed::operator<=(const Fixed& ex) const
{
    return (this->value <= ex.value);
}

bool Fixed::operator!=(const Fixed& ex) const
{
    return (this->value != ex.value);
}

Fixed Fixed::operator+(const Fixed& other) const
{
    return(this->value + other.value);
}

Fixed Fixed::operator-(const Fixed& other) const
{
    return(this->value - other.value);
}

Fixed Fixed::operator*(const Fixed &other) const
{
    return(this->value * other.value);
}

Fixed Fixed::operator/(const Fixed &other) const
{
    return(this->value / other.value);
}

Fixed Fixed::operator++(void)
{
    return(this->value += 1);
}

Fixed Fixed::operator--(void)
{
    return(this->value -= 1);
}

Fixed& Fixed::operator++(int)
{
    Fixed& temp = *this;
    this->value += 1;
    return temp;
}

Fixed& Fixed::operator--(int)
{
    Fixed& temp = *this;
    this->value -= 1;
    return temp;
}

Fixed& Fixed::min(Fixed &a,Fixed &b)
{
    if(a.value  < b.value)
        return a;
    return b;
}
const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if(a.value < b.value)
        return a;
    return b;
}
const Fixed& Fixed::max(const Fixed &a,const Fixed &b)
{
    if(a.value > b.value)
        return a;
    return b;
}

Fixed& Fixed::max(Fixed &a,Fixed &b)
{
    if(a.value > b.value)
        return a;
    return b;
}
std::ostream& operator<<(std::ostream &out,const Fixed& obj)
{
    out << obj.toFloat(); 
    return(out);
}