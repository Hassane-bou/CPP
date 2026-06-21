#include "RPN.hpp"


RPN::RPN(std::string value)
{
    int start =0;
    int i = 0;
    std::string N;
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
            N = value.substr(start,i - start);
            tokens.push_back(N);
        }
        else if(value[i] == '+' || value[i] == '-' || value[i] == '/' || value[i] == '*')
        {
            int index = i;
            N = value.substr(index,1);
            tokens.push_back(N);
        }
        i++;
    }

    // for(size_t i = 0; i < tokens.size();i++)
    // {
    //     std::cout <<  tokens[i] << std::endl;
    // }
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

void RPN::CalculeRPN()
{
    int num = 0;
    int right = 0;
    int left = 0;
    char oper;
    int res = 0;
    for(size_t i = 0; i < tokens.size() ;i++)
    {
        if((tokens[i] != "-" && tokens[i] != "+" && tokens[i] != "*" && tokens[i] !="/"))
        {
            num = std::stoi(tokens[i]);
            Numbers.push(num);
        }
        else
        {
            if(Numbers.size() < 2)
            {
                std::cerr << "Errorhh" << std::endl;
                return ;
            }
            oper = tokens[i][0];
            right = Numbers.top();
            Numbers.pop();
            left = Numbers.top();
            Numbers.pop();

            if(oper == '+')
            {
                res = left + right;
                Numbers.push(res);
            }
            else if(oper == '-')
            {
                res = left - right;
                Numbers.push(res);
            }
            else if(oper == '/')
            {
                if(right == 0)
                {
                    std::cerr << "Error: cannot do operation with 0.\n";
                    return ;
                }
                res = left / right;
                Numbers.push(res);
            }
            else if(oper == '*')
            {
                res = left * right;
                Numbers.push(res);
            }

        }
    }
    if(Numbers.size() ==  1)
        std::cout << Numbers.top() << std::endl;
    else
    {
        std::cerr << "Error " << std::endl;
        return ;
    }
}

