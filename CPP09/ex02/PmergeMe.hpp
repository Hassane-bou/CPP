#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>
#include <cerrno>



class PmergeMe
{
    private:
        std::vector<int> _v;
        std::deque<int> _q;

    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe(const PmergeMe& obj);
        PmergeMe& operator=(const PmergeMe& obj);

};
    std::vector<int> ParseArgs(int argc,char **argv);
    std::deque<int> StoreValuesToDeque(std::vector<int>);
    std::vector<std::pair<int,int>>MakePairs(const std::vector<int> &v, int &hasOdd, int &oddValue);