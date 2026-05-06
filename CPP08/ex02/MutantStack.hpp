#pragma once

#include <iostream>
#include <exception>
#include <stack>
#include <deque>

template<typename T>
class MutantStack:public std::stack<T>
{
    public:
        MutantStack();
        ~MutantStack();
        MutantStack(const MutantStack& obj);
        MutantStack& operator=(const MutantStack& obj);
    
};

#include "MutantStack.tpp"