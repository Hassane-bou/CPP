#pragma once

#include <iostream>
#include <exception>
#include <stack>
#include <list>

template<typename T>
class MutantStack:public std::stack<T>
{
    public:
        MutantStack();
        ~MutantStack();
        MutantStack(const MutantStack& obj);
        MutantStack& operator=(const MutantStack& obj);

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin() 
        {
            return this->c.begin();
        }
        iterator end() 
        {
            return this->c.end();
        }
    
};

#include "MutantStack.tpp"