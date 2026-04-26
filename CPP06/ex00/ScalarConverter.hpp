#pragma once


#include <iostream>
#include  <string>
#include <cstdlib>
#include <iomanip>


enum Type {Char = 1, Int = 2, Float = 3, Double = 4, Pseudo = 5, Invalid = 6};

struct ConvertTypes
{
    int val;
    char toChar;
    float toFloat;
    double toDouble;
    bool overflow;
};

class ScalarConverter{
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &other);
        ScalarConverter& operator=(const ScalarConverter& other);
        ~ScalarConverter();
    public:
        static void convert(std::string input);
};

