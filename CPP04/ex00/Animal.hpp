#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal{

    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal &obj);
        Animal& operator=(const Animal &obj);
        ~Animal();
        std::string getType() const;
        virtual void makeSound() const;

};


#endif