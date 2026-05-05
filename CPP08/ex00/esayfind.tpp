#include "easyfind.hpp"


template<typename T>
void easyfind(T& type,int number)
{
    std::vector<int>::iterator found;

    found = std::find(type.begin(),type.end(),number);

    if(found != type.end())
        std::cout << "number found: " << *found << std::endl;
    else
        std::cout << "number not found!!" << std::endl; 

}