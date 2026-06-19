#include "RPN.hpp"

int main(int ac,char **av)
{
    if(ac != 2)
    {
        std::cout << "Error: oYou can use juste two parameter." << std::endl;
        return 1;
    }

    std::vector <std::string> tokens;

    std::string parm = av[1];

    // std::cout << av[1] << std::endl;
    int start =0;
    int i = 0;
    while(parm[i])
    {
        if(parm[i] == ' ')
            i++;
        if(std::isdigit(parm[i]))
        {
            start = i;
            tokens.push_back(parm.substr(0,start));
        }
       i++;
    }

    for(size_t i = 0; i < tokens.size();i++)
    {
        std::cout <<  tokens[i] << " ";
    }

    std::cout << std::endl;
    
    return 0;
}
