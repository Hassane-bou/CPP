#include "templat.hpp"

template<typename T>
Mycontainer<T>::Mycontainer(size_t cap):capacity(cap),count(0)
{
    data = new T[capacity];
    std::cout << "Container created with capacity " << capacity << std::endl;
}

template <typename T>
Mycontainer<T>::~Mycontainer()
{
    delete[] data;
    std::cout << "Container destroyed" << std::endl;

}

template<typename T>
void Mycontainer<T>::add(const T& item)
{
    if(count < capacity)
        data[count++] = item;
    else
    {
        std::cout << "Container is full!" << std::endl;
    }
}

template<typename T>
T& Mycontainer<T>::get(size_t index)
{
    if(index >= count){
        throw std::out_of_range("Index out of range");
    }
    return data[index];
}

template <typename T>
size_t Mycontainer<T>::size() const
{
    return count;
}

template <typename T>
void  Mycontainer<T>::display() const
{
    std::cout << "Container contents: ";
    for(size_t i = 0;i < count;i++)
    {
        std::cout << data[i] << " ";
    }
    std::cout <<std::endl;
}


