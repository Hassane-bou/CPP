#include "RPN.hpp"

int main(int ac,char **av)
{
    if(ac != 2)
    {
        std::cerr << "Error: oYou can use juste two parameter." << std::endl;
        return 1;
    }
    if(!NumberAndOpeartorValide(av[1]))
    {
        std::cerr << "Error\n";
        return 1;
    }

    RPN classRPN(av[1]);

    classRPN.CalculeRPN();

    return 0;
}
