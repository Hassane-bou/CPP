#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructor Called\n";
}

Brain::~Brain()
{
    std::cout << "Brain Deconstructor Called\n";
}

Brain::Brain(const Brain& obj)
{
    std::cout << "Brain Copy Constructor Called\n";
    *this = obj;
}

Brain& Brain::operator=(const Brain& obj)
{
    std::cout << "Brain Copy assignment Called\n";
    for(int i = 0; i < 99 ; i++)
        this->ideas[i] = obj.ideas[i];
    return *this;
}

