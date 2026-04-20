#include "ScalarConverter.hpp"


int checkNumber(std::string input)
{
    int i = 0;
    int start = 0;
    if(input[0] == '+' || input[0] == '-')
        start = 1;
    else
        start = 0;
    for(i = start; i < input.length() ; i++)
    {
        if(!isdigit(input[i]))
            return 0;
    }
    return 1;
}
int checkPoint(std::string input)
{
    int flag = 0;
    for(int i = 0;i < input.length() ;i++)
    {
        if(input[i] == '.')
            flag++;
    }
    if(flag != 1)
        return 0;
    return 1;
}

int CheckIntFormat(std::string input)
{
    if(checkNumber(input))
        return 1;
    return 0;
}
int CheckFloatFormat(std::string input)
{
    if(checkPoint(input) && input[input.length() - 1] == 'f')
        return 1;
    return 0;
}

int CheckDoubleFormat(std::string input)
{
    if(checkPoint(input) && input[input.length() - 1] !='f')
        return 1;
    return 0;
}


Type detectType(std::string input)
{
    if(input  == "nan" || input == "-inf" || input == "+inf" 
        || input == "+inff" || input == "-inff")
        return Pseudo;
    else if(input.length() == 1 && !isdigit(input[0]))
        return Char;
    else if(CheckFloatFormat(input))
        return Float;
    else if(CheckDoubleFormat(input))
        return Double;
    else if(CheckIntFormat(input))
        return Int;
    else
        return Invalid;
}


int main(int argc, char *argv[])
{
    if(argc != 2)
        std::cout << "Error: Number of argument you must use just two argument !!" << std::endl ;

    std::string input  = argv[1];

    std::cout << detectType(input) << "\n";

}