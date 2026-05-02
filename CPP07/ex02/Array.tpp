#include "Array.hpp"

template<typename T>
Array<T>::Array()
{
    _size = 0;
    _data = NULL;

    std::cout  << "Constructor default called\n";
}

template<typename T>
Array<T>::Array(unsigned int n)
{
    _size = n;
    _data = new T[n];

    std::cout << "Constructor paramater Called\n";
}

template <typename T>
Array<T>::Array(const Array& other)
{
    _size = other._size;
    _data = new T[_size];
    for( unsigned int i = 0;i < _size;i++)
    {
        _data[i] = other._data[i];
    }
    std::cout << "Copy constructor Called\n";
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& obj)
{

    std::cout << "Copy assignment called\n";

    if(this == &obj)
        return (*this);
    delete [] this->_data;  
    this->_size = obj._size;
    this->_data = new T[_size];
    for( unsigned int i = 0; i < this->_size ; i++)
        this->_data[i] = obj._data[i];
    return *this;
}

template<typename T>
unsigned int Array<T>::size()const
{
    return _size;
}

template<typename T>
T& Array<T>::operator[](unsigned int index)
{
    if(index >= _size)
        throw typename Array<T>::ErrorException();
    
    return _data[index];
}

template<typename T>
Array<T>::~Array()
{
    std::cout << "destructor Called\n";
    delete [] _data;
}
