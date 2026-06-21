#pragma once

#include <iostream>
#include <vector>
#include <stack>

class RPN
{
    private:
        std::vector <std::string> tokens;
        std::stack <int> Numbers;
        RPN();
    public:
        RPN(std::string value);
        ~RPN();
        RPN(const RPN &obj);
        RPN& operator=(const RPN &obj);

        void CalculeRPN();
};
    int NumberAndOpeartorValide(std::string input);
    

