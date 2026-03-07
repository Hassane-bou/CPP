#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    // std::cout << "MateriaSource Default constructor\n";
    for(int i = 0; i < 4 ; i++ )
        content[i] = NULL;
}


MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource Destructor Called\n";
    for(int i = 0 ; i < 4; i++)
    {
        if(content[i] != NULL)
            delete content[i];
    }
}

void MateriaSource::learnMateria(AMateria *m)
{
    if(m == NULL)
        return;
    for(int i = 0;i < 4;i++)
    {
        if(this->content[i] == NULL)
        {
            this->content[i] = m;
            break;
        }
    }
    return;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    for(int i = 0;i < 4 ; i++)
    {
        if(content[i] != NULL && content[i]->getType() == type)
            return content[i]->clone();
    }
    return NULL;
}