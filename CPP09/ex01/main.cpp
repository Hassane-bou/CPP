#include "RPN.hpp"

int main(int ac,char **av)
{
    if(ac != 2)
    {
        std::cerr << "Error: You can use juste two parameter." << std::endl;
        return 1;
    }
    std::string input = av[1];
    if(!NumberAndOpeartorValide(input))
    {
        std::cerr << "Error\n";
        return 1;
    }
    if(!checkNumber(input))
    {
        std::cerr << "Error: Number most be in Range {0,9}" << std::endl;
        return 1;
    }

    RPN classRPN(av[1]);


    return 0;
}
