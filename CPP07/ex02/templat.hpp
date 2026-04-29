#pragma once

#include <iostream>

template<typename T>
class Mycontainer{
    private:
        T* data;
        size_t capacity;
        size_t count;

    public:
        Mycontainer(size_t cap = 10);
        ~Mycontainer();

        void add (const T& item);
        T& get(size_t index);
        const T& get(size_t index) const;
        size_t size() const;
        void display() const;
};

#include "templat.tpp"
