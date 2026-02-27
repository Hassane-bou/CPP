#include "ScavTrap.hpp"

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " <<  Name  <<" is now Gate Keeper mode\n";
}
ScavTrap::ScavTrap():ClapTrap()
{
    std::cout << "ScavTrap Default  Constructor Called\n";
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
};

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << "ScavTrap Constructor Parameterer called\n";
    Name = name;
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &obj): ClapTrap(obj)
{
    std::cout << "ScavTrap Copy constructor Called\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap &obj)
{ 
    std::cout << "ScavTrap Copy assignement Called\n";
    ClapTrap::operator=(obj);
    return *this;
}
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor Called\n";
}

void ScavTrap::attack(const std::string& target)
{
    if(Hit_points == 0)
    {
        std::cout << "ScavTrap " << Name << " Cannot attack because HitPoint is over\n";
        return;
    }
    else if(Energy_points == 0)
    {
        std::cout << "ScavTrap " << Name << " cannot do anything because don't have energy!!\n";
        return ;
    }
    Energy_points -= 1;
    std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << Attack_damage
                << " points of damage!" << "\n";
}
