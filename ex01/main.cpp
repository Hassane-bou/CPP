#include "Phonebook.hpp"
#include "Contact.hpp"


int main()
{
    Phonebook obj;
    std::string command;
            int index;
    
        do
        {
        std::cout << "\n  This is commands what you can used:  " << "\n\n";
        std::cout << "1." << "ADD   " << "2." << "SEARCH   " << "3." << "EXIT   " <<"\n\n";
        std:: cout << "Please enter one of this command: ";
        std ::getline(std::cin,command);
        if(std::cin.eof())
        {
            std::cout << "thala!!\n";
            return 1;
        }
        if(command == "ADD")
        {
            obj.AddContact();
        }
        else if(command=="SEARCH")
        {
            obj.ShowContact();
            std::cout << "\nDakhl index dyal contact libaghi tchoufo: ";
            std::cin >> index;
            if(std::cin.fail())
            {
                std::cout << "khass index ikon ra9m !!";
                return 1;
            }   
            Contact c = obj.SearchContact(index);
            std::cout <<"\n";

            if(c.GetFirstName() == "")
            {   
                 std::cout << "No Contact found" << "\n";  
            } 
            else
            {
                std::cout << "First Name   : " << " " <<c.GetFirstName() << "\n";
                std::cout << "Last Name    : " << " " << c.GetLastName() << "\n";
                std::cout << "Nick Name    : " << " "<< c.GetNickName() << "\n";
                std::cout << "Phone Number : " << " "<<c.GetPhoneNumber() << "\n";
                std::cout << "Secret       : " << " " << c.GetSecret() << "\n";

            }
        }

        }while(command != "EXIT");

    return 0;

}
