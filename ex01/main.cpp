#include "Phonebook.hpp"
#include "Contact.hpp"



int main()
{
    Phonebook obj;
    std::string command;
    

    do{
        std::cout << "This the commaand what you can used " << "\n\n";
        std::cout << "1. " << "ADD " << "2." << "SEARCH " << "3." << "EXIT " <<"\n\n";
        std:: cout << "Please enter one of this command: ";
        std ::cin >> command;
        if(command == "ADD")
        {
            obj.AddContact();
        }
        else if(command=="SEARCH")
        {
            obj.ShowContact();

            int index;
            std::cout << "Dakhl index dyal contact libaghi tchoufo: ";
            std::cin >> index;

            if(std::cin.fail())
                exit(0);
                
            Contact c = obj.SearchContact(index);
            std::cout << "First Name: " << c.GetFirstName() << "\n";
            std::cout << "Last Name: " << c.GetLastName() << "\n";
            std::cout << "Nick Name: " << c.GetNickName() << "\n";
            std::cout << "Phone Number: " << c.GetPhoneNumber() << "\n";
            std::cout << "Secret: " << c.GetSecret() << "\n";
        }

    }while(command != "EXIT");

    return 0;

}
