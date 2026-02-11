#include "Phonebook.hpp"

Phonebook::Phonebook()
{
    count = 0;
}
int CheckTabInput(std::string &input)
{
    int i = 0;
    while(input[i])
    {
        if(input[i] == '\t')
            return 1;
        i++;
    }
    return 0;
}

bool Phonebook::ReadValidIndex(const std::string &text, int &index)
{
    std::string input;

    std::cout << text;
    std::getline(std::cin,input);
    
    if(std::cin.eof())
    {
        return false;
    }
    if(input.empty())
    {
        std::cout << "\nErreur: Input Empty!!!\n";
        return false;
    }
    for(size_t i = 0; i < input.length();i++)
    {
        if(!isdigit(input[i]))
        {
            std::cout << "\nPlease enter a digit number\n";
             return false;
        }
    }
    index = std::stoi(input.c_str());
    if(index < 0 || index > 7 )
    {
        std::cout << "\nIndex is out of range (0-7)\n";
        return false;
    }
    return true;
}

bool ChechValidInput(const std::string &text,std::string &input)
{
    do{
          std::cout << text ;
          std::getline(std::cin,input);
          if(std::cin.eof())
          {
            std::cout << "Lah i3awn\n";
            return false;
          }
          if(CheckTabInput(input))
          {
            std::cout << "Erreur : Tab invalid Input!!!\n" ;
            return false;
          }
          if(input.empty())
              std::cout << "Erreur: Input Empty!!!\n";
    }while(input.empty());

    std::cout << "\n";
    return true;
}
void Phonebook::AddContact()
{
    Contact info;
    std::string input;

    if(!ChechValidInput("Please  enter First Name: ",input))
        return ;
    info.SetFirstName(input);
    
    if(!ChechValidInput("Please enter Last Name: ",input))
        return ;
    info.SetLastName(input);

    if(!ChechValidInput("Please enter Nick Name: ",input))
        return ;
    info.SetNickName(input);
    if(!ChechValidInput("Please enter Phone Number: ",input))
        return ;
    info.SetPhoneNumber(input);

    if(!ChechValidInput("Please enter Secret: ",input))
        return ;

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

