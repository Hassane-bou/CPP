#pragma once

#include <iostream>
#include <exception>

template<typename T>
class Array{
    private:
        unsigned int _size;
        T* _data;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        Array& operator=(const Array& obj);
        unsigned int size() const;
        T& operator[](unsigned int index);
        ~Array();
};

#include "Array.tpp"