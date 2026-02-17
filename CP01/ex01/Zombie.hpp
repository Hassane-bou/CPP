#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <sstream>
#include <cstdlib>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        void annonce(void);
        void SetName(std::string name);
};

    Zombie* zombieHorde( int N, std::string name );



#endif