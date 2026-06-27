#include "PmergeMe.hpp"


int main(int ac,char **av)
{
    if(ac == 1)
    {
        std::cout << "Error." << std::endl;
        return 1;
    }
    int i = 1;
    while(av[i])
    {
        if(ParseInput(av[i]) == 1)
        {

            std::cout << "Error." << std::endl;
            return 1;
        }
        i++;
    }
    PmergeMe Pme;

    return 0;

}