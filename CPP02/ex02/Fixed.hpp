#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>


class Fixed{
    private:
        int value;
        static const int bits = 8;

    public:
        Fixed();
        Fixed(const int number);
        Fixed(const float number);
        Fixed(const Fixed &other);
        Fixed& operator=(const Fixed& other);
        ~Fixed();
        float toFloat(void) const;
        int toInt(void) const;
        
        bool operator>(const Fixed& ex) const;
        bool operator<(const Fixed& ex) const;
        bool operator>=(const Fixed& ex) const;
        bool operator<=(const Fixed& ex) const;
        bool operator==(const Fixed& ex) const;
        bool operator!=(const Fixed& ex) const;
        Fixed operator+(const Fixed& ex) const;
        Fixed operator-(const Fixed& ex)const;
        Fixed operator*(const Fixed& ex) const;
        Fixed operator/(const Fixed& ex) const;
        Fixed &operator++(void);
        Fixed &operator--(void);
        Fixed operator++(int);
        Fixed operator--(int);
        static  Fixed& min(Fixed &a,Fixed&b);
        static const Fixed& min(const Fixed &a,const Fixed &b);
        static const Fixed& max(const Fixed &a,const Fixed &b);
        static  Fixed& max(Fixed &a, Fixed &b);

};
    std::ostream& operator<<(std::ostream &out,const Fixed& obj);

#endif