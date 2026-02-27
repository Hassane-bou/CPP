#ifndef FRAGTAPP_HPP
#define FRAGTAPP_HPP

#include "ClapTrap.hpp"

class FragTrap:public ClapTrap
{
    public:
        FragTrap();
        ~FragTrap();
        FragTrap(std::string Name);
        FragTrap(const FragTrap &obj);
        FragTrap& operator=(const FragTrap &obj);
        void highFivesGuys(void);
};


#endif