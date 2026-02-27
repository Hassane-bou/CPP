#include "ScavTrap.hpp"

int main()
{
    ScavTrap a;
    ScavTrap b("Bob");
    b = a;
    b.attack("Enemy");
    b.takeDamage(20);
    b.beRepaired(10);
    
    a.guardGate();
    b.guardGate();
    return 0;
}
