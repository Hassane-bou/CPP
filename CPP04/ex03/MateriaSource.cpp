#include "MateriaSource.hpp"

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource Destructor Called\n";
}

void MateriaSource::learnMateria(AMateria *m)
{
    if(m == NULL)
        return;
    for(int i = 0;i < 4;i++)
    {
        if(this->content[i] == NULL)
            this->content[i] = m;
    }
    return;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    for(int i = 0;i < 4 ; i++)
    {
        if(content[i]->getType() == type)
            return content[i]->clone();
    }
    return NULL;
}