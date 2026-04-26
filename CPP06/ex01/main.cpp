#include "Serializer.hpp"


int main()
{
    Data *d = new Data();

    d->age = 19;
    d->name = "user";
    d->goals = 20;

    uintptr_t nomber = Serializer::serialize(d);

    std::cout << "nomber: " << nomber << std::endl;


    Data *retour = Serializer::deserialize(nomber);

    std::cout << "nomber: " << retour << std::endl;


    if(retour == d)
        std::cout << "Meme pointeur: " << d << std::endl;
    else
        std::cout << "Non Pas meme Pointeur: " << d << std::endl;

    std::cout << "Name: " << retour->name << std::endl;
    std::cout << "Age: " << retour->age << std::endl;

    // int a = 65;

    // char *c;
    // char *d = reinterpret_cast<char*>(&a);
    
    // std::cout <<  &c << std::endl;
    // std::cout << &d << std::endl;
    // std::cout << &a << std::endl;
    delete d;
    return 0;
}