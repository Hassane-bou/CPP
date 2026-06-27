#include "PmergeMe.hpp"

PmergeMe::PmergeMe() { }

PmergeMe::~PmergeMe() { }

PmergeMe::PmergeMe(const PmergeMe& obj): _v(obj._v), _q(obj._q){}


PmergeMe& PmergeMe::operator=(const PmergeMe& obj)
{
    if(this != &obj)
    {
        _v = obj._v;
        _q =obj._q;
    }
    return *this;
}

int  ParseInput(std::string input)
{
    int i = 0;
    while(input[i])
    {
        if(!(std::isdigit(input[i])))
            return 1;
        i++;
    }
    return 0;

}


