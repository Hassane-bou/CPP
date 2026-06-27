#pragma once

#include <iostream>
#include <vector>
#include <deque>



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
    int ParseInput(std::string input); 