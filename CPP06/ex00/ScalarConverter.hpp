#pragma once


#include <iostream>
#include  <string>


enum Type {Char = 1, Int = 2, Float = 3, Double = 4, Pseudo = 5, Invalid = 6};

class ScalarConverter{
    public:
        virtual void convert(std::string input);
};