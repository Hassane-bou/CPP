#include "RPN.hpp"


RPN::RPN(std::string value)
{
    int start =0;
    int i = 0;
    std::string val;
    int N;
    int right = 0;
    int left = 0;
    char oper;
    int res = 0;
    while(value[i])
    {
        if(std::isdigit(value[i]))
        {
            start = i;
            while(value[i])
            {
                if(!(std::isdigit(value[i])) || value[i] == ' ')
                    break;
                i++;
            }
            val = value.substr(start,i - start);
            N = std::stoi(val);
            tokens.push(N);
            
        }
        else if(value[i] == '+' || value[i] == '-' || value[i] == '/' || value[i] == '*')
        {
            if(tokens.size() < 2)
            {
                std::cerr << "Error." << std::endl;
                return;
            }
            oper = value[i];
            right = tokens.top();
            tokens.pop();
            left = tokens.top();
            tokens.pop();

            if(oper == '+')
            {
                res = left + right;
                tokens.push(res);
            }
            else if(oper == '-')
            {
                res = left - right;
                tokens.push(res);
            }
            else if(oper == '/')
            {
                if(right == 0)
                {
                    std::cerr << "Error: cannot do operation with 0.\n";
                    return ;
                }
                res = left / right;
                tokens.push(res);
            }
            else if(oper == '*')
            {
                res = left * right;
                tokens.push(res);
            }
        }

        i++;
    }

    if(tokens.size() ==  1)
        std::cout << tokens.top() << std::endl;
    else
    {
        std::cerr << "Error " << std::endl;
        return ;
    }
}

RPN::~RPN() { }

int NumberAndOpeartorValide(std::string input)
{
    int i = 0;

    while(input[i])
    {
        if(!std::isdigit(input[i]) && input[i] != ' ' && input[i] != '-' && input[i] != '+' && input[i] != '*' && input[i] != '/' )
            return 0;
       i++;
    }
    return 1;
}

int checkNumber(std::string input)
{
    int i = 0;
    int start = 0;
    while(input[i])
    {
        if(std::isdigit(input[i]))
        {
            start = i;
            while(std::isdigit(input[i]))
                i++;
            std::string num = input.substr(start,i - start);
    
            if(std::atoi(num.c_str()) < 0 || std::atoi(num.c_str()) > 9)
                return 0;
        }
        i++;
    }
    return 1;
}


RPN::RPN(const RPN& obj)
{
    *this = obj;
}

RPN& RPN::operator=(const RPN& obj)
{
    if(this != &obj)
        this->tokens = obj.tokens;
    return *this;
}
