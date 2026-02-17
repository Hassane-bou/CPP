#include "Weapon.hpp"

class HumanB{
    private:
        Weapon *weapon;
        std::string name;
    public:
        HumanB(std::string name);
        void setWeapon(Weapon& newWeapon);
        void attack();
};

