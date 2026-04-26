#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &obj)
{
    (void)obj;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &obj) 
{
    (void)obj;
    return *this;
}

int checkNumber(std::string input)
{
    if(input.empty())
        return 0;

    int start = 0;

    if(input[0] == '+' || input[0] == '-')
        start = 1;

    if(start == 1 && input.length() == 1)
        return 0;

    for(int i = start; i < (int)input.length() ; i++)
    {
        if(!std::isdigit(input[i]))
            return 0;
    }
    return 1;
}

int checkValidateChar(std::string input)
{
    int start = 0;
    if(input[0] == '+' || input[0] == '-')
        start = 1;
    for(int i = start; i < (int)input.length(); i++)
    {
        if(!std::isdigit(input[i]) && input[i] != '.')
        {
            if(input[i] == 'f' && i == (int)input.length() - 1)
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
    for(int i = start;i < (int)input.length() ;i++)
    {
        if(input[i] == '.')
        {
            if(i == 0 || i == (int)input.length() - 1)
                return 0;
            if(!std::isdigit(input[i - 1]) || !std::isdigit(input[i + 1]))
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
    else if(input.length() == 1 && !std::isdigit(input[0]) && std::isprint(input[0]))
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

std::string ReadType(Type type)
{
    std::string names[]={"Char", "Int", "Float", "Double", "Pseudo", "Invalid"};
    return names[type - 1];
}
ConvertTypes ReadTypes(std::string input,std::string res)
{
    ConvertTypes StTypes;

    StTypes.overflow = false;
    if(res == "Char")
    {
        StTypes.toChar = input[0];
        StTypes.val = static_cast<int>(StTypes.toChar);
        StTypes.toFloat = static_cast<float>(StTypes.toChar);
        StTypes.toDouble = static_cast<double>(StTypes.toChar);
    }
    else if(res == "Int")
    {
        try{
            StTypes.val = std::stoi(input);
            StTypes.toChar = static_cast<char>(StTypes.val);
            StTypes.toFloat = static_cast<float>(StTypes.val);
            StTypes.toDouble = static_cast<double>(StTypes.val);    
        }
        catch(std::out_of_range &e)
        {
            StTypes.overflow = true;
        }
    }
    else if(res == "Float")
    {
        StTypes.toFloat = std::stof(input);
        StTypes.val =static_cast<int>(StTypes.toFloat);
        StTypes.toChar = static_cast<char>(StTypes.toFloat);
        StTypes.toDouble = static_cast<double>(StTypes.toFloat); 
    }
    else if(res == "Double")
    {
       StTypes.toDouble = std::stod(input);
       StTypes.val = static_cast<int>(StTypes.toDouble);
       StTypes.toChar = static_cast<char>(StTypes.toDouble);
       StTypes.toFloat = static_cast<float>(StTypes.toDouble);
    }
    else if(res == "Pseudo")
    {
        StTypes.val = 0;
        StTypes.toChar = 0;
        StTypes.toFloat = std::stof(input);
        StTypes.toDouble = std::stod(input);
    }
    return StTypes;
}

void PrintData(ConvertTypes C, std::string type,std::string input)
{
    if(type == "Pseudo" || C.overflow || C.val < 0  || C.val > 127)
        std::cout << "char  : impossible " << std::endl;
    else if( C.val <= 32||  C.val > 126)
        std::cout << "char  : Non displayable " << std::endl;
    else
        std::cout << "char  : '" << C.toChar  << "'" << std::endl;

    if(type == "Pseudo" || C.overflow)
        std::cout << "int   : impossible " << std::endl;
    else
        std::cout << "int   : " << C.val << std::endl;

    if(C.overflow)
        std::cout << "float : " << std::fixed << std::setprecision(1) << std::stof(input) << "f" << std::endl;
    else if(type =="Pseudo")
        std::cout << "float : " << C.toFloat << "f" << std::endl;
    else if(C.toFloat == (int)C.toFloat)
        std::cout << "float : " << std::fixed << std::setprecision(1) << C.toFloat << "f" << std::endl;
    else
        std::cout << "float : " << C.toFloat << "f" << std::endl;

    if(C.overflow)
        std::cout << "double: " << std::fixed << std::setprecision(1) << std::stod(input) << std::endl;
    else if(type == "Pseudo")
        std::cout << "double: " << C.toDouble << std::endl;
    else if(C.toDouble == (int)C.toDouble)
        std::cout << "double: " << std::fixed << std::setprecision(1) << C.toDouble << std::endl;
    else
        std::cout << "double: " << C.toDouble <<  std::endl;

}

void ScalarConverter::convert(std::string input)
{
    Type t = detectType(input);

    std::string res = ReadType(t);
    if(res == "Invalid")
    {
        std:: cout << "Input incorrect!";
        return;    
    }
    ConvertTypes St = ReadTypes(input,res);

    PrintData(St,res,input);

}

