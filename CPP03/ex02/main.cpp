#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap s;
    ScavTrap v("test");

    ScavTrap c("Person1");
    FragTrap d("test1");
    c = v;

    

    c.attack("Name1");
    c.takeDamage(50);
    c.beRepaired(10);

    c.guardGate();
    d.highFivesGuys();
    d.attack("hdhd");

}