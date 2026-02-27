#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
    std::cout << "FragTrap Default constructor Called\n";
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    std::cout << "FragTrap Constructor parameter Called\n";
    Name = name;
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &obj):ClapTrap(obj)
{
    std::cout << "FragTrap copy constructor Called\n";
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
    std::cout << "FragTrap copy assignement Called\n";
    ClapTrap::operator=(obj);

    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Deconstructor Called\n"; 
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << Name << " highFivesGuy\n";
}
