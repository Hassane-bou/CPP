#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource:public IMateriaSource
{
    private:
        AMateria *content[4];
    public:
        ~MateriaSource();
        void learnMateria(AMateria *);
        AMateria* createMateria(std::string const &type);

};


#endif

