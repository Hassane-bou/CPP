#include "Weapon.hpp"

class HumanA{

    private:
        std::string name;
        Weapon &weapon;

    public:
        HumanA(const std::string &input,Weapon &obj);
        void attack();

};