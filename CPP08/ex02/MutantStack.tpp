#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack() {}

template<typename T>
MutantStack<T>::~MutantStack() {}


template<typename T>
MutantStack<T>::MutantStack(const MutantStack& obj): std::stack<T>(&obj) {}


template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& obj)
{
    std::stack<T>::operator=(obj);
    return(*this);
}

