#include "Weapon.hpp"

class HumanB{

    private:
        std::string name;
        Weapon *weaponPoint;

    public:
        HumanB(std::string name);
        void setWeapon(Weapon &weapon);
        void attack();

};