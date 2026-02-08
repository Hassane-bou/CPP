#include "Phonebook.hpp"

Phonebook::Phonebook()
{
    count = 0;
}

void Phonebook::AddContact()
{
    Contact info;
    std::string input;

    std::cout << "Please  enter First Name: ";
    std::cin >> input;
    info.SetFirstName(input);

    std::cout << "Please enter Last Name: ";
    std::cin >> input;
    info.SetLastName(input);

    std::cout << "Please enter NickName: ";
    std::cin >> input;
    info.SetNickName(input);

    std::cout << "Please enter Phone book: ";
    std::cin >> input;
    info.SetPhoneNumber(input);

    std::cout << "Please enter secret: ";
    std::cin >> input;
    info.SetSecret(input);

    tab[count %  8] = info;
    count++;
    
}
void Phonebook::ShowContact()
{
    int number;
    if(count > 8)
        number = 8;
    else
        number = count;
    std::cout << "--------------------------------------------" <<"\n";
    std::cout << " index " << "|" << " First Name " << "|" << " Last Name " << "|" << " Nick Name " << "\n";
    std::cout << "--------------------------------------------" <<"\n";

    for(int i = 0; i < number ; i++)
    {
        std::cout << i << " | " << tab[i].GetFirstName() << " | " << tab[i].GetLastName()
                  << " | " << tab[i].GetNickName() << "\n";             
    }

}


Contact Phonebook::SearchContact(int index)
{
   if(index < 0 || index >= count || index >= 8)
    {
        std::cout << "\nInvalid index\n";
        return Contact();
    }
    return tab[index];
}

