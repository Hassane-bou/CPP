#include "ClapTrap.hpp"


int main()
{
    ClapTrap a;
    ClapTrap b("Bob");
    ClapTrap c = b;

    a = c;

for(int i = 1;i < 12;i++)
   b.attack("Person1");
b.attack("Person2");


    return 0;
}