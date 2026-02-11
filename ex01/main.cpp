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
        std::cout << "\n";
        if(std::cin.eof())
        {
            std::cout << "thala!!\n";
            return 1;
        }
        if(command == "ADD")
        {
            obj.AddContact();
        }
        else if(command == "SEARCH")
        {
            obj.ShowContact();
            if(obj.ReadValidIndex("\nPlease enter index: ",index))
            {
                Contact c = obj.SearchContact(index);
                std::cout <<"\n";

                if(c.GetFirstName() == "")
                {   
                    std::cout << "\nNo Contact found" << "\n";  
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
        }
        }while(command != "EXIT");

    return 0;

}
