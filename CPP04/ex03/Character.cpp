#include "Character.hpp"

Character::Character()
{
    // std::cout << "Character Default constructor Called\n";
    name = "";
    for(int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(std::string text)
{
    // std::cout << "Character constructor parametrer Called\n";
    name = text;
    for(int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::~Character()
{
    // std::cout << "Charactere Destructor Called\n";
    for(int i = 0;i < 4 ; i++)
    {
        if(inventory[i] != NULL)
            delete(inventory[i]);
    }
}

Character::Character(const Character& obj)
{
    // std::cout << "Charactere Copy constructor Called\n";
    this->name = obj.name;
    for(int i = 0;i < 4;i++)
    {
        if(obj.inventory[i] == NULL)
            this->inventory[i] = NULL;
        else
            this->inventory[i] = obj.inventory[i]->clone();
    }
}

Character& Character::operator=(const Character &obj)
{
    // std::cout << "Charactere Copy assignment operator Called\n";
    if(this != &obj)
    {
        for(int i = 0;i < 4;i++)
        {
            if(this->inventory[i] != NULL)
                delete this->inventory[i];
            this->inventory[i] = NULL;
        }
        this->name = obj.name;
        for(int i = 0;i< 4;i++)
        {
            if(obj.inventory[i] == NULL)
                this->inventory[i] = NULL;
            else
                this->inventory[i] = obj.inventory[i]->clone();
        }
    }
    return *this;
}

std::string const &Character::getName() const
{
    return name;
}

void Character::equip(AMateria *m)
{
    if(m == NULL)
        return;
    for(int i = 0; i < 4;i++)
    {
        if(this->inventory[i] == NULL)
        {
            this->inventory[i] = m;
            break;
        }
    }
    return;
}

void Character::unequip(int idx)
{
    if(idx >= 0 && idx < 4)
        inventory[idx] = NULL;
    return ;
}

void Character::use(int idx,ICharacter& target)
{
    if(idx >= 0 && idx < 4)
    {
        if(inventory[idx] == NULL)
            return;
        else
            inventory[idx]->use(target);
    }
    return ;
}