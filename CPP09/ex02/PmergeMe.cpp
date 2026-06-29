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

std::vector<int> ParseArgs(int argc,char **argv)
{
    std::vector<int> res;

    int i;
    for(i = 1; i < argc ;i++)
    {
        if(argv[i][0] == '\0')
        {
            std::cout << "Error: empty string." << std::endl;
            res.clear();
            return res;
        }
        int j = 0;
        while(argv[i][j] )
        {
            if(!isdigit(argv[i][j]))
            {
                std::cout << "Error: Format No Valid." << std::endl;
                res.clear();
                return res;
            }
            j++;
        }
        long number = std::atol(argv[i]);
        if(number > INT_MAX)
        {
            std::cout << "Error: OverFlow problem." << std::endl;
            res.clear();
            return res;
        }
        int NumConverted = static_cast<int> (number);
        res.push_back(NumConverted);
    }

    return res;
}

std::deque<int> StoreValuesToDeque(std::vector<int> &v)
{
    std::deque<int> d;
    std::vector<int>::iterator it;

    for(it = v.begin(); it != v.end(); ++it)
    {
        d.push_back(*it);
    }

    return d;
}

