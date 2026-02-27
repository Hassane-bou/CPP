#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor Called\n";
    
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
}
ClapTrap::ClapTrap(std::string text)
{
    Name = text;
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
}
ClapTrap::ClapTrap(const ClapTrap &obj)
{
    std::cout << "Copy constructor Called\n";
    *this = obj;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj)
{
    std::cout << "Copy assignement Called\n";
    this->Name = obj.Name;
    this->Hit_points = obj.Hit_points;
    this->Energy_points = obj.Energy_points;
    this->Attack_damage= obj.Attack_damage;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Deconstructor Called\n";
}
void ClapTrap::attack(const std::string& target)
{
    if(Hit_points == 0)
    {
        std::cout << "ClapTrap " << Name << " Cannot attack because HitPoint is over\n";
        return;
    }
    else if(Energy_points == 0)
    {
        std::cout << "ClapTrap " << Name << " cannot do anything because don't have energy!!\n";
        return ;
    }
    Energy_points -= 1;
    std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << Attack_damage
                << " points of damage!" << "\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(Hit_points == 0)
    {
        std::cout << "ClapTrap " << Name << " Cannot take damage with 0 Hit_point" << "\n";
        return ;
    }
    if(amount >= Hit_points)
    {
        std::cout << "set Hit point to 0 know\n";
        Hit_points = 0;
    }
    else
    {
        Hit_points -= amount;
        std::cout << "ClapTrap " << Name << " take " << amount << ", causing " << Attack_damage
                << " points of damage!" << "\n";
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(Hit_points == 0)
    {
        std::cout << "ClapTrap " << Name << " Cannot be repaired\n";
        return;
    }
    else if(Energy_points == 0)
    {
        std::cout << "ClapTrap " << Name << " Cannot be repaired\n";
        return ;
    }
    Hit_points += amount;
    Energy_points -= 1;
    std::cout << "ClapTrap " << Name << " is repaired by " << amount << " hit points " << "\n";
}
