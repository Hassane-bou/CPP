#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact{

        private:
                std::string FirstName;
                std::string LastName;
                std::string NickName;
                std::string PhoneNumber;
                std::string Secret;
        public:
                Contact();
                void SetFirstName(std::string firstname);
                std::string GetFirstName() const;
                void SetLastName(std::string Lastname);
                std::string GetLastName() const;
                void SetNickName(std::string Nickname);
                std::string GetNickName() const;
                void SetPhoneNumber(std::string PhoneNumber);
                std::string GetPhoneNumber() const;
                void SetSecret(std::string Secret);
                std::string GetSecret() const;
                
};

#endif