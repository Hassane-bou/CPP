#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include "Contact.hpp"

class Phonebook
{
    private:
        Contact tab[8];
        int count;
    public:
        Phonebook();
        void AddContact();
        void ShowContact();
        Contact SearchContact(int index);

};


#endif