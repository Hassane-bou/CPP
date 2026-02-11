#include "Phonebook.hpp"

Phonebook::Phonebook()
{
    count = 0;
}
void Phonebook::AddContact()
{
    Contact info;
    std::string input;

    do{
        std::cout << "Please  enter First Name: ";
        std::getline(std::cin,input);
        if(std::cin.eof())
        {
            std::cout << "thala!!\n";
            return;
        }
        if(input.empty())
            std::cout << "Erreur: input is empty!!\n";
    }while(input.empty());
    std::cout << "\n";
    info.SetFirstName(input);
    do{
        std::cout << "Please enter Last Name: ";
        std::getline(std::cin,input);
        if(std::cin.eof())
        {
            std::cout << "thala!!\n";
            return;
        }
        if(input.empty())
            std::cout << "Erreur: input is empty!!\n";
    }while(input.empty());
    std::cout << "\n";
    info.SetLastName(input);

    do{
        std::cout << "Please enter NickName: ";
        std::getline(std::cin,input);
        if(std::cin.eof())
        {
            std::cout << "thala!!\n";
            return;
        }
        if(input.empty())
            std::cout << "Erreur: input is empty!!\n";
    }while(input.empty());
    std::cout << "\n";
    info.SetNickName(input);
    do{
        std::cout << "Please enter Phone book: ";
        std::getline(std::cin,input);
        if(std::cin.eof())
        {
            std::cout << "thala!!\n";
            break;
        }
        if(input.empty())
            std::cout << "Erreur: input is empty!!\n";
    }while(input.empty());

    std::cout << "\n";
    info.SetPhoneNumber(input);

    do{
        std::cout << "Please enter secret: ";
        std::getline(std::cin,input);
        if(std::cin.eof())
        {
            std::cout << "thala!!\n";
            return;
        }
        if(input.empty())
            std::cout << "Erreur: input is empty!!\n";
    }while(input.empty());
    std::cout << "\n";
    info.SetSecret(input);

    tab[count %  8] = info;
    count++;
}


void Phonebook::ShowContact()
{
    int number;
    int length = 0;
    if(count > 8)
        number = 8;
    else
        number = count;
    std::cout << "--------------------------------------------" <<"\n";
    std::cout << "    index " << "|" << "First Name" << "|" << "Last Name " << "|" << "Nick Name " << "\n";
    std::cout << "--------------------------------------------" <<"\n";


    for(int i = 0; i < number ; i++)
    {
        std::cout << std::setw(10) << i << "|";
        length = tab[i].GetFirstName().length();
        if(length > 10)
            std::cout << tab[i].GetFirstName().substr(0,9) + ".";
        else
            std::cout << std::setw(10) << tab[i].GetFirstName() ;
        std::cout << "|";

        length = tab[i].GetLastName().length();
        if(length > 10)
            std::cout << tab[i].GetLastName().substr(0,9) + ".";
        else
            std::cout << std::setw(10) << tab[i].GetLastName() ;
        std::cout << "|";

        length = tab[i].GetNickName().length();
        if(length > 10)
            std::cout << tab[i].GetNickName().substr(0,9) + ".";
        else
            std::cout << std::setw(10) << tab[i].GetNickName() ;
        std::cout << "\n";

    }
   

}


Contact Phonebook::SearchContact(int index)
{
   if(index < 0 || index >= count || index >= 8 )
    {
        return Contact();
    }
    return tab[index];
}

