#include "Fixed.hpp"

Fixed::Fixed()
{
    value = 0;
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
    *this = other;
}

Fixed& Fixed::operator=(const Fixed &other)
{
    this->value = other.value;
    return *this;
}

Fixed::~Fixed(){}

float Fixed::toFloat(void) const
{
    return (float)value /(1 << bits);
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
    Fixed res;
    res.value = this->value + other.value;
    return(res);
}

Fixed Fixed::operator-(const Fixed& other) const
{
    Fixed res;
    res.value = this->value - other.value;
    return(res); 
}

Fixed Fixed::operator*(const Fixed &other) const
{
    Fixed res;
    res.value = (this->value * other.value) >> bits;
    return(res);
}

Fixed Fixed::operator/(const Fixed &other) const
{
    Fixed res;
    res.value = (this->value << bits) / other.value;
    return(res);
}

Fixed& Fixed::operator++(void)
{
    ++value;
    return(*this);
}

Fixed& Fixed::operator--(void)
{
    --value;
    return(*this);
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    this->value += 1;
    return temp;
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
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