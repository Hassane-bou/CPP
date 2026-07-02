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

// int  ParseInput(std::string input)
// {
//     int i = 0;
//     while(input[i])
//     {
//         if(!(std::isdigit(input[i])))
//             return 1;
//         i++;
//     }
//     return 0;
// }

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
std::vector<std::pair<int,int> >MakePairs(const std::vector<int> &v,bool &hasOdd, int &OddValue)
{
    std::pair<int,int> p;
    std::vector<std::pair<int,int> > pairs;

    size_t limite;
    if(v.size() % 2 == 0)
        limite = v.size();
    else
        limite = v.size() - 1;
    
    for(size_t i = 0; i < limite;i+=2)
    {
        if(v[i] > v[i + 1])
        {
            p.first = v[i];
            p.second =v[i + 1];    
        }
        else
        {
            p.first = v[i+1];
            p.second = v[i];
        }
            pairs.push_back(p);
    }

    if(v.size() % 2 != 0)
    {
        hasOdd = true;
        OddValue = v[v.size() - 1];
    }
    else
        hasOdd = false;

    return pairs;
}
std::vector <int> BuilDMainChain(std::vector <int> &G,std::vector <int> &P)
{
    std::vector<int> MainChain;

    MainChain.push_back(P[0]);
    for(size_t i = 0; i  < G.size() ; i++)
        MainChain.push_back(G[i]);

    return MainChain;
}


std::vector<int> mergeInsertSort(std::vector<int> &v)
{
    if(v.size() <= 1)
        return v;
    bool hasOdd = false;
    int OddValue = 0;
    std::vector<std::pair<int,int> > pairs = MakePairs(v,hasOdd,OddValue);

    std::vector <int> Grands;
    for(size_t i =0 ; i < pairs.size() ; i++)
        Grands.push_back(pairs[i].first);

    std::vector <int> Petits;
    for(size_t i = 0; i < pairs.size() ;i++)
        Petits.push_back(pairs[i].second);
    
     for(size_t i = 0; i < Grands.size() ; i++)
        std::cout << Grands[i] << " ";


    Grands = mergeInsertSort(Grands);

    std::vector <int> MainChain = BuilDMainChain(Grands,Petits);

   


    return Grands;
}

