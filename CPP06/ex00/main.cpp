#include "ScalarConverter.hpp"


int checkNumber(std::string input)
{
    if(input.empty())
        return 0;

    int start = 0;

    if(input[0] == '+' || input[0] == '-')
        start = 1;

    if(start == 1 && input.length() == 1)
        return 0;

    for(int i = start; i < input.length() ; i++)
    {
        if(!isdigit(input[i]))
            return 0;
    }
    return 1;
}

int checkValidateChar(std::string input)
{
    int start = 0;
    if(input[0] == '+' || input[0] == '-')
        start = 1;
    for(int i = start; i < input.length(); i++)
    {
        if(!isdigit(input[i]) && input[i] != '.')
        {
            if(input[i] == 'f' && i == input.length() - 1)
                continue;
            return 0;
        }
    }
    return 1;
}

int checkPoint(std::string input,int &f)
{
    int flag = 0;
    f = 0;
    int start = 0;
    if(input[0] == '+' || input[0] == '-')
        start = 1;
    for(int i = start;i < input.length() ;i++)
    {
        if(input[i] == '.')
        {
            if(i == 0 || i == input.length() - 1)
                return 0;
            if(!isdigit(input[i - 1]) || !isdigit(input[i + 1]))
                return 0;
            flag++;
        }
        if(input[i] == 'f')
            f++;
    }
    if(flag != 1)
        return 0;
    return 1;
}

int CheckFloatFormat(std::string input)
{
    int f;
    if(!checkValidateChar(input))
        return 0;
    if(!checkPoint(input,f))
        return 0;
    if(input[input.length() - 1] != 'f' || f != 1)
        return 0;
    if(input.length() < 3)
        return 0;
    return 1;
}

int CheckDoubleFormat(std::string input)
{
    int f = 0;
    if(!checkValidateChar(input))
        return 0;
    if(!checkPoint(input,f))
        return 0;
    if(input[input.length() - 1] =='f' )
        return 0;
    if(input.length() < 3)
        return 0;
    return 1;
}

Type detectType(std::string input)
{
    if(input  == "nan" || input == "nanf" || input == "-inf" || input == "+inf" 
        || input == "+inff" || input == "-inff")
    {
        return Pseudo;
    }
    else if(input.length() == 1 && !isdigit(input[0]))
        return Char;
    else if(CheckFloatFormat(input))
        return Float;
    else if(CheckDoubleFormat(input))
        return Double;
    else if(checkNumber(input))
        return Int;
    else
        return Invalid;
}

std::string PrintType(Type type)
{
    std::string names[]={"Char", "Int", "Float", "Double", "Pseudo", "Invalid"};
    return names[type - 1];
}

int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        std::cout << "Error: Number of argument you must use just two argument !!" << std::endl ;
        return 1;
    }
    std::string input  = argv[1];
    Type t = detectType(input);

    

    std::cout << "Type is:  "<< PrintType(t) << "\n";

}

